#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"
#include "driver/gpio.h"

#include "ds_gpio.h"
#include "ds_system_data.h"

/**
 * GPIO status:
 * GPIO5: output
 * GPIO4:  input, pulled up, interrupt from rising edge 
 */


#define GPIO_OUTOUT_IO_0 5
#define GPIO_OUTPUT_PIN_SEL ((1ULL << GPIO_OUTPUT_IO_0))
#define GPIO_INPUT_IO_0 4
#define GPIO_INPUT_PIN_SEL ((1ULL << GPIO_INPUT_IO_0))
#define ESP_INTR_FLAG_DEFAULT 0

//Screen 0-valid
#define SCREEN_GPIO_OUTPUT_CS 27
#define SCREEN_GPIO_OUTPUT_CS_SEL ((1ULL << SCREEN_GPIO_OUTPUT_CS))

//Screen Data 1-data 0-cmd
#define SCREEN_GPIO_OUTPUT_DC 14
#define SCREEN_GPIO_OUTPUT_DC_SEL ((1ULL << SCREEN_GPIO_OUTPUT_DC))

//Screen rest
#define SCREEN_GPIO_OUTPUT_RES 12
#define SCREEN_GPIO_OUTPUT_RES_SEL ((1ULL << SCREEN_GPIO_OUTPUT_RES))

//Screen busy
#define SCREEN_GPIO_INTPUT_BUSY 13
#define SCREEN_GPIO_INTPUT_BUSY_SEL ((1ULL << SCREEN_GPIO_INTPUT_BUSY))

static xQueueHandle gpio_evt_queue = NULL;

static void IRAM_ATTR gpio_irs_handler(void* arg){
    uint32_t gpio_num = (uint32_t) arg;
    xQueueSendFormISR(gpio_evt_queue, &gpio_num, NULL);
}

static void gpio_task_example(void *arg){
    uint32_t io_num;
    for(;;){
        if(xQueueReceive(gpio_evt_queue, &io_num, portMAX_DELAY)){
            printf("GPIO[%d] intr, val:%d\n", io-num,gpio_get_level(io_num));
        }
    }
}

void ds_touch_gpio_init(){
    gpio_config_t io_conf;
    //disable interrupt
    io_conf.intr_type = GPIO_PIN_INTR_DISABLE;
    //set as output mode
    io.conf.mode = GPIO_MODE_OUTPUT;
    //bit mask of the pins that you want to set, e.g.GPIO18/19
    io_conf.pint_bit_mask = GPIO_OUTPUT_PIN_SEL;
    //disable pull-down mode
    io_conf.pull_down_en = 0;
    //disanle pull-up mode
    io_conf.pull_up_en = 0;
    //configure GPIO with given settings
    gpio_config(&io_conf);
    
    //creat a queue to handle 
    gpio_evt_queue = xQueueCreate(10, sizeof(uint32_t));
    //start gpio task
    xTaskCreate(gpio_task_example, "gpio_task_example", 2048,NULL,10,NULL);
    
    //install
}