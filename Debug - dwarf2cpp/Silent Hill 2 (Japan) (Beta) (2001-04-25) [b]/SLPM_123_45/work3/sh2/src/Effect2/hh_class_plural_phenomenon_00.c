typedef struct ImpactQueue_Element;
typedef struct HH_Object_Plural_Phenomenon_00;
typedef struct ImpactQueue_Object;
typedef struct Object_Group_Infomeation;
typedef struct Object_DataPool_Infomeation;
typedef struct Object_Class_Association_Infomeation;
typedef struct Object_Instance;
typedef struct Object_InstanceTable_Infomeation;
typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_ElementOption;

typedef unsigned int(*type_2)(void*, ImpactQueue_Element*);

typedef float type_0[2];
typedef int type_1[2];
typedef float type_3[4];
typedef float type_4[4][2];

struct ImpactQueue_Element
{
	unsigned int Class_Descriptor;
	unsigned int hInstance;
	ImpactQueue_ElementOption Option;
};

struct HH_Object_Plural_Phenomenon_00
{
	Object_DataBlock_Header Header;
	unsigned int Step;
	float Timer;
};

struct ImpactQueue_Object
{
	unsigned int enQueue;
	unsigned int deQueue;
	unsigned int Length_Current;
	unsigned int Length_Max;
	ImpactQueue_Element* pElement;
};

struct Object_Group_Infomeation
{
	Object_Class_Association_Infomeation Association_Info;
	Object_InstanceTable_Infomeation InstanceTable_Info;
	ImpactQueue_Object Queue_Info;
	unsigned int Enable;
	unsigned int Step;
};

struct Object_DataPool_Infomeation
{
	unsigned int Block_Size;
	unsigned int Block_Index_Max;
	void* pBlock_Table;
};

struct Object_Class_Association_Infomeation
{
	unsigned int Class_Max;
	unsigned int(*pClass)(void*, ImpactQueue_Element*);
	Object_DataPool_Infomeation* pDataPool_Info;
};

struct Object_Instance
{
	unsigned int Enable;
	unsigned int hInstance;
	ImpactQueue_Element Element;
	void* pBlock;
	float Timer;
};

struct Object_InstanceTable_Infomeation
{
	unsigned int hInstance_History;
	unsigned int Instance_Max;
	Object_Instance* pInstanceTable;
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


unsigned int Object_Initialize(HH_Object_Plural_Phenomenon_00* pThis);
unsigned int ObjectInstance_BLOOD_STICK_00_Search_and_Post(ImpactQueue_Element* pElement, unsigned int Count_Max, float Set_Parameter);
unsigned int HH_Class_Plural_Phenomenon_00(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x24a030
unsigned int Object_Initialize(HH_Object_Plural_Phenomenon_00* pThis)
{
	unsigned int result;
	// Line 96, Address: 0x24a030, Func Offset: 0
	// Line 97, Address: 0x24a03c, Func Offset: 0xc
	// Line 101, Address: 0x24a040, Func Offset: 0x10
	// Line 103, Address: 0x24a04c, Func Offset: 0x1c
	// Line 104, Address: 0x24a050, Func Offset: 0x20
	// Func End, Address: 0x24a060, Func Offset: 0x30
}

// 
// Start address: 0x24a060
unsigned int ObjectInstance_BLOOD_STICK_00_Search_and_Post(ImpactQueue_Element* pElement, unsigned int Count_Max, float Set_Parameter)
{
	ImpactQueue_Element descriptor;
	ImpactQueue_Element* pElement_Stick_00;
	unsigned int hInstance;
	Object_Group_Infomeation* pInfo;
	unsigned int i;
	unsigned int result;
	// Line 117, Address: 0x24a060, Func Offset: 0
	// Line 118, Address: 0x24a088, Func Offset: 0x28
	// Line 120, Address: 0x24a08c, Func Offset: 0x2c
	// Line 122, Address: 0x24a098, Func Offset: 0x38
	// Line 123, Address: 0x24a0a4, Func Offset: 0x44
	// Line 124, Address: 0x24a0bc, Func Offset: 0x5c
	// Line 127, Address: 0x24a0d0, Func Offset: 0x70
	// Line 130, Address: 0x24a0f8, Func Offset: 0x98
	// Line 131, Address: 0x24a0fc, Func Offset: 0x9c
	// Line 133, Address: 0x24a120, Func Offset: 0xc0
	// Line 134, Address: 0x24a128, Func Offset: 0xc8
	// Line 135, Address: 0x24a134, Func Offset: 0xd4
	// Line 136, Address: 0x24a138, Func Offset: 0xd8
	// Line 138, Address: 0x24a140, Func Offset: 0xe0
	// Line 139, Address: 0x24a158, Func Offset: 0xf8
	// Line 140, Address: 0x24a15c, Func Offset: 0xfc
	// Func End, Address: 0x24a180, Func Offset: 0x120
}

// 
// Start address: 0x24a180
unsigned int HH_Class_Plural_Phenomenon_00(void* pBlock, ImpactQueue_Element* pElement)
{
	float* dst_direction;
	float* dst_location;
	ImpactQueue_Element descriptor;
	ImpactQueue_Element descriptor;
	void* pBlock_Blood_02;
	ImpactQueue_Element* pElement_Blood_02;
	unsigned int hInstance;
	unsigned int collision_check;
	unsigned int i;
	unsigned int count_blood_02;
	unsigned int count_stick_00;
	Object_Group_Infomeation* pInfo;
	float* dst_direction;
	float* dst_location;
	ImpactQueue_Element descriptor;
	float* src_direction;
	float* src_location;
	float center_location[4];
	HH_Object_Plural_Phenomenon_00* pThis;
	unsigned int result;
	float direction[4];
	// Line 160, Address: 0x24a180, Func Offset: 0
	// Line 167, Address: 0x24a1b4, Func Offset: 0x34
	// Line 168, Address: 0x24a1bc, Func Offset: 0x3c
	// Line 170, Address: 0x24a1c0, Func Offset: 0x40
	// Line 172, Address: 0x24a1ec, Func Offset: 0x6c
	// Line 173, Address: 0x24a1fc, Func Offset: 0x7c
	// Line 174, Address: 0x24a204, Func Offset: 0x84
	// Line 178, Address: 0x24a20c, Func Offset: 0x8c
	// Line 179, Address: 0x24a214, Func Offset: 0x94
	// Line 182, Address: 0x24a220, Func Offset: 0xa0
	// Line 183, Address: 0x24a234, Func Offset: 0xb4
	// Line 207, Address: 0x24a24c, Func Offset: 0xcc
	// Line 208, Address: 0x24a258, Func Offset: 0xd8
	// Line 209, Address: 0x24a26c, Func Offset: 0xec
	// Line 211, Address: 0x24a280, Func Offset: 0x100
	// Line 214, Address: 0x24a284, Func Offset: 0x104
	// Line 215, Address: 0x24a290, Func Offset: 0x110
	// Line 216, Address: 0x24a2a8, Func Offset: 0x128
	// Line 217, Address: 0x24a2bc, Func Offset: 0x13c
	// Line 221, Address: 0x24a2d0, Func Offset: 0x150
	// Line 222, Address: 0x24a2ec, Func Offset: 0x16c
	// Line 223, Address: 0x24a2f0, Func Offset: 0x170
	// Line 225, Address: 0x24a2f8, Func Offset: 0x178
	// Line 227, Address: 0x24a310, Func Offset: 0x190
	// Line 231, Address: 0x24a318, Func Offset: 0x198
	// Line 235, Address: 0x24a338, Func Offset: 0x1b8
	// Line 236, Address: 0x24a33c, Func Offset: 0x1bc
	// Line 237, Address: 0x24a344, Func Offset: 0x1c4
	// Line 239, Address: 0x24a368, Func Offset: 0x1e8
	// Line 240, Address: 0x24a378, Func Offset: 0x1f8
	// Line 245, Address: 0x24a384, Func Offset: 0x204
	// Line 246, Address: 0x24a38c, Func Offset: 0x20c
	// Line 249, Address: 0x24a394, Func Offset: 0x214
	// Line 250, Address: 0x24a398, Func Offset: 0x218
	// Line 251, Address: 0x24a3a0, Func Offset: 0x220
	// Line 252, Address: 0x24a3b0, Func Offset: 0x230
	// Line 253, Address: 0x24a3c4, Func Offset: 0x244
	// Line 255, Address: 0x24a3d0, Func Offset: 0x250
	// Line 260, Address: 0x24a3d8, Func Offset: 0x258
	// Line 265, Address: 0x24a3f0, Func Offset: 0x270
	// Line 266, Address: 0x24a3f8, Func Offset: 0x278
	// Line 269, Address: 0x24a400, Func Offset: 0x280
	// Line 270, Address: 0x24a404, Func Offset: 0x284
	// Line 273, Address: 0x24a408, Func Offset: 0x288
	// Line 274, Address: 0x24a424, Func Offset: 0x2a4
	// Line 275, Address: 0x24a428, Func Offset: 0x2a8
	// Func End, Address: 0x24a45c, Func Offset: 0x2dc
}

