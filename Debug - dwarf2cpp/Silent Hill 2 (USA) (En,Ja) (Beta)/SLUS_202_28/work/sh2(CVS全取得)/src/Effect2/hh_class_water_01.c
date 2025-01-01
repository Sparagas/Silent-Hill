typedef struct HH_Object_Water_01;
typedef struct _anon0;
typedef struct ImpactQueue_Element;
typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_ElementOption;
typedef struct WaveArea_Infomeation;
typedef struct Wave_Element;
typedef struct WaveArea_GridLink_Infomeation;


typedef unsigned int type_0[5];
typedef unsigned int type_1[3];
typedef unsigned int type_2[3];
typedef unsigned long type_3[2];
typedef WaveArea_GridLink_Infomeation type_4[1];
typedef unsigned long type_5[2];
typedef float type_6[4][2];
typedef float type_7[2];
typedef int type_8[2];
typedef unsigned int type_9[4];
typedef int type_10[4];
typedef float type_11[4];
typedef unsigned int type_12[1];
typedef float type_13[4];
typedef float type_14[4][4];
typedef WaveArea_GridLink_Infomeation type_15[1];
typedef unsigned int type_16[3];
typedef unsigned int type_17[2];
typedef unsigned int type_18[2][4];
typedef unsigned int type_19[2];
typedef WaveArea_GridLink_Infomeation type_20[1];
typedef float* type_21[2];
typedef unsigned int type_22[4];
typedef unsigned int type_23[2];
typedef unsigned int type_24[2];
typedef Wave_Element type_25[20];
typedef unsigned int type_26[2];
typedef float type_27[217];
typedef float type_28[175];
typedef float type_29[119];
typedef WaveArea_GridLink_Infomeation type_30[1];
typedef float type_31[91];
typedef unsigned int type_32[2];
typedef float type_33[217];
typedef WaveArea_Infomeation type_34[5];
typedef float* type_35[5];
typedef float type_36[5];

struct HH_Object_Water_01
{
	Object_DataBlock_Header Header;
	unsigned char Step;
	unsigned char Motion_Step;
	float Timer;
	float ST_Defference[4];
	Wave_Element Wave_Info[20];
	float Area00_Grid_Y_Value[217];
	float Area01_Grid_Y_Value[175];
	float Area02_Grid_Y_Value[119];
	float Area03_Grid_Y_Value[91];
	float Area04_Grid_Y_Value[217];
	float* pArea_Grid_Y_Value_Table[5];
	float Area_WavePostTime[5];
	unsigned int Area_Enable_Table[5];
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
unsigned int _area03_view_list[3];
unsigned int _area04_view_list[3];
WaveArea_Infomeation _Area_Info_List[5];
WaveArea_GridLink_Infomeation _area00_01_grid_link_list[1];
WaveArea_GridLink_Infomeation _area01_02_grid_link_list[1];
WaveArea_GridLink_Infomeation _area02_03_grid_link_list[1];
WaveArea_GridLink_Infomeation _area03_04_grid_link_list[1];

void Grid_Work_Initialize(HH_Object_Water_01* pThis);
unsigned int Object_Initialize(HH_Object_Water_01* pThis);
void CurrentPosition_AreaIndex_Calculator(ImpactQueue_Element* pElement, WaveArea_Infomeation* pInfo, unsigned int* pX_Index, unsigned int* pZ_Index);
float Specular_Calculator(float* View_Direction, float* Light_Direction, float* Normal_Vector);
void SpecularRGBA_Calculator(int* iRGBA, float* RGBA_Base, float* RGBA_Specular_Base, float Specular_Ratio);
unsigned int Object_Draw(HH_Object_Water_01* pThis, float* pGrid_Y_Value, float* WorldLocation, unsigned int Grid_X_Max, unsigned int Grid_Z_Max);
unsigned int HH_Class_Prefix_Water_01();
unsigned int HH_Class_Suffix_Water_01();
unsigned int HH_Class_Water_01(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x25c740
void Grid_Work_Initialize(HH_Object_Water_01* pThis)
{
	// Line 251, Address: 0x25c740, Func Offset: 0
	// Line 253, Address: 0x25c750, Func Offset: 0x10
	// Line 254, Address: 0x25c764, Func Offset: 0x24
	// Line 255, Address: 0x25c778, Func Offset: 0x38
	// Line 256, Address: 0x25c78c, Func Offset: 0x4c
	// Line 257, Address: 0x25c7a0, Func Offset: 0x60
	// Line 258, Address: 0x25c7b4, Func Offset: 0x74
	// Func End, Address: 0x25c7c8, Func Offset: 0x88
}

// 
// Start address: 0x25c7d0
unsigned int Object_Initialize(HH_Object_Water_01* pThis)
{
	unsigned int i;
	unsigned int result;
	// Line 271, Address: 0x25c7d0, Func Offset: 0
	// Line 280, Address: 0x25c7e0, Func Offset: 0x10
	// Line 282, Address: 0x25c7e4, Func Offset: 0x14
	// Line 284, Address: 0x25c7e8, Func Offset: 0x18
	// Line 286, Address: 0x25c808, Func Offset: 0x38
	// Line 287, Address: 0x25c810, Func Offset: 0x40
	// Line 288, Address: 0x25c818, Func Offset: 0x48
	// Line 289, Address: 0x25c820, Func Offset: 0x50
	// Line 290, Address: 0x25c828, Func Offset: 0x58
	// Line 292, Address: 0x25c830, Func Offset: 0x60
	// Line 293, Address: 0x25c83c, Func Offset: 0x6c
	// Line 294, Address: 0x25c848, Func Offset: 0x78
	// Line 295, Address: 0x25c868, Func Offset: 0x98
	// Line 297, Address: 0x25c87c, Func Offset: 0xac
	// Line 298, Address: 0x25c888, Func Offset: 0xb8
	// Line 300, Address: 0x25c89c, Func Offset: 0xcc
	// Line 302, Address: 0x25c8b0, Func Offset: 0xe0
	// Line 304, Address: 0x25c8c4, Func Offset: 0xf4
	// Line 355, Address: 0x25c8d0, Func Offset: 0x100
	// Line 356, Address: 0x25c8d4, Func Offset: 0x104
	// Func End, Address: 0x25c8e8, Func Offset: 0x118
}

// 
// Start address: 0x25c8f0
void CurrentPosition_AreaIndex_Calculator(ImpactQueue_Element* pElement, WaveArea_Infomeation* pInfo, unsigned int* pX_Index, unsigned int* pZ_Index)
{
	float check_pos[4];
	// Line 361, Address: 0x25c8f0, Func Offset: 0
	// Line 364, Address: 0x25c910, Func Offset: 0x20
	// Line 365, Address: 0x25c924, Func Offset: 0x34
	// Line 366, Address: 0x25c94c, Func Offset: 0x5c
	// Line 367, Address: 0x25c974, Func Offset: 0x84
	// Func End, Address: 0x25c98c, Func Offset: 0x9c
}

// 
// Start address: 0x25c990
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
	// Line 380, Address: 0x25c990, Func Offset: 0
	// Line 393, Address: 0x25c9b0, Func Offset: 0x20
	// Line 394, Address: 0x25c9c0, Func Offset: 0x30
	// Line 395, Address: 0x25c9d8, Func Offset: 0x48
	// Line 397, Address: 0x25c9dc, Func Offset: 0x4c
	// Line 398, Address: 0x25c9fc, Func Offset: 0x6c
	// Line 399, Address: 0x25ca10, Func Offset: 0x80
	// Line 401, Address: 0x25ca20, Func Offset: 0x90
	// Line 402, Address: 0x25ca30, Func Offset: 0xa0
	// Line 403, Address: 0x25ca48, Func Offset: 0xb8
	// Line 424, Address: 0x25ca4c, Func Offset: 0xbc
	// Line 427, Address: 0x25ca9c, Func Offset: 0x10c
	// Func End, Address: 0x25cab8, Func Offset: 0x128
}

// 
// Start address: 0x25cac0
void SpecularRGBA_Calculator(int* iRGBA, float* RGBA_Base, float* RGBA_Specular_Base, float Specular_Ratio)
{
	// Line 441, Address: 0x25cac0, Func Offset: 0
	// Line 444, Address: 0x25cac8, Func Offset: 0x8
	// Line 445, Address: 0x25cacc, Func Offset: 0xc
	// Line 446, Address: 0x25cad0, Func Offset: 0x10
	// Line 447, Address: 0x25cad4, Func Offset: 0x14
	// Line 448, Address: 0x25cad8, Func Offset: 0x18
	// Line 449, Address: 0x25cadc, Func Offset: 0x1c
	// Line 450, Address: 0x25cae0, Func Offset: 0x20
	// Line 451, Address: 0x25cae4, Func Offset: 0x24
	// Line 452, Address: 0x25cae8, Func Offset: 0x28
	// Line 453, Address: 0x25caec, Func Offset: 0x2c
	// Line 454, Address: 0x25caf0, Func Offset: 0x30
	// Line 455, Address: 0x25caf4, Func Offset: 0x34
	// Line 459, Address: 0x25caf8, Func Offset: 0x38
	// Func End, Address: 0x25cb00, Func Offset: 0x40
}

// 
// Start address: 0x25cb00
unsigned int Object_Draw(HH_Object_Water_01* pThis, float* pGrid_Y_Value, float* WorldLocation, unsigned int Grid_X_Max, unsigned int Grid_Z_Max)
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
	// Line 472, Address: 0x25cb00, Func Offset: 0
	// Line 503, Address: 0x25cb4c, Func Offset: 0x4c
	// Line 506, Address: 0x25cb58, Func Offset: 0x58
	// Line 525, Address: 0x25cb60, Func Offset: 0x60
	// Line 529, Address: 0x25cb64, Func Offset: 0x64
	// Line 530, Address: 0x25cb70, Func Offset: 0x70
	// Line 531, Address: 0x25cb7c, Func Offset: 0x7c
	// Line 532, Address: 0x25cb94, Func Offset: 0x94
	// Line 534, Address: 0x25cbac, Func Offset: 0xac
	// Line 536, Address: 0x25cbc4, Func Offset: 0xc4
	// Line 537, Address: 0x25cbd0, Func Offset: 0xd0
	// Line 539, Address: 0x25cbdc, Func Offset: 0xdc
	// Line 540, Address: 0x25cbe0, Func Offset: 0xe0
	// Line 542, Address: 0x25cbe4, Func Offset: 0xe4
	// Line 545, Address: 0x25cbf4, Func Offset: 0xf4
	// Line 550, Address: 0x25cc08, Func Offset: 0x108
	// Line 555, Address: 0x25cc14, Func Offset: 0x114
	// Line 557, Address: 0x25cc20, Func Offset: 0x120
	// Line 558, Address: 0x25cc34, Func Offset: 0x134
	// Line 561, Address: 0x25cc48, Func Offset: 0x148
	// Line 562, Address: 0x25cc54, Func Offset: 0x154
	// Line 566, Address: 0x25cc68, Func Offset: 0x168
	// Line 568, Address: 0x25cc70, Func Offset: 0x170
	// Line 571, Address: 0x25cc7c, Func Offset: 0x17c
	// Line 572, Address: 0x25cc88, Func Offset: 0x188
	// Line 573, Address: 0x25cce4, Func Offset: 0x1e4
	// Line 574, Address: 0x25cd48, Func Offset: 0x248
	// Line 576, Address: 0x25cd60, Func Offset: 0x260
	// Line 578, Address: 0x25cd78, Func Offset: 0x278
	// Line 586, Address: 0x25cd80, Func Offset: 0x280
	// Line 587, Address: 0x25cd9c, Func Offset: 0x29c
	// Line 589, Address: 0x25cda0, Func Offset: 0x2a0
	// Line 602, Address: 0x25cdac, Func Offset: 0x2ac
	// Line 604, Address: 0x25cdf8, Func Offset: 0x2f8
	// Line 605, Address: 0x25ce58, Func Offset: 0x358
	// Line 606, Address: 0x25ce74, Func Offset: 0x374
	// Line 607, Address: 0x25ce94, Func Offset: 0x394
	// Line 611, Address: 0x25cea8, Func Offset: 0x3a8
	// Line 613, Address: 0x25ced0, Func Offset: 0x3d0
	// Line 614, Address: 0x25cef0, Func Offset: 0x3f0
	// Line 615, Address: 0x25cefc, Func Offset: 0x3fc
	// Line 617, Address: 0x25cf08, Func Offset: 0x408
	// Line 618, Address: 0x25cf1c, Func Offset: 0x41c
	// Line 621, Address: 0x25cf30, Func Offset: 0x430
	// Line 622, Address: 0x25cf44, Func Offset: 0x444
	// Line 624, Address: 0x25cf58, Func Offset: 0x458
	// Line 625, Address: 0x25cf68, Func Offset: 0x468
	// Line 626, Address: 0x25cf78, Func Offset: 0x478
	// Line 627, Address: 0x25cf80, Func Offset: 0x480
	// Line 629, Address: 0x25cf84, Func Offset: 0x484
	// Line 631, Address: 0x25cf98, Func Offset: 0x498
	// Line 637, Address: 0x25cfb0, Func Offset: 0x4b0
	// Line 638, Address: 0x25cfb8, Func Offset: 0x4b8
	// Line 640, Address: 0x25cfd8, Func Offset: 0x4d8
	// Line 642, Address: 0x25cff4, Func Offset: 0x4f4
	// Line 644, Address: 0x25d00c, Func Offset: 0x50c
	// Line 645, Address: 0x25d024, Func Offset: 0x524
	// Line 646, Address: 0x25d038, Func Offset: 0x538
	// Line 648, Address: 0x25d040, Func Offset: 0x540
	// Line 649, Address: 0x25d054, Func Offset: 0x554
	// Line 650, Address: 0x25d068, Func Offset: 0x568
	// Line 652, Address: 0x25d084, Func Offset: 0x584
	// Line 653, Address: 0x25d09c, Func Offset: 0x59c
	// Line 654, Address: 0x25d0b8, Func Offset: 0x5b8
	// Line 656, Address: 0x25d0c0, Func Offset: 0x5c0
	// Line 661, Address: 0x25d0d0, Func Offset: 0x5d0
	// Line 662, Address: 0x25d0e0, Func Offset: 0x5e0
	// Line 663, Address: 0x25d0ec, Func Offset: 0x5ec
	// Line 664, Address: 0x25d0fc, Func Offset: 0x5fc
	// Line 665, Address: 0x25d108, Func Offset: 0x608
	// Line 666, Address: 0x25d118, Func Offset: 0x618
	// Line 667, Address: 0x25d124, Func Offset: 0x624
	// Line 673, Address: 0x25d12c, Func Offset: 0x62c
	// Line 680, Address: 0x25d138, Func Offset: 0x638
	// Line 683, Address: 0x25d158, Func Offset: 0x658
	// Line 685, Address: 0x25d174, Func Offset: 0x674
	// Line 687, Address: 0x25d18c, Func Offset: 0x68c
	// Line 688, Address: 0x25d1a4, Func Offset: 0x6a4
	// Line 689, Address: 0x25d1b8, Func Offset: 0x6b8
	// Line 691, Address: 0x25d1c0, Func Offset: 0x6c0
	// Line 692, Address: 0x25d1d4, Func Offset: 0x6d4
	// Line 693, Address: 0x25d1e8, Func Offset: 0x6e8
	// Line 695, Address: 0x25d204, Func Offset: 0x704
	// Line 696, Address: 0x25d21c, Func Offset: 0x71c
	// Line 697, Address: 0x25d238, Func Offset: 0x738
	// Line 699, Address: 0x25d240, Func Offset: 0x740
	// Line 705, Address: 0x25d250, Func Offset: 0x750
	// Line 706, Address: 0x25d258, Func Offset: 0x758
	// Line 709, Address: 0x25d260, Func Offset: 0x760
	// Line 710, Address: 0x25d270, Func Offset: 0x770
	// Line 711, Address: 0x25d27c, Func Offset: 0x77c
	// Line 712, Address: 0x25d28c, Func Offset: 0x78c
	// Line 713, Address: 0x25d298, Func Offset: 0x798
	// Line 714, Address: 0x25d2a8, Func Offset: 0x7a8
	// Line 715, Address: 0x25d2b4, Func Offset: 0x7b4
	// Line 716, Address: 0x25d2c4, Func Offset: 0x7c4
	// Line 717, Address: 0x25d2d0, Func Offset: 0x7d0
	// Line 718, Address: 0x25d2e8, Func Offset: 0x7e8
	// Line 721, Address: 0x25d2ec, Func Offset: 0x7ec
	// Line 723, Address: 0x25d2fc, Func Offset: 0x7fc
	// Line 725, Address: 0x25d314, Func Offset: 0x814
	// Line 727, Address: 0x25d31c, Func Offset: 0x81c
	// Line 728, Address: 0x25d320, Func Offset: 0x820
	// Func End, Address: 0x25d360, Func Offset: 0x860
}

// 
// Start address: 0x25d360
unsigned int HH_Class_Prefix_Water_01()
{
	unsigned long tex0;
	_anon0* pPk;
	unsigned int result;
	// Line 748, Address: 0x25d360, Func Offset: 0
	// Line 750, Address: 0x25d36c, Func Offset: 0xc
	// Line 756, Address: 0x25d378, Func Offset: 0x18
	// Line 758, Address: 0x25d380, Func Offset: 0x20
	// Line 759, Address: 0x25d390, Func Offset: 0x30
	// Line 761, Address: 0x25d3a4, Func Offset: 0x44
	// Line 787, Address: 0x25d3c8, Func Offset: 0x68
	// Line 789, Address: 0x25d3e4, Func Offset: 0x84
	// Line 791, Address: 0x25d3ec, Func Offset: 0x8c
	// Line 792, Address: 0x25d3f0, Func Offset: 0x90
	// Func End, Address: 0x25d404, Func Offset: 0xa4
}

// 
// Start address: 0x25d410
unsigned int HH_Class_Suffix_Water_01()
{
	_anon0* pPk;
	unsigned int result;
	// Line 805, Address: 0x25d410, Func Offset: 0
	// Line 807, Address: 0x25d41c, Func Offset: 0xc
	// Line 809, Address: 0x25d428, Func Offset: 0x18
	// Line 810, Address: 0x25d430, Func Offset: 0x20
	// Line 811, Address: 0x25d444, Func Offset: 0x34
	// Line 813, Address: 0x25d44c, Func Offset: 0x3c
	// Line 814, Address: 0x25d450, Func Offset: 0x40
	// Func End, Address: 0x25d464, Func Offset: 0x54
}

// 
// Start address: 0x25d470
unsigned int HH_Class_Water_01(void* pBlock, ImpactQueue_Element* pElement)
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
	HH_Object_Water_01* pThis;
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
	// Line 828, Address: 0x25d470, Func Offset: 0
	// Line 835, Address: 0x25d498, Func Offset: 0x28
	// Line 836, Address: 0x25d49c, Func Offset: 0x2c
	// Line 838, Address: 0x25d4a0, Func Offset: 0x30
	// Line 841, Address: 0x25d4c8, Func Offset: 0x58
	// Line 843, Address: 0x25d4d0, Func Offset: 0x60
	// Line 844, Address: 0x25d4d8, Func Offset: 0x68
	// Line 848, Address: 0x25d4e0, Func Offset: 0x70
	// Line 856, Address: 0x25d4e8, Func Offset: 0x78
	// Line 857, Address: 0x25d500, Func Offset: 0x90
	// Line 859, Address: 0x25d5c0, Func Offset: 0x150
	// Line 860, Address: 0x25d604, Func Offset: 0x194
	// Line 868, Address: 0x25d648, Func Offset: 0x1d8
	// Line 869, Address: 0x25d654, Func Offset: 0x1e4
	// Line 871, Address: 0x25d670, Func Offset: 0x200
	// Line 872, Address: 0x25d680, Func Offset: 0x210
	// Line 873, Address: 0x25d68c, Func Offset: 0x21c
	// Line 874, Address: 0x25d6a8, Func Offset: 0x238
	// Line 876, Address: 0x25d6b0, Func Offset: 0x240
	// Line 877, Address: 0x25d6b4, Func Offset: 0x244
	// Line 878, Address: 0x25d6bc, Func Offset: 0x24c
	// Line 879, Address: 0x25d6c0, Func Offset: 0x250
	// Line 884, Address: 0x25d6c4, Func Offset: 0x254
	// Line 885, Address: 0x25d6d0, Func Offset: 0x260
	// Line 887, Address: 0x25d6ec, Func Offset: 0x27c
	// Line 896, Address: 0x25d6f8, Func Offset: 0x288
	// Line 897, Address: 0x25d724, Func Offset: 0x2b4
	// Line 898, Address: 0x25d72c, Func Offset: 0x2bc
	// Line 899, Address: 0x25d730, Func Offset: 0x2c0
	// Line 900, Address: 0x25d738, Func Offset: 0x2c8
	// Line 902, Address: 0x25d740, Func Offset: 0x2d0
	// Line 903, Address: 0x25d74c, Func Offset: 0x2dc
	// Line 904, Address: 0x25d758, Func Offset: 0x2e8
	// Line 905, Address: 0x25d764, Func Offset: 0x2f4
	// Line 906, Address: 0x25d780, Func Offset: 0x310
	// Line 907, Address: 0x25d78c, Func Offset: 0x31c
	// Line 909, Address: 0x25d790, Func Offset: 0x320
	// Line 911, Address: 0x25d7a4, Func Offset: 0x334
	// Line 920, Address: 0x25d7a8, Func Offset: 0x338
	// Line 921, Address: 0x25d7b4, Func Offset: 0x344
	// Line 927, Address: 0x25d7e4, Func Offset: 0x374
	// Line 929, Address: 0x25d7fc, Func Offset: 0x38c
	// Line 930, Address: 0x25d818, Func Offset: 0x3a8
	// Line 932, Address: 0x25d834, Func Offset: 0x3c4
	// Line 933, Address: 0x25d83c, Func Offset: 0x3cc
	// Line 934, Address: 0x25d840, Func Offset: 0x3d0
	// Line 935, Address: 0x25d844, Func Offset: 0x3d4
	// Line 937, Address: 0x25d848, Func Offset: 0x3d8
	// Line 938, Address: 0x25d854, Func Offset: 0x3e4
	// Line 939, Address: 0x25d860, Func Offset: 0x3f0
	// Line 940, Address: 0x25d86c, Func Offset: 0x3fc
	// Line 941, Address: 0x25d888, Func Offset: 0x418
	// Line 942, Address: 0x25d894, Func Offset: 0x424
	// Line 944, Address: 0x25d898, Func Offset: 0x428
	// Line 945, Address: 0x25d8ac, Func Offset: 0x43c
	// Line 946, Address: 0x25d8b4, Func Offset: 0x444
	// Line 947, Address: 0x25d8b8, Func Offset: 0x448
	// Line 957, Address: 0x25d8cc, Func Offset: 0x45c
	// Line 958, Address: 0x25d8d8, Func Offset: 0x468
	// Line 959, Address: 0x25d8ec, Func Offset: 0x47c
	// Line 961, Address: 0x25d904, Func Offset: 0x494
	// Line 963, Address: 0x25d918, Func Offset: 0x4a8
	// Line 981, Address: 0x25d92c, Func Offset: 0x4bc
	// Line 982, Address: 0x25d93c, Func Offset: 0x4cc
	// Line 983, Address: 0x25d94c, Func Offset: 0x4dc
	// Line 984, Address: 0x25d95c, Func Offset: 0x4ec
	// Line 986, Address: 0x25d96c, Func Offset: 0x4fc
	// Line 987, Address: 0x25d978, Func Offset: 0x508
	// Line 988, Address: 0x25d98c, Func Offset: 0x51c
	// Line 990, Address: 0x25d9a4, Func Offset: 0x534
	// Line 991, Address: 0x25d9bc, Func Offset: 0x54c
	// Line 992, Address: 0x25d9c0, Func Offset: 0x550
	// Line 993, Address: 0x25d9d4, Func Offset: 0x564
	// Line 1041, Address: 0x25d9e4, Func Offset: 0x574
	// Line 1042, Address: 0x25da00, Func Offset: 0x590
	// Line 1045, Address: 0x25da08, Func Offset: 0x598
	// Line 1046, Address: 0x25da0c, Func Offset: 0x59c
	// Line 1049, Address: 0x25da10, Func Offset: 0x5a0
	// Line 1050, Address: 0x25da14, Func Offset: 0x5a4
	// Func End, Address: 0x25da40, Func Offset: 0x5d0
}

