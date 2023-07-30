typedef struct _VbCOORDINATE;
typedef struct _VW_VIEW_WORK;
typedef struct _anon0;
typedef struct _VbRVIEW;


typedef float type_0[4];
typedef float type_1[4];
typedef float type_2[4][4];

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

struct _VbRVIEW
{
	float vp[4];
	float vr[4];
	float rz;
	_VbCOORDINATE* super;
};

_VW_VIEW_WORK vwViewPointInfo;

void vwInitViewInfo();
void vwGetViewPosition(float* pos);
void vwGetViewAngle(float* ang);
void vwSetCoordRefAndEntou(_VbCOORDINATE* parent_p, float* ref, float cam_ang_y, float cam_ang_z, float cam_y, float cam_xz_r);
void vwSetViewInfo();
void vwSetViewInfoDirectMatrix(_VbCOORDINATE* pcoord, float cammat[4]);

// 
// Start address: 0x1a36f0
void vwInitViewInfo()
{
	// Line 52, Address: 0x1a36f0, Func Offset: 0
	// Line 53, Address: 0x1a36f8, Func Offset: 0x8
	// Line 54, Address: 0x1a3704, Func Offset: 0x14
	// Line 55, Address: 0x1a3710, Func Offset: 0x20
	// Line 57, Address: 0x1a3720, Func Offset: 0x30
	// Line 59, Address: 0x1a372c, Func Offset: 0x3c
	// Line 61, Address: 0x1a373c, Func Offset: 0x4c
	// Line 63, Address: 0x1a3750, Func Offset: 0x60
	// Line 64, Address: 0x1a3758, Func Offset: 0x68
	// Func End, Address: 0x1a3768, Func Offset: 0x78
}

// 
// Start address: 0x1a3770
void vwGetViewPosition(float* pos)
{
	// Line 101, Address: 0x1a3770, Func Offset: 0
	// Line 102, Address: 0x1a3780, Func Offset: 0x10
	// Func End, Address: 0x1a3788, Func Offset: 0x18
}

// 
// Start address: 0x1a3790
void vwGetViewAngle(float* ang)
{
	// Line 120, Address: 0x1a3790, Func Offset: 0
	// Line 121, Address: 0x1a37a0, Func Offset: 0x10
	// Func End, Address: 0x1a37a8, Func Offset: 0x18
}

// 
// Start address: 0x1a37b0
void vwSetCoordRefAndEntou(_VbCOORDINATE* parent_p, float* ref, float cam_ang_y, float cam_ang_z, float cam_y, float cam_xz_r)
{
	float view_ang[4];
	// Line 184, Address: 0x1a37b0, Func Offset: 0
	// Line 187, Address: 0x1a37e0, Func Offset: 0x30
	// Line 188, Address: 0x1a37e8, Func Offset: 0x38
	// Line 190, Address: 0x1a37f0, Func Offset: 0x40
	// Line 191, Address: 0x1a3804, Func Offset: 0x54
	// Line 192, Address: 0x1a3808, Func Offset: 0x58
	// Line 193, Address: 0x1a380c, Func Offset: 0x5c
	// Line 196, Address: 0x1a381c, Func Offset: 0x6c
	// Line 197, Address: 0x1a3830, Func Offset: 0x80
	// Line 199, Address: 0x1a384c, Func Offset: 0x9c
	// Line 200, Address: 0x1a385c, Func Offset: 0xac
	// Line 201, Address: 0x1a386c, Func Offset: 0xbc
	// Line 203, Address: 0x1a387c, Func Offset: 0xcc
	// Line 204, Address: 0x1a38a8, Func Offset: 0xf8
	// Line 206, Address: 0x1a38bc, Func Offset: 0x10c
	// Line 207, Address: 0x1a38dc, Func Offset: 0x12c
	// Line 208, Address: 0x1a38ec, Func Offset: 0x13c
	// Line 209, Address: 0x1a390c, Func Offset: 0x15c
	// Func End, Address: 0x1a3930, Func Offset: 0x180
}

// 
// Start address: 0x1a3930
void vwSetViewInfo()
{
	// Line 227, Address: 0x1a3930, Func Offset: 0
	// Line 228, Address: 0x1a3938, Func Offset: 0x8
	// Line 232, Address: 0x1a3948, Func Offset: 0x18
	// Line 234, Address: 0x1a3960, Func Offset: 0x30
	// Line 235, Address: 0x1a3978, Func Offset: 0x48
	// Func End, Address: 0x1a3988, Func Offset: 0x58
}

// 
// Start address: 0x1a3990
void vwSetViewInfoDirectMatrix(_VbCOORDINATE* pcoord, float cammat[4])
{
	// Line 254, Address: 0x1a3990, Func Offset: 0
	// Line 255, Address: 0x1a3998, Func Offset: 0x8
	// Line 256, Address: 0x1a39a0, Func Offset: 0x10
	// Line 257, Address: 0x1a39c8, Func Offset: 0x38
	// Func End, Address: 0x1a39d0, Func Offset: 0x40
}

