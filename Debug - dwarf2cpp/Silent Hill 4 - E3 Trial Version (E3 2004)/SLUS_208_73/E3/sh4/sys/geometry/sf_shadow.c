typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct sfFrame;
typedef struct _anon8;
typedef struct _anon9;
typedef struct _anon10;
typedef struct _anon11;
typedef struct _anon12;
typedef struct _anon13;
typedef struct _anon14;


typedef int type_0[4];
typedef unsigned int type_1[4];
typedef void* type_2[4];
typedef short type_3[8];
typedef unsigned short type_4[8];
typedef char type_5[16];
typedef unsigned char type_6[16];
typedef float type_7[4];
typedef float type_8[1];
typedef int type_9[1];
typedef long type_10[1];
typedef float type_11[4];
typedef float type_12[4][4];
typedef long type_13[2];
typedef unsigned long type_14[2];

struct _anon0
{
	int x0;
	int y0;
	int x1;
	int y1;
};

struct _anon1
{
	_anon5 frame;
	_anon5 zbuf;
	_anon5 xyoffset;
	_anon5 scissor;
	_anon5 test;
	_anon5 clamp;
	_anon5 tex1;
};

struct _anon2
{
	_anon9 pmode;
	_anon12 smode2;
	_anon10 dispfb;
	_anon14 display;
	_anon13 bgcolor;
};

struct _anon3
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

struct _anon4
{
	_anon8 giftag;
	_anon5 prmodecont;
	_anon5 colclamp;
	_anon5 dthe;
	_anon1 context1_env;
	_anon1 context2_env;
};

union _anon5
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

struct _anon6
{
	_anon8 giftag;
	_anon5 fba;
	_anon5 test_0;
	_anon5 prim;
	_anon5 rgba;
	_anon5 xyz2_0;
	_anon5 xyz2_1;
	_anon5 test_1;
};

struct _anon7
{
	sfFrame volume_buffer;
	_anon0 volume_clip;
	_anon3 volume_buffer_tex;
	_anon11 volume_screen;
	sfFrame volume_zbuffer;
	_anon3 volume_zbuffer_tex;
	sfFrame shadow_buffer;
	_anon0 shadow_clip;
	_anon3 shadow_buffer_tex;
	int mainframe_w;
	int mainframe_h;
	int mainframe_zbp;
	int mainframe_zpsm;
	int sb_w;
	int sb_h;
	int usging_zfail;
	int density;
};

struct sfFrame
{
	_anon2 disp;
	_anon4 draw;
	_anon6 clear;
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

struct _anon8
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

struct _anon9
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

struct _anon10
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

struct _anon11
{
	float psm[4][4];
	int screen_zmax;
	int screen_zmin;
	float screen_cx;
	float screen_cy;
	int screen_width;
	int screen_height;
	float pixel_aspect;
	unsigned int dirty;
};

struct _anon12
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

struct _anon13
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

struct _anon14
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

_anon7 shadow_work;
unsigned long* sg_packet_cur;

void ScClipConstruct(_anon0* sc_clip, int w, int h);
void CreateShadowFrameBuffer();
void CopyZBuffer();
void ClearShadowBuffer();
void CopyZBufferReverse();
void SetShadowBufferDrawEnv();
void ClearMinusA();
void MoveRTOA();
void SetNormalDrawEnv();
void ShadowDraw();
void ShadowDrawDARefer(float ratio);
void sfShadowInit();
void sfShadowSetDensity(int density);
void sfShadowSetDrawEnv(int zfail);
void sfShadowReflectResult();
void sfShadowReflectResultDistAlphaRefer(float ratio);

// 
// Start address: 0x2088d0
void ScClipConstruct(_anon0* sc_clip, int w, int h)
{
	// Line 26, Address: 0x2088d0, Func Offset: 0
	// Line 27, Address: 0x2088e0, Func Offset: 0x10
	// Line 28, Address: 0x208900, Func Offset: 0x30
	// Line 29, Address: 0x208904, Func Offset: 0x34
	// Line 28, Address: 0x208908, Func Offset: 0x38
	// Line 29, Address: 0x20890c, Func Offset: 0x3c
	// Line 28, Address: 0x208910, Func Offset: 0x40
	// Line 30, Address: 0x208914, Func Offset: 0x44
	// Line 28, Address: 0x208918, Func Offset: 0x48
	// Line 30, Address: 0x20891c, Func Offset: 0x4c
	// Line 29, Address: 0x208920, Func Offset: 0x50
	// Line 31, Address: 0x208924, Func Offset: 0x54
	// Func End, Address: 0x20892c, Func Offset: 0x5c
}

// 
// Start address: 0x208930
void CreateShadowFrameBuffer()
{
	sfFrame* fr;
	_anon11* scr;
	int w;
	int h;
	// Line 70, Address: 0x208930, Func Offset: 0
	// Line 76, Address: 0x208940, Func Offset: 0x10
	// Line 77, Address: 0x208948, Func Offset: 0x18
	// Line 78, Address: 0x208950, Func Offset: 0x20
	// Line 77, Address: 0x208954, Func Offset: 0x24
	// Line 78, Address: 0x208958, Func Offset: 0x28
	// Line 79, Address: 0x20895c, Func Offset: 0x2c
	// Line 80, Address: 0x208960, Func Offset: 0x30
	// Line 81, Address: 0x208970, Func Offset: 0x40
	// Line 82, Address: 0x208980, Func Offset: 0x50
	// Line 83, Address: 0x208998, Func Offset: 0x68
	// Line 87, Address: 0x2089ac, Func Offset: 0x7c
	// Line 83, Address: 0x2089b0, Func Offset: 0x80
	// Line 87, Address: 0x2089b4, Func Offset: 0x84
	// Line 88, Address: 0x2089bc, Func Offset: 0x8c
	// Line 89, Address: 0x2089d8, Func Offset: 0xa8
	// Line 90, Address: 0x2089ec, Func Offset: 0xbc
	// Line 91, Address: 0x2089fc, Func Offset: 0xcc
	// Line 92, Address: 0x208a0c, Func Offset: 0xdc
	// Line 93, Address: 0x208a20, Func Offset: 0xf0
	// Line 94, Address: 0x208a30, Func Offset: 0x100
	// Line 95, Address: 0x208a44, Func Offset: 0x114
	// Line 97, Address: 0x208a60, Func Offset: 0x130
	// Line 98, Address: 0x208a7c, Func Offset: 0x14c
	// Line 102, Address: 0x208aa0, Func Offset: 0x170
	// Line 103, Address: 0x208aa8, Func Offset: 0x178
	// Line 104, Address: 0x208ab0, Func Offset: 0x180
	// Line 105, Address: 0x208ac8, Func Offset: 0x198
	// Line 106, Address: 0x208ad8, Func Offset: 0x1a8
	// Line 107, Address: 0x208af8, Func Offset: 0x1c8
	// Line 108, Address: 0x208b0c, Func Offset: 0x1dc
	// Line 111, Address: 0x208b14, Func Offset: 0x1e4
	// Line 112, Address: 0x208b1c, Func Offset: 0x1ec
	// Line 113, Address: 0x208b24, Func Offset: 0x1f4
	// Line 114, Address: 0x208b3c, Func Offset: 0x20c
	// Line 115, Address: 0x208b4c, Func Offset: 0x21c
	// Line 116, Address: 0x208b58, Func Offset: 0x228
	// Line 117, Address: 0x208b64, Func Offset: 0x234
	// Line 118, Address: 0x208b74, Func Offset: 0x244
	// Line 120, Address: 0x208b8c, Func Offset: 0x25c
	// Line 124, Address: 0x208bb0, Func Offset: 0x280
	// Line 125, Address: 0x208bc8, Func Offset: 0x298
	// Line 126, Address: 0x208be0, Func Offset: 0x2b0
	// Line 127, Address: 0x208be8, Func Offset: 0x2b8
	// Line 128, Address: 0x208bf0, Func Offset: 0x2c0
	// Line 129, Address: 0x208c00, Func Offset: 0x2d0
	// Line 130, Address: 0x208c10, Func Offset: 0x2e0
	// Line 131, Address: 0x208c1c, Func Offset: 0x2ec
	// Line 132, Address: 0x208c2c, Func Offset: 0x2fc
	// Line 134, Address: 0x208c44, Func Offset: 0x314
	// Line 135, Address: 0x208c58, Func Offset: 0x328
	// Line 137, Address: 0x208c74, Func Offset: 0x344
	// Func End, Address: 0x208c8c, Func Offset: 0x35c
}

// 
// Start address: 0x208c90
void CopyZBuffer()
{
	unsigned long* pk;
	_anon3 tex;
	_anon0* scl;
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
	// Line 143, Address: 0x208c90, Func Offset: 0
	// Line 150, Address: 0x208c94, Func Offset: 0x4
	// Line 143, Address: 0x208c98, Func Offset: 0x8
	// Line 150, Address: 0x208ca8, Func Offset: 0x18
	// Line 154, Address: 0x208ccc, Func Offset: 0x3c
	// Line 152, Address: 0x208cd0, Func Offset: 0x40
	// Line 154, Address: 0x208cd4, Func Offset: 0x44
	// Line 156, Address: 0x208ce0, Func Offset: 0x50
	// Line 157, Address: 0x208cf8, Func Offset: 0x68
	// Line 158, Address: 0x208d00, Func Offset: 0x70
	// Line 159, Address: 0x208d08, Func Offset: 0x78
	// Line 160, Address: 0x208d14, Func Offset: 0x84
	// Line 161, Address: 0x208d24, Func Offset: 0x94
	// Line 162, Address: 0x208d28, Func Offset: 0x98
	// Line 160, Address: 0x208d30, Func Offset: 0xa0
	// Line 161, Address: 0x208d40, Func Offset: 0xb0
	// Line 160, Address: 0x208d44, Func Offset: 0xb4
	// Line 161, Address: 0x208d48, Func Offset: 0xb8
	// Line 162, Address: 0x208d5c, Func Offset: 0xcc
	// Line 161, Address: 0x208d60, Func Offset: 0xd0
	// Line 162, Address: 0x208d64, Func Offset: 0xd4
	// Line 165, Address: 0x208d7c, Func Offset: 0xec
	// Line 162, Address: 0x208d80, Func Offset: 0xf0
	// Line 165, Address: 0x208d84, Func Offset: 0xf4
	// Line 162, Address: 0x208d88, Func Offset: 0xf8
	// Line 163, Address: 0x208d8c, Func Offset: 0xfc
	// Line 164, Address: 0x208d9c, Func Offset: 0x10c
	// Line 170, Address: 0x208da0, Func Offset: 0x110
	// Line 165, Address: 0x208da4, Func Offset: 0x114
	// Line 163, Address: 0x208da8, Func Offset: 0x118
	// Line 165, Address: 0x208dac, Func Offset: 0x11c
	// Line 166, Address: 0x208db0, Func Offset: 0x120
	// Line 167, Address: 0x208db4, Func Offset: 0x124
	// Line 163, Address: 0x208db8, Func Offset: 0x128
	// Line 164, Address: 0x208dc8, Func Offset: 0x138
	// Line 163, Address: 0x208dcc, Func Offset: 0x13c
	// Line 164, Address: 0x208dd0, Func Offset: 0x140
	// Line 165, Address: 0x208de4, Func Offset: 0x154
	// Line 164, Address: 0x208de8, Func Offset: 0x158
	// Line 165, Address: 0x208dec, Func Offset: 0x15c
	// Line 166, Address: 0x208e00, Func Offset: 0x170
	// Line 165, Address: 0x208e04, Func Offset: 0x174
	// Line 166, Address: 0x208e08, Func Offset: 0x178
	// Line 167, Address: 0x208e1c, Func Offset: 0x18c
	// Line 166, Address: 0x208e20, Func Offset: 0x190
	// Line 167, Address: 0x208e24, Func Offset: 0x194
	// Line 168, Address: 0x208e38, Func Offset: 0x1a8
	// Line 167, Address: 0x208e3c, Func Offset: 0x1ac
	// Line 168, Address: 0x208e68, Func Offset: 0x1d8
	// Line 169, Address: 0x208e8c, Func Offset: 0x1fc
	// Line 168, Address: 0x208e90, Func Offset: 0x200
	// Line 169, Address: 0x208e9c, Func Offset: 0x20c
	// Line 170, Address: 0x208eb0, Func Offset: 0x220
	// Line 169, Address: 0x208eb4, Func Offset: 0x224
	// Line 170, Address: 0x208ee0, Func Offset: 0x250
	// Line 171, Address: 0x208ef4, Func Offset: 0x264
	// Line 172, Address: 0x208efc, Func Offset: 0x26c
	// Line 173, Address: 0x208f14, Func Offset: 0x284
	// Line 174, Address: 0x208f2c, Func Offset: 0x29c
	// Func End, Address: 0x208f44, Func Offset: 0x2b4
}

// 
// Start address: 0x208f50
void ClearShadowBuffer()
{
	// Line 180, Address: 0x208f50, Func Offset: 0
	// Line 185, Address: 0x208f54, Func Offset: 0x4
	// Line 180, Address: 0x208f58, Func Offset: 0x8
	// Line 185, Address: 0x208f5c, Func Offset: 0xc
	// Line 186, Address: 0x208f64, Func Offset: 0x14
	// Line 187, Address: 0x208f70, Func Offset: 0x20
	// Func End, Address: 0x208f7c, Func Offset: 0x2c
}

// 
// Start address: 0x208f80
void CopyZBufferReverse()
{
	_anon3 tex;
	_anon0* scl;
	unsigned long* pk;
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
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	// Line 192, Address: 0x208f80, Func Offset: 0
	// Line 198, Address: 0x208f84, Func Offset: 0x4
	// Line 192, Address: 0x208f88, Func Offset: 0x8
	// Line 198, Address: 0x208f8c, Func Offset: 0xc
	// Line 192, Address: 0x208f90, Func Offset: 0x10
	// Line 198, Address: 0x208f98, Func Offset: 0x18
	// Line 199, Address: 0x208fa0, Func Offset: 0x20
	// Line 201, Address: 0x208fc8, Func Offset: 0x48
	// Line 204, Address: 0x208fcc, Func Offset: 0x4c
	// Line 205, Address: 0x208fe8, Func Offset: 0x68
	// Line 206, Address: 0x208ff0, Func Offset: 0x70
	// Line 207, Address: 0x208ff8, Func Offset: 0x78
	// Line 208, Address: 0x209004, Func Offset: 0x84
	// Line 210, Address: 0x209014, Func Offset: 0x94
	// Line 208, Address: 0x209018, Func Offset: 0x98
	// Line 210, Address: 0x20901c, Func Offset: 0x9c
	// Line 209, Address: 0x209020, Func Offset: 0xa0
	// Line 210, Address: 0x209024, Func Offset: 0xa4
	// Line 211, Address: 0x20902c, Func Offset: 0xac
	// Line 214, Address: 0x209030, Func Offset: 0xb0
	// Line 215, Address: 0x209034, Func Offset: 0xb4
	// Line 216, Address: 0x209038, Func Offset: 0xb8
	// Line 208, Address: 0x20903c, Func Offset: 0xbc
	// Line 209, Address: 0x20904c, Func Offset: 0xcc
	// Line 208, Address: 0x209050, Func Offset: 0xd0
	// Line 216, Address: 0x209054, Func Offset: 0xd4
	// Line 209, Address: 0x209058, Func Offset: 0xd8
	// Line 210, Address: 0x20906c, Func Offset: 0xec
	// Line 209, Address: 0x209070, Func Offset: 0xf0
	// Line 210, Address: 0x209074, Func Offset: 0xf4
	// Line 211, Address: 0x209088, Func Offset: 0x108
	// Line 210, Address: 0x20908c, Func Offset: 0x10c
	// Line 211, Address: 0x209090, Func Offset: 0x110
	// Line 212, Address: 0x2090a4, Func Offset: 0x124
	// Line 211, Address: 0x2090a8, Func Offset: 0x128
	// Line 212, Address: 0x2090bc, Func Offset: 0x13c
	// Line 214, Address: 0x2090d0, Func Offset: 0x150
	// Line 212, Address: 0x2090d4, Func Offset: 0x154
	// Line 214, Address: 0x2090e8, Func Offset: 0x168
	// Line 215, Address: 0x2090fc, Func Offset: 0x17c
	// Line 214, Address: 0x209100, Func Offset: 0x180
	// Line 215, Address: 0x209104, Func Offset: 0x184
	// Line 216, Address: 0x209118, Func Offset: 0x198
	// Line 215, Address: 0x20911c, Func Offset: 0x19c
	// Line 216, Address: 0x209120, Func Offset: 0x1a0
	// Line 217, Address: 0x209138, Func Offset: 0x1b8
	// Line 216, Address: 0x20913c, Func Offset: 0x1bc
	// Line 217, Address: 0x209140, Func Offset: 0x1c0
	// Line 216, Address: 0x209144, Func Offset: 0x1c4
	// Line 217, Address: 0x209148, Func Offset: 0x1c8
	// Line 225, Address: 0x209158, Func Offset: 0x1d8
	// Line 220, Address: 0x20915c, Func Offset: 0x1dc
	// Line 217, Address: 0x209160, Func Offset: 0x1e0
	// Line 220, Address: 0x209164, Func Offset: 0x1e4
	// Line 218, Address: 0x209168, Func Offset: 0x1e8
	// Line 220, Address: 0x20916c, Func Offset: 0x1ec
	// Line 219, Address: 0x209170, Func Offset: 0x1f0
	// Line 220, Address: 0x209174, Func Offset: 0x1f4
	// Line 221, Address: 0x209178, Func Offset: 0x1f8
	// Line 217, Address: 0x20917c, Func Offset: 0x1fc
	// Line 222, Address: 0x209188, Func Offset: 0x208
	// Line 217, Address: 0x20918c, Func Offset: 0x20c
	// Line 218, Address: 0x209190, Func Offset: 0x210
	// Line 217, Address: 0x209194, Func Offset: 0x214
	// Line 226, Address: 0x209198, Func Offset: 0x218
	// Line 218, Address: 0x20919c, Func Offset: 0x21c
	// Line 219, Address: 0x2091b0, Func Offset: 0x230
	// Line 218, Address: 0x2091b4, Func Offset: 0x234
	// Line 219, Address: 0x2091b8, Func Offset: 0x238
	// Line 220, Address: 0x2091cc, Func Offset: 0x24c
	// Line 219, Address: 0x2091d0, Func Offset: 0x250
	// Line 220, Address: 0x2091d4, Func Offset: 0x254
	// Line 221, Address: 0x2091e8, Func Offset: 0x268
	// Line 220, Address: 0x2091ec, Func Offset: 0x26c
	// Line 221, Address: 0x2091f0, Func Offset: 0x270
	// Line 222, Address: 0x209204, Func Offset: 0x284
	// Line 221, Address: 0x209208, Func Offset: 0x288
	// Line 222, Address: 0x20920c, Func Offset: 0x28c
	// Line 223, Address: 0x209220, Func Offset: 0x2a0
	// Line 222, Address: 0x209224, Func Offset: 0x2a4
	// Line 223, Address: 0x209250, Func Offset: 0x2d0
	// Line 224, Address: 0x209274, Func Offset: 0x2f4
	// Line 223, Address: 0x209278, Func Offset: 0x2f8
	// Line 224, Address: 0x209284, Func Offset: 0x304
	// Line 225, Address: 0x209298, Func Offset: 0x318
	// Line 224, Address: 0x20929c, Func Offset: 0x31c
	// Line 225, Address: 0x2092c8, Func Offset: 0x348
	// Line 226, Address: 0x2092dc, Func Offset: 0x35c
	// Line 225, Address: 0x2092e0, Func Offset: 0x360
	// Line 226, Address: 0x2092e4, Func Offset: 0x364
	// Line 228, Address: 0x2092f8, Func Offset: 0x378
	// Line 229, Address: 0x209300, Func Offset: 0x380
	// Line 230, Address: 0x209318, Func Offset: 0x398
	// Line 231, Address: 0x209330, Func Offset: 0x3b0
	// Func End, Address: 0x209348, Func Offset: 0x3c8
}

// 
// Start address: 0x209350
void SetShadowBufferDrawEnv()
{
	unsigned long* pk;
	unsigned long* p;
	unsigned long* p;
	// Line 238, Address: 0x209350, Func Offset: 0
	// Line 249, Address: 0x209354, Func Offset: 0x4
	// Line 238, Address: 0x209358, Func Offset: 0x8
	// Line 249, Address: 0x20935c, Func Offset: 0xc
	// Line 238, Address: 0x209360, Func Offset: 0x10
	// Line 249, Address: 0x209364, Func Offset: 0x14
	// Line 253, Address: 0x20936c, Func Offset: 0x1c
	// Line 254, Address: 0x209384, Func Offset: 0x34
	// Line 255, Address: 0x20938c, Func Offset: 0x3c
	// Line 256, Address: 0x209394, Func Offset: 0x44
	// Line 258, Address: 0x2093a0, Func Offset: 0x50
	// Line 259, Address: 0x2093d4, Func Offset: 0x84
	// Line 258, Address: 0x2093d8, Func Offset: 0x88
	// Line 259, Address: 0x2093e0, Func Offset: 0x90
	// Line 261, Address: 0x2093f8, Func Offset: 0xa8
	// Line 262, Address: 0x209400, Func Offset: 0xb0
	// Line 263, Address: 0x209418, Func Offset: 0xc8
	// Line 264, Address: 0x209430, Func Offset: 0xe0
	// Func End, Address: 0x209444, Func Offset: 0xf4
}

// 
// Start address: 0x209450
void ClearMinusA()
{
	_anon0* scl;
	_anon5* dmatag;
	int size;
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
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	// Line 270, Address: 0x209450, Func Offset: 0
	// Line 277, Address: 0x20945c, Func Offset: 0xc
	// Line 278, Address: 0x209468, Func Offset: 0x18
	// Line 279, Address: 0x209470, Func Offset: 0x20
	// Line 280, Address: 0x209484, Func Offset: 0x34
	// Line 281, Address: 0x209494, Func Offset: 0x44
	// Line 282, Address: 0x209498, Func Offset: 0x48
	// Line 284, Address: 0x20949c, Func Offset: 0x4c
	// Line 281, Address: 0x2094a0, Func Offset: 0x50
	// Line 284, Address: 0x2094a8, Func Offset: 0x58
	// Line 285, Address: 0x2094b0, Func Offset: 0x60
	// Line 287, Address: 0x2094c0, Func Offset: 0x70
	// Line 289, Address: 0x2094c4, Func Offset: 0x74
	// Line 290, Address: 0x2094cc, Func Offset: 0x7c
	// Line 291, Address: 0x2094d8, Func Offset: 0x88
	// Line 292, Address: 0x2094dc, Func Offset: 0x8c
	// Line 291, Address: 0x2094e0, Func Offset: 0x90
	// Line 292, Address: 0x2094e8, Func Offset: 0x98
	// Line 291, Address: 0x2094ec, Func Offset: 0x9c
	// Line 295, Address: 0x2094f0, Func Offset: 0xa0
	// Line 291, Address: 0x2094f4, Func Offset: 0xa4
	// Line 295, Address: 0x2094f8, Func Offset: 0xa8
	// Line 291, Address: 0x2094fc, Func Offset: 0xac
	// Line 292, Address: 0x209500, Func Offset: 0xb0
	// Line 293, Address: 0x209504, Func Offset: 0xb4
	// Line 294, Address: 0x209508, Func Offset: 0xb8
	// Line 295, Address: 0x20950c, Func Offset: 0xbc
	// Line 291, Address: 0x209510, Func Offset: 0xc0
	// Line 296, Address: 0x20951c, Func Offset: 0xcc
	// Line 291, Address: 0x209520, Func Offset: 0xd0
	// Line 292, Address: 0x209524, Func Offset: 0xd4
	// Line 291, Address: 0x209528, Func Offset: 0xd8
	// Line 297, Address: 0x20952c, Func Offset: 0xdc
	// Line 292, Address: 0x209530, Func Offset: 0xe0
	// Line 304, Address: 0x209534, Func Offset: 0xe4
	// Line 300, Address: 0x20953c, Func Offset: 0xec
	// Line 292, Address: 0x209540, Func Offset: 0xf0
	// Line 293, Address: 0x209550, Func Offset: 0x100
	// Line 292, Address: 0x209554, Func Offset: 0x104
	// Line 293, Address: 0x209558, Func Offset: 0x108
	// Line 294, Address: 0x20956c, Func Offset: 0x11c
	// Line 293, Address: 0x209570, Func Offset: 0x120
	// Line 294, Address: 0x209574, Func Offset: 0x124
	// Line 295, Address: 0x209588, Func Offset: 0x138
	// Line 294, Address: 0x20958c, Func Offset: 0x13c
	// Line 295, Address: 0x209590, Func Offset: 0x140
	// Line 296, Address: 0x2095a4, Func Offset: 0x154
	// Line 295, Address: 0x2095a8, Func Offset: 0x158
	// Line 296, Address: 0x2095ac, Func Offset: 0x15c
	// Line 297, Address: 0x2095c0, Func Offset: 0x170
	// Line 296, Address: 0x2095c4, Func Offset: 0x174
	// Line 297, Address: 0x2095c8, Func Offset: 0x178
	// Line 298, Address: 0x2095dc, Func Offset: 0x18c
	// Line 297, Address: 0x2095e0, Func Offset: 0x190
	// Line 298, Address: 0x2095f4, Func Offset: 0x1a4
	// Line 299, Address: 0x209608, Func Offset: 0x1b8
	// Line 298, Address: 0x20960c, Func Offset: 0x1bc
	// Line 299, Address: 0x209620, Func Offset: 0x1d0
	// Line 300, Address: 0x209634, Func Offset: 0x1e4
	// Line 299, Address: 0x209638, Func Offset: 0x1e8
	// Line 300, Address: 0x20963c, Func Offset: 0x1ec
	// Line 301, Address: 0x209650, Func Offset: 0x200
	// Line 300, Address: 0x209654, Func Offset: 0x204
	// Line 301, Address: 0x209658, Func Offset: 0x208
	// Line 302, Address: 0x20966c, Func Offset: 0x21c
	// Line 301, Address: 0x209670, Func Offset: 0x220
	// Line 302, Address: 0x209684, Func Offset: 0x234
	// Line 303, Address: 0x209698, Func Offset: 0x248
	// Line 302, Address: 0x20969c, Func Offset: 0x24c
	// Line 303, Address: 0x2096b0, Func Offset: 0x260
	// Line 304, Address: 0x2096c4, Func Offset: 0x274
	// Line 303, Address: 0x2096c8, Func Offset: 0x278
	// Line 304, Address: 0x2096cc, Func Offset: 0x27c
	// Line 305, Address: 0x2096e0, Func Offset: 0x290
	// Line 304, Address: 0x2096e4, Func Offset: 0x294
	// Line 305, Address: 0x2096e8, Func Offset: 0x298
	// Line 306, Address: 0x2096fc, Func Offset: 0x2ac
	// Line 305, Address: 0x209700, Func Offset: 0x2b0
	// Line 306, Address: 0x209704, Func Offset: 0x2b4
	// Line 307, Address: 0x209718, Func Offset: 0x2c8
	// Line 306, Address: 0x20971c, Func Offset: 0x2cc
	// Line 307, Address: 0x209730, Func Offset: 0x2e0
	// Line 308, Address: 0x209754, Func Offset: 0x304
	// Line 310, Address: 0x20975c, Func Offset: 0x30c
	// Line 311, Address: 0x209764, Func Offset: 0x314
	// Line 312, Address: 0x20976c, Func Offset: 0x31c
	// Func End, Address: 0x209780, Func Offset: 0x330
}

// 
// Start address: 0x209780
void MoveRTOA()
{
	_anon0* scl;
	_anon3* vl_tex;
	int density;
	_anon5* dmatag;
	int size;
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
	// Line 317, Address: 0x209780, Func Offset: 0
	// Line 322, Address: 0x209784, Func Offset: 0x4
	// Line 317, Address: 0x209788, Func Offset: 0x8
	// Line 327, Address: 0x209798, Func Offset: 0x18
	// Line 328, Address: 0x2097a4, Func Offset: 0x24
	// Line 329, Address: 0x2097ac, Func Offset: 0x2c
	// Line 330, Address: 0x2097c0, Func Offset: 0x40
	// Line 331, Address: 0x2097d0, Func Offset: 0x50
	// Line 332, Address: 0x2097d4, Func Offset: 0x54
	// Line 334, Address: 0x2097d8, Func Offset: 0x58
	// Line 331, Address: 0x2097dc, Func Offset: 0x5c
	// Line 334, Address: 0x2097e4, Func Offset: 0x64
	// Line 335, Address: 0x2097ec, Func Offset: 0x6c
	// Line 337, Address: 0x2097fc, Func Offset: 0x7c
	// Line 338, Address: 0x209800, Func Offset: 0x80
	// Line 337, Address: 0x209804, Func Offset: 0x84
	// Line 342, Address: 0x209808, Func Offset: 0x88
	// Line 343, Address: 0x209810, Func Offset: 0x90
	// Line 344, Address: 0x20981c, Func Offset: 0x9c
	// Line 358, Address: 0x209820, Func Offset: 0xa0
	// Line 344, Address: 0x209824, Func Offset: 0xa4
	// Line 358, Address: 0x209828, Func Offset: 0xa8
	// Line 344, Address: 0x209830, Func Offset: 0xb0
	// Line 355, Address: 0x209838, Func Offset: 0xb8
	// Line 356, Address: 0x209840, Func Offset: 0xc0
	// Line 358, Address: 0x209844, Func Offset: 0xc4
	// Line 360, Address: 0x209848, Func Offset: 0xc8
	// Line 344, Address: 0x209850, Func Offset: 0xd0
	// Line 355, Address: 0x209860, Func Offset: 0xe0
	// Line 344, Address: 0x209864, Func Offset: 0xe4
	// Line 355, Address: 0x209868, Func Offset: 0xe8
	// Line 356, Address: 0x20987c, Func Offset: 0xfc
	// Line 355, Address: 0x209880, Func Offset: 0x100
	// Line 356, Address: 0x209884, Func Offset: 0x104
	// Line 358, Address: 0x209898, Func Offset: 0x118
	// Line 356, Address: 0x20989c, Func Offset: 0x11c
	// Line 358, Address: 0x2098a0, Func Offset: 0x120
	// Line 360, Address: 0x2098b4, Func Offset: 0x134
	// Line 358, Address: 0x2098b8, Func Offset: 0x138
	// Line 360, Address: 0x2098bc, Func Offset: 0x13c
	// Line 367, Address: 0x2098d4, Func Offset: 0x154
	// Line 360, Address: 0x2098d8, Func Offset: 0x158
	// Line 367, Address: 0x2098dc, Func Offset: 0x15c
	// Line 360, Address: 0x2098e0, Func Offset: 0x160
	// Line 361, Address: 0x2098e4, Func Offset: 0x164
	// Line 367, Address: 0x2098ec, Func Offset: 0x16c
	// Line 362, Address: 0x2098f0, Func Offset: 0x170
	// Line 361, Address: 0x2098f4, Func Offset: 0x174
	// Line 362, Address: 0x2098f8, Func Offset: 0x178
	// Line 363, Address: 0x209900, Func Offset: 0x180
	// Line 364, Address: 0x209904, Func Offset: 0x184
	// Line 367, Address: 0x209908, Func Offset: 0x188
	// Line 361, Address: 0x20990c, Func Offset: 0x18c
	// Line 362, Address: 0x20991c, Func Offset: 0x19c
	// Line 361, Address: 0x209920, Func Offset: 0x1a0
	// Line 362, Address: 0x209924, Func Offset: 0x1a4
	// Line 363, Address: 0x209938, Func Offset: 0x1b8
	// Line 362, Address: 0x20993c, Func Offset: 0x1bc
	// Line 363, Address: 0x209940, Func Offset: 0x1c0
	// Line 364, Address: 0x209954, Func Offset: 0x1d4
	// Line 363, Address: 0x209958, Func Offset: 0x1d8
	// Line 364, Address: 0x20995c, Func Offset: 0x1dc
	// Line 365, Address: 0x209970, Func Offset: 0x1f0
	// Line 364, Address: 0x209974, Func Offset: 0x1f4
	// Line 365, Address: 0x2099a0, Func Offset: 0x220
	// Line 366, Address: 0x2099b4, Func Offset: 0x234
	// Line 365, Address: 0x2099b8, Func Offset: 0x238
	// Line 366, Address: 0x2099d4, Func Offset: 0x254
	// Line 367, Address: 0x2099e8, Func Offset: 0x268
	// Line 366, Address: 0x2099ec, Func Offset: 0x26c
	// Line 367, Address: 0x209a18, Func Offset: 0x298
	// Line 369, Address: 0x209a2c, Func Offset: 0x2ac
	// Line 371, Address: 0x209a34, Func Offset: 0x2b4
	// Line 372, Address: 0x209a3c, Func Offset: 0x2bc
	// Line 373, Address: 0x209a44, Func Offset: 0x2c4
	// Func End, Address: 0x209a5c, Func Offset: 0x2dc
}

// 
// Start address: 0x209a60
void SetNormalDrawEnv()
{
	_anon5* dmatag;
	int size;
	// Line 413, Address: 0x209a60, Func Offset: 0
	// Line 416, Address: 0x209a6c, Func Offset: 0xc
	// Line 417, Address: 0x209a78, Func Offset: 0x18
	// Line 418, Address: 0x209a80, Func Offset: 0x20
	// Line 419, Address: 0x209a98, Func Offset: 0x38
	// Line 420, Address: 0x209aa8, Func Offset: 0x48
	// Line 421, Address: 0x209ab4, Func Offset: 0x54
	// Func End, Address: 0x209ac8, Func Offset: 0x68
}

// 
// Start address: 0x209ad0
void ShadowDraw()
{
	_anon3* tex;
	int x0;
	int y0;
	int x1;
	int y1;
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
	// Line 426, Address: 0x209ad0, Func Offset: 0
	// Line 430, Address: 0x209b08, Func Offset: 0x38
	// Line 431, Address: 0x209b28, Func Offset: 0x58
	// Line 435, Address: 0x209b2c, Func Offset: 0x5c
	// Line 432, Address: 0x209b30, Func Offset: 0x60
	// Line 431, Address: 0x209b34, Func Offset: 0x64
	// Line 433, Address: 0x209b38, Func Offset: 0x68
	// Line 437, Address: 0x209b3c, Func Offset: 0x6c
	// Line 438, Address: 0x209b48, Func Offset: 0x78
	// Line 440, Address: 0x209b58, Func Offset: 0x88
	// Line 441, Address: 0x209b60, Func Offset: 0x90
	// Line 442, Address: 0x209b6c, Func Offset: 0x9c
	// Line 444, Address: 0x209b7c, Func Offset: 0xac
	// Line 442, Address: 0x209b80, Func Offset: 0xb0
	// Line 444, Address: 0x209b84, Func Offset: 0xb4
	// Line 443, Address: 0x209b88, Func Offset: 0xb8
	// Line 444, Address: 0x209b8c, Func Offset: 0xbc
	// Line 445, Address: 0x209b90, Func Offset: 0xc0
	// Line 444, Address: 0x209b94, Func Offset: 0xc4
	// Line 445, Address: 0x209b98, Func Offset: 0xc8
	// Line 444, Address: 0x209b9c, Func Offset: 0xcc
	// Line 445, Address: 0x209ba0, Func Offset: 0xd0
	// Line 442, Address: 0x209ba4, Func Offset: 0xd4
	// Line 443, Address: 0x209bb4, Func Offset: 0xe4
	// Line 442, Address: 0x209bb8, Func Offset: 0xe8
	// Line 443, Address: 0x209bbc, Func Offset: 0xec
	// Line 444, Address: 0x209bd0, Func Offset: 0x100
	// Line 443, Address: 0x209bd4, Func Offset: 0x104
	// Line 444, Address: 0x209bd8, Func Offset: 0x108
	// Line 445, Address: 0x209bec, Func Offset: 0x11c
	// Line 444, Address: 0x209bf0, Func Offset: 0x120
	// Line 445, Address: 0x209bf4, Func Offset: 0x124
	// Line 450, Address: 0x209c10, Func Offset: 0x140
	// Line 445, Address: 0x209c14, Func Offset: 0x144
	// Line 450, Address: 0x209c18, Func Offset: 0x148
	// Line 446, Address: 0x209c1c, Func Offset: 0x14c
	// Line 450, Address: 0x209c20, Func Offset: 0x150
	// Line 446, Address: 0x209c2c, Func Offset: 0x15c
	// Line 450, Address: 0x209c30, Func Offset: 0x160
	// Line 452, Address: 0x209c3c, Func Offset: 0x16c
	// Line 450, Address: 0x209c40, Func Offset: 0x170
	// Line 452, Address: 0x209c44, Func Offset: 0x174
	// Line 450, Address: 0x209c48, Func Offset: 0x178
	// Line 446, Address: 0x209c4c, Func Offset: 0x17c
	// Line 452, Address: 0x209c50, Func Offset: 0x180
	// Line 446, Address: 0x209c54, Func Offset: 0x184
	// Line 452, Address: 0x209c58, Func Offset: 0x188
	// Line 446, Address: 0x209c64, Func Offset: 0x194
	// Line 452, Address: 0x209c68, Func Offset: 0x198
	// Line 447, Address: 0x209c6c, Func Offset: 0x19c
	// Line 452, Address: 0x209c70, Func Offset: 0x1a0
	// Line 449, Address: 0x209c74, Func Offset: 0x1a4
	// Line 452, Address: 0x209c78, Func Offset: 0x1a8
	// Line 447, Address: 0x209c80, Func Offset: 0x1b0
	// Line 449, Address: 0x209c8c, Func Offset: 0x1bc
	// Line 446, Address: 0x209c90, Func Offset: 0x1c0
	// Line 449, Address: 0x209c94, Func Offset: 0x1c4
	// Line 446, Address: 0x209c98, Func Offset: 0x1c8
	// Line 447, Address: 0x209ca0, Func Offset: 0x1d0
	// Line 446, Address: 0x209ca4, Func Offset: 0x1d4
	// Line 450, Address: 0x209ca8, Func Offset: 0x1d8
	// Line 447, Address: 0x209cac, Func Offset: 0x1dc
	// Line 449, Address: 0x209cc0, Func Offset: 0x1f0
	// Line 447, Address: 0x209cc4, Func Offset: 0x1f4
	// Line 449, Address: 0x209cc8, Func Offset: 0x1f8
	// Line 450, Address: 0x209cdc, Func Offset: 0x20c
	// Line 449, Address: 0x209ce0, Func Offset: 0x210
	// Line 450, Address: 0x209ce4, Func Offset: 0x214
	// Line 451, Address: 0x209cf8, Func Offset: 0x228
	// Line 450, Address: 0x209cfc, Func Offset: 0x22c
	// Line 451, Address: 0x209d00, Func Offset: 0x230
	// Line 452, Address: 0x209d14, Func Offset: 0x244
	// Line 451, Address: 0x209d18, Func Offset: 0x248
	// Line 452, Address: 0x209d4c, Func Offset: 0x27c
	// Line 453, Address: 0x209d60, Func Offset: 0x290
	// Line 455, Address: 0x209d68, Func Offset: 0x298
	// Line 456, Address: 0x209d70, Func Offset: 0x2a0
	// Line 458, Address: 0x209d78, Func Offset: 0x2a8
	// Func End, Address: 0x209d9c, Func Offset: 0x2cc
}

// 
// Start address: 0x209da0
void ShadowDrawDARefer(float ratio)
{
	_anon3* tex;
	int x0;
	int y0;
	int x1;
	int y1;
	int c;
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
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	// Line 463, Address: 0x209da0, Func Offset: 0
	// Line 467, Address: 0x209ddc, Func Offset: 0x3c
	// Line 468, Address: 0x209dfc, Func Offset: 0x5c
	// Line 473, Address: 0x209e00, Func Offset: 0x60
	// Line 468, Address: 0x209e04, Func Offset: 0x64
	// Line 469, Address: 0x209e08, Func Offset: 0x68
	// Line 474, Address: 0x209e0c, Func Offset: 0x6c
	// Line 470, Address: 0x209e10, Func Offset: 0x70
	// Line 474, Address: 0x209e14, Func Offset: 0x74
	// Line 476, Address: 0x209e18, Func Offset: 0x78
	// Line 474, Address: 0x209e1c, Func Offset: 0x7c
	// Line 476, Address: 0x209e28, Func Offset: 0x88
	// Line 477, Address: 0x209e30, Func Offset: 0x90
	// Line 479, Address: 0x209e40, Func Offset: 0xa0
	// Line 480, Address: 0x209e48, Func Offset: 0xa8
	// Line 481, Address: 0x209e54, Func Offset: 0xb4
	// Line 482, Address: 0x209e58, Func Offset: 0xb8
	// Line 481, Address: 0x209e5c, Func Offset: 0xbc
	// Line 482, Address: 0x209e60, Func Offset: 0xc0
	// Line 481, Address: 0x209e68, Func Offset: 0xc8
	// Line 482, Address: 0x209e6c, Func Offset: 0xcc
	// Line 483, Address: 0x209e74, Func Offset: 0xd4
	// Line 481, Address: 0x209e80, Func Offset: 0xe0
	// Line 482, Address: 0x209e90, Func Offset: 0xf0
	// Line 481, Address: 0x209e94, Func Offset: 0xf4
	// Line 482, Address: 0x209e98, Func Offset: 0xf8
	// Line 483, Address: 0x209eac, Func Offset: 0x10c
	// Line 482, Address: 0x209eb0, Func Offset: 0x110
	// Line 483, Address: 0x209eb4, Func Offset: 0x114
	// Line 484, Address: 0x209ed4, Func Offset: 0x134
	// Line 492, Address: 0x209ed8, Func Offset: 0x138
	// Line 484, Address: 0x209edc, Func Offset: 0x13c
	// Line 492, Address: 0x209ee8, Func Offset: 0x148
	// Line 484, Address: 0x209f04, Func Offset: 0x164
	// Line 488, Address: 0x209f0c, Func Offset: 0x16c
	// Line 494, Address: 0x209f10, Func Offset: 0x170
	// Line 489, Address: 0x209f14, Func Offset: 0x174
	// Line 494, Address: 0x209f20, Func Offset: 0x180
	// Line 483, Address: 0x209f38, Func Offset: 0x198
	// Line 491, Address: 0x209f3c, Func Offset: 0x19c
	// Line 483, Address: 0x209f40, Func Offset: 0x1a0
	// Line 484, Address: 0x209f44, Func Offset: 0x1a4
	// Line 488, Address: 0x209f48, Func Offset: 0x1a8
	// Line 499, Address: 0x209f50, Func Offset: 0x1b0
	// Line 489, Address: 0x209f54, Func Offset: 0x1b4
	// Line 491, Address: 0x209f60, Func Offset: 0x1c0
	// Line 484, Address: 0x209f64, Func Offset: 0x1c4
	// Line 491, Address: 0x209f70, Func Offset: 0x1d0
	// Line 484, Address: 0x209f74, Func Offset: 0x1d4
	// Line 500, Address: 0x209f78, Func Offset: 0x1d8
	// Line 484, Address: 0x209f80, Func Offset: 0x1e0
	// Line 500, Address: 0x209f84, Func Offset: 0x1e4
	// Line 488, Address: 0x209f88, Func Offset: 0x1e8
	// Line 500, Address: 0x209f8c, Func Offset: 0x1ec
	// Line 488, Address: 0x209f94, Func Offset: 0x1f4
	// Line 500, Address: 0x209f98, Func Offset: 0x1f8
	// Line 492, Address: 0x209f9c, Func Offset: 0x1fc
	// Line 488, Address: 0x209fa0, Func Offset: 0x200
	// Line 489, Address: 0x209fb0, Func Offset: 0x210
	// Line 488, Address: 0x209fb4, Func Offset: 0x214
	// Line 489, Address: 0x209fb8, Func Offset: 0x218
	// Line 491, Address: 0x209fcc, Func Offset: 0x22c
	// Line 489, Address: 0x209fd0, Func Offset: 0x230
	// Line 491, Address: 0x209fd4, Func Offset: 0x234
	// Line 492, Address: 0x209fe8, Func Offset: 0x248
	// Line 491, Address: 0x209fec, Func Offset: 0x24c
	// Line 492, Address: 0x209ff0, Func Offset: 0x250
	// Line 493, Address: 0x20a004, Func Offset: 0x264
	// Line 492, Address: 0x20a008, Func Offset: 0x268
	// Line 493, Address: 0x20a00c, Func Offset: 0x26c
	// Line 494, Address: 0x20a020, Func Offset: 0x280
	// Line 493, Address: 0x20a024, Func Offset: 0x284
	// Line 494, Address: 0x20a058, Func Offset: 0x2b8
	// Line 499, Address: 0x20a06c, Func Offset: 0x2cc
	// Line 494, Address: 0x20a070, Func Offset: 0x2d0
	// Line 499, Address: 0x20a074, Func Offset: 0x2d4
	// Line 500, Address: 0x20a088, Func Offset: 0x2e8
	// Line 499, Address: 0x20a08c, Func Offset: 0x2ec
	// Line 500, Address: 0x20a090, Func Offset: 0x2f0
	// Line 501, Address: 0x20a0a4, Func Offset: 0x304
	// Line 500, Address: 0x20a0a8, Func Offset: 0x308
	// Line 501, Address: 0x20a0ac, Func Offset: 0x30c
	// Line 502, Address: 0x20a0c0, Func Offset: 0x320
	// Line 501, Address: 0x20a0c4, Func Offset: 0x324
	// Line 502, Address: 0x20a0c8, Func Offset: 0x328
	// Line 503, Address: 0x20a0dc, Func Offset: 0x33c
	// Line 502, Address: 0x20a0e0, Func Offset: 0x340
	// Line 503, Address: 0x20a0e4, Func Offset: 0x344
	// Line 504, Address: 0x20a0f8, Func Offset: 0x358
	// Line 503, Address: 0x20a0fc, Func Offset: 0x35c
	// Line 504, Address: 0x20a130, Func Offset: 0x390
	// Line 506, Address: 0x20a144, Func Offset: 0x3a4
	// Line 508, Address: 0x20a14c, Func Offset: 0x3ac
	// Line 509, Address: 0x20a154, Func Offset: 0x3b4
	// Line 510, Address: 0x20a15c, Func Offset: 0x3bc
	// Func End, Address: 0x20a184, Func Offset: 0x3e4
}

// 
// Start address: 0x20a190
void sfShadowInit()
{
	// Line 535, Address: 0x20a190, Func Offset: 0
	// Line 536, Address: 0x20a198, Func Offset: 0x8
	// Func End, Address: 0x20a1a0, Func Offset: 0x10
}

// 
// Start address: 0x20a1a0
void sfShadowSetDensity(int density)
{
	// Line 545, Address: 0x20a1a0, Func Offset: 0
	// Line 546, Address: 0x20a1a4, Func Offset: 0x4
	// Func End, Address: 0x20a1ac, Func Offset: 0xc
}

// 
// Start address: 0x20a1b0
void sfShadowSetDrawEnv(int zfail)
{
	// Line 554, Address: 0x20a1b0, Func Offset: 0
	// Line 555, Address: 0x20a1b4, Func Offset: 0x4
	// Line 554, Address: 0x20a1b8, Func Offset: 0x8
	// Line 556, Address: 0x20a1c4, Func Offset: 0x14
	// Line 558, Address: 0x20a1cc, Func Offset: 0x1c
	// Line 560, Address: 0x20a1e0, Func Offset: 0x30
	// Line 561, Address: 0x20a1ec, Func Offset: 0x3c
	// Line 563, Address: 0x20a1f4, Func Offset: 0x44
	// Line 564, Address: 0x20a1fc, Func Offset: 0x4c
	// Line 565, Address: 0x20a204, Func Offset: 0x54
	// Line 566, Address: 0x20a20c, Func Offset: 0x5c
	// Line 567, Address: 0x20a214, Func Offset: 0x64
	// Line 568, Address: 0x20a220, Func Offset: 0x70
	// Line 569, Address: 0x20a228, Func Offset: 0x78
	// Line 571, Address: 0x20a230, Func Offset: 0x80
	// Line 572, Address: 0x20a238, Func Offset: 0x88
	// Func End, Address: 0x20a248, Func Offset: 0x98
}

// 
// Start address: 0x20a250
void sfShadowReflectResult()
{
	unsigned long* pk;
	// Line 583, Address: 0x20a250, Func Offset: 0
	// Line 585, Address: 0x20a254, Func Offset: 0x4
	// Line 583, Address: 0x20a258, Func Offset: 0x8
	// Line 585, Address: 0x20a25c, Func Offset: 0xc
	// Line 586, Address: 0x20a274, Func Offset: 0x24
	// Line 587, Address: 0x20a27c, Func Offset: 0x2c
	// Line 588, Address: 0x20a28c, Func Offset: 0x3c
	// Line 589, Address: 0x20a294, Func Offset: 0x44
	// Line 590, Address: 0x20a298, Func Offset: 0x48
	// Line 592, Address: 0x20a2a0, Func Offset: 0x50
	// Line 593, Address: 0x20a2a8, Func Offset: 0x58
	// Line 594, Address: 0x20a2b0, Func Offset: 0x60
	// Line 595, Address: 0x20a2b8, Func Offset: 0x68
	// Line 597, Address: 0x20a2c0, Func Offset: 0x70
	// Line 598, Address: 0x20a2cc, Func Offset: 0x7c
	// Line 602, Address: 0x20a2e4, Func Offset: 0x94
	// Line 604, Address: 0x20a2f0, Func Offset: 0xa0
	// Func End, Address: 0x20a300, Func Offset: 0xb0
}

// 
// Start address: 0x20a300
void sfShadowReflectResultDistAlphaRefer(float ratio)
{
	unsigned long* pk;
	// Line 616, Address: 0x20a300, Func Offset: 0
	// Line 618, Address: 0x20a304, Func Offset: 0x4
	// Line 616, Address: 0x20a308, Func Offset: 0x8
	// Line 618, Address: 0x20a314, Func Offset: 0x14
	// Line 619, Address: 0x20a32c, Func Offset: 0x2c
	// Line 620, Address: 0x20a334, Func Offset: 0x34
	// Line 621, Address: 0x20a344, Func Offset: 0x44
	// Line 622, Address: 0x20a34c, Func Offset: 0x4c
	// Line 623, Address: 0x20a350, Func Offset: 0x50
	// Line 625, Address: 0x20a358, Func Offset: 0x58
	// Line 626, Address: 0x20a360, Func Offset: 0x60
	// Line 627, Address: 0x20a36c, Func Offset: 0x6c
	// Line 628, Address: 0x20a374, Func Offset: 0x74
	// Line 630, Address: 0x20a37c, Func Offset: 0x7c
	// Line 631, Address: 0x20a388, Func Offset: 0x88
	// Line 632, Address: 0x20a3a0, Func Offset: 0xa0
	// Line 633, Address: 0x20a3ac, Func Offset: 0xac
	// Func End, Address: 0x20a3c0, Func Offset: 0xc0
}

