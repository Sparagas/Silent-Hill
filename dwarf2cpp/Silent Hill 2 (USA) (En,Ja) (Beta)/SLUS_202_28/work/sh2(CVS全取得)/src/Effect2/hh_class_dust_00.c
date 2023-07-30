typedef struct _anon0;
typedef struct HH_Object_Dust_00;
typedef struct ImpactQueue_Element;
typedef struct Vertex_Infomeation_List;
typedef struct Motion_Table_Infomeation;
typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_ElementOption;


typedef float type_0[1];
typedef float type_1[4][4];
typedef float type_2[4];
typedef float type_3[4][4];
typedef float type_4[1];
typedef float type_5[4][2];
typedef Motion_Table_Infomeation type_6[3];
typedef float type_7[2];
typedef int type_8[2];
typedef Vertex_Infomeation_List type_9[1];
typedef float type_10[4][4];
typedef int type_11[4];
typedef unsigned int type_12[1];
typedef float type_13[4];
typedef float type_14[4][4];
typedef float type_15[4][4];
typedef float type_16[1];
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

struct Motion_Table_Infomeation
{
	float diff_time;
	float diff_scale_ratio;
	float diff_rgba_ratio;
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
unsigned int HH_Class_Prefix_Dust_00();
unsigned int HH_Class_Suffix_Dust_00();
unsigned int HH_Class_Dust_00(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x257840
unsigned int Object_Initialize(HH_Object_Dust_00* pThis, ImpactQueue_Element* pElement)
{
	float resist_ya;
	float resist_y0;
	float resist_xz;
	float* src_direction;
	unsigned int result;
	// Line 253, Address: 0x257840, Func Offset: 0
	// Line 257, Address: 0x257858, Func Offset: 0x18
	// Line 260, Address: 0x25785c, Func Offset: 0x1c
	// Line 278, Address: 0x25786c, Func Offset: 0x2c
	// Line 279, Address: 0x257884, Func Offset: 0x44
	// Line 280, Address: 0x25789c, Func Offset: 0x5c
	// Line 282, Address: 0x2578a8, Func Offset: 0x68
	// Line 285, Address: 0x2578b4, Func Offset: 0x74
	// Line 286, Address: 0x2578b8, Func Offset: 0x78
	// Func End, Address: 0x2578d0, Func Offset: 0x90
}

// 
// Start address: 0x2578d0
void ParabolaMotion_Calculator(HH_Object_Dust_00* pThis, float Time, float* Position)
{
	float time_mat[4][4];
	// Line 301, Address: 0x2578d0, Func Offset: 0
	// Line 305, Address: 0x2578f0, Func Offset: 0x20
	// Line 306, Address: 0x2578fc, Func Offset: 0x2c
	// Line 307, Address: 0x257900, Func Offset: 0x30
	// Line 308, Address: 0x257904, Func Offset: 0x34
	// Line 309, Address: 0x257908, Func Offset: 0x38
	// Line 310, Address: 0x257910, Func Offset: 0x40
	// Line 311, Address: 0x257914, Func Offset: 0x44
	// Line 312, Address: 0x257928, Func Offset: 0x58
	// Func End, Address: 0x257944, Func Offset: 0x74
}

// 
// Start address: 0x257950
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
	// Line 332, Address: 0x257950, Func Offset: 0
	// Line 333, Address: 0x257958, Func Offset: 0x8
	// Line 334, Address: 0x257960, Func Offset: 0x10
	// Line 335, Address: 0x257968, Func Offset: 0x18
	// Line 337, Address: 0x257970, Func Offset: 0x20
	// Line 340, Address: 0x257978, Func Offset: 0x28
	// Line 343, Address: 0x25797c, Func Offset: 0x2c
	// Line 346, Address: 0x257980, Func Offset: 0x30
	// Line 348, Address: 0x257988, Func Offset: 0x38
	// Line 351, Address: 0x257990, Func Offset: 0x40
	// Line 352, Address: 0x25799c, Func Offset: 0x4c
	// Line 354, Address: 0x2579a0, Func Offset: 0x50
	// Line 355, Address: 0x2579ac, Func Offset: 0x5c
	// Line 356, Address: 0x2579c4, Func Offset: 0x74
	// Line 357, Address: 0x2579cc, Func Offset: 0x7c
	// Line 358, Address: 0x2579d4, Func Offset: 0x84
	// Line 359, Address: 0x2579e8, Func Offset: 0x98
	// Line 360, Address: 0x257a00, Func Offset: 0xb0
	// Line 361, Address: 0x257a08, Func Offset: 0xb8
	// Line 364, Address: 0x257a10, Func Offset: 0xc0
	// Line 366, Address: 0x257a38, Func Offset: 0xe8
	// Line 367, Address: 0x257a4c, Func Offset: 0xfc
	// Line 369, Address: 0x257a58, Func Offset: 0x108
	// Line 371, Address: 0x257a60, Func Offset: 0x110
	// Line 372, Address: 0x257a74, Func Offset: 0x124
	// Line 374, Address: 0x257a80, Func Offset: 0x130
	// Line 376, Address: 0x257a88, Func Offset: 0x138
	// Line 377, Address: 0x257a9c, Func Offset: 0x14c
	// Line 386, Address: 0x257aa8, Func Offset: 0x158
	// Line 387, Address: 0x257ab0, Func Offset: 0x160
	// Line 389, Address: 0x257ab4, Func Offset: 0x164
	// Line 393, Address: 0x257ab8, Func Offset: 0x168
	// Line 394, Address: 0x257ad4, Func Offset: 0x184
	// Line 397, Address: 0x257ad8, Func Offset: 0x188
	// Line 398, Address: 0x257ae4, Func Offset: 0x194
	// Line 400, Address: 0x257af0, Func Offset: 0x1a0
	// Line 401, Address: 0x257b0c, Func Offset: 0x1bc
	// Line 403, Address: 0x257b1c, Func Offset: 0x1cc
	// Line 404, Address: 0x257b20, Func Offset: 0x1d0
	// Func End, Address: 0x257b28, Func Offset: 0x1d8
}

// 
// Start address: 0x257b30
unsigned int Object_Draw(HH_Object_Dust_00* pThis, ImpactQueue_Element* pElement, float* Current_Position)
{
	float color_scale;
	float parameter[4];
	float light_color[4];
	float dir[4];
	float pos[4];
	float view_dir[4];
	float Rgba[4];
	float Base_Rgba[4];
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
	// Line 419, Address: 0x257b30, Func Offset: 0
	// Line 421, Address: 0x257b60, Func Offset: 0x30
	// Line 423, Address: 0x257b6c, Func Offset: 0x3c
	// Line 424, Address: 0x257b74, Func Offset: 0x44
	// Line 433, Address: 0x257b8c, Func Offset: 0x5c
	// Line 436, Address: 0x257b98, Func Offset: 0x68
	// Line 439, Address: 0x257ba4, Func Offset: 0x74
	// Line 440, Address: 0x257bbc, Func Offset: 0x8c
	// Line 441, Address: 0x257bd0, Func Offset: 0xa0
	// Line 443, Address: 0x257be0, Func Offset: 0xb0
	// Line 444, Address: 0x257bf4, Func Offset: 0xc4
	// Line 445, Address: 0x257c08, Func Offset: 0xd8
	// Line 448, Address: 0x257c1c, Func Offset: 0xec
	// Line 449, Address: 0x257c28, Func Offset: 0xf8
	// Line 454, Address: 0x257c3c, Func Offset: 0x10c
	// Line 460, Address: 0x257c58, Func Offset: 0x128
	// Line 464, Address: 0x257c5c, Func Offset: 0x12c
	// Line 466, Address: 0x257c68, Func Offset: 0x138
	// Line 468, Address: 0x257c80, Func Offset: 0x150
	// Line 470, Address: 0x257c90, Func Offset: 0x160
	// Line 471, Address: 0x257cb0, Func Offset: 0x180
	// Line 473, Address: 0x257ccc, Func Offset: 0x19c
	// Line 474, Address: 0x257cdc, Func Offset: 0x1ac
	// Line 476, Address: 0x257cec, Func Offset: 0x1bc
	// Line 480, Address: 0x257d00, Func Offset: 0x1d0
	// Line 482, Address: 0x257d1c, Func Offset: 0x1ec
	// Line 486, Address: 0x257d2c, Func Offset: 0x1fc
	// Line 488, Address: 0x257d34, Func Offset: 0x204
	// Line 489, Address: 0x257d3c, Func Offset: 0x20c
	// Line 491, Address: 0x257d4c, Func Offset: 0x21c
	// Line 492, Address: 0x257d6c, Func Offset: 0x23c
	// Line 493, Address: 0x257d78, Func Offset: 0x248
	// Line 494, Address: 0x257d88, Func Offset: 0x258
	// Line 496, Address: 0x257d98, Func Offset: 0x268
	// Line 497, Address: 0x257db4, Func Offset: 0x284
	// Line 498, Address: 0x257dc0, Func Offset: 0x290
	// Line 499, Address: 0x257dcc, Func Offset: 0x29c
	// Line 500, Address: 0x257ddc, Func Offset: 0x2ac
	// Line 501, Address: 0x257de8, Func Offset: 0x2b8
	// Line 503, Address: 0x257df4, Func Offset: 0x2c4
	// Line 505, Address: 0x257dfc, Func Offset: 0x2cc
	// Line 506, Address: 0x257e00, Func Offset: 0x2d0
	// Func End, Address: 0x257e2c, Func Offset: 0x2fc
}

// 
// Start address: 0x257e30
unsigned int HH_Class_Prefix_Dust_00()
{
	unsigned long tex0;
	_anon0* pPk;
	unsigned int result;
	// Line 525, Address: 0x257e30, Func Offset: 0
	// Line 527, Address: 0x257e3c, Func Offset: 0xc
	// Line 530, Address: 0x257e48, Func Offset: 0x18
	// Line 532, Address: 0x257e50, Func Offset: 0x20
	// Line 533, Address: 0x257e60, Func Offset: 0x30
	// Line 535, Address: 0x257e74, Func Offset: 0x44
	// Line 536, Address: 0x257e90, Func Offset: 0x60
	// Line 537, Address: 0x257e9c, Func Offset: 0x6c
	// Line 539, Address: 0x257ea4, Func Offset: 0x74
	// Line 540, Address: 0x257ea8, Func Offset: 0x78
	// Func End, Address: 0x257ebc, Func Offset: 0x8c
}

// 
// Start address: 0x257ec0
unsigned int HH_Class_Suffix_Dust_00()
{
	_anon0* pPk;
	unsigned int result;
	// Line 553, Address: 0x257ec0, Func Offset: 0
	// Line 555, Address: 0x257ecc, Func Offset: 0xc
	// Line 557, Address: 0x257ed8, Func Offset: 0x18
	// Line 558, Address: 0x257ee0, Func Offset: 0x20
	// Line 559, Address: 0x257ee8, Func Offset: 0x28
	// Line 560, Address: 0x257f04, Func Offset: 0x44
	// Line 562, Address: 0x257f0c, Func Offset: 0x4c
	// Line 563, Address: 0x257f10, Func Offset: 0x50
	// Func End, Address: 0x257f24, Func Offset: 0x64
}

// 
// Start address: 0x257f30
unsigned int HH_Class_Dust_00(void* pBlock, ImpactQueue_Element* pElement)
{
	float position[4];
	float position[4];
	HH_Object_Dust_00* pThis;
	unsigned int result;
	// Line 576, Address: 0x257f30, Func Offset: 0
	// Line 584, Address: 0x257f48, Func Offset: 0x18
	// Line 585, Address: 0x257f4c, Func Offset: 0x1c
	// Line 587, Address: 0x257f50, Func Offset: 0x20
	// Line 589, Address: 0x257f84, Func Offset: 0x54
	// Line 590, Address: 0x257f8c, Func Offset: 0x5c
	// Line 591, Address: 0x257f98, Func Offset: 0x68
	// Line 596, Address: 0x257fa0, Func Offset: 0x70
	// Line 598, Address: 0x257fb0, Func Offset: 0x80
	// Line 622, Address: 0x257fc0, Func Offset: 0x90
	// Line 623, Address: 0x257fe4, Func Offset: 0xb4
	// Line 624, Address: 0x257fec, Func Offset: 0xbc
	// Line 627, Address: 0x257ff4, Func Offset: 0xc4
	// Line 629, Address: 0x258008, Func Offset: 0xd8
	// Line 630, Address: 0x258024, Func Offset: 0xf4
	// Line 636, Address: 0x25802c, Func Offset: 0xfc
	// Line 637, Address: 0x25803c, Func Offset: 0x10c
	// Line 638, Address: 0x258048, Func Offset: 0x118
	// Line 640, Address: 0x25805c, Func Offset: 0x12c
	// Line 643, Address: 0x258064, Func Offset: 0x134
	// Line 644, Address: 0x258068, Func Offset: 0x138
	// Line 647, Address: 0x25806c, Func Offset: 0x13c
	// Line 648, Address: 0x258070, Func Offset: 0x140
	// Func End, Address: 0x25808c, Func Offset: 0x15c
}

