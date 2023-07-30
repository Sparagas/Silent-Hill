typedef struct TimeTable_Infomeation;
typedef struct ImpactQueue_Element;
typedef struct HH_Object_Blood_Pool_Phenomenon_00;
typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_ElementOption;


typedef float type_0[2];
typedef int type_1[2];
typedef float type_2[3];
typedef TimeTable_Infomeation type_3[5];
typedef float type_4[4];
typedef float type_5[4];
typedef float type_6[4][4];
typedef float type_7[4][2];

struct TimeTable_Infomeation
{
	float Time[3];
};

struct ImpactQueue_Element
{
	unsigned int Class_Descriptor;
	unsigned int hInstance;
	ImpactQueue_ElementOption Option;
};

struct HH_Object_Blood_Pool_Phenomenon_00
{
	Object_DataBlock_Header Header;
	unsigned int Step;
	float Timer;
	unsigned short Time_Table_Index;
	unsigned short Post_Count;
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

TimeTable_Infomeation _Time_Table[5];

unsigned int Object_Initialize(HH_Object_Blood_Pool_Phenomenon_00* pThis);
unsigned int HH_Class_Blood_Pool_Phenomenon_00(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x2453c0
unsigned int Object_Initialize(HH_Object_Blood_Pool_Phenomenon_00* pThis)
{
	unsigned int result;
	// Line 115, Address: 0x2453c0, Func Offset: 0
	// Line 116, Address: 0x2453d0, Func Offset: 0x10
	// Line 120, Address: 0x2453d4, Func Offset: 0x14
	// Line 122, Address: 0x2453e0, Func Offset: 0x20
	// Line 124, Address: 0x245408, Func Offset: 0x48
	// Line 126, Address: 0x245410, Func Offset: 0x50
	// Line 127, Address: 0x245414, Func Offset: 0x54
	// Func End, Address: 0x245428, Func Offset: 0x68
}

// 
// Start address: 0x245430
unsigned int HH_Class_Blood_Pool_Phenomenon_00(void* pBlock, ImpactQueue_Element* pElement)
{
	ImpactQueue_Element descriptor;
	float lwm[4][4];
	float vec[4];
	float radius_rand;
	float radian;
	HH_Object_Blood_Pool_Phenomenon_00* pThis;
	unsigned int result;
	// Line 146, Address: 0x245430, Func Offset: 0
	// Line 153, Address: 0x245448, Func Offset: 0x18
	// Line 154, Address: 0x24544c, Func Offset: 0x1c
	// Line 156, Address: 0x245450, Func Offset: 0x20
	// Line 158, Address: 0x24547c, Func Offset: 0x4c
	// Line 159, Address: 0x24548c, Func Offset: 0x5c
	// Line 160, Address: 0x245494, Func Offset: 0x64
	// Line 163, Address: 0x24549c, Func Offset: 0x6c
	// Line 164, Address: 0x2454e4, Func Offset: 0xb4
	// Line 165, Address: 0x24561c, Func Offset: 0x1ec
	// Line 166, Address: 0x245658, Func Offset: 0x228
	// Line 172, Address: 0x24566c, Func Offset: 0x23c
	// Line 174, Address: 0x245674, Func Offset: 0x244
	// Line 175, Address: 0x245680, Func Offset: 0x250
	// Line 176, Address: 0x245694, Func Offset: 0x264
	// Line 177, Address: 0x2456ac, Func Offset: 0x27c
	// Line 180, Address: 0x2456c0, Func Offset: 0x290
	// Line 181, Address: 0x2456c4, Func Offset: 0x294
	// Line 182, Address: 0x2456cc, Func Offset: 0x29c
	// Line 186, Address: 0x2456d8, Func Offset: 0x2a8
	// Line 187, Address: 0x2456e4, Func Offset: 0x2b4
	// Line 188, Address: 0x2456f8, Func Offset: 0x2c8
	// Line 191, Address: 0x245704, Func Offset: 0x2d4
	// Line 194, Address: 0x24570c, Func Offset: 0x2dc
	// Line 195, Address: 0x245710, Func Offset: 0x2e0
	// Line 198, Address: 0x245714, Func Offset: 0x2e4
	// Line 199, Address: 0x245730, Func Offset: 0x300
	// Line 200, Address: 0x245734, Func Offset: 0x304
	// Func End, Address: 0x24574c, Func Offset: 0x31c
}

