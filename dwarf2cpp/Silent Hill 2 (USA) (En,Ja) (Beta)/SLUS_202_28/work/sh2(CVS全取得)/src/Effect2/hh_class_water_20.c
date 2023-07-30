typedef struct _anon0;
typedef struct HH_Object_Water_20;
typedef struct ImpactQueue_Element;
typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_ElementOption;
typedef struct Vertex_Infomeation_List;
typedef struct Motion_Table_Infomeation;


typedef float type_0[4][4];
typedef float type_1[2];
typedef float type_2[4];
typedef float type_3[4][2];
typedef float type_4[2];
typedef float type_5[4][2];
typedef float type_6[2];
typedef int type_7[2];
typedef float type_8[4][4];
typedef int type_9[4];
typedef float type_10[2];
typedef unsigned int type_11[1];
typedef float type_12[4];
typedef float type_13[4][4];
typedef Motion_Table_Infomeation type_14[3];
typedef Vertex_Infomeation_List type_15[1];
typedef float type_16[4][4];
typedef float type_17[4][4];
typedef float type_18[2];

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

struct HH_Object_Water_20
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

float _square_00_vertex[4][4];
float _square_00_normal[4][4];
float _square_00_stq[4][4];
float _square_01_stq[4][4];
float _square_0x_stq_list[4][2];
Vertex_Infomeation_List _vertex_info_list[1];
float _rgba_start_list[2];
float _rgba_end_list[2];
float _scale_start_list[2];
float _scale_end_list[2];
Motion_Table_Infomeation _motion_info[3];

unsigned int Object_Initialize(HH_Object_Water_20* pThis, ImpactQueue_Element* pElement);
void ParabolaMotion_Calculator(HH_Object_Water_20* pThis, float Time, float* Position);
unsigned int Object_Motion_00(HH_Object_Water_20* pThis, ImpactQueue_Element* pElement);
unsigned int Object_Draw(HH_Object_Water_20* pThis, ImpactQueue_Element* pElement, float* Current_Position);
unsigned int HH_Class_Prefix_Water_20();
unsigned int HH_Class_Suffix_Water_20();
unsigned int HH_Class_Water_20(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x266400
unsigned int Object_Initialize(HH_Object_Water_20* pThis, ImpactQueue_Element* pElement)
{
	float resist_ya;
	float resist_y0;
	float resist_xz;
	float* src_direction;
	unsigned int result;
	// Line 260, Address: 0x266400, Func Offset: 0
	// Line 264, Address: 0x266418, Func Offset: 0x18
	// Line 267, Address: 0x26641c, Func Offset: 0x1c
	// Line 285, Address: 0x26642c, Func Offset: 0x2c
	// Line 286, Address: 0x266444, Func Offset: 0x44
	// Line 287, Address: 0x266450, Func Offset: 0x50
	// Line 289, Address: 0x26645c, Func Offset: 0x5c
	// Line 292, Address: 0x266468, Func Offset: 0x68
	// Line 293, Address: 0x26646c, Func Offset: 0x6c
	// Func End, Address: 0x266484, Func Offset: 0x84
}

// 
// Start address: 0x266490
void ParabolaMotion_Calculator(HH_Object_Water_20* pThis, float Time, float* Position)
{
	float time_mat[4][4];
	// Line 308, Address: 0x266490, Func Offset: 0
	// Line 312, Address: 0x2664b0, Func Offset: 0x20
	// Line 313, Address: 0x2664bc, Func Offset: 0x2c
	// Line 314, Address: 0x2664c0, Func Offset: 0x30
	// Line 315, Address: 0x2664c4, Func Offset: 0x34
	// Line 316, Address: 0x2664c8, Func Offset: 0x38
	// Line 317, Address: 0x2664d0, Func Offset: 0x40
	// Line 318, Address: 0x2664d4, Func Offset: 0x44
	// Line 319, Address: 0x2664e8, Func Offset: 0x58
	// Func End, Address: 0x266504, Func Offset: 0x74
}

// 
// Start address: 0x266510
unsigned int Object_Motion_00(HH_Object_Water_20* pThis, ImpactQueue_Element* pElement)
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
	// Line 337, Address: 0x266510, Func Offset: 0
	// Line 338, Address: 0x266514, Func Offset: 0x4
	// Line 339, Address: 0x266528, Func Offset: 0x18
	// Line 340, Address: 0x266538, Func Offset: 0x28
	// Line 341, Address: 0x266548, Func Offset: 0x38
	// Line 343, Address: 0x266558, Func Offset: 0x48
	// Line 346, Address: 0x266560, Func Offset: 0x50
	// Line 349, Address: 0x266564, Func Offset: 0x54
	// Line 352, Address: 0x266568, Func Offset: 0x58
	// Line 354, Address: 0x266570, Func Offset: 0x60
	// Line 357, Address: 0x266578, Func Offset: 0x68
	// Line 358, Address: 0x266584, Func Offset: 0x74
	// Line 360, Address: 0x266588, Func Offset: 0x78
	// Line 361, Address: 0x266594, Func Offset: 0x84
	// Line 362, Address: 0x2665ac, Func Offset: 0x9c
	// Line 363, Address: 0x2665b4, Func Offset: 0xa4
	// Line 364, Address: 0x2665bc, Func Offset: 0xac
	// Line 365, Address: 0x2665d0, Func Offset: 0xc0
	// Line 366, Address: 0x2665e8, Func Offset: 0xd8
	// Line 367, Address: 0x2665f0, Func Offset: 0xe0
	// Line 370, Address: 0x2665f8, Func Offset: 0xe8
	// Line 372, Address: 0x266620, Func Offset: 0x110
	// Line 373, Address: 0x266634, Func Offset: 0x124
	// Line 375, Address: 0x266640, Func Offset: 0x130
	// Line 377, Address: 0x266648, Func Offset: 0x138
	// Line 378, Address: 0x26665c, Func Offset: 0x14c
	// Line 380, Address: 0x266668, Func Offset: 0x158
	// Line 382, Address: 0x266670, Func Offset: 0x160
	// Line 383, Address: 0x266684, Func Offset: 0x174
	// Line 392, Address: 0x266690, Func Offset: 0x180
	// Line 393, Address: 0x266698, Func Offset: 0x188
	// Line 395, Address: 0x26669c, Func Offset: 0x18c
	// Line 399, Address: 0x2666a0, Func Offset: 0x190
	// Line 400, Address: 0x2666bc, Func Offset: 0x1ac
	// Line 403, Address: 0x2666c0, Func Offset: 0x1b0
	// Line 404, Address: 0x2666cc, Func Offset: 0x1bc
	// Line 406, Address: 0x2666d8, Func Offset: 0x1c8
	// Line 407, Address: 0x2666f4, Func Offset: 0x1e4
	// Line 409, Address: 0x266704, Func Offset: 0x1f4
	// Line 410, Address: 0x266708, Func Offset: 0x1f8
	// Func End, Address: 0x266710, Func Offset: 0x200
}

// 
// Start address: 0x266710
unsigned int Object_Draw(HH_Object_Water_20* pThis, ImpactQueue_Element* pElement, float* Current_Position)
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
	float add_a;
	// Line 425, Address: 0x266710, Func Offset: 0
	// Line 427, Address: 0x266740, Func Offset: 0x30
	// Line 429, Address: 0x26674c, Func Offset: 0x3c
	// Line 430, Address: 0x266754, Func Offset: 0x44
	// Line 439, Address: 0x26676c, Func Offset: 0x5c
	// Line 442, Address: 0x266778, Func Offset: 0x68
	// Line 445, Address: 0x266784, Func Offset: 0x74
	// Line 446, Address: 0x26679c, Func Offset: 0x8c
	// Line 447, Address: 0x2667b0, Func Offset: 0xa0
	// Line 450, Address: 0x2667c0, Func Offset: 0xb0
	// Line 451, Address: 0x2667d4, Func Offset: 0xc4
	// Line 453, Address: 0x2667e8, Func Offset: 0xd8
	// Line 456, Address: 0x2667fc, Func Offset: 0xec
	// Line 457, Address: 0x266808, Func Offset: 0xf8
	// Line 463, Address: 0x26681c, Func Offset: 0x10c
	// Line 467, Address: 0x266838, Func Offset: 0x128
	// Line 470, Address: 0x26683c, Func Offset: 0x12c
	// Line 472, Address: 0x266848, Func Offset: 0x138
	// Line 474, Address: 0x266860, Func Offset: 0x150
	// Line 476, Address: 0x266870, Func Offset: 0x160
	// Line 477, Address: 0x266890, Func Offset: 0x180
	// Line 479, Address: 0x2668ac, Func Offset: 0x19c
	// Line 480, Address: 0x2668bc, Func Offset: 0x1ac
	// Line 481, Address: 0x2668cc, Func Offset: 0x1bc
	// Line 484, Address: 0x2668dc, Func Offset: 0x1cc
	// Line 485, Address: 0x2668f8, Func Offset: 0x1e8
	// Line 498, Address: 0x266908, Func Offset: 0x1f8
	// Line 500, Address: 0x266910, Func Offset: 0x200
	// Line 501, Address: 0x266918, Func Offset: 0x208
	// Line 503, Address: 0x266928, Func Offset: 0x218
	// Line 504, Address: 0x266948, Func Offset: 0x238
	// Line 505, Address: 0x266954, Func Offset: 0x244
	// Line 506, Address: 0x266964, Func Offset: 0x254
	// Line 508, Address: 0x266974, Func Offset: 0x264
	// Line 509, Address: 0x266990, Func Offset: 0x280
	// Line 510, Address: 0x26699c, Func Offset: 0x28c
	// Line 511, Address: 0x2669a8, Func Offset: 0x298
	// Line 512, Address: 0x2669b8, Func Offset: 0x2a8
	// Line 513, Address: 0x2669c4, Func Offset: 0x2b4
	// Line 515, Address: 0x2669d0, Func Offset: 0x2c0
	// Line 517, Address: 0x2669d8, Func Offset: 0x2c8
	// Line 518, Address: 0x2669dc, Func Offset: 0x2cc
	// Func End, Address: 0x266a08, Func Offset: 0x2f8
}

// 
// Start address: 0x266a10
unsigned int HH_Class_Prefix_Water_20()
{
	unsigned long tex0;
	_anon0* pPk;
	unsigned int result;
	// Line 537, Address: 0x266a10, Func Offset: 0
	// Line 539, Address: 0x266a1c, Func Offset: 0xc
	// Line 542, Address: 0x266a28, Func Offset: 0x18
	// Line 544, Address: 0x266a30, Func Offset: 0x20
	// Line 545, Address: 0x266a40, Func Offset: 0x30
	// Line 547, Address: 0x266a54, Func Offset: 0x44
	// Line 548, Address: 0x266a70, Func Offset: 0x60
	// Line 549, Address: 0x266a8c, Func Offset: 0x7c
	// Line 550, Address: 0x266a98, Func Offset: 0x88
	// Line 552, Address: 0x266aa0, Func Offset: 0x90
	// Line 553, Address: 0x266aa4, Func Offset: 0x94
	// Func End, Address: 0x266ab8, Func Offset: 0xa8
}

// 
// Start address: 0x266ac0
unsigned int HH_Class_Suffix_Water_20()
{
	_anon0* pPk;
	unsigned int result;
	// Line 566, Address: 0x266ac0, Func Offset: 0
	// Line 568, Address: 0x266acc, Func Offset: 0xc
	// Line 570, Address: 0x266ad8, Func Offset: 0x18
	// Line 571, Address: 0x266ae0, Func Offset: 0x20
	// Line 572, Address: 0x266ae8, Func Offset: 0x28
	// Line 573, Address: 0x266afc, Func Offset: 0x3c
	// Line 575, Address: 0x266b04, Func Offset: 0x44
	// Line 576, Address: 0x266b08, Func Offset: 0x48
	// Func End, Address: 0x266b1c, Func Offset: 0x5c
}

// 
// Start address: 0x266b20
unsigned int HH_Class_Water_20(void* pBlock, ImpactQueue_Element* pElement)
{
	float position[4];
	HH_Object_Water_20* pThis;
	unsigned int result;
	// Line 589, Address: 0x266b20, Func Offset: 0
	// Line 597, Address: 0x266b38, Func Offset: 0x18
	// Line 598, Address: 0x266b3c, Func Offset: 0x1c
	// Line 600, Address: 0x266b40, Func Offset: 0x20
	// Line 602, Address: 0x266b68, Func Offset: 0x48
	// Line 603, Address: 0x266b70, Func Offset: 0x50
	// Line 604, Address: 0x266b7c, Func Offset: 0x5c
	// Line 609, Address: 0x266b84, Func Offset: 0x64
	// Line 611, Address: 0x266b94, Func Offset: 0x74
	// Line 622, Address: 0x266ba4, Func Offset: 0x84
	// Line 623, Address: 0x266bc0, Func Offset: 0xa0
	// Line 624, Address: 0x266bc4, Func Offset: 0xa4
	// Line 631, Address: 0x266bcc, Func Offset: 0xac
	// Line 632, Address: 0x266bec, Func Offset: 0xcc
	// Line 635, Address: 0x266bf4, Func Offset: 0xd4
	// Line 637, Address: 0x266c08, Func Offset: 0xe8
	// Line 638, Address: 0x266c24, Func Offset: 0x104
	// Line 641, Address: 0x266c2c, Func Offset: 0x10c
	// Line 642, Address: 0x266c30, Func Offset: 0x110
	// Line 645, Address: 0x266c34, Func Offset: 0x114
	// Line 646, Address: 0x266c38, Func Offset: 0x118
	// Func End, Address: 0x266c54, Func Offset: 0x134
}

