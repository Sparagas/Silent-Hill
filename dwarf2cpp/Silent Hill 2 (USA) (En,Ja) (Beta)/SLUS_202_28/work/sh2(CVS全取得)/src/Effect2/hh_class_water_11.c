typedef struct WaveArea_Infomeation;
typedef struct HH_Object_Water_11;
typedef struct ImpactQueue_Element;
typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_ElementOption;
typedef struct _anon0;
typedef struct Wave_Element;


typedef WaveArea_Infomeation type_0[1];
typedef char type_1[80];
typedef float type_2[4][2];
typedef float type_3[2];
typedef int type_4[2];
typedef int type_5[4];
typedef float type_6[4];
typedef unsigned int type_7[1];
typedef float type_8[4];
typedef float type_9[4][4];
typedef Wave_Element type_10[20];
typedef float type_11[925];
typedef unsigned long type_12[2];
typedef float* type_13[1];
typedef unsigned int type_14[2];
typedef unsigned int type_15[2][4];
typedef unsigned int type_16[1];
typedef float type_17[1];
typedef unsigned int type_18[1];
typedef unsigned int type_19[2];
typedef unsigned long type_20[2];
typedef unsigned int type_21[2];

struct WaveArea_Infomeation
{
	float World_Location[4];
	float Grid_WH[4];
	unsigned int Grid_Index[2];
	unsigned int* pViewArea_List;
	unsigned int ViewArea_List_Max;
	float* pGrid_Y_Value;
	float Specular_BaseRGBA[4];
	float Ambient0_BaseRGBA[4];
	float Ambient1_BaseRGBA[4];
	float Light_BaseRGBA[4];
	float* pST_Defference;
};

struct HH_Object_Water_11
{
	Object_DataBlock_Header Header;
	unsigned char Step;
	unsigned char Motion_Step;
	float Timer;
	float ST_Defference[4];
	Wave_Element Wave_Info[20];
	float Area00_Grid_Y_Value[925];
	float* pArea_Grid_Y_Value_Table[1];
	float Area_WavePostTime[1];
	unsigned int Area_Enable_Table[1];
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

unsigned int _area00_view_list[1];
WaveArea_Infomeation _Area_Info_List[1];

void Grid_Work_Initialize(HH_Object_Water_11* pThis);
unsigned int Object_Initialize(HH_Object_Water_11* pThis);
void CurrentPosition_AreaIndex_Calculator(ImpactQueue_Element* pElement, WaveArea_Infomeation* pInfo, unsigned int* pX_Index, unsigned int* pZ_Index);
float Specular_Calculator(float* View_Direction, float* Light_Direction, float* Normal_Vector);
void SpecularRGBA_Calculator(int* iRGBA, float* RGBA_Base, float* RGBA_Specular_Base, float Specular_Ratio);
unsigned int Object_Draw(HH_Object_Water_11* pThis, float* pGrid_Y_Value, float* WorldLocation, unsigned int Grid_X_Max, unsigned int Grid_Z_Max);
unsigned int HH_Class_Prefix_Water_11();
unsigned int HH_Class_Suffix_Water_11();
unsigned int HH_Class_Water_11(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x25ff40
void Grid_Work_Initialize(HH_Object_Water_11* pThis)
{
	// Line 144, Address: 0x25ff40, Func Offset: 0
	// Line 146, Address: 0x25ff48, Func Offset: 0x8
	// Line 147, Address: 0x25ff5c, Func Offset: 0x1c
	// Func End, Address: 0x25ff6c, Func Offset: 0x2c
}

// 
// Start address: 0x25ff70
unsigned int Object_Initialize(HH_Object_Water_11* pThis)
{
	unsigned int result;
	// Line 160, Address: 0x25ff70, Func Offset: 0
	// Line 168, Address: 0x25ff80, Func Offset: 0x10
	// Line 170, Address: 0x25ff84, Func Offset: 0x14
	// Line 172, Address: 0x25ff88, Func Offset: 0x18
	// Line 174, Address: 0x25ffa8, Func Offset: 0x38
	// Line 176, Address: 0x25ffac, Func Offset: 0x3c
	// Line 178, Address: 0x25ffb4, Func Offset: 0x44
	// Line 230, Address: 0x25ffbc, Func Offset: 0x4c
	// Line 231, Address: 0x25ffc0, Func Offset: 0x50
	// Func End, Address: 0x25ffd4, Func Offset: 0x64
}

// 
// Start address: 0x25ffe0
void CurrentPosition_AreaIndex_Calculator(ImpactQueue_Element* pElement, WaveArea_Infomeation* pInfo, unsigned int* pX_Index, unsigned int* pZ_Index)
{
	float check_pos[4];
	// Line 236, Address: 0x25ffe0, Func Offset: 0
	// Line 239, Address: 0x260000, Func Offset: 0x20
	// Line 240, Address: 0x260014, Func Offset: 0x34
	// Line 241, Address: 0x26003c, Func Offset: 0x5c
	// Line 242, Address: 0x260064, Func Offset: 0x84
	// Func End, Address: 0x26007c, Func Offset: 0x9c
}

// 
// Start address: 0x260080
float Specular_Calculator(float* View_Direction, float* Light_Direction, float* Normal_Vector)
{
	float cos_beta;
	float cos_theta;
	float tmp_vec[4];
	float reverse_light_dir[4];
	float input_light_power;
	float specular_coefficient;
	float result;
	float cos_beta_min;
	// Line 255, Address: 0x260080, Func Offset: 0
	// Line 268, Address: 0x2600a0, Func Offset: 0x20
	// Line 269, Address: 0x2600b0, Func Offset: 0x30
	// Line 270, Address: 0x2600c8, Func Offset: 0x48
	// Line 272, Address: 0x2600cc, Func Offset: 0x4c
	// Line 273, Address: 0x2600ec, Func Offset: 0x6c
	// Line 274, Address: 0x260100, Func Offset: 0x80
	// Line 276, Address: 0x260110, Func Offset: 0x90
	// Line 277, Address: 0x260120, Func Offset: 0xa0
	// Line 278, Address: 0x260138, Func Offset: 0xb8
	// Line 299, Address: 0x26013c, Func Offset: 0xbc
	// Line 302, Address: 0x26018c, Func Offset: 0x10c
	// Func End, Address: 0x2601a8, Func Offset: 0x128
}

// 
// Start address: 0x2601b0
void SpecularRGBA_Calculator(int* iRGBA, float* RGBA_Base, float* RGBA_Specular_Base, float Specular_Ratio)
{
	// Line 318, Address: 0x2601b0, Func Offset: 0
	// Line 321, Address: 0x2601b8, Func Offset: 0x8
	// Line 322, Address: 0x2601bc, Func Offset: 0xc
	// Line 323, Address: 0x2601c0, Func Offset: 0x10
	// Line 324, Address: 0x2601c4, Func Offset: 0x14
	// Line 325, Address: 0x2601c8, Func Offset: 0x18
	// Line 326, Address: 0x2601cc, Func Offset: 0x1c
	// Line 327, Address: 0x2601d0, Func Offset: 0x20
	// Line 328, Address: 0x2601d4, Func Offset: 0x24
	// Line 329, Address: 0x2601d8, Func Offset: 0x28
	// Line 330, Address: 0x2601dc, Func Offset: 0x2c
	// Line 331, Address: 0x2601e0, Func Offset: 0x30
	// Line 332, Address: 0x2601e4, Func Offset: 0x34
	// Line 353, Address: 0x2601e8, Func Offset: 0x38
	// Func End, Address: 0x2601f0, Func Offset: 0x40
}

// 
// Start address: 0x2601f0
unsigned int Object_Draw(HH_Object_Water_11* pThis, float* pGrid_Y_Value, float* WorldLocation, unsigned int Grid_X_Max, unsigned int Grid_Z_Max)
{
	float color_scale;
	float color_scale;
	float base;
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
	float sx;
	float ty;
	unsigned long _GifTag_Tri[2];
	float light_alpha;
	float amb_alpha;
	float Amb_Base[4];
	float Light_Base[4];
	// Line 366, Address: 0x2601f0, Func Offset: 0
	// Line 397, Address: 0x26023c, Func Offset: 0x4c
	// Line 400, Address: 0x260248, Func Offset: 0x58
	// Line 422, Address: 0x260250, Func Offset: 0x60
	// Line 426, Address: 0x260254, Func Offset: 0x64
	// Line 427, Address: 0x260260, Func Offset: 0x70
	// Line 428, Address: 0x26026c, Func Offset: 0x7c
	// Line 429, Address: 0x260284, Func Offset: 0x94
	// Line 431, Address: 0x26029c, Func Offset: 0xac
	// Line 436, Address: 0x2602b4, Func Offset: 0xc4
	// Line 437, Address: 0x2602c0, Func Offset: 0xd0
	// Line 439, Address: 0x2602cc, Func Offset: 0xdc
	// Line 440, Address: 0x2602d0, Func Offset: 0xe0
	// Line 442, Address: 0x2602d4, Func Offset: 0xe4
	// Line 445, Address: 0x2602e4, Func Offset: 0xf4
	// Line 450, Address: 0x2602f8, Func Offset: 0x108
	// Line 455, Address: 0x260304, Func Offset: 0x114
	// Line 457, Address: 0x260310, Func Offset: 0x120
	// Line 458, Address: 0x260324, Func Offset: 0x134
	// Line 461, Address: 0x260338, Func Offset: 0x148
	// Line 462, Address: 0x260344, Func Offset: 0x154
	// Line 466, Address: 0x260358, Func Offset: 0x168
	// Line 468, Address: 0x260360, Func Offset: 0x170
	// Line 471, Address: 0x26036c, Func Offset: 0x17c
	// Line 472, Address: 0x260378, Func Offset: 0x188
	// Line 473, Address: 0x2603d4, Func Offset: 0x1e4
	// Line 474, Address: 0x260438, Func Offset: 0x248
	// Line 476, Address: 0x260450, Func Offset: 0x260
	// Line 478, Address: 0x260468, Func Offset: 0x278
	// Line 486, Address: 0x260470, Func Offset: 0x280
	// Line 487, Address: 0x26048c, Func Offset: 0x29c
	// Line 489, Address: 0x260490, Func Offset: 0x2a0
	// Line 502, Address: 0x26049c, Func Offset: 0x2ac
	// Line 504, Address: 0x2604e8, Func Offset: 0x2f8
	// Line 505, Address: 0x260548, Func Offset: 0x358
	// Line 506, Address: 0x260564, Func Offset: 0x374
	// Line 507, Address: 0x260584, Func Offset: 0x394
	// Line 516, Address: 0x260598, Func Offset: 0x3a8
	// Line 518, Address: 0x2605c0, Func Offset: 0x3d0
	// Line 519, Address: 0x2605e0, Func Offset: 0x3f0
	// Line 520, Address: 0x2605ec, Func Offset: 0x3fc
	// Line 522, Address: 0x2605f8, Func Offset: 0x408
	// Line 523, Address: 0x26060c, Func Offset: 0x41c
	// Line 526, Address: 0x260620, Func Offset: 0x430
	// Line 527, Address: 0x260634, Func Offset: 0x444
	// Line 529, Address: 0x260648, Func Offset: 0x458
	// Line 530, Address: 0x260658, Func Offset: 0x468
	// Line 531, Address: 0x260668, Func Offset: 0x478
	// Line 532, Address: 0x260670, Func Offset: 0x480
	// Line 534, Address: 0x260674, Func Offset: 0x484
	// Line 536, Address: 0x260688, Func Offset: 0x498
	// Line 542, Address: 0x2606a0, Func Offset: 0x4b0
	// Line 545, Address: 0x2606a8, Func Offset: 0x4b8
	// Line 547, Address: 0x2606c8, Func Offset: 0x4d8
	// Line 549, Address: 0x2606e4, Func Offset: 0x4f4
	// Line 551, Address: 0x2606fc, Func Offset: 0x50c
	// Line 552, Address: 0x260714, Func Offset: 0x524
	// Line 553, Address: 0x260728, Func Offset: 0x538
	// Line 555, Address: 0x260730, Func Offset: 0x540
	// Line 557, Address: 0x260744, Func Offset: 0x554
	// Line 558, Address: 0x260758, Func Offset: 0x568
	// Line 560, Address: 0x260774, Func Offset: 0x584
	// Line 561, Address: 0x26078c, Func Offset: 0x59c
	// Line 562, Address: 0x2607a8, Func Offset: 0x5b8
	// Line 564, Address: 0x2607b0, Func Offset: 0x5c0
	// Line 577, Address: 0x2607c0, Func Offset: 0x5d0
	// Line 578, Address: 0x2607d0, Func Offset: 0x5e0
	// Line 579, Address: 0x2607dc, Func Offset: 0x5ec
	// Line 580, Address: 0x2607ec, Func Offset: 0x5fc
	// Line 581, Address: 0x2607f8, Func Offset: 0x608
	// Line 582, Address: 0x260808, Func Offset: 0x618
	// Line 583, Address: 0x260814, Func Offset: 0x624
	// Line 589, Address: 0x26081c, Func Offset: 0x62c
	// Line 597, Address: 0x260828, Func Offset: 0x638
	// Line 600, Address: 0x260848, Func Offset: 0x658
	// Line 602, Address: 0x260864, Func Offset: 0x674
	// Line 604, Address: 0x26087c, Func Offset: 0x68c
	// Line 605, Address: 0x260894, Func Offset: 0x6a4
	// Line 606, Address: 0x2608a8, Func Offset: 0x6b8
	// Line 608, Address: 0x2608b0, Func Offset: 0x6c0
	// Line 610, Address: 0x2608c4, Func Offset: 0x6d4
	// Line 611, Address: 0x2608d8, Func Offset: 0x6e8
	// Line 613, Address: 0x2608f4, Func Offset: 0x704
	// Line 614, Address: 0x26090c, Func Offset: 0x71c
	// Line 615, Address: 0x260928, Func Offset: 0x738
	// Line 617, Address: 0x260930, Func Offset: 0x740
	// Line 623, Address: 0x260940, Func Offset: 0x750
	// Line 624, Address: 0x260948, Func Offset: 0x758
	// Line 627, Address: 0x260950, Func Offset: 0x760
	// Line 628, Address: 0x260960, Func Offset: 0x770
	// Line 629, Address: 0x26096c, Func Offset: 0x77c
	// Line 630, Address: 0x26097c, Func Offset: 0x78c
	// Line 631, Address: 0x260988, Func Offset: 0x798
	// Line 632, Address: 0x260998, Func Offset: 0x7a8
	// Line 633, Address: 0x2609a4, Func Offset: 0x7b4
	// Line 634, Address: 0x2609b4, Func Offset: 0x7c4
	// Line 635, Address: 0x2609c0, Func Offset: 0x7d0
	// Line 636, Address: 0x2609d8, Func Offset: 0x7e8
	// Line 639, Address: 0x2609dc, Func Offset: 0x7ec
	// Line 641, Address: 0x2609ec, Func Offset: 0x7fc
	// Line 643, Address: 0x260a04, Func Offset: 0x814
	// Line 645, Address: 0x260a0c, Func Offset: 0x81c
	// Line 646, Address: 0x260a10, Func Offset: 0x820
	// Func End, Address: 0x260a50, Func Offset: 0x860
}

// 
// Start address: 0x260a50
unsigned int HH_Class_Prefix_Water_11()
{
	unsigned long tex0;
	_anon0* pPk;
	unsigned int result;
	// Line 666, Address: 0x260a50, Func Offset: 0
	// Line 668, Address: 0x260a5c, Func Offset: 0xc
	// Line 671, Address: 0x260a68, Func Offset: 0x18
	// Line 674, Address: 0x260a70, Func Offset: 0x20
	// Line 675, Address: 0x260a80, Func Offset: 0x30
	// Line 677, Address: 0x260a94, Func Offset: 0x44
	// Line 678, Address: 0x260ab8, Func Offset: 0x68
	// Line 680, Address: 0x260ad4, Func Offset: 0x84
	// Line 682, Address: 0x260adc, Func Offset: 0x8c
	// Line 683, Address: 0x260ae0, Func Offset: 0x90
	// Func End, Address: 0x260af4, Func Offset: 0xa4
}

// 
// Start address: 0x260b00
unsigned int HH_Class_Suffix_Water_11()
{
	_anon0* pPk;
	unsigned int result;
	// Line 696, Address: 0x260b00, Func Offset: 0
	// Line 698, Address: 0x260b0c, Func Offset: 0xc
	// Line 700, Address: 0x260b18, Func Offset: 0x18
	// Line 701, Address: 0x260b20, Func Offset: 0x20
	// Line 702, Address: 0x260b34, Func Offset: 0x34
	// Line 704, Address: 0x260b3c, Func Offset: 0x3c
	// Line 705, Address: 0x260b40, Func Offset: 0x40
	// Func End, Address: 0x260b54, Func Offset: 0x54
}

// 
// Start address: 0x260b60
unsigned int HH_Class_Water_11(void* pBlock, ImpactQueue_Element* pElement)
{
	WaveArea_Infomeation* pInfo;
	unsigned int y;
	unsigned int x;
	WaveArea_Infomeation* pArea_Info;
	WaveArea_Infomeation* pArea_Info;
	unsigned int i;
	unsigned int z;
	unsigned int x;
	Wave_Element wave_element;
	WaveArea_Infomeation* pInfo;
	unsigned int i;
	unsigned int z;
	unsigned int x;
	Wave_Element wave_element;
	int area;
	int area;
	float rad;
	float rad_omega;
	HH_Object_Water_11* pThis;
	unsigned int result;
	unsigned int i;
	char tmp[80];
	float __v;
	float __omega;
	float __arri;
	float __lost_time;
	float __distance;
	float _interval;
	float _v;
	float _omega;
	float _arri;
	float _lost_time;
	float _distance;
	float add_move;
	float center;
	float base_move;
	float degree;
	// Line 719, Address: 0x260b60, Func Offset: 0
	// Line 726, Address: 0x260b8c, Func Offset: 0x2c
	// Line 727, Address: 0x260b90, Func Offset: 0x30
	// Line 729, Address: 0x260b94, Func Offset: 0x34
	// Line 732, Address: 0x260bbc, Func Offset: 0x5c
	// Line 734, Address: 0x260bc4, Func Offset: 0x64
	// Line 735, Address: 0x260bcc, Func Offset: 0x6c
	// Line 739, Address: 0x260bd4, Func Offset: 0x74
	// Line 747, Address: 0x260bdc, Func Offset: 0x7c
	// Line 748, Address: 0x260bf4, Func Offset: 0x94
	// Line 750, Address: 0x260cb4, Func Offset: 0x154
	// Line 751, Address: 0x260cf8, Func Offset: 0x198
	// Line 756, Address: 0x260d3c, Func Offset: 0x1dc
	// Line 758, Address: 0x260d58, Func Offset: 0x1f8
	// Line 759, Address: 0x260d68, Func Offset: 0x208
	// Line 760, Address: 0x260d74, Func Offset: 0x214
	// Line 761, Address: 0x260d90, Func Offset: 0x230
	// Line 763, Address: 0x260d98, Func Offset: 0x238
	// Line 768, Address: 0x260d9c, Func Offset: 0x23c
	// Line 769, Address: 0x260da8, Func Offset: 0x248
	// Line 771, Address: 0x260dc4, Func Offset: 0x264
	// Line 780, Address: 0x260dd0, Func Offset: 0x270
	// Line 781, Address: 0x260dfc, Func Offset: 0x29c
	// Line 782, Address: 0x260e04, Func Offset: 0x2a4
	// Line 783, Address: 0x260e08, Func Offset: 0x2a8
	// Line 784, Address: 0x260e10, Func Offset: 0x2b0
	// Line 786, Address: 0x260e18, Func Offset: 0x2b8
	// Line 787, Address: 0x260e24, Func Offset: 0x2c4
	// Line 788, Address: 0x260e30, Func Offset: 0x2d0
	// Line 789, Address: 0x260e3c, Func Offset: 0x2dc
	// Line 790, Address: 0x260e58, Func Offset: 0x2f8
	// Line 791, Address: 0x260e64, Func Offset: 0x304
	// Line 793, Address: 0x260e68, Func Offset: 0x308
	// Line 795, Address: 0x260e7c, Func Offset: 0x31c
	// Line 804, Address: 0x260e80, Func Offset: 0x320
	// Line 805, Address: 0x260e8c, Func Offset: 0x32c
	// Line 808, Address: 0x260ea0, Func Offset: 0x340
	// Line 814, Address: 0x260ec8, Func Offset: 0x368
	// Line 816, Address: 0x260ee0, Func Offset: 0x380
	// Line 817, Address: 0x260efc, Func Offset: 0x39c
	// Line 819, Address: 0x260f18, Func Offset: 0x3b8
	// Line 820, Address: 0x260f3c, Func Offset: 0x3dc
	// Line 821, Address: 0x260f60, Func Offset: 0x400
	// Line 822, Address: 0x260f64, Func Offset: 0x404
	// Line 824, Address: 0x260f6c, Func Offset: 0x40c
	// Line 826, Address: 0x260f74, Func Offset: 0x414
	// Line 828, Address: 0x260f7c, Func Offset: 0x41c
	// Line 829, Address: 0x260fa0, Func Offset: 0x440
	// Line 830, Address: 0x260fa4, Func Offset: 0x444
	// Line 832, Address: 0x260fac, Func Offset: 0x44c
	// Line 834, Address: 0x260fb4, Func Offset: 0x454
	// Line 836, Address: 0x260fb8, Func Offset: 0x458
	// Line 837, Address: 0x260fc0, Func Offset: 0x460
	// Line 838, Address: 0x260fc4, Func Offset: 0x464
	// Line 839, Address: 0x260fc8, Func Offset: 0x468
	// Line 841, Address: 0x260fcc, Func Offset: 0x46c
	// Line 842, Address: 0x260fd8, Func Offset: 0x478
	// Line 843, Address: 0x260fe4, Func Offset: 0x484
	// Line 844, Address: 0x260ff0, Func Offset: 0x490
	// Line 845, Address: 0x26100c, Func Offset: 0x4ac
	// Line 846, Address: 0x261018, Func Offset: 0x4b8
	// Line 848, Address: 0x26101c, Func Offset: 0x4bc
	// Line 849, Address: 0x261030, Func Offset: 0x4d0
	// Line 851, Address: 0x261038, Func Offset: 0x4d8
	// Line 855, Address: 0x261048, Func Offset: 0x4e8
	// Line 859, Address: 0x261050, Func Offset: 0x4f0
	// Line 860, Address: 0x26105c, Func Offset: 0x4fc
	// Line 861, Address: 0x261070, Func Offset: 0x510
	// Line 863, Address: 0x261088, Func Offset: 0x528
	// Line 864, Address: 0x26109c, Func Offset: 0x53c
	// Line 865, Address: 0x2610a0, Func Offset: 0x540
	// Line 868, Address: 0x2610b0, Func Offset: 0x550
	// Line 869, Address: 0x2610bc, Func Offset: 0x55c
	// Line 870, Address: 0x2610d0, Func Offset: 0x570
	// Line 872, Address: 0x2610e8, Func Offset: 0x588
	// Line 874, Address: 0x261100, Func Offset: 0x5a0
	// Line 875, Address: 0x261110, Func Offset: 0x5b0
	// Line 877, Address: 0x261120, Func Offset: 0x5c0
	// Line 885, Address: 0x261128, Func Offset: 0x5c8
	// Line 887, Address: 0x261148, Func Offset: 0x5e8
	// Line 888, Address: 0x261170, Func Offset: 0x610
	// Line 889, Address: 0x261188, Func Offset: 0x628
	// Line 890, Address: 0x2611b0, Func Offset: 0x650
	// Line 891, Address: 0x2611c8, Func Offset: 0x668
	// Line 892, Address: 0x2611f0, Func Offset: 0x690
	// Line 893, Address: 0x261208, Func Offset: 0x6a8
	// Line 894, Address: 0x261228, Func Offset: 0x6c8
	// Line 896, Address: 0x261240, Func Offset: 0x6e0
	// Line 898, Address: 0x26125c, Func Offset: 0x6fc
	// Line 901, Address: 0x261264, Func Offset: 0x704
	// Line 902, Address: 0x261280, Func Offset: 0x720
	// Line 904, Address: 0x261298, Func Offset: 0x738
	// Line 905, Address: 0x2612b4, Func Offset: 0x754
	// Line 907, Address: 0x2612cc, Func Offset: 0x76c
	// Line 908, Address: 0x2612e8, Func Offset: 0x788
	// Line 910, Address: 0x261300, Func Offset: 0x7a0
	// Line 911, Address: 0x26131c, Func Offset: 0x7bc
	// Line 913, Address: 0x261334, Func Offset: 0x7d4
	// Line 914, Address: 0x261350, Func Offset: 0x7f0
	// Line 916, Address: 0x261368, Func Offset: 0x808
	// Line 917, Address: 0x261384, Func Offset: 0x824
	// Line 922, Address: 0x26139c, Func Offset: 0x83c
	// Line 923, Address: 0x2613b8, Func Offset: 0x858
	// Line 926, Address: 0x2613c0, Func Offset: 0x860
	// Line 927, Address: 0x2613c4, Func Offset: 0x864
	// Line 930, Address: 0x2613c8, Func Offset: 0x868
	// Line 931, Address: 0x2613cc, Func Offset: 0x86c
	// Func End, Address: 0x2613fc, Func Offset: 0x89c
}

