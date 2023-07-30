typedef struct HH_Object_Glass_Break_Phenomenon_00;
typedef struct ImpactQueue_Element;
typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_ElementOption;


typedef float type_0[4][2];
typedef float type_1[2];
typedef int type_2[2];
typedef float type_3[4];
typedef unsigned int type_4[1];
typedef float type_5[4];
typedef float type_6[4][4];

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

unsigned int Object_Initialize(HH_Object_Glass_Break_Phenomenon_00* pThis, ImpactQueue_Element* pElement);
unsigned int HH_Class_Glass_Break_Phenomenon_00(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x258090
unsigned int Object_Initialize(HH_Object_Glass_Break_Phenomenon_00* pThis, ImpactQueue_Element* pElement)
{
	float lambda_2;
	float lambda_1;
	float p_xz[4];
	float* src_direction;
	float p_volume;
	float p_y;
	unsigned int result;
	// Line 126, Address: 0x258090, Func Offset: 0
	// Line 131, Address: 0x2580a8, Func Offset: 0x18
	// Line 133, Address: 0x2580ac, Func Offset: 0x1c
	// Line 135, Address: 0x2580b0, Func Offset: 0x20
	// Line 139, Address: 0x2580b4, Func Offset: 0x24
	// Line 142, Address: 0x2580b8, Func Offset: 0x28
	// Line 144, Address: 0x2580c8, Func Offset: 0x38
	// Line 146, Address: 0x2580d4, Func Offset: 0x44
	// Line 148, Address: 0x2580d8, Func Offset: 0x48
	// Line 159, Address: 0x2580dc, Func Offset: 0x4c
	// Line 163, Address: 0x2580f8, Func Offset: 0x68
	// Line 164, Address: 0x25810c, Func Offset: 0x7c
	// Line 165, Address: 0x258124, Func Offset: 0x94
	// Line 170, Address: 0x25812c, Func Offset: 0x9c
	// Line 174, Address: 0x258144, Func Offset: 0xb4
	// Line 183, Address: 0x258150, Func Offset: 0xc0
	// Line 184, Address: 0x258160, Func Offset: 0xd0
	// Line 185, Address: 0x258164, Func Offset: 0xd4
	// Line 186, Address: 0x258174, Func Offset: 0xe4
	// Line 187, Address: 0x25818c, Func Offset: 0xfc
	// Line 193, Address: 0x2581a0, Func Offset: 0x110
	// Line 194, Address: 0x2581a4, Func Offset: 0x114
	// Line 195, Address: 0x2581c4, Func Offset: 0x134
	// Line 203, Address: 0x2581d0, Func Offset: 0x140
	// Line 204, Address: 0x2581d4, Func Offset: 0x144
	// Func End, Address: 0x2581f0, Func Offset: 0x160
}

// 
// Start address: 0x2581f0
unsigned int HH_Class_Glass_Break_Phenomenon_00(void* pBlock, ImpactQueue_Element* pElement)
{
	float vz0_plus;
	float vz0_range;
	float vx0_plus;
	float vx0_range;
	float mat[4][4];
	float* dst_direction;
	float* src_direction;
	float* src_location;
	float theta;
	float phai;
	float ratio;
	float v0_plus;
	float v0_range;
	unsigned int theta_range;
	unsigned int phai_range;
	ImpactQueue_Element descriptor;
	unsigned int free;
	unsigned int max;
	unsigned int i;
	unsigned int count_i;
	float count;
	float diff_time;
	HH_Object_Glass_Break_Phenomenon_00* pThis;
	unsigned int result;
	// Line 223, Address: 0x2581f0, Func Offset: 0
	// Line 230, Address: 0x258230, Func Offset: 0x40
	// Line 231, Address: 0x258238, Func Offset: 0x48
	// Line 233, Address: 0x25823c, Func Offset: 0x4c
	// Line 235, Address: 0x258268, Func Offset: 0x78
	// Line 236, Address: 0x258270, Func Offset: 0x80
	// Line 237, Address: 0x25827c, Func Offset: 0x8c
	// Line 240, Address: 0x258284, Func Offset: 0x94
	// Line 241, Address: 0x25829c, Func Offset: 0xac
	// Line 242, Address: 0x2582a0, Func Offset: 0xb0
	// Line 243, Address: 0x2582c0, Func Offset: 0xd0
	// Line 245, Address: 0x2582c8, Func Offset: 0xd8
	// Line 246, Address: 0x2582cc, Func Offset: 0xdc
	// Line 248, Address: 0x2582d8, Func Offset: 0xe8
	// Line 249, Address: 0x2582e0, Func Offset: 0xf0
	// Line 250, Address: 0x2582e4, Func Offset: 0xf4
	// Line 252, Address: 0x2582ec, Func Offset: 0xfc
	// Line 253, Address: 0x2582f8, Func Offset: 0x108
	// Line 256, Address: 0x2582fc, Func Offset: 0x10c
	// Line 258, Address: 0x258308, Func Offset: 0x118
	// Line 259, Address: 0x25832c, Func Offset: 0x13c
	// Line 260, Address: 0x25835c, Func Offset: 0x16c
	// Line 261, Address: 0x258360, Func Offset: 0x170
	// Line 262, Address: 0x258390, Func Offset: 0x1a0
	// Line 263, Address: 0x2583b8, Func Offset: 0x1c8
	// Line 264, Address: 0x2583c0, Func Offset: 0x1d0
	// Line 265, Address: 0x2583c4, Func Offset: 0x1d4
	// Line 266, Address: 0x2583c8, Func Offset: 0x1d8
	// Line 268, Address: 0x2583cc, Func Offset: 0x1dc
	// Line 270, Address: 0x2583d0, Func Offset: 0x1e0
	// Line 271, Address: 0x258418, Func Offset: 0x228
	// Line 272, Address: 0x25848c, Func Offset: 0x29c
	// Line 273, Address: 0x258490, Func Offset: 0x2a0
	// Line 274, Address: 0x2584dc, Func Offset: 0x2ec
	// Line 278, Address: 0x258548, Func Offset: 0x358
	// Line 279, Address: 0x258560, Func Offset: 0x370
	// Line 283, Address: 0x258570, Func Offset: 0x380
	// Line 290, Address: 0x258580, Func Offset: 0x390
	// Line 292, Address: 0x25858c, Func Offset: 0x39c
	// Line 293, Address: 0x258650, Func Offset: 0x460
	// Line 294, Address: 0x258710, Func Offset: 0x520
	// Line 295, Address: 0x258724, Func Offset: 0x534
	// Line 296, Address: 0x258738, Func Offset: 0x548
	// Line 297, Address: 0x258748, Func Offset: 0x558
	// Line 298, Address: 0x258754, Func Offset: 0x564
	// Line 300, Address: 0x258760, Func Offset: 0x570
	// Line 301, Address: 0x258764, Func Offset: 0x574
	// Line 302, Address: 0x258768, Func Offset: 0x578
	// Line 303, Address: 0x25876c, Func Offset: 0x57c
	// Line 304, Address: 0x258770, Func Offset: 0x580
	// Line 305, Address: 0x258780, Func Offset: 0x590
	// Line 306, Address: 0x258790, Func Offset: 0x5a0
	// Line 307, Address: 0x258794, Func Offset: 0x5a4
	// Line 308, Address: 0x258798, Func Offset: 0x5a8
	// Line 309, Address: 0x25880c, Func Offset: 0x61c
	// Line 310, Address: 0x258810, Func Offset: 0x620
	// Line 311, Address: 0x258828, Func Offset: 0x638
	// Line 312, Address: 0x25883c, Func Offset: 0x64c
	// Line 314, Address: 0x258840, Func Offset: 0x650
	// Line 315, Address: 0x2588b4, Func Offset: 0x6c4
	// Line 316, Address: 0x2588b8, Func Offset: 0x6c8
	// Line 317, Address: 0x2588c4, Func Offset: 0x6d4
	// Line 319, Address: 0x2588d0, Func Offset: 0x6e0
	// Line 322, Address: 0x2588e4, Func Offset: 0x6f4
	// Line 323, Address: 0x2588e8, Func Offset: 0x6f8
	// Line 324, Address: 0x2588ec, Func Offset: 0x6fc
	// Line 325, Address: 0x2588f4, Func Offset: 0x704
	// Line 326, Address: 0x258900, Func Offset: 0x710
	// Line 327, Address: 0x25890c, Func Offset: 0x71c
	// Line 328, Address: 0x258928, Func Offset: 0x738
	// Line 329, Address: 0x25893c, Func Offset: 0x74c
	// Line 330, Address: 0x258940, Func Offset: 0x750
	// Line 331, Address: 0x258964, Func Offset: 0x774
	// Line 333, Address: 0x258970, Func Offset: 0x780
	// Line 336, Address: 0x258978, Func Offset: 0x788
	// Line 337, Address: 0x25897c, Func Offset: 0x78c
	// Line 338, Address: 0x258980, Func Offset: 0x790
	// Line 341, Address: 0x2589a0, Func Offset: 0x7b0
	// Line 342, Address: 0x2589bc, Func Offset: 0x7cc
	// Line 343, Address: 0x2589c0, Func Offset: 0x7d0
	// Func End, Address: 0x258a04, Func Offset: 0x814
}

