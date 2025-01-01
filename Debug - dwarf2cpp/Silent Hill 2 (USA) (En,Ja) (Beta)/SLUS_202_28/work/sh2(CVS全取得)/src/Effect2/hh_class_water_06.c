typedef struct HH_Object_Water_06;
typedef struct WaveArea_Infomeation;
typedef struct _anon0;
typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_Element;
typedef struct ImpactQueue_ElementOption;
typedef struct Wave_Element;
typedef struct WaveArea_GridLink_Infomeation;


typedef unsigned long type_0[2];
typedef unsigned int type_1[2];
typedef Wave_Element type_2[20];
typedef WaveArea_GridLink_Infomeation type_3[1];
typedef unsigned long type_4[2];
typedef WaveArea_GridLink_Infomeation type_5[1];
typedef float type_6[256];
typedef float type_7[288];
typedef float type_8[192];
typedef float type_9[168];
typedef unsigned int type_10[6];
typedef float type_11[176];
typedef float type_12[216];
typedef float type_13[168];
typedef float type_14[152];
typedef float* type_15[8];
typedef float type_16[8];
typedef unsigned int type_17[8];
typedef unsigned int type_18[5];
typedef WaveArea_GridLink_Infomeation type_19[1];
typedef float type_20[4][2];
typedef unsigned int type_21[3];
typedef float type_22[2];
typedef int type_23[2];
typedef WaveArea_Infomeation type_24[8];
typedef WaveArea_GridLink_Infomeation type_25[1];
typedef int type_26[4];
typedef float type_27[4];
typedef WaveArea_GridLink_Infomeation type_28[1];
typedef unsigned int type_29[1];
typedef float type_30[4];
typedef float type_31[4][4];
typedef unsigned int type_32[6];
typedef unsigned int type_33[2];
typedef unsigned int type_34[2][4];
typedef unsigned int type_35[4];
typedef unsigned int type_36[2];
typedef WaveArea_GridLink_Infomeation type_37[1];
typedef unsigned int type_38[4];
typedef float* type_39[2];
typedef unsigned int type_40[2];
typedef WaveArea_GridLink_Infomeation type_41[1];
typedef unsigned int type_42[2];
typedef unsigned int type_43[2];
typedef WaveArea_GridLink_Infomeation type_44[1];
typedef unsigned int type_45[4];
typedef unsigned int type_46[2];

struct HH_Object_Water_06
{
	Object_DataBlock_Header Header;
	unsigned char Step;
	unsigned char Motion_Step;
	float Timer;
	float ST_Defference[4];
	Wave_Element Wave_Info[20];
	float Area00_Grid_Y_Value[256];
	float Area01_Grid_Y_Value[288];
	float Area02_Grid_Y_Value[192];
	float Area03_Grid_Y_Value[168];
	float Area04_Grid_Y_Value[176];
	float Area05_Grid_Y_Value[216];
	float Area06_Grid_Y_Value[168];
	float Area07_Grid_Y_Value[152];
	float* pArea_Grid_Y_Value_Table[8];
	float Area_WavePostTime[8];
	unsigned int Area_Enable_Table[8];
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
unsigned int _area02_view_list[6];
unsigned int _area03_view_list[6];
unsigned int _area04_view_list[4];
unsigned int _area05_view_list[5];
unsigned int _area06_view_list[4];
unsigned int _area07_view_list[2];
WaveArea_Infomeation _Area_Info_List[8];
WaveArea_GridLink_Infomeation _area00_01_grid_link_list[1];
WaveArea_GridLink_Infomeation _area01_02_grid_link_list[1];
WaveArea_GridLink_Infomeation _area00_03_grid_link_list[1];
WaveArea_GridLink_Infomeation _area03_04_grid_link_list[1];
WaveArea_GridLink_Infomeation _area02_04_grid_link_list[1];
WaveArea_GridLink_Infomeation _area02_05_grid_link_list[1];
WaveArea_GridLink_Infomeation _area05_06_grid_link_list[1];
WaveArea_GridLink_Infomeation _area06_07_grid_link_list[1];

void Grid_Work_Initialize(HH_Object_Water_06* pThis);
unsigned int Object_Initialize(HH_Object_Water_06* pThis);
void CurrentPosition_AreaIndex_Calculator(ImpactQueue_Element* pElement, WaveArea_Infomeation* pInfo, unsigned int* pX_Index, unsigned int* pZ_Index);
float Specular_Calculator(float* View_Direction, float* Light_Direction, float* Normal_Vector);
void SpecularRGBA_Calculator(int* iRGBA, float* RGBA_Base, float* RGBA_Specular_Base, float Specular_Ratio);
unsigned int Object_Draw(HH_Object_Water_06* pThis, float* pGrid_Y_Value, float* WorldLocation, unsigned int Grid_X_Max, unsigned int Grid_Z_Max);
unsigned int HH_Class_Prefix_Water_06();
unsigned int HH_Class_Suffix_Water_06();
unsigned int HH_Class_Water_06(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x2780c0
void Grid_Work_Initialize(HH_Object_Water_06* pThis)
{
	// Line 348, Address: 0x2780c0, Func Offset: 0
	// Line 350, Address: 0x2780d0, Func Offset: 0x10
	// Line 351, Address: 0x2780e4, Func Offset: 0x24
	// Line 352, Address: 0x2780f8, Func Offset: 0x38
	// Line 353, Address: 0x27810c, Func Offset: 0x4c
	// Line 354, Address: 0x278120, Func Offset: 0x60
	// Line 355, Address: 0x278134, Func Offset: 0x74
	// Line 356, Address: 0x278148, Func Offset: 0x88
	// Line 357, Address: 0x27815c, Func Offset: 0x9c
	// Line 358, Address: 0x278170, Func Offset: 0xb0
	// Func End, Address: 0x278184, Func Offset: 0xc4
}

// 
// Start address: 0x278190
unsigned int Object_Initialize(HH_Object_Water_06* pThis)
{
	unsigned int i;
	unsigned int result;
	// Line 371, Address: 0x278190, Func Offset: 0
	// Line 380, Address: 0x2781a0, Func Offset: 0x10
	// Line 382, Address: 0x2781a4, Func Offset: 0x14
	// Line 384, Address: 0x2781a8, Func Offset: 0x18
	// Line 386, Address: 0x2781c8, Func Offset: 0x38
	// Line 387, Address: 0x2781d0, Func Offset: 0x40
	// Line 388, Address: 0x2781d8, Func Offset: 0x48
	// Line 389, Address: 0x2781e0, Func Offset: 0x50
	// Line 390, Address: 0x2781e8, Func Offset: 0x58
	// Line 391, Address: 0x2781f0, Func Offset: 0x60
	// Line 392, Address: 0x2781f8, Func Offset: 0x68
	// Line 393, Address: 0x278200, Func Offset: 0x70
	// Line 395, Address: 0x278208, Func Offset: 0x78
	// Line 396, Address: 0x278214, Func Offset: 0x84
	// Line 397, Address: 0x278220, Func Offset: 0x90
	// Line 398, Address: 0x278240, Func Offset: 0xb0
	// Line 400, Address: 0x278254, Func Offset: 0xc4
	// Line 401, Address: 0x278260, Func Offset: 0xd0
	// Line 403, Address: 0x278274, Func Offset: 0xe4
	// Line 404, Address: 0x278280, Func Offset: 0xf0
	// Line 405, Address: 0x278288, Func Offset: 0xf8
	// Line 407, Address: 0x27829c, Func Offset: 0x10c
	// Line 408, Address: 0x2782a8, Func Offset: 0x118
	// Line 409, Address: 0x2782b0, Func Offset: 0x120
	// Line 410, Address: 0x2782b8, Func Offset: 0x128
	// Line 411, Address: 0x2782c0, Func Offset: 0x130
	// Line 413, Address: 0x2782d4, Func Offset: 0x144
	// Line 415, Address: 0x2782e8, Func Offset: 0x158
	// Line 466, Address: 0x2782f4, Func Offset: 0x164
	// Line 467, Address: 0x2782f8, Func Offset: 0x168
	// Func End, Address: 0x27830c, Func Offset: 0x17c
}

// 
// Start address: 0x278310
void CurrentPosition_AreaIndex_Calculator(ImpactQueue_Element* pElement, WaveArea_Infomeation* pInfo, unsigned int* pX_Index, unsigned int* pZ_Index)
{
	float check_pos[4];
	// Line 472, Address: 0x278310, Func Offset: 0
	// Line 475, Address: 0x278330, Func Offset: 0x20
	// Line 476, Address: 0x278344, Func Offset: 0x34
	// Line 477, Address: 0x27836c, Func Offset: 0x5c
	// Line 478, Address: 0x278394, Func Offset: 0x84
	// Func End, Address: 0x2783ac, Func Offset: 0x9c
}

// 
// Start address: 0x2783b0
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
	// Line 491, Address: 0x2783b0, Func Offset: 0
	// Line 504, Address: 0x2783d0, Func Offset: 0x20
	// Line 505, Address: 0x2783e0, Func Offset: 0x30
	// Line 506, Address: 0x2783f8, Func Offset: 0x48
	// Line 508, Address: 0x2783fc, Func Offset: 0x4c
	// Line 509, Address: 0x27841c, Func Offset: 0x6c
	// Line 510, Address: 0x278430, Func Offset: 0x80
	// Line 512, Address: 0x278440, Func Offset: 0x90
	// Line 513, Address: 0x278450, Func Offset: 0xa0
	// Line 514, Address: 0x278468, Func Offset: 0xb8
	// Line 535, Address: 0x27846c, Func Offset: 0xbc
	// Line 538, Address: 0x2784d0, Func Offset: 0x120
	// Func End, Address: 0x2784ec, Func Offset: 0x13c
}

// 
// Start address: 0x2784f0
void SpecularRGBA_Calculator(int* iRGBA, float* RGBA_Base, float* RGBA_Specular_Base, float Specular_Ratio)
{
	// Line 552, Address: 0x2784f0, Func Offset: 0
	// Line 555, Address: 0x2784f8, Func Offset: 0x8
	// Line 556, Address: 0x2784fc, Func Offset: 0xc
	// Line 557, Address: 0x278500, Func Offset: 0x10
	// Line 558, Address: 0x278504, Func Offset: 0x14
	// Line 559, Address: 0x278508, Func Offset: 0x18
	// Line 560, Address: 0x27850c, Func Offset: 0x1c
	// Line 561, Address: 0x278510, Func Offset: 0x20
	// Line 562, Address: 0x278514, Func Offset: 0x24
	// Line 563, Address: 0x278518, Func Offset: 0x28
	// Line 564, Address: 0x27851c, Func Offset: 0x2c
	// Line 565, Address: 0x278520, Func Offset: 0x30
	// Line 566, Address: 0x278524, Func Offset: 0x34
	// Line 570, Address: 0x278528, Func Offset: 0x38
	// Func End, Address: 0x278530, Func Offset: 0x40
}

// 
// Start address: 0x278530
unsigned int Object_Draw(HH_Object_Water_06* pThis, float* pGrid_Y_Value, float* WorldLocation, unsigned int Grid_X_Max, unsigned int Grid_Z_Max)
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
	// Line 583, Address: 0x278530, Func Offset: 0
	// Line 614, Address: 0x27857c, Func Offset: 0x4c
	// Line 617, Address: 0x278588, Func Offset: 0x58
	// Line 633, Address: 0x278590, Func Offset: 0x60
	// Line 637, Address: 0x278594, Func Offset: 0x64
	// Line 638, Address: 0x2785a0, Func Offset: 0x70
	// Line 639, Address: 0x2785ac, Func Offset: 0x7c
	// Line 640, Address: 0x2785c4, Func Offset: 0x94
	// Line 641, Address: 0x2785dc, Func Offset: 0xac
	// Line 643, Address: 0x2785f4, Func Offset: 0xc4
	// Line 644, Address: 0x278600, Func Offset: 0xd0
	// Line 646, Address: 0x27860c, Func Offset: 0xdc
	// Line 647, Address: 0x278610, Func Offset: 0xe0
	// Line 649, Address: 0x278614, Func Offset: 0xe4
	// Line 652, Address: 0x278624, Func Offset: 0xf4
	// Line 657, Address: 0x278638, Func Offset: 0x108
	// Line 659, Address: 0x278644, Func Offset: 0x114
	// Line 661, Address: 0x278650, Func Offset: 0x120
	// Line 662, Address: 0x278664, Func Offset: 0x134
	// Line 665, Address: 0x278678, Func Offset: 0x148
	// Line 666, Address: 0x278684, Func Offset: 0x154
	// Line 670, Address: 0x278698, Func Offset: 0x168
	// Line 672, Address: 0x2786a0, Func Offset: 0x170
	// Line 675, Address: 0x2786ac, Func Offset: 0x17c
	// Line 676, Address: 0x2786b8, Func Offset: 0x188
	// Line 677, Address: 0x278714, Func Offset: 0x1e4
	// Line 678, Address: 0x278778, Func Offset: 0x248
	// Line 680, Address: 0x278790, Func Offset: 0x260
	// Line 682, Address: 0x2787a8, Func Offset: 0x278
	// Line 690, Address: 0x2787b0, Func Offset: 0x280
	// Line 691, Address: 0x2787cc, Func Offset: 0x29c
	// Line 693, Address: 0x2787d0, Func Offset: 0x2a0
	// Line 706, Address: 0x2787dc, Func Offset: 0x2ac
	// Line 708, Address: 0x278828, Func Offset: 0x2f8
	// Line 709, Address: 0x278888, Func Offset: 0x358
	// Line 710, Address: 0x2788a4, Func Offset: 0x374
	// Line 711, Address: 0x2788c4, Func Offset: 0x394
	// Line 716, Address: 0x2788d8, Func Offset: 0x3a8
	// Line 718, Address: 0x278900, Func Offset: 0x3d0
	// Line 719, Address: 0x278920, Func Offset: 0x3f0
	// Line 720, Address: 0x27892c, Func Offset: 0x3fc
	// Line 722, Address: 0x278938, Func Offset: 0x408
	// Line 723, Address: 0x27894c, Func Offset: 0x41c
	// Line 726, Address: 0x278960, Func Offset: 0x430
	// Line 727, Address: 0x278974, Func Offset: 0x444
	// Line 729, Address: 0x278988, Func Offset: 0x458
	// Line 730, Address: 0x278998, Func Offset: 0x468
	// Line 731, Address: 0x2789a8, Func Offset: 0x478
	// Line 732, Address: 0x2789b0, Func Offset: 0x480
	// Line 734, Address: 0x2789b4, Func Offset: 0x484
	// Line 736, Address: 0x2789c8, Func Offset: 0x498
	// Line 742, Address: 0x2789e0, Func Offset: 0x4b0
	// Line 743, Address: 0x2789e8, Func Offset: 0x4b8
	// Line 745, Address: 0x278a08, Func Offset: 0x4d8
	// Line 747, Address: 0x278a24, Func Offset: 0x4f4
	// Line 749, Address: 0x278a3c, Func Offset: 0x50c
	// Line 750, Address: 0x278a54, Func Offset: 0x524
	// Line 751, Address: 0x278a68, Func Offset: 0x538
	// Line 753, Address: 0x278a70, Func Offset: 0x540
	// Line 754, Address: 0x278a84, Func Offset: 0x554
	// Line 755, Address: 0x278a98, Func Offset: 0x568
	// Line 757, Address: 0x278ab4, Func Offset: 0x584
	// Line 758, Address: 0x278acc, Func Offset: 0x59c
	// Line 759, Address: 0x278ae8, Func Offset: 0x5b8
	// Line 761, Address: 0x278af0, Func Offset: 0x5c0
	// Line 766, Address: 0x278b00, Func Offset: 0x5d0
	// Line 767, Address: 0x278b10, Func Offset: 0x5e0
	// Line 768, Address: 0x278b1c, Func Offset: 0x5ec
	// Line 769, Address: 0x278b2c, Func Offset: 0x5fc
	// Line 770, Address: 0x278b38, Func Offset: 0x608
	// Line 771, Address: 0x278b48, Func Offset: 0x618
	// Line 772, Address: 0x278b54, Func Offset: 0x624
	// Line 778, Address: 0x278b5c, Func Offset: 0x62c
	// Line 785, Address: 0x278b68, Func Offset: 0x638
	// Line 788, Address: 0x278b88, Func Offset: 0x658
	// Line 790, Address: 0x278ba4, Func Offset: 0x674
	// Line 792, Address: 0x278bbc, Func Offset: 0x68c
	// Line 793, Address: 0x278bd4, Func Offset: 0x6a4
	// Line 794, Address: 0x278be8, Func Offset: 0x6b8
	// Line 796, Address: 0x278bf0, Func Offset: 0x6c0
	// Line 797, Address: 0x278c04, Func Offset: 0x6d4
	// Line 798, Address: 0x278c18, Func Offset: 0x6e8
	// Line 800, Address: 0x278c34, Func Offset: 0x704
	// Line 801, Address: 0x278c4c, Func Offset: 0x71c
	// Line 802, Address: 0x278c68, Func Offset: 0x738
	// Line 804, Address: 0x278c70, Func Offset: 0x740
	// Line 810, Address: 0x278c80, Func Offset: 0x750
	// Line 811, Address: 0x278c88, Func Offset: 0x758
	// Line 814, Address: 0x278c90, Func Offset: 0x760
	// Line 815, Address: 0x278ca0, Func Offset: 0x770
	// Line 816, Address: 0x278cac, Func Offset: 0x77c
	// Line 817, Address: 0x278cbc, Func Offset: 0x78c
	// Line 818, Address: 0x278cc8, Func Offset: 0x798
	// Line 819, Address: 0x278cd8, Func Offset: 0x7a8
	// Line 820, Address: 0x278ce4, Func Offset: 0x7b4
	// Line 821, Address: 0x278cf4, Func Offset: 0x7c4
	// Line 822, Address: 0x278d00, Func Offset: 0x7d0
	// Line 823, Address: 0x278d18, Func Offset: 0x7e8
	// Line 826, Address: 0x278d1c, Func Offset: 0x7ec
	// Line 828, Address: 0x278d2c, Func Offset: 0x7fc
	// Line 830, Address: 0x278d44, Func Offset: 0x814
	// Line 832, Address: 0x278d4c, Func Offset: 0x81c
	// Line 833, Address: 0x278d50, Func Offset: 0x820
	// Func End, Address: 0x278d90, Func Offset: 0x860
}

// 
// Start address: 0x278d90
unsigned int HH_Class_Prefix_Water_06()
{
	unsigned long tex0;
	_anon0* pPk;
	unsigned int result;
	// Line 853, Address: 0x278d90, Func Offset: 0
	// Line 855, Address: 0x278d9c, Func Offset: 0xc
	// Line 861, Address: 0x278da8, Func Offset: 0x18
	// Line 864, Address: 0x278db0, Func Offset: 0x20
	// Line 865, Address: 0x278dc0, Func Offset: 0x30
	// Line 867, Address: 0x278dd4, Func Offset: 0x44
	// Line 868, Address: 0x278df8, Func Offset: 0x68
	// Line 870, Address: 0x278e14, Func Offset: 0x84
	// Line 872, Address: 0x278e1c, Func Offset: 0x8c
	// Line 873, Address: 0x278e20, Func Offset: 0x90
	// Func End, Address: 0x278e34, Func Offset: 0xa4
}

// 
// Start address: 0x278e40
unsigned int HH_Class_Suffix_Water_06()
{
	_anon0* pPk;
	unsigned int result;
	// Line 886, Address: 0x278e40, Func Offset: 0
	// Line 888, Address: 0x278e4c, Func Offset: 0xc
	// Line 890, Address: 0x278e58, Func Offset: 0x18
	// Line 891, Address: 0x278e60, Func Offset: 0x20
	// Line 892, Address: 0x278e74, Func Offset: 0x34
	// Line 894, Address: 0x278e7c, Func Offset: 0x3c
	// Line 895, Address: 0x278e80, Func Offset: 0x40
	// Func End, Address: 0x278e94, Func Offset: 0x54
}

// 
// Start address: 0x278ea0
unsigned int HH_Class_Water_06(void* pBlock, ImpactQueue_Element* pElement)
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
	HH_Object_Water_06* pThis;
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
	// Line 909, Address: 0x278ea0, Func Offset: 0
	// Line 916, Address: 0x278ecc, Func Offset: 0x2c
	// Line 917, Address: 0x278ed0, Func Offset: 0x30
	// Line 919, Address: 0x278ed4, Func Offset: 0x34
	// Line 922, Address: 0x278efc, Func Offset: 0x5c
	// Line 924, Address: 0x278f04, Func Offset: 0x64
	// Line 925, Address: 0x278f0c, Func Offset: 0x6c
	// Line 929, Address: 0x278f14, Func Offset: 0x74
	// Line 937, Address: 0x278f1c, Func Offset: 0x7c
	// Line 938, Address: 0x278f34, Func Offset: 0x94
	// Line 940, Address: 0x278ff4, Func Offset: 0x154
	// Line 941, Address: 0x279038, Func Offset: 0x198
	// Line 949, Address: 0x27907c, Func Offset: 0x1dc
	// Line 950, Address: 0x279088, Func Offset: 0x1e8
	// Line 952, Address: 0x2790a4, Func Offset: 0x204
	// Line 953, Address: 0x2790b4, Func Offset: 0x214
	// Line 954, Address: 0x2790c0, Func Offset: 0x220
	// Line 967, Address: 0x2790dc, Func Offset: 0x23c
	// Line 968, Address: 0x2790e8, Func Offset: 0x248
	// Line 970, Address: 0x279104, Func Offset: 0x264
	// Line 979, Address: 0x279110, Func Offset: 0x270
	// Line 980, Address: 0x27913c, Func Offset: 0x29c
	// Line 981, Address: 0x279144, Func Offset: 0x2a4
	// Line 982, Address: 0x279148, Func Offset: 0x2a8
	// Line 983, Address: 0x279150, Func Offset: 0x2b0
	// Line 985, Address: 0x279158, Func Offset: 0x2b8
	// Line 986, Address: 0x279164, Func Offset: 0x2c4
	// Line 987, Address: 0x279170, Func Offset: 0x2d0
	// Line 988, Address: 0x27917c, Func Offset: 0x2dc
	// Line 989, Address: 0x279198, Func Offset: 0x2f8
	// Line 990, Address: 0x2791a4, Func Offset: 0x304
	// Line 992, Address: 0x2791a8, Func Offset: 0x308
	// Line 994, Address: 0x2791bc, Func Offset: 0x31c
	// Line 1003, Address: 0x2791c0, Func Offset: 0x320
	// Line 1004, Address: 0x2791cc, Func Offset: 0x32c
	// Line 1007, Address: 0x2791e0, Func Offset: 0x340
	// Line 1013, Address: 0x279208, Func Offset: 0x368
	// Line 1015, Address: 0x279220, Func Offset: 0x380
	// Line 1016, Address: 0x27923c, Func Offset: 0x39c
	// Line 1018, Address: 0x279258, Func Offset: 0x3b8
	// Line 1019, Address: 0x27927c, Func Offset: 0x3dc
	// Line 1020, Address: 0x2792a0, Func Offset: 0x400
	// Line 1021, Address: 0x2792a4, Func Offset: 0x404
	// Line 1023, Address: 0x2792ac, Func Offset: 0x40c
	// Line 1025, Address: 0x2792b4, Func Offset: 0x414
	// Line 1027, Address: 0x2792bc, Func Offset: 0x41c
	// Line 1028, Address: 0x2792e0, Func Offset: 0x440
	// Line 1029, Address: 0x2792e4, Func Offset: 0x444
	// Line 1031, Address: 0x2792ec, Func Offset: 0x44c
	// Line 1033, Address: 0x2792f4, Func Offset: 0x454
	// Line 1035, Address: 0x2792f8, Func Offset: 0x458
	// Line 1036, Address: 0x279300, Func Offset: 0x460
	// Line 1037, Address: 0x279304, Func Offset: 0x464
	// Line 1038, Address: 0x279308, Func Offset: 0x468
	// Line 1040, Address: 0x27930c, Func Offset: 0x46c
	// Line 1041, Address: 0x279318, Func Offset: 0x478
	// Line 1042, Address: 0x279324, Func Offset: 0x484
	// Line 1043, Address: 0x279330, Func Offset: 0x490
	// Line 1044, Address: 0x27934c, Func Offset: 0x4ac
	// Line 1045, Address: 0x279358, Func Offset: 0x4b8
	// Line 1047, Address: 0x27935c, Func Offset: 0x4bc
	// Line 1048, Address: 0x279370, Func Offset: 0x4d0
	// Line 1050, Address: 0x279378, Func Offset: 0x4d8
	// Line 1060, Address: 0x27938c, Func Offset: 0x4ec
	// Line 1061, Address: 0x279398, Func Offset: 0x4f8
	// Line 1062, Address: 0x2793ac, Func Offset: 0x50c
	// Line 1064, Address: 0x2793c4, Func Offset: 0x524
	// Line 1066, Address: 0x2793d8, Func Offset: 0x538
	// Line 1068, Address: 0x2793ec, Func Offset: 0x54c
	// Line 1069, Address: 0x2793fc, Func Offset: 0x55c
	// Line 1070, Address: 0x27940c, Func Offset: 0x56c
	// Line 1071, Address: 0x27941c, Func Offset: 0x57c
	// Line 1072, Address: 0x27942c, Func Offset: 0x58c
	// Line 1073, Address: 0x27943c, Func Offset: 0x59c
	// Line 1074, Address: 0x27944c, Func Offset: 0x5ac
	// Line 1075, Address: 0x27945c, Func Offset: 0x5bc
	// Line 1077, Address: 0x27946c, Func Offset: 0x5cc
	// Line 1078, Address: 0x279478, Func Offset: 0x5d8
	// Line 1079, Address: 0x27948c, Func Offset: 0x5ec
	// Line 1081, Address: 0x2794a4, Func Offset: 0x604
	// Line 1082, Address: 0x2794bc, Func Offset: 0x61c
	// Line 1083, Address: 0x2794c0, Func Offset: 0x620
	// Line 1084, Address: 0x2794d4, Func Offset: 0x634
	// Line 1132, Address: 0x2794e4, Func Offset: 0x644
	// Line 1133, Address: 0x279500, Func Offset: 0x660
	// Line 1136, Address: 0x279508, Func Offset: 0x668
	// Line 1137, Address: 0x27950c, Func Offset: 0x66c
	// Line 1140, Address: 0x279510, Func Offset: 0x670
	// Line 1141, Address: 0x279514, Func Offset: 0x674
	// Func End, Address: 0x279544, Func Offset: 0x6a4
}

