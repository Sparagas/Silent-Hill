typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct sfFrame;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _anon9;
typedef struct _anon10;
typedef struct _anon11;
typedef struct _anon12;
typedef union _anon13;

typedef int(*type_5)(int);

typedef int type_0[4];
typedef unsigned int type_1[4];
typedef void* type_2[4];
typedef short type_3[8];
typedef unsigned short type_4[8];
typedef char type_6[16];
typedef unsigned char type_7[16];
typedef sfFrame* type_8[2];
typedef float type_9[4];
typedef float type_10[1];
typedef int type_11[1];
typedef long type_12[1];
typedef <unknown fundamental type (0xa510)> type_13[128];
typedef unsigned long type_14[9];
typedef sfFrame type_15[2];
typedef long type_16[2];
typedef unsigned long type_17[2];

struct _anon0
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

struct _anon1
{
	_anon7 pmode;
	_anon10 smode2;
	_anon8 dispfb;
	_anon12 display;
	_anon11 bgcolor;
};

struct _anon2
{
	int callback_id;
	int frame_count;
	sfFrame* set_disp[2];
};

struct sfFrame
{
	_anon1 disp;
	_anon6 draw;
	_anon9 clear;
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

struct _anon3
{
	sfFrame frames[2];
	int current_draw_frame;
	int current_draw_buffer_fbp;
	float blur_rate;
	int contrast;
	int bright;
	int disp_x_offset;
	int disp_y_offset;
};

struct _anon4
{
	_anon13 frame;
	_anon13 zbuf;
	_anon13 xyoffset;
	_anon13 scissor;
	_anon13 test;
	_anon13 clamp;
	_anon13 tex1;
};

struct _anon5
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

struct _anon6
{
	_anon5 giftag;
	_anon13 prmodecont;
	_anon13 colclamp;
	_anon13 dthe;
	_anon4 context1_env;
	_anon4 context2_env;
};

struct _anon7
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

struct _anon8
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

struct _anon9
{
	_anon5 giftag;
	_anon13 fba;
	_anon13 test_0;
	_anon13 prim;
	_anon13 rgba;
	_anon13 xyz2_0;
	_anon13 xyz2_1;
	_anon13 test_1;
};

struct _anon10
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

struct _anon11
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

struct _anon12
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

union _anon13
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

int pause_status;
_anon2 vb_work;
int(*VSyncCallbackFunc)(int);
_anon3 scr_work;
int current_texture_buffer_fbp;
unsigned long* sg_packet_cur;
int dither_type;
unsigned long dither_matrices[9];
<unknown fundamental type (0xa510)> draw_to_disp_prim[128];
_anon0 pause_tex;

void ScrConstruct(_anon3* scr);
sfFrame* ScrFrame(_anon3* scr, int n);
sfFrame* ScrDrawFrame(_anon3* scr);
sfFrame* ScrDispFrame(_anon3* scr);
void ScrResetFrame(_anon3* scr);
void ScrChangeDrawFrameFBP(_anon3* scr, int fbp);
int ScrDrawFrameFBP(_anon3* scr);
int TexLog2(unsigned int n);
void VBlankSetDispFrame(sfFrame* even_disp, sfFrame* odd_disp);
int VSyncCallbackFunc();
void sfVSync(int n);
void VBlankInit();
void VBlankQuit();
void DefineTextureBuffer();
void InitScreenSetting();
void DefineFrameBuffer();
void SetFrameBuffer();
void SwapFrameBuffer();
void VsyncCallbackAbrogate();
void VsyncCallbackRestart();
int sfSysEnvDrawBufferWidth();
int sfSysEnvDrawBufferHeight();
float sfSysEnvPixelAspect();
unsigned int sfSysEnvDispBufferAddress();
unsigned int sfSysEnvDrawBufferAddress();
void sfSysEnvDrawBufferSetAddress(unsigned int gs_addr);
unsigned int sfSysEnvZBufferAddress();
unsigned int sfSysEnvZBufferPixelFormat();
unsigned int sfSysEnvTextureBufferAddress();
void sfSysEnvTextureBufferSetAddress(unsigned int gs_addr);
unsigned long sfSysEnvGSRegFRAME();
unsigned long sfSysEnvGSRegZBUF();
sfFrame* sfSysEnvDrawFrame();
void sfSysEnvSetClearColor(unsigned char* col);
void sfSysEnvSetPauseDraw(int pause_enable);
void sfSysEnvClearDrawBufferAlpha();
void sfSysEnvSetBlurRatio(float ratio);
void sfSysEnvSetContrast(int cont);
void sfSysEnvSetBright(int b);
void sfSysEnvSetScreenAdjust(int x, int y);
void MakeDrawToDispPrim(int draw_fbp, int disp_fbp, int bright_default);
void DrawToDisp();
void MakePauseTexture(int fbp);
void PauseTextureToDrawFrame();

// 
// Start address: 0x139d00
void ScrConstruct(_anon3* scr)
{
	int i;
	// Line 86, Address: 0x139d00, Func Offset: 0
	// Line 88, Address: 0x139d04, Func Offset: 0x4
	// Line 86, Address: 0x139d08, Func Offset: 0x8
	// Line 88, Address: 0x139d18, Func Offset: 0x18
	// Line 89, Address: 0x139d20, Func Offset: 0x20
	// Line 90, Address: 0x139d28, Func Offset: 0x28
	// Line 91, Address: 0x139d30, Func Offset: 0x30
	// Line 90, Address: 0x139d34, Func Offset: 0x34
	// Line 91, Address: 0x139d38, Func Offset: 0x38
	// Line 92, Address: 0x139d44, Func Offset: 0x44
	// Line 93, Address: 0x139d4c, Func Offset: 0x4c
	// Line 94, Address: 0x139d50, Func Offset: 0x50
	// Line 95, Address: 0x139d54, Func Offset: 0x54
	// Line 96, Address: 0x139d58, Func Offset: 0x58
	// Line 97, Address: 0x139d5c, Func Offset: 0x5c
	// Func End, Address: 0x139d74, Func Offset: 0x74
}

// 
// Start address: 0x139d80
sfFrame* ScrFrame(_anon3* scr, int n)
{
	// Line 101, Address: 0x139d80, Func Offset: 0
	// Line 102, Address: 0x139d84, Func Offset: 0x4
	// Func End, Address: 0x139d8c, Func Offset: 0xc
}

// 
// Start address: 0x139d90
sfFrame* ScrDrawFrame(_anon3* scr)
{
	// Line 106, Address: 0x139d90, Func Offset: 0
	// Line 107, Address: 0x139d98, Func Offset: 0x8
	// Func End, Address: 0x139da0, Func Offset: 0x10
}

// 
// Start address: 0x139da0
sfFrame* ScrDispFrame(_anon3* scr)
{
	// Line 111, Address: 0x139da0, Func Offset: 0
	// Line 112, Address: 0x139dac, Func Offset: 0xc
	// Func End, Address: 0x139db4, Func Offset: 0x14
}

// 
// Start address: 0x139dc0
void ScrResetFrame(_anon3* scr)
{
	// Line 128, Address: 0x139dc0, Func Offset: 0
	// Line 129, Address: 0x139dcc, Func Offset: 0xc
	// Line 130, Address: 0x139de0, Func Offset: 0x20
	// Func End, Address: 0x139df0, Func Offset: 0x30
}

// 
// Start address: 0x139df0
void ScrChangeDrawFrameFBP(_anon3* scr, int fbp)
{
	// Line 135, Address: 0x139df0, Func Offset: 0
	// Func End, Address: 0x139df8, Func Offset: 0x8
}

// 
// Start address: 0x139e00
int ScrDrawFrameFBP(_anon3* scr)
{
	// Line 140, Address: 0x139e00, Func Offset: 0
	// Func End, Address: 0x139e08, Func Offset: 0x8
}

// 
// Start address: 0x139e10
int TexLog2(unsigned int n)
{
	int x;
	// Line 212, Address: 0x139e14, Func Offset: 0x4
	// Line 215, Address: 0x139e18, Func Offset: 0x8
	// Line 216, Address: 0x139e30, Func Offset: 0x20
	// Line 217, Address: 0x139e3c, Func Offset: 0x2c
	// Line 218, Address: 0x139e44, Func Offset: 0x34
	// Line 220, Address: 0x139e48, Func Offset: 0x38
	// Line 222, Address: 0x139e80, Func Offset: 0x70
	// Line 223, Address: 0x139e8c, Func Offset: 0x7c
	// Line 225, Address: 0x139e90, Func Offset: 0x80
	// Func End, Address: 0x139e9c, Func Offset: 0x8c
}

// 
// Start address: 0x139ea0
void VBlankSetDispFrame(sfFrame* even_disp, sfFrame* odd_disp)
{
	// Line 248, Address: 0x139ea0, Func Offset: 0
	// Line 249, Address: 0x139ea8, Func Offset: 0x8
	// Line 250, Address: 0x139eac, Func Offset: 0xc
	// Func End, Address: 0x139eb4, Func Offset: 0x14
}

// 
// Start address: 0x139ec0
int VSyncCallbackFunc()
{
	int line;
	int count;
	int odd;
	// Line 260, Address: 0x139ec0, Func Offset: 0
	// Line 273, Address: 0x139ec4, Func Offset: 0x4
	// Line 268, Address: 0x139ecc, Func Offset: 0xc
	// Line 269, Address: 0x139ed0, Func Offset: 0x10
	// Line 271, Address: 0x139ed8, Func Offset: 0x18
	// Line 269, Address: 0x139ee0, Func Offset: 0x20
	// Line 271, Address: 0x139ee4, Func Offset: 0x24
	// Line 269, Address: 0x139ee8, Func Offset: 0x28
	// Line 271, Address: 0x139eec, Func Offset: 0x2c
	// Line 269, Address: 0x139ef0, Func Offset: 0x30
	// Line 271, Address: 0x139ef4, Func Offset: 0x34
	// Line 273, Address: 0x139efc, Func Offset: 0x3c
	// Line 274, Address: 0x139f08, Func Offset: 0x48
	// Line 287, Address: 0x139f10, Func Offset: 0x50
	// Line 288, Address: 0x139f24, Func Offset: 0x64
	// Line 290, Address: 0x139f2c, Func Offset: 0x6c
	// Func End, Address: 0x139f34, Func Offset: 0x74
}

// 
// Start address: 0x139f40
void sfVSync(int n)
{
	// Line 298, Address: 0x139f40, Func Offset: 0
	// Line 299, Address: 0x139f48, Func Offset: 0x8
	// Line 302, Address: 0x139f50, Func Offset: 0x10
	// Line 304, Address: 0x139f6c, Func Offset: 0x2c
	// Line 305, Address: 0x139f70, Func Offset: 0x30
	// Func End, Address: 0x139f78, Func Offset: 0x38
}

// 
// Start address: 0x139f80
void VBlankInit()
{
	// Line 310, Address: 0x139f80, Func Offset: 0
	// Line 311, Address: 0x139f84, Func Offset: 0x4
	// Line 310, Address: 0x139f88, Func Offset: 0x8
	// Line 311, Address: 0x139f8c, Func Offset: 0xc
	// Line 312, Address: 0x139f94, Func Offset: 0x14
	// Line 314, Address: 0x139f9c, Func Offset: 0x1c
	// Line 313, Address: 0x139fa0, Func Offset: 0x20
	// Line 314, Address: 0x139fa4, Func Offset: 0x24
	// Line 316, Address: 0x139fbc, Func Offset: 0x3c
	// Line 317, Address: 0x139fc8, Func Offset: 0x48
	// Func End, Address: 0x139fd4, Func Offset: 0x54
}

// 
// Start address: 0x139fe0
void VBlankQuit()
{
	// Line 322, Address: 0x139fe0, Func Offset: 0
	// Line 323, Address: 0x139fe8, Func Offset: 0x8
	// Line 324, Address: 0x139ff0, Func Offset: 0x10
	// Line 325, Address: 0x139ff8, Func Offset: 0x18
	// Line 328, Address: 0x13a008, Func Offset: 0x28
	// Line 329, Address: 0x13a010, Func Offset: 0x30
	// Func End, Address: 0x13a01c, Func Offset: 0x3c
}

// 
// Start address: 0x13a020
void DefineTextureBuffer()
{
	// Line 377, Address: 0x13a020, Func Offset: 0
	// Line 378, Address: 0x13a024, Func Offset: 0x4
	// Line 377, Address: 0x13a028, Func Offset: 0x8
	// Line 378, Address: 0x13a02c, Func Offset: 0xc
	// Line 379, Address: 0x13a034, Func Offset: 0x14
	// Line 380, Address: 0x13a040, Func Offset: 0x20
	// Line 381, Address: 0x13a04c, Func Offset: 0x2c
	// Line 382, Address: 0x13a058, Func Offset: 0x38
	// Func End, Address: 0x13a064, Func Offset: 0x44
}

// 
// Start address: 0x13a070
void InitScreenSetting()
{
	// Line 389, Address: 0x13a070, Func Offset: 0
	// Func End, Address: 0x13a07c, Func Offset: 0xc
}

// 
// Start address: 0x13a080
void DefineFrameBuffer()
{
	sfFrame* fr;
	// Line 399, Address: 0x13a080, Func Offset: 0
	// Line 404, Address: 0x13a088, Func Offset: 0x8
	// Line 405, Address: 0x13a094, Func Offset: 0x14
	// Line 408, Address: 0x13a09c, Func Offset: 0x1c
	// Line 409, Address: 0x13a0b0, Func Offset: 0x30
	// Line 410, Address: 0x13a0c0, Func Offset: 0x40
	// Line 411, Address: 0x13a0cc, Func Offset: 0x4c
	// Line 412, Address: 0x13a0d8, Func Offset: 0x58
	// Line 413, Address: 0x13a0e8, Func Offset: 0x68
	// Line 414, Address: 0x13a0f4, Func Offset: 0x74
	// Line 415, Address: 0x13a104, Func Offset: 0x84
	// Line 418, Address: 0x13a11c, Func Offset: 0x9c
	// Line 419, Address: 0x13a130, Func Offset: 0xb0
	// Line 420, Address: 0x13a140, Func Offset: 0xc0
	// Line 421, Address: 0x13a14c, Func Offset: 0xcc
	// Line 423, Address: 0x13a15c, Func Offset: 0xdc
	// Line 426, Address: 0x13a168, Func Offset: 0xe8
	// Line 427, Address: 0x13a170, Func Offset: 0xf0
	// Line 428, Address: 0x13a188, Func Offset: 0x108
	// Line 429, Address: 0x13a1a0, Func Offset: 0x120
	// Line 430, Address: 0x13a1b8, Func Offset: 0x138
	// Line 433, Address: 0x13a1d0, Func Offset: 0x150
	// Line 446, Address: 0x13a1f4, Func Offset: 0x174
	// Line 447, Address: 0x13a1fc, Func Offset: 0x17c
	// Line 449, Address: 0x13a204, Func Offset: 0x184
	// Line 456, Address: 0x13a218, Func Offset: 0x198
	// Line 457, Address: 0x13a220, Func Offset: 0x1a0
	// Func End, Address: 0x13a230, Func Offset: 0x1b0
}

// 
// Start address: 0x13a230
void SetFrameBuffer()
{
	// Line 476, Address: 0x13a230, Func Offset: 0
	// Line 478, Address: 0x13a234, Func Offset: 0x4
	// Line 476, Address: 0x13a238, Func Offset: 0x8
	// Line 478, Address: 0x13a23c, Func Offset: 0xc
	// Line 479, Address: 0x13a24c, Func Offset: 0x1c
	// Line 480, Address: 0x13a260, Func Offset: 0x30
	// Func End, Address: 0x13a26c, Func Offset: 0x3c
}

// 
// Start address: 0x13a270
void SwapFrameBuffer()
{
	int fbp;
	_anon3* scr;
	// Line 486, Address: 0x13a270, Func Offset: 0
	// Line 488, Address: 0x13a280, Func Offset: 0x10
	// Line 494, Address: 0x13a288, Func Offset: 0x18
	// Line 497, Address: 0x13a29c, Func Offset: 0x2c
	// Line 498, Address: 0x13a2b4, Func Offset: 0x44
	// Line 499, Address: 0x13a2bc, Func Offset: 0x4c
	// Line 500, Address: 0x13a2c0, Func Offset: 0x50
	// Line 501, Address: 0x13a2d4, Func Offset: 0x64
	// Line 502, Address: 0x13a2dc, Func Offset: 0x6c
	// Line 503, Address: 0x13a2e4, Func Offset: 0x74
	// Line 504, Address: 0x13a2e8, Func Offset: 0x78
	// Line 505, Address: 0x13a2f0, Func Offset: 0x80
	// Line 506, Address: 0x13a2f8, Func Offset: 0x88
	// Line 511, Address: 0x13a300, Func Offset: 0x90
	// Line 512, Address: 0x13a310, Func Offset: 0xa0
	// Line 513, Address: 0x13a320, Func Offset: 0xb0
	// Line 515, Address: 0x13a330, Func Offset: 0xc0
	// Line 518, Address: 0x13a338, Func Offset: 0xc8
	// Line 523, Address: 0x13a340, Func Offset: 0xd0
	// Line 528, Address: 0x13a350, Func Offset: 0xe0
	// Line 529, Address: 0x13a35c, Func Offset: 0xec
	// Line 530, Address: 0x13a368, Func Offset: 0xf8
	// Line 531, Address: 0x13a37c, Func Offset: 0x10c
	// Line 532, Address: 0x13a380, Func Offset: 0x110
	// Line 533, Address: 0x13a388, Func Offset: 0x118
	// Line 534, Address: 0x13a394, Func Offset: 0x124
	// Line 535, Address: 0x13a398, Func Offset: 0x128
	// Func End, Address: 0x13a3ac, Func Offset: 0x13c
}

// 
// Start address: 0x13a3b0
void VsyncCallbackAbrogate()
{
	// Line 553, Address: 0x13a3b0, Func Offset: 0
	// Func End, Address: 0x13a3b8, Func Offset: 0x8
}

// 
// Start address: 0x13a3c0
void VsyncCallbackRestart()
{
	// Line 558, Address: 0x13a3c0, Func Offset: 0
	// Line 560, Address: 0x13a3c8, Func Offset: 0x8
	// Line 561, Address: 0x13a3d0, Func Offset: 0x10
	// Line 562, Address: 0x13a3f4, Func Offset: 0x34
	// Func End, Address: 0x13a400, Func Offset: 0x40
}

// 
// Start address: 0x13a400
int sfSysEnvDrawBufferWidth()
{
	// Line 570, Address: 0x13a400, Func Offset: 0
	// Line 572, Address: 0x13a404, Func Offset: 0x4
	// Line 570, Address: 0x13a408, Func Offset: 0x8
	// Line 572, Address: 0x13a40c, Func Offset: 0xc
	// Line 573, Address: 0x13a41c, Func Offset: 0x1c
	// Func End, Address: 0x13a428, Func Offset: 0x28
}

// 
// Start address: 0x13a430
int sfSysEnvDrawBufferHeight()
{
	// Line 581, Address: 0x13a430, Func Offset: 0
	// Line 583, Address: 0x13a434, Func Offset: 0x4
	// Line 581, Address: 0x13a438, Func Offset: 0x8
	// Line 583, Address: 0x13a43c, Func Offset: 0xc
	// Line 584, Address: 0x13a44c, Func Offset: 0x1c
	// Func End, Address: 0x13a458, Func Offset: 0x28
}

// 
// Start address: 0x13a460
float sfSysEnvPixelAspect()
{
	float asp;
	// Line 592, Address: 0x13a460, Func Offset: 0
	// Line 597, Address: 0x13a468, Func Offset: 0x8
	// Line 599, Address: 0x13a490, Func Offset: 0x30
	// Line 597, Address: 0x13a494, Func Offset: 0x34
	// Line 598, Address: 0x13a4a8, Func Offset: 0x48
	// Line 597, Address: 0x13a4b0, Func Offset: 0x50
	// Line 598, Address: 0x13a4b4, Func Offset: 0x54
	// Line 599, Address: 0x13a4b8, Func Offset: 0x58
	// Line 598, Address: 0x13a4bc, Func Offset: 0x5c
	// Line 599, Address: 0x13a4c0, Func Offset: 0x60
	// Func End, Address: 0x13a4c8, Func Offset: 0x68
}

// 
// Start address: 0x13a4d0
unsigned int sfSysEnvDispBufferAddress()
{
	// Line 609, Address: 0x13a4d0, Func Offset: 0
	// Line 610, Address: 0x13a4d4, Func Offset: 0x4
	// Func End, Address: 0x13a4dc, Func Offset: 0xc
}

// 
// Start address: 0x13a4e0
unsigned int sfSysEnvDrawBufferAddress()
{
	// Line 620, Address: 0x13a4e0, Func Offset: 0
	// Func End, Address: 0x13a4ec, Func Offset: 0xc
}

// 
// Start address: 0x13a4f0
void sfSysEnvDrawBufferSetAddress(unsigned int gs_addr)
{
	// Line 637, Address: 0x13a4f4, Func Offset: 0x4
	// Func End, Address: 0x13a500, Func Offset: 0x10
}

// 
// Start address: 0x13a500
unsigned int sfSysEnvZBufferAddress()
{
	// Line 647, Address: 0x13a500, Func Offset: 0
	// Line 649, Address: 0x13a504, Func Offset: 0x4
	// Line 647, Address: 0x13a508, Func Offset: 0x8
	// Line 649, Address: 0x13a50c, Func Offset: 0xc
	// Line 650, Address: 0x13a51c, Func Offset: 0x1c
	// Func End, Address: 0x13a528, Func Offset: 0x28
}

// 
// Start address: 0x13a530
unsigned int sfSysEnvZBufferPixelFormat()
{
	// Line 658, Address: 0x13a530, Func Offset: 0
	// Line 660, Address: 0x13a534, Func Offset: 0x4
	// Line 658, Address: 0x13a538, Func Offset: 0x8
	// Line 660, Address: 0x13a53c, Func Offset: 0xc
	// Line 661, Address: 0x13a54c, Func Offset: 0x1c
	// Func End, Address: 0x13a558, Func Offset: 0x28
}

// 
// Start address: 0x13a560
unsigned int sfSysEnvTextureBufferAddress()
{
	// Line 675, Address: 0x13a560, Func Offset: 0
	// Line 677, Address: 0x13a564, Func Offset: 0x4
	// Func End, Address: 0x13a56c, Func Offset: 0xc
}

// 
// Start address: 0x13a570
void sfSysEnvTextureBufferSetAddress(unsigned int gs_addr)
{
	int bp_start;
	int size;
	// Line 691, Address: 0x13a570, Func Offset: 0
	// Line 694, Address: 0x13a574, Func Offset: 0x4
	// Line 691, Address: 0x13a578, Func Offset: 0x8
	// Line 694, Address: 0x13a57c, Func Offset: 0xc
	// Line 691, Address: 0x13a580, Func Offset: 0x10
	// Line 694, Address: 0x13a584, Func Offset: 0x14
	// Line 695, Address: 0x13a594, Func Offset: 0x24
	// Line 696, Address: 0x13a5a4, Func Offset: 0x34
	// Line 697, Address: 0x13a5ac, Func Offset: 0x3c
	// Line 698, Address: 0x13a5b4, Func Offset: 0x44
	// Line 699, Address: 0x13a5bc, Func Offset: 0x4c
	// Line 700, Address: 0x13a5c0, Func Offset: 0x50
	// Line 701, Address: 0x13a5c8, Func Offset: 0x58
	// Func End, Address: 0x13a5d8, Func Offset: 0x68
}

// 
// Start address: 0x13a5e0
unsigned long sfSysEnvGSRegFRAME()
{
	_anon4* env;
	// Line 715, Address: 0x13a5e0, Func Offset: 0
	// Line 718, Address: 0x13a5e4, Func Offset: 0x4
	// Line 715, Address: 0x13a5e8, Func Offset: 0x8
	// Line 718, Address: 0x13a5ec, Func Offset: 0xc
	// Line 720, Address: 0x13a5f4, Func Offset: 0x14
	// Line 719, Address: 0x13a5f8, Func Offset: 0x18
	// Line 720, Address: 0x13a5fc, Func Offset: 0x1c
	// Func End, Address: 0x13a604, Func Offset: 0x24
}

// 
// Start address: 0x13a610
unsigned long sfSysEnvGSRegZBUF()
{
	_anon4* env;
	// Line 733, Address: 0x13a610, Func Offset: 0
	// Line 736, Address: 0x13a614, Func Offset: 0x4
	// Line 733, Address: 0x13a618, Func Offset: 0x8
	// Line 736, Address: 0x13a61c, Func Offset: 0xc
	// Line 738, Address: 0x13a624, Func Offset: 0x14
	// Line 737, Address: 0x13a628, Func Offset: 0x18
	// Line 738, Address: 0x13a62c, Func Offset: 0x1c
	// Func End, Address: 0x13a634, Func Offset: 0x24
}

// 
// Start address: 0x13a640
sfFrame* sfSysEnvDrawFrame()
{
	// Line 748, Address: 0x13a640, Func Offset: 0
	// Func End, Address: 0x13a64c, Func Offset: 0xc
}

// 
// Start address: 0x13a650
void sfSysEnvSetClearColor(unsigned char* col)
{
	sfFrame* fr;
	// Line 754, Address: 0x13a654, Func Offset: 0x4
	// Line 757, Address: 0x13a658, Func Offset: 0x8
	// Line 754, Address: 0x13a65c, Func Offset: 0xc
	// Line 757, Address: 0x13a660, Func Offset: 0x10
	// Line 758, Address: 0x13a668, Func Offset: 0x18
	// Line 759, Address: 0x13a680, Func Offset: 0x30
	// Func End, Address: 0x13a68c, Func Offset: 0x3c
}

// 
// Start address: 0x13a690
void sfSysEnvSetPauseDraw(int pause_enable)
{
	// Line 771, Address: 0x13a690, Func Offset: 0
	// Line 772, Address: 0x13a698, Func Offset: 0x8
	// Line 774, Address: 0x13a6b0, Func Offset: 0x20
	// Line 775, Address: 0x13a6b8, Func Offset: 0x28
	// Func End, Address: 0x13a6c0, Func Offset: 0x30
}

// 
// Start address: 0x13a6c0
void sfSysEnvClearDrawBufferAlpha()
{
	unsigned long* pk;
	int x;
	int x0;
	int y0;
	int screen_w;
	int h;
	unsigned long frame;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	// Line 780, Address: 0x13a6c0, Func Offset: 0
	// Line 789, Address: 0x13a6e8, Func Offset: 0x28
	// Line 790, Address: 0x13a6f0, Func Offset: 0x30
	// Line 791, Address: 0x13a6fc, Func Offset: 0x3c
	// Line 792, Address: 0x13a710, Func Offset: 0x50
	// Line 791, Address: 0x13a714, Func Offset: 0x54
	// Line 792, Address: 0x13a718, Func Offset: 0x58
	// Line 793, Address: 0x13a730, Func Offset: 0x70
	// Line 795, Address: 0x13a73c, Func Offset: 0x7c
	// Line 796, Address: 0x13a754, Func Offset: 0x94
	// Line 797, Address: 0x13a75c, Func Offset: 0x9c
	// Line 798, Address: 0x13a764, Func Offset: 0xa4
	// Line 799, Address: 0x13a770, Func Offset: 0xb0
	// Line 800, Address: 0x13a78c, Func Offset: 0xcc
	// Line 801, Address: 0x13a790, Func Offset: 0xd0
	// Line 802, Address: 0x13a79c, Func Offset: 0xdc
	// Line 803, Address: 0x13a7a0, Func Offset: 0xe0
	// Line 804, Address: 0x13a7a4, Func Offset: 0xe4
	// Line 799, Address: 0x13a7a8, Func Offset: 0xe8
	// Line 800, Address: 0x13a7b8, Func Offset: 0xf8
	// Line 799, Address: 0x13a7bc, Func Offset: 0xfc
	// Line 800, Address: 0x13a7c0, Func Offset: 0x100
	// Line 801, Address: 0x13a7d4, Func Offset: 0x114
	// Line 800, Address: 0x13a7d8, Func Offset: 0x118
	// Line 801, Address: 0x13a7dc, Func Offset: 0x11c
	// Line 802, Address: 0x13a7f0, Func Offset: 0x130
	// Line 801, Address: 0x13a7f4, Func Offset: 0x134
	// Line 802, Address: 0x13a7f8, Func Offset: 0x138
	// Line 803, Address: 0x13a80c, Func Offset: 0x14c
	// Line 802, Address: 0x13a810, Func Offset: 0x150
	// Line 803, Address: 0x13a814, Func Offset: 0x154
	// Line 804, Address: 0x13a828, Func Offset: 0x168
	// Line 805, Address: 0x13a86c, Func Offset: 0x1ac
	// Line 806, Address: 0x13a878, Func Offset: 0x1b8
	// Line 805, Address: 0x13a880, Func Offset: 0x1c0
	// Line 806, Address: 0x13a884, Func Offset: 0x1c4
	// Line 805, Address: 0x13a888, Func Offset: 0x1c8
	// Line 806, Address: 0x13a88c, Func Offset: 0x1cc
	// Line 805, Address: 0x13a894, Func Offset: 0x1d4
	// Line 806, Address: 0x13a898, Func Offset: 0x1d8
	// Line 805, Address: 0x13a8a0, Func Offset: 0x1e0
	// Line 806, Address: 0x13a8b4, Func Offset: 0x1f4
	// Line 805, Address: 0x13a8b8, Func Offset: 0x1f8
	// Line 806, Address: 0x13a8bc, Func Offset: 0x1fc
	// Line 805, Address: 0x13a8c8, Func Offset: 0x208
	// Line 806, Address: 0x13a8cc, Func Offset: 0x20c
	// Line 805, Address: 0x13a8d0, Func Offset: 0x210
	// Line 806, Address: 0x13a8d4, Func Offset: 0x214
	// Line 805, Address: 0x13a8d8, Func Offset: 0x218
	// Line 806, Address: 0x13a8dc, Func Offset: 0x21c
	// Line 805, Address: 0x13a8fc, Func Offset: 0x23c
	// Line 806, Address: 0x13a900, Func Offset: 0x240
	// Line 805, Address: 0x13a904, Func Offset: 0x244
	// Line 806, Address: 0x13a908, Func Offset: 0x248
	// Line 805, Address: 0x13a95c, Func Offset: 0x29c
	// Line 806, Address: 0x13a960, Func Offset: 0x2a0
	// Line 805, Address: 0x13a964, Func Offset: 0x2a4
	// Line 806, Address: 0x13a968, Func Offset: 0x2a8
	// Line 805, Address: 0x13a978, Func Offset: 0x2b8
	// Line 806, Address: 0x13a97c, Func Offset: 0x2bc
	// Line 805, Address: 0x13a980, Func Offset: 0x2c0
	// Line 806, Address: 0x13a984, Func Offset: 0x2c4
	// Line 805, Address: 0x13a9a0, Func Offset: 0x2e0
	// Line 806, Address: 0x13a9a4, Func Offset: 0x2e4
	// Line 805, Address: 0x13a9a8, Func Offset: 0x2e8
	// Line 806, Address: 0x13a9ac, Func Offset: 0x2ec
	// Line 805, Address: 0x13a9bc, Func Offset: 0x2fc
	// Line 806, Address: 0x13a9c0, Func Offset: 0x300
	// Line 805, Address: 0x13a9c4, Func Offset: 0x304
	// Line 806, Address: 0x13a9c8, Func Offset: 0x308
	// Line 805, Address: 0x13abc0, Func Offset: 0x500
	// Line 804, Address: 0x13abc4, Func Offset: 0x504
	// Line 806, Address: 0x13abc8, Func Offset: 0x508
	// Line 805, Address: 0x13abd0, Func Offset: 0x510
	// Line 806, Address: 0x13abd4, Func Offset: 0x514
	// Line 805, Address: 0x13abd8, Func Offset: 0x518
	// Line 806, Address: 0x13abdc, Func Offset: 0x51c
	// Line 807, Address: 0x13abe8, Func Offset: 0x528
	// Line 806, Address: 0x13abec, Func Offset: 0x52c
	// Line 807, Address: 0x13ac14, Func Offset: 0x554
	// Line 806, Address: 0x13ac18, Func Offset: 0x558
	// Line 807, Address: 0x13ac2c, Func Offset: 0x56c
	// Line 808, Address: 0x13ac38, Func Offset: 0x578
	// Line 809, Address: 0x13ac54, Func Offset: 0x594
	// Line 811, Address: 0x13ac5c, Func Offset: 0x59c
	// Line 812, Address: 0x13ac64, Func Offset: 0x5a4
	// Line 813, Address: 0x13ac7c, Func Offset: 0x5bc
	// Line 814, Address: 0x13ac94, Func Offset: 0x5d4
	// Func End, Address: 0x13acc4, Func Offset: 0x604
}

// 
// Start address: 0x13acd0
void sfSysEnvSetBlurRatio(float ratio)
{
	// Line 825, Address: 0x13acd0, Func Offset: 0
	// Line 826, Address: 0x13acd4, Func Offset: 0x4
	// Func End, Address: 0x13acdc, Func Offset: 0xc
}

// 
// Start address: 0x13ace0
void sfSysEnvSetContrast(int cont)
{
	_anon3* scr;
	// Line 835, Address: 0x13ace0, Func Offset: 0
	// Line 837, Address: 0x13ace4, Func Offset: 0x4
	// Line 835, Address: 0x13ace8, Func Offset: 0x8
	// Line 836, Address: 0x13acec, Func Offset: 0xc
	// Line 837, Address: 0x13acf0, Func Offset: 0x10
	// Line 838, Address: 0x13ad08, Func Offset: 0x28
	// Func End, Address: 0x13ad10, Func Offset: 0x30
}

// 
// Start address: 0x13ad10
void sfSysEnvSetBright(int b)
{
	_anon3* scr;
	// Line 855, Address: 0x13ad10, Func Offset: 0
	// Line 857, Address: 0x13ad14, Func Offset: 0x4
	// Line 855, Address: 0x13ad18, Func Offset: 0x8
	// Line 856, Address: 0x13ad1c, Func Offset: 0xc
	// Line 857, Address: 0x13ad20, Func Offset: 0x10
	// Line 858, Address: 0x13ad38, Func Offset: 0x28
	// Func End, Address: 0x13ad40, Func Offset: 0x30
}

// 
// Start address: 0x13ad40
void sfSysEnvSetScreenAdjust(int x, int y)
{
	sfFrame* fr;
	// Line 871, Address: 0x13ad40, Func Offset: 0
	// Line 875, Address: 0x13ad4c, Func Offset: 0xc
	// Line 878, Address: 0x13ad54, Func Offset: 0x14
	// Line 874, Address: 0x13ad58, Func Offset: 0x18
	// Line 878, Address: 0x13ad5c, Func Offset: 0x1c
	// Line 879, Address: 0x13ad68, Func Offset: 0x28
	// Line 880, Address: 0x13ad6c, Func Offset: 0x2c
	// Line 879, Address: 0x13ad70, Func Offset: 0x30
	// Line 880, Address: 0x13ad74, Func Offset: 0x34
	// Line 879, Address: 0x13ad78, Func Offset: 0x38
	// Line 880, Address: 0x13ad7c, Func Offset: 0x3c
	// Line 878, Address: 0x13ad80, Func Offset: 0x40
	// Line 879, Address: 0x13ad90, Func Offset: 0x50
	// Line 880, Address: 0x13ad98, Func Offset: 0x58
	// Line 879, Address: 0x13ada0, Func Offset: 0x60
	// Line 880, Address: 0x13adac, Func Offset: 0x6c
	// Line 881, Address: 0x13adbc, Func Offset: 0x7c
	// Func End, Address: 0x13adc8, Func Offset: 0x88
}

// 
// Start address: 0x13add0
void MakeDrawToDispPrim(int draw_fbp, int disp_fbp, int bright_default)
{
	unsigned int blur_a;
	int cont;
	int bright;
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
	// Line 930, Address: 0x13add0, Func Offset: 0
	// Line 943, Address: 0x13add4, Func Offset: 0x4
	// Line 930, Address: 0x13add8, Func Offset: 0x8
	// Line 943, Address: 0x13addc, Func Offset: 0xc
	// Line 930, Address: 0x13ade0, Func Offset: 0x10
	// Line 943, Address: 0x13ade4, Func Offset: 0x14
	// Line 930, Address: 0x13ade8, Func Offset: 0x18
	// Line 943, Address: 0x13adec, Func Offset: 0x1c
	// Line 930, Address: 0x13adf0, Func Offset: 0x20
	// Line 943, Address: 0x13adf4, Func Offset: 0x24
	// Line 930, Address: 0x13adf8, Func Offset: 0x28
	// Line 943, Address: 0x13ae04, Func Offset: 0x34
	// Line 944, Address: 0x13ae50, Func Offset: 0x80
	// Line 945, Address: 0x13ae58, Func Offset: 0x88
	// Line 947, Address: 0x13ae5c, Func Offset: 0x8c
	// Line 948, Address: 0x13ae64, Func Offset: 0x94
	// Line 949, Address: 0x13ae68, Func Offset: 0x98
	// Line 950, Address: 0x13ae6c, Func Offset: 0x9c
	// Line 952, Address: 0x13ae70, Func Offset: 0xa0
	// Line 953, Address: 0x13ae8c, Func Offset: 0xbc
	// Line 954, Address: 0x13ae94, Func Offset: 0xc4
	// Line 956, Address: 0x13aea4, Func Offset: 0xd4
	// Line 957, Address: 0x13aeac, Func Offset: 0xdc
	// Line 958, Address: 0x13aeb8, Func Offset: 0xe8
	// Line 960, Address: 0x13aecc, Func Offset: 0xfc
	// Line 958, Address: 0x13aed0, Func Offset: 0x100
	// Line 960, Address: 0x13aee0, Func Offset: 0x110
	// Line 958, Address: 0x13aee4, Func Offset: 0x114
	// Line 960, Address: 0x13aee8, Func Offset: 0x118
	// Line 961, Address: 0x13af08, Func Offset: 0x138
	// Line 960, Address: 0x13af0c, Func Offset: 0x13c
	// Line 961, Address: 0x13af24, Func Offset: 0x154
	// Line 963, Address: 0x13af40, Func Offset: 0x170
	// Line 961, Address: 0x13af4c, Func Offset: 0x17c
	// Line 963, Address: 0x13af58, Func Offset: 0x188
	// Line 961, Address: 0x13af5c, Func Offset: 0x18c
	// Line 963, Address: 0x13af60, Func Offset: 0x190
	// Line 961, Address: 0x13af64, Func Offset: 0x194
	// Line 963, Address: 0x13af68, Func Offset: 0x198
	// Line 964, Address: 0x13af70, Func Offset: 0x1a0
	// Line 963, Address: 0x13af74, Func Offset: 0x1a4
	// Line 964, Address: 0x13af84, Func Offset: 0x1b4
	// Line 963, Address: 0x13af88, Func Offset: 0x1b8
	// Line 964, Address: 0x13af8c, Func Offset: 0x1bc
	// Line 966, Address: 0x13afa0, Func Offset: 0x1d0
	// Line 970, Address: 0x13afac, Func Offset: 0x1dc
	// Line 968, Address: 0x13afb0, Func Offset: 0x1e0
	// Line 969, Address: 0x13afbc, Func Offset: 0x1ec
	// Line 970, Address: 0x13afc8, Func Offset: 0x1f8
	// Line 969, Address: 0x13afcc, Func Offset: 0x1fc
	// Line 970, Address: 0x13afd8, Func Offset: 0x208
	// Line 968, Address: 0x13afe0, Func Offset: 0x210
	// Line 970, Address: 0x13afe4, Func Offset: 0x214
	// Line 968, Address: 0x13aff4, Func Offset: 0x224
	// Line 973, Address: 0x13b000, Func Offset: 0x230
	// Line 968, Address: 0x13b004, Func Offset: 0x234
	// Line 969, Address: 0x13b008, Func Offset: 0x238
	// Line 973, Address: 0x13b010, Func Offset: 0x240
	// Line 976, Address: 0x13b014, Func Offset: 0x244
	// Line 973, Address: 0x13b018, Func Offset: 0x248
	// Line 976, Address: 0x13b01c, Func Offset: 0x24c
	// Line 969, Address: 0x13b024, Func Offset: 0x254
	// Line 970, Address: 0x13b034, Func Offset: 0x264
	// Line 969, Address: 0x13b038, Func Offset: 0x268
	// Line 970, Address: 0x13b03c, Func Offset: 0x26c
	// Line 973, Address: 0x13b050, Func Offset: 0x280
	// Line 970, Address: 0x13b054, Func Offset: 0x284
	// Line 973, Address: 0x13b058, Func Offset: 0x288
	// Line 976, Address: 0x13b06c, Func Offset: 0x29c
	// Line 973, Address: 0x13b070, Func Offset: 0x2a0
	// Line 976, Address: 0x13b074, Func Offset: 0x2a4
	// Line 977, Address: 0x13b088, Func Offset: 0x2b8
	// Line 978, Address: 0x13b090, Func Offset: 0x2c0
	// Line 980, Address: 0x13b09c, Func Offset: 0x2cc
	// Line 979, Address: 0x13b0a0, Func Offset: 0x2d0
	// Line 981, Address: 0x13b0a4, Func Offset: 0x2d4
	// Line 980, Address: 0x13b0b0, Func Offset: 0x2e0
	// Line 981, Address: 0x13b0b8, Func Offset: 0x2e8
	// Line 982, Address: 0x13b0bc, Func Offset: 0x2ec
	// Line 981, Address: 0x13b0c4, Func Offset: 0x2f4
	// Line 982, Address: 0x13b0c8, Func Offset: 0x2f8
	// Line 980, Address: 0x13b0dc, Func Offset: 0x30c
	// Line 981, Address: 0x13b0ec, Func Offset: 0x31c
	// Line 980, Address: 0x13b0f0, Func Offset: 0x320
	// Line 985, Address: 0x13b0f4, Func Offset: 0x324
	// Line 981, Address: 0x13b0f8, Func Offset: 0x328
	// Line 988, Address: 0x13b0fc, Func Offset: 0x32c
	// Line 985, Address: 0x13b104, Func Offset: 0x334
	// Line 988, Address: 0x13b10c, Func Offset: 0x33c
	// Line 981, Address: 0x13b110, Func Offset: 0x340
	// Line 982, Address: 0x13b120, Func Offset: 0x350
	// Line 981, Address: 0x13b124, Func Offset: 0x354
	// Line 982, Address: 0x13b128, Func Offset: 0x358
	// Line 985, Address: 0x13b13c, Func Offset: 0x36c
	// Line 982, Address: 0x13b140, Func Offset: 0x370
	// Line 985, Address: 0x13b144, Func Offset: 0x374
	// Line 988, Address: 0x13b158, Func Offset: 0x388
	// Line 985, Address: 0x13b15c, Func Offset: 0x38c
	// Line 988, Address: 0x13b160, Func Offset: 0x390
	// Line 990, Address: 0x13b178, Func Offset: 0x3a8
	// Line 992, Address: 0x13b184, Func Offset: 0x3b4
	// Line 990, Address: 0x13b188, Func Offset: 0x3b8
	// Line 992, Address: 0x13b198, Func Offset: 0x3c8
	// Line 990, Address: 0x13b19c, Func Offset: 0x3cc
	// Line 992, Address: 0x13b1a0, Func Offset: 0x3d0
	// Line 993, Address: 0x13b1c0, Func Offset: 0x3f0
	// Line 992, Address: 0x13b1c4, Func Offset: 0x3f4
	// Line 993, Address: 0x13b1d0, Func Offset: 0x400
	// Line 992, Address: 0x13b1d4, Func Offset: 0x404
	// Line 993, Address: 0x13b1e0, Func Offset: 0x410
	// Line 995, Address: 0x13b1f8, Func Offset: 0x428
	// Line 993, Address: 0x13b208, Func Offset: 0x438
	// Line 995, Address: 0x13b214, Func Offset: 0x444
	// Line 993, Address: 0x13b218, Func Offset: 0x448
	// Line 996, Address: 0x13b21c, Func Offset: 0x44c
	// Line 993, Address: 0x13b220, Func Offset: 0x450
	// Line 995, Address: 0x13b224, Func Offset: 0x454
	// Line 998, Address: 0x13b22c, Func Offset: 0x45c
	// Line 996, Address: 0x13b230, Func Offset: 0x460
	// Line 997, Address: 0x13b240, Func Offset: 0x470
	// Line 998, Address: 0x13b244, Func Offset: 0x474
	// Line 1003, Address: 0x13b24c, Func Offset: 0x47c
	// Line 995, Address: 0x13b250, Func Offset: 0x480
	// Line 996, Address: 0x13b260, Func Offset: 0x490
	// Line 995, Address: 0x13b264, Func Offset: 0x494
	// Line 996, Address: 0x13b268, Func Offset: 0x498
	// Line 997, Address: 0x13b27c, Func Offset: 0x4ac
	// Line 996, Address: 0x13b280, Func Offset: 0x4b0
	// Line 997, Address: 0x13b284, Func Offset: 0x4b4
	// Line 998, Address: 0x13b298, Func Offset: 0x4c8
	// Line 997, Address: 0x13b29c, Func Offset: 0x4cc
	// Line 998, Address: 0x13b2a0, Func Offset: 0x4d0
	// Line 1003, Address: 0x13b2c4, Func Offset: 0x4f4
	// Line 998, Address: 0x13b2c8, Func Offset: 0x4f8
	// Line 1003, Address: 0x13b2d0, Func Offset: 0x500
	// Line 1004, Address: 0x13b328, Func Offset: 0x558
	// Line 1003, Address: 0x13b32c, Func Offset: 0x55c
	// Line 1004, Address: 0x13b330, Func Offset: 0x560
	// Line 1011, Address: 0x13b334, Func Offset: 0x564
	// Line 1003, Address: 0x13b338, Func Offset: 0x568
	// Line 1011, Address: 0x13b33c, Func Offset: 0x56c
	// Line 1003, Address: 0x13b340, Func Offset: 0x570
	// Line 1011, Address: 0x13b344, Func Offset: 0x574
	// Line 1008, Address: 0x13b348, Func Offset: 0x578
	// Line 1003, Address: 0x13b34c, Func Offset: 0x57c
	// Line 1008, Address: 0x13b350, Func Offset: 0x580
	// Line 1003, Address: 0x13b354, Func Offset: 0x584
	// Line 1004, Address: 0x13b358, Func Offset: 0x588
	// Line 1005, Address: 0x13b364, Func Offset: 0x594
	// Line 1006, Address: 0x13b368, Func Offset: 0x598
	// Line 1007, Address: 0x13b36c, Func Offset: 0x59c
	// Line 1008, Address: 0x13b374, Func Offset: 0x5a4
	// Line 1010, Address: 0x13b378, Func Offset: 0x5a8
	// Line 1008, Address: 0x13b380, Func Offset: 0x5b0
	// Line 1010, Address: 0x13b384, Func Offset: 0x5b4
	// Line 1011, Address: 0x13b388, Func Offset: 0x5b8
	// Line 1004, Address: 0x13b38c, Func Offset: 0x5bc
	// Line 1010, Address: 0x13b398, Func Offset: 0x5c8
	// Line 1004, Address: 0x13b39c, Func Offset: 0x5cc
	// Line 1010, Address: 0x13b3a0, Func Offset: 0x5d0
	// Line 1004, Address: 0x13b3a4, Func Offset: 0x5d4
	// Line 1005, Address: 0x13b3a8, Func Offset: 0x5d8
	// Line 1011, Address: 0x13b3b0, Func Offset: 0x5e0
	// Line 1012, Address: 0x13b3bc, Func Offset: 0x5ec
	// Line 1011, Address: 0x13b3c0, Func Offset: 0x5f0
	// Line 1012, Address: 0x13b3c4, Func Offset: 0x5f4
	// Line 1011, Address: 0x13b3c8, Func Offset: 0x5f8
	// Line 1015, Address: 0x13b3cc, Func Offset: 0x5fc
	// Line 1010, Address: 0x13b3d0, Func Offset: 0x600
	// Line 1015, Address: 0x13b3d4, Func Offset: 0x604
	// Line 1012, Address: 0x13b3d8, Func Offset: 0x608
	// Line 1005, Address: 0x13b3dc, Func Offset: 0x60c
	// Line 1015, Address: 0x13b3e8, Func Offset: 0x618
	// Line 1005, Address: 0x13b3ec, Func Offset: 0x61c
	// Line 1016, Address: 0x13b3f0, Func Offset: 0x620
	// Line 1005, Address: 0x13b3f4, Func Offset: 0x624
	// Line 1006, Address: 0x13b3f8, Func Offset: 0x628
	// Line 1019, Address: 0x13b400, Func Offset: 0x630
	// Line 1016, Address: 0x13b408, Func Offset: 0x638
	// Line 1019, Address: 0x13b40c, Func Offset: 0x63c
	// Line 1006, Address: 0x13b410, Func Offset: 0x640
	// Line 1007, Address: 0x13b420, Func Offset: 0x650
	// Line 1006, Address: 0x13b424, Func Offset: 0x654
	// Line 1007, Address: 0x13b428, Func Offset: 0x658
	// Line 1008, Address: 0x13b43c, Func Offset: 0x66c
	// Line 1007, Address: 0x13b440, Func Offset: 0x670
	// Line 1008, Address: 0x13b444, Func Offset: 0x674
	// Line 1010, Address: 0x13b458, Func Offset: 0x688
	// Line 1008, Address: 0x13b45c, Func Offset: 0x68c
	// Line 1010, Address: 0x13b460, Func Offset: 0x690
	// Line 1011, Address: 0x13b474, Func Offset: 0x6a4
	// Line 1010, Address: 0x13b478, Func Offset: 0x6a8
	// Line 1011, Address: 0x13b47c, Func Offset: 0x6ac
	// Line 1012, Address: 0x13b490, Func Offset: 0x6c0
	// Line 1011, Address: 0x13b494, Func Offset: 0x6c4
	// Line 1012, Address: 0x13b498, Func Offset: 0x6c8
	// Line 1015, Address: 0x13b4ac, Func Offset: 0x6dc
	// Line 1012, Address: 0x13b4b0, Func Offset: 0x6e0
	// Line 1015, Address: 0x13b4b4, Func Offset: 0x6e4
	// Line 1016, Address: 0x13b4c8, Func Offset: 0x6f8
	// Line 1015, Address: 0x13b4cc, Func Offset: 0x6fc
	// Line 1016, Address: 0x13b4d0, Func Offset: 0x700
	// Line 1019, Address: 0x13b4e4, Func Offset: 0x714
	// Line 1016, Address: 0x13b4e8, Func Offset: 0x718
	// Line 1019, Address: 0x13b4ec, Func Offset: 0x71c
	// Line 1020, Address: 0x13b500, Func Offset: 0x730
	// Line 1022, Address: 0x13b508, Func Offset: 0x738
	// Line 1023, Address: 0x13b510, Func Offset: 0x740
	// Line 1025, Address: 0x13b518, Func Offset: 0x748
	// Line 1026, Address: 0x13b520, Func Offset: 0x750
	// Line 1027, Address: 0x13b528, Func Offset: 0x758
	// Func End, Address: 0x13b548, Func Offset: 0x778
}

// 
// Start address: 0x13b550
void DrawToDisp()
{
	// Line 1032, Address: 0x13b550, Func Offset: 0
	// Func End, Address: 0x13b560, Func Offset: 0x10
}

// 
// Start address: 0x13b560
void MakePauseTexture(int fbp)
{
	int w;
	int h;
	// Line 1040, Address: 0x13b560, Func Offset: 0
	// Line 1044, Address: 0x13b574, Func Offset: 0x14
	// Line 1045, Address: 0x13b57c, Func Offset: 0x1c
	// Line 1048, Address: 0x13b584, Func Offset: 0x24
	// Line 1051, Address: 0x13b58c, Func Offset: 0x2c
	// Line 1053, Address: 0x13b5a8, Func Offset: 0x48
	// Line 1054, Address: 0x13b5b0, Func Offset: 0x50
	// Line 1055, Address: 0x13b5c0, Func Offset: 0x60
	// Line 1056, Address: 0x13b5c8, Func Offset: 0x68
	// Line 1087, Address: 0x13b5d0, Func Offset: 0x70
	// Func End, Address: 0x13b5e8, Func Offset: 0x88
}

// 
// Start address: 0x13b5f0
void PauseTextureToDrawFrame()
{
	int w;
	int h;
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
	// Line 1091, Address: 0x13b5f0, Func Offset: 0
	// Line 1092, Address: 0x13b604, Func Offset: 0x14
	// Line 1093, Address: 0x13b60c, Func Offset: 0x1c
	// Line 1103, Address: 0x13b618, Func Offset: 0x28
	// Line 1104, Address: 0x13b630, Func Offset: 0x40
	// Line 1105, Address: 0x13b638, Func Offset: 0x48
	// Line 1106, Address: 0x13b640, Func Offset: 0x50
	// Line 1107, Address: 0x13b64c, Func Offset: 0x5c
	// Line 1109, Address: 0x13b650, Func Offset: 0x60
	// Line 1107, Address: 0x13b654, Func Offset: 0x64
	// Line 1108, Address: 0x13b65c, Func Offset: 0x6c
	// Line 1109, Address: 0x13b660, Func Offset: 0x70
	// Line 1107, Address: 0x13b66c, Func Offset: 0x7c
	// Line 1108, Address: 0x13b67c, Func Offset: 0x8c
	// Line 1107, Address: 0x13b680, Func Offset: 0x90
	// Line 1108, Address: 0x13b684, Func Offset: 0x94
	// Line 1109, Address: 0x13b698, Func Offset: 0xa8
	// Line 1108, Address: 0x13b69c, Func Offset: 0xac
	// Line 1109, Address: 0x13b6a0, Func Offset: 0xb0
	// Line 1110, Address: 0x13b6b8, Func Offset: 0xc8
	// Line 1109, Address: 0x13b6bc, Func Offset: 0xcc
	// Line 1110, Address: 0x13b6c0, Func Offset: 0xd0
	// Line 1109, Address: 0x13b6c4, Func Offset: 0xd4
	// Line 1111, Address: 0x13b6c8, Func Offset: 0xd8
	// Line 1112, Address: 0x13b6cc, Func Offset: 0xdc
	// Line 1110, Address: 0x13b6d0, Func Offset: 0xe0
	// Line 1112, Address: 0x13b6d4, Func Offset: 0xe4
	// Line 1111, Address: 0x13b6d8, Func Offset: 0xe8
	// Line 1112, Address: 0x13b6dc, Func Offset: 0xec
	// Line 1110, Address: 0x13b700, Func Offset: 0x110
	// Line 1113, Address: 0x13b708, Func Offset: 0x118
	// Line 1110, Address: 0x13b70c, Func Offset: 0x11c
	// Line 1113, Address: 0x13b710, Func Offset: 0x120
	// Line 1110, Address: 0x13b714, Func Offset: 0x124
	// Line 1114, Address: 0x13b718, Func Offset: 0x128
	// Line 1110, Address: 0x13b71c, Func Offset: 0x12c
	// Line 1111, Address: 0x13b720, Func Offset: 0x130
	// Line 1114, Address: 0x13b728, Func Offset: 0x138
	// Line 1113, Address: 0x13b730, Func Offset: 0x140
	// Line 1114, Address: 0x13b734, Func Offset: 0x144
	// Line 1116, Address: 0x13b738, Func Offset: 0x148
	// Line 1111, Address: 0x13b740, Func Offset: 0x150
	// Line 1112, Address: 0x13b750, Func Offset: 0x160
	// Line 1111, Address: 0x13b754, Func Offset: 0x164
	// Line 1112, Address: 0x13b758, Func Offset: 0x168
	// Line 1113, Address: 0x13b76c, Func Offset: 0x17c
	// Line 1112, Address: 0x13b770, Func Offset: 0x180
	// Line 1113, Address: 0x13b774, Func Offset: 0x184
	// Line 1114, Address: 0x13b788, Func Offset: 0x198
	// Line 1113, Address: 0x13b78c, Func Offset: 0x19c
	// Line 1114, Address: 0x13b790, Func Offset: 0x1a0
	// Line 1116, Address: 0x13b7a4, Func Offset: 0x1b4
	// Line 1114, Address: 0x13b7a8, Func Offset: 0x1b8
	// Line 1116, Address: 0x13b7ac, Func Offset: 0x1bc
	// Line 1117, Address: 0x13b7c0, Func Offset: 0x1d0
	// Line 1116, Address: 0x13b7c4, Func Offset: 0x1d4
	// Line 1117, Address: 0x13b7c8, Func Offset: 0x1d8
	// Line 1118, Address: 0x13b7f4, Func Offset: 0x204
	// Line 1117, Address: 0x13b800, Func Offset: 0x210
	// Line 1118, Address: 0x13b804, Func Offset: 0x214
	// Line 1117, Address: 0x13b80c, Func Offset: 0x21c
	// Line 1119, Address: 0x13b814, Func Offset: 0x224
	// Line 1117, Address: 0x13b818, Func Offset: 0x228
	// Line 1119, Address: 0x13b81c, Func Offset: 0x22c
	// Line 1117, Address: 0x13b820, Func Offset: 0x230
	// Line 1119, Address: 0x13b824, Func Offset: 0x234
	// Line 1117, Address: 0x13b828, Func Offset: 0x238
	// Line 1119, Address: 0x13b834, Func Offset: 0x244
	// Line 1117, Address: 0x13b838, Func Offset: 0x248
	// Line 1119, Address: 0x13b83c, Func Offset: 0x24c
	// Line 1117, Address: 0x13b840, Func Offset: 0x250
	// Line 1119, Address: 0x13b844, Func Offset: 0x254
	// Line 1117, Address: 0x13b848, Func Offset: 0x258
	// Line 1119, Address: 0x13b84c, Func Offset: 0x25c
	// Line 1117, Address: 0x13b850, Func Offset: 0x260
	// Line 1119, Address: 0x13b854, Func Offset: 0x264
	// Line 1117, Address: 0x13b858, Func Offset: 0x268
	// Line 1119, Address: 0x13b85c, Func Offset: 0x26c
	// Line 1117, Address: 0x13b860, Func Offset: 0x270
	// Line 1119, Address: 0x13b864, Func Offset: 0x274
	// Line 1117, Address: 0x13b86c, Func Offset: 0x27c
	// Line 1119, Address: 0x13b870, Func Offset: 0x280
	// Line 1117, Address: 0x13b874, Func Offset: 0x284
	// Line 1119, Address: 0x13b878, Func Offset: 0x288
	// Line 1118, Address: 0x13b87c, Func Offset: 0x28c
	// Line 1119, Address: 0x13b894, Func Offset: 0x2a4
	// Line 1118, Address: 0x13b898, Func Offset: 0x2a8
	// Line 1119, Address: 0x13b89c, Func Offset: 0x2ac
	// Line 1120, Address: 0x13b8b0, Func Offset: 0x2c0
	// Line 1121, Address: 0x13b8b8, Func Offset: 0x2c8
	// Line 1122, Address: 0x13b8d0, Func Offset: 0x2e0
	// Line 1123, Address: 0x13b8e8, Func Offset: 0x2f8
	// Func End, Address: 0x13b904, Func Offset: 0x314
}

