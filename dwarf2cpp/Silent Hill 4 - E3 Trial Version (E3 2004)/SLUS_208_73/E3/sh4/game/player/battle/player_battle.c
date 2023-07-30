typedef struct sgQTNode;
typedef union _anon0;
typedef struct _anon1;
typedef struct sgQTObject;
typedef struct _PLAYER_WORK;
typedef struct _GAME_WORK;
typedef struct sfObj;
typedef struct sgAnime;
typedef struct sfOffsetAABB;
typedef struct sgBone;
typedef struct sfCharacter;
typedef struct sgIKHandle;
typedef union sfCldBody;
typedef struct _anon2;
typedef struct sfCldObject;
typedef struct sfCldPart;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef enum GameItem : unsigned char;
typedef enum _cam3Step : unsigned char;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _cam3Work;
typedef struct sgSVModel;
typedef struct _anon9;

typedef void(*type_0)(_anon1*, int, int, float*);
typedef void(*type_1)(sfObj*);
typedef void(*type_6)(sgAnime*, int);
typedef sgIKSolveResult(*type_20)();
typedef void(*type_21)(sfObj*);

typedef int type_2[1];
typedef int type_3[1];
typedef void* type_4[4];
typedef float type_5[4];
typedef int type_7[1];
typedef unsigned char type_8[3];
typedef unsigned char type_9[4];
typedef _PLAYER_WORK type_10[2];
typedef int type_11[1];
typedef float type_12[4];
typedef int type_13[1];
typedef float type_14[4][2];
typedef sfCldPart* type_15[6];
typedef float type_16[4];
typedef float type_17[4][4];
typedef _anon0 type_18[256];
typedef unsigned char type_19[3];
typedef short type_22[2];
typedef unsigned short type_23[2];
typedef int type_24[1];
typedef char type_25[4];
typedef unsigned char type_26[4];
typedef float type_27[4];
typedef int type_28[1];
typedef float type_29[1];
typedef int type_30[1];

struct sgQTNode
{
	int dummy;
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
	unsigned long tex0;
	unsigned long clamp;
};

struct sgQTObject
{
	_anon5 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
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
	_anon3* anim_ctrl;
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

struct sfOffsetAABB
{
	_anon6 aabb;
	float offset[4];
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

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon9 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
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

union sfCldBody
{
	_anon7 obb;
	_anon6 aabb;
	sfOffsetAABB offset_aabb;
	_anon4 line;
	_anon5 sphere;
};

struct _anon2
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

struct sfCldObject
{
	sgQTObject tree_object;
	sgQTNode* stay_node;
	sfCldPart* parts[6];
	unsigned char n_parts;
	unsigned char pad[3];
	void* data;
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

struct _anon3
{
	int dummy;
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

struct _anon8
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

enum _cam3Step : unsigned char
{
	CAM3_STEP_NORMAL,
	CAM3_STEP_AUTOFOCUS,
	CAM3_STEP_RESET,
	CAM3_STEP_STOP
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct _cam3Work
{
	_cam3Step step;
	float mtx[4][4];
	float rot[4];
	float lookat[4];
	int run;
	int forceRotate;
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct _anon9
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

float backwalk_angle_tbl[4];
_anon2 player_battle_work;
float sg_vector_zero[4];
_PLAYER_WORK playerw[2];
_GAME_WORK gamew;
float sg_vector_unit_x[4];
float sg_vector_unit_z[4];
_cam3Work cam3_work;

void PlayerBattleInitWork();
void PlayerBattleEnable();
void PlayerBattleDisable();
int PlayerBattleIsDisable();
void PlayerBattleSetUIMove(float* pos_after);
int PlayerBattleSetTargetMode(sfObj* obj);
void expect_dull_motion();
int get_stepangle();
void PlayerBattlePowerAttackReduce(_PLAYER_WORK* p);
void battle_anotherworld();
void gameover_3ldk();
void PlayerBattleMain();
int PlayerBattleReload();

// 
// Start address: 0x1db320
void PlayerBattleInitWork()
{
	// Line 117, Address: 0x1db320, Func Offset: 0
	// Line 118, Address: 0x1db338, Func Offset: 0x18
	// Line 119, Address: 0x1db348, Func Offset: 0x28
	// Line 120, Address: 0x1db358, Func Offset: 0x38
	// Line 121, Address: 0x1db360, Func Offset: 0x40
	// Line 122, Address: 0x1db368, Func Offset: 0x48
	// Line 123, Address: 0x1db370, Func Offset: 0x50
	// Line 124, Address: 0x1db378, Func Offset: 0x58
	// Line 125, Address: 0x1db380, Func Offset: 0x60
	// Line 126, Address: 0x1db388, Func Offset: 0x68
	// Line 127, Address: 0x1db390, Func Offset: 0x70
	// Line 129, Address: 0x1db394, Func Offset: 0x74
	// Func End, Address: 0x1db39c, Func Offset: 0x7c
}

// 
// Start address: 0x1db3a0
void PlayerBattleEnable()
{
	// Line 137, Address: 0x1db3a0, Func Offset: 0
	// Line 140, Address: 0x1db3a4, Func Offset: 0x4
	// Func End, Address: 0x1db3ac, Func Offset: 0xc
}

// 
// Start address: 0x1db3b0
void PlayerBattleDisable()
{
	// Line 151, Address: 0x1db3b0, Func Offset: 0
	// Line 148, Address: 0x1db3b4, Func Offset: 0x4
	// Line 151, Address: 0x1db3b8, Func Offset: 0x8
	// Line 152, Address: 0x1db3bc, Func Offset: 0xc
	// Line 148, Address: 0x1db3c4, Func Offset: 0x14
	// Line 153, Address: 0x1db3cc, Func Offset: 0x1c
	// Line 154, Address: 0x1db3d4, Func Offset: 0x24
	// Line 155, Address: 0x1db3dc, Func Offset: 0x2c
	// Line 156, Address: 0x1db3e4, Func Offset: 0x34
	// Line 159, Address: 0x1db3e8, Func Offset: 0x38
	// Func End, Address: 0x1db3f0, Func Offset: 0x40
}

// 
// Start address: 0x1db3f0
int PlayerBattleIsDisable()
{
	// Line 165, Address: 0x1db3f0, Func Offset: 0
	// Line 166, Address: 0x1db3f4, Func Offset: 0x4
	// Func End, Address: 0x1db3fc, Func Offset: 0xc
}

// 
// Start address: 0x1db400
void PlayerBattleSetUIMove(float* pos_after)
{
	// Line 171, Address: 0x1db400, Func Offset: 0
	// Line 174, Address: 0x1db420, Func Offset: 0x20
	// Func End, Address: 0x1db428, Func Offset: 0x28
}

// 
// Start address: 0x1db430
int PlayerBattleSetTargetMode(sfObj* obj)
{
	_PLAYER_WORK* p;
	float pos_e[4];
	int ret;
	// Line 200, Address: 0x1db430, Func Offset: 0
	// Line 201, Address: 0x1db434, Func Offset: 0x4
	// Line 200, Address: 0x1db438, Func Offset: 0x8
	// Line 206, Address: 0x1db440, Func Offset: 0x10
	// Line 208, Address: 0x1db448, Func Offset: 0x18
	// Line 211, Address: 0x1db450, Func Offset: 0x20
	// Line 212, Address: 0x1db458, Func Offset: 0x28
	// Line 214, Address: 0x1db47c, Func Offset: 0x4c
	// Line 216, Address: 0x1db488, Func Offset: 0x58
	// Line 218, Address: 0x1db48c, Func Offset: 0x5c
	// Line 221, Address: 0x1db490, Func Offset: 0x60
	// Func End, Address: 0x1db4a0, Func Offset: 0x70
}

// 
// Start address: 0x1db4a0
void expect_dull_motion()
{
	// Line 225, Address: 0x1db4a0, Func Offset: 0
	// Line 227, Address: 0x1db4a4, Func Offset: 0x4
	// Line 225, Address: 0x1db4a8, Func Offset: 0x8
	// Line 227, Address: 0x1db4ac, Func Offset: 0xc
	// Line 230, Address: 0x1db4b8, Func Offset: 0x18
	// Line 228, Address: 0x1db4bc, Func Offset: 0x1c
	// Line 230, Address: 0x1db4c0, Func Offset: 0x20
	// Line 231, Address: 0x1db4e0, Func Offset: 0x40
	// Line 236, Address: 0x1db4f0, Func Offset: 0x50
	// Line 238, Address: 0x1db4fc, Func Offset: 0x5c
	// Line 239, Address: 0x1db508, Func Offset: 0x68
	// Line 240, Address: 0x1db514, Func Offset: 0x74
	// Line 241, Address: 0x1db524, Func Offset: 0x84
	// Line 243, Address: 0x1db528, Func Offset: 0x88
	// Line 244, Address: 0x1db530, Func Offset: 0x90
	// Line 245, Address: 0x1db53c, Func Offset: 0x9c
	// Line 246, Address: 0x1db54c, Func Offset: 0xac
	// Line 248, Address: 0x1db550, Func Offset: 0xb0
	// Line 249, Address: 0x1db558, Func Offset: 0xb8
	// Line 250, Address: 0x1db564, Func Offset: 0xc4
	// Line 252, Address: 0x1db584, Func Offset: 0xe4
	// Line 257, Address: 0x1db588, Func Offset: 0xe8
	// Func End, Address: 0x1db594, Func Offset: 0xf4
}

// 
// Start address: 0x1db5a0
int get_stepangle()
{
	int ret;
	float f;
	float a;
	// Line 264, Address: 0x1db5a0, Func Offset: 0
	// Line 269, Address: 0x1db5a8, Func Offset: 0x8
	// Line 270, Address: 0x1db5d0, Func Offset: 0x30
	// Line 272, Address: 0x1db5d8, Func Offset: 0x38
	// Line 293, Address: 0x1db5f4, Func Offset: 0x54
	// Line 273, Address: 0x1db604, Func Offset: 0x64
	// Line 293, Address: 0x1db608, Func Offset: 0x68
	// Line 295, Address: 0x1db614, Func Offset: 0x74
	// Line 296, Address: 0x1db620, Func Offset: 0x80
	// Line 298, Address: 0x1db634, Func Offset: 0x94
	// Line 300, Address: 0x1db640, Func Offset: 0xa0
	// Line 301, Address: 0x1db644, Func Offset: 0xa4
	// Line 305, Address: 0x1db648, Func Offset: 0xa8
	// Func End, Address: 0x1db654, Func Offset: 0xb4
}

// 
// Start address: 0x1db660
void PlayerBattlePowerAttackReduce(_PLAYER_WORK* p)
{
	// Line 310, Address: 0x1db660, Func Offset: 0
	// Line 311, Address: 0x1db66c, Func Offset: 0xc
	// Line 312, Address: 0x1db688, Func Offset: 0x28
	// Line 313, Address: 0x1db69c, Func Offset: 0x3c
	// Line 316, Address: 0x1db6a0, Func Offset: 0x40
	// Func End, Address: 0x1db6b0, Func Offset: 0x50
}

// 
// Start address: 0x1db6b0
void battle_anotherworld()
{
	_PLAYER_WORK* p;
	_anon8* ui_work;
	int sub;
	int t_flag;
	float mult;
	float ratio;
	sfObj* near_target;
	float e_pos[4];
	sfObj* g_obj;
	int fh;
	float god_time;
	float n_rot;
	float dpf;
	float tmp[4];
	float h;
	float ftime;
	sfObj* r_target;
	sfObj* r_target;
	float ftime;
	sgBone* bone;
	float pos[4];
	float rot[4];
	float speed[4];
	float m[4][4];
	float local_pos[4];
	float q[4];
	// Line 319, Address: 0x1db6b0, Func Offset: 0
	// Line 320, Address: 0x1db6b4, Func Offset: 0x4
	// Line 319, Address: 0x1db6b8, Func Offset: 0x8
	// Line 321, Address: 0x1db6d4, Func Offset: 0x24
	// Line 327, Address: 0x1db6e0, Func Offset: 0x30
	// Line 328, Address: 0x1db710, Func Offset: 0x60
	// Line 329, Address: 0x1db714, Func Offset: 0x64
	// Line 333, Address: 0x1db718, Func Offset: 0x68
	// Line 334, Address: 0x1db724, Func Offset: 0x74
	// Line 336, Address: 0x1db73c, Func Offset: 0x8c
	// Line 337, Address: 0x1db748, Func Offset: 0x98
	// Line 338, Address: 0x1db75c, Func Offset: 0xac
	// Line 344, Address: 0x1db760, Func Offset: 0xb0
	// Line 348, Address: 0x1db848, Func Offset: 0x198
	// Line 352, Address: 0x1db898, Func Offset: 0x1e8
	// Line 354, Address: 0x1db8a0, Func Offset: 0x1f0
	// Line 357, Address: 0x1db8c8, Func Offset: 0x218
	// Line 359, Address: 0x1db8d0, Func Offset: 0x220
	// Line 360, Address: 0x1db8d4, Func Offset: 0x224
	// Line 364, Address: 0x1db8d8, Func Offset: 0x228
	// Line 366, Address: 0x1db8e0, Func Offset: 0x230
	// Line 368, Address: 0x1db910, Func Offset: 0x260
	// Line 369, Address: 0x1db91c, Func Offset: 0x26c
	// Line 368, Address: 0x1db928, Func Offset: 0x278
	// Line 369, Address: 0x1db92c, Func Offset: 0x27c
	// Line 370, Address: 0x1db938, Func Offset: 0x288
	// Line 373, Address: 0x1db940, Func Offset: 0x290
	// Line 374, Address: 0x1db948, Func Offset: 0x298
	// Line 375, Address: 0x1db960, Func Offset: 0x2b0
	// Line 380, Address: 0x1db970, Func Offset: 0x2c0
	// Line 382, Address: 0x1db978, Func Offset: 0x2c8
	// Line 384, Address: 0x1db988, Func Offset: 0x2d8
	// Line 386, Address: 0x1db990, Func Offset: 0x2e0
	// Line 389, Address: 0x1db998, Func Offset: 0x2e8
	// Line 391, Address: 0x1db9b0, Func Offset: 0x300
	// Line 393, Address: 0x1db9c0, Func Offset: 0x310
	// Line 394, Address: 0x1db9c4, Func Offset: 0x314
	// Line 393, Address: 0x1db9c8, Func Offset: 0x318
	// Line 394, Address: 0x1db9d0, Func Offset: 0x320
	// Line 393, Address: 0x1db9d8, Func Offset: 0x328
	// Line 394, Address: 0x1db9dc, Func Offset: 0x32c
	// Line 396, Address: 0x1db9e8, Func Offset: 0x338
	// Line 400, Address: 0x1db9f0, Func Offset: 0x340
	// Line 406, Address: 0x1dba18, Func Offset: 0x368
	// Line 410, Address: 0x1dba1c, Func Offset: 0x36c
	// Line 412, Address: 0x1dba28, Func Offset: 0x378
	// Line 416, Address: 0x1dba3c, Func Offset: 0x38c
	// Line 419, Address: 0x1dba48, Func Offset: 0x398
	// Line 420, Address: 0x1dba64, Func Offset: 0x3b4
	// Line 421, Address: 0x1dba78, Func Offset: 0x3c8
	// Line 422, Address: 0x1dba80, Func Offset: 0x3d0
	// Line 424, Address: 0x1dba9c, Func Offset: 0x3ec
	// Line 425, Address: 0x1dbab4, Func Offset: 0x404
	// Line 427, Address: 0x1dbab8, Func Offset: 0x408
	// Line 428, Address: 0x1dbad4, Func Offset: 0x424
	// Line 429, Address: 0x1dbae0, Func Offset: 0x430
	// Line 431, Address: 0x1dbae4, Func Offset: 0x434
	// Line 432, Address: 0x1dbae8, Func Offset: 0x438
	// Line 433, Address: 0x1dbaf0, Func Offset: 0x440
	// Line 434, Address: 0x1dbb08, Func Offset: 0x458
	// Line 435, Address: 0x1dbb14, Func Offset: 0x464
	// Line 437, Address: 0x1dbb18, Func Offset: 0x468
	// Line 438, Address: 0x1dbb1c, Func Offset: 0x46c
	// Line 440, Address: 0x1dbb28, Func Offset: 0x478
	// Line 442, Address: 0x1dbb3c, Func Offset: 0x48c
	// Line 444, Address: 0x1dbb74, Func Offset: 0x4c4
	// Line 446, Address: 0x1dbb84, Func Offset: 0x4d4
	// Line 448, Address: 0x1dbb90, Func Offset: 0x4e0
	// Line 449, Address: 0x1dbba4, Func Offset: 0x4f4
	// Line 450, Address: 0x1dbba8, Func Offset: 0x4f8
	// Line 451, Address: 0x1dbbb8, Func Offset: 0x508
	// Line 452, Address: 0x1dbbbc, Func Offset: 0x50c
	// Line 453, Address: 0x1dbbc0, Func Offset: 0x510
	// Line 455, Address: 0x1dbbdc, Func Offset: 0x52c
	// Line 458, Address: 0x1dbbe8, Func Offset: 0x538
	// Line 459, Address: 0x1dbbfc, Func Offset: 0x54c
	// Line 462, Address: 0x1dbc04, Func Offset: 0x554
	// Line 463, Address: 0x1dbc28, Func Offset: 0x578
	// Line 467, Address: 0x1dbc48, Func Offset: 0x598
	// Line 468, Address: 0x1dbc54, Func Offset: 0x5a4
	// Line 469, Address: 0x1dbc5c, Func Offset: 0x5ac
	// Line 471, Address: 0x1dbc64, Func Offset: 0x5b4
	// Line 472, Address: 0x1dbc70, Func Offset: 0x5c0
	// Line 474, Address: 0x1dbc7c, Func Offset: 0x5cc
	// Line 480, Address: 0x1dbcb8, Func Offset: 0x608
	// Line 481, Address: 0x1dbcbc, Func Offset: 0x60c
	// Line 480, Address: 0x1dbcc0, Func Offset: 0x610
	// Line 481, Address: 0x1dbcc4, Func Offset: 0x614
	// Line 482, Address: 0x1dbcc8, Func Offset: 0x618
	// Line 484, Address: 0x1dbcd4, Func Offset: 0x624
	// Line 485, Address: 0x1dbce0, Func Offset: 0x630
	// Line 487, Address: 0x1dbcec, Func Offset: 0x63c
	// Line 488, Address: 0x1dbcf0, Func Offset: 0x640
	// Line 490, Address: 0x1dbcfc, Func Offset: 0x64c
	// Line 491, Address: 0x1dbd08, Func Offset: 0x658
	// Line 494, Address: 0x1dbd10, Func Offset: 0x660
	// Line 497, Address: 0x1dbd1c, Func Offset: 0x66c
	// Line 498, Address: 0x1dbd28, Func Offset: 0x678
	// Line 500, Address: 0x1dbd30, Func Offset: 0x680
	// Line 502, Address: 0x1dbd3c, Func Offset: 0x68c
	// Line 503, Address: 0x1dbd60, Func Offset: 0x6b0
	// Line 504, Address: 0x1dbd70, Func Offset: 0x6c0
	// Line 506, Address: 0x1dbd88, Func Offset: 0x6d8
	// Line 509, Address: 0x1dbdc8, Func Offset: 0x718
	// Line 510, Address: 0x1dbdcc, Func Offset: 0x71c
	// Line 513, Address: 0x1dbdd8, Func Offset: 0x728
	// Line 512, Address: 0x1dbddc, Func Offset: 0x72c
	// Line 513, Address: 0x1dbde4, Func Offset: 0x734
	// Line 516, Address: 0x1dbde8, Func Offset: 0x738
	// Line 541, Address: 0x1dbdf0, Func Offset: 0x740
	// Line 543, Address: 0x1dbdfc, Func Offset: 0x74c
	// Line 544, Address: 0x1dbe08, Func Offset: 0x758
	// Line 545, Address: 0x1dbe10, Func Offset: 0x760
	// Line 546, Address: 0x1dbe18, Func Offset: 0x768
	// Line 550, Address: 0x1dbe40, Func Offset: 0x790
	// Line 552, Address: 0x1dbe44, Func Offset: 0x794
	// Line 553, Address: 0x1dbe50, Func Offset: 0x7a0
	// Line 554, Address: 0x1dbe58, Func Offset: 0x7a8
	// Line 556, Address: 0x1dbe60, Func Offset: 0x7b0
	// Line 558, Address: 0x1dbe68, Func Offset: 0x7b8
	// Line 559, Address: 0x1dbe74, Func Offset: 0x7c4
	// Line 563, Address: 0x1dbe7c, Func Offset: 0x7cc
	// Line 565, Address: 0x1dbe88, Func Offset: 0x7d8
	// Line 566, Address: 0x1dbe8c, Func Offset: 0x7dc
	// Line 569, Address: 0x1dbe90, Func Offset: 0x7e0
	// Line 572, Address: 0x1dbe98, Func Offset: 0x7e8
	// Line 573, Address: 0x1dbeb8, Func Offset: 0x808
	// Line 577, Address: 0x1dbec0, Func Offset: 0x810
	// Line 578, Address: 0x1dbedc, Func Offset: 0x82c
	// Line 579, Address: 0x1dbeec, Func Offset: 0x83c
	// Line 578, Address: 0x1dbef4, Func Offset: 0x844
	// Line 579, Address: 0x1dbefc, Func Offset: 0x84c
	// Line 580, Address: 0x1dbf08, Func Offset: 0x858
	// Line 584, Address: 0x1dbf10, Func Offset: 0x860
	// Line 586, Address: 0x1dbf18, Func Offset: 0x868
	// Line 587, Address: 0x1dbf20, Func Offset: 0x870
	// Line 588, Address: 0x1dbf28, Func Offset: 0x878
	// Line 590, Address: 0x1dbf30, Func Offset: 0x880
	// Line 591, Address: 0x1dbf38, Func Offset: 0x888
	// Line 592, Address: 0x1dbf40, Func Offset: 0x890
	// Line 594, Address: 0x1dbf48, Func Offset: 0x898
	// Line 595, Address: 0x1dbf50, Func Offset: 0x8a0
	// Line 596, Address: 0x1dbf58, Func Offset: 0x8a8
	// Line 598, Address: 0x1dbf60, Func Offset: 0x8b0
	// Line 599, Address: 0x1dbf68, Func Offset: 0x8b8
	// Line 600, Address: 0x1dbf70, Func Offset: 0x8c0
	// Line 602, Address: 0x1dbf78, Func Offset: 0x8c8
	// Line 603, Address: 0x1dbf80, Func Offset: 0x8d0
	// Line 604, Address: 0x1dbf88, Func Offset: 0x8d8
	// Line 606, Address: 0x1dbf90, Func Offset: 0x8e0
	// Line 607, Address: 0x1dbf98, Func Offset: 0x8e8
	// Line 608, Address: 0x1dbfa0, Func Offset: 0x8f0
	// Line 610, Address: 0x1dbfa8, Func Offset: 0x8f8
	// Line 611, Address: 0x1dbfb4, Func Offset: 0x904
	// Line 613, Address: 0x1dbfc8, Func Offset: 0x918
	// Line 614, Address: 0x1dbfd4, Func Offset: 0x924
	// Line 615, Address: 0x1dbfdc, Func Offset: 0x92c
	// Line 616, Address: 0x1dbfe0, Func Offset: 0x930
	// Line 618, Address: 0x1dbfec, Func Offset: 0x93c
	// Line 619, Address: 0x1dbff0, Func Offset: 0x940
	// Line 620, Address: 0x1dbff8, Func Offset: 0x948
	// Line 621, Address: 0x1dc008, Func Offset: 0x958
	// Line 623, Address: 0x1dc00c, Func Offset: 0x95c
	// Line 624, Address: 0x1dc014, Func Offset: 0x964
	// Line 625, Address: 0x1dc018, Func Offset: 0x968
	// Line 626, Address: 0x1dc01c, Func Offset: 0x96c
	// Line 627, Address: 0x1dc030, Func Offset: 0x980
	// Line 628, Address: 0x1dc038, Func Offset: 0x988
	// Line 631, Address: 0x1dc040, Func Offset: 0x990
	// Line 633, Address: 0x1dc060, Func Offset: 0x9b0
	// Line 635, Address: 0x1dc070, Func Offset: 0x9c0
	// Line 637, Address: 0x1dc078, Func Offset: 0x9c8
	// Line 638, Address: 0x1dc08c, Func Offset: 0x9dc
	// Line 639, Address: 0x1dc094, Func Offset: 0x9e4
	// Line 640, Address: 0x1dc098, Func Offset: 0x9e8
	// Line 642, Address: 0x1dc0ac, Func Offset: 0x9fc
	// Line 643, Address: 0x1dc0b0, Func Offset: 0xa00
	// Line 647, Address: 0x1dc0b4, Func Offset: 0xa04
	// Line 648, Address: 0x1dc0c8, Func Offset: 0xa18
	// Line 650, Address: 0x1dc0d8, Func Offset: 0xa28
	// Line 651, Address: 0x1dc0e4, Func Offset: 0xa34
	// Line 654, Address: 0x1dc0f0, Func Offset: 0xa40
	// Line 656, Address: 0x1dc0f8, Func Offset: 0xa48
	// Line 659, Address: 0x1dc100, Func Offset: 0xa50
	// Line 660, Address: 0x1dc110, Func Offset: 0xa60
	// Line 661, Address: 0x1dc11c, Func Offset: 0xa6c
	// Line 663, Address: 0x1dc128, Func Offset: 0xa78
	// Line 665, Address: 0x1dc134, Func Offset: 0xa84
	// Line 666, Address: 0x1dc138, Func Offset: 0xa88
	// Line 667, Address: 0x1dc14c, Func Offset: 0xa9c
	// Line 668, Address: 0x1dc154, Func Offset: 0xaa4
	// Line 672, Address: 0x1dc158, Func Offset: 0xaa8
	// Line 671, Address: 0x1dc160, Func Offset: 0xab0
	// Line 672, Address: 0x1dc168, Func Offset: 0xab8
	// Line 674, Address: 0x1dc188, Func Offset: 0xad8
	// Line 675, Address: 0x1dc1ac, Func Offset: 0xafc
	// Line 676, Address: 0x1dc1b0, Func Offset: 0xb00
	// Line 677, Address: 0x1dc1b8, Func Offset: 0xb08
	// Line 678, Address: 0x1dc1d4, Func Offset: 0xb24
	// Line 679, Address: 0x1dc1dc, Func Offset: 0xb2c
	// Line 680, Address: 0x1dc1e0, Func Offset: 0xb30
	// Line 681, Address: 0x1dc1fc, Func Offset: 0xb4c
	// Line 683, Address: 0x1dc20c, Func Offset: 0xb5c
	// Line 685, Address: 0x1dc210, Func Offset: 0xb60
	// Line 696, Address: 0x1dc2f8, Func Offset: 0xc48
	// Line 698, Address: 0x1dc318, Func Offset: 0xc68
	// Line 700, Address: 0x1dc320, Func Offset: 0xc70
	// Line 701, Address: 0x1dc344, Func Offset: 0xc94
	// Line 702, Address: 0x1dc360, Func Offset: 0xcb0
	// Line 703, Address: 0x1dc368, Func Offset: 0xcb8
	// Line 704, Address: 0x1dc384, Func Offset: 0xcd4
	// Line 705, Address: 0x1dc39c, Func Offset: 0xcec
	// Line 709, Address: 0x1dc3a8, Func Offset: 0xcf8
	// Line 707, Address: 0x1dc3ac, Func Offset: 0xcfc
	// Line 709, Address: 0x1dc3b0, Func Offset: 0xd00
	// Line 710, Address: 0x1dc3b8, Func Offset: 0xd08
	// Line 711, Address: 0x1dc3c0, Func Offset: 0xd10
	// Line 713, Address: 0x1dc3c8, Func Offset: 0xd18
	// Line 716, Address: 0x1dc3d0, Func Offset: 0xd20
	// Line 719, Address: 0x1dc3d8, Func Offset: 0xd28
	// Line 721, Address: 0x1dc3f8, Func Offset: 0xd48
	// Line 722, Address: 0x1dc404, Func Offset: 0xd54
	// Line 723, Address: 0x1dc408, Func Offset: 0xd58
	// Line 725, Address: 0x1dc418, Func Offset: 0xd68
	// Line 724, Address: 0x1dc41c, Func Offset: 0xd6c
	// Line 725, Address: 0x1dc420, Func Offset: 0xd70
	// Line 727, Address: 0x1dc428, Func Offset: 0xd78
	// Line 728, Address: 0x1dc444, Func Offset: 0xd94
	// Line 729, Address: 0x1dc464, Func Offset: 0xdb4
	// Line 731, Address: 0x1dc470, Func Offset: 0xdc0
	// Line 732, Address: 0x1dc48c, Func Offset: 0xddc
	// Line 733, Address: 0x1dc490, Func Offset: 0xde0
	// Line 737, Address: 0x1dc500, Func Offset: 0xe50
	// Line 738, Address: 0x1dc504, Func Offset: 0xe54
	// Line 739, Address: 0x1dc50c, Func Offset: 0xe5c
	// Line 740, Address: 0x1dc510, Func Offset: 0xe60
	// Line 739, Address: 0x1dc514, Func Offset: 0xe64
	// Line 740, Address: 0x1dc518, Func Offset: 0xe68
	// Line 741, Address: 0x1dc51c, Func Offset: 0xe6c
	// Line 742, Address: 0x1dc524, Func Offset: 0xe74
	// Line 743, Address: 0x1dc528, Func Offset: 0xe78
	// Line 748, Address: 0x1dc590, Func Offset: 0xee0
	// Line 749, Address: 0x1dc59c, Func Offset: 0xeec
	// Line 750, Address: 0x1dc5a4, Func Offset: 0xef4
	// Line 751, Address: 0x1dc5a8, Func Offset: 0xef8
	// Line 750, Address: 0x1dc5ac, Func Offset: 0xefc
	// Line 751, Address: 0x1dc5b0, Func Offset: 0xf00
	// Line 752, Address: 0x1dc5b4, Func Offset: 0xf04
	// Line 753, Address: 0x1dc5bc, Func Offset: 0xf0c
	// Line 754, Address: 0x1dc5c4, Func Offset: 0xf14
	// Line 758, Address: 0x1dc5cc, Func Offset: 0xf1c
	// Line 760, Address: 0x1dc5d0, Func Offset: 0xf20
	// Line 761, Address: 0x1dc5e4, Func Offset: 0xf34
	// Line 764, Address: 0x1dc5f4, Func Offset: 0xf44
	// Line 765, Address: 0x1dc5fc, Func Offset: 0xf4c
	// Line 767, Address: 0x1dc600, Func Offset: 0xf50
	// Line 768, Address: 0x1dc614, Func Offset: 0xf64
	// Line 771, Address: 0x1dc618, Func Offset: 0xf68
	// Line 772, Address: 0x1dc68c, Func Offset: 0xfdc
	// Line 774, Address: 0x1dc6f0, Func Offset: 0x1040
	// Line 777, Address: 0x1dc6f8, Func Offset: 0x1048
	// Line 778, Address: 0x1dc704, Func Offset: 0x1054
	// Line 780, Address: 0x1dc730, Func Offset: 0x1080
	// Line 781, Address: 0x1dc73c, Func Offset: 0x108c
	// Line 782, Address: 0x1dc740, Func Offset: 0x1090
	// Line 783, Address: 0x1dc750, Func Offset: 0x10a0
	// Line 785, Address: 0x1dc758, Func Offset: 0x10a8
	// Line 786, Address: 0x1dc768, Func Offset: 0x10b8
	// Line 787, Address: 0x1dc770, Func Offset: 0x10c0
	// Line 789, Address: 0x1dc778, Func Offset: 0x10c8
	// Line 791, Address: 0x1dc77c, Func Offset: 0x10cc
	// Line 792, Address: 0x1dc784, Func Offset: 0x10d4
	// Line 794, Address: 0x1dc788, Func Offset: 0x10d8
	// Line 795, Address: 0x1dc794, Func Offset: 0x10e4
	// Line 797, Address: 0x1dc7c0, Func Offset: 0x1110
	// Line 798, Address: 0x1dc7cc, Func Offset: 0x111c
	// Line 799, Address: 0x1dc7d0, Func Offset: 0x1120
	// Line 800, Address: 0x1dc7e0, Func Offset: 0x1130
	// Line 801, Address: 0x1dc7e4, Func Offset: 0x1134
	// Line 802, Address: 0x1dc7e8, Func Offset: 0x1138
	// Line 803, Address: 0x1dc7f8, Func Offset: 0x1148
	// Line 805, Address: 0x1dc800, Func Offset: 0x1150
	// Line 816, Address: 0x1dc808, Func Offset: 0x1158
	// Line 817, Address: 0x1dc818, Func Offset: 0x1168
	// Line 818, Address: 0x1dc824, Func Offset: 0x1174
	// Line 820, Address: 0x1dc830, Func Offset: 0x1180
	// Line 821, Address: 0x1dc83c, Func Offset: 0x118c
	// Line 822, Address: 0x1dc840, Func Offset: 0x1190
	// Line 823, Address: 0x1dc850, Func Offset: 0x11a0
	// Line 826, Address: 0x1dc878, Func Offset: 0x11c8
	// Line 827, Address: 0x1dc87c, Func Offset: 0x11cc
	// Line 832, Address: 0x1dc888, Func Offset: 0x11d8
	// Line 835, Address: 0x1dc890, Func Offset: 0x11e0
	// Line 837, Address: 0x1dc8c0, Func Offset: 0x1210
	// Line 838, Address: 0x1dc8cc, Func Offset: 0x121c
	// Line 839, Address: 0x1dc8d4, Func Offset: 0x1224
	// Line 840, Address: 0x1dc8d8, Func Offset: 0x1228
	// Line 841, Address: 0x1dc8e4, Func Offset: 0x1234
	// Line 842, Address: 0x1dc8ec, Func Offset: 0x123c
	// Line 843, Address: 0x1dc8f0, Func Offset: 0x1240
	// Line 844, Address: 0x1dc8fc, Func Offset: 0x124c
	// Line 845, Address: 0x1dc904, Func Offset: 0x1254
	// Line 846, Address: 0x1dc908, Func Offset: 0x1258
	// Line 848, Address: 0x1dc914, Func Offset: 0x1264
	// Line 849, Address: 0x1dc918, Func Offset: 0x1268
	// Line 852, Address: 0x1dc928, Func Offset: 0x1278
	// Line 855, Address: 0x1dc930, Func Offset: 0x1280
	// Line 856, Address: 0x1dc940, Func Offset: 0x1290
	// Line 857, Address: 0x1dc94c, Func Offset: 0x129c
	// Line 859, Address: 0x1dc958, Func Offset: 0x12a8
	// Line 860, Address: 0x1dc964, Func Offset: 0x12b4
	// Line 861, Address: 0x1dc968, Func Offset: 0x12b8
	// Line 862, Address: 0x1dc974, Func Offset: 0x12c4
	// Line 863, Address: 0x1dc984, Func Offset: 0x12d4
	// Line 866, Address: 0x1dc9b0, Func Offset: 0x1300
	// Line 867, Address: 0x1dc9b4, Func Offset: 0x1304
	// Line 872, Address: 0x1dc9c0, Func Offset: 0x1310
	// Line 874, Address: 0x1dc9c8, Func Offset: 0x1318
	// Line 876, Address: 0x1dc9d8, Func Offset: 0x1328
	// Line 877, Address: 0x1dc9e0, Func Offset: 0x1330
	// Line 879, Address: 0x1dc9e8, Func Offset: 0x1338
	// Line 882, Address: 0x1dc9f0, Func Offset: 0x1340
	// Line 885, Address: 0x1dc9f8, Func Offset: 0x1348
	// Line 886, Address: 0x1dca04, Func Offset: 0x1354
	// Line 887, Address: 0x1dca0c, Func Offset: 0x135c
	// Line 888, Address: 0x1dca14, Func Offset: 0x1364
	// Line 890, Address: 0x1dca1c, Func Offset: 0x136c
	// Line 895, Address: 0x1dca24, Func Offset: 0x1374
	// Line 896, Address: 0x1dca3c, Func Offset: 0x138c
	// Line 897, Address: 0x1dca58, Func Offset: 0x13a8
	// Line 898, Address: 0x1dca5c, Func Offset: 0x13ac
	// Line 901, Address: 0x1dca60, Func Offset: 0x13b0
	// Line 903, Address: 0x1dca68, Func Offset: 0x13b8
	// Line 905, Address: 0x1dca7c, Func Offset: 0x13cc
	// Line 907, Address: 0x1dca98, Func Offset: 0x13e8
	// Line 909, Address: 0x1dcab4, Func Offset: 0x1404
	// Line 910, Address: 0x1dcad0, Func Offset: 0x1420
	// Line 911, Address: 0x1dcad8, Func Offset: 0x1428
	// Line 914, Address: 0x1dcae0, Func Offset: 0x1430
	// Line 918, Address: 0x1dcae8, Func Offset: 0x1438
	// Line 926, Address: 0x1dcb00, Func Offset: 0x1450
	// Line 927, Address: 0x1dcb1c, Func Offset: 0x146c
	// Line 928, Address: 0x1dcb24, Func Offset: 0x1474
	// Line 931, Address: 0x1dcb28, Func Offset: 0x1478
	// Line 934, Address: 0x1dcb30, Func Offset: 0x1480
	// Line 935, Address: 0x1dcb3c, Func Offset: 0x148c
	// Line 937, Address: 0x1dcb54, Func Offset: 0x14a4
	// Line 959, Address: 0x1dcb58, Func Offset: 0x14a8
	// Line 963, Address: 0x1dcb98, Func Offset: 0x14e8
	// Line 964, Address: 0x1dcba0, Func Offset: 0x14f0
	// Line 965, Address: 0x1dcba8, Func Offset: 0x14f8
	// Line 966, Address: 0x1dcbac, Func Offset: 0x14fc
	// Line 967, Address: 0x1dcbb8, Func Offset: 0x1508
	// Line 968, Address: 0x1dcbc8, Func Offset: 0x1518
	// Line 970, Address: 0x1dcbd0, Func Offset: 0x1520
	// Line 972, Address: 0x1dcbd8, Func Offset: 0x1528
	// Line 973, Address: 0x1dcbe0, Func Offset: 0x1530
	// Line 974, Address: 0x1dcbe8, Func Offset: 0x1538
	// Line 975, Address: 0x1dcbec, Func Offset: 0x153c
	// Line 976, Address: 0x1dcbf8, Func Offset: 0x1548
	// Line 977, Address: 0x1dcc08, Func Offset: 0x1558
	// Line 984, Address: 0x1dcc10, Func Offset: 0x1560
	// Line 986, Address: 0x1dcc18, Func Offset: 0x1568
	// Line 990, Address: 0x1dcc58, Func Offset: 0x15a8
	// Line 991, Address: 0x1dcc60, Func Offset: 0x15b0
	// Line 992, Address: 0x1dcc68, Func Offset: 0x15b8
	// Line 993, Address: 0x1dcc6c, Func Offset: 0x15bc
	// Line 994, Address: 0x1dcc78, Func Offset: 0x15c8
	// Line 995, Address: 0x1dcc88, Func Offset: 0x15d8
	// Line 998, Address: 0x1dcc94, Func Offset: 0x15e4
	// Line 1007, Address: 0x1dcc98, Func Offset: 0x15e8
	// Line 1008, Address: 0x1dccb4, Func Offset: 0x1604
	// Line 1009, Address: 0x1dcccc, Func Offset: 0x161c
	// Line 1010, Address: 0x1dccd0, Func Offset: 0x1620
	// Line 1011, Address: 0x1dccd8, Func Offset: 0x1628
	// Line 1013, Address: 0x1dcce0, Func Offset: 0x1630
	// Line 1014, Address: 0x1dccec, Func Offset: 0x163c
	// Line 1016, Address: 0x1dccf0, Func Offset: 0x1640
	// Line 1020, Address: 0x1dcd18, Func Offset: 0x1668
	// Line 1021, Address: 0x1dcd24, Func Offset: 0x1674
	// Line 1025, Address: 0x1dcd28, Func Offset: 0x1678
	// Line 1026, Address: 0x1dcd44, Func Offset: 0x1694
	// Line 1027, Address: 0x1dcd4c, Func Offset: 0x169c
	// Line 1030, Address: 0x1dcd50, Func Offset: 0x16a0
	// Line 1031, Address: 0x1dcd6c, Func Offset: 0x16bc
	// Line 1032, Address: 0x1dcd7c, Func Offset: 0x16cc
	// Line 1031, Address: 0x1dcd84, Func Offset: 0x16d4
	// Line 1032, Address: 0x1dcd8c, Func Offset: 0x16dc
	// Line 1033, Address: 0x1dcd98, Func Offset: 0x16e8
	// Line 1034, Address: 0x1dcd9c, Func Offset: 0x16ec
	// Line 1036, Address: 0x1dcda8, Func Offset: 0x16f8
	// Line 1039, Address: 0x1dcdb0, Func Offset: 0x1700
	// Line 1040, Address: 0x1dcdb8, Func Offset: 0x1708
	// Line 1041, Address: 0x1dcdc0, Func Offset: 0x1710
	// Line 1043, Address: 0x1dcdc8, Func Offset: 0x1718
	// Line 1047, Address: 0x1dcdd0, Func Offset: 0x1720
	// Line 1048, Address: 0x1dcde0, Func Offset: 0x1730
	// Line 1050, Address: 0x1dcdf0, Func Offset: 0x1740
	// Line 1051, Address: 0x1dce00, Func Offset: 0x1750
	// Line 1050, Address: 0x1dce04, Func Offset: 0x1754
	// Line 1051, Address: 0x1dce08, Func Offset: 0x1758
	// Line 1061, Address: 0x1dce68, Func Offset: 0x17b8
	// Line 1062, Address: 0x1dce7c, Func Offset: 0x17cc
	// Line 1064, Address: 0x1dce8c, Func Offset: 0x17dc
	// Line 1065, Address: 0x1dce98, Func Offset: 0x17e8
	// Line 1066, Address: 0x1dced0, Func Offset: 0x1820
	// Line 1070, Address: 0x1dcedc, Func Offset: 0x182c
	// Line 1071, Address: 0x1dcef8, Func Offset: 0x1848
	// Line 1073, Address: 0x1dcf08, Func Offset: 0x1858
	// Line 1074, Address: 0x1dcf1c, Func Offset: 0x186c
	// Line 1075, Address: 0x1dcf48, Func Offset: 0x1898
	// Line 1076, Address: 0x1dcf74, Func Offset: 0x18c4
	// Line 1077, Address: 0x1dcf84, Func Offset: 0x18d4
	// Line 1078, Address: 0x1dcf94, Func Offset: 0x18e4
	// Line 1079, Address: 0x1dcf9c, Func Offset: 0x18ec
	// Line 1081, Address: 0x1dcfa8, Func Offset: 0x18f8
	// Line 1082, Address: 0x1dcfb0, Func Offset: 0x1900
	// Line 1083, Address: 0x1dcfc0, Func Offset: 0x1910
	// Line 1084, Address: 0x1dcfc4, Func Offset: 0x1914
	// Line 1086, Address: 0x1dcfd0, Func Offset: 0x1920
	// Line 1087, Address: 0x1dcfd8, Func Offset: 0x1928
	// Line 1088, Address: 0x1dcfe8, Func Offset: 0x1938
	// Line 1089, Address: 0x1dcfec, Func Offset: 0x193c
	// Line 1094, Address: 0x1dcff8, Func Offset: 0x1948
	// Line 1095, Address: 0x1dd018, Func Offset: 0x1968
	// Line 1099, Address: 0x1dd020, Func Offset: 0x1970
	// Func End, Address: 0x1dd044, Func Offset: 0x1994
}

// 
// Start address: 0x1dd050
void gameover_3ldk()
{
	_PLAYER_WORK* p;
	float acc_frame;
	float cam_z[4];
	float crt;
	float count;
	float acc;
	// Line 1103, Address: 0x1dd050, Func Offset: 0
	// Line 1108, Address: 0x1dd054, Func Offset: 0x4
	// Line 1103, Address: 0x1dd058, Func Offset: 0x8
	// Line 1108, Address: 0x1dd05c, Func Offset: 0xc
	// Line 1103, Address: 0x1dd060, Func Offset: 0x10
	// Line 1110, Address: 0x1dd064, Func Offset: 0x14
	// Line 1108, Address: 0x1dd068, Func Offset: 0x18
	// Line 1104, Address: 0x1dd06c, Func Offset: 0x1c
	// Line 1110, Address: 0x1dd070, Func Offset: 0x20
	// Line 1112, Address: 0x1dd080, Func Offset: 0x30
	// Line 1111, Address: 0x1dd084, Func Offset: 0x34
	// Line 1112, Address: 0x1dd088, Func Offset: 0x38
	// Line 1111, Address: 0x1dd08c, Func Offset: 0x3c
	// Line 1113, Address: 0x1dd094, Func Offset: 0x44
	// Line 1114, Address: 0x1dd098, Func Offset: 0x48
	// Line 1117, Address: 0x1dd0a0, Func Offset: 0x50
	// Line 1120, Address: 0x1dd0a8, Func Offset: 0x58
	// Line 1122, Address: 0x1dd0c0, Func Offset: 0x70
	// Line 1123, Address: 0x1dd0c8, Func Offset: 0x78
	// Line 1125, Address: 0x1dd0d4, Func Offset: 0x84
	// Line 1123, Address: 0x1dd0d8, Func Offset: 0x88
	// Line 1125, Address: 0x1dd0dc, Func Offset: 0x8c
	// Line 1127, Address: 0x1dd108, Func Offset: 0xb8
	// Line 1128, Address: 0x1dd124, Func Offset: 0xd4
	// Line 1127, Address: 0x1dd128, Func Offset: 0xd8
	// Line 1128, Address: 0x1dd130, Func Offset: 0xe0
	// Line 1129, Address: 0x1dd144, Func Offset: 0xf4
	// Line 1130, Address: 0x1dd150, Func Offset: 0x100
	// Line 1131, Address: 0x1dd160, Func Offset: 0x110
	// Line 1130, Address: 0x1dd164, Func Offset: 0x114
	// Line 1131, Address: 0x1dd168, Func Offset: 0x118
	// Line 1132, Address: 0x1dd170, Func Offset: 0x120
	// Line 1133, Address: 0x1dd17c, Func Offset: 0x12c
	// Line 1136, Address: 0x1dd180, Func Offset: 0x130
	// Line 1143, Address: 0x1dd1a4, Func Offset: 0x154
	// Line 1144, Address: 0x1dd1ac, Func Offset: 0x15c
	// Line 1147, Address: 0x1dd1c0, Func Offset: 0x170
	// Line 1151, Address: 0x1dd1e8, Func Offset: 0x198
	// Line 1152, Address: 0x1dd1f8, Func Offset: 0x1a8
	// Line 1151, Address: 0x1dd200, Func Offset: 0x1b0
	// Line 1152, Address: 0x1dd208, Func Offset: 0x1b8
	// Line 1153, Address: 0x1dd214, Func Offset: 0x1c4
	// Line 1155, Address: 0x1dd21c, Func Offset: 0x1cc
	// Line 1158, Address: 0x1dd220, Func Offset: 0x1d0
	// Func End, Address: 0x1dd230, Func Offset: 0x1e0
}

// 
// Start address: 0x1dd230
void PlayerBattleMain()
{
	_PLAYER_WORK* p;
	_anon8* ui_work;
	int spear_stat;
	float tot;
	float tot_back;
	float c_dam;
	float tot;
	float ftime;
	// Line 1161, Address: 0x1dd230, Func Offset: 0
	// Line 1162, Address: 0x1dd234, Func Offset: 0x4
	// Line 1161, Address: 0x1dd238, Func Offset: 0x8
	// Line 1163, Address: 0x1dd250, Func Offset: 0x20
	// Line 1167, Address: 0x1dd258, Func Offset: 0x28
	// Line 1170, Address: 0x1dd268, Func Offset: 0x38
	// Line 1172, Address: 0x1dd28c, Func Offset: 0x5c
	// Line 1173, Address: 0x1dd294, Func Offset: 0x64
	// Line 1175, Address: 0x1dd2a0, Func Offset: 0x70
	// Line 1176, Address: 0x1dd2a4, Func Offset: 0x74
	// Line 1180, Address: 0x1dd2a8, Func Offset: 0x78
	// Line 1181, Address: 0x1dd2b0, Func Offset: 0x80
	// Line 1184, Address: 0x1dd2b8, Func Offset: 0x88
	// Line 1186, Address: 0x1dd2fc, Func Offset: 0xcc
	// Line 1189, Address: 0x1dd314, Func Offset: 0xe4
	// Line 1200, Address: 0x1dd320, Func Offset: 0xf0
	// Line 1216, Address: 0x1dd328, Func Offset: 0xf8
	// Line 1217, Address: 0x1dd334, Func Offset: 0x104
	// Line 1219, Address: 0x1dd340, Func Offset: 0x110
	// Line 1220, Address: 0x1dd354, Func Offset: 0x124
	// Line 1221, Address: 0x1dd35c, Func Offset: 0x12c
	// Line 1223, Address: 0x1dd360, Func Offset: 0x130
	// Line 1224, Address: 0x1dd380, Func Offset: 0x150
	// Line 1227, Address: 0x1dd388, Func Offset: 0x158
	// Line 1239, Address: 0x1dd3c0, Func Offset: 0x190
	// Line 1240, Address: 0x1dd3cc, Func Offset: 0x19c
	// Line 1239, Address: 0x1dd3d0, Func Offset: 0x1a0
	// Line 1240, Address: 0x1dd3d4, Func Offset: 0x1a4
	// Line 1239, Address: 0x1dd3dc, Func Offset: 0x1ac
	// Line 1240, Address: 0x1dd3e4, Func Offset: 0x1b4
	// Line 1243, Address: 0x1dd3f0, Func Offset: 0x1c0
	// Line 1244, Address: 0x1dd3f4, Func Offset: 0x1c4
	// Line 1246, Address: 0x1dd40c, Func Offset: 0x1dc
	// Line 1244, Address: 0x1dd410, Func Offset: 0x1e0
	// Line 1246, Address: 0x1dd418, Func Offset: 0x1e8
	// Line 1247, Address: 0x1dd42c, Func Offset: 0x1fc
	// Line 1249, Address: 0x1dd430, Func Offset: 0x200
	// Line 1254, Address: 0x1dd464, Func Offset: 0x234
	// Line 1255, Address: 0x1dd474, Func Offset: 0x244
	// Line 1256, Address: 0x1dd47c, Func Offset: 0x24c
	// Line 1257, Address: 0x1dd480, Func Offset: 0x250
	// Line 1258, Address: 0x1dd488, Func Offset: 0x258
	// Line 1259, Address: 0x1dd498, Func Offset: 0x268
	// Line 1261, Address: 0x1dd4a0, Func Offset: 0x270
	// Line 1263, Address: 0x1dd4b0, Func Offset: 0x280
	// Line 1265, Address: 0x1dd4b8, Func Offset: 0x288
	// Line 1266, Address: 0x1dd4c0, Func Offset: 0x290
	// Line 1271, Address: 0x1dd4d0, Func Offset: 0x2a0
	// Line 1273, Address: 0x1dd4d8, Func Offset: 0x2a8
	// Line 1275, Address: 0x1dd4ec, Func Offset: 0x2bc
	// Line 1286, Address: 0x1dd4f4, Func Offset: 0x2c4
	// Line 1297, Address: 0x1dd500, Func Offset: 0x2d0
	// Line 1298, Address: 0x1dd51c, Func Offset: 0x2ec
	// Line 1299, Address: 0x1dd544, Func Offset: 0x314
	// Line 1300, Address: 0x1dd558, Func Offset: 0x328
	// Line 1304, Address: 0x1dd560, Func Offset: 0x330
	// Line 1320, Address: 0x1dd568, Func Offset: 0x338
	// Line 1325, Address: 0x1dd570, Func Offset: 0x340
	// Line 1326, Address: 0x1dd578, Func Offset: 0x348
	// Line 1327, Address: 0x1dd598, Func Offset: 0x368
	// Line 1328, Address: 0x1dd5a8, Func Offset: 0x378
	// Line 1330, Address: 0x1dd5dc, Func Offset: 0x3ac
	// Line 1333, Address: 0x1dd5e8, Func Offset: 0x3b8
	// Line 1337, Address: 0x1dd5f0, Func Offset: 0x3c0
	// Line 1338, Address: 0x1dd608, Func Offset: 0x3d8
	// Line 1340, Address: 0x1dd610, Func Offset: 0x3e0
	// Line 1343, Address: 0x1dd618, Func Offset: 0x3e8
	// Line 1346, Address: 0x1dd620, Func Offset: 0x3f0
	// Line 1349, Address: 0x1dd628, Func Offset: 0x3f8
	// Line 1350, Address: 0x1dd634, Func Offset: 0x404
	// Line 1351, Address: 0x1dd63c, Func Offset: 0x40c
	// Line 1352, Address: 0x1dd648, Func Offset: 0x418
	// Line 1353, Address: 0x1dd664, Func Offset: 0x434
	// Line 1354, Address: 0x1dd66c, Func Offset: 0x43c
	// Line 1356, Address: 0x1dd678, Func Offset: 0x448
	// Line 1357, Address: 0x1dd6ac, Func Offset: 0x47c
	// Line 1358, Address: 0x1dd6b8, Func Offset: 0x488
	// Line 1359, Address: 0x1dd6c0, Func Offset: 0x490
	// Line 1361, Address: 0x1dd6c8, Func Offset: 0x498
	// Line 1363, Address: 0x1dd6d0, Func Offset: 0x4a0
	// Line 1365, Address: 0x1dd6d8, Func Offset: 0x4a8
	// Line 1366, Address: 0x1dd6e8, Func Offset: 0x4b8
	// Line 1367, Address: 0x1dd6f8, Func Offset: 0x4c8
	// Line 1368, Address: 0x1dd700, Func Offset: 0x4d0
	// Line 1369, Address: 0x1dd708, Func Offset: 0x4d8
	// Line 1370, Address: 0x1dd714, Func Offset: 0x4e4
	// Line 1371, Address: 0x1dd720, Func Offset: 0x4f0
	// Line 1372, Address: 0x1dd724, Func Offset: 0x4f4
	// Line 1375, Address: 0x1dd72c, Func Offset: 0x4fc
	// Line 1377, Address: 0x1dd738, Func Offset: 0x508
	// Line 1384, Address: 0x1dd740, Func Offset: 0x510
	// Line 1387, Address: 0x1dd748, Func Offset: 0x518
	// Line 1390, Address: 0x1dd750, Func Offset: 0x520
	// Line 1391, Address: 0x1dd760, Func Offset: 0x530
	// Line 1393, Address: 0x1dd788, Func Offset: 0x558
	// Line 1395, Address: 0x1dd798, Func Offset: 0x568
	// Line 1398, Address: 0x1dd7a4, Func Offset: 0x574
	// Line 1401, Address: 0x1dd7a8, Func Offset: 0x578
	// Line 1402, Address: 0x1dd7c8, Func Offset: 0x598
	// Line 1406, Address: 0x1dd7d0, Func Offset: 0x5a0
	// Line 1409, Address: 0x1dd7d8, Func Offset: 0x5a8
	// Line 1411, Address: 0x1dd7e0, Func Offset: 0x5b0
	// Line 1412, Address: 0x1dd7f0, Func Offset: 0x5c0
	// Line 1414, Address: 0x1dd80c, Func Offset: 0x5dc
	// Line 1416, Address: 0x1dd820, Func Offset: 0x5f0
	// Line 1417, Address: 0x1dd838, Func Offset: 0x608
	// Line 1418, Address: 0x1dd840, Func Offset: 0x610
	// Line 1420, Address: 0x1dd848, Func Offset: 0x618
	// Line 1421, Address: 0x1dd854, Func Offset: 0x624
	// Line 1422, Address: 0x1dd858, Func Offset: 0x628
	// Line 1423, Address: 0x1dd88c, Func Offset: 0x65c
	// Line 1424, Address: 0x1dd894, Func Offset: 0x664
	// Line 1426, Address: 0x1dd8a0, Func Offset: 0x670
	// Line 1428, Address: 0x1dd8a8, Func Offset: 0x678
	// Line 1429, Address: 0x1dd8b0, Func Offset: 0x680
	// Line 1431, Address: 0x1dd8b8, Func Offset: 0x688
	// Line 1433, Address: 0x1dd8c0, Func Offset: 0x690
	// Line 1435, Address: 0x1dd8c8, Func Offset: 0x698
	// Line 1438, Address: 0x1dd8d0, Func Offset: 0x6a0
	// Line 1439, Address: 0x1dd8e0, Func Offset: 0x6b0
	// Line 1442, Address: 0x1dd918, Func Offset: 0x6e8
	// Line 1483, Address: 0x1dd920, Func Offset: 0x6f0
	// Func End, Address: 0x1dd940, Func Offset: 0x710
}

// 
// Start address: 0x1dd940
int PlayerBattleReload()
{
	_PLAYER_WORK* p;
	// Line 1492, Address: 0x1dd940, Func Offset: 0
	// Line 1495, Address: 0x1dd94c, Func Offset: 0xc
	// Line 1496, Address: 0x1dd978, Func Offset: 0x38
	// Line 1500, Address: 0x1dd980, Func Offset: 0x40
	// Line 1502, Address: 0x1dd98c, Func Offset: 0x4c
	// Line 1505, Address: 0x1dd998, Func Offset: 0x58
	// Line 1506, Address: 0x1dd9a0, Func Offset: 0x60
	// Func End, Address: 0x1dd9a8, Func Offset: 0x68
}

