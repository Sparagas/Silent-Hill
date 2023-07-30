typedef struct LastPoolSurface_PoolParam;
typedef struct sfObj;
typedef union _anon0;
typedef struct PoolVert;
typedef struct _anon1;
typedef struct ObjData;
typedef struct LightInfo;
typedef struct PoolSurfaceWork;
typedef struct PoolRadialLine;
typedef union _anon2;
typedef struct PoolRadialData;

typedef void(*type_14)(sfObj*);
typedef void(*type_19)(sfObj*);
typedef void(*type_29)(sfObj*);
typedef void(*type_30)(sfObj*);

typedef int type_0[4];
typedef unsigned int type_1[4];
typedef PoolRadialData type_2[14];
typedef void* type_3[4];
typedef short type_4[8];
typedef unsigned short type_5[8];
typedef char type_6[16];
typedef unsigned char type_7[16];
typedef float type_8[4];
typedef float type_9[1];
typedef int type_10[1];
typedef long type_11[1];
typedef PoolVert type_12[14];
typedef _anon2 type_13[256];
typedef PoolRadialLine type_15[16];
typedef LightInfo type_16[2];
typedef PoolSurfaceWork type_17[2];
typedef float type_18[14];
typedef short type_20[2];
typedef unsigned short type_21[2];
typedef float type_22[4];
typedef char type_23[4];
typedef float type_24[4][4];
typedef unsigned char type_25[4];
typedef float type_26[1];
typedef int type_27[1];
typedef float type_28[4];
typedef long type_31[2];
typedef unsigned long type_32[2];

struct LastPoolSurface_PoolParam
{
	float BloodSpreadRate;
	float RingRadius;
	float RingSinkDir;
	float SplashRate;
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

struct PoolVert
{
	float Pos[4];
	float RDist;
	float BasicWaveAng;
	float RingWaveAng;
	float RingWaveOfsSpdY;
	float RgbRate;
	float RefRate;
	float blood_vs;
	float blood_vt;
	float ref_vs;
	float ref_vt;
	float mul_q;
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

struct ObjData
{
	LastPoolSurface_PoolParam PoolPrm;
	PoolSurfaceWork* pUseW;
};

struct LightInfo
{
	float RevYPos[4];
	float LightPow;
};

struct PoolSurfaceWork
{
	float CenterPos[4];
	int BloodSpreadFlag;
	int CalcDrawOnFlag;
	PoolRadialLine DirLineAry[16];
};

struct PoolRadialLine
{
	PoolVert VertAry[14];
	float AngY;
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

struct PoolRadialData
{
	float Radius;
	float TexT;
	float RingWaveHalfAmp;
	float RingWaveOmega;
};

float PoolVtNo2TexT_Data[14];
PoolRadialData PoolRadialDataAry[14];
LightInfo LightInfoAry[2];
PoolSurfaceWork psW[2];
void(*LastPoolSurface_Draw)(sfObj*);
void(*LastPoolSurface_Calc)(sfObj*);

float make_refrect_rate(float* VtPos, float* CamPos);
sfObj* LastPoolSurface_Init(LastPoolSurface_PoolParam* pInputPoolPrm, float* CenterPos, unsigned int DemoFlag);
void set_all_surface_work_member(PoolSurfaceWork* pW, float* CenterPos, unsigned int ClearWaveFlag);
void LastPoolSurface_Stop(unsigned int DemoFlag);
void LastPoolSurface_Start(unsigned int DemoFlag);
void LastPoolSurface_Renewal(sfObj* pObj, LastPoolSurface_PoolParam* pInputPoolPrm);
void LastPoolSurface_Calc(sfObj* pObj);
void LastPoolSurface_Draw(sfObj* pObj);
_anon0* make_last_pool_surface_packet(int RefModeFlag, int EOP_Flag, _anon0* pPk, PoolSurfaceWork* pW, float Wld2ScrMat[4], unsigned long ClampReg, unsigned long AlphaReg);

// 
// Start address: 0x1ed3f90
float make_refrect_rate(float* VtPos, float* CamPos)
{
	int LtNo;
	float TotalPow;
	float C2VertDir[4];
	float C2LightDir[4];
	LightInfo* pInfo;
	float dist;
	float ref_rate;
	float ang_rate;
	float dist_rate;
	float dot_val;
	float th_cos_val;
	// Line 31, Address: 0x1ed3f90, Func Offset: 0
	// Func End, Address: 0x1ed3f98, Func Offset: 0x8
	// Line 56, Address: 0x1ed3f90, Func Offset: 0
	// Func End, Address: 0x1ed3fa0, Func Offset: 0x10
	// Line 45, Address: 0x1ed3f90, Func Offset: 0
	// Line 48, Address: 0x1ed3f94, Func Offset: 0x4
	// Line 45, Address: 0x1ed3f98, Func Offset: 0x8
	// Line 50, Address: 0x1ed3f9c, Func Offset: 0xc
	// Line 48, Address: 0x1ed3fa0, Func Offset: 0x10
	// Line 50, Address: 0x1ed3fa4, Func Offset: 0x14
	// Line 51, Address: 0x1ed3fe4, Func Offset: 0x54
	// Line 52, Address: 0x1ed3fe8, Func Offset: 0x58
	// Line 53, Address: 0x1ed3ff8, Func Offset: 0x68
	// Line 54, Address: 0x1ed4000, Func Offset: 0x70
	// Line 55, Address: 0x1ed4018, Func Offset: 0x88
	// Line 56, Address: 0x1ed4030, Func Offset: 0xa0
	// Line 57, Address: 0x1ed4048, Func Offset: 0xb8
	// Line 59, Address: 0x1ed4050, Func Offset: 0xc0
	// Line 61, Address: 0x1ed4058, Func Offset: 0xc8
	// Line 62, Address: 0x1ed4068, Func Offset: 0xd8
	// Line 63, Address: 0x1ed4070, Func Offset: 0xe0
	// Line 64, Address: 0x1ed4088, Func Offset: 0xf8
	// Line 65, Address: 0x1ed40a0, Func Offset: 0x110
	// Line 66, Address: 0x1ed40b8, Func Offset: 0x128
	// Line 67, Address: 0x1ed40c0, Func Offset: 0x130
	// Line 68, Address: 0x1ed40c8, Func Offset: 0x138
	// Line 69, Address: 0x1ed40d0, Func Offset: 0x140
	// Line 70, Address: 0x1ed40e8, Func Offset: 0x158
	// Line 71, Address: 0x1ed4100, Func Offset: 0x170
	// Line 72, Address: 0x1ed4118, Func Offset: 0x188
	// Line 74, Address: 0x1ed4120, Func Offset: 0x190
	// Line 77, Address: 0x1ed4128, Func Offset: 0x198
	// Line 78, Address: 0x1ed4130, Func Offset: 0x1a0
	// Line 81, Address: 0x1ed4138, Func Offset: 0x1a8
	// Line 82, Address: 0x1ed4140, Func Offset: 0x1b0
	// Line 83, Address: 0x1ed4154, Func Offset: 0x1c4
	// Line 84, Address: 0x1ed415c, Func Offset: 0x1cc
	// Line 83, Address: 0x1ed4160, Func Offset: 0x1d0
	// Line 84, Address: 0x1ed4164, Func Offset: 0x1d4
	// Line 85, Address: 0x1ed416c, Func Offset: 0x1dc
	// Line 86, Address: 0x1ed4180, Func Offset: 0x1f0
	// Line 88, Address: 0x1ed4188, Func Offset: 0x1f8
	// Line 91, Address: 0x1ed4190, Func Offset: 0x200
	// Line 89, Address: 0x1ed4194, Func Offset: 0x204
	// Line 91, Address: 0x1ed4198, Func Offset: 0x208
	// Line 89, Address: 0x1ed419c, Func Offset: 0x20c
	// Line 91, Address: 0x1ed41a0, Func Offset: 0x210
	// Line 89, Address: 0x1ed41a4, Func Offset: 0x214
	// Line 91, Address: 0x1ed41a8, Func Offset: 0x218
	// Line 96, Address: 0x1ed41b0, Func Offset: 0x220
	// Line 97, Address: 0x1ed41c0, Func Offset: 0x230
	// Line 98, Address: 0x1ed41c8, Func Offset: 0x238
	// Line 99, Address: 0x1ed41d0, Func Offset: 0x240
	// Line 100, Address: 0x1ed41d8, Func Offset: 0x248
	// Line 101, Address: 0x1ed41e0, Func Offset: 0x250
	// Func End, Address: 0x1ed41ec, Func Offset: 0x25c
	// Line 46, Address: 0x1ed3f90, Func Offset: 0
	// Line 47, Address: 0x1ed3f94, Func Offset: 0x4
	// Line 46, Address: 0x1ed3f98, Func Offset: 0x8
	// Line 47, Address: 0x1ed3f9c, Func Offset: 0xc
	// Line 49, Address: 0x1ed3fac, Func Offset: 0x1c
	// Line 52, Address: 0x1ed3fc0, Func Offset: 0x30
	// Line 53, Address: 0x1ed3fcc, Func Offset: 0x3c
	// Line 54, Address: 0x1ed3fd8, Func Offset: 0x48
	// Line 53, Address: 0x1ed3fdc, Func Offset: 0x4c
	// Line 54, Address: 0x1ed3fe4, Func Offset: 0x54
	// Line 55, Address: 0x1ed3ff4, Func Offset: 0x64
	// Line 56, Address: 0x1ed4018, Func Offset: 0x88
	// Line 58, Address: 0x1ed4044, Func Offset: 0xb4
	// Line 59, Address: 0x1ed4050, Func Offset: 0xc0
	// Line 60, Address: 0x1ed405c, Func Offset: 0xcc
	// Line 62, Address: 0x1ed4070, Func Offset: 0xe0
	// Line 64, Address: 0x1ed4098, Func Offset: 0x108
	// Line 65, Address: 0x1ed40a8, Func Offset: 0x118
	// Line 66, Address: 0x1ed40b0, Func Offset: 0x120
	// Line 67, Address: 0x1ed40cc, Func Offset: 0x13c
	// Line 71, Address: 0x1ed40f0, Func Offset: 0x160
	// Line 72, Address: 0x1ed4104, Func Offset: 0x174
	// Line 76, Address: 0x1ed4114, Func Offset: 0x184
	// Line 83, Address: 0x1ed4120, Func Offset: 0x190
	// Func End, Address: 0x1ed412c, Func Offset: 0x19c
	// Line 28, Address: 0x1ed3f90, Func Offset: 0
	// Line 29, Address: 0x1ed3f94, Func Offset: 0x4
	// Line 28, Address: 0x1ed3f98, Func Offset: 0x8
	// Line 29, Address: 0x1ed3f9c, Func Offset: 0xc
	// Line 30, Address: 0x1ed3fac, Func Offset: 0x1c
	// Line 31, Address: 0x1ed3fb4, Func Offset: 0x24
	// Line 32, Address: 0x1ed3fbc, Func Offset: 0x2c
	// Line 33, Address: 0x1ed3fc0, Func Offset: 0x30
	// Line 34, Address: 0x1ed3fd4, Func Offset: 0x44
	// Line 35, Address: 0x1ed3fdc, Func Offset: 0x4c
	// Line 37, Address: 0x1ed3fe0, Func Offset: 0x50
	// Line 39, Address: 0x1ed4000, Func Offset: 0x70
	// Line 40, Address: 0x1ed4008, Func Offset: 0x78
	// Line 44, Address: 0x1ed4010, Func Offset: 0x80
	// Line 45, Address: 0x1ed4024, Func Offset: 0x94
	// Line 46, Address: 0x1ed4034, Func Offset: 0xa4
	// Line 47, Address: 0x1ed403c, Func Offset: 0xac
	// Line 49, Address: 0x1ed4040, Func Offset: 0xb0
	// Func End, Address: 0x1ed404c, Func Offset: 0xbc
	// Line 177, Address: 0x1ed3f90, Func Offset: 0
	// Line 184, Address: 0x1ed3f98, Func Offset: 0x8
	// Line 177, Address: 0x1ed3f9c, Func Offset: 0xc
	// Line 184, Address: 0x1ed3fb8, Func Offset: 0x28
	// Line 185, Address: 0x1ed3fcc, Func Offset: 0x3c
	// Line 187, Address: 0x1ed3ff8, Func Offset: 0x68
	// Line 189, Address: 0x1ed4008, Func Offset: 0x78
	// Line 195, Address: 0x1ed4018, Func Offset: 0x88
	// Line 196, Address: 0x1ed401c, Func Offset: 0x8c
	// Line 195, Address: 0x1ed4020, Func Offset: 0x90
	// Line 196, Address: 0x1ed4024, Func Offset: 0x94
	// Line 198, Address: 0x1ed4028, Func Offset: 0x98
	// Line 195, Address: 0x1ed402c, Func Offset: 0x9c
	// Line 196, Address: 0x1ed4034, Func Offset: 0xa4
	// Line 197, Address: 0x1ed4048, Func Offset: 0xb8
	// Line 198, Address: 0x1ed4058, Func Offset: 0xc8
	// Line 199, Address: 0x1ed4078, Func Offset: 0xe8
	// Line 202, Address: 0x1ed40ac, Func Offset: 0x11c
	// Line 203, Address: 0x1ed40b4, Func Offset: 0x124
	// Line 202, Address: 0x1ed40b8, Func Offset: 0x128
	// Line 203, Address: 0x1ed40e4, Func Offset: 0x154
	// Line 206, Address: 0x1ed40f0, Func Offset: 0x160
	// Line 207, Address: 0x1ed4104, Func Offset: 0x174
	// Line 208, Address: 0x1ed4128, Func Offset: 0x198
	// Line 209, Address: 0x1ed4140, Func Offset: 0x1b0
	// Line 212, Address: 0x1ed4154, Func Offset: 0x1c4
	// Line 213, Address: 0x1ed416c, Func Offset: 0x1dc
	// Line 216, Address: 0x1ed4178, Func Offset: 0x1e8
	// Line 217, Address: 0x1ed418c, Func Offset: 0x1fc
	// Line 218, Address: 0x1ed41a4, Func Offset: 0x214
	// Line 220, Address: 0x1ed41c8, Func Offset: 0x238
	// Line 221, Address: 0x1ed41d0, Func Offset: 0x240
	// Func End, Address: 0x1ed41f4, Func Offset: 0x264
}

// 
// Start address: 0x1ed4200
sfObj* LastPoolSurface_Init(LastPoolSurface_PoolParam* pInputPoolPrm, float* CenterPos, unsigned int DemoFlag)
{
	sfObj* pObj;
	ObjData* pObjDt;
	// Line 219, Address: 0x1ed4200, Func Offset: 0
	// Line 221, Address: 0x1ed4210, Func Offset: 0x10
	// Line 224, Address: 0x1ed4224, Func Offset: 0x24
	// Line 225, Address: 0x1ed4230, Func Offset: 0x30
	// Line 226, Address: 0x1ed4238, Func Offset: 0x38
	// Line 228, Address: 0x1ed4244, Func Offset: 0x44
	// Line 230, Address: 0x1ed4248, Func Offset: 0x48
	// Line 231, Address: 0x1ed4258, Func Offset: 0x58
	// Line 232, Address: 0x1ed4268, Func Offset: 0x68
	// Line 233, Address: 0x1ed4278, Func Offset: 0x78
	// Line 234, Address: 0x1ed427c, Func Offset: 0x7c
	// Line 236, Address: 0x1ed4288, Func Offset: 0x88
	// Line 239, Address: 0x1ed4290, Func Offset: 0x90
	// Func End, Address: 0x1ed429c, Func Offset: 0x9c
	// Line 265, Address: 0x1ed4200, Func Offset: 0
	// Line 268, Address: 0x1ed4220, Func Offset: 0x20
	// Line 269, Address: 0x1ed422c, Func Offset: 0x2c
	// Line 271, Address: 0x1ed4234, Func Offset: 0x34
	// Line 272, Address: 0x1ed423c, Func Offset: 0x3c
	// Line 274, Address: 0x1ed4240, Func Offset: 0x40
	// Line 275, Address: 0x1ed4250, Func Offset: 0x50
	// Line 276, Address: 0x1ed425c, Func Offset: 0x5c
	// Line 277, Address: 0x1ed426c, Func Offset: 0x6c
	// Line 278, Address: 0x1ed4274, Func Offset: 0x74
	// Line 279, Address: 0x1ed427c, Func Offset: 0x7c
	// Line 280, Address: 0x1ed4280, Func Offset: 0x80
	// Line 282, Address: 0x1ed428c, Func Offset: 0x8c
	// Line 280, Address: 0x1ed4290, Func Offset: 0x90
	// Line 282, Address: 0x1ed4298, Func Offset: 0x98
	// Line 283, Address: 0x1ed42a4, Func Offset: 0xa4
	// Line 285, Address: 0x1ed42b8, Func Offset: 0xb8
	// Line 283, Address: 0x1ed42c0, Func Offset: 0xc0
	// Line 285, Address: 0x1ed42c8, Func Offset: 0xc8
	// Line 286, Address: 0x1ed42d4, Func Offset: 0xd4
	// Line 287, Address: 0x1ed42d8, Func Offset: 0xd8
	// Func End, Address: 0x1ed42f4, Func Offset: 0xf4
}

// 
// Start address: 0x1ed4300
void set_all_surface_work_member(PoolSurfaceWork* pW, float* CenterPos, unsigned int ClearWaveFlag)
{
	int DirLNo;
	int VtNo;
	float tex_s;
	float tex_t;
	PoolRadialLine* pLine;
	float DirSin;
	float DirCos;
	// Line 151, Address: 0x1ed4300, Func Offset: 0
	// Func End, Address: 0x1ed4308, Func Offset: 0x8
	// Line 300, Address: 0x1ed4300, Func Offset: 0
	// Line 304, Address: 0x1ed4338, Func Offset: 0x38
	// Line 309, Address: 0x1ed4340, Func Offset: 0x40
	// Line 305, Address: 0x1ed4344, Func Offset: 0x44
	// Line 307, Address: 0x1ed4350, Func Offset: 0x50
	// Line 314, Address: 0x1ed4358, Func Offset: 0x58
	// Line 311, Address: 0x1ed4368, Func Offset: 0x68
	// Line 314, Address: 0x1ed436c, Func Offset: 0x6c
	// Line 315, Address: 0x1ed4374, Func Offset: 0x74
	// Line 316, Address: 0x1ed437c, Func Offset: 0x7c
	// Line 318, Address: 0x1ed4388, Func Offset: 0x88
	// Line 320, Address: 0x1ed4394, Func Offset: 0x94
	// Line 318, Address: 0x1ed4398, Func Offset: 0x98
	// Line 320, Address: 0x1ed439c, Func Offset: 0x9c
	// Line 318, Address: 0x1ed43a0, Func Offset: 0xa0
	// Line 320, Address: 0x1ed43a4, Func Offset: 0xa4
	// Line 318, Address: 0x1ed43a8, Func Offset: 0xa8
	// Line 316, Address: 0x1ed43ac, Func Offset: 0xac
	// Line 318, Address: 0x1ed43b0, Func Offset: 0xb0
	// Line 320, Address: 0x1ed43bc, Func Offset: 0xbc
	// Line 330, Address: 0x1ed43c0, Func Offset: 0xc0
	// Line 325, Address: 0x1ed43c4, Func Offset: 0xc4
	// Line 327, Address: 0x1ed43cc, Func Offset: 0xcc
	// Line 326, Address: 0x1ed43d4, Func Offset: 0xd4
	// Line 327, Address: 0x1ed43d8, Func Offset: 0xd8
	// Line 328, Address: 0x1ed43e4, Func Offset: 0xe4
	// Line 329, Address: 0x1ed43ec, Func Offset: 0xec
	// Line 330, Address: 0x1ed4400, Func Offset: 0x100
	// Line 331, Address: 0x1ed4404, Func Offset: 0x104
	// Line 337, Address: 0x1ed4408, Func Offset: 0x108
	// Line 338, Address: 0x1ed4410, Func Offset: 0x110
	// Line 339, Address: 0x1ed4428, Func Offset: 0x128
	// Line 340, Address: 0x1ed4434, Func Offset: 0x134
	// Line 339, Address: 0x1ed4438, Func Offset: 0x138
	// Line 340, Address: 0x1ed444c, Func Offset: 0x14c
	// Line 342, Address: 0x1ed4450, Func Offset: 0x150
	// Line 340, Address: 0x1ed4458, Func Offset: 0x158
	// Line 342, Address: 0x1ed445c, Func Offset: 0x15c
	// Line 343, Address: 0x1ed4464, Func Offset: 0x164
	// Line 344, Address: 0x1ed4474, Func Offset: 0x174
	// Func End, Address: 0x1ed44a8, Func Offset: 0x1a8
}

// 
// Start address: 0x1ed44b0
void LastPoolSurface_Stop(unsigned int DemoFlag)
{
	// Line 366, Address: 0x1ed44b0, Func Offset: 0
	// Line 367, Address: 0x1ed44c8, Func Offset: 0x18
	// Func End, Address: 0x1ed44d0, Func Offset: 0x20
}

// 
// Start address: 0x1ed44d0
void LastPoolSurface_Start(unsigned int DemoFlag)
{
	// Line 393, Address: 0x1ed44d0, Func Offset: 0
	// Line 394, Address: 0x1ed44e0, Func Offset: 0x10
	// Func End, Address: 0x1ed44e8, Func Offset: 0x18
	// Line 378, Address: 0x1ed44d0, Func Offset: 0
	// Line 379, Address: 0x1ed44ec, Func Offset: 0x1c
	// Func End, Address: 0x1ed44f4, Func Offset: 0x24
}

// 
// Start address: 0x1ed4500
void LastPoolSurface_Renewal(sfObj* pObj, LastPoolSurface_PoolParam* pInputPoolPrm)
{
	ObjData* pObjDt;
	// Line 120, Address: 0x1ed4500, Func Offset: 0
	// Line 121, Address: 0x1ed4508, Func Offset: 0x8
	// Func End, Address: 0x1ed4510, Func Offset: 0x10
	// Line 390, Address: 0x1ed4500, Func Offset: 0
	// Line 395, Address: 0x1ed4504, Func Offset: 0x4
	// Line 397, Address: 0x1ed450c, Func Offset: 0xc
	// Line 399, Address: 0x1ed4510, Func Offset: 0x10
	// Line 400, Address: 0x1ed4524, Func Offset: 0x24
	// Line 401, Address: 0x1ed4528, Func Offset: 0x28
	// Line 402, Address: 0x1ed4530, Func Offset: 0x30
	// Line 403, Address: 0x1ed453c, Func Offset: 0x3c
	// Line 404, Address: 0x1ed4540, Func Offset: 0x40
	// Line 405, Address: 0x1ed4548, Func Offset: 0x48
	// Func End, Address: 0x1ed4554, Func Offset: 0x54
}

// 
// Start address: 0x1ed4560
void LastPoolSurface_Calc(sfObj* pObj)
{
	int DirLNo;
	int VtNo;
	ObjData* pObjDt;
	PoolSurfaceWork* pW;
	float v2wMat[4][4];
	float w2vMat[4][4];
	PoolRadialLine* pLine;
	float DirSin;
	float DirCos;
	PoolVert* pVt;
	float Cam2VtDirVec[4];
	float VtVec[4];
	float rate;
	float Normal[4];
	float WaveAmpRate;
	// Line 413, Address: 0x1ed4560, Func Offset: 0
	// Line 422, Address: 0x1ed4588, Func Offset: 0x28
	// Line 413, Address: 0x1ed458c, Func Offset: 0x2c
	// Line 422, Address: 0x1ed4590, Func Offset: 0x30
	// Line 423, Address: 0x1ed4598, Func Offset: 0x38
	// Line 424, Address: 0x1ed45a0, Func Offset: 0x40
	// Line 425, Address: 0x1ed45a4, Func Offset: 0x44
	// Line 427, Address: 0x1ed45a8, Func Offset: 0x48
	// Line 429, Address: 0x1ed45b4, Func Offset: 0x54
	// Line 431, Address: 0x1ed45c0, Func Offset: 0x60
	// Line 434, Address: 0x1ed45c4, Func Offset: 0x64
	// Line 431, Address: 0x1ed45c8, Func Offset: 0x68
	// Line 434, Address: 0x1ed45cc, Func Offset: 0x6c
	// Line 431, Address: 0x1ed45d0, Func Offset: 0x70
	// Line 434, Address: 0x1ed45d4, Func Offset: 0x74
	// Line 431, Address: 0x1ed45dc, Func Offset: 0x7c
	// Line 434, Address: 0x1ed45ec, Func Offset: 0x8c
	// Line 435, Address: 0x1ed45f8, Func Offset: 0x98
	// Line 436, Address: 0x1ed4600, Func Offset: 0xa0
	// Line 438, Address: 0x1ed4610, Func Offset: 0xb0
	// Line 440, Address: 0x1ed4618, Func Offset: 0xb8
	// Line 443, Address: 0x1ed461c, Func Offset: 0xbc
	// Line 445, Address: 0x1ed4640, Func Offset: 0xe0
	// Line 446, Address: 0x1ed4670, Func Offset: 0x110
	// Line 452, Address: 0x1ed46a8, Func Offset: 0x148
	// Line 446, Address: 0x1ed46ac, Func Offset: 0x14c
	// Line 452, Address: 0x1ed46b0, Func Offset: 0x150
	// Line 446, Address: 0x1ed46b4, Func Offset: 0x154
	// Line 452, Address: 0x1ed46bc, Func Offset: 0x15c
	// Line 453, Address: 0x1ed46d0, Func Offset: 0x170
	// Line 454, Address: 0x1ed46fc, Func Offset: 0x19c
	// Line 456, Address: 0x1ed4708, Func Offset: 0x1a8
	// Line 454, Address: 0x1ed470c, Func Offset: 0x1ac
	// Line 456, Address: 0x1ed4710, Func Offset: 0x1b0
	// Line 458, Address: 0x1ed4718, Func Offset: 0x1b8
	// Line 454, Address: 0x1ed4720, Func Offset: 0x1c0
	// Line 456, Address: 0x1ed4724, Func Offset: 0x1c4
	// Line 455, Address: 0x1ed4728, Func Offset: 0x1c8
	// Line 457, Address: 0x1ed4730, Func Offset: 0x1d0
	// Line 458, Address: 0x1ed4738, Func Offset: 0x1d8
	// Line 459, Address: 0x1ed475c, Func Offset: 0x1fc
	// Line 460, Address: 0x1ed4780, Func Offset: 0x220
	// Line 459, Address: 0x1ed4784, Func Offset: 0x224
	// Line 460, Address: 0x1ed47a8, Func Offset: 0x248
	// Line 461, Address: 0x1ed47b4, Func Offset: 0x254
	// Line 462, Address: 0x1ed47bc, Func Offset: 0x25c
	// Line 463, Address: 0x1ed47cc, Func Offset: 0x26c
	// Line 466, Address: 0x1ed47d8, Func Offset: 0x278
	// Line 467, Address: 0x1ed47e0, Func Offset: 0x280
	// Line 468, Address: 0x1ed47e4, Func Offset: 0x284
	// Line 470, Address: 0x1ed47e8, Func Offset: 0x288
	// Line 471, Address: 0x1ed47f8, Func Offset: 0x298
	// Line 475, Address: 0x1ed4814, Func Offset: 0x2b4
	// Line 471, Address: 0x1ed4818, Func Offset: 0x2b8
	// Line 475, Address: 0x1ed4820, Func Offset: 0x2c0
	// Line 471, Address: 0x1ed4824, Func Offset: 0x2c4
	// Line 476, Address: 0x1ed482c, Func Offset: 0x2cc
	// Line 479, Address: 0x1ed4860, Func Offset: 0x300
	// Line 480, Address: 0x1ed4870, Func Offset: 0x310
	// Line 481, Address: 0x1ed4880, Func Offset: 0x320
	// Line 482, Address: 0x1ed4884, Func Offset: 0x324
	// Line 481, Address: 0x1ed4888, Func Offset: 0x328
	// Line 482, Address: 0x1ed4894, Func Offset: 0x334
	// Line 481, Address: 0x1ed4898, Func Offset: 0x338
	// Line 482, Address: 0x1ed48a0, Func Offset: 0x340
	// Line 483, Address: 0x1ed48c4, Func Offset: 0x364
	// Line 484, Address: 0x1ed48f4, Func Offset: 0x394
	// Line 485, Address: 0x1ed48fc, Func Offset: 0x39c
	// Line 487, Address: 0x1ed4904, Func Offset: 0x3a4
	// Line 484, Address: 0x1ed4908, Func Offset: 0x3a8
	// Line 485, Address: 0x1ed4918, Func Offset: 0x3b8
	// Line 484, Address: 0x1ed4928, Func Offset: 0x3c8
	// Line 485, Address: 0x1ed4934, Func Offset: 0x3d4
	// Line 487, Address: 0x1ed4944, Func Offset: 0x3e4
	// Line 488, Address: 0x1ed4954, Func Offset: 0x3f4
	// Line 489, Address: 0x1ed4964, Func Offset: 0x404
	// Line 490, Address: 0x1ed4968, Func Offset: 0x408
	// Func End, Address: 0x1ed4998, Func Offset: 0x438
}

// 
// Start address: 0x1ed49a0
void LastPoolSurface_Draw(sfObj* pObj)
{
	PoolSurfaceWork* pW;
	float Wld2ScrMat[4][4];
	_anon0* pPkTop;
	_anon0* pPk;
	unsigned long Tex0;
	_anon1* pTex;
	unsigned int cbp;
	int qwc;
	// Line 541, Address: 0x1ed49a0, Func Offset: 0
	// Line 546, Address: 0x1ed49b4, Func Offset: 0x14
	// Line 548, Address: 0x1ed49c8, Func Offset: 0x28
	// Line 551, Address: 0x1ed49e8, Func Offset: 0x48
	// Line 554, Address: 0x1ed49fc, Func Offset: 0x5c
	// Line 555, Address: 0x1ed4a04, Func Offset: 0x64
	// Line 556, Address: 0x1ed4a0c, Func Offset: 0x6c
	// Line 558, Address: 0x1ed4a10, Func Offset: 0x70
	// Line 560, Address: 0x1ed4a18, Func Offset: 0x78
	// Line 561, Address: 0x1ed4a24, Func Offset: 0x84
	// Line 562, Address: 0x1ed4a40, Func Offset: 0xa0
	// Line 563, Address: 0x1ed4a7c, Func Offset: 0xdc
	// Line 564, Address: 0x1ed4a84, Func Offset: 0xe4
	// Line 569, Address: 0x1ed4a88, Func Offset: 0xe8
	// Line 570, Address: 0x1ed4a8c, Func Offset: 0xec
	// Func End, Address: 0x1ed4aa0, Func Offset: 0x100
	// Line 510, Address: 0x1ed49a0, Func Offset: 0
	// Line 522, Address: 0x1ed49b0, Func Offset: 0x10
	// Line 523, Address: 0x1ed49b8, Func Offset: 0x18
	// Line 525, Address: 0x1ed49c4, Func Offset: 0x24
	// Line 529, Address: 0x1ed49cc, Func Offset: 0x2c
	// Line 531, Address: 0x1ed49e0, Func Offset: 0x40
	// Line 532, Address: 0x1ed49f0, Func Offset: 0x50
	// Line 534, Address: 0x1ed4a10, Func Offset: 0x70
	// Line 539, Address: 0x1ed4a1c, Func Offset: 0x7c
	// Line 534, Address: 0x1ed4a20, Func Offset: 0x80
	// Line 539, Address: 0x1ed4a2c, Func Offset: 0x8c
	// Line 547, Address: 0x1ed4a38, Func Offset: 0x98
	// Line 552, Address: 0x1ed4a5c, Func Offset: 0xbc
	// Line 556, Address: 0x1ed4a8c, Func Offset: 0xec
	// Line 557, Address: 0x1ed4aa0, Func Offset: 0x100
	// Line 558, Address: 0x1ed4aa8, Func Offset: 0x108
	// Line 559, Address: 0x1ed4ab0, Func Offset: 0x110
	// Line 561, Address: 0x1ed4ac0, Func Offset: 0x120
	// Line 563, Address: 0x1ed4ad0, Func Offset: 0x130
	// Func End, Address: 0x1ed4ae4, Func Offset: 0x144
}

// 
// Start address: 0x1ed4af0
_anon0* make_last_pool_surface_packet(int RefModeFlag, int EOP_Flag, _anon0* pPk, PoolSurfaceWork* pW, float Wld2ScrMat[4], unsigned long ClampReg, unsigned long AlphaReg)
{
	int DirLNo;
	int VtNo;
	_anon0* pGifTag;
	unsigned int flags;
	PoolRadialLine* pBaseLine;
	int OfsDirLNo;
	PoolRadialLine* pLine;
	PoolVert* pVt;
	float ScrPos[4];
	float inv_w;
	float vq;
	float tex_s;
	float tex_t;
	int ColVal;
	// Line 577, Address: 0x1ed4af0, Func Offset: 0
	// Line 599, Address: 0x1ed4af4, Func Offset: 0x4
	// Line 577, Address: 0x1ed4af8, Func Offset: 0x8
	// Line 599, Address: 0x1ed4afc, Func Offset: 0xc
	// Line 577, Address: 0x1ed4b00, Func Offset: 0x10
	// Line 599, Address: 0x1ed4b04, Func Offset: 0x14
	// Line 577, Address: 0x1ed4b08, Func Offset: 0x18
	// Line 584, Address: 0x1ed4b14, Func Offset: 0x24
	// Line 577, Address: 0x1ed4b18, Func Offset: 0x28
	// Line 584, Address: 0x1ed4b1c, Func Offset: 0x2c
	// Line 577, Address: 0x1ed4b20, Func Offset: 0x30
	// Line 584, Address: 0x1ed4b24, Func Offset: 0x34
	// Line 577, Address: 0x1ed4b28, Func Offset: 0x38
	// Line 584, Address: 0x1ed4b2c, Func Offset: 0x3c
	// Line 577, Address: 0x1ed4b30, Func Offset: 0x40
	// Line 585, Address: 0x1ed4b3c, Func Offset: 0x4c
	// Line 577, Address: 0x1ed4b40, Func Offset: 0x50
	// Line 586, Address: 0x1ed4b44, Func Offset: 0x54
	// Line 577, Address: 0x1ed4b48, Func Offset: 0x58
	// Line 607, Address: 0x1ed4b54, Func Offset: 0x64
	// Line 584, Address: 0x1ed4b58, Func Offset: 0x68
	// Line 585, Address: 0x1ed4b5c, Func Offset: 0x6c
	// Line 591, Address: 0x1ed4b60, Func Offset: 0x70
	// Line 588, Address: 0x1ed4b64, Func Offset: 0x74
	// Line 587, Address: 0x1ed4b68, Func Offset: 0x78
	// Line 588, Address: 0x1ed4b6c, Func Offset: 0x7c
	// Line 599, Address: 0x1ed4b70, Func Offset: 0x80
	// Line 589, Address: 0x1ed4b74, Func Offset: 0x84
	// Line 599, Address: 0x1ed4b78, Func Offset: 0x88
	// Line 590, Address: 0x1ed4b7c, Func Offset: 0x8c
	// Line 599, Address: 0x1ed4b80, Func Offset: 0x90
	// Line 591, Address: 0x1ed4b84, Func Offset: 0x94
	// Line 599, Address: 0x1ed4b88, Func Offset: 0x98
	// Line 592, Address: 0x1ed4b8c, Func Offset: 0x9c
	// Line 604, Address: 0x1ed4b90, Func Offset: 0xa0
	// Line 599, Address: 0x1ed4b94, Func Offset: 0xa4
	// Line 598, Address: 0x1ed4b98, Func Offset: 0xa8
	// Line 604, Address: 0x1ed4b9c, Func Offset: 0xac
	// Line 607, Address: 0x1ed4ba0, Func Offset: 0xb0
	// Line 609, Address: 0x1ed4ba8, Func Offset: 0xb8
	// Line 611, Address: 0x1ed4bb0, Func Offset: 0xc0
	// Line 609, Address: 0x1ed4bb4, Func Offset: 0xc4
	// Line 611, Address: 0x1ed4bb8, Func Offset: 0xc8
	// Line 609, Address: 0x1ed4bbc, Func Offset: 0xcc
	// Line 611, Address: 0x1ed4bd0, Func Offset: 0xe0
	// Line 614, Address: 0x1ed4bd8, Func Offset: 0xe8
	// Line 621, Address: 0x1ed4be0, Func Offset: 0xf0
	// Line 623, Address: 0x1ed4be8, Func Offset: 0xf8
	// Line 624, Address: 0x1ed4bf0, Func Offset: 0x100
	// Line 625, Address: 0x1ed4c00, Func Offset: 0x110
	// Line 626, Address: 0x1ed4c04, Func Offset: 0x114
	// Line 627, Address: 0x1ed4c10, Func Offset: 0x120
	// Line 630, Address: 0x1ed4c18, Func Offset: 0x128
	// Line 631, Address: 0x1ed4c20, Func Offset: 0x130
	// Line 632, Address: 0x1ed4c4c, Func Offset: 0x15c
	// Line 634, Address: 0x1ed4c6c, Func Offset: 0x17c
	// Line 635, Address: 0x1ed4c74, Func Offset: 0x184
	// Line 636, Address: 0x1ed4c78, Func Offset: 0x188
	// Line 637, Address: 0x1ed4c80, Func Offset: 0x190
	// Line 636, Address: 0x1ed4c84, Func Offset: 0x194
	// Line 637, Address: 0x1ed4c88, Func Offset: 0x198
	// Line 636, Address: 0x1ed4c8c, Func Offset: 0x19c
	// Line 637, Address: 0x1ed4c90, Func Offset: 0x1a0
	// Line 639, Address: 0x1ed4cac, Func Offset: 0x1bc
	// Line 643, Address: 0x1ed4cf8, Func Offset: 0x208
	// Line 647, Address: 0x1ed4d00, Func Offset: 0x210
	// Line 649, Address: 0x1ed4d04, Func Offset: 0x214
	// Line 651, Address: 0x1ed4d0c, Func Offset: 0x21c
	// Line 652, Address: 0x1ed4d10, Func Offset: 0x220
	// Line 654, Address: 0x1ed4d18, Func Offset: 0x228
	// Line 655, Address: 0x1ed4d40, Func Offset: 0x250
	// Line 656, Address: 0x1ed4d44, Func Offset: 0x254
	// Line 658, Address: 0x1ed4d48, Func Offset: 0x258
	// Line 663, Address: 0x1ed4d5c, Func Offset: 0x26c
	// Line 665, Address: 0x1ed4d64, Func Offset: 0x274
	// Line 666, Address: 0x1ed4d74, Func Offset: 0x284
	// Line 667, Address: 0x1ed4df4, Func Offset: 0x304
	// Line 669, Address: 0x1ed4e00, Func Offset: 0x310
	// Line 671, Address: 0x1ed4e2c, Func Offset: 0x33c
	// Line 669, Address: 0x1ed4e34, Func Offset: 0x344
	// Line 671, Address: 0x1ed4e58, Func Offset: 0x368
	// Line 670, Address: 0x1ed4e5c, Func Offset: 0x36c
	// Line 671, Address: 0x1ed4e60, Func Offset: 0x370
	// Line 672, Address: 0x1ed4ea4, Func Offset: 0x3b4
	// Line 673, Address: 0x1ed4ef8, Func Offset: 0x408
	// Line 678, Address: 0x1ed4f00, Func Offset: 0x410
	// Line 675, Address: 0x1ed4f04, Func Offset: 0x414
	// Line 678, Address: 0x1ed4f08, Func Offset: 0x418
	// Line 679, Address: 0x1ed4f14, Func Offset: 0x424
	// Line 681, Address: 0x1ed4f20, Func Offset: 0x430
	// Line 682, Address: 0x1ed4f28, Func Offset: 0x438
	// Line 683, Address: 0x1ed4f2c, Func Offset: 0x43c
	// Line 684, Address: 0x1ed4f30, Func Offset: 0x440
	// Line 685, Address: 0x1ed4f34, Func Offset: 0x444
	// Line 686, Address: 0x1ed4f4c, Func Offset: 0x45c
	// Line 687, Address: 0x1ed4f5c, Func Offset: 0x46c
	// Line 688, Address: 0x1ed4f6c, Func Offset: 0x47c
	// Line 689, Address: 0x1ed4f94, Func Offset: 0x4a4
	// Line 688, Address: 0x1ed4f98, Func Offset: 0x4a8
	// Line 690, Address: 0x1ed4fac, Func Offset: 0x4bc
	// Func End, Address: 0x1ed4fe0, Func Offset: 0x4f0
}

