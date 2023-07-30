typedef struct HH_Object_Glass_Break_Phenomenon_00;
typedef struct ImpactQueue_Element;
typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_ElementOption;


typedef float type_0[4][2];
typedef float type_1[2];
typedef int type_2[2];
typedef float type_3[4];
typedef float type_4[4];
typedef float type_5[4][4];

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
	ImpactQueue_ElementOption Option;
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

unsigned int Object_Initialize(HH_Object_Glass_Break_Phenomenon_00* pThis, ImpactQueue_Element* pElement);
unsigned int HH_Class_Glass_Break_Phenomenon_00(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x247520
unsigned int Object_Initialize(HH_Object_Glass_Break_Phenomenon_00* pThis, ImpactQueue_Element* pElement)
{
	float lambda_2;
	float lambda_1;
	float p_xz[4];
	float* src_direction;
	float p_volume;
	float p_y;
	unsigned int result;
	// Line 122, Address: 0x247520, Func Offset: 0
	// Line 123, Address: 0x247538, Func Offset: 0x18
	// Line 127, Address: 0x24753c, Func Offset: 0x1c
	// Line 129, Address: 0x247548, Func Offset: 0x28
	// Line 131, Address: 0x247554, Func Offset: 0x34
	// Line 135, Address: 0x24755c, Func Offset: 0x3c
	// Line 138, Address: 0x247564, Func Offset: 0x44
	// Line 139, Address: 0x247578, Func Offset: 0x58
	// Line 141, Address: 0x247588, Func Offset: 0x68
	// Line 143, Address: 0x247594, Func Offset: 0x74
	// Line 154, Address: 0x24759c, Func Offset: 0x7c
	// Line 158, Address: 0x2475dc, Func Offset: 0xbc
	// Line 159, Address: 0x2475f8, Func Offset: 0xd8
	// Line 160, Address: 0x247618, Func Offset: 0xf8
	// Line 165, Address: 0x24762c, Func Offset: 0x10c
	// Line 169, Address: 0x24764c, Func Offset: 0x12c
	// Line 178, Address: 0x247660, Func Offset: 0x140
	// Line 179, Address: 0x247670, Func Offset: 0x150
	// Line 180, Address: 0x24767c, Func Offset: 0x15c
	// Line 181, Address: 0x24768c, Func Offset: 0x16c
	// Line 182, Address: 0x2476a4, Func Offset: 0x184
	// Line 188, Address: 0x2476bc, Func Offset: 0x19c
	// Line 189, Address: 0x2476c8, Func Offset: 0x1a8
	// Line 190, Address: 0x2476ec, Func Offset: 0x1cc
	// Line 198, Address: 0x247700, Func Offset: 0x1e0
	// Line 199, Address: 0x247704, Func Offset: 0x1e4
	// Func End, Address: 0x24771c, Func Offset: 0x1fc
}

// 
// Start address: 0x247720
unsigned int HH_Class_Glass_Break_Phenomenon_00(void* pBlock, ImpactQueue_Element* pElement)
{
	float vz0_plus;
	float vz0_range;
	float vx0_plus;
	float vx0_range;
	float mat[4][4];
	float* dst_direction;
	float* dst_location;
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
	// Line 218, Address: 0x247720, Func Offset: 0
	// Line 225, Address: 0x247754, Func Offset: 0x34
	// Line 226, Address: 0x24775c, Func Offset: 0x3c
	// Line 228, Address: 0x247760, Func Offset: 0x40
	// Line 230, Address: 0x24778c, Func Offset: 0x6c
	// Line 231, Address: 0x24779c, Func Offset: 0x7c
	// Line 232, Address: 0x2477a8, Func Offset: 0x88
	// Line 235, Address: 0x2477b0, Func Offset: 0x90
	// Line 236, Address: 0x2477c8, Func Offset: 0xa8
	// Line 237, Address: 0x2477d8, Func Offset: 0xb8
	// Line 238, Address: 0x2477f4, Func Offset: 0xd4
	// Line 240, Address: 0x247804, Func Offset: 0xe4
	// Line 241, Address: 0x247808, Func Offset: 0xe8
	// Line 243, Address: 0x24781c, Func Offset: 0xfc
	// Line 244, Address: 0x24782c, Func Offset: 0x10c
	// Line 245, Address: 0x247830, Func Offset: 0x110
	// Line 247, Address: 0x247838, Func Offset: 0x118
	// Line 248, Address: 0x247848, Func Offset: 0x128
	// Line 251, Address: 0x247850, Func Offset: 0x130
	// Line 253, Address: 0x24785c, Func Offset: 0x13c
	// Line 254, Address: 0x247880, Func Offset: 0x160
	// Line 255, Address: 0x2478b0, Func Offset: 0x190
	// Line 256, Address: 0x2478b8, Func Offset: 0x198
	// Line 257, Address: 0x247934, Func Offset: 0x214
	// Line 258, Address: 0x247960, Func Offset: 0x240
	// Line 259, Address: 0x24796c, Func Offset: 0x24c
	// Line 260, Address: 0x247978, Func Offset: 0x258
	// Line 261, Address: 0x247980, Func Offset: 0x260
	// Line 262, Address: 0x247988, Func Offset: 0x268
	// Line 263, Address: 0x24798c, Func Offset: 0x26c
	// Line 265, Address: 0x247990, Func Offset: 0x270
	// Line 266, Address: 0x2479dc, Func Offset: 0x2bc
	// Line 268, Address: 0x247a58, Func Offset: 0x338
	// Line 269, Address: 0x247aa4, Func Offset: 0x384
	// Line 270, Address: 0x247b14, Func Offset: 0x3f4
	// Line 273, Address: 0x247b18, Func Offset: 0x3f8
	// Line 274, Address: 0x247b34, Func Offset: 0x414
	// Line 278, Address: 0x247b48, Func Offset: 0x428
	// Line 285, Address: 0x247b58, Func Offset: 0x438
	// Line 287, Address: 0x247b64, Func Offset: 0x444
	// Line 288, Address: 0x247c60, Func Offset: 0x540
	// Line 289, Address: 0x247d58, Func Offset: 0x638
	// Line 290, Address: 0x247d6c, Func Offset: 0x64c
	// Line 291, Address: 0x247d80, Func Offset: 0x660
	// Line 292, Address: 0x247d90, Func Offset: 0x670
	// Line 293, Address: 0x247da0, Func Offset: 0x680
	// Line 295, Address: 0x247db0, Func Offset: 0x690
	// Line 296, Address: 0x247db8, Func Offset: 0x698
	// Line 297, Address: 0x247dc4, Func Offset: 0x6a4
	// Line 298, Address: 0x247dcc, Func Offset: 0x6ac
	// Line 299, Address: 0x247dd8, Func Offset: 0x6b8
	// Line 300, Address: 0x247df0, Func Offset: 0x6d0
	// Line 301, Address: 0x247e0c, Func Offset: 0x6ec
	// Line 303, Address: 0x247e18, Func Offset: 0x6f8
	// Line 304, Address: 0x247e94, Func Offset: 0x774
	// Line 305, Address: 0x247e98, Func Offset: 0x778
	// Line 306, Address: 0x247eb0, Func Offset: 0x790
	// Line 307, Address: 0x247ecc, Func Offset: 0x7ac
	// Line 309, Address: 0x247ed8, Func Offset: 0x7b8
	// Line 310, Address: 0x247f54, Func Offset: 0x834
	// Line 311, Address: 0x247f58, Func Offset: 0x838
	// Line 312, Address: 0x247f68, Func Offset: 0x848
	// Line 314, Address: 0x247f78, Func Offset: 0x858
	// Line 317, Address: 0x247f8c, Func Offset: 0x86c
	// Line 318, Address: 0x247f90, Func Offset: 0x870
	// Line 319, Address: 0x247f98, Func Offset: 0x878
	// Line 320, Address: 0x247fa4, Func Offset: 0x884
	// Line 321, Address: 0x247fb0, Func Offset: 0x890
	// Line 322, Address: 0x247fcc, Func Offset: 0x8ac
	// Line 323, Address: 0x247fdc, Func Offset: 0x8bc
	// Line 324, Address: 0x247fe0, Func Offset: 0x8c0
	// Line 325, Address: 0x248004, Func Offset: 0x8e4
	// Line 327, Address: 0x248010, Func Offset: 0x8f0
	// Line 330, Address: 0x248018, Func Offset: 0x8f8
	// Line 331, Address: 0x24801c, Func Offset: 0x8fc
	// Line 332, Address: 0x248020, Func Offset: 0x900
	// Line 335, Address: 0x248040, Func Offset: 0x920
	// Line 336, Address: 0x24805c, Func Offset: 0x93c
	// Line 337, Address: 0x248060, Func Offset: 0x940
	// Func End, Address: 0x248094, Func Offset: 0x974
}

