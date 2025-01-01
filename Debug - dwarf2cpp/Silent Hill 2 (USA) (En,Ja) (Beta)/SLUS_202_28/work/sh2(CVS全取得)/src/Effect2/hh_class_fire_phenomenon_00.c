typedef struct HH_Object_Fire_Phenomenon_00;
typedef struct _SH2_SYS;
typedef struct Descriptor_Post_Infomeation;
typedef struct ImpactQueue_Element;
typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_ElementOption;


typedef Descriptor_Post_Infomeation type_0[16];
typedef unsigned int type_1[8];
typedef float type_2[4][2];
typedef float type_3[2];
typedef int type_4[2];
typedef float type_5[4];
typedef unsigned int type_6[1];
typedef unsigned int type_7[2];
typedef float type_8[2];
typedef unsigned int type_9[2];
typedef unsigned int type_10[2];
typedef Descriptor_Post_Infomeation type_11[23];

struct HH_Object_Fire_Phenomenon_00
{
	Object_DataBlock_Header Header;
	unsigned int Step;
	float Timer;
};

struct _SH2_SYS
{
	unsigned int step[8];
	unsigned int pre_playable;
	int main_status;
	unsigned int soft_reset;
	unsigned int frame_cnt;
};

struct Descriptor_Post_Infomeation
{
	float Location[4];
	float Offset[4];
	unsigned int Class_Descriptor[2];
	float Post_Frame;
	float Delete_Frame;
	float Float_Argument[2];
	unsigned int Int_Argument[2];
	unsigned int Step;
	unsigned int hInstance[2];
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

Descriptor_Post_Infomeation _post_info_demo[23];
Descriptor_Post_Infomeation _post_info_normal[16];
_SH2_SYS Sh2sys;
float demo_frame;

unsigned int Object_Initialize(HH_Object_Fire_Phenomenon_00* pThis);
unsigned int HH_Class_Fire_Phenomenon_00(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x280c00
unsigned int Object_Initialize(HH_Object_Fire_Phenomenon_00* pThis)
{
	Descriptor_Post_Infomeation* pInfo;
	Descriptor_Post_Infomeation* pInfo;
	unsigned int i;
	unsigned int result;
	// Line 623, Address: 0x280c00, Func Offset: 0
	// Line 629, Address: 0x280c04, Func Offset: 0x4
	// Line 630, Address: 0x280c10, Func Offset: 0x10
	// Line 632, Address: 0x280c28, Func Offset: 0x28
	// Line 633, Address: 0x280c2c, Func Offset: 0x2c
	// Line 634, Address: 0x280c3c, Func Offset: 0x3c
	// Line 635, Address: 0x280c48, Func Offset: 0x48
	// Line 637, Address: 0x280c60, Func Offset: 0x60
	// Line 638, Address: 0x280c64, Func Offset: 0x64
	// Line 641, Address: 0x280c74, Func Offset: 0x74
	// Line 642, Address: 0x280c78, Func Offset: 0x78
	// Func End, Address: 0x280c80, Func Offset: 0x80
}

// 
// Start address: 0x280c80
unsigned int HH_Class_Fire_Phenomenon_00(void* pBlock, ImpactQueue_Element* pElement)
{
	Descriptor_Post_Infomeation* pInfo;
	Descriptor_Post_Infomeation* pInfo;
	ImpactQueue_Element descriptor;
	unsigned int i;
	HH_Object_Fire_Phenomenon_00* pThis;
	unsigned int result;
	// Line 661, Address: 0x280c80, Func Offset: 0
	// Line 669, Address: 0x280ca4, Func Offset: 0x24
	// Line 670, Address: 0x280ca8, Func Offset: 0x28
	// Line 672, Address: 0x280cac, Func Offset: 0x2c
	// Line 674, Address: 0x280ce0, Func Offset: 0x60
	// Line 675, Address: 0x280ce8, Func Offset: 0x68
	// Line 676, Address: 0x280cf0, Func Offset: 0x70
	// Line 679, Address: 0x280cf8, Func Offset: 0x78
	// Line 682, Address: 0x280d10, Func Offset: 0x90
	// Line 690, Address: 0x280d14, Func Offset: 0x94
	// Line 691, Address: 0x280d18, Func Offset: 0x98
	// Line 694, Address: 0x280d1c, Func Offset: 0x9c
	// Line 695, Address: 0x280d28, Func Offset: 0xa8
	// Line 697, Address: 0x280d40, Func Offset: 0xc0
	// Line 700, Address: 0x280d60, Func Offset: 0xe0
	// Line 702, Address: 0x280d7c, Func Offset: 0xfc
	// Line 703, Address: 0x280d84, Func Offset: 0x104
	// Line 706, Address: 0x280d8c, Func Offset: 0x10c
	// Line 707, Address: 0x280da0, Func Offset: 0x120
	// Line 708, Address: 0x280da8, Func Offset: 0x128
	// Line 709, Address: 0x280db4, Func Offset: 0x134
	// Line 710, Address: 0x280dc0, Func Offset: 0x140
	// Line 713, Address: 0x280dcc, Func Offset: 0x14c
	// Line 714, Address: 0x280de0, Func Offset: 0x160
	// Line 715, Address: 0x280de8, Func Offset: 0x168
	// Line 716, Address: 0x280df0, Func Offset: 0x170
	// Line 717, Address: 0x280df8, Func Offset: 0x178
	// Line 719, Address: 0x280e04, Func Offset: 0x184
	// Line 721, Address: 0x280e0c, Func Offset: 0x18c
	// Line 724, Address: 0x280e14, Func Offset: 0x194
	// Line 726, Address: 0x280e30, Func Offset: 0x1b0
	// Line 728, Address: 0x280e3c, Func Offset: 0x1bc
	// Line 729, Address: 0x280e48, Func Offset: 0x1c8
	// Line 735, Address: 0x280e50, Func Offset: 0x1d0
	// Line 738, Address: 0x280e64, Func Offset: 0x1e4
	// Line 740, Address: 0x280e7c, Func Offset: 0x1fc
	// Line 741, Address: 0x280e88, Func Offset: 0x208
	// Line 742, Address: 0x280e94, Func Offset: 0x214
	// Line 743, Address: 0x280ea0, Func Offset: 0x220
	// Line 746, Address: 0x280eac, Func Offset: 0x22c
	// Line 747, Address: 0x280eb8, Func Offset: 0x238
	// Line 749, Address: 0x280ed0, Func Offset: 0x250
	// Line 752, Address: 0x280ee4, Func Offset: 0x264
	// Line 753, Address: 0x280eec, Func Offset: 0x26c
	// Line 756, Address: 0x280ef4, Func Offset: 0x274
	// Line 757, Address: 0x280f08, Func Offset: 0x288
	// Line 758, Address: 0x280f10, Func Offset: 0x290
	// Line 759, Address: 0x280f1c, Func Offset: 0x29c
	// Line 760, Address: 0x280f28, Func Offset: 0x2a8
	// Line 763, Address: 0x280f34, Func Offset: 0x2b4
	// Line 764, Address: 0x280f48, Func Offset: 0x2c8
	// Line 765, Address: 0x280f50, Func Offset: 0x2d0
	// Line 766, Address: 0x280f58, Func Offset: 0x2d8
	// Line 767, Address: 0x280f60, Func Offset: 0x2e0
	// Line 769, Address: 0x280f6c, Func Offset: 0x2ec
	// Line 771, Address: 0x280f74, Func Offset: 0x2f4
	// Line 774, Address: 0x280f78, Func Offset: 0x2f8
	// Line 775, Address: 0x280f8c, Func Offset: 0x30c
	// Line 779, Address: 0x280f94, Func Offset: 0x314
	// Line 780, Address: 0x280fb0, Func Offset: 0x330
	// Line 783, Address: 0x280fb8, Func Offset: 0x338
	// Line 784, Address: 0x280fbc, Func Offset: 0x33c
	// Line 787, Address: 0x280fc0, Func Offset: 0x340
	// Line 788, Address: 0x280fc4, Func Offset: 0x344
	// Func End, Address: 0x280ff0, Func Offset: 0x370
}

