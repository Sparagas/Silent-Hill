typedef struct _PLAYER_WORK;
typedef struct sfObj;
typedef struct sgBone;
typedef struct sfOffsetAABB;
typedef struct _EventDriver;
typedef union sfCldBody;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sfCldPart;
typedef struct _anon0;
typedef struct sgIKHandle;
typedef struct _anon1;
typedef struct sfCharacter;
typedef struct _anon2;
typedef struct sgAnime;
typedef enum _enum : unsigned char;
typedef union _anon3;
typedef struct _GAME_WORK;
typedef struct sfCldObject;
typedef struct _anon4;
typedef struct sgQTNode;
typedef struct _anon5;
typedef struct sgSVModel;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _anon9;
typedef struct sgQTObject;
typedef struct _anon10;
typedef enum GameItem : unsigned char;
typedef struct _anon11;

typedef void(*type_0)(sfObj*);
typedef int(*type_1)(sfObj*);
typedef void(*type_2)(sfObj*);
typedef int(*type_3)(sfObj*);
typedef void(*type_4)(sfObj*);
typedef int(*type_5)(sfObj*);
typedef int(*type_6)(sfObj*);
typedef int(*type_8)(sfObj*);
typedef sgIKSolveResult(*type_14)();
typedef void(*type_19)(sfObj*);
typedef void(*type_24)(sgAnime*, int);
typedef void(*type_25)(sfObj*);
typedef void(*type_32)(_anon5*, int, int, float*);

typedef unsigned char type_7[3];
typedef float type_9[4];
typedef float type_10[4][4];
typedef float type_11[4][2];
typedef _anon3 type_12[4];
typedef int type_13[1];
typedef int type_15[1];
typedef int type_16[1];
typedef _anon3 type_17[256];
typedef float type_18[4];
typedef int type_20[1];
typedef void* type_21[4];
typedef int type_22[1];
typedef int type_23[1];
typedef _anon2 type_26[30];
typedef int type_27[1];
typedef sfCldPart* type_28[6];
typedef unsigned char type_29[4];
typedef unsigned char type_30[3];
typedef float type_31[4];
typedef short type_33[2];
typedef unsigned short type_34[2];
typedef char type_35[4];
typedef _anon3 type_36[6];
typedef unsigned char type_37[4];
typedef float type_38[1];
typedef int type_39[1];

struct _PLAYER_WORK
{
	int num;
	int type;
	float life;
	float str;
	float def;
	float tire;
	int dull_count;
	int dulls;
	int dull_motion;
	int invincible;
	GameItem wp_last;
	float life_max;
	float str_max;
	float def_max;
	float ampule_time;
	int draw_flag;
	float pos[4];
	float v_pos[4];
	float eyerot[4];
	float prev_pos[4];
	float rot[4];
	float prev_rot[4];
	float v_rot[4];
	float speed;
	sfCharacter chara;
	sfCharacter* obj;
	sgAnime* anim;
	sgAnime* anim_frame;
	sfCldObject cld_obj;
	sfObj* ch_obj;
	int battle_stat;
	int holy_stat;
	float power_attack;
	int damage;
	int gotmode;
	int hold;
	int hold_kind;
	float hold_time;
	int gun_ikset;
	float gun_angle;
	sfObj* target;
	int target_mode;
	GameItem weapon_kind;
	sfCharacter weapon_chr;
	sfCharacter* wp_chr;
	sfObj* wp_obj;
	sfCldObject weapon_cld;
	sfCldObject* wp_cld;
	int cld_entry;
	GameItem holy_kind;
	int autolock;
	int sword_stat;
	int enemy_near;
	int anime_process;
	int anime_sub;
	_anon4* anim_ctrl;
	int slot_frame;
	int link_anim;
	int slot_link;
	float anim_speed;
	float hit_reduce;
	int auto_search;
	int pos_f;
	float pos_bak[4];
	float rot_bak[4];
	float last_neck[4];
	int advance_only;
	int who;
};

struct sfObj
{
	_anon3 fwork[256];
	_anon3* work;
	void(*func)(sfObj*);
	_anon3* work_pt0;
	_anon3* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon3* sys_work;
	_anon3* scene_work;
	_anon3* event_work;
	_anon3* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct sgBone
{
	float rot[4];
	float trans[4];
	float scale[4];
	float abs_rot[4];
	float abs_trans[4];
	sgBone* parent;
	sgBone* child_list;
	sgBone* child_sibling;
	unsigned short last;
	unsigned short flag;
	float partly_blend_rate;
};

struct sfOffsetAABB
{
	_anon10 aabb;
	float offset[4];
};

struct _EventDriver
{
	int evnum;
	int(*trgchk)(sfObj*);
	int(*init)(sfObj*);
	int(*exec)(sfObj*);
	int(*draw)(sfObj*);
	int(*end)(sfObj*);
	unsigned int* file;
	_anon3 val[4];
};

union sfCldBody
{
	_anon11 obb;
	_anon10 aabb;
	sfOffsetAABB offset_aabb;
	_anon8 line;
	_anon9 sphere;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct sfCldPart
{
	sfCldBody world_hit;
	sfCldBody local_hit;
	unsigned char hit_type;
	unsigned char pad[3];
	int hit_kind;
	sgBone* parent;
	void* data;
	void* parent_cld;
};

struct _anon0
{
	_enum stage;
	int scene;
	float trans[4];
	float time;
	float time_bg;
};

struct sgIKHandle
{
	float acceleration[4][2];
	float damping_ratio;
	sgBone* bone;
	sgBone* start;
	sgBone* end;
	sgIKSolveResult(*solver)();
	sgIKSolveResult solve_result;
	float reach_constrain;
	float close_constrain;
	sgIKHandle* next;
};

struct _anon1
{
	sfCharacter chr;
	_anon2* data;
	int count;
	int back;
};

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon6 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

struct _anon2
{
	_enum stage;
	int scene;
	float trans[4];
	float time;
	float time_bg;
};

struct sgAnime
{
	void* play_data[4];
	sgBone* transforms;
	int n_transforms;
	sgIKHandle* ik_handles;
	sgBone* object_space;
	void(*post_func)(sgAnime*, int);
	float* reals;
	int n_reals;
	float vectors[4];
	int n_vectors;
	int current_time;
	int time_add;
	unsigned char play_status[4];
	unsigned short flag;
	unsigned short construct_check;
};

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

union _anon3
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

struct sfCldObject
{
	sgQTObject tree_object;
	sgQTNode* stay_node;
	sfCldPart* parts[6];
	unsigned char n_parts;
	unsigned char pad[3];
	void* data;
};

struct _anon4
{
	int dummy;
};

struct sgQTNode
{
	int dummy;
};

struct _anon5
{
	unsigned long tex0;
	unsigned long clamp;
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct _anon6
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon5*, int, int, float*);
	int equip_flag;
};

struct _anon7
{
	float abcd[4];
};

struct _anon8
{
	float start[4];
	float end[4];
};

struct _anon9
{
	float center[4];
	float radius;
};

struct sgQTObject
{
	_anon9 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

struct _anon10
{
	float bmin[4];
	float bmax[4];
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

struct _anon11
{
	float mat[4][4];
	float half_w[4];
};

float tx_candle[4];
float rx_candle[4];
_anon2 candle_data[30];
_anon3 cant_msg[6];
_EventDriver cant_event;
_GAME_WORK gamew;
void(*PlayerBattleHolyItemCandleDestruct)(sfObj*);
void(*PlayerBattleHolyItemCandleRender)(sfObj*);
float sg_vector_unit_x[4];
void(*PlayerBattleHolyItemCandleObj)(sfObj*);
sfCharacter* chr;
sfCharacter h_chr;
float h_pos[4];

_anon2* get_free_data();
void destruct_data(_anon2* data);
void PlayerBattleHolyInitAtGameStart();
void PlayerBattleHolyRestoreData(_anon0* load_data);
void PlayerBattleHolyMakeData(_anon0* save_data);
void PlayerBattleHolySetScene();
void PlayerBattleHolyCandleSetBack(sfObj* obj);
int PlayerBattleHolyItemCandleSet(_anon2* data, float* pos_n);
int PlayerBattleHolyItemCandleSetByData(_anon2* data);
int PlayerBattleHolyItemCandleConstruct(float* pos);
void PlayerBattleHolyItemCandleObj(sfObj* obj);
void PlayerBattleHolyItemCandleRender(sfObj* obj);
void PlayerBattleHolyItemCandleDestruct(sfObj* obj);
void set_candle(_PLAYER_WORK* p);
void PlayerBattleHolyItemCharacterDraw(_PLAYER_WORK* p);
void PlayerBattleHolyItemCharacterDestruct();
void PlayerBattleHolyItemMain(_PLAYER_WORK* p);
int PlayerBattleHolyItemCandleSet3LDK();
void set_candle_3ldk(_PLAYER_WORK* p);
void PlayerBattleHolyItemMain3LDK(_PLAYER_WORK* p);
void PlayerBattleHolyItemProceedBG();

// 
// Start address: 0x2a1280
_anon2* get_free_data()
{
	int i;
	// Line 101, Address: 0x2a1280, Func Offset: 0
	// Line 102, Address: 0x2a1290, Func Offset: 0x10
	// Line 103, Address: 0x2a129c, Func Offset: 0x1c
	// Line 105, Address: 0x2a12b8, Func Offset: 0x38
	// Line 106, Address: 0x2a12c8, Func Offset: 0x48
	// Line 107, Address: 0x2a12d0, Func Offset: 0x50
	// Func End, Address: 0x2a12d8, Func Offset: 0x58
}

// 
// Start address: 0x2a12e0
void destruct_data(_anon2* data)
{
	// Line 110, Address: 0x2a12e0, Func Offset: 0
	// Func End, Address: 0x2a12e8, Func Offset: 0x8
}

// 
// Start address: 0x2a12f0
void PlayerBattleHolyInitAtGameStart()
{
	// Line 160, Address: 0x2a12f0, Func Offset: 0
	// Func End, Address: 0x2a1300, Func Offset: 0x10
}

// 
// Start address: 0x2a1300
void PlayerBattleHolyRestoreData(_anon0* load_data)
{
	// Line 168, Address: 0x2a1304, Func Offset: 0x4
	// Func End, Address: 0x2a1314, Func Offset: 0x14
}

// 
// Start address: 0x2a1320
void PlayerBattleHolyMakeData(_anon0* save_data)
{
	// Line 176, Address: 0x2a1320, Func Offset: 0
	// Func End, Address: 0x2a1330, Func Offset: 0x10
}

// 
// Start address: 0x2a1330
void PlayerBattleHolySetScene()
{
	int i;
	_enum stage;
	int scene;
	// Line 183, Address: 0x2a1330, Func Offset: 0
	// Line 188, Address: 0x2a1334, Func Offset: 0x4
	// Line 183, Address: 0x2a1338, Func Offset: 0x8
	// Line 191, Address: 0x2a1344, Func Offset: 0x14
	// Line 183, Address: 0x2a1348, Func Offset: 0x18
	// Line 191, Address: 0x2a1350, Func Offset: 0x20
	// Line 188, Address: 0x2a1354, Func Offset: 0x24
	// Line 191, Address: 0x2a1358, Func Offset: 0x28
	// Line 189, Address: 0x2a135c, Func Offset: 0x2c
	// Line 191, Address: 0x2a1364, Func Offset: 0x34
	// Line 192, Address: 0x2a1368, Func Offset: 0x38
	// Line 195, Address: 0x2a1380, Func Offset: 0x50
	// Line 196, Address: 0x2a1394, Func Offset: 0x64
	// Line 197, Address: 0x2a139c, Func Offset: 0x6c
	// Line 199, Address: 0x2a13a8, Func Offset: 0x78
	// Line 202, Address: 0x2a13b8, Func Offset: 0x88
	// Line 205, Address: 0x2a13c0, Func Offset: 0x90
	// Line 208, Address: 0x2a13d0, Func Offset: 0xa0
	// Func End, Address: 0x2a13ec, Func Offset: 0xbc
}

// 
// Start address: 0x2a13f0
void PlayerBattleHolyCandleSetBack(sfObj* obj)
{
	_anon1* w;
	// Line 228, Address: 0x2a13f0, Func Offset: 0
	// Line 231, Address: 0x2a13f8, Func Offset: 0x8
	// Line 232, Address: 0x2a13fc, Func Offset: 0xc
	// Line 235, Address: 0x2a1404, Func Offset: 0x14
	// Line 238, Address: 0x2a1408, Func Offset: 0x18
	// Func End, Address: 0x2a1410, Func Offset: 0x20
}

// 
// Start address: 0x2a1410
int PlayerBattleHolyItemCandleSet(_anon2* data, float* pos_n)
{
	sfObj* obj;
	_anon1* w;
	float q[4];
	// Line 241, Address: 0x2a1410, Func Offset: 0
	// Line 246, Address: 0x2a1430, Func Offset: 0x20
	// Line 247, Address: 0x2a143c, Func Offset: 0x2c
	// Line 248, Address: 0x2a1444, Func Offset: 0x34
	// Line 249, Address: 0x2a144c, Func Offset: 0x3c
	// Line 250, Address: 0x2a1450, Func Offset: 0x40
	// Line 251, Address: 0x2a1460, Func Offset: 0x50
	// Line 258, Address: 0x2a1470, Func Offset: 0x60
	// Line 252, Address: 0x2a1474, Func Offset: 0x64
	// Line 258, Address: 0x2a1478, Func Offset: 0x68
	// Line 253, Address: 0x2a147c, Func Offset: 0x6c
	// Line 254, Address: 0x2a1480, Func Offset: 0x70
	// Line 255, Address: 0x2a1484, Func Offset: 0x74
	// Line 256, Address: 0x2a1488, Func Offset: 0x78
	// Line 258, Address: 0x2a148c, Func Offset: 0x7c
	// Line 260, Address: 0x2a149c, Func Offset: 0x8c
	// Line 263, Address: 0x2a14c8, Func Offset: 0xb8
	// Line 264, Address: 0x2a14d4, Func Offset: 0xc4
	// Line 263, Address: 0x2a14dc, Func Offset: 0xcc
	// Line 264, Address: 0x2a14e0, Func Offset: 0xd0
	// Line 265, Address: 0x2a14e8, Func Offset: 0xd8
	// Line 266, Address: 0x2a14f0, Func Offset: 0xe0
	// Line 267, Address: 0x2a150c, Func Offset: 0xfc
	// Line 268, Address: 0x2a1518, Func Offset: 0x108
	// Line 269, Address: 0x2a1528, Func Offset: 0x118
	// Line 270, Address: 0x2a1538, Func Offset: 0x128
	// Line 272, Address: 0x2a153c, Func Offset: 0x12c
	// Line 270, Address: 0x2a1540, Func Offset: 0x130
	// Line 271, Address: 0x2a1548, Func Offset: 0x138
	// Line 272, Address: 0x2a1550, Func Offset: 0x140
	// Line 276, Address: 0x2a1558, Func Offset: 0x148
	// Line 277, Address: 0x2a1560, Func Offset: 0x150
	// Line 278, Address: 0x2a1568, Func Offset: 0x158
	// Func End, Address: 0x2a1588, Func Offset: 0x178
}

// 
// Start address: 0x2a1590
int PlayerBattleHolyItemCandleSetByData(_anon2* data)
{
	sfObj* obj;
	_anon1* w;
	float q[4];
	// Line 281, Address: 0x2a1590, Func Offset: 0
	// Line 286, Address: 0x2a15a8, Func Offset: 0x18
	// Line 287, Address: 0x2a15b4, Func Offset: 0x24
	// Line 288, Address: 0x2a15bc, Func Offset: 0x2c
	// Line 289, Address: 0x2a15c4, Func Offset: 0x34
	// Line 290, Address: 0x2a15c8, Func Offset: 0x38
	// Line 291, Address: 0x2a15d8, Func Offset: 0x48
	// Line 293, Address: 0x2a15e8, Func Offset: 0x58
	// Line 296, Address: 0x2a15f4, Func Offset: 0x64
	// Line 293, Address: 0x2a15f8, Func Offset: 0x68
	// Line 296, Address: 0x2a15fc, Func Offset: 0x6c
	// Line 293, Address: 0x2a1604, Func Offset: 0x74
	// Line 294, Address: 0x2a160c, Func Offset: 0x7c
	// Line 296, Address: 0x2a1610, Func Offset: 0x80
	// Line 298, Address: 0x2a1620, Func Offset: 0x90
	// Line 301, Address: 0x2a164c, Func Offset: 0xbc
	// Line 302, Address: 0x2a1658, Func Offset: 0xc8
	// Line 303, Address: 0x2a1674, Func Offset: 0xe4
	// Line 304, Address: 0x2a1680, Func Offset: 0xf0
	// Line 305, Address: 0x2a1690, Func Offset: 0x100
	// Line 306, Address: 0x2a16a0, Func Offset: 0x110
	// Line 310, Address: 0x2a16a8, Func Offset: 0x118
	// Line 311, Address: 0x2a16b0, Func Offset: 0x120
	// Line 312, Address: 0x2a16b8, Func Offset: 0x128
	// Func End, Address: 0x2a16d4, Func Offset: 0x144
}

// 
// Start address: 0x2a16e0
int PlayerBattleHolyItemCandleConstruct(float* pos)
{
	_anon8 line;
	float pos_n[4];
	_anon7 plane;
	int hit;
	_anon2* data;
	_enum stage;
	int res;
	// Line 316, Address: 0x2a16e0, Func Offset: 0
	// Line 327, Address: 0x2a16e4, Func Offset: 0x4
	// Line 316, Address: 0x2a16e8, Func Offset: 0x8
	// Line 329, Address: 0x2a16ec, Func Offset: 0xc
	// Line 327, Address: 0x2a16f0, Func Offset: 0x10
	// Line 328, Address: 0x2a16f4, Func Offset: 0x14
	// Line 329, Address: 0x2a16f8, Func Offset: 0x18
	// Line 331, Address: 0x2a170c, Func Offset: 0x2c
	// Line 332, Address: 0x2a174c, Func Offset: 0x6c
	// Line 334, Address: 0x2a1754, Func Offset: 0x74
	// Line 335, Address: 0x2a1758, Func Offset: 0x78
	// Line 337, Address: 0x2a1770, Func Offset: 0x90
	// Line 339, Address: 0x2a17d4, Func Offset: 0xf4
	// Line 341, Address: 0x2a17dc, Func Offset: 0xfc
	// Line 342, Address: 0x2a17e0, Func Offset: 0x100
	// Line 345, Address: 0x2a17f4, Func Offset: 0x114
	// Line 347, Address: 0x2a17fc, Func Offset: 0x11c
	// Line 352, Address: 0x2a1800, Func Offset: 0x120
	// Line 351, Address: 0x2a1804, Func Offset: 0x124
	// Line 355, Address: 0x2a1808, Func Offset: 0x128
	// Line 352, Address: 0x2a180c, Func Offset: 0x12c
	// Line 357, Address: 0x2a1810, Func Offset: 0x130
	// Line 355, Address: 0x2a1814, Func Offset: 0x134
	// Line 351, Address: 0x2a1818, Func Offset: 0x138
	// Line 352, Address: 0x2a181c, Func Offset: 0x13c
	// Line 353, Address: 0x2a1828, Func Offset: 0x148
	// Line 354, Address: 0x2a1830, Func Offset: 0x150
	// Line 355, Address: 0x2a1838, Func Offset: 0x158
	// Line 356, Address: 0x2a1844, Func Offset: 0x164
	// Line 357, Address: 0x2a184c, Func Offset: 0x16c
	// Line 358, Address: 0x2a1854, Func Offset: 0x174
	// Line 360, Address: 0x2a185c, Func Offset: 0x17c
	// Line 361, Address: 0x2a1864, Func Offset: 0x184
	// Line 364, Address: 0x2a1868, Func Offset: 0x188
	// Line 365, Address: 0x2a1878, Func Offset: 0x198
	// Line 366, Address: 0x2a1880, Func Offset: 0x1a0
	// Line 370, Address: 0x2a1888, Func Offset: 0x1a8
	// Line 371, Address: 0x2a1890, Func Offset: 0x1b0
	// Line 372, Address: 0x2a1898, Func Offset: 0x1b8
	// Line 375, Address: 0x2a18a0, Func Offset: 0x1c0
	// Line 378, Address: 0x2a18b0, Func Offset: 0x1d0
	// Func End, Address: 0x2a18bc, Func Offset: 0x1dc
}

// 
// Start address: 0x2a18c0
void PlayerBattleHolyItemCandleObj(sfObj* obj)
{
	_anon1* w;
	float pos[4];
	int hit;
	_anon7 plane;
	_anon8 line;
	float tmp[4];
	float force;
	int res;
	// Line 381, Address: 0x2a18c0, Func Offset: 0
	// Line 386, Address: 0x2a18c8, Func Offset: 0x8
	// Line 381, Address: 0x2a18cc, Func Offset: 0xc
	// Line 382, Address: 0x2a18e0, Func Offset: 0x20
	// Line 386, Address: 0x2a18e4, Func Offset: 0x24
	// Line 388, Address: 0x2a18f0, Func Offset: 0x30
	// Line 386, Address: 0x2a18f4, Func Offset: 0x34
	// Line 388, Address: 0x2a18f8, Func Offset: 0x38
	// Line 396, Address: 0x2a1930, Func Offset: 0x70
	// Line 397, Address: 0x2a1944, Func Offset: 0x84
	// Line 398, Address: 0x2a1960, Func Offset: 0xa0
	// Line 400, Address: 0x2a1974, Func Offset: 0xb4
	// Line 398, Address: 0x2a197c, Func Offset: 0xbc
	// Line 400, Address: 0x2a1988, Func Offset: 0xc8
	// Line 401, Address: 0x2a1990, Func Offset: 0xd0
	// Line 404, Address: 0x2a199c, Func Offset: 0xdc
	// Line 402, Address: 0x2a19a0, Func Offset: 0xe0
	// Line 403, Address: 0x2a19a8, Func Offset: 0xe8
	// Line 402, Address: 0x2a19b4, Func Offset: 0xf4
	// Line 403, Address: 0x2a19b8, Func Offset: 0xf8
	// Line 402, Address: 0x2a19bc, Func Offset: 0xfc
	// Line 404, Address: 0x2a19c0, Func Offset: 0x100
	// Line 405, Address: 0x2a19c8, Func Offset: 0x108
	// Line 407, Address: 0x2a19d0, Func Offset: 0x110
	// Line 408, Address: 0x2a19dc, Func Offset: 0x11c
	// Line 409, Address: 0x2a19e4, Func Offset: 0x124
	// Line 411, Address: 0x2a19fc, Func Offset: 0x13c
	// Line 412, Address: 0x2a1a00, Func Offset: 0x140
	// Line 413, Address: 0x2a1a0c, Func Offset: 0x14c
	// Line 412, Address: 0x2a1a10, Func Offset: 0x150
	// Line 413, Address: 0x2a1a14, Func Offset: 0x154
	// Line 414, Address: 0x2a1a1c, Func Offset: 0x15c
	// Line 415, Address: 0x2a1a20, Func Offset: 0x160
	// Line 417, Address: 0x2a1a2c, Func Offset: 0x16c
	// Line 415, Address: 0x2a1a34, Func Offset: 0x174
	// Line 417, Address: 0x2a1a3c, Func Offset: 0x17c
	// Line 418, Address: 0x2a1a50, Func Offset: 0x190
	// Line 419, Address: 0x2a1a64, Func Offset: 0x1a4
	// Line 420, Address: 0x2a1a78, Func Offset: 0x1b8
	// Line 419, Address: 0x2a1a80, Func Offset: 0x1c0
	// Line 420, Address: 0x2a1a94, Func Offset: 0x1d4
	// Line 422, Address: 0x2a1aa4, Func Offset: 0x1e4
	// Line 425, Address: 0x2a1ab0, Func Offset: 0x1f0
	// Line 429, Address: 0x2a1ac8, Func Offset: 0x208
	// Line 430, Address: 0x2a1ad4, Func Offset: 0x214
	// Line 431, Address: 0x2a1ae4, Func Offset: 0x224
	// Line 432, Address: 0x2a1b0c, Func Offset: 0x24c
	// Line 434, Address: 0x2a1b18, Func Offset: 0x258
	// Line 436, Address: 0x2a1b40, Func Offset: 0x280
	// Line 438, Address: 0x2a1b48, Func Offset: 0x288
	// Line 440, Address: 0x2a1b64, Func Offset: 0x2a4
	// Line 441, Address: 0x2a1b7c, Func Offset: 0x2bc
	// Line 442, Address: 0x2a1b84, Func Offset: 0x2c4
	// Line 443, Address: 0x2a1b8c, Func Offset: 0x2cc
	// Line 446, Address: 0x2a1b90, Func Offset: 0x2d0
	// Func End, Address: 0x2a1bac, Func Offset: 0x2ec
}

// 
// Start address: 0x2a1bb0
void PlayerBattleHolyItemCandleRender(sfObj* obj)
{
	_anon1* w;
	float pos[4];
	sgBone* bone;
	float scale[4];
	float perc;
	float xa;
	float scl;
	float lgt;
	// Line 449, Address: 0x2a1bb0, Func Offset: 0
	// Line 459, Address: 0x2a1bb4, Func Offset: 0x4
	// Line 449, Address: 0x2a1bb8, Func Offset: 0x8
	// Line 458, Address: 0x2a1bbc, Func Offset: 0xc
	// Line 449, Address: 0x2a1bc0, Func Offset: 0x10
	// Line 459, Address: 0x2a1bc4, Func Offset: 0x14
	// Line 449, Address: 0x2a1bc8, Func Offset: 0x18
	// Line 450, Address: 0x2a1bd0, Func Offset: 0x20
	// Line 458, Address: 0x2a1bd4, Func Offset: 0x24
	// Line 459, Address: 0x2a1bf0, Func Offset: 0x40
	// Line 460, Address: 0x2a1bfc, Func Offset: 0x4c
	// Line 461, Address: 0x2a1c08, Func Offset: 0x58
	// Line 462, Address: 0x2a1c1c, Func Offset: 0x6c
	// Line 463, Address: 0x2a1c20, Func Offset: 0x70
	// Line 467, Address: 0x2a1c24, Func Offset: 0x74
	// Line 463, Address: 0x2a1c28, Func Offset: 0x78
	// Line 464, Address: 0x2a1c2c, Func Offset: 0x7c
	// Line 465, Address: 0x2a1c30, Func Offset: 0x80
	// Line 467, Address: 0x2a1c34, Func Offset: 0x84
	// Line 468, Address: 0x2a1c48, Func Offset: 0x98
	// Line 471, Address: 0x2a1c54, Func Offset: 0xa4
	// Line 474, Address: 0x2a1c64, Func Offset: 0xb4
	// Line 475, Address: 0x2a1c78, Func Offset: 0xc8
	// Line 474, Address: 0x2a1c7c, Func Offset: 0xcc
	// Line 475, Address: 0x2a1c88, Func Offset: 0xd8
	// Line 474, Address: 0x2a1c90, Func Offset: 0xe0
	// Line 475, Address: 0x2a1c94, Func Offset: 0xe4
	// Line 476, Address: 0x2a1ca8, Func Offset: 0xf8
	// Line 477, Address: 0x2a1cac, Func Offset: 0xfc
	// Line 476, Address: 0x2a1cb4, Func Offset: 0x104
	// Line 477, Address: 0x2a1cb8, Func Offset: 0x108
	// Line 478, Address: 0x2a1cc4, Func Offset: 0x114
	// Line 479, Address: 0x2a1cc8, Func Offset: 0x118
	// Line 480, Address: 0x2a1cd0, Func Offset: 0x120
	// Line 482, Address: 0x2a1cd8, Func Offset: 0x128
	// Line 484, Address: 0x2a1ce0, Func Offset: 0x130
	// Line 486, Address: 0x2a1cec, Func Offset: 0x13c
	// Line 487, Address: 0x2a1d0c, Func Offset: 0x15c
	// Line 488, Address: 0x2a1d14, Func Offset: 0x164
	// Line 490, Address: 0x2a1d18, Func Offset: 0x168
	// Line 491, Address: 0x2a1d28, Func Offset: 0x178
	// Line 490, Address: 0x2a1d2c, Func Offset: 0x17c
	// Line 491, Address: 0x2a1d30, Func Offset: 0x180
	// Line 490, Address: 0x2a1d34, Func Offset: 0x184
	// Line 491, Address: 0x2a1d40, Func Offset: 0x190
	// Line 490, Address: 0x2a1d44, Func Offset: 0x194
	// Line 491, Address: 0x2a1d48, Func Offset: 0x198
	// Line 492, Address: 0x2a1d50, Func Offset: 0x1a0
	// Line 500, Address: 0x2a1d5c, Func Offset: 0x1ac
	// Line 501, Address: 0x2a1d80, Func Offset: 0x1d0
	// Line 502, Address: 0x2a1da4, Func Offset: 0x1f4
	// Line 501, Address: 0x2a1da8, Func Offset: 0x1f8
	// Line 502, Address: 0x2a1dac, Func Offset: 0x1fc
	// Line 506, Address: 0x2a1dc8, Func Offset: 0x218
	// Line 508, Address: 0x2a1dd0, Func Offset: 0x220
	// Line 512, Address: 0x2a1e04, Func Offset: 0x254
	// Line 514, Address: 0x2a1e10, Func Offset: 0x260
	// Line 518, Address: 0x2a1e38, Func Offset: 0x288
	// Line 519, Address: 0x2a1e44, Func Offset: 0x294
	// Line 520, Address: 0x2a1e50, Func Offset: 0x2a0
	// Line 523, Address: 0x2a1e54, Func Offset: 0x2a4
	// Func End, Address: 0x2a1e6c, Func Offset: 0x2bc
}

// 
// Start address: 0x2a1e70
void PlayerBattleHolyItemCandleDestruct(sfObj* obj)
{
	// Line 529, Address: 0x2a1e70, Func Offset: 0
	// Func End, Address: 0x2a1e78, Func Offset: 0x8
}

// 
// Start address: 0x2a1e80
void set_candle(_PLAYER_WORK* p)
{
	sgBone* hand_bone;
	sgBone* h_bone;
	float q[4];
	float pos[4];
	// Line 536, Address: 0x2a1e80, Func Offset: 0
	// Line 540, Address: 0x2a1e84, Func Offset: 0x4
	// Line 536, Address: 0x2a1e88, Func Offset: 0x8
	// Line 540, Address: 0x2a1e98, Func Offset: 0x18
	// Line 542, Address: 0x2a1ea0, Func Offset: 0x20
	// Line 543, Address: 0x2a1ecc, Func Offset: 0x4c
	// Line 545, Address: 0x2a1ed0, Func Offset: 0x50
	// Line 546, Address: 0x2a1ee0, Func Offset: 0x60
	// Line 550, Address: 0x2a1f10, Func Offset: 0x90
	// Line 551, Address: 0x2a1f1c, Func Offset: 0x9c
	// Line 552, Address: 0x2a1f38, Func Offset: 0xb8
	// Line 555, Address: 0x2a1f44, Func Offset: 0xc4
	// Line 556, Address: 0x2a1f54, Func Offset: 0xd4
	// Line 558, Address: 0x2a1f60, Func Offset: 0xe0
	// Line 559, Address: 0x2a1f70, Func Offset: 0xf0
	// Line 562, Address: 0x2a1f78, Func Offset: 0xf8
	// Line 565, Address: 0x2a1fe8, Func Offset: 0x168
	// Line 566, Address: 0x2a1ffc, Func Offset: 0x17c
	// Line 567, Address: 0x2a2008, Func Offset: 0x188
	// Line 569, Address: 0x2a2018, Func Offset: 0x198
	// Line 570, Address: 0x2a2020, Func Offset: 0x1a0
	// Line 572, Address: 0x2a202c, Func Offset: 0x1ac
	// Line 574, Address: 0x2a2034, Func Offset: 0x1b4
	// Line 577, Address: 0x2a2040, Func Offset: 0x1c0
	// Line 580, Address: 0x2a2050, Func Offset: 0x1d0
	// Line 583, Address: 0x2a2060, Func Offset: 0x1e0
	// Line 585, Address: 0x2a2068, Func Offset: 0x1e8
	// Line 586, Address: 0x2a2074, Func Offset: 0x1f4
	// Line 587, Address: 0x2a2078, Func Offset: 0x1f8
	// Line 589, Address: 0x2a207c, Func Offset: 0x1fc
	// Line 591, Address: 0x2a2084, Func Offset: 0x204
	// Line 594, Address: 0x2a2088, Func Offset: 0x208
	// Func End, Address: 0x2a20a0, Func Offset: 0x220
}

// 
// Start address: 0x2a20a0
void PlayerBattleHolyItemCharacterDraw(_PLAYER_WORK* p)
{
	// Line 598, Address: 0x2a20a0, Func Offset: 0
	// Line 599, Address: 0x2a20a8, Func Offset: 0x8
	// Line 600, Address: 0x2a20b8, Func Offset: 0x18
	// Line 602, Address: 0x2a20c0, Func Offset: 0x20
	// Line 604, Address: 0x2a20c8, Func Offset: 0x28
	// Line 606, Address: 0x2a20d0, Func Offset: 0x30
	// Line 610, Address: 0x2a20d8, Func Offset: 0x38
	// Func End, Address: 0x2a20e4, Func Offset: 0x44
}

// 
// Start address: 0x2a20f0
void PlayerBattleHolyItemCharacterDestruct()
{
	// Line 614, Address: 0x2a20f0, Func Offset: 0
	// Line 615, Address: 0x2a2100, Func Offset: 0x10
	// Line 616, Address: 0x2a2108, Func Offset: 0x18
	// Line 617, Address: 0x2a2110, Func Offset: 0x20
	// Line 621, Address: 0x2a2118, Func Offset: 0x28
	// Func End, Address: 0x2a2124, Func Offset: 0x34
}

// 
// Start address: 0x2a2130
void PlayerBattleHolyItemMain(_PLAYER_WORK* p)
{
	// Line 625, Address: 0x2a2130, Func Offset: 0
	// Line 627, Address: 0x2a2134, Func Offset: 0x4
	// Line 625, Address: 0x2a2138, Func Offset: 0x8
	// Line 627, Address: 0x2a213c, Func Offset: 0xc
	// Line 628, Address: 0x2a2164, Func Offset: 0x34
	// Line 632, Address: 0x2a2168, Func Offset: 0x38
	// Line 635, Address: 0x2a2170, Func Offset: 0x40
	// Line 636, Address: 0x2a2178, Func Offset: 0x48
	// Line 641, Address: 0x2a2180, Func Offset: 0x50
	// Line 643, Address: 0x2a2188, Func Offset: 0x58
	// Line 644, Address: 0x2a2190, Func Offset: 0x60
	// Line 648, Address: 0x2a2198, Func Offset: 0x68
	// Func End, Address: 0x2a21a4, Func Offset: 0x74
}

// 
// Start address: 0x2a21b0
int PlayerBattleHolyItemCandleSet3LDK()
{
	_anon8 line;
	float pos_n[4];
	_anon7 plane;
	int hit;
	_anon2* data;
	float pos_eye[4];
	float cam_z[4];
	float cam_y[4];
	float cam_my[4];
	float dir_n[4];
	int i;
	float prc;
	int res;
	// Line 702, Address: 0x2a21b0, Func Offset: 0
	// Line 712, Address: 0x2a21b4, Func Offset: 0x4
	// Line 702, Address: 0x2a21b8, Func Offset: 0x8
	// Line 712, Address: 0x2a21bc, Func Offset: 0xc
	// Line 702, Address: 0x2a21c0, Func Offset: 0x10
	// Line 712, Address: 0x2a21c8, Func Offset: 0x18
	// Line 713, Address: 0x2a22a8, Func Offset: 0xf8
	// Line 724, Address: 0x2a22b0, Func Offset: 0x100
	// Line 725, Address: 0x2a22b8, Func Offset: 0x108
	// Line 726, Address: 0x2a22c0, Func Offset: 0x110
	// Line 727, Address: 0x2a22c8, Func Offset: 0x118
	// Line 728, Address: 0x2a22d8, Func Offset: 0x128
	// Line 729, Address: 0x2a2300, Func Offset: 0x150
	// Line 730, Address: 0x2a232c, Func Offset: 0x17c
	// Line 731, Address: 0x2a2358, Func Offset: 0x1a8
	// Line 732, Address: 0x2a2384, Func Offset: 0x1d4
	// Line 733, Address: 0x2a23b0, Func Offset: 0x200
	// Line 734, Address: 0x2a23cc, Func Offset: 0x21c
	// Line 735, Address: 0x2a23d8, Func Offset: 0x228
	// Line 738, Address: 0x2a23e0, Func Offset: 0x230
	// Line 739, Address: 0x2a23f0, Func Offset: 0x240
	// Line 740, Address: 0x2a2424, Func Offset: 0x274
	// Line 741, Address: 0x2a2440, Func Offset: 0x290
	// Line 742, Address: 0x2a244c, Func Offset: 0x29c
	// Line 744, Address: 0x2a2454, Func Offset: 0x2a4
	// Line 745, Address: 0x2a2484, Func Offset: 0x2d4
	// Line 746, Address: 0x2a24a0, Func Offset: 0x2f0
	// Line 747, Address: 0x2a24ac, Func Offset: 0x2fc
	// Line 749, Address: 0x2a24b4, Func Offset: 0x304
	// Line 750, Address: 0x2a24d4, Func Offset: 0x324
	// Line 752, Address: 0x2a24d8, Func Offset: 0x328
	// Line 754, Address: 0x2a24e0, Func Offset: 0x330
	// Line 755, Address: 0x2a2508, Func Offset: 0x358
	// Line 756, Address: 0x2a2518, Func Offset: 0x368
	// Line 760, Address: 0x2a2520, Func Offset: 0x370
	// Line 761, Address: 0x2a2530, Func Offset: 0x380
	// Line 762, Address: 0x2a2538, Func Offset: 0x388
	// Line 763, Address: 0x2a2560, Func Offset: 0x3b0
	// Line 764, Address: 0x2a2570, Func Offset: 0x3c0
	// Line 767, Address: 0x2a2578, Func Offset: 0x3c8
	// Line 770, Address: 0x2a25a0, Func Offset: 0x3f0
	// Line 771, Address: 0x2a25a8, Func Offset: 0x3f8
	// Line 772, Address: 0x2a25b0, Func Offset: 0x400
	// Line 775, Address: 0x2a25b8, Func Offset: 0x408
	// Line 776, Address: 0x2a25cc, Func Offset: 0x41c
	// Line 778, Address: 0x2a25d8, Func Offset: 0x428
	// Line 779, Address: 0x2a25e0, Func Offset: 0x430
	// Func End, Address: 0x2a25f4, Func Offset: 0x444
}

// 
// Start address: 0x2a2600
void set_candle_3ldk(_PLAYER_WORK* p)
{
	int count;
	// Line 783, Address: 0x2a2600, Func Offset: 0
	// Line 785, Address: 0x2a2604, Func Offset: 0x4
	// Line 783, Address: 0x2a2608, Func Offset: 0x8
	// Line 785, Address: 0x2a2610, Func Offset: 0x10
	// Line 787, Address: 0x2a2630, Func Offset: 0x30
	// Line 788, Address: 0x2a2634, Func Offset: 0x34
	// Line 790, Address: 0x2a2644, Func Offset: 0x44
	// Line 792, Address: 0x2a2648, Func Offset: 0x48
	// Line 794, Address: 0x2a2654, Func Offset: 0x54
	// Line 795, Address: 0x2a2660, Func Offset: 0x60
	// Line 798, Address: 0x2a2668, Func Offset: 0x68
	// Line 799, Address: 0x2a2670, Func Offset: 0x70
	// Line 801, Address: 0x2a267c, Func Offset: 0x7c
	// Line 803, Address: 0x2a2684, Func Offset: 0x84
	// Line 804, Address: 0x2a2688, Func Offset: 0x88
	// Line 805, Address: 0x2a268c, Func Offset: 0x8c
	// Line 810, Address: 0x2a2690, Func Offset: 0x90
	// Func End, Address: 0x2a26a0, Func Offset: 0xa0
}

// 
// Start address: 0x2a26a0
void PlayerBattleHolyItemMain3LDK(_PLAYER_WORK* p)
{
	// Line 814, Address: 0x2a26a0, Func Offset: 0
	// Line 815, Address: 0x2a26a4, Func Offset: 0x4
	// Line 814, Address: 0x2a26a8, Func Offset: 0x8
	// Line 815, Address: 0x2a26ac, Func Offset: 0xc
	// Line 816, Address: 0x2a26d4, Func Offset: 0x34
	// Line 820, Address: 0x2a26d8, Func Offset: 0x38
	// Line 823, Address: 0x2a26e0, Func Offset: 0x40
	// Line 824, Address: 0x2a26e8, Func Offset: 0x48
	// Line 830, Address: 0x2a26f0, Func Offset: 0x50
	// Line 832, Address: 0x2a26f8, Func Offset: 0x58
	// Line 834, Address: 0x2a26fc, Func Offset: 0x5c
	// Line 837, Address: 0x2a2700, Func Offset: 0x60
	// Func End, Address: 0x2a270c, Func Offset: 0x6c
}

// 
// Start address: 0x2a2710
void PlayerBattleHolyItemProceedBG()
{
	int i;
	// Line 841, Address: 0x2a2710, Func Offset: 0
	// Line 844, Address: 0x2a2720, Func Offset: 0x10
	// Line 845, Address: 0x2a2734, Func Offset: 0x24
	// Line 846, Address: 0x2a273c, Func Offset: 0x2c
	// Line 848, Address: 0x2a2760, Func Offset: 0x50
	// Line 849, Address: 0x2a2774, Func Offset: 0x64
	// Line 848, Address: 0x2a2778, Func Offset: 0x68
	// Line 849, Address: 0x2a2784, Func Offset: 0x74
	// Line 850, Address: 0x2a2798, Func Offset: 0x88
	// Line 851, Address: 0x2a27a0, Func Offset: 0x90
	// Line 853, Address: 0x2a27a8, Func Offset: 0x98
	// Line 857, Address: 0x2a27cc, Func Offset: 0xbc
	// Line 860, Address: 0x2a27e0, Func Offset: 0xd0
	// Func End, Address: 0x2a27f4, Func Offset: 0xe4
}

