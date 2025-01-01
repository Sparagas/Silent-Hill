typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct HogePlane;
typedef union _anon4;
typedef enum sfMaphitSpecType : unsigned char;
typedef struct _anon5;
typedef enum _enum : unsigned char;


typedef _anon0 type_0[4];
typedef _anon4 type_1[0];
typedef HogePlane type_2[32];
typedef float type_3[4];
typedef _anon3 type_4[16];

struct _anon0
{
	unsigned char next_offset;
	unsigned char flags;
	short id;
};

struct _anon1
{
	_anon4 vertex[0];
};

struct _anon2
{
	float center[4];
	float radius;
};

struct _anon3
{
	float abcd[4];
};

struct HogePlane
{
	_anon3 plane;
	_anon1* poly;
	float dn;
	HogePlane* next;
	HogePlane* prev;
};

union _anon4
{
	float node[4];
	_anon0 data[4];
};

enum sfMaphitSpecType : unsigned char
{
	MH_SPEC_NORMAL,
	MH_SPEC_PERMEATE
};

struct _anon5
{
	float start[4];
	float end[4];
};

enum _enum : unsigned char
{
	NEGATIVE = 0xff,
	ZERO = 0,
	POSITIVE
};


int LineIntersectPlane(_anon5* line, _anon3* plane, float* point);
_anon1* SolveByPlanesEdge(_anon2* ball, int n_polys);
_anon1* SolveByPlanesEdge2(_anon2* ball, int n_polys, float* dir);
void sfMaphitSphereSlipOff(_anon2* ball);
void sfMaphitSphereSlipOff2(_anon2* ball);
_anon1* sfMaphitSphereSlipOff3(_anon2* ball);
_anon1* sfMaphitSphereStopFromLastPosition(_anon2* ball, float* last);
_anon1* sfMaphitSphereSlipOffFromLastPosition(_anon2* ball, float* last);
_anon1* sfMaphitCutLineWithSpec(_anon5* result, _anon5* line, float cut_rate);

// 
// Start address: 0x2852b0
int LineIntersectPlane(_anon5* line, _anon3* plane, float* point)
{
	float len_s;
	float len_e;
	float d;
	_enum s;
	_enum e;
	// Line 33, Address: 0x2852b0, Func Offset: 0
	// Line 34, Address: 0x2852d0, Func Offset: 0x20
	// Line 33, Address: 0x2852e0, Func Offset: 0x30
	// Line 34, Address: 0x2852e4, Func Offset: 0x34
	// Line 35, Address: 0x285328, Func Offset: 0x78
	// Line 36, Address: 0x28534c, Func Offset: 0x9c
	// Line 35, Address: 0x28535c, Func Offset: 0xac
	// Line 36, Address: 0x285360, Func Offset: 0xb0
	// Line 38, Address: 0x2853a8, Func Offset: 0xf8
	// Line 39, Address: 0x2853c0, Func Offset: 0x110
	// Line 40, Address: 0x2853c8, Func Offset: 0x118
	// Line 41, Address: 0x2853d0, Func Offset: 0x120
	// Line 42, Address: 0x2853d8, Func Offset: 0x128
	// Line 44, Address: 0x2853e8, Func Offset: 0x138
	// Line 45, Address: 0x2853f8, Func Offset: 0x148
	// Line 47, Address: 0x285400, Func Offset: 0x150
	// Line 48, Address: 0x285408, Func Offset: 0x158
	// Line 49, Address: 0x285410, Func Offset: 0x160
	// Line 53, Address: 0x285418, Func Offset: 0x168
	// Line 52, Address: 0x28541c, Func Offset: 0x16c
	// Line 53, Address: 0x285424, Func Offset: 0x174
	// Line 54, Address: 0x28544c, Func Offset: 0x19c
	// Line 55, Address: 0x285450, Func Offset: 0x1a0
	// Func End, Address: 0x285458, Func Offset: 0x1a8
}

// 
// Start address: 0x285460
_anon1* SolveByPlanesEdge(_anon2* ball, int n_polys)
{
	int i;
	float* p;
	float r;
	float v[4];
	_anon1* poly;
	int last_solved;
	float to_hit;
	_anon3 plane;
	// Line 69, Address: 0x285460, Func Offset: 0
	// Line 79, Address: 0x285474, Func Offset: 0x14
	// Line 69, Address: 0x285478, Func Offset: 0x18
	// Line 143, Address: 0x28548c, Func Offset: 0x2c
	// Line 146, Address: 0x285498, Func Offset: 0x38
	// Line 147, Address: 0x2854a4, Func Offset: 0x44
	// Line 148, Address: 0x2854b4, Func Offset: 0x54
	// Line 147, Address: 0x2854b8, Func Offset: 0x58
	// Line 149, Address: 0x2854bc, Func Offset: 0x5c
	// Line 153, Address: 0x2854c8, Func Offset: 0x68
	// Line 152, Address: 0x2854cc, Func Offset: 0x6c
	// Line 153, Address: 0x2854d0, Func Offset: 0x70
	// Line 152, Address: 0x2854d4, Func Offset: 0x74
	// Line 153, Address: 0x2854dc, Func Offset: 0x7c
	// Line 154, Address: 0x2854e4, Func Offset: 0x84
	// Line 155, Address: 0x285548, Func Offset: 0xe8
	// Line 156, Address: 0x285554, Func Offset: 0xf4
	// Line 158, Address: 0x285560, Func Offset: 0x100
	// Line 163, Address: 0x285578, Func Offset: 0x118
	// Line 164, Address: 0x2855a4, Func Offset: 0x144
	// Line 165, Address: 0x2855a8, Func Offset: 0x148
	// Line 166, Address: 0x2855cc, Func Offset: 0x16c
	// Line 167, Address: 0x2855e4, Func Offset: 0x184
	// Line 168, Address: 0x2855e8, Func Offset: 0x188
	// Line 171, Address: 0x2855fc, Func Offset: 0x19c
	// Line 172, Address: 0x285604, Func Offset: 0x1a4
	// Line 173, Address: 0x285618, Func Offset: 0x1b8
	// Line 174, Address: 0x285620, Func Offset: 0x1c0
	// Func End, Address: 0x285648, Func Offset: 0x1e8
}

// 
// Start address: 0x285650
_anon1* SolveByPlanesEdge2(_anon2* ball, int n_polys, float* dir)
{
	int i;
	int j;
	_anon3 planes[16];
	float* p;
	float r;
	float v[4];
	_anon1* poly;
	_anon5 line;
	int last_solved;
	int no_dir;
	_anon3* pa;
	_anon3* pb;
	float to_edge;
	float near_p[4];
	float to_near_p[4];
	float b;
	float c;
	float d;
	// Line 181, Address: 0x285650, Func Offset: 0
	// Line 195, Address: 0x285674, Func Offset: 0x24
	// Line 181, Address: 0x285678, Func Offset: 0x28
	// Line 195, Address: 0x285688, Func Offset: 0x38
	// Line 196, Address: 0x285690, Func Offset: 0x40
	// Line 197, Address: 0x285698, Func Offset: 0x48
	// Line 198, Address: 0x2856a0, Func Offset: 0x50
	// Line 199, Address: 0x2856a8, Func Offset: 0x58
	// Line 200, Address: 0x2856bc, Func Offset: 0x6c
	// Line 203, Address: 0x2856cc, Func Offset: 0x7c
	// Line 205, Address: 0x2856d0, Func Offset: 0x80
	// Line 206, Address: 0x2856d8, Func Offset: 0x88
	// Line 207, Address: 0x2856e0, Func Offset: 0x90
	// Line 208, Address: 0x2856f0, Func Offset: 0xa0
	// Line 213, Address: 0x2856f8, Func Offset: 0xa8
	// Line 208, Address: 0x2856fc, Func Offset: 0xac
	// Line 213, Address: 0x285700, Func Offset: 0xb0
	// Line 215, Address: 0x285710, Func Offset: 0xc0
	// Line 216, Address: 0x28571c, Func Offset: 0xcc
	// Line 224, Address: 0x285728, Func Offset: 0xd8
	// Line 225, Address: 0x285740, Func Offset: 0xf0
	// Line 226, Address: 0x285760, Func Offset: 0x110
	// Line 225, Address: 0x285764, Func Offset: 0x114
	// Line 226, Address: 0x28576c, Func Offset: 0x11c
	// Line 225, Address: 0x285770, Func Offset: 0x120
	// Line 226, Address: 0x285774, Func Offset: 0x124
	// Line 235, Address: 0x285790, Func Offset: 0x140
	// Line 227, Address: 0x285794, Func Offset: 0x144
	// Line 232, Address: 0x285798, Func Offset: 0x148
	// Line 227, Address: 0x28579c, Func Offset: 0x14c
	// Line 232, Address: 0x2857a0, Func Offset: 0x150
	// Line 234, Address: 0x2857c4, Func Offset: 0x174
	// Line 232, Address: 0x2857cc, Func Offset: 0x17c
	// Line 234, Address: 0x2857d0, Func Offset: 0x180
	// Line 235, Address: 0x2857dc, Func Offset: 0x18c
	// Line 236, Address: 0x2857f8, Func Offset: 0x1a8
	// Line 239, Address: 0x285810, Func Offset: 0x1c0
	// Line 240, Address: 0x285814, Func Offset: 0x1c4
	// Line 241, Address: 0x28582c, Func Offset: 0x1dc
	// Line 243, Address: 0x28583c, Func Offset: 0x1ec
	// Line 244, Address: 0x285844, Func Offset: 0x1f4
	// Line 245, Address: 0x285858, Func Offset: 0x208
	// Line 246, Address: 0x285860, Func Offset: 0x210
	// Func End, Address: 0x28588c, Func Offset: 0x23c
}

// 
// Start address: 0x285890
void sfMaphitSphereSlipOff(_anon2* ball)
{
	int i;
	float r;
	float d;
	int n_polys;
	float* p;
	_anon1* poly;
	_anon3 plane;
	float v[4];
	// Line 259, Address: 0x285890, Func Offset: 0
	// Line 269, Address: 0x2858ac, Func Offset: 0x1c
	// Line 270, Address: 0x2858b8, Func Offset: 0x28
	// Line 274, Address: 0x2858c0, Func Offset: 0x30
	// Line 275, Address: 0x2858c4, Func Offset: 0x34
	// Line 276, Address: 0x2858d0, Func Offset: 0x40
	// Line 277, Address: 0x2858d8, Func Offset: 0x48
	// Line 278, Address: 0x2858e4, Func Offset: 0x54
	// Line 280, Address: 0x285914, Func Offset: 0x84
	// Line 282, Address: 0x285928, Func Offset: 0x98
	// Line 283, Address: 0x28592c, Func Offset: 0x9c
	// Line 284, Address: 0x285950, Func Offset: 0xc0
	// Line 285, Address: 0x285968, Func Offset: 0xd8
	// Line 286, Address: 0x28597c, Func Offset: 0xec
	// Func End, Address: 0x2859a0, Func Offset: 0x110
}

// 
// Start address: 0x2859a0
void sfMaphitSphereSlipOff2(_anon2* ball)
{
	int i;
	float r;
	float d;
	float* p;
	float v[4];
	_anon3* plane;
	_anon1* poly;
	int n_polys;
	HogePlane hoge_plane[32];
	HogePlane hplane_top;
	HogePlane* hplane;
	int j;
	HogePlane* h_top;
	// Line 309, Address: 0x2859a0, Func Offset: 0
	// Line 322, Address: 0x2859c0, Func Offset: 0x20
	// Line 323, Address: 0x2859cc, Func Offset: 0x2c
	// Line 326, Address: 0x2859d4, Func Offset: 0x34
	// Line 327, Address: 0x2859dc, Func Offset: 0x3c
	// Line 332, Address: 0x2859e0, Func Offset: 0x40
	// Line 330, Address: 0x2859e4, Func Offset: 0x44
	// Line 335, Address: 0x2859e8, Func Offset: 0x48
	// Line 332, Address: 0x2859ec, Func Offset: 0x4c
	// Line 335, Address: 0x2859f4, Func Offset: 0x54
	// Line 338, Address: 0x285a00, Func Offset: 0x60
	// Line 340, Address: 0x285a08, Func Offset: 0x68
	// Line 342, Address: 0x285a18, Func Offset: 0x78
	// Line 344, Address: 0x285a24, Func Offset: 0x84
	// Line 345, Address: 0x285a30, Func Offset: 0x90
	// Line 346, Address: 0x285a60, Func Offset: 0xc0
	// Line 347, Address: 0x285a64, Func Offset: 0xc4
	// Line 350, Address: 0x285a68, Func Offset: 0xc8
	// Line 351, Address: 0x285a6c, Func Offset: 0xcc
	// Line 352, Address: 0x285a78, Func Offset: 0xd8
	// Line 354, Address: 0x285a8c, Func Offset: 0xec
	// Line 355, Address: 0x285a90, Func Offset: 0xf0
	// Line 356, Address: 0x285aa8, Func Offset: 0x108
	// Line 357, Address: 0x285ab0, Func Offset: 0x110
	// Line 356, Address: 0x285ab4, Func Offset: 0x114
	// Line 357, Address: 0x285ac4, Func Offset: 0x124
	// Line 360, Address: 0x285ad4, Func Offset: 0x134
	// Line 361, Address: 0x285ad8, Func Offset: 0x138
	// Line 362, Address: 0x285ae0, Func Offset: 0x140
	// Line 364, Address: 0x285ae4, Func Offset: 0x144
	// Line 369, Address: 0x285af8, Func Offset: 0x158
	// Line 370, Address: 0x285afc, Func Offset: 0x15c
	// Line 369, Address: 0x285b00, Func Offset: 0x160
	// Line 370, Address: 0x285b2c, Func Offset: 0x18c
	// Line 371, Address: 0x285b4c, Func Offset: 0x1ac
	// Line 372, Address: 0x285b64, Func Offset: 0x1c4
	// Line 373, Address: 0x285b7c, Func Offset: 0x1dc
	// Func End, Address: 0x285ba4, Func Offset: 0x204
}

// 
// Start address: 0x285bb0
_anon1* sfMaphitSphereSlipOff3(_anon2* ball)
{
	int i;
	float r;
	float d;
	float* p;
	float v[4];
	_anon3 plane;
	_anon1* poly;
	_anon1* last_poly;
	int n_polys;
	// Line 387, Address: 0x285bb0, Func Offset: 0
	// Line 396, Address: 0x285bc0, Func Offset: 0x10
	// Line 387, Address: 0x285bc4, Func Offset: 0x14
	// Line 401, Address: 0x285bd8, Func Offset: 0x28
	// Line 402, Address: 0x285be4, Func Offset: 0x34
	// Line 403, Address: 0x285bec, Func Offset: 0x3c
	// Line 405, Address: 0x285bf8, Func Offset: 0x48
	// Line 406, Address: 0x285c04, Func Offset: 0x54
	// Line 407, Address: 0x285c10, Func Offset: 0x60
	// Line 408, Address: 0x285c18, Func Offset: 0x68
	// Line 409, Address: 0x285c24, Func Offset: 0x74
	// Line 410, Address: 0x285c2c, Func Offset: 0x7c
	// Line 415, Address: 0x285c34, Func Offset: 0x84
	// Line 418, Address: 0x285c38, Func Offset: 0x88
	// Line 419, Address: 0x285c3c, Func Offset: 0x8c
	// Line 420, Address: 0x285c48, Func Offset: 0x98
	// Line 421, Address: 0x285c54, Func Offset: 0xa4
	// Line 422, Address: 0x285c60, Func Offset: 0xb0
	// Line 423, Address: 0x285c90, Func Offset: 0xe0
	// Line 425, Address: 0x285ca4, Func Offset: 0xf4
	// Line 426, Address: 0x285ca8, Func Offset: 0xf8
	// Line 427, Address: 0x285ccc, Func Offset: 0x11c
	// Line 428, Address: 0x285ce4, Func Offset: 0x134
	// Line 429, Address: 0x285ce8, Func Offset: 0x138
	// Line 430, Address: 0x285cfc, Func Offset: 0x14c
	// Line 431, Address: 0x285d00, Func Offset: 0x150
	// Func End, Address: 0x285d28, Func Offset: 0x178
}

// 
// Start address: 0x285d30
_anon1* sfMaphitSphereStopFromLastPosition(_anon2* ball, float* last)
{
	int i;
	float r;
	float* p;
	float dir[4];
	float v[4];
	_anon3 plane;
	_anon1* poly;
	_anon1* nearest_poly;
	_anon5 line;
	int n_polys;
	// Line 449, Address: 0x285d30, Func Offset: 0
	// Line 462, Address: 0x285d38, Func Offset: 0x8
	// Line 449, Address: 0x285d3c, Func Offset: 0xc
	// Line 458, Address: 0x285d58, Func Offset: 0x28
	// Line 449, Address: 0x285d5c, Func Offset: 0x2c
	// Line 462, Address: 0x285d60, Func Offset: 0x30
	// Line 463, Address: 0x285d74, Func Offset: 0x44
	// Line 464, Address: 0x285db4, Func Offset: 0x84
	// Line 465, Address: 0x285dc8, Func Offset: 0x98
	// Line 468, Address: 0x285df4, Func Offset: 0xc4
	// Line 469, Address: 0x285df8, Func Offset: 0xc8
	// Line 470, Address: 0x285e04, Func Offset: 0xd4
	// Line 471, Address: 0x285e0c, Func Offset: 0xdc
	// Line 473, Address: 0x285e18, Func Offset: 0xe8
	// Line 474, Address: 0x285e30, Func Offset: 0x100
	// Line 475, Address: 0x285e5c, Func Offset: 0x12c
	// Line 476, Address: 0x285e8c, Func Offset: 0x15c
	// Line 477, Address: 0x285ea8, Func Offset: 0x178
	// Line 479, Address: 0x285eb4, Func Offset: 0x184
	// Line 480, Address: 0x285ec0, Func Offset: 0x190
	// Line 481, Address: 0x285ecc, Func Offset: 0x19c
	// Line 482, Address: 0x285ed8, Func Offset: 0x1a8
	// Line 483, Address: 0x285edc, Func Offset: 0x1ac
	// Line 482, Address: 0x285ee8, Func Offset: 0x1b8
	// Line 483, Address: 0x285eec, Func Offset: 0x1bc
	// Line 484, Address: 0x285efc, Func Offset: 0x1cc
	// Line 485, Address: 0x285f00, Func Offset: 0x1d0
	// Line 487, Address: 0x285f14, Func Offset: 0x1e4
	// Line 488, Address: 0x285f1c, Func Offset: 0x1ec
	// Line 489, Address: 0x285f2c, Func Offset: 0x1fc
	// Line 490, Address: 0x285f34, Func Offset: 0x204
	// Line 491, Address: 0x285f3c, Func Offset: 0x20c
	// Line 493, Address: 0x285f40, Func Offset: 0x210
	// Line 495, Address: 0x285f4c, Func Offset: 0x21c
	// Line 496, Address: 0x285f50, Func Offset: 0x220
	// Func End, Address: 0x285f74, Func Offset: 0x244
}

// 
// Start address: 0x285f80
_anon1* sfMaphitSphereSlipOffFromLastPosition(_anon2* ball, float* last)
{
	int i;
	float ball_r;
	float d;
	float r;
	float* p;
	float v[4];
	_anon3 plane;
	_anon3 nearest_plane;
	_anon1* poly;
	_anon1* nearest_poly;
	_anon5 line;
	int n_polys;
	_anon2 check_ball;
	float entry_pos[4];
	int result;
	float near_p[4];
	// Line 516, Address: 0x285f80, Func Offset: 0
	// Line 533, Address: 0x285f88, Func Offset: 0x8
	// Line 516, Address: 0x285f8c, Func Offset: 0xc
	// Line 526, Address: 0x285fac, Func Offset: 0x2c
	// Line 516, Address: 0x285fb0, Func Offset: 0x30
	// Line 533, Address: 0x285fb4, Func Offset: 0x34
	// Line 535, Address: 0x285fc8, Func Offset: 0x48
	// Line 536, Address: 0x286008, Func Offset: 0x88
	// Line 564, Address: 0x286018, Func Offset: 0x98
	// Line 565, Address: 0x286024, Func Offset: 0xa4
	// Line 566, Address: 0x286030, Func Offset: 0xb0
	// Line 567, Address: 0x28603c, Func Offset: 0xbc
	// Line 568, Address: 0x286044, Func Offset: 0xc4
	// Line 569, Address: 0x286050, Func Offset: 0xd0
	// Line 570, Address: 0x28605c, Func Offset: 0xdc
	// Line 574, Address: 0x286060, Func Offset: 0xe0
	// Line 575, Address: 0x286064, Func Offset: 0xe4
	// Line 576, Address: 0x286070, Func Offset: 0xf0
	// Line 577, Address: 0x286078, Func Offset: 0xf8
	// Line 579, Address: 0x286080, Func Offset: 0x100
	// Line 580, Address: 0x28608c, Func Offset: 0x10c
	// Line 581, Address: 0x286098, Func Offset: 0x118
	// Line 583, Address: 0x2860a4, Func Offset: 0x124
	// Line 584, Address: 0x2860b0, Func Offset: 0x130
	// Line 585, Address: 0x2860bc, Func Offset: 0x13c
	// Line 586, Address: 0x2860c8, Func Offset: 0x148
	// Line 587, Address: 0x2860cc, Func Offset: 0x14c
	// Line 586, Address: 0x2860d8, Func Offset: 0x158
	// Line 587, Address: 0x2860dc, Func Offset: 0x15c
	// Line 588, Address: 0x2860ec, Func Offset: 0x16c
	// Line 589, Address: 0x2860f0, Func Offset: 0x170
	// Line 594, Address: 0x286104, Func Offset: 0x184
	// Line 598, Address: 0x28610c, Func Offset: 0x18c
	// Line 599, Address: 0x286118, Func Offset: 0x198
	// Line 607, Address: 0x286120, Func Offset: 0x1a0
	// Line 608, Address: 0x28612c, Func Offset: 0x1ac
	// Line 611, Address: 0x286130, Func Offset: 0x1b0
	// Line 612, Address: 0x28613c, Func Offset: 0x1bc
	// Line 614, Address: 0x286140, Func Offset: 0x1c0
	// Line 613, Address: 0x286148, Func Offset: 0x1c8
	// Line 612, Address: 0x286158, Func Offset: 0x1d8
	// Line 613, Address: 0x28615c, Func Offset: 0x1dc
	// Line 614, Address: 0x286174, Func Offset: 0x1f4
	// Line 613, Address: 0x286178, Func Offset: 0x1f8
	// Line 614, Address: 0x286180, Func Offset: 0x200
	// Line 619, Address: 0x2861d8, Func Offset: 0x258
	// Line 621, Address: 0x2861e4, Func Offset: 0x264
	// Line 622, Address: 0x286204, Func Offset: 0x284
	// Line 623, Address: 0x286230, Func Offset: 0x2b0
	// Line 624, Address: 0x286260, Func Offset: 0x2e0
	// Line 641, Address: 0x28627c, Func Offset: 0x2fc
	// Line 642, Address: 0x286288, Func Offset: 0x308
	// Line 643, Address: 0x286290, Func Offset: 0x310
	// Line 644, Address: 0x28629c, Func Offset: 0x31c
	// Line 645, Address: 0x2862a8, Func Offset: 0x328
	// Line 646, Address: 0x2862ac, Func Offset: 0x32c
	// Line 645, Address: 0x2862b8, Func Offset: 0x338
	// Line 646, Address: 0x2862bc, Func Offset: 0x33c
	// Line 647, Address: 0x2862cc, Func Offset: 0x34c
	// Line 648, Address: 0x2862d0, Func Offset: 0x350
	// Line 650, Address: 0x2862e4, Func Offset: 0x364
	// Line 651, Address: 0x2862ec, Func Offset: 0x36c
	// Line 654, Address: 0x2862f8, Func Offset: 0x378
	// Line 655, Address: 0x286304, Func Offset: 0x384
	// Line 656, Address: 0x286308, Func Offset: 0x388
	// Line 655, Address: 0x28630c, Func Offset: 0x38c
	// Line 656, Address: 0x286310, Func Offset: 0x390
	// Line 655, Address: 0x286314, Func Offset: 0x394
	// Line 656, Address: 0x286340, Func Offset: 0x3c0
	// Line 657, Address: 0x286360, Func Offset: 0x3e0
	// Line 663, Address: 0x28637c, Func Offset: 0x3fc
	// Line 664, Address: 0x286388, Func Offset: 0x408
	// Line 666, Address: 0x286394, Func Offset: 0x414
	// Line 669, Address: 0x28639c, Func Offset: 0x41c
	// Line 670, Address: 0x2863a4, Func Offset: 0x424
	// Line 671, Address: 0x2863c8, Func Offset: 0x448
	// Line 673, Address: 0x286430, Func Offset: 0x4b0
	// Line 674, Address: 0x286434, Func Offset: 0x4b4
	// Line 673, Address: 0x286440, Func Offset: 0x4c0
	// Line 674, Address: 0x286444, Func Offset: 0x4c4
	// Line 675, Address: 0x28644c, Func Offset: 0x4cc
	// Line 676, Address: 0x286464, Func Offset: 0x4e4
	// Line 678, Address: 0x28646c, Func Offset: 0x4ec
	// Line 680, Address: 0x286470, Func Offset: 0x4f0
	// Line 681, Address: 0x286488, Func Offset: 0x508
	// Line 683, Address: 0x2864ac, Func Offset: 0x52c
	// Line 684, Address: 0x2864c8, Func Offset: 0x548
	// Line 686, Address: 0x2864f0, Func Offset: 0x570
	// Line 687, Address: 0x2864fc, Func Offset: 0x57c
	// Line 688, Address: 0x286524, Func Offset: 0x5a4
	// Line 689, Address: 0x286548, Func Offset: 0x5c8
	// Line 694, Address: 0x286560, Func Offset: 0x5e0
	// Line 695, Address: 0x286568, Func Offset: 0x5e8
	// Line 694, Address: 0x28656c, Func Offset: 0x5ec
	// Line 695, Address: 0x28657c, Func Offset: 0x5fc
	// Line 696, Address: 0x286584, Func Offset: 0x604
	// Line 698, Address: 0x286590, Func Offset: 0x610
	// Line 712, Address: 0x286598, Func Offset: 0x618
	// Line 714, Address: 0x2865a4, Func Offset: 0x624
	// Line 716, Address: 0x2865a8, Func Offset: 0x628
	// Line 717, Address: 0x2865b0, Func Offset: 0x630
	// Func End, Address: 0x2865d8, Func Offset: 0x658
}

// 
// Start address: 0x2865e0
_anon1* sfMaphitCutLineWithSpec(_anon5* result, _anon5* line, float cut_rate)
{
	_anon5 search_line;
	sfMaphitSpecType spec;
	_anon3 plane;
	_anon1* poly;
	float v[4];
	float r;
	// Line 732, Address: 0x2865e0, Func Offset: 0
	// Line 740, Address: 0x2865e8, Func Offset: 0x8
	// Line 732, Address: 0x2865ec, Func Offset: 0xc
	// Line 740, Address: 0x286604, Func Offset: 0x24
	// Line 741, Address: 0x28660c, Func Offset: 0x2c
	// Line 742, Address: 0x286618, Func Offset: 0x38
	// Line 743, Address: 0x286620, Func Offset: 0x40
	// Line 746, Address: 0x286628, Func Offset: 0x48
	// Line 747, Address: 0x286640, Func Offset: 0x60
	// Line 750, Address: 0x286648, Func Offset: 0x68
	// Line 751, Address: 0x286654, Func Offset: 0x74
	// Line 753, Address: 0x28665c, Func Offset: 0x7c
	// Line 754, Address: 0x286668, Func Offset: 0x88
	// Line 755, Address: 0x286678, Func Offset: 0x98
	// Line 756, Address: 0x286680, Func Offset: 0xa0
	// Line 757, Address: 0x28668c, Func Offset: 0xac
	// Line 759, Address: 0x286690, Func Offset: 0xb0
	// Line 760, Address: 0x28669c, Func Offset: 0xbc
	// Line 762, Address: 0x2866ac, Func Offset: 0xcc
	// Line 763, Address: 0x2866b8, Func Offset: 0xd8
	// Line 764, Address: 0x2866c0, Func Offset: 0xe0
	// Line 772, Address: 0x2866c8, Func Offset: 0xe8
	// Line 773, Address: 0x2866e8, Func Offset: 0x108
	// Line 774, Address: 0x286714, Func Offset: 0x134
	// Line 775, Address: 0x286740, Func Offset: 0x160
	// Line 776, Address: 0x28675c, Func Offset: 0x17c
	// Line 778, Address: 0x286768, Func Offset: 0x188
	// Line 779, Address: 0x28676c, Func Offset: 0x18c
	// Func End, Address: 0x286788, Func Offset: 0x1a8
}

