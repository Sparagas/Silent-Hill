typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_Element;
typedef struct shBattleFight;
typedef struct HH_Object_Blood_02;
typedef struct ImpactQueue_ElementOption;
typedef struct _anon0;
typedef struct shBattleShot;
typedef struct Motion_Table_Infomeation;
typedef struct shAttackInfo;
typedef union _anon1;
typedef struct Vertex_Infomeation_List;


typedef float type_0[4][10];
typedef float type_1[4][4];
typedef Vertex_Infomeation_List type_2[4];
typedef Motion_Table_Infomeation type_3[4];
typedef float type_4[4][4];
typedef float type_5[4][2];
typedef float type_6[2];
typedef int type_7[2];
typedef int type_8[4];
typedef float type_9[4][10];
typedef float type_10[4];
typedef unsigned int type_11[1];
typedef float type_12[4];
typedef float type_13[4][4];
typedef float type_14[4][5];
typedef float type_15[4][10];
typedef float type_16[4][4];
typedef float type_17[4][10];
typedef float type_18[4][5];
typedef float type_19[4][4];
typedef shAttackInfo type_20[66];

struct Object_DataBlock_Header
{
	unsigned int Enable;
	Object_DataBlock_Header* pNext;
};

struct ImpactQueue_Element
{
	unsigned int Class_Descriptor;
	unsigned int hInstance;
	unsigned int* pResultHandle_Address;
	unsigned int Reserved[1];
	ImpactQueue_ElementOption Option;
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct HH_Object_Blood_02
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

struct ImpactQueue_ElementOption
{
	float Vector[4][2];
	float Float_Value[2];
	int Int_Value[2];
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

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct Motion_Table_Infomeation
{
	float diff_time;
	float diff_scale_ratio;
	float diff_rgba_ratio;
};

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon1 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

union _anon1
{
	shBattleFight fight;
	shBattleShot shot;
};

struct Vertex_Infomeation_List
{
	float pVertex_List[4];
	float pStq_List[4];
	unsigned int Vertex_Max;
	unsigned int Primitive_Type;
};

shAttackInfo sh2_attack_list[66];
float _square_00_vertex[4][4];
float _square_00_stq[4][4];
float _circle_00_vertex[4][10];
float _circle_00_stq[4][10];
float _circle_01_vertex[4][10];
float _circle_02_vertex[4][10];
Vertex_Infomeation_List _vertex_info_list[4];
float _rgba_start_list[4][4];
float _rgba_end_list[4][4];
float _scale_start_list[4][5];
float _scale_end_list[4][5];
Motion_Table_Infomeation _motion_info[4];

unsigned int Object_Initialize(HH_Object_Blood_02* pThis, ImpactQueue_Element* pElement);
unsigned int Object_Motion_00(HH_Object_Blood_02* pThis);
unsigned int Object_Draw(HH_Object_Blood_02* pThis, ImpactQueue_Element* pElement);
unsigned int HH_Class_Prefix_Blood_02();
unsigned int HH_Class_Suffix_Blood_02();
unsigned int HH_Class_Blood_02(void* pBlock, ImpactQueue_Element* pElement);
unsigned int HH_Class_Blood_02_DesignateLocation_CollisionCheck(void* pBlock, ImpactQueue_Element* pElement, float* Target_Location);

// 
// Start address: 0x254af0
unsigned int Object_Initialize(HH_Object_Blood_02* pThis, ImpactQueue_Element* pElement)
{
	float radian;
	unsigned int result;
	// Line 264, Address: 0x254af0, Func Offset: 0
	// Line 270, Address: 0x254b00, Func Offset: 0x10
	// Line 299, Address: 0x254b0c, Func Offset: 0x1c
	// Line 300, Address: 0x254b20, Func Offset: 0x30
	// Line 301, Address: 0x254b40, Func Offset: 0x50
	// Line 305, Address: 0x254b54, Func Offset: 0x64
	// Line 308, Address: 0x254b58, Func Offset: 0x68
	// Line 310, Address: 0x254b94, Func Offset: 0xa4
	// Line 322, Address: 0x254c48, Func Offset: 0x158
	// Line 329, Address: 0x254c4c, Func Offset: 0x15c
	// Line 330, Address: 0x254c50, Func Offset: 0x160
	// Func End, Address: 0x254c64, Func Offset: 0x174
}

// 
// Start address: 0x254c70
unsigned int Object_Motion_00(HH_Object_Blood_02* pThis)
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
	// Line 344, Address: 0x254c70, Func Offset: 0
	// Line 347, Address: 0x254c8c, Func Offset: 0x1c
	// Line 348, Address: 0x254ca0, Func Offset: 0x30
	// Line 349, Address: 0x254cac, Func Offset: 0x3c
	// Line 350, Address: 0x254cc0, Func Offset: 0x50
	// Line 352, Address: 0x254ccc, Func Offset: 0x5c
	// Line 355, Address: 0x254cd4, Func Offset: 0x64
	// Line 358, Address: 0x254cd8, Func Offset: 0x68
	// Line 361, Address: 0x254cdc, Func Offset: 0x6c
	// Line 363, Address: 0x254ce4, Func Offset: 0x74
	// Line 366, Address: 0x254cec, Func Offset: 0x7c
	// Line 367, Address: 0x254cf8, Func Offset: 0x88
	// Line 369, Address: 0x254cfc, Func Offset: 0x8c
	// Line 370, Address: 0x254d08, Func Offset: 0x98
	// Line 371, Address: 0x254d20, Func Offset: 0xb0
	// Line 372, Address: 0x254d28, Func Offset: 0xb8
	// Line 373, Address: 0x254d30, Func Offset: 0xc0
	// Line 374, Address: 0x254d48, Func Offset: 0xd8
	// Line 375, Address: 0x254d60, Func Offset: 0xf0
	// Line 376, Address: 0x254d68, Func Offset: 0xf8
	// Line 379, Address: 0x254d70, Func Offset: 0x100
	// Line 381, Address: 0x254d9c, Func Offset: 0x12c
	// Line 382, Address: 0x254db0, Func Offset: 0x140
	// Line 384, Address: 0x254dbc, Func Offset: 0x14c
	// Line 386, Address: 0x254dc4, Func Offset: 0x154
	// Line 387, Address: 0x254dd8, Func Offset: 0x168
	// Line 389, Address: 0x254de4, Func Offset: 0x174
	// Line 391, Address: 0x254dec, Func Offset: 0x17c
	// Line 392, Address: 0x254e00, Func Offset: 0x190
	// Line 401, Address: 0x254e0c, Func Offset: 0x19c
	// Line 402, Address: 0x254e14, Func Offset: 0x1a4
	// Line 404, Address: 0x254e18, Func Offset: 0x1a8
	// Line 408, Address: 0x254e1c, Func Offset: 0x1ac
	// Line 409, Address: 0x254e38, Func Offset: 0x1c8
	// Line 412, Address: 0x254e3c, Func Offset: 0x1cc
	// Line 413, Address: 0x254e48, Func Offset: 0x1d8
	// Line 415, Address: 0x254e54, Func Offset: 0x1e4
	// Line 416, Address: 0x254e60, Func Offset: 0x1f0
	// Line 418, Address: 0x254e78, Func Offset: 0x208
	// Line 419, Address: 0x254e7c, Func Offset: 0x20c
	// Func End, Address: 0x254e9c, Func Offset: 0x22c
}

// 
// Start address: 0x254ea0
unsigned int Object_Draw(HH_Object_Blood_02* pThis, ImpactQueue_Element* pElement)
{
	float ratio;
	int rgba[4];
	int xyzf[4];
	float stq[4];
	float Rgba[4];
	float clip_mat[4][4];
	float lsm[4][4];
	float lwm[4][4];
	unsigned int i;
	unsigned int vertex_num;
	float pStq[4];
	float pVertex[4];
	Vertex_Infomeation_List* pInfo;
	_anon0* pPk;
	unsigned int result;
	// Line 433, Address: 0x254ea0, Func Offset: 0
	// Line 435, Address: 0x254ed0, Func Offset: 0x30
	// Line 436, Address: 0x254edc, Func Offset: 0x3c
	// Line 437, Address: 0x254ef0, Func Offset: 0x50
	// Line 438, Address: 0x254ef4, Func Offset: 0x54
	// Line 439, Address: 0x254ef8, Func Offset: 0x58
	// Line 449, Address: 0x254efc, Func Offset: 0x5c
	// Line 451, Address: 0x254f08, Func Offset: 0x68
	// Line 452, Address: 0x254f14, Func Offset: 0x74
	// Line 454, Address: 0x254f24, Func Offset: 0x84
	// Line 455, Address: 0x254f34, Func Offset: 0x94
	// Line 457, Address: 0x254f48, Func Offset: 0xa8
	// Line 458, Address: 0x254f5c, Func Offset: 0xbc
	// Line 461, Address: 0x254f70, Func Offset: 0xd0
	// Line 462, Address: 0x254f7c, Func Offset: 0xdc
	// Line 465, Address: 0x254f90, Func Offset: 0xf0
	// Line 466, Address: 0x254f98, Func Offset: 0xf8
	// Line 468, Address: 0x254fbc, Func Offset: 0x11c
	// Line 469, Address: 0x254fc4, Func Offset: 0x124
	// Line 471, Address: 0x254fcc, Func Offset: 0x12c
	// Line 475, Address: 0x254fd4, Func Offset: 0x134
	// Line 476, Address: 0x254fe0, Func Offset: 0x140
	// Line 477, Address: 0x254ff4, Func Offset: 0x154
	// Line 482, Address: 0x255010, Func Offset: 0x170
	// Line 483, Address: 0x255018, Func Offset: 0x178
	// Line 485, Address: 0x255038, Func Offset: 0x198
	// Line 486, Address: 0x255060, Func Offset: 0x1c0
	// Line 487, Address: 0x255070, Func Offset: 0x1d0
	// Line 489, Address: 0x255080, Func Offset: 0x1e0
	// Line 490, Address: 0x25508c, Func Offset: 0x1ec
	// Line 491, Address: 0x25509c, Func Offset: 0x1fc
	// Line 492, Address: 0x2550ac, Func Offset: 0x20c
	// Line 493, Address: 0x2550bc, Func Offset: 0x21c
	// Line 494, Address: 0x2550c8, Func Offset: 0x228
	// Line 495, Address: 0x2550dc, Func Offset: 0x23c
	// Line 496, Address: 0x2550e8, Func Offset: 0x248
	// Line 498, Address: 0x2550f0, Func Offset: 0x250
	// Line 499, Address: 0x2550f4, Func Offset: 0x254
	// Func End, Address: 0x255124, Func Offset: 0x284
}

// 
// Start address: 0x255130
unsigned int HH_Class_Prefix_Blood_02()
{
	unsigned long tex0;
	_anon0* pPk;
	unsigned int result;
	// Line 519, Address: 0x255130, Func Offset: 0
	// Line 521, Address: 0x25513c, Func Offset: 0xc
	// Line 524, Address: 0x255148, Func Offset: 0x18
	// Line 526, Address: 0x255150, Func Offset: 0x20
	// Line 527, Address: 0x255158, Func Offset: 0x28
	// Line 529, Address: 0x25516c, Func Offset: 0x3c
	// Line 530, Address: 0x255188, Func Offset: 0x58
	// Line 531, Address: 0x255194, Func Offset: 0x64
	// Line 533, Address: 0x25519c, Func Offset: 0x6c
	// Line 534, Address: 0x2551a0, Func Offset: 0x70
	// Func End, Address: 0x2551b4, Func Offset: 0x84
}

// 
// Start address: 0x2551c0
unsigned int HH_Class_Suffix_Blood_02()
{
	unsigned int result;
	// Line 547, Address: 0x2551c0, Func Offset: 0
	// Line 550, Address: 0x2551c8, Func Offset: 0x8
	// Line 552, Address: 0x2551d0, Func Offset: 0x10
	// Line 553, Address: 0x2551d4, Func Offset: 0x14
	// Func End, Address: 0x2551e4, Func Offset: 0x24
}

// 
// Start address: 0x2551f0
unsigned int HH_Class_Blood_02(void* pBlock, ImpactQueue_Element* pElement)
{
	HH_Object_Blood_02* pThis;
	unsigned int result;
	// Line 566, Address: 0x2551f0, Func Offset: 0
	// Line 573, Address: 0x255208, Func Offset: 0x18
	// Line 574, Address: 0x25520c, Func Offset: 0x1c
	// Line 576, Address: 0x255210, Func Offset: 0x20
	// Line 579, Address: 0x255238, Func Offset: 0x48
	// Line 581, Address: 0x255240, Func Offset: 0x50
	// Line 582, Address: 0x255248, Func Offset: 0x58
	// Line 585, Address: 0x255250, Func Offset: 0x60
	// Line 603, Address: 0x255258, Func Offset: 0x68
	// Line 607, Address: 0x255268, Func Offset: 0x78
	// Line 608, Address: 0x255284, Func Offset: 0x94
	// Line 611, Address: 0x25528c, Func Offset: 0x9c
	// Line 612, Address: 0x255290, Func Offset: 0xa0
	// Line 615, Address: 0x255294, Func Offset: 0xa4
	// Line 616, Address: 0x255298, Func Offset: 0xa8
	// Func End, Address: 0x2552b4, Func Offset: 0xc4
}

// 
// Start address: 0x2552c0
unsigned int HH_Class_Blood_02_DesignateLocation_CollisionCheck(void* pBlock, ImpactQueue_Element* pElement, float* Target_Location)
{
	float target_volume;
	float target_dir[4];
	float vertex[4];
	unsigned int i;
	float volume;
	float min;
	float max;
	unsigned int vertex_num;
	float pVertex[4];
	Vertex_Infomeation_List* pInfo;
	HH_Object_Blood_02* pThis;
	unsigned int result;
	// Line 630, Address: 0x2552c0, Func Offset: 0
	// Line 631, Address: 0x2552f4, Func Offset: 0x34
	// Line 632, Address: 0x2552f8, Func Offset: 0x38
	// Line 633, Address: 0x2552fc, Func Offset: 0x3c
	// Line 634, Address: 0x255310, Func Offset: 0x50
	// Line 635, Address: 0x255314, Func Offset: 0x54
	// Line 644, Address: 0x255318, Func Offset: 0x58
	// Line 647, Address: 0x255324, Func Offset: 0x64
	// Line 648, Address: 0x25533c, Func Offset: 0x7c
	// Line 649, Address: 0x25534c, Func Offset: 0x8c
	// Line 650, Address: 0x255358, Func Offset: 0x98
	// Line 651, Address: 0x25535c, Func Offset: 0x9c
	// Line 653, Address: 0x255360, Func Offset: 0xa0
	// Line 654, Address: 0x255370, Func Offset: 0xb0
	// Line 655, Address: 0x255374, Func Offset: 0xb4
	// Line 656, Address: 0x255378, Func Offset: 0xb8
	// Line 657, Address: 0x255388, Func Offset: 0xc8
	// Line 658, Address: 0x25538c, Func Offset: 0xcc
	// Line 659, Address: 0x255390, Func Offset: 0xd0
	// Line 665, Address: 0x2553a4, Func Offset: 0xe4
	// Line 667, Address: 0x2553b8, Func Offset: 0xf8
	// Line 670, Address: 0x2553c8, Func Offset: 0x108
	// Line 671, Address: 0x2553dc, Func Offset: 0x11c
	// Line 672, Address: 0x2553ec, Func Offset: 0x12c
	// Line 676, Address: 0x2553f0, Func Offset: 0x130
	// Line 677, Address: 0x2553f4, Func Offset: 0x134
	// Func End, Address: 0x255428, Func Offset: 0x168
}

