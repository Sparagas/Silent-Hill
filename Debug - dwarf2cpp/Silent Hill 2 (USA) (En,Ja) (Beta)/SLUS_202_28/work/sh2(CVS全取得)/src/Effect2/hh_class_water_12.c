typedef struct WaveArea_Infomeation;
typedef struct HH_Object_Water_12;
typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_Element;
typedef struct ImpactQueue_ElementOption;
typedef struct _anon0;
typedef struct Wave_Element;


typedef WaveArea_Infomeation type_0[1];
typedef float type_1[4][2];
typedef char type_2[80];
typedef float type_3[2];
typedef int type_4[2];
typedef int type_5[4];
typedef float type_6[4];
typedef unsigned int type_7[1];
typedef float type_8[4];
typedef float type_9[4][4];
typedef Wave_Element type_10[20];
typedef float type_11[493];
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

struct HH_Object_Water_12
{
	Object_DataBlock_Header Header;
	unsigned char Step;
	unsigned char Motion_Step;
	float Timer;
	float ST_Defference[4];
	Wave_Element Wave_Info[20];
	float Area00_Grid_Y_Value[493];
	float* pArea_Grid_Y_Value_Table[1];
	float Area_WavePostTime[1];
	unsigned int Area_Enable_Table[1];
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

void Grid_Work_Initialize(HH_Object_Water_12* pThis);
unsigned int Object_Initialize(HH_Object_Water_12* pThis);
void CurrentPosition_AreaIndex_Calculator(ImpactQueue_Element* pElement, WaveArea_Infomeation* pInfo, unsigned int* pX_Index, unsigned int* pZ_Index);
float Specular_Calculator(float* View_Direction, float* Light_Direction, float* Normal_Vector);
void SpecularRGBA_Calculator(int* iRGBA, float* RGBA_Base, float* RGBA_Specular_Base, float Specular_Ratio);
unsigned int Object_Draw(HH_Object_Water_12* pThis, float* pGrid_Y_Value, float* WorldLocation, unsigned int Grid_X_Max, unsigned int Grid_Z_Max);
unsigned int HH_Class_Prefix_Water_12();
unsigned int HH_Class_Suffix_Water_12();
unsigned int HH_Class_Water_12(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x261400
void Grid_Work_Initialize(HH_Object_Water_12* pThis)
{
	// Line 147, Address: 0x261400, Func Offset: 0
	// Line 149, Address: 0x261408, Func Offset: 0x8
	// Line 150, Address: 0x26141c, Func Offset: 0x1c
	// Func End, Address: 0x26142c, Func Offset: 0x2c
}

// 
// Start address: 0x261430
unsigned int Object_Initialize(HH_Object_Water_12* pThis)
{
	unsigned int result;
	// Line 163, Address: 0x261430, Func Offset: 0
	// Line 171, Address: 0x261440, Func Offset: 0x10
	// Line 173, Address: 0x261444, Func Offset: 0x14
	// Line 175, Address: 0x261448, Func Offset: 0x18
	// Line 177, Address: 0x261468, Func Offset: 0x38
	// Line 179, Address: 0x26146c, Func Offset: 0x3c
	// Line 181, Address: 0x261474, Func Offset: 0x44
	// Line 233, Address: 0x26147c, Func Offset: 0x4c
	// Line 234, Address: 0x261480, Func Offset: 0x50
	// Func End, Address: 0x261494, Func Offset: 0x64
}

// 
// Start address: 0x2614a0
void CurrentPosition_AreaIndex_Calculator(ImpactQueue_Element* pElement, WaveArea_Infomeation* pInfo, unsigned int* pX_Index, unsigned int* pZ_Index)
{
	float check_pos[4];
	// Line 239, Address: 0x2614a0, Func Offset: 0
	// Line 242, Address: 0x2614c0, Func Offset: 0x20
	// Line 243, Address: 0x2614d4, Func Offset: 0x34
	// Line 244, Address: 0x2614fc, Func Offset: 0x5c
	// Line 245, Address: 0x261524, Func Offset: 0x84
	// Func End, Address: 0x26153c, Func Offset: 0x9c
}

// 
// Start address: 0x261540
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
	// Line 258, Address: 0x261540, Func Offset: 0
	// Line 271, Address: 0x261560, Func Offset: 0x20
	// Line 272, Address: 0x261570, Func Offset: 0x30
	// Line 273, Address: 0x261588, Func Offset: 0x48
	// Line 275, Address: 0x26158c, Func Offset: 0x4c
	// Line 276, Address: 0x2615ac, Func Offset: 0x6c
	// Line 277, Address: 0x2615c0, Func Offset: 0x80
	// Line 279, Address: 0x2615d0, Func Offset: 0x90
	// Line 280, Address: 0x2615e0, Func Offset: 0xa0
	// Line 281, Address: 0x2615f8, Func Offset: 0xb8
	// Line 302, Address: 0x2615fc, Func Offset: 0xbc
	// Line 305, Address: 0x26164c, Func Offset: 0x10c
	// Func End, Address: 0x261668, Func Offset: 0x128
}

// 
// Start address: 0x261670
void SpecularRGBA_Calculator(int* iRGBA, float* RGBA_Base, float* RGBA_Specular_Base, float Specular_Ratio)
{
	// Line 321, Address: 0x261670, Func Offset: 0
	// Line 324, Address: 0x261678, Func Offset: 0x8
	// Line 325, Address: 0x26167c, Func Offset: 0xc
	// Line 326, Address: 0x261680, Func Offset: 0x10
	// Line 327, Address: 0x261684, Func Offset: 0x14
	// Line 328, Address: 0x261688, Func Offset: 0x18
	// Line 329, Address: 0x26168c, Func Offset: 0x1c
	// Line 330, Address: 0x261690, Func Offset: 0x20
	// Line 331, Address: 0x261694, Func Offset: 0x24
	// Line 332, Address: 0x261698, Func Offset: 0x28
	// Line 333, Address: 0x26169c, Func Offset: 0x2c
	// Line 334, Address: 0x2616a0, Func Offset: 0x30
	// Line 335, Address: 0x2616a4, Func Offset: 0x34
	// Line 356, Address: 0x2616a8, Func Offset: 0x38
	// Func End, Address: 0x2616b0, Func Offset: 0x40
}

// 
// Start address: 0x2616b0
unsigned int Object_Draw(HH_Object_Water_12* pThis, float* pGrid_Y_Value, float* WorldLocation, unsigned int Grid_X_Max, unsigned int Grid_Z_Max)
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
	// Line 369, Address: 0x2616b0, Func Offset: 0
	// Line 400, Address: 0x2616fc, Func Offset: 0x4c
	// Line 403, Address: 0x261708, Func Offset: 0x58
	// Line 425, Address: 0x261710, Func Offset: 0x60
	// Line 429, Address: 0x261714, Func Offset: 0x64
	// Line 430, Address: 0x261720, Func Offset: 0x70
	// Line 431, Address: 0x26172c, Func Offset: 0x7c
	// Line 432, Address: 0x261744, Func Offset: 0x94
	// Line 434, Address: 0x26175c, Func Offset: 0xac
	// Line 439, Address: 0x261774, Func Offset: 0xc4
	// Line 440, Address: 0x261780, Func Offset: 0xd0
	// Line 442, Address: 0x26178c, Func Offset: 0xdc
	// Line 443, Address: 0x261790, Func Offset: 0xe0
	// Line 445, Address: 0x261794, Func Offset: 0xe4
	// Line 448, Address: 0x2617a4, Func Offset: 0xf4
	// Line 453, Address: 0x2617b8, Func Offset: 0x108
	// Line 458, Address: 0x2617c4, Func Offset: 0x114
	// Line 460, Address: 0x2617d0, Func Offset: 0x120
	// Line 461, Address: 0x2617e4, Func Offset: 0x134
	// Line 464, Address: 0x2617f8, Func Offset: 0x148
	// Line 465, Address: 0x261804, Func Offset: 0x154
	// Line 469, Address: 0x261818, Func Offset: 0x168
	// Line 471, Address: 0x261820, Func Offset: 0x170
	// Line 474, Address: 0x26182c, Func Offset: 0x17c
	// Line 475, Address: 0x261838, Func Offset: 0x188
	// Line 476, Address: 0x261894, Func Offset: 0x1e4
	// Line 477, Address: 0x2618f8, Func Offset: 0x248
	// Line 479, Address: 0x261910, Func Offset: 0x260
	// Line 481, Address: 0x261928, Func Offset: 0x278
	// Line 489, Address: 0x261930, Func Offset: 0x280
	// Line 490, Address: 0x26194c, Func Offset: 0x29c
	// Line 492, Address: 0x261950, Func Offset: 0x2a0
	// Line 505, Address: 0x26195c, Func Offset: 0x2ac
	// Line 507, Address: 0x2619a8, Func Offset: 0x2f8
	// Line 508, Address: 0x261a08, Func Offset: 0x358
	// Line 509, Address: 0x261a24, Func Offset: 0x374
	// Line 510, Address: 0x261a44, Func Offset: 0x394
	// Line 519, Address: 0x261a58, Func Offset: 0x3a8
	// Line 521, Address: 0x261a80, Func Offset: 0x3d0
	// Line 522, Address: 0x261aa0, Func Offset: 0x3f0
	// Line 523, Address: 0x261aac, Func Offset: 0x3fc
	// Line 525, Address: 0x261ab8, Func Offset: 0x408
	// Line 526, Address: 0x261acc, Func Offset: 0x41c
	// Line 529, Address: 0x261ae0, Func Offset: 0x430
	// Line 530, Address: 0x261af4, Func Offset: 0x444
	// Line 532, Address: 0x261b08, Func Offset: 0x458
	// Line 533, Address: 0x261b18, Func Offset: 0x468
	// Line 534, Address: 0x261b28, Func Offset: 0x478
	// Line 535, Address: 0x261b30, Func Offset: 0x480
	// Line 537, Address: 0x261b34, Func Offset: 0x484
	// Line 539, Address: 0x261b48, Func Offset: 0x498
	// Line 545, Address: 0x261b60, Func Offset: 0x4b0
	// Line 548, Address: 0x261b68, Func Offset: 0x4b8
	// Line 550, Address: 0x261b88, Func Offset: 0x4d8
	// Line 552, Address: 0x261ba4, Func Offset: 0x4f4
	// Line 554, Address: 0x261bbc, Func Offset: 0x50c
	// Line 555, Address: 0x261bd4, Func Offset: 0x524
	// Line 556, Address: 0x261be8, Func Offset: 0x538
	// Line 558, Address: 0x261bf0, Func Offset: 0x540
	// Line 560, Address: 0x261c04, Func Offset: 0x554
	// Line 561, Address: 0x261c18, Func Offset: 0x568
	// Line 563, Address: 0x261c34, Func Offset: 0x584
	// Line 564, Address: 0x261c4c, Func Offset: 0x59c
	// Line 565, Address: 0x261c68, Func Offset: 0x5b8
	// Line 567, Address: 0x261c70, Func Offset: 0x5c0
	// Line 580, Address: 0x261c80, Func Offset: 0x5d0
	// Line 581, Address: 0x261c90, Func Offset: 0x5e0
	// Line 582, Address: 0x261c9c, Func Offset: 0x5ec
	// Line 583, Address: 0x261cac, Func Offset: 0x5fc
	// Line 584, Address: 0x261cb8, Func Offset: 0x608
	// Line 585, Address: 0x261cc8, Func Offset: 0x618
	// Line 586, Address: 0x261cd4, Func Offset: 0x624
	// Line 592, Address: 0x261cdc, Func Offset: 0x62c
	// Line 600, Address: 0x261ce8, Func Offset: 0x638
	// Line 603, Address: 0x261d08, Func Offset: 0x658
	// Line 605, Address: 0x261d24, Func Offset: 0x674
	// Line 607, Address: 0x261d3c, Func Offset: 0x68c
	// Line 608, Address: 0x261d54, Func Offset: 0x6a4
	// Line 609, Address: 0x261d68, Func Offset: 0x6b8
	// Line 611, Address: 0x261d70, Func Offset: 0x6c0
	// Line 613, Address: 0x261d84, Func Offset: 0x6d4
	// Line 614, Address: 0x261d98, Func Offset: 0x6e8
	// Line 616, Address: 0x261db4, Func Offset: 0x704
	// Line 617, Address: 0x261dcc, Func Offset: 0x71c
	// Line 618, Address: 0x261de8, Func Offset: 0x738
	// Line 620, Address: 0x261df0, Func Offset: 0x740
	// Line 626, Address: 0x261e00, Func Offset: 0x750
	// Line 627, Address: 0x261e08, Func Offset: 0x758
	// Line 630, Address: 0x261e10, Func Offset: 0x760
	// Line 631, Address: 0x261e20, Func Offset: 0x770
	// Line 632, Address: 0x261e2c, Func Offset: 0x77c
	// Line 633, Address: 0x261e3c, Func Offset: 0x78c
	// Line 634, Address: 0x261e48, Func Offset: 0x798
	// Line 635, Address: 0x261e58, Func Offset: 0x7a8
	// Line 636, Address: 0x261e64, Func Offset: 0x7b4
	// Line 637, Address: 0x261e74, Func Offset: 0x7c4
	// Line 638, Address: 0x261e80, Func Offset: 0x7d0
	// Line 639, Address: 0x261e98, Func Offset: 0x7e8
	// Line 642, Address: 0x261e9c, Func Offset: 0x7ec
	// Line 644, Address: 0x261eac, Func Offset: 0x7fc
	// Line 646, Address: 0x261ec4, Func Offset: 0x814
	// Line 648, Address: 0x261ecc, Func Offset: 0x81c
	// Line 649, Address: 0x261ed0, Func Offset: 0x820
	// Func End, Address: 0x261f10, Func Offset: 0x860
}

// 
// Start address: 0x261f10
unsigned int HH_Class_Prefix_Water_12()
{
	unsigned long tex0;
	_anon0* pPk;
	unsigned int result;
	// Line 669, Address: 0x261f10, Func Offset: 0
	// Line 671, Address: 0x261f1c, Func Offset: 0xc
	// Line 674, Address: 0x261f28, Func Offset: 0x18
	// Line 677, Address: 0x261f30, Func Offset: 0x20
	// Line 678, Address: 0x261f40, Func Offset: 0x30
	// Line 680, Address: 0x261f54, Func Offset: 0x44
	// Line 681, Address: 0x261f78, Func Offset: 0x68
	// Line 682, Address: 0x261f90, Func Offset: 0x80
	// Line 684, Address: 0x261fac, Func Offset: 0x9c
	// Line 686, Address: 0x261fb4, Func Offset: 0xa4
	// Line 687, Address: 0x261fb8, Func Offset: 0xa8
	// Func End, Address: 0x261fcc, Func Offset: 0xbc
}

// 
// Start address: 0x261fd0
unsigned int HH_Class_Suffix_Water_12()
{
	_anon0* pPk;
	unsigned int result;
	// Line 700, Address: 0x261fd0, Func Offset: 0
	// Line 702, Address: 0x261fdc, Func Offset: 0xc
	// Line 704, Address: 0x261fe8, Func Offset: 0x18
	// Line 705, Address: 0x261ff0, Func Offset: 0x20
	// Line 706, Address: 0x262004, Func Offset: 0x34
	// Line 707, Address: 0x262028, Func Offset: 0x58
	// Line 709, Address: 0x262030, Func Offset: 0x60
	// Line 710, Address: 0x262034, Func Offset: 0x64
	// Func End, Address: 0x262048, Func Offset: 0x78
}

// 
// Start address: 0x262050
unsigned int HH_Class_Water_12(void* pBlock, ImpactQueue_Element* pElement)
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
	HH_Object_Water_12* pThis;
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
	// Line 724, Address: 0x262050, Func Offset: 0
	// Line 731, Address: 0x26207c, Func Offset: 0x2c
	// Line 732, Address: 0x262080, Func Offset: 0x30
	// Line 734, Address: 0x262084, Func Offset: 0x34
	// Line 737, Address: 0x2620ac, Func Offset: 0x5c
	// Line 739, Address: 0x2620b4, Func Offset: 0x64
	// Line 740, Address: 0x2620bc, Func Offset: 0x6c
	// Line 744, Address: 0x2620c4, Func Offset: 0x74
	// Line 752, Address: 0x2620cc, Func Offset: 0x7c
	// Line 753, Address: 0x2620e4, Func Offset: 0x94
	// Line 755, Address: 0x2621a4, Func Offset: 0x154
	// Line 756, Address: 0x2621e8, Func Offset: 0x198
	// Line 761, Address: 0x26222c, Func Offset: 0x1dc
	// Line 763, Address: 0x262248, Func Offset: 0x1f8
	// Line 764, Address: 0x262258, Func Offset: 0x208
	// Line 765, Address: 0x262264, Func Offset: 0x214
	// Line 766, Address: 0x262280, Func Offset: 0x230
	// Line 768, Address: 0x262288, Func Offset: 0x238
	// Line 773, Address: 0x26228c, Func Offset: 0x23c
	// Line 774, Address: 0x262298, Func Offset: 0x248
	// Line 776, Address: 0x2622b4, Func Offset: 0x264
	// Line 785, Address: 0x2622c0, Func Offset: 0x270
	// Line 786, Address: 0x2622ec, Func Offset: 0x29c
	// Line 787, Address: 0x2622f4, Func Offset: 0x2a4
	// Line 788, Address: 0x2622f8, Func Offset: 0x2a8
	// Line 789, Address: 0x262300, Func Offset: 0x2b0
	// Line 791, Address: 0x262308, Func Offset: 0x2b8
	// Line 792, Address: 0x262314, Func Offset: 0x2c4
	// Line 793, Address: 0x262320, Func Offset: 0x2d0
	// Line 794, Address: 0x26232c, Func Offset: 0x2dc
	// Line 795, Address: 0x262348, Func Offset: 0x2f8
	// Line 796, Address: 0x262354, Func Offset: 0x304
	// Line 798, Address: 0x262358, Func Offset: 0x308
	// Line 800, Address: 0x26236c, Func Offset: 0x31c
	// Line 809, Address: 0x262370, Func Offset: 0x320
	// Line 810, Address: 0x26237c, Func Offset: 0x32c
	// Line 813, Address: 0x262390, Func Offset: 0x340
	// Line 819, Address: 0x2623b8, Func Offset: 0x368
	// Line 821, Address: 0x2623d0, Func Offset: 0x380
	// Line 822, Address: 0x2623ec, Func Offset: 0x39c
	// Line 824, Address: 0x262408, Func Offset: 0x3b8
	// Line 825, Address: 0x26242c, Func Offset: 0x3dc
	// Line 826, Address: 0x262450, Func Offset: 0x400
	// Line 827, Address: 0x262454, Func Offset: 0x404
	// Line 829, Address: 0x26245c, Func Offset: 0x40c
	// Line 831, Address: 0x262464, Func Offset: 0x414
	// Line 833, Address: 0x26246c, Func Offset: 0x41c
	// Line 834, Address: 0x262490, Func Offset: 0x440
	// Line 835, Address: 0x262494, Func Offset: 0x444
	// Line 837, Address: 0x26249c, Func Offset: 0x44c
	// Line 839, Address: 0x2624a4, Func Offset: 0x454
	// Line 841, Address: 0x2624a8, Func Offset: 0x458
	// Line 842, Address: 0x2624b0, Func Offset: 0x460
	// Line 843, Address: 0x2624b4, Func Offset: 0x464
	// Line 844, Address: 0x2624b8, Func Offset: 0x468
	// Line 846, Address: 0x2624bc, Func Offset: 0x46c
	// Line 847, Address: 0x2624c8, Func Offset: 0x478
	// Line 848, Address: 0x2624d4, Func Offset: 0x484
	// Line 849, Address: 0x2624e0, Func Offset: 0x490
	// Line 850, Address: 0x2624fc, Func Offset: 0x4ac
	// Line 851, Address: 0x262508, Func Offset: 0x4b8
	// Line 853, Address: 0x26250c, Func Offset: 0x4bc
	// Line 854, Address: 0x262520, Func Offset: 0x4d0
	// Line 856, Address: 0x262528, Func Offset: 0x4d8
	// Line 860, Address: 0x262538, Func Offset: 0x4e8
	// Line 864, Address: 0x262540, Func Offset: 0x4f0
	// Line 865, Address: 0x26254c, Func Offset: 0x4fc
	// Line 866, Address: 0x262560, Func Offset: 0x510
	// Line 868, Address: 0x262578, Func Offset: 0x528
	// Line 869, Address: 0x26258c, Func Offset: 0x53c
	// Line 870, Address: 0x262590, Func Offset: 0x540
	// Line 872, Address: 0x2625a0, Func Offset: 0x550
	// Line 873, Address: 0x2625ac, Func Offset: 0x55c
	// Line 874, Address: 0x2625c0, Func Offset: 0x570
	// Line 876, Address: 0x2625d8, Func Offset: 0x588
	// Line 878, Address: 0x2625f0, Func Offset: 0x5a0
	// Line 879, Address: 0x262600, Func Offset: 0x5b0
	// Line 881, Address: 0x262610, Func Offset: 0x5c0
	// Line 889, Address: 0x262618, Func Offset: 0x5c8
	// Line 891, Address: 0x262638, Func Offset: 0x5e8
	// Line 892, Address: 0x262660, Func Offset: 0x610
	// Line 893, Address: 0x262678, Func Offset: 0x628
	// Line 894, Address: 0x2626a0, Func Offset: 0x650
	// Line 895, Address: 0x2626b8, Func Offset: 0x668
	// Line 896, Address: 0x2626e0, Func Offset: 0x690
	// Line 897, Address: 0x2626f8, Func Offset: 0x6a8
	// Line 898, Address: 0x262718, Func Offset: 0x6c8
	// Line 900, Address: 0x262730, Func Offset: 0x6e0
	// Line 902, Address: 0x26274c, Func Offset: 0x6fc
	// Line 905, Address: 0x262754, Func Offset: 0x704
	// Line 906, Address: 0x262770, Func Offset: 0x720
	// Line 908, Address: 0x262788, Func Offset: 0x738
	// Line 909, Address: 0x2627a4, Func Offset: 0x754
	// Line 911, Address: 0x2627bc, Func Offset: 0x76c
	// Line 912, Address: 0x2627d8, Func Offset: 0x788
	// Line 914, Address: 0x2627f0, Func Offset: 0x7a0
	// Line 915, Address: 0x26280c, Func Offset: 0x7bc
	// Line 917, Address: 0x262824, Func Offset: 0x7d4
	// Line 918, Address: 0x262840, Func Offset: 0x7f0
	// Line 920, Address: 0x262858, Func Offset: 0x808
	// Line 921, Address: 0x262874, Func Offset: 0x824
	// Line 926, Address: 0x26288c, Func Offset: 0x83c
	// Line 927, Address: 0x2628a8, Func Offset: 0x858
	// Line 930, Address: 0x2628b0, Func Offset: 0x860
	// Line 931, Address: 0x2628b4, Func Offset: 0x864
	// Line 934, Address: 0x2628b8, Func Offset: 0x868
	// Line 935, Address: 0x2628bc, Func Offset: 0x86c
	// Func End, Address: 0x2628ec, Func Offset: 0x89c
}

