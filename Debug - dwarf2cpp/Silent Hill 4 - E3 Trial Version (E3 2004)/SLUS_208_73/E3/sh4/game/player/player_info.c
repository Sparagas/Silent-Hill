typedef struct sgQTNode;
typedef struct sgBone;
typedef struct sgSVModel;
typedef struct sfCldPart;
typedef struct _PLAYER_WORK;
typedef enum PlayerExtStatus : unsigned char;
typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _GAME_WORK;
typedef struct sgQTObject;
typedef struct _anon3;
typedef enum sgIKSolveResult : unsigned char;
typedef struct EnemyMeasureResult;
typedef enum PlayerExtPartsNo : unsigned char;
typedef struct sfOffsetAABB;
typedef struct sfCharacter;
typedef struct _anon4;
typedef struct sgAnime;
typedef union sfCldBody;
typedef struct sgIKHandle;
typedef struct sfObj;
typedef struct _anon5;
typedef struct sfCldObject;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _anon9;
typedef struct _anon10;
typedef struct _anon11;
typedef union _anon12;
typedef union _anon13;
typedef enum GameItem : unsigned char;

typedef void(*type_8)(_anon1*, int, int, float*);
typedef sgIKSolveResult(*type_12)();
typedef void(*type_19)(sfObj*);
typedef void(*type_21)(sgAnime*, int);
typedef void(*type_26)(sfObj*);

typedef sfCldPart* type_0[6];
typedef unsigned char type_1[3];
typedef float type_2[4][4];
typedef int type_3[1];
typedef int type_4[1];
typedef int type_5[1];
typedef float type_6[4];
typedef int type_7[1];
typedef float type_9[4];
typedef float type_10[4][2];
typedef int type_11[1];
typedef unsigned char type_13[3];
typedef float type_14[4];
typedef void* type_15[4];
typedef _anon0 type_16[2];
typedef _anon13 type_17[256];
typedef _anon8 type_18[4];
typedef _anon12 type_20[0];
typedef _PLAYER_WORK type_22[2];
typedef unsigned char type_23[4];
typedef short type_24[2];
typedef unsigned short type_25[2];
typedef char type_27[4];
typedef int type_28[1];
typedef unsigned char type_29[4];
typedef float type_30[1];
typedef int type_31[1];
typedef int type_32[1];

struct sgQTNode
{
	int dummy;
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

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
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
	_anon9* anim_ctrl;
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

struct _anon0
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

struct _anon1
{
	unsigned long tex0;
	unsigned long clamp;
};

struct _anon2
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon1*, int, int, float*);
	int equip_flag;
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

struct sgQTObject
{
	_anon7 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

struct _anon3
{
	float backwalk_time;
	int backwalk_angle;
	float backwalk_count;
	int cancel_count;
	int gun_lastshot;
	float pos_pl[4];
	float pos_ui[4];
	float foot_r[4];
	float foot_l[4];
	float retarget_time;
	sfObj* special_obj;
	float special_time;
	GameItem bullet;
	float spot_time;
	int cancel;
	int battle_disable;
	int spray;
	float finish_time;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct EnemyMeasureResult
{
	float pos[4];
	float normal[4];
	float dist;
	int exist;
	_anon4* poly;
};

enum PlayerExtPartsNo : unsigned char
{
	PLAYER_PART_THIGH_L,
	PLAYER_PART_THIGH_R,
	PLAYER_PART_CALF_L,
	PLAYER_PART_CALF_R,
	PLAYER_PARTS_MAX
};

struct sfOffsetAABB
{
	_anon10 aabb;
	float offset[4];
};

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon2 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

struct _anon4
{
	_anon12 vertex[0];
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

union sfCldBody
{
	_anon11 obb;
	_anon10 aabb;
	sfOffsetAABB offset_aabb;
	_anon6 line;
	_anon7 sphere;
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

struct sfObj
{
	_anon13 fwork[256];
	_anon13* work;
	void(*func)(sfObj*);
	_anon13* work_pt0;
	_anon13* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon13* sys_work;
	_anon13* scene_work;
	_anon13* event_work;
	_anon13* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct _anon5
{
	float move;
	float speed;
	float rot;
	float side;
	float vert;
	float f_dir;
	float f_move;
	float f_push[4];
	int item;
	int shoot;
	int curse;
	int finisher;
	int select;
	int silent;
	int access;
	float run;
	int battle;
	int power;
	int power_last;
	int backstep;
	float anim_speed;
	int retarget;
	int rstick;
	int stopping;
	float stick_rot;
	int search_view;
	float camera_x;
	float camera_y;
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

struct _anon6
{
	float start[4];
	float end[4];
};

struct _anon7
{
	float center[4];
	float radius;
};

struct _anon8
{
	unsigned char next_offset;
	unsigned char flags;
	short id;
};

struct _anon9
{
	int dummy;
};

struct _anon10
{
	float bmin[4];
	float bmax[4];
};

struct _anon11
{
	float mat[4][4];
	float half_w[4];
};

union _anon12
{
	float node[4];
	_anon8 data[4];
};

union _anon13
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

float sg_vector_zero[4];
float last_wp_pos[4];
_anon0 player_ext_info[2];
float sg_vector_unit_y[4];
_PLAYER_WORK playerw[2];
_anon3 player_battle_work;
_GAME_WORK gamew;

void PlayerInfoAllClear();
void PlayerInfoHenrySetScene();
int PlayerInfoAccessReady();
int PlayerInfoIsHenryRun();
sfObj* PlayerInfoGetTargetEnemyObj(int num);
void PlayerInfoSetHenry();

// 
// Start address: 0x26ee30
void PlayerInfoAllClear()
{
	// Line 54, Address: 0x26ee30, Func Offset: 0
	// Line 57, Address: 0x26ee34, Func Offset: 0x4
	// Line 54, Address: 0x26ee38, Func Offset: 0x8
	// Line 57, Address: 0x26ee3c, Func Offset: 0xc
	// Line 59, Address: 0x26ee4c, Func Offset: 0x1c
	// Line 62, Address: 0x26ee64, Func Offset: 0x34
	// Func End, Address: 0x26ee70, Func Offset: 0x40
}

// 
// Start address: 0x26ee70
void PlayerInfoHenrySetScene()
{
	_PLAYER_WORK* p;
	_anon0* info;
	float vec[4];
	float vec[4];
	EnemyMeasureResult mres;
	// Line 67, Address: 0x26ee70, Func Offset: 0
	// Line 68, Address: 0x26ee80, Func Offset: 0x10
	// Line 69, Address: 0x26ee84, Func Offset: 0x14
	// Line 68, Address: 0x26ee88, Func Offset: 0x18
	// Line 69, Address: 0x26ee8c, Func Offset: 0x1c
	// Line 71, Address: 0x26ee90, Func Offset: 0x20
	// Line 74, Address: 0x26ee98, Func Offset: 0x28
	// Line 72, Address: 0x26ee9c, Func Offset: 0x2c
	// Line 74, Address: 0x26eea0, Func Offset: 0x30
	// Line 72, Address: 0x26eea4, Func Offset: 0x34
	// Line 73, Address: 0x26eea8, Func Offset: 0x38
	// Line 74, Address: 0x26eeb0, Func Offset: 0x40
	// Line 75, Address: 0x26eebc, Func Offset: 0x4c
	// Line 76, Address: 0x26eed0, Func Offset: 0x60
	// Line 77, Address: 0x26eed4, Func Offset: 0x64
	// Line 76, Address: 0x26eee0, Func Offset: 0x70
	// Line 77, Address: 0x26eee4, Func Offset: 0x74
	// Line 78, Address: 0x26eef0, Func Offset: 0x80
	// Line 79, Address: 0x26eef8, Func Offset: 0x88
	// Line 80, Address: 0x26ef00, Func Offset: 0x90
	// Line 83, Address: 0x26ef04, Func Offset: 0x94
	// Line 84, Address: 0x26ef10, Func Offset: 0xa0
	// Line 85, Address: 0x26ef14, Func Offset: 0xa4
	// Line 87, Address: 0x26ef20, Func Offset: 0xb0
	// Line 86, Address: 0x26ef2c, Func Offset: 0xbc
	// Line 87, Address: 0x26ef30, Func Offset: 0xc0
	// Line 88, Address: 0x26ef4c, Func Offset: 0xdc
	// Line 92, Address: 0x26ef6c, Func Offset: 0xfc
	// Line 93, Address: 0x26ef8c, Func Offset: 0x11c
	// Line 96, Address: 0x26efb8, Func Offset: 0x148
	// Line 97, Address: 0x26efcc, Func Offset: 0x15c
	// Line 98, Address: 0x26efec, Func Offset: 0x17c
	// Line 100, Address: 0x26eff8, Func Offset: 0x188
	// Line 101, Address: 0x26effc, Func Offset: 0x18c
	// Line 102, Address: 0x26f000, Func Offset: 0x190
	// Line 106, Address: 0x26f014, Func Offset: 0x1a4
	// Line 107, Address: 0x26f028, Func Offset: 0x1b8
	// Line 108, Address: 0x26f038, Func Offset: 0x1c8
	// Line 115, Address: 0x26f040, Func Offset: 0x1d0
	// Line 114, Address: 0x26f044, Func Offset: 0x1d4
	// Line 112, Address: 0x26f048, Func Offset: 0x1d8
	// Line 115, Address: 0x26f04c, Func Offset: 0x1dc
	// Line 114, Address: 0x26f054, Func Offset: 0x1e4
	// Line 115, Address: 0x26f058, Func Offset: 0x1e8
	// Line 118, Address: 0x26f060, Func Offset: 0x1f0
	// Line 117, Address: 0x26f064, Func Offset: 0x1f4
	// Line 118, Address: 0x26f068, Func Offset: 0x1f8
	// Line 117, Address: 0x26f074, Func Offset: 0x204
	// Line 118, Address: 0x26f078, Func Offset: 0x208
	// Line 119, Address: 0x26f080, Func Offset: 0x210
	// Line 120, Address: 0x26f094, Func Offset: 0x224
	// Line 123, Address: 0x26f0a0, Func Offset: 0x230
	// Func End, Address: 0x26f0b4, Func Offset: 0x244
}

// 
// Start address: 0x26f0c0
int PlayerInfoAccessReady()
{
	_PLAYER_WORK* p;
	int ret;
	// Line 168, Address: 0x26f0c0, Func Offset: 0
	// Line 165, Address: 0x26f0c4, Func Offset: 0x4
	// Line 168, Address: 0x26f0c8, Func Offset: 0x8
	// Line 165, Address: 0x26f0cc, Func Offset: 0xc
	// Line 168, Address: 0x26f0d0, Func Offset: 0x10
	// Line 170, Address: 0x26f108, Func Offset: 0x48
	// Line 173, Address: 0x26f110, Func Offset: 0x50
	// Func End, Address: 0x26f118, Func Offset: 0x58
}

// 
// Start address: 0x26f120
int PlayerInfoIsHenryRun()
{
	int ret;
	_anon5* ui;
	// Line 178, Address: 0x26f120, Func Offset: 0
	// Line 180, Address: 0x26f130, Func Offset: 0x10
	// Line 182, Address: 0x26f138, Func Offset: 0x18
	// Line 183, Address: 0x26f148, Func Offset: 0x28
	// Line 184, Address: 0x26f158, Func Offset: 0x38
	// Line 185, Address: 0x26f174, Func Offset: 0x54
	// Line 190, Address: 0x26f178, Func Offset: 0x58
	// Line 191, Address: 0x26f17c, Func Offset: 0x5c
	// Func End, Address: 0x26f190, Func Offset: 0x70
}

// 
// Start address: 0x26f190
sfObj* PlayerInfoGetTargetEnemyObj(int num)
{
	sfObj* obj;
	// Line 227, Address: 0x26f190, Func Offset: 0
	// Line 226, Address: 0x26f194, Func Offset: 0x4
	// Line 227, Address: 0x26f198, Func Offset: 0x8
	// Line 226, Address: 0x26f19c, Func Offset: 0xc
	// Line 227, Address: 0x26f1a0, Func Offset: 0x10
	// Line 226, Address: 0x26f1b4, Func Offset: 0x24
	// Line 227, Address: 0x26f1b8, Func Offset: 0x28
	// Line 229, Address: 0x26f1c0, Func Offset: 0x30
	// Line 230, Address: 0x26f1c8, Func Offset: 0x38
	// Line 231, Address: 0x26f1e0, Func Offset: 0x50
	// Line 235, Address: 0x26f1e8, Func Offset: 0x58
	// Line 236, Address: 0x26f1f0, Func Offset: 0x60
	// Func End, Address: 0x26f200, Func Offset: 0x70
}

// 
// Start address: 0x26f200
void PlayerInfoSetHenry()
{
	_PLAYER_WORK* p;
	_anon5* ui;
	_anon0* info;
	sgBone* bone;
	float vec[4];
	float vec[4];
	EnemyMeasureResult mres;
	sgBone* wp_bone;
	float c_pos[4];
	float dif[4];
	// Line 240, Address: 0x26f200, Func Offset: 0
	// Line 241, Address: 0x26f210, Func Offset: 0x10
	// Line 240, Address: 0x26f214, Func Offset: 0x14
	// Line 241, Address: 0x26f218, Func Offset: 0x18
	// Line 242, Address: 0x26f21c, Func Offset: 0x1c
	// Line 243, Address: 0x26f224, Func Offset: 0x24
	// Line 242, Address: 0x26f228, Func Offset: 0x28
	// Line 243, Address: 0x26f22c, Func Offset: 0x2c
	// Line 245, Address: 0x26f230, Func Offset: 0x30
	// Line 247, Address: 0x26f240, Func Offset: 0x40
	// Line 248, Address: 0x26f248, Func Offset: 0x48
	// Line 249, Address: 0x26f25c, Func Offset: 0x5c
	// Line 251, Address: 0x26f270, Func Offset: 0x70
	// Line 255, Address: 0x26f290, Func Offset: 0x90
	// Line 254, Address: 0x26f294, Func Offset: 0x94
	// Line 255, Address: 0x26f298, Func Offset: 0x98
	// Line 254, Address: 0x26f2a0, Func Offset: 0xa0
	// Line 255, Address: 0x26f2a4, Func Offset: 0xa4
	// Line 256, Address: 0x26f2b0, Func Offset: 0xb0
	// Line 257, Address: 0x26f2b8, Func Offset: 0xb8
	// Line 258, Address: 0x26f2bc, Func Offset: 0xbc
	// Line 261, Address: 0x26f2c8, Func Offset: 0xc8
	// Line 262, Address: 0x26f2d0, Func Offset: 0xd0
	// Line 263, Address: 0x26f2dc, Func Offset: 0xdc
	// Line 265, Address: 0x26f2e0, Func Offset: 0xe0
	// Line 266, Address: 0x26f2ec, Func Offset: 0xec
	// Line 268, Address: 0x26f2f8, Func Offset: 0xf8
	// Line 269, Address: 0x26f300, Func Offset: 0x100
	// Line 270, Address: 0x26f30c, Func Offset: 0x10c
	// Line 271, Address: 0x26f314, Func Offset: 0x114
	// Line 274, Address: 0x26f320, Func Offset: 0x120
	// Line 275, Address: 0x26f32c, Func Offset: 0x12c
	// Line 276, Address: 0x26f330, Func Offset: 0x130
	// Line 278, Address: 0x26f33c, Func Offset: 0x13c
	// Line 277, Address: 0x26f348, Func Offset: 0x148
	// Line 278, Address: 0x26f34c, Func Offset: 0x14c
	// Line 279, Address: 0x26f368, Func Offset: 0x168
	// Line 283, Address: 0x26f388, Func Offset: 0x188
	// Line 284, Address: 0x26f3a8, Func Offset: 0x1a8
	// Line 287, Address: 0x26f3d4, Func Offset: 0x1d4
	// Line 288, Address: 0x26f3e8, Func Offset: 0x1e8
	// Line 289, Address: 0x26f408, Func Offset: 0x208
	// Line 291, Address: 0x26f410, Func Offset: 0x210
	// Line 292, Address: 0x26f414, Func Offset: 0x214
	// Line 293, Address: 0x26f418, Func Offset: 0x218
	// Line 295, Address: 0x26f424, Func Offset: 0x224
	// Line 296, Address: 0x26f430, Func Offset: 0x230
	// Line 298, Address: 0x26f438, Func Offset: 0x238
	// Line 299, Address: 0x26f44c, Func Offset: 0x24c
	// Line 303, Address: 0x26f450, Func Offset: 0x250
	// Line 304, Address: 0x26f464, Func Offset: 0x264
	// Line 305, Address: 0x26f474, Func Offset: 0x274
	// Line 306, Address: 0x26f47c, Func Offset: 0x27c
	// Line 310, Address: 0x26f480, Func Offset: 0x280
	// Line 313, Address: 0x26f484, Func Offset: 0x284
	// Line 315, Address: 0x26f4b8, Func Offset: 0x2b8
	// Line 318, Address: 0x26f4c0, Func Offset: 0x2c0
	// Line 321, Address: 0x26f4d0, Func Offset: 0x2d0
	// Line 323, Address: 0x26f4d8, Func Offset: 0x2d8
	// Line 324, Address: 0x26f4e8, Func Offset: 0x2e8
	// Line 325, Address: 0x26f4ec, Func Offset: 0x2ec
	// Line 327, Address: 0x26f4f8, Func Offset: 0x2f8
	// Line 329, Address: 0x26f504, Func Offset: 0x304
	// Line 331, Address: 0x26f510, Func Offset: 0x310
	// Line 333, Address: 0x26f51c, Func Offset: 0x31c
	// Line 335, Address: 0x26f528, Func Offset: 0x328
	// Line 336, Address: 0x26f540, Func Offset: 0x340
	// Line 337, Address: 0x26f544, Func Offset: 0x344
	// Line 339, Address: 0x26f550, Func Offset: 0x350
	// Line 340, Address: 0x26f564, Func Offset: 0x364
	// Line 343, Address: 0x26f588, Func Offset: 0x388
	// Line 346, Address: 0x26f590, Func Offset: 0x390
	// Line 348, Address: 0x26f59c, Func Offset: 0x39c
	// Line 350, Address: 0x26f5a8, Func Offset: 0x3a8
	// Line 352, Address: 0x26f5ac, Func Offset: 0x3ac
	// Line 356, Address: 0x26f5b4, Func Offset: 0x3b4
	// Line 357, Address: 0x26f5b8, Func Offset: 0x3b8
	// Line 360, Address: 0x26f5bc, Func Offset: 0x3bc
	// Line 363, Address: 0x26f5c8, Func Offset: 0x3c8
	// Line 364, Address: 0x26f5f0, Func Offset: 0x3f0
	// Line 366, Address: 0x26f5fc, Func Offset: 0x3fc
	// Line 368, Address: 0x26f608, Func Offset: 0x408
	// Line 373, Address: 0x26f610, Func Offset: 0x410
	// Line 374, Address: 0x26f618, Func Offset: 0x418
	// Line 375, Address: 0x26f638, Func Offset: 0x438
	// Line 376, Address: 0x26f658, Func Offset: 0x458
	// Line 377, Address: 0x26f678, Func Offset: 0x478
	// Line 380, Address: 0x26f67c, Func Offset: 0x47c
	// Line 383, Address: 0x26f684, Func Offset: 0x484
	// Line 386, Address: 0x26f6a0, Func Offset: 0x4a0
	// Line 387, Address: 0x26f6b0, Func Offset: 0x4b0
	// Line 388, Address: 0x26f6bc, Func Offset: 0x4bc
	// Line 392, Address: 0x26f700, Func Offset: 0x500
	// Line 393, Address: 0x26f724, Func Offset: 0x524
	// Line 394, Address: 0x26f730, Func Offset: 0x530
	// Line 398, Address: 0x26f76c, Func Offset: 0x56c
	// Line 394, Address: 0x26f770, Func Offset: 0x570
	// Line 398, Address: 0x26f774, Func Offset: 0x574
	// Line 394, Address: 0x26f778, Func Offset: 0x578
	// Line 398, Address: 0x26f780, Func Offset: 0x580
	// Line 399, Address: 0x26f7a0, Func Offset: 0x5a0
	// Line 401, Address: 0x26f7a8, Func Offset: 0x5a8
	// Line 402, Address: 0x26f7bc, Func Offset: 0x5bc
	// Line 404, Address: 0x26f7c8, Func Offset: 0x5c8
	// Line 405, Address: 0x26f7d8, Func Offset: 0x5d8
	// Line 407, Address: 0x26f7e0, Func Offset: 0x5e0
	// Line 408, Address: 0x26f7f8, Func Offset: 0x5f8
	// Line 409, Address: 0x26f80c, Func Offset: 0x60c
	// Line 413, Address: 0x26f818, Func Offset: 0x618
	// Func End, Address: 0x26f834, Func Offset: 0x634
}

