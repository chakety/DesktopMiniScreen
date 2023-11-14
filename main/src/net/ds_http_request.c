/* HTTP GET Example using plain POSIX sockets

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_wifi.h"
#include "esp_event.h"
#include "esp_log.h"
#include "nvs_flash.h"

#include "lwip/err.h"
#include "lwip/sockets.h"
#include "lwip/sys.h"
#include "lwip/netdb.h"
#include "lwip/dns.h"

#include "esp_netif.h"
#include "esp_tls.h"
#include "esp_http_client.h"
#include "cJSON.h"

#include "ds_http_request.h"


static const char *TAG = "HTTP_CLIENT";
//-------------------------TIME------------------------

/*
{
  "abbreviation": "EST",
  "client_ip": "2601:182:ca00:6a70:d4b2:c769:9fa1:cfc6",
  "datetime": "2023-11-14T14:34:51.320292-05:00",
  "day_of_week": 2,
  "day_of_year": 318,
  "dst": false,
  "dst_from": null,
  "dst_offset": 0,
  "dst_until": null,
  "raw_offset": -18000,
  "timezone": "America/New_York",
  "unixtime": 1699990491,
  "utc_datetime": "2023-11-14T19:34:51.320292+00:00",
  "utc_offset": "-05:00",
  "week_number": 46
}
*/
static void cjson_time_info(char *text){
    cJSON *root,*psub;
    char time[20];
    char *index=strchr(text,'{');
    strcpy(text,index);
    root = cJSON_Parse(text);
    if(root!=NULL)
    {
        psub = cJSON_GetObjectItem(root, "datetime");
        if (psub != NULL && cJSON_IsString(psub)) {
            // Extract date and time without milliseconds and timezone
            sscanf(psub->valuestring, "%[^.]", time);
            ESP_LOGI(TAG, "DateTime: %s", time);
        }
    }
    cJSON_Delete(root);
}

/*
-------------------------WEATHER------------------------------

{
    "location": {
        "name": "Boston",
        "region": "Massachusetts",
        "country": "United States of America",
        "lat": 42.36,
        "lon": -71.06,
        "tz_id": "America/New_York",
        "localtime_epoch": 1699989168,
        "localtime": "2023-11-14 14:12"
    },
    "current": {
        "temp_c": 8.9,
        "condition": {
            "text": "Partly cloudy"
        },
        "humidity": 54
    }
}

*/
static void cjson_weather_info(char *text){
    cJSON *root, *location, *current ,*condition;
    char name[50], region[50], country[50], temp_c[10], condition_text[50];

     // Find the first occurrence of '{' in the text

     char *index=strchr(text,'{');
     strcpy(text,index);

     //Parsing the JSON data
     root = cJSON_Parse(text);

     if(root != NULL){
        //Get location and current objects
        location = cJSON_GetObjectItem(root, "location");
        current = cJSON_GetObjectItem(root, "current");

        if(location != NULL && current != NULL){
            //Extract values from the location
            snprintf(name, sizeof(name), "%s", cJSON_GetObjectItem(location, "name")->valuestring);
            ESP_LOGI(TAG, "name: %s", name);
            
            snprintf(region, sizeof(region), "%s", cJSON_GetObjectItem(location, "region")->valuestring);
            ESP_LOGI(TAG, "region: %s", region);

            snprintf(country, sizeof(country), "%s", cJSON_GetObjectItem(location, "country")->valuestring);
            ESP_LOGI(TAG, "country: %s",country);

            //Extract values from the current object
            cJSON *tempObject = cJSON_GetObjectItemCaseSensitive(current, "temp_c");
            if (cJSON_IsNumber(tempObject)) {
                double temperature = tempObject->valuedouble;
                snprintf(temp_c, sizeof(temp_c), "%.1f", temperature);
                ESP_LOGI(TAG, "Temperature (C): %s", temp_c);
            }
            //Extract text from the condition object
            condition = cJSON_GetObjectItem(current, "condition");
            if(condition != NULL){
                snprintf(condition_text, sizeof(condition_text), "%s", cJSON_GetObjectItem(condition, "text")->valuestring);
                ESP_LOGI(TAG, "Condition: %s", condition_text);
            }
        }
     }

     cJSON_Delete(root);
}


static esp_err_t _http_time_event_handle(esp_http_client_event_t *evt)
{
    switch(evt->event_id) {
        case HTTP_EVENT_ON_DATA://Recieve Event
            ESP_LOGI(TAG, "HTTP_EVENT_ON_DATA, len=%d", evt->data_len);
            if (!esp_http_client_is_chunked_response(evt->client)) {
                printf("%.*s\n", evt->data_len, (char*)evt->data);
                cjson_time_info((char*)evt->data);
            }
            break;
        case HTTP_EVENT_ERROR:
            break;
        case HTTP_EVENT_ON_CONNECTED:
            break;
        case HTTP_EVENT_HEADERS_SENT:
            break;
        case HTTP_EVENT_ON_HEADER:
            break;
        case HTTP_EVENT_DISCONNECTED:
            break;
        case HTTP_EVENT_ON_FINISH:
            break;
    }
    return ESP_OK;
}

static esp_err_t _http_weather_event_handle(esp_http_client_event_t *evt)
{
    switch(evt->event_id) {
        case HTTP_EVENT_ON_DATA://Recieve Event
            ESP_LOGI(TAG, "HTTP_EVENT_ON_DATA, len=%d", evt->data_len);
            if (!esp_http_client_is_chunked_response(evt->client)) {
                printf("%.*s\n", evt->data_len, (char*)evt->data);
                cjson_weather_info((char*)evt->data);
            }
            break;
        case HTTP_EVENT_ERROR:
            break;
        case HTTP_EVENT_ON_CONNECTED:
            break;
        case HTTP_EVENT_HEADERS_SENT:
            break;
        case HTTP_EVENT_ON_HEADER:
            break;
        case HTTP_EVENT_DISCONNECTED:
            break;
        case HTTP_EVENT_ON_FINISH:
            break;
    }
    return ESP_OK;
}

void http_time_get(){
    esp_http_client_config_t config = {
        .method = HTTP_METHOD_GET,
        .url = "http://worldtimeapi.org/api/timezone/America/New_York",
        .event_handler = _http_time_event_handle,
        .skip_cert_common_name_check = true,
    };

    //Initilization
    esp_http_client_handle_t time_client = esp_http_client_init(&config);
    esp_err_t err = esp_http_client_perform(time_client);

    if(err == ESP_OK)
	{
		ESP_LOGI(TAG, "Status = %d, content_length = %d",
				esp_http_client_get_status_code(time_client),
				esp_http_client_get_content_length(time_client));
	}
	esp_http_client_cleanup(time_client);
}

void http_weather_get(){
    esp_http_client_config_t config = {
        .method = HTTP_METHOD_GET,
        .url = "http://api.weatherapi.com/v1/current.json?key=c8b2488b50e84bcfbf5161013231411&q=Boston&aqi=no",
        .event_handler =  _http_weather_event_handle,
        .skip_cert_common_name_check = true,
    };

    //Initilization
    esp_http_client_handle_t weather_client = esp_http_client_init(&config);
    esp_err_t err = esp_http_client_perform(weather_client);

    if(err == ESP_OK)
	{
		ESP_LOGI(TAG, "Status = %d, content_length = %d",
				esp_http_client_get_status_code(weather_client),
				esp_http_client_get_content_length(weather_client));
	}
	esp_http_client_cleanup(weather_client);
}


void ds_http_post(void)
{
    // //http client配置
    // esp_http_client_config_t config = {
    //     .method = HTTP_METHOD_GET, //get请求
    //     .url = "http://quan.suning.com/getSysTime.do",
    //     .event_handler = _http_event_handle,//注册时间回调
    //     .skip_cert_common_name_check = true,
    // };

    // // // POST
    // // const char *post_data = "field1=value1&field2=value2";
    // // esp_http_client_set_url(client, "http://httpbin.org/post");
    // // esp_http_client_set_method(client, HTTP_METHOD_POST);
    // // esp_http_client_set_post_field(client, post_data, strlen(post_data));
    // // int err = esp_http_client_perform(client);
    // // if (err == ESP_OK) {
    // //     ESP_LOGI(TAG, "HTTP POST Status = %d, content_length = %d",
    // //             esp_http_client_get_status_code(client),
    // //             esp_http_client_get_content_length(client));

    // //             int len =  esp_http_client_get_content_length(client);
    // //             int read_len = 0;
    // //             char buf[1024] = {0};
    // //             read_len = esp_http_client_read(client, buf, len);
    // //             printf("\nrecv data len:%d %d %s\n",read_len,len,buf);
    // // } else {
    // //     ESP_LOGE(TAG, "HTTP POST request failed: %s", esp_err_to_name(err));
    // // }

    // esp_http_client_cleanup(client);
}


xQueueHandle http_get_event_queue;

void ds_http_set_type(HTTP_GET_TYPE_E type){
    HTTP_GET_EVENT_T evt;
	evt.type = type;
	xQueueSend(http_get_event_queue, &evt, 10);
}

static void http_get_task(void *pvParameters)
{
    while(1) {
         http_time_get();
        // HTTP_GET_EVENT_T evt;
        // xQueueReceive(http_get_event_queue, &evt, portMAX_DELAY);
        // ESP_LOGI(TAG, "http_get_task %d",evt.type);
        // vTaskDelay(1000 / portTICK_PERIOD_MS);
        // if(evt.type == HTTP_GET_TIME){
        //     http_time_get();
        // }else if(evt.type == HTTP_GET_WEATHER){
        //     http_weather_get();
        // }else if(evt.type == HTTP_GET_FANS){
        //     http_fans_get();
        // }else if(evt.type == HTTP_GET_CITY){
        //     http_city_get();
        // }
        vTaskDelay(10000 / portTICK_PERIOD_MS);
        http_weather_get();
        vTaskDelay(10000 / portTICK_PERIOD_MS);

    }
}

void ds_http_request_init(void)
{
	http_get_event_queue = xQueueCreate(10, sizeof(HTTP_GET_EVENT_T));
    xTaskCreate(&http_get_task, "http_get_task", 4096, NULL, 5, NULL);
}
