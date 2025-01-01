typedef struct _anon0;
typedef struct Vertex_Infomeation_List;
typedef struct HH_Object_Blood_04;
typedef struct ImpactQueue_Element;
typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_ElementOption;
typedef struct Motion_Table_Infomeation;


typedef float type_0[4][4];
typedef float type_1[1];
typedef float type_2[4];
typedef float type_3[4][4];
typedef float type_4[1];
typedef float type_5[4][4];
typedef float type_6[4][4];
typedef float type_7[4][2];
typedef float type_8[2];
typedef int type_9[2];
typedef float type_10[1];
typedef int type_11[4];
typedef unsigned int type_12[1];
typedef float type_13[4];
typedef float type_14[4][4];
typedef Motion_Table_Infomeation type_15[3];
typedef Vertex_Infomeation_List type_16[1];
typedef float type_17[4][4];
typedef float type_18[4][4];
typedef float type_19[1];
typedef float type_20[4][4];

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

struct Vertex_Infomeation_List
{
	float pVertex_List[4];
	float pNormal_List[4];
	unsigned int Vertex_Max;
	unsigned int Primitive_Type;
};

struct HH_Object_Blood_04
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

struct ImpactQueue_Element
{
	unsigned int Class_Descriptor;
	unsigned int hInstance;
	unsigned int* pResultHandle_Address;
	unsigned int Reserved[1];
	ImpactQueue_ElementOption Option;
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

float _visc;
float _mass;
float _radius;
float _suppress_coff_0;
float _suppress_coff_1;
float _suppress_coff_xy;
float _square_00_vertex[4][4];
float _square_00_normal[4][4];
float _square_00_stq[4][4];
float _square_01_stq[4][4];
float _square_10_stq[4][4];
float _square_11_stq[4][4];
float _square_0x_stq_list[4][4];
Vertex_Infomeation_List _vertex_info_list[1];
float _rgba_start_list[1];
float _rgba_end_list[1];
float _scale_start_list[1];
float _scale_end_list[1];
Motion_Table_Infomeation _motion_info[3];

unsigned int Object_Initialize(HH_Object_Blood_04* pThis, ImpactQueue_Element* pElement);
void ParabolaMotion_Calculator(HH_Object_Blood_04* pThis, float Time, float* Position);
unsigned int Object_Motion_00(HH_Object_Blood_04* pThis);
unsigned int Object_Draw(HH_Object_Blood_04* pThis, ImpactQueue_Element* pElement, float* Current_Position);
unsigned int HH_Class_Prefix_Blood_04();
unsigned int HH_Class_Suffix_Blood_04();
unsigned int HH_Class_Blood_04(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x291620
unsigned int Object_Initialize(HH_Object_Blood_04* pThis, ImpactQueue_Element* pElement)
{
	float resist_ya;
	float resist_y0;
	float resist_xz;
	float* src_direction;
	unsigned int result;
	// Line 265, Address: 0x291620, Func Offset: 0
	// Line 269, Address: 0x291638, Func Offset: 0x18
	// Line 272, Address: 0x29163c, Func Offset: 0x1c
	// Line 282, Address: 0x29164c, Func Offset: 0x2c
	// Line 283, Address: 0x291678, Func Offset: 0x58
	// Line 290, Address: 0x291694, Func Offset: 0x74
	// Line 291, Address: 0x2916a0, Func Offset: 0x80
	// Line 292, Address: 0x2916ac, Func Offset: 0x8c
	// Line 294, Address: 0x2916b8, Func Offset: 0x98
	// Line 297, Address: 0x2916d8, Func Offset: 0xb8
	// Line 298, Address: 0x2916dc, Func Offset: 0xbc
	// Func End, Address: 0x2916f4, Func Offset: 0xd4
}

// 
// Start address: 0x291700
void ParabolaMotion_Calculator(HH_Object_Blood_04* pThis, float Time, float* Position)
{
	float time_mat[4][4];
	// Line 313, Address: 0x291700, Func Offset: 0
	// Line 317, Address: 0x291720, Func Offset: 0x20
	// Line 318, Address: 0x29172c, Func Offset: 0x2c
	// Line 319, Address: 0x291730, Func Offset: 0x30
	// Line 320, Address: 0x291734, Func Offset: 0x34
	// Line 321, Address: 0x291738, Func Offset: 0x38
	// Line 322, Address: 0x291740, Func Offset: 0x40
	// Line 323, Address: 0x291744, Func Offset: 0x44
	// Line 324, Address: 0x291758, Func Offset: 0x58
	// Func End, Address: 0x291774, Func Offset: 0x74
}

// 
// Start address: 0x291780
unsigned int Object_Motion_00(HH_Object_Blood_04* pThis)
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
	// Line 344, Address: 0x291780, Func Offset: 0
	// Line 345, Address: 0x291788, Func Offset: 0x8
	// Line 346, Address: 0x291790, Func Offset: 0x10
	// Line 347, Address: 0x291798, Func Offset: 0x18
	// Line 349, Address: 0x2917a0, Func Offset: 0x20
	// Line 352, Address: 0x2917a8, Func Offset: 0x28
	// Line 355, Address: 0x2917ac, Func Offset: 0x2c
	// Line 358, Address: 0x2917b0, Func Offset: 0x30
	// Line 360, Address: 0x2917b8, Func Offset: 0x38
	// Line 363, Address: 0x2917c0, Func Offset: 0x40
	// Line 364, Address: 0x2917cc, Func Offset: 0x4c
	// Line 366, Address: 0x2917d0, Func Offset: 0x50
	// Line 367, Address: 0x2917dc, Func Offset: 0x5c
	// Line 368, Address: 0x2917f4, Func Offset: 0x74
	// Line 369, Address: 0x2917fc, Func Offset: 0x7c
	// Line 370, Address: 0x291804, Func Offset: 0x84
	// Line 371, Address: 0x291818, Func Offset: 0x98
	// Line 372, Address: 0x291830, Func Offset: 0xb0
	// Line 373, Address: 0x291838, Func Offset: 0xb8
	// Line 376, Address: 0x291840, Func Offset: 0xc0
	// Line 378, Address: 0x291868, Func Offset: 0xe8
	// Line 379, Address: 0x29187c, Func Offset: 0xfc
	// Line 381, Address: 0x291888, Func Offset: 0x108
	// Line 383, Address: 0x291890, Func Offset: 0x110
	// Line 384, Address: 0x2918a4, Func Offset: 0x124
	// Line 386, Address: 0x2918b0, Func Offset: 0x130
	// Line 388, Address: 0x2918b8, Func Offset: 0x138
	// Line 389, Address: 0x2918cc, Func Offset: 0x14c
	// Line 398, Address: 0x2918d8, Func Offset: 0x158
	// Line 399, Address: 0x2918e0, Func Offset: 0x160
	// Line 401, Address: 0x2918e4, Func Offset: 0x164
	// Line 405, Address: 0x2918e8, Func Offset: 0x168
	// Line 406, Address: 0x291904, Func Offset: 0x184
	// Line 409, Address: 0x291908, Func Offset: 0x188
	// Line 410, Address: 0x291914, Func Offset: 0x194
	// Line 412, Address: 0x291920, Func Offset: 0x1a0
	// Line 413, Address: 0x29193c, Func Offset: 0x1bc
	// Line 415, Address: 0x29194c, Func Offset: 0x1cc
	// Line 416, Address: 0x291950, Func Offset: 0x1d0
	// Func End, Address: 0x291958, Func Offset: 0x1d8
}

// 
// Start address: 0x291960
unsigned int Object_Draw(HH_Object_Blood_04* pThis, ImpactQueue_Element* pElement, float* Current_Position)
{
	float stq_dummy[4];
	int rgba[4];
	int xyzf[4];
	float clip_mat[4][4];
	float lsm[4][4];
	float lwm[4][4];
	float pStq[4];
	float pVertex[4];
	Vertex_Infomeation_List* pInfo;
	_anon0* pPk;
	unsigned int result;
	float Base_Rgba[4];
	// Line 431, Address: 0x291960, Func Offset: 0
	// Line 433, Address: 0x29198c, Func Offset: 0x2c
	// Line 435, Address: 0x291998, Func Offset: 0x38
	// Line 436, Address: 0x2919a0, Func Offset: 0x40
	// Line 443, Address: 0x2919b8, Func Offset: 0x58
	// Line 447, Address: 0x2919c4, Func Offset: 0x64
	// Line 450, Address: 0x2919d0, Func Offset: 0x70
	// Line 453, Address: 0x2919dc, Func Offset: 0x7c
	// Line 454, Address: 0x2919f4, Func Offset: 0x94
	// Line 455, Address: 0x291a08, Func Offset: 0xa8
	// Line 457, Address: 0x291a18, Func Offset: 0xb8
	// Line 458, Address: 0x291a2c, Func Offset: 0xcc
	// Line 459, Address: 0x291a40, Func Offset: 0xe0
	// Line 462, Address: 0x291a54, Func Offset: 0xf4
	// Line 463, Address: 0x291a60, Func Offset: 0x100
	// Line 466, Address: 0x291a74, Func Offset: 0x114
	// Line 468, Address: 0x291a7c, Func Offset: 0x11c
	// Line 469, Address: 0x291a84, Func Offset: 0x124
	// Line 470, Address: 0x291a98, Func Offset: 0x138
	// Line 472, Address: 0x291aa8, Func Offset: 0x148
	// Line 473, Address: 0x291ac8, Func Offset: 0x168
	// Line 474, Address: 0x291ad4, Func Offset: 0x174
	// Line 475, Address: 0x291ae4, Func Offset: 0x184
	// Line 477, Address: 0x291af4, Func Offset: 0x194
	// Line 478, Address: 0x291b10, Func Offset: 0x1b0
	// Line 479, Address: 0x291b1c, Func Offset: 0x1bc
	// Line 480, Address: 0x291b28, Func Offset: 0x1c8
	// Line 481, Address: 0x291b38, Func Offset: 0x1d8
	// Line 482, Address: 0x291b44, Func Offset: 0x1e4
	// Line 484, Address: 0x291b50, Func Offset: 0x1f0
	// Line 486, Address: 0x291b58, Func Offset: 0x1f8
	// Line 487, Address: 0x291b5c, Func Offset: 0x1fc
	// Func End, Address: 0x291b84, Func Offset: 0x224
}

// 
// Start address: 0x291b90
unsigned int HH_Class_Prefix_Blood_04()
{
	unsigned long tex0;
	_anon0* pPk;
	unsigned int result;
	// Line 506, Address: 0x291b90, Func Offset: 0
	// Line 508, Address: 0x291b9c, Func Offset: 0xc
	// Line 511, Address: 0x291ba8, Func Offset: 0x18
	// Line 513, Address: 0x291bb0, Func Offset: 0x20
	// Line 514, Address: 0x291bc0, Func Offset: 0x30
	// Line 516, Address: 0x291bd4, Func Offset: 0x44
	// Line 517, Address: 0x291bf0, Func Offset: 0x60
	// Line 518, Address: 0x291bfc, Func Offset: 0x6c
	// Line 520, Address: 0x291c04, Func Offset: 0x74
	// Line 521, Address: 0x291c08, Func Offset: 0x78
	// Func End, Address: 0x291c1c, Func Offset: 0x8c
}

// 
// Start address: 0x291c20
unsigned int HH_Class_Suffix_Blood_04()
{
	_anon0* pPk;
	unsigned int result;
	// Line 534, Address: 0x291c20, Func Offset: 0
	// Line 536, Address: 0x291c2c, Func Offset: 0xc
	// Line 538, Address: 0x291c38, Func Offset: 0x18
	// Line 539, Address: 0x291c40, Func Offset: 0x20
	// Line 540, Address: 0x291c48, Func Offset: 0x28
	// Line 541, Address: 0x291c64, Func Offset: 0x44
	// Line 543, Address: 0x291c6c, Func Offset: 0x4c
	// Line 544, Address: 0x291c70, Func Offset: 0x50
	// Func End, Address: 0x291c84, Func Offset: 0x64
}

// 
// Start address: 0x291c90
unsigned int HH_Class_Blood_04(void* pBlock, ImpactQueue_Element* pElement)
{
	float position[4];
	float position[4];
	HH_Object_Blood_04* pThis;
	unsigned int result;
	// Line 557, Address: 0x291c90, Func Offset: 0
	// Line 565, Address: 0x291ca8, Func Offset: 0x18
	// Line 566, Address: 0x291cac, Func Offset: 0x1c
	// Line 568, Address: 0x291cb0, Func Offset: 0x20
	// Line 570, Address: 0x291ce4, Func Offset: 0x54
	// Line 571, Address: 0x291cec, Func Offset: 0x5c
	// Line 572, Address: 0x291cf8, Func Offset: 0x68
	// Line 577, Address: 0x291d00, Func Offset: 0x70
	// Line 579, Address: 0x291d10, Func Offset: 0x80
	// Line 603, Address: 0x291d20, Func Offset: 0x90
	// Line 604, Address: 0x291d44, Func Offset: 0xb4
	// Line 605, Address: 0x291d4c, Func Offset: 0xbc
	// Line 608, Address: 0x291d54, Func Offset: 0xc4
	// Line 610, Address: 0x291d68, Func Offset: 0xd8
	// Line 611, Address: 0x291d84, Func Offset: 0xf4
	// Line 617, Address: 0x291d8c, Func Offset: 0xfc
	// Line 618, Address: 0x291d9c, Func Offset: 0x10c
	// Line 619, Address: 0x291da8, Func Offset: 0x118
	// Line 621, Address: 0x291dbc, Func Offset: 0x12c
	// Line 624, Address: 0x291dc4, Func Offset: 0x134
	// Line 625, Address: 0x291dc8, Func Offset: 0x138
	// Line 628, Address: 0x291dcc, Func Offset: 0x13c
	// Line 629, Address: 0x291dd0, Func Offset: 0x140
	// Func End, Address: 0x291dec, Func Offset: 0x15c
}

