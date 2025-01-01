typedef struct Object_Instance;
typedef struct ImpactQueue_Element;
typedef struct Object_InstanceTable_Infomeation;
typedef struct HH_Object_Plural_Phenomenon_00;
typedef struct Object_Group_Infomeation;
typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_ElementOption;
typedef struct ImpactQueue_Object;
typedef struct Object_DataPool_Infomeation;
typedef struct Object_Class;
typedef struct Object_Class_Association_Infomeation;

typedef unsigned int(*type_5)(void*, unsigned int);
typedef unsigned int(*type_6)(void*, ImpactQueue_Element*);
typedef unsigned int(*type_7)(void*, unsigned int);

typedef float type_0[4][2];
typedef float type_1[2];
typedef int type_2[2];
typedef float type_3[4];
typedef unsigned int type_4[1];

struct Object_Instance
{
	ImpactQueue_Element Element;
	unsigned int Enable;
	unsigned int hInstance;
	void* pBlock;
	float Timer;
	Object_Instance* pPrev;
	Object_Instance* pNext;
};

struct ImpactQueue_Element
{
	unsigned int Class_Descriptor;
	unsigned int hInstance;
	unsigned int* pResultHandle_Address;
	unsigned int Reserved[1];
	ImpactQueue_ElementOption Option;
};

struct Object_InstanceTable_Infomeation
{
	Object_Instance* pInstanceTable;
	unsigned int Instance_Max;
	unsigned int hInstance_History;
	Object_Instance** pHierarchyTable;
	Object_Instance* pFreeTable;
};

struct HH_Object_Plural_Phenomenon_00
{
	Object_DataBlock_Header Header;
	unsigned int Step;
	float Timer;
};

struct Object_Group_Infomeation
{
	Object_Class_Association_Infomeation Association_Info;
	Object_InstanceTable_Infomeation InstanceTable_Info;
	ImpactQueue_Object Queue_Info;
	unsigned int Enable;
	unsigned int Step;
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

struct ImpactQueue_Object
{
	unsigned int enQueue;
	unsigned int deQueue;
	unsigned int Length_Current;
	unsigned int Length_Max;
	ImpactQueue_Element* pElement;
};

struct Object_DataPool_Infomeation
{
	unsigned int Block_Size;
	unsigned int Block_Index_Max;
	void* pBlock_Table;
	Object_DataBlock_Header* pFreeBlock_List;
};

struct Object_Class
{
	unsigned int(*pPrefix)(void*, unsigned int);
	unsigned int(*pMain)(void*, ImpactQueue_Element*);
	unsigned int(*pSuffix)(void*, unsigned int);
	unsigned int Disable;
};

struct Object_Class_Association_Infomeation
{
	Object_Class* pClass_List;
	Object_DataPool_Infomeation* pDataPool_Info;
	unsigned int* pClass_Priority_List;
	unsigned int Class_Max;
};


unsigned int Object_Initialize(HH_Object_Plural_Phenomenon_00* pThis);
unsigned int ObjectInstance_BLOOD_STICK_00_Search_and_Post(ImpactQueue_Element* pElement, unsigned int Count_Max, float Set_Parameter);
unsigned int HH_Class_Plural_Phenomenon_00(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x25ae60
unsigned int Object_Initialize(HH_Object_Plural_Phenomenon_00* pThis)
{
	unsigned int result;
	// Line 103, Address: 0x25ae60, Func Offset: 0
	// Line 105, Address: 0x25ae64, Func Offset: 0x4
	// Line 106, Address: 0x25ae68, Func Offset: 0x8
	// Func End, Address: 0x25ae70, Func Offset: 0x10
}

// 
// Start address: 0x25ae70
unsigned int ObjectInstance_BLOOD_STICK_00_Search_and_Post(ImpactQueue_Element* pElement, unsigned int Count_Max, float Set_Parameter)
{
	ImpactQueue_Element descriptor;
	ImpactQueue_Element* pElement_Stick_00;
	unsigned int hInstance;
	Object_Group_Infomeation* pInfo;
	unsigned int i;
	unsigned int result;
	// Line 119, Address: 0x25ae70, Func Offset: 0
	// Line 120, Address: 0x25aea0, Func Offset: 0x30
	// Line 122, Address: 0x25aea4, Func Offset: 0x34
	// Line 124, Address: 0x25aeb0, Func Offset: 0x40
	// Line 125, Address: 0x25aebc, Func Offset: 0x4c
	// Line 126, Address: 0x25aed4, Func Offset: 0x64
	// Line 129, Address: 0x25aee4, Func Offset: 0x74
	// Line 132, Address: 0x25af04, Func Offset: 0x94
	// Line 133, Address: 0x25af08, Func Offset: 0x98
	// Line 134, Address: 0x25af0c, Func Offset: 0x9c
	// Line 135, Address: 0x25af14, Func Offset: 0xa4
	// Line 137, Address: 0x25af30, Func Offset: 0xc0
	// Line 138, Address: 0x25af34, Func Offset: 0xc4
	// Line 139, Address: 0x25af40, Func Offset: 0xd0
	// Line 140, Address: 0x25af44, Func Offset: 0xd4
	// Line 142, Address: 0x25af4c, Func Offset: 0xdc
	// Line 143, Address: 0x25af60, Func Offset: 0xf0
	// Line 144, Address: 0x25af64, Func Offset: 0xf4
	// Func End, Address: 0x25af90, Func Offset: 0x120
}

// 
// Start address: 0x25af90
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
	float* src_direction;
	float* src_location;
	float center_location[4];
	HH_Object_Plural_Phenomenon_00* pThis;
	unsigned int result;
	float direction[4];
	// Line 164, Address: 0x25af90, Func Offset: 0
	// Line 171, Address: 0x25afc0, Func Offset: 0x30
	// Line 172, Address: 0x25afc4, Func Offset: 0x34
	// Line 174, Address: 0x25afc8, Func Offset: 0x38
	// Line 176, Address: 0x25aff0, Func Offset: 0x60
	// Line 177, Address: 0x25aff8, Func Offset: 0x68
	// Line 178, Address: 0x25b000, Func Offset: 0x70
	// Line 182, Address: 0x25b008, Func Offset: 0x78
	// Line 186, Address: 0x25b010, Func Offset: 0x80
	// Line 187, Address: 0x25b024, Func Offset: 0x94
	// Line 195, Address: 0x25b03c, Func Offset: 0xac
	// Line 196, Address: 0x25b048, Func Offset: 0xb8
	// Line 197, Address: 0x25b05c, Func Offset: 0xcc
	// Line 199, Address: 0x25b070, Func Offset: 0xe0
	// Line 202, Address: 0x25b074, Func Offset: 0xe4
	// Line 203, Address: 0x25b080, Func Offset: 0xf0
	// Line 204, Address: 0x25b098, Func Offset: 0x108
	// Line 205, Address: 0x25b0ac, Func Offset: 0x11c
	// Line 208, Address: 0x25b0bc, Func Offset: 0x12c
	// Line 209, Address: 0x25b0d8, Func Offset: 0x148
	// Line 210, Address: 0x25b0dc, Func Offset: 0x14c
	// Line 212, Address: 0x25b0e4, Func Offset: 0x154
	// Line 214, Address: 0x25b0f8, Func Offset: 0x168
	// Line 218, Address: 0x25b100, Func Offset: 0x170
	// Line 222, Address: 0x25b120, Func Offset: 0x190
	// Line 223, Address: 0x25b124, Func Offset: 0x194
	// Line 224, Address: 0x25b128, Func Offset: 0x198
	// Line 225, Address: 0x25b130, Func Offset: 0x1a0
	// Line 227, Address: 0x25b14c, Func Offset: 0x1bc
	// Line 228, Address: 0x25b154, Func Offset: 0x1c4
	// Line 233, Address: 0x25b160, Func Offset: 0x1d0
	// Line 234, Address: 0x25b164, Func Offset: 0x1d4
	// Line 237, Address: 0x25b168, Func Offset: 0x1d8
	// Line 238, Address: 0x25b16c, Func Offset: 0x1dc
	// Line 239, Address: 0x25b170, Func Offset: 0x1e0
	// Line 240, Address: 0x25b178, Func Offset: 0x1e8
	// Line 241, Address: 0x25b184, Func Offset: 0x1f4
	// Line 242, Address: 0x25b198, Func Offset: 0x208
	// Line 244, Address: 0x25b1a4, Func Offset: 0x214
	// Line 249, Address: 0x25b1ac, Func Offset: 0x21c
	// Line 254, Address: 0x25b1c4, Func Offset: 0x234
	// Line 255, Address: 0x25b1cc, Func Offset: 0x23c
	// Line 258, Address: 0x25b1d4, Func Offset: 0x244
	// Line 259, Address: 0x25b1d8, Func Offset: 0x248
	// Line 262, Address: 0x25b1dc, Func Offset: 0x24c
	// Line 263, Address: 0x25b1f8, Func Offset: 0x268
	// Line 264, Address: 0x25b1fc, Func Offset: 0x26c
	// Func End, Address: 0x25b230, Func Offset: 0x2a0
}

