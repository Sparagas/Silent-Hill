typedef struct HH_Object_Water_13;
typedef struct Object_DataBlock_Header;
typedef struct ImpactQueue_ElementOption;
typedef struct WaveArea_Infomeation;
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
typedef float type_10[377];
typedef unsigned long type_11[2];
typedef float* type_12[1];
typedef unsigned int type_13[2];
typedef unsigned int type_14[2][4];
typedef unsigned int type_15[1];
typedef float type_16[1];
typedef unsigned int type_17[1];
typedef unsigned int type_18[2];
typedef unsigned long type_19[2];
typedef unsigned int type_20[2];

struct HH_Object_Water_13
{
	Object_DataBlock_Header Header;
	unsigned char Step;
	unsigned char Motion_Step;
	float Timer;
	float ST_Defference[4];
	Wave_Element Wave_Info[20];
	float Area00_Grid_Y_Value[377];
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

void Grid_Work_Initialize(HH_Object_Water_13* pThis);
unsigned int Object_Initialize(HH_Object_Water_13* pThis);
void CurrentPosition_AreaIndex_Calculator(ImpactQueue_Element* pElement, WaveArea_Infomeation* pInfo, unsigned int* pX_Index, unsigned int* pZ_Index);
float Specular_Calculator(float* View_Direction, float* Light_Direction, float* Normal_Vector);
void SpecularRGBA_Calculator(int* iRGBA, float* RGBA_Base, float* RGBA_Specular_Base, float Specular_Ratio);
unsigned int Object_Draw(HH_Object_Water_13* pThis, float* pGrid_Y_Value, float* WorldLocation, unsigned int Grid_X_Max, unsigned int Grid_Z_Max);
unsigned int HH_Class_Prefix_Water_13();
unsigned int HH_Class_Suffix_Water_13();
unsigned int HH_Class_Water_13(void* pBlock, ImpactQueue_Element* pElement);

// 
// Start address: 0x2628f0
void Grid_Work_Initialize(HH_Object_Water_13* pThis)
{
	// Line 146, Address: 0x2628f0, Func Offset: 0
	// Line 148, Address: 0x2628f8, Func Offset: 0x8
	// Line 149, Address: 0x26290c, Func Offset: 0x1c
	// Func End, Address: 0x26291c, Func Offset: 0x2c
}

// 
// Start address: 0x262920
unsigned int Object_Initialize(HH_Object_Water_13* pThis)
{
	unsigned int result;
	// Line 162, Address: 0x262920, Func Offset: 0
	// Line 170, Address: 0x262930, Func Offset: 0x10
	// Line 172, Address: 0x262934, Func Offset: 0x14
	// Line 174, Address: 0x262938, Func Offset: 0x18
	// Line 176, Address: 0x262958, Func Offset: 0x38
	// Line 178, Address: 0x26295c, Func Offset: 0x3c
	// Line 180, Address: 0x262964, Func Offset: 0x44
	// Line 231, Address: 0x26296c, Func Offset: 0x4c
	// Line 232, Address: 0x262970, Func Offset: 0x50
	// Func End, Address: 0x262984, Func Offset: 0x64
}

// 
// Start address: 0x262990
void CurrentPosition_AreaIndex_Calculator(ImpactQueue_Element* pElement, WaveArea_Infomeation* pInfo, unsigned int* pX_Index, unsigned int* pZ_Index)
{
	float check_pos[4];
	// Line 237, Address: 0x262990, Func Offset: 0
	// Line 240, Address: 0x2629b0, Func Offset: 0x20
	// Line 241, Address: 0x2629c4, Func Offset: 0x34
	// Line 242, Address: 0x2629ec, Func Offset: 0x5c
	// Line 243, Address: 0x262a14, Func Offset: 0x84
	// Func End, Address: 0x262a2c, Func Offset: 0x9c
}

// 
// Start address: 0x262a30
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
	// Line 256, Address: 0x262a30, Func Offset: 0
	// Line 269, Address: 0x262a50, Func Offset: 0x20
	// Line 270, Address: 0x262a60, Func Offset: 0x30
	// Line 271, Address: 0x262a78, Func Offset: 0x48
	// Line 273, Address: 0x262a7c, Func Offset: 0x4c
	// Line 274, Address: 0x262a9c, Func Offset: 0x6c
	// Line 275, Address: 0x262ab0, Func Offset: 0x80
	// Line 277, Address: 0x262ac0, Func Offset: 0x90
	// Line 278, Address: 0x262ad0, Func Offset: 0xa0
	// Line 279, Address: 0x262ae8, Func Offset: 0xb8
	// Line 300, Address: 0x262aec, Func Offset: 0xbc
	// Line 303, Address: 0x262b3c, Func Offset: 0x10c
	// Func End, Address: 0x262b58, Func Offset: 0x128
}

// 
// Start address: 0x262b60
void SpecularRGBA_Calculator(int* iRGBA, float* RGBA_Base, float* RGBA_Specular_Base, float Specular_Ratio)
{
	// Line 319, Address: 0x262b60, Func Offset: 0
	// Line 322, Address: 0x262b68, Func Offset: 0x8
	// Line 323, Address: 0x262b6c, Func Offset: 0xc
	// Line 324, Address: 0x262b70, Func Offset: 0x10
	// Line 325, Address: 0x262b74, Func Offset: 0x14
	// Line 326, Address: 0x262b78, Func Offset: 0x18
	// Line 327, Address: 0x262b7c, Func Offset: 0x1c
	// Line 328, Address: 0x262b80, Func Offset: 0x20
	// Line 329, Address: 0x262b84, Func Offset: 0x24
	// Line 330, Address: 0x262b88, Func Offset: 0x28
	// Line 331, Address: 0x262b8c, Func Offset: 0x2c
	// Line 332, Address: 0x262b90, Func Offset: 0x30
	// Line 333, Address: 0x262b94, Func Offset: 0x34
	// Line 354, Address: 0x262b98, Func Offset: 0x38
	// Func End, Address: 0x262ba0, Func Offset: 0x40
}

// 
// Start address: 0x262ba0
unsigned int Object_Draw(HH_Object_Water_13* pThis, float* pGrid_Y_Value, float* WorldLocation, unsigned int Grid_X_Max, unsigned int Grid_Z_Max)
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
	// Line 367, Address: 0x262ba0, Func Offset: 0
	// Line 398, Address: 0x262bec, Func Offset: 0x4c
	// Line 401, Address: 0x262bf8, Func Offset: 0x58
	// Line 423, Address: 0x262c00, Func Offset: 0x60
	// Line 427, Address: 0x262c04, Func Offset: 0x64
	// Line 428, Address: 0x262c10, Func Offset: 0x70
	// Line 429, Address: 0x262c1c, Func Offset: 0x7c
	// Line 430, Address: 0x262c34, Func Offset: 0x94
	// Line 432, Address: 0x262c4c, Func Offset: 0xac
	// Line 437, Address: 0x262c64, Func Offset: 0xc4
	// Line 438, Address: 0x262c70, Func Offset: 0xd0
	// Line 440, Address: 0x262c7c, Func Offset: 0xdc
	// Line 441, Address: 0x262c80, Func Offset: 0xe0
	// Line 443, Address: 0x262c84, Func Offset: 0xe4
	// Line 446, Address: 0x262c94, Func Offset: 0xf4
	// Line 451, Address: 0x262ca8, Func Offset: 0x108
	// Line 456, Address: 0x262cb4, Func Offset: 0x114
	// Line 458, Address: 0x262cc0, Func Offset: 0x120
	// Line 459, Address: 0x262cd4, Func Offset: 0x134
	// Line 462, Address: 0x262ce8, Func Offset: 0x148
	// Line 463, Address: 0x262cf4, Func Offset: 0x154
	// Line 467, Address: 0x262d08, Func Offset: 0x168
	// Line 469, Address: 0x262d10, Func Offset: 0x170
	// Line 472, Address: 0x262d1c, Func Offset: 0x17c
	// Line 473, Address: 0x262d28, Func Offset: 0x188
	// Line 474, Address: 0x262d84, Func Offset: 0x1e4
	// Line 475, Address: 0x262de8, Func Offset: 0x248
	// Line 477, Address: 0x262e00, Func Offset: 0x260
	// Line 479, Address: 0x262e18, Func Offset: 0x278
	// Line 487, Address: 0x262e20, Func Offset: 0x280
	// Line 488, Address: 0x262e3c, Func Offset: 0x29c
	// Line 490, Address: 0x262e40, Func Offset: 0x2a0
	// Line 503, Address: 0x262e4c, Func Offset: 0x2ac
	// Line 505, Address: 0x262e98, Func Offset: 0x2f8
	// Line 506, Address: 0x262ef8, Func Offset: 0x358
	// Line 507, Address: 0x262f14, Func Offset: 0x374
	// Line 508, Address: 0x262f34, Func Offset: 0x394
	// Line 517, Address: 0x262f48, Func Offset: 0x3a8
	// Line 519, Address: 0x262f70, Func Offset: 0x3d0
	// Line 520, Address: 0x262f90, Func Offset: 0x3f0
	// Line 521, Address: 0x262f9c, Func Offset: 0x3fc
	// Line 523, Address: 0x262fa8, Func Offset: 0x408
	// Line 524, Address: 0x262fbc, Func Offset: 0x41c
	// Line 527, Address: 0x262fd0, Func Offset: 0x430
	// Line 528, Address: 0x262fe4, Func Offset: 0x444
	// Line 530, Address: 0x262ff8, Func Offset: 0x458
	// Line 531, Address: 0x263008, Func Offset: 0x468
	// Line 532, Address: 0x263018, Func Offset: 0x478
	// Line 533, Address: 0x263020, Func Offset: 0x480
	// Line 535, Address: 0x263024, Func Offset: 0x484
	// Line 537, Address: 0x263038, Func Offset: 0x498
	// Line 543, Address: 0x263050, Func Offset: 0x4b0
	// Line 546, Address: 0x263058, Func Offset: 0x4b8
	// Line 548, Address: 0x263078, Func Offset: 0x4d8
	// Line 550, Address: 0x263094, Func Offset: 0x4f4
	// Line 552, Address: 0x2630ac, Func Offset: 0x50c
	// Line 553, Address: 0x2630c4, Func Offset: 0x524
	// Line 554, Address: 0x2630d8, Func Offset: 0x538
	// Line 556, Address: 0x2630e0, Func Offset: 0x540
	// Line 558, Address: 0x2630f4, Func Offset: 0x554
	// Line 559, Address: 0x263108, Func Offset: 0x568
	// Line 561, Address: 0x263124, Func Offset: 0x584
	// Line 562, Address: 0x26313c, Func Offset: 0x59c
	// Line 563, Address: 0x263158, Func Offset: 0x5b8
	// Line 565, Address: 0x263160, Func Offset: 0x5c0
	// Line 578, Address: 0x263170, Func Offset: 0x5d0
	// Line 579, Address: 0x263180, Func Offset: 0x5e0
	// Line 580, Address: 0x26318c, Func Offset: 0x5ec
	// Line 581, Address: 0x26319c, Func Offset: 0x5fc
	// Line 582, Address: 0x2631a8, Func Offset: 0x608
	// Line 583, Address: 0x2631b8, Func Offset: 0x618
	// Line 584, Address: 0x2631c4, Func Offset: 0x624
	// Line 590, Address: 0x2631cc, Func Offset: 0x62c
	// Line 598, Address: 0x2631d8, Func Offset: 0x638
	// Line 601, Address: 0x2631f8, Func Offset: 0x658
	// Line 603, Address: 0x263214, Func Offset: 0x674
	// Line 605, Address: 0x26322c, Func Offset: 0x68c
	// Line 606, Address: 0x263244, Func Offset: 0x6a4
	// Line 607, Address: 0x263258, Func Offset: 0x6b8
	// Line 609, Address: 0x263260, Func Offset: 0x6c0
	// Line 611, Address: 0x263274, Func Offset: 0x6d4
	// Line 612, Address: 0x263288, Func Offset: 0x6e8
	// Line 614, Address: 0x2632a4, Func Offset: 0x704
	// Line 615, Address: 0x2632bc, Func Offset: 0x71c
	// Line 616, Address: 0x2632d8, Func Offset: 0x738
	// Line 618, Address: 0x2632e0, Func Offset: 0x740
	// Line 624, Address: 0x2632f0, Func Offset: 0x750
	// Line 625, Address: 0x2632f8, Func Offset: 0x758
	// Line 628, Address: 0x263300, Func Offset: 0x760
	// Line 629, Address: 0x263310, Func Offset: 0x770
	// Line 630, Address: 0x26331c, Func Offset: 0x77c
	// Line 631, Address: 0x26332c, Func Offset: 0x78c
	// Line 632, Address: 0x263338, Func Offset: 0x798
	// Line 633, Address: 0x263348, Func Offset: 0x7a8
	// Line 634, Address: 0x263354, Func Offset: 0x7b4
	// Line 635, Address: 0x263364, Func Offset: 0x7c4
	// Line 636, Address: 0x263370, Func Offset: 0x7d0
	// Line 637, Address: 0x263388, Func Offset: 0x7e8
	// Line 640, Address: 0x26338c, Func Offset: 0x7ec
	// Line 642, Address: 0x26339c, Func Offset: 0x7fc
	// Line 644, Address: 0x2633b4, Func Offset: 0x814
	// Line 646, Address: 0x2633bc, Func Offset: 0x81c
	// Line 647, Address: 0x2633c0, Func Offset: 0x820
	// Func End, Address: 0x263400, Func Offset: 0x860
}

// 
// Start address: 0x263400
unsigned int HH_Class_Prefix_Water_13()
{
	unsigned long tex0;
	_anon0* pPk;
	unsigned int result;
	// Line 667, Address: 0x263400, Func Offset: 0
	// Line 669, Address: 0x26340c, Func Offset: 0xc
	// Line 675, Address: 0x263418, Func Offset: 0x18
	// Line 678, Address: 0x263420, Func Offset: 0x20
	// Line 679, Address: 0x263430, Func Offset: 0x30
	// Line 681, Address: 0x263444, Func Offset: 0x44
	// Line 682, Address: 0x263468, Func Offset: 0x68
	// Line 684, Address: 0x263484, Func Offset: 0x84
	// Line 686, Address: 0x26348c, Func Offset: 0x8c
	// Line 687, Address: 0x263490, Func Offset: 0x90
	// Func End, Address: 0x2634a4, Func Offset: 0xa4
}

// 
// Start address: 0x2634b0
unsigned int HH_Class_Suffix_Water_13()
{
	_anon0* pPk;
	unsigned int result;
	// Line 700, Address: 0x2634b0, Func Offset: 0
	// Line 702, Address: 0x2634bc, Func Offset: 0xc
	// Line 704, Address: 0x2634c8, Func Offset: 0x18
	// Line 705, Address: 0x2634d0, Func Offset: 0x20
	// Line 706, Address: 0x2634e4, Func Offset: 0x34
	// Line 708, Address: 0x2634ec, Func Offset: 0x3c
	// Line 709, Address: 0x2634f0, Func Offset: 0x40
	// Func End, Address: 0x263504, Func Offset: 0x54
}

// 
// Start address: 0x263510
unsigned int HH_Class_Water_13(void* pBlock, ImpactQueue_Element* pElement)
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
	float rad;
	float rad_omega;
	HH_Object_Water_13* pThis;
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
	// Line 723, Address: 0x263510, Func Offset: 0
	// Line 730, Address: 0x26353c, Func Offset: 0x2c
	// Line 731, Address: 0x263540, Func Offset: 0x30
	// Line 733, Address: 0x263544, Func Offset: 0x34
	// Line 736, Address: 0x26356c, Func Offset: 0x5c
	// Line 738, Address: 0x263574, Func Offset: 0x64
	// Line 739, Address: 0x26357c, Func Offset: 0x6c
	// Line 743, Address: 0x263584, Func Offset: 0x74
	// Line 751, Address: 0x26358c, Func Offset: 0x7c
	// Line 752, Address: 0x2635a4, Func Offset: 0x94
	// Line 754, Address: 0x263664, Func Offset: 0x154
	// Line 755, Address: 0x2636a8, Func Offset: 0x198
	// Line 760, Address: 0x2636ec, Func Offset: 0x1dc
	// Line 762, Address: 0x263708, Func Offset: 0x1f8
	// Line 763, Address: 0x263718, Func Offset: 0x208
	// Line 764, Address: 0x263724, Func Offset: 0x214
	// Line 765, Address: 0x263740, Func Offset: 0x230
	// Line 767, Address: 0x263748, Func Offset: 0x238
	// Line 772, Address: 0x26374c, Func Offset: 0x23c
	// Line 773, Address: 0x263758, Func Offset: 0x248
	// Line 775, Address: 0x263774, Func Offset: 0x264
	// Line 784, Address: 0x263780, Func Offset: 0x270
	// Line 785, Address: 0x2637ac, Func Offset: 0x29c
	// Line 786, Address: 0x2637b4, Func Offset: 0x2a4
	// Line 787, Address: 0x2637b8, Func Offset: 0x2a8
	// Line 788, Address: 0x2637c0, Func Offset: 0x2b0
	// Line 790, Address: 0x2637c8, Func Offset: 0x2b8
	// Line 791, Address: 0x2637d4, Func Offset: 0x2c4
	// Line 792, Address: 0x2637e0, Func Offset: 0x2d0
	// Line 793, Address: 0x2637ec, Func Offset: 0x2dc
	// Line 794, Address: 0x263808, Func Offset: 0x2f8
	// Line 795, Address: 0x263814, Func Offset: 0x304
	// Line 797, Address: 0x263818, Func Offset: 0x308
	// Line 799, Address: 0x26382c, Func Offset: 0x31c
	// Line 808, Address: 0x263830, Func Offset: 0x320
	// Line 809, Address: 0x26383c, Func Offset: 0x32c
	// Line 812, Address: 0x263850, Func Offset: 0x340
	// Line 818, Address: 0x263878, Func Offset: 0x368
	// Line 820, Address: 0x263890, Func Offset: 0x380
	// Line 821, Address: 0x2638ac, Func Offset: 0x39c
	// Line 823, Address: 0x2638c8, Func Offset: 0x3b8
	// Line 824, Address: 0x2638ec, Func Offset: 0x3dc
	// Line 825, Address: 0x263910, Func Offset: 0x400
	// Line 826, Address: 0x263914, Func Offset: 0x404
	// Line 828, Address: 0x26391c, Func Offset: 0x40c
	// Line 830, Address: 0x263924, Func Offset: 0x414
	// Line 832, Address: 0x26392c, Func Offset: 0x41c
	// Line 833, Address: 0x263950, Func Offset: 0x440
	// Line 834, Address: 0x263954, Func Offset: 0x444
	// Line 836, Address: 0x26395c, Func Offset: 0x44c
	// Line 838, Address: 0x263964, Func Offset: 0x454
	// Line 840, Address: 0x263968, Func Offset: 0x458
	// Line 841, Address: 0x263970, Func Offset: 0x460
	// Line 842, Address: 0x263974, Func Offset: 0x464
	// Line 843, Address: 0x263978, Func Offset: 0x468
	// Line 845, Address: 0x26397c, Func Offset: 0x46c
	// Line 846, Address: 0x263988, Func Offset: 0x478
	// Line 847, Address: 0x263994, Func Offset: 0x484
	// Line 848, Address: 0x2639a0, Func Offset: 0x490
	// Line 849, Address: 0x2639bc, Func Offset: 0x4ac
	// Line 850, Address: 0x2639c8, Func Offset: 0x4b8
	// Line 852, Address: 0x2639cc, Func Offset: 0x4bc
	// Line 853, Address: 0x2639e0, Func Offset: 0x4d0
	// Line 855, Address: 0x2639e8, Func Offset: 0x4d8
	// Line 859, Address: 0x2639f8, Func Offset: 0x4e8
	// Line 863, Address: 0x263a00, Func Offset: 0x4f0
	// Line 864, Address: 0x263a0c, Func Offset: 0x4fc
	// Line 865, Address: 0x263a20, Func Offset: 0x510
	// Line 867, Address: 0x263a38, Func Offset: 0x528
	// Line 868, Address: 0x263a4c, Func Offset: 0x53c
	// Line 869, Address: 0x263a50, Func Offset: 0x540
	// Line 871, Address: 0x263a60, Func Offset: 0x550
	// Line 872, Address: 0x263a6c, Func Offset: 0x55c
	// Line 873, Address: 0x263a80, Func Offset: 0x570
	// Line 875, Address: 0x263a98, Func Offset: 0x588
	// Line 877, Address: 0x263ab0, Func Offset: 0x5a0
	// Line 878, Address: 0x263ac0, Func Offset: 0x5b0
	// Line 880, Address: 0x263ad0, Func Offset: 0x5c0
	// Line 926, Address: 0x263ad8, Func Offset: 0x5c8
	// Line 927, Address: 0x263af4, Func Offset: 0x5e4
	// Line 930, Address: 0x263afc, Func Offset: 0x5ec
	// Line 931, Address: 0x263b00, Func Offset: 0x5f0
	// Line 934, Address: 0x263b04, Func Offset: 0x5f4
	// Line 935, Address: 0x263b08, Func Offset: 0x5f8
	// Func End, Address: 0x263b38, Func Offset: 0x628
}

