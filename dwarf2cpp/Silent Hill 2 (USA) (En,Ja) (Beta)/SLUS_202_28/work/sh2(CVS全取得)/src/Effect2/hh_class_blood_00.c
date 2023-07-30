typedef struct HH_Object_Blood_00;
typedef struct ImpactQueue_Element;
typedef struct _anon0;
typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_ElementOption;
typedef struct Motion_Table_Infomeation;


typedef float type_0[4][5];
typedef float type_1[4][4];
typedef float type_2[4];
typedef float type_3[4][4];
typedef float type_4[4][4];
typedef float type_5[4][2];
typedef float type_6[2];
typedef float type_7[4][8];
typedef float type_8[4][5];
typedef int type_9[2];
typedef int type_10[4];
typedef unsigned int type_11[1];
typedef float type_12[4];
typedef float type_13[4][4];
typedef float type_14[4][4];
typedef float type_15[4][4];
typedef float type_16[4][4];
typedef Motion_Table_Infomeation type_17[4];
typedef float type_18[4][4];
typedef float type_19[4][4];

struct HH_Object_Blood_00
{
	Object_DataBlock_Header Header;
	unsigned short Step;
	unsigned char Vertex_Kind;
	unsigned char Scale_Kind;
	unsigned char Rgba_Kind;
	unsigned char Motion_Step;
	float Timer;
	float Rotate_Y;
	float Rgba[4];
	float Scale[4];
};

struct ImpactQueue_Element
{
	unsigned int Class_Descriptor;
	unsigned int hInstance;
	unsigned int* pResultHandle_Address;
	unsigned int Reserved[1];
	ImpactQueue_ElementOption Option;
};

struct _anon0
{
	unsigned int* pCurrent;
	<unknown fundamental type (0xa510)>* pBase;
	<unknown fundamental type (0xa510)>* pDmaTag;
	unsigned int* pVifCode;
	unsigned int numlen;
	unsigned long* pGifTag;
	unsigned int pad12;
	unsigned int pad13;
};

struct Object_DataBlock_Header
{
	unsigned int Enable;
	Object_DataBlock_Header* pNext;
};

struct ImpactQueue_ElementOption
{
	float Vector[4][2];
	float Float_Value[2];
	int Int_Value[2];
};

struct Motion_Table_Infomeation
{
	float diff_time;
	float diff_scale_ratio;
	float diff_rgba_ratio;
};

float _square_00_vertex[4][4];
float _square_01_vertex[4][4];
float _square_02_vertex[4][4];
float _square_03_vertex[4][4];
float _square_04_vertex[4][4];
float _square_vertex_list[4][5];
float _square_00_stq[4][4];
float _rgba_start_list[4][4];
float _rgba_end_list[4][4];
float _scale_start_list[4][5];
float _scale_end_list[4][8];
Motion_Table_Infomeation _motion_info[4];

unsigned int Object_Initialize(HH_Object_Blood_00* pThis);
unsigned int Object_Motion_00(HH_Object_Blood_00* pThis);
unsigned int Object_Draw(HH_Object_Blood_00* pThis, ImpactQueue_Element* pElement);
unsigned int HH_Class_Prefix_Blood_00();
unsigned int HH_Class_Suffix_Blood_00();
unsigned int HH_Class_Blood_00(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x253b00
unsigned int Object_Initialize(HH_Object_Blood_00* pThis)
{
	float radian;
	unsigned int result;
	// Line 238, Address: 0x253b00, Func Offset: 0
	// Line 245, Address: 0x253b10, Func Offset: 0x10
	// Line 246, Address: 0x253b30, Func Offset: 0x30
	// Line 247, Address: 0x253b50, Func Offset: 0x50
	// Line 251, Address: 0x253b64, Func Offset: 0x64
	// Line 253, Address: 0x253b68, Func Offset: 0x68
	// Line 257, Address: 0x253b6c, Func Offset: 0x6c
	// Line 259, Address: 0x253ba8, Func Offset: 0xa8
	// Line 266, Address: 0x253c5c, Func Offset: 0x15c
	// Line 267, Address: 0x253c60, Func Offset: 0x160
	// Func End, Address: 0x253c74, Func Offset: 0x174
}

// 
// Start address: 0x253c80
unsigned int Object_Motion_00(HH_Object_Blood_00* pThis)
{
	float rgba_ratio;
	float scale_ratio;
	float local_diff_time_ratio;
	float local_diff_time_max;
	float local_diff_time_current;
	unsigned int current_step;
	unsigned int i;
	unsigned int motion_num;
	Motion_Table_Infomeation* pMotion_Info;
	float local_rgba_end;
	float local_rgba_start;
	float local_scale_end;
	float local_scale_start;
	float local_time_end;
	float local_time_start;
	float* pScale_e;
	float* pScale_s;
	float* pRgba_e;
	float* pRgba_s;
	unsigned int result;
	// Line 281, Address: 0x253c80, Func Offset: 0
	// Line 284, Address: 0x253c9c, Func Offset: 0x1c
	// Line 285, Address: 0x253cb0, Func Offset: 0x30
	// Line 286, Address: 0x253cbc, Func Offset: 0x3c
	// Line 287, Address: 0x253cd0, Func Offset: 0x50
	// Line 289, Address: 0x253cdc, Func Offset: 0x5c
	// Line 292, Address: 0x253ce4, Func Offset: 0x64
	// Line 295, Address: 0x253ce8, Func Offset: 0x68
	// Line 298, Address: 0x253cec, Func Offset: 0x6c
	// Line 301, Address: 0x253cf4, Func Offset: 0x74
	// Line 304, Address: 0x253cfc, Func Offset: 0x7c
	// Line 305, Address: 0x253d08, Func Offset: 0x88
	// Line 307, Address: 0x253d0c, Func Offset: 0x8c
	// Line 308, Address: 0x253d18, Func Offset: 0x98
	// Line 309, Address: 0x253d30, Func Offset: 0xb0
	// Line 310, Address: 0x253d38, Func Offset: 0xb8
	// Line 311, Address: 0x253d40, Func Offset: 0xc0
	// Line 312, Address: 0x253d58, Func Offset: 0xd8
	// Line 313, Address: 0x253d70, Func Offset: 0xf0
	// Line 314, Address: 0x253d78, Func Offset: 0xf8
	// Line 317, Address: 0x253d80, Func Offset: 0x100
	// Line 319, Address: 0x253dac, Func Offset: 0x12c
	// Line 320, Address: 0x253dc0, Func Offset: 0x140
	// Line 322, Address: 0x253dcc, Func Offset: 0x14c
	// Line 324, Address: 0x253dd4, Func Offset: 0x154
	// Line 325, Address: 0x253de8, Func Offset: 0x168
	// Line 327, Address: 0x253df4, Func Offset: 0x174
	// Line 329, Address: 0x253dfc, Func Offset: 0x17c
	// Line 330, Address: 0x253e10, Func Offset: 0x190
	// Line 339, Address: 0x253e1c, Func Offset: 0x19c
	// Line 340, Address: 0x253e24, Func Offset: 0x1a4
	// Line 342, Address: 0x253e28, Func Offset: 0x1a8
	// Line 346, Address: 0x253e2c, Func Offset: 0x1ac
	// Line 347, Address: 0x253e48, Func Offset: 0x1c8
	// Line 350, Address: 0x253e4c, Func Offset: 0x1cc
	// Line 351, Address: 0x253e58, Func Offset: 0x1d8
	// Line 353, Address: 0x253e64, Func Offset: 0x1e4
	// Line 354, Address: 0x253e70, Func Offset: 0x1f0
	// Line 356, Address: 0x253e88, Func Offset: 0x208
	// Line 357, Address: 0x253e8c, Func Offset: 0x20c
	// Func End, Address: 0x253eac, Func Offset: 0x22c
}

// 
// Start address: 0x253eb0
unsigned int Object_Draw(HH_Object_Blood_00* pThis, ImpactQueue_Element* pElement)
{
	float ratio;
	int xyzf[4];
	float stq[4];
	int rgba[4];
	float Rgba[4];
	float clip_mat[4][4];
	float lsm[4][4];
	float lwm[4][4];
	unsigned int i;
	float pStq[4];
	float pVertex[4];
	_anon0* pPk;
	unsigned int result;
	// Line 371, Address: 0x253eb0, Func Offset: 0
	// Line 373, Address: 0x253edc, Func Offset: 0x2c
	// Line 374, Address: 0x253ee8, Func Offset: 0x38
	// Line 375, Address: 0x253f00, Func Offset: 0x50
	// Line 385, Address: 0x253f08, Func Offset: 0x58
	// Line 387, Address: 0x253f14, Func Offset: 0x64
	// Line 388, Address: 0x253f20, Func Offset: 0x70
	// Line 390, Address: 0x253f30, Func Offset: 0x80
	// Line 393, Address: 0x253f40, Func Offset: 0x90
	// Line 394, Address: 0x253f54, Func Offset: 0xa4
	// Line 397, Address: 0x253f68, Func Offset: 0xb8
	// Line 398, Address: 0x253f74, Func Offset: 0xc4
	// Line 400, Address: 0x253f88, Func Offset: 0xd8
	// Line 402, Address: 0x253f90, Func Offset: 0xe0
	// Line 406, Address: 0x253f9c, Func Offset: 0xec
	// Line 407, Address: 0x253fb0, Func Offset: 0x100
	// Line 412, Address: 0x253fcc, Func Offset: 0x11c
	// Line 413, Address: 0x253fd4, Func Offset: 0x124
	// Line 415, Address: 0x253ff4, Func Offset: 0x144
	// Line 416, Address: 0x25401c, Func Offset: 0x16c
	// Line 417, Address: 0x25402c, Func Offset: 0x17c
	// Line 418, Address: 0x25403c, Func Offset: 0x18c
	// Line 419, Address: 0x254040, Func Offset: 0x190
	// Line 420, Address: 0x25404c, Func Offset: 0x19c
	// Line 421, Address: 0x25405c, Func Offset: 0x1ac
	// Line 422, Address: 0x25406c, Func Offset: 0x1bc
	// Line 423, Address: 0x25407c, Func Offset: 0x1cc
	// Line 424, Address: 0x254088, Func Offset: 0x1d8
	// Line 425, Address: 0x25409c, Func Offset: 0x1ec
	// Line 426, Address: 0x2540a8, Func Offset: 0x1f8
	// Line 428, Address: 0x2540b0, Func Offset: 0x200
	// Line 429, Address: 0x2540b4, Func Offset: 0x204
	// Func End, Address: 0x2540e0, Func Offset: 0x230
}

// 
// Start address: 0x2540e0
unsigned int HH_Class_Prefix_Blood_00()
{
	unsigned long tex0;
	_anon0* pPk;
	unsigned int result;
	// Line 449, Address: 0x2540e0, Func Offset: 0
	// Line 451, Address: 0x2540ec, Func Offset: 0xc
	// Line 454, Address: 0x2540f8, Func Offset: 0x18
	// Line 457, Address: 0x254100, Func Offset: 0x20
	// Line 458, Address: 0x254108, Func Offset: 0x28
	// Line 460, Address: 0x25411c, Func Offset: 0x3c
	// Line 461, Address: 0x254138, Func Offset: 0x58
	// Line 462, Address: 0x254144, Func Offset: 0x64
	// Line 464, Address: 0x25414c, Func Offset: 0x6c
	// Line 465, Address: 0x254150, Func Offset: 0x70
	// Func End, Address: 0x254164, Func Offset: 0x84
}

// 
// Start address: 0x254170
unsigned int HH_Class_Suffix_Blood_00()
{
	unsigned int result;
	// Line 478, Address: 0x254170, Func Offset: 0
	// Line 481, Address: 0x254178, Func Offset: 0x8
	// Line 483, Address: 0x254180, Func Offset: 0x10
	// Line 484, Address: 0x254184, Func Offset: 0x14
	// Func End, Address: 0x254194, Func Offset: 0x24
}

// 
// Start address: 0x2541a0
unsigned int HH_Class_Blood_00(void* pBlock, ImpactQueue_Element* pElement)
{
	HH_Object_Blood_00* pThis;
	unsigned int result;
	// Line 497, Address: 0x2541a0, Func Offset: 0
	// Line 505, Address: 0x2541b8, Func Offset: 0x18
	// Line 506, Address: 0x2541bc, Func Offset: 0x1c
	// Line 508, Address: 0x2541c0, Func Offset: 0x20
	// Line 511, Address: 0x2541f4, Func Offset: 0x54
	// Line 513, Address: 0x2541fc, Func Offset: 0x5c
	// Line 514, Address: 0x254204, Func Offset: 0x64
	// Line 517, Address: 0x25420c, Func Offset: 0x6c
	// Line 519, Address: 0x254214, Func Offset: 0x74
	// Line 521, Address: 0x254224, Func Offset: 0x84
	// Line 523, Address: 0x254240, Func Offset: 0xa0
	// Line 524, Address: 0x25425c, Func Offset: 0xbc
	// Line 526, Address: 0x254264, Func Offset: 0xc4
	// Line 528, Address: 0x25426c, Func Offset: 0xcc
	// Line 530, Address: 0x254274, Func Offset: 0xd4
	// Line 531, Address: 0x25428c, Func Offset: 0xec
	// Line 532, Address: 0x2542a4, Func Offset: 0x104
	// Line 533, Address: 0x2542a8, Func Offset: 0x108
	// Line 535, Address: 0x2542b0, Func Offset: 0x110
	// Line 538, Address: 0x2542b8, Func Offset: 0x118
	// Line 539, Address: 0x2542bc, Func Offset: 0x11c
	// Line 542, Address: 0x2542c0, Func Offset: 0x120
	// Line 543, Address: 0x2542c4, Func Offset: 0x124
	// Func End, Address: 0x2542e0, Func Offset: 0x140
}

