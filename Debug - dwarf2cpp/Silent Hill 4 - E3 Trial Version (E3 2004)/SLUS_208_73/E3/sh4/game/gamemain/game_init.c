typedef struct sfCldObject;
typedef struct sgBone;
typedef struct sgAnime;
typedef struct _anon0;
typedef struct sgIKHandle;
typedef struct sfObj;
typedef union _anon1;
typedef struct sfCharacter;
typedef enum GameItem : unsigned char;
typedef struct _anon2;
typedef struct _PLAYER_WORK;
typedef struct _anon3;
typedef struct _GAME_WORK;
typedef struct _anon4;
typedef struct sgQTNode;
typedef struct sfCldPart;
typedef struct _anon5;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sgSVModel;
typedef struct _anon6;
typedef struct sgQTObject;
typedef struct _anon7;
typedef struct sfOffsetAABB;
typedef union sfCldBody;

typedef void(*type_3)(sgAnime*, int);
typedef void(*type_5)(sfObj*);
typedef void(*type_10)(sfObj*);
typedef sgIKSolveResult(*type_27)();
typedef void(*type_28)(_anon6*, int, int, float*);

typedef unsigned char type_0[3];
typedef void* type_1[4];
typedef float type_2[4];
typedef _anon1 type_4[256];
typedef int type_6[1];
typedef unsigned char type_7[4];
typedef _PLAYER_WORK type_8[2];
typedef int type_9[1];
typedef int type_11[1];
typedef float type_12[4];
typedef int type_13[1];
typedef int type_14[1];
typedef sfCldPart* type_15[6];
typedef int type_16[1];
typedef unsigned char type_17[3];
typedef int type_18[1];
typedef short type_19[2];
typedef unsigned short type_20[2];
typedef char type_21[4];
typedef float type_22[4][4];
typedef unsigned char type_23[4];
typedef float type_24[4][2];
typedef float type_25[1];
typedef int type_26[1];
typedef float type_29[4];

struct sfCldObject
{
	sgQTObject tree_object;
	sgQTNode* stay_node;
	sfCldPart* parts[6];
	unsigned char n_parts;
	unsigned char pad[3];
	void* data;
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

struct _anon0
{
	int dummy;
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
	_anon1 fwork[256];
	_anon1* work;
	void(*func)(sfObj*);
	_anon1* work_pt0;
	_anon1* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon1* sys_work;
	_anon1* scene_work;
	_anon1* event_work;
	_anon1* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

union _anon1
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

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon7 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
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

struct _anon2
{
	float start[4];
	float end[4];
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
	_anon0* anim_ctrl;
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

struct _anon3
{
	float center[4];
	float radius;
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
	float bmin[4];
	float bmax[4];
};

struct sgQTNode
{
	int dummy;
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

struct _anon5
{
	float mat[4][4];
	float half_w[4];
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct _anon6
{
	unsigned long tex0;
	unsigned long clamp;
};

struct sgQTObject
{
	_anon3 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

struct _anon7
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon6*, int, int, float*);
	int equip_flag;
};

struct sfOffsetAABB
{
	_anon4 aabb;
	float offset[4];
};

union sfCldBody
{
	_anon5 obb;
	_anon4 aabb;
	sfOffsetAABB offset_aabb;
	_anon2 line;
	_anon3 sphere;
};

_PLAYER_WORK playerw[2];
_GAME_WORK gamew;
float sg_matrix_unit[4][4];

void GameSystemColdInit();
void GameSystemWarmInit();
void GameInit();
void GameSoftReset();
void GameQuit();

// 
// Start address: 0x15deb0
void GameSystemColdInit()
{
	// Line 61, Address: 0x15deb0, Func Offset: 0
	// Line 62, Address: 0x15deb8, Func Offset: 0x8
	// Line 65, Address: 0x15dec0, Func Offset: 0x10
	// Line 68, Address: 0x15dec8, Func Offset: 0x18
	// Line 71, Address: 0x15ded0, Func Offset: 0x20
	// Line 73, Address: 0x15ded8, Func Offset: 0x28
	// Line 74, Address: 0x15dee0, Func Offset: 0x30
	// Func End, Address: 0x15deec, Func Offset: 0x3c
}

// 
// Start address: 0x15def0
void GameSystemWarmInit()
{
	// Line 80, Address: 0x15def0, Func Offset: 0
	// Line 81, Address: 0x15def8, Func Offset: 0x8
	// Line 84, Address: 0x15df00, Func Offset: 0x10
	// Line 89, Address: 0x15df08, Func Offset: 0x18
	// Line 92, Address: 0x15df10, Func Offset: 0x20
	// Line 95, Address: 0x15df18, Func Offset: 0x28
	// Line 97, Address: 0x15df20, Func Offset: 0x30
	// Line 100, Address: 0x15df28, Func Offset: 0x38
	// Line 101, Address: 0x15df30, Func Offset: 0x40
	// Func End, Address: 0x15df3c, Func Offset: 0x4c
}

// 
// Start address: 0x15df40
void GameInit()
{
	// Line 122, Address: 0x15df40, Func Offset: 0
	// Line 123, Address: 0x15df48, Func Offset: 0x8
	// Line 125, Address: 0x15df50, Func Offset: 0x10
	// Line 127, Address: 0x15df58, Func Offset: 0x18
	// Line 129, Address: 0x15df60, Func Offset: 0x20
	// Line 131, Address: 0x15df68, Func Offset: 0x28
	// Line 133, Address: 0x15df70, Func Offset: 0x30
	// Line 136, Address: 0x15df78, Func Offset: 0x38
	// Line 137, Address: 0x15df80, Func Offset: 0x40
	// Line 141, Address: 0x15df88, Func Offset: 0x48
	// Line 143, Address: 0x15df90, Func Offset: 0x50
	// Line 146, Address: 0x15df9c, Func Offset: 0x5c
	// Line 149, Address: 0x15dfa4, Func Offset: 0x64
	// Line 152, Address: 0x15dfac, Func Offset: 0x6c
	// Line 155, Address: 0x15dfb4, Func Offset: 0x74
	// Line 158, Address: 0x15dfbc, Func Offset: 0x7c
	// Line 161, Address: 0x15dfc4, Func Offset: 0x84
	// Line 164, Address: 0x15dfcc, Func Offset: 0x8c
	// Line 167, Address: 0x15dfd4, Func Offset: 0x94
	// Line 170, Address: 0x15dfdc, Func Offset: 0x9c
	// Line 173, Address: 0x15dfe4, Func Offset: 0xa4
	// Line 177, Address: 0x15dfec, Func Offset: 0xac
	// Line 185, Address: 0x15dff8, Func Offset: 0xb8
	// Line 187, Address: 0x15e004, Func Offset: 0xc4
	// Line 190, Address: 0x15e00c, Func Offset: 0xcc
	// Line 193, Address: 0x15e014, Func Offset: 0xd4
	// Line 196, Address: 0x15e01c, Func Offset: 0xdc
	// Line 201, Address: 0x15e030, Func Offset: 0xf0
	// Line 205, Address: 0x15e03c, Func Offset: 0xfc
	// Line 208, Address: 0x15e044, Func Offset: 0x104
	// Line 209, Address: 0x15e04c, Func Offset: 0x10c
	// Line 212, Address: 0x15e054, Func Offset: 0x114
	// Line 215, Address: 0x15e05c, Func Offset: 0x11c
	// Line 217, Address: 0x15e064, Func Offset: 0x124
	// Line 218, Address: 0x15e06c, Func Offset: 0x12c
	// Line 220, Address: 0x15e074, Func Offset: 0x134
	// Line 223, Address: 0x15e07c, Func Offset: 0x13c
	// Func End, Address: 0x15e088, Func Offset: 0x148
}

// 
// Start address: 0x15e090
void GameSoftReset()
{
	// Line 233, Address: 0x15e090, Func Offset: 0
	// Line 234, Address: 0x15e094, Func Offset: 0x4
	// Line 233, Address: 0x15e098, Func Offset: 0x8
	// Line 234, Address: 0x15e09c, Func Offset: 0xc
	// Line 237, Address: 0x15e0a8, Func Offset: 0x18
	// Line 239, Address: 0x15e0b0, Func Offset: 0x20
	// Line 241, Address: 0x15e0b8, Func Offset: 0x28
	// Line 243, Address: 0x15e0c0, Func Offset: 0x30
	// Line 246, Address: 0x15e0c8, Func Offset: 0x38
	// Func End, Address: 0x15e0d4, Func Offset: 0x44
}

// 
// Start address: 0x15e0e0
void GameQuit()
{
	// Line 251, Address: 0x15e0e0, Func Offset: 0
	// Line 252, Address: 0x15e0e8, Func Offset: 0x8
	// Line 253, Address: 0x15e0f0, Func Offset: 0x10
	// Line 254, Address: 0x15e0f8, Func Offset: 0x18
	// Line 255, Address: 0x15e100, Func Offset: 0x20
	// Line 256, Address: 0x15e108, Func Offset: 0x28
	// Line 258, Address: 0x15e110, Func Offset: 0x30
	// Line 259, Address: 0x15e11c, Func Offset: 0x3c
	// Line 261, Address: 0x15e124, Func Offset: 0x44
	// Line 262, Address: 0x15e12c, Func Offset: 0x4c
	// Func End, Address: 0x15e138, Func Offset: 0x58
}

