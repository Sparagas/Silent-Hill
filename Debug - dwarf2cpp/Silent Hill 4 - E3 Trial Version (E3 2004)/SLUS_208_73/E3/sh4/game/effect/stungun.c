typedef struct _anon0;
typedef union _anon1;
typedef struct StungunObjData;
typedef struct StungunWork;
typedef struct sfObj;
typedef struct _anon2;
typedef union _anon3;
typedef enum _cam3Step : unsigned char;
typedef struct _cam3Work;

typedef void(*type_0)(sfObj*);
typedef void(*type_17)(sfObj*);
typedef void(*type_18)(sfObj*);
typedef void(*type_20)(sfObj*);
typedef void(*type_21)();
typedef void(*type_29)(sfObj*);

typedef void(*type_1)(sfObj*)[3];
typedef int type_2[4];
typedef unsigned int type_3[4];
typedef void* type_4[4];
typedef short type_5[8];
typedef unsigned short type_6[8];
typedef char type_7[16];
typedef unsigned char type_8[16];
typedef float type_9[4];
typedef float type_10[1];
typedef int type_11[1];
typedef long type_12[1];
typedef float type_13[4];
typedef float type_14[4][4];
typedef StungunWork type_15[2];
typedef float type_16[4];
typedef _anon3 type_19[256];
typedef short type_22[2];
typedef void(*type_23)()[2];
typedef unsigned short type_24[2];
typedef char type_25[4];
typedef unsigned char type_26[4];
typedef float type_27[1];
typedef int type_28[1];
typedef long type_30[2];
typedef unsigned long type_31[2];

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

struct StungunObjData
{
	_anon2 SparkLine;
	unsigned int SparkDrawFlag;
};

struct StungunWork
{
	sfObj* pUseObj;
};

struct sfObj
{
	_anon3 fwork[256];
	_anon3* work;
	void(*func)(sfObj*);
	_anon3* work_pt0;
	_anon3* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon3* sys_work;
	_anon3* scene_work;
	_anon3* event_work;
	_anon3* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct _anon2
{
	float start[4];
	float end[4];
};

union _anon3
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
void(*draw_stungun_func)(sfObj*);
void(*calc_stungun_func)(sfObj*);
StungunWork sgW[2];
_cam3Work cam3_work;

void Stungun_SceneInit(int DemoFlag);
void Stungun_SparkSet(int DemoFlag);
void calc_stungun_func();
void draw_stungun_func(sfObj* pObj);
_anon1* mk_line_packet(_anon1* pPk, StungunObjData* pDt, float BrRate, float Wld2ScrMat[4]);
_anon1* mk_glow_packet(_anon1* pPk, StungunObjData* pDt, float BrRate, float Wld2ViewMat[4], float View2ScrMat[4]);

// 
// Start address: 0x338160
void Stungun_SceneInit(int DemoFlag)
{
	StungunWork* pW;
	// Line 85, Address: 0x338160, Func Offset: 0
	// Line 86, Address: 0x338164, Func Offset: 0x4
	// Line 85, Address: 0x338168, Func Offset: 0x8
	// Line 86, Address: 0x33816c, Func Offset: 0xc
	// Line 85, Address: 0x338170, Func Offset: 0x10
	// Line 89, Address: 0x338174, Func Offset: 0x14
	// Line 85, Address: 0x33817c, Func Offset: 0x1c
	// Line 86, Address: 0x338180, Func Offset: 0x20
	// Line 89, Address: 0x338184, Func Offset: 0x24
	// Line 86, Address: 0x338188, Func Offset: 0x28
	// Line 89, Address: 0x338190, Func Offset: 0x30
	// Line 90, Address: 0x338198, Func Offset: 0x38
	// Line 91, Address: 0x3381a8, Func Offset: 0x48
	// Line 97, Address: 0x3381b0, Func Offset: 0x50
	// Line 98, Address: 0x3381b8, Func Offset: 0x58
	// Line 99, Address: 0x3381c4, Func Offset: 0x64
	// Line 100, Address: 0x3381d4, Func Offset: 0x74
	// Line 101, Address: 0x3381dc, Func Offset: 0x7c
	// Line 105, Address: 0x3381e8, Func Offset: 0x88
	// Line 106, Address: 0x3381fc, Func Offset: 0x9c
	// Func End, Address: 0x338214, Func Offset: 0xb4
}

// 
// Start address: 0x338220
void Stungun_SparkSet(int DemoFlag)
{
	_anon2 SparkLine;
	StungunObjData* pDt;
	// Line 117, Address: 0x338220, Func Offset: 0
	// Line 116, Address: 0x338224, Func Offset: 0x4
	// Line 117, Address: 0x33822c, Func Offset: 0xc
	// Line 116, Address: 0x338230, Func Offset: 0x10
	// Line 117, Address: 0x338238, Func Offset: 0x18
	// Line 118, Address: 0x338244, Func Offset: 0x24
	// Line 116, Address: 0x338248, Func Offset: 0x28
	// Line 117, Address: 0x338250, Func Offset: 0x30
	// Line 118, Address: 0x338258, Func Offset: 0x38
	// Line 119, Address: 0x33825c, Func Offset: 0x3c
	// Line 120, Address: 0x338264, Func Offset: 0x44
	// Line 121, Address: 0x338270, Func Offset: 0x50
	// Line 122, Address: 0x33827c, Func Offset: 0x5c
	// Func End, Address: 0x338284, Func Offset: 0x64
}

// 
// Start address: 0x338290
void calc_stungun_func()
{
	// Line 137, Address: 0x338290, Func Offset: 0
	// Func End, Address: 0x338298, Func Offset: 0x8
}

// 
// Start address: 0x3382a0
void draw_stungun_func(sfObj* pObj)
{
	StungunObjData* pDt;
	float BrRate;
	float Wld2ScrMat[4][4];
	float Wld2ViewMat[4][4];
	float View2ScrMat[4][4];
	_anon1* pPkTop;
	_anon1* pPk;
	unsigned long Tex0;
	_anon0* pTex;
	unsigned int cbp;
	_anon1* pSavePk;
	int qwc;
	// Line 141, Address: 0x3382a0, Func Offset: 0
	// Line 143, Address: 0x3382b8, Func Offset: 0x18
	// Line 151, Address: 0x3382d4, Func Offset: 0x34
	// Line 143, Address: 0x3382d8, Func Offset: 0x38
	// Line 151, Address: 0x3382e4, Func Offset: 0x44
	// Line 158, Address: 0x3382ec, Func Offset: 0x4c
	// Line 159, Address: 0x3382f8, Func Offset: 0x58
	// Line 160, Address: 0x338300, Func Offset: 0x60
	// Line 165, Address: 0x338308, Func Offset: 0x68
	// Line 167, Address: 0x33831c, Func Offset: 0x7c
	// Line 168, Address: 0x33832c, Func Offset: 0x8c
	// Line 173, Address: 0x33834c, Func Offset: 0xac
	// Line 174, Address: 0x338358, Func Offset: 0xb8
	// Line 173, Address: 0x33835c, Func Offset: 0xbc
	// Line 174, Address: 0x338368, Func Offset: 0xc8
	// Line 173, Address: 0x338370, Func Offset: 0xd0
	// Line 174, Address: 0x338374, Func Offset: 0xd4
	// Line 176, Address: 0x338380, Func Offset: 0xe0
	// Line 178, Address: 0x338384, Func Offset: 0xe4
	// Line 184, Address: 0x338398, Func Offset: 0xf8
	// Line 188, Address: 0x3383c0, Func Offset: 0x120
	// Line 193, Address: 0x3383c4, Func Offset: 0x124
	// Line 188, Address: 0x3383c8, Func Offset: 0x128
	// Line 193, Address: 0x3383cc, Func Offset: 0x12c
	// Line 189, Address: 0x3383d0, Func Offset: 0x130
	// Line 193, Address: 0x3383d4, Func Offset: 0x134
	// Line 194, Address: 0x3383e4, Func Offset: 0x144
	// Line 195, Address: 0x3383ec, Func Offset: 0x14c
	// Line 196, Address: 0x3383f4, Func Offset: 0x154
	// Line 197, Address: 0x338404, Func Offset: 0x164
	// Line 198, Address: 0x338408, Func Offset: 0x168
	// Line 200, Address: 0x338418, Func Offset: 0x178
	// Func End, Address: 0x338434, Func Offset: 0x194
}

// 
// Start address: 0x338440
_anon1* mk_line_packet(_anon1* pPk, StungunObjData* pDt, float BrRate, float Wld2ScrMat[4])
{
	int VtNo;
	float RandVal;
	_anon1* pSavePk;
	float ScrPos[4];
	float inv_w;
	// Line 211, Address: 0x338440, Func Offset: 0
	// Line 213, Address: 0x338464, Func Offset: 0x24
	// Line 218, Address: 0x33846c, Func Offset: 0x2c
	// Line 214, Address: 0x338478, Func Offset: 0x38
	// Line 218, Address: 0x33847c, Func Offset: 0x3c
	// Line 226, Address: 0x338480, Func Offset: 0x40
	// Line 218, Address: 0x338484, Func Offset: 0x44
	// Line 223, Address: 0x338488, Func Offset: 0x48
	// Line 218, Address: 0x33848c, Func Offset: 0x4c
	// Line 226, Address: 0x338490, Func Offset: 0x50
	// Line 223, Address: 0x338494, Func Offset: 0x54
	// Line 226, Address: 0x338498, Func Offset: 0x58
	// Line 224, Address: 0x3384a0, Func Offset: 0x60
	// Line 226, Address: 0x3384a4, Func Offset: 0x64
	// Line 230, Address: 0x338558, Func Offset: 0x118
	// Line 231, Address: 0x338560, Func Offset: 0x120
	// Line 232, Address: 0x338584, Func Offset: 0x144
	// Line 233, Address: 0x338590, Func Offset: 0x150
	// Line 235, Address: 0x3385b8, Func Offset: 0x178
	// Line 236, Address: 0x3385c8, Func Offset: 0x188
	// Line 238, Address: 0x3385d0, Func Offset: 0x190
	// Line 239, Address: 0x3385d8, Func Offset: 0x198
	// Line 241, Address: 0x3385f4, Func Offset: 0x1b4
	// Line 244, Address: 0x338630, Func Offset: 0x1f0
	// Line 248, Address: 0x338638, Func Offset: 0x1f8
	// Line 251, Address: 0x338640, Func Offset: 0x200
	// Line 253, Address: 0x338644, Func Offset: 0x204
	// Line 254, Address: 0x33864c, Func Offset: 0x20c
	// Line 255, Address: 0x338650, Func Offset: 0x210
	// Line 256, Address: 0x338654, Func Offset: 0x214
	// Line 259, Address: 0x338658, Func Offset: 0x218
	// Line 261, Address: 0x33865c, Func Offset: 0x21c
	// Line 262, Address: 0x338660, Func Offset: 0x220
	// Line 263, Address: 0x338664, Func Offset: 0x224
	// Line 264, Address: 0x338668, Func Offset: 0x228
	// Line 265, Address: 0x33866c, Func Offset: 0x22c
	// Line 267, Address: 0x338670, Func Offset: 0x230
	// Line 270, Address: 0x33867c, Func Offset: 0x23c
	// Line 268, Address: 0x338680, Func Offset: 0x240
	// Line 269, Address: 0x338684, Func Offset: 0x244
	// Line 270, Address: 0x338688, Func Offset: 0x248
	// Line 271, Address: 0x338694, Func Offset: 0x254
	// Line 272, Address: 0x338698, Func Offset: 0x258
	// Func End, Address: 0x3386b4, Func Offset: 0x274
}

// 
// Start address: 0x3386c0
_anon1* mk_glow_packet(_anon1* pPk, StungunObjData* pDt, float BrRate, float Wld2ViewMat[4], float View2ScrMat[4])
{
	int VtNo;
	_anon1* pSavePk;
	float CenterViewPos[4];
	float Pos[4];
	float Vec[4];
	float inv_w;
	float Radius;
	float Ang;
	float ViewPos[4];
	float ScrPos[4];
	float CosVal;
	float SinVal;
	// Line 284, Address: 0x3386c0, Func Offset: 0
	// Line 291, Address: 0x3386c4, Func Offset: 0x4
	// Line 284, Address: 0x3386c8, Func Offset: 0x8
	// Line 291, Address: 0x3386cc, Func Offset: 0xc
	// Line 284, Address: 0x3386d0, Func Offset: 0x10
	// Line 291, Address: 0x3386d8, Func Offset: 0x18
	// Line 284, Address: 0x3386dc, Func Offset: 0x1c
	// Line 291, Address: 0x3386e0, Func Offset: 0x20
	// Line 284, Address: 0x3386e4, Func Offset: 0x24
	// Line 286, Address: 0x338708, Func Offset: 0x48
	// Line 291, Address: 0x33870c, Func Offset: 0x4c
	// Line 284, Address: 0x338710, Func Offset: 0x50
	// Line 291, Address: 0x338718, Func Offset: 0x58
	// Line 292, Address: 0x33871c, Func Offset: 0x5c
	// Line 295, Address: 0x338728, Func Offset: 0x68
	// Line 292, Address: 0x33872c, Func Offset: 0x6c
	// Line 295, Address: 0x338734, Func Offset: 0x74
	// Line 292, Address: 0x33873c, Func Offset: 0x7c
	// Line 295, Address: 0x338740, Func Offset: 0x80
	// Line 296, Address: 0x33875c, Func Offset: 0x9c
	// Line 297, Address: 0x338788, Func Offset: 0xc8
	// Line 298, Address: 0x3387a8, Func Offset: 0xe8
	// Line 299, Address: 0x3387b0, Func Offset: 0xf0
	// Line 298, Address: 0x3387b8, Func Offset: 0xf8
	// Line 299, Address: 0x3387bc, Func Offset: 0xfc
	// Line 302, Address: 0x3387e4, Func Offset: 0x124
	// Line 303, Address: 0x338800, Func Offset: 0x140
	// Line 311, Address: 0x338808, Func Offset: 0x148
	// Line 305, Address: 0x33880c, Func Offset: 0x14c
	// Line 311, Address: 0x338810, Func Offset: 0x150
	// Line 319, Address: 0x338818, Func Offset: 0x158
	// Line 311, Address: 0x33881c, Func Offset: 0x15c
	// Line 316, Address: 0x338824, Func Offset: 0x164
	// Line 311, Address: 0x338828, Func Offset: 0x168
	// Line 316, Address: 0x33882c, Func Offset: 0x16c
	// Line 319, Address: 0x338830, Func Offset: 0x170
	// Line 323, Address: 0x338838, Func Offset: 0x178
	// Line 324, Address: 0x338844, Func Offset: 0x184
	// Line 327, Address: 0x33884c, Func Offset: 0x18c
	// Line 328, Address: 0x338850, Func Offset: 0x190
	// Line 325, Address: 0x338854, Func Offset: 0x194
	// Line 329, Address: 0x338858, Func Offset: 0x198
	// Line 325, Address: 0x33885c, Func Offset: 0x19c
	// Line 329, Address: 0x338860, Func Offset: 0x1a0
	// Line 327, Address: 0x338864, Func Offset: 0x1a4
	// Line 325, Address: 0x338868, Func Offset: 0x1a8
	// Line 328, Address: 0x33886c, Func Offset: 0x1ac
	// Line 326, Address: 0x338870, Func Offset: 0x1b0
	// Line 325, Address: 0x33887c, Func Offset: 0x1bc
	// Line 326, Address: 0x338880, Func Offset: 0x1c0
	// Line 328, Address: 0x338884, Func Offset: 0x1c4
	// Line 329, Address: 0x338888, Func Offset: 0x1c8
	// Line 330, Address: 0x3388b0, Func Offset: 0x1f0
	// Line 332, Address: 0x3388d4, Func Offset: 0x214
	// Line 335, Address: 0x338920, Func Offset: 0x260
	// Line 339, Address: 0x338928, Func Offset: 0x268
	// Line 341, Address: 0x33894c, Func Offset: 0x28c
	// Line 342, Address: 0x338950, Func Offset: 0x290
	// Line 343, Address: 0x338958, Func Offset: 0x298
	// Line 342, Address: 0x33895c, Func Offset: 0x29c
	// Line 343, Address: 0x338960, Func Offset: 0x2a0
	// Line 344, Address: 0x338964, Func Offset: 0x2a4
	// Line 345, Address: 0x33896c, Func Offset: 0x2ac
	// Line 346, Address: 0x338970, Func Offset: 0x2b0
	// Line 347, Address: 0x338978, Func Offset: 0x2b8
	// Line 346, Address: 0x33897c, Func Offset: 0x2bc
	// Line 347, Address: 0x338980, Func Offset: 0x2c0
	// Line 348, Address: 0x338984, Func Offset: 0x2c4
	// Line 349, Address: 0x33898c, Func Offset: 0x2cc
	// Line 350, Address: 0x338990, Func Offset: 0x2d0
	// Line 351, Address: 0x338998, Func Offset: 0x2d8
	// Line 350, Address: 0x33899c, Func Offset: 0x2dc
	// Line 351, Address: 0x3389a0, Func Offset: 0x2e0
	// Line 352, Address: 0x3389a4, Func Offset: 0x2e4
	// Line 353, Address: 0x3389ac, Func Offset: 0x2ec
	// Line 354, Address: 0x3389b0, Func Offset: 0x2f0
	// Line 355, Address: 0x3389b8, Func Offset: 0x2f8
	// Line 354, Address: 0x3389bc, Func Offset: 0x2fc
	// Line 355, Address: 0x3389c0, Func Offset: 0x300
	// Line 358, Address: 0x3389c8, Func Offset: 0x308
	// Line 361, Address: 0x3389cc, Func Offset: 0x30c
	// Line 362, Address: 0x3389d0, Func Offset: 0x310
	// Line 361, Address: 0x3389d4, Func Offset: 0x314
	// Line 362, Address: 0x3389d8, Func Offset: 0x318
	// Line 363, Address: 0x3389dc, Func Offset: 0x31c
	// Line 364, Address: 0x3389e0, Func Offset: 0x320
	// Line 363, Address: 0x3389e4, Func Offset: 0x324
	// Line 364, Address: 0x3389e8, Func Offset: 0x328
	// Line 368, Address: 0x3389ec, Func Offset: 0x32c
	// Line 364, Address: 0x3389f0, Func Offset: 0x330
	// Line 365, Address: 0x338a18, Func Offset: 0x358
	// Line 368, Address: 0x338a1c, Func Offset: 0x35c
	// Line 371, Address: 0x338a28, Func Offset: 0x368
	// Line 369, Address: 0x338a40, Func Offset: 0x380
	// Line 370, Address: 0x338a44, Func Offset: 0x384
	// Line 371, Address: 0x338a48, Func Offset: 0x388
	// Line 372, Address: 0x338a54, Func Offset: 0x394
	// Line 373, Address: 0x338a58, Func Offset: 0x398
	// Func End, Address: 0x338a8c, Func Offset: 0x3cc
}

