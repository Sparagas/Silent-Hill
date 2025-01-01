typedef struct sfObj;
typedef struct sgQTObject;
typedef struct _anon0;
typedef struct sgBone;
typedef struct _PLAYER_WORK;
typedef struct _player3ldkUiWork;
typedef enum GameItem : unsigned char;
typedef struct sfOffsetAABB;
typedef union sfCldBody;
typedef struct _anon1;
typedef struct sgIKHandle;
typedef struct _anon2;
typedef struct sfCldPart;
typedef struct _anon3;
typedef struct _anon4;
typedef struct EventFlag;
typedef struct _anon5;
typedef struct sgAnime;
typedef struct sfCharacter;
typedef union _anon6;
typedef struct sfCldObject;
typedef struct _anon7;
typedef struct sgQTNode;
typedef struct _anon8;
typedef enum _cam3Step : unsigned char;
typedef struct sgSVModel;
typedef struct _anon9;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _cam3Work;
typedef struct _GAME_WORK;

typedef void(*type_1)(sfObj*);
typedef sgIKSolveResult(*type_2)();
typedef void(*type_11)(sgAnime*, int);
typedef void(*type_13)(sfObj*);
typedef void(*type_16)(sfObj*);
typedef void(*type_21)();
typedef void(*type_32)(_anon8*, int, int, float*);

typedef int type_0[1];
typedef void(*type_3)(sfObj*)[3];
typedef float type_4[4];
typedef int type_5[1];
typedef float type_6[8];
typedef unsigned char type_7[3];
typedef unsigned char type_8[320];
typedef void* type_9[4];
typedef float type_10[4];
typedef _anon6 type_12[256];
typedef unsigned char type_14[4];
typedef int type_15[1];
typedef short type_17[2];
typedef unsigned short type_18[2];
typedef int type_19[1];
typedef char type_20[4];
typedef unsigned char type_22[4];
typedef void(*type_23)()[2];
typedef float type_24[1];
typedef int type_25[1];
typedef sfCldPart* type_26[6];
typedef unsigned char type_27[3];
typedef int type_28[1];
typedef float type_29[4][4];
typedef int type_30[1];
typedef float type_31[4];
typedef int type_33[1];
typedef float type_34[4][2];

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

struct sgQTObject
{
	_anon3 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

struct _anon0
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
	_anon7* anim_ctrl;
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

struct _anon1
{
	float abcd[4];
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

struct _anon2
{
	float start[4];
	float end[4];
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
	float center[4];
	float radius;
};

struct _anon4
{
	float bmin[4];
	float bmax[4];
};

struct EventFlag
{
	unsigned char flag[320];
};

struct _anon5
{
	float mat[4][4];
	float half_w[4];
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
	_anon9 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
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

struct sfCldObject
{
	sgQTObject tree_object;
	sgQTNode* stay_node;
	sfCldPart* parts[6];
	unsigned char n_parts;
	unsigned char pad[3];
	void* data;
};

struct _anon7
{
	int dummy;
};

struct sgQTNode
{
	int dummy;
};

struct _anon8
{
	unsigned long tex0;
	unsigned long clamp;
};

enum _cam3Step : unsigned char
{
	CAM3_STEP_NORMAL,
	CAM3_STEP_AUTOFOCUS,
	CAM3_STEP_RESET,
	CAM3_STEP_STOP
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
	void(*texture_load_func)(_anon8*, int, int, float*);
	int equip_flag;
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

void(*camInitFuncs)()[2];
void(*camera_main_funcs)(sfObj*)[3];
float move_data[8];
_GAME_WORK gamew;
EventFlag event_flag;
float tunnel_time;
int force_rotate;
int eye_reset;
float sg_vector_zero[4];
_cam3Work cam3_work;

void Player3ldkRecoverLife();
float time_to_mov(float ftime);
void move_normal(_anon0* ui_work, float* pos);
void make_sphere(_anon3* sph, float* pos);
void Player3ldkNormalObjConstruct(sfObj* obj);
void Player3ldkGetEyeRot(float* dst);
void Player3ldkSetEyerot(_PLAYER_WORK* player, _player3ldkUiWork* ui);
int Player3ldkGetEyerotResetFlag();
void Player3ldkClearEyerot();
void Player3ldkNormalObj(sfObj* obj);
void Player3ldkNormalObjDestruct();
void Player3ldkNormalObjDraw();
void Player3ldkSetAdvanceOnlyFlag(int flag);
int Player3ldkGetAdvanceOnlyFlag();
void Player3ldkAddRotation(float* rot);
void Player3ldkForceLookAt(float* pos);
int Player3ldkIsForceRotate();
void Player3ldkForceRotateFlagClear();
void Player3ldkGetEyePos(float* dst);

// 
// Start address: 0x15ee40
void Player3ldkRecoverLife()
{
	float rhp;
	// Line 103, Address: 0x15ee40, Func Offset: 0
	// Line 105, Address: 0x15ee44, Func Offset: 0x4
	// Line 103, Address: 0x15ee48, Func Offset: 0x8
	// Line 105, Address: 0x15ee50, Func Offset: 0x10
	// Line 108, Address: 0x15ee60, Func Offset: 0x20
	// Line 110, Address: 0x15ee70, Func Offset: 0x30
	// Line 113, Address: 0x15eea4, Func Offset: 0x64
	// Line 110, Address: 0x15eeac, Func Offset: 0x6c
	// Line 113, Address: 0x15eeb0, Func Offset: 0x70
	// Line 110, Address: 0x15eeb8, Func Offset: 0x78
	// Line 113, Address: 0x15eec4, Func Offset: 0x84
	// Line 114, Address: 0x15eed0, Func Offset: 0x90
	// Line 115, Address: 0x15eed8, Func Offset: 0x98
	// Line 116, Address: 0x15eee4, Func Offset: 0xa4
	// Line 120, Address: 0x15eef0, Func Offset: 0xb0
	// Func End, Address: 0x15ef00, Func Offset: 0xc0
}

// 
// Start address: 0x15ef00
float time_to_mov(float ftime)
{
	float ret;
	int icount;
	float fcount;
	float f0;
	float f1;
	float ftt;
	// Line 145, Address: 0x15ef00, Func Offset: 0
	// Line 142, Address: 0x15ef08, Func Offset: 0x8
	// Line 145, Address: 0x15ef10, Func Offset: 0x10
	// Line 146, Address: 0x15ef20, Func Offset: 0x20
	// Line 147, Address: 0x15ef24, Func Offset: 0x24
	// Line 151, Address: 0x15ef30, Func Offset: 0x30
	// Line 152, Address: 0x15ef3c, Func Offset: 0x3c
	// Line 151, Address: 0x15ef40, Func Offset: 0x40
	// Line 152, Address: 0x15ef44, Func Offset: 0x44
	// Line 153, Address: 0x15ef48, Func Offset: 0x48
	// Line 152, Address: 0x15ef4c, Func Offset: 0x4c
	// Line 151, Address: 0x15ef50, Func Offset: 0x50
	// Line 152, Address: 0x15ef54, Func Offset: 0x54
	// Line 153, Address: 0x15ef58, Func Offset: 0x58
	// Line 154, Address: 0x15ef64, Func Offset: 0x64
	// Line 153, Address: 0x15ef70, Func Offset: 0x70
	// Line 154, Address: 0x15ef74, Func Offset: 0x74
	// Line 155, Address: 0x15ef80, Func Offset: 0x80
	// Line 156, Address: 0x15ef88, Func Offset: 0x88
	// Line 160, Address: 0x15efa0, Func Offset: 0xa0
	// Func End, Address: 0x15efa8, Func Offset: 0xa8
}

// 
// Start address: 0x15efb0
void move_normal(_anon0* ui_work, float* pos)
{
	_PLAYER_WORK* p;
	float move;
	float mult;
	// Line 164, Address: 0x15efb0, Func Offset: 0
	// Line 165, Address: 0x15efb4, Func Offset: 0x4
	// Line 164, Address: 0x15efb8, Func Offset: 0x8
	// Line 165, Address: 0x15efd0, Func Offset: 0x20
	// Line 171, Address: 0x15efd4, Func Offset: 0x24
	// Line 189, Address: 0x15efe8, Func Offset: 0x38
	// Line 190, Address: 0x15f000, Func Offset: 0x50
	// Line 191, Address: 0x15f008, Func Offset: 0x58
	// Line 192, Address: 0x15f00c, Func Offset: 0x5c
	// Line 193, Address: 0x15f014, Func Offset: 0x64
	// Line 194, Address: 0x15f018, Func Offset: 0x68
	// Line 195, Address: 0x15f040, Func Offset: 0x90
	// Line 194, Address: 0x15f048, Func Offset: 0x98
	// Line 195, Address: 0x15f04c, Func Offset: 0x9c
	// Line 196, Address: 0x15f064, Func Offset: 0xb4
	// Line 197, Address: 0x15f070, Func Offset: 0xc0
	// Line 196, Address: 0x15f074, Func Offset: 0xc4
	// Line 197, Address: 0x15f078, Func Offset: 0xc8
	// Line 196, Address: 0x15f07c, Func Offset: 0xcc
	// Line 197, Address: 0x15f088, Func Offset: 0xd8
	// Line 198, Address: 0x15f09c, Func Offset: 0xec
	// Line 199, Address: 0x15f0a8, Func Offset: 0xf8
	// Line 200, Address: 0x15f0b4, Func Offset: 0x104
	// Line 202, Address: 0x15f0e8, Func Offset: 0x138
	// Line 203, Address: 0x15f104, Func Offset: 0x154
	// Line 205, Address: 0x15f110, Func Offset: 0x160
	// Line 203, Address: 0x15f114, Func Offset: 0x164
	// Line 205, Address: 0x15f118, Func Offset: 0x168
	// Line 203, Address: 0x15f11c, Func Offset: 0x16c
	// Line 204, Address: 0x15f124, Func Offset: 0x174
	// Line 205, Address: 0x15f128, Func Offset: 0x178
	// Line 204, Address: 0x15f130, Func Offset: 0x180
	// Line 205, Address: 0x15f134, Func Offset: 0x184
	// Line 206, Address: 0x15f144, Func Offset: 0x194
	// Line 207, Address: 0x15f14c, Func Offset: 0x19c
	// Line 208, Address: 0x15f150, Func Offset: 0x1a0
	// Line 211, Address: 0x15f158, Func Offset: 0x1a8
	// Line 212, Address: 0x15f168, Func Offset: 0x1b8
	// Line 214, Address: 0x15f174, Func Offset: 0x1c4
	// Line 215, Address: 0x15f190, Func Offset: 0x1e0
	// Line 217, Address: 0x15f198, Func Offset: 0x1e8
	// Line 222, Address: 0x15f1a0, Func Offset: 0x1f0
	// Line 224, Address: 0x15f1d0, Func Offset: 0x220
	// Line 225, Address: 0x15f1ec, Func Offset: 0x23c
	// Line 233, Address: 0x15f1f8, Func Offset: 0x248
	// Line 225, Address: 0x15f1fc, Func Offset: 0x24c
	// Line 233, Address: 0x15f208, Func Offset: 0x258
	// Line 235, Address: 0x15f250, Func Offset: 0x2a0
	// Line 236, Address: 0x15f26c, Func Offset: 0x2bc
	// Line 235, Address: 0x15f270, Func Offset: 0x2c0
	// Line 236, Address: 0x15f274, Func Offset: 0x2c4
	// Line 235, Address: 0x15f278, Func Offset: 0x2c8
	// Line 236, Address: 0x15f280, Func Offset: 0x2d0
	// Line 238, Address: 0x15f2a0, Func Offset: 0x2f0
	// Line 242, Address: 0x15f2a8, Func Offset: 0x2f8
	// Func End, Address: 0x15f2c4, Func Offset: 0x314
}

// 
// Start address: 0x15f2d0
void make_sphere(_anon3* sph, float* pos)
{
	// Line 284, Address: 0x15f2d0, Func Offset: 0
	// Line 285, Address: 0x15f2d4, Func Offset: 0x4
	// Line 288, Address: 0x15f2dc, Func Offset: 0xc
	// Line 284, Address: 0x15f2e0, Func Offset: 0x10
	// Line 285, Address: 0x15f2e4, Func Offset: 0x14
	// Line 286, Address: 0x15f2f0, Func Offset: 0x20
	// Line 291, Address: 0x15f2f8, Func Offset: 0x28
	// Func End, Address: 0x15f300, Func Offset: 0x30
}

// 
// Start address: 0x15f300
void Player3ldkNormalObjConstruct(sfObj* obj)
{
	_PLAYER_WORK* p;
	int hit;
	_anon1 plane;
	_anon2 line;
	float tmp[4];
	// Line 294, Address: 0x15f300, Func Offset: 0
	// Line 295, Address: 0x15f304, Func Offset: 0x4
	// Line 294, Address: 0x15f308, Func Offset: 0x8
	// Line 298, Address: 0x15f30c, Func Offset: 0xc
	// Line 294, Address: 0x15f310, Func Offset: 0x10
	// Line 295, Address: 0x15f318, Func Offset: 0x18
	// Line 298, Address: 0x15f324, Func Offset: 0x24
	// Line 299, Address: 0x15f330, Func Offset: 0x30
	// Line 298, Address: 0x15f334, Func Offset: 0x34
	// Line 299, Address: 0x15f338, Func Offset: 0x38
	// Line 300, Address: 0x15f340, Func Offset: 0x40
	// Line 301, Address: 0x15f348, Func Offset: 0x48
	// Line 302, Address: 0x15f350, Func Offset: 0x50
	// Line 307, Address: 0x15f358, Func Offset: 0x58
	// Line 309, Address: 0x15f364, Func Offset: 0x64
	// Line 310, Address: 0x15f36c, Func Offset: 0x6c
	// Line 311, Address: 0x15f374, Func Offset: 0x74
	// Line 314, Address: 0x15f384, Func Offset: 0x84
	// Line 316, Address: 0x15f3a0, Func Offset: 0xa0
	// Line 318, Address: 0x15f3ac, Func Offset: 0xac
	// Line 316, Address: 0x15f3b0, Func Offset: 0xb0
	// Line 320, Address: 0x15f3b8, Func Offset: 0xb8
	// Line 322, Address: 0x15f3c4, Func Offset: 0xc4
	// Line 323, Address: 0x15f3c8, Func Offset: 0xc8
	// Line 324, Address: 0x15f3d0, Func Offset: 0xd0
	// Line 325, Address: 0x15f3d8, Func Offset: 0xd8
	// Line 336, Address: 0x15f3e8, Func Offset: 0xe8
	// Line 346, Address: 0x15f3f0, Func Offset: 0xf0
	// Line 347, Address: 0x15f3fc, Func Offset: 0xfc
	// Line 350, Address: 0x15f408, Func Offset: 0x108
	// Line 348, Address: 0x15f40c, Func Offset: 0x10c
	// Line 349, Address: 0x15f418, Func Offset: 0x118
	// Line 348, Address: 0x15f424, Func Offset: 0x124
	// Line 349, Address: 0x15f428, Func Offset: 0x128
	// Line 348, Address: 0x15f42c, Func Offset: 0x12c
	// Line 350, Address: 0x15f430, Func Offset: 0x130
	// Line 351, Address: 0x15f438, Func Offset: 0x138
	// Line 352, Address: 0x15f440, Func Offset: 0x140
	// Line 353, Address: 0x15f44c, Func Offset: 0x14c
	// Line 354, Address: 0x15f460, Func Offset: 0x160
	// Line 356, Address: 0x15f468, Func Offset: 0x168
	// Line 363, Address: 0x15f470, Func Offset: 0x170
	// Line 366, Address: 0x15f478, Func Offset: 0x178
	// Line 372, Address: 0x15f488, Func Offset: 0x188
	// Line 375, Address: 0x15f490, Func Offset: 0x190
	// Line 378, Address: 0x15f498, Func Offset: 0x198
	// Line 379, Address: 0x15f49c, Func Offset: 0x19c
	// Line 380, Address: 0x15f4a0, Func Offset: 0x1a0
	// Line 381, Address: 0x15f4a4, Func Offset: 0x1a4
	// Line 382, Address: 0x15f4a8, Func Offset: 0x1a8
	// Line 383, Address: 0x15f4ac, Func Offset: 0x1ac
	// Line 384, Address: 0x15f4b0, Func Offset: 0x1b0
	// Line 386, Address: 0x15f4b4, Func Offset: 0x1b4
	// Line 387, Address: 0x15f4bc, Func Offset: 0x1bc
	// Line 388, Address: 0x15f4c4, Func Offset: 0x1c4
	// Line 389, Address: 0x15f4cc, Func Offset: 0x1cc
	// Line 390, Address: 0x15f4d4, Func Offset: 0x1d4
	// Line 393, Address: 0x15f4dc, Func Offset: 0x1dc
	// Line 394, Address: 0x15f4e0, Func Offset: 0x1e0
	// Line 395, Address: 0x15f4e4, Func Offset: 0x1e4
	// Line 397, Address: 0x15f4e8, Func Offset: 0x1e8
	// Line 398, Address: 0x15f4f0, Func Offset: 0x1f0
	// Line 399, Address: 0x15f4f8, Func Offset: 0x1f8
	// Line 400, Address: 0x15f500, Func Offset: 0x200
	// Line 401, Address: 0x15f508, Func Offset: 0x208
	// Line 404, Address: 0x15f510, Func Offset: 0x210
	// Line 407, Address: 0x15f518, Func Offset: 0x218
	// Line 408, Address: 0x15f52c, Func Offset: 0x22c
	// Line 409, Address: 0x15f534, Func Offset: 0x234
	// Line 411, Address: 0x15f540, Func Offset: 0x240
	// Line 414, Address: 0x15f548, Func Offset: 0x248
	// Line 415, Address: 0x15f550, Func Offset: 0x250
	// Line 419, Address: 0x15f558, Func Offset: 0x258
	// Func End, Address: 0x15f56c, Func Offset: 0x26c
}

// 
// Start address: 0x15f570
void Player3ldkGetEyeRot(float* dst)
{
	_PLAYER_WORK* player;
	_player3ldkUiWork* ui;
	_anon0* a_ui;
	float tv[4];
	float tfx;
	float tfy;
	// Line 423, Address: 0x15f570, Func Offset: 0
	// Line 424, Address: 0x15f574, Func Offset: 0x4
	// Line 423, Address: 0x15f578, Func Offset: 0x8
	// Line 424, Address: 0x15f58c, Func Offset: 0x1c
	// Line 425, Address: 0x15f590, Func Offset: 0x20
	// Line 426, Address: 0x15f59c, Func Offset: 0x2c
	// Line 429, Address: 0x15f5a4, Func Offset: 0x34
	// Line 432, Address: 0x15f5b8, Func Offset: 0x48
	// Line 433, Address: 0x15f5e0, Func Offset: 0x70
	// Line 434, Address: 0x15f5e4, Func Offset: 0x74
	// Line 437, Address: 0x15f600, Func Offset: 0x90
	// Line 434, Address: 0x15f608, Func Offset: 0x98
	// Line 437, Address: 0x15f614, Func Offset: 0xa4
	// Line 440, Address: 0x15f644, Func Offset: 0xd4
	// Line 443, Address: 0x15f650, Func Offset: 0xe0
	// Line 446, Address: 0x15f654, Func Offset: 0xe4
	// Line 443, Address: 0x15f658, Func Offset: 0xe8
	// Line 446, Address: 0x15f65c, Func Offset: 0xec
	// Line 443, Address: 0x15f660, Func Offset: 0xf0
	// Line 446, Address: 0x15f664, Func Offset: 0xf4
	// Line 447, Address: 0x15f670, Func Offset: 0x100
	// Line 448, Address: 0x15f684, Func Offset: 0x114
	// Line 453, Address: 0x15f688, Func Offset: 0x118
	// Line 454, Address: 0x15f6a0, Func Offset: 0x130
	// Line 455, Address: 0x15f6bc, Func Offset: 0x14c
	// Line 457, Address: 0x15f6c8, Func Offset: 0x158
	// Line 458, Address: 0x15f6cc, Func Offset: 0x15c
	// Line 461, Address: 0x15f6d0, Func Offset: 0x160
	// Line 462, Address: 0x15f6d4, Func Offset: 0x164
	// Line 461, Address: 0x15f6dc, Func Offset: 0x16c
	// Line 462, Address: 0x15f6e0, Func Offset: 0x170
	// Line 463, Address: 0x15f6f0, Func Offset: 0x180
	// Line 464, Address: 0x15f6fc, Func Offset: 0x18c
	// Line 467, Address: 0x15f700, Func Offset: 0x190
	// Line 465, Address: 0x15f704, Func Offset: 0x194
	// Line 467, Address: 0x15f718, Func Offset: 0x1a8
	// Line 469, Address: 0x15f72c, Func Offset: 0x1bc
	// Line 470, Address: 0x15f74c, Func Offset: 0x1dc
	// Line 471, Address: 0x15f750, Func Offset: 0x1e0
	// Line 472, Address: 0x15f768, Func Offset: 0x1f8
	// Line 473, Address: 0x15f788, Func Offset: 0x218
	// Line 477, Address: 0x15f790, Func Offset: 0x220
	// Line 478, Address: 0x15f798, Func Offset: 0x228
	// Line 479, Address: 0x15f7b4, Func Offset: 0x244
	// Line 480, Address: 0x15f7b8, Func Offset: 0x248
	// Line 481, Address: 0x15f7d0, Func Offset: 0x260
	// Line 482, Address: 0x15f7e8, Func Offset: 0x278
	// Line 484, Address: 0x15f7f0, Func Offset: 0x280
	// Line 487, Address: 0x15f7f4, Func Offset: 0x284
	// Line 488, Address: 0x15f7f8, Func Offset: 0x288
	// Func End, Address: 0x15f814, Func Offset: 0x2a4
}

// 
// Start address: 0x15f820
void Player3ldkSetEyerot(_PLAYER_WORK* player, _player3ldkUiWork* ui)
{
	float dst[4];
	// Line 492, Address: 0x15f820, Func Offset: 0
	// Line 496, Address: 0x15f824, Func Offset: 0x4
	// Line 492, Address: 0x15f828, Func Offset: 0x8
	// Line 496, Address: 0x15f830, Func Offset: 0x10
	// Line 497, Address: 0x15f850, Func Offset: 0x30
	// Line 498, Address: 0x15f85c, Func Offset: 0x3c
	// Line 500, Address: 0x15f860, Func Offset: 0x40
	// Line 501, Address: 0x15f870, Func Offset: 0x50
	// Line 502, Address: 0x15f874, Func Offset: 0x54
	// Line 504, Address: 0x15f878, Func Offset: 0x58
	// Line 505, Address: 0x15f888, Func Offset: 0x68
	// Line 510, Address: 0x15f894, Func Offset: 0x74
	// Line 509, Address: 0x15f898, Func Offset: 0x78
	// Line 510, Address: 0x15f8a8, Func Offset: 0x88
	// Line 511, Address: 0x15f8b0, Func Offset: 0x90
	// Func End, Address: 0x15f8c0, Func Offset: 0xa0
}

// 
// Start address: 0x15f8c0
int Player3ldkGetEyerotResetFlag()
{
	// Line 522, Address: 0x15f8c0, Func Offset: 0
	// Line 523, Address: 0x15f8c4, Func Offset: 0x4
	// Func End, Address: 0x15f8cc, Func Offset: 0xc
}

// 
// Start address: 0x15f8d0
void Player3ldkClearEyerot()
{
	_PLAYER_WORK* p;
	// Line 527, Address: 0x15f8d0, Func Offset: 0
	// Line 530, Address: 0x15f8d8, Func Offset: 0x8
	// Func End, Address: 0x15f8e0, Func Offset: 0x10
}

// 
// Start address: 0x15f8e0
void Player3ldkNormalObj(sfObj* obj)
{
	_PLAYER_WORK* p;
	_anon0* ui_work;
	_player3ldkUiWork* p3ldk_ui_work;
	float pos[4];
	float pos_r[4];
	float pos_z[4];
	_anon3 sph;
	// Line 534, Address: 0x15f8e0, Func Offset: 0
	// Line 535, Address: 0x15f8e4, Func Offset: 0x4
	// Line 534, Address: 0x15f8e8, Func Offset: 0x8
	// Line 535, Address: 0x15f900, Func Offset: 0x20
	// Line 542, Address: 0x15f904, Func Offset: 0x24
	// Line 543, Address: 0x15f90c, Func Offset: 0x2c
	// Line 546, Address: 0x15f914, Func Offset: 0x34
	// Line 547, Address: 0x15f92c, Func Offset: 0x4c
	// Line 550, Address: 0x15f948, Func Offset: 0x68
	// Line 552, Address: 0x15f950, Func Offset: 0x70
	// Line 553, Address: 0x15f964, Func Offset: 0x84
	// Line 554, Address: 0x15f970, Func Offset: 0x90
	// Line 553, Address: 0x15f978, Func Offset: 0x98
	// Line 554, Address: 0x15f97c, Func Offset: 0x9c
	// Line 555, Address: 0x15f988, Func Offset: 0xa8
	// Line 557, Address: 0x15f98c, Func Offset: 0xac
	// Line 561, Address: 0x15f990, Func Offset: 0xb0
	// Line 562, Address: 0x15f998, Func Offset: 0xb8
	// Line 563, Address: 0x15f9a0, Func Offset: 0xc0
	// Line 564, Address: 0x15f9a8, Func Offset: 0xc8
	// Line 570, Address: 0x15f9b0, Func Offset: 0xd0
	// Line 572, Address: 0x15f9dc, Func Offset: 0xfc
	// Line 573, Address: 0x15f9e4, Func Offset: 0x104
	// Line 576, Address: 0x15f9f0, Func Offset: 0x110
	// Line 577, Address: 0x15f9fc, Func Offset: 0x11c
	// Line 582, Address: 0x15fa00, Func Offset: 0x120
	// Line 585, Address: 0x15fa30, Func Offset: 0x150
	// Line 590, Address: 0x15fa40, Func Offset: 0x160
	// Line 593, Address: 0x15fa4c, Func Offset: 0x16c
	// Line 594, Address: 0x15fa58, Func Offset: 0x178
	// Line 595, Address: 0x15fa60, Func Offset: 0x180
	// Line 596, Address: 0x15fa68, Func Offset: 0x188
	// Line 605, Address: 0x15fa84, Func Offset: 0x1a4
	// Line 606, Address: 0x15fa8c, Func Offset: 0x1ac
	// Line 607, Address: 0x15fa98, Func Offset: 0x1b8
	// Line 608, Address: 0x15faa4, Func Offset: 0x1c4
	// Line 607, Address: 0x15faa8, Func Offset: 0x1c8
	// Line 608, Address: 0x15fab4, Func Offset: 0x1d4
	// Line 609, Address: 0x15fabc, Func Offset: 0x1dc
	// Line 610, Address: 0x15fac4, Func Offset: 0x1e4
	// Line 628, Address: 0x15facc, Func Offset: 0x1ec
	// Line 630, Address: 0x15fad0, Func Offset: 0x1f0
	// Line 634, Address: 0x15fad8, Func Offset: 0x1f8
	// Line 651, Address: 0x15fadc, Func Offset: 0x1fc
	// Line 654, Address: 0x15fae4, Func Offset: 0x204
	// Line 656, Address: 0x15fb08, Func Offset: 0x228
	// Line 660, Address: 0x15fb10, Func Offset: 0x230
	// Line 663, Address: 0x15fb18, Func Offset: 0x238
	// Func End, Address: 0x15fb34, Func Offset: 0x254
}

// 
// Start address: 0x15fb40
void Player3ldkNormalObjDestruct()
{
	// Line 669, Address: 0x15fb40, Func Offset: 0
	// Func End, Address: 0x15fb48, Func Offset: 0x8
}

// 
// Start address: 0x15fb50
void Player3ldkNormalObjDraw()
{
	// Line 741, Address: 0x15fb50, Func Offset: 0
	// Func End, Address: 0x15fb58, Func Offset: 0x8
}

// 
// Start address: 0x15fb60
void Player3ldkSetAdvanceOnlyFlag(int flag)
{
	// Line 747, Address: 0x15fb60, Func Offset: 0
	// Line 748, Address: 0x15fb68, Func Offset: 0x8
	// Func End, Address: 0x15fb70, Func Offset: 0x10
}

// 
// Start address: 0x15fb70
int Player3ldkGetAdvanceOnlyFlag()
{
	// Line 754, Address: 0x15fb70, Func Offset: 0
	// Line 755, Address: 0x15fb78, Func Offset: 0x8
	// Func End, Address: 0x15fb80, Func Offset: 0x10
}

// 
// Start address: 0x15fb80
void Player3ldkAddRotation(float* rot)
{
	_PLAYER_WORK* player;
	// Line 768, Address: 0x15fb80, Func Offset: 0
	// Line 769, Address: 0x15fb88, Func Offset: 0x8
	// Line 770, Address: 0x15fb94, Func Offset: 0x14
	// Line 772, Address: 0x15fba8, Func Offset: 0x28
	// Line 773, Address: 0x15fbb0, Func Offset: 0x30
	// Func End, Address: 0x15fbb8, Func Offset: 0x38
}

// 
// Start address: 0x15fbc0
void Player3ldkForceLookAt(float* pos)
{
	_PLAYER_WORK* player;
	float camRot[4];
	// Line 777, Address: 0x15fbc0, Func Offset: 0
	// Line 778, Address: 0x15fbc4, Func Offset: 0x4
	// Line 777, Address: 0x15fbc8, Func Offset: 0x8
	// Line 781, Address: 0x15fbd0, Func Offset: 0x10
	// Line 782, Address: 0x15fbd8, Func Offset: 0x18
	// Line 784, Address: 0x15fbec, Func Offset: 0x2c
	// Line 785, Address: 0x15fbf4, Func Offset: 0x34
	// Line 786, Address: 0x15fbf8, Func Offset: 0x38
	// Line 787, Address: 0x15fc00, Func Offset: 0x40
	// Line 788, Address: 0x15fc0c, Func Offset: 0x4c
	// Func End, Address: 0x15fc1c, Func Offset: 0x5c
}

// 
// Start address: 0x15fc20
int Player3ldkIsForceRotate()
{
	// Line 793, Address: 0x15fc20, Func Offset: 0
	// Line 794, Address: 0x15fc24, Func Offset: 0x4
	// Func End, Address: 0x15fc2c, Func Offset: 0xc
}

// 
// Start address: 0x15fc30
void Player3ldkForceRotateFlagClear()
{
	// Line 798, Address: 0x15fc30, Func Offset: 0
	// Line 799, Address: 0x15fc34, Func Offset: 0x4
	// Func End, Address: 0x15fc3c, Func Offset: 0xc
}

// 
// Start address: 0x15fc40
void Player3ldkGetEyePos(float* dst)
{
	_PLAYER_WORK* player;
	// Line 803, Address: 0x15fc40, Func Offset: 0
	// Line 804, Address: 0x15fc4c, Func Offset: 0xc
	// Line 806, Address: 0x15fc54, Func Offset: 0x14
	// Line 807, Address: 0x15fc5c, Func Offset: 0x1c
	// Line 809, Address: 0x15fc64, Func Offset: 0x24
	// Func End, Address: 0x15fc74, Func Offset: 0x34
}

