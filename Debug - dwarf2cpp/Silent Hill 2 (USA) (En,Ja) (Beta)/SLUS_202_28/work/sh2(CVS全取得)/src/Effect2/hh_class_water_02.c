typedef struct WaveArea_Infomeation;
typedef struct HH_Object_Water_02;
typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_ElementOption;
typedef struct ImpactQueue_Element;
typedef struct Wave_Element;
typedef struct _anon0;


typedef WaveArea_Infomeation type_0[1];
typedef float type_1[4][2];
typedef float type_2[2];
typedef int type_3[2];
typedef int type_4[4];
typedef float type_5[4];
typedef unsigned int type_6[1];
typedef float type_7[4];
typedef float type_8[4][4];
typedef Wave_Element type_9[20];
typedef float type_10[528];
typedef unsigned long type_11[2];
typedef float* type_12[1];
typedef unsigned int type_13[2];
typedef unsigned int type_14[2][4];
typedef unsigned int type_15[1];
typedef float type_16[1];
typedef unsigned int type_17[1];
typedef unsigned int type_18[2];
typedef unsigned long type_19[2];
typedef char type_20[80];
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

struct HH_Object_Water_02
{
	Object_DataBlock_Header Header;
	unsigned char Step;
	unsigned char Motion_Step;
	float Timer;
	float ST_Defference[4];
	Wave_Element Wave_Info[20];
	float Area00_Grid_Y_Value[528];
	float* pArea_Grid_Y_Value_Table[1];
	float Area_WavePostTime[1];
	unsigned int Area_Enable_Table[1];
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

unsigned int _area00_view_list[1];
WaveArea_Infomeation _Area_Info_List[1];

void Grid_Work_Initialize(HH_Object_Water_02* pThis);
unsigned int Object_Initialize(HH_Object_Water_02* pThis);
void CurrentPosition_AreaIndex_Calculator(ImpactQueue_Element* pElement, WaveArea_Infomeation* pInfo, unsigned int* pX_Index, unsigned int* pZ_Index);
float Specular_Calculator(float* View_Direction, float* Light_Direction, float* Normal_Vector);
void SpecularRGBA_Calculator(int* iRGBA, float* RGBA_Base, float* RGBA_Specular_Base, float Specular_Ratio);
unsigned int Object_Draw(HH_Object_Water_02* pThis, float* pGrid_Y_Value, float* WorldLocation, unsigned int Grid_X_Max, unsigned int Grid_Z_Max);
unsigned int HH_Class_Prefix_Water_02();
unsigned int HH_Class_Suffix_Water_02();
unsigned int HH_Class_Water_02(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x25da40
void Grid_Work_Initialize(HH_Object_Water_02* pThis)
{
	// Line 146, Address: 0x25da40, Func Offset: 0
	// Line 148, Address: 0x25da48, Func Offset: 0x8
	// Line 149, Address: 0x25da5c, Func Offset: 0x1c
	// Func End, Address: 0x25da6c, Func Offset: 0x2c
}

// 
// Start address: 0x25da70
unsigned int Object_Initialize(HH_Object_Water_02* pThis)
{
	unsigned int result;
	// Line 162, Address: 0x25da70, Func Offset: 0
	// Line 170, Address: 0x25da80, Func Offset: 0x10
	// Line 172, Address: 0x25da84, Func Offset: 0x14
	// Line 174, Address: 0x25da88, Func Offset: 0x18
	// Line 176, Address: 0x25daa8, Func Offset: 0x38
	// Line 178, Address: 0x25daac, Func Offset: 0x3c
	// Line 180, Address: 0x25dab4, Func Offset: 0x44
	// Line 232, Address: 0x25dabc, Func Offset: 0x4c
	// Line 233, Address: 0x25dac0, Func Offset: 0x50
	// Func End, Address: 0x25dad4, Func Offset: 0x64
}

// 
// Start address: 0x25dae0
void CurrentPosition_AreaIndex_Calculator(ImpactQueue_Element* pElement, WaveArea_Infomeation* pInfo, unsigned int* pX_Index, unsigned int* pZ_Index)
{
	float check_pos[4];
	// Line 238, Address: 0x25dae0, Func Offset: 0
	// Line 241, Address: 0x25db00, Func Offset: 0x20
	// Line 242, Address: 0x25db14, Func Offset: 0x34
	// Line 243, Address: 0x25db3c, Func Offset: 0x5c
	// Line 244, Address: 0x25db64, Func Offset: 0x84
	// Func End, Address: 0x25db7c, Func Offset: 0x9c
}

// 
// Start address: 0x25db80
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
	// Line 257, Address: 0x25db80, Func Offset: 0
	// Line 270, Address: 0x25dba0, Func Offset: 0x20
	// Line 271, Address: 0x25dbb0, Func Offset: 0x30
	// Line 272, Address: 0x25dbc8, Func Offset: 0x48
	// Line 274, Address: 0x25dbcc, Func Offset: 0x4c
	// Line 275, Address: 0x25dbec, Func Offset: 0x6c
	// Line 276, Address: 0x25dc00, Func Offset: 0x80
	// Line 278, Address: 0x25dc10, Func Offset: 0x90
	// Line 279, Address: 0x25dc20, Func Offset: 0xa0
	// Line 280, Address: 0x25dc38, Func Offset: 0xb8
	// Line 301, Address: 0x25dc3c, Func Offset: 0xbc
	// Line 304, Address: 0x25dc8c, Func Offset: 0x10c
	// Func End, Address: 0x25dca8, Func Offset: 0x128
}

// 
// Start address: 0x25dcb0
void SpecularRGBA_Calculator(int* iRGBA, float* RGBA_Base, float* RGBA_Specular_Base, float Specular_Ratio)
{
	// Line 320, Address: 0x25dcb0, Func Offset: 0
	// Line 323, Address: 0x25dcb8, Func Offset: 0x8
	// Line 324, Address: 0x25dcbc, Func Offset: 0xc
	// Line 325, Address: 0x25dcc0, Func Offset: 0x10
	// Line 326, Address: 0x25dcc4, Func Offset: 0x14
	// Line 327, Address: 0x25dcc8, Func Offset: 0x18
	// Line 328, Address: 0x25dccc, Func Offset: 0x1c
	// Line 329, Address: 0x25dcd0, Func Offset: 0x20
	// Line 330, Address: 0x25dcd4, Func Offset: 0x24
	// Line 331, Address: 0x25dcd8, Func Offset: 0x28
	// Line 332, Address: 0x25dcdc, Func Offset: 0x2c
	// Line 333, Address: 0x25dce0, Func Offset: 0x30
	// Line 334, Address: 0x25dce4, Func Offset: 0x34
	// Line 355, Address: 0x25dce8, Func Offset: 0x38
	// Func End, Address: 0x25dcf0, Func Offset: 0x40
}

// 
// Start address: 0x25dcf0
unsigned int Object_Draw(HH_Object_Water_02* pThis, float* pGrid_Y_Value, float* WorldLocation, unsigned int Grid_X_Max, unsigned int Grid_Z_Max)
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
	// Line 368, Address: 0x25dcf0, Func Offset: 0
	// Line 399, Address: 0x25dd3c, Func Offset: 0x4c
	// Line 402, Address: 0x25dd48, Func Offset: 0x58
	// Line 424, Address: 0x25dd50, Func Offset: 0x60
	// Line 428, Address: 0x25dd54, Func Offset: 0x64
	// Line 429, Address: 0x25dd60, Func Offset: 0x70
	// Line 430, Address: 0x25dd6c, Func Offset: 0x7c
	// Line 431, Address: 0x25dd84, Func Offset: 0x94
	// Line 433, Address: 0x25dd9c, Func Offset: 0xac
	// Line 438, Address: 0x25ddb4, Func Offset: 0xc4
	// Line 439, Address: 0x25ddc0, Func Offset: 0xd0
	// Line 441, Address: 0x25ddcc, Func Offset: 0xdc
	// Line 442, Address: 0x25ddd0, Func Offset: 0xe0
	// Line 444, Address: 0x25ddd4, Func Offset: 0xe4
	// Line 447, Address: 0x25dde4, Func Offset: 0xf4
	// Line 452, Address: 0x25ddf8, Func Offset: 0x108
	// Line 457, Address: 0x25de04, Func Offset: 0x114
	// Line 459, Address: 0x25de10, Func Offset: 0x120
	// Line 460, Address: 0x25de24, Func Offset: 0x134
	// Line 463, Address: 0x25de38, Func Offset: 0x148
	// Line 464, Address: 0x25de44, Func Offset: 0x154
	// Line 468, Address: 0x25de58, Func Offset: 0x168
	// Line 470, Address: 0x25de60, Func Offset: 0x170
	// Line 473, Address: 0x25de6c, Func Offset: 0x17c
	// Line 474, Address: 0x25de78, Func Offset: 0x188
	// Line 475, Address: 0x25ded4, Func Offset: 0x1e4
	// Line 476, Address: 0x25df38, Func Offset: 0x248
	// Line 478, Address: 0x25df50, Func Offset: 0x260
	// Line 480, Address: 0x25df68, Func Offset: 0x278
	// Line 488, Address: 0x25df70, Func Offset: 0x280
	// Line 489, Address: 0x25df8c, Func Offset: 0x29c
	// Line 491, Address: 0x25df90, Func Offset: 0x2a0
	// Line 504, Address: 0x25df9c, Func Offset: 0x2ac
	// Line 506, Address: 0x25dfe8, Func Offset: 0x2f8
	// Line 507, Address: 0x25e048, Func Offset: 0x358
	// Line 508, Address: 0x25e064, Func Offset: 0x374
	// Line 509, Address: 0x25e084, Func Offset: 0x394
	// Line 518, Address: 0x25e098, Func Offset: 0x3a8
	// Line 520, Address: 0x25e0c0, Func Offset: 0x3d0
	// Line 521, Address: 0x25e0e0, Func Offset: 0x3f0
	// Line 522, Address: 0x25e0ec, Func Offset: 0x3fc
	// Line 524, Address: 0x25e0f8, Func Offset: 0x408
	// Line 525, Address: 0x25e10c, Func Offset: 0x41c
	// Line 528, Address: 0x25e120, Func Offset: 0x430
	// Line 529, Address: 0x25e134, Func Offset: 0x444
	// Line 531, Address: 0x25e148, Func Offset: 0x458
	// Line 532, Address: 0x25e158, Func Offset: 0x468
	// Line 533, Address: 0x25e168, Func Offset: 0x478
	// Line 534, Address: 0x25e170, Func Offset: 0x480
	// Line 536, Address: 0x25e174, Func Offset: 0x484
	// Line 538, Address: 0x25e188, Func Offset: 0x498
	// Line 544, Address: 0x25e1a0, Func Offset: 0x4b0
	// Line 547, Address: 0x25e1a8, Func Offset: 0x4b8
	// Line 549, Address: 0x25e1c8, Func Offset: 0x4d8
	// Line 551, Address: 0x25e1e4, Func Offset: 0x4f4
	// Line 553, Address: 0x25e1fc, Func Offset: 0x50c
	// Line 554, Address: 0x25e214, Func Offset: 0x524
	// Line 555, Address: 0x25e228, Func Offset: 0x538
	// Line 557, Address: 0x25e230, Func Offset: 0x540
	// Line 559, Address: 0x25e244, Func Offset: 0x554
	// Line 560, Address: 0x25e258, Func Offset: 0x568
	// Line 562, Address: 0x25e274, Func Offset: 0x584
	// Line 563, Address: 0x25e28c, Func Offset: 0x59c
	// Line 564, Address: 0x25e2a8, Func Offset: 0x5b8
	// Line 566, Address: 0x25e2b0, Func Offset: 0x5c0
	// Line 579, Address: 0x25e2c0, Func Offset: 0x5d0
	// Line 580, Address: 0x25e2d0, Func Offset: 0x5e0
	// Line 581, Address: 0x25e2dc, Func Offset: 0x5ec
	// Line 582, Address: 0x25e2ec, Func Offset: 0x5fc
	// Line 583, Address: 0x25e2f8, Func Offset: 0x608
	// Line 584, Address: 0x25e308, Func Offset: 0x618
	// Line 585, Address: 0x25e314, Func Offset: 0x624
	// Line 591, Address: 0x25e31c, Func Offset: 0x62c
	// Line 599, Address: 0x25e328, Func Offset: 0x638
	// Line 602, Address: 0x25e348, Func Offset: 0x658
	// Line 604, Address: 0x25e364, Func Offset: 0x674
	// Line 606, Address: 0x25e37c, Func Offset: 0x68c
	// Line 607, Address: 0x25e394, Func Offset: 0x6a4
	// Line 608, Address: 0x25e3a8, Func Offset: 0x6b8
	// Line 610, Address: 0x25e3b0, Func Offset: 0x6c0
	// Line 612, Address: 0x25e3c4, Func Offset: 0x6d4
	// Line 613, Address: 0x25e3d8, Func Offset: 0x6e8
	// Line 615, Address: 0x25e3f4, Func Offset: 0x704
	// Line 616, Address: 0x25e40c, Func Offset: 0x71c
	// Line 617, Address: 0x25e428, Func Offset: 0x738
	// Line 619, Address: 0x25e430, Func Offset: 0x740
	// Line 625, Address: 0x25e440, Func Offset: 0x750
	// Line 626, Address: 0x25e448, Func Offset: 0x758
	// Line 629, Address: 0x25e450, Func Offset: 0x760
	// Line 630, Address: 0x25e460, Func Offset: 0x770
	// Line 631, Address: 0x25e46c, Func Offset: 0x77c
	// Line 632, Address: 0x25e47c, Func Offset: 0x78c
	// Line 633, Address: 0x25e488, Func Offset: 0x798
	// Line 634, Address: 0x25e498, Func Offset: 0x7a8
	// Line 635, Address: 0x25e4a4, Func Offset: 0x7b4
	// Line 636, Address: 0x25e4b4, Func Offset: 0x7c4
	// Line 637, Address: 0x25e4c0, Func Offset: 0x7d0
	// Line 638, Address: 0x25e4d8, Func Offset: 0x7e8
	// Line 641, Address: 0x25e4dc, Func Offset: 0x7ec
	// Line 643, Address: 0x25e4ec, Func Offset: 0x7fc
	// Line 645, Address: 0x25e504, Func Offset: 0x814
	// Line 647, Address: 0x25e50c, Func Offset: 0x81c
	// Line 648, Address: 0x25e510, Func Offset: 0x820
	// Func End, Address: 0x25e550, Func Offset: 0x860
}

// 
// Start address: 0x25e550
unsigned int HH_Class_Prefix_Water_02()
{
	unsigned long tex0;
	_anon0* pPk;
	unsigned int result;
	unsigned int j;
	int i;
	unsigned int interval;
	// Line 668, Address: 0x25e550, Func Offset: 0
	// Line 670, Address: 0x25e55c, Func Offset: 0xc
	// Line 676, Address: 0x25e568, Func Offset: 0x18
	// Line 679, Address: 0x25e570, Func Offset: 0x20
	// Line 681, Address: 0x25e580, Func Offset: 0x30
	// Line 684, Address: 0x25e594, Func Offset: 0x44
	// Line 686, Address: 0x25e5f8, Func Offset: 0xa8
	// Line 687, Address: 0x25e614, Func Offset: 0xc4
	// Line 699, Address: 0x25e63c, Func Offset: 0xec
	// Line 700, Address: 0x25e650, Func Offset: 0x100
	// Line 704, Address: 0x25e678, Func Offset: 0x128
	// Line 708, Address: 0x25e68c, Func Offset: 0x13c
	// Line 710, Address: 0x25e6a8, Func Offset: 0x158
	// Line 712, Address: 0x25e6b0, Func Offset: 0x160
	// Line 713, Address: 0x25e6b4, Func Offset: 0x164
	// Func End, Address: 0x25e6c8, Func Offset: 0x178
}

// 
// Start address: 0x25e6d0
unsigned int HH_Class_Suffix_Water_02()
{
	_anon0* pPk;
	unsigned int result;
	// Line 726, Address: 0x25e6d0, Func Offset: 0
	// Line 728, Address: 0x25e6dc, Func Offset: 0xc
	// Line 730, Address: 0x25e6e8, Func Offset: 0x18
	// Line 731, Address: 0x25e6f0, Func Offset: 0x20
	// Line 732, Address: 0x25e704, Func Offset: 0x34
	// Line 734, Address: 0x25e70c, Func Offset: 0x3c
	// Line 735, Address: 0x25e710, Func Offset: 0x40
	// Func End, Address: 0x25e724, Func Offset: 0x54
}

// 
// Start address: 0x25e730
unsigned int HH_Class_Water_02(void* pBlock, ImpactQueue_Element* pElement)
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
	HH_Object_Water_02* pThis;
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
	float base_move;
	float degree;
	// Line 749, Address: 0x25e730, Func Offset: 0
	// Line 756, Address: 0x25e75c, Func Offset: 0x2c
	// Line 757, Address: 0x25e760, Func Offset: 0x30
	// Line 759, Address: 0x25e764, Func Offset: 0x34
	// Line 762, Address: 0x25e78c, Func Offset: 0x5c
	// Line 764, Address: 0x25e794, Func Offset: 0x64
	// Line 765, Address: 0x25e79c, Func Offset: 0x6c
	// Line 769, Address: 0x25e7a4, Func Offset: 0x74
	// Line 775, Address: 0x25e7ac, Func Offset: 0x7c
	// Line 776, Address: 0x25e7c4, Func Offset: 0x94
	// Line 778, Address: 0x25e884, Func Offset: 0x154
	// Line 779, Address: 0x25e8b4, Func Offset: 0x184
	// Line 787, Address: 0x25e8e8, Func Offset: 0x1b8
	// Line 788, Address: 0x25e8f4, Func Offset: 0x1c4
	// Line 790, Address: 0x25e910, Func Offset: 0x1e0
	// Line 791, Address: 0x25e920, Func Offset: 0x1f0
	// Line 792, Address: 0x25e92c, Func Offset: 0x1fc
	// Line 793, Address: 0x25e948, Func Offset: 0x218
	// Line 795, Address: 0x25e950, Func Offset: 0x220
	// Line 800, Address: 0x25e958, Func Offset: 0x228
	// Line 801, Address: 0x25e964, Func Offset: 0x234
	// Line 803, Address: 0x25e980, Func Offset: 0x250
	// Line 812, Address: 0x25e98c, Func Offset: 0x25c
	// Line 813, Address: 0x25e9b8, Func Offset: 0x288
	// Line 814, Address: 0x25e9c0, Func Offset: 0x290
	// Line 815, Address: 0x25e9c4, Func Offset: 0x294
	// Line 816, Address: 0x25e9cc, Func Offset: 0x29c
	// Line 818, Address: 0x25e9d4, Func Offset: 0x2a4
	// Line 819, Address: 0x25e9e0, Func Offset: 0x2b0
	// Line 820, Address: 0x25e9ec, Func Offset: 0x2bc
	// Line 821, Address: 0x25e9f8, Func Offset: 0x2c8
	// Line 822, Address: 0x25ea14, Func Offset: 0x2e4
	// Line 823, Address: 0x25ea20, Func Offset: 0x2f0
	// Line 825, Address: 0x25ea24, Func Offset: 0x2f4
	// Line 827, Address: 0x25ea38, Func Offset: 0x308
	// Line 836, Address: 0x25ea3c, Func Offset: 0x30c
	// Line 837, Address: 0x25ea48, Func Offset: 0x318
	// Line 843, Address: 0x25ea78, Func Offset: 0x348
	// Line 845, Address: 0x25ea90, Func Offset: 0x360
	// Line 846, Address: 0x25eaac, Func Offset: 0x37c
	// Line 848, Address: 0x25eac8, Func Offset: 0x398
	// Line 849, Address: 0x25ead0, Func Offset: 0x3a0
	// Line 850, Address: 0x25ead4, Func Offset: 0x3a4
	// Line 851, Address: 0x25ead8, Func Offset: 0x3a8
	// Line 853, Address: 0x25eadc, Func Offset: 0x3ac
	// Line 854, Address: 0x25eae8, Func Offset: 0x3b8
	// Line 855, Address: 0x25eaf4, Func Offset: 0x3c4
	// Line 856, Address: 0x25eb00, Func Offset: 0x3d0
	// Line 857, Address: 0x25eb1c, Func Offset: 0x3ec
	// Line 858, Address: 0x25eb28, Func Offset: 0x3f8
	// Line 860, Address: 0x25eb2c, Func Offset: 0x3fc
	// Line 861, Address: 0x25eb40, Func Offset: 0x410
	// Line 863, Address: 0x25eb48, Func Offset: 0x418
	// Line 873, Address: 0x25eb58, Func Offset: 0x428
	// Line 874, Address: 0x25eb64, Func Offset: 0x434
	// Line 875, Address: 0x25eb78, Func Offset: 0x448
	// Line 877, Address: 0x25eb90, Func Offset: 0x460
	// Line 878, Address: 0x25eba4, Func Offset: 0x474
	// Line 879, Address: 0x25eba8, Func Offset: 0x478
	// Line 881, Address: 0x25ebb8, Func Offset: 0x488
	// Line 882, Address: 0x25ebc4, Func Offset: 0x494
	// Line 883, Address: 0x25ebd8, Func Offset: 0x4a8
	// Line 885, Address: 0x25ebf0, Func Offset: 0x4c0
	// Line 887, Address: 0x25ec08, Func Offset: 0x4d8
	// Line 888, Address: 0x25ec18, Func Offset: 0x4e8
	// Line 891, Address: 0x25ec28, Func Offset: 0x4f8
	// Line 899, Address: 0x25ec30, Func Offset: 0x500
	// Line 901, Address: 0x25ec50, Func Offset: 0x520
	// Line 902, Address: 0x25ec78, Func Offset: 0x548
	// Line 903, Address: 0x25ec90, Func Offset: 0x560
	// Line 904, Address: 0x25ecb8, Func Offset: 0x588
	// Line 905, Address: 0x25ecd0, Func Offset: 0x5a0
	// Line 906, Address: 0x25ecf8, Func Offset: 0x5c8
	// Line 907, Address: 0x25ed10, Func Offset: 0x5e0
	// Line 908, Address: 0x25ed30, Func Offset: 0x600
	// Line 910, Address: 0x25ed48, Func Offset: 0x618
	// Line 912, Address: 0x25ed64, Func Offset: 0x634
	// Line 915, Address: 0x25ed6c, Func Offset: 0x63c
	// Line 916, Address: 0x25ed88, Func Offset: 0x658
	// Line 918, Address: 0x25eda0, Func Offset: 0x670
	// Line 919, Address: 0x25edbc, Func Offset: 0x68c
	// Line 921, Address: 0x25edd4, Func Offset: 0x6a4
	// Line 922, Address: 0x25edf0, Func Offset: 0x6c0
	// Line 924, Address: 0x25ee08, Func Offset: 0x6d8
	// Line 925, Address: 0x25ee24, Func Offset: 0x6f4
	// Line 927, Address: 0x25ee3c, Func Offset: 0x70c
	// Line 928, Address: 0x25ee58, Func Offset: 0x728
	// Line 930, Address: 0x25ee70, Func Offset: 0x740
	// Line 931, Address: 0x25ee8c, Func Offset: 0x75c
	// Line 936, Address: 0x25eea4, Func Offset: 0x774
	// Line 937, Address: 0x25eec0, Func Offset: 0x790
	// Line 940, Address: 0x25eec8, Func Offset: 0x798
	// Line 941, Address: 0x25eecc, Func Offset: 0x79c
	// Line 944, Address: 0x25eed0, Func Offset: 0x7a0
	// Line 945, Address: 0x25eed4, Func Offset: 0x7a4
	// Func End, Address: 0x25ef04, Func Offset: 0x7d4
}

