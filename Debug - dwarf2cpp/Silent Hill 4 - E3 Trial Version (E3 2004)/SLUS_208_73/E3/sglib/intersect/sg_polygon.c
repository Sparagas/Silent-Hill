typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef union _anon7;

typedef int(*type_0)(_anon0*);
typedef int(*type_2)(_anon0*);

typedef float type_1[4];
typedef _anon6 type_3[4];
typedef _anon7 type_4[0];

struct _anon0
{
	_anon7 vertex[0];
};

struct _anon1
{
	float abcd[4];
};

struct _anon2
{
	float start[4];
	float end[4];
};

struct _anon3
{
	float center[4];
	float radius;
};

struct _anon4
{
	float bmin[4];
	float bmax[4];
};

struct _anon5
{
	float p0[4];
	float p1[4];
	float p2[4];
};

struct _anon6
{
	unsigned char next_offset;
	unsigned char flags;
	short id;
};

union _anon7
{
	float node[4];
	_anon6 data[4];
};

int(*hit_callback)(_anon0*);

void sgPolygonGetPlane(_anon0* poly, _anon1* plane);
int sgPolygonIntersectLine(_anon0* poly, _anon2* line, float* point);
void sgPolygonsHitSetCallback(int(*func)(_anon0*));
int sgPolygonsCollideSphere(_anon0* poly, int n_polygons, _anon3* ball);
int sgPolygonCollideSphere(_anon0* poly, _anon3* ball);
int sgPolygonsCollideLine(_anon0* poly, int n_polygons, _anon2* line);
float sgPolygonNearestPoint(_anon0* poly, float* p, float* near_p);
float sgPolygonNearestPointAndType(_anon0* poly, float* p, float* near_p, int* type);

// 
// Start address: 0x171740
void sgPolygonGetPlane(_anon0* poly, _anon1* plane)
{
	float tv0[4];
	float tv1[4];
	float v[4];
	// Line 21, Address: 0x171740, Func Offset: 0
	// Line 26, Address: 0x171748, Func Offset: 0x8
	// Line 21, Address: 0x17174c, Func Offset: 0xc
	// Line 26, Address: 0x17175c, Func Offset: 0x1c
	// Line 27, Address: 0x171770, Func Offset: 0x30
	// Line 28, Address: 0x17178c, Func Offset: 0x4c
	// Line 29, Address: 0x1717b0, Func Offset: 0x70
	// Line 31, Address: 0x1717bc, Func Offset: 0x7c
	// Line 32, Address: 0x1717dc, Func Offset: 0x9c
	// Line 33, Address: 0x1717e8, Func Offset: 0xa8
	// Line 34, Address: 0x17180c, Func Offset: 0xcc
	// Line 35, Address: 0x171810, Func Offset: 0xd0
	// Line 36, Address: 0x171838, Func Offset: 0xf8
	// Line 37, Address: 0x17184c, Func Offset: 0x10c
	// Line 38, Address: 0x171868, Func Offset: 0x128
	// Func End, Address: 0x17187c, Func Offset: 0x13c
}

// 
// Start address: 0x171880
int sgPolygonIntersectLine(_anon0* poly, _anon2* line, float* point)
{
	int j;
	int n_vertices;
	float hv[4];
	_anon5 pol;
	// Line 52, Address: 0x171880, Func Offset: 0
	// Line 57, Address: 0x1718a8, Func Offset: 0x28
	// Line 59, Address: 0x1718c4, Func Offset: 0x44
	// Line 58, Address: 0x1718c8, Func Offset: 0x48
	// Line 59, Address: 0x1718cc, Func Offset: 0x4c
	// Line 61, Address: 0x1718e0, Func Offset: 0x60
	// Line 62, Address: 0x1718ec, Func Offset: 0x6c
	// Line 63, Address: 0x1718fc, Func Offset: 0x7c
	// Line 64, Address: 0x171904, Func Offset: 0x84
	// Line 65, Address: 0x171920, Func Offset: 0xa0
	// Line 67, Address: 0x171928, Func Offset: 0xa8
	// Line 68, Address: 0x171940, Func Offset: 0xc0
	// Line 69, Address: 0x171948, Func Offset: 0xc8
	// Func End, Address: 0x171970, Func Offset: 0xf0
}

// 
// Start address: 0x171970
void sgPolygonsHitSetCallback(int(*func)(_anon0*))
{
	// Line 78, Address: 0x171970, Func Offset: 0
	// Line 79, Address: 0x171974, Func Offset: 0x4
	// Func End, Address: 0x17197c, Func Offset: 0xc
}

// 
// Start address: 0x171980
int sgPolygonsCollideSphere(_anon0* poly, int n_polygons, _anon3* ball)
{
	int i;
	float r2;
	int n_vertices;
	float min[4];
	float max[4];
	float r[4];
	float c[4];
	float hv[4];
	int j;
	float m2;
	int rr;
	int check;
	float fnv[4];
	float tv0[4];
	float tv1[4];
	float plane[4];
	float v[4];
	float l;
	float* v0;
	float* v1;
	float ov[4];
	float tv[4];
	float vl;
	float ll;
	float d2;
	float tv2[4];
	// Line 183, Address: 0x171980, Func Offset: 0
	// Line 194, Address: 0x1719b8, Func Offset: 0x38
	// Line 195, Address: 0x1719c4, Func Offset: 0x44
	// Line 196, Address: 0x1719d0, Func Offset: 0x50
	// Line 197, Address: 0x1719d4, Func Offset: 0x54
	// Line 196, Address: 0x1719d8, Func Offset: 0x58
	// Line 197, Address: 0x1719e4, Func Offset: 0x64
	// Line 198, Address: 0x1719f8, Func Offset: 0x78
	// Line 200, Address: 0x171a18, Func Offset: 0x98
	// Line 201, Address: 0x171a24, Func Offset: 0xa4
	// Line 203, Address: 0x171a30, Func Offset: 0xb0
	// Line 210, Address: 0x171a38, Func Offset: 0xb8
	// Line 214, Address: 0x171a58, Func Offset: 0xd8
	// Line 215, Address: 0x171a60, Func Offset: 0xe0
	// Line 216, Address: 0x171a78, Func Offset: 0xf8
	// Line 217, Address: 0x171a8c, Func Offset: 0x10c
	// Line 218, Address: 0x171aa8, Func Offset: 0x128
	// Line 231, Address: 0x171ab4, Func Offset: 0x134
	// Line 232, Address: 0x171acc, Func Offset: 0x14c
	// Line 233, Address: 0x171ae8, Func Offset: 0x168
	// Line 238, Address: 0x171b0c, Func Offset: 0x18c
	// Line 239, Address: 0x171b38, Func Offset: 0x1b8
	// Line 244, Address: 0x171b50, Func Offset: 0x1d0
	// Line 240, Address: 0x171b54, Func Offset: 0x1d4
	// Line 244, Address: 0x171b58, Func Offset: 0x1d8
	// Line 240, Address: 0x171b5c, Func Offset: 0x1dc
	// Line 242, Address: 0x171b64, Func Offset: 0x1e4
	// Line 240, Address: 0x171b70, Func Offset: 0x1f0
	// Line 242, Address: 0x171b80, Func Offset: 0x200
	// Line 244, Address: 0x171ba8, Func Offset: 0x228
	// Line 245, Address: 0x171bc0, Func Offset: 0x240
	// Line 246, Address: 0x171bcc, Func Offset: 0x24c
	// Line 248, Address: 0x171bdc, Func Offset: 0x25c
	// Line 257, Address: 0x171bf4, Func Offset: 0x274
	// Line 256, Address: 0x171bfc, Func Offset: 0x27c
	// Line 257, Address: 0x171c00, Func Offset: 0x280
	// Line 250, Address: 0x171c08, Func Offset: 0x288
	// Line 257, Address: 0x171c0c, Func Offset: 0x28c
	// Line 250, Address: 0x171c30, Func Offset: 0x2b0
	// Line 257, Address: 0x171c34, Func Offset: 0x2b4
	// Line 250, Address: 0x171c38, Func Offset: 0x2b8
	// Line 257, Address: 0x171c3c, Func Offset: 0x2bc
	// Line 250, Address: 0x171c58, Func Offset: 0x2d8
	// Line 257, Address: 0x171c60, Func Offset: 0x2e0
	// Line 266, Address: 0x171c70, Func Offset: 0x2f0
	// Line 267, Address: 0x171c78, Func Offset: 0x2f8
	// Line 269, Address: 0x171c80, Func Offset: 0x300
	// Line 270, Address: 0x171c88, Func Offset: 0x308
	// Line 271, Address: 0x171c90, Func Offset: 0x310
	// Line 272, Address: 0x171c94, Func Offset: 0x314
	// Line 274, Address: 0x171c98, Func Offset: 0x318
	// Line 275, Address: 0x171ca8, Func Offset: 0x328
	// Line 278, Address: 0x171cb8, Func Offset: 0x338
	// Line 279, Address: 0x171cd8, Func Offset: 0x358
	// Line 280, Address: 0x171ce4, Func Offset: 0x364
	// Line 282, Address: 0x171d04, Func Offset: 0x384
	// Line 288, Address: 0x171d08, Func Offset: 0x388
	// Line 289, Address: 0x171d20, Func Offset: 0x3a0
	// Line 291, Address: 0x171d4c, Func Offset: 0x3cc
	// Line 292, Address: 0x171d54, Func Offset: 0x3d4
	// Line 296, Address: 0x171d58, Func Offset: 0x3d8
	// Line 297, Address: 0x171d74, Func Offset: 0x3f4
	// Line 298, Address: 0x171d98, Func Offset: 0x418
	// Line 299, Address: 0x171dbc, Func Offset: 0x43c
	// Line 300, Address: 0x171dc0, Func Offset: 0x440
	// Line 301, Address: 0x171dc4, Func Offset: 0x444
	// Line 303, Address: 0x171dd0, Func Offset: 0x450
	// Line 305, Address: 0x171e04, Func Offset: 0x484
	// Line 309, Address: 0x171e10, Func Offset: 0x490
	// Line 311, Address: 0x171e30, Func Offset: 0x4b0
	// Line 315, Address: 0x171e48, Func Offset: 0x4c8
	// Line 316, Address: 0x171e50, Func Offset: 0x4d0
	// Line 322, Address: 0x171e68, Func Offset: 0x4e8
	// Line 325, Address: 0x171e84, Func Offset: 0x504
	// Line 323, Address: 0x171e88, Func Offset: 0x508
	// Line 325, Address: 0x171e8c, Func Offset: 0x50c
	// Func End, Address: 0x171eb8, Func Offset: 0x538
}

// 
// Start address: 0x171ec0
int sgPolygonCollideSphere(_anon0* poly, _anon3* ball)
{
	int j;
	float r2;
	int n_vertices;
	int check;
	float fnv[4];
	float r[4];
	float c[4];
	float hv[4];
	float min[4];
	float max[4];
	float tv0[4];
	float tv1[4];
	float plane[4];
	float v[4];
	float l;
	float* v0;
	float* v1;
	float ov[4];
	float tv[4];
	float vl;
	float ll;
	float d2;
	float m2;
	float tv2[4];
	// Line 335, Address: 0x171ec0, Func Offset: 0
	// Line 349, Address: 0x171ec8, Func Offset: 0x8
	// Line 335, Address: 0x171ecc, Func Offset: 0xc
	// Line 349, Address: 0x171ef4, Func Offset: 0x34
	// Line 350, Address: 0x171efc, Func Offset: 0x3c
	// Line 351, Address: 0x171f08, Func Offset: 0x48
	// Line 352, Address: 0x171f0c, Func Offset: 0x4c
	// Line 351, Address: 0x171f10, Func Offset: 0x50
	// Line 352, Address: 0x171f1c, Func Offset: 0x5c
	// Line 353, Address: 0x171f30, Func Offset: 0x70
	// Line 354, Address: 0x171f50, Func Offset: 0x90
	// Line 355, Address: 0x171f5c, Func Offset: 0x9c
	// Line 357, Address: 0x171f68, Func Offset: 0xa8
	// Line 358, Address: 0x171f90, Func Offset: 0xd0
	// Line 359, Address: 0x171f94, Func Offset: 0xd4
	// Line 360, Address: 0x171fa0, Func Offset: 0xe0
	// Line 361, Address: 0x171fb8, Func Offset: 0xf8
	// Line 362, Address: 0x171fcc, Func Offset: 0x10c
	// Line 363, Address: 0x171fe8, Func Offset: 0x128
	// Line 364, Address: 0x171ff4, Func Offset: 0x134
	// Line 375, Address: 0x172000, Func Offset: 0x140
	// Line 376, Address: 0x172018, Func Offset: 0x158
	// Line 377, Address: 0x172034, Func Offset: 0x174
	// Line 379, Address: 0x172058, Func Offset: 0x198
	// Line 380, Address: 0x172084, Func Offset: 0x1c4
	// Line 385, Address: 0x17209c, Func Offset: 0x1dc
	// Line 381, Address: 0x1720a0, Func Offset: 0x1e0
	// Line 385, Address: 0x1720a4, Func Offset: 0x1e4
	// Line 381, Address: 0x1720a8, Func Offset: 0x1e8
	// Line 383, Address: 0x1720b0, Func Offset: 0x1f0
	// Line 381, Address: 0x1720bc, Func Offset: 0x1fc
	// Line 383, Address: 0x1720cc, Func Offset: 0x20c
	// Line 385, Address: 0x1720f4, Func Offset: 0x234
	// Line 386, Address: 0x17210c, Func Offset: 0x24c
	// Line 387, Address: 0x172118, Func Offset: 0x258
	// Line 388, Address: 0x172128, Func Offset: 0x268
	// Line 390, Address: 0x172130, Func Offset: 0x270
	// Line 396, Address: 0x172148, Func Offset: 0x288
	// Line 395, Address: 0x172150, Func Offset: 0x290
	// Line 396, Address: 0x172154, Func Offset: 0x294
	// Line 391, Address: 0x17215c, Func Offset: 0x29c
	// Line 396, Address: 0x172160, Func Offset: 0x2a0
	// Line 391, Address: 0x172184, Func Offset: 0x2c4
	// Line 396, Address: 0x172188, Func Offset: 0x2c8
	// Line 391, Address: 0x17218c, Func Offset: 0x2cc
	// Line 396, Address: 0x172190, Func Offset: 0x2d0
	// Line 391, Address: 0x1721b8, Func Offset: 0x2f8
	// Line 396, Address: 0x1721c0, Func Offset: 0x300
	// Line 406, Address: 0x1721d0, Func Offset: 0x310
	// Line 407, Address: 0x1721d8, Func Offset: 0x318
	// Line 409, Address: 0x1721dc, Func Offset: 0x31c
	// Line 410, Address: 0x1721e8, Func Offset: 0x328
	// Line 411, Address: 0x1721f0, Func Offset: 0x330
	// Line 412, Address: 0x1721f4, Func Offset: 0x334
	// Line 414, Address: 0x1721f8, Func Offset: 0x338
	// Line 415, Address: 0x172208, Func Offset: 0x348
	// Line 417, Address: 0x172218, Func Offset: 0x358
	// Line 418, Address: 0x172238, Func Offset: 0x378
	// Line 419, Address: 0x172244, Func Offset: 0x384
	// Line 420, Address: 0x17224c, Func Offset: 0x38c
	// Line 424, Address: 0x172250, Func Offset: 0x390
	// Line 425, Address: 0x172268, Func Offset: 0x3a8
	// Line 427, Address: 0x172294, Func Offset: 0x3d4
	// Line 428, Address: 0x17229c, Func Offset: 0x3dc
	// Line 431, Address: 0x1722a0, Func Offset: 0x3e0
	// Line 432, Address: 0x1722bc, Func Offset: 0x3fc
	// Line 433, Address: 0x1722e0, Func Offset: 0x420
	// Line 434, Address: 0x172300, Func Offset: 0x440
	// Line 435, Address: 0x172304, Func Offset: 0x444
	// Line 436, Address: 0x172308, Func Offset: 0x448
	// Line 439, Address: 0x172314, Func Offset: 0x454
	// Line 441, Address: 0x172340, Func Offset: 0x480
	// Line 443, Address: 0x17234c, Func Offset: 0x48c
	// Line 444, Address: 0x172354, Func Offset: 0x494
	// Line 446, Address: 0x172370, Func Offset: 0x4b0
	// Line 447, Address: 0x172378, Func Offset: 0x4b8
	// Line 450, Address: 0x172380, Func Offset: 0x4c0
	// Line 451, Address: 0x172388, Func Offset: 0x4c8
	// Func End, Address: 0x1723b8, Func Offset: 0x4f8
}

// 
// Start address: 0x1723c0
int sgPolygonsCollideLine(_anon0* poly, int n_polygons, _anon2* line)
{
	int i;
	float p[4];
	// Line 690, Address: 0x1723c0, Func Offset: 0
	// Line 764, Address: 0x1723e0, Func Offset: 0x20
	// Line 766, Address: 0x1723f0, Func Offset: 0x30
	// Line 767, Address: 0x17240c, Func Offset: 0x4c
	// Line 769, Address: 0x17241c, Func Offset: 0x5c
	// Line 773, Address: 0x172438, Func Offset: 0x78
	// Line 772, Address: 0x172440, Func Offset: 0x80
	// Line 773, Address: 0x172444, Func Offset: 0x84
	// Func End, Address: 0x172458, Func Offset: 0x98
}

// 
// Start address: 0x172460
float sgPolygonNearestPoint(_anon0* poly, float* p, float* near_p)
{
	float v[4];
	_anon1 plane;
	_anon2 line;
	float near_r;
	float r;
	int j;
	int n_vertices;
	float hv[4];
	float plane_p[4];
	float plane_r;
	int point_in;
	float* v0;
	float* v1;
	float ov[4];
	float tv[4];
	float tv2[4];
	// Line 782, Address: 0x172460, Func Offset: 0
	// Line 797, Address: 0x172488, Func Offset: 0x28
	// Line 782, Address: 0x17248c, Func Offset: 0x2c
	// Line 794, Address: 0x172494, Func Offset: 0x34
	// Line 797, Address: 0x172498, Func Offset: 0x38
	// Line 798, Address: 0x1724a0, Func Offset: 0x40
	// Line 799, Address: 0x1724a4, Func Offset: 0x44
	// Line 798, Address: 0x1724a8, Func Offset: 0x48
	// Line 799, Address: 0x1724ac, Func Offset: 0x4c
	// Line 798, Address: 0x1724b0, Func Offset: 0x50
	// Line 799, Address: 0x1724d8, Func Offset: 0x78
	// Line 800, Address: 0x1724f8, Func Offset: 0x98
	// Line 801, Address: 0x172514, Func Offset: 0xb4
	// Line 804, Address: 0x17251c, Func Offset: 0xbc
	// Line 806, Address: 0x172524, Func Offset: 0xc4
	// Line 804, Address: 0x172528, Func Offset: 0xc8
	// Line 806, Address: 0x17252c, Func Offset: 0xcc
	// Line 807, Address: 0x172548, Func Offset: 0xe8
	// Line 814, Address: 0x172550, Func Offset: 0xf0
	// Line 815, Address: 0x17255c, Func Offset: 0xfc
	// Line 817, Address: 0x172560, Func Offset: 0x100
	// Line 818, Address: 0x172568, Func Offset: 0x108
	// Line 819, Address: 0x172570, Func Offset: 0x110
	// Line 820, Address: 0x172574, Func Offset: 0x114
	// Line 821, Address: 0x172578, Func Offset: 0x118
	// Line 822, Address: 0x172590, Func Offset: 0x130
	// Line 825, Address: 0x1725a4, Func Offset: 0x144
	// Line 826, Address: 0x1725c8, Func Offset: 0x168
	// Line 827, Address: 0x172608, Func Offset: 0x1a8
	// Line 828, Address: 0x17260c, Func Offset: 0x1ac
	// Line 830, Address: 0x172610, Func Offset: 0x1b0
	// Line 831, Address: 0x17261c, Func Offset: 0x1bc
	// Line 832, Address: 0x172628, Func Offset: 0x1c8
	// Line 833, Address: 0x172638, Func Offset: 0x1d8
	// Line 834, Address: 0x172644, Func Offset: 0x1e4
	// Line 835, Address: 0x17264c, Func Offset: 0x1ec
	// Line 837, Address: 0x172650, Func Offset: 0x1f0
	// Line 839, Address: 0x172664, Func Offset: 0x204
	// Line 840, Address: 0x17266c, Func Offset: 0x20c
	// Line 841, Address: 0x172678, Func Offset: 0x218
	// Line 842, Address: 0x17267c, Func Offset: 0x21c
	// Line 844, Address: 0x172684, Func Offset: 0x224
	// Line 847, Address: 0x172688, Func Offset: 0x228
	// Line 846, Address: 0x17268c, Func Offset: 0x22c
	// Line 847, Address: 0x172690, Func Offset: 0x230
	// Func End, Address: 0x1726b8, Func Offset: 0x258
}

// 
// Start address: 0x1726c0
float sgPolygonNearestPointAndType(_anon0* poly, float* p, float* near_p, int* type)
{
	float v[4];
	_anon1 plane;
	_anon2 line;
	float near_r;
	float r;
	int j;
	int n_vertices;
	float hv[4];
	float plane_p[4];
	float plane_r;
	int point_in;
	int tp;
	int near_type;
	float* v0;
	float* v1;
	float ov[4];
	float tv[4];
	float tv2[4];
	// Line 856, Address: 0x1726c0, Func Offset: 0
	// Line 868, Address: 0x1726d8, Func Offset: 0x18
	// Line 856, Address: 0x1726dc, Func Offset: 0x1c
	// Line 873, Address: 0x1726f8, Func Offset: 0x38
	// Line 856, Address: 0x1726fc, Func Offset: 0x3c
	// Line 870, Address: 0x172704, Func Offset: 0x44
	// Line 873, Address: 0x172708, Func Offset: 0x48
	// Line 874, Address: 0x172710, Func Offset: 0x50
	// Line 875, Address: 0x172714, Func Offset: 0x54
	// Line 874, Address: 0x172718, Func Offset: 0x58
	// Line 875, Address: 0x17271c, Func Offset: 0x5c
	// Line 874, Address: 0x172720, Func Offset: 0x60
	// Line 875, Address: 0x172748, Func Offset: 0x88
	// Line 876, Address: 0x172768, Func Offset: 0xa8
	// Line 877, Address: 0x172784, Func Offset: 0xc4
	// Line 880, Address: 0x17278c, Func Offset: 0xcc
	// Line 882, Address: 0x172794, Func Offset: 0xd4
	// Line 880, Address: 0x172798, Func Offset: 0xd8
	// Line 882, Address: 0x17279c, Func Offset: 0xdc
	// Line 883, Address: 0x1727b8, Func Offset: 0xf8
	// Line 890, Address: 0x1727c0, Func Offset: 0x100
	// Line 891, Address: 0x1727cc, Func Offset: 0x10c
	// Line 893, Address: 0x1727d0, Func Offset: 0x110
	// Line 894, Address: 0x1727d8, Func Offset: 0x118
	// Line 895, Address: 0x1727e0, Func Offset: 0x120
	// Line 896, Address: 0x1727e4, Func Offset: 0x124
	// Line 897, Address: 0x1727e8, Func Offset: 0x128
	// Line 898, Address: 0x172800, Func Offset: 0x140
	// Line 901, Address: 0x172814, Func Offset: 0x154
	// Line 902, Address: 0x172838, Func Offset: 0x178
	// Line 903, Address: 0x172878, Func Offset: 0x1b8
	// Line 904, Address: 0x17287c, Func Offset: 0x1bc
	// Line 906, Address: 0x172880, Func Offset: 0x1c0
	// Line 907, Address: 0x17288c, Func Offset: 0x1cc
	// Line 908, Address: 0x172898, Func Offset: 0x1d8
	// Line 909, Address: 0x1728ac, Func Offset: 0x1ec
	// Line 910, Address: 0x1728b8, Func Offset: 0x1f8
	// Line 911, Address: 0x1728c0, Func Offset: 0x200
	// Line 912, Address: 0x1728c4, Func Offset: 0x204
	// Line 914, Address: 0x1728c8, Func Offset: 0x208
	// Line 916, Address: 0x1728dc, Func Offset: 0x21c
	// Line 917, Address: 0x1728e0, Func Offset: 0x220
	// Line 918, Address: 0x1728e8, Func Offset: 0x228
	// Line 919, Address: 0x1728f0, Func Offset: 0x230
	// Line 920, Address: 0x1728f8, Func Offset: 0x238
	// Line 921, Address: 0x172904, Func Offset: 0x244
	// Line 922, Address: 0x172908, Func Offset: 0x248
	// Line 923, Address: 0x172910, Func Offset: 0x250
	// Line 925, Address: 0x172914, Func Offset: 0x254
	// Line 927, Address: 0x172918, Func Offset: 0x258
	// Line 928, Address: 0x17291c, Func Offset: 0x25c
	// Line 929, Address: 0x172920, Func Offset: 0x260
	// Func End, Address: 0x172954, Func Offset: 0x294
}

