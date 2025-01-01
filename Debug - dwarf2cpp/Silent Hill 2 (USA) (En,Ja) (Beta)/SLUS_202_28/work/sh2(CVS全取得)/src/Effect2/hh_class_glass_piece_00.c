typedef struct ImpactQueue_Element;
typedef struct HH_Object_GlassPiece_00;
typedef struct Object_DataBlock_Header;
typedef struct Vertex_Infomeation_List;
typedef struct ImpactQueue_ElementOption;
typedef struct _anon0;


typedef float type_0[4][4];
typedef float type_1[4][4];
typedef float type_2[4][4];
typedef float type_3[4][4];
typedef float type_4[4][4];
typedef float type_5[4];
typedef float type_6[4][4];
typedef float type_7[4][2];
typedef float type_8[2];
typedef Vertex_Infomeation_List type_9[2];
typedef int type_10[2];
typedef float type_11[4][4];
typedef int type_12[4];
typedef float type_13[4][4];
typedef unsigned int type_14[1];
typedef float type_15[4];
typedef float type_16[4][4];
typedef float type_17[4][4];
typedef float type_18[4][4];
typedef float type_19[4][3];
typedef float type_20[4][4];
typedef float type_21[4][4];
typedef float type_22[4][9];
typedef float type_23[4][4];
typedef float type_24[4][4];

struct ImpactQueue_Element
{
	unsigned int Class_Descriptor;
	unsigned int hInstance;
	unsigned int* pResultHandle_Address;
	unsigned int Reserved[1];
	ImpactQueue_ElementOption Option;
};

struct HH_Object_GlassPiece_00
{
	Object_DataBlock_Header Header;
	unsigned int Step;
	unsigned int Vertex_Kind;
	unsigned int Texture_Kind;
	float Timer;
	float Verocity_0[4];
	float Rotate[4];
};

struct Object_DataBlock_Header
{
	unsigned int Enable;
	Object_DataBlock_Header* pNext;
};

struct Vertex_Infomeation_List
{
	float pVertex_List[4];
	float pNormal_List[4];
	unsigned int Vertex_Max;
	unsigned int Primitive_Type;
};

struct ImpactQueue_ElementOption
{
	float Vector[4][2];
	float Float_Value[2];
	int Int_Value[2];
};

struct _anon0
{
	unsigned int* pCurrent;
	<unknown fundamental type (0xa510)>* pBase;
	<unknown fundamental type (0xa510)>* pDmaTag;
	unsigned int* pVifCode;
	unsigned int numlen;
	unsigned long* pGifTag;
	unsigned int pad12;
	unsigned int pad13;
};

float _elastic_vec[4];
float _friction_vec[4];
float _square_00_vertex[4][4];
float _square_01_vertex[4][4];
float _square_00_normal[4][4];
float _square_01_normal[4][4];
float _square_02_normal[4][3];
float _square_03_normal[4][4];
float _square_stq_00[4][4];
float _square_stq_01[4][4];
float _square_stq_02[4][4];
float _square_stq_10[4][4];
float _square_stq_11[4][4];
float _square_stq_12[4][4];
float _square_stq_20[4][4];
float _square_stq_21[4][4];
float _square_stq_22[4][4];
float _stq_list[4][9];
Vertex_Infomeation_List _vertex_info_list[2];

unsigned int Object_Initialize(HH_Object_GlassPiece_00* pThis, ImpactQueue_Element* pElement);
void ParabolaMotion_Calculator(HH_Object_GlassPiece_00* pThis, float Time, float* Position);
unsigned int Object_Draw(HH_Object_GlassPiece_00* pThis, ImpactQueue_Element* pElement, float* Current_Position);
float Specular_Calculator(float* Normal_Vector);
void SpecularRGBA_Calculator(int* iRGBA, float* RGBA_Base, float* RGBA_Specular_Base, float* Normal_Vector);
unsigned int HH_Class_Prefix_GlassPiece_00();
unsigned int HH_Class_Suffix_GlassPiece_00();
unsigned int HH_Class_GlassPiece_00(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x258a10
unsigned int Object_Initialize(HH_Object_GlassPiece_00* pThis, ImpactQueue_Element* pElement)
{
	float phai;
	float theta;
	float* src_direction;
	unsigned int result;
	// Line 306, Address: 0x258a10, Func Offset: 0
	// Line 310, Address: 0x258a24, Func Offset: 0x14
	// Line 322, Address: 0x258a28, Func Offset: 0x18
	// Line 323, Address: 0x258a30, Func Offset: 0x20
	// Line 324, Address: 0x258a38, Func Offset: 0x28
	// Line 326, Address: 0x258a40, Func Offset: 0x30
	// Line 330, Address: 0x258a4c, Func Offset: 0x3c
	// Line 333, Address: 0x258a58, Func Offset: 0x48
	// Line 334, Address: 0x258aa8, Func Offset: 0x98
	// Line 337, Address: 0x258af8, Func Offset: 0xe8
	// Line 338, Address: 0x258b08, Func Offset: 0xf8
	// Line 346, Address: 0x258b0c, Func Offset: 0xfc
	// Line 347, Address: 0x258b10, Func Offset: 0x100
	// Line 351, Address: 0x258b14, Func Offset: 0x104
	// Line 353, Address: 0x258b24, Func Offset: 0x114
	// Line 356, Address: 0x258b44, Func Offset: 0x134
	// Line 357, Address: 0x258b48, Func Offset: 0x138
	// Func End, Address: 0x258b60, Func Offset: 0x150
}

// 
// Start address: 0x258b60
void ParabolaMotion_Calculator(HH_Object_GlassPiece_00* pThis, float Time, float* Position)
{
	float time_mat[4][4];
	// Line 372, Address: 0x258b60, Func Offset: 0
	// Line 376, Address: 0x258b80, Func Offset: 0x20
	// Line 377, Address: 0x258b8c, Func Offset: 0x2c
	// Line 378, Address: 0x258b90, Func Offset: 0x30
	// Line 379, Address: 0x258b94, Func Offset: 0x34
	// Line 380, Address: 0x258b98, Func Offset: 0x38
	// Line 381, Address: 0x258ba0, Func Offset: 0x40
	// Line 382, Address: 0x258ba4, Func Offset: 0x44
	// Line 383, Address: 0x258bb8, Func Offset: 0x58
	// Func End, Address: 0x258bd4, Func Offset: 0x74
}

// 
// Start address: 0x258be0
unsigned int Object_Draw(HH_Object_GlassPiece_00* pThis, ImpactQueue_Element* pElement, float* Current_Position)
{
	unsigned int addr;
	float q;
	int xyzf[4];
	float rot_y;
	float rot_x;
	float time;
	float pStq[4];
	float normal[4];
	int rgba[4];
	float clip_mat[4][4];
	float lsm[4][4];
	float lwm[4][4];
	unsigned int i;
	unsigned int prim_type;
	unsigned int vertex_num;
	float pNormal[4];
	float pVertex[4];
	Vertex_Infomeation_List* pInfo;
	_anon0* pPk;
	unsigned int result;
	float Specular_Rgba[4];
	float Base_Rgba[4];
	// Line 397, Address: 0x258be0, Func Offset: 0
	// Line 399, Address: 0x258c20, Func Offset: 0x40
	// Line 400, Address: 0x258c2c, Func Offset: 0x4c
	// Line 401, Address: 0x258c40, Func Offset: 0x60
	// Line 402, Address: 0x258c44, Func Offset: 0x64
	// Line 403, Address: 0x258c48, Func Offset: 0x68
	// Line 404, Address: 0x258c4c, Func Offset: 0x6c
	// Line 412, Address: 0x258c50, Func Offset: 0x70
	// Line 417, Address: 0x258c68, Func Offset: 0x88
	// Line 419, Address: 0x258c74, Func Offset: 0x94
	// Line 422, Address: 0x258c80, Func Offset: 0xa0
	// Line 423, Address: 0x258c8c, Func Offset: 0xac
	// Line 424, Address: 0x258d4c, Func Offset: 0x16c
	// Line 425, Address: 0x258e04, Func Offset: 0x224
	// Line 426, Address: 0x258e18, Func Offset: 0x238
	// Line 428, Address: 0x258e2c, Func Offset: 0x24c
	// Line 429, Address: 0x258e40, Func Offset: 0x260
	// Line 430, Address: 0x258e54, Func Offset: 0x274
	// Line 433, Address: 0x258e68, Func Offset: 0x288
	// Line 434, Address: 0x258e74, Func Offset: 0x294
	// Line 440, Address: 0x258e88, Func Offset: 0x2a8
	// Line 442, Address: 0x258e90, Func Offset: 0x2b0
	// Line 456, Address: 0x258eac, Func Offset: 0x2cc
	// Line 457, Address: 0x258eb0, Func Offset: 0x2d0
	// Line 458, Address: 0x258eb4, Func Offset: 0x2d4
	// Line 459, Address: 0x258eb8, Func Offset: 0x2d8
	// Line 460, Address: 0x258ecc, Func Offset: 0x2ec
	// Line 463, Address: 0x258eec, Func Offset: 0x30c
	// Line 467, Address: 0x258ef8, Func Offset: 0x318
	// Line 469, Address: 0x258efc, Func Offset: 0x31c
	// Line 470, Address: 0x258f24, Func Offset: 0x344
	// Line 479, Address: 0x258f28, Func Offset: 0x348
	// Line 480, Address: 0x258f78, Func Offset: 0x398
	// Line 481, Address: 0x258fc0, Func Offset: 0x3e0
	// Line 482, Address: 0x259004, Func Offset: 0x424
	// Line 484, Address: 0x259014, Func Offset: 0x434
	// Line 486, Address: 0x25901c, Func Offset: 0x43c
	// Line 487, Address: 0x259020, Func Offset: 0x440
	// Func End, Address: 0x25905c, Func Offset: 0x47c
}

// 
// Start address: 0x259060
float Specular_Calculator(float* Normal_Vector)
{
	float cos_beta;
	float cos_theta;
	float tmp_vec[4];
	float view_dir[4];
	float light_dir[4];
	float revers_light_dir[4];
	float input_light_power;
	float specular_coefficient;
	float result;
	float cos_beta_min;
	// Line 500, Address: 0x259060, Func Offset: 0
	// Line 514, Address: 0x259070, Func Offset: 0x10
	// Line 519, Address: 0x25907c, Func Offset: 0x1c
	// Line 520, Address: 0x25908c, Func Offset: 0x2c
	// Line 521, Address: 0x259098, Func Offset: 0x38
	// Line 524, Address: 0x2590a8, Func Offset: 0x48
	// Line 525, Address: 0x2590b8, Func Offset: 0x58
	// Line 526, Address: 0x2590d0, Func Offset: 0x70
	// Line 528, Address: 0x2590d4, Func Offset: 0x74
	// Line 529, Address: 0x2590f4, Func Offset: 0x94
	// Line 530, Address: 0x259108, Func Offset: 0xa8
	// Line 532, Address: 0x259118, Func Offset: 0xb8
	// Line 533, Address: 0x259128, Func Offset: 0xc8
	// Line 534, Address: 0x259140, Func Offset: 0xe0
	// Line 553, Address: 0x259144, Func Offset: 0xe4
	// Line 556, Address: 0x259194, Func Offset: 0x134
	// Func End, Address: 0x2591a8, Func Offset: 0x148
}

// 
// Start address: 0x2591b0
void SpecularRGBA_Calculator(int* iRGBA, float* RGBA_Base, float* RGBA_Specular_Base, float* Normal_Vector)
{
	float specular;
	// Line 569, Address: 0x2591b0, Func Offset: 0
	// Line 570, Address: 0x2591d0, Func Offset: 0x20
	// Line 578, Address: 0x2591dc, Func Offset: 0x2c
	// Line 579, Address: 0x2591e0, Func Offset: 0x30
	// Line 580, Address: 0x2591e4, Func Offset: 0x34
	// Line 581, Address: 0x2591ec, Func Offset: 0x3c
	// Line 582, Address: 0x2591f0, Func Offset: 0x40
	// Line 583, Address: 0x2591f4, Func Offset: 0x44
	// Line 584, Address: 0x2591f8, Func Offset: 0x48
	// Line 585, Address: 0x2591fc, Func Offset: 0x4c
	// Line 606, Address: 0x259200, Func Offset: 0x50
	// Func End, Address: 0x25921c, Func Offset: 0x6c
}

// 
// Start address: 0x259220
unsigned int HH_Class_Prefix_GlassPiece_00()
{
	unsigned long tex0;
	_anon0* pPk;
	unsigned int result;
	// Line 624, Address: 0x259220, Func Offset: 0
	// Line 626, Address: 0x25922c, Func Offset: 0xc
	// Line 629, Address: 0x259238, Func Offset: 0x18
	// Line 632, Address: 0x259240, Func Offset: 0x20
	// Line 633, Address: 0x259250, Func Offset: 0x30
	// Line 635, Address: 0x259264, Func Offset: 0x44
	// Line 636, Address: 0x259288, Func Offset: 0x68
	// Line 639, Address: 0x2592a4, Func Offset: 0x84
	// Line 641, Address: 0x2592ac, Func Offset: 0x8c
	// Line 642, Address: 0x2592b0, Func Offset: 0x90
	// Func End, Address: 0x2592c4, Func Offset: 0xa4
}

// 
// Start address: 0x2592d0
unsigned int HH_Class_Suffix_GlassPiece_00()
{
	unsigned int result;
	// Line 658, Address: 0x2592d0, Func Offset: 0
	// Line 659, Address: 0x2592d4, Func Offset: 0x4
	// Func End, Address: 0x2592dc, Func Offset: 0xc
}

// 
// Start address: 0x2592e0
unsigned int HH_Class_GlassPiece_00(void* pBlock, ImpactQueue_Element* pElement)
{
	float* src_location;
	float position[4];
	float v_xz_volume;
	float verocity_xz[4];
	float y;
	float tan_value;
	float ref_xz_volume;
	float ref_normalize[4];
	float reflection_vec[4];
	float volume;
	float dir_vec[4];
	float* src_direction;
	float* src_location;
	float position[4];
	HH_Object_GlassPiece_00* pThis;
	unsigned int result;
	// Line 672, Address: 0x2592e0, Func Offset: 0
	// Line 680, Address: 0x259308, Func Offset: 0x28
	// Line 681, Address: 0x25930c, Func Offset: 0x2c
	// Line 683, Address: 0x259310, Func Offset: 0x30
	// Line 685, Address: 0x259344, Func Offset: 0x64
	// Line 686, Address: 0x25934c, Func Offset: 0x6c
	// Line 687, Address: 0x259358, Func Offset: 0x78
	// Line 691, Address: 0x259360, Func Offset: 0x80
	// Line 692, Address: 0x259364, Func Offset: 0x84
	// Line 694, Address: 0x259368, Func Offset: 0x88
	// Line 699, Address: 0x259378, Func Offset: 0x98
	// Line 705, Address: 0x2593a0, Func Offset: 0xc0
	// Line 707, Address: 0x2593cc, Func Offset: 0xec
	// Line 709, Address: 0x2593e0, Func Offset: 0x100
	// Line 715, Address: 0x2593f0, Func Offset: 0x110
	// Line 722, Address: 0x259410, Func Offset: 0x130
	// Line 723, Address: 0x259424, Func Offset: 0x144
	// Line 726, Address: 0x259428, Func Offset: 0x148
	// Line 737, Address: 0x259440, Func Offset: 0x160
	// Line 738, Address: 0x259450, Func Offset: 0x170
	// Line 739, Address: 0x259458, Func Offset: 0x178
	// Line 740, Address: 0x25945c, Func Offset: 0x17c
	// Line 742, Address: 0x25946c, Func Offset: 0x18c
	// Line 744, Address: 0x259488, Func Offset: 0x1a8
	// Line 745, Address: 0x259498, Func Offset: 0x1b8
	// Line 746, Address: 0x25949c, Func Offset: 0x1bc
	// Line 747, Address: 0x2594a0, Func Offset: 0x1c0
	// Line 749, Address: 0x2594b0, Func Offset: 0x1d0
	// Line 750, Address: 0x2594bc, Func Offset: 0x1dc
	// Line 751, Address: 0x2594c4, Func Offset: 0x1e4
	// Line 754, Address: 0x2594dc, Func Offset: 0x1fc
	// Line 758, Address: 0x2594fc, Func Offset: 0x21c
	// Line 760, Address: 0x259504, Func Offset: 0x224
	// Line 761, Address: 0x259514, Func Offset: 0x234
	// Line 762, Address: 0x259518, Func Offset: 0x238
	// Line 766, Address: 0x259520, Func Offset: 0x240
	// Line 767, Address: 0x25952c, Func Offset: 0x24c
	// Line 771, Address: 0x259534, Func Offset: 0x254
	// Line 773, Address: 0x259548, Func Offset: 0x268
	// Line 774, Address: 0x259564, Func Offset: 0x284
	// Line 781, Address: 0x25956c, Func Offset: 0x28c
	// Line 782, Address: 0x25957c, Func Offset: 0x29c
	// Line 783, Address: 0x259588, Func Offset: 0x2a8
	// Line 785, Address: 0x25959c, Func Offset: 0x2bc
	// Line 788, Address: 0x2595a4, Func Offset: 0x2c4
	// Line 789, Address: 0x2595a8, Func Offset: 0x2c8
	// Line 792, Address: 0x2595ac, Func Offset: 0x2cc
	// Line 793, Address: 0x2595b0, Func Offset: 0x2d0
	// Func End, Address: 0x2595dc, Func Offset: 0x2fc
}

