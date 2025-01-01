typedef struct _anon0;
typedef struct WaterRipplePtcl;
typedef struct WaterRippleCmnData;
typedef struct PtclOrgData;
typedef union _anon1;
typedef struct sfObj;
typedef union _anon2;
typedef enum _cam3Step : unsigned char;
typedef struct _cam3Work;
typedef enum WaterRippleType : unsigned char;

typedef void(*type_13)(sfObj*);
typedef void(*type_15)(void*, PtclOrgData*, void*);
typedef void(*type_17)();
typedef void(*type_18)(void*, int, PtclOrgData*, void*);
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
typedef _anon2 type_12[256];
typedef float type_14[4][4];
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

struct WaterRipplePtcl
{
	float Pos[4];
	float Spd[4];
	float PolyWidthRate;
	float LifeSubTimer;
	int RandVal;
};

struct WaterRippleCmnData
{
	WaterRippleType Type;
	unsigned char Rgba[4];
	float LifeTime;
	float RippleWidth;
	float RippleLen;
	float WaveOmega;
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

enum WaterRippleType : unsigned char
{
	WTRP_POOL_RIPPLE,
	WTRP_TOWER_WAVE
};

void(*camInitFuncs)()[2];
void(*camera_main_funcs)(sfObj*)[3];
void(*WaterRipplePtcl_Draw)(void*, int, PtclOrgData*, void*);
void(*WaterRipplePtcl_Calc)(void*, int, PtclOrgData*, void*);
void(*Generate_OnePtcl)(void*, PtclOrgData*, void*);
_cam3Work cam3_work;

void WaterRipple_Top_mz33(int DemoFlag);
void WaterRipple_Btm_mz31(int DemoFlag);
void WaterRippleParticle_Make(WaterRippleType Type, float* GenSqrPos, float* GenSqrEdgeVec1, float* GenSqrEdgeVec2, float RippleWidth, float RippleLen, float GenSpdVal, float IntervalTime, unsigned char* Rgba, float LifeTime, float WaveOmega, int DemoFlag);
void Generate_OnePtcl(void* PtclAdr, PtclOrgData* pOrgDt, void* pHeadCmn);
void WaterRipplePtcl_Calc(void* pHeadPtcl, int PtclNum, PtclOrgData* pOrgDt, void* pHeadCmn);
void WaterRipplePtcl_Draw(void* pHeadPtcl, int PtclNum, PtclOrgData* pOrgDt, void* pHeadCmn);
_anon1* Make_PoolRipple_Packet(_anon1* pPk, WaterRipplePtcl* pPtcl, WaterRippleCmnData* pCmnDt, float Wld2ScrMat[4], float PolyAngY);
_anon1* Make_TowerWave_Packet(_anon1* pPk, WaterRipplePtcl* pPtcl, WaterRippleCmnData* pCmnDt, float Wld2ScrMat[4], float PolyAngY);

// 
// Start address: 0x2e7920
void WaterRipple_Top_mz33(int DemoFlag)
{
	int LoopNo;
	unsigned char Rgba[4];
	float GenSqrEdgeVec2[4];
	float GenSqrEdgeVec1[4];
	float GenSqrPos[4];
	// Line 132, Address: 0x2e7920, Func Offset: 0
	// Line 141, Address: 0x2e7934, Func Offset: 0x14
	// Line 142, Address: 0x2e7938, Func Offset: 0x18
	// Line 156, Address: 0x2e799c, Func Offset: 0x7c
	// Line 157, Address: 0x2e79ac, Func Offset: 0x8c
	// Func End, Address: 0x2e79c0, Func Offset: 0xa0
}

// 
// Start address: 0x2e79c0
void WaterRipple_Btm_mz31(int DemoFlag)
{
	int LoopNo;
	unsigned char Rgba[4];
	float GenSqrEdgeVec2[4];
	float GenSqrEdgeVec1[4];
	float GenSqrPos[4];
	// Line 167, Address: 0x2e79c0, Func Offset: 0
	// Line 176, Address: 0x2e79d4, Func Offset: 0x14
	// Line 177, Address: 0x2e79d8, Func Offset: 0x18
	// Line 191, Address: 0x2e7a38, Func Offset: 0x78
	// Line 192, Address: 0x2e7a48, Func Offset: 0x88
	// Func End, Address: 0x2e7a5c, Func Offset: 0x9c
}

// 
// Start address: 0x2e7a60
void WaterRippleParticle_Make(WaterRippleType Type, float* GenSqrPos, float* GenSqrEdgeVec1, float* GenSqrEdgeVec2, float RippleWidth, float RippleLen, float GenSpdVal, float IntervalTime, unsigned char* Rgba, float LifeTime, float WaveOmega, int DemoFlag)
{
	PtclOrgData OrgDt;
	WaterRippleCmnData CmnDt;
	int VecNo;
	float* SrcVecPtr;
	float* DestVecPtr;
	float Ang;
	// Line 212, Address: 0x2e7a60, Func Offset: 0
	// Line 217, Address: 0x2e7a68, Func Offset: 0x8
	// Line 212, Address: 0x2e7a6c, Func Offset: 0xc
	// Line 217, Address: 0x2e7ab8, Func Offset: 0x58
	// Line 218, Address: 0x2e7ac4, Func Offset: 0x64
	// Line 220, Address: 0x2e7ac8, Func Offset: 0x68
	// Line 218, Address: 0x2e7acc, Func Offset: 0x6c
	// Line 220, Address: 0x2e7ad0, Func Offset: 0x70
	// Line 226, Address: 0x2e7ad8, Func Offset: 0x78
	// Line 229, Address: 0x2e7ae0, Func Offset: 0x80
	// Line 230, Address: 0x2e7ae8, Func Offset: 0x88
	// Line 231, Address: 0x2e7aec, Func Offset: 0x8c
	// Line 233, Address: 0x2e7af0, Func Offset: 0x90
	// Line 235, Address: 0x2e7af8, Func Offset: 0x98
	// Line 237, Address: 0x2e7b08, Func Offset: 0xa8
	// Line 241, Address: 0x2e7b28, Func Offset: 0xc8
	// Line 242, Address: 0x2e7b44, Func Offset: 0xe4
	// Line 244, Address: 0x2e7b4c, Func Offset: 0xec
	// Line 243, Address: 0x2e7b50, Func Offset: 0xf0
	// Line 244, Address: 0x2e7b54, Func Offset: 0xf4
	// Line 246, Address: 0x2e7b60, Func Offset: 0x100
	// Line 251, Address: 0x2e7b68, Func Offset: 0x108
	// Line 253, Address: 0x2e7b7c, Func Offset: 0x11c
	// Line 252, Address: 0x2e7b80, Func Offset: 0x120
	// Line 253, Address: 0x2e7b84, Func Offset: 0x124
	// Line 254, Address: 0x2e7b98, Func Offset: 0x138
	// Line 257, Address: 0x2e7b9c, Func Offset: 0x13c
	// Line 268, Address: 0x2e7ba0, Func Offset: 0x140
	// Line 270, Address: 0x2e7ba8, Func Offset: 0x148
	// Line 258, Address: 0x2e7bac, Func Offset: 0x14c
	// Line 270, Address: 0x2e7bb0, Func Offset: 0x150
	// Line 258, Address: 0x2e7bb4, Func Offset: 0x154
	// Line 270, Address: 0x2e7bb8, Func Offset: 0x158
	// Line 260, Address: 0x2e7bbc, Func Offset: 0x15c
	// Line 262, Address: 0x2e7bc0, Func Offset: 0x160
	// Line 260, Address: 0x2e7bc4, Func Offset: 0x164
	// Line 259, Address: 0x2e7bc8, Func Offset: 0x168
	// Line 264, Address: 0x2e7bcc, Func Offset: 0x16c
	// Line 263, Address: 0x2e7bd8, Func Offset: 0x178
	// Line 264, Address: 0x2e7bdc, Func Offset: 0x17c
	// Line 266, Address: 0x2e7be0, Func Offset: 0x180
	// Line 267, Address: 0x2e7bec, Func Offset: 0x18c
	// Line 270, Address: 0x2e7bf0, Func Offset: 0x190
	// Line 277, Address: 0x2e7bf8, Func Offset: 0x198
	// Line 271, Address: 0x2e7c24, Func Offset: 0x1c4
	// Line 272, Address: 0x2e7c28, Func Offset: 0x1c8
	// Line 273, Address: 0x2e7c2c, Func Offset: 0x1cc
	// Line 274, Address: 0x2e7c30, Func Offset: 0x1d0
	// Line 277, Address: 0x2e7c34, Func Offset: 0x1d4
	// Line 288, Address: 0x2e7c3c, Func Offset: 0x1dc
	// Func End, Address: 0x2e7c70, Func Offset: 0x210
}

// 
// Start address: 0x2e7c70
void Generate_OnePtcl(void* PtclAdr, PtclOrgData* pOrgDt, void* pHeadCmn)
{
	WaterRipplePtcl* pPtcl;
	float Vec1Rate;
	float Vec2Rate;
	// Line 300, Address: 0x2e7c70, Func Offset: 0
	// Line 301, Address: 0x2e7c8c, Func Offset: 0x1c
	// Line 304, Address: 0x2e7c90, Func Offset: 0x20
	// Line 305, Address: 0x2e7c98, Func Offset: 0x28
	// Line 307, Address: 0x2e7ca0, Func Offset: 0x30
	// Line 308, Address: 0x2e7cb4, Func Offset: 0x44
	// Line 309, Address: 0x2e7cc0, Func Offset: 0x50
	// Line 310, Address: 0x2e7cc8, Func Offset: 0x58
	// Line 311, Address: 0x2e7ccc, Func Offset: 0x5c
	// Line 312, Address: 0x2e7cd8, Func Offset: 0x68
	// Func End, Address: 0x2e7cf4, Func Offset: 0x84
}

// 
// Start address: 0x2e7d00
void WaterRipplePtcl_Calc(void* pHeadPtcl, int PtclNum, PtclOrgData* pOrgDt, void* pHeadCmn)
{
	WaterRipplePtcl* PtclAry;
	int PtclNo;
	WaterRippleCmnData* pCmnDt;
	WaterRipplePtcl* pPtcl;
	float MvVec[4];
	// Line 338, Address: 0x2e7d00, Func Offset: 0
	// Line 339, Address: 0x2e7d20, Func Offset: 0x20
	// Line 338, Address: 0x2e7d24, Func Offset: 0x24
	// Line 343, Address: 0x2e7d28, Func Offset: 0x28
	// Line 345, Address: 0x2e7d30, Func Offset: 0x30
	// Line 348, Address: 0x2e7d38, Func Offset: 0x38
	// Line 345, Address: 0x2e7d3c, Func Offset: 0x3c
	// Line 348, Address: 0x2e7d40, Func Offset: 0x40
	// Line 351, Address: 0x2e7d54, Func Offset: 0x54
	// Line 352, Address: 0x2e7d80, Func Offset: 0x80
	// Line 353, Address: 0x2e7d94, Func Offset: 0x94
	// Line 354, Address: 0x2e7da0, Func Offset: 0xa0
	// Line 353, Address: 0x2e7da8, Func Offset: 0xa8
	// Line 354, Address: 0x2e7dac, Func Offset: 0xac
	// Line 356, Address: 0x2e7db8, Func Offset: 0xb8
	// Line 358, Address: 0x2e7dc4, Func Offset: 0xc4
	// Line 359, Address: 0x2e7ddc, Func Offset: 0xdc
	// Func End, Address: 0x2e7dfc, Func Offset: 0xfc
}

// 
// Start address: 0x2e7e00
void WaterRipplePtcl_Draw(void* pHeadPtcl, int PtclNum, PtclOrgData* pOrgDt, void* pHeadCmn)
{
	WaterRipplePtcl* PtclAry;
	int PtclNo;
	WaterRippleCmnData* pCmnDt;
	float Wld2ScrMat[4][4];
	_anon1* pPkTop;
	_anon1* pPk;
	_anon1* pGifTag;
	unsigned long Tex0;
	unsigned long AlphaReg;
	float PolyAngY;
	float v2wMat[4][4];
	_anon0* pTex;
	unsigned int cbp;
	WaterRipplePtcl* pPtcl;
	float ScrPos[4];
	float inv_w;
	int qwc;
	// Line 370, Address: 0x2e7e00, Func Offset: 0
	// Line 371, Address: 0x2e7e10, Func Offset: 0x10
	// Line 370, Address: 0x2e7e14, Func Offset: 0x14
	// Line 381, Address: 0x2e7e20, Func Offset: 0x20
	// Line 370, Address: 0x2e7e24, Func Offset: 0x24
	// Line 373, Address: 0x2e7e34, Func Offset: 0x34
	// Line 370, Address: 0x2e7e38, Func Offset: 0x38
	// Line 381, Address: 0x2e7e40, Func Offset: 0x40
	// Line 383, Address: 0x2e7e48, Func Offset: 0x48
	// Line 390, Address: 0x2e7e68, Func Offset: 0x68
	// Line 391, Address: 0x2e7e70, Func Offset: 0x70
	// Line 393, Address: 0x2e7e98, Func Offset: 0x98
	// Line 394, Address: 0x2e7ea0, Func Offset: 0xa0
	// Line 398, Address: 0x2e7eb0, Func Offset: 0xb0
	// Line 399, Address: 0x2e7ebc, Func Offset: 0xbc
	// Line 401, Address: 0x2e7ec4, Func Offset: 0xc4
	// Line 403, Address: 0x2e7ec8, Func Offset: 0xc8
	// Line 405, Address: 0x2e7ed4, Func Offset: 0xd4
	// Line 403, Address: 0x2e7ee0, Func Offset: 0xe0
	// Line 405, Address: 0x2e7ee4, Func Offset: 0xe4
	// Line 415, Address: 0x2e7ee8, Func Offset: 0xe8
	// Line 417, Address: 0x2e7ef4, Func Offset: 0xf4
	// Line 415, Address: 0x2e7ef8, Func Offset: 0xf8
	// Line 417, Address: 0x2e7efc, Func Offset: 0xfc
	// Line 418, Address: 0x2e7f04, Func Offset: 0x104
	// Line 422, Address: 0x2e7f24, Func Offset: 0x124
	// Line 423, Address: 0x2e7f30, Func Offset: 0x130
	// Line 422, Address: 0x2e7f34, Func Offset: 0x134
	// Line 423, Address: 0x2e7f40, Func Offset: 0x140
	// Line 428, Address: 0x2e7f4c, Func Offset: 0x14c
	// Line 423, Address: 0x2e7f50, Func Offset: 0x150
	// Line 428, Address: 0x2e7f54, Func Offset: 0x154
	// Line 427, Address: 0x2e7f58, Func Offset: 0x158
	// Line 428, Address: 0x2e7f5c, Func Offset: 0x15c
	// Line 434, Address: 0x2e7f60, Func Offset: 0x160
	// Line 428, Address: 0x2e7f64, Func Offset: 0x164
	// Line 436, Address: 0x2e7f68, Func Offset: 0x168
	// Line 428, Address: 0x2e7f6c, Func Offset: 0x16c
	// Line 433, Address: 0x2e7f70, Func Offset: 0x170
	// Line 428, Address: 0x2e7f74, Func Offset: 0x174
	// Line 436, Address: 0x2e7f78, Func Offset: 0x178
	// Line 438, Address: 0x2e7f80, Func Offset: 0x180
	// Line 442, Address: 0x2e7f88, Func Offset: 0x188
	// Line 438, Address: 0x2e7f8c, Func Offset: 0x18c
	// Line 442, Address: 0x2e7f90, Func Offset: 0x190
	// Line 446, Address: 0x2e7fa4, Func Offset: 0x1a4
	// Line 447, Address: 0x2e7fd4, Func Offset: 0x1d4
	// Line 450, Address: 0x2e7ff4, Func Offset: 0x1f4
	// Line 451, Address: 0x2e8000, Func Offset: 0x200
	// Line 450, Address: 0x2e8008, Func Offset: 0x208
	// Line 451, Address: 0x2e800c, Func Offset: 0x20c
	// Line 453, Address: 0x2e8028, Func Offset: 0x228
	// Line 460, Address: 0x2e8070, Func Offset: 0x270
	// Line 465, Address: 0x2e8090, Func Offset: 0x290
	// Line 466, Address: 0x2e80a4, Func Offset: 0x2a4
	// Line 468, Address: 0x2e80ac, Func Offset: 0x2ac
	// Line 469, Address: 0x2e80b0, Func Offset: 0x2b0
	// Line 472, Address: 0x2e80c8, Func Offset: 0x2c8
	// Line 473, Address: 0x2e80dc, Func Offset: 0x2dc
	// Line 476, Address: 0x2e80f8, Func Offset: 0x2f8
	// Line 473, Address: 0x2e80fc, Func Offset: 0x2fc
	// Line 476, Address: 0x2e8108, Func Offset: 0x308
	// Line 473, Address: 0x2e810c, Func Offset: 0x30c
	// Line 476, Address: 0x2e811c, Func Offset: 0x31c
	// Line 477, Address: 0x2e812c, Func Offset: 0x32c
	// Line 478, Address: 0x2e8134, Func Offset: 0x334
	// Line 479, Address: 0x2e813c, Func Offset: 0x33c
	// Line 480, Address: 0x2e814c, Func Offset: 0x34c
	// Line 481, Address: 0x2e8150, Func Offset: 0x350
	// Line 483, Address: 0x2e8160, Func Offset: 0x360
	// Func End, Address: 0x2e8194, Func Offset: 0x394
}

// 
// Start address: 0x2e81a0
_anon1* Make_PoolRipple_Packet(_anon1* pPk, WaterRipplePtcl* pPtcl, WaterRippleCmnData* pCmnDt, float Wld2ScrMat[4], float PolyAngY)
{
	_anon1* pSavePk;
	float PolyHalfWidth;
	float PolyLen;
	float PolySin;
	float PolyCos;
	float WaveRate;
	float ZAlphaRate;
	float AddPosX;
	float AddPosZ;
	int VtNo;
	float WaveAng;
	float WaveSin;
	float WaveCos;
	float Pos[4];
	float ScrPos[4];
	float inv_w;
	float fs;
	float ft;
	int fog_val;
	// Line 497, Address: 0x2e81a0, Func Offset: 0
	// Line 500, Address: 0x2e81a4, Func Offset: 0x4
	// Line 497, Address: 0x2e81a8, Func Offset: 0x8
	// Line 500, Address: 0x2e81ac, Func Offset: 0xc
	// Line 497, Address: 0x2e81b0, Func Offset: 0x10
	// Line 498, Address: 0x2e81d8, Func Offset: 0x38
	// Line 497, Address: 0x2e81dc, Func Offset: 0x3c
	// Line 500, Address: 0x2e81f0, Func Offset: 0x50
	// Line 501, Address: 0x2e81f4, Func Offset: 0x54
	// Line 500, Address: 0x2e81f8, Func Offset: 0x58
	// Line 502, Address: 0x2e8208, Func Offset: 0x68
	// Line 503, Address: 0x2e8210, Func Offset: 0x70
	// Line 512, Address: 0x2e8220, Func Offset: 0x80
	// Line 513, Address: 0x2e822c, Func Offset: 0x8c
	// Line 514, Address: 0x2e8234, Func Offset: 0x94
	// Line 516, Address: 0x2e8240, Func Offset: 0xa0
	// Line 515, Address: 0x2e8244, Func Offset: 0xa4
	// Line 516, Address: 0x2e8248, Func Offset: 0xa8
	// Line 520, Address: 0x2e824c, Func Offset: 0xac
	// Line 516, Address: 0x2e8250, Func Offset: 0xb0
	// Line 520, Address: 0x2e8254, Func Offset: 0xb4
	// Line 515, Address: 0x2e8258, Func Offset: 0xb8
	// Line 520, Address: 0x2e825c, Func Offset: 0xbc
	// Line 516, Address: 0x2e8260, Func Offset: 0xc0
	// Line 520, Address: 0x2e8264, Func Offset: 0xc4
	// Line 515, Address: 0x2e8288, Func Offset: 0xe8
	// Line 520, Address: 0x2e828c, Func Offset: 0xec
	// Line 517, Address: 0x2e82ac, Func Offset: 0x10c
	// Line 516, Address: 0x2e82b0, Func Offset: 0x110
	// Line 515, Address: 0x2e82b4, Func Offset: 0x114
	// Line 520, Address: 0x2e82b8, Func Offset: 0x118
	// Line 528, Address: 0x2e82f0, Func Offset: 0x150
	// Line 529, Address: 0x2e82f8, Func Offset: 0x158
	// Line 531, Address: 0x2e82fc, Func Offset: 0x15c
	// Line 529, Address: 0x2e8300, Func Offset: 0x160
	// Line 531, Address: 0x2e8304, Func Offset: 0x164
	// Line 532, Address: 0x2e830c, Func Offset: 0x16c
	// Line 533, Address: 0x2e8310, Func Offset: 0x170
	// Line 532, Address: 0x2e8314, Func Offset: 0x174
	// Line 533, Address: 0x2e8318, Func Offset: 0x178
	// Line 532, Address: 0x2e831c, Func Offset: 0x17c
	// Line 533, Address: 0x2e8320, Func Offset: 0x180
	// Line 532, Address: 0x2e8324, Func Offset: 0x184
	// Line 533, Address: 0x2e8328, Func Offset: 0x188
	// Line 532, Address: 0x2e832c, Func Offset: 0x18c
	// Line 534, Address: 0x2e8330, Func Offset: 0x190
	// Line 532, Address: 0x2e8334, Func Offset: 0x194
	// Line 534, Address: 0x2e8338, Func Offset: 0x198
	// Line 535, Address: 0x2e8340, Func Offset: 0x1a0
	// Line 536, Address: 0x2e8348, Func Offset: 0x1a8
	// Line 537, Address: 0x2e834c, Func Offset: 0x1ac
	// Line 536, Address: 0x2e8350, Func Offset: 0x1b0
	// Line 537, Address: 0x2e8354, Func Offset: 0x1b4
	// Line 536, Address: 0x2e835c, Func Offset: 0x1bc
	// Line 537, Address: 0x2e8360, Func Offset: 0x1c0
	// Line 536, Address: 0x2e8364, Func Offset: 0x1c4
	// Line 538, Address: 0x2e8368, Func Offset: 0x1c8
	// Line 536, Address: 0x2e836c, Func Offset: 0x1cc
	// Line 538, Address: 0x2e8370, Func Offset: 0x1d0
	// Line 539, Address: 0x2e837c, Func Offset: 0x1dc
	// Line 541, Address: 0x2e8380, Func Offset: 0x1e0
	// Line 544, Address: 0x2e838c, Func Offset: 0x1ec
	// Line 545, Address: 0x2e8390, Func Offset: 0x1f0
	// Line 543, Address: 0x2e8394, Func Offset: 0x1f4
	// Line 544, Address: 0x2e8398, Func Offset: 0x1f8
	// Line 545, Address: 0x2e839c, Func Offset: 0x1fc
	// Line 544, Address: 0x2e83a0, Func Offset: 0x200
	// Line 546, Address: 0x2e83a4, Func Offset: 0x204
	// Line 547, Address: 0x2e83b0, Func Offset: 0x210
	// Line 548, Address: 0x2e83b4, Func Offset: 0x214
	// Line 550, Address: 0x2e83b8, Func Offset: 0x218
	// Line 551, Address: 0x2e83e0, Func Offset: 0x240
	// Line 552, Address: 0x2e83f0, Func Offset: 0x250
	// Line 554, Address: 0x2e83f8, Func Offset: 0x258
	// Line 555, Address: 0x2e8400, Func Offset: 0x260
	// Line 557, Address: 0x2e841c, Func Offset: 0x27c
	// Line 560, Address: 0x2e8458, Func Offset: 0x2b8
	// Line 566, Address: 0x2e8460, Func Offset: 0x2c0
	// Line 567, Address: 0x2e8468, Func Offset: 0x2c8
	// Line 568, Address: 0x2e8478, Func Offset: 0x2d8
	// Line 569, Address: 0x2e847c, Func Offset: 0x2dc
	// Line 571, Address: 0x2e8494, Func Offset: 0x2f4
	// Line 572, Address: 0x2e84a0, Func Offset: 0x300
	// Line 574, Address: 0x2e84ac, Func Offset: 0x30c
	// Line 576, Address: 0x2e84b0, Func Offset: 0x310
	// Line 577, Address: 0x2e84b4, Func Offset: 0x314
	// Line 578, Address: 0x2e84b8, Func Offset: 0x318
	// Line 582, Address: 0x2e84bc, Func Offset: 0x31c
	// Line 579, Address: 0x2e84c0, Func Offset: 0x320
	// Line 582, Address: 0x2e84c4, Func Offset: 0x324
	// Line 583, Address: 0x2e84c8, Func Offset: 0x328
	// Line 584, Address: 0x2e84d0, Func Offset: 0x330
	// Line 585, Address: 0x2e84d8, Func Offset: 0x338
	// Line 586, Address: 0x2e8544, Func Offset: 0x3a4
	// Line 588, Address: 0x2e8548, Func Offset: 0x3a8
	// Line 589, Address: 0x2e8554, Func Offset: 0x3b4
	// Line 591, Address: 0x2e8560, Func Offset: 0x3c0
	// Line 592, Address: 0x2e8568, Func Offset: 0x3c8
	// Line 593, Address: 0x2e856c, Func Offset: 0x3cc
	// Line 594, Address: 0x2e8570, Func Offset: 0x3d0
	// Line 595, Address: 0x2e8574, Func Offset: 0x3d4
	// Line 596, Address: 0x2e8584, Func Offset: 0x3e4
	// Line 597, Address: 0x2e8588, Func Offset: 0x3e8
	// Func End, Address: 0x2e85c0, Func Offset: 0x420
}

// 
// Start address: 0x2e85c0
_anon1* Make_TowerWave_Packet(_anon1* pPk, WaterRipplePtcl* pPtcl, WaterRippleCmnData* pCmnDt, float Wld2ScrMat[4], float PolyAngY)
{
	_anon1* pSavePk;
	float PolyHalfWidth;
	float PolyHalfLen;
	float PolySin;
	float PolyCos;
	float LifeRate;
	float WaveRate;
	float AddPosX;
	float AddPosZ;
	int VtNo;
	float WaveAng;
	float WaveSin;
	float WaveCos;
	float AddCos;
	float Pos[4];
	float ScrPos[4];
	float inv_w;
	float fs;
	float ft;
	float VtAlphaRate;
	int fog_val;
	// Line 610, Address: 0x2e85c0, Func Offset: 0
	// Line 621, Address: 0x2e85c4, Func Offset: 0x4
	// Line 610, Address: 0x2e85c8, Func Offset: 0x8
	// Line 621, Address: 0x2e85cc, Func Offset: 0xc
	// Line 610, Address: 0x2e85d0, Func Offset: 0x10
	// Line 619, Address: 0x2e85f8, Func Offset: 0x38
	// Line 610, Address: 0x2e85fc, Func Offset: 0x3c
	// Line 621, Address: 0x2e8614, Func Offset: 0x54
	// Line 622, Address: 0x2e861c, Func Offset: 0x5c
	// Line 621, Address: 0x2e8624, Func Offset: 0x64
	// Line 623, Address: 0x2e862c, Func Offset: 0x6c
	// Line 624, Address: 0x2e8634, Func Offset: 0x74
	// Line 625, Address: 0x2e8640, Func Offset: 0x80
	// Line 624, Address: 0x2e8648, Func Offset: 0x88
	// Line 633, Address: 0x2e864c, Func Offset: 0x8c
	// Line 625, Address: 0x2e8650, Func Offset: 0x90
	// Line 633, Address: 0x2e865c, Func Offset: 0x9c
	// Line 634, Address: 0x2e8660, Func Offset: 0xa0
	// Line 635, Address: 0x2e8668, Func Offset: 0xa8
	// Line 636, Address: 0x2e8670, Func Offset: 0xb0
	// Line 637, Address: 0x2e8688, Func Offset: 0xc8
	// Line 638, Address: 0x2e8690, Func Offset: 0xd0
	// Line 639, Address: 0x2e86a4, Func Offset: 0xe4
	// Line 638, Address: 0x2e86a8, Func Offset: 0xe8
	// Line 639, Address: 0x2e86b0, Func Offset: 0xf0
	// Line 638, Address: 0x2e86b4, Func Offset: 0xf4
	// Line 639, Address: 0x2e86b8, Func Offset: 0xf8
	// Line 643, Address: 0x2e86c8, Func Offset: 0x108
	// Line 639, Address: 0x2e86cc, Func Offset: 0x10c
	// Line 643, Address: 0x2e86d0, Func Offset: 0x110
	// Line 639, Address: 0x2e86d4, Func Offset: 0x114
	// Line 643, Address: 0x2e86d8, Func Offset: 0x118
	// Line 639, Address: 0x2e86e4, Func Offset: 0x124
	// Line 643, Address: 0x2e86e8, Func Offset: 0x128
	// Line 639, Address: 0x2e870c, Func Offset: 0x14c
	// Line 643, Address: 0x2e8710, Func Offset: 0x150
	// Line 652, Address: 0x2e87b8, Func Offset: 0x1f8
	// Line 653, Address: 0x2e87c0, Func Offset: 0x200
	// Line 656, Address: 0x2e87c4, Func Offset: 0x204
	// Line 653, Address: 0x2e87c8, Func Offset: 0x208
	// Line 656, Address: 0x2e87cc, Func Offset: 0x20c
	// Line 657, Address: 0x2e87d4, Func Offset: 0x214
	// Line 658, Address: 0x2e87d8, Func Offset: 0x218
	// Line 657, Address: 0x2e87dc, Func Offset: 0x21c
	// Line 658, Address: 0x2e87e8, Func Offset: 0x228
	// Line 657, Address: 0x2e87f0, Func Offset: 0x230
	// Line 658, Address: 0x2e87f4, Func Offset: 0x234
	// Line 659, Address: 0x2e87f8, Func Offset: 0x238
	// Line 657, Address: 0x2e87fc, Func Offset: 0x23c
	// Line 659, Address: 0x2e8800, Func Offset: 0x240
	// Line 660, Address: 0x2e8808, Func Offset: 0x248
	// Line 661, Address: 0x2e8810, Func Offset: 0x250
	// Line 662, Address: 0x2e8814, Func Offset: 0x254
	// Line 661, Address: 0x2e8818, Func Offset: 0x258
	// Line 662, Address: 0x2e8820, Func Offset: 0x260
	// Line 661, Address: 0x2e8828, Func Offset: 0x268
	// Line 662, Address: 0x2e882c, Func Offset: 0x26c
	// Line 663, Address: 0x2e8830, Func Offset: 0x270
	// Line 661, Address: 0x2e8834, Func Offset: 0x274
	// Line 663, Address: 0x2e8838, Func Offset: 0x278
	// Line 664, Address: 0x2e8844, Func Offset: 0x284
	// Line 667, Address: 0x2e8848, Func Offset: 0x288
	// Line 670, Address: 0x2e885c, Func Offset: 0x29c
	// Line 673, Address: 0x2e8860, Func Offset: 0x2a0
	// Line 672, Address: 0x2e8864, Func Offset: 0x2a4
	// Line 671, Address: 0x2e8868, Func Offset: 0x2a8
	// Line 673, Address: 0x2e886c, Func Offset: 0x2ac
	// Line 672, Address: 0x2e8870, Func Offset: 0x2b0
	// Line 673, Address: 0x2e8874, Func Offset: 0x2b4
	// Line 674, Address: 0x2e8878, Func Offset: 0x2b8
	// Line 675, Address: 0x2e887c, Func Offset: 0x2bc
	// Line 676, Address: 0x2e8884, Func Offset: 0x2c4
	// Line 679, Address: 0x2e8888, Func Offset: 0x2c8
	// Line 680, Address: 0x2e888c, Func Offset: 0x2cc
	// Line 678, Address: 0x2e8890, Func Offset: 0x2d0
	// Line 679, Address: 0x2e8894, Func Offset: 0x2d4
	// Line 680, Address: 0x2e8898, Func Offset: 0x2d8
	// Line 681, Address: 0x2e889c, Func Offset: 0x2dc
	// Line 679, Address: 0x2e88a0, Func Offset: 0x2e0
	// Line 682, Address: 0x2e88a4, Func Offset: 0x2e4
	// Line 683, Address: 0x2e88ac, Func Offset: 0x2ec
	// Line 686, Address: 0x2e88b0, Func Offset: 0x2f0
	// Line 685, Address: 0x2e88b4, Func Offset: 0x2f4
	// Line 684, Address: 0x2e88b8, Func Offset: 0x2f8
	// Line 686, Address: 0x2e88bc, Func Offset: 0x2fc
	// Line 685, Address: 0x2e88c0, Func Offset: 0x300
	// Line 686, Address: 0x2e88c4, Func Offset: 0x304
	// Line 687, Address: 0x2e88c8, Func Offset: 0x308
	// Line 685, Address: 0x2e88cc, Func Offset: 0x30c
	// Line 691, Address: 0x2e88d0, Func Offset: 0x310
	// Line 692, Address: 0x2e88f8, Func Offset: 0x338
	// Line 693, Address: 0x2e8908, Func Offset: 0x348
	// Line 695, Address: 0x2e8910, Func Offset: 0x350
	// Line 696, Address: 0x2e8918, Func Offset: 0x358
	// Line 698, Address: 0x2e8934, Func Offset: 0x374
	// Line 701, Address: 0x2e8970, Func Offset: 0x3b0
	// Line 705, Address: 0x2e8978, Func Offset: 0x3b8
	// Line 706, Address: 0x2e897c, Func Offset: 0x3bc
	// Line 707, Address: 0x2e8980, Func Offset: 0x3c0
	// Line 711, Address: 0x2e8984, Func Offset: 0x3c4
	// Line 708, Address: 0x2e8988, Func Offset: 0x3c8
	// Line 711, Address: 0x2e898c, Func Offset: 0x3cc
	// Line 712, Address: 0x2e8990, Func Offset: 0x3d0
	// Line 713, Address: 0x2e8998, Func Offset: 0x3d8
	// Line 714, Address: 0x2e89a0, Func Offset: 0x3e0
	// Line 715, Address: 0x2e8a10, Func Offset: 0x450
	// Line 717, Address: 0x2e8a14, Func Offset: 0x454
	// Line 718, Address: 0x2e8a20, Func Offset: 0x460
	// Line 720, Address: 0x2e8a2c, Func Offset: 0x46c
	// Line 721, Address: 0x2e8a38, Func Offset: 0x478
	// Line 722, Address: 0x2e8a3c, Func Offset: 0x47c
	// Line 723, Address: 0x2e8a40, Func Offset: 0x480
	// Line 724, Address: 0x2e8a44, Func Offset: 0x484
	// Line 725, Address: 0x2e8a54, Func Offset: 0x494
	// Line 726, Address: 0x2e8a58, Func Offset: 0x498
	// Func End, Address: 0x2e8a94, Func Offset: 0x4d4
}

