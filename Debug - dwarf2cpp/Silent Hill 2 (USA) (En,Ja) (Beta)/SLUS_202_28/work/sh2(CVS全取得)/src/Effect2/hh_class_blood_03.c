typedef struct _anon0;
typedef struct ImpactQueue_Element;
typedef struct Vertex_Infomeation_List;
typedef struct HH_Object_Blood_03;
typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_ElementOption;
typedef struct Motion_Table_Infomeation;


typedef float type_0[4][4];
typedef float type_1[1];
typedef float type_2[4];
typedef float type_3[4][2];
typedef float type_4[1];
typedef float type_5[4][2];
typedef float type_6[2];
typedef int type_7[2];
typedef float type_8[4][4];
typedef int type_9[4];
typedef float type_10[1];
typedef unsigned int type_11[1];
typedef float type_12[4];
typedef float type_13[4][4];
typedef Motion_Table_Infomeation type_14[3];
typedef Vertex_Infomeation_List type_15[1];
typedef float type_16[4][4];
typedef float type_17[4][4];
typedef float type_18[1];

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

struct ImpactQueue_Element
{
	unsigned int Class_Descriptor;
	unsigned int hInstance;
	unsigned int* pResultHandle_Address;
	unsigned int Reserved[1];
	ImpactQueue_ElementOption Option;
};

struct Vertex_Infomeation_List
{
	float pVertex_List[4];
	float pNormal_List[4];
	unsigned int Vertex_Max;
	unsigned int Primitive_Type;
};

struct HH_Object_Blood_03
{
	Object_DataBlock_Header Header;
	unsigned int Step;
	unsigned int Vertex_Kind;
	float Timer;
	float Verocity_0[4];
	float Scale;
	float Alpha;
	unsigned int Motion_Step;
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
float _square_00_normal[4][4];
float _square_00_stq[4][4];
float _square_01_stq[4][4];
float _square_0x_stq_list[4][2];
Vertex_Infomeation_List _vertex_info_list[1];
float _rgba_start_list[1];
float _rgba_end_list[1];
float _scale_start_list[1];
float _scale_end_list[1];
Motion_Table_Infomeation _motion_info[3];

unsigned int Object_Initialize(HH_Object_Blood_03* pThis, ImpactQueue_Element* pElement);
void ParabolaMotion_Calculator(HH_Object_Blood_03* pThis, float Time, float* Position);
unsigned int Object_Motion_00(HH_Object_Blood_03* pThis);
unsigned int Object_Draw(HH_Object_Blood_03* pThis, ImpactQueue_Element* pElement, float* Current_Position);
unsigned int HH_Class_Prefix_Blood_03();
unsigned int HH_Class_Suffix_Blood_03();
unsigned int HH_Class_Blood_03(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x255430
unsigned int Object_Initialize(HH_Object_Blood_03* pThis, ImpactQueue_Element* pElement)
{
	float resist_ya;
	float resist_y0;
	float resist_xz;
	float* src_direction;
	unsigned int result;
	// Line 244, Address: 0x255430, Func Offset: 0
	// Line 248, Address: 0x255448, Func Offset: 0x18
	// Line 251, Address: 0x25544c, Func Offset: 0x1c
	// Line 269, Address: 0x25545c, Func Offset: 0x2c
	// Line 270, Address: 0x255474, Func Offset: 0x44
	// Line 271, Address: 0x255480, Func Offset: 0x50
	// Line 273, Address: 0x25548c, Func Offset: 0x5c
	// Line 276, Address: 0x255498, Func Offset: 0x68
	// Line 277, Address: 0x25549c, Func Offset: 0x6c
	// Func End, Address: 0x2554b4, Func Offset: 0x84
}

// 
// Start address: 0x2554c0
void ParabolaMotion_Calculator(HH_Object_Blood_03* pThis, float Time, float* Position)
{
	float time_mat[4][4];
	// Line 292, Address: 0x2554c0, Func Offset: 0
	// Line 296, Address: 0x2554e0, Func Offset: 0x20
	// Line 297, Address: 0x2554ec, Func Offset: 0x2c
	// Line 298, Address: 0x2554f0, Func Offset: 0x30
	// Line 299, Address: 0x2554f4, Func Offset: 0x34
	// Line 300, Address: 0x2554f8, Func Offset: 0x38
	// Line 301, Address: 0x255500, Func Offset: 0x40
	// Line 302, Address: 0x255504, Func Offset: 0x44
	// Line 303, Address: 0x255518, Func Offset: 0x58
	// Func End, Address: 0x255534, Func Offset: 0x74
}

// 
// Start address: 0x255540
unsigned int Object_Motion_00(HH_Object_Blood_03* pThis)
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
	float Scale_e;
	float Scale_s;
	float Rgba_e;
	float Rgba_s;
	unsigned int kind;
	unsigned int result;
	// Line 323, Address: 0x255540, Func Offset: 0
	// Line 324, Address: 0x255548, Func Offset: 0x8
	// Line 325, Address: 0x255550, Func Offset: 0x10
	// Line 326, Address: 0x255558, Func Offset: 0x18
	// Line 328, Address: 0x255560, Func Offset: 0x20
	// Line 331, Address: 0x255568, Func Offset: 0x28
	// Line 334, Address: 0x25556c, Func Offset: 0x2c
	// Line 337, Address: 0x255570, Func Offset: 0x30
	// Line 339, Address: 0x255578, Func Offset: 0x38
	// Line 342, Address: 0x255580, Func Offset: 0x40
	// Line 343, Address: 0x25558c, Func Offset: 0x4c
	// Line 345, Address: 0x255590, Func Offset: 0x50
	// Line 346, Address: 0x25559c, Func Offset: 0x5c
	// Line 347, Address: 0x2555b4, Func Offset: 0x74
	// Line 348, Address: 0x2555bc, Func Offset: 0x7c
	// Line 349, Address: 0x2555c4, Func Offset: 0x84
	// Line 350, Address: 0x2555d8, Func Offset: 0x98
	// Line 351, Address: 0x2555f0, Func Offset: 0xb0
	// Line 352, Address: 0x2555f8, Func Offset: 0xb8
	// Line 355, Address: 0x255600, Func Offset: 0xc0
	// Line 357, Address: 0x255628, Func Offset: 0xe8
	// Line 358, Address: 0x25563c, Func Offset: 0xfc
	// Line 360, Address: 0x255648, Func Offset: 0x108
	// Line 362, Address: 0x255650, Func Offset: 0x110
	// Line 363, Address: 0x255664, Func Offset: 0x124
	// Line 365, Address: 0x255670, Func Offset: 0x130
	// Line 367, Address: 0x255678, Func Offset: 0x138
	// Line 368, Address: 0x25568c, Func Offset: 0x14c
	// Line 377, Address: 0x255698, Func Offset: 0x158
	// Line 378, Address: 0x2556a0, Func Offset: 0x160
	// Line 380, Address: 0x2556a4, Func Offset: 0x164
	// Line 384, Address: 0x2556a8, Func Offset: 0x168
	// Line 385, Address: 0x2556c4, Func Offset: 0x184
	// Line 388, Address: 0x2556c8, Func Offset: 0x188
	// Line 389, Address: 0x2556d4, Func Offset: 0x194
	// Line 391, Address: 0x2556e0, Func Offset: 0x1a0
	// Line 392, Address: 0x2556fc, Func Offset: 0x1bc
	// Line 394, Address: 0x25570c, Func Offset: 0x1cc
	// Line 395, Address: 0x255710, Func Offset: 0x1d0
	// Func End, Address: 0x255718, Func Offset: 0x1d8
}

// 
// Start address: 0x255720
unsigned int Object_Draw(HH_Object_Blood_03* pThis, ImpactQueue_Element* pElement, float* Current_Position)
{
	float stq_dummy[4];
	int rgba[4];
	int xyzf[4];
	float Base_Rgba[4];
	float clip_mat[4][4];
	float lsm[4][4];
	float lwm[4][4];
	float pStq[4];
	float pVertex[4];
	Vertex_Infomeation_List* pInfo;
	_anon0* pPk;
	unsigned int result;
	// Line 410, Address: 0x255720, Func Offset: 0
	// Line 412, Address: 0x25574c, Func Offset: 0x2c
	// Line 414, Address: 0x255758, Func Offset: 0x38
	// Line 415, Address: 0x255760, Func Offset: 0x40
	// Line 418, Address: 0x255778, Func Offset: 0x58
	// Line 425, Address: 0x255794, Func Offset: 0x74
	// Line 428, Address: 0x2557a0, Func Offset: 0x80
	// Line 431, Address: 0x2557ac, Func Offset: 0x8c
	// Line 432, Address: 0x2557c4, Func Offset: 0xa4
	// Line 433, Address: 0x2557d8, Func Offset: 0xb8
	// Line 436, Address: 0x2557e8, Func Offset: 0xc8
	// Line 437, Address: 0x2557fc, Func Offset: 0xdc
	// Line 439, Address: 0x255810, Func Offset: 0xf0
	// Line 442, Address: 0x255824, Func Offset: 0x104
	// Line 443, Address: 0x255830, Func Offset: 0x110
	// Line 445, Address: 0x255844, Func Offset: 0x124
	// Line 447, Address: 0x25584c, Func Offset: 0x12c
	// Line 448, Address: 0x255854, Func Offset: 0x134
	// Line 449, Address: 0x255864, Func Offset: 0x144
	// Line 451, Address: 0x255874, Func Offset: 0x154
	// Line 452, Address: 0x255894, Func Offset: 0x174
	// Line 453, Address: 0x2558a0, Func Offset: 0x180
	// Line 454, Address: 0x2558b0, Func Offset: 0x190
	// Line 456, Address: 0x2558c0, Func Offset: 0x1a0
	// Line 457, Address: 0x2558dc, Func Offset: 0x1bc
	// Line 458, Address: 0x2558e8, Func Offset: 0x1c8
	// Line 459, Address: 0x2558f4, Func Offset: 0x1d4
	// Line 460, Address: 0x255904, Func Offset: 0x1e4
	// Line 461, Address: 0x255910, Func Offset: 0x1f0
	// Line 463, Address: 0x25591c, Func Offset: 0x1fc
	// Line 465, Address: 0x255924, Func Offset: 0x204
	// Line 466, Address: 0x255928, Func Offset: 0x208
	// Func End, Address: 0x255950, Func Offset: 0x230
}

// 
// Start address: 0x255950
unsigned int HH_Class_Prefix_Blood_03()
{
	unsigned long tex0;
	_anon0* pPk;
	unsigned int result;
	// Line 485, Address: 0x255950, Func Offset: 0
	// Line 487, Address: 0x25595c, Func Offset: 0xc
	// Line 490, Address: 0x255968, Func Offset: 0x18
	// Line 492, Address: 0x255970, Func Offset: 0x20
	// Line 493, Address: 0x255980, Func Offset: 0x30
	// Line 495, Address: 0x255994, Func Offset: 0x44
	// Line 496, Address: 0x2559b0, Func Offset: 0x60
	// Line 497, Address: 0x2559cc, Func Offset: 0x7c
	// Line 498, Address: 0x2559d8, Func Offset: 0x88
	// Line 500, Address: 0x2559e0, Func Offset: 0x90
	// Line 501, Address: 0x2559e4, Func Offset: 0x94
	// Func End, Address: 0x2559f8, Func Offset: 0xa8
}

// 
// Start address: 0x255a00
unsigned int HH_Class_Suffix_Blood_03()
{
	_anon0* pPk;
	unsigned int result;
	// Line 514, Address: 0x255a00, Func Offset: 0
	// Line 516, Address: 0x255a0c, Func Offset: 0xc
	// Line 518, Address: 0x255a18, Func Offset: 0x18
	// Line 519, Address: 0x255a20, Func Offset: 0x20
	// Line 520, Address: 0x255a28, Func Offset: 0x28
	// Line 521, Address: 0x255a3c, Func Offset: 0x3c
	// Line 523, Address: 0x255a44, Func Offset: 0x44
	// Line 524, Address: 0x255a48, Func Offset: 0x48
	// Func End, Address: 0x255a5c, Func Offset: 0x5c
}

// 
// Start address: 0x255a60
unsigned int HH_Class_Blood_03(void* pBlock, ImpactQueue_Element* pElement)
{
	float position[4];
	float position[4];
	HH_Object_Blood_03* pThis;
	unsigned int result;
	// Line 537, Address: 0x255a60, Func Offset: 0
	// Line 545, Address: 0x255a78, Func Offset: 0x18
	// Line 546, Address: 0x255a7c, Func Offset: 0x1c
	// Line 548, Address: 0x255a80, Func Offset: 0x20
	// Line 550, Address: 0x255ab4, Func Offset: 0x54
	// Line 551, Address: 0x255abc, Func Offset: 0x5c
	// Line 552, Address: 0x255ac8, Func Offset: 0x68
	// Line 557, Address: 0x255ad0, Func Offset: 0x70
	// Line 559, Address: 0x255ae0, Func Offset: 0x80
	// Line 570, Address: 0x255af0, Func Offset: 0x90
	// Line 571, Address: 0x255b0c, Func Offset: 0xac
	// Line 572, Address: 0x255b10, Func Offset: 0xb0
	// Line 579, Address: 0x255b18, Func Offset: 0xb8
	// Line 581, Address: 0x255b3c, Func Offset: 0xdc
	// Line 584, Address: 0x255b44, Func Offset: 0xe4
	// Line 586, Address: 0x255b58, Func Offset: 0xf8
	// Line 587, Address: 0x255b74, Func Offset: 0x114
	// Line 593, Address: 0x255b7c, Func Offset: 0x11c
	// Line 594, Address: 0x255b8c, Func Offset: 0x12c
	// Line 595, Address: 0x255b98, Func Offset: 0x138
	// Line 597, Address: 0x255bac, Func Offset: 0x14c
	// Line 600, Address: 0x255bb4, Func Offset: 0x154
	// Line 601, Address: 0x255bb8, Func Offset: 0x158
	// Line 604, Address: 0x255bbc, Func Offset: 0x15c
	// Line 605, Address: 0x255bc0, Func Offset: 0x160
	// Func End, Address: 0x255bdc, Func Offset: 0x17c
}

