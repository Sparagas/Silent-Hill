typedef struct HH_Object_Blood_FootMark_00;
typedef struct ImpactQueue_Element;
typedef struct Vertex_Infomeation_List;
typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_ElementOption;
typedef struct _anon0;


typedef float type_0[4][4];
typedef float type_1[4][4];
typedef float type_2[4];
typedef float type_3[4][2];
typedef float type_4[4][4];
typedef float type_5[4][2];
typedef float type_6[2];
typedef int type_7[2];
typedef int type_8[4];
typedef unsigned int type_9[1];
typedef float type_10[4];
typedef float type_11[4][4];
typedef float type_12[4][4];
typedef Vertex_Infomeation_List type_13[2];
typedef float type_14[4][2];
typedef float type_15[4][4];
typedef float type_16[4][4];

struct HH_Object_Blood_FootMark_00
{
	Object_DataBlock_Header Header;
	float Timer;
	unsigned short Step;
	unsigned short Vertex_Kind;
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
	float pRgba_List[4];
	float pStq_List[4];
	unsigned int Vertex_Max;
	unsigned int Primitive_Type;
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
unsigned int HH_Class_Prefix_Blood_FootMark_00();
unsigned int HH_Class_Suffix_Blood_FootMark_00();
unsigned int HH_Class_Blood_FootMark_00(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x255be0
unsigned int Object_Initialize(HH_Object_Blood_FootMark_00* pThis)
{
	unsigned int result;
	// Line 187, Address: 0x255be0, Func Offset: 0
	// Line 191, Address: 0x255bf0, Func Offset: 0x10
	// Line 192, Address: 0x255bf4, Func Offset: 0x14
	// Line 194, Address: 0x255c08, Func Offset: 0x28
	// Line 195, Address: 0x255c0c, Func Offset: 0x2c
	// Func End, Address: 0x255c20, Func Offset: 0x40
}

// 
// Start address: 0x255c20
unsigned int Object_Draw(HH_Object_Blood_FootMark_00* pThis, ImpactQueue_Element* pElement)
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
	float pRgba[4];
	float pVertex[4];
	Vertex_Infomeation_List* pInfo;
	_anon0* pPk;
	unsigned int result;
	// Line 209, Address: 0x255c20, Func Offset: 0
	// Line 211, Address: 0x255c4c, Func Offset: 0x2c
	// Line 212, Address: 0x255c58, Func Offset: 0x38
	// Line 213, Address: 0x255c74, Func Offset: 0x54
	// Line 214, Address: 0x255c78, Func Offset: 0x58
	// Line 215, Address: 0x255c7c, Func Offset: 0x5c
	// Line 216, Address: 0x255c90, Func Offset: 0x70
	// Line 223, Address: 0x255c94, Func Offset: 0x74
	// Line 224, Address: 0x255ca0, Func Offset: 0x80
	// Line 229, Address: 0x255cb0, Func Offset: 0x90
	// Line 231, Address: 0x255cbc, Func Offset: 0x9c
	// Line 232, Address: 0x255cc8, Func Offset: 0xa8
	// Line 234, Address: 0x255cdc, Func Offset: 0xbc
	// Line 235, Address: 0x255cf0, Func Offset: 0xd0
	// Line 238, Address: 0x255d04, Func Offset: 0xe4
	// Line 239, Address: 0x255d10, Func Offset: 0xf0
	// Line 242, Address: 0x255d24, Func Offset: 0x104
	// Line 243, Address: 0x255d2c, Func Offset: 0x10c
	// Line 245, Address: 0x255d34, Func Offset: 0x114
	// Line 246, Address: 0x255d40, Func Offset: 0x120
	// Line 247, Address: 0x255d54, Func Offset: 0x134
	// Line 252, Address: 0x255d70, Func Offset: 0x150
	// Line 253, Address: 0x255d78, Func Offset: 0x158
	// Line 255, Address: 0x255d98, Func Offset: 0x178
	// Line 256, Address: 0x255dc0, Func Offset: 0x1a0
	// Line 257, Address: 0x255dd0, Func Offset: 0x1b0
	// Line 259, Address: 0x255de0, Func Offset: 0x1c0
	// Line 260, Address: 0x255dec, Func Offset: 0x1cc
	// Line 261, Address: 0x255dfc, Func Offset: 0x1dc
	// Line 262, Address: 0x255e0c, Func Offset: 0x1ec
	// Line 263, Address: 0x255e1c, Func Offset: 0x1fc
	// Line 264, Address: 0x255e28, Func Offset: 0x208
	// Line 265, Address: 0x255e3c, Func Offset: 0x21c
	// Line 266, Address: 0x255e48, Func Offset: 0x228
	// Line 268, Address: 0x255e50, Func Offset: 0x230
	// Line 269, Address: 0x255e54, Func Offset: 0x234
	// Func End, Address: 0x255e80, Func Offset: 0x260
}

// 
// Start address: 0x255e80
unsigned int HH_Class_Prefix_Blood_FootMark_00()
{
	unsigned long tex0;
	_anon0* pPk;
	unsigned int result;
	// Line 288, Address: 0x255e80, Func Offset: 0
	// Line 290, Address: 0x255e8c, Func Offset: 0xc
	// Line 293, Address: 0x255e98, Func Offset: 0x18
	// Line 295, Address: 0x255ea0, Func Offset: 0x20
	// Line 296, Address: 0x255eb0, Func Offset: 0x30
	// Line 298, Address: 0x255ec4, Func Offset: 0x44
	// Line 299, Address: 0x255ee0, Func Offset: 0x60
	// Line 300, Address: 0x255eec, Func Offset: 0x6c
	// Line 302, Address: 0x255ef4, Func Offset: 0x74
	// Line 303, Address: 0x255ef8, Func Offset: 0x78
	// Func End, Address: 0x255f0c, Func Offset: 0x8c
}

// 
// Start address: 0x255f10
unsigned int HH_Class_Suffix_Blood_FootMark_00()
{
	unsigned int result;
	// Line 316, Address: 0x255f10, Func Offset: 0
	// Line 319, Address: 0x255f18, Func Offset: 0x8
	// Line 321, Address: 0x255f20, Func Offset: 0x10
	// Line 322, Address: 0x255f24, Func Offset: 0x14
	// Func End, Address: 0x255f34, Func Offset: 0x24
}

// 
// Start address: 0x255f40
unsigned int HH_Class_Blood_FootMark_00(void* pBlock, ImpactQueue_Element* pElement)
{
	HH_Object_Blood_FootMark_00* pThis;
	unsigned int result;
	// Line 335, Address: 0x255f40, Func Offset: 0
	// Line 342, Address: 0x255f58, Func Offset: 0x18
	// Line 343, Address: 0x255f5c, Func Offset: 0x1c
	// Line 345, Address: 0x255f60, Func Offset: 0x20
	// Line 348, Address: 0x255f88, Func Offset: 0x48
	// Line 349, Address: 0x255f90, Func Offset: 0x50
	// Line 350, Address: 0x255f98, Func Offset: 0x58
	// Line 353, Address: 0x255fa0, Func Offset: 0x60
	// Line 355, Address: 0x255fa8, Func Offset: 0x68
	// Line 357, Address: 0x255fc4, Func Offset: 0x84
	// Line 359, Address: 0x255fe0, Func Offset: 0xa0
	// Line 360, Address: 0x255ffc, Func Offset: 0xbc
	// Line 361, Address: 0x256014, Func Offset: 0xd4
	// Line 362, Address: 0x256018, Func Offset: 0xd8
	// Line 365, Address: 0x256020, Func Offset: 0xe0
	// Line 368, Address: 0x256028, Func Offset: 0xe8
	// Line 369, Address: 0x25602c, Func Offset: 0xec
	// Line 372, Address: 0x256030, Func Offset: 0xf0
	// Line 373, Address: 0x256034, Func Offset: 0xf4
	// Func End, Address: 0x256050, Func Offset: 0x110
}

