typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct sgTexArc;
typedef struct _anon3;
typedef struct sgTexData;
typedef struct sgClutData;
typedef struct _anon4;
typedef enum GameItem : unsigned char;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _GAME_WORK;


typedef unsigned int type_0[4];
typedef float type_1[4];
typedef float type_2[4][4];
typedef _anon2 type_3[3];
typedef _anon2 type_4[3];
typedef float type_5[3];
typedef float type_6[4];
typedef _anon2 type_7[121];
typedef int type_8[1];
typedef int type_9[1];
typedef _anon2 type_10[121];
typedef unsigned char type_11[2];
typedef int type_12[1];
typedef float type_13[3];
typedef int type_14[1];
typedef _anon2 type_15[15];
typedef int type_16[1];
typedef int type_17[1];
typedef _anon2 type_18[13];
typedef int type_19[1];

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
	_anon3 img;
	float pre_x;
	float pre_y;
	GameItem kind;
	int size;
	int poss_num;
	int pre_poss_num;
	int num_chg_cnt;
	int buru_timer;
	int buru_mode;
	int equip_cnt;
	int item_index;
	float durability;
	unsigned char flag;
	unsigned char id;
	unsigned char is_menu;
};

struct _anon2
{
	unsigned char kind;
	char no;
	char image_no;
	char clut_no;
	char offset_no;
};

struct sgTexArc
{
	<unknown fundamental type (0xa510)> dummy;
};

struct _anon3
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

struct sgTexData
{
	<unknown fundamental type (0xa510)> dummy;
};

struct sgClutData
{
	<unknown fundamental type (0xa510)> dummy;
};

struct _anon4
{
	_anon0* tex;
	unsigned char tcc;
	unsigned char tfx;
	unsigned char pad[2];
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

struct _GAME_WORK
{
	int init_at_cold[1];
	int logo_displayed;
	int init_at_warm[1];
	int game_init_executed;
	void* warm_memory_top;
	int load_stage_start;
	int continue_play;
	int game_overed;
	int risky_continue_count;
	int level;
	int init_at_game[1];
	void* game_memory_top;
	int stage;
	int scene;
	int prev_scene;
	int prev_stage;
	int next_stage;
	int next_scene;
	int start_door;
	int world;
	int real_scene;
	float current_camera_mtx[4][4];
	float next_camera_mtx[4][4];
	float game_camera_back[4][4];
	float game_view_angle;
	float game_view_angle_back;
	float map_offset[4];
	void* player;
	int control;
	int player_pos;
	unsigned int next_flags;
	int gameover;
	int gameover_ok;
	int game_complete;
	int gauge;
	int event_disable;
	int eileen_status;
	int cynthia_status;
	int pause_disable_contine;
	unsigned int play_time;
	unsigned int continue_count;
	unsigned int killed_enemy;
	unsigned int held_ghost;
	int update_continue;
	int continue_item;
	int now_peeping;
	unsigned int pre_eil_timer;
	unsigned int eil_interval;
	int pre_demo_index;
	unsigned int pre_demo_type;
	unsigned int pre_door_timer;
	unsigned int door_interval;
	unsigned int pre_door_demo_no;
	int init_at_stage[1];
	void* stage_memory_top;
	int stage_data_save;
	int init_at_scene[1];
	void* scene_memory_top;
	void* snap_texture_load_buffer;
	int game_mode;
	int shadow_density;
	int door_move_disable;
	int fog_effect_off;
	int init_at_loop[1];
	int game_in_action;
	int player_touch_door_no;
	int* passing_door;
	int work_end[1];
	int open_door_sn;
	int open_door_dn;
	int close_door_se_disable;
	int close_door_se_reserve;
};

_anon2 small_icon_tbl[121];
_anon2 small_broken_icon_tbl[15];
_anon2 small_breaking_saint_medallion[3];
_anon2 large_icon_tbl[121];
_anon2 large_broken_icon_tbl[13];
_anon2 large_breaking_saint_medallion[3];
float breaking_saint_medallion[3];
float base_alpha_ratio;
_GAME_WORK gamew;

void miscItemIconParamSet(_anon3* quad, GameItem id);
void miscItemIconParamSet_Large(_anon3* quad, GameItem id);
float get_ratio(int cnt, int max_cnt);
void ItemIconSetBaseAlphaRatio(float val);
unsigned int BaseAlphaMul(unsigned int src_col);
void ItemIconSetColor(_anon1* wk, unsigned int argb);
void ItemIconEquipMarkInit(_anon1* wk);
void ItemIconEquipMarkDisp(_anon1* wk);
void NumberDisp(int num, float x, float y, float scale, unsigned int argb);
void ItemIconWeaponInfo(_anon1* wk, float x, float y);
void ItemIconConstruct(_anon1* wk, float x, float y, float w, float h);
int get_saint_medallion_tex_index(float durability);
void miscItemIconTexSet_SaintMedallion(_anon3* quad, int size, int index);
void OneSaintMedallion0(_anon3* img, int size, int x, int y, int is_buru, int timer, int is_equip, float durability);
void OneSaintMedallion(_anon1* wk);
void OneIconDraw(_anon1* wk);
void ItemIconDraw(_anon1* wk);

// 
// Start address: 0x1f5a20
void miscItemIconParamSet(_anon3* quad, GameItem id)
{
	int u0;
	int v0;
	_anon0* tex;
	unsigned int cbp;
	_anon2* d;
	int i;
	// Line 485, Address: 0x1f5a20, Func Offset: 0
	// Line 495, Address: 0x1f5a3c, Func Offset: 0x1c
	// Line 485, Address: 0x1f5a40, Func Offset: 0x20
	// Line 494, Address: 0x1f5a44, Func Offset: 0x24
	// Line 495, Address: 0x1f5a4c, Func Offset: 0x2c
	// Line 496, Address: 0x1f5a50, Func Offset: 0x30
	// Line 500, Address: 0x1f5a5c, Func Offset: 0x3c
	// Line 502, Address: 0x1f5a70, Func Offset: 0x50
	// Line 503, Address: 0x1f5a80, Func Offset: 0x60
	// Line 502, Address: 0x1f5a84, Func Offset: 0x64
	// Line 503, Address: 0x1f5a88, Func Offset: 0x68
	// Line 504, Address: 0x1f5a9c, Func Offset: 0x7c
	// Line 508, Address: 0x1f5aa8, Func Offset: 0x88
	// Line 509, Address: 0x1f5abc, Func Offset: 0x9c
	// Line 511, Address: 0x1f5ac8, Func Offset: 0xa8
	// Line 512, Address: 0x1f5ae0, Func Offset: 0xc0
	// Line 511, Address: 0x1f5ae4, Func Offset: 0xc4
	// Line 512, Address: 0x1f5ae8, Func Offset: 0xc8
	// Line 513, Address: 0x1f5afc, Func Offset: 0xdc
	// Line 512, Address: 0x1f5b00, Func Offset: 0xe0
	// Line 513, Address: 0x1f5b04, Func Offset: 0xe4
	// Line 512, Address: 0x1f5b08, Func Offset: 0xe8
	// Line 513, Address: 0x1f5b0c, Func Offset: 0xec
	// Line 514, Address: 0x1f5b14, Func Offset: 0xf4
	// Line 515, Address: 0x1f5b18, Func Offset: 0xf8
	// Line 516, Address: 0x1f5b30, Func Offset: 0x110
	// Line 517, Address: 0x1f5b44, Func Offset: 0x124
	// Func End, Address: 0x1f5b60, Func Offset: 0x140
}

// 
// Start address: 0x1f5b60
void miscItemIconParamSet_Large(_anon3* quad, GameItem id)
{
	int u0;
	int v0;
	_anon0* tex;
	unsigned int cbp;
	_anon2* d;
	int i;
	// Line 527, Address: 0x1f5b60, Func Offset: 0
	// Line 536, Address: 0x1f5b7c, Func Offset: 0x1c
	// Line 527, Address: 0x1f5b80, Func Offset: 0x20
	// Line 535, Address: 0x1f5b84, Func Offset: 0x24
	// Line 536, Address: 0x1f5b8c, Func Offset: 0x2c
	// Line 537, Address: 0x1f5b90, Func Offset: 0x30
	// Line 541, Address: 0x1f5b9c, Func Offset: 0x3c
	// Line 544, Address: 0x1f5bb0, Func Offset: 0x50
	// Line 545, Address: 0x1f5bc0, Func Offset: 0x60
	// Line 544, Address: 0x1f5bc4, Func Offset: 0x64
	// Line 545, Address: 0x1f5bc8, Func Offset: 0x68
	// Line 547, Address: 0x1f5bdc, Func Offset: 0x7c
	// Line 551, Address: 0x1f5be8, Func Offset: 0x88
	// Line 552, Address: 0x1f5bfc, Func Offset: 0x9c
	// Line 554, Address: 0x1f5c08, Func Offset: 0xa8
	// Line 555, Address: 0x1f5c10, Func Offset: 0xb0
	// Line 556, Address: 0x1f5c14, Func Offset: 0xb4
	// Line 554, Address: 0x1f5c18, Func Offset: 0xb8
	// Line 555, Address: 0x1f5c1c, Func Offset: 0xbc
	// Line 554, Address: 0x1f5c28, Func Offset: 0xc8
	// Line 555, Address: 0x1f5c34, Func Offset: 0xd4
	// Line 556, Address: 0x1f5c38, Func Offset: 0xd8
	// Line 555, Address: 0x1f5c3c, Func Offset: 0xdc
	// Line 556, Address: 0x1f5c50, Func Offset: 0xf0
	// Line 558, Address: 0x1f5c58, Func Offset: 0xf8
	// Line 559, Address: 0x1f5c70, Func Offset: 0x110
	// Line 560, Address: 0x1f5c84, Func Offset: 0x124
	// Func End, Address: 0x1f5ca0, Func Offset: 0x140
}

// 
// Start address: 0x1f5ca0
float get_ratio(int cnt, int max_cnt)
{
	float t;
	// Line 568, Address: 0x1f5ca0, Func Offset: 0
	// Line 570, Address: 0x1f5ca4, Func Offset: 0x4
	// Line 571, Address: 0x1f5cb8, Func Offset: 0x18
	// Line 572, Address: 0x1f5cd0, Func Offset: 0x30
	// Line 573, Address: 0x1f5cd4, Func Offset: 0x34
	// Line 572, Address: 0x1f5cd8, Func Offset: 0x38
	// Line 573, Address: 0x1f5cdc, Func Offset: 0x3c
	// Line 572, Address: 0x1f5ce0, Func Offset: 0x40
	// Line 573, Address: 0x1f5cec, Func Offset: 0x4c
	// Line 574, Address: 0x1f5d18, Func Offset: 0x78
	// Func End, Address: 0x1f5d20, Func Offset: 0x80
}

// 
// Start address: 0x1f5d20
void ItemIconSetBaseAlphaRatio(float val)
{
	// Line 584, Address: 0x1f5d20, Func Offset: 0
	// Line 585, Address: 0x1f5d38, Func Offset: 0x18
	// Line 586, Address: 0x1f5d58, Func Offset: 0x38
	// Line 587, Address: 0x1f5d5c, Func Offset: 0x3c
	// Func End, Address: 0x1f5d64, Func Offset: 0x44
}

// 
// Start address: 0x1f5d70
unsigned int BaseAlphaMul(unsigned int src_col)
{
	unsigned char s_a;
	float tmp;
	// Line 591, Address: 0x1f5d70, Func Offset: 0
	// Line 592, Address: 0x1f5d74, Func Offset: 0x4
	// Line 591, Address: 0x1f5d78, Func Offset: 0x8
	// Line 595, Address: 0x1f5d7c, Func Offset: 0xc
	// Line 592, Address: 0x1f5d80, Func Offset: 0x10
	// Line 595, Address: 0x1f5d84, Func Offset: 0x14
	// Line 592, Address: 0x1f5d88, Func Offset: 0x18
	// Line 594, Address: 0x1f5d94, Func Offset: 0x24
	// Line 595, Address: 0x1f5dac, Func Offset: 0x3c
	// Line 596, Address: 0x1f5db4, Func Offset: 0x44
	// Func End, Address: 0x1f5dbc, Func Offset: 0x4c
}

// 
// Start address: 0x1f5dc0
void ItemIconSetColor(_anon1* wk, unsigned int argb)
{
	// Line 602, Address: 0x1f5dc0, Func Offset: 0
	// Line 603, Address: 0x1f5dc8, Func Offset: 0x8
	// Line 604, Address: 0x1f5dd0, Func Offset: 0x10
	// Line 605, Address: 0x1f5dfc, Func Offset: 0x3c
	// Line 606, Address: 0x1f5e00, Func Offset: 0x40
	// Func End, Address: 0x1f5e0c, Func Offset: 0x4c
}

// 
// Start address: 0x1f5e10
void ItemIconEquipMarkInit(_anon1* wk)
{
	// Line 611, Address: 0x1f5e10, Func Offset: 0
	// Line 612, Address: 0x1f5e14, Func Offset: 0x4
	// Line 613, Address: 0x1f5e28, Func Offset: 0x18
	// Func End, Address: 0x1f5e30, Func Offset: 0x20
}

// 
// Start address: 0x1f5e30
void ItemIconEquipMarkDisp(_anon1* wk)
{
	_anon0* tex;
	unsigned int cbp;
	float x;
	float y;
	float w;
	float h;
	float cx;
	unsigned char alpha;
	int cnt;
	float ratio;
	_anon3 equip;
	int flag;
	// Line 617, Address: 0x1f5e30, Func Offset: 0
	// Line 620, Address: 0x1f5e34, Func Offset: 0x4
	// Line 617, Address: 0x1f5e38, Func Offset: 0x8
	// Line 620, Address: 0x1f5e3c, Func Offset: 0xc
	// Line 617, Address: 0x1f5e40, Func Offset: 0x10
	// Line 620, Address: 0x1f5e50, Func Offset: 0x20
	// Line 617, Address: 0x1f5e54, Func Offset: 0x24
	// Line 620, Address: 0x1f5e64, Func Offset: 0x34
	// Line 621, Address: 0x1f5e70, Func Offset: 0x40
	// Line 622, Address: 0x1f5e80, Func Offset: 0x50
	// Line 621, Address: 0x1f5e84, Func Offset: 0x54
	// Line 623, Address: 0x1f5e88, Func Offset: 0x58
	// Line 622, Address: 0x1f5e8c, Func Offset: 0x5c
	// Line 632, Address: 0x1f5e94, Func Offset: 0x64
	// Line 622, Address: 0x1f5e98, Func Offset: 0x68
	// Line 627, Address: 0x1f5e9c, Func Offset: 0x6c
	// Line 624, Address: 0x1f5ea0, Func Offset: 0x70
	// Line 622, Address: 0x1f5ea8, Func Offset: 0x78
	// Line 625, Address: 0x1f5eac, Func Offset: 0x7c
	// Line 622, Address: 0x1f5eb0, Func Offset: 0x80
	// Line 623, Address: 0x1f5eb8, Func Offset: 0x88
	// Line 625, Address: 0x1f5ec8, Func Offset: 0x98
	// Line 632, Address: 0x1f5ecc, Func Offset: 0x9c
	// Line 633, Address: 0x1f5ed4, Func Offset: 0xa4
	// Line 634, Address: 0x1f5edc, Func Offset: 0xac
	// Line 638, Address: 0x1f5eec, Func Offset: 0xbc
	// Line 634, Address: 0x1f5ef0, Func Offset: 0xc0
	// Line 638, Address: 0x1f5ef8, Func Offset: 0xc8
	// Line 636, Address: 0x1f5f00, Func Offset: 0xd0
	// Line 638, Address: 0x1f5f04, Func Offset: 0xd4
	// Line 639, Address: 0x1f5f0c, Func Offset: 0xdc
	// Line 638, Address: 0x1f5f18, Func Offset: 0xe8
	// Line 640, Address: 0x1f5f1c, Func Offset: 0xec
	// Line 638, Address: 0x1f5f24, Func Offset: 0xf4
	// Line 640, Address: 0x1f5f28, Func Offset: 0xf8
	// Line 642, Address: 0x1f5f38, Func Offset: 0x108
	// Line 640, Address: 0x1f5f3c, Func Offset: 0x10c
	// Line 642, Address: 0x1f5f40, Func Offset: 0x110
	// Line 639, Address: 0x1f5f48, Func Offset: 0x118
	// Line 640, Address: 0x1f5f4c, Func Offset: 0x11c
	// Line 639, Address: 0x1f5f54, Func Offset: 0x124
	// Line 640, Address: 0x1f5f58, Func Offset: 0x128
	// Line 645, Address: 0x1f5f60, Func Offset: 0x130
	// Line 646, Address: 0x1f5f70, Func Offset: 0x140
	// Line 647, Address: 0x1f5f7c, Func Offset: 0x14c
	// Line 648, Address: 0x1f5f90, Func Offset: 0x160
	// Line 649, Address: 0x1f5fac, Func Offset: 0x17c
	// Line 650, Address: 0x1f5fc4, Func Offset: 0x194
	// Line 651, Address: 0x1f5fd8, Func Offset: 0x1a8
	// Line 652, Address: 0x1f5ff8, Func Offset: 0x1c8
	// Line 653, Address: 0x1f600c, Func Offset: 0x1dc
	// Line 654, Address: 0x1f6010, Func Offset: 0x1e0
	// Line 655, Address: 0x1f602c, Func Offset: 0x1fc
	// Line 656, Address: 0x1f6044, Func Offset: 0x214
	// Line 657, Address: 0x1f6060, Func Offset: 0x230
	// Line 659, Address: 0x1f60dc, Func Offset: 0x2ac
	// Line 660, Address: 0x1f60ec, Func Offset: 0x2bc
	// Func End, Address: 0x1f6118, Func Offset: 0x2e8
}

// 
// Start address: 0x1f6120
void NumberDisp(int num, float x, float y, float scale, unsigned int argb)
{
	_anon0* tex;
	unsigned int cbp;
	_anon3 img;
	int flag;
	// Line 665, Address: 0x1f6120, Func Offset: 0
	// Line 668, Address: 0x1f6124, Func Offset: 0x4
	// Line 665, Address: 0x1f6128, Func Offset: 0x8
	// Line 668, Address: 0x1f613c, Func Offset: 0x1c
	// Line 665, Address: 0x1f6140, Func Offset: 0x20
	// Line 668, Address: 0x1f6154, Func Offset: 0x34
	// Line 665, Address: 0x1f6158, Func Offset: 0x38
	// Line 668, Address: 0x1f6168, Func Offset: 0x48
	// Line 669, Address: 0x1f6174, Func Offset: 0x54
	// Line 672, Address: 0x1f6184, Func Offset: 0x64
	// Line 679, Address: 0x1f6198, Func Offset: 0x78
	// Line 683, Address: 0x1f61a0, Func Offset: 0x80
	// Line 679, Address: 0x1f61ac, Func Offset: 0x8c
	// Line 683, Address: 0x1f61b4, Func Offset: 0x94
	// Line 672, Address: 0x1f61bc, Func Offset: 0x9c
	// Line 679, Address: 0x1f61c0, Func Offset: 0xa0
	// Line 681, Address: 0x1f61ec, Func Offset: 0xcc
	// Line 679, Address: 0x1f61f0, Func Offset: 0xd0
	// Line 681, Address: 0x1f61f8, Func Offset: 0xd8
	// Line 683, Address: 0x1f61fc, Func Offset: 0xdc
	// Line 684, Address: 0x1f6204, Func Offset: 0xe4
	// Line 685, Address: 0x1f6214, Func Offset: 0xf4
	// Line 686, Address: 0x1f6228, Func Offset: 0x108
	// Line 687, Address: 0x1f6240, Func Offset: 0x120
	// Line 688, Address: 0x1f6254, Func Offset: 0x134
	// Line 689, Address: 0x1f6274, Func Offset: 0x154
	// Line 691, Address: 0x1f6288, Func Offset: 0x168
	// Line 692, Address: 0x1f62a4, Func Offset: 0x184
	// Line 694, Address: 0x1f62bc, Func Offset: 0x19c
	// Line 695, Address: 0x1f62ec, Func Offset: 0x1cc
	// Line 696, Address: 0x1f62fc, Func Offset: 0x1dc
	// Line 699, Address: 0x1f630c, Func Offset: 0x1ec
	// Line 700, Address: 0x1f6314, Func Offset: 0x1f4
	// Line 703, Address: 0x1f632c, Func Offset: 0x20c
	// Line 704, Address: 0x1f6350, Func Offset: 0x230
	// Line 708, Address: 0x1f6360, Func Offset: 0x240
	// Line 709, Address: 0x1f6374, Func Offset: 0x254
	// Line 712, Address: 0x1f638c, Func Offset: 0x26c
	// Line 713, Address: 0x1f63b4, Func Offset: 0x294
	// Line 714, Address: 0x1f63c4, Func Offset: 0x2a4
	// Line 717, Address: 0x1f63cc, Func Offset: 0x2ac
	// Line 720, Address: 0x1f63e4, Func Offset: 0x2c4
	// Line 721, Address: 0x1f640c, Func Offset: 0x2ec
	// Line 723, Address: 0x1f641c, Func Offset: 0x2fc
	// Func End, Address: 0x1f6450, Func Offset: 0x330
}

// 
// Start address: 0x1f6450
void ItemIconWeaponInfo(_anon1* wk, float x, float y)
{
	// Line 727, Address: 0x1f6450, Func Offset: 0
	// Line 731, Address: 0x1f6454, Func Offset: 0x4
	// Line 727, Address: 0x1f6458, Func Offset: 0x8
	// Line 731, Address: 0x1f6460, Func Offset: 0x10
	// Line 733, Address: 0x1f646c, Func Offset: 0x1c
	// Line 734, Address: 0x1f6474, Func Offset: 0x24
	// Line 735, Address: 0x1f647c, Func Offset: 0x2c
	// Line 737, Address: 0x1f6480, Func Offset: 0x30
	// Line 738, Address: 0x1f648c, Func Offset: 0x3c
	// Line 740, Address: 0x1f6490, Func Offset: 0x40
	// Line 752, Address: 0x1f650c, Func Offset: 0xbc
	// Line 754, Address: 0x1f6510, Func Offset: 0xc0
	// Line 757, Address: 0x1f6530, Func Offset: 0xe0
	// Func End, Address: 0x1f653c, Func Offset: 0xec
}

// 
// Start address: 0x1f6540
void ItemIconConstruct(_anon1* wk, float x, float y, float w, float h)
{
	// Line 762, Address: 0x1f6540, Func Offset: 0
	// Line 767, Address: 0x1f6544, Func Offset: 0x4
	// Line 762, Address: 0x1f6548, Func Offset: 0x8
	// Line 765, Address: 0x1f6564, Func Offset: 0x24
	// Line 766, Address: 0x1f6574, Func Offset: 0x34
	// Line 767, Address: 0x1f6578, Func Offset: 0x38
	// Line 768, Address: 0x1f6580, Func Offset: 0x40
	// Line 769, Address: 0x1f6588, Func Offset: 0x48
	// Line 770, Address: 0x1f65a0, Func Offset: 0x60
	// Line 771, Address: 0x1f65cc, Func Offset: 0x8c
	// Line 772, Address: 0x1f65dc, Func Offset: 0x9c
	// Line 773, Address: 0x1f6624, Func Offset: 0xe4
	// Line 774, Address: 0x1f6634, Func Offset: 0xf4
	// Line 776, Address: 0x1f6648, Func Offset: 0x108
	// Line 777, Address: 0x1f6658, Func Offset: 0x118
	// Line 779, Address: 0x1f6674, Func Offset: 0x134
	// Line 780, Address: 0x1f6680, Func Offset: 0x140
	// Line 781, Address: 0x1f6698, Func Offset: 0x158
	// Line 782, Address: 0x1f66b0, Func Offset: 0x170
	// Line 783, Address: 0x1f66c8, Func Offset: 0x188
	// Line 784, Address: 0x1f66e0, Func Offset: 0x1a0
	// Line 785, Address: 0x1f66f0, Func Offset: 0x1b0
	// Line 786, Address: 0x1f66fc, Func Offset: 0x1bc
	// Line 787, Address: 0x1f6700, Func Offset: 0x1c0
	// Line 788, Address: 0x1f6704, Func Offset: 0x1c4
	// Func End, Address: 0x1f6724, Func Offset: 0x1e4
}

// 
// Start address: 0x1f6730
int get_saint_medallion_tex_index(float durability)
{
	int i;
	// Line 795, Address: 0x1f6730, Func Offset: 0
	// Line 796, Address: 0x1f6740, Func Offset: 0x10
	// Line 797, Address: 0x1f6760, Func Offset: 0x30
	// Line 799, Address: 0x1f6768, Func Offset: 0x38
	// Line 800, Address: 0x1f6778, Func Offset: 0x48
	// Line 801, Address: 0x1f6780, Func Offset: 0x50
	// Func End, Address: 0x1f6788, Func Offset: 0x58
}

// 
// Start address: 0x1f6790
void miscItemIconTexSet_SaintMedallion(_anon3* quad, int size, int index)
{
	_anon0* tex;
	unsigned int cbp;
	_anon2* d;
	unsigned int emt_id;
	int u0;
	int v0;
	int row;
	int w;
	int h;
	// Line 805, Address: 0x1f6790, Func Offset: 0
	// Line 815, Address: 0x1f67b0, Func Offset: 0x20
	// Line 816, Address: 0x1f67b8, Func Offset: 0x28
	// Line 817, Address: 0x1f67c8, Func Offset: 0x38
	// Line 816, Address: 0x1f67cc, Func Offset: 0x3c
	// Line 817, Address: 0x1f67d0, Func Offset: 0x40
	// Line 818, Address: 0x1f67d4, Func Offset: 0x44
	// Line 821, Address: 0x1f67d8, Func Offset: 0x48
	// Line 823, Address: 0x1f67e0, Func Offset: 0x50
	// Line 825, Address: 0x1f67e8, Func Offset: 0x58
	// Line 823, Address: 0x1f67ec, Func Offset: 0x5c
	// Line 826, Address: 0x1f67f0, Func Offset: 0x60
	// Line 823, Address: 0x1f67f4, Func Offset: 0x64
	// Line 824, Address: 0x1f67fc, Func Offset: 0x6c
	// Line 828, Address: 0x1f6804, Func Offset: 0x74
	// Line 829, Address: 0x1f6808, Func Offset: 0x78
	// Line 830, Address: 0x1f6814, Func Offset: 0x84
	// Line 831, Address: 0x1f682c, Func Offset: 0x9c
	// Line 835, Address: 0x1f6838, Func Offset: 0xa8
	// Line 836, Address: 0x1f684c, Func Offset: 0xbc
	// Line 839, Address: 0x1f6858, Func Offset: 0xc8
	// Line 840, Address: 0x1f685c, Func Offset: 0xcc
	// Line 839, Address: 0x1f6864, Func Offset: 0xd4
	// Line 838, Address: 0x1f6868, Func Offset: 0xd8
	// Line 839, Address: 0x1f687c, Func Offset: 0xec
	// Line 840, Address: 0x1f6880, Func Offset: 0xf0
	// Line 841, Address: 0x1f688c, Func Offset: 0xfc
	// Line 842, Address: 0x1f6890, Func Offset: 0x100
	// Line 843, Address: 0x1f68a8, Func Offset: 0x118
	// Line 844, Address: 0x1f68bc, Func Offset: 0x12c
	// Func End, Address: 0x1f68e0, Func Offset: 0x150
}

// 
// Start address: 0x1f68e0
void OneSaintMedallion0(_anon3* img, int size, int x, int y, int is_buru, int timer, int is_equip, float durability)
{
	int src_index;
	int dst_index;
	float blend_ratio;
	float v;
	float min;
	float max;
	float alpha;
	unsigned int col;
	unsigned int pre_col;
	unsigned int is_pause_mode;
	float ratio;
	float scale;
	float val[3];
	// Line 851, Address: 0x1f68e0, Func Offset: 0
	// Line 866, Address: 0x1f68e4, Func Offset: 0x4
	// Line 851, Address: 0x1f68e8, Func Offset: 0x8
	// Line 866, Address: 0x1f693c, Func Offset: 0x5c
	// Line 856, Address: 0x1f6940, Func Offset: 0x60
	// Line 865, Address: 0x1f6948, Func Offset: 0x68
	// Line 866, Address: 0x1f694c, Func Offset: 0x6c
	// Line 868, Address: 0x1f6954, Func Offset: 0x74
	// Line 869, Address: 0x1f6960, Func Offset: 0x80
	// Line 871, Address: 0x1f6964, Func Offset: 0x84
	// Line 872, Address: 0x1f6970, Func Offset: 0x90
	// Line 873, Address: 0x1f6974, Func Offset: 0x94
	// Line 875, Address: 0x1f6978, Func Offset: 0x98
	// Line 874, Address: 0x1f697c, Func Offset: 0x9c
	// Line 875, Address: 0x1f6980, Func Offset: 0xa0
	// Line 874, Address: 0x1f6988, Func Offset: 0xa8
	// Line 875, Address: 0x1f698c, Func Offset: 0xac
	// Line 874, Address: 0x1f6990, Func Offset: 0xb0
	// Line 875, Address: 0x1f699c, Func Offset: 0xbc
	// Line 878, Address: 0x1f69a8, Func Offset: 0xc8
	// Line 879, Address: 0x1f69b4, Func Offset: 0xd4
	// Line 880, Address: 0x1f69cc, Func Offset: 0xec
	// Line 885, Address: 0x1f69d0, Func Offset: 0xf0
	// Line 888, Address: 0x1f69e0, Func Offset: 0x100
	// Line 891, Address: 0x1f69f8, Func Offset: 0x118
	// Line 895, Address: 0x1f6a00, Func Offset: 0x120
	// Line 896, Address: 0x1f6a14, Func Offset: 0x134
	// Line 897, Address: 0x1f6a20, Func Offset: 0x140
	// Line 896, Address: 0x1f6a2c, Func Offset: 0x14c
	// Line 897, Address: 0x1f6a30, Func Offset: 0x150
	// Line 898, Address: 0x1f6a44, Func Offset: 0x164
	// Line 899, Address: 0x1f6a4c, Func Offset: 0x16c
	// Line 900, Address: 0x1f6a54, Func Offset: 0x174
	// Line 902, Address: 0x1f6a60, Func Offset: 0x180
	// Line 905, Address: 0x1f6a78, Func Offset: 0x198
	// Line 906, Address: 0x1f6a84, Func Offset: 0x1a4
	// Line 907, Address: 0x1f6a90, Func Offset: 0x1b0
	// Line 908, Address: 0x1f6abc, Func Offset: 0x1dc
	// Line 909, Address: 0x1f6ac4, Func Offset: 0x1e4
	// Line 910, Address: 0x1f6adc, Func Offset: 0x1fc
	// Line 911, Address: 0x1f6af8, Func Offset: 0x218
	// Line 914, Address: 0x1f6b04, Func Offset: 0x224
	// Line 916, Address: 0x1f6b1c, Func Offset: 0x23c
	// Line 918, Address: 0x1f6b20, Func Offset: 0x240
	// Line 919, Address: 0x1f6b2c, Func Offset: 0x24c
	// Line 922, Address: 0x1f6b30, Func Offset: 0x250
	// Line 923, Address: 0x1f6b38, Func Offset: 0x258
	// Line 924, Address: 0x1f6b50, Func Offset: 0x270
	// Line 926, Address: 0x1f6b58, Func Offset: 0x278
	// Line 927, Address: 0x1f6b90, Func Offset: 0x2b0
	// Line 935, Address: 0x1f6ba8, Func Offset: 0x2c8
	// Line 936, Address: 0x1f6bb8, Func Offset: 0x2d8
	// Line 937, Address: 0x1f6bc8, Func Offset: 0x2e8
	// Line 938, Address: 0x1f6be4, Func Offset: 0x304
	// Line 939, Address: 0x1f6bec, Func Offset: 0x30c
	// Line 940, Address: 0x1f6c04, Func Offset: 0x324
	// Line 941, Address: 0x1f6c20, Func Offset: 0x340
	// Line 943, Address: 0x1f6c2c, Func Offset: 0x34c
	// Line 945, Address: 0x1f6c38, Func Offset: 0x358
	// Line 947, Address: 0x1f6c44, Func Offset: 0x364
	// Line 949, Address: 0x1f6c7c, Func Offset: 0x39c
	// Line 950, Address: 0x1f6c88, Func Offset: 0x3a8
	// Line 949, Address: 0x1f6c8c, Func Offset: 0x3ac
	// Line 950, Address: 0x1f6c90, Func Offset: 0x3b0
	// Line 949, Address: 0x1f6c94, Func Offset: 0x3b4
	// Line 951, Address: 0x1f6c98, Func Offset: 0x3b8
	// Line 949, Address: 0x1f6c9c, Func Offset: 0x3bc
	// Line 950, Address: 0x1f6cac, Func Offset: 0x3cc
	// Line 951, Address: 0x1f6cc0, Func Offset: 0x3e0
	// Line 952, Address: 0x1f6cd4, Func Offset: 0x3f4
	// Line 953, Address: 0x1f6cf0, Func Offset: 0x410
	// Line 956, Address: 0x1f6cfc, Func Offset: 0x41c
	// Line 958, Address: 0x1f6d00, Func Offset: 0x420
	// Line 959, Address: 0x1f6d18, Func Offset: 0x438
	// Func End, Address: 0x1f6d5c, Func Offset: 0x47c
}

// 
// Start address: 0x1f6d60
void OneSaintMedallion(_anon1* wk)
{
	_anon3* img;
	unsigned int timer;
	int is_equip;
	int i;
	float amplitude;
	float x;
	float y;
	// Line 963, Address: 0x1f6d60, Func Offset: 0
	// Line 966, Address: 0x1f6d84, Func Offset: 0x24
	// Line 967, Address: 0x1f6d8c, Func Offset: 0x2c
	// Line 969, Address: 0x1f6da4, Func Offset: 0x44
	// Line 972, Address: 0x1f6dd8, Func Offset: 0x78
	// Line 973, Address: 0x1f6de8, Func Offset: 0x88
	// Line 974, Address: 0x1f6dec, Func Offset: 0x8c
	// Line 977, Address: 0x1f6df0, Func Offset: 0x90
	// Line 978, Address: 0x1f6e04, Func Offset: 0xa4
	// Line 979, Address: 0x1f6e1c, Func Offset: 0xbc
	// Line 981, Address: 0x1f6e2c, Func Offset: 0xcc
	// Line 983, Address: 0x1f6e40, Func Offset: 0xe0
	// Line 985, Address: 0x1f6e74, Func Offset: 0x114
	// Line 986, Address: 0x1f6e84, Func Offset: 0x124
	// Line 988, Address: 0x1f6e90, Func Offset: 0x130
	// Line 991, Address: 0x1f6ec4, Func Offset: 0x164
	// Line 992, Address: 0x1f6ec8, Func Offset: 0x168
	// Func End, Address: 0x1f6ef0, Func Offset: 0x190
}

// 
// Start address: 0x1f6ef0
void OneIconDraw(_anon1* wk)
{
	_anon3* img;
	int i;
	float amplitude;
	unsigned int col;
	float x;
	float y;
	// Line 997, Address: 0x1f6ef0, Func Offset: 0
	// Line 1001, Address: 0x1f6f10, Func Offset: 0x20
	// Line 1002, Address: 0x1f6f1c, Func Offset: 0x2c
	// Line 1003, Address: 0x1f6f24, Func Offset: 0x34
	// Line 1005, Address: 0x1f6f30, Func Offset: 0x40
	// Line 1007, Address: 0x1f6f38, Func Offset: 0x48
	// Line 1010, Address: 0x1f6f6c, Func Offset: 0x7c
	// Line 1011, Address: 0x1f6f78, Func Offset: 0x88
	// Line 1010, Address: 0x1f6f7c, Func Offset: 0x8c
	// Line 1012, Address: 0x1f6f80, Func Offset: 0x90
	// Line 1010, Address: 0x1f6f84, Func Offset: 0x94
	// Line 1011, Address: 0x1f6f88, Func Offset: 0x98
	// Line 1013, Address: 0x1f6f94, Func Offset: 0xa4
	// Line 1015, Address: 0x1f6f98, Func Offset: 0xa8
	// Line 1016, Address: 0x1f6fac, Func Offset: 0xbc
	// Line 1017, Address: 0x1f6fc4, Func Offset: 0xd4
	// Line 1019, Address: 0x1f6fd0, Func Offset: 0xe0
	// Line 1021, Address: 0x1f6fe0, Func Offset: 0xf0
	// Line 1022, Address: 0x1f6ff8, Func Offset: 0x108
	// Line 1023, Address: 0x1f7010, Func Offset: 0x120
	// Line 1024, Address: 0x1f701c, Func Offset: 0x12c
	// Line 1025, Address: 0x1f702c, Func Offset: 0x13c
	// Line 1027, Address: 0x1f7038, Func Offset: 0x148
	// Line 1028, Address: 0x1f7044, Func Offset: 0x154
	// Line 1029, Address: 0x1f7048, Func Offset: 0x158
	// Func End, Address: 0x1f706c, Func Offset: 0x17c
}

// 
// Start address: 0x1f7070
void ItemIconDraw(_anon1* wk)
{
	// Line 1033, Address: 0x1f7070, Func Offset: 0
	// Line 1035, Address: 0x1f707c, Func Offset: 0xc
	// Line 1037, Address: 0x1f7084, Func Offset: 0x14
	// Line 1040, Address: 0x1f7090, Func Offset: 0x20
	// Line 1045, Address: 0x1f70b0, Func Offset: 0x40
	// Line 1046, Address: 0x1f70d0, Func Offset: 0x60
	// Line 1049, Address: 0x1f711c, Func Offset: 0xac
	// Line 1051, Address: 0x1f7120, Func Offset: 0xb0
	// Line 1052, Address: 0x1f7130, Func Offset: 0xc0
	// Line 1053, Address: 0x1f7138, Func Offset: 0xc8
	// Line 1055, Address: 0x1f7140, Func Offset: 0xd0
	// Line 1058, Address: 0x1f7148, Func Offset: 0xd8
	// Line 1059, Address: 0x1f7168, Func Offset: 0xf8
	// Line 1060, Address: 0x1f7174, Func Offset: 0x104
	// Line 1062, Address: 0x1f717c, Func Offset: 0x10c
	// Line 1063, Address: 0x1f7180, Func Offset: 0x110
	// Func End, Address: 0x1f7190, Func Offset: 0x120
}

