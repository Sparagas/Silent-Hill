typedef struct ImpactQueue_Element;
typedef struct Motion_Table_Infomeation;
typedef struct HH_Object_Blood_00;
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
typedef float type_9[4][10];
typedef int type_10[4];
typedef float type_11[4];
typedef float type_12[4][5];
typedef float type_13[4];
typedef float type_14[4][4];
typedef float type_15[4][10];
typedef float type_16[4][4];
typedef float type_17[4][10];
typedef float type_18[4][2];

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

struct HH_Object_Blood_00
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

unsigned int Object_Initialize(HH_Object_Blood_00* pThis);
unsigned int Object_Motion_00(HH_Object_Blood_00* pThis);
unsigned int Object_Draw(HH_Object_Blood_00* pThis, ImpactQueue_Element* pElement);
unsigned int HH_Class_Blood_00(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x242b30
unsigned int Object_Initialize(HH_Object_Blood_00* pThis)
{
	float radian;
	unsigned int result;
	// Line 270, Address: 0x242b30, Func Offset: 0
	// Line 271, Address: 0x242b40, Func Offset: 0x10
	// Line 277, Address: 0x242b44, Func Offset: 0x14
	// Line 278, Address: 0x242b60, Func Offset: 0x30
	// Line 279, Address: 0x242b88, Func Offset: 0x58
	// Line 283, Address: 0x242ba4, Func Offset: 0x74
	// Line 285, Address: 0x242bb0, Func Offset: 0x80
	// Line 289, Address: 0x242bb8, Func Offset: 0x88
	// Line 291, Address: 0x242bf8, Func Offset: 0xc8
	// Line 298, Address: 0x242cf4, Func Offset: 0x1c4
	// Line 299, Address: 0x242cf8, Func Offset: 0x1c8
	// Func End, Address: 0x242d0c, Func Offset: 0x1dc
}

// 
// Start address: 0x242d10
unsigned int Object_Motion_00(HH_Object_Blood_00* pThis)
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
	// Line 312, Address: 0x242d10, Func Offset: 0
	// Line 313, Address: 0x242d40, Func Offset: 0x30
	// Line 315, Address: 0x242d44, Func Offset: 0x34
	// Line 316, Address: 0x242d60, Func Offset: 0x50
	// Line 317, Address: 0x242d7c, Func Offset: 0x6c
	// Line 318, Address: 0x242d98, Func Offset: 0x88
	// Line 320, Address: 0x242db4, Func Offset: 0xa4
	// Line 321, Address: 0x242dc0, Func Offset: 0xb0
	// Line 323, Address: 0x242dcc, Func Offset: 0xbc
	// Line 324, Address: 0x242dd8, Func Offset: 0xc8
	// Line 326, Address: 0x242de4, Func Offset: 0xd4
	// Line 327, Address: 0x242df0, Func Offset: 0xe0
	// Line 329, Address: 0x242dfc, Func Offset: 0xec
	// Line 330, Address: 0x242e04, Func Offset: 0xf4
	// Line 332, Address: 0x242e08, Func Offset: 0xf8
	// Line 335, Address: 0x242e14, Func Offset: 0x104
	// Line 336, Address: 0x242e20, Func Offset: 0x110
	// Line 338, Address: 0x242e24, Func Offset: 0x114
	// Line 339, Address: 0x242e30, Func Offset: 0x120
	// Line 340, Address: 0x242e50, Func Offset: 0x140
	// Line 341, Address: 0x242e70, Func Offset: 0x160
	// Line 342, Address: 0x242e90, Func Offset: 0x180
	// Line 343, Address: 0x242ea8, Func Offset: 0x198
	// Line 344, Address: 0x242ec8, Func Offset: 0x1b8
	// Line 345, Address: 0x242ee8, Func Offset: 0x1d8
	// Line 348, Address: 0x242f08, Func Offset: 0x1f8
	// Line 350, Address: 0x242f3c, Func Offset: 0x22c
	// Line 351, Address: 0x242f58, Func Offset: 0x248
	// Line 353, Address: 0x242f68, Func Offset: 0x258
	// Line 355, Address: 0x242f70, Func Offset: 0x260
	// Line 356, Address: 0x242f8c, Func Offset: 0x27c
	// Line 358, Address: 0x242f9c, Func Offset: 0x28c
	// Line 360, Address: 0x242fa4, Func Offset: 0x294
	// Line 361, Address: 0x242fc0, Func Offset: 0x2b0
	// Line 370, Address: 0x242fd0, Func Offset: 0x2c0
	// Line 371, Address: 0x242fe4, Func Offset: 0x2d4
	// Line 373, Address: 0x242ff4, Func Offset: 0x2e4
	// Line 377, Address: 0x243004, Func Offset: 0x2f4
	// Line 378, Address: 0x243024, Func Offset: 0x314
	// Line 381, Address: 0x243034, Func Offset: 0x324
	// Line 382, Address: 0x243054, Func Offset: 0x344
	// Line 384, Address: 0x243074, Func Offset: 0x364
	// Line 385, Address: 0x243090, Func Offset: 0x380
	// Line 387, Address: 0x2430ac, Func Offset: 0x39c
	// Line 388, Address: 0x2430b0, Func Offset: 0x3a0
	// Func End, Address: 0x2430e4, Func Offset: 0x3d4
}

// 
// Start address: 0x2430f0
unsigned int Object_Draw(HH_Object_Blood_00* pThis, ImpactQueue_Element* pElement)
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
	// Line 401, Address: 0x2430f0, Func Offset: 0
	// Line 402, Address: 0x243124, Func Offset: 0x34
	// Line 403, Address: 0x243128, Func Offset: 0x38
	// Line 404, Address: 0x243134, Func Offset: 0x44
	// Line 405, Address: 0x243154, Func Offset: 0x64
	// Line 406, Address: 0x243160, Func Offset: 0x70
	// Line 407, Address: 0x243168, Func Offset: 0x78
	// Line 408, Address: 0x243174, Func Offset: 0x84
	// Line 416, Address: 0x243180, Func Offset: 0x90
	// Line 418, Address: 0x24318c, Func Offset: 0x9c
	// Line 420, Address: 0x243198, Func Offset: 0xa8
	// Line 421, Address: 0x243200, Func Offset: 0x110
	// Line 423, Address: 0x243218, Func Offset: 0x128
	// Line 424, Address: 0x243230, Func Offset: 0x140
	// Line 427, Address: 0x243244, Func Offset: 0x154
	// Line 428, Address: 0x243250, Func Offset: 0x160
	// Line 431, Address: 0x243264, Func Offset: 0x174
	// Line 450, Address: 0x24326c, Func Offset: 0x17c
	// Line 454, Address: 0x243288, Func Offset: 0x198
	// Line 455, Address: 0x243294, Func Offset: 0x1a4
	// Line 457, Address: 0x2432a8, Func Offset: 0x1b8
	// Line 470, Address: 0x2432d0, Func Offset: 0x1e0
	// Line 474, Address: 0x2432dc, Func Offset: 0x1ec
	// Line 476, Address: 0x2432e0, Func Offset: 0x1f0
	// Line 477, Address: 0x24330c, Func Offset: 0x21c
	// Line 479, Address: 0x243310, Func Offset: 0x220
	// Line 480, Address: 0x243324, Func Offset: 0x234
	// Line 481, Address: 0x2433a0, Func Offset: 0x2b0
	// Line 482, Address: 0x24341c, Func Offset: 0x32c
	// Line 483, Address: 0x243478, Func Offset: 0x388
	// Line 487, Address: 0x243490, Func Offset: 0x3a0
	// Line 489, Address: 0x243498, Func Offset: 0x3a8
	// Line 490, Address: 0x24349c, Func Offset: 0x3ac
	// Func End, Address: 0x2434d0, Func Offset: 0x3e0
}

// 
// Start address: 0x2434d0
unsigned int HH_Class_Blood_00(void* pBlock, ImpactQueue_Element* pElement)
{
	HH_Object_Blood_00* pThis;
	unsigned int result;
	// Line 510, Address: 0x2434d0, Func Offset: 0
	// Line 518, Address: 0x2434e8, Func Offset: 0x18
	// Line 519, Address: 0x2434ec, Func Offset: 0x1c
	// Line 521, Address: 0x2434f0, Func Offset: 0x20
	// Line 524, Address: 0x24352c, Func Offset: 0x5c
	// Line 526, Address: 0x24353c, Func Offset: 0x6c
	// Line 527, Address: 0x243544, Func Offset: 0x74
	// Line 530, Address: 0x24354c, Func Offset: 0x7c
	// Line 532, Address: 0x24355c, Func Offset: 0x8c
	// Line 536, Address: 0x24356c, Func Offset: 0x9c
	// Line 538, Address: 0x243588, Func Offset: 0xb8
	// Line 539, Address: 0x2435a8, Func Offset: 0xd8
	// Line 541, Address: 0x2435b0, Func Offset: 0xe0
	// Line 543, Address: 0x2435b8, Func Offset: 0xe8
	// Line 545, Address: 0x2435c8, Func Offset: 0xf8
	// Line 546, Address: 0x2435e0, Func Offset: 0x110
	// Line 547, Address: 0x2435fc, Func Offset: 0x12c
	// Line 548, Address: 0x243608, Func Offset: 0x138
	// Line 550, Address: 0x243610, Func Offset: 0x140
	// Line 553, Address: 0x243618, Func Offset: 0x148
	// Line 554, Address: 0x24361c, Func Offset: 0x14c
	// Line 557, Address: 0x243620, Func Offset: 0x150
	// Line 558, Address: 0x243624, Func Offset: 0x154
	// Func End, Address: 0x24363c, Func Offset: 0x16c
}

