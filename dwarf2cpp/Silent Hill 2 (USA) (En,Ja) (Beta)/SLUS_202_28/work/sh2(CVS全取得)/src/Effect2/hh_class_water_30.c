typedef struct HH_Object_Water_30;
typedef struct Object_DataBlock_Header;
typedef struct WaveArea_Infomeation;
typedef struct ImpactQueue_ElementOption;
typedef struct _anon0;
typedef struct ImpactQueue_Element;
typedef struct Wave_Element;
typedef struct _anon1;


typedef unsigned int type_0[1];
typedef unsigned long type_1[2];
typedef unsigned long type_2[2];
typedef float type_3[4][2];
typedef float type_4[2];
typedef int type_5[2];
typedef WaveArea_Infomeation type_6[1];
typedef int type_7[4];
typedef float type_8[4];
typedef unsigned int type_9[1];
typedef float type_10[4];
typedef float type_11[4][4];
typedef unsigned int type_12[255];
typedef Wave_Element type_13[20];
typedef float type_14[320];
typedef unsigned int type_15[32];
typedef unsigned int type_16[2];
typedef unsigned char type_17[4];
typedef float* type_18[1];
typedef unsigned int type_19[2][4];
typedef char type_20[4];
typedef float type_21[1];
typedef char type_22[4];
typedef unsigned int type_23[2];
typedef unsigned int type_24[1];
typedef char type_25[4];
typedef char type_26[4];
typedef char type_27[4];
typedef unsigned int type_28[2];

struct HH_Object_Water_30
{
	Object_DataBlock_Header Header;
	unsigned char Step;
	unsigned char Motion_Step;
	float Timer;
	float ST_Defference[4];
	float Location_Defference[4];
	Wave_Element Wave_Info[20];
	float Area00_Grid_Y_Value[320];
	float* pArea_Grid_Y_Value_Table[1];
	float Area_WavePostTime[1];
	unsigned int Area_Enable_Table[1];
};

struct Object_DataBlock_Header
{
	unsigned int Enable;
	Object_DataBlock_Header* pNext;
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

struct ImpactQueue_Element
{
	unsigned int Class_Descriptor;
	unsigned int hInstance;
	unsigned int* pResultHandle_Address;
	unsigned int Reserved[1];
	ImpactQueue_ElementOption Option;
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

struct _anon1
{
	unsigned int flag[255];
	float time_deai;
	unsigned int enemy[32];
	unsigned char safe[4];
	char rotate[4];
	char guruguru[4];
	char cylinder[4];
	unsigned short clock;
	unsigned short carbon;
	char runaway[4];
	unsigned short hanging;
	short pad;
	char trunk[4];
};

unsigned int _area00_view_list[1];
WaveArea_Infomeation _Area_Info_List[1];
_anon1 game_flag;

void Grid_Work_Initialize(HH_Object_Water_30* pThis);
unsigned int Object_Initialize(HH_Object_Water_30* pThis);
void CurrentPosition_AreaIndex_Calculator(ImpactQueue_Element* pElement, WaveArea_Infomeation* pInfo, unsigned int* pX_Index, unsigned int* pZ_Index);
float Specular_Calculator(float* View_Direction, float* Light_Direction, float* Normal_Vector);
void SpecularRGBA_Calculator(int* iRGBA, float* RGBA_Base, float* RGBA_Specular_Base, float Specular_Ratio);
unsigned int Object_Draw(float* pGrid_Y_Value, float* WorldLocation, unsigned int Grid_X_Max, unsigned int Grid_Z_Max);
unsigned int HH_Class_Prefix_Water_30();
unsigned int HH_Class_Suffix_Water_30();
unsigned int HH_Class_Water_30(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x266c60
void Grid_Work_Initialize(HH_Object_Water_30* pThis)
{
	// Line 163, Address: 0x266c60, Func Offset: 0
	// Line 165, Address: 0x266c68, Func Offset: 0x8
	// Line 166, Address: 0x266c7c, Func Offset: 0x1c
	// Func End, Address: 0x266c8c, Func Offset: 0x2c
}

// 
// Start address: 0x266c90
unsigned int Object_Initialize(HH_Object_Water_30* pThis)
{
	unsigned int result;
	// Line 179, Address: 0x266c90, Func Offset: 0
	// Line 187, Address: 0x266ca0, Func Offset: 0x10
	// Line 189, Address: 0x266ca4, Func Offset: 0x14
	// Line 191, Address: 0x266ca8, Func Offset: 0x18
	// Line 192, Address: 0x266cc8, Func Offset: 0x38
	// Line 194, Address: 0x266ce8, Func Offset: 0x58
	// Line 196, Address: 0x266cec, Func Offset: 0x5c
	// Line 198, Address: 0x266cf4, Func Offset: 0x64
	// Line 250, Address: 0x266cfc, Func Offset: 0x6c
	// Line 251, Address: 0x266d00, Func Offset: 0x70
	// Func End, Address: 0x266d14, Func Offset: 0x84
}

// 
// Start address: 0x266d20
void CurrentPosition_AreaIndex_Calculator(ImpactQueue_Element* pElement, WaveArea_Infomeation* pInfo, unsigned int* pX_Index, unsigned int* pZ_Index)
{
	float check_pos[4];
	// Line 256, Address: 0x266d20, Func Offset: 0
	// Line 259, Address: 0x266d40, Func Offset: 0x20
	// Line 260, Address: 0x266d54, Func Offset: 0x34
	// Line 261, Address: 0x266d7c, Func Offset: 0x5c
	// Line 262, Address: 0x266da4, Func Offset: 0x84
	// Func End, Address: 0x266dbc, Func Offset: 0x9c
}

// 
// Start address: 0x266dc0
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
	// Line 275, Address: 0x266dc0, Func Offset: 0
	// Line 288, Address: 0x266de0, Func Offset: 0x20
	// Line 289, Address: 0x266df0, Func Offset: 0x30
	// Line 290, Address: 0x266e08, Func Offset: 0x48
	// Line 292, Address: 0x266e0c, Func Offset: 0x4c
	// Line 293, Address: 0x266e2c, Func Offset: 0x6c
	// Line 294, Address: 0x266e40, Func Offset: 0x80
	// Line 296, Address: 0x266e50, Func Offset: 0x90
	// Line 297, Address: 0x266e60, Func Offset: 0xa0
	// Line 298, Address: 0x266e78, Func Offset: 0xb8
	// Line 319, Address: 0x266e7c, Func Offset: 0xbc
	// Line 322, Address: 0x266ecc, Func Offset: 0x10c
	// Func End, Address: 0x266ee8, Func Offset: 0x128
}

// 
// Start address: 0x266ef0
void SpecularRGBA_Calculator(int* iRGBA, float* RGBA_Base, float* RGBA_Specular_Base, float Specular_Ratio)
{
	// Line 338, Address: 0x266ef0, Func Offset: 0
	// Line 341, Address: 0x266ef8, Func Offset: 0x8
	// Line 342, Address: 0x266efc, Func Offset: 0xc
	// Line 343, Address: 0x266f00, Func Offset: 0x10
	// Line 344, Address: 0x266f04, Func Offset: 0x14
	// Line 345, Address: 0x266f08, Func Offset: 0x18
	// Line 346, Address: 0x266f0c, Func Offset: 0x1c
	// Line 347, Address: 0x266f10, Func Offset: 0x20
	// Line 348, Address: 0x266f14, Func Offset: 0x24
	// Line 349, Address: 0x266f18, Func Offset: 0x28
	// Line 350, Address: 0x266f1c, Func Offset: 0x2c
	// Line 351, Address: 0x266f20, Func Offset: 0x30
	// Line 352, Address: 0x266f24, Func Offset: 0x34
	// Line 373, Address: 0x266f28, Func Offset: 0x38
	// Func End, Address: 0x266f30, Func Offset: 0x40
}

// 
// Start address: 0x266f30
unsigned int Object_Draw(float* pGrid_Y_Value, float* WorldLocation, unsigned int Grid_X_Max, unsigned int Grid_Z_Max)
{
	float color_scale;
	float color_scale;
	float stq1[4];
	float stq0[4];
	float now_s;
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
	float tex_t_w;
	float tex_s_w;
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
	unsigned long _GifTag_Tri[2];
	float light_alpha;
	float amb_alpha;
	float Amb_Base[4];
	float Light_Base[4];
	// Line 386, Address: 0x266f30, Func Offset: 0
	// Line 417, Address: 0x266f78, Func Offset: 0x48
	// Line 420, Address: 0x266f84, Func Offset: 0x54
	// Line 446, Address: 0x266f8c, Func Offset: 0x5c
	// Line 447, Address: 0x266fe4, Func Offset: 0xb4
	// Line 448, Address: 0x26702c, Func Offset: 0xfc
	// Line 452, Address: 0x267030, Func Offset: 0x100
	// Line 453, Address: 0x26703c, Func Offset: 0x10c
	// Line 454, Address: 0x267048, Func Offset: 0x118
	// Line 455, Address: 0x267060, Func Offset: 0x130
	// Line 457, Address: 0x267078, Func Offset: 0x148
	// Line 462, Address: 0x267090, Func Offset: 0x160
	// Line 463, Address: 0x26709c, Func Offset: 0x16c
	// Line 465, Address: 0x2670a8, Func Offset: 0x178
	// Line 466, Address: 0x2670ac, Func Offset: 0x17c
	// Line 468, Address: 0x2670b0, Func Offset: 0x180
	// Line 471, Address: 0x2670c0, Func Offset: 0x190
	// Line 476, Address: 0x2670d4, Func Offset: 0x1a4
	// Line 481, Address: 0x2670e0, Func Offset: 0x1b0
	// Line 483, Address: 0x2670ec, Func Offset: 0x1bc
	// Line 484, Address: 0x267100, Func Offset: 0x1d0
	// Line 487, Address: 0x267114, Func Offset: 0x1e4
	// Line 488, Address: 0x267120, Func Offset: 0x1f0
	// Line 492, Address: 0x267134, Func Offset: 0x204
	// Line 494, Address: 0x26713c, Func Offset: 0x20c
	// Line 497, Address: 0x267148, Func Offset: 0x218
	// Line 498, Address: 0x267154, Func Offset: 0x224
	// Line 499, Address: 0x2671b0, Func Offset: 0x280
	// Line 500, Address: 0x267214, Func Offset: 0x2e4
	// Line 503, Address: 0x26722c, Func Offset: 0x2fc
	// Line 505, Address: 0x267244, Func Offset: 0x314
	// Line 513, Address: 0x26724c, Func Offset: 0x31c
	// Line 516, Address: 0x267268, Func Offset: 0x338
	// Line 526, Address: 0x267274, Func Offset: 0x344
	// Line 527, Address: 0x2672c0, Func Offset: 0x390
	// Line 528, Address: 0x267328, Func Offset: 0x3f8
	// Line 531, Address: 0x267394, Func Offset: 0x464
	// Line 533, Address: 0x2673e0, Func Offset: 0x4b0
	// Line 534, Address: 0x267440, Func Offset: 0x510
	// Line 535, Address: 0x267458, Func Offset: 0x528
	// Line 536, Address: 0x267474, Func Offset: 0x544
	// Line 543, Address: 0x267488, Func Offset: 0x558
	// Line 544, Address: 0x26749c, Func Offset: 0x56c
	// Line 546, Address: 0x2674b0, Func Offset: 0x580
	// Line 547, Address: 0x2674c0, Func Offset: 0x590
	// Line 548, Address: 0x2674d0, Func Offset: 0x5a0
	// Line 549, Address: 0x2674d8, Func Offset: 0x5a8
	// Line 551, Address: 0x2674dc, Func Offset: 0x5ac
	// Line 553, Address: 0x2674f0, Func Offset: 0x5c0
	// Line 559, Address: 0x267508, Func Offset: 0x5d8
	// Line 562, Address: 0x267510, Func Offset: 0x5e0
	// Line 564, Address: 0x267530, Func Offset: 0x600
	// Line 566, Address: 0x26754c, Func Offset: 0x61c
	// Line 573, Address: 0x267564, Func Offset: 0x634
	// Line 575, Address: 0x267578, Func Offset: 0x648
	// Line 576, Address: 0x26758c, Func Offset: 0x65c
	// Line 579, Address: 0x2675a8, Func Offset: 0x678
	// Line 597, Address: 0x2675c4, Func Offset: 0x694
	// Line 598, Address: 0x2675d4, Func Offset: 0x6a4
	// Line 599, Address: 0x2675e0, Func Offset: 0x6b0
	// Line 600, Address: 0x2675f0, Func Offset: 0x6c0
	// Line 601, Address: 0x2675fc, Func Offset: 0x6cc
	// Line 602, Address: 0x26760c, Func Offset: 0x6dc
	// Line 603, Address: 0x267618, Func Offset: 0x6e8
	// Line 609, Address: 0x267620, Func Offset: 0x6f0
	// Line 610, Address: 0x26762c, Func Offset: 0x6fc
	// Line 617, Address: 0x267630, Func Offset: 0x700
	// Line 620, Address: 0x267650, Func Offset: 0x720
	// Line 622, Address: 0x26766c, Func Offset: 0x73c
	// Line 630, Address: 0x267684, Func Offset: 0x754
	// Line 632, Address: 0x267698, Func Offset: 0x768
	// Line 633, Address: 0x2676ac, Func Offset: 0x77c
	// Line 636, Address: 0x2676c8, Func Offset: 0x798
	// Line 647, Address: 0x2676e4, Func Offset: 0x7b4
	// Line 648, Address: 0x2676ec, Func Offset: 0x7bc
	// Line 649, Address: 0x2676f4, Func Offset: 0x7c4
	// Line 651, Address: 0x2676f8, Func Offset: 0x7c8
	// Line 652, Address: 0x267708, Func Offset: 0x7d8
	// Line 653, Address: 0x267714, Func Offset: 0x7e4
	// Line 654, Address: 0x267724, Func Offset: 0x7f4
	// Line 655, Address: 0x267730, Func Offset: 0x800
	// Line 656, Address: 0x267740, Func Offset: 0x810
	// Line 657, Address: 0x26774c, Func Offset: 0x81c
	// Line 658, Address: 0x26775c, Func Offset: 0x82c
	// Line 659, Address: 0x267768, Func Offset: 0x838
	// Line 660, Address: 0x26777c, Func Offset: 0x84c
	// Line 663, Address: 0x267780, Func Offset: 0x850
	// Line 665, Address: 0x267790, Func Offset: 0x860
	// Line 667, Address: 0x2677a8, Func Offset: 0x878
	// Line 669, Address: 0x2677b0, Func Offset: 0x880
	// Line 670, Address: 0x2677b4, Func Offset: 0x884
	// Func End, Address: 0x2677f4, Func Offset: 0x8c4
}

// 
// Start address: 0x267800
unsigned int HH_Class_Prefix_Water_30()
{
	unsigned long tex0;
	_anon0* pPk;
	unsigned int result;
	// Line 690, Address: 0x267800, Func Offset: 0
	// Line 692, Address: 0x26780c, Func Offset: 0xc
	// Line 698, Address: 0x267818, Func Offset: 0x18
	// Line 701, Address: 0x267820, Func Offset: 0x20
	// Line 702, Address: 0x267830, Func Offset: 0x30
	// Line 704, Address: 0x267844, Func Offset: 0x44
	// Line 705, Address: 0x267868, Func Offset: 0x68
	// Line 706, Address: 0x267880, Func Offset: 0x80
	// Line 708, Address: 0x26789c, Func Offset: 0x9c
	// Line 710, Address: 0x2678a4, Func Offset: 0xa4
	// Line 711, Address: 0x2678a8, Func Offset: 0xa8
	// Func End, Address: 0x2678bc, Func Offset: 0xbc
}

// 
// Start address: 0x2678c0
unsigned int HH_Class_Suffix_Water_30()
{
	_anon0* pPk;
	unsigned int result;
	// Line 724, Address: 0x2678c0, Func Offset: 0
	// Line 726, Address: 0x2678cc, Func Offset: 0xc
	// Line 728, Address: 0x2678d8, Func Offset: 0x18
	// Line 729, Address: 0x2678e0, Func Offset: 0x20
	// Line 730, Address: 0x2678f4, Func Offset: 0x34
	// Line 731, Address: 0x267918, Func Offset: 0x58
	// Line 733, Address: 0x267920, Func Offset: 0x60
	// Line 734, Address: 0x267924, Func Offset: 0x64
	// Func End, Address: 0x267938, Func Offset: 0x78
}

// 
// Start address: 0x267940
unsigned int HH_Class_Water_30(void* pBlock, ImpactQueue_Element* pElement)
{
	float add_vec[4];
	float world_location[4];
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
	HH_Object_Water_30* pThis;
	unsigned int result;
	float time;
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
	// Line 748, Address: 0x267940, Func Offset: 0
	// Line 755, Address: 0x26796c, Func Offset: 0x2c
	// Line 756, Address: 0x267970, Func Offset: 0x30
	// Line 758, Address: 0x267974, Func Offset: 0x34
	// Line 761, Address: 0x26799c, Func Offset: 0x5c
	// Line 763, Address: 0x2679b4, Func Offset: 0x74
	// Line 766, Address: 0x2679b8, Func Offset: 0x78
	// Line 768, Address: 0x2679c8, Func Offset: 0x88
	// Line 769, Address: 0x2679d0, Func Offset: 0x90
	// Line 773, Address: 0x2679d8, Func Offset: 0x98
	// Line 781, Address: 0x2679e0, Func Offset: 0xa0
	// Line 782, Address: 0x2679f8, Func Offset: 0xb8
	// Line 784, Address: 0x267ab8, Func Offset: 0x178
	// Line 785, Address: 0x267afc, Func Offset: 0x1bc
	// Line 790, Address: 0x267b40, Func Offset: 0x200
	// Line 792, Address: 0x267b5c, Func Offset: 0x21c
	// Line 793, Address: 0x267b6c, Func Offset: 0x22c
	// Line 794, Address: 0x267b78, Func Offset: 0x238
	// Line 795, Address: 0x267b94, Func Offset: 0x254
	// Line 797, Address: 0x267b9c, Func Offset: 0x25c
	// Line 802, Address: 0x267ba4, Func Offset: 0x264
	// Line 803, Address: 0x267bb0, Func Offset: 0x270
	// Line 805, Address: 0x267bcc, Func Offset: 0x28c
	// Line 814, Address: 0x267bd8, Func Offset: 0x298
	// Line 815, Address: 0x267c04, Func Offset: 0x2c4
	// Line 816, Address: 0x267c0c, Func Offset: 0x2cc
	// Line 817, Address: 0x267c10, Func Offset: 0x2d0
	// Line 818, Address: 0x267c18, Func Offset: 0x2d8
	// Line 820, Address: 0x267c20, Func Offset: 0x2e0
	// Line 821, Address: 0x267c2c, Func Offset: 0x2ec
	// Line 822, Address: 0x267c38, Func Offset: 0x2f8
	// Line 823, Address: 0x267c44, Func Offset: 0x304
	// Line 824, Address: 0x267c60, Func Offset: 0x320
	// Line 825, Address: 0x267c6c, Func Offset: 0x32c
	// Line 827, Address: 0x267c70, Func Offset: 0x330
	// Line 829, Address: 0x267c84, Func Offset: 0x344
	// Line 838, Address: 0x267c88, Func Offset: 0x348
	// Line 839, Address: 0x267c94, Func Offset: 0x354
	// Line 842, Address: 0x267ca8, Func Offset: 0x368
	// Line 848, Address: 0x267cd0, Func Offset: 0x390
	// Line 850, Address: 0x267ce8, Func Offset: 0x3a8
	// Line 851, Address: 0x267d04, Func Offset: 0x3c4
	// Line 853, Address: 0x267d20, Func Offset: 0x3e0
	// Line 854, Address: 0x267d44, Func Offset: 0x404
	// Line 855, Address: 0x267d68, Func Offset: 0x428
	// Line 856, Address: 0x267d6c, Func Offset: 0x42c
	// Line 858, Address: 0x267d74, Func Offset: 0x434
	// Line 860, Address: 0x267d7c, Func Offset: 0x43c
	// Line 862, Address: 0x267d84, Func Offset: 0x444
	// Line 863, Address: 0x267da8, Func Offset: 0x468
	// Line 864, Address: 0x267dac, Func Offset: 0x46c
	// Line 866, Address: 0x267db4, Func Offset: 0x474
	// Line 868, Address: 0x267dbc, Func Offset: 0x47c
	// Line 870, Address: 0x267dc0, Func Offset: 0x480
	// Line 871, Address: 0x267dc8, Func Offset: 0x488
	// Line 872, Address: 0x267dcc, Func Offset: 0x48c
	// Line 873, Address: 0x267dd0, Func Offset: 0x490
	// Line 875, Address: 0x267dd4, Func Offset: 0x494
	// Line 876, Address: 0x267de0, Func Offset: 0x4a0
	// Line 877, Address: 0x267dec, Func Offset: 0x4ac
	// Line 878, Address: 0x267df8, Func Offset: 0x4b8
	// Line 879, Address: 0x267e14, Func Offset: 0x4d4
	// Line 880, Address: 0x267e20, Func Offset: 0x4e0
	// Line 882, Address: 0x267e24, Func Offset: 0x4e4
	// Line 883, Address: 0x267e38, Func Offset: 0x4f8
	// Line 885, Address: 0x267e40, Func Offset: 0x500
	// Line 893, Address: 0x267e50, Func Offset: 0x510
	// Line 894, Address: 0x267e5c, Func Offset: 0x51c
	// Line 895, Address: 0x267e70, Func Offset: 0x530
	// Line 899, Address: 0x267e88, Func Offset: 0x548
	// Line 901, Address: 0x267e9c, Func Offset: 0x55c
	// Line 903, Address: 0x267eb4, Func Offset: 0x574
	// Line 904, Address: 0x267ed4, Func Offset: 0x594
	// Line 905, Address: 0x267ed8, Func Offset: 0x598
	// Line 907, Address: 0x267ee8, Func Offset: 0x5a8
	// Line 956, Address: 0x267ef8, Func Offset: 0x5b8
	// Line 958, Address: 0x267f10, Func Offset: 0x5d0
	// Line 961, Address: 0x267f40, Func Offset: 0x600
	// Line 964, Address: 0x267f50, Func Offset: 0x610
	// Line 966, Address: 0x267f74, Func Offset: 0x634
	// Line 973, Address: 0x267f8c, Func Offset: 0x64c
	// Line 975, Address: 0x267fa4, Func Offset: 0x664
	// Line 976, Address: 0x267fac, Func Offset: 0x66c
	// Line 979, Address: 0x267fb4, Func Offset: 0x674
	// Line 980, Address: 0x267fd0, Func Offset: 0x690
	// Line 983, Address: 0x267fd8, Func Offset: 0x698
	// Line 984, Address: 0x267fdc, Func Offset: 0x69c
	// Line 987, Address: 0x267fe0, Func Offset: 0x6a0
	// Line 988, Address: 0x267fe4, Func Offset: 0x6a4
	// Func End, Address: 0x268014, Func Offset: 0x6d4
}

