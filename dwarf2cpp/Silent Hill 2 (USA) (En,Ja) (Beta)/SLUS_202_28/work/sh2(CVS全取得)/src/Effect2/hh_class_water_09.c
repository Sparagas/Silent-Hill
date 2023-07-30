typedef struct WaveArea_Infomeation;
typedef struct _anon0;
typedef struct ImpactQueue_Element;
typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_ElementOption;
typedef struct HH_Object_Water_09;
typedef struct Wave_Element;
typedef struct WaveArea_GridLink_Infomeation;


typedef WaveArea_Infomeation type_0[3];
typedef unsigned int type_1[3];
typedef float type_2[4][2];
typedef float type_3[2];
typedef int type_4[2];
typedef int type_5[4];
typedef float type_6[4];
typedef unsigned int type_7[1];
typedef float type_8[4];
typedef float type_9[4][4];
typedef WaveArea_GridLink_Infomeation type_10[1];
typedef unsigned int type_11[3];
typedef unsigned int type_12[2];
typedef unsigned int type_13[2][4];
typedef unsigned int type_14[2];
typedef Wave_Element type_15[20];
typedef float type_16[200];
typedef float type_17[160];
typedef float type_18[120];
typedef float* type_19[2];
typedef unsigned long type_20[2];
typedef float* type_21[3];
typedef float type_22[3];
typedef unsigned int type_23[2];
typedef unsigned int type_24[3];
typedef unsigned int type_25[2];
typedef unsigned int type_26[3];
typedef unsigned int type_27[2];
typedef unsigned long type_28[2];
typedef WaveArea_GridLink_Infomeation type_29[1];
typedef unsigned int type_30[2];

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

struct HH_Object_Water_09
{
	Object_DataBlock_Header Header;
	unsigned char Step;
	unsigned char Motion_Step;
	float Timer;
	float ST_Defference[4];
	Wave_Element Wave_Info[20];
	float Area00_Grid_Y_Value[200];
	float Area01_Grid_Y_Value[160];
	float Area02_Grid_Y_Value[120];
	float* pArea_Grid_Y_Value_Table[3];
	float Area_WavePostTime[3];
	unsigned int Area_Enable_Table[3];
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
unsigned int _area01_view_list[3];
unsigned int _area02_view_list[3];
WaveArea_Infomeation _Area_Info_List[3];
WaveArea_GridLink_Infomeation _area00_01_grid_link_list[1];
WaveArea_GridLink_Infomeation _area01_02_grid_link_list[1];

void Grid_Work_Initialize(HH_Object_Water_09* pThis);
unsigned int Object_Initialize(HH_Object_Water_09* pThis);
void CurrentPosition_AreaIndex_Calculator(ImpactQueue_Element* pElement, WaveArea_Infomeation* pInfo, unsigned int* pX_Index, unsigned int* pZ_Index);
float Specular_Calculator(float* View_Direction, float* Light_Direction, float* Normal_Vector);
void SpecularRGBA_Calculator(int* iRGBA, float* RGBA_Base, float* RGBA_Specular_Base, float Specular_Ratio);
unsigned int Object_Draw(HH_Object_Water_09* pThis, float* pGrid_Y_Value, float* WorldLocation, unsigned int Grid_X_Max, unsigned int Grid_Z_Max);
unsigned int HH_Class_Prefix_Water_09();
unsigned int HH_Class_Suffix_Water_09();
unsigned int HH_Class_Water_09(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x27bda0
void Grid_Work_Initialize(HH_Object_Water_09* pThis)
{
	// Line 200, Address: 0x27bda0, Func Offset: 0
	// Line 202, Address: 0x27bdb0, Func Offset: 0x10
	// Line 203, Address: 0x27bdc4, Func Offset: 0x24
	// Line 204, Address: 0x27bdd8, Func Offset: 0x38
	// Line 205, Address: 0x27bdec, Func Offset: 0x4c
	// Func End, Address: 0x27be00, Func Offset: 0x60
}

// 
// Start address: 0x27be00
unsigned int Object_Initialize(HH_Object_Water_09* pThis)
{
	unsigned int i;
	unsigned int result;
	// Line 218, Address: 0x27be00, Func Offset: 0
	// Line 227, Address: 0x27be10, Func Offset: 0x10
	// Line 229, Address: 0x27be14, Func Offset: 0x14
	// Line 231, Address: 0x27be18, Func Offset: 0x18
	// Line 233, Address: 0x27be38, Func Offset: 0x38
	// Line 234, Address: 0x27be40, Func Offset: 0x40
	// Line 235, Address: 0x27be48, Func Offset: 0x48
	// Line 237, Address: 0x27be50, Func Offset: 0x50
	// Line 238, Address: 0x27be5c, Func Offset: 0x5c
	// Line 239, Address: 0x27be68, Func Offset: 0x68
	// Line 240, Address: 0x27be88, Func Offset: 0x88
	// Line 242, Address: 0x27be9c, Func Offset: 0x9c
	// Line 243, Address: 0x27bea8, Func Offset: 0xa8
	// Line 245, Address: 0x27bebc, Func Offset: 0xbc
	// Line 296, Address: 0x27bec8, Func Offset: 0xc8
	// Line 297, Address: 0x27becc, Func Offset: 0xcc
	// Func End, Address: 0x27bee0, Func Offset: 0xe0
}

// 
// Start address: 0x27bee0
void CurrentPosition_AreaIndex_Calculator(ImpactQueue_Element* pElement, WaveArea_Infomeation* pInfo, unsigned int* pX_Index, unsigned int* pZ_Index)
{
	float check_pos[4];
	// Line 302, Address: 0x27bee0, Func Offset: 0
	// Line 305, Address: 0x27bf00, Func Offset: 0x20
	// Line 306, Address: 0x27bf14, Func Offset: 0x34
	// Line 307, Address: 0x27bf3c, Func Offset: 0x5c
	// Line 308, Address: 0x27bf64, Func Offset: 0x84
	// Func End, Address: 0x27bf7c, Func Offset: 0x9c
}

// 
// Start address: 0x27bf80
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
	// Line 321, Address: 0x27bf80, Func Offset: 0
	// Line 334, Address: 0x27bfa0, Func Offset: 0x20
	// Line 335, Address: 0x27bfb0, Func Offset: 0x30
	// Line 336, Address: 0x27bfc8, Func Offset: 0x48
	// Line 338, Address: 0x27bfcc, Func Offset: 0x4c
	// Line 339, Address: 0x27bfec, Func Offset: 0x6c
	// Line 340, Address: 0x27c000, Func Offset: 0x80
	// Line 342, Address: 0x27c010, Func Offset: 0x90
	// Line 343, Address: 0x27c020, Func Offset: 0xa0
	// Line 344, Address: 0x27c038, Func Offset: 0xb8
	// Line 365, Address: 0x27c03c, Func Offset: 0xbc
	// Line 368, Address: 0x27c08c, Func Offset: 0x10c
	// Func End, Address: 0x27c0a8, Func Offset: 0x128
}

// 
// Start address: 0x27c0b0
void SpecularRGBA_Calculator(int* iRGBA, float* RGBA_Base, float* RGBA_Specular_Base, float Specular_Ratio)
{
	// Line 382, Address: 0x27c0b0, Func Offset: 0
	// Line 385, Address: 0x27c0b8, Func Offset: 0x8
	// Line 386, Address: 0x27c0bc, Func Offset: 0xc
	// Line 387, Address: 0x27c0c0, Func Offset: 0x10
	// Line 388, Address: 0x27c0c4, Func Offset: 0x14
	// Line 389, Address: 0x27c0c8, Func Offset: 0x18
	// Line 390, Address: 0x27c0cc, Func Offset: 0x1c
	// Line 391, Address: 0x27c0d0, Func Offset: 0x20
	// Line 392, Address: 0x27c0d4, Func Offset: 0x24
	// Line 393, Address: 0x27c0d8, Func Offset: 0x28
	// Line 394, Address: 0x27c0dc, Func Offset: 0x2c
	// Line 395, Address: 0x27c0e0, Func Offset: 0x30
	// Line 396, Address: 0x27c0e4, Func Offset: 0x34
	// Line 400, Address: 0x27c0e8, Func Offset: 0x38
	// Func End, Address: 0x27c0f0, Func Offset: 0x40
}

// 
// Start address: 0x27c0f0
unsigned int Object_Draw(HH_Object_Water_09* pThis, float* pGrid_Y_Value, float* WorldLocation, unsigned int Grid_X_Max, unsigned int Grid_Z_Max)
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
	// Line 413, Address: 0x27c0f0, Func Offset: 0
	// Line 444, Address: 0x27c13c, Func Offset: 0x4c
	// Line 447, Address: 0x27c148, Func Offset: 0x58
	// Line 463, Address: 0x27c150, Func Offset: 0x60
	// Line 467, Address: 0x27c154, Func Offset: 0x64
	// Line 468, Address: 0x27c160, Func Offset: 0x70
	// Line 469, Address: 0x27c16c, Func Offset: 0x7c
	// Line 470, Address: 0x27c184, Func Offset: 0x94
	// Line 471, Address: 0x27c19c, Func Offset: 0xac
	// Line 473, Address: 0x27c1b4, Func Offset: 0xc4
	// Line 474, Address: 0x27c1c0, Func Offset: 0xd0
	// Line 476, Address: 0x27c1cc, Func Offset: 0xdc
	// Line 477, Address: 0x27c1d0, Func Offset: 0xe0
	// Line 479, Address: 0x27c1d4, Func Offset: 0xe4
	// Line 482, Address: 0x27c1e4, Func Offset: 0xf4
	// Line 487, Address: 0x27c1f8, Func Offset: 0x108
	// Line 489, Address: 0x27c204, Func Offset: 0x114
	// Line 491, Address: 0x27c210, Func Offset: 0x120
	// Line 492, Address: 0x27c224, Func Offset: 0x134
	// Line 495, Address: 0x27c238, Func Offset: 0x148
	// Line 496, Address: 0x27c244, Func Offset: 0x154
	// Line 500, Address: 0x27c258, Func Offset: 0x168
	// Line 502, Address: 0x27c260, Func Offset: 0x170
	// Line 505, Address: 0x27c26c, Func Offset: 0x17c
	// Line 506, Address: 0x27c278, Func Offset: 0x188
	// Line 507, Address: 0x27c2d4, Func Offset: 0x1e4
	// Line 508, Address: 0x27c338, Func Offset: 0x248
	// Line 510, Address: 0x27c350, Func Offset: 0x260
	// Line 512, Address: 0x27c368, Func Offset: 0x278
	// Line 520, Address: 0x27c370, Func Offset: 0x280
	// Line 521, Address: 0x27c38c, Func Offset: 0x29c
	// Line 523, Address: 0x27c390, Func Offset: 0x2a0
	// Line 536, Address: 0x27c39c, Func Offset: 0x2ac
	// Line 538, Address: 0x27c3e8, Func Offset: 0x2f8
	// Line 539, Address: 0x27c448, Func Offset: 0x358
	// Line 540, Address: 0x27c464, Func Offset: 0x374
	// Line 541, Address: 0x27c484, Func Offset: 0x394
	// Line 546, Address: 0x27c498, Func Offset: 0x3a8
	// Line 548, Address: 0x27c4c0, Func Offset: 0x3d0
	// Line 549, Address: 0x27c4e0, Func Offset: 0x3f0
	// Line 550, Address: 0x27c4ec, Func Offset: 0x3fc
	// Line 552, Address: 0x27c4f8, Func Offset: 0x408
	// Line 553, Address: 0x27c50c, Func Offset: 0x41c
	// Line 556, Address: 0x27c520, Func Offset: 0x430
	// Line 557, Address: 0x27c534, Func Offset: 0x444
	// Line 559, Address: 0x27c548, Func Offset: 0x458
	// Line 560, Address: 0x27c558, Func Offset: 0x468
	// Line 561, Address: 0x27c568, Func Offset: 0x478
	// Line 562, Address: 0x27c570, Func Offset: 0x480
	// Line 564, Address: 0x27c574, Func Offset: 0x484
	// Line 566, Address: 0x27c588, Func Offset: 0x498
	// Line 572, Address: 0x27c5a0, Func Offset: 0x4b0
	// Line 573, Address: 0x27c5a8, Func Offset: 0x4b8
	// Line 575, Address: 0x27c5c8, Func Offset: 0x4d8
	// Line 577, Address: 0x27c5e4, Func Offset: 0x4f4
	// Line 579, Address: 0x27c5fc, Func Offset: 0x50c
	// Line 580, Address: 0x27c614, Func Offset: 0x524
	// Line 581, Address: 0x27c628, Func Offset: 0x538
	// Line 583, Address: 0x27c630, Func Offset: 0x540
	// Line 584, Address: 0x27c644, Func Offset: 0x554
	// Line 585, Address: 0x27c658, Func Offset: 0x568
	// Line 587, Address: 0x27c674, Func Offset: 0x584
	// Line 588, Address: 0x27c68c, Func Offset: 0x59c
	// Line 589, Address: 0x27c6a8, Func Offset: 0x5b8
	// Line 591, Address: 0x27c6b0, Func Offset: 0x5c0
	// Line 596, Address: 0x27c6c0, Func Offset: 0x5d0
	// Line 597, Address: 0x27c6d0, Func Offset: 0x5e0
	// Line 598, Address: 0x27c6dc, Func Offset: 0x5ec
	// Line 599, Address: 0x27c6ec, Func Offset: 0x5fc
	// Line 600, Address: 0x27c6f8, Func Offset: 0x608
	// Line 601, Address: 0x27c708, Func Offset: 0x618
	// Line 602, Address: 0x27c714, Func Offset: 0x624
	// Line 608, Address: 0x27c71c, Func Offset: 0x62c
	// Line 615, Address: 0x27c728, Func Offset: 0x638
	// Line 618, Address: 0x27c748, Func Offset: 0x658
	// Line 620, Address: 0x27c764, Func Offset: 0x674
	// Line 622, Address: 0x27c77c, Func Offset: 0x68c
	// Line 623, Address: 0x27c794, Func Offset: 0x6a4
	// Line 624, Address: 0x27c7a8, Func Offset: 0x6b8
	// Line 626, Address: 0x27c7b0, Func Offset: 0x6c0
	// Line 627, Address: 0x27c7c4, Func Offset: 0x6d4
	// Line 628, Address: 0x27c7d8, Func Offset: 0x6e8
	// Line 630, Address: 0x27c7f4, Func Offset: 0x704
	// Line 631, Address: 0x27c80c, Func Offset: 0x71c
	// Line 632, Address: 0x27c828, Func Offset: 0x738
	// Line 634, Address: 0x27c830, Func Offset: 0x740
	// Line 640, Address: 0x27c840, Func Offset: 0x750
	// Line 641, Address: 0x27c848, Func Offset: 0x758
	// Line 644, Address: 0x27c850, Func Offset: 0x760
	// Line 645, Address: 0x27c860, Func Offset: 0x770
	// Line 646, Address: 0x27c86c, Func Offset: 0x77c
	// Line 647, Address: 0x27c87c, Func Offset: 0x78c
	// Line 648, Address: 0x27c888, Func Offset: 0x798
	// Line 649, Address: 0x27c898, Func Offset: 0x7a8
	// Line 650, Address: 0x27c8a4, Func Offset: 0x7b4
	// Line 651, Address: 0x27c8b4, Func Offset: 0x7c4
	// Line 652, Address: 0x27c8c0, Func Offset: 0x7d0
	// Line 653, Address: 0x27c8d8, Func Offset: 0x7e8
	// Line 656, Address: 0x27c8dc, Func Offset: 0x7ec
	// Line 658, Address: 0x27c8ec, Func Offset: 0x7fc
	// Line 660, Address: 0x27c904, Func Offset: 0x814
	// Line 662, Address: 0x27c90c, Func Offset: 0x81c
	// Line 663, Address: 0x27c910, Func Offset: 0x820
	// Func End, Address: 0x27c950, Func Offset: 0x860
}

// 
// Start address: 0x27c950
unsigned int HH_Class_Prefix_Water_09()
{
	unsigned long tex0;
	_anon0* pPk;
	unsigned int result;
	// Line 683, Address: 0x27c950, Func Offset: 0
	// Line 685, Address: 0x27c95c, Func Offset: 0xc
	// Line 688, Address: 0x27c968, Func Offset: 0x18
	// Line 691, Address: 0x27c970, Func Offset: 0x20
	// Line 692, Address: 0x27c980, Func Offset: 0x30
	// Line 694, Address: 0x27c994, Func Offset: 0x44
	// Line 695, Address: 0x27c9b8, Func Offset: 0x68
	// Line 697, Address: 0x27c9d4, Func Offset: 0x84
	// Line 699, Address: 0x27c9dc, Func Offset: 0x8c
	// Line 700, Address: 0x27c9e0, Func Offset: 0x90
	// Func End, Address: 0x27c9f4, Func Offset: 0xa4
}

// 
// Start address: 0x27ca00
unsigned int HH_Class_Suffix_Water_09()
{
	_anon0* pPk;
	unsigned int result;
	// Line 713, Address: 0x27ca00, Func Offset: 0
	// Line 715, Address: 0x27ca0c, Func Offset: 0xc
	// Line 717, Address: 0x27ca18, Func Offset: 0x18
	// Line 718, Address: 0x27ca20, Func Offset: 0x20
	// Line 719, Address: 0x27ca34, Func Offset: 0x34
	// Line 721, Address: 0x27ca3c, Func Offset: 0x3c
	// Line 722, Address: 0x27ca40, Func Offset: 0x40
	// Func End, Address: 0x27ca54, Func Offset: 0x54
}

// 
// Start address: 0x27ca60
unsigned int HH_Class_Water_09(void* pBlock, ImpactQueue_Element* pElement)
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
	HH_Object_Water_09* pThis;
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
	// Line 736, Address: 0x27ca60, Func Offset: 0
	// Line 743, Address: 0x27ca8c, Func Offset: 0x2c
	// Line 744, Address: 0x27ca90, Func Offset: 0x30
	// Line 746, Address: 0x27ca94, Func Offset: 0x34
	// Line 749, Address: 0x27cabc, Func Offset: 0x5c
	// Line 751, Address: 0x27cac4, Func Offset: 0x64
	// Line 752, Address: 0x27cacc, Func Offset: 0x6c
	// Line 756, Address: 0x27cad4, Func Offset: 0x74
	// Line 764, Address: 0x27cadc, Func Offset: 0x7c
	// Line 765, Address: 0x27caf4, Func Offset: 0x94
	// Line 767, Address: 0x27cbb4, Func Offset: 0x154
	// Line 768, Address: 0x27cbf8, Func Offset: 0x198
	// Line 776, Address: 0x27cc3c, Func Offset: 0x1dc
	// Line 777, Address: 0x27cc48, Func Offset: 0x1e8
	// Line 779, Address: 0x27cc64, Func Offset: 0x204
	// Line 780, Address: 0x27cc74, Func Offset: 0x214
	// Line 781, Address: 0x27cc80, Func Offset: 0x220
	// Line 793, Address: 0x27cc9c, Func Offset: 0x23c
	// Line 794, Address: 0x27cca8, Func Offset: 0x248
	// Line 796, Address: 0x27ccc4, Func Offset: 0x264
	// Line 805, Address: 0x27ccd0, Func Offset: 0x270
	// Line 806, Address: 0x27ccfc, Func Offset: 0x29c
	// Line 807, Address: 0x27cd04, Func Offset: 0x2a4
	// Line 808, Address: 0x27cd08, Func Offset: 0x2a8
	// Line 809, Address: 0x27cd10, Func Offset: 0x2b0
	// Line 811, Address: 0x27cd18, Func Offset: 0x2b8
	// Line 812, Address: 0x27cd24, Func Offset: 0x2c4
	// Line 813, Address: 0x27cd30, Func Offset: 0x2d0
	// Line 814, Address: 0x27cd3c, Func Offset: 0x2dc
	// Line 815, Address: 0x27cd58, Func Offset: 0x2f8
	// Line 816, Address: 0x27cd64, Func Offset: 0x304
	// Line 818, Address: 0x27cd68, Func Offset: 0x308
	// Line 820, Address: 0x27cd7c, Func Offset: 0x31c
	// Line 829, Address: 0x27cd80, Func Offset: 0x320
	// Line 830, Address: 0x27cd8c, Func Offset: 0x32c
	// Line 833, Address: 0x27cda0, Func Offset: 0x340
	// Line 839, Address: 0x27cdc8, Func Offset: 0x368
	// Line 841, Address: 0x27cde0, Func Offset: 0x380
	// Line 842, Address: 0x27cdfc, Func Offset: 0x39c
	// Line 844, Address: 0x27ce18, Func Offset: 0x3b8
	// Line 845, Address: 0x27ce3c, Func Offset: 0x3dc
	// Line 846, Address: 0x27ce60, Func Offset: 0x400
	// Line 847, Address: 0x27ce64, Func Offset: 0x404
	// Line 849, Address: 0x27ce6c, Func Offset: 0x40c
	// Line 851, Address: 0x27ce74, Func Offset: 0x414
	// Line 853, Address: 0x27ce7c, Func Offset: 0x41c
	// Line 854, Address: 0x27cea0, Func Offset: 0x440
	// Line 855, Address: 0x27cea4, Func Offset: 0x444
	// Line 857, Address: 0x27ceac, Func Offset: 0x44c
	// Line 859, Address: 0x27ceb4, Func Offset: 0x454
	// Line 861, Address: 0x27ceb8, Func Offset: 0x458
	// Line 862, Address: 0x27cec0, Func Offset: 0x460
	// Line 863, Address: 0x27cec4, Func Offset: 0x464
	// Line 864, Address: 0x27cec8, Func Offset: 0x468
	// Line 866, Address: 0x27cecc, Func Offset: 0x46c
	// Line 867, Address: 0x27ced8, Func Offset: 0x478
	// Line 868, Address: 0x27cee4, Func Offset: 0x484
	// Line 869, Address: 0x27cef0, Func Offset: 0x490
	// Line 870, Address: 0x27cf0c, Func Offset: 0x4ac
	// Line 871, Address: 0x27cf18, Func Offset: 0x4b8
	// Line 873, Address: 0x27cf1c, Func Offset: 0x4bc
	// Line 874, Address: 0x27cf30, Func Offset: 0x4d0
	// Line 876, Address: 0x27cf38, Func Offset: 0x4d8
	// Line 886, Address: 0x27cf4c, Func Offset: 0x4ec
	// Line 887, Address: 0x27cf58, Func Offset: 0x4f8
	// Line 888, Address: 0x27cf6c, Func Offset: 0x50c
	// Line 890, Address: 0x27cf84, Func Offset: 0x524
	// Line 892, Address: 0x27cf98, Func Offset: 0x538
	// Line 895, Address: 0x27cfac, Func Offset: 0x54c
	// Line 896, Address: 0x27cfbc, Func Offset: 0x55c
	// Line 898, Address: 0x27cfcc, Func Offset: 0x56c
	// Line 899, Address: 0x27cfd8, Func Offset: 0x578
	// Line 900, Address: 0x27cfec, Func Offset: 0x58c
	// Line 902, Address: 0x27d004, Func Offset: 0x5a4
	// Line 903, Address: 0x27d01c, Func Offset: 0x5bc
	// Line 904, Address: 0x27d020, Func Offset: 0x5c0
	// Line 905, Address: 0x27d034, Func Offset: 0x5d4
	// Line 953, Address: 0x27d044, Func Offset: 0x5e4
	// Line 954, Address: 0x27d060, Func Offset: 0x600
	// Line 957, Address: 0x27d068, Func Offset: 0x608
	// Line 958, Address: 0x27d06c, Func Offset: 0x60c
	// Line 961, Address: 0x27d070, Func Offset: 0x610
	// Line 962, Address: 0x27d074, Func Offset: 0x614
	// Func End, Address: 0x27d0a4, Func Offset: 0x644
}

