typedef struct ImpactQueue_Element;
typedef struct HH_Object_Blood_FootMark_00;
typedef struct Vertex_Infomeation_List;
typedef struct _anon0;
typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_ElementOption;


typedef float type_0[2];
typedef int type_1[2];
typedef float type_2[4][4];
typedef float type_3[4][4];
typedef float type_4[4];
typedef float type_5[4][2];
typedef float type_6[4][4];
typedef float type_7[4][4];
typedef Vertex_Infomeation_List type_8[2];
typedef int type_9[4];
typedef float type_10[4][2];
typedef float type_11[4];
typedef float type_12[4][4];
typedef float type_13[4][4];
typedef float type_14[4][4];
typedef float type_15[4][2];

struct ImpactQueue_Element
{
	unsigned int Class_Descriptor;
	unsigned int hInstance;
	ImpactQueue_ElementOption Option;
};

struct HH_Object_Blood_FootMark_00
{
	Object_DataBlock_Header Header;
	float Timer;
	unsigned short Step;
	unsigned short Vertex_Kind;
};

struct Vertex_Infomeation_List
{
	float pVertex_List[4];
	float pRgba_List[4];
	float pStq_List[4];
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
float _square_00_stq[4][4];
float _square_01_stq[4][4];
float _square_10_stq[4][4];
float _square_11_stq[4][4];
float _square_0x_stq_list[4][2];
float _square_1x_stq_list[4][2];
float _square_00_rgba[4][4];
Vertex_Infomeation_List _vertex_info_list[2];

unsigned int Object_Initialize(HH_Object_Blood_FootMark_00* pThis);
unsigned int Object_Draw(HH_Object_Blood_FootMark_00* pThis, ImpactQueue_Element* pElement);
unsigned int HH_Class_Blood_FootMark_00(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x244e60
unsigned int Object_Initialize(HH_Object_Blood_FootMark_00* pThis)
{
	unsigned int result;
	// Line 182, Address: 0x244e60, Func Offset: 0
	// Line 183, Address: 0x244e70, Func Offset: 0x10
	// Line 186, Address: 0x244e74, Func Offset: 0x14
	// Line 187, Address: 0x244e80, Func Offset: 0x20
	// Line 189, Address: 0x244e9c, Func Offset: 0x3c
	// Line 190, Address: 0x244ea0, Func Offset: 0x40
	// Func End, Address: 0x244eb4, Func Offset: 0x54
}

// 
// Start address: 0x244ec0
unsigned int Object_Draw(HH_Object_Blood_FootMark_00* pThis, ImpactQueue_Element* pElement)
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
	float Rgba[4];
	float pStq[4];
	float pRgba[4];
	float pVertex[4];
	Vertex_Infomeation_List* pInfo;
	_anon0* pPk;
	unsigned int result;
	// Line 205, Address: 0x244ec0, Func Offset: 0
	// Line 206, Address: 0x244ef4, Func Offset: 0x34
	// Line 207, Address: 0x244ef8, Func Offset: 0x38
	// Line 208, Address: 0x244f04, Func Offset: 0x44
	// Line 209, Address: 0x244f28, Func Offset: 0x68
	// Line 210, Address: 0x244f34, Func Offset: 0x74
	// Line 211, Address: 0x244f40, Func Offset: 0x80
	// Line 213, Address: 0x244f60, Func Offset: 0xa0
	// Line 214, Address: 0x244f6c, Func Offset: 0xac
	// Line 219, Address: 0x244f78, Func Offset: 0xb8
	// Line 220, Address: 0x244f88, Func Offset: 0xc8
	// Line 225, Address: 0x244f9c, Func Offset: 0xdc
	// Line 227, Address: 0x244fa8, Func Offset: 0xe8
	// Line 228, Address: 0x244fb4, Func Offset: 0xf4
	// Line 230, Address: 0x244fcc, Func Offset: 0x10c
	// Line 231, Address: 0x244fe4, Func Offset: 0x124
	// Line 234, Address: 0x244ff8, Func Offset: 0x138
	// Line 235, Address: 0x245004, Func Offset: 0x144
	// Line 238, Address: 0x245018, Func Offset: 0x158
	// Line 257, Address: 0x245020, Func Offset: 0x160
	// Line 261, Address: 0x24503c, Func Offset: 0x17c
	// Line 262, Address: 0x245050, Func Offset: 0x190
	// Line 264, Address: 0x245064, Func Offset: 0x1a4
	// Line 277, Address: 0x24508c, Func Offset: 0x1cc
	// Line 281, Address: 0x245098, Func Offset: 0x1d8
	// Line 283, Address: 0x24509c, Func Offset: 0x1dc
	// Line 284, Address: 0x2450c8, Func Offset: 0x208
	// Line 285, Address: 0x2450cc, Func Offset: 0x20c
	// Line 286, Address: 0x2450d0, Func Offset: 0x210
	// Line 287, Address: 0x2450e0, Func Offset: 0x220
	// Line 288, Address: 0x24515c, Func Offset: 0x29c
	// Line 289, Address: 0x2451d0, Func Offset: 0x310
	// Line 290, Address: 0x24522c, Func Offset: 0x36c
	// Line 294, Address: 0x245240, Func Offset: 0x380
	// Line 296, Address: 0x245248, Func Offset: 0x388
	// Line 297, Address: 0x24524c, Func Offset: 0x38c
	// Func End, Address: 0x245280, Func Offset: 0x3c0
}

// 
// Start address: 0x245280
unsigned int HH_Class_Blood_FootMark_00(void* pBlock, ImpactQueue_Element* pElement)
{
	HH_Object_Blood_FootMark_00* pThis;
	unsigned int result;
	// Line 316, Address: 0x245280, Func Offset: 0
	// Line 323, Address: 0x245298, Func Offset: 0x18
	// Line 324, Address: 0x24529c, Func Offset: 0x1c
	// Line 326, Address: 0x2452a0, Func Offset: 0x20
	// Line 329, Address: 0x2452d0, Func Offset: 0x50
	// Line 330, Address: 0x2452e0, Func Offset: 0x60
	// Line 331, Address: 0x2452e8, Func Offset: 0x68
	// Line 334, Address: 0x2452f0, Func Offset: 0x70
	// Line 336, Address: 0x245300, Func Offset: 0x80
	// Line 338, Address: 0x24531c, Func Offset: 0x9c
	// Line 340, Address: 0x24533c, Func Offset: 0xbc
	// Line 341, Address: 0x24535c, Func Offset: 0xdc
	// Line 342, Address: 0x24537c, Func Offset: 0xfc
	// Line 343, Address: 0x245388, Func Offset: 0x108
	// Line 346, Address: 0x245390, Func Offset: 0x110
	// Line 349, Address: 0x245398, Func Offset: 0x118
	// Line 350, Address: 0x24539c, Func Offset: 0x11c
	// Line 353, Address: 0x2453a0, Func Offset: 0x120
	// Line 354, Address: 0x2453a4, Func Offset: 0x124
	// Func End, Address: 0x2453bc, Func Offset: 0x13c
}

