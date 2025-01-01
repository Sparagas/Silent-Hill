typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef union _anon9;

typedef int(*type_0)(_anon2*);
typedef int(*type_2)(_anon2*);
typedef int(*type_9)(_anon2*);
typedef int(*type_10)(_anon2*);

typedef float type_1[4];
typedef float type_3[4][8];
typedef float type_4[8];
typedef _anon2* type_5[256];
typedef int type_6[4];
typedef int type_7[4][6];
typedef float type_8[4][8];
typedef _anon8 type_11[4];
typedef float type_12[4];
typedef float type_13[4][4];
typedef _anon9 type_14[0];

struct _anon0
{
	int n_polygons;
	int polygons_offset;
};

struct _anon1
{
	float bmin[4];
	float bmax[4];
};

struct _anon2
{
	_anon9 vertex[0];
};

struct _anon3
{
	float mat[4][4];
	float half_w[4];
};

struct _anon4
{
	float abcd[4];
};

struct _anon5
{
	float start[4];
	float end[4];
};

struct _anon6
{
	float center[4];
	float radius;
};

struct _anon7
{
	float work[8];
	_anon2* hit_polygons[256];
	int n_hit;
	void* target;
};

struct _anon8
{
	unsigned char next_offset;
	unsigned char flags;
	short id;
};

union _anon9
{
	float node[4];
	_anon8 data[4];
};

float sg_matrix_unit[4][4];
_anon7 hit_work;
int(*HitWorkAdd)(_anon2*);
int(*LineFirstHit)(_anon2*);
int(*LineFirstHitFromPositive)(_anon2*);
int(*LineFirstHitFromNegative)(_anon2*);

void sgPolyPoolMakePolygonsFromOBB(_anon0* pool, _anon3* obb);
_anon2* HitWorkPoly(int idx);
int LineFirstHitFromPositive(_anon2* poly);
int LineFirstHitFromNegative(_anon2* poly);
int sgPolyPoolTestSphere(_anon0* ppool, _anon6* ball);
int HitWorkAdd(_anon2* poly);
int sgPolyPoolTestLine(_anon0* ppool, _anon5* line);
int sgPolyPoolTestLineFirstFrontHit(_anon0* ppool, _anon5* line);
int sgPolyPoolTestLineFirstBackHit(_anon0* ppool, _anon5* line);
void sgPolyPoolTestResultClear();
int sgPolyPoolTestResultNPolygons();
_anon2* sgPolyPoolTestResultPolygon(int idx);

// 
// Start address: 0x172960
void sgPolyPoolMakePolygonsFromOBB(_anon0* pool, _anon3* obb)
{
	float p[4][8];
	_anon2* poly;
	int i;
	float v[4];
	int j;
	int idx;
	int box_idx[4][6];
	float s[4][8];
	// Line 62, Address: 0x172960, Func Offset: 0
	// Line 38, Address: 0x172964, Func Offset: 0x4
	// Line 62, Address: 0x172968, Func Offset: 0x8
	// Line 64, Address: 0x17296c, Func Offset: 0xc
	// Line 66, Address: 0x172988, Func Offset: 0x28
	// Line 67, Address: 0x1729a4, Func Offset: 0x44
	// Line 68, Address: 0x1729dc, Func Offset: 0x7c
	// Line 70, Address: 0x1729ec, Func Offset: 0x8c
	// Line 71, Address: 0x1729f0, Func Offset: 0x90
	// Line 73, Address: 0x172a08, Func Offset: 0xa8
	// Line 74, Address: 0x172a0c, Func Offset: 0xac
	// Line 73, Address: 0x172a10, Func Offset: 0xb0
	// Line 74, Address: 0x172a14, Func Offset: 0xb4
	// Line 75, Address: 0x172a20, Func Offset: 0xc0
	// Line 76, Address: 0x172a2c, Func Offset: 0xcc
	// Line 77, Address: 0x172a30, Func Offset: 0xd0
	// Line 76, Address: 0x172a34, Func Offset: 0xd4
	// Line 77, Address: 0x172a5c, Func Offset: 0xfc
	// Line 78, Address: 0x172a6c, Func Offset: 0x10c
	// Line 79, Address: 0x172a70, Func Offset: 0x110
	// Line 78, Address: 0x172a74, Func Offset: 0x114
	// Line 79, Address: 0x172a7c, Func Offset: 0x11c
	// Line 80, Address: 0x172a8c, Func Offset: 0x12c
	// Func End, Address: 0x172a94, Func Offset: 0x134
}

// 
// Start address: 0x172aa0
_anon2* HitWorkPoly(int idx)
{
	// Line 133, Address: 0x172aa0, Func Offset: 0
	// Line 134, Address: 0x172ab0, Func Offset: 0x10
	// Func End, Address: 0x172ab8, Func Offset: 0x18
}

// 
// Start address: 0x172ac0
int LineFirstHitFromPositive(_anon2* poly)
{
	_anon5* line;
	_anon4 plane;
	float u;
	// Line 173, Address: 0x172ac0, Func Offset: 0
	// Line 174, Address: 0x172ac4, Func Offset: 0x4
	// Line 173, Address: 0x172ac8, Func Offset: 0x8
	// Line 178, Address: 0x172acc, Func Offset: 0xc
	// Line 173, Address: 0x172ad0, Func Offset: 0x10
	// Line 174, Address: 0x172ad8, Func Offset: 0x18
	// Line 178, Address: 0x172adc, Func Offset: 0x1c
	// Line 179, Address: 0x172ae4, Func Offset: 0x24
	// Line 180, Address: 0x172b6c, Func Offset: 0xac
	// Line 182, Address: 0x172b78, Func Offset: 0xb8
	// Line 183, Address: 0x172b88, Func Offset: 0xc8
	// Line 186, Address: 0x172b98, Func Offset: 0xd8
	// Line 184, Address: 0x172b9c, Func Offset: 0xdc
	// Line 185, Address: 0x172ba4, Func Offset: 0xe4
	// Line 186, Address: 0x172bb0, Func Offset: 0xf0
	// Line 187, Address: 0x172bb4, Func Offset: 0xf4
	// Line 190, Address: 0x172bc0, Func Offset: 0x100
	// Line 187, Address: 0x172bc4, Func Offset: 0x104
	// Line 190, Address: 0x172bc8, Func Offset: 0x108
	// Line 191, Address: 0x172bd8, Func Offset: 0x118
	// Line 192, Address: 0x172bdc, Func Offset: 0x11c
	// Line 193, Address: 0x172be4, Func Offset: 0x124
	// Line 194, Address: 0x172be8, Func Offset: 0x128
	// Line 195, Address: 0x172bf0, Func Offset: 0x130
	// Func End, Address: 0x172c04, Func Offset: 0x144
}

// 
// Start address: 0x172c10
int LineFirstHitFromNegative(_anon2* poly)
{
	_anon5* line;
	_anon4 plane;
	float u;
	// Line 199, Address: 0x172c10, Func Offset: 0
	// Line 200, Address: 0x172c14, Func Offset: 0x4
	// Line 199, Address: 0x172c18, Func Offset: 0x8
	// Line 204, Address: 0x172c1c, Func Offset: 0xc
	// Line 199, Address: 0x172c20, Func Offset: 0x10
	// Line 200, Address: 0x172c28, Func Offset: 0x18
	// Line 204, Address: 0x172c2c, Func Offset: 0x1c
	// Line 205, Address: 0x172c34, Func Offset: 0x24
	// Line 206, Address: 0x172cbc, Func Offset: 0xac
	// Line 208, Address: 0x172cc8, Func Offset: 0xb8
	// Line 209, Address: 0x172cd8, Func Offset: 0xc8
	// Line 212, Address: 0x172ce8, Func Offset: 0xd8
	// Line 210, Address: 0x172cec, Func Offset: 0xdc
	// Line 211, Address: 0x172cf4, Func Offset: 0xe4
	// Line 212, Address: 0x172d00, Func Offset: 0xf0
	// Line 213, Address: 0x172d04, Func Offset: 0xf4
	// Line 216, Address: 0x172d10, Func Offset: 0x100
	// Line 213, Address: 0x172d14, Func Offset: 0x104
	// Line 216, Address: 0x172d18, Func Offset: 0x108
	// Line 217, Address: 0x172d28, Func Offset: 0x118
	// Line 218, Address: 0x172d2c, Func Offset: 0x11c
	// Line 219, Address: 0x172d34, Func Offset: 0x124
	// Line 220, Address: 0x172d38, Func Offset: 0x128
	// Line 221, Address: 0x172d40, Func Offset: 0x130
	// Func End, Address: 0x172d54, Func Offset: 0x144
}

// 
// Start address: 0x172d60
int sgPolyPoolTestSphere(_anon0* ppool, _anon6* ball)
{
	// Line 233, Address: 0x172d60, Func Offset: 0
	// Line 235, Address: 0x172d78, Func Offset: 0x18
	// Line 234, Address: 0x172d7c, Func Offset: 0x1c
	// Line 235, Address: 0x172d80, Func Offset: 0x20
	// Line 255, Address: 0x172d84, Func Offset: 0x24
	// Line 256, Address: 0x172d90, Func Offset: 0x30
	// Line 258, Address: 0x172da0, Func Offset: 0x40
	// Func End, Address: 0x172db8, Func Offset: 0x58
}

// 
// Start address: 0x172dc0
int HitWorkAdd(_anon2* poly)
{
	// Line 138, Address: 0x172dc0, Func Offset: 0
	// Line 139, Address: 0x172dc8, Func Offset: 0x8
	// Line 141, Address: 0x172dd4, Func Offset: 0x14
	// Line 142, Address: 0x172ddc, Func Offset: 0x1c
	// Line 143, Address: 0x172de0, Func Offset: 0x20
	// Line 144, Address: 0x172de8, Func Offset: 0x28
	// Line 143, Address: 0x172dec, Func Offset: 0x2c
	// Line 145, Address: 0x172df0, Func Offset: 0x30
	// Line 143, Address: 0x172df4, Func Offset: 0x34
	// Line 144, Address: 0x172dfc, Func Offset: 0x3c
	// Line 145, Address: 0x172e0c, Func Offset: 0x4c
	// Line 146, Address: 0x172e10, Func Offset: 0x50
	// Func End, Address: 0x172e18, Func Offset: 0x58
}

// 
// Start address: 0x172e20
int sgPolyPoolTestLine(_anon0* ppool, _anon5* line)
{
	// Line 290, Address: 0x172e20, Func Offset: 0
	// Line 292, Address: 0x172e38, Func Offset: 0x18
	// Line 291, Address: 0x172e3c, Func Offset: 0x1c
	// Line 292, Address: 0x172e40, Func Offset: 0x20
	// Line 297, Address: 0x172e44, Func Offset: 0x24
	// Line 298, Address: 0x172e50, Func Offset: 0x30
	// Line 299, Address: 0x172e60, Func Offset: 0x40
	// Func End, Address: 0x172e78, Func Offset: 0x58
}

// 
// Start address: 0x172e80
int sgPolyPoolTestLineFirstFrontHit(_anon0* ppool, _anon5* line)
{
	// Line 339, Address: 0x172e80, Func Offset: 0
	// Line 346, Address: 0x172e84, Func Offset: 0x4
	// Line 339, Address: 0x172e88, Func Offset: 0x8
	// Line 341, Address: 0x172e9c, Func Offset: 0x1c
	// Line 340, Address: 0x172ea0, Func Offset: 0x20
	// Line 341, Address: 0x172ea4, Func Offset: 0x24
	// Line 347, Address: 0x172ea8, Func Offset: 0x28
	// Line 346, Address: 0x172eac, Func Offset: 0x2c
	// Line 347, Address: 0x172eb0, Func Offset: 0x30
	// Line 348, Address: 0x172eb8, Func Offset: 0x38
	// Line 349, Address: 0x172ec8, Func Offset: 0x48
	// Func End, Address: 0x172ee0, Func Offset: 0x60
}

// 
// Start address: 0x172ee0
int sgPolyPoolTestLineFirstBackHit(_anon0* ppool, _anon5* line)
{
	// Line 365, Address: 0x172ee0, Func Offset: 0
	// Line 372, Address: 0x172ee4, Func Offset: 0x4
	// Line 365, Address: 0x172ee8, Func Offset: 0x8
	// Line 367, Address: 0x172efc, Func Offset: 0x1c
	// Line 366, Address: 0x172f00, Func Offset: 0x20
	// Line 367, Address: 0x172f04, Func Offset: 0x24
	// Line 373, Address: 0x172f08, Func Offset: 0x28
	// Line 372, Address: 0x172f0c, Func Offset: 0x2c
	// Line 373, Address: 0x172f10, Func Offset: 0x30
	// Line 374, Address: 0x172f18, Func Offset: 0x38
	// Line 375, Address: 0x172f28, Func Offset: 0x48
	// Func End, Address: 0x172f40, Func Offset: 0x60
}

// 
// Start address: 0x172f40
void sgPolyPoolTestResultClear()
{
	// Line 387, Address: 0x172f40, Func Offset: 0
	// Line 388, Address: 0x172f44, Func Offset: 0x4
	// Func End, Address: 0x172f4c, Func Offset: 0xc
}

// 
// Start address: 0x172f50
int sgPolyPoolTestResultNPolygons()
{
	// Line 397, Address: 0x172f50, Func Offset: 0
	// Line 398, Address: 0x172f54, Func Offset: 0x4
	// Func End, Address: 0x172f5c, Func Offset: 0xc
}

// 
// Start address: 0x172f60
_anon2* sgPolyPoolTestResultPolygon(int idx)
{
	// Line 409, Address: 0x172f60, Func Offset: 0
	// Func End, Address: 0x172f68, Func Offset: 0x8
}

