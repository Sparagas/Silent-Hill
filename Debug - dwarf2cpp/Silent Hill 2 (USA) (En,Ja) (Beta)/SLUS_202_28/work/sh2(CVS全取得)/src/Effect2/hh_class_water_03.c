typedef struct HH_Object_Water_03;
typedef struct WaveArea_Infomeation;
typedef struct ImpactQueue_Element;
typedef struct Object_DataBlock_Header;
typedef struct _anon0;
typedef struct ImpactQueue_ElementOption;
typedef struct Wave_Element;
typedef struct WaveArea_GridLink_Infomeation;


typedef WaveArea_GridLink_Infomeation type_0[1];
typedef unsigned int type_1[3];
typedef unsigned long type_2[2];
typedef unsigned long type_3[2];
typedef unsigned int type_4[4];
typedef float type_5[4][2];
typedef float type_6[2];
typedef int type_7[2];
typedef WaveArea_GridLink_Infomeation type_8[1];
typedef int type_9[4];
typedef float type_10[4];
typedef WaveArea_Infomeation type_11[4];
typedef unsigned int type_12[1];
typedef float type_13[4];
typedef float type_14[4][4];
typedef unsigned int type_15[2];
typedef unsigned int type_16[2][4];
typedef unsigned int type_17[2];
typedef unsigned int type_18[3];
typedef float* type_19[2];
typedef Wave_Element type_20[40];
typedef float type_21[104];
typedef WaveArea_GridLink_Infomeation type_22[1];
typedef float type_23[168];
typedef unsigned int type_24[2];
typedef float type_25[160];
typedef unsigned int type_26[2];
typedef float type_27[312];
typedef unsigned int type_28[2];
typedef float* type_29[4];
typedef float type_30[4];
typedef unsigned int type_31[4];
typedef unsigned int type_32[2];
typedef unsigned int type_33[3];

struct HH_Object_Water_03
{
	Object_DataBlock_Header Header;
	unsigned char Step;
	unsigned char Motion_Step;
	float Timer;
	float ST_Defference[4];
	Wave_Element Wave_Info[40];
	float Area00_Grid_Y_Value[104];
	float Area01_Grid_Y_Value[168];
	float Area02_Grid_Y_Value[160];
	float Area03_Grid_Y_Value[312];
	float* pArea_Grid_Y_Value_Table[4];
	float Area_WavePostTime[4];
	unsigned int Area_Enable_Table[4];
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
unsigned int _area02_view_list[3];
unsigned int _area03_view_list[3];
WaveArea_Infomeation _Area_Info_List[4];
WaveArea_GridLink_Infomeation _area00_01_grid_link_list[1];
WaveArea_GridLink_Infomeation _area01_02_grid_link_list[1];
WaveArea_GridLink_Infomeation _area02_03_grid_link_list[1];

void Grid_Work_Initialize(HH_Object_Water_03* pThis);
unsigned int Object_Initialize(HH_Object_Water_03* pThis, ImpactQueue_Element* pElement);
void CurrentPosition_AreaIndex_Calculator(ImpactQueue_Element* pElement, WaveArea_Infomeation* pInfo, unsigned int* pX_Index, unsigned int* pZ_Index);
float Specular_Calculator(float* View_Direction, float* Light_Direction, float* Normal_Vector);
void SpecularRGBA_Calculator(int* iRGBA, float* RGBA_Base, float* RGBA_Specular_Base, float Specular_Ratio);
unsigned int Object_Draw(HH_Object_Water_03* pThis, float* pGrid_Y_Value, float* WorldLocation, unsigned int Grid_X_Max, unsigned int Grid_Z_Max);
unsigned int HH_Class_Prefix_Water_03();
unsigned int HH_Class_Suffix_Water_03();
unsigned int HH_Class_Water_03(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x275940
void Grid_Work_Initialize(HH_Object_Water_03* pThis)
{
	// Line 224, Address: 0x275940, Func Offset: 0
	// Line 226, Address: 0x275950, Func Offset: 0x10
	// Line 227, Address: 0x275964, Func Offset: 0x24
	// Line 228, Address: 0x275978, Func Offset: 0x38
	// Line 229, Address: 0x27598c, Func Offset: 0x4c
	// Line 230, Address: 0x2759a0, Func Offset: 0x60
	// Func End, Address: 0x2759b4, Func Offset: 0x74
}

// 
// Start address: 0x2759c0
unsigned int Object_Initialize(HH_Object_Water_03* pThis, ImpactQueue_Element* pElement)
{
	unsigned int i;
	unsigned int result;
	// Line 243, Address: 0x2759c0, Func Offset: 0
	// Line 252, Address: 0x2759d8, Func Offset: 0x18
	// Line 254, Address: 0x2759dc, Func Offset: 0x1c
	// Line 256, Address: 0x2759e0, Func Offset: 0x20
	// Line 258, Address: 0x275a00, Func Offset: 0x40
	// Line 259, Address: 0x275a08, Func Offset: 0x48
	// Line 260, Address: 0x275a10, Func Offset: 0x50
	// Line 261, Address: 0x275a18, Func Offset: 0x58
	// Line 263, Address: 0x275a20, Func Offset: 0x60
	// Line 264, Address: 0x275a2c, Func Offset: 0x6c
	// Line 265, Address: 0x275a38, Func Offset: 0x78
	// Line 266, Address: 0x275a58, Func Offset: 0x98
	// Line 268, Address: 0x275a6c, Func Offset: 0xac
	// Line 269, Address: 0x275a78, Func Offset: 0xb8
	// Line 271, Address: 0x275a8c, Func Offset: 0xcc
	// Line 273, Address: 0x275aa0, Func Offset: 0xe0
	// Line 277, Address: 0x275aac, Func Offset: 0xec
	// Line 278, Address: 0x275ab4, Func Offset: 0xf4
	// Line 280, Address: 0x275ac0, Func Offset: 0x100
	// Line 281, Address: 0x275ac4, Func Offset: 0x104
	// Func End, Address: 0x275adc, Func Offset: 0x11c
}

// 
// Start address: 0x275ae0
void CurrentPosition_AreaIndex_Calculator(ImpactQueue_Element* pElement, WaveArea_Infomeation* pInfo, unsigned int* pX_Index, unsigned int* pZ_Index)
{
	float check_pos[4];
	// Line 286, Address: 0x275ae0, Func Offset: 0
	// Line 289, Address: 0x275b00, Func Offset: 0x20
	// Line 290, Address: 0x275b14, Func Offset: 0x34
	// Line 291, Address: 0x275b3c, Func Offset: 0x5c
	// Line 292, Address: 0x275b64, Func Offset: 0x84
	// Func End, Address: 0x275b7c, Func Offset: 0x9c
}

// 
// Start address: 0x275b80
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
	// Line 305, Address: 0x275b80, Func Offset: 0
	// Line 318, Address: 0x275ba0, Func Offset: 0x20
	// Line 319, Address: 0x275bb0, Func Offset: 0x30
	// Line 320, Address: 0x275bc8, Func Offset: 0x48
	// Line 322, Address: 0x275bcc, Func Offset: 0x4c
	// Line 323, Address: 0x275bec, Func Offset: 0x6c
	// Line 324, Address: 0x275c00, Func Offset: 0x80
	// Line 326, Address: 0x275c10, Func Offset: 0x90
	// Line 327, Address: 0x275c20, Func Offset: 0xa0
	// Line 328, Address: 0x275c38, Func Offset: 0xb8
	// Line 353, Address: 0x275c3c, Func Offset: 0xbc
	// Line 356, Address: 0x275ca0, Func Offset: 0x120
	// Func End, Address: 0x275cbc, Func Offset: 0x13c
}

// 
// Start address: 0x275cc0
void SpecularRGBA_Calculator(int* iRGBA, float* RGBA_Base, float* RGBA_Specular_Base, float Specular_Ratio)
{
	// Line 370, Address: 0x275cc0, Func Offset: 0
	// Line 373, Address: 0x275cc8, Func Offset: 0x8
	// Line 374, Address: 0x275ccc, Func Offset: 0xc
	// Line 375, Address: 0x275cd0, Func Offset: 0x10
	// Line 376, Address: 0x275cd4, Func Offset: 0x14
	// Line 377, Address: 0x275cd8, Func Offset: 0x18
	// Line 378, Address: 0x275cdc, Func Offset: 0x1c
	// Line 379, Address: 0x275ce0, Func Offset: 0x20
	// Line 380, Address: 0x275ce4, Func Offset: 0x24
	// Line 381, Address: 0x275ce8, Func Offset: 0x28
	// Line 382, Address: 0x275cec, Func Offset: 0x2c
	// Line 383, Address: 0x275cf0, Func Offset: 0x30
	// Line 384, Address: 0x275cf4, Func Offset: 0x34
	// Line 388, Address: 0x275cf8, Func Offset: 0x38
	// Func End, Address: 0x275d00, Func Offset: 0x40
}

// 
// Start address: 0x275d00
unsigned int Object_Draw(HH_Object_Water_03* pThis, float* pGrid_Y_Value, float* WorldLocation, unsigned int Grid_X_Max, unsigned int Grid_Z_Max)
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
	// Line 401, Address: 0x275d00, Func Offset: 0
	// Line 432, Address: 0x275d4c, Func Offset: 0x4c
	// Line 435, Address: 0x275d58, Func Offset: 0x58
	// Line 454, Address: 0x275d60, Func Offset: 0x60
	// Line 458, Address: 0x275d64, Func Offset: 0x64
	// Line 459, Address: 0x275d70, Func Offset: 0x70
	// Line 460, Address: 0x275d7c, Func Offset: 0x7c
	// Line 461, Address: 0x275d94, Func Offset: 0x94
	// Line 462, Address: 0x275dac, Func Offset: 0xac
	// Line 464, Address: 0x275dc4, Func Offset: 0xc4
	// Line 465, Address: 0x275dd0, Func Offset: 0xd0
	// Line 467, Address: 0x275ddc, Func Offset: 0xdc
	// Line 468, Address: 0x275de0, Func Offset: 0xe0
	// Line 470, Address: 0x275de4, Func Offset: 0xe4
	// Line 473, Address: 0x275df4, Func Offset: 0xf4
	// Line 478, Address: 0x275e08, Func Offset: 0x108
	// Line 480, Address: 0x275e14, Func Offset: 0x114
	// Line 482, Address: 0x275e20, Func Offset: 0x120
	// Line 483, Address: 0x275e34, Func Offset: 0x134
	// Line 486, Address: 0x275e48, Func Offset: 0x148
	// Line 487, Address: 0x275e54, Func Offset: 0x154
	// Line 489, Address: 0x275e68, Func Offset: 0x168
	// Line 491, Address: 0x275e70, Func Offset: 0x170
	// Line 494, Address: 0x275e7c, Func Offset: 0x17c
	// Line 495, Address: 0x275e88, Func Offset: 0x188
	// Line 496, Address: 0x275ee4, Func Offset: 0x1e4
	// Line 497, Address: 0x275f48, Func Offset: 0x248
	// Line 499, Address: 0x275f60, Func Offset: 0x260
	// Line 501, Address: 0x275f78, Func Offset: 0x278
	// Line 509, Address: 0x275f80, Func Offset: 0x280
	// Line 510, Address: 0x275f9c, Func Offset: 0x29c
	// Line 512, Address: 0x275fa0, Func Offset: 0x2a0
	// Line 524, Address: 0x275fac, Func Offset: 0x2ac
	// Line 526, Address: 0x275ff8, Func Offset: 0x2f8
	// Line 527, Address: 0x276058, Func Offset: 0x358
	// Line 528, Address: 0x276074, Func Offset: 0x374
	// Line 529, Address: 0x276094, Func Offset: 0x394
	// Line 533, Address: 0x2760a8, Func Offset: 0x3a8
	// Line 535, Address: 0x2760d0, Func Offset: 0x3d0
	// Line 536, Address: 0x2760f0, Func Offset: 0x3f0
	// Line 537, Address: 0x2760fc, Func Offset: 0x3fc
	// Line 539, Address: 0x276108, Func Offset: 0x408
	// Line 540, Address: 0x27611c, Func Offset: 0x41c
	// Line 543, Address: 0x276130, Func Offset: 0x430
	// Line 544, Address: 0x276144, Func Offset: 0x444
	// Line 546, Address: 0x276158, Func Offset: 0x458
	// Line 547, Address: 0x276168, Func Offset: 0x468
	// Line 548, Address: 0x276178, Func Offset: 0x478
	// Line 549, Address: 0x276180, Func Offset: 0x480
	// Line 551, Address: 0x276184, Func Offset: 0x484
	// Line 553, Address: 0x276198, Func Offset: 0x498
	// Line 559, Address: 0x2761b0, Func Offset: 0x4b0
	// Line 560, Address: 0x2761b8, Func Offset: 0x4b8
	// Line 562, Address: 0x2761d8, Func Offset: 0x4d8
	// Line 564, Address: 0x2761f4, Func Offset: 0x4f4
	// Line 566, Address: 0x27620c, Func Offset: 0x50c
	// Line 567, Address: 0x276224, Func Offset: 0x524
	// Line 568, Address: 0x276238, Func Offset: 0x538
	// Line 570, Address: 0x276240, Func Offset: 0x540
	// Line 571, Address: 0x276254, Func Offset: 0x554
	// Line 572, Address: 0x276268, Func Offset: 0x568
	// Line 574, Address: 0x276284, Func Offset: 0x584
	// Line 575, Address: 0x27629c, Func Offset: 0x59c
	// Line 576, Address: 0x2762b8, Func Offset: 0x5b8
	// Line 578, Address: 0x2762c0, Func Offset: 0x5c0
	// Line 583, Address: 0x2762d0, Func Offset: 0x5d0
	// Line 584, Address: 0x2762e0, Func Offset: 0x5e0
	// Line 585, Address: 0x2762f0, Func Offset: 0x5f0
	// Line 586, Address: 0x276300, Func Offset: 0x600
	// Line 587, Address: 0x27630c, Func Offset: 0x60c
	// Line 593, Address: 0x276314, Func Offset: 0x614
	// Line 600, Address: 0x276320, Func Offset: 0x620
	// Line 603, Address: 0x276340, Func Offset: 0x640
	// Line 605, Address: 0x27635c, Func Offset: 0x65c
	// Line 607, Address: 0x276374, Func Offset: 0x674
	// Line 608, Address: 0x27638c, Func Offset: 0x68c
	// Line 609, Address: 0x2763a0, Func Offset: 0x6a0
	// Line 611, Address: 0x2763a8, Func Offset: 0x6a8
	// Line 612, Address: 0x2763bc, Func Offset: 0x6bc
	// Line 613, Address: 0x2763d0, Func Offset: 0x6d0
	// Line 615, Address: 0x2763ec, Func Offset: 0x6ec
	// Line 616, Address: 0x276404, Func Offset: 0x704
	// Line 617, Address: 0x276420, Func Offset: 0x720
	// Line 619, Address: 0x276428, Func Offset: 0x728
	// Line 625, Address: 0x276438, Func Offset: 0x738
	// Line 626, Address: 0x276440, Func Offset: 0x740
	// Line 629, Address: 0x276448, Func Offset: 0x748
	// Line 630, Address: 0x276458, Func Offset: 0x758
	// Line 631, Address: 0x276468, Func Offset: 0x768
	// Line 632, Address: 0x276478, Func Offset: 0x778
	// Line 633, Address: 0x276484, Func Offset: 0x784
	// Line 634, Address: 0x276494, Func Offset: 0x794
	// Line 635, Address: 0x2764a0, Func Offset: 0x7a0
	// Line 636, Address: 0x2764b8, Func Offset: 0x7b8
	// Line 639, Address: 0x2764bc, Func Offset: 0x7bc
	// Line 641, Address: 0x2764cc, Func Offset: 0x7cc
	// Line 643, Address: 0x2764e4, Func Offset: 0x7e4
	// Line 645, Address: 0x2764ec, Func Offset: 0x7ec
	// Line 646, Address: 0x2764f0, Func Offset: 0x7f0
	// Func End, Address: 0x276530, Func Offset: 0x830
}

// 
// Start address: 0x276530
unsigned int HH_Class_Prefix_Water_03()
{
	unsigned long tex0;
	_anon0* pPk;
	unsigned int result;
	// Line 666, Address: 0x276530, Func Offset: 0
	// Line 668, Address: 0x27653c, Func Offset: 0xc
	// Line 671, Address: 0x276548, Func Offset: 0x18
	// Line 674, Address: 0x276550, Func Offset: 0x20
	// Line 675, Address: 0x276560, Func Offset: 0x30
	// Line 677, Address: 0x276574, Func Offset: 0x44
	// Line 678, Address: 0x276598, Func Offset: 0x68
	// Line 680, Address: 0x2765b4, Func Offset: 0x84
	// Line 682, Address: 0x2765bc, Func Offset: 0x8c
	// Line 683, Address: 0x2765c0, Func Offset: 0x90
	// Func End, Address: 0x2765d4, Func Offset: 0xa4
}

// 
// Start address: 0x2765e0
unsigned int HH_Class_Suffix_Water_03()
{
	_anon0* pPk;
	unsigned int result;
	// Line 696, Address: 0x2765e0, Func Offset: 0
	// Line 698, Address: 0x2765ec, Func Offset: 0xc
	// Line 700, Address: 0x2765f8, Func Offset: 0x18
	// Line 701, Address: 0x276600, Func Offset: 0x20
	// Line 702, Address: 0x276614, Func Offset: 0x34
	// Line 704, Address: 0x27661c, Func Offset: 0x3c
	// Line 705, Address: 0x276620, Func Offset: 0x40
	// Func End, Address: 0x276634, Func Offset: 0x54
}

// 
// Start address: 0x276640
unsigned int HH_Class_Water_03(void* pBlock, ImpactQueue_Element* pElement)
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
	HH_Object_Water_03* pThis;
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
	// Line 719, Address: 0x276640, Func Offset: 0
	// Line 726, Address: 0x27666c, Func Offset: 0x2c
	// Line 727, Address: 0x276670, Func Offset: 0x30
	// Line 729, Address: 0x276674, Func Offset: 0x34
	// Line 732, Address: 0x27669c, Func Offset: 0x5c
	// Line 734, Address: 0x2766a4, Func Offset: 0x64
	// Line 735, Address: 0x2766ac, Func Offset: 0x6c
	// Line 739, Address: 0x2766b4, Func Offset: 0x74
	// Line 747, Address: 0x2766bc, Func Offset: 0x7c
	// Line 748, Address: 0x2766d4, Func Offset: 0x94
	// Line 750, Address: 0x276794, Func Offset: 0x154
	// Line 751, Address: 0x2767d8, Func Offset: 0x198
	// Line 759, Address: 0x27681c, Func Offset: 0x1dc
	// Line 760, Address: 0x276828, Func Offset: 0x1e8
	// Line 762, Address: 0x276844, Func Offset: 0x204
	// Line 763, Address: 0x276854, Func Offset: 0x214
	// Line 764, Address: 0x276860, Func Offset: 0x220
	// Line 777, Address: 0x27687c, Func Offset: 0x23c
	// Line 778, Address: 0x276888, Func Offset: 0x248
	// Line 780, Address: 0x2768a4, Func Offset: 0x264
	// Line 789, Address: 0x2768b0, Func Offset: 0x270
	// Line 790, Address: 0x2768dc, Func Offset: 0x29c
	// Line 791, Address: 0x2768e4, Func Offset: 0x2a4
	// Line 792, Address: 0x2768e8, Func Offset: 0x2a8
	// Line 793, Address: 0x2768f0, Func Offset: 0x2b0
	// Line 795, Address: 0x2768f8, Func Offset: 0x2b8
	// Line 796, Address: 0x276904, Func Offset: 0x2c4
	// Line 797, Address: 0x276910, Func Offset: 0x2d0
	// Line 798, Address: 0x27691c, Func Offset: 0x2dc
	// Line 799, Address: 0x276938, Func Offset: 0x2f8
	// Line 800, Address: 0x276944, Func Offset: 0x304
	// Line 802, Address: 0x276948, Func Offset: 0x308
	// Line 804, Address: 0x27695c, Func Offset: 0x31c
	// Line 813, Address: 0x276960, Func Offset: 0x320
	// Line 814, Address: 0x27696c, Func Offset: 0x32c
	// Line 817, Address: 0x276980, Func Offset: 0x340
	// Line 823, Address: 0x2769a8, Func Offset: 0x368
	// Line 825, Address: 0x2769c0, Func Offset: 0x380
	// Line 826, Address: 0x2769dc, Func Offset: 0x39c
	// Line 828, Address: 0x2769f8, Func Offset: 0x3b8
	// Line 829, Address: 0x276a1c, Func Offset: 0x3dc
	// Line 830, Address: 0x276a40, Func Offset: 0x400
	// Line 831, Address: 0x276a44, Func Offset: 0x404
	// Line 833, Address: 0x276a4c, Func Offset: 0x40c
	// Line 835, Address: 0x276a54, Func Offset: 0x414
	// Line 837, Address: 0x276a5c, Func Offset: 0x41c
	// Line 838, Address: 0x276a80, Func Offset: 0x440
	// Line 839, Address: 0x276a84, Func Offset: 0x444
	// Line 841, Address: 0x276a8c, Func Offset: 0x44c
	// Line 843, Address: 0x276a94, Func Offset: 0x454
	// Line 845, Address: 0x276a98, Func Offset: 0x458
	// Line 846, Address: 0x276aa0, Func Offset: 0x460
	// Line 847, Address: 0x276aa4, Func Offset: 0x464
	// Line 848, Address: 0x276aa8, Func Offset: 0x468
	// Line 850, Address: 0x276aac, Func Offset: 0x46c
	// Line 851, Address: 0x276ab8, Func Offset: 0x478
	// Line 852, Address: 0x276ac4, Func Offset: 0x484
	// Line 853, Address: 0x276ad0, Func Offset: 0x490
	// Line 854, Address: 0x276aec, Func Offset: 0x4ac
	// Line 855, Address: 0x276af8, Func Offset: 0x4b8
	// Line 857, Address: 0x276afc, Func Offset: 0x4bc
	// Line 858, Address: 0x276b10, Func Offset: 0x4d0
	// Line 860, Address: 0x276b18, Func Offset: 0x4d8
	// Line 870, Address: 0x276b2c, Func Offset: 0x4ec
	// Line 871, Address: 0x276b38, Func Offset: 0x4f8
	// Line 872, Address: 0x276b4c, Func Offset: 0x50c
	// Line 874, Address: 0x276b64, Func Offset: 0x524
	// Line 876, Address: 0x276b78, Func Offset: 0x538
	// Line 878, Address: 0x276b8c, Func Offset: 0x54c
	// Line 879, Address: 0x276b9c, Func Offset: 0x55c
	// Line 880, Address: 0x276bac, Func Offset: 0x56c
	// Line 882, Address: 0x276bbc, Func Offset: 0x57c
	// Line 883, Address: 0x276bc8, Func Offset: 0x588
	// Line 884, Address: 0x276bdc, Func Offset: 0x59c
	// Line 886, Address: 0x276bf4, Func Offset: 0x5b4
	// Line 887, Address: 0x276c0c, Func Offset: 0x5cc
	// Line 888, Address: 0x276c10, Func Offset: 0x5d0
	// Line 889, Address: 0x276c24, Func Offset: 0x5e4
	// Line 937, Address: 0x276c34, Func Offset: 0x5f4
	// Line 938, Address: 0x276c50, Func Offset: 0x610
	// Line 941, Address: 0x276c58, Func Offset: 0x618
	// Line 942, Address: 0x276c5c, Func Offset: 0x61c
	// Line 945, Address: 0x276c60, Func Offset: 0x620
	// Line 946, Address: 0x276c64, Func Offset: 0x624
	// Func End, Address: 0x276c94, Func Offset: 0x654
}

