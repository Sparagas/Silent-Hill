typedef struct TimeTable_Infomeation;
typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_ElementOption;
typedef struct HH_Object_Blood_Pool_Phenomenon_00;
typedef struct ImpactQueue_Element;


typedef float type_0[3];
typedef TimeTable_Infomeation type_1[5];
typedef float type_2[4][2];
typedef float type_3[2];
typedef int type_4[2];
typedef float type_5[4];
typedef unsigned int type_6[1];
typedef float type_7[4];
typedef float type_8[4][4];

struct TimeTable_Infomeation
{
	float Time[3];
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

struct HH_Object_Blood_Pool_Phenomenon_00
{
	Object_DataBlock_Header Header;
	unsigned int Step;
	float Timer;
	unsigned short Time_Table_Index;
	unsigned short Post_Count;
};

struct ImpactQueue_Element
{
	unsigned int Class_Descriptor;
	unsigned int hInstance;
	unsigned int* pResultHandle_Address;
	unsigned int Reserved[1];
	ImpactQueue_ElementOption Option;
};

TimeTable_Infomeation _Time_Table[5];

unsigned int Object_Initialize(HH_Object_Blood_Pool_Phenomenon_00* pThis);
unsigned int HH_Class_Blood_Pool_Phenomenon_00(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x256050
unsigned int Object_Initialize(HH_Object_Blood_Pool_Phenomenon_00* pThis)
{
	unsigned int result;
	// Line 118, Address: 0x256050, Func Offset: 0
	// Line 123, Address: 0x256060, Func Offset: 0x10
	// Line 125, Address: 0x256064, Func Offset: 0x14
	// Line 127, Address: 0x256084, Func Offset: 0x34
	// Line 129, Address: 0x256088, Func Offset: 0x38
	// Line 130, Address: 0x25608c, Func Offset: 0x3c
	// Func End, Address: 0x2560a0, Func Offset: 0x50
}

// 
// Start address: 0x2560a0
unsigned int HH_Class_Blood_Pool_Phenomenon_00(void* pBlock, ImpactQueue_Element* pElement)
{
	ImpactQueue_Element descriptor;
	float lwm[4][4];
	float vec[4];
	float radius_rand;
	float radian;
	HH_Object_Blood_Pool_Phenomenon_00* pThis;
	unsigned int result;
	// Line 149, Address: 0x2560a0, Func Offset: 0
	// Line 156, Address: 0x2560bc, Func Offset: 0x1c
	// Line 157, Address: 0x2560c0, Func Offset: 0x20
	// Line 159, Address: 0x2560c4, Func Offset: 0x24
	// Line 161, Address: 0x2560ec, Func Offset: 0x4c
	// Line 162, Address: 0x2560f4, Func Offset: 0x54
	// Line 163, Address: 0x2560fc, Func Offset: 0x5c
	// Line 166, Address: 0x256104, Func Offset: 0x64
	// Line 167, Address: 0x256144, Func Offset: 0xa4
	// Line 168, Address: 0x256238, Func Offset: 0x198
	// Line 169, Address: 0x256270, Func Offset: 0x1d0
	// Line 175, Address: 0x256284, Func Offset: 0x1e4
	// Line 177, Address: 0x256288, Func Offset: 0x1e8
	// Line 178, Address: 0x256294, Func Offset: 0x1f4
	// Line 179, Address: 0x2562a8, Func Offset: 0x208
	// Line 180, Address: 0x2562bc, Func Offset: 0x21c
	// Line 182, Address: 0x2562d0, Func Offset: 0x230
	// Line 183, Address: 0x2562d4, Func Offset: 0x234
	// Line 184, Address: 0x2562d8, Func Offset: 0x238
	// Line 186, Address: 0x2562e0, Func Offset: 0x240
	// Line 188, Address: 0x2562e8, Func Offset: 0x248
	// Line 190, Address: 0x2562ec, Func Offset: 0x24c
	// Line 194, Address: 0x2562f8, Func Offset: 0x258
	// Line 195, Address: 0x256304, Func Offset: 0x264
	// Line 196, Address: 0x256314, Func Offset: 0x274
	// Line 199, Address: 0x256320, Func Offset: 0x280
	// Line 202, Address: 0x256328, Func Offset: 0x288
	// Line 203, Address: 0x25632c, Func Offset: 0x28c
	// Line 206, Address: 0x256330, Func Offset: 0x290
	// Line 207, Address: 0x25634c, Func Offset: 0x2ac
	// Line 208, Address: 0x256350, Func Offset: 0x2b0
	// Func End, Address: 0x256370, Func Offset: 0x2d0
}

