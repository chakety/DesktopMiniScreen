#ifndef _DS_FT6336_H_
#define _DS_FT6336_H_

#include <stdio.h>
#include <stdbool.h>

#define GPIO_RST_LOW 0		//low-voltage
#define GPIO_RST_HIGHT 1	//high-voltage

#define TP_PRES_DOWN 0x80	//screen pressed
#define TP_COORD_UD 0x40	//Coordination update

//FT6236 部分寄存器定义 
#define FT_DEVIDE_MODE 			0x00   		//FT6236 Drive Mode
#define FT_REG_NUM_FINGER       0x02		//Touch 

#define FT_TP1_REG 				0X03	  	//First Touch Data Location
#define FT_TP2_REG 				0X09		//Second Touch Data Location
#define FT_TP3_REG 				0X0F		//Third Touch Data Location
#define FT_TP4_REG 				0X15		//Fourth Touch Data Location
#define FT_TP5_REG 				0X1B		//Fifth Touch Data Location 

#define	FT_ID_G_LIB_VERSION		0xA1		//Version		
#define FT_ID_G_MODE 			0xA4   		//FT6236 G Mode Reg
#define FT_ID_G_THGROUP			0x80   		//Valid Touch Reg
#define FT_ID_G_PERIODACTIVE	0x88   		//Active time Reg  
#define Chip_Vendor_ID          0xA3        //Chip id(0x36)
#define ID_G_FT6236ID			0xA8		//0x11

typedef struct
{
	uint8_t status;
	uint16_t x;
	uint16_t y;
}TP_POSITION_T;

//Touch point definition
typedef struct			
{
	//bit7:1-presse 0-release; 
	//bit6:1- presse, 0-no presse;
	//bit5:keep;
	//bit4-bit0 Touch point validation, 1 - valid，corresponsed to 5-1；
	uint8_t touch_sta;	 //Touch Status，
	uint8_t touch_count; //Touch count
	uint16_t x[5];
	uint16_t y[5];
	bool update;
}TouchPoint_T;

void get_ft6336_touch_sta(TP_POSITION_T *position);
void init_ft6336(void);

#endif

