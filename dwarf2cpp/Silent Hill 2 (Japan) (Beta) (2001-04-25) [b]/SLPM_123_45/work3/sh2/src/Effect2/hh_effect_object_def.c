typedef struct ImpactQueue_Element;
typedef struct ImpactQueue_ElementOption;
typedef struct Object_Group_Infomeation;
typedef struct HH_Object_GlassPiece_00;
typedef struct ImpactQueue_Object;
typedef struct HH_Object_Blood_Stick_00;
typedef struct HH_Object_Blood_02;
typedef struct Object_DataPool_Infomeation;
typedef struct Object_Class_Association_Infomeation;
typedef struct HH_Object_Raise_Dust_Phenomenon_00;
typedef struct HH_Object_Blood_Pool_Phenomenon_00;
typedef struct Object_Instance;
typedef struct HH_Object_Blood_FootMark_00;
typedef struct Object_InstanceTable_Infomeation;
typedef struct HH_Object_Dust_00;
typedef struct HH_Object_Blood_03;
typedef struct HH_Object_Blood_Splash_Phenomenon_00;
typedef struct HH_Object_Blood_00;
typedef struct HH_Object_Plural_Phenomenon_00;
typedef struct HH_Object_Glass_Break_Phenomenon_00;
typedef struct Object_DataBlock_Header;
typedef struct HH_Object_Blood_Splash_Phenomenon_01;
typedef struct HH_Object_Blood_01;

typedef unsigned int(*type_4)(void*, ImpactQueue_Element*);
typedef unsigned int(*type_26)(void*, ImpactQueue_Element*);

typedef float type_0[2];
typedef int type_1[2];
typedef float type_2[4][2];
typedef float type_3[4][2];
typedef ImpactQueue_Element type_5[100];
typedef HH_Object_Blood_Pool_Phenomenon_00 type_6[4];
typedef HH_Object_Blood_Splash_Phenomenon_00 type_7[20];
typedef HH_Object_Blood_Splash_Phenomenon_01 type_8[2];
typedef HH_Object_Blood_Stick_00 type_9[2];
typedef HH_Object_Blood_FootMark_00 type_10[20];
typedef HH_Object_Blood_00 type_11[500];
typedef float type_12[4];
typedef HH_Object_Blood_01 type_13[500];
typedef HH_Object_Blood_02 type_14[40];
typedef HH_Object_Blood_03 type_15[20];
typedef float type_16[2];
typedef unsigned short type_17[2];
typedef Object_Instance type_18[600];
typedef HH_Object_Glass_Break_Phenomenon_00 type_19[4];
typedef Object_Group_Infomeation type_20[1];
typedef Object_DataPool_Infomeation type_21[14];
typedef HH_Object_GlassPiece_00 type_22[500];
typedef HH_Object_Raise_Dust_Phenomenon_00 type_23[2];
typedef HH_Object_Dust_00 type_24[50];
typedef HH_Object_Plural_Phenomenon_00 type_25[2];
typedef unsigned int(*type_27)(void*, ImpactQueue_Element*)[14];
typedef float type_28[4][2];

struct ImpactQueue_Element
{
	unsigned int Class_Descriptor;
	unsigned int hInstance;
	ImpactQueue_ElementOption Option;
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

struct HH_Object_GlassPiece_00
{
	Object_DataBlock_Header Header;
	unsigned int Step;
	unsigned int Vertex_Kind;
	float Timer;
	float Verocity_0[4];
	float Rotate[4];
};

struct ImpactQueue_Object
{
	unsigned int enQueue;
	unsigned int deQueue;
	unsigned int Length_Current;
	unsigned int Length_Max;
	ImpactQueue_Element* pElement;
};

struct HH_Object_Blood_Stick_00
{
	Object_DataBlock_Header Header;
	unsigned short Step;
	unsigned char Vertex_Kind;
	unsigned char Monitor_Step;
	float Timer;
	char Mark_Count;
	char Leftover;
	unsigned char Character_ID;
	unsigned char FootMark_Kind;
};

struct HH_Object_Blood_02
{
	Object_DataBlock_Header Header;
	unsigned short Step;
	unsigned char Vertex_Kind;
	unsigned char Scale_Kind;
	unsigned char Rgba_Kind;
	unsigned char Motion_Step;
	float Timer;
	float Rotate_Y;
	float Rgba[4];
	float Scale[4];
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

struct HH_Object_Raise_Dust_Phenomenon_00
{
	Object_DataBlock_Header Header;
	unsigned int Step;
	float Alpha;
	float Timer;
};

struct HH_Object_Blood_Pool_Phenomenon_00
{
	Object_DataBlock_Header Header;
	unsigned int Step;
	float Timer;
	unsigned short Time_Table_Index;
	unsigned short Post_Count;
};

struct Object_Instance
{
	unsigned int Enable;
	unsigned int hInstance;
	ImpactQueue_Element Element;
	void* pBlock;
	float Timer;
};

struct HH_Object_Blood_FootMark_00
{
	Object_DataBlock_Header Header;
	float Timer;
	unsigned short Step;
	unsigned short Vertex_Kind;
};

struct Object_InstanceTable_Infomeation
{
	unsigned int hInstance_History;
	unsigned int Instance_Max;
	Object_Instance* pInstanceTable;
};

struct HH_Object_Dust_00
{
	Object_DataBlock_Header Header;
	unsigned int Step;
	unsigned int Vertex_Kind;
	float Timer;
	float Verocity_0[4];
	float Scale;
	float Alpha;
	unsigned int Motion_Step;
};

struct HH_Object_Blood_03
{
	Object_DataBlock_Header Header;
	unsigned int Step;
	unsigned int Vertex_Kind;
	float Timer;
	float Verocity_0[4];
	float Scale;
	float Alpha;
	unsigned int Motion_Step;
};

struct HH_Object_Blood_Splash_Phenomenon_00
{
	Object_DataBlock_Header Header;
	unsigned int Step;
	float Timer;
	float Beta;
	float Alpha;
	float Gamma;
	float Delta;
	float Theta;
	float Phai;
	float Lambda;
	float Verocity_0;
	float Next_Discharge_Time[2];
	unsigned short Post_Count[2];
};

struct HH_Object_Blood_00
{
	Object_DataBlock_Header Header;
	unsigned short Step;
	unsigned char Vertex_Kind;
	unsigned char Scale_Kind;
	unsigned char Rgba_Kind;
	unsigned char Motion_Step;
	float Timer;
	float Rotate_Y;
	float Rgba[4];
	float Scale[4];
};

struct HH_Object_Plural_Phenomenon_00
{
	Object_DataBlock_Header Header;
	unsigned int Step;
	float Timer;
};

struct HH_Object_Glass_Break_Phenomenon_00
{
	Object_DataBlock_Header Header;
	unsigned int Step;
	float Timer;
	float Beta;
	float Alpha;
	float Gamma;
	float Delta;
	float Theta;
	float Phai;
	float Lambda;
	float Verocity_0;
	float Next_Discharge_Time;
	unsigned short Post_Count;
};

struct Object_DataBlock_Header
{
	unsigned int Enable;
};

struct HH_Object_Blood_Splash_Phenomenon_01
{
	Object_DataBlock_Header Header;
	unsigned int Step;
	float Alpha;
	float Timer;
};

struct HH_Object_Blood_01
{
	Object_DataBlock_Header Header;
	unsigned int Step;
	unsigned int Vertex_Kind;
	float Timer;
	float Verocity_0[4];
	float Alpha;
	float Scale;
	unsigned int Motion_Step;
};

unsigned int(*_pObject_Class_Table)(void*, ImpactQueue_Element*)[14];
Object_DataPool_Infomeation _Object_Data_Table[14];
float dir_table[4][2];
Object_Group_Infomeation _Object_Group_Info[1];
float dir_table2[4][2];
Object_Instance _Object_instance_table[600];
ImpactQueue_Element _Queue[100];
HH_Object_Plural_Phenomenon_00 _plural_pheno_00[2];
HH_Object_Dust_00 _dust_00[50];
HH_Object_Raise_Dust_Phenomenon_00 _raise_dust_pheno_00[2];
HH_Object_GlassPiece_00 _glass_piece_00[500];
HH_Object_Glass_Break_Phenomenon_00 _glass_break_pheno_00[4];
HH_Object_Blood_03 _blood_03[20];
HH_Object_Blood_02 _blood_02[40];
HH_Object_Blood_01 _blood_01[500];
HH_Object_Blood_00 _blood_00[500];
HH_Object_Blood_FootMark_00 _blood_footmark_00[20];
HH_Object_Blood_Stick_00 _blood_stick_00[2];
HH_Object_Blood_Splash_Phenomenon_01 _blood_splash_pheno_01[2];
HH_Object_Blood_Splash_Phenomenon_00 _blood_splash_pheno_00[20];
HH_Object_Blood_Pool_Phenomenon_00 _blood_pool_pheno_00[4];

void HH_Effect_Object_Initialize();
void HH_Effect_Object_Impact_Post(ImpactQueue_Element* pElement);
Object_Group_Infomeation* HH_Effect_Object_Infomeation_Get();
void HH_Effect_Object_Manager();

// 
// Start address: 0x24af40
void HH_Effect_Object_Initialize()
{
	Object_Group_Infomeation* pInfo;
	// Line 337, Address: 0x24af40, Func Offset: 0
	// Line 338, Address: 0x24af4c, Func Offset: 0xc
	// Line 341, Address: 0x24af58, Func Offset: 0x18
	// Line 342, Address: 0x24af64, Func Offset: 0x24
	// Line 343, Address: 0x24af7c, Func Offset: 0x3c
	// Line 344, Address: 0x24af9c, Func Offset: 0x5c
	// Line 346, Address: 0x24afb4, Func Offset: 0x74
	// Line 347, Address: 0x24afc0, Func Offset: 0x80
	// Func End, Address: 0x24afd4, Func Offset: 0x94
}

// 
// Start address: 0x24afe0
void HH_Effect_Object_Impact_Post(ImpactQueue_Element* pElement)
{
	Object_Group_Infomeation* pInfo;
	// Line 350, Address: 0x24afe0, Func Offset: 0
	// Line 351, Address: 0x24aff0, Func Offset: 0x10
	// Line 353, Address: 0x24affc, Func Offset: 0x1c
	// Line 354, Address: 0x24b00c, Func Offset: 0x2c
	// Func End, Address: 0x24b020, Func Offset: 0x40
}

// 
// Start address: 0x24b020
Object_Group_Infomeation* HH_Effect_Object_Infomeation_Get()
{
	// Line 358, Address: 0x24b020, Func Offset: 0
	// Line 359, Address: 0x24b028, Func Offset: 0x8
	// Func End, Address: 0x24b030, Func Offset: 0x10
}

// 
// Start address: 0x24b030
void HH_Effect_Object_Manager()
{
	Object_Group_Infomeation* pInfo;
	// Line 362, Address: 0x24b030, Func Offset: 0
	// Line 363, Address: 0x24b03c, Func Offset: 0xc
	// Line 365, Address: 0x24b048, Func Offset: 0x18
	// Line 367, Address: 0x24b054, Func Offset: 0x24
	// Line 373, Address: 0x24b064, Func Offset: 0x34
	// Line 377, Address: 0x24b074, Func Offset: 0x44
	// Func End, Address: 0x24b088, Func Offset: 0x58
}

