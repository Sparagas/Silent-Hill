typedef struct Object_Instance;
typedef struct Object_InstanceTable_Infomeation;
typedef struct Object_Group_Infomeation;
typedef struct MemoryPool_AssociationInfomeation;
typedef struct Object_DataPool_Infomeation;
typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_Element;
typedef struct ImpactQueue_ElementOption;
typedef struct ImpactQueue_Object;
typedef struct Object_Class;
typedef struct Object_Class_Association_Infomeation;

typedef unsigned int(*type_32)(void*, unsigned int);
typedef unsigned int(*type_36)(void*, ImpactQueue_Element*);
typedef unsigned int(*type_37)(void*, unsigned int);

typedef int type_0[1];
typedef int type_1[1];
typedef int type_2[1];
typedef unsigned int type_3[49];
typedef int type_4[1];
typedef int type_5[1];
typedef int type_6[1];
typedef int type_7[1];
typedef int type_8[1];
typedef float type_9[4][2];
typedef int type_10[1];
typedef float type_11[4][2];
typedef int type_12[1];
typedef float type_13[2];
typedef int type_14[1];
typedef int type_15[2];
typedef Object_DataPool_Infomeation type_16[48];
typedef float type_17[4];
typedef int type_18[1];
typedef unsigned int type_19[1];
typedef ImpactQueue_Element type_20[500];
typedef Object_Group_Infomeation type_21[1];
typedef int type_22[1];
typedef int type_23[1];
typedef Object_Instance type_24[600];
typedef int type_25[2];
typedef int type_26[2][18];
typedef Object_Instance* type_27[48];
typedef int type_28[1];
typedef int type_29[1];
typedef Object_Class type_30[48];
typedef int type_31[1];
typedef int type_33[1];
typedef int type_34[1];
typedef int type_35[1];
typedef int type_38[1];
typedef int type_39[1];
typedef MemoryPool_AssociationInfomeation type_40[48];
typedef float type_41[4][2];

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

struct Object_InstanceTable_Infomeation
{
	Object_Instance* pInstanceTable;
	unsigned int Instance_Max;
	unsigned int hInstance_History;
	Object_Instance** pHierarchyTable;
	Object_Instance* pFreeTable;
};

struct Object_Group_Infomeation
{
	Object_Class_Association_Infomeation Association_Info;
	Object_InstanceTable_Infomeation InstanceTable_Info;
	ImpactQueue_Object Queue_Info;
	unsigned int Enable;
	unsigned int Step;
};

struct MemoryPool_AssociationInfomeation
{
	unsigned int Existent;
	Object_DataPool_Infomeation DataPool_Info;
	unsigned int LinkList_Max;
	int* pLinkList;
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

struct ImpactQueue_Object
{
	unsigned int enQueue;
	unsigned int deQueue;
	unsigned int Length_Current;
	unsigned int Length_Max;
	ImpactQueue_Element* pElement;
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

Object_Class _pObject_Class_List[48];
int _blood_splash_02_list[1];
int _blood_05_list[1];
int _fire_pheno_list[1];
int _glass_list[1];
int _water_01_list[1];
int _water_02_list[1];
int _water_03_list[1];
int _water_04_list[1];
int _water_06_list[1];
int _water_07_list[1];
int _water_08_list[1];
int _water_09_list[1];
int _water_10_list[1];
int _water_11_list[1];
int _water_12_list[1];
int _water_13_list[1];
int _water_14_list[1];
int _water_15_list[1];
int _water_30_list[1];
int _water_80_list[1];
int _water_90_list[1];
int _boat_mask_list[1];
MemoryPool_AssociationInfomeation _MemoryPool_AssociationInfo_Table[48];
unsigned int _Object_Class_Priority_List[49];
int _AutoPost_Association_List[2][18];
Object_Instance* _pHierarchyTable[48];
Object_Instance _Object_instance_table[600];
Object_DataPool_Infomeation _Object_Data_Table[48];
ImpactQueue_Element _Queue[500];
float dir_table[4][2];
Object_Group_Infomeation _Object_Group_Info[1];
float dir_table2[4][2];

unsigned int MemoryPool_AllRelease(Object_DataPool_Infomeation* pPool_Info_Table, MemoryPool_AssociationInfomeation* pAssoci_Info_Table, unsigned int Class_Kind_Max);
unsigned int MemoryPool_Inspect_and_Allocate(Object_DataPool_Infomeation* pPool_Info_Table, MemoryPool_AssociationInfomeation* pAssoci_Info_Table, unsigned int Class_Kind_Max);
unsigned int MemoryPool_AllClear(Object_DataPool_Infomeation* pPool_Info_Table, MemoryPool_AssociationInfomeation* pAssoci_Info_Table, unsigned int Class_Kind_Max);
unsigned int MemoryPool_Controller(Object_DataPool_Infomeation* pPool_Info_Table, MemoryPool_AssociationInfomeation* pAssoci_Info_Table, unsigned int Class_Kind_Max);
void Effect_Object_Initialize();
void HH_Effect_Object_Impact_Post(ImpactQueue_Element* pElement);
void HH_Effect_Object_DesignateClassInstance_Clear(unsigned int Class_Descriptor);
void HH_Effect_Object_DesignateHandleInstance_Clear(unsigned int hInstance);
Object_Group_Infomeation* HH_Effect_Object_Infomeation_Get();
void HH_Effect_Object_Manager();
unsigned int HH_Effect_Object_MemoryBlock_Allocate();
void HH_Effect_Object_AutoPost();

// 
// Start address: 0x269db0
unsigned int MemoryPool_AllRelease(Object_DataPool_Infomeation* pPool_Info_Table, MemoryPool_AssociationInfomeation* pAssoci_Info_Table, unsigned int Class_Kind_Max)
{
	Object_DataPool_Infomeation* pPool_Info;
	MemoryPool_AssociationInfomeation* pAssoci_Info;
	Object_DataPool_Infomeation DataInfo_NULL;
	unsigned int i;
	unsigned int result;
	// Line 1086, Address: 0x269db0, Func Offset: 0
	// Line 1091, Address: 0x269dc8, Func Offset: 0x18
	// Line 1093, Address: 0x269ddc, Func Offset: 0x2c
	// Line 1095, Address: 0x269de8, Func Offset: 0x38
	// Line 1111, Address: 0x269df0, Func Offset: 0x40
	// Line 1112, Address: 0x269dfc, Func Offset: 0x4c
	// Line 1113, Address: 0x269e0c, Func Offset: 0x5c
	// Line 1114, Address: 0x269e10, Func Offset: 0x60
	// Func End, Address: 0x269e28, Func Offset: 0x78
}

// 
// Start address: 0x269e30
unsigned int MemoryPool_Inspect_and_Allocate(Object_DataPool_Infomeation* pPool_Info_Table, MemoryPool_AssociationInfomeation* pAssoci_Info_Table, unsigned int Class_Kind_Max)
{
	unsigned int j;
	int room_name;
	Object_DataPool_Infomeation* pPool_Info;
	MemoryPool_AssociationInfomeation* pAssoci_Info;
	unsigned int End;
	unsigned int Base;
	void* pAddress;
	unsigned int result;
	unsigned int i;
	// Line 1129, Address: 0x269e30, Func Offset: 0
	// Line 1131, Address: 0x269e68, Func Offset: 0x38
	// Line 1132, Address: 0x269e6c, Func Offset: 0x3c
	// Line 1134, Address: 0x269e7c, Func Offset: 0x4c
	// Line 1138, Address: 0x269e80, Func Offset: 0x50
	// Line 1139, Address: 0x269e8c, Func Offset: 0x5c
	// Line 1140, Address: 0x269e9c, Func Offset: 0x6c
	// Line 1142, Address: 0x269ea4, Func Offset: 0x74
	// Line 1144, Address: 0x269ed0, Func Offset: 0xa0
	// Line 1146, Address: 0x269ed8, Func Offset: 0xa8
	// Line 1147, Address: 0x269ee4, Func Offset: 0xb4
	// Line 1149, Address: 0x269ee8, Func Offset: 0xb8
	// Line 1151, Address: 0x269f00, Func Offset: 0xd0
	// Line 1152, Address: 0x269f04, Func Offset: 0xd4
	// Line 1155, Address: 0x269f0c, Func Offset: 0xdc
	// Line 1158, Address: 0x269f14, Func Offset: 0xe4
	// Line 1159, Address: 0x269f20, Func Offset: 0xf0
	// Line 1160, Address: 0x269f38, Func Offset: 0x108
	// Line 1163, Address: 0x269f40, Func Offset: 0x110
	// Line 1165, Address: 0x269f44, Func Offset: 0x114
	// Line 1166, Address: 0x269f5c, Func Offset: 0x12c
	// Line 1167, Address: 0x269f60, Func Offset: 0x130
	// Line 1169, Address: 0x269f68, Func Offset: 0x138
	// Line 1176, Address: 0x269f80, Func Offset: 0x150
	// Line 1179, Address: 0x269f94, Func Offset: 0x164
	// Line 1182, Address: 0x269fac, Func Offset: 0x17c
	// Line 1183, Address: 0x269fb0, Func Offset: 0x180
	// Func End, Address: 0x269fe4, Func Offset: 0x1b4
}

// 
// Start address: 0x269ff0
unsigned int MemoryPool_AllClear(Object_DataPool_Infomeation* pPool_Info_Table, MemoryPool_AssociationInfomeation* pAssoci_Info_Table, unsigned int Class_Kind_Max)
{
	Object_DataPool_Infomeation* pPool_Info;
	MemoryPool_AssociationInfomeation* pAssoci_Info;
	unsigned int result;
	unsigned int i;
	// Line 1198, Address: 0x269ff0, Func Offset: 0
	// Line 1200, Address: 0x26a00c, Func Offset: 0x1c
	// Line 1202, Address: 0x26a010, Func Offset: 0x20
	// Line 1204, Address: 0x26a01c, Func Offset: 0x2c
	// Line 1206, Address: 0x26a024, Func Offset: 0x34
	// Line 1207, Address: 0x26a030, Func Offset: 0x40
	// Line 1208, Address: 0x26a048, Func Offset: 0x58
	// Line 1209, Address: 0x26a04c, Func Offset: 0x5c
	// Line 1210, Address: 0x26a050, Func Offset: 0x60
	// Line 1213, Address: 0x26a064, Func Offset: 0x74
	// Func End, Address: 0x26a080, Func Offset: 0x90
}

// 
// Start address: 0x26a080
unsigned int MemoryPool_Controller(Object_DataPool_Infomeation* pPool_Info_Table, MemoryPool_AssociationInfomeation* pAssoci_Info_Table, unsigned int Class_Kind_Max)
{
	unsigned int result;
	// Line 1230, Address: 0x26a080, Func Offset: 0
	// Line 1231, Address: 0x26a0a4, Func Offset: 0x24
	// Line 1234, Address: 0x26a0a8, Func Offset: 0x28
	// Line 1235, Address: 0x26a0bc, Func Offset: 0x3c
	// Line 1238, Address: 0x26a0c0, Func Offset: 0x40
	// Line 1241, Address: 0x26a0d8, Func Offset: 0x58
	// Line 1244, Address: 0x26a0f0, Func Offset: 0x70
	// Line 1247, Address: 0x26a108, Func Offset: 0x88
	// Line 1248, Address: 0x26a10c, Func Offset: 0x8c
	// Func End, Address: 0x26a12c, Func Offset: 0xac
}

// 
// Start address: 0x26a130
void Effect_Object_Initialize()
{
	Object_Group_Infomeation* pInfo;
	// Line 1257, Address: 0x26a130, Func Offset: 0
	// Line 1258, Address: 0x26a13c, Func Offset: 0xc
	// Line 1261, Address: 0x26a148, Func Offset: 0x18
	// Line 1262, Address: 0x26a154, Func Offset: 0x24
	// Line 1263, Address: 0x26a16c, Func Offset: 0x3c
	// Line 1264, Address: 0x26a194, Func Offset: 0x64
	// Line 1266, Address: 0x26a1b4, Func Offset: 0x84
	// Line 1267, Address: 0x26a1c0, Func Offset: 0x90
	// Func End, Address: 0x26a1d4, Func Offset: 0xa4
}

// 
// Start address: 0x26a1e0
void HH_Effect_Object_Impact_Post(ImpactQueue_Element* pElement)
{
	Object_Group_Infomeation* pInfo;
	// Line 1562, Address: 0x26a1e0, Func Offset: 0
	// Line 1563, Address: 0x26a1f0, Func Offset: 0x10
	// Line 1565, Address: 0x26a1f8, Func Offset: 0x18
	// Line 1566, Address: 0x26a208, Func Offset: 0x28
	// Func End, Address: 0x26a21c, Func Offset: 0x3c
}

// 
// Start address: 0x26a220
void HH_Effect_Object_DesignateClassInstance_Clear(unsigned int Class_Descriptor)
{
	Object_Group_Infomeation* pInfo;
	// Line 1576, Address: 0x26a220, Func Offset: 0
	// Line 1577, Address: 0x26a230, Func Offset: 0x10
	// Line 1579, Address: 0x26a238, Func Offset: 0x18
	// Line 1580, Address: 0x26a248, Func Offset: 0x28
	// Func End, Address: 0x26a25c, Func Offset: 0x3c
}

// 
// Start address: 0x26a260
void HH_Effect_Object_DesignateHandleInstance_Clear(unsigned int hInstance)
{
	Object_Group_Infomeation* pInfo;
	// Line 1590, Address: 0x26a260, Func Offset: 0
	// Line 1591, Address: 0x26a270, Func Offset: 0x10
	// Line 1593, Address: 0x26a278, Func Offset: 0x18
	// Line 1594, Address: 0x26a288, Func Offset: 0x28
	// Func End, Address: 0x26a29c, Func Offset: 0x3c
}

// 
// Start address: 0x26a2a0
Object_Group_Infomeation* HH_Effect_Object_Infomeation_Get()
{
	// Line 1607, Address: 0x26a2a0, Func Offset: 0
	// Line 1608, Address: 0x26a2a8, Func Offset: 0x8
	// Func End, Address: 0x26a2b0, Func Offset: 0x10
}

// 
// Start address: 0x26a2b0
void HH_Effect_Object_Manager()
{
	Object_Group_Infomeation* pInfo;
	// Line 1617, Address: 0x26a2b0, Func Offset: 0
	// Line 1618, Address: 0x26a2b8, Func Offset: 0x8
	// Line 1620, Address: 0x26a2c0, Func Offset: 0x10
	// Line 1622, Address: 0x26a2cc, Func Offset: 0x1c
	// Line 1632, Address: 0x26a2dc, Func Offset: 0x2c
	// Line 1638, Address: 0x26a2ec, Func Offset: 0x3c
	// Func End, Address: 0x26a2fc, Func Offset: 0x4c
}

// 
// Start address: 0x26a300
unsigned int HH_Effect_Object_MemoryBlock_Allocate()
{
	Object_DataPool_Infomeation* pPool_Info_Table;
	MemoryPool_AssociationInfomeation* pAssoci_Info_Table;
	unsigned int kind_max;
	unsigned int result;
	// Line 1652, Address: 0x26a300, Func Offset: 0
	// Line 1653, Address: 0x26a30c, Func Offset: 0xc
	// Line 1659, Address: 0x26a310, Func Offset: 0x10
	// Line 1661, Address: 0x26a334, Func Offset: 0x34
	// Line 1663, Address: 0x26a33c, Func Offset: 0x3c
	// Line 1666, Address: 0x26a340, Func Offset: 0x40
	// Line 1667, Address: 0x26a344, Func Offset: 0x44
	// Func End, Address: 0x26a358, Func Offset: 0x58
}

// 
// Start address: 0x26a360
void HH_Effect_Object_AutoPost()
{
	ImpactQueue_Element descriptor;
	int room_name;
	unsigned int i;
	// Line 1677, Address: 0x26a360, Func Offset: 0
	// Line 1679, Address: 0x26a370, Func Offset: 0x10
	// Line 1681, Address: 0x26a37c, Func Offset: 0x1c
	// Line 1682, Address: 0x26a388, Func Offset: 0x28
	// Line 1685, Address: 0x26a3a4, Func Offset: 0x44
	// Line 1686, Address: 0x26a3b8, Func Offset: 0x58
	// Line 1687, Address: 0x26a3bc, Func Offset: 0x5c
	// Line 1688, Address: 0x26a3c0, Func Offset: 0x60
	// Line 1691, Address: 0x26a3d4, Func Offset: 0x74
	// Line 1692, Address: 0x26a3d8, Func Offset: 0x78
	// Line 1693, Address: 0x26a3ec, Func Offset: 0x8c
	// Func End, Address: 0x26a404, Func Offset: 0xa4
}

