typedef enum _enum : unsigned char;
typedef struct _anon0;
typedef struct _anon1;
typedef struct _Hr3ldkAnotherData;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _GAME_WORK;
typedef struct _anon4;
typedef struct _anon5;
typedef union _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef enum GameItem : unsigned char;
typedef struct sfObj;
typedef struct _anon9;
typedef struct GameItemData;
typedef struct _anon10;
typedef struct _anon11;
typedef struct _anon12;
typedef struct _anon13;
typedef struct EnemyManageDataOne;
typedef struct _PutItemDisableData;
typedef struct _anon14;
typedef struct _EnforceItemWork;
typedef struct _anon15;
typedef struct _anon16;
typedef struct _anon17;
typedef struct EnemyManageBloodPoolData;
typedef struct _anon18;
typedef struct EnemyManageData;
typedef struct _EnforceItemData;
typedef struct _anon19;
typedef struct _anon20;
typedef struct _ObjHitCylinder;
typedef struct _ObjHitCube;
typedef struct _anon21;
typedef struct _anon22;
typedef struct _ObjHitSphere;
typedef struct EventFlag;
typedef struct _anon23;
typedef struct _ObjHitDoor;
typedef struct _ObjHitData;
typedef struct _anon24;
typedef struct _anon25;

typedef void(*type_29)(sfObj*);
typedef void(*type_39)(sfObj*);

typedef int type_0[1];
typedef float type_1[4];
typedef _anon25 type_2[5];
typedef _anon25 type_3[5];
typedef int type_4[1];
typedef _anon21 type_5[15];
typedef float type_6[4];
typedef float type_7[4][4];
typedef char type_8[22];
typedef int type_9[1];
typedef int type_10[1];
typedef char type_11[21];
typedef short type_12[2];
typedef unsigned short type_13[2];
typedef char type_14[4];
typedef unsigned char type_15[4];
typedef int type_16[1];
typedef _anon8 type_17[10];
typedef float type_18[1];
typedef _anon8 type_19[136];
typedef int type_20[1];
typedef _anon2 type_21[2];
typedef float type_22[4];
typedef _anon5 type_23[30];
typedef _anon7 type_24[18];
typedef char type_25[3];
typedef unsigned char type_26[136];
typedef unsigned char type_27[5200];
typedef _anon6 type_28[256];
typedef unsigned char type_30[128];
typedef _anon6 type_31[4];
typedef unsigned char type_32[16];
typedef _anon13 type_33[64];
typedef float type_34[3];
typedef int type_35[1];
typedef unsigned int type_36[32];
typedef EnemyManageDataOne type_37[64];
typedef _EnforceItemWork type_38[32];
typedef EnemyManageBloodPoolData type_40[64];
typedef int type_41[2];
typedef unsigned int type_42[128];
typedef unsigned char type_43[45];
typedef _anon17 type_44[30];
typedef unsigned char type_45[3];
typedef int type_46[1];
typedef unsigned char type_47[320];
typedef char type_48[7];
typedef int type_49[1];
typedef _anon10 type_50[2];

enum _enum : unsigned char
{
	GAME_STAGE_DUMMY,
	GAME_STAGE_3LDK,
	GAME_STAGE_SUBWAY,
	GAME_STAGE_FOREST,
	GAME_STAGE_WATER,
	GAME_STAGE_BUILDING,
	GAME_STAGE_HOME,
	GAME_STAGE_HOSPITAL,
	GAME_STAGE_PAST_HOME,
	GAME_STAGE_LAST,
	GAME_STAGE_TUNNEL,
	GAME_STAGE_SPIRAL,
	GAME_STAGE_TEST,
	GAME_STAGE_MAX
};

struct _anon0
{
	_anon25 crack[5];
	_anon25 ghost[5];
	char crack_no;
	char ghost_no;
	char pad0;
	char pad1;
};

struct _anon1
{
	float position[4];
	float rotation[4];
	float cursed_ratio;
	float total_damage;
	unsigned char arms_type;
	unsigned char stay_stage;
	unsigned char stay_scene;
	unsigned char status;
	unsigned char cynthia_status;
	unsigned char left_with_enemy_status;
	unsigned short left_with_enemy_count;
	unsigned short scene_change_count;
	unsigned short scene_change_with_eileen_count;
	unsigned short down_count;
	unsigned short henry_atk_count;
	unsigned int eileen_play_time;
	unsigned int with_henry_eileen_play_time;
	char flags[21];
};

struct _Hr3ldkAnotherData
{
	short stage;
	short scene;
};

struct _anon2
{
	float life;
	float str;
	float def;
	float life_max;
	float str_max;
	float def_max;
	float pos[4];
	float rot[4];
};

struct _anon3
{
	_anon21 ps[15];
	int time;
	short curse;
	short not_curse;
	char cover;
	char pad1;
	char pad2;
	char pad3;
	_anon23 clock;
	_anon0 mark;
	_anon24 sofa;
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

struct _anon4
{
	char door_num[22];
};

struct _anon5
{
	_enum stage;
	int scene;
	float trans[4];
	float time;
	float time_bg;
};

union _anon6
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

struct _anon7
{
	_enum stage;
	int scene;
	float trans[4];
	float rot[4];
	int en_id;
	sfObj* obj;
};

struct _anon8
{
	float durability;
	unsigned short num;
	unsigned char kind;
	char work;
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

struct sfObj
{
	_anon6 fwork[256];
	_anon6* work;
	void(*func)(sfObj*);
	_anon6* work_pt0;
	_anon6* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon6* sys_work;
	_anon6* scene_work;
	_anon6* event_work;
	_anon6* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct _anon9
{
	GameItem wp_last;
	int curse_step;
};

struct GameItemData
{
	_anon8 possession[10];
	_anon8 box[136];
	unsigned short box_max;
	unsigned char handgun_ammo;
	unsigned char weapon_kind;
	char is_saint_medallion_equiped;
	char pad[3];
	unsigned char flag_tbl[136];
};

struct _anon10
{
	int size;
	int last;
	int file_cursor;
	int file_start;
	unsigned int c_key;
	int pad1;
	int pad2;
	int pad3;
	_anon17 list[30];
	_anon19 option;
};

struct _anon11
{
	_anon2 params[2];
	_anon5 holy_data[30];
	_anon7 finish_data[18];
	_anon9 add_data;
};

struct _anon12
{
	int size;
	unsigned int played;
	int last;
	int level;
	short ending;
	short dress;
	int stage;
	int scene;
	char dress_ava;
	char cyn_ava;
	unsigned short hi_score;
	unsigned int continue_count;
	int killed_enemy;
	unsigned int l_key;
	int offset_event_flag;
	int offset_game_item;
	int offset_enemy_data;
	int offset_putitem_disable_data;
	int offset_enforce_item_data;
	int offset_player_data;
	int offset_eileen_data;
	int offset_mz_rot_info;
	int offset_map_flag_data;
	int offset_phenom_data;
	int offset_hospital_door_data;
	int offset_hr3ldk_another_data;
	int offset_dummy_02;
	int offset_dummy_03;
	int offset_dummy_04;
	int offset_dummy_05;
	int offset_dummy_06;
	int offset_dummy_07;
	int offset_dummy_08;
	int offset_dummy_09;
	EventFlag event_flag;
	GameItemData game_item;
	EnemyManageData enemy_data;
	_PutItemDisableData putitem_disable_data;
	_EnforceItemData enforce_item_data;
	_anon11 player_data;
	_anon1 eileen_data;
	_anon22 mz_rot_info;
	_anon20 map_flag_data;
	_anon3 phenom_data;
	_anon4 hospital_door_data;
	_Hr3ldkAnotherData hr3ldk_another_data;
};

struct _anon13
{
	struct
	{
		unsigned char touch_1st : 1;
		unsigned char touch_2nd : 1;
		unsigned char is_through : 1;
		unsigned char is_locked : 1;
		unsigned char is_broken : 1;
		unsigned char is_key : 1;
		unsigned char padding : 2;
	};
};

struct EnemyManageDataOne
{
	float pos[4];
	float rot[4];
	unsigned int id;
	short kind;
	short condition;
	float hp;
	float leave_time;
	short serial;
	char step;
	char type;
	char mode;
	char anime;
	char stage;
	char scene;
	unsigned int lru_point;
	_anon6 work[4];
	unsigned int padding;
};

struct _PutItemDisableData
{
	unsigned char flag[5200];
};

struct _anon14
{
	unsigned char stat;
	unsigned char second;
	unsigned char minute;
	unsigned char hour;
	unsigned char pad;
	unsigned char day;
	unsigned char month;
	unsigned char year;
};

struct _EnforceItemWork
{
	char use;
	char finisher;
	short live;
	short no;
	short stage;
	short scene;
	short type;
	float p[4];
	float quat[4];
	int model_id;
	int tex_id;
	int item_id;
	short level;
	_ObjHitData hitdt;
	int val[1];
};

struct _anon15
{
	short xx;
	short yy;
};

struct _anon16
{
	unsigned char pass[128];
	unsigned char additional_flag[16];
	_anon13 door_stat[64];
};

struct _anon17
{
	_anon15 ver;
	unsigned int played;
	_anon14 clock;
	int last;
	int level;
	short ending;
	char end_no;
	unsigned char end_sc;
	int save;
	int dress_ava;
	char game_mode;
	char clear_1wep;
	unsigned short hi_score;
	int pad2;
	int pad3;
};

struct EnemyManageBloodPoolData
{
	float pos[3];
	float size;
	char stage;
	char scene;
	unsigned short lru_point;
};

struct _anon18
{
	struct
	{
		unsigned char pipe_0 : 2;
		unsigned char pipe_1 : 2;
		unsigned char pipe_2 : 2;
		unsigned char pipe_3 : 2;
	};
	struct
	{
		unsigned char pipe_4 : 2;
		unsigned char pipe_5 : 2;
		unsigned char pipe_6 : 2;
		unsigned char pipe_7 : 2;
	};
};

struct EnemyManageData
{
	unsigned int destroy_flag[32];
	EnemyManageDataOne data[64];
	EnemyManageBloodPoolData bloodpool[64];
	unsigned int item_data[128];
	float hil_size;
	unsigned int version;
};

struct _EnforceItemData
{
	_EnforceItemWork item_work[32];
};

struct _anon19
{
	int screen_pos[2];
	char head_motion;
	char hide_gauge;
	char hide_icon;
	char vibration;
	char sound;
	char bgm_vol;
	char se_vol;
	char keyconf;
	char brightness;
	char language;
	char subtitles;
	char blood_col;
	char noise_eff;
	char contrast;
	char cam_reverse;
	char move_parallel;
	char is_walk;
	char pad1[7];
};

struct _anon20
{
	unsigned char have_map[45];
	_anon16 sb;
	_anon16 fr;
	_anon16 mz;
	_anon16 bd;
	_anon16 ie;
	_anon16 hs;
	_anon16 cm;
	unsigned char mz_peep_1f;
	unsigned char mz_peep_2f;
	unsigned char mz_peep_3f;
	_anon18 mz_pipe_1f;
	_anon18 mz_pipe_2f;
	_anon18 mz_pipe_3f;
};

struct _ObjHitCylinder
{
	float r;
	float h;
};

struct _ObjHitCube
{
	float w;
	float h;
	float d;
};

struct _anon21
{
	float level;
	float damage;
	short timer;
	char stat;
	char pad0;
};

struct _anon22
{
	int b1_rot_n;
	int f1_rot_n;
	int f2_rot_n;
	int f3_rot_n;
};

struct _ObjHitSphere
{
	float r;
};

struct EventFlag
{
	unsigned char flag[320];
};

struct _anon23
{
	float l_hand;
	float s_hand;
	int frame;
};

struct _ObjHitDoor
{
	int num;
};

struct _ObjHitData
{
	float pos[4];
	int type;
	unsigned int attr;
	float rot;
	void* check_func;
	union
	{
		_ObjHitCylinder cl;
		_ObjHitCube cb;
		_ObjHitSphere sp;
		_ObjHitDoor dr;
	};
};

struct _anon24
{
	short access;
	short timer;
};

struct _anon25
{
	float pos[4];
	char room;
	char dir;
	char pad0;
	char pad1;
};

_anon10 common_save_data[2];
_anon12 save_data;
void* coded_work;
GameItemData game_item;
_GAME_WORK gamew;

_anon10* GetCommonSaveDataAddress(int port);
_anon10* GetCodedCommonSaveDataAddress();
_anon12* GetCodedSaveDataAddress();
void AllocateCodedSaveData();
void FreeCodedSaveData();
void mem_card_code(unsigned char* dest, unsigned char* src, int size, unsigned int key);
unsigned int mem_card_make_key();
void EncodeCommonSaveData(int port);
void EncodeSaveData();
void DecodeCommonSaveData(int port);
void DecodeSaveData();
void RestoreSaveData();
void MakeSaveData();
void Make1stCommonSaveData(int port);
void Make2ndCommonSaveData(int port, int file_no);
void Del2ndCommonSaveData(int port, int file_no);

// 
// Start address: 0x2be0a0
_anon10* GetCommonSaveDataAddress(int port)
{
	// Line 46, Address: 0x2be0a0, Func Offset: 0
	// Line 47, Address: 0x2be0bc, Func Offset: 0x1c
	// Func End, Address: 0x2be0c4, Func Offset: 0x24
}

// 
// Start address: 0x2be0d0
_anon10* GetCodedCommonSaveDataAddress()
{
	// Line 62, Address: 0x2be0d0, Func Offset: 0
	// Line 63, Address: 0x2be0d4, Func Offset: 0x4
	// Func End, Address: 0x2be0dc, Func Offset: 0xc
}

// 
// Start address: 0x2be0e0
_anon12* GetCodedSaveDataAddress()
{
	// Line 69, Address: 0x2be0e0, Func Offset: 0
	// Line 70, Address: 0x2be0e4, Func Offset: 0x4
	// Func End, Address: 0x2be0ec, Func Offset: 0xc
}

// 
// Start address: 0x2be0f0
void AllocateCodedSaveData()
{
	// Line 75, Address: 0x2be0f0, Func Offset: 0
	// Line 76, Address: 0x2be0f8, Func Offset: 0x8
	// Line 77, Address: 0x2be108, Func Offset: 0x18
	// Func End, Address: 0x2be114, Func Offset: 0x24
}

// 
// Start address: 0x2be120
void FreeCodedSaveData()
{
	// Line 80, Address: 0x2be120, Func Offset: 0
	// Func End, Address: 0x2be12c, Func Offset: 0xc
}

// 
// Start address: 0x2be130
void mem_card_code(unsigned char* dest, unsigned char* src, int size, unsigned int key)
{
	unsigned char c;
	unsigned char u;
	unsigned char dk;
	unsigned char ukey[3];
	unsigned char* uptr;
	int cnt;
	// Line 93, Address: 0x2be130, Func Offset: 0
	// Line 94, Address: 0x2be134, Func Offset: 0x4
	// Line 93, Address: 0x2be138, Func Offset: 0x8
	// Line 94, Address: 0x2be13c, Func Offset: 0xc
	// Line 86, Address: 0x2be144, Func Offset: 0x14
	// Line 95, Address: 0x2be148, Func Offset: 0x18
	// Line 96, Address: 0x2be14c, Func Offset: 0x1c
	// Line 95, Address: 0x2be150, Func Offset: 0x20
	// Line 94, Address: 0x2be154, Func Offset: 0x24
	// Line 95, Address: 0x2be158, Func Offset: 0x28
	// Line 98, Address: 0x2be15c, Func Offset: 0x2c
	// Line 99, Address: 0x2be160, Func Offset: 0x30
	// Line 110, Address: 0x2be164, Func Offset: 0x34
	// Line 102, Address: 0x2be168, Func Offset: 0x38
	// Line 103, Address: 0x2be16c, Func Offset: 0x3c
	// Line 109, Address: 0x2be170, Func Offset: 0x40
	// Line 102, Address: 0x2be174, Func Offset: 0x44
	// Line 104, Address: 0x2be178, Func Offset: 0x48
	// Line 105, Address: 0x2be17c, Func Offset: 0x4c
	// Line 107, Address: 0x2be180, Func Offset: 0x50
	// Line 108, Address: 0x2be184, Func Offset: 0x54
	// Line 105, Address: 0x2be188, Func Offset: 0x58
	// Line 110, Address: 0x2be18c, Func Offset: 0x5c
	// Line 111, Address: 0x2be194, Func Offset: 0x64
	// Line 112, Address: 0x2be198, Func Offset: 0x68
	// Line 113, Address: 0x2be19c, Func Offset: 0x6c
	// Line 115, Address: 0x2be1a0, Func Offset: 0x70
	// Line 116, Address: 0x2be1a4, Func Offset: 0x74
	// Line 119, Address: 0x2be1ac, Func Offset: 0x7c
	// Func End, Address: 0x2be1b4, Func Offset: 0x84
}

// 
// Start address: 0x2be1c0
unsigned int mem_card_make_key()
{
	unsigned int key;
	unsigned int c;
	// Line 125, Address: 0x2be1c0, Func Offset: 0
	// Line 129, Address: 0x2be1c8, Func Offset: 0x8
	// Line 130, Address: 0x2be1d4, Func Offset: 0x14
	// Line 133, Address: 0x2be1e0, Func Offset: 0x20
	// Line 130, Address: 0x2be1e4, Func Offset: 0x24
	// Line 131, Address: 0x2be1f8, Func Offset: 0x38
	// Line 132, Address: 0x2be200, Func Offset: 0x40
	// Line 133, Address: 0x2be204, Func Offset: 0x44
	// Func End, Address: 0x2be210, Func Offset: 0x50
}

// 
// Start address: 0x2be210
void EncodeCommonSaveData(int port)
{
	unsigned int c_key;
	_anon10* ptr;
	// Line 138, Address: 0x2be210, Func Offset: 0
	// Line 142, Address: 0x2be214, Func Offset: 0x4
	// Line 138, Address: 0x2be218, Func Offset: 0x8
	// Line 142, Address: 0x2be224, Func Offset: 0x14
	// Line 144, Address: 0x2be228, Func Offset: 0x18
	// Line 145, Address: 0x2be234, Func Offset: 0x24
	// Line 144, Address: 0x2be238, Func Offset: 0x28
	// Line 145, Address: 0x2be23c, Func Offset: 0x2c
	// Line 147, Address: 0x2be244, Func Offset: 0x34
	// Line 144, Address: 0x2be248, Func Offset: 0x38
	// Line 147, Address: 0x2be24c, Func Offset: 0x3c
	// Line 145, Address: 0x2be258, Func Offset: 0x48
	// Line 147, Address: 0x2be25c, Func Offset: 0x4c
	// Line 148, Address: 0x2be270, Func Offset: 0x60
	// Line 149, Address: 0x2be274, Func Offset: 0x64
	// Func End, Address: 0x2be288, Func Offset: 0x78
}

// 
// Start address: 0x2be290
void EncodeSaveData()
{
	unsigned int l_key;
	_anon12* ptr;
	// Line 154, Address: 0x2be290, Func Offset: 0
	// Line 158, Address: 0x2be294, Func Offset: 0x4
	// Line 154, Address: 0x2be298, Func Offset: 0x8
	// Line 160, Address: 0x2be2a0, Func Offset: 0x10
	// Line 163, Address: 0x2be2a8, Func Offset: 0x18
	// Line 161, Address: 0x2be2ac, Func Offset: 0x1c
	// Line 163, Address: 0x2be2b0, Func Offset: 0x20
	// Line 164, Address: 0x2be2c8, Func Offset: 0x38
	// Line 165, Address: 0x2be2cc, Func Offset: 0x3c
	// Func End, Address: 0x2be2dc, Func Offset: 0x4c
}

// 
// Start address: 0x2be2e0
void DecodeCommonSaveData(int port)
{
	_anon10* ptr;
	// Line 174, Address: 0x2be2e0, Func Offset: 0
	// Line 178, Address: 0x2be2e4, Func Offset: 0x4
	// Line 174, Address: 0x2be2e8, Func Offset: 0x8
	// Line 178, Address: 0x2be2ec, Func Offset: 0xc
	// Func End, Address: 0x2be314, Func Offset: 0x34
}

// 
// Start address: 0x2be320
void DecodeSaveData()
{
	_anon12* ptr;
	// Line 188, Address: 0x2be320, Func Offset: 0
	// Line 191, Address: 0x2be324, Func Offset: 0x4
	// Line 188, Address: 0x2be328, Func Offset: 0x8
	// Line 191, Address: 0x2be32c, Func Offset: 0xc
	// Func End, Address: 0x2be33c, Func Offset: 0x1c
}

// 
// Start address: 0x2be340
void RestoreSaveData()
{
	// Line 198, Address: 0x2be340, Func Offset: 0
	// Line 210, Address: 0x2be344, Func Offset: 0x4
	// Line 198, Address: 0x2be348, Func Offset: 0x8
	// Line 210, Address: 0x2be34c, Func Offset: 0xc
	// Line 211, Address: 0x2be354, Func Offset: 0x14
	// Line 212, Address: 0x2be360, Func Offset: 0x20
	// Line 213, Address: 0x2be36c, Func Offset: 0x2c
	// Line 216, Address: 0x2be378, Func Offset: 0x38
	// Line 217, Address: 0x2be398, Func Offset: 0x58
	// Line 218, Address: 0x2be3a8, Func Offset: 0x68
	// Line 219, Address: 0x2be3b0, Func Offset: 0x70
	// Line 220, Address: 0x2be3b8, Func Offset: 0x78
	// Line 221, Address: 0x2be3c0, Func Offset: 0x80
	// Line 223, Address: 0x2be3c8, Func Offset: 0x88
	// Line 225, Address: 0x2be3d0, Func Offset: 0x90
	// Line 229, Address: 0x2be3dc, Func Offset: 0x9c
	// Line 230, Address: 0x2be3e8, Func Offset: 0xa8
	// Line 232, Address: 0x2be3f4, Func Offset: 0xb4
	// Line 234, Address: 0x2be408, Func Offset: 0xc8
	// Line 235, Address: 0x2be414, Func Offset: 0xd4
	// Line 237, Address: 0x2be420, Func Offset: 0xe0
	// Line 240, Address: 0x2be438, Func Offset: 0xf8
	// Line 241, Address: 0x2be478, Func Offset: 0x138
	// Line 244, Address: 0x2be490, Func Offset: 0x150
	// Line 247, Address: 0x2be4a8, Func Offset: 0x168
	// Line 250, Address: 0x2be4c0, Func Offset: 0x180
	// Line 253, Address: 0x2be4d8, Func Offset: 0x198
	// Line 256, Address: 0x2be4f0, Func Offset: 0x1b0
	// Line 259, Address: 0x2be508, Func Offset: 0x1c8
	// Line 262, Address: 0x2be520, Func Offset: 0x1e0
	// Line 265, Address: 0x2be538, Func Offset: 0x1f8
	// Line 268, Address: 0x2be550, Func Offset: 0x210
	// Line 272, Address: 0x2be568, Func Offset: 0x228
	// Func End, Address: 0x2be574, Func Offset: 0x234
}

// 
// Start address: 0x2be580
void MakeSaveData()
{
	// Line 277, Address: 0x2be580, Func Offset: 0
	// Line 278, Address: 0x2be588, Func Offset: 0x8
	// Line 280, Address: 0x2be590, Func Offset: 0x10
	// Line 282, Address: 0x2be598, Func Offset: 0x18
	// Line 283, Address: 0x2be5a4, Func Offset: 0x24
	// Line 284, Address: 0x2be5b0, Func Offset: 0x30
	// Line 285, Address: 0x2be5bc, Func Offset: 0x3c
	// Line 286, Address: 0x2be5c8, Func Offset: 0x48
	// Line 287, Address: 0x2be5d4, Func Offset: 0x54
	// Line 288, Address: 0x2be5e0, Func Offset: 0x60
	// Line 290, Address: 0x2be5f0, Func Offset: 0x70
	// Line 291, Address: 0x2be5f8, Func Offset: 0x78
	// Line 290, Address: 0x2be600, Func Offset: 0x80
	// Line 291, Address: 0x2be608, Func Offset: 0x88
	// Line 293, Address: 0x2be60c, Func Offset: 0x8c
	// Line 294, Address: 0x2be618, Func Offset: 0x98
	// Line 298, Address: 0x2be624, Func Offset: 0xa4
	// Line 294, Address: 0x2be628, Func Offset: 0xa8
	// Line 298, Address: 0x2be62c, Func Offset: 0xac
	// Line 299, Address: 0x2be640, Func Offset: 0xc0
	// Line 301, Address: 0x2be648, Func Offset: 0xc8
	// Line 302, Address: 0x2be658, Func Offset: 0xd8
	// Line 301, Address: 0x2be65c, Func Offset: 0xdc
	// Line 302, Address: 0x2be664, Func Offset: 0xe4
	// Line 301, Address: 0x2be668, Func Offset: 0xe8
	// Line 302, Address: 0x2be66c, Func Offset: 0xec
	// Line 304, Address: 0x2be690, Func Offset: 0x110
	// Line 305, Address: 0x2be6a8, Func Offset: 0x128
	// Line 307, Address: 0x2be6b0, Func Offset: 0x130
	// Line 308, Address: 0x2be6c8, Func Offset: 0x148
	// Line 310, Address: 0x2be6d0, Func Offset: 0x150
	// Line 311, Address: 0x2be6e8, Func Offset: 0x168
	// Line 313, Address: 0x2be6f0, Func Offset: 0x170
	// Line 314, Address: 0x2be708, Func Offset: 0x188
	// Line 316, Address: 0x2be710, Func Offset: 0x190
	// Line 317, Address: 0x2be728, Func Offset: 0x1a8
	// Line 319, Address: 0x2be730, Func Offset: 0x1b0
	// Line 320, Address: 0x2be748, Func Offset: 0x1c8
	// Line 322, Address: 0x2be750, Func Offset: 0x1d0
	// Line 323, Address: 0x2be768, Func Offset: 0x1e8
	// Line 325, Address: 0x2be770, Func Offset: 0x1f0
	// Line 326, Address: 0x2be788, Func Offset: 0x208
	// Line 328, Address: 0x2be790, Func Offset: 0x210
	// Line 329, Address: 0x2be7a8, Func Offset: 0x228
	// Line 331, Address: 0x2be7b0, Func Offset: 0x230
	// Line 332, Address: 0x2be7c8, Func Offset: 0x248
	// Line 334, Address: 0x2be7d0, Func Offset: 0x250
	// Line 335, Address: 0x2be7d8, Func Offset: 0x258
	// Line 336, Address: 0x2be7e0, Func Offset: 0x260
	// Line 337, Address: 0x2be7e8, Func Offset: 0x268
	// Line 338, Address: 0x2be7f0, Func Offset: 0x270
	// Line 339, Address: 0x2be7f8, Func Offset: 0x278
	// Line 340, Address: 0x2be800, Func Offset: 0x280
	// Line 341, Address: 0x2be808, Func Offset: 0x288
	// Line 343, Address: 0x2be810, Func Offset: 0x290
	// Func End, Address: 0x2be81c, Func Offset: 0x29c
}

// 
// Start address: 0x2be820
void Make1stCommonSaveData(int port)
{
	int i;
	// Line 348, Address: 0x2be820, Func Offset: 0
	// Line 351, Address: 0x2be824, Func Offset: 0x4
	// Line 348, Address: 0x2be828, Func Offset: 0x8
	// Line 351, Address: 0x2be830, Func Offset: 0x10
	// Line 354, Address: 0x2be844, Func Offset: 0x24
	// Line 356, Address: 0x2be84c, Func Offset: 0x2c
	// Line 351, Address: 0x2be850, Func Offset: 0x30
	// Line 354, Address: 0x2be85c, Func Offset: 0x3c
	// Line 351, Address: 0x2be860, Func Offset: 0x40
	// Line 357, Address: 0x2be864, Func Offset: 0x44
	// Line 356, Address: 0x2be868, Func Offset: 0x48
	// Line 354, Address: 0x2be86c, Func Offset: 0x4c
	// Line 353, Address: 0x2be870, Func Offset: 0x50
	// Line 357, Address: 0x2be874, Func Offset: 0x54
	// Line 356, Address: 0x2be878, Func Offset: 0x58
	// Line 353, Address: 0x2be87c, Func Offset: 0x5c
	// Line 357, Address: 0x2be880, Func Offset: 0x60
	// Line 354, Address: 0x2be884, Func Offset: 0x64
	// Line 359, Address: 0x2be888, Func Offset: 0x68
	// Line 356, Address: 0x2be88c, Func Offset: 0x6c
	// Line 359, Address: 0x2be890, Func Offset: 0x70
	// Line 357, Address: 0x2be894, Func Offset: 0x74
	// Line 359, Address: 0x2be898, Func Offset: 0x78
	// Line 360, Address: 0x2be8a0, Func Offset: 0x80
	// Line 364, Address: 0x2be8b8, Func Offset: 0x98
	// Line 360, Address: 0x2be8bc, Func Offset: 0x9c
	// Line 365, Address: 0x2be8d8, Func Offset: 0xb8
	// Line 367, Address: 0x2be900, Func Offset: 0xe0
	// Func End, Address: 0x2be910, Func Offset: 0xf0
}

// 
// Start address: 0x2be910
void Make2ndCommonSaveData(int port, int file_no)
{
	_anon17* lptr;
	// Line 372, Address: 0x2be910, Func Offset: 0
	// Line 376, Address: 0x2be934, Func Offset: 0x24
	// Line 372, Address: 0x2be938, Func Offset: 0x28
	// Line 376, Address: 0x2be944, Func Offset: 0x34
	// Line 372, Address: 0x2be948, Func Offset: 0x38
	// Line 375, Address: 0x2be94c, Func Offset: 0x3c
	// Line 376, Address: 0x2be950, Func Offset: 0x40
	// Line 375, Address: 0x2be954, Func Offset: 0x44
	// Line 378, Address: 0x2be958, Func Offset: 0x48
	// Line 376, Address: 0x2be95c, Func Offset: 0x4c
	// Line 378, Address: 0x2be960, Func Offset: 0x50
	// Line 381, Address: 0x2be968, Func Offset: 0x58
	// Line 382, Address: 0x2be96c, Func Offset: 0x5c
	// Line 381, Address: 0x2be970, Func Offset: 0x60
	// Line 384, Address: 0x2be974, Func Offset: 0x64
	// Line 381, Address: 0x2be978, Func Offset: 0x68
	// Line 383, Address: 0x2be97c, Func Offset: 0x6c
	// Line 381, Address: 0x2be980, Func Offset: 0x70
	// Line 382, Address: 0x2be984, Func Offset: 0x74
	// Line 381, Address: 0x2be988, Func Offset: 0x78
	// Line 383, Address: 0x2be98c, Func Offset: 0x7c
	// Line 385, Address: 0x2be990, Func Offset: 0x80
	// Line 384, Address: 0x2be994, Func Offset: 0x84
	// Line 385, Address: 0x2be998, Func Offset: 0x88
	// Line 387, Address: 0x2be9a0, Func Offset: 0x90
	// Line 388, Address: 0x2be9ac, Func Offset: 0x9c
	// Line 389, Address: 0x2be9b8, Func Offset: 0xa8
	// Line 390, Address: 0x2be9c0, Func Offset: 0xb0
	// Line 391, Address: 0x2be9c8, Func Offset: 0xb8
	// Line 392, Address: 0x2be9d4, Func Offset: 0xc4
	// Line 393, Address: 0x2be9dc, Func Offset: 0xcc
	// Line 396, Address: 0x2be9e4, Func Offset: 0xd4
	// Line 397, Address: 0x2be9ec, Func Offset: 0xdc
	// Line 398, Address: 0x2be9f8, Func Offset: 0xe8
	// Line 403, Address: 0x2bea00, Func Offset: 0xf0
	// Line 398, Address: 0x2bea04, Func Offset: 0xf4
	// Line 400, Address: 0x2bea08, Func Offset: 0xf8
	// Line 403, Address: 0x2bea0c, Func Offset: 0xfc
	// Line 404, Address: 0x2bea14, Func Offset: 0x104
	// Func End, Address: 0x2bea28, Func Offset: 0x118
}

// 
// Start address: 0x2bea30
void Del2ndCommonSaveData(int port, int file_no)
{
	int i;
	int newest;
	unsigned long* l0;
	unsigned long* l1;
	_anon14 clock;
	_anon17* lptr;
	// Line 409, Address: 0x2bea34, Func Offset: 0x4
	// Line 416, Address: 0x2bea48, Func Offset: 0x18
	// Line 409, Address: 0x2bea4c, Func Offset: 0x1c
	// Line 416, Address: 0x2bea50, Func Offset: 0x20
	// Line 409, Address: 0x2bea5c, Func Offset: 0x2c
	// Line 416, Address: 0x2bea60, Func Offset: 0x30
	// Line 420, Address: 0x2bea64, Func Offset: 0x34
	// Line 417, Address: 0x2bea68, Func Offset: 0x38
	// Line 419, Address: 0x2bea6c, Func Offset: 0x3c
	// Line 422, Address: 0x2bea70, Func Offset: 0x40
	// Line 421, Address: 0x2bea74, Func Offset: 0x44
	// Line 424, Address: 0x2bea78, Func Offset: 0x48
	// Line 422, Address: 0x2bea7c, Func Offset: 0x4c
	// Line 424, Address: 0x2bea80, Func Offset: 0x50
	// Line 425, Address: 0x2bea8c, Func Offset: 0x5c
	// Line 426, Address: 0x2bea90, Func Offset: 0x60
	// Line 427, Address: 0x2beaa0, Func Offset: 0x70
	// Line 428, Address: 0x2beaa4, Func Offset: 0x74
	// Line 430, Address: 0x2beaa8, Func Offset: 0x78
	// Line 431, Address: 0x2beab8, Func Offset: 0x88
	// Line 432, Address: 0x2beac8, Func Offset: 0x98
	// Func End, Address: 0x2bead0, Func Offset: 0xa0
}

