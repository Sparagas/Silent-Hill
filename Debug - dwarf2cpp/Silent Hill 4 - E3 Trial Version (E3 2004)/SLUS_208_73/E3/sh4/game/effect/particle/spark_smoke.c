typedef struct SparkSmokePtcl;
typedef struct _anon0;
typedef struct SparkSmokeWork;
typedef struct SparkSmokeCmnData;
typedef struct PtclOrgData;
typedef struct sfObj;
typedef union _anon1;
typedef union _anon2;
typedef enum _cam3Step : unsigned char;
typedef struct _cam3Work;

typedef void(*type_14)(sfObj*);
typedef void(*type_16)();
typedef void(*type_18)(sfObj*);
typedef void(*type_21)(void*, PtclOrgData*, void*);
typedef void(*type_23)(void*, int, PtclOrgData*, void*);
typedef void(*type_26)(sfObj*);
typedef void(*type_31)(void*, int, PtclOrgData*, void*);

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
typedef float type_15[4];
typedef void(*type_17)()[2];
typedef unsigned char type_19[4];
typedef float type_20[4][4];
typedef short type_22[2];
typedef unsigned short type_24[2];
typedef char type_25[4];
typedef unsigned char type_27[4];
typedef void(*type_28)(sfObj*)[3];
typedef float type_29[1];
typedef int type_30[1];
typedef long type_32[2];
typedef unsigned long type_33[2];

struct SparkSmokePtcl
{
	float Pos[4];
	float Spd[4];
	float AfterPos[4];
	short Step;
	float SparkSize;
	float SizeRate;
	float SmokeTimer;
	float SmokeLifeTime;
	float RotAng;
	int RandVal;
};

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

struct SparkSmokeWork
{
	float IntervalTime;
	sfObj* pObj;
};

struct SparkSmokeCmnData
{
	SparkSmokeWork* pSparkSmokeW;
	float SparkMainAngle;
	float MaxSmokeLifeTime;
	float MaxSparkSize;
	unsigned char SparkRgba[4];
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
void(*SparkSmokePtcl_Draw)(void*, int, PtclOrgData*, void*);
void(*SparkSmokePtcl_Calc)(void*, int, PtclOrgData*, void*);
void(*Generate_OnePtcl)(void*, PtclOrgData*, void*);
float sg_matrix_unit[4][4];
_cam3Work cam3_work;

void SparkSmokePartircle_Make(SparkSmokeWork* pSparkSmokeW, float* GenCenterPos, float* GenRadiusVec1, float* GenRadiusVec2, unsigned char* SparkRgba, float SparkMainAngle, float MaxSparkSize, float MaxSmokeLifeTime, unsigned int DemoFlag);
void Generate_OnePtcl(void* PtclAdr, PtclOrgData* pOrgDt, void* pHeadCmn);
void SparkSmokePtcl_Calc(void* pHeadPtcl, int PtclNum, PtclOrgData* pOrgDt, void* pHeadCmn);
void renewal_GenerateData(PtclOrgData* pOrgDt, SparkSmokeCmnData* pCmnDt);
void SparkSmokePtcl_Draw(void* pHeadPtcl, int PtclNum, PtclOrgData* pOrgDt, void* pHeadCmn);
_anon1* Make_Spark_Packet(_anon1* pPk, SparkSmokePtcl* pPtcl, SparkSmokeCmnData* pCmnDt, float Lcl2ScrMat[4]);
_anon1* Make_SmokeAfterSpark_Packet(_anon1* pPk, SparkSmokePtcl* pPtcl, float Wld2ScrMat[4], float View2ScrMat[4]);

// 
// Start address: 0x2f18b0
void SparkSmokePartircle_Make(SparkSmokeWork* pSparkSmokeW, float* GenCenterPos, float* GenRadiusVec1, float* GenRadiusVec2, unsigned char* SparkRgba, float SparkMainAngle, float MaxSparkSize, float MaxSmokeLifeTime, unsigned int DemoFlag)
{
	PtclOrgData OrgDt;
	SparkSmokeCmnData CmnData;
	// Line 149, Address: 0x2f18b0, Func Offset: 0
	// Line 153, Address: 0x2f18b8, Func Offset: 0x8
	// Line 149, Address: 0x2f18bc, Func Offset: 0xc
	// Line 153, Address: 0x2f18c4, Func Offset: 0x14
	// Line 156, Address: 0x2f18cc, Func Offset: 0x1c
	// Line 154, Address: 0x2f18d0, Func Offset: 0x20
	// Line 156, Address: 0x2f18d8, Func Offset: 0x28
	// Line 157, Address: 0x2f18e0, Func Offset: 0x30
	// Line 179, Address: 0x2f18ec, Func Offset: 0x3c
	// Line 158, Address: 0x2f18f0, Func Offset: 0x40
	// Line 179, Address: 0x2f18f4, Func Offset: 0x44
	// Line 158, Address: 0x2f18f8, Func Offset: 0x48
	// Line 179, Address: 0x2f18fc, Func Offset: 0x4c
	// Line 159, Address: 0x2f1900, Func Offset: 0x50
	// Line 158, Address: 0x2f1904, Func Offset: 0x54
	// Line 159, Address: 0x2f1908, Func Offset: 0x58
	// Line 179, Address: 0x2f190c, Func Offset: 0x5c
	// Line 158, Address: 0x2f1910, Func Offset: 0x60
	// Line 165, Address: 0x2f1914, Func Offset: 0x64
	// Line 160, Address: 0x2f1918, Func Offset: 0x68
	// Line 165, Address: 0x2f191c, Func Offset: 0x6c
	// Line 167, Address: 0x2f1920, Func Offset: 0x70
	// Line 179, Address: 0x2f1924, Func Offset: 0x74
	// Line 160, Address: 0x2f1934, Func Offset: 0x84
	// Line 167, Address: 0x2f1938, Func Offset: 0x88
	// Line 162, Address: 0x2f193c, Func Offset: 0x8c
	// Line 179, Address: 0x2f1940, Func Offset: 0x90
	// Line 163, Address: 0x2f1944, Func Offset: 0x94
	// Line 164, Address: 0x2f1948, Func Offset: 0x98
	// Line 165, Address: 0x2f194c, Func Offset: 0x9c
	// Line 166, Address: 0x2f1950, Func Offset: 0xa0
	// Line 168, Address: 0x2f1954, Func Offset: 0xa4
	// Line 170, Address: 0x2f1958, Func Offset: 0xa8
	// Line 171, Address: 0x2f1960, Func Offset: 0xb0
	// Line 172, Address: 0x2f1968, Func Offset: 0xb8
	// Line 173, Address: 0x2f1970, Func Offset: 0xc0
	// Line 179, Address: 0x2f1974, Func Offset: 0xc4
	// Line 173, Address: 0x2f1978, Func Offset: 0xc8
	// Line 179, Address: 0x2f197c, Func Offset: 0xcc
	// Line 175, Address: 0x2f1980, Func Offset: 0xd0
	// Line 174, Address: 0x2f1984, Func Offset: 0xd4
	// Line 176, Address: 0x2f1988, Func Offset: 0xd8
	// Line 179, Address: 0x2f198c, Func Offset: 0xdc
	// Line 192, Address: 0x2f1998, Func Offset: 0xe8
	// Func End, Address: 0x2f19a8, Func Offset: 0xf8
}

// 
// Start address: 0x2f19b0
void Generate_OnePtcl(void* PtclAdr, PtclOrgData* pOrgDt, void* pHeadCmn)
{
	SparkSmokePtcl* pPtcl;
	SparkSmokeCmnData* pCmnDt;
	float Ang;
	float RadiusRate;
	float SparkSizeRate;
	// Line 203, Address: 0x2f19b0, Func Offset: 0
	// Line 204, Address: 0x2f19c8, Func Offset: 0x18
	// Line 203, Address: 0x2f19cc, Func Offset: 0x1c
	// Line 205, Address: 0x2f19d0, Func Offset: 0x20
	// Line 203, Address: 0x2f19d4, Func Offset: 0x24
	// Line 207, Address: 0x2f19d8, Func Offset: 0x28
	// Line 208, Address: 0x2f1a04, Func Offset: 0x54
	// Line 209, Address: 0x2f1a2c, Func Offset: 0x7c
	// Line 211, Address: 0x2f1a38, Func Offset: 0x88
	// Line 209, Address: 0x2f1a3c, Func Offset: 0x8c
	// Line 211, Address: 0x2f1a40, Func Offset: 0x90
	// Line 209, Address: 0x2f1a48, Func Offset: 0x98
	// Line 211, Address: 0x2f1a4c, Func Offset: 0x9c
	// Line 213, Address: 0x2f1a54, Func Offset: 0xa4
	// Line 219, Address: 0x2f1a68, Func Offset: 0xb8
	// Line 220, Address: 0x2f1a70, Func Offset: 0xc0
	// Line 223, Address: 0x2f1a7c, Func Offset: 0xcc
	// Line 221, Address: 0x2f1a84, Func Offset: 0xd4
	// Line 223, Address: 0x2f1a88, Func Offset: 0xd8
	// Line 221, Address: 0x2f1aa0, Func Offset: 0xf0
	// Line 223, Address: 0x2f1aa8, Func Offset: 0xf8
	// Line 222, Address: 0x2f1aac, Func Offset: 0xfc
	// Line 223, Address: 0x2f1ab0, Func Offset: 0x100
	// Line 224, Address: 0x2f1ab8, Func Offset: 0x108
	// Line 225, Address: 0x2f1ad4, Func Offset: 0x124
	// Line 226, Address: 0x2f1ae0, Func Offset: 0x130
	// Func End, Address: 0x2f1b04, Func Offset: 0x154
}

// 
// Start address: 0x2f1b10
void SparkSmokePtcl_Calc(void* pHeadPtcl, int PtclNum, PtclOrgData* pOrgDt, void* pHeadCmn)
{
	SparkSmokePtcl* PtclAry;
	int PtclNo;
	SparkSmokeCmnData* pCmnDt;
	SparkSmokePtcl* pPtcl;
	float MvVec[4];
	float AfterMvVec[4];
	// Line 239, Address: 0x2f1b10, Func Offset: 0
	// Line 240, Address: 0x2f1b2c, Func Offset: 0x1c
	// Line 239, Address: 0x2f1b30, Func Offset: 0x20
	// Line 244, Address: 0x2f1b34, Func Offset: 0x24
	// Line 246, Address: 0x2f1b44, Func Offset: 0x34
	// Line 248, Address: 0x2f1b50, Func Offset: 0x40
	// Line 250, Address: 0x2f1b58, Func Offset: 0x48
	// Line 248, Address: 0x2f1b5c, Func Offset: 0x4c
	// Line 250, Address: 0x2f1b60, Func Offset: 0x50
	// Line 254, Address: 0x2f1b74, Func Offset: 0x64
	// Line 256, Address: 0x2f1b94, Func Offset: 0x84
	// Line 257, Address: 0x2f1b98, Func Offset: 0x88
	// Line 258, Address: 0x2f1bb0, Func Offset: 0xa0
	// Line 257, Address: 0x2f1bb4, Func Offset: 0xa4
	// Line 258, Address: 0x2f1bb8, Func Offset: 0xa8
	// Line 259, Address: 0x2f1bcc, Func Offset: 0xbc
	// Line 260, Address: 0x2f1bd0, Func Offset: 0xc0
	// Line 262, Address: 0x2f1bd8, Func Offset: 0xc8
	// Line 265, Address: 0x2f1be0, Func Offset: 0xd0
	// Line 268, Address: 0x2f1bf0, Func Offset: 0xe0
	// Line 271, Address: 0x2f1c0c, Func Offset: 0xfc
	// Line 275, Address: 0x2f1c4c, Func Offset: 0x13c
	// Line 276, Address: 0x2f1c78, Func Offset: 0x168
	// Line 278, Address: 0x2f1c90, Func Offset: 0x180
	// Line 279, Address: 0x2f1cc0, Func Offset: 0x1b0
	// Line 282, Address: 0x2f1ce0, Func Offset: 0x1d0
	// Line 284, Address: 0x2f1cf4, Func Offset: 0x1e4
	// Line 288, Address: 0x2f1cfc, Func Offset: 0x1ec
	// Line 289, Address: 0x2f1d14, Func Offset: 0x204
	// Func End, Address: 0x2f1d34, Func Offset: 0x224
}

// 
// Start address: 0x2f1d40
void renewal_GenerateData(PtclOrgData* pOrgDt, SparkSmokeCmnData* pCmnDt)
{
	// Line 299, Address: 0x2f1d40, Func Offset: 0
	// Line 300, Address: 0x2f1d48, Func Offset: 0x8
	// Func End, Address: 0x2f1d50, Func Offset: 0x10
}

// 
// Start address: 0x2f1d50
void SparkSmokePtcl_Draw(void* pHeadPtcl, int PtclNum, PtclOrgData* pOrgDt, void* pHeadCmn)
{
	SparkSmokePtcl* PtclAry;
	int PtclNo;
	SparkSmokeCmnData* pCmnDt;
	float Wld2ScrMat[4][4];
	float View2ScrMat[4][4];
	float RotZ2CamZMat[4][4];
	_anon1* pPkTop;
	_anon1* pPk;
	_anon1* pGifTag;
	unsigned long Tex0;
	unsigned long AlphaReg;
	float View2WldMat[4][4];
	float CamAngY;
	float CamAngX;
	_anon0* pTex;
	unsigned int cbp;
	SparkSmokePtcl* pPtcl;
	float ScrPos[4];
	float Lcl2ScrMat[4][4];
	float inv_w;
	float Lcl2WldMat[4][4];
	float PolyW;
	int qwc;
	// Line 313, Address: 0x2f1d50, Func Offset: 0
	// Line 323, Address: 0x2f1d54, Func Offset: 0x4
	// Line 313, Address: 0x2f1d58, Func Offset: 0x8
	// Line 323, Address: 0x2f1d5c, Func Offset: 0xc
	// Line 313, Address: 0x2f1d60, Func Offset: 0x10
	// Line 323, Address: 0x2f1d64, Func Offset: 0x14
	// Line 313, Address: 0x2f1d68, Func Offset: 0x18
	// Line 314, Address: 0x2f1d6c, Func Offset: 0x1c
	// Line 313, Address: 0x2f1d70, Func Offset: 0x20
	// Line 316, Address: 0x2f1d7c, Func Offset: 0x2c
	// Line 313, Address: 0x2f1d80, Func Offset: 0x30
	// Line 325, Address: 0x2f1d8c, Func Offset: 0x3c
	// Line 313, Address: 0x2f1d90, Func Offset: 0x40
	// Line 323, Address: 0x2f1d9c, Func Offset: 0x4c
	// Line 325, Address: 0x2f1da0, Func Offset: 0x50
	// Line 326, Address: 0x2f1da8, Func Offset: 0x58
	// Line 330, Address: 0x2f1db0, Func Offset: 0x60
	// Line 331, Address: 0x2f1db8, Func Offset: 0x68
	// Line 332, Address: 0x2f1dc8, Func Offset: 0x78
	// Line 335, Address: 0x2f1de8, Func Offset: 0x98
	// Line 336, Address: 0x2f1e04, Func Offset: 0xb4
	// Line 344, Address: 0x2f1e14, Func Offset: 0xc4
	// Line 346, Address: 0x2f1e20, Func Offset: 0xd0
	// Line 344, Address: 0x2f1e24, Func Offset: 0xd4
	// Line 346, Address: 0x2f1e28, Func Offset: 0xd8
	// Line 347, Address: 0x2f1e30, Func Offset: 0xe0
	// Line 351, Address: 0x2f1e50, Func Offset: 0x100
	// Line 352, Address: 0x2f1e5c, Func Offset: 0x10c
	// Line 351, Address: 0x2f1e60, Func Offset: 0x110
	// Line 352, Address: 0x2f1e6c, Func Offset: 0x11c
	// Line 357, Address: 0x2f1e78, Func Offset: 0x128
	// Line 352, Address: 0x2f1e7c, Func Offset: 0x12c
	// Line 357, Address: 0x2f1e80, Func Offset: 0x130
	// Line 356, Address: 0x2f1e84, Func Offset: 0x134
	// Line 357, Address: 0x2f1e88, Func Offset: 0x138
	// Line 363, Address: 0x2f1e8c, Func Offset: 0x13c
	// Line 357, Address: 0x2f1e90, Func Offset: 0x140
	// Line 365, Address: 0x2f1e94, Func Offset: 0x144
	// Line 357, Address: 0x2f1e98, Func Offset: 0x148
	// Line 362, Address: 0x2f1e9c, Func Offset: 0x14c
	// Line 357, Address: 0x2f1ea0, Func Offset: 0x150
	// Line 365, Address: 0x2f1ea4, Func Offset: 0x154
	// Line 367, Address: 0x2f1eb0, Func Offset: 0x160
	// Line 372, Address: 0x2f1eb8, Func Offset: 0x168
	// Line 367, Address: 0x2f1ebc, Func Offset: 0x16c
	// Line 372, Address: 0x2f1ec0, Func Offset: 0x170
	// Line 376, Address: 0x2f1ed4, Func Offset: 0x184
	// Line 377, Address: 0x2f1f00, Func Offset: 0x1b0
	// Line 380, Address: 0x2f1f20, Func Offset: 0x1d0
	// Line 381, Address: 0x2f1f2c, Func Offset: 0x1dc
	// Line 380, Address: 0x2f1f34, Func Offset: 0x1e4
	// Line 381, Address: 0x2f1f38, Func Offset: 0x1e8
	// Line 383, Address: 0x2f1f54, Func Offset: 0x204
	// Line 390, Address: 0x2f1f9c, Func Offset: 0x24c
	// Line 392, Address: 0x2f1fbc, Func Offset: 0x26c
	// Line 396, Address: 0x2f1fc0, Func Offset: 0x270
	// Line 395, Address: 0x2f1fc4, Func Offset: 0x274
	// Line 396, Address: 0x2f1fc8, Func Offset: 0x278
	// Line 395, Address: 0x2f1fcc, Func Offset: 0x27c
	// Line 396, Address: 0x2f1fd0, Func Offset: 0x280
	// Line 397, Address: 0x2f1fe0, Func Offset: 0x290
	// Line 398, Address: 0x2f2000, Func Offset: 0x2b0
	// Line 400, Address: 0x2f2020, Func Offset: 0x2d0
	// Line 401, Address: 0x2f209c, Func Offset: 0x34c
	// Line 403, Address: 0x2f20a8, Func Offset: 0x358
	// Line 406, Address: 0x2f2124, Func Offset: 0x3d4
	// Line 408, Address: 0x2f2138, Func Offset: 0x3e8
	// Line 411, Address: 0x2f2140, Func Offset: 0x3f0
	// Line 414, Address: 0x2f2158, Func Offset: 0x408
	// Line 415, Address: 0x2f216c, Func Offset: 0x41c
	// Line 418, Address: 0x2f2188, Func Offset: 0x438
	// Line 415, Address: 0x2f218c, Func Offset: 0x43c
	// Line 418, Address: 0x2f2198, Func Offset: 0x448
	// Line 415, Address: 0x2f219c, Func Offset: 0x44c
	// Line 418, Address: 0x2f21ac, Func Offset: 0x45c
	// Line 419, Address: 0x2f21bc, Func Offset: 0x46c
	// Line 420, Address: 0x2f21c4, Func Offset: 0x474
	// Line 421, Address: 0x2f21cc, Func Offset: 0x47c
	// Line 422, Address: 0x2f21dc, Func Offset: 0x48c
	// Line 423, Address: 0x2f21e0, Func Offset: 0x490
	// Line 425, Address: 0x2f21f0, Func Offset: 0x4a0
	// Func End, Address: 0x2f2224, Func Offset: 0x4d4
}

// 
// Start address: 0x2f2230
_anon1* Make_Spark_Packet(_anon1* pPk, SparkSmokePtcl* pPtcl, SparkSmokeCmnData* pCmnDt, float Lcl2ScrMat[4])
{
	_anon1* pSavePk;
	float inv_w;
	int VtNo;
	float s0;
	float t0;
	float Center2LclPosVec[4][4];
	float ScrPos[4];
	int fog_val;
	int No;
	// Line 447, Address: 0x2f2230, Func Offset: 0
	// Line 439, Address: 0x2f2234, Func Offset: 0x4
	// Line 447, Address: 0x2f2238, Func Offset: 0x8
	// Line 455, Address: 0x2f2244, Func Offset: 0x14
	// Line 447, Address: 0x2f2248, Func Offset: 0x18
	// Line 455, Address: 0x2f2264, Func Offset: 0x34
	// Line 456, Address: 0x2f22a0, Func Offset: 0x70
	// Line 457, Address: 0x2f22b0, Func Offset: 0x80
	// Line 458, Address: 0x2f22c0, Func Offset: 0x90
	// Line 459, Address: 0x2f22d0, Func Offset: 0xa0
	// Line 460, Address: 0x2f22e0, Func Offset: 0xb0
	// Line 461, Address: 0x2f22f0, Func Offset: 0xc0
	// Line 462, Address: 0x2f2300, Func Offset: 0xd0
	// Line 463, Address: 0x2f230c, Func Offset: 0xdc
	// Line 464, Address: 0x2f2310, Func Offset: 0xe0
	// Line 468, Address: 0x2f2328, Func Offset: 0xf8
	// Line 464, Address: 0x2f232c, Func Offset: 0xfc
	// Line 468, Address: 0x2f2330, Func Offset: 0x100
	// Line 464, Address: 0x2f2334, Func Offset: 0x104
	// Line 468, Address: 0x2f2338, Func Offset: 0x108
	// Line 464, Address: 0x2f2344, Func Offset: 0x114
	// Line 465, Address: 0x2f2348, Func Offset: 0x118
	// Line 468, Address: 0x2f234c, Func Offset: 0x11c
	// Line 464, Address: 0x2f2350, Func Offset: 0x120
	// Line 465, Address: 0x2f235c, Func Offset: 0x12c
	// Line 468, Address: 0x2f2360, Func Offset: 0x130
	// Line 472, Address: 0x2f23a0, Func Offset: 0x170
	// Line 474, Address: 0x2f23d4, Func Offset: 0x1a4
	// Line 475, Address: 0x2f23e4, Func Offset: 0x1b4
	// Line 476, Address: 0x2f23ec, Func Offset: 0x1bc
	// Line 477, Address: 0x2f23f0, Func Offset: 0x1c0
	// Line 478, Address: 0x2f23f8, Func Offset: 0x1c8
	// Line 480, Address: 0x2f2414, Func Offset: 0x1e4
	// Line 483, Address: 0x2f2450, Func Offset: 0x220
	// Line 489, Address: 0x2f2458, Func Offset: 0x228
	// Line 490, Address: 0x2f2470, Func Offset: 0x240
	// Line 491, Address: 0x2f2478, Func Offset: 0x248
	// Line 492, Address: 0x2f2490, Func Offset: 0x260
	// Line 493, Address: 0x2f2498, Func Offset: 0x268
	// Line 497, Address: 0x2f249c, Func Offset: 0x26c
	// Line 494, Address: 0x2f24a0, Func Offset: 0x270
	// Line 497, Address: 0x2f24a4, Func Offset: 0x274
	// Line 498, Address: 0x2f24ac, Func Offset: 0x27c
	// Line 499, Address: 0x2f24b8, Func Offset: 0x288
	// Line 500, Address: 0x2f24c4, Func Offset: 0x294
	// Line 501, Address: 0x2f24d0, Func Offset: 0x2a0
	// Line 504, Address: 0x2f24d4, Func Offset: 0x2a4
	// Line 505, Address: 0x2f24e0, Func Offset: 0x2b0
	// Line 506, Address: 0x2f24f8, Func Offset: 0x2c8
	// Line 507, Address: 0x2f2500, Func Offset: 0x2d0
	// Line 508, Address: 0x2f2504, Func Offset: 0x2d4
	// Line 510, Address: 0x2f2514, Func Offset: 0x2e4
	// Line 511, Address: 0x2f2518, Func Offset: 0x2e8
	// Func End, Address: 0x2f2520, Func Offset: 0x2f0
}

// 
// Start address: 0x2f2520
_anon1* Make_SmokeAfterSpark_Packet(_anon1* pPk, SparkSmokePtcl* pPtcl, float Wld2ScrMat[4], float View2ScrMat[4])
{
	_anon1* pSavePk;
	float ScrPos[4];
	float inv_w;
	float s0;
	float t0;
	float ScrSparkWidthX;
	float ScrSparkWidthY;
	float ScrPos2AfterDiffX;
	float ScrPos2AfterDiffY;
	float TimerRate;
	int TexNo;
	int VtNo;
	float ScrAfterPos[4];
	float inv_after_w;
	int AnimNo;
	float AddScrX;
	float AddScrY;
	float vs;
	float vt;
	float AlphaRate;
	int fog_val;
	// Line 523, Address: 0x2f2520, Func Offset: 0
	// Line 545, Address: 0x2f2528, Func Offset: 0x8
	// Line 523, Address: 0x2f252c, Func Offset: 0xc
	// Line 545, Address: 0x2f2544, Func Offset: 0x24
	// Line 547, Address: 0x2f256c, Func Offset: 0x4c
	// Line 546, Address: 0x2f2570, Func Offset: 0x50
	// Line 547, Address: 0x2f257c, Func Offset: 0x5c
	// Line 546, Address: 0x2f2580, Func Offset: 0x60
	// Line 547, Address: 0x2f2584, Func Offset: 0x64
	// Line 548, Address: 0x2f25a0, Func Offset: 0x80
	// Line 554, Address: 0x2f25a8, Func Offset: 0x88
	// Line 548, Address: 0x2f25ac, Func Offset: 0x8c
	// Line 554, Address: 0x2f25b0, Func Offset: 0x90
	// Line 550, Address: 0x2f25b4, Func Offset: 0x94
	// Line 548, Address: 0x2f25bc, Func Offset: 0x9c
	// Line 549, Address: 0x2f25c0, Func Offset: 0xa0
	// Line 548, Address: 0x2f25c8, Func Offset: 0xa8
	// Line 549, Address: 0x2f25d0, Func Offset: 0xb0
	// Line 550, Address: 0x2f25d4, Func Offset: 0xb4
	// Line 548, Address: 0x2f25d8, Func Offset: 0xb8
	// Line 549, Address: 0x2f25dc, Func Offset: 0xbc
	// Line 554, Address: 0x2f25e0, Func Offset: 0xc0
	// Line 555, Address: 0x2f2608, Func Offset: 0xe8
	// Line 556, Address: 0x2f2610, Func Offset: 0xf0
	// Line 555, Address: 0x2f2614, Func Offset: 0xf4
	// Line 556, Address: 0x2f2618, Func Offset: 0xf8
	// Line 555, Address: 0x2f261c, Func Offset: 0xfc
	// Line 556, Address: 0x2f2620, Func Offset: 0x100
	// Line 563, Address: 0x2f263c, Func Offset: 0x11c
	// Line 558, Address: 0x2f2654, Func Offset: 0x134
	// Line 561, Address: 0x2f265c, Func Offset: 0x13c
	// Line 563, Address: 0x2f2660, Func Offset: 0x140
	// Line 557, Address: 0x2f2664, Func Offset: 0x144
	// Line 561, Address: 0x2f266c, Func Offset: 0x14c
	// Line 558, Address: 0x2f2674, Func Offset: 0x154
	// Line 564, Address: 0x2f2678, Func Offset: 0x158
	// Line 563, Address: 0x2f267c, Func Offset: 0x15c
	// Line 557, Address: 0x2f2680, Func Offset: 0x160
	// Line 563, Address: 0x2f2684, Func Offset: 0x164
	// Line 564, Address: 0x2f2690, Func Offset: 0x170
	// Line 566, Address: 0x2f2698, Func Offset: 0x178
	// Line 567, Address: 0x2f269c, Func Offset: 0x17c
	// Line 566, Address: 0x2f26a0, Func Offset: 0x180
	// Line 567, Address: 0x2f26a4, Func Offset: 0x184
	// Line 566, Address: 0x2f26ac, Func Offset: 0x18c
	// Line 567, Address: 0x2f26b0, Func Offset: 0x190
	// Line 566, Address: 0x2f26b4, Func Offset: 0x194
	// Line 567, Address: 0x2f26b8, Func Offset: 0x198
	// Line 568, Address: 0x2f26d8, Func Offset: 0x1b8
	// Line 569, Address: 0x2f26e0, Func Offset: 0x1c0
	// Line 572, Address: 0x2f26e8, Func Offset: 0x1c8
	// Line 579, Address: 0x2f27b0, Func Offset: 0x290
	// Line 582, Address: 0x2f27bc, Func Offset: 0x29c
	// Line 583, Address: 0x2f27c0, Func Offset: 0x2a0
	// Line 585, Address: 0x2f27c8, Func Offset: 0x2a8
	// Line 586, Address: 0x2f27cc, Func Offset: 0x2ac
	// Line 588, Address: 0x2f27d0, Func Offset: 0x2b0
	// Line 591, Address: 0x2f27e4, Func Offset: 0x2c4
	// Line 593, Address: 0x2f27e8, Func Offset: 0x2c8
	// Line 594, Address: 0x2f27ec, Func Offset: 0x2cc
	// Line 595, Address: 0x2f27f0, Func Offset: 0x2d0
	// Line 598, Address: 0x2f27f8, Func Offset: 0x2d8
	// Line 599, Address: 0x2f27fc, Func Offset: 0x2dc
	// Line 600, Address: 0x2f2800, Func Offset: 0x2e0
	// Line 605, Address: 0x2f2808, Func Offset: 0x2e8
	// Line 602, Address: 0x2f280c, Func Offset: 0x2ec
	// Line 603, Address: 0x2f2810, Func Offset: 0x2f0
	// Line 604, Address: 0x2f2814, Func Offset: 0x2f4
	// Line 608, Address: 0x2f2818, Func Offset: 0x2f8
	// Line 609, Address: 0x2f2828, Func Offset: 0x308
	// Line 621, Address: 0x2f2838, Func Offset: 0x318
	// Line 612, Address: 0x2f283c, Func Offset: 0x31c
	// Line 613, Address: 0x2f2840, Func Offset: 0x320
	// Line 614, Address: 0x2f2844, Func Offset: 0x324
	// Line 621, Address: 0x2f2848, Func Offset: 0x328
	// Line 615, Address: 0x2f284c, Func Offset: 0x32c
	// Line 618, Address: 0x2f2850, Func Offset: 0x330
	// Line 619, Address: 0x2f2854, Func Offset: 0x334
	// Line 621, Address: 0x2f2858, Func Offset: 0x338
	// Line 628, Address: 0x2f2888, Func Offset: 0x368
	// Line 625, Address: 0x2f288c, Func Offset: 0x36c
	// Line 622, Address: 0x2f2890, Func Offset: 0x370
	// Line 625, Address: 0x2f2894, Func Offset: 0x374
	// Line 626, Address: 0x2f28ac, Func Offset: 0x38c
	// Line 627, Address: 0x2f28c8, Func Offset: 0x3a8
	// Line 628, Address: 0x2f28d8, Func Offset: 0x3b8
	// Line 629, Address: 0x2f28e8, Func Offset: 0x3c8
	// Line 630, Address: 0x2f28f0, Func Offset: 0x3d0
	// Line 631, Address: 0x2f28f4, Func Offset: 0x3d4
	// Line 633, Address: 0x2f2904, Func Offset: 0x3e4
	// Line 632, Address: 0x2f2908, Func Offset: 0x3e8
	// Line 633, Address: 0x2f290c, Func Offset: 0x3ec
	// Func End, Address: 0x2f292c, Func Offset: 0x40c
}

