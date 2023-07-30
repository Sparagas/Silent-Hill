typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _sfMenuObj;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _GAME_WORK;
typedef struct _sfMenuObjRect;
typedef struct _anon6;
typedef struct sfObj;
typedef union _anon7;
typedef struct EventFlag;
typedef enum PlayerExtStatus : unsigned char;
typedef enum _enum_0 : unsigned char;
typedef enum _enum_1 : unsigned char;
typedef enum _enum_2 : unsigned char;
typedef struct _anon8;
typedef enum EileenArmsTypeNo : unsigned char;
typedef struct _anon9;
typedef enum GameItem : unsigned char;
typedef struct _anon10;
typedef struct _anon11;

typedef void(*type_7)(sfObj*);
typedef void(*type_11)(sfObj*);

typedef int type_0[1];
typedef _anon8 type_1[2];
typedef _anon5 type_2[12];
typedef int type_3[1];
typedef int type_4[1];
typedef int type_5[1];
typedef _anon7 type_6[256];
typedef unsigned int type_8[4];
typedef GameItem type_9[6];
typedef unsigned char type_10[320];
typedef _anon0 type_12[10];
typedef float type_13[4];
typedef float type_14[4];
typedef float type_15[4][4];
typedef short type_16[2];
typedef unsigned char type_17[256];
typedef unsigned short type_18[2];
typedef char type_19[4];
typedef unsigned char type_20[4];
typedef float type_21[1];
typedef int type_22[1];
typedef int type_23[1];
typedef int type_24[1];
typedef float type_25[4];
typedef int type_26[1];
typedef unsigned char type_27[2];

struct _anon0
{
	_anon4 img;
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

struct _anon1
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

struct _anon2
{
	unsigned long reg_alpha;
	unsigned long reg_prim;
	unsigned long reg_test;
	_anon9 tex_data;
	_anon11 clut_data;
	unsigned short ot;
	unsigned short z;
};

struct _anon3
{
	_sfMenuObj* cur;
	_sfMenuObj* pre;
	_sfMenuObj* top;
	_enum_0 type;
	unsigned short option;
	unsigned short num;
	unsigned short timer;
	unsigned char step;
	_anon10 scrl;
	_sfMenuObjRect* atari_top;
	float cursor_x;
	float cursor_y;
};

struct _sfMenuObj
{
	_sfMenuObjRect* atari;
	short id;
	unsigned short flag;
	_sfMenuObj* next;
	_sfMenuObj* prev;
};

struct _anon4
{
	_anon2 base;
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

struct _anon5
{
	GameItem driver;
	GameItem broken_driver;
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

struct _sfMenuObjRect
{
	int x;
	int y;
	int w;
	int h;
	_sfMenuObjRect* next;
	_sfMenuObjRect* prev;
};

struct _anon6
{
	int num;
	unsigned short cur_id;
	unsigned short pre_id;
	int disp_mode;
	int step;
	int sub_step;
	int timer;
	int flag;
	int item_index;
	GameItem used_item_kind;
	int hide_timer;
	unsigned char is_hidden;
	unsigned char is_handle_ok;
	unsigned char is_cursor_update;
	_anon3 mng;
	_anon0 items[10];
	unsigned int saint_medallion_timer;
	unsigned char is_saint_medallion_use;
	unsigned char is_saint_medallion_se;
	char is_eileen_weapon_equip;
	GameItem eil_weapon;
	GameItem pre_weapon;
};

struct sfObj
{
	_anon7 fwork[256];
	_anon7* work;
	void(*func)(sfObj*);
	_anon7* work_pt0;
	_anon7* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon7* sys_work;
	_anon7* scene_work;
	_anon7* event_work;
	_anon7* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

union _anon7
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

enum _enum_2 : unsigned char
{
	ITEM_ATTR_UNKNOWN,
	ITEM_ATTR_WEAPON,
	ITEM_ATTR_EIL_WEAPON,
	ITEM_ATTR_JOREI,
	ITEM_ATTR_RECOVERY,
	ITEM_ATTR_KEY,
	ITEM_ATTR_MEMO
};

struct _anon8
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

enum EileenArmsTypeNo : unsigned char
{
	EIL_ARMS_NONE,
	EIL_ARMS_HANDBAG,
	EIL_ARMS_CLUB,
	EIL_ARMS_ROD,
	EIL_ARMS_CHAIN,
	EIL_ARMS_GUN,
	EIL_ARMS_MAX
};

struct _anon9
{
	_anon1* tex;
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

struct _anon10
{
	int dir;
	unsigned short flag;
	unsigned short disp_num;
};

struct _anon11
{
	unsigned int cbp;
	unsigned int ofs;
};

int force_draw_off_count;
float itemmenu_ofs_y;
float base_alpha_ratio;
GameItem eil_weapons[6];
unsigned char item_flag_tbl[256];
_anon6 item_menu;
_GAME_WORK gamew;
_anon8 player_ext_info[2];
EventFlag event_flag;

GameItem miscItemmenuEileenArmToGameItem(EileenArmsTypeNo no);
void miscItemmenuDispOn();
void miscItemmenuDispOff();
int miscItemmenuIsDisp();
void miscItemmenuDispActive();
void miscItemmenuDispNotActive();
int miscItemmenuIsActive();
int miscItemmenuIsHidden();
void miscItemmenuHandleLock();
void miscItemmenuHandleUnlock();
void miscItemmenuSMTimerClear();
void miscItemmenuSMTimerInc();
unsigned int miscItemmenuGetSMTimer();
int miscItemmenuHideModeGet();
void miscItemmenuHideModeForceOff();
void miscItemmenuHideModeForceOn();
float get_ratio(int cnt, int max_cnt);
void miscItemmenuObjConstruct(_anon6* menu);
void ReflectWeapons(_anon0* iwk, GameItem kind);
void ReflectEileensWeapons(_anon0* iwk, GameItem kind);
void ReflectSaintMedallion(_anon0* iwk, int menu_no);
void miscItemmenuReflectPossession();
void miscItemmenuSetIcons_at_ItemErase(int item_no, GameItem use_item);
void miscItemmenuConstruct();
void miscItemmenuInit();
void miscItemmenuSetOfsY(int ofs_y);
void miscItemmenuSetDefaultOfsY();
int miscItemmenuGetOfsY();
unsigned short miscItemmenuGetMenuId();
GameItem miscItemmenuGetItemKind();
_sfMenuObjRect miscItemmenuGetRect(unsigned short menu_id);
_enum_1 miscItemmenuPadToCmd();
void BuruburuGo(_anon6* menu);
void miscItemmenuForceBuruburuGo();
void BuruburuClear(_anon6* menu);
unsigned int GetAttrCol(_enum_2 attr);
int IsPlayerAlive();
void miscItemmenuHandle();
int miscItemmenuSlide(int start_index, int dir, int cur_cnt, int max_cnt);
int miscItemmenuSlide_box(int start_index, int cur_cnt, int max_cnt);
int IsPad(unsigned int pad);
int miscItemmenuHideCheck(_anon6* menu);
void miscItemmenuBlinkUpdate(_anon6* menu);
void miscItemmenuUpdatePossession(_anon6* menu);
int miscItemmenuUpdate_Idle(_anon6* menu);
int miscItemmenuUpdate_Add(_anon6* menu);
int miscItemmenuUpdate_Use(_anon6* menu);
int miscItemmenuUpdate_Rob(_anon6* menu);
int miscItemmenuUpdate_Hide(_anon6* menu);
int miscItemmenuUpdate_BoxAdd(_anon6* menu);
int miscItemmenuUpdate_BoxDel();
void miscItemmenuDrawUpdate(_anon6* menu);
void miscItemmenuDrawItems(_anon6* menu);
void miscItemmenuUpdate0();
void miscItemmenuUpdate();
void miscItemmenuUpdate_Box();
void miscItemmenuDraw();
void miscItemmenuEquipWeapon(int menu_id);
void miscItemmenuEquipEileenWeapon(GameItem kind);
void miscItemmenuUnequipEileenWeapon();
void miscItemmenuEquipSaintMedallion(int menu_id);
GameItem miscItemmenuGetEquipWeaponKind();
int item_check_is_info_ok(GameItem kind);
void miscItemmenuGetItem(GameItem item_id);
void miscItemmenuEraseItem(int menu_id);
void miscItemmenuEraseItemByKind(GameItem kind);
void miscItemmenuRobItem(int menu_id);
float miscItemmenuDecreaseDurability(GameItem kind);
int miscItemmenuSearch(GameItem kind);
void miscItemmenuReload(GameItem weapon, int menu_id);
void miscItemmenuBoxToMenu(GameItem kind);
void miscItemmenuMenuToBox(int menu_id);
void miscItemmenuSetIdleStep();
int miscItemmenuHaveAnItem(GameItem kind);
void miscItemmenuCursorForceSet(int menu_id);

// 
// Start address: 0x1e5360
GameItem miscItemmenuEileenArmToGameItem(EileenArmsTypeNo no)
{
	GameItem rtv;
	// Line 275, Address: 0x1e5364, Func Offset: 0x4
	// Line 276, Address: 0x1e5378, Func Offset: 0x18
	// Line 279, Address: 0x1e5388, Func Offset: 0x28
	// Func End, Address: 0x1e5390, Func Offset: 0x30
}

// 
// Start address: 0x1e5390
void miscItemmenuDispOn()
{
	// Line 327, Address: 0x1e5390, Func Offset: 0
	// Func End, Address: 0x1e53a8, Func Offset: 0x18
}

// 
// Start address: 0x1e53b0
void miscItemmenuDispOff()
{
	// Line 330, Address: 0x1e53b0, Func Offset: 0
	// Line 331, Address: 0x1e53b4, Func Offset: 0x4
	// Line 330, Address: 0x1e53b8, Func Offset: 0x8
	// Line 331, Address: 0x1e53bc, Func Offset: 0xc
	// Line 333, Address: 0x1e53cc, Func Offset: 0x1c
	// Line 335, Address: 0x1e53d4, Func Offset: 0x24
	// Line 337, Address: 0x1e53e4, Func Offset: 0x34
	// Line 338, Address: 0x1e53f0, Func Offset: 0x40
	// Line 339, Address: 0x1e53fc, Func Offset: 0x4c
	// Line 341, Address: 0x1e5408, Func Offset: 0x58
	// Func End, Address: 0x1e5414, Func Offset: 0x64
}

// 
// Start address: 0x1e5420
int miscItemmenuIsDisp()
{
	// Line 344, Address: 0x1e5420, Func Offset: 0
	// Func End, Address: 0x1e5430, Func Offset: 0x10
}

// 
// Start address: 0x1e5430
void miscItemmenuDispActive()
{
	// Line 347, Address: 0x1e5430, Func Offset: 0
	// Func End, Address: 0x1e5448, Func Offset: 0x18
}

// 
// Start address: 0x1e5450
void miscItemmenuDispNotActive()
{
	// Line 349, Address: 0x1e5450, Func Offset: 0
	// Func End, Address: 0x1e546c, Func Offset: 0x1c
}

// 
// Start address: 0x1e5470
int miscItemmenuIsActive()
{
	// Line 351, Address: 0x1e5470, Func Offset: 0
	// Func End, Address: 0x1e5480, Func Offset: 0x10
}

// 
// Start address: 0x1e5480
int miscItemmenuIsHidden()
{
	int rtv;
	// Line 358, Address: 0x1e5480, Func Offset: 0
	// Line 364, Address: 0x1e54b8, Func Offset: 0x38
	// Line 366, Address: 0x1e54bc, Func Offset: 0x3c
	// Line 368, Address: 0x1e54c0, Func Offset: 0x40
	// Func End, Address: 0x1e54c8, Func Offset: 0x48
}

// 
// Start address: 0x1e54d0
void miscItemmenuHandleLock()
{
	// Line 373, Address: 0x1e54d0, Func Offset: 0
	// Line 374, Address: 0x1e54d4, Func Offset: 0x4
	// Func End, Address: 0x1e54dc, Func Offset: 0xc
}

// 
// Start address: 0x1e54e0
void miscItemmenuHandleUnlock()
{
	// Line 379, Address: 0x1e54e0, Func Offset: 0
	// Line 380, Address: 0x1e54e8, Func Offset: 0x8
	// Func End, Address: 0x1e54f0, Func Offset: 0x10
}

// 
// Start address: 0x1e54f0
void miscItemmenuSMTimerClear()
{
	// Line 396, Address: 0x1e54f0, Func Offset: 0
	// Line 397, Address: 0x1e54f4, Func Offset: 0x4
	// Func End, Address: 0x1e54fc, Func Offset: 0xc
}

// 
// Start address: 0x1e5500
void miscItemmenuSMTimerInc()
{
	// Line 400, Address: 0x1e5500, Func Offset: 0
	// Line 401, Address: 0x1e5510, Func Offset: 0x10
	// Func End, Address: 0x1e5518, Func Offset: 0x18
}

// 
// Start address: 0x1e5520
unsigned int miscItemmenuGetSMTimer()
{
	// Line 404, Address: 0x1e5520, Func Offset: 0
	// Line 405, Address: 0x1e5524, Func Offset: 0x4
	// Func End, Address: 0x1e552c, Func Offset: 0xc
}

// 
// Start address: 0x1e5530
int miscItemmenuHideModeGet()
{
	// Line 451, Address: 0x1e5530, Func Offset: 0
	// Func End, Address: 0x1e5550, Func Offset: 0x20
}

// 
// Start address: 0x1e5550
void miscItemmenuHideModeForceOff()
{
	// Line 459, Address: 0x1e5550, Func Offset: 0
	// Line 460, Address: 0x1e5554, Func Offset: 0x4
	// Line 459, Address: 0x1e5558, Func Offset: 0x8
	// Line 460, Address: 0x1e555c, Func Offset: 0xc
	// Line 461, Address: 0x1e5560, Func Offset: 0x10
	// Line 463, Address: 0x1e5580, Func Offset: 0x30
	// Line 464, Address: 0x1e5590, Func Offset: 0x40
	// Line 467, Address: 0x1e55a0, Func Offset: 0x50
	// Func End, Address: 0x1e55ac, Func Offset: 0x5c
}

// 
// Start address: 0x1e55b0
void miscItemmenuHideModeForceOn()
{
	// Line 474, Address: 0x1e55b0, Func Offset: 0
	// Line 475, Address: 0x1e55b8, Func Offset: 0x8
	// Line 476, Address: 0x1e55c8, Func Offset: 0x18
	// Line 475, Address: 0x1e55d4, Func Offset: 0x24
	// Line 477, Address: 0x1e55ec, Func Offset: 0x3c
	// Func End, Address: 0x1e55fc, Func Offset: 0x4c
}

// 
// Start address: 0x1e5600
float get_ratio(int cnt, int max_cnt)
{
	float t;
	// Line 484, Address: 0x1e5600, Func Offset: 0
	// Line 486, Address: 0x1e5604, Func Offset: 0x4
	// Line 487, Address: 0x1e5618, Func Offset: 0x18
	// Line 488, Address: 0x1e5630, Func Offset: 0x30
	// Line 489, Address: 0x1e5634, Func Offset: 0x34
	// Line 488, Address: 0x1e5638, Func Offset: 0x38
	// Line 489, Address: 0x1e563c, Func Offset: 0x3c
	// Line 488, Address: 0x1e5640, Func Offset: 0x40
	// Line 489, Address: 0x1e564c, Func Offset: 0x4c
	// Line 490, Address: 0x1e5678, Func Offset: 0x78
	// Func End, Address: 0x1e5680, Func Offset: 0x80
}

// 
// Start address: 0x1e5680
void miscItemmenuObjConstruct(_anon6* menu)
{
	_anon0* iwk;
	int i;
	_sfMenuObjRect rect;
	// Line 496, Address: 0x1e5680, Func Offset: 0
	// Line 500, Address: 0x1e5690, Func Offset: 0x10
	// Line 496, Address: 0x1e5694, Func Offset: 0x14
	// Line 500, Address: 0x1e5698, Func Offset: 0x18
	// Line 496, Address: 0x1e569c, Func Offset: 0x1c
	// Line 497, Address: 0x1e56a8, Func Offset: 0x28
	// Line 496, Address: 0x1e56ac, Func Offset: 0x2c
	// Line 500, Address: 0x1e56b0, Func Offset: 0x30
	// Line 496, Address: 0x1e56b4, Func Offset: 0x34
	// Line 500, Address: 0x1e56c8, Func Offset: 0x48
	// Line 504, Address: 0x1e56d0, Func Offset: 0x50
	// Line 508, Address: 0x1e56dc, Func Offset: 0x5c
	// Line 505, Address: 0x1e56e0, Func Offset: 0x60
	// Line 504, Address: 0x1e56e4, Func Offset: 0x64
	// Line 505, Address: 0x1e56e8, Func Offset: 0x68
	// Line 508, Address: 0x1e56ec, Func Offset: 0x6c
	// Line 511, Address: 0x1e56f8, Func Offset: 0x78
	// Line 514, Address: 0x1e5734, Func Offset: 0xb4
	// Line 515, Address: 0x1e5760, Func Offset: 0xe0
	// Line 517, Address: 0x1e5764, Func Offset: 0xe4
	// Line 516, Address: 0x1e5768, Func Offset: 0xe8
	// Line 517, Address: 0x1e576c, Func Offset: 0xec
	// Line 516, Address: 0x1e5770, Func Offset: 0xf0
	// Line 517, Address: 0x1e5774, Func Offset: 0xf4
	// Line 518, Address: 0x1e577c, Func Offset: 0xfc
	// Func End, Address: 0x1e57ac, Func Offset: 0x12c
}

// 
// Start address: 0x1e57b0
void ReflectWeapons(_anon0* iwk, GameItem kind)
{
	GameItem weapon;
	int i;
	_anon5 d[12];
	// Line 523, Address: 0x1e57b0, Func Offset: 0
	// Line 526, Address: 0x1e57b4, Func Offset: 0x4
	// Line 523, Address: 0x1e57b8, Func Offset: 0x8
	// Line 526, Address: 0x1e57bc, Func Offset: 0xc
	// Line 530, Address: 0x1e57d0, Func Offset: 0x20
	// Line 532, Address: 0x1e57d8, Func Offset: 0x28
	// Line 533, Address: 0x1e57e8, Func Offset: 0x38
	// Line 559, Address: 0x1e57f0, Func Offset: 0x40
	// Line 560, Address: 0x1e5800, Func Offset: 0x50
	// Line 562, Address: 0x1e5818, Func Offset: 0x68
	// Line 563, Address: 0x1e5830, Func Offset: 0x80
	// Line 565, Address: 0x1e5838, Func Offset: 0x88
	// Line 567, Address: 0x1e5848, Func Offset: 0x98
	// Func End, Address: 0x1e5850, Func Offset: 0xa0
}

// 
// Start address: 0x1e5850
void ReflectEileensWeapons(_anon0* iwk, GameItem kind)
{
	EileenArmsTypeNo arm;
	GameItem e_weapon;
	// Line 571, Address: 0x1e5850, Func Offset: 0
	// Line 572, Address: 0x1e5864, Func Offset: 0x14
	// Line 573, Address: 0x1e586c, Func Offset: 0x1c
	// Line 575, Address: 0x1e5878, Func Offset: 0x28
	// Line 573, Address: 0x1e587c, Func Offset: 0x2c
	// Line 575, Address: 0x1e5880, Func Offset: 0x30
	// Line 577, Address: 0x1e5890, Func Offset: 0x40
	// Line 581, Address: 0x1e58ac, Func Offset: 0x5c
	// Line 582, Address: 0x1e58b4, Func Offset: 0x64
	// Line 584, Address: 0x1e58b8, Func Offset: 0x68
	// Line 586, Address: 0x1e58c4, Func Offset: 0x74
	// Line 588, Address: 0x1e58d4, Func Offset: 0x84
	// Line 589, Address: 0x1e58e4, Func Offset: 0x94
	// Line 592, Address: 0x1e58f0, Func Offset: 0xa0
	// Line 594, Address: 0x1e5904, Func Offset: 0xb4
	// Line 595, Address: 0x1e5908, Func Offset: 0xb8
	// Func End, Address: 0x1e591c, Func Offset: 0xcc
}

// 
// Start address: 0x1e5920
void ReflectSaintMedallion(_anon0* iwk, int menu_no)
{
	// Line 599, Address: 0x1e5920, Func Offset: 0
	// Line 600, Address: 0x1e5934, Func Offset: 0x14
	// Line 602, Address: 0x1e5954, Func Offset: 0x34
	// Line 603, Address: 0x1e5964, Func Offset: 0x44
	// Line 605, Address: 0x1e5970, Func Offset: 0x50
	// Line 606, Address: 0x1e5984, Func Offset: 0x64
	// Line 607, Address: 0x1e5988, Func Offset: 0x68
	// Func End, Address: 0x1e599c, Func Offset: 0x7c
}

// 
// Start address: 0x1e59a0
void miscItemmenuReflectPossession()
{
	int i;
	_anon0* iwk;
	float x;
	float y;
	GameItem kind;
	// Line 611, Address: 0x1e59a0, Func Offset: 0
	// Line 615, Address: 0x1e59a4, Func Offset: 0x4
	// Line 611, Address: 0x1e59a8, Func Offset: 0x8
	// Line 616, Address: 0x1e59b4, Func Offset: 0x14
	// Line 611, Address: 0x1e59b8, Func Offset: 0x18
	// Line 613, Address: 0x1e59bc, Func Offset: 0x1c
	// Line 611, Address: 0x1e59c0, Func Offset: 0x20
	// Line 613, Address: 0x1e59c4, Func Offset: 0x24
	// Line 611, Address: 0x1e59c8, Func Offset: 0x28
	// Line 616, Address: 0x1e59cc, Func Offset: 0x2c
	// Line 617, Address: 0x1e59d8, Func Offset: 0x38
	// Line 618, Address: 0x1e59ec, Func Offset: 0x4c
	// Line 619, Address: 0x1e5a00, Func Offset: 0x60
	// Line 618, Address: 0x1e5a04, Func Offset: 0x64
	// Line 619, Address: 0x1e5a0c, Func Offset: 0x6c
	// Line 621, Address: 0x1e5a14, Func Offset: 0x74
	// Line 622, Address: 0x1e5a58, Func Offset: 0xb8
	// Line 623, Address: 0x1e5a68, Func Offset: 0xc8
	// Line 624, Address: 0x1e5a74, Func Offset: 0xd4
	// Line 626, Address: 0x1e5aa0, Func Offset: 0x100
	// Line 629, Address: 0x1e5aa8, Func Offset: 0x108
	// Line 630, Address: 0x1e5ac0, Func Offset: 0x120
	// Line 631, Address: 0x1e5ad8, Func Offset: 0x138
	// Line 633, Address: 0x1e5ae8, Func Offset: 0x148
	// Line 634, Address: 0x1e5af0, Func Offset: 0x150
	// Line 638, Address: 0x1e5b24, Func Offset: 0x184
	// Line 639, Address: 0x1e5b28, Func Offset: 0x188
	// Line 642, Address: 0x1e5b38, Func Offset: 0x198
	// Line 643, Address: 0x1e5b40, Func Offset: 0x1a0
	// Line 645, Address: 0x1e5b50, Func Offset: 0x1b0
	// Line 646, Address: 0x1e5b58, Func Offset: 0x1b8
	// Line 647, Address: 0x1e5b60, Func Offset: 0x1c0
	// Line 649, Address: 0x1e5b70, Func Offset: 0x1d0
	// Line 652, Address: 0x1e5b78, Func Offset: 0x1d8
	// Line 653, Address: 0x1e5b84, Func Offset: 0x1e4
	// Line 654, Address: 0x1e5b90, Func Offset: 0x1f0
	// Line 655, Address: 0x1e5ba0, Func Offset: 0x200
	// Line 657, Address: 0x1e5ba8, Func Offset: 0x208
	// Line 658, Address: 0x1e5bbc, Func Offset: 0x21c
	// Line 659, Address: 0x1e5bc0, Func Offset: 0x220
	// Line 660, Address: 0x1e5bc4, Func Offset: 0x224
	// Line 661, Address: 0x1e5bd4, Func Offset: 0x234
	// Func End, Address: 0x1e5bf4, Func Offset: 0x254
}

// 
// Start address: 0x1e5c00
void miscItemmenuSetIcons_at_ItemErase(int item_no, GameItem use_item)
{
	int i;
	float x;
	float y;
	_anon0* iwk;
	float durability;
	GameItem kind;
	int index;
	// Line 709, Address: 0x1e5c00, Func Offset: 0
	// Line 716, Address: 0x1e5c04, Func Offset: 0x4
	// Line 709, Address: 0x1e5c08, Func Offset: 0x8
	// Line 716, Address: 0x1e5c1c, Func Offset: 0x1c
	// Line 709, Address: 0x1e5c20, Func Offset: 0x20
	// Line 712, Address: 0x1e5c2c, Func Offset: 0x2c
	// Line 709, Address: 0x1e5c30, Func Offset: 0x30
	// Line 713, Address: 0x1e5c3c, Func Offset: 0x3c
	// Line 716, Address: 0x1e5c40, Func Offset: 0x40
	// Line 718, Address: 0x1e5c48, Func Offset: 0x48
	// Line 719, Address: 0x1e5c64, Func Offset: 0x64
	// Line 722, Address: 0x1e5c68, Func Offset: 0x68
	// Line 726, Address: 0x1e5c70, Func Offset: 0x70
	// Line 727, Address: 0x1e5c80, Func Offset: 0x80
	// Line 729, Address: 0x1e5ca8, Func Offset: 0xa8
	// Line 730, Address: 0x1e5cb0, Func Offset: 0xb0
	// Line 731, Address: 0x1e5cbc, Func Offset: 0xbc
	// Line 733, Address: 0x1e5cc0, Func Offset: 0xc0
	// Line 734, Address: 0x1e5ccc, Func Offset: 0xcc
	// Line 736, Address: 0x1e5cd4, Func Offset: 0xd4
	// Line 734, Address: 0x1e5ce0, Func Offset: 0xe0
	// Line 736, Address: 0x1e5ce4, Func Offset: 0xe4
	// Line 737, Address: 0x1e5cec, Func Offset: 0xec
	// Line 739, Address: 0x1e5d08, Func Offset: 0x108
	// Line 740, Address: 0x1e5d48, Func Offset: 0x148
	// Line 742, Address: 0x1e5d58, Func Offset: 0x158
	// Line 743, Address: 0x1e5d64, Func Offset: 0x164
	// Line 744, Address: 0x1e5d74, Func Offset: 0x174
	// Line 746, Address: 0x1e5d80, Func Offset: 0x180
	// Line 747, Address: 0x1e5d94, Func Offset: 0x194
	// Line 748, Address: 0x1e5d98, Func Offset: 0x198
	// Line 749, Address: 0x1e5dc0, Func Offset: 0x1c0
	// Line 753, Address: 0x1e5dc8, Func Offset: 0x1c8
	// Line 755, Address: 0x1e5dd4, Func Offset: 0x1d4
	// Line 753, Address: 0x1e5de8, Func Offset: 0x1e8
	// Line 756, Address: 0x1e5dec, Func Offset: 0x1ec
	// Line 757, Address: 0x1e5e08, Func Offset: 0x208
	// Line 758, Address: 0x1e5e48, Func Offset: 0x248
	// Line 760, Address: 0x1e5e58, Func Offset: 0x258
	// Line 761, Address: 0x1e5e70, Func Offset: 0x270
	// Line 763, Address: 0x1e5e98, Func Offset: 0x298
	// Line 764, Address: 0x1e5e9c, Func Offset: 0x29c
	// Line 765, Address: 0x1e5eac, Func Offset: 0x2ac
	// Func End, Address: 0x1e5ed8, Func Offset: 0x2d8
}

// 
// Start address: 0x1e5ee0
void miscItemmenuConstruct()
{
	// Line 775, Address: 0x1e5ee0, Func Offset: 0
	// Line 776, Address: 0x1e5ee4, Func Offset: 0x4
	// Line 775, Address: 0x1e5ee8, Func Offset: 0x8
	// Line 776, Address: 0x1e5eec, Func Offset: 0xc
	// Line 779, Address: 0x1e5efc, Func Offset: 0x1c
	// Line 780, Address: 0x1e5f08, Func Offset: 0x28
	// Line 782, Address: 0x1e5f14, Func Offset: 0x34
	// Line 783, Address: 0x1e5f1c, Func Offset: 0x3c
	// Func End, Address: 0x1e5f28, Func Offset: 0x48
}

// 
// Start address: 0x1e5f30
void miscItemmenuInit()
{
	// Line 790, Address: 0x1e5f30, Func Offset: 0
	// Line 791, Address: 0x1e5f34, Func Offset: 0x4
	// Line 790, Address: 0x1e5f38, Func Offset: 0x8
	// Line 791, Address: 0x1e5f3c, Func Offset: 0xc
	// Line 793, Address: 0x1e5f40, Func Offset: 0x10
	// Line 794, Address: 0x1e5f48, Func Offset: 0x18
	// Line 796, Address: 0x1e5f4c, Func Offset: 0x1c
	// Line 798, Address: 0x1e5f54, Func Offset: 0x24
	// Line 800, Address: 0x1e5f64, Func Offset: 0x34
	// Line 801, Address: 0x1e5f68, Func Offset: 0x38
	// Line 803, Address: 0x1e5f70, Func Offset: 0x40
	// Line 804, Address: 0x1e5f78, Func Offset: 0x48
	// Line 806, Address: 0x1e5f84, Func Offset: 0x54
	// Line 807, Address: 0x1e5f8c, Func Offset: 0x5c
	// Line 810, Address: 0x1e5f94, Func Offset: 0x64
	// Line 811, Address: 0x1e5fa4, Func Offset: 0x74
	// Line 812, Address: 0x1e5fc4, Func Offset: 0x94
	// Line 814, Address: 0x1e5fc8, Func Offset: 0x98
	// Line 812, Address: 0x1e5fcc, Func Offset: 0x9c
	// Line 814, Address: 0x1e5fd0, Func Offset: 0xa0
	// Line 815, Address: 0x1e5fd8, Func Offset: 0xa8
	// Line 816, Address: 0x1e5fe0, Func Offset: 0xb0
	// Line 818, Address: 0x1e5fe8, Func Offset: 0xb8
	// Line 819, Address: 0x1e5ff0, Func Offset: 0xc0
	// Line 820, Address: 0x1e5ff8, Func Offset: 0xc8
	// Func End, Address: 0x1e6004, Func Offset: 0xd4
}

// 
// Start address: 0x1e6010
void miscItemmenuSetOfsY(int ofs_y)
{
	int i;
	_anon0* iwk;
	float x;
	float y;
	// Line 830, Address: 0x1e6010, Func Offset: 0
	// Line 826, Address: 0x1e6014, Func Offset: 0x4
	// Line 830, Address: 0x1e601c, Func Offset: 0xc
	// Line 826, Address: 0x1e6024, Func Offset: 0x14
	// Line 833, Address: 0x1e6034, Func Offset: 0x24
	// Line 828, Address: 0x1e6038, Func Offset: 0x28
	// Line 826, Address: 0x1e6040, Func Offset: 0x30
	// Line 833, Address: 0x1e6048, Func Offset: 0x38
	// Line 834, Address: 0x1e6050, Func Offset: 0x40
	// Line 835, Address: 0x1e6064, Func Offset: 0x54
	// Line 837, Address: 0x1e6080, Func Offset: 0x70
	// Line 839, Address: 0x1e60b4, Func Offset: 0xa4
	// Line 840, Address: 0x1e60f8, Func Offset: 0xe8
	// Line 841, Address: 0x1e60fc, Func Offset: 0xec
	// Line 842, Address: 0x1e610c, Func Offset: 0xfc
	// Func End, Address: 0x1e612c, Func Offset: 0x11c
}

// 
// Start address: 0x1e6130
void miscItemmenuSetDefaultOfsY()
{
	// Line 847, Address: 0x1e6130, Func Offset: 0
	// Func End, Address: 0x1e6138, Func Offset: 0x8
}

// 
// Start address: 0x1e6140
int miscItemmenuGetOfsY()
{
	// Line 853, Address: 0x1e6140, Func Offset: 0
	// Line 854, Address: 0x1e6150, Func Offset: 0x10
	// Func End, Address: 0x1e6158, Func Offset: 0x18
}

// 
// Start address: 0x1e6160
unsigned short miscItemmenuGetMenuId()
{
	// Line 863, Address: 0x1e6160, Func Offset: 0
	// Line 864, Address: 0x1e6164, Func Offset: 0x4
	// Func End, Address: 0x1e616c, Func Offset: 0xc
}

// 
// Start address: 0x1e6170
GameItem miscItemmenuGetItemKind()
{
	// Line 869, Address: 0x1e6170, Func Offset: 0
	// Func End, Address: 0x1e617c, Func Offset: 0xc
}

// 
// Start address: 0x1e6180
_sfMenuObjRect miscItemmenuGetRect(unsigned short menu_id)
{
	// Line 884, Address: 0x1e6180, Func Offset: 0
	// Func End, Address: 0x1e6194, Func Offset: 0x14
}

// 
// Start address: 0x1e61a0
_enum_1 miscItemmenuPadToCmd()
{
	_enum_1 cmd;
	// Line 894, Address: 0x1e61a0, Func Offset: 0
	// Line 897, Address: 0x1e61a4, Func Offset: 0x4
	// Line 894, Address: 0x1e61a8, Func Offset: 0x8
	// Line 897, Address: 0x1e61b0, Func Offset: 0x10
	// Line 898, Address: 0x1e61bc, Func Offset: 0x1c
	// Line 900, Address: 0x1e61d0, Func Offset: 0x30
	// Line 901, Address: 0x1e61d8, Func Offset: 0x38
	// Line 902, Address: 0x1e61ec, Func Offset: 0x4c
	// Line 906, Address: 0x1e61f0, Func Offset: 0x50
	// Line 907, Address: 0x1e61f4, Func Offset: 0x54
	// Func End, Address: 0x1e6204, Func Offset: 0x64
}

// 
// Start address: 0x1e6210
void BuruburuGo(_anon6* menu)
{
	int time;
	_anon0* iwk;
	// Line 912, Address: 0x1e6210, Func Offset: 0
	// Line 915, Address: 0x1e621c, Func Offset: 0xc
	// Line 918, Address: 0x1e6238, Func Offset: 0x28
	// Line 919, Address: 0x1e6254, Func Offset: 0x44
	// Line 920, Address: 0x1e6268, Func Offset: 0x58
	// Line 921, Address: 0x1e6278, Func Offset: 0x68
	// Func End, Address: 0x1e6288, Func Offset: 0x78
}

// 
// Start address: 0x1e6290
void miscItemmenuForceBuruburuGo()
{
	// Line 926, Address: 0x1e6290, Func Offset: 0
	// Func End, Address: 0x1e629c, Func Offset: 0xc
}

// 
// Start address: 0x1e62a0
void BuruburuClear(_anon6* menu)
{
	_anon0* iwk;
	int i;
	// Line 933, Address: 0x1e62a0, Func Offset: 0
	// Line 936, Address: 0x1e62a4, Func Offset: 0x4
	// Line 937, Address: 0x1e62a8, Func Offset: 0x8
	// Line 939, Address: 0x1e62b8, Func Offset: 0x18
	// Line 938, Address: 0x1e62c0, Func Offset: 0x20
	// Line 939, Address: 0x1e62c4, Func Offset: 0x24
	// Line 940, Address: 0x1e62cc, Func Offset: 0x2c
	// Func End, Address: 0x1e62d4, Func Offset: 0x34
}

// 
// Start address: 0x1e62e0
unsigned int GetAttrCol(_enum_2 attr)
{
	unsigned int rtv;
	// Line 948, Address: 0x1e62e4, Func Offset: 0x4
	// Line 950, Address: 0x1e62ec, Func Offset: 0xc
	// Line 951, Address: 0x1e62f8, Func Offset: 0x18
	// Line 953, Address: 0x1e6304, Func Offset: 0x24
	// Line 955, Address: 0x1e6310, Func Offset: 0x30
	// Line 959, Address: 0x1e6318, Func Offset: 0x38
	// Func End, Address: 0x1e6320, Func Offset: 0x40
}

// 
// Start address: 0x1e6320
int IsPlayerAlive()
{
	// Line 964, Address: 0x1e6320, Func Offset: 0
	// Line 965, Address: 0x1e632c, Func Offset: 0xc
	// Func End, Address: 0x1e6334, Func Offset: 0x14
}

// 
// Start address: 0x1e6340
void miscItemmenuHandle()
{
	_enum_1 cmd;
	int cnt;
	GameItem kind;
	// Line 970, Address: 0x1e6340, Func Offset: 0
	// Line 971, Address: 0x1e6350, Func Offset: 0x10
	// Line 974, Address: 0x1e6358, Func Offset: 0x18
	// Line 976, Address: 0x1e6368, Func Offset: 0x28
	// Line 977, Address: 0x1e636c, Func Offset: 0x2c
	// Line 979, Address: 0x1e6370, Func Offset: 0x30
	// Line 980, Address: 0x1e637c, Func Offset: 0x3c
	// Line 982, Address: 0x1e639c, Func Offset: 0x5c
	// Line 986, Address: 0x1e63a8, Func Offset: 0x68
	// Line 987, Address: 0x1e63b8, Func Offset: 0x78
	// Line 988, Address: 0x1e63cc, Func Offset: 0x8c
	// Line 990, Address: 0x1e63d8, Func Offset: 0x98
	// Line 992, Address: 0x1e63f0, Func Offset: 0xb0
	// Line 993, Address: 0x1e63fc, Func Offset: 0xbc
	// Line 995, Address: 0x1e6400, Func Offset: 0xc0
	// Line 998, Address: 0x1e6414, Func Offset: 0xd4
	// Line 999, Address: 0x1e642c, Func Offset: 0xec
	// Line 1001, Address: 0x1e6448, Func Offset: 0x108
	// Line 1002, Address: 0x1e6450, Func Offset: 0x110
	// Line 1004, Address: 0x1e6458, Func Offset: 0x118
	// Line 1010, Address: 0x1e6460, Func Offset: 0x120
	// Line 1011, Address: 0x1e6474, Func Offset: 0x134
	// Func End, Address: 0x1e648c, Func Offset: 0x14c
}

// 
// Start address: 0x1e6490
int miscItemmenuSlide(int start_index, int dir, int cur_cnt, int max_cnt)
{
	int rtv;
	float ratio;
	int i;
	_anon0* iwk;
	float src_x;
	float dst_x;
	float x;
	float y;
	int x;
	int x;
	// Line 1020, Address: 0x1e6490, Func Offset: 0
	// Line 1022, Address: 0x1e64c0, Func Offset: 0x30
	// Line 1020, Address: 0x1e64c4, Func Offset: 0x34
	// Line 1022, Address: 0x1e64c8, Func Offset: 0x38
	// Line 1020, Address: 0x1e64cc, Func Offset: 0x3c
	// Line 1021, Address: 0x1e64d0, Func Offset: 0x40
	// Line 1022, Address: 0x1e64d4, Func Offset: 0x44
	// Line 1026, Address: 0x1e64dc, Func Offset: 0x4c
	// Line 1027, Address: 0x1e64f0, Func Offset: 0x60
	// Line 1031, Address: 0x1e64f8, Func Offset: 0x68
	// Line 1032, Address: 0x1e6500, Func Offset: 0x70
	// Line 1031, Address: 0x1e6504, Func Offset: 0x74
	// Line 1032, Address: 0x1e651c, Func Offset: 0x8c
	// Line 1035, Address: 0x1e6528, Func Offset: 0x98
	// Line 1036, Address: 0x1e6530, Func Offset: 0xa0
	// Line 1038, Address: 0x1e6538, Func Offset: 0xa8
	// Line 1039, Address: 0x1e653c, Func Offset: 0xac
	// Line 1038, Address: 0x1e6548, Func Offset: 0xb8
	// Line 1040, Address: 0x1e654c, Func Offset: 0xbc
	// Line 1041, Address: 0x1e6554, Func Offset: 0xc4
	// Line 1042, Address: 0x1e6574, Func Offset: 0xe4
	// Line 1044, Address: 0x1e6580, Func Offset: 0xf0
	// Line 1045, Address: 0x1e6588, Func Offset: 0xf8
	// Line 1044, Address: 0x1e658c, Func Offset: 0xfc
	// Line 1045, Address: 0x1e6590, Func Offset: 0x100
	// Line 1044, Address: 0x1e6598, Func Offset: 0x108
	// Line 1045, Address: 0x1e659c, Func Offset: 0x10c
	// Line 1044, Address: 0x1e65a0, Func Offset: 0x110
	// Line 1045, Address: 0x1e65a4, Func Offset: 0x114
	// Line 1046, Address: 0x1e65ac, Func Offset: 0x11c
	// Line 1044, Address: 0x1e65b0, Func Offset: 0x120
	// Line 1046, Address: 0x1e65b4, Func Offset: 0x124
	// Line 1048, Address: 0x1e65b8, Func Offset: 0x128
	// Line 1050, Address: 0x1e65c0, Func Offset: 0x130
	// Line 1053, Address: 0x1e65c8, Func Offset: 0x138
	// Line 1052, Address: 0x1e65cc, Func Offset: 0x13c
	// Line 1053, Address: 0x1e65d0, Func Offset: 0x140
	// Line 1052, Address: 0x1e65d8, Func Offset: 0x148
	// Line 1054, Address: 0x1e65dc, Func Offset: 0x14c
	// Line 1055, Address: 0x1e65e4, Func Offset: 0x154
	// Line 1056, Address: 0x1e6604, Func Offset: 0x174
	// Line 1058, Address: 0x1e6610, Func Offset: 0x180
	// Line 1059, Address: 0x1e6618, Func Offset: 0x188
	// Line 1058, Address: 0x1e661c, Func Offset: 0x18c
	// Line 1059, Address: 0x1e6620, Func Offset: 0x190
	// Line 1058, Address: 0x1e6624, Func Offset: 0x194
	// Line 1059, Address: 0x1e6628, Func Offset: 0x198
	// Line 1058, Address: 0x1e662c, Func Offset: 0x19c
	// Line 1059, Address: 0x1e6630, Func Offset: 0x1a0
	// Line 1058, Address: 0x1e6634, Func Offset: 0x1a4
	// Line 1060, Address: 0x1e6638, Func Offset: 0x1a8
	// Line 1059, Address: 0x1e663c, Func Offset: 0x1ac
	// Line 1060, Address: 0x1e6640, Func Offset: 0x1b0
	// Line 1058, Address: 0x1e6644, Func Offset: 0x1b4
	// Line 1059, Address: 0x1e6648, Func Offset: 0x1b8
	// Line 1062, Address: 0x1e664c, Func Offset: 0x1bc
	// Line 1064, Address: 0x1e6650, Func Offset: 0x1c0
	// Line 1065, Address: 0x1e6658, Func Offset: 0x1c8
	// Line 1067, Address: 0x1e6674, Func Offset: 0x1e4
	// Line 1068, Address: 0x1e66b8, Func Offset: 0x228
	// Line 1069, Address: 0x1e66c8, Func Offset: 0x238
	// Line 1070, Address: 0x1e66cc, Func Offset: 0x23c
	// Line 1072, Address: 0x1e66dc, Func Offset: 0x24c
	// Line 1073, Address: 0x1e66e4, Func Offset: 0x254
	// Line 1076, Address: 0x1e66ec, Func Offset: 0x25c
	// Line 1077, Address: 0x1e66f8, Func Offset: 0x268
	// Line 1076, Address: 0x1e66fc, Func Offset: 0x26c
	// Line 1077, Address: 0x1e6700, Func Offset: 0x270
	// Line 1076, Address: 0x1e6704, Func Offset: 0x274
	// Line 1077, Address: 0x1e6708, Func Offset: 0x278
	// Line 1076, Address: 0x1e670c, Func Offset: 0x27c
	// Line 1077, Address: 0x1e6710, Func Offset: 0x280
	// Line 1076, Address: 0x1e6718, Func Offset: 0x288
	// Line 1077, Address: 0x1e671c, Func Offset: 0x28c
	// Line 1078, Address: 0x1e6728, Func Offset: 0x298
	// Line 1081, Address: 0x1e6784, Func Offset: 0x2f4
	// Line 1085, Address: 0x1e6790, Func Offset: 0x300
	// Line 1086, Address: 0x1e67a4, Func Offset: 0x314
	// Line 1085, Address: 0x1e67a8, Func Offset: 0x318
	// Line 1086, Address: 0x1e67ac, Func Offset: 0x31c
	// Line 1085, Address: 0x1e67b0, Func Offset: 0x320
	// Line 1086, Address: 0x1e67b4, Func Offset: 0x324
	// Line 1085, Address: 0x1e67b8, Func Offset: 0x328
	// Line 1086, Address: 0x1e67bc, Func Offset: 0x32c
	// Line 1087, Address: 0x1e67d4, Func Offset: 0x344
	// Line 1090, Address: 0x1e6834, Func Offset: 0x3a4
	// Line 1091, Address: 0x1e6838, Func Offset: 0x3a8
	// Line 1092, Address: 0x1e683c, Func Offset: 0x3ac
	// Line 1093, Address: 0x1e6840, Func Offset: 0x3b0
	// Line 1094, Address: 0x1e6848, Func Offset: 0x3b8
	// Func End, Address: 0x1e6878, Func Offset: 0x3e8
}

// 
// Start address: 0x1e6880
int miscItemmenuSlide_box(int start_index, int cur_cnt, int max_cnt)
{
	int rtv;
	float ratio;
	int i;
	_anon0* iwk;
	float src_x;
	float dst_x;
	float x;
	float y;
	// Line 1100, Address: 0x1e6880, Func Offset: 0
	// Line 1102, Address: 0x1e68a8, Func Offset: 0x28
	// Line 1100, Address: 0x1e68ac, Func Offset: 0x2c
	// Line 1102, Address: 0x1e68b0, Func Offset: 0x30
	// Line 1100, Address: 0x1e68b4, Func Offset: 0x34
	// Line 1102, Address: 0x1e68b8, Func Offset: 0x38
	// Line 1106, Address: 0x1e68c0, Func Offset: 0x40
	// Line 1107, Address: 0x1e68d8, Func Offset: 0x58
	// Line 1111, Address: 0x1e68e0, Func Offset: 0x60
	// Line 1112, Address: 0x1e6900, Func Offset: 0x80
	// Line 1115, Address: 0x1e6908, Func Offset: 0x88
	// Line 1116, Address: 0x1e691c, Func Offset: 0x9c
	// Line 1117, Address: 0x1e6924, Func Offset: 0xa4
	// Line 1116, Address: 0x1e6928, Func Offset: 0xa8
	// Line 1117, Address: 0x1e692c, Func Offset: 0xac
	// Line 1115, Address: 0x1e6930, Func Offset: 0xb0
	// Line 1116, Address: 0x1e6934, Func Offset: 0xb4
	// Line 1119, Address: 0x1e6948, Func Offset: 0xc8
	// Line 1120, Address: 0x1e6950, Func Offset: 0xd0
	// Line 1122, Address: 0x1e696c, Func Offset: 0xec
	// Line 1123, Address: 0x1e69b0, Func Offset: 0x130
	// Line 1124, Address: 0x1e69c0, Func Offset: 0x140
	// Line 1125, Address: 0x1e69c4, Func Offset: 0x144
	// Line 1127, Address: 0x1e69d4, Func Offset: 0x154
	// Line 1128, Address: 0x1e69dc, Func Offset: 0x15c
	// Line 1130, Address: 0x1e69e0, Func Offset: 0x160
	// Line 1131, Address: 0x1e69e8, Func Offset: 0x168
	// Func End, Address: 0x1e6a10, Func Offset: 0x190
}

// 
// Start address: 0x1e6a10
int IsPad(unsigned int pad)
{
	// Line 1136, Address: 0x1e6a10, Func Offset: 0
	// Line 1138, Address: 0x1e6a14, Func Offset: 0x4
	// Line 1136, Address: 0x1e6a18, Func Offset: 0x8
	// Line 1138, Address: 0x1e6a20, Func Offset: 0x10
	// Line 1141, Address: 0x1e6a40, Func Offset: 0x30
	// Func End, Address: 0x1e6a50, Func Offset: 0x40
}

// 
// Start address: 0x1e6a50
int miscItemmenuHideCheck(_anon6* menu)
{
	int rtv;
	// Line 1145, Address: 0x1e6a50, Func Offset: 0
	// Line 1148, Address: 0x1e6a64, Func Offset: 0x14
	// Line 1149, Address: 0x1e6a78, Func Offset: 0x28
	// Line 1150, Address: 0x1e6a88, Func Offset: 0x38
	// Line 1153, Address: 0x1e6aa8, Func Offset: 0x58
	// Line 1154, Address: 0x1e6aac, Func Offset: 0x5c
	// Line 1155, Address: 0x1e6ac8, Func Offset: 0x78
	// Line 1156, Address: 0x1e6ad0, Func Offset: 0x80
	// Line 1158, Address: 0x1e6ae0, Func Offset: 0x90
	// Line 1159, Address: 0x1e6af4, Func Offset: 0xa4
	// Line 1161, Address: 0x1e6b00, Func Offset: 0xb0
	// Line 1163, Address: 0x1e6b0c, Func Offset: 0xbc
	// Line 1165, Address: 0x1e6b10, Func Offset: 0xc0
	// Line 1168, Address: 0x1e6b2c, Func Offset: 0xdc
	// Line 1171, Address: 0x1e6b38, Func Offset: 0xe8
	// Line 1172, Address: 0x1e6b3c, Func Offset: 0xec
	// Line 1175, Address: 0x1e6b58, Func Offset: 0x108
	// Line 1176, Address: 0x1e6b5c, Func Offset: 0x10c
	// Func End, Address: 0x1e6b70, Func Offset: 0x120
}

// 
// Start address: 0x1e6b70
void miscItemmenuBlinkUpdate(_anon6* menu)
{
	float v;
	_anon0* iwk;
	int i;
	unsigned short menu_id;
	GameItem item_id;
	unsigned char c;
	// Line 1180, Address: 0x1e6b70, Func Offset: 0
	// Line 1184, Address: 0x1e6b90, Func Offset: 0x20
	// Line 1186, Address: 0x1e6b98, Func Offset: 0x28
	// Line 1187, Address: 0x1e6c00, Func Offset: 0x90
	// Line 1186, Address: 0x1e6c04, Func Offset: 0x94
	// Line 1187, Address: 0x1e6c08, Func Offset: 0x98
	// Line 1190, Address: 0x1e6c1c, Func Offset: 0xac
	// Line 1191, Address: 0x1e6c28, Func Offset: 0xb8
	// Line 1192, Address: 0x1e6c40, Func Offset: 0xd0
	// Line 1193, Address: 0x1e6c4c, Func Offset: 0xdc
	// Line 1201, Address: 0x1e6c88, Func Offset: 0x118
	// Line 1199, Address: 0x1e6c8c, Func Offset: 0x11c
	// Line 1201, Address: 0x1e6c90, Func Offset: 0x120
	// Line 1199, Address: 0x1e6c94, Func Offset: 0x124
	// Line 1201, Address: 0x1e6c98, Func Offset: 0x128
	// Line 1199, Address: 0x1e6c9c, Func Offset: 0x12c
	// Line 1201, Address: 0x1e6ca8, Func Offset: 0x138
	// Line 1204, Address: 0x1e6cd0, Func Offset: 0x160
	// Line 1205, Address: 0x1e6cd4, Func Offset: 0x164
	// Line 1208, Address: 0x1e6cd8, Func Offset: 0x168
	// Line 1209, Address: 0x1e6cfc, Func Offset: 0x18c
	// Line 1212, Address: 0x1e6d08, Func Offset: 0x198
	// Line 1215, Address: 0x1e6d18, Func Offset: 0x1a8
	// Line 1216, Address: 0x1e6d1c, Func Offset: 0x1ac
	// Line 1217, Address: 0x1e6d2c, Func Offset: 0x1bc
	// Func End, Address: 0x1e6d4c, Func Offset: 0x1dc
}

// 
// Start address: 0x1e6d50
void miscItemmenuUpdatePossession(_anon6* menu)
{
	int i;
	_anon0* iwk;
	// Line 1223, Address: 0x1e6d50, Func Offset: 0
	// Line 1228, Address: 0x1e6d60, Func Offset: 0x10
	// Line 1225, Address: 0x1e6d64, Func Offset: 0x14
	// Line 1229, Address: 0x1e6d68, Func Offset: 0x18
	// Line 1231, Address: 0x1e6d98, Func Offset: 0x48
	// Line 1232, Address: 0x1e6da8, Func Offset: 0x58
	// Func End, Address: 0x1e6dbc, Func Offset: 0x6c
}

// 
// Start address: 0x1e6dc0
int miscItemmenuUpdate_Idle(_anon6* menu)
{
	int rtv;
	int i;
	_anon0* iwk;
	float x;
	float y;
	// Line 1236, Address: 0x1e6dc0, Func Offset: 0
	// Line 1237, Address: 0x1e6dd8, Func Offset: 0x18
	// Line 1236, Address: 0x1e6ddc, Func Offset: 0x1c
	// Line 1242, Address: 0x1e6de4, Func Offset: 0x24
	// Line 1244, Address: 0x1e6dec, Func Offset: 0x2c
	// Line 1245, Address: 0x1e6df8, Func Offset: 0x38
	// Line 1246, Address: 0x1e6e0c, Func Offset: 0x4c
	// Line 1248, Address: 0x1e6e28, Func Offset: 0x68
	// Line 1249, Address: 0x1e6e68, Func Offset: 0xa8
	// Line 1250, Address: 0x1e6e6c, Func Offset: 0xac
	// Line 1252, Address: 0x1e6e7c, Func Offset: 0xbc
	// Line 1253, Address: 0x1e6e8c, Func Offset: 0xcc
	// Line 1255, Address: 0x1e6e90, Func Offset: 0xd0
	// Line 1256, Address: 0x1e6e94, Func Offset: 0xd4
	// Func End, Address: 0x1e6eb4, Func Offset: 0xf4
}

// 
// Start address: 0x1e6ec0
int miscItemmenuUpdate_Add(_anon6* menu)
{
	int rtv;
	_anon0* iwk;
	float ratio;
	int add_index;
	float x;
	float y;
	unsigned char a;
	unsigned int col;
	// Line 1261, Address: 0x1e6ec0, Func Offset: 0
	// Line 1269, Address: 0x1e6ec4, Func Offset: 0x4
	// Line 1261, Address: 0x1e6ec8, Func Offset: 0x8
	// Line 1269, Address: 0x1e6eec, Func Offset: 0x2c
	// Line 1267, Address: 0x1e6ef0, Func Offset: 0x30
	// Line 1269, Address: 0x1e6ef4, Func Offset: 0x34
	// Line 1272, Address: 0x1e6f18, Func Offset: 0x58
	// Line 1273, Address: 0x1e6f34, Func Offset: 0x74
	// Line 1276, Address: 0x1e6f48, Func Offset: 0x88
	// Line 1279, Address: 0x1e6f98, Func Offset: 0xd8
	// Line 1281, Address: 0x1e6fa0, Func Offset: 0xe0
	// Line 1285, Address: 0x1e6fa8, Func Offset: 0xe8
	// Line 1289, Address: 0x1e6fb0, Func Offset: 0xf0
	// Line 1290, Address: 0x1e7028, Func Offset: 0x168
	// Line 1292, Address: 0x1e7030, Func Offset: 0x170
	// Line 1290, Address: 0x1e7034, Func Offset: 0x174
	// Line 1292, Address: 0x1e7038, Func Offset: 0x178
	// Line 1290, Address: 0x1e703c, Func Offset: 0x17c
	// Line 1292, Address: 0x1e7040, Func Offset: 0x180
	// Line 1290, Address: 0x1e7044, Func Offset: 0x184
	// Line 1292, Address: 0x1e7048, Func Offset: 0x188
	// Line 1290, Address: 0x1e7050, Func Offset: 0x190
	// Line 1289, Address: 0x1e7054, Func Offset: 0x194
	// Line 1290, Address: 0x1e7058, Func Offset: 0x198
	// Line 1293, Address: 0x1e705c, Func Offset: 0x19c
	// Line 1294, Address: 0x1e7080, Func Offset: 0x1c0
	// Line 1293, Address: 0x1e7084, Func Offset: 0x1c4
	// Line 1295, Address: 0x1e708c, Func Offset: 0x1cc
	// Line 1293, Address: 0x1e7094, Func Offset: 0x1d4
	// Line 1294, Address: 0x1e7098, Func Offset: 0x1d8
	// Line 1293, Address: 0x1e709c, Func Offset: 0x1dc
	// Line 1294, Address: 0x1e70a0, Func Offset: 0x1e0
	// Line 1293, Address: 0x1e70a4, Func Offset: 0x1e4
	// Line 1294, Address: 0x1e70ac, Func Offset: 0x1ec
	// Line 1293, Address: 0x1e70b0, Func Offset: 0x1f0
	// Line 1294, Address: 0x1e70bc, Func Offset: 0x1fc
	// Line 1293, Address: 0x1e70c0, Func Offset: 0x200
	// Line 1294, Address: 0x1e70c4, Func Offset: 0x204
	// Line 1295, Address: 0x1e70cc, Func Offset: 0x20c
	// Line 1296, Address: 0x1e70d4, Func Offset: 0x214
	// Line 1297, Address: 0x1e70e8, Func Offset: 0x228
	// Line 1298, Address: 0x1e70f0, Func Offset: 0x230
	// Line 1304, Address: 0x1e7130, Func Offset: 0x270
	// Line 1305, Address: 0x1e71bc, Func Offset: 0x2fc
	// Line 1306, Address: 0x1e71c4, Func Offset: 0x304
	// Line 1307, Address: 0x1e71c8, Func Offset: 0x308
	// Line 1306, Address: 0x1e71cc, Func Offset: 0x30c
	// Line 1310, Address: 0x1e71d0, Func Offset: 0x310
	// Line 1311, Address: 0x1e71d4, Func Offset: 0x314
	// Func End, Address: 0x1e71fc, Func Offset: 0x33c
}

// 
// Start address: 0x1e7200
int miscItemmenuUpdate_Use(_anon6* menu)
{
	int rtv;
	_anon0* iwk;
	float ratio;
	int cnt;
	int use_index;
	float x;
	float y;
	unsigned char a;
	unsigned int col;
	// Line 1315, Address: 0x1e7200, Func Offset: 0
	// Line 1324, Address: 0x1e7204, Func Offset: 0x4
	// Line 1315, Address: 0x1e7208, Func Offset: 0x8
	// Line 1324, Address: 0x1e722c, Func Offset: 0x2c
	// Line 1321, Address: 0x1e7230, Func Offset: 0x30
	// Line 1322, Address: 0x1e7234, Func Offset: 0x34
	// Line 1324, Address: 0x1e7238, Func Offset: 0x38
	// Line 1327, Address: 0x1e7250, Func Offset: 0x50
	// Line 1328, Address: 0x1e7268, Func Offset: 0x68
	// Line 1330, Address: 0x1e72ac, Func Offset: 0xac
	// Line 1332, Address: 0x1e72d0, Func Offset: 0xd0
	// Line 1333, Address: 0x1e72e4, Func Offset: 0xe4
	// Line 1334, Address: 0x1e7300, Func Offset: 0x100
	// Line 1333, Address: 0x1e7304, Func Offset: 0x104
	// Line 1334, Address: 0x1e7308, Func Offset: 0x108
	// Line 1335, Address: 0x1e730c, Func Offset: 0x10c
	// Line 1333, Address: 0x1e7314, Func Offset: 0x114
	// Line 1334, Address: 0x1e7324, Func Offset: 0x124
	// Line 1333, Address: 0x1e732c, Func Offset: 0x12c
	// Line 1334, Address: 0x1e7330, Func Offset: 0x130
	// Line 1333, Address: 0x1e7340, Func Offset: 0x140
	// Line 1334, Address: 0x1e7348, Func Offset: 0x148
	// Line 1335, Address: 0x1e7350, Func Offset: 0x150
	// Line 1337, Address: 0x1e735c, Func Offset: 0x15c
	// Line 1338, Address: 0x1e73a0, Func Offset: 0x1a0
	// Line 1340, Address: 0x1e73ac, Func Offset: 0x1ac
	// Line 1342, Address: 0x1e73b4, Func Offset: 0x1b4
	// Line 1343, Address: 0x1e73c8, Func Offset: 0x1c8
	// Line 1346, Address: 0x1e73e0, Func Offset: 0x1e0
	// Line 1347, Address: 0x1e742c, Func Offset: 0x22c
	// Line 1348, Address: 0x1e7438, Func Offset: 0x238
	// Line 1349, Address: 0x1e7460, Func Offset: 0x260
	// Line 1350, Address: 0x1e7464, Func Offset: 0x264
	// Line 1352, Address: 0x1e746c, Func Offset: 0x26c
	// Line 1354, Address: 0x1e7474, Func Offset: 0x274
	// Line 1356, Address: 0x1e7478, Func Offset: 0x278
	// Line 1357, Address: 0x1e74b4, Func Offset: 0x2b4
	// Line 1369, Address: 0x1e7500, Func Offset: 0x300
	// Line 1371, Address: 0x1e7508, Func Offset: 0x308
	// Line 1375, Address: 0x1e7510, Func Offset: 0x310
	// Line 1376, Address: 0x1e7514, Func Offset: 0x314
	// Func End, Address: 0x1e753c, Func Offset: 0x33c
}

// 
// Start address: 0x1e7540
int miscItemmenuUpdate_Rob(_anon6* menu)
{
	int rtv;
	_anon0* iwk;
	float ratio;
	int cnt;
	int use_index;
	float x;
	float y;
	unsigned char a;
	unsigned int col;
	int cursor_id;
	// Line 1380, Address: 0x1e7540, Func Offset: 0
	// Line 1389, Address: 0x1e7544, Func Offset: 0x4
	// Line 1380, Address: 0x1e7548, Func Offset: 0x8
	// Line 1389, Address: 0x1e756c, Func Offset: 0x2c
	// Line 1386, Address: 0x1e7570, Func Offset: 0x30
	// Line 1387, Address: 0x1e7574, Func Offset: 0x34
	// Line 1389, Address: 0x1e7578, Func Offset: 0x38
	// Line 1390, Address: 0x1e759c, Func Offset: 0x5c
	// Line 1392, Address: 0x1e75a0, Func Offset: 0x60
	// Line 1393, Address: 0x1e75b8, Func Offset: 0x78
	// Line 1395, Address: 0x1e75fc, Func Offset: 0xbc
	// Line 1397, Address: 0x1e7620, Func Offset: 0xe0
	// Line 1398, Address: 0x1e7634, Func Offset: 0xf4
	// Line 1399, Address: 0x1e7650, Func Offset: 0x110
	// Line 1398, Address: 0x1e7654, Func Offset: 0x114
	// Line 1399, Address: 0x1e7658, Func Offset: 0x118
	// Line 1400, Address: 0x1e765c, Func Offset: 0x11c
	// Line 1398, Address: 0x1e7664, Func Offset: 0x124
	// Line 1399, Address: 0x1e7674, Func Offset: 0x134
	// Line 1398, Address: 0x1e767c, Func Offset: 0x13c
	// Line 1399, Address: 0x1e7680, Func Offset: 0x140
	// Line 1398, Address: 0x1e7690, Func Offset: 0x150
	// Line 1399, Address: 0x1e7698, Func Offset: 0x158
	// Line 1400, Address: 0x1e76a0, Func Offset: 0x160
	// Line 1402, Address: 0x1e76ac, Func Offset: 0x16c
	// Line 1403, Address: 0x1e76f0, Func Offset: 0x1b0
	// Line 1405, Address: 0x1e76fc, Func Offset: 0x1bc
	// Line 1406, Address: 0x1e7748, Func Offset: 0x208
	// Line 1407, Address: 0x1e7758, Func Offset: 0x218
	// Line 1408, Address: 0x1e7780, Func Offset: 0x240
	// Line 1409, Address: 0x1e7784, Func Offset: 0x244
	// Line 1411, Address: 0x1e778c, Func Offset: 0x24c
	// Line 1413, Address: 0x1e7794, Func Offset: 0x254
	// Line 1416, Address: 0x1e7798, Func Offset: 0x258
	// Line 1417, Address: 0x1e77a4, Func Offset: 0x264
	// Line 1416, Address: 0x1e77a8, Func Offset: 0x268
	// Line 1417, Address: 0x1e77ac, Func Offset: 0x26c
	// Line 1418, Address: 0x1e77b8, Func Offset: 0x278
	// Line 1419, Address: 0x1e77cc, Func Offset: 0x28c
	// Line 1421, Address: 0x1e77d0, Func Offset: 0x290
	// Line 1424, Address: 0x1e77dc, Func Offset: 0x29c
	// Line 1426, Address: 0x1e77e0, Func Offset: 0x2a0
	// Line 1427, Address: 0x1e781c, Func Offset: 0x2dc
	// Line 1432, Address: 0x1e7868, Func Offset: 0x328
	// Line 1434, Address: 0x1e7870, Func Offset: 0x330
	// Line 1435, Address: 0x1e7878, Func Offset: 0x338
	// Line 1436, Address: 0x1e787c, Func Offset: 0x33c
	// Line 1438, Address: 0x1e7880, Func Offset: 0x340
	// Line 1439, Address: 0x1e7884, Func Offset: 0x344
	// Func End, Address: 0x1e78ac, Func Offset: 0x36c
}

// 
// Start address: 0x1e78b0
int miscItemmenuUpdate_Hide(_anon6* menu)
{
	int rtv;
	int i;
	_anon0* iwk;
	int cnt;
	float alpha_ratio;
	float ratio;
	float x;
	float y;
	// Line 1443, Address: 0x1e78b0, Func Offset: 0
	// Line 1444, Address: 0x1e78c4, Func Offset: 0x14
	// Line 1443, Address: 0x1e78c8, Func Offset: 0x18
	// Line 1447, Address: 0x1e78d4, Func Offset: 0x24
	// Line 1448, Address: 0x1e78e8, Func Offset: 0x38
	// Line 1450, Address: 0x1e78ec, Func Offset: 0x3c
	// Line 1451, Address: 0x1e78fc, Func Offset: 0x4c
	// Line 1454, Address: 0x1e7930, Func Offset: 0x80
	// Line 1456, Address: 0x1e7938, Func Offset: 0x88
	// Line 1457, Address: 0x1e793c, Func Offset: 0x8c
	// Line 1459, Address: 0x1e7958, Func Offset: 0xa8
	// Line 1461, Address: 0x1e7960, Func Offset: 0xb0
	// Line 1463, Address: 0x1e7978, Func Offset: 0xc8
	// Line 1461, Address: 0x1e797c, Func Offset: 0xcc
	// Line 1463, Address: 0x1e7980, Func Offset: 0xd0
	// Line 1464, Address: 0x1e7984, Func Offset: 0xd4
	// Line 1466, Address: 0x1e7998, Func Offset: 0xe8
	// Line 1468, Address: 0x1e79a0, Func Offset: 0xf0
	// Line 1469, Address: 0x1e79a8, Func Offset: 0xf8
	// Line 1468, Address: 0x1e79ac, Func Offset: 0xfc
	// Line 1469, Address: 0x1e79b0, Func Offset: 0x100
	// Line 1473, Address: 0x1e79b8, Func Offset: 0x108
	// Line 1474, Address: 0x1e79c0, Func Offset: 0x110
	// Line 1476, Address: 0x1e79c8, Func Offset: 0x118
	// Line 1477, Address: 0x1e79d0, Func Offset: 0x120
	// Line 1478, Address: 0x1e79e4, Func Offset: 0x134
	// Line 1480, Address: 0x1e7a00, Func Offset: 0x150
	// Line 1481, Address: 0x1e7a40, Func Offset: 0x190
	// Line 1482, Address: 0x1e7a44, Func Offset: 0x194
	// Line 1485, Address: 0x1e7a54, Func Offset: 0x1a4
	// Func End, Address: 0x1e7a74, Func Offset: 0x1c4
}

// 
// Start address: 0x1e7a80
int miscItemmenuUpdate_BoxAdd(_anon6* menu)
{
	int rtv;
	float ratio;
	int add_index;
	// Line 1491, Address: 0x1e7a80, Func Offset: 0
	// Line 1496, Address: 0x1e7a9c, Func Offset: 0x1c
	// Line 1498, Address: 0x1e7aa0, Func Offset: 0x20
	// Line 1499, Address: 0x1e7ab0, Func Offset: 0x30
	// Line 1503, Address: 0x1e7ab8, Func Offset: 0x38
	// Line 1507, Address: 0x1e7b08, Func Offset: 0x88
	// Line 1510, Address: 0x1e7b10, Func Offset: 0x90
	// Line 1511, Address: 0x1e7b18, Func Offset: 0x98
	// Func End, Address: 0x1e7b34, Func Offset: 0xb4
}

// 
// Start address: 0x1e7b40
int miscItemmenuUpdate_BoxDel()
{
	_anon6* p_menu;
	int rtv;
	_anon0* iwk;
	float ratio;
	int use_index;
	float x;
	float y;
	unsigned char a;
	unsigned int col;
	float durability;
	// Line 1515, Address: 0x1e7b40, Func Offset: 0
	// Line 1525, Address: 0x1e7b44, Func Offset: 0x4
	// Line 1515, Address: 0x1e7b48, Func Offset: 0x8
	// Line 1516, Address: 0x1e7b54, Func Offset: 0x14
	// Line 1515, Address: 0x1e7b58, Func Offset: 0x18
	// Line 1516, Address: 0x1e7b5c, Func Offset: 0x1c
	// Line 1515, Address: 0x1e7b60, Func Offset: 0x20
	// Line 1525, Address: 0x1e7b70, Func Offset: 0x30
	// Line 1522, Address: 0x1e7b74, Func Offset: 0x34
	// Line 1525, Address: 0x1e7b78, Func Offset: 0x38
	// Line 1526, Address: 0x1e7b9c, Func Offset: 0x5c
	// Line 1529, Address: 0x1e7ba0, Func Offset: 0x60
	// Line 1531, Address: 0x1e7ba8, Func Offset: 0x68
	// Line 1529, Address: 0x1e7bac, Func Offset: 0x6c
	// Line 1531, Address: 0x1e7bbc, Func Offset: 0x7c
	// Line 1532, Address: 0x1e7bc4, Func Offset: 0x84
	// Line 1537, Address: 0x1e7bd0, Func Offset: 0x90
	// Line 1538, Address: 0x1e7bd8, Func Offset: 0x98
	// Line 1537, Address: 0x1e7bdc, Func Offset: 0x9c
	// Line 1538, Address: 0x1e7bec, Func Offset: 0xac
	// Line 1539, Address: 0x1e7c28, Func Offset: 0xe8
	// Line 1541, Address: 0x1e7c38, Func Offset: 0xf8
	// Line 1544, Address: 0x1e7c60, Func Offset: 0x120
	// Line 1542, Address: 0x1e7c68, Func Offset: 0x128
	// Line 1544, Address: 0x1e7c6c, Func Offset: 0x12c
	// Line 1542, Address: 0x1e7c74, Func Offset: 0x134
	// Line 1544, Address: 0x1e7c78, Func Offset: 0x138
	// Line 1545, Address: 0x1e7c84, Func Offset: 0x144
	// Line 1546, Address: 0x1e7ca0, Func Offset: 0x160
	// Line 1545, Address: 0x1e7ca4, Func Offset: 0x164
	// Line 1546, Address: 0x1e7ca8, Func Offset: 0x168
	// Line 1547, Address: 0x1e7cac, Func Offset: 0x16c
	// Line 1545, Address: 0x1e7cb4, Func Offset: 0x174
	// Line 1546, Address: 0x1e7cc4, Func Offset: 0x184
	// Line 1545, Address: 0x1e7ccc, Func Offset: 0x18c
	// Line 1546, Address: 0x1e7cd0, Func Offset: 0x190
	// Line 1545, Address: 0x1e7ce0, Func Offset: 0x1a0
	// Line 1546, Address: 0x1e7ce8, Func Offset: 0x1a8
	// Line 1547, Address: 0x1e7cf0, Func Offset: 0x1b0
	// Line 1549, Address: 0x1e7cfc, Func Offset: 0x1bc
	// Line 1550, Address: 0x1e7d40, Func Offset: 0x200
	// Line 1552, Address: 0x1e7d4c, Func Offset: 0x20c
	// Line 1554, Address: 0x1e7d58, Func Offset: 0x218
	// Line 1555, Address: 0x1e7d6c, Func Offset: 0x22c
	// Line 1557, Address: 0x1e7d84, Func Offset: 0x244
	// Line 1558, Address: 0x1e7d88, Func Offset: 0x248
	// Line 1559, Address: 0x1e7dd4, Func Offset: 0x294
	// Line 1560, Address: 0x1e7de0, Func Offset: 0x2a0
	// Line 1561, Address: 0x1e7e08, Func Offset: 0x2c8
	// Line 1562, Address: 0x1e7e0c, Func Offset: 0x2cc
	// Line 1564, Address: 0x1e7e14, Func Offset: 0x2d4
	// Line 1566, Address: 0x1e7e1c, Func Offset: 0x2dc
	// Line 1568, Address: 0x1e7e20, Func Offset: 0x2e0
	// Line 1570, Address: 0x1e7ea4, Func Offset: 0x364
	// Line 1573, Address: 0x1e7ea8, Func Offset: 0x368
	// Line 1574, Address: 0x1e7f34, Func Offset: 0x3f4
	// Line 1575, Address: 0x1e7f38, Func Offset: 0x3f8
	// Line 1576, Address: 0x1e7f40, Func Offset: 0x400
	// Line 1577, Address: 0x1e7f44, Func Offset: 0x404
	// Line 1579, Address: 0x1e7f48, Func Offset: 0x408
	// Line 1580, Address: 0x1e7f4c, Func Offset: 0x40c
	// Func End, Address: 0x1e7f74, Func Offset: 0x434
}

// 
// Start address: 0x1e7f80
void miscItemmenuDrawUpdate(_anon6* menu)
{
	int f_rtv;
	// Line 1584, Address: 0x1e7f80, Func Offset: 0
	// Line 1585, Address: 0x1e7f90, Func Offset: 0x10
	// Line 1591, Address: 0x1e7f98, Func Offset: 0x18
	// Line 1592, Address: 0x1e7fa0, Func Offset: 0x20
	// Line 1593, Address: 0x1e7fac, Func Offset: 0x2c
	// Line 1594, Address: 0x1e7fb4, Func Offset: 0x34
	// Line 1597, Address: 0x1e7fb8, Func Offset: 0x38
	// Line 1598, Address: 0x1e7ffc, Func Offset: 0x7c
	// Line 1599, Address: 0x1e8000, Func Offset: 0x80
	// Line 1600, Address: 0x1e8004, Func Offset: 0x84
	// Line 1601, Address: 0x1e800c, Func Offset: 0x8c
	// Line 1602, Address: 0x1e8010, Func Offset: 0x90
	// Line 1603, Address: 0x1e801c, Func Offset: 0x9c
	// Line 1604, Address: 0x1e8024, Func Offset: 0xa4
	// Line 1605, Address: 0x1e802c, Func Offset: 0xac
	// Line 1606, Address: 0x1e8030, Func Offset: 0xb0
	// Line 1607, Address: 0x1e803c, Func Offset: 0xbc
	// Line 1608, Address: 0x1e8044, Func Offset: 0xc4
	// Line 1609, Address: 0x1e804c, Func Offset: 0xcc
	// Line 1610, Address: 0x1e8050, Func Offset: 0xd0
	// Line 1611, Address: 0x1e8054, Func Offset: 0xd4
	// Line 1612, Address: 0x1e805c, Func Offset: 0xdc
	// Line 1613, Address: 0x1e8060, Func Offset: 0xe0
	// Line 1617, Address: 0x1e8068, Func Offset: 0xe8
	// Line 1618, Address: 0x1e8074, Func Offset: 0xf4
	// Line 1622, Address: 0x1e8078, Func Offset: 0xf8
	// Line 1623, Address: 0x1e8088, Func Offset: 0x108
	// Line 1624, Address: 0x1e8098, Func Offset: 0x118
	// Line 1626, Address: 0x1e809c, Func Offset: 0x11c
	// Line 1628, Address: 0x1e80a8, Func Offset: 0x128
	// Line 1629, Address: 0x1e80c4, Func Offset: 0x144
	// Line 1631, Address: 0x1e80cc, Func Offset: 0x14c
	// Line 1633, Address: 0x1e80d0, Func Offset: 0x150
	// Line 1635, Address: 0x1e80f8, Func Offset: 0x178
	// Line 1637, Address: 0x1e8100, Func Offset: 0x180
	// Line 1638, Address: 0x1e8108, Func Offset: 0x188
	// Line 1639, Address: 0x1e8110, Func Offset: 0x190
	// Line 1641, Address: 0x1e8114, Func Offset: 0x194
	// Line 1642, Address: 0x1e811c, Func Offset: 0x19c
	// Line 1643, Address: 0x1e8120, Func Offset: 0x1a0
	// Line 1644, Address: 0x1e8130, Func Offset: 0x1b0
	// Line 1645, Address: 0x1e8134, Func Offset: 0x1b4
	// Line 1647, Address: 0x1e8138, Func Offset: 0x1b8
	// Line 1649, Address: 0x1e8140, Func Offset: 0x1c0
	// Line 1650, Address: 0x1e8150, Func Offset: 0x1d0
	// Line 1651, Address: 0x1e8154, Func Offset: 0x1d4
	// Line 1653, Address: 0x1e8158, Func Offset: 0x1d8
	// Line 1655, Address: 0x1e8160, Func Offset: 0x1e0
	// Line 1656, Address: 0x1e8170, Func Offset: 0x1f0
	// Line 1657, Address: 0x1e8174, Func Offset: 0x1f4
	// Line 1659, Address: 0x1e8178, Func Offset: 0x1f8
	// Line 1661, Address: 0x1e8180, Func Offset: 0x200
	// Line 1662, Address: 0x1e8190, Func Offset: 0x210
	// Line 1663, Address: 0x1e8194, Func Offset: 0x214
	// Line 1665, Address: 0x1e8198, Func Offset: 0x218
	// Line 1669, Address: 0x1e81a0, Func Offset: 0x220
	// Line 1670, Address: 0x1e81b0, Func Offset: 0x230
	// Line 1671, Address: 0x1e81b4, Func Offset: 0x234
	// Line 1679, Address: 0x1e81b8, Func Offset: 0x238
	// Line 1681, Address: 0x1e81c0, Func Offset: 0x240
	// Line 1682, Address: 0x1e81d0, Func Offset: 0x250
	// Line 1683, Address: 0x1e81d4, Func Offset: 0x254
	// Line 1686, Address: 0x1e81dc, Func Offset: 0x25c
	// Line 1687, Address: 0x1e81e0, Func Offset: 0x260
	// Func End, Address: 0x1e81f4, Func Offset: 0x274
}

// 
// Start address: 0x1e8200
void miscItemmenuDrawItems(_anon6* menu)
{
	int i;
	_anon0* iwk;
	// Line 1730, Address: 0x1e8200, Func Offset: 0
	// Line 1751, Address: 0x1e8210, Func Offset: 0x10
	// Line 1732, Address: 0x1e8214, Func Offset: 0x14
	// Line 1752, Address: 0x1e8218, Func Offset: 0x18
	// Line 1754, Address: 0x1e8220, Func Offset: 0x20
	// Line 1753, Address: 0x1e8224, Func Offset: 0x24
	// Line 1754, Address: 0x1e8228, Func Offset: 0x28
	// Line 1755, Address: 0x1e8234, Func Offset: 0x34
	// Func End, Address: 0x1e8248, Func Offset: 0x48
}

// 
// Start address: 0x1e8250
void miscItemmenuUpdate0()
{
	int i;
	float val;
	// Line 1759, Address: 0x1e8250, Func Offset: 0
	// Line 1766, Address: 0x1e8254, Func Offset: 0x4
	// Line 1759, Address: 0x1e8258, Func Offset: 0x8
	// Line 1766, Address: 0x1e8260, Func Offset: 0x10
	// Line 1768, Address: 0x1e8274, Func Offset: 0x24
	// Line 1770, Address: 0x1e827c, Func Offset: 0x2c
	// Line 1771, Address: 0x1e8284, Func Offset: 0x34
	// Line 1774, Address: 0x1e8288, Func Offset: 0x38
	// Line 1775, Address: 0x1e8290, Func Offset: 0x40
	// Line 1776, Address: 0x1e82a4, Func Offset: 0x54
	// Line 1777, Address: 0x1e82ac, Func Offset: 0x5c
	// Line 1778, Address: 0x1e82c0, Func Offset: 0x70
	// Line 1781, Address: 0x1e82c8, Func Offset: 0x78
	// Line 1782, Address: 0x1e82d8, Func Offset: 0x88
	// Line 1783, Address: 0x1e82e4, Func Offset: 0x94
	// Line 1786, Address: 0x1e82ec, Func Offset: 0x9c
	// Line 1787, Address: 0x1e82f4, Func Offset: 0xa4
	// Line 1789, Address: 0x1e8314, Func Offset: 0xc4
	// Line 1791, Address: 0x1e8324, Func Offset: 0xd4
	// Line 1792, Address: 0x1e8340, Func Offset: 0xf0
	// Line 1794, Address: 0x1e8348, Func Offset: 0xf8
	// Line 1796, Address: 0x1e8350, Func Offset: 0x100
	// Line 1798, Address: 0x1e8358, Func Offset: 0x108
	// Line 1800, Address: 0x1e8368, Func Offset: 0x118
	// Line 1801, Address: 0x1e8370, Func Offset: 0x120
	// Line 1804, Address: 0x1e8378, Func Offset: 0x128
	// Func End, Address: 0x1e8388, Func Offset: 0x138
}

// 
// Start address: 0x1e8390
void miscItemmenuUpdate()
{
	GameItem kind;
	unsigned int col;
	unsigned short cur_id;
	float cy;
	// Line 1808, Address: 0x1e8390, Func Offset: 0
	// Line 1812, Address: 0x1e83a0, Func Offset: 0x10
	// Line 1814, Address: 0x1e83a8, Func Offset: 0x18
	// Line 1815, Address: 0x1e83b4, Func Offset: 0x24
	// Line 1816, Address: 0x1e83c4, Func Offset: 0x34
	// Line 1822, Address: 0x1e83cc, Func Offset: 0x3c
	// Line 1819, Address: 0x1e83d0, Func Offset: 0x40
	// Line 1822, Address: 0x1e83d8, Func Offset: 0x48
	// Line 1825, Address: 0x1e83e4, Func Offset: 0x54
	// Line 1827, Address: 0x1e83ec, Func Offset: 0x5c
	// Line 1828, Address: 0x1e83fc, Func Offset: 0x6c
	// Line 1830, Address: 0x1e8404, Func Offset: 0x74
	// Line 1832, Address: 0x1e8418, Func Offset: 0x88
	// Line 1830, Address: 0x1e841c, Func Offset: 0x8c
	// Line 1832, Address: 0x1e8424, Func Offset: 0x94
	// Line 1830, Address: 0x1e8434, Func Offset: 0xa4
	// Line 1832, Address: 0x1e8438, Func Offset: 0xa8
	// Line 1833, Address: 0x1e845c, Func Offset: 0xcc
	// Line 1834, Address: 0x1e8460, Func Offset: 0xd0
	// Line 1835, Address: 0x1e8474, Func Offset: 0xe4
	// Func End, Address: 0x1e848c, Func Offset: 0xfc
}

// 
// Start address: 0x1e8490
void miscItemmenuUpdate_Box()
{
	GameItem kind;
	unsigned int col;
	// Line 1839, Address: 0x1e8490, Func Offset: 0
	// Line 1843, Address: 0x1e8498, Func Offset: 0x8
	// Line 1849, Address: 0x1e84a0, Func Offset: 0x10
	// Line 1851, Address: 0x1e84cc, Func Offset: 0x3c
	// Line 1852, Address: 0x1e84e0, Func Offset: 0x50
	// Line 1855, Address: 0x1e84e8, Func Offset: 0x58
	// Line 1856, Address: 0x1e84f4, Func Offset: 0x64
	// Line 1857, Address: 0x1e8508, Func Offset: 0x78
	// Func End, Address: 0x1e8514, Func Offset: 0x84
}

// 
// Start address: 0x1e8520
void miscItemmenuDraw()
{
	// Line 1861, Address: 0x1e8520, Func Offset: 0
	// Line 1862, Address: 0x1e8528, Func Offset: 0x8
	// Line 1863, Address: 0x1e8538, Func Offset: 0x18
	// Line 1864, Address: 0x1e8544, Func Offset: 0x24
	// Line 1865, Address: 0x1e854c, Func Offset: 0x2c
	// Line 1866, Address: 0x1e8554, Func Offset: 0x34
	// Line 1867, Address: 0x1e855c, Func Offset: 0x3c
	// Line 1870, Address: 0x1e8560, Func Offset: 0x40
	// Line 1871, Address: 0x1e856c, Func Offset: 0x4c
	// Line 1872, Address: 0x1e8570, Func Offset: 0x50
	// Func End, Address: 0x1e857c, Func Offset: 0x5c
}

// 
// Start address: 0x1e8580
void miscItemmenuEquipWeapon(int menu_id)
{
	int i;
	_anon0* iwk;
	GameItem kind;
	GameItem kind;
	// Line 1882, Address: 0x1e8580, Func Offset: 0
	// Line 1887, Address: 0x1e8584, Func Offset: 0x4
	// Line 1882, Address: 0x1e8588, Func Offset: 0x8
	// Line 1884, Address: 0x1e859c, Func Offset: 0x1c
	// Line 1887, Address: 0x1e85a0, Func Offset: 0x20
	// Line 1888, Address: 0x1e85a8, Func Offset: 0x28
	// Line 1890, Address: 0x1e85b0, Func Offset: 0x30
	// Line 1891, Address: 0x1e85b8, Func Offset: 0x38
	// Line 1893, Address: 0x1e85c0, Func Offset: 0x40
	// Line 1894, Address: 0x1e85d0, Func Offset: 0x50
	// Line 1895, Address: 0x1e85e4, Func Offset: 0x64
	// Line 1897, Address: 0x1e85e8, Func Offset: 0x68
	// Line 1898, Address: 0x1e85f8, Func Offset: 0x78
	// Line 1900, Address: 0x1e8600, Func Offset: 0x80
	// Line 1901, Address: 0x1e8608, Func Offset: 0x88
	// Line 1903, Address: 0x1e8610, Func Offset: 0x90
	// Line 1904, Address: 0x1e8620, Func Offset: 0xa0
	// Line 1905, Address: 0x1e8628, Func Offset: 0xa8
	// Line 1906, Address: 0x1e8630, Func Offset: 0xb0
	// Line 1907, Address: 0x1e8638, Func Offset: 0xb8
	// Line 1909, Address: 0x1e8640, Func Offset: 0xc0
	// Line 1911, Address: 0x1e8654, Func Offset: 0xd4
	// Line 1913, Address: 0x1e8658, Func Offset: 0xd8
	// Line 1915, Address: 0x1e8668, Func Offset: 0xe8
	// Func End, Address: 0x1e8680, Func Offset: 0x100
}

// 
// Start address: 0x1e8680
void miscItemmenuEquipEileenWeapon(GameItem kind)
{
	// Line 1925, Address: 0x1e8680, Func Offset: 0
	// Line 1924, Address: 0x1e8684, Func Offset: 0x4
	// Line 1925, Address: 0x1e8688, Func Offset: 0x8
	// Line 1924, Address: 0x1e868c, Func Offset: 0xc
	// Line 1926, Address: 0x1e8690, Func Offset: 0x10
	// Func End, Address: 0x1e8698, Func Offset: 0x18
}

// 
// Start address: 0x1e86a0
void miscItemmenuUnequipEileenWeapon()
{
	// Line 1935, Address: 0x1e86a0, Func Offset: 0
	// Line 1936, Address: 0x1e86a8, Func Offset: 0x8
	// Line 1937, Address: 0x1e86ac, Func Offset: 0xc
	// Func End, Address: 0x1e86b4, Func Offset: 0x14
}

// 
// Start address: 0x1e86c0
void miscItemmenuEquipSaintMedallion(int menu_id)
{
	_anon0* iwk;
	int i;
	int no;
	// Line 1946, Address: 0x1e86c0, Func Offset: 0
	// Line 1950, Address: 0x1e86c4, Func Offset: 0x4
	// Line 1946, Address: 0x1e86c8, Func Offset: 0x8
	// Line 1947, Address: 0x1e86d8, Func Offset: 0x18
	// Line 1950, Address: 0x1e86dc, Func Offset: 0x1c
	// Line 1951, Address: 0x1e86e4, Func Offset: 0x24
	// Line 1953, Address: 0x1e86ec, Func Offset: 0x2c
	// Line 1954, Address: 0x1e86f0, Func Offset: 0x30
	// Line 1953, Address: 0x1e86f4, Func Offset: 0x34
	// Line 1954, Address: 0x1e86f8, Func Offset: 0x38
	// Line 1955, Address: 0x1e8710, Func Offset: 0x50
	// Line 1956, Address: 0x1e8724, Func Offset: 0x64
	// Line 1958, Address: 0x1e8728, Func Offset: 0x68
	// Line 1959, Address: 0x1e8738, Func Offset: 0x78
	// Line 1961, Address: 0x1e8740, Func Offset: 0x80
	// Line 1963, Address: 0x1e8750, Func Offset: 0x90
	// Line 1965, Address: 0x1e8758, Func Offset: 0x98
	// Line 1967, Address: 0x1e8760, Func Offset: 0xa0
	// Line 1969, Address: 0x1e8780, Func Offset: 0xc0
	// Line 1970, Address: 0x1e8798, Func Offset: 0xd8
	// Line 1971, Address: 0x1e87a0, Func Offset: 0xe0
	// Line 1974, Address: 0x1e87a8, Func Offset: 0xe8
	// Line 1975, Address: 0x1e87cc, Func Offset: 0x10c
	// Line 1977, Address: 0x1e87e0, Func Offset: 0x120
	// Line 1978, Address: 0x1e8800, Func Offset: 0x140
	// Line 1979, Address: 0x1e8808, Func Offset: 0x148
	// Line 1981, Address: 0x1e8810, Func Offset: 0x150
	// Line 1985, Address: 0x1e8818, Func Offset: 0x158
	// Line 1986, Address: 0x1e8838, Func Offset: 0x178
	// Line 1987, Address: 0x1e8840, Func Offset: 0x180
	// Line 1990, Address: 0x1e8848, Func Offset: 0x188
	// Func End, Address: 0x1e885c, Func Offset: 0x19c
}

// 
// Start address: 0x1e8860
GameItem miscItemmenuGetEquipWeaponKind()
{
	// Line 1996, Address: 0x1e8860, Func Offset: 0
	// Line 1997, Address: 0x1e8864, Func Offset: 0x4
	// Func End, Address: 0x1e886c, Func Offset: 0xc
}

// 
// Start address: 0x1e8870
int item_check_is_info_ok(GameItem kind)
{
	// Line 2005, Address: 0x1e8870, Func Offset: 0
	// Line 2008, Address: 0x1e8878, Func Offset: 0x8
	// Func End, Address: 0x1e8880, Func Offset: 0x10
}

// 
// Start address: 0x1e8880
void miscItemmenuGetItem(GameItem item_id)
{
	int item_index;
	_anon0* iwk;
	int flag;
	// Line 2015, Address: 0x1e8880, Func Offset: 0
	// Line 2016, Address: 0x1e8894, Func Offset: 0x14
	// Line 2018, Address: 0x1e88a0, Func Offset: 0x20
	// Line 2019, Address: 0x1e88b0, Func Offset: 0x30
	// Line 2020, Address: 0x1e88c0, Func Offset: 0x40
	// Line 2024, Address: 0x1e88dc, Func Offset: 0x5c
	// Line 2027, Address: 0x1e88e4, Func Offset: 0x64
	// Line 2026, Address: 0x1e88e8, Func Offset: 0x68
	// Line 2027, Address: 0x1e88ec, Func Offset: 0x6c
	// Line 2026, Address: 0x1e88f0, Func Offset: 0x70
	// Line 2028, Address: 0x1e88f8, Func Offset: 0x78
	// Line 2031, Address: 0x1e88fc, Func Offset: 0x7c
	// Line 2034, Address: 0x1e8910, Func Offset: 0x90
	// Line 2035, Address: 0x1e8918, Func Offset: 0x98
	// Line 2036, Address: 0x1e8938, Func Offset: 0xb8
	// Line 2037, Address: 0x1e8944, Func Offset: 0xc4
	// Line 2039, Address: 0x1e8950, Func Offset: 0xd0
	// Line 2043, Address: 0x1e8970, Func Offset: 0xf0
	// Line 2044, Address: 0x1e8978, Func Offset: 0xf8
	// Line 2045, Address: 0x1e8984, Func Offset: 0x104
	// Line 2047, Address: 0x1e8988, Func Offset: 0x108
	// Line 2048, Address: 0x1e8990, Func Offset: 0x110
	// Line 2052, Address: 0x1e8998, Func Offset: 0x118
	// Line 2053, Address: 0x1e89a4, Func Offset: 0x124
	// Line 2052, Address: 0x1e89a8, Func Offset: 0x128
	// Line 2053, Address: 0x1e89ac, Func Offset: 0x12c
	// Line 2056, Address: 0x1e89e0, Func Offset: 0x160
	// Func End, Address: 0x1e89f8, Func Offset: 0x178
}

// 
// Start address: 0x1e8a00
void miscItemmenuEraseItem(int menu_id)
{
	GameItem kind;
	// Line 2063, Address: 0x1e8a00, Func Offset: 0
	// Line 2064, Address: 0x1e8a10, Func Offset: 0x10
	// Line 2068, Address: 0x1e8a18, Func Offset: 0x18
	// Line 2071, Address: 0x1e8a20, Func Offset: 0x20
	// Line 2075, Address: 0x1e8a30, Func Offset: 0x30
	// Line 2076, Address: 0x1e8a34, Func Offset: 0x34
	// Line 2075, Address: 0x1e8a38, Func Offset: 0x38
	// Line 2077, Address: 0x1e8a40, Func Offset: 0x40
	// Line 2079, Address: 0x1e8a48, Func Offset: 0x48
	// Line 2082, Address: 0x1e8a50, Func Offset: 0x50
	// Line 2083, Address: 0x1e8a58, Func Offset: 0x58
	// Line 2084, Address: 0x1e8a78, Func Offset: 0x78
	// Line 2085, Address: 0x1e8a84, Func Offset: 0x84
	// Line 2087, Address: 0x1e8a90, Func Offset: 0x90
	// Func End, Address: 0x1e8aa4, Func Offset: 0xa4
}

// 
// Start address: 0x1e8ab0
void miscItemmenuEraseItemByKind(GameItem kind)
{
	int i;
	// Line 2094, Address: 0x1e8ab0, Func Offset: 0
	// Line 2097, Address: 0x1e8ac0, Func Offset: 0x10
	// Line 2098, Address: 0x1e8ac8, Func Offset: 0x18
	// Line 2099, Address: 0x1e8adc, Func Offset: 0x2c
	// Line 2100, Address: 0x1e8ae4, Func Offset: 0x34
	// Line 2102, Address: 0x1e8aec, Func Offset: 0x3c
	// Line 2103, Address: 0x1e8b00, Func Offset: 0x50
	// Func End, Address: 0x1e8b14, Func Offset: 0x64
}

// 
// Start address: 0x1e8b20
void miscItemmenuRobItem(int menu_id)
{
	GameItem kind;
	// Line 2110, Address: 0x1e8b20, Func Offset: 0
	// Line 2111, Address: 0x1e8b30, Func Offset: 0x10
	// Line 2113, Address: 0x1e8b3c, Func Offset: 0x1c
	// Line 2115, Address: 0x1e8b4c, Func Offset: 0x2c
	// Line 2119, Address: 0x1e8b54, Func Offset: 0x34
	// Line 2118, Address: 0x1e8b58, Func Offset: 0x38
	// Line 2119, Address: 0x1e8b5c, Func Offset: 0x3c
	// Line 2118, Address: 0x1e8b60, Func Offset: 0x40
	// Line 2120, Address: 0x1e8b68, Func Offset: 0x48
	// Line 2121, Address: 0x1e8b70, Func Offset: 0x50
	// Line 2124, Address: 0x1e8b78, Func Offset: 0x58
	// Line 2125, Address: 0x1e8b80, Func Offset: 0x60
	// Line 2126, Address: 0x1e8ba0, Func Offset: 0x80
	// Line 2127, Address: 0x1e8bac, Func Offset: 0x8c
	// Line 2129, Address: 0x1e8bb8, Func Offset: 0x98
	// Func End, Address: 0x1e8bcc, Func Offset: 0xac
}

// 
// Start address: 0x1e8bd0
float miscItemmenuDecreaseDurability(GameItem kind)
{
	float rtv;
	int i;
	_anon0* iwk;
	float val;
	// Line 2138, Address: 0x1e8bd0, Func Offset: 0
	// Line 2139, Address: 0x1e8be4, Func Offset: 0x14
	// Line 2141, Address: 0x1e8bf0, Func Offset: 0x20
	// Line 2144, Address: 0x1e8bf4, Func Offset: 0x24
	// Line 2145, Address: 0x1e8c08, Func Offset: 0x38
	// Line 2147, Address: 0x1e8c18, Func Offset: 0x48
	// Line 2148, Address: 0x1e8c20, Func Offset: 0x50
	// Line 2150, Address: 0x1e8c2c, Func Offset: 0x5c
	// Line 2153, Address: 0x1e8c30, Func Offset: 0x60
	// Line 2154, Address: 0x1e8c38, Func Offset: 0x68
	// Line 2155, Address: 0x1e8c50, Func Offset: 0x80
	// Line 2156, Address: 0x1e8c58, Func Offset: 0x88
	// Line 2159, Address: 0x1e8c6c, Func Offset: 0x9c
	// Line 2160, Address: 0x1e8c80, Func Offset: 0xb0
	// Line 2162, Address: 0x1e8c88, Func Offset: 0xb8
	// Line 2164, Address: 0x1e8c90, Func Offset: 0xc0
	// Line 2168, Address: 0x1e8c98, Func Offset: 0xc8
	// Line 2170, Address: 0x1e8ca8, Func Offset: 0xd8
	// Line 2171, Address: 0x1e8cac, Func Offset: 0xdc
	// Func End, Address: 0x1e8cc4, Func Offset: 0xf4
}

// 
// Start address: 0x1e8cd0
int miscItemmenuSearch(GameItem kind)
{
	int i;
	// Line 2176, Address: 0x1e8cd0, Func Offset: 0
	// Line 2178, Address: 0x1e8ce0, Func Offset: 0x10
	// Line 2179, Address: 0x1e8ce8, Func Offset: 0x18
	// Line 2180, Address: 0x1e8cfc, Func Offset: 0x2c
	// Line 2182, Address: 0x1e8d04, Func Offset: 0x34
	// Line 2184, Address: 0x1e8d18, Func Offset: 0x48
	// Func End, Address: 0x1e8d2c, Func Offset: 0x5c
}

// 
// Start address: 0x1e8d30
void miscItemmenuReload(GameItem weapon, int menu_id)
{
	int result;
	int pre_num;
	int num;
	int bullet_num;
	int rest_num;
	int def_num;
	int is_exchange;
	GameItem kind;
	int gun_index;
	// Line 2191, Address: 0x1e8d30, Func Offset: 0
	// Line 2193, Address: 0x1e8d34, Func Offset: 0x4
	// Line 2191, Address: 0x1e8d38, Func Offset: 0x8
	// Line 2198, Address: 0x1e8d44, Func Offset: 0x14
	// Line 2191, Address: 0x1e8d48, Func Offset: 0x18
	// Line 2197, Address: 0x1e8d4c, Func Offset: 0x1c
	// Line 2191, Address: 0x1e8d50, Func Offset: 0x20
	// Line 2192, Address: 0x1e8d64, Func Offset: 0x34
	// Line 2191, Address: 0x1e8d68, Func Offset: 0x38
	// Line 2195, Address: 0x1e8d70, Func Offset: 0x40
	// Line 2191, Address: 0x1e8d74, Func Offset: 0x44
	// Line 2193, Address: 0x1e8d78, Func Offset: 0x48
	// Line 2203, Address: 0x1e8d7c, Func Offset: 0x4c
	// Line 2205, Address: 0x1e8d84, Func Offset: 0x54
	// Line 2206, Address: 0x1e8d94, Func Offset: 0x64
	// Line 2208, Address: 0x1e8da0, Func Offset: 0x70
	// Line 2209, Address: 0x1e8da8, Func Offset: 0x78
	// Line 2210, Address: 0x1e8db8, Func Offset: 0x88
	// Line 2211, Address: 0x1e8dc4, Func Offset: 0x94
	// Line 2213, Address: 0x1e8dd0, Func Offset: 0xa0
	// Line 2214, Address: 0x1e8ddc, Func Offset: 0xac
	// Line 2216, Address: 0x1e8df8, Func Offset: 0xc8
	// Line 2217, Address: 0x1e8dfc, Func Offset: 0xcc
	// Line 2218, Address: 0x1e8e00, Func Offset: 0xd0
	// Line 2219, Address: 0x1e8e08, Func Offset: 0xd8
	// Line 2220, Address: 0x1e8e10, Func Offset: 0xe0
	// Line 2221, Address: 0x1e8e1c, Func Offset: 0xec
	// Line 2226, Address: 0x1e8e28, Func Offset: 0xf8
	// Line 2231, Address: 0x1e8e30, Func Offset: 0x100
	// Line 2232, Address: 0x1e8e38, Func Offset: 0x108
	// Line 2234, Address: 0x1e8e44, Func Offset: 0x114
	// Line 2238, Address: 0x1e8e48, Func Offset: 0x118
	// Line 2240, Address: 0x1e8e54, Func Offset: 0x124
	// Line 2241, Address: 0x1e8e58, Func Offset: 0x128
	// Line 2240, Address: 0x1e8e5c, Func Offset: 0x12c
	// Line 2242, Address: 0x1e8e64, Func Offset: 0x134
	// Line 2244, Address: 0x1e8e6c, Func Offset: 0x13c
	// Line 2245, Address: 0x1e8e74, Func Offset: 0x144
	// Line 2248, Address: 0x1e8e78, Func Offset: 0x148
	// Line 2249, Address: 0x1e8e80, Func Offset: 0x150
	// Line 2250, Address: 0x1e8ea0, Func Offset: 0x170
	// Line 2251, Address: 0x1e8eac, Func Offset: 0x17c
	// Line 2253, Address: 0x1e8eb8, Func Offset: 0x188
	// Func End, Address: 0x1e8ee8, Func Offset: 0x1b8
}

// 
// Start address: 0x1e8ef0
void miscItemmenuBoxToMenu(GameItem kind)
{
	int index;
	// Line 2259, Address: 0x1e8ef0, Func Offset: 0
	// Line 2260, Address: 0x1e8ef8, Func Offset: 0x8
	// Line 2262, Address: 0x1e8f00, Func Offset: 0x10
	// Line 2264, Address: 0x1e8f0c, Func Offset: 0x1c
	// Line 2265, Address: 0x1e8f10, Func Offset: 0x20
	// Line 2264, Address: 0x1e8f14, Func Offset: 0x24
	// Line 2266, Address: 0x1e8f1c, Func Offset: 0x2c
	// Line 2276, Address: 0x1e8f24, Func Offset: 0x34
	// Line 2277, Address: 0x1e8f28, Func Offset: 0x38
	// Func End, Address: 0x1e8f34, Func Offset: 0x44
}

// 
// Start address: 0x1e8f40
void miscItemmenuMenuToBox(int menu_id)
{
	GameItem kind;
	// Line 2281, Address: 0x1e8f40, Func Offset: 0
	// Line 2282, Address: 0x1e8f4c, Func Offset: 0xc
	// Line 2285, Address: 0x1e8f54, Func Offset: 0x14
	// Line 2287, Address: 0x1e8f58, Func Offset: 0x18
	// Line 2285, Address: 0x1e8f5c, Func Offset: 0x1c
	// Line 2286, Address: 0x1e8f60, Func Offset: 0x20
	// Line 2284, Address: 0x1e8f68, Func Offset: 0x28
	// Line 2287, Address: 0x1e8f70, Func Offset: 0x30
	// Line 2289, Address: 0x1e8f78, Func Offset: 0x38
	// Line 2290, Address: 0x1e8f80, Func Offset: 0x40
	// Func End, Address: 0x1e8f90, Func Offset: 0x50
}

// 
// Start address: 0x1e8f90
void miscItemmenuSetIdleStep()
{
	// Line 2294, Address: 0x1e8f90, Func Offset: 0
	// Line 2295, Address: 0x1e8f94, Func Offset: 0x4
	// Line 2294, Address: 0x1e8f98, Func Offset: 0x8
	// Line 2295, Address: 0x1e8f9c, Func Offset: 0xc
	// Line 2296, Address: 0x1e8fa0, Func Offset: 0x10
	// Line 2299, Address: 0x1e8fb0, Func Offset: 0x20
	// Line 2300, Address: 0x1e8fb8, Func Offset: 0x28
	// Line 2301, Address: 0x1e8fd8, Func Offset: 0x48
	// Func End, Address: 0x1e8fe4, Func Offset: 0x54
}

// 
// Start address: 0x1e8ff0
int miscItemmenuHaveAnItem(GameItem kind)
{
	// Line 2306, Address: 0x1e8ff0, Func Offset: 0
	// Line 2307, Address: 0x1e8ff8, Func Offset: 0x8
	// Line 2308, Address: 0x1e9000, Func Offset: 0x10
	// Line 2307, Address: 0x1e9004, Func Offset: 0x14
	// Line 2308, Address: 0x1e900c, Func Offset: 0x1c
	// Func End, Address: 0x1e9014, Func Offset: 0x24
}

// 
// Start address: 0x1e9020
void miscItemmenuCursorForceSet(int menu_id)
{
	// Line 2312, Address: 0x1e9020, Func Offset: 0
	// Line 2313, Address: 0x1e9024, Func Offset: 0x4
	// Line 2314, Address: 0x1e9038, Func Offset: 0x18
	// Line 2315, Address: 0x1e9048, Func Offset: 0x28
	// Line 2318, Address: 0x1e9058, Func Offset: 0x38
	// Func End, Address: 0x1e9064, Func Offset: 0x44
}

