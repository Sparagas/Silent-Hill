typedef struct _PLAYER_WORK;
typedef struct sgAnime;
typedef struct sfCharacter;
typedef struct sfObj;
typedef struct sfCldObject;
typedef struct sgBone;
typedef struct sgQTNode;
typedef struct sgIKHandle;
typedef struct sfCldPart;
typedef struct sgSVModel;
typedef struct _anon0;
typedef enum PlayerUIItemMotionStatus : unsigned char;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _GAME_WORK;
typedef struct sgQTObject;
typedef struct _anon3;
typedef struct sfOffsetAABB;
typedef struct _EventDriver;
typedef union sfCldBody;
typedef struct _anon4;
typedef enum GameItem : unsigned char;
typedef enum _cam3Step : unsigned char;
typedef enum sgIKSolveResult : unsigned char;
typedef enum EileenArmsTypeNo : unsigned char;
typedef union _anon5;
typedef struct _cam3Work;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _anon9;

typedef void(*type_4)(sfObj*);
typedef void(*type_5)(sgAnime*, int);
typedef void(*type_16)(_anon2*, int, int, float*);
typedef int(*type_17)(sfObj*);
typedef int(*type_20)(sfObj*);
typedef int(*type_21)(sfObj*);
typedef int(*type_22)(sfObj*);
typedef int(*type_24)(sfObj*);
typedef void(*type_27)(sfObj*);
typedef void(*type_29)();
typedef sgIKSolveResult(*type_30)();
typedef void(*type_32)(sfObj*);

typedef float type_0[4];
typedef int type_1[1];
typedef void* type_2[4];
typedef sfCldPart* type_3[6];
typedef unsigned char type_6[3];
typedef void(*type_7)(sfObj*)[3];
typedef int type_8[1];
typedef float type_9[4][4];
typedef float type_10[4];
typedef int type_11[1];
typedef unsigned char type_12[4];
typedef int type_13[1];
typedef int type_14[1];
typedef _PLAYER_WORK type_15[2];
typedef int type_18[1];
typedef float type_19[4];
typedef unsigned char type_23[3];
typedef _anon5 type_25[4];
typedef _anon5 type_26[256];
typedef float type_28[4][2];
typedef void(*type_31)()[2];
typedef short type_33[2];
typedef unsigned short type_34[2];
typedef char type_35[4];
typedef unsigned char type_36[4];
typedef float type_37[1];
typedef int type_38[1];
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

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon3 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

struct sfObj
{
	_anon5 fwork[256];
	_anon5* work;
	void(*func)(sfObj*);
	_anon5* work_pt0;
	_anon5* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon5* sys_work;
	_anon5* scene_work;
	_anon5* event_work;
	_anon5* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
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

struct sgQTNode
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

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct _anon0
{
	float move_c;
	float run_c;
	float rot_c;
};

enum PlayerUIItemMotionStatus : unsigned char
{
	ITEM_MOTION_STAT_NONE,
	ITEM_MOTION_STAT_DOWN,
	ITEM_MOTION_STAT_GETTING,
	ITEM_MOTION_STAT_UP,
	ITEM_MOTION_STAT_MAX
};

struct _anon1
{
	int dummy;
};

struct _anon2
{
	unsigned long tex0;
	unsigned long clamp;
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
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon2*, int, int, float*);
	int equip_flag;
};

struct sfOffsetAABB
{
	_anon8 aabb;
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
	_anon5 val[4];
};

union sfCldBody
{
	_anon9 obb;
	_anon8 aabb;
	sfOffsetAABB offset_aabb;
	_anon6 line;
	_anon7 sphere;
};

struct _anon4
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

union _anon5
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

struct _cam3Work
{
	_cam3Step step;
	float mtx[4][4];
	float rot[4];
	float lookat[4];
	int run;
	int forceRotate;
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
	float bmin[4];
	float bmax[4];
};

struct _anon9
{
	float mat[4][4];
	float half_w[4];
};

void(*camInitFuncs)()[2];
void(*camera_main_funcs)(sfObj*)[3];
float camera_rot;
float camera_pow;
int pad_reverse;
float sg_vector_zero[4];
float push_current[4];
float push_target[4];
float push_force[4];
float force_move;
float force_dir;
int over_flag;
float over_move;
float over_dir;
_anon0 lwork;
_PLAYER_WORK playerw[2];
_anon4 ui_work;
int curse;
_GAME_WORK gamew;
int motion_stop;
int finisher;
int analog_cut;
_EventDriver message_cant_use_item;
int shoot;
int itemget_anim;
_cam3Work cam3_work;

void PlayerUISetCameraZ(float* camera_Z);
void PlayerUIInitLWork();
void PlayerUIClearLWork();
void PlayerUISetDefaultCameraZ();
_anon4* PlayerAnotherGetUI(int mode);
float rot_normalize(float f);
_anon4* PlayerUISet();
_anon4* PlayerUIGet();
int PlayerUIMotion();
GameItem get_weapon_at_3ldk(GameItem bullet);
int is_weapon_ok(GameItem weapon, GameItem bullet);
void PlayerUIItemORShoot();
void PlayerUIMotionStop();
void PlayerUIMotionStart();
void PlayerUIAnalogCut(int frame);
float PlayerUIGetAnalogLX(int port);
float PlayerUIGetAnalogLY(int port);
void PlayerUISetItemMotionStart();
void PlayerUISetCrouchMotionStart();
int PlayerUIGetItemGetMotion();
int PlayerUISetItemMotionEnd();
PlayerUIItemMotionStatus PlayerUIItemMotionGetStatus();
void PlayerUIStickSetReverse();
void PlayerUIMoveOver(float dir, float move);
void PlayerUIMoveByForce(float dir, float per_sec);
void PlayerUIMoveByPush(float* push_vec);
void PlayerUISetPushTarget(float* target);
void PlayerUISetPushCurrent();

// 
// Start address: 0x15a3e0
void PlayerUISetCameraZ(float* camera_Z)
{
	// Line 162, Address: 0x15a3e0, Func Offset: 0
	// Line 163, Address: 0x15a3e8, Func Offset: 0x8
	// Line 165, Address: 0x15a404, Func Offset: 0x24
	// Line 166, Address: 0x15a420, Func Offset: 0x40
	// Line 167, Address: 0x15a430, Func Offset: 0x50
	// Line 169, Address: 0x15a438, Func Offset: 0x58
	// Line 173, Address: 0x15a440, Func Offset: 0x60
	// Func End, Address: 0x15a44c, Func Offset: 0x6c
}

// 
// Start address: 0x15a450
void PlayerUIInitLWork()
{
	float c_Z[4];
	// Line 177, Address: 0x15a450, Func Offset: 0
	// Line 178, Address: 0x15a454, Func Offset: 0x4
	// Line 177, Address: 0x15a458, Func Offset: 0x8
	// Line 183, Address: 0x15a45c, Func Offset: 0xc
	// Line 178, Address: 0x15a460, Func Offset: 0x10
	// Line 179, Address: 0x15a464, Func Offset: 0x14
	// Line 180, Address: 0x15a46c, Func Offset: 0x1c
	// Line 183, Address: 0x15a478, Func Offset: 0x28
	// Line 184, Address: 0x15a480, Func Offset: 0x30
	// Line 188, Address: 0x15a488, Func Offset: 0x38
	// Line 193, Address: 0x15a48c, Func Offset: 0x3c
	// Line 188, Address: 0x15a490, Func Offset: 0x40
	// Line 193, Address: 0x15a494, Func Offset: 0x44
	// Line 189, Address: 0x15a498, Func Offset: 0x48
	// Line 193, Address: 0x15a49c, Func Offset: 0x4c
	// Line 189, Address: 0x15a4a0, Func Offset: 0x50
	// Line 193, Address: 0x15a4a4, Func Offset: 0x54
	// Line 190, Address: 0x15a4a8, Func Offset: 0x58
	// Line 191, Address: 0x15a4b0, Func Offset: 0x60
	// Line 192, Address: 0x15a4b8, Func Offset: 0x68
	// Line 193, Address: 0x15a4c0, Func Offset: 0x70
	// Line 194, Address: 0x15a4c8, Func Offset: 0x78
	// Line 195, Address: 0x15a4d8, Func Offset: 0x88
	// Line 198, Address: 0x15a4e8, Func Offset: 0x98
	// Line 201, Address: 0x15a4f0, Func Offset: 0xa0
	// Func End, Address: 0x15a4fc, Func Offset: 0xac
}

// 
// Start address: 0x15a500
void PlayerUIClearLWork()
{
	// Line 206, Address: 0x15a500, Func Offset: 0
	// Line 207, Address: 0x15a508, Func Offset: 0x8
	// Line 208, Address: 0x15a510, Func Offset: 0x10
	// Line 211, Address: 0x15a51c, Func Offset: 0x1c
	// Func End, Address: 0x15a524, Func Offset: 0x24
}

// 
// Start address: 0x15a530
void PlayerUISetDefaultCameraZ()
{
	float cam_Z[4];
	// Line 223, Address: 0x15a530, Func Offset: 0
	// Line 225, Address: 0x15a538, Func Offset: 0x8
	// Line 226, Address: 0x15a540, Func Offset: 0x10
	// Line 227, Address: 0x15a55c, Func Offset: 0x2c
	// Line 228, Address: 0x15a564, Func Offset: 0x34
	// Line 231, Address: 0x15a568, Func Offset: 0x38
	// Func End, Address: 0x15a574, Func Offset: 0x44
}

// 
// Start address: 0x15a580
_anon4* PlayerAnotherGetUI(int mode)
{
	_PLAYER_WORK* p;
	float perf;
	// Line 235, Address: 0x15a580, Func Offset: 0
	// Line 236, Address: 0x15a584, Func Offset: 0x4
	// Line 235, Address: 0x15a588, Func Offset: 0x8
	// Line 239, Address: 0x15a590, Func Offset: 0x10
	// Line 240, Address: 0x15a598, Func Offset: 0x18
	// Line 243, Address: 0x15a5a0, Func Offset: 0x20
	// Line 246, Address: 0x15a5b4, Func Offset: 0x34
	// Line 247, Address: 0x15a5c4, Func Offset: 0x44
	// Line 250, Address: 0x15a5d0, Func Offset: 0x50
	// Line 251, Address: 0x15a5f0, Func Offset: 0x70
	// Line 253, Address: 0x15a600, Func Offset: 0x80
	// Line 255, Address: 0x15a610, Func Offset: 0x90
	// Line 256, Address: 0x15a620, Func Offset: 0xa0
	// Line 257, Address: 0x15a62c, Func Offset: 0xac
	// Line 259, Address: 0x15a630, Func Offset: 0xb0
	// Line 260, Address: 0x15a63c, Func Offset: 0xbc
	// Line 265, Address: 0x15a640, Func Offset: 0xc0
	// Line 266, Address: 0x15a65c, Func Offset: 0xdc
	// Line 267, Address: 0x15a670, Func Offset: 0xf0
	// Line 268, Address: 0x15a690, Func Offset: 0x110
	// Line 270, Address: 0x15a698, Func Offset: 0x118
	// Line 279, Address: 0x15a6a8, Func Offset: 0x128
	// Line 281, Address: 0x15a6bc, Func Offset: 0x13c
	// Line 282, Address: 0x15a6cc, Func Offset: 0x14c
	// Line 283, Address: 0x15a6ec, Func Offset: 0x16c
	// Line 285, Address: 0x15a6f0, Func Offset: 0x170
	// Line 287, Address: 0x15a6f8, Func Offset: 0x178
	// Line 288, Address: 0x15a70c, Func Offset: 0x18c
	// Line 289, Address: 0x15a72c, Func Offset: 0x1ac
	// Line 291, Address: 0x15a734, Func Offset: 0x1b4
	// Line 293, Address: 0x15a738, Func Offset: 0x1b8
	// Line 294, Address: 0x15a754, Func Offset: 0x1d4
	// Line 295, Address: 0x15a76c, Func Offset: 0x1ec
	// Line 297, Address: 0x15a770, Func Offset: 0x1f0
	// Line 300, Address: 0x15a778, Func Offset: 0x1f8
	// Line 301, Address: 0x15a78c, Func Offset: 0x20c
	// Line 305, Address: 0x15a79c, Func Offset: 0x21c
	// Line 307, Address: 0x15a7a8, Func Offset: 0x228
	// Line 308, Address: 0x15a7b0, Func Offset: 0x230
	// Line 309, Address: 0x15a7c4, Func Offset: 0x244
	// Line 310, Address: 0x15a7d4, Func Offset: 0x254
	// Line 313, Address: 0x15a7d8, Func Offset: 0x258
	// Line 314, Address: 0x15a7ec, Func Offset: 0x26c
	// Line 315, Address: 0x15a7f8, Func Offset: 0x278
	// Line 319, Address: 0x15a800, Func Offset: 0x280
	// Line 320, Address: 0x15a814, Func Offset: 0x294
	// Line 324, Address: 0x15a820, Func Offset: 0x2a0
	// Line 325, Address: 0x15a830, Func Offset: 0x2b0
	// Line 328, Address: 0x15a838, Func Offset: 0x2b8
	// Line 329, Address: 0x15a84c, Func Offset: 0x2cc
	// Line 341, Address: 0x15a858, Func Offset: 0x2d8
	// Line 342, Address: 0x15a86c, Func Offset: 0x2ec
	// Line 348, Address: 0x15a878, Func Offset: 0x2f8
	// Line 349, Address: 0x15a880, Func Offset: 0x300
	// Line 351, Address: 0x15a8a4, Func Offset: 0x324
	// Line 353, Address: 0x15a8b0, Func Offset: 0x330
	// Line 354, Address: 0x15a8bc, Func Offset: 0x33c
	// Line 355, Address: 0x15a8c4, Func Offset: 0x344
	// Line 357, Address: 0x15a8d0, Func Offset: 0x350
	// Line 359, Address: 0x15a8dc, Func Offset: 0x35c
	// Line 361, Address: 0x15a8e0, Func Offset: 0x360
	// Line 362, Address: 0x15a900, Func Offset: 0x380
	// Line 363, Address: 0x15a908, Func Offset: 0x388
	// Line 364, Address: 0x15a91c, Func Offset: 0x39c
	// Line 366, Address: 0x15a920, Func Offset: 0x3a0
	// Line 370, Address: 0x15a928, Func Offset: 0x3a8
	// Line 366, Address: 0x15a934, Func Offset: 0x3b4
	// Line 370, Address: 0x15a938, Func Offset: 0x3b8
	// Line 371, Address: 0x15a940, Func Offset: 0x3c0
	// Line 373, Address: 0x15a980, Func Offset: 0x400
	// Line 375, Address: 0x15a988, Func Offset: 0x408
	// Line 381, Address: 0x15a9b8, Func Offset: 0x438
	// Line 382, Address: 0x15a9cc, Func Offset: 0x44c
	// Line 383, Address: 0x15a9d4, Func Offset: 0x454
	// Line 384, Address: 0x15a9ec, Func Offset: 0x46c
	// Line 383, Address: 0x15a9f0, Func Offset: 0x470
	// Line 384, Address: 0x15a9f4, Func Offset: 0x474
	// Line 385, Address: 0x15aa14, Func Offset: 0x494
	// Line 388, Address: 0x15aa18, Func Offset: 0x498
	// Line 389, Address: 0x15aa40, Func Offset: 0x4c0
	// Line 391, Address: 0x15aa58, Func Offset: 0x4d8
	// Line 389, Address: 0x15aa60, Func Offset: 0x4e0
	// Line 392, Address: 0x15aa70, Func Offset: 0x4f0
	// Func End, Address: 0x15aa80, Func Offset: 0x500
}

// 
// Start address: 0x15aa80
float rot_normalize(float f)
{
	// Line 410, Address: 0x15aa80, Func Offset: 0
	// Func End, Address: 0x15aa88, Func Offset: 0x8
}

// 
// Start address: 0x15aa90
_anon4* PlayerUISet()
{
	_PLAYER_WORK* p;
	float pad_x;
	float pad_z;
	float pad_rot;
	float t_rot;
	int shoot_last;
	int battle_last;
	int rstick_last;
	int over_flag_last;
	int run_key;
	float ax;
	float ay;
	float push_nom[4];
	float push_len;
	float push_thres;
	float rot;
	float sf;
	float dis;
	float thrs;
	float ratio;
	float perf;
	float sf;
	float rot_per_sec;
	float perf;
	float perf;
	// Line 415, Address: 0x15aa90, Func Offset: 0
	// Line 432, Address: 0x15aa94, Func Offset: 0x4
	// Line 415, Address: 0x15aa98, Func Offset: 0x8
	// Line 416, Address: 0x15aa9c, Func Offset: 0xc
	// Line 415, Address: 0x15aaa0, Func Offset: 0x10
	// Line 432, Address: 0x15aaa4, Func Offset: 0x14
	// Line 415, Address: 0x15aaa8, Func Offset: 0x18
	// Line 432, Address: 0x15aaac, Func Offset: 0x1c
	// Line 415, Address: 0x15aab0, Func Offset: 0x20
	// Line 416, Address: 0x15aac8, Func Offset: 0x38
	// Line 429, Address: 0x15aacc, Func Offset: 0x3c
	// Line 430, Address: 0x15aad4, Func Offset: 0x44
	// Line 431, Address: 0x15aadc, Func Offset: 0x4c
	// Line 432, Address: 0x15aae4, Func Offset: 0x54
	// Line 436, Address: 0x15aaec, Func Offset: 0x5c
	// Line 438, Address: 0x15ab00, Func Offset: 0x70
	// Line 442, Address: 0x15ab20, Func Offset: 0x90
	// Line 445, Address: 0x15ab28, Func Offset: 0x98
	// Line 446, Address: 0x15ab3c, Func Offset: 0xac
	// Line 451, Address: 0x15ab40, Func Offset: 0xb0
	// Line 452, Address: 0x15ab50, Func Offset: 0xc0
	// Line 453, Address: 0x15ab5c, Func Offset: 0xcc
	// Line 456, Address: 0x15ab6c, Func Offset: 0xdc
	// Line 459, Address: 0x15ab74, Func Offset: 0xe4
	// Line 460, Address: 0x15ab80, Func Offset: 0xf0
	// Line 461, Address: 0x15ab8c, Func Offset: 0xfc
	// Line 462, Address: 0x15abb4, Func Offset: 0x124
	// Line 477, Address: 0x15abc0, Func Offset: 0x130
	// Line 478, Address: 0x15ac04, Func Offset: 0x174
	// Line 480, Address: 0x15ac10, Func Offset: 0x180
	// Line 481, Address: 0x15ac14, Func Offset: 0x184
	// Line 483, Address: 0x15ac20, Func Offset: 0x190
	// Line 485, Address: 0x15ac28, Func Offset: 0x198
	// Line 486, Address: 0x15ac34, Func Offset: 0x1a4
	// Line 491, Address: 0x15ac58, Func Offset: 0x1c8
	// Line 492, Address: 0x15ac68, Func Offset: 0x1d8
	// Line 495, Address: 0x15ac70, Func Offset: 0x1e0
	// Line 492, Address: 0x15ac74, Func Offset: 0x1e4
	// Line 495, Address: 0x15ac78, Func Offset: 0x1e8
	// Line 500, Address: 0x15ac8c, Func Offset: 0x1fc
	// Line 497, Address: 0x15ac90, Func Offset: 0x200
	// Line 500, Address: 0x15ac94, Func Offset: 0x204
	// Line 498, Address: 0x15aca0, Func Offset: 0x210
	// Line 497, Address: 0x15aca8, Func Offset: 0x218
	// Line 498, Address: 0x15acb0, Func Offset: 0x220
	// Line 500, Address: 0x15acb8, Func Offset: 0x228
	// Line 501, Address: 0x15acc0, Func Offset: 0x230
	// Line 503, Address: 0x15acd8, Func Offset: 0x248
	// Line 505, Address: 0x15ace0, Func Offset: 0x250
	// Line 503, Address: 0x15ace4, Func Offset: 0x254
	// Line 505, Address: 0x15ace8, Func Offset: 0x258
	// Line 504, Address: 0x15acec, Func Offset: 0x25c
	// Line 505, Address: 0x15acf4, Func Offset: 0x264
	// Line 504, Address: 0x15acfc, Func Offset: 0x26c
	// Line 505, Address: 0x15ad00, Func Offset: 0x270
	// Line 506, Address: 0x15ad04, Func Offset: 0x274
	// Line 512, Address: 0x15ad10, Func Offset: 0x280
	// Line 510, Address: 0x15ad14, Func Offset: 0x284
	// Line 511, Address: 0x15ad1c, Func Offset: 0x28c
	// Line 512, Address: 0x15ad20, Func Offset: 0x290
	// Line 510, Address: 0x15ad24, Func Offset: 0x294
	// Line 512, Address: 0x15ad28, Func Offset: 0x298
	// Line 511, Address: 0x15ad2c, Func Offset: 0x29c
	// Line 512, Address: 0x15ad30, Func Offset: 0x2a0
	// Line 511, Address: 0x15ad34, Func Offset: 0x2a4
	// Line 512, Address: 0x15ad38, Func Offset: 0x2a8
	// Line 513, Address: 0x15ad40, Func Offset: 0x2b0
	// Line 515, Address: 0x15ad48, Func Offset: 0x2b8
	// Line 513, Address: 0x15ad4c, Func Offset: 0x2bc
	// Line 515, Address: 0x15ad50, Func Offset: 0x2c0
	// Line 514, Address: 0x15ad54, Func Offset: 0x2c4
	// Line 515, Address: 0x15ad5c, Func Offset: 0x2cc
	// Line 514, Address: 0x15ad64, Func Offset: 0x2d4
	// Line 515, Address: 0x15ad68, Func Offset: 0x2d8
	// Line 518, Address: 0x15ad70, Func Offset: 0x2e0
	// Line 519, Address: 0x15ad7c, Func Offset: 0x2ec
	// Line 522, Address: 0x15ad80, Func Offset: 0x2f0
	// Line 526, Address: 0x15ada0, Func Offset: 0x310
	// Line 528, Address: 0x15ada8, Func Offset: 0x318
	// Line 523, Address: 0x15adb4, Func Offset: 0x324
	// Line 528, Address: 0x15adb8, Func Offset: 0x328
	// Line 527, Address: 0x15adbc, Func Offset: 0x32c
	// Line 523, Address: 0x15adc4, Func Offset: 0x334
	// Line 526, Address: 0x15adcc, Func Offset: 0x33c
	// Line 527, Address: 0x15add4, Func Offset: 0x344
	// Line 528, Address: 0x15addc, Func Offset: 0x34c
	// Line 529, Address: 0x15ade4, Func Offset: 0x354
	// Line 531, Address: 0x15adec, Func Offset: 0x35c
	// Line 529, Address: 0x15adf0, Func Offset: 0x360
	// Line 531, Address: 0x15adf4, Func Offset: 0x364
	// Line 530, Address: 0x15adf8, Func Offset: 0x368
	// Line 531, Address: 0x15ae00, Func Offset: 0x370
	// Line 530, Address: 0x15ae08, Func Offset: 0x378
	// Line 531, Address: 0x15ae0c, Func Offset: 0x37c
	// Line 533, Address: 0x15ae14, Func Offset: 0x384
	// Line 537, Address: 0x15ae20, Func Offset: 0x390
	// Line 538, Address: 0x15ae2c, Func Offset: 0x39c
	// Line 553, Address: 0x15ae40, Func Offset: 0x3b0
	// Line 555, Address: 0x15ae50, Func Offset: 0x3c0
	// Line 556, Address: 0x15ae5c, Func Offset: 0x3cc
	// Line 558, Address: 0x15ae60, Func Offset: 0x3d0
	// Line 559, Address: 0x15ae68, Func Offset: 0x3d8
	// Line 560, Address: 0x15ae78, Func Offset: 0x3e8
	// Line 561, Address: 0x15ae84, Func Offset: 0x3f4
	// Line 562, Address: 0x15ae8c, Func Offset: 0x3fc
	// Line 564, Address: 0x15ae98, Func Offset: 0x408
	// Line 565, Address: 0x15aea4, Func Offset: 0x414
	// Line 567, Address: 0x15aeb0, Func Offset: 0x420
	// Line 568, Address: 0x15aed0, Func Offset: 0x440
	// Line 570, Address: 0x15aedc, Func Offset: 0x44c
	// Line 571, Address: 0x15aee4, Func Offset: 0x454
	// Line 575, Address: 0x15aeec, Func Offset: 0x45c
	// Line 574, Address: 0x15aef0, Func Offset: 0x460
	// Line 575, Address: 0x15aef4, Func Offset: 0x464
	// Line 574, Address: 0x15aefc, Func Offset: 0x46c
	// Line 571, Address: 0x15af00, Func Offset: 0x470
	// Line 575, Address: 0x15af04, Func Offset: 0x474
	// Line 577, Address: 0x15af08, Func Offset: 0x478
	// Line 573, Address: 0x15af0c, Func Offset: 0x47c
	// Line 577, Address: 0x15af10, Func Offset: 0x480
	// Line 578, Address: 0x15af1c, Func Offset: 0x48c
	// Line 580, Address: 0x15af38, Func Offset: 0x4a8
	// Line 582, Address: 0x15af40, Func Offset: 0x4b0
	// Line 586, Address: 0x15af5c, Func Offset: 0x4cc
	// Line 588, Address: 0x15af68, Func Offset: 0x4d8
	// Line 589, Address: 0x15af70, Func Offset: 0x4e0
	// Line 590, Address: 0x15af7c, Func Offset: 0x4ec
	// Line 593, Address: 0x15af88, Func Offset: 0x4f8
	// Line 594, Address: 0x15afa0, Func Offset: 0x510
	// Line 597, Address: 0x15afa8, Func Offset: 0x518
	// Line 598, Address: 0x15afb0, Func Offset: 0x520
	// Line 597, Address: 0x15afb8, Func Offset: 0x528
	// Line 598, Address: 0x15afc0, Func Offset: 0x530
	// Line 599, Address: 0x15afc8, Func Offset: 0x538
	// Line 603, Address: 0x15afd0, Func Offset: 0x540
	// Line 604, Address: 0x15afe0, Func Offset: 0x550
	// Line 610, Address: 0x15afe8, Func Offset: 0x558
	// Line 611, Address: 0x15b008, Func Offset: 0x578
	// Line 614, Address: 0x15b00c, Func Offset: 0x57c
	// Line 615, Address: 0x15b018, Func Offset: 0x588
	// Line 619, Address: 0x15b038, Func Offset: 0x5a8
	// Line 621, Address: 0x15b048, Func Offset: 0x5b8
	// Line 619, Address: 0x15b054, Func Offset: 0x5c4
	// Line 621, Address: 0x15b05c, Func Offset: 0x5cc
	// Line 619, Address: 0x15b060, Func Offset: 0x5d0
	// Line 620, Address: 0x15b06c, Func Offset: 0x5dc
	// Line 621, Address: 0x15b074, Func Offset: 0x5e4
	// Line 622, Address: 0x15b080, Func Offset: 0x5f0
	// Line 623, Address: 0x15b084, Func Offset: 0x5f4
	// Line 627, Address: 0x15b090, Func Offset: 0x600
	// Line 625, Address: 0x15b098, Func Offset: 0x608
	// Line 626, Address: 0x15b0a0, Func Offset: 0x610
	// Line 631, Address: 0x15b0a8, Func Offset: 0x618
	// Line 632, Address: 0x15b0c4, Func Offset: 0x634
	// Line 633, Address: 0x15b0dc, Func Offset: 0x64c
	// Line 635, Address: 0x15b0e0, Func Offset: 0x650
	// Line 639, Address: 0x15b0e8, Func Offset: 0x658
	// Line 640, Address: 0x15b0f0, Func Offset: 0x660
	// Line 641, Address: 0x15b0f8, Func Offset: 0x668
	// Line 639, Address: 0x15b100, Func Offset: 0x670
	// Line 640, Address: 0x15b108, Func Offset: 0x678
	// Line 641, Address: 0x15b10c, Func Offset: 0x67c
	// Line 643, Address: 0x15b114, Func Offset: 0x684
	// Line 644, Address: 0x15b12c, Func Offset: 0x69c
	// Line 645, Address: 0x15b140, Func Offset: 0x6b0
	// Line 647, Address: 0x15b148, Func Offset: 0x6b8
	// Line 651, Address: 0x15b160, Func Offset: 0x6d0
	// Line 649, Address: 0x15b164, Func Offset: 0x6d4
	// Line 650, Address: 0x15b16c, Func Offset: 0x6dc
	// Line 651, Address: 0x15b170, Func Offset: 0x6e0
	// Line 649, Address: 0x15b174, Func Offset: 0x6e4
	// Line 651, Address: 0x15b178, Func Offset: 0x6e8
	// Line 650, Address: 0x15b17c, Func Offset: 0x6ec
	// Line 651, Address: 0x15b180, Func Offset: 0x6f0
	// Line 650, Address: 0x15b184, Func Offset: 0x6f4
	// Line 651, Address: 0x15b188, Func Offset: 0x6f8
	// Line 652, Address: 0x15b190, Func Offset: 0x700
	// Line 657, Address: 0x15b1a0, Func Offset: 0x710
	// Line 653, Address: 0x15b1a4, Func Offset: 0x714
	// Line 657, Address: 0x15b1a8, Func Offset: 0x718
	// Line 654, Address: 0x15b1ac, Func Offset: 0x71c
	// Line 655, Address: 0x15b1b4, Func Offset: 0x724
	// Line 657, Address: 0x15b1b8, Func Offset: 0x728
	// Line 660, Address: 0x15b1c0, Func Offset: 0x730
	// Line 662, Address: 0x15b1c8, Func Offset: 0x738
	// Line 661, Address: 0x15b1cc, Func Offset: 0x73c
	// Line 666, Address: 0x15b1d0, Func Offset: 0x740
	// Line 667, Address: 0x15b1d8, Func Offset: 0x748
	// Line 668, Address: 0x15b1ec, Func Offset: 0x75c
	// Line 669, Address: 0x15b1f4, Func Offset: 0x764
	// Line 670, Address: 0x15b200, Func Offset: 0x770
	// Line 672, Address: 0x15b244, Func Offset: 0x7b4
	// Line 673, Address: 0x15b250, Func Offset: 0x7c0
	// Line 674, Address: 0x15b26c, Func Offset: 0x7dc
	// Line 675, Address: 0x15b274, Func Offset: 0x7e4
	// Line 679, Address: 0x15b280, Func Offset: 0x7f0
	// Line 680, Address: 0x15b28c, Func Offset: 0x7fc
	// Line 681, Address: 0x15b2c8, Func Offset: 0x838
	// Line 683, Address: 0x15b310, Func Offset: 0x880
	// Line 685, Address: 0x15b318, Func Offset: 0x888
	// Line 686, Address: 0x15b32c, Func Offset: 0x89c
	// Line 687, Address: 0x15b33c, Func Offset: 0x8ac
	// Line 689, Address: 0x15b348, Func Offset: 0x8b8
	// Line 692, Address: 0x15b35c, Func Offset: 0x8cc
	// Line 703, Address: 0x15b360, Func Offset: 0x8d0
	// Line 706, Address: 0x15b384, Func Offset: 0x8f4
	// Line 707, Address: 0x15b388, Func Offset: 0x8f8
	// Line 706, Address: 0x15b38c, Func Offset: 0x8fc
	// Line 707, Address: 0x15b390, Func Offset: 0x900
	// Line 708, Address: 0x15b3a4, Func Offset: 0x914
	// Line 709, Address: 0x15b3c8, Func Offset: 0x938
	// Line 711, Address: 0x15b3d0, Func Offset: 0x940
	// Line 712, Address: 0x15b3dc, Func Offset: 0x94c
	// Line 713, Address: 0x15b3e0, Func Offset: 0x950
	// Line 714, Address: 0x15b3f4, Func Offset: 0x964
	// Line 716, Address: 0x15b3f8, Func Offset: 0x968
	// Line 717, Address: 0x15b414, Func Offset: 0x984
	// Line 730, Address: 0x15b420, Func Offset: 0x990
	// Line 731, Address: 0x15b434, Func Offset: 0x9a4
	// Line 732, Address: 0x15b43c, Func Offset: 0x9ac
	// Line 733, Address: 0x15b448, Func Offset: 0x9b8
	// Line 734, Address: 0x15b464, Func Offset: 0x9d4
	// Line 735, Address: 0x15b46c, Func Offset: 0x9dc
	// Line 737, Address: 0x15b478, Func Offset: 0x9e8
	// Line 738, Address: 0x15b494, Func Offset: 0xa04
	// Line 740, Address: 0x15b498, Func Offset: 0xa08
	// Line 744, Address: 0x15b4a0, Func Offset: 0xa10
	// Line 745, Address: 0x15b4b0, Func Offset: 0xa20
	// Line 748, Address: 0x15b4b8, Func Offset: 0xa28
	// Line 749, Address: 0x15b4c8, Func Offset: 0xa38
	// Line 752, Address: 0x15b4d0, Func Offset: 0xa40
	// Line 753, Address: 0x15b4e4, Func Offset: 0xa54
	// Line 754, Address: 0x15b4e8, Func Offset: 0xa58
	// Line 755, Address: 0x15b4f0, Func Offset: 0xa60
	// Line 756, Address: 0x15b4f8, Func Offset: 0xa68
	// Line 757, Address: 0x15b518, Func Offset: 0xa88
	// Line 761, Address: 0x15b520, Func Offset: 0xa90
	// Line 762, Address: 0x15b530, Func Offset: 0xaa0
	// Line 763, Address: 0x15b538, Func Offset: 0xaa8
	// Line 766, Address: 0x15b540, Func Offset: 0xab0
	// Line 767, Address: 0x15b564, Func Offset: 0xad4
	// Line 769, Address: 0x15b570, Func Offset: 0xae0
	// Line 770, Address: 0x15b588, Func Offset: 0xaf8
	// Line 771, Address: 0x15b5b0, Func Offset: 0xb20
	// Line 776, Address: 0x15b5b8, Func Offset: 0xb28
	// Line 779, Address: 0x15b5e0, Func Offset: 0xb50
	// Line 780, Address: 0x15b5ec, Func Offset: 0xb5c
	// Line 783, Address: 0x15b5f0, Func Offset: 0xb60
	// Line 784, Address: 0x15b604, Func Offset: 0xb74
	// Line 789, Address: 0x15b610, Func Offset: 0xb80
	// Line 794, Address: 0x15b61c, Func Offset: 0xb8c
	// Line 789, Address: 0x15b620, Func Offset: 0xb90
	// Line 794, Address: 0x15b624, Func Offset: 0xb94
	// Line 789, Address: 0x15b628, Func Offset: 0xb98
	// Line 794, Address: 0x15b664, Func Offset: 0xbd4
	// Line 795, Address: 0x15b674, Func Offset: 0xbe4
	// Line 796, Address: 0x15b67c, Func Offset: 0xbec
	// Line 797, Address: 0x15b694, Func Offset: 0xc04
	// Line 796, Address: 0x15b698, Func Offset: 0xc08
	// Line 797, Address: 0x15b69c, Func Offset: 0xc0c
	// Line 798, Address: 0x15b6bc, Func Offset: 0xc2c
	// Line 801, Address: 0x15b6c0, Func Offset: 0xc30
	// Line 802, Address: 0x15b6e8, Func Offset: 0xc58
	// Line 804, Address: 0x15b6f0, Func Offset: 0xc60
	// Line 803, Address: 0x15b6f4, Func Offset: 0xc64
	// Line 804, Address: 0x15b6fc, Func Offset: 0xc6c
	// Line 806, Address: 0x15b708, Func Offset: 0xc78
	// Line 808, Address: 0x15b724, Func Offset: 0xc94
	// Line 810, Address: 0x15b72c, Func Offset: 0xc9c
	// Line 819, Address: 0x15b738, Func Offset: 0xca8
	// Line 821, Address: 0x15b75c, Func Offset: 0xccc
	// Line 822, Address: 0x15b768, Func Offset: 0xcd8
	// Line 824, Address: 0x15b780, Func Offset: 0xcf0
	// Line 826, Address: 0x15b788, Func Offset: 0xcf8
	// Line 827, Address: 0x15b78c, Func Offset: 0xcfc
	// Line 839, Address: 0x15b790, Func Offset: 0xd00
	// Line 850, Address: 0x15b798, Func Offset: 0xd08
	// Line 855, Address: 0x15b7b4, Func Offset: 0xd24
	// Line 858, Address: 0x15b7cc, Func Offset: 0xd3c
	// Line 855, Address: 0x15b7d4, Func Offset: 0xd44
	// Line 858, Address: 0x15b7dc, Func Offset: 0xd4c
	// Line 855, Address: 0x15b7e0, Func Offset: 0xd50
	// Line 858, Address: 0x15b7e4, Func Offset: 0xd54
	// Line 861, Address: 0x15b7f4, Func Offset: 0xd64
	// Line 862, Address: 0x15b7fc, Func Offset: 0xd6c
	// Line 861, Address: 0x15b804, Func Offset: 0xd74
	// Line 862, Address: 0x15b808, Func Offset: 0xd78
	// Line 863, Address: 0x15b818, Func Offset: 0xd88
	// Line 864, Address: 0x15b828, Func Offset: 0xd98
	// Line 865, Address: 0x15b830, Func Offset: 0xda0
	// Line 867, Address: 0x15b838, Func Offset: 0xda8
	// Line 868, Address: 0x15b84c, Func Offset: 0xdbc
	// Line 869, Address: 0x15b858, Func Offset: 0xdc8
	// Line 871, Address: 0x15b860, Func Offset: 0xdd0
	// Line 872, Address: 0x15b874, Func Offset: 0xde4
	// Line 874, Address: 0x15b878, Func Offset: 0xde8
	// Line 875, Address: 0x15b89c, Func Offset: 0xe0c
	// Line 878, Address: 0x15b8a0, Func Offset: 0xe10
	// Line 879, Address: 0x15b8ac, Func Offset: 0xe1c
	// Line 882, Address: 0x15b8b8, Func Offset: 0xe28
	// Line 883, Address: 0x15b8c4, Func Offset: 0xe34
	// Line 885, Address: 0x15b8c8, Func Offset: 0xe38
	// Line 886, Address: 0x15b8f8, Func Offset: 0xe68
	// Line 887, Address: 0x15b918, Func Offset: 0xe88
	// Line 892, Address: 0x15b920, Func Offset: 0xe90
	// Line 893, Address: 0x15b928, Func Offset: 0xe98
	// Line 895, Address: 0x15b94c, Func Offset: 0xebc
	// Line 897, Address: 0x15b958, Func Offset: 0xec8
	// Line 898, Address: 0x15b964, Func Offset: 0xed4
	// Line 899, Address: 0x15b96c, Func Offset: 0xedc
	// Line 901, Address: 0x15b978, Func Offset: 0xee8
	// Line 903, Address: 0x15b984, Func Offset: 0xef4
	// Line 905, Address: 0x15b988, Func Offset: 0xef8
	// Line 906, Address: 0x15b9a8, Func Offset: 0xf18
	// Line 907, Address: 0x15b9b0, Func Offset: 0xf20
	// Line 908, Address: 0x15b9c4, Func Offset: 0xf34
	// Line 910, Address: 0x15b9c8, Func Offset: 0xf38
	// Line 915, Address: 0x15b9d4, Func Offset: 0xf44
	// Line 916, Address: 0x15b9e0, Func Offset: 0xf50
	// Line 915, Address: 0x15b9e4, Func Offset: 0xf54
	// Line 916, Address: 0x15b9e8, Func Offset: 0xf58
	// Line 918, Address: 0x15b9f0, Func Offset: 0xf60
	// Line 919, Address: 0x15ba1c, Func Offset: 0xf8c
	// Line 921, Address: 0x15ba24, Func Offset: 0xf94
	// Line 922, Address: 0x15ba28, Func Offset: 0xf98
	// Line 923, Address: 0x15ba38, Func Offset: 0xfa8
	// Line 924, Address: 0x15ba44, Func Offset: 0xfb4
	// Line 925, Address: 0x15ba48, Func Offset: 0xfb8
	// Line 927, Address: 0x15ba6c, Func Offset: 0xfdc
	// Line 929, Address: 0x15ba78, Func Offset: 0xfe8
	// Line 930, Address: 0x15ba84, Func Offset: 0xff4
	// Line 931, Address: 0x15ba8c, Func Offset: 0xffc
	// Line 933, Address: 0x15ba98, Func Offset: 0x1008
	// Line 935, Address: 0x15baa4, Func Offset: 0x1014
	// Line 936, Address: 0x15baa8, Func Offset: 0x1018
	// Line 940, Address: 0x15bab4, Func Offset: 0x1024
	// Line 941, Address: 0x15badc, Func Offset: 0x104c
	// Line 943, Address: 0x15baf4, Func Offset: 0x1064
	// Line 941, Address: 0x15bafc, Func Offset: 0x106c
	// Line 943, Address: 0x15bb0c, Func Offset: 0x107c
	// Line 944, Address: 0x15bb10, Func Offset: 0x1080
	// Func End, Address: 0x15bb3c, Func Offset: 0x10ac
}

// 
// Start address: 0x15bb40
_anon4* PlayerUIGet()
{
	// Line 948, Address: 0x15bb40, Func Offset: 0
	// Line 949, Address: 0x15bb44, Func Offset: 0x4
	// Func End, Address: 0x15bb4c, Func Offset: 0xc
}

// 
// Start address: 0x15bb50
int PlayerUIMotion()
{
	// Line 953, Address: 0x15bb50, Func Offset: 0
	// Line 954, Address: 0x15bb54, Func Offset: 0x4
	// Func End, Address: 0x15bb5c, Func Offset: 0xc
}

// 
// Start address: 0x15bb60
GameItem get_weapon_at_3ldk(GameItem bullet)
{
	GameItem weapon;
	// Line 959, Address: 0x15bb60, Func Offset: 0
	// Line 962, Address: 0x15bb64, Func Offset: 0x4
	// Line 959, Address: 0x15bb68, Func Offset: 0x8
	// Line 962, Address: 0x15bb6c, Func Offset: 0xc
	// Line 959, Address: 0x15bb70, Func Offset: 0x10
	// Line 962, Address: 0x15bb74, Func Offset: 0x14
	// Line 966, Address: 0x15bb84, Func Offset: 0x24
	// Line 968, Address: 0x15bb98, Func Offset: 0x38
	// Line 969, Address: 0x15bba0, Func Offset: 0x40
	// Line 970, Address: 0x15bbac, Func Offset: 0x4c
	// Line 972, Address: 0x15bbb0, Func Offset: 0x50
	// Line 973, Address: 0x15bbc0, Func Offset: 0x60
	// Line 975, Address: 0x15bbc4, Func Offset: 0x64
	// Line 976, Address: 0x15bbc8, Func Offset: 0x68
	// Line 977, Address: 0x15bbcc, Func Offset: 0x6c
	// Func End, Address: 0x15bbdc, Func Offset: 0x7c
}

// 
// Start address: 0x15bbe0
int is_weapon_ok(GameItem weapon, GameItem bullet)
{
	int rtv;
	int item_no;
	int rest;
	// Line 981, Address: 0x15bbe0, Func Offset: 0
	// Line 982, Address: 0x15bc00, Func Offset: 0x20
	// Line 983, Address: 0x15bc04, Func Offset: 0x24
	// Line 984, Address: 0x15bc0c, Func Offset: 0x2c
	// Line 985, Address: 0x15bc18, Func Offset: 0x38
	// Line 987, Address: 0x15bc24, Func Offset: 0x44
	// Line 991, Address: 0x15bc48, Func Offset: 0x68
	// Line 992, Address: 0x15bc5c, Func Offset: 0x7c
	// Line 999, Address: 0x15bc80, Func Offset: 0xa0
	// Line 1000, Address: 0x15bc88, Func Offset: 0xa8
	// Line 1004, Address: 0x15bc9c, Func Offset: 0xbc
	// Line 1005, Address: 0x15bca8, Func Offset: 0xc8
	// Line 1006, Address: 0x15bcc4, Func Offset: 0xe4
	// Line 1008, Address: 0x15bcd4, Func Offset: 0xf4
	// Line 1011, Address: 0x15bcd8, Func Offset: 0xf8
	// Line 1012, Address: 0x15bcdc, Func Offset: 0xfc
	// Func End, Address: 0x15bcfc, Func Offset: 0x11c
}

// 
// Start address: 0x15bd00
void PlayerUIItemORShoot()
{
	_PLAYER_WORK* p;
	GameItem item_id;
	int menu_id;
	GameItem weapon;
	EileenArmsTypeNo arms;
	int rest;
	int silver_def_num;
	// Line 1029, Address: 0x15bd00, Func Offset: 0
	// Line 1030, Address: 0x15bd04, Func Offset: 0x4
	// Line 1029, Address: 0x15bd08, Func Offset: 0x8
	// Line 1031, Address: 0x15bd1c, Func Offset: 0x1c
	// Line 1032, Address: 0x15bd2c, Func Offset: 0x2c
	// Line 1033, Address: 0x15bd34, Func Offset: 0x34
	// Line 1032, Address: 0x15bd38, Func Offset: 0x38
	// Line 1033, Address: 0x15bd3c, Func Offset: 0x3c
	// Line 1034, Address: 0x15bd40, Func Offset: 0x40
	// Line 1035, Address: 0x15bd48, Func Offset: 0x48
	// Line 1040, Address: 0x15bd4c, Func Offset: 0x4c
	// Line 1044, Address: 0x15bd5c, Func Offset: 0x5c
	// Line 1048, Address: 0x15bd6c, Func Offset: 0x6c
	// Line 1052, Address: 0x15bd7c, Func Offset: 0x7c
	// Line 1053, Address: 0x15bd9c, Func Offset: 0x9c
	// Line 1055, Address: 0x15bda0, Func Offset: 0xa0
	// Line 1057, Address: 0x15bdb4, Func Offset: 0xb4
	// Line 1062, Address: 0x15bdc4, Func Offset: 0xc4
	// Line 1066, Address: 0x15bddc, Func Offset: 0xdc
	// Line 1068, Address: 0x15be24, Func Offset: 0x124
	// Line 1073, Address: 0x15be40, Func Offset: 0x140
	// Line 1074, Address: 0x15be54, Func Offset: 0x154
	// Line 1077, Address: 0x15be60, Func Offset: 0x160
	// Line 1078, Address: 0x15be74, Func Offset: 0x174
	// Line 1080, Address: 0x15be84, Func Offset: 0x184
	// Line 1081, Address: 0x15be94, Func Offset: 0x194
	// Line 1083, Address: 0x15be98, Func Offset: 0x198
	// Line 1086, Address: 0x15bea4, Func Offset: 0x1a4
	// Line 1087, Address: 0x15beb0, Func Offset: 0x1b0
	// Line 1089, Address: 0x15bec8, Func Offset: 0x1c8
	// Line 1092, Address: 0x15bed0, Func Offset: 0x1d0
	// Line 1094, Address: 0x15bedc, Func Offset: 0x1dc
	// Line 1095, Address: 0x15bee0, Func Offset: 0x1e0
	// Line 1096, Address: 0x15bee8, Func Offset: 0x1e8
	// Line 1099, Address: 0x15bef4, Func Offset: 0x1f4
	// Line 1100, Address: 0x15befc, Func Offset: 0x1fc
	// Line 1102, Address: 0x15bf08, Func Offset: 0x208
	// Line 1104, Address: 0x15bf10, Func Offset: 0x210
	// Line 1106, Address: 0x15bf18, Func Offset: 0x218
	// Line 1109, Address: 0x15bf20, Func Offset: 0x220
	// Line 1110, Address: 0x15bf38, Func Offset: 0x238
	// Line 1112, Address: 0x15bf44, Func Offset: 0x244
	// Line 1113, Address: 0x15bf4c, Func Offset: 0x24c
	// Line 1114, Address: 0x15bf58, Func Offset: 0x258
	// Line 1116, Address: 0x15bf64, Func Offset: 0x264
	// Line 1117, Address: 0x15bf6c, Func Offset: 0x26c
	// Line 1118, Address: 0x15bf78, Func Offset: 0x278
	// Line 1120, Address: 0x15bf84, Func Offset: 0x284
	// Line 1121, Address: 0x15bf98, Func Offset: 0x298
	// Line 1122, Address: 0x15bfa8, Func Offset: 0x2a8
	// Line 1123, Address: 0x15bfb0, Func Offset: 0x2b0
	// Line 1124, Address: 0x15bfc4, Func Offset: 0x2c4
	// Line 1125, Address: 0x15bfd4, Func Offset: 0x2d4
	// Line 1127, Address: 0x15bfe0, Func Offset: 0x2e0
	// Line 1129, Address: 0x15bff0, Func Offset: 0x2f0
	// Line 1131, Address: 0x15bff8, Func Offset: 0x2f8
	// Line 1134, Address: 0x15c00c, Func Offset: 0x30c
	// Line 1135, Address: 0x15c010, Func Offset: 0x310
	// Line 1136, Address: 0x15c018, Func Offset: 0x318
	// Line 1138, Address: 0x15c034, Func Offset: 0x334
	// Line 1139, Address: 0x15c03c, Func Offset: 0x33c
	// Line 1141, Address: 0x15c040, Func Offset: 0x340
	// Line 1143, Address: 0x15c050, Func Offset: 0x350
	// Line 1144, Address: 0x15c08c, Func Offset: 0x38c
	// Line 1146, Address: 0x15c090, Func Offset: 0x390
	// Line 1149, Address: 0x15c098, Func Offset: 0x398
	// Line 1152, Address: 0x15c0a0, Func Offset: 0x3a0
	// Line 1155, Address: 0x15c0a8, Func Offset: 0x3a8
	// Line 1157, Address: 0x15c0b0, Func Offset: 0x3b0
	// Line 1159, Address: 0x15c0b4, Func Offset: 0x3b4
	// Line 1160, Address: 0x15c0b8, Func Offset: 0x3b8
	// Line 1162, Address: 0x15c0cc, Func Offset: 0x3cc
	// Line 1164, Address: 0x15c0d4, Func Offset: 0x3d4
	// Line 1165, Address: 0x15c0dc, Func Offset: 0x3dc
	// Line 1167, Address: 0x15c0e8, Func Offset: 0x3e8
	// Line 1170, Address: 0x15c0f0, Func Offset: 0x3f0
	// Line 1172, Address: 0x15c0f8, Func Offset: 0x3f8
	// Line 1173, Address: 0x15c100, Func Offset: 0x400
	// Line 1176, Address: 0x15c10c, Func Offset: 0x40c
	// Line 1179, Address: 0x15c118, Func Offset: 0x418
	// Line 1181, Address: 0x15c128, Func Offset: 0x428
	// Line 1184, Address: 0x15c130, Func Offset: 0x430
	// Line 1186, Address: 0x15c140, Func Offset: 0x440
	// Line 1187, Address: 0x15c150, Func Offset: 0x450
	// Line 1188, Address: 0x15c160, Func Offset: 0x460
	// Line 1192, Address: 0x15c16c, Func Offset: 0x46c
	// Line 1196, Address: 0x15c178, Func Offset: 0x478
	// Line 1197, Address: 0x15c188, Func Offset: 0x488
	// Line 1200, Address: 0x15c194, Func Offset: 0x494
	// Line 1201, Address: 0x15c19c, Func Offset: 0x49c
	// Line 1200, Address: 0x15c1a0, Func Offset: 0x4a0
	// Line 1204, Address: 0x15c1a4, Func Offset: 0x4a4
	// Line 1206, Address: 0x15c1c0, Func Offset: 0x4c0
	// Line 1208, Address: 0x15c1ec, Func Offset: 0x4ec
	// Line 1213, Address: 0x15c22c, Func Offset: 0x52c
	// Line 1214, Address: 0x15c234, Func Offset: 0x534
	// Line 1215, Address: 0x15c240, Func Offset: 0x540
	// Line 1218, Address: 0x15c244, Func Offset: 0x544
	// Line 1215, Address: 0x15c248, Func Offset: 0x548
	// Line 1216, Address: 0x15c24c, Func Offset: 0x54c
	// Line 1218, Address: 0x15c250, Func Offset: 0x550
	// Line 1222, Address: 0x15c258, Func Offset: 0x558
	// Line 1225, Address: 0x15c264, Func Offset: 0x564
	// Line 1259, Address: 0x15c278, Func Offset: 0x578
	// Line 1260, Address: 0x15c284, Func Offset: 0x584
	// Line 1261, Address: 0x15c29c, Func Offset: 0x59c
	// Line 1262, Address: 0x15c2a8, Func Offset: 0x5a8
	// Line 1263, Address: 0x15c2b0, Func Offset: 0x5b0
	// Line 1268, Address: 0x15c2bc, Func Offset: 0x5bc
	// Line 1269, Address: 0x15c2c0, Func Offset: 0x5c0
	// Line 1275, Address: 0x15c2d4, Func Offset: 0x5d4
	// Line 1281, Address: 0x15c2dc, Func Offset: 0x5dc
	// Line 1282, Address: 0x15c2e0, Func Offset: 0x5e0
	// Line 1284, Address: 0x15c2f4, Func Offset: 0x5f4
	// Line 1285, Address: 0x15c2fc, Func Offset: 0x5fc
	// Line 1287, Address: 0x15c300, Func Offset: 0x600
	// Func End, Address: 0x15c31c, Func Offset: 0x61c
}

// 
// Start address: 0x15c320
void PlayerUIMotionStop()
{
	// Line 1291, Address: 0x15c320, Func Offset: 0
	// Line 1292, Address: 0x15c324, Func Offset: 0x4
	// Line 1291, Address: 0x15c328, Func Offset: 0x8
	// Line 1292, Address: 0x15c32c, Func Offset: 0xc
	// Line 1295, Address: 0x15c330, Func Offset: 0x10
	// Line 1297, Address: 0x15c338, Func Offset: 0x18
	// Line 1298, Address: 0x15c340, Func Offset: 0x20
	// Line 1299, Address: 0x15c348, Func Offset: 0x28
	// Line 1300, Address: 0x15c350, Func Offset: 0x30
	// Line 1302, Address: 0x15c358, Func Offset: 0x38
	// Line 1303, Address: 0x15c36c, Func Offset: 0x4c
	// Line 1304, Address: 0x15c370, Func Offset: 0x50
	// Line 1305, Address: 0x15c378, Func Offset: 0x58
	// Line 1306, Address: 0x15c37c, Func Offset: 0x5c
	// Line 1309, Address: 0x15c388, Func Offset: 0x68
	// Line 1310, Address: 0x15c390, Func Offset: 0x70
	// Line 1314, Address: 0x15c398, Func Offset: 0x78
	// Line 1317, Address: 0x15c3a0, Func Offset: 0x80
	// Func End, Address: 0x15c3ac, Func Offset: 0x8c
}

// 
// Start address: 0x15c3b0
void PlayerUIMotionStart()
{
	// Line 1322, Address: 0x15c3b0, Func Offset: 0
	// Line 1324, Address: 0x15c3b4, Func Offset: 0x4
	// Func End, Address: 0x15c3bc, Func Offset: 0xc
}

// 
// Start address: 0x15c3c0
void PlayerUIAnalogCut(int frame)
{
	// Line 1332, Address: 0x15c3c0, Func Offset: 0
	// Line 1335, Address: 0x15c3c4, Func Offset: 0x4
	// Func End, Address: 0x15c3cc, Func Offset: 0xc
}

// 
// Start address: 0x15c3d0
float PlayerUIGetAnalogLX(int port)
{
	// Line 1339, Address: 0x15c3d0, Func Offset: 0
	// Line 1341, Address: 0x15c3d4, Func Offset: 0x4
	// Line 1339, Address: 0x15c3d8, Func Offset: 0x8
	// Line 1341, Address: 0x15c3dc, Func Offset: 0xc
	// Line 1345, Address: 0x15c3fc, Func Offset: 0x2c
	// Func End, Address: 0x15c408, Func Offset: 0x38
}

// 
// Start address: 0x15c410
float PlayerUIGetAnalogLY(int port)
{
	// Line 1348, Address: 0x15c410, Func Offset: 0
	// Line 1350, Address: 0x15c414, Func Offset: 0x4
	// Line 1348, Address: 0x15c418, Func Offset: 0x8
	// Line 1350, Address: 0x15c41c, Func Offset: 0xc
	// Line 1354, Address: 0x15c43c, Func Offset: 0x2c
	// Func End, Address: 0x15c448, Func Offset: 0x38
}

// 
// Start address: 0x15c450
void PlayerUISetItemMotionStart()
{
	_PLAYER_WORK* p;
	// Line 1360, Address: 0x15c450, Func Offset: 0
	// Line 1362, Address: 0x15c45c, Func Offset: 0xc
	// Line 1364, Address: 0x15c48c, Func Offset: 0x3c
	// Line 1363, Address: 0x15c490, Func Offset: 0x40
	// Line 1364, Address: 0x15c494, Func Offset: 0x44
	// Line 1366, Address: 0x15c49c, Func Offset: 0x4c
	// Line 1369, Address: 0x15c4a0, Func Offset: 0x50
	// Func End, Address: 0x15c4a8, Func Offset: 0x58
}

// 
// Start address: 0x15c4b0
void PlayerUISetCrouchMotionStart()
{
	_PLAYER_WORK* p;
	// Line 1374, Address: 0x15c4b0, Func Offset: 0
	// Line 1376, Address: 0x15c4bc, Func Offset: 0xc
	// Line 1378, Address: 0x15c4ec, Func Offset: 0x3c
	// Line 1377, Address: 0x15c4f0, Func Offset: 0x40
	// Line 1378, Address: 0x15c4f4, Func Offset: 0x44
	// Line 1379, Address: 0x15c4fc, Func Offset: 0x4c
	// Line 1382, Address: 0x15c500, Func Offset: 0x50
	// Func End, Address: 0x15c508, Func Offset: 0x58
}

// 
// Start address: 0x15c510
int PlayerUIGetItemGetMotion()
{
	// Line 1386, Address: 0x15c510, Func Offset: 0
	// Line 1387, Address: 0x15c514, Func Offset: 0x4
	// Func End, Address: 0x15c51c, Func Offset: 0xc
}

// 
// Start address: 0x15c520
int PlayerUISetItemMotionEnd()
{
	_PLAYER_WORK* p;
	// Line 1396, Address: 0x15c520, Func Offset: 0
	// Line 1394, Address: 0x15c524, Func Offset: 0x4
	// Line 1396, Address: 0x15c528, Func Offset: 0x8
	// Line 1397, Address: 0x15c538, Func Offset: 0x18
	// Line 1398, Address: 0x15c53c, Func Offset: 0x1c
	// Line 1401, Address: 0x15c548, Func Offset: 0x28
	// Line 1402, Address: 0x15c550, Func Offset: 0x30
	// Func End, Address: 0x15c558, Func Offset: 0x38
}

// 
// Start address: 0x15c560
PlayerUIItemMotionStatus PlayerUIItemMotionGetStatus()
{
	_PLAYER_WORK* p;
	PlayerUIItemMotionStatus ret;
	// Line 1406, Address: 0x15c560, Func Offset: 0
	// Line 1410, Address: 0x15c564, Func Offset: 0x4
	// Line 1406, Address: 0x15c568, Func Offset: 0x8
	// Line 1407, Address: 0x15c574, Func Offset: 0x14
	// Line 1410, Address: 0x15c57c, Func Offset: 0x1c
	// Line 1412, Address: 0x15c588, Func Offset: 0x28
	// Line 1413, Address: 0x15c590, Func Offset: 0x30
	// Line 1414, Address: 0x15c59c, Func Offset: 0x3c
	// Line 1416, Address: 0x15c60c, Func Offset: 0xac
	// Line 1420, Address: 0x15c618, Func Offset: 0xb8
	// Line 1426, Address: 0x15c620, Func Offset: 0xc0
	// Func End, Address: 0x15c634, Func Offset: 0xd4
}

// 
// Start address: 0x15c640
void PlayerUIStickSetReverse()
{
	// Line 1432, Address: 0x15c640, Func Offset: 0
	// Line 1435, Address: 0x15c648, Func Offset: 0x8
	// Func End, Address: 0x15c650, Func Offset: 0x10
}

// 
// Start address: 0x15c650
void PlayerUIMoveOver(float dir, float move)
{
	// Line 1453, Address: 0x15c650, Func Offset: 0
	// Line 1455, Address: 0x15c654, Func Offset: 0x4
	// Line 1453, Address: 0x15c658, Func Offset: 0x8
	// Line 1454, Address: 0x15c65c, Func Offset: 0xc
	// Line 1455, Address: 0x15c664, Func Offset: 0x14
	// Line 1458, Address: 0x15c668, Func Offset: 0x18
	// Func End, Address: 0x15c670, Func Offset: 0x20
}

// 
// Start address: 0x15c670
void PlayerUIMoveByForce(float dir, float per_sec)
{
	// Line 1467, Address: 0x15c670, Func Offset: 0
	// Line 1468, Address: 0x15c678, Func Offset: 0x8
	// Line 1471, Address: 0x15c67c, Func Offset: 0xc
	// Func End, Address: 0x15c684, Func Offset: 0x14
}

// 
// Start address: 0x15c690
void PlayerUIMoveByPush(float* push_vec)
{
	// Line 1486, Address: 0x15c690, Func Offset: 0
	// Line 1489, Address: 0x15c6a8, Func Offset: 0x18
	// Func End, Address: 0x15c6b0, Func Offset: 0x20
}

// 
// Start address: 0x15c6b0
void PlayerUISetPushTarget(float* target)
{
	// Line 1494, Address: 0x15c6b0, Func Offset: 0
	// Line 1497, Address: 0x15c6c8, Func Offset: 0x18
	// Func End, Address: 0x15c6d0, Func Offset: 0x20
}

// 
// Start address: 0x15c6d0
void PlayerUISetPushCurrent()
{
	float len_target;
	float len_current;
	float ratio;
	// Line 1501, Address: 0x15c6d0, Func Offset: 0
	// Line 1506, Address: 0x15c6d4, Func Offset: 0x4
	// Line 1501, Address: 0x15c6d8, Func Offset: 0x8
	// Line 1506, Address: 0x15c6dc, Func Offset: 0xc
	// Line 1501, Address: 0x15c6e0, Func Offset: 0x10
	// Line 1506, Address: 0x15c6e4, Func Offset: 0x14
	// Line 1507, Address: 0x15c704, Func Offset: 0x34
	// Line 1510, Address: 0x15c72c, Func Offset: 0x5c
	// Line 1511, Address: 0x15c754, Func Offset: 0x84
	// Line 1512, Address: 0x15c768, Func Offset: 0x98
	// Line 1513, Address: 0x15c77c, Func Offset: 0xac
	// Line 1514, Address: 0x15c784, Func Offset: 0xb4
	// Line 1516, Address: 0x15c788, Func Offset: 0xb8
	// Line 1518, Address: 0x15c794, Func Offset: 0xc4
	// Line 1519, Address: 0x15c79c, Func Offset: 0xcc
	// Line 1522, Address: 0x15c7a8, Func Offset: 0xd8
	// Line 1523, Address: 0x15c7b4, Func Offset: 0xe4
	// Line 1524, Address: 0x15c7b8, Func Offset: 0xe8
	// Line 1526, Address: 0x15c7c4, Func Offset: 0xf4
	// Line 1524, Address: 0x15c7c8, Func Offset: 0xf8
	// Line 1526, Address: 0x15c7cc, Func Offset: 0xfc
	// Line 1524, Address: 0x15c7d8, Func Offset: 0x108
	// Line 1526, Address: 0x15c7dc, Func Offset: 0x10c
	// Line 1524, Address: 0x15c7e4, Func Offset: 0x114
	// Line 1526, Address: 0x15c7e8, Func Offset: 0x118
	// Line 1527, Address: 0x15c810, Func Offset: 0x140
	// Line 1528, Address: 0x15c81c, Func Offset: 0x14c
	// Line 1530, Address: 0x15c834, Func Offset: 0x164
	// Line 1531, Address: 0x15c838, Func Offset: 0x168
	// Func End, Address: 0x15c848, Func Offset: 0x178
}

