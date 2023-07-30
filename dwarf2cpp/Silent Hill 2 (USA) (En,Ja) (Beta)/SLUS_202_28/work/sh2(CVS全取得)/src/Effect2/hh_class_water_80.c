typedef struct HH_Object_Water_80;
typedef struct ImpactQueue_Element;
typedef struct Object_DataBlock_Header;
typedef struct _anon0;
typedef struct ImpactQueue_ElementOption;
typedef struct WaveArea_Infomeation;
typedef struct Wave_Element;
typedef struct _SH2_SYS;


typedef unsigned int type_0[1];
typedef unsigned long type_1[2];
typedef unsigned long type_2[2];
typedef float type_3[4][2];
typedef WaveArea_Infomeation type_4[1];
typedef float type_5[2];
typedef int type_6[2];
typedef int type_7[4];
typedef unsigned int type_8[2];
typedef unsigned int type_9[2][4];
typedef float type_10[4];
typedef unsigned int type_11[1];
typedef float type_12[4];
typedef float type_13[4][4];
typedef Wave_Element type_14[20];
typedef float type_15[2025];
typedef unsigned int type_16[2];
typedef float* type_17[1];
typedef unsigned int type_18[2][4];
typedef float type_19[1];
typedef unsigned int type_20[2];
typedef unsigned int type_21[8];
typedef unsigned int type_22[1];
typedef Wave_Element type_23[3];
typedef unsigned int type_24[2];

struct HH_Object_Water_80
{
	Object_DataBlock_Header Header;
	unsigned char Step;
	unsigned char Motion_Step;
	float Timer;
	float ST_Defference[4];
	float Location_Defference[4];
	Wave_Element Wave_Info[20];
	float Area00_Grid_Y_Value[2025];
	float* pArea_Grid_Y_Value_Table[1];
	float Area_WavePostTime[1];
	unsigned int Area_Enable_Table[1];
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

struct _SH2_SYS
{
	unsigned int step[8];
	unsigned int pre_playable;
	int main_status;
	unsigned int soft_reset;
	unsigned int frame_cnt;
};

unsigned int _area00_view_list[1];
WaveArea_Infomeation _Area_Info_List[1];
Wave_Element _wave_element_list[3];
_SH2_SYS Sh2sys;

void Grid_Work_Initialize(HH_Object_Water_80* pThis);
unsigned int Object_Initialize(HH_Object_Water_80* pThis);
unsigned int Object_Draw(HH_Object_Water_80* pThis, float* pGrid_Y_Value, float* WorldLocation, unsigned int Grid_X_Max, unsigned int Grid_Z_Max);
unsigned int HH_Class_Prefix_Water_80();
unsigned int HH_Class_Suffix_Water_80();
unsigned int HH_Class_Water_80(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x296100
void Grid_Work_Initialize(HH_Object_Water_80* pThis)
{
	// Line 208, Address: 0x296100, Func Offset: 0
	// Line 210, Address: 0x296108, Func Offset: 0x8
	// Line 211, Address: 0x29611c, Func Offset: 0x1c
	// Func End, Address: 0x29612c, Func Offset: 0x2c
}

// 
// Start address: 0x296130
unsigned int Object_Initialize(HH_Object_Water_80* pThis)
{
	unsigned int result;
	// Line 224, Address: 0x296130, Func Offset: 0
	// Line 232, Address: 0x296140, Func Offset: 0x10
	// Line 234, Address: 0x296144, Func Offset: 0x14
	// Line 236, Address: 0x296148, Func Offset: 0x18
	// Line 237, Address: 0x296168, Func Offset: 0x38
	// Line 239, Address: 0x296188, Func Offset: 0x58
	// Line 241, Address: 0x29618c, Func Offset: 0x5c
	// Line 243, Address: 0x296194, Func Offset: 0x64
	// Line 295, Address: 0x29619c, Func Offset: 0x6c
	// Line 296, Address: 0x2961a0, Func Offset: 0x70
	// Func End, Address: 0x2961b4, Func Offset: 0x84
}

// 
// Start address: 0x2961c0
unsigned int Object_Draw(HH_Object_Water_80* pThis, float* pGrid_Y_Value, float* WorldLocation, unsigned int Grid_X_Max, unsigned int Grid_Z_Max)
{
	unsigned int fog_col_i;
	float fog_col_f;
	float color_scale;
	unsigned int fog_col_i;
	float fog_col_f;
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
	float cos_theta;
	float rev[4];
	unsigned int* pPk_End;
	unsigned int* pPk_Current;
	float cos_theta;
	float far_z;
	float Parameter[4];
	float Light_Color[4];
	float dir[4];
	float pos[4];
	float view_dir[4];
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
	float fog_ratio_f;
	float Ambient_Color[4];
	float sx;
	float ty;
	unsigned long _GifTag_Tri[2];
	float _n[4];
	unsigned int flag;
	float Light_Base[4];
	// Line 449, Address: 0x2961c0, Func Offset: 0
	// Line 481, Address: 0x296200, Func Offset: 0x40
	// Line 484, Address: 0x29620c, Func Offset: 0x4c
	// Line 504, Address: 0x296210, Func Offset: 0x50
	// Line 509, Address: 0x296214, Func Offset: 0x54
	// Line 511, Address: 0x296220, Func Offset: 0x60
	// Line 512, Address: 0x296238, Func Offset: 0x78
	// Line 526, Address: 0x296250, Func Offset: 0x90
	// Line 530, Address: 0x296260, Func Offset: 0xa0
	// Line 533, Address: 0x296270, Func Offset: 0xb0
	// Line 535, Address: 0x296294, Func Offset: 0xd4
	// Line 536, Address: 0x2962a8, Func Offset: 0xe8
	// Line 537, Address: 0x2962bc, Func Offset: 0xfc
	// Line 539, Address: 0x2962c4, Func Offset: 0x104
	// Line 540, Address: 0x2962d0, Func Offset: 0x110
	// Line 541, Address: 0x2962dc, Func Offset: 0x11c
	// Line 543, Address: 0x2962e8, Func Offset: 0x128
	// Line 547, Address: 0x296300, Func Offset: 0x140
	// Line 552, Address: 0x296314, Func Offset: 0x154
	// Line 557, Address: 0x296320, Func Offset: 0x160
	// Line 559, Address: 0x29632c, Func Offset: 0x16c
	// Line 560, Address: 0x296340, Func Offset: 0x180
	// Line 563, Address: 0x296354, Func Offset: 0x194
	// Line 564, Address: 0x296360, Func Offset: 0x1a0
	// Line 566, Address: 0x296374, Func Offset: 0x1b4
	// Line 568, Address: 0x29637c, Func Offset: 0x1bc
	// Line 571, Address: 0x296388, Func Offset: 0x1c8
	// Line 572, Address: 0x296394, Func Offset: 0x1d4
	// Line 573, Address: 0x2963f0, Func Offset: 0x230
	// Line 574, Address: 0x296454, Func Offset: 0x294
	// Line 576, Address: 0x29646c, Func Offset: 0x2ac
	// Line 578, Address: 0x296484, Func Offset: 0x2c4
	// Line 586, Address: 0x29648c, Func Offset: 0x2cc
	// Line 589, Address: 0x2964a8, Func Offset: 0x2e8
	// Line 602, Address: 0x2964b4, Func Offset: 0x2f4
	// Line 604, Address: 0x296500, Func Offset: 0x340
	// Line 605, Address: 0x296560, Func Offset: 0x3a0
	// Line 606, Address: 0x296578, Func Offset: 0x3b8
	// Line 607, Address: 0x296594, Func Offset: 0x3d4
	// Line 616, Address: 0x2965a8, Func Offset: 0x3e8
	// Line 618, Address: 0x2965d0, Func Offset: 0x410
	// Line 619, Address: 0x2965f0, Func Offset: 0x430
	// Line 620, Address: 0x2965fc, Func Offset: 0x43c
	// Line 622, Address: 0x296608, Func Offset: 0x448
	// Line 623, Address: 0x29661c, Func Offset: 0x45c
	// Line 626, Address: 0x296630, Func Offset: 0x470
	// Line 627, Address: 0x296644, Func Offset: 0x484
	// Line 629, Address: 0x296658, Func Offset: 0x498
	// Line 630, Address: 0x296668, Func Offset: 0x4a8
	// Line 631, Address: 0x296678, Func Offset: 0x4b8
	// Line 632, Address: 0x296680, Func Offset: 0x4c0
	// Line 634, Address: 0x296684, Func Offset: 0x4c4
	// Line 640, Address: 0x296698, Func Offset: 0x4d8
	// Line 643, Address: 0x2966a0, Func Offset: 0x4e0
	// Line 647, Address: 0x2966c0, Func Offset: 0x500
	// Line 649, Address: 0x2966d0, Func Offset: 0x510
	// Line 651, Address: 0x2966e8, Func Offset: 0x528
	// Line 652, Address: 0x296700, Func Offset: 0x540
	// Line 653, Address: 0x296714, Func Offset: 0x554
	// Line 655, Address: 0x29671c, Func Offset: 0x55c
	// Line 656, Address: 0x296730, Func Offset: 0x570
	// Line 657, Address: 0x296748, Func Offset: 0x588
	// Line 659, Address: 0x296764, Func Offset: 0x5a4
	// Line 660, Address: 0x296774, Func Offset: 0x5b4
	// Line 666, Address: 0x296778, Func Offset: 0x5b8
	// Line 667, Address: 0x296798, Func Offset: 0x5d8
	// Line 669, Address: 0x2967c4, Func Offset: 0x604
	// Line 670, Address: 0x2967d8, Func Offset: 0x618
	// Line 681, Address: 0x2967e8, Func Offset: 0x628
	// Line 682, Address: 0x2967f8, Func Offset: 0x638
	// Line 683, Address: 0x296804, Func Offset: 0x644
	// Line 684, Address: 0x296814, Func Offset: 0x654
	// Line 685, Address: 0x296820, Func Offset: 0x660
	// Line 686, Address: 0x296830, Func Offset: 0x670
	// Line 687, Address: 0x29683c, Func Offset: 0x67c
	// Line 693, Address: 0x296844, Func Offset: 0x684
	// Line 701, Address: 0x296850, Func Offset: 0x690
	// Line 705, Address: 0x296870, Func Offset: 0x6b0
	// Line 707, Address: 0x296880, Func Offset: 0x6c0
	// Line 709, Address: 0x296898, Func Offset: 0x6d8
	// Line 710, Address: 0x2968b0, Func Offset: 0x6f0
	// Line 711, Address: 0x2968c4, Func Offset: 0x704
	// Line 713, Address: 0x2968cc, Func Offset: 0x70c
	// Line 714, Address: 0x2968e0, Func Offset: 0x720
	// Line 715, Address: 0x2968f8, Func Offset: 0x738
	// Line 717, Address: 0x296914, Func Offset: 0x754
	// Line 718, Address: 0x296924, Func Offset: 0x764
	// Line 724, Address: 0x296928, Func Offset: 0x768
	// Line 725, Address: 0x296948, Func Offset: 0x788
	// Line 727, Address: 0x296974, Func Offset: 0x7b4
	// Line 728, Address: 0x296988, Func Offset: 0x7c8
	// Line 732, Address: 0x296998, Func Offset: 0x7d8
	// Line 733, Address: 0x2969a0, Func Offset: 0x7e0
	// Line 736, Address: 0x2969a8, Func Offset: 0x7e8
	// Line 737, Address: 0x2969b8, Func Offset: 0x7f8
	// Line 738, Address: 0x2969c4, Func Offset: 0x804
	// Line 739, Address: 0x2969d4, Func Offset: 0x814
	// Line 740, Address: 0x2969e0, Func Offset: 0x820
	// Line 741, Address: 0x2969f0, Func Offset: 0x830
	// Line 742, Address: 0x2969fc, Func Offset: 0x83c
	// Line 743, Address: 0x296a0c, Func Offset: 0x84c
	// Line 744, Address: 0x296a18, Func Offset: 0x858
	// Line 745, Address: 0x296a2c, Func Offset: 0x86c
	// Line 748, Address: 0x296a30, Func Offset: 0x870
	// Line 750, Address: 0x296a40, Func Offset: 0x880
	// Line 752, Address: 0x296a58, Func Offset: 0x898
	// Line 754, Address: 0x296a60, Func Offset: 0x8a0
	// Line 755, Address: 0x296a64, Func Offset: 0x8a4
	// Func End, Address: 0x296a98, Func Offset: 0x8d8
}

// 
// Start address: 0x296aa0
unsigned int HH_Class_Prefix_Water_80()
{
	_anon0* pPk;
	unsigned int result;
	// Line 775, Address: 0x296aa0, Func Offset: 0
	// Line 777, Address: 0x296aac, Func Offset: 0xc
	// Line 783, Address: 0x296ab8, Func Offset: 0x18
	// Line 784, Address: 0x296ac0, Func Offset: 0x20
	// Line 796, Address: 0x296ad8, Func Offset: 0x38
	// Line 797, Address: 0x296af0, Func Offset: 0x50
	// Line 799, Address: 0x296af8, Func Offset: 0x58
	// Line 800, Address: 0x296afc, Func Offset: 0x5c
	// Func End, Address: 0x296b10, Func Offset: 0x70
}

// 
// Start address: 0x296b10
unsigned int HH_Class_Suffix_Water_80()
{
	_anon0* pPk;
	unsigned int result;
	// Line 813, Address: 0x296b10, Func Offset: 0
	// Line 815, Address: 0x296b1c, Func Offset: 0xc
	// Line 817, Address: 0x296b28, Func Offset: 0x18
	// Line 818, Address: 0x296b30, Func Offset: 0x20
	// Line 819, Address: 0x296b54, Func Offset: 0x44
	// Line 831, Address: 0x296b6c, Func Offset: 0x5c
	// Line 833, Address: 0x296b74, Func Offset: 0x64
	// Line 834, Address: 0x296b78, Func Offset: 0x68
	// Func End, Address: 0x296b8c, Func Offset: 0x7c
}

// 
// Start address: 0x296b90
unsigned int HH_Class_Water_80(void* pBlock, ImpactQueue_Element* pElement)
{
	float world_location[4];
	WaveArea_Infomeation* pArea_Info;
	unsigned int i;
	float temp[4];
	unsigned int wave_type_index;
	unsigned int z;
	unsigned int x;
	unsigned int disable_num;
	unsigned int post_grid[2][4];
	Wave_Element wave_element;
	WaveArea_Infomeation* pInfo;
	float delta;
	unsigned int i;
	float temp[4];
	int area;
	float rad;
	float rad_omega;
	HH_Object_Water_80* pThis;
	unsigned int result;
	float delta_y;
	float delta_y_demo;
	float _interval;
	float base_move;
	float degree;
	// Line 848, Address: 0x296b90, Func Offset: 0
	// Line 855, Address: 0x296bbc, Func Offset: 0x2c
	// Line 856, Address: 0x296bc0, Func Offset: 0x30
	// Line 858, Address: 0x296bc4, Func Offset: 0x34
	// Line 861, Address: 0x296bec, Func Offset: 0x5c
	// Line 863, Address: 0x296bf4, Func Offset: 0x64
	// Line 864, Address: 0x296bfc, Func Offset: 0x6c
	// Line 865, Address: 0x296c04, Func Offset: 0x74
	// Line 869, Address: 0x296c0c, Func Offset: 0x7c
	// Line 875, Address: 0x296c14, Func Offset: 0x84
	// Line 876, Address: 0x296c2c, Func Offset: 0x9c
	// Line 878, Address: 0x296cec, Func Offset: 0x15c
	// Line 879, Address: 0x296d1c, Func Offset: 0x18c
	// Line 884, Address: 0x296d4c, Func Offset: 0x1bc
	// Line 887, Address: 0x296d68, Func Offset: 0x1d8
	// Line 889, Address: 0x296d74, Func Offset: 0x1e4
	// Line 890, Address: 0x296d84, Func Offset: 0x1f4
	// Line 891, Address: 0x296d90, Func Offset: 0x200
	// Line 892, Address: 0x296dac, Func Offset: 0x21c
	// Line 894, Address: 0x296db4, Func Offset: 0x224
	// Line 896, Address: 0x296dbc, Func Offset: 0x22c
	// Line 897, Address: 0x296de0, Func Offset: 0x250
	// Line 911, Address: 0x296de4, Func Offset: 0x254
	// Line 912, Address: 0x296df0, Func Offset: 0x260
	// Line 920, Address: 0x296e14, Func Offset: 0x284
	// Line 923, Address: 0x296e20, Func Offset: 0x290
	// Line 924, Address: 0x296e44, Func Offset: 0x2b4
	// Line 926, Address: 0x296e58, Func Offset: 0x2c8
	// Line 927, Address: 0x296e60, Func Offset: 0x2d0
	// Line 929, Address: 0x296e84, Func Offset: 0x2f4
	// Line 930, Address: 0x296ea8, Func Offset: 0x318
	// Line 932, Address: 0x296eac, Func Offset: 0x31c
	// Line 933, Address: 0x296eb0, Func Offset: 0x320
	// Line 936, Address: 0x296ed4, Func Offset: 0x344
	// Line 937, Address: 0x296ee0, Func Offset: 0x350
	// Line 938, Address: 0x296eec, Func Offset: 0x35c
	// Line 939, Address: 0x296ef0, Func Offset: 0x360
	// Line 941, Address: 0x296f0c, Func Offset: 0x37c
	// Line 945, Address: 0x296f14, Func Offset: 0x384
	// Line 946, Address: 0x296f5c, Func Offset: 0x3cc
	// Line 947, Address: 0x296f60, Func Offset: 0x3d0
	// Line 949, Address: 0x296f68, Func Offset: 0x3d8
	// Line 951, Address: 0x296f84, Func Offset: 0x3f4
	// Line 952, Address: 0x296f98, Func Offset: 0x408
	// Line 953, Address: 0x296fa0, Func Offset: 0x410
	// Line 955, Address: 0x296fb4, Func Offset: 0x424
	// Line 963, Address: 0x296fb8, Func Offset: 0x428
	// Line 964, Address: 0x296fc4, Func Offset: 0x434
	// Line 965, Address: 0x296fe0, Func Offset: 0x450
	// Line 967, Address: 0x296ff8, Func Offset: 0x468
	// Line 968, Address: 0x297014, Func Offset: 0x484
	// Line 971, Address: 0x29701c, Func Offset: 0x48c
	// Line 973, Address: 0x297038, Func Offset: 0x4a8
	// Line 975, Address: 0x297054, Func Offset: 0x4c4
	// Line 982, Address: 0x297064, Func Offset: 0x4d4
	// Line 983, Address: 0x297070, Func Offset: 0x4e0
	// Line 984, Address: 0x297084, Func Offset: 0x4f4
	// Line 988, Address: 0x29709c, Func Offset: 0x50c
	// Line 990, Address: 0x2970b0, Func Offset: 0x520
	// Line 992, Address: 0x2970c8, Func Offset: 0x538
	// Line 994, Address: 0x2970e8, Func Offset: 0x558
	// Line 996, Address: 0x2970f8, Func Offset: 0x568
	// Line 1046, Address: 0x297108, Func Offset: 0x578
	// Line 1047, Address: 0x297124, Func Offset: 0x594
	// Line 1050, Address: 0x29712c, Func Offset: 0x59c
	// Line 1051, Address: 0x297130, Func Offset: 0x5a0
	// Line 1054, Address: 0x297134, Func Offset: 0x5a4
	// Line 1055, Address: 0x297138, Func Offset: 0x5a8
	// Func End, Address: 0x297168, Func Offset: 0x5d8
}

