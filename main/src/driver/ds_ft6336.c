
#include <string.h>
#include <stdio.h>

#include "ds_ft6336.h"
#include "ds_i2c.h"
#include "ds_gpio.h"
#include "ds_system_data.h"

//Max 5 Touch point
const uint16_t FT6236_TPX_TBL[5] = {
	FT_TP1_REG,
	FT_TP2_REG,
	FT_TP3_REG,
	FT_TP4_REG,
	FT_TP5_REG,
};

TouchPoint_T gTPS;

//Scan the touch screen' status and data
static void scan_ft6336(){
	uint8_t  i = 0;
	uint8_t sta = 0;
	uint8_t buf[4]  = {0};
	uint8_t gestid = 0;
	i2c_master_read_slave(0x02,&sta,1); //reading touch point status
	gTPS.touch_count = sta; // how many fingres touch the screen
	i2c_master_read_slave(0x01,&gestid,1); //reading touch point status
	if(sta & 0x0f) { //Check touch validation
		gTPS.touch_sta = ~(0xFF << (sta & 0x0F));//~(0xFF << (sta & 0x0F)) will convert the touch point number to touch validation
		for(i = 0; i < 2; i++){						//identifing whther 1-5 point has been pressed
			if(gTPS.touch_sta&(1<<i)){// reading touch corrdination
				i2c_master_read_slave(FT6236_TPX_TBL[i], buf, 4); // reading XY corrdinate value
				gTPS.x[i] = ((uint16_t)(buf[0]&0x0F) <<8) + buf[1];
				gTPS.y[i] = ((uint16_t)(buf[2]&0x0F) <<8) + buf[3];
			} 
		}
		gTPS.touch_sta |= TP_PRES_DOWN; // press down mark;
	}else{
		if(gTPS.touch_sta & TP_PRES_DOWN){//marked previously 
			gTPS.touch_sta &= ~0x80;
		} else{
			gTPS.x[0] = 0;
			gTPS.y[0] = 0;
			gTPS.touch_sta &= 0xe0; //clear marks
		}
	}
}

//Physical Loaction Convertion
static void count_position_ft6336(TP_POSITION_T *position){
	switch(gTPS.touch_count){
		case1:
			if((gTPS.x[0] != 0)&&(gTPS.y[0] != 0)
			&&(gTPS.x[0] < 200) && (gTPS.y[0]<200)){//invalide action
				//To 152x152 - Screen Size
				gTPS.x[0] = gTPS.x[0]*152/200;
				gTPS.y[0] = gTPS.y[0]*152/200;
				position->status = 1;
				position->x = gTPS.x[0];
				position->y = gTPS.y[0];
				/*-----------Test-----------------*/
				printf("Touch point =%d \r\n",gTPS.touch_count);
				printf("x0: %d, y0: %d\r\n",gTPS.x[0], gTPS.y[0]);
				return;
			}
			break;
		case2:
			if((gTPS.x[0] != 0)&&(gTPS.y[0] != 0)
			&&(gTPS.x[0] < 200) && (gTPS.y[0]<200)
			&&(gTPS.x[1] != 0)&&(gTPS.y[1] != 0)
			&&(gTPS.x[1] < 200) && (gTPS.y[1]<200)){//invalide action
				//152x152
				gTPS.x[0] = gTPS.x[0]*152/200;
				gTPS.y[0] = gTPS.y[0]*152/200;
				gTPS.x[1] = gTPS.x[1]*152/200;
				gTPS.y[1] = gTPS.y[1]*152/200;

				/*-----------Test-----------------*/
				printf("Touch point =%d \r\n",gTPS.touch_count);
				printf("x0: %d, y0: %d\r\n",gTPS.x[0], gTPS.y[0]);
				printf("x1: %d, y1: %d\r\n",gTPS.x[1], gTPS.y[1]);
			}
			break;
		default:
			break;
	}
	for(int i = 0; i < 2;i++){
		gTPS.x[i] = 0;
		gTPS.y[i] = 0;
	}
	position->status = 0;
	position->x =gTPS.x[0];
	position->y = gTPS.y[0];
}

//Touch terminate
void get_ft6336_touch_sta(TP_POSITION_T *position){
	scan_ft6336();
	count_position_ft6336(position);
}

//Initizalition
void init_ft6336(){
	uint8_t w_data, r_data = 0;
	memset(&gTPS,0,sizeof(TouchPoint_T));

	//GPIO Initial 
	ds_touch_gpio_init();
	//Rest Inital
	ds_gpio_set_touch_rst(GPIO_RST_LOW);
	vTaskDelay(50 / portTICK_PERIOD_MS);
	ds_gpio_set_touch_rst(GPIO_RST_HIGHT);
	vTaskDelay(100 / portTICK_PERIOD_MS);

	//I2C Initial
	i2c_master_init();
	vTaskDelay(100 / portTICK_PERIOD_MS);

	w_data = 0;
	//Normal Mode
	i2c_master_write_slave(FT_DEVIDE_MODE, &w_data,1);
	w_data = 22;
	//touch sensitive level
	i2c_master_write_slave(FT_ID_G_THGROUP, &w_data,1);
	i2c_master_read_slave(FT_ID_G_THGROUP,&r_data,1);
	prinf("Initi THROUP = %d \n", r_data);
	w_data = 14;
	//Setting Active Periodic between 12 and 14
	i2c_master_write_slave(FT_ID_G_PERIODACTIVE,&w_data,1); 
	i2c_master_read_slave(FT_ID_G_PERIODACTIVE,&r_data,1);
    printf("init PERIODACTIVE = %d \n",r_data);
	w_data = 0;
	//Terminate
	i2c_master_write_slave(FT_ID_G_MODE,&w_data,1);
	i2c_master_read_slave(FT_ID_G_MODE,&r_data,1);
    printf("init G_MODE = %d \n",r_data);
}
