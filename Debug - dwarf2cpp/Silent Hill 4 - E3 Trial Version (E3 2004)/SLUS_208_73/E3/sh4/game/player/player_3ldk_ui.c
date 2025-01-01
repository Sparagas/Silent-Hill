typedef struct sgBone;
typedef struct sfObj;
typedef struct sgSVModel;
typedef union _anon0;
typedef enum _cam3Step : unsigned char;
typedef struct sfCharacter;
typedef struct sgAnime;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _cam3Work;
typedef struct sfCldObject;
typedef struct sgQTNode;
typedef struct sfCldPart;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _anon3;
typedef struct _GAME_WORK;
typedef struct sgIKHandle;
typedef struct sgQTObject;
typedef struct _anon4;
typedef struct sfOffsetAABB;
typedef struct _anon5;
typedef union sfCldBody;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _player3ldkUiWork;
typedef enum GameItem : unsigned char;
typedef struct _cam3AFItem;
typedef struct _PLAYER_WORK;
typedef struct _cam3ldkAF;

typedef void(*type_4)(sfObj*);
typedef void(*type_6)(sfObj*);
typedef void(*type_7)(_anon1*, int, int, float*);
typedef sgIKSolveResult(*type_17)();
typedef void(*type_30)(sgAnime*, int);

typedef float type_0[4];
typedef _anon0 type_1[256];
typedef float type_2[4][4];
typedef unsigned char type_3[4];
typedef int type_5[1];
typedef int type_8[1];
typedef sfCldPart* type_9[6];
typedef unsigned char type_10[3];
typedef int type_11[1];
typedef float type_12[4];
typedef int type_13[1];
typedef int type_14[1];
typedef float type_15[4][2];
typedef int type_16[1];
typedef _PLAYER_WORK type_18[2];
typedef float type_19[4];
typedef short type_20[2];
typedef unsigned short type_21[2];
typedef int type_22[1];
typedef char type_23[4];
typedef unsigned char type_24[4];
typedef float type_25[1];
typedef int type_26[1];
typedef unsigned char type_27[3];
typedef void* type_28[4];
typedef _cam3AFItem type_29[128];

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

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
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

enum _cam3Step : unsigned char
{
	CAM3_STEP_NORMAL,
	CAM3_STEP_AUTOFOCUS,
	CAM3_STEP_RESET,
	CAM3_STEP_STOP
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

struct _cam3Work
{
	_cam3Step step;
	float mtx[4][4];
	float rot[4];
	float lookat[4];
	int run;
	int forceRotate;
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

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct _anon3
{
	int dummy;
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

struct sgQTObject
{
	_anon5 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

struct _anon4
{
	float start[4];
	float end[4];
};

struct sfOffsetAABB
{
	_anon6 aabb;
	float offset[4];
};

struct _anon5
{
	float center[4];
	float radius;
};

union sfCldBody
{
	_anon7 obb;
	_anon6 aabb;
	sfOffsetAABB offset_aabb;
	_anon4 line;
	_anon5 sphere;
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

struct _player3ldkUiWork
{
	float rot[4];
	float eye[4];
	float forward;
	float side;
	int eye_move;
	int eye_reset;
	int mode;
	int shakeLevel;
	float accessPos[4];
	int access;
	int decide;
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

struct _cam3AFItem
{
	int id;
	sfObj* obj;
	float dot;
	float v_dot;
	int disable;
	int valid;
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

struct _cam3ldkAF
{
	_cam3AFItem items[128];
	_cam3AFItem* focusItem;
	_cam3AFItem* prvFocusItem;
	sfObj* preObj;
	int itemNum;
	int lockedObjID;
	int lock;
	int finish;
	int cancel;
};

_player3ldkUiWork p3ldk_ui_work;
_cam3ldkAF cam3_afwork;
_GAME_WORK gamew;
_PLAYER_WORK playerw[2];
_cam3Work cam3_work;

_player3ldkUiWork* Player3ldkGetUIWork();
_player3ldkUiWork* Player3ldkGetWork();

// 
// Start address: 0x161c70
_player3ldkUiWork* Player3ldkGetUIWork()
{
	unsigned int push;
	float analogLY;
	float analogLX;
	int shakeLevel;
	int silentMove;
	// Line 42, Address: 0x161c70, Func Offset: 0
	// Line 43, Address: 0x161c74, Func Offset: 0x4
	// Line 42, Address: 0x161c78, Func Offset: 0x8
	// Line 43, Address: 0x161c88, Func Offset: 0x18
	// Line 44, Address: 0x161c94, Func Offset: 0x24
	// Line 45, Address: 0x161c9c, Func Offset: 0x2c
	// Line 46, Address: 0x161ca8, Func Offset: 0x38
	// Line 45, Address: 0x161cac, Func Offset: 0x3c
	// Line 46, Address: 0x161cb0, Func Offset: 0x40
	// Line 48, Address: 0x161cb8, Func Offset: 0x48
	// Line 49, Address: 0x161cbc, Func Offset: 0x4c
	// Line 48, Address: 0x161cc0, Func Offset: 0x50
	// Line 46, Address: 0x161cc4, Func Offset: 0x54
	// Line 49, Address: 0x161cc8, Func Offset: 0x58
	// Line 50, Address: 0x161cd8, Func Offset: 0x68
	// Line 53, Address: 0x161ce0, Func Offset: 0x70
	// Line 54, Address: 0x161d00, Func Offset: 0x90
	// Line 56, Address: 0x161d10, Func Offset: 0xa0
	// Line 57, Address: 0x161d2c, Func Offset: 0xbc
	// Line 58, Address: 0x161d34, Func Offset: 0xc4
	// Line 63, Address: 0x161d38, Func Offset: 0xc8
	// Line 64, Address: 0x161d44, Func Offset: 0xd4
	// Line 68, Address: 0x161d48, Func Offset: 0xd8
	// Line 69, Address: 0x161d80, Func Offset: 0x110
	// Line 70, Address: 0x161d88, Func Offset: 0x118
	// Line 71, Address: 0x161d9c, Func Offset: 0x12c
	// Line 73, Address: 0x161da8, Func Offset: 0x138
	// Line 75, Address: 0x161dc4, Func Offset: 0x154
	// Line 76, Address: 0x161dc8, Func Offset: 0x158
	// Line 77, Address: 0x161e00, Func Offset: 0x190
	// Line 78, Address: 0x161e14, Func Offset: 0x1a4
	// Line 84, Address: 0x161e30, Func Offset: 0x1c0
	// Line 85, Address: 0x161e44, Func Offset: 0x1d4
	// Line 84, Address: 0x161e48, Func Offset: 0x1d8
	// Line 85, Address: 0x161e4c, Func Offset: 0x1dc
	// Line 87, Address: 0x161e58, Func Offset: 0x1e8
	// Line 85, Address: 0x161e5c, Func Offset: 0x1ec
	// Line 86, Address: 0x161e60, Func Offset: 0x1f0
	// Line 87, Address: 0x161e6c, Func Offset: 0x1fc
	// Line 89, Address: 0x161e74, Func Offset: 0x204
	// Line 91, Address: 0x161e98, Func Offset: 0x228
	// Line 92, Address: 0x161ea4, Func Offset: 0x234
	// Line 93, Address: 0x161ea8, Func Offset: 0x238
	// Line 95, Address: 0x161ebc, Func Offset: 0x24c
	// Line 99, Address: 0x161ec8, Func Offset: 0x258
	// Line 100, Address: 0x161ed0, Func Offset: 0x260
	// Func End, Address: 0x161eec, Func Offset: 0x27c
}

// 
// Start address: 0x161ef0
_player3ldkUiWork* Player3ldkGetWork()
{
	// Line 105, Address: 0x161ef0, Func Offset: 0
	// Line 106, Address: 0x161ef4, Func Offset: 0x4
	// Func End, Address: 0x161efc, Func Offset: 0xc
}

