typedef struct _VbRVIEW;
typedef struct _VbCOORDINATE;
typedef struct _VbWVSMATRIX;
typedef struct _VbSCREENINFO;
typedef struct _VbCOORDINATESTACK;
typedef struct _anon0;


typedef float type_0[4];
typedef _VbCOORDINATE* type_1[32];
typedef float type_2[4];
typedef unsigned int type_3[4];
typedef float type_4[4][4];

struct _VbRVIEW
{
	float vp[4];
	float vr[4];
	float rz;
	_VbCOORDINATE* super;
};

struct _VbCOORDINATE
{
	unsigned int flg;
	float coord[4][4];
	float workm[4][4];
	unsigned int* param;
	_VbCOORDINATE* super;
	_VbCOORDINATE* sub;
	_anon0 r;
	float lw[4][4];
	float ls[4][4];
	float rot[4];
};

struct _VbWVSMATRIX
{
	float wvm[4][4];
	float vsm[4][4];
	float wsm[4][4];
};

struct _VbSCREENINFO
{
	float scr_z;
	float sx;
	float sy;
	float cx;
	float cy;
	float zmin;
	float zmax;
	float nearz;
	float farz;
};

struct _VbCOORDINATESTACK
{
	int use;
	_VbCOORDINATE* coordstk[32];
};

struct _anon0
{
	short vx;
	short vy;
	short vz;
	short pad;
};

_VbSCREENINFO VbScreenInfo;
_VbWVSMATRIX VbWvsMatrix;
_VbCOORDINATESTACK VbCoordinateStack;
unsigned int vbNRAAngRgl[4];

void vbCalcViewScreenMatrix();
void vbInitCoordinate(_VbCOORDINATE* super, _VbCOORDINATE* coord);
void vbSetWorldScreenMatrix();
void vbGetLw(_VbCOORDINATE* coord, int fflip);
int vbSetRefView(_VbRVIEW* rview);
float vbNormalizeRadianAngle(float ang);
void vbTransposeMatrixWithoutTr(float m0[4], float m1[4]);
void vbApplyMatrixWithoutTr(float* v0, float m0[4], float* v1);

// 
// Start address: 0x195230
void vbCalcViewScreenMatrix()
{
	// Line 57, Address: 0x195230, Func Offset: 0
	// Line 68, Address: 0x195238, Func Offset: 0x8
	// Line 99, Address: 0x1952b0, Func Offset: 0x80
	// Func End, Address: 0x1952c0, Func Offset: 0x90
}

// 
// Start address: 0x1952c0
void vbInitCoordinate(_VbCOORDINATE* super, _VbCOORDINATE* coord)
{
	// Line 118, Address: 0x1952c0, Func Offset: 0
	// Line 119, Address: 0x1952c4, Func Offset: 0x4
	// Line 120, Address: 0x1952c8, Func Offset: 0x8
	// Line 121, Address: 0x1952f0, Func Offset: 0x30
	// Line 122, Address: 0x195318, Func Offset: 0x58
	// Func End, Address: 0x195320, Func Offset: 0x60
}

// 
// Start address: 0x195320
void vbSetWorldScreenMatrix()
{
	float work[4][4];
	// Line 140, Address: 0x195320, Func Offset: 0
	// Line 145, Address: 0x195328, Func Offset: 0x8
	// Line 146, Address: 0x195354, Func Offset: 0x34
	// Line 147, Address: 0x19536c, Func Offset: 0x4c
	// Func End, Address: 0x19537c, Func Offset: 0x5c
}

// 
// Start address: 0x195380
void vbGetLw(_VbCOORDINATE* coord, int fflip)
{
	int i;
	int pass;
	float m0[4][4];
	_VbCOORDINATE* crd0;
	// Line 224, Address: 0x195380, Func Offset: 0
	// Line 230, Address: 0x19539c, Func Offset: 0x1c
	// Line 232, Address: 0x1953a4, Func Offset: 0x24
	// Line 236, Address: 0x1953a8, Func Offset: 0x28
	// Line 237, Address: 0x1953d8, Func Offset: 0x58
	// Line 238, Address: 0x1953dc, Func Offset: 0x5c
	// Line 243, Address: 0x1953e4, Func Offset: 0x64
	// Line 244, Address: 0x19540c, Func Offset: 0x8c
	// Line 246, Address: 0x19541c, Func Offset: 0x9c
	// Line 248, Address: 0x19544c, Func Offset: 0xcc
	// Line 250, Address: 0x195460, Func Offset: 0xe0
	// Line 251, Address: 0x195484, Func Offset: 0x104
	// Line 254, Address: 0x19548c, Func Offset: 0x10c
	// Line 256, Address: 0x195490, Func Offset: 0x110
	// Line 257, Address: 0x1954a4, Func Offset: 0x124
	// Line 259, Address: 0x1954c8, Func Offset: 0x148
	// Line 260, Address: 0x1954cc, Func Offset: 0x14c
	// Line 261, Address: 0x1954e8, Func Offset: 0x168
	// Func End, Address: 0x195508, Func Offset: 0x188
}

// 
// Start address: 0x195510
int vbSetRefView(_VbRVIEW* rview)
{
	float rz;
	float xzlen;
	float len;
	float t2[4];
	float t[4];
	float work2[4][4];
	float work1[4][4];
	float work0[4][4];
	// Line 325, Address: 0x195510, Func Offset: 0
	// Line 332, Address: 0x19552c, Func Offset: 0x1c
	// Line 333, Address: 0x195544, Func Offset: 0x34
	// Line 334, Address: 0x195558, Func Offset: 0x48
	// Line 335, Address: 0x195574, Func Offset: 0x64
	// Line 336, Address: 0x19558c, Func Offset: 0x7c
	// Line 339, Address: 0x195598, Func Offset: 0x88
	// Line 341, Address: 0x1955a4, Func Offset: 0x94
	// Line 344, Address: 0x1955a8, Func Offset: 0x98
	// Line 345, Address: 0x1955d0, Func Offset: 0xc0
	// Line 348, Address: 0x1955f8, Func Offset: 0xe8
	// Line 350, Address: 0x195608, Func Offset: 0xf8
	// Line 351, Address: 0x195630, Func Offset: 0x120
	// Line 352, Address: 0x195640, Func Offset: 0x130
	// Line 353, Address: 0x195650, Func Offset: 0x140
	// Line 354, Address: 0x195664, Func Offset: 0x154
	// Line 355, Address: 0x19566c, Func Offset: 0x15c
	// Line 359, Address: 0x195680, Func Offset: 0x170
	// Line 360, Address: 0x1956a8, Func Offset: 0x198
	// Line 361, Address: 0x1956b0, Func Offset: 0x1a0
	// Line 362, Address: 0x1956b4, Func Offset: 0x1a4
	// Line 363, Address: 0x1956c0, Func Offset: 0x1b0
	// Line 364, Address: 0x1956d4, Func Offset: 0x1c4
	// Line 367, Address: 0x1956e4, Func Offset: 0x1d4
	// Line 369, Address: 0x1956fc, Func Offset: 0x1ec
	// Line 370, Address: 0x195724, Func Offset: 0x214
	// Line 371, Address: 0x195730, Func Offset: 0x220
	// Line 372, Address: 0x19573c, Func Offset: 0x22c
	// Line 373, Address: 0x195750, Func Offset: 0x240
	// Line 374, Address: 0x195758, Func Offset: 0x248
	// Line 375, Address: 0x195768, Func Offset: 0x258
	// Line 379, Address: 0x195790, Func Offset: 0x280
	// Line 380, Address: 0x1957b4, Func Offset: 0x2a4
	// Line 381, Address: 0x1957bc, Func Offset: 0x2ac
	// Line 383, Address: 0x1957cc, Func Offset: 0x2bc
	// Line 386, Address: 0x1957d8, Func Offset: 0x2c8
	// Line 396, Address: 0x1957e4, Func Offset: 0x2d4
	// Line 399, Address: 0x195848, Func Offset: 0x338
	// Line 400, Address: 0x195858, Func Offset: 0x348
	// Line 401, Address: 0x195884, Func Offset: 0x374
	// Line 403, Address: 0x19588c, Func Offset: 0x37c
	// Line 405, Address: 0x1958b8, Func Offset: 0x3a8
	// Line 407, Address: 0x1958c0, Func Offset: 0x3b0
	// Line 408, Address: 0x1958c4, Func Offset: 0x3b4
	// Func End, Address: 0x1958e4, Func Offset: 0x3d4
}

// 
// Start address: 0x1958f0
float vbNormalizeRadianAngle(float ang)
{
	float ret;
	// Line 461, Address: 0x1958f0, Func Offset: 0
	// Line 462, Address: 0x1958f8, Func Offset: 0x8
	// Line 463, Address: 0x1958fc, Func Offset: 0xc
	// Line 464, Address: 0x195900, Func Offset: 0x10
	// Line 465, Address: 0x195904, Func Offset: 0x14
	// Line 467, Address: 0x19590c, Func Offset: 0x1c
	// Line 468, Address: 0x195910, Func Offset: 0x20
	// Line 474, Address: 0x195918, Func Offset: 0x28
	// Line 475, Address: 0x19591c, Func Offset: 0x2c
	// Line 476, Address: 0x195920, Func Offset: 0x30
	// Line 477, Address: 0x195924, Func Offset: 0x34
	// Line 478, Address: 0x195928, Func Offset: 0x38
	// Line 479, Address: 0x19592c, Func Offset: 0x3c
	// Line 480, Address: 0x195930, Func Offset: 0x40
	// Line 481, Address: 0x195934, Func Offset: 0x44
	// Line 482, Address: 0x195938, Func Offset: 0x48
	// Line 483, Address: 0x19593c, Func Offset: 0x4c
	// Line 484, Address: 0x195940, Func Offset: 0x50
	// Line 485, Address: 0x195944, Func Offset: 0x54
	// Line 500, Address: 0x19594c, Func Offset: 0x5c
	// Line 501, Address: 0x195950, Func Offset: 0x60
	// Func End, Address: 0x195958, Func Offset: 0x68
}

// 
// Start address: 0x195960
void vbTransposeMatrixWithoutTr(float m0[4], float m1[4])
{
	// Line 529, Address: 0x195960, Func Offset: 0
	// Line 530, Address: 0x195964, Func Offset: 0x4
	// Line 531, Address: 0x195968, Func Offset: 0x8
	// Line 532, Address: 0x19596c, Func Offset: 0xc
	// Line 533, Address: 0x195970, Func Offset: 0x10
	// Line 534, Address: 0x195974, Func Offset: 0x14
	// Line 535, Address: 0x195978, Func Offset: 0x18
	// Line 536, Address: 0x19597c, Func Offset: 0x1c
	// Line 537, Address: 0x195980, Func Offset: 0x20
	// Line 538, Address: 0x195984, Func Offset: 0x24
	// Line 539, Address: 0x195988, Func Offset: 0x28
	// Line 540, Address: 0x19598c, Func Offset: 0x2c
	// Line 541, Address: 0x195990, Func Offset: 0x30
	// Line 542, Address: 0x195994, Func Offset: 0x34
	// Line 543, Address: 0x195998, Func Offset: 0x38
	// Line 544, Address: 0x19599c, Func Offset: 0x3c
	// Line 557, Address: 0x1959a0, Func Offset: 0x40
	// Func End, Address: 0x1959a8, Func Offset: 0x48
}

// 
// Start address: 0x1959b0
void vbApplyMatrixWithoutTr(float* v0, float m0[4], float* v1)
{
	// Line 580, Address: 0x1959b0, Func Offset: 0
	// Line 581, Address: 0x1959b4, Func Offset: 0x4
	// Line 582, Address: 0x1959b8, Func Offset: 0x8
	// Line 583, Address: 0x1959bc, Func Offset: 0xc
	// Line 584, Address: 0x1959c0, Func Offset: 0x10
	// Line 585, Address: 0x1959c4, Func Offset: 0x14
	// Line 586, Address: 0x1959c8, Func Offset: 0x18
	// Line 587, Address: 0x1959cc, Func Offset: 0x1c
	// Line 588, Address: 0x1959d0, Func Offset: 0x20
	// Line 597, Address: 0x1959d4, Func Offset: 0x24
	// Func End, Address: 0x1959dc, Func Offset: 0x2c
}

