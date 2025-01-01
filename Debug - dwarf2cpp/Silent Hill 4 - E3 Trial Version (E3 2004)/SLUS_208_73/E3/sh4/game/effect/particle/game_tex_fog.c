typedef struct PtclData;
typedef struct _anon0;
typedef struct TexFogParam;
typedef struct TexFogWork;
typedef struct sfObj;
typedef union _anon1;
typedef enum _cam3Step : unsigned char;
typedef union _anon2;
typedef struct TexFogOrgData;
typedef struct _cam3Work;

typedef void(*type_12)();
typedef void(*type_13)();
typedef void(*type_17)(sfObj*);
typedef void(*type_20)(sfObj*);
typedef void(*type_21)(sfObj*);
typedef void(*type_23)(sfObj*);
typedef void(*type_24)(sfObj*);
typedef void(*type_27)();

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
typedef PtclData type_11[80];
typedef void(*type_14)()[2];
typedef _anon1 type_15[256];
typedef TexFogWork type_16[2];
typedef float type_18[4];
typedef float type_19[4][4];
typedef float type_22[4];
typedef unsigned char type_25[4];
typedef void(*type_26)(sfObj*)[3];
typedef short type_28[2];
typedef unsigned short type_29[2];
typedef char type_30[4];
typedef unsigned char type_31[4];
typedef float type_32[1];
typedef int type_33[1];
typedef long type_34[2];
typedef unsigned long type_35[2];

struct PtclData
{
	float Pos[4];
	float SpdRate;
	float CenterTexS;
	float CenterTexT;
	float RollPolyAng;
	float RollPolyRate;
	float PosAlphaRate;
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

struct TexFogParam
{
	int UsePtclNum;
	unsigned int OnCamCoordinateXYZFlag;
	float PtclAlphaVal;
	unsigned char AroundRGB[4];
	unsigned char NearFogRGBA[4];
	float PtclWldSpd[4];
	float MinLclXYZ[4];
	float MaxLclXYZ[4];
	float PtclRadius;
	float PtclHeightRate;
	float MaxPolyOmega;
	float TexS_SpdRate;
	float TgtNearFogAlphaRate;
	float NearFogAlphaRate;
};

struct TexFogWork
{
	int InitFlag;
	int ForDemoFlag;
	TexFogParam FogPrm;
	TexFogOrgData OrgDt;
	PtclData PtclAry[80];
	TexFogParam TgtFogPrm;
	TexFogParam FromFogPrm;
	void(*ContFogPrmFunc)();
	float WaitSubTimer;
	float ChgTime;
	float ChgSubTimer;
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

enum _cam3Step : unsigned char
{
	CAM3_STEP_NORMAL,
	CAM3_STEP_AUTOFOCUS,
	CAM3_STEP_RESET,
	CAM3_STEP_STOP
};

union _anon2
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

struct TexFogOrgData
{
	float NowPos[4];
	float PrevPos[4];
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
void(*TexFog_Draw)(sfObj*);
void(*TexFog_Calc)(sfObj*);
TexFogWork tfW[2];
float sg_vector_unit_w[4];
_cam3Work cam3_work;

void TexFog_SceneInit(int ForDemoFlag, void(*ContFogPrmFunc)());
float mk_near_fog_alpha_rate(float PrevVal);
void TexFog_InitParticle(int ForDemoFlag, TexFogParam* pFog);
void OrgData_init(TexFogOrgData* pOrgDt, unsigned int OnCamCoordinateXYZFlag);
void one_PtclData_init(PtclData* pPtcl, TexFogParam* pFog);
void TexFog_ChangeParam(int ForDemoFlag, TexFogParam* pFog, float WaitTime, float ChgTime);
void TexFog_GetFogParam(TexFogParam* pDestFog, int ForDemoFlag);
void TexFog_Calc(sfObj* pObj);
void chg_fog_param_to_target_param(TexFogWork* pW);
void TexFog_Draw(sfObj* pObj);
_anon2* draw_one_ptcl(_anon2* pPk, PtclData* pPtcl, TexFogWork* pW, float Wld2ScrMat[4], float View2ScrMat[4]);

// 
// Start address: 0x335b20
void TexFog_SceneInit(int ForDemoFlag, void(*ContFogPrmFunc)())
{
	sfObj* pObj;
	TexFogWork* pW;
	// Line 173, Address: 0x335b20, Func Offset: 0
	// Line 175, Address: 0x335b24, Func Offset: 0x4
	// Line 173, Address: 0x335b28, Func Offset: 0x8
	// Line 175, Address: 0x335b40, Func Offset: 0x20
	// Line 177, Address: 0x335b64, Func Offset: 0x44
	// Line 178, Address: 0x335b70, Func Offset: 0x50
	// Line 184, Address: 0x335b78, Func Offset: 0x58
	// Line 185, Address: 0x335b84, Func Offset: 0x64
	// Line 186, Address: 0x335b90, Func Offset: 0x70
	// Line 187, Address: 0x335ba0, Func Offset: 0x80
	// Line 188, Address: 0x335ba8, Func Offset: 0x88
	// Line 193, Address: 0x335bb0, Func Offset: 0x90
	// Line 194, Address: 0x335bc4, Func Offset: 0xa4
	// Line 195, Address: 0x335bcc, Func Offset: 0xac
	// Line 196, Address: 0x335bd0, Func Offset: 0xb0
	// Func End, Address: 0x335bec, Func Offset: 0xcc
}

// 
// Start address: 0x335bf0
float mk_near_fog_alpha_rate(float PrevVal)
{
	float RandVal;
	// Line 203, Address: 0x335bf0, Func Offset: 0
	// Line 204, Address: 0x335bfc, Func Offset: 0xc
	// Line 205, Address: 0x335c04, Func Offset: 0x14
	// Line 208, Address: 0x335c1c, Func Offset: 0x2c
	// Line 205, Address: 0x335c2c, Func Offset: 0x3c
	// Line 210, Address: 0x335c30, Func Offset: 0x40
	// Line 205, Address: 0x335c34, Func Offset: 0x44
	// Line 208, Address: 0x335c48, Func Offset: 0x58
	// Line 205, Address: 0x335c50, Func Offset: 0x60
	// Line 208, Address: 0x335c54, Func Offset: 0x64
	// Line 210, Address: 0x335c64, Func Offset: 0x74
	// Func End, Address: 0x335c70, Func Offset: 0x80
}

// 
// Start address: 0x335c70
void TexFog_InitParticle(int ForDemoFlag, TexFogParam* pFog)
{
	TexFogWork* pW;
	int PtclNo;
	// Line 223, Address: 0x335c70, Func Offset: 0
	// Line 222, Address: 0x335c74, Func Offset: 0x4
	// Line 223, Address: 0x335c78, Func Offset: 0x8
	// Line 222, Address: 0x335c7c, Func Offset: 0xc
	// Line 223, Address: 0x335c80, Func Offset: 0x10
	// Line 222, Address: 0x335c84, Func Offset: 0x14
	// Line 223, Address: 0x335c88, Func Offset: 0x18
	// Line 222, Address: 0x335c8c, Func Offset: 0x1c
	// Line 223, Address: 0x335c90, Func Offset: 0x20
	// Line 222, Address: 0x335c9c, Func Offset: 0x2c
	// Line 223, Address: 0x335ca0, Func Offset: 0x30
	// Line 227, Address: 0x335cb0, Func Offset: 0x40
	// Line 228, Address: 0x335cbc, Func Offset: 0x4c
	// Line 229, Address: 0x335ccc, Func Offset: 0x5c
	// Line 231, Address: 0x335cdc, Func Offset: 0x6c
	// Line 235, Address: 0x335ce8, Func Offset: 0x78
	// Line 234, Address: 0x335cec, Func Offset: 0x7c
	// Line 235, Address: 0x335cf0, Func Offset: 0x80
	// Line 236, Address: 0x335cfc, Func Offset: 0x8c
	// Line 238, Address: 0x335d10, Func Offset: 0xa0
	// Line 244, Address: 0x335d1c, Func Offset: 0xac
	// Line 246, Address: 0x335d28, Func Offset: 0xb8
	// Line 250, Address: 0x335d34, Func Offset: 0xc4
	// Line 251, Address: 0x335d44, Func Offset: 0xd4
	// Line 252, Address: 0x335d48, Func Offset: 0xd8
	// Func End, Address: 0x335d60, Func Offset: 0xf0
}

// 
// Start address: 0x335d60
void OrgData_init(TexFogOrgData* pOrgDt, unsigned int OnCamCoordinateXYZFlag)
{
	float View2WldMat[4][4];
	// Line 262, Address: 0x335d60, Func Offset: 0
	// Line 264, Address: 0x335d78, Func Offset: 0x18
	// Line 266, Address: 0x335d80, Func Offset: 0x20
	// Line 267, Address: 0x335d90, Func Offset: 0x30
	// Line 268, Address: 0x335da8, Func Offset: 0x48
	// Line 269, Address: 0x335dc0, Func Offset: 0x60
	// Line 270, Address: 0x335dd8, Func Offset: 0x78
	// Line 271, Address: 0x335de0, Func Offset: 0x80
	// Func End, Address: 0x335df4, Func Offset: 0x94
}

// 
// Start address: 0x335e00
void one_PtclData_init(PtclData* pPtcl, TexFogParam* pFog)
{
	// Line 280, Address: 0x335e00, Func Offset: 0
	// Line 281, Address: 0x335e1c, Func Offset: 0x1c
	// Line 282, Address: 0x335e50, Func Offset: 0x50
	// Line 283, Address: 0x335e84, Func Offset: 0x84
	// Line 284, Address: 0x335ea8, Func Offset: 0xa8
	// Line 283, Address: 0x335eac, Func Offset: 0xac
	// Line 285, Address: 0x335ebc, Func Offset: 0xbc
	// Line 286, Address: 0x335ee4, Func Offset: 0xe4
	// Line 287, Address: 0x335efc, Func Offset: 0xfc
	// Line 288, Address: 0x335f14, Func Offset: 0x114
	// Line 289, Address: 0x335f30, Func Offset: 0x130
	// Line 290, Address: 0x335f5c, Func Offset: 0x15c
	// Line 291, Address: 0x335f70, Func Offset: 0x170
	// Line 292, Address: 0x335f7c, Func Offset: 0x17c
	// Line 293, Address: 0x335f80, Func Offset: 0x180
	// Func End, Address: 0x335f98, Func Offset: 0x198
}

// 
// Start address: 0x335fa0
void TexFog_ChangeParam(int ForDemoFlag, TexFogParam* pFog, float WaitTime, float ChgTime)
{
	TexFogWork* pW;
	// Line 312, Address: 0x335fa0, Func Offset: 0
	// Line 311, Address: 0x335fa4, Func Offset: 0x4
	// Line 312, Address: 0x335fa8, Func Offset: 0x8
	// Line 311, Address: 0x335fac, Func Offset: 0xc
	// Line 312, Address: 0x335fb0, Func Offset: 0x10
	// Line 311, Address: 0x335fbc, Func Offset: 0x1c
	// Line 312, Address: 0x335fc0, Func Offset: 0x20
	// Line 317, Address: 0x335fcc, Func Offset: 0x2c
	// Line 312, Address: 0x335fd0, Func Offset: 0x30
	// Line 314, Address: 0x335fd8, Func Offset: 0x38
	// Line 317, Address: 0x335fdc, Func Offset: 0x3c
	// Line 315, Address: 0x335fe0, Func Offset: 0x40
	// Line 317, Address: 0x335fe4, Func Offset: 0x44
	// Line 318, Address: 0x335fec, Func Offset: 0x4c
	// Line 319, Address: 0x335ffc, Func Offset: 0x5c
	// Func End, Address: 0x33600c, Func Offset: 0x6c
}

// 
// Start address: 0x336010
void TexFog_GetFogParam(TexFogParam* pDestFog, int ForDemoFlag)
{
	// Line 334, Address: 0x336010, Func Offset: 0
	// Func End, Address: 0x336044, Func Offset: 0x34
}

// 
// Start address: 0x336050
void TexFog_Calc(sfObj* pObj)
{
	TexFogWork* pW;
	TexFogParam* pFog;
	TexFogOrgData* pOrgDt;
	int PtclNo;
	PtclData* pPtcl;
	float OrgMvVec[4];
	float LclXW;
	float LclYW;
	float LclZW;
	float View2WldMat[4][4];
	float SvChgSubTimer;
	float SpdDotVal;
	float Wld2ViewMat[4][4];
	float SpdDir[4];
	float AlphaAddSpd;
	float AlphaSubSpd;
	float PtclMvVec[4];
	float AlphaRate;
	float MinAlphaRate;
	// Line 341, Address: 0x336050, Func Offset: 0
	// Line 342, Address: 0x336074, Func Offset: 0x24
	// Line 358, Address: 0x336078, Func Offset: 0x28
	// Line 365, Address: 0x336084, Func Offset: 0x34
	// Line 362, Address: 0x336088, Func Offset: 0x38
	// Line 365, Address: 0x33608c, Func Offset: 0x3c
	// Line 366, Address: 0x336094, Func Offset: 0x44
	// Line 367, Address: 0x33609c, Func Offset: 0x4c
	// Line 370, Address: 0x3360a0, Func Offset: 0x50
	// Line 372, Address: 0x3360b8, Func Offset: 0x68
	// Line 376, Address: 0x3360c8, Func Offset: 0x78
	// Line 378, Address: 0x3360d0, Func Offset: 0x80
	// Line 379, Address: 0x3360dc, Func Offset: 0x8c
	// Line 378, Address: 0x3360e8, Func Offset: 0x98
	// Line 379, Address: 0x3360ec, Func Offset: 0x9c
	// Line 381, Address: 0x336104, Func Offset: 0xb4
	// Line 385, Address: 0x336108, Func Offset: 0xb8
	// Line 393, Address: 0x336114, Func Offset: 0xc4
	// Line 385, Address: 0x336118, Func Offset: 0xc8
	// Line 393, Address: 0x33611c, Func Offset: 0xcc
	// Line 394, Address: 0x336124, Func Offset: 0xd4
	// Line 395, Address: 0x336150, Func Offset: 0x100
	// Line 398, Address: 0x336174, Func Offset: 0x124
	// Line 400, Address: 0x336178, Func Offset: 0x128
	// Line 398, Address: 0x33617c, Func Offset: 0x12c
	// Line 396, Address: 0x336180, Func Offset: 0x130
	// Line 398, Address: 0x336184, Func Offset: 0x134
	// Line 396, Address: 0x336188, Func Offset: 0x138
	// Line 400, Address: 0x3361a8, Func Offset: 0x158
	// Line 396, Address: 0x3361ac, Func Offset: 0x15c
	// Line 398, Address: 0x3361b8, Func Offset: 0x168
	// Line 400, Address: 0x3361c0, Func Offset: 0x170
	// Line 398, Address: 0x3361c4, Func Offset: 0x174
	// Line 396, Address: 0x3361c8, Func Offset: 0x178
	// Line 398, Address: 0x3361d0, Func Offset: 0x180
	// Line 396, Address: 0x3361dc, Func Offset: 0x18c
	// Line 398, Address: 0x3361e0, Func Offset: 0x190
	// Line 400, Address: 0x3361f4, Func Offset: 0x1a4
	// Line 402, Address: 0x3361fc, Func Offset: 0x1ac
	// Line 403, Address: 0x336214, Func Offset: 0x1c4
	// Line 405, Address: 0x336224, Func Offset: 0x1d4
	// Line 406, Address: 0x336228, Func Offset: 0x1d8
	// Line 408, Address: 0x336230, Func Offset: 0x1e0
	// Line 410, Address: 0x336238, Func Offset: 0x1e8
	// Line 411, Address: 0x336250, Func Offset: 0x200
	// Line 413, Address: 0x336260, Func Offset: 0x210
	// Line 414, Address: 0x336264, Func Offset: 0x214
	// Line 422, Address: 0x336270, Func Offset: 0x220
	// Line 418, Address: 0x336274, Func Offset: 0x224
	// Line 419, Address: 0x33627c, Func Offset: 0x22c
	// Line 420, Address: 0x336284, Func Offset: 0x234
	// Line 418, Address: 0x33628c, Func Offset: 0x23c
	// Line 419, Address: 0x336290, Func Offset: 0x240
	// Line 422, Address: 0x336294, Func Offset: 0x244
	// Line 425, Address: 0x33629c, Func Offset: 0x24c
	// Line 427, Address: 0x3362a8, Func Offset: 0x258
	// Line 428, Address: 0x3362b8, Func Offset: 0x268
	// Line 429, Address: 0x3362d0, Func Offset: 0x280
	// Line 430, Address: 0x3362e8, Func Offset: 0x298
	// Line 432, Address: 0x336300, Func Offset: 0x2b0
	// Line 434, Address: 0x33631c, Func Offset: 0x2cc
	// Line 438, Address: 0x336330, Func Offset: 0x2e0
	// Line 443, Address: 0x336340, Func Offset: 0x2f0
	// Line 444, Address: 0x33635c, Func Offset: 0x30c
	// Line 443, Address: 0x336364, Func Offset: 0x314
	// Line 444, Address: 0x336370, Func Offset: 0x320
	// Line 445, Address: 0x33637c, Func Offset: 0x32c
	// Line 446, Address: 0x336384, Func Offset: 0x334
	// Line 448, Address: 0x336388, Func Offset: 0x338
	// Line 453, Address: 0x3363a8, Func Offset: 0x358
	// Line 454, Address: 0x3363dc, Func Offset: 0x38c
	// Line 455, Address: 0x3363f4, Func Offset: 0x3a4
	// Line 463, Address: 0x33640c, Func Offset: 0x3bc
	// Line 464, Address: 0x336428, Func Offset: 0x3d8
	// Line 465, Address: 0x336440, Func Offset: 0x3f0
	// Line 467, Address: 0x33646c, Func Offset: 0x41c
	// Line 465, Address: 0x336474, Func Offset: 0x424
	// Line 467, Address: 0x33647c, Func Offset: 0x42c
	// Line 468, Address: 0x336490, Func Offset: 0x440
	// Line 469, Address: 0x3364a8, Func Offset: 0x458
	// Line 470, Address: 0x3364dc, Func Offset: 0x48c
	// Line 471, Address: 0x3364e8, Func Offset: 0x498
	// Line 472, Address: 0x3364ec, Func Offset: 0x49c
	// Line 473, Address: 0x3364f0, Func Offset: 0x4a0
	// Line 474, Address: 0x336508, Func Offset: 0x4b8
	// Line 475, Address: 0x336520, Func Offset: 0x4d0
	// Line 476, Address: 0x336554, Func Offset: 0x504
	// Line 477, Address: 0x336560, Func Offset: 0x510
	// Line 478, Address: 0x336564, Func Offset: 0x514
	// Line 479, Address: 0x336568, Func Offset: 0x518
	// Line 480, Address: 0x336580, Func Offset: 0x530
	// Line 481, Address: 0x336584, Func Offset: 0x534
	// Line 484, Address: 0x336588, Func Offset: 0x538
	// Line 482, Address: 0x33658c, Func Offset: 0x53c
	// Line 484, Address: 0x336590, Func Offset: 0x540
	// Line 485, Address: 0x3365a4, Func Offset: 0x554
	// Func End, Address: 0x3365d0, Func Offset: 0x580
}

// 
// Start address: 0x3365d0
void chg_fog_param_to_target_param(TexFogWork* pW)
{
	float TgtRate;
	TexFogParam* pDest;
	TexFogParam* pFrom;
	TexFogParam* pTgt;
	// Line 498, Address: 0x3365d0, Func Offset: 0
	// Line 494, Address: 0x3365d4, Func Offset: 0x4
	// Line 498, Address: 0x3365d8, Func Offset: 0x8
	// Line 495, Address: 0x3365dc, Func Offset: 0xc
	// Line 498, Address: 0x3365e0, Func Offset: 0x10
	// Line 500, Address: 0x3365f0, Func Offset: 0x20
	// Line 501, Address: 0x3365fc, Func Offset: 0x2c
	// Line 502, Address: 0x336604, Func Offset: 0x34
	// Line 503, Address: 0x336610, Func Offset: 0x40
	// Line 504, Address: 0x33661c, Func Offset: 0x4c
	// Line 508, Address: 0x336628, Func Offset: 0x58
	// Line 510, Address: 0x336640, Func Offset: 0x70
	// Line 511, Address: 0x3366f0, Func Offset: 0x120
	// Line 512, Address: 0x3367a4, Func Offset: 0x1d4
	// Line 514, Address: 0x336858, Func Offset: 0x288
	// Line 515, Address: 0x33690c, Func Offset: 0x33c
	// Line 516, Address: 0x3369c0, Func Offset: 0x3f0
	// Line 517, Address: 0x336a74, Func Offset: 0x4a4
	// Line 519, Address: 0x336b28, Func Offset: 0x558
	// Line 520, Address: 0x336b3c, Func Offset: 0x56c
	// Line 521, Address: 0x336b50, Func Offset: 0x580
	// Line 523, Address: 0x336b64, Func Offset: 0x594
	// Line 524, Address: 0x336b78, Func Offset: 0x5a8
	// Line 525, Address: 0x336b8c, Func Offset: 0x5bc
	// Line 527, Address: 0x336ba0, Func Offset: 0x5d0
	// Line 528, Address: 0x336bb4, Func Offset: 0x5e4
	// Line 529, Address: 0x336bc8, Func Offset: 0x5f8
	// Line 531, Address: 0x336bdc, Func Offset: 0x60c
	// Line 532, Address: 0x336bf0, Func Offset: 0x620
	// Line 533, Address: 0x336c04, Func Offset: 0x634
	// Line 534, Address: 0x336c18, Func Offset: 0x648
	// Line 535, Address: 0x336c2c, Func Offset: 0x65c
	// Func End, Address: 0x336c38, Func Offset: 0x668
}

// 
// Start address: 0x336c40
void TexFog_Draw(sfObj* pObj)
{
	TexFogWork* pW;
	unsigned long GsReg_Tex0;
	float Wld2ScrMat[4][4];
	float View2ScrMat[4][4];
	TexFogParam* pFog;
	_anon2* pPkTop;
	_anon2* pPk;
	_anon0* pTex;
	unsigned int cbp;
	int AVal;
	int PtclNo;
	PtclData* pPtcl;
	int qwc;
	// Line 542, Address: 0x336c40, Func Offset: 0
	// Line 543, Address: 0x336c5c, Func Offset: 0x1c
	// Line 552, Address: 0x336c60, Func Offset: 0x20
	// Line 556, Address: 0x336c6c, Func Offset: 0x2c
	// Line 559, Address: 0x336c84, Func Offset: 0x44
	// Line 561, Address: 0x336c90, Func Offset: 0x50
	// Line 559, Address: 0x336c94, Func Offset: 0x54
	// Line 561, Address: 0x336ca0, Func Offset: 0x60
	// Line 562, Address: 0x336ca8, Func Offset: 0x68
	// Line 566, Address: 0x336cb0, Func Offset: 0x70
	// Line 568, Address: 0x336cc4, Func Offset: 0x84
	// Line 569, Address: 0x336cd4, Func Offset: 0x94
	// Line 574, Address: 0x336cf0, Func Offset: 0xb0
	// Line 575, Address: 0x336cfc, Func Offset: 0xbc
	// Line 574, Address: 0x336d00, Func Offset: 0xc0
	// Line 579, Address: 0x336d08, Func Offset: 0xc8
	// Line 575, Address: 0x336d10, Func Offset: 0xd0
	// Line 579, Address: 0x336d14, Func Offset: 0xd4
	// Line 580, Address: 0x336d18, Func Offset: 0xd8
	// Line 579, Address: 0x336d1c, Func Offset: 0xdc
	// Line 584, Address: 0x336d28, Func Offset: 0xe8
	// Line 580, Address: 0x336d2c, Func Offset: 0xec
	// Line 584, Address: 0x336d30, Func Offset: 0xf0
	// Line 581, Address: 0x336d34, Func Offset: 0xf4
	// Line 586, Address: 0x336d38, Func Offset: 0xf8
	// Line 584, Address: 0x336d3c, Func Offset: 0xfc
	// Line 590, Address: 0x336d40, Func Offset: 0x100
	// Line 586, Address: 0x336d44, Func Offset: 0x104
	// Line 591, Address: 0x336d48, Func Offset: 0x108
	// Line 590, Address: 0x336d4c, Func Offset: 0x10c
	// Line 596, Address: 0x336d50, Func Offset: 0x110
	// Line 591, Address: 0x336d54, Func Offset: 0x114
	// Line 592, Address: 0x336d58, Func Offset: 0x118
	// Line 595, Address: 0x336d5c, Func Offset: 0x11c
	// Line 596, Address: 0x336d60, Func Offset: 0x120
	// Line 597, Address: 0x336d64, Func Offset: 0x124
	// Line 599, Address: 0x336d68, Func Offset: 0x128
	// Line 604, Address: 0x336d74, Func Offset: 0x134
	// Line 606, Address: 0x336d8c, Func Offset: 0x14c
	// Line 607, Address: 0x336db4, Func Offset: 0x174
	// Line 608, Address: 0x336dec, Func Offset: 0x1ac
	// Line 609, Address: 0x336df8, Func Offset: 0x1b8
	// Line 613, Address: 0x336e30, Func Offset: 0x1f0
	// Line 619, Address: 0x336ebc, Func Offset: 0x27c
	// Line 622, Address: 0x336ec0, Func Offset: 0x280
	// Line 634, Address: 0x336ec8, Func Offset: 0x288
	// Line 622, Address: 0x336ecc, Func Offset: 0x28c
	// Line 634, Address: 0x336ed0, Func Offset: 0x290
	// Line 622, Address: 0x336ed4, Func Offset: 0x294
	// Line 623, Address: 0x336edc, Func Offset: 0x29c
	// Line 626, Address: 0x336ee0, Func Offset: 0x2a0
	// Line 623, Address: 0x336ee4, Func Offset: 0x2a4
	// Line 626, Address: 0x336ee8, Func Offset: 0x2a8
	// Line 627, Address: 0x336ef4, Func Offset: 0x2b4
	// Line 626, Address: 0x336ef8, Func Offset: 0x2b8
	// Line 627, Address: 0x336efc, Func Offset: 0x2bc
	// Line 634, Address: 0x336f00, Func Offset: 0x2c0
	// Line 638, Address: 0x336f10, Func Offset: 0x2d0
	// Line 639, Address: 0x336f2c, Func Offset: 0x2ec
	// Line 643, Address: 0x336f40, Func Offset: 0x300
	// Line 648, Address: 0x336f48, Func Offset: 0x308
	// Line 644, Address: 0x336f4c, Func Offset: 0x30c
	// Line 648, Address: 0x336f50, Func Offset: 0x310
	// Line 649, Address: 0x336f64, Func Offset: 0x324
	// Line 650, Address: 0x336f6c, Func Offset: 0x32c
	// Line 651, Address: 0x336f74, Func Offset: 0x334
	// Line 652, Address: 0x336f84, Func Offset: 0x344
	// Line 653, Address: 0x336f88, Func Offset: 0x348
	// Line 655, Address: 0x336f98, Func Offset: 0x358
	// Func End, Address: 0x336fb8, Func Offset: 0x378
}

// 
// Start address: 0x336fc0
_anon2* draw_one_ptcl(_anon2* pPk, PtclData* pPtcl, TexFogWork* pW, float Wld2ScrMat[4], float View2ScrMat[4])
{
	float CenterPos[4];
	float CenterScrPos[4];
	unsigned char FogCol[4];
	_anon2 AroundVtCol;
	float inv_w;
	float Ang;
	int VtNo;
	float DistAlphaRate;
	float EdgeAlphaRate;
	_anon2* pSavePk;
	_anon2* pVt1Pk;
	float ptcl_full_alpha_dist;
	float ptcl_disappear_dist;
	float MinDistXZ;
	float MinDistY;
	float Dist;
	float Axz;
	float Ay;
	float PolyCosVal;
	float PolySinVal;
	float TexCosVal;
	float TexSinVal;
	float ScrPosX;
	float ScrPosY;
	float AddS;
	float AddT;
	float Val;
	// Line 669, Address: 0x336fc0, Func Offset: 0
	// Line 684, Address: 0x336fc8, Func Offset: 0x8
	// Line 669, Address: 0x336fcc, Func Offset: 0xc
	// Line 684, Address: 0x336ff4, Func Offset: 0x34
	// Line 669, Address: 0x336ff8, Func Offset: 0x38
	// Line 681, Address: 0x336ffc, Func Offset: 0x3c
	// Line 669, Address: 0x337000, Func Offset: 0x40
	// Line 684, Address: 0x337014, Func Offset: 0x54
	// Line 685, Address: 0x337028, Func Offset: 0x68
	// Line 687, Address: 0x337058, Func Offset: 0x98
	// Line 688, Address: 0x337074, Func Offset: 0xb4
	// Line 689, Address: 0x33707c, Func Offset: 0xbc
	// Line 690, Address: 0x337080, Func Offset: 0xc0
	// Line 691, Address: 0x337088, Func Offset: 0xc8
	// Line 690, Address: 0x33708c, Func Offset: 0xcc
	// Line 691, Address: 0x337090, Func Offset: 0xd0
	// Line 690, Address: 0x337094, Func Offset: 0xd4
	// Line 691, Address: 0x337098, Func Offset: 0xd8
	// Line 693, Address: 0x3370b4, Func Offset: 0xf4
	// Line 696, Address: 0x337100, Func Offset: 0x140
	// Line 700, Address: 0x337108, Func Offset: 0x148
	// Line 702, Address: 0x337114, Func Offset: 0x154
	// Line 701, Address: 0x337118, Func Offset: 0x158
	// Line 700, Address: 0x337124, Func Offset: 0x164
	// Line 702, Address: 0x337128, Func Offset: 0x168
	// Line 704, Address: 0x337134, Func Offset: 0x174
	// Line 705, Address: 0x33714c, Func Offset: 0x18c
	// Line 707, Address: 0x33715c, Func Offset: 0x19c
	// Line 708, Address: 0x337168, Func Offset: 0x1a8
	// Line 711, Address: 0x337170, Func Offset: 0x1b0
	// Line 715, Address: 0x337190, Func Offset: 0x1d0
	// Line 721, Address: 0x337194, Func Offset: 0x1d4
	// Line 715, Address: 0x337198, Func Offset: 0x1d8
	// Line 721, Address: 0x33719c, Func Offset: 0x1dc
	// Line 715, Address: 0x3371a0, Func Offset: 0x1e0
	// Line 721, Address: 0x3371a4, Func Offset: 0x1e4
	// Line 722, Address: 0x3371c0, Func Offset: 0x200
	// Line 723, Address: 0x3371cc, Func Offset: 0x20c
	// Line 724, Address: 0x3371ec, Func Offset: 0x22c
	// Line 725, Address: 0x3371fc, Func Offset: 0x23c
	// Line 726, Address: 0x337200, Func Offset: 0x240
	// Line 727, Address: 0x337224, Func Offset: 0x264
	// Line 728, Address: 0x337230, Func Offset: 0x270
	// Line 729, Address: 0x33724c, Func Offset: 0x28c
	// Line 730, Address: 0x33725c, Func Offset: 0x29c
	// Line 732, Address: 0x337260, Func Offset: 0x2a0
	// Line 733, Address: 0x337284, Func Offset: 0x2c4
	// Line 734, Address: 0x337290, Func Offset: 0x2d0
	// Line 735, Address: 0x3372ac, Func Offset: 0x2ec
	// Line 736, Address: 0x3372bc, Func Offset: 0x2fc
	// Line 739, Address: 0x3372c0, Func Offset: 0x300
	// Line 740, Address: 0x3372e8, Func Offset: 0x328
	// Line 742, Address: 0x337300, Func Offset: 0x340
	// Line 743, Address: 0x337328, Func Offset: 0x368
	// Line 745, Address: 0x337340, Func Offset: 0x380
	// Line 746, Address: 0x337358, Func Offset: 0x398
	// Line 750, Address: 0x337360, Func Offset: 0x3a0
	// Line 751, Address: 0x337368, Func Offset: 0x3a8
	// Line 758, Address: 0x33736c, Func Offset: 0x3ac
	// Line 763, Address: 0x337380, Func Offset: 0x3c0
	// Line 770, Address: 0x337384, Func Offset: 0x3c4
	// Line 751, Address: 0x337388, Func Offset: 0x3c8
	// Line 752, Address: 0x33738c, Func Offset: 0x3cc
	// Line 753, Address: 0x337394, Func Offset: 0x3d4
	// Line 754, Address: 0x33739c, Func Offset: 0x3dc
	// Line 758, Address: 0x3373a0, Func Offset: 0x3e0
	// Line 763, Address: 0x3373a4, Func Offset: 0x3e4
	// Line 768, Address: 0x3373a8, Func Offset: 0x3e8
	// Line 764, Address: 0x3373ac, Func Offset: 0x3ec
	// Line 768, Address: 0x3373b0, Func Offset: 0x3f0
	// Line 769, Address: 0x3373b4, Func Offset: 0x3f4
	// Line 770, Address: 0x3373bc, Func Offset: 0x3fc
	// Line 774, Address: 0x3373c0, Func Offset: 0x400
	// Line 771, Address: 0x3373c4, Func Offset: 0x404
	// Line 774, Address: 0x3373c8, Func Offset: 0x408
	// Line 775, Address: 0x3373cc, Func Offset: 0x40c
	// Line 776, Address: 0x3373d4, Func Offset: 0x414
	// Line 777, Address: 0x3373dc, Func Offset: 0x41c
	// Line 778, Address: 0x3373ec, Func Offset: 0x42c
	// Line 779, Address: 0x33743c, Func Offset: 0x47c
	// Line 780, Address: 0x337448, Func Offset: 0x488
	// Line 785, Address: 0x337498, Func Offset: 0x4d8
	// Line 782, Address: 0x33749c, Func Offset: 0x4dc
	// Line 785, Address: 0x3374a0, Func Offset: 0x4e0
	// Line 790, Address: 0x3374ac, Func Offset: 0x4ec
	// Line 786, Address: 0x3374b4, Func Offset: 0x4f4
	// Line 787, Address: 0x3374b8, Func Offset: 0x4f8
	// Line 790, Address: 0x3374bc, Func Offset: 0x4fc
	// Line 794, Address: 0x3374c8, Func Offset: 0x508
	// Line 795, Address: 0x3374d8, Func Offset: 0x518
	// Line 796, Address: 0x3374e8, Func Offset: 0x528
	// Line 797, Address: 0x3374f4, Func Offset: 0x534
	// Line 802, Address: 0x3374fc, Func Offset: 0x53c
	// Line 805, Address: 0x337508, Func Offset: 0x548
	// Line 802, Address: 0x33750c, Func Offset: 0x54c
	// Line 810, Address: 0x337510, Func Offset: 0x550
	// Line 803, Address: 0x337514, Func Offset: 0x554
	// Line 805, Address: 0x337518, Func Offset: 0x558
	// Line 806, Address: 0x33751c, Func Offset: 0x55c
	// Line 807, Address: 0x33752c, Func Offset: 0x56c
	// Line 806, Address: 0x337530, Func Offset: 0x570
	// Line 807, Address: 0x337534, Func Offset: 0x574
	// Line 810, Address: 0x33754c, Func Offset: 0x58c
	// Line 813, Address: 0x337590, Func Offset: 0x5d0
	// Line 827, Address: 0x337598, Func Offset: 0x5d8
	// Line 817, Address: 0x33759c, Func Offset: 0x5dc
	// Line 819, Address: 0x3375a0, Func Offset: 0x5e0
	// Line 827, Address: 0x3375a4, Func Offset: 0x5e4
	// Line 832, Address: 0x3375a8, Func Offset: 0x5e8
	// Line 827, Address: 0x3375ac, Func Offset: 0x5ec
	// Line 832, Address: 0x3375b0, Func Offset: 0x5f0
	// Line 817, Address: 0x3375b8, Func Offset: 0x5f8
	// Line 827, Address: 0x3375bc, Func Offset: 0x5fc
	// Line 817, Address: 0x3375c0, Func Offset: 0x600
	// Line 818, Address: 0x3375c4, Func Offset: 0x604
	// Line 827, Address: 0x3375c8, Func Offset: 0x608
	// Line 818, Address: 0x3375cc, Func Offset: 0x60c
	// Line 819, Address: 0x3375d4, Func Offset: 0x614
	// Line 828, Address: 0x3375d8, Func Offset: 0x618
	// Line 823, Address: 0x3375dc, Func Offset: 0x61c
	// Line 820, Address: 0x3375e0, Func Offset: 0x620
	// Line 828, Address: 0x3375e4, Func Offset: 0x624
	// Line 823, Address: 0x3375e8, Func Offset: 0x628
	// Line 824, Address: 0x3375ec, Func Offset: 0x62c
	// Line 827, Address: 0x3375f0, Func Offset: 0x630
	// Line 828, Address: 0x3375f4, Func Offset: 0x634
	// Line 832, Address: 0x3375f8, Func Offset: 0x638
	// Line 828, Address: 0x3375fc, Func Offset: 0x63c
	// Line 832, Address: 0x337600, Func Offset: 0x640
	// Line 829, Address: 0x337604, Func Offset: 0x644
	// Line 830, Address: 0x33761c, Func Offset: 0x65c
	// Line 831, Address: 0x337620, Func Offset: 0x660
	// Line 832, Address: 0x337624, Func Offset: 0x664
	// Line 834, Address: 0x337634, Func Offset: 0x674
	// Line 835, Address: 0x33763c, Func Offset: 0x67c
	// Line 836, Address: 0x337644, Func Offset: 0x684
	// Line 837, Address: 0x33764c, Func Offset: 0x68c
	// Line 839, Address: 0x337650, Func Offset: 0x690
	// Line 840, Address: 0x337658, Func Offset: 0x698
	// Func End, Address: 0x337694, Func Offset: 0x6d4
}

