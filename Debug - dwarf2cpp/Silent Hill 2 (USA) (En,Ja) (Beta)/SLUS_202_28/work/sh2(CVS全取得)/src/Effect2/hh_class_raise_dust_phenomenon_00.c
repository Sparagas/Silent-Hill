typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_Element;
typedef struct ImpactQueue_ElementOption;
typedef struct HH_Object_Raise_Dust_Phenomenon_00;


typedef float type_0[4][2];
typedef float type_1[2];
typedef int type_2[2];
typedef float type_3[4];
typedef unsigned int type_4[1];
typedef float type_5[4];
typedef float type_6[4][4];

struct Object_DataBlock_Header
{
	unsigned int Enable;
	Object_DataBlock_Header* pNext;
};

struct ImpactQueue_Element
{
	unsigned int Class_Descriptor;
	unsigned int hInstance;
	unsigned int* pResultHandle_Address;
	unsigned int Reserved[1];
	ImpactQueue_ElementOption Option;
};

struct ImpactQueue_ElementOption
{
	float Vector[4][2];
	float Float_Value[2];
	int Int_Value[2];
};

struct HH_Object_Raise_Dust_Phenomenon_00
{
	Object_DataBlock_Header Header;
	unsigned int Step;
	float Alpha;
	float Timer;
};

float _elastic_vec[4];

unsigned int Object_Initialize(HH_Object_Raise_Dust_Phenomenon_00* pThis, ImpactQueue_Element* pElement);
unsigned int HH_Class_Raise_Dust_Phenomenon_00(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x25b230
unsigned int Object_Initialize(HH_Object_Raise_Dust_Phenomenon_00* pThis, ImpactQueue_Element* pElement)
{
	float* src_direction;
	float alpha;
	float p_volume;
	float p_y;
	unsigned int result;
	// Line 118, Address: 0x25b230, Func Offset: 0
	// Line 123, Address: 0x25b244, Func Offset: 0x14
	// Line 130, Address: 0x25b248, Func Offset: 0x18
	// Line 133, Address: 0x25b24c, Func Offset: 0x1c
	// Line 135, Address: 0x25b25c, Func Offset: 0x2c
	// Line 136, Address: 0x25b268, Func Offset: 0x38
	// Line 137, Address: 0x25b26c, Func Offset: 0x3c
	// Line 139, Address: 0x25b288, Func Offset: 0x58
	// Line 140, Address: 0x25b2a0, Func Offset: 0x70
	// Line 143, Address: 0x25b2a4, Func Offset: 0x74
	// Line 146, Address: 0x25b2b8, Func Offset: 0x88
	// Line 147, Address: 0x25b2bc, Func Offset: 0x8c
	// Func End, Address: 0x25b2d4, Func Offset: 0xa4
}

// 
// Start address: 0x25b2e0
unsigned int HH_Class_Raise_Dust_Phenomenon_00(void* pBlock, ImpactQueue_Element* pElement)
{
	float vec[4];
	float vec[4];
	ImpactQueue_Element descriptor;
	float lwm[4][4];
	float alpha;
	float radius_rand;
	float alpha_randam_range;
	float radian;
	float p_volume;
	float* src_location;
	float* src_direction;
	unsigned int i;
	HH_Object_Raise_Dust_Phenomenon_00* pThis;
	unsigned int result;
	// Line 166, Address: 0x25b2e0, Func Offset: 0
	// Line 173, Address: 0x25b30c, Func Offset: 0x2c
	// Line 174, Address: 0x25b310, Func Offset: 0x30
	// Line 176, Address: 0x25b314, Func Offset: 0x34
	// Line 178, Address: 0x25b33c, Func Offset: 0x5c
	// Line 179, Address: 0x25b344, Func Offset: 0x64
	// Line 180, Address: 0x25b34c, Func Offset: 0x6c
	// Line 186, Address: 0x25b354, Func Offset: 0x74
	// Line 188, Address: 0x25b358, Func Offset: 0x78
	// Line 191, Address: 0x25b368, Func Offset: 0x88
	// Line 194, Address: 0x25b378, Func Offset: 0x98
	// Line 195, Address: 0x25b384, Func Offset: 0xa4
	// Line 196, Address: 0x25b478, Func Offset: 0x198
	// Line 197, Address: 0x25b4c8, Func Offset: 0x1e8
	// Line 198, Address: 0x25b500, Func Offset: 0x220
	// Line 204, Address: 0x25b5c0, Func Offset: 0x2e0
	// Line 206, Address: 0x25b5d4, Func Offset: 0x2f4
	// Line 207, Address: 0x25b5d8, Func Offset: 0x2f8
	// Line 208, Address: 0x25b5e4, Func Offset: 0x304
	// Line 209, Address: 0x25b5f8, Func Offset: 0x318
	// Line 210, Address: 0x25b60c, Func Offset: 0x32c
	// Line 213, Address: 0x25b620, Func Offset: 0x340
	// Line 215, Address: 0x25b634, Func Offset: 0x354
	// Line 216, Address: 0x25b638, Func Offset: 0x358
	// Line 217, Address: 0x25b6f8, Func Offset: 0x418
	// Line 218, Address: 0x25b704, Func Offset: 0x424
	// Line 219, Address: 0x25b718, Func Offset: 0x438
	// Line 220, Address: 0x25b72c, Func Offset: 0x44c
	// Line 222, Address: 0x25b740, Func Offset: 0x460
	// Line 223, Address: 0x25b744, Func Offset: 0x464
	// Line 224, Address: 0x25b748, Func Offset: 0x468
	// Line 225, Address: 0x25b750, Func Offset: 0x470
	// Line 226, Address: 0x25b75c, Func Offset: 0x47c
	// Line 228, Address: 0x25b76c, Func Offset: 0x48c
	// Line 229, Address: 0x25b774, Func Offset: 0x494
	// Line 232, Address: 0x25b77c, Func Offset: 0x49c
	// Line 233, Address: 0x25b780, Func Offset: 0x4a0
	// Line 236, Address: 0x25b784, Func Offset: 0x4a4
	// Line 237, Address: 0x25b7a0, Func Offset: 0x4c0
	// Line 238, Address: 0x25b7a4, Func Offset: 0x4c4
	// Func End, Address: 0x25b7d4, Func Offset: 0x4f4
}

