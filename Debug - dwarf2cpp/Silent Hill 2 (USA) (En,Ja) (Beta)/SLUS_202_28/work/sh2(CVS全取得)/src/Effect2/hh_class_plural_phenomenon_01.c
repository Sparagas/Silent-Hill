typedef struct Object_Instance;
typedef struct Object_Group_Infomeation;
typedef struct ImpactQueue_Element;
typedef struct Object_InstanceTable_Infomeation;
typedef struct HH_Object_Plural_Phenomenon_01;
typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_ElementOption;
typedef struct _CL_VHIT_WALL;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _CL_VHIT_CHARA;
typedef struct SubCharacter;
typedef struct _CL_VHIT_RESULT;
typedef union _anon0;
typedef struct ImpactQueue_Object;
typedef struct Object_DataPool_Infomeation;
typedef struct Object_Class;
typedef struct Object_Class_Association_Infomeation;

typedef unsigned int(*type_6)(void*, unsigned int);
typedef unsigned int(*type_7)(void*, ImpactQueue_Element*);
typedef unsigned int(*type_8)(void*, unsigned int);

typedef float type_0[4][2];
typedef float type_1[2];
typedef int type_2[2];
typedef float type_3[4];
typedef float type_4[4];
typedef unsigned int type_5[1];

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

struct Object_Group_Infomeation
{
	Object_Class_Association_Infomeation Association_Info;
	Object_InstanceTable_Infomeation InstanceTable_Info;
	ImpactQueue_Object Queue_Info;
	unsigned int Enable;
	unsigned int Step;
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

struct HH_Object_Plural_Phenomenon_01
{
	Object_DataBlock_Header Header;
	unsigned int Step;
	float Timer;
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

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
};

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

struct SubCharacter
{
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon0 hobj;
};

union _anon0
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
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


unsigned int Object_Initialize(HH_Object_Plural_Phenomenon_01* pThis);
unsigned int HH_Class_Plural_Phenomenon_01(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x286e90
unsigned int Object_Initialize(HH_Object_Plural_Phenomenon_01* pThis)
{
	unsigned int result;
	// Line 108, Address: 0x286e90, Func Offset: 0
	// Line 110, Address: 0x286e94, Func Offset: 0x4
	// Line 111, Address: 0x286e98, Func Offset: 0x8
	// Func End, Address: 0x286ea0, Func Offset: 0x10
}

// 
// Start address: 0x286ea0
unsigned int HH_Class_Plural_Phenomenon_01(void* pBlock, ImpactQueue_Element* pElement)
{
	float* dst_direction;
	float* dst_location;
	ImpactQueue_Element descriptor;
	float* dst_direction;
	float* dst_location;
	ImpactQueue_Element descriptor;
	unsigned int hInstance;
	ImpactQueue_Element descriptor;
	unsigned int count_water;
	float e_pos[4];
	_CL_VHIT_RESULT hit_result;
	unsigned int i;
	unsigned int splash_flag;
	unsigned int check1;
	unsigned int check0_1;
	unsigned int check0;
	unsigned int class_descriptor;
	Object_Group_Infomeation* pInfo;
	unsigned int check0;
	float* dst_direction;
	float* dst_location;
	ImpactQueue_Element descriptor;
	float e_pos[4];
	_CL_VHIT_RESULT hit_result;
	unsigned int check0;
	float* dst_direction;
	float* dst_location;
	ImpactQueue_Element descriptor;
	float* src_direction;
	float* src_location;
	int room_name;
	HH_Object_Plural_Phenomenon_01* pThis;
	unsigned int result;
	float direction[4];
	float direction[4];
	float add_vec[4];
	float local_y;
	float direction[4];
	float direction[4];
	float add_vec[4];
	// Line 130, Address: 0x286ea0, Func Offset: 0
	// Line 137, Address: 0x286ed0, Func Offset: 0x30
	// Line 138, Address: 0x286ed4, Func Offset: 0x34
	// Line 140, Address: 0x286ed8, Func Offset: 0x38
	// Line 142, Address: 0x286f00, Func Offset: 0x60
	// Line 143, Address: 0x286f08, Func Offset: 0x68
	// Line 144, Address: 0x286f10, Func Offset: 0x70
	// Line 147, Address: 0x286f18, Func Offset: 0x78
	// Line 148, Address: 0x286f24, Func Offset: 0x84
	// Line 176, Address: 0x286f28, Func Offset: 0x88
	// Line 177, Address: 0x286f2c, Func Offset: 0x8c
	// Line 179, Address: 0x286f30, Func Offset: 0x90
	// Line 181, Address: 0x286f34, Func Offset: 0x94
	// Line 189, Address: 0x286f54, Func Offset: 0xb4
	// Line 191, Address: 0x286f68, Func Offset: 0xc8
	// Line 193, Address: 0x286f80, Func Offset: 0xe0
	// Line 196, Address: 0x286f98, Func Offset: 0xf8
	// Line 198, Address: 0x286fa4, Func Offset: 0x104
	// Line 199, Address: 0x286fb4, Func Offset: 0x114
	// Line 203, Address: 0x286fb8, Func Offset: 0x118
	// Line 205, Address: 0x286fc0, Func Offset: 0x120
	// Line 209, Address: 0x286fc4, Func Offset: 0x124
	// Line 210, Address: 0x286fcc, Func Offset: 0x12c
	// Line 211, Address: 0x286fd0, Func Offset: 0x130
	// Line 212, Address: 0x286fd4, Func Offset: 0x134
	// Line 214, Address: 0x286fdc, Func Offset: 0x13c
	// Line 215, Address: 0x286fec, Func Offset: 0x14c
	// Line 217, Address: 0x287000, Func Offset: 0x160
	// Line 218, Address: 0x287004, Func Offset: 0x164
	// Line 222, Address: 0x28700c, Func Offset: 0x16c
	// Line 229, Address: 0x287018, Func Offset: 0x178
	// Line 230, Address: 0x28701c, Func Offset: 0x17c
	// Line 233, Address: 0x287020, Func Offset: 0x180
	// Line 235, Address: 0x287024, Func Offset: 0x184
	// Line 241, Address: 0x287048, Func Offset: 0x1a8
	// Line 245, Address: 0x28704c, Func Offset: 0x1ac
	// Line 246, Address: 0x287054, Func Offset: 0x1b4
	// Line 247, Address: 0x287058, Func Offset: 0x1b8
	// Line 248, Address: 0x28705c, Func Offset: 0x1bc
	// Line 250, Address: 0x287064, Func Offset: 0x1c4
	// Line 251, Address: 0x287074, Func Offset: 0x1d4
	// Line 252, Address: 0x287088, Func Offset: 0x1e8
	// Line 253, Address: 0x287094, Func Offset: 0x1f4
	// Line 254, Address: 0x2870a0, Func Offset: 0x200
	// Line 255, Address: 0x2870ac, Func Offset: 0x20c
	// Line 256, Address: 0x2870b8, Func Offset: 0x218
	// Line 263, Address: 0x2870c4, Func Offset: 0x224
	// Line 265, Address: 0x2870d0, Func Offset: 0x230
	// Line 266, Address: 0x2870d4, Func Offset: 0x234
	// Line 267, Address: 0x2870d8, Func Offset: 0x238
	// Line 268, Address: 0x2870dc, Func Offset: 0x23c
	// Line 271, Address: 0x2870e0, Func Offset: 0x240
	// Line 274, Address: 0x28719c, Func Offset: 0x2fc
	// Line 275, Address: 0x2871a0, Func Offset: 0x300
	// Line 281, Address: 0x2871a4, Func Offset: 0x304
	// Line 283, Address: 0x2871b8, Func Offset: 0x318
	// Line 285, Address: 0x2871d0, Func Offset: 0x330
	// Line 288, Address: 0x2871e8, Func Offset: 0x348
	// Line 290, Address: 0x2871f4, Func Offset: 0x354
	// Line 291, Address: 0x287204, Func Offset: 0x364
	// Line 295, Address: 0x287208, Func Offset: 0x368
	// Line 297, Address: 0x287210, Func Offset: 0x370
	// Line 298, Address: 0x287214, Func Offset: 0x374
	// Line 299, Address: 0x287218, Func Offset: 0x378
	// Line 300, Address: 0x28721c, Func Offset: 0x37c
	// Line 302, Address: 0x287224, Func Offset: 0x384
	// Line 303, Address: 0x287228, Func Offset: 0x388
	// Line 305, Address: 0x287230, Func Offset: 0x390
	// Line 306, Address: 0x287234, Func Offset: 0x394
	// Line 308, Address: 0x28723c, Func Offset: 0x39c
	// Line 309, Address: 0x287240, Func Offset: 0x3a0
	// Line 311, Address: 0x287248, Func Offset: 0x3a8
	// Line 312, Address: 0x28724c, Func Offset: 0x3ac
	// Line 314, Address: 0x287254, Func Offset: 0x3b4
	// Line 315, Address: 0x287258, Func Offset: 0x3b8
	// Line 317, Address: 0x287260, Func Offset: 0x3c0
	// Line 318, Address: 0x287264, Func Offset: 0x3c4
	// Line 320, Address: 0x28726c, Func Offset: 0x3cc
	// Line 321, Address: 0x287270, Func Offset: 0x3d0
	// Line 323, Address: 0x287278, Func Offset: 0x3d8
	// Line 324, Address: 0x28727c, Func Offset: 0x3dc
	// Line 326, Address: 0x287284, Func Offset: 0x3e4
	// Line 327, Address: 0x287288, Func Offset: 0x3e8
	// Line 329, Address: 0x287290, Func Offset: 0x3f0
	// Line 330, Address: 0x287294, Func Offset: 0x3f4
	// Line 332, Address: 0x28729c, Func Offset: 0x3fc
	// Line 333, Address: 0x2872a0, Func Offset: 0x400
	// Line 335, Address: 0x2872a8, Func Offset: 0x408
	// Line 336, Address: 0x2872ac, Func Offset: 0x40c
	// Line 338, Address: 0x2872b4, Func Offset: 0x414
	// Line 339, Address: 0x2872b8, Func Offset: 0x418
	// Line 340, Address: 0x2872bc, Func Offset: 0x41c
	// Line 341, Address: 0x2872c0, Func Offset: 0x420
	// Line 343, Address: 0x2872c8, Func Offset: 0x428
	// Line 344, Address: 0x2872cc, Func Offset: 0x42c
	// Line 349, Address: 0x2872d0, Func Offset: 0x430
	// Line 350, Address: 0x2872d8, Func Offset: 0x438
	// Line 354, Address: 0x2872ec, Func Offset: 0x44c
	// Line 356, Address: 0x2872f8, Func Offset: 0x458
	// Line 358, Address: 0x28730c, Func Offset: 0x46c
	// Line 359, Address: 0x287310, Func Offset: 0x470
	// Line 360, Address: 0x287314, Func Offset: 0x474
	// Line 361, Address: 0x287318, Func Offset: 0x478
	// Line 362, Address: 0x287328, Func Offset: 0x488
	// Line 363, Address: 0x287330, Func Offset: 0x490
	// Line 364, Address: 0x28733c, Func Offset: 0x49c
	// Line 368, Address: 0x28734c, Func Offset: 0x4ac
	// Line 370, Address: 0x287358, Func Offset: 0x4b8
	// Line 371, Address: 0x28735c, Func Offset: 0x4bc
	// Line 374, Address: 0x287360, Func Offset: 0x4c0
	// Line 375, Address: 0x287364, Func Offset: 0x4c4
	// Line 376, Address: 0x287368, Func Offset: 0x4c8
	// Line 377, Address: 0x287370, Func Offset: 0x4d0
	// Line 378, Address: 0x287380, Func Offset: 0x4e0
	// Line 379, Address: 0x287394, Func Offset: 0x4f4
	// Line 381, Address: 0x2873ac, Func Offset: 0x50c
	// Line 382, Address: 0x2873b0, Func Offset: 0x510
	// Line 383, Address: 0x2873b8, Func Offset: 0x518
	// Line 388, Address: 0x2873c4, Func Offset: 0x524
	// Line 394, Address: 0x2873cc, Func Offset: 0x52c
	// Line 395, Address: 0x2873d0, Func Offset: 0x530
	// Line 398, Address: 0x2873d4, Func Offset: 0x534
	// Line 399, Address: 0x2873d8, Func Offset: 0x538
	// Line 400, Address: 0x2873dc, Func Offset: 0x53c
	// Line 401, Address: 0x2873e4, Func Offset: 0x544
	// Line 402, Address: 0x2873f0, Func Offset: 0x550
	// Line 403, Address: 0x287404, Func Offset: 0x564
	// Line 410, Address: 0x287410, Func Offset: 0x570
	// Line 411, Address: 0x287418, Func Offset: 0x578
	// Line 414, Address: 0x287420, Func Offset: 0x580
	// Line 415, Address: 0x287424, Func Offset: 0x584
	// Line 418, Address: 0x287428, Func Offset: 0x588
	// Line 419, Address: 0x287444, Func Offset: 0x5a4
	// Line 420, Address: 0x287448, Func Offset: 0x5a8
	// Func End, Address: 0x28747c, Func Offset: 0x5dc
}

