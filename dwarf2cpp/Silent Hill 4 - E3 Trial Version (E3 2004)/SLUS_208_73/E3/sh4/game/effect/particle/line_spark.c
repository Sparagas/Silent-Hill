typedef struct PtclOrgData;
typedef union _anon0;
typedef struct _anon1;
typedef struct LineSparkCmnData;
typedef struct LineSparkPtcl;
typedef struct sfObj;
typedef union _anon2;
typedef enum _cam3Step : unsigned char;
typedef struct _cam3Work;

typedef void(*type_14)(void*, PtclOrgData*, void*);
typedef void(*type_15)(sfObj*);
typedef void(*type_17)(void*, int, PtclOrgData*, void*);
typedef void(*type_18)();
typedef void(*type_20)(void*, int, PtclOrgData*, void*);
typedef void(*type_21)(sfObj*);
typedef void(*type_26)(sfObj*);

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
typedef float type_11[4];
typedef float type_12[4][4];
typedef _anon2 type_13[256];
typedef float type_16[4];
typedef void(*type_19)()[2];
typedef unsigned char type_22[4];
typedef short type_23[2];
typedef unsigned short type_24[2];
typedef char type_25[4];
typedef unsigned char type_27[4];
typedef void(*type_28)(sfObj*)[3];
typedef float type_29[1];
typedef int type_30[1];
typedef long type_31[2];
typedef unsigned long type_32[2];

struct PtclOrgData
{
	float GenPos[4];
	float GenPlaneVec1[4];
	float GenPlaneVec2[4];
	float GenDirVec[4];
	float GenPtclWidth;
	int GenPtclNum;
	float GenIntervalTime;
	float GenWaitSubTimer;
	float SpreadAng;
	float MaxGenSpd;
	float MinGenSpd;
	int TexFileNo;
	int TexNo;
	int ForDemoFlag;
	int DrawOffFlag;
	float IntervalSubTimer;
	int AlreadyGenPtclNum;
	int EndPtclNum;
	unsigned long AlivePtclFlags;
};

union _anon0
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

struct _anon1
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

struct LineSparkCmnData
{
	float MaxLifeTime;
	unsigned char SparkRgba[4];
};

struct LineSparkPtcl
{
	float Pos[4];
	float Spd[4];
	float AfterPos[4];
	float Timer;
	float LifeTime;
	int RandVal;
};

struct sfObj
{
	_anon2 fwork[256];
	_anon2* work;
	void(*func)(sfObj*);
	_anon2* work_pt0;
	_anon2* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon2* sys_work;
	_anon2* scene_work;
	_anon2* event_work;
	_anon2* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

union _anon2
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

void(*camInitFuncs)()[2];
void(*camera_main_funcs)(sfObj*)[3];
void(*LineSparkPtcl_Draw)(void*, int, PtclOrgData*, void*);
void(*LineSparkPtcl_Calc)(void*, int, PtclOrgData*, void*);
void(*Generate_OnePtcl)(void*, PtclOrgData*, void*);
float sg_vector_zero[4];
_cam3Work cam3_work;

void LineSparkPartircle_LineSparkMake(float* GenCenterPos, unsigned char* SparkRgba, float* GenSpdVec, float SpreadAng, float MaxLifeTime, unsigned int DemoFlag);
void Generate_OnePtcl(void* PtclAdr, PtclOrgData* pOrgDt, void* pHeadCmn);
void LineSparkPtcl_Calc(void* pHeadPtcl, int PtclNum, PtclOrgData* pOrgDt, void* pHeadCmn);
void LineSparkPtcl_Draw(void* pHeadPtcl, int PtclNum, PtclOrgData* pOrgDt, void* pHeadCmn);
_anon0* Make_LineSpark_Packet(_anon0* pPk, LineSparkPtcl* pPtcl, LineSparkCmnData* pCmnDt, float Wld2ScrMat[4]);

// 
// Start address: 0x2f2c20
void LineSparkPartircle_LineSparkMake(float* GenCenterPos, unsigned char* SparkRgba, float* GenSpdVec, float SpreadAng, float MaxLifeTime, unsigned int DemoFlag)
{
	PtclOrgData OrgDt;
	LineSparkCmnData CmnData;
	// Line 145, Address: 0x2f2c20, Func Offset: 0
	// Line 149, Address: 0x2f2c28, Func Offset: 0x8
	// Line 152, Address: 0x2f2c34, Func Offset: 0x14
	// Line 150, Address: 0x2f2c38, Func Offset: 0x18
	// Line 152, Address: 0x2f2c3c, Func Offset: 0x1c
	// Line 150, Address: 0x2f2c40, Func Offset: 0x20
	// Line 152, Address: 0x2f2c44, Func Offset: 0x24
	// Line 153, Address: 0x2f2c50, Func Offset: 0x30
	// Line 154, Address: 0x2f2c5c, Func Offset: 0x3c
	// Line 155, Address: 0x2f2c68, Func Offset: 0x48
	// Line 156, Address: 0x2f2c6c, Func Offset: 0x4c
	// Line 155, Address: 0x2f2c70, Func Offset: 0x50
	// Line 159, Address: 0x2f2c74, Func Offset: 0x54
	// Line 157, Address: 0x2f2c78, Func Offset: 0x58
	// Line 160, Address: 0x2f2c7c, Func Offset: 0x5c
	// Line 161, Address: 0x2f2c9c, Func Offset: 0x7c
	// Line 172, Address: 0x2f2ca4, Func Offset: 0x84
	// Line 160, Address: 0x2f2ca8, Func Offset: 0x88
	// Line 162, Address: 0x2f2cac, Func Offset: 0x8c
	// Line 161, Address: 0x2f2cb0, Func Offset: 0x90
	// Line 162, Address: 0x2f2cb4, Func Offset: 0x94
	// Line 166, Address: 0x2f2cbc, Func Offset: 0x9c
	// Line 163, Address: 0x2f2cc0, Func Offset: 0xa0
	// Line 172, Address: 0x2f2cc4, Func Offset: 0xa4
	// Line 163, Address: 0x2f2cc8, Func Offset: 0xa8
	// Line 172, Address: 0x2f2ccc, Func Offset: 0xac
	// Line 164, Address: 0x2f2cd0, Func Offset: 0xb0
	// Line 163, Address: 0x2f2cd4, Func Offset: 0xb4
	// Line 164, Address: 0x2f2cd8, Func Offset: 0xb8
	// Line 172, Address: 0x2f2cdc, Func Offset: 0xbc
	// Line 161, Address: 0x2f2ce0, Func Offset: 0xc0
	// Line 172, Address: 0x2f2ce4, Func Offset: 0xc4
	// Line 161, Address: 0x2f2cfc, Func Offset: 0xdc
	// Line 167, Address: 0x2f2d00, Func Offset: 0xe0
	// Line 168, Address: 0x2f2d08, Func Offset: 0xe8
	// Line 169, Address: 0x2f2d10, Func Offset: 0xf0
	// Line 170, Address: 0x2f2d18, Func Offset: 0xf8
	// Line 172, Address: 0x2f2d20, Func Offset: 0x100
	// Line 183, Address: 0x2f2d28, Func Offset: 0x108
	// Func End, Address: 0x2f2d34, Func Offset: 0x114
}

// 
// Start address: 0x2f2d40
void Generate_OnePtcl(void* PtclAdr, PtclOrgData* pOrgDt, void* pHeadCmn)
{
	LineSparkPtcl* pPtcl;
	// Line 194, Address: 0x2f2d40, Func Offset: 0
	// Line 195, Address: 0x2f2d5c, Func Offset: 0x1c
	// Line 198, Address: 0x2f2d60, Func Offset: 0x20
	// Line 200, Address: 0x2f2d6c, Func Offset: 0x2c
	// Line 206, Address: 0x2f2d80, Func Offset: 0x40
	// Line 208, Address: 0x2f2d8c, Func Offset: 0x4c
	// Line 209, Address: 0x2f2dbc, Func Offset: 0x7c
	// Line 210, Address: 0x2f2dc8, Func Offset: 0x88
	// Func End, Address: 0x2f2de0, Func Offset: 0xa0
}

// 
// Start address: 0x2f2de0
void LineSparkPtcl_Calc(void* pHeadPtcl, int PtclNum, PtclOrgData* pOrgDt, void* pHeadCmn)
{
	LineSparkPtcl* PtclAry;
	int PtclNo;
	LineSparkCmnData* pCmnDt;
	LineSparkPtcl* pPtcl;
	float MvVec[4];
	// Line 223, Address: 0x2f2de0, Func Offset: 0
	// Line 224, Address: 0x2f2e00, Func Offset: 0x20
	// Line 223, Address: 0x2f2e04, Func Offset: 0x24
	// Line 229, Address: 0x2f2e08, Func Offset: 0x28
	// Line 231, Address: 0x2f2e10, Func Offset: 0x30
	// Line 233, Address: 0x2f2e18, Func Offset: 0x38
	// Line 237, Address: 0x2f2e2c, Func Offset: 0x4c
	// Line 240, Address: 0x2f2e3c, Func Offset: 0x5c
	// Line 243, Address: 0x2f2e5c, Func Offset: 0x7c
	// Line 246, Address: 0x2f2e9c, Func Offset: 0xbc
	// Line 247, Address: 0x2f2ec8, Func Offset: 0xe8
	// Line 250, Address: 0x2f2ee0, Func Offset: 0x100
	// Line 252, Address: 0x2f2ef4, Func Offset: 0x114
	// Line 254, Address: 0x2f2efc, Func Offset: 0x11c
	// Line 255, Address: 0x2f2f14, Func Offset: 0x134
	// Func End, Address: 0x2f2f34, Func Offset: 0x154
}

// 
// Start address: 0x2f2f40
void LineSparkPtcl_Draw(void* pHeadPtcl, int PtclNum, PtclOrgData* pOrgDt, void* pHeadCmn)
{
	LineSparkPtcl* PtclAry;
	int PtclNo;
	LineSparkCmnData* pCmnDt;
	float Wld2ScrMat[4][4];
	_anon0* pPkTop;
	_anon0* pPk;
	_anon0* pGifTag;
	unsigned long Tex0;
	_anon1* pTex;
	unsigned int cbp;
	int qwc;
	// Line 269, Address: 0x2f2f40, Func Offset: 0
	// Line 270, Address: 0x2f2f64, Func Offset: 0x24
	// Line 269, Address: 0x2f2f68, Func Offset: 0x28
	// Line 279, Address: 0x2f2f6c, Func Offset: 0x2c
	// Line 269, Address: 0x2f2f70, Func Offset: 0x30
	// Line 272, Address: 0x2f2f74, Func Offset: 0x34
	// Line 279, Address: 0x2f2f78, Func Offset: 0x38
	// Line 287, Address: 0x2f2f80, Func Offset: 0x40
	// Line 289, Address: 0x2f2f8c, Func Offset: 0x4c
	// Line 287, Address: 0x2f2f90, Func Offset: 0x50
	// Line 289, Address: 0x2f2f94, Func Offset: 0x54
	// Line 290, Address: 0x2f2f9c, Func Offset: 0x5c
	// Line 294, Address: 0x2f2fbc, Func Offset: 0x7c
	// Line 295, Address: 0x2f2fd0, Func Offset: 0x90
	// Line 294, Address: 0x2f2fd4, Func Offset: 0x94
	// Line 295, Address: 0x2f2fd8, Func Offset: 0x98
	// Line 294, Address: 0x2f2fe0, Func Offset: 0xa0
	// Line 295, Address: 0x2f2fe4, Func Offset: 0xa4
	// Line 300, Address: 0x2f2ff0, Func Offset: 0xb0
	// Line 295, Address: 0x2f2ff4, Func Offset: 0xb4
	// Line 300, Address: 0x2f2ff8, Func Offset: 0xb8
	// Line 299, Address: 0x2f2ffc, Func Offset: 0xbc
	// Line 300, Address: 0x2f3000, Func Offset: 0xc0
	// Line 308, Address: 0x2f3004, Func Offset: 0xc4
	// Line 300, Address: 0x2f3008, Func Offset: 0xc8
	// Line 306, Address: 0x2f300c, Func Offset: 0xcc
	// Line 300, Address: 0x2f3010, Func Offset: 0xd0
	// Line 308, Address: 0x2f3014, Func Offset: 0xd4
	// Line 305, Address: 0x2f3018, Func Offset: 0xd8
	// Line 300, Address: 0x2f301c, Func Offset: 0xdc
	// Line 308, Address: 0x2f3020, Func Offset: 0xe0
	// Line 315, Address: 0x2f3028, Func Offset: 0xe8
	// Line 319, Address: 0x2f303c, Func Offset: 0xfc
	// Line 320, Address: 0x2f3050, Func Offset: 0x110
	// Line 321, Address: 0x2f3060, Func Offset: 0x120
	// Line 324, Address: 0x2f3080, Func Offset: 0x140
	// Line 321, Address: 0x2f3084, Func Offset: 0x144
	// Line 324, Address: 0x2f3090, Func Offset: 0x150
	// Line 321, Address: 0x2f3094, Func Offset: 0x154
	// Line 324, Address: 0x2f30a4, Func Offset: 0x164
	// Line 325, Address: 0x2f30b4, Func Offset: 0x174
	// Line 326, Address: 0x2f30bc, Func Offset: 0x17c
	// Line 327, Address: 0x2f30c4, Func Offset: 0x184
	// Line 328, Address: 0x2f30d4, Func Offset: 0x194
	// Line 329, Address: 0x2f30d8, Func Offset: 0x198
	// Line 331, Address: 0x2f30e8, Func Offset: 0x1a8
	// Func End, Address: 0x2f3114, Func Offset: 0x1d4
}

// 
// Start address: 0x2f3120
_anon0* Make_LineSpark_Packet(_anon0* pPk, LineSparkPtcl* pPtcl, LineSparkCmnData* pCmnDt, float Wld2ScrMat[4])
{
	_anon0* pSavePk;
	float inv_w;
	int VtNo;
	float AlphaRate;
	float GreenRate;
	float LifeRate;
	float Pos[4];
	float ScrPos[4];
	int fog_val;
	float AfterVec[4];
	// Line 345, Address: 0x2f3120, Func Offset: 0
	// Line 357, Address: 0x2f3124, Func Offset: 0x4
	// Line 345, Address: 0x2f3128, Func Offset: 0x8
	// Line 357, Address: 0x2f312c, Func Offset: 0xc
	// Line 345, Address: 0x2f3130, Func Offset: 0x10
	// Line 357, Address: 0x2f3134, Func Offset: 0x14
	// Line 345, Address: 0x2f3138, Func Offset: 0x18
	// Line 346, Address: 0x2f3160, Func Offset: 0x40
	// Line 345, Address: 0x2f3164, Func Offset: 0x44
	// Line 356, Address: 0x2f316c, Func Offset: 0x4c
	// Line 357, Address: 0x2f3180, Func Offset: 0x60
	// Line 358, Address: 0x2f318c, Func Offset: 0x6c
	// Line 359, Address: 0x2f31a0, Func Offset: 0x80
	// Line 360, Address: 0x2f31c4, Func Offset: 0xa4
	// Line 361, Address: 0x2f31c8, Func Offset: 0xa8
	// Line 362, Address: 0x2f31d0, Func Offset: 0xb0
	// Line 364, Address: 0x2f31f0, Func Offset: 0xd0
	// Line 365, Address: 0x2f3208, Func Offset: 0xe8
	// Line 367, Address: 0x2f3210, Func Offset: 0xf0
	// Line 365, Address: 0x2f3214, Func Offset: 0xf4
	// Line 367, Address: 0x2f322c, Func Offset: 0x10c
	// Line 371, Address: 0x2f3238, Func Offset: 0x118
	// Line 373, Address: 0x2f323c, Func Offset: 0x11c
	// Line 374, Address: 0x2f3244, Func Offset: 0x124
	// Line 376, Address: 0x2f324c, Func Offset: 0x12c
	// Line 377, Address: 0x2f327c, Func Offset: 0x15c
	// Line 378, Address: 0x2f329c, Func Offset: 0x17c
	// Line 380, Address: 0x2f32a0, Func Offset: 0x180
	// Line 382, Address: 0x2f32d0, Func Offset: 0x1b0
	// Line 383, Address: 0x2f32ec, Func Offset: 0x1cc
	// Line 384, Address: 0x2f32f4, Func Offset: 0x1d4
	// Line 385, Address: 0x2f32f8, Func Offset: 0x1d8
	// Line 386, Address: 0x2f3300, Func Offset: 0x1e0
	// Line 385, Address: 0x2f3304, Func Offset: 0x1e4
	// Line 386, Address: 0x2f3308, Func Offset: 0x1e8
	// Line 385, Address: 0x2f330c, Func Offset: 0x1ec
	// Line 386, Address: 0x2f3310, Func Offset: 0x1f0
	// Line 388, Address: 0x2f332c, Func Offset: 0x20c
	// Line 391, Address: 0x2f3378, Func Offset: 0x258
	// Line 395, Address: 0x2f3380, Func Offset: 0x260
	// Line 396, Address: 0x2f3384, Func Offset: 0x264
	// Line 397, Address: 0x2f338c, Func Offset: 0x26c
	// Line 398, Address: 0x2f3394, Func Offset: 0x274
	// Line 399, Address: 0x2f33a0, Func Offset: 0x280
	// Line 400, Address: 0x2f33ac, Func Offset: 0x28c
	// Line 401, Address: 0x2f33b0, Func Offset: 0x290
	// Line 405, Address: 0x2f33b8, Func Offset: 0x298
	// Line 402, Address: 0x2f33bc, Func Offset: 0x29c
	// Line 405, Address: 0x2f33c0, Func Offset: 0x2a0
	// Line 406, Address: 0x2f33c4, Func Offset: 0x2a4
	// Line 407, Address: 0x2f343c, Func Offset: 0x31c
	// Line 408, Address: 0x2f3444, Func Offset: 0x324
	// Line 412, Address: 0x2f34c0, Func Offset: 0x3a0
	// Line 409, Address: 0x2f34c4, Func Offset: 0x3a4
	// Line 412, Address: 0x2f34c8, Func Offset: 0x3a8
	// Line 413, Address: 0x2f34d0, Func Offset: 0x3b0
	// Line 414, Address: 0x2f34e8, Func Offset: 0x3c8
	// Line 415, Address: 0x2f34f0, Func Offset: 0x3d0
	// Line 416, Address: 0x2f34f4, Func Offset: 0x3d4
	// Line 418, Address: 0x2f3504, Func Offset: 0x3e4
	// Line 419, Address: 0x2f3508, Func Offset: 0x3e8
	// Func End, Address: 0x2f3538, Func Offset: 0x418
}

