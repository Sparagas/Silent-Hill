typedef struct ImpactQueue_Element;
typedef struct Object_Class_Association_Infomeation;
typedef struct Object_DataBlock_Header;
typedef struct Object_Instance;
typedef struct Object_DataPool_Infomeation;
typedef struct ImpactQueue_Object;
typedef struct ImpactQueue_ElementOption;
typedef struct Object_Group_Infomeation;
typedef struct Object_InstanceTable_Infomeation;

typedef unsigned int(*type_0)(void*, ImpactQueue_Element*);
typedef unsigned int(*type_4)(void*, ImpactQueue_Element*);

typedef float type_1[4][2];
typedef float type_2[2];
typedef int type_3[2];
typedef float type_5[4];

struct ImpactQueue_Element
{
	unsigned int Class_Descriptor;
	unsigned int hInstance;
	ImpactQueue_ElementOption Option;
};

struct Object_Class_Association_Infomeation
{
	unsigned int Class_Max;
	unsigned int(*pClass)(void*, ImpactQueue_Element*);
	Object_DataPool_Infomeation* pDataPool_Info;
};

struct Object_DataBlock_Header
{
	unsigned int Enable;
};

struct Object_Instance
{
	unsigned int Enable;
	unsigned int hInstance;
	ImpactQueue_Element Element;
	void* pBlock;
	float Timer;
};

struct Object_DataPool_Infomeation
{
	unsigned int Block_Size;
	unsigned int Block_Index_Max;
	void* pBlock_Table;
};

struct ImpactQueue_Object
{
	unsigned int enQueue;
	unsigned int deQueue;
	unsigned int Length_Current;
	unsigned int Length_Max;
	ImpactQueue_Element* pElement;
};

struct ImpactQueue_ElementOption
{
	float Vector[4][2];
	float Float_Value[2];
	int Int_Value[2];
};

struct Object_Group_Infomeation
{
	Object_Class_Association_Infomeation Association_Info;
	Object_InstanceTable_Infomeation InstanceTable_Info;
	ImpactQueue_Object Queue_Info;
	unsigned int Enable;
	unsigned int Step;
};

struct Object_InstanceTable_Infomeation
{
	unsigned int hInstance_History;
	unsigned int Instance_Max;
	Object_Instance* pInstanceTable;
};


unsigned int ImpactManager(Object_Group_Infomeation* pInfo);
unsigned int InstanceManager(Object_Group_Infomeation* pInfo);
unsigned int Instance_Execute(Object_Class_Association_Infomeation* pInfo, Object_Instance* pInstance);
void QueueObject_Initialize(ImpactQueue_Object* pQueue);
unsigned int QueueObject_enQueue(ImpactQueue_Object* pQueue, ImpactQueue_Element* pElement);
unsigned int QueueObject_deQueue(ImpactQueue_Object* pQueue, ImpactQueue_Element* pElement);
unsigned int InstanceHandle_Create(Object_InstanceTable_Infomeation* pInfo);
Object_Instance* Instance_Search_from_InstanceHandle(Object_InstanceTable_Infomeation* pInfo, unsigned int hInstance);
Object_Instance* Instance_FreeEntry_Search(Object_InstanceTable_Infomeation* pInfo);
unsigned int Instance_DesignateClassDescriptorAttach_Count(Object_InstanceTable_Infomeation* pInfo, unsigned int Class_Descriptor);
unsigned int InstanceHandle_Get_from_ClassDescriptor_and_AttachCount(Object_InstanceTable_Infomeation* pInfo, unsigned int Class_Descriptor, unsigned int CountIndex);
unsigned int Instance_Create(Object_Group_Infomeation* pInfo, ImpactQueue_Element* pElement);
void* Object_FreeDataBlock_Search(Object_Class_Association_Infomeation* pInfo, unsigned int Class_Descriptor);
unsigned int ClassAssociation_DataPool_All_Initialize(Object_Group_Infomeation* pInfo);
unsigned int InstanceTable_All_Initialize(Object_Group_Infomeation* pInfo);
unsigned int ImpactDescriptor_Post(Object_Group_Infomeation* pInfo, ImpactQueue_Element* pDescriptor);
unsigned int Object_Group_Manager(Object_Group_Infomeation* pInfo);
unsigned int Object_GroupInfomeation_Set(Object_Group_Infomeation* pInfo);
unsigned int Object_Group_QueueInfomeation_Set(Object_Group_Infomeation* pInfo, ImpactQueue_Element* pElement_Base, unsigned int Length_Max);
unsigned int Object_Group_ClassAssociationInfomeation_Set(Object_Group_Infomeation* pInfo, unsigned int(*pClass)(void*, ImpactQueue_Element*), Object_DataPool_Infomeation* pPool_Info_Base, unsigned int Class_Max);
unsigned int Object_Group_InstanceTableInfomeation_Set(Object_Group_Infomeation* pInfo, Object_Instance* pInstance_Base, unsigned int Instance_Max);
unsigned int Object_Group_All_Initialize(Object_Group_Infomeation* pInfo);
unsigned int ObjectInstance_DesignateClassDescriptorAttach_Count(Object_Group_Infomeation* pInfo, unsigned int Class_Descriptor);
unsigned int ObjectInstanceHandle_Get_from_ClassDescriptor_and_AttachCount(Object_Group_Infomeation* pInfo, unsigned int Class_Descriptor, unsigned int CountIndex);
ImpactQueue_Element* ObjectInstance_Element_Get(Object_Group_Infomeation* pInfo, unsigned int hInstance);
void* ObjectInstance_DataBlock_Get(Object_Group_Infomeation* pInfo, unsigned int hInstance);

// 
// Start address: 0x248dd0
unsigned int ImpactManager(Object_Group_Infomeation* pInfo)
{
	Object_Instance* pInstance;
	ImpactQueue_Element element;
	unsigned int result;
	// Line 120, Address: 0x248dd0, Func Offset: 0
	// Line 121, Address: 0x248de4, Func Offset: 0x14
	// Line 124, Address: 0x248de8, Func Offset: 0x18
	// Line 127, Address: 0x248df0, Func Offset: 0x20
	// Line 130, Address: 0x248dfc, Func Offset: 0x2c
	// Line 132, Address: 0x248e14, Func Offset: 0x44
	// Line 134, Address: 0x248e1c, Func Offset: 0x4c
	// Line 135, Address: 0x248e3c, Func Offset: 0x6c
	// Line 140, Address: 0x248e40, Func Offset: 0x70
	// Line 143, Address: 0x248e48, Func Offset: 0x78
	// Line 144, Address: 0x248e60, Func Offset: 0x90
	// Line 150, Address: 0x248e64, Func Offset: 0x94
	// Line 155, Address: 0x248e68, Func Offset: 0x98
	// Line 156, Address: 0x248e84, Func Offset: 0xb4
	// Line 157, Address: 0x248e88, Func Offset: 0xb8
	// Func End, Address: 0x248ea0, Func Offset: 0xd0
}

// 
// Start address: 0x248ea0
unsigned int InstanceManager(Object_Group_Infomeation* pInfo)
{
	Object_Instance* pInstance;
	unsigned int j;
	Object_InstanceTable_Infomeation* pInstance_Info;
	Object_Class_Association_Infomeation* pClass_Info;
	unsigned int i;
	unsigned int result;
	// Line 170, Address: 0x248ea0, Func Offset: 0
	// Line 171, Address: 0x248ec4, Func Offset: 0x24
	// Line 173, Address: 0x248ec8, Func Offset: 0x28
	// Line 174, Address: 0x248ecc, Func Offset: 0x2c
	// Line 185, Address: 0x248ed4, Func Offset: 0x34
	// Line 189, Address: 0x248ee0, Func Offset: 0x40
	// Line 190, Address: 0x248eec, Func Offset: 0x4c
	// Line 192, Address: 0x248f00, Func Offset: 0x60
	// Line 193, Address: 0x248f0c, Func Offset: 0x6c
	// Line 194, Address: 0x248f18, Func Offset: 0x78
	// Line 195, Address: 0x248f2c, Func Offset: 0x8c
	// Line 197, Address: 0x248f30, Func Offset: 0x90
	// Line 199, Address: 0x248f48, Func Offset: 0xa8
	// Line 210, Address: 0x248f60, Func Offset: 0xc0
	// Line 211, Address: 0x248f64, Func Offset: 0xc4
	// Func End, Address: 0x248f8c, Func Offset: 0xec
}

// 
// Start address: 0x248f90
unsigned int Instance_Execute(Object_Class_Association_Infomeation* pInfo, Object_Instance* pInstance)
{
	Object_DataPool_Infomeation* pPool_Info;
	unsigned int descriptor;
	unsigned int result;
	// Line 224, Address: 0x248f90, Func Offset: 0
	// Line 225, Address: 0x248fb0, Func Offset: 0x20
	// Line 226, Address: 0x248fb4, Func Offset: 0x24
	// Line 229, Address: 0x248fbc, Func Offset: 0x2c
	// Line 231, Address: 0x248fe8, Func Offset: 0x58
	// Line 233, Address: 0x248ffc, Func Offset: 0x6c
	// Line 235, Address: 0x249014, Func Offset: 0x84
	// Line 237, Address: 0x24902c, Func Offset: 0x9c
	// Line 238, Address: 0x249034, Func Offset: 0xa4
	// Line 240, Address: 0x249038, Func Offset: 0xa8
	// Line 242, Address: 0x249058, Func Offset: 0xc8
	// Line 243, Address: 0x24905c, Func Offset: 0xcc
	// Func End, Address: 0x24907c, Func Offset: 0xec
}

// 
// Start address: 0x249080
void QueueObject_Initialize(ImpactQueue_Object* pQueue)
{
	// Line 258, Address: 0x249080, Func Offset: 0
	// Line 259, Address: 0x249088, Func Offset: 0x8
	// Line 260, Address: 0x249090, Func Offset: 0x10
	// Line 261, Address: 0x249098, Func Offset: 0x18
	// Line 262, Address: 0x2490a0, Func Offset: 0x20
	// Func End, Address: 0x2490ac, Func Offset: 0x2c
}

// 
// Start address: 0x2490b0
unsigned int QueueObject_enQueue(ImpactQueue_Object* pQueue, ImpactQueue_Element* pElement)
{
	unsigned int result;
	// Line 275, Address: 0x2490b0, Func Offset: 0
	// Line 276, Address: 0x2490c0, Func Offset: 0x10
	// Line 278, Address: 0x2490c4, Func Offset: 0x14
	// Line 279, Address: 0x2490e0, Func Offset: 0x30
	// Line 280, Address: 0x249124, Func Offset: 0x74
	// Line 281, Address: 0x24914c, Func Offset: 0x9c
	// Line 282, Address: 0x24915c, Func Offset: 0xac
	// Line 284, Address: 0x249160, Func Offset: 0xb0
	// Line 285, Address: 0x249164, Func Offset: 0xb4
	// Func End, Address: 0x249174, Func Offset: 0xc4
}

// 
// Start address: 0x249180
unsigned int QueueObject_deQueue(ImpactQueue_Object* pQueue, ImpactQueue_Element* pElement)
{
	unsigned int result;
	// Line 298, Address: 0x249180, Func Offset: 0
	// Line 299, Address: 0x249190, Func Offset: 0x10
	// Line 301, Address: 0x249194, Func Offset: 0x14
	// Line 302, Address: 0x2491a4, Func Offset: 0x24
	// Line 303, Address: 0x2491e8, Func Offset: 0x68
	// Line 304, Address: 0x24920c, Func Offset: 0x8c
	// Line 305, Address: 0x24921c, Func Offset: 0x9c
	// Line 307, Address: 0x249220, Func Offset: 0xa0
	// Line 308, Address: 0x249224, Func Offset: 0xa4
	// Func End, Address: 0x249234, Func Offset: 0xb4
}

// 
// Start address: 0x249240
unsigned int InstanceHandle_Create(Object_InstanceTable_Infomeation* pInfo)
{
	unsigned int result;
	// Line 350, Address: 0x249240, Func Offset: 0
	// Line 351, Address: 0x249250, Func Offset: 0x10
	// Line 353, Address: 0x24925c, Func Offset: 0x1c
	// Line 354, Address: 0x249264, Func Offset: 0x24
	// Line 355, Address: 0x249268, Func Offset: 0x28
	// Line 356, Address: 0x249270, Func Offset: 0x30
	// Line 357, Address: 0x249274, Func Offset: 0x34
	// Line 358, Address: 0x249278, Func Offset: 0x38
	// Line 359, Address: 0x249290, Func Offset: 0x50
	// Line 361, Address: 0x249298, Func Offset: 0x58
	// Line 362, Address: 0x24929c, Func Offset: 0x5c
	// Func End, Address: 0x2492b0, Func Offset: 0x70
}

// 
// Start address: 0x2492b0
Object_Instance* Instance_Search_from_InstanceHandle(Object_InstanceTable_Infomeation* pInfo, unsigned int hInstance)
{
	Object_Instance* pInstance;
	unsigned int i;
	Object_Instance* result;
	// Line 375, Address: 0x2492b0, Func Offset: 0
	// Line 376, Address: 0x2492c8, Func Offset: 0x18
	// Line 379, Address: 0x2492cc, Func Offset: 0x1c
	// Line 380, Address: 0x2492d8, Func Offset: 0x28
	// Line 382, Address: 0x2492f0, Func Offset: 0x40
	// Line 383, Address: 0x2492fc, Func Offset: 0x4c
	// Line 384, Address: 0x24930c, Func Offset: 0x5c
	// Line 385, Address: 0x249310, Func Offset: 0x60
	// Line 388, Address: 0x249318, Func Offset: 0x68
	// Line 389, Address: 0x249338, Func Offset: 0x88
	// Line 390, Address: 0x24933c, Func Offset: 0x8c
	// Func End, Address: 0x249354, Func Offset: 0xa4
}

// 
// Start address: 0x249360
Object_Instance* Instance_FreeEntry_Search(Object_InstanceTable_Infomeation* pInfo)
{
	Object_Instance* pInstance;
	unsigned int i;
	Object_Instance* result;
	// Line 402, Address: 0x249360, Func Offset: 0
	// Line 403, Address: 0x249374, Func Offset: 0x14
	// Line 406, Address: 0x249378, Func Offset: 0x18
	// Line 407, Address: 0x249384, Func Offset: 0x24
	// Line 409, Address: 0x24939c, Func Offset: 0x3c
	// Line 410, Address: 0x2493a8, Func Offset: 0x48
	// Line 411, Address: 0x2493ac, Func Offset: 0x4c
	// Line 413, Address: 0x2493b4, Func Offset: 0x54
	// Line 414, Address: 0x2493d0, Func Offset: 0x70
	// Line 415, Address: 0x2493d4, Func Offset: 0x74
	// Func End, Address: 0x2493ec, Func Offset: 0x8c
}

// 
// Start address: 0x2493f0
unsigned int Instance_DesignateClassDescriptorAttach_Count(Object_InstanceTable_Infomeation* pInfo, unsigned int Class_Descriptor)
{
	Object_Instance* pInstance;
	unsigned int i;
	unsigned int result;
	// Line 427, Address: 0x2493f0, Func Offset: 0
	// Line 428, Address: 0x249408, Func Offset: 0x18
	// Line 431, Address: 0x24940c, Func Offset: 0x1c
	// Line 432, Address: 0x249418, Func Offset: 0x28
	// Line 434, Address: 0x249430, Func Offset: 0x40
	// Line 435, Address: 0x24943c, Func Offset: 0x4c
	// Line 437, Address: 0x24944c, Func Offset: 0x5c
	// Line 440, Address: 0x249450, Func Offset: 0x60
	// Line 441, Address: 0x24946c, Func Offset: 0x7c
	// Line 442, Address: 0x249470, Func Offset: 0x80
	// Func End, Address: 0x249488, Func Offset: 0x98
}

// 
// Start address: 0x249490
unsigned int InstanceHandle_Get_from_ClassDescriptor_and_AttachCount(Object_InstanceTable_Infomeation* pInfo, unsigned int Class_Descriptor, unsigned int CountIndex)
{
	Object_Instance* pInstance;
	unsigned int i;
	unsigned int count;
	unsigned int result;
	// Line 455, Address: 0x249490, Func Offset: 0
	// Line 456, Address: 0x2494b0, Func Offset: 0x20
	// Line 457, Address: 0x2494b4, Func Offset: 0x24
	// Line 460, Address: 0x2494b8, Func Offset: 0x28
	// Line 461, Address: 0x2494c4, Func Offset: 0x34
	// Line 463, Address: 0x2494dc, Func Offset: 0x4c
	// Line 464, Address: 0x2494e8, Func Offset: 0x58
	// Line 466, Address: 0x2494f8, Func Offset: 0x68
	// Line 468, Address: 0x249504, Func Offset: 0x74
	// Line 469, Address: 0x249508, Func Offset: 0x78
	// Line 471, Address: 0x249510, Func Offset: 0x80
	// Line 472, Address: 0x249514, Func Offset: 0x84
	// Line 474, Address: 0x249518, Func Offset: 0x88
	// Line 475, Address: 0x249538, Func Offset: 0xa8
	// Line 476, Address: 0x24953c, Func Offset: 0xac
	// Func End, Address: 0x249558, Func Offset: 0xc8
}

// 
// Start address: 0x249560
unsigned int Instance_Create(Object_Group_Infomeation* pInfo, ImpactQueue_Element* pElement)
{
	void* pBlock;
	Object_Instance* pInstance;
	unsigned int result;
	// Line 490, Address: 0x249560, Func Offset: 0
	// Line 491, Address: 0x24957c, Func Offset: 0x1c
	// Line 493, Address: 0x249580, Func Offset: 0x20
	// Line 495, Address: 0x249594, Func Offset: 0x34
	// Line 497, Address: 0x2495ac, Func Offset: 0x4c
	// Line 498, Address: 0x2495bc, Func Offset: 0x5c
	// Line 499, Address: 0x2495d0, Func Offset: 0x70
	// Line 500, Address: 0x2495d8, Func Offset: 0x78
	// Line 501, Address: 0x2495ec, Func Offset: 0x8c
	// Line 502, Address: 0x249614, Func Offset: 0xb4
	// Line 503, Address: 0x24961c, Func Offset: 0xbc
	// Line 504, Address: 0x249620, Func Offset: 0xc0
	// Line 505, Address: 0x249628, Func Offset: 0xc8
	// Line 507, Address: 0x24962c, Func Offset: 0xcc
	// Line 508, Address: 0x249630, Func Offset: 0xd0
	// Func End, Address: 0x24964c, Func Offset: 0xec
}

// 
// Start address: 0x249650
void* Object_FreeDataBlock_Search(Object_Class_Association_Infomeation* pInfo, unsigned int Class_Descriptor)
{
	Object_DataBlock_Header* pHeader;
	unsigned int i;
	Object_DataPool_Infomeation* pPool_Info;
	void* result;
	// Line 522, Address: 0x249650, Func Offset: 0
	// Line 523, Address: 0x24966c, Func Offset: 0x1c
	// Line 524, Address: 0x249670, Func Offset: 0x20
	// Line 527, Address: 0x24968c, Func Offset: 0x3c
	// Line 528, Address: 0x249698, Func Offset: 0x48
	// Line 530, Address: 0x2496a8, Func Offset: 0x58
	// Line 531, Address: 0x2496b4, Func Offset: 0x64
	// Line 532, Address: 0x2496b8, Func Offset: 0x68
	// Line 534, Address: 0x2496c0, Func Offset: 0x70
	// Line 535, Address: 0x2496d8, Func Offset: 0x88
	// Line 536, Address: 0x2496dc, Func Offset: 0x8c
	// Func End, Address: 0x2496f8, Func Offset: 0xa8
}

// 
// Start address: 0x249700
unsigned int ClassAssociation_DataPool_All_Initialize(Object_Group_Infomeation* pInfo)
{
	Object_DataPool_Infomeation* pPool_Info;
	unsigned int i;
	unsigned int result;
	// Line 626, Address: 0x249700, Func Offset: 0
	// Line 627, Address: 0x249718, Func Offset: 0x18
	// Line 629, Address: 0x24971c, Func Offset: 0x1c
	// Line 632, Address: 0x249728, Func Offset: 0x28
	// Line 633, Address: 0x249734, Func Offset: 0x34
	// Line 635, Address: 0x24974c, Func Offset: 0x4c
	// Line 636, Address: 0x249768, Func Offset: 0x68
	// Line 637, Address: 0x249784, Func Offset: 0x84
	// Line 639, Address: 0x249788, Func Offset: 0x88
	// Line 640, Address: 0x24978c, Func Offset: 0x8c
	// Func End, Address: 0x2497a8, Func Offset: 0xa8
}

// 
// Start address: 0x2497b0
unsigned int InstanceTable_All_Initialize(Object_Group_Infomeation* pInfo)
{
	unsigned int result;
	// Line 653, Address: 0x2497b0, Func Offset: 0
	// Line 654, Address: 0x2497c0, Func Offset: 0x10
	// Line 656, Address: 0x2497c4, Func Offset: 0x14
	// Line 657, Address: 0x2497d0, Func Offset: 0x20
	// Line 658, Address: 0x2497d8, Func Offset: 0x28
	// Line 659, Address: 0x249800, Func Offset: 0x50
	// Line 661, Address: 0x249804, Func Offset: 0x54
	// Line 662, Address: 0x249808, Func Offset: 0x58
	// Func End, Address: 0x24981c, Func Offset: 0x6c
}

// 
// Start address: 0x249820
unsigned int ImpactDescriptor_Post(Object_Group_Infomeation* pInfo, ImpactQueue_Element* pDescriptor)
{
	unsigned int result;
	// Line 681, Address: 0x249820, Func Offset: 0
	// Line 682, Address: 0x249834, Func Offset: 0x14
	// Line 684, Address: 0x249838, Func Offset: 0x18
	// Line 685, Address: 0x249854, Func Offset: 0x34
	// Line 687, Address: 0x249858, Func Offset: 0x38
	// Line 688, Address: 0x24985c, Func Offset: 0x3c
	// Func End, Address: 0x249870, Func Offset: 0x50
}

// 
// Start address: 0x249870
unsigned int Object_Group_Manager(Object_Group_Infomeation* pInfo)
{
	unsigned int result;
	// Line 701, Address: 0x249870, Func Offset: 0
	// Line 702, Address: 0x249880, Func Offset: 0x10
	// Line 704, Address: 0x249884, Func Offset: 0x14
	// Line 705, Address: 0x249890, Func Offset: 0x20
	// Line 710, Address: 0x2498b4, Func Offset: 0x44
	// Line 711, Address: 0x2498c0, Func Offset: 0x50
	// Line 712, Address: 0x2498c4, Func Offset: 0x54
	// Line 714, Address: 0x2498cc, Func Offset: 0x5c
	// Line 716, Address: 0x2498dc, Func Offset: 0x6c
	// Line 719, Address: 0x2498e8, Func Offset: 0x78
	// Line 721, Address: 0x2498f4, Func Offset: 0x84
	// Line 727, Address: 0x2498f8, Func Offset: 0x88
	// Line 728, Address: 0x2498fc, Func Offset: 0x8c
	// Func End, Address: 0x249910, Func Offset: 0xa0
}

// 
// Start address: 0x249910
unsigned int Object_GroupInfomeation_Set(Object_Group_Infomeation* pInfo)
{
	unsigned int result;
	// Line 744, Address: 0x249910, Func Offset: 0
	// Line 745, Address: 0x24991c, Func Offset: 0xc
	// Line 747, Address: 0x249920, Func Offset: 0x10
	// Line 748, Address: 0x24992c, Func Offset: 0x1c
	// Line 749, Address: 0x249938, Func Offset: 0x28
	// Line 750, Address: 0x249940, Func Offset: 0x30
	// Line 752, Address: 0x249944, Func Offset: 0x34
	// Line 753, Address: 0x249948, Func Offset: 0x38
	// Func End, Address: 0x249958, Func Offset: 0x48
}

// 
// Start address: 0x249960
unsigned int Object_Group_QueueInfomeation_Set(Object_Group_Infomeation* pInfo, ImpactQueue_Element* pElement_Base, unsigned int Length_Max)
{
	ImpactQueue_Object* pQueue_Info;
	unsigned int result;
	// Line 767, Address: 0x249960, Func Offset: 0
	// Line 768, Address: 0x24997c, Func Offset: 0x1c
	// Line 769, Address: 0x249980, Func Offset: 0x20
	// Line 771, Address: 0x249988, Func Offset: 0x28
	// Line 773, Address: 0x2499ac, Func Offset: 0x4c
	// Line 774, Address: 0x2499b4, Func Offset: 0x54
	// Line 776, Address: 0x2499bc, Func Offset: 0x5c
	// Line 777, Address: 0x2499c8, Func Offset: 0x68
	// Line 779, Address: 0x2499cc, Func Offset: 0x6c
	// Line 780, Address: 0x2499d0, Func Offset: 0x70
	// Func End, Address: 0x2499e8, Func Offset: 0x88
}

// 
// Start address: 0x2499f0
unsigned int Object_Group_ClassAssociationInfomeation_Set(Object_Group_Infomeation* pInfo, unsigned int(*pClass)(void*, ImpactQueue_Element*), Object_DataPool_Infomeation* pPool_Info_Base, unsigned int Class_Max)
{
	unsigned int result;
	// Line 799, Address: 0x2499f0, Func Offset: 0
	// Line 800, Address: 0x249a08, Func Offset: 0x18
	// Line 802, Address: 0x249a0c, Func Offset: 0x1c
	// Line 803, Address: 0x249a3c, Func Offset: 0x4c
	// Line 804, Address: 0x249a48, Func Offset: 0x58
	// Line 805, Address: 0x249a54, Func Offset: 0x64
	// Line 806, Address: 0x249a60, Func Offset: 0x70
	// Line 808, Address: 0x249a64, Func Offset: 0x74
	// Line 809, Address: 0x249a68, Func Offset: 0x78
	// Func End, Address: 0x249a78, Func Offset: 0x88
}

// 
// Start address: 0x249a80
unsigned int Object_Group_InstanceTableInfomeation_Set(Object_Group_Infomeation* pInfo, Object_Instance* pInstance_Base, unsigned int Instance_Max)
{
	unsigned int result;
	// Line 823, Address: 0x249a80, Func Offset: 0
	// Line 824, Address: 0x249a94, Func Offset: 0x14
	// Line 826, Address: 0x249a98, Func Offset: 0x18
	// Line 827, Address: 0x249abc, Func Offset: 0x3c
	// Line 828, Address: 0x249ac4, Func Offset: 0x44
	// Line 829, Address: 0x249ad0, Func Offset: 0x50
	// Line 830, Address: 0x249adc, Func Offset: 0x5c
	// Line 832, Address: 0x249ae0, Func Offset: 0x60
	// Line 833, Address: 0x249ae4, Func Offset: 0x64
	// Func End, Address: 0x249af4, Func Offset: 0x74
}

// 
// Start address: 0x249b00
unsigned int Object_Group_All_Initialize(Object_Group_Infomeation* pInfo)
{
	unsigned int result;
	// Line 850, Address: 0x249b00, Func Offset: 0
	// Line 851, Address: 0x249b10, Func Offset: 0x10
	// Line 853, Address: 0x249b14, Func Offset: 0x14
	// Line 854, Address: 0x249b20, Func Offset: 0x20
	// Line 855, Address: 0x249b2c, Func Offset: 0x2c
	// Line 856, Address: 0x249b38, Func Offset: 0x38
	// Line 857, Address: 0x249b48, Func Offset: 0x48
	// Line 859, Address: 0x249b4c, Func Offset: 0x4c
	// Line 860, Address: 0x249b50, Func Offset: 0x50
	// Func End, Address: 0x249b64, Func Offset: 0x64
}

// 
// Start address: 0x249b70
unsigned int ObjectInstance_DesignateClassDescriptorAttach_Count(Object_Group_Infomeation* pInfo, unsigned int Class_Descriptor)
{
	// Line 878, Address: 0x249b70, Func Offset: 0
	// Line 879, Address: 0x249b80, Func Offset: 0x10
	// Line 880, Address: 0x249b94, Func Offset: 0x24
	// Func End, Address: 0x249ba4, Func Offset: 0x34
}

// 
// Start address: 0x249bb0
unsigned int ObjectInstanceHandle_Get_from_ClassDescriptor_and_AttachCount(Object_Group_Infomeation* pInfo, unsigned int Class_Descriptor, unsigned int CountIndex)
{
	// Line 894, Address: 0x249bb0, Func Offset: 0
	// Line 895, Address: 0x249bc4, Func Offset: 0x14
	// Line 896, Address: 0x249bdc, Func Offset: 0x2c
	// Func End, Address: 0x249bec, Func Offset: 0x3c
}

// 
// Start address: 0x249bf0
ImpactQueue_Element* ObjectInstance_Element_Get(Object_Group_Infomeation* pInfo, unsigned int hInstance)
{
	Object_Instance* pInstance;
	ImpactQueue_Element* result;
	// Line 910, Address: 0x249bf0, Func Offset: 0
	// Line 911, Address: 0x249c08, Func Offset: 0x18
	// Line 912, Address: 0x249c0c, Func Offset: 0x1c
	// Line 914, Address: 0x249c24, Func Offset: 0x34
	// Line 915, Address: 0x249c2c, Func Offset: 0x3c
	// Line 917, Address: 0x249c30, Func Offset: 0x40
	// Line 918, Address: 0x249c34, Func Offset: 0x44
	// Func End, Address: 0x249c4c, Func Offset: 0x5c
}

// 
// Start address: 0x249c50
void* ObjectInstance_DataBlock_Get(Object_Group_Infomeation* pInfo, unsigned int hInstance)
{
	Object_Instance* pInstance;
	void* result;
	// Line 931, Address: 0x249c50, Func Offset: 0
	// Line 932, Address: 0x249c68, Func Offset: 0x18
	// Line 933, Address: 0x249c6c, Func Offset: 0x1c
	// Line 935, Address: 0x249c84, Func Offset: 0x34
	// Line 936, Address: 0x249c8c, Func Offset: 0x3c
	// Line 938, Address: 0x249c94, Func Offset: 0x44
	// Line 939, Address: 0x249c98, Func Offset: 0x48
	// Func End, Address: 0x249cb0, Func Offset: 0x60
}

