typedef struct _anon0;
typedef struct sfFrame;
typedef struct _anon1;
typedef struct _anon2;
typedef union _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _anon9;
typedef struct _anon10;


typedef void* type_0[4];
typedef short type_1[8];
typedef unsigned short type_2[8];
typedef char type_3[16];
typedef unsigned char type_4[16];
typedef float type_5[4];
typedef float type_6[1];
typedef int type_7[1];
typedef long type_8[1];
typedef long type_9[2];
typedef unsigned long type_10[2];
typedef int type_11[4];
typedef unsigned int type_12[4];

struct _anon0
{
	_anon3 frame;
	_anon3 zbuf;
	_anon3 xyoffset;
	_anon3 scissor;
	_anon3 test;
	_anon3 clamp;
	_anon3 tex1;
};

struct sfFrame
{
	_anon1 disp;
	_anon2 draw;
	_anon7 clear;
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

struct _anon1
{
	_anon5 pmode;
	_anon8 smode2;
	_anon6 dispfb;
	_anon10 display;
	_anon9 bgcolor;
};

struct _anon2
{
	_anon4 giftag;
	_anon3 prmodecont;
	_anon3 colclamp;
	_anon3 dthe;
	_anon0 context1_env;
	_anon0 context2_env;
};

union _anon3
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

struct _anon4
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

struct _anon5
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

struct _anon6
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

struct _anon7
{
	_anon4 giftag;
	_anon3 fba;
	_anon3 test_0;
	_anon3 prim;
	_anon3 rgba;
	_anon3 xyz2_0;
	_anon3 xyz2_1;
	_anon3 test_1;
};

struct _anon8
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

struct _anon9
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

struct _anon10
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


void DrawEnvConstruct(_anon2* draw_env);
void ClearPrimConstruct(_anon7* clear_p);
void DrawEnvUpdate(_anon2* draw_env, sfFrame* fr);
void ClearPrimUpdate(_anon7* clear_p, sfFrame* fr);
void sfFrameUpdate(sfFrame* fr);
void sfFrameConstruct(sfFrame* frame);
void sfFrameSetClearColor(sfFrame* frame, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha);
void sfFrameSetDither(sfFrame* frame, int dither);
void sfFrameSetSize(sfFrame* frame, int w, int h);
int sfFrameWidth(sfFrame* frame);
int sfFrameHeight(sfFrame* frame);
void sfFrameSetPixelFormat(sfFrame* frame, int psm);
void sfFrameSetVRamAddr(sfFrame* frame, int vram_addr);
unsigned int sfFrameVRamAddr(sfFrame* frame);
void sfFrameSetZPixelFormat(sfFrame* frame, int psm);
int sfFrameZPixelFormat(sfFrame* frame);
void sfFrameSetZVRamAddr(sfFrame* frame, int zbuf_addr);
unsigned int sfFrameZVRamAddr(sfFrame* frame);
void sfFrameSetZMode(sfFrame* frame, int compare_func, int update_enable);
void sfFrameSetDrawFrame(sfFrame* frame);
int sfFrameMakeDmaRefSetDrawFrame(sfFrame* frame, <unknown fundamental type (0xa510)>* dmatag);
void sfFrameClearDrawFrame(sfFrame* frame);
void sfFrameClearDrawFrameRGBA(sfFrame* frame);
void sfFrameSetDispFrame(sfFrame* frame);

// 
// Start address: 0x13b910
void DrawEnvConstruct(_anon2* draw_env)
{
	_anon0* c1draw_env;
	_anon0* c2draw_env;
	// Line 17, Address: 0x13b910, Func Offset: 0
	// Line 22, Address: 0x13b914, Func Offset: 0x4
	// Line 17, Address: 0x13b918, Func Offset: 0x8
	// Line 22, Address: 0x13b91c, Func Offset: 0xc
	// Line 17, Address: 0x13b920, Func Offset: 0x10
	// Line 27, Address: 0x13b924, Func Offset: 0x14
	// Line 17, Address: 0x13b928, Func Offset: 0x18
	// Line 23, Address: 0x13b92c, Func Offset: 0x1c
	// Line 17, Address: 0x13b930, Func Offset: 0x20
	// Line 29, Address: 0x13b934, Func Offset: 0x24
	// Line 17, Address: 0x13b938, Func Offset: 0x28
	// Line 23, Address: 0x13b93c, Func Offset: 0x2c
	// Line 17, Address: 0x13b940, Func Offset: 0x30
	// Line 23, Address: 0x13b944, Func Offset: 0x34
	// Line 17, Address: 0x13b948, Func Offset: 0x38
	// Line 24, Address: 0x13b94c, Func Offset: 0x3c
	// Line 17, Address: 0x13b950, Func Offset: 0x40
	// Line 24, Address: 0x13b954, Func Offset: 0x44
	// Line 17, Address: 0x13b958, Func Offset: 0x48
	// Line 25, Address: 0x13b95c, Func Offset: 0x4c
	// Line 21, Address: 0x13b960, Func Offset: 0x50
	// Line 25, Address: 0x13b964, Func Offset: 0x54
	// Line 22, Address: 0x13b968, Func Offset: 0x58
	// Line 31, Address: 0x13b96c, Func Offset: 0x5c
	// Line 35, Address: 0x13b970, Func Offset: 0x60
	// Line 36, Address: 0x13b974, Func Offset: 0x64
	// Line 37, Address: 0x13b978, Func Offset: 0x68
	// Line 38, Address: 0x13b97c, Func Offset: 0x6c
	// Line 39, Address: 0x13b980, Func Offset: 0x70
	// Line 41, Address: 0x13b984, Func Offset: 0x74
	// Line 42, Address: 0x13b988, Func Offset: 0x78
	// Line 48, Address: 0x13b98c, Func Offset: 0x7c
	// Line 22, Address: 0x13b990, Func Offset: 0x80
	// Line 43, Address: 0x13b998, Func Offset: 0x88
	// Line 22, Address: 0x13b99c, Func Offset: 0x8c
	// Line 44, Address: 0x13b9a0, Func Offset: 0x90
	// Line 23, Address: 0x13b9a4, Func Offset: 0x94
	// Line 40, Address: 0x13b9a8, Func Offset: 0x98
	// Line 47, Address: 0x13b9b0, Func Offset: 0xa0
	// Line 23, Address: 0x13b9b4, Func Offset: 0xa4
	// Line 49, Address: 0x13b9bc, Func Offset: 0xac
	// Line 23, Address: 0x13b9c0, Func Offset: 0xb0
	// Line 50, Address: 0x13b9c4, Func Offset: 0xb4
	// Line 24, Address: 0x13b9c8, Func Offset: 0xb8
	// Line 25, Address: 0x13b9d8, Func Offset: 0xc8
	// Line 27, Address: 0x13b9e8, Func Offset: 0xd8
	// Line 28, Address: 0x13b9ec, Func Offset: 0xdc
	// Line 29, Address: 0x13b9f0, Func Offset: 0xe0
	// Line 30, Address: 0x13b9f4, Func Offset: 0xe4
	// Line 31, Address: 0x13b9f8, Func Offset: 0xe8
	// Line 32, Address: 0x13b9fc, Func Offset: 0xec
	// Line 35, Address: 0x13ba00, Func Offset: 0xf0
	// Line 36, Address: 0x13ba04, Func Offset: 0xf4
	// Line 37, Address: 0x13ba08, Func Offset: 0xf8
	// Line 38, Address: 0x13ba0c, Func Offset: 0xfc
	// Line 39, Address: 0x13ba10, Func Offset: 0x100
	// Line 40, Address: 0x13ba14, Func Offset: 0x104
	// Line 41, Address: 0x13ba18, Func Offset: 0x108
	// Line 42, Address: 0x13ba1c, Func Offset: 0x10c
	// Line 43, Address: 0x13ba20, Func Offset: 0x110
	// Line 44, Address: 0x13ba24, Func Offset: 0x114
	// Line 47, Address: 0x13ba28, Func Offset: 0x118
	// Line 48, Address: 0x13ba2c, Func Offset: 0x11c
	// Line 51, Address: 0x13ba30, Func Offset: 0x120
	// Line 49, Address: 0x13ba34, Func Offset: 0x124
	// Line 50, Address: 0x13ba38, Func Offset: 0x128
	// Line 51, Address: 0x13ba3c, Func Offset: 0x12c
	// Line 52, Address: 0x13ba40, Func Offset: 0x130
	// Line 53, Address: 0x13ba48, Func Offset: 0x138
	// Line 54, Address: 0x13ba4c, Func Offset: 0x13c
	// Line 55, Address: 0x13ba54, Func Offset: 0x144
	// Line 56, Address: 0x13ba58, Func Offset: 0x148
	// Line 57, Address: 0x13ba60, Func Offset: 0x150
	// Func End, Address: 0x13ba8c, Func Offset: 0x17c
}

// 
// Start address: 0x13ba90
void ClearPrimConstruct(_anon7* clear_p)
{
	// Line 61, Address: 0x13ba90, Func Offset: 0
	// Line 69, Address: 0x13ba94, Func Offset: 0x4
	// Line 62, Address: 0x13ba98, Func Offset: 0x8
	// Line 69, Address: 0x13baa4, Func Offset: 0x14
	// Line 63, Address: 0x13baa8, Func Offset: 0x18
	// Line 64, Address: 0x13bab0, Func Offset: 0x20
	// Line 65, Address: 0x13bab8, Func Offset: 0x28
	// Line 68, Address: 0x13bac0, Func Offset: 0x30
	// Line 63, Address: 0x13bac4, Func Offset: 0x34
	// Line 62, Address: 0x13bac8, Func Offset: 0x38
	// Line 70, Address: 0x13bad0, Func Offset: 0x40
	// Line 62, Address: 0x13bad4, Func Offset: 0x44
	// Line 73, Address: 0x13bad8, Func Offset: 0x48
	// Line 63, Address: 0x13badc, Func Offset: 0x4c
	// Line 75, Address: 0x13bae0, Func Offset: 0x50
	// Line 76, Address: 0x13bae8, Func Offset: 0x58
	// Line 63, Address: 0x13baec, Func Offset: 0x5c
	// Line 64, Address: 0x13baf8, Func Offset: 0x68
	// Line 65, Address: 0x13bb08, Func Offset: 0x78
	// Line 68, Address: 0x13bb18, Func Offset: 0x88
	// Line 69, Address: 0x13bb1c, Func Offset: 0x8c
	// Line 70, Address: 0x13bb20, Func Offset: 0x90
	// Line 71, Address: 0x13bb24, Func Offset: 0x94
	// Line 72, Address: 0x13bb28, Func Offset: 0x98
	// Line 73, Address: 0x13bb2c, Func Offset: 0x9c
	// Line 74, Address: 0x13bb30, Func Offset: 0xa0
	// Line 75, Address: 0x13bb34, Func Offset: 0xa4
	// Line 76, Address: 0x13bb38, Func Offset: 0xa8
	// Line 77, Address: 0x13bb3c, Func Offset: 0xac
	// Line 78, Address: 0x13bb40, Func Offset: 0xb0
	// Line 80, Address: 0x13bb44, Func Offset: 0xb4
	// Func End, Address: 0x13bb4c, Func Offset: 0xbc
}

// 
// Start address: 0x13bb50
void DrawEnvUpdate(_anon2* draw_env, sfFrame* fr)
{
	_anon0* c1draw_env;
	_anon0* c2draw_env;
	int x0;
	int y0;
	// Line 84, Address: 0x13bb50, Func Offset: 0
	// Line 91, Address: 0x13bb54, Func Offset: 0x4
	// Line 92, Address: 0x13bb64, Func Offset: 0x14
	// Line 91, Address: 0x13bb68, Func Offset: 0x18
	// Line 92, Address: 0x13bb70, Func Offset: 0x20
	// Line 94, Address: 0x13bb84, Func Offset: 0x34
	// Line 92, Address: 0x13bb88, Func Offset: 0x38
	// Line 95, Address: 0x13bb8c, Func Offset: 0x3c
	// Line 97, Address: 0x13bbd0, Func Offset: 0x80
	// Line 98, Address: 0x13bbf0, Func Offset: 0xa0
	// Line 97, Address: 0x13bbfc, Func Offset: 0xac
	// Line 98, Address: 0x13bc14, Func Offset: 0xc4
	// Line 99, Address: 0x13bc34, Func Offset: 0xe4
	// Line 102, Address: 0x13bc64, Func Offset: 0x114
	// Line 103, Address: 0x13bc6c, Func Offset: 0x11c
	// Line 104, Address: 0x13bc74, Func Offset: 0x124
	// Line 105, Address: 0x13bc7c, Func Offset: 0x12c
	// Line 106, Address: 0x13bc80, Func Offset: 0x130
	// Func End, Address: 0x13bc88, Func Offset: 0x138
}

// 
// Start address: 0x13bc90
void ClearPrimUpdate(_anon7* clear_p, sfFrame* fr)
{
	int x0;
	int y0;
	// Line 114, Address: 0x13bc90, Func Offset: 0
	// Line 115, Address: 0x13bca4, Func Offset: 0x14
	// Line 114, Address: 0x13bca8, Func Offset: 0x18
	// Line 115, Address: 0x13bcb0, Func Offset: 0x20
	// Line 118, Address: 0x13bcc4, Func Offset: 0x34
	// Line 115, Address: 0x13bcc8, Func Offset: 0x38
	// Line 118, Address: 0x13bccc, Func Offset: 0x3c
	// Line 119, Address: 0x13bcdc, Func Offset: 0x4c
	// Line 121, Address: 0x13bd00, Func Offset: 0x70
	// Line 122, Address: 0x13bd04, Func Offset: 0x74
	// Func End, Address: 0x13bd0c, Func Offset: 0x7c
}

// 
// Start address: 0x13bd10
void sfFrameUpdate(sfFrame* fr)
{
	// Line 129, Address: 0x13bd10, Func Offset: 0
	// Line 132, Address: 0x13bd20, Func Offset: 0x10
	// Line 136, Address: 0x13bd28, Func Offset: 0x18
	// Line 138, Address: 0x13bd44, Func Offset: 0x34
	// Line 140, Address: 0x13bd64, Func Offset: 0x54
	// Line 138, Address: 0x13bd6c, Func Offset: 0x5c
	// Line 140, Address: 0x13bd74, Func Offset: 0x64
	// Line 141, Address: 0x13bd7c, Func Offset: 0x6c
	// Line 143, Address: 0x13bd88, Func Offset: 0x78
	// Line 144, Address: 0x13bd94, Func Offset: 0x84
	// Func End, Address: 0x13bda4, Func Offset: 0x94
}

// 
// Start address: 0x13bdb0
void sfFrameConstruct(sfFrame* frame)
{
	// Line 151, Address: 0x13bdb0, Func Offset: 0
	// Line 152, Address: 0x13bdb4, Func Offset: 0x4
	// Line 151, Address: 0x13bdb8, Func Offset: 0x8
	// Line 152, Address: 0x13bdbc, Func Offset: 0xc
	// Line 151, Address: 0x13bdc0, Func Offset: 0x10
	// Line 152, Address: 0x13bdc4, Func Offset: 0x14
	// Line 153, Address: 0x13bdcc, Func Offset: 0x1c
	// Line 154, Address: 0x13bdd4, Func Offset: 0x24
	// Line 157, Address: 0x13bddc, Func Offset: 0x2c
	// Line 158, Address: 0x13bde0, Func Offset: 0x30
	// Line 157, Address: 0x13bde4, Func Offset: 0x34
	// Line 163, Address: 0x13bde8, Func Offset: 0x38
	// Line 158, Address: 0x13bdec, Func Offset: 0x3c
	// Line 164, Address: 0x13bdf0, Func Offset: 0x40
	// Line 159, Address: 0x13bdf4, Func Offset: 0x44
	// Line 160, Address: 0x13bdf8, Func Offset: 0x48
	// Line 161, Address: 0x13bdfc, Func Offset: 0x4c
	// Line 162, Address: 0x13be00, Func Offset: 0x50
	// Line 164, Address: 0x13be04, Func Offset: 0x54
	// Line 165, Address: 0x13be0c, Func Offset: 0x5c
	// Func End, Address: 0x13be1c, Func Offset: 0x6c
}

// 
// Start address: 0x13be20
void sfFrameSetClearColor(sfFrame* frame, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha)
{
	// Line 175, Address: 0x13be20, Func Offset: 0
	// Line 176, Address: 0x13be68, Func Offset: 0x48
	// Func End, Address: 0x13be70, Func Offset: 0x50
}

// 
// Start address: 0x13be70
void sfFrameSetDither(sfFrame* frame, int dither)
{
	// Line 185, Address: 0x13be70, Func Offset: 0
	// Line 186, Address: 0x13be8c, Func Offset: 0x1c
	// Func End, Address: 0x13be94, Func Offset: 0x24
}

// 
// Start address: 0x13bea0
void sfFrameSetSize(sfFrame* frame, int w, int h)
{
	// Line 205, Address: 0x13bea0, Func Offset: 0
	// Line 206, Address: 0x13bea8, Func Offset: 0x8
	// Line 207, Address: 0x13beac, Func Offset: 0xc
	// Func End, Address: 0x13beb4, Func Offset: 0x14
}

// 
// Start address: 0x13bec0
int sfFrameWidth(sfFrame* frame)
{
	// Line 214, Address: 0x13bec0, Func Offset: 0
	// Func End, Address: 0x13bec8, Func Offset: 0x8
}

// 
// Start address: 0x13bed0
int sfFrameHeight(sfFrame* frame)
{
	// Line 220, Address: 0x13bed0, Func Offset: 0
	// Func End, Address: 0x13bed8, Func Offset: 0x8
}

// 
// Start address: 0x13bee0
void sfFrameSetPixelFormat(sfFrame* frame, int psm)
{
	// Line 230, Address: 0x13bee0, Func Offset: 0
	// Line 231, Address: 0x13bee4, Func Offset: 0x4
	// Func End, Address: 0x13beec, Func Offset: 0xc
}

// 
// Start address: 0x13bef0
void sfFrameSetVRamAddr(sfFrame* frame, int vram_addr)
{
	// Line 241, Address: 0x13bef0, Func Offset: 0
	// Func End, Address: 0x13bef8, Func Offset: 0x8
}

// 
// Start address: 0x13bf00
unsigned int sfFrameVRamAddr(sfFrame* frame)
{
	// Line 251, Address: 0x13bf00, Func Offset: 0
	// Func End, Address: 0x13bf08, Func Offset: 0x8
}

// 
// Start address: 0x13bf10
void sfFrameSetZPixelFormat(sfFrame* frame, int psm)
{
	// Line 272, Address: 0x13bf10, Func Offset: 0
	// Func End, Address: 0x13bf18, Func Offset: 0x8
}

// 
// Start address: 0x13bf20
int sfFrameZPixelFormat(sfFrame* frame)
{
	// Line 282, Address: 0x13bf20, Func Offset: 0
	// Func End, Address: 0x13bf28, Func Offset: 0x8
}

// 
// Start address: 0x13bf30
void sfFrameSetZVRamAddr(sfFrame* frame, int zbuf_addr)
{
	// Line 291, Address: 0x13bf30, Func Offset: 0
	// Func End, Address: 0x13bf38, Func Offset: 0x8
}

// 
// Start address: 0x13bf40
unsigned int sfFrameZVRamAddr(sfFrame* frame)
{
	// Line 301, Address: 0x13bf40, Func Offset: 0
	// Func End, Address: 0x13bf48, Func Offset: 0x8
}

// 
// Start address: 0x13bf50
void sfFrameSetZMode(sfFrame* frame, int compare_func, int update_enable)
{
	_anon0* c1draw_env;
	_anon0* c2draw_env;
	// Line 321, Address: 0x13bf50, Func Offset: 0
	// Line 319, Address: 0x13bf5c, Func Offset: 0xc
	// Line 321, Address: 0x13bf60, Func Offset: 0x10
	// Line 319, Address: 0x13bf68, Func Offset: 0x18
	// Line 321, Address: 0x13bf6c, Func Offset: 0x1c
	// Line 319, Address: 0x13bf70, Func Offset: 0x20
	// Line 321, Address: 0x13bf7c, Func Offset: 0x2c
	// Line 320, Address: 0x13bf80, Func Offset: 0x30
	// Line 323, Address: 0x13bf84, Func Offset: 0x34
	// Line 320, Address: 0x13bf88, Func Offset: 0x38
	// Line 323, Address: 0x13bf94, Func Offset: 0x44
	// Line 329, Address: 0x13bf98, Func Offset: 0x48
	// Line 330, Address: 0x13bfe8, Func Offset: 0x98
	// Line 331, Address: 0x13bfec, Func Offset: 0x9c
	// Func End, Address: 0x13bff4, Func Offset: 0xa4
}

// 
// Start address: 0x13c000
void sfFrameSetDrawFrame(sfFrame* frame)
{
	// Line 352, Address: 0x13c000, Func Offset: 0
	// Line 353, Address: 0x13c010, Func Offset: 0x10
	// Line 355, Address: 0x13c018, Func Offset: 0x18
	// Line 356, Address: 0x13c020, Func Offset: 0x20
	// Line 357, Address: 0x13c038, Func Offset: 0x38
	// Func End, Address: 0x13c048, Func Offset: 0x48
}

// 
// Start address: 0x13c050
int sfFrameMakeDmaRefSetDrawFrame(sfFrame* frame, <unknown fundamental type (0xa510)>* dmatag)
{
	_anon3* qp;
	// Line 369, Address: 0x13c050, Func Offset: 0
	// Line 370, Address: 0x13c060, Func Offset: 0x10
	// Line 371, Address: 0x13c0a4, Func Offset: 0x54
	// Line 372, Address: 0x13c0a8, Func Offset: 0x58
	// Line 373, Address: 0x13c0b8, Func Offset: 0x68
	// Func End, Address: 0x13c0c0, Func Offset: 0x70
}

// 
// Start address: 0x13c0c0
void sfFrameClearDrawFrame(sfFrame* frame)
{
	// Line 384, Address: 0x13c0c0, Func Offset: 0
	// Line 386, Address: 0x13c0d0, Func Offset: 0x10
	// Line 389, Address: 0x13c0d8, Func Offset: 0x18
	// Line 390, Address: 0x13c0f0, Func Offset: 0x30
	// Line 391, Address: 0x13c0f8, Func Offset: 0x38
	// Line 392, Address: 0x13c110, Func Offset: 0x50
	// Func End, Address: 0x13c120, Func Offset: 0x60
}

// 
// Start address: 0x13c120
void sfFrameClearDrawFrameRGBA(sfFrame* frame)
{
	// Line 422, Address: 0x13c120, Func Offset: 0
	// Line 424, Address: 0x13c130, Func Offset: 0x10
	// Line 427, Address: 0x13c138, Func Offset: 0x18
	// Line 428, Address: 0x13c150, Func Offset: 0x30
	// Line 429, Address: 0x13c158, Func Offset: 0x38
	// Line 430, Address: 0x13c170, Func Offset: 0x50
	// Func End, Address: 0x13c180, Func Offset: 0x60
}

// 
// Start address: 0x13c180
void sfFrameSetDispFrame(sfFrame* frame)
{
	// Line 461, Address: 0x13c180, Func Offset: 0
	// Line 462, Address: 0x13c190, Func Offset: 0x10
	// Line 465, Address: 0x13c198, Func Offset: 0x18
	// Line 466, Address: 0x13c1a0, Func Offset: 0x20
	// Line 467, Address: 0x13c1ac, Func Offset: 0x2c
	// Line 469, Address: 0x13c1b4, Func Offset: 0x34
	// Func End, Address: 0x13c1c8, Func Offset: 0x48
}

