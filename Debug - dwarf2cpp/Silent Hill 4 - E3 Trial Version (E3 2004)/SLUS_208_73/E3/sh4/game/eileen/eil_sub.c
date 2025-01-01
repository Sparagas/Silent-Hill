typedef union _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct sgTexArc;
typedef struct sgTexData;
typedef struct sgClutData;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _anon9;
typedef struct _anon10;
typedef struct sfFrame;
typedef struct _anon11;
typedef struct _anon12;
typedef struct _anon13;


typedef int type_0[2];
typedef int type_1[4];
typedef int type_2[2][8];
typedef unsigned int type_3[4];
typedef void* type_4[4];
typedef short type_5[8];
typedef unsigned short type_6[8];
typedef char type_7[16];
typedef unsigned char type_8[16];
typedef float type_9[4];
typedef float type_10[1];
typedef int type_11[1];
typedef long type_12[1];
typedef float type_13[4];
typedef int type_14[2];
typedef int type_15[2][3];
typedef _anon6 type_16[4];
typedef long type_17[2];
typedef unsigned long type_18[2];

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

struct _anon2
{
	struct
	{
		unsigned int INT : 1;
		unsigned int FFMD : 1;
		unsigned int DPMS : 2;
		unsigned int p0 : 28;
	};
	unsigned int p1;
};

struct _anon3
{
	struct
	{
		unsigned int R : 8;
		unsigned int G : 8;
		unsigned int B : 8;
		unsigned int p0 : 8;
	};
	unsigned int p1;
};

struct _anon4
{
	sfFrame fr_buffer;
	_anon1 tex;
	float base_u;
	float base_v;
	unsigned long tex0;
	_anon6 points[4];
};

struct _anon5
{
	struct
	{
		unsigned int DX : 12;
		unsigned int DY : 11;
		unsigned int MAGH : 4;
		unsigned int MAGV : 2;
		unsigned int p0 : 3;
	};
	struct
	{
		unsigned int DW : 12;
		unsigned int DH : 11;
		unsigned int p1 : 9;
	};
};

struct sgTexArc
{
	<unknown fundamental type (0xa510)> dummy;
};

struct sgTexData
{
	<unknown fundamental type (0xa510)> dummy;
};

struct sgClutData
{
	<unknown fundamental type (0xa510)> dummy;
};

struct _anon6
{
	short x0;
	short y0;
	float r;
	float add;
	short stat;
	short type;
};

struct _anon7
{
	_anon0 frame;
	_anon0 zbuf;
	_anon0 xyoffset;
	_anon0 scissor;
	_anon0 test;
	_anon0 clamp;
	_anon0 tex1;
};

struct _anon8
{
	_anon12 pmode;
	_anon2 smode2;
	_anon13 dispfb;
	_anon5 display;
	_anon3 bgcolor;
};

struct _anon9
{
	_anon11 giftag;
	_anon0 prmodecont;
	_anon0 colclamp;
	_anon0 dthe;
	_anon7 context1_env;
	_anon7 context2_env;
};

struct _anon10
{
	_anon11 giftag;
	_anon0 fba;
	_anon0 test_0;
	_anon0 prim;
	_anon0 rgba;
	_anon0 xyz2_0;
	_anon0 xyz2_1;
	_anon0 test_1;
};

struct sfFrame
{
	_anon8 disp;
	_anon9 draw;
	_anon10 clear;
	int draw_w;
	int draw_h;
	int disp_w;
	int disp_h;
	int draw_psm;
	int disp_psm;
	int zpsm;
	int buffer_addr;
	int z_buffer_addr;
	unsigned char half_offset_on;
};

struct _anon11
{
	struct
	{
		unsigned long NLOOP : 15;
		unsigned long EOP : 1;
		unsigned long pad16 : 16;
		unsigned long id : 14;
		unsigned long PRE : 1;
		unsigned long PRIM : 11;
		unsigned long FLG : 2;
		unsigned long NREG : 4;
	};
	struct
	{
		unsigned long REGS0 : 4;
		unsigned long REGS1 : 4;
		unsigned long REGS2 : 4;
		unsigned long REGS3 : 4;
		unsigned long REGS4 : 4;
		unsigned long REGS5 : 4;
		unsigned long REGS6 : 4;
		unsigned long REGS7 : 4;
		unsigned long REGS8 : 4;
		unsigned long REGS9 : 4;
		unsigned long REGS10 : 4;
		unsigned long REGS11 : 4;
		unsigned long REGS12 : 4;
		unsigned long REGS13 : 4;
		unsigned long REGS14 : 4;
		unsigned long REGS15 : 4;
	};
};

struct _anon12
{
	struct
	{
		unsigned int EN1 : 1;
		unsigned int EN2 : 1;
		unsigned int CRTMD : 3;
		unsigned int MMOD : 1;
		unsigned int AMOD : 1;
		unsigned int SLBG : 1;
		unsigned int ALP : 8;
		unsigned int p0 : 16;
	};
	unsigned int p1;
};

struct _anon13
{
	struct
	{
		unsigned int FBP : 9;
		unsigned int FBW : 6;
		unsigned int PSM : 5;
		unsigned int p0 : 12;
	};
	struct
	{
		unsigned int DBX : 11;
		unsigned int DBY : 11;
		unsigned int p1 : 10;
	};
};

_anon4 ce_work;
int mm_type_uv[2][8];
int point_uv[2][3];
unsigned long* sg_packet_cur;

float AngleZXFromVertices(float* from, float* to);
float AxisAngleFromVertices(float* axis, float* src, float* dst);
float SubTitleMessageAlphaFromPos(float near, float far, float* target_pos);
void EilMakeCursedTextureInit();
unsigned long EilMakeCursedTexture(float po);

// 
// Start address: 0x2d78c0
float AngleZXFromVertices(float* from, float* to)
{
	float v0[4];
	float v1[4];
	float v[4];
	float sint;
	float angle;
	// Line 13, Address: 0x2d78c0, Func Offset: 0
	// Line 19, Address: 0x2d78c8, Func Offset: 0x8
	// Line 20, Address: 0x2d78d4, Func Offset: 0x14
	// Line 21, Address: 0x2d78e0, Func Offset: 0x20
	// Line 22, Address: 0x2d78e8, Func Offset: 0x28
	// Line 23, Address: 0x2d790c, Func Offset: 0x4c
	// Line 24, Address: 0x2d7938, Func Offset: 0x78
	// Line 25, Address: 0x2d795c, Func Offset: 0x9c
	// Line 26, Address: 0x2d7980, Func Offset: 0xc0
	// Line 27, Address: 0x2d7988, Func Offset: 0xc8
	// Line 28, Address: 0x2d79c0, Func Offset: 0x100
	// Line 29, Address: 0x2d79d0, Func Offset: 0x110
	// Line 30, Address: 0x2d79e8, Func Offset: 0x128
	// Line 33, Address: 0x2d79f0, Func Offset: 0x130
	// Func End, Address: 0x2d79fc, Func Offset: 0x13c
}

// 
// Start address: 0x2d7a00
float AxisAngleFromVertices(float* axis, float* src, float* dst)
{
	float cost;
	float len;
	float v2[4];
	// Line 40, Address: 0x2d7a00, Func Offset: 0
	// Line 45, Address: 0x2d7a08, Func Offset: 0x8
	// Line 47, Address: 0x2d7a24, Func Offset: 0x24
	// Line 54, Address: 0x2d7a58, Func Offset: 0x58
	// Line 50, Address: 0x2d7a5c, Func Offset: 0x5c
	// Line 51, Address: 0x2d7a68, Func Offset: 0x68
	// Line 52, Address: 0x2d7a70, Func Offset: 0x70
	// Line 54, Address: 0x2d7a7c, Func Offset: 0x7c
	// Line 56, Address: 0x2d7a9c, Func Offset: 0x9c
	// Line 58, Address: 0x2d7ab8, Func Offset: 0xb8
	// Line 59, Address: 0x2d7ac0, Func Offset: 0xc0
	// Line 58, Address: 0x2d7ac4, Func Offset: 0xc4
	// Line 60, Address: 0x2d7ac8, Func Offset: 0xc8
	// Line 62, Address: 0x2d7ad0, Func Offset: 0xd0
	// Line 64, Address: 0x2d7af8, Func Offset: 0xf8
	// Line 63, Address: 0x2d7b04, Func Offset: 0x104
	// Line 64, Address: 0x2d7b0c, Func Offset: 0x10c
	// Line 65, Address: 0x2d7b18, Func Offset: 0x118
	// Line 67, Address: 0x2d7b20, Func Offset: 0x120
	// Line 68, Address: 0x2d7b34, Func Offset: 0x134
	// Line 71, Address: 0x2d7b38, Func Offset: 0x138
	// Line 72, Address: 0x2d7b54, Func Offset: 0x154
	// Line 74, Address: 0x2d7b78, Func Offset: 0x178
	// Line 75, Address: 0x2d7b80, Func Offset: 0x180
	// Func End, Address: 0x2d7b8c, Func Offset: 0x18c
}

// 
// Start address: 0x2d7b90
float SubTitleMessageAlphaFromPos(float near, float far, float* target_pos)
{
	float pos[4];
	float base_pos[4];
	float length;
	float alpha;
	float late;
	float temp;
	// Line 85, Address: 0x2d7b90, Func Offset: 0
	// Line 91, Address: 0x2d7bac, Func Offset: 0x1c
	// Line 92, Address: 0x2d7bc0, Func Offset: 0x30
	// Line 93, Address: 0x2d7bdc, Func Offset: 0x4c
	// Line 95, Address: 0x2d7c08, Func Offset: 0x78
	// Line 96, Address: 0x2d7c14, Func Offset: 0x84
	// Line 97, Address: 0x2d7c1c, Func Offset: 0x8c
	// Line 98, Address: 0x2d7c34, Func Offset: 0xa4
	// Line 99, Address: 0x2d7c38, Func Offset: 0xa8
	// Line 103, Address: 0x2d7c40, Func Offset: 0xb0
	// Line 101, Address: 0x2d7c44, Func Offset: 0xb4
	// Line 102, Address: 0x2d7c48, Func Offset: 0xb8
	// Line 103, Address: 0x2d7c4c, Func Offset: 0xbc
	// Line 104, Address: 0x2d7c5c, Func Offset: 0xcc
	// Line 105, Address: 0x2d7c60, Func Offset: 0xd0
	// Line 107, Address: 0x2d7c78, Func Offset: 0xe8
	// Func End, Address: 0x2d7c90, Func Offset: 0x100
}

// 
// Start address: 0x2d7c90
void EilMakeCursedTextureInit()
{
	_anon4* work;
	sgTexArc* texarc;
	sgTexData* tex_data;
	sgClutData* clut_data;
	// Line 151, Address: 0x2d7c90, Func Offset: 0
	// Line 153, Address: 0x2d7ca0, Func Offset: 0x10
	// Line 160, Address: 0x2d7ca8, Func Offset: 0x18
	// Line 161, Address: 0x2d7cb0, Func Offset: 0x20
	// Line 162, Address: 0x2d7cc0, Func Offset: 0x30
	// Line 163, Address: 0x2d7ccc, Func Offset: 0x3c
	// Line 164, Address: 0x2d7cd8, Func Offset: 0x48
	// Line 165, Address: 0x2d7ce8, Func Offset: 0x58
	// Line 167, Address: 0x2d7d00, Func Offset: 0x70
	// Line 168, Address: 0x2d7d1c, Func Offset: 0x8c
	// Line 178, Address: 0x2d7d34, Func Offset: 0xa4
	// Line 168, Address: 0x2d7d38, Func Offset: 0xa8
	// Line 171, Address: 0x2d7d3c, Func Offset: 0xac
	// Line 172, Address: 0x2d7d40, Func Offset: 0xb0
	// Line 178, Address: 0x2d7d58, Func Offset: 0xc8
	// Line 179, Address: 0x2d7d64, Func Offset: 0xd4
	// Line 180, Address: 0x2d7d6c, Func Offset: 0xdc
	// Line 181, Address: 0x2d7d74, Func Offset: 0xe4
	// Line 180, Address: 0x2d7d78, Func Offset: 0xe8
	// Line 181, Address: 0x2d7d7c, Func Offset: 0xec
	// Line 182, Address: 0x2d7d88, Func Offset: 0xf8
	// Line 183, Address: 0x2d7d94, Func Offset: 0x104
	// Line 185, Address: 0x2d7da0, Func Offset: 0x110
	// Func End, Address: 0x2d7db4, Func Offset: 0x124
}

// 
// Start address: 0x2d7dc0
unsigned long EilMakeCursedTexture(float po)
{
	sfFrame* fr;
	unsigned long* pk;
	_anon0* dmatag;
	_anon1* tex;
	unsigned long cbp;
	unsigned long tex0;
	_anon4* work;
	int a;
	int bp;
	int u0;
	int v0;
	float base_u;
	float base_v;
	int size;
	int u;
	int v;
	int x;
	int y;
	int i;
	_anon6* point;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	_anon6* point;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	// Line 229, Address: 0x2d7dc0, Func Offset: 0
	// Line 210, Address: 0x2d7dc4, Func Offset: 0x4
	// Line 229, Address: 0x2d7dc8, Func Offset: 0x8
	// Line 210, Address: 0x2d7dcc, Func Offset: 0xc
	// Line 229, Address: 0x2d7dd4, Func Offset: 0x14
	// Line 210, Address: 0x2d7dd8, Func Offset: 0x18
	// Line 229, Address: 0x2d7dec, Func Offset: 0x2c
	// Line 210, Address: 0x2d7df0, Func Offset: 0x30
	// Line 227, Address: 0x2d7df8, Func Offset: 0x38
	// Line 210, Address: 0x2d7dfc, Func Offset: 0x3c
	// Line 227, Address: 0x2d7e00, Func Offset: 0x40
	// Line 230, Address: 0x2d7e04, Func Offset: 0x44
	// Line 210, Address: 0x2d7e08, Func Offset: 0x48
	// Line 229, Address: 0x2d7e0c, Func Offset: 0x4c
	// Line 230, Address: 0x2d7e10, Func Offset: 0x50
	// Line 231, Address: 0x2d7e18, Func Offset: 0x58
	// Line 232, Address: 0x2d7e20, Func Offset: 0x60
	// Line 233, Address: 0x2d7e2c, Func Offset: 0x6c
	// Line 234, Address: 0x2d7e38, Func Offset: 0x78
	// Line 235, Address: 0x2d7e48, Func Offset: 0x88
	// Line 236, Address: 0x2d7e5c, Func Offset: 0x9c
	// Line 237, Address: 0x2d7e68, Func Offset: 0xa8
	// Line 239, Address: 0x2d7e74, Func Offset: 0xb4
	// Line 240, Address: 0x2d7ea0, Func Offset: 0xe0
	// Line 241, Address: 0x2d7ec0, Func Offset: 0x100
	// Line 240, Address: 0x2d7ec4, Func Offset: 0x104
	// Line 241, Address: 0x2d7ec8, Func Offset: 0x108
	// Line 243, Address: 0x2d7ecc, Func Offset: 0x10c
	// Line 244, Address: 0x2d7ed0, Func Offset: 0x110
	// Line 245, Address: 0x2d7ee0, Func Offset: 0x120
	// Line 246, Address: 0x2d7ee4, Func Offset: 0x124
	// Line 245, Address: 0x2d7ee8, Func Offset: 0x128
	// Line 246, Address: 0x2d7eec, Func Offset: 0x12c
	// Line 245, Address: 0x2d7ef4, Func Offset: 0x134
	// Line 246, Address: 0x2d7ef8, Func Offset: 0x138
	// Line 247, Address: 0x2d7f04, Func Offset: 0x144
	// Line 248, Address: 0x2d7f08, Func Offset: 0x148
	// Line 251, Address: 0x2d7f10, Func Offset: 0x150
	// Line 252, Address: 0x2d7f20, Func Offset: 0x160
	// Line 253, Address: 0x2d7f28, Func Offset: 0x168
	// Line 252, Address: 0x2d7f30, Func Offset: 0x170
	// Line 253, Address: 0x2d7f34, Func Offset: 0x174
	// Line 254, Address: 0x2d7f40, Func Offset: 0x180
	// Line 255, Address: 0x2d7f44, Func Offset: 0x184
	// Line 258, Address: 0x2d7f48, Func Offset: 0x188
	// Line 271, Address: 0x2d7f5c, Func Offset: 0x19c
	// Line 276, Address: 0x2d7f60, Func Offset: 0x1a0
	// Line 271, Address: 0x2d7f64, Func Offset: 0x1a4
	// Line 276, Address: 0x2d7f68, Func Offset: 0x1a8
	// Line 277, Address: 0x2d7f74, Func Offset: 0x1b4
	// Line 272, Address: 0x2d7f7c, Func Offset: 0x1bc
	// Line 276, Address: 0x2d7f84, Func Offset: 0x1c4
	// Line 277, Address: 0x2d7f88, Func Offset: 0x1c8
	// Line 278, Address: 0x2d7f9c, Func Offset: 0x1dc
	// Line 279, Address: 0x2d7fa8, Func Offset: 0x1e8
	// Line 280, Address: 0x2d7fb8, Func Offset: 0x1f8
	// Line 279, Address: 0x2d7fc8, Func Offset: 0x208
	// Line 280, Address: 0x2d7fcc, Func Offset: 0x20c
	// Line 281, Address: 0x2d7fd8, Func Offset: 0x218
	// Line 283, Address: 0x2d7fe0, Func Offset: 0x220
	// Line 284, Address: 0x2d7fe8, Func Offset: 0x228
	// Line 286, Address: 0x2d7ff8, Func Offset: 0x238
	// Line 287, Address: 0x2d7ffc, Func Offset: 0x23c
	// Line 297, Address: 0x2d8004, Func Offset: 0x244
	// Line 298, Address: 0x2d801c, Func Offset: 0x25c
	// Line 300, Address: 0x2d8024, Func Offset: 0x264
	// Line 301, Address: 0x2d8030, Func Offset: 0x270
	// Line 302, Address: 0x2d8038, Func Offset: 0x278
	// Line 303, Address: 0x2d8048, Func Offset: 0x288
	// Line 304, Address: 0x2d8058, Func Offset: 0x298
	// Line 306, Address: 0x2d805c, Func Offset: 0x29c
	// Line 304, Address: 0x2d8060, Func Offset: 0x2a0
	// Line 306, Address: 0x2d8064, Func Offset: 0x2a4
	// Line 307, Address: 0x2d806c, Func Offset: 0x2ac
	// Line 309, Address: 0x2d807c, Func Offset: 0x2bc
	// Line 310, Address: 0x2d8084, Func Offset: 0x2c4
	// Line 313, Address: 0x2d8090, Func Offset: 0x2d0
	// Line 314, Address: 0x2d809c, Func Offset: 0x2dc
	// Line 315, Address: 0x2d80a4, Func Offset: 0x2e4
	// Line 320, Address: 0x2d80c4, Func Offset: 0x304
	// Line 324, Address: 0x2d80c8, Func Offset: 0x308
	// Line 320, Address: 0x2d80cc, Func Offset: 0x30c
	// Line 317, Address: 0x2d80d0, Func Offset: 0x310
	// Line 324, Address: 0x2d80d8, Func Offset: 0x318
	// Line 318, Address: 0x2d80f8, Func Offset: 0x338
	// Line 320, Address: 0x2d80fc, Func Offset: 0x33c
	// Line 324, Address: 0x2d8100, Func Offset: 0x340
	// Line 320, Address: 0x2d8104, Func Offset: 0x344
	// Line 318, Address: 0x2d8108, Func Offset: 0x348
	// Line 317, Address: 0x2d8110, Func Offset: 0x350
	// Line 320, Address: 0x2d8114, Func Offset: 0x354
	// Line 321, Address: 0x2d8118, Func Offset: 0x358
	// Line 320, Address: 0x2d811c, Func Offset: 0x35c
	// Line 321, Address: 0x2d8120, Func Offset: 0x360
	// Line 323, Address: 0x2d8124, Func Offset: 0x364
	// Line 321, Address: 0x2d8128, Func Offset: 0x368
	// Line 324, Address: 0x2d812c, Func Offset: 0x36c
	// Line 325, Address: 0x2d8130, Func Offset: 0x370
	// Line 327, Address: 0x2d8134, Func Offset: 0x374
	// Line 320, Address: 0x2d8138, Func Offset: 0x378
	// Line 318, Address: 0x2d8144, Func Offset: 0x384
	// Line 320, Address: 0x2d8148, Func Offset: 0x388
	// Line 326, Address: 0x2d814c, Func Offset: 0x38c
	// Line 320, Address: 0x2d8150, Func Offset: 0x390
	// Line 326, Address: 0x2d8154, Func Offset: 0x394
	// Line 320, Address: 0x2d8158, Func Offset: 0x398
	// Line 321, Address: 0x2d815c, Func Offset: 0x39c
	// Line 330, Address: 0x2d8164, Func Offset: 0x3a4
	// Line 326, Address: 0x2d816c, Func Offset: 0x3ac
	// Line 317, Address: 0x2d8170, Func Offset: 0x3b0
	// Line 328, Address: 0x2d8174, Func Offset: 0x3b4
	// Line 330, Address: 0x2d817c, Func Offset: 0x3bc
	// Line 326, Address: 0x2d8180, Func Offset: 0x3c0
	// Line 328, Address: 0x2d8184, Func Offset: 0x3c4
	// Line 329, Address: 0x2d8188, Func Offset: 0x3c8
	// Line 330, Address: 0x2d818c, Func Offset: 0x3cc
	// Line 321, Address: 0x2d8190, Func Offset: 0x3d0
	// Line 331, Address: 0x2d8194, Func Offset: 0x3d4
	// Line 321, Address: 0x2d8198, Func Offset: 0x3d8
	// Line 335, Address: 0x2d819c, Func Offset: 0x3dc
	// Line 318, Address: 0x2d81a0, Func Offset: 0x3e0
	// Line 321, Address: 0x2d81a4, Func Offset: 0x3e4
	// Line 317, Address: 0x2d81b0, Func Offset: 0x3f0
	// Line 321, Address: 0x2d81b4, Func Offset: 0x3f4
	// Line 323, Address: 0x2d81b8, Func Offset: 0x3f8
	// Line 321, Address: 0x2d81bc, Func Offset: 0x3fc
	// Line 327, Address: 0x2d81c0, Func Offset: 0x400
	// Line 321, Address: 0x2d81c4, Func Offset: 0x404
	// Line 329, Address: 0x2d81c8, Func Offset: 0x408
	// Line 323, Address: 0x2d81cc, Func Offset: 0x40c
	// Line 329, Address: 0x2d81d0, Func Offset: 0x410
	// Line 336, Address: 0x2d81d4, Func Offset: 0x414
	// Line 327, Address: 0x2d81d8, Func Offset: 0x418
	// Line 318, Address: 0x2d81dc, Func Offset: 0x41c
	// Line 329, Address: 0x2d81e0, Func Offset: 0x420
	// Line 336, Address: 0x2d81e4, Func Offset: 0x424
	// Line 334, Address: 0x2d81e8, Func Offset: 0x428
	// Line 336, Address: 0x2d81ec, Func Offset: 0x42c
	// Line 327, Address: 0x2d81f0, Func Offset: 0x430
	// Line 323, Address: 0x2d81f4, Func Offset: 0x434
	// Line 327, Address: 0x2d81f8, Func Offset: 0x438
	// Line 323, Address: 0x2d81fc, Func Offset: 0x43c
	// Line 327, Address: 0x2d8200, Func Offset: 0x440
	// Line 329, Address: 0x2d8208, Func Offset: 0x448
	// Line 336, Address: 0x2d8214, Func Offset: 0x454
	// Line 329, Address: 0x2d8218, Func Offset: 0x458
	// Line 323, Address: 0x2d8220, Func Offset: 0x460
	// Line 336, Address: 0x2d822c, Func Offset: 0x46c
	// Line 323, Address: 0x2d8230, Func Offset: 0x470
	// Line 324, Address: 0x2d8234, Func Offset: 0x474
	// Line 323, Address: 0x2d8238, Func Offset: 0x478
	// Line 336, Address: 0x2d823c, Func Offset: 0x47c
	// Line 323, Address: 0x2d8240, Func Offset: 0x480
	// Line 336, Address: 0x2d8244, Func Offset: 0x484
	// Line 324, Address: 0x2d8248, Func Offset: 0x488
	// Line 336, Address: 0x2d824c, Func Offset: 0x48c
	// Line 324, Address: 0x2d825c, Func Offset: 0x49c
	// Line 325, Address: 0x2d8274, Func Offset: 0x4b4
	// Line 324, Address: 0x2d8278, Func Offset: 0x4b8
	// Line 325, Address: 0x2d8280, Func Offset: 0x4c0
	// Line 326, Address: 0x2d829c, Func Offset: 0x4dc
	// Line 325, Address: 0x2d82a0, Func Offset: 0x4e0
	// Line 326, Address: 0x2d82a8, Func Offset: 0x4e8
	// Line 327, Address: 0x2d82c4, Func Offset: 0x504
	// Line 326, Address: 0x2d82c8, Func Offset: 0x508
	// Line 327, Address: 0x2d82d0, Func Offset: 0x510
	// Line 328, Address: 0x2d82ec, Func Offset: 0x52c
	// Line 327, Address: 0x2d82f0, Func Offset: 0x530
	// Line 328, Address: 0x2d82f8, Func Offset: 0x538
	// Line 329, Address: 0x2d8314, Func Offset: 0x554
	// Line 328, Address: 0x2d8318, Func Offset: 0x558
	// Line 329, Address: 0x2d8320, Func Offset: 0x560
	// Line 330, Address: 0x2d833c, Func Offset: 0x57c
	// Line 329, Address: 0x2d8340, Func Offset: 0x580
	// Line 330, Address: 0x2d8348, Func Offset: 0x588
	// Line 331, Address: 0x2d8364, Func Offset: 0x5a4
	// Line 330, Address: 0x2d8368, Func Offset: 0x5a8
	// Line 331, Address: 0x2d8370, Func Offset: 0x5b0
	// Line 334, Address: 0x2d838c, Func Offset: 0x5cc
	// Line 331, Address: 0x2d8390, Func Offset: 0x5d0
	// Line 334, Address: 0x2d8398, Func Offset: 0x5d8
	// Line 335, Address: 0x2d83b4, Func Offset: 0x5f4
	// Line 334, Address: 0x2d83b8, Func Offset: 0x5f8
	// Line 335, Address: 0x2d83c0, Func Offset: 0x600
	// Line 336, Address: 0x2d83e4, Func Offset: 0x624
	// Line 337, Address: 0x2d83f0, Func Offset: 0x630
	// Line 338, Address: 0x2d83fc, Func Offset: 0x63c
	// Line 342, Address: 0x2d8408, Func Offset: 0x648
	// Line 341, Address: 0x2d8410, Func Offset: 0x650
	// Line 342, Address: 0x2d8414, Func Offset: 0x654
	// Line 341, Address: 0x2d841c, Func Offset: 0x65c
	// Line 342, Address: 0x2d8424, Func Offset: 0x664
	// Line 343, Address: 0x2d8434, Func Offset: 0x674
	// Line 342, Address: 0x2d8438, Func Offset: 0x678
	// Line 343, Address: 0x2d8440, Func Offset: 0x680
	// Line 341, Address: 0x2d8444, Func Offset: 0x684
	// Line 343, Address: 0x2d844c, Func Offset: 0x68c
	// Line 348, Address: 0x2d8474, Func Offset: 0x6b4
	// Line 343, Address: 0x2d8478, Func Offset: 0x6b8
	// Line 344, Address: 0x2d8484, Func Offset: 0x6c4
	// Line 345, Address: 0x2d8488, Func Offset: 0x6c8
	// Line 346, Address: 0x2d848c, Func Offset: 0x6cc
	// Line 347, Address: 0x2d8490, Func Offset: 0x6d0
	// Line 348, Address: 0x2d8494, Func Offset: 0x6d4
	// Line 344, Address: 0x2d8498, Func Offset: 0x6d8
	// Line 345, Address: 0x2d84a0, Func Offset: 0x6e0
	// Line 344, Address: 0x2d84a4, Func Offset: 0x6e4
	// Line 345, Address: 0x2d84a8, Func Offset: 0x6e8
	// Line 344, Address: 0x2d84ac, Func Offset: 0x6ec
	// Line 345, Address: 0x2d84b0, Func Offset: 0x6f0
	// Line 344, Address: 0x2d84b4, Func Offset: 0x6f4
	// Line 345, Address: 0x2d84b8, Func Offset: 0x6f8
	// Line 348, Address: 0x2d84bc, Func Offset: 0x6fc
	// Line 346, Address: 0x2d84c0, Func Offset: 0x700
	// Line 348, Address: 0x2d84c4, Func Offset: 0x704
	// Line 347, Address: 0x2d84c8, Func Offset: 0x708
	// Line 346, Address: 0x2d84d0, Func Offset: 0x710
	// Line 347, Address: 0x2d84d4, Func Offset: 0x714
	// Line 345, Address: 0x2d84d8, Func Offset: 0x718
	// Line 344, Address: 0x2d84dc, Func Offset: 0x71c
	// Line 348, Address: 0x2d84e0, Func Offset: 0x720
	// Line 346, Address: 0x2d84ec, Func Offset: 0x72c
	// Line 345, Address: 0x2d84f0, Func Offset: 0x730
	// Line 348, Address: 0x2d84f4, Func Offset: 0x734
	// Line 349, Address: 0x2d84f8, Func Offset: 0x738
	// Line 351, Address: 0x2d84fc, Func Offset: 0x73c
	// Line 348, Address: 0x2d8500, Func Offset: 0x740
	// Line 349, Address: 0x2d8504, Func Offset: 0x744
	// Line 351, Address: 0x2d850c, Func Offset: 0x74c
	// Line 349, Address: 0x2d8510, Func Offset: 0x750
	// Line 351, Address: 0x2d8518, Func Offset: 0x758
	// Line 349, Address: 0x2d851c, Func Offset: 0x75c
	// Line 351, Address: 0x2d8524, Func Offset: 0x764
	// Line 349, Address: 0x2d8528, Func Offset: 0x768
	// Line 351, Address: 0x2d852c, Func Offset: 0x76c
	// Line 349, Address: 0x2d8534, Func Offset: 0x774
	// Line 351, Address: 0x2d8538, Func Offset: 0x778
	// Line 348, Address: 0x2d853c, Func Offset: 0x77c
	// Line 351, Address: 0x2d8540, Func Offset: 0x780
	// Line 348, Address: 0x2d8544, Func Offset: 0x784
	// Line 350, Address: 0x2d854c, Func Offset: 0x78c
	// Line 348, Address: 0x2d8554, Func Offset: 0x794
	// Line 350, Address: 0x2d8558, Func Offset: 0x798
	// Line 348, Address: 0x2d855c, Func Offset: 0x79c
	// Line 350, Address: 0x2d8560, Func Offset: 0x7a0
	// Line 348, Address: 0x2d856c, Func Offset: 0x7ac
	// Line 350, Address: 0x2d8570, Func Offset: 0x7b0
	// Line 348, Address: 0x2d8578, Func Offset: 0x7b8
	// Line 349, Address: 0x2d8580, Func Offset: 0x7c0
	// Line 350, Address: 0x2d85a4, Func Offset: 0x7e4
	// Line 349, Address: 0x2d85a8, Func Offset: 0x7e8
	// Line 350, Address: 0x2d85ac, Func Offset: 0x7ec
	// Line 351, Address: 0x2d85d0, Func Offset: 0x810
	// Line 350, Address: 0x2d85d4, Func Offset: 0x814
	// Line 351, Address: 0x2d85d8, Func Offset: 0x818
	// Line 352, Address: 0x2d8600, Func Offset: 0x840
	// Line 354, Address: 0x2d8614, Func Offset: 0x854
	// Line 355, Address: 0x2d861c, Func Offset: 0x85c
	// Line 356, Address: 0x2d8624, Func Offset: 0x864
	// Line 359, Address: 0x2d862c, Func Offset: 0x86c
	// Line 360, Address: 0x2d8638, Func Offset: 0x878
	// Line 361, Address: 0x2d8640, Func Offset: 0x880
	// Line 362, Address: 0x2d8658, Func Offset: 0x898
	// Line 363, Address: 0x2d8668, Func Offset: 0x8a8
	// Line 365, Address: 0x2d866c, Func Offset: 0x8ac
	// Line 363, Address: 0x2d8670, Func Offset: 0x8b0
	// Line 365, Address: 0x2d8674, Func Offset: 0x8b4
	// Line 366, Address: 0x2d867c, Func Offset: 0x8bc
	// Line 368, Address: 0x2d8684, Func Offset: 0x8c4
	// Line 369, Address: 0x2d868c, Func Offset: 0x8cc
	// Line 370, Address: 0x2d8698, Func Offset: 0x8d8
	// Line 372, Address: 0x2d86b0, Func Offset: 0x8f0
	// Line 373, Address: 0x2d86c0, Func Offset: 0x900
	// Func End, Address: 0x2d86f8, Func Offset: 0x938
}

