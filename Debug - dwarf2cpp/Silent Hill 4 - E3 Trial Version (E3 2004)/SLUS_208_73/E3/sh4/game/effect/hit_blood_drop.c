typedef struct _anon0;
typedef struct HBDropWork;
typedef struct ListNode;
typedef struct sfObj;
typedef struct HBDrop;
typedef union _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef union _anon6;
typedef enum _cam3Step : unsigned char;
typedef struct _cam3Work;
typedef union _anon7;
typedef struct ListInfo;

typedef void(*type_11)(sfObj*);
typedef void(*type_14)(sfObj*);
typedef void(*type_17)();
typedef void(*type_21)(sfObj*);
typedef void(*type_25)(sfObj*);

typedef int type_0[4];
typedef unsigned int type_1[4];
typedef void* type_2[4];
typedef short type_3[8];
typedef unsigned short type_4[8];
typedef char type_5[16];
typedef unsigned char type_6[16];
typedef float type_7[4];
typedef float type_8[1];
typedef int type_9[1];
typedef long type_10[1];
typedef _anon1 type_12[256];
typedef float type_13[4];
typedef float type_15[4][4];
typedef float type_16[4];
typedef _anon3 type_18[4];
typedef void(*type_19)()[2];
typedef _anon6 type_20[0];
typedef short type_22[2];
typedef unsigned short type_23[2];
typedef char type_24[4];
typedef unsigned char type_26[4];
typedef void(*type_27)(sfObj*)[3];
typedef float type_28[3];
typedef float type_29[1];
typedef float type_30[3];
typedef int type_31[1];
typedef float type_32[3];
typedef char type_33[8];
typedef sfObj* type_34[3];
typedef long type_35[2];
typedef unsigned long type_36[2];

struct _anon0
{
	short base;
	short buffer_w;
	unsigned char psm;
	unsigned char data_psm;
	short w;
	short h;
	short buffer_size;
	short w2;
	short h2;
};

struct HBDropWork
{
	char start_chk_str[8];
	sfObj* pUseObjAry[3];
	ListInfo FreeListInfo;
	ListInfo UseListInfo;
};

struct ListNode
{
	ListNode* Next;
	ListNode* Prev;
	void* DataAdr;
};

struct sfObj
{
	_anon1 fwork[256];
	_anon1* work;
	void(*func)(sfObj*);
	_anon1* work_pt0;
	_anon1* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon1* sys_work;
	_anon1* scene_work;
	_anon1* event_work;
	_anon1* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct HBDrop
{
	ListNode Node;
	unsigned char Step;
	unsigned char ByteAngY;
	unsigned char UsePicNo;
	unsigned char BackCamFastFadeAddDTMul;
	float Timer;
	float Size;
	union
	{
		float OrgXYZ[3];
		float FloorXYZ[3];
	};
	float SpdXYZ[3];
	float CalcFloorPosTime;
	float StartAppearTime;
};

union _anon1
{
	int si;
	unsigned int ui;
	void* pt;
	short ss[2];
	unsigned short us[2];
	char sc[4];
	unsigned char uc[4];
	float f;
	float fv[1];
	int iv[1];
};

struct _anon2
{
	float abcd[4];
};

struct _anon3
{
	unsigned char next_offset;
	unsigned char flags;
	short id;
};

struct _anon4
{
	float start[4];
	float end[4];
};

struct _anon5
{
	_anon6 vertex[0];
};

union _anon6
{
	float node[4];
	_anon3 data[4];
};

enum _cam3Step : unsigned char
{
	CAM3_STEP_NORMAL,
	CAM3_STEP_AUTOFOCUS,
	CAM3_STEP_RESET,
	CAM3_STEP_STOP
};

struct _cam3Work
{
	_cam3Step step;
	float mtx[4][4];
	float rot[4];
	float lookat[4];
	int run;
	int forceRotate;
};

union _anon7
{
	long sl[2];
	unsigned long ul[2];
	<unknown fundamental type (0xa510)> sl128;
	<unknown fundamental type (0xa510)> ul128;
	int si[4];
	unsigned int ui[4];
	void* pt[4];
	short ss[8];
	unsigned short us[8];
	char sc[16];
	unsigned char uc[16];
	float f[4];
	float fv[1];
	int iv[1];
	long lv[1];
};

struct ListInfo
{
	ListNode* Top;
	ListNode* Last;
};

void(*camInitFuncs)()[2];
void(*camera_main_funcs)(sfObj*)[3];
void(*sfObjFuncDummy)(sfObj*);
HBDropWork DropW;
_cam3Work cam3_work;

void HitBloodDrop_AllocObjAndInit();
void init_HBDropWork_list(HBDropWork* pW);
void HitBloodDrop_SetDrop(float* SplashPos, float* SplashVec, float* CharaSpd, float size);
void InitDropData(HBDrop* pDrop, float* SplashPos, float* SplashVec, float* CharaSpd, float size);
void HitBloodDrop_CalcAll();
int calc_and_set_hit_floor_pos(HBDrop* pDrop);
void remove_drop_node(ListNode* pNode, HBDropWork* pW);
void HitBloodDrop_DrawAll();
void draw_blood_drop_on_floor(_anon7** ppPk, HBDrop* pDrop);

// 
// Start address: 0x27f220
void HitBloodDrop_AllocObjAndInit()
{
	HBDropWork* pW;
	int ObjNo;
	sfObj* pObj;
	// Line 154, Address: 0x27f220, Func Offset: 0
	// Line 163, Address: 0x27f224, Func Offset: 0x4
	// Line 154, Address: 0x27f228, Func Offset: 0x8
	// Line 163, Address: 0x27f22c, Func Offset: 0xc
	// Line 154, Address: 0x27f230, Func Offset: 0x10
	// Line 155, Address: 0x27f238, Func Offset: 0x18
	// Line 154, Address: 0x27f23c, Func Offset: 0x1c
	// Line 155, Address: 0x27f240, Func Offset: 0x20
	// Line 154, Address: 0x27f244, Func Offset: 0x24
	// Line 163, Address: 0x27f248, Func Offset: 0x28
	// Line 165, Address: 0x27f250, Func Offset: 0x30
	// Line 167, Address: 0x27f25c, Func Offset: 0x3c
	// Line 165, Address: 0x27f260, Func Offset: 0x40
	// Line 167, Address: 0x27f27c, Func Offset: 0x5c
	// Line 171, Address: 0x27f280, Func Offset: 0x60
	// Line 175, Address: 0x27f28c, Func Offset: 0x6c
	// Line 176, Address: 0x27f2a0, Func Offset: 0x80
	// Line 177, Address: 0x27f2ac, Func Offset: 0x8c
	// Line 178, Address: 0x27f2bc, Func Offset: 0x9c
	// Line 179, Address: 0x27f2c4, Func Offset: 0xa4
	// Func End, Address: 0x27f2e0, Func Offset: 0xc0
}

// 
// Start address: 0x27f2e0
void init_HBDropWork_list(HBDropWork* pW)
{
	int ObjNo;
	HBDrop* DropAry;
	HBDrop* pDrop;
	int DropNo;
	// Line 187, Address: 0x27f2e0, Func Offset: 0
	// Line 193, Address: 0x27f2f8, Func Offset: 0x18
	// Line 190, Address: 0x27f2fc, Func Offset: 0x1c
	// Line 191, Address: 0x27f308, Func Offset: 0x28
	// Line 203, Address: 0x27f310, Func Offset: 0x30
	// Line 207, Address: 0x27f320, Func Offset: 0x40
	// Line 210, Address: 0x27f328, Func Offset: 0x48
	// Line 211, Address: 0x27f334, Func Offset: 0x54
	// Line 212, Address: 0x27f370, Func Offset: 0x90
	// Line 213, Address: 0x27f380, Func Offset: 0xa0
	// Line 214, Address: 0x27f390, Func Offset: 0xb0
	// Func End, Address: 0x27f3a8, Func Offset: 0xc8
}

// 
// Start address: 0x27f3b0
void HitBloodDrop_SetDrop(float* SplashPos, float* SplashVec, float* CharaSpd, float size)
{
	HBDropWork* pW;
	ListNode* pNode;
	// Line 254, Address: 0x27f3b0, Func Offset: 0
	// Line 258, Address: 0x27f3c0, Func Offset: 0x10
	// Line 255, Address: 0x27f3c4, Func Offset: 0x14
	// Line 258, Address: 0x27f3c8, Func Offset: 0x18
	// Line 262, Address: 0x27f3d8, Func Offset: 0x28
	// Line 264, Address: 0x27f3e8, Func Offset: 0x38
	// Line 265, Address: 0x27f424, Func Offset: 0x74
	// Line 267, Address: 0x27f430, Func Offset: 0x80
	// Line 270, Address: 0x27f438, Func Offset: 0x88
	// Line 272, Address: 0x27f478, Func Offset: 0xc8
	// Line 274, Address: 0x27f4b0, Func Offset: 0x100
	// Line 281, Address: 0x27f4c0, Func Offset: 0x110
	// Func End, Address: 0x27f4cc, Func Offset: 0x11c
}

// 
// Start address: 0x27f4d0
void InitDropData(HBDrop* pDrop, float* SplashPos, float* SplashVec, float* CharaSpd, float size)
{
	float AddVec[4];
	// Line 293, Address: 0x27f4d0, Func Offset: 0
	// Line 297, Address: 0x27f500, Func Offset: 0x30
	// Line 298, Address: 0x27f508, Func Offset: 0x38
	// Line 299, Address: 0x27f560, Func Offset: 0x90
	// Line 301, Address: 0x27f5b8, Func Offset: 0xe8
	// Line 308, Address: 0x27f5bc, Func Offset: 0xec
	// Line 301, Address: 0x27f5c0, Func Offset: 0xf0
	// Line 302, Address: 0x27f5c4, Func Offset: 0xf4
	// Line 303, Address: 0x27f5cc, Func Offset: 0xfc
	// Line 308, Address: 0x27f5d4, Func Offset: 0x104
	// Line 309, Address: 0x27f5dc, Func Offset: 0x10c
	// Line 313, Address: 0x27f600, Func Offset: 0x130
	// Line 314, Address: 0x27f60c, Func Offset: 0x13c
	// Line 313, Address: 0x27f610, Func Offset: 0x140
	// Line 314, Address: 0x27f614, Func Offset: 0x144
	// Line 313, Address: 0x27f618, Func Offset: 0x148
	// Line 314, Address: 0x27f61c, Func Offset: 0x14c
	// Line 313, Address: 0x27f624, Func Offset: 0x154
	// Line 314, Address: 0x27f630, Func Offset: 0x160
	// Line 315, Address: 0x27f63c, Func Offset: 0x16c
	// Line 317, Address: 0x27f644, Func Offset: 0x174
	// Line 314, Address: 0x27f648, Func Offset: 0x178
	// Line 315, Address: 0x27f658, Func Offset: 0x188
	// Line 317, Address: 0x27f664, Func Offset: 0x194
	// Line 315, Address: 0x27f66c, Func Offset: 0x19c
	// Line 317, Address: 0x27f678, Func Offset: 0x1a8
	// Line 318, Address: 0x27f690, Func Offset: 0x1c0
	// Line 320, Address: 0x27f6b0, Func Offset: 0x1e0
	// Line 322, Address: 0x27f6d0, Func Offset: 0x200
	// Line 323, Address: 0x27f6d4, Func Offset: 0x204
	// Line 324, Address: 0x27f6d8, Func Offset: 0x208
	// Func End, Address: 0x27f6f8, Func Offset: 0x228
}

// 
// Start address: 0x27f700
void HitBloodDrop_CalcAll()
{
	HBDropWork* pW;
	ListNode* pNode;
	HBDrop* pDrop;
	int hit_floor;
	// Line 334, Address: 0x27f700, Func Offset: 0
	// Line 339, Address: 0x27f704, Func Offset: 0x4
	// Line 334, Address: 0x27f708, Func Offset: 0x8
	// Line 335, Address: 0x27f714, Func Offset: 0x14
	// Line 334, Address: 0x27f718, Func Offset: 0x18
	// Line 339, Address: 0x27f720, Func Offset: 0x20
	// Line 341, Address: 0x27f730, Func Offset: 0x30
	// Line 345, Address: 0x27f734, Func Offset: 0x34
	// Line 349, Address: 0x27f750, Func Offset: 0x50
	// Line 351, Address: 0x27f764, Func Offset: 0x64
	// Line 352, Address: 0x27f76c, Func Offset: 0x6c
	// Line 353, Address: 0x27f774, Func Offset: 0x74
	// Line 354, Address: 0x27f77c, Func Offset: 0x7c
	// Line 356, Address: 0x27f788, Func Offset: 0x88
	// Line 359, Address: 0x27f794, Func Offset: 0x94
	// Line 360, Address: 0x27f79c, Func Offset: 0x9c
	// Line 361, Address: 0x27f7a0, Func Offset: 0xa0
	// Line 364, Address: 0x27f7b4, Func Offset: 0xb4
	// Line 366, Address: 0x27f7bc, Func Offset: 0xbc
	// Line 367, Address: 0x27f7c0, Func Offset: 0xc0
	// Line 369, Address: 0x27f7dc, Func Offset: 0xdc
	// Line 378, Address: 0x27f7e8, Func Offset: 0xe8
	// Line 379, Address: 0x27f7f4, Func Offset: 0xf4
	// Line 378, Address: 0x27f7f8, Func Offset: 0xf8
	// Line 379, Address: 0x27f7fc, Func Offset: 0xfc
	// Line 380, Address: 0x27f808, Func Offset: 0x108
	// Func End, Address: 0x27f824, Func Offset: 0x124
}

// 
// Start address: 0x27f830
int calc_and_set_hit_floor_pos(HBDrop* pDrop)
{
	_anon4 Line;
	_anon2 Plane;
	_anon5* poly;
	float HitPos[4];
	// Line 388, Address: 0x27f830, Func Offset: 0
	// Line 396, Address: 0x27f834, Func Offset: 0x4
	// Line 388, Address: 0x27f838, Func Offset: 0x8
	// Line 393, Address: 0x27f844, Func Offset: 0x14
	// Line 394, Address: 0x27f850, Func Offset: 0x20
	// Line 395, Address: 0x27f858, Func Offset: 0x28
	// Line 396, Address: 0x27f860, Func Offset: 0x30
	// Line 398, Address: 0x27f864, Func Offset: 0x34
	// Line 399, Address: 0x27f874, Func Offset: 0x44
	// Line 400, Address: 0x27f884, Func Offset: 0x54
	// Line 401, Address: 0x27f890, Func Offset: 0x60
	// Line 403, Address: 0x27f894, Func Offset: 0x64
	// Line 404, Address: 0x27f8a8, Func Offset: 0x78
	// Line 406, Address: 0x27f8bc, Func Offset: 0x8c
	// Line 407, Address: 0x27f8c4, Func Offset: 0x94
	// Line 408, Address: 0x27f8c8, Func Offset: 0x98
	// Line 409, Address: 0x27f8d4, Func Offset: 0xa4
	// Line 412, Address: 0x27f8f4, Func Offset: 0xc4
	// Line 413, Address: 0x27f904, Func Offset: 0xd4
	// Line 414, Address: 0x27f920, Func Offset: 0xf0
	// Line 415, Address: 0x27f948, Func Offset: 0x118
	// Line 420, Address: 0x27f968, Func Offset: 0x138
	// Line 417, Address: 0x27f96c, Func Offset: 0x13c
	// Line 418, Address: 0x27f974, Func Offset: 0x144
	// Line 419, Address: 0x27f97c, Func Offset: 0x14c
	// Line 420, Address: 0x27f980, Func Offset: 0x150
	// Line 423, Address: 0x27f988, Func Offset: 0x158
	// Line 426, Address: 0x27f990, Func Offset: 0x160
	// Line 427, Address: 0x27f998, Func Offset: 0x168
	// Func End, Address: 0x27f9ac, Func Offset: 0x17c
}

// 
// Start address: 0x27f9b0
void remove_drop_node(ListNode* pNode, HBDropWork* pW)
{
	// Line 438, Address: 0x27f9b0, Func Offset: 0
	// Line 439, Address: 0x27f9b4, Func Offset: 0x4
	// Line 440, Address: 0x27f9f0, Func Offset: 0x40
	// Line 441, Address: 0x27fa28, Func Offset: 0x78
	// Func End, Address: 0x27fa30, Func Offset: 0x80
}

// 
// Start address: 0x27fa30
void HitBloodDrop_DrawAll()
{
	ListNode* pNode;
	unsigned long Tex0;
	_anon7* pPkTop;
	_anon7* pPk;
	_anon0* pTex;
	unsigned int cbp;
	HBDrop* pDrop;
	int qwc;
	// Line 452, Address: 0x27fa30, Func Offset: 0
	// Line 462, Address: 0x27fa34, Func Offset: 0x4
	// Line 452, Address: 0x27fa38, Func Offset: 0x8
	// Line 462, Address: 0x27fa3c, Func Offset: 0xc
	// Line 452, Address: 0x27fa40, Func Offset: 0x10
	// Line 462, Address: 0x27fa44, Func Offset: 0x14
	// Line 452, Address: 0x27fa48, Func Offset: 0x18
	// Line 462, Address: 0x27fa4c, Func Offset: 0x1c
	// Line 464, Address: 0x27fa88, Func Offset: 0x58
	// Line 469, Address: 0x27faa4, Func Offset: 0x74
	// Line 464, Address: 0x27faa8, Func Offset: 0x78
	// Line 469, Address: 0x27faac, Func Offset: 0x7c
	// Line 470, Address: 0x27fab8, Func Offset: 0x88
	// Line 469, Address: 0x27fabc, Func Offset: 0x8c
	// Line 470, Address: 0x27fac0, Func Offset: 0x90
	// Line 471, Address: 0x27fac4, Func Offset: 0x94
	// Line 474, Address: 0x27fad0, Func Offset: 0xa0
	// Line 479, Address: 0x27fadc, Func Offset: 0xac
	// Line 474, Address: 0x27fae0, Func Offset: 0xb0
	// Line 475, Address: 0x27faf4, Func Offset: 0xc4
	// Line 474, Address: 0x27faf8, Func Offset: 0xc8
	// Line 482, Address: 0x27fafc, Func Offset: 0xcc
	// Line 474, Address: 0x27fb00, Func Offset: 0xd0
	// Line 478, Address: 0x27fb04, Func Offset: 0xd4
	// Line 474, Address: 0x27fb08, Func Offset: 0xd8
	// Line 478, Address: 0x27fb0c, Func Offset: 0xdc
	// Line 475, Address: 0x27fb10, Func Offset: 0xe0
	// Line 478, Address: 0x27fb14, Func Offset: 0xe4
	// Line 476, Address: 0x27fb18, Func Offset: 0xe8
	// Line 478, Address: 0x27fb1c, Func Offset: 0xec
	// Line 486, Address: 0x27fb20, Func Offset: 0xf0
	// Line 483, Address: 0x27fb2c, Func Offset: 0xfc
	// Line 486, Address: 0x27fb30, Func Offset: 0x100
	// Line 487, Address: 0x27fb34, Func Offset: 0x104
	// Line 496, Address: 0x27fb38, Func Offset: 0x108
	// Line 500, Address: 0x27fb3c, Func Offset: 0x10c
	// Line 496, Address: 0x27fb40, Func Offset: 0x110
	// Line 491, Address: 0x27fb44, Func Offset: 0x114
	// Line 476, Address: 0x27fb48, Func Offset: 0x118
	// Line 496, Address: 0x27fb4c, Func Offset: 0x11c
	// Line 476, Address: 0x27fb50, Func Offset: 0x120
	// Line 507, Address: 0x27fb54, Func Offset: 0x124
	// Line 476, Address: 0x27fb58, Func Offset: 0x128
	// Line 496, Address: 0x27fb5c, Func Offset: 0x12c
	// Line 500, Address: 0x27fb60, Func Offset: 0x130
	// Line 478, Address: 0x27fb74, Func Offset: 0x144
	// Line 479, Address: 0x27fb78, Func Offset: 0x148
	// Line 480, Address: 0x27fb7c, Func Offset: 0x14c
	// Line 482, Address: 0x27fb8c, Func Offset: 0x15c
	// Line 483, Address: 0x27fb90, Func Offset: 0x160
	// Line 484, Address: 0x27fb94, Func Offset: 0x164
	// Line 486, Address: 0x27fba4, Func Offset: 0x174
	// Line 487, Address: 0x27fba8, Func Offset: 0x178
	// Line 488, Address: 0x27fbac, Func Offset: 0x17c
	// Line 490, Address: 0x27fbbc, Func Offset: 0x18c
	// Line 491, Address: 0x27fbc0, Func Offset: 0x190
	// Line 492, Address: 0x27fbc4, Func Offset: 0x194
	// Line 496, Address: 0x27fbd4, Func Offset: 0x1a4
	// Line 500, Address: 0x27fbd8, Func Offset: 0x1a8
	// Line 505, Address: 0x27fbdc, Func Offset: 0x1ac
	// Line 507, Address: 0x27fbe0, Func Offset: 0x1b0
	// Line 505, Address: 0x27fbe4, Func Offset: 0x1b4
	// Line 507, Address: 0x27fbe8, Func Offset: 0x1b8
	// Line 509, Address: 0x27fbf0, Func Offset: 0x1c0
	// Line 513, Address: 0x27fbf4, Func Offset: 0x1c4
	// Line 521, Address: 0x27fc20, Func Offset: 0x1f0
	// Line 524, Address: 0x27fc28, Func Offset: 0x1f8
	// Line 526, Address: 0x27fc34, Func Offset: 0x204
	// Line 527, Address: 0x27fc44, Func Offset: 0x214
	// Line 526, Address: 0x27fc48, Func Offset: 0x218
	// Line 527, Address: 0x27fc4c, Func Offset: 0x21c
	// Line 528, Address: 0x27fc50, Func Offset: 0x220
	// Line 531, Address: 0x27fc5c, Func Offset: 0x22c
	// Line 532, Address: 0x27fc74, Func Offset: 0x244
	// Line 531, Address: 0x27fc78, Func Offset: 0x248
	// Line 532, Address: 0x27fc80, Func Offset: 0x250
	// Line 533, Address: 0x27fc84, Func Offset: 0x254
	// Line 535, Address: 0x27fc90, Func Offset: 0x260
	// Line 538, Address: 0x27fce0, Func Offset: 0x2b0
	// Line 539, Address: 0x27fcf8, Func Offset: 0x2c8
	// Line 540, Address: 0x27fd00, Func Offset: 0x2d0
	// Line 541, Address: 0x27fd08, Func Offset: 0x2d8
	// Line 543, Address: 0x27fd18, Func Offset: 0x2e8
	// Line 545, Address: 0x27fd28, Func Offset: 0x2f8
	// Func End, Address: 0x27fd40, Func Offset: 0x310
}

// 
// Start address: 0x27fd40
void draw_blood_drop_on_floor(_anon7** ppPk, HBDrop* pDrop)
{
	_anon7* pPk;
	int AppearModeEndFlag;
	float Wld2ScrMat[4][4];
	float CntrPos[4];
	float ForVec[4];
	float RightVec[4];
	int TexRowNo;
	int TexClmnNo;
	int PolyAlpha;
	unsigned int flags;
	int VtNo;
	int Red;
	int Green;
	int Blue;
	float sin_val;
	float cos_val;
	float fa;
	float WldPos[4];
	float ScrPos[4];
	float fs;
	float ft;
	float inv_w;
	unsigned int fog_val;
	// Line 555, Address: 0x27fd40, Func Offset: 0
	// Line 575, Address: 0x27fd44, Func Offset: 0x4
	// Line 555, Address: 0x27fd48, Func Offset: 0x8
	// Line 575, Address: 0x27fd4c, Func Offset: 0xc
	// Line 555, Address: 0x27fd50, Func Offset: 0x10
	// Line 575, Address: 0x27fd54, Func Offset: 0x14
	// Line 555, Address: 0x27fd58, Func Offset: 0x18
	// Line 575, Address: 0x27fd88, Func Offset: 0x48
	// Line 562, Address: 0x27fd8c, Func Offset: 0x4c
	// Line 556, Address: 0x27fd90, Func Offset: 0x50
	// Line 575, Address: 0x27fd94, Func Offset: 0x54
	// Line 562, Address: 0x27fd9c, Func Offset: 0x5c
	// Line 563, Address: 0x27fda4, Func Offset: 0x64
	// Line 562, Address: 0x27fda8, Func Offset: 0x68
	// Line 563, Address: 0x27fdac, Func Offset: 0x6c
	// Line 575, Address: 0x27fdb0, Func Offset: 0x70
	// Line 577, Address: 0x27fdbc, Func Offset: 0x7c
	// Line 578, Address: 0x27fdc8, Func Offset: 0x88
	// Line 579, Address: 0x27fdcc, Func Offset: 0x8c
	// Line 581, Address: 0x27fdd0, Func Offset: 0x90
	// Line 584, Address: 0x27fdd8, Func Offset: 0x98
	// Line 585, Address: 0x27fe20, Func Offset: 0xe0
	// Line 586, Address: 0x27fe68, Func Offset: 0x128
	// Line 593, Address: 0x27fe74, Func Offset: 0x134
	// Line 586, Address: 0x27fe7c, Func Offset: 0x13c
	// Line 595, Address: 0x27fe84, Func Offset: 0x144
	// Line 586, Address: 0x27fe88, Func Offset: 0x148
	// Line 587, Address: 0x27fe90, Func Offset: 0x150
	// Line 588, Address: 0x27fea4, Func Offset: 0x164
	// Line 589, Address: 0x27feb8, Func Offset: 0x178
	// Line 592, Address: 0x27fed0, Func Offset: 0x190
	// Line 593, Address: 0x27fed8, Func Offset: 0x198
	// Line 594, Address: 0x27fee4, Func Offset: 0x1a4
	// Line 599, Address: 0x27feec, Func Offset: 0x1ac
	// Line 600, Address: 0x27fef4, Func Offset: 0x1b4
	// Line 601, Address: 0x27fefc, Func Offset: 0x1bc
	// Line 604, Address: 0x27ff08, Func Offset: 0x1c8
	// Line 605, Address: 0x27ff2c, Func Offset: 0x1ec
	// Line 606, Address: 0x27ff40, Func Offset: 0x200
	// Line 607, Address: 0x27ff5c, Func Offset: 0x21c
	// Line 609, Address: 0x27ff60, Func Offset: 0x220
	// Line 610, Address: 0x27ffb8, Func Offset: 0x278
	// Line 609, Address: 0x27ffbc, Func Offset: 0x27c
	// Line 610, Address: 0x27ffc0, Func Offset: 0x280
	// Line 615, Address: 0x27ffc4, Func Offset: 0x284
	// Line 617, Address: 0x27fff8, Func Offset: 0x2b8
	// Line 618, Address: 0x280008, Func Offset: 0x2c8
	// Line 619, Address: 0x280018, Func Offset: 0x2d8
	// Line 620, Address: 0x280024, Func Offset: 0x2e4
	// Line 624, Address: 0x280028, Func Offset: 0x2e8
	// Line 625, Address: 0x280030, Func Offset: 0x2f0
	// Line 627, Address: 0x28004c, Func Offset: 0x30c
	// Line 628, Address: 0x280058, Func Offset: 0x318
	// Line 629, Address: 0x28008c, Func Offset: 0x34c
	// Line 631, Address: 0x280094, Func Offset: 0x354
	// Line 632, Address: 0x2800a0, Func Offset: 0x360
	// Line 633, Address: 0x2800a4, Func Offset: 0x364
	// Line 636, Address: 0x2800a8, Func Offset: 0x368
	// Line 643, Address: 0x2800b8, Func Offset: 0x378
	// Line 644, Address: 0x2800c8, Func Offset: 0x388
	// Line 643, Address: 0x2800cc, Func Offset: 0x38c
	// Line 644, Address: 0x280100, Func Offset: 0x3c0
	// Line 643, Address: 0x28010c, Func Offset: 0x3cc
	// Line 644, Address: 0x280114, Func Offset: 0x3d4
	// Line 645, Address: 0x280118, Func Offset: 0x3d8
	// Line 643, Address: 0x28011c, Func Offset: 0x3dc
	// Line 644, Address: 0x280120, Func Offset: 0x3e0
	// Line 645, Address: 0x280144, Func Offset: 0x404
	// Line 647, Address: 0x280164, Func Offset: 0x424
	// Line 648, Address: 0x280188, Func Offset: 0x448
	// Line 649, Address: 0x2801a8, Func Offset: 0x468
	// Line 650, Address: 0x2801c8, Func Offset: 0x488
	// Line 651, Address: 0x2801e4, Func Offset: 0x4a4
	// Line 653, Address: 0x2801e8, Func Offset: 0x4a8
	// Line 655, Address: 0x280218, Func Offset: 0x4d8
	// Line 656, Address: 0x28023c, Func Offset: 0x4fc
	// Line 658, Address: 0x280288, Func Offset: 0x548
	// Line 661, Address: 0x2802a8, Func Offset: 0x568
	// Line 662, Address: 0x2802b4, Func Offset: 0x574
	// Line 661, Address: 0x2802bc, Func Offset: 0x57c
	// Line 662, Address: 0x2802c0, Func Offset: 0x580
	// Line 663, Address: 0x2802d8, Func Offset: 0x598
	// Line 665, Address: 0x280328, Func Offset: 0x5e8
	// Line 678, Address: 0x280330, Func Offset: 0x5f0
	// Line 668, Address: 0x280334, Func Offset: 0x5f4
	// Line 677, Address: 0x280338, Func Offset: 0x5f8
	// Line 668, Address: 0x28033c, Func Offset: 0x5fc
	// Line 669, Address: 0x28034c, Func Offset: 0x60c
	// Line 672, Address: 0x280350, Func Offset: 0x610
	// Line 673, Address: 0x28035c, Func Offset: 0x61c
	// Line 674, Address: 0x280360, Func Offset: 0x620
	// Line 678, Address: 0x280364, Func Offset: 0x624
	// Line 679, Address: 0x280370, Func Offset: 0x630
	// Line 680, Address: 0x280390, Func Offset: 0x650
	// Line 681, Address: 0x280398, Func Offset: 0x658
	// Line 682, Address: 0x28039c, Func Offset: 0x65c
	// Line 683, Address: 0x2803b4, Func Offset: 0x674
	// Line 685, Address: 0x2803b8, Func Offset: 0x678
	// Func End, Address: 0x2803f0, Func Offset: 0x6b0
}

