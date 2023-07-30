typedef struct sgIKHandle;
typedef union sfCldBody;
typedef struct _PLAYER_WORK;
typedef struct sgBone;
typedef struct sfCldPart;
typedef struct sfCharacter;
typedef struct sgAnime;
typedef struct sfObj;
typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef union _anon4;
typedef struct sfCldObject;
typedef struct _anon5;
typedef struct sgQTNode;
typedef struct sgSVModel;
typedef enum GameItem : unsigned char;
typedef struct _anon6;
typedef struct _anon7;
typedef struct sgQTObject;
typedef struct _GAME_WORK;
typedef struct _anon8;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sfOffsetAABB;

typedef void(*type_0)(_anon7*, int, int, float*);
typedef sgIKSolveResult(*type_3)();
typedef void(*type_10)(sfObj*);
typedef void(*type_11)(sgAnime*, int);
typedef void(*type_16)(sfObj*);

typedef int type_1[8];
typedef float type_2[4][2];
typedef unsigned char type_4[3];
typedef int type_5[8];
typedef int type_6[8];
typedef void* type_7[4];
typedef int type_8[8];
typedef _anon4 type_9[256];
typedef int* type_12[38];
typedef float type_13[4];
typedef int type_14[1];
typedef unsigned char type_15[4];
typedef int type_17[1];
typedef sfCldPart* type_18[6];
typedef int type_19[8];
typedef unsigned char type_20[3];
typedef _PLAYER_WORK type_21[2];
typedef float type_22[4];
typedef int type_23[1];
typedef float type_24[4][4];
typedef int type_25[8];
typedef int type_26[1];
typedef int type_27[1];
typedef int type_28[1];
typedef short type_29[2];
typedef float type_30[4];
typedef unsigned short type_31[2];
typedef char type_32[4];
typedef unsigned char type_33[4];
typedef float type_34[1];
typedef int type_35[1];
typedef int type_36[1];

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

union sfCldBody
{
	_anon3 obb;
	_anon2 aabb;
	sfOffsetAABB offset_aabb;
	_anon0 line;
	_anon1 sphere;
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
	_anon5* anim_ctrl;
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

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon8 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
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

struct sfObj
{
	_anon4 fwork[256];
	_anon4* work;
	void(*func)(sfObj*);
	_anon4* work_pt0;
	_anon4* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon4* sys_work;
	_anon4* scene_work;
	_anon4* event_work;
	_anon4* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct _anon0
{
	float start[4];
	float end[4];
};

struct _anon1
{
	float center[4];
	float radius;
};

struct _anon2
{
	float bmin[4];
	float bmax[4];
};

struct _anon3
{
	float mat[4][4];
	float half_w[4];
};

union _anon4
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

struct sfCldObject
{
	sgQTObject tree_object;
	sgQTNode* stay_node;
	sfCldPart* parts[6];
	unsigned char n_parts;
	unsigned char pad[3];
	void* data;
};

struct _anon5
{
	int dummy;
};

struct sgQTNode
{
	int dummy;
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
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

struct _anon6
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

struct _anon7
{
	unsigned long tex0;
	unsigned long clamp;
};

struct sgQTObject
{
	_anon1 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
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

struct _anon8
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon7*, int, int, float*);
	int equip_flag;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct sfOffsetAABB
{
	_anon2 aabb;
	float offset[4];
};

int dulls_normal[8];
int dulls_golf[8];
int dulls_bat[8];
int dulls_scoop[8];
int dulls_pick[8];
int dulls_chain[8];
int* dull_motions[38];
_PLAYER_WORK playerw[2];
_GAME_WORK gamew;

int start_motion_ok();
int PlayerAnimeGetNextMotion(_anon6* ui_work);
int PlayerAnimeGetNextRunMotion();
int PlayerAnimeGetDullMotion(_PLAYER_WORK* p);

// 
// Start address: 0x1c0260
int start_motion_ok()
{
	int ret;
	// Line 38, Address: 0x1c0260, Func Offset: 0
	// Line 42, Address: 0x1c026c, Func Offset: 0xc
	// Line 43, Address: 0x1c027c, Func Offset: 0x1c
	// Line 42, Address: 0x1c0280, Func Offset: 0x20
	// Line 43, Address: 0x1c0284, Func Offset: 0x24
	// Line 46, Address: 0x1c0298, Func Offset: 0x38
	// Line 48, Address: 0x1c029c, Func Offset: 0x3c
	// Line 50, Address: 0x1c02a0, Func Offset: 0x40
	// Line 51, Address: 0x1c02a4, Func Offset: 0x44
	// Func End, Address: 0x1c02b4, Func Offset: 0x54
}

// 
// Start address: 0x1c02c0
int PlayerAnimeGetNextMotion(_anon6* ui_work)
{
	_PLAYER_WORK* p;
	// Line 54, Address: 0x1c02c0, Func Offset: 0
	// Line 55, Address: 0x1c02c4, Func Offset: 0x4
	// Line 54, Address: 0x1c02c8, Func Offset: 0x8
	// Line 57, Address: 0x1c02cc, Func Offset: 0xc
	// Line 58, Address: 0x1c02e0, Func Offset: 0x20
	// Line 60, Address: 0x1c0308, Func Offset: 0x48
	// Line 61, Address: 0x1c0320, Func Offset: 0x60
	// Line 62, Address: 0x1c0330, Func Offset: 0x70
	// Line 64, Address: 0x1c0358, Func Offset: 0x98
	// Line 66, Address: 0x1c0360, Func Offset: 0xa0
	// Line 69, Address: 0x1c0368, Func Offset: 0xa8
	// Line 73, Address: 0x1c0370, Func Offset: 0xb0
	// Line 77, Address: 0x1c0378, Func Offset: 0xb8
	// Line 82, Address: 0x1c03a4, Func Offset: 0xe4
	// Line 84, Address: 0x1c03a8, Func Offset: 0xe8
	// Line 89, Address: 0x1c03d4, Func Offset: 0x114
	// Line 91, Address: 0x1c03d8, Func Offset: 0x118
	// Line 97, Address: 0x1c0404, Func Offset: 0x144
	// Line 100, Address: 0x1c0408, Func Offset: 0x148
	// Line 103, Address: 0x1c0410, Func Offset: 0x150
	// Func End, Address: 0x1c041c, Func Offset: 0x15c
}

// 
// Start address: 0x1c0420
int PlayerAnimeGetNextRunMotion()
{
	_PLAYER_WORK* p;
	// Line 107, Address: 0x1c0420, Func Offset: 0
	// Line 108, Address: 0x1c0424, Func Offset: 0x4
	// Line 107, Address: 0x1c0428, Func Offset: 0x8
	// Line 110, Address: 0x1c042c, Func Offset: 0xc
	// Line 108, Address: 0x1c0430, Func Offset: 0x10
	// Line 110, Address: 0x1c0434, Func Offset: 0x14
	// Line 111, Address: 0x1c0444, Func Offset: 0x24
	// Line 112, Address: 0x1c046c, Func Offset: 0x4c
	// Line 114, Address: 0x1c0470, Func Offset: 0x50
	// Line 120, Address: 0x1c048c, Func Offset: 0x6c
	// Line 121, Address: 0x1c0490, Func Offset: 0x70
	// Line 124, Address: 0x1c0498, Func Offset: 0x78
	// Line 127, Address: 0x1c04a0, Func Offset: 0x80
	// Line 133, Address: 0x1c04a8, Func Offset: 0x88
	// Line 136, Address: 0x1c04b0, Func Offset: 0x90
	// Func End, Address: 0x1c04bc, Func Offset: 0x9c
}

// 
// Start address: 0x1c04c0
int PlayerAnimeGetDullMotion(_PLAYER_WORK* p)
{
	int wp;
	// Line 140, Address: 0x1c04c0, Func Offset: 0
	// Line 145, Address: 0x1c04c4, Func Offset: 0x4
	// Line 146, Address: 0x1c04cc, Func Offset: 0xc
	// Line 152, Address: 0x1c04dc, Func Offset: 0x1c
	// Line 161, Address: 0x1c04e0, Func Offset: 0x20
	// Line 162, Address: 0x1c0518, Func Offset: 0x58
	// Line 163, Address: 0x1c0520, Func Offset: 0x60
	// Func End, Address: 0x1c0528, Func Offset: 0x68
}

