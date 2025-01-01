typedef struct ImpactQueue_Element;
typedef struct HH_Object_Blood_01;
typedef struct _anon0;
typedef struct Vertex_Infomeation_List;
typedef struct Motion_Table_Infomeation;
typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_ElementOption;


typedef float type_0[2];
typedef int type_1[2];
typedef float type_2[2];
typedef float type_3[4][4];
typedef float type_4[4];
typedef float type_5[4][6];
typedef Motion_Table_Infomeation type_6[2];
typedef float type_7[4][4];
typedef float type_8[4][4];
typedef float type_9[2];
typedef float type_10[4][4];
typedef Motion_Table_Infomeation type_11[2];
typedef float type_12[4][4];
typedef int type_13[4];
typedef float type_14[2];
typedef float type_15[4];
typedef float type_16[4][4];
typedef float type_17[4][4];
typedef Vertex_Infomeation_List type_18[1];
typedef float type_19[2];
typedef float type_20[4][4];
typedef Motion_Table_Infomeation* type_21[2];
typedef float type_22[4][4];
typedef float type_23[4][2];

struct ImpactQueue_Element
{
	unsigned int Class_Descriptor;
	unsigned int hInstance;
	ImpactQueue_ElementOption Option;
};

struct HH_Object_Blood_01
{
	Object_DataBlock_Header Header;
	unsigned int Step;
	unsigned int Vertex_Kind;
	float Timer;
	float Verocity_0[4];
	float Alpha;
	float Scale;
	unsigned int Motion_Step;
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

struct Vertex_Infomeation_List
{
	float pVertex_List[4];
	float pNormal_List[4];
	unsigned int Vertex_Max;
	unsigned int Primitive_Type;
};

struct Motion_Table_Infomeation
{
	float diff_time;
	float diff_scale_ratio;
	float diff_rgba_ratio;
};

struct Object_DataBlock_Header
{
	unsigned int Enable;
};

struct ImpactQueue_ElementOption
{
	float Vector[4][2];
	float Float_Value[2];
	int Int_Value[2];
};

float _mass;
float _radius;
float _square_00_vertex[4][4];
float _square_00_normal[4][4];
float _square_00_stq[4][4];
float _square_01_stq[4][4];
float _square_02_stq[4][4];
float _square_10_stq[4][4];
float _square_11_stq[4][4];
float _square_12_stq[4][4];
Vertex_Infomeation_List _vertex_info_list[1];
float _stq_list[4][6];
float _rgba_start_list[2];
float _rgba_end_list[2];
float _scale_start_list[2];
float _scale_end_list[2];
Motion_Table_Infomeation _motion_info_0[2];
Motion_Table_Infomeation _motion_info_1[2];
Motion_Table_Infomeation* _motion_info_list[2];

unsigned int Object_Initialize(HH_Object_Blood_01* pThis, ImpactQueue_Element* pElement);
void ParabolaMotion_Calculator(HH_Object_Blood_01* pThis, float Time, float* Position);
unsigned int Object_Motion_00(HH_Object_Blood_01* pThis, ImpactQueue_Element* pElement);
unsigned int Object_Draw(HH_Object_Blood_01* pThis, ImpactQueue_Element* pElement, float* Current_Position);
unsigned int HH_Class_Blood_01(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x243640
unsigned int Object_Initialize(HH_Object_Blood_01* pThis, ImpactQueue_Element* pElement)
{
	float resist_ya;
	float resist_y0;
	float resist_xz;
	float* src_direction;
	float beta;
	float p_volume;
	float p_y;
	unsigned int result;
	// Line 286, Address: 0x243640, Func Offset: 0
	// Line 287, Address: 0x243658, Func Offset: 0x18
	// Line 290, Address: 0x24365c, Func Offset: 0x1c
	// Line 298, Address: 0x243668, Func Offset: 0x28
	// Line 303, Address: 0x243670, Func Offset: 0x30
	// Line 304, Address: 0x243698, Func Offset: 0x58
	// Line 305, Address: 0x2436d0, Func Offset: 0x90
	// Line 308, Address: 0x243708, Func Offset: 0xc8
	// Line 309, Address: 0x24371c, Func Offset: 0xdc
	// Line 310, Address: 0x24372c, Func Offset: 0xec
	// Line 312, Address: 0x243734, Func Offset: 0xf4
	// Line 313, Address: 0x243758, Func Offset: 0x118
	// Line 314, Address: 0x243774, Func Offset: 0x134
	// Line 320, Address: 0x243780, Func Offset: 0x140
	// Line 321, Address: 0x243794, Func Offset: 0x154
	// Line 322, Address: 0x2437a8, Func Offset: 0x168
	// Line 324, Address: 0x2437bc, Func Offset: 0x17c
	// Line 327, Address: 0x2437d8, Func Offset: 0x198
	// Line 329, Address: 0x2437fc, Func Offset: 0x1bc
	// Line 330, Address: 0x243800, Func Offset: 0x1c0
	// Func End, Address: 0x243818, Func Offset: 0x1d8
}

// 
// Start address: 0x243820
void ParabolaMotion_Calculator(HH_Object_Blood_01* pThis, float Time, float* Position)
{
	float time_mat[4][4];
	// Line 345, Address: 0x243820, Func Offset: 0
	// Line 349, Address: 0x243834, Func Offset: 0x14
	// Line 350, Address: 0x243840, Func Offset: 0x20
	// Line 351, Address: 0x243848, Func Offset: 0x28
	// Line 352, Address: 0x243850, Func Offset: 0x30
	// Line 353, Address: 0x243858, Func Offset: 0x38
	// Line 354, Address: 0x243868, Func Offset: 0x48
	// Line 355, Address: 0x243874, Func Offset: 0x54
	// Line 356, Address: 0x24388c, Func Offset: 0x6c
	// Func End, Address: 0x24389c, Func Offset: 0x7c
}

// 
// Start address: 0x2438a0
unsigned int Object_Motion_00(HH_Object_Blood_01* pThis, ImpactQueue_Element* pElement)
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
	float Scale_e;
	float Scale_s;
	float Rgba_e;
	float Rgba_s;
	unsigned int kind;
	unsigned int result;
	// Line 368, Address: 0x2438a0, Func Offset: 0
	// Line 369, Address: 0x2438c4, Func Offset: 0x24
	// Line 371, Address: 0x2438c8, Func Offset: 0x28
	// Line 372, Address: 0x2438d0, Func Offset: 0x30
	// Line 373, Address: 0x2438e8, Func Offset: 0x48
	// Line 374, Address: 0x243900, Func Offset: 0x60
	// Line 375, Address: 0x243918, Func Offset: 0x78
	// Line 377, Address: 0x243930, Func Offset: 0x90
	// Line 378, Address: 0x24393c, Func Offset: 0x9c
	// Line 380, Address: 0x243948, Func Offset: 0xa8
	// Line 381, Address: 0x243954, Func Offset: 0xb4
	// Line 383, Address: 0x243960, Func Offset: 0xc0
	// Line 384, Address: 0x24396c, Func Offset: 0xcc
	// Line 386, Address: 0x243978, Func Offset: 0xd8
	// Line 387, Address: 0x24398c, Func Offset: 0xec
	// Line 389, Address: 0x243990, Func Offset: 0xf0
	// Line 392, Address: 0x243998, Func Offset: 0xf8
	// Line 393, Address: 0x2439a4, Func Offset: 0x104
	// Line 395, Address: 0x2439a8, Func Offset: 0x108
	// Line 396, Address: 0x2439b4, Func Offset: 0x114
	// Line 397, Address: 0x2439d4, Func Offset: 0x134
	// Line 398, Address: 0x2439f4, Func Offset: 0x154
	// Line 399, Address: 0x243a14, Func Offset: 0x174
	// Line 400, Address: 0x243a28, Func Offset: 0x188
	// Line 401, Address: 0x243a48, Func Offset: 0x1a8
	// Line 402, Address: 0x243a68, Func Offset: 0x1c8
	// Line 405, Address: 0x243a88, Func Offset: 0x1e8
	// Line 407, Address: 0x243aac, Func Offset: 0x20c
	// Line 408, Address: 0x243ac8, Func Offset: 0x228
	// Line 410, Address: 0x243ad8, Func Offset: 0x238
	// Line 412, Address: 0x243ae0, Func Offset: 0x240
	// Line 413, Address: 0x243afc, Func Offset: 0x25c
	// Line 422, Address: 0x243b0c, Func Offset: 0x26c
	// Line 423, Address: 0x243b20, Func Offset: 0x280
	// Line 425, Address: 0x243b30, Func Offset: 0x290
	// Line 429, Address: 0x243b40, Func Offset: 0x2a0
	// Line 430, Address: 0x243b60, Func Offset: 0x2c0
	// Line 433, Address: 0x243b70, Func Offset: 0x2d0
	// Line 434, Address: 0x243b90, Func Offset: 0x2f0
	// Line 436, Address: 0x243bb0, Func Offset: 0x310
	// Line 437, Address: 0x243be0, Func Offset: 0x340
	// Line 439, Address: 0x243c10, Func Offset: 0x370
	// Line 440, Address: 0x243c14, Func Offset: 0x374
	// Func End, Address: 0x243c38, Func Offset: 0x398
}

// 
// Start address: 0x243c40
unsigned int Object_Draw(HH_Object_Blood_01* pThis, ImpactQueue_Element* pElement, float* Current_Position)
{
	unsigned int addr;
	float q;
	int xyzf[4];
	unsigned long tex0;
	int rgba[4];
	float Base_Rgba[4];
	float clip_mat[4][4];
	float lsm[4][4];
	float lwm[4][4];
	unsigned int i;
	unsigned int prim_type;
	unsigned int vertex_num;
	float pStq[4];
	float pVertex[4];
	Vertex_Infomeation_List* pInfo;
	_anon0* pPk;
	unsigned int result;
	// Line 453, Address: 0x243c40, Func Offset: 0
	// Line 454, Address: 0x243c78, Func Offset: 0x38
	// Line 455, Address: 0x243c7c, Func Offset: 0x3c
	// Line 456, Address: 0x243c88, Func Offset: 0x48
	// Line 457, Address: 0x243ca4, Func Offset: 0x64
	// Line 459, Address: 0x243cb0, Func Offset: 0x70
	// Line 460, Address: 0x243ccc, Func Offset: 0x8c
	// Line 461, Address: 0x243cd8, Func Offset: 0x98
	// Line 465, Address: 0x243ce4, Func Offset: 0xa4
	// Line 472, Address: 0x243d04, Func Offset: 0xc4
	// Line 475, Address: 0x243d10, Func Offset: 0xd0
	// Line 479, Address: 0x243d1c, Func Offset: 0xdc
	// Line 480, Address: 0x243d30, Func Offset: 0xf0
	// Line 481, Address: 0x243d44, Func Offset: 0x104
	// Line 482, Address: 0x243d58, Func Offset: 0x118
	// Line 483, Address: 0x243d70, Func Offset: 0x130
	// Line 484, Address: 0x243d84, Func Offset: 0x144
	// Line 487, Address: 0x243d98, Func Offset: 0x158
	// Line 488, Address: 0x243da4, Func Offset: 0x164
	// Line 490, Address: 0x243db8, Func Offset: 0x178
	// Line 509, Address: 0x243dc0, Func Offset: 0x180
	// Line 513, Address: 0x243ddc, Func Offset: 0x19c
	// Line 514, Address: 0x243df0, Func Offset: 0x1b0
	// Line 516, Address: 0x243e04, Func Offset: 0x1c4
	// Line 530, Address: 0x243e2c, Func Offset: 0x1ec
	// Line 532, Address: 0x243e3c, Func Offset: 0x1fc
	// Line 536, Address: 0x243e48, Func Offset: 0x208
	// Line 538, Address: 0x243e4c, Func Offset: 0x20c
	// Line 539, Address: 0x243e78, Func Offset: 0x238
	// Line 540, Address: 0x243e7c, Func Offset: 0x23c
	// Line 546, Address: 0x243e80, Func Offset: 0x240
	// Line 547, Address: 0x243efc, Func Offset: 0x2bc
	// Line 548, Address: 0x243f70, Func Offset: 0x330
	// Line 549, Address: 0x243fcc, Func Offset: 0x38c
	// Line 553, Address: 0x243fe0, Func Offset: 0x3a0
	// Line 555, Address: 0x243fe8, Func Offset: 0x3a8
	// Line 556, Address: 0x243fec, Func Offset: 0x3ac
	// Func End, Address: 0x244020, Func Offset: 0x3e0
}

// 
// Start address: 0x244020
unsigned int HH_Class_Blood_01(void* pBlock, ImpactQueue_Element* pElement)
{
	ImpactQueue_Element descriptor;
	float position[4];
	float position[4];
	HH_Object_Blood_01* pThis;
	unsigned int result;
	// Line 575, Address: 0x244020, Func Offset: 0
	// Line 583, Address: 0x244038, Func Offset: 0x18
	// Line 584, Address: 0x24403c, Func Offset: 0x1c
	// Line 586, Address: 0x244040, Func Offset: 0x20
	// Line 588, Address: 0x244078, Func Offset: 0x58
	// Line 590, Address: 0x244088, Func Offset: 0x68
	// Line 592, Address: 0x2440ac, Func Offset: 0x8c
	// Line 593, Address: 0x2440b4, Func Offset: 0x94
	// Line 595, Address: 0x2440bc, Func Offset: 0x9c
	// Line 596, Address: 0x2440c4, Func Offset: 0xa4
	// Line 598, Address: 0x2440cc, Func Offset: 0xac
	// Line 601, Address: 0x2440d4, Func Offset: 0xb4
	// Line 606, Address: 0x2440dc, Func Offset: 0xbc
	// Line 607, Address: 0x2440f4, Func Offset: 0xd4
	// Line 609, Address: 0x244104, Func Offset: 0xe4
	// Line 610, Address: 0x244120, Func Offset: 0x100
	// Line 613, Address: 0x244128, Func Offset: 0x108
	// Line 614, Address: 0x24413c, Func Offset: 0x11c
	// Line 616, Address: 0x244158, Func Offset: 0x138
	// Line 621, Address: 0x244160, Func Offset: 0x140
	// Line 622, Address: 0x244178, Func Offset: 0x158
	// Line 627, Address: 0x244188, Func Offset: 0x168
	// Line 630, Address: 0x2441b0, Func Offset: 0x190
	// Line 631, Address: 0x2441b4, Func Offset: 0x194
	// Line 632, Address: 0x2441cc, Func Offset: 0x1ac
	// Line 633, Address: 0x2441d8, Func Offset: 0x1b8
	// Line 634, Address: 0x2441e0, Func Offset: 0x1c0
	// Line 635, Address: 0x2441ec, Func Offset: 0x1cc
	// Line 638, Address: 0x2441f4, Func Offset: 0x1d4
	// Line 640, Address: 0x244208, Func Offset: 0x1e8
	// Line 641, Address: 0x244224, Func Offset: 0x204
	// Line 644, Address: 0x24422c, Func Offset: 0x20c
	// Line 645, Address: 0x244230, Func Offset: 0x210
	// Line 648, Address: 0x244234, Func Offset: 0x214
	// Line 649, Address: 0x244238, Func Offset: 0x218
	// Func End, Address: 0x244250, Func Offset: 0x230
}

