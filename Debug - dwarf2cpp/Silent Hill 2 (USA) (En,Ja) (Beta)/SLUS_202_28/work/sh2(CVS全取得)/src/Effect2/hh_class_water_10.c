typedef struct WaveArea_Infomeation;
typedef struct _anon0;
typedef struct ImpactQueue_Element;
typedef struct Object_DataBlock_Header;
typedef struct HH_Object_Water_10;
typedef struct ImpactQueue_ElementOption;
typedef struct Wave_Element;
typedef struct _anon1;


typedef unsigned int type_0[1];
typedef float type_1[4][2];
typedef float type_2[2];
typedef WaveArea_Infomeation type_3[1];
typedef int type_4[2];
typedef int type_5[4];
typedef float type_6[4];
typedef unsigned int type_7[1];
typedef float type_8[4];
typedef float type_9[4][4];
typedef unsigned long type_10[2];
typedef unsigned int type_11[255];
typedef Wave_Element type_12[20];
typedef float type_13[861];
typedef unsigned int type_14[32];
typedef unsigned char type_15[4];
typedef float* type_16[1];
typedef unsigned long type_17[2];
typedef unsigned int type_18[2];
typedef char type_19[4];
typedef unsigned int type_20[2][4];
typedef float type_21[1];
typedef char type_22[4];
typedef unsigned int type_23[1];
typedef unsigned int type_24[2];
typedef char type_25[4];
typedef char type_26[4];
typedef char type_27[4];
typedef unsigned int type_28[2];

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

struct HH_Object_Water_10
{
	Object_DataBlock_Header Header;
	unsigned char Step;
	unsigned char Motion_Step;
	float Timer;
	float ST_Defference[4];
	Wave_Element Wave_Info[20];
	float Area00_Grid_Y_Value[861];
	float* pArea_Grid_Y_Value_Table[1];
	float Area_WavePostTime[1];
	unsigned int Area_Enable_Table[1];
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

void Grid_Work_Initialize(HH_Object_Water_10* pThis);
unsigned int Object_Initialize(HH_Object_Water_10* pThis);
unsigned int Object_Draw(HH_Object_Water_10* pThis, float* pGrid_Y_Value, float* WorldLocation, unsigned int Grid_X_Max, unsigned int Grid_Z_Max);
unsigned int HH_Class_Prefix_Water_10();
unsigned int HH_Class_Suffix_Water_10();
unsigned int HH_Class_Water_10(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x25ef10
void Grid_Work_Initialize(HH_Object_Water_10* pThis)
{
	// Line 154, Address: 0x25ef10, Func Offset: 0
	// Line 156, Address: 0x25ef18, Func Offset: 0x8
	// Line 157, Address: 0x25ef2c, Func Offset: 0x1c
	// Func End, Address: 0x25ef3c, Func Offset: 0x2c
}

// 
// Start address: 0x25ef40
unsigned int Object_Initialize(HH_Object_Water_10* pThis)
{
	unsigned int result;
	// Line 170, Address: 0x25ef40, Func Offset: 0
	// Line 178, Address: 0x25ef50, Func Offset: 0x10
	// Line 180, Address: 0x25ef54, Func Offset: 0x14
	// Line 182, Address: 0x25ef58, Func Offset: 0x18
	// Line 184, Address: 0x25ef78, Func Offset: 0x38
	// Line 186, Address: 0x25ef7c, Func Offset: 0x3c
	// Line 188, Address: 0x25ef84, Func Offset: 0x44
	// Line 190, Address: 0x25ef8c, Func Offset: 0x4c
	// Line 241, Address: 0x25ef98, Func Offset: 0x58
	// Line 242, Address: 0x25ef9c, Func Offset: 0x5c
	// Func End, Address: 0x25efb0, Func Offset: 0x70
}

// 
// Start address: 0x25efb0
unsigned int Object_Draw(HH_Object_Water_10* pThis, float* pGrid_Y_Value, float* WorldLocation, unsigned int Grid_X_Max, unsigned int Grid_Z_Max)
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
	// Line 269, Address: 0x25efb0, Func Offset: 0
	// Line 302, Address: 0x25effc, Func Offset: 0x4c
	// Line 305, Address: 0x25f008, Func Offset: 0x58
	// Line 327, Address: 0x25f010, Func Offset: 0x60
	// Line 334, Address: 0x25f014, Func Offset: 0x64
	// Line 335, Address: 0x25f020, Func Offset: 0x70
	// Line 336, Address: 0x25f02c, Func Offset: 0x7c
	// Line 337, Address: 0x25f044, Func Offset: 0x94
	// Line 339, Address: 0x25f05c, Func Offset: 0xac
	// Line 340, Address: 0x25f074, Func Offset: 0xc4
	// Line 341, Address: 0x25f080, Func Offset: 0xd0
	// Line 342, Address: 0x25f08c, Func Offset: 0xdc
	// Line 343, Address: 0x25f090, Func Offset: 0xe0
	// Line 345, Address: 0x25f094, Func Offset: 0xe4
	// Line 348, Address: 0x25f0a4, Func Offset: 0xf4
	// Line 353, Address: 0x25f0b8, Func Offset: 0x108
	// Line 358, Address: 0x25f0c4, Func Offset: 0x114
	// Line 360, Address: 0x25f0d0, Func Offset: 0x120
	// Line 361, Address: 0x25f0e4, Func Offset: 0x134
	// Line 364, Address: 0x25f0f8, Func Offset: 0x148
	// Line 365, Address: 0x25f104, Func Offset: 0x154
	// Line 369, Address: 0x25f118, Func Offset: 0x168
	// Line 371, Address: 0x25f120, Func Offset: 0x170
	// Line 374, Address: 0x25f12c, Func Offset: 0x17c
	// Line 375, Address: 0x25f138, Func Offset: 0x188
	// Line 376, Address: 0x25f194, Func Offset: 0x1e4
	// Line 377, Address: 0x25f1f8, Func Offset: 0x248
	// Line 379, Address: 0x25f210, Func Offset: 0x260
	// Line 381, Address: 0x25f228, Func Offset: 0x278
	// Line 389, Address: 0x25f230, Func Offset: 0x280
	// Line 390, Address: 0x25f24c, Func Offset: 0x29c
	// Line 395, Address: 0x25f250, Func Offset: 0x2a0
	// Line 408, Address: 0x25f25c, Func Offset: 0x2ac
	// Line 410, Address: 0x25f2a8, Func Offset: 0x2f8
	// Line 411, Address: 0x25f308, Func Offset: 0x358
	// Line 412, Address: 0x25f324, Func Offset: 0x374
	// Line 413, Address: 0x25f344, Func Offset: 0x394
	// Line 422, Address: 0x25f358, Func Offset: 0x3a8
	// Line 424, Address: 0x25f380, Func Offset: 0x3d0
	// Line 425, Address: 0x25f3a0, Func Offset: 0x3f0
	// Line 426, Address: 0x25f3ac, Func Offset: 0x3fc
	// Line 428, Address: 0x25f3b8, Func Offset: 0x408
	// Line 429, Address: 0x25f3cc, Func Offset: 0x41c
	// Line 434, Address: 0x25f3e0, Func Offset: 0x430
	// Line 435, Address: 0x25f3f4, Func Offset: 0x444
	// Line 437, Address: 0x25f408, Func Offset: 0x458
	// Line 438, Address: 0x25f418, Func Offset: 0x468
	// Line 439, Address: 0x25f428, Func Offset: 0x478
	// Line 440, Address: 0x25f430, Func Offset: 0x480
	// Line 442, Address: 0x25f434, Func Offset: 0x484
	// Line 444, Address: 0x25f448, Func Offset: 0x498
	// Line 450, Address: 0x25f46c, Func Offset: 0x4bc
	// Line 453, Address: 0x25f474, Func Offset: 0x4c4
	// Line 455, Address: 0x25f494, Func Offset: 0x4e4
	// Line 457, Address: 0x25f4b0, Func Offset: 0x500
	// Line 459, Address: 0x25f4c8, Func Offset: 0x518
	// Line 460, Address: 0x25f4e0, Func Offset: 0x530
	// Line 461, Address: 0x25f4f4, Func Offset: 0x544
	// Line 463, Address: 0x25f4fc, Func Offset: 0x54c
	// Line 465, Address: 0x25f510, Func Offset: 0x560
	// Line 466, Address: 0x25f524, Func Offset: 0x574
	// Line 468, Address: 0x25f540, Func Offset: 0x590
	// Line 469, Address: 0x25f558, Func Offset: 0x5a8
	// Line 470, Address: 0x25f574, Func Offset: 0x5c4
	// Line 472, Address: 0x25f57c, Func Offset: 0x5cc
	// Line 474, Address: 0x25f58c, Func Offset: 0x5dc
	// Line 485, Address: 0x25f590, Func Offset: 0x5e0
	// Line 486, Address: 0x25f5a0, Func Offset: 0x5f0
	// Line 487, Address: 0x25f5ac, Func Offset: 0x5fc
	// Line 488, Address: 0x25f5bc, Func Offset: 0x60c
	// Line 489, Address: 0x25f5c8, Func Offset: 0x618
	// Line 490, Address: 0x25f5d8, Func Offset: 0x628
	// Line 491, Address: 0x25f5e4, Func Offset: 0x634
	// Line 497, Address: 0x25f5ec, Func Offset: 0x63c
	// Line 505, Address: 0x25f5f8, Func Offset: 0x648
	// Line 508, Address: 0x25f618, Func Offset: 0x668
	// Line 510, Address: 0x25f634, Func Offset: 0x684
	// Line 512, Address: 0x25f64c, Func Offset: 0x69c
	// Line 513, Address: 0x25f664, Func Offset: 0x6b4
	// Line 514, Address: 0x25f678, Func Offset: 0x6c8
	// Line 516, Address: 0x25f680, Func Offset: 0x6d0
	// Line 518, Address: 0x25f694, Func Offset: 0x6e4
	// Line 519, Address: 0x25f6a8, Func Offset: 0x6f8
	// Line 521, Address: 0x25f6c4, Func Offset: 0x714
	// Line 522, Address: 0x25f6dc, Func Offset: 0x72c
	// Line 523, Address: 0x25f6f8, Func Offset: 0x748
	// Line 525, Address: 0x25f700, Func Offset: 0x750
	// Line 531, Address: 0x25f710, Func Offset: 0x760
	// Line 532, Address: 0x25f718, Func Offset: 0x768
	// Line 535, Address: 0x25f720, Func Offset: 0x770
	// Line 536, Address: 0x25f730, Func Offset: 0x780
	// Line 537, Address: 0x25f73c, Func Offset: 0x78c
	// Line 538, Address: 0x25f74c, Func Offset: 0x79c
	// Line 539, Address: 0x25f758, Func Offset: 0x7a8
	// Line 540, Address: 0x25f768, Func Offset: 0x7b8
	// Line 541, Address: 0x25f774, Func Offset: 0x7c4
	// Line 542, Address: 0x25f784, Func Offset: 0x7d4
	// Line 543, Address: 0x25f790, Func Offset: 0x7e0
	// Line 545, Address: 0x25f7a8, Func Offset: 0x7f8
	// Line 548, Address: 0x25f7ac, Func Offset: 0x7fc
	// Line 550, Address: 0x25f7bc, Func Offset: 0x80c
	// Line 552, Address: 0x25f7d4, Func Offset: 0x824
	// Line 554, Address: 0x25f7dc, Func Offset: 0x82c
	// Line 556, Address: 0x25f7e0, Func Offset: 0x830
	// Func End, Address: 0x25f820, Func Offset: 0x870
}

// 
// Start address: 0x25f820
unsigned int HH_Class_Prefix_Water_10()
{
	unsigned long tex0;
	_anon0* pPk;
	unsigned int result;
	unsigned int j;
	int i;
	unsigned int interval;
	// Line 577, Address: 0x25f820, Func Offset: 0
	// Line 579, Address: 0x25f82c, Func Offset: 0xc
	// Line 585, Address: 0x25f838, Func Offset: 0x18
	// Line 588, Address: 0x25f840, Func Offset: 0x20
	// Line 590, Address: 0x25f850, Func Offset: 0x30
	// Line 593, Address: 0x25f864, Func Offset: 0x44
	// Line 595, Address: 0x25f8c8, Func Offset: 0xa8
	// Line 596, Address: 0x25f8e4, Func Offset: 0xc4
	// Line 608, Address: 0x25f90c, Func Offset: 0xec
	// Line 609, Address: 0x25f920, Func Offset: 0x100
	// Line 613, Address: 0x25f948, Func Offset: 0x128
	// Line 617, Address: 0x25f95c, Func Offset: 0x13c
	// Line 619, Address: 0x25f978, Func Offset: 0x158
	// Line 621, Address: 0x25f980, Func Offset: 0x160
	// Line 622, Address: 0x25f984, Func Offset: 0x164
	// Func End, Address: 0x25f998, Func Offset: 0x178
}

// 
// Start address: 0x25f9a0
unsigned int HH_Class_Suffix_Water_10()
{
	_anon0* pPk;
	unsigned int result;
	// Line 635, Address: 0x25f9a0, Func Offset: 0
	// Line 637, Address: 0x25f9ac, Func Offset: 0xc
	// Line 639, Address: 0x25f9b8, Func Offset: 0x18
	// Line 640, Address: 0x25f9c0, Func Offset: 0x20
	// Line 641, Address: 0x25f9d4, Func Offset: 0x34
	// Line 643, Address: 0x25f9dc, Func Offset: 0x3c
	// Line 644, Address: 0x25f9e0, Func Offset: 0x40
	// Func End, Address: 0x25f9f4, Func Offset: 0x54
}

// 
// Start address: 0x25fa00
unsigned int HH_Class_Water_10(void* pBlock, ImpactQueue_Element* pElement)
{
	WaveArea_Infomeation* pArea_Info;
	unsigned int i;
	unsigned int z;
	unsigned int x;
	Wave_Element wave_element;
	WaveArea_Infomeation* pInfo;
	unsigned int i;
	float pos[4];
	int area;
	float rad;
	float rad_omega;
	HH_Object_Water_10* pThis;
	unsigned int result;
	float __v;
	float __omega;
	float __arri;
	float __lost_time;
	float __distance;
	float _interval;
	float base_move;
	float degree;
	// Line 658, Address: 0x25fa00, Func Offset: 0
	// Line 665, Address: 0x25fa30, Func Offset: 0x30
	// Line 666, Address: 0x25fa34, Func Offset: 0x34
	// Line 668, Address: 0x25fa38, Func Offset: 0x38
	// Line 671, Address: 0x25fa60, Func Offset: 0x60
	// Line 673, Address: 0x25fa68, Func Offset: 0x68
	// Line 674, Address: 0x25fa70, Func Offset: 0x70
	// Line 678, Address: 0x25fa78, Func Offset: 0x78
	// Line 684, Address: 0x25fa80, Func Offset: 0x80
	// Line 685, Address: 0x25fa98, Func Offset: 0x98
	// Line 687, Address: 0x25fb58, Func Offset: 0x158
	// Line 688, Address: 0x25fb88, Func Offset: 0x188
	// Line 693, Address: 0x25fbb8, Func Offset: 0x1b8
	// Line 696, Address: 0x25fbd4, Func Offset: 0x1d4
	// Line 697, Address: 0x25fbe4, Func Offset: 0x1e4
	// Line 698, Address: 0x25fbf0, Func Offset: 0x1f0
	// Line 699, Address: 0x25fc0c, Func Offset: 0x20c
	// Line 701, Address: 0x25fc14, Func Offset: 0x214
	// Line 705, Address: 0x25fc1c, Func Offset: 0x21c
	// Line 706, Address: 0x25fc28, Func Offset: 0x228
	// Line 707, Address: 0x25fc4c, Func Offset: 0x24c
	// Line 717, Address: 0x25fc50, Func Offset: 0x250
	// Line 718, Address: 0x25fc5c, Func Offset: 0x25c
	// Line 721, Address: 0x25fc70, Func Offset: 0x270
	// Line 727, Address: 0x25fc98, Func Offset: 0x298
	// Line 729, Address: 0x25fcb0, Func Offset: 0x2b0
	// Line 730, Address: 0x25fccc, Func Offset: 0x2cc
	// Line 732, Address: 0x25fce8, Func Offset: 0x2e8
	// Line 733, Address: 0x25fd0c, Func Offset: 0x30c
	// Line 734, Address: 0x25fd30, Func Offset: 0x330
	// Line 735, Address: 0x25fd34, Func Offset: 0x334
	// Line 737, Address: 0x25fd3c, Func Offset: 0x33c
	// Line 739, Address: 0x25fd44, Func Offset: 0x344
	// Line 741, Address: 0x25fd4c, Func Offset: 0x34c
	// Line 742, Address: 0x25fd70, Func Offset: 0x370
	// Line 743, Address: 0x25fd74, Func Offset: 0x374
	// Line 745, Address: 0x25fd7c, Func Offset: 0x37c
	// Line 747, Address: 0x25fd84, Func Offset: 0x384
	// Line 750, Address: 0x25fd88, Func Offset: 0x388
	// Line 751, Address: 0x25fd90, Func Offset: 0x390
	// Line 752, Address: 0x25fd94, Func Offset: 0x394
	// Line 753, Address: 0x25fd98, Func Offset: 0x398
	// Line 755, Address: 0x25fd9c, Func Offset: 0x39c
	// Line 756, Address: 0x25fda8, Func Offset: 0x3a8
	// Line 757, Address: 0x25fdb4, Func Offset: 0x3b4
	// Line 758, Address: 0x25fdc0, Func Offset: 0x3c0
	// Line 759, Address: 0x25fddc, Func Offset: 0x3dc
	// Line 760, Address: 0x25fde8, Func Offset: 0x3e8
	// Line 763, Address: 0x25fdec, Func Offset: 0x3ec
	// Line 764, Address: 0x25fe00, Func Offset: 0x400
	// Line 766, Address: 0x25fe08, Func Offset: 0x408
	// Line 770, Address: 0x25fe18, Func Offset: 0x418
	// Line 774, Address: 0x25fe20, Func Offset: 0x420
	// Line 775, Address: 0x25fe2c, Func Offset: 0x42c
	// Line 776, Address: 0x25fe40, Func Offset: 0x440
	// Line 778, Address: 0x25fe58, Func Offset: 0x458
	// Line 779, Address: 0x25fe70, Func Offset: 0x470
	// Line 785, Address: 0x25fe90, Func Offset: 0x490
	// Line 787, Address: 0x25fea0, Func Offset: 0x4a0
	// Line 789, Address: 0x25feb0, Func Offset: 0x4b0
	// Line 792, Address: 0x25feb8, Func Offset: 0x4b8
	// Line 793, Address: 0x25fed0, Func Offset: 0x4d0
	// Line 838, Address: 0x25fed8, Func Offset: 0x4d8
	// Line 839, Address: 0x25fef4, Func Offset: 0x4f4
	// Line 842, Address: 0x25fefc, Func Offset: 0x4fc
	// Line 843, Address: 0x25ff00, Func Offset: 0x500
	// Line 846, Address: 0x25ff04, Func Offset: 0x504
	// Line 847, Address: 0x25ff08, Func Offset: 0x508
	// Func End, Address: 0x25ff3c, Func Offset: 0x53c
}

