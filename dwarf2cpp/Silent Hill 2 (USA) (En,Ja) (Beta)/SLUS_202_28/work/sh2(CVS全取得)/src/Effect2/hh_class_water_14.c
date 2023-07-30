typedef struct _anon0;
typedef struct HH_Object_Water_14;
typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_ElementOption;
typedef struct WaveArea_Infomeation;
typedef struct ImpactQueue_Element;
typedef struct Wave_Element;
typedef struct _anon1;


typedef unsigned int type_0[1];
typedef float type_1[4][2];
typedef float type_2[2];
typedef int type_3[2];
typedef WaveArea_Infomeation type_4[1];
typedef int type_5[4];
typedef float type_6[4];
typedef unsigned int type_7[1];
typedef float type_8[4];
typedef float type_9[4][4];
typedef unsigned int type_10[255];
typedef Wave_Element type_11[20];
typedef float type_12[630];
typedef unsigned int type_13[32];
typedef unsigned int type_14[2];
typedef unsigned char type_15[4];
typedef float* type_16[1];
typedef unsigned int type_17[2][4];
typedef char type_18[4];
typedef float type_19[1];
typedef char type_20[4];
typedef unsigned int type_21[2];
typedef unsigned int type_22[1];
typedef char type_23[4];
typedef char type_24[4];
typedef char type_25[4];
typedef unsigned long type_26[2];
typedef unsigned int type_27[2];
typedef unsigned long type_28[2];

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

struct HH_Object_Water_14
{
	Object_DataBlock_Header Header;
	unsigned char Step;
	unsigned char Motion_Step;
	float Timer;
	float ST_Defference[4];
	float Location_Defference[4];
	Wave_Element Wave_Info[20];
	float Area00_Grid_Y_Value[630];
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

void Grid_Work_Initialize(HH_Object_Water_14* pThis);
unsigned int Object_Initialize(HH_Object_Water_14* pThis);
void CurrentPosition_AreaIndex_Calculator(ImpactQueue_Element* pElement, WaveArea_Infomeation* pInfo, unsigned int* pX_Index, unsigned int* pZ_Index);
float Specular_Calculator(float* View_Direction, float* Light_Direction, float* Normal_Vector);
void SpecularRGBA_Calculator(int* iRGBA, float* RGBA_Base, float* RGBA_Specular_Base, float Specular_Ratio);
unsigned int Object_Draw(HH_Object_Water_14* pThis, float* pGrid_Y_Value, float* WorldLocation, unsigned int Grid_X_Max, unsigned int Grid_Z_Max);
unsigned int HH_Class_Prefix_Water_14();
unsigned int HH_Class_Suffix_Water_14();
unsigned int HH_Class_Water_14(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x263b40
void Grid_Work_Initialize(HH_Object_Water_14* pThis)
{
	// Line 162, Address: 0x263b40, Func Offset: 0
	// Line 164, Address: 0x263b48, Func Offset: 0x8
	// Line 165, Address: 0x263b5c, Func Offset: 0x1c
	// Func End, Address: 0x263b6c, Func Offset: 0x2c
}

// 
// Start address: 0x263b70
unsigned int Object_Initialize(HH_Object_Water_14* pThis)
{
	unsigned int result;
	// Line 178, Address: 0x263b70, Func Offset: 0
	// Line 186, Address: 0x263b80, Func Offset: 0x10
	// Line 188, Address: 0x263b84, Func Offset: 0x14
	// Line 190, Address: 0x263b88, Func Offset: 0x18
	// Line 192, Address: 0x263ba8, Func Offset: 0x38
	// Line 194, Address: 0x263bac, Func Offset: 0x3c
	// Line 196, Address: 0x263bb4, Func Offset: 0x44
	// Line 248, Address: 0x263bbc, Func Offset: 0x4c
	// Line 249, Address: 0x263bc0, Func Offset: 0x50
	// Func End, Address: 0x263bd4, Func Offset: 0x64
}

// 
// Start address: 0x263be0
void CurrentPosition_AreaIndex_Calculator(ImpactQueue_Element* pElement, WaveArea_Infomeation* pInfo, unsigned int* pX_Index, unsigned int* pZ_Index)
{
	float check_pos[4];
	// Line 254, Address: 0x263be0, Func Offset: 0
	// Line 257, Address: 0x263c00, Func Offset: 0x20
	// Line 258, Address: 0x263c14, Func Offset: 0x34
	// Line 259, Address: 0x263c3c, Func Offset: 0x5c
	// Line 260, Address: 0x263c64, Func Offset: 0x84
	// Func End, Address: 0x263c7c, Func Offset: 0x9c
}

// 
// Start address: 0x263c80
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
	// Line 273, Address: 0x263c80, Func Offset: 0
	// Line 286, Address: 0x263ca0, Func Offset: 0x20
	// Line 287, Address: 0x263cb0, Func Offset: 0x30
	// Line 288, Address: 0x263cc8, Func Offset: 0x48
	// Line 290, Address: 0x263ccc, Func Offset: 0x4c
	// Line 291, Address: 0x263cec, Func Offset: 0x6c
	// Line 292, Address: 0x263d00, Func Offset: 0x80
	// Line 294, Address: 0x263d10, Func Offset: 0x90
	// Line 295, Address: 0x263d20, Func Offset: 0xa0
	// Line 296, Address: 0x263d38, Func Offset: 0xb8
	// Line 317, Address: 0x263d3c, Func Offset: 0xbc
	// Line 320, Address: 0x263d8c, Func Offset: 0x10c
	// Func End, Address: 0x263da8, Func Offset: 0x128
}

// 
// Start address: 0x263db0
void SpecularRGBA_Calculator(int* iRGBA, float* RGBA_Base, float* RGBA_Specular_Base, float Specular_Ratio)
{
	// Line 336, Address: 0x263db0, Func Offset: 0
	// Line 339, Address: 0x263db8, Func Offset: 0x8
	// Line 340, Address: 0x263dbc, Func Offset: 0xc
	// Line 341, Address: 0x263dc0, Func Offset: 0x10
	// Line 342, Address: 0x263dc4, Func Offset: 0x14
	// Line 343, Address: 0x263dc8, Func Offset: 0x18
	// Line 344, Address: 0x263dcc, Func Offset: 0x1c
	// Line 345, Address: 0x263dd0, Func Offset: 0x20
	// Line 346, Address: 0x263dd4, Func Offset: 0x24
	// Line 347, Address: 0x263dd8, Func Offset: 0x28
	// Line 348, Address: 0x263ddc, Func Offset: 0x2c
	// Line 349, Address: 0x263de0, Func Offset: 0x30
	// Line 350, Address: 0x263de4, Func Offset: 0x34
	// Line 371, Address: 0x263de8, Func Offset: 0x38
	// Func End, Address: 0x263df0, Func Offset: 0x40
}

// 
// Start address: 0x263df0
unsigned int Object_Draw(HH_Object_Water_14* pThis, float* pGrid_Y_Value, float* WorldLocation, unsigned int Grid_X_Max, unsigned int Grid_Z_Max)
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
	// Line 384, Address: 0x263df0, Func Offset: 0
	// Line 415, Address: 0x263e3c, Func Offset: 0x4c
	// Line 418, Address: 0x263e48, Func Offset: 0x58
	// Line 440, Address: 0x263e50, Func Offset: 0x60
	// Line 444, Address: 0x263e54, Func Offset: 0x64
	// Line 445, Address: 0x263e60, Func Offset: 0x70
	// Line 446, Address: 0x263e6c, Func Offset: 0x7c
	// Line 447, Address: 0x263e84, Func Offset: 0x94
	// Line 449, Address: 0x263e9c, Func Offset: 0xac
	// Line 454, Address: 0x263eb4, Func Offset: 0xc4
	// Line 455, Address: 0x263ec0, Func Offset: 0xd0
	// Line 457, Address: 0x263ecc, Func Offset: 0xdc
	// Line 458, Address: 0x263ed0, Func Offset: 0xe0
	// Line 460, Address: 0x263ed4, Func Offset: 0xe4
	// Line 463, Address: 0x263ee4, Func Offset: 0xf4
	// Line 468, Address: 0x263ef8, Func Offset: 0x108
	// Line 473, Address: 0x263f04, Func Offset: 0x114
	// Line 475, Address: 0x263f10, Func Offset: 0x120
	// Line 476, Address: 0x263f24, Func Offset: 0x134
	// Line 479, Address: 0x263f38, Func Offset: 0x148
	// Line 480, Address: 0x263f44, Func Offset: 0x154
	// Line 484, Address: 0x263f58, Func Offset: 0x168
	// Line 486, Address: 0x263f60, Func Offset: 0x170
	// Line 489, Address: 0x263f6c, Func Offset: 0x17c
	// Line 490, Address: 0x263f78, Func Offset: 0x188
	// Line 491, Address: 0x263fd4, Func Offset: 0x1e4
	// Line 492, Address: 0x264038, Func Offset: 0x248
	// Line 494, Address: 0x264050, Func Offset: 0x260
	// Line 496, Address: 0x264068, Func Offset: 0x278
	// Line 504, Address: 0x264070, Func Offset: 0x280
	// Line 505, Address: 0x26408c, Func Offset: 0x29c
	// Line 507, Address: 0x264090, Func Offset: 0x2a0
	// Line 520, Address: 0x26409c, Func Offset: 0x2ac
	// Line 522, Address: 0x2640e8, Func Offset: 0x2f8
	// Line 523, Address: 0x264148, Func Offset: 0x358
	// Line 524, Address: 0x264164, Func Offset: 0x374
	// Line 525, Address: 0x264184, Func Offset: 0x394
	// Line 534, Address: 0x264198, Func Offset: 0x3a8
	// Line 536, Address: 0x2641c0, Func Offset: 0x3d0
	// Line 537, Address: 0x2641e0, Func Offset: 0x3f0
	// Line 538, Address: 0x2641ec, Func Offset: 0x3fc
	// Line 540, Address: 0x2641f8, Func Offset: 0x408
	// Line 541, Address: 0x26420c, Func Offset: 0x41c
	// Line 544, Address: 0x264220, Func Offset: 0x430
	// Line 545, Address: 0x264234, Func Offset: 0x444
	// Line 547, Address: 0x264248, Func Offset: 0x458
	// Line 548, Address: 0x264258, Func Offset: 0x468
	// Line 549, Address: 0x264268, Func Offset: 0x478
	// Line 550, Address: 0x264270, Func Offset: 0x480
	// Line 552, Address: 0x264274, Func Offset: 0x484
	// Line 554, Address: 0x264288, Func Offset: 0x498
	// Line 560, Address: 0x2642a0, Func Offset: 0x4b0
	// Line 563, Address: 0x2642a8, Func Offset: 0x4b8
	// Line 565, Address: 0x2642c8, Func Offset: 0x4d8
	// Line 567, Address: 0x2642e4, Func Offset: 0x4f4
	// Line 569, Address: 0x2642fc, Func Offset: 0x50c
	// Line 570, Address: 0x264314, Func Offset: 0x524
	// Line 571, Address: 0x264328, Func Offset: 0x538
	// Line 573, Address: 0x264330, Func Offset: 0x540
	// Line 575, Address: 0x264344, Func Offset: 0x554
	// Line 576, Address: 0x264358, Func Offset: 0x568
	// Line 578, Address: 0x264374, Func Offset: 0x584
	// Line 579, Address: 0x26438c, Func Offset: 0x59c
	// Line 580, Address: 0x2643a8, Func Offset: 0x5b8
	// Line 582, Address: 0x2643b0, Func Offset: 0x5c0
	// Line 595, Address: 0x2643c0, Func Offset: 0x5d0
	// Line 596, Address: 0x2643d0, Func Offset: 0x5e0
	// Line 597, Address: 0x2643dc, Func Offset: 0x5ec
	// Line 598, Address: 0x2643ec, Func Offset: 0x5fc
	// Line 599, Address: 0x2643f8, Func Offset: 0x608
	// Line 600, Address: 0x264408, Func Offset: 0x618
	// Line 601, Address: 0x264414, Func Offset: 0x624
	// Line 607, Address: 0x26441c, Func Offset: 0x62c
	// Line 615, Address: 0x264428, Func Offset: 0x638
	// Line 618, Address: 0x264448, Func Offset: 0x658
	// Line 620, Address: 0x264464, Func Offset: 0x674
	// Line 622, Address: 0x26447c, Func Offset: 0x68c
	// Line 623, Address: 0x264494, Func Offset: 0x6a4
	// Line 624, Address: 0x2644a8, Func Offset: 0x6b8
	// Line 626, Address: 0x2644b0, Func Offset: 0x6c0
	// Line 628, Address: 0x2644c4, Func Offset: 0x6d4
	// Line 629, Address: 0x2644d8, Func Offset: 0x6e8
	// Line 631, Address: 0x2644f4, Func Offset: 0x704
	// Line 632, Address: 0x26450c, Func Offset: 0x71c
	// Line 633, Address: 0x264528, Func Offset: 0x738
	// Line 635, Address: 0x264530, Func Offset: 0x740
	// Line 641, Address: 0x264540, Func Offset: 0x750
	// Line 642, Address: 0x264548, Func Offset: 0x758
	// Line 645, Address: 0x264550, Func Offset: 0x760
	// Line 646, Address: 0x264560, Func Offset: 0x770
	// Line 647, Address: 0x26456c, Func Offset: 0x77c
	// Line 648, Address: 0x26457c, Func Offset: 0x78c
	// Line 649, Address: 0x264588, Func Offset: 0x798
	// Line 650, Address: 0x264598, Func Offset: 0x7a8
	// Line 651, Address: 0x2645a4, Func Offset: 0x7b4
	// Line 652, Address: 0x2645b4, Func Offset: 0x7c4
	// Line 653, Address: 0x2645c0, Func Offset: 0x7d0
	// Line 654, Address: 0x2645d8, Func Offset: 0x7e8
	// Line 657, Address: 0x2645dc, Func Offset: 0x7ec
	// Line 659, Address: 0x2645ec, Func Offset: 0x7fc
	// Line 661, Address: 0x264604, Func Offset: 0x814
	// Line 663, Address: 0x26460c, Func Offset: 0x81c
	// Line 664, Address: 0x264610, Func Offset: 0x820
	// Func End, Address: 0x264650, Func Offset: 0x860
}

// 
// Start address: 0x264650
unsigned int HH_Class_Prefix_Water_14()
{
	unsigned long tex0;
	_anon0* pPk;
	unsigned int result;
	// Line 684, Address: 0x264650, Func Offset: 0
	// Line 686, Address: 0x26465c, Func Offset: 0xc
	// Line 689, Address: 0x264668, Func Offset: 0x18
	// Line 692, Address: 0x264670, Func Offset: 0x20
	// Line 693, Address: 0x264680, Func Offset: 0x30
	// Line 695, Address: 0x264694, Func Offset: 0x44
	// Line 696, Address: 0x2646b8, Func Offset: 0x68
	// Line 698, Address: 0x2646d4, Func Offset: 0x84
	// Line 700, Address: 0x2646dc, Func Offset: 0x8c
	// Line 701, Address: 0x2646e0, Func Offset: 0x90
	// Func End, Address: 0x2646f4, Func Offset: 0xa4
}

// 
// Start address: 0x264700
unsigned int HH_Class_Suffix_Water_14()
{
	_anon0* pPk;
	unsigned int result;
	// Line 714, Address: 0x264700, Func Offset: 0
	// Line 716, Address: 0x26470c, Func Offset: 0xc
	// Line 718, Address: 0x264718, Func Offset: 0x18
	// Line 719, Address: 0x264720, Func Offset: 0x20
	// Line 720, Address: 0x264734, Func Offset: 0x34
	// Line 722, Address: 0x26473c, Func Offset: 0x3c
	// Line 723, Address: 0x264740, Func Offset: 0x40
	// Func End, Address: 0x264754, Func Offset: 0x54
}

// 
// Start address: 0x264760
unsigned int HH_Class_Water_14(void* pBlock, ImpactQueue_Element* pElement)
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
	HH_Object_Water_14* pThis;
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
	// Line 737, Address: 0x264760, Func Offset: 0
	// Line 744, Address: 0x26478c, Func Offset: 0x2c
	// Line 745, Address: 0x264790, Func Offset: 0x30
	// Line 747, Address: 0x264794, Func Offset: 0x34
	// Line 750, Address: 0x2647bc, Func Offset: 0x5c
	// Line 752, Address: 0x2647c4, Func Offset: 0x64
	// Line 754, Address: 0x2647dc, Func Offset: 0x7c
	// Line 757, Address: 0x2647fc, Func Offset: 0x9c
	// Line 758, Address: 0x264804, Func Offset: 0xa4
	// Line 762, Address: 0x26480c, Func Offset: 0xac
	// Line 770, Address: 0x264814, Func Offset: 0xb4
	// Line 771, Address: 0x26482c, Func Offset: 0xcc
	// Line 773, Address: 0x2648ec, Func Offset: 0x18c
	// Line 774, Address: 0x264930, Func Offset: 0x1d0
	// Line 779, Address: 0x264974, Func Offset: 0x214
	// Line 781, Address: 0x264990, Func Offset: 0x230
	// Line 782, Address: 0x2649a0, Func Offset: 0x240
	// Line 783, Address: 0x2649ac, Func Offset: 0x24c
	// Line 784, Address: 0x2649c8, Func Offset: 0x268
	// Line 786, Address: 0x2649d0, Func Offset: 0x270
	// Line 791, Address: 0x2649d4, Func Offset: 0x274
	// Line 792, Address: 0x2649e0, Func Offset: 0x280
	// Line 794, Address: 0x2649fc, Func Offset: 0x29c
	// Line 803, Address: 0x264a08, Func Offset: 0x2a8
	// Line 804, Address: 0x264a34, Func Offset: 0x2d4
	// Line 805, Address: 0x264a3c, Func Offset: 0x2dc
	// Line 806, Address: 0x264a40, Func Offset: 0x2e0
	// Line 807, Address: 0x264a48, Func Offset: 0x2e8
	// Line 809, Address: 0x264a50, Func Offset: 0x2f0
	// Line 810, Address: 0x264a5c, Func Offset: 0x2fc
	// Line 811, Address: 0x264a68, Func Offset: 0x308
	// Line 812, Address: 0x264a74, Func Offset: 0x314
	// Line 813, Address: 0x264a90, Func Offset: 0x330
	// Line 814, Address: 0x264a9c, Func Offset: 0x33c
	// Line 816, Address: 0x264aa0, Func Offset: 0x340
	// Line 818, Address: 0x264ab4, Func Offset: 0x354
	// Line 827, Address: 0x264ab8, Func Offset: 0x358
	// Line 828, Address: 0x264ac4, Func Offset: 0x364
	// Line 831, Address: 0x264ad8, Func Offset: 0x378
	// Line 837, Address: 0x264b00, Func Offset: 0x3a0
	// Line 839, Address: 0x264b18, Func Offset: 0x3b8
	// Line 840, Address: 0x264b34, Func Offset: 0x3d4
	// Line 842, Address: 0x264b50, Func Offset: 0x3f0
	// Line 843, Address: 0x264b74, Func Offset: 0x414
	// Line 844, Address: 0x264b98, Func Offset: 0x438
	// Line 845, Address: 0x264b9c, Func Offset: 0x43c
	// Line 847, Address: 0x264ba4, Func Offset: 0x444
	// Line 849, Address: 0x264bac, Func Offset: 0x44c
	// Line 851, Address: 0x264bb4, Func Offset: 0x454
	// Line 852, Address: 0x264bd8, Func Offset: 0x478
	// Line 853, Address: 0x264bdc, Func Offset: 0x47c
	// Line 855, Address: 0x264be4, Func Offset: 0x484
	// Line 857, Address: 0x264bec, Func Offset: 0x48c
	// Line 859, Address: 0x264bf0, Func Offset: 0x490
	// Line 860, Address: 0x264bf8, Func Offset: 0x498
	// Line 861, Address: 0x264bfc, Func Offset: 0x49c
	// Line 862, Address: 0x264c00, Func Offset: 0x4a0
	// Line 864, Address: 0x264c04, Func Offset: 0x4a4
	// Line 865, Address: 0x264c10, Func Offset: 0x4b0
	// Line 866, Address: 0x264c1c, Func Offset: 0x4bc
	// Line 867, Address: 0x264c28, Func Offset: 0x4c8
	// Line 868, Address: 0x264c44, Func Offset: 0x4e4
	// Line 869, Address: 0x264c50, Func Offset: 0x4f0
	// Line 871, Address: 0x264c54, Func Offset: 0x4f4
	// Line 872, Address: 0x264c68, Func Offset: 0x508
	// Line 874, Address: 0x264c70, Func Offset: 0x510
	// Line 882, Address: 0x264c80, Func Offset: 0x520
	// Line 883, Address: 0x264c8c, Func Offset: 0x52c
	// Line 884, Address: 0x264ca0, Func Offset: 0x540
	// Line 888, Address: 0x264cb8, Func Offset: 0x558
	// Line 890, Address: 0x264ccc, Func Offset: 0x56c
	// Line 892, Address: 0x264ce4, Func Offset: 0x584
	// Line 893, Address: 0x264d04, Func Offset: 0x5a4
	// Line 894, Address: 0x264d08, Func Offset: 0x5a8
	// Line 895, Address: 0x264d18, Func Offset: 0x5b8
	// Line 943, Address: 0x264d28, Func Offset: 0x5c8
	// Line 945, Address: 0x264d40, Func Offset: 0x5e0
	// Line 947, Address: 0x264d50, Func Offset: 0x5f0
	// Line 950, Address: 0x264d80, Func Offset: 0x620
	// Line 953, Address: 0x264d90, Func Offset: 0x630
	// Line 955, Address: 0x264dac, Func Offset: 0x64c
	// Line 960, Address: 0x264dc4, Func Offset: 0x664
	// Line 961, Address: 0x264de0, Func Offset: 0x680
	// Line 964, Address: 0x264de8, Func Offset: 0x688
	// Line 965, Address: 0x264dec, Func Offset: 0x68c
	// Line 968, Address: 0x264df0, Func Offset: 0x690
	// Line 969, Address: 0x264df4, Func Offset: 0x694
	// Func End, Address: 0x264e24, Func Offset: 0x6c4
}

