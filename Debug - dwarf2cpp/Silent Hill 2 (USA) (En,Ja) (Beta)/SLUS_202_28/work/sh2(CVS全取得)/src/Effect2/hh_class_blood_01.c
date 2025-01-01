typedef struct Vertex_Infomeation_List;
typedef struct ImpactQueue_Element;
typedef struct _anon0;
typedef struct Motion_Table_Infomeation;
typedef struct HH_Object_Blood_01;
typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_ElementOption;


typedef float type_0[4];
typedef float type_1[4][4];
typedef float type_2[2];
typedef float type_3[4][4];
typedef float type_4[4][4];
typedef Motion_Table_Infomeation* type_5[2];
typedef float type_6[4][4];
typedef float type_7[2];
typedef float type_8[4][2];
typedef float type_9[4][8];
typedef float type_10[2];
typedef int type_11[2];
typedef float type_12[4][4];
typedef Motion_Table_Infomeation type_13[2];
typedef int type_14[4];
typedef unsigned int type_15[1];
typedef float type_16[4];
typedef float type_17[4][4];
typedef float type_18[4][4];
typedef float type_19[4][4];
typedef float type_20[4][4];
typedef float type_21[2];
typedef float type_22[4][4];
typedef Motion_Table_Infomeation type_23[2];
typedef float type_24[4][4];
typedef float type_25[2];
typedef Vertex_Infomeation_List type_26[1];

struct Vertex_Infomeation_List
{
	float pVertex_List[4];
	float pNormal_List[4];
	unsigned int Vertex_Max;
	unsigned int Primitive_Type;
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

struct Motion_Table_Infomeation
{
	float diff_time;
	float diff_scale_ratio;
	float diff_rgba_ratio;
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

float _mass;
float _radius;
float _suppress_coff;
float _square_00_vertex[4][4];
float _square_00_normal[4][4];
float _square_00_stq[4][4];
float _square_01_stq[4][4];
float _square_02_stq[4][4];
float _square_03_stq[4][4];
float _square_10_stq[4][4];
float _square_11_stq[4][4];
float _square_12_stq[4][4];
float _square_13_stq[4][4];
Vertex_Infomeation_List _vertex_info_list[1];
float _stq_list[4][8];
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
unsigned int HH_Class_Prefix_Blood_01();
unsigned int HH_Class_Suffix_Blood_01();
unsigned int HH_Class_Blood_01(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x2542e0
unsigned int Object_Initialize(HH_Object_Blood_01* pThis, ImpactQueue_Element* pElement)
{
	float resist_ya;
	float resist_y0;
	float resist_xz;
	float* src_direction;
	unsigned int result;
	// Line 301, Address: 0x2542e0, Func Offset: 0
	// Line 305, Address: 0x2542f0, Func Offset: 0x10
	// Line 323, Address: 0x2542f4, Func Offset: 0x14
	// Line 324, Address: 0x25430c, Func Offset: 0x2c
	// Line 325, Address: 0x254324, Func Offset: 0x44
	// Line 327, Address: 0x254330, Func Offset: 0x50
	// Line 330, Address: 0x254350, Func Offset: 0x70
	// Line 332, Address: 0x254360, Func Offset: 0x80
	// Line 333, Address: 0x254364, Func Offset: 0x84
	// Func End, Address: 0x254378, Func Offset: 0x98
}

// 
// Start address: 0x254380
void ParabolaMotion_Calculator(HH_Object_Blood_01* pThis, float Time, float* Position)
{
	float time_mat[4][4];
	// Line 348, Address: 0x254380, Func Offset: 0
	// Line 352, Address: 0x2543a0, Func Offset: 0x20
	// Line 353, Address: 0x2543ac, Func Offset: 0x2c
	// Line 354, Address: 0x2543b0, Func Offset: 0x30
	// Line 355, Address: 0x2543b4, Func Offset: 0x34
	// Line 356, Address: 0x2543b8, Func Offset: 0x38
	// Line 357, Address: 0x2543c0, Func Offset: 0x40
	// Line 358, Address: 0x2543c4, Func Offset: 0x44
	// Line 359, Address: 0x2543d8, Func Offset: 0x58
	// Func End, Address: 0x2543f4, Func Offset: 0x74
}

// 
// Start address: 0x254400
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
	// Line 375, Address: 0x254400, Func Offset: 0
	// Line 376, Address: 0x254404, Func Offset: 0x4
	// Line 377, Address: 0x254418, Func Offset: 0x18
	// Line 378, Address: 0x254428, Func Offset: 0x28
	// Line 379, Address: 0x254438, Func Offset: 0x38
	// Line 381, Address: 0x254448, Func Offset: 0x48
	// Line 384, Address: 0x254450, Func Offset: 0x50
	// Line 387, Address: 0x254454, Func Offset: 0x54
	// Line 390, Address: 0x254458, Func Offset: 0x58
	// Line 393, Address: 0x254468, Func Offset: 0x68
	// Line 396, Address: 0x254470, Func Offset: 0x70
	// Line 397, Address: 0x25447c, Func Offset: 0x7c
	// Line 399, Address: 0x254480, Func Offset: 0x80
	// Line 400, Address: 0x25448c, Func Offset: 0x8c
	// Line 401, Address: 0x2544a4, Func Offset: 0xa4
	// Line 402, Address: 0x2544ac, Func Offset: 0xac
	// Line 403, Address: 0x2544b4, Func Offset: 0xb4
	// Line 404, Address: 0x2544c8, Func Offset: 0xc8
	// Line 405, Address: 0x2544e0, Func Offset: 0xe0
	// Line 406, Address: 0x2544e8, Func Offset: 0xe8
	// Line 409, Address: 0x2544f0, Func Offset: 0xf0
	// Line 411, Address: 0x25450c, Func Offset: 0x10c
	// Line 412, Address: 0x254520, Func Offset: 0x120
	// Line 414, Address: 0x25452c, Func Offset: 0x12c
	// Line 416, Address: 0x254534, Func Offset: 0x134
	// Line 417, Address: 0x254548, Func Offset: 0x148
	// Line 426, Address: 0x254554, Func Offset: 0x154
	// Line 427, Address: 0x25455c, Func Offset: 0x15c
	// Line 429, Address: 0x254560, Func Offset: 0x160
	// Line 433, Address: 0x254564, Func Offset: 0x164
	// Line 434, Address: 0x254580, Func Offset: 0x180
	// Line 437, Address: 0x254584, Func Offset: 0x184
	// Line 438, Address: 0x254590, Func Offset: 0x190
	// Line 440, Address: 0x25459c, Func Offset: 0x19c
	// Line 441, Address: 0x2545b8, Func Offset: 0x1b8
	// Line 443, Address: 0x2545c8, Func Offset: 0x1c8
	// Line 444, Address: 0x2545cc, Func Offset: 0x1cc
	// Func End, Address: 0x2545d4, Func Offset: 0x1d4
}

// 
// Start address: 0x2545e0
unsigned int Object_Draw(HH_Object_Blood_01* pThis, ImpactQueue_Element* pElement, float* Current_Position)
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
	// Line 459, Address: 0x2545e0, Func Offset: 0
	// Line 461, Address: 0x25460c, Func Offset: 0x2c
	// Line 462, Address: 0x254618, Func Offset: 0x38
	// Line 463, Address: 0x25462c, Func Offset: 0x4c
	// Line 464, Address: 0x254630, Func Offset: 0x50
	// Line 467, Address: 0x254648, Func Offset: 0x68
	// Line 474, Address: 0x254664, Func Offset: 0x84
	// Line 477, Address: 0x254670, Func Offset: 0x90
	// Line 480, Address: 0x25467c, Func Offset: 0x9c
	// Line 481, Address: 0x254694, Func Offset: 0xb4
	// Line 482, Address: 0x2546a8, Func Offset: 0xc8
	// Line 485, Address: 0x2546b8, Func Offset: 0xd8
	// Line 486, Address: 0x2546cc, Func Offset: 0xec
	// Line 488, Address: 0x2546e0, Func Offset: 0x100
	// Line 491, Address: 0x2546f4, Func Offset: 0x114
	// Line 492, Address: 0x254700, Func Offset: 0x120
	// Line 494, Address: 0x254714, Func Offset: 0x134
	// Line 496, Address: 0x25471c, Func Offset: 0x13c
	// Line 497, Address: 0x254724, Func Offset: 0x144
	// Line 498, Address: 0x254734, Func Offset: 0x154
	// Line 500, Address: 0x254744, Func Offset: 0x164
	// Line 501, Address: 0x254764, Func Offset: 0x184
	// Line 502, Address: 0x254770, Func Offset: 0x190
	// Line 503, Address: 0x254780, Func Offset: 0x1a0
	// Line 505, Address: 0x254790, Func Offset: 0x1b0
	// Line 506, Address: 0x2547ac, Func Offset: 0x1cc
	// Line 507, Address: 0x2547b8, Func Offset: 0x1d8
	// Line 508, Address: 0x2547c4, Func Offset: 0x1e4
	// Line 509, Address: 0x2547d4, Func Offset: 0x1f4
	// Line 510, Address: 0x2547e0, Func Offset: 0x200
	// Line 512, Address: 0x2547ec, Func Offset: 0x20c
	// Line 514, Address: 0x2547f4, Func Offset: 0x214
	// Line 515, Address: 0x2547f8, Func Offset: 0x218
	// Func End, Address: 0x254820, Func Offset: 0x240
}

// 
// Start address: 0x254820
unsigned int HH_Class_Prefix_Blood_01()
{
	unsigned long tex0;
	_anon0* pPk;
	unsigned int result;
	// Line 534, Address: 0x254820, Func Offset: 0
	// Line 536, Address: 0x25482c, Func Offset: 0xc
	// Line 539, Address: 0x254838, Func Offset: 0x18
	// Line 541, Address: 0x254840, Func Offset: 0x20
	// Line 542, Address: 0x254850, Func Offset: 0x30
	// Line 544, Address: 0x254864, Func Offset: 0x44
	// Line 545, Address: 0x254880, Func Offset: 0x60
	// Line 546, Address: 0x25488c, Func Offset: 0x6c
	// Line 548, Address: 0x254894, Func Offset: 0x74
	// Line 549, Address: 0x254898, Func Offset: 0x78
	// Func End, Address: 0x2548ac, Func Offset: 0x8c
}

// 
// Start address: 0x2548b0
unsigned int HH_Class_Suffix_Blood_01()
{
	unsigned int result;
	// Line 562, Address: 0x2548b0, Func Offset: 0
	// Line 565, Address: 0x2548b8, Func Offset: 0x8
	// Line 567, Address: 0x2548c0, Func Offset: 0x10
	// Line 568, Address: 0x2548c4, Func Offset: 0x14
	// Func End, Address: 0x2548d4, Func Offset: 0x24
}

// 
// Start address: 0x2548e0
unsigned int HH_Class_Blood_01(void* pBlock, ImpactQueue_Element* pElement)
{
	ImpactQueue_Element descriptor;
	float position[4];
	float position[4];
	HH_Object_Blood_01* pThis;
	unsigned int result;
	// Line 581, Address: 0x2548e0, Func Offset: 0
	// Line 589, Address: 0x2548f8, Func Offset: 0x18
	// Line 590, Address: 0x2548fc, Func Offset: 0x1c
	// Line 592, Address: 0x254900, Func Offset: 0x20
	// Line 594, Address: 0x254934, Func Offset: 0x54
	// Line 596, Address: 0x25493c, Func Offset: 0x5c
	// Line 598, Address: 0x25495c, Func Offset: 0x7c
	// Line 599, Address: 0x254960, Func Offset: 0x80
	// Line 601, Address: 0x254968, Func Offset: 0x88
	// Line 602, Address: 0x254970, Func Offset: 0x90
	// Line 604, Address: 0x254978, Func Offset: 0x98
	// Line 607, Address: 0x254980, Func Offset: 0xa0
	// Line 612, Address: 0x254988, Func Offset: 0xa8
	// Line 613, Address: 0x254998, Func Offset: 0xb8
	// Line 615, Address: 0x2549a8, Func Offset: 0xc8
	// Line 616, Address: 0x2549c4, Func Offset: 0xe4
	// Line 619, Address: 0x2549cc, Func Offset: 0xec
	// Line 620, Address: 0x2549e0, Func Offset: 0x100
	// Line 622, Address: 0x2549fc, Func Offset: 0x11c
	// Line 627, Address: 0x254a04, Func Offset: 0x124
	// Line 628, Address: 0x254a14, Func Offset: 0x134
	// Line 633, Address: 0x254a24, Func Offset: 0x144
	// Line 636, Address: 0x254a48, Func Offset: 0x168
	// Line 637, Address: 0x254a4c, Func Offset: 0x16c
	// Line 638, Address: 0x254a50, Func Offset: 0x170
	// Line 639, Address: 0x254a64, Func Offset: 0x184
	// Line 640, Address: 0x254a68, Func Offset: 0x188
	// Line 641, Address: 0x254a70, Func Offset: 0x190
	// Line 642, Address: 0x254a7c, Func Offset: 0x19c
	// Line 645, Address: 0x254a84, Func Offset: 0x1a4
	// Line 647, Address: 0x254a98, Func Offset: 0x1b8
	// Line 648, Address: 0x254ab4, Func Offset: 0x1d4
	// Line 651, Address: 0x254abc, Func Offset: 0x1dc
	// Line 652, Address: 0x254ac0, Func Offset: 0x1e0
	// Line 655, Address: 0x254ac4, Func Offset: 0x1e4
	// Line 656, Address: 0x254ac8, Func Offset: 0x1e8
	// Func End, Address: 0x254ae4, Func Offset: 0x204
}

