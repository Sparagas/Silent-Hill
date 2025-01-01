typedef struct Motion_Table_Infomeation;
typedef struct ImpactQueue_Element;
typedef struct HH_Object_Blood_02;
typedef struct _anon0;
typedef struct Vertex_Infomeation_List;
typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_ElementOption;


typedef float type_0[2];
typedef int type_1[2];
typedef float type_2[4][5];
typedef float type_3[4][4];
typedef float type_4[4][10];
typedef float type_5[4][4];
typedef Vertex_Infomeation_List type_6[4];
typedef Motion_Table_Infomeation type_7[4];
typedef float type_8[4][4];
typedef int type_9[4];
typedef float type_10[4][10];
typedef float type_11[4];
typedef float type_12[4];
typedef float type_13[4][4];
typedef float type_14[4][5];
typedef float type_15[4][10];
typedef float type_16[4][4];
typedef float type_17[4][2];
typedef float type_18[4][10];

struct Motion_Table_Infomeation
{
	float diff_time;
	float diff_scale_ratio;
	float diff_rgba_ratio;
};

struct ImpactQueue_Element
{
	unsigned int Class_Descriptor;
	unsigned int hInstance;
	ImpactQueue_ElementOption Option;
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
	float pStq_List[4];
	unsigned int Vertex_Max;
	unsigned int Primitive_Type;
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

unsigned int Object_Initialize(HH_Object_Blood_02* pThis);
unsigned int Object_Motion_00(HH_Object_Blood_02* pThis);
unsigned int Object_Draw(HH_Object_Blood_02* pThis, ImpactQueue_Element* pElement);
unsigned int HH_Class_Blood_02(void* pBlock, ImpactQueue_Element* pElement);
unsigned int HH_Class_Blood_02_DesignateLocation_CollisionCheck(void* pBlock, ImpactQueue_Element* pElement, float* Target_Location);

// 
// Start address: 0x244250
unsigned int Object_Initialize(HH_Object_Blood_02* pThis)
{
	float radian;
	unsigned int result;
	// Line 257, Address: 0x244250, Func Offset: 0
	// Line 258, Address: 0x244260, Func Offset: 0x10
	// Line 264, Address: 0x244264, Func Offset: 0x14
	// Line 265, Address: 0x244280, Func Offset: 0x30
	// Line 266, Address: 0x2442a8, Func Offset: 0x58
	// Line 270, Address: 0x2442c4, Func Offset: 0x74
	// Line 272, Address: 0x2442d0, Func Offset: 0x80
	// Line 276, Address: 0x2442d8, Func Offset: 0x88
	// Line 278, Address: 0x244318, Func Offset: 0xc8
	// Line 285, Address: 0x244414, Func Offset: 0x1c4
	// Line 286, Address: 0x244418, Func Offset: 0x1c8
	// Func End, Address: 0x24442c, Func Offset: 0x1dc
}

// 
// Start address: 0x244430
unsigned int Object_Motion_00(HH_Object_Blood_02* pThis)
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
	// Line 299, Address: 0x244430, Func Offset: 0
	// Line 300, Address: 0x244460, Func Offset: 0x30
	// Line 302, Address: 0x244464, Func Offset: 0x34
	// Line 303, Address: 0x244480, Func Offset: 0x50
	// Line 304, Address: 0x24449c, Func Offset: 0x6c
	// Line 305, Address: 0x2444b8, Func Offset: 0x88
	// Line 307, Address: 0x2444d4, Func Offset: 0xa4
	// Line 308, Address: 0x2444e0, Func Offset: 0xb0
	// Line 310, Address: 0x2444ec, Func Offset: 0xbc
	// Line 311, Address: 0x2444f8, Func Offset: 0xc8
	// Line 313, Address: 0x244504, Func Offset: 0xd4
	// Line 314, Address: 0x244510, Func Offset: 0xe0
	// Line 316, Address: 0x24451c, Func Offset: 0xec
	// Line 317, Address: 0x244524, Func Offset: 0xf4
	// Line 319, Address: 0x244528, Func Offset: 0xf8
	// Line 322, Address: 0x244534, Func Offset: 0x104
	// Line 323, Address: 0x244540, Func Offset: 0x110
	// Line 325, Address: 0x244544, Func Offset: 0x114
	// Line 326, Address: 0x244550, Func Offset: 0x120
	// Line 327, Address: 0x244570, Func Offset: 0x140
	// Line 328, Address: 0x244590, Func Offset: 0x160
	// Line 329, Address: 0x2445b0, Func Offset: 0x180
	// Line 330, Address: 0x2445c8, Func Offset: 0x198
	// Line 331, Address: 0x2445e8, Func Offset: 0x1b8
	// Line 332, Address: 0x244608, Func Offset: 0x1d8
	// Line 335, Address: 0x244628, Func Offset: 0x1f8
	// Line 337, Address: 0x24465c, Func Offset: 0x22c
	// Line 338, Address: 0x244678, Func Offset: 0x248
	// Line 340, Address: 0x244688, Func Offset: 0x258
	// Line 342, Address: 0x244690, Func Offset: 0x260
	// Line 343, Address: 0x2446ac, Func Offset: 0x27c
	// Line 345, Address: 0x2446bc, Func Offset: 0x28c
	// Line 347, Address: 0x2446c4, Func Offset: 0x294
	// Line 348, Address: 0x2446e0, Func Offset: 0x2b0
	// Line 357, Address: 0x2446f0, Func Offset: 0x2c0
	// Line 358, Address: 0x244704, Func Offset: 0x2d4
	// Line 360, Address: 0x244714, Func Offset: 0x2e4
	// Line 364, Address: 0x244724, Func Offset: 0x2f4
	// Line 365, Address: 0x244744, Func Offset: 0x314
	// Line 368, Address: 0x244754, Func Offset: 0x324
	// Line 369, Address: 0x244774, Func Offset: 0x344
	// Line 371, Address: 0x244794, Func Offset: 0x364
	// Line 372, Address: 0x2447b0, Func Offset: 0x380
	// Line 374, Address: 0x2447cc, Func Offset: 0x39c
	// Line 375, Address: 0x2447d0, Func Offset: 0x3a0
	// Func End, Address: 0x244804, Func Offset: 0x3d4
}

// 
// Start address: 0x244810
unsigned int Object_Draw(HH_Object_Blood_02* pThis, ImpactQueue_Element* pElement)
{
	unsigned int addr;
	float q;
	int rgba[4];
	int xyzf[4];
	unsigned long tex0;
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
	// Line 388, Address: 0x244810, Func Offset: 0
	// Line 389, Address: 0x244844, Func Offset: 0x34
	// Line 390, Address: 0x244848, Func Offset: 0x38
	// Line 391, Address: 0x244854, Func Offset: 0x44
	// Line 392, Address: 0x244874, Func Offset: 0x64
	// Line 393, Address: 0x244880, Func Offset: 0x70
	// Line 394, Address: 0x244888, Func Offset: 0x78
	// Line 395, Address: 0x244894, Func Offset: 0x84
	// Line 403, Address: 0x2448a0, Func Offset: 0x90
	// Line 405, Address: 0x2448ac, Func Offset: 0x9c
	// Line 406, Address: 0x2448b8, Func Offset: 0xa8
	// Line 407, Address: 0x244920, Func Offset: 0x110
	// Line 409, Address: 0x244938, Func Offset: 0x128
	// Line 410, Address: 0x244950, Func Offset: 0x140
	// Line 413, Address: 0x244964, Func Offset: 0x154
	// Line 414, Address: 0x244970, Func Offset: 0x160
	// Line 417, Address: 0x244984, Func Offset: 0x174
	// Line 436, Address: 0x24498c, Func Offset: 0x17c
	// Line 440, Address: 0x2449a8, Func Offset: 0x198
	// Line 441, Address: 0x2449b4, Func Offset: 0x1a4
	// Line 443, Address: 0x2449c8, Func Offset: 0x1b8
	// Line 456, Address: 0x2449f0, Func Offset: 0x1e0
	// Line 460, Address: 0x2449fc, Func Offset: 0x1ec
	// Line 462, Address: 0x244a00, Func Offset: 0x1f0
	// Line 463, Address: 0x244a2c, Func Offset: 0x21c
	// Line 465, Address: 0x244a30, Func Offset: 0x220
	// Line 466, Address: 0x244a44, Func Offset: 0x234
	// Line 467, Address: 0x244ac0, Func Offset: 0x2b0
	// Line 468, Address: 0x244b3c, Func Offset: 0x32c
	// Line 469, Address: 0x244b98, Func Offset: 0x388
	// Line 473, Address: 0x244bb0, Func Offset: 0x3a0
	// Line 475, Address: 0x244bb8, Func Offset: 0x3a8
	// Line 476, Address: 0x244bbc, Func Offset: 0x3ac
	// Func End, Address: 0x244bf0, Func Offset: 0x3e0
}

// 
// Start address: 0x244bf0
unsigned int HH_Class_Blood_02(void* pBlock, ImpactQueue_Element* pElement)
{
	HH_Object_Blood_02* pThis;
	unsigned int result;
	// Line 496, Address: 0x244bf0, Func Offset: 0
	// Line 503, Address: 0x244c08, Func Offset: 0x18
	// Line 504, Address: 0x244c0c, Func Offset: 0x1c
	// Line 506, Address: 0x244c10, Func Offset: 0x20
	// Line 509, Address: 0x244c40, Func Offset: 0x50
	// Line 511, Address: 0x244c50, Func Offset: 0x60
	// Line 512, Address: 0x244c58, Func Offset: 0x68
	// Line 515, Address: 0x244c60, Func Offset: 0x70
	// Line 517, Address: 0x244c70, Func Offset: 0x80
	// Line 521, Address: 0x244c80, Func Offset: 0x90
	// Line 522, Address: 0x244c9c, Func Offset: 0xac
	// Line 525, Address: 0x244ca4, Func Offset: 0xb4
	// Line 526, Address: 0x244ca8, Func Offset: 0xb8
	// Line 529, Address: 0x244cac, Func Offset: 0xbc
	// Line 530, Address: 0x244cb0, Func Offset: 0xc0
	// Func End, Address: 0x244cc8, Func Offset: 0xd8
}

// 
// Start address: 0x244cd0
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
	// Line 544, Address: 0x244cd0, Func Offset: 0
	// Line 545, Address: 0x244cfc, Func Offset: 0x2c
	// Line 546, Address: 0x244d00, Func Offset: 0x30
	// Line 547, Address: 0x244d04, Func Offset: 0x34
	// Line 548, Address: 0x244d1c, Func Offset: 0x4c
	// Line 549, Address: 0x244d20, Func Offset: 0x50
	// Line 558, Address: 0x244d24, Func Offset: 0x54
	// Line 561, Address: 0x244d30, Func Offset: 0x60
	// Line 562, Address: 0x244d48, Func Offset: 0x78
	// Line 563, Address: 0x244d5c, Func Offset: 0x8c
	// Line 564, Address: 0x244d68, Func Offset: 0x98
	// Line 565, Address: 0x244d70, Func Offset: 0xa0
	// Line 567, Address: 0x244d78, Func Offset: 0xa8
	// Line 568, Address: 0x244d90, Func Offset: 0xc0
	// Line 570, Address: 0x244d98, Func Offset: 0xc8
	// Line 571, Address: 0x244db0, Func Offset: 0xe0
	// Line 573, Address: 0x244db8, Func Offset: 0xe8
	// Line 579, Address: 0x244dcc, Func Offset: 0xfc
	// Line 581, Address: 0x244de4, Func Offset: 0x114
	// Line 584, Address: 0x244df8, Func Offset: 0x128
	// Line 585, Address: 0x244e10, Func Offset: 0x140
	// Line 586, Address: 0x244e28, Func Offset: 0x158
	// Line 590, Address: 0x244e2c, Func Offset: 0x15c
	// Line 591, Address: 0x244e30, Func Offset: 0x160
	// Func End, Address: 0x244e58, Func Offset: 0x188
}

