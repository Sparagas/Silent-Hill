typedef struct HH_Object_Blood_Stick_00;
typedef struct ImpactQueue_Element;
typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_ElementOption;


typedef float type_0[4][2];
typedef float type_1[2];
typedef int type_2[2];
typedef float type_3[4];
typedef unsigned int type_4[1];

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

struct ImpactQueue_Element
{
	unsigned int Class_Descriptor;
	unsigned int hInstance;
	unsigned int* pResultHandle_Address;
	unsigned int Reserved[1];
	ImpactQueue_ElementOption Option;
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

float _unit_vector_x[4];
float _unit_vector_z[4];

unsigned int Object_Initialize(HH_Object_Blood_Stick_00* pThis, ImpactQueue_Element* pElement);
unsigned int Object_Monitor(HH_Object_Blood_Stick_00* pThis, ImpactQueue_Element* pElement);
unsigned int Object_Manager(HH_Object_Blood_Stick_00* pThis, ImpactQueue_Element* pElement);
unsigned int HH_Class_Blood_Stick_00(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x257400
unsigned int Object_Initialize(HH_Object_Blood_Stick_00* pThis, ImpactQueue_Element* pElement)
{
	unsigned int result;
	// Line 121, Address: 0x257400, Func Offset: 0
	// Line 122, Address: 0x257404, Func Offset: 0x4
	// Line 123, Address: 0x25740c, Func Offset: 0xc
	// Line 125, Address: 0x257414, Func Offset: 0x14
	// Line 126, Address: 0x257418, Func Offset: 0x18
	// Func End, Address: 0x257420, Func Offset: 0x20
}

// 
// Start address: 0x257420
unsigned int Object_Monitor(HH_Object_Blood_Stick_00* pThis, ImpactQueue_Element* pElement)
{
	unsigned int result;
	// Line 139, Address: 0x257420, Func Offset: 0
	// Line 140, Address: 0x25743c, Func Offset: 0x1c
	// Line 142, Address: 0x257440, Func Offset: 0x20
	// Line 144, Address: 0x25745c, Func Offset: 0x3c
	// Line 145, Address: 0x25746c, Func Offset: 0x4c
	// Line 146, Address: 0x25747c, Func Offset: 0x5c
	// Line 150, Address: 0x257498, Func Offset: 0x78
	// Line 151, Address: 0x2574b4, Func Offset: 0x94
	// Line 152, Address: 0x2574c0, Func Offset: 0xa0
	// Line 153, Address: 0x2574c8, Func Offset: 0xa8
	// Line 157, Address: 0x2574cc, Func Offset: 0xac
	// Line 159, Address: 0x2574d0, Func Offset: 0xb0
	// Line 160, Address: 0x2574d4, Func Offset: 0xb4
	// Func End, Address: 0x2574f0, Func Offset: 0xd0
}

// 
// Start address: 0x2574f0
unsigned int Object_Manager(HH_Object_Blood_Stick_00* pThis, ImpactQueue_Element* pElement)
{
	ImpactQueue_Element descriptor;
	float* heel_location;
	float* toe_location;
	float rot_y;
	float cos_phai;
	float cos_theta;
	float toe_dir[4];
	float center_location[4];
	unsigned int result;
	// Line 173, Address: 0x2574f0, Func Offset: 0
	// Line 174, Address: 0x257518, Func Offset: 0x28
	// Line 176, Address: 0x25751c, Func Offset: 0x2c
	// Line 179, Address: 0x257538, Func Offset: 0x48
	// Line 181, Address: 0x257548, Func Offset: 0x58
	// Line 195, Address: 0x257550, Func Offset: 0x60
	// Line 196, Address: 0x257554, Func Offset: 0x64
	// Line 199, Address: 0x257558, Func Offset: 0x68
	// Line 200, Address: 0x25756c, Func Offset: 0x7c
	// Line 201, Address: 0x257584, Func Offset: 0x94
	// Line 203, Address: 0x25758c, Func Offset: 0x9c
	// Line 204, Address: 0x2575a0, Func Offset: 0xb0
	// Line 205, Address: 0x2575b0, Func Offset: 0xc0
	// Line 206, Address: 0x2575c8, Func Offset: 0xd8
	// Line 208, Address: 0x2575e0, Func Offset: 0xf0
	// Line 209, Address: 0x2575f0, Func Offset: 0x100
	// Line 210, Address: 0x257608, Func Offset: 0x118
	// Line 216, Address: 0x25760c, Func Offset: 0x11c
	// Line 217, Address: 0x257610, Func Offset: 0x120
	// Line 218, Address: 0x257614, Func Offset: 0x124
	// Line 219, Address: 0x25761c, Func Offset: 0x12c
	// Line 220, Address: 0x25762c, Func Offset: 0x13c
	// Line 222, Address: 0x2576e8, Func Offset: 0x1f8
	// Line 223, Address: 0x2576f0, Func Offset: 0x200
	// Line 224, Address: 0x2576f8, Func Offset: 0x208
	// Line 225, Address: 0x257700, Func Offset: 0x210
	// Line 228, Address: 0x25770c, Func Offset: 0x21c
	// Line 230, Address: 0x257710, Func Offset: 0x220
	// Line 232, Address: 0x257718, Func Offset: 0x228
	// Line 235, Address: 0x25771c, Func Offset: 0x22c
	// Line 236, Address: 0x257720, Func Offset: 0x230
	// Func End, Address: 0x257748, Func Offset: 0x258
}

// 
// Start address: 0x257750
unsigned int HH_Class_Blood_Stick_00(void* pBlock, ImpactQueue_Element* pElement)
{
	HH_Object_Blood_Stick_00* pThis;
	unsigned int result;
	// Line 256, Address: 0x257750, Func Offset: 0
	// Line 263, Address: 0x257760, Func Offset: 0x10
	// Line 264, Address: 0x257764, Func Offset: 0x14
	// Line 266, Address: 0x257768, Func Offset: 0x18
	// Line 269, Address: 0x257790, Func Offset: 0x40
	// Line 271, Address: 0x257798, Func Offset: 0x48
	// Line 272, Address: 0x2577a0, Func Offset: 0x50
	// Line 275, Address: 0x2577a8, Func Offset: 0x58
	// Line 277, Address: 0x2577b0, Func Offset: 0x60
	// Line 279, Address: 0x2577cc, Func Offset: 0x7c
	// Line 280, Address: 0x2577d8, Func Offset: 0x88
	// Line 283, Address: 0x2577e0, Func Offset: 0x90
	// Line 284, Address: 0x257800, Func Offset: 0xb0
	// Line 286, Address: 0x257808, Func Offset: 0xb8
	// Line 289, Address: 0x257810, Func Offset: 0xc0
	// Line 290, Address: 0x257814, Func Offset: 0xc4
	// Line 293, Address: 0x257818, Func Offset: 0xc8
	// Line 294, Address: 0x25781c, Func Offset: 0xcc
	// Func End, Address: 0x257834, Func Offset: 0xe4
}

