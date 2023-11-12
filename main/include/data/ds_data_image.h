#ifndef _DS_DATA_IMAGE_H_
#define _DS_DATA_IMAGE_H_

//////////////////////////////////////full screen update LUT////////////////////////////////////////////
const unsigned char lut_vcomDC[] ={
0x00	,0x08	,0x00	,0x00	,0x00	,0x02,	
0x60	,0x28	,0x28	,0x00	,0x00	,0x01,	
0x00	,0x14	,0x00	,0x00	,0x00	,0x01,	
0x00	,0x12	,0x12	,0x00	,0x00	,0x01,	
0x00	,0x00	,0x00	,0x00	,0x00	,0x00,	
0x00	,0x00	,0x00	,0x00	,0x00	,0x00,	
0x00	,0x00	,0x00	,0x00	,0x00	,0x00	
,0x00	,0x00,					};
const unsigned char lut_ww[] ={	
0x40	,0x08	,0x00	,0x00	,0x00	,0x02,	
0x90	,0x28	,0x28	,0x00	,0x00	,0x01,	
0x40	,0x14	,0x00	,0x00	,0x00	,0x01,	
0xA0	,0x12	,0x12	,0x00	,0x00	,0x01,	
0x00	,0x00	,0x00	,0x00	,0x00	,0x00,	
0x00	,0x00	,0x00	,0x00	,0x00	,0x00,	
0x00	,0x00	,0x00	,0x00	,0x00	,0x00,	};
const unsigned char lut_bw[] ={	
0x40	,0x17	,0x00	,0x00	,0x00	,0x02	,
0x90	,0x0F	,0x0F	,0x00	,0x00	,0x03	,
0x40	,0x0A	,0x01	,0x00	,0x00	,0x01	,
0xA0	,0x0E	,0x0E	,0x00	,0x00	,0x02	,
0x00	,0x00	,0x00	,0x00	,0x00	,0x00	,
0x00	,0x00	,0x00	,0x00	,0x00	,0x00	,
0x00	,0x00	,0x00	,0x00	,0x00	,0x00	,					};
const unsigned char lut_wb[] ={	
0x80	,0x08	,0x00	,0x00	,0x00	,0x02,	
0x90	,0x28	,0x28	,0x00	,0x00	,0x01,	
0x80	,0x14	,0x00	,0x00	,0x00	,0x01,	
0x50	,0x12	,0x12	,0x00	,0x00	,0x01,	
0x00	,0x00	,0x00	,0x00	,0x00	,0x00,	
0x00	,0x00	,0x00	,0x00	,0x00	,0x00,	
0x00	,0x00	,0x00	,0x00	,0x00	,0x00,	};
const unsigned char lut_bb[] ={	
0x80	,0x08	,0x00	,0x00	,0x00	,0x02,	
0x90	,0x28	,0x28	,0x00	,0x00	,0x01,	
0x80	,0x14	,0x00	,0x00	,0x00	,0x01,	
0x50	,0x12	,0x12	,0x00	,0x00	,0x01,	
0x00	,0x00	,0x00	,0x00	,0x00	,0x00,	
0x00	,0x00	,0x00	,0x00	,0x00	,0x00,	
0x00	,0x00	,0x00	,0x00	,0x00	,0x00,	};



/////////////////////////////////////partial screen update LUT///////////////////////////////////////////
const unsigned char lut_vcom1[] ={
0x00	,0x19	,0x01	,0x00	,0x00	,0x01,
0x00	,0x00	,0x00	,0x00	,0x00	,0x00,
0x00	,0x00	,0x00	,0x00	,0x00	,0x00,
0x00	,0x00	,0x00	,0x00	,0x00	,0x00,
0x00	,0x00	,0x00	,0x00	,0x00	,0x00,
0x00	,0x00	,0x00	,0x00	,0x00	,0x00,
0x00	,0x00	,0x00	,0x00	,0x00	,0x00
	,0x00	,0x00,					};
const unsigned char lut_ww1[] ={
0x00	,0x19	,0x01	,0x00	,0x00	,0x01,
0x00	,0x00	,0x00	,0x00	,0x00	,0x00,
0x00	,0x00	,0x00	,0x00	,0x00	,0x00,
0x00	,0x00	,0x00	,0x00	,0x00	,0x00,
0x00	,0x00	,0x00	,0x00	,0x00	,0x00,
0x00	,0x00	,0x00	,0x00	,0x00	,0x19,
0x00	,0x00	,0x00	,0x00	,0x00	,0x00,};
const unsigned char lut_bw1[] ={
0x80	,0x19	,0x01	,0x00	,0x00	,0x01,	
0x00	,0x00	,0x00	,0x00	,0x00	,0x00,	
0x00	,0x00	,0x00	,0x00	,0x00	,0x00,	
0x00	,0x00	,0x00	,0x00	,0x00	,0x00,	
0x00	,0x00	,0x00	,0x00	,0x00	,0x00,	
0x00	,0x00	,0x00	,0x00	,0x00	,0x00,	
0x00	,0x00	,0x00	,0x00	,0x00	,0x00,	};
const unsigned char lut_wb1[] ={
0x40	,0x19	,0x01	,0x00	,0x00	,0x01,	
0x00	,0x00	,0x00	,0x00	,0x00	,0x00,	
0x00	,0x00	,0x00	,0x00	,0x00	,0x00,	
0x00	,0x00	,0x00	,0x00	,0x00	,0x00,	
0x00	,0x00	,0x00	,0x00	,0x00	,0x00,	
0x00	,0x00	,0x00	,0x00	,0x00	,0x00,	
0x00	,0x00	,0x00	,0x00	,0x00	,0x00,	};
const unsigned char lut_bb1[] ={
0x00	,0x19	,0x01	,0x00	,0x00	,0x01,	
0x00	,0x00	,0x00	,0x00	,0x00	,0x00,	
0x00	,0x00	,0x00	,0x00	,0x00	,0x00,	
0x00	,0x00	,0x00	,0x00	,0x00	,0x00,	
0x00	,0x00	,0x00	,0x00	,0x00	,0x00,	
0x00	,0x00	,0x00	,0x00	,0x00	,0x00,	
0x00	,0x00	,0x00	,0x00	,0x00	,0x00,	};


// /////////////局部刷新图片//////////////////////
// //64*32(y=64-1,x=32-1)
// const unsigned char gImage_num1[256] = { /* 0X81,0X01,0X20,0X00,0X20,0X00, */
// //1
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0XFF,0XFF,0XFF,0XF7,
// 0XFF,0XFF,0XFF,0XF7,0XFF,0XFF,0XFF,0XE7,0XFF,0X00,0X00,0X07,0XFF,0X00,0X00,0X07,
// 0XFF,0X80,0X00,0X07,0XFF,0XDF,0XFF,0XE7,0XFF,0XDF,0XFF,0XF7,0XFF,0XDF,0XFF,0XF7,
// 0XFF,0XDF,0XFF,0XF7,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// //0
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFC,0X01,0XFF,0XFF,0XE0,0X00,0X3F,0XFF,0XC0,0X00,0X1F,0XFF,0X87,0XFF,0X0F,
// 0XFF,0X1F,0XFF,0XC7,0XFF,0X3F,0XFF,0XE7,0XFF,0X7F,0XFF,0XF7,0XFF,0X7F,0XFF,0XF7,
// 0XFF,0X3F,0XFF,0XE7,0XFF,0X1F,0XFF,0XC7,0XFF,0X83,0XFE,0X0F,0XFF,0XC0,0X00,0X1F,
// 0XFF,0XE0,0X00,0X3F,0XFF,0XFC,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// };

// const unsigned char gImage_num2[256] = { /* 0X81,0X01,0X20,0X00,0X20,0X00, */
// //2
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0XFE,0X1F,0XFF,0X80,0X7E,0X07,0XFF,0X80,0X3F,0XC7,
// 0XFF,0X1F,0X1F,0XE7,0XFF,0X3F,0XCF,0XE7,0XFF,0X7F,0XE7,0XE7,0XFF,0X7F,0XF3,0XE7,
// 0XFF,0X7F,0XF9,0XE7,0XFF,0X7F,0XFC,0XE7,0XFF,0X3F,0XFE,0X67,0XFF,0X99,0XFF,0X27,
// 0XFF,0XC1,0XFF,0X87,0XFF,0XE1,0XFF,0XC7,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// //1
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0XFF,0XFF,0XFF,0XF7,
// 0XFF,0XFF,0XFF,0XF7,0XFF,0XFF,0XFF,0XE7,0XFF,0X00,0X00,0X07,0XFF,0X00,0X00,0X07,
// 0XFF,0X80,0X00,0X07,0XFF,0XDF,0XFF,0XE7,0XFF,0XDF,0XFF,0XF7,0XFF,0XDF,0XFF,0XF7,
// 0XFF,0XDF,0XFF,0XF7,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// };

// const unsigned char gImage_num3[256] = { /* 0X81,0X01,0X20,0X00,0X20,0X00, */
// //3
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X7F,0XFF,0XE1,0XE0,0X1F,0XFF,0X80,0XC0,0X0F,
// 0XFF,0X80,0X4F,0XCF,0XFF,0X1E,0X1F,0XE7,0XFF,0X3F,0X1F,0XF7,0XFF,0X7F,0XBF,0XF7,
// 0XFF,0X7F,0XBF,0XF7,0XFF,0X7F,0XBF,0XF7,0XFF,0X3F,0XFF,0XE7,0XFF,0X83,0XFE,0X0F,
// 0XFF,0X83,0XFE,0X0F,0XFF,0XC3,0XFE,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// //2
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0XFE,0X1F,0XFF,0X80,0X7E,0X07,0XFF,0X80,0X3F,0XC7,
// 0XFF,0X1F,0X1F,0XE7,0XFF,0X3F,0XCF,0XE7,0XFF,0X7F,0XE7,0XE7,0XFF,0X7F,0XF3,0XE7,
// 0XFF,0X7F,0XF9,0XE7,0XFF,0X7F,0XFC,0XE7,0XFF,0X3F,0XFE,0X67,0XFF,0X99,0XFF,0X27,
// 0XFF,0XC1,0XFF,0X87,0XFF,0XE1,0XFF,0XC7,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// };

// const unsigned char gImage_num4[256] = { /* 0X81,0X01,0X20,0X00,0X20,0X00, */
// //4
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFD,0XFB,0XFF,0XFF,0XFD,0XFB,0XFF,0XFF,0XFD,0XFB,0XFF,0X00,0X00,0X03,
// 0XFF,0X00,0X00,0X03,0XFF,0X00,0X00,0X03,0XFF,0X80,0X00,0X03,0XFF,0XE3,0XFD,0XFB,
// 0XFF,0XF0,0XFD,0XFB,0XFF,0XFC,0X7D,0XFB,0XFF,0XFE,0X1D,0XFF,0XFF,0XFF,0X8D,0XFF,
// 0XFF,0XFF,0XE1,0XFF,0XFF,0XFF,0XF1,0XFF,0XFF,0XFF,0XFD,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// //3
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X7F,0XFF,0XE1,0XE0,0X1F,0XFF,0X80,0XC0,0X0F,
// 0XFF,0X80,0X4F,0XCF,0XFF,0X1E,0X1F,0XE7,0XFF,0X3F,0X1F,0XF7,0XFF,0X7F,0XBF,0XF7,
// 0XFF,0X7F,0XBF,0XF7,0XFF,0X7F,0XBF,0XF7,0XFF,0X3F,0XFF,0XE7,0XFF,0X83,0XFE,0X0F,
// 0XFF,0X83,0XFE,0X0F,0XFF,0XC3,0XFE,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// };


// const unsigned char gImage_num5[256] = { /* 0X81,0X01,0X20,0X00,0X20,0X00, */
// //5
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0X3F,0XE0,0X7F,0XFF,0X3F,0X80,0X1F,0XFF,0X3F,0X00,0X0F,
// 0XFF,0X3E,0X3F,0X8F,0XFF,0X3E,0X7F,0XE7,0XFF,0X3E,0XFF,0XF7,0XFF,0X3E,0XFF,0XF7,
// 0XFF,0X3E,0XFF,0XF7,0XFF,0X3E,0X7F,0XF7,0XFF,0X07,0X3F,0XF7,0XFF,0X00,0X1E,0X67,
// 0XFF,0XF8,0X1E,0X0F,0XFF,0XFF,0XFE,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// //4
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFD,0XFB,0XFF,0XFF,0XFD,0XFB,0XFF,0XFF,0XFD,0XFB,0XFF,0X00,0X00,0X03,
// 0XFF,0X00,0X00,0X03,0XFF,0X00,0X00,0X03,0XFF,0X80,0X00,0X03,0XFF,0XE3,0XFD,0XFB,
// 0XFF,0XF0,0XFD,0XFB,0XFF,0XFC,0X7D,0XFB,0XFF,0XFE,0X1D,0XFF,0XFF,0XFF,0X8D,0XFF,
// 0XFF,0XFF,0XE1,0XFF,0XFF,0XFF,0XF1,0XFF,0XFF,0XFF,0XFD,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// };


// const unsigned char gImage_num6[256] = { /* 0X81,0X01,0X20,0X00,0X20,0X00, */
// //6
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XE0,0X7F,0XFF,0XCF,0XC0,0X1F,0XFF,0X8F,0X80,0X0F,0XFF,0X0F,0X1F,0XCF,
// 0XFF,0X7F,0X3F,0XE7,0XFF,0X7F,0X7F,0XF7,0XFF,0X7F,0X7F,0XF7,0XFF,0X3F,0X7F,0XF7,
// 0XFF,0X3F,0X3F,0XE7,0XFF,0X9F,0X9F,0XC7,0XFF,0XC3,0X8F,0X0F,0XFF,0XE0,0X00,0X1F,
// 0XFF,0XF0,0X00,0X3F,0XFF,0XFE,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// //5
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0X3F,0XE0,0X7F,0XFF,0X3F,0X80,0X1F,0XFF,0X3F,0X00,0X0F,
// 0XFF,0X3E,0X3F,0X8F,0XFF,0X3E,0X7F,0XE7,0XFF,0X3E,0XFF,0XF7,0XFF,0X3E,0XFF,0XF7,
// 0XFF,0X3E,0XFF,0XF7,0XFF,0X3E,0X7F,0XF7,0XFF,0X07,0X3F,0XF7,0XFF,0X00,0X1E,0X67,
// 0XFF,0XF8,0X1E,0X0F,0XFF,0XFF,0XFE,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// };

// const unsigned char gImage_num7[256] = { /* 0X81,0X01,0X20,0X00,0X20,0X00, */
// //7
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0X3F,0XFF,0XFF,0XFF,0X1F,0XFF,0XFF,0XFF,0X07,0XFF,0XFF,
// 0XFF,0X21,0XFF,0XFF,0XFF,0X38,0X7F,0XFF,0XFF,0X3E,0X0F,0XFF,0XFF,0X3F,0X80,0X07,
// 0XFF,0X3F,0XF0,0X07,0XFF,0X3F,0XFE,0X07,0XFF,0X1F,0XFF,0XFF,0XFF,0X0F,0XFF,0XFF,
// 0XFF,0X03,0XFF,0XFF,0XFF,0XC3,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// //6
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XE0,0X7F,0XFF,0XCF,0XC0,0X1F,0XFF,0X8F,0X80,0X0F,0XFF,0X0F,0X1F,0XCF,
// 0XFF,0X7F,0X3F,0XE7,0XFF,0X7F,0X7F,0XF7,0XFF,0X7F,0X7F,0XF7,0XFF,0X3F,0X7F,0XF7,
// 0XFF,0X3F,0X3F,0XE7,0XFF,0X9F,0X9F,0XC7,0XFF,0XC3,0X8F,0X0F,0XFF,0XE0,0X00,0X1F,
// 0XFF,0XF0,0X00,0X3F,0XFF,0XFE,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// };

// const unsigned char gImage_num8[256] = { /* 0X81,0X01,0X20,0X00,0X20,0X00, */
// //8
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XE1,0XF8,0X3F,0XFF,0XC0,0XF0,0X1F,0XFF,0X80,0X60,0X0F,
// 0XFF,0X1E,0X03,0XCF,0XFF,0X3F,0X87,0XE7,0XFF,0X7F,0X8F,0XF7,0XFF,0X7F,0X9F,0XF7,
// 0XFF,0X7F,0X1F,0XF7,0XFF,0X3E,0X1F,0XF7,0XFF,0X1C,0X0F,0XE7,0XFF,0X80,0X47,0XCF,
// 0XFF,0XC0,0XE0,0X0F,0XFF,0XE1,0XF0,0X1F,0XFF,0XFF,0XF8,0X3F,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// //7
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0X3F,0XFF,0XFF,0XFF,0X1F,0XFF,0XFF,0XFF,0X07,0XFF,0XFF,
// 0XFF,0X21,0XFF,0XFF,0XFF,0X38,0X7F,0XFF,0XFF,0X3E,0X0F,0XFF,0XFF,0X3F,0X80,0X07,
// 0XFF,0X3F,0XF0,0X07,0XFF,0X3F,0XFE,0X07,0XFF,0X1F,0XFF,0XFF,0XFF,0X0F,0XFF,0XFF,
// 0XFF,0X03,0XFF,0XFF,0XFF,0XC3,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// };

// const unsigned char gImage_num9[256] = { /* 0X81,0X01,0X20,0X00,0X20,0X00, */
// //9
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X03,0XFF,0XFF,0XE0,0X00,0X7F,0XFF,0XC0,0X00,0X3F,
// 0XFF,0X8F,0X8C,0X1F,0XFF,0X3F,0XCF,0X8F,0XFF,0X7F,0XE7,0XC7,0XFF,0X7F,0XF7,0XE7,
// 0XFF,0X7F,0XF7,0XF7,0XFF,0X7F,0XF7,0XF7,0XFF,0X3F,0XE7,0XF7,0XFF,0X8F,0XC7,0X87,
// 0XFF,0X80,0X0F,0X8F,0XFF,0XC0,0X1F,0X8F,0XFF,0XF0,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// //8
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XE1,0XF8,0X3F,0XFF,0XC0,0XF0,0X1F,0XFF,0X80,0X60,0X0F,
// 0XFF,0X1E,0X03,0XCF,0XFF,0X3F,0X87,0XE7,0XFF,0X7F,0X8F,0XF7,0XFF,0X7F,0X9F,0XF7,
// 0XFF,0X7F,0X1F,0XF7,0XFF,0X3E,0X1F,0XF7,0XFF,0X1C,0X0F,0XE7,0XFF,0X80,0X47,0XCF,
// 0XFF,0XC0,0XE0,0X0F,0XFF,0XE1,0XF0,0X1F,0XFF,0XFF,0XF8,0X3F,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// 0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
// };



const unsigned char gImage_NUM[10][192]={
//0
{
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,
0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X0F,0XFF,0XFF,0XE0,0X00,0X00,0X01,0XFF,0XFF,0X80,
0X00,0X00,0X00,0XFF,0XFF,0X00,0X00,0X00,0X00,0X7F,0XFE,0X00,0X00,0X00,0X00,0X3F,
0XFC,0X00,0X00,0X00,0X00,0X1F,0XFC,0X00,0X3F,0XFF,0X00,0X1F,0XFC,0X03,0XFF,0XFF,
0XE0,0X1F,0XF8,0X0F,0XFF,0XFF,0XF8,0X0F,0XF8,0X1F,0XFF,0XFF,0XFC,0X0F,0XF8,0X1F,
0XFF,0XFF,0XFC,0X0F,0XF8,0X3F,0XFF,0XFF,0XFE,0X0F,0XF8,0X3F,0XFF,0XFF,0XFE,0X0F,
0XF8,0X3F,0XFF,0XFF,0XFE,0X0F,0XF8,0X1F,0XFF,0XFF,0XFC,0X0F,0XF8,0X1F,0XFF,0XFF,
0XFC,0X0F,0XF8,0X0F,0XFF,0XFF,0XF8,0X0F,0XFC,0X03,0XFF,0XFF,0XE0,0X1F,0XFC,0X00,
0X3F,0XFF,0X00,0X1F,0XFC,0X00,0X00,0X00,0X00,0X1F,0XFE,0X00,0X00,0X00,0X00,0X3F,
0XFF,0X00,0X00,0X00,0X00,0X7F,0XFF,0X80,0X00,0X00,0X00,0XFF,0XFF,0XE0,0X00,0X00,
0X01,0XFF,0XFF,0XF8,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0X80,0X00,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
},
//1
{
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X0F,0XF8,0X00,0X00,0X00,0X00,0X0F,0XF8,0X00,
0X00,0X00,0X00,0X0F,0XF8,0X00,0X00,0X00,0X00,0X0F,0XF8,0X00,0X00,0X00,0X00,0X0F,
0XFC,0X00,0X00,0X00,0X00,0X0F,0XFE,0X00,0X00,0X00,0X00,0X0F,0XFF,0X80,0X7F,0XFF,
0XFF,0XFF,0XFF,0XC0,0X7F,0XFF,0XFF,0XFF,0XFF,0XE0,0X3F,0XFF,0XFF,0XFF,0XFF,0XF0,
0X1F,0XFF,0XFF,0XFF,0XFF,0XF0,0X1F,0XFF,0XFF,0XFF,0XFF,0XF8,0X0F,0XFF,0XFF,0XFF,
0XFF,0XFC,0X0F,0XFF,0XFF,0XFF,0XFF,0XFC,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
},
//2
{
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XF0,0X0F,0XFF,0XFC,0X0F,0XFF,0XC0,0X03,0XFF,0XFC,0X0F,0XFF,0X80,
0X00,0XFF,0XFC,0X0F,0XFF,0X00,0X00,0X7F,0XFC,0X0F,0XFE,0X00,0X00,0X3F,0XFC,0X0F,
0XFC,0X00,0X00,0X1F,0XFC,0X0F,0XFC,0X00,0X00,0X0F,0XFC,0X0F,0XF8,0X03,0XC0,0X07,
0XFC,0X0F,0XF8,0X0F,0XF0,0X03,0XFC,0X0F,0XF8,0X1F,0XF8,0X01,0XFC,0X0F,0XF8,0X1F,
0XFC,0X00,0XFC,0X0F,0XF8,0X3F,0XFE,0X00,0X7C,0X0F,0XF8,0X3F,0XFF,0X00,0X3C,0X0F,
0XF8,0X3F,0XFF,0X80,0X1C,0X0F,0XF8,0X1F,0XFF,0XC0,0X0C,0X0F,0XF8,0X1F,0XFF,0XE0,
0X04,0X0F,0XF8,0X07,0XFF,0XF0,0X00,0X0F,0XFC,0X01,0XFF,0XF8,0X00,0X0F,0XFC,0X00,
0X3F,0XFC,0X00,0X0F,0XFC,0X00,0X3F,0XFE,0X00,0X0F,0XFE,0X00,0X3F,0XFF,0X00,0X0F,
0XFF,0X00,0X3F,0XFF,0X80,0X0F,0XFF,0X80,0X3F,0XFF,0XC0,0X0F,0XFF,0XC0,0X7F,0XFF,
0XE0,0X0F,0XFF,0XF8,0X7F,0XFF,0XF8,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0X0F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
},
//3
{
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,
0X0F,0XFF,0XFF,0XFF,0XFF,0XC0,0X03,0XFF,0XFF,0XF0,0X1F,0X80,0X01,0XFF,0XFF,0XC0,
0X07,0X00,0X00,0X7F,0XFF,0X80,0X02,0X00,0X00,0X7F,0XFF,0X00,0X02,0X00,0X00,0X3F,
0XFE,0X00,0X00,0X00,0X00,0X1F,0XFC,0X00,0X00,0X03,0XC0,0X1F,0XFC,0X00,0X00,0X0F,
0XF0,0X1F,0XFC,0X07,0X80,0X1F,0XF8,0X0F,0XF8,0X0F,0XE0,0X3F,0XFC,0X0F,0XF8,0X1F,
0XF0,0X3F,0XFE,0X0F,0XF8,0X3F,0XF0,0X3F,0XFE,0X0F,0XF8,0X3F,0XF8,0X3F,0XFE,0X0F,
0XF8,0X3F,0XF8,0X3F,0XFE,0X0F,0XF8,0X3F,0XF8,0X3F,0XFE,0X0F,0XF8,0X1F,0XF8,0X3F,
0XFC,0X0F,0XF8,0X0F,0XFF,0XFF,0XF8,0X0F,0XF8,0X07,0XFF,0XFF,0XF0,0X0F,0XFC,0X01,
0XFF,0XFF,0X80,0X1F,0XFC,0X00,0X7F,0XFE,0X00,0X1F,0XFE,0X00,0X7F,0XFE,0X00,0X3F,
0XFE,0X00,0X7F,0XFE,0X00,0X3F,0XFF,0X00,0X7F,0XFE,0X00,0X7F,0XFF,0X80,0X7F,0XFE,
0X00,0XFF,0XFF,0XE0,0XFF,0XFF,0X03,0XFF,0XFF,0XF8,0XFF,0XFF,0X0F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
},
//4
{
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,
0X1F,0XFF,0XFF,0XFF,0XFF,0XF8,0X1F,0XFF,0XFF,0XFF,0XFF,0XF8,0X1F,0XFF,0XFF,0XFF,
0XFF,0XF8,0X1F,0XFF,0XFF,0XFF,0XFF,0XF8,0X1F,0XFF,0XF8,0X00,0X00,0X00,0X00,0X0F,
0XF8,0X00,0X00,0X00,0X00,0X0F,0XF8,0X00,0X00,0X00,0X00,0X0F,0XF8,0X00,0X00,0X00,
0X00,0X0F,0XF8,0X00,0X00,0X00,0X00,0X0F,0XF8,0X00,0X00,0X00,0X00,0X0F,0XFC,0X00,
0X00,0X00,0X00,0X0F,0XFE,0X00,0X1F,0XF8,0X1F,0XFF,0XFF,0X80,0X07,0XF8,0X1F,0XFF,
0XFF,0XC0,0X03,0XF8,0X1F,0XFF,0XFF,0XE0,0X01,0XF8,0X1F,0XFF,0XFF,0XF8,0X00,0X78,
0X1F,0XFF,0XFF,0XFC,0X00,0X38,0X1F,0XFF,0XFF,0XFF,0X00,0X08,0X1F,0XFF,0XFF,0XFF,
0X80,0X00,0X1F,0XFF,0XFF,0XFF,0XC0,0X00,0X1F,0XFF,0XFF,0XFF,0XF0,0X00,0X1F,0XFF,
0XFF,0XFF,0XF8,0X00,0X1F,0XFF,0XFF,0XFF,0XFE,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0X00,
0X1F,0XFF,0XFF,0XFF,0XFF,0X80,0X1F,0XFF,0XFF,0XFF,0XFF,0XE0,0X1F,0XFF,0XFF,0XFF,
0XFF,0XF0,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
},
//5
{
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,
0X3F,0XFF,0XFF,0XFF,0XFE,0X00,0X07,0XFF,0XF8,0X1F,0XF8,0X00,0X01,0XFF,0XF8,0X1F,
0XF0,0X00,0X00,0XFF,0XF8,0X1F,0XE0,0X00,0X00,0X7F,0XF8,0X1F,0XE0,0X00,0X00,0X3F,
0XF8,0X1F,0XC0,0X00,0X00,0X3F,0XF8,0X1F,0XC0,0X1F,0XC0,0X1F,0XF8,0X1F,0X80,0X7F,
0XF0,0X1F,0XF8,0X1F,0X81,0XFF,0XF8,0X0F,0XF8,0X1F,0X81,0XFF,0XFC,0X0F,0XF8,0X1F,
0X83,0XFF,0XFC,0X0F,0XF8,0X1F,0X83,0XFF,0XFE,0X0F,0XF8,0X1F,0X83,0XFF,0XFE,0X0F,
0XF8,0X1F,0X83,0XFF,0XFE,0X0F,0XF8,0X1F,0X83,0XFF,0XFE,0X0F,0XF8,0X07,0XC1,0XFF,
0XFC,0X0F,0XF8,0X00,0X00,0XFF,0XFC,0X0F,0XF8,0X00,0X00,0X7F,0XF0,0X0F,0XF8,0X00,
0X00,0X3F,0XC0,0X1F,0XF8,0X00,0X00,0X3F,0X00,0X1F,0XF8,0X00,0X00,0X3F,0X00,0X3F,
0XFE,0X00,0X00,0X3F,0X00,0X3F,0XFF,0XF0,0X00,0X3F,0X00,0X7F,0XFF,0XFF,0X80,0X7F,
0X00,0XFF,0XFF,0XFF,0XFC,0X7F,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0X0F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
},
//6
{
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,
0X1F,0XFF,0XFF,0XF8,0XFF,0X00,0X03,0XFF,0XFF,0XC0,0XFC,0X00,0X01,0XFF,0XFF,0X80,
0XF8,0X00,0X00,0X7F,0XFF,0X00,0XF0,0X00,0X00,0X7F,0XFE,0X00,0XF0,0X00,0X00,0X3F,
0XFC,0X00,0XE0,0X00,0X00,0X1F,0XFC,0X00,0XE0,0X0F,0XC0,0X1F,0XF8,0X03,0XC0,0X3F,
0XF0,0X0F,0XF8,0X0F,0XC0,0X7F,0XF8,0X0F,0XF8,0X1F,0XC0,0XFF,0XFC,0X0F,0XF8,0X1F,
0XC1,0XFF,0XFE,0X0F,0XF8,0X3F,0XC1,0XFF,0XFE,0X0F,0XF8,0X3F,0XC1,0XFF,0XFE,0X0F,
0XF8,0X3F,0XC1,0XFF,0XFE,0X0F,0XF8,0X1F,0XC0,0XFF,0XFC,0X0F,0XF8,0X0F,0XE0,0XFF,
0XFC,0X0F,0XFC,0X07,0XE0,0X7F,0XF8,0X0F,0XFC,0X01,0XF0,0X3F,0XE0,0X1F,0XFC,0X00,
0X30,0X0F,0X80,0X1F,0XFE,0X00,0X00,0X00,0X00,0X3F,0XFF,0X00,0X00,0X00,0X00,0X3F,
0XFF,0X80,0X00,0X00,0X00,0X7F,0XFF,0XC0,0X00,0X00,0X00,0XFF,0XFF,0XF0,0X00,0X00,
0X03,0XFF,0XFF,0XFC,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XC0,0X00,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
},
//7
{
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XF8,0X1F,0XFF,0XFF,0XFF,0XFF,0XF8,0X0F,0XFF,0XFF,0XFF,0XFF,0XF8,0X07,
0XFF,0XFF,0XFF,0XFF,0XF8,0X01,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X7F,0XFF,0XFF,0XFF,
0XF8,0X00,0X1F,0XFF,0XFF,0XFF,0XF8,0X00,0X0F,0XFF,0XFF,0XFF,0XF8,0X00,0X01,0XFF,
0XFF,0XFF,0XF8,0X10,0X00,0X7F,0XFF,0XFF,0XF8,0X18,0X00,0X1F,0XFF,0XFF,0XF8,0X1E,
0X00,0X03,0XFF,0XFF,0XF8,0X1F,0X00,0X00,0X3F,0XFF,0XF8,0X1F,0XC0,0X00,0X01,0XFF,
0XF8,0X1F,0XF0,0X00,0X00,0X0F,0XF8,0X1F,0XFC,0X00,0X00,0X0F,0XF8,0X1F,0XFF,0X00,
0X00,0X0F,0XF8,0X1F,0XFF,0XE0,0X00,0X0F,0XF8,0X1F,0XFF,0XF8,0X00,0X0F,0XF8,0X1F,
0XFF,0XFF,0X80,0X0F,0XF8,0X1F,0XFF,0XFF,0XFC,0X0F,0XF8,0X1F,0XFF,0XFF,0XFF,0XFF,
0XF8,0X1F,0XFF,0XFF,0XFF,0XFF,0XF8,0X1F,0XFF,0XFF,0XFF,0XFF,0XF8,0X1F,0XFF,0XFF,
0XFF,0XFF,0XF8,0X1F,0XFF,0XFF,0XFF,0XFF,0XF8,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
},
//8
{
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X0F,0XFF,0XFF,0XF0,0X3F,0XC0,0X03,0XFF,0XFF,0XC0,
0X0F,0X80,0X00,0XFF,0XFF,0X00,0X07,0X00,0X00,0X7F,0XFE,0X00,0X02,0X00,0X00,0X3F,
0XFE,0X00,0X00,0X00,0X00,0X3F,0XFC,0X00,0X00,0X00,0X00,0X1F,0XFC,0X00,0X00,0X07,
0XE0,0X1F,0XF8,0X07,0X80,0X0F,0XF8,0X0F,0XF8,0X0F,0XE0,0X3F,0XFC,0X0F,0XF8,0X1F,
0XE0,0X3F,0XFC,0X0F,0XF8,0X3F,0XF0,0X7F,0XFE,0X0F,0XF8,0X3F,0XF0,0X7F,0XFE,0X0F,
0XF8,0X3F,0XF0,0X7F,0XFE,0X0F,0XF8,0X3F,0XF0,0X7F,0XFE,0X0F,0XF8,0X1F,0XE0,0X3F,
0XFC,0X0F,0XF8,0X0F,0XC0,0X3F,0XFC,0X0F,0XF8,0X07,0X80,0X1F,0XF8,0X0F,0XFC,0X00,
0X00,0X07,0XE0,0X1F,0XFC,0X00,0X00,0X00,0X00,0X1F,0XFE,0X00,0X00,0X00,0X00,0X3F,
0XFE,0X00,0X02,0X00,0X00,0X3F,0XFF,0X00,0X07,0X00,0X00,0X7F,0XFF,0X80,0X0F,0X00,
0X00,0XFF,0XFF,0XE0,0X3F,0XC0,0X03,0XFF,0XFF,0XFF,0XFF,0XF0,0X0F,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
},
//9
{
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X01,
0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X1F,0XFF,0XFF,0XE0,0X00,0X00,0X07,0XFF,0XFF,0X80,
0X00,0X00,0X01,0XFF,0XFF,0X00,0X00,0X00,0X00,0XFF,0XFE,0X00,0X00,0X00,0X00,0X7F,
0XFE,0X00,0X00,0X00,0X00,0X3F,0XFC,0X01,0XF8,0X06,0X00,0X1F,0XFC,0X07,0XFE,0X07,
0XC0,0X1F,0XF8,0X0F,0XFF,0X03,0XF8,0X1F,0XF8,0X1F,0XFF,0X83,0XF8,0X0F,0XF8,0X3F,
0XFF,0X81,0XFC,0X0F,0XF8,0X3F,0XFF,0XC1,0XFE,0X0F,0XF8,0X3F,0XFF,0XC1,0XFE,0X0F,
0XF8,0X3F,0XFF,0XC1,0XFE,0X0F,0XF8,0X1F,0XFF,0XC1,0XFE,0X0F,0XF8,0X1F,0XFF,0X81,
0XFC,0X0F,0XF8,0X0F,0XFF,0X01,0XF8,0X0F,0XF8,0X07,0XFE,0X01,0XE0,0X0F,0XFC,0X01,
0XF8,0X03,0X80,0X1F,0XFC,0X00,0X00,0X03,0X80,0X1F,0XFE,0X00,0X00,0X07,0X80,0X3F,
0XFF,0X00,0X00,0X07,0X80,0X3F,0XFF,0X00,0X00,0X0F,0X80,0XFF,0XFF,0XC0,0X00,0X1F,
0X81,0XFF,0XFF,0XE0,0X00,0X7F,0X87,0XFF,0XFF,0XFC,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
},
};




#endif