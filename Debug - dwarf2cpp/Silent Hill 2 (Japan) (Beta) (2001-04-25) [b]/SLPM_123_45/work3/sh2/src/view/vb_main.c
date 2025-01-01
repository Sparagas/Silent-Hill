typedef struct _VbSCREENINFO;
typedef struct _VbCOORDINATE;
typedef struct _VbCOORDINATESTACK;
typedef struct _VbRVIEW;
typedef struct _anon0;
typedef struct _VbWVSMATRIX;


typedef _VbCOORDINATE* type_0[32];
typedef float type_1[4];
typedef unsigned int type_2[4];
typedef float type_3[4];
typedef float type_4[4][4];

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

struct _VbCOORDINATESTACK
{
	int use;
	_VbCOORDINATE* coordstk[32];
};

struct _VbRVIEW
{
	float vp[4];
	float vr[4];
	float rz;
	_VbCOORDINATE* super;
};

struct _anon0
{
	short vx;
	short vy;
	short vz;
	short pad;
};

struct _VbWVSMATRIX
{
	float wvm[4][4];
	float vsm[4][4];
	float wsm[4][4];
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
// Start address: 0x19a5a0
void vbCalcViewScreenMatrix()
{
	// Line 57, Address: 0x19a5a0, Func Offset: 0
	// Line 68, Address: 0x19a5a8, Func Offset: 0x8
	// Line 99, Address: 0x19a620, Func Offset: 0x80
	// Func End, Address: 0x19a630, Func Offset: 0x90
}

// 
// Start address: 0x19a630
void vbInitCoordinate(_VbCOORDINATE* super, _VbCOORDINATE* coord)
{
	// Line 118, Address: 0x19a630, Func Offset: 0
	// Line 119, Address: 0x19a634, Func Offset: 0x4
	// Line 120, Address: 0x19a638, Func Offset: 0x8
	// Line 121, Address: 0x19a660, Func Offset: 0x30
	// Line 122, Address: 0x19a688, Func Offset: 0x58
	// Func End, Address: 0x19a690, Func Offset: 0x60
}

// 
// Start address: 0x19a690
void vbSetWorldScreenMatrix()
{
	float work[4][4];
	// Line 140, Address: 0x19a690, Func Offset: 0
	// Line 145, Address: 0x19a698, Func Offset: 0x8
	// Line 146, Address: 0x19a6c4, Func Offset: 0x34
	// Line 147, Address: 0x19a6e0, Func Offset: 0x50
	// Func End, Address: 0x19a6f0, Func Offset: 0x60
}

// 
// Start address: 0x19a6f0
void vbGetLw(_VbCOORDINATE* coord, int fflip)
{
	int i;
	int pass;
	float m0[4][4];
	_VbCOORDINATE* crd0;
	// Line 224, Address: 0x19a6f0, Func Offset: 0
	// Line 230, Address: 0x19a70c, Func Offset: 0x1c
	// Line 232, Address: 0x19a714, Func Offset: 0x24
	// Line 236, Address: 0x19a718, Func Offset: 0x28
	// Line 237, Address: 0x19a748, Func Offset: 0x58
	// Line 238, Address: 0x19a74c, Func Offset: 0x5c
	// Line 243, Address: 0x19a754, Func Offset: 0x64
	// Line 244, Address: 0x19a77c, Func Offset: 0x8c
	// Line 246, Address: 0x19a78c, Func Offset: 0x9c
	// Line 248, Address: 0x19a7bc, Func Offset: 0xcc
	// Line 250, Address: 0x19a7d0, Func Offset: 0xe0
	// Line 251, Address: 0x19a7f8, Func Offset: 0x108
	// Line 254, Address: 0x19a800, Func Offset: 0x110
	// Line 256, Address: 0x19a804, Func Offset: 0x114
	// Line 257, Address: 0x19a818, Func Offset: 0x128
	// Line 259, Address: 0x19a840, Func Offset: 0x150
	// Line 260, Address: 0x19a844, Func Offset: 0x154
	// Line 261, Address: 0x19a860, Func Offset: 0x170
	// Func End, Address: 0x19a880, Func Offset: 0x190
}

// 
// Start address: 0x19a880
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
	// Line 325, Address: 0x19a880, Func Offset: 0
	// Line 332, Address: 0x19a89c, Func Offset: 0x1c
	// Line 333, Address: 0x19a8b4, Func Offset: 0x34
	// Line 334, Address: 0x19a8d0, Func Offset: 0x50
	// Line 335, Address: 0x19a8ec, Func Offset: 0x6c
	// Line 336, Address: 0x19a904, Func Offset: 0x84
	// Line 339, Address: 0x19a910, Func Offset: 0x90
	// Line 341, Address: 0x19a920, Func Offset: 0xa0
	// Line 344, Address: 0x19a924, Func Offset: 0xa4
	// Line 345, Address: 0x19a94c, Func Offset: 0xcc
	// Line 348, Address: 0x19a974, Func Offset: 0xf4
	// Line 350, Address: 0x19a98c, Func Offset: 0x10c
	// Line 351, Address: 0x19a9b4, Func Offset: 0x134
	// Line 352, Address: 0x19a9c4, Func Offset: 0x144
	// Line 353, Address: 0x19a9d4, Func Offset: 0x154
	// Line 354, Address: 0x19a9e8, Func Offset: 0x168
	// Line 355, Address: 0x19a9f0, Func Offset: 0x170
	// Line 359, Address: 0x19aa04, Func Offset: 0x184
	// Line 360, Address: 0x19aa2c, Func Offset: 0x1ac
	// Line 361, Address: 0x19aa34, Func Offset: 0x1b4
	// Line 362, Address: 0x19aa3c, Func Offset: 0x1bc
	// Line 363, Address: 0x19aa48, Func Offset: 0x1c8
	// Line 364, Address: 0x19aa5c, Func Offset: 0x1dc
	// Line 367, Address: 0x19aa70, Func Offset: 0x1f0
	// Line 369, Address: 0x19aa88, Func Offset: 0x208
	// Line 370, Address: 0x19aab0, Func Offset: 0x230
	// Line 371, Address: 0x19aabc, Func Offset: 0x23c
	// Line 372, Address: 0x19aac8, Func Offset: 0x248
	// Line 373, Address: 0x19aadc, Func Offset: 0x25c
	// Line 374, Address: 0x19aae4, Func Offset: 0x264
	// Line 375, Address: 0x19aaf8, Func Offset: 0x278
	// Line 379, Address: 0x19ab20, Func Offset: 0x2a0
	// Line 380, Address: 0x19ab44, Func Offset: 0x2c4
	// Line 381, Address: 0x19ab54, Func Offset: 0x2d4
	// Line 383, Address: 0x19ab68, Func Offset: 0x2e8
	// Line 386, Address: 0x19ab74, Func Offset: 0x2f4
	// Line 396, Address: 0x19ab84, Func Offset: 0x304
	// Line 399, Address: 0x19abe8, Func Offset: 0x368
	// Line 400, Address: 0x19abfc, Func Offset: 0x37c
	// Line 401, Address: 0x19ac28, Func Offset: 0x3a8
	// Line 403, Address: 0x19ac30, Func Offset: 0x3b0
	// Line 405, Address: 0x19ac5c, Func Offset: 0x3dc
	// Line 407, Address: 0x19ac64, Func Offset: 0x3e4
	// Line 408, Address: 0x19ac68, Func Offset: 0x3e8
	// Func End, Address: 0x19ac88, Func Offset: 0x408
}

// 
// Start address: 0x19ac90
float vbNormalizeRadianAngle(float ang)
{
	float ret;
	// Line 461, Address: 0x19ac90, Func Offset: 0
	// Line 462, Address: 0x19ac98, Func Offset: 0x8
	// Line 463, Address: 0x19ac9c, Func Offset: 0xc
	// Line 464, Address: 0x19aca0, Func Offset: 0x10
	// Line 465, Address: 0x19aca4, Func Offset: 0x14
	// Line 467, Address: 0x19acac, Func Offset: 0x1c
	// Line 468, Address: 0x19acb0, Func Offset: 0x20
	// Line 474, Address: 0x19acb8, Func Offset: 0x28
	// Line 475, Address: 0x19acbc, Func Offset: 0x2c
	// Line 476, Address: 0x19acc0, Func Offset: 0x30
	// Line 477, Address: 0x19acc4, Func Offset: 0x34
	// Line 478, Address: 0x19acc8, Func Offset: 0x38
	// Line 479, Address: 0x19accc, Func Offset: 0x3c
	// Line 480, Address: 0x19acd0, Func Offset: 0x40
	// Line 481, Address: 0x19acd4, Func Offset: 0x44
	// Line 482, Address: 0x19acd8, Func Offset: 0x48
	// Line 483, Address: 0x19acdc, Func Offset: 0x4c
	// Line 484, Address: 0x19ace0, Func Offset: 0x50
	// Line 485, Address: 0x19ace4, Func Offset: 0x54
	// Line 500, Address: 0x19acec, Func Offset: 0x5c
	// Line 501, Address: 0x19acf0, Func Offset: 0x60
	// Func End, Address: 0x19acf8, Func Offset: 0x68
}

// 
// Start address: 0x19ad00
void vbTransposeMatrixWithoutTr(float m0[4], float m1[4])
{
	// Line 529, Address: 0x19ad00, Func Offset: 0
	// Line 530, Address: 0x19ad04, Func Offset: 0x4
	// Line 531, Address: 0x19ad08, Func Offset: 0x8
	// Line 532, Address: 0x19ad0c, Func Offset: 0xc
	// Line 533, Address: 0x19ad10, Func Offset: 0x10
	// Line 534, Address: 0x19ad14, Func Offset: 0x14
	// Line 535, Address: 0x19ad18, Func Offset: 0x18
	// Line 536, Address: 0x19ad1c, Func Offset: 0x1c
	// Line 537, Address: 0x19ad20, Func Offset: 0x20
	// Line 538, Address: 0x19ad24, Func Offset: 0x24
	// Line 539, Address: 0x19ad28, Func Offset: 0x28
	// Line 540, Address: 0x19ad2c, Func Offset: 0x2c
	// Line 541, Address: 0x19ad30, Func Offset: 0x30
	// Line 542, Address: 0x19ad34, Func Offset: 0x34
	// Line 543, Address: 0x19ad38, Func Offset: 0x38
	// Line 544, Address: 0x19ad3c, Func Offset: 0x3c
	// Line 557, Address: 0x19ad40, Func Offset: 0x40
	// Func End, Address: 0x19ad48, Func Offset: 0x48
}

// 
// Start address: 0x19ad50
void vbApplyMatrixWithoutTr(float* v0, float m0[4], float* v1)
{
	// Line 580, Address: 0x19ad50, Func Offset: 0
	// Line 581, Address: 0x19ad54, Func Offset: 0x4
	// Line 582, Address: 0x19ad58, Func Offset: 0x8
	// Line 583, Address: 0x19ad5c, Func Offset: 0xc
	// Line 584, Address: 0x19ad60, Func Offset: 0x10
	// Line 585, Address: 0x19ad64, Func Offset: 0x14
	// Line 586, Address: 0x19ad68, Func Offset: 0x18
	// Line 587, Address: 0x19ad6c, Func Offset: 0x1c
	// Line 588, Address: 0x19ad70, Func Offset: 0x20
	// Line 597, Address: 0x19ad74, Func Offset: 0x24
	// Func End, Address: 0x19ad7c, Func Offset: 0x2c
}

