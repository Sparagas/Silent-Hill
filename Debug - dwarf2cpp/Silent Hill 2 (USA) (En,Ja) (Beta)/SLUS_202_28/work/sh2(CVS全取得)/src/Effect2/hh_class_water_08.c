typedef struct WaveArea_Infomeation;
typedef struct _anon0;
typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_ElementOption;
typedef struct ImpactQueue_Element;
typedef struct HH_Object_Water_08;
typedef struct Wave_Element;
typedef struct WaveArea_GridLink_Infomeation;


typedef Wave_Element type_0[20];
typedef float type_1[64];
typedef float type_2[144];
typedef unsigned int type_3[4];
typedef float type_4[252];
typedef float type_5[88];
typedef WaveArea_GridLink_Infomeation type_6[1];
typedef float type_7[144];
typedef unsigned long type_8[2];
typedef float type_9[222];
typedef float type_10[105];
typedef float* type_11[7];
typedef float type_12[7];
typedef unsigned int type_13[5];
typedef unsigned long type_14[2];
typedef unsigned int type_15[7];
typedef unsigned int type_16[3];
typedef WaveArea_GridLink_Infomeation type_17[1];
typedef WaveArea_GridLink_Infomeation type_18[1];
typedef float type_19[4][2];
typedef float type_20[2];
typedef int type_21[2];
typedef unsigned int type_22[2];
typedef int type_23[4];
typedef float type_24[4];
typedef unsigned int type_25[1];
typedef float type_26[4];
typedef float type_27[4][4];
typedef unsigned int type_28[2];
typedef WaveArea_GridLink_Infomeation type_29[1];
typedef unsigned int type_30[2];
typedef unsigned int type_31[2][4];
typedef unsigned int type_32[4];
typedef unsigned int type_33[2];
typedef WaveArea_GridLink_Infomeation type_34[1];
typedef WaveArea_GridLink_Infomeation type_35[1];
typedef float* type_36[2];
typedef unsigned int type_37[3];
typedef unsigned int type_38[2];
typedef unsigned int type_39[2];
typedef unsigned int type_40[2];
typedef unsigned int type_41[2];
typedef WaveArea_Infomeation type_42[7];
typedef WaveArea_GridLink_Infomeation type_43[1];

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

struct ImpactQueue_Element
{
	unsigned int Class_Descriptor;
	unsigned int hInstance;
	unsigned int* pResultHandle_Address;
	unsigned int Reserved[1];
	ImpactQueue_ElementOption Option;
};

struct HH_Object_Water_08
{
	Object_DataBlock_Header Header;
	unsigned char Step;
	unsigned char Motion_Step;
	float Timer;
	float ST_Defference[4];
	Wave_Element Wave_Info[20];
	float Area00_Grid_Y_Value[64];
	float Area01_Grid_Y_Value[144];
	float Area02_Grid_Y_Value[252];
	float Area03_Grid_Y_Value[88];
	float Area04_Grid_Y_Value[144];
	float Area05_Grid_Y_Value[222];
	float Area06_Grid_Y_Value[105];
	float* pArea_Grid_Y_Value_Table[7];
	float Area_WavePostTime[7];
	unsigned int Area_Enable_Table[7];
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

struct WaveArea_GridLink_Infomeation
{
	float* pGrid_Y_Value_Link[2];
	unsigned int Vertical_Horizontal_Flag;
	unsigned int Length;
	unsigned int X_Index_Max[2];
	unsigned int X_Index_Start[2];
	unsigned int Z_Index_Start[2];
};

unsigned int _area00_view_list[3];
unsigned int _area01_view_list[4];
unsigned int _area02_view_list[4];
unsigned int _area03_view_list[2];
unsigned int _area04_view_list[3];
unsigned int _area05_view_list[5];
unsigned int _area06_view_list[2];
WaveArea_Infomeation _Area_Info_List[7];
WaveArea_GridLink_Infomeation _area00_01_grid_link_list[1];
WaveArea_GridLink_Infomeation _area00_05_grid_link_list[1];
WaveArea_GridLink_Infomeation _area01_02_grid_link_list[1];
WaveArea_GridLink_Infomeation _area02_03_grid_link_list[1];
WaveArea_GridLink_Infomeation _area02_04_grid_link_list[1];
WaveArea_GridLink_Infomeation _area04_05_grid_link_list[1];
WaveArea_GridLink_Infomeation _area05_06_grid_link_list[1];

void Grid_Work_Initialize(HH_Object_Water_08* pThis);
unsigned int Object_Initialize(HH_Object_Water_08* pThis);
void CurrentPosition_AreaIndex_Calculator(ImpactQueue_Element* pElement, WaveArea_Infomeation* pInfo, unsigned int* pX_Index, unsigned int* pZ_Index);
float Specular_Calculator(float* View_Direction, float* Light_Direction, float* Normal_Vector);
void SpecularRGBA_Calculator(int* iRGBA, float* RGBA_Base, float* RGBA_Specular_Base, float Specular_Ratio);
unsigned int Object_Draw(HH_Object_Water_08* pThis, float* pGrid_Y_Value, float* WorldLocation, unsigned int Grid_X_Max, unsigned int Grid_Z_Max);
unsigned int HH_Class_Prefix_Water_08();
unsigned int HH_Class_Suffix_Water_08();
unsigned int HH_Class_Water_08(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x27a970
void Grid_Work_Initialize(HH_Object_Water_08* pThis)
{
	// Line 313, Address: 0x27a970, Func Offset: 0
	// Line 315, Address: 0x27a980, Func Offset: 0x10
	// Line 316, Address: 0x27a994, Func Offset: 0x24
	// Line 317, Address: 0x27a9a8, Func Offset: 0x38
	// Line 318, Address: 0x27a9bc, Func Offset: 0x4c
	// Line 319, Address: 0x27a9d0, Func Offset: 0x60
	// Line 320, Address: 0x27a9e4, Func Offset: 0x74
	// Line 321, Address: 0x27a9f8, Func Offset: 0x88
	// Line 322, Address: 0x27aa0c, Func Offset: 0x9c
	// Func End, Address: 0x27aa20, Func Offset: 0xb0
}

// 
// Start address: 0x27aa20
unsigned int Object_Initialize(HH_Object_Water_08* pThis)
{
	unsigned int i;
	unsigned int result;
	// Line 335, Address: 0x27aa20, Func Offset: 0
	// Line 344, Address: 0x27aa30, Func Offset: 0x10
	// Line 346, Address: 0x27aa34, Func Offset: 0x14
	// Line 348, Address: 0x27aa38, Func Offset: 0x18
	// Line 350, Address: 0x27aa58, Func Offset: 0x38
	// Line 351, Address: 0x27aa60, Func Offset: 0x40
	// Line 352, Address: 0x27aa68, Func Offset: 0x48
	// Line 353, Address: 0x27aa70, Func Offset: 0x50
	// Line 354, Address: 0x27aa78, Func Offset: 0x58
	// Line 355, Address: 0x27aa80, Func Offset: 0x60
	// Line 356, Address: 0x27aa88, Func Offset: 0x68
	// Line 358, Address: 0x27aa90, Func Offset: 0x70
	// Line 359, Address: 0x27aa9c, Func Offset: 0x7c
	// Line 360, Address: 0x27aaa8, Func Offset: 0x88
	// Line 361, Address: 0x27aac8, Func Offset: 0xa8
	// Line 363, Address: 0x27aadc, Func Offset: 0xbc
	// Line 364, Address: 0x27aae8, Func Offset: 0xc8
	// Line 365, Address: 0x27aaf4, Func Offset: 0xd4
	// Line 366, Address: 0x27aafc, Func Offset: 0xdc
	// Line 367, Address: 0x27ab08, Func Offset: 0xe8
	// Line 368, Address: 0x27ab10, Func Offset: 0xf0
	// Line 370, Address: 0x27ab24, Func Offset: 0x104
	// Line 371, Address: 0x27ab30, Func Offset: 0x110
	// Line 372, Address: 0x27ab38, Func Offset: 0x118
	// Line 374, Address: 0x27ab4c, Func Offset: 0x12c
	// Line 376, Address: 0x27ab5c, Func Offset: 0x13c
	// Line 427, Address: 0x27ab68, Func Offset: 0x148
	// Line 428, Address: 0x27ab6c, Func Offset: 0x14c
	// Func End, Address: 0x27ab80, Func Offset: 0x160
}

// 
// Start address: 0x27ab80
void CurrentPosition_AreaIndex_Calculator(ImpactQueue_Element* pElement, WaveArea_Infomeation* pInfo, unsigned int* pX_Index, unsigned int* pZ_Index)
{
	float check_pos[4];
	// Line 433, Address: 0x27ab80, Func Offset: 0
	// Line 436, Address: 0x27aba0, Func Offset: 0x20
	// Line 437, Address: 0x27abb4, Func Offset: 0x34
	// Line 438, Address: 0x27abdc, Func Offset: 0x5c
	// Line 439, Address: 0x27ac04, Func Offset: 0x84
	// Func End, Address: 0x27ac1c, Func Offset: 0x9c
}

// 
// Start address: 0x27ac20
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
	// Line 452, Address: 0x27ac20, Func Offset: 0
	// Line 465, Address: 0x27ac40, Func Offset: 0x20
	// Line 466, Address: 0x27ac50, Func Offset: 0x30
	// Line 467, Address: 0x27ac68, Func Offset: 0x48
	// Line 469, Address: 0x27ac6c, Func Offset: 0x4c
	// Line 470, Address: 0x27ac8c, Func Offset: 0x6c
	// Line 471, Address: 0x27aca0, Func Offset: 0x80
	// Line 473, Address: 0x27acb0, Func Offset: 0x90
	// Line 474, Address: 0x27acc0, Func Offset: 0xa0
	// Line 475, Address: 0x27acd8, Func Offset: 0xb8
	// Line 496, Address: 0x27acdc, Func Offset: 0xbc
	// Line 499, Address: 0x27ad2c, Func Offset: 0x10c
	// Func End, Address: 0x27ad48, Func Offset: 0x128
}

// 
// Start address: 0x27ad50
void SpecularRGBA_Calculator(int* iRGBA, float* RGBA_Base, float* RGBA_Specular_Base, float Specular_Ratio)
{
	// Line 513, Address: 0x27ad50, Func Offset: 0
	// Line 516, Address: 0x27ad58, Func Offset: 0x8
	// Line 517, Address: 0x27ad5c, Func Offset: 0xc
	// Line 518, Address: 0x27ad60, Func Offset: 0x10
	// Line 519, Address: 0x27ad64, Func Offset: 0x14
	// Line 520, Address: 0x27ad68, Func Offset: 0x18
	// Line 521, Address: 0x27ad6c, Func Offset: 0x1c
	// Line 522, Address: 0x27ad70, Func Offset: 0x20
	// Line 523, Address: 0x27ad74, Func Offset: 0x24
	// Line 524, Address: 0x27ad78, Func Offset: 0x28
	// Line 525, Address: 0x27ad7c, Func Offset: 0x2c
	// Line 526, Address: 0x27ad80, Func Offset: 0x30
	// Line 527, Address: 0x27ad84, Func Offset: 0x34
	// Line 531, Address: 0x27ad88, Func Offset: 0x38
	// Func End, Address: 0x27ad90, Func Offset: 0x40
}

// 
// Start address: 0x27ad90
unsigned int Object_Draw(HH_Object_Water_08* pThis, float* pGrid_Y_Value, float* WorldLocation, unsigned int Grid_X_Max, unsigned int Grid_Z_Max)
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
	float Ambient_Color2[4];
	float sx;
	float ty;
	unsigned long _GifTag_Tri[2];
	float light_alpha;
	float amb_alpha;
	float Amb_Base[4];
	float Light_Base[4];
	// Line 544, Address: 0x27ad90, Func Offset: 0
	// Line 575, Address: 0x27addc, Func Offset: 0x4c
	// Line 578, Address: 0x27ade8, Func Offset: 0x58
	// Line 594, Address: 0x27adf0, Func Offset: 0x60
	// Line 598, Address: 0x27adf4, Func Offset: 0x64
	// Line 599, Address: 0x27ae00, Func Offset: 0x70
	// Line 600, Address: 0x27ae0c, Func Offset: 0x7c
	// Line 601, Address: 0x27ae24, Func Offset: 0x94
	// Line 602, Address: 0x27ae3c, Func Offset: 0xac
	// Line 604, Address: 0x27ae54, Func Offset: 0xc4
	// Line 605, Address: 0x27ae60, Func Offset: 0xd0
	// Line 607, Address: 0x27ae6c, Func Offset: 0xdc
	// Line 608, Address: 0x27ae70, Func Offset: 0xe0
	// Line 610, Address: 0x27ae74, Func Offset: 0xe4
	// Line 613, Address: 0x27ae84, Func Offset: 0xf4
	// Line 618, Address: 0x27ae98, Func Offset: 0x108
	// Line 620, Address: 0x27aea4, Func Offset: 0x114
	// Line 622, Address: 0x27aeb0, Func Offset: 0x120
	// Line 623, Address: 0x27aec4, Func Offset: 0x134
	// Line 626, Address: 0x27aed8, Func Offset: 0x148
	// Line 627, Address: 0x27aee4, Func Offset: 0x154
	// Line 631, Address: 0x27aef8, Func Offset: 0x168
	// Line 633, Address: 0x27af00, Func Offset: 0x170
	// Line 636, Address: 0x27af0c, Func Offset: 0x17c
	// Line 637, Address: 0x27af18, Func Offset: 0x188
	// Line 638, Address: 0x27af74, Func Offset: 0x1e4
	// Line 639, Address: 0x27afd8, Func Offset: 0x248
	// Line 641, Address: 0x27aff0, Func Offset: 0x260
	// Line 643, Address: 0x27b008, Func Offset: 0x278
	// Line 651, Address: 0x27b010, Func Offset: 0x280
	// Line 652, Address: 0x27b02c, Func Offset: 0x29c
	// Line 654, Address: 0x27b030, Func Offset: 0x2a0
	// Line 667, Address: 0x27b03c, Func Offset: 0x2ac
	// Line 669, Address: 0x27b088, Func Offset: 0x2f8
	// Line 670, Address: 0x27b0e8, Func Offset: 0x358
	// Line 671, Address: 0x27b104, Func Offset: 0x374
	// Line 672, Address: 0x27b124, Func Offset: 0x394
	// Line 677, Address: 0x27b138, Func Offset: 0x3a8
	// Line 679, Address: 0x27b160, Func Offset: 0x3d0
	// Line 680, Address: 0x27b180, Func Offset: 0x3f0
	// Line 681, Address: 0x27b18c, Func Offset: 0x3fc
	// Line 683, Address: 0x27b198, Func Offset: 0x408
	// Line 684, Address: 0x27b1ac, Func Offset: 0x41c
	// Line 687, Address: 0x27b1c0, Func Offset: 0x430
	// Line 688, Address: 0x27b1d4, Func Offset: 0x444
	// Line 690, Address: 0x27b1e8, Func Offset: 0x458
	// Line 691, Address: 0x27b1f8, Func Offset: 0x468
	// Line 692, Address: 0x27b208, Func Offset: 0x478
	// Line 693, Address: 0x27b210, Func Offset: 0x480
	// Line 695, Address: 0x27b214, Func Offset: 0x484
	// Line 697, Address: 0x27b228, Func Offset: 0x498
	// Line 703, Address: 0x27b240, Func Offset: 0x4b0
	// Line 704, Address: 0x27b248, Func Offset: 0x4b8
	// Line 706, Address: 0x27b268, Func Offset: 0x4d8
	// Line 708, Address: 0x27b284, Func Offset: 0x4f4
	// Line 710, Address: 0x27b29c, Func Offset: 0x50c
	// Line 711, Address: 0x27b2b4, Func Offset: 0x524
	// Line 712, Address: 0x27b2c8, Func Offset: 0x538
	// Line 714, Address: 0x27b2d0, Func Offset: 0x540
	// Line 715, Address: 0x27b2e4, Func Offset: 0x554
	// Line 716, Address: 0x27b2f8, Func Offset: 0x568
	// Line 718, Address: 0x27b314, Func Offset: 0x584
	// Line 719, Address: 0x27b32c, Func Offset: 0x59c
	// Line 720, Address: 0x27b348, Func Offset: 0x5b8
	// Line 722, Address: 0x27b350, Func Offset: 0x5c0
	// Line 727, Address: 0x27b360, Func Offset: 0x5d0
	// Line 728, Address: 0x27b370, Func Offset: 0x5e0
	// Line 729, Address: 0x27b37c, Func Offset: 0x5ec
	// Line 730, Address: 0x27b38c, Func Offset: 0x5fc
	// Line 731, Address: 0x27b398, Func Offset: 0x608
	// Line 732, Address: 0x27b3a8, Func Offset: 0x618
	// Line 733, Address: 0x27b3b4, Func Offset: 0x624
	// Line 739, Address: 0x27b3bc, Func Offset: 0x62c
	// Line 746, Address: 0x27b3c8, Func Offset: 0x638
	// Line 749, Address: 0x27b3e8, Func Offset: 0x658
	// Line 751, Address: 0x27b404, Func Offset: 0x674
	// Line 753, Address: 0x27b41c, Func Offset: 0x68c
	// Line 754, Address: 0x27b434, Func Offset: 0x6a4
	// Line 755, Address: 0x27b448, Func Offset: 0x6b8
	// Line 757, Address: 0x27b450, Func Offset: 0x6c0
	// Line 758, Address: 0x27b464, Func Offset: 0x6d4
	// Line 759, Address: 0x27b478, Func Offset: 0x6e8
	// Line 761, Address: 0x27b494, Func Offset: 0x704
	// Line 762, Address: 0x27b4ac, Func Offset: 0x71c
	// Line 763, Address: 0x27b4c8, Func Offset: 0x738
	// Line 765, Address: 0x27b4d0, Func Offset: 0x740
	// Line 771, Address: 0x27b4e0, Func Offset: 0x750
	// Line 772, Address: 0x27b4e8, Func Offset: 0x758
	// Line 775, Address: 0x27b4f0, Func Offset: 0x760
	// Line 776, Address: 0x27b500, Func Offset: 0x770
	// Line 777, Address: 0x27b50c, Func Offset: 0x77c
	// Line 778, Address: 0x27b51c, Func Offset: 0x78c
	// Line 779, Address: 0x27b528, Func Offset: 0x798
	// Line 780, Address: 0x27b538, Func Offset: 0x7a8
	// Line 781, Address: 0x27b544, Func Offset: 0x7b4
	// Line 782, Address: 0x27b554, Func Offset: 0x7c4
	// Line 783, Address: 0x27b560, Func Offset: 0x7d0
	// Line 784, Address: 0x27b578, Func Offset: 0x7e8
	// Line 787, Address: 0x27b57c, Func Offset: 0x7ec
	// Line 789, Address: 0x27b58c, Func Offset: 0x7fc
	// Line 791, Address: 0x27b5a4, Func Offset: 0x814
	// Line 793, Address: 0x27b5ac, Func Offset: 0x81c
	// Line 794, Address: 0x27b5b0, Func Offset: 0x820
	// Func End, Address: 0x27b5f0, Func Offset: 0x860
}

// 
// Start address: 0x27b5f0
unsigned int HH_Class_Prefix_Water_08()
{
	unsigned long tex0;
	_anon0* pPk;
	unsigned int result;
	// Line 814, Address: 0x27b5f0, Func Offset: 0
	// Line 816, Address: 0x27b5fc, Func Offset: 0xc
	// Line 822, Address: 0x27b608, Func Offset: 0x18
	// Line 825, Address: 0x27b610, Func Offset: 0x20
	// Line 826, Address: 0x27b620, Func Offset: 0x30
	// Line 828, Address: 0x27b634, Func Offset: 0x44
	// Line 829, Address: 0x27b658, Func Offset: 0x68
	// Line 831, Address: 0x27b674, Func Offset: 0x84
	// Line 833, Address: 0x27b67c, Func Offset: 0x8c
	// Line 834, Address: 0x27b680, Func Offset: 0x90
	// Func End, Address: 0x27b694, Func Offset: 0xa4
}

// 
// Start address: 0x27b6a0
unsigned int HH_Class_Suffix_Water_08()
{
	_anon0* pPk;
	unsigned int result;
	// Line 847, Address: 0x27b6a0, Func Offset: 0
	// Line 849, Address: 0x27b6ac, Func Offset: 0xc
	// Line 851, Address: 0x27b6b8, Func Offset: 0x18
	// Line 852, Address: 0x27b6c0, Func Offset: 0x20
	// Line 853, Address: 0x27b6d4, Func Offset: 0x34
	// Line 855, Address: 0x27b6dc, Func Offset: 0x3c
	// Line 856, Address: 0x27b6e0, Func Offset: 0x40
	// Func End, Address: 0x27b6f4, Func Offset: 0x54
}

// 
// Start address: 0x27b700
unsigned int HH_Class_Water_08(void* pBlock, ImpactQueue_Element* pElement)
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
	HH_Object_Water_08* pThis;
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
	// Line 870, Address: 0x27b700, Func Offset: 0
	// Line 877, Address: 0x27b72c, Func Offset: 0x2c
	// Line 878, Address: 0x27b730, Func Offset: 0x30
	// Line 880, Address: 0x27b734, Func Offset: 0x34
	// Line 883, Address: 0x27b75c, Func Offset: 0x5c
	// Line 885, Address: 0x27b764, Func Offset: 0x64
	// Line 886, Address: 0x27b76c, Func Offset: 0x6c
	// Line 890, Address: 0x27b774, Func Offset: 0x74
	// Line 898, Address: 0x27b77c, Func Offset: 0x7c
	// Line 899, Address: 0x27b794, Func Offset: 0x94
	// Line 901, Address: 0x27b854, Func Offset: 0x154
	// Line 902, Address: 0x27b898, Func Offset: 0x198
	// Line 910, Address: 0x27b8dc, Func Offset: 0x1dc
	// Line 911, Address: 0x27b8e8, Func Offset: 0x1e8
	// Line 913, Address: 0x27b904, Func Offset: 0x204
	// Line 914, Address: 0x27b914, Func Offset: 0x214
	// Line 915, Address: 0x27b920, Func Offset: 0x220
	// Line 928, Address: 0x27b93c, Func Offset: 0x23c
	// Line 929, Address: 0x27b948, Func Offset: 0x248
	// Line 931, Address: 0x27b964, Func Offset: 0x264
	// Line 940, Address: 0x27b970, Func Offset: 0x270
	// Line 941, Address: 0x27b99c, Func Offset: 0x29c
	// Line 942, Address: 0x27b9a4, Func Offset: 0x2a4
	// Line 943, Address: 0x27b9a8, Func Offset: 0x2a8
	// Line 944, Address: 0x27b9b0, Func Offset: 0x2b0
	// Line 946, Address: 0x27b9b8, Func Offset: 0x2b8
	// Line 947, Address: 0x27b9c4, Func Offset: 0x2c4
	// Line 948, Address: 0x27b9d0, Func Offset: 0x2d0
	// Line 949, Address: 0x27b9dc, Func Offset: 0x2dc
	// Line 950, Address: 0x27b9f8, Func Offset: 0x2f8
	// Line 951, Address: 0x27ba04, Func Offset: 0x304
	// Line 953, Address: 0x27ba08, Func Offset: 0x308
	// Line 955, Address: 0x27ba1c, Func Offset: 0x31c
	// Line 964, Address: 0x27ba20, Func Offset: 0x320
	// Line 965, Address: 0x27ba2c, Func Offset: 0x32c
	// Line 968, Address: 0x27ba40, Func Offset: 0x340
	// Line 974, Address: 0x27ba68, Func Offset: 0x368
	// Line 976, Address: 0x27ba80, Func Offset: 0x380
	// Line 977, Address: 0x27ba9c, Func Offset: 0x39c
	// Line 979, Address: 0x27bab8, Func Offset: 0x3b8
	// Line 980, Address: 0x27badc, Func Offset: 0x3dc
	// Line 981, Address: 0x27bb00, Func Offset: 0x400
	// Line 982, Address: 0x27bb04, Func Offset: 0x404
	// Line 984, Address: 0x27bb0c, Func Offset: 0x40c
	// Line 986, Address: 0x27bb14, Func Offset: 0x414
	// Line 988, Address: 0x27bb1c, Func Offset: 0x41c
	// Line 989, Address: 0x27bb40, Func Offset: 0x440
	// Line 990, Address: 0x27bb44, Func Offset: 0x444
	// Line 992, Address: 0x27bb4c, Func Offset: 0x44c
	// Line 994, Address: 0x27bb54, Func Offset: 0x454
	// Line 996, Address: 0x27bb58, Func Offset: 0x458
	// Line 997, Address: 0x27bb60, Func Offset: 0x460
	// Line 998, Address: 0x27bb64, Func Offset: 0x464
	// Line 999, Address: 0x27bb68, Func Offset: 0x468
	// Line 1001, Address: 0x27bb6c, Func Offset: 0x46c
	// Line 1002, Address: 0x27bb78, Func Offset: 0x478
	// Line 1003, Address: 0x27bb84, Func Offset: 0x484
	// Line 1004, Address: 0x27bb90, Func Offset: 0x490
	// Line 1005, Address: 0x27bbac, Func Offset: 0x4ac
	// Line 1006, Address: 0x27bbb8, Func Offset: 0x4b8
	// Line 1008, Address: 0x27bbbc, Func Offset: 0x4bc
	// Line 1009, Address: 0x27bbd0, Func Offset: 0x4d0
	// Line 1011, Address: 0x27bbd8, Func Offset: 0x4d8
	// Line 1021, Address: 0x27bbec, Func Offset: 0x4ec
	// Line 1022, Address: 0x27bbf8, Func Offset: 0x4f8
	// Line 1023, Address: 0x27bc0c, Func Offset: 0x50c
	// Line 1025, Address: 0x27bc24, Func Offset: 0x524
	// Line 1027, Address: 0x27bc38, Func Offset: 0x538
	// Line 1029, Address: 0x27bc4c, Func Offset: 0x54c
	// Line 1030, Address: 0x27bc5c, Func Offset: 0x55c
	// Line 1031, Address: 0x27bc6c, Func Offset: 0x56c
	// Line 1032, Address: 0x27bc7c, Func Offset: 0x57c
	// Line 1033, Address: 0x27bc8c, Func Offset: 0x58c
	// Line 1034, Address: 0x27bc9c, Func Offset: 0x59c
	// Line 1035, Address: 0x27bcac, Func Offset: 0x5ac
	// Line 1037, Address: 0x27bcbc, Func Offset: 0x5bc
	// Line 1038, Address: 0x27bcc8, Func Offset: 0x5c8
	// Line 1039, Address: 0x27bcdc, Func Offset: 0x5dc
	// Line 1041, Address: 0x27bcf4, Func Offset: 0x5f4
	// Line 1042, Address: 0x27bd0c, Func Offset: 0x60c
	// Line 1043, Address: 0x27bd10, Func Offset: 0x610
	// Line 1044, Address: 0x27bd24, Func Offset: 0x624
	// Line 1092, Address: 0x27bd34, Func Offset: 0x634
	// Line 1093, Address: 0x27bd50, Func Offset: 0x650
	// Line 1096, Address: 0x27bd58, Func Offset: 0x658
	// Line 1097, Address: 0x27bd5c, Func Offset: 0x65c
	// Line 1100, Address: 0x27bd60, Func Offset: 0x660
	// Line 1101, Address: 0x27bd64, Func Offset: 0x664
	// Func End, Address: 0x27bd94, Func Offset: 0x694
}

