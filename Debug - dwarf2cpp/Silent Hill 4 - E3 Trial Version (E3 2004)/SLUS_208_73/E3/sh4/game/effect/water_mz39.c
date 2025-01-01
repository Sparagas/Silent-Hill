typedef union _anon0;
typedef struct _anon1;
typedef struct sfObj;
typedef struct FloorVert;
typedef union _anon2;
typedef struct Mz39WaterFloorWork;

typedef void(*type_12)(sfObj*);
typedef void(*type_13)(sfObj*);
typedef void(*type_15)(sfObj*);
typedef void(*type_16)(sfObj*);

typedef int type_0[4];
typedef unsigned int type_1[4];
typedef void* type_2[4];
typedef float type_3[4];
typedef short type_4[8];
typedef unsigned short type_5[8];
typedef char type_6[16];
typedef unsigned char type_7[16];
typedef float type_8[4];
typedef float type_9[1];
typedef int type_10[1];
typedef long type_11[1];
typedef _anon2 type_14[256];
typedef FloorVert type_17[16];
typedef FloorVert type_18[16][16];
typedef short type_19[2];
typedef unsigned short type_20[2];
typedef float type_21[4][4];
typedef char type_22[4];
typedef unsigned char type_23[4];
typedef float type_24[1];
typedef int type_25[1];
typedef float type_26[4];
typedef long type_27[2];
typedef unsigned long type_28[2];

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

struct FloorVert
{
	float Pos[4];
	float vs;
	float vt;
	float OfsY;
	float OfsSpdY;
	float WaveGenMaxAccelY;
	float WaveGenAng;
	float NextOfsY;
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

struct Mz39WaterFloorWork
{
	FloorVert VertAry2[16][16];
};

float B1Tower_Center[4];
Mz39WaterFloorWork wfW;
void(*mz39_WaterFloor_Draw)(sfObj*);
void(*mz39_WaterFloor_Calc)(sfObj*);

sfObj* WaterFloor_SceneInit_mz39(unsigned int DemoFlag);
void mz39_WaterFloor_Calc();
void mz39_WaterFloor_Draw();
_anon0* make_water_floor_packet(_anon0* pPk, float Wld2ScrMat[4], int UseTexMode, float PolyY, int PolyBrightRGB, int PolyAlpha, int GifTagEof);

// 
// Start address: 0x1ed3f80
sfObj* WaterFloor_SceneInit_mz39(unsigned int DemoFlag)
{
	int ZNo;
	int XNo;
	sfObj* pObj;
	FloorVert* pVt;
	// Line 21, Address: 0x1ed3f80, Func Offset: 0
	// Func End, Address: 0x1ed3f88, Func Offset: 0x8
	// Line 37, Address: 0x1ed3f80, Func Offset: 0
	// Func End, Address: 0x1ed3f88, Func Offset: 0x8
	// Line 42, Address: 0x1ed3f80, Func Offset: 0
	// Func End, Address: 0x1ed3f88, Func Offset: 0x8
	// Line 111, Address: 0x1ed3f80, Func Offset: 0
	// Line 114, Address: 0x1ed3fc0, Func Offset: 0x40
	// Line 115, Address: 0x1ed3fcc, Func Offset: 0x4c
	// Line 117, Address: 0x1ed3fd4, Func Offset: 0x54
	// Line 118, Address: 0x1ed3fdc, Func Offset: 0x5c
	// Line 120, Address: 0x1ed3fe0, Func Offset: 0x60
	// Line 121, Address: 0x1ed3ff0, Func Offset: 0x70
	// Line 122, Address: 0x1ed3ffc, Func Offset: 0x7c
	// Line 123, Address: 0x1ed400c, Func Offset: 0x8c
	// Line 124, Address: 0x1ed4014, Func Offset: 0x94
	// Line 125, Address: 0x1ed401c, Func Offset: 0x9c
	// Line 127, Address: 0x1ed4030, Func Offset: 0xb0
	// Line 128, Address: 0x1ed4088, Func Offset: 0x108
	// Line 129, Address: 0x1ed4090, Func Offset: 0x110
	// Line 130, Address: 0x1ed40b0, Func Offset: 0x130
	// Line 129, Address: 0x1ed40b4, Func Offset: 0x134
	// Line 130, Address: 0x1ed40b8, Func Offset: 0x138
	// Line 129, Address: 0x1ed40bc, Func Offset: 0x13c
	// Line 130, Address: 0x1ed40c0, Func Offset: 0x140
	// Line 131, Address: 0x1ed40c4, Func Offset: 0x144
	// Line 132, Address: 0x1ed40ec, Func Offset: 0x16c
	// Line 134, Address: 0x1ed4108, Func Offset: 0x188
	// Line 132, Address: 0x1ed410c, Func Offset: 0x18c
	// Line 134, Address: 0x1ed4114, Func Offset: 0x194
	// Line 132, Address: 0x1ed4118, Func Offset: 0x198
	// Line 134, Address: 0x1ed4120, Func Offset: 0x1a0
	// Line 133, Address: 0x1ed4124, Func Offset: 0x1a4
	// Line 134, Address: 0x1ed4128, Func Offset: 0x1a8
	// Line 135, Address: 0x1ed412c, Func Offset: 0x1ac
	// Line 137, Address: 0x1ed4134, Func Offset: 0x1b4
	// Line 139, Address: 0x1ed414c, Func Offset: 0x1cc
	// Line 140, Address: 0x1ed415c, Func Offset: 0x1dc
	// Line 141, Address: 0x1ed416c, Func Offset: 0x1ec
	// Line 142, Address: 0x1ed417c, Func Offset: 0x1fc
	// Line 143, Address: 0x1ed4180, Func Offset: 0x200
	// Func End, Address: 0x1ed41c4, Func Offset: 0x244
	// Line 38, Address: 0x1ed3f80, Func Offset: 0
	// Func End, Address: 0x1ed3f88, Func Offset: 0x8
	// Line 69, Address: 0x1ed3f80, Func Offset: 0
	// Line 72, Address: 0x1ed3f84, Func Offset: 0x4
	// Line 69, Address: 0x1ed3f88, Func Offset: 0x8
	// Line 72, Address: 0x1ed3f8c, Func Offset: 0xc
	// Line 69, Address: 0x1ed3f90, Func Offset: 0x10
	// Line 72, Address: 0x1ed3f98, Func Offset: 0x18
	// Line 73, Address: 0x1ed3fa0, Func Offset: 0x20
	// Line 74, Address: 0x1ed3fc0, Func Offset: 0x40
	// Func End, Address: 0x1ed3fd0, Func Offset: 0x50
	// Line 24, Address: 0x1ed3f80, Func Offset: 0
	// Line 25, Address: 0x1ed3f84, Func Offset: 0x4
	// Func End, Address: 0x1ed3f8c, Func Offset: 0xc
	// Line 22, Address: 0x1ed3f80, Func Offset: 0
	// Func End, Address: 0x1ed3f88, Func Offset: 0x8
	// Line 20, Address: 0x1ed3f80, Func Offset: 0
	// Line 24, Address: 0x1ed3f84, Func Offset: 0x4
	// Line 25, Address: 0x1ed3f88, Func Offset: 0x8
	// Line 26, Address: 0x1ed3f8c, Func Offset: 0xc
	// Func End, Address: 0x1ed3f94, Func Offset: 0x14
}

// 
// Start address: 0x1ed41d0
void mz39_WaterFloor_Calc()
{
	int ZNo;
	int XNo;
	float MaxAbsOfsY;
	FloorVert* pVt;
	float OfsY_xp1;
	float OfsY_xm1;
	float OfsY_zp1;
	float OfsY_zm1;
	float AccelY;
	float AbsOfsY;
	float AdjRate;
	FloorVert* pVt;
	float DragCoff;
	float Omega;
	float SpringCoff;
	// Line 79, Address: 0x1ed41d0, Func Offset: 0
	// Line 81, Address: 0x1ed41dc, Func Offset: 0xc
	// Line 85, Address: 0x1ed4210, Func Offset: 0x40
	// Func End, Address: 0x1ed4220, Func Offset: 0x50
	// Line 153, Address: 0x1ed41d0, Func Offset: 0
	// Line 158, Address: 0x1ed41d4, Func Offset: 0x4
	// Line 153, Address: 0x1ed41d8, Func Offset: 0x8
	// Line 158, Address: 0x1ed41dc, Func Offset: 0xc
	// Line 153, Address: 0x1ed41e0, Func Offset: 0x10
	// Line 158, Address: 0x1ed41f4, Func Offset: 0x24
	// Line 160, Address: 0x1ed41f8, Func Offset: 0x28
	// Line 162, Address: 0x1ed4200, Func Offset: 0x30
	// Line 164, Address: 0x1ed4208, Func Offset: 0x38
	// Line 169, Address: 0x1ed4224, Func Offset: 0x54
	// Line 164, Address: 0x1ed4228, Func Offset: 0x58
	// Line 169, Address: 0x1ed4234, Func Offset: 0x64
	// Line 171, Address: 0x1ed423c, Func Offset: 0x6c
	// Line 172, Address: 0x1ed4244, Func Offset: 0x74
	// Line 174, Address: 0x1ed4248, Func Offset: 0x78
	// Line 175, Address: 0x1ed4254, Func Offset: 0x84
	// Line 178, Address: 0x1ed4258, Func Offset: 0x88
	// Line 179, Address: 0x1ed4260, Func Offset: 0x90
	// Line 180, Address: 0x1ed4264, Func Offset: 0x94
	// Line 181, Address: 0x1ed4268, Func Offset: 0x98
	// Line 182, Address: 0x1ed4274, Func Offset: 0xa4
	// Line 185, Address: 0x1ed4278, Func Offset: 0xa8
	// Line 186, Address: 0x1ed42a4, Func Offset: 0xd4
	// Line 185, Address: 0x1ed42a8, Func Offset: 0xd8
	// Line 186, Address: 0x1ed42b4, Func Offset: 0xe4
	// Line 188, Address: 0x1ed42c8, Func Offset: 0xf8
	// Line 189, Address: 0x1ed42ec, Func Offset: 0x11c
	// Line 191, Address: 0x1ed4300, Func Offset: 0x130
	// Line 192, Address: 0x1ed4314, Func Offset: 0x144
	// Line 193, Address: 0x1ed433c, Func Offset: 0x16c
	// Line 195, Address: 0x1ed4358, Func Offset: 0x188
	// Line 196, Address: 0x1ed435c, Func Offset: 0x18c
	// Line 197, Address: 0x1ed4368, Func Offset: 0x198
	// Line 200, Address: 0x1ed436c, Func Offset: 0x19c
	// Line 201, Address: 0x1ed4384, Func Offset: 0x1b4
	// Line 204, Address: 0x1ed4394, Func Offset: 0x1c4
	// Line 203, Address: 0x1ed4398, Func Offset: 0x1c8
	// Line 204, Address: 0x1ed439c, Func Offset: 0x1cc
	// Line 203, Address: 0x1ed43a4, Func Offset: 0x1d4
	// Line 204, Address: 0x1ed43b0, Func Offset: 0x1e0
	// Line 205, Address: 0x1ed43b8, Func Offset: 0x1e8
	// Line 206, Address: 0x1ed43d0, Func Offset: 0x200
	// Line 208, Address: 0x1ed43dc, Func Offset: 0x20c
	// Line 206, Address: 0x1ed43e0, Func Offset: 0x210
	// Line 207, Address: 0x1ed43e4, Func Offset: 0x214
	// Line 208, Address: 0x1ed43f0, Func Offset: 0x220
	// Line 209, Address: 0x1ed43fc, Func Offset: 0x22c
	// Line 211, Address: 0x1ed440c, Func Offset: 0x23c
	// Func End, Address: 0x1ed442c, Func Offset: 0x25c
	// Line 210, Address: 0x1ed41d0, Func Offset: 0
	// Line 211, Address: 0x1ed41d4, Func Offset: 0x4
	// Line 210, Address: 0x1ed41d8, Func Offset: 0x8
	// Line 211, Address: 0x1ed41dc, Func Offset: 0xc
	// Line 213, Address: 0x1ed41e8, Func Offset: 0x18
	// Line 215, Address: 0x1ed41f0, Func Offset: 0x20
	// Func End, Address: 0x1ed41fc, Func Offset: 0x2c
	// Line 147, Address: 0x1ed41d0, Func Offset: 0
	// Line 148, Address: 0x1ed41d4, Func Offset: 0x4
	// Line 150, Address: 0x1ed41e8, Func Offset: 0x18
	// Line 153, Address: 0x1ed41f8, Func Offset: 0x28
	// Func End, Address: 0x1ed4204, Func Offset: 0x34
}

// 
// Start address: 0x1ed4430
void mz39_WaterFloor_Draw()
{
	float Wld2ScrMat[4][4];
	_anon0* pPkTop;
	_anon0* pPk;
	unsigned long Tex0;
	_anon1* pTex;
	unsigned int cbp;
	int qwc;
	int Alpha;
	int Rgb;
	// Line 270, Address: 0x1ed4430, Func Offset: 0
	// Line 275, Address: 0x1ed4458, Func Offset: 0x28
	// Line 278, Address: 0x1ed4478, Func Offset: 0x48
	// Line 283, Address: 0x1ed4480, Func Offset: 0x50
	// Line 285, Address: 0x1ed4484, Func Offset: 0x54
	// Line 287, Address: 0x1ed4488, Func Offset: 0x58
	// Func End, Address: 0x1ed4490, Func Offset: 0x60
	// Line 220, Address: 0x1ed4430, Func Offset: 0
	// Line 228, Address: 0x1ed4438, Func Offset: 0x8
	// Line 220, Address: 0x1ed443c, Func Offset: 0xc
	// Line 228, Address: 0x1ed4440, Func Offset: 0x10
	// Line 232, Address: 0x1ed4448, Func Offset: 0x18
	// Line 234, Address: 0x1ed445c, Func Offset: 0x2c
	// Line 235, Address: 0x1ed446c, Func Offset: 0x3c
	// Line 239, Address: 0x1ed448c, Func Offset: 0x5c
	// Line 244, Address: 0x1ed4498, Func Offset: 0x68
	// Line 239, Address: 0x1ed449c, Func Offset: 0x6c
	// Line 244, Address: 0x1ed44a8, Func Offset: 0x78
	// Line 239, Address: 0x1ed44ac, Func Offset: 0x7c
	// Line 244, Address: 0x1ed44b0, Func Offset: 0x80
	// Line 245, Address: 0x1ed44c0, Func Offset: 0x90
	// Line 250, Address: 0x1ed44e8, Func Offset: 0xb8
	// Line 253, Address: 0x1ed4504, Func Offset: 0xd4
	// Line 257, Address: 0x1ed4534, Func Offset: 0x104
	// Line 258, Address: 0x1ed4548, Func Offset: 0x118
	// Line 259, Address: 0x1ed4550, Func Offset: 0x120
	// Line 260, Address: 0x1ed4558, Func Offset: 0x128
	// Line 262, Address: 0x1ed4568, Func Offset: 0x138
	// Line 265, Address: 0x1ed4578, Func Offset: 0x148
	// Func End, Address: 0x1ed458c, Func Offset: 0x15c
	// Line 151, Address: 0x1ed4430, Func Offset: 0
	// Line 152, Address: 0x1ed4450, Func Offset: 0x20
	// Line 154, Address: 0x1ed4454, Func Offset: 0x24
	// Line 157, Address: 0x1ed445c, Func Offset: 0x2c
	// Line 158, Address: 0x1ed4484, Func Offset: 0x54
	// Line 160, Address: 0x1ed4488, Func Offset: 0x58
	// Line 161, Address: 0x1ed4490, Func Offset: 0x60
	// Line 163, Address: 0x1ed4494, Func Offset: 0x64
	// Line 164, Address: 0x1ed449c, Func Offset: 0x6c
	// Line 165, Address: 0x1ed44a4, Func Offset: 0x74
	// Line 167, Address: 0x1ed44a8, Func Offset: 0x78
	// Line 172, Address: 0x1ed44c0, Func Offset: 0x90
	// Line 174, Address: 0x1ed44c8, Func Offset: 0x98
	// Line 183, Address: 0x1ed44d0, Func Offset: 0xa0
	// Line 185, Address: 0x1ed44d4, Func Offset: 0xa4
	// Line 186, Address: 0x1ed44dc, Func Offset: 0xac
	// Line 188, Address: 0x1ed44e0, Func Offset: 0xb0
	// Line 190, Address: 0x1ed44f0, Func Offset: 0xc0
	// Line 191, Address: 0x1ed4520, Func Offset: 0xf0
	// Line 195, Address: 0x1ed4524, Func Offset: 0xf4
	// Line 197, Address: 0x1ed452c, Func Offset: 0xfc
	// Line 198, Address: 0x1ed4534, Func Offset: 0x104
	// Line 205, Address: 0x1ed4538, Func Offset: 0x108
	// Line 207, Address: 0x1ed453c, Func Offset: 0x10c
	// Line 209, Address: 0x1ed4544, Func Offset: 0x114
	// Line 211, Address: 0x1ed4548, Func Offset: 0x118
	// Line 214, Address: 0x1ed4558, Func Offset: 0x128
	// Line 216, Address: 0x1ed4560, Func Offset: 0x130
	// Line 218, Address: 0x1ed4568, Func Offset: 0x138
	// Line 222, Address: 0x1ed4570, Func Offset: 0x140
	// Line 224, Address: 0x1ed4584, Func Offset: 0x154
	// Line 230, Address: 0x1ed4588, Func Offset: 0x158
	// Line 231, Address: 0x1ed458c, Func Offset: 0x15c
	// Func End, Address: 0x1ed45a8, Func Offset: 0x178
	// Line 137, Address: 0x1ed4430, Func Offset: 0
	// Line 138, Address: 0x1ed4438, Func Offset: 0x8
	// Line 140, Address: 0x1ed4440, Func Offset: 0x10
	// Line 139, Address: 0x1ed4444, Func Offset: 0x14
	// Line 140, Address: 0x1ed4448, Func Offset: 0x18
	// Func End, Address: 0x1ed4450, Func Offset: 0x20
}

// 
// Start address: 0x1ed4590
_anon0* make_water_floor_packet(_anon0* pPk, float Wld2ScrMat[4], int UseTexMode, float PolyY, int PolyBrightRGB, int PolyAlpha, int GifTagEof)
{
	int XNo;
	int ZNo;
	_anon0* pGifTag;
	FloorVert* pBaseVt;
	unsigned int flags;
	int AddZNo;
	FloorVert* pVt;
	float Pos[4];
	float ScrPos[4];
	float inv_w;
	float WaveRate;
	int fog_val;
	float vq;
	float AddS;
	int Rgb;
	// Line 287, Address: 0x1ed4590, Func Offset: 0
	// Line 278, Address: 0x1ed4594, Func Offset: 0x4
	// Line 287, Address: 0x1ed4598, Func Offset: 0x8
	// Line 278, Address: 0x1ed459c, Func Offset: 0xc
	// Line 287, Address: 0x1ed45a0, Func Offset: 0x10
	// Line 296, Address: 0x1ed45a4, Func Offset: 0x14
	// Line 287, Address: 0x1ed45a8, Func Offset: 0x18
	// Line 296, Address: 0x1ed45ac, Func Offset: 0x1c
	// Line 287, Address: 0x1ed45b0, Func Offset: 0x20
	// Line 296, Address: 0x1ed45b4, Func Offset: 0x24
	// Line 287, Address: 0x1ed45b8, Func Offset: 0x28
	// Line 296, Address: 0x1ed45bc, Func Offset: 0x2c
	// Line 287, Address: 0x1ed45c0, Func Offset: 0x30
	// Line 278, Address: 0x1ed45c4, Func Offset: 0x34
	// Line 287, Address: 0x1ed45c8, Func Offset: 0x38
	// Line 292, Address: 0x1ed45cc, Func Offset: 0x3c
	// Line 296, Address: 0x1ed45d4, Func Offset: 0x44
	// Line 286, Address: 0x1ed45e4, Func Offset: 0x54
	// Line 296, Address: 0x1ed45e8, Func Offset: 0x58
	// Line 293, Address: 0x1ed45fc, Func Offset: 0x6c
	// Line 296, Address: 0x1ed4600, Func Offset: 0x70
	// Line 298, Address: 0x1ed4668, Func Offset: 0xd8
	// Line 301, Address: 0x1ed4678, Func Offset: 0xe8
	// Line 309, Address: 0x1ed4680, Func Offset: 0xf0
	// Line 311, Address: 0x1ed4688, Func Offset: 0xf8
	// Line 312, Address: 0x1ed4690, Func Offset: 0x100
	// Line 313, Address: 0x1ed4694, Func Offset: 0x104
	// Line 314, Address: 0x1ed4698, Func Offset: 0x108
	// Line 315, Address: 0x1ed46a0, Func Offset: 0x110
	// Line 316, Address: 0x1ed46ac, Func Offset: 0x11c
	// Line 317, Address: 0x1ed46b4, Func Offset: 0x124
	// Line 319, Address: 0x1ed46b8, Func Offset: 0x128
	// Line 320, Address: 0x1ed46e0, Func Offset: 0x150
	// Line 322, Address: 0x1ed46f0, Func Offset: 0x160
	// Line 324, Address: 0x1ed46f8, Func Offset: 0x168
	// Line 325, Address: 0x1ed4700, Func Offset: 0x170
	// Line 327, Address: 0x1ed471c, Func Offset: 0x18c
	// Line 331, Address: 0x1ed4758, Func Offset: 0x1c8
	// Line 333, Address: 0x1ed4760, Func Offset: 0x1d0
	// Line 336, Address: 0x1ed476c, Func Offset: 0x1dc
	// Line 337, Address: 0x1ed4774, Func Offset: 0x1e4
	// Line 338, Address: 0x1ed4790, Func Offset: 0x200
	// Line 342, Address: 0x1ed4794, Func Offset: 0x204
	// Line 338, Address: 0x1ed4798, Func Offset: 0x208
	// Line 342, Address: 0x1ed47a0, Func Offset: 0x210
	// Line 338, Address: 0x1ed47a4, Func Offset: 0x214
	// Line 342, Address: 0x1ed47ac, Func Offset: 0x21c
	// Line 338, Address: 0x1ed47b0, Func Offset: 0x220
	// Line 342, Address: 0x1ed47b4, Func Offset: 0x224
	// Line 338, Address: 0x1ed47b8, Func Offset: 0x228
	// Line 342, Address: 0x1ed47c0, Func Offset: 0x230
	// Line 339, Address: 0x1ed47c4, Func Offset: 0x234
	// Line 343, Address: 0x1ed47c8, Func Offset: 0x238
	// Line 344, Address: 0x1ed47d4, Func Offset: 0x244
	// Line 345, Address: 0x1ed47d8, Func Offset: 0x248
	// Line 350, Address: 0x1ed47dc, Func Offset: 0x24c
	// Line 351, Address: 0x1ed47e8, Func Offset: 0x258
	// Line 352, Address: 0x1ed4800, Func Offset: 0x270
	// Line 353, Address: 0x1ed4808, Func Offset: 0x278
	// Line 354, Address: 0x1ed480c, Func Offset: 0x27c
	// Line 355, Address: 0x1ed4824, Func Offset: 0x294
	// Line 356, Address: 0x1ed483c, Func Offset: 0x2ac
	// Line 357, Address: 0x1ed484c, Func Offset: 0x2bc
	// Line 359, Address: 0x1ed4868, Func Offset: 0x2d8
	// Line 357, Address: 0x1ed486c, Func Offset: 0x2dc
	// Line 360, Address: 0x1ed4894, Func Offset: 0x304
	// Func End, Address: 0x1ed48a4, Func Offset: 0x314
	// Line 117, Address: 0x1ed4590, Func Offset: 0
	// Func End, Address: 0x1ed4598, Func Offset: 0x8
}

