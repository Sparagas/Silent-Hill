typedef struct Wave_Element;
typedef struct _anon0;
typedef struct WaveArea_Infomeation;
typedef struct WaveArea_GridLink_Infomeation;


typedef unsigned long type_0[2];
typedef int type_1[4];
typedef float type_2[4];
typedef float type_3[4];
typedef float type_4[4][4];
typedef unsigned long type_5[2];
typedef float type_6[4][4];
typedef unsigned int type_7[2];
typedef unsigned int type_8[2][4];
typedef unsigned int type_9[2];
typedef float* type_10[2];
typedef unsigned int type_11[2];
typedef unsigned int type_12[2];
typedef unsigned int type_13[2];
typedef unsigned long type_14[2];
typedef unsigned int type_15[2];
typedef unsigned long type_16[2];

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

struct WaveArea_GridLink_Infomeation
{
	float* pGrid_Y_Value_Link[2];
	unsigned int Vertical_Horizontal_Flag;
	unsigned int Length;
	unsigned int X_Index_Max[2];
	unsigned int X_Index_Start[2];
	unsigned int Z_Index_Start[2];
};


float Wave_Calculator(Wave_Element* pElement, float Distance, float Amplitude_ratio);
unsigned int WaveArea_Calculator(WaveArea_Infomeation* pInfo, Wave_Element* pElement_Table, unsigned int Element_Max, unsigned int Area_Index);
unsigned int WaveArea_GridLink_Y_Value_Calculator(WaveArea_GridLink_Infomeation* pInfo);
int WaveArea_CurrentArea_Search(float* Position, WaveArea_Infomeation* pInfo_Table, unsigned int Table_Max);
unsigned int WaveArea_CurrentArea_CollisionCheck(float* Position, WaveArea_Infomeation* pInfo);
Wave_Element* WaveElement_Free_Search(Wave_Element* pElement_Table, unsigned int Element_Max);
Wave_Element* WaveElement_Oldest_Search(Wave_Element* pElement_Table, unsigned int Element_Max);
unsigned int WaveElement_Addition(Wave_Element* pElement_Table, unsigned int Element_Max, Wave_Element* pAdd_Element);
void Area_Enable_Table_Clear(unsigned int* pArea_Enable_Table, unsigned int Table_Max);
void Area_Enable_Manager(unsigned int* pArea_Enable_Table, WaveArea_Infomeation* pInfo_Table, unsigned int Table_Max, int Current_Area);
unsigned int Area_ViewFrustum_Judge(WaveArea_Infomeation* pInfo);
unsigned int HH_Class_WaterCommon_WaveArea_Calculator(WaveArea_Infomeation* pInfo, Wave_Element* pElement_Table, unsigned int Element_Max, unsigned int Area_Index);
unsigned int HH_Class_WaterCommon_WaveArea_GridLink_Y_Value_Calculator(WaveArea_GridLink_Infomeation* pInfo);
int HH_Class_WaterCommon_WaveArea_CurrentArea_Search(float* Position, WaveArea_Infomeation* pInfo_Table, unsigned int Table_Max);
unsigned int HH_Class_WaterCommon_WaveElement_Addition(Wave_Element* pElement_Table, unsigned int Element_Max, Wave_Element* pAdd_Element);
void HH_Class_WaterCommon_WaveElement_Time_Count(Wave_Element* pElement_Table, unsigned int Element_Max);
void HH_Class_WaterCommon_Area_Enable_Table_Clear(unsigned int* pArea_Enable_Table, unsigned int Table_Max);
void HH_Class_WaterCommon_Area_Enable_Manager(unsigned int* pArea_Enable_Table, WaveArea_Infomeation* pInfo_Table, unsigned int Table_Max, int Current_Area);

// 
// Start address: 0x268020
float Wave_Calculator(Wave_Element* pElement, float Distance, float Amplitude_ratio)
{
	float theta;
	float result;
	// Line 86, Address: 0x268020, Func Offset: 0
	// Line 88, Address: 0x268038, Func Offset: 0x18
	// Line 90, Address: 0x268050, Func Offset: 0x30
	// Line 92, Address: 0x268100, Func Offset: 0xe0
	// Line 95, Address: 0x268118, Func Offset: 0xf8
	// Func End, Address: 0x268130, Func Offset: 0x110
}

// 
// Start address: 0x268130
unsigned int WaveArea_Calculator(WaveArea_Infomeation* pInfo, Wave_Element* pElement_Table, unsigned int Element_Max, unsigned int Area_Index)
{
	float y;
	float amplitude_ratio;
	float distance;
	float x_distance;
	float z_distance;
	float arrival_distance;
	float arrival_ratio;
	unsigned int z_count;
	unsigned int x_count;
	unsigned int impact_z;
	unsigned int impact_x;
	float distance_max;
	Wave_Element* pElement;
	float* pGrid_Y_Value;
	float Grid_WH;
	unsigned int Grid_Z_Max;
	unsigned int Grid_X_Max;
	unsigned int i;
	unsigned int result;
	// Line 111, Address: 0x268130, Func Offset: 0
	// Line 114, Address: 0x268178, Func Offset: 0x48
	// Line 115, Address: 0x26817c, Func Offset: 0x4c
	// Line 116, Address: 0x268180, Func Offset: 0x50
	// Line 117, Address: 0x268184, Func Offset: 0x54
	// Line 119, Address: 0x268188, Func Offset: 0x58
	// Line 120, Address: 0x268194, Func Offset: 0x64
	// Line 122, Address: 0x2681b0, Func Offset: 0x80
	// Line 125, Address: 0x2681bc, Func Offset: 0x8c
	// Line 129, Address: 0x2681cc, Func Offset: 0x9c
	// Line 130, Address: 0x2681d0, Func Offset: 0xa0
	// Line 131, Address: 0x2681d4, Func Offset: 0xa4
	// Line 133, Address: 0x2681d8, Func Offset: 0xa8
	// Line 134, Address: 0x2681f4, Func Offset: 0xc4
	// Line 136, Address: 0x2681fc, Func Offset: 0xcc
	// Line 137, Address: 0x268214, Func Offset: 0xe4
	// Line 139, Address: 0x268218, Func Offset: 0xe8
	// Line 141, Address: 0x26821c, Func Offset: 0xec
	// Line 142, Address: 0x268228, Func Offset: 0xf8
	// Line 144, Address: 0x268270, Func Offset: 0x140
	// Line 145, Address: 0x26827c, Func Offset: 0x14c
	// Line 146, Address: 0x2682c4, Func Offset: 0x194
	// Line 148, Address: 0x2682d0, Func Offset: 0x1a0
	// Line 149, Address: 0x2682e0, Func Offset: 0x1b0
	// Line 151, Address: 0x2682f0, Func Offset: 0x1c0
	// Line 152, Address: 0x26832c, Func Offset: 0x1fc
	// Line 154, Address: 0x26833c, Func Offset: 0x20c
	// Line 157, Address: 0x268358, Func Offset: 0x228
	// Line 158, Address: 0x26836c, Func Offset: 0x23c
	// Line 160, Address: 0x26837c, Func Offset: 0x24c
	// Line 161, Address: 0x268398, Func Offset: 0x268
	// Line 162, Address: 0x26839c, Func Offset: 0x26c
	// Func End, Address: 0x2683e0, Func Offset: 0x2b0
}

// 
// Start address: 0x2683e0
unsigned int WaveArea_GridLink_Y_Value_Calculator(WaveArea_GridLink_Infomeation* pInfo)
{
	unsigned int index1_add;
	unsigned int index0_add;
	unsigned int link_index1;
	unsigned int link_index0;
	unsigned int i;
	unsigned int result;
	// Line 250, Address: 0x2683e0, Func Offset: 0
	// Line 254, Address: 0x2683e8, Func Offset: 0x8
	// Line 256, Address: 0x268404, Func Offset: 0x24
	// Line 257, Address: 0x268408, Func Offset: 0x28
	// Line 263, Address: 0x268410, Func Offset: 0x30
	// Line 264, Address: 0x268424, Func Offset: 0x44
	// Line 266, Address: 0x268438, Func Offset: 0x58
	// Line 267, Address: 0x268448, Func Offset: 0x68
	// Line 269, Address: 0x268478, Func Offset: 0x98
	// Line 271, Address: 0x268494, Func Offset: 0xb4
	// Line 272, Address: 0x268498, Func Offset: 0xb8
	// Func End, Address: 0x2684a0, Func Offset: 0xc0
}

// 
// Start address: 0x2684a0
int WaveArea_CurrentArea_Search(float* Position, WaveArea_Infomeation* pInfo_Table, unsigned int Table_Max)
{
	WaveArea_Infomeation* pInfo;
	unsigned int i;
	int result;
	// Line 288, Address: 0x2684a0, Func Offset: 0
	// Line 289, Address: 0x2684c8, Func Offset: 0x28
	// Line 292, Address: 0x2684cc, Func Offset: 0x2c
	// Line 293, Address: 0x2684d8, Func Offset: 0x38
	// Line 295, Address: 0x2684e8, Func Offset: 0x48
	// Line 296, Address: 0x2684fc, Func Offset: 0x5c
	// Line 297, Address: 0x268500, Func Offset: 0x60
	// Line 299, Address: 0x268508, Func Offset: 0x68
	// Line 301, Address: 0x268520, Func Offset: 0x80
	// Line 302, Address: 0x268524, Func Offset: 0x84
	// Func End, Address: 0x268548, Func Offset: 0xa8
}

// 
// Start address: 0x268550
unsigned int WaveArea_CurrentArea_CollisionCheck(float* Position, WaveArea_Infomeation* pInfo)
{
	float check_pos[4];
	unsigned int result;
	// Line 316, Address: 0x268550, Func Offset: 0
	// Line 317, Address: 0x268568, Func Offset: 0x18
	// Line 320, Address: 0x26856c, Func Offset: 0x1c
	// Line 323, Address: 0x268580, Func Offset: 0x30
	// Line 324, Address: 0x2685d4, Func Offset: 0x84
	// Line 327, Address: 0x2685d8, Func Offset: 0x88
	// Line 328, Address: 0x2685dc, Func Offset: 0x8c
	// Func End, Address: 0x2685f4, Func Offset: 0xa4
}

// 
// Start address: 0x268600
Wave_Element* WaveElement_Free_Search(Wave_Element* pElement_Table, unsigned int Element_Max)
{
	Wave_Element* pElement;
	unsigned int i;
	Wave_Element* result;
	// Line 347, Address: 0x268600, Func Offset: 0
	// Line 350, Address: 0x268604, Func Offset: 0x4
	// Line 351, Address: 0x268610, Func Offset: 0x10
	// Line 353, Address: 0x268628, Func Offset: 0x28
	// Line 354, Address: 0x268634, Func Offset: 0x34
	// Line 355, Address: 0x268638, Func Offset: 0x38
	// Line 357, Address: 0x268640, Func Offset: 0x40
	// Line 360, Address: 0x268658, Func Offset: 0x58
	// Func End, Address: 0x268660, Func Offset: 0x60
}

// 
// Start address: 0x268660
Wave_Element* WaveElement_Oldest_Search(Wave_Element* pElement_Table, unsigned int Element_Max)
{
	Wave_Element* pElement;
	float time;
	unsigned int i;
	Wave_Element* result;
	// Line 374, Address: 0x268660, Func Offset: 0
	// Line 376, Address: 0x268664, Func Offset: 0x4
	// Line 378, Address: 0x268668, Func Offset: 0x8
	// Line 379, Address: 0x268674, Func Offset: 0x14
	// Line 381, Address: 0x26868c, Func Offset: 0x2c
	// Line 382, Address: 0x268698, Func Offset: 0x38
	// Line 383, Address: 0x2686ac, Func Offset: 0x4c
	// Line 384, Address: 0x2686b0, Func Offset: 0x50
	// Line 386, Address: 0x2686b4, Func Offset: 0x54
	// Line 387, Address: 0x2686b8, Func Offset: 0x58
	// Line 389, Address: 0x2686cc, Func Offset: 0x6c
	// Func End, Address: 0x2686d4, Func Offset: 0x74
}

// 
// Start address: 0x2686e0
unsigned int WaveElement_Addition(Wave_Element* pElement_Table, unsigned int Element_Max, Wave_Element* pAdd_Element)
{
	Wave_Element* pFree_Element;
	unsigned int result;
	// Line 401, Address: 0x2686e0, Func Offset: 0
	// Line 403, Address: 0x2686ec, Func Offset: 0xc
	// Line 406, Address: 0x2686f4, Func Offset: 0x14
	// Line 407, Address: 0x2686fc, Func Offset: 0x1c
	// Line 409, Address: 0x268704, Func Offset: 0x24
	// Line 411, Address: 0x268724, Func Offset: 0x44
	// Line 412, Address: 0x268728, Func Offset: 0x48
	// Func End, Address: 0x268738, Func Offset: 0x58
}

// 
// Start address: 0x268740
void Area_Enable_Table_Clear(unsigned int* pArea_Enable_Table, unsigned int Table_Max)
{
	unsigned int i;
	// Line 430, Address: 0x268740, Func Offset: 0
	// Line 431, Address: 0x26874c, Func Offset: 0xc
	// Line 432, Address: 0x268758, Func Offset: 0x18
	// Line 433, Address: 0x26876c, Func Offset: 0x2c
	// Func End, Address: 0x268774, Func Offset: 0x34
}

// 
// Start address: 0x268780
void Area_Enable_Manager(unsigned int* pArea_Enable_Table, WaveArea_Infomeation* pInfo_Table, unsigned int Table_Max, int Current_Area)
{
	WaveArea_Infomeation* pInfo;
	unsigned int area;
	unsigned int i;
	WaveArea_Infomeation* pInfo_Cur;
	// Line 447, Address: 0x268780, Func Offset: 0
	// Line 448, Address: 0x2687b0, Func Offset: 0x30
	// Line 455, Address: 0x2687c0, Func Offset: 0x40
	// Line 456, Address: 0x2687cc, Func Offset: 0x4c
	// Line 457, Address: 0x2687dc, Func Offset: 0x5c
	// Line 458, Address: 0x2687ec, Func Offset: 0x6c
	// Line 460, Address: 0x268800, Func Offset: 0x80
	// Line 461, Address: 0x26880c, Func Offset: 0x8c
	// Line 464, Address: 0x26881c, Func Offset: 0x9c
	// Line 465, Address: 0x268838, Func Offset: 0xb8
	// Line 466, Address: 0x268848, Func Offset: 0xc8
	// Line 468, Address: 0x26884c, Func Offset: 0xcc
	// Line 469, Address: 0x268850, Func Offset: 0xd0
	// Line 470, Address: 0x268864, Func Offset: 0xe4
	// Func End, Address: 0x26888c, Func Offset: 0x10c
}

// 
// Start address: 0x268890
unsigned int Area_ViewFrustum_Judge(WaveArea_Infomeation* pInfo)
{
	unsigned int j;
	float vec_array[4][4];
	float clip_mat[4][4];
	unsigned int result;
	// Line 483, Address: 0x268890, Func Offset: 0
	// Line 484, Address: 0x2688a8, Func Offset: 0x18
	// Line 490, Address: 0x2688ac, Func Offset: 0x1c
	// Line 491, Address: 0x2688b8, Func Offset: 0x28
	// Line 492, Address: 0x2688d0, Func Offset: 0x40
	// Line 493, Address: 0x2688e4, Func Offset: 0x54
	// Line 494, Address: 0x2688f4, Func Offset: 0x64
	// Line 495, Address: 0x268904, Func Offset: 0x74
	// Line 496, Address: 0x268914, Func Offset: 0x84
	// Line 498, Address: 0x268924, Func Offset: 0x94
	// Line 500, Address: 0x268930, Func Offset: 0xa0
	// Line 501, Address: 0x268950, Func Offset: 0xc0
	// Line 504, Address: 0x268954, Func Offset: 0xc4
	// Line 505, Address: 0x268958, Func Offset: 0xc8
	// Func End, Address: 0x268974, Func Offset: 0xe4
}

// 
// Start address: 0x268980
unsigned int HH_Class_WaterCommon_WaveArea_Calculator(WaveArea_Infomeation* pInfo, Wave_Element* pElement_Table, unsigned int Element_Max, unsigned int Area_Index)
{
	// Line 1076, Address: 0x268980, Func Offset: 0
	// Line 1077, Address: 0x268988, Func Offset: 0x8
	// Line 1078, Address: 0x268990, Func Offset: 0x10
	// Func End, Address: 0x2689a0, Func Offset: 0x20
}

// 
// Start address: 0x2689a0
unsigned int HH_Class_WaterCommon_WaveArea_GridLink_Y_Value_Calculator(WaveArea_GridLink_Infomeation* pInfo)
{
	// Line 1088, Address: 0x2689a0, Func Offset: 0
	// Line 1089, Address: 0x2689a8, Func Offset: 0x8
	// Line 1090, Address: 0x2689b0, Func Offset: 0x10
	// Func End, Address: 0x2689c0, Func Offset: 0x20
}

// 
// Start address: 0x2689c0
int HH_Class_WaterCommon_WaveArea_CurrentArea_Search(float* Position, WaveArea_Infomeation* pInfo_Table, unsigned int Table_Max)
{
	// Line 1093, Address: 0x2689c0, Func Offset: 0
	// Line 1094, Address: 0x2689c8, Func Offset: 0x8
	// Line 1095, Address: 0x2689d0, Func Offset: 0x10
	// Func End, Address: 0x2689e0, Func Offset: 0x20
}

// 
// Start address: 0x2689e0
unsigned int HH_Class_WaterCommon_WaveElement_Addition(Wave_Element* pElement_Table, unsigned int Element_Max, Wave_Element* pAdd_Element)
{
	// Line 1405, Address: 0x2689e0, Func Offset: 0
	// Line 1406, Address: 0x2689e8, Func Offset: 0x8
	// Line 1407, Address: 0x2689f0, Func Offset: 0x10
	// Func End, Address: 0x268a00, Func Offset: 0x20
}

// 
// Start address: 0x268a00
void HH_Class_WaterCommon_WaveElement_Time_Count(Wave_Element* pElement_Table, unsigned int Element_Max)
{
	Wave_Element* pElement;
	unsigned int i;
	// Line 1413, Address: 0x268a00, Func Offset: 0
	// Line 1414, Address: 0x268a0c, Func Offset: 0xc
	// Line 1416, Address: 0x268a24, Func Offset: 0x24
	// Line 1417, Address: 0x268a30, Func Offset: 0x30
	// Line 1419, Address: 0x268a4c, Func Offset: 0x4c
	// Line 1421, Address: 0x268a60, Func Offset: 0x60
	// Line 1423, Address: 0x268a64, Func Offset: 0x64
	// Line 1424, Address: 0x268a68, Func Offset: 0x68
	// Line 1425, Address: 0x268a7c, Func Offset: 0x7c
	// Func End, Address: 0x268a84, Func Offset: 0x84
}

// 
// Start address: 0x268a90
void HH_Class_WaterCommon_Area_Enable_Table_Clear(unsigned int* pArea_Enable_Table, unsigned int Table_Max)
{
	// Line 1430, Address: 0x268a90, Func Offset: 0
	// Line 1431, Address: 0x268a98, Func Offset: 0x8
	// Line 1432, Address: 0x268aa0, Func Offset: 0x10
	// Func End, Address: 0x268ab0, Func Offset: 0x20
}

// 
// Start address: 0x268ab0
void HH_Class_WaterCommon_Area_Enable_Manager(unsigned int* pArea_Enable_Table, WaveArea_Infomeation* pInfo_Table, unsigned int Table_Max, int Current_Area)
{
	// Line 1435, Address: 0x268ab0, Func Offset: 0
	// Line 1436, Address: 0x268ab8, Func Offset: 0x8
	// Line 1437, Address: 0x268ac0, Func Offset: 0x10
	// Func End, Address: 0x268ad0, Func Offset: 0x20
}

