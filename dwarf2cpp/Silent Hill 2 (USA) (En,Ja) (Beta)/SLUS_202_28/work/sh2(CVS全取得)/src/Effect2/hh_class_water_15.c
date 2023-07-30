typedef struct ImpactQueue_Element;
typedef struct WaveArea_Infomeation;
typedef struct _anon0;
typedef struct HH_Object_Water_15;
typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_ElementOption;
typedef struct Wave_Element;
typedef struct WaveArea_GridLink_Infomeation;


typedef WaveArea_GridLink_Infomeation type_0[1];
typedef unsigned int type_1[4];
typedef char type_2[80];
typedef unsigned int type_3[4];
typedef float type_4[4][2];
typedef float type_5[2];
typedef unsigned long type_6[2];
typedef int type_7[2];
typedef WaveArea_GridLink_Infomeation type_8[1];
typedef int type_9[4];
typedef float type_10[4];
typedef WaveArea_Infomeation type_11[4];
typedef unsigned long type_12[2];
typedef unsigned int type_13[1];
typedef float type_14[4];
typedef float type_15[4][4];
typedef unsigned int type_16[2];
typedef unsigned int type_17[2][4];
typedef unsigned int type_18[2];
typedef unsigned int type_19[3];
typedef float* type_20[2];
typedef Wave_Element type_21[20];
typedef float type_22[261];
typedef WaveArea_GridLink_Infomeation type_23[1];
typedef float type_24[477];
typedef unsigned int type_25[2];
typedef float type_26[273];
typedef unsigned int type_27[2];
typedef float type_28[136];
typedef unsigned int type_29[2];
typedef float* type_30[4];
typedef float type_31[4];
typedef unsigned int type_32[4];
typedef unsigned int type_33[2];
typedef unsigned int type_34[3];

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

struct HH_Object_Water_15
{
	Object_DataBlock_Header Header;
	unsigned char Step;
	unsigned char Motion_Step;
	float Timer;
	float ST_Defference[4];
	Wave_Element Wave_Info[20];
	float Area00_Grid_Y_Value[261];
	float Area01_Grid_Y_Value[477];
	float Area02_Grid_Y_Value[273];
	float Area03_Grid_Y_Value[136];
	float* pArea_Grid_Y_Value_Table[4];
	float Area_WavePostTime[4];
	unsigned int Area_Enable_Table[4];
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
unsigned int _area01_view_list[4];
unsigned int _area02_view_list[3];
unsigned int _area03_view_list[4];
WaveArea_Infomeation _Area_Info_List[4];
WaveArea_GridLink_Infomeation _area00_01_grid_link_list[1];
WaveArea_GridLink_Infomeation _area01_02_grid_link_list[1];
WaveArea_GridLink_Infomeation _area01_03_grid_link_list[1];

void Grid_Work_Initialize(HH_Object_Water_15* pThis);
unsigned int Object_Initialize(HH_Object_Water_15* pThis);
void CurrentPosition_AreaIndex_Calculator(ImpactQueue_Element* pElement, WaveArea_Infomeation* pInfo, unsigned int* pX_Index, unsigned int* pZ_Index);
float Specular_Calculator(float* View_Direction, float* Light_Direction, float* Normal_Vector);
void SpecularRGBA_Calculator(int* iRGBA, float* RGBA_Base, float* RGBA_Specular_Base, float Specular_Ratio);
unsigned int Object_Draw(HH_Object_Water_15* pThis, float* pGrid_Y_Value, float* WorldLocation, unsigned int Grid_X_Max, unsigned int Grid_Z_Max);
unsigned int HH_Class_Prefix_Water_15();
unsigned int HH_Class_Suffix_Water_15();
unsigned int HH_Class_Water_15(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x264e30
void Grid_Work_Initialize(HH_Object_Water_15* pThis)
{
	// Line 230, Address: 0x264e30, Func Offset: 0
	// Line 232, Address: 0x264e40, Func Offset: 0x10
	// Line 233, Address: 0x264e54, Func Offset: 0x24
	// Line 234, Address: 0x264e68, Func Offset: 0x38
	// Line 235, Address: 0x264e7c, Func Offset: 0x4c
	// Line 236, Address: 0x264e90, Func Offset: 0x60
	// Func End, Address: 0x264ea4, Func Offset: 0x74
}

// 
// Start address: 0x264eb0
unsigned int Object_Initialize(HH_Object_Water_15* pThis)
{
	unsigned int result;
	// Line 249, Address: 0x264eb0, Func Offset: 0
	// Line 257, Address: 0x264ec0, Func Offset: 0x10
	// Line 259, Address: 0x264ec4, Func Offset: 0x14
	// Line 261, Address: 0x264ec8, Func Offset: 0x18
	// Line 263, Address: 0x264ee8, Func Offset: 0x38
	// Line 264, Address: 0x264eec, Func Offset: 0x3c
	// Line 265, Address: 0x264ef0, Func Offset: 0x40
	// Line 266, Address: 0x264ef4, Func Offset: 0x44
	// Line 268, Address: 0x264ef8, Func Offset: 0x48
	// Line 269, Address: 0x264f00, Func Offset: 0x50
	// Line 270, Address: 0x264f08, Func Offset: 0x58
	// Line 271, Address: 0x264f10, Func Offset: 0x60
	// Line 273, Address: 0x264f18, Func Offset: 0x68
	// Line 274, Address: 0x264f20, Func Offset: 0x70
	// Line 275, Address: 0x264f28, Func Offset: 0x78
	// Line 276, Address: 0x264f30, Func Offset: 0x80
	// Line 278, Address: 0x264f38, Func Offset: 0x88
	// Line 279, Address: 0x264f40, Func Offset: 0x90
	// Line 281, Address: 0x264f50, Func Offset: 0xa0
	// Line 282, Address: 0x264f58, Func Offset: 0xa8
	// Line 283, Address: 0x264f60, Func Offset: 0xb0
	// Line 334, Address: 0x264f68, Func Offset: 0xb8
	// Line 335, Address: 0x264f6c, Func Offset: 0xbc
	// Func End, Address: 0x264f80, Func Offset: 0xd0
}

// 
// Start address: 0x264f80
void CurrentPosition_AreaIndex_Calculator(ImpactQueue_Element* pElement, WaveArea_Infomeation* pInfo, unsigned int* pX_Index, unsigned int* pZ_Index)
{
	float check_pos[4];
	// Line 340, Address: 0x264f80, Func Offset: 0
	// Line 343, Address: 0x264fa0, Func Offset: 0x20
	// Line 344, Address: 0x264fb4, Func Offset: 0x34
	// Line 345, Address: 0x264fdc, Func Offset: 0x5c
	// Line 346, Address: 0x265004, Func Offset: 0x84
	// Func End, Address: 0x26501c, Func Offset: 0x9c
}

// 
// Start address: 0x265020
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
	// Line 359, Address: 0x265020, Func Offset: 0
	// Line 372, Address: 0x265040, Func Offset: 0x20
	// Line 373, Address: 0x265050, Func Offset: 0x30
	// Line 374, Address: 0x265068, Func Offset: 0x48
	// Line 376, Address: 0x26506c, Func Offset: 0x4c
	// Line 377, Address: 0x26508c, Func Offset: 0x6c
	// Line 378, Address: 0x2650a0, Func Offset: 0x80
	// Line 380, Address: 0x2650b0, Func Offset: 0x90
	// Line 381, Address: 0x2650c0, Func Offset: 0xa0
	// Line 382, Address: 0x2650d8, Func Offset: 0xb8
	// Line 403, Address: 0x2650dc, Func Offset: 0xbc
	// Line 406, Address: 0x26512c, Func Offset: 0x10c
	// Func End, Address: 0x265148, Func Offset: 0x128
}

// 
// Start address: 0x265150
void SpecularRGBA_Calculator(int* iRGBA, float* RGBA_Base, float* RGBA_Specular_Base, float Specular_Ratio)
{
	// Line 420, Address: 0x265150, Func Offset: 0
	// Line 423, Address: 0x265158, Func Offset: 0x8
	// Line 424, Address: 0x26515c, Func Offset: 0xc
	// Line 425, Address: 0x265160, Func Offset: 0x10
	// Line 426, Address: 0x265164, Func Offset: 0x14
	// Line 427, Address: 0x265168, Func Offset: 0x18
	// Line 428, Address: 0x26516c, Func Offset: 0x1c
	// Line 429, Address: 0x265170, Func Offset: 0x20
	// Line 430, Address: 0x265174, Func Offset: 0x24
	// Line 431, Address: 0x265178, Func Offset: 0x28
	// Line 432, Address: 0x26517c, Func Offset: 0x2c
	// Line 433, Address: 0x265180, Func Offset: 0x30
	// Line 434, Address: 0x265184, Func Offset: 0x34
	// Line 438, Address: 0x265188, Func Offset: 0x38
	// Func End, Address: 0x265190, Func Offset: 0x40
}

// 
// Start address: 0x265190
unsigned int Object_Draw(HH_Object_Water_15* pThis, float* pGrid_Y_Value, float* WorldLocation, unsigned int Grid_X_Max, unsigned int Grid_Z_Max)
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
	// Line 451, Address: 0x265190, Func Offset: 0
	// Line 482, Address: 0x2651dc, Func Offset: 0x4c
	// Line 485, Address: 0x2651e8, Func Offset: 0x58
	// Line 501, Address: 0x2651f0, Func Offset: 0x60
	// Line 505, Address: 0x2651f4, Func Offset: 0x64
	// Line 506, Address: 0x265200, Func Offset: 0x70
	// Line 507, Address: 0x26520c, Func Offset: 0x7c
	// Line 508, Address: 0x265224, Func Offset: 0x94
	// Line 509, Address: 0x26523c, Func Offset: 0xac
	// Line 511, Address: 0x265254, Func Offset: 0xc4
	// Line 512, Address: 0x265260, Func Offset: 0xd0
	// Line 514, Address: 0x26526c, Func Offset: 0xdc
	// Line 515, Address: 0x265270, Func Offset: 0xe0
	// Line 517, Address: 0x265274, Func Offset: 0xe4
	// Line 520, Address: 0x265284, Func Offset: 0xf4
	// Line 525, Address: 0x265298, Func Offset: 0x108
	// Line 527, Address: 0x2652a4, Func Offset: 0x114
	// Line 529, Address: 0x2652b0, Func Offset: 0x120
	// Line 530, Address: 0x2652c4, Func Offset: 0x134
	// Line 533, Address: 0x2652d8, Func Offset: 0x148
	// Line 534, Address: 0x2652e4, Func Offset: 0x154
	// Line 538, Address: 0x2652f8, Func Offset: 0x168
	// Line 540, Address: 0x265300, Func Offset: 0x170
	// Line 543, Address: 0x26530c, Func Offset: 0x17c
	// Line 544, Address: 0x265318, Func Offset: 0x188
	// Line 545, Address: 0x265374, Func Offset: 0x1e4
	// Line 546, Address: 0x2653d8, Func Offset: 0x248
	// Line 548, Address: 0x2653f0, Func Offset: 0x260
	// Line 550, Address: 0x265408, Func Offset: 0x278
	// Line 558, Address: 0x265410, Func Offset: 0x280
	// Line 559, Address: 0x26542c, Func Offset: 0x29c
	// Line 561, Address: 0x265430, Func Offset: 0x2a0
	// Line 574, Address: 0x26543c, Func Offset: 0x2ac
	// Line 576, Address: 0x265488, Func Offset: 0x2f8
	// Line 577, Address: 0x2654e8, Func Offset: 0x358
	// Line 578, Address: 0x265504, Func Offset: 0x374
	// Line 579, Address: 0x265524, Func Offset: 0x394
	// Line 584, Address: 0x265538, Func Offset: 0x3a8
	// Line 586, Address: 0x265560, Func Offset: 0x3d0
	// Line 587, Address: 0x265580, Func Offset: 0x3f0
	// Line 588, Address: 0x26558c, Func Offset: 0x3fc
	// Line 590, Address: 0x265598, Func Offset: 0x408
	// Line 591, Address: 0x2655ac, Func Offset: 0x41c
	// Line 594, Address: 0x2655c0, Func Offset: 0x430
	// Line 595, Address: 0x2655d4, Func Offset: 0x444
	// Line 597, Address: 0x2655e8, Func Offset: 0x458
	// Line 598, Address: 0x2655f8, Func Offset: 0x468
	// Line 599, Address: 0x265608, Func Offset: 0x478
	// Line 600, Address: 0x265610, Func Offset: 0x480
	// Line 602, Address: 0x265614, Func Offset: 0x484
	// Line 604, Address: 0x265628, Func Offset: 0x498
	// Line 610, Address: 0x265640, Func Offset: 0x4b0
	// Line 611, Address: 0x265648, Func Offset: 0x4b8
	// Line 613, Address: 0x265668, Func Offset: 0x4d8
	// Line 615, Address: 0x265684, Func Offset: 0x4f4
	// Line 617, Address: 0x26569c, Func Offset: 0x50c
	// Line 618, Address: 0x2656b4, Func Offset: 0x524
	// Line 619, Address: 0x2656c8, Func Offset: 0x538
	// Line 621, Address: 0x2656d0, Func Offset: 0x540
	// Line 622, Address: 0x2656e4, Func Offset: 0x554
	// Line 623, Address: 0x2656f8, Func Offset: 0x568
	// Line 625, Address: 0x265714, Func Offset: 0x584
	// Line 626, Address: 0x26572c, Func Offset: 0x59c
	// Line 627, Address: 0x265748, Func Offset: 0x5b8
	// Line 629, Address: 0x265750, Func Offset: 0x5c0
	// Line 634, Address: 0x265760, Func Offset: 0x5d0
	// Line 635, Address: 0x265770, Func Offset: 0x5e0
	// Line 636, Address: 0x26577c, Func Offset: 0x5ec
	// Line 637, Address: 0x26578c, Func Offset: 0x5fc
	// Line 638, Address: 0x265798, Func Offset: 0x608
	// Line 639, Address: 0x2657a8, Func Offset: 0x618
	// Line 640, Address: 0x2657b4, Func Offset: 0x624
	// Line 646, Address: 0x2657bc, Func Offset: 0x62c
	// Line 653, Address: 0x2657c8, Func Offset: 0x638
	// Line 656, Address: 0x2657e8, Func Offset: 0x658
	// Line 658, Address: 0x265804, Func Offset: 0x674
	// Line 660, Address: 0x26581c, Func Offset: 0x68c
	// Line 661, Address: 0x265834, Func Offset: 0x6a4
	// Line 662, Address: 0x265848, Func Offset: 0x6b8
	// Line 664, Address: 0x265850, Func Offset: 0x6c0
	// Line 665, Address: 0x265864, Func Offset: 0x6d4
	// Line 666, Address: 0x265878, Func Offset: 0x6e8
	// Line 668, Address: 0x265894, Func Offset: 0x704
	// Line 669, Address: 0x2658ac, Func Offset: 0x71c
	// Line 670, Address: 0x2658c8, Func Offset: 0x738
	// Line 672, Address: 0x2658d0, Func Offset: 0x740
	// Line 678, Address: 0x2658e0, Func Offset: 0x750
	// Line 679, Address: 0x2658e8, Func Offset: 0x758
	// Line 682, Address: 0x2658f0, Func Offset: 0x760
	// Line 683, Address: 0x265900, Func Offset: 0x770
	// Line 684, Address: 0x26590c, Func Offset: 0x77c
	// Line 685, Address: 0x26591c, Func Offset: 0x78c
	// Line 686, Address: 0x265928, Func Offset: 0x798
	// Line 687, Address: 0x265938, Func Offset: 0x7a8
	// Line 688, Address: 0x265944, Func Offset: 0x7b4
	// Line 689, Address: 0x265954, Func Offset: 0x7c4
	// Line 690, Address: 0x265960, Func Offset: 0x7d0
	// Line 691, Address: 0x265978, Func Offset: 0x7e8
	// Line 694, Address: 0x26597c, Func Offset: 0x7ec
	// Line 696, Address: 0x26598c, Func Offset: 0x7fc
	// Line 698, Address: 0x2659a4, Func Offset: 0x814
	// Line 700, Address: 0x2659ac, Func Offset: 0x81c
	// Line 701, Address: 0x2659b0, Func Offset: 0x820
	// Func End, Address: 0x2659f0, Func Offset: 0x860
}

// 
// Start address: 0x2659f0
unsigned int HH_Class_Prefix_Water_15()
{
	unsigned long tex0;
	_anon0* pPk;
	unsigned int result;
	// Line 721, Address: 0x2659f0, Func Offset: 0
	// Line 723, Address: 0x2659fc, Func Offset: 0xc
	// Line 726, Address: 0x265a08, Func Offset: 0x18
	// Line 729, Address: 0x265a10, Func Offset: 0x20
	// Line 730, Address: 0x265a20, Func Offset: 0x30
	// Line 732, Address: 0x265a34, Func Offset: 0x44
	// Line 733, Address: 0x265a58, Func Offset: 0x68
	// Line 735, Address: 0x265a74, Func Offset: 0x84
	// Line 737, Address: 0x265a7c, Func Offset: 0x8c
	// Line 738, Address: 0x265a80, Func Offset: 0x90
	// Func End, Address: 0x265a94, Func Offset: 0xa4
}

// 
// Start address: 0x265aa0
unsigned int HH_Class_Suffix_Water_15()
{
	_anon0* pPk;
	unsigned int result;
	// Line 751, Address: 0x265aa0, Func Offset: 0
	// Line 753, Address: 0x265aac, Func Offset: 0xc
	// Line 755, Address: 0x265ab8, Func Offset: 0x18
	// Line 756, Address: 0x265ac0, Func Offset: 0x20
	// Line 757, Address: 0x265ad4, Func Offset: 0x34
	// Line 759, Address: 0x265adc, Func Offset: 0x3c
	// Line 760, Address: 0x265ae0, Func Offset: 0x40
	// Func End, Address: 0x265af4, Func Offset: 0x54
}

// 
// Start address: 0x265b00
unsigned int HH_Class_Water_15(void* pBlock, ImpactQueue_Element* pElement)
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
	float pos[4];
	float rad;
	float rad_omega;
	HH_Object_Water_15* pThis;
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
	// Line 774, Address: 0x265b00, Func Offset: 0
	// Line 781, Address: 0x265b2c, Func Offset: 0x2c
	// Line 782, Address: 0x265b30, Func Offset: 0x30
	// Line 784, Address: 0x265b34, Func Offset: 0x34
	// Line 787, Address: 0x265b5c, Func Offset: 0x5c
	// Line 789, Address: 0x265b64, Func Offset: 0x64
	// Line 790, Address: 0x265b6c, Func Offset: 0x6c
	// Line 794, Address: 0x265b74, Func Offset: 0x74
	// Line 802, Address: 0x265b7c, Func Offset: 0x7c
	// Line 803, Address: 0x265b94, Func Offset: 0x94
	// Line 805, Address: 0x265c54, Func Offset: 0x154
	// Line 806, Address: 0x265c98, Func Offset: 0x198
	// Line 814, Address: 0x265cdc, Func Offset: 0x1dc
	// Line 815, Address: 0x265ce8, Func Offset: 0x1e8
	// Line 817, Address: 0x265d04, Func Offset: 0x204
	// Line 818, Address: 0x265d14, Func Offset: 0x214
	// Line 819, Address: 0x265d20, Func Offset: 0x220
	// Line 832, Address: 0x265d3c, Func Offset: 0x23c
	// Line 833, Address: 0x265d48, Func Offset: 0x248
	// Line 835, Address: 0x265d64, Func Offset: 0x264
	// Line 844, Address: 0x265d70, Func Offset: 0x270
	// Line 845, Address: 0x265d9c, Func Offset: 0x29c
	// Line 846, Address: 0x265da4, Func Offset: 0x2a4
	// Line 847, Address: 0x265da8, Func Offset: 0x2a8
	// Line 848, Address: 0x265db0, Func Offset: 0x2b0
	// Line 850, Address: 0x265db8, Func Offset: 0x2b8
	// Line 851, Address: 0x265dc4, Func Offset: 0x2c4
	// Line 852, Address: 0x265dd0, Func Offset: 0x2d0
	// Line 853, Address: 0x265ddc, Func Offset: 0x2dc
	// Line 854, Address: 0x265df8, Func Offset: 0x2f8
	// Line 855, Address: 0x265e04, Func Offset: 0x304
	// Line 857, Address: 0x265e08, Func Offset: 0x308
	// Line 859, Address: 0x265e1c, Func Offset: 0x31c
	// Line 868, Address: 0x265e20, Func Offset: 0x320
	// Line 869, Address: 0x265e2c, Func Offset: 0x32c
	// Line 872, Address: 0x265e40, Func Offset: 0x340
	// Line 878, Address: 0x265e68, Func Offset: 0x368
	// Line 880, Address: 0x265e80, Func Offset: 0x380
	// Line 881, Address: 0x265e9c, Func Offset: 0x39c
	// Line 883, Address: 0x265eb8, Func Offset: 0x3b8
	// Line 884, Address: 0x265edc, Func Offset: 0x3dc
	// Line 885, Address: 0x265f00, Func Offset: 0x400
	// Line 886, Address: 0x265f04, Func Offset: 0x404
	// Line 888, Address: 0x265f0c, Func Offset: 0x40c
	// Line 890, Address: 0x265f14, Func Offset: 0x414
	// Line 892, Address: 0x265f1c, Func Offset: 0x41c
	// Line 893, Address: 0x265f40, Func Offset: 0x440
	// Line 894, Address: 0x265f44, Func Offset: 0x444
	// Line 896, Address: 0x265f4c, Func Offset: 0x44c
	// Line 898, Address: 0x265f54, Func Offset: 0x454
	// Line 900, Address: 0x265f58, Func Offset: 0x458
	// Line 901, Address: 0x265f60, Func Offset: 0x460
	// Line 902, Address: 0x265f64, Func Offset: 0x464
	// Line 903, Address: 0x265f68, Func Offset: 0x468
	// Line 905, Address: 0x265f6c, Func Offset: 0x46c
	// Line 906, Address: 0x265f78, Func Offset: 0x478
	// Line 907, Address: 0x265f84, Func Offset: 0x484
	// Line 908, Address: 0x265f90, Func Offset: 0x490
	// Line 909, Address: 0x265fac, Func Offset: 0x4ac
	// Line 910, Address: 0x265fb8, Func Offset: 0x4b8
	// Line 912, Address: 0x265fbc, Func Offset: 0x4bc
	// Line 913, Address: 0x265fd0, Func Offset: 0x4d0
	// Line 915, Address: 0x265fd8, Func Offset: 0x4d8
	// Line 919, Address: 0x265fec, Func Offset: 0x4ec
	// Line 923, Address: 0x265ff4, Func Offset: 0x4f4
	// Line 924, Address: 0x266000, Func Offset: 0x500
	// Line 925, Address: 0x266014, Func Offset: 0x514
	// Line 927, Address: 0x26602c, Func Offset: 0x52c
	// Line 929, Address: 0x266040, Func Offset: 0x540
	// Line 932, Address: 0x266054, Func Offset: 0x554
	// Line 933, Address: 0x266064, Func Offset: 0x564
	// Line 934, Address: 0x266074, Func Offset: 0x574
	// Line 936, Address: 0x266084, Func Offset: 0x584
	// Line 937, Address: 0x266090, Func Offset: 0x590
	// Line 938, Address: 0x2660a4, Func Offset: 0x5a4
	// Line 940, Address: 0x2660bc, Func Offset: 0x5bc
	// Line 941, Address: 0x2660d4, Func Offset: 0x5d4
	// Line 942, Address: 0x2660d8, Func Offset: 0x5d8
	// Line 943, Address: 0x2660ec, Func Offset: 0x5ec
	// Line 945, Address: 0x2660fc, Func Offset: 0x5fc
	// Line 953, Address: 0x266104, Func Offset: 0x604
	// Line 955, Address: 0x266124, Func Offset: 0x624
	// Line 956, Address: 0x26614c, Func Offset: 0x64c
	// Line 957, Address: 0x266164, Func Offset: 0x664
	// Line 958, Address: 0x26618c, Func Offset: 0x68c
	// Line 959, Address: 0x2661a4, Func Offset: 0x6a4
	// Line 960, Address: 0x2661cc, Func Offset: 0x6cc
	// Line 961, Address: 0x2661e4, Func Offset: 0x6e4
	// Line 962, Address: 0x266204, Func Offset: 0x704
	// Line 964, Address: 0x26621c, Func Offset: 0x71c
	// Line 965, Address: 0x266238, Func Offset: 0x738
	// Line 966, Address: 0x26624c, Func Offset: 0x74c
	// Line 969, Address: 0x266260, Func Offset: 0x760
	// Line 970, Address: 0x26627c, Func Offset: 0x77c
	// Line 972, Address: 0x266294, Func Offset: 0x794
	// Line 973, Address: 0x2662b0, Func Offset: 0x7b0
	// Line 975, Address: 0x2662c8, Func Offset: 0x7c8
	// Line 976, Address: 0x2662e4, Func Offset: 0x7e4
	// Line 978, Address: 0x2662fc, Func Offset: 0x7fc
	// Line 979, Address: 0x266318, Func Offset: 0x818
	// Line 981, Address: 0x266330, Func Offset: 0x830
	// Line 982, Address: 0x26634c, Func Offset: 0x84c
	// Line 984, Address: 0x266364, Func Offset: 0x864
	// Line 985, Address: 0x266380, Func Offset: 0x880
	// Line 990, Address: 0x266398, Func Offset: 0x898
	// Line 991, Address: 0x2663b4, Func Offset: 0x8b4
	// Line 994, Address: 0x2663bc, Func Offset: 0x8bc
	// Line 995, Address: 0x2663c0, Func Offset: 0x8c0
	// Line 998, Address: 0x2663c4, Func Offset: 0x8c4
	// Line 999, Address: 0x2663c8, Func Offset: 0x8c8
	// Func End, Address: 0x2663f8, Func Offset: 0x8f8
}

