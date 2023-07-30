typedef struct Object_Instance;
typedef struct Object_DataPool_Infomeation;
typedef struct Object_DataBlock_Header;
typedef struct Object_InstanceTable_Infomeation;
typedef struct Object_Class;
typedef struct ImpactQueue_Object;
typedef struct Object_Class_Association_Infomeation;
typedef struct Object_Group_Infomeation;
typedef struct ImpactQueue_Element;
typedef struct ImpactQueue_ElementOption;

typedef unsigned int(*type_2)(void*, unsigned int);
typedef unsigned int(*type_3)(void*, ImpactQueue_Element*);
typedef unsigned int(*type_4)(void*, unsigned int);

typedef unsigned char type_0[80];
typedef unsigned char type_1[80];
typedef float type_5[4];
typedef float type_6[4][2];
typedef float type_7[2];
typedef int type_8[2];
typedef unsigned int type_9[1];

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

struct Object_DataPool_Infomeation
{
	unsigned int Block_Size;
	unsigned int Block_Index_Max;
	void* pBlock_Table;
	Object_DataBlock_Header* pFreeBlock_List;
};

struct Object_DataBlock_Header
{
	unsigned int Enable;
	Object_DataBlock_Header* pNext;
};

struct Object_InstanceTable_Infomeation
{
	Object_Instance* pInstanceTable;
	unsigned int Instance_Max;
	unsigned int hInstance_History;
	Object_Instance** pHierarchyTable;
	Object_Instance* pFreeTable;
};

struct Object_Class
{
	unsigned int(*pPrefix)(void*, unsigned int);
	unsigned int(*pMain)(void*, ImpactQueue_Element*);
	unsigned int(*pSuffix)(void*, unsigned int);
	unsigned int Disable;
};

struct ImpactQueue_Object
{
	unsigned int enQueue;
	unsigned int deQueue;
	unsigned int Length_Current;
	unsigned int Length_Max;
	ImpactQueue_Element* pElement;
};

struct Object_Class_Association_Infomeation
{
	Object_Class* pClass_List;
	Object_DataPool_Infomeation* pDataPool_Info;
	unsigned int* pClass_Priority_List;
	unsigned int Class_Max;
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

struct ImpactQueue_ElementOption
{
	float Vector[4][2];
	float Float_Value[2];
	int Int_Value[2];
};


unsigned int ImpactManager(Object_Group_Infomeation* pInfo);
unsigned int InstanceManager(Object_Group_Infomeation* pInfo);
unsigned int InstanceCreateSuppressEnvironment_Initialize(Object_Group_Infomeation* pInfo);
void QueueObject_Initialize(ImpactQueue_Object* pQueue);
unsigned int QueueObject_enQueue(ImpactQueue_Object* pQueue, ImpactQueue_Element* pElement);
unsigned int QueueObject_deQueue(ImpactQueue_Object* pQueue, ImpactQueue_Element* pElement);
Object_Instance* Instance_Search_from_InstanceHandle(unsigned int hInstance);
unsigned int Instance_DesignateClassDescriptorAttach_Count(Object_InstanceTable_Infomeation* pInfo, unsigned int Class_Descriptor);
unsigned int InstanceHandle_Get_from_ClassDescriptor_and_AttachCount(Object_InstanceTable_Infomeation* pInfo, unsigned int Class_Descriptor, unsigned int CountIndex);
unsigned int Instance_Create(Object_Group_Infomeation* pInfo, ImpactQueue_Element* pElement);
unsigned int Instance_OldestEntry_Search(Object_Group_Infomeation* pInfo, unsigned int Flag, unsigned int Class_Descriptor);
unsigned int FreeInstance_Stack_FreeCheck(Object_InstanceTable_Infomeation* pInfo);
Object_Instance* FreeInstance_Stack_Pop(Object_InstanceTable_Infomeation* pInfo);
unsigned int FreeInstance_Stack_Push(Object_InstanceTable_Infomeation* pInfo, Object_Instance* pInstance);
unsigned int InstanceHierarchyTable_Registry(Object_InstanceTable_Infomeation* pInfo, Object_Instance* pInstance);
unsigned int InstanceHierarchyTable_Discard(Object_InstanceTable_Infomeation* pInfo, Object_Instance* pInstance);
unsigned int InstanceHierarchyTable_DesignateInstance_Initialize(Object_InstanceTable_Infomeation* pInstance_Info, Object_DataPool_Infomeation* pPool_Info, Object_Instance* pInstance);
unsigned int FreeDataBlock_Stack_FreeCheck(Object_DataPool_Infomeation* pInfo);
Object_DataBlock_Header* FreeDataBlock_Stack_Pop(Object_DataPool_Infomeation* pInfo);
unsigned int FreeDataBlock_Stack_Push(Object_DataPool_Infomeation* pInfo, Object_DataBlock_Header* pHeader);
unsigned int Exception_Handling_Instance_Create(Object_Group_Infomeation* pInfo, unsigned int Flag, unsigned int Class_Descriptor);
unsigned int ClassAssociation_DataPool_Initialize(Object_Group_Infomeation* pInfo, unsigned int Class_Descriptor);
unsigned int InstanceTable_DesignateClassDescriptorAttach_Initialize(Object_Group_Infomeation* pInfo, unsigned int Class_Descriptor);
unsigned int ClassAssociation_DataPool_All_Initialize(Object_Group_Infomeation* pInfo);
unsigned int InstanceTable_All_Initialize(Object_Group_Infomeation* pInfo);
unsigned int ImpactDescriptor_Post(Object_Group_Infomeation* pInfo, ImpactQueue_Element* pDescriptor);
unsigned int Object_Group_Manager(Object_Group_Infomeation* pInfo);
unsigned int Object_Group_Infomeation_Set(Object_Group_Infomeation* pInfo);
unsigned int Object_Group_QueueInfomeation_Set(Object_Group_Infomeation* pInfo, ImpactQueue_Element* pElement_Base, unsigned int Length_Max);
unsigned int Object_Group_ClassAssociationInfomeation_Set(Object_Group_Infomeation* pInfo, Object_Class* pClass_List, Object_DataPool_Infomeation* pPool_Info_Base, unsigned int* pClass_Priority_List, unsigned int Class_Max);
unsigned int Object_Group_InstanceTableInfomeation_Set(Object_Group_Infomeation* pInfo, Object_Instance* pInstance_Base, Object_Instance** pInstance_HierarchyTable, unsigned int Instance_Max);
unsigned int Object_Group_All_Initialize(Object_Group_Infomeation* pInfo);
unsigned int Object_Group_InstanceTable_DesignateClassDescriptorAttach_Initialize(Object_Group_Infomeation* pInfo, unsigned int Class_Descriptor);
unsigned int Object_Group_InstanceTable_DesignateInstanceHandleAttach_Initialize(Object_Group_Infomeation* pInfo, unsigned int hInstance);
unsigned int ObjectInstance_DesignateClassDescriptorAttach_Count(Object_Group_Infomeation* pInfo, unsigned int Class_Descriptor);
unsigned int ObjectInstanceHandle_Get_from_ClassDescriptor_and_AttachCount(Object_Group_Infomeation* pInfo, unsigned int Class_Descriptor, unsigned int CountIndex);
ImpactQueue_Element* ObjectInstance_Element_Get(Object_Group_Infomeation* pInfo, unsigned int hInstance);
void* ObjectInstance_DataBlock_Get(Object_Group_Infomeation* pInfo, unsigned int hInstance);

// 
// Start address: 0x2595e0
unsigned int ImpactManager(Object_Group_Infomeation* pInfo)
{
	unsigned int free_data_block_check;
	unsigned int free_instance_check;
	Object_Instance* pInstance;
	Object_InstanceTable_Infomeation* pInstance_Info;
	ImpactQueue_Element element;
	unsigned int result;
	// Line 144, Address: 0x2595e0, Func Offset: 0
	// Line 145, Address: 0x2595fc, Func Offset: 0x1c
	// Line 147, Address: 0x259600, Func Offset: 0x20
	// Line 149, Address: 0x259604, Func Offset: 0x24
	// Line 152, Address: 0x25960c, Func Offset: 0x2c
	// Line 158, Address: 0x259628, Func Offset: 0x48
	// Line 161, Address: 0x259634, Func Offset: 0x54
	// Line 163, Address: 0x259640, Func Offset: 0x60
	// Line 165, Address: 0x259648, Func Offset: 0x68
	// Line 166, Address: 0x259664, Func Offset: 0x84
	// Line 171, Address: 0x259668, Func Offset: 0x88
	// Line 178, Address: 0x259670, Func Offset: 0x90
	// Line 180, Address: 0x259680, Func Offset: 0xa0
	// Line 182, Address: 0x259698, Func Offset: 0xb8
	// Line 183, Address: 0x2596a8, Func Offset: 0xc8
	// Line 184, Address: 0x2596bc, Func Offset: 0xdc
	// Line 188, Address: 0x2596c0, Func Offset: 0xe0
	// Line 189, Address: 0x2596d8, Func Offset: 0xf8
	// Line 199, Address: 0x2596dc, Func Offset: 0xfc
	// Line 200, Address: 0x2596f8, Func Offset: 0x118
	// Line 201, Address: 0x2596fc, Func Offset: 0x11c
	// Func End, Address: 0x25971c, Func Offset: 0x13c
}

// 
// Start address: 0x259720
unsigned int InstanceManager(Object_Group_Infomeation* pInfo)
{
	Object_Instance* pInstance_Current;
	unsigned int Block_Index_Max;
	void* pBlock_Table;
	Object_DataPool_Infomeation* pPool_Info;
	Object_Instance* pInstance;
	Object_Class* pClass;
	Object_InstanceTable_Infomeation* pInstance_Info;
	Object_Class_Association_Infomeation* pClass_Info;
	unsigned int i;
	unsigned int result;
	// Line 214, Address: 0x259720, Func Offset: 0
	// Line 215, Address: 0x259750, Func Offset: 0x30
	// Line 218, Address: 0x259754, Func Offset: 0x34
	// Line 230, Address: 0x259758, Func Offset: 0x38
	// Line 231, Address: 0x259764, Func Offset: 0x44
	// Line 232, Address: 0x259780, Func Offset: 0x60
	// Line 233, Address: 0x259790, Func Offset: 0x70
	// Line 234, Address: 0x259798, Func Offset: 0x78
	// Line 235, Address: 0x25979c, Func Offset: 0x7c
	// Line 238, Address: 0x2597a0, Func Offset: 0x80
	// Line 242, Address: 0x2597a8, Func Offset: 0x88
	// Line 247, Address: 0x2597b0, Func Offset: 0x90
	// Line 248, Address: 0x2597bc, Func Offset: 0x9c
	// Line 251, Address: 0x2597cc, Func Offset: 0xac
	// Line 252, Address: 0x2597d4, Func Offset: 0xb4
	// Line 256, Address: 0x2597d8, Func Offset: 0xb8
	// Line 260, Address: 0x2597dc, Func Offset: 0xbc
	// Line 263, Address: 0x2597f0, Func Offset: 0xd0
	// Line 266, Address: 0x25980c, Func Offset: 0xec
	// Line 267, Address: 0x25981c, Func Offset: 0xfc
	// Line 275, Address: 0x259830, Func Offset: 0x110
	// Line 277, Address: 0x259838, Func Offset: 0x118
	// Line 278, Address: 0x259844, Func Offset: 0x124
	// Line 279, Address: 0x259854, Func Offset: 0x134
	// Line 281, Address: 0x259858, Func Offset: 0x138
	// Line 282, Address: 0x25985c, Func Offset: 0x13c
	// Line 285, Address: 0x259878, Func Offset: 0x158
	// Func End, Address: 0x2598ac, Func Offset: 0x18c
}

// 
// Start address: 0x2598b0
unsigned int InstanceCreateSuppressEnvironment_Initialize(Object_Group_Infomeation* pInfo)
{
	unsigned int i;
	unsigned int result;
	// Line 302, Address: 0x2598b0, Func Offset: 0
	// Line 303, Address: 0x2598bc, Func Offset: 0xc
	// Line 304, Address: 0x2598cc, Func Offset: 0x1c
	// Line 306, Address: 0x2598e0, Func Offset: 0x30
	// Line 308, Address: 0x2598ec, Func Offset: 0x3c
	// Line 309, Address: 0x2598f0, Func Offset: 0x40
	// Func End, Address: 0x2598f8, Func Offset: 0x48
}

// 
// Start address: 0x259900
void QueueObject_Initialize(ImpactQueue_Object* pQueue)
{
	// Line 324, Address: 0x259900, Func Offset: 0
	// Line 325, Address: 0x259904, Func Offset: 0x4
	// Line 326, Address: 0x259908, Func Offset: 0x8
	// Line 327, Address: 0x25990c, Func Offset: 0xc
	// Func End, Address: 0x259914, Func Offset: 0x14
}

// 
// Start address: 0x259920
unsigned int QueueObject_enQueue(ImpactQueue_Object* pQueue, ImpactQueue_Element* pElement)
{
	unsigned int result;
	// Line 341, Address: 0x259920, Func Offset: 0
	// Line 343, Address: 0x259924, Func Offset: 0x4
	// Line 344, Address: 0x259938, Func Offset: 0x18
	// Line 345, Address: 0x259970, Func Offset: 0x50
	// Line 346, Address: 0x25998c, Func Offset: 0x6c
	// Line 347, Address: 0x259998, Func Offset: 0x78
	// Line 350, Address: 0x25999c, Func Offset: 0x7c
	// Func End, Address: 0x2599a4, Func Offset: 0x84
}

// 
// Start address: 0x2599b0
unsigned int QueueObject_deQueue(ImpactQueue_Object* pQueue, ImpactQueue_Element* pElement)
{
	unsigned int result;
	// Line 364, Address: 0x2599b0, Func Offset: 0
	// Line 366, Address: 0x2599b4, Func Offset: 0x4
	// Line 367, Address: 0x2599c0, Func Offset: 0x10
	// Line 368, Address: 0x2599f8, Func Offset: 0x48
	// Line 369, Address: 0x259a14, Func Offset: 0x64
	// Line 370, Address: 0x259a20, Func Offset: 0x70
	// Line 373, Address: 0x259a24, Func Offset: 0x74
	// Func End, Address: 0x259a2c, Func Offset: 0x7c
}

// 
// Start address: 0x259a30
Object_Instance* Instance_Search_from_InstanceHandle(unsigned int hInstance)
{
	Object_Instance* result;
	// Line 447, Address: 0x259a30, Func Offset: 0
	// Line 466, Address: 0x259a34, Func Offset: 0x4
	// Line 467, Address: 0x259a40, Func Offset: 0x10
	// Line 471, Address: 0x259a44, Func Offset: 0x14
	// Func End, Address: 0x259a4c, Func Offset: 0x1c
}

// 
// Start address: 0x259a50
unsigned int Instance_DesignateClassDescriptorAttach_Count(Object_InstanceTable_Infomeation* pInfo, unsigned int Class_Descriptor)
{
	Object_Instance* pInstance;
	unsigned int result;
	// Line 484, Address: 0x259a50, Func Offset: 0
	// Line 485, Address: 0x259a54, Func Offset: 0x4
	// Line 487, Address: 0x259a64, Func Offset: 0x14
	// Line 488, Address: 0x259a6c, Func Offset: 0x1c
	// Line 489, Address: 0x259a70, Func Offset: 0x20
	// Line 490, Address: 0x259a78, Func Offset: 0x28
	// Line 492, Address: 0x259a8c, Func Offset: 0x3c
	// Func End, Address: 0x259a94, Func Offset: 0x44
}

// 
// Start address: 0x259aa0
unsigned int InstanceHandle_Get_from_ClassDescriptor_and_AttachCount(Object_InstanceTable_Infomeation* pInfo, unsigned int Class_Descriptor, unsigned int CountIndex)
{
	Object_Instance* pInstance;
	unsigned int count;
	unsigned int result;
	// Line 506, Address: 0x259aa0, Func Offset: 0
	// Line 507, Address: 0x259aa4, Func Offset: 0x4
	// Line 508, Address: 0x259aa8, Func Offset: 0x8
	// Line 510, Address: 0x259ab8, Func Offset: 0x18
	// Line 511, Address: 0x259ac0, Func Offset: 0x20
	// Line 513, Address: 0x259ac8, Func Offset: 0x28
	// Line 514, Address: 0x259acc, Func Offset: 0x2c
	// Line 516, Address: 0x259ad4, Func Offset: 0x34
	// Line 517, Address: 0x259ad8, Func Offset: 0x38
	// Line 518, Address: 0x259ae0, Func Offset: 0x40
	// Line 520, Address: 0x259ae8, Func Offset: 0x48
	// Func End, Address: 0x259af0, Func Offset: 0x50
}

// 
// Start address: 0x259af0
unsigned int Instance_Create(Object_Group_Infomeation* pInfo, ImpactQueue_Element* pElement)
{
	Object_DataPool_Infomeation* pPool_Info;
	Object_Instance* pInstance;
	unsigned int result;
	// Line 533, Address: 0x259af0, Func Offset: 0
	// Line 534, Address: 0x259b14, Func Offset: 0x24
	// Line 538, Address: 0x259b18, Func Offset: 0x28
	// Line 540, Address: 0x259b28, Func Offset: 0x38
	// Line 541, Address: 0x259b3c, Func Offset: 0x4c
	// Line 542, Address: 0x259b54, Func Offset: 0x64
	// Line 543, Address: 0x259b5c, Func Offset: 0x6c
	// Line 545, Address: 0x259b60, Func Offset: 0x70
	// Line 546, Address: 0x259b80, Func Offset: 0x90
	// Line 548, Address: 0x259b88, Func Offset: 0x98
	// Line 550, Address: 0x259b94, Func Offset: 0xa4
	// Line 552, Address: 0x259b9c, Func Offset: 0xac
	// Line 553, Address: 0x259bac, Func Offset: 0xbc
	// Line 555, Address: 0x259bb8, Func Offset: 0xc8
	// Line 556, Address: 0x259bc8, Func Offset: 0xd8
	// Line 559, Address: 0x259bcc, Func Offset: 0xdc
	// Line 560, Address: 0x259bd0, Func Offset: 0xe0
	// Func End, Address: 0x259bf4, Func Offset: 0x104
}

// 
// Start address: 0x259c00
unsigned int Instance_OldestEntry_Search(Object_Group_Infomeation* pInfo, unsigned int Flag, unsigned int Class_Descriptor)
{
	Object_Instance* pInstance;
	float old_time;
	unsigned int max;
	unsigned int i;
	unsigned int result;
	// Line 577, Address: 0x259c00, Func Offset: 0
	// Line 578, Address: 0x259c04, Func Offset: 0x4
	// Line 579, Address: 0x259c08, Func Offset: 0x8
	// Line 580, Address: 0x259c0c, Func Offset: 0xc
	// Line 582, Address: 0x259c10, Func Offset: 0x10
	// Line 583, Address: 0x259c18, Func Offset: 0x18
	// Line 584, Address: 0x259c1c, Func Offset: 0x1c
	// Line 587, Address: 0x259c20, Func Offset: 0x20
	// Line 588, Address: 0x259c28, Func Offset: 0x28
	// Line 590, Address: 0x259c38, Func Offset: 0x38
	// Line 591, Address: 0x259c40, Func Offset: 0x40
	// Line 592, Address: 0x259c54, Func Offset: 0x54
	// Line 593, Address: 0x259c58, Func Offset: 0x58
	// Line 595, Address: 0x259c60, Func Offset: 0x60
	// Line 596, Address: 0x259c68, Func Offset: 0x68
	// Line 597, Address: 0x259c70, Func Offset: 0x70
	// Line 599, Address: 0x259c84, Func Offset: 0x84
	// Func End, Address: 0x259c8c, Func Offset: 0x8c
}

// 
// Start address: 0x259c90
unsigned int FreeInstance_Stack_FreeCheck(Object_InstanceTable_Infomeation* pInfo)
{
	unsigned int result;
	// Line 657, Address: 0x259c90, Func Offset: 0
	// Line 660, Address: 0x259c94, Func Offset: 0x4
	// Line 661, Address: 0x259ca0, Func Offset: 0x10
	// Line 664, Address: 0x259ca4, Func Offset: 0x14
	// Func End, Address: 0x259cac, Func Offset: 0x1c
}

// 
// Start address: 0x259cb0
Object_Instance* FreeInstance_Stack_Pop(Object_InstanceTable_Infomeation* pInfo)
{
	Object_Instance* result;
	// Line 677, Address: 0x259cb0, Func Offset: 0
	// Line 680, Address: 0x259cb4, Func Offset: 0x4
	// Line 681, Address: 0x259cc0, Func Offset: 0x10
	// Line 683, Address: 0x259cc4, Func Offset: 0x14
	// Line 687, Address: 0x259ccc, Func Offset: 0x1c
	// Line 688, Address: 0x259cd8, Func Offset: 0x28
	// Line 693, Address: 0x259cdc, Func Offset: 0x2c
	// Line 694, Address: 0x259ce0, Func Offset: 0x30
	// Line 697, Address: 0x259ce4, Func Offset: 0x34
	// Func End, Address: 0x259cec, Func Offset: 0x3c
}

// 
// Start address: 0x259cf0
unsigned int FreeInstance_Stack_Push(Object_InstanceTable_Infomeation* pInfo, Object_Instance* pInstance)
{
	unsigned int result;
	// Line 710, Address: 0x259cf0, Func Offset: 0
	// Line 714, Address: 0x259d08, Func Offset: 0x18
	// Line 718, Address: 0x259d1c, Func Offset: 0x2c
	// Line 719, Address: 0x259d28, Func Offset: 0x38
	// Line 720, Address: 0x259d2c, Func Offset: 0x3c
	// Line 721, Address: 0x259d34, Func Offset: 0x44
	// Line 722, Address: 0x259d38, Func Offset: 0x48
	// Line 724, Address: 0x259d40, Func Offset: 0x50
	// Line 726, Address: 0x259d44, Func Offset: 0x54
	// Line 727, Address: 0x259d48, Func Offset: 0x58
	// Func End, Address: 0x259d60, Func Offset: 0x70
}

// 
// Start address: 0x259d60
unsigned int InstanceHierarchyTable_Registry(Object_InstanceTable_Infomeation* pInfo, Object_Instance* pInstance)
{
	Object_Instance** pRegistry_Hierarchy;
	unsigned int result;
	// Line 746, Address: 0x259d60, Func Offset: 0
	// Line 749, Address: 0x259d70, Func Offset: 0x10
	// Line 750, Address: 0x259d7c, Func Offset: 0x1c
	// Line 751, Address: 0x259d80, Func Offset: 0x20
	// Line 752, Address: 0x259d88, Func Offset: 0x28
	// Line 753, Address: 0x259d90, Func Offset: 0x30
	// Line 754, Address: 0x259d94, Func Offset: 0x34
	// Line 756, Address: 0x259d9c, Func Offset: 0x3c
	// Line 757, Address: 0x259da0, Func Offset: 0x40
	// Line 758, Address: 0x259da4, Func Offset: 0x44
	// Line 760, Address: 0x259da8, Func Offset: 0x48
	// Line 761, Address: 0x259dac, Func Offset: 0x4c
	// Func End, Address: 0x259db4, Func Offset: 0x54
}

// 
// Start address: 0x259dc0
unsigned int InstanceHierarchyTable_Discard(Object_InstanceTable_Infomeation* pInfo, Object_Instance* pInstance)
{
	Object_Instance** pRegistry_Hierarchy;
	unsigned int result;
	// Line 776, Address: 0x259dc0, Func Offset: 0
	// Line 779, Address: 0x259dd0, Func Offset: 0x10
	// Line 780, Address: 0x259ddc, Func Offset: 0x1c
	// Line 781, Address: 0x259de4, Func Offset: 0x24
	// Line 784, Address: 0x259dec, Func Offset: 0x2c
	// Line 787, Address: 0x259df4, Func Offset: 0x34
	// Line 788, Address: 0x259e00, Func Offset: 0x40
	// Line 790, Address: 0x259e08, Func Offset: 0x48
	// Line 791, Address: 0x259e0c, Func Offset: 0x4c
	// Func End, Address: 0x259e14, Func Offset: 0x54
}

// 
// Start address: 0x259e20
unsigned int InstanceHierarchyTable_DesignateInstance_Initialize(Object_InstanceTable_Infomeation* pInstance_Info, Object_DataPool_Infomeation* pPool_Info, Object_Instance* pInstance)
{
	unsigned int result;
	// Line 805, Address: 0x259e20, Func Offset: 0
	// Line 809, Address: 0x259e38, Func Offset: 0x18
	// Line 810, Address: 0x259e44, Func Offset: 0x24
	// Line 813, Address: 0x259e48, Func Offset: 0x28
	// Line 815, Address: 0x259e5c, Func Offset: 0x3c
	// Line 817, Address: 0x259e6c, Func Offset: 0x4c
	// Line 819, Address: 0x259e78, Func Offset: 0x58
	// Line 820, Address: 0x259e7c, Func Offset: 0x5c
	// Func End, Address: 0x259e94, Func Offset: 0x74
}

// 
// Start address: 0x259ea0
unsigned int FreeDataBlock_Stack_FreeCheck(Object_DataPool_Infomeation* pInfo)
{
	unsigned int result;
	// Line 837, Address: 0x259ea0, Func Offset: 0
	// Line 840, Address: 0x259ea4, Func Offset: 0x4
	// Line 841, Address: 0x259eb0, Func Offset: 0x10
	// Line 844, Address: 0x259eb4, Func Offset: 0x14
	// Func End, Address: 0x259ebc, Func Offset: 0x1c
}

// 
// Start address: 0x259ec0
Object_DataBlock_Header* FreeDataBlock_Stack_Pop(Object_DataPool_Infomeation* pInfo)
{
	Object_DataBlock_Header* result;
	// Line 857, Address: 0x259ec0, Func Offset: 0
	// Line 860, Address: 0x259ec4, Func Offset: 0x4
	// Line 861, Address: 0x259ed0, Func Offset: 0x10
	// Line 863, Address: 0x259ed4, Func Offset: 0x14
	// Line 867, Address: 0x259edc, Func Offset: 0x1c
	// Line 870, Address: 0x259ee0, Func Offset: 0x20
	// Func End, Address: 0x259ee8, Func Offset: 0x28
}

// 
// Start address: 0x259ef0
unsigned int FreeDataBlock_Stack_Push(Object_DataPool_Infomeation* pInfo, Object_DataBlock_Header* pHeader)
{
	unsigned int result;
	// Line 883, Address: 0x259ef0, Func Offset: 0
	// Line 887, Address: 0x259f08, Func Offset: 0x18
	// Line 889, Address: 0x259f1c, Func Offset: 0x2c
	// Line 890, Address: 0x259f28, Func Offset: 0x38
	// Line 891, Address: 0x259f2c, Func Offset: 0x3c
	// Line 892, Address: 0x259f30, Func Offset: 0x40
	// Line 894, Address: 0x259f38, Func Offset: 0x48
	// Line 896, Address: 0x259f3c, Func Offset: 0x4c
	// Line 897, Address: 0x259f40, Func Offset: 0x50
	// Func End, Address: 0x259f58, Func Offset: 0x68
}

// 
// Start address: 0x259f60
unsigned int Exception_Handling_Instance_Create(Object_Group_Infomeation* pInfo, unsigned int Flag, unsigned int Class_Descriptor)
{
	Object_DataPool_Infomeation* pPool_Info;
	Object_Class_Association_Infomeation* pClass_Info;
	Object_Instance* pInstance;
	unsigned int hInstance;
	unsigned int result;
	// Line 913, Address: 0x259f60, Func Offset: 0
	// Line 914, Address: 0x259f74, Func Offset: 0x14
	// Line 915, Address: 0x259f78, Func Offset: 0x18
	// Line 917, Address: 0x259f80, Func Offset: 0x20
	// Line 918, Address: 0x259f88, Func Offset: 0x28
	// Line 920, Address: 0x259f98, Func Offset: 0x38
	// Line 923, Address: 0x259fa4, Func Offset: 0x44
	// Line 924, Address: 0x259fb0, Func Offset: 0x50
	// Line 927, Address: 0x259fb4, Func Offset: 0x54
	// Line 929, Address: 0x259fc0, Func Offset: 0x60
	// Line 931, Address: 0x259fd0, Func Offset: 0x70
	// Line 933, Address: 0x259fdc, Func Offset: 0x7c
	// Line 939, Address: 0x259fe0, Func Offset: 0x80
	// Line 940, Address: 0x259fe4, Func Offset: 0x84
	// Func End, Address: 0x259ffc, Func Offset: 0x9c
}

// 
// Start address: 0x25a000
unsigned int ClassAssociation_DataPool_Initialize(Object_Group_Infomeation* pInfo, unsigned int Class_Descriptor)
{
	Object_DataBlock_Header* pHeader;
	unsigned int i;
	Object_DataPool_Infomeation* pPool_Info;
	unsigned int result;
	// Line 958, Address: 0x25a000, Func Offset: 0
	// Line 959, Address: 0x25a00c, Func Offset: 0xc
	// Line 961, Address: 0x25a010, Func Offset: 0x10
	// Line 962, Address: 0x25a018, Func Offset: 0x18
	// Line 965, Address: 0x25a024, Func Offset: 0x24
	// Line 967, Address: 0x25a030, Func Offset: 0x30
	// Line 971, Address: 0x25a048, Func Offset: 0x48
	// Line 973, Address: 0x25a04c, Func Offset: 0x4c
	// Line 974, Address: 0x25a058, Func Offset: 0x58
	// Line 975, Address: 0x25a064, Func Offset: 0x64
	// Line 976, Address: 0x25a084, Func Offset: 0x84
	// Line 979, Address: 0x25a088, Func Offset: 0x88
	// Line 981, Address: 0x25a090, Func Offset: 0x90
	// Line 985, Address: 0x25a094, Func Offset: 0x94
	// Func End, Address: 0x25a0a8, Func Offset: 0xa8
}

// 
// Start address: 0x25a0b0
unsigned int InstanceTable_DesignateClassDescriptorAttach_Initialize(Object_Group_Infomeation* pInfo, unsigned int Class_Descriptor)
{
	Object_Instance* pInstance_Current;
	Object_DataPool_Infomeation* pPool_Info;
	Object_Instance* pInstance;
	unsigned int result;
	// Line 999, Address: 0x25a0b0, Func Offset: 0
	// Line 1000, Address: 0x25a0cc, Func Offset: 0x1c
	// Line 1001, Address: 0x25a0d0, Func Offset: 0x20
	// Line 1002, Address: 0x25a0e0, Func Offset: 0x30
	// Line 1004, Address: 0x25a0ec, Func Offset: 0x3c
	// Line 1005, Address: 0x25a0f4, Func Offset: 0x44
	// Line 1007, Address: 0x25a0f8, Func Offset: 0x48
	// Line 1010, Address: 0x25a0fc, Func Offset: 0x4c
	// Line 1011, Address: 0x25a108, Func Offset: 0x58
	// Line 1012, Address: 0x25a10c, Func Offset: 0x5c
	// Line 1014, Address: 0x25a110, Func Offset: 0x60
	// Line 1016, Address: 0x25a120, Func Offset: 0x70
	// Line 1018, Address: 0x25a130, Func Offset: 0x80
	// Line 1019, Address: 0x25a13c, Func Offset: 0x8c
	// Line 1020, Address: 0x25a140, Func Offset: 0x90
	// Line 1022, Address: 0x25a148, Func Offset: 0x98
	// Func End, Address: 0x25a168, Func Offset: 0xb8
}

// 
// Start address: 0x25a170
unsigned int ClassAssociation_DataPool_All_Initialize(Object_Group_Infomeation* pInfo)
{
	unsigned int i;
	unsigned int result;
	// Line 1035, Address: 0x25a170, Func Offset: 0
	// Line 1036, Address: 0x25a184, Func Offset: 0x14
	// Line 1038, Address: 0x25a188, Func Offset: 0x18
	// Line 1041, Address: 0x25a190, Func Offset: 0x20
	// Line 1042, Address: 0x25a19c, Func Offset: 0x2c
	// Line 1043, Address: 0x25a1ac, Func Offset: 0x3c
	// Line 1044, Address: 0x25a1c0, Func Offset: 0x50
	// Line 1047, Address: 0x25a1c4, Func Offset: 0x54
	// Func End, Address: 0x25a1dc, Func Offset: 0x6c
}

// 
// Start address: 0x25a1e0
unsigned int InstanceTable_All_Initialize(Object_Group_Infomeation* pInfo)
{
	Object_Instance* pPrev;
	Object_Instance* pCurrent;
	unsigned int i;
	unsigned int result;
	// Line 1060, Address: 0x25a1e0, Func Offset: 0
	// Line 1061, Address: 0x25a1f0, Func Offset: 0x10
	// Line 1063, Address: 0x25a1f4, Func Offset: 0x14
	// Line 1064, Address: 0x25a1fc, Func Offset: 0x1c
	// Line 1066, Address: 0x25a200, Func Offset: 0x20
	// Line 1069, Address: 0x25a220, Func Offset: 0x40
	// Line 1072, Address: 0x25a228, Func Offset: 0x48
	// Line 1077, Address: 0x25a240, Func Offset: 0x60
	// Line 1078, Address: 0x25a244, Func Offset: 0x64
	// Line 1080, Address: 0x25a248, Func Offset: 0x68
	// Line 1081, Address: 0x25a254, Func Offset: 0x74
	// Line 1082, Address: 0x25a258, Func Offset: 0x78
	// Line 1083, Address: 0x25a260, Func Offset: 0x80
	// Line 1084, Address: 0x25a264, Func Offset: 0x84
	// Line 1086, Address: 0x25a280, Func Offset: 0xa0
	// Line 1088, Address: 0x25a284, Func Offset: 0xa4
	// Line 1091, Address: 0x25a288, Func Offset: 0xa8
	// Func End, Address: 0x25a29c, Func Offset: 0xbc
}

// 
// Start address: 0x25a2a0
unsigned int ImpactDescriptor_Post(Object_Group_Infomeation* pInfo, ImpactQueue_Element* pDescriptor)
{
	unsigned int result;
	// Line 1209, Address: 0x25a2a0, Func Offset: 0
	// Line 1210, Address: 0x25a2a8, Func Offset: 0x8
	// Line 1212, Address: 0x25a2ac, Func Offset: 0xc
	// Line 1213, Address: 0x25a2bc, Func Offset: 0x1c
	// Line 1215, Address: 0x25a2cc, Func Offset: 0x2c
	// Line 1218, Address: 0x25a2d8, Func Offset: 0x38
	// Line 1219, Address: 0x25a2ec, Func Offset: 0x4c
	// Line 1221, Address: 0x25a2f0, Func Offset: 0x50
	// Line 1222, Address: 0x25a2f4, Func Offset: 0x54
	// Func End, Address: 0x25a304, Func Offset: 0x64
}

// 
// Start address: 0x25a310
unsigned int Object_Group_Manager(Object_Group_Infomeation* pInfo)
{
	unsigned int result;
	// Line 1235, Address: 0x25a310, Func Offset: 0
	// Line 1236, Address: 0x25a320, Func Offset: 0x10
	// Line 1238, Address: 0x25a324, Func Offset: 0x14
	// Line 1239, Address: 0x25a32c, Func Offset: 0x1c
	// Line 1246, Address: 0x25a34c, Func Offset: 0x3c
	// Line 1247, Address: 0x25a354, Func Offset: 0x44
	// Line 1249, Address: 0x25a35c, Func Offset: 0x4c
	// Line 1251, Address: 0x25a364, Func Offset: 0x54
	// Line 1253, Address: 0x25a370, Func Offset: 0x60
	// Line 1261, Address: 0x25a378, Func Offset: 0x68
	// Line 1264, Address: 0x25a384, Func Offset: 0x74
	// Line 1265, Address: 0x25a38c, Func Offset: 0x7c
	// Line 1266, Address: 0x25a398, Func Offset: 0x88
	// Line 1274, Address: 0x25a3a0, Func Offset: 0x90
	// Line 1281, Address: 0x25a3a4, Func Offset: 0x94
	// Func End, Address: 0x25a3b8, Func Offset: 0xa8
}

// 
// Start address: 0x25a3c0
unsigned int Object_Group_Infomeation_Set(Object_Group_Infomeation* pInfo)
{
	unsigned int result;
	// Line 1298, Address: 0x25a3c0, Func Offset: 0
	// Line 1300, Address: 0x25a3c4, Func Offset: 0x4
	// Line 1301, Address: 0x25a3cc, Func Offset: 0xc
	// Line 1302, Address: 0x25a3d4, Func Offset: 0x14
	// Line 1306, Address: 0x25a3d8, Func Offset: 0x18
	// Func End, Address: 0x25a3e0, Func Offset: 0x20
}

// 
// Start address: 0x25a3e0
unsigned int Object_Group_QueueInfomeation_Set(Object_Group_Infomeation* pInfo, ImpactQueue_Element* pElement_Base, unsigned int Length_Max)
{
	ImpactQueue_Object* pQueue_Info;
	unsigned int result;
	// Line 1320, Address: 0x25a3e0, Func Offset: 0
	// Line 1321, Address: 0x25a3e8, Func Offset: 0x8
	// Line 1322, Address: 0x25a3ec, Func Offset: 0xc
	// Line 1324, Address: 0x25a3f0, Func Offset: 0x10
	// Line 1326, Address: 0x25a408, Func Offset: 0x28
	// Line 1327, Address: 0x25a40c, Func Offset: 0x2c
	// Line 1329, Address: 0x25a410, Func Offset: 0x30
	// Line 1330, Address: 0x25a41c, Func Offset: 0x3c
	// Line 1333, Address: 0x25a420, Func Offset: 0x40
	// Func End, Address: 0x25a430, Func Offset: 0x50
}

// 
// Start address: 0x25a430
unsigned int Object_Group_ClassAssociationInfomeation_Set(Object_Group_Infomeation* pInfo, Object_Class* pClass_List, Object_DataPool_Infomeation* pPool_Info_Base, unsigned int* pClass_Priority_List, unsigned int Class_Max)
{
	unsigned int result;
	// Line 1355, Address: 0x25a430, Func Offset: 0
	// Line 1357, Address: 0x25a434, Func Offset: 0x4
	// Line 1358, Address: 0x25a45c, Func Offset: 0x2c
	// Line 1359, Address: 0x25a460, Func Offset: 0x30
	// Line 1360, Address: 0x25a464, Func Offset: 0x34
	// Line 1361, Address: 0x25a468, Func Offset: 0x38
	// Line 1362, Address: 0x25a46c, Func Offset: 0x3c
	// Line 1365, Address: 0x25a470, Func Offset: 0x40
	// Func End, Address: 0x25a478, Func Offset: 0x48
}

// 
// Start address: 0x25a480
unsigned int Object_Group_InstanceTableInfomeation_Set(Object_Group_Infomeation* pInfo, Object_Instance* pInstance_Base, Object_Instance** pInstance_HierarchyTable, unsigned int Instance_Max)
{
	unsigned int result;
	// Line 1381, Address: 0x25a480, Func Offset: 0
	// Line 1383, Address: 0x25a484, Func Offset: 0x4
	// Line 1384, Address: 0x25a4a4, Func Offset: 0x24
	// Line 1385, Address: 0x25a4a8, Func Offset: 0x28
	// Line 1386, Address: 0x25a4ac, Func Offset: 0x2c
	// Line 1388, Address: 0x25a4b0, Func Offset: 0x30
	// Line 1389, Address: 0x25a4b4, Func Offset: 0x34
	// Line 1390, Address: 0x25a4b8, Func Offset: 0x38
	// Line 1393, Address: 0x25a4bc, Func Offset: 0x3c
	// Func End, Address: 0x25a4c4, Func Offset: 0x44
}

// 
// Start address: 0x25a4d0
unsigned int Object_Group_All_Initialize(Object_Group_Infomeation* pInfo)
{
	unsigned int result;
	// Line 1410, Address: 0x25a4d0, Func Offset: 0
	// Line 1411, Address: 0x25a4e0, Func Offset: 0x10
	// Line 1413, Address: 0x25a4e4, Func Offset: 0x14
	// Line 1414, Address: 0x25a4ec, Func Offset: 0x1c
	// Line 1415, Address: 0x25a4f4, Func Offset: 0x24
	// Line 1416, Address: 0x25a500, Func Offset: 0x30
	// Line 1417, Address: 0x25a50c, Func Offset: 0x3c
	// Line 1420, Address: 0x25a510, Func Offset: 0x40
	// Func End, Address: 0x25a524, Func Offset: 0x54
}

// 
// Start address: 0x25a530
unsigned int Object_Group_InstanceTable_DesignateClassDescriptorAttach_Initialize(Object_Group_Infomeation* pInfo, unsigned int Class_Descriptor)
{
	// Line 1433, Address: 0x25a530, Func Offset: 0
	// Line 1434, Address: 0x25a538, Func Offset: 0x8
	// Line 1435, Address: 0x25a540, Func Offset: 0x10
	// Func End, Address: 0x25a550, Func Offset: 0x20
}

// 
// Start address: 0x25a550
unsigned int Object_Group_InstanceTable_DesignateInstanceHandleAttach_Initialize(Object_Group_Infomeation* pInfo, unsigned int hInstance)
{
	Object_Instance* pInstance;
	unsigned int result;
	// Line 1448, Address: 0x25a550, Func Offset: 0
	// Line 1449, Address: 0x25a558, Func Offset: 0x8
	// Line 1451, Address: 0x25a55c, Func Offset: 0xc
	// Line 1452, Address: 0x25a564, Func Offset: 0x14
	// Line 1454, Address: 0x25a56c, Func Offset: 0x1c
	// Line 1461, Address: 0x25a58c, Func Offset: 0x3c
	// Func End, Address: 0x25a59c, Func Offset: 0x4c
}

// 
// Start address: 0x25a5a0
unsigned int ObjectInstance_DesignateClassDescriptorAttach_Count(Object_Group_Infomeation* pInfo, unsigned int Class_Descriptor)
{
	// Line 1478, Address: 0x25a5a0, Func Offset: 0
	// Line 1479, Address: 0x25a5a8, Func Offset: 0x8
	// Line 1480, Address: 0x25a5b4, Func Offset: 0x14
	// Func End, Address: 0x25a5c4, Func Offset: 0x24
}

// 
// Start address: 0x25a5d0
unsigned int ObjectInstanceHandle_Get_from_ClassDescriptor_and_AttachCount(Object_Group_Infomeation* pInfo, unsigned int Class_Descriptor, unsigned int CountIndex)
{
	// Line 1494, Address: 0x25a5d0, Func Offset: 0
	// Line 1495, Address: 0x25a5d8, Func Offset: 0x8
	// Line 1496, Address: 0x25a5e4, Func Offset: 0x14
	// Func End, Address: 0x25a5f4, Func Offset: 0x24
}

// 
// Start address: 0x25a600
ImpactQueue_Element* ObjectInstance_Element_Get(Object_Group_Infomeation* pInfo, unsigned int hInstance)
{
	Object_Instance* pInstance;
	ImpactQueue_Element* result;
	// Line 1510, Address: 0x25a600, Func Offset: 0
	// Line 1511, Address: 0x25a608, Func Offset: 0x8
	// Line 1512, Address: 0x25a60c, Func Offset: 0xc
	// Line 1514, Address: 0x25a614, Func Offset: 0x14
	// Line 1515, Address: 0x25a61c, Func Offset: 0x1c
	// Line 1517, Address: 0x25a620, Func Offset: 0x20
	// Line 1518, Address: 0x25a624, Func Offset: 0x24
	// Func End, Address: 0x25a634, Func Offset: 0x34
}

// 
// Start address: 0x25a640
void* ObjectInstance_DataBlock_Get(Object_Group_Infomeation* pInfo, unsigned int hInstance)
{
	Object_Instance* pInstance;
	void* result;
	// Line 1531, Address: 0x25a640, Func Offset: 0
	// Line 1532, Address: 0x25a648, Func Offset: 0x8
	// Line 1533, Address: 0x25a64c, Func Offset: 0xc
	// Line 1535, Address: 0x25a654, Func Offset: 0x14
	// Line 1536, Address: 0x25a65c, Func Offset: 0x1c
	// Line 1538, Address: 0x25a664, Func Offset: 0x24
	// Line 1539, Address: 0x25a668, Func Offset: 0x28
	// Func End, Address: 0x25a678, Func Offset: 0x38
}

