typedef struct ImpactQueue_Element;
typedef struct Motion_Table_Infomeation;
typedef struct HH_Object_Dust_00;
typedef struct Vertex_Infomeation_List;
typedef struct _anon0;
typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_ElementOption;


typedef float type_0[2];
typedef int type_1[2];
typedef float type_2[4][4];
typedef float type_3[1];
typedef Motion_Table_Infomeation type_4[3];
typedef Vertex_Infomeation_List type_5[1];
typedef float type_6[4][4];
typedef float type_7[4];
typedef float type_8[4][4];
typedef float type_9[1];
typedef int type_10[4];
typedef float type_11[4][4];
typedef float type_12[4];
typedef float type_13[4][4];
typedef float type_14[4][4];
typedef float type_15[1];
typedef float type_16[4][4];
typedef float type_17[1];
typedef float type_18[4][2];
typedef float type_19[4][4];

struct ImpactQueue_Element
{
	unsigned int Class_Descriptor;
	unsigned int hInstance;
	ImpactQueue_ElementOption Option;
};

struct Motion_Table_Infomeation
{
	float diff_time;
	float diff_scale_ratio;
	float diff_rgba_ratio;
};

struct HH_Object_Dust_00
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

struct Vertex_Infomeation_List
{
	float pVertex_List[4];
	float pNormal_List[4];
	unsigned int Vertex_Max;
	unsigned int Primitive_Type;
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
};

struct ImpactQueue_ElementOption
{
	float Vector[4][2];
	float Float_Value[2];
	int Int_Value[2];
};

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

unsigned int Object_Initialize(HH_Object_Dust_00* pThis, ImpactQueue_Element* pElement);
void ParabolaMotion_Calculator(HH_Object_Dust_00* pThis, float Time, float* Position);
unsigned int Object_Motion_00(HH_Object_Dust_00* pThis);
unsigned int Object_Draw(HH_Object_Dust_00* pThis, ImpactQueue_Element* pElement, float* Current_Position);
unsigned int HH_Class_Dust_00(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x2469f0
unsigned int Object_Initialize(HH_Object_Dust_00* pThis, ImpactQueue_Element* pElement)
{
	float resist_ya;
	float resist_y0;
	float resist_xz;
	float* src_direction;
	float beta;
	float p_volume;
	float p_y;
	unsigned int result;
	// Line 234, Address: 0x2469f0, Func Offset: 0
	// Line 235, Address: 0x246a08, Func Offset: 0x18
	// Line 238, Address: 0x246a0c, Func Offset: 0x1c
	// Line 241, Address: 0x246a18, Func Offset: 0x28
	// Line 249, Address: 0x246a30, Func Offset: 0x40
	// Line 254, Address: 0x246a38, Func Offset: 0x48
	// Line 255, Address: 0x246a4c, Func Offset: 0x5c
	// Line 256, Address: 0x246a60, Func Offset: 0x70
	// Line 259, Address: 0x246a74, Func Offset: 0x84
	// Line 260, Address: 0x246a88, Func Offset: 0x98
	// Line 261, Address: 0x246a98, Func Offset: 0xa8
	// Line 263, Address: 0x246aa0, Func Offset: 0xb0
	// Line 264, Address: 0x246ac4, Func Offset: 0xd4
	// Line 265, Address: 0x246ae0, Func Offset: 0xf0
	// Line 271, Address: 0x246aec, Func Offset: 0xfc
	// Line 272, Address: 0x246b00, Func Offset: 0x110
	// Line 273, Address: 0x246b14, Func Offset: 0x124
	// Line 275, Address: 0x246b28, Func Offset: 0x138
	// Line 278, Address: 0x246b44, Func Offset: 0x154
	// Line 279, Address: 0x246b48, Func Offset: 0x158
	// Func End, Address: 0x246b60, Func Offset: 0x170
}

// 
// Start address: 0x246b60
void ParabolaMotion_Calculator(HH_Object_Dust_00* pThis, float Time, float* Position)
{
	float time_mat[4][4];
	// Line 294, Address: 0x246b60, Func Offset: 0
	// Line 298, Address: 0x246b74, Func Offset: 0x14
	// Line 299, Address: 0x246b80, Func Offset: 0x20
	// Line 300, Address: 0x246b88, Func Offset: 0x28
	// Line 301, Address: 0x246b90, Func Offset: 0x30
	// Line 302, Address: 0x246b98, Func Offset: 0x38
	// Line 303, Address: 0x246ba8, Func Offset: 0x48
	// Line 304, Address: 0x246bb4, Func Offset: 0x54
	// Line 305, Address: 0x246bcc, Func Offset: 0x6c
	// Func End, Address: 0x246bdc, Func Offset: 0x7c
}

// 
// Start address: 0x246be0
unsigned int Object_Motion_00(HH_Object_Dust_00* pThis)
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
	// Line 320, Address: 0x246be0, Func Offset: 0
	// Line 321, Address: 0x246bfc, Func Offset: 0x1c
	// Line 323, Address: 0x246c00, Func Offset: 0x20
	// Line 324, Address: 0x246c04, Func Offset: 0x24
	// Line 325, Address: 0x246c1c, Func Offset: 0x3c
	// Line 326, Address: 0x246c34, Func Offset: 0x54
	// Line 327, Address: 0x246c4c, Func Offset: 0x6c
	// Line 329, Address: 0x246c64, Func Offset: 0x84
	// Line 330, Address: 0x246c70, Func Offset: 0x90
	// Line 332, Address: 0x246c7c, Func Offset: 0x9c
	// Line 333, Address: 0x246c88, Func Offset: 0xa8
	// Line 335, Address: 0x246c94, Func Offset: 0xb4
	// Line 336, Address: 0x246ca0, Func Offset: 0xc0
	// Line 338, Address: 0x246cac, Func Offset: 0xcc
	// Line 340, Address: 0x246cb4, Func Offset: 0xd4
	// Line 343, Address: 0x246cbc, Func Offset: 0xdc
	// Line 344, Address: 0x246cc8, Func Offset: 0xe8
	// Line 346, Address: 0x246ccc, Func Offset: 0xec
	// Line 347, Address: 0x246cd8, Func Offset: 0xf8
	// Line 348, Address: 0x246cf8, Func Offset: 0x118
	// Line 349, Address: 0x246d18, Func Offset: 0x138
	// Line 350, Address: 0x246d38, Func Offset: 0x158
	// Line 351, Address: 0x246d50, Func Offset: 0x170
	// Line 352, Address: 0x246d70, Func Offset: 0x190
	// Line 353, Address: 0x246d90, Func Offset: 0x1b0
	// Line 356, Address: 0x246db0, Func Offset: 0x1d0
	// Line 358, Address: 0x246de0, Func Offset: 0x200
	// Line 359, Address: 0x246dfc, Func Offset: 0x21c
	// Line 361, Address: 0x246e0c, Func Offset: 0x22c
	// Line 363, Address: 0x246e14, Func Offset: 0x234
	// Line 364, Address: 0x246e30, Func Offset: 0x250
	// Line 366, Address: 0x246e40, Func Offset: 0x260
	// Line 368, Address: 0x246e48, Func Offset: 0x268
	// Line 369, Address: 0x246e64, Func Offset: 0x284
	// Line 378, Address: 0x246e74, Func Offset: 0x294
	// Line 379, Address: 0x246e88, Func Offset: 0x2a8
	// Line 381, Address: 0x246e98, Func Offset: 0x2b8
	// Line 385, Address: 0x246ea8, Func Offset: 0x2c8
	// Line 386, Address: 0x246ec8, Func Offset: 0x2e8
	// Line 389, Address: 0x246ed8, Func Offset: 0x2f8
	// Line 390, Address: 0x246ef8, Func Offset: 0x318
	// Line 392, Address: 0x246f18, Func Offset: 0x338
	// Line 393, Address: 0x246f48, Func Offset: 0x368
	// Line 395, Address: 0x246f78, Func Offset: 0x398
	// Line 396, Address: 0x246f7c, Func Offset: 0x39c
	// Func End, Address: 0x246f9c, Func Offset: 0x3bc
}

// 
// Start address: 0x246fa0
unsigned int Object_Draw(HH_Object_Dust_00* pThis, ImpactQueue_Element* pElement, float* Current_Position)
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
	// Line 409, Address: 0x246fa0, Func Offset: 0
	// Line 410, Address: 0x246fd8, Func Offset: 0x38
	// Line 411, Address: 0x246fdc, Func Offset: 0x3c
	// Line 412, Address: 0x246fe8, Func Offset: 0x48
	// Line 413, Address: 0x246ff4, Func Offset: 0x54
	// Line 414, Address: 0x247000, Func Offset: 0x60
	// Line 415, Address: 0x24701c, Func Offset: 0x7c
	// Line 416, Address: 0x247028, Func Offset: 0x88
	// Line 420, Address: 0x247034, Func Offset: 0x94
	// Line 427, Address: 0x247054, Func Offset: 0xb4
	// Line 430, Address: 0x247060, Func Offset: 0xc0
	// Line 434, Address: 0x24706c, Func Offset: 0xcc
	// Line 435, Address: 0x247080, Func Offset: 0xe0
	// Line 436, Address: 0x247094, Func Offset: 0xf4
	// Line 437, Address: 0x2470a8, Func Offset: 0x108
	// Line 438, Address: 0x2470c0, Func Offset: 0x120
	// Line 439, Address: 0x2470d4, Func Offset: 0x134
	// Line 442, Address: 0x2470e8, Func Offset: 0x148
	// Line 443, Address: 0x2470f4, Func Offset: 0x154
	// Line 449, Address: 0x247108, Func Offset: 0x168
	// Line 469, Address: 0x247110, Func Offset: 0x170
	// Line 472, Address: 0x24712c, Func Offset: 0x18c
	// Line 473, Address: 0x247140, Func Offset: 0x1a0
	// Line 475, Address: 0x247154, Func Offset: 0x1b4
	// Line 489, Address: 0x24717c, Func Offset: 0x1dc
	// Line 491, Address: 0x24718c, Func Offset: 0x1ec
	// Line 495, Address: 0x247198, Func Offset: 0x1f8
	// Line 497, Address: 0x24719c, Func Offset: 0x1fc
	// Line 498, Address: 0x2471c8, Func Offset: 0x228
	// Line 499, Address: 0x2471cc, Func Offset: 0x22c
	// Line 505, Address: 0x2471d0, Func Offset: 0x230
	// Line 506, Address: 0x24724c, Func Offset: 0x2ac
	// Line 507, Address: 0x2472c0, Func Offset: 0x320
	// Line 508, Address: 0x24731c, Func Offset: 0x37c
	// Line 512, Address: 0x247330, Func Offset: 0x390
	// Line 514, Address: 0x247338, Func Offset: 0x398
	// Line 515, Address: 0x24733c, Func Offset: 0x39c
	// Func End, Address: 0x247370, Func Offset: 0x3d0
}

// 
// Start address: 0x247370
unsigned int HH_Class_Dust_00(void* pBlock, ImpactQueue_Element* pElement)
{
	float position[4];
	float position[4];
	HH_Object_Dust_00* pThis;
	unsigned int result;
	// Line 534, Address: 0x247370, Func Offset: 0
	// Line 542, Address: 0x247388, Func Offset: 0x18
	// Line 543, Address: 0x24738c, Func Offset: 0x1c
	// Line 545, Address: 0x247390, Func Offset: 0x20
	// Line 547, Address: 0x2473c8, Func Offset: 0x58
	// Line 548, Address: 0x2473d8, Func Offset: 0x68
	// Line 549, Address: 0x2473e4, Func Offset: 0x74
	// Line 554, Address: 0x2473ec, Func Offset: 0x7c
	// Line 556, Address: 0x247404, Func Offset: 0x94
	// Line 567, Address: 0x247414, Func Offset: 0xa4
	// Line 568, Address: 0x247430, Func Offset: 0xc0
	// Line 569, Address: 0x24743c, Func Offset: 0xcc
	// Line 576, Address: 0x247444, Func Offset: 0xd4
	// Line 578, Address: 0x24746c, Func Offset: 0xfc
	// Line 581, Address: 0x247474, Func Offset: 0x104
	// Line 583, Address: 0x247488, Func Offset: 0x118
	// Line 584, Address: 0x2474a4, Func Offset: 0x134
	// Line 590, Address: 0x2474ac, Func Offset: 0x13c
	// Line 591, Address: 0x2474c4, Func Offset: 0x154
	// Line 592, Address: 0x2474d4, Func Offset: 0x164
	// Line 594, Address: 0x2474e8, Func Offset: 0x178
	// Line 597, Address: 0x2474f0, Func Offset: 0x180
	// Line 598, Address: 0x2474f4, Func Offset: 0x184
	// Line 601, Address: 0x2474f8, Func Offset: 0x188
	// Line 602, Address: 0x2474fc, Func Offset: 0x18c
	// Func End, Address: 0x247514, Func Offset: 0x1a4
}

