typedef struct HH_Object_Water_04;
typedef struct ImpactQueue_Element;
typedef struct WaveArea_Infomeation;
typedef struct _anon0;
typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_ElementOption;
typedef struct Wave_Element;
typedef struct WaveArea_GridLink_Infomeation;


typedef Wave_Element type_0[40];
typedef float type_1[152];
typedef float type_2[84];
typedef unsigned int type_3[4];
typedef float type_4[152];
typedef float type_5[160];
typedef float type_6[114];
typedef float type_7[120];
typedef float type_8[60];
typedef float* type_9[7];
typedef float type_10[7];
typedef unsigned int type_11[3];
typedef unsigned int type_12[7];
typedef unsigned int type_13[3];
typedef WaveArea_GridLink_Infomeation type_14[1];
typedef WaveArea_GridLink_Infomeation type_15[1];
typedef float type_16[4][2];
typedef float type_17[2];
typedef int type_18[2];
typedef unsigned int type_19[3];
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
typedef unsigned int type_31[5];
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

struct HH_Object_Water_04
{
	Object_DataBlock_Header Header;
	unsigned char Step;
	unsigned char Motion_Step;
	float Timer;
	float ST_Defference[4];
	Wave_Element Wave_Info[40];
	float Area00_Grid_Y_Value[152];
	float Area01_Grid_Y_Value[84];
	float Area02_Grid_Y_Value[152];
	float Area03_Grid_Y_Value[160];
	float Area04_Grid_Y_Value[114];
	float Area05_Grid_Y_Value[120];
	float Area06_Grid_Y_Value[60];
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
unsigned int _area01_view_list[5];
unsigned int _area02_view_list[4];
unsigned int _area03_view_list[3];
unsigned int _area04_view_list[3];
unsigned int _area05_view_list[3];
unsigned int _area06_view_list[2];
WaveArea_Infomeation _Area_Info_List[7];
WaveArea_GridLink_Infomeation _area00_01_grid_link_list[1];
WaveArea_GridLink_Infomeation _area01_02_grid_link_list[1];
WaveArea_GridLink_Infomeation _area02_03_grid_link_list[1];
WaveArea_GridLink_Infomeation _area01_04_grid_link_list[1];
WaveArea_GridLink_Infomeation _area04_05_grid_link_list[1];
WaveArea_GridLink_Infomeation _area05_06_grid_link_list[1];

void Grid_Work_Initialize(HH_Object_Water_04* pThis);
unsigned int Object_Initialize(HH_Object_Water_04* pThis);
void CurrentPosition_AreaIndex_Calculator(ImpactQueue_Element* pElement, WaveArea_Infomeation* pInfo, unsigned int* pX_Index, unsigned int* pZ_Index);
float Specular_Calculator(float* View_Direction, float* Light_Direction, float* Normal_Vector);
void SpecularRGBA_Calculator(int* iRGBA, float* RGBA_Base, float* RGBA_Specular_Base, float Specular_Ratio);
unsigned int Object_Draw(HH_Object_Water_04* pThis, float* pGrid_Y_Value, float* WorldLocation, unsigned int Grid_X_Max, unsigned int Grid_Z_Max);
unsigned int HH_Class_Prefix_Water_04();
unsigned int HH_Class_Suffix_Water_04();
unsigned int HH_Class_Water_04(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x276ca0
void Grid_Work_Initialize(HH_Object_Water_04* pThis)
{
	// Line 305, Address: 0x276ca0, Func Offset: 0
	// Line 307, Address: 0x276cb0, Func Offset: 0x10
	// Line 308, Address: 0x276cc4, Func Offset: 0x24
	// Line 309, Address: 0x276cd8, Func Offset: 0x38
	// Line 310, Address: 0x276cec, Func Offset: 0x4c
	// Line 311, Address: 0x276d00, Func Offset: 0x60
	// Line 312, Address: 0x276d14, Func Offset: 0x74
	// Line 313, Address: 0x276d28, Func Offset: 0x88
	// Line 314, Address: 0x276d3c, Func Offset: 0x9c
	// Func End, Address: 0x276d50, Func Offset: 0xb0
}

// 
// Start address: 0x276d50
unsigned int Object_Initialize(HH_Object_Water_04* pThis)
{
	unsigned int i;
	unsigned int result;
	// Line 327, Address: 0x276d50, Func Offset: 0
	// Line 336, Address: 0x276d60, Func Offset: 0x10
	// Line 338, Address: 0x276d64, Func Offset: 0x14
	// Line 340, Address: 0x276d68, Func Offset: 0x18
	// Line 342, Address: 0x276d88, Func Offset: 0x38
	// Line 343, Address: 0x276d90, Func Offset: 0x40
	// Line 344, Address: 0x276d98, Func Offset: 0x48
	// Line 345, Address: 0x276da0, Func Offset: 0x50
	// Line 346, Address: 0x276da8, Func Offset: 0x58
	// Line 347, Address: 0x276db0, Func Offset: 0x60
	// Line 348, Address: 0x276db8, Func Offset: 0x68
	// Line 350, Address: 0x276dc0, Func Offset: 0x70
	// Line 351, Address: 0x276dcc, Func Offset: 0x7c
	// Line 352, Address: 0x276dd8, Func Offset: 0x88
	// Line 353, Address: 0x276df8, Func Offset: 0xa8
	// Line 355, Address: 0x276e0c, Func Offset: 0xbc
	// Line 356, Address: 0x276e18, Func Offset: 0xc8
	// Line 358, Address: 0x276e2c, Func Offset: 0xdc
	// Line 360, Address: 0x276e40, Func Offset: 0xf0
	// Line 361, Address: 0x276e4c, Func Offset: 0xfc
	// Line 362, Address: 0x276e54, Func Offset: 0x104
	// Line 364, Address: 0x276e68, Func Offset: 0x118
	// Line 366, Address: 0x276e7c, Func Offset: 0x12c
	// Line 417, Address: 0x276e88, Func Offset: 0x138
	// Line 418, Address: 0x276e8c, Func Offset: 0x13c
	// Func End, Address: 0x276ea0, Func Offset: 0x150
}

// 
// Start address: 0x276ea0
void CurrentPosition_AreaIndex_Calculator(ImpactQueue_Element* pElement, WaveArea_Infomeation* pInfo, unsigned int* pX_Index, unsigned int* pZ_Index)
{
	float check_pos[4];
	// Line 423, Address: 0x276ea0, Func Offset: 0
	// Line 426, Address: 0x276ec0, Func Offset: 0x20
	// Line 427, Address: 0x276ed4, Func Offset: 0x34
	// Line 428, Address: 0x276efc, Func Offset: 0x5c
	// Line 429, Address: 0x276f24, Func Offset: 0x84
	// Func End, Address: 0x276f3c, Func Offset: 0x9c
}

// 
// Start address: 0x276f40
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
	// Line 442, Address: 0x276f40, Func Offset: 0
	// Line 455, Address: 0x276f60, Func Offset: 0x20
	// Line 456, Address: 0x276f70, Func Offset: 0x30
	// Line 457, Address: 0x276f88, Func Offset: 0x48
	// Line 459, Address: 0x276f8c, Func Offset: 0x4c
	// Line 460, Address: 0x276fac, Func Offset: 0x6c
	// Line 461, Address: 0x276fc0, Func Offset: 0x80
	// Line 463, Address: 0x276fd0, Func Offset: 0x90
	// Line 464, Address: 0x276fe0, Func Offset: 0xa0
	// Line 465, Address: 0x276ff8, Func Offset: 0xb8
	// Line 490, Address: 0x276ffc, Func Offset: 0xbc
	// Line 493, Address: 0x277060, Func Offset: 0x120
	// Func End, Address: 0x27707c, Func Offset: 0x13c
}

// 
// Start address: 0x277080
void SpecularRGBA_Calculator(int* iRGBA, float* RGBA_Base, float* RGBA_Specular_Base, float Specular_Ratio)
{
	// Line 507, Address: 0x277080, Func Offset: 0
	// Line 510, Address: 0x277088, Func Offset: 0x8
	// Line 511, Address: 0x27708c, Func Offset: 0xc
	// Line 512, Address: 0x277090, Func Offset: 0x10
	// Line 513, Address: 0x277094, Func Offset: 0x14
	// Line 514, Address: 0x277098, Func Offset: 0x18
	// Line 515, Address: 0x27709c, Func Offset: 0x1c
	// Line 516, Address: 0x2770a0, Func Offset: 0x20
	// Line 517, Address: 0x2770a4, Func Offset: 0x24
	// Line 518, Address: 0x2770a8, Func Offset: 0x28
	// Line 519, Address: 0x2770ac, Func Offset: 0x2c
	// Line 520, Address: 0x2770b0, Func Offset: 0x30
	// Line 521, Address: 0x2770b4, Func Offset: 0x34
	// Line 525, Address: 0x2770b8, Func Offset: 0x38
	// Func End, Address: 0x2770c0, Func Offset: 0x40
}

// 
// Start address: 0x2770c0
unsigned int Object_Draw(HH_Object_Water_04* pThis, float* pGrid_Y_Value, float* WorldLocation, unsigned int Grid_X_Max, unsigned int Grid_Z_Max)
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
	// Line 538, Address: 0x2770c0, Func Offset: 0
	// Line 569, Address: 0x27710c, Func Offset: 0x4c
	// Line 572, Address: 0x277118, Func Offset: 0x58
	// Line 589, Address: 0x277120, Func Offset: 0x60
	// Line 593, Address: 0x277124, Func Offset: 0x64
	// Line 594, Address: 0x277130, Func Offset: 0x70
	// Line 595, Address: 0x27713c, Func Offset: 0x7c
	// Line 596, Address: 0x277154, Func Offset: 0x94
	// Line 597, Address: 0x27716c, Func Offset: 0xac
	// Line 599, Address: 0x277184, Func Offset: 0xc4
	// Line 600, Address: 0x277190, Func Offset: 0xd0
	// Line 602, Address: 0x27719c, Func Offset: 0xdc
	// Line 603, Address: 0x2771a0, Func Offset: 0xe0
	// Line 605, Address: 0x2771a4, Func Offset: 0xe4
	// Line 608, Address: 0x2771b4, Func Offset: 0xf4
	// Line 613, Address: 0x2771c8, Func Offset: 0x108
	// Line 615, Address: 0x2771d4, Func Offset: 0x114
	// Line 617, Address: 0x2771e0, Func Offset: 0x120
	// Line 618, Address: 0x2771f4, Func Offset: 0x134
	// Line 621, Address: 0x277208, Func Offset: 0x148
	// Line 622, Address: 0x277214, Func Offset: 0x154
	// Line 626, Address: 0x277228, Func Offset: 0x168
	// Line 628, Address: 0x277230, Func Offset: 0x170
	// Line 631, Address: 0x27723c, Func Offset: 0x17c
	// Line 632, Address: 0x277248, Func Offset: 0x188
	// Line 633, Address: 0x2772a4, Func Offset: 0x1e4
	// Line 634, Address: 0x277308, Func Offset: 0x248
	// Line 636, Address: 0x277320, Func Offset: 0x260
	// Line 638, Address: 0x277338, Func Offset: 0x278
	// Line 646, Address: 0x277340, Func Offset: 0x280
	// Line 647, Address: 0x27735c, Func Offset: 0x29c
	// Line 649, Address: 0x277360, Func Offset: 0x2a0
	// Line 662, Address: 0x27736c, Func Offset: 0x2ac
	// Line 664, Address: 0x2773b8, Func Offset: 0x2f8
	// Line 665, Address: 0x277418, Func Offset: 0x358
	// Line 666, Address: 0x277434, Func Offset: 0x374
	// Line 667, Address: 0x277454, Func Offset: 0x394
	// Line 673, Address: 0x277468, Func Offset: 0x3a8
	// Line 675, Address: 0x277490, Func Offset: 0x3d0
	// Line 676, Address: 0x2774b0, Func Offset: 0x3f0
	// Line 677, Address: 0x2774bc, Func Offset: 0x3fc
	// Line 679, Address: 0x2774c8, Func Offset: 0x408
	// Line 680, Address: 0x2774dc, Func Offset: 0x41c
	// Line 683, Address: 0x2774f0, Func Offset: 0x430
	// Line 684, Address: 0x277504, Func Offset: 0x444
	// Line 686, Address: 0x277518, Func Offset: 0x458
	// Line 687, Address: 0x277528, Func Offset: 0x468
	// Line 688, Address: 0x277538, Func Offset: 0x478
	// Line 689, Address: 0x277540, Func Offset: 0x480
	// Line 691, Address: 0x277544, Func Offset: 0x484
	// Line 693, Address: 0x277558, Func Offset: 0x498
	// Line 699, Address: 0x277570, Func Offset: 0x4b0
	// Line 700, Address: 0x277578, Func Offset: 0x4b8
	// Line 702, Address: 0x277598, Func Offset: 0x4d8
	// Line 704, Address: 0x2775b4, Func Offset: 0x4f4
	// Line 706, Address: 0x2775cc, Func Offset: 0x50c
	// Line 707, Address: 0x2775e4, Func Offset: 0x524
	// Line 708, Address: 0x2775f8, Func Offset: 0x538
	// Line 710, Address: 0x277600, Func Offset: 0x540
	// Line 711, Address: 0x277614, Func Offset: 0x554
	// Line 712, Address: 0x277628, Func Offset: 0x568
	// Line 714, Address: 0x277644, Func Offset: 0x584
	// Line 715, Address: 0x27765c, Func Offset: 0x59c
	// Line 716, Address: 0x277678, Func Offset: 0x5b8
	// Line 718, Address: 0x277680, Func Offset: 0x5c0
	// Line 723, Address: 0x277690, Func Offset: 0x5d0
	// Line 724, Address: 0x2776a0, Func Offset: 0x5e0
	// Line 725, Address: 0x2776ac, Func Offset: 0x5ec
	// Line 726, Address: 0x2776bc, Func Offset: 0x5fc
	// Line 727, Address: 0x2776c8, Func Offset: 0x608
	// Line 728, Address: 0x2776d8, Func Offset: 0x618
	// Line 729, Address: 0x2776e4, Func Offset: 0x624
	// Line 735, Address: 0x2776ec, Func Offset: 0x62c
	// Line 742, Address: 0x2776f8, Func Offset: 0x638
	// Line 745, Address: 0x277718, Func Offset: 0x658
	// Line 747, Address: 0x277734, Func Offset: 0x674
	// Line 749, Address: 0x27774c, Func Offset: 0x68c
	// Line 750, Address: 0x277764, Func Offset: 0x6a4
	// Line 751, Address: 0x277778, Func Offset: 0x6b8
	// Line 753, Address: 0x277780, Func Offset: 0x6c0
	// Line 754, Address: 0x277794, Func Offset: 0x6d4
	// Line 755, Address: 0x2777a8, Func Offset: 0x6e8
	// Line 757, Address: 0x2777c4, Func Offset: 0x704
	// Line 758, Address: 0x2777dc, Func Offset: 0x71c
	// Line 759, Address: 0x2777f8, Func Offset: 0x738
	// Line 761, Address: 0x277800, Func Offset: 0x740
	// Line 767, Address: 0x277810, Func Offset: 0x750
	// Line 768, Address: 0x277818, Func Offset: 0x758
	// Line 771, Address: 0x277820, Func Offset: 0x760
	// Line 772, Address: 0x277830, Func Offset: 0x770
	// Line 773, Address: 0x27783c, Func Offset: 0x77c
	// Line 774, Address: 0x27784c, Func Offset: 0x78c
	// Line 775, Address: 0x277858, Func Offset: 0x798
	// Line 776, Address: 0x277868, Func Offset: 0x7a8
	// Line 777, Address: 0x277874, Func Offset: 0x7b4
	// Line 778, Address: 0x277884, Func Offset: 0x7c4
	// Line 779, Address: 0x277890, Func Offset: 0x7d0
	// Line 780, Address: 0x2778a8, Func Offset: 0x7e8
	// Line 783, Address: 0x2778ac, Func Offset: 0x7ec
	// Line 785, Address: 0x2778bc, Func Offset: 0x7fc
	// Line 787, Address: 0x2778d4, Func Offset: 0x814
	// Line 789, Address: 0x2778dc, Func Offset: 0x81c
	// Line 790, Address: 0x2778e0, Func Offset: 0x820
	// Func End, Address: 0x277920, Func Offset: 0x860
}

// 
// Start address: 0x277920
unsigned int HH_Class_Prefix_Water_04()
{
	unsigned long tex0;
	_anon0* pPk;
	unsigned int result;
	// Line 810, Address: 0x277920, Func Offset: 0
	// Line 812, Address: 0x27792c, Func Offset: 0xc
	// Line 815, Address: 0x277938, Func Offset: 0x18
	// Line 818, Address: 0x277940, Func Offset: 0x20
	// Line 819, Address: 0x277950, Func Offset: 0x30
	// Line 821, Address: 0x277964, Func Offset: 0x44
	// Line 822, Address: 0x277988, Func Offset: 0x68
	// Line 824, Address: 0x2779a4, Func Offset: 0x84
	// Line 826, Address: 0x2779ac, Func Offset: 0x8c
	// Line 827, Address: 0x2779b0, Func Offset: 0x90
	// Func End, Address: 0x2779c4, Func Offset: 0xa4
}

// 
// Start address: 0x2779d0
unsigned int HH_Class_Suffix_Water_04()
{
	_anon0* pPk;
	unsigned int result;
	// Line 840, Address: 0x2779d0, Func Offset: 0
	// Line 842, Address: 0x2779dc, Func Offset: 0xc
	// Line 844, Address: 0x2779e8, Func Offset: 0x18
	// Line 845, Address: 0x2779f0, Func Offset: 0x20
	// Line 846, Address: 0x277a04, Func Offset: 0x34
	// Line 848, Address: 0x277a0c, Func Offset: 0x3c
	// Line 849, Address: 0x277a10, Func Offset: 0x40
	// Func End, Address: 0x277a24, Func Offset: 0x54
}

// 
// Start address: 0x277a30
unsigned int HH_Class_Water_04(void* pBlock, ImpactQueue_Element* pElement)
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
	HH_Object_Water_04* pThis;
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
	// Line 863, Address: 0x277a30, Func Offset: 0
	// Line 870, Address: 0x277a5c, Func Offset: 0x2c
	// Line 871, Address: 0x277a60, Func Offset: 0x30
	// Line 873, Address: 0x277a64, Func Offset: 0x34
	// Line 876, Address: 0x277a8c, Func Offset: 0x5c
	// Line 878, Address: 0x277a94, Func Offset: 0x64
	// Line 879, Address: 0x277a9c, Func Offset: 0x6c
	// Line 883, Address: 0x277aa4, Func Offset: 0x74
	// Line 891, Address: 0x277aac, Func Offset: 0x7c
	// Line 892, Address: 0x277ac4, Func Offset: 0x94
	// Line 894, Address: 0x277b84, Func Offset: 0x154
	// Line 895, Address: 0x277bc8, Func Offset: 0x198
	// Line 903, Address: 0x277c0c, Func Offset: 0x1dc
	// Line 904, Address: 0x277c18, Func Offset: 0x1e8
	// Line 906, Address: 0x277c34, Func Offset: 0x204
	// Line 907, Address: 0x277c44, Func Offset: 0x214
	// Line 908, Address: 0x277c50, Func Offset: 0x220
	// Line 921, Address: 0x277c6c, Func Offset: 0x23c
	// Line 922, Address: 0x277c78, Func Offset: 0x248
	// Line 924, Address: 0x277c94, Func Offset: 0x264
	// Line 933, Address: 0x277ca0, Func Offset: 0x270
	// Line 934, Address: 0x277ccc, Func Offset: 0x29c
	// Line 935, Address: 0x277cd4, Func Offset: 0x2a4
	// Line 936, Address: 0x277cd8, Func Offset: 0x2a8
	// Line 937, Address: 0x277ce0, Func Offset: 0x2b0
	// Line 939, Address: 0x277ce8, Func Offset: 0x2b8
	// Line 940, Address: 0x277cf4, Func Offset: 0x2c4
	// Line 941, Address: 0x277d00, Func Offset: 0x2d0
	// Line 942, Address: 0x277d0c, Func Offset: 0x2dc
	// Line 943, Address: 0x277d28, Func Offset: 0x2f8
	// Line 944, Address: 0x277d34, Func Offset: 0x304
	// Line 946, Address: 0x277d38, Func Offset: 0x308
	// Line 948, Address: 0x277d4c, Func Offset: 0x31c
	// Line 957, Address: 0x277d50, Func Offset: 0x320
	// Line 958, Address: 0x277d5c, Func Offset: 0x32c
	// Line 961, Address: 0x277d70, Func Offset: 0x340
	// Line 967, Address: 0x277d98, Func Offset: 0x368
	// Line 969, Address: 0x277db0, Func Offset: 0x380
	// Line 970, Address: 0x277dcc, Func Offset: 0x39c
	// Line 972, Address: 0x277de8, Func Offset: 0x3b8
	// Line 973, Address: 0x277e0c, Func Offset: 0x3dc
	// Line 974, Address: 0x277e30, Func Offset: 0x400
	// Line 975, Address: 0x277e34, Func Offset: 0x404
	// Line 977, Address: 0x277e3c, Func Offset: 0x40c
	// Line 979, Address: 0x277e44, Func Offset: 0x414
	// Line 981, Address: 0x277e4c, Func Offset: 0x41c
	// Line 982, Address: 0x277e70, Func Offset: 0x440
	// Line 983, Address: 0x277e74, Func Offset: 0x444
	// Line 985, Address: 0x277e7c, Func Offset: 0x44c
	// Line 987, Address: 0x277e84, Func Offset: 0x454
	// Line 989, Address: 0x277e88, Func Offset: 0x458
	// Line 990, Address: 0x277e90, Func Offset: 0x460
	// Line 991, Address: 0x277e94, Func Offset: 0x464
	// Line 992, Address: 0x277e98, Func Offset: 0x468
	// Line 994, Address: 0x277e9c, Func Offset: 0x46c
	// Line 995, Address: 0x277ea8, Func Offset: 0x478
	// Line 996, Address: 0x277eb4, Func Offset: 0x484
	// Line 997, Address: 0x277ec0, Func Offset: 0x490
	// Line 998, Address: 0x277edc, Func Offset: 0x4ac
	// Line 999, Address: 0x277ee8, Func Offset: 0x4b8
	// Line 1001, Address: 0x277eec, Func Offset: 0x4bc
	// Line 1002, Address: 0x277f00, Func Offset: 0x4d0
	// Line 1004, Address: 0x277f08, Func Offset: 0x4d8
	// Line 1014, Address: 0x277f1c, Func Offset: 0x4ec
	// Line 1015, Address: 0x277f28, Func Offset: 0x4f8
	// Line 1016, Address: 0x277f3c, Func Offset: 0x50c
	// Line 1018, Address: 0x277f54, Func Offset: 0x524
	// Line 1020, Address: 0x277f68, Func Offset: 0x538
	// Line 1022, Address: 0x277f7c, Func Offset: 0x54c
	// Line 1023, Address: 0x277f8c, Func Offset: 0x55c
	// Line 1024, Address: 0x277f9c, Func Offset: 0x56c
	// Line 1025, Address: 0x277fac, Func Offset: 0x57c
	// Line 1026, Address: 0x277fbc, Func Offset: 0x58c
	// Line 1027, Address: 0x277fcc, Func Offset: 0x59c
	// Line 1029, Address: 0x277fdc, Func Offset: 0x5ac
	// Line 1030, Address: 0x277fe8, Func Offset: 0x5b8
	// Line 1031, Address: 0x277ffc, Func Offset: 0x5cc
	// Line 1033, Address: 0x278014, Func Offset: 0x5e4
	// Line 1034, Address: 0x27802c, Func Offset: 0x5fc
	// Line 1035, Address: 0x278030, Func Offset: 0x600
	// Line 1036, Address: 0x278044, Func Offset: 0x614
	// Line 1084, Address: 0x278054, Func Offset: 0x624
	// Line 1085, Address: 0x278070, Func Offset: 0x640
	// Line 1088, Address: 0x278078, Func Offset: 0x648
	// Line 1089, Address: 0x27807c, Func Offset: 0x64c
	// Line 1092, Address: 0x278080, Func Offset: 0x650
	// Line 1093, Address: 0x278084, Func Offset: 0x654
	// Func End, Address: 0x2780b4, Func Offset: 0x684
}

