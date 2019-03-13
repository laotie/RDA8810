#ifndef _GC0308_CFG_H_
#define _GC0308_CFG_H_

#include "rda_sensor.h"
#include <linux/delay.h>

#ifdef BIT
#undef BIT
#endif
#define BIT	8

static struct sensor_reg exp_gc0308[][3] =
{
	{{0xfe,0x00,BIT,0},{0xb5,0xd0,BIT,0},{0xd3,0x38,BIT,0}},
	{{0xfe,0x00,BIT,0},{0xb5,0xe0,BIT,0},{0xd3,0x40,BIT,0}},
	{{0xfe,0x00,BIT,0},{0xb5,0xf0,BIT,0},{0xd3,0x48,BIT,0}},
	{{0xfe,0x00,BIT,0},{0xb5,0x00,BIT,0},{0xd3,0x50,BIT,0}},
	{{0xfe,0x00,BIT,0},{0xb5,0x10,BIT,0},{0xd3,0x60,BIT,0}},
	{{0xfe,0x00,BIT,0},{0xb5,0x20,BIT,0},{0xd3,0x70,BIT,0}},
	{{0xfe,0x00,BIT,0},{0xb5,0x30,BIT,0},{0xd3,0x80,BIT,0}},
};

static struct sensor_reg awb_gc0308[][4] =
{
	{{0x22,0x55,BIT,0},{0x5a,0x56,BIT,0},{0x5b,0x40,BIT,0},{0x5c,0x4a,BIT,0}},//OFF
	{{0x22,0x57,BIT,0},{0x5a,0x56,BIT,0},{0x5b,0x40,BIT,0},{0x5c,0x4a,BIT,0}},//AUTO
	{{0x22,0x55,BIT,0},{0x5a,0x48,BIT,0},{0x5b,0x40,BIT,0},{0x5c,0x5c,BIT,0}},//INCANDESCENT
	{{0x22,0x55,BIT,0},{0x5a,0x40,BIT,0},{0x5b,0x42,BIT,0},{0x5c,0x50,BIT,0}},//FLUORESCENT
	{{0x22,0x55,BIT,0},{0x5a,0x40,BIT,0},{0x5b,0x54,BIT,0},{0x5c,0x70,BIT,0}},//TUNGSTEN
	{{0x22,0x55,BIT,0},{0x5a,0x74,BIT,0},{0x5b,0x52,BIT,0},{0x5c,0x40,BIT,0}},//DAYLIGHT
	{{0x22,0x55,BIT,0},{0x5a,0x8c,BIT,0},{0x5b,0x50,BIT,0},{0x5c,0x40,BIT,0}},//CLOUD
};

// use this for 640x480 (VGA) capture
static struct sensor_reg vga_gc0308[] =
{
	{0xfe,0x00,BIT,0},
	{0x46,0x00,BIT,0},
	{0x47,0x00,BIT,0},
	{0x48,0x00,BIT,0},
	{0x49,0x01,BIT,0},
	{0x4a,0xe0,BIT,0},
	{0x4b,0x02,BIT,0},
	{0x4c,0x80,BIT,0},
	{0xfe,0x01,BIT,0},
	{0x54,0x11,BIT,0},
	{0x56,0x00,BIT,0},
	{0x57,0x00,BIT,0},
	{0x58,0x00,BIT,0},
	{0x59,0x00,BIT,0},
	{0x55,0x03,BIT,0},
	{0xfe,0x00,BIT,0},
};

// use this for 320x240 (QVGA) capture
static struct sensor_reg qvga_gc0308[] =
{
	{0xfe,0x00,BIT,0},
	{0x46,0x00,BIT,0},
	{0x47,0x00,BIT,0},
	{0x48,0x00,BIT,0},
	{0x49,0x00,BIT,0},
	{0x4a,0xf0,BIT,0},
	{0x4b,0x01,BIT,0},
	{0x4c,0x40,BIT,0},
	{0xfe,0x01,BIT,0},
	{0x54,0x22,BIT,0},
	{0x56,0x00,BIT,0},
	{0x57,0x00,BIT,0},
	{0x58,0x00,BIT,0},
	{0x59,0x00,BIT,0},
	{0x55,0x03,BIT,0},
	{0xfe,0x00,BIT,0},
};

// use this for 160x120 (QQVGA) capture
static struct sensor_reg qqvga_gc0308[] =
{
	{0xfe,0x00,BIT,0},
	{0x46,0x00,BIT,0},
	{0x47,0x00,BIT,0},
	{0x48,0x00,BIT,0},
	{0x49,0x00,BIT,0},
	{0x4a,0x78,BIT,0},
	{0x4b,0x00,BIT,0},
	{0x4c,0xa0,BIT,0},
	{0xfe,0x01,BIT,0},
	{0x54,0x22,BIT,0},
	{0x56,0x00,BIT,0},
	{0x57,0x00,BIT,0},
	{0x58,0x00,BIT,0},
	{0x59,0x00,BIT,0},
	{0x55,0x03,BIT,0},
	{0xfe,0x00,BIT,0},
};

// use this for 176x144 (QCIF) capture
static struct sensor_reg qcif_gc0308[] =
{
	{0xfe,0x00,BIT,0},
	{0x46,0x00,BIT,0},
	{0x47,0x00,BIT,0},
	{0x48,0x00,BIT,0},
	{0x49,0x00,BIT,0},
	{0x4a,0x90,BIT,0},
	{0x4b,0x00,BIT,0},
	{0x4c,0xb0,BIT,0},
	{0xfe,0x01,BIT,0},
	{0x54,0x33,BIT,0},
	{0x56,0x00,BIT,0},
	{0x57,0x00,BIT,0},
	{0x58,0x00,BIT,0},
	{0x59,0x00,BIT,0},
	{0x55,0x03,BIT,0},
	{0xfe,0x00,BIT,0},
};

// use this for init sensor
static struct sensor_reg init_gc0308[] =
{
	{0xfe,0x80,BIT,0},
	{0xfe,0x00,BIT,0},

	{0xd2,0x10,BIT,0}, //close AEC
	{0x22,0x55,BIT,0}, //close AWB

	{0x03,0x01,BIT,0},
	{0x04,0x2c,BIT,0},
	{0x5a,0x56,BIT,0},
	{0x5b,0x40,BIT,0},
	{0x5c,0x4a,BIT,0},

	{0x22,0x57,BIT,0}, //open AWB
	{0x01,0x32,BIT,0},
	{0x02,0xa2,BIT,0},
	{0x0f,0x01,BIT,0},

	{0xe2,0x00,BIT,0},
	{0xe3,0x82,BIT,0},
	{0xe4,0x02,BIT,0}, //exp level 1 16.67fps
	{0xe5,0x8a,BIT,0},
	{0xe6,0x03,BIT,0}, //exp level 2 12.5fps
	{0xe7,0x8e,BIT,0},
	{0xe8,0x04,BIT,0}, //exp level 3 8.33fps
	{0xe9,0x10,BIT,0},
	{0xea,0x08,BIT,0}, //exp level 4 4.00fps
	{0xeb,0x20,BIT,0},

	{0x05,0x00,BIT,0},
	{0x06,0x00,BIT,0},
	{0x07,0x00,BIT,0},
	{0x08,0x00,BIT,0},
	{0x09,0x01,BIT,0},
	{0x0a,0xe8,BIT,0},
	{0x0b,0x02,BIT,0},
	{0x0c,0x88,BIT,0},
	{0x0d,0x02,BIT,0},
	{0x0e,0x02,BIT,0},
	{0x10,0x22,BIT,0},
	{0x11,0xfd,BIT,0},
	{0x12,0x2a,BIT,0},
	{0x13,0x00,BIT,0},
//	{0x14,0x10,BIT,0},
	{0x15,0x0a,BIT,0},
	{0x16,0x05,BIT,0},
	{0x17,0x01,BIT,0},
	{0x18,0x44,BIT,0},
	{0x19,0x44,BIT,0},
	{0x1a,0x1e,BIT,0},
	{0x1b,0x00,BIT,0},
	{0x1c,0xc1,BIT,0},
	{0x1d,0x08,BIT,0},
	{0x1e,0x60,BIT,0},
	{0x1f,0x16,BIT,0},

	{0x20,0xff,BIT,0},
	{0x21,0xf8,BIT,0},
	{0x22,0x57,BIT,0},
	{0x24,0xa2,BIT,0},
	{0x25,0x0f,BIT,0},

	//output sync_mode
	{0x26,0x03,BIT,0},
	{0x2f,0x01,BIT,0},
	{0x30,0xf7,BIT,0},
	{0x31,0x50,BIT,0},
	{0x32,0x00,BIT,0},
	{0x39,0x04,BIT,0},
	{0x3a,0x18,BIT,0},
	{0x3b,0x20,BIT,0},
	{0x3c,0x00,BIT,0},
	{0x3d,0x00,BIT,0},
	{0x3e,0x00,BIT,0},
	{0x3f,0x00,BIT,0},
	{0x50,0x10,BIT,0},
	{0x53,0x82,BIT,0},
	{0x54,0x80,BIT,0},
	{0x55,0x80,BIT,0},
	{0x56,0x82,BIT,0},
	{0x8b,0x40,BIT,0},
	{0x8c,0x40,BIT,0},
	{0x8d,0x40,BIT,0},
	{0x8e,0x2e,BIT,0},
	{0x8f,0x2e,BIT,0},
	{0x90,0x2e,BIT,0},
	{0x91,0x3c,BIT,0},
	{0x92,0x50,BIT,0},
	{0x5d,0x12,BIT,0},
	{0x5e,0x1a,BIT,0},
	{0x5f,0x24,BIT,0},
	{0x60,0x07,BIT,0},
	{0x61,0x15,BIT,0},
	{0x62,0x08,BIT,0},
	{0x64,0x03,BIT,0},
	{0x66,0xe8,BIT,0},
	{0x67,0x86,BIT,0},
	{0x68,0xa2,BIT,0},
	{0x69,0x18,BIT,0},
	{0x6a,0x0f,BIT,0},
	{0x6b,0x00,BIT,0},
	{0x6c,0x5f,BIT,0},
	{0x6d,0x8f,BIT,0},
	{0x6e,0x55,BIT,0},
	{0x6f,0x38,BIT,0},
	{0x70,0x15,BIT,0},
	{0x71,0x33,BIT,0},
	{0x72,0xdc,BIT,0},
	{0x73,0x80,BIT,0},
	{0x74,0x02,BIT,0},
	{0x75,0x3f,BIT,0},
	{0x76,0x02,BIT,0},
	{0x77,0x36,BIT,0},
	{0x78,0x88,BIT,0},
	{0x79,0x81,BIT,0},
	{0x7a,0x81,BIT,0},
	{0x7b,0x22,BIT,0},
	{0x7c,0xff,BIT,0},
	{0x93,0x48,BIT,0},
	{0x94,0x00,BIT,0},
	{0x95,0x05,BIT,0},
	{0x96,0xe8,BIT,0},
	{0x97,0x40,BIT,0},
	{0x98,0xf0,BIT,0},
	{0xb1,0x38,BIT,0},
	{0xb2,0x38,BIT,0},
	{0xbd,0x38,BIT,0},
	{0xbe,0x36,BIT,0},
	{0xd0,0xc9,BIT,0},
	{0xd1,0x10,BIT,0},
//	{0xd2,0x90,BIT,0},
	{0xd3,0x80,BIT,0},
	{0xd5,0xf2,BIT,0},
	{0xd6,0x16,BIT,0},
	{0xdb,0x92,BIT,0},
	{0xdc,0xa5,BIT,0},
	{0xdf,0x23,BIT,0},
	{0xd9,0x00,BIT,0},
	{0xda,0x00,BIT,0},
	{0xe0,0x09,BIT,0},

	{0xed,0x04,BIT,0},
	{0xee,0xa0,BIT,0},
	{0xef,0x40,BIT,0},
	{0x80,0x03,BIT,0},
	{0x80,0x03,BIT,0},
	{0x9F,0x10,BIT,0},
	{0xA0,0x20,BIT,0},
	{0xA1,0x38,BIT,0},
	{0xA2,0x4E,BIT,0},
	{0xA3,0x63,BIT,0},
	{0xA4,0x76,BIT,0},
	{0xA5,0x87,BIT,0},
	{0xA6,0xA2,BIT,0},
	{0xA7,0xB8,BIT,0},
	{0xA8,0xCA,BIT,0},
	{0xA9,0xD8,BIT,0},
	{0xAA,0xE3,BIT,0},
	{0xAB,0xEB,BIT,0},
	{0xAC,0xF0,BIT,0},
	{0xAD,0xF8,BIT,0},
	{0xAE,0xFD,BIT,0},
	{0xAF,0xFF,BIT,0},
	{0xc0,0x00,BIT,0},
	{0xc1,0x10,BIT,0},
	{0xc2,0x1C,BIT,0},
	{0xc3,0x30,BIT,0},
	{0xc4,0x43,BIT,0},
	{0xc5,0x54,BIT,0},
	{0xc6,0x65,BIT,0},
	{0xc7,0x75,BIT,0},
	{0xc8,0x93,BIT,0},
	{0xc9,0xB0,BIT,0},
	{0xca,0xCB,BIT,0},
	{0xcb,0xE6,BIT,0},
	{0xcc,0xFF,BIT,0},
	{0xf0,0x02,BIT,0},
	{0xf1,0x01,BIT,0},
	{0xf2,0x01,BIT,0},
	{0xf3,0x30,BIT,0},
	{0xf9,0x9f,BIT,0},
	{0xfa,0x78,BIT,0},


	{0xfe,0x01,BIT,0}, //set page1

	{0x00,0xf5,BIT,0},
	{0x02,0x1a,BIT,0},
	{0x0a,0xa0,BIT,0},
	{0x0b,0x60,BIT,0},
	{0x0c,0x08,BIT,0},
	{0x0e,0x4c,BIT,0},
	{0x0f,0x39,BIT,0},
	{0x11,0x3f,BIT,0},
	{0x12,0x72,BIT,0},
	{0x13,0x13,BIT,0},
	{0x14,0x42,BIT,0},
	{0x15,0x43,BIT,0},
	{0x16,0xc2,BIT,0},
	{0x17,0xa8,BIT,0},
	{0x18,0x18,BIT,0},
	{0x19,0x40,BIT,0},
	{0x1a,0xd0,BIT,0},
	{0x1b,0xf5,BIT,0},
	{0x70,0x40,BIT,0},
	{0x71,0x58,BIT,0},
	{0x72,0x30,BIT,0},
	{0x73,0x48,BIT,0},
	{0x74,0x20,BIT,0},
	{0x75,0x60,BIT,0},
	{0x77,0x20,BIT,0},
	{0x78,0x32,BIT,0},
	{0x30,0x03,BIT,0},
	{0x31,0x40,BIT,0},
	{0x32,0xe0,BIT,0},
	{0x33,0xe0,BIT,0},
	{0x34,0xe0,BIT,0},
	{0x35,0xb0,BIT,0},
	{0x36,0xc0,BIT,0},
	{0x37,0xc0,BIT,0},
	{0x38,0x04,BIT,0},
	{0x39,0x09,BIT,0},
	{0x3a,0x12,BIT,0},
	{0x3b,0x1C,BIT,0},
	{0x3c,0x28,BIT,0},
	{0x3d,0x31,BIT,0},
	{0x3e,0x44,BIT,0},
	{0x3f,0x57,BIT,0},
	{0x40,0x6c,BIT,0},
	{0x41,0x81,BIT,0},
	{0x42,0x94,BIT,0},
	{0x43,0xa7,BIT,0},
	{0x44,0xb8,BIT,0},
	{0x45,0xd6,BIT,0},
	{0x46,0xee,BIT,0},
	{0x47,0x0d,BIT,0},

	{0xfe,0x00,BIT,0}, //set page0
	{0xd2,0x90,BIT,0},

	{0xfe,0x00,BIT,0}, //set page0
	{0x10,0x26,BIT,0},
	{0x11,0x0d,BIT,0}, // fd,modified by mormo
	{0x1a,0x2a,BIT,0}, // 1e,modified by mormo
	{0x1c,0x49,BIT,0}, // c1,modified by mormo
	{0x1d,0x9a,BIT,0}, // 08,modified by mormo
	{0x1e,0x61,BIT,0}, // 60,modified by mormo
	{0x3a,0x20,BIT,0},
	{0x50,0x14,BIT,0}, // 10,modified by mormo

	{0x53,0x80,BIT,0},
	{0x56,0x80,BIT,0},

	{0x8b,0x20,BIT,0}, //LSC
	{0x8c,0x20,BIT,0},
	{0x8d,0x20,BIT,0},
	{0x8e,0x14,BIT,0},
	{0x8f,0x10,BIT,0},
	{0x90,0x14,BIT,0},

	{0x94,0x02,BIT,0},
	{0x95,0x07,BIT,0},
	{0x96,0xe0,BIT,0},

	{0xb1,0x40,BIT,0}, // YCPT
	{0xb2,0x40,BIT,0},
	{0xb3,0x40,BIT,0},
	{0xb6,0xe0,BIT,0},

	{0xd0,0xcb,BIT,0}, // AECT c9,modifed by mormo 2010/07/06
	{0xd3,0x48,BIT,0}, // 80,modified by mormor 2010/07/06

	{0xf2,0x02,BIT,0},
	{0xf7,0x12,BIT,0},
	{0xf8,0x0a,BIT,0},

	//Registers of Page1
	{0xfe,0x01,BIT,0},// set page1
	{0x02,0x20,BIT,0},
	{0x04,0x10,BIT,0},
	{0x05,0x08,BIT,0},
	{0x06,0x20,BIT,0},
	{0x08,0x0a,BIT,0},

	{0x0e,0x44,BIT,0},
	{0x0f,0x32,BIT,0},
	{0x10,0x41,BIT,0},
	{0x11,0x37,BIT,0},
	{0x12,0x22,BIT,0},
	{0x13,0x19,BIT,0},
	{0x14,0x44,BIT,0},
	{0x15,0x44,BIT,0},

	{0x19,0x50,BIT,0},
	{0x1a,0xd8,BIT,0},

	{0x32,0x10,BIT,0},

	{0x35,0x00,BIT,0},
	{0x36,0x80,BIT,0},
	{0x37,0x00,BIT,0},
	//-----------Update the registers end---------//
	{0xfe,0x00,BIT,0},// set page0
	//-----------GAMMA Select(2)---------------//
	{0x9F,0x0E,BIT,0},
	{0xA0,0x1C,BIT,0},
	{0xA1,0x34,BIT,0},
	{0xA2,0x48,BIT,0},
	{0xA3,0x5A,BIT,0},
	{0xA4,0x6B,BIT,0},
	{0xA5,0x7B,BIT,0},
	{0xA6,0x95,BIT,0},
	{0xA7,0xAB,BIT,0},
	{0xA8,0xBF,BIT,0},
	{0xA9,0xCE,BIT,0},
	{0xAA,0xD9,BIT,0},
	{0xAB,0xE4,BIT,0},
	{0xAC,0xEC,BIT,0},
	{0xAD,0xF7,BIT,0},
	{0xAE,0xFD,BIT,0},
	{0xAF,0xFF,BIT,0},
	/*GC0308_GAMMA_Select,
	1://smallest gamma curve
	{0x9F,0x0B,BIT,0},
	{0xA0,0x16,BIT,0},
	{0xA1,0x29,BIT,0},
	{0xA2,0x3C,BIT,0},
	{0xA3,0x4F,BIT,0},
	{0xA4,0x5F,BIT,0},
	{0xA5,0x6F,BIT,0},
	{0xA6,0x8A,BIT,0},
	{0xA7,0x9F,BIT,0},
	{0xA8,0xB4,BIT,0},
	{0xA9,0xC6,BIT,0},
	{0xAA,0xD3,BIT,0},
	{0xAB,0xDD,BIT,0},
	{0xAC,0xE5,BIT,0},
	{0xAD,0xF1,BIT,0},
	{0xAE,0xFA,BIT,0},
	{0xAF,0xFF,BIT,0},

	2:
	{0x9F,0x0E,BIT,0},
	{0xA0,0x1C,BIT,0},
	{0xA1,0x34,BIT,0},
	{0xA2,0x48,BIT,0},
	{0xA3,0x5A,BIT,0},
	{0xA4,0x6B,BIT,0},
	{0xA5,0x7B,BIT,0},
	{0xA6,0x95,BIT,0},
	{0xA7,0xAB,BIT,0},
	{0xA8,0xBF,BIT,0},
	{0xA9,0xCE,BIT,0},
	{0xAA,0xD9,BIT,0},
	{0xAB,0xE4,BIT,0},
	{0xAC,0xEC,BIT,0},
	{0xAD,0xF7,BIT,0},
	{0xAE,0xFD,BIT,0},
	{0xAF,0xFF,BIT,0},

	3:
	{0x9F,0x10,BIT,0},
	{0xA0,0x20,BIT,0},
	{0xA1,0x38,BIT,0},
	{0xA2,0x4E,BIT,0},
	{0xA3,0x63,BIT,0},
	{0xA4,0x76,BIT,0},
	{0xA5,0x87,BIT,0},
	{0xA6,0xA2,BIT,0},
	{0xA7,0xB8,BIT,0},
	{0xA8,0xCA,BIT,0},
	{0xA9,0xD8,BIT,0},
	{0xAA,0xE3,BIT,0},
	{0xAB,0xEB,BIT,0},
	{0xAC,0xF0,BIT,0},
	{0xAD,0xF8,BIT,0},
	{0xAE,0xFD,BIT,0},
	{0xAF,0xFF,BIT,0},

	4:
	{0x9F,0x14,BIT,0},
	{0xA0,0x28,BIT,0},
	{0xA1,0x44,BIT,0},
	{0xA2,0x5D,BIT,0},
	{0xA3,0x72,BIT,0},
	{0xA4,0x86,BIT,0},
	{0xA5,0x95,BIT,0},
	{0xA6,0xB1,BIT,0},
	{0xA7,0xC6,BIT,0},
	{0xA8,0xD5,BIT,0},
	{0xA9,0xE1,BIT,0},
	{0xAA,0xEA,BIT,0},
	{0xAB,0xF1,BIT,0},
	{0xAC,0xF5,BIT,0},
	{0xAD,0xFB,BIT,0},
	{0xAE,0xFE,BIT,0},
	{0xAF,0xFF,BIT,0},

	5://largest gamma curve
	{0x9F,0x15,BIT,0},
	{0xA0,0x2A,BIT,0},
	{0xA1,0x4A,BIT,0},
	{0xA2,0x67,BIT,0},
	{0xA3,0x79,BIT,0},
	{0xA4,0x8C,BIT,0},
	{0xA5,0x9A,BIT,0},
	{0xA6,0xB3,BIT,0},
	{0xA7,0xC5,BIT,0},
	{0xA8,0xD5,BIT,0},
	{0xA9,0xDF,BIT,0},
	{0xAA,0xE8,BIT,0},
	{0xAB,0xEE,BIT,0},
	{0xAC,0xF3,BIT,0},
	{0xAD,0xFA,BIT,0},
	{0xAE,0xFD,BIT,0},
	{0xAF,0xFF,BIT,0}, */
	//-----------GAMMA Select End--------------//

	//-------------H_V_Switch(4)---------------//
	{0x14,0x14,BIT,200},
	/*GC0308_H_V_Switch,

	1:// normal
	{0x14,0x10,BIT,0},
	2:// IMAGE_H_MIRROR
	{0x14,0x11,BIT,0},
	3:// IMAGE_V_MIRROR
	{0x14,0x12,BIT,0},
	4:// IMAGE_HV_MIRROR
	{0x14,0x13,BIT,0},
	*/
	//-------------H_V_Select End--------------//

	{0xff,0xff,BIT,0},

};

static struct sensor_reg_list gc0308_init = {
	.size = ARRAY_ROW(init_gc0308),
	.val = init_gc0308
};

static struct sensor_reg_list gc0308_vga = {
	.size = ARRAY_ROW(vga_gc0308),
	.val = vga_gc0308
};
static struct sensor_reg_list gc0308_qvga = {
	.size = ARRAY_ROW(qvga_gc0308),
	.val = qvga_gc0308
};
static struct sensor_reg_list gc0308_qcif = {
	.size = ARRAY_ROW(qcif_gc0308),
	.val = qcif_gc0308
};
static struct sensor_reg_list gc0308_qqvga = {
	.size = ARRAY_ROW(qqvga_gc0308),
	.val = qqvga_gc0308
};
static struct sensor_win_size gc0308_win_size[] = {
	WIN_SIZE("VGA", W_VGA, H_VGA, &gc0308_vga),
	WIN_SIZE("QVGA", W_QVGA, H_QVGA, &gc0308_qvga),
	WIN_SIZE("QCIF", W_QCIF, H_QCIF, &gc0308_qcif),
	WIN_SIZE("QQVGA", W_QQVGA, H_QQVGA, &gc0308_qqvga),
};

static struct sensor_win_cfg gc0308_win_cfg = {
	.num = ARRAY_ROW(gc0308_win_size),
	.win_size = gc0308_win_size
};

static struct sensor_csi_cfg gc0308_csi_cfg = {
	.csi_en = false,
	.d_term_en = 0,
	.c_term_en = 0,
	.dhs_settle = 0,
	.chs_settle = 0,
};

static struct sensor_info gc0308_info = {
	.name		= "gc0308",
	.chip_id	= 0x9b,
	.mclk		= 26,
	.i2c_addr	= 0x21,
	.exp_def	= 0,
	.awb_def	= 1,
	.rst_act_h	= false,
	.pdn_act_h	= true,
	.init		= &gc0308_init,
	.win_cfg	= &gc0308_win_cfg,
	.csi_cfg	= &gc0308_csi_cfg
};

extern void sensor_power_down(bool high, bool acth, int id);
extern void sensor_reset(bool rst, bool acth);
extern void sensor_clock(bool out, int mclk);
extern void sensor_read(const u16 addr, u8 *data, u8 bits);
extern void sensor_write(const u16 addr, const u8 data, u8 bits);
extern void sensor_write_group(struct sensor_reg* reg, u32 size);

static u32 gc0308_power(int id, int mclk, bool rst_h, bool pdn_h)
{
	/* set state to power off */
	sensor_power_down(true, pdn_h, 0);
	mdelay(1);
	sensor_power_down(true, pdn_h, 1);
	mdelay(1);
	sensor_reset(true, rst_h);
	mdelay(1);

	/* power on sequence */
	sensor_clock(true, mclk);
	mdelay(1);
	sensor_power_down(false, pdn_h, id);
	mdelay(1);
	sensor_reset(false, rst_h);
	mdelay(10);

	return 0;
}

static u32 gc0308_get_chipid(void)
{
	u8 chip_id = 0;

	sensor_write(0xfc, 0x16, BIT);
	mdelay(10);
	sensor_read(0x00, &chip_id, BIT);

	return chip_id;
}

static u32 gc0308_get_lum(void)
{
	u8 val = 0;
	u32 ret = 0;

	sensor_write(0xfe, 0x00, BIT);
	sensor_read(0xd4, &val, BIT);

	if (val < 0x30)
		ret = 1;

	return ret;
}

#define GC0308_FLIP_BASE	0x14
#define GC0308_H_FLIP_BIT	0
#define GC0308_V_FLIP_BIT	1
static void gc0308_set_flip(int hv, int flip)
{
	u8 tmp = 0;

	sensor_read(GC0308_FLIP_BASE, &tmp, BIT);

	if (hv) {
		if (flip)
			tmp |= (0x1 << GC0308_V_FLIP_BIT);
		else
			tmp &= ~(0x1 << GC0308_V_FLIP_BIT);
	}
	else {
		if (flip)
			tmp |= (0x1 << GC0308_H_FLIP_BIT);
		else
			tmp &= ~(0x1 << GC0308_H_FLIP_BIT);
	}

	sensor_write(GC0308_FLIP_BASE, tmp, BIT);
}

#define GC0308_EXP_ROW		ARRAY_ROW(exp_gc0308)
#define GC0308_EXP_COL		ARRAY_COL(exp_gc0308)
static void gc0308_set_exp(int exp)
{
	int key = exp + (GC0308_EXP_ROW / 2);
	if ((key < 0) || (key > (GC0308_EXP_ROW - 1)))
		return;

	sensor_write_group(exp_gc0308[key], GC0308_EXP_COL);
}

#define GC0308_AWB_ROW		ARRAY_ROW(awb_gc0308)
#define GC0308_AWB_COL		ARRAY_COL(awb_gc0308)
static void gc0308_set_awb(int awb)
{
	if ((awb < 0) || (awb > (GC0308_AWB_ROW - 1)))
		return;

	sensor_write_group(awb_gc0308[awb], GC0308_AWB_COL);
}

static struct sensor_ops gc0308_ops = {
	.power		= gc0308_power,
	.get_chipid	= gc0308_get_chipid,
	.get_lum	= gc0308_get_lum,
	.set_flip	= gc0308_set_flip,
	.set_exp	= gc0308_set_exp,
	.set_awb	= gc0308_set_awb,
	.start		= NULL,
	.stop		= NULL
};

struct sensor_dev gc0308_dev = {
	.info	= &gc0308_info,
	.ops	= &gc0308_ops,
};

#undef BIT
#endif
