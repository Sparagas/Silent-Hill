typedef struct _anon0;
typedef union _anon1;
typedef struct SplayWork;
typedef struct SplayCmnData;
typedef struct sfObj;
typedef struct SplayPtcl;
typedef struct PtclOrgData;
typedef union _anon2;
typedef enum _cam3Step : unsigned char;
typedef struct _cam3Work;

typedef void(*type_16)(sfObj*);
typedef void(*type_17)();
typedef void(*type_20)(sfObj*);
typedef void(*type_22)(void*, PtclOrgData*, void*);
typedef void(*type_24)(sfObj*);
typedef void(*type_27)(void*, int, PtclOrgData*, void*);
typedef void(*type_32)(void*, int, PtclOrgData*, void*);

typedef int type_0[4];
typedef unsigned int type_1[4];
typedef void* type_2[4];
typedef short type_3[8];
typedef unsigned short type_4[8];
typedef char type_5[16];
typedef unsigned char type_6[16];
typedef SplayWork type_7[2];
typedef float type_8[4];
typedef float type_9[1];
typedef int type_10[1];
typedef long type_11[1];
typedef float type_12[4][4];
typedef _anon2 type_13[256];
typedef float type_14[4];
typedef float type_15[4][4];
typedef float type_18[4];
typedef void(*type_19)()[2];
typedef unsigned char type_21[4];
typedef short type_23[2];
typedef unsigned short type_25[2];
typedef void(*type_26)(sfObj*)[3];
typedef char type_28[4];
typedef unsigned char type_29[4];
typedef float type_30[1];
typedef int type_31[1];
typedef long type_33[2];
typedef unsigned long type_34[2];

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

union _anon1
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

struct SplayWork
{
	sfObj* pUseObj;
};

struct SplayCmnData
{
	float PolyLen;
	float PolyAreaAddSpd;
	float PtclLifeTime;
	unsigned char Rgba[4];
	float UseDragRate;
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

struct SplayPtcl
{
	float Pos[4];
	float Spd[4];
	float PolyWidth;
	float Timer;
	float RollAng;
	unsigned int RandVal;
};

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
SplayWork PlayerSplayW[2];
void(*SplayPtcl_Draw)(void*, int, PtclOrgData*, void*);
void(*SplayPtcl_Calc)(void*, int, PtclOrgData*, void*);
void(*Generate_OnePtcl)(void*, PtclOrgData*, void*);
float sg_vector_unit_z[4];
float sg_vector_zero[4];
float sg_vector_unit_w[4];
float sg_matrix_unit[4][4];
_cam3Work cam3_work;

void PlayerSplay_SceneInit();
void PlayerSplay_PosAndSpeedSet(float* GenPos, float* GenSpd, int DemoFlag);
void PlayerSplay_Start(int DemoFlag);
void PlayerSplay_Stop(int DemoFlag);
sfObj* SplayParticle_sfObjMake(float UseDragRate, float PolyAreaAddSpd, float PtclLifeTime, unsigned char* Rgba, int DemoFlag);
void SplayParticle_Start(sfObj* pObj);
void SplayParticle_Stop(sfObj* pObj);
void SplayParticle_GeneratePosSpdSet(sfObj* pObj, float* GenPos, float* GenSpd);
void Generate_OnePtcl(void* PtclAdr, PtclOrgData* pOrgDt, void* pHeadCmn);
void SplayPtcl_Calc(void* pHeadPtcl, int PtclNum, PtclOrgData* pOrgDt, void* pHeadCmn);
void SplayPtcl_Draw(void* pHeadPtcl, int PtclNum, PtclOrgData* pOrgDt, void* pHeadCmn);
_anon1* Make_Splay_Packet(_anon1* pPk, SplayPtcl* pPtcl, SplayCmnData* pCmnDt, float Wld2ScrMat[4], float Wld2ViewMat[4], float View2ScrMat[4]);
int calc_poly_longate_param_by_move(float* pLongateRate, float* pLongateAngZ, float* PtclPos, float* SpdVec, float PolyWidth, float Wld2ViewMat[4]);

// 
// Start address: 0x331d70
void PlayerSplay_SceneInit()
{
	int No;
	unsigned char Rgba[4];
	// Line 164, Address: 0x331d70, Func Offset: 0
	// Line 167, Address: 0x331d7c, Func Offset: 0xc
	// Line 170, Address: 0x331d80, Func Offset: 0x10
	// Line 178, Address: 0x331dc4, Func Offset: 0x54
	// Line 179, Address: 0x331dd4, Func Offset: 0x64
	// Func End, Address: 0x331de4, Func Offset: 0x74
}

// 
// Start address: 0x331df0
void PlayerSplay_PosAndSpeedSet(float* GenPos, float* GenSpd, int DemoFlag)
{
	// Line 190, Address: 0x331df0, Func Offset: 0
	// Func End, Address: 0x331e18, Func Offset: 0x28
}

// 
// Start address: 0x331e20
void PlayerSplay_Start(int DemoFlag)
{
	// Line 205, Address: 0x331e20, Func Offset: 0
	// Func End, Address: 0x331e3c, Func Offset: 0x1c
}

// 
// Start address: 0x331e40
void PlayerSplay_Stop(int DemoFlag)
{
	// Line 216, Address: 0x331e40, Func Offset: 0
	// Func End, Address: 0x331e5c, Func Offset: 0x1c
}

// 
// Start address: 0x331e60
sfObj* SplayParticle_sfObjMake(float UseDragRate, float PolyAreaAddSpd, float PtclLifeTime, unsigned char* Rgba, int DemoFlag)
{
	PtclOrgData OrgDt;
	SplayCmnData CmnDt;
	sfObj* pUseObj;
	// Line 244, Address: 0x331e60, Func Offset: 0
	// Line 250, Address: 0x331e64, Func Offset: 0x4
	// Line 244, Address: 0x331e68, Func Offset: 0x8
	// Line 250, Address: 0x331e6c, Func Offset: 0xc
	// Line 244, Address: 0x331e70, Func Offset: 0x10
	// Line 250, Address: 0x331e74, Func Offset: 0x14
	// Line 253, Address: 0x331e84, Func Offset: 0x24
	// Line 254, Address: 0x331e98, Func Offset: 0x38
	// Line 256, Address: 0x331ea4, Func Offset: 0x44
	// Line 273, Address: 0x331eb8, Func Offset: 0x58
	// Line 258, Address: 0x331ebc, Func Offset: 0x5c
	// Line 259, Address: 0x331ec4, Func Offset: 0x64
	// Line 260, Address: 0x331ecc, Func Offset: 0x6c
	// Line 259, Address: 0x331ed0, Func Offset: 0x70
	// Line 260, Address: 0x331ed4, Func Offset: 0x74
	// Line 262, Address: 0x331ed8, Func Offset: 0x78
	// Line 260, Address: 0x331edc, Func Offset: 0x7c
	// Line 262, Address: 0x331ee0, Func Offset: 0x80
	// Line 263, Address: 0x331eec, Func Offset: 0x8c
	// Line 264, Address: 0x331ef4, Func Offset: 0x94
	// Line 266, Address: 0x331f04, Func Offset: 0xa4
	// Line 264, Address: 0x331f0c, Func Offset: 0xac
	// Line 268, Address: 0x331f10, Func Offset: 0xb0
	// Line 273, Address: 0x331f14, Func Offset: 0xb4
	// Line 270, Address: 0x331f18, Func Offset: 0xb8
	// Line 273, Address: 0x331f1c, Func Offset: 0xbc
	// Line 268, Address: 0x331f20, Func Offset: 0xc0
	// Line 270, Address: 0x331f24, Func Offset: 0xc4
	// Line 266, Address: 0x331f28, Func Offset: 0xc8
	// Line 271, Address: 0x331f2c, Func Offset: 0xcc
	// Line 267, Address: 0x331f30, Func Offset: 0xd0
	// Line 272, Address: 0x331f34, Func Offset: 0xd4
	// Line 273, Address: 0x331f38, Func Offset: 0xd8
	// Line 276, Address: 0x331f40, Func Offset: 0xe0
	// Line 289, Address: 0x331f74, Func Offset: 0x114
	// Func End, Address: 0x331f84, Func Offset: 0x124
}

// 
// Start address: 0x331f90
void SplayParticle_Start(sfObj* pObj)
{
	PtclOrgData* pOrgDt;
	// Line 300, Address: 0x331f90, Func Offset: 0
	// Line 302, Address: 0x331f98, Func Offset: 0x8
	// Line 303, Address: 0x331fa0, Func Offset: 0x10
	// Line 304, Address: 0x331fa4, Func Offset: 0x14
	// Line 305, Address: 0x331fa8, Func Offset: 0x18
	// Func End, Address: 0x331fb4, Func Offset: 0x24
}

// 
// Start address: 0x331fc0
void SplayParticle_Stop(sfObj* pObj)
{
	PtclOrgData* pOrgDt;
	// Line 317, Address: 0x331fc0, Func Offset: 0
	// Line 319, Address: 0x331fc8, Func Offset: 0x8
	// Line 320, Address: 0x331fd0, Func Offset: 0x10
	// Line 322, Address: 0x331fdc, Func Offset: 0x1c
	// Func End, Address: 0x331fe8, Func Offset: 0x28
}

// 
// Start address: 0x331ff0
void SplayParticle_GeneratePosSpdSet(sfObj* pObj, float* GenPos, float* GenSpd)
{
	PtclOrgData* pOrgDt;
	SplayCmnData* pCmnDt;
	// Line 336, Address: 0x331ff0, Func Offset: 0
	// Line 339, Address: 0x332010, Func Offset: 0x20
	// Line 340, Address: 0x332018, Func Offset: 0x28
	// Line 341, Address: 0x332028, Func Offset: 0x38
	// Line 342, Address: 0x332030, Func Offset: 0x40
	// Line 343, Address: 0x332038, Func Offset: 0x48
	// Line 344, Address: 0x332060, Func Offset: 0x70
	// Line 345, Address: 0x332078, Func Offset: 0x88
	// Line 346, Address: 0x3320a0, Func Offset: 0xb0
	// Func End, Address: 0x3320bc, Func Offset: 0xcc
}

// 
// Start address: 0x3320c0
void Generate_OnePtcl(void* PtclAdr, PtclOrgData* pOrgDt, void* pHeadCmn)
{
	SplayPtcl* pPtcl;
	// Line 389, Address: 0x3320c0, Func Offset: 0
	// Line 393, Address: 0x3320c8, Func Offset: 0x8
	// Line 389, Address: 0x3320cc, Func Offset: 0xc
	// Line 390, Address: 0x3320e0, Func Offset: 0x20
	// Line 393, Address: 0x3320e4, Func Offset: 0x24
	// Line 394, Address: 0x3320ec, Func Offset: 0x2c
	// Line 395, Address: 0x3320f0, Func Offset: 0x30
	// Line 394, Address: 0x3320f4, Func Offset: 0x34
	// Line 395, Address: 0x3320f8, Func Offset: 0x38
	// Line 396, Address: 0x332100, Func Offset: 0x40
	// Line 398, Address: 0x33211c, Func Offset: 0x5c
	// Line 399, Address: 0x332138, Func Offset: 0x78
	// Line 400, Address: 0x332144, Func Offset: 0x84
	// Func End, Address: 0x33215c, Func Offset: 0x9c
}

// 
// Start address: 0x332160
void SplayPtcl_Calc(void* pHeadPtcl, int PtclNum, PtclOrgData* pOrgDt, void* pHeadCmn)
{
	SplayPtcl* PtclAry;
	int PtclNo;
	SplayCmnData* pCmnDt;
	float DragCoff;
	SplayPtcl* pPtcl;
	float MvVec[4];
	float AreaSize;
	// Line 413, Address: 0x332160, Func Offset: 0
	// Line 417, Address: 0x332164, Func Offset: 0x4
	// Line 413, Address: 0x332168, Func Offset: 0x8
	// Line 417, Address: 0x33216c, Func Offset: 0xc
	// Line 413, Address: 0x332170, Func Offset: 0x10
	// Line 414, Address: 0x332188, Func Offset: 0x28
	// Line 413, Address: 0x33218c, Func Offset: 0x2c
	// Line 419, Address: 0x332190, Func Offset: 0x30
	// Line 413, Address: 0x332194, Func Offset: 0x34
	// Line 416, Address: 0x332198, Func Offset: 0x38
	// Line 413, Address: 0x33219c, Func Offset: 0x3c
	// Line 417, Address: 0x3321a0, Func Offset: 0x40
	// Line 419, Address: 0x3321a4, Func Offset: 0x44
	// Line 421, Address: 0x3321b0, Func Offset: 0x50
	// Line 424, Address: 0x3321b8, Func Offset: 0x58
	// Line 421, Address: 0x3321bc, Func Offset: 0x5c
	// Line 424, Address: 0x3321c0, Func Offset: 0x60
	// Line 427, Address: 0x3321d4, Func Offset: 0x74
	// Line 428, Address: 0x3321ec, Func Offset: 0x8c
	// Line 430, Address: 0x3321f0, Func Offset: 0x90
	// Line 431, Address: 0x33222c, Func Offset: 0xcc
	// Line 432, Address: 0x332258, Func Offset: 0xf8
	// Line 433, Address: 0x33226c, Func Offset: 0x10c
	// Line 434, Address: 0x332280, Func Offset: 0x120
	// Line 436, Address: 0x332290, Func Offset: 0x130
	// Line 438, Address: 0x332298, Func Offset: 0x138
	// Line 439, Address: 0x3322ac, Func Offset: 0x14c
	// Func End, Address: 0x3322d4, Func Offset: 0x174
}

// 
// Start address: 0x3322e0
void SplayPtcl_Draw(void* pHeadPtcl, int PtclNum, PtclOrgData* pOrgDt, void* pHeadCmn)
{
	SplayPtcl* PtclAry;
	int PtclNo;
	SplayCmnData* pCmnDt;
	float Wld2ScrMat[4][4];
	float Wld2ViewMat[4][4];
	float View2ScrMat[4][4];
	_anon1* pPkTop;
	_anon1* pPk;
	_anon1* pGifTag;
	unsigned long Tex0;
	float PolyAngY;
	float v2wMat[4][4];
	_anon0* pTex;
	unsigned int cbp;
	int qwc;
	// Line 450, Address: 0x3322e0, Func Offset: 0
	// Line 451, Address: 0x332304, Func Offset: 0x24
	// Line 450, Address: 0x332308, Func Offset: 0x28
	// Line 463, Address: 0x33230c, Func Offset: 0x2c
	// Line 450, Address: 0x332310, Func Offset: 0x30
	// Line 453, Address: 0x332314, Func Offset: 0x34
	// Line 450, Address: 0x332318, Func Offset: 0x38
	// Line 463, Address: 0x33231c, Func Offset: 0x3c
	// Line 464, Address: 0x332324, Func Offset: 0x44
	// Line 465, Address: 0x33232c, Func Offset: 0x4c
	// Line 468, Address: 0x332334, Func Offset: 0x54
	// Line 469, Address: 0x332344, Func Offset: 0x64
	// Line 471, Address: 0x332368, Func Offset: 0x88
	// Line 472, Address: 0x332370, Func Offset: 0x90
	// Line 473, Address: 0x33237c, Func Offset: 0x9c
	// Line 485, Address: 0x332380, Func Offset: 0xa0
	// Line 487, Address: 0x33238c, Func Offset: 0xac
	// Line 485, Address: 0x332390, Func Offset: 0xb0
	// Line 487, Address: 0x332394, Func Offset: 0xb4
	// Line 488, Address: 0x33239c, Func Offset: 0xbc
	// Line 492, Address: 0x3323bc, Func Offset: 0xdc
	// Line 493, Address: 0x3323d0, Func Offset: 0xf0
	// Line 492, Address: 0x3323d4, Func Offset: 0xf4
	// Line 493, Address: 0x3323d8, Func Offset: 0xf8
	// Line 492, Address: 0x3323e0, Func Offset: 0x100
	// Line 493, Address: 0x3323e4, Func Offset: 0x104
	// Line 498, Address: 0x3323f0, Func Offset: 0x110
	// Line 493, Address: 0x3323f4, Func Offset: 0x114
	// Line 498, Address: 0x3323f8, Func Offset: 0x118
	// Line 497, Address: 0x3323fc, Func Offset: 0x11c
	// Line 498, Address: 0x332400, Func Offset: 0x120
	// Line 506, Address: 0x332404, Func Offset: 0x124
	// Line 498, Address: 0x332408, Func Offset: 0x128
	// Line 504, Address: 0x33240c, Func Offset: 0x12c
	// Line 498, Address: 0x332410, Func Offset: 0x130
	// Line 506, Address: 0x332414, Func Offset: 0x134
	// Line 503, Address: 0x332418, Func Offset: 0x138
	// Line 498, Address: 0x33241c, Func Offset: 0x13c
	// Line 506, Address: 0x332420, Func Offset: 0x140
	// Line 510, Address: 0x332428, Func Offset: 0x148
	// Line 515, Address: 0x33243c, Func Offset: 0x15c
	// Line 516, Address: 0x33245c, Func Offset: 0x17c
	// Line 517, Address: 0x332470, Func Offset: 0x190
	// Line 520, Address: 0x332490, Func Offset: 0x1b0
	// Line 517, Address: 0x332494, Func Offset: 0x1b4
	// Line 520, Address: 0x3324a0, Func Offset: 0x1c0
	// Line 517, Address: 0x3324a4, Func Offset: 0x1c4
	// Line 520, Address: 0x3324b4, Func Offset: 0x1d4
	// Line 521, Address: 0x3324c4, Func Offset: 0x1e4
	// Line 522, Address: 0x3324cc, Func Offset: 0x1ec
	// Line 523, Address: 0x3324d4, Func Offset: 0x1f4
	// Line 524, Address: 0x3324e4, Func Offset: 0x204
	// Line 525, Address: 0x3324e8, Func Offset: 0x208
	// Line 527, Address: 0x3324f8, Func Offset: 0x218
	// Func End, Address: 0x332528, Func Offset: 0x248
}

// 
// Start address: 0x332530
_anon1* Make_Splay_Packet(_anon1* pPk, SplayPtcl* pPtcl, SplayCmnData* pCmnDt, float Wld2ScrMat[4], float Wld2ViewMat[4], float View2ScrMat[4])
{
	_anon1* pSavePk;
	float HalfWidth;
	int VtNo;
	float Lcl2ScrMat[4][4];
	float ScrPos[4];
	float inv_w;
	float fs;
	float ft;
	float AlphaRate;
	int fog_val;
	float LongateRate;
	float LongateAngZ;
	float Lcl2ViewMat[4][4];
	int OkFlag;
	float LclPolyPosAry[4][4];
	// Line 543, Address: 0x332530, Func Offset: 0
	// Line 565, Address: 0x332538, Func Offset: 0x8
	// Line 543, Address: 0x33253c, Func Offset: 0xc
	// Line 562, Address: 0x332544, Func Offset: 0x14
	// Line 543, Address: 0x332548, Func Offset: 0x18
	// Line 544, Address: 0x332574, Func Offset: 0x44
	// Line 543, Address: 0x332578, Func Offset: 0x48
	// Line 565, Address: 0x33257c, Func Offset: 0x4c
	// Line 566, Address: 0x3325a4, Func Offset: 0x74
	// Line 567, Address: 0x3325c4, Func Offset: 0x94
	// Line 568, Address: 0x3325cc, Func Offset: 0x9c
	// Line 569, Address: 0x3325d0, Func Offset: 0xa0
	// Line 570, Address: 0x3325d8, Func Offset: 0xa8
	// Line 569, Address: 0x3325dc, Func Offset: 0xac
	// Line 570, Address: 0x3325e0, Func Offset: 0xb0
	// Line 569, Address: 0x3325e4, Func Offset: 0xb4
	// Line 570, Address: 0x3325e8, Func Offset: 0xb8
	// Line 574, Address: 0x332604, Func Offset: 0xd4
	// Line 575, Address: 0x33263c, Func Offset: 0x10c
	// Line 574, Address: 0x332640, Func Offset: 0x110
	// Line 575, Address: 0x332644, Func Offset: 0x114
	// Line 577, Address: 0x332660, Func Offset: 0x130
	// Line 579, Address: 0x332684, Func Offset: 0x154
	// Line 588, Address: 0x3326a0, Func Offset: 0x170
	// Line 597, Address: 0x3326bc, Func Offset: 0x18c
	// Line 598, Address: 0x3326d0, Func Offset: 0x1a0
	// Line 601, Address: 0x3326fc, Func Offset: 0x1cc
	// Line 599, Address: 0x332700, Func Offset: 0x1d0
	// Line 601, Address: 0x332704, Func Offset: 0x1d4
	// Line 599, Address: 0x332708, Func Offset: 0x1d8
	// Line 601, Address: 0x33270c, Func Offset: 0x1dc
	// Line 599, Address: 0x332710, Func Offset: 0x1e0
	// Line 600, Address: 0x332718, Func Offset: 0x1e8
	// Line 601, Address: 0x33271c, Func Offset: 0x1ec
	// Line 602, Address: 0x332724, Func Offset: 0x1f4
	// Line 603, Address: 0x332750, Func Offset: 0x220
	// Line 606, Address: 0x3327c8, Func Offset: 0x298
	// Line 608, Address: 0x332848, Func Offset: 0x318
	// Line 609, Address: 0x332854, Func Offset: 0x324
	// Line 610, Address: 0x33288c, Func Offset: 0x35c
	// Line 611, Address: 0x332898, Func Offset: 0x368
	// Line 614, Address: 0x3328d8, Func Offset: 0x3a8
	// Line 616, Address: 0x3328e4, Func Offset: 0x3b4
	// Line 617, Address: 0x3328e8, Func Offset: 0x3b8
	// Line 618, Address: 0x3328f0, Func Offset: 0x3c0
	// Line 619, Address: 0x3328f4, Func Offset: 0x3c4
	// Line 621, Address: 0x3328f8, Func Offset: 0x3c8
	// Line 623, Address: 0x332928, Func Offset: 0x3f8
	// Line 625, Address: 0x332944, Func Offset: 0x414
	// Line 628, Address: 0x332980, Func Offset: 0x450
	// Line 632, Address: 0x332988, Func Offset: 0x458
	// Line 633, Address: 0x33298c, Func Offset: 0x45c
	// Line 634, Address: 0x332990, Func Offset: 0x460
	// Line 638, Address: 0x332994, Func Offset: 0x464
	// Line 635, Address: 0x332998, Func Offset: 0x468
	// Line 638, Address: 0x33299c, Func Offset: 0x46c
	// Line 639, Address: 0x3329a0, Func Offset: 0x470
	// Line 640, Address: 0x3329a8, Func Offset: 0x478
	// Line 641, Address: 0x3329b0, Func Offset: 0x480
	// Line 642, Address: 0x332a18, Func Offset: 0x4e8
	// Line 644, Address: 0x332a1c, Func Offset: 0x4ec
	// Line 645, Address: 0x332a28, Func Offset: 0x4f8
	// Line 647, Address: 0x332a34, Func Offset: 0x504
	// Line 648, Address: 0x332a40, Func Offset: 0x510
	// Line 649, Address: 0x332a44, Func Offset: 0x514
	// Line 650, Address: 0x332a48, Func Offset: 0x518
	// Line 651, Address: 0x332a4c, Func Offset: 0x51c
	// Line 652, Address: 0x332a5c, Func Offset: 0x52c
	// Line 653, Address: 0x332a60, Func Offset: 0x530
	// Func End, Address: 0x332a90, Func Offset: 0x560
}

// 
// Start address: 0x332a90
int calc_poly_longate_param_by_move(float* pLongateRate, float* pLongateAngZ, float* PtclPos, float* SpdVec, float PolyWidth, float Wld2ViewMat[4])
{
	float ViewPos[4];
	float ViewPos_perZ[4];
	float ViewInvZ;
	float NextViewPos[4];
	float NextViewPos_perZ[4];
	float NextViewInvZ;
	float NextPos[4];
	float MvVec[4];
	float MvVX;
	float MvVY;
	// Line 666, Address: 0x332a90, Func Offset: 0
	// Line 678, Address: 0x332a98, Func Offset: 0x8
	// Line 666, Address: 0x332a9c, Func Offset: 0xc
	// Line 678, Address: 0x332ad4, Func Offset: 0x44
	// Line 679, Address: 0x332afc, Func Offset: 0x6c
	// Line 680, Address: 0x332b1c, Func Offset: 0x8c
	// Line 681, Address: 0x332b24, Func Offset: 0x94
	// Line 682, Address: 0x332b28, Func Offset: 0x98
	// Line 683, Address: 0x332b30, Func Offset: 0xa0
	// Line 682, Address: 0x332b34, Func Offset: 0xa4
	// Line 683, Address: 0x332b38, Func Offset: 0xa8
	// Line 682, Address: 0x332b3c, Func Offset: 0xac
	// Line 683, Address: 0x332b40, Func Offset: 0xb0
	// Line 690, Address: 0x332b58, Func Offset: 0xc8
	// Line 691, Address: 0x332b80, Func Offset: 0xf0
	// Line 692, Address: 0x332b9c, Func Offset: 0x10c
	// Line 694, Address: 0x332bcc, Func Offset: 0x13c
	// Line 695, Address: 0x332be8, Func Offset: 0x158
	// Line 698, Address: 0x332bf0, Func Offset: 0x160
	// Line 699, Address: 0x332bf8, Func Offset: 0x168
	// Line 698, Address: 0x332bfc, Func Offset: 0x16c
	// Line 699, Address: 0x332c00, Func Offset: 0x170
	// Line 698, Address: 0x332c04, Func Offset: 0x174
	// Line 699, Address: 0x332c08, Func Offset: 0x178
	// Line 706, Address: 0x332c24, Func Offset: 0x194
	// Line 704, Address: 0x332c28, Func Offset: 0x198
	// Line 705, Address: 0x332c30, Func Offset: 0x1a0
	// Line 704, Address: 0x332c38, Func Offset: 0x1a8
	// Line 706, Address: 0x332c3c, Func Offset: 0x1ac
	// Line 708, Address: 0x332c54, Func Offset: 0x1c4
	// Line 709, Address: 0x332c60, Func Offset: 0x1d0
	// Line 711, Address: 0x332c70, Func Offset: 0x1e0
	// Line 713, Address: 0x332c7c, Func Offset: 0x1ec
	// Line 711, Address: 0x332c80, Func Offset: 0x1f0
	// Line 714, Address: 0x332cb0, Func Offset: 0x220
	// Func End, Address: 0x332cdc, Func Offset: 0x24c
}

