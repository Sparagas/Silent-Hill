typedef struct ImpactQueue_Element;
typedef struct WaveArea_Infomeation;
typedef struct _anon0;
typedef struct HH_Object_Water_90;
typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_ElementOption;
typedef struct Wave_Element;
typedef struct _SH2_SYS;


typedef unsigned int type_0[1];
typedef float type_1[4][2];
typedef WaveArea_Infomeation type_2[1];
typedef float type_3[2];
typedef int type_4[2];
typedef int type_5[4];
typedef float type_6[4];
typedef unsigned int type_7[1];
typedef float type_8[4];
typedef float type_9[4][4];
typedef Wave_Element type_10[20];
typedef float type_11[1768];
typedef unsigned int type_12[2];
typedef float* type_13[1];
typedef unsigned int type_14[2][4];
typedef float type_15[1];
typedef unsigned int type_16[2];
typedef unsigned int type_17[8];
typedef unsigned int type_18[1];
typedef unsigned long type_19[2];
typedef unsigned int type_20[2];
typedef unsigned long type_21[2];

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

struct HH_Object_Water_90
{
	Object_DataBlock_Header Header;
	unsigned char Step;
	unsigned char Motion_Step;
	float Timer;
	float ST_Defference[4];
	float Location_Defference[4];
	Wave_Element Wave_Info[20];
	float Area00_Grid_Y_Value[1768];
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
_SH2_SYS Sh2sys;

void Grid_Work_Initialize(HH_Object_Water_90* pThis);
unsigned int Object_Initialize(HH_Object_Water_90* pThis);
unsigned int Object_Draw(HH_Object_Water_90* pThis, float* pGrid_Y_Value, float* WorldLocation, unsigned int Grid_X_Max, unsigned int Grid_Z_Max);
unsigned int HH_Class_Prefix_Water_90();
unsigned int HH_Class_Suffix_Water_90();
unsigned int HH_Class_Water_90(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x297170
void Grid_Work_Initialize(HH_Object_Water_90* pThis)
{
	// Line 148, Address: 0x297170, Func Offset: 0
	// Line 150, Address: 0x297178, Func Offset: 0x8
	// Line 151, Address: 0x29718c, Func Offset: 0x1c
	// Func End, Address: 0x29719c, Func Offset: 0x2c
}

// 
// Start address: 0x2971a0
unsigned int Object_Initialize(HH_Object_Water_90* pThis)
{
	unsigned int result;
	// Line 164, Address: 0x2971a0, Func Offset: 0
	// Line 172, Address: 0x2971b0, Func Offset: 0x10
	// Line 174, Address: 0x2971b4, Func Offset: 0x14
	// Line 176, Address: 0x2971b8, Func Offset: 0x18
	// Line 177, Address: 0x2971d8, Func Offset: 0x38
	// Line 179, Address: 0x2971f8, Func Offset: 0x58
	// Line 181, Address: 0x2971fc, Func Offset: 0x5c
	// Line 183, Address: 0x297204, Func Offset: 0x64
	// Line 235, Address: 0x29720c, Func Offset: 0x6c
	// Line 236, Address: 0x297210, Func Offset: 0x70
	// Func End, Address: 0x297224, Func Offset: 0x84
}

// 
// Start address: 0x297230
unsigned int Object_Draw(HH_Object_Water_90* pThis, float* pGrid_Y_Value, float* WorldLocation, unsigned int Grid_X_Max, unsigned int Grid_Z_Max)
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
	float z;
	float y;
	float x;
	unsigned int flag;
	float light_alpha;
	float amb_alpha;
	float Light_Base[4];
	// Line 389, Address: 0x297230, Func Offset: 0
	// Line 420, Address: 0x297270, Func Offset: 0x40
	// Line 423, Address: 0x29727c, Func Offset: 0x4c
	// Line 443, Address: 0x297280, Func Offset: 0x50
	// Line 448, Address: 0x297284, Func Offset: 0x54
	// Line 450, Address: 0x297290, Func Offset: 0x60
	// Line 451, Address: 0x2972a8, Func Offset: 0x78
	// Line 459, Address: 0x2972c0, Func Offset: 0x90
	// Line 460, Address: 0x2972d0, Func Offset: 0xa0
	// Line 465, Address: 0x2972dc, Func Offset: 0xac
	// Line 469, Address: 0x2972ec, Func Offset: 0xbc
	// Line 484, Address: 0x2972fc, Func Offset: 0xcc
	// Line 485, Address: 0x297308, Func Offset: 0xd8
	// Line 486, Address: 0x297314, Func Offset: 0xe4
	// Line 488, Address: 0x297320, Func Offset: 0xf0
	// Line 492, Address: 0x297338, Func Offset: 0x108
	// Line 497, Address: 0x29734c, Func Offset: 0x11c
	// Line 502, Address: 0x297358, Func Offset: 0x128
	// Line 504, Address: 0x297364, Func Offset: 0x134
	// Line 505, Address: 0x297378, Func Offset: 0x148
	// Line 508, Address: 0x29738c, Func Offset: 0x15c
	// Line 509, Address: 0x297398, Func Offset: 0x168
	// Line 511, Address: 0x2973ac, Func Offset: 0x17c
	// Line 513, Address: 0x2973b4, Func Offset: 0x184
	// Line 516, Address: 0x2973c0, Func Offset: 0x190
	// Line 517, Address: 0x2973cc, Func Offset: 0x19c
	// Line 518, Address: 0x297428, Func Offset: 0x1f8
	// Line 519, Address: 0x29748c, Func Offset: 0x25c
	// Line 521, Address: 0x2974a4, Func Offset: 0x274
	// Line 523, Address: 0x2974bc, Func Offset: 0x28c
	// Line 531, Address: 0x2974c4, Func Offset: 0x294
	// Line 534, Address: 0x2974e0, Func Offset: 0x2b0
	// Line 547, Address: 0x2974ec, Func Offset: 0x2bc
	// Line 549, Address: 0x297538, Func Offset: 0x308
	// Line 550, Address: 0x297598, Func Offset: 0x368
	// Line 551, Address: 0x2975b0, Func Offset: 0x380
	// Line 552, Address: 0x2975cc, Func Offset: 0x39c
	// Line 561, Address: 0x2975e0, Func Offset: 0x3b0
	// Line 563, Address: 0x297608, Func Offset: 0x3d8
	// Line 564, Address: 0x297628, Func Offset: 0x3f8
	// Line 565, Address: 0x297634, Func Offset: 0x404
	// Line 567, Address: 0x297640, Func Offset: 0x410
	// Line 568, Address: 0x297654, Func Offset: 0x424
	// Line 571, Address: 0x297668, Func Offset: 0x438
	// Line 572, Address: 0x29767c, Func Offset: 0x44c
	// Line 574, Address: 0x297690, Func Offset: 0x460
	// Line 575, Address: 0x2976a0, Func Offset: 0x470
	// Line 576, Address: 0x2976b0, Func Offset: 0x480
	// Line 577, Address: 0x2976b8, Func Offset: 0x488
	// Line 579, Address: 0x2976bc, Func Offset: 0x48c
	// Line 585, Address: 0x2976d0, Func Offset: 0x4a0
	// Line 588, Address: 0x2976d8, Func Offset: 0x4a8
	// Line 592, Address: 0x2976f8, Func Offset: 0x4c8
	// Line 594, Address: 0x297708, Func Offset: 0x4d8
	// Line 596, Address: 0x297720, Func Offset: 0x4f0
	// Line 597, Address: 0x297738, Func Offset: 0x508
	// Line 598, Address: 0x29774c, Func Offset: 0x51c
	// Line 600, Address: 0x297754, Func Offset: 0x524
	// Line 601, Address: 0x297768, Func Offset: 0x538
	// Line 602, Address: 0x297780, Func Offset: 0x550
	// Line 604, Address: 0x29779c, Func Offset: 0x56c
	// Line 605, Address: 0x2977ac, Func Offset: 0x57c
	// Line 611, Address: 0x2977b0, Func Offset: 0x580
	// Line 612, Address: 0x2977d0, Func Offset: 0x5a0
	// Line 614, Address: 0x2977fc, Func Offset: 0x5cc
	// Line 615, Address: 0x297810, Func Offset: 0x5e0
	// Line 626, Address: 0x297820, Func Offset: 0x5f0
	// Line 627, Address: 0x297830, Func Offset: 0x600
	// Line 628, Address: 0x29783c, Func Offset: 0x60c
	// Line 629, Address: 0x29784c, Func Offset: 0x61c
	// Line 630, Address: 0x297858, Func Offset: 0x628
	// Line 631, Address: 0x297868, Func Offset: 0x638
	// Line 632, Address: 0x297874, Func Offset: 0x644
	// Line 638, Address: 0x29787c, Func Offset: 0x64c
	// Line 646, Address: 0x297888, Func Offset: 0x658
	// Line 650, Address: 0x2978a8, Func Offset: 0x678
	// Line 652, Address: 0x2978b8, Func Offset: 0x688
	// Line 654, Address: 0x2978d0, Func Offset: 0x6a0
	// Line 655, Address: 0x2978e8, Func Offset: 0x6b8
	// Line 656, Address: 0x2978fc, Func Offset: 0x6cc
	// Line 658, Address: 0x297904, Func Offset: 0x6d4
	// Line 659, Address: 0x297918, Func Offset: 0x6e8
	// Line 660, Address: 0x297930, Func Offset: 0x700
	// Line 662, Address: 0x29794c, Func Offset: 0x71c
	// Line 663, Address: 0x29795c, Func Offset: 0x72c
	// Line 669, Address: 0x297960, Func Offset: 0x730
	// Line 670, Address: 0x297980, Func Offset: 0x750
	// Line 672, Address: 0x2979ac, Func Offset: 0x77c
	// Line 673, Address: 0x2979c0, Func Offset: 0x790
	// Line 677, Address: 0x2979d0, Func Offset: 0x7a0
	// Line 678, Address: 0x2979d8, Func Offset: 0x7a8
	// Line 681, Address: 0x2979e0, Func Offset: 0x7b0
	// Line 682, Address: 0x2979f0, Func Offset: 0x7c0
	// Line 683, Address: 0x2979fc, Func Offset: 0x7cc
	// Line 684, Address: 0x297a0c, Func Offset: 0x7dc
	// Line 685, Address: 0x297a18, Func Offset: 0x7e8
	// Line 686, Address: 0x297a28, Func Offset: 0x7f8
	// Line 687, Address: 0x297a34, Func Offset: 0x804
	// Line 688, Address: 0x297a44, Func Offset: 0x814
	// Line 689, Address: 0x297a50, Func Offset: 0x820
	// Line 690, Address: 0x297a64, Func Offset: 0x834
	// Line 693, Address: 0x297a68, Func Offset: 0x838
	// Line 695, Address: 0x297a78, Func Offset: 0x848
	// Line 697, Address: 0x297a90, Func Offset: 0x860
	// Line 699, Address: 0x297a98, Func Offset: 0x868
	// Line 700, Address: 0x297a9c, Func Offset: 0x86c
	// Func End, Address: 0x297ad0, Func Offset: 0x8a0
}

// 
// Start address: 0x297ad0
unsigned int HH_Class_Prefix_Water_90()
{
	unsigned long tex0;
	_anon0* pPk;
	unsigned int result;
	unsigned int j;
	int i;
	unsigned int interval;
	// Line 720, Address: 0x297ad0, Func Offset: 0
	// Line 722, Address: 0x297adc, Func Offset: 0xc
	// Line 728, Address: 0x297ae8, Func Offset: 0x18
	// Line 730, Address: 0x297af0, Func Offset: 0x20
	// Line 732, Address: 0x297b08, Func Offset: 0x38
	// Line 733, Address: 0x297b18, Func Offset: 0x48
	// Line 736, Address: 0x297b2c, Func Offset: 0x5c
	// Line 738, Address: 0x297b90, Func Offset: 0xc0
	// Line 739, Address: 0x297bac, Func Offset: 0xdc
	// Line 751, Address: 0x297bd4, Func Offset: 0x104
	// Line 752, Address: 0x297be8, Func Offset: 0x118
	// Line 756, Address: 0x297c10, Func Offset: 0x140
	// Line 760, Address: 0x297c24, Func Offset: 0x154
	// Line 762, Address: 0x297c40, Func Offset: 0x170
	// Line 764, Address: 0x297c48, Func Offset: 0x178
	// Line 765, Address: 0x297c4c, Func Offset: 0x17c
	// Func End, Address: 0x297c60, Func Offset: 0x190
}

// 
// Start address: 0x297c60
unsigned int HH_Class_Suffix_Water_90()
{
	_anon0* pPk;
	unsigned int result;
	// Line 778, Address: 0x297c60, Func Offset: 0
	// Line 780, Address: 0x297c6c, Func Offset: 0xc
	// Line 782, Address: 0x297c78, Func Offset: 0x18
	// Line 783, Address: 0x297c80, Func Offset: 0x20
	// Line 784, Address: 0x297c94, Func Offset: 0x34
	// Line 785, Address: 0x297cb8, Func Offset: 0x58
	// Line 787, Address: 0x297cc0, Func Offset: 0x60
	// Line 788, Address: 0x297cc4, Func Offset: 0x64
	// Func End, Address: 0x297cd8, Func Offset: 0x78
}

// 
// Start address: 0x297ce0
unsigned int HH_Class_Water_90(void* pBlock, ImpactQueue_Element* pElement)
{
	float world_location[4];
	WaveArea_Infomeation* pArea_Info;
	unsigned int i;
	unsigned int z;
	unsigned int x;
	Wave_Element wave_element;
	WaveArea_Infomeation* pInfo;
	unsigned int i;
	float temp[4];
	int area;
	float rad;
	float rad_omega;
	HH_Object_Water_90* pThis;
	unsigned int result;
	unsigned int run;
	float __v;
	float __omega;
	float __arri;
	float __lost_time;
	float __distance;
	unsigned int z_range;
	float _interval;
	float base_move;
	float degree;
	// Line 802, Address: 0x297ce0, Func Offset: 0
	// Line 809, Address: 0x297d08, Func Offset: 0x28
	// Line 810, Address: 0x297d0c, Func Offset: 0x2c
	// Line 813, Address: 0x297d10, Func Offset: 0x30
	// Line 816, Address: 0x297d38, Func Offset: 0x58
	// Line 818, Address: 0x297d40, Func Offset: 0x60
	// Line 819, Address: 0x297d48, Func Offset: 0x68
	// Line 823, Address: 0x297d50, Func Offset: 0x70
	// Line 824, Address: 0x297d60, Func Offset: 0x80
	// Line 831, Address: 0x297d68, Func Offset: 0x88
	// Line 832, Address: 0x297d80, Func Offset: 0xa0
	// Line 834, Address: 0x297e40, Func Offset: 0x160
	// Line 835, Address: 0x297e70, Func Offset: 0x190
	// Line 840, Address: 0x297ea0, Func Offset: 0x1c0
	// Line 843, Address: 0x297ebc, Func Offset: 0x1dc
	// Line 845, Address: 0x297ec8, Func Offset: 0x1e8
	// Line 847, Address: 0x297ed8, Func Offset: 0x1f8
	// Line 848, Address: 0x297ee4, Func Offset: 0x204
	// Line 849, Address: 0x297f00, Func Offset: 0x220
	// Line 851, Address: 0x297f08, Func Offset: 0x228
	// Line 853, Address: 0x297f10, Func Offset: 0x230
	// Line 854, Address: 0x297f28, Func Offset: 0x248
	// Line 862, Address: 0x297f2c, Func Offset: 0x24c
	// Line 863, Address: 0x297f4c, Func Offset: 0x26c
	// Line 865, Address: 0x297f50, Func Offset: 0x270
	// Line 866, Address: 0x297f74, Func Offset: 0x294
	// Line 871, Address: 0x297f78, Func Offset: 0x298
	// Line 876, Address: 0x297f88, Func Offset: 0x2a8
	// Line 877, Address: 0x297f94, Func Offset: 0x2b4
	// Line 880, Address: 0x297fa8, Func Offset: 0x2c8
	// Line 887, Address: 0x297fd0, Func Offset: 0x2f0
	// Line 889, Address: 0x297fe8, Func Offset: 0x308
	// Line 892, Address: 0x297ff0, Func Offset: 0x310
	// Line 893, Address: 0x297ff8, Func Offset: 0x318
	// Line 913, Address: 0x297ffc, Func Offset: 0x31c
	// Line 914, Address: 0x298004, Func Offset: 0x324
	// Line 916, Address: 0x298008, Func Offset: 0x328
	// Line 917, Address: 0x298010, Func Offset: 0x330
	// Line 918, Address: 0x298014, Func Offset: 0x334
	// Line 919, Address: 0x298018, Func Offset: 0x338
	// Line 921, Address: 0x29801c, Func Offset: 0x33c
	// Line 922, Address: 0x298028, Func Offset: 0x348
	// Line 923, Address: 0x298034, Func Offset: 0x354
	// Line 924, Address: 0x298040, Func Offset: 0x360
	// Line 925, Address: 0x29805c, Func Offset: 0x37c
	// Line 926, Address: 0x298068, Func Offset: 0x388
	// Line 928, Address: 0x29806c, Func Offset: 0x38c
	// Line 929, Address: 0x298080, Func Offset: 0x3a0
	// Line 931, Address: 0x298088, Func Offset: 0x3a8
	// Line 939, Address: 0x298098, Func Offset: 0x3b8
	// Line 940, Address: 0x2980a4, Func Offset: 0x3c4
	// Line 941, Address: 0x2980b8, Func Offset: 0x3d8
	// Line 945, Address: 0x2980d0, Func Offset: 0x3f0
	// Line 947, Address: 0x2980e4, Func Offset: 0x404
	// Line 948, Address: 0x2980f4, Func Offset: 0x414
	// Line 949, Address: 0x29810c, Func Offset: 0x42c
	// Line 951, Address: 0x298110, Func Offset: 0x430
	// Line 953, Address: 0x298130, Func Offset: 0x450
	// Line 955, Address: 0x298140, Func Offset: 0x460
	// Line 1005, Address: 0x298150, Func Offset: 0x470
	// Line 1006, Address: 0x29816c, Func Offset: 0x48c
	// Line 1009, Address: 0x298174, Func Offset: 0x494
	// Line 1010, Address: 0x298178, Func Offset: 0x498
	// Line 1013, Address: 0x29817c, Func Offset: 0x49c
	// Line 1014, Address: 0x298180, Func Offset: 0x4a0
	// Func End, Address: 0x2981ac, Func Offset: 0x4cc
}

