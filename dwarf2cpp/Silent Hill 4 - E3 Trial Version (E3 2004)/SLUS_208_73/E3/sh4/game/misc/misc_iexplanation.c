typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef enum GameItem : unsigned char;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _sfMenuObjRect;
typedef enum _enum : unsigned char;


typedef unsigned char type_0[2];
typedef int type_1[7];
typedef float type_2[4];
typedef _anon2 type_3[121];
typedef unsigned int type_4[4];

struct _anon0
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
	_enum type;
	unsigned int col;
	unsigned int pre_col;
	unsigned int alpha;
	unsigned int timer;
	int disp_flag;
	int blur_flag;
	unsigned int ot;
};

struct _anon1
{
	int dst_cx;
	int dst_cy;
	int dst_w;
	int dst_h;
	int string_alpha;
	GameItem item_kind;
	int mes_id;
	int pack_id;
	int type;
	int timer;
	int disp_flag;
	int string_disp;
	_anon0 frame;
};

struct _anon2
{
	GameItem kind;
	short name;
	short info;
};

enum GameItem : unsigned char
{
	ITEM_EMPTY,
	ITEM_SMALL_BULLET,
	ITEM_LARGE_BULLET,
	ITEM_SILVER_BULLET,
	ITEM_HOLY_CANDLE,
	ITEM_FINISHER,
	ITEM_RED_CHRISM,
	ITEM_LOADS_PRAYER,
	ITEM_SAINT_MEDALLION,
	ITEM_HEALTH_DRINK,
	ITEM_AMPLE,
	ITEM_FIRST_AID_KIT,
	ITEM_HANDGUN = 0x10,
	ITEM_REVOLVER,
	ITEM_IRON_PIPE,
	ITEM_CUTTER_KNIFE,
	ITEM_METAL_BAT,
	ITEM_DRIVER,
	ITEM_DRIVER_BROKEN,
	ITEM_SPOON,
	ITEM_SPOON_BROKEN,
	ITEM_MID_MASHY,
	ITEM_MID_MASHY_BROKEN,
	ITEM_MASHY_IRON,
	ITEM_MASHY_IRON_BROKEN,
	ITEM_MASHY,
	ITEM_MASHY_BROKEN,
	ITEM_SPADE_MASHY,
	ITEM_SPADE_MASHY_BROKEN,
	ITEM_MASHY_NIBLICK,
	ITEM_MASHY_NIBLICK_BROKEN,
	ITEM_PITCHER,
	ITEM_PITCHER_BROKEN,
	ITEM_NIBLICK,
	ITEM_NIBLICK_BROKEN,
	ITEM_PITCHING_WEDGE,
	ITEM_PITCHING_WEDGE_BROKEN,
	ITEM_SAND_WEDGE,
	ITEM_SAND_WEDGE_BROKEN,
	ITEM_PUTTER,
	ITEM_PUTTER_BROKEN,
	ITEM_WINE_BOTTLE,
	ITEM_WINE_BOTTLE_BROKEN,
	ITEM_SCOOP,
	ITEM_RUSTY_HATCHET,
	ITEM_PICK_OF_DESPAIR,
	ITEM_STUN_GUN,
	ITEM_SPRAY,
	ITEM_CLUB,
	ITEM_CHAIN_SAW,
	ITEM_KEY_OF_LIBERATION = 0x3c,
	ITEM_COIN_OF_LYNCHSTREETLINE,
	ITEM_CHOCOLATE_MILK,
	ITEM_SHOVEL_WITH_BLOOD_CHARACTER,
	ITEM_RUSTY_BLOODY_KEY,
	ITEM_RED_PAPER_1,
	ITEM_RED_PAPER_2,
	ITEM_RED_PAPER_3,
	ITEM_RED_PAPER_4,
	ITEM_RED_PAPER_5,
	ITEM_RED_PAPER_6,
	ITEM_TORN_RED_PAPER_1,
	ITEM_TORN_RED_PAPER_2,
	ITEM_TORN_RED_PAPER_MISS,
	ITEM_KEY_OF_SUPERINTENDANT,
	ITEM_KEY_ROCKER106,
	ITEM_CASSETTE_TAPE,
	ITEM_KEY_WITH_DOLL,
	ITEM_CHARM_OF_SUCCUBUS,
	ITEM_KEY_OF_SICKROOM,
	ITEM_RED_ENVELOPE,
	ITEM_SMALL_KEY,
	ITEM_CYNTHIAS_PASS,
	ITEM_OLD_DOLL,
	ITEM_MASTER_KEY_TO_APART,
	ITEM_ARMORIAL_MEDAL,
	ITEM_PICK_OF_HOPE,
	ITEM_NAVEL_STRING,
	ITEM_ALESSAS_SPEAR,
	ITEM_DIRTY_ENVELOPE,
	ITEM_TOY_KEY,
	ITEM_1SS_COIN_DIRTY,
	ITEM_1SS_COIN,
	ITEM_SB24_KEY,
	ITEM_HANDLE,
	ITEM_DOLLS_HEAD,
	ITEM_DOLLS_RIGHT_ARM,
	ITEM_DOLLS_LEFT_ARM,
	ITEM_DOLLS_RIGHT_LEG,
	ITEM_DOLLS_LEFT_LEG,
	ITEM_UNDERGROUND_KEY,
	ITEM_PRISONERS_SHIRT,
	ITEM_BILLIARD_BALL,
	ITEM_STUFFED_CAT,
	ITEM_VOLLEYBALL,
	ITEM_SMALL_CANDLE_PACKED,
	ITEM_SMALL_CANDLE,
	ITEM_GHOSTS_KEY,
	ITEM_DIRTY_STONE1,
	ITEM_DIRTY_STONE2,
	ITEM_DIRTY_STONE3,
	ITEM_DIRTY_STONE4,
	ITEM_DIRTY_STONE5,
	ITEM_CHANNELING_STONE1,
	ITEM_CHANNELING_STONE2,
	ITEM_CHANNELING_STONE3,
	ITEM_CHANNELING_STONE4,
	ITEM_CHANNELING_STONE5,
	ITEM_PLATE_OF_TEMPTATION,
	ITEM_PLATE_OF_ORIGIN,
	ITEM_PLATE_OF_SURVEILLANCE,
	ITEM_PLATE_OF_CHAOS,
	ITEM_ALBERT_SPORTS_KEY,
	ITEM_UNIFORM,
	ITEM_MZ_UPPER_KEY,
	ITEM_TRAILER_KEY,
	ITEM_HANDBAG = 0x80,
	ITEM_SUBMACHINEGUN,
	ITEM_BLACKJACK,
	ITEM_HORSEWHIP,
	ITEM_CHAIN,
	ITEM_FIRST_LETTER = 0x88,
	ITEM_SCRAP_OF_BOOK,
	ITEM_RED_DIARY_0408,
	ITEM_RED_DIARY_0404,
	ITEM_SCRAP_OF_BIBLE,
	ITEM_DIARY_OF_NEIGHBOUR,
	ITEM_SUPERINTENDANTS_MEMO,
	ITEM_SUPERINTENDANTS_DIARY,
	ITEM_RED_DIARY_0502,
	ITEM_RED_DIARY_0514,
	ITEM_RED_DIARY_0520,
	ITEM_SCRAP_OF_RED_DIARY,
	ITEM_SCRAP_OF_RED_DIARY_2,
	ITEM_MIKES_LOVELETTER,
	ITEM_RED_DIARY_0713,
	ITEM_RED_DIARY_0720,
	ITEM_HOLY_MOTHER_21_SACRAMENTS,
	ITEM_RED_BOOK,
	ITEM_PICTURE_BOOK,
	ITEM_RED_DIARY_0611,
	ITEM_RED_DIARY_0614,
	ITEM_RED_DIARY_SOMETIMEAGO,
	ITEM_RED_DIARY_0717,
	ITEM_RED_DIARY_0718,
	ITEM_RED_DIARY_0723,
	ITEM_RED_DIARY_0725,
	ITEM_RED_DIARY_0728,
	ITEM_RED_DIARY_0729,
	ITEM_RED_DIARY_0802,
	ITEM_RED_DIARY_0803,
	ITEM_RED_DIARY_0804,
	ITEM_RED_DIARY_0805,
	ITEM_RED_DIARY_0807,
	ITEM_SUPERINTENDANTS_DIARY_COUT,
	ITEM_JOSEPHS_LETTER,
	ITEM_JOSEPHS_REPORT,
	ITEM_NURSE_MEMO,
	ITEM_CHILD_LETTER,
	ITEM_BLOODY_SHIRT,
	ITEM_BARTENDERS_MEMO,
	ITEM_BARTENDERS_MEMO2,
	ITEM_MEMOIRS,
	ITEM_JASPERS_MEMO,
	ITEM_BURNED_OUT_MEMO,
	ITEM_DOLLS_TEXT,
	ITEM_EXPLORERS_MEMO,
	ITEM_SENTINELS_DIARY,
	ITEM_PLATE_ABOUT_WATERWHEEL,
	ITEM_PRISONERS_DIARY,
	ITEM_REPORT_1F,
	ITEM_REPORT_2F,
	ITEM_PASSWORD_MEMO,
	ITEM_BRICK = 0xe4,
	ITEM_KILLER_PIPE,
	ITEM_KILLER_GUN1,
	ITEM_KILLER_GUN2,
	ITEM_KIND_MAX
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
	_anon3* tex;
	unsigned char tcc;
	unsigned char tfx;
	unsigned char pad[2];
};

struct _anon5
{
	unsigned int cbp;
	unsigned int ofs;
};

struct _anon6
{
	unsigned long reg_alpha;
	unsigned long reg_prim;
	unsigned long reg_test;
	_anon4 tex_data;
	_anon5 clut_data;
	unsigned short ot;
	unsigned short z;
};

struct _anon7
{
	int level;
	int step[7];
};

struct _anon8
{
	_anon6 base;
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

struct _sfMenuObjRect
{
	int x;
	int y;
	int w;
	int h;
	_sfMenuObjRect* next;
	_sfMenuObjRect* prev;
};

enum _enum : unsigned char
{
	FRAME_LINE,
	FRAME_LINE_WITH_BG
};

_anon2 item_message_table[121];
_anon1 explanation;
_anon7 local_step_work;

float get_ratio(int cnt, int max_cnt);
int miscItemExplGetItemInfoId(GameItem id);
void miscItemExplFilter(unsigned int depth);
void miscItemExplRectSet(_anon1* wk, int type);
void miscItemExplWorkInit(_anon1* wk, GameItem item_kind, int type);
int miscItemExplAppear(_anon1* wk, int src_x, int src_y, int src_w, int src_h);
void miscItemExplStringDisp(_anon1* wk);
void miscItemExplInit();
void miscItemExplClear();
int miscItemExplExec_Menu(int is_itembox, int is_force_init);
void miscItemExplDisp_Menu();
void miscItemExplDisp_BoxOn();
void miscItemExplDisp_BoxOff();
void miscItemExplExec_Box(GameItem item_kind, float src_x, float src_y, float src_w, float src_h, int flag);
void miscItemExplDisp_Box();

// 
// Start address: 0x1e9070
float get_ratio(int cnt, int max_cnt)
{
	float t;
	// Line 342, Address: 0x1e9070, Func Offset: 0
	// Line 344, Address: 0x1e9074, Func Offset: 0x4
	// Line 345, Address: 0x1e9088, Func Offset: 0x18
	// Line 346, Address: 0x1e90a0, Func Offset: 0x30
	// Line 347, Address: 0x1e90a4, Func Offset: 0x34
	// Line 346, Address: 0x1e90a8, Func Offset: 0x38
	// Line 347, Address: 0x1e90ac, Func Offset: 0x3c
	// Line 346, Address: 0x1e90b0, Func Offset: 0x40
	// Line 347, Address: 0x1e90bc, Func Offset: 0x4c
	// Line 348, Address: 0x1e90e8, Func Offset: 0x78
	// Func End, Address: 0x1e90f0, Func Offset: 0x80
}

// 
// Start address: 0x1e90f0
int miscItemExplGetItemInfoId(GameItem id)
{
	_anon2* m;
	int i;
	// Line 370, Address: 0x1e90f4, Func Offset: 0x4
	// Line 374, Address: 0x1e9104, Func Offset: 0x14
	// Line 371, Address: 0x1e9108, Func Offset: 0x18
	// Line 374, Address: 0x1e910c, Func Offset: 0x1c
	// Line 375, Address: 0x1e9110, Func Offset: 0x20
	// Line 376, Address: 0x1e911c, Func Offset: 0x2c
	// Line 377, Address: 0x1e9124, Func Offset: 0x34
	// Line 379, Address: 0x1e9128, Func Offset: 0x38
	// Line 381, Address: 0x1e9138, Func Offset: 0x48
	// Line 382, Address: 0x1e9140, Func Offset: 0x50
	// Func End, Address: 0x1e9148, Func Offset: 0x58
}

// 
// Start address: 0x1e9150
void miscItemExplFilter(unsigned int depth)
{
	_anon8 filter;
	int flag;
	// Line 389, Address: 0x1e9150, Func Offset: 0
	// Line 393, Address: 0x1e9154, Func Offset: 0x4
	// Line 389, Address: 0x1e9158, Func Offset: 0x8
	// Line 393, Address: 0x1e9164, Func Offset: 0x14
	// Line 394, Address: 0x1e9170, Func Offset: 0x20
	// Line 395, Address: 0x1e9180, Func Offset: 0x30
	// Line 397, Address: 0x1e91b4, Func Offset: 0x64
	// Line 399, Address: 0x1e91d4, Func Offset: 0x84
	// Line 400, Address: 0x1e91e8, Func Offset: 0x98
	// Line 401, Address: 0x1e91fc, Func Offset: 0xac
	// Line 404, Address: 0x1e9210, Func Offset: 0xc0
	// Line 405, Address: 0x1e921c, Func Offset: 0xcc
	// Line 408, Address: 0x1e9220, Func Offset: 0xd0
	// Line 409, Address: 0x1e9240, Func Offset: 0xf0
	// Line 410, Address: 0x1e9250, Func Offset: 0x100
	// Func End, Address: 0x1e9264, Func Offset: 0x114
}

// 
// Start address: 0x1e9270
void miscItemExplRectSet(_anon1* wk, int type)
{
	// Line 415, Address: 0x1e9270, Func Offset: 0
	// Line 416, Address: 0x1e9284, Func Offset: 0x14
	// Line 417, Address: 0x1e9290, Func Offset: 0x20
	// Line 419, Address: 0x1e929c, Func Offset: 0x2c
	// Line 421, Address: 0x1e92b8, Func Offset: 0x48
	// Line 422, Address: 0x1e92d4, Func Offset: 0x64
	// Line 423, Address: 0x1e92d8, Func Offset: 0x68
	// Line 424, Address: 0x1e931c, Func Offset: 0xac
	// Line 425, Address: 0x1e9324, Func Offset: 0xb4
	// Line 426, Address: 0x1e9328, Func Offset: 0xb8
	// Line 428, Address: 0x1e9384, Func Offset: 0x114
	// Line 429, Address: 0x1e9388, Func Offset: 0x118
	// Func End, Address: 0x1e939c, Func Offset: 0x12c
}

// 
// Start address: 0x1e93a0
void miscItemExplWorkInit(_anon1* wk, GameItem item_kind, int type)
{
	int num;
	// Line 438, Address: 0x1e93a0, Func Offset: 0
	// Line 441, Address: 0x1e93bc, Func Offset: 0x1c
	// Line 442, Address: 0x1e93c4, Func Offset: 0x24
	// Line 443, Address: 0x1e93d0, Func Offset: 0x30
	// Line 445, Address: 0x1e93d4, Func Offset: 0x34
	// Line 447, Address: 0x1e93e0, Func Offset: 0x40
	// Line 448, Address: 0x1e93e8, Func Offset: 0x48
	// Line 449, Address: 0x1e93f0, Func Offset: 0x50
	// Line 451, Address: 0x1e93f8, Func Offset: 0x58
	// Line 452, Address: 0x1e9400, Func Offset: 0x60
	// Line 455, Address: 0x1e9404, Func Offset: 0x64
	// Line 457, Address: 0x1e9408, Func Offset: 0x68
	// Line 458, Address: 0x1e940c, Func Offset: 0x6c
	// Line 464, Address: 0x1e9410, Func Offset: 0x70
	// Line 459, Address: 0x1e9414, Func Offset: 0x74
	// Line 464, Address: 0x1e9418, Func Offset: 0x78
	// Line 467, Address: 0x1e9424, Func Offset: 0x84
	// Line 468, Address: 0x1e942c, Func Offset: 0x8c
	// Line 470, Address: 0x1e9438, Func Offset: 0x98
	// Line 471, Address: 0x1e9444, Func Offset: 0xa4
	// Func End, Address: 0x1e945c, Func Offset: 0xbc
}

// 
// Start address: 0x1e9460
int miscItemExplAppear(_anon1* wk, int src_x, int src_y, int src_w, int src_h)
{
	int rtv;
	float rate;
	unsigned int alpha;
	float plate_cx;
	float plate_cy;
	float plate_w;
	float plate_h;
	float cx0;
	float cy0;
	float w0;
	float h0;
	int mes_cx;
	int mes_cy;
	float h1;
	float w1;
	float cy2;
	float cy1;
	float cx2;
	float cx1;
	float h2;
	float w2;
	// Line 479, Address: 0x1e9460, Func Offset: 0
	// Line 489, Address: 0x1e9464, Func Offset: 0x4
	// Line 479, Address: 0x1e9468, Func Offset: 0x8
	// Line 480, Address: 0x1e9480, Func Offset: 0x20
	// Line 479, Address: 0x1e9484, Func Offset: 0x24
	// Line 489, Address: 0x1e948c, Func Offset: 0x2c
	// Line 490, Address: 0x1e94a4, Func Offset: 0x44
	// Line 491, Address: 0x1e94b8, Func Offset: 0x58
	// Line 490, Address: 0x1e94bc, Func Offset: 0x5c
	// Line 494, Address: 0x1e94c4, Func Offset: 0x64
	// Line 491, Address: 0x1e94c8, Func Offset: 0x68
	// Line 492, Address: 0x1e94cc, Func Offset: 0x6c
	// Line 490, Address: 0x1e94d4, Func Offset: 0x74
	// Line 494, Address: 0x1e94d8, Func Offset: 0x78
	// Line 496, Address: 0x1e94e0, Func Offset: 0x80
	// Line 497, Address: 0x1e94f4, Func Offset: 0x94
	// Line 498, Address: 0x1e9528, Func Offset: 0xc8
	// Line 499, Address: 0x1e9538, Func Offset: 0xd8
	// Line 502, Address: 0x1e9548, Func Offset: 0xe8
	// Line 503, Address: 0x1e9558, Func Offset: 0xf8
	// Line 504, Address: 0x1e9568, Func Offset: 0x108
	// Line 505, Address: 0x1e9578, Func Offset: 0x118
	// Line 509, Address: 0x1e958c, Func Offset: 0x12c
	// Line 511, Address: 0x1e9598, Func Offset: 0x138
	// Line 513, Address: 0x1e95a0, Func Offset: 0x140
	// Line 519, Address: 0x1e95a4, Func Offset: 0x144
	// Line 513, Address: 0x1e95a8, Func Offset: 0x148
	// Line 519, Address: 0x1e95ac, Func Offset: 0x14c
	// Line 514, Address: 0x1e95bc, Func Offset: 0x15c
	// Line 513, Address: 0x1e95c4, Func Offset: 0x164
	// Line 516, Address: 0x1e95cc, Func Offset: 0x16c
	// Line 514, Address: 0x1e95d4, Func Offset: 0x174
	// Line 517, Address: 0x1e95dc, Func Offset: 0x17c
	// Line 516, Address: 0x1e95e4, Func Offset: 0x184
	// Line 517, Address: 0x1e95ec, Func Offset: 0x18c
	// Line 519, Address: 0x1e95f8, Func Offset: 0x198
	// Line 513, Address: 0x1e95fc, Func Offset: 0x19c
	// Line 514, Address: 0x1e9600, Func Offset: 0x1a0
	// Line 519, Address: 0x1e9604, Func Offset: 0x1a4
	// Line 520, Address: 0x1e9638, Func Offset: 0x1d8
	// Line 521, Address: 0x1e963c, Func Offset: 0x1dc
	// Line 525, Address: 0x1e9648, Func Offset: 0x1e8
	// Line 533, Address: 0x1e9658, Func Offset: 0x1f8
	// Line 525, Address: 0x1e965c, Func Offset: 0x1fc
	// Line 532, Address: 0x1e9660, Func Offset: 0x200
	// Line 533, Address: 0x1e9664, Func Offset: 0x204
	// Line 526, Address: 0x1e9670, Func Offset: 0x210
	// Line 527, Address: 0x1e9688, Func Offset: 0x228
	// Line 526, Address: 0x1e9690, Func Offset: 0x230
	// Line 527, Address: 0x1e9694, Func Offset: 0x234
	// Line 529, Address: 0x1e9698, Func Offset: 0x238
	// Line 527, Address: 0x1e969c, Func Offset: 0x23c
	// Line 529, Address: 0x1e96a0, Func Offset: 0x240
	// Line 527, Address: 0x1e96a4, Func Offset: 0x244
	// Line 533, Address: 0x1e96a8, Func Offset: 0x248
	// Line 530, Address: 0x1e96ac, Func Offset: 0x24c
	// Line 533, Address: 0x1e96b4, Func Offset: 0x254
	// Line 537, Address: 0x1e96c0, Func Offset: 0x260
	// Line 538, Address: 0x1e96c8, Func Offset: 0x268
	// Line 544, Address: 0x1e96f4, Func Offset: 0x294
	// Line 548, Address: 0x1e970c, Func Offset: 0x2ac
	// Line 549, Address: 0x1e973c, Func Offset: 0x2dc
	// Line 551, Address: 0x1e976c, Func Offset: 0x30c
	// Line 554, Address: 0x1e9778, Func Offset: 0x318
	// Line 555, Address: 0x1e9784, Func Offset: 0x324
	// Line 557, Address: 0x1e9788, Func Offset: 0x328
	// Line 558, Address: 0x1e9790, Func Offset: 0x330
	// Line 559, Address: 0x1e979c, Func Offset: 0x33c
	// Line 561, Address: 0x1e97a0, Func Offset: 0x340
	// Line 562, Address: 0x1e97a4, Func Offset: 0x344
	// Line 561, Address: 0x1e97a8, Func Offset: 0x348
	// Line 563, Address: 0x1e97b0, Func Offset: 0x350
	// Func End, Address: 0x1e97d8, Func Offset: 0x378
}

// 
// Start address: 0x1e97e0
void miscItemExplStringDisp(_anon1* wk)
{
	float pos[4];
	// Line 568, Address: 0x1e97e0, Func Offset: 0
	// Line 573, Address: 0x1e97f0, Func Offset: 0x10
	// Line 575, Address: 0x1e97fc, Func Offset: 0x1c
	// Line 576, Address: 0x1e9808, Func Offset: 0x28
	// Line 577, Address: 0x1e9810, Func Offset: 0x30
	// Line 579, Address: 0x1e9818, Func Offset: 0x38
	// Func End, Address: 0x1e9828, Func Offset: 0x48
}

// 
// Start address: 0x1e9830
void miscItemExplInit()
{
	// Line 586, Address: 0x1e9830, Func Offset: 0
	// Line 587, Address: 0x1e9834, Func Offset: 0x4
	// Line 586, Address: 0x1e9838, Func Offset: 0x8
	// Line 587, Address: 0x1e983c, Func Offset: 0xc
	// Line 588, Address: 0x1e984c, Func Offset: 0x1c
	// Line 590, Address: 0x1e9860, Func Offset: 0x30
	// Line 591, Address: 0x1e986c, Func Offset: 0x3c
	// Line 592, Address: 0x1e9888, Func Offset: 0x58
	// Line 593, Address: 0x1e9894, Func Offset: 0x64
	// Func End, Address: 0x1e98a0, Func Offset: 0x70
}

// 
// Start address: 0x1e98a0
void miscItemExplClear()
{
	// Line 598, Address: 0x1e98a0, Func Offset: 0
	// Func End, Address: 0x1e98a8, Func Offset: 0x8
}

// 
// Start address: 0x1e98b0
int miscItemExplExec_Menu(int is_itembox, int is_force_init)
{
	int rtv;
	_anon1* p;
	unsigned short sel_id;
	GameItem item_kind;
	_sfMenuObjRect rect;
	int type;
	int filter_depth;
	unsigned short pre_sel_id;
	// Line 603, Address: 0x1e98b0, Func Offset: 0
	// Line 604, Address: 0x1e98d0, Func Offset: 0x20
	// Line 603, Address: 0x1e98d4, Func Offset: 0x24
	// Line 605, Address: 0x1e98d8, Func Offset: 0x28
	// Line 603, Address: 0x1e98dc, Func Offset: 0x2c
	// Line 605, Address: 0x1e98e0, Func Offset: 0x30
	// Line 620, Address: 0x1e98e4, Func Offset: 0x34
	// Line 621, Address: 0x1e98ec, Func Offset: 0x3c
	// Line 623, Address: 0x1e98f4, Func Offset: 0x44
	// Line 625, Address: 0x1e9900, Func Offset: 0x50
	// Line 626, Address: 0x1e9904, Func Offset: 0x54
	// Line 627, Address: 0x1e9908, Func Offset: 0x58
	// Line 628, Address: 0x1e9914, Func Offset: 0x64
	// Line 630, Address: 0x1e991c, Func Offset: 0x6c
	// Line 631, Address: 0x1e9920, Func Offset: 0x70
	// Line 630, Address: 0x1e9924, Func Offset: 0x74
	// Line 628, Address: 0x1e9928, Func Offset: 0x78
	// Line 631, Address: 0x1e992c, Func Offset: 0x7c
	// Line 630, Address: 0x1e9934, Func Offset: 0x84
	// Line 631, Address: 0x1e9940, Func Offset: 0x90
	// Line 634, Address: 0x1e9980, Func Offset: 0xd0
	// Line 636, Address: 0x1e9984, Func Offset: 0xd4
	// Line 637, Address: 0x1e9998, Func Offset: 0xe8
	// Line 638, Address: 0x1e999c, Func Offset: 0xec
	// Line 639, Address: 0x1e99a4, Func Offset: 0xf4
	// Line 640, Address: 0x1e99ac, Func Offset: 0xfc
	// Line 643, Address: 0x1e9a0c, Func Offset: 0x15c
	// Line 645, Address: 0x1e9a10, Func Offset: 0x160
	// Line 646, Address: 0x1e9a20, Func Offset: 0x170
	// Line 647, Address: 0x1e9a28, Func Offset: 0x178
	// Line 648, Address: 0x1e9a3c, Func Offset: 0x18c
	// Line 649, Address: 0x1e9a40, Func Offset: 0x190
	// Line 650, Address: 0x1e9a6c, Func Offset: 0x1bc
	// Line 651, Address: 0x1e9acc, Func Offset: 0x21c
	// Line 653, Address: 0x1e9ad4, Func Offset: 0x224
	// Line 654, Address: 0x1e9ad8, Func Offset: 0x228
	// Line 655, Address: 0x1e9ae0, Func Offset: 0x230
	// Line 656, Address: 0x1e9aec, Func Offset: 0x23c
	// Line 657, Address: 0x1e9af4, Func Offset: 0x244
	// Line 658, Address: 0x1e9afc, Func Offset: 0x24c
	// Line 661, Address: 0x1e9b10, Func Offset: 0x260
	// Line 664, Address: 0x1e9b48, Func Offset: 0x298
	// Line 666, Address: 0x1e9b50, Func Offset: 0x2a0
	// Line 669, Address: 0x1e9bb4, Func Offset: 0x304
	// Line 670, Address: 0x1e9bbc, Func Offset: 0x30c
	// Line 672, Address: 0x1e9bc0, Func Offset: 0x310
	// Line 674, Address: 0x1e9bcc, Func Offset: 0x31c
	// Line 676, Address: 0x1e9bd4, Func Offset: 0x324
	// Line 678, Address: 0x1e9bd8, Func Offset: 0x328
	// Line 679, Address: 0x1e9be8, Func Offset: 0x338
	// Line 684, Address: 0x1e9bf0, Func Offset: 0x340
	// Line 685, Address: 0x1e9c10, Func Offset: 0x360
	// Line 686, Address: 0x1e9c20, Func Offset: 0x370
	// Line 689, Address: 0x1e9c24, Func Offset: 0x374
	// Line 687, Address: 0x1e9c28, Func Offset: 0x378
	// Line 688, Address: 0x1e9c2c, Func Offset: 0x37c
	// Line 689, Address: 0x1e9c34, Func Offset: 0x384
	// Line 690, Address: 0x1e9c94, Func Offset: 0x3e4
	// Line 691, Address: 0x1e9c98, Func Offset: 0x3e8
	// Line 694, Address: 0x1e9ca0, Func Offset: 0x3f0
	// Line 691, Address: 0x1e9ca8, Func Offset: 0x3f8
	// Line 694, Address: 0x1e9cb0, Func Offset: 0x400
	// Line 698, Address: 0x1e9ce0, Func Offset: 0x430
	// Line 699, Address: 0x1e9ce8, Func Offset: 0x438
	// Line 701, Address: 0x1e9cec, Func Offset: 0x43c
	// Line 702, Address: 0x1e9cf0, Func Offset: 0x440
	// Line 701, Address: 0x1e9cf4, Func Offset: 0x444
	// Line 705, Address: 0x1e9cf8, Func Offset: 0x448
	// Line 707, Address: 0x1e9d00, Func Offset: 0x450
	// Line 710, Address: 0x1e9d08, Func Offset: 0x458
	// Line 711, Address: 0x1e9d0c, Func Offset: 0x45c
	// Func End, Address: 0x1e9d34, Func Offset: 0x484
}

// 
// Start address: 0x1e9d40
void miscItemExplDisp_Menu()
{
	_anon1* p;
	// Line 717, Address: 0x1e9d40, Func Offset: 0
	// Line 719, Address: 0x1e9d44, Func Offset: 0x4
	// Line 717, Address: 0x1e9d48, Func Offset: 0x8
	// Line 719, Address: 0x1e9d50, Func Offset: 0x10
	// Line 718, Address: 0x1e9d54, Func Offset: 0x14
	// Line 719, Address: 0x1e9d58, Func Offset: 0x18
	// Line 721, Address: 0x1e9d60, Func Offset: 0x20
	// Line 722, Address: 0x1e9d6c, Func Offset: 0x2c
	// Line 723, Address: 0x1e9d74, Func Offset: 0x34
	// Line 725, Address: 0x1e9d80, Func Offset: 0x40
	// Line 727, Address: 0x1e9d88, Func Offset: 0x48
	// Line 729, Address: 0x1e9d90, Func Offset: 0x50
	// Func End, Address: 0x1e9da0, Func Offset: 0x60
}

// 
// Start address: 0x1e9da0
void miscItemExplDisp_BoxOn()
{
	// Line 735, Address: 0x1e9da0, Func Offset: 0
	// Line 734, Address: 0x1e9da4, Func Offset: 0x4
	// Line 735, Address: 0x1e9dac, Func Offset: 0xc
	// Func End, Address: 0x1e9db8, Func Offset: 0x18
}

// 
// Start address: 0x1e9dc0
void miscItemExplDisp_BoxOff()
{
	// Line 742, Address: 0x1e9dc0, Func Offset: 0
	// Line 741, Address: 0x1e9dc4, Func Offset: 0x4
	// Line 742, Address: 0x1e9dc8, Func Offset: 0x8
	// Func End, Address: 0x1e9dd4, Func Offset: 0x14
}

// 
// Start address: 0x1e9de0
void miscItemExplExec_Box(GameItem item_kind, float src_x, float src_y, float src_w, float src_h, int flag)
{
	_anon1* p;
	// Line 748, Address: 0x1e9de0, Func Offset: 0
	// Line 749, Address: 0x1e9df8, Func Offset: 0x18
	// Line 748, Address: 0x1e9dfc, Func Offset: 0x1c
	// Line 749, Address: 0x1e9e08, Func Offset: 0x28
	// Line 748, Address: 0x1e9e0c, Func Offset: 0x2c
	// Line 757, Address: 0x1e9e20, Func Offset: 0x40
	// Line 761, Address: 0x1e9e28, Func Offset: 0x48
	// Line 763, Address: 0x1e9e2c, Func Offset: 0x4c
	// Line 761, Address: 0x1e9e30, Func Offset: 0x50
	// Line 763, Address: 0x1e9e3c, Func Offset: 0x5c
	// Line 764, Address: 0x1e9e44, Func Offset: 0x64
	// Line 765, Address: 0x1e9e50, Func Offset: 0x70
	// Line 767, Address: 0x1e9e54, Func Offset: 0x74
	// Line 765, Address: 0x1e9e58, Func Offset: 0x78
	// Line 767, Address: 0x1e9e5c, Func Offset: 0x7c
	// Line 766, Address: 0x1e9e60, Func Offset: 0x80
	// Line 767, Address: 0x1e9e64, Func Offset: 0x84
	// Line 768, Address: 0x1e9ebc, Func Offset: 0xdc
	// Line 770, Address: 0x1e9ec0, Func Offset: 0xe0
	// Line 773, Address: 0x1e9f08, Func Offset: 0x128
	// Line 774, Address: 0x1e9f14, Func Offset: 0x134
	// Line 775, Address: 0x1e9f18, Func Offset: 0x138
	// Line 774, Address: 0x1e9f1c, Func Offset: 0x13c
	// Line 775, Address: 0x1e9f20, Func Offset: 0x140
	// Line 778, Address: 0x1e9f7c, Func Offset: 0x19c
	// Line 779, Address: 0x1e9f80, Func Offset: 0x1a0
	// Line 780, Address: 0x1e9f9c, Func Offset: 0x1bc
	// Line 783, Address: 0x1e9ffc, Func Offset: 0x21c
	// Line 784, Address: 0x1ea000, Func Offset: 0x220
	// Line 785, Address: 0x1ea008, Func Offset: 0x228
	// Line 786, Address: 0x1ea04c, Func Offset: 0x26c
	// Line 788, Address: 0x1ea050, Func Offset: 0x270
	// Line 790, Address: 0x1ea058, Func Offset: 0x278
	// Line 793, Address: 0x1ea0bc, Func Offset: 0x2dc
	// Line 795, Address: 0x1ea0c8, Func Offset: 0x2e8
	// Line 797, Address: 0x1ea0d4, Func Offset: 0x2f4
	// Line 799, Address: 0x1ea0dc, Func Offset: 0x2fc
	// Line 801, Address: 0x1ea0e0, Func Offset: 0x300
	// Line 802, Address: 0x1ea0e8, Func Offset: 0x308
	// Line 803, Address: 0x1ea0f8, Func Offset: 0x318
	// Line 807, Address: 0x1ea100, Func Offset: 0x320
	// Line 808, Address: 0x1ea114, Func Offset: 0x334
	// Func End, Address: 0x1ea140, Func Offset: 0x360
}

// 
// Start address: 0x1ea140
void miscItemExplDisp_Box()
{
	_anon1* p;
	// Line 813, Address: 0x1ea140, Func Offset: 0
	// Line 815, Address: 0x1ea144, Func Offset: 0x4
	// Line 813, Address: 0x1ea148, Func Offset: 0x8
	// Line 815, Address: 0x1ea150, Func Offset: 0x10
	// Line 814, Address: 0x1ea154, Func Offset: 0x14
	// Line 815, Address: 0x1ea158, Func Offset: 0x18
	// Line 817, Address: 0x1ea160, Func Offset: 0x20
	// Line 818, Address: 0x1ea16c, Func Offset: 0x2c
	// Line 819, Address: 0x1ea174, Func Offset: 0x34
	// Line 821, Address: 0x1ea180, Func Offset: 0x40
	// Line 823, Address: 0x1ea188, Func Offset: 0x48
	// Line 825, Address: 0x1ea190, Func Offset: 0x50
	// Func End, Address: 0x1ea1a0, Func Offset: 0x60
}

