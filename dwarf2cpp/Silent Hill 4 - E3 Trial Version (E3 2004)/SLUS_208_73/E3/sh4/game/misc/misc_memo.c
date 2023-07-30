typedef struct _sfMenuObj;
typedef struct _sfMenuObjRect;
typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct EventFlag;
typedef struct _anon5;
typedef struct _anon6;
typedef enum GameItem : unsigned char;
typedef struct _GAME_WORK;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _anon9;
typedef enum _enum_0 : unsigned char;
typedef enum _enum_1 : unsigned char;
typedef struct _anon10;
typedef struct _anon11;
typedef struct _anon12;


typedef int type_0[1];
typedef float type_1[4];
typedef int type_2[1];
typedef unsigned char type_3[320];
typedef int type_4[1];
typedef short type_5[3];
typedef unsigned int type_6[4];
typedef int type_7[1];
typedef int type_8[1];
typedef int type_9[1];
typedef _anon1 type_10[11];
typedef int type_11[1];
typedef int type_12[7];
typedef _anon6 type_13[52];
typedef unsigned char type_14[2];
typedef float type_15[4];
typedef float type_16[4][4];
typedef _anon3 type_17[52];

struct _sfMenuObj
{
	_sfMenuObjRect* atari;
	short id;
	unsigned short flag;
	_sfMenuObj* next;
	_sfMenuObj* prev;
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

struct _anon0
{
	_anon4 menu;
	int memo_id;
	int memo_num;
	unsigned int timer;
	_anon5 bg;
	_anon5 memo_bg;
	unsigned int memo_file_id;
	unsigned char memo_draw_flag;
	unsigned char morph_flag;
	unsigned char menu_disp_flag;
	char scroll_dir;
};

struct _anon1
{
	int table_index;
	short x;
	short y;
	unsigned char alpha;
};

struct _anon2
{
	int dir;
	unsigned short flag;
	unsigned short disp_num;
};

struct _anon3
{
	short table_index;
	short buru_cnt;
};

struct _anon4
{
	_sfMenuObj* cur;
	_sfMenuObj* pre;
	_sfMenuObj* top;
	_enum_0 type;
	unsigned short option;
	unsigned short num;
	unsigned short timer;
	unsigned char step;
	_anon2 scrl;
	_sfMenuObjRect* atari_top;
	float cursor_x;
	float cursor_y;
};

struct EventFlag
{
	unsigned char flag[320];
};

struct _anon5
{
	_anon12 base;
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

struct _anon6
{
	GameItem kind;
	short title_id;
	short mes_id[3];
	unsigned int file_id;
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
	int memo_id;
	int slide;
};

struct _anon9
{
	int level;
	int step[7];
};

enum _enum_0 : unsigned char
{
	SF_MENU_LINEAR,
	SF_MENU_ATARI,
	SF_MENU_CURSOR_POS
};

enum _enum_1 : unsigned char
{
	SF_MENU_UP,
	SF_MENU_DOWN,
	SF_MENU_LEFT,
	SF_MENU_RIGHT,
	SF_MENU_PAGEUP,
	SF_MENU_PAGEDOWN,
	SF_MENU_INVALID_CMD
};

struct _anon10
{
	_anon7* tex;
	unsigned char tcc;
	unsigned char tfx;
	unsigned char pad[2];
};

struct _anon11
{
	unsigned int cbp;
	unsigned int ofs;
};

struct _anon12
{
	unsigned long reg_alpha;
	unsigned long reg_prim;
	unsigned long reg_test;
	_anon10 tex_data;
	_anon11 clut_data;
	unsigned short ot;
	unsigned short z;
};

_anon6 memo_mes_tbl[52];
int next_step;
unsigned char mes_draw_flag;
_anon3 memo_objects[52];
EventFlag event_flag;
_anon1 menu_disp_work[11];
_GAME_WORK gamew;
_anon9 memo_step_work;
_anon0 memo_work;
_anon8 m_string;

void MemoBgDrawFlagOn(_anon0* wk);
void MemoBgDrawFlagOff(_anon0* wk);
int MemoBgGetDrawFlag(_anon0* wk);
void MenuObjSetBuruCnt(_anon3* m_obj, int menu_num, int menu_id);
int memo_FileIdGet(int sel_id);
float get_ratio(int cnt, int max_cnt);
int miscMemoHaveAMemo(GameItem kind);
int memo_TexConstruct();
int memo_MenuInit(_anon0* work);
void memo_BgConstruct(_anon0* work);
void memo_MemoBgConstruct(_anon0* work);
void memo_Init(_anon0* work);
void memo_MenuWorkSet(_anon1* mwk, _anon0* work, float ratio);
void memo_InitMenuWork(_anon1* mwk, _anon0* work);
void memo_UpdateMenuWork(_anon1* mwk, _anon0* work);
int memo_ScrollWait(_anon0* work, int scroll_dir);
void memo_DispMenuObjScroll(_anon1* mwk, _anon0* work);
int CanGoToMap();
int memo_Select(_anon0* work);
int memo_DispHandle(_anon0* work);
int memo_DispNothingHandle();
void memo_DispNothing();
void disp_mes_goto_map(int x, int y);
void memo_BgDraw(_anon0* work);
int memo_Exec(_anon0* work);
int memo_Destruct(_anon0* work);
void miscMemoInit();
int miscMemoMain();

// 
// Start address: 0x17c070
void MemoBgDrawFlagOn(_anon0* wk)
{
	// Line 614, Address: 0x17c070, Func Offset: 0
	// Func End, Address: 0x17c07c, Func Offset: 0xc
}

// 
// Start address: 0x17c080
void MemoBgDrawFlagOff(_anon0* wk)
{
	// Line 615, Address: 0x17c080, Func Offset: 0
	// Func End, Address: 0x17c088, Func Offset: 0x8
}

// 
// Start address: 0x17c090
int MemoBgGetDrawFlag(_anon0* wk)
{
	// Line 616, Address: 0x17c090, Func Offset: 0
	// Func End, Address: 0x17c098, Func Offset: 0x8
}

// 
// Start address: 0x17c0a0
void MenuObjSetBuruCnt(_anon3* m_obj, int menu_num, int menu_id)
{
	int i;
	int cnt;
	_anon3* obj;
	// Line 621, Address: 0x17c0a0, Func Offset: 0
	// Line 626, Address: 0x17c0b8, Func Offset: 0x18
	// Line 621, Address: 0x17c0bc, Func Offset: 0x1c
	// Line 623, Address: 0x17c0c8, Func Offset: 0x28
	// Line 624, Address: 0x17c0cc, Func Offset: 0x2c
	// Line 626, Address: 0x17c0d0, Func Offset: 0x30
	// Line 627, Address: 0x17c0d8, Func Offset: 0x38
	// Line 628, Address: 0x17c0e8, Func Offset: 0x48
	// Line 629, Address: 0x17c0f0, Func Offset: 0x50
	// Line 630, Address: 0x17c110, Func Offset: 0x70
	// Line 632, Address: 0x17c118, Func Offset: 0x78
	// Line 633, Address: 0x17c11c, Func Offset: 0x7c
	// Line 634, Address: 0x17c120, Func Offset: 0x80
	// Line 635, Address: 0x17c124, Func Offset: 0x84
	// Line 637, Address: 0x17c128, Func Offset: 0x88
	// Line 638, Address: 0x17c138, Func Offset: 0x98
	// Func End, Address: 0x17c158, Func Offset: 0xb8
}

// 
// Start address: 0x17c160
int memo_FileIdGet(int sel_id)
{
	int rtv;
	// Line 680, Address: 0x17c160, Func Offset: 0
	// Line 682, Address: 0x17c174, Func Offset: 0x14
	// Line 683, Address: 0x17c19c, Func Offset: 0x3c
	// Line 686, Address: 0x17c1a0, Func Offset: 0x40
	// Func End, Address: 0x17c1a8, Func Offset: 0x48
}

// 
// Start address: 0x17c1b0
float get_ratio(int cnt, int max_cnt)
{
	float t;
	// Line 692, Address: 0x17c1b0, Func Offset: 0
	// Line 694, Address: 0x17c1b4, Func Offset: 0x4
	// Line 695, Address: 0x17c1c8, Func Offset: 0x18
	// Line 696, Address: 0x17c1e0, Func Offset: 0x30
	// Line 697, Address: 0x17c1f8, Func Offset: 0x48
	// Line 698, Address: 0x17c200, Func Offset: 0x50
	// Func End, Address: 0x17c208, Func Offset: 0x58
}

// 
// Start address: 0x17c210
int miscMemoHaveAMemo(GameItem kind)
{
	int flag;
	// Line 704, Address: 0x17c210, Func Offset: 0
	// Line 706, Address: 0x17c218, Func Offset: 0x8
	// Line 708, Address: 0x17c228, Func Offset: 0x18
	// Line 709, Address: 0x17c244, Func Offset: 0x34
	// Line 708, Address: 0x17c248, Func Offset: 0x38
	// Line 709, Address: 0x17c260, Func Offset: 0x50
	// Func End, Address: 0x17c268, Func Offset: 0x58
}

// 
// Start address: 0x17c270
int memo_TexConstruct()
{
	// Line 720, Address: 0x17c270, Func Offset: 0
	// Func End, Address: 0x17c278, Func Offset: 0x8
}

// 
// Start address: 0x17c280
int memo_MenuInit(_anon0* work)
{
	int i;
	int item_cnt;
	_anon1* mwk;
	_sfMenuObjRect rect;
	// Line 724, Address: 0x17c280, Func Offset: 0
	// Line 727, Address: 0x17c2a4, Func Offset: 0x24
	// Line 724, Address: 0x17c2a8, Func Offset: 0x28
	// Line 727, Address: 0x17c2ac, Func Offset: 0x2c
	// Line 724, Address: 0x17c2b0, Func Offset: 0x30
	// Line 729, Address: 0x17c2b4, Func Offset: 0x34
	// Line 732, Address: 0x17c2bc, Func Offset: 0x3c
	// Line 733, Address: 0x17c2c8, Func Offset: 0x48
	// Line 734, Address: 0x17c2d4, Func Offset: 0x54
	// Line 733, Address: 0x17c338, Func Offset: 0xb8
	// Line 732, Address: 0x17c33c, Func Offset: 0xbc
	// Line 734, Address: 0x17c340, Func Offset: 0xc0
	// Line 735, Address: 0x17c344, Func Offset: 0xc4
	// Line 734, Address: 0x17c348, Func Offset: 0xc8
	// Line 735, Address: 0x17c34c, Func Offset: 0xcc
	// Line 734, Address: 0x17c350, Func Offset: 0xd0
	// Line 735, Address: 0x17c354, Func Offset: 0xd4
	// Line 736, Address: 0x17c360, Func Offset: 0xe0
	// Line 737, Address: 0x17c36c, Func Offset: 0xec
	// Line 736, Address: 0x17c3c4, Func Offset: 0x144
	// Line 738, Address: 0x17c3c8, Func Offset: 0x148
	// Line 737, Address: 0x17c3cc, Func Offset: 0x14c
	// Line 738, Address: 0x17c3d0, Func Offset: 0x150
	// Line 737, Address: 0x17c3d4, Func Offset: 0x154
	// Line 738, Address: 0x17c3d8, Func Offset: 0x158
	// Line 741, Address: 0x17c3e8, Func Offset: 0x168
	// Line 740, Address: 0x17c3f0, Func Offset: 0x170
	// Line 741, Address: 0x17c3f4, Func Offset: 0x174
	// Line 744, Address: 0x17c410, Func Offset: 0x190
	// Line 747, Address: 0x17c420, Func Offset: 0x1a0
	// Line 745, Address: 0x17c424, Func Offset: 0x1a4
	// Line 750, Address: 0x17c428, Func Offset: 0x1a8
	// Line 746, Address: 0x17c42c, Func Offset: 0x1ac
	// Line 748, Address: 0x17c430, Func Offset: 0x1b0
	// Line 747, Address: 0x17c434, Func Offset: 0x1b4
	// Line 750, Address: 0x17c438, Func Offset: 0x1b8
	// Line 748, Address: 0x17c43c, Func Offset: 0x1bc
	// Line 750, Address: 0x17c440, Func Offset: 0x1c0
	// Line 753, Address: 0x17c448, Func Offset: 0x1c8
	// Line 754, Address: 0x17c454, Func Offset: 0x1d4
	// Line 757, Address: 0x17c458, Func Offset: 0x1d8
	// Line 755, Address: 0x17c45c, Func Offset: 0x1dc
	// Line 756, Address: 0x17c464, Func Offset: 0x1e4
	// Line 757, Address: 0x17c46c, Func Offset: 0x1ec
	// Line 758, Address: 0x17c470, Func Offset: 0x1f0
	// Line 759, Address: 0x17c474, Func Offset: 0x1f4
	// Line 758, Address: 0x17c478, Func Offset: 0x1f8
	// Line 761, Address: 0x17c480, Func Offset: 0x200
	// Line 763, Address: 0x17c484, Func Offset: 0x204
	// Line 764, Address: 0x17c498, Func Offset: 0x218
	// Line 766, Address: 0x17c4a4, Func Offset: 0x224
	// Line 768, Address: 0x17c4b0, Func Offset: 0x230
	// Line 769, Address: 0x17c4b4, Func Offset: 0x234
	// Func End, Address: 0x17c4e4, Func Offset: 0x264
}

// 
// Start address: 0x17c4f0
void memo_BgConstruct(_anon0* work)
{
	_anon5* img;
	// Line 773, Address: 0x17c4f0, Func Offset: 0
	// Line 776, Address: 0x17c4f4, Func Offset: 0x4
	// Line 773, Address: 0x17c4f8, Func Offset: 0x8
	// Line 774, Address: 0x17c500, Func Offset: 0x10
	// Line 776, Address: 0x17c504, Func Offset: 0x14
	// Line 777, Address: 0x17c510, Func Offset: 0x20
	// Line 778, Address: 0x17c540, Func Offset: 0x50
	// Line 779, Address: 0x17c550, Func Offset: 0x60
	// Line 781, Address: 0x17c568, Func Offset: 0x78
	// Line 782, Address: 0x17c584, Func Offset: 0x94
	// Func End, Address: 0x17c598, Func Offset: 0xa8
}

// 
// Start address: 0x17c5a0
void memo_MemoBgConstruct(_anon0* work)
{
	_anon5* img;
	// Line 786, Address: 0x17c5a0, Func Offset: 0
	// Line 789, Address: 0x17c5a4, Func Offset: 0x4
	// Line 786, Address: 0x17c5a8, Func Offset: 0x8
	// Line 787, Address: 0x17c5b0, Func Offset: 0x10
	// Line 789, Address: 0x17c5b4, Func Offset: 0x14
	// Line 790, Address: 0x17c5c0, Func Offset: 0x20
	// Line 791, Address: 0x17c5f0, Func Offset: 0x50
	// Line 792, Address: 0x17c600, Func Offset: 0x60
	// Line 793, Address: 0x17c618, Func Offset: 0x78
	// Line 794, Address: 0x17c634, Func Offset: 0x94
	// Func End, Address: 0x17c648, Func Offset: 0xa8
}

// 
// Start address: 0x17c650
void memo_Init(_anon0* work)
{
	// Line 799, Address: 0x17c650, Func Offset: 0
	// Line 802, Address: 0x17c654, Func Offset: 0x4
	// Line 799, Address: 0x17c658, Func Offset: 0x8
	// Line 802, Address: 0x17c65c, Func Offset: 0xc
	// Line 799, Address: 0x17c660, Func Offset: 0x10
	// Line 802, Address: 0x17c664, Func Offset: 0x14
	// Line 803, Address: 0x17c66c, Func Offset: 0x1c
	// Line 805, Address: 0x17c670, Func Offset: 0x20
	// Line 806, Address: 0x17c67c, Func Offset: 0x2c
	// Line 807, Address: 0x17c684, Func Offset: 0x34
	// Line 808, Address: 0x17c688, Func Offset: 0x38
	// Func End, Address: 0x17c698, Func Offset: 0x48
}

// 
// Start address: 0x17c6a0
void memo_MenuWorkSet(_anon1* mwk, _anon0* work, float ratio)
{
	int i;
	_sfMenuObj* obj;
	short top_id;
	_anon3* p_memo;
	float d;
	_anon1* dst;
	_anon1* work_last;
	int disp_count;
	int index;
	int index;
	int index;
	// Line 812, Address: 0x17c6a0, Func Offset: 0
	// Line 814, Address: 0x17c6c0, Func Offset: 0x20
	// Line 812, Address: 0x17c6c4, Func Offset: 0x24
	// Line 814, Address: 0x17c6d8, Func Offset: 0x38
	// Line 815, Address: 0x17c6e4, Func Offset: 0x44
	// Line 822, Address: 0x17c6ec, Func Offset: 0x4c
	// Line 815, Address: 0x17c6f0, Func Offset: 0x50
	// Line 817, Address: 0x17c6f4, Func Offset: 0x54
	// Line 822, Address: 0x17c6f8, Func Offset: 0x58
	// Line 815, Address: 0x17c6fc, Func Offset: 0x5c
	// Line 819, Address: 0x17c700, Func Offset: 0x60
	// Line 822, Address: 0x17c704, Func Offset: 0x64
	// Line 823, Address: 0x17c718, Func Offset: 0x78
	// Line 824, Address: 0x17c738, Func Offset: 0x98
	// Line 826, Address: 0x17c740, Func Offset: 0xa0
	// Line 827, Address: 0x17c744, Func Offset: 0xa4
	// Line 828, Address: 0x17c74c, Func Offset: 0xac
	// Line 831, Address: 0x17c750, Func Offset: 0xb0
	// Line 835, Address: 0x17c760, Func Offset: 0xc0
	// Line 836, Address: 0x17c76c, Func Offset: 0xcc
	// Line 841, Address: 0x17c778, Func Offset: 0xd8
	// Line 836, Address: 0x17c77c, Func Offset: 0xdc
	// Line 841, Address: 0x17c780, Func Offset: 0xe0
	// Line 843, Address: 0x17c788, Func Offset: 0xe8
	// Line 844, Address: 0x17c794, Func Offset: 0xf4
	// Line 843, Address: 0x17c798, Func Offset: 0xf8
	// Line 844, Address: 0x17c79c, Func Offset: 0xfc
	// Line 846, Address: 0x17c7a8, Func Offset: 0x108
	// Line 848, Address: 0x17c7ac, Func Offset: 0x10c
	// Line 847, Address: 0x17c7b0, Func Offset: 0x110
	// Line 848, Address: 0x17c7b8, Func Offset: 0x118
	// Line 849, Address: 0x17c7cc, Func Offset: 0x12c
	// Line 848, Address: 0x17c7d0, Func Offset: 0x130
	// Line 849, Address: 0x17c7d8, Func Offset: 0x138
	// Line 848, Address: 0x17c7e0, Func Offset: 0x140
	// Line 849, Address: 0x17c7e4, Func Offset: 0x144
	// Line 848, Address: 0x17c7e8, Func Offset: 0x148
	// Line 849, Address: 0x17c7ec, Func Offset: 0x14c
	// Line 853, Address: 0x17c800, Func Offset: 0x160
	// Line 855, Address: 0x17c810, Func Offset: 0x170
	// Line 856, Address: 0x17c81c, Func Offset: 0x17c
	// Line 857, Address: 0x17c82c, Func Offset: 0x18c
	// Line 859, Address: 0x17c830, Func Offset: 0x190
	// Line 860, Address: 0x17c838, Func Offset: 0x198
	// Line 866, Address: 0x17c840, Func Offset: 0x1a0
	// Line 860, Address: 0x17c844, Func Offset: 0x1a4
	// Line 862, Address: 0x17c848, Func Offset: 0x1a8
	// Line 863, Address: 0x17c858, Func Offset: 0x1b8
	// Line 864, Address: 0x17c860, Func Offset: 0x1c0
	// Line 866, Address: 0x17c868, Func Offset: 0x1c8
	// Line 867, Address: 0x17c874, Func Offset: 0x1d4
	// Line 868, Address: 0x17c878, Func Offset: 0x1d8
	// Line 867, Address: 0x17c87c, Func Offset: 0x1dc
	// Line 868, Address: 0x17c880, Func Offset: 0x1e0
	// Line 869, Address: 0x17c88c, Func Offset: 0x1ec
	// Line 868, Address: 0x17c890, Func Offset: 0x1f0
	// Line 869, Address: 0x17c8a4, Func Offset: 0x204
	// Line 871, Address: 0x17c8a8, Func Offset: 0x208
	// Line 872, Address: 0x17c8bc, Func Offset: 0x21c
	// Line 874, Address: 0x17c8e8, Func Offset: 0x248
	// Line 875, Address: 0x17c900, Func Offset: 0x260
	// Line 877, Address: 0x17c930, Func Offset: 0x290
	// Line 878, Address: 0x17c934, Func Offset: 0x294
	// Line 879, Address: 0x17c938, Func Offset: 0x298
	// Line 880, Address: 0x17c944, Func Offset: 0x2a4
	// Line 883, Address: 0x17c954, Func Offset: 0x2b4
	// Line 886, Address: 0x17c964, Func Offset: 0x2c4
	// Line 884, Address: 0x17c968, Func Offset: 0x2c8
	// Line 886, Address: 0x17c96c, Func Offset: 0x2cc
	// Line 884, Address: 0x17c970, Func Offset: 0x2d0
	// Line 886, Address: 0x17c974, Func Offset: 0x2d4
	// Line 887, Address: 0x17c97c, Func Offset: 0x2dc
	// Line 890, Address: 0x17c988, Func Offset: 0x2e8
	// Line 891, Address: 0x17c98c, Func Offset: 0x2ec
	// Line 890, Address: 0x17c990, Func Offset: 0x2f0
	// Line 888, Address: 0x17c994, Func Offset: 0x2f4
	// Line 890, Address: 0x17c998, Func Offset: 0x2f8
	// Line 889, Address: 0x17c99c, Func Offset: 0x2fc
	// Line 891, Address: 0x17c9a0, Func Offset: 0x300
	// Line 890, Address: 0x17c9a4, Func Offset: 0x304
	// Line 888, Address: 0x17c9ac, Func Offset: 0x30c
	// Line 891, Address: 0x17c9b8, Func Offset: 0x318
	// Line 889, Address: 0x17c9bc, Func Offset: 0x31c
	// Line 890, Address: 0x17c9c0, Func Offset: 0x320
	// Line 891, Address: 0x17c9cc, Func Offset: 0x32c
	// Line 890, Address: 0x17c9d0, Func Offset: 0x330
	// Line 891, Address: 0x17c9d4, Func Offset: 0x334
	// Line 893, Address: 0x17c9e4, Func Offset: 0x344
	// Line 894, Address: 0x17c9e8, Func Offset: 0x348
	// Func End, Address: 0x17ca18, Func Offset: 0x378
}

// 
// Start address: 0x17ca20
void memo_InitMenuWork(_anon1* mwk, _anon0* work)
{
	// Line 900, Address: 0x17ca20, Func Offset: 0
	// Func End, Address: 0x17ca30, Func Offset: 0x10
}

// 
// Start address: 0x17ca30
void memo_UpdateMenuWork(_anon1* mwk, _anon0* work)
{
	float ratio;
	// Line 905, Address: 0x17ca30, Func Offset: 0
	// Line 908, Address: 0x17ca34, Func Offset: 0x4
	// Line 905, Address: 0x17ca38, Func Offset: 0x8
	// Line 906, Address: 0x17ca3c, Func Offset: 0xc
	// Line 908, Address: 0x17ca48, Func Offset: 0x18
	// Line 909, Address: 0x17ca60, Func Offset: 0x30
	// Line 910, Address: 0x17ca6c, Func Offset: 0x3c
	// Line 912, Address: 0x17ca78, Func Offset: 0x48
	// Line 913, Address: 0x17ca88, Func Offset: 0x58
	// Func End, Address: 0x17ca94, Func Offset: 0x64
}

// 
// Start address: 0x17caa0
int memo_ScrollWait(_anon0* work, int scroll_dir)
{
	int rtv;
	// Line 920, Address: 0x17caa0, Func Offset: 0
	// Line 921, Address: 0x17caa8, Func Offset: 0x8
	// Line 924, Address: 0x17cab0, Func Offset: 0x10
	// Line 925, Address: 0x17cabc, Func Offset: 0x1c
	// Line 926, Address: 0x17cac4, Func Offset: 0x24
	// Line 930, Address: 0x17cac8, Func Offset: 0x28
	// Func End, Address: 0x17cad0, Func Offset: 0x30
}

// 
// Start address: 0x17cad0
void memo_DispMenuObjScroll(_anon1* mwk, _anon0* work)
{
	int i;
	int disp_num;
	_sfMenuObj* top;
	int top_id;
	int index;
	_anon3* p_memo;
	int x0;
	int x1;
	int buru;
	// Line 935, Address: 0x17cad0, Func Offset: 0
	// Line 938, Address: 0x17caf8, Func Offset: 0x28
	// Line 935, Address: 0x17cafc, Func Offset: 0x2c
	// Line 937, Address: 0x17cb00, Func Offset: 0x30
	// Line 938, Address: 0x17cb04, Func Offset: 0x34
	// Line 939, Address: 0x17cb0c, Func Offset: 0x3c
	// Line 941, Address: 0x17cb18, Func Offset: 0x48
	// Line 942, Address: 0x17cb24, Func Offset: 0x54
	// Line 946, Address: 0x17cb28, Func Offset: 0x58
	// Line 947, Address: 0x17cb30, Func Offset: 0x60
	// Line 948, Address: 0x17cb38, Func Offset: 0x68
	// Line 950, Address: 0x17cb48, Func Offset: 0x78
	// Line 954, Address: 0x17cb58, Func Offset: 0x88
	// Line 955, Address: 0x17cb64, Func Offset: 0x94
	// Line 956, Address: 0x17cb78, Func Offset: 0xa8
	// Line 958, Address: 0x17cb80, Func Offset: 0xb0
	// Line 959, Address: 0x17cb94, Func Offset: 0xc4
	// Line 962, Address: 0x17cb98, Func Offset: 0xc8
	// Line 964, Address: 0x17cba0, Func Offset: 0xd0
	// Line 967, Address: 0x17cba8, Func Offset: 0xd8
	// Line 968, Address: 0x17cbd0, Func Offset: 0x100
	// Line 971, Address: 0x17cbf8, Func Offset: 0x128
	// Line 974, Address: 0x17cc20, Func Offset: 0x150
	// Line 975, Address: 0x17cc28, Func Offset: 0x158
	// Line 977, Address: 0x17cc30, Func Offset: 0x160
	// Line 978, Address: 0x17cc7c, Func Offset: 0x1ac
	// Line 981, Address: 0x17cca4, Func Offset: 0x1d4
	// Line 982, Address: 0x17cca8, Func Offset: 0x1d8
	// Line 984, Address: 0x17ccb0, Func Offset: 0x1e0
	// Line 985, Address: 0x17ccb4, Func Offset: 0x1e4
	// Line 986, Address: 0x17ccc4, Func Offset: 0x1f4
	// Line 987, Address: 0x17cccc, Func Offset: 0x1fc
	// Func End, Address: 0x17ccf8, Func Offset: 0x228
}

// 
// Start address: 0x17cd00
int CanGoToMap()
{
	int rtv;
	// Line 995, Address: 0x17cd00, Func Offset: 0
	// Line 1000, Address: 0x17cd4c, Func Offset: 0x4c
	// Line 1003, Address: 0x17cd50, Func Offset: 0x50
	// Line 1005, Address: 0x17cd58, Func Offset: 0x58
	// Line 1006, Address: 0x17cd60, Func Offset: 0x60
	// Line 1009, Address: 0x17cd78, Func Offset: 0x78
	// Line 1013, Address: 0x17cd80, Func Offset: 0x80
	// Line 1020, Address: 0x17cd88, Func Offset: 0x88
	// Func End, Address: 0x17cd90, Func Offset: 0x90
}

// 
// Start address: 0x17cd90
int memo_Select(_anon0* work)
{
	int rtv;
	int id;
	unsigned int rep;
	_enum_1 cmd;
	_sfMenuObj* obj;
	short top_id;
	short cur_id;
	int tmp_id;
	int target_y;
	int target_x;
	char is_up;
	// Line 1025, Address: 0x17cd90, Func Offset: 0
	// Line 1029, Address: 0x17cda4, Func Offset: 0x14
	// Line 1025, Address: 0x17cda8, Func Offset: 0x18
	// Line 1029, Address: 0x17cdac, Func Offset: 0x1c
	// Line 1035, Address: 0x17cdb4, Func Offset: 0x24
	// Line 1029, Address: 0x17cdc0, Func Offset: 0x30
	// Line 1035, Address: 0x17cdc4, Func Offset: 0x34
	// Line 1036, Address: 0x17cdc8, Func Offset: 0x38
	// Line 1035, Address: 0x17cdcc, Func Offset: 0x3c
	// Line 1036, Address: 0x17cdec, Func Offset: 0x5c
	// Line 1038, Address: 0x17ce10, Func Offset: 0x80
	// Line 1039, Address: 0x17ce5c, Func Offset: 0xcc
	// Line 1040, Address: 0x17ce64, Func Offset: 0xd4
	// Line 1041, Address: 0x17ce68, Func Offset: 0xd8
	// Line 1044, Address: 0x17ce7c, Func Offset: 0xec
	// Line 1041, Address: 0x17ce80, Func Offset: 0xf0
	// Line 1044, Address: 0x17ce84, Func Offset: 0xf4
	// Line 1048, Address: 0x17ce8c, Func Offset: 0xfc
	// Line 1049, Address: 0x17ceac, Func Offset: 0x11c
	// Line 1051, Address: 0x17ceb0, Func Offset: 0x120
	// Line 1050, Address: 0x17ceb8, Func Offset: 0x128
	// Line 1052, Address: 0x17cebc, Func Offset: 0x12c
	// Line 1053, Address: 0x17cec4, Func Offset: 0x134
	// Line 1055, Address: 0x17cec8, Func Offset: 0x138
	// Line 1054, Address: 0x17ced0, Func Offset: 0x140
	// Line 1057, Address: 0x17ced4, Func Offset: 0x144
	// Line 1058, Address: 0x17ced8, Func Offset: 0x148
	// Line 1059, Address: 0x17cee4, Func Offset: 0x154
	// Line 1061, Address: 0x17cef8, Func Offset: 0x168
	// Line 1062, Address: 0x17cf04, Func Offset: 0x174
	// Line 1063, Address: 0x17cf0c, Func Offset: 0x17c
	// Line 1064, Address: 0x17cf18, Func Offset: 0x188
	// Line 1066, Address: 0x17cf2c, Func Offset: 0x19c
	// Line 1067, Address: 0x17cf38, Func Offset: 0x1a8
	// Line 1068, Address: 0x17cf48, Func Offset: 0x1b8
	// Line 1069, Address: 0x17cf4c, Func Offset: 0x1bc
	// Line 1068, Address: 0x17cf50, Func Offset: 0x1c0
	// Line 1069, Address: 0x17cf54, Func Offset: 0x1c4
	// Line 1072, Address: 0x17cf60, Func Offset: 0x1d0
	// Line 1073, Address: 0x17cfc4, Func Offset: 0x234
	// Line 1074, Address: 0x17cfd0, Func Offset: 0x240
	// Line 1075, Address: 0x17cfe4, Func Offset: 0x254
	// Line 1076, Address: 0x17cff8, Func Offset: 0x268
	// Line 1078, Address: 0x17d004, Func Offset: 0x274
	// Line 1079, Address: 0x17d010, Func Offset: 0x280
	// Line 1082, Address: 0x17d024, Func Offset: 0x294
	// Line 1083, Address: 0x17d030, Func Offset: 0x2a0
	// Line 1084, Address: 0x17d044, Func Offset: 0x2b4
	// Line 1085, Address: 0x17d054, Func Offset: 0x2c4
	// Line 1088, Address: 0x17d058, Func Offset: 0x2c8
	// Line 1089, Address: 0x17d068, Func Offset: 0x2d8
	// Line 1091, Address: 0x17d070, Func Offset: 0x2e0
	// Line 1093, Address: 0x17d080, Func Offset: 0x2f0
	// Line 1094, Address: 0x17d094, Func Offset: 0x304
	// Line 1096, Address: 0x17d0a0, Func Offset: 0x310
	// Line 1094, Address: 0x17d0a8, Func Offset: 0x318
	// Line 1096, Address: 0x17d0ac, Func Offset: 0x31c
	// Line 1098, Address: 0x17d0b4, Func Offset: 0x324
	// Line 1102, Address: 0x17d0c4, Func Offset: 0x334
	// Line 1107, Address: 0x17d0cc, Func Offset: 0x33c
	// Line 1108, Address: 0x17d0d0, Func Offset: 0x340
	// Line 1109, Address: 0x17d0d4, Func Offset: 0x344
	// Line 1112, Address: 0x17d134, Func Offset: 0x3a4
	// Line 1113, Address: 0x17d138, Func Offset: 0x3a8
	// Line 1115, Address: 0x17d140, Func Offset: 0x3b0
	// Line 1113, Address: 0x17d144, Func Offset: 0x3b4
	// Line 1116, Address: 0x17d150, Func Offset: 0x3c0
	// Func End, Address: 0x17d168, Func Offset: 0x3d8
}

// 
// Start address: 0x17d170
int memo_DispHandle(_anon0* work)
{
	int rtv;
	_sfMenuObj* obj;
	short top_id;
	int menu_num;
	unsigned int trig;
	// Line 1120, Address: 0x17d170, Func Offset: 0
	// Line 1125, Address: 0x17d18c, Func Offset: 0x1c
	// Line 1126, Address: 0x17d194, Func Offset: 0x24
	// Line 1128, Address: 0x17d1a0, Func Offset: 0x30
	// Line 1127, Address: 0x17d1a4, Func Offset: 0x34
	// Line 1126, Address: 0x17d1a8, Func Offset: 0x38
	// Line 1128, Address: 0x17d1ac, Func Offset: 0x3c
	// Line 1134, Address: 0x17d1b8, Func Offset: 0x48
	// Line 1135, Address: 0x17d1c0, Func Offset: 0x50
	// Line 1134, Address: 0x17d1cc, Func Offset: 0x5c
	// Line 1135, Address: 0x17d1d8, Func Offset: 0x68
	// Line 1138, Address: 0x17d240, Func Offset: 0xd0
	// Line 1140, Address: 0x17d248, Func Offset: 0xd8
	// Line 1141, Address: 0x17d254, Func Offset: 0xe4
	// Line 1143, Address: 0x17d25c, Func Offset: 0xec
	// Line 1144, Address: 0x17d2ac, Func Offset: 0x13c
	// Line 1146, Address: 0x17d2b8, Func Offset: 0x148
	// Line 1148, Address: 0x17d304, Func Offset: 0x194
	// Line 1150, Address: 0x17d30c, Func Offset: 0x19c
	// Line 1151, Address: 0x17d310, Func Offset: 0x1a0
	// Line 1152, Address: 0x17d324, Func Offset: 0x1b4
	// Line 1154, Address: 0x17d374, Func Offset: 0x204
	// Line 1156, Address: 0x17d37c, Func Offset: 0x20c
	// Line 1157, Address: 0x17d380, Func Offset: 0x210
	// Line 1158, Address: 0x17d394, Func Offset: 0x224
	// Line 1159, Address: 0x17d39c, Func Offset: 0x22c
	// Line 1161, Address: 0x17d3ec, Func Offset: 0x27c
	// Line 1163, Address: 0x17d3f4, Func Offset: 0x284
	// Line 1164, Address: 0x17d3f8, Func Offset: 0x288
	// Line 1165, Address: 0x17d408, Func Offset: 0x298
	// Line 1167, Address: 0x17d454, Func Offset: 0x2e4
	// Line 1169, Address: 0x17d45c, Func Offset: 0x2ec
	// Line 1171, Address: 0x17d460, Func Offset: 0x2f0
	// Line 1172, Address: 0x17d550, Func Offset: 0x3e0
	// Line 1173, Address: 0x17d59c, Func Offset: 0x42c
	// Line 1175, Address: 0x17d5a8, Func Offset: 0x438
	// Line 1177, Address: 0x17d5f4, Func Offset: 0x484
	// Line 1179, Address: 0x17d5fc, Func Offset: 0x48c
	// Line 1180, Address: 0x17d600, Func Offset: 0x490
	// Line 1182, Address: 0x17d614, Func Offset: 0x4a4
	// Line 1184, Address: 0x17d61c, Func Offset: 0x4ac
	// Line 1185, Address: 0x17d624, Func Offset: 0x4b4
	// Line 1186, Address: 0x17d674, Func Offset: 0x504
	// Line 1210, Address: 0x17d680, Func Offset: 0x510
	// Line 1212, Address: 0x17d694, Func Offset: 0x524
	// Line 1214, Address: 0x17d6a4, Func Offset: 0x534
	// Line 1217, Address: 0x17d6ec, Func Offset: 0x57c
	// Line 1219, Address: 0x17d6f4, Func Offset: 0x584
	// Line 1220, Address: 0x17d700, Func Offset: 0x590
	// Line 1222, Address: 0x17d70c, Func Offset: 0x59c
	// Line 1223, Address: 0x17d714, Func Offset: 0x5a4
	// Line 1224, Address: 0x17d720, Func Offset: 0x5b0
	// Line 1225, Address: 0x17d72c, Func Offset: 0x5bc
	// Line 1224, Address: 0x17d730, Func Offset: 0x5c0
	// Line 1225, Address: 0x17d734, Func Offset: 0x5c4
	// Line 1224, Address: 0x17d738, Func Offset: 0x5c8
	// Line 1225, Address: 0x17d73c, Func Offset: 0x5cc
	// Line 1226, Address: 0x17d784, Func Offset: 0x614
	// Line 1228, Address: 0x17d790, Func Offset: 0x620
	// Line 1230, Address: 0x17d79c, Func Offset: 0x62c
	// Line 1231, Address: 0x17d7a4, Func Offset: 0x634
	// Line 1232, Address: 0x17d7b0, Func Offset: 0x640
	// Line 1233, Address: 0x17d7bc, Func Offset: 0x64c
	// Line 1232, Address: 0x17d7c0, Func Offset: 0x650
	// Line 1233, Address: 0x17d7c4, Func Offset: 0x654
	// Line 1232, Address: 0x17d7c8, Func Offset: 0x658
	// Line 1233, Address: 0x17d7cc, Func Offset: 0x65c
	// Line 1234, Address: 0x17d814, Func Offset: 0x6a4
	// Line 1235, Address: 0x17d820, Func Offset: 0x6b0
	// Line 1238, Address: 0x17d838, Func Offset: 0x6c8
	// Line 1240, Address: 0x17d884, Func Offset: 0x714
	// Line 1242, Address: 0x17d88c, Func Offset: 0x71c
	// Line 1243, Address: 0x17d890, Func Offset: 0x720
	// Line 1245, Address: 0x17d89c, Func Offset: 0x72c
	// Line 1246, Address: 0x17d8a8, Func Offset: 0x738
	// Line 1247, Address: 0x17d8bc, Func Offset: 0x74c
	// Line 1250, Address: 0x17d8c4, Func Offset: 0x754
	// Line 1252, Address: 0x17d8cc, Func Offset: 0x75c
	// Line 1254, Address: 0x17d8d0, Func Offset: 0x760
	// Line 1255, Address: 0x17d8e4, Func Offset: 0x774
	// Line 1257, Address: 0x17d8ec, Func Offset: 0x77c
	// Line 1259, Address: 0x17d8f4, Func Offset: 0x784
	// Line 1257, Address: 0x17d8f8, Func Offset: 0x788
	// Line 1259, Address: 0x17d8fc, Func Offset: 0x78c
	// Line 1261, Address: 0x17d908, Func Offset: 0x798
	// Line 1264, Address: 0x17d954, Func Offset: 0x7e4
	// Line 1265, Address: 0x17d958, Func Offset: 0x7e8
	// Line 1267, Address: 0x17d960, Func Offset: 0x7f0
	// Line 1265, Address: 0x17d964, Func Offset: 0x7f4
	// Line 1267, Address: 0x17d96c, Func Offset: 0x7fc
	// Line 1269, Address: 0x17d974, Func Offset: 0x804
	// Line 1270, Address: 0x17d97c, Func Offset: 0x80c
	// Line 1272, Address: 0x17d980, Func Offset: 0x810
	// Line 1273, Address: 0x17d984, Func Offset: 0x814
	// Func End, Address: 0x17d9a0, Func Offset: 0x830
}

// 
// Start address: 0x17d9a0
int memo_DispNothingHandle()
{
	int rtv;
	// Line 1277, Address: 0x17d9a0, Func Offset: 0
	// Line 1280, Address: 0x17d9a4, Func Offset: 0x4
	// Line 1277, Address: 0x17d9a8, Func Offset: 0x8
	// Line 1280, Address: 0x17d9ac, Func Offset: 0xc
	// Line 1277, Address: 0x17d9b0, Func Offset: 0x10
	// Line 1280, Address: 0x17d9b4, Func Offset: 0x14
	// Line 1282, Address: 0x17d9c4, Func Offset: 0x24
	// Line 1283, Address: 0x17d9d0, Func Offset: 0x30
	// Line 1284, Address: 0x17d9e4, Func Offset: 0x44
	// Line 1285, Address: 0x17d9f4, Func Offset: 0x54
	// Line 1289, Address: 0x17d9f8, Func Offset: 0x58
	// Line 1290, Address: 0x17d9fc, Func Offset: 0x5c
	// Func End, Address: 0x17da0c, Func Offset: 0x6c
}

// 
// Start address: 0x17da10
void memo_DispNothing()
{
	// Line 1294, Address: 0x17da10, Func Offset: 0
	// Line 1295, Address: 0x17da18, Func Offset: 0x8
	// Line 1296, Address: 0x17da40, Func Offset: 0x30
	// Line 1299, Address: 0x17da88, Func Offset: 0x78
	// Line 1300, Address: 0x17da90, Func Offset: 0x80
	// Func End, Address: 0x17daa0, Func Offset: 0x90
}

// 
// Start address: 0x17daa0
void disp_mes_goto_map(int x, int y)
{
	int mes_id;
	// Line 1303, Address: 0x17daa0, Func Offset: 0
	// Line 1304, Address: 0x17dab8, Func Offset: 0x18
	// Line 1306, Address: 0x17dad0, Func Offset: 0x30
	// Line 1307, Address: 0x17dad8, Func Offset: 0x38
	// Line 1308, Address: 0x17db00, Func Offset: 0x60
	// Line 1309, Address: 0x17db14, Func Offset: 0x74
	// Line 1310, Address: 0x17db28, Func Offset: 0x88
	// Line 1311, Address: 0x17db30, Func Offset: 0x90
	// Line 1312, Address: 0x17db38, Func Offset: 0x98
	// Func End, Address: 0x17db50, Func Offset: 0xb0
}

// 
// Start address: 0x17db50
void memo_BgDraw(_anon0* work)
{
	_anon7* tex;
	unsigned int cbp;
	// Line 1316, Address: 0x17db50, Func Offset: 0
	// Line 1317, Address: 0x17db54, Func Offset: 0x4
	// Line 1316, Address: 0x17db58, Func Offset: 0x8
	// Line 1317, Address: 0x17db5c, Func Offset: 0xc
	// Line 1316, Address: 0x17db60, Func Offset: 0x10
	// Line 1317, Address: 0x17db70, Func Offset: 0x20
	// Line 1318, Address: 0x17db7c, Func Offset: 0x2c
	// Line 1320, Address: 0x17db8c, Func Offset: 0x3c
	// Line 1323, Address: 0x17db94, Func Offset: 0x44
	// Line 1324, Address: 0x17dbac, Func Offset: 0x5c
	// Line 1325, Address: 0x17dbc0, Func Offset: 0x70
	// Line 1328, Address: 0x17dbcc, Func Offset: 0x7c
	// Line 1329, Address: 0x17dbe8, Func Offset: 0x98
	// Line 1330, Address: 0x17dbf4, Func Offset: 0xa4
	// Line 1329, Address: 0x17dbf8, Func Offset: 0xa8
	// Line 1330, Address: 0x17dbfc, Func Offset: 0xac
	// Line 1332, Address: 0x17dc08, Func Offset: 0xb8
	// Line 1333, Address: 0x17dc20, Func Offset: 0xd0
	// Line 1334, Address: 0x17dc34, Func Offset: 0xe4
	// Line 1337, Address: 0x17dc40, Func Offset: 0xf0
	// Line 1339, Address: 0x17dc4c, Func Offset: 0xfc
	// Line 1341, Address: 0x17dc58, Func Offset: 0x108
	// Line 1343, Address: 0x17dc64, Func Offset: 0x114
	// Line 1344, Address: 0x17dc6c, Func Offset: 0x11c
	// Line 1347, Address: 0x17dc70, Func Offset: 0x120
	// Line 1348, Address: 0x17dc80, Func Offset: 0x130
	// Line 1350, Address: 0x17dc98, Func Offset: 0x148
	// Line 1352, Address: 0x17dcac, Func Offset: 0x15c
	// Line 1354, Address: 0x17dcb0, Func Offset: 0x160
	// Line 1358, Address: 0x17dcc0, Func Offset: 0x170
	// Line 1359, Address: 0x17dcc8, Func Offset: 0x178
	// Line 1360, Address: 0x17dcd0, Func Offset: 0x180
	// Line 1361, Address: 0x17dcd8, Func Offset: 0x188
	// Line 1362, Address: 0x17dce0, Func Offset: 0x190
	// Line 1367, Address: 0x17dce8, Func Offset: 0x198
	// Line 1368, Address: 0x17dd08, Func Offset: 0x1b8
	// Line 1371, Address: 0x17dd10, Func Offset: 0x1c0
	// Line 1372, Address: 0x17dd18, Func Offset: 0x1c8
	// Func End, Address: 0x17dd30, Func Offset: 0x1e0
}

// 
// Start address: 0x17dd30
int memo_Exec(_anon0* work)
{
	int rtv;
	_sfMenuObj* obj;
	int fade_speed;
	int goto_map_flag;
	// Line 1376, Address: 0x17dd30, Func Offset: 0
	// Line 1378, Address: 0x17dd44, Func Offset: 0x14
	// Line 1379, Address: 0x17dd4c, Func Offset: 0x1c
	// Line 1396, Address: 0x17dd54, Func Offset: 0x24
	// Line 1397, Address: 0x17dd58, Func Offset: 0x28
	// Line 1396, Address: 0x17dd5c, Func Offset: 0x2c
	// Line 1397, Address: 0x17dd60, Func Offset: 0x30
	// Line 1396, Address: 0x17dd64, Func Offset: 0x34
	// Line 1397, Address: 0x17dd70, Func Offset: 0x40
	// Line 1399, Address: 0x17dda8, Func Offset: 0x78
	// Line 1400, Address: 0x17ddac, Func Offset: 0x7c
	// Line 1401, Address: 0x17ddbc, Func Offset: 0x8c
	// Line 1404, Address: 0x17de24, Func Offset: 0xf4
	// Line 1405, Address: 0x17de28, Func Offset: 0xf8
	// Line 1407, Address: 0x17de38, Func Offset: 0x108
	// Line 1410, Address: 0x17de58, Func Offset: 0x128
	// Line 1412, Address: 0x17de64, Func Offset: 0x134
	// Line 1413, Address: 0x17de68, Func Offset: 0x138
	// Line 1414, Address: 0x17decc, Func Offset: 0x19c
	// Line 1416, Address: 0x17ded8, Func Offset: 0x1a8
	// Line 1417, Address: 0x17df40, Func Offset: 0x210
	// Line 1420, Address: 0x17df44, Func Offset: 0x214
	// Line 1422, Address: 0x17df4c, Func Offset: 0x21c
	// Line 1423, Address: 0x17df50, Func Offset: 0x220
	// Line 1425, Address: 0x17df54, Func Offset: 0x224
	// Line 1428, Address: 0x17df88, Func Offset: 0x258
	// Line 1429, Address: 0x17df90, Func Offset: 0x260
	// Line 1430, Address: 0x17dff4, Func Offset: 0x2c4
	// Line 1431, Address: 0x17dffc, Func Offset: 0x2cc
	// Line 1433, Address: 0x17e000, Func Offset: 0x2d0
	// Line 1434, Address: 0x17e008, Func Offset: 0x2d8
	// Line 1435, Address: 0x17e06c, Func Offset: 0x33c
	// Line 1436, Address: 0x17e074, Func Offset: 0x344
	// Line 1438, Address: 0x17e078, Func Offset: 0x348
	// Line 1439, Address: 0x17e080, Func Offset: 0x350
	// Line 1440, Address: 0x17e08c, Func Offset: 0x35c
	// Line 1443, Address: 0x17e0ec, Func Offset: 0x3bc
	// Line 1445, Address: 0x17e0f4, Func Offset: 0x3c4
	// Line 1447, Address: 0x17e0f8, Func Offset: 0x3c8
	// Line 1449, Address: 0x17e100, Func Offset: 0x3d0
	// Line 1452, Address: 0x17e114, Func Offset: 0x3e4
	// Line 1450, Address: 0x17e118, Func Offset: 0x3e8
	// Line 1452, Address: 0x17e11c, Func Offset: 0x3ec
	// Line 1454, Address: 0x17e174, Func Offset: 0x444
	// Line 1456, Address: 0x17e17c, Func Offset: 0x44c
	// Line 1457, Address: 0x17e180, Func Offset: 0x450
	// Line 1458, Address: 0x17e1a4, Func Offset: 0x474
	// Line 1460, Address: 0x17e1a8, Func Offset: 0x478
	// Line 1461, Address: 0x17e1b0, Func Offset: 0x480
	// Line 1462, Address: 0x17e1b4, Func Offset: 0x484
	// Line 1461, Address: 0x17e1b8, Func Offset: 0x488
	// Line 1462, Address: 0x17e1bc, Func Offset: 0x48c
	// Line 1463, Address: 0x17e21c, Func Offset: 0x4ec
	// Line 1464, Address: 0x17e224, Func Offset: 0x4f4
	// Line 1466, Address: 0x17e228, Func Offset: 0x4f8
	// Line 1467, Address: 0x17e230, Func Offset: 0x500
	// Line 1468, Address: 0x17e23c, Func Offset: 0x50c
	// Line 1471, Address: 0x17e29c, Func Offset: 0x56c
	// Line 1473, Address: 0x17e2a4, Func Offset: 0x574
	// Line 1474, Address: 0x17e2a8, Func Offset: 0x578
	// Line 1475, Address: 0x17e2b8, Func Offset: 0x588
	// Line 1478, Address: 0x17e2c0, Func Offset: 0x590
	// Line 1479, Address: 0x17e2c4, Func Offset: 0x594
	// Line 1478, Address: 0x17e2c8, Func Offset: 0x598
	// Line 1477, Address: 0x17e2cc, Func Offset: 0x59c
	// Line 1480, Address: 0x17e2d0, Func Offset: 0x5a0
	// Line 1483, Address: 0x17e2d8, Func Offset: 0x5a8
	// Line 1482, Address: 0x17e2dc, Func Offset: 0x5ac
	// Line 1485, Address: 0x17e2e0, Func Offset: 0x5b0
	// Line 1486, Address: 0x17e2f4, Func Offset: 0x5c4
	// Line 1487, Address: 0x17e2f8, Func Offset: 0x5c8
	// Line 1489, Address: 0x17e308, Func Offset: 0x5d8
	// Line 1491, Address: 0x17e310, Func Offset: 0x5e0
	// Line 1495, Address: 0x17e314, Func Offset: 0x5e4
	// Line 1497, Address: 0x17e318, Func Offset: 0x5e8
	// Line 1499, Address: 0x17e320, Func Offset: 0x5f0
	// Line 1497, Address: 0x17e324, Func Offset: 0x5f4
	// Line 1500, Address: 0x17e330, Func Offset: 0x600
	// Func End, Address: 0x17e344, Func Offset: 0x614
}

// 
// Start address: 0x17e350
int memo_Destruct(_anon0* work)
{
	// Line 1504, Address: 0x17e350, Func Offset: 0
	// Line 1505, Address: 0x17e358, Func Offset: 0x8
	// Line 1507, Address: 0x17e360, Func Offset: 0x10
	// Line 1506, Address: 0x17e364, Func Offset: 0x14
	// Line 1507, Address: 0x17e368, Func Offset: 0x18
	// Func End, Address: 0x17e370, Func Offset: 0x20
}

// 
// Start address: 0x17e370
void miscMemoInit()
{
	// Line 1517, Address: 0x17e370, Func Offset: 0
	// Line 1518, Address: 0x17e374, Func Offset: 0x4
	// Line 1517, Address: 0x17e378, Func Offset: 0x8
	// Line 1518, Address: 0x17e37c, Func Offset: 0xc
	// Line 1519, Address: 0x17e38c, Func Offset: 0x1c
	// Line 1520, Address: 0x17e398, Func Offset: 0x28
	// Func End, Address: 0x17e3a4, Func Offset: 0x34
}

// 
// Start address: 0x17e3b0
int miscMemoMain()
{
	int rtv;
	int f_rtv;
	// Line 1530, Address: 0x17e3b0, Func Offset: 0
	// Line 1535, Address: 0x17e3b4, Func Offset: 0x4
	// Line 1530, Address: 0x17e3b8, Func Offset: 0x8
	// Line 1534, Address: 0x17e3bc, Func Offset: 0xc
	// Line 1530, Address: 0x17e3c0, Func Offset: 0x10
	// Line 1535, Address: 0x17e3c4, Func Offset: 0x14
	// Line 1534, Address: 0x17e3c8, Func Offset: 0x18
	// Line 1535, Address: 0x17e3cc, Func Offset: 0x1c
	// Line 1534, Address: 0x17e3d0, Func Offset: 0x20
	// Line 1535, Address: 0x17e3dc, Func Offset: 0x2c
	// Line 1536, Address: 0x17e414, Func Offset: 0x64
	// Line 1537, Address: 0x17e418, Func Offset: 0x68
	// Line 1538, Address: 0x17e438, Func Offset: 0x88
	// Line 1537, Address: 0x17e43c, Func Offset: 0x8c
	// Line 1538, Address: 0x17e440, Func Offset: 0x90
	// Line 1540, Address: 0x17e48c, Func Offset: 0xdc
	// Line 1541, Address: 0x17e494, Func Offset: 0xe4
	// Line 1542, Address: 0x17e498, Func Offset: 0xe8
	// Line 1543, Address: 0x17e4ac, Func Offset: 0xfc
	// Line 1544, Address: 0x17e4cc, Func Offset: 0x11c
	// Line 1543, Address: 0x17e4d0, Func Offset: 0x120
	// Line 1544, Address: 0x17e4d4, Func Offset: 0x124
	// Line 1545, Address: 0x17e51c, Func Offset: 0x16c
	// Line 1546, Address: 0x17e520, Func Offset: 0x170
	// Line 1547, Address: 0x17e52c, Func Offset: 0x17c
	// Line 1548, Address: 0x17e534, Func Offset: 0x184
	// Line 1549, Address: 0x17e538, Func Offset: 0x188
	// Line 1550, Address: 0x17e544, Func Offset: 0x194
	// Line 1552, Address: 0x17e54c, Func Offset: 0x19c
	// Line 1553, Address: 0x17e550, Func Offset: 0x1a0
	// Line 1555, Address: 0x17e558, Func Offset: 0x1a8
	// Line 1553, Address: 0x17e55c, Func Offset: 0x1ac
	// Line 1556, Address: 0x17e568, Func Offset: 0x1b8
	// Func End, Address: 0x17e578, Func Offset: 0x1c8
}

