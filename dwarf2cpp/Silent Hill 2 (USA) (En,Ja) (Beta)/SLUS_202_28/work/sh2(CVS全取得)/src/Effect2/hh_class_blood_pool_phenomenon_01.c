typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_Element;
typedef struct ImpactQueue_ElementOption;
typedef struct HH_Object_Blood_Pool_Phenomenon_01;


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

struct HH_Object_Blood_Pool_Phenomenon_01
{
	Object_DataBlock_Header Header;
	unsigned int Step;
	float Alpha;
	float Timer;
};

float _elastic_vec[4];

unsigned int Object_Initialize(HH_Object_Blood_Pool_Phenomenon_01* pThis, ImpactQueue_Element* pElement);
unsigned int HH_Class_Blood_Pool_Phenomenon_01(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x291df0
unsigned int Object_Initialize(HH_Object_Blood_Pool_Phenomenon_01* pThis, ImpactQueue_Element* pElement)
{
	float* src_direction;
	float alpha;
	float p_volume;
	float p_y;
	unsigned int result;
	// Line 117, Address: 0x291df0, Func Offset: 0
	// Line 122, Address: 0x291e04, Func Offset: 0x14
	// Line 129, Address: 0x291e08, Func Offset: 0x18
	// Line 132, Address: 0x291e0c, Func Offset: 0x1c
	// Line 134, Address: 0x291e1c, Func Offset: 0x2c
	// Line 135, Address: 0x291e28, Func Offset: 0x38
	// Line 136, Address: 0x291e2c, Func Offset: 0x3c
	// Line 138, Address: 0x291e48, Func Offset: 0x58
	// Line 139, Address: 0x291e60, Func Offset: 0x70
	// Line 142, Address: 0x291e64, Func Offset: 0x74
	// Line 145, Address: 0x291e78, Func Offset: 0x88
	// Line 146, Address: 0x291e7c, Func Offset: 0x8c
	// Func End, Address: 0x291e94, Func Offset: 0xa4
}

// 
// Start address: 0x291ea0
unsigned int HH_Class_Blood_Pool_Phenomenon_01(void* pBlock, ImpactQueue_Element* pElement)
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
	HH_Object_Blood_Pool_Phenomenon_01* pThis;
	unsigned int result;
	// Line 165, Address: 0x291ea0, Func Offset: 0
	// Line 172, Address: 0x291ecc, Func Offset: 0x2c
	// Line 173, Address: 0x291ed0, Func Offset: 0x30
	// Line 175, Address: 0x291ed4, Func Offset: 0x34
	// Line 177, Address: 0x291efc, Func Offset: 0x5c
	// Line 178, Address: 0x291f04, Func Offset: 0x64
	// Line 179, Address: 0x291f0c, Func Offset: 0x6c
	// Line 185, Address: 0x291f14, Func Offset: 0x74
	// Line 187, Address: 0x291f18, Func Offset: 0x78
	// Line 190, Address: 0x291f28, Func Offset: 0x88
	// Line 193, Address: 0x291f38, Func Offset: 0x98
	// Line 194, Address: 0x291f44, Func Offset: 0xa4
	// Line 195, Address: 0x292038, Func Offset: 0x198
	// Line 196, Address: 0x292088, Func Offset: 0x1e8
	// Line 197, Address: 0x2920c0, Func Offset: 0x220
	// Line 203, Address: 0x292180, Func Offset: 0x2e0
	// Line 205, Address: 0x292194, Func Offset: 0x2f4
	// Line 206, Address: 0x292198, Func Offset: 0x2f8
	// Line 207, Address: 0x2921a4, Func Offset: 0x304
	// Line 208, Address: 0x2921b8, Func Offset: 0x318
	// Line 209, Address: 0x2921cc, Func Offset: 0x32c
	// Line 212, Address: 0x2921e0, Func Offset: 0x340
	// Line 214, Address: 0x2921f4, Func Offset: 0x354
	// Line 215, Address: 0x2921f8, Func Offset: 0x358
	// Line 216, Address: 0x2922b8, Func Offset: 0x418
	// Line 217, Address: 0x2922c4, Func Offset: 0x424
	// Line 218, Address: 0x2922d8, Func Offset: 0x438
	// Line 219, Address: 0x2922ec, Func Offset: 0x44c
	// Line 221, Address: 0x292300, Func Offset: 0x460
	// Line 222, Address: 0x292304, Func Offset: 0x464
	// Line 223, Address: 0x292308, Func Offset: 0x468
	// Line 224, Address: 0x292310, Func Offset: 0x470
	// Line 225, Address: 0x29231c, Func Offset: 0x47c
	// Line 227, Address: 0x29232c, Func Offset: 0x48c
	// Line 228, Address: 0x292334, Func Offset: 0x494
	// Line 231, Address: 0x29233c, Func Offset: 0x49c
	// Line 232, Address: 0x292340, Func Offset: 0x4a0
	// Line 235, Address: 0x292344, Func Offset: 0x4a4
	// Line 236, Address: 0x292360, Func Offset: 0x4c0
	// Line 237, Address: 0x292364, Func Offset: 0x4c4
	// Func End, Address: 0x292394, Func Offset: 0x4f4
}

