typedef struct sgSot;
typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef enum _enum_0 : unsigned char;
typedef struct sgSotTag;
typedef struct _anon5;
typedef enum _enum_1 : unsigned char;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _anon9;

typedef void(*type_4)(_anon1*);
typedef void(*type_8)(_anon1*);

typedef _anon9 type_0[4];
typedef _anon3 type_1[4];
typedef _anon0 type_2[2];
typedef unsigned int type_3[4];
typedef void(*type_5)(_anon1*)[2];
typedef _anon8 type_6[4];
typedef _anon8 type_7[4];
typedef void(*type_9)(_anon1*)[2];
typedef int type_10[4];
typedef int type_11[2];
typedef int type_12[2][4];
typedef int type_13[2];
typedef unsigned char type_14[2];

struct sgSot
{
	sgSotTag** ot_top;
	sgSotTag** ot_last;
	unsigned short ot_size;
	unsigned short ot_width;
	unsigned int flag;
	unsigned int w_ofs;
	unsigned int w_mini;
	unsigned int w_max;
	unsigned int dma_max;
	sgSotTag* dma_top;
	sgSotTag* dmabuf_pos;
	sgSotTag* dmakick_buf;
	unsigned short* ot_max;
	unsigned int dmatag_num;
};

struct _anon0
{
	_anon9 rect[4];
	unsigned int col;
};

struct _anon1
{
	float x;
	float y;
	float w;
	float h;
	float pre_x;
	float pre_y;
	float pre_w;
	float pre_h;
	float bold;
	_enum_0 type;
	unsigned int col;
	unsigned int pre_col;
	unsigned int alpha;
	unsigned int timer;
	int disp_flag;
	int blur_flag;
	unsigned int ot;
};

struct _anon2
{
	_anon3 c_line[4];
	_anon0 param[2];
	float cx;
	float cy;
	float w;
	float h;
	unsigned int argb;
	int param_index;
	int timer;
	unsigned char blur_flag;
	unsigned char disp_flag;
};

struct _anon3
{
	_anon7 base;
	float x;
	float y;
	float w;
	float h;
	int u0;
	int v0;
	int u1;
	int v1;
	unsigned int col[4];
	float rot;
	float scale_x;
	float scale_y;
	int ofs_x;
	int ofs_y;
	unsigned char sprite_flag;
};

struct _anon4
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

enum _enum_0 : unsigned char
{
	FRAME_LINE,
	FRAME_LINE_WITH_BG
};

struct sgSotTag
{
	unsigned short DmaQwc;
	unsigned short DmaId;
	void* Addr;
	unsigned int W;
	unsigned short VifQwc;
	unsigned char EnvID;
	unsigned char VifDirect;
};

struct _anon5
{
	_anon4* tex;
	unsigned char tcc;
	unsigned char tfx;
	unsigned char pad[2];
};

enum _enum_1 : unsigned char
{
	ITEM_ATTR_UNKNOWN,
	ITEM_ATTR_WEAPON,
	ITEM_ATTR_EIL_WEAPON,
	ITEM_ATTR_JOREI,
	ITEM_ATTR_RECOVERY,
	ITEM_ATTR_KEY,
	ITEM_ATTR_MEMO
};

struct _anon6
{
	unsigned int cbp;
	unsigned int ofs;
};

struct _anon7
{
	unsigned long reg_alpha;
	unsigned long reg_prim;
	unsigned long reg_test;
	_anon5 tex_data;
	_anon6 clut_data;
	unsigned short ot;
	unsigned short z;
};

struct _anon8
{
	float x;
	float y;
};

struct _anon9
{
	float x;
	float y;
	float w;
	float h;
};

float base_alpha_ratio;
unsigned long* sg_packet_cur;
_anon2 menu_cursor;

void MakeSoftFocusTex();
void MakeSoftFocusPlane(_anon1* wk);
void MakePktTransparentPlane(_anon1* wk);
void DrawPlaneOt(_anon1* wk, int kind);
void MakePktLineFrame(_anon1* wk);
void DrawLineOt(_anon1* wk);
void DrawFrameLine(_anon1* wk);
void DrawFrameLineWithBg(_anon1* wk);
void MakeBlurPkt(_anon1* wk);
void DrawBlurFrame(_anon1* wk);
void miscFrameDraw(_anon1* wk);
void miscFrameConstruct(_anon1* wk);
void miscFrameSetRect(_anon1* work, float x, float y, float w, float h);
void miscFrameGetRect(float* dst, _anon1* work);
void miscFrameSetColor(_anon1* work, unsigned int rgba);
void miscFrameDispOn(_anon1* work);
void miscFrameDispOff(_anon1* work);
void miscCursorSetBaseAlphaRatio(float val);
unsigned int BaseAlphaMul(unsigned int src_col);
void miscCursorConstruct();
float get_ratio(int cnt, int max_cnt);
void miscCursorSetXYWH(float cx, float cy, float w, float h);
void miscCursorSetTimer(unsigned int val);
void miscCursorSetColor(unsigned int argb);
void CursorActUpdate(float base_x, float base_y, float csr_w, float csr_h, unsigned int cnt);
void MakeQuadPkt(int* v0, int* v1, int* v2, int* v3, unsigned int argb0, unsigned int argb1);
void miscCursorMakePktForBlur(_anon2* c);
void miscCursorUpdate();
int miscCursorIsActDone();
void miscCursorDispOn();
void miscCursorDispOff();
void miscCursorDraw();

// 
// Start address: 0x201cd0
void MakeSoftFocusTex()
{
	void* pkt;
	int i;
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
	// Line 210, Address: 0x201cd0, Func Offset: 0
	// Line 211, Address: 0x201cd4, Func Offset: 0x4
	// Line 210, Address: 0x201cd8, Func Offset: 0x8
	// Line 211, Address: 0x201cf0, Func Offset: 0x20
	// Line 213, Address: 0x201d08, Func Offset: 0x38
	// Line 216, Address: 0x201d1c, Func Offset: 0x4c
	// Line 217, Address: 0x201d24, Func Offset: 0x54
	// Line 218, Address: 0x201d34, Func Offset: 0x64
	// Line 219, Address: 0x201d3c, Func Offset: 0x6c
	// Line 221, Address: 0x201d48, Func Offset: 0x78
	// Line 226, Address: 0x201d64, Func Offset: 0x94
	// Line 221, Address: 0x201d68, Func Offset: 0x98
	// Line 226, Address: 0x201d6c, Func Offset: 0x9c
	// Line 233, Address: 0x201da4, Func Offset: 0xd4
	// Line 226, Address: 0x201da8, Func Offset: 0xd8
	// Line 233, Address: 0x201dc0, Func Offset: 0xf0
	// Line 234, Address: 0x201df8, Func Offset: 0x128
	// Line 233, Address: 0x201dfc, Func Offset: 0x12c
	// Line 234, Address: 0x201e18, Func Offset: 0x148
	// Line 233, Address: 0x201e1c, Func Offset: 0x14c
	// Line 234, Address: 0x201e28, Func Offset: 0x158
	// Line 233, Address: 0x201e2c, Func Offset: 0x15c
	// Line 235, Address: 0x201e30, Func Offset: 0x160
	// Line 234, Address: 0x201e34, Func Offset: 0x164
	// Line 236, Address: 0x201e38, Func Offset: 0x168
	// Line 237, Address: 0x201e48, Func Offset: 0x178
	// Line 236, Address: 0x201e4c, Func Offset: 0x17c
	// Line 238, Address: 0x201e50, Func Offset: 0x180
	// Line 237, Address: 0x201e54, Func Offset: 0x184
	// Line 238, Address: 0x201e58, Func Offset: 0x188
	// Line 237, Address: 0x201e5c, Func Offset: 0x18c
	// Line 239, Address: 0x201e60, Func Offset: 0x190
	// Line 234, Address: 0x201e64, Func Offset: 0x194
	// Line 239, Address: 0x201e70, Func Offset: 0x1a0
	// Line 234, Address: 0x201e74, Func Offset: 0x1a4
	// Line 239, Address: 0x201e78, Func Offset: 0x1a8
	// Line 234, Address: 0x201e7c, Func Offset: 0x1ac
	// Line 235, Address: 0x201e80, Func Offset: 0x1b0
	// Line 239, Address: 0x201e88, Func Offset: 0x1b8
	// Line 242, Address: 0x201e8c, Func Offset: 0x1bc
	// Line 240, Address: 0x201e90, Func Offset: 0x1c0
	// Line 242, Address: 0x201e94, Func Offset: 0x1c4
	// Line 245, Address: 0x201ea4, Func Offset: 0x1d4
	// Line 235, Address: 0x201ea8, Func Offset: 0x1d8
	// Line 236, Address: 0x201eb8, Func Offset: 0x1e8
	// Line 235, Address: 0x201ebc, Func Offset: 0x1ec
	// Line 236, Address: 0x201ec0, Func Offset: 0x1f0
	// Line 237, Address: 0x201ed4, Func Offset: 0x204
	// Line 236, Address: 0x201ed8, Func Offset: 0x208
	// Line 237, Address: 0x201edc, Func Offset: 0x20c
	// Line 238, Address: 0x201ef0, Func Offset: 0x220
	// Line 237, Address: 0x201ef4, Func Offset: 0x224
	// Line 238, Address: 0x201ef8, Func Offset: 0x228
	// Line 239, Address: 0x201f0c, Func Offset: 0x23c
	// Line 238, Address: 0x201f10, Func Offset: 0x240
	// Line 239, Address: 0x201f14, Func Offset: 0x244
	// Line 240, Address: 0x201f28, Func Offset: 0x258
	// Line 239, Address: 0x201f2c, Func Offset: 0x25c
	// Line 240, Address: 0x201f30, Func Offset: 0x260
	// Line 242, Address: 0x201f44, Func Offset: 0x274
	// Line 240, Address: 0x201f48, Func Offset: 0x278
	// Line 242, Address: 0x201f4c, Func Offset: 0x27c
	// Line 245, Address: 0x201f60, Func Offset: 0x290
	// Line 242, Address: 0x201f64, Func Offset: 0x294
	// Line 245, Address: 0x201f68, Func Offset: 0x298
	// Line 246, Address: 0x201f7c, Func Offset: 0x2ac
	// Line 245, Address: 0x201f80, Func Offset: 0x2b0
	// Line 246, Address: 0x201f84, Func Offset: 0x2b4
	// Line 248, Address: 0x201fe0, Func Offset: 0x310
	// Line 246, Address: 0x201fe4, Func Offset: 0x314
	// Line 248, Address: 0x202004, Func Offset: 0x334
	// Line 250, Address: 0x202024, Func Offset: 0x354
	// Line 248, Address: 0x202028, Func Offset: 0x358
	// Line 250, Address: 0x20203c, Func Offset: 0x36c
	// Line 251, Address: 0x2020b0, Func Offset: 0x3e0
	// Line 250, Address: 0x2020b4, Func Offset: 0x3e4
	// Line 251, Address: 0x2020cc, Func Offset: 0x3fc
	// Line 252, Address: 0x2020d0, Func Offset: 0x400
	// Line 253, Address: 0x2020ec, Func Offset: 0x41c
	// Line 255, Address: 0x202100, Func Offset: 0x430
	// Line 253, Address: 0x202104, Func Offset: 0x434
	// Line 255, Address: 0x202108, Func Offset: 0x438
	// Line 253, Address: 0x20210c, Func Offset: 0x43c
	// Line 255, Address: 0x202114, Func Offset: 0x444
	// Line 257, Address: 0x202124, Func Offset: 0x454
	// Line 255, Address: 0x202128, Func Offset: 0x458
	// Line 257, Address: 0x202138, Func Offset: 0x468
	// Line 255, Address: 0x20213c, Func Offset: 0x46c
	// Line 257, Address: 0x202140, Func Offset: 0x470
	// Line 258, Address: 0x202154, Func Offset: 0x484
	// Line 257, Address: 0x202158, Func Offset: 0x488
	// Line 258, Address: 0x20215c, Func Offset: 0x48c
	// Line 260, Address: 0x2021bc, Func Offset: 0x4ec
	// Line 258, Address: 0x2021c0, Func Offset: 0x4f0
	// Line 260, Address: 0x2021e4, Func Offset: 0x514
	// Line 263, Address: 0x202204, Func Offset: 0x534
	// Line 260, Address: 0x202208, Func Offset: 0x538
	// Line 263, Address: 0x20221c, Func Offset: 0x54c
	// Line 264, Address: 0x202288, Func Offset: 0x5b8
	// Line 263, Address: 0x20228c, Func Offset: 0x5bc
	// Line 264, Address: 0x20229c, Func Offset: 0x5cc
	// Line 263, Address: 0x2022a0, Func Offset: 0x5d0
	// Line 264, Address: 0x2022b4, Func Offset: 0x5e4
	// Line 270, Address: 0x2022bc, Func Offset: 0x5ec
	// Line 272, Address: 0x20230c, Func Offset: 0x63c
	// Line 273, Address: 0x202314, Func Offset: 0x644
	// Line 275, Address: 0x20231c, Func Offset: 0x64c
	// Line 276, Address: 0x202334, Func Offset: 0x664
	// Line 277, Address: 0x20234c, Func Offset: 0x67c
	// Line 278, Address: 0x202350, Func Offset: 0x680
	// Func End, Address: 0x202374, Func Offset: 0x6a4
}

// 
// Start address: 0x202380
void MakeSoftFocusPlane(_anon1* wk)
{
	int i;
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
	int x;
	int y;
	int ofs_x;
	int ofs_y;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	int j;
	int x0;
	int y0;
	int x1;
	int y1;
	int u0;
	int v0;
	int u1;
	int v1;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	// Line 283, Address: 0x202380, Func Offset: 0
	// Line 286, Address: 0x202384, Func Offset: 0x4
	// Line 283, Address: 0x202388, Func Offset: 0x8
	// Line 287, Address: 0x20238c, Func Offset: 0xc
	// Line 283, Address: 0x202390, Func Offset: 0x10
	// Line 287, Address: 0x202394, Func Offset: 0x14
	// Line 283, Address: 0x202398, Func Offset: 0x18
	// Line 286, Address: 0x20239c, Func Offset: 0x1c
	// Line 283, Address: 0x2023a0, Func Offset: 0x20
	// Line 287, Address: 0x2023b0, Func Offset: 0x30
	// Line 283, Address: 0x2023b4, Func Offset: 0x34
	// Line 287, Address: 0x2023b8, Func Offset: 0x38
	// Line 283, Address: 0x2023bc, Func Offset: 0x3c
	// Line 287, Address: 0x2023c0, Func Offset: 0x40
	// Line 283, Address: 0x2023c4, Func Offset: 0x44
	// Line 286, Address: 0x2023cc, Func Offset: 0x4c
	// Line 287, Address: 0x2023e0, Func Offset: 0x60
	// Line 286, Address: 0x2023e4, Func Offset: 0x64
	// Line 287, Address: 0x2023ec, Func Offset: 0x6c
	// Line 294, Address: 0x202400, Func Offset: 0x80
	// Line 287, Address: 0x202404, Func Offset: 0x84
	// Line 294, Address: 0x20240c, Func Offset: 0x8c
	// Line 296, Address: 0x202444, Func Offset: 0xc4
	// Line 294, Address: 0x202448, Func Offset: 0xc8
	// Line 296, Address: 0x202464, Func Offset: 0xe4
	// Line 294, Address: 0x202468, Func Offset: 0xe8
	// Line 296, Address: 0x202474, Func Offset: 0xf4
	// Line 294, Address: 0x202478, Func Offset: 0xf8
	// Line 297, Address: 0x20247c, Func Offset: 0xfc
	// Line 294, Address: 0x202480, Func Offset: 0x100
	// Line 298, Address: 0x202484, Func Offset: 0x104
	// Line 296, Address: 0x20248c, Func Offset: 0x10c
	// Line 298, Address: 0x202490, Func Offset: 0x110
	// Line 299, Address: 0x202494, Func Offset: 0x114
	// Line 298, Address: 0x202498, Func Offset: 0x118
	// Line 300, Address: 0x20249c, Func Offset: 0x11c
	// Line 298, Address: 0x2024a0, Func Offset: 0x120
	// Line 300, Address: 0x2024a4, Func Offset: 0x124
	// Line 299, Address: 0x2024a8, Func Offset: 0x128
	// Line 301, Address: 0x2024ac, Func Offset: 0x12c
	// Line 299, Address: 0x2024b0, Func Offset: 0x130
	// Line 303, Address: 0x2024b4, Func Offset: 0x134
	// Line 296, Address: 0x2024bc, Func Offset: 0x13c
	// Line 303, Address: 0x2024c0, Func Offset: 0x140
	// Line 296, Address: 0x2024c4, Func Offset: 0x144
	// Line 305, Address: 0x2024d0, Func Offset: 0x150
	// Line 296, Address: 0x2024d4, Func Offset: 0x154
	// Line 297, Address: 0x2024d8, Func Offset: 0x158
	// Line 296, Address: 0x2024dc, Func Offset: 0x15c
	// Line 305, Address: 0x2024e0, Func Offset: 0x160
	// Line 297, Address: 0x2024e4, Func Offset: 0x164
	// Line 298, Address: 0x2024f8, Func Offset: 0x178
	// Line 297, Address: 0x2024fc, Func Offset: 0x17c
	// Line 298, Address: 0x202504, Func Offset: 0x184
	// Line 299, Address: 0x202518, Func Offset: 0x198
	// Line 298, Address: 0x20251c, Func Offset: 0x19c
	// Line 299, Address: 0x202524, Func Offset: 0x1a4
	// Line 300, Address: 0x202538, Func Offset: 0x1b8
	// Line 299, Address: 0x20253c, Func Offset: 0x1bc
	// Line 300, Address: 0x202544, Func Offset: 0x1c4
	// Line 301, Address: 0x202558, Func Offset: 0x1d8
	// Line 300, Address: 0x20255c, Func Offset: 0x1dc
	// Line 301, Address: 0x202564, Func Offset: 0x1e4
	// Line 303, Address: 0x202578, Func Offset: 0x1f8
	// Line 301, Address: 0x20257c, Func Offset: 0x1fc
	// Line 303, Address: 0x202584, Func Offset: 0x204
	// Line 305, Address: 0x202598, Func Offset: 0x218
	// Line 303, Address: 0x20259c, Func Offset: 0x21c
	// Line 305, Address: 0x2025a4, Func Offset: 0x224
	// Line 308, Address: 0x2025dc, Func Offset: 0x25c
	// Line 305, Address: 0x2025e0, Func Offset: 0x260
	// Line 312, Address: 0x2025e4, Func Offset: 0x264
	// Line 305, Address: 0x2025e8, Func Offset: 0x268
	// Line 310, Address: 0x2025f4, Func Offset: 0x274
	// Line 308, Address: 0x20260c, Func Offset: 0x28c
	// Line 312, Address: 0x202610, Func Offset: 0x290
	// Line 310, Address: 0x202620, Func Offset: 0x2a0
	// Line 312, Address: 0x202630, Func Offset: 0x2b0
	// Line 310, Address: 0x202634, Func Offset: 0x2b4
	// Line 312, Address: 0x20263c, Func Offset: 0x2bc
	// Line 313, Address: 0x202694, Func Offset: 0x314
	// Line 314, Address: 0x2026a0, Func Offset: 0x320
	// Line 315, Address: 0x2026a4, Func Offset: 0x324
	// Line 314, Address: 0x2026a8, Func Offset: 0x328
	// Line 315, Address: 0x2026ac, Func Offset: 0x32c
	// Line 313, Address: 0x2026b0, Func Offset: 0x330
	// Line 315, Address: 0x2026b4, Func Offset: 0x334
	// Line 314, Address: 0x2026b8, Func Offset: 0x338
	// Line 315, Address: 0x2026bc, Func Offset: 0x33c
	// Line 314, Address: 0x2026c0, Func Offset: 0x340
	// Line 315, Address: 0x2026c4, Func Offset: 0x344
	// Line 313, Address: 0x2026cc, Func Offset: 0x34c
	// Line 314, Address: 0x2026d0, Func Offset: 0x350
	// Line 315, Address: 0x2026d4, Func Offset: 0x354
	// Line 317, Address: 0x202720, Func Offset: 0x3a0
	// Line 315, Address: 0x202724, Func Offset: 0x3a4
	// Line 317, Address: 0x202744, Func Offset: 0x3c4
	// Line 315, Address: 0x202748, Func Offset: 0x3c8
	// Line 317, Address: 0x202754, Func Offset: 0x3d4
	// Line 315, Address: 0x202758, Func Offset: 0x3d8
	// Line 317, Address: 0x202760, Func Offset: 0x3e0
	// Line 315, Address: 0x202764, Func Offset: 0x3e4
	// Line 317, Address: 0x20276c, Func Offset: 0x3ec
	// Line 320, Address: 0x2027cc, Func Offset: 0x44c
	// Line 317, Address: 0x2027d0, Func Offset: 0x450
	// Line 318, Address: 0x2027e0, Func Offset: 0x460
	// Line 320, Address: 0x2027e4, Func Offset: 0x464
	// Line 318, Address: 0x2027e8, Func Offset: 0x468
	// Line 319, Address: 0x2027ec, Func Offset: 0x46c
	// Line 318, Address: 0x2027f4, Func Offset: 0x474
	// Line 319, Address: 0x2027f8, Func Offset: 0x478
	// Line 320, Address: 0x2027fc, Func Offset: 0x47c
	// Line 318, Address: 0x202800, Func Offset: 0x480
	// Line 320, Address: 0x202804, Func Offset: 0x484
	// Line 319, Address: 0x202808, Func Offset: 0x488
	// Line 320, Address: 0x20280c, Func Offset: 0x48c
	// Line 318, Address: 0x202814, Func Offset: 0x494
	// Line 319, Address: 0x202818, Func Offset: 0x498
	// Line 318, Address: 0x20281c, Func Offset: 0x49c
	// Line 319, Address: 0x202820, Func Offset: 0x4a0
	// Line 318, Address: 0x202824, Func Offset: 0x4a4
	// Line 319, Address: 0x202828, Func Offset: 0x4a8
	// Line 320, Address: 0x20282c, Func Offset: 0x4ac
	// Line 346, Address: 0x202880, Func Offset: 0x500
	// Line 320, Address: 0x202884, Func Offset: 0x504
	// Line 346, Address: 0x2028b4, Func Offset: 0x534
	// Line 349, Address: 0x2028c0, Func Offset: 0x540
	// Line 353, Address: 0x2028c8, Func Offset: 0x548
	// Line 354, Address: 0x2028fc, Func Offset: 0x57c
	// Line 356, Address: 0x20292c, Func Offset: 0x5ac
	// Line 361, Address: 0x202938, Func Offset: 0x5b8
	// Line 356, Address: 0x20293c, Func Offset: 0x5bc
	// Line 361, Address: 0x202940, Func Offset: 0x5c0
	// Line 357, Address: 0x202944, Func Offset: 0x5c4
	// Line 358, Address: 0x202948, Func Offset: 0x5c8
	// Line 359, Address: 0x20294c, Func Offset: 0x5cc
	// Line 361, Address: 0x202950, Func Offset: 0x5d0
	// Line 356, Address: 0x202954, Func Offset: 0x5d4
	// Line 361, Address: 0x202958, Func Offset: 0x5d8
	// Line 357, Address: 0x202960, Func Offset: 0x5e0
	// Line 361, Address: 0x202970, Func Offset: 0x5f0
	// Line 357, Address: 0x202978, Func Offset: 0x5f8
	// Line 356, Address: 0x20298c, Func Offset: 0x60c
	// Line 357, Address: 0x202990, Func Offset: 0x610
	// Line 356, Address: 0x202994, Func Offset: 0x614
	// Line 357, Address: 0x202998, Func Offset: 0x618
	// Line 361, Address: 0x20299c, Func Offset: 0x61c
	// Line 357, Address: 0x2029a8, Func Offset: 0x628
	// Line 362, Address: 0x2029ac, Func Offset: 0x62c
	// Line 357, Address: 0x2029b0, Func Offset: 0x630
	// Line 358, Address: 0x2029b4, Func Offset: 0x634
	// Line 359, Address: 0x2029b8, Func Offset: 0x638
	// Line 356, Address: 0x2029bc, Func Offset: 0x63c
	// Line 358, Address: 0x2029d4, Func Offset: 0x654
	// Line 359, Address: 0x2029dc, Func Offset: 0x65c
	// Line 358, Address: 0x2029e4, Func Offset: 0x664
	// Line 359, Address: 0x2029e8, Func Offset: 0x668
	// Line 358, Address: 0x2029ec, Func Offset: 0x66c
	// Line 361, Address: 0x2029f0, Func Offset: 0x670
	// Line 358, Address: 0x2029f4, Func Offset: 0x674
	// Line 361, Address: 0x2029f8, Func Offset: 0x678
	// Line 359, Address: 0x2029fc, Func Offset: 0x67c
	// Line 361, Address: 0x202a00, Func Offset: 0x680
	// Line 362, Address: 0x202a04, Func Offset: 0x684
	// Line 361, Address: 0x202a08, Func Offset: 0x688
	// Line 362, Address: 0x202a0c, Func Offset: 0x68c
	// Line 359, Address: 0x202a10, Func Offset: 0x690
	// Line 358, Address: 0x202a14, Func Offset: 0x694
	// Line 362, Address: 0x202a18, Func Offset: 0x698
	// Line 363, Address: 0x202a2c, Func Offset: 0x6ac
	// Line 359, Address: 0x202a30, Func Offset: 0x6b0
	// Line 356, Address: 0x202a34, Func Offset: 0x6b4
	// Line 358, Address: 0x202a38, Func Offset: 0x6b8
	// Line 362, Address: 0x202a3c, Func Offset: 0x6bc
	// Line 359, Address: 0x202a60, Func Offset: 0x6e0
	// Line 362, Address: 0x202a64, Func Offset: 0x6e4
	// Line 363, Address: 0x202a6c, Func Offset: 0x6ec
	// Line 358, Address: 0x202a70, Func Offset: 0x6f0
	// Line 363, Address: 0x202a74, Func Offset: 0x6f4
	// Line 359, Address: 0x202a7c, Func Offset: 0x6fc
	// Line 363, Address: 0x202a80, Func Offset: 0x700
	// Line 358, Address: 0x202a88, Func Offset: 0x708
	// Line 359, Address: 0x202a8c, Func Offset: 0x70c
	// Line 363, Address: 0x202a90, Func Offset: 0x710
	// Line 365, Address: 0x202aec, Func Offset: 0x76c
	// Line 363, Address: 0x202af0, Func Offset: 0x770
	// Line 366, Address: 0x202af4, Func Offset: 0x774
	// Line 363, Address: 0x202af8, Func Offset: 0x778
	// Line 367, Address: 0x202afc, Func Offset: 0x77c
	// Line 363, Address: 0x202b00, Func Offset: 0x780
	// Line 368, Address: 0x202b04, Func Offset: 0x784
	// Line 363, Address: 0x202b08, Func Offset: 0x788
	// Line 370, Address: 0x202b14, Func Offset: 0x794
	// Line 363, Address: 0x202b18, Func Offset: 0x798
	// Line 370, Address: 0x202b20, Func Offset: 0x7a0
	// Line 363, Address: 0x202b24, Func Offset: 0x7a4
	// Line 365, Address: 0x202b28, Func Offset: 0x7a8
	// Line 363, Address: 0x202b2c, Func Offset: 0x7ac
	// Line 366, Address: 0x202b34, Func Offset: 0x7b4
	// Line 365, Address: 0x202b38, Func Offset: 0x7b8
	// Line 366, Address: 0x202b3c, Func Offset: 0x7bc
	// Line 370, Address: 0x202b40, Func Offset: 0x7c0
	// Line 367, Address: 0x202b44, Func Offset: 0x7c4
	// Line 368, Address: 0x202b4c, Func Offset: 0x7cc
	// Line 365, Address: 0x202b54, Func Offset: 0x7d4
	// Line 370, Address: 0x202b58, Func Offset: 0x7d8
	// Line 371, Address: 0x202b6c, Func Offset: 0x7ec
	// Line 366, Address: 0x202b70, Func Offset: 0x7f0
	// Line 367, Address: 0x202b74, Func Offset: 0x7f4
	// Line 368, Address: 0x202b78, Func Offset: 0x7f8
	// Line 365, Address: 0x202b7c, Func Offset: 0x7fc
	// Line 366, Address: 0x202b84, Func Offset: 0x804
	// Line 365, Address: 0x202b88, Func Offset: 0x808
	// Line 370, Address: 0x202b90, Func Offset: 0x810
	// Line 366, Address: 0x202b9c, Func Offset: 0x81c
	// Line 367, Address: 0x202ba0, Func Offset: 0x820
	// Line 366, Address: 0x202ba4, Func Offset: 0x824
	// Line 370, Address: 0x202bac, Func Offset: 0x82c
	// Line 368, Address: 0x202bc4, Func Offset: 0x844
	// Line 370, Address: 0x202bc8, Func Offset: 0x848
	// Line 371, Address: 0x202bd0, Func Offset: 0x850
	// Line 367, Address: 0x202bd4, Func Offset: 0x854
	// Line 368, Address: 0x202be0, Func Offset: 0x860
	// Line 367, Address: 0x202be4, Func Offset: 0x864
	// Line 371, Address: 0x202be8, Func Offset: 0x868
	// Line 368, Address: 0x202bf0, Func Offset: 0x870
	// Line 371, Address: 0x202bf8, Func Offset: 0x878
	// Line 372, Address: 0x202c54, Func Offset: 0x8d4
	// Line 371, Address: 0x202c58, Func Offset: 0x8d8
	// Line 372, Address: 0x202c8c, Func Offset: 0x90c
	// Line 373, Address: 0x202c9c, Func Offset: 0x91c
	// Line 376, Address: 0x202cac, Func Offset: 0x92c
	// Func End, Address: 0x202cdc, Func Offset: 0x95c
}

// 
// Start address: 0x202ce0
void MakePktTransparentPlane(_anon1* wk)
{
	int x;
	int y;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	// Line 380, Address: 0x202ce0, Func Offset: 0
	// Line 384, Address: 0x202ce4, Func Offset: 0x4
	// Line 380, Address: 0x202ce8, Func Offset: 0x8
	// Line 383, Address: 0x202cec, Func Offset: 0xc
	// Line 380, Address: 0x202cf0, Func Offset: 0x10
	// Line 383, Address: 0x202cf4, Func Offset: 0x14
	// Line 380, Address: 0x202cf8, Func Offset: 0x18
	// Line 384, Address: 0x202cfc, Func Offset: 0x1c
	// Line 380, Address: 0x202d00, Func Offset: 0x20
	// Line 384, Address: 0x202d04, Func Offset: 0x24
	// Line 380, Address: 0x202d08, Func Offset: 0x28
	// Line 384, Address: 0x202d0c, Func Offset: 0x2c
	// Line 383, Address: 0x202d10, Func Offset: 0x30
	// Line 385, Address: 0x202d14, Func Offset: 0x34
	// Line 384, Address: 0x202d1c, Func Offset: 0x3c
	// Line 385, Address: 0x202d20, Func Offset: 0x40
	// Line 388, Address: 0x202d24, Func Offset: 0x44
	// Line 383, Address: 0x202d30, Func Offset: 0x50
	// Line 384, Address: 0x202d40, Func Offset: 0x60
	// Line 383, Address: 0x202d44, Func Offset: 0x64
	// Line 384, Address: 0x202d4c, Func Offset: 0x6c
	// Line 385, Address: 0x202d60, Func Offset: 0x80
	// Line 384, Address: 0x202d64, Func Offset: 0x84
	// Line 385, Address: 0x202d6c, Func Offset: 0x8c
	// Line 388, Address: 0x202d80, Func Offset: 0xa0
	// Line 385, Address: 0x202d84, Func Offset: 0xa4
	// Line 388, Address: 0x202d8c, Func Offset: 0xac
	// Line 389, Address: 0x202da8, Func Offset: 0xc8
	// Line 390, Address: 0x202db4, Func Offset: 0xd4
	// Line 391, Address: 0x202db8, Func Offset: 0xd8
	// Line 390, Address: 0x202dbc, Func Offset: 0xdc
	// Line 391, Address: 0x202dc0, Func Offset: 0xe0
	// Line 389, Address: 0x202dc4, Func Offset: 0xe4
	// Line 391, Address: 0x202dc8, Func Offset: 0xe8
	// Line 390, Address: 0x202dcc, Func Offset: 0xec
	// Line 391, Address: 0x202dd0, Func Offset: 0xf0
	// Line 390, Address: 0x202dd4, Func Offset: 0xf4
	// Line 391, Address: 0x202dd8, Func Offset: 0xf8
	// Line 389, Address: 0x202de0, Func Offset: 0x100
	// Line 390, Address: 0x202de4, Func Offset: 0x104
	// Line 391, Address: 0x202de8, Func Offset: 0x108
	// Line 392, Address: 0x202e4c, Func Offset: 0x16c
	// Line 391, Address: 0x202e50, Func Offset: 0x170
	// Line 392, Address: 0x202e54, Func Offset: 0x174
	// Line 391, Address: 0x202e58, Func Offset: 0x178
	// Line 392, Address: 0x202e5c, Func Offset: 0x17c
	// Line 391, Address: 0x202e60, Func Offset: 0x180
	// Line 392, Address: 0x202e7c, Func Offset: 0x19c
	// Line 395, Address: 0x202e98, Func Offset: 0x1b8
	// Line 392, Address: 0x202e9c, Func Offset: 0x1bc
	// Line 393, Address: 0x202ea4, Func Offset: 0x1c4
	// Line 395, Address: 0x202ea8, Func Offset: 0x1c8
	// Line 393, Address: 0x202eac, Func Offset: 0x1cc
	// Line 394, Address: 0x202eb0, Func Offset: 0x1d0
	// Line 393, Address: 0x202eb8, Func Offset: 0x1d8
	// Line 394, Address: 0x202ebc, Func Offset: 0x1dc
	// Line 395, Address: 0x202ec0, Func Offset: 0x1e0
	// Line 393, Address: 0x202ec4, Func Offset: 0x1e4
	// Line 395, Address: 0x202ec8, Func Offset: 0x1e8
	// Line 394, Address: 0x202ecc, Func Offset: 0x1ec
	// Line 395, Address: 0x202ed0, Func Offset: 0x1f0
	// Line 393, Address: 0x202ed8, Func Offset: 0x1f8
	// Line 394, Address: 0x202edc, Func Offset: 0x1fc
	// Line 393, Address: 0x202ee0, Func Offset: 0x200
	// Line 394, Address: 0x202ee4, Func Offset: 0x204
	// Line 393, Address: 0x202ee8, Func Offset: 0x208
	// Line 394, Address: 0x202eec, Func Offset: 0x20c
	// Line 395, Address: 0x202ef0, Func Offset: 0x210
	// Line 396, Address: 0x202f78, Func Offset: 0x298
	// Func End, Address: 0x202f94, Func Offset: 0x2b4
}

// 
// Start address: 0x202fa0
void DrawPlaneOt(_anon1* wk, int kind)
{
	sgSot* ot;
	void* pkt;
	void(*plane_pkt)(_anon1*)[2];
	// Line 400, Address: 0x202fa0, Func Offset: 0
	// Line 405, Address: 0x202fbc, Func Offset: 0x1c
	// Line 407, Address: 0x202fc8, Func Offset: 0x28
	// Line 408, Address: 0x202fd0, Func Offset: 0x30
	// Line 410, Address: 0x202fe8, Func Offset: 0x48
	// Line 411, Address: 0x202ffc, Func Offset: 0x5c
	// Line 412, Address: 0x203004, Func Offset: 0x64
	// Line 413, Address: 0x20300c, Func Offset: 0x6c
	// Line 415, Address: 0x203018, Func Offset: 0x78
	// Line 417, Address: 0x203034, Func Offset: 0x94
	// Line 418, Address: 0x20303c, Func Offset: 0x9c
	// Line 419, Address: 0x203058, Func Offset: 0xb8
	// Line 422, Address: 0x203068, Func Offset: 0xc8
	// Func End, Address: 0x203084, Func Offset: 0xe4
}

// 
// Start address: 0x203090
void MakePktLineFrame(_anon1* wk)
{
	int x;
	int y;
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
	// Line 426, Address: 0x203090, Func Offset: 0
	// Line 430, Address: 0x203094, Func Offset: 0x4
	// Line 426, Address: 0x203098, Func Offset: 0x8
	// Line 430, Address: 0x20309c, Func Offset: 0xc
	// Line 426, Address: 0x2030a0, Func Offset: 0x10
	// Line 431, Address: 0x2030a4, Func Offset: 0x14
	// Line 426, Address: 0x2030a8, Func Offset: 0x18
	// Line 431, Address: 0x2030ac, Func Offset: 0x1c
	// Line 426, Address: 0x2030b0, Func Offset: 0x20
	// Line 431, Address: 0x2030b4, Func Offset: 0x24
	// Line 426, Address: 0x2030b8, Func Offset: 0x28
	// Line 429, Address: 0x2030bc, Func Offset: 0x2c
	// Line 431, Address: 0x2030c4, Func Offset: 0x34
	// Line 434, Address: 0x2030c8, Func Offset: 0x38
	// Line 429, Address: 0x2030cc, Func Offset: 0x3c
	// Line 430, Address: 0x2030d0, Func Offset: 0x40
	// Line 431, Address: 0x2030d4, Func Offset: 0x44
	// Line 434, Address: 0x2030d8, Func Offset: 0x48
	// Line 429, Address: 0x2030e4, Func Offset: 0x54
	// Line 430, Address: 0x2030f4, Func Offset: 0x64
	// Line 429, Address: 0x2030f8, Func Offset: 0x68
	// Line 430, Address: 0x203100, Func Offset: 0x70
	// Line 431, Address: 0x203114, Func Offset: 0x84
	// Line 430, Address: 0x203118, Func Offset: 0x88
	// Line 431, Address: 0x203120, Func Offset: 0x90
	// Line 434, Address: 0x203134, Func Offset: 0xa4
	// Line 431, Address: 0x203138, Func Offset: 0xa8
	// Line 434, Address: 0x203140, Func Offset: 0xb0
	// Line 435, Address: 0x203164, Func Offset: 0xd4
	// Line 436, Address: 0x203170, Func Offset: 0xe0
	// Line 437, Address: 0x203174, Func Offset: 0xe4
	// Line 436, Address: 0x203178, Func Offset: 0xe8
	// Line 437, Address: 0x20317c, Func Offset: 0xec
	// Line 435, Address: 0x203180, Func Offset: 0xf0
	// Line 437, Address: 0x203184, Func Offset: 0xf4
	// Line 436, Address: 0x203188, Func Offset: 0xf8
	// Line 437, Address: 0x20318c, Func Offset: 0xfc
	// Line 436, Address: 0x203190, Func Offset: 0x100
	// Line 437, Address: 0x203194, Func Offset: 0x104
	// Line 435, Address: 0x20319c, Func Offset: 0x10c
	// Line 436, Address: 0x2031a0, Func Offset: 0x110
	// Line 437, Address: 0x2031a4, Func Offset: 0x114
	// Line 438, Address: 0x203208, Func Offset: 0x178
	// Line 437, Address: 0x20320c, Func Offset: 0x17c
	// Line 438, Address: 0x203210, Func Offset: 0x180
	// Line 437, Address: 0x203214, Func Offset: 0x184
	// Line 438, Address: 0x203218, Func Offset: 0x188
	// Line 437, Address: 0x20321c, Func Offset: 0x18c
	// Line 438, Address: 0x203220, Func Offset: 0x190
	// Line 437, Address: 0x203224, Func Offset: 0x194
	// Line 438, Address: 0x20323c, Func Offset: 0x1ac
	// Line 441, Address: 0x203258, Func Offset: 0x1c8
	// Line 438, Address: 0x20325c, Func Offset: 0x1cc
	// Line 440, Address: 0x203274, Func Offset: 0x1e4
	// Line 441, Address: 0x203278, Func Offset: 0x1e8
	// Line 440, Address: 0x20327c, Func Offset: 0x1ec
	// Line 439, Address: 0x203280, Func Offset: 0x1f0
	// Line 441, Address: 0x203284, Func Offset: 0x1f4
	// Line 440, Address: 0x203288, Func Offset: 0x1f8
	// Line 441, Address: 0x20328c, Func Offset: 0x1fc
	// Line 439, Address: 0x203290, Func Offset: 0x200
	// Line 441, Address: 0x203294, Func Offset: 0x204
	// Line 440, Address: 0x20329c, Func Offset: 0x20c
	// Line 439, Address: 0x2032a0, Func Offset: 0x210
	// Line 440, Address: 0x2032a4, Func Offset: 0x214
	// Line 441, Address: 0x2032a8, Func Offset: 0x218
	// Line 444, Address: 0x20330c, Func Offset: 0x27c
	// Line 441, Address: 0x203310, Func Offset: 0x280
	// Line 444, Address: 0x203314, Func Offset: 0x284
	// Line 441, Address: 0x203318, Func Offset: 0x288
	// Line 444, Address: 0x20331c, Func Offset: 0x28c
	// Line 441, Address: 0x203320, Func Offset: 0x290
	// Line 444, Address: 0x203324, Func Offset: 0x294
	// Line 441, Address: 0x203328, Func Offset: 0x298
	// Line 444, Address: 0x203340, Func Offset: 0x2b0
	// Line 447, Address: 0x20335c, Func Offset: 0x2cc
	// Line 444, Address: 0x203360, Func Offset: 0x2d0
	// Line 446, Address: 0x203378, Func Offset: 0x2e8
	// Line 447, Address: 0x20337c, Func Offset: 0x2ec
	// Line 446, Address: 0x203380, Func Offset: 0x2f0
	// Line 445, Address: 0x203384, Func Offset: 0x2f4
	// Line 447, Address: 0x203388, Func Offset: 0x2f8
	// Line 446, Address: 0x20338c, Func Offset: 0x2fc
	// Line 447, Address: 0x203390, Func Offset: 0x300
	// Line 445, Address: 0x203394, Func Offset: 0x304
	// Line 447, Address: 0x203398, Func Offset: 0x308
	// Line 446, Address: 0x2033a0, Func Offset: 0x310
	// Line 445, Address: 0x2033a4, Func Offset: 0x314
	// Line 446, Address: 0x2033a8, Func Offset: 0x318
	// Line 447, Address: 0x2033ac, Func Offset: 0x31c
	// Line 448, Address: 0x203410, Func Offset: 0x380
	// Line 447, Address: 0x203414, Func Offset: 0x384
	// Line 448, Address: 0x203418, Func Offset: 0x388
	// Line 447, Address: 0x20341c, Func Offset: 0x38c
	// Line 448, Address: 0x203420, Func Offset: 0x390
	// Line 447, Address: 0x203424, Func Offset: 0x394
	// Line 448, Address: 0x203428, Func Offset: 0x398
	// Line 447, Address: 0x20342c, Func Offset: 0x39c
	// Line 448, Address: 0x203444, Func Offset: 0x3b4
	// Line 451, Address: 0x203460, Func Offset: 0x3d0
	// Line 448, Address: 0x203464, Func Offset: 0x3d4
	// Line 449, Address: 0x20347c, Func Offset: 0x3ec
	// Line 451, Address: 0x203480, Func Offset: 0x3f0
	// Line 449, Address: 0x203484, Func Offset: 0x3f4
	// Line 450, Address: 0x203488, Func Offset: 0x3f8
	// Line 449, Address: 0x20348c, Func Offset: 0x3fc
	// Line 451, Address: 0x203490, Func Offset: 0x400
	// Line 449, Address: 0x203494, Func Offset: 0x404
	// Line 451, Address: 0x203498, Func Offset: 0x408
	// Line 449, Address: 0x20349c, Func Offset: 0x40c
	// Line 451, Address: 0x2034a0, Func Offset: 0x410
	// Line 449, Address: 0x2034a8, Func Offset: 0x418
	// Line 450, Address: 0x2034ac, Func Offset: 0x41c
	// Line 449, Address: 0x2034b0, Func Offset: 0x420
	// Line 450, Address: 0x2034b4, Func Offset: 0x424
	// Line 451, Address: 0x2034b8, Func Offset: 0x428
	// Line 454, Address: 0x20351c, Func Offset: 0x48c
	// Line 451, Address: 0x203520, Func Offset: 0x490
	// Line 454, Address: 0x203524, Func Offset: 0x494
	// Line 451, Address: 0x203528, Func Offset: 0x498
	// Line 454, Address: 0x20352c, Func Offset: 0x49c
	// Line 451, Address: 0x203530, Func Offset: 0x4a0
	// Line 454, Address: 0x203534, Func Offset: 0x4a4
	// Line 451, Address: 0x203538, Func Offset: 0x4a8
	// Line 454, Address: 0x203550, Func Offset: 0x4c0
	// Line 457, Address: 0x20356c, Func Offset: 0x4dc
	// Line 454, Address: 0x203570, Func Offset: 0x4e0
	// Line 455, Address: 0x203588, Func Offset: 0x4f8
	// Line 457, Address: 0x20358c, Func Offset: 0x4fc
	// Line 455, Address: 0x203590, Func Offset: 0x500
	// Line 456, Address: 0x203594, Func Offset: 0x504
	// Line 457, Address: 0x203598, Func Offset: 0x508
	// Line 455, Address: 0x20359c, Func Offset: 0x50c
	// Line 457, Address: 0x2035a0, Func Offset: 0x510
	// Line 455, Address: 0x2035a4, Func Offset: 0x514
	// Line 457, Address: 0x2035a8, Func Offset: 0x518
	// Line 456, Address: 0x2035b0, Func Offset: 0x520
	// Line 455, Address: 0x2035b4, Func Offset: 0x524
	// Line 456, Address: 0x2035b8, Func Offset: 0x528
	// Line 457, Address: 0x2035bc, Func Offset: 0x52c
	// Line 458, Address: 0x203620, Func Offset: 0x590
	// Line 457, Address: 0x203624, Func Offset: 0x594
	// Line 458, Address: 0x203628, Func Offset: 0x598
	// Line 457, Address: 0x20362c, Func Offset: 0x59c
	// Line 458, Address: 0x203630, Func Offset: 0x5a0
	// Line 457, Address: 0x203634, Func Offset: 0x5a4
	// Line 458, Address: 0x203638, Func Offset: 0x5a8
	// Line 457, Address: 0x20363c, Func Offset: 0x5ac
	// Line 458, Address: 0x203654, Func Offset: 0x5c4
	// Line 461, Address: 0x203670, Func Offset: 0x5e0
	// Line 458, Address: 0x203674, Func Offset: 0x5e4
	// Line 459, Address: 0x20368c, Func Offset: 0x5fc
	// Line 461, Address: 0x203690, Func Offset: 0x600
	// Line 459, Address: 0x203694, Func Offset: 0x604
	// Line 460, Address: 0x203698, Func Offset: 0x608
	// Line 459, Address: 0x2036a0, Func Offset: 0x610
	// Line 460, Address: 0x2036a4, Func Offset: 0x614
	// Line 461, Address: 0x2036a8, Func Offset: 0x618
	// Line 459, Address: 0x2036ac, Func Offset: 0x61c
	// Line 461, Address: 0x2036b0, Func Offset: 0x620
	// Line 460, Address: 0x2036b4, Func Offset: 0x624
	// Line 461, Address: 0x2036b8, Func Offset: 0x628
	// Line 459, Address: 0x2036c0, Func Offset: 0x630
	// Line 460, Address: 0x2036c4, Func Offset: 0x634
	// Line 459, Address: 0x2036c8, Func Offset: 0x638
	// Line 460, Address: 0x2036cc, Func Offset: 0x63c
	// Line 459, Address: 0x2036d0, Func Offset: 0x640
	// Line 460, Address: 0x2036d4, Func Offset: 0x644
	// Line 461, Address: 0x2036d8, Func Offset: 0x648
	// Line 464, Address: 0x20373c, Func Offset: 0x6ac
	// Line 461, Address: 0x203740, Func Offset: 0x6b0
	// Line 464, Address: 0x203744, Func Offset: 0x6b4
	// Line 461, Address: 0x203748, Func Offset: 0x6b8
	// Line 464, Address: 0x20374c, Func Offset: 0x6bc
	// Line 461, Address: 0x203750, Func Offset: 0x6c0
	// Line 464, Address: 0x203754, Func Offset: 0x6c4
	// Line 461, Address: 0x203758, Func Offset: 0x6c8
	// Line 464, Address: 0x203770, Func Offset: 0x6e0
	// Line 467, Address: 0x20378c, Func Offset: 0x6fc
	// Line 464, Address: 0x203790, Func Offset: 0x700
	// Line 465, Address: 0x2037a8, Func Offset: 0x718
	// Line 467, Address: 0x2037ac, Func Offset: 0x71c
	// Line 465, Address: 0x2037b0, Func Offset: 0x720
	// Line 466, Address: 0x2037b4, Func Offset: 0x724
	// Line 467, Address: 0x2037bc, Func Offset: 0x72c
	// Line 465, Address: 0x2037c0, Func Offset: 0x730
	// Line 467, Address: 0x2037c4, Func Offset: 0x734
	// Line 466, Address: 0x2037c8, Func Offset: 0x738
	// Line 467, Address: 0x2037cc, Func Offset: 0x73c
	// Line 465, Address: 0x2037d4, Func Offset: 0x744
	// Line 466, Address: 0x2037d8, Func Offset: 0x748
	// Line 465, Address: 0x2037dc, Func Offset: 0x74c
	// Line 466, Address: 0x2037e0, Func Offset: 0x750
	// Line 467, Address: 0x2037e4, Func Offset: 0x754
	// Line 468, Address: 0x203848, Func Offset: 0x7b8
	// Line 467, Address: 0x20384c, Func Offset: 0x7bc
	// Line 468, Address: 0x203850, Func Offset: 0x7c0
	// Line 467, Address: 0x203854, Func Offset: 0x7c4
	// Line 468, Address: 0x203858, Func Offset: 0x7c8
	// Line 467, Address: 0x20385c, Func Offset: 0x7cc
	// Line 468, Address: 0x203860, Func Offset: 0x7d0
	// Line 467, Address: 0x203864, Func Offset: 0x7d4
	// Line 468, Address: 0x20387c, Func Offset: 0x7ec
	// Line 471, Address: 0x203898, Func Offset: 0x808
	// Line 468, Address: 0x20389c, Func Offset: 0x80c
	// Line 470, Address: 0x2038b4, Func Offset: 0x824
	// Line 469, Address: 0x2038bc, Func Offset: 0x82c
	// Line 470, Address: 0x2038c4, Func Offset: 0x834
	// Line 471, Address: 0x2038cc, Func Offset: 0x83c
	// Line 469, Address: 0x2038d0, Func Offset: 0x840
	// Line 470, Address: 0x2038d4, Func Offset: 0x844
	// Line 471, Address: 0x2038d8, Func Offset: 0x848
	// Line 469, Address: 0x2038e0, Func Offset: 0x850
	// Line 471, Address: 0x2038e4, Func Offset: 0x854
	// Line 470, Address: 0x2038ec, Func Offset: 0x85c
	// Line 469, Address: 0x2038f0, Func Offset: 0x860
	// Line 470, Address: 0x2038f4, Func Offset: 0x864
	// Line 471, Address: 0x2038f8, Func Offset: 0x868
	// Line 472, Address: 0x203980, Func Offset: 0x8f0
	// Func End, Address: 0x20399c, Func Offset: 0x90c
}

// 
// Start address: 0x2039a0
void DrawLineOt(_anon1* wk)
{
	sgSot* ot;
	void* pkt;
	// Line 477, Address: 0x2039a0, Func Offset: 0
	// Line 478, Address: 0x2039b4, Func Offset: 0x14
	// Line 480, Address: 0x2039c0, Func Offset: 0x20
	// Line 481, Address: 0x2039c8, Func Offset: 0x28
	// Line 483, Address: 0x2039e0, Func Offset: 0x40
	// Line 484, Address: 0x2039f4, Func Offset: 0x54
	// Line 485, Address: 0x2039fc, Func Offset: 0x5c
	// Line 486, Address: 0x203a04, Func Offset: 0x64
	// Line 488, Address: 0x203a10, Func Offset: 0x70
	// Line 490, Address: 0x203a18, Func Offset: 0x78
	// Line 491, Address: 0x203a20, Func Offset: 0x80
	// Line 492, Address: 0x203a3c, Func Offset: 0x9c
	// Line 494, Address: 0x203a4c, Func Offset: 0xac
	// Line 495, Address: 0x203a50, Func Offset: 0xb0
	// Func End, Address: 0x203a68, Func Offset: 0xc8
}

// 
// Start address: 0x203a70
void DrawFrameLine(_anon1* wk)
{
	// Line 502, Address: 0x203a70, Func Offset: 0
	// Func End, Address: 0x203a78, Func Offset: 0x8
}

// 
// Start address: 0x203a80
void DrawFrameLineWithBg(_anon1* wk)
{
	// Line 507, Address: 0x203a80, Func Offset: 0
	// Line 510, Address: 0x203a84, Func Offset: 0x4
	// Line 507, Address: 0x203a88, Func Offset: 0x8
	// Line 510, Address: 0x203a90, Func Offset: 0x10
	// Line 515, Address: 0x203a98, Func Offset: 0x18
	// Line 516, Address: 0x203aa0, Func Offset: 0x20
	// Func End, Address: 0x203ab0, Func Offset: 0x30
}

// 
// Start address: 0x203ab0
void MakeBlurPkt(_anon1* wk)
{
	int idx[2];
	int i;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	int x;
	int y;
	unsigned char src_alpha;
	unsigned char dst_alpha;
	unsigned int dst_col;
	unsigned int src_col;
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
	_anon8 src[4];
	_anon8 dst[4];
	int index[2][4];
	// Line 522, Address: 0x203ab0, Func Offset: 0
	// Line 531, Address: 0x203ab4, Func Offset: 0x4
	// Line 522, Address: 0x203ab8, Func Offset: 0x8
	// Line 531, Address: 0x203abc, Func Offset: 0xc
	// Line 522, Address: 0x203ac0, Func Offset: 0x10
	// Line 531, Address: 0x203ac4, Func Offset: 0x14
	// Line 522, Address: 0x203ac8, Func Offset: 0x18
	// Line 531, Address: 0x203acc, Func Offset: 0x1c
	// Line 522, Address: 0x203ad0, Func Offset: 0x20
	// Line 531, Address: 0x203ad4, Func Offset: 0x24
	// Line 522, Address: 0x203ad8, Func Offset: 0x28
	// Line 531, Address: 0x203ae4, Func Offset: 0x34
	// Line 522, Address: 0x203ae8, Func Offset: 0x38
	// Line 531, Address: 0x203aec, Func Offset: 0x3c
	// Line 522, Address: 0x203af0, Func Offset: 0x40
	// Line 531, Address: 0x203af4, Func Offset: 0x44
	// Line 522, Address: 0x203af8, Func Offset: 0x48
	// Line 531, Address: 0x203afc, Func Offset: 0x4c
	// Line 532, Address: 0x203b08, Func Offset: 0x58
	// Line 533, Address: 0x203b44, Func Offset: 0x94
	// Line 532, Address: 0x203b48, Func Offset: 0x98
	// Line 533, Address: 0x203b4c, Func Offset: 0x9c
	// Line 535, Address: 0x203b84, Func Offset: 0xd4
	// Line 533, Address: 0x203b88, Func Offset: 0xd8
	// Line 535, Address: 0x203b8c, Func Offset: 0xdc
	// Line 536, Address: 0x203bcc, Func Offset: 0x11c
	// Line 535, Address: 0x203bd0, Func Offset: 0x120
	// Line 536, Address: 0x203bd4, Func Offset: 0x124
	// Line 537, Address: 0x203c0c, Func Offset: 0x15c
	// Line 536, Address: 0x203c10, Func Offset: 0x160
	// Line 537, Address: 0x203c18, Func Offset: 0x168
	// Line 540, Address: 0x203c24, Func Offset: 0x174
	// Line 539, Address: 0x203c28, Func Offset: 0x178
	// Line 543, Address: 0x203c2c, Func Offset: 0x17c
	// Line 539, Address: 0x203c30, Func Offset: 0x180
	// Line 540, Address: 0x203c34, Func Offset: 0x184
	// Line 543, Address: 0x203c44, Func Offset: 0x194
	// Line 541, Address: 0x203c48, Func Offset: 0x198
	// Line 544, Address: 0x203c4c, Func Offset: 0x19c
	// Line 541, Address: 0x203c50, Func Offset: 0x1a0
	// Line 539, Address: 0x203c54, Func Offset: 0x1a4
	// Line 541, Address: 0x203c60, Func Offset: 0x1b0
	// Line 539, Address: 0x203c64, Func Offset: 0x1b4
	// Line 540, Address: 0x203c68, Func Offset: 0x1b8
	// Line 539, Address: 0x203c6c, Func Offset: 0x1bc
	// Line 540, Address: 0x203c74, Func Offset: 0x1c4
	// Line 541, Address: 0x203c88, Func Offset: 0x1d8
	// Line 540, Address: 0x203c8c, Func Offset: 0x1dc
	// Line 541, Address: 0x203c94, Func Offset: 0x1e4
	// Line 544, Address: 0x203cac, Func Offset: 0x1fc
	// Line 550, Address: 0x203cb8, Func Offset: 0x208
	// Line 548, Address: 0x203cbc, Func Offset: 0x20c
	// Line 553, Address: 0x203cc0, Func Offset: 0x210
	// Line 550, Address: 0x203cc8, Func Offset: 0x218
	// Line 553, Address: 0x203cd0, Func Offset: 0x220
	// Line 550, Address: 0x203cdc, Func Offset: 0x22c
	// Line 554, Address: 0x203ce0, Func Offset: 0x230
	// Line 548, Address: 0x203ce4, Func Offset: 0x234
	// Line 550, Address: 0x203ce8, Func Offset: 0x238
	// Line 549, Address: 0x203cec, Func Offset: 0x23c
	// Line 548, Address: 0x203cf0, Func Offset: 0x240
	// Line 550, Address: 0x203cf4, Func Offset: 0x244
	// Line 549, Address: 0x203cf8, Func Offset: 0x248
	// Line 553, Address: 0x203d00, Func Offset: 0x250
	// Line 549, Address: 0x203d04, Func Offset: 0x254
	// Line 554, Address: 0x203d08, Func Offset: 0x258
	// Line 553, Address: 0x203d0c, Func Offset: 0x25c
	// Line 554, Address: 0x203d2c, Func Offset: 0x27c
	// Line 555, Address: 0x203d40, Func Offset: 0x290
	// Line 556, Address: 0x203d48, Func Offset: 0x298
	// Line 555, Address: 0x203d50, Func Offset: 0x2a0
	// Line 554, Address: 0x203d58, Func Offset: 0x2a8
	// Line 555, Address: 0x203d5c, Func Offset: 0x2ac
	// Line 556, Address: 0x203d60, Func Offset: 0x2b0
	// Line 555, Address: 0x203d64, Func Offset: 0x2b4
	// Line 556, Address: 0x203d68, Func Offset: 0x2b8
	// Line 555, Address: 0x203d6c, Func Offset: 0x2bc
	// Line 556, Address: 0x203d70, Func Offset: 0x2c0
	// Line 555, Address: 0x203d78, Func Offset: 0x2c8
	// Line 556, Address: 0x203d7c, Func Offset: 0x2cc
	// Line 558, Address: 0x203de0, Func Offset: 0x330
	// Line 556, Address: 0x203de4, Func Offset: 0x334
	// Line 558, Address: 0x203de8, Func Offset: 0x338
	// Line 556, Address: 0x203df0, Func Offset: 0x340
	// Line 558, Address: 0x203df4, Func Offset: 0x344
	// Line 556, Address: 0x203df8, Func Offset: 0x348
	// Line 558, Address: 0x203dfc, Func Offset: 0x34c
	// Line 556, Address: 0x203e04, Func Offset: 0x354
	// Line 558, Address: 0x203e10, Func Offset: 0x360
	// Line 556, Address: 0x203e14, Func Offset: 0x364
	// Line 559, Address: 0x203e18, Func Offset: 0x368
	// Line 556, Address: 0x203e1c, Func Offset: 0x36c
	// Line 560, Address: 0x203e20, Func Offset: 0x370
	// Line 556, Address: 0x203e24, Func Offset: 0x374
	// Line 559, Address: 0x203e28, Func Offset: 0x378
	// Line 558, Address: 0x203e2c, Func Offset: 0x37c
	// Line 560, Address: 0x203e30, Func Offset: 0x380
	// Line 558, Address: 0x203e34, Func Offset: 0x384
	// Line 561, Address: 0x203e4c, Func Offset: 0x39c
	// Line 558, Address: 0x203e50, Func Offset: 0x3a0
	// Line 559, Address: 0x203e58, Func Offset: 0x3a8
	// Line 560, Address: 0x203e5c, Func Offset: 0x3ac
	// Line 561, Address: 0x203e60, Func Offset: 0x3b0
	// Line 559, Address: 0x203e64, Func Offset: 0x3b4
	// Line 560, Address: 0x203e68, Func Offset: 0x3b8
	// Line 559, Address: 0x203e6c, Func Offset: 0x3bc
	// Line 560, Address: 0x203e70, Func Offset: 0x3c0
	// Line 561, Address: 0x203e74, Func Offset: 0x3c4
	// Line 559, Address: 0x203e78, Func Offset: 0x3c8
	// Line 561, Address: 0x203e7c, Func Offset: 0x3cc
	// Line 560, Address: 0x203e80, Func Offset: 0x3d0
	// Line 559, Address: 0x203e84, Func Offset: 0x3d4
	// Line 561, Address: 0x203e88, Func Offset: 0x3d8
	// Line 560, Address: 0x203e90, Func Offset: 0x3e0
	// Line 559, Address: 0x203e94, Func Offset: 0x3e4
	// Line 560, Address: 0x203e98, Func Offset: 0x3e8
	// Line 561, Address: 0x203e9c, Func Offset: 0x3ec
	// Line 563, Address: 0x203f00, Func Offset: 0x450
	// Line 561, Address: 0x203f04, Func Offset: 0x454
	// Line 563, Address: 0x203f08, Func Offset: 0x458
	// Line 561, Address: 0x203f10, Func Offset: 0x460
	// Line 563, Address: 0x203f14, Func Offset: 0x464
	// Line 561, Address: 0x203f18, Func Offset: 0x468
	// Line 563, Address: 0x203f1c, Func Offset: 0x46c
	// Line 561, Address: 0x203f24, Func Offset: 0x474
	// Line 563, Address: 0x203f30, Func Offset: 0x480
	// Line 561, Address: 0x203f34, Func Offset: 0x484
	// Line 564, Address: 0x203f38, Func Offset: 0x488
	// Line 561, Address: 0x203f3c, Func Offset: 0x48c
	// Line 565, Address: 0x203f40, Func Offset: 0x490
	// Line 561, Address: 0x203f44, Func Offset: 0x494
	// Line 564, Address: 0x203f48, Func Offset: 0x498
	// Line 563, Address: 0x203f4c, Func Offset: 0x49c
	// Line 565, Address: 0x203f50, Func Offset: 0x4a0
	// Line 563, Address: 0x203f54, Func Offset: 0x4a4
	// Line 566, Address: 0x203f6c, Func Offset: 0x4bc
	// Line 563, Address: 0x203f70, Func Offset: 0x4c0
	// Line 564, Address: 0x203f78, Func Offset: 0x4c8
	// Line 565, Address: 0x203f7c, Func Offset: 0x4cc
	// Line 566, Address: 0x203f80, Func Offset: 0x4d0
	// Line 564, Address: 0x203f84, Func Offset: 0x4d4
	// Line 565, Address: 0x203f88, Func Offset: 0x4d8
	// Line 564, Address: 0x203f8c, Func Offset: 0x4dc
	// Line 565, Address: 0x203f90, Func Offset: 0x4e0
	// Line 566, Address: 0x203f94, Func Offset: 0x4e4
	// Line 564, Address: 0x203f98, Func Offset: 0x4e8
	// Line 566, Address: 0x203f9c, Func Offset: 0x4ec
	// Line 565, Address: 0x203fa0, Func Offset: 0x4f0
	// Line 564, Address: 0x203fa4, Func Offset: 0x4f4
	// Line 566, Address: 0x203fa8, Func Offset: 0x4f8
	// Line 565, Address: 0x203fb0, Func Offset: 0x500
	// Line 564, Address: 0x203fb4, Func Offset: 0x504
	// Line 565, Address: 0x203fb8, Func Offset: 0x508
	// Line 566, Address: 0x203fbc, Func Offset: 0x50c
	// Line 569, Address: 0x204020, Func Offset: 0x570
	// Line 566, Address: 0x204024, Func Offset: 0x574
	// Line 569, Address: 0x204028, Func Offset: 0x578
	// Line 566, Address: 0x204030, Func Offset: 0x580
	// Line 569, Address: 0x204034, Func Offset: 0x584
	// Line 566, Address: 0x204038, Func Offset: 0x588
	// Line 569, Address: 0x20403c, Func Offset: 0x58c
	// Line 566, Address: 0x204044, Func Offset: 0x594
	// Line 569, Address: 0x204050, Func Offset: 0x5a0
	// Line 566, Address: 0x204054, Func Offset: 0x5a4
	// Line 570, Address: 0x204058, Func Offset: 0x5a8
	// Line 566, Address: 0x20405c, Func Offset: 0x5ac
	// Line 571, Address: 0x204060, Func Offset: 0x5b0
	// Line 566, Address: 0x204064, Func Offset: 0x5b4
	// Line 570, Address: 0x204068, Func Offset: 0x5b8
	// Line 569, Address: 0x20406c, Func Offset: 0x5bc
	// Line 571, Address: 0x204070, Func Offset: 0x5c0
	// Line 569, Address: 0x204074, Func Offset: 0x5c4
	// Line 572, Address: 0x20408c, Func Offset: 0x5dc
	// Line 569, Address: 0x204090, Func Offset: 0x5e0
	// Line 570, Address: 0x204098, Func Offset: 0x5e8
	// Line 571, Address: 0x20409c, Func Offset: 0x5ec
	// Line 572, Address: 0x2040a0, Func Offset: 0x5f0
	// Line 570, Address: 0x2040a4, Func Offset: 0x5f4
	// Line 571, Address: 0x2040a8, Func Offset: 0x5f8
	// Line 570, Address: 0x2040ac, Func Offset: 0x5fc
	// Line 571, Address: 0x2040b0, Func Offset: 0x600
	// Line 572, Address: 0x2040b4, Func Offset: 0x604
	// Line 570, Address: 0x2040b8, Func Offset: 0x608
	// Line 572, Address: 0x2040bc, Func Offset: 0x60c
	// Line 571, Address: 0x2040c0, Func Offset: 0x610
	// Line 570, Address: 0x2040c4, Func Offset: 0x614
	// Line 572, Address: 0x2040c8, Func Offset: 0x618
	// Line 571, Address: 0x2040d0, Func Offset: 0x620
	// Line 570, Address: 0x2040d4, Func Offset: 0x624
	// Line 571, Address: 0x2040d8, Func Offset: 0x628
	// Line 572, Address: 0x2040dc, Func Offset: 0x62c
	// Line 574, Address: 0x204128, Func Offset: 0x678
	// Line 572, Address: 0x20412c, Func Offset: 0x67c
	// Line 574, Address: 0x204130, Func Offset: 0x680
	// Line 572, Address: 0x204134, Func Offset: 0x684
	// Line 574, Address: 0x204148, Func Offset: 0x698
	// Line 572, Address: 0x20414c, Func Offset: 0x69c
	// Line 574, Address: 0x204150, Func Offset: 0x6a0
	// Line 572, Address: 0x204154, Func Offset: 0x6a4
	// Line 574, Address: 0x204158, Func Offset: 0x6a8
	// Line 572, Address: 0x20415c, Func Offset: 0x6ac
	// Line 574, Address: 0x204160, Func Offset: 0x6b0
	// Line 572, Address: 0x204164, Func Offset: 0x6b4
	// Line 574, Address: 0x204170, Func Offset: 0x6c0
	// Line 572, Address: 0x204174, Func Offset: 0x6c4
	// Line 575, Address: 0x204178, Func Offset: 0x6c8
	// Line 572, Address: 0x20417c, Func Offset: 0x6cc
	// Line 576, Address: 0x204180, Func Offset: 0x6d0
	// Line 572, Address: 0x204184, Func Offset: 0x6d4
	// Line 575, Address: 0x204188, Func Offset: 0x6d8
	// Line 574, Address: 0x20418c, Func Offset: 0x6dc
	// Line 576, Address: 0x204190, Func Offset: 0x6e0
	// Line 574, Address: 0x204194, Func Offset: 0x6e4
	// Line 577, Address: 0x2041ac, Func Offset: 0x6fc
	// Line 574, Address: 0x2041b0, Func Offset: 0x700
	// Line 575, Address: 0x2041b8, Func Offset: 0x708
	// Line 576, Address: 0x2041bc, Func Offset: 0x70c
	// Line 577, Address: 0x2041c0, Func Offset: 0x710
	// Line 575, Address: 0x2041c4, Func Offset: 0x714
	// Line 576, Address: 0x2041c8, Func Offset: 0x718
	// Line 575, Address: 0x2041cc, Func Offset: 0x71c
	// Line 576, Address: 0x2041d0, Func Offset: 0x720
	// Line 577, Address: 0x2041d4, Func Offset: 0x724
	// Line 575, Address: 0x2041d8, Func Offset: 0x728
	// Line 577, Address: 0x2041dc, Func Offset: 0x72c
	// Line 576, Address: 0x2041e0, Func Offset: 0x730
	// Line 575, Address: 0x2041e4, Func Offset: 0x734
	// Line 577, Address: 0x2041e8, Func Offset: 0x738
	// Line 576, Address: 0x2041f0, Func Offset: 0x740
	// Line 575, Address: 0x2041f4, Func Offset: 0x744
	// Line 576, Address: 0x2041f8, Func Offset: 0x748
	// Line 577, Address: 0x2041fc, Func Offset: 0x74c
	// Line 579, Address: 0x204248, Func Offset: 0x798
	// Line 577, Address: 0x20424c, Func Offset: 0x79c
	// Line 579, Address: 0x204250, Func Offset: 0x7a0
	// Line 577, Address: 0x204254, Func Offset: 0x7a4
	// Line 579, Address: 0x204268, Func Offset: 0x7b8
	// Line 577, Address: 0x20426c, Func Offset: 0x7bc
	// Line 579, Address: 0x204270, Func Offset: 0x7c0
	// Line 577, Address: 0x204274, Func Offset: 0x7c4
	// Line 579, Address: 0x204278, Func Offset: 0x7c8
	// Line 577, Address: 0x20427c, Func Offset: 0x7cc
	// Line 579, Address: 0x204280, Func Offset: 0x7d0
	// Line 577, Address: 0x204284, Func Offset: 0x7d4
	// Line 579, Address: 0x204290, Func Offset: 0x7e0
	// Line 577, Address: 0x204294, Func Offset: 0x7e4
	// Line 580, Address: 0x204298, Func Offset: 0x7e8
	// Line 577, Address: 0x20429c, Func Offset: 0x7ec
	// Line 581, Address: 0x2042a0, Func Offset: 0x7f0
	// Line 577, Address: 0x2042a4, Func Offset: 0x7f4
	// Line 580, Address: 0x2042a8, Func Offset: 0x7f8
	// Line 579, Address: 0x2042ac, Func Offset: 0x7fc
	// Line 581, Address: 0x2042b0, Func Offset: 0x800
	// Line 579, Address: 0x2042b4, Func Offset: 0x804
	// Line 582, Address: 0x2042cc, Func Offset: 0x81c
	// Line 579, Address: 0x2042d0, Func Offset: 0x820
	// Line 580, Address: 0x2042d8, Func Offset: 0x828
	// Line 581, Address: 0x2042dc, Func Offset: 0x82c
	// Line 582, Address: 0x2042e0, Func Offset: 0x830
	// Line 580, Address: 0x2042e4, Func Offset: 0x834
	// Line 581, Address: 0x2042e8, Func Offset: 0x838
	// Line 580, Address: 0x2042ec, Func Offset: 0x83c
	// Line 581, Address: 0x2042f0, Func Offset: 0x840
	// Line 582, Address: 0x2042f4, Func Offset: 0x844
	// Line 580, Address: 0x2042f8, Func Offset: 0x848
	// Line 582, Address: 0x2042fc, Func Offset: 0x84c
	// Line 581, Address: 0x204300, Func Offset: 0x850
	// Line 580, Address: 0x204304, Func Offset: 0x854
	// Line 582, Address: 0x204308, Func Offset: 0x858
	// Line 581, Address: 0x204310, Func Offset: 0x860
	// Line 580, Address: 0x204314, Func Offset: 0x864
	// Line 581, Address: 0x204318, Func Offset: 0x868
	// Line 582, Address: 0x20431c, Func Offset: 0x86c
	// Line 584, Address: 0x204370, Func Offset: 0x8c0
	// Line 582, Address: 0x204374, Func Offset: 0x8c4
	// Line 585, Address: 0x204388, Func Offset: 0x8d8
	// Line 582, Address: 0x20438c, Func Offset: 0x8dc
	// Line 585, Address: 0x2043ac, Func Offset: 0x8fc
	// Line 586, Address: 0x2043bc, Func Offset: 0x90c
	// Func End, Address: 0x2043e8, Func Offset: 0x938
}

// 
// Start address: 0x2043f0
void DrawBlurFrame(_anon1* wk)
{
	sgSot* ot;
	void* pkt;
	// Line 590, Address: 0x2043f0, Func Offset: 0
	// Line 591, Address: 0x204404, Func Offset: 0x14
	// Line 593, Address: 0x204410, Func Offset: 0x20
	// Line 594, Address: 0x204418, Func Offset: 0x28
	// Line 596, Address: 0x204430, Func Offset: 0x40
	// Line 597, Address: 0x204444, Func Offset: 0x54
	// Line 598, Address: 0x20444c, Func Offset: 0x5c
	// Line 599, Address: 0x204454, Func Offset: 0x64
	// Line 601, Address: 0x204460, Func Offset: 0x70
	// Line 603, Address: 0x204468, Func Offset: 0x78
	// Line 604, Address: 0x204470, Func Offset: 0x80
	// Line 605, Address: 0x20448c, Func Offset: 0x9c
	// Line 607, Address: 0x20449c, Func Offset: 0xac
	// Line 608, Address: 0x2044a0, Func Offset: 0xb0
	// Func End, Address: 0x2044b8, Func Offset: 0xc8
}

// 
// Start address: 0x2044c0
void miscFrameDraw(_anon1* wk)
{
	void(*draw_frame)(_anon1*)[2];
	// Line 703, Address: 0x2044c0, Func Offset: 0
	// Line 704, Address: 0x2044d0, Func Offset: 0x10
	// Line 711, Address: 0x2044d8, Func Offset: 0x18
	// Line 715, Address: 0x2044e4, Func Offset: 0x24
	// Line 717, Address: 0x2044e8, Func Offset: 0x28
	// Line 715, Address: 0x2044ec, Func Offset: 0x2c
	// Line 717, Address: 0x2044f4, Func Offset: 0x34
	// Line 719, Address: 0x204500, Func Offset: 0x40
	// Line 724, Address: 0x204508, Func Offset: 0x48
	// Line 727, Address: 0x204528, Func Offset: 0x68
	// Line 728, Address: 0x204534, Func Offset: 0x74
	// Line 731, Address: 0x204584, Func Offset: 0xc4
	// Line 732, Address: 0x204588, Func Offset: 0xc8
	// Line 735, Address: 0x204590, Func Offset: 0xd0
	// Func End, Address: 0x2045a0, Func Offset: 0xe0
}

// 
// Start address: 0x2045a0
void miscFrameConstruct(_anon1* wk)
{
	// Line 865, Address: 0x2045a0, Func Offset: 0
	// Line 866, Address: 0x2045a8, Func Offset: 0x8
	// Line 877, Address: 0x2045ac, Func Offset: 0xc
	// Line 867, Address: 0x2045b0, Func Offset: 0x10
	// Line 877, Address: 0x2045b4, Func Offset: 0x14
	// Line 868, Address: 0x2045b8, Func Offset: 0x18
	// Line 875, Address: 0x2045bc, Func Offset: 0x1c
	// Line 869, Address: 0x2045c0, Func Offset: 0x20
	// Line 880, Address: 0x2045c4, Func Offset: 0x24
	// Line 870, Address: 0x2045c8, Func Offset: 0x28
	// Line 881, Address: 0x2045cc, Func Offset: 0x2c
	// Line 871, Address: 0x2045d0, Func Offset: 0x30
	// Line 872, Address: 0x2045d4, Func Offset: 0x34
	// Line 873, Address: 0x2045d8, Func Offset: 0x38
	// Line 875, Address: 0x2045dc, Func Offset: 0x3c
	// Line 876, Address: 0x2045e0, Func Offset: 0x40
	// Line 877, Address: 0x2045e4, Func Offset: 0x44
	// Line 878, Address: 0x2045ec, Func Offset: 0x4c
	// Line 879, Address: 0x2045f0, Func Offset: 0x50
	// Line 880, Address: 0x2045f4, Func Offset: 0x54
	// Line 881, Address: 0x2045f8, Func Offset: 0x58
	// Line 882, Address: 0x2045fc, Func Offset: 0x5c
	// Line 884, Address: 0x204600, Func Offset: 0x60
	// Func End, Address: 0x204608, Func Offset: 0x68
}

// 
// Start address: 0x204610
void miscFrameSetRect(_anon1* work, float x, float y, float w, float h)
{
	// Line 960, Address: 0x204610, Func Offset: 0
	// Line 961, Address: 0x204618, Func Offset: 0x8
	// Line 962, Address: 0x204620, Func Offset: 0x10
	// Line 963, Address: 0x204628, Func Offset: 0x18
	// Line 964, Address: 0x204630, Func Offset: 0x20
	// Line 966, Address: 0x204638, Func Offset: 0x28
	// Line 967, Address: 0x20463c, Func Offset: 0x2c
	// Line 968, Address: 0x204640, Func Offset: 0x30
	// Line 969, Address: 0x204644, Func Offset: 0x34
	// Line 971, Address: 0x204648, Func Offset: 0x38
	// Func End, Address: 0x204650, Func Offset: 0x40
}

// 
// Start address: 0x204650
void miscFrameGetRect(float* dst, _anon1* work)
{
	// Line 979, Address: 0x204650, Func Offset: 0
	// Line 980, Address: 0x204658, Func Offset: 0x8
	// Line 981, Address: 0x204660, Func Offset: 0x10
	// Line 982, Address: 0x204668, Func Offset: 0x18
	// Line 983, Address: 0x204670, Func Offset: 0x20
	// Line 985, Address: 0x204678, Func Offset: 0x28
	// Func End, Address: 0x204680, Func Offset: 0x30
}

// 
// Start address: 0x204680
void miscFrameSetColor(_anon1* work, unsigned int rgba)
{
	// Line 1003, Address: 0x204680, Func Offset: 0
	// Line 1004, Address: 0x204688, Func Offset: 0x8
	// Line 1005, Address: 0x204690, Func Offset: 0x10
	// Line 1006, Address: 0x204694, Func Offset: 0x14
	// Line 1007, Address: 0x204698, Func Offset: 0x18
	// Func End, Address: 0x2046a0, Func Offset: 0x20
}

// 
// Start address: 0x2046a0
void miscFrameDispOn(_anon1* work)
{
	// Line 1033, Address: 0x2046a0, Func Offset: 0
	// Line 1034, Address: 0x2046a8, Func Offset: 0x8
	// Line 1035, Address: 0x2046ac, Func Offset: 0xc
	// Line 1036, Address: 0x2046b0, Func Offset: 0x10
	// Func End, Address: 0x2046b8, Func Offset: 0x18
}

// 
// Start address: 0x2046c0
void miscFrameDispOff(_anon1* work)
{
	// Line 1041, Address: 0x2046c0, Func Offset: 0
	// Line 1042, Address: 0x2046c8, Func Offset: 0x8
	// Line 1043, Address: 0x2046cc, Func Offset: 0xc
	// Line 1044, Address: 0x2046d0, Func Offset: 0x10
	// Func End, Address: 0x2046d8, Func Offset: 0x18
}

// 
// Start address: 0x2046e0
void miscCursorSetBaseAlphaRatio(float val)
{
	// Line 1088, Address: 0x2046e0, Func Offset: 0
	// Line 1089, Address: 0x2046f8, Func Offset: 0x18
	// Line 1090, Address: 0x204718, Func Offset: 0x38
	// Line 1091, Address: 0x20471c, Func Offset: 0x3c
	// Func End, Address: 0x204724, Func Offset: 0x44
}

// 
// Start address: 0x204730
unsigned int BaseAlphaMul(unsigned int src_col)
{
	unsigned char s_a;
	float tmp;
	// Line 1095, Address: 0x204730, Func Offset: 0
	// Line 1096, Address: 0x204734, Func Offset: 0x4
	// Line 1095, Address: 0x204738, Func Offset: 0x8
	// Line 1099, Address: 0x20473c, Func Offset: 0xc
	// Line 1096, Address: 0x204740, Func Offset: 0x10
	// Line 1099, Address: 0x204744, Func Offset: 0x14
	// Line 1096, Address: 0x204748, Func Offset: 0x18
	// Line 1098, Address: 0x204754, Func Offset: 0x24
	// Line 1099, Address: 0x20476c, Func Offset: 0x3c
	// Line 1100, Address: 0x204774, Func Offset: 0x44
	// Func End, Address: 0x20477c, Func Offset: 0x4c
}

// 
// Start address: 0x204780
void miscCursorConstruct()
{
	int i;
	_anon3* l;
	// Line 1106, Address: 0x204780, Func Offset: 0
	// Line 1110, Address: 0x204790, Func Offset: 0x10
	// Line 1108, Address: 0x204794, Func Offset: 0x14
	// Line 1110, Address: 0x20479c, Func Offset: 0x1c
	// Line 1111, Address: 0x2047a0, Func Offset: 0x20
	// Line 1112, Address: 0x2047ac, Func Offset: 0x2c
	// Line 1113, Address: 0x2047f4, Func Offset: 0x74
	// Line 1114, Address: 0x204804, Func Offset: 0x84
	// Line 1115, Address: 0x204820, Func Offset: 0xa0
	// Line 1117, Address: 0x204830, Func Offset: 0xb0
	// Line 1119, Address: 0x204840, Func Offset: 0xc0
	// Line 1120, Address: 0x204854, Func Offset: 0xd4
	// Line 1123, Address: 0x204858, Func Offset: 0xd8
	// Line 1120, Address: 0x20485c, Func Offset: 0xdc
	// Line 1123, Address: 0x204860, Func Offset: 0xe0
	// Line 1125, Address: 0x204868, Func Offset: 0xe8
	// Line 1121, Address: 0x20486c, Func Offset: 0xec
	// Line 1125, Address: 0x204874, Func Offset: 0xf4
	// Line 1122, Address: 0x204878, Func Offset: 0xf8
	// Line 1125, Address: 0x20487c, Func Offset: 0xfc
	// Line 1126, Address: 0x204884, Func Offset: 0x104
	// Func End, Address: 0x204898, Func Offset: 0x118
}

// 
// Start address: 0x2048a0
float get_ratio(int cnt, int max_cnt)
{
	float t;
	// Line 1134, Address: 0x2048a0, Func Offset: 0
	// Line 1136, Address: 0x2048a4, Func Offset: 0x4
	// Line 1137, Address: 0x2048b8, Func Offset: 0x18
	// Line 1138, Address: 0x2048d0, Func Offset: 0x30
	// Line 1139, Address: 0x2048d4, Func Offset: 0x34
	// Line 1138, Address: 0x2048d8, Func Offset: 0x38
	// Line 1139, Address: 0x2048dc, Func Offset: 0x3c
	// Line 1138, Address: 0x2048e0, Func Offset: 0x40
	// Line 1139, Address: 0x2048ec, Func Offset: 0x4c
	// Line 1140, Address: 0x204918, Func Offset: 0x78
	// Func End, Address: 0x204920, Func Offset: 0x80
}

// 
// Start address: 0x204920
void miscCursorSetXYWH(float cx, float cy, float w, float h)
{
	// Line 1157, Address: 0x204920, Func Offset: 0
	// Line 1158, Address: 0x204928, Func Offset: 0x8
	// Line 1159, Address: 0x204930, Func Offset: 0x10
	// Line 1160, Address: 0x204938, Func Offset: 0x18
	// Line 1161, Address: 0x20493c, Func Offset: 0x1c
	// Func End, Address: 0x204944, Func Offset: 0x24
}

// 
// Start address: 0x204950
void miscCursorSetTimer(unsigned int val)
{
	// Line 1165, Address: 0x204950, Func Offset: 0
	// Line 1166, Address: 0x204954, Func Offset: 0x4
	// Func End, Address: 0x20495c, Func Offset: 0xc
}

// 
// Start address: 0x204960
void miscCursorSetColor(unsigned int argb)
{
	// Line 1175, Address: 0x204960, Func Offset: 0
	// Line 1176, Address: 0x204964, Func Offset: 0x4
	// Func End, Address: 0x20496c, Func Offset: 0xc
}

// 
// Start address: 0x204970
void CursorActUpdate(float base_x, float base_y, float csr_w, float csr_h, unsigned int cnt)
{
	int i;
	float rate;
	_anon3* l;
	int idx;
	float x;
	float y;
	float w;
	float h;
	// Line 1184, Address: 0x204970, Func Offset: 0
	// Line 1186, Address: 0x204974, Func Offset: 0x4
	// Line 1184, Address: 0x204978, Func Offset: 0x8
	// Line 1186, Address: 0x2049c0, Func Offset: 0x50
	// Line 1188, Address: 0x2049c8, Func Offset: 0x58
	// Line 1187, Address: 0x2049cc, Func Offset: 0x5c
	// Line 1186, Address: 0x2049d0, Func Offset: 0x60
	// Line 1190, Address: 0x2049d4, Func Offset: 0x64
	// Line 1188, Address: 0x2049dc, Func Offset: 0x6c
	// Line 1190, Address: 0x2049e0, Func Offset: 0x70
	// Line 1191, Address: 0x2049ec, Func Offset: 0x7c
	// Line 1194, Address: 0x2049f4, Func Offset: 0x84
	// Line 1197, Address: 0x204a38, Func Offset: 0xc8
	// Line 1198, Address: 0x204a40, Func Offset: 0xd0
	// Line 1197, Address: 0x204a44, Func Offset: 0xd4
	// Line 1198, Address: 0x204a48, Func Offset: 0xd8
	// Line 1197, Address: 0x204a4c, Func Offset: 0xdc
	// Line 1200, Address: 0x204a50, Func Offset: 0xe0
	// Line 1198, Address: 0x204a54, Func Offset: 0xe4
	// Line 1197, Address: 0x204a5c, Func Offset: 0xec
	// Line 1198, Address: 0x204a60, Func Offset: 0xf0
	// Line 1197, Address: 0x204a64, Func Offset: 0xf4
	// Line 1198, Address: 0x204a68, Func Offset: 0xf8
	// Line 1197, Address: 0x204a6c, Func Offset: 0xfc
	// Line 1200, Address: 0x204a70, Func Offset: 0x100
	// Line 1201, Address: 0x204a9c, Func Offset: 0x12c
	// Line 1202, Address: 0x204aa0, Func Offset: 0x130
	// Line 1203, Address: 0x204aa8, Func Offset: 0x138
	// Line 1204, Address: 0x204ac0, Func Offset: 0x150
	// Line 1206, Address: 0x204ac8, Func Offset: 0x158
	// Line 1208, Address: 0x204aec, Func Offset: 0x17c
	// Line 1210, Address: 0x204af4, Func Offset: 0x184
	// Line 1211, Address: 0x204af8, Func Offset: 0x188
	// Line 1212, Address: 0x204b00, Func Offset: 0x190
	// Line 1213, Address: 0x204b28, Func Offset: 0x1b8
	// Line 1215, Address: 0x204b30, Func Offset: 0x1c0
	// Line 1216, Address: 0x204b50, Func Offset: 0x1e0
	// Line 1215, Address: 0x204b54, Func Offset: 0x1e4
	// Line 1216, Address: 0x204b5c, Func Offset: 0x1ec
	// Line 1215, Address: 0x204b60, Func Offset: 0x1f0
	// Line 1218, Address: 0x204b64, Func Offset: 0x1f4
	// Line 1219, Address: 0x204b68, Func Offset: 0x1f8
	// Line 1222, Address: 0x204b80, Func Offset: 0x210
	// Line 1226, Address: 0x204b84, Func Offset: 0x214
	// Line 1223, Address: 0x204b88, Func Offset: 0x218
	// Line 1226, Address: 0x204b8c, Func Offset: 0x21c
	// Line 1224, Address: 0x204b90, Func Offset: 0x220
	// Line 1220, Address: 0x204b94, Func Offset: 0x224
	// Line 1225, Address: 0x204b98, Func Offset: 0x228
	// Line 1226, Address: 0x204b9c, Func Offset: 0x22c
	// Line 1227, Address: 0x204ba4, Func Offset: 0x234
	// Func End, Address: 0x204be8, Func Offset: 0x278
}

// 
// Start address: 0x204bf0
void MakeQuadPkt(int* v0, int* v1, int* v2, int* v3, unsigned int argb0, unsigned int argb1)
{
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
	// Line 1251, Address: 0x204bf0, Func Offset: 0
	// Line 1252, Address: 0x204bfc, Func Offset: 0xc
	// Line 1251, Address: 0x204c00, Func Offset: 0x10
	// Line 1252, Address: 0x204c0c, Func Offset: 0x1c
	// Line 1251, Address: 0x204c10, Func Offset: 0x20
	// Line 1252, Address: 0x204c40, Func Offset: 0x50
	// Line 1253, Address: 0x204c5c, Func Offset: 0x6c
	// Line 1252, Address: 0x204c60, Func Offset: 0x70
	// Line 1253, Address: 0x204c64, Func Offset: 0x74
	// Line 1254, Address: 0x204ccc, Func Offset: 0xdc
	// Line 1253, Address: 0x204cd0, Func Offset: 0xe0
	// Line 1254, Address: 0x204cdc, Func Offset: 0xec
	// Line 1253, Address: 0x204ce0, Func Offset: 0xf0
	// Line 1254, Address: 0x204d04, Func Offset: 0x114
	// Line 1255, Address: 0x204d18, Func Offset: 0x128
	// Line 1254, Address: 0x204d1c, Func Offset: 0x12c
	// Line 1255, Address: 0x204d20, Func Offset: 0x130
	// Line 1256, Address: 0x204da0, Func Offset: 0x1b0
	// Line 1255, Address: 0x204db0, Func Offset: 0x1c0
	// Line 1256, Address: 0x204dd4, Func Offset: 0x1e4
	// Line 1257, Address: 0x204de8, Func Offset: 0x1f8
	// Line 1256, Address: 0x204dec, Func Offset: 0x1fc
	// Line 1257, Address: 0x204df0, Func Offset: 0x200
	// Line 1260, Address: 0x204e58, Func Offset: 0x268
	// Line 1257, Address: 0x204e5c, Func Offset: 0x26c
	// Line 1260, Address: 0x204e68, Func Offset: 0x278
	// Line 1257, Address: 0x204e6c, Func Offset: 0x27c
	// Line 1260, Address: 0x204e90, Func Offset: 0x2a0
	// Line 1261, Address: 0x204ea4, Func Offset: 0x2b4
	// Line 1260, Address: 0x204ea8, Func Offset: 0x2b8
	// Line 1261, Address: 0x204eac, Func Offset: 0x2bc
	// Line 1262, Address: 0x204f14, Func Offset: 0x324
	// Line 1261, Address: 0x204f18, Func Offset: 0x328
	// Line 1262, Address: 0x204f24, Func Offset: 0x334
	// Line 1261, Address: 0x204f28, Func Offset: 0x338
	// Line 1262, Address: 0x204f4c, Func Offset: 0x35c
	// Line 1263, Address: 0x204f60, Func Offset: 0x370
	// Line 1262, Address: 0x204f64, Func Offset: 0x374
	// Line 1263, Address: 0x204f68, Func Offset: 0x378
	// Line 1264, Address: 0x204fd0, Func Offset: 0x3e0
	// Line 1263, Address: 0x204fd4, Func Offset: 0x3e4
	// Line 1264, Address: 0x204fe0, Func Offset: 0x3f0
	// Line 1263, Address: 0x204fe4, Func Offset: 0x3f4
	// Line 1264, Address: 0x205008, Func Offset: 0x418
	// Line 1265, Address: 0x20501c, Func Offset: 0x42c
	// Line 1264, Address: 0x205020, Func Offset: 0x430
	// Line 1265, Address: 0x205024, Func Offset: 0x434
	// Line 1266, Address: 0x2050bc, Func Offset: 0x4cc
	// Func End, Address: 0x2050e8, Func Offset: 0x4f8
}

// 
// Start address: 0x2050f0
void miscCursorMakePktForBlur(_anon2* c)
{
	void* pkt;
	int idx;
	_anon0* prm0;
	_anon0* prm1;
	int i;
	unsigned long* p;
	unsigned long* p;
	int v0[4];
	int v1[4];
	int v2[4];
	int v3[4];
	unsigned int tmp;
	// Line 1270, Address: 0x2050f0, Func Offset: 0
	// Line 1271, Address: 0x205120, Func Offset: 0x30
	// Line 1273, Address: 0x205138, Func Offset: 0x48
	// Line 1274, Address: 0x20514c, Func Offset: 0x5c
	// Line 1278, Address: 0x205150, Func Offset: 0x60
	// Line 1279, Address: 0x205154, Func Offset: 0x64
	// Line 1278, Address: 0x205158, Func Offset: 0x68
	// Line 1279, Address: 0x205160, Func Offset: 0x70
	// Line 1278, Address: 0x205164, Func Offset: 0x74
	// Line 1279, Address: 0x205168, Func Offset: 0x78
	// Line 1281, Address: 0x205180, Func Offset: 0x90
	// Line 1279, Address: 0x205184, Func Offset: 0x94
	// Line 1281, Address: 0x205190, Func Offset: 0xa0
	// Line 1282, Address: 0x205198, Func Offset: 0xa8
	// Line 1284, Address: 0x2051a8, Func Offset: 0xb8
	// Line 1285, Address: 0x2051b0, Func Offset: 0xc0
	// Line 1287, Address: 0x2051bc, Func Offset: 0xcc
	// Line 1288, Address: 0x2051c0, Func Offset: 0xd0
	// Line 1287, Address: 0x2051c4, Func Offset: 0xd4
	// Line 1288, Address: 0x2051cc, Func Offset: 0xdc
	// Line 1290, Address: 0x2051d4, Func Offset: 0xe4
	// Line 1287, Address: 0x2051ec, Func Offset: 0xfc
	// Line 1288, Address: 0x2051fc, Func Offset: 0x10c
	// Line 1287, Address: 0x205200, Func Offset: 0x110
	// Line 1288, Address: 0x205204, Func Offset: 0x114
	// Line 1290, Address: 0x20521c, Func Offset: 0x12c
	// Line 1293, Address: 0x205220, Func Offset: 0x130
	// Line 1294, Address: 0x20524c, Func Offset: 0x15c
	// Line 1293, Address: 0x205254, Func Offset: 0x164
	// Line 1294, Address: 0x205270, Func Offset: 0x180
	// Line 1295, Address: 0x205298, Func Offset: 0x1a8
	// Line 1294, Address: 0x20529c, Func Offset: 0x1ac
	// Line 1295, Address: 0x2052a0, Func Offset: 0x1b0
	// Line 1294, Address: 0x2052a4, Func Offset: 0x1b4
	// Line 1295, Address: 0x2052cc, Func Offset: 0x1dc
	// Line 1296, Address: 0x2052f4, Func Offset: 0x204
	// Line 1295, Address: 0x2052fc, Func Offset: 0x20c
	// Line 1296, Address: 0x205318, Func Offset: 0x228
	// Line 1297, Address: 0x205340, Func Offset: 0x250
	// Line 1296, Address: 0x205344, Func Offset: 0x254
	// Line 1297, Address: 0x205374, Func Offset: 0x284
	// Line 1303, Address: 0x20537c, Func Offset: 0x28c
	// Line 1304, Address: 0x2053ac, Func Offset: 0x2bc
	// Line 1303, Address: 0x2053b0, Func Offset: 0x2c0
	// Line 1304, Address: 0x2053b4, Func Offset: 0x2c4
	// Line 1306, Address: 0x2053c0, Func Offset: 0x2d0
	// Line 1307, Address: 0x2053c8, Func Offset: 0x2d8
	// Line 1309, Address: 0x2053d0, Func Offset: 0x2e0
	// Line 1310, Address: 0x2053e8, Func Offset: 0x2f8
	// Line 1313, Address: 0x205400, Func Offset: 0x310
	// Func End, Address: 0x205430, Func Offset: 0x340
}

// 
// Start address: 0x205430
void miscCursorUpdate()
{
	unsigned int col;
	int i;
	_anon3* l;
	float cx;
	float cy;
	float w;
	float h;
	// Line 1317, Address: 0x205430, Func Offset: 0
	// Line 1328, Address: 0x205434, Func Offset: 0x4
	// Line 1317, Address: 0x205438, Func Offset: 0x8
	// Line 1320, Address: 0x20543c, Func Offset: 0xc
	// Line 1317, Address: 0x205440, Func Offset: 0x10
	// Line 1328, Address: 0x205444, Func Offset: 0x14
	// Line 1317, Address: 0x205448, Func Offset: 0x18
	// Line 1329, Address: 0x205450, Func Offset: 0x20
	// Line 1317, Address: 0x205454, Func Offset: 0x24
	// Line 1322, Address: 0x205458, Func Offset: 0x28
	// Line 1317, Address: 0x20545c, Func Offset: 0x2c
	// Line 1322, Address: 0x205460, Func Offset: 0x30
	// Line 1317, Address: 0x205464, Func Offset: 0x34
	// Line 1320, Address: 0x20546c, Func Offset: 0x3c
	// Line 1323, Address: 0x205470, Func Offset: 0x40
	// Line 1324, Address: 0x205478, Func Offset: 0x48
	// Line 1325, Address: 0x205480, Func Offset: 0x50
	// Line 1326, Address: 0x205488, Func Offset: 0x58
	// Line 1328, Address: 0x205490, Func Offset: 0x60
	// Line 1329, Address: 0x2054ac, Func Offset: 0x7c
	// Line 1330, Address: 0x2054b0, Func Offset: 0x80
	// Line 1332, Address: 0x2054dc, Func Offset: 0xac
	// Line 1334, Address: 0x2054ec, Func Offset: 0xbc
	// Line 1336, Address: 0x205508, Func Offset: 0xd8
	// Line 1337, Address: 0x205510, Func Offset: 0xe0
	// Line 1336, Address: 0x205514, Func Offset: 0xe4
	// Line 1337, Address: 0x205518, Func Offset: 0xe8
	// Line 1336, Address: 0x20551c, Func Offset: 0xec
	// Line 1337, Address: 0x205524, Func Offset: 0xf4
	// Line 1338, Address: 0x205544, Func Offset: 0x114
	// Func End, Address: 0x20556c, Func Offset: 0x13c
}

// 
// Start address: 0x205570
int miscCursorIsActDone()
{
	// Line 1343, Address: 0x205570, Func Offset: 0
	// Line 1344, Address: 0x20557c, Func Offset: 0xc
	// Func End, Address: 0x205584, Func Offset: 0x14
}

// 
// Start address: 0x205590
void miscCursorDispOn()
{
	// Line 1348, Address: 0x205590, Func Offset: 0
	// Line 1349, Address: 0x20559c, Func Offset: 0xc
	// Func End, Address: 0x2055b0, Func Offset: 0x20
}

// 
// Start address: 0x2055b0
void miscCursorDispOff()
{
	// Line 1354, Address: 0x2055b0, Func Offset: 0
	// Line 1355, Address: 0x2055b4, Func Offset: 0x4
	// Func End, Address: 0x2055bc, Func Offset: 0xc
}

// 
// Start address: 0x2055c0
void miscCursorDraw()
{
	_anon3* l;
	int i;
	// Line 1363, Address: 0x2055c0, Func Offset: 0
	// Line 1367, Address: 0x2055c4, Func Offset: 0x4
	// Line 1363, Address: 0x2055c8, Func Offset: 0x8
	// Line 1364, Address: 0x2055d4, Func Offset: 0x14
	// Line 1367, Address: 0x2055d8, Func Offset: 0x18
	// Line 1368, Address: 0x2055e4, Func Offset: 0x24
	// Line 1369, Address: 0x2055e8, Func Offset: 0x28
	// Line 1371, Address: 0x2055f4, Func Offset: 0x34
	// Line 1373, Address: 0x205604, Func Offset: 0x44
	// Line 1375, Address: 0x205610, Func Offset: 0x50
	// Func End, Address: 0x205624, Func Offset: 0x64
}

