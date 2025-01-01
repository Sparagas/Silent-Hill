typedef struct WFONT_STREAM_DATA;
typedef struct SPACK_OT_DATA;
typedef struct FONT_DATA;
typedef struct MFONT_STREAM_DATA;
typedef struct SPACK_ENV_DATA;
typedef struct SPACK_STATIC_DATA;
typedef struct FONT_STREAM_DATA;
typedef struct SPACK_DATA;
typedef struct Pad_KeyConfig;


typedef unsigned int type_0[12];
typedef unsigned char* type_1[2];
typedef unsigned int type_2[12];
typedef unsigned int type_3[8];
typedef unsigned char type_4[131072];
typedef unsigned int type_5[4];
typedef unsigned short type_6[400];
typedef short type_7[400];
typedef short type_8[400];
typedef short type_9[2];
typedef short type_10[2][2];
typedef unsigned long type_11[34];
typedef unsigned short type_12[8];
typedef int type_13[20];
typedef unsigned short type_14[0];
typedef unsigned short type_15[4];
typedef unsigned short type_16[4];
typedef int type_17[20];
typedef unsigned short type_18[64];
typedef unsigned short type_19[64][10];
typedef FONT_STREAM_DATA type_20[512];
typedef WFONT_STREAM_DATA type_21[64];
typedef MFONT_STREAM_DATA type_22[512];
typedef unsigned short type_23[256];
typedef short type_24[256];
typedef short type_25[256];
typedef unsigned short type_26[48];
typedef unsigned int type_27[2];
typedef unsigned int type_28[2][17];
typedef int type_29[13];
typedef char type_30[1024];
typedef int type_31[10];
typedef FONT_STREAM_DATA* type_32[16];
typedef long type_33[0];
typedef int type_34[20];
typedef FONT_STREAM_DATA* type_35[16];

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
	FONT_STREAM_DATA stream[512];
	WFONT_STREAM_DATA w_stream[64];
	MFONT_STREAM_DATA m_stream[512];
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
	unsigned long* pCur;
	int base_x;
	int base_y;
	int base_z;
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
};

short FontSize[2][2];
unsigned char* FontDataTable[2];
unsigned long font_dma_data[34];
int fontsAD[13];
FONT_DATA font;
unsigned short msg_station[0];
SPACK_DATA spack;
Pad_KeyConfig key_config;
long MFontData[0];

FONT_DATA* fontInit();
void fontClear();
int fontLoad(unsigned short code);
void fontGetData();
void fontSet(unsigned short code, unsigned short x, unsigned short y);
void fontSetBlankBox(int x0, int x1, int y);
void fontSetLine(int x, int w, int y);
void fontPrintStr(unsigned short* str, int x, int y);
void fontPrintStrNum(unsigned short* str, unsigned short num, int x, int y);
unsigned short fontPrintStrMain(unsigned short** pstr, int flag);
void fontPrintDec(int num, int x, int y, int len, int flag);
void fontSetYesNo(int y);
int fontPrintWord(unsigned short* str, int x, int y, int align, int align2);
int fontGetMesWidth(int* buf, unsigned short* str);
void fontSetColor(int num);
void fontSetColorDirect(unsigned char r, unsigned char g, unsigned char b, unsigned char alp);
void fontSetAlpha(unsigned char alp);
<unknown fundamental type (0xa510)>* fontFlush();
void fontPut(WFONT_STREAM_DATA* pstr, int z);
void fontPutSelectBar();
void fontPutYesNoSelectBar();
void* fontTexLoad(int texadr, int clutadr);
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
void fontCrushOn();
void fontCrushOff();
void mfontClear();
int mfontLoad(unsigned short code);
void mfontSet(unsigned short code, unsigned short x, unsigned short y);
void mfontPrintStr(char* str, int x, int y);
void mfontPrintf(char* str, int x, int y);
<unknown fundamental type (0xa510)>* mfontFlush();

// 
// Start address: 0x1b82a0
FONT_DATA* fontInit()
{
	unsigned short c;
	unsigned short* str;
	unsigned short fake_mes[48];
	unsigned short bugmes[8];
	int i;
	// Line 169, Address: 0x1b82a0, Func Offset: 0
	// Line 172, Address: 0x1b82b4, Func Offset: 0x14
	// Line 178, Address: 0x1b82c8, Func Offset: 0x28
	// Line 181, Address: 0x1b82e0, Func Offset: 0x40
	// Line 182, Address: 0x1b82f4, Func Offset: 0x54
	// Line 185, Address: 0x1b8308, Func Offset: 0x68
	// Line 186, Address: 0x1b8310, Func Offset: 0x70
	// Line 187, Address: 0x1b831c, Func Offset: 0x7c
	// Line 188, Address: 0x1b8348, Func Offset: 0xa8
	// Line 191, Address: 0x1b835c, Func Offset: 0xbc
	// Line 192, Address: 0x1b836c, Func Offset: 0xcc
	// Line 193, Address: 0x1b837c, Func Offset: 0xdc
	// Line 195, Address: 0x1b8384, Func Offset: 0xe4
	// Line 197, Address: 0x1b8390, Func Offset: 0xf0
	// Line 198, Address: 0x1b839c, Func Offset: 0xfc
	// Line 200, Address: 0x1b83a8, Func Offset: 0x108
	// Line 204, Address: 0x1b83d4, Func Offset: 0x134
	// Line 207, Address: 0x1b83e4, Func Offset: 0x144
	// Line 208, Address: 0x1b83f0, Func Offset: 0x150
	// Line 209, Address: 0x1b83fc, Func Offset: 0x15c
	// Line 210, Address: 0x1b8408, Func Offset: 0x168
	// Line 211, Address: 0x1b8414, Func Offset: 0x174
	// Line 212, Address: 0x1b8420, Func Offset: 0x180
	// Line 213, Address: 0x1b842c, Func Offset: 0x18c
	// Line 214, Address: 0x1b8438, Func Offset: 0x198
	// Line 215, Address: 0x1b8448, Func Offset: 0x1a8
	// Line 219, Address: 0x1b8458, Func Offset: 0x1b8
	// Line 228, Address: 0x1b8494, Func Offset: 0x1f4
	// Line 230, Address: 0x1b8498, Func Offset: 0x1f8
	// Line 231, Address: 0x1b84a0, Func Offset: 0x200
	// Line 232, Address: 0x1b84b0, Func Offset: 0x210
	// Line 233, Address: 0x1b84b8, Func Offset: 0x218
	// Line 234, Address: 0x1b84c4, Func Offset: 0x224
	// Line 235, Address: 0x1b84f8, Func Offset: 0x258
	// Line 236, Address: 0x1b8524, Func Offset: 0x284
	// Line 237, Address: 0x1b852c, Func Offset: 0x28c
	// Line 238, Address: 0x1b8538, Func Offset: 0x298
	// Line 239, Address: 0x1b856c, Func Offset: 0x2cc
	// Line 240, Address: 0x1b8570, Func Offset: 0x2d0
	// Line 244, Address: 0x1b8590, Func Offset: 0x2f0
	// Line 245, Address: 0x1b8598, Func Offset: 0x2f8
	// Func End, Address: 0x1b85b4, Func Offset: 0x314
}

// 
// Start address: 0x1b85c0
void fontClear()
{
	// Line 250, Address: 0x1b85c0, Func Offset: 0
	// Line 251, Address: 0x1b85c8, Func Offset: 0x8
	// Line 252, Address: 0x1b85e0, Func Offset: 0x20
	// Line 253, Address: 0x1b85ec, Func Offset: 0x2c
	// Line 254, Address: 0x1b85f4, Func Offset: 0x34
	// Line 255, Address: 0x1b8600, Func Offset: 0x40
	// Line 256, Address: 0x1b8608, Func Offset: 0x48
	// Line 257, Address: 0x1b861c, Func Offset: 0x5c
	// Line 258, Address: 0x1b8624, Func Offset: 0x64
	// Line 259, Address: 0x1b863c, Func Offset: 0x7c
	// Func End, Address: 0x1b864c, Func Offset: 0x8c
}

// 
// Start address: 0x1b8650
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
	// Line 266, Address: 0x1b8650, Func Offset: 0
	// Line 273, Address: 0x1b867c, Func Offset: 0x2c
	// Line 274, Address: 0x1b8684, Func Offset: 0x34
	// Line 275, Address: 0x1b868c, Func Offset: 0x3c
	// Line 283, Address: 0x1b8694, Func Offset: 0x44
	// Line 284, Address: 0x1b86b4, Func Offset: 0x64
	// Line 285, Address: 0x1b86b8, Func Offset: 0x68
	// Line 286, Address: 0x1b86c8, Func Offset: 0x78
	// Line 287, Address: 0x1b86d0, Func Offset: 0x80
	// Line 288, Address: 0x1b86ec, Func Offset: 0x9c
	// Line 289, Address: 0x1b8710, Func Offset: 0xc0
	// Line 290, Address: 0x1b8730, Func Offset: 0xe0
	// Line 291, Address: 0x1b875c, Func Offset: 0x10c
	// Line 292, Address: 0x1b8760, Func Offset: 0x110
	// Line 293, Address: 0x1b8780, Func Offset: 0x130
	// Line 294, Address: 0x1b87ac, Func Offset: 0x15c
	// Line 295, Address: 0x1b87b0, Func Offset: 0x160
	// Line 296, Address: 0x1b87c0, Func Offset: 0x170
	// Line 297, Address: 0x1b87d4, Func Offset: 0x184
	// Line 298, Address: 0x1b87f0, Func Offset: 0x1a0
	// Line 299, Address: 0x1b87f8, Func Offset: 0x1a8
	// Line 301, Address: 0x1b8804, Func Offset: 0x1b4
	// Line 302, Address: 0x1b8808, Func Offset: 0x1b8
	// Line 303, Address: 0x1b881c, Func Offset: 0x1cc
	// Line 304, Address: 0x1b882c, Func Offset: 0x1dc
	// Line 305, Address: 0x1b8848, Func Offset: 0x1f8
	// Line 306, Address: 0x1b884c, Func Offset: 0x1fc
	// Line 307, Address: 0x1b8870, Func Offset: 0x220
	// Line 308, Address: 0x1b8894, Func Offset: 0x244
	// Line 309, Address: 0x1b88a0, Func Offset: 0x250
	// Line 310, Address: 0x1b88b0, Func Offset: 0x260
	// Line 311, Address: 0x1b88c4, Func Offset: 0x274
	// Line 312, Address: 0x1b88fc, Func Offset: 0x2ac
	// Line 315, Address: 0x1b8904, Func Offset: 0x2b4
	// Line 316, Address: 0x1b8920, Func Offset: 0x2d0
	// Line 317, Address: 0x1b8924, Func Offset: 0x2d4
	// Line 318, Address: 0x1b8928, Func Offset: 0x2d8
	// Line 319, Address: 0x1b8930, Func Offset: 0x2e0
	// Line 320, Address: 0x1b8948, Func Offset: 0x2f8
	// Line 321, Address: 0x1b8964, Func Offset: 0x314
	// Line 322, Address: 0x1b897c, Func Offset: 0x32c
	// Line 324, Address: 0x1b89fc, Func Offset: 0x3ac
	// Line 325, Address: 0x1b8a0c, Func Offset: 0x3bc
	// Line 326, Address: 0x1b8a1c, Func Offset: 0x3cc
	// Line 327, Address: 0x1b8a24, Func Offset: 0x3d4
	// Line 329, Address: 0x1b8a48, Func Offset: 0x3f8
	// Line 331, Address: 0x1b8a6c, Func Offset: 0x41c
	// Line 332, Address: 0x1b8a78, Func Offset: 0x428
	// Line 333, Address: 0x1b8a90, Func Offset: 0x440
	// Line 334, Address: 0x1b8aa4, Func Offset: 0x454
	// Line 378, Address: 0x1b8ac4, Func Offset: 0x474
	// Line 391, Address: 0x1b8adc, Func Offset: 0x48c
	// Line 392, Address: 0x1b8ae0, Func Offset: 0x490
	// Line 393, Address: 0x1b8ae4, Func Offset: 0x494
	// Line 394, Address: 0x1b8ae8, Func Offset: 0x498
	// Line 395, Address: 0x1b8aec, Func Offset: 0x49c
	// Line 396, Address: 0x1b8af0, Func Offset: 0x4a0
	// Line 397, Address: 0x1b8af4, Func Offset: 0x4a4
	// Line 398, Address: 0x1b8af8, Func Offset: 0x4a8
	// Line 399, Address: 0x1b8afc, Func Offset: 0x4ac
	// Line 401, Address: 0x1b8b00, Func Offset: 0x4b0
	// Line 403, Address: 0x1b8b04, Func Offset: 0x4b4
	// Line 404, Address: 0x1b8b08, Func Offset: 0x4b8
	// Line 406, Address: 0x1b8b10, Func Offset: 0x4c0
	// Line 408, Address: 0x1b8b18, Func Offset: 0x4c8
	// Line 409, Address: 0x1b8b1c, Func Offset: 0x4cc
	// Line 411, Address: 0x1b8b24, Func Offset: 0x4d4
	// Line 413, Address: 0x1b8b2c, Func Offset: 0x4dc
	// Line 415, Address: 0x1b8b34, Func Offset: 0x4e4
	// Line 417, Address: 0x1b8b3c, Func Offset: 0x4ec
	// Line 419, Address: 0x1b8b44, Func Offset: 0x4f4
	// Line 421, Address: 0x1b8b4c, Func Offset: 0x4fc
	// Line 423, Address: 0x1b8b54, Func Offset: 0x504
	// Line 425, Address: 0x1b8b5c, Func Offset: 0x50c
	// Line 427, Address: 0x1b8b64, Func Offset: 0x514
	// Line 428, Address: 0x1b8b68, Func Offset: 0x518
	// Line 429, Address: 0x1b8b6c, Func Offset: 0x51c
	// Line 431, Address: 0x1b8b74, Func Offset: 0x524
	// Line 433, Address: 0x1b8b7c, Func Offset: 0x52c
	// Line 435, Address: 0x1b8b84, Func Offset: 0x534
	// Line 436, Address: 0x1b8b88, Func Offset: 0x538
	// Line 438, Address: 0x1b8b90, Func Offset: 0x540
	// Line 439, Address: 0x1b8b94, Func Offset: 0x544
	// Line 440, Address: 0x1b8b98, Func Offset: 0x548
	// Line 442, Address: 0x1b8b9c, Func Offset: 0x54c
	// Line 443, Address: 0x1b8ba0, Func Offset: 0x550
	// Line 445, Address: 0x1b8ba8, Func Offset: 0x558
	// Line 446, Address: 0x1b8bac, Func Offset: 0x55c
	// Line 447, Address: 0x1b8bb0, Func Offset: 0x560
	// Line 448, Address: 0x1b8bb4, Func Offset: 0x564
	// Line 450, Address: 0x1b8bb8, Func Offset: 0x568
	// Line 451, Address: 0x1b8bbc, Func Offset: 0x56c
	// Line 453, Address: 0x1b8bc4, Func Offset: 0x574
	// Line 456, Address: 0x1b8bcc, Func Offset: 0x57c
	// Line 457, Address: 0x1b8bd0, Func Offset: 0x580
	// Line 465, Address: 0x1b8bd8, Func Offset: 0x588
	// Line 466, Address: 0x1b8bec, Func Offset: 0x59c
	// Line 467, Address: 0x1b8bf0, Func Offset: 0x5a0
	// Func End, Address: 0x1b8c24, Func Offset: 0x5d4
}

// 
// Start address: 0x1b8c30
void fontGetData()
{
	// Line 502, Address: 0x1b8c30, Func Offset: 0
	// Line 503, Address: 0x1b8c34, Func Offset: 0x4
	// Line 505, Address: 0x1b8c3c, Func Offset: 0xc
	// Line 506, Address: 0x1b8c40, Func Offset: 0x10
	// Line 507, Address: 0x1b8c44, Func Offset: 0x14
	// Line 508, Address: 0x1b8c48, Func Offset: 0x18
	// Line 509, Address: 0x1b8c4c, Func Offset: 0x1c
	// Line 510, Address: 0x1b8c50, Func Offset: 0x20
	// Line 512, Address: 0x1b8c54, Func Offset: 0x24
	// Line 513, Address: 0x1b8c58, Func Offset: 0x28
	// Line 514, Address: 0x1b8c5c, Func Offset: 0x2c
	// Func End, Address: 0x1b8c64, Func Offset: 0x34
}

// 
// Start address: 0x1b8c70
void fontSet(unsigned short code, unsigned short x, unsigned short y)
{
	FONT_STREAM_DATA* fstream;
	WFONT_STREAM_DATA* fstream;
	int num;
	// Line 526, Address: 0x1b8c70, Func Offset: 0
	// Line 528, Address: 0x1b8c90, Func Offset: 0x20
	// Line 530, Address: 0x1b8ca4, Func Offset: 0x34
	// Line 532, Address: 0x1b8cc0, Func Offset: 0x50
	// Line 534, Address: 0x1b8cd0, Func Offset: 0x60
	// Line 537, Address: 0x1b8cd8, Func Offset: 0x68
	// Line 539, Address: 0x1b8ce8, Func Offset: 0x78
	// Line 540, Address: 0x1b8d1c, Func Offset: 0xac
	// Line 541, Address: 0x1b8d34, Func Offset: 0xc4
	// Line 542, Address: 0x1b8d4c, Func Offset: 0xdc
	// Line 543, Address: 0x1b8d74, Func Offset: 0x104
	// Line 544, Address: 0x1b8dac, Func Offset: 0x13c
	// Line 545, Address: 0x1b8dc8, Func Offset: 0x158
	// Line 546, Address: 0x1b8dec, Func Offset: 0x17c
	// Line 547, Address: 0x1b8e14, Func Offset: 0x1a4
	// Line 548, Address: 0x1b8e3c, Func Offset: 0x1cc
	// Line 549, Address: 0x1b8e58, Func Offset: 0x1e8
	// Line 550, Address: 0x1b8e74, Func Offset: 0x204
	// Line 551, Address: 0x1b8e88, Func Offset: 0x218
	// Line 553, Address: 0x1b8e90, Func Offset: 0x220
	// Line 555, Address: 0x1b8eac, Func Offset: 0x23c
	// Line 557, Address: 0x1b8ebc, Func Offset: 0x24c
	// Line 560, Address: 0x1b8ec4, Func Offset: 0x254
	// Line 562, Address: 0x1b8ed4, Func Offset: 0x264
	// Line 563, Address: 0x1b8f08, Func Offset: 0x298
	// Line 564, Address: 0x1b8f20, Func Offset: 0x2b0
	// Line 565, Address: 0x1b8f38, Func Offset: 0x2c8
	// Line 566, Address: 0x1b8f60, Func Offset: 0x2f0
	// Line 567, Address: 0x1b8f98, Func Offset: 0x328
	// Line 568, Address: 0x1b8fb4, Func Offset: 0x344
	// Line 569, Address: 0x1b8fd8, Func Offset: 0x368
	// Line 570, Address: 0x1b9000, Func Offset: 0x390
	// Line 571, Address: 0x1b9028, Func Offset: 0x3b8
	// Line 573, Address: 0x1b903c, Func Offset: 0x3cc
	// Func End, Address: 0x1b9058, Func Offset: 0x3e8
}

// 
// Start address: 0x1b9060
void fontSetBlankBox(int x0, int x1, int y)
{
	FONT_STREAM_DATA* fstream;
	// Line 624, Address: 0x1b9060, Func Offset: 0
	// Line 627, Address: 0x1b9078, Func Offset: 0x18
	// Line 629, Address: 0x1b9094, Func Offset: 0x34
	// Line 631, Address: 0x1b90a4, Func Offset: 0x44
	// Line 634, Address: 0x1b90ac, Func Offset: 0x4c
	// Line 635, Address: 0x1b90e0, Func Offset: 0x80
	// Line 636, Address: 0x1b90f0, Func Offset: 0x90
	// Line 637, Address: 0x1b9100, Func Offset: 0xa0
	// Line 638, Address: 0x1b9110, Func Offset: 0xb0
	// Line 639, Address: 0x1b9118, Func Offset: 0xb8
	// Line 640, Address: 0x1b9134, Func Offset: 0xd4
	// Line 641, Address: 0x1b9158, Func Offset: 0xf8
	// Line 642, Address: 0x1b9180, Func Offset: 0x120
	// Line 644, Address: 0x1b9194, Func Offset: 0x134
	// Func End, Address: 0x1b91a8, Func Offset: 0x148
}

// 
// Start address: 0x1b91b0
void fontSetLine(int x, int w, int y)
{
	unsigned int b;
	unsigned int g;
	unsigned int r;
	FONT_STREAM_DATA* fstream;
	// Line 652, Address: 0x1b91b0, Func Offset: 0
	// Line 655, Address: 0x1b91d4, Func Offset: 0x24
	// Line 657, Address: 0x1b91f0, Func Offset: 0x40
	// Line 659, Address: 0x1b9200, Func Offset: 0x50
	// Line 662, Address: 0x1b9208, Func Offset: 0x58
	// Line 663, Address: 0x1b923c, Func Offset: 0x8c
	// Line 664, Address: 0x1b924c, Func Offset: 0x9c
	// Line 665, Address: 0x1b9260, Func Offset: 0xb0
	// Line 666, Address: 0x1b929c, Func Offset: 0xec
	// Line 667, Address: 0x1b92a4, Func Offset: 0xf4
	// Line 669, Address: 0x1b92f8, Func Offset: 0x148
	// Line 670, Address: 0x1b9314, Func Offset: 0x164
	// Line 671, Address: 0x1b931c, Func Offset: 0x16c
	// Line 672, Address: 0x1b9340, Func Offset: 0x190
	// Line 673, Address: 0x1b936c, Func Offset: 0x1bc
	// Line 674, Address: 0x1b9398, Func Offset: 0x1e8
	// Line 675, Address: 0x1b93bc, Func Offset: 0x20c
	// Line 676, Address: 0x1b93d0, Func Offset: 0x220
	// Line 677, Address: 0x1b93e4, Func Offset: 0x234
	// Func End, Address: 0x1b9404, Func Offset: 0x254
}

// 
// Start address: 0x1b9410
void fontPrintStr(unsigned short* str, int x, int y)
{
	// Line 685, Address: 0x1b9410, Func Offset: 0
	// Line 686, Address: 0x1b9428, Func Offset: 0x18
	// Line 687, Address: 0x1b9434, Func Offset: 0x24
	// Line 688, Address: 0x1b9444, Func Offset: 0x34
	// Line 689, Address: 0x1b9454, Func Offset: 0x44
	// Line 690, Address: 0x1b9484, Func Offset: 0x74
	// Func End, Address: 0x1b9498, Func Offset: 0x88
}

// 
// Start address: 0x1b94a0
void fontPrintStrNum(unsigned short* str, unsigned short num, int x, int y)
{
	// Line 699, Address: 0x1b94a0, Func Offset: 0
	// Line 700, Address: 0x1b94b8, Func Offset: 0x18
	// Line 701, Address: 0x1b94dc, Func Offset: 0x3c
	// Func End, Address: 0x1b94ec, Func Offset: 0x4c
}

// 
// Start address: 0x1b94f0
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
	// Line 710, Address: 0x1b94f0, Func Offset: 0
	// Line 717, Address: 0x1b9524, Func Offset: 0x34
	// Line 718, Address: 0x1b9530, Func Offset: 0x40
	// Line 719, Address: 0x1b9534, Func Offset: 0x44
	// Line 720, Address: 0x1b953c, Func Offset: 0x4c
	// Line 721, Address: 0x1b9544, Func Offset: 0x54
	// Line 722, Address: 0x1b954c, Func Offset: 0x5c
	// Line 723, Address: 0x1b9554, Func Offset: 0x64
	// Line 724, Address: 0x1b9568, Func Offset: 0x78
	// Line 726, Address: 0x1b957c, Func Offset: 0x8c
	// Line 727, Address: 0x1b9598, Func Offset: 0xa8
	// Line 728, Address: 0x1b95bc, Func Offset: 0xcc
	// Line 729, Address: 0x1b95c0, Func Offset: 0xd0
	// Line 730, Address: 0x1b95cc, Func Offset: 0xdc
	// Line 731, Address: 0x1b95d8, Func Offset: 0xe8
	// Line 732, Address: 0x1b95dc, Func Offset: 0xec
	// Line 733, Address: 0x1b95e0, Func Offset: 0xf0
	// Line 734, Address: 0x1b95e4, Func Offset: 0xf4
	// Line 735, Address: 0x1b95e8, Func Offset: 0xf8
	// Line 736, Address: 0x1b95f0, Func Offset: 0x100
	// Line 737, Address: 0x1b95f8, Func Offset: 0x108
	// Line 738, Address: 0x1b9610, Func Offset: 0x120
	// Line 739, Address: 0x1b961c, Func Offset: 0x12c
	// Line 740, Address: 0x1b962c, Func Offset: 0x13c
	// Line 741, Address: 0x1b9640, Func Offset: 0x150
	// Line 742, Address: 0x1b9654, Func Offset: 0x164
	// Line 743, Address: 0x1b9664, Func Offset: 0x174
	// Line 744, Address: 0x1b9670, Func Offset: 0x180
	// Line 745, Address: 0x1b9678, Func Offset: 0x188
	// Line 746, Address: 0x1b96a0, Func Offset: 0x1b0
	// Line 748, Address: 0x1b96c4, Func Offset: 0x1d4
	// Line 751, Address: 0x1b96e8, Func Offset: 0x1f8
	// Line 752, Address: 0x1b96fc, Func Offset: 0x20c
	// Line 753, Address: 0x1b9704, Func Offset: 0x214
	// Line 754, Address: 0x1b9714, Func Offset: 0x224
	// Line 755, Address: 0x1b9720, Func Offset: 0x230
	// Line 756, Address: 0x1b9758, Func Offset: 0x268
	// Line 757, Address: 0x1b9760, Func Offset: 0x270
	// Line 758, Address: 0x1b9770, Func Offset: 0x280
	// Line 759, Address: 0x1b978c, Func Offset: 0x29c
	// Line 760, Address: 0x1b9794, Func Offset: 0x2a4
	// Line 764, Address: 0x1b97f4, Func Offset: 0x304
	// Line 765, Address: 0x1b9824, Func Offset: 0x334
	// Line 766, Address: 0x1b985c, Func Offset: 0x36c
	// Line 767, Address: 0x1b9860, Func Offset: 0x370
	// Line 768, Address: 0x1b987c, Func Offset: 0x38c
	// Line 771, Address: 0x1b9884, Func Offset: 0x394
	// Line 772, Address: 0x1b98ac, Func Offset: 0x3bc
	// Line 773, Address: 0x1b98d0, Func Offset: 0x3e0
	// Line 774, Address: 0x1b98d4, Func Offset: 0x3e4
	// Line 777, Address: 0x1b98dc, Func Offset: 0x3ec
	// Line 778, Address: 0x1b98f8, Func Offset: 0x408
	// Line 780, Address: 0x1b9900, Func Offset: 0x410
	// Line 781, Address: 0x1b9904, Func Offset: 0x414
	// Line 783, Address: 0x1b990c, Func Offset: 0x41c
	// Line 784, Address: 0x1b9914, Func Offset: 0x424
	// Line 786, Address: 0x1b991c, Func Offset: 0x42c
	// Line 787, Address: 0x1b9924, Func Offset: 0x434
	// Line 789, Address: 0x1b992c, Func Offset: 0x43c
	// Line 791, Address: 0x1b9954, Func Offset: 0x464
	// Line 793, Address: 0x1b9970, Func Offset: 0x480
	// Line 794, Address: 0x1b9974, Func Offset: 0x484
	// Line 795, Address: 0x1b9978, Func Offset: 0x488
	// Line 796, Address: 0x1b99a4, Func Offset: 0x4b4
	// Line 799, Address: 0x1b99a8, Func Offset: 0x4b8
	// Line 800, Address: 0x1b99b0, Func Offset: 0x4c0
	// Line 801, Address: 0x1b99c4, Func Offset: 0x4d4
	// Line 802, Address: 0x1b99e4, Func Offset: 0x4f4
	// Line 803, Address: 0x1b9a00, Func Offset: 0x510
	// Line 804, Address: 0x1b9a1c, Func Offset: 0x52c
	// Line 805, Address: 0x1b9a38, Func Offset: 0x548
	// Line 806, Address: 0x1b9a54, Func Offset: 0x564
	// Line 807, Address: 0x1b9a70, Func Offset: 0x580
	// Line 808, Address: 0x1b9a80, Func Offset: 0x590
	// Line 809, Address: 0x1b9a88, Func Offset: 0x598
	// Line 810, Address: 0x1b9aa4, Func Offset: 0x5b4
	// Line 811, Address: 0x1b9ab4, Func Offset: 0x5c4
	// Line 812, Address: 0x1b9acc, Func Offset: 0x5dc
	// Line 815, Address: 0x1b9ad0, Func Offset: 0x5e0
	// Line 816, Address: 0x1b9ad8, Func Offset: 0x5e8
	// Line 817, Address: 0x1b9bac, Func Offset: 0x6bc
	// Line 818, Address: 0x1b9bc8, Func Offset: 0x6d8
	// Line 819, Address: 0x1b9be0, Func Offset: 0x6f0
	// Line 820, Address: 0x1b9be4, Func Offset: 0x6f4
	// Line 821, Address: 0x1b9bec, Func Offset: 0x6fc
	// Line 822, Address: 0x1b9bf0, Func Offset: 0x700
	// Line 823, Address: 0x1b9bf8, Func Offset: 0x708
	// Line 824, Address: 0x1b9ccc, Func Offset: 0x7dc
	// Line 826, Address: 0x1b9ce8, Func Offset: 0x7f8
	// Line 827, Address: 0x1b9cf8, Func Offset: 0x808
	// Line 828, Address: 0x1b9d08, Func Offset: 0x818
	// Line 829, Address: 0x1b9d30, Func Offset: 0x840
	// Line 831, Address: 0x1b9d54, Func Offset: 0x864
	// Line 834, Address: 0x1b9d8c, Func Offset: 0x89c
	// Line 835, Address: 0x1b9d98, Func Offset: 0x8a8
	// Line 836, Address: 0x1b9da8, Func Offset: 0x8b8
	// Line 837, Address: 0x1b9de8, Func Offset: 0x8f8
	// Line 838, Address: 0x1b9df0, Func Offset: 0x900
	// Line 840, Address: 0x1b9e30, Func Offset: 0x940
	// Line 841, Address: 0x1b9e48, Func Offset: 0x958
	// Line 842, Address: 0x1b9e54, Func Offset: 0x964
	// Line 847, Address: 0x1b9e5c, Func Offset: 0x96c
	// Line 851, Address: 0x1b9e9c, Func Offset: 0x9ac
	// Line 852, Address: 0x1b9ea0, Func Offset: 0x9b0
	// Line 853, Address: 0x1b9eac, Func Offset: 0x9bc
	// Line 854, Address: 0x1b9eb0, Func Offset: 0x9c0
	// Line 855, Address: 0x1b9ec4, Func Offset: 0x9d4
	// Line 856, Address: 0x1b9ecc, Func Offset: 0x9dc
	// Line 858, Address: 0x1b9ef0, Func Offset: 0xa00
	// Line 859, Address: 0x1b9f30, Func Offset: 0xa40
	// Line 861, Address: 0x1b9f38, Func Offset: 0xa48
	// Line 862, Address: 0x1b9f48, Func Offset: 0xa58
	// Line 864, Address: 0x1b9f50, Func Offset: 0xa60
	// Line 866, Address: 0x1b9f8c, Func Offset: 0xa9c
	// Line 867, Address: 0x1b9f90, Func Offset: 0xaa0
	// Line 868, Address: 0x1b9fd0, Func Offset: 0xae0
	// Line 869, Address: 0x1ba004, Func Offset: 0xb14
	// Line 871, Address: 0x1ba00c, Func Offset: 0xb1c
	// Line 872, Address: 0x1ba01c, Func Offset: 0xb2c
	// Line 873, Address: 0x1ba028, Func Offset: 0xb38
	// Line 874, Address: 0x1ba060, Func Offset: 0xb70
	// Line 875, Address: 0x1ba068, Func Offset: 0xb78
	// Line 876, Address: 0x1ba074, Func Offset: 0xb84
	// Line 878, Address: 0x1ba088, Func Offset: 0xb98
	// Line 879, Address: 0x1ba098, Func Offset: 0xba8
	// Line 880, Address: 0x1ba0b4, Func Offset: 0xbc4
	// Line 881, Address: 0x1ba0bc, Func Offset: 0xbcc
	// Line 885, Address: 0x1ba11c, Func Offset: 0xc2c
	// Line 886, Address: 0x1ba14c, Func Offset: 0xc5c
	// Line 888, Address: 0x1ba17c, Func Offset: 0xc8c
	// Line 889, Address: 0x1ba198, Func Offset: 0xca8
	// Line 891, Address: 0x1ba1a0, Func Offset: 0xcb0
	// Line 892, Address: 0x1ba1b0, Func Offset: 0xcc0
	// Line 894, Address: 0x1ba1b8, Func Offset: 0xcc8
	// Line 895, Address: 0x1ba1cc, Func Offset: 0xcdc
	// Line 896, Address: 0x1ba1d8, Func Offset: 0xce8
	// Line 897, Address: 0x1ba1e0, Func Offset: 0xcf0
	// Line 898, Address: 0x1ba1e8, Func Offset: 0xcf8
	// Line 899, Address: 0x1ba204, Func Offset: 0xd14
	// Line 902, Address: 0x1ba20c, Func Offset: 0xd1c
	// Line 904, Address: 0x1ba214, Func Offset: 0xd24
	// Line 905, Address: 0x1ba228, Func Offset: 0xd38
	// Line 906, Address: 0x1ba23c, Func Offset: 0xd4c
	// Line 907, Address: 0x1ba26c, Func Offset: 0xd7c
	// Line 908, Address: 0x1ba270, Func Offset: 0xd80
	// Line 909, Address: 0x1ba274, Func Offset: 0xd84
	// Line 910, Address: 0x1ba2a0, Func Offset: 0xdb0
	// Line 913, Address: 0x1ba2a4, Func Offset: 0xdb4
	// Line 914, Address: 0x1ba2ac, Func Offset: 0xdbc
	// Line 915, Address: 0x1ba2c0, Func Offset: 0xdd0
	// Line 916, Address: 0x1ba2dc, Func Offset: 0xdec
	// Line 917, Address: 0x1ba2fc, Func Offset: 0xe0c
	// Line 918, Address: 0x1ba318, Func Offset: 0xe28
	// Line 919, Address: 0x1ba334, Func Offset: 0xe44
	// Line 920, Address: 0x1ba350, Func Offset: 0xe60
	// Line 921, Address: 0x1ba36c, Func Offset: 0xe7c
	// Line 922, Address: 0x1ba384, Func Offset: 0xe94
	// Line 925, Address: 0x1ba388, Func Offset: 0xe98
	// Line 926, Address: 0x1ba390, Func Offset: 0xea0
	// Line 927, Address: 0x1ba450, Func Offset: 0xf60
	// Line 928, Address: 0x1ba470, Func Offset: 0xf80
	// Line 929, Address: 0x1ba488, Func Offset: 0xf98
	// Line 930, Address: 0x1ba48c, Func Offset: 0xf9c
	// Line 931, Address: 0x1ba494, Func Offset: 0xfa4
	// Line 932, Address: 0x1ba498, Func Offset: 0xfa8
	// Line 933, Address: 0x1ba4a0, Func Offset: 0xfb0
	// Line 934, Address: 0x1ba568, Func Offset: 0x1078
	// Line 936, Address: 0x1ba588, Func Offset: 0x1098
	// Line 937, Address: 0x1ba5d8, Func Offset: 0x10e8
	// Line 938, Address: 0x1ba5f8, Func Offset: 0x1108
	// Line 939, Address: 0x1ba614, Func Offset: 0x1124
	// Line 940, Address: 0x1ba624, Func Offset: 0x1134
	// Line 941, Address: 0x1ba634, Func Offset: 0x1144
	// Line 942, Address: 0x1ba658, Func Offset: 0x1168
	// Line 943, Address: 0x1ba694, Func Offset: 0x11a4
	// Line 944, Address: 0x1ba698, Func Offset: 0x11a8
	// Line 945, Address: 0x1ba6c8, Func Offset: 0x11d8
	// Line 946, Address: 0x1ba6d4, Func Offset: 0x11e4
	// Line 947, Address: 0x1ba6d8, Func Offset: 0x11e8
	// Line 948, Address: 0x1ba6e0, Func Offset: 0x11f0
	// Line 949, Address: 0x1ba7b4, Func Offset: 0x12c4
	// Line 950, Address: 0x1ba7d4, Func Offset: 0x12e4
	// Line 951, Address: 0x1ba800, Func Offset: 0x1310
	// Line 952, Address: 0x1ba820, Func Offset: 0x1330
	// Line 953, Address: 0x1ba83c, Func Offset: 0x134c
	// Line 954, Address: 0x1ba854, Func Offset: 0x1364
	// Line 955, Address: 0x1ba860, Func Offset: 0x1370
	// Line 956, Address: 0x1ba86c, Func Offset: 0x137c
	// Line 957, Address: 0x1ba894, Func Offset: 0x13a4
	// Line 958, Address: 0x1ba89c, Func Offset: 0x13ac
	// Line 959, Address: 0x1ba974, Func Offset: 0x1484
	// Line 961, Address: 0x1ba998, Func Offset: 0x14a8
	// Line 962, Address: 0x1ba9a4, Func Offset: 0x14b4
	// Line 963, Address: 0x1ba9b8, Func Offset: 0x14c8
	// Line 964, Address: 0x1ba9c8, Func Offset: 0x14d8
	// Line 965, Address: 0x1ba9ec, Func Offset: 0x14fc
	// Line 967, Address: 0x1baa44, Func Offset: 0x1554
	// Line 968, Address: 0x1baa50, Func Offset: 0x1560
	// Line 969, Address: 0x1baa78, Func Offset: 0x1588
	// Line 970, Address: 0x1baa84, Func Offset: 0x1594
	// Line 971, Address: 0x1baa9c, Func Offset: 0x15ac
	// Line 972, Address: 0x1baab0, Func Offset: 0x15c0
	// Line 973, Address: 0x1baab8, Func Offset: 0x15c8
	// Line 974, Address: 0x1baadc, Func Offset: 0x15ec
	// Line 975, Address: 0x1baae0, Func Offset: 0x15f0
	// Func End, Address: 0x1bab14, Func Offset: 0x1624
}

// 
// Start address: 0x1bab20
void fontPrintDec(int num, int x, int y, int len, int flag)
{
	unsigned short code;
	int sy;
	int sx;
	int point;
	int vy;
	int vx;
	int buf[10];
	// Line 985, Address: 0x1bab20, Func Offset: 0
	// Line 989, Address: 0x1bab58, Func Offset: 0x38
	// Line 990, Address: 0x1bab60, Func Offset: 0x40
	// Line 991, Address: 0x1bab68, Func Offset: 0x48
	// Line 992, Address: 0x1bab8c, Func Offset: 0x6c
	// Line 993, Address: 0x1babb0, Func Offset: 0x90
	// Line 994, Address: 0x1babc8, Func Offset: 0xa8
	// Line 996, Address: 0x1babcc, Func Offset: 0xac
	// Line 997, Address: 0x1babf8, Func Offset: 0xd8
	// Line 998, Address: 0x1bac24, Func Offset: 0x104
	// Line 999, Address: 0x1bac30, Func Offset: 0x110
	// Line 1000, Address: 0x1bac60, Func Offset: 0x140
	// Line 1001, Address: 0x1bac68, Func Offset: 0x148
	// Line 1002, Address: 0x1bac78, Func Offset: 0x158
	// Line 1003, Address: 0x1bacac, Func Offset: 0x18c
	// Line 1004, Address: 0x1bacb0, Func Offset: 0x190
	// Line 1005, Address: 0x1bacb8, Func Offset: 0x198
	// Line 1006, Address: 0x1bacc4, Func Offset: 0x1a4
	// Line 1007, Address: 0x1bacd8, Func Offset: 0x1b8
	// Line 1008, Address: 0x1bace0, Func Offset: 0x1c0
	// Line 1009, Address: 0x1bacf4, Func Offset: 0x1d4
	// Line 1010, Address: 0x1bad04, Func Offset: 0x1e4
	// Line 1011, Address: 0x1bad0c, Func Offset: 0x1ec
	// Line 1012, Address: 0x1bad14, Func Offset: 0x1f4
	// Line 1013, Address: 0x1bad1c, Func Offset: 0x1fc
	// Line 1014, Address: 0x1bad20, Func Offset: 0x200
	// Line 1015, Address: 0x1bad34, Func Offset: 0x214
	// Line 1016, Address: 0x1bad54, Func Offset: 0x234
	// Line 1018, Address: 0x1bad88, Func Offset: 0x268
	// Line 1019, Address: 0x1bad94, Func Offset: 0x274
	// Func End, Address: 0x1badc0, Func Offset: 0x2a0
}

// 
// Start address: 0x1badc0
void fontSetYesNo(int y)
{
	int w2;
	int w;
	// Line 1025, Address: 0x1badc0, Func Offset: 0
	// Line 1027, Address: 0x1badd4, Func Offset: 0x14
	// Line 1028, Address: 0x1bae08, Func Offset: 0x48
	// Line 1029, Address: 0x1bae3c, Func Offset: 0x7c
	// Line 1030, Address: 0x1bae5c, Func Offset: 0x9c
	// Line 1031, Address: 0x1bae68, Func Offset: 0xa8
	// Func End, Address: 0x1bae80, Func Offset: 0xc0
}

// 
// Start address: 0x1bae80
int fontPrintWord(unsigned short* str, int x, int y, int align, int align2)
{
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
	// Line 1044, Address: 0x1bae80, Func Offset: 0
	// Line 1050, Address: 0x1baec0, Func Offset: 0x40
	// Line 1051, Address: 0x1baecc, Func Offset: 0x4c
	// Line 1052, Address: 0x1baed8, Func Offset: 0x58
	// Line 1053, Address: 0x1baee4, Func Offset: 0x64
	// Line 1054, Address: 0x1baeec, Func Offset: 0x6c
	// Line 1055, Address: 0x1baef0, Func Offset: 0x70
	// Line 1056, Address: 0x1baef4, Func Offset: 0x74
	// Line 1057, Address: 0x1baf0c, Func Offset: 0x8c
	// Line 1058, Address: 0x1baf20, Func Offset: 0xa0
	// Line 1059, Address: 0x1baf30, Func Offset: 0xb0
	// Line 1060, Address: 0x1baf3c, Func Offset: 0xbc
	// Line 1061, Address: 0x1baf44, Func Offset: 0xc4
	// Line 1062, Address: 0x1baf6c, Func Offset: 0xec
	// Line 1064, Address: 0x1baf90, Func Offset: 0x110
	// Line 1067, Address: 0x1bafb8, Func Offset: 0x138
	// Line 1068, Address: 0x1bafd0, Func Offset: 0x150
	// Line 1069, Address: 0x1bafd8, Func Offset: 0x158
	// Line 1070, Address: 0x1bafe8, Func Offset: 0x168
	// Line 1071, Address: 0x1baff4, Func Offset: 0x174
	// Line 1072, Address: 0x1bb024, Func Offset: 0x1a4
	// Line 1073, Address: 0x1bb02c, Func Offset: 0x1ac
	// Line 1074, Address: 0x1bb03c, Func Offset: 0x1bc
	// Line 1075, Address: 0x1bb054, Func Offset: 0x1d4
	// Line 1076, Address: 0x1bb05c, Func Offset: 0x1dc
	// Line 1080, Address: 0x1bb0b4, Func Offset: 0x234
	// Line 1081, Address: 0x1bb0e4, Func Offset: 0x264
	// Line 1083, Address: 0x1bb108, Func Offset: 0x288
	// Line 1084, Address: 0x1bb120, Func Offset: 0x2a0
	// Line 1086, Address: 0x1bb128, Func Offset: 0x2a8
	// Line 1087, Address: 0x1bb14c, Func Offset: 0x2cc
	// Line 1088, Address: 0x1bb168, Func Offset: 0x2e8
	// Line 1091, Address: 0x1bb16c, Func Offset: 0x2ec
	// Line 1092, Address: 0x1bb174, Func Offset: 0x2f4
	// Line 1093, Address: 0x1bb184, Func Offset: 0x304
	// Line 1094, Address: 0x1bb19c, Func Offset: 0x31c
	// Line 1095, Address: 0x1bb1b4, Func Offset: 0x334
	// Line 1096, Address: 0x1bb1cc, Func Offset: 0x34c
	// Line 1097, Address: 0x1bb1e4, Func Offset: 0x364
	// Line 1098, Address: 0x1bb1ec, Func Offset: 0x36c
	// Line 1100, Address: 0x1bb1f0, Func Offset: 0x370
	// Line 1101, Address: 0x1bb1f8, Func Offset: 0x378
	// Line 1102, Address: 0x1bb2c8, Func Offset: 0x448
	// Line 1103, Address: 0x1bb2e8, Func Offset: 0x468
	// Line 1104, Address: 0x1bb2f8, Func Offset: 0x478
	// Line 1105, Address: 0x1bb304, Func Offset: 0x484
	// Line 1106, Address: 0x1bb328, Func Offset: 0x4a8
	// Line 1110, Address: 0x1bb344, Func Offset: 0x4c4
	// Line 1111, Address: 0x1bb350, Func Offset: 0x4d0
	// Line 1112, Address: 0x1bb38c, Func Offset: 0x50c
	// Line 1113, Address: 0x1bb394, Func Offset: 0x514
	// Line 1115, Address: 0x1bb3a0, Func Offset: 0x520
	// Line 1116, Address: 0x1bb3a4, Func Offset: 0x524
	// Line 1117, Address: 0x1bb3ac, Func Offset: 0x52c
	// Line 1118, Address: 0x1bb3b0, Func Offset: 0x530
	// Line 1119, Address: 0x1bb3c4, Func Offset: 0x544
	// Line 1120, Address: 0x1bb3cc, Func Offset: 0x54c
	// Line 1122, Address: 0x1bb3f0, Func Offset: 0x570
	// Line 1123, Address: 0x1bb42c, Func Offset: 0x5ac
	// Line 1125, Address: 0x1bb434, Func Offset: 0x5b4
	// Line 1126, Address: 0x1bb464, Func Offset: 0x5e4
	// Line 1128, Address: 0x1bb46c, Func Offset: 0x5ec
	// Line 1131, Address: 0x1bb478, Func Offset: 0x5f8
	// Line 1132, Address: 0x1bb480, Func Offset: 0x600
	// Line 1133, Address: 0x1bb490, Func Offset: 0x610
	// Line 1134, Address: 0x1bb49c, Func Offset: 0x61c
	// Line 1135, Address: 0x1bb4cc, Func Offset: 0x64c
	// Line 1136, Address: 0x1bb4d4, Func Offset: 0x654
	// Line 1137, Address: 0x1bb4e8, Func Offset: 0x668
	// Line 1138, Address: 0x1bb4f8, Func Offset: 0x678
	// Line 1139, Address: 0x1bb510, Func Offset: 0x690
	// Line 1140, Address: 0x1bb518, Func Offset: 0x698
	// Line 1144, Address: 0x1bb570, Func Offset: 0x6f0
	// Line 1145, Address: 0x1bb5a0, Func Offset: 0x720
	// Line 1147, Address: 0x1bb5b8, Func Offset: 0x738
	// Line 1148, Address: 0x1bb5d4, Func Offset: 0x754
	// Line 1150, Address: 0x1bb5dc, Func Offset: 0x75c
	// Line 1151, Address: 0x1bb5f0, Func Offset: 0x770
	// Line 1154, Address: 0x1bb604, Func Offset: 0x784
	// Line 1155, Address: 0x1bb60c, Func Offset: 0x78c
	// Line 1156, Address: 0x1bb61c, Func Offset: 0x79c
	// Line 1157, Address: 0x1bb634, Func Offset: 0x7b4
	// Line 1158, Address: 0x1bb64c, Func Offset: 0x7cc
	// Line 1159, Address: 0x1bb664, Func Offset: 0x7e4
	// Line 1160, Address: 0x1bb67c, Func Offset: 0x7fc
	// Line 1161, Address: 0x1bb684, Func Offset: 0x804
	// Line 1163, Address: 0x1bb688, Func Offset: 0x808
	// Line 1164, Address: 0x1bb690, Func Offset: 0x810
	// Line 1165, Address: 0x1bb748, Func Offset: 0x8c8
	// Line 1166, Address: 0x1bb768, Func Offset: 0x8e8
	// Line 1167, Address: 0x1bb788, Func Offset: 0x908
	// Line 1168, Address: 0x1bb798, Func Offset: 0x918
	// Line 1169, Address: 0x1bb7b4, Func Offset: 0x934
	// Line 1170, Address: 0x1bb7bc, Func Offset: 0x93c
	// Line 1171, Address: 0x1bb890, Func Offset: 0xa10
	// Line 1173, Address: 0x1bb8b0, Func Offset: 0xa30
	// Line 1174, Address: 0x1bb8bc, Func Offset: 0xa3c
	// Line 1175, Address: 0x1bb8d0, Func Offset: 0xa50
	// Line 1176, Address: 0x1bb8d8, Func Offset: 0xa58
	// Func End, Address: 0x1bb90c, Func Offset: 0xa8c
}

// 
// Start address: 0x1bb910
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
	// Line 1340, Address: 0x1bb910, Func Offset: 0
	// Line 1345, Address: 0x1bb944, Func Offset: 0x34
	// Line 1346, Address: 0x1bb95c, Func Offset: 0x4c
	// Line 1347, Address: 0x1bb960, Func Offset: 0x50
	// Line 1348, Address: 0x1bb968, Func Offset: 0x58
	// Line 1349, Address: 0x1bb96c, Func Offset: 0x5c
	// Line 1350, Address: 0x1bb970, Func Offset: 0x60
	// Line 1351, Address: 0x1bb974, Func Offset: 0x64
	// Line 1352, Address: 0x1bb978, Func Offset: 0x68
	// Line 1353, Address: 0x1bb98c, Func Offset: 0x7c
	// Line 1354, Address: 0x1bb998, Func Offset: 0x88
	// Line 1355, Address: 0x1bb9a4, Func Offset: 0x94
	// Line 1356, Address: 0x1bb9ac, Func Offset: 0x9c
	// Line 1357, Address: 0x1bb9d0, Func Offset: 0xc0
	// Line 1359, Address: 0x1bb9f4, Func Offset: 0xe4
	// Line 1362, Address: 0x1bba18, Func Offset: 0x108
	// Line 1363, Address: 0x1bba2c, Func Offset: 0x11c
	// Line 1364, Address: 0x1bba34, Func Offset: 0x124
	// Line 1365, Address: 0x1bba44, Func Offset: 0x134
	// Line 1366, Address: 0x1bba50, Func Offset: 0x140
	// Line 1367, Address: 0x1bba80, Func Offset: 0x170
	// Line 1368, Address: 0x1bba88, Func Offset: 0x178
	// Line 1369, Address: 0x1bba98, Func Offset: 0x188
	// Line 1370, Address: 0x1bbab0, Func Offset: 0x1a0
	// Line 1371, Address: 0x1bbab8, Func Offset: 0x1a8
	// Line 1375, Address: 0x1bbb10, Func Offset: 0x200
	// Line 1376, Address: 0x1bbb40, Func Offset: 0x230
	// Line 1378, Address: 0x1bbb64, Func Offset: 0x254
	// Line 1379, Address: 0x1bbb7c, Func Offset: 0x26c
	// Line 1381, Address: 0x1bbb84, Func Offset: 0x274
	// Line 1382, Address: 0x1bbbac, Func Offset: 0x29c
	// Line 1383, Address: 0x1bbbb0, Func Offset: 0x2a0
	// Line 1385, Address: 0x1bbbb8, Func Offset: 0x2a8
	// Line 1387, Address: 0x1bbbe0, Func Offset: 0x2d0
	// Line 1389, Address: 0x1bbbf8, Func Offset: 0x2e8
	// Line 1390, Address: 0x1bbbfc, Func Offset: 0x2ec
	// Line 1391, Address: 0x1bbc00, Func Offset: 0x2f0
	// Line 1392, Address: 0x1bbc2c, Func Offset: 0x31c
	// Line 1395, Address: 0x1bbc30, Func Offset: 0x320
	// Line 1396, Address: 0x1bbc38, Func Offset: 0x328
	// Line 1397, Address: 0x1bbc48, Func Offset: 0x338
	// Line 1398, Address: 0x1bbc60, Func Offset: 0x350
	// Line 1399, Address: 0x1bbc78, Func Offset: 0x368
	// Line 1400, Address: 0x1bbc90, Func Offset: 0x380
	// Line 1401, Address: 0x1bbca8, Func Offset: 0x398
	// Line 1404, Address: 0x1bbcb0, Func Offset: 0x3a0
	// Line 1405, Address: 0x1bbcb8, Func Offset: 0x3a8
	// Line 1406, Address: 0x1bbd64, Func Offset: 0x454
	// Line 1407, Address: 0x1bbd80, Func Offset: 0x470
	// Line 1408, Address: 0x1bbd98, Func Offset: 0x488
	// Line 1409, Address: 0x1bbd9c, Func Offset: 0x48c
	// Line 1410, Address: 0x1bbda0, Func Offset: 0x490
	// Line 1411, Address: 0x1bbda4, Func Offset: 0x494
	// Line 1412, Address: 0x1bbdac, Func Offset: 0x49c
	// Line 1413, Address: 0x1bbe5c, Func Offset: 0x54c
	// Line 1415, Address: 0x1bbe78, Func Offset: 0x568
	// Line 1416, Address: 0x1bbe88, Func Offset: 0x578
	// Line 1417, Address: 0x1bbe94, Func Offset: 0x584
	// Line 1419, Address: 0x1bbebc, Func Offset: 0x5ac
	// Line 1420, Address: 0x1bbec4, Func Offset: 0x5b4
	// Func End, Address: 0x1bbef8, Func Offset: 0x5e8
}

// 
// Start address: 0x1bbf00
void fontSetColor(int num)
{
	unsigned int font_color[2][17];
	// Line 1426, Address: 0x1bbf00, Func Offset: 0
	// Line 1428, Address: 0x1bbf14, Func Offset: 0x14
	// Line 1449, Address: 0x1bbf50, Func Offset: 0x50
	// Line 1450, Address: 0x1bbfa8, Func Offset: 0xa8
	// Line 1451, Address: 0x1bbfc0, Func Offset: 0xc0
	// Line 1452, Address: 0x1bbfd8, Func Offset: 0xd8
	// Func End, Address: 0x1bbff0, Func Offset: 0xf0
}

// 
// Start address: 0x1bbff0
void fontSetColorDirect(unsigned char r, unsigned char g, unsigned char b, unsigned char alp)
{
	// Line 1459, Address: 0x1bbff0, Func Offset: 0
	// Line 1460, Address: 0x1bc004, Func Offset: 0x14
	// Line 1461, Address: 0x1bc03c, Func Offset: 0x4c
	// Line 1462, Address: 0x1bc04c, Func Offset: 0x5c
	// Func End, Address: 0x1bc058, Func Offset: 0x68
}

// 
// Start address: 0x1bc060
void fontSetAlpha(unsigned char alp)
{
	// Line 1468, Address: 0x1bc060, Func Offset: 0
	// Line 1469, Address: 0x1bc068, Func Offset: 0x8
	// Line 1470, Address: 0x1bc078, Func Offset: 0x18
	// Func End, Address: 0x1bc084, Func Offset: 0x24
}

// 
// Start address: 0x1bc090
<unknown fundamental type (0xa510)>* fontFlush()
{
	WFONT_STREAM_DATA* wstream;
	unsigned long* pgtag2;
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
	// Line 1502, Address: 0x1bc090, Func Offset: 0
	// Line 1513, Address: 0x1bc0bc, Func Offset: 0x2c
	// Line 1514, Address: 0x1bc0c0, Func Offset: 0x30
	// Line 1519, Address: 0x1bc0c4, Func Offset: 0x34
	// Line 1522, Address: 0x1bc118, Func Offset: 0x88
	// Line 1523, Address: 0x1bc130, Func Offset: 0xa0
	// Line 1524, Address: 0x1bc134, Func Offset: 0xa4
	// Line 1525, Address: 0x1bc148, Func Offset: 0xb8
	// Line 1526, Address: 0x1bc158, Func Offset: 0xc8
	// Line 1527, Address: 0x1bc160, Func Offset: 0xd0
	// Line 1529, Address: 0x1bc174, Func Offset: 0xe4
	// Line 1530, Address: 0x1bc190, Func Offset: 0x100
	// Line 1531, Address: 0x1bc19c, Func Offset: 0x10c
	// Line 1532, Address: 0x1bc1a0, Func Offset: 0x110
	// Line 1533, Address: 0x1bc1a8, Func Offset: 0x118
	// Line 1534, Address: 0x1bc1b4, Func Offset: 0x124
	// Line 1536, Address: 0x1bc1c0, Func Offset: 0x130
	// Line 1537, Address: 0x1bc1cc, Func Offset: 0x13c
	// Line 1539, Address: 0x1bc1d8, Func Offset: 0x148
	// Line 1541, Address: 0x1bc1fc, Func Offset: 0x16c
	// Line 1545, Address: 0x1bc220, Func Offset: 0x190
	// Line 1547, Address: 0x1bc230, Func Offset: 0x1a0
	// Line 1550, Address: 0x1bc23c, Func Offset: 0x1ac
	// Line 1551, Address: 0x1bc258, Func Offset: 0x1c8
	// Line 1552, Address: 0x1bc260, Func Offset: 0x1d0
	// Line 1553, Address: 0x1bc27c, Func Offset: 0x1ec
	// Line 1554, Address: 0x1bc284, Func Offset: 0x1f4
	// Line 1555, Address: 0x1bc28c, Func Offset: 0x1fc
	// Line 1557, Address: 0x1bc294, Func Offset: 0x204
	// Line 1561, Address: 0x1bc2a0, Func Offset: 0x210
	// Line 1564, Address: 0x1bc2c0, Func Offset: 0x230
	// Line 1565, Address: 0x1bc2d4, Func Offset: 0x244
	// Line 1566, Address: 0x1bc2e4, Func Offset: 0x254
	// Line 1567, Address: 0x1bc2f8, Func Offset: 0x268
	// Line 1568, Address: 0x1bc310, Func Offset: 0x280
	// Line 1569, Address: 0x1bc324, Func Offset: 0x294
	// Line 1570, Address: 0x1bc338, Func Offset: 0x2a8
	// Line 1571, Address: 0x1bc34c, Func Offset: 0x2bc
	// Line 1572, Address: 0x1bc360, Func Offset: 0x2d0
	// Line 1573, Address: 0x1bc374, Func Offset: 0x2e4
	// Line 1574, Address: 0x1bc384, Func Offset: 0x2f4
	// Line 1575, Address: 0x1bc394, Func Offset: 0x304
	// Line 1576, Address: 0x1bc3a8, Func Offset: 0x318
	// Line 1577, Address: 0x1bc3bc, Func Offset: 0x32c
	// Line 1578, Address: 0x1bc3cc, Func Offset: 0x33c
	// Line 1579, Address: 0x1bc3e0, Func Offset: 0x350
	// Line 1580, Address: 0x1bc404, Func Offset: 0x374
	// Line 1584, Address: 0x1bc418, Func Offset: 0x388
	// Line 1585, Address: 0x1bc428, Func Offset: 0x398
	// Line 1586, Address: 0x1bc444, Func Offset: 0x3b4
	// Line 1587, Address: 0x1bc468, Func Offset: 0x3d8
	// Line 1588, Address: 0x1bc484, Func Offset: 0x3f4
	// Line 1589, Address: 0x1bc4a0, Func Offset: 0x410
	// Line 1590, Address: 0x1bc4ac, Func Offset: 0x41c
	// Line 1591, Address: 0x1bc4c0, Func Offset: 0x430
	// Line 1592, Address: 0x1bc4d4, Func Offset: 0x444
	// Line 1593, Address: 0x1bc4e0, Func Offset: 0x450
	// Line 1594, Address: 0x1bc4f4, Func Offset: 0x464
	// Line 1595, Address: 0x1bc4f8, Func Offset: 0x468
	// Line 1596, Address: 0x1bc504, Func Offset: 0x474
	// Line 1597, Address: 0x1bc50c, Func Offset: 0x47c
	// Line 1598, Address: 0x1bc51c, Func Offset: 0x48c
	// Line 1599, Address: 0x1bc534, Func Offset: 0x4a4
	// Line 1600, Address: 0x1bc54c, Func Offset: 0x4bc
	// Line 1601, Address: 0x1bc564, Func Offset: 0x4d4
	// Line 1602, Address: 0x1bc56c, Func Offset: 0x4dc
	// Line 1603, Address: 0x1bc578, Func Offset: 0x4e8
	// Line 1604, Address: 0x1bc58c, Func Offset: 0x4fc
	// Line 1605, Address: 0x1bc598, Func Offset: 0x508
	// Line 1606, Address: 0x1bc5a4, Func Offset: 0x514
	// Line 1607, Address: 0x1bc5ac, Func Offset: 0x51c
	// Line 1608, Address: 0x1bc5b0, Func Offset: 0x520
	// Line 1609, Address: 0x1bc5bc, Func Offset: 0x52c
	// Line 1611, Address: 0x1bc5c8, Func Offset: 0x538
	// Line 1612, Address: 0x1bc5e0, Func Offset: 0x550
	// Line 1613, Address: 0x1bc5f8, Func Offset: 0x568
	// Line 1614, Address: 0x1bc620, Func Offset: 0x590
	// Line 1617, Address: 0x1bc630, Func Offset: 0x5a0
	// Line 1618, Address: 0x1bc638, Func Offset: 0x5a8
	// Line 1619, Address: 0x1bc640, Func Offset: 0x5b0
	// Line 1620, Address: 0x1bc654, Func Offset: 0x5c4
	// Line 1621, Address: 0x1bc668, Func Offset: 0x5d8
	// Line 1624, Address: 0x1bc678, Func Offset: 0x5e8
	// Line 1625, Address: 0x1bc684, Func Offset: 0x5f4
	// Line 1626, Address: 0x1bc688, Func Offset: 0x5f8
	// Line 1627, Address: 0x1bc698, Func Offset: 0x608
	// Line 1628, Address: 0x1bc6a4, Func Offset: 0x614
	// Line 1629, Address: 0x1bc6b0, Func Offset: 0x620
	// Line 1630, Address: 0x1bc6c4, Func Offset: 0x634
	// Line 1631, Address: 0x1bc6d8, Func Offset: 0x648
	// Line 1632, Address: 0x1bc6e4, Func Offset: 0x654
	// Line 1634, Address: 0x1bc6f4, Func Offset: 0x664
	// Line 1635, Address: 0x1bc72c, Func Offset: 0x69c
	// Line 1636, Address: 0x1bc738, Func Offset: 0x6a8
	// Line 1640, Address: 0x1bc744, Func Offset: 0x6b4
	// Line 1642, Address: 0x1bc754, Func Offset: 0x6c4
	// Line 1644, Address: 0x1bc75c, Func Offset: 0x6cc
	// Line 1647, Address: 0x1bc77c, Func Offset: 0x6ec
	// Line 1648, Address: 0x1bc78c, Func Offset: 0x6fc
	// Line 1649, Address: 0x1bc7a8, Func Offset: 0x718
	// Line 1652, Address: 0x1bc7bc, Func Offset: 0x72c
	// Line 1653, Address: 0x1bc7c0, Func Offset: 0x730
	// Line 1654, Address: 0x1bc7dc, Func Offset: 0x74c
	// Line 1655, Address: 0x1bc800, Func Offset: 0x770
	// Line 1656, Address: 0x1bc808, Func Offset: 0x778
	// Line 1657, Address: 0x1bc824, Func Offset: 0x794
	// Line 1658, Address: 0x1bc82c, Func Offset: 0x79c
	// Line 1659, Address: 0x1bc83c, Func Offset: 0x7ac
	// Line 1660, Address: 0x1bc844, Func Offset: 0x7b4
	// Line 1661, Address: 0x1bc84c, Func Offset: 0x7bc
	// Line 1662, Address: 0x1bc854, Func Offset: 0x7c4
	// Line 1663, Address: 0x1bc85c, Func Offset: 0x7cc
	// Line 1664, Address: 0x1bc864, Func Offset: 0x7d4
	// Line 1665, Address: 0x1bc86c, Func Offset: 0x7dc
	// Line 1666, Address: 0x1bc878, Func Offset: 0x7e8
	// Line 1668, Address: 0x1bc884, Func Offset: 0x7f4
	// Line 1669, Address: 0x1bc89c, Func Offset: 0x80c
	// Line 1670, Address: 0x1bc8b4, Func Offset: 0x824
	// Line 1671, Address: 0x1bc8dc, Func Offset: 0x84c
	// Line 1672, Address: 0x1bc8ec, Func Offset: 0x85c
	// Line 1674, Address: 0x1bc8f0, Func Offset: 0x860
	// Line 1675, Address: 0x1bc8f8, Func Offset: 0x868
	// Line 1676, Address: 0x1bc900, Func Offset: 0x870
	// Line 1677, Address: 0x1bc914, Func Offset: 0x884
	// Line 1678, Address: 0x1bc928, Func Offset: 0x898
	// Line 1679, Address: 0x1bc938, Func Offset: 0x8a8
	// Line 1680, Address: 0x1bc93c, Func Offset: 0x8ac
	// Line 1681, Address: 0x1bc950, Func Offset: 0x8c0
	// Line 1682, Address: 0x1bc95c, Func Offset: 0x8cc
	// Line 1683, Address: 0x1bc990, Func Offset: 0x900
	// Line 1684, Address: 0x1bc99c, Func Offset: 0x90c
	// Line 1685, Address: 0x1bc9a4, Func Offset: 0x914
	// Line 1686, Address: 0x1bc9ac, Func Offset: 0x91c
	// Line 1692, Address: 0x1bc9cc, Func Offset: 0x93c
	// Line 1693, Address: 0x1bc9d8, Func Offset: 0x948
	// Line 1694, Address: 0x1bc9dc, Func Offset: 0x94c
	// Line 1695, Address: 0x1bc9f8, Func Offset: 0x968
	// Line 1696, Address: 0x1bca18, Func Offset: 0x988
	// Line 1697, Address: 0x1bca24, Func Offset: 0x994
	// Line 1698, Address: 0x1bca34, Func Offset: 0x9a4
	// Line 1699, Address: 0x1bca3c, Func Offset: 0x9ac
	// Line 1700, Address: 0x1bca58, Func Offset: 0x9c8
	// Line 1701, Address: 0x1bca68, Func Offset: 0x9d8
	// Line 1702, Address: 0x1bca74, Func Offset: 0x9e4
	// Line 1703, Address: 0x1bca8c, Func Offset: 0x9fc
	// Line 1704, Address: 0x1bcaa8, Func Offset: 0xa18
	// Line 1705, Address: 0x1bcabc, Func Offset: 0xa2c
	// Line 1706, Address: 0x1bcae4, Func Offset: 0xa54
	// Line 1707, Address: 0x1bcb1c, Func Offset: 0xa8c
	// Line 1708, Address: 0x1bcb50, Func Offset: 0xac0
	// Line 1709, Address: 0x1bcb74, Func Offset: 0xae4
	// Line 1710, Address: 0x1bcba8, Func Offset: 0xb18
	// Line 1711, Address: 0x1bcbd8, Func Offset: 0xb48
	// Line 1712, Address: 0x1bcbe8, Func Offset: 0xb58
	// Line 1713, Address: 0x1bcbf8, Func Offset: 0xb68
	// Line 1714, Address: 0x1bcc04, Func Offset: 0xb74
	// Line 1715, Address: 0x1bcc38, Func Offset: 0xba8
	// Line 1716, Address: 0x1bcc40, Func Offset: 0xbb0
	// Line 1718, Address: 0x1bcc50, Func Offset: 0xbc0
	// Line 1719, Address: 0x1bcc8c, Func Offset: 0xbfc
	// Line 1720, Address: 0x1bccbc, Func Offset: 0xc2c
	// Line 1721, Address: 0x1bccf8, Func Offset: 0xc68
	// Line 1722, Address: 0x1bcd10, Func Offset: 0xc80
	// Line 1723, Address: 0x1bcd5c, Func Offset: 0xccc
	// Line 1728, Address: 0x1bcd74, Func Offset: 0xce4
	// Line 1729, Address: 0x1bcd80, Func Offset: 0xcf0
	// Line 1730, Address: 0x1bcd84, Func Offset: 0xcf4
	// Line 1731, Address: 0x1bcda0, Func Offset: 0xd10
	// Line 1732, Address: 0x1bcdb8, Func Offset: 0xd28
	// Line 1733, Address: 0x1bcdc4, Func Offset: 0xd34
	// Line 1734, Address: 0x1bcdd0, Func Offset: 0xd40
	// Line 1735, Address: 0x1bcdd8, Func Offset: 0xd48
	// Line 1736, Address: 0x1bcdf0, Func Offset: 0xd60
	// Line 1737, Address: 0x1bce00, Func Offset: 0xd70
	// Line 1738, Address: 0x1bce08, Func Offset: 0xd78
	// Line 1739, Address: 0x1bce14, Func Offset: 0xd84
	// Line 1740, Address: 0x1bce20, Func Offset: 0xd90
	// Line 1741, Address: 0x1bce28, Func Offset: 0xd98
	// Line 1742, Address: 0x1bce3c, Func Offset: 0xdac
	// Line 1743, Address: 0x1bce4c, Func Offset: 0xdbc
	// Line 1744, Address: 0x1bce84, Func Offset: 0xdf4
	// Line 1745, Address: 0x1bce8c, Func Offset: 0xdfc
	// Line 1746, Address: 0x1bce9c, Func Offset: 0xe0c
	// Line 1747, Address: 0x1bcea0, Func Offset: 0xe10
	// Line 1748, Address: 0x1bcee4, Func Offset: 0xe54
	// Line 1749, Address: 0x1bcf2c, Func Offset: 0xe9c
	// Line 1750, Address: 0x1bcf54, Func Offset: 0xec4
	// Line 1751, Address: 0x1bcf8c, Func Offset: 0xefc
	// Line 1752, Address: 0x1bcfc8, Func Offset: 0xf38
	// Line 1753, Address: 0x1bcfe0, Func Offset: 0xf50
	// Line 1754, Address: 0x1bd038, Func Offset: 0xfa8
	// Line 1757, Address: 0x1bd054, Func Offset: 0xfc4
	// Line 1758, Address: 0x1bd060, Func Offset: 0xfd0
	// Line 1759, Address: 0x1bd06c, Func Offset: 0xfdc
	// Line 1760, Address: 0x1bd084, Func Offset: 0xff4
	// Line 1762, Address: 0x1bd098, Func Offset: 0x1008
	// Line 1763, Address: 0x1bd0a0, Func Offset: 0x1010
	// Line 1764, Address: 0x1bd0cc, Func Offset: 0x103c
	// Line 1765, Address: 0x1bd0d8, Func Offset: 0x1048
	// Line 1766, Address: 0x1bd0f0, Func Offset: 0x1060
	// Line 1767, Address: 0x1bd0fc, Func Offset: 0x106c
	// Line 1768, Address: 0x1bd114, Func Offset: 0x1084
	// Line 1769, Address: 0x1bd140, Func Offset: 0x10b0
	// Line 1770, Address: 0x1bd14c, Func Offset: 0x10bc
	// Line 1771, Address: 0x1bd158, Func Offset: 0x10c8
	// Func End, Address: 0x1bd18c, Func Offset: 0x10fc
}

// 
// Start address: 0x1bd190
void fontPut(WFONT_STREAM_DATA* pstr, int z)
{
	// Line 1811, Address: 0x1bd190, Func Offset: 0
	// Line 1822, Address: 0x1bd198, Func Offset: 0x8
	// Line 1823, Address: 0x1bd19c, Func Offset: 0xc
	// Line 1824, Address: 0x1bd1a0, Func Offset: 0x10
	// Line 1825, Address: 0x1bd1a4, Func Offset: 0x14
	// Line 1826, Address: 0x1bd1a8, Func Offset: 0x18
	// Line 1827, Address: 0x1bd1ac, Func Offset: 0x1c
	// Line 1828, Address: 0x1bd1b0, Func Offset: 0x20
	// Line 1829, Address: 0x1bd1b4, Func Offset: 0x24
	// Line 1830, Address: 0x1bd1b8, Func Offset: 0x28
	// Line 1831, Address: 0x1bd1bc, Func Offset: 0x2c
	// Line 1832, Address: 0x1bd1c0, Func Offset: 0x30
	// Line 1833, Address: 0x1bd1c4, Func Offset: 0x34
	// Line 1834, Address: 0x1bd1c8, Func Offset: 0x38
	// Line 1835, Address: 0x1bd1cc, Func Offset: 0x3c
	// Line 1836, Address: 0x1bd1d0, Func Offset: 0x40
	// Line 1838, Address: 0x1bd1d8, Func Offset: 0x48
	// Line 1840, Address: 0x1bd1e0, Func Offset: 0x50
	// Line 1842, Address: 0x1bd1e8, Func Offset: 0x58
	// Line 1844, Address: 0x1bd1f0, Func Offset: 0x60
	// Line 1845, Address: 0x1bd1f4, Func Offset: 0x64
	// Line 1846, Address: 0x1bd1f8, Func Offset: 0x68
	// Line 1847, Address: 0x1bd1fc, Func Offset: 0x6c
	// Line 1848, Address: 0x1bd200, Func Offset: 0x70
	// Line 1849, Address: 0x1bd204, Func Offset: 0x74
	// Line 1850, Address: 0x1bd208, Func Offset: 0x78
	// Line 1851, Address: 0x1bd20c, Func Offset: 0x7c
	// Line 1852, Address: 0x1bd210, Func Offset: 0x80
	// Line 1853, Address: 0x1bd214, Func Offset: 0x84
	// Line 1854, Address: 0x1bd218, Func Offset: 0x88
	// Line 1855, Address: 0x1bd21c, Func Offset: 0x8c
	// Line 1856, Address: 0x1bd220, Func Offset: 0x90
	// Line 1857, Address: 0x1bd224, Func Offset: 0x94
	// Line 1858, Address: 0x1bd228, Func Offset: 0x98
	// Line 1859, Address: 0x1bd22c, Func Offset: 0x9c
	// Line 1860, Address: 0x1bd230, Func Offset: 0xa0
	// Line 1861, Address: 0x1bd234, Func Offset: 0xa4
	// Line 1862, Address: 0x1bd238, Func Offset: 0xa8
	// Line 1863, Address: 0x1bd23c, Func Offset: 0xac
	// Line 1864, Address: 0x1bd240, Func Offset: 0xb0
	// Line 1865, Address: 0x1bd244, Func Offset: 0xb4
	// Line 1866, Address: 0x1bd248, Func Offset: 0xb8
	// Line 1867, Address: 0x1bd24c, Func Offset: 0xbc
	// Line 1868, Address: 0x1bd250, Func Offset: 0xc0
	// Line 1869, Address: 0x1bd254, Func Offset: 0xc4
	// Line 1870, Address: 0x1bd258, Func Offset: 0xc8
	// Line 1871, Address: 0x1bd25c, Func Offset: 0xcc
	// Line 1872, Address: 0x1bd260, Func Offset: 0xd0
	// Line 1873, Address: 0x1bd264, Func Offset: 0xd4
	// Line 1874, Address: 0x1bd268, Func Offset: 0xd8
	// Line 1875, Address: 0x1bd26c, Func Offset: 0xdc
	// Line 1876, Address: 0x1bd270, Func Offset: 0xe0
	// Line 1877, Address: 0x1bd274, Func Offset: 0xe4
	// Line 1878, Address: 0x1bd278, Func Offset: 0xe8
	// Line 1879, Address: 0x1bd27c, Func Offset: 0xec
	// Line 1885, Address: 0x1bd280, Func Offset: 0xf0
	// Func End, Address: 0x1bd288, Func Offset: 0xf8
}

// 
// Start address: 0x1bd290
void fontPutSelectBar()
{
	unsigned long* pCur;
	int z;
	int y1;
	int x1;
	int y0;
	int x0;
	// Line 1892, Address: 0x1bd290, Func Offset: 0
	// Line 1893, Address: 0x1bd298, Func Offset: 0x8
	// Line 1894, Address: 0x1bd2a8, Func Offset: 0x18
	// Line 1895, Address: 0x1bd2b8, Func Offset: 0x28
	// Line 1896, Address: 0x1bd2ec, Func Offset: 0x5c
	// Line 1897, Address: 0x1bd320, Func Offset: 0x90
	// Line 1902, Address: 0x1bd328, Func Offset: 0x98
	// Line 1905, Address: 0x1bd344, Func Offset: 0xb4
	// Line 1906, Address: 0x1bd354, Func Offset: 0xc4
	// Line 1907, Address: 0x1bd364, Func Offset: 0xd4
	// Line 1908, Address: 0x1bd374, Func Offset: 0xe4
	// Line 1909, Address: 0x1bd384, Func Offset: 0xf4
	// Line 1910, Address: 0x1bd394, Func Offset: 0x104
	// Line 1911, Address: 0x1bd3a0, Func Offset: 0x110
	// Line 1922, Address: 0x1bd3b0, Func Offset: 0x120
	// Line 1923, Address: 0x1bd3c8, Func Offset: 0x138
	// Line 1924, Address: 0x1bd3d8, Func Offset: 0x148
	// Line 1925, Address: 0x1bd3ec, Func Offset: 0x15c
	// Line 1926, Address: 0x1bd400, Func Offset: 0x170
	// Line 1927, Address: 0x1bd414, Func Offset: 0x184
	// Line 1929, Address: 0x1bd420, Func Offset: 0x190
	// Line 1930, Address: 0x1bd428, Func Offset: 0x198
	// Func End, Address: 0x1bd430, Func Offset: 0x1a0
}

// 
// Start address: 0x1bd430
void fontPutYesNoSelectBar()
{
	unsigned long* pCur;
	int z;
	int y1;
	int x1;
	int y0;
	int x0;
	// Line 1937, Address: 0x1bd430, Func Offset: 0
	// Line 1938, Address: 0x1bd438, Func Offset: 0x8
	// Line 1939, Address: 0x1bd450, Func Offset: 0x20
	// Line 1940, Address: 0x1bd454, Func Offset: 0x24
	// Line 1941, Address: 0x1bd45c, Func Offset: 0x2c
	// Line 1943, Address: 0x1bd460, Func Offset: 0x30
	// Line 1944, Address: 0x1bd490, Func Offset: 0x60
	// Line 1945, Address: 0x1bd4c0, Func Offset: 0x90
	// Line 1946, Address: 0x1bd4d0, Func Offset: 0xa0
	// Line 1947, Address: 0x1bd4e0, Func Offset: 0xb0
	// Line 1952, Address: 0x1bd4e8, Func Offset: 0xb8
	// Line 1955, Address: 0x1bd504, Func Offset: 0xd4
	// Line 1956, Address: 0x1bd514, Func Offset: 0xe4
	// Line 1957, Address: 0x1bd524, Func Offset: 0xf4
	// Line 1958, Address: 0x1bd534, Func Offset: 0x104
	// Line 1959, Address: 0x1bd544, Func Offset: 0x114
	// Line 1960, Address: 0x1bd554, Func Offset: 0x124
	// Line 1961, Address: 0x1bd560, Func Offset: 0x130
	// Line 1972, Address: 0x1bd570, Func Offset: 0x140
	// Line 1973, Address: 0x1bd588, Func Offset: 0x158
	// Line 1974, Address: 0x1bd598, Func Offset: 0x168
	// Line 1975, Address: 0x1bd5ac, Func Offset: 0x17c
	// Line 1976, Address: 0x1bd5c0, Func Offset: 0x190
	// Line 1977, Address: 0x1bd5d4, Func Offset: 0x1a4
	// Line 1979, Address: 0x1bd5e0, Func Offset: 0x1b0
	// Line 1980, Address: 0x1bd5e8, Func Offset: 0x1b8
	// Func End, Address: 0x1bd5f0, Func Offset: 0x1c0
}

// 
// Start address: 0x1bd5f0
void* fontTexLoad(int texadr, int clutadr)
{
	// Line 1988, Address: 0x1bd5f0, Func Offset: 0
	// Line 1989, Address: 0x1bd5fc, Func Offset: 0xc
	// Line 1990, Address: 0x1bd62c, Func Offset: 0x3c
	// Line 1991, Address: 0x1bd650, Func Offset: 0x60
	// Line 1993, Address: 0x1bd6bc, Func Offset: 0xcc
	// Line 1994, Address: 0x1bd6c4, Func Offset: 0xd4
	// Func End, Address: 0x1bd6d0, Func Offset: 0xe0
}

// 
// Start address: 0x1bd6d0
void fontEachTurn()
{
	// Line 1999, Address: 0x1bd6d0, Func Offset: 0
	// Line 2000, Address: 0x1bd6d8, Func Offset: 0x8
	// Line 2002, Address: 0x1bd6e8, Func Offset: 0x18
	// Line 2003, Address: 0x1bd6f8, Func Offset: 0x28
	// Line 2012, Address: 0x1bd700, Func Offset: 0x30
	// Line 2013, Address: 0x1bd714, Func Offset: 0x44
	// Line 2014, Address: 0x1bd72c, Func Offset: 0x5c
	// Line 2015, Address: 0x1bd748, Func Offset: 0x78
	// Line 2016, Address: 0x1bd764, Func Offset: 0x94
	// Line 2017, Address: 0x1bd784, Func Offset: 0xb4
	// Line 2018, Address: 0x1bd7a4, Func Offset: 0xd4
	// Line 2019, Address: 0x1bd7ac, Func Offset: 0xdc
	// Line 2020, Address: 0x1bd7cc, Func Offset: 0xfc
	// Line 2022, Address: 0x1bd7ec, Func Offset: 0x11c
	// Line 2023, Address: 0x1bd810, Func Offset: 0x140
	// Line 2026, Address: 0x1bd834, Func Offset: 0x164
	// Line 2027, Address: 0x1bd850, Func Offset: 0x180
	// Line 2028, Address: 0x1bd86c, Func Offset: 0x19c
	// Line 2029, Address: 0x1bd898, Func Offset: 0x1c8
	// Line 2031, Address: 0x1bd8ac, Func Offset: 0x1dc
	// Line 2032, Address: 0x1bd8c4, Func Offset: 0x1f4
	// Line 2036, Address: 0x1bd8e0, Func Offset: 0x210
	// Line 2037, Address: 0x1bd8e8, Func Offset: 0x218
	// Line 2038, Address: 0x1bd8f0, Func Offset: 0x220
	// Line 2039, Address: 0x1bd8f8, Func Offset: 0x228
	// Line 2040, Address: 0x1bd900, Func Offset: 0x230
	// Line 2044, Address: 0x1bd908, Func Offset: 0x238
	// Func End, Address: 0x1bd918, Func Offset: 0x248
}

// 
// Start address: 0x1bd920
void fontPreload()
{
	int n;
	unsigned char* str_c;
	unsigned short* str;
	unsigned short c;
	// Line 2049, Address: 0x1bd920, Func Offset: 0
	// Line 2052, Address: 0x1bd940, Func Offset: 0x20
	// Line 2053, Address: 0x1bd944, Func Offset: 0x24
	// Line 2054, Address: 0x1bd94c, Func Offset: 0x2c
	// Line 2055, Address: 0x1bd960, Func Offset: 0x40
	// Line 2056, Address: 0x1bd964, Func Offset: 0x44
	// Line 2057, Address: 0x1bd96c, Func Offset: 0x4c
	// Line 2059, Address: 0x1bd970, Func Offset: 0x50
	// Line 2061, Address: 0x1bd988, Func Offset: 0x68
	// Line 2062, Address: 0x1bd990, Func Offset: 0x70
	// Line 2063, Address: 0x1bda38, Func Offset: 0x118
	// Line 2064, Address: 0x1bda50, Func Offset: 0x130
	// Line 2065, Address: 0x1bda6c, Func Offset: 0x14c
	// Line 2066, Address: 0x1bda78, Func Offset: 0x158
	// Line 2067, Address: 0x1bda8c, Func Offset: 0x16c
	// Line 2068, Address: 0x1bda9c, Func Offset: 0x17c
	// Line 2069, Address: 0x1bdab4, Func Offset: 0x194
	// Line 2070, Address: 0x1bdac8, Func Offset: 0x1a8
	// Line 2071, Address: 0x1bdacc, Func Offset: 0x1ac
	// Line 2072, Address: 0x1bdae4, Func Offset: 0x1c4
	// Line 2073, Address: 0x1bdaec, Func Offset: 0x1cc
	// Line 2074, Address: 0x1bdaf8, Func Offset: 0x1d8
	// Line 2075, Address: 0x1bdb10, Func Offset: 0x1f0
	// Line 2076, Address: 0x1bdb14, Func Offset: 0x1f4
	// Line 2077, Address: 0x1bdb18, Func Offset: 0x1f8
	// Line 2078, Address: 0x1bdb28, Func Offset: 0x208
	// Line 2079, Address: 0x1bdb48, Func Offset: 0x228
	// Line 2084, Address: 0x1bdb74, Func Offset: 0x254
	// Line 2085, Address: 0x1bdb7c, Func Offset: 0x25c
	// Line 2086, Address: 0x1bdb84, Func Offset: 0x264
	// Line 2088, Address: 0x1bdb88, Func Offset: 0x268
	// Line 2089, Address: 0x1bdb90, Func Offset: 0x270
	// Func End, Address: 0x1bdbb8, Func Offset: 0x298
}

// 
// Start address: 0x1bdbc0
void fontSetMes(int num, unsigned short* str)
{
	// Line 2107, Address: 0x1bdbc0, Func Offset: 0
	// Line 2109, Address: 0x1bdbd0, Func Offset: 0x10
	// Line 2110, Address: 0x1bdbec, Func Offset: 0x2c
	// Line 2111, Address: 0x1bdbfc, Func Offset: 0x3c
	// Line 2114, Address: 0x1bdc00, Func Offset: 0x40
	// Line 2115, Address: 0x1bdc2c, Func Offset: 0x6c
	// Func End, Address: 0x1bdc3c, Func Offset: 0x7c
}

// 
// Start address: 0x1bdc40
void fontCopyMessage(unsigned short* pto, unsigned short* pfrom)
{
	unsigned short n;
	// Line 2122, Address: 0x1bdc40, Func Offset: 0
	// Line 2125, Address: 0x1bdc50, Func Offset: 0x10
	// Line 2126, Address: 0x1bdc64, Func Offset: 0x24
	// Line 2127, Address: 0x1bdc74, Func Offset: 0x34
	// Line 2128, Address: 0x1bdc84, Func Offset: 0x44
	// Func End, Address: 0x1bdc94, Func Offset: 0x54
}

// 
// Start address: 0x1bdca0
void fontPushButton()
{
	// Line 2134, Address: 0x1bdca0, Func Offset: 0
	// Line 2135, Address: 0x1bdcbc, Func Offset: 0x1c
	// Line 2136, Address: 0x1bdcc8, Func Offset: 0x28
	// Line 2138, Address: 0x1bdcd0, Func Offset: 0x30
	// Line 2140, Address: 0x1bdd0c, Func Offset: 0x6c
	// Line 2145, Address: 0x1bdd14, Func Offset: 0x74
	// Func End, Address: 0x1bdd1c, Func Offset: 0x7c
}

// 
// Start address: 0x1bdd20
void fontPushButton2()
{
	// Line 2152, Address: 0x1bdd20, Func Offset: 0
	// Line 2154, Address: 0x1bdd54, Func Offset: 0x34
	// Line 2159, Address: 0x1bdd5c, Func Offset: 0x3c
	// Func End, Address: 0x1bdd64, Func Offset: 0x44
}

// 
// Start address: 0x1bdd70
void fontSelectUp()
{
	// Line 2165, Address: 0x1bdd70, Func Offset: 0
	// Line 2166, Address: 0x1bdd8c, Func Offset: 0x1c
	// Line 2167, Address: 0x1bdda8, Func Offset: 0x38
	// Line 2168, Address: 0x1bddb0, Func Offset: 0x40
	// Line 2169, Address: 0x1bddb8, Func Offset: 0x48
	// Line 2172, Address: 0x1bddf8, Func Offset: 0x88
	// Func End, Address: 0x1bde00, Func Offset: 0x90
}

// 
// Start address: 0x1bde00
void fontSelectDown()
{
	// Line 2178, Address: 0x1bde00, Func Offset: 0
	// Line 2179, Address: 0x1bde1c, Func Offset: 0x1c
	// Line 2180, Address: 0x1bde38, Func Offset: 0x38
	// Line 2181, Address: 0x1bde44, Func Offset: 0x44
	// Line 2182, Address: 0x1bde4c, Func Offset: 0x4c
	// Line 2185, Address: 0x1bde94, Func Offset: 0x94
	// Func End, Address: 0x1bde9c, Func Offset: 0x9c
}

// 
// Start address: 0x1bdea0
unsigned short* fontGetMesAdr(unsigned short* str, unsigned short num)
{
	// Line 2193, Address: 0x1bdea0, Func Offset: 0
	// Line 2194, Address: 0x1bdeb4, Func Offset: 0x14
	// Line 2195, Address: 0x1bdecc, Func Offset: 0x2c
	// Line 2196, Address: 0x1bdf18, Func Offset: 0x78
	// Line 2197, Address: 0x1bdf44, Func Offset: 0xa4
	// Func End, Address: 0x1bdf58, Func Offset: 0xb8
}

// 
// Start address: 0x1bdf60
void fontMessageNum(unsigned short* str, unsigned short num)
{
	// Line 2228, Address: 0x1bdf60, Func Offset: 0
	// Line 2229, Address: 0x1bdf70, Func Offset: 0x10
	// Line 2230, Address: 0x1bdf8c, Func Offset: 0x2c
	// Func End, Address: 0x1bdf9c, Func Offset: 0x3c
}

// 
// Start address: 0x1bdfa0
void fontMessage(unsigned short* str)
{
	// Line 2236, Address: 0x1bdfa0, Func Offset: 0
	// Line 2237, Address: 0x1bdfac, Func Offset: 0xc
	// Line 2238, Address: 0x1bdfb8, Func Offset: 0x18
	// Line 2239, Address: 0x1bdfc0, Func Offset: 0x20
	// Line 2241, Address: 0x1bdfc8, Func Offset: 0x28
	// Line 2242, Address: 0x1bdfd4, Func Offset: 0x34
	// Line 2243, Address: 0x1bdfec, Func Offset: 0x4c
	// Line 2244, Address: 0x1bdff4, Func Offset: 0x54
	// Line 2245, Address: 0x1be040, Func Offset: 0xa0
	// Line 2246, Address: 0x1be050, Func Offset: 0xb0
	// Line 2247, Address: 0x1be05c, Func Offset: 0xbc
	// Line 2249, Address: 0x1be074, Func Offset: 0xd4
	// Func End, Address: 0x1be084, Func Offset: 0xe4
}

// 
// Start address: 0x1be090
void fontNextMessage()
{
	unsigned int wm;
	// Line 2254, Address: 0x1be090, Func Offset: 0
	// Line 2256, Address: 0x1be09c, Func Offset: 0xc
	// Line 2257, Address: 0x1be0a4, Func Offset: 0x14
	// Line 2258, Address: 0x1be0b8, Func Offset: 0x28
	// Line 2259, Address: 0x1be0c0, Func Offset: 0x30
	// Line 2261, Address: 0x1be0c8, Func Offset: 0x38
	// Line 2262, Address: 0x1be0d4, Func Offset: 0x44
	// Line 2263, Address: 0x1be0ec, Func Offset: 0x5c
	// Line 2264, Address: 0x1be0fc, Func Offset: 0x6c
	// Line 2265, Address: 0x1be114, Func Offset: 0x84
	// Line 2266, Address: 0x1be124, Func Offset: 0x94
	// Line 2267, Address: 0x1be130, Func Offset: 0xa0
	// Line 2268, Address: 0x1be13c, Func Offset: 0xac
	// Line 2269, Address: 0x1be144, Func Offset: 0xb4
	// Line 2270, Address: 0x1be158, Func Offset: 0xc8
	// Line 2271, Address: 0x1be194, Func Offset: 0x104
	// Line 2272, Address: 0x1be1a8, Func Offset: 0x118
	// Line 2274, Address: 0x1be1e8, Func Offset: 0x158
	// Line 2278, Address: 0x1be1fc, Func Offset: 0x16c
	// Func End, Address: 0x1be210, Func Offset: 0x180
}

// 
// Start address: 0x1be210
int fontGetStatus()
{
	// Line 2332, Address: 0x1be210, Func Offset: 0
	// Line 2333, Address: 0x1be22c, Func Offset: 0x1c
	// Line 2334, Address: 0x1be244, Func Offset: 0x34
	// Line 2335, Address: 0x1be25c, Func Offset: 0x4c
	// Line 2337, Address: 0x1be268, Func Offset: 0x58
	// Line 2338, Address: 0x1be26c, Func Offset: 0x5c
	// Func End, Address: 0x1be274, Func Offset: 0x64
}

// 
// Start address: 0x1be280
void fontCrushOn()
{
	// Line 2420, Address: 0x1be280, Func Offset: 0
	// Line 2421, Address: 0x1be28c, Func Offset: 0xc
	// Func End, Address: 0x1be294, Func Offset: 0x14
}

// 
// Start address: 0x1be2a0
void fontCrushOff()
{
	// Line 2427, Address: 0x1be2a0, Func Offset: 0
	// Line 2428, Address: 0x1be2a8, Func Offset: 0x8
	// Func End, Address: 0x1be2b0, Func Offset: 0x10
}

// 
// Start address: 0x1be2b0
void mfontClear()
{
	// Line 2436, Address: 0x1be2b0, Func Offset: 0
	// Line 2437, Address: 0x1be2b8, Func Offset: 0x8
	// Func End, Address: 0x1be2c0, Func Offset: 0x10
}

// 
// Start address: 0x1be2c0
int mfontLoad(unsigned short code)
{
	long dat;
	unsigned char bd;
	short* f_lower;
	short* f_upper;
	unsigned short* f_code;
	int y;
	int x;
	unsigned char* b;
	int nbak;
	int num;
	// Line 2444, Address: 0x1be2c0, Func Offset: 0
	// Line 2448, Address: 0x1be2ec, Func Offset: 0x2c
	// Line 2449, Address: 0x1be2f4, Func Offset: 0x34
	// Line 2450, Address: 0x1be2fc, Func Offset: 0x3c
	// Line 2455, Address: 0x1be304, Func Offset: 0x44
	// Line 2456, Address: 0x1be308, Func Offset: 0x48
	// Line 2457, Address: 0x1be318, Func Offset: 0x58
	// Line 2458, Address: 0x1be320, Func Offset: 0x60
	// Line 2459, Address: 0x1be340, Func Offset: 0x80
	// Line 2460, Address: 0x1be364, Func Offset: 0xa4
	// Line 2461, Address: 0x1be384, Func Offset: 0xc4
	// Line 2463, Address: 0x1be3b0, Func Offset: 0xf0
	// Line 2464, Address: 0x1be3d0, Func Offset: 0x110
	// Line 2465, Address: 0x1be3fc, Func Offset: 0x13c
	// Line 2466, Address: 0x1be400, Func Offset: 0x140
	// Line 2467, Address: 0x1be410, Func Offset: 0x150
	// Line 2468, Address: 0x1be424, Func Offset: 0x164
	// Line 2469, Address: 0x1be440, Func Offset: 0x180
	// Line 2470, Address: 0x1be448, Func Offset: 0x188
	// Line 2472, Address: 0x1be454, Func Offset: 0x194
	// Line 2473, Address: 0x1be458, Func Offset: 0x198
	// Line 2474, Address: 0x1be46c, Func Offset: 0x1ac
	// Line 2475, Address: 0x1be47c, Func Offset: 0x1bc
	// Line 2476, Address: 0x1be498, Func Offset: 0x1d8
	// Line 2477, Address: 0x1be49c, Func Offset: 0x1dc
	// Line 2478, Address: 0x1be4c0, Func Offset: 0x200
	// Line 2479, Address: 0x1be4e4, Func Offset: 0x224
	// Line 2480, Address: 0x1be4f4, Func Offset: 0x234
	// Line 2481, Address: 0x1be504, Func Offset: 0x244
	// Line 2482, Address: 0x1be518, Func Offset: 0x258
	// Line 2483, Address: 0x1be550, Func Offset: 0x290
	// Line 2486, Address: 0x1be558, Func Offset: 0x298
	// Line 2487, Address: 0x1be574, Func Offset: 0x2b4
	// Line 2488, Address: 0x1be5b8, Func Offset: 0x2f8
	// Line 2489, Address: 0x1be5bc, Func Offset: 0x2fc
	// Line 2490, Address: 0x1be5c8, Func Offset: 0x308
	// Line 2491, Address: 0x1be5d4, Func Offset: 0x314
	// Line 2492, Address: 0x1be5e8, Func Offset: 0x328
	// Line 2493, Address: 0x1be5ec, Func Offset: 0x32c
	// Line 2494, Address: 0x1be5f8, Func Offset: 0x338
	// Line 2495, Address: 0x1be604, Func Offset: 0x344
	// Line 2496, Address: 0x1be608, Func Offset: 0x348
	// Line 2497, Address: 0x1be610, Func Offset: 0x350
	// Line 2499, Address: 0x1be618, Func Offset: 0x358
	// Line 2500, Address: 0x1be62c, Func Offset: 0x36c
	// Line 2501, Address: 0x1be630, Func Offset: 0x370
	// Line 2502, Address: 0x1be644, Func Offset: 0x384
	// Line 2503, Address: 0x1be648, Func Offset: 0x388
	// Func End, Address: 0x1be678, Func Offset: 0x3b8
}

// 
// Start address: 0x1be680
void mfontSet(unsigned short code, unsigned short x, unsigned short y)
{
	MFONT_STREAM_DATA* fstream;
	int num;
	// Line 2511, Address: 0x1be680, Func Offset: 0
	// Line 2514, Address: 0x1be69c, Func Offset: 0x1c
	// Line 2516, Address: 0x1be6b8, Func Offset: 0x38
	// Line 2518, Address: 0x1be6c8, Func Offset: 0x48
	// Line 2521, Address: 0x1be6d0, Func Offset: 0x50
	// Line 2523, Address: 0x1be6e0, Func Offset: 0x60
	// Line 2524, Address: 0x1be70c, Func Offset: 0x8c
	// Line 2525, Address: 0x1be714, Func Offset: 0x94
	// Line 2526, Address: 0x1be71c, Func Offset: 0x9c
	// Line 2527, Address: 0x1be72c, Func Offset: 0xac
	// Line 2528, Address: 0x1be740, Func Offset: 0xc0
	// Line 2529, Address: 0x1be754, Func Offset: 0xd4
	// Func End, Address: 0x1be76c, Func Offset: 0xec
}

// 
// Start address: 0x1be770
void mfontPrintStr(char* str, int x, int y)
{
	unsigned short cd;
	unsigned char* ustr;
	unsigned char c;
	int sy;
	int sx;
	int x0;
	// Line 2537, Address: 0x1be770, Func Offset: 0
	// Line 2541, Address: 0x1be79c, Func Offset: 0x2c
	// Line 2542, Address: 0x1be7b0, Func Offset: 0x40
	// Line 2543, Address: 0x1be7c4, Func Offset: 0x54
	// Line 2544, Address: 0x1be7d0, Func Offset: 0x60
	// Line 2545, Address: 0x1be7dc, Func Offset: 0x6c
	// Line 2546, Address: 0x1be7e0, Func Offset: 0x70
	// Line 2547, Address: 0x1be7e8, Func Offset: 0x78
	// Line 2548, Address: 0x1be808, Func Offset: 0x98
	// Line 2549, Address: 0x1be82c, Func Offset: 0xbc
	// Line 2550, Address: 0x1be844, Func Offset: 0xd4
	// Line 2551, Address: 0x1be850, Func Offset: 0xe0
	// Line 2552, Address: 0x1be854, Func Offset: 0xe4
	// Line 2553, Address: 0x1be85c, Func Offset: 0xec
	// Line 2554, Address: 0x1be86c, Func Offset: 0xfc
	// Line 2555, Address: 0x1be89c, Func Offset: 0x12c
	// Line 2556, Address: 0x1be8a4, Func Offset: 0x134
	// Line 2557, Address: 0x1be8c4, Func Offset: 0x154
	// Line 2558, Address: 0x1be8e8, Func Offset: 0x178
	// Line 2559, Address: 0x1be910, Func Offset: 0x1a0
	// Line 2560, Address: 0x1be940, Func Offset: 0x1d0
	// Line 2561, Address: 0x1be950, Func Offset: 0x1e0
	// Line 2562, Address: 0x1be96c, Func Offset: 0x1fc
	// Line 2564, Address: 0x1be970, Func Offset: 0x200
	// Line 2565, Address: 0x1be97c, Func Offset: 0x20c
	// Line 2566, Address: 0x1be99c, Func Offset: 0x22c
	// Line 2567, Address: 0x1be9ac, Func Offset: 0x23c
	// Line 2568, Address: 0x1be9bc, Func Offset: 0x24c
	// Func End, Address: 0x1be9e4, Func Offset: 0x274
}

// 
// Start address: 0x1be9f0
void mfontPrintf(char* str, int x, int y)
{
	char* argp;
	char buf[1024];
	// Line 2628, Address: 0x1be9f0, Func Offset: 0
	// Line 2631, Address: 0x1bea20, Func Offset: 0x30
	// Line 2632, Address: 0x1bea54, Func Offset: 0x64
	// Line 2634, Address: 0x1bea68, Func Offset: 0x78
	// Line 2635, Address: 0x1bea7c, Func Offset: 0x8c
	// Func End, Address: 0x1bea94, Func Offset: 0xa4
}

// 
// Start address: 0x1beaa0
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
	// Line 2642, Address: 0x1beaa0, Func Offset: 0
	// Line 2653, Address: 0x1beacc, Func Offset: 0x2c
	// Line 2654, Address: 0x1beaf8, Func Offset: 0x58
	// Line 2655, Address: 0x1beb0c, Func Offset: 0x6c
	// Line 2656, Address: 0x1beb14, Func Offset: 0x74
	// Line 2657, Address: 0x1beb24, Func Offset: 0x84
	// Line 2658, Address: 0x1beb30, Func Offset: 0x90
	// Line 2659, Address: 0x1beb38, Func Offset: 0x98
	// Line 2661, Address: 0x1beb44, Func Offset: 0xa4
	// Line 2662, Address: 0x1beb5c, Func Offset: 0xbc
	// Line 2663, Address: 0x1beb60, Func Offset: 0xc0
	// Line 2664, Address: 0x1beb64, Func Offset: 0xc4
	// Line 2665, Address: 0x1beb6c, Func Offset: 0xcc
	// Line 2666, Address: 0x1beb74, Func Offset: 0xd4
	// Line 2667, Address: 0x1beb84, Func Offset: 0xe4
	// Line 2668, Address: 0x1beb94, Func Offset: 0xf4
	// Line 2669, Address: 0x1bebac, Func Offset: 0x10c
	// Line 2671, Address: 0x1bebc4, Func Offset: 0x124
	// Line 2672, Address: 0x1bebd0, Func Offset: 0x130
	// Line 2674, Address: 0x1bebdc, Func Offset: 0x13c
	// Line 2676, Address: 0x1bebfc, Func Offset: 0x15c
	// Line 2680, Address: 0x1bec1c, Func Offset: 0x17c
	// Line 2682, Address: 0x1bec28, Func Offset: 0x188
	// Line 2684, Address: 0x1bec34, Func Offset: 0x194
	// Line 2686, Address: 0x1bec50, Func Offset: 0x1b0
	// Line 2688, Address: 0x1bec60, Func Offset: 0x1c0
	// Line 2689, Address: 0x1bec6c, Func Offset: 0x1cc
	// Line 2690, Address: 0x1bec7c, Func Offset: 0x1dc
	// Line 2691, Address: 0x1bec90, Func Offset: 0x1f0
	// Line 2692, Address: 0x1beca0, Func Offset: 0x200
	// Line 2693, Address: 0x1becb0, Func Offset: 0x210
	// Line 2694, Address: 0x1becc0, Func Offset: 0x220
	// Line 2695, Address: 0x1becd0, Func Offset: 0x230
	// Line 2696, Address: 0x1bece0, Func Offset: 0x240
	// Line 2697, Address: 0x1becec, Func Offset: 0x24c
	// Line 2698, Address: 0x1becfc, Func Offset: 0x25c
	// Line 2699, Address: 0x1bed0c, Func Offset: 0x26c
	// Line 2700, Address: 0x1bed1c, Func Offset: 0x27c
	// Line 2701, Address: 0x1bed28, Func Offset: 0x288
	// Line 2702, Address: 0x1bed38, Func Offset: 0x298
	// Line 2703, Address: 0x1bed58, Func Offset: 0x2b8
	// Line 2704, Address: 0x1bed68, Func Offset: 0x2c8
	// Line 2705, Address: 0x1bed7c, Func Offset: 0x2dc
	// Line 2706, Address: 0x1bed98, Func Offset: 0x2f8
	// Line 2707, Address: 0x1beda0, Func Offset: 0x300
	// Line 2709, Address: 0x1bedc4, Func Offset: 0x324
	// Line 2711, Address: 0x1bedd4, Func Offset: 0x334
	// Line 2712, Address: 0x1bedec, Func Offset: 0x34c
	// Line 2714, Address: 0x1bedfc, Func Offset: 0x35c
	// Line 2715, Address: 0x1bee14, Func Offset: 0x374
	// Line 2716, Address: 0x1bee28, Func Offset: 0x388
	// Line 2717, Address: 0x1bee3c, Func Offset: 0x39c
	// Line 2718, Address: 0x1bee40, Func Offset: 0x3a0
	// Line 2719, Address: 0x1bee44, Func Offset: 0x3a4
	// Line 2721, Address: 0x1bee50, Func Offset: 0x3b0
	// Line 2722, Address: 0x1bee70, Func Offset: 0x3d0
	// Line 2723, Address: 0x1bee90, Func Offset: 0x3f0
	// Line 2724, Address: 0x1bee98, Func Offset: 0x3f8
	// Line 2725, Address: 0x1beea0, Func Offset: 0x400
	// Line 2726, Address: 0x1beec0, Func Offset: 0x420
	// Line 2727, Address: 0x1beedc, Func Offset: 0x43c
	// Line 2728, Address: 0x1bef14, Func Offset: 0x474
	// Line 2729, Address: 0x1bef48, Func Offset: 0x4a8
	// Line 2730, Address: 0x1bef4c, Func Offset: 0x4ac
	// Line 2731, Address: 0x1bef58, Func Offset: 0x4b8
	// Line 2732, Address: 0x1bef60, Func Offset: 0x4c0
	// Line 2733, Address: 0x1bef68, Func Offset: 0x4c8
	// Line 2734, Address: 0x1bef7c, Func Offset: 0x4dc
	// Line 2737, Address: 0x1bef84, Func Offset: 0x4e4
	// Line 2738, Address: 0x1bef90, Func Offset: 0x4f0
	// Line 2739, Address: 0x1bef9c, Func Offset: 0x4fc
	// Line 2740, Address: 0x1befa8, Func Offset: 0x508
	// Line 2741, Address: 0x1befb0, Func Offset: 0x510
	// Line 2742, Address: 0x1befc4, Func Offset: 0x524
	// Line 2744, Address: 0x1befd0, Func Offset: 0x530
	// Line 2745, Address: 0x1befe0, Func Offset: 0x540
	// Line 2746, Address: 0x1befe8, Func Offset: 0x548
	// Line 2747, Address: 0x1beff8, Func Offset: 0x558
	// Line 2748, Address: 0x1bf020, Func Offset: 0x580
	// Line 2749, Address: 0x1bf028, Func Offset: 0x588
	// Line 2750, Address: 0x1bf030, Func Offset: 0x590
	// Func End, Address: 0x1bf064, Func Offset: 0x5c4
}

