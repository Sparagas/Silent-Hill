typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef enum _enum : unsigned char;


typedef float type_0[4];
typedef float type_1[4][4];
typedef float type_2[4];

struct _anon0
{
	float start[4];
	float end[4];
};

struct _anon1
{
	int n_testnodes;
	int n_testpolygons;
	int n_hitpolygons;
};

struct _anon2
{
	float bmin[4];
	float bmax[4];
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
	float center[4];
	float radius;
};

struct _anon6
{
	float p0[4];
	float p1[4];
	float p2[4];
};

enum _enum : unsigned char
{
	NEGATIVE = 0xff,
	ZERO = 0,
	POSITIVE
};

float sg_matrix_unit[4][4];
float sg_vector_unit_w[4];
_anon1 sg_isectdgbwork;

void sgOBBFromAABB(_anon3* obb, _anon2* aabb);
float sgPointToLineDistance(float* p, _anon0* line);
float sgPointToLineNearestPoint(float* p, _anon0* line, float* near_p);
float sgPointToLineNearestPointAndType(float* p, _anon0* line, float* near_p, int* type);
float sgPointToInfiniteLineNearestPoint(float* p, _anon0* line, float* near_p);
int sgLineIntersectTriangle(_anon0* line, _anon6* tri, float* point);
float LinePointDistancePow(_anon0* line, float* p);
int sgLineCollideSphere(_anon0* line, _anon5* sphere);
int sgLineIntersectAABB(_anon0* line, _anon2* aabb, float* point);
int sgLineIntersectOBB(_anon0* line, _anon3* obb, float* point);
int sgLineIntersectPlane(_anon0* line, _anon4* plane, float* point);
int sgLineIntersectPlaneRatio(_anon0* line, _anon4* plane, float* u);
int sgPlaneIntersectPlane(_anon4* pa, _anon4* pb, _anon0* line);
int sgAABBCollidePoint(_anon2* aabb, float* point);
int sgOBBCollidePoint(_anon3* obb, float* point);
int sgLineCollideAABB(_anon0* line, _anon2* aabb);
int sgLineCollideOBB(_anon0* line, _anon3* obb);
int sgSphereCollideSphere(_anon5* sphere, _anon5* sphere_target);
float DistanceXYZ(float* a, float* b);
int sgSphereCollideAABB_Sub(_anon5* sphere, float* ao, float* ar);
int sgSphereCollideAABB(_anon5* sphere, _anon2* aabb);
int sgSphereCollideOBB(_anon5* sphere, _anon3* obb);
int sgAABBCollideAABB(_anon2* box1, _anon2* box2);
int sgAABBCollideOBB(_anon2* aabb, _anon3* obb);
int sgOBBCollideOBB(_anon3* box1, _anon3* box2);

// 
// Start address: 0x16fd30
void sgOBBFromAABB(_anon3* obb, _anon2* aabb)
{
	float center[4];
	float w[4];
	float v[4];
	// Line 18, Address: 0x16fd30, Func Offset: 0
	// Line 23, Address: 0x16fd34, Func Offset: 0x4
	// Line 24, Address: 0x16fd50, Func Offset: 0x20
	// Line 25, Address: 0x16fd7c, Func Offset: 0x4c
	// Line 26, Address: 0x16fd98, Func Offset: 0x68
	// Line 27, Address: 0x16fdc0, Func Offset: 0x90
	// Line 28, Address: 0x16fdd0, Func Offset: 0xa0
	// Line 30, Address: 0x16fdd4, Func Offset: 0xa4
	// Line 28, Address: 0x16fdd8, Func Offset: 0xa8
	// Line 29, Address: 0x16fddc, Func Offset: 0xac
	// Line 28, Address: 0x16fde8, Func Offset: 0xb8
	// Line 30, Address: 0x16fdec, Func Offset: 0xbc
	// Line 29, Address: 0x16fdf0, Func Offset: 0xc0
	// Line 30, Address: 0x16fdf4, Func Offset: 0xc4
	// Line 31, Address: 0x16fdfc, Func Offset: 0xcc
	// Func End, Address: 0x16fe04, Func Offset: 0xd4
}

// 
// Start address: 0x16fe10
float sgPointToLineDistance(float* p, _anon0* line)
{
	float a;
	float b;
	float c;
	float ov[4];
	float ld[4];
	float v[4];
	// Line 38, Address: 0x16fe10, Func Offset: 0
	// Line 44, Address: 0x16fe14, Func Offset: 0x4
	// Line 45, Address: 0x16fe30, Func Offset: 0x20
	// Line 47, Address: 0x16fe4c, Func Offset: 0x3c
	// Line 48, Address: 0x16fe84, Func Offset: 0x74
	// Line 49, Address: 0x16fea0, Func Offset: 0x90
	// Line 50, Address: 0x16fecc, Func Offset: 0xbc
	// Line 52, Address: 0x16fed0, Func Offset: 0xc0
	// Line 53, Address: 0x16fee8, Func Offset: 0xd8
	// Line 55, Address: 0x16ff04, Func Offset: 0xf4
	// Line 56, Address: 0x16ff3c, Func Offset: 0x12c
	// Line 57, Address: 0x16ff50, Func Offset: 0x140
	// Line 58, Address: 0x16ff7c, Func Offset: 0x16c
	// Line 60, Address: 0x16ff80, Func Offset: 0x170
	// Line 61, Address: 0x16ffac, Func Offset: 0x19c
	// Line 62, Address: 0x16ffd0, Func Offset: 0x1c0
	// Line 63, Address: 0x16fff8, Func Offset: 0x1e8
	// Line 64, Address: 0x170000, Func Offset: 0x1f0
	// Line 65, Address: 0x170008, Func Offset: 0x1f8
	// Func End, Address: 0x170010, Func Offset: 0x200
}

// 
// Start address: 0x170010
float sgPointToLineNearestPoint(float* p, _anon0* line, float* near_p)
{
	float a;
	float b;
	float c;
	float ov[4];
	float ld[4];
	float v[4];
	// Line 73, Address: 0x170010, Func Offset: 0
	// Line 79, Address: 0x170014, Func Offset: 0x4
	// Line 80, Address: 0x170030, Func Offset: 0x20
	// Line 82, Address: 0x17004c, Func Offset: 0x3c
	// Line 83, Address: 0x170084, Func Offset: 0x74
	// Line 84, Address: 0x170090, Func Offset: 0x80
	// Line 85, Address: 0x1700ac, Func Offset: 0x9c
	// Line 88, Address: 0x1700d8, Func Offset: 0xc8
	// Line 89, Address: 0x1700f0, Func Offset: 0xe0
	// Line 91, Address: 0x17010c, Func Offset: 0xfc
	// Line 92, Address: 0x170144, Func Offset: 0x134
	// Line 93, Address: 0x17014c, Func Offset: 0x13c
	// Line 94, Address: 0x170164, Func Offset: 0x154
	// Line 97, Address: 0x170190, Func Offset: 0x180
	// Line 98, Address: 0x1701bc, Func Offset: 0x1ac
	// Line 99, Address: 0x1701e0, Func Offset: 0x1d0
	// Line 100, Address: 0x170204, Func Offset: 0x1f4
	// Line 101, Address: 0x170228, Func Offset: 0x218
	// Line 102, Address: 0x170240, Func Offset: 0x230
	// Line 103, Address: 0x170248, Func Offset: 0x238
	// Line 104, Address: 0x170250, Func Offset: 0x240
	// Func End, Address: 0x170258, Func Offset: 0x248
}

// 
// Start address: 0x170260
float sgPointToLineNearestPointAndType(float* p, _anon0* line, float* near_p, int* type)
{
	float a;
	float b;
	float c;
	float ov[4];
	float ld[4];
	float v[4];
	// Line 113, Address: 0x170260, Func Offset: 0
	// Line 119, Address: 0x170264, Func Offset: 0x4
	// Line 120, Address: 0x170280, Func Offset: 0x20
	// Line 122, Address: 0x17029c, Func Offset: 0x3c
	// Line 123, Address: 0x1702d4, Func Offset: 0x74
	// Line 124, Address: 0x1702e0, Func Offset: 0x80
	// Line 125, Address: 0x1702fc, Func Offset: 0x9c
	// Line 126, Address: 0x170300, Func Offset: 0xa0
	// Line 125, Address: 0x170304, Func Offset: 0xa4
	// Line 126, Address: 0x170308, Func Offset: 0xa8
	// Line 129, Address: 0x170330, Func Offset: 0xd0
	// Line 130, Address: 0x170348, Func Offset: 0xe8
	// Line 132, Address: 0x170364, Func Offset: 0x104
	// Line 133, Address: 0x17039c, Func Offset: 0x13c
	// Line 134, Address: 0x1703a4, Func Offset: 0x144
	// Line 136, Address: 0x1703bc, Func Offset: 0x15c
	// Line 135, Address: 0x1703c0, Func Offset: 0x160
	// Line 136, Address: 0x1703c4, Func Offset: 0x164
	// Line 137, Address: 0x1703ec, Func Offset: 0x18c
	// Line 139, Address: 0x1703f0, Func Offset: 0x190
	// Line 140, Address: 0x1703f8, Func Offset: 0x198
	// Line 141, Address: 0x170424, Func Offset: 0x1c4
	// Line 142, Address: 0x170448, Func Offset: 0x1e8
	// Line 143, Address: 0x17046c, Func Offset: 0x20c
	// Line 144, Address: 0x170490, Func Offset: 0x230
	// Line 145, Address: 0x1704a8, Func Offset: 0x248
	// Line 146, Address: 0x1704b0, Func Offset: 0x250
	// Line 147, Address: 0x1704b8, Func Offset: 0x258
	// Func End, Address: 0x1704c0, Func Offset: 0x260
}

// 
// Start address: 0x1704c0
float sgPointToInfiniteLineNearestPoint(float* p, _anon0* line, float* near_p)
{
	float a;
	float b;
	float c;
	float ov[4];
	float ld[4];
	// Line 178, Address: 0x1704c0, Func Offset: 0
	// Line 182, Address: 0x1704c4, Func Offset: 0x4
	// Line 183, Address: 0x1704dc, Func Offset: 0x1c
	// Line 184, Address: 0x1704f8, Func Offset: 0x38
	// Line 185, Address: 0x170524, Func Offset: 0x64
	// Line 186, Address: 0x170548, Func Offset: 0x88
	// Line 187, Address: 0x17056c, Func Offset: 0xac
	// Line 188, Address: 0x170590, Func Offset: 0xd0
	// Line 189, Address: 0x1705a8, Func Offset: 0xe8
	// Line 190, Address: 0x1705b0, Func Offset: 0xf0
	// Line 191, Address: 0x1705b4, Func Offset: 0xf4
	// Func End, Address: 0x1705bc, Func Offset: 0xfc
}

// 
// Start address: 0x1705c0
int sgLineIntersectTriangle(_anon0* line, _anon6* tri, float* point)
{
	float dir[4];
	float len;
	int ret;
	// Line 234, Address: 0x1705c0, Func Offset: 0
	// Line 239, Address: 0x1705cc, Func Offset: 0xc
	// Line 234, Address: 0x1705d0, Func Offset: 0x10
	// Line 239, Address: 0x1705e0, Func Offset: 0x20
	// Line 240, Address: 0x1705f4, Func Offset: 0x34
	// Line 243, Address: 0x170618, Func Offset: 0x58
	// Line 244, Address: 0x170640, Func Offset: 0x80
	// Line 245, Address: 0x170648, Func Offset: 0x88
	// Line 246, Address: 0x170650, Func Offset: 0x90
	// Line 247, Address: 0x170680, Func Offset: 0xc0
	// Line 248, Address: 0x170688, Func Offset: 0xc8
	// Func End, Address: 0x17069c, Func Offset: 0xdc
}

// 
// Start address: 0x1706a0
float LinePointDistancePow(_anon0* line, float* p)
{
	float ps[4];
	float es[4];
	float v[4];
	float t;
	float r;
	// Line 253, Address: 0x1706a0, Func Offset: 0
	// Line 260, Address: 0x1706a4, Func Offset: 0x4
	// Line 262, Address: 0x1706c0, Func Offset: 0x20
	// Line 263, Address: 0x1706d8, Func Offset: 0x38
	// Line 264, Address: 0x170728, Func Offset: 0x88
	// Line 265, Address: 0x170740, Func Offset: 0xa0
	// Line 266, Address: 0x170748, Func Offset: 0xa8
	// Line 267, Address: 0x17075c, Func Offset: 0xbc
	// Line 269, Address: 0x170760, Func Offset: 0xc0
	// Line 270, Address: 0x170790, Func Offset: 0xf0
	// Line 271, Address: 0x1707ac, Func Offset: 0x10c
	// Line 273, Address: 0x1707d0, Func Offset: 0x130
	// Func End, Address: 0x1707d8, Func Offset: 0x138
}

// 
// Start address: 0x1707e0
int sgLineCollideSphere(_anon0* line, _anon5* sphere)
{
	float len;
	// Line 278, Address: 0x1707e0, Func Offset: 0
	// Line 282, Address: 0x1707e8, Func Offset: 0x8
	// Line 285, Address: 0x1707f4, Func Offset: 0x14
	// Line 288, Address: 0x170808, Func Offset: 0x28
	// Func End, Address: 0x170814, Func Offset: 0x34
}

// 
// Start address: 0x170820
int sgLineIntersectAABB(_anon0* line, _anon2* aabb, float* point)
{
	float dir[4];
	int ret;
	float len;
	// Line 303, Address: 0x170820, Func Offset: 0
	// Line 309, Address: 0x17082c, Func Offset: 0xc
	// Line 303, Address: 0x170830, Func Offset: 0x10
	// Line 309, Address: 0x170840, Func Offset: 0x20
	// Line 310, Address: 0x170854, Func Offset: 0x34
	// Line 311, Address: 0x17086c, Func Offset: 0x4c
	// Line 312, Address: 0x170890, Func Offset: 0x70
	// Line 313, Address: 0x170898, Func Offset: 0x78
	// Line 314, Address: 0x1708a0, Func Offset: 0x80
	// Line 315, Address: 0x1708d0, Func Offset: 0xb0
	// Line 316, Address: 0x1708d8, Func Offset: 0xb8
	// Func End, Address: 0x1708ec, Func Offset: 0xcc
}

// 
// Start address: 0x1708f0
int sgLineIntersectOBB(_anon0* line, _anon3* obb, float* point)
{
	float dir[4];
	int ret;
	float len;
	// Line 328, Address: 0x1708f0, Func Offset: 0
	// Line 333, Address: 0x1708fc, Func Offset: 0xc
	// Line 328, Address: 0x170900, Func Offset: 0x10
	// Line 333, Address: 0x170910, Func Offset: 0x20
	// Line 335, Address: 0x170924, Func Offset: 0x34
	// Line 336, Address: 0x17093c, Func Offset: 0x4c
	// Line 337, Address: 0x170960, Func Offset: 0x70
	// Line 338, Address: 0x170968, Func Offset: 0x78
	// Line 339, Address: 0x170970, Func Offset: 0x80
	// Line 340, Address: 0x1709a0, Func Offset: 0xb0
	// Line 341, Address: 0x1709a8, Func Offset: 0xb8
	// Func End, Address: 0x1709bc, Func Offset: 0xcc
}

// 
// Start address: 0x1709c0
int sgLineIntersectPlane(_anon0* line, _anon4* plane, float* point)
{
	float len_s;
	float len_e;
	float d;
	_enum s;
	_enum e;
	// Line 364, Address: 0x1709c0, Func Offset: 0
	// Line 365, Address: 0x1709e0, Func Offset: 0x20
	// Line 364, Address: 0x1709f0, Func Offset: 0x30
	// Line 365, Address: 0x1709f4, Func Offset: 0x34
	// Line 366, Address: 0x170a38, Func Offset: 0x78
	// Line 367, Address: 0x170a5c, Func Offset: 0x9c
	// Line 366, Address: 0x170a6c, Func Offset: 0xac
	// Line 367, Address: 0x170a70, Func Offset: 0xb0
	// Line 369, Address: 0x170ab8, Func Offset: 0xf8
	// Line 370, Address: 0x170ad0, Func Offset: 0x110
	// Line 371, Address: 0x170ad8, Func Offset: 0x118
	// Line 372, Address: 0x170ae0, Func Offset: 0x120
	// Line 373, Address: 0x170ae8, Func Offset: 0x128
	// Line 374, Address: 0x170af0, Func Offset: 0x130
	// Line 375, Address: 0x170af8, Func Offset: 0x138
	// Line 376, Address: 0x170b00, Func Offset: 0x140
	// Line 379, Address: 0x170b08, Func Offset: 0x148
	// Line 381, Address: 0x170b10, Func Offset: 0x150
	// Line 380, Address: 0x170b14, Func Offset: 0x154
	// Line 381, Address: 0x170b18, Func Offset: 0x158
	// Line 383, Address: 0x170b40, Func Offset: 0x180
	// Line 384, Address: 0x170b48, Func Offset: 0x188
	// Func End, Address: 0x170b50, Func Offset: 0x190
}

// 
// Start address: 0x170b50
int sgLineIntersectPlaneRatio(_anon0* line, _anon4* plane, float* u)
{
	float len_s;
	float len_e;
	_enum s;
	_enum e;
	// Line 406, Address: 0x170b50, Func Offset: 0
	// Line 407, Address: 0x170b70, Func Offset: 0x20
	// Line 406, Address: 0x170b80, Func Offset: 0x30
	// Line 407, Address: 0x170b84, Func Offset: 0x34
	// Line 408, Address: 0x170bc8, Func Offset: 0x78
	// Line 409, Address: 0x170bec, Func Offset: 0x9c
	// Line 408, Address: 0x170bfc, Func Offset: 0xac
	// Line 409, Address: 0x170c00, Func Offset: 0xb0
	// Line 411, Address: 0x170c48, Func Offset: 0xf8
	// Line 412, Address: 0x170c60, Func Offset: 0x110
	// Line 413, Address: 0x170c68, Func Offset: 0x118
	// Line 414, Address: 0x170c70, Func Offset: 0x120
	// Line 415, Address: 0x170c78, Func Offset: 0x128
	// Line 417, Address: 0x170c80, Func Offset: 0x130
	// Line 418, Address: 0x170c8c, Func Offset: 0x13c
	// Line 420, Address: 0x170c90, Func Offset: 0x140
	// Line 421, Address: 0x170c98, Func Offset: 0x148
	// Line 422, Address: 0x170ca4, Func Offset: 0x154
	// Line 423, Address: 0x170ca8, Func Offset: 0x158
	// Line 424, Address: 0x170cb0, Func Offset: 0x160
	// Func End, Address: 0x170cb8, Func Offset: 0x168
}

// 
// Start address: 0x170cc0
int sgPlaneIntersectPlane(_anon4* pa, _anon4* pb, _anon0* line)
{
	float n[4];
	float p1[4];
	float p2[4];
	float c1;
	float c2;
	float dot_ab;
	float deter;
	// Line 437, Address: 0x170cc0, Func Offset: 0
	// Line 447, Address: 0x170cc4, Func Offset: 0x4
	// Line 448, Address: 0x170ce0, Func Offset: 0x20
	// Line 449, Address: 0x170d20, Func Offset: 0x60
	// Line 450, Address: 0x170d28, Func Offset: 0x68
	// Line 451, Address: 0x170d54, Func Offset: 0x94
	// Line 455, Address: 0x170d70, Func Offset: 0xb0
	// Line 453, Address: 0x170d74, Func Offset: 0xb4
	// Line 454, Address: 0x170d78, Func Offset: 0xb8
	// Line 452, Address: 0x170d7c, Func Offset: 0xbc
	// Line 453, Address: 0x170d80, Func Offset: 0xc0
	// Line 454, Address: 0x170d84, Func Offset: 0xc4
	// Line 452, Address: 0x170d88, Func Offset: 0xc8
	// Line 453, Address: 0x170d8c, Func Offset: 0xcc
	// Line 454, Address: 0x170d90, Func Offset: 0xd0
	// Line 452, Address: 0x170d94, Func Offset: 0xd4
	// Line 453, Address: 0x170d98, Func Offset: 0xd8
	// Line 452, Address: 0x170d9c, Func Offset: 0xdc
	// Line 454, Address: 0x170da0, Func Offset: 0xe0
	// Line 453, Address: 0x170da4, Func Offset: 0xe4
	// Line 454, Address: 0x170da8, Func Offset: 0xe8
	// Line 455, Address: 0x170dac, Func Offset: 0xec
	// Line 456, Address: 0x170dc8, Func Offset: 0x108
	// Line 457, Address: 0x170de8, Func Offset: 0x128
	// Line 458, Address: 0x170e04, Func Offset: 0x144
	// Line 460, Address: 0x170e20, Func Offset: 0x160
	// Line 461, Address: 0x170e28, Func Offset: 0x168
	// Func End, Address: 0x170e30, Func Offset: 0x170
}

// 
// Start address: 0x170e30
int sgAABBCollidePoint(_anon2* aabb, float* point)
{
	float v[4];
	// Line 513, Address: 0x170e30, Func Offset: 0
	// Line 536, Address: 0x170e34, Func Offset: 0x4
	// Line 537, Address: 0x170e50, Func Offset: 0x20
	// Line 538, Address: 0x170e88, Func Offset: 0x58
	// Line 539, Address: 0x170e90, Func Offset: 0x60
	// Line 540, Address: 0x170ea8, Func Offset: 0x78
	// Line 541, Address: 0x170ee0, Func Offset: 0xb0
	// Line 542, Address: 0x170ee8, Func Offset: 0xb8
	// Line 544, Address: 0x170ef0, Func Offset: 0xc0
	// Func End, Address: 0x170ef8, Func Offset: 0xc8
}

// 
// Start address: 0x170f00
int sgOBBCollidePoint(_anon3* obb, float* point)
{
	float inv[4][4];
	float v[4];
	_anon2 aabb;
	// Line 547, Address: 0x170f00, Func Offset: 0
	// Line 551, Address: 0x170f18, Func Offset: 0x18
	// Line 552, Address: 0x170f24, Func Offset: 0x24
	// Line 553, Address: 0x170f58, Func Offset: 0x58
	// Line 554, Address: 0x170f7c, Func Offset: 0x7c
	// Line 555, Address: 0x170fa0, Func Offset: 0xa0
	// Line 556, Address: 0x170fac, Func Offset: 0xac
	// Func End, Address: 0x170fc0, Func Offset: 0xc0
}

// 
// Start address: 0x170fc0
int sgLineCollideAABB(_anon0* line, _anon2* aabb)
{
	// Line 566, Address: 0x170fc0, Func Offset: 0
	// Line 572, Address: 0x170fd8, Func Offset: 0x18
	// Line 574, Address: 0x171000, Func Offset: 0x40
	// Func End, Address: 0x171014, Func Offset: 0x54
}

// 
// Start address: 0x171020
int sgLineCollideOBB(_anon0* line, _anon3* obb)
{
	// Line 584, Address: 0x171020, Func Offset: 0
	// Line 590, Address: 0x171038, Func Offset: 0x18
	// Line 592, Address: 0x171060, Func Offset: 0x40
	// Func End, Address: 0x171074, Func Offset: 0x54
}

// 
// Start address: 0x171080
int sgSphereCollideSphere(_anon5* sphere, _anon5* sphere_target)
{
	float len2;
	float r2;
	float v[4];
	// Line 603, Address: 0x171080, Func Offset: 0
	// Line 607, Address: 0x171084, Func Offset: 0x4
	// Line 608, Address: 0x17109c, Func Offset: 0x1c
	// Line 609, Address: 0x1710c0, Func Offset: 0x40
	// Line 610, Address: 0x1710cc, Func Offset: 0x4c
	// Line 611, Address: 0x1710d0, Func Offset: 0x50
	// Line 612, Address: 0x1710dc, Func Offset: 0x5c
	// Line 614, Address: 0x1710e8, Func Offset: 0x68
	// Line 615, Address: 0x1710f0, Func Offset: 0x70
	// Func End, Address: 0x1710f8, Func Offset: 0x78
}

// 
// Start address: 0x171100
float DistanceXYZ(float* a, float* b)
{
	float v[4];
	float r;
	// Line 620, Address: 0x171100, Func Offset: 0
	// Line 623, Address: 0x171104, Func Offset: 0x4
	// Line 624, Address: 0x17111c, Func Offset: 0x1c
	// Line 625, Address: 0x171144, Func Offset: 0x44
	// Line 626, Address: 0x171148, Func Offset: 0x48
	// Func End, Address: 0x171150, Func Offset: 0x50
}

// 
// Start address: 0x171150
int sgSphereCollideAABB_Sub(_anon5* sphere, float* ao, float* ar)
{
	float o_pos[4];
	float pos[4];
	float r;
	int i;
	int flag;
	// Line 632, Address: 0x171150, Func Offset: 0
	// Line 640, Address: 0x171158, Func Offset: 0x8
	// Line 632, Address: 0x17115c, Func Offset: 0xc
	// Line 638, Address: 0x171168, Func Offset: 0x18
	// Line 636, Address: 0x17116c, Func Offset: 0x1c
	// Line 640, Address: 0x171170, Func Offset: 0x20
	// Line 641, Address: 0x171184, Func Offset: 0x34
	// Line 642, Address: 0x171190, Func Offset: 0x40
	// Line 643, Address: 0x171198, Func Offset: 0x48
	// Line 644, Address: 0x1711ac, Func Offset: 0x5c
	// Line 643, Address: 0x1711b0, Func Offset: 0x60
	// Line 644, Address: 0x1711b4, Func Offset: 0x64
	// Line 643, Address: 0x1711b8, Func Offset: 0x68
	// Line 644, Address: 0x1711bc, Func Offset: 0x6c
	// Line 645, Address: 0x1711f8, Func Offset: 0xa8
	// Line 647, Address: 0x17120c, Func Offset: 0xbc
	// Line 648, Address: 0x171234, Func Offset: 0xe4
	// Line 649, Address: 0x171238, Func Offset: 0xe8
	// Line 652, Address: 0x171280, Func Offset: 0x130
	// Line 651, Address: 0x171284, Func Offset: 0x134
	// Line 652, Address: 0x171288, Func Offset: 0x138
	// Line 655, Address: 0x1712d0, Func Offset: 0x180
	// Line 654, Address: 0x1712d4, Func Offset: 0x184
	// Line 655, Address: 0x1712d8, Func Offset: 0x188
	// Line 658, Address: 0x171320, Func Offset: 0x1d0
	// Line 657, Address: 0x171324, Func Offset: 0x1d4
	// Line 658, Address: 0x171328, Func Offset: 0x1d8
	// Line 660, Address: 0x171370, Func Offset: 0x220
	// Line 662, Address: 0x1713b0, Func Offset: 0x260
	// Line 664, Address: 0x1713f0, Func Offset: 0x2a0
	// Line 666, Address: 0x171430, Func Offset: 0x2e0
	// Line 671, Address: 0x171438, Func Offset: 0x2e8
	// Line 673, Address: 0x171440, Func Offset: 0x2f0
	// Func End, Address: 0x171458, Func Offset: 0x308
}

// 
// Start address: 0x171460
int sgSphereCollideAABB(_anon5* sphere, _anon2* aabb)
{
	float center[4];
	float r[4];
	// Line 684, Address: 0x171460, Func Offset: 0
	// Line 688, Address: 0x171464, Func Offset: 0x4
	// Line 684, Address: 0x171468, Func Offset: 0x8
	// Line 688, Address: 0x17146c, Func Offset: 0xc
	// Line 689, Address: 0x171484, Func Offset: 0x24
	// Line 690, Address: 0x1714b0, Func Offset: 0x50
	// Line 691, Address: 0x1714cc, Func Offset: 0x6c
	// Line 692, Address: 0x1714f8, Func Offset: 0x98
	// Line 693, Address: 0x171504, Func Offset: 0xa4
	// Func End, Address: 0x171510, Func Offset: 0xb0
}

// 
// Start address: 0x171510
int sgSphereCollideOBB(_anon5* sphere, _anon3* obb)
{
	_anon5 local_sphere;
	float inv[4][4];
	// Line 703, Address: 0x171510, Func Offset: 0
	// Line 709, Address: 0x171528, Func Offset: 0x18
	// Line 710, Address: 0x171530, Func Offset: 0x20
	// Line 713, Address: 0x171564, Func Offset: 0x54
	// Line 711, Address: 0x171574, Func Offset: 0x64
	// Line 713, Address: 0x171578, Func Offset: 0x68
	// Line 714, Address: 0x171580, Func Offset: 0x70
	// Func End, Address: 0x171594, Func Offset: 0x84
}

// 
// Start address: 0x1715a0
int sgAABBCollideAABB(_anon2* box1, _anon2* box2)
{
	// Line 724, Address: 0x1715a4, Func Offset: 0x4
	// Line 726, Address: 0x1715ac, Func Offset: 0xc
	// Line 730, Address: 0x1715b8, Func Offset: 0x18
	// Line 726, Address: 0x1715bc, Func Offset: 0x1c
	// Line 730, Address: 0x1715c0, Func Offset: 0x20
	// Func End, Address: 0x1715c8, Func Offset: 0x28
}

// 
// Start address: 0x1715d0
int sgAABBCollideOBB(_anon2* aabb, _anon3* obb)
{
	_anon3 aabb_obb;
	float v[4];
	// Line 740, Address: 0x1715d0, Func Offset: 0
	// Line 744, Address: 0x1715d8, Func Offset: 0x8
	// Line 740, Address: 0x1715dc, Func Offset: 0xc
	// Line 744, Address: 0x1715e0, Func Offset: 0x10
	// Line 745, Address: 0x171608, Func Offset: 0x38
	// Line 746, Address: 0x171624, Func Offset: 0x54
	// Line 747, Address: 0x171650, Func Offset: 0x80
	// Line 749, Address: 0x171654, Func Offset: 0x84
	// Line 747, Address: 0x17165c, Func Offset: 0x8c
	// Line 749, Address: 0x171678, Func Offset: 0xa8
	// Line 750, Address: 0x17168c, Func Offset: 0xbc
	// Line 751, Address: 0x1716b8, Func Offset: 0xe8
	// Line 753, Address: 0x1716c8, Func Offset: 0xf8
	// Line 755, Address: 0x1716e4, Func Offset: 0x114
	// Line 756, Address: 0x1716ec, Func Offset: 0x11c
	// Line 757, Address: 0x1716f0, Func Offset: 0x120
	// Line 759, Address: 0x1716f8, Func Offset: 0x128
	// Func End, Address: 0x171704, Func Offset: 0x134
}

// 
// Start address: 0x171710
int sgOBBCollideOBB(_anon3* box1, _anon3* box2)
{
	// Line 770, Address: 0x171714, Func Offset: 0x4
	// Line 772, Address: 0x17171c, Func Offset: 0xc
	// Line 776, Address: 0x171728, Func Offset: 0x18
	// Line 772, Address: 0x17172c, Func Offset: 0x1c
	// Line 776, Address: 0x171730, Func Offset: 0x20
	// Func End, Address: 0x171738, Func Offset: 0x28
}

