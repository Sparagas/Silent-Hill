typedef struct SPACK_STATIC_DATA;
typedef struct FONT_STREAM_DATA;
typedef struct SPACK_DATA;
typedef struct SPACK_OT_DATA;
typedef struct WFONT_STREAM_DATA;
typedef struct MFONT_STREAM_DATA;
typedef struct SPACK_ENV_DATA;
typedef struct FONT_DATA;
typedef struct Pad_KeyConfig;


typedef unsigned short type_0[0];
typedef int type_1[20];
typedef FONT_STREAM_DATA* type_2[16];
typedef FONT_STREAM_DATA* type_3[16];
typedef int type_4[20];
typedef unsigned int type_5[12];
typedef unsigned int type_6[12];
typedef unsigned int type_7[8];
typedef unsigned long type_8[8];
typedef unsigned char type_9[131072];
typedef unsigned int type_10[4];
typedef unsigned short type_11[8];
typedef int type_12[20];
typedef unsigned short type_13[400];
typedef short type_14[400];
typedef long type_15[0];
typedef short type_16[400];
typedef unsigned char* type_17[2];
typedef unsigned short type_18[4];
typedef unsigned short type_19[4];
typedef unsigned short type_20[64];
typedef unsigned short type_21[64][10];
typedef char type_22[1024];
typedef char type_23[16384];
typedef unsigned short type_24[22];
typedef unsigned int type_25[2];
typedef unsigned int type_26[2][17];
typedef int type_27[13];
typedef FONT_STREAM_DATA* type_28[16];
typedef int type_29[6];
typedef FONT_STREAM_DATA* type_30[16];
typedef unsigned short type_31[256];
typedef short type_32[256];
typedef short type_33[2];
typedef short type_34[256];
typedef short type_35[2][2];
typedef int type_36[10];
typedef unsigned long type_37[34];

struct SPACK_STATIC_DATA
{
	unsigned short GifNLOOP;
	unsigned short DmaQwc;
	unsigned int PRE_PRIM_FLG_NREG;
	unsigned long REGS;
};

struct FONT_STREAM_DATA
{
	unsigned short x;
	unsigned short y;
	unsigned short w;
	unsigned short h;
	unsigned short u;
	unsigned short v;
	unsigned int rgb_u;
	unsigned int rgb_d;
};

struct SPACK_DATA
{
	SPACK_OT_DATA** ot_top;
	SPACK_OT_DATA** ot_last;
	unsigned int ot_size;
	unsigned int ot_width;
	unsigned int w_ofs;
	unsigned int w_mini;
	unsigned int w_max;
	unsigned int envid;
	SPACK_OT_DATA* dma_top;
	SPACK_OT_DATA* dmabuf_pos;
	SPACK_ENV_DATA* env_top;
	unsigned long* pk_last;
	unsigned long* pos;
	short* ot_max;
	<unknown fundamental type (0xa510)>* packet;
	SPACK_STATIC_DATA* ps_top;
	unsigned long* pgiftag;
	unsigned long giftag_b;
	unsigned int flag;
	void* kick_top;
	void* old_lastpos;
};

struct SPACK_OT_DATA
{
	unsigned short DmaQwc;
	unsigned short DmaId;
	void* Addr;
	unsigned int W;
	unsigned short VifQwc;
	unsigned char EnvID;
	unsigned char VifDirect;
};

struct WFONT_STREAM_DATA
{
	unsigned short x;
	unsigned short y;
	unsigned short vw;
	unsigned short vh;
	unsigned short u;
	unsigned short v;
	unsigned int rgb_u;
	unsigned int rgb_d;
	unsigned short w;
	unsigned short h;
};

struct MFONT_STREAM_DATA
{
	unsigned short x;
	unsigned short y;
	unsigned short u;
	unsigned short v;
};

struct SPACK_ENV_DATA
{
	unsigned short DmaQwc;
	unsigned short DmaId;
	void* Addr;
	unsigned int pad1;
	unsigned short VifQwc;
	unsigned char pad2;
	unsigned char VifDirect;
};

struct FONT_DATA
{
	unsigned int tex_head[12];
	unsigned int clut_head[12];
	unsigned int clut[8];
	unsigned char texbuf[131072];
	unsigned long tex0;
	int fonttype;
	unsigned int rgb_u;
	unsigned int rgb_d;
	unsigned int rgb_s[4];
	unsigned int alpha;
	unsigned int alpha_base;
	unsigned int flag;
	unsigned short x;
	unsigned short y;
	unsigned short wide_w;
	unsigned short wide_h;
	unsigned short right_x;
	unsigned short right_y;
	unsigned short wm;
	unsigned short hm;
	short wait_count;
	short wait_type;
	short page_sound;
	unsigned short code[400];
	short upper[400];
	short lower[400];
	short top;
	short bottom;
	short st_num;
	short w_st_num;
	short prl_count;
	short preload;
	short shadow_max;
	short shadow_now;
	unsigned short sel_xl;
	unsigned short sel_xr;
	unsigned short sel_yu[4];
	unsigned short sel_yd[4];
	short sel_max;
	short sel_now;
	unsigned short mes_v[64][10];
	unsigned short* mes_str_now;
	unsigned short* mes_str;
	unsigned short* prl_str;
	FONT_STREAM_DATA* stream;
	WFONT_STREAM_DATA* w_stream;
	MFONT_STREAM_DATA* m_stream;
	unsigned short stream_max;
	unsigned short w_stream_max;
	unsigned short m_stream_max;
	unsigned short m_code[256];
	short m_upper[256];
	short m_lower[256];
	short m_top;
	short m_bottom;
	short m_st_num;
	int m_base_x;
	int m_base_y;
	int m_base_z;
	unsigned int m_rgba;
	int m_sx;
	int m_sy;
	int m_w;
	int m_h;
	int m_x;
	int m_y;
	float bar_blink;
	unsigned long* pCur;
	int base_x;
	int base_y;
	int base_z;
};

struct Pad_KeyConfig
{
	int enter;
	int cancel;
	int skip;
	int front_move;
	int back_move;
	int right_turn;
	int left_turn;
	int right_move;
	int left_move;
	int action;
	int attack;
	int dash;
	int light;
	int item;
	int search_view;
	int ready;
	int pause;
	int map;
	int padding[6];
};

short FontSize[2][2];
unsigned char* FontDataTable[2];
unsigned long font_dma_data[34];
unsigned long font_after_env[8];
int fontsAD[13];
FONT_DATA font;
char font_stream_buf[16384];
unsigned short msg_station[0];
SPACK_DATA spack;
Pad_KeyConfig key_config;
int oddeven;
long MFontData[0];

FONT_DATA* fontInit();
void fontClear();
void fontSetStreamMax(unsigned short s_max, unsigned short ws_max, unsigned short ms_max);
int fontLoad(unsigned short code);
void fontGetData();
void fontSet(unsigned short code, unsigned short x, unsigned short y);
void fontSetWide(unsigned short code, unsigned short x, unsigned short y, unsigned short w, unsigned short h);
void fontSetBlankBox(int x0, int x1, int y);
void fontSetLine(int x, int w, int y);
void fontPrintStr(unsigned short* str, int x, int y);
void fontPrintStrNum(unsigned short* str, unsigned short num, int x, int y);
unsigned short fontPrintStrMain(unsigned short** pstr, int flag);
void fontPrintDec(int num, int x, int y, int len, int flag);
void fontSetYesNo(int y);
int fontPrintWord(unsigned short* str, int x, int y, int align, int align2);
void fontPrintStrWide(unsigned short* str, int pos_x, int pos_y, int sx, int sy);
int fontGetMesWidth(int* buf, unsigned short* str);
void fontSetColor(int num);
void fontSetColorDirect(unsigned char r, unsigned char g, unsigned char b, unsigned char alp);
void fontSetAlpha(unsigned char alp);
void fontBarBlink();
<unknown fundamental type (0xa510)>* fontFlush();
<unknown fundamental type (0xa510)>* fontFlushNoSPR();
void fontPut(WFONT_STREAM_DATA* pstr, int z);
void fontPutSelectBar();
void fontPutYesNoSelectBar();
void* fontTexLoad(int texadr, int clutadr);
void* fontAfterEnv();
void fontEachTurn();
void fontPreload();
void fontSetMes(int num, unsigned short* str);
void fontCopyMessage(unsigned short* pto, unsigned short* pfrom);
void fontPushButton();
void fontPushButton2();
void fontSelectUp();
void fontSelectDown();
unsigned short* fontGetMesAdr(unsigned short* str, unsigned short num);
void fontMessageNum(unsigned short* str, unsigned short num);
void fontMessage(unsigned short* str);
void fontNextMessage();
int fontGetStatus();
void fontWide(unsigned short w, unsigned short h);
void fontAllCenterOn();
void fontAllCenterOff();
void fontAllCenter2On();
void fontAllCenter2Off();
void fontShadowOff();
void fontCrushOn();
void fontCrushOff();
void mfontClear();
<unknown fundamental type (0xa510)>* mfontFlush();

// 
// Start address: 0x1b3730
FONT_DATA* fontInit()
{
	unsigned short c;
	unsigned short* str;
	unsigned short fake_mes[22];
	unsigned short defmes[8];
	int i;
	// Line 200, Address: 0x1b3730, Func Offset: 0
	// Line 202, Address: 0x1b3740, Func Offset: 0x10
	// Line 207, Address: 0x1b3754, Func Offset: 0x24
	// Line 209, Address: 0x1b376c, Func Offset: 0x3c
	// Line 210, Address: 0x1b3780, Func Offset: 0x50
	// Line 213, Address: 0x1b3794, Func Offset: 0x64
	// Line 214, Address: 0x1b379c, Func Offset: 0x6c
	// Line 215, Address: 0x1b37a8, Func Offset: 0x78
	// Line 216, Address: 0x1b37d4, Func Offset: 0xa4
	// Line 219, Address: 0x1b37e4, Func Offset: 0xb4
	// Line 220, Address: 0x1b37f4, Func Offset: 0xc4
	// Line 221, Address: 0x1b3804, Func Offset: 0xd4
	// Line 223, Address: 0x1b380c, Func Offset: 0xdc
	// Line 225, Address: 0x1b3818, Func Offset: 0xe8
	// Line 226, Address: 0x1b3824, Func Offset: 0xf4
	// Line 227, Address: 0x1b3830, Func Offset: 0x100
	// Line 228, Address: 0x1b385c, Func Offset: 0x12c
	// Line 229, Address: 0x1b3878, Func Offset: 0x148
	// Line 232, Address: 0x1b388c, Func Offset: 0x15c
	// Line 233, Address: 0x1b3898, Func Offset: 0x168
	// Line 234, Address: 0x1b38a0, Func Offset: 0x170
	// Line 235, Address: 0x1b38ac, Func Offset: 0x17c
	// Line 236, Address: 0x1b38b8, Func Offset: 0x188
	// Line 237, Address: 0x1b38c4, Func Offset: 0x194
	// Line 238, Address: 0x1b38d0, Func Offset: 0x1a0
	// Line 239, Address: 0x1b38d8, Func Offset: 0x1a8
	// Line 240, Address: 0x1b38e8, Func Offset: 0x1b8
	// Line 244, Address: 0x1b38f8, Func Offset: 0x1c8
	// Line 251, Address: 0x1b3924, Func Offset: 0x1f4
	// Line 252, Address: 0x1b392c, Func Offset: 0x1fc
	// Line 253, Address: 0x1b393c, Func Offset: 0x20c
	// Line 254, Address: 0x1b3944, Func Offset: 0x214
	// Line 255, Address: 0x1b3950, Func Offset: 0x220
	// Line 256, Address: 0x1b3970, Func Offset: 0x240
	// Line 257, Address: 0x1b39a4, Func Offset: 0x274
	// Line 258, Address: 0x1b39ac, Func Offset: 0x27c
	// Line 259, Address: 0x1b39b4, Func Offset: 0x284
	// Line 261, Address: 0x1b39d4, Func Offset: 0x2a4
	// Line 265, Address: 0x1b39f0, Func Offset: 0x2c0
	// Line 266, Address: 0x1b39f8, Func Offset: 0x2c8
	// Func End, Address: 0x1b3a10, Func Offset: 0x2e0
}

// 
// Start address: 0x1b3a10
void fontClear()
{
	// Line 271, Address: 0x1b3a10, Func Offset: 0
	// Line 272, Address: 0x1b3a18, Func Offset: 0x8
	// Line 273, Address: 0x1b3a28, Func Offset: 0x18
	// Line 274, Address: 0x1b3a34, Func Offset: 0x24
	// Line 275, Address: 0x1b3a3c, Func Offset: 0x2c
	// Line 276, Address: 0x1b3a48, Func Offset: 0x38
	// Line 277, Address: 0x1b3a50, Func Offset: 0x40
	// Line 278, Address: 0x1b3a64, Func Offset: 0x54
	// Line 279, Address: 0x1b3a6c, Func Offset: 0x5c
	// Line 280, Address: 0x1b3a84, Func Offset: 0x74
	// Line 281, Address: 0x1b3a98, Func Offset: 0x88
	// Func End, Address: 0x1b3aa8, Func Offset: 0x98
}

// 
// Start address: 0x1b3ab0
void fontSetStreamMax(unsigned short s_max, unsigned short ws_max, unsigned short ms_max)
{
	// Line 289, Address: 0x1b3ab0, Func Offset: 0
	// Line 290, Address: 0x1b3ab8, Func Offset: 0x8
	// Line 291, Address: 0x1b3ac0, Func Offset: 0x10
	// Line 292, Address: 0x1b3ac8, Func Offset: 0x18
	// Line 293, Address: 0x1b3ad0, Func Offset: 0x20
	// Line 294, Address: 0x1b3af0, Func Offset: 0x40
	// Line 295, Address: 0x1b3b20, Func Offset: 0x70
	// Line 297, Address: 0x1b3b50, Func Offset: 0xa0
	// Line 298, Address: 0x1b3ba0, Func Offset: 0xf0
	// Func End, Address: 0x1b3bb0, Func Offset: 0x100
}

// 
// Start address: 0x1b3bb0
int fontLoad(unsigned short code)
{
	unsigned char* fontdata;
	short* f_lower;
	short* f_upper;
	unsigned short* f_code;
	int fh;
	int fw;
	int y;
	unsigned char* b;
	unsigned int n;
	unsigned short adr;
	unsigned short* adr_p;
	unsigned short c2;
	int nbak;
	int num;
	// Line 305, Address: 0x1b3bb0, Func Offset: 0
	// Line 312, Address: 0x1b3bdc, Func Offset: 0x2c
	// Line 313, Address: 0x1b3be4, Func Offset: 0x34
	// Line 314, Address: 0x1b3bec, Func Offset: 0x3c
	// Line 322, Address: 0x1b3bf4, Func Offset: 0x44
	// Line 323, Address: 0x1b3c10, Func Offset: 0x60
	// Line 324, Address: 0x1b3c14, Func Offset: 0x64
	// Line 325, Address: 0x1b3c1c, Func Offset: 0x6c
	// Line 326, Address: 0x1b3c24, Func Offset: 0x74
	// Line 327, Address: 0x1b3c3c, Func Offset: 0x8c
	// Line 328, Address: 0x1b3c58, Func Offset: 0xa8
	// Line 329, Address: 0x1b3c6c, Func Offset: 0xbc
	// Line 331, Address: 0x1b3c80, Func Offset: 0xd0
	// Line 332, Address: 0x1b3c98, Func Offset: 0xe8
	// Line 333, Address: 0x1b3cac, Func Offset: 0xfc
	// Line 334, Address: 0x1b3cb0, Func Offset: 0x100
	// Line 335, Address: 0x1b3cc0, Func Offset: 0x110
	// Line 336, Address: 0x1b3cd0, Func Offset: 0x120
	// Line 337, Address: 0x1b3ce4, Func Offset: 0x134
	// Line 338, Address: 0x1b3cec, Func Offset: 0x13c
	// Line 340, Address: 0x1b3cf8, Func Offset: 0x148
	// Line 341, Address: 0x1b3cfc, Func Offset: 0x14c
	// Line 342, Address: 0x1b3d08, Func Offset: 0x158
	// Line 343, Address: 0x1b3d14, Func Offset: 0x164
	// Line 344, Address: 0x1b3d28, Func Offset: 0x178
	// Line 345, Address: 0x1b3d2c, Func Offset: 0x17c
	// Line 346, Address: 0x1b3d44, Func Offset: 0x194
	// Line 347, Address: 0x1b3d58, Func Offset: 0x1a8
	// Line 348, Address: 0x1b3d64, Func Offset: 0x1b4
	// Line 349, Address: 0x1b3d70, Func Offset: 0x1c0
	// Line 350, Address: 0x1b3d80, Func Offset: 0x1d0
	// Line 351, Address: 0x1b3d9c, Func Offset: 0x1ec
	// Line 354, Address: 0x1b3da4, Func Offset: 0x1f4
	// Line 355, Address: 0x1b3dc0, Func Offset: 0x210
	// Line 356, Address: 0x1b3dc4, Func Offset: 0x214
	// Line 357, Address: 0x1b3dc8, Func Offset: 0x218
	// Line 358, Address: 0x1b3dd0, Func Offset: 0x220
	// Line 359, Address: 0x1b3de8, Func Offset: 0x238
	// Line 360, Address: 0x1b3dfc, Func Offset: 0x24c
	// Line 361, Address: 0x1b3e10, Func Offset: 0x260
	// Line 363, Address: 0x1b3e84, Func Offset: 0x2d4
	// Line 364, Address: 0x1b3e94, Func Offset: 0x2e4
	// Line 365, Address: 0x1b3e9c, Func Offset: 0x2ec
	// Line 366, Address: 0x1b3ea4, Func Offset: 0x2f4
	// Line 368, Address: 0x1b3ec4, Func Offset: 0x314
	// Line 370, Address: 0x1b3ee0, Func Offset: 0x330
	// Line 371, Address: 0x1b3eec, Func Offset: 0x33c
	// Line 372, Address: 0x1b3f04, Func Offset: 0x354
	// Line 373, Address: 0x1b3f14, Func Offset: 0x364
	// Line 417, Address: 0x1b3f34, Func Offset: 0x384
	// Line 430, Address: 0x1b3f44, Func Offset: 0x394
	// Line 431, Address: 0x1b3f48, Func Offset: 0x398
	// Line 432, Address: 0x1b3f4c, Func Offset: 0x39c
	// Line 433, Address: 0x1b3f50, Func Offset: 0x3a0
	// Line 434, Address: 0x1b3f54, Func Offset: 0x3a4
	// Line 435, Address: 0x1b3f58, Func Offset: 0x3a8
	// Line 436, Address: 0x1b3f5c, Func Offset: 0x3ac
	// Line 437, Address: 0x1b3f60, Func Offset: 0x3b0
	// Line 438, Address: 0x1b3f64, Func Offset: 0x3b4
	// Line 440, Address: 0x1b3f68, Func Offset: 0x3b8
	// Line 442, Address: 0x1b3f6c, Func Offset: 0x3bc
	// Line 443, Address: 0x1b3f70, Func Offset: 0x3c0
	// Line 445, Address: 0x1b3f78, Func Offset: 0x3c8
	// Line 447, Address: 0x1b3f80, Func Offset: 0x3d0
	// Line 448, Address: 0x1b3f84, Func Offset: 0x3d4
	// Line 450, Address: 0x1b3f8c, Func Offset: 0x3dc
	// Line 452, Address: 0x1b3f94, Func Offset: 0x3e4
	// Line 454, Address: 0x1b3f9c, Func Offset: 0x3ec
	// Line 456, Address: 0x1b3fa4, Func Offset: 0x3f4
	// Line 458, Address: 0x1b3fac, Func Offset: 0x3fc
	// Line 460, Address: 0x1b3fb4, Func Offset: 0x404
	// Line 462, Address: 0x1b3fbc, Func Offset: 0x40c
	// Line 464, Address: 0x1b3fc4, Func Offset: 0x414
	// Line 466, Address: 0x1b3fcc, Func Offset: 0x41c
	// Line 467, Address: 0x1b3fd0, Func Offset: 0x420
	// Line 468, Address: 0x1b3fd4, Func Offset: 0x424
	// Line 470, Address: 0x1b3fdc, Func Offset: 0x42c
	// Line 472, Address: 0x1b3fe4, Func Offset: 0x434
	// Line 474, Address: 0x1b3fec, Func Offset: 0x43c
	// Line 475, Address: 0x1b3ff0, Func Offset: 0x440
	// Line 477, Address: 0x1b3ff8, Func Offset: 0x448
	// Line 478, Address: 0x1b3ffc, Func Offset: 0x44c
	// Line 479, Address: 0x1b4000, Func Offset: 0x450
	// Line 481, Address: 0x1b4004, Func Offset: 0x454
	// Line 482, Address: 0x1b4008, Func Offset: 0x458
	// Line 484, Address: 0x1b4010, Func Offset: 0x460
	// Line 485, Address: 0x1b4014, Func Offset: 0x464
	// Line 486, Address: 0x1b4018, Func Offset: 0x468
	// Line 487, Address: 0x1b401c, Func Offset: 0x46c
	// Line 489, Address: 0x1b4020, Func Offset: 0x470
	// Line 490, Address: 0x1b4024, Func Offset: 0x474
	// Line 492, Address: 0x1b402c, Func Offset: 0x47c
	// Line 495, Address: 0x1b4034, Func Offset: 0x484
	// Line 496, Address: 0x1b4038, Func Offset: 0x488
	// Line 504, Address: 0x1b4040, Func Offset: 0x490
	// Line 505, Address: 0x1b4054, Func Offset: 0x4a4
	// Line 506, Address: 0x1b4058, Func Offset: 0x4a8
	// Func End, Address: 0x1b408c, Func Offset: 0x4dc
}

// 
// Start address: 0x1b4090
void fontGetData()
{
	// Line 541, Address: 0x1b4090, Func Offset: 0
	// Line 542, Address: 0x1b4094, Func Offset: 0x4
	// Line 544, Address: 0x1b409c, Func Offset: 0xc
	// Line 545, Address: 0x1b40a0, Func Offset: 0x10
	// Line 546, Address: 0x1b40a4, Func Offset: 0x14
	// Line 547, Address: 0x1b40a8, Func Offset: 0x18
	// Line 548, Address: 0x1b40ac, Func Offset: 0x1c
	// Line 549, Address: 0x1b40b0, Func Offset: 0x20
	// Line 551, Address: 0x1b40b4, Func Offset: 0x24
	// Line 552, Address: 0x1b40b8, Func Offset: 0x28
	// Line 553, Address: 0x1b40bc, Func Offset: 0x2c
	// Func End, Address: 0x1b40c4, Func Offset: 0x34
}

// 
// Start address: 0x1b40d0
void fontSet(unsigned short code, unsigned short x, unsigned short y)
{
	FONT_STREAM_DATA* fstream;
	WFONT_STREAM_DATA* fstream;
	int num;
	// Line 565, Address: 0x1b40d0, Func Offset: 0
	// Line 567, Address: 0x1b40e8, Func Offset: 0x18
	// Line 569, Address: 0x1b40fc, Func Offset: 0x2c
	// Line 571, Address: 0x1b4128, Func Offset: 0x58
	// Line 573, Address: 0x1b4138, Func Offset: 0x68
	// Line 576, Address: 0x1b4140, Func Offset: 0x70
	// Line 578, Address: 0x1b4148, Func Offset: 0x78
	// Line 579, Address: 0x1b4168, Func Offset: 0x98
	// Line 580, Address: 0x1b4178, Func Offset: 0xa8
	// Line 581, Address: 0x1b4188, Func Offset: 0xb8
	// Line 582, Address: 0x1b41ac, Func Offset: 0xdc
	// Line 583, Address: 0x1b41dc, Func Offset: 0x10c
	// Line 584, Address: 0x1b41f8, Func Offset: 0x128
	// Line 585, Address: 0x1b4214, Func Offset: 0x144
	// Line 586, Address: 0x1b4248, Func Offset: 0x178
	// Line 587, Address: 0x1b426c, Func Offset: 0x19c
	// Line 588, Address: 0x1b427c, Func Offset: 0x1ac
	// Line 589, Address: 0x1b428c, Func Offset: 0x1bc
	// Line 590, Address: 0x1b42a0, Func Offset: 0x1d0
	// Line 592, Address: 0x1b42a8, Func Offset: 0x1d8
	// Line 594, Address: 0x1b42d4, Func Offset: 0x204
	// Line 596, Address: 0x1b42e4, Func Offset: 0x214
	// Line 599, Address: 0x1b42ec, Func Offset: 0x21c
	// Line 601, Address: 0x1b42f4, Func Offset: 0x224
	// Line 602, Address: 0x1b4314, Func Offset: 0x244
	// Line 603, Address: 0x1b4324, Func Offset: 0x254
	// Line 604, Address: 0x1b4334, Func Offset: 0x264
	// Line 605, Address: 0x1b4358, Func Offset: 0x288
	// Line 606, Address: 0x1b4388, Func Offset: 0x2b8
	// Line 607, Address: 0x1b43a4, Func Offset: 0x2d4
	// Line 608, Address: 0x1b43c0, Func Offset: 0x2f0
	// Line 609, Address: 0x1b43f4, Func Offset: 0x324
	// Line 610, Address: 0x1b4418, Func Offset: 0x348
	// Line 612, Address: 0x1b442c, Func Offset: 0x35c
	// Func End, Address: 0x1b4444, Func Offset: 0x374
}

// 
// Start address: 0x1b4450
void fontSetWide(unsigned short code, unsigned short x, unsigned short y, unsigned short w, unsigned short h)
{
	WFONT_STREAM_DATA* fstream;
	int ty;
	int tx;
	int num;
	// Line 622, Address: 0x1b4450, Func Offset: 0
	// Line 625, Address: 0x1b4478, Func Offset: 0x28
	// Line 627, Address: 0x1b44a4, Func Offset: 0x54
	// Line 629, Address: 0x1b44b4, Func Offset: 0x64
	// Line 632, Address: 0x1b44bc, Func Offset: 0x6c
	// Line 634, Address: 0x1b44c4, Func Offset: 0x74
	// Line 635, Address: 0x1b44d8, Func Offset: 0x88
	// Line 636, Address: 0x1b44ec, Func Offset: 0x9c
	// Line 640, Address: 0x1b4544, Func Offset: 0xf4
	// Line 643, Address: 0x1b454c, Func Offset: 0xfc
	// Line 644, Address: 0x1b456c, Func Offset: 0x11c
	// Line 645, Address: 0x1b4570, Func Offset: 0x120
	// Line 646, Address: 0x1b4574, Func Offset: 0x124
	// Line 647, Address: 0x1b4598, Func Offset: 0x148
	// Line 648, Address: 0x1b45c8, Func Offset: 0x178
	// Line 649, Address: 0x1b45e4, Func Offset: 0x194
	// Line 650, Address: 0x1b4600, Func Offset: 0x1b0
	// Line 651, Address: 0x1b4634, Func Offset: 0x1e4
	// Line 652, Address: 0x1b4658, Func Offset: 0x208
	// Line 653, Address: 0x1b465c, Func Offset: 0x20c
	// Line 654, Address: 0x1b4660, Func Offset: 0x210
	// Line 655, Address: 0x1b4674, Func Offset: 0x224
	// Func End, Address: 0x1b4694, Func Offset: 0x244
}

// 
// Start address: 0x1b46a0
void fontSetBlankBox(int x0, int x1, int y)
{
	FONT_STREAM_DATA* fstream;
	// Line 663, Address: 0x1b46a0, Func Offset: 0
	// Line 666, Address: 0x1b46a8, Func Offset: 0x8
	// Line 668, Address: 0x1b46d4, Func Offset: 0x34
	// Line 670, Address: 0x1b46e4, Func Offset: 0x44
	// Line 673, Address: 0x1b46ec, Func Offset: 0x4c
	// Line 674, Address: 0x1b4704, Func Offset: 0x64
	// Line 675, Address: 0x1b470c, Func Offset: 0x6c
	// Line 676, Address: 0x1b4714, Func Offset: 0x74
	// Line 677, Address: 0x1b471c, Func Offset: 0x7c
	// Line 678, Address: 0x1b4724, Func Offset: 0x84
	// Line 679, Address: 0x1b4740, Func Offset: 0xa0
	// Line 680, Address: 0x1b475c, Func Offset: 0xbc
	// Line 681, Address: 0x1b4780, Func Offset: 0xe0
	// Line 683, Address: 0x1b4794, Func Offset: 0xf4
	// Func End, Address: 0x1b47a4, Func Offset: 0x104
}

// 
// Start address: 0x1b47b0
void fontSetLine(int x, int w, int y)
{
	unsigned int b;
	unsigned int g;
	unsigned int r;
	FONT_STREAM_DATA* fstream;
	// Line 691, Address: 0x1b47b0, Func Offset: 0
	// Line 694, Address: 0x1b47b8, Func Offset: 0x8
	// Line 696, Address: 0x1b47e4, Func Offset: 0x34
	// Line 698, Address: 0x1b47f4, Func Offset: 0x44
	// Line 701, Address: 0x1b47fc, Func Offset: 0x4c
	// Line 702, Address: 0x1b4814, Func Offset: 0x64
	// Line 703, Address: 0x1b481c, Func Offset: 0x6c
	// Line 704, Address: 0x1b4830, Func Offset: 0x80
	// Line 705, Address: 0x1b485c, Func Offset: 0xac
	// Line 706, Address: 0x1b4864, Func Offset: 0xb4
	// Line 708, Address: 0x1b48a4, Func Offset: 0xf4
	// Line 709, Address: 0x1b48b4, Func Offset: 0x104
	// Line 710, Address: 0x1b48bc, Func Offset: 0x10c
	// Line 711, Address: 0x1b48dc, Func Offset: 0x12c
	// Line 712, Address: 0x1b48f4, Func Offset: 0x144
	// Line 713, Address: 0x1b490c, Func Offset: 0x15c
	// Line 714, Address: 0x1b4930, Func Offset: 0x180
	// Line 715, Address: 0x1b493c, Func Offset: 0x18c
	// Line 716, Address: 0x1b4950, Func Offset: 0x1a0
	// Func End, Address: 0x1b4960, Func Offset: 0x1b0
}

// 
// Start address: 0x1b4960
void fontPrintStr(unsigned short* str, int x, int y)
{
	// Line 724, Address: 0x1b4960, Func Offset: 0
	// Line 725, Address: 0x1b496c, Func Offset: 0xc
	// Line 726, Address: 0x1b4978, Func Offset: 0x18
	// Line 727, Address: 0x1b4980, Func Offset: 0x20
	// Line 728, Address: 0x1b4988, Func Offset: 0x28
	// Line 729, Address: 0x1b49ac, Func Offset: 0x4c
	// Func End, Address: 0x1b49bc, Func Offset: 0x5c
}

// 
// Start address: 0x1b49c0
void fontPrintStrNum(unsigned short* str, unsigned short num, int x, int y)
{
	// Line 738, Address: 0x1b49c0, Func Offset: 0
	// Line 739, Address: 0x1b49d8, Func Offset: 0x18
	// Line 740, Address: 0x1b49f4, Func Offset: 0x34
	// Func End, Address: 0x1b4a0c, Func Offset: 0x4c
}

// 
// Start address: 0x1b4a10
unsigned short fontPrintStrMain(unsigned short** pstr, int flag)
{
	int lw[20];
	int bbx;
	int starty;
	int pos_y;
	int pos_x;
	int align2;
	int align;
	unsigned char* str_stack_c;
	unsigned char* str_c;
	unsigned short* str_stack;
	unsigned short* str;
	unsigned short def_w;
	unsigned short sy;
	unsigned short sx;
	unsigned short ln;
	unsigned short ck;
	unsigned short c;
	unsigned short wm;
	unsigned short w;
	unsigned short y;
	unsigned short x;
	// Line 749, Address: 0x1b4a10, Func Offset: 0
	// Line 756, Address: 0x1b4a40, Func Offset: 0x30
	// Line 757, Address: 0x1b4a48, Func Offset: 0x38
	// Line 758, Address: 0x1b4a4c, Func Offset: 0x3c
	// Line 759, Address: 0x1b4a54, Func Offset: 0x44
	// Line 760, Address: 0x1b4a5c, Func Offset: 0x4c
	// Line 761, Address: 0x1b4a64, Func Offset: 0x54
	// Line 762, Address: 0x1b4a6c, Func Offset: 0x5c
	// Line 763, Address: 0x1b4a7c, Func Offset: 0x6c
	// Line 765, Address: 0x1b4a8c, Func Offset: 0x7c
	// Line 767, Address: 0x1b4ab8, Func Offset: 0xa8
	// Line 768, Address: 0x1b4ad0, Func Offset: 0xc0
	// Line 769, Address: 0x1b4ad8, Func Offset: 0xc8
	// Line 770, Address: 0x1b4ae0, Func Offset: 0xd0
	// Line 771, Address: 0x1b4ae4, Func Offset: 0xd4
	// Line 772, Address: 0x1b4ae8, Func Offset: 0xd8
	// Line 773, Address: 0x1b4aec, Func Offset: 0xdc
	// Line 774, Address: 0x1b4af0, Func Offset: 0xe0
	// Line 775, Address: 0x1b4af8, Func Offset: 0xe8
	// Line 776, Address: 0x1b4afc, Func Offset: 0xec
	// Line 777, Address: 0x1b4b28, Func Offset: 0x118
	// Line 778, Address: 0x1b4b40, Func Offset: 0x130
	// Line 779, Address: 0x1b4b58, Func Offset: 0x148
	// Line 780, Address: 0x1b4b6c, Func Offset: 0x15c
	// Line 781, Address: 0x1b4b80, Func Offset: 0x170
	// Line 782, Address: 0x1b4b88, Func Offset: 0x178
	// Line 783, Address: 0x1b4b94, Func Offset: 0x184
	// Line 784, Address: 0x1b4b9c, Func Offset: 0x18c
	// Line 785, Address: 0x1b4bb8, Func Offset: 0x1a8
	// Line 787, Address: 0x1b4bcc, Func Offset: 0x1bc
	// Line 790, Address: 0x1b4bfc, Func Offset: 0x1ec
	// Line 791, Address: 0x1b4c04, Func Offset: 0x1f4
	// Line 792, Address: 0x1b4c0c, Func Offset: 0x1fc
	// Line 793, Address: 0x1b4c18, Func Offset: 0x208
	// Line 794, Address: 0x1b4c20, Func Offset: 0x210
	// Line 795, Address: 0x1b4c54, Func Offset: 0x244
	// Line 796, Address: 0x1b4c5c, Func Offset: 0x24c
	// Line 797, Address: 0x1b4c68, Func Offset: 0x258
	// Line 798, Address: 0x1b4c80, Func Offset: 0x270
	// Line 799, Address: 0x1b4c88, Func Offset: 0x278
	// Line 801, Address: 0x1b4ce0, Func Offset: 0x2d0
	// Line 804, Address: 0x1b4cf4, Func Offset: 0x2e4
	// Line 805, Address: 0x1b4d18, Func Offset: 0x308
	// Line 806, Address: 0x1b4d4c, Func Offset: 0x33c
	// Line 807, Address: 0x1b4d50, Func Offset: 0x340
	// Line 808, Address: 0x1b4d68, Func Offset: 0x358
	// Line 811, Address: 0x1b4d70, Func Offset: 0x360
	// Line 812, Address: 0x1b4d98, Func Offset: 0x388
	// Line 813, Address: 0x1b4db0, Func Offset: 0x3a0
	// Line 814, Address: 0x1b4db4, Func Offset: 0x3a4
	// Line 817, Address: 0x1b4dbc, Func Offset: 0x3ac
	// Line 818, Address: 0x1b4ddc, Func Offset: 0x3cc
	// Line 820, Address: 0x1b4de4, Func Offset: 0x3d4
	// Line 821, Address: 0x1b4de8, Func Offset: 0x3d8
	// Line 823, Address: 0x1b4df0, Func Offset: 0x3e0
	// Line 824, Address: 0x1b4df8, Func Offset: 0x3e8
	// Line 826, Address: 0x1b4e00, Func Offset: 0x3f0
	// Line 827, Address: 0x1b4e08, Func Offset: 0x3f8
	// Line 829, Address: 0x1b4e10, Func Offset: 0x400
	// Line 831, Address: 0x1b4e30, Func Offset: 0x420
	// Line 833, Address: 0x1b4e50, Func Offset: 0x440
	// Line 834, Address: 0x1b4e54, Func Offset: 0x444
	// Line 835, Address: 0x1b4e58, Func Offset: 0x448
	// Line 836, Address: 0x1b4e7c, Func Offset: 0x46c
	// Line 839, Address: 0x1b4e80, Func Offset: 0x470
	// Line 840, Address: 0x1b4e88, Func Offset: 0x478
	// Line 841, Address: 0x1b4e98, Func Offset: 0x488
	// Line 842, Address: 0x1b4eac, Func Offset: 0x49c
	// Line 843, Address: 0x1b4ec0, Func Offset: 0x4b0
	// Line 844, Address: 0x1b4ecc, Func Offset: 0x4bc
	// Line 845, Address: 0x1b4ee0, Func Offset: 0x4d0
	// Line 846, Address: 0x1b4eec, Func Offset: 0x4dc
	// Line 847, Address: 0x1b4f04, Func Offset: 0x4f4
	// Line 848, Address: 0x1b4f10, Func Offset: 0x500
	// Line 849, Address: 0x1b4f18, Func Offset: 0x508
	// Line 850, Address: 0x1b4f2c, Func Offset: 0x51c
	// Line 851, Address: 0x1b4f38, Func Offset: 0x528
	// Line 852, Address: 0x1b4f4c, Func Offset: 0x53c
	// Line 855, Address: 0x1b4f50, Func Offset: 0x540
	// Line 856, Address: 0x1b4f58, Func Offset: 0x548
	// Line 857, Address: 0x1b4fbc, Func Offset: 0x5ac
	// Line 858, Address: 0x1b4fd0, Func Offset: 0x5c0
	// Line 859, Address: 0x1b4fec, Func Offset: 0x5dc
	// Line 860, Address: 0x1b4ff0, Func Offset: 0x5e0
	// Line 861, Address: 0x1b4ff4, Func Offset: 0x5e4
	// Line 862, Address: 0x1b4ff8, Func Offset: 0x5e8
	// Line 863, Address: 0x1b5000, Func Offset: 0x5f0
	// Line 864, Address: 0x1b5064, Func Offset: 0x654
	// Line 866, Address: 0x1b5074, Func Offset: 0x664
	// Line 867, Address: 0x1b5088, Func Offset: 0x678
	// Line 868, Address: 0x1b5094, Func Offset: 0x684
	// Line 869, Address: 0x1b50b8, Func Offset: 0x6a8
	// Line 871, Address: 0x1b50d0, Func Offset: 0x6c0
	// Line 874, Address: 0x1b5104, Func Offset: 0x6f4
	// Line 875, Address: 0x1b5110, Func Offset: 0x700
	// Line 876, Address: 0x1b5120, Func Offset: 0x710
	// Line 877, Address: 0x1b5154, Func Offset: 0x744
	// Line 878, Address: 0x1b515c, Func Offset: 0x74c
	// Line 880, Address: 0x1b5190, Func Offset: 0x780
	// Line 881, Address: 0x1b51a8, Func Offset: 0x798
	// Line 882, Address: 0x1b51ac, Func Offset: 0x79c
	// Line 887, Address: 0x1b51b4, Func Offset: 0x7a4
	// Line 891, Address: 0x1b51ec, Func Offset: 0x7dc
	// Line 892, Address: 0x1b51f0, Func Offset: 0x7e0
	// Line 893, Address: 0x1b51f8, Func Offset: 0x7e8
	// Line 894, Address: 0x1b51fc, Func Offset: 0x7ec
	// Line 895, Address: 0x1b5204, Func Offset: 0x7f4
	// Line 896, Address: 0x1b520c, Func Offset: 0x7fc
	// Line 898, Address: 0x1b5230, Func Offset: 0x820
	// Line 899, Address: 0x1b5264, Func Offset: 0x854
	// Line 901, Address: 0x1b526c, Func Offset: 0x85c
	// Line 902, Address: 0x1b5274, Func Offset: 0x864
	// Line 904, Address: 0x1b527c, Func Offset: 0x86c
	// Line 908, Address: 0x1b52a0, Func Offset: 0x890
	// Line 909, Address: 0x1b52b4, Func Offset: 0x8a4
	// Line 912, Address: 0x1b52e8, Func Offset: 0x8d8
	// Line 913, Address: 0x1b5318, Func Offset: 0x908
	// Line 915, Address: 0x1b5320, Func Offset: 0x910
	// Line 916, Address: 0x1b532c, Func Offset: 0x91c
	// Line 917, Address: 0x1b5334, Func Offset: 0x924
	// Line 918, Address: 0x1b5368, Func Offset: 0x958
	// Line 919, Address: 0x1b5370, Func Offset: 0x960
	// Line 920, Address: 0x1b537c, Func Offset: 0x96c
	// Line 922, Address: 0x1b5390, Func Offset: 0x980
	// Line 923, Address: 0x1b539c, Func Offset: 0x98c
	// Line 924, Address: 0x1b53b4, Func Offset: 0x9a4
	// Line 925, Address: 0x1b53bc, Func Offset: 0x9ac
	// Line 927, Address: 0x1b5414, Func Offset: 0xa04
	// Line 930, Address: 0x1b5428, Func Offset: 0xa18
	// Line 931, Address: 0x1b544c, Func Offset: 0xa3c
	// Line 933, Address: 0x1b5478, Func Offset: 0xa68
	// Line 934, Address: 0x1b5490, Func Offset: 0xa80
	// Line 936, Address: 0x1b5498, Func Offset: 0xa88
	// Line 937, Address: 0x1b54a8, Func Offset: 0xa98
	// Line 939, Address: 0x1b54b0, Func Offset: 0xaa0
	// Line 940, Address: 0x1b54c4, Func Offset: 0xab4
	// Line 941, Address: 0x1b54d0, Func Offset: 0xac0
	// Line 942, Address: 0x1b54d4, Func Offset: 0xac4
	// Line 943, Address: 0x1b54dc, Func Offset: 0xacc
	// Line 944, Address: 0x1b54f4, Func Offset: 0xae4
	// Line 947, Address: 0x1b54f8, Func Offset: 0xae8
	// Line 949, Address: 0x1b5500, Func Offset: 0xaf0
	// Line 950, Address: 0x1b5510, Func Offset: 0xb00
	// Line 951, Address: 0x1b5520, Func Offset: 0xb10
	// Line 952, Address: 0x1b5548, Func Offset: 0xb38
	// Line 953, Address: 0x1b554c, Func Offset: 0xb3c
	// Line 954, Address: 0x1b5550, Func Offset: 0xb40
	// Line 955, Address: 0x1b5574, Func Offset: 0xb64
	// Line 958, Address: 0x1b5578, Func Offset: 0xb68
	// Line 959, Address: 0x1b5580, Func Offset: 0xb70
	// Line 960, Address: 0x1b5590, Func Offset: 0xb80
	// Line 961, Address: 0x1b55a8, Func Offset: 0xb98
	// Line 962, Address: 0x1b55b8, Func Offset: 0xba8
	// Line 963, Address: 0x1b55cc, Func Offset: 0xbbc
	// Line 964, Address: 0x1b55d8, Func Offset: 0xbc8
	// Line 965, Address: 0x1b55ec, Func Offset: 0xbdc
	// Line 966, Address: 0x1b55f8, Func Offset: 0xbe8
	// Line 967, Address: 0x1b560c, Func Offset: 0xbfc
	// Line 970, Address: 0x1b5610, Func Offset: 0xc00
	// Line 971, Address: 0x1b5618, Func Offset: 0xc08
	// Line 972, Address: 0x1b567c, Func Offset: 0xc6c
	// Line 973, Address: 0x1b5690, Func Offset: 0xc80
	// Line 974, Address: 0x1b56ac, Func Offset: 0xc9c
	// Line 975, Address: 0x1b56b0, Func Offset: 0xca0
	// Line 976, Address: 0x1b56b4, Func Offset: 0xca4
	// Line 977, Address: 0x1b56b8, Func Offset: 0xca8
	// Line 978, Address: 0x1b56c0, Func Offset: 0xcb0
	// Line 979, Address: 0x1b5724, Func Offset: 0xd14
	// Line 981, Address: 0x1b5734, Func Offset: 0xd24
	// Line 982, Address: 0x1b5778, Func Offset: 0xd68
	// Line 983, Address: 0x1b5790, Func Offset: 0xd80
	// Line 984, Address: 0x1b57a8, Func Offset: 0xd98
	// Line 985, Address: 0x1b57b4, Func Offset: 0xda4
	// Line 986, Address: 0x1b57c4, Func Offset: 0xdb4
	// Line 987, Address: 0x1b57e8, Func Offset: 0xdd8
	// Line 989, Address: 0x1b5810, Func Offset: 0xe00
	// Line 990, Address: 0x1b582c, Func Offset: 0xe1c
	// Line 991, Address: 0x1b5834, Func Offset: 0xe24
	// Line 992, Address: 0x1b5838, Func Offset: 0xe28
	// Line 993, Address: 0x1b5840, Func Offset: 0xe30
	// Line 994, Address: 0x1b58a4, Func Offset: 0xe94
	// Line 995, Address: 0x1b58b4, Func Offset: 0xea4
	// Line 996, Address: 0x1b58d8, Func Offset: 0xec8
	// Line 997, Address: 0x1b58f0, Func Offset: 0xee0
	// Line 998, Address: 0x1b5900, Func Offset: 0xef0
	// Line 999, Address: 0x1b590c, Func Offset: 0xefc
	// Line 1000, Address: 0x1b5918, Func Offset: 0xf08
	// Line 1001, Address: 0x1b5920, Func Offset: 0xf10
	// Line 1002, Address: 0x1b592c, Func Offset: 0xf1c
	// Line 1003, Address: 0x1b5934, Func Offset: 0xf24
	// Line 1004, Address: 0x1b599c, Func Offset: 0xf8c
	// Line 1005, Address: 0x1b59ac, Func Offset: 0xf9c
	// Line 1006, Address: 0x1b59b0, Func Offset: 0xfa0
	// Line 1007, Address: 0x1b59bc, Func Offset: 0xfac
	// Line 1008, Address: 0x1b59d0, Func Offset: 0xfc0
	// Line 1009, Address: 0x1b59e0, Func Offset: 0xfd0
	// Line 1010, Address: 0x1b5a00, Func Offset: 0xff0
	// Line 1012, Address: 0x1b5a40, Func Offset: 0x1030
	// Line 1013, Address: 0x1b5a4c, Func Offset: 0x103c
	// Line 1014, Address: 0x1b5a6c, Func Offset: 0x105c
	// Line 1015, Address: 0x1b5a74, Func Offset: 0x1064
	// Line 1016, Address: 0x1b5a88, Func Offset: 0x1078
	// Line 1017, Address: 0x1b5a8c, Func Offset: 0x107c
	// Line 1018, Address: 0x1b5a98, Func Offset: 0x1088
	// Line 1019, Address: 0x1b5ab8, Func Offset: 0x10a8
	// Line 1020, Address: 0x1b5abc, Func Offset: 0x10ac
	// Func End, Address: 0x1b5af0, Func Offset: 0x10e0
}

// 
// Start address: 0x1b5af0
void fontPrintDec(int num, int x, int y, int len, int flag)
{
	unsigned short code;
	int sy;
	int sx;
	int point;
	int vy;
	int vx;
	int buf[10];
	// Line 1030, Address: 0x1b5af0, Func Offset: 0
	// Line 1034, Address: 0x1b5b18, Func Offset: 0x28
	// Line 1035, Address: 0x1b5b1c, Func Offset: 0x2c
	// Line 1036, Address: 0x1b5b20, Func Offset: 0x30
	// Line 1038, Address: 0x1b5b4c, Func Offset: 0x5c
	// Line 1039, Address: 0x1b5b5c, Func Offset: 0x6c
	// Line 1041, Address: 0x1b5b60, Func Offset: 0x70
	// Line 1042, Address: 0x1b5b84, Func Offset: 0x94
	// Line 1043, Address: 0x1b5ba4, Func Offset: 0xb4
	// Line 1044, Address: 0x1b5bac, Func Offset: 0xbc
	// Line 1045, Address: 0x1b5bd0, Func Offset: 0xe0
	// Line 1046, Address: 0x1b5bd8, Func Offset: 0xe8
	// Line 1047, Address: 0x1b5be4, Func Offset: 0xf4
	// Line 1049, Address: 0x1b5c08, Func Offset: 0x118
	// Line 1050, Address: 0x1b5c10, Func Offset: 0x120
	// Line 1051, Address: 0x1b5c14, Func Offset: 0x124
	// Line 1052, Address: 0x1b5c24, Func Offset: 0x134
	// Line 1053, Address: 0x1b5c2c, Func Offset: 0x13c
	// Line 1054, Address: 0x1b5c38, Func Offset: 0x148
	// Line 1055, Address: 0x1b5c44, Func Offset: 0x154
	// Line 1056, Address: 0x1b5c4c, Func Offset: 0x15c
	// Line 1057, Address: 0x1b5c54, Func Offset: 0x164
	// Line 1058, Address: 0x1b5c5c, Func Offset: 0x16c
	// Line 1059, Address: 0x1b5c60, Func Offset: 0x170
	// Line 1060, Address: 0x1b5c74, Func Offset: 0x184
	// Line 1061, Address: 0x1b5c94, Func Offset: 0x1a4
	// Line 1063, Address: 0x1b5cc0, Func Offset: 0x1d0
	// Line 1064, Address: 0x1b5ccc, Func Offset: 0x1dc
	// Func End, Address: 0x1b5cf4, Func Offset: 0x204
}

// 
// Start address: 0x1b5d00
void fontSetYesNo(int y)
{
	int w2;
	int w;
	// Line 1070, Address: 0x1b5d00, Func Offset: 0
	// Line 1072, Address: 0x1b5d14, Func Offset: 0x14
	// Line 1073, Address: 0x1b5d48, Func Offset: 0x48
	// Line 1074, Address: 0x1b5d78, Func Offset: 0x78
	// Line 1075, Address: 0x1b5d94, Func Offset: 0x94
	// Line 1076, Address: 0x1b5d9c, Func Offset: 0x9c
	// Func End, Address: 0x1b5db4, Func Offset: 0xb4
}

// 
// Start address: 0x1b5dc0
int fontPrintWord(unsigned short* str, int x, int y, int align, int align2)
{
	int b_wm;
	int b_hm;
	int lw[20];
	unsigned char* str_c;
	unsigned short* sstr;
	unsigned short def_w;
	unsigned short sy;
	unsigned short sx;
	unsigned short ln;
	unsigned short ck;
	unsigned short c;
	unsigned short wm;
	unsigned short w;
	unsigned short ty;
	unsigned short tx;
	// Line 1089, Address: 0x1b5dc0, Func Offset: 0
	// Line 1097, Address: 0x1b5dfc, Func Offset: 0x3c
	// Line 1098, Address: 0x1b5e04, Func Offset: 0x44
	// Line 1099, Address: 0x1b5e08, Func Offset: 0x48
	// Line 1100, Address: 0x1b5e0c, Func Offset: 0x4c
	// Line 1101, Address: 0x1b5e10, Func Offset: 0x50
	// Line 1102, Address: 0x1b5e24, Func Offset: 0x64
	// Line 1103, Address: 0x1b5e38, Func Offset: 0x78
	// Line 1104, Address: 0x1b5e40, Func Offset: 0x80
	// Line 1105, Address: 0x1b5e4c, Func Offset: 0x8c
	// Line 1106, Address: 0x1b5e54, Func Offset: 0x94
	// Line 1107, Address: 0x1b5e70, Func Offset: 0xb0
	// Line 1109, Address: 0x1b5e84, Func Offset: 0xc4
	// Line 1112, Address: 0x1b5eb0, Func Offset: 0xf0
	// Line 1113, Address: 0x1b5eb8, Func Offset: 0xf8
	// Line 1114, Address: 0x1b5ec0, Func Offset: 0x100
	// Line 1115, Address: 0x1b5ecc, Func Offset: 0x10c
	// Line 1116, Address: 0x1b5ed4, Func Offset: 0x114
	// Line 1117, Address: 0x1b5f04, Func Offset: 0x144
	// Line 1118, Address: 0x1b5f0c, Func Offset: 0x14c
	// Line 1119, Address: 0x1b5f18, Func Offset: 0x158
	// Line 1120, Address: 0x1b5f30, Func Offset: 0x170
	// Line 1121, Address: 0x1b5f38, Func Offset: 0x178
	// Line 1125, Address: 0x1b5f80, Func Offset: 0x1c0
	// Line 1126, Address: 0x1b5fa4, Func Offset: 0x1e4
	// Line 1128, Address: 0x1b5fc4, Func Offset: 0x204
	// Line 1129, Address: 0x1b5fdc, Func Offset: 0x21c
	// Line 1131, Address: 0x1b5fe4, Func Offset: 0x224
	// Line 1132, Address: 0x1b6004, Func Offset: 0x244
	// Line 1133, Address: 0x1b6020, Func Offset: 0x260
	// Line 1136, Address: 0x1b6024, Func Offset: 0x264
	// Line 1137, Address: 0x1b602c, Func Offset: 0x26c
	// Line 1138, Address: 0x1b603c, Func Offset: 0x27c
	// Line 1139, Address: 0x1b6048, Func Offset: 0x288
	// Line 1140, Address: 0x1b605c, Func Offset: 0x29c
	// Line 1141, Address: 0x1b6068, Func Offset: 0x2a8
	// Line 1142, Address: 0x1b607c, Func Offset: 0x2bc
	// Line 1145, Address: 0x1b6080, Func Offset: 0x2c0
	// Line 1146, Address: 0x1b6088, Func Offset: 0x2c8
	// Line 1147, Address: 0x1b60ec, Func Offset: 0x32c
	// Line 1148, Address: 0x1b60fc, Func Offset: 0x33c
	// Line 1149, Address: 0x1b6110, Func Offset: 0x350
	// Line 1150, Address: 0x1b611c, Func Offset: 0x35c
	// Line 1151, Address: 0x1b6138, Func Offset: 0x378
	// Line 1155, Address: 0x1b6150, Func Offset: 0x390
	// Line 1156, Address: 0x1b615c, Func Offset: 0x39c
	// Line 1157, Address: 0x1b618c, Func Offset: 0x3cc
	// Line 1158, Address: 0x1b6194, Func Offset: 0x3d4
	// Line 1160, Address: 0x1b619c, Func Offset: 0x3dc
	// Line 1162, Address: 0x1b61a0, Func Offset: 0x3e0
	// Line 1163, Address: 0x1b61a4, Func Offset: 0x3e4
	// Line 1164, Address: 0x1b61ac, Func Offset: 0x3ec
	// Line 1165, Address: 0x1b61b4, Func Offset: 0x3f4
	// Line 1167, Address: 0x1b61e4, Func Offset: 0x424
	// Line 1168, Address: 0x1b6218, Func Offset: 0x458
	// Line 1170, Address: 0x1b6220, Func Offset: 0x460
	// Line 1171, Address: 0x1b624c, Func Offset: 0x48c
	// Line 1173, Address: 0x1b6254, Func Offset: 0x494
	// Line 1174, Address: 0x1b6274, Func Offset: 0x4b4
	// Line 1176, Address: 0x1b627c, Func Offset: 0x4bc
	// Line 1179, Address: 0x1b6288, Func Offset: 0x4c8
	// Line 1180, Address: 0x1b6290, Func Offset: 0x4d0
	// Line 1181, Address: 0x1b629c, Func Offset: 0x4dc
	// Line 1182, Address: 0x1b62a4, Func Offset: 0x4e4
	// Line 1183, Address: 0x1b62d4, Func Offset: 0x514
	// Line 1184, Address: 0x1b62dc, Func Offset: 0x51c
	// Line 1185, Address: 0x1b62f0, Func Offset: 0x530
	// Line 1186, Address: 0x1b62fc, Func Offset: 0x53c
	// Line 1187, Address: 0x1b6314, Func Offset: 0x554
	// Line 1188, Address: 0x1b631c, Func Offset: 0x55c
	// Line 1192, Address: 0x1b6370, Func Offset: 0x5b0
	// Line 1193, Address: 0x1b6394, Func Offset: 0x5d4
	// Line 1195, Address: 0x1b63a8, Func Offset: 0x5e8
	// Line 1196, Address: 0x1b63c0, Func Offset: 0x600
	// Line 1198, Address: 0x1b63c8, Func Offset: 0x608
	// Line 1199, Address: 0x1b63d8, Func Offset: 0x618
	// Line 1202, Address: 0x1b63e8, Func Offset: 0x628
	// Line 1203, Address: 0x1b63f0, Func Offset: 0x630
	// Line 1204, Address: 0x1b6400, Func Offset: 0x640
	// Line 1205, Address: 0x1b640c, Func Offset: 0x64c
	// Line 1206, Address: 0x1b6420, Func Offset: 0x660
	// Line 1207, Address: 0x1b642c, Func Offset: 0x66c
	// Line 1208, Address: 0x1b6440, Func Offset: 0x680
	// Line 1210, Address: 0x1b6444, Func Offset: 0x684
	// Line 1211, Address: 0x1b6448, Func Offset: 0x688
	// Line 1212, Address: 0x1b6450, Func Offset: 0x690
	// Line 1213, Address: 0x1b64b4, Func Offset: 0x6f4
	// Line 1214, Address: 0x1b64c4, Func Offset: 0x704
	// Line 1215, Address: 0x1b64e8, Func Offset: 0x728
	// Line 1216, Address: 0x1b64f4, Func Offset: 0x734
	// Line 1217, Address: 0x1b650c, Func Offset: 0x74c
	// Line 1218, Address: 0x1b6514, Func Offset: 0x754
	// Line 1219, Address: 0x1b657c, Func Offset: 0x7bc
	// Line 1220, Address: 0x1b658c, Func Offset: 0x7cc
	// Line 1221, Address: 0x1b6590, Func Offset: 0x7d0
	// Line 1222, Address: 0x1b6598, Func Offset: 0x7d8
	// Line 1223, Address: 0x1b65a8, Func Offset: 0x7e8
	// Line 1224, Address: 0x1b65d0, Func Offset: 0x810
	// Line 1225, Address: 0x1b65e4, Func Offset: 0x824
	// Line 1226, Address: 0x1b65e8, Func Offset: 0x828
	// Line 1227, Address: 0x1b6600, Func Offset: 0x840
	// Line 1228, Address: 0x1b6608, Func Offset: 0x848
	// Line 1229, Address: 0x1b6610, Func Offset: 0x850
	// Line 1231, Address: 0x1b6650, Func Offset: 0x890
	// Line 1232, Address: 0x1b666c, Func Offset: 0x8ac
	// Line 1234, Address: 0x1b6684, Func Offset: 0x8c4
	// Line 1235, Address: 0x1b668c, Func Offset: 0x8cc
	// Func End, Address: 0x1b66c0, Func Offset: 0x900
}

// 
// Start address: 0x1b66c0
void fontPrintStrWide(unsigned short* str, int pos_x, int pos_y, int sx, int sy)
{
	int lw[20];
	int align2;
	int align;
	unsigned char* str_c;
	unsigned short* sstr;
	unsigned short def_w;
	unsigned short ln;
	unsigned short ck;
	unsigned short c;
	unsigned short wm;
	unsigned short w;
	unsigned short y;
	unsigned short x;
	// Line 1246, Address: 0x1b66c0, Func Offset: 0
	// Line 1253, Address: 0x1b66fc, Func Offset: 0x3c
	// Line 1254, Address: 0x1b6704, Func Offset: 0x44
	// Line 1256, Address: 0x1b6720, Func Offset: 0x60
	// Line 1257, Address: 0x1b672c, Func Offset: 0x6c
	// Line 1258, Address: 0x1b6738, Func Offset: 0x78
	// Line 1259, Address: 0x1b673c, Func Offset: 0x7c
	// Line 1260, Address: 0x1b6744, Func Offset: 0x84
	// Line 1261, Address: 0x1b6748, Func Offset: 0x88
	// Line 1262, Address: 0x1b674c, Func Offset: 0x8c
	// Line 1263, Address: 0x1b6750, Func Offset: 0x90
	// Line 1264, Address: 0x1b6758, Func Offset: 0x98
	// Line 1267, Address: 0x1b6784, Func Offset: 0xc4
	// Line 1268, Address: 0x1b678c, Func Offset: 0xcc
	// Line 1269, Address: 0x1b6794, Func Offset: 0xd4
	// Line 1270, Address: 0x1b67a0, Func Offset: 0xe0
	// Line 1271, Address: 0x1b67a8, Func Offset: 0xe8
	// Line 1272, Address: 0x1b67d0, Func Offset: 0x110
	// Line 1273, Address: 0x1b67d8, Func Offset: 0x118
	// Line 1274, Address: 0x1b67e4, Func Offset: 0x124
	// Line 1275, Address: 0x1b67f0, Func Offset: 0x130
	// Line 1276, Address: 0x1b67f8, Func Offset: 0x138
	// Line 1280, Address: 0x1b6838, Func Offset: 0x178
	// Line 1281, Address: 0x1b685c, Func Offset: 0x19c
	// Line 1283, Address: 0x1b68a0, Func Offset: 0x1e0
	// Line 1284, Address: 0x1b68ac, Func Offset: 0x1ec
	// Line 1286, Address: 0x1b68b4, Func Offset: 0x1f4
	// Line 1287, Address: 0x1b68d8, Func Offset: 0x218
	// Line 1288, Address: 0x1b68f0, Func Offset: 0x230
	// Line 1289, Address: 0x1b68f4, Func Offset: 0x234
	// Line 1291, Address: 0x1b68fc, Func Offset: 0x23c
	// Line 1292, Address: 0x1b6900, Func Offset: 0x240
	// Line 1294, Address: 0x1b6908, Func Offset: 0x248
	// Line 1295, Address: 0x1b6910, Func Offset: 0x250
	// Line 1297, Address: 0x1b6918, Func Offset: 0x258
	// Line 1300, Address: 0x1b691c, Func Offset: 0x25c
	// Line 1301, Address: 0x1b6924, Func Offset: 0x264
	// Line 1302, Address: 0x1b6934, Func Offset: 0x274
	// Line 1303, Address: 0x1b6940, Func Offset: 0x280
	// Line 1304, Address: 0x1b6954, Func Offset: 0x294
	// Line 1305, Address: 0x1b6960, Func Offset: 0x2a0
	// Line 1306, Address: 0x1b6978, Func Offset: 0x2b8
	// Line 1307, Address: 0x1b6984, Func Offset: 0x2c4
	// Line 1308, Address: 0x1b698c, Func Offset: 0x2cc
	// Line 1309, Address: 0x1b69a0, Func Offset: 0x2e0
	// Line 1310, Address: 0x1b69a8, Func Offset: 0x2e8
	// Line 1311, Address: 0x1b69bc, Func Offset: 0x2fc
	// Line 1314, Address: 0x1b69c0, Func Offset: 0x300
	// Line 1315, Address: 0x1b69c8, Func Offset: 0x308
	// Line 1316, Address: 0x1b6a2c, Func Offset: 0x36c
	// Line 1317, Address: 0x1b6a3c, Func Offset: 0x37c
	// Line 1318, Address: 0x1b6a50, Func Offset: 0x390
	// Line 1319, Address: 0x1b6a5c, Func Offset: 0x39c
	// Line 1320, Address: 0x1b6a7c, Func Offset: 0x3bc
	// Line 1322, Address: 0x1b6a94, Func Offset: 0x3d4
	// Line 1325, Address: 0x1b6ac8, Func Offset: 0x408
	// Line 1326, Address: 0x1b6ad0, Func Offset: 0x410
	// Line 1327, Address: 0x1b6af8, Func Offset: 0x438
	// Line 1328, Address: 0x1b6b00, Func Offset: 0x440
	// Line 1330, Address: 0x1b6b04, Func Offset: 0x444
	// Line 1332, Address: 0x1b6b08, Func Offset: 0x448
	// Line 1333, Address: 0x1b6b0c, Func Offset: 0x44c
	// Line 1334, Address: 0x1b6b14, Func Offset: 0x454
	// Line 1335, Address: 0x1b6b1c, Func Offset: 0x45c
	// Line 1337, Address: 0x1b6b40, Func Offset: 0x480
	// Line 1338, Address: 0x1b6b74, Func Offset: 0x4b4
	// Line 1340, Address: 0x1b6b7c, Func Offset: 0x4bc
	// Line 1341, Address: 0x1b6b84, Func Offset: 0x4c4
	// Line 1343, Address: 0x1b6b8c, Func Offset: 0x4cc
	// Line 1346, Address: 0x1b6bb0, Func Offset: 0x4f0
	// Line 1347, Address: 0x1b6bb8, Func Offset: 0x4f8
	// Line 1348, Address: 0x1b6bc4, Func Offset: 0x504
	// Line 1349, Address: 0x1b6bcc, Func Offset: 0x50c
	// Line 1350, Address: 0x1b6bf4, Func Offset: 0x534
	// Line 1351, Address: 0x1b6bfc, Func Offset: 0x53c
	// Line 1352, Address: 0x1b6c18, Func Offset: 0x558
	// Line 1353, Address: 0x1b6c24, Func Offset: 0x564
	// Line 1354, Address: 0x1b6c30, Func Offset: 0x570
	// Line 1355, Address: 0x1b6c38, Func Offset: 0x578
	// Line 1359, Address: 0x1b6c84, Func Offset: 0x5c4
	// Line 1360, Address: 0x1b6ca8, Func Offset: 0x5e8
	// Line 1362, Address: 0x1b6cbc, Func Offset: 0x5fc
	// Line 1363, Address: 0x1b6cc8, Func Offset: 0x608
	// Line 1365, Address: 0x1b6cd0, Func Offset: 0x610
	// Line 1366, Address: 0x1b6ce0, Func Offset: 0x620
	// Line 1369, Address: 0x1b6cf0, Func Offset: 0x630
	// Line 1370, Address: 0x1b6cf8, Func Offset: 0x638
	// Line 1371, Address: 0x1b6d08, Func Offset: 0x648
	// Line 1372, Address: 0x1b6d14, Func Offset: 0x654
	// Line 1373, Address: 0x1b6d28, Func Offset: 0x668
	// Line 1374, Address: 0x1b6d34, Func Offset: 0x674
	// Line 1375, Address: 0x1b6d48, Func Offset: 0x688
	// Line 1377, Address: 0x1b6d4c, Func Offset: 0x68c
	// Line 1378, Address: 0x1b6d50, Func Offset: 0x690
	// Line 1379, Address: 0x1b6d58, Func Offset: 0x698
	// Line 1380, Address: 0x1b6dbc, Func Offset: 0x6fc
	// Line 1381, Address: 0x1b6dcc, Func Offset: 0x70c
	// Line 1382, Address: 0x1b6df0, Func Offset: 0x730
	// Line 1383, Address: 0x1b6dfc, Func Offset: 0x73c
	// Line 1384, Address: 0x1b6e08, Func Offset: 0x748
	// Line 1385, Address: 0x1b6e10, Func Offset: 0x750
	// Line 1386, Address: 0x1b6e74, Func Offset: 0x7b4
	// Line 1387, Address: 0x1b6e84, Func Offset: 0x7c4
	// Line 1388, Address: 0x1b6e88, Func Offset: 0x7c8
	// Line 1389, Address: 0x1b6e94, Func Offset: 0x7d4
	// Line 1390, Address: 0x1b6ea8, Func Offset: 0x7e8
	// Line 1391, Address: 0x1b6eb4, Func Offset: 0x7f4
	// Line 1392, Address: 0x1b6ecc, Func Offset: 0x80c
	// Func End, Address: 0x1b6f00, Func Offset: 0x840
}

// 
// Start address: 0x1b6f00
int fontGetMesWidth(int* buf, unsigned short* str)
{
	unsigned char* str_stack_c;
	unsigned char* str_c;
	unsigned short* str_stack;
	unsigned short* sstr;
	unsigned short def_w;
	unsigned short sy;
	unsigned short sx;
	unsigned short ln;
	unsigned short ck;
	unsigned short c;
	unsigned short w;
	// Line 1399, Address: 0x1b6f00, Func Offset: 0
	// Line 1404, Address: 0x1b6f30, Func Offset: 0x30
	// Line 1405, Address: 0x1b6f44, Func Offset: 0x44
	// Line 1407, Address: 0x1b6f48, Func Offset: 0x48
	// Line 1408, Address: 0x1b6f4c, Func Offset: 0x4c
	// Line 1409, Address: 0x1b6f50, Func Offset: 0x50
	// Line 1410, Address: 0x1b6f54, Func Offset: 0x54
	// Line 1411, Address: 0x1b6f58, Func Offset: 0x58
	// Line 1412, Address: 0x1b6f6c, Func Offset: 0x6c
	// Line 1414, Address: 0x1b6f74, Func Offset: 0x74
	// Line 1415, Address: 0x1b6f7c, Func Offset: 0x7c
	// Line 1418, Address: 0x1b6f9c, Func Offset: 0x9c
	// Line 1421, Address: 0x1b6fc8, Func Offset: 0xc8
	// Line 1422, Address: 0x1b6fd0, Func Offset: 0xd0
	// Line 1423, Address: 0x1b6fd8, Func Offset: 0xd8
	// Line 1424, Address: 0x1b6fe4, Func Offset: 0xe4
	// Line 1425, Address: 0x1b6fec, Func Offset: 0xec
	// Line 1426, Address: 0x1b701c, Func Offset: 0x11c
	// Line 1427, Address: 0x1b7024, Func Offset: 0x124
	// Line 1428, Address: 0x1b7030, Func Offset: 0x130
	// Line 1429, Address: 0x1b7048, Func Offset: 0x148
	// Line 1430, Address: 0x1b7050, Func Offset: 0x150
	// Line 1434, Address: 0x1b70a4, Func Offset: 0x1a4
	// Line 1435, Address: 0x1b70c8, Func Offset: 0x1c8
	// Line 1437, Address: 0x1b70e8, Func Offset: 0x1e8
	// Line 1438, Address: 0x1b7100, Func Offset: 0x200
	// Line 1440, Address: 0x1b7108, Func Offset: 0x208
	// Line 1441, Address: 0x1b7128, Func Offset: 0x228
	// Line 1442, Address: 0x1b712c, Func Offset: 0x22c
	// Line 1444, Address: 0x1b7134, Func Offset: 0x234
	// Line 1446, Address: 0x1b7154, Func Offset: 0x254
	// Line 1448, Address: 0x1b7170, Func Offset: 0x270
	// Line 1449, Address: 0x1b7174, Func Offset: 0x274
	// Line 1450, Address: 0x1b7178, Func Offset: 0x278
	// Line 1451, Address: 0x1b719c, Func Offset: 0x29c
	// Line 1454, Address: 0x1b71a0, Func Offset: 0x2a0
	// Line 1455, Address: 0x1b71a8, Func Offset: 0x2a8
	// Line 1456, Address: 0x1b71b8, Func Offset: 0x2b8
	// Line 1457, Address: 0x1b71c4, Func Offset: 0x2c4
	// Line 1458, Address: 0x1b71d8, Func Offset: 0x2d8
	// Line 1459, Address: 0x1b71e4, Func Offset: 0x2e4
	// Line 1460, Address: 0x1b71f8, Func Offset: 0x2f8
	// Line 1462, Address: 0x1b71fc, Func Offset: 0x2fc
	// Line 1463, Address: 0x1b7200, Func Offset: 0x300
	// Line 1464, Address: 0x1b7208, Func Offset: 0x308
	// Line 1465, Address: 0x1b726c, Func Offset: 0x36c
	// Line 1466, Address: 0x1b7280, Func Offset: 0x380
	// Line 1467, Address: 0x1b7298, Func Offset: 0x398
	// Line 1468, Address: 0x1b729c, Func Offset: 0x39c
	// Line 1469, Address: 0x1b72a0, Func Offset: 0x3a0
	// Line 1470, Address: 0x1b72a4, Func Offset: 0x3a4
	// Line 1471, Address: 0x1b72ac, Func Offset: 0x3ac
	// Line 1472, Address: 0x1b7314, Func Offset: 0x414
	// Line 1474, Address: 0x1b7324, Func Offset: 0x424
	// Line 1475, Address: 0x1b7338, Func Offset: 0x438
	// Line 1476, Address: 0x1b7344, Func Offset: 0x444
	// Line 1478, Address: 0x1b7360, Func Offset: 0x460
	// Line 1479, Address: 0x1b7364, Func Offset: 0x464
	// Func End, Address: 0x1b7394, Func Offset: 0x494
}

// 
// Start address: 0x1b73a0
void fontSetColor(int num)
{
	unsigned int font_color[2][17];
	// Line 1485, Address: 0x1b73a0, Func Offset: 0
	// Line 1487, Address: 0x1b73b0, Func Offset: 0x10
	// Line 1508, Address: 0x1b73ec, Func Offset: 0x4c
	// Line 1509, Address: 0x1b742c, Func Offset: 0x8c
	// Line 1510, Address: 0x1b7440, Func Offset: 0xa0
	// Line 1511, Address: 0x1b744c, Func Offset: 0xac
	// Func End, Address: 0x1b7460, Func Offset: 0xc0
}

// 
// Start address: 0x1b7460
void fontSetColorDirect(unsigned char r, unsigned char g, unsigned char b, unsigned char alp)
{
	// Line 1519, Address: 0x1b7460, Func Offset: 0
	// Line 1520, Address: 0x1b748c, Func Offset: 0x2c
	// Line 1521, Address: 0x1b7498, Func Offset: 0x38
	// Func End, Address: 0x1b74a0, Func Offset: 0x40
}

// 
// Start address: 0x1b74a0
void fontSetAlpha(unsigned char alp)
{
	// Line 1528, Address: 0x1b74a0, Func Offset: 0
	// Line 1529, Address: 0x1b74ac, Func Offset: 0xc
	// Func End, Address: 0x1b74b4, Func Offset: 0x14
}

// 
// Start address: 0x1b74c0
void fontBarBlink()
{
	// Line 1559, Address: 0x1b74c0, Func Offset: 0
	// Line 1560, Address: 0x1b74c8, Func Offset: 0x8
	// Line 1561, Address: 0x1b750c, Func Offset: 0x4c
	// Line 1563, Address: 0x1b7520, Func Offset: 0x60
	// Func End, Address: 0x1b7530, Func Offset: 0x70
}

// 
// Start address: 0x1b7530
<unknown fundamental type (0xa510)>* fontFlush()
{
	WFONT_STREAM_DATA* wstream;
	unsigned int* pui;
	<unknown fundamental type (0xa510)>* ppos;
	<unknown fundamental type (0xa510)>* ptop;
	int hlnum;
	int bbnum;
	int base;
	WFONT_STREAM_DATA STR;
	FONT_STREAM_DATA* hline[16];
	FONT_STREAM_DATA* bbox[16];
	FONT_STREAM_DATA* fstream;
	unsigned long* pCur;
	unsigned long* pgtag2;
	unsigned long* pgtag;
	unsigned long* ptag;
	unsigned int a1;
	unsigned int alp;
	unsigned short v;
	unsigned short u;
	int sn;
	int gn2;
	int gn;
	int n;
	int z;
	int y;
	int x;
	int i;
	// Line 1570, Address: 0x1b7530, Func Offset: 0
	// Line 1581, Address: 0x1b755c, Func Offset: 0x2c
	// Line 1582, Address: 0x1b7560, Func Offset: 0x30
	// Line 1587, Address: 0x1b7564, Func Offset: 0x34
	// Line 1590, Address: 0x1b75c4, Func Offset: 0x94
	// Line 1592, Address: 0x1b75d8, Func Offset: 0xa8
	// Line 1593, Address: 0x1b75e0, Func Offset: 0xb0
	// Line 1594, Address: 0x1b75e4, Func Offset: 0xb4
	// Line 1595, Address: 0x1b75f0, Func Offset: 0xc0
	// Line 1597, Address: 0x1b7600, Func Offset: 0xd0
	// Line 1598, Address: 0x1b761c, Func Offset: 0xec
	// Line 1599, Address: 0x1b7624, Func Offset: 0xf4
	// Line 1600, Address: 0x1b7628, Func Offset: 0xf8
	// Line 1601, Address: 0x1b762c, Func Offset: 0xfc
	// Line 1602, Address: 0x1b7634, Func Offset: 0x104
	// Line 1604, Address: 0x1b7640, Func Offset: 0x110
	// Line 1605, Address: 0x1b764c, Func Offset: 0x11c
	// Line 1607, Address: 0x1b7658, Func Offset: 0x128
	// Line 1609, Address: 0x1b7680, Func Offset: 0x150
	// Line 1613, Address: 0x1b769c, Func Offset: 0x16c
	// Line 1615, Address: 0x1b76a4, Func Offset: 0x174
	// Line 1618, Address: 0x1b76b0, Func Offset: 0x180
	// Line 1619, Address: 0x1b76c4, Func Offset: 0x194
	// Line 1620, Address: 0x1b76dc, Func Offset: 0x1ac
	// Line 1621, Address: 0x1b76f0, Func Offset: 0x1c0
	// Line 1622, Address: 0x1b76f8, Func Offset: 0x1c8
	// Line 1623, Address: 0x1b7700, Func Offset: 0x1d0
	// Line 1625, Address: 0x1b7708, Func Offset: 0x1d8
	// Line 1629, Address: 0x1b7714, Func Offset: 0x1e4
	// Line 1631, Address: 0x1b7728, Func Offset: 0x1f8
	// Line 1632, Address: 0x1b7730, Func Offset: 0x200
	// Line 1633, Address: 0x1b7734, Func Offset: 0x204
	// Line 1634, Address: 0x1b773c, Func Offset: 0x20c
	// Line 1635, Address: 0x1b7748, Func Offset: 0x218
	// Line 1636, Address: 0x1b7750, Func Offset: 0x220
	// Line 1637, Address: 0x1b7758, Func Offset: 0x228
	// Line 1638, Address: 0x1b7760, Func Offset: 0x230
	// Line 1639, Address: 0x1b7768, Func Offset: 0x238
	// Line 1640, Address: 0x1b7770, Func Offset: 0x240
	// Line 1641, Address: 0x1b7774, Func Offset: 0x244
	// Line 1642, Address: 0x1b777c, Func Offset: 0x24c
	// Line 1643, Address: 0x1b7784, Func Offset: 0x254
	// Line 1644, Address: 0x1b778c, Func Offset: 0x25c
	// Line 1645, Address: 0x1b7790, Func Offset: 0x260
	// Line 1646, Address: 0x1b7798, Func Offset: 0x268
	// Line 1647, Address: 0x1b77b0, Func Offset: 0x280
	// Line 1648, Address: 0x1b77b8, Func Offset: 0x288
	// Line 1649, Address: 0x1b77c0, Func Offset: 0x290
	// Line 1653, Address: 0x1b77c8, Func Offset: 0x298
	// Line 1654, Address: 0x1b77dc, Func Offset: 0x2ac
	// Line 1655, Address: 0x1b77ec, Func Offset: 0x2bc
	// Line 1656, Address: 0x1b7808, Func Offset: 0x2d8
	// Line 1657, Address: 0x1b7818, Func Offset: 0x2e8
	// Line 1658, Address: 0x1b7830, Func Offset: 0x300
	// Line 1659, Address: 0x1b7838, Func Offset: 0x308
	// Line 1660, Address: 0x1b784c, Func Offset: 0x31c
	// Line 1661, Address: 0x1b7854, Func Offset: 0x324
	// Line 1662, Address: 0x1b7858, Func Offset: 0x328
	// Line 1663, Address: 0x1b7864, Func Offset: 0x334
	// Line 1664, Address: 0x1b7868, Func Offset: 0x338
	// Line 1665, Address: 0x1b786c, Func Offset: 0x33c
	// Line 1666, Address: 0x1b7884, Func Offset: 0x354
	// Line 1667, Address: 0x1b7890, Func Offset: 0x360
	// Line 1668, Address: 0x1b78a0, Func Offset: 0x370
	// Line 1669, Address: 0x1b78b4, Func Offset: 0x384
	// Line 1670, Address: 0x1b78c4, Func Offset: 0x394
	// Line 1671, Address: 0x1b78cc, Func Offset: 0x39c
	// Line 1672, Address: 0x1b78d4, Func Offset: 0x3a4
	// Line 1673, Address: 0x1b78e0, Func Offset: 0x3b0
	// Line 1674, Address: 0x1b78ec, Func Offset: 0x3bc
	// Line 1675, Address: 0x1b78f8, Func Offset: 0x3c8
	// Line 1676, Address: 0x1b7900, Func Offset: 0x3d0
	// Line 1677, Address: 0x1b7904, Func Offset: 0x3d4
	// Line 1678, Address: 0x1b7910, Func Offset: 0x3e0
	// Line 1680, Address: 0x1b791c, Func Offset: 0x3ec
	// Line 1681, Address: 0x1b7928, Func Offset: 0x3f8
	// Line 1682, Address: 0x1b7934, Func Offset: 0x404
	// Line 1683, Address: 0x1b7954, Func Offset: 0x424
	// Line 1684, Address: 0x1b7964, Func Offset: 0x434
	// Line 1686, Address: 0x1b7968, Func Offset: 0x438
	// Line 1687, Address: 0x1b7970, Func Offset: 0x440
	// Line 1688, Address: 0x1b7978, Func Offset: 0x448
	// Line 1689, Address: 0x1b7990, Func Offset: 0x460
	// Line 1690, Address: 0x1b79a4, Func Offset: 0x474
	// Line 1691, Address: 0x1b79b4, Func Offset: 0x484
	// Line 1693, Address: 0x1b79b8, Func Offset: 0x488
	// Line 1694, Address: 0x1b79c0, Func Offset: 0x490
	// Line 1695, Address: 0x1b79c4, Func Offset: 0x494
	// Line 1696, Address: 0x1b79d0, Func Offset: 0x4a0
	// Line 1697, Address: 0x1b79d8, Func Offset: 0x4a8
	// Line 1698, Address: 0x1b79e0, Func Offset: 0x4b0
	// Line 1699, Address: 0x1b79f4, Func Offset: 0x4c4
	// Line 1700, Address: 0x1b79fc, Func Offset: 0x4cc
	// Line 1701, Address: 0x1b7a00, Func Offset: 0x4d0
	// Line 1703, Address: 0x1b7a0c, Func Offset: 0x4dc
	// Line 1704, Address: 0x1b7a40, Func Offset: 0x510
	// Line 1705, Address: 0x1b7a4c, Func Offset: 0x51c
	// Line 1709, Address: 0x1b7a50, Func Offset: 0x520
	// Line 1710, Address: 0x1b7a54, Func Offset: 0x524
	// Line 1711, Address: 0x1b7a74, Func Offset: 0x544
	// Line 1713, Address: 0x1b7a7c, Func Offset: 0x54c
	// Line 1715, Address: 0x1b7a90, Func Offset: 0x560
	// Line 1716, Address: 0x1b7a98, Func Offset: 0x568
	// Line 1717, Address: 0x1b7aa8, Func Offset: 0x578
	// Line 1720, Address: 0x1b7ab0, Func Offset: 0x580
	// Line 1721, Address: 0x1b7ac0, Func Offset: 0x590
	// Line 1722, Address: 0x1b7ad0, Func Offset: 0x5a0
	// Line 1723, Address: 0x1b7aec, Func Offset: 0x5bc
	// Line 1724, Address: 0x1b7afc, Func Offset: 0x5cc
	// Line 1725, Address: 0x1b7b14, Func Offset: 0x5e4
	// Line 1726, Address: 0x1b7b1c, Func Offset: 0x5ec
	// Line 1727, Address: 0x1b7b30, Func Offset: 0x600
	// Line 1728, Address: 0x1b7b38, Func Offset: 0x608
	// Line 1729, Address: 0x1b7b3c, Func Offset: 0x60c
	// Line 1731, Address: 0x1b7b48, Func Offset: 0x618
	// Line 1732, Address: 0x1b7b60, Func Offset: 0x630
	// Line 1733, Address: 0x1b7b68, Func Offset: 0x638
	// Line 1734, Address: 0x1b7b74, Func Offset: 0x644
	// Line 1735, Address: 0x1b7b7c, Func Offset: 0x64c
	// Line 1736, Address: 0x1b7b84, Func Offset: 0x654
	// Line 1737, Address: 0x1b7b8c, Func Offset: 0x65c
	// Line 1738, Address: 0x1b7b94, Func Offset: 0x664
	// Line 1739, Address: 0x1b7b9c, Func Offset: 0x66c
	// Line 1740, Address: 0x1b7ba4, Func Offset: 0x674
	// Line 1741, Address: 0x1b7bb0, Func Offset: 0x680
	// Line 1743, Address: 0x1b7bbc, Func Offset: 0x68c
	// Line 1744, Address: 0x1b7bc8, Func Offset: 0x698
	// Line 1745, Address: 0x1b7bd4, Func Offset: 0x6a4
	// Line 1746, Address: 0x1b7bf4, Func Offset: 0x6c4
	// Line 1747, Address: 0x1b7c04, Func Offset: 0x6d4
	// Line 1749, Address: 0x1b7c08, Func Offset: 0x6d8
	// Line 1750, Address: 0x1b7c10, Func Offset: 0x6e0
	// Line 1751, Address: 0x1b7c18, Func Offset: 0x6e8
	// Line 1752, Address: 0x1b7c30, Func Offset: 0x700
	// Line 1753, Address: 0x1b7c44, Func Offset: 0x714
	// Line 1754, Address: 0x1b7c54, Func Offset: 0x724
	// Line 1755, Address: 0x1b7c5c, Func Offset: 0x72c
	// Line 1756, Address: 0x1b7c60, Func Offset: 0x730
	// Line 1757, Address: 0x1b7c70, Func Offset: 0x740
	// Line 1758, Address: 0x1b7c78, Func Offset: 0x748
	// Line 1759, Address: 0x1b7c80, Func Offset: 0x750
	// Line 1760, Address: 0x1b7c94, Func Offset: 0x764
	// Line 1761, Address: 0x1b7c9c, Func Offset: 0x76c
	// Line 1762, Address: 0x1b7ca0, Func Offset: 0x770
	// Line 1764, Address: 0x1b7cac, Func Offset: 0x77c
	// Line 1765, Address: 0x1b7cdc, Func Offset: 0x7ac
	// Line 1766, Address: 0x1b7ce8, Func Offset: 0x7b8
	// Line 1772, Address: 0x1b7cec, Func Offset: 0x7bc
	// Line 1773, Address: 0x1b7cf4, Func Offset: 0x7c4
	// Line 1774, Address: 0x1b7cf8, Func Offset: 0x7c8
	// Line 1775, Address: 0x1b7d08, Func Offset: 0x7d8
	// Line 1776, Address: 0x1b7d24, Func Offset: 0x7f4
	// Line 1777, Address: 0x1b7d30, Func Offset: 0x800
	// Line 1778, Address: 0x1b7d3c, Func Offset: 0x80c
	// Line 1779, Address: 0x1b7d44, Func Offset: 0x814
	// Line 1780, Address: 0x1b7d5c, Func Offset: 0x82c
	// Line 1781, Address: 0x1b7d70, Func Offset: 0x840
	// Line 1782, Address: 0x1b7d84, Func Offset: 0x854
	// Line 1783, Address: 0x1b7d94, Func Offset: 0x864
	// Line 1784, Address: 0x1b7da4, Func Offset: 0x874
	// Line 1785, Address: 0x1b7dac, Func Offset: 0x87c
	// Line 1786, Address: 0x1b7dcc, Func Offset: 0x89c
	// Line 1787, Address: 0x1b7df8, Func Offset: 0x8c8
	// Line 1788, Address: 0x1b7e04, Func Offset: 0x8d4
	// Line 1789, Address: 0x1b7e20, Func Offset: 0x8f0
	// Line 1790, Address: 0x1b7e30, Func Offset: 0x900
	// Line 1791, Address: 0x1b7e3c, Func Offset: 0x90c
	// Line 1792, Address: 0x1b7e44, Func Offset: 0x914
	// Line 1793, Address: 0x1b7e50, Func Offset: 0x920
	// Line 1794, Address: 0x1b7e5c, Func Offset: 0x92c
	// Line 1795, Address: 0x1b7e84, Func Offset: 0x954
	// Line 1796, Address: 0x1b7e8c, Func Offset: 0x95c
	// Line 1797, Address: 0x1b7e94, Func Offset: 0x964
	// Line 1798, Address: 0x1b7e98, Func Offset: 0x968
	// Line 1799, Address: 0x1b7eb0, Func Offset: 0x980
	// Line 1800, Address: 0x1b7eb4, Func Offset: 0x984
	// Line 1801, Address: 0x1b7ed4, Func Offset: 0x9a4
	// Line 1802, Address: 0x1b7ee4, Func Offset: 0x9b4
	// Line 1803, Address: 0x1b7f20, Func Offset: 0x9f0
	// Line 1808, Address: 0x1b7f34, Func Offset: 0xa04
	// Line 1809, Address: 0x1b7f3c, Func Offset: 0xa0c
	// Line 1810, Address: 0x1b7f40, Func Offset: 0xa10
	// Line 1811, Address: 0x1b7f50, Func Offset: 0xa20
	// Line 1812, Address: 0x1b7f60, Func Offset: 0xa30
	// Line 1813, Address: 0x1b7f6c, Func Offset: 0xa3c
	// Line 1814, Address: 0x1b7f78, Func Offset: 0xa48
	// Line 1815, Address: 0x1b7f80, Func Offset: 0xa50
	// Line 1816, Address: 0x1b7f94, Func Offset: 0xa64
	// Line 1818, Address: 0x1b7fa8, Func Offset: 0xa78
	// Line 1819, Address: 0x1b7fb8, Func Offset: 0xa88
	// Line 1820, Address: 0x1b7fc8, Func Offset: 0xa98
	// Line 1821, Address: 0x1b7fd4, Func Offset: 0xaa4
	// Line 1822, Address: 0x1b7fdc, Func Offset: 0xaac
	// Line 1823, Address: 0x1b7fec, Func Offset: 0xabc
	// Line 1824, Address: 0x1b8018, Func Offset: 0xae8
	// Line 1825, Address: 0x1b8020, Func Offset: 0xaf0
	// Line 1827, Address: 0x1b8028, Func Offset: 0xaf8
	// Line 1828, Address: 0x1b805c, Func Offset: 0xb2c
	// Line 1829, Address: 0x1b8088, Func Offset: 0xb58
	// Line 1830, Address: 0x1b80a8, Func Offset: 0xb78
	// Line 1831, Address: 0x1b80c8, Func Offset: 0xb98
	// Line 1832, Address: 0x1b80d8, Func Offset: 0xba8
	// Line 1833, Address: 0x1b80ec, Func Offset: 0xbbc
	// Line 1834, Address: 0x1b8134, Func Offset: 0xc04
	// Line 1837, Address: 0x1b8148, Func Offset: 0xc18
	// Line 1838, Address: 0x1b8150, Func Offset: 0xc20
	// Line 1839, Address: 0x1b8158, Func Offset: 0xc28
	// Line 1840, Address: 0x1b816c, Func Offset: 0xc3c
	// Line 1843, Address: 0x1b8174, Func Offset: 0xc44
	// Line 1844, Address: 0x1b8190, Func Offset: 0xc60
	// Line 1845, Address: 0x1b819c, Func Offset: 0xc6c
	// Line 1847, Address: 0x1b81b0, Func Offset: 0xc80
	// Line 1848, Address: 0x1b81c0, Func Offset: 0xc90
	// Line 1849, Address: 0x1b81e8, Func Offset: 0xcb8
	// Line 1850, Address: 0x1b8210, Func Offset: 0xce0
	// Line 1851, Address: 0x1b8218, Func Offset: 0xce8
	// Line 1852, Address: 0x1b8220, Func Offset: 0xcf0
	// Func End, Address: 0x1b8254, Func Offset: 0xd24
}

// 
// Start address: 0x1b8260
<unknown fundamental type (0xa510)>* fontFlushNoSPR()
{
	WFONT_STREAM_DATA* wstream;
	unsigned long* pgtag2;
	unsigned int* pui;
	<unknown fundamental type (0xa510)>* ppos;
	<unknown fundamental type (0xa510)>* ptop;
	int hlnum;
	int bbnum;
	WFONT_STREAM_DATA STR;
	FONT_STREAM_DATA* hline[16];
	FONT_STREAM_DATA* bbox[16];
	FONT_STREAM_DATA* fstream;
	unsigned long* pCur;
	unsigned long* pgtag;
	unsigned long* ptag;
	unsigned int a1;
	unsigned int alp;
	unsigned short v;
	unsigned short u;
	int sn;
	int gn;
	int n;
	int z;
	int y;
	int x;
	int i;
	// Line 1859, Address: 0x1b8260, Func Offset: 0
	// Line 1869, Address: 0x1b828c, Func Offset: 0x2c
	// Line 1870, Address: 0x1b8290, Func Offset: 0x30
	// Line 1875, Address: 0x1b8294, Func Offset: 0x34
	// Line 1878, Address: 0x1b82f4, Func Offset: 0x94
	// Line 1880, Address: 0x1b8308, Func Offset: 0xa8
	// Line 1881, Address: 0x1b8310, Func Offset: 0xb0
	// Line 1882, Address: 0x1b8314, Func Offset: 0xb4
	// Line 1883, Address: 0x1b8320, Func Offset: 0xc0
	// Line 1885, Address: 0x1b8330, Func Offset: 0xd0
	// Line 1886, Address: 0x1b8348, Func Offset: 0xe8
	// Line 1888, Address: 0x1b8350, Func Offset: 0xf0
	// Line 1889, Address: 0x1b8358, Func Offset: 0xf8
	// Line 1894, Address: 0x1b8360, Func Offset: 0x100
	// Line 1896, Address: 0x1b8388, Func Offset: 0x128
	// Line 1900, Address: 0x1b83a4, Func Offset: 0x144
	// Line 1902, Address: 0x1b83a8, Func Offset: 0x148
	// Line 1905, Address: 0x1b83ac, Func Offset: 0x14c
	// Line 1907, Address: 0x1b83c0, Func Offset: 0x160
	// Line 1908, Address: 0x1b83c8, Func Offset: 0x168
	// Line 1909, Address: 0x1b83cc, Func Offset: 0x16c
	// Line 1910, Address: 0x1b83d4, Func Offset: 0x174
	// Line 1911, Address: 0x1b83e0, Func Offset: 0x180
	// Line 1912, Address: 0x1b83e8, Func Offset: 0x188
	// Line 1913, Address: 0x1b83f0, Func Offset: 0x190
	// Line 1914, Address: 0x1b83f8, Func Offset: 0x198
	// Line 1915, Address: 0x1b8400, Func Offset: 0x1a0
	// Line 1916, Address: 0x1b8408, Func Offset: 0x1a8
	// Line 1917, Address: 0x1b840c, Func Offset: 0x1ac
	// Line 1918, Address: 0x1b8414, Func Offset: 0x1b4
	// Line 1919, Address: 0x1b841c, Func Offset: 0x1bc
	// Line 1920, Address: 0x1b8424, Func Offset: 0x1c4
	// Line 1921, Address: 0x1b8428, Func Offset: 0x1c8
	// Line 1922, Address: 0x1b8430, Func Offset: 0x1d0
	// Line 1923, Address: 0x1b8448, Func Offset: 0x1e8
	// Line 1924, Address: 0x1b8450, Func Offset: 0x1f0
	// Line 1925, Address: 0x1b8458, Func Offset: 0x1f8
	// Line 1929, Address: 0x1b8460, Func Offset: 0x200
	// Line 1930, Address: 0x1b8468, Func Offset: 0x208
	// Line 1931, Address: 0x1b8474, Func Offset: 0x214
	// Line 1932, Address: 0x1b8490, Func Offset: 0x230
	// Line 1933, Address: 0x1b84a0, Func Offset: 0x240
	// Line 1934, Address: 0x1b84a4, Func Offset: 0x244
	// Line 1935, Address: 0x1b84bc, Func Offset: 0x25c
	// Line 1936, Address: 0x1b84c8, Func Offset: 0x268
	// Line 1937, Address: 0x1b84d8, Func Offset: 0x278
	// Line 1938, Address: 0x1b84ec, Func Offset: 0x28c
	// Line 1939, Address: 0x1b84fc, Func Offset: 0x29c
	// Line 1940, Address: 0x1b8504, Func Offset: 0x2a4
	// Line 1941, Address: 0x1b850c, Func Offset: 0x2ac
	// Line 1942, Address: 0x1b8518, Func Offset: 0x2b8
	// Line 1943, Address: 0x1b8524, Func Offset: 0x2c4
	// Line 1944, Address: 0x1b8530, Func Offset: 0x2d0
	// Line 1945, Address: 0x1b8538, Func Offset: 0x2d8
	// Line 1946, Address: 0x1b853c, Func Offset: 0x2dc
	// Line 1947, Address: 0x1b8548, Func Offset: 0x2e8
	// Line 1949, Address: 0x1b8554, Func Offset: 0x2f4
	// Line 1950, Address: 0x1b8560, Func Offset: 0x300
	// Line 1951, Address: 0x1b856c, Func Offset: 0x30c
	// Line 1955, Address: 0x1b858c, Func Offset: 0x32c
	// Line 1957, Address: 0x1b859c, Func Offset: 0x33c
	// Line 1959, Address: 0x1b85a0, Func Offset: 0x340
	// Line 1960, Address: 0x1b85a8, Func Offset: 0x348
	// Line 1961, Address: 0x1b85b0, Func Offset: 0x350
	// Line 1962, Address: 0x1b85c8, Func Offset: 0x368
	// Line 1966, Address: 0x1b85dc, Func Offset: 0x37c
	// Line 1968, Address: 0x1b85ec, Func Offset: 0x38c
	// Line 1970, Address: 0x1b85f0, Func Offset: 0x390
	// Line 1971, Address: 0x1b85f8, Func Offset: 0x398
	// Line 1972, Address: 0x1b85fc, Func Offset: 0x39c
	// Line 1974, Address: 0x1b8608, Func Offset: 0x3a8
	// Line 1975, Address: 0x1b863c, Func Offset: 0x3dc
	// Line 1977, Address: 0x1b8648, Func Offset: 0x3e8
	// Line 1981, Address: 0x1b864c, Func Offset: 0x3ec
	// Line 1983, Address: 0x1b866c, Func Offset: 0x40c
	// Line 1985, Address: 0x1b8674, Func Offset: 0x414
	// Line 1987, Address: 0x1b8688, Func Offset: 0x428
	// Line 1988, Address: 0x1b8690, Func Offset: 0x430
	// Line 1989, Address: 0x1b86a0, Func Offset: 0x440
	// Line 1992, Address: 0x1b86a8, Func Offset: 0x448
	// Line 1993, Address: 0x1b86b0, Func Offset: 0x450
	// Line 1994, Address: 0x1b86c0, Func Offset: 0x460
	// Line 1995, Address: 0x1b86d8, Func Offset: 0x478
	// Line 1996, Address: 0x1b86f0, Func Offset: 0x490
	// Line 1997, Address: 0x1b8700, Func Offset: 0x4a0
	// Line 1998, Address: 0x1b8708, Func Offset: 0x4a8
	// Line 1999, Address: 0x1b8714, Func Offset: 0x4b4
	// Line 2000, Address: 0x1b871c, Func Offset: 0x4bc
	// Line 2001, Address: 0x1b8724, Func Offset: 0x4c4
	// Line 2002, Address: 0x1b872c, Func Offset: 0x4cc
	// Line 2003, Address: 0x1b8734, Func Offset: 0x4d4
	// Line 2004, Address: 0x1b873c, Func Offset: 0x4dc
	// Line 2005, Address: 0x1b8744, Func Offset: 0x4e4
	// Line 2006, Address: 0x1b8750, Func Offset: 0x4f0
	// Line 2008, Address: 0x1b875c, Func Offset: 0x4fc
	// Line 2009, Address: 0x1b8768, Func Offset: 0x508
	// Line 2010, Address: 0x1b8774, Func Offset: 0x514
	// Line 2014, Address: 0x1b8794, Func Offset: 0x534
	// Line 2016, Address: 0x1b87a4, Func Offset: 0x544
	// Line 2018, Address: 0x1b87a8, Func Offset: 0x548
	// Line 2019, Address: 0x1b87b0, Func Offset: 0x550
	// Line 2020, Address: 0x1b87b8, Func Offset: 0x558
	// Line 2021, Address: 0x1b87d0, Func Offset: 0x570
	// Line 2025, Address: 0x1b87e4, Func Offset: 0x584
	// Line 2027, Address: 0x1b87f4, Func Offset: 0x594
	// Line 2028, Address: 0x1b87f8, Func Offset: 0x598
	// Line 2029, Address: 0x1b8808, Func Offset: 0x5a8
	// Line 2030, Address: 0x1b8810, Func Offset: 0x5b0
	// Line 2031, Address: 0x1b883c, Func Offset: 0x5dc
	// Line 2032, Address: 0x1b8844, Func Offset: 0x5e4
	// Line 2033, Address: 0x1b8848, Func Offset: 0x5e8
	// Line 2034, Address: 0x1b8850, Func Offset: 0x5f0
	// Line 2040, Address: 0x1b886c, Func Offset: 0x60c
	// Line 2041, Address: 0x1b8874, Func Offset: 0x614
	// Line 2042, Address: 0x1b8878, Func Offset: 0x618
	// Line 2043, Address: 0x1b8888, Func Offset: 0x628
	// Line 2044, Address: 0x1b88a4, Func Offset: 0x644
	// Line 2045, Address: 0x1b88b0, Func Offset: 0x650
	// Line 2046, Address: 0x1b88bc, Func Offset: 0x65c
	// Line 2047, Address: 0x1b88c4, Func Offset: 0x664
	// Line 2048, Address: 0x1b88dc, Func Offset: 0x67c
	// Line 2053, Address: 0x1b88f0, Func Offset: 0x690
	// Line 2055, Address: 0x1b8904, Func Offset: 0x6a4
	// Line 2059, Address: 0x1b8914, Func Offset: 0x6b4
	// Line 2061, Address: 0x1b8924, Func Offset: 0x6c4
	// Line 2062, Address: 0x1b892c, Func Offset: 0x6cc
	// Line 2063, Address: 0x1b894c, Func Offset: 0x6ec
	// Line 2064, Address: 0x1b8978, Func Offset: 0x718
	// Line 2065, Address: 0x1b8984, Func Offset: 0x724
	// Line 2066, Address: 0x1b89a0, Func Offset: 0x740
	// Line 2067, Address: 0x1b89b0, Func Offset: 0x750
	// Line 2068, Address: 0x1b89bc, Func Offset: 0x75c
	// Line 2069, Address: 0x1b89c4, Func Offset: 0x764
	// Line 2070, Address: 0x1b89d0, Func Offset: 0x770
	// Line 2071, Address: 0x1b89dc, Func Offset: 0x77c
	// Line 2072, Address: 0x1b8a04, Func Offset: 0x7a4
	// Line 2073, Address: 0x1b8a0c, Func Offset: 0x7ac
	// Line 2074, Address: 0x1b8a14, Func Offset: 0x7b4
	// Line 2075, Address: 0x1b8a18, Func Offset: 0x7b8
	// Line 2076, Address: 0x1b8a30, Func Offset: 0x7d0
	// Line 2077, Address: 0x1b8a34, Func Offset: 0x7d4
	// Line 2078, Address: 0x1b8a54, Func Offset: 0x7f4
	// Line 2079, Address: 0x1b8a64, Func Offset: 0x804
	// Line 2080, Address: 0x1b8aa0, Func Offset: 0x840
	// Line 2085, Address: 0x1b8ab4, Func Offset: 0x854
	// Line 2086, Address: 0x1b8abc, Func Offset: 0x85c
	// Line 2087, Address: 0x1b8ac0, Func Offset: 0x860
	// Line 2088, Address: 0x1b8ad0, Func Offset: 0x870
	// Line 2089, Address: 0x1b8ae0, Func Offset: 0x880
	// Line 2090, Address: 0x1b8aec, Func Offset: 0x88c
	// Line 2091, Address: 0x1b8af8, Func Offset: 0x898
	// Line 2092, Address: 0x1b8b00, Func Offset: 0x8a0
	// Line 2093, Address: 0x1b8b14, Func Offset: 0x8b4
	// Line 2095, Address: 0x1b8b28, Func Offset: 0x8c8
	// Line 2100, Address: 0x1b8b38, Func Offset: 0x8d8
	// Line 2102, Address: 0x1b8b4c, Func Offset: 0x8ec
	// Line 2103, Address: 0x1b8b58, Func Offset: 0x8f8
	// Line 2104, Address: 0x1b8b60, Func Offset: 0x900
	// Line 2105, Address: 0x1b8b70, Func Offset: 0x910
	// Line 2106, Address: 0x1b8b9c, Func Offset: 0x93c
	// Line 2107, Address: 0x1b8ba4, Func Offset: 0x944
	// Line 2108, Address: 0x1b8bac, Func Offset: 0x94c
	// Line 2109, Address: 0x1b8bb0, Func Offset: 0x950
	// Line 2110, Address: 0x1b8be4, Func Offset: 0x984
	// Line 2111, Address: 0x1b8c10, Func Offset: 0x9b0
	// Line 2112, Address: 0x1b8c30, Func Offset: 0x9d0
	// Line 2113, Address: 0x1b8c50, Func Offset: 0x9f0
	// Line 2114, Address: 0x1b8c60, Func Offset: 0xa00
	// Line 2115, Address: 0x1b8c74, Func Offset: 0xa14
	// Line 2116, Address: 0x1b8cbc, Func Offset: 0xa5c
	// Line 2121, Address: 0x1b8cd0, Func Offset: 0xa70
	// Line 2122, Address: 0x1b8ce8, Func Offset: 0xa88
	// Line 2124, Address: 0x1b8cf8, Func Offset: 0xa98
	// Line 2125, Address: 0x1b8d04, Func Offset: 0xaa4
	// Line 2126, Address: 0x1b8d2c, Func Offset: 0xacc
	// Line 2127, Address: 0x1b8d34, Func Offset: 0xad4
	// Line 2128, Address: 0x1b8d3c, Func Offset: 0xadc
	// Func End, Address: 0x1b8d70, Func Offset: 0xb10
}

// 
// Start address: 0x1b8d70
void fontPut(WFONT_STREAM_DATA* pstr, int z)
{
	// Line 2168, Address: 0x1b8d70, Func Offset: 0
	// Line 2179, Address: 0x1b8d78, Func Offset: 0x8
	// Line 2180, Address: 0x1b8d7c, Func Offset: 0xc
	// Line 2181, Address: 0x1b8d80, Func Offset: 0x10
	// Line 2182, Address: 0x1b8d84, Func Offset: 0x14
	// Line 2183, Address: 0x1b8d88, Func Offset: 0x18
	// Line 2184, Address: 0x1b8d8c, Func Offset: 0x1c
	// Line 2185, Address: 0x1b8d90, Func Offset: 0x20
	// Line 2186, Address: 0x1b8d94, Func Offset: 0x24
	// Line 2187, Address: 0x1b8d98, Func Offset: 0x28
	// Line 2188, Address: 0x1b8d9c, Func Offset: 0x2c
	// Line 2189, Address: 0x1b8da0, Func Offset: 0x30
	// Line 2190, Address: 0x1b8da4, Func Offset: 0x34
	// Line 2191, Address: 0x1b8da8, Func Offset: 0x38
	// Line 2192, Address: 0x1b8dac, Func Offset: 0x3c
	// Line 2193, Address: 0x1b8db0, Func Offset: 0x40
	// Line 2195, Address: 0x1b8db8, Func Offset: 0x48
	// Line 2197, Address: 0x1b8dc0, Func Offset: 0x50
	// Line 2199, Address: 0x1b8dc8, Func Offset: 0x58
	// Line 2201, Address: 0x1b8dd0, Func Offset: 0x60
	// Line 2202, Address: 0x1b8dd4, Func Offset: 0x64
	// Line 2203, Address: 0x1b8dd8, Func Offset: 0x68
	// Line 2204, Address: 0x1b8ddc, Func Offset: 0x6c
	// Line 2205, Address: 0x1b8de0, Func Offset: 0x70
	// Line 2206, Address: 0x1b8de4, Func Offset: 0x74
	// Line 2207, Address: 0x1b8de8, Func Offset: 0x78
	// Line 2208, Address: 0x1b8dec, Func Offset: 0x7c
	// Line 2209, Address: 0x1b8df0, Func Offset: 0x80
	// Line 2210, Address: 0x1b8df4, Func Offset: 0x84
	// Line 2211, Address: 0x1b8df8, Func Offset: 0x88
	// Line 2212, Address: 0x1b8dfc, Func Offset: 0x8c
	// Line 2213, Address: 0x1b8e00, Func Offset: 0x90
	// Line 2214, Address: 0x1b8e04, Func Offset: 0x94
	// Line 2215, Address: 0x1b8e08, Func Offset: 0x98
	// Line 2216, Address: 0x1b8e0c, Func Offset: 0x9c
	// Line 2217, Address: 0x1b8e10, Func Offset: 0xa0
	// Line 2218, Address: 0x1b8e14, Func Offset: 0xa4
	// Line 2219, Address: 0x1b8e18, Func Offset: 0xa8
	// Line 2220, Address: 0x1b8e1c, Func Offset: 0xac
	// Line 2221, Address: 0x1b8e20, Func Offset: 0xb0
	// Line 2222, Address: 0x1b8e24, Func Offset: 0xb4
	// Line 2223, Address: 0x1b8e28, Func Offset: 0xb8
	// Line 2224, Address: 0x1b8e2c, Func Offset: 0xbc
	// Line 2225, Address: 0x1b8e30, Func Offset: 0xc0
	// Line 2226, Address: 0x1b8e34, Func Offset: 0xc4
	// Line 2227, Address: 0x1b8e38, Func Offset: 0xc8
	// Line 2228, Address: 0x1b8e3c, Func Offset: 0xcc
	// Line 2229, Address: 0x1b8e40, Func Offset: 0xd0
	// Line 2230, Address: 0x1b8e44, Func Offset: 0xd4
	// Line 2231, Address: 0x1b8e48, Func Offset: 0xd8
	// Line 2232, Address: 0x1b8e4c, Func Offset: 0xdc
	// Line 2233, Address: 0x1b8e50, Func Offset: 0xe0
	// Line 2234, Address: 0x1b8e54, Func Offset: 0xe4
	// Line 2235, Address: 0x1b8e58, Func Offset: 0xe8
	// Line 2236, Address: 0x1b8e5c, Func Offset: 0xec
	// Line 2242, Address: 0x1b8e60, Func Offset: 0xf0
	// Func End, Address: 0x1b8e68, Func Offset: 0xf8
}

// 
// Start address: 0x1b8e70
void fontPutSelectBar()
{
	unsigned long* pCur;
	int a;
	int z;
	int y1;
	int x1;
	int y0;
	int x0;
	// Line 2379, Address: 0x1b8e70, Func Offset: 0
	// Line 2381, Address: 0x1b8e90, Func Offset: 0x20
	// Line 2382, Address: 0x1b8e98, Func Offset: 0x28
	// Line 2383, Address: 0x1b8eb0, Func Offset: 0x40
	// Line 2384, Address: 0x1b8ec0, Func Offset: 0x50
	// Line 2385, Address: 0x1b8ef0, Func Offset: 0x80
	// Line 2386, Address: 0x1b8f0c, Func Offset: 0x9c
	// Line 2387, Address: 0x1b8f14, Func Offset: 0xa4
	// Line 2388, Address: 0x1b8f1c, Func Offset: 0xac
	// Line 2389, Address: 0x1b8f40, Func Offset: 0xd0
	// Line 2390, Address: 0x1b8f6c, Func Offset: 0xfc
	// Line 2391, Address: 0x1b8f74, Func Offset: 0x104
	// Line 2397, Address: 0x1b8f98, Func Offset: 0x128
	// Line 2400, Address: 0x1b8fb0, Func Offset: 0x140
	// Line 2401, Address: 0x1b8fbc, Func Offset: 0x14c
	// Line 2402, Address: 0x1b8fc8, Func Offset: 0x158
	// Line 2403, Address: 0x1b8fd4, Func Offset: 0x164
	// Line 2404, Address: 0x1b8fe0, Func Offset: 0x170
	// Line 2405, Address: 0x1b8fec, Func Offset: 0x17c
	// Line 2406, Address: 0x1b8ff4, Func Offset: 0x184
	// Line 2417, Address: 0x1b9000, Func Offset: 0x190
	// Line 2418, Address: 0x1b9014, Func Offset: 0x1a4
	// Line 2419, Address: 0x1b9020, Func Offset: 0x1b0
	// Line 2420, Address: 0x1b9044, Func Offset: 0x1d4
	// Line 2421, Address: 0x1b9054, Func Offset: 0x1e4
	// Line 2422, Address: 0x1b9064, Func Offset: 0x1f4
	// Line 2424, Address: 0x1b906c, Func Offset: 0x1fc
	// Line 2425, Address: 0x1b9074, Func Offset: 0x204
	// Func End, Address: 0x1b909c, Func Offset: 0x22c
}

// 
// Start address: 0x1b90a0
void fontPutYesNoSelectBar()
{
	unsigned long* pCur;
	int a;
	int z;
	int y1;
	int x1;
	int y0;
	int x0;
	// Line 2430, Address: 0x1b90a0, Func Offset: 0
	// Line 2432, Address: 0x1b90c0, Func Offset: 0x20
	// Line 2433, Address: 0x1b90c8, Func Offset: 0x28
	// Line 2434, Address: 0x1b90d8, Func Offset: 0x38
	// Line 2435, Address: 0x1b90dc, Func Offset: 0x3c
	// Line 2436, Address: 0x1b90e4, Func Offset: 0x44
	// Line 2438, Address: 0x1b90e8, Func Offset: 0x48
	// Line 2439, Address: 0x1b90f4, Func Offset: 0x54
	// Line 2440, Address: 0x1b911c, Func Offset: 0x7c
	// Line 2441, Address: 0x1b9144, Func Offset: 0xa4
	// Line 2442, Address: 0x1b9160, Func Offset: 0xc0
	// Line 2443, Address: 0x1b9174, Func Offset: 0xd4
	// Line 2444, Address: 0x1b917c, Func Offset: 0xdc
	// Line 2445, Address: 0x1b9184, Func Offset: 0xe4
	// Line 2446, Address: 0x1b91a8, Func Offset: 0x108
	// Line 2447, Address: 0x1b91d4, Func Offset: 0x134
	// Line 2448, Address: 0x1b91dc, Func Offset: 0x13c
	// Line 2454, Address: 0x1b9200, Func Offset: 0x160
	// Line 2457, Address: 0x1b9218, Func Offset: 0x178
	// Line 2458, Address: 0x1b9224, Func Offset: 0x184
	// Line 2459, Address: 0x1b9230, Func Offset: 0x190
	// Line 2460, Address: 0x1b923c, Func Offset: 0x19c
	// Line 2461, Address: 0x1b9248, Func Offset: 0x1a8
	// Line 2462, Address: 0x1b9254, Func Offset: 0x1b4
	// Line 2463, Address: 0x1b925c, Func Offset: 0x1bc
	// Line 2474, Address: 0x1b9268, Func Offset: 0x1c8
	// Line 2475, Address: 0x1b927c, Func Offset: 0x1dc
	// Line 2476, Address: 0x1b9288, Func Offset: 0x1e8
	// Line 2477, Address: 0x1b92ac, Func Offset: 0x20c
	// Line 2478, Address: 0x1b92bc, Func Offset: 0x21c
	// Line 2479, Address: 0x1b92cc, Func Offset: 0x22c
	// Line 2481, Address: 0x1b92d4, Func Offset: 0x234
	// Line 2482, Address: 0x1b92dc, Func Offset: 0x23c
	// Func End, Address: 0x1b9304, Func Offset: 0x264
}

// 
// Start address: 0x1b9310
void* fontTexLoad(int texadr, int clutadr)
{
	// Line 2491, Address: 0x1b9310, Func Offset: 0
	// Line 2492, Address: 0x1b9330, Func Offset: 0x20
	// Line 2493, Address: 0x1b9350, Func Offset: 0x40
	// Line 2495, Address: 0x1b9380, Func Offset: 0x70
	// Line 2496, Address: 0x1b9388, Func Offset: 0x78
	// Func End, Address: 0x1b9390, Func Offset: 0x80
}

// 
// Start address: 0x1b9390
void* fontAfterEnv()
{
	// Line 2502, Address: 0x1b9390, Func Offset: 0
	// Line 2503, Address: 0x1b9398, Func Offset: 0x8
	// Func End, Address: 0x1b93a0, Func Offset: 0x10
}

// 
// Start address: 0x1b93a0
void fontEachTurn()
{
	// Line 2508, Address: 0x1b93a0, Func Offset: 0
	// Line 2509, Address: 0x1b93a8, Func Offset: 0x8
	// Line 2511, Address: 0x1b93b8, Func Offset: 0x18
	// Line 2512, Address: 0x1b93c8, Func Offset: 0x28
	// Line 2513, Address: 0x1b93d0, Func Offset: 0x30
	// Line 2515, Address: 0x1b93d8, Func Offset: 0x38
	// Line 2516, Address: 0x1b93ec, Func Offset: 0x4c
	// Line 2521, Address: 0x1b9414, Func Offset: 0x74
	// Line 2522, Address: 0x1b9438, Func Offset: 0x98
	// Line 2523, Address: 0x1b9450, Func Offset: 0xb0
	// Line 2524, Address: 0x1b9464, Func Offset: 0xc4
	// Line 2525, Address: 0x1b9478, Func Offset: 0xd8
	// Line 2526, Address: 0x1b9498, Func Offset: 0xf8
	// Line 2527, Address: 0x1b94b8, Func Offset: 0x118
	// Line 2528, Address: 0x1b94c0, Func Offset: 0x120
	// Line 2529, Address: 0x1b94e0, Func Offset: 0x140
	// Line 2531, Address: 0x1b9500, Func Offset: 0x160
	// Line 2532, Address: 0x1b9524, Func Offset: 0x184
	// Line 2535, Address: 0x1b9548, Func Offset: 0x1a8
	// Line 2536, Address: 0x1b956c, Func Offset: 0x1cc
	// Line 2537, Address: 0x1b9578, Func Offset: 0x1d8
	// Line 2538, Address: 0x1b95a8, Func Offset: 0x208
	// Line 2540, Address: 0x1b95cc, Func Offset: 0x22c
	// Line 2541, Address: 0x1b95dc, Func Offset: 0x23c
	// Line 2545, Address: 0x1b95f0, Func Offset: 0x250
	// Line 2546, Address: 0x1b95f8, Func Offset: 0x258
	// Line 2547, Address: 0x1b9600, Func Offset: 0x260
	// Line 2548, Address: 0x1b9608, Func Offset: 0x268
	// Line 2549, Address: 0x1b9610, Func Offset: 0x270
	// Line 2553, Address: 0x1b9618, Func Offset: 0x278
	// Func End, Address: 0x1b9628, Func Offset: 0x288
}

// 
// Start address: 0x1b9630
void fontPreload()
{
	int n;
	unsigned char* str_c;
	unsigned short* str;
	unsigned short c;
	// Line 2558, Address: 0x1b9630, Func Offset: 0
	// Line 2561, Address: 0x1b9644, Func Offset: 0x14
	// Line 2562, Address: 0x1b9648, Func Offset: 0x18
	// Line 2563, Address: 0x1b9660, Func Offset: 0x30
	// Line 2566, Address: 0x1b9678, Func Offset: 0x48
	// Line 2568, Address: 0x1b9680, Func Offset: 0x50
	// Line 2570, Address: 0x1b9698, Func Offset: 0x68
	// Line 2571, Address: 0x1b96a0, Func Offset: 0x70
	// Line 2572, Address: 0x1b9704, Func Offset: 0xd4
	// Line 2573, Address: 0x1b9718, Func Offset: 0xe8
	// Line 2574, Address: 0x1b9730, Func Offset: 0x100
	// Line 2575, Address: 0x1b9738, Func Offset: 0x108
	// Line 2576, Address: 0x1b974c, Func Offset: 0x11c
	// Line 2577, Address: 0x1b975c, Func Offset: 0x12c
	// Line 2578, Address: 0x1b9770, Func Offset: 0x140
	// Line 2579, Address: 0x1b9784, Func Offset: 0x154
	// Line 2580, Address: 0x1b9788, Func Offset: 0x158
	// Line 2581, Address: 0x1b979c, Func Offset: 0x16c
	// Line 2582, Address: 0x1b97a4, Func Offset: 0x174
	// Line 2583, Address: 0x1b97b0, Func Offset: 0x180
	// Line 2584, Address: 0x1b97c8, Func Offset: 0x198
	// Line 2585, Address: 0x1b97cc, Func Offset: 0x19c
	// Line 2586, Address: 0x1b97d0, Func Offset: 0x1a0
	// Line 2587, Address: 0x1b97d8, Func Offset: 0x1a8
	// Line 2588, Address: 0x1b97f0, Func Offset: 0x1c0
	// Line 2589, Address: 0x1b9814, Func Offset: 0x1e4
	// Line 2594, Address: 0x1b981c, Func Offset: 0x1ec
	// Line 2595, Address: 0x1b9824, Func Offset: 0x1f4
	// Line 2597, Address: 0x1b9828, Func Offset: 0x1f8
	// Line 2598, Address: 0x1b9830, Func Offset: 0x200
	// Func End, Address: 0x1b984c, Func Offset: 0x21c
}

// 
// Start address: 0x1b9850
void fontSetMes(int num, unsigned short* str)
{
	// Line 2616, Address: 0x1b9850, Func Offset: 0
	// Line 2618, Address: 0x1b9860, Func Offset: 0x10
	// Line 2619, Address: 0x1b9874, Func Offset: 0x24
	// Line 2620, Address: 0x1b9884, Func Offset: 0x34
	// Line 2623, Address: 0x1b9888, Func Offset: 0x38
	// Line 2624, Address: 0x1b98b0, Func Offset: 0x60
	// Func End, Address: 0x1b98c4, Func Offset: 0x74
}

// 
// Start address: 0x1b98d0
void fontCopyMessage(unsigned short* pto, unsigned short* pfrom)
{
	unsigned short n;
	// Line 2634, Address: 0x1b98d0, Func Offset: 0
	// Line 2635, Address: 0x1b98d8, Func Offset: 0x8
	// Line 2636, Address: 0x1b98e0, Func Offset: 0x10
	// Line 2637, Address: 0x1b98ec, Func Offset: 0x1c
	// Func End, Address: 0x1b98f4, Func Offset: 0x24
}

// 
// Start address: 0x1b9900
void fontPushButton()
{
	// Line 2643, Address: 0x1b9900, Func Offset: 0
	// Line 2644, Address: 0x1b9924, Func Offset: 0x24
	// Line 2645, Address: 0x1b9930, Func Offset: 0x30
	// Line 2647, Address: 0x1b9938, Func Offset: 0x38
	// Line 2649, Address: 0x1b9964, Func Offset: 0x64
	// Line 2654, Address: 0x1b996c, Func Offset: 0x6c
	// Func End, Address: 0x1b9974, Func Offset: 0x74
}

// 
// Start address: 0x1b9980
void fontPushButton2()
{
	// Line 2661, Address: 0x1b9980, Func Offset: 0
	// Line 2663, Address: 0x1b99ac, Func Offset: 0x2c
	// Line 2668, Address: 0x1b99b4, Func Offset: 0x34
	// Func End, Address: 0x1b99bc, Func Offset: 0x3c
}

// 
// Start address: 0x1b99c0
void fontSelectUp()
{
	// Line 2673, Address: 0x1b99c0, Func Offset: 0
	// Line 2674, Address: 0x1b99c8, Func Offset: 0x8
	// Line 2675, Address: 0x1b99dc, Func Offset: 0x1c
	// Line 2676, Address: 0x1b99f4, Func Offset: 0x34
	// Line 2677, Address: 0x1b9a18, Func Offset: 0x58
	// Line 2678, Address: 0x1b9a20, Func Offset: 0x60
	// Line 2679, Address: 0x1b9a28, Func Offset: 0x68
	// Line 2682, Address: 0x1b9a68, Func Offset: 0xa8
	// Func End, Address: 0x1b9a78, Func Offset: 0xb8
}

// 
// Start address: 0x1b9a80
void fontSelectDown()
{
	// Line 2687, Address: 0x1b9a80, Func Offset: 0
	// Line 2688, Address: 0x1b9a88, Func Offset: 0x8
	// Line 2689, Address: 0x1b9a9c, Func Offset: 0x1c
	// Line 2690, Address: 0x1b9ab4, Func Offset: 0x34
	// Line 2691, Address: 0x1b9ac8, Func Offset: 0x48
	// Line 2692, Address: 0x1b9ad4, Func Offset: 0x54
	// Line 2693, Address: 0x1b9adc, Func Offset: 0x5c
	// Line 2696, Address: 0x1b9b18, Func Offset: 0x98
	// Func End, Address: 0x1b9b28, Func Offset: 0xa8
}

// 
// Start address: 0x1b9b30
unsigned short* fontGetMesAdr(unsigned short* str, unsigned short num)
{
	// Line 2704, Address: 0x1b9b30, Func Offset: 0
	// Line 2705, Address: 0x1b9b38, Func Offset: 0x8
	// Line 2706, Address: 0x1b9b4c, Func Offset: 0x1c
	// Line 2708, Address: 0x1b9b60, Func Offset: 0x30
	// Line 2710, Address: 0x1b9b70, Func Offset: 0x40
	// Line 2712, Address: 0x1b9b7c, Func Offset: 0x4c
	// Line 2713, Address: 0x1b9b90, Func Offset: 0x60
	// Func End, Address: 0x1b9ba0, Func Offset: 0x70
}

// 
// Start address: 0x1b9ba0
void fontMessageNum(unsigned short* str, unsigned short num)
{
	// Line 2744, Address: 0x1b9ba0, Func Offset: 0
	// Line 2745, Address: 0x1b9ba8, Func Offset: 0x8
	// Line 2746, Address: 0x1b9bbc, Func Offset: 0x1c
	// Func End, Address: 0x1b9bcc, Func Offset: 0x2c
}

// 
// Start address: 0x1b9bd0
void fontMessage(unsigned short* str)
{
	// Line 2752, Address: 0x1b9bd0, Func Offset: 0
	// Line 2753, Address: 0x1b9bd8, Func Offset: 0x8
	// Line 2754, Address: 0x1b9be0, Func Offset: 0x10
	// Line 2755, Address: 0x1b9be8, Func Offset: 0x18
	// Line 2757, Address: 0x1b9bf0, Func Offset: 0x20
	// Line 2758, Address: 0x1b9c08, Func Offset: 0x38
	// Line 2759, Address: 0x1b9c28, Func Offset: 0x58
	// Line 2760, Address: 0x1b9c30, Func Offset: 0x60
	// Line 2761, Address: 0x1b9c6c, Func Offset: 0x9c
	// Line 2762, Address: 0x1b9c7c, Func Offset: 0xac
	// Line 2763, Address: 0x1b9c88, Func Offset: 0xb8
	// Line 2765, Address: 0x1b9ca0, Func Offset: 0xd0
	// Func End, Address: 0x1b9cb0, Func Offset: 0xe0
}

// 
// Start address: 0x1b9cb0
void fontNextMessage()
{
	unsigned int wm;
	// Line 2770, Address: 0x1b9cb0, Func Offset: 0
	// Line 2772, Address: 0x1b9cb8, Func Offset: 0x8
	// Line 2773, Address: 0x1b9cc0, Func Offset: 0x10
	// Line 2774, Address: 0x1b9ce4, Func Offset: 0x34
	// Line 2775, Address: 0x1b9cec, Func Offset: 0x3c
	// Line 2777, Address: 0x1b9cf4, Func Offset: 0x44
	// Line 2778, Address: 0x1b9d00, Func Offset: 0x50
	// Line 2779, Address: 0x1b9d18, Func Offset: 0x68
	// Line 2780, Address: 0x1b9d38, Func Offset: 0x88
	// Line 2781, Address: 0x1b9d50, Func Offset: 0xa0
	// Line 2782, Address: 0x1b9d60, Func Offset: 0xb0
	// Line 2783, Address: 0x1b9d6c, Func Offset: 0xbc
	// Line 2784, Address: 0x1b9d78, Func Offset: 0xc8
	// Line 2785, Address: 0x1b9d80, Func Offset: 0xd0
	// Line 2786, Address: 0x1b9d9c, Func Offset: 0xec
	// Line 2787, Address: 0x1b9dbc, Func Offset: 0x10c
	// Line 2788, Address: 0x1b9dd0, Func Offset: 0x120
	// Line 2790, Address: 0x1b9e04, Func Offset: 0x154
	// Line 2794, Address: 0x1b9e18, Func Offset: 0x168
	// Func End, Address: 0x1b9e28, Func Offset: 0x178
}

// 
// Start address: 0x1b9e30
int fontGetStatus()
{
	// Line 2848, Address: 0x1b9e30, Func Offset: 0
	// Line 2849, Address: 0x1b9e44, Func Offset: 0x14
	// Line 2851, Address: 0x1b9e54, Func Offset: 0x24
	// Line 2854, Address: 0x1b9e68, Func Offset: 0x38
	// Func End, Address: 0x1b9e70, Func Offset: 0x40
}

// 
// Start address: 0x1b9e70
void fontWide(unsigned short w, unsigned short h)
{
	// Line 2861, Address: 0x1b9e70, Func Offset: 0
	// Line 2862, Address: 0x1b9e84, Func Offset: 0x14
	// Line 2863, Address: 0x1b9e8c, Func Offset: 0x1c
	// Line 2864, Address: 0x1b9e94, Func Offset: 0x24
	// Func End, Address: 0x1b9e9c, Func Offset: 0x2c
}

// 
// Start address: 0x1b9ea0
void fontAllCenterOn()
{
	// Line 2890, Address: 0x1b9ea0, Func Offset: 0
	// Line 2891, Address: 0x1b9eb4, Func Offset: 0x14
	// Func End, Address: 0x1b9ebc, Func Offset: 0x1c
}

// 
// Start address: 0x1b9ec0
void fontAllCenterOff()
{
	// Line 2897, Address: 0x1b9ec0, Func Offset: 0
	// Line 2898, Address: 0x1b9ed8, Func Offset: 0x18
	// Func End, Address: 0x1b9ee0, Func Offset: 0x20
}

// 
// Start address: 0x1b9ee0
void fontAllCenter2On()
{
	// Line 2904, Address: 0x1b9ee0, Func Offset: 0
	// Line 2905, Address: 0x1b9ef4, Func Offset: 0x14
	// Func End, Address: 0x1b9efc, Func Offset: 0x1c
}

// 
// Start address: 0x1b9f00
void fontAllCenter2Off()
{
	// Line 2911, Address: 0x1b9f00, Func Offset: 0
	// Line 2912, Address: 0x1b9f18, Func Offset: 0x18
	// Func End, Address: 0x1b9f20, Func Offset: 0x20
}

// 
// Start address: 0x1b9f20
void fontShadowOff()
{
	// Line 2927, Address: 0x1b9f20, Func Offset: 0
	// Line 2928, Address: 0x1b9f44, Func Offset: 0x24
	// Line 2930, Address: 0x1b9f58, Func Offset: 0x38
	// Func End, Address: 0x1b9f60, Func Offset: 0x40
}

// 
// Start address: 0x1b9f60
void fontCrushOn()
{
	// Line 2936, Address: 0x1b9f60, Func Offset: 0
	// Line 2937, Address: 0x1b9f6c, Func Offset: 0xc
	// Func End, Address: 0x1b9f74, Func Offset: 0x14
}

// 
// Start address: 0x1b9f80
void fontCrushOff()
{
	// Line 2943, Address: 0x1b9f80, Func Offset: 0
	// Line 2944, Address: 0x1b9f88, Func Offset: 0x8
	// Func End, Address: 0x1b9f90, Func Offset: 0x10
}

// 
// Start address: 0x1b9f90
void mfontClear()
{
	// Line 2960, Address: 0x1b9f90, Func Offset: 0
	// Line 2961, Address: 0x1b9f98, Func Offset: 0x8
	// Func End, Address: 0x1b9fa0, Func Offset: 0x10
}

// 
// Start address: 0x1b9fa0
<unknown fundamental type (0xa510)>* mfontFlush()
{
	MFONT_STREAM_DATA* fstream;
	unsigned int* pui;
	int base;
	<unknown fundamental type (0xa510)>* ppos;
	<unknown fundamental type (0xa510)>* ptop;
	unsigned long* pCur;
	unsigned short v;
	unsigned short u;
	unsigned short by;
	unsigned short bx;
	unsigned short h;
	unsigned short w;
	unsigned short y;
	unsigned short x;
	int n;
	int z;
	int i;
	// Line 3166, Address: 0x1b9fa0, Func Offset: 0
	// Line 3177, Address: 0x1b9fcc, Func Offset: 0x2c
	// Line 3178, Address: 0x1b9ff0, Func Offset: 0x50
	// Line 3179, Address: 0x1ba004, Func Offset: 0x64
	// Line 3180, Address: 0x1ba00c, Func Offset: 0x6c
	// Line 3181, Address: 0x1ba018, Func Offset: 0x78
	// Line 3182, Address: 0x1ba020, Func Offset: 0x80
	// Line 3183, Address: 0x1ba028, Func Offset: 0x88
	// Line 3185, Address: 0x1ba034, Func Offset: 0x94
	// Line 3186, Address: 0x1ba04c, Func Offset: 0xac
	// Line 3187, Address: 0x1ba050, Func Offset: 0xb0
	// Line 3188, Address: 0x1ba054, Func Offset: 0xb4
	// Line 3189, Address: 0x1ba05c, Func Offset: 0xbc
	// Line 3190, Address: 0x1ba064, Func Offset: 0xc4
	// Line 3191, Address: 0x1ba06c, Func Offset: 0xcc
	// Line 3192, Address: 0x1ba074, Func Offset: 0xd4
	// Line 3193, Address: 0x1ba084, Func Offset: 0xe4
	// Line 3195, Address: 0x1ba094, Func Offset: 0xf4
	// Line 3196, Address: 0x1ba0a0, Func Offset: 0x100
	// Line 3198, Address: 0x1ba0ac, Func Offset: 0x10c
	// Line 3200, Address: 0x1ba0cc, Func Offset: 0x12c
	// Line 3204, Address: 0x1ba0ec, Func Offset: 0x14c
	// Line 3206, Address: 0x1ba0f4, Func Offset: 0x154
	// Line 3208, Address: 0x1ba0fc, Func Offset: 0x15c
	// Line 3210, Address: 0x1ba114, Func Offset: 0x174
	// Line 3212, Address: 0x1ba120, Func Offset: 0x180
	// Line 3213, Address: 0x1ba128, Func Offset: 0x188
	// Line 3214, Address: 0x1ba134, Func Offset: 0x194
	// Line 3215, Address: 0x1ba144, Func Offset: 0x1a4
	// Line 3216, Address: 0x1ba150, Func Offset: 0x1b0
	// Line 3217, Address: 0x1ba15c, Func Offset: 0x1bc
	// Line 3218, Address: 0x1ba168, Func Offset: 0x1c8
	// Line 3219, Address: 0x1ba174, Func Offset: 0x1d4
	// Line 3220, Address: 0x1ba180, Func Offset: 0x1e0
	// Line 3221, Address: 0x1ba18c, Func Offset: 0x1ec
	// Line 3222, Address: 0x1ba198, Func Offset: 0x1f8
	// Line 3223, Address: 0x1ba1a0, Func Offset: 0x200
	// Line 3224, Address: 0x1ba1ac, Func Offset: 0x20c
	// Line 3225, Address: 0x1ba1c8, Func Offset: 0x228
	// Line 3226, Address: 0x1ba1d4, Func Offset: 0x234
	// Line 3227, Address: 0x1ba1e0, Func Offset: 0x240
	// Line 3228, Address: 0x1ba1ec, Func Offset: 0x24c
	// Line 3229, Address: 0x1ba200, Func Offset: 0x260
	// Line 3230, Address: 0x1ba210, Func Offset: 0x270
	// Line 3231, Address: 0x1ba218, Func Offset: 0x278
	// Line 3233, Address: 0x1ba238, Func Offset: 0x298
	// Line 3235, Address: 0x1ba244, Func Offset: 0x2a4
	// Line 3236, Address: 0x1ba258, Func Offset: 0x2b8
	// Line 3238, Address: 0x1ba264, Func Offset: 0x2c4
	// Line 3239, Address: 0x1ba274, Func Offset: 0x2d4
	// Line 3240, Address: 0x1ba288, Func Offset: 0x2e8
	// Line 3241, Address: 0x1ba29c, Func Offset: 0x2fc
	// Line 3242, Address: 0x1ba2a0, Func Offset: 0x300
	// Line 3243, Address: 0x1ba2a4, Func Offset: 0x304
	// Line 3245, Address: 0x1ba2b0, Func Offset: 0x310
	// Line 3246, Address: 0x1ba2c4, Func Offset: 0x324
	// Line 3247, Address: 0x1ba2d8, Func Offset: 0x338
	// Line 3248, Address: 0x1ba2dc, Func Offset: 0x33c
	// Line 3249, Address: 0x1ba2e0, Func Offset: 0x340
	// Line 3250, Address: 0x1ba2f4, Func Offset: 0x354
	// Line 3251, Address: 0x1ba304, Func Offset: 0x364
	// Line 3252, Address: 0x1ba330, Func Offset: 0x390
	// Line 3253, Address: 0x1ba358, Func Offset: 0x3b8
	// Line 3254, Address: 0x1ba35c, Func Offset: 0x3bc
	// Line 3255, Address: 0x1ba368, Func Offset: 0x3c8
	// Line 3256, Address: 0x1ba378, Func Offset: 0x3d8
	// Line 3257, Address: 0x1ba380, Func Offset: 0x3e0
	// Line 3258, Address: 0x1ba394, Func Offset: 0x3f4
	// Line 3261, Address: 0x1ba39c, Func Offset: 0x3fc
	// Line 3262, Address: 0x1ba3a4, Func Offset: 0x404
	// Line 3263, Address: 0x1ba3b0, Func Offset: 0x410
	// Line 3264, Address: 0x1ba3bc, Func Offset: 0x41c
	// Line 3265, Address: 0x1ba3c4, Func Offset: 0x424
	// Line 3266, Address: 0x1ba3d8, Func Offset: 0x438
	// Line 3268, Address: 0x1ba3e4, Func Offset: 0x444
	// Line 3270, Address: 0x1ba3f4, Func Offset: 0x454
	// Line 3271, Address: 0x1ba400, Func Offset: 0x460
	// Line 3272, Address: 0x1ba424, Func Offset: 0x484
	// Line 3273, Address: 0x1ba42c, Func Offset: 0x48c
	// Line 3274, Address: 0x1ba434, Func Offset: 0x494
	// Func End, Address: 0x1ba468, Func Offset: 0x4c8
}

