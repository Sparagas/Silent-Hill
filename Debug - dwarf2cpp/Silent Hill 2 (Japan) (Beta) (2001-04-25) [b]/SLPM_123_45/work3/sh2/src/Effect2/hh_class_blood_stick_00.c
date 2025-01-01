typedef struct ImpactQueue_Element;
typedef struct HH_Object_Blood_Stick_00;
typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_ElementOption;


typedef float type_0[2];
typedef int type_1[2];
typedef float type_2[4];
typedef float type_3[4][2];

struct ImpactQueue_Element
{
	unsigned int Class_Descriptor;
	unsigned int hInstance;
	ImpactQueue_ElementOption Option;
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

float _unit_vector_x[4];
float _unit_vector_z[4];

unsigned int Object_Initialize(HH_Object_Blood_Stick_00* pThis, ImpactQueue_Element* pElement);
unsigned int Object_Monitor(HH_Object_Blood_Stick_00* pThis, ImpactQueue_Element* pElement);
unsigned int Object_Manager(HH_Object_Blood_Stick_00* pThis, ImpactQueue_Element* pElement);
unsigned int HH_Class_Blood_Stick_00(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x2464a0
unsigned int Object_Initialize(HH_Object_Blood_Stick_00* pThis, ImpactQueue_Element* pElement)
{
	unsigned int result;
	// Line 112, Address: 0x2464a0, Func Offset: 0
	// Line 113, Address: 0x2464b0, Func Offset: 0x10
	// Line 116, Address: 0x2464b4, Func Offset: 0x14
	// Line 117, Address: 0x2464c0, Func Offset: 0x20
	// Line 118, Address: 0x2464d4, Func Offset: 0x34
	// Line 120, Address: 0x2464e8, Func Offset: 0x48
	// Line 121, Address: 0x2464ec, Func Offset: 0x4c
	// Func End, Address: 0x2464fc, Func Offset: 0x5c
}

// 
// Start address: 0x246500
unsigned int Object_Monitor(HH_Object_Blood_Stick_00* pThis, ImpactQueue_Element* pElement)
{
	unsigned int result;
	// Line 134, Address: 0x246500, Func Offset: 0
	// Line 135, Address: 0x246514, Func Offset: 0x14
	// Line 137, Address: 0x246518, Func Offset: 0x18
	// Line 139, Address: 0x246538, Func Offset: 0x38
	// Line 140, Address: 0x246558, Func Offset: 0x58
	// Line 141, Address: 0x246574, Func Offset: 0x74
	// Line 145, Address: 0x24659c, Func Offset: 0x9c
	// Line 146, Address: 0x2465bc, Func Offset: 0xbc
	// Line 147, Address: 0x2465d4, Func Offset: 0xd4
	// Line 148, Address: 0x2465e4, Func Offset: 0xe4
	// Line 152, Address: 0x2465e8, Func Offset: 0xe8
	// Line 154, Address: 0x2465f4, Func Offset: 0xf4
	// Line 155, Address: 0x2465f8, Func Offset: 0xf8
	// Func End, Address: 0x24660c, Func Offset: 0x10c
}

// 
// Start address: 0x246610
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
	// Line 168, Address: 0x246610, Func Offset: 0
	// Line 169, Address: 0x24662c, Func Offset: 0x1c
	// Line 171, Address: 0x246630, Func Offset: 0x20
	// Line 174, Address: 0x246658, Func Offset: 0x48
	// Line 176, Address: 0x246670, Func Offset: 0x60
	// Line 190, Address: 0x24667c, Func Offset: 0x6c
	// Line 191, Address: 0x246684, Func Offset: 0x74
	// Line 194, Address: 0x24668c, Func Offset: 0x7c
	// Line 195, Address: 0x2466a0, Func Offset: 0x90
	// Line 196, Address: 0x2466b8, Func Offset: 0xa8
	// Line 198, Address: 0x2466c8, Func Offset: 0xb8
	// Line 199, Address: 0x2466dc, Func Offset: 0xcc
	// Line 200, Address: 0x2466ec, Func Offset: 0xdc
	// Line 201, Address: 0x246704, Func Offset: 0xf4
	// Line 203, Address: 0x24671c, Func Offset: 0x10c
	// Line 204, Address: 0x24672c, Func Offset: 0x11c
	// Line 205, Address: 0x246748, Func Offset: 0x138
	// Line 211, Address: 0x246754, Func Offset: 0x144
	// Line 212, Address: 0x246758, Func Offset: 0x148
	// Line 213, Address: 0x246760, Func Offset: 0x150
	// Line 214, Address: 0x246770, Func Offset: 0x160
	// Line 216, Address: 0x246868, Func Offset: 0x258
	// Line 217, Address: 0x246878, Func Offset: 0x268
	// Line 218, Address: 0x246888, Func Offset: 0x278
	// Line 219, Address: 0x246898, Func Offset: 0x288
	// Line 222, Address: 0x2468a4, Func Offset: 0x294
	// Line 224, Address: 0x2468ac, Func Offset: 0x29c
	// Line 226, Address: 0x2468b4, Func Offset: 0x2a4
	// Line 229, Address: 0x2468b8, Func Offset: 0x2a8
	// Line 230, Address: 0x2468bc, Func Offset: 0x2ac
	// Func End, Address: 0x2468d8, Func Offset: 0x2c8
}

// 
// Start address: 0x2468e0
unsigned int HH_Class_Blood_Stick_00(void* pBlock, ImpactQueue_Element* pElement)
{
	HH_Object_Blood_Stick_00* pThis;
	unsigned int result;
	// Line 250, Address: 0x2468e0, Func Offset: 0
	// Line 257, Address: 0x2468f8, Func Offset: 0x18
	// Line 258, Address: 0x2468fc, Func Offset: 0x1c
	// Line 260, Address: 0x246900, Func Offset: 0x20
	// Line 263, Address: 0x246930, Func Offset: 0x50
	// Line 265, Address: 0x246940, Func Offset: 0x60
	// Line 266, Address: 0x246948, Func Offset: 0x68
	// Line 269, Address: 0x246950, Func Offset: 0x70
	// Line 271, Address: 0x246960, Func Offset: 0x80
	// Line 273, Address: 0x24697c, Func Offset: 0x9c
	// Line 274, Address: 0x246990, Func Offset: 0xb0
	// Line 277, Address: 0x246998, Func Offset: 0xb8
	// Line 278, Address: 0x2469b8, Func Offset: 0xd8
	// Line 280, Address: 0x2469c0, Func Offset: 0xe0
	// Line 283, Address: 0x2469c8, Func Offset: 0xe8
	// Line 284, Address: 0x2469cc, Func Offset: 0xec
	// Line 287, Address: 0x2469d0, Func Offset: 0xf0
	// Line 288, Address: 0x2469d4, Func Offset: 0xf4
	// Func End, Address: 0x2469ec, Func Offset: 0x10c
}

