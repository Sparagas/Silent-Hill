typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_Element;
typedef struct ImpactQueue_ElementOption;
typedef struct HH_Object_Water_Splash_Phenomenon_00;


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

struct HH_Object_Water_Splash_Phenomenon_00
{
	Object_DataBlock_Header Header;
	unsigned int Step;
	float Alpha;
	float Timer;
};

float _elastic_vec[4];

unsigned int Object_Initialize(HH_Object_Water_Splash_Phenomenon_00* pThis, ImpactQueue_Element* pElement);
unsigned int HH_Class_Water_Splash_Phenomenon_00(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x268ad0
unsigned int Object_Initialize(HH_Object_Water_Splash_Phenomenon_00* pThis, ImpactQueue_Element* pElement)
{
	float* src_direction;
	float alpha;
	float p_volume;
	float p_y;
	unsigned int result;
	// Line 117, Address: 0x268ad0, Func Offset: 0
	// Line 122, Address: 0x268ae4, Func Offset: 0x14
	// Line 129, Address: 0x268ae8, Func Offset: 0x18
	// Line 132, Address: 0x268aec, Func Offset: 0x1c
	// Line 133, Address: 0x268afc, Func Offset: 0x2c
	// Line 134, Address: 0x268b08, Func Offset: 0x38
	// Line 135, Address: 0x268b0c, Func Offset: 0x3c
	// Line 137, Address: 0x268b28, Func Offset: 0x58
	// Line 138, Address: 0x268b40, Func Offset: 0x70
	// Line 141, Address: 0x268b44, Func Offset: 0x74
	// Line 144, Address: 0x268b58, Func Offset: 0x88
	// Line 145, Address: 0x268b5c, Func Offset: 0x8c
	// Func End, Address: 0x268b74, Func Offset: 0xa4
}

// 
// Start address: 0x268b80
unsigned int HH_Class_Water_Splash_Phenomenon_00(void* pBlock, ImpactQueue_Element* pElement)
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
	HH_Object_Water_Splash_Phenomenon_00* pThis;
	unsigned int result;
	// Line 164, Address: 0x268b80, Func Offset: 0
	// Line 171, Address: 0x268bac, Func Offset: 0x2c
	// Line 172, Address: 0x268bb0, Func Offset: 0x30
	// Line 174, Address: 0x268bb4, Func Offset: 0x34
	// Line 176, Address: 0x268bdc, Func Offset: 0x5c
	// Line 177, Address: 0x268be4, Func Offset: 0x64
	// Line 178, Address: 0x268bec, Func Offset: 0x6c
	// Line 184, Address: 0x268bf4, Func Offset: 0x74
	// Line 186, Address: 0x268bf8, Func Offset: 0x78
	// Line 188, Address: 0x268c08, Func Offset: 0x88
	// Line 191, Address: 0x268c18, Func Offset: 0x98
	// Line 192, Address: 0x268c24, Func Offset: 0xa4
	// Line 193, Address: 0x268d18, Func Offset: 0x198
	// Line 194, Address: 0x268d68, Func Offset: 0x1e8
	// Line 195, Address: 0x268da0, Func Offset: 0x220
	// Line 202, Address: 0x268e60, Func Offset: 0x2e0
	// Line 204, Address: 0x268e74, Func Offset: 0x2f4
	// Line 205, Address: 0x268e78, Func Offset: 0x2f8
	// Line 206, Address: 0x268e84, Func Offset: 0x304
	// Line 207, Address: 0x268e98, Func Offset: 0x318
	// Line 208, Address: 0x268eac, Func Offset: 0x32c
	// Line 211, Address: 0x268ec0, Func Offset: 0x340
	// Line 213, Address: 0x268ed4, Func Offset: 0x354
	// Line 214, Address: 0x268ed8, Func Offset: 0x358
	// Line 215, Address: 0x268f98, Func Offset: 0x418
	// Line 216, Address: 0x268fa4, Func Offset: 0x424
	// Line 217, Address: 0x268fb8, Func Offset: 0x438
	// Line 218, Address: 0x268fcc, Func Offset: 0x44c
	// Line 220, Address: 0x268fe0, Func Offset: 0x460
	// Line 221, Address: 0x268fe4, Func Offset: 0x464
	// Line 222, Address: 0x268fe8, Func Offset: 0x468
	// Line 223, Address: 0x268ff0, Func Offset: 0x470
	// Line 224, Address: 0x268ff8, Func Offset: 0x478
	// Line 225, Address: 0x269000, Func Offset: 0x480
	// Line 226, Address: 0x26900c, Func Offset: 0x48c
	// Line 228, Address: 0x26901c, Func Offset: 0x49c
	// Line 229, Address: 0x269024, Func Offset: 0x4a4
	// Line 232, Address: 0x26902c, Func Offset: 0x4ac
	// Line 233, Address: 0x269030, Func Offset: 0x4b0
	// Line 236, Address: 0x269034, Func Offset: 0x4b4
	// Line 237, Address: 0x269050, Func Offset: 0x4d0
	// Line 238, Address: 0x269054, Func Offset: 0x4d4
	// Func End, Address: 0x269084, Func Offset: 0x504
}

