typedef struct HH_Object_Blood_03;
typedef struct ImpactQueue_Element;
typedef struct Motion_Table_Infomeation;
typedef struct Vertex_Infomeation_List;
typedef struct _anon0;
typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_ElementOption;


typedef float type_0[4][4];
typedef float type_1[2];
typedef int type_2[2];
typedef float type_3[1];
typedef float type_4[4];
typedef float type_5[4][2];
typedef float type_6[1];
typedef float type_7[4][4];
typedef float type_8[1];
typedef Motion_Table_Infomeation type_9[3];
typedef Vertex_Infomeation_List type_10[1];
typedef int type_11[4];
typedef float type_12[4][4];
typedef float type_13[4];
typedef float type_14[4][4];
typedef float type_15[4][4];
typedef float type_16[1];
typedef float type_17[4][2];

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
unsigned int HH_Class_Blood_03(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x24d9a0
unsigned int Object_Initialize(HH_Object_Blood_03* pThis, ImpactQueue_Element* pElement)
{
	float resist_ya;
	float resist_y0;
	float resist_xz;
	float* src_direction;
	float beta;
	float p_volume;
	float p_y;
	unsigned int result;
	// Line 239, Address: 0x24d9a0, Func Offset: 0
	// Line 240, Address: 0x24d9b8, Func Offset: 0x18
	// Line 243, Address: 0x24d9bc, Func Offset: 0x1c
	// Line 246, Address: 0x24d9c8, Func Offset: 0x28
	// Line 254, Address: 0x24d9e0, Func Offset: 0x40
	// Line 259, Address: 0x24d9e8, Func Offset: 0x48
	// Line 260, Address: 0x24d9fc, Func Offset: 0x5c
	// Line 261, Address: 0x24da10, Func Offset: 0x70
	// Line 264, Address: 0x24da24, Func Offset: 0x84
	// Line 265, Address: 0x24da38, Func Offset: 0x98
	// Line 266, Address: 0x24da48, Func Offset: 0xa8
	// Line 268, Address: 0x24da50, Func Offset: 0xb0
	// Line 269, Address: 0x24da74, Func Offset: 0xd4
	// Line 270, Address: 0x24da90, Func Offset: 0xf0
	// Line 276, Address: 0x24da9c, Func Offset: 0xfc
	// Line 277, Address: 0x24dab0, Func Offset: 0x110
	// Line 278, Address: 0x24dac4, Func Offset: 0x124
	// Line 280, Address: 0x24dad8, Func Offset: 0x138
	// Line 283, Address: 0x24daf4, Func Offset: 0x154
	// Line 284, Address: 0x24daf8, Func Offset: 0x158
	// Func End, Address: 0x24db10, Func Offset: 0x170
}

// 
// Start address: 0x24db10
void ParabolaMotion_Calculator(HH_Object_Blood_03* pThis, float Time, float* Position)
{
	float time_mat[4][4];
	// Line 299, Address: 0x24db10, Func Offset: 0
	// Line 303, Address: 0x24db24, Func Offset: 0x14
	// Line 304, Address: 0x24db30, Func Offset: 0x20
	// Line 305, Address: 0x24db38, Func Offset: 0x28
	// Line 306, Address: 0x24db40, Func Offset: 0x30
	// Line 307, Address: 0x24db48, Func Offset: 0x38
	// Line 308, Address: 0x24db58, Func Offset: 0x48
	// Line 309, Address: 0x24db64, Func Offset: 0x54
	// Line 310, Address: 0x24db7c, Func Offset: 0x6c
	// Func End, Address: 0x24db8c, Func Offset: 0x7c
}

// 
// Start address: 0x24db90
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
	// Line 325, Address: 0x24db90, Func Offset: 0
	// Line 326, Address: 0x24dbac, Func Offset: 0x1c
	// Line 328, Address: 0x24dbb0, Func Offset: 0x20
	// Line 329, Address: 0x24dbb4, Func Offset: 0x24
	// Line 330, Address: 0x24dbcc, Func Offset: 0x3c
	// Line 331, Address: 0x24dbe4, Func Offset: 0x54
	// Line 332, Address: 0x24dbfc, Func Offset: 0x6c
	// Line 334, Address: 0x24dc14, Func Offset: 0x84
	// Line 335, Address: 0x24dc20, Func Offset: 0x90
	// Line 337, Address: 0x24dc2c, Func Offset: 0x9c
	// Line 338, Address: 0x24dc38, Func Offset: 0xa8
	// Line 340, Address: 0x24dc44, Func Offset: 0xb4
	// Line 341, Address: 0x24dc50, Func Offset: 0xc0
	// Line 343, Address: 0x24dc5c, Func Offset: 0xcc
	// Line 345, Address: 0x24dc64, Func Offset: 0xd4
	// Line 348, Address: 0x24dc6c, Func Offset: 0xdc
	// Line 349, Address: 0x24dc78, Func Offset: 0xe8
	// Line 351, Address: 0x24dc7c, Func Offset: 0xec
	// Line 352, Address: 0x24dc88, Func Offset: 0xf8
	// Line 353, Address: 0x24dca8, Func Offset: 0x118
	// Line 354, Address: 0x24dcc8, Func Offset: 0x138
	// Line 355, Address: 0x24dce8, Func Offset: 0x158
	// Line 356, Address: 0x24dd00, Func Offset: 0x170
	// Line 357, Address: 0x24dd20, Func Offset: 0x190
	// Line 358, Address: 0x24dd40, Func Offset: 0x1b0
	// Line 361, Address: 0x24dd60, Func Offset: 0x1d0
	// Line 363, Address: 0x24dd90, Func Offset: 0x200
	// Line 364, Address: 0x24ddac, Func Offset: 0x21c
	// Line 366, Address: 0x24ddbc, Func Offset: 0x22c
	// Line 368, Address: 0x24ddc4, Func Offset: 0x234
	// Line 369, Address: 0x24dde0, Func Offset: 0x250
	// Line 371, Address: 0x24ddf0, Func Offset: 0x260
	// Line 373, Address: 0x24ddf8, Func Offset: 0x268
	// Line 374, Address: 0x24de14, Func Offset: 0x284
	// Line 383, Address: 0x24de24, Func Offset: 0x294
	// Line 384, Address: 0x24de38, Func Offset: 0x2a8
	// Line 386, Address: 0x24de48, Func Offset: 0x2b8
	// Line 390, Address: 0x24de58, Func Offset: 0x2c8
	// Line 391, Address: 0x24de78, Func Offset: 0x2e8
	// Line 394, Address: 0x24de88, Func Offset: 0x2f8
	// Line 395, Address: 0x24dea8, Func Offset: 0x318
	// Line 397, Address: 0x24dec8, Func Offset: 0x338
	// Line 398, Address: 0x24def8, Func Offset: 0x368
	// Line 400, Address: 0x24df28, Func Offset: 0x398
	// Line 401, Address: 0x24df2c, Func Offset: 0x39c
	// Func End, Address: 0x24df4c, Func Offset: 0x3bc
}

// 
// Start address: 0x24df50
unsigned int Object_Draw(HH_Object_Blood_03* pThis, ImpactQueue_Element* pElement, float* Current_Position)
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
	// Line 414, Address: 0x24df50, Func Offset: 0
	// Line 415, Address: 0x24df88, Func Offset: 0x38
	// Line 416, Address: 0x24df8c, Func Offset: 0x3c
	// Line 417, Address: 0x24df98, Func Offset: 0x48
	// Line 418, Address: 0x24dfa4, Func Offset: 0x54
	// Line 419, Address: 0x24dfb0, Func Offset: 0x60
	// Line 420, Address: 0x24dfcc, Func Offset: 0x7c
	// Line 421, Address: 0x24dfd8, Func Offset: 0x88
	// Line 425, Address: 0x24dfe4, Func Offset: 0x94
	// Line 432, Address: 0x24e004, Func Offset: 0xb4
	// Line 435, Address: 0x24e010, Func Offset: 0xc0
	// Line 439, Address: 0x24e01c, Func Offset: 0xcc
	// Line 440, Address: 0x24e030, Func Offset: 0xe0
	// Line 441, Address: 0x24e044, Func Offset: 0xf4
	// Line 442, Address: 0x24e058, Func Offset: 0x108
	// Line 443, Address: 0x24e070, Func Offset: 0x120
	// Line 444, Address: 0x24e084, Func Offset: 0x134
	// Line 447, Address: 0x24e098, Func Offset: 0x148
	// Line 448, Address: 0x24e0a4, Func Offset: 0x154
	// Line 454, Address: 0x24e0b8, Func Offset: 0x168
	// Line 473, Address: 0x24e0c0, Func Offset: 0x170
	// Line 478, Address: 0x24e0dc, Func Offset: 0x18c
	// Line 479, Address: 0x24e0f0, Func Offset: 0x1a0
	// Line 481, Address: 0x24e104, Func Offset: 0x1b4
	// Line 495, Address: 0x24e12c, Func Offset: 0x1dc
	// Line 497, Address: 0x24e13c, Func Offset: 0x1ec
	// Line 501, Address: 0x24e148, Func Offset: 0x1f8
	// Line 503, Address: 0x24e14c, Func Offset: 0x1fc
	// Line 504, Address: 0x24e178, Func Offset: 0x228
	// Line 505, Address: 0x24e17c, Func Offset: 0x22c
	// Line 511, Address: 0x24e180, Func Offset: 0x230
	// Line 512, Address: 0x24e1fc, Func Offset: 0x2ac
	// Line 513, Address: 0x24e270, Func Offset: 0x320
	// Line 514, Address: 0x24e2cc, Func Offset: 0x37c
	// Line 518, Address: 0x24e2e0, Func Offset: 0x390
	// Line 520, Address: 0x24e2e8, Func Offset: 0x398
	// Line 521, Address: 0x24e2ec, Func Offset: 0x39c
	// Func End, Address: 0x24e320, Func Offset: 0x3d0
}

// 
// Start address: 0x24e320
unsigned int HH_Class_Blood_03(void* pBlock, ImpactQueue_Element* pElement)
{
	float position[4];
	float position[4];
	HH_Object_Blood_03* pThis;
	unsigned int result;
	// Line 540, Address: 0x24e320, Func Offset: 0
	// Line 548, Address: 0x24e338, Func Offset: 0x18
	// Line 549, Address: 0x24e33c, Func Offset: 0x1c
	// Line 551, Address: 0x24e340, Func Offset: 0x20
	// Line 553, Address: 0x24e378, Func Offset: 0x58
	// Line 554, Address: 0x24e388, Func Offset: 0x68
	// Line 555, Address: 0x24e394, Func Offset: 0x74
	// Line 560, Address: 0x24e39c, Func Offset: 0x7c
	// Line 562, Address: 0x24e3b4, Func Offset: 0x94
	// Line 573, Address: 0x24e3c4, Func Offset: 0xa4
	// Line 574, Address: 0x24e3e0, Func Offset: 0xc0
	// Line 575, Address: 0x24e3ec, Func Offset: 0xcc
	// Line 582, Address: 0x24e3f4, Func Offset: 0xd4
	// Line 584, Address: 0x24e41c, Func Offset: 0xfc
	// Line 587, Address: 0x24e424, Func Offset: 0x104
	// Line 589, Address: 0x24e438, Func Offset: 0x118
	// Line 590, Address: 0x24e454, Func Offset: 0x134
	// Line 596, Address: 0x24e45c, Func Offset: 0x13c
	// Line 597, Address: 0x24e474, Func Offset: 0x154
	// Line 598, Address: 0x24e484, Func Offset: 0x164
	// Line 600, Address: 0x24e498, Func Offset: 0x178
	// Line 603, Address: 0x24e4a0, Func Offset: 0x180
	// Line 604, Address: 0x24e4a4, Func Offset: 0x184
	// Line 607, Address: 0x24e4a8, Func Offset: 0x188
	// Line 608, Address: 0x24e4ac, Func Offset: 0x18c
	// Func End, Address: 0x24e4c4, Func Offset: 0x1a4
}

