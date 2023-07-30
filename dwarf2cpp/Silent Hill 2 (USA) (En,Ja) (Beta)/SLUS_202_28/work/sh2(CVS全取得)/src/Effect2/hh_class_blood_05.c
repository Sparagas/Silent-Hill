typedef struct Motion_Table_Infomeation;
typedef struct HH_Object_Blood_05;
typedef struct ImpactQueue_Element;
typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_ElementOption;
typedef struct _anon0;
typedef struct Vertex_Infomeation_List;
typedef struct _CL_VHIT_WALL;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _CL_VHIT_CHARA;
typedef struct SubCharacter;
typedef struct _CL_VHIT_RESULT;
typedef union _anon1;


typedef float type_0[4];
typedef float type_1[4][4];
typedef float type_2[2];
typedef float type_3[4][4];
typedef float type_4[4][4];
typedef Motion_Table_Infomeation* type_5[2];
typedef float type_6[4][4];
typedef float type_7[2];
typedef float type_8[4][8];
typedef float type_9[4][2];
typedef float type_10[4][4];
typedef float type_11[2];
typedef Motion_Table_Infomeation type_12[2];
typedef int type_13[2];
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
typedef float type_24[4];
typedef float type_25[4][4];
typedef float type_26[2];
typedef Vertex_Infomeation_List type_27[1];

struct Motion_Table_Infomeation
{
	float diff_time;
	float diff_scale_ratio;
	float diff_rgba_ratio;
};

struct HH_Object_Blood_05
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

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
};

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

struct SubCharacter
{
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon1 hobj;
};

union _anon1
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
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

unsigned int Object_Initialize(HH_Object_Blood_05* pThis, ImpactQueue_Element* pElement);
void ParabolaMotion_Calculator(HH_Object_Blood_05* pThis, float Time, float* Position);
unsigned int Object_Motion_00(HH_Object_Blood_05* pThis, ImpactQueue_Element* pElement);
unsigned int Object_Draw(HH_Object_Blood_05* pThis, ImpactQueue_Element* pElement, float* Current_Position);
unsigned int HH_Class_Prefix_Blood_05();
unsigned int HH_Class_Suffix_Blood_05();
unsigned int HH_Class_Blood_05(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x294d80
unsigned int Object_Initialize(HH_Object_Blood_05* pThis, ImpactQueue_Element* pElement)
{
	float resist_ya;
	float resist_y0;
	float resist_xz;
	float* src_direction;
	unsigned int result;
	// Line 304, Address: 0x294d80, Func Offset: 0
	// Line 308, Address: 0x294d90, Func Offset: 0x10
	// Line 326, Address: 0x294d94, Func Offset: 0x14
	// Line 327, Address: 0x294dac, Func Offset: 0x2c
	// Line 328, Address: 0x294dc4, Func Offset: 0x44
	// Line 330, Address: 0x294dd0, Func Offset: 0x50
	// Line 333, Address: 0x294df0, Func Offset: 0x70
	// Line 335, Address: 0x294e00, Func Offset: 0x80
	// Line 336, Address: 0x294e04, Func Offset: 0x84
	// Func End, Address: 0x294e18, Func Offset: 0x98
}

// 
// Start address: 0x294e20
void ParabolaMotion_Calculator(HH_Object_Blood_05* pThis, float Time, float* Position)
{
	float time_mat[4][4];
	// Line 351, Address: 0x294e20, Func Offset: 0
	// Line 355, Address: 0x294e40, Func Offset: 0x20
	// Line 356, Address: 0x294e4c, Func Offset: 0x2c
	// Line 357, Address: 0x294e50, Func Offset: 0x30
	// Line 358, Address: 0x294e54, Func Offset: 0x34
	// Line 359, Address: 0x294e58, Func Offset: 0x38
	// Line 360, Address: 0x294e60, Func Offset: 0x40
	// Line 361, Address: 0x294e64, Func Offset: 0x44
	// Line 362, Address: 0x294e78, Func Offset: 0x58
	// Func End, Address: 0x294e94, Func Offset: 0x74
}

// 
// Start address: 0x294ea0
unsigned int Object_Motion_00(HH_Object_Blood_05* pThis, ImpactQueue_Element* pElement)
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
	// Line 378, Address: 0x294ea0, Func Offset: 0
	// Line 379, Address: 0x294ea4, Func Offset: 0x4
	// Line 380, Address: 0x294eb8, Func Offset: 0x18
	// Line 381, Address: 0x294ec8, Func Offset: 0x28
	// Line 382, Address: 0x294ed8, Func Offset: 0x38
	// Line 384, Address: 0x294ee8, Func Offset: 0x48
	// Line 387, Address: 0x294ef0, Func Offset: 0x50
	// Line 390, Address: 0x294ef4, Func Offset: 0x54
	// Line 393, Address: 0x294ef8, Func Offset: 0x58
	// Line 396, Address: 0x294f08, Func Offset: 0x68
	// Line 399, Address: 0x294f10, Func Offset: 0x70
	// Line 400, Address: 0x294f1c, Func Offset: 0x7c
	// Line 402, Address: 0x294f20, Func Offset: 0x80
	// Line 403, Address: 0x294f2c, Func Offset: 0x8c
	// Line 404, Address: 0x294f44, Func Offset: 0xa4
	// Line 405, Address: 0x294f4c, Func Offset: 0xac
	// Line 406, Address: 0x294f54, Func Offset: 0xb4
	// Line 407, Address: 0x294f68, Func Offset: 0xc8
	// Line 408, Address: 0x294f80, Func Offset: 0xe0
	// Line 409, Address: 0x294f88, Func Offset: 0xe8
	// Line 412, Address: 0x294f90, Func Offset: 0xf0
	// Line 414, Address: 0x294fac, Func Offset: 0x10c
	// Line 415, Address: 0x294fc0, Func Offset: 0x120
	// Line 417, Address: 0x294fcc, Func Offset: 0x12c
	// Line 419, Address: 0x294fd4, Func Offset: 0x134
	// Line 420, Address: 0x294fe8, Func Offset: 0x148
	// Line 429, Address: 0x294ff4, Func Offset: 0x154
	// Line 430, Address: 0x294ffc, Func Offset: 0x15c
	// Line 432, Address: 0x295000, Func Offset: 0x160
	// Line 436, Address: 0x295004, Func Offset: 0x164
	// Line 437, Address: 0x295020, Func Offset: 0x180
	// Line 440, Address: 0x295024, Func Offset: 0x184
	// Line 441, Address: 0x295030, Func Offset: 0x190
	// Line 443, Address: 0x29503c, Func Offset: 0x19c
	// Line 444, Address: 0x295058, Func Offset: 0x1b8
	// Line 446, Address: 0x295068, Func Offset: 0x1c8
	// Line 447, Address: 0x29506c, Func Offset: 0x1cc
	// Func End, Address: 0x295074, Func Offset: 0x1d4
}

// 
// Start address: 0x295080
unsigned int Object_Draw(HH_Object_Blood_05* pThis, ImpactQueue_Element* pElement, float* Current_Position)
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
	// Line 462, Address: 0x295080, Func Offset: 0
	// Line 464, Address: 0x2950ac, Func Offset: 0x2c
	// Line 465, Address: 0x2950b8, Func Offset: 0x38
	// Line 466, Address: 0x2950cc, Func Offset: 0x4c
	// Line 467, Address: 0x2950d0, Func Offset: 0x50
	// Line 470, Address: 0x2950e8, Func Offset: 0x68
	// Line 477, Address: 0x295104, Func Offset: 0x84
	// Line 480, Address: 0x295110, Func Offset: 0x90
	// Line 483, Address: 0x29511c, Func Offset: 0x9c
	// Line 484, Address: 0x295134, Func Offset: 0xb4
	// Line 485, Address: 0x295148, Func Offset: 0xc8
	// Line 488, Address: 0x295158, Func Offset: 0xd8
	// Line 489, Address: 0x29516c, Func Offset: 0xec
	// Line 491, Address: 0x295180, Func Offset: 0x100
	// Line 494, Address: 0x295194, Func Offset: 0x114
	// Line 495, Address: 0x2951a0, Func Offset: 0x120
	// Line 497, Address: 0x2951b4, Func Offset: 0x134
	// Line 499, Address: 0x2951bc, Func Offset: 0x13c
	// Line 500, Address: 0x2951c4, Func Offset: 0x144
	// Line 501, Address: 0x2951d4, Func Offset: 0x154
	// Line 503, Address: 0x2951e4, Func Offset: 0x164
	// Line 504, Address: 0x295204, Func Offset: 0x184
	// Line 505, Address: 0x295210, Func Offset: 0x190
	// Line 506, Address: 0x295220, Func Offset: 0x1a0
	// Line 508, Address: 0x295230, Func Offset: 0x1b0
	// Line 509, Address: 0x29524c, Func Offset: 0x1cc
	// Line 510, Address: 0x295258, Func Offset: 0x1d8
	// Line 511, Address: 0x295264, Func Offset: 0x1e4
	// Line 512, Address: 0x295274, Func Offset: 0x1f4
	// Line 513, Address: 0x295280, Func Offset: 0x200
	// Line 515, Address: 0x29528c, Func Offset: 0x20c
	// Line 517, Address: 0x295294, Func Offset: 0x214
	// Line 518, Address: 0x295298, Func Offset: 0x218
	// Func End, Address: 0x2952c0, Func Offset: 0x240
}

// 
// Start address: 0x2952c0
unsigned int HH_Class_Prefix_Blood_05()
{
	unsigned long tex0;
	_anon0* pPk;
	unsigned int result;
	// Line 537, Address: 0x2952c0, Func Offset: 0
	// Line 539, Address: 0x2952cc, Func Offset: 0xc
	// Line 542, Address: 0x2952d8, Func Offset: 0x18
	// Line 544, Address: 0x2952e0, Func Offset: 0x20
	// Line 545, Address: 0x2952f0, Func Offset: 0x30
	// Line 547, Address: 0x295304, Func Offset: 0x44
	// Line 548, Address: 0x295320, Func Offset: 0x60
	// Line 549, Address: 0x29532c, Func Offset: 0x6c
	// Line 551, Address: 0x295334, Func Offset: 0x74
	// Line 552, Address: 0x295338, Func Offset: 0x78
	// Func End, Address: 0x29534c, Func Offset: 0x8c
}

// 
// Start address: 0x295350
unsigned int HH_Class_Suffix_Blood_05()
{
	unsigned int result;
	// Line 565, Address: 0x295350, Func Offset: 0
	// Line 568, Address: 0x295358, Func Offset: 0x8
	// Line 570, Address: 0x295360, Func Offset: 0x10
	// Line 571, Address: 0x295364, Func Offset: 0x14
	// Func End, Address: 0x295374, Func Offset: 0x24
}

// 
// Start address: 0x295380
unsigned int HH_Class_Blood_05(void* pBlock, ImpactQueue_Element* pElement)
{
	ImpactQueue_Element descriptor;
	float e_pos[4];
	_CL_VHIT_RESULT hit_result;
	float position[4];
	float position[4];
	HH_Object_Blood_05* pThis;
	unsigned int result;
	float add_vec[4];
	// Line 584, Address: 0x295380, Func Offset: 0
	// Line 592, Address: 0x295398, Func Offset: 0x18
	// Line 593, Address: 0x29539c, Func Offset: 0x1c
	// Line 595, Address: 0x2953a0, Func Offset: 0x20
	// Line 597, Address: 0x2953d4, Func Offset: 0x54
	// Line 599, Address: 0x2953dc, Func Offset: 0x5c
	// Line 601, Address: 0x2953fc, Func Offset: 0x7c
	// Line 602, Address: 0x295400, Func Offset: 0x80
	// Line 604, Address: 0x295408, Func Offset: 0x88
	// Line 605, Address: 0x295410, Func Offset: 0x90
	// Line 607, Address: 0x295418, Func Offset: 0x98
	// Line 610, Address: 0x295420, Func Offset: 0xa0
	// Line 615, Address: 0x295428, Func Offset: 0xa8
	// Line 616, Address: 0x295438, Func Offset: 0xb8
	// Line 618, Address: 0x295448, Func Offset: 0xc8
	// Line 619, Address: 0x295464, Func Offset: 0xe4
	// Line 622, Address: 0x29546c, Func Offset: 0xec
	// Line 623, Address: 0x295480, Func Offset: 0x100
	// Line 625, Address: 0x29549c, Func Offset: 0x11c
	// Line 630, Address: 0x2954a4, Func Offset: 0x124
	// Line 631, Address: 0x2954b4, Func Offset: 0x134
	// Line 641, Address: 0x2954c4, Func Offset: 0x144
	// Line 643, Address: 0x2954d8, Func Offset: 0x158
	// Line 644, Address: 0x2954ec, Func Offset: 0x16c
	// Line 646, Address: 0x295500, Func Offset: 0x180
	// Line 648, Address: 0x295518, Func Offset: 0x198
	// Line 650, Address: 0x295528, Func Offset: 0x1a8
	// Line 651, Address: 0x29552c, Func Offset: 0x1ac
	// Line 652, Address: 0x295530, Func Offset: 0x1b0
	// Line 653, Address: 0x295540, Func Offset: 0x1c0
	// Line 654, Address: 0x295548, Func Offset: 0x1c8
	// Line 655, Address: 0x295554, Func Offset: 0x1d4
	// Line 672, Address: 0x29555c, Func Offset: 0x1dc
	// Line 674, Address: 0x295570, Func Offset: 0x1f0
	// Line 675, Address: 0x29558c, Func Offset: 0x20c
	// Line 678, Address: 0x295594, Func Offset: 0x214
	// Line 679, Address: 0x295598, Func Offset: 0x218
	// Line 682, Address: 0x29559c, Func Offset: 0x21c
	// Line 683, Address: 0x2955a0, Func Offset: 0x220
	// Func End, Address: 0x2955bc, Func Offset: 0x23c
}

