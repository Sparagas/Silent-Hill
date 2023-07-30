typedef struct _anon0;
typedef union _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct sfObj;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef enum GameItem : unsigned char;
typedef struct _anon9;
typedef struct _anon10;
typedef struct _anon11;
typedef enum _enum : unsigned char;
typedef union _anon12;
typedef struct _anon13;
typedef struct _anon14;
typedef struct EventFlag;
typedef enum PlayerExtStatus : unsigned char;

typedef void(*type_6)(sfObj*);
typedef void(*type_13)(sfObj*);

typedef unsigned char type_0[4];
typedef float type_1[4];
typedef float type_2[4];
typedef unsigned char type_3[2];
typedef _anon2 type_4[2];
typedef _anon12 type_5[256];
typedef unsigned int type_7[4];
typedef unsigned char type_8[320];
typedef short type_9[2];
typedef unsigned short type_10[2];
typedef char type_11[4];
typedef unsigned char type_12[4];
typedef float type_14[1];
typedef int type_15[1];

struct _anon0
{
	_anon14 gauge;
	float cx;
	float cy;
	float w;
	float h;
	float scale_x;
	float scale_y;
	int disp_flag;
	unsigned int eff_flag;
	int hide_timer;
	int is_hidden;
	int step;
	int sub_step;
	int cnt;
	_anon3 bar;
	_anon5 frame;
	_anon8 vib;
	_anon9 blink;
	_anon4 charge;
};

union _anon1
{
	unsigned int abgr;
	unsigned char rgba[4];
};

struct _anon2
{
	float pos[4];
	float rot[4];
	float move_rot[4];
	float eye_pos[4];
	float target_pos[4];
	float weapon_pos[4];
	float eye_dir[4];
	float floor_normal[4];
	sfObj* target_obj;
	float dir;
	float move_dir;
	float move_speed;
	float moved_speed[4];
	float floor_height;
	float hp_rate;
	float weapon_move[4];
	float weapon_speed;
	PlayerExtStatus status;
	GameItem weapon_kind;
};

struct _anon3
{
	int flag;
	_anon13 img;
	_anon13 diff_img;
};

struct _anon4
{
	_anon14 gauge;
	int disp_flag;
	int cnt;
	int blink_cnt;
	unsigned int col;
};

struct sfObj
{
	_anon12 fwork[256];
	_anon12* work;
	void(*func)(sfObj*);
	_anon12* work_pt0;
	_anon12* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon12* sys_work;
	_anon12* scene_work;
	_anon12* event_work;
	_anon12* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct _anon5
{
	_anon13 img;
};

struct _anon6
{
	_anon7* tex;
	unsigned char tcc;
	unsigned char tfx;
	unsigned char pad[2];
};

struct _anon7
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

struct _anon8
{
	int flag;
	int dx;
	int dy;
	int cnt;
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

struct _anon9
{
	int cnt;
};

struct _anon10
{
	unsigned int cbp;
	unsigned int ofs;
};

struct _anon11
{
	unsigned long reg_alpha;
	unsigned long reg_prim;
	unsigned long reg_test;
	_anon6 tex_data;
	_anon10 clut_data;
	unsigned short ot;
	unsigned short z;
};

enum _enum : unsigned char
{
	SF_GAUGE_NORMAL,
	SF_GAUGE_MINUS,
	SF_GAUGE_PLUS
};

union _anon12
{
	int si;
	unsigned int ui;
	void* pt;
	short ss[2];
	unsigned short us[2];
	char sc[4];
	unsigned char uc[4];
	float f;
	float fv[1];
	int iv[1];
};

struct _anon13
{
	_anon11 base;
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

struct _anon14
{
	float max_val;
	float cur_val;
	float prev_val;
	float d_val;
	_enum stat;
	int max_cnt;
	int cnt;
};

struct EventFlag
{
	unsigned char flag[320];
};

enum PlayerExtStatus : unsigned char
{
	PLAYER_STAT_ABSENT,
	PLAYER_STAT_MOVE,
	PLAYER_STAT_SILENT,
	PLAYER_STAT_READY,
	PLAYER_STAT_LOCK,
	PLAYER_STAT_ATTACK,
	PLAYER_STAT_DAMAGE,
	PLAYER_STAT_EVENT,
	PLAYER_STAT_SWORD,
	PLAYER_STAT_GODMODE,
	PLAYER_STAT_DEAD
};

_anon0 GaugeHenry;
float base_alpha_ratio;
_anon2 player_ext_info[2];
unsigned long* sg_packet_cur;
float sg_vector_unit_z[4];
EventFlag event_flag;

int miscGaugeHideModeGet();
void miscGaugeSetAlphaRatio(float ratio);
unsigned int BaseAlphaMul(unsigned int src_col);
void miscGaugeReflectAlpha(_anon0* work);
void miscGaugeDispOn();
void miscGaugeDispOff();
void miscGaugeHideModeForceOn();
void miscGaugeBarConstruct(_anon0* wk, _anon3* bar);
void miscGaugeFrameConstruct(_anon5* frame);
void miscGaugeChargeConstruct(_anon4* charge, float val);
void miscGaugeVibConstruct(_anon8* vib);
void miscGaugeConstruct(float max_hp, float max_charge);
float get_ratio(int cnt, int max_cnt);
void miscGaugeValSet(float val);
void miscGaugeChargeValSet(float val);
int IsPlayerAlive();
int miscGaugeHideCheck(_anon0* work);
void miscGaugeBlinkUpdate(_anon0* work);
void miscGaugeChargeColor(_anon4* charge);
void miscGaugeVibUpdate(_anon0* work);
void miscGaugeBarUpdate(_anon0* work);
void miscGaugeFrameUpdate(_anon0* work);
void miscGaugeChargeUpdate(_anon0* work);
int miscGaugeUpdate_Hide(_anon0* work);
void miscGaugeUpdate(_anon0* work);
void DrawCircle(float cx, float cy, float r, int num, unsigned int col);
void miscGaugeExec();
void miscGaugeDraw();

// 
// Start address: 0x1d7a90
int miscGaugeHideModeGet()
{
	// Line 324, Address: 0x1d7a90, Func Offset: 0
	// Func End, Address: 0x1d7ab0, Func Offset: 0x20
}

// 
// Start address: 0x1d7ab0
void miscGaugeSetAlphaRatio(float ratio)
{
	// Line 364, Address: 0x1d7ab0, Func Offset: 0
	// Line 365, Address: 0x1d7ac8, Func Offset: 0x18
	// Line 366, Address: 0x1d7ae8, Func Offset: 0x38
	// Line 367, Address: 0x1d7aec, Func Offset: 0x3c
	// Func End, Address: 0x1d7af4, Func Offset: 0x44
}

// 
// Start address: 0x1d7b00
unsigned int BaseAlphaMul(unsigned int src_col)
{
	unsigned char s_a;
	float tmp;
	// Line 371, Address: 0x1d7b00, Func Offset: 0
	// Line 372, Address: 0x1d7b04, Func Offset: 0x4
	// Line 371, Address: 0x1d7b08, Func Offset: 0x8
	// Line 375, Address: 0x1d7b0c, Func Offset: 0xc
	// Line 372, Address: 0x1d7b10, Func Offset: 0x10
	// Line 375, Address: 0x1d7b14, Func Offset: 0x14
	// Line 372, Address: 0x1d7b18, Func Offset: 0x18
	// Line 374, Address: 0x1d7b24, Func Offset: 0x24
	// Line 375, Address: 0x1d7b3c, Func Offset: 0x3c
	// Line 376, Address: 0x1d7b44, Func Offset: 0x44
	// Func End, Address: 0x1d7b4c, Func Offset: 0x4c
}

// 
// Start address: 0x1d7b50
void miscGaugeReflectAlpha(_anon0* work)
{
	unsigned int col;
	// Line 379, Address: 0x1d7b50, Func Offset: 0
	// Line 383, Address: 0x1d7b54, Func Offset: 0x4
	// Line 379, Address: 0x1d7b58, Func Offset: 0x8
	// Line 383, Address: 0x1d7b64, Func Offset: 0x14
	// Line 384, Address: 0x1d7b6c, Func Offset: 0x1c
	// Line 386, Address: 0x1d7b84, Func Offset: 0x34
	// Line 387, Address: 0x1d7b90, Func Offset: 0x40
	// Line 389, Address: 0x1d7ba8, Func Offset: 0x58
	// Line 390, Address: 0x1d7bb4, Func Offset: 0x64
	// Line 396, Address: 0x1d7bcc, Func Offset: 0x7c
	// Func End, Address: 0x1d7bdc, Func Offset: 0x8c
}

// 
// Start address: 0x1d7be0
void miscGaugeDispOn()
{
	// Line 404, Address: 0x1d7be0, Func Offset: 0
	// Line 405, Address: 0x1d7be8, Func Offset: 0x8
	// Func End, Address: 0x1d7bf0, Func Offset: 0x10
}

// 
// Start address: 0x1d7bf0
void miscGaugeDispOff()
{
	_anon0* work;
	// Line 409, Address: 0x1d7bf0, Func Offset: 0
	// Line 412, Address: 0x1d7bf4, Func Offset: 0x4
	// Line 409, Address: 0x1d7bf8, Func Offset: 0x8
	// Line 410, Address: 0x1d7c04, Func Offset: 0x14
	// Line 412, Address: 0x1d7c08, Func Offset: 0x18
	// Line 413, Address: 0x1d7c0c, Func Offset: 0x1c
	// Line 415, Address: 0x1d7c14, Func Offset: 0x24
	// Line 417, Address: 0x1d7c24, Func Offset: 0x34
	// Line 418, Address: 0x1d7c30, Func Offset: 0x40
	// Line 419, Address: 0x1d7c44, Func Offset: 0x54
	// Line 418, Address: 0x1d7c48, Func Offset: 0x58
	// Line 420, Address: 0x1d7c50, Func Offset: 0x60
	// Line 418, Address: 0x1d7c54, Func Offset: 0x64
	// Line 421, Address: 0x1d7c58, Func Offset: 0x68
	// Line 418, Address: 0x1d7c5c, Func Offset: 0x6c
	// Line 419, Address: 0x1d7c60, Func Offset: 0x70
	// Line 420, Address: 0x1d7c64, Func Offset: 0x74
	// Line 421, Address: 0x1d7c68, Func Offset: 0x78
	// Line 422, Address: 0x1d7c70, Func Offset: 0x80
	// Line 424, Address: 0x1d7c78, Func Offset: 0x88
	// Func End, Address: 0x1d7c8c, Func Offset: 0x9c
}

// 
// Start address: 0x1d7c90
void miscGaugeHideModeForceOn()
{
	// Line 442, Address: 0x1d7c90, Func Offset: 0
	// Line 444, Address: 0x1d7c98, Func Offset: 0x8
	// Line 445, Address: 0x1d7ca8, Func Offset: 0x18
	// Line 444, Address: 0x1d7cb4, Func Offset: 0x24
	// Line 446, Address: 0x1d7ccc, Func Offset: 0x3c
	// Func End, Address: 0x1d7cdc, Func Offset: 0x4c
}

// 
// Start address: 0x1d7ce0
void miscGaugeBarConstruct(_anon0* wk, _anon3* bar)
{
	// Line 511, Address: 0x1d7ce0, Func Offset: 0
	// Line 512, Address: 0x1d7cf8, Func Offset: 0x18
	// Line 515, Address: 0x1d7cfc, Func Offset: 0x1c
	// Line 516, Address: 0x1d7d08, Func Offset: 0x28
	// Line 517, Address: 0x1d7d10, Func Offset: 0x30
	// Line 520, Address: 0x1d7d38, Func Offset: 0x58
	// Line 521, Address: 0x1d7d54, Func Offset: 0x74
	// Line 522, Address: 0x1d7d64, Func Offset: 0x84
	// Line 523, Address: 0x1d7d80, Func Offset: 0xa0
	// Line 524, Address: 0x1d7d90, Func Offset: 0xb0
	// Line 525, Address: 0x1d7da8, Func Offset: 0xc8
	// Line 528, Address: 0x1d7db8, Func Offset: 0xd8
	// Line 529, Address: 0x1d7dc4, Func Offset: 0xe4
	// Line 530, Address: 0x1d7dcc, Func Offset: 0xec
	// Line 533, Address: 0x1d7df4, Func Offset: 0x114
	// Line 534, Address: 0x1d7e10, Func Offset: 0x130
	// Line 535, Address: 0x1d7e20, Func Offset: 0x140
	// Line 536, Address: 0x1d7e3c, Func Offset: 0x15c
	// Line 537, Address: 0x1d7e4c, Func Offset: 0x16c
	// Line 542, Address: 0x1d7e64, Func Offset: 0x184
	// Line 540, Address: 0x1d7e68, Func Offset: 0x188
	// Line 542, Address: 0x1d7e6c, Func Offset: 0x18c
	// Line 543, Address: 0x1d7e7c, Func Offset: 0x19c
	// Func End, Address: 0x1d7e90, Func Offset: 0x1b0
}

// 
// Start address: 0x1d7e90
void miscGaugeFrameConstruct(_anon5* frame)
{
	// Line 547, Address: 0x1d7e90, Func Offset: 0
	// Line 548, Address: 0x1d7ea0, Func Offset: 0x10
	// Line 549, Address: 0x1d7eac, Func Offset: 0x1c
	// Line 550, Address: 0x1d7eb4, Func Offset: 0x24
	// Line 552, Address: 0x1d7ed8, Func Offset: 0x48
	// Line 553, Address: 0x1d7ef4, Func Offset: 0x64
	// Line 554, Address: 0x1d7f04, Func Offset: 0x74
	// Line 555, Address: 0x1d7f20, Func Offset: 0x90
	// Line 556, Address: 0x1d7f30, Func Offset: 0xa0
	// Line 557, Address: 0x1d7f48, Func Offset: 0xb8
	// Line 558, Address: 0x1d7f5c, Func Offset: 0xcc
	// Func End, Address: 0x1d7f6c, Func Offset: 0xdc
}

// 
// Start address: 0x1d7f70
void miscGaugeChargeConstruct(_anon4* charge, float val)
{
	// Line 562, Address: 0x1d7f70, Func Offset: 0
	// Line 563, Address: 0x1d7f74, Func Offset: 0x4
	// Line 562, Address: 0x1d7f78, Func Offset: 0x8
	// Line 563, Address: 0x1d7f88, Func Offset: 0x18
	// Line 565, Address: 0x1d7f98, Func Offset: 0x28
	// Line 566, Address: 0x1d7fa8, Func Offset: 0x38
	// Line 569, Address: 0x1d7fb4, Func Offset: 0x44
	// Line 568, Address: 0x1d7fb8, Func Offset: 0x48
	// Line 569, Address: 0x1d7fbc, Func Offset: 0x4c
	// Line 570, Address: 0x1d7fc4, Func Offset: 0x54
	// Func End, Address: 0x1d7fd8, Func Offset: 0x68
}

// 
// Start address: 0x1d7fe0
void miscGaugeVibConstruct(_anon8* vib)
{
	// Line 575, Address: 0x1d7fe0, Func Offset: 0
	// Line 576, Address: 0x1d7fe4, Func Offset: 0x4
	// Line 577, Address: 0x1d7fe8, Func Offset: 0x8
	// Line 579, Address: 0x1d7fec, Func Offset: 0xc
	// Func End, Address: 0x1d7ff4, Func Offset: 0x14
}

// 
// Start address: 0x1d8000
void miscGaugeConstruct(float max_hp, float max_charge)
{
	// Line 583, Address: 0x1d8000, Func Offset: 0
	// Line 586, Address: 0x1d8004, Func Offset: 0x4
	// Line 583, Address: 0x1d8008, Func Offset: 0x8
	// Line 586, Address: 0x1d800c, Func Offset: 0xc
	// Line 583, Address: 0x1d8010, Func Offset: 0x10
	// Line 586, Address: 0x1d8014, Func Offset: 0x14
	// Line 583, Address: 0x1d8018, Func Offset: 0x18
	// Line 586, Address: 0x1d801c, Func Offset: 0x1c
	// Line 588, Address: 0x1d802c, Func Offset: 0x2c
	// Line 589, Address: 0x1d8038, Func Offset: 0x38
	// Line 590, Address: 0x1d803c, Func Offset: 0x3c
	// Line 589, Address: 0x1d8048, Func Offset: 0x48
	// Line 591, Address: 0x1d8050, Func Offset: 0x50
	// Line 593, Address: 0x1d8054, Func Offset: 0x54
	// Line 595, Address: 0x1d805c, Func Offset: 0x5c
	// Line 596, Address: 0x1d8070, Func Offset: 0x70
	// Line 597, Address: 0x1d8084, Func Offset: 0x84
	// Line 598, Address: 0x1d8098, Func Offset: 0x98
	// Line 599, Address: 0x1d80b0, Func Offset: 0xb0
	// Line 602, Address: 0x1d80bc, Func Offset: 0xbc
	// Line 603, Address: 0x1d80d0, Func Offset: 0xd0
	// Func End, Address: 0x1d80e4, Func Offset: 0xe4
}

// 
// Start address: 0x1d80f0
float get_ratio(int cnt, int max_cnt)
{
	float t;
	// Line 627, Address: 0x1d80f0, Func Offset: 0
	// Line 629, Address: 0x1d80f4, Func Offset: 0x4
	// Line 630, Address: 0x1d8108, Func Offset: 0x18
	// Line 631, Address: 0x1d8120, Func Offset: 0x30
	// Line 632, Address: 0x1d8124, Func Offset: 0x34
	// Line 631, Address: 0x1d8128, Func Offset: 0x38
	// Line 632, Address: 0x1d812c, Func Offset: 0x3c
	// Line 631, Address: 0x1d8130, Func Offset: 0x40
	// Line 632, Address: 0x1d813c, Func Offset: 0x4c
	// Line 633, Address: 0x1d8168, Func Offset: 0x78
	// Func End, Address: 0x1d8170, Func Offset: 0x80
}

// 
// Start address: 0x1d8170
void miscGaugeValSet(float val)
{
	_anon0* p_gw;
	float prev_val;
	// Line 637, Address: 0x1d8170, Func Offset: 0
	// Line 638, Address: 0x1d817c, Func Offset: 0xc
	// Line 637, Address: 0x1d8180, Func Offset: 0x10
	// Line 638, Address: 0x1d8184, Func Offset: 0x14
	// Line 639, Address: 0x1d818c, Func Offset: 0x1c
	// Line 642, Address: 0x1d819c, Func Offset: 0x2c
	// Line 645, Address: 0x1d81a8, Func Offset: 0x38
	// Line 647, Address: 0x1d81c8, Func Offset: 0x58
	// Line 648, Address: 0x1d81cc, Func Offset: 0x5c
	// Line 650, Address: 0x1d81d0, Func Offset: 0x60
	// Func End, Address: 0x1d81e8, Func Offset: 0x78
}

// 
// Start address: 0x1d81f0
void miscGaugeChargeValSet(float val)
{
	// Line 657, Address: 0x1d81f0, Func Offset: 0
	// Func End, Address: 0x1d81fc, Func Offset: 0xc
}

// 
// Start address: 0x1d8200
int IsPlayerAlive()
{
	// Line 683, Address: 0x1d8200, Func Offset: 0
	// Line 684, Address: 0x1d820c, Func Offset: 0xc
	// Func End, Address: 0x1d8214, Func Offset: 0x14
}

// 
// Start address: 0x1d8220
int miscGaugeHideCheck(_anon0* work)
{
	int rtv;
	// Line 688, Address: 0x1d8220, Func Offset: 0
	// Line 689, Address: 0x1d8230, Func Offset: 0x10
	// Line 691, Address: 0x1d8234, Func Offset: 0x14
	// Line 692, Address: 0x1d8248, Func Offset: 0x28
	// Line 693, Address: 0x1d8258, Func Offset: 0x38
	// Line 695, Address: 0x1d8268, Func Offset: 0x48
	// Line 697, Address: 0x1d826c, Func Offset: 0x4c
	// Line 699, Address: 0x1d8278, Func Offset: 0x58
	// Line 701, Address: 0x1d8284, Func Offset: 0x64
	// Line 703, Address: 0x1d8288, Func Offset: 0x68
	// Line 704, Address: 0x1d82a4, Func Offset: 0x84
	// Line 708, Address: 0x1d82a8, Func Offset: 0x88
	// Line 709, Address: 0x1d82ac, Func Offset: 0x8c
	// Func End, Address: 0x1d82c0, Func Offset: 0xa0
}

// 
// Start address: 0x1d82c0
void miscGaugeBlinkUpdate(_anon0* work)
{
	float add_v;
	float val_rate;
	float v;
	_anon1 col;
	int i;
	float ratio;
	unsigned int col_src;
	unsigned int col_dst;
	int full;
	int pinch;
	float c;
	float c;
	// Line 713, Address: 0x1d82c0, Func Offset: 0
	// Line 714, Address: 0x1d82dc, Func Offset: 0x1c
	// Line 716, Address: 0x1d82ec, Func Offset: 0x2c
	// Line 717, Address: 0x1d82f0, Func Offset: 0x30
	// Line 722, Address: 0x1d82f8, Func Offset: 0x38
	// Line 725, Address: 0x1d82fc, Func Offset: 0x3c
	// Line 722, Address: 0x1d8300, Func Offset: 0x40
	// Line 723, Address: 0x1d8304, Func Offset: 0x44
	// Line 717, Address: 0x1d8308, Func Offset: 0x48
	// Line 725, Address: 0x1d830c, Func Offset: 0x4c
	// Line 727, Address: 0x1d831c, Func Offset: 0x5c
	// Line 728, Address: 0x1d8338, Func Offset: 0x78
	// Line 729, Address: 0x1d836c, Func Offset: 0xac
	// Line 730, Address: 0x1d8374, Func Offset: 0xb4
	// Line 731, Address: 0x1d8380, Func Offset: 0xc0
	// Line 736, Address: 0x1d839c, Func Offset: 0xdc
	// Line 733, Address: 0x1d83a0, Func Offset: 0xe0
	// Line 734, Address: 0x1d83a8, Func Offset: 0xe8
	// Line 736, Address: 0x1d83ac, Func Offset: 0xec
	// Line 737, Address: 0x1d83c4, Func Offset: 0x104
	// Line 738, Address: 0x1d83f8, Func Offset: 0x138
	// Line 741, Address: 0x1d83fc, Func Offset: 0x13c
	// Line 738, Address: 0x1d8400, Func Offset: 0x140
	// Line 742, Address: 0x1d8404, Func Offset: 0x144
	// Line 743, Address: 0x1d8408, Func Offset: 0x148
	// Line 744, Address: 0x1d8410, Func Offset: 0x150
	// Line 750, Address: 0x1d8428, Func Offset: 0x168
	// Line 747, Address: 0x1d8430, Func Offset: 0x170
	// Line 746, Address: 0x1d8434, Func Offset: 0x174
	// Line 747, Address: 0x1d8438, Func Offset: 0x178
	// Line 746, Address: 0x1d843c, Func Offset: 0x17c
	// Line 751, Address: 0x1d8440, Func Offset: 0x180
	// Line 750, Address: 0x1d8450, Func Offset: 0x190
	// Line 751, Address: 0x1d8454, Func Offset: 0x194
	// Line 750, Address: 0x1d845c, Func Offset: 0x19c
	// Line 751, Address: 0x1d8464, Func Offset: 0x1a4
	// Line 752, Address: 0x1d8484, Func Offset: 0x1c4
	// Line 756, Address: 0x1d8494, Func Offset: 0x1d4
	// Line 759, Address: 0x1d8498, Func Offset: 0x1d8
	// Line 760, Address: 0x1d84b4, Func Offset: 0x1f4
	// Line 764, Address: 0x1d84b8, Func Offset: 0x1f8
	// Line 763, Address: 0x1d84c0, Func Offset: 0x200
	// Line 764, Address: 0x1d84c4, Func Offset: 0x204
	// Line 765, Address: 0x1d84d0, Func Offset: 0x210
	// Line 766, Address: 0x1d84d8, Func Offset: 0x218
	// Line 765, Address: 0x1d84dc, Func Offset: 0x21c
	// Line 766, Address: 0x1d84e0, Func Offset: 0x220
	// Line 767, Address: 0x1d84e4, Func Offset: 0x224
	// Line 769, Address: 0x1d8504, Func Offset: 0x244
	// Line 771, Address: 0x1d850c, Func Offset: 0x24c
	// Line 772, Address: 0x1d8518, Func Offset: 0x258
	// Line 771, Address: 0x1d851c, Func Offset: 0x25c
	// Line 772, Address: 0x1d8530, Func Offset: 0x270
	// Line 775, Address: 0x1d853c, Func Offset: 0x27c
	// Line 776, Address: 0x1d8550, Func Offset: 0x290
	// Line 778, Address: 0x1d856c, Func Offset: 0x2ac
	// Line 779, Address: 0x1d8574, Func Offset: 0x2b4
	// Line 780, Address: 0x1d857c, Func Offset: 0x2bc
	// Line 779, Address: 0x1d8580, Func Offset: 0x2c0
	// Line 780, Address: 0x1d8590, Func Offset: 0x2d0
	// Line 782, Address: 0x1d859c, Func Offset: 0x2dc
	// Line 784, Address: 0x1d85d4, Func Offset: 0x314
	// Line 786, Address: 0x1d85e0, Func Offset: 0x320
	// Func End, Address: 0x1d8600, Func Offset: 0x340
}

// 
// Start address: 0x1d8600
void miscGaugeChargeColor(_anon4* charge)
{
	int cycle;
	float v;
	_anon1 col;
	int i;
	float ratio;
	float tmp_alpha;
	float c;
	float rate;
	float org;
	float c;
	// Line 790, Address: 0x1d8600, Func Offset: 0
	// Line 792, Address: 0x1d8614, Func Offset: 0x14
	// Line 798, Address: 0x1d8620, Func Offset: 0x20
	// Line 792, Address: 0x1d8624, Func Offset: 0x24
	// Line 798, Address: 0x1d8630, Func Offset: 0x30
	// Line 803, Address: 0x1d863c, Func Offset: 0x3c
	// Line 798, Address: 0x1d8640, Func Offset: 0x40
	// Line 801, Address: 0x1d864c, Func Offset: 0x4c
	// Line 792, Address: 0x1d8658, Func Offset: 0x58
	// Line 798, Address: 0x1d865c, Func Offset: 0x5c
	// Line 792, Address: 0x1d8660, Func Offset: 0x60
	// Line 803, Address: 0x1d8664, Func Offset: 0x64
	// Line 804, Address: 0x1d8674, Func Offset: 0x74
	// Line 805, Address: 0x1d8678, Func Offset: 0x78
	// Line 804, Address: 0x1d8690, Func Offset: 0x90
	// Line 805, Address: 0x1d86a4, Func Offset: 0xa4
	// Line 807, Address: 0x1d86d4, Func Offset: 0xd4
	// Line 808, Address: 0x1d86e8, Func Offset: 0xe8
	// Line 810, Address: 0x1d8700, Func Offset: 0x100
	// Line 811, Address: 0x1d8708, Func Offset: 0x108
	// Line 812, Address: 0x1d8710, Func Offset: 0x110
	// Line 811, Address: 0x1d8714, Func Offset: 0x114
	// Line 812, Address: 0x1d8724, Func Offset: 0x124
	// Line 813, Address: 0x1d8734, Func Offset: 0x134
	// Line 814, Address: 0x1d874c, Func Offset: 0x14c
	// Line 815, Address: 0x1d8760, Func Offset: 0x160
	// Line 816, Address: 0x1d8768, Func Offset: 0x168
	// Line 817, Address: 0x1d8770, Func Offset: 0x170
	// Line 819, Address: 0x1d8778, Func Offset: 0x178
	// Line 821, Address: 0x1d8780, Func Offset: 0x180
	// Line 822, Address: 0x1d87a0, Func Offset: 0x1a0
	// Line 823, Address: 0x1d87b8, Func Offset: 0x1b8
	// Line 825, Address: 0x1d87c8, Func Offset: 0x1c8
	// Line 826, Address: 0x1d87d0, Func Offset: 0x1d0
	// Line 827, Address: 0x1d87d8, Func Offset: 0x1d8
	// Line 826, Address: 0x1d87dc, Func Offset: 0x1dc
	// Line 827, Address: 0x1d87ec, Func Offset: 0x1ec
	// Line 828, Address: 0x1d87fc, Func Offset: 0x1fc
	// Line 829, Address: 0x1d8814, Func Offset: 0x214
	// Line 830, Address: 0x1d8828, Func Offset: 0x228
	// Line 832, Address: 0x1d8830, Func Offset: 0x230
	// Func End, Address: 0x1d8848, Func Offset: 0x248
}

// 
// Start address: 0x1d8850
void miscGaugeVibUpdate(_anon0* work)
{
	// Line 837, Address: 0x1d8850, Func Offset: 0
	// Line 838, Address: 0x1d885c, Func Offset: 0xc
	// Line 839, Address: 0x1d8880, Func Offset: 0x30
	// Line 840, Address: 0x1d8884, Func Offset: 0x34
	// Line 841, Address: 0x1d8888, Func Offset: 0x38
	// Line 842, Address: 0x1d8894, Func Offset: 0x44
	// Line 843, Address: 0x1d88a8, Func Offset: 0x58
	// Line 844, Address: 0x1d88ac, Func Offset: 0x5c
	// Line 845, Address: 0x1d88b0, Func Offset: 0x60
	// Line 847, Address: 0x1d88b4, Func Offset: 0x64
	// Line 849, Address: 0x1d88c0, Func Offset: 0x70
	// Line 850, Address: 0x1d88e0, Func Offset: 0x90
	// Line 852, Address: 0x1d8904, Func Offset: 0xb4
	// Line 853, Address: 0x1d8908, Func Offset: 0xb8
	// Func End, Address: 0x1d8918, Func Offset: 0xc8
}

// 
// Start address: 0x1d8920
void miscGaugeBarUpdate(_anon0* work)
{
	float d_val;
	float x;
	float y;
	float rate;
	float bar_w;
	_enum stat;
	// Line 857, Address: 0x1d8920, Func Offset: 0
	// Line 859, Address: 0x1d8924, Func Offset: 0x4
	// Line 857, Address: 0x1d8928, Func Offset: 0x8
	// Line 859, Address: 0x1d892c, Func Offset: 0xc
	// Line 857, Address: 0x1d8930, Func Offset: 0x10
	// Line 860, Address: 0x1d8938, Func Offset: 0x18
	// Line 857, Address: 0x1d893c, Func Offset: 0x1c
	// Line 859, Address: 0x1d894c, Func Offset: 0x2c
	// Line 860, Address: 0x1d8950, Func Offset: 0x30
	// Line 859, Address: 0x1d8958, Func Offset: 0x38
	// Line 860, Address: 0x1d895c, Func Offset: 0x3c
	// Line 859, Address: 0x1d8960, Func Offset: 0x40
	// Line 861, Address: 0x1d8964, Func Offset: 0x44
	// Line 864, Address: 0x1d8970, Func Offset: 0x50
	// Line 867, Address: 0x1d897c, Func Offset: 0x5c
	// Line 866, Address: 0x1d8980, Func Offset: 0x60
	// Line 867, Address: 0x1d8988, Func Offset: 0x68
	// Line 866, Address: 0x1d898c, Func Offset: 0x6c
	// Line 867, Address: 0x1d8990, Func Offset: 0x70
	// Line 869, Address: 0x1d89a4, Func Offset: 0x84
	// Line 870, Address: 0x1d89c4, Func Offset: 0xa4
	// Line 871, Address: 0x1d89c8, Func Offset: 0xa8
	// Line 873, Address: 0x1d89d4, Func Offset: 0xb4
	// Line 871, Address: 0x1d89d8, Func Offset: 0xb8
	// Line 873, Address: 0x1d89dc, Func Offset: 0xbc
	// Line 871, Address: 0x1d89e4, Func Offset: 0xc4
	// Line 873, Address: 0x1d89e8, Func Offset: 0xc8
	// Line 875, Address: 0x1d89f4, Func Offset: 0xd4
	// Line 876, Address: 0x1d8a3c, Func Offset: 0x11c
	// Line 877, Address: 0x1d8a44, Func Offset: 0x124
	// Line 878, Address: 0x1d8a48, Func Offset: 0x128
	// Line 879, Address: 0x1d8a54, Func Offset: 0x134
	// Line 878, Address: 0x1d8a58, Func Offset: 0x138
	// Line 879, Address: 0x1d8a5c, Func Offset: 0x13c
	// Line 878, Address: 0x1d8a64, Func Offset: 0x144
	// Line 879, Address: 0x1d8a68, Func Offset: 0x148
	// Line 881, Address: 0x1d8a78, Func Offset: 0x158
	// Line 883, Address: 0x1d8aa4, Func Offset: 0x184
	// Line 884, Address: 0x1d8aa8, Func Offset: 0x188
	// Func End, Address: 0x1d8ac8, Func Offset: 0x1a8
}

// 
// Start address: 0x1d8ad0
void miscGaugeFrameUpdate(_anon0* work)
{
	_anon7* tex;
	unsigned int cbp;
	// Line 899, Address: 0x1d8ad0, Func Offset: 0
	// Line 900, Address: 0x1d8ad4, Func Offset: 0x4
	// Line 899, Address: 0x1d8ad8, Func Offset: 0x8
	// Line 900, Address: 0x1d8adc, Func Offset: 0xc
	// Line 899, Address: 0x1d8ae0, Func Offset: 0x10
	// Line 900, Address: 0x1d8aec, Func Offset: 0x1c
	// Line 901, Address: 0x1d8afc, Func Offset: 0x2c
	// Line 903, Address: 0x1d8b0c, Func Offset: 0x3c
	// Line 901, Address: 0x1d8b10, Func Offset: 0x40
	// Line 903, Address: 0x1d8b14, Func Offset: 0x44
	// Line 905, Address: 0x1d8b38, Func Offset: 0x68
	// Line 906, Address: 0x1d8b50, Func Offset: 0x80
	// Line 907, Address: 0x1d8b64, Func Offset: 0x94
	// Func End, Address: 0x1d8b7c, Func Offset: 0xac
}

// 
// Start address: 0x1d8b80
void miscGaugeChargeUpdate(_anon0* work)
{
	_anon4* charge;
	// Line 911, Address: 0x1d8b80, Func Offset: 0
	// Line 912, Address: 0x1d8b8c, Func Offset: 0xc
	// Line 914, Address: 0x1d8b90, Func Offset: 0x10
	// Line 917, Address: 0x1d8b98, Func Offset: 0x18
	// Line 918, Address: 0x1d8bb8, Func Offset: 0x38
	// Line 919, Address: 0x1d8bbc, Func Offset: 0x3c
	// Line 921, Address: 0x1d8bc0, Func Offset: 0x40
	// Line 922, Address: 0x1d8bc8, Func Offset: 0x48
	// Func End, Address: 0x1d8bd8, Func Offset: 0x58
}

// 
// Start address: 0x1d8be0
int miscGaugeUpdate_Hide(_anon0* work)
{
	int rtv;
	float alpha_ratio;
	int cnt;
	float ratio;
	// Line 926, Address: 0x1d8be0, Func Offset: 0
	// Line 931, Address: 0x1d8bfc, Func Offset: 0x1c
	// Line 932, Address: 0x1d8c0c, Func Offset: 0x2c
	// Line 935, Address: 0x1d8c30, Func Offset: 0x50
	// Line 937, Address: 0x1d8c34, Func Offset: 0x54
	// Line 935, Address: 0x1d8c38, Func Offset: 0x58
	// Line 938, Address: 0x1d8c3c, Func Offset: 0x5c
	// Line 940, Address: 0x1d8c40, Func Offset: 0x60
	// Line 942, Address: 0x1d8c48, Func Offset: 0x68
	// Line 943, Address: 0x1d8c58, Func Offset: 0x78
	// Line 945, Address: 0x1d8c74, Func Offset: 0x94
	// Line 947, Address: 0x1d8c88, Func Offset: 0xa8
	// Line 951, Address: 0x1d8c90, Func Offset: 0xb0
	// Line 953, Address: 0x1d8c9c, Func Offset: 0xbc
	// Line 954, Address: 0x1d8ca0, Func Offset: 0xc0
	// Line 955, Address: 0x1d8cac, Func Offset: 0xcc
	// Line 957, Address: 0x1d8cb4, Func Offset: 0xd4
	// Line 958, Address: 0x1d8cb8, Func Offset: 0xd8
	// Func End, Address: 0x1d8cd4, Func Offset: 0xf4
}

// 
// Start address: 0x1d8ce0
void miscGaugeUpdate(_anon0* work)
{
	// Line 962, Address: 0x1d8ce0, Func Offset: 0
	// Line 964, Address: 0x1d8cec, Func Offset: 0xc
	// Line 967, Address: 0x1d8cf4, Func Offset: 0x14
	// Line 969, Address: 0x1d8cfc, Func Offset: 0x1c
	// Line 971, Address: 0x1d8d04, Func Offset: 0x24
	// Line 973, Address: 0x1d8d0c, Func Offset: 0x2c
	// Line 975, Address: 0x1d8d14, Func Offset: 0x34
	// Line 976, Address: 0x1d8d1c, Func Offset: 0x3c
	// Func End, Address: 0x1d8d2c, Func Offset: 0x4c
}

// 
// Start address: 0x1d8d30
void DrawCircle(float cx, float cy, float r, int num, unsigned int col)
{
	void* pkt;
	int i;
	float aspect;
	float l[4];
	int x;
	int y;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	float rot[4];
	float pos[4];
	float rad;
	unsigned long* p;
	unsigned long* p;
	// Line 980, Address: 0x1d8d30, Func Offset: 0
	// Line 982, Address: 0x1d8d48, Func Offset: 0x18
	// Line 980, Address: 0x1d8d4c, Func Offset: 0x1c
	// Line 982, Address: 0x1d8d78, Func Offset: 0x48
	// Line 984, Address: 0x1d8d8c, Func Offset: 0x5c
	// Line 986, Address: 0x1d8d94, Func Offset: 0x64
	// Line 987, Address: 0x1d8da8, Func Offset: 0x78
	// Line 990, Address: 0x1d8db4, Func Offset: 0x84
	// Line 987, Address: 0x1d8db8, Func Offset: 0x88
	// Line 990, Address: 0x1d8dc0, Func Offset: 0x90
	// Line 991, Address: 0x1d8dc8, Func Offset: 0x98
	// Line 992, Address: 0x1d8dd8, Func Offset: 0xa8
	// Line 993, Address: 0x1d8de0, Func Offset: 0xb0
	// Line 995, Address: 0x1d8dec, Func Offset: 0xbc
	// Line 996, Address: 0x1d8df0, Func Offset: 0xc0
	// Line 995, Address: 0x1d8df4, Func Offset: 0xc4
	// Line 996, Address: 0x1d8df8, Func Offset: 0xc8
	// Line 997, Address: 0x1d8dfc, Func Offset: 0xcc
	// Line 995, Address: 0x1d8e00, Func Offset: 0xd0
	// Line 997, Address: 0x1d8e04, Func Offset: 0xd4
	// Line 996, Address: 0x1d8e08, Func Offset: 0xd8
	// Line 997, Address: 0x1d8e0c, Func Offset: 0xdc
	// Line 999, Address: 0x1d8e18, Func Offset: 0xe8
	// Line 995, Address: 0x1d8e20, Func Offset: 0xf0
	// Line 999, Address: 0x1d8e2c, Func Offset: 0xfc
	// Line 995, Address: 0x1d8e30, Func Offset: 0x100
	// Line 999, Address: 0x1d8e34, Func Offset: 0x104
	// Line 995, Address: 0x1d8e38, Func Offset: 0x108
	// Line 999, Address: 0x1d8e3c, Func Offset: 0x10c
	// Line 995, Address: 0x1d8e40, Func Offset: 0x110
	// Line 996, Address: 0x1d8e44, Func Offset: 0x114
	// Line 999, Address: 0x1d8e4c, Func Offset: 0x11c
	// Line 1000, Address: 0x1d8e50, Func Offset: 0x120
	// Line 996, Address: 0x1d8e54, Func Offset: 0x124
	// Line 997, Address: 0x1d8e64, Func Offset: 0x134
	// Line 996, Address: 0x1d8e68, Func Offset: 0x138
	// Line 997, Address: 0x1d8e70, Func Offset: 0x140
	// Line 999, Address: 0x1d8e84, Func Offset: 0x154
	// Line 997, Address: 0x1d8e88, Func Offset: 0x158
	// Line 999, Address: 0x1d8e90, Func Offset: 0x160
	// Line 1002, Address: 0x1d8eac, Func Offset: 0x17c
	// Line 1001, Address: 0x1d8eb4, Func Offset: 0x184
	// Line 1000, Address: 0x1d8eb8, Func Offset: 0x188
	// Line 1002, Address: 0x1d8ebc, Func Offset: 0x18c
	// Line 1001, Address: 0x1d8ec4, Func Offset: 0x194
	// Line 1000, Address: 0x1d8ec8, Func Offset: 0x198
	// Line 1002, Address: 0x1d8ecc, Func Offset: 0x19c
	// Line 1001, Address: 0x1d8ed4, Func Offset: 0x1a4
	// Line 1002, Address: 0x1d8ed8, Func Offset: 0x1a8
	// Line 1004, Address: 0x1d8f20, Func Offset: 0x1f0
	// Line 1002, Address: 0x1d8f24, Func Offset: 0x1f4
	// Line 1004, Address: 0x1d8f3c, Func Offset: 0x20c
	// Line 1008, Address: 0x1d8f48, Func Offset: 0x218
	// Line 1010, Address: 0x1d8f58, Func Offset: 0x228
	// Line 1008, Address: 0x1d8f5c, Func Offset: 0x22c
	// Line 1010, Address: 0x1d8f60, Func Offset: 0x230
	// Line 1008, Address: 0x1d8f68, Func Offset: 0x238
	// Line 1010, Address: 0x1d8f84, Func Offset: 0x254
	// Line 1011, Address: 0x1d8f8c, Func Offset: 0x25c
	// Line 1013, Address: 0x1d8f9c, Func Offset: 0x26c
	// Line 1016, Address: 0x1d8fd4, Func Offset: 0x2a4
	// Line 1013, Address: 0x1d8fd8, Func Offset: 0x2a8
	// Line 1014, Address: 0x1d8fe0, Func Offset: 0x2b0
	// Line 1016, Address: 0x1d8fe4, Func Offset: 0x2b4
	// Line 1015, Address: 0x1d8fe8, Func Offset: 0x2b8
	// Line 1014, Address: 0x1d8fec, Func Offset: 0x2bc
	// Line 1016, Address: 0x1d8ff0, Func Offset: 0x2c0
	// Line 1014, Address: 0x1d8ff8, Func Offset: 0x2c8
	// Line 1016, Address: 0x1d8ffc, Func Offset: 0x2cc
	// Line 1015, Address: 0x1d9004, Func Offset: 0x2d4
	// Line 1014, Address: 0x1d9008, Func Offset: 0x2d8
	// Line 1015, Address: 0x1d900c, Func Offset: 0x2dc
	// Line 1014, Address: 0x1d9010, Func Offset: 0x2e0
	// Line 1015, Address: 0x1d9014, Func Offset: 0x2e4
	// Line 1016, Address: 0x1d9018, Func Offset: 0x2e8
	// Line 1017, Address: 0x1d9060, Func Offset: 0x330
	// Line 1016, Address: 0x1d9064, Func Offset: 0x334
	// Line 1017, Address: 0x1d9080, Func Offset: 0x350
	// Line 1019, Address: 0x1d908c, Func Offset: 0x35c
	// Line 1020, Address: 0x1d9094, Func Offset: 0x364
	// Line 1022, Address: 0x1d909c, Func Offset: 0x36c
	// Line 1023, Address: 0x1d90b4, Func Offset: 0x384
	// Line 1024, Address: 0x1d90cc, Func Offset: 0x39c
	// Line 1025, Address: 0x1d90d0, Func Offset: 0x3a0
	// Func End, Address: 0x1d9108, Func Offset: 0x3d8
}

// 
// Start address: 0x1d9110
void miscGaugeExec()
{
	_anon0* p_gw;
	// Line 1033, Address: 0x1d9110, Func Offset: 0
	// Line 1036, Address: 0x1d9114, Func Offset: 0x4
	// Line 1033, Address: 0x1d9118, Func Offset: 0x8
	// Line 1036, Address: 0x1d911c, Func Offset: 0xc
	// Line 1033, Address: 0x1d9120, Func Offset: 0x10
	// Line 1036, Address: 0x1d9124, Func Offset: 0x14
	// Line 1034, Address: 0x1d9128, Func Offset: 0x18
	// Line 1036, Address: 0x1d912c, Func Offset: 0x1c
	// Line 1038, Address: 0x1d9150, Func Offset: 0x40
	// Line 1039, Address: 0x1d915c, Func Offset: 0x4c
	// Line 1041, Address: 0x1d9164, Func Offset: 0x54
	// Line 1042, Address: 0x1d9168, Func Offset: 0x58
	// Line 1043, Address: 0x1d9178, Func Offset: 0x68
	// Line 1045, Address: 0x1d9184, Func Offset: 0x74
	// Line 1047, Address: 0x1d918c, Func Offset: 0x7c
	// Line 1048, Address: 0x1d9190, Func Offset: 0x80
	// Line 1049, Address: 0x1d91a0, Func Offset: 0x90
	// Line 1052, Address: 0x1d91ac, Func Offset: 0x9c
	// Line 1054, Address: 0x1d91b0, Func Offset: 0xa0
	// Line 1055, Address: 0x1d91b8, Func Offset: 0xa8
	// Func End, Address: 0x1d91c8, Func Offset: 0xb8
}

// 
// Start address: 0x1d91d0
void miscGaugeDraw()
{
	_anon0* work;
	_anon4* charge;
	_anon7* tex;
	unsigned int cbp;
	float rate;
	int range;
	float x;
	float y;
	// Line 1059, Address: 0x1d91d0, Func Offset: 0
	// Line 1064, Address: 0x1d91d4, Func Offset: 0x4
	// Line 1059, Address: 0x1d91d8, Func Offset: 0x8
	// Line 1060, Address: 0x1d91e4, Func Offset: 0x14
	// Line 1059, Address: 0x1d91e8, Func Offset: 0x18
	// Line 1060, Address: 0x1d91ec, Func Offset: 0x1c
	// Line 1059, Address: 0x1d91f0, Func Offset: 0x20
	// Line 1064, Address: 0x1d91f4, Func Offset: 0x24
	// Line 1068, Address: 0x1d9204, Func Offset: 0x34
	// Line 1069, Address: 0x1d9210, Func Offset: 0x40
	// Line 1070, Address: 0x1d9224, Func Offset: 0x54
	// Line 1073, Address: 0x1d9238, Func Offset: 0x68
	// Line 1074, Address: 0x1d9244, Func Offset: 0x74
	// Line 1075, Address: 0x1d924c, Func Offset: 0x7c
	// Line 1077, Address: 0x1d9268, Func Offset: 0x98
	// Line 1078, Address: 0x1d9270, Func Offset: 0xa0
	// Line 1079, Address: 0x1d9278, Func Offset: 0xa8
	// Line 1081, Address: 0x1d927c, Func Offset: 0xac
	// Line 1078, Address: 0x1d9280, Func Offset: 0xb0
	// Line 1079, Address: 0x1d9284, Func Offset: 0xb4
	// Line 1078, Address: 0x1d928c, Func Offset: 0xbc
	// Line 1081, Address: 0x1d9290, Func Offset: 0xc0
	// Line 1079, Address: 0x1d9294, Func Offset: 0xc4
	// Line 1078, Address: 0x1d9298, Func Offset: 0xc8
	// Line 1081, Address: 0x1d929c, Func Offset: 0xcc
	// Line 1086, Address: 0x1d92a8, Func Offset: 0xd8
	// Line 1087, Address: 0x1d92c0, Func Offset: 0xf0
	// Line 1088, Address: 0x1d92d4, Func Offset: 0x104
	// Line 1089, Address: 0x1d92e0, Func Offset: 0x110
	// Line 1090, Address: 0x1d92f4, Func Offset: 0x124
	// Line 1091, Address: 0x1d9308, Func Offset: 0x138
	// Line 1092, Address: 0x1d931c, Func Offset: 0x14c
	// Line 1094, Address: 0x1d9328, Func Offset: 0x158
	// Line 1095, Address: 0x1d9340, Func Offset: 0x170
	// Line 1096, Address: 0x1d9354, Func Offset: 0x184
	// Line 1098, Address: 0x1d9360, Func Offset: 0x190
	// Func End, Address: 0x1d937c, Func Offset: 0x1ac
}

