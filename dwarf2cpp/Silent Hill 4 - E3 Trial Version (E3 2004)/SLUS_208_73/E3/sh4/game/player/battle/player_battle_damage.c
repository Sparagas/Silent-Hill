typedef struct sgIKHandle;
typedef struct _PLAYER_WORK;
typedef union _anon0;
typedef struct _anon1;
typedef union sfCldBody;
typedef struct sgBone;
typedef struct sgAnime;
typedef struct _anon2;
typedef struct sfCldPart;
typedef struct sfObj;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef enum GameItem : unsigned char;
typedef struct _anon8;
typedef struct sfCharacter;
typedef struct _anon9;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sfCldObject;
typedef struct sgQTNode;
typedef struct _anon10;
typedef struct sgSVModel;
typedef struct _anon11;
typedef struct _GAME_WORK;
typedef struct sgQTObject;
typedef struct sfOffsetAABB;

typedef void(*type_0)(sgAnime*, int);
typedef void(*type_3)(sfObj*);
typedef sgIKSolveResult(*type_13)();
typedef void(*type_19)(_anon10*, int, int, float*);
typedef void(*type_28)(sfObj*);

typedef float type_1[4];
typedef unsigned char type_2[3];
typedef unsigned char type_4[4];
typedef _PLAYER_WORK type_5[2];
typedef int type_6[1];
typedef _anon8 type_7[9];
typedef int type_8[1];
typedef float type_9[4];
typedef float type_10[4][2];
typedef int type_11[1];
typedef sfCldPart* type_12[6];
typedef int type_14[1];
typedef unsigned char type_15[3];
typedef float type_16[4][4];
typedef int type_17[1];
typedef int type_18[1];
typedef short type_20[2];
typedef unsigned short type_21[2];
typedef char type_22[4];
typedef float type_23[4];
typedef _anon0 type_24[256];
typedef unsigned char type_25[4];
typedef int type_26[1];
typedef void* type_27[4];
typedef float type_29[1];
typedef int type_30[1];

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
	_anon1* anim_ctrl;
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

union _anon0
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

struct _anon1
{
	int dummy;
};

union sfCldBody
{
	_anon7 obb;
	_anon6 aabb;
	sfOffsetAABB offset_aabb;
	_anon4 line;
	_anon5 sphere;
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

struct _anon2
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

struct sfObj
{
	_anon0 fwork[256];
	_anon0* work;
	void(*func)(sfObj*);
	_anon0* work_pt0;
	_anon0* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon0* sys_work;
	_anon0* scene_work;
	_anon0* event_work;
	_anon0* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct _anon3
{
	float abcd[4];
};

struct _anon4
{
	float start[4];
	float end[4];
};

struct _anon5
{
	float center[4];
	float radius;
};

struct _anon6
{
	float bmin[4];
	float bmax[4];
};

struct _anon7
{
	float mat[4][4];
	float half_w[4];
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

struct _anon8
{
	unsigned int correct;
	float fly;
	float roll;
	float foot;
	float stand;
	float se;
};

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon11 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

struct _anon9
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

struct sfCldObject
{
	sgQTObject tree_object;
	sgQTNode* stay_node;
	sfCldPart* parts[6];
	unsigned char n_parts;
	unsigned char pad[3];
	void* data;
};

struct sgQTNode
{
	int dummy;
};

struct _anon10
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

struct _anon11
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon10*, int, int, float*);
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
	_anon5 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

struct sfOffsetAABB
{
	_anon6 aabb;
	float offset[4];
};

_anon8 boss_param[9];
float stag_current;
_PLAYER_WORK playerw[2];
float sg_vector_zero[4];
unsigned int step_counter;
_GAME_WORK gamew;
_anon9 player_battle_work;

void mov_angle_x(float t_x);
void mov_angle_z(float t_z);
void stag_target_lert(float target);
int type_is_stagger();
int type_is_boss_stagger();
int stag_proc(float stag_dist);
int PlayerBattleDamageProc();
void PlayerBattleDamageBuzzBloodsuck();
float floor_height_check(float* pos);
float set_angle_x();
float set_angle_z();
void PlayerBattleDamageSetAngleForDeath();
void stag_boss(float stag_dist);
void stag_sb13(float stag_dist);

// 
// Start address: 0x2d9f20
void mov_angle_x(float t_x)
{
	float c_x;
	float l_x;
	// Line 110, Address: 0x2d9f20, Func Offset: 0
	// Line 114, Address: 0x2d9f24, Func Offset: 0x4
	// Line 110, Address: 0x2d9f28, Func Offset: 0x8
	// Line 114, Address: 0x2d9f34, Func Offset: 0x14
	// Line 115, Address: 0x2d9f38, Func Offset: 0x18
	// Line 117, Address: 0x2d9f44, Func Offset: 0x24
	// Line 115, Address: 0x2d9f48, Func Offset: 0x28
	// Line 117, Address: 0x2d9f4c, Func Offset: 0x2c
	// Line 115, Address: 0x2d9f58, Func Offset: 0x38
	// Line 117, Address: 0x2d9f5c, Func Offset: 0x3c
	// Line 120, Address: 0x2d9f6c, Func Offset: 0x4c
	// Func End, Address: 0x2d9f80, Func Offset: 0x60
}

// 
// Start address: 0x2d9f80
void mov_angle_z(float t_z)
{
	float c_z;
	float l_z;
	// Line 124, Address: 0x2d9f80, Func Offset: 0
	// Line 128, Address: 0x2d9f84, Func Offset: 0x4
	// Line 124, Address: 0x2d9f88, Func Offset: 0x8
	// Line 128, Address: 0x2d9f94, Func Offset: 0x14
	// Line 129, Address: 0x2d9f98, Func Offset: 0x18
	// Line 131, Address: 0x2d9fa4, Func Offset: 0x24
	// Line 129, Address: 0x2d9fa8, Func Offset: 0x28
	// Line 131, Address: 0x2d9fac, Func Offset: 0x2c
	// Line 129, Address: 0x2d9fb8, Func Offset: 0x38
	// Line 131, Address: 0x2d9fbc, Func Offset: 0x3c
	// Line 134, Address: 0x2d9fcc, Func Offset: 0x4c
	// Func End, Address: 0x2d9fe0, Func Offset: 0x60
}

// 
// Start address: 0x2d9fe0
void stag_target_lert(float target)
{
	// Line 138, Address: 0x2d9fe0, Func Offset: 0
	// Line 139, Address: 0x2d9fe8, Func Offset: 0x8
	// Line 140, Address: 0x2d9ff4, Func Offset: 0x14
	// Line 141, Address: 0x2da018, Func Offset: 0x38
	// Line 143, Address: 0x2da020, Func Offset: 0x40
	// Line 144, Address: 0x2da04c, Func Offset: 0x6c
	// Line 147, Address: 0x2da050, Func Offset: 0x70
	// Func End, Address: 0x2da058, Func Offset: 0x78
}

// 
// Start address: 0x2da060
int type_is_stagger()
{
	int ret;
	int type;
	// Line 151, Address: 0x2da060, Func Offset: 0
	// Line 153, Address: 0x2da064, Func Offset: 0x4
	// Line 151, Address: 0x2da068, Func Offset: 0x8
	// Line 153, Address: 0x2da070, Func Offset: 0x10
	// Line 155, Address: 0x2da078, Func Offset: 0x18
	// Line 156, Address: 0x2da08c, Func Offset: 0x2c
	// Line 158, Address: 0x2da090, Func Offset: 0x30
	// Line 159, Address: 0x2da094, Func Offset: 0x34
	// Func End, Address: 0x2da0a4, Func Offset: 0x44
}

// 
// Start address: 0x2da0b0
int type_is_boss_stagger()
{
	int ret;
	int type;
	// Line 163, Address: 0x2da0b0, Func Offset: 0
	// Line 165, Address: 0x2da0b4, Func Offset: 0x4
	// Line 163, Address: 0x2da0b8, Func Offset: 0x8
	// Line 165, Address: 0x2da0c0, Func Offset: 0x10
	// Line 167, Address: 0x2da0c8, Func Offset: 0x18
	// Line 168, Address: 0x2da0dc, Func Offset: 0x2c
	// Line 170, Address: 0x2da0e0, Func Offset: 0x30
	// Line 171, Address: 0x2da0e4, Func Offset: 0x34
	// Func End, Address: 0x2da0f4, Func Offset: 0x44
}

// 
// Start address: 0x2da100
int stag_proc(float stag_dist)
{
	float stag_time;
	float stag_dir;
	int ret;
	float pos_l[4];
	float pos_n[4];
	float pos_r[4];
	// Line 175, Address: 0x2da100, Func Offset: 0
	// Line 176, Address: 0x2da104, Func Offset: 0x4
	// Line 175, Address: 0x2da108, Func Offset: 0x8
	// Line 176, Address: 0x2da114, Func Offset: 0x14
	// Line 180, Address: 0x2da11c, Func Offset: 0x1c
	// Line 184, Address: 0x2da130, Func Offset: 0x30
	// Line 185, Address: 0x2da138, Func Offset: 0x38
	// Line 186, Address: 0x2da144, Func Offset: 0x44
	// Line 187, Address: 0x2da14c, Func Offset: 0x4c
	// Line 188, Address: 0x2da160, Func Offset: 0x60
	// Line 189, Address: 0x2da174, Func Offset: 0x74
	// Line 188, Address: 0x2da178, Func Offset: 0x78
	// Line 189, Address: 0x2da180, Func Offset: 0x80
	// Line 190, Address: 0x2da18c, Func Offset: 0x8c
	// Line 189, Address: 0x2da190, Func Offset: 0x90
	// Line 190, Address: 0x2da194, Func Offset: 0x94
	// Line 189, Address: 0x2da198, Func Offset: 0x98
	// Line 190, Address: 0x2da19c, Func Offset: 0x9c
	// Line 189, Address: 0x2da1a0, Func Offset: 0xa0
	// Line 190, Address: 0x2da1ac, Func Offset: 0xac
	// Line 191, Address: 0x2da1b4, Func Offset: 0xb4
	// Line 192, Address: 0x2da1c0, Func Offset: 0xc0
	// Line 193, Address: 0x2da1d4, Func Offset: 0xd4
	// Line 197, Address: 0x2da1d8, Func Offset: 0xd8
	// Func End, Address: 0x2da1ec, Func Offset: 0xec
}

// 
// Start address: 0x2da1f0
int PlayerBattleDamageProc()
{
	_PLAYER_WORK* p;
	_anon2* ui_work;
	float stag_dist;
	float over_ratio;
	sgBone* bone;
	float b_pos[4];
	float b_dir[4];
	float h;
	float chst[4];
	float sldr[4];
	float d;
	float bd[4];
	float siz;
	float dis;
	float ftime;
	float pos_l[4];
	float pos_n[4];
	float pos_r[4];
	float h;
	float ly_bak;
	float lx_bak;
	// Line 201, Address: 0x2da1f0, Func Offset: 0
	// Line 202, Address: 0x2da200, Func Offset: 0x10
	// Line 201, Address: 0x2da204, Func Offset: 0x14
	// Line 202, Address: 0x2da208, Func Offset: 0x18
	// Line 203, Address: 0x2da20c, Func Offset: 0x1c
	// Line 206, Address: 0x2da218, Func Offset: 0x28
	// Line 207, Address: 0x2da224, Func Offset: 0x34
	// Line 209, Address: 0x2da228, Func Offset: 0x38
	// Line 212, Address: 0x2da230, Func Offset: 0x40
	// Line 214, Address: 0x2da234, Func Offset: 0x44
	// Line 215, Address: 0x2da240, Func Offset: 0x50
	// Line 219, Address: 0x2da27c, Func Offset: 0x8c
	// Line 220, Address: 0x2da290, Func Offset: 0xa0
	// Line 221, Address: 0x2da2a0, Func Offset: 0xb0
	// Line 222, Address: 0x2da2ac, Func Offset: 0xbc
	// Line 231, Address: 0x2da2b0, Func Offset: 0xc0
	// Line 232, Address: 0x2da2bc, Func Offset: 0xcc
	// Line 233, Address: 0x2da2d0, Func Offset: 0xe0
	// Line 235, Address: 0x2da2f8, Func Offset: 0x108
	// Line 236, Address: 0x2da300, Func Offset: 0x110
	// Line 237, Address: 0x2da308, Func Offset: 0x118
	// Line 238, Address: 0x2da318, Func Offset: 0x128
	// Line 239, Address: 0x2da320, Func Offset: 0x130
	// Line 241, Address: 0x2da328, Func Offset: 0x138
	// Line 243, Address: 0x2da33c, Func Offset: 0x14c
	// Line 244, Address: 0x2da348, Func Offset: 0x158
	// Line 245, Address: 0x2da350, Func Offset: 0x160
	// Line 247, Address: 0x2da364, Func Offset: 0x174
	// Line 249, Address: 0x2da370, Func Offset: 0x180
	// Line 256, Address: 0x2da378, Func Offset: 0x188
	// Line 257, Address: 0x2da388, Func Offset: 0x198
	// Line 258, Address: 0x2da394, Func Offset: 0x1a4
	// Line 260, Address: 0x2da3a0, Func Offset: 0x1b0
	// Line 262, Address: 0x2da3a8, Func Offset: 0x1b8
	// Line 264, Address: 0x2da3b8, Func Offset: 0x1c8
	// Line 265, Address: 0x2da3d0, Func Offset: 0x1e0
	// Line 268, Address: 0x2da3d4, Func Offset: 0x1e4
	// Line 265, Address: 0x2da3d8, Func Offset: 0x1e8
	// Line 268, Address: 0x2da3dc, Func Offset: 0x1ec
	// Line 266, Address: 0x2da3e0, Func Offset: 0x1f0
	// Line 268, Address: 0x2da3e4, Func Offset: 0x1f4
	// Line 270, Address: 0x2da3f0, Func Offset: 0x200
	// Line 272, Address: 0x2da3f8, Func Offset: 0x208
	// Line 273, Address: 0x2da404, Func Offset: 0x214
	// Line 276, Address: 0x2da408, Func Offset: 0x218
	// Line 273, Address: 0x2da40c, Func Offset: 0x21c
	// Line 276, Address: 0x2da410, Func Offset: 0x220
	// Line 274, Address: 0x2da414, Func Offset: 0x224
	// Line 276, Address: 0x2da418, Func Offset: 0x228
	// Line 279, Address: 0x2da424, Func Offset: 0x234
	// Line 281, Address: 0x2da428, Func Offset: 0x238
	// Line 282, Address: 0x2da448, Func Offset: 0x258
	// Line 286, Address: 0x2da44c, Func Offset: 0x25c
	// Line 282, Address: 0x2da454, Func Offset: 0x264
	// Line 283, Address: 0x2da458, Func Offset: 0x268
	// Line 286, Address: 0x2da460, Func Offset: 0x270
	// Line 284, Address: 0x2da464, Func Offset: 0x274
	// Line 286, Address: 0x2da468, Func Offset: 0x278
	// Line 289, Address: 0x2da470, Func Offset: 0x280
	// Line 291, Address: 0x2da478, Func Offset: 0x288
	// Line 292, Address: 0x2da47c, Func Offset: 0x28c
	// Line 293, Address: 0x2da480, Func Offset: 0x290
	// Line 299, Address: 0x2da484, Func Offset: 0x294
	// Line 302, Address: 0x2da490, Func Offset: 0x2a0
	// Line 308, Address: 0x2da49c, Func Offset: 0x2ac
	// Line 309, Address: 0x2da4b8, Func Offset: 0x2c8
	// Line 310, Address: 0x2da4bc, Func Offset: 0x2cc
	// Line 312, Address: 0x2da4c4, Func Offset: 0x2d4
	// Line 316, Address: 0x2da4cc, Func Offset: 0x2dc
	// Line 317, Address: 0x2da4e4, Func Offset: 0x2f4
	// Line 318, Address: 0x2da500, Func Offset: 0x310
	// Line 319, Address: 0x2da504, Func Offset: 0x314
	// Line 321, Address: 0x2da508, Func Offset: 0x318
	// Line 324, Address: 0x2da510, Func Offset: 0x320
	// Line 326, Address: 0x2da538, Func Offset: 0x348
	// Line 330, Address: 0x2da544, Func Offset: 0x354
	// Line 331, Address: 0x2da550, Func Offset: 0x360
	// Line 332, Address: 0x2da55c, Func Offset: 0x36c
	// Line 333, Address: 0x2da568, Func Offset: 0x378
	// Line 334, Address: 0x2da574, Func Offset: 0x384
	// Line 335, Address: 0x2da590, Func Offset: 0x3a0
	// Line 337, Address: 0x2da5b8, Func Offset: 0x3c8
	// Line 339, Address: 0x2da5c0, Func Offset: 0x3d0
	// Line 340, Address: 0x2da5cc, Func Offset: 0x3dc
	// Line 341, Address: 0x2da5d8, Func Offset: 0x3e8
	// Line 342, Address: 0x2da5e4, Func Offset: 0x3f4
	// Line 343, Address: 0x2da5ec, Func Offset: 0x3fc
	// Line 344, Address: 0x2da5f0, Func Offset: 0x400
	// Line 345, Address: 0x2da5fc, Func Offset: 0x40c
	// Line 346, Address: 0x2da608, Func Offset: 0x418
	// Line 347, Address: 0x2da614, Func Offset: 0x424
	// Line 348, Address: 0x2da61c, Func Offset: 0x42c
	// Line 349, Address: 0x2da620, Func Offset: 0x430
	// Line 350, Address: 0x2da62c, Func Offset: 0x43c
	// Line 351, Address: 0x2da638, Func Offset: 0x448
	// Line 353, Address: 0x2da644, Func Offset: 0x454
	// Line 354, Address: 0x2da648, Func Offset: 0x458
	// Line 355, Address: 0x2da654, Func Offset: 0x464
	// Line 354, Address: 0x2da658, Func Offset: 0x468
	// Line 355, Address: 0x2da660, Func Offset: 0x470
	// Line 360, Address: 0x2da670, Func Offset: 0x480
	// Line 361, Address: 0x2da674, Func Offset: 0x484
	// Line 363, Address: 0x2da67c, Func Offset: 0x48c
	// Line 362, Address: 0x2da680, Func Offset: 0x490
	// Line 363, Address: 0x2da684, Func Offset: 0x494
	// Line 364, Address: 0x2da68c, Func Offset: 0x49c
	// Line 363, Address: 0x2da690, Func Offset: 0x4a0
	// Line 365, Address: 0x2da694, Func Offset: 0x4a4
	// Line 366, Address: 0x2da6b4, Func Offset: 0x4c4
	// Line 367, Address: 0x2da6d4, Func Offset: 0x4e4
	// Line 369, Address: 0x2da6e0, Func Offset: 0x4f0
	// Line 367, Address: 0x2da6e4, Func Offset: 0x4f4
	// Line 369, Address: 0x2da6e8, Func Offset: 0x4f8
	// Line 367, Address: 0x2da6ec, Func Offset: 0x4fc
	// Line 369, Address: 0x2da6f8, Func Offset: 0x508
	// Line 368, Address: 0x2da6fc, Func Offset: 0x50c
	// Line 367, Address: 0x2da700, Func Offset: 0x510
	// Line 369, Address: 0x2da708, Func Offset: 0x518
	// Line 368, Address: 0x2da710, Func Offset: 0x520
	// Line 369, Address: 0x2da714, Func Offset: 0x524
	// Line 370, Address: 0x2da730, Func Offset: 0x540
	// Line 374, Address: 0x2da74c, Func Offset: 0x55c
	// Line 375, Address: 0x2da760, Func Offset: 0x570
	// Line 374, Address: 0x2da764, Func Offset: 0x574
	// Line 375, Address: 0x2da768, Func Offset: 0x578
	// Line 374, Address: 0x2da76c, Func Offset: 0x57c
	// Line 375, Address: 0x2da770, Func Offset: 0x580
	// Line 378, Address: 0x2da780, Func Offset: 0x590
	// Line 379, Address: 0x2da794, Func Offset: 0x5a4
	// Line 384, Address: 0x2da7b0, Func Offset: 0x5c0
	// Line 390, Address: 0x2da7c0, Func Offset: 0x5d0
	// Line 394, Address: 0x2da80c, Func Offset: 0x61c
	// Line 390, Address: 0x2da810, Func Offset: 0x620
	// Line 394, Address: 0x2da81c, Func Offset: 0x62c
	// Line 395, Address: 0x2da828, Func Offset: 0x638
	// Line 396, Address: 0x2da838, Func Offset: 0x648
	// Line 398, Address: 0x2da858, Func Offset: 0x668
	// Line 399, Address: 0x2da86c, Func Offset: 0x67c
	// Line 400, Address: 0x2da870, Func Offset: 0x680
	// Line 401, Address: 0x2da874, Func Offset: 0x684
	// Line 400, Address: 0x2da878, Func Offset: 0x688
	// Line 401, Address: 0x2da87c, Func Offset: 0x68c
	// Line 404, Address: 0x2da880, Func Offset: 0x690
	// Line 405, Address: 0x2da890, Func Offset: 0x6a0
	// Line 406, Address: 0x2da894, Func Offset: 0x6a4
	// Line 408, Address: 0x2da898, Func Offset: 0x6a8
	// Line 411, Address: 0x2da8a0, Func Offset: 0x6b0
	// Line 412, Address: 0x2da8bc, Func Offset: 0x6cc
	// Line 413, Address: 0x2da8c0, Func Offset: 0x6d0
	// Line 414, Address: 0x2da8cc, Func Offset: 0x6dc
	// Line 415, Address: 0x2da8d4, Func Offset: 0x6e4
	// Line 416, Address: 0x2da8d8, Func Offset: 0x6e8
	// Line 417, Address: 0x2da8e4, Func Offset: 0x6f4
	// Line 418, Address: 0x2da8ec, Func Offset: 0x6fc
	// Line 419, Address: 0x2da8f0, Func Offset: 0x700
	// Line 421, Address: 0x2da8fc, Func Offset: 0x70c
	// Line 423, Address: 0x2da900, Func Offset: 0x710
	// Line 426, Address: 0x2da908, Func Offset: 0x718
	// Line 428, Address: 0x2da91c, Func Offset: 0x72c
	// Line 434, Address: 0x2da958, Func Offset: 0x768
	// Line 435, Address: 0x2da968, Func Offset: 0x778
	// Line 436, Address: 0x2da984, Func Offset: 0x794
	// Line 438, Address: 0x2da998, Func Offset: 0x7a8
	// Line 439, Address: 0x2da9a8, Func Offset: 0x7b8
	// Line 442, Address: 0x2da9c4, Func Offset: 0x7d4
	// Line 439, Address: 0x2da9c8, Func Offset: 0x7d8
	// Line 442, Address: 0x2da9dc, Func Offset: 0x7ec
	// Line 445, Address: 0x2da9f8, Func Offset: 0x808
	// Line 442, Address: 0x2da9fc, Func Offset: 0x80c
	// Line 445, Address: 0x2daa00, Func Offset: 0x810
	// Line 442, Address: 0x2daa04, Func Offset: 0x814
	// Line 445, Address: 0x2daa18, Func Offset: 0x828
	// Line 446, Address: 0x2daa20, Func Offset: 0x830
	// Line 447, Address: 0x2daa30, Func Offset: 0x840
	// Line 448, Address: 0x2daa38, Func Offset: 0x848
	// Line 449, Address: 0x2daa40, Func Offset: 0x850
	// Line 452, Address: 0x2daa48, Func Offset: 0x858
	// Line 465, Address: 0x2daaa8, Func Offset: 0x8b8
	// Line 461, Address: 0x2daaac, Func Offset: 0x8bc
	// Line 465, Address: 0x2daab0, Func Offset: 0x8c0
	// Line 462, Address: 0x2daab4, Func Offset: 0x8c4
	// Line 465, Address: 0x2daab8, Func Offset: 0x8c8
	// Line 463, Address: 0x2daabc, Func Offset: 0x8cc
	// Line 464, Address: 0x2daac0, Func Offset: 0x8d0
	// Line 465, Address: 0x2daac4, Func Offset: 0x8d4
	// Line 469, Address: 0x2daacc, Func Offset: 0x8dc
	// Line 470, Address: 0x2daae4, Func Offset: 0x8f4
	// Line 471, Address: 0x2dab00, Func Offset: 0x910
	// Line 476, Address: 0x2dab04, Func Offset: 0x914
	// Line 478, Address: 0x2dab08, Func Offset: 0x918
	// Line 479, Address: 0x2dab10, Func Offset: 0x920
	// Func End, Address: 0x2dab2c, Func Offset: 0x93c
}

// 
// Start address: 0x2dab30
void PlayerBattleDamageBuzzBloodsuck()
{
	float pos[4];
	float pos_e[4];
	float dir[4];
	float dir_xz[4];
	// Line 483, Address: 0x2dab30, Func Offset: 0
	// Line 489, Address: 0x2dab34, Func Offset: 0x4
	// Line 483, Address: 0x2dab38, Func Offset: 0x8
	// Line 489, Address: 0x2dab3c, Func Offset: 0xc
	// Line 490, Address: 0x2dab50, Func Offset: 0x20
	// Line 491, Address: 0x2dab60, Func Offset: 0x30
	// Line 490, Address: 0x2dab68, Func Offset: 0x38
	// Line 491, Address: 0x2dab70, Func Offset: 0x40
	// Line 492, Address: 0x2dab7c, Func Offset: 0x4c
	// Line 493, Address: 0x2dab88, Func Offset: 0x58
	// Line 496, Address: 0x2dab90, Func Offset: 0x60
	// Line 498, Address: 0x2daba4, Func Offset: 0x74
	// Line 497, Address: 0x2daba8, Func Offset: 0x78
	// Line 498, Address: 0x2dabb4, Func Offset: 0x84
	// Line 497, Address: 0x2dabbc, Func Offset: 0x8c
	// Line 498, Address: 0x2dabc0, Func Offset: 0x90
	// Line 499, Address: 0x2dabc8, Func Offset: 0x98
	// Line 500, Address: 0x2dabe8, Func Offset: 0xb8
	// Line 501, Address: 0x2dabf8, Func Offset: 0xc8
	// Line 502, Address: 0x2dabfc, Func Offset: 0xcc
	// Line 501, Address: 0x2dac04, Func Offset: 0xd4
	// Line 502, Address: 0x2dac08, Func Offset: 0xd8
	// Line 503, Address: 0x2dac2c, Func Offset: 0xfc
	// Line 504, Address: 0x2dac58, Func Offset: 0x128
	// Line 505, Address: 0x2dac84, Func Offset: 0x154
	// Line 506, Address: 0x2daca4, Func Offset: 0x174
	// Line 508, Address: 0x2dacc0, Func Offset: 0x190
	// Line 511, Address: 0x2dacd0, Func Offset: 0x1a0
	// Func End, Address: 0x2dacdc, Func Offset: 0x1ac
}

// 
// Start address: 0x2dace0
float floor_height_check(float* pos)
{
	int hit;
	_anon3 plane;
	_anon4 line;
	float tmp[4];
	float ret;
	int res;
	// Line 515, Address: 0x2dace0, Func Offset: 0
	// Line 522, Address: 0x2dace8, Func Offset: 0x8
	// Line 515, Address: 0x2dacec, Func Offset: 0xc
	// Line 522, Address: 0x2dacf4, Func Offset: 0x14
	// Line 523, Address: 0x2dacfc, Func Offset: 0x1c
	// Line 527, Address: 0x2dad08, Func Offset: 0x28
	// Line 525, Address: 0x2dad0c, Func Offset: 0x2c
	// Line 526, Address: 0x2dad14, Func Offset: 0x34
	// Line 527, Address: 0x2dad18, Func Offset: 0x38
	// Line 525, Address: 0x2dad1c, Func Offset: 0x3c
	// Line 526, Address: 0x2dad28, Func Offset: 0x48
	// Line 525, Address: 0x2dad2c, Func Offset: 0x4c
	// Line 527, Address: 0x2dad30, Func Offset: 0x50
	// Line 528, Address: 0x2dad38, Func Offset: 0x58
	// Line 530, Address: 0x2dad40, Func Offset: 0x60
	// Line 531, Address: 0x2dad4c, Func Offset: 0x6c
	// Line 532, Address: 0x2dad54, Func Offset: 0x74
	// Line 533, Address: 0x2dad5c, Func Offset: 0x7c
	// Line 535, Address: 0x2dad68, Func Offset: 0x88
	// Line 537, Address: 0x2dad6c, Func Offset: 0x8c
	// Line 540, Address: 0x2dad78, Func Offset: 0x98
	// Line 541, Address: 0x2dad7c, Func Offset: 0x9c
	// Line 544, Address: 0x2dad80, Func Offset: 0xa0
	// Func End, Address: 0x2dad90, Func Offset: 0xb0
}

// 
// Start address: 0x2dad90
float set_angle_x()
{
	float pos_f[4];
	float pos_b[4];
	float s_f;
	float c_f;
	float height_f;
	float height_b;
	float angle;
	float hdiff;
	float dif;
	float f_a;
	float f_b;
	// Line 548, Address: 0x2dad90, Func Offset: 0
	// Line 558, Address: 0x2dad94, Func Offset: 0x4
	// Line 548, Address: 0x2dad98, Func Offset: 0x8
	// Line 558, Address: 0x2dada8, Func Offset: 0x18
	// Line 559, Address: 0x2dadb0, Func Offset: 0x20
	// Line 560, Address: 0x2dadc0, Func Offset: 0x30
	// Line 566, Address: 0x2dadcc, Func Offset: 0x3c
	// Line 560, Address: 0x2dadd0, Func Offset: 0x40
	// Line 561, Address: 0x2daddc, Func Offset: 0x4c
	// Line 562, Address: 0x2dade4, Func Offset: 0x54
	// Line 563, Address: 0x2dadec, Func Offset: 0x5c
	// Line 562, Address: 0x2dadf0, Func Offset: 0x60
	// Line 563, Address: 0x2dadf4, Func Offset: 0x64
	// Line 561, Address: 0x2dadf8, Func Offset: 0x68
	// Line 564, Address: 0x2dadfc, Func Offset: 0x6c
	// Line 560, Address: 0x2dae00, Func Offset: 0x70
	// Line 562, Address: 0x2dae08, Func Offset: 0x78
	// Line 565, Address: 0x2dae0c, Func Offset: 0x7c
	// Line 562, Address: 0x2dae10, Func Offset: 0x80
	// Line 566, Address: 0x2dae14, Func Offset: 0x84
	// Line 567, Address: 0x2dae20, Func Offset: 0x90
	// Line 568, Address: 0x2dae2c, Func Offset: 0x9c
	// Line 569, Address: 0x2dae50, Func Offset: 0xc0
	// Line 573, Address: 0x2dae60, Func Offset: 0xd0
	// Line 572, Address: 0x2dae64, Func Offset: 0xd4
	// Line 573, Address: 0x2dae68, Func Offset: 0xd8
	// Line 575, Address: 0x2dae84, Func Offset: 0xf4
	// Line 573, Address: 0x2dae88, Func Offset: 0xf8
	// Line 575, Address: 0x2dae8c, Func Offset: 0xfc
	// Line 576, Address: 0x2daea4, Func Offset: 0x114
	// Line 577, Address: 0x2daeb0, Func Offset: 0x120
	// Line 578, Address: 0x2daecc, Func Offset: 0x13c
	// Line 580, Address: 0x2daed0, Func Offset: 0x140
	// Line 583, Address: 0x2daed8, Func Offset: 0x148
	// Line 585, Address: 0x2daefc, Func Offset: 0x16c
	// Line 586, Address: 0x2daf00, Func Offset: 0x170
	// Line 587, Address: 0x2daf04, Func Offset: 0x174
	// Line 588, Address: 0x2daf10, Func Offset: 0x180
	// Line 590, Address: 0x2daf18, Func Offset: 0x188
	// Line 591, Address: 0x2daf20, Func Offset: 0x190
	// Line 592, Address: 0x2daf38, Func Offset: 0x1a8
	// Line 593, Address: 0x2daf40, Func Offset: 0x1b0
	// Line 594, Address: 0x2daf48, Func Offset: 0x1b8
	// Line 596, Address: 0x2daf50, Func Offset: 0x1c0
	// Line 599, Address: 0x2daf60, Func Offset: 0x1d0
	// Line 600, Address: 0x2daf68, Func Offset: 0x1d8
	// Func End, Address: 0x2daf80, Func Offset: 0x1f0
}

// 
// Start address: 0x2daf80
float set_angle_z()
{
	float pos_l[4];
	float pos_r[4];
	float height_l;
	float height_r;
	float angle;
	float s_f;
	float c_f;
	float hdiff;
	float dif;
	float f_a;
	float f_b;
	// Line 604, Address: 0x2daf80, Func Offset: 0
	// Line 615, Address: 0x2daf84, Func Offset: 0x4
	// Line 604, Address: 0x2daf88, Func Offset: 0x8
	// Line 615, Address: 0x2daf8c, Func Offset: 0xc
	// Line 604, Address: 0x2daf90, Func Offset: 0x10
	// Line 615, Address: 0x2daf94, Func Offset: 0x14
	// Line 604, Address: 0x2daf98, Func Offset: 0x18
	// Line 615, Address: 0x2dafa0, Func Offset: 0x20
	// Line 616, Address: 0x2dafb0, Func Offset: 0x30
	// Line 615, Address: 0x2dafc0, Func Offset: 0x40
	// Line 616, Address: 0x2dafc4, Func Offset: 0x44
	// Line 617, Address: 0x2dafd0, Func Offset: 0x50
	// Line 623, Address: 0x2dafdc, Func Offset: 0x5c
	// Line 617, Address: 0x2dafe0, Func Offset: 0x60
	// Line 618, Address: 0x2dafec, Func Offset: 0x6c
	// Line 619, Address: 0x2daff4, Func Offset: 0x74
	// Line 620, Address: 0x2daffc, Func Offset: 0x7c
	// Line 619, Address: 0x2db000, Func Offset: 0x80
	// Line 620, Address: 0x2db004, Func Offset: 0x84
	// Line 618, Address: 0x2db008, Func Offset: 0x88
	// Line 621, Address: 0x2db00c, Func Offset: 0x8c
	// Line 617, Address: 0x2db010, Func Offset: 0x90
	// Line 619, Address: 0x2db018, Func Offset: 0x98
	// Line 622, Address: 0x2db01c, Func Offset: 0x9c
	// Line 619, Address: 0x2db020, Func Offset: 0xa0
	// Line 623, Address: 0x2db024, Func Offset: 0xa4
	// Line 624, Address: 0x2db030, Func Offset: 0xb0
	// Line 626, Address: 0x2db03c, Func Offset: 0xbc
	// Line 627, Address: 0x2db060, Func Offset: 0xe0
	// Line 631, Address: 0x2db070, Func Offset: 0xf0
	// Line 630, Address: 0x2db074, Func Offset: 0xf4
	// Line 631, Address: 0x2db078, Func Offset: 0xf8
	// Line 633, Address: 0x2db094, Func Offset: 0x114
	// Line 631, Address: 0x2db098, Func Offset: 0x118
	// Line 633, Address: 0x2db09c, Func Offset: 0x11c
	// Line 634, Address: 0x2db0b4, Func Offset: 0x134
	// Line 635, Address: 0x2db0c0, Func Offset: 0x140
	// Line 636, Address: 0x2db0dc, Func Offset: 0x15c
	// Line 638, Address: 0x2db0e0, Func Offset: 0x160
	// Line 641, Address: 0x2db0e8, Func Offset: 0x168
	// Line 643, Address: 0x2db10c, Func Offset: 0x18c
	// Line 644, Address: 0x2db110, Func Offset: 0x190
	// Line 645, Address: 0x2db114, Func Offset: 0x194
	// Line 646, Address: 0x2db120, Func Offset: 0x1a0
	// Line 648, Address: 0x2db128, Func Offset: 0x1a8
	// Line 649, Address: 0x2db130, Func Offset: 0x1b0
	// Line 650, Address: 0x2db148, Func Offset: 0x1c8
	// Line 651, Address: 0x2db150, Func Offset: 0x1d0
	// Line 652, Address: 0x2db158, Func Offset: 0x1d8
	// Line 654, Address: 0x2db160, Func Offset: 0x1e0
	// Line 657, Address: 0x2db170, Func Offset: 0x1f0
	// Line 658, Address: 0x2db178, Func Offset: 0x1f8
	// Func End, Address: 0x2db190, Func Offset: 0x210
}

// 
// Start address: 0x2db190
void PlayerBattleDamageSetAngleForDeath()
{
	// Line 663, Address: 0x2db190, Func Offset: 0
	// Func End, Address: 0x2db198, Func Offset: 0x8
}

// 
// Start address: 0x2db1a0
void stag_boss(float stag_dist)
{
	float ftime;
	int num;
	_anon8* param;
	// Line 671, Address: 0x2db1a0, Func Offset: 0
	// Line 676, Address: 0x2db1a4, Func Offset: 0x4
	// Line 671, Address: 0x2db1a8, Func Offset: 0x8
	// Line 676, Address: 0x2db1b8, Func Offset: 0x18
	// Line 677, Address: 0x2db1cc, Func Offset: 0x2c
	// Line 678, Address: 0x2db1d8, Func Offset: 0x38
	// Line 680, Address: 0x2db1e0, Func Offset: 0x40
	// Line 683, Address: 0x2db1f8, Func Offset: 0x58
	// Line 684, Address: 0x2db208, Func Offset: 0x68
	// Line 687, Address: 0x2db218, Func Offset: 0x78
	// Line 689, Address: 0x2db228, Func Offset: 0x88
	// Line 690, Address: 0x2db238, Func Offset: 0x98
	// Line 692, Address: 0x2db240, Func Offset: 0xa0
	// Line 693, Address: 0x2db250, Func Offset: 0xb0
	// Line 695, Address: 0x2db258, Func Offset: 0xb8
	// Line 696, Address: 0x2db260, Func Offset: 0xc0
	// Line 697, Address: 0x2db268, Func Offset: 0xc8
	// Line 699, Address: 0x2db278, Func Offset: 0xd8
	// Line 700, Address: 0x2db288, Func Offset: 0xe8
	// Line 702, Address: 0x2db290, Func Offset: 0xf0
	// Line 703, Address: 0x2db2a0, Func Offset: 0x100
	// Line 705, Address: 0x2db2a8, Func Offset: 0x108
	// Line 706, Address: 0x2db2bc, Func Offset: 0x11c
	// Line 707, Address: 0x2db2c8, Func Offset: 0x128
	// Line 709, Address: 0x2db2d8, Func Offset: 0x138
	// Line 710, Address: 0x2db2e8, Func Offset: 0x148
	// Line 712, Address: 0x2db2f0, Func Offset: 0x150
	// Line 713, Address: 0x2db300, Func Offset: 0x160
	// Line 715, Address: 0x2db308, Func Offset: 0x168
	// Line 718, Address: 0x2db310, Func Offset: 0x170
	// Line 719, Address: 0x2db31c, Func Offset: 0x17c
	// Line 723, Address: 0x2db328, Func Offset: 0x188
	// Func End, Address: 0x2db340, Func Offset: 0x1a0
}

// 
// Start address: 0x2db340
void stag_sb13(float stag_dist)
{
	float ftime;
	float t_x;
	_anon8* param;
	int num;
	float t_z;
	// Line 727, Address: 0x2db340, Func Offset: 0
	// Line 732, Address: 0x2db344, Func Offset: 0x4
	// Line 727, Address: 0x2db348, Func Offset: 0x8
	// Line 732, Address: 0x2db35c, Func Offset: 0x1c
	// Line 737, Address: 0x2db370, Func Offset: 0x30
	// Line 738, Address: 0x2db37c, Func Offset: 0x3c
	// Line 744, Address: 0x2db384, Func Offset: 0x44
	// Line 740, Address: 0x2db388, Func Offset: 0x48
	// Line 744, Address: 0x2db38c, Func Offset: 0x4c
	// Line 740, Address: 0x2db390, Func Offset: 0x50
	// Line 744, Address: 0x2db394, Func Offset: 0x54
	// Line 740, Address: 0x2db398, Func Offset: 0x58
	// Line 744, Address: 0x2db3a4, Func Offset: 0x64
	// Line 746, Address: 0x2db3b0, Func Offset: 0x70
	// Line 745, Address: 0x2db3b4, Func Offset: 0x74
	// Line 746, Address: 0x2db3b8, Func Offset: 0x78
	// Line 745, Address: 0x2db3bc, Func Offset: 0x7c
	// Line 746, Address: 0x2db3c4, Func Offset: 0x84
	// Line 747, Address: 0x2db3c8, Func Offset: 0x88
	// Line 749, Address: 0x2db3d0, Func Offset: 0x90
	// Line 750, Address: 0x2db3dc, Func Offset: 0x9c
	// Line 749, Address: 0x2db3e0, Func Offset: 0xa0
	// Line 750, Address: 0x2db3e4, Func Offset: 0xa4
	// Line 751, Address: 0x2db3ec, Func Offset: 0xac
	// Line 754, Address: 0x2db3f0, Func Offset: 0xb0
	// Line 755, Address: 0x2db400, Func Offset: 0xc0
	// Line 756, Address: 0x2db40c, Func Offset: 0xcc
	// Line 759, Address: 0x2db410, Func Offset: 0xd0
	// Line 761, Address: 0x2db420, Func Offset: 0xe0
	// Line 762, Address: 0x2db428, Func Offset: 0xe8
	// Line 764, Address: 0x2db430, Func Offset: 0xf0
	// Line 766, Address: 0x2db440, Func Offset: 0x100
	// Line 768, Address: 0x2db450, Func Offset: 0x110
	// Line 769, Address: 0x2db464, Func Offset: 0x124
	// Line 771, Address: 0x2db46c, Func Offset: 0x12c
	// Line 772, Address: 0x2db47c, Func Offset: 0x13c
	// Line 773, Address: 0x2db488, Func Offset: 0x148
	// Line 777, Address: 0x2db498, Func Offset: 0x158
	// Line 775, Address: 0x2db49c, Func Offset: 0x15c
	// Line 777, Address: 0x2db4a0, Func Offset: 0x160
	// Line 778, Address: 0x2db4ac, Func Offset: 0x16c
	// Line 779, Address: 0x2db4b8, Func Offset: 0x178
	// Line 781, Address: 0x2db4d0, Func Offset: 0x190
	// Line 782, Address: 0x2db4dc, Func Offset: 0x19c
	// Line 784, Address: 0x2db4e8, Func Offset: 0x1a8
	// Line 791, Address: 0x2db4f8, Func Offset: 0x1b8
	// Line 792, Address: 0x2db50c, Func Offset: 0x1cc
	// Line 794, Address: 0x2db520, Func Offset: 0x1e0
	// Line 795, Address: 0x2db528, Func Offset: 0x1e8
	// Line 797, Address: 0x2db540, Func Offset: 0x200
	// Line 801, Address: 0x2db548, Func Offset: 0x208
	// Line 803, Address: 0x2db550, Func Offset: 0x210
	// Line 805, Address: 0x2db568, Func Offset: 0x228
	// Line 806, Address: 0x2db570, Func Offset: 0x230
	// Line 808, Address: 0x2db588, Func Offset: 0x248
	// Line 810, Address: 0x2db590, Func Offset: 0x250
	// Line 812, Address: 0x2db594, Func Offset: 0x254
	// Line 813, Address: 0x2db598, Func Offset: 0x258
	// Line 814, Address: 0x2db5ac, Func Offset: 0x26c
	// Line 816, Address: 0x2db5c4, Func Offset: 0x284
	// Line 821, Address: 0x2db5c8, Func Offset: 0x288
	// Func End, Address: 0x2db5e4, Func Offset: 0x2a4
}

