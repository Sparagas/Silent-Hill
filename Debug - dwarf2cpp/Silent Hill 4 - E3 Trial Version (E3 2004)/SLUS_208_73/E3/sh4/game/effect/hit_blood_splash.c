typedef struct HBSplash;
typedef struct _anon0;
typedef union _anon1;
typedef struct sfObj;
typedef struct HBSplashWork;
typedef union _anon2;
typedef enum _cam3Step : unsigned char;
typedef struct _cam3Work;

typedef void(*type_15)(sfObj*);
typedef void(*type_18)(sfObj*);
typedef void(*type_21)();
typedef void(*type_23)(sfObj*);
typedef void(*type_27)(sfObj*);

typedef int type_0[4];
typedef unsigned int type_1[4];
typedef void* type_2[4];
typedef short type_3[8];
typedef unsigned short type_4[8];
typedef char type_5[16];
typedef float type_6[3];
typedef unsigned char type_7[16];
typedef float type_8[4];
typedef float type_9[4];
typedef float type_10[3];
typedef float type_11[1];
typedef float type_12[3];
typedef int type_13[1];
typedef long type_14[1];
typedef char type_16[8];
typedef _anon2 type_17[256];
typedef float type_19[4][4];
typedef float type_20[4];
typedef void(*type_22)()[2];
typedef short type_24[2];
typedef unsigned short type_25[2];
typedef char type_26[4];
typedef unsigned char type_28[4];
typedef void(*type_29)(sfObj*)[3];
typedef float type_30[1];
typedef int type_31[1];
typedef long type_32[2];
typedef unsigned long type_33[2];

struct HBSplash
{
	unsigned char Step;
	unsigned char Kind;
	unsigned char VtAlpha;
	float BsPosXYZ[3];
	float BsSpdXYZ[3];
	float DirVecXYZ[3];
	float Timer;
	float MaxRadius;
	float RadiusRate;
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

struct HBSplashWork
{
	char start_chk_str[8];
	sfObj* pUseObj;
	HBSplash* DataAry;
	unsigned long Tex0;
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
HBSplashWork SplashW;
void(*sfObjFuncDummy)(sfObj*);
_cam3Work cam3_work;

void HitBloodSplash_AllocObjAndInit();
void HitBloodSplash_SetSplash(float* Pos, float* Vec, float* ChrSpd, float size);
HBSplash* get_most_needless_HBSplash(HBSplashWork* pW);
void init_HBSplash(HBSplash* pSplash, float* SplashPos, float* SplashVec, float* CharaSpd, float size);
void HitBloodSplash_CalcAll();
void HitBloodSplash_DrawAll();
int move_blood_splash(HBSplash* pSplash);
_anon1* disp_blood_splash(HBSplash* pSplash, float Wld2ScrMat[4], float View2ScrMat[4], _anon1* pPk);
_anon1* make_vert_paket_of_BLOOD(HBSplash* pSplash, float Wld2ScrMat[4], float* ScrBsPos, float* ScrRadiusLen, _anon1* pPk);
void make_edge_vertex_add_disp_xy(float* pAddScrX, float* pAddScrY, float ScrBsPosW, HBSplash* pSplash, float Wld2ScrMat[4]);

// 
// Start address: 0x2808e0
void HitBloodSplash_AllocObjAndInit()
{
	HBSplashWork* pW;
	int DataNo;
	// Line 146, Address: 0x2808e0, Func Offset: 0
	// Line 156, Address: 0x2808e4, Func Offset: 0x4
	// Line 146, Address: 0x2808e8, Func Offset: 0x8
	// Line 156, Address: 0x2808ec, Func Offset: 0xc
	// Line 146, Address: 0x2808f0, Func Offset: 0x10
	// Line 147, Address: 0x2808f4, Func Offset: 0x14
	// Line 156, Address: 0x2808fc, Func Offset: 0x1c
	// Line 158, Address: 0x280904, Func Offset: 0x24
	// Line 160, Address: 0x280924, Func Offset: 0x44
	// Line 164, Address: 0x280930, Func Offset: 0x50
	// Line 160, Address: 0x280934, Func Offset: 0x54
	// Line 164, Address: 0x280938, Func Offset: 0x58
	// Line 167, Address: 0x280948, Func Offset: 0x68
	// Line 170, Address: 0x280958, Func Offset: 0x78
	// Line 173, Address: 0x28096c, Func Offset: 0x8c
	// Line 170, Address: 0x280970, Func Offset: 0x90
	// Line 175, Address: 0x280978, Func Offset: 0x98
	// Line 177, Address: 0x2809c4, Func Offset: 0xe4
	// Func End, Address: 0x2809d4, Func Offset: 0xf4
}

// 
// Start address: 0x2809e0
void HitBloodSplash_SetSplash(float* Pos, float* Vec, float* ChrSpd, float size)
{
	HBSplash* pSplash;
	// Line 211, Address: 0x2809e0, Func Offset: 0
	// Line 217, Address: 0x2809f8, Func Offset: 0x18
	// Line 211, Address: 0x2809fc, Func Offset: 0x1c
	// Line 217, Address: 0x280a08, Func Offset: 0x28
	// Line 220, Address: 0x280a14, Func Offset: 0x34
	// Line 221, Address: 0x280a2c, Func Offset: 0x4c
	// Func End, Address: 0x280a48, Func Offset: 0x68
}

// 
// Start address: 0x280a50
HBSplash* get_most_needless_HBSplash(HBSplashWork* pW)
{
	int DataNo;
	int MaxTimer;
	HBSplash* pMaxTimerData;
	// Line 234, Address: 0x280a50, Func Offset: 0
	// Line 239, Address: 0x280a68, Func Offset: 0x18
	// Line 240, Address: 0x280a74, Func Offset: 0x24
	// Line 241, Address: 0x280a7c, Func Offset: 0x2c
	// Line 245, Address: 0x280a80, Func Offset: 0x30
	// Line 240, Address: 0x280a84, Func Offset: 0x34
	// Line 245, Address: 0x280a88, Func Offset: 0x38
	// Line 246, Address: 0x280a98, Func Offset: 0x48
	// Line 247, Address: 0x280a9c, Func Offset: 0x4c
	// Line 249, Address: 0x280aa0, Func Offset: 0x50
	// Line 251, Address: 0x280ab0, Func Offset: 0x60
	// Line 252, Address: 0x280ab8, Func Offset: 0x68
	// Func End, Address: 0x280ac0, Func Offset: 0x70
}

// 
// Start address: 0x280ac0
void init_HBSplash(HBSplash* pSplash, float* SplashPos, float* SplashVec, float* CharaSpd, float size)
{
	float DirVec[4];
	float Spd[4];
	// Line 263, Address: 0x280ac0, Func Offset: 0
	// Line 267, Address: 0x280af0, Func Offset: 0x30
	// Line 269, Address: 0x280afc, Func Offset: 0x3c
	// Line 273, Address: 0x280b00, Func Offset: 0x40
	// Line 269, Address: 0x280b04, Func Offset: 0x44
	// Line 270, Address: 0x280b08, Func Offset: 0x48
	// Line 271, Address: 0x280b10, Func Offset: 0x50
	// Line 272, Address: 0x280b18, Func Offset: 0x58
	// Line 273, Address: 0x280b1c, Func Offset: 0x5c
	// Line 274, Address: 0x280b40, Func Offset: 0x80
	// Line 276, Address: 0x280b6c, Func Offset: 0xac
	// Line 283, Address: 0x280b70, Func Offset: 0xb0
	// Line 276, Address: 0x280b78, Func Offset: 0xb8
	// Line 278, Address: 0x280b7c, Func Offset: 0xbc
	// Line 277, Address: 0x280b80, Func Offset: 0xc0
	// Line 284, Address: 0x280b84, Func Offset: 0xc4
	// Line 278, Address: 0x280b88, Func Offset: 0xc8
	// Line 284, Address: 0x280b8c, Func Offset: 0xcc
	// Line 279, Address: 0x280b90, Func Offset: 0xd0
	// Line 285, Address: 0x280b94, Func Offset: 0xd4
	// Line 292, Address: 0x280b9c, Func Offset: 0xdc
	// Line 279, Address: 0x280ba8, Func Offset: 0xe8
	// Line 280, Address: 0x280bac, Func Offset: 0xec
	// Line 293, Address: 0x280bb0, Func Offset: 0xf0
	// Line 292, Address: 0x280bb4, Func Offset: 0xf4
	// Line 293, Address: 0x280bb8, Func Offset: 0xf8
	// Line 280, Address: 0x280bbc, Func Offset: 0xfc
	// Line 281, Address: 0x280bc0, Func Offset: 0x100
	// Line 293, Address: 0x280bc4, Func Offset: 0x104
	// Line 294, Address: 0x280bc8, Func Offset: 0x108
	// Line 281, Address: 0x280bcc, Func Offset: 0x10c
	// Line 283, Address: 0x280bd0, Func Offset: 0x110
	// Line 284, Address: 0x280bec, Func Offset: 0x12c
	// Line 285, Address: 0x280c08, Func Offset: 0x148
	// Line 287, Address: 0x280c24, Func Offset: 0x164
	// Line 288, Address: 0x280c2c, Func Offset: 0x16c
	// Line 289, Address: 0x280c34, Func Offset: 0x174
	// Line 292, Address: 0x280c3c, Func Offset: 0x17c
	// Line 293, Address: 0x280c40, Func Offset: 0x180
	// Line 294, Address: 0x280c44, Func Offset: 0x184
	// Line 295, Address: 0x280c48, Func Offset: 0x188
	// Func End, Address: 0x280c68, Func Offset: 0x1a8
}

// 
// Start address: 0x280c70
void HitBloodSplash_CalcAll()
{
	int SplashNo;
	HBSplashWork* pW;
	HBSplash* pSplash;
	int end_flag;
	// Line 305, Address: 0x280c70, Func Offset: 0
	// Line 309, Address: 0x280c8c, Func Offset: 0x1c
	// Line 307, Address: 0x280c90, Func Offset: 0x20
	// Line 311, Address: 0x280c98, Func Offset: 0x28
	// Line 312, Address: 0x280c9c, Func Offset: 0x2c
	// Line 311, Address: 0x280ca0, Func Offset: 0x30
	// Line 312, Address: 0x280ca4, Func Offset: 0x34
	// Line 320, Address: 0x280cc0, Func Offset: 0x50
	// Line 321, Address: 0x280cc8, Func Offset: 0x58
	// Line 322, Address: 0x280cd0, Func Offset: 0x60
	// Line 327, Address: 0x280cd4, Func Offset: 0x64
	// Line 328, Address: 0x280ce8, Func Offset: 0x78
	// Func End, Address: 0x280d04, Func Offset: 0x94
}

// 
// Start address: 0x280d10
void HitBloodSplash_DrawAll()
{
	HBSplashWork* pW;
	float Wld2ScrMat[4][4];
	float View2ScrMat[4][4];
	_anon1* pPkTop;
	_anon1* pPk;
	int SplashNo;
	unsigned long Tex0;
	_anon0* pTex;
	unsigned int cbp;
	HBSplash* pSplash;
	int qwc;
	// Line 340, Address: 0x280d10, Func Offset: 0
	// Line 351, Address: 0x280d18, Func Offset: 0x8
	// Line 340, Address: 0x280d1c, Func Offset: 0xc
	// Line 341, Address: 0x280d24, Func Offset: 0x14
	// Line 340, Address: 0x280d28, Func Offset: 0x18
	// Line 341, Address: 0x280d2c, Func Offset: 0x1c
	// Line 340, Address: 0x280d30, Func Offset: 0x20
	// Line 351, Address: 0x280d34, Func Offset: 0x24
	// Line 352, Address: 0x280d3c, Func Offset: 0x2c
	// Line 353, Address: 0x280d44, Func Offset: 0x34
	// Line 355, Address: 0x280d88, Func Offset: 0x78
	// Line 382, Address: 0x280d94, Func Offset: 0x84
	// Line 355, Address: 0x280d98, Func Offset: 0x88
	// Line 359, Address: 0x280da8, Func Offset: 0x98
	// Line 355, Address: 0x280dac, Func Offset: 0x9c
	// Line 359, Address: 0x280db0, Func Offset: 0xa0
	// Line 360, Address: 0x280db4, Func Offset: 0xa4
	// Line 359, Address: 0x280db8, Func Offset: 0xa8
	// Line 366, Address: 0x280dbc, Func Offset: 0xac
	// Line 359, Address: 0x280dc0, Func Offset: 0xb0
	// Line 364, Address: 0x280dc8, Func Offset: 0xb8
	// Line 360, Address: 0x280dd0, Func Offset: 0xc0
	// Line 364, Address: 0x280dd4, Func Offset: 0xc4
	// Line 365, Address: 0x280dd8, Func Offset: 0xc8
	// Line 364, Address: 0x280ddc, Func Offset: 0xcc
	// Line 369, Address: 0x280de8, Func Offset: 0xd8
	// Line 364, Address: 0x280dec, Func Offset: 0xdc
	// Line 365, Address: 0x280df0, Func Offset: 0xe0
	// Line 369, Address: 0x280df4, Func Offset: 0xe4
	// Line 370, Address: 0x280dfc, Func Offset: 0xec
	// Line 373, Address: 0x280e04, Func Offset: 0xf4
	// Line 374, Address: 0x280e0c, Func Offset: 0xfc
	// Line 379, Address: 0x280e14, Func Offset: 0x104
	// Line 375, Address: 0x280e18, Func Offset: 0x108
	// Line 378, Address: 0x280e1c, Func Offset: 0x10c
	// Line 379, Address: 0x280e20, Func Offset: 0x110
	// Line 380, Address: 0x280e24, Func Offset: 0x114
	// Line 384, Address: 0x280e28, Func Offset: 0x118
	// Line 385, Address: 0x280e2c, Func Offset: 0x11c
	// Line 384, Address: 0x280e30, Func Offset: 0x120
	// Line 385, Address: 0x280e34, Func Offset: 0x124
	// Line 392, Address: 0x280e50, Func Offset: 0x140
	// Line 395, Address: 0x280e60, Func Offset: 0x150
	// Line 398, Address: 0x280e70, Func Offset: 0x160
	// Line 399, Address: 0x280e7c, Func Offset: 0x16c
	// Line 398, Address: 0x280e80, Func Offset: 0x170
	// Line 402, Address: 0x280e88, Func Offset: 0x178
	// Line 399, Address: 0x280e90, Func Offset: 0x180
	// Line 403, Address: 0x280e94, Func Offset: 0x184
	// Line 402, Address: 0x280e98, Func Offset: 0x188
	// Line 403, Address: 0x280e9c, Func Offset: 0x18c
	// Line 404, Address: 0x280ea0, Func Offset: 0x190
	// Line 407, Address: 0x280ea4, Func Offset: 0x194
	// Line 408, Address: 0x280eb8, Func Offset: 0x1a8
	// Line 409, Address: 0x280ec0, Func Offset: 0x1b0
	// Line 410, Address: 0x280ec8, Func Offset: 0x1b8
	// Line 412, Address: 0x280ed8, Func Offset: 0x1c8
	// Line 415, Address: 0x280ee8, Func Offset: 0x1d8
	// Func End, Address: 0x280f08, Func Offset: 0x1f8
}

// 
// Start address: 0x280f10
int move_blood_splash(HBSplash* pSplash)
{
	int Alpha;
	// Line 424, Address: 0x280f10, Func Offset: 0
	// Line 427, Address: 0x280f1c, Func Offset: 0xc
	// Line 430, Address: 0x280f28, Func Offset: 0x18
	// Line 427, Address: 0x280f38, Func Offset: 0x28
	// Line 430, Address: 0x280f3c, Func Offset: 0x2c
	// Line 431, Address: 0x280f48, Func Offset: 0x38
	// Line 436, Address: 0x280f50, Func Offset: 0x40
	// Line 439, Address: 0x280f6c, Func Offset: 0x5c
	// Line 442, Address: 0x280f78, Func Offset: 0x68
	// Line 444, Address: 0x280fa8, Func Offset: 0x98
	// Line 445, Address: 0x280fb8, Func Offset: 0xa8
	// Line 446, Address: 0x280fbc, Func Offset: 0xac
	// Line 448, Address: 0x280fc0, Func Offset: 0xb0
	// Line 451, Address: 0x280ff8, Func Offset: 0xe8
	// Line 452, Address: 0x281010, Func Offset: 0x100
	// Line 453, Address: 0x281038, Func Offset: 0x128
	// Line 455, Address: 0x281050, Func Offset: 0x140
	// Line 457, Address: 0x28106c, Func Offset: 0x15c
	// Line 458, Address: 0x281084, Func Offset: 0x174
	// Line 459, Address: 0x28109c, Func Offset: 0x18c
	// Line 460, Address: 0x2810a8, Func Offset: 0x198
	// Line 459, Address: 0x2810ac, Func Offset: 0x19c
	// Line 460, Address: 0x2810bc, Func Offset: 0x1ac
	// Line 461, Address: 0x2810c0, Func Offset: 0x1b0
	// Func End, Address: 0x2810d0, Func Offset: 0x1c0
}

// 
// Start address: 0x2810d0
_anon1* disp_blood_splash(HBSplash* pSplash, float Wld2ScrMat[4], float View2ScrMat[4], _anon1* pPk)
{
	HBSplashWork* pW;
	float ScrBsPos[4];
	float ScrRadiusLen[4];
	float inv_ScrBsW;
	float Pos[4];
	// Line 472, Address: 0x2810d0, Func Offset: 0
	// Line 484, Address: 0x2810dc, Func Offset: 0xc
	// Line 481, Address: 0x2810e0, Func Offset: 0x10
	// Line 485, Address: 0x2810e4, Func Offset: 0x14
	// Line 481, Address: 0x2810ec, Func Offset: 0x1c
	// Line 482, Address: 0x2810f0, Func Offset: 0x20
	// Line 483, Address: 0x2810f8, Func Offset: 0x28
	// Line 484, Address: 0x281100, Func Offset: 0x30
	// Line 485, Address: 0x281104, Func Offset: 0x34
	// Line 486, Address: 0x28112c, Func Offset: 0x5c
	// Line 487, Address: 0x281148, Func Offset: 0x78
	// Line 489, Address: 0x281150, Func Offset: 0x80
	// Line 490, Address: 0x281158, Func Offset: 0x88
	// Line 489, Address: 0x28115c, Func Offset: 0x8c
	// Line 490, Address: 0x281160, Func Offset: 0x90
	// Line 489, Address: 0x281164, Func Offset: 0x94
	// Line 490, Address: 0x281168, Func Offset: 0x98
	// Line 492, Address: 0x281184, Func Offset: 0xb4
	// Line 495, Address: 0x2811d0, Func Offset: 0x100
	// Line 509, Address: 0x2811d8, Func Offset: 0x108
	// Line 501, Address: 0x2811dc, Func Offset: 0x10c
	// Line 502, Address: 0x2811f8, Func Offset: 0x128
	// Line 509, Address: 0x281208, Func Offset: 0x138
	// Line 503, Address: 0x28120c, Func Offset: 0x13c
	// Line 504, Address: 0x281210, Func Offset: 0x140
	// Line 502, Address: 0x281214, Func Offset: 0x144
	// Line 509, Address: 0x28121c, Func Offset: 0x14c
	// Line 512, Address: 0x281224, Func Offset: 0x154
	// Line 513, Address: 0x281228, Func Offset: 0x158
	// Func End, Address: 0x281234, Func Offset: 0x164
}

// 
// Start address: 0x281240
_anon1* make_vert_paket_of_BLOOD(HBSplash* pSplash, float Wld2ScrMat[4], float* ScrBsPos, float* ScrRadiusLen, _anon1* pPk)
{
	int VtNo;
	float EdgeAddScrX;
	float EdgeAddScrY;
	int Red;
	int Green;
	int Blue;
	float TexS;
	float TexT;
	float sx;
	float sy;
	// Line 526, Address: 0x281240, Func Offset: 0
	// Line 534, Address: 0x281270, Func Offset: 0x30
	// Line 537, Address: 0x28128c, Func Offset: 0x4c
	// Line 538, Address: 0x281298, Func Offset: 0x58
	// Line 537, Address: 0x28129c, Func Offset: 0x5c
	// Line 542, Address: 0x2812a4, Func Offset: 0x64
	// Line 538, Address: 0x2812ac, Func Offset: 0x6c
	// Line 542, Address: 0x2812b0, Func Offset: 0x70
	// Line 543, Address: 0x2812b8, Func Offset: 0x78
	// Line 542, Address: 0x2812bc, Func Offset: 0x7c
	// Line 543, Address: 0x2812c0, Func Offset: 0x80
	// Line 547, Address: 0x2812c4, Func Offset: 0x84
	// Line 549, Address: 0x2812f8, Func Offset: 0xb8
	// Line 550, Address: 0x281308, Func Offset: 0xc8
	// Line 551, Address: 0x281318, Func Offset: 0xd8
	// Line 552, Address: 0x281324, Func Offset: 0xe4
	// Line 559, Address: 0x281328, Func Offset: 0xe8
	// Line 566, Address: 0x281338, Func Offset: 0xf8
	// Line 559, Address: 0x28133c, Func Offset: 0xfc
	// Line 563, Address: 0x281340, Func Offset: 0x100
	// Line 559, Address: 0x281344, Func Offset: 0x104
	// Line 563, Address: 0x281348, Func Offset: 0x108
	// Line 564, Address: 0x28134c, Func Offset: 0x10c
	// Line 620, Address: 0x281350, Func Offset: 0x110
	// Line 571, Address: 0x28135c, Func Offset: 0x11c
	// Line 620, Address: 0x281360, Func Offset: 0x120
	// Line 571, Address: 0x281364, Func Offset: 0x124
	// Line 622, Address: 0x281368, Func Offset: 0x128
	// Line 600, Address: 0x28136c, Func Offset: 0x12c
	// Line 622, Address: 0x281370, Func Offset: 0x130
	// Line 601, Address: 0x281374, Func Offset: 0x134
	// Line 622, Address: 0x281378, Func Offset: 0x138
	// Line 594, Address: 0x28137c, Func Offset: 0x13c
	// Line 589, Address: 0x281380, Func Offset: 0x140
	// Line 575, Address: 0x281384, Func Offset: 0x144
	// Line 576, Address: 0x281388, Func Offset: 0x148
	// Line 609, Address: 0x28138c, Func Offset: 0x14c
	// Line 620, Address: 0x281390, Func Offset: 0x150
	// Line 566, Address: 0x281394, Func Offset: 0x154
	// Line 571, Address: 0x281398, Func Offset: 0x158
	// Line 574, Address: 0x2813b4, Func Offset: 0x174
	// Line 578, Address: 0x2813b8, Func Offset: 0x178
	// Line 575, Address: 0x2813bc, Func Offset: 0x17c
	// Line 576, Address: 0x2813c0, Func Offset: 0x180
	// Line 579, Address: 0x2813c4, Func Offset: 0x184
	// Line 581, Address: 0x2813cc, Func Offset: 0x18c
	// Line 585, Address: 0x2813d0, Func Offset: 0x190
	// Line 584, Address: 0x2813d8, Func Offset: 0x198
	// Line 585, Address: 0x2813e0, Func Offset: 0x1a0
	// Line 582, Address: 0x2813e4, Func Offset: 0x1a4
	// Line 583, Address: 0x2813e8, Func Offset: 0x1a8
	// Line 585, Address: 0x2813ec, Func Offset: 0x1ac
	// Line 584, Address: 0x2813f0, Func Offset: 0x1b0
	// Line 586, Address: 0x2813f4, Func Offset: 0x1b4
	// Line 587, Address: 0x2813fc, Func Offset: 0x1bc
	// Line 590, Address: 0x281400, Func Offset: 0x1c0
	// Line 591, Address: 0x28140c, Func Offset: 0x1cc
	// Line 588, Address: 0x281414, Func Offset: 0x1d4
	// Line 589, Address: 0x281418, Func Offset: 0x1d8
	// Line 590, Address: 0x28141c, Func Offset: 0x1dc
	// Line 592, Address: 0x281424, Func Offset: 0x1e4
	// Line 593, Address: 0x28142c, Func Offset: 0x1ec
	// Line 597, Address: 0x281430, Func Offset: 0x1f0
	// Line 596, Address: 0x281438, Func Offset: 0x1f8
	// Line 597, Address: 0x281440, Func Offset: 0x200
	// Line 594, Address: 0x281444, Func Offset: 0x204
	// Line 595, Address: 0x281448, Func Offset: 0x208
	// Line 597, Address: 0x28144c, Func Offset: 0x20c
	// Line 596, Address: 0x281450, Func Offset: 0x210
	// Line 598, Address: 0x281454, Func Offset: 0x214
	// Line 599, Address: 0x28145c, Func Offset: 0x21c
	// Line 602, Address: 0x281460, Func Offset: 0x220
	// Line 603, Address: 0x28146c, Func Offset: 0x22c
	// Line 600, Address: 0x281474, Func Offset: 0x234
	// Line 601, Address: 0x281478, Func Offset: 0x238
	// Line 602, Address: 0x28147c, Func Offset: 0x23c
	// Line 603, Address: 0x281484, Func Offset: 0x244
	// Line 607, Address: 0x281488, Func Offset: 0x248
	// Line 608, Address: 0x28148c, Func Offset: 0x24c
	// Line 609, Address: 0x281490, Func Offset: 0x250
	// Line 620, Address: 0x281494, Func Offset: 0x254
	// Line 613, Address: 0x281498, Func Offset: 0x258
	// Line 614, Address: 0x28149c, Func Offset: 0x25c
	// Line 615, Address: 0x2814a0, Func Offset: 0x260
	// Line 616, Address: 0x2814a4, Func Offset: 0x264
	// Line 620, Address: 0x2814a8, Func Offset: 0x268
	// Line 616, Address: 0x2814ac, Func Offset: 0x26c
	// Line 620, Address: 0x2814b0, Func Offset: 0x270
	// Line 621, Address: 0x2814dc, Func Offset: 0x29c
	// Line 622, Address: 0x281514, Func Offset: 0x2d4
	// Line 630, Address: 0x281550, Func Offset: 0x310
	// Line 623, Address: 0x281554, Func Offset: 0x314
	// Line 630, Address: 0x281558, Func Offset: 0x318
	// Line 632, Address: 0x281564, Func Offset: 0x324
	// Line 633, Address: 0x281568, Func Offset: 0x328
	// Func End, Address: 0x281590, Func Offset: 0x350
}

// 
// Start address: 0x281590
void make_edge_vertex_add_disp_xy(float* pAddScrX, float* pAddScrY, float ScrBsPosW, HBSplash* pSplash, float Wld2ScrMat[4])
{
	float ScrDirVec[4];
	float Vec[4];
	float VecMul;
	// Line 655, Address: 0x281590, Func Offset: 0
	// Line 648, Address: 0x281594, Func Offset: 0x4
	// Line 660, Address: 0x281598, Func Offset: 0x8
	// Line 655, Address: 0x2815a0, Func Offset: 0x10
	// Line 656, Address: 0x2815a4, Func Offset: 0x14
	// Line 657, Address: 0x2815ac, Func Offset: 0x1c
	// Line 658, Address: 0x2815b4, Func Offset: 0x24
	// Line 660, Address: 0x2815b8, Func Offset: 0x28
	// Line 661, Address: 0x2815e0, Func Offset: 0x50
	// Line 662, Address: 0x2815e8, Func Offset: 0x58
	// Line 661, Address: 0x2815ec, Func Offset: 0x5c
	// Line 662, Address: 0x2815f0, Func Offset: 0x60
	// Line 661, Address: 0x2815f4, Func Offset: 0x64
	// Line 662, Address: 0x2815fc, Func Offset: 0x6c
	// Line 664, Address: 0x281614, Func Offset: 0x84
	// Line 665, Address: 0x28161c, Func Offset: 0x8c
	// Line 666, Address: 0x281624, Func Offset: 0x94
	// Func End, Address: 0x28162c, Func Offset: 0x9c
}

