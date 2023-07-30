typedef struct _VbRVIEW;
typedef struct _VbCOORDINATE;
typedef struct _VW_VIEW_WORK;
typedef struct _anon0;


typedef float type_0[4];
typedef float type_1[4];
typedef float type_2[4][4];

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

struct _VW_VIEW_WORK
{
	_VbRVIEW rview;
	_VbCOORDINATE vwcoord;
	float worldpos[4];
	float worldang[4];
};

struct _anon0
{
	short vx;
	short vy;
	short vz;
	short pad;
};

_VW_VIEW_WORK vwViewPointInfo;

void vwInitViewInfo();
void vwGetViewPosition(float* pos);
void vwGetViewAngle(float* ang);
void vwSetCoordRefAndEntou(_VbCOORDINATE* parent_p, float* ref, float cam_ang_y, float cam_ang_z, float cam_y, float cam_xz_r);
void vwSetViewInfo();
void vwSetViewInfoDirectMatrix(_VbCOORDINATE* pcoord, float cammat[4]);

// 
// Start address: 0x19f020
void vwInitViewInfo()
{
	// Line 52, Address: 0x19f020, Func Offset: 0
	// Line 53, Address: 0x19f028, Func Offset: 0x8
	// Line 54, Address: 0x19f034, Func Offset: 0x14
	// Line 55, Address: 0x19f040, Func Offset: 0x20
	// Line 57, Address: 0x19f04c, Func Offset: 0x2c
	// Line 59, Address: 0x19f054, Func Offset: 0x34
	// Line 61, Address: 0x19f064, Func Offset: 0x44
	// Line 63, Address: 0x19f078, Func Offset: 0x58
	// Line 64, Address: 0x19f080, Func Offset: 0x60
	// Func End, Address: 0x19f090, Func Offset: 0x70
}

// 
// Start address: 0x19f090
void vwGetViewPosition(float* pos)
{
	// Line 101, Address: 0x19f090, Func Offset: 0
	// Line 102, Address: 0x19f0a0, Func Offset: 0x10
	// Func End, Address: 0x19f0a8, Func Offset: 0x18
}

// 
// Start address: 0x19f0b0
void vwGetViewAngle(float* ang)
{
	// Line 120, Address: 0x19f0b0, Func Offset: 0
	// Line 121, Address: 0x19f0c0, Func Offset: 0x10
	// Func End, Address: 0x19f0c8, Func Offset: 0x18
}

// 
// Start address: 0x19f0d0
void vwSetCoordRefAndEntou(_VbCOORDINATE* parent_p, float* ref, float cam_ang_y, float cam_ang_z, float cam_y, float cam_xz_r)
{
	float view_ang[4];
	// Line 184, Address: 0x19f0d0, Func Offset: 0
	// Line 187, Address: 0x19f100, Func Offset: 0x30
	// Line 188, Address: 0x19f108, Func Offset: 0x38
	// Line 190, Address: 0x19f110, Func Offset: 0x40
	// Line 191, Address: 0x19f124, Func Offset: 0x54
	// Line 192, Address: 0x19f128, Func Offset: 0x58
	// Line 193, Address: 0x19f12c, Func Offset: 0x5c
	// Line 196, Address: 0x19f134, Func Offset: 0x64
	// Line 197, Address: 0x19f148, Func Offset: 0x78
	// Line 199, Address: 0x19f164, Func Offset: 0x94
	// Line 200, Address: 0x19f174, Func Offset: 0xa4
	// Line 201, Address: 0x19f184, Func Offset: 0xb4
	// Line 203, Address: 0x19f194, Func Offset: 0xc4
	// Line 204, Address: 0x19f1c0, Func Offset: 0xf0
	// Line 206, Address: 0x19f1d4, Func Offset: 0x104
	// Line 207, Address: 0x19f1f4, Func Offset: 0x124
	// Line 208, Address: 0x19f204, Func Offset: 0x134
	// Line 209, Address: 0x19f224, Func Offset: 0x154
	// Func End, Address: 0x19f248, Func Offset: 0x178
}

// 
// Start address: 0x19f250
void vwSetViewInfo()
{
	// Line 227, Address: 0x19f250, Func Offset: 0
	// Line 228, Address: 0x19f258, Func Offset: 0x8
	// Line 232, Address: 0x19f268, Func Offset: 0x18
	// Line 234, Address: 0x19f280, Func Offset: 0x30
	// Line 235, Address: 0x19f298, Func Offset: 0x48
	// Func End, Address: 0x19f2a8, Func Offset: 0x58
}

// 
// Start address: 0x19f2b0
void vwSetViewInfoDirectMatrix(_VbCOORDINATE* pcoord, float cammat[4])
{
	// Line 254, Address: 0x19f2b0, Func Offset: 0
	// Line 255, Address: 0x19f2b8, Func Offset: 0x8
	// Line 256, Address: 0x19f2c0, Func Offset: 0x10
	// Line 257, Address: 0x19f2e8, Func Offset: 0x38
	// Func End, Address: 0x19f2f0, Func Offset: 0x40
}

