typedef struct HH_Object_Water_07;
typedef struct ImpactQueue_Element;
typedef struct WaveArea_Infomeation;
typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_ElementOption;
typedef struct Wave_Element;
typedef struct _anon0;
typedef struct WaveArea_GridLink_Infomeation;


typedef Wave_Element type_0[40];
typedef float type_1[400];
typedef float type_2[192];
typedef unsigned int type_3[3];
typedef float type_4[84];
typedef float type_5[224];
typedef float type_6[84];
typedef float type_7[266];
typedef float type_8[120];
typedef float* type_9[7];
typedef float type_10[7];
typedef unsigned int type_11[3];
typedef unsigned int type_12[7];
typedef unsigned int type_13[2];
typedef WaveArea_GridLink_Infomeation type_14[1];
typedef WaveArea_GridLink_Infomeation type_15[1];
typedef float type_16[4][2];
typedef float type_17[2];
typedef int type_18[2];
typedef unsigned int type_19[6];
typedef int type_20[4];
typedef unsigned long type_21[2];
typedef float type_22[4];
typedef unsigned int type_23[1];
typedef float type_24[4];
typedef float type_25[4][4];
typedef unsigned int type_26[2];
typedef unsigned long type_27[2];
typedef WaveArea_GridLink_Infomeation type_28[1];
typedef unsigned int type_29[2];
typedef unsigned int type_30[2][4];
typedef unsigned int type_31[4];
typedef unsigned int type_32[2];
typedef WaveArea_GridLink_Infomeation type_33[1];
typedef WaveArea_GridLink_Infomeation type_34[1];
typedef float* type_35[2];
typedef unsigned int type_36[3];
typedef unsigned int type_37[2];
typedef unsigned int type_38[2];
typedef unsigned int type_39[2];
typedef unsigned int type_40[2];
typedef WaveArea_Infomeation type_41[7];
typedef WaveArea_GridLink_Infomeation type_42[1];

struct HH_Object_Water_07
{
	Object_DataBlock_Header Header;
	unsigned char Step;
	unsigned char Motion_Step;
	float Timer;
	float ST_Defference[4];
	Wave_Element Wave_Info[40];
	float Area00_Grid_Y_Value[400];
	float Area01_Grid_Y_Value[192];
	float Area02_Grid_Y_Value[84];
	float Area03_Grid_Y_Value[224];
	float Area04_Grid_Y_Value[84];
	float Area05_Grid_Y_Value[266];
	float Area06_Grid_Y_Value[120];
	float* pArea_Grid_Y_Value_Table[7];
	float Area_WavePostTime[7];
	unsigned int Area_Enable_Table[7];
};

struct ImpactQueue_Element
{
	unsigned int Class_Descriptor;
	unsigned int hInstance;
	unsigned int* pResultHandle_Address;
	unsigned int Reserved[1];
	ImpactQueue_ElementOption Option;
};

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

struct WaveArea_GridLink_Infomeation
{
	float* pGrid_Y_Value_Link[2];
	unsigned int Vertical_Horizontal_Flag;
	unsigned int Length;
	unsigned int X_Index_Max[2];
	unsigned int X_Index_Start[2];
	unsigned int Z_Index_Start[2];
};

unsigned int _area00_view_list[2];
unsigned int _area01_view_list[4];
unsigned int _area02_view_list[3];
unsigned int _area03_view_list[6];
unsigned int _area04_view_list[3];
unsigned int _area05_view_list[3];
unsigned int _area06_view_list[2];
WaveArea_Infomeation _Area_Info_List[7];
WaveArea_GridLink_Infomeation _area00_01_grid_link_list[1];
WaveArea_GridLink_Infomeation _area01_02_grid_link_list[1];
WaveArea_GridLink_Infomeation _area02_03_grid_link_list[1];
WaveArea_GridLink_Infomeation _area03_04_grid_link_list[1];
WaveArea_GridLink_Infomeation _area04_05_grid_link_list[1];
WaveArea_GridLink_Infomeation _area03_06_grid_link_list[1];

void Grid_Work_Initialize(HH_Object_Water_07* pThis);
unsigned int Object_Initialize(HH_Object_Water_07* pThis);
void CurrentPosition_AreaIndex_Calculator(ImpactQueue_Element* pElement, WaveArea_Infomeation* pInfo, unsigned int* pX_Index, unsigned int* pZ_Index);
float Specular_Calculator(float* View_Direction, float* Light_Direction, float* Normal_Vector);
void SpecularRGBA_Calculator(int* iRGBA, float* RGBA_Base, float* RGBA_Specular_Base, float Specular_Ratio);
unsigned int Object_Draw(HH_Object_Water_07* pThis, float* pGrid_Y_Value, float* WorldLocation, unsigned int Grid_X_Max, unsigned int Grid_Z_Max);
unsigned int HH_Class_Prefix_Water_07();
unsigned int HH_Class_Suffix_Water_07();
unsigned int HH_Class_Water_07(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x279550
void Grid_Work_Initialize(HH_Object_Water_07* pThis)
{
	// Line 300, Address: 0x279550, Func Offset: 0
	// Line 302, Address: 0x279560, Func Offset: 0x10
	// Line 303, Address: 0x279574, Func Offset: 0x24
	// Line 304, Address: 0x279588, Func Offset: 0x38
	// Line 305, Address: 0x27959c, Func Offset: 0x4c
	// Line 306, Address: 0x2795b0, Func Offset: 0x60
	// Line 307, Address: 0x2795c4, Func Offset: 0x74
	// Line 308, Address: 0x2795d8, Func Offset: 0x88
	// Line 309, Address: 0x2795ec, Func Offset: 0x9c
	// Func End, Address: 0x279600, Func Offset: 0xb0
}

// 
// Start address: 0x279600
unsigned int Object_Initialize(HH_Object_Water_07* pThis)
{
	unsigned int i;
	unsigned int result;
	// Line 322, Address: 0x279600, Func Offset: 0
	// Line 331, Address: 0x279610, Func Offset: 0x10
	// Line 333, Address: 0x279614, Func Offset: 0x14
	// Line 335, Address: 0x279618, Func Offset: 0x18
	// Line 337, Address: 0x279638, Func Offset: 0x38
	// Line 338, Address: 0x279640, Func Offset: 0x40
	// Line 339, Address: 0x279648, Func Offset: 0x48
	// Line 340, Address: 0x279650, Func Offset: 0x50
	// Line 341, Address: 0x279658, Func Offset: 0x58
	// Line 342, Address: 0x279660, Func Offset: 0x60
	// Line 343, Address: 0x279668, Func Offset: 0x68
	// Line 345, Address: 0x279670, Func Offset: 0x70
	// Line 346, Address: 0x27967c, Func Offset: 0x7c
	// Line 347, Address: 0x279688, Func Offset: 0x88
	// Line 348, Address: 0x2796a8, Func Offset: 0xa8
	// Line 350, Address: 0x2796bc, Func Offset: 0xbc
	// Line 351, Address: 0x2796c8, Func Offset: 0xc8
	// Line 353, Address: 0x2796dc, Func Offset: 0xdc
	// Line 355, Address: 0x2796f0, Func Offset: 0xf0
	// Line 357, Address: 0x279704, Func Offset: 0x104
	// Line 359, Address: 0x279718, Func Offset: 0x118
	// Line 361, Address: 0x279724, Func Offset: 0x124
	// Line 362, Address: 0x27972c, Func Offset: 0x12c
	// Line 413, Address: 0x279738, Func Offset: 0x138
	// Line 414, Address: 0x27973c, Func Offset: 0x13c
	// Func End, Address: 0x279750, Func Offset: 0x150
}

// 
// Start address: 0x279750
void CurrentPosition_AreaIndex_Calculator(ImpactQueue_Element* pElement, WaveArea_Infomeation* pInfo, unsigned int* pX_Index, unsigned int* pZ_Index)
{
	float check_pos[4];
	// Line 419, Address: 0x279750, Func Offset: 0
	// Line 422, Address: 0x279770, Func Offset: 0x20
	// Line 423, Address: 0x279784, Func Offset: 0x34
	// Line 424, Address: 0x2797ac, Func Offset: 0x5c
	// Line 425, Address: 0x2797d4, Func Offset: 0x84
	// Func End, Address: 0x2797ec, Func Offset: 0x9c
}

// 
// Start address: 0x2797f0
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
	// Line 438, Address: 0x2797f0, Func Offset: 0
	// Line 451, Address: 0x279810, Func Offset: 0x20
	// Line 452, Address: 0x279820, Func Offset: 0x30
	// Line 453, Address: 0x279838, Func Offset: 0x48
	// Line 455, Address: 0x27983c, Func Offset: 0x4c
	// Line 456, Address: 0x27985c, Func Offset: 0x6c
	// Line 457, Address: 0x279870, Func Offset: 0x80
	// Line 459, Address: 0x279880, Func Offset: 0x90
	// Line 460, Address: 0x279890, Func Offset: 0xa0
	// Line 461, Address: 0x2798a8, Func Offset: 0xb8
	// Line 482, Address: 0x2798ac, Func Offset: 0xbc
	// Line 485, Address: 0x279910, Func Offset: 0x120
	// Func End, Address: 0x27992c, Func Offset: 0x13c
}

// 
// Start address: 0x279930
void SpecularRGBA_Calculator(int* iRGBA, float* RGBA_Base, float* RGBA_Specular_Base, float Specular_Ratio)
{
	// Line 499, Address: 0x279930, Func Offset: 0
	// Line 502, Address: 0x279938, Func Offset: 0x8
	// Line 503, Address: 0x27993c, Func Offset: 0xc
	// Line 504, Address: 0x279940, Func Offset: 0x10
	// Line 505, Address: 0x279944, Func Offset: 0x14
	// Line 506, Address: 0x279948, Func Offset: 0x18
	// Line 507, Address: 0x27994c, Func Offset: 0x1c
	// Line 508, Address: 0x279950, Func Offset: 0x20
	// Line 509, Address: 0x279954, Func Offset: 0x24
	// Line 510, Address: 0x279958, Func Offset: 0x28
	// Line 511, Address: 0x27995c, Func Offset: 0x2c
	// Line 512, Address: 0x279960, Func Offset: 0x30
	// Line 513, Address: 0x279964, Func Offset: 0x34
	// Line 517, Address: 0x279968, Func Offset: 0x38
	// Func End, Address: 0x279970, Func Offset: 0x40
}

// 
// Start address: 0x279970
unsigned int Object_Draw(HH_Object_Water_07* pThis, float* pGrid_Y_Value, float* WorldLocation, unsigned int Grid_X_Max, unsigned int Grid_Z_Max)
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
	unsigned int z_index;
	unsigned int x_index;
	unsigned int z_grid_max;
	unsigned int x_grid_max;
	unsigned int vertex_num;
	_anon0* pPk;
	unsigned int result;
	unsigned long _GifTag[2];
	float SpecularRgba[4];
	float _c_max;
	float Ambient_Color2[4];
	float _a_max;
	float sx;
	float ty;
	unsigned long _GifTag_Tri[2];
	float light_alpha;
	float amb_alpha;
	float Amb_Base[4];
	float Light_Base[4];
	// Line 530, Address: 0x279970, Func Offset: 0
	// Line 561, Address: 0x2799bc, Func Offset: 0x4c
	// Line 564, Address: 0x2799c8, Func Offset: 0x58
	// Line 580, Address: 0x2799d0, Func Offset: 0x60
	// Line 586, Address: 0x2799d4, Func Offset: 0x64
	// Line 587, Address: 0x2799e0, Func Offset: 0x70
	// Line 588, Address: 0x2799ec, Func Offset: 0x7c
	// Line 589, Address: 0x279a04, Func Offset: 0x94
	// Line 590, Address: 0x279a1c, Func Offset: 0xac
	// Line 592, Address: 0x279a34, Func Offset: 0xc4
	// Line 593, Address: 0x279a40, Func Offset: 0xd0
	// Line 595, Address: 0x279a4c, Func Offset: 0xdc
	// Line 596, Address: 0x279a50, Func Offset: 0xe0
	// Line 598, Address: 0x279a54, Func Offset: 0xe4
	// Line 601, Address: 0x279a64, Func Offset: 0xf4
	// Line 606, Address: 0x279a78, Func Offset: 0x108
	// Line 608, Address: 0x279a84, Func Offset: 0x114
	// Line 610, Address: 0x279a90, Func Offset: 0x120
	// Line 611, Address: 0x279aa4, Func Offset: 0x134
	// Line 614, Address: 0x279ab8, Func Offset: 0x148
	// Line 615, Address: 0x279ac4, Func Offset: 0x154
	// Line 619, Address: 0x279ad8, Func Offset: 0x168
	// Line 621, Address: 0x279ae0, Func Offset: 0x170
	// Line 624, Address: 0x279aec, Func Offset: 0x17c
	// Line 625, Address: 0x279af8, Func Offset: 0x188
	// Line 626, Address: 0x279b54, Func Offset: 0x1e4
	// Line 627, Address: 0x279bb8, Func Offset: 0x248
	// Line 629, Address: 0x279bd0, Func Offset: 0x260
	// Line 631, Address: 0x279be8, Func Offset: 0x278
	// Line 639, Address: 0x279bf0, Func Offset: 0x280
	// Line 640, Address: 0x279c0c, Func Offset: 0x29c
	// Line 642, Address: 0x279c10, Func Offset: 0x2a0
	// Line 655, Address: 0x279c1c, Func Offset: 0x2ac
	// Line 657, Address: 0x279c68, Func Offset: 0x2f8
	// Line 658, Address: 0x279cc8, Func Offset: 0x358
	// Line 659, Address: 0x279ce4, Func Offset: 0x374
	// Line 660, Address: 0x279d04, Func Offset: 0x394
	// Line 665, Address: 0x279d18, Func Offset: 0x3a8
	// Line 667, Address: 0x279d40, Func Offset: 0x3d0
	// Line 668, Address: 0x279d60, Func Offset: 0x3f0
	// Line 669, Address: 0x279d6c, Func Offset: 0x3fc
	// Line 671, Address: 0x279d78, Func Offset: 0x408
	// Line 672, Address: 0x279d8c, Func Offset: 0x41c
	// Line 675, Address: 0x279da0, Func Offset: 0x430
	// Line 676, Address: 0x279db4, Func Offset: 0x444
	// Line 678, Address: 0x279dc8, Func Offset: 0x458
	// Line 679, Address: 0x279dd8, Func Offset: 0x468
	// Line 680, Address: 0x279de8, Func Offset: 0x478
	// Line 681, Address: 0x279df0, Func Offset: 0x480
	// Line 683, Address: 0x279df4, Func Offset: 0x484
	// Line 685, Address: 0x279e08, Func Offset: 0x498
	// Line 691, Address: 0x279e20, Func Offset: 0x4b0
	// Line 692, Address: 0x279e28, Func Offset: 0x4b8
	// Line 694, Address: 0x279e48, Func Offset: 0x4d8
	// Line 696, Address: 0x279e64, Func Offset: 0x4f4
	// Line 698, Address: 0x279e7c, Func Offset: 0x50c
	// Line 699, Address: 0x279e94, Func Offset: 0x524
	// Line 700, Address: 0x279ea8, Func Offset: 0x538
	// Line 702, Address: 0x279eb0, Func Offset: 0x540
	// Line 703, Address: 0x279ec4, Func Offset: 0x554
	// Line 704, Address: 0x279ed8, Func Offset: 0x568
	// Line 706, Address: 0x279ef4, Func Offset: 0x584
	// Line 707, Address: 0x279f0c, Func Offset: 0x59c
	// Line 708, Address: 0x279f28, Func Offset: 0x5b8
	// Line 710, Address: 0x279f30, Func Offset: 0x5c0
	// Line 715, Address: 0x279f40, Func Offset: 0x5d0
	// Line 716, Address: 0x279f50, Func Offset: 0x5e0
	// Line 717, Address: 0x279f5c, Func Offset: 0x5ec
	// Line 718, Address: 0x279f6c, Func Offset: 0x5fc
	// Line 719, Address: 0x279f78, Func Offset: 0x608
	// Line 720, Address: 0x279f88, Func Offset: 0x618
	// Line 721, Address: 0x279f94, Func Offset: 0x624
	// Line 727, Address: 0x279f9c, Func Offset: 0x62c
	// Line 734, Address: 0x279fa8, Func Offset: 0x638
	// Line 737, Address: 0x279fc8, Func Offset: 0x658
	// Line 739, Address: 0x279fe4, Func Offset: 0x674
	// Line 741, Address: 0x279ffc, Func Offset: 0x68c
	// Line 742, Address: 0x27a014, Func Offset: 0x6a4
	// Line 743, Address: 0x27a028, Func Offset: 0x6b8
	// Line 745, Address: 0x27a030, Func Offset: 0x6c0
	// Line 746, Address: 0x27a044, Func Offset: 0x6d4
	// Line 747, Address: 0x27a058, Func Offset: 0x6e8
	// Line 749, Address: 0x27a074, Func Offset: 0x704
	// Line 750, Address: 0x27a08c, Func Offset: 0x71c
	// Line 751, Address: 0x27a0a8, Func Offset: 0x738
	// Line 753, Address: 0x27a0b0, Func Offset: 0x740
	// Line 759, Address: 0x27a0c0, Func Offset: 0x750
	// Line 760, Address: 0x27a0c8, Func Offset: 0x758
	// Line 763, Address: 0x27a0d0, Func Offset: 0x760
	// Line 764, Address: 0x27a0e0, Func Offset: 0x770
	// Line 765, Address: 0x27a0ec, Func Offset: 0x77c
	// Line 766, Address: 0x27a0fc, Func Offset: 0x78c
	// Line 767, Address: 0x27a108, Func Offset: 0x798
	// Line 768, Address: 0x27a118, Func Offset: 0x7a8
	// Line 769, Address: 0x27a124, Func Offset: 0x7b4
	// Line 770, Address: 0x27a134, Func Offset: 0x7c4
	// Line 771, Address: 0x27a140, Func Offset: 0x7d0
	// Line 772, Address: 0x27a158, Func Offset: 0x7e8
	// Line 775, Address: 0x27a15c, Func Offset: 0x7ec
	// Line 777, Address: 0x27a16c, Func Offset: 0x7fc
	// Line 779, Address: 0x27a184, Func Offset: 0x814
	// Line 781, Address: 0x27a18c, Func Offset: 0x81c
	// Line 782, Address: 0x27a190, Func Offset: 0x820
	// Func End, Address: 0x27a1d0, Func Offset: 0x860
}

// 
// Start address: 0x27a1d0
unsigned int HH_Class_Prefix_Water_07()
{
	unsigned long tex0;
	_anon0* pPk;
	unsigned int result;
	// Line 802, Address: 0x27a1d0, Func Offset: 0
	// Line 804, Address: 0x27a1dc, Func Offset: 0xc
	// Line 807, Address: 0x27a1e8, Func Offset: 0x18
	// Line 810, Address: 0x27a1f0, Func Offset: 0x20
	// Line 811, Address: 0x27a200, Func Offset: 0x30
	// Line 813, Address: 0x27a214, Func Offset: 0x44
	// Line 814, Address: 0x27a238, Func Offset: 0x68
	// Line 816, Address: 0x27a254, Func Offset: 0x84
	// Line 818, Address: 0x27a25c, Func Offset: 0x8c
	// Line 819, Address: 0x27a260, Func Offset: 0x90
	// Func End, Address: 0x27a274, Func Offset: 0xa4
}

// 
// Start address: 0x27a280
unsigned int HH_Class_Suffix_Water_07()
{
	_anon0* pPk;
	unsigned int result;
	// Line 832, Address: 0x27a280, Func Offset: 0
	// Line 834, Address: 0x27a28c, Func Offset: 0xc
	// Line 836, Address: 0x27a298, Func Offset: 0x18
	// Line 837, Address: 0x27a2a0, Func Offset: 0x20
	// Line 838, Address: 0x27a2b4, Func Offset: 0x34
	// Line 840, Address: 0x27a2bc, Func Offset: 0x3c
	// Line 841, Address: 0x27a2c0, Func Offset: 0x40
	// Func End, Address: 0x27a2d4, Func Offset: 0x54
}

// 
// Start address: 0x27a2e0
unsigned int HH_Class_Water_07(void* pBlock, ImpactQueue_Element* pElement)
{
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
	float pos[4];
	float rad;
	float rad_omega;
	HH_Object_Water_07* pThis;
	unsigned int result;
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
	// Line 855, Address: 0x27a2e0, Func Offset: 0
	// Line 862, Address: 0x27a30c, Func Offset: 0x2c
	// Line 863, Address: 0x27a310, Func Offset: 0x30
	// Line 865, Address: 0x27a314, Func Offset: 0x34
	// Line 868, Address: 0x27a33c, Func Offset: 0x5c
	// Line 870, Address: 0x27a344, Func Offset: 0x64
	// Line 871, Address: 0x27a34c, Func Offset: 0x6c
	// Line 875, Address: 0x27a354, Func Offset: 0x74
	// Line 883, Address: 0x27a35c, Func Offset: 0x7c
	// Line 884, Address: 0x27a374, Func Offset: 0x94
	// Line 886, Address: 0x27a434, Func Offset: 0x154
	// Line 887, Address: 0x27a478, Func Offset: 0x198
	// Line 895, Address: 0x27a4bc, Func Offset: 0x1dc
	// Line 896, Address: 0x27a4c8, Func Offset: 0x1e8
	// Line 898, Address: 0x27a4e4, Func Offset: 0x204
	// Line 899, Address: 0x27a4f4, Func Offset: 0x214
	// Line 900, Address: 0x27a500, Func Offset: 0x220
	// Line 913, Address: 0x27a51c, Func Offset: 0x23c
	// Line 914, Address: 0x27a528, Func Offset: 0x248
	// Line 916, Address: 0x27a544, Func Offset: 0x264
	// Line 925, Address: 0x27a550, Func Offset: 0x270
	// Line 926, Address: 0x27a57c, Func Offset: 0x29c
	// Line 927, Address: 0x27a584, Func Offset: 0x2a4
	// Line 928, Address: 0x27a588, Func Offset: 0x2a8
	// Line 929, Address: 0x27a590, Func Offset: 0x2b0
	// Line 931, Address: 0x27a598, Func Offset: 0x2b8
	// Line 932, Address: 0x27a5a4, Func Offset: 0x2c4
	// Line 933, Address: 0x27a5b0, Func Offset: 0x2d0
	// Line 934, Address: 0x27a5bc, Func Offset: 0x2dc
	// Line 935, Address: 0x27a5d8, Func Offset: 0x2f8
	// Line 936, Address: 0x27a5e4, Func Offset: 0x304
	// Line 938, Address: 0x27a5e8, Func Offset: 0x308
	// Line 940, Address: 0x27a5fc, Func Offset: 0x31c
	// Line 949, Address: 0x27a600, Func Offset: 0x320
	// Line 950, Address: 0x27a60c, Func Offset: 0x32c
	// Line 953, Address: 0x27a620, Func Offset: 0x340
	// Line 959, Address: 0x27a648, Func Offset: 0x368
	// Line 961, Address: 0x27a660, Func Offset: 0x380
	// Line 962, Address: 0x27a67c, Func Offset: 0x39c
	// Line 964, Address: 0x27a698, Func Offset: 0x3b8
	// Line 965, Address: 0x27a6bc, Func Offset: 0x3dc
	// Line 966, Address: 0x27a6e0, Func Offset: 0x400
	// Line 967, Address: 0x27a6e4, Func Offset: 0x404
	// Line 969, Address: 0x27a6ec, Func Offset: 0x40c
	// Line 971, Address: 0x27a6f4, Func Offset: 0x414
	// Line 973, Address: 0x27a6fc, Func Offset: 0x41c
	// Line 974, Address: 0x27a720, Func Offset: 0x440
	// Line 975, Address: 0x27a724, Func Offset: 0x444
	// Line 977, Address: 0x27a72c, Func Offset: 0x44c
	// Line 979, Address: 0x27a734, Func Offset: 0x454
	// Line 981, Address: 0x27a738, Func Offset: 0x458
	// Line 982, Address: 0x27a740, Func Offset: 0x460
	// Line 983, Address: 0x27a744, Func Offset: 0x464
	// Line 984, Address: 0x27a748, Func Offset: 0x468
	// Line 986, Address: 0x27a74c, Func Offset: 0x46c
	// Line 987, Address: 0x27a758, Func Offset: 0x478
	// Line 988, Address: 0x27a764, Func Offset: 0x484
	// Line 989, Address: 0x27a770, Func Offset: 0x490
	// Line 990, Address: 0x27a78c, Func Offset: 0x4ac
	// Line 991, Address: 0x27a798, Func Offset: 0x4b8
	// Line 993, Address: 0x27a79c, Func Offset: 0x4bc
	// Line 994, Address: 0x27a7b0, Func Offset: 0x4d0
	// Line 996, Address: 0x27a7b8, Func Offset: 0x4d8
	// Line 1006, Address: 0x27a7cc, Func Offset: 0x4ec
	// Line 1007, Address: 0x27a7d8, Func Offset: 0x4f8
	// Line 1008, Address: 0x27a7ec, Func Offset: 0x50c
	// Line 1010, Address: 0x27a804, Func Offset: 0x524
	// Line 1012, Address: 0x27a818, Func Offset: 0x538
	// Line 1014, Address: 0x27a82c, Func Offset: 0x54c
	// Line 1015, Address: 0x27a83c, Func Offset: 0x55c
	// Line 1016, Address: 0x27a84c, Func Offset: 0x56c
	// Line 1017, Address: 0x27a85c, Func Offset: 0x57c
	// Line 1018, Address: 0x27a86c, Func Offset: 0x58c
	// Line 1019, Address: 0x27a87c, Func Offset: 0x59c
	// Line 1021, Address: 0x27a88c, Func Offset: 0x5ac
	// Line 1022, Address: 0x27a898, Func Offset: 0x5b8
	// Line 1023, Address: 0x27a8ac, Func Offset: 0x5cc
	// Line 1025, Address: 0x27a8c4, Func Offset: 0x5e4
	// Line 1026, Address: 0x27a8dc, Func Offset: 0x5fc
	// Line 1027, Address: 0x27a8e0, Func Offset: 0x600
	// Line 1028, Address: 0x27a8f4, Func Offset: 0x614
	// Line 1076, Address: 0x27a904, Func Offset: 0x624
	// Line 1077, Address: 0x27a920, Func Offset: 0x640
	// Line 1080, Address: 0x27a928, Func Offset: 0x648
	// Line 1081, Address: 0x27a92c, Func Offset: 0x64c
	// Line 1084, Address: 0x27a930, Func Offset: 0x650
	// Line 1085, Address: 0x27a934, Func Offset: 0x654
	// Func End, Address: 0x27a964, Func Offset: 0x684
}

