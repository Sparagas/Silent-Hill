typedef struct Wave_Element;
typedef struct HH_Object_Water_00;
typedef struct _anon0;
typedef struct ImpactQueue_Element;
typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_ElementOption;


typedef unsigned long type_0[2];
typedef float type_1[4][2];
typedef float type_2[2];
typedef int type_3[2];
typedef int type_4[4];
typedef unsigned long type_5[2];
typedef float type_6[4];
typedef unsigned int type_7[1];
typedef float type_8[4];
typedef float type_9[4][4];
typedef Wave_Element type_10[4];
typedef float type_11[2304];
typedef float type_12[2304][2];
typedef unsigned int type_13[2];
typedef unsigned int type_14[2][4];
typedef unsigned int type_15[2];

struct Wave_Element
{
	unsigned int Enable;
	unsigned int Area;
	unsigned int Attribute;
	unsigned int Wave_Origin;
	unsigned int Post_History[2][4];
	float Power;
	unsigned int Impact_Grid_Index[2];
	float Max_Distance0;
	float Lost_Time;
	float Timer;
	float Arrival;
	float Omega;
	float Verocity;
};

struct HH_Object_Water_00
{
	Object_DataBlock_Header Header;
	unsigned char Step;
	unsigned char Motion_Step;
	float Timer;
	unsigned int CurrentBuffer;
	Wave_Element Wave_Info[4];
	float Grid_Y_Value[2304][2];
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


Wave_Element* Free_WaveElement_Search(HH_Object_Water_00* pThis);
Wave_Element* Oldest_WaveElement_Search(HH_Object_Water_00* pThis);
unsigned int WaveElement_Addition(HH_Object_Water_00* pThis, Wave_Element* pElement);
void Grid_Work_Initialize(HH_Object_Water_00* pThis);
unsigned int Object_Initialize(HH_Object_Water_00* pThis);
unsigned int Object_Motion_00(HH_Object_Water_00* pThis);
float Specular_Calculator(float* View_Direction, float* Light_Direction, float* Normal_Vector);
void SpecularRGBA_Calculator(int* iRGBA, float* RGBA_Base, float* RGBA_Specular_Base, float Specular_Ratio);
unsigned int Object_Draw(HH_Object_Water_00* pThis, ImpactQueue_Element* pElement);
unsigned int HH_Class_Prefix_Water_00();
unsigned int HH_Class_Suffix_Water_00();
unsigned int HH_Class_Water_00(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x25b7e0
Wave_Element* Free_WaveElement_Search(HH_Object_Water_00* pThis)
{
	Wave_Element* pElement;
	unsigned int i;
	Wave_Element* result;
	// Line 144, Address: 0x25b7e0, Func Offset: 0
	// Line 147, Address: 0x25b7e4, Func Offset: 0x4
	// Line 148, Address: 0x25b7f0, Func Offset: 0x10
	// Line 150, Address: 0x25b80c, Func Offset: 0x2c
	// Line 151, Address: 0x25b818, Func Offset: 0x38
	// Line 152, Address: 0x25b81c, Func Offset: 0x3c
	// Line 154, Address: 0x25b824, Func Offset: 0x44
	// Line 157, Address: 0x25b838, Func Offset: 0x58
	// Func End, Address: 0x25b840, Func Offset: 0x60
}

// 
// Start address: 0x25b840
Wave_Element* Oldest_WaveElement_Search(HH_Object_Water_00* pThis)
{
	Wave_Element* pElement;
	float time;
	unsigned int i;
	Wave_Element* result;
	// Line 170, Address: 0x25b840, Func Offset: 0
	// Line 172, Address: 0x25b844, Func Offset: 0x4
	// Line 174, Address: 0x25b848, Func Offset: 0x8
	// Line 175, Address: 0x25b854, Func Offset: 0x14
	// Line 177, Address: 0x25b870, Func Offset: 0x30
	// Line 178, Address: 0x25b87c, Func Offset: 0x3c
	// Line 179, Address: 0x25b890, Func Offset: 0x50
	// Line 180, Address: 0x25b894, Func Offset: 0x54
	// Line 183, Address: 0x25b898, Func Offset: 0x58
	// Line 185, Address: 0x25b8ac, Func Offset: 0x6c
	// Func End, Address: 0x25b8b4, Func Offset: 0x74
}

// 
// Start address: 0x25b8c0
unsigned int WaveElement_Addition(HH_Object_Water_00* pThis, Wave_Element* pElement)
{
	Wave_Element* pFree_Element;
	unsigned int result;
	// Line 196, Address: 0x25b8c0, Func Offset: 0
	// Line 198, Address: 0x25b8cc, Func Offset: 0xc
	// Line 201, Address: 0x25b8d4, Func Offset: 0x14
	// Line 202, Address: 0x25b8dc, Func Offset: 0x1c
	// Line 204, Address: 0x25b8e4, Func Offset: 0x24
	// Line 206, Address: 0x25b904, Func Offset: 0x44
	// Line 207, Address: 0x25b908, Func Offset: 0x48
	// Func End, Address: 0x25b918, Func Offset: 0x58
}

// 
// Start address: 0x25b920
void Grid_Work_Initialize(HH_Object_Water_00* pThis)
{
	// Line 216, Address: 0x25b920, Func Offset: 0
	// Line 217, Address: 0x25b928, Func Offset: 0x8
	// Line 218, Address: 0x25b93c, Func Offset: 0x1c
	// Func End, Address: 0x25b94c, Func Offset: 0x2c
}

// 
// Start address: 0x25b950
unsigned int Object_Initialize(HH_Object_Water_00* pThis)
{
	Wave_Element wave_element;
	Wave_Element wave_element;
	Wave_Element wave_element;
	unsigned int result;
	// Line 231, Address: 0x25b950, Func Offset: 0
	// Line 239, Address: 0x25b95c, Func Offset: 0xc
	// Line 241, Address: 0x25b960, Func Offset: 0x10
	// Line 248, Address: 0x25b964, Func Offset: 0x14
	// Line 249, Address: 0x25b96c, Func Offset: 0x1c
	// Line 250, Address: 0x25b974, Func Offset: 0x24
	// Line 251, Address: 0x25b978, Func Offset: 0x28
	// Line 252, Address: 0x25b980, Func Offset: 0x30
	// Line 253, Address: 0x25b988, Func Offset: 0x38
	// Line 254, Address: 0x25b990, Func Offset: 0x40
	// Line 255, Address: 0x25b99c, Func Offset: 0x4c
	// Line 257, Address: 0x25b9a4, Func Offset: 0x54
	// Line 262, Address: 0x25b9b0, Func Offset: 0x60
	// Line 263, Address: 0x25b9b8, Func Offset: 0x68
	// Line 264, Address: 0x25b9c0, Func Offset: 0x70
	// Line 265, Address: 0x25b9c4, Func Offset: 0x74
	// Line 266, Address: 0x25b9cc, Func Offset: 0x7c
	// Line 267, Address: 0x25b9d4, Func Offset: 0x84
	// Line 268, Address: 0x25b9dc, Func Offset: 0x8c
	// Line 269, Address: 0x25b9e8, Func Offset: 0x98
	// Line 271, Address: 0x25b9f0, Func Offset: 0xa0
	// Line 276, Address: 0x25ba00, Func Offset: 0xb0
	// Line 277, Address: 0x25ba08, Func Offset: 0xb8
	// Line 278, Address: 0x25ba10, Func Offset: 0xc0
	// Line 279, Address: 0x25ba18, Func Offset: 0xc8
	// Line 280, Address: 0x25ba24, Func Offset: 0xd4
	// Line 281, Address: 0x25ba2c, Func Offset: 0xdc
	// Line 282, Address: 0x25ba34, Func Offset: 0xe4
	// Line 283, Address: 0x25ba40, Func Offset: 0xf0
	// Line 285, Address: 0x25ba48, Func Offset: 0xf8
	// Line 288, Address: 0x25ba58, Func Offset: 0x108
	// Line 289, Address: 0x25ba5c, Func Offset: 0x10c
	// Func End, Address: 0x25ba6c, Func Offset: 0x11c
}

// 
// Start address: 0x25ba70
unsigned int Object_Motion_00(HH_Object_Water_00* pThis)
{
	float depth;
	unsigned int table_index;
	float* pPrev_Grid_Y_C;
	float* pCurr_Grid_Y_C;
	unsigned int z_index;
	unsigned int x_index;
	float* pPrev_Grid_Y;
	float* pCurr_Grid_Y;
	unsigned int result;
	float dev_1;
	float dev_0;
	// Line 319, Address: 0x25ba70, Func Offset: 0
	// Line 320, Address: 0x25ba88, Func Offset: 0x18
	// Line 330, Address: 0x25baa0, Func Offset: 0x30
	// Line 331, Address: 0x25baac, Func Offset: 0x3c
	// Line 332, Address: 0x25bab8, Func Offset: 0x48
	// Line 333, Address: 0x25bac8, Func Offset: 0x58
	// Line 335, Address: 0x25bad4, Func Offset: 0x64
	// Line 336, Address: 0x25badc, Func Offset: 0x6c
	// Line 337, Address: 0x25bb00, Func Offset: 0x90
	// Line 339, Address: 0x25bb24, Func Offset: 0xb4
	// Line 340, Address: 0x25bb30, Func Offset: 0xc0
	// Line 342, Address: 0x25bb3c, Func Offset: 0xcc
	// Line 343, Address: 0x25bb4c, Func Offset: 0xdc
	// Line 344, Address: 0x25bb50, Func Offset: 0xe0
	// Line 345, Address: 0x25bb64, Func Offset: 0xf4
	// Line 347, Address: 0x25bb74, Func Offset: 0x104
	// Line 348, Address: 0x25bb78, Func Offset: 0x108
	// Func End, Address: 0x25bb80, Func Offset: 0x110
}

// 
// Start address: 0x25bb80
float Specular_Calculator(float* View_Direction, float* Light_Direction, float* Normal_Vector)
{
	float cos_beta_min;
	float cos_beta;
	float cos_theta;
	float tmp_vec[4];
	float reverse_light_dir[4];
	float input_light_power;
	float specular_coefficient;
	float result;
	// Line 416, Address: 0x25bb80, Func Offset: 0
	// Line 429, Address: 0x25bba0, Func Offset: 0x20
	// Line 430, Address: 0x25bbb0, Func Offset: 0x30
	// Line 431, Address: 0x25bbc8, Func Offset: 0x48
	// Line 433, Address: 0x25bbcc, Func Offset: 0x4c
	// Line 434, Address: 0x25bbec, Func Offset: 0x6c
	// Line 435, Address: 0x25bc00, Func Offset: 0x80
	// Line 437, Address: 0x25bc10, Func Offset: 0x90
	// Line 438, Address: 0x25bc20, Func Offset: 0xa0
	// Line 439, Address: 0x25bc38, Func Offset: 0xb8
	// Line 459, Address: 0x25bc3c, Func Offset: 0xbc
	// Line 462, Address: 0x25bca0, Func Offset: 0x120
	// Func End, Address: 0x25bcbc, Func Offset: 0x13c
}

// 
// Start address: 0x25bcc0
void SpecularRGBA_Calculator(int* iRGBA, float* RGBA_Base, float* RGBA_Specular_Base, float Specular_Ratio)
{
	// Line 478, Address: 0x25bcc0, Func Offset: 0
	// Line 481, Address: 0x25bcc8, Func Offset: 0x8
	// Line 482, Address: 0x25bccc, Func Offset: 0xc
	// Line 483, Address: 0x25bcd0, Func Offset: 0x10
	// Line 484, Address: 0x25bcd4, Func Offset: 0x14
	// Line 485, Address: 0x25bcd8, Func Offset: 0x18
	// Line 486, Address: 0x25bcdc, Func Offset: 0x1c
	// Line 487, Address: 0x25bce0, Func Offset: 0x20
	// Line 488, Address: 0x25bce4, Func Offset: 0x24
	// Line 489, Address: 0x25bce8, Func Offset: 0x28
	// Line 490, Address: 0x25bcec, Func Offset: 0x2c
	// Line 491, Address: 0x25bcf0, Func Offset: 0x30
	// Line 492, Address: 0x25bcf4, Func Offset: 0x34
	// Line 513, Address: 0x25bcf8, Func Offset: 0x38
	// Func End, Address: 0x25bd00, Func Offset: 0x40
}

// 
// Start address: 0x25bd00
unsigned int Object_Draw(HH_Object_Water_00* pThis, ImpactQueue_Element* pElement)
{
	float color_scale;
	float color_scale;
	float stq1[4];
	float stq0[4];
	float specular_ratio;
	float n0[4];
	float vec1[4];
	float vec0[4];
	unsigned int addr;
	int rgba[4];
	int xyzf[4];
	float Rgba[4];
	float Grid_Vertex2[4];
	float Grid_Vertex1[4];
	float Grid_Vertex0[4];
	unsigned int Clip_Mask;
	unsigned int* pPk_End;
	unsigned int* pPk_Current;
	float cos_theta;
	float far_z;
	float Parameter[4];
	float Light_Color[4];
	float dir[4];
	float pos[4];
	float view_dir[4];
	float Ambient_Color[4];
	float* pGrid_Y;
	float clip_mat[4][4];
	float lsm[4][4];
	float lwm[4][4];
	unsigned int prim_type;
	unsigned int z_index;
	unsigned int x_index;
	unsigned int z_grid_max;
	unsigned int x_grid_max;
	unsigned int vertex_num;
	_anon0* pPk;
	unsigned int result;
	unsigned long _GifTag[2];
	float SpecularRgba[4];
	float Ambient_Color2[4];
	unsigned long _GifTag_Tri[2];
	float light_alpha;
	float amb_alpha;
	float Amb_Base[4];
	float Light_Base[4];
	// Line 526, Address: 0x25bd00, Func Offset: 0
	// Line 559, Address: 0x25bd38, Func Offset: 0x38
	// Line 570, Address: 0x25bd44, Func Offset: 0x44
	// Line 584, Address: 0x25bd60, Func Offset: 0x60
	// Line 604, Address: 0x25bd64, Func Offset: 0x64
	// Line 605, Address: 0x25bd70, Func Offset: 0x70
	// Line 606, Address: 0x25bd7c, Func Offset: 0x7c
	// Line 607, Address: 0x25bd94, Func Offset: 0x94
	// Line 609, Address: 0x25bdac, Func Offset: 0xac
	// Line 614, Address: 0x25bdc4, Func Offset: 0xc4
	// Line 615, Address: 0x25bdd0, Func Offset: 0xd0
	// Line 617, Address: 0x25bddc, Func Offset: 0xdc
	// Line 618, Address: 0x25bde0, Func Offset: 0xe0
	// Line 620, Address: 0x25bde4, Func Offset: 0xe4
	// Line 623, Address: 0x25bdf4, Func Offset: 0xf4
	// Line 628, Address: 0x25be08, Func Offset: 0x108
	// Line 634, Address: 0x25be14, Func Offset: 0x114
	// Line 636, Address: 0x25be20, Func Offset: 0x120
	// Line 637, Address: 0x25be34, Func Offset: 0x134
	// Line 640, Address: 0x25be48, Func Offset: 0x148
	// Line 641, Address: 0x25be54, Func Offset: 0x154
	// Line 645, Address: 0x25be68, Func Offset: 0x168
	// Line 662, Address: 0x25be70, Func Offset: 0x170
	// Line 665, Address: 0x25be7c, Func Offset: 0x17c
	// Line 666, Address: 0x25be88, Func Offset: 0x188
	// Line 667, Address: 0x25bee4, Func Offset: 0x1e4
	// Line 668, Address: 0x25bf48, Func Offset: 0x248
	// Line 670, Address: 0x25bf60, Func Offset: 0x260
	// Line 672, Address: 0x25bf78, Func Offset: 0x278
	// Line 681, Address: 0x25bf80, Func Offset: 0x280
	// Line 682, Address: 0x25bf9c, Func Offset: 0x29c
	// Line 684, Address: 0x25bfa0, Func Offset: 0x2a0
	// Line 697, Address: 0x25bfac, Func Offset: 0x2ac
	// Line 699, Address: 0x25bff8, Func Offset: 0x2f8
	// Line 700, Address: 0x25c05c, Func Offset: 0x35c
	// Line 701, Address: 0x25c080, Func Offset: 0x380
	// Line 702, Address: 0x25c0a8, Func Offset: 0x3a8
	// Line 715, Address: 0x25c0bc, Func Offset: 0x3bc
	// Line 716, Address: 0x25c0d8, Func Offset: 0x3d8
	// Line 717, Address: 0x25c0f0, Func Offset: 0x3f0
	// Line 720, Address: 0x25c0fc, Func Offset: 0x3fc
	// Line 721, Address: 0x25c110, Func Offset: 0x410
	// Line 723, Address: 0x25c124, Func Offset: 0x424
	// Line 724, Address: 0x25c134, Func Offset: 0x434
	// Line 725, Address: 0x25c144, Func Offset: 0x444
	// Line 726, Address: 0x25c14c, Func Offset: 0x44c
	// Line 728, Address: 0x25c150, Func Offset: 0x450
	// Line 730, Address: 0x25c164, Func Offset: 0x464
	// Line 736, Address: 0x25c17c, Func Offset: 0x47c
	// Line 738, Address: 0x25c184, Func Offset: 0x484
	// Line 740, Address: 0x25c1a4, Func Offset: 0x4a4
	// Line 742, Address: 0x25c1c0, Func Offset: 0x4c0
	// Line 744, Address: 0x25c1d8, Func Offset: 0x4d8
	// Line 745, Address: 0x25c1f0, Func Offset: 0x4f0
	// Line 746, Address: 0x25c204, Func Offset: 0x504
	// Line 748, Address: 0x25c20c, Func Offset: 0x50c
	// Line 750, Address: 0x25c220, Func Offset: 0x520
	// Line 751, Address: 0x25c234, Func Offset: 0x534
	// Line 753, Address: 0x25c250, Func Offset: 0x550
	// Line 754, Address: 0x25c268, Func Offset: 0x568
	// Line 755, Address: 0x25c284, Func Offset: 0x584
	// Line 757, Address: 0x25c28c, Func Offset: 0x58c
	// Line 759, Address: 0x25c29c, Func Offset: 0x59c
	// Line 770, Address: 0x25c2a0, Func Offset: 0x5a0
	// Line 771, Address: 0x25c2b0, Func Offset: 0x5b0
	// Line 772, Address: 0x25c2bc, Func Offset: 0x5bc
	// Line 773, Address: 0x25c2cc, Func Offset: 0x5cc
	// Line 774, Address: 0x25c2d8, Func Offset: 0x5d8
	// Line 775, Address: 0x25c2e8, Func Offset: 0x5e8
	// Line 776, Address: 0x25c2f4, Func Offset: 0x5f4
	// Line 782, Address: 0x25c2fc, Func Offset: 0x5fc
	// Line 789, Address: 0x25c308, Func Offset: 0x608
	// Line 792, Address: 0x25c328, Func Offset: 0x628
	// Line 794, Address: 0x25c344, Func Offset: 0x644
	// Line 796, Address: 0x25c35c, Func Offset: 0x65c
	// Line 797, Address: 0x25c374, Func Offset: 0x674
	// Line 798, Address: 0x25c388, Func Offset: 0x688
	// Line 800, Address: 0x25c390, Func Offset: 0x690
	// Line 802, Address: 0x25c3a4, Func Offset: 0x6a4
	// Line 803, Address: 0x25c3b8, Func Offset: 0x6b8
	// Line 805, Address: 0x25c3d4, Func Offset: 0x6d4
	// Line 806, Address: 0x25c3ec, Func Offset: 0x6ec
	// Line 807, Address: 0x25c408, Func Offset: 0x708
	// Line 809, Address: 0x25c410, Func Offset: 0x710
	// Line 815, Address: 0x25c420, Func Offset: 0x720
	// Line 816, Address: 0x25c428, Func Offset: 0x728
	// Line 829, Address: 0x25c430, Func Offset: 0x730
	// Line 830, Address: 0x25c440, Func Offset: 0x740
	// Line 831, Address: 0x25c44c, Func Offset: 0x74c
	// Line 832, Address: 0x25c45c, Func Offset: 0x75c
	// Line 833, Address: 0x25c468, Func Offset: 0x768
	// Line 834, Address: 0x25c478, Func Offset: 0x778
	// Line 835, Address: 0x25c484, Func Offset: 0x784
	// Line 836, Address: 0x25c494, Func Offset: 0x794
	// Line 837, Address: 0x25c4a0, Func Offset: 0x7a0
	// Line 838, Address: 0x25c4b4, Func Offset: 0x7b4
	// Line 841, Address: 0x25c4b8, Func Offset: 0x7b8
	// Line 860, Address: 0x25c4c8, Func Offset: 0x7c8
	// Line 862, Address: 0x25c4e0, Func Offset: 0x7e0
	// Line 864, Address: 0x25c4e8, Func Offset: 0x7e8
	// Line 865, Address: 0x25c4ec, Func Offset: 0x7ec
	// Func End, Address: 0x25c524, Func Offset: 0x824
}

// 
// Start address: 0x25c530
unsigned int HH_Class_Prefix_Water_00()
{
	unsigned long tex0;
	_anon0* pPk;
	unsigned int result;
	// Line 885, Address: 0x25c530, Func Offset: 0
	// Line 887, Address: 0x25c53c, Func Offset: 0xc
	// Line 890, Address: 0x25c548, Func Offset: 0x18
	// Line 893, Address: 0x25c550, Func Offset: 0x20
	// Line 895, Address: 0x25c560, Func Offset: 0x30
	// Line 897, Address: 0x25c574, Func Offset: 0x44
	// Line 901, Address: 0x25c588, Func Offset: 0x58
	// Line 903, Address: 0x25c5a4, Func Offset: 0x74
	// Line 905, Address: 0x25c5ac, Func Offset: 0x7c
	// Line 906, Address: 0x25c5b0, Func Offset: 0x80
	// Func End, Address: 0x25c5c4, Func Offset: 0x94
}

// 
// Start address: 0x25c5d0
unsigned int HH_Class_Suffix_Water_00()
{
	_anon0* pPk;
	unsigned int result;
	// Line 919, Address: 0x25c5d0, Func Offset: 0
	// Line 921, Address: 0x25c5dc, Func Offset: 0xc
	// Line 923, Address: 0x25c5e8, Func Offset: 0x18
	// Line 924, Address: 0x25c5f0, Func Offset: 0x20
	// Line 925, Address: 0x25c604, Func Offset: 0x34
	// Line 927, Address: 0x25c60c, Func Offset: 0x3c
	// Line 928, Address: 0x25c610, Func Offset: 0x40
	// Func End, Address: 0x25c624, Func Offset: 0x54
}

// 
// Start address: 0x25c630
unsigned int HH_Class_Water_00(void* pBlock, ImpactQueue_Element* pElement)
{
	HH_Object_Water_00* pThis;
	unsigned int result;
	// Line 941, Address: 0x25c630, Func Offset: 0
	// Line 949, Address: 0x25c648, Func Offset: 0x18
	// Line 950, Address: 0x25c64c, Func Offset: 0x1c
	// Line 952, Address: 0x25c650, Func Offset: 0x20
	// Line 955, Address: 0x25c684, Func Offset: 0x54
	// Line 957, Address: 0x25c68c, Func Offset: 0x5c
	// Line 958, Address: 0x25c698, Func Offset: 0x68
	// Line 959, Address: 0x25c6a0, Func Offset: 0x70
	// Line 962, Address: 0x25c6a8, Func Offset: 0x78
	// Line 965, Address: 0x25c6b4, Func Offset: 0x84
	// Line 967, Address: 0x25c6bc, Func Offset: 0x8c
	// Line 968, Address: 0x25c6c4, Func Offset: 0x94
	// Line 969, Address: 0x25c6d4, Func Offset: 0xa4
	// Line 972, Address: 0x25c6dc, Func Offset: 0xac
	// Line 973, Address: 0x25c6f8, Func Offset: 0xc8
	// Line 975, Address: 0x25c700, Func Offset: 0xd0
	// Line 976, Address: 0x25c708, Func Offset: 0xd8
	// Line 979, Address: 0x25c710, Func Offset: 0xe0
	// Line 980, Address: 0x25c714, Func Offset: 0xe4
	// Line 983, Address: 0x25c718, Func Offset: 0xe8
	// Line 984, Address: 0x25c71c, Func Offset: 0xec
	// Func End, Address: 0x25c738, Func Offset: 0x108
}

