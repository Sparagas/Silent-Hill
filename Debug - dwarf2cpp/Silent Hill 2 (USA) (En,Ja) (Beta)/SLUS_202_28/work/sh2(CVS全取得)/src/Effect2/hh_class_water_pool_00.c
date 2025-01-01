typedef struct ImpactQueue_Element;
typedef struct _anon0;
typedef struct HH_Object_Water_Pool_00;
typedef struct Object_DataBlock_Header;
typedef struct Motion_Table_Infomeation;
typedef struct ImpactQueue_ElementOption;


typedef float type_0[4][4];
typedef Motion_Table_Infomeation type_1[4];
typedef float type_2[4][4];
typedef float type_3[4][4];
typedef float type_4[4][4];
typedef float type_5[4];
typedef float type_6[4][4];
typedef float type_7[4][3];
typedef float type_8[4][4];
typedef float type_9[4][2];
typedef float type_10[2];
typedef int type_11[2];
typedef float type_12[4][4];
typedef float type_13[4][4];
typedef float type_14[4][4];
typedef int type_15[4];
typedef unsigned int type_16[1];
typedef float type_17[4];
typedef float type_18[4][4];
typedef float type_19[4][1];
typedef float type_20[4][4];
typedef float type_21[4][4];
typedef float type_22[4][4];
typedef float type_23[4][4];
typedef float type_24[4][4];
typedef float type_25[4][4];
typedef float type_26[4][4];
typedef float type_27[4][16];
typedef float type_28[4][1];
typedef float type_29[4][4];
typedef float type_30[4][4];

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

struct HH_Object_Water_Pool_00
{
	Object_DataBlock_Header Header;
	unsigned short Step;
	unsigned char Texture_Kind;
	unsigned char Scale_Kind;
	unsigned char Rgba_Kind;
	unsigned char Motion_Step;
	float Timer;
	float Rotate_Y;
	float Rgba[4];
	float Scale[4];
};

struct Object_DataBlock_Header
{
	unsigned int Enable;
	Object_DataBlock_Header* pNext;
};

struct Motion_Table_Infomeation
{
	float diff_time;
	float diff_scale_ratio;
	float diff_rgba_ratio;
};

struct ImpactQueue_ElementOption
{
	float Vector[4][2];
	float Float_Value[2];
	int Int_Value[2];
};

float _square_00_vertex[4][4];
float _square_00_stq[4][4];
float _square_01_stq[4][4];
float _square_02_stq[4][4];
float _square_03_stq[4][4];
float _square_10_stq[4][4];
float _square_11_stq[4][4];
float _square_12_stq[4][4];
float _square_13_stq[4][4];
float _square_20_stq[4][4];
float _square_21_stq[4][4];
float _square_22_stq[4][4];
float _square_23_stq[4][4];
float _square_30_stq[4][4];
float _square_31_stq[4][4];
float _square_32_stq[4][4];
float _square_33_stq[4][4];
float _square_stq_list[4][16];
float _rgba_start_list[4][1];
float _rgba_end_list[4][1];
float _scale_start_list[4][3];
float _scale_end_list[4][4];
Motion_Table_Infomeation _motion_info[4];

unsigned int Object_Initialize(HH_Object_Water_Pool_00* pThis);
unsigned int Object_Motion_00(HH_Object_Water_Pool_00* pThis);
unsigned int Object_Draw(HH_Object_Water_Pool_00* pThis, ImpactQueue_Element* pElement);
unsigned int HH_Class_Prefix_Water_Pool_00();
unsigned int HH_Class_Suffix_Water_Pool_00();
unsigned int HH_Class_Water_Pool_00(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x282ec0
unsigned int Object_Initialize(HH_Object_Water_Pool_00* pThis)
{
	float radian;
	unsigned int result;
	// Line 314, Address: 0x282ec0, Func Offset: 0
	// Line 322, Address: 0x282ed0, Func Offset: 0x10
	// Line 323, Address: 0x282ee4, Func Offset: 0x24
	// Line 324, Address: 0x282f04, Func Offset: 0x44
	// Line 328, Address: 0x282f10, Func Offset: 0x50
	// Line 331, Address: 0x282f14, Func Offset: 0x54
	// Line 333, Address: 0x282f50, Func Offset: 0x90
	// Line 338, Address: 0x283004, Func Offset: 0x144
	// Line 340, Address: 0x283008, Func Offset: 0x148
	// Line 341, Address: 0x28300c, Func Offset: 0x14c
	// Func End, Address: 0x283020, Func Offset: 0x160
}

// 
// Start address: 0x283020
unsigned int Object_Motion_00(HH_Object_Water_Pool_00* pThis)
{
	float rgba_ratio;
	float scale_ratio;
	float local_diff_time_ratio;
	float local_diff_time_max;
	float local_diff_time_current;
	unsigned int current_step;
	unsigned int i;
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
	// Line 354, Address: 0x283020, Func Offset: 0
	// Line 357, Address: 0x28303c, Func Offset: 0x1c
	// Line 358, Address: 0x283050, Func Offset: 0x30
	// Line 359, Address: 0x28305c, Func Offset: 0x3c
	// Line 360, Address: 0x283070, Func Offset: 0x50
	// Line 362, Address: 0x28307c, Func Offset: 0x5c
	// Line 365, Address: 0x283084, Func Offset: 0x64
	// Line 368, Address: 0x283088, Func Offset: 0x68
	// Line 371, Address: 0x28308c, Func Offset: 0x6c
	// Line 373, Address: 0x283094, Func Offset: 0x74
	// Line 376, Address: 0x28309c, Func Offset: 0x7c
	// Line 377, Address: 0x2830a8, Func Offset: 0x88
	// Line 379, Address: 0x2830ac, Func Offset: 0x8c
	// Line 380, Address: 0x2830b8, Func Offset: 0x98
	// Line 381, Address: 0x2830d0, Func Offset: 0xb0
	// Line 382, Address: 0x2830d8, Func Offset: 0xb8
	// Line 383, Address: 0x2830e0, Func Offset: 0xc0
	// Line 384, Address: 0x2830f8, Func Offset: 0xd8
	// Line 385, Address: 0x283110, Func Offset: 0xf0
	// Line 386, Address: 0x283118, Func Offset: 0xf8
	// Line 389, Address: 0x283120, Func Offset: 0x100
	// Line 391, Address: 0x28314c, Func Offset: 0x12c
	// Line 392, Address: 0x283160, Func Offset: 0x140
	// Line 394, Address: 0x28316c, Func Offset: 0x14c
	// Line 396, Address: 0x283174, Func Offset: 0x154
	// Line 397, Address: 0x283188, Func Offset: 0x168
	// Line 399, Address: 0x283194, Func Offset: 0x174
	// Line 401, Address: 0x28319c, Func Offset: 0x17c
	// Line 402, Address: 0x2831b0, Func Offset: 0x190
	// Line 411, Address: 0x2831bc, Func Offset: 0x19c
	// Line 412, Address: 0x2831c4, Func Offset: 0x1a4
	// Line 414, Address: 0x2831c8, Func Offset: 0x1a8
	// Line 418, Address: 0x2831cc, Func Offset: 0x1ac
	// Line 419, Address: 0x2831e8, Func Offset: 0x1c8
	// Line 422, Address: 0x2831ec, Func Offset: 0x1cc
	// Line 423, Address: 0x2831f8, Func Offset: 0x1d8
	// Line 425, Address: 0x283204, Func Offset: 0x1e4
	// Line 427, Address: 0x283210, Func Offset: 0x1f0
	// Line 429, Address: 0x283228, Func Offset: 0x208
	// Line 430, Address: 0x28322c, Func Offset: 0x20c
	// Func End, Address: 0x28324c, Func Offset: 0x22c
}

// 
// Start address: 0x283250
unsigned int Object_Draw(HH_Object_Water_Pool_00* pThis, ImpactQueue_Element* pElement)
{
	unsigned int addr;
	float q;
	int xyzf[4];
	int rgba[4];
	float dir[4];
	float pos[4];
	float Rgba[4];
	float clip_mat[4][4];
	float lsm[4][4];
	float lwm[4][4];
	unsigned int i;
	unsigned int prim_type;
	unsigned int vertex_num;
	float pStq[4];
	float pVertex[4];
	_anon0* pPk;
	unsigned int result;
	float color_scale;
	// Line 443, Address: 0x283250, Func Offset: 0
	// Line 445, Address: 0x28327c, Func Offset: 0x2c
	// Line 446, Address: 0x283288, Func Offset: 0x38
	// Line 447, Address: 0x283290, Func Offset: 0x40
	// Line 459, Address: 0x2832a8, Func Offset: 0x58
	// Line 461, Address: 0x2832b8, Func Offset: 0x68
	// Line 462, Address: 0x2832dc, Func Offset: 0x8c
	// Line 463, Address: 0x283308, Func Offset: 0xb8
	// Line 465, Address: 0x283310, Func Offset: 0xc0
	// Line 470, Address: 0x283320, Func Offset: 0xd0
	// Line 472, Address: 0x28332c, Func Offset: 0xdc
	// Line 473, Address: 0x283338, Func Offset: 0xe8
	// Line 474, Address: 0x283398, Func Offset: 0x148
	// Line 476, Address: 0x2833ac, Func Offset: 0x15c
	// Line 477, Address: 0x2833c0, Func Offset: 0x170
	// Line 480, Address: 0x2833d4, Func Offset: 0x184
	// Line 481, Address: 0x2833e0, Func Offset: 0x190
	// Line 484, Address: 0x2833f4, Func Offset: 0x1a4
	// Line 486, Address: 0x2833fc, Func Offset: 0x1ac
	// Line 499, Address: 0x283410, Func Offset: 0x1c0
	// Line 500, Address: 0x283420, Func Offset: 0x1d0
	// Line 502, Address: 0x283434, Func Offset: 0x1e4
	// Line 503, Address: 0x283450, Func Offset: 0x200
	// Line 506, Address: 0x283460, Func Offset: 0x210
	// Line 509, Address: 0x28346c, Func Offset: 0x21c
	// Line 511, Address: 0x283470, Func Offset: 0x220
	// Line 512, Address: 0x283498, Func Offset: 0x248
	// Line 513, Address: 0x28349c, Func Offset: 0x24c
	// Line 515, Address: 0x2834a0, Func Offset: 0x250
	// Line 516, Address: 0x2834f0, Func Offset: 0x2a0
	// Line 517, Address: 0x283538, Func Offset: 0x2e8
	// Line 518, Address: 0x28357c, Func Offset: 0x32c
	// Line 520, Address: 0x28358c, Func Offset: 0x33c
	// Line 522, Address: 0x283594, Func Offset: 0x344
	// Line 523, Address: 0x283598, Func Offset: 0x348
	// Func End, Address: 0x2835c4, Func Offset: 0x374
}

// 
// Start address: 0x2835d0
unsigned int HH_Class_Prefix_Water_Pool_00()
{
	unsigned long tex0;
	_anon0* pPk;
	unsigned int result;
	// Line 543, Address: 0x2835d0, Func Offset: 0
	// Line 545, Address: 0x2835dc, Func Offset: 0xc
	// Line 548, Address: 0x2835e8, Func Offset: 0x18
	// Line 551, Address: 0x2835f0, Func Offset: 0x20
	// Line 552, Address: 0x283600, Func Offset: 0x30
	// Line 554, Address: 0x283614, Func Offset: 0x44
	// Line 556, Address: 0x283630, Func Offset: 0x60
	// Line 558, Address: 0x283638, Func Offset: 0x68
	// Line 559, Address: 0x28363c, Func Offset: 0x6c
	// Func End, Address: 0x283650, Func Offset: 0x80
}

// 
// Start address: 0x283650
unsigned int HH_Class_Suffix_Water_Pool_00()
{
	unsigned int result;
	// Line 575, Address: 0x283650, Func Offset: 0
	// Line 576, Address: 0x283654, Func Offset: 0x4
	// Func End, Address: 0x28365c, Func Offset: 0xc
}

// 
// Start address: 0x283660
unsigned int HH_Class_Water_Pool_00(void* pBlock, ImpactQueue_Element* pElement)
{
	HH_Object_Water_Pool_00* pThis;
	unsigned int result;
	// Line 589, Address: 0x283660, Func Offset: 0
	// Line 596, Address: 0x283678, Func Offset: 0x18
	// Line 597, Address: 0x28367c, Func Offset: 0x1c
	// Line 599, Address: 0x283680, Func Offset: 0x20
	// Line 602, Address: 0x2836a8, Func Offset: 0x48
	// Line 604, Address: 0x2836b0, Func Offset: 0x50
	// Line 605, Address: 0x2836b8, Func Offset: 0x58
	// Line 608, Address: 0x2836c0, Func Offset: 0x60
	// Line 610, Address: 0x2836c8, Func Offset: 0x68
	// Line 612, Address: 0x2836d8, Func Offset: 0x78
	// Line 613, Address: 0x2836dc, Func Offset: 0x7c
	// Line 618, Address: 0x2836e4, Func Offset: 0x84
	// Line 620, Address: 0x2836f4, Func Offset: 0x94
	// Line 621, Address: 0x283710, Func Offset: 0xb0
	// Line 624, Address: 0x283718, Func Offset: 0xb8
	// Line 625, Address: 0x28371c, Func Offset: 0xbc
	// Line 628, Address: 0x283720, Func Offset: 0xc0
	// Line 629, Address: 0x283724, Func Offset: 0xc4
	// Func End, Address: 0x283740, Func Offset: 0xe0
}

