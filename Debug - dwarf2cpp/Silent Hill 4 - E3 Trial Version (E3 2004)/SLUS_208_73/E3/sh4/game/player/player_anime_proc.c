typedef struct sfCldObject;
typedef struct sgIKHandle;
typedef struct _anon0;
typedef struct sgQTNode;
typedef struct sfCldPart;
typedef struct sgBone;
typedef struct _PLAYER_WORK;
typedef struct sgSVModel;
typedef struct sfCharacter;
typedef struct sgAnime;
typedef struct sfObj;
typedef struct _anon1;
typedef struct _anon2;
typedef struct sgQTObject;
typedef struct sfOffsetAABB;
typedef union sfCldBody;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef union _anon9;
typedef enum GameItem : unsigned char;
typedef struct _GAME_WORK;
typedef enum sgIKSolveResult : unsigned char;

typedef sgIKSolveResult(*type_5)();
typedef void(*type_10)(_anon1*, int, int, float*);
typedef void(*type_13)(sgAnime*, int);
typedef void(*type_26)(sfObj*);
typedef void(*type_38)(sfObj*);

typedef float type_0[4][2];
typedef sfCldPart* type_1[6];
typedef _anon0 type_2[10];
typedef unsigned char type_3[3];
typedef float type_4[4][4];
typedef _anon0* type_6[38];
typedef _anon0 type_7[10];
typedef _anon0 type_8[10];
typedef float type_9[4];
typedef _anon0 type_11[10];
typedef void* type_12[4];
typedef _anon0 type_14[10];
typedef unsigned char type_15[3];
typedef int type_16[1];
typedef _anon0 type_17[10];
typedef int type_18[1];
typedef unsigned char type_19[4];
typedef _anon0 type_20[10];
typedef int type_21[1];
typedef float type_22[4];
typedef _anon0 type_23[10];
typedef int type_24[1];
typedef _anon9 type_25[256];
typedef int type_27[1];
typedef _anon0 type_28[124];
typedef _anon0 type_29[10];
typedef int type_30[1];
typedef short type_31[2];
typedef float type_32[4];
typedef unsigned short type_33[2];
typedef _anon0 type_34[10];
typedef char type_35[4];
typedef unsigned char type_36[4];
typedef int type_37[1];
typedef float type_39[1];
typedef int type_40[1];

struct sfCldObject
{
	sgQTObject tree_object;
	sgQTNode* stay_node;
	sfCldPart* parts[6];
	unsigned char n_parts;
	unsigned char pad[3];
	void* data;
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

struct _anon0
{
	int motion_id;
	float speed;
	float blend_time;
	int link;
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

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
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

struct sfObj
{
	_anon9 fwork[256];
	_anon9* work;
	void(*func)(sfObj*);
	_anon9* work_pt0;
	_anon9* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon9* sys_work;
	_anon9* scene_work;
	_anon9* event_work;
	_anon9* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
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

struct sgQTObject
{
	_anon6 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

struct sfOffsetAABB
{
	_anon7 aabb;
	float offset[4];
};

union sfCldBody
{
	_anon8 obb;
	_anon7 aabb;
	sfOffsetAABB offset_aabb;
	_anon5 line;
	_anon6 sphere;
};

struct _anon3
{
	int dummy;
};

struct _anon4
{
	sgAnime* out_anime;
	sgAnime* base_anime;
	sgAnime* target_anime;
	float blend_ratio;
	float blend_speed;
	float play_speed_ratio;
	int flag;
};

struct _anon5
{
	float start[4];
	float end[4];
};

struct _anon6
{
	float center[4];
	float radius;
};

struct _anon7
{
	float bmin[4];
	float bmax[4];
};

struct _anon8
{
	float mat[4][4];
	float half_w[4];
};

union _anon9
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

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

_anon0 motion_normal[124];
_anon0 motion_handgun[10];
_anon0 motion_ax[10];
_anon0 motion_pipe[10];
_anon0 motion_cutter[10];
_anon0 motion_stun[10];
_anon0 motion_spray[10];
_anon0 motion_chain[10];
_anon0 motion_scoop[10];
_anon0 motion_pick[10];
_anon0 motion_bottle_broken[10];
_anon0* motion_battle[38];
_GAME_WORK gamew;

int get_anim_id(int process);
float get_anim_speed(int process);
float PlayerAnimeGetSpeed(int process);
float get_blend_time(int process);
void PlayerAnimeSetStart(_PLAYER_WORK* p, int process);
void anime_set_next(_PLAYER_WORK* p, int process, int subprocess);
void PlayerAnimeSetNext(_PLAYER_WORK* p, int process);
void PlayerAnimeSetNextSub(_PLAYER_WORK* p, int process, int subprocess);
void PlayerAnimeSetNextLinkMode(_PLAYER_WORK* p, int process, int subprocess, float ratio);
void PlayerAnimeProceed(_PLAYER_WORK* p);
int PlayerAnimeGetEnd(_PLAYER_WORK* p);
int PlayerAnimeOverByRatio(_PLAYER_WORK* p, float ratio);

// 
// Start address: 0x1bf9e0
int get_anim_id(int process)
{
	_PLAYER_WORK* p;
	int ret;
	// Line 42, Address: 0x1bf9e0, Func Offset: 0
	// Line 45, Address: 0x1bf9e4, Func Offset: 0x4
	// Line 48, Address: 0x1bf9fc, Func Offset: 0x1c
	// Line 49, Address: 0x1bfa24, Func Offset: 0x44
	// Line 51, Address: 0x1bfa30, Func Offset: 0x50
	// Line 52, Address: 0x1bfa44, Func Offset: 0x64
	// Line 55, Address: 0x1bfa48, Func Offset: 0x68
	// Func End, Address: 0x1bfa50, Func Offset: 0x70
}

// 
// Start address: 0x1bfa50
float get_anim_speed(int process)
{
	_PLAYER_WORK* p;
	float ret;
	// Line 78, Address: 0x1bfa50, Func Offset: 0
	// Line 81, Address: 0x1bfa54, Func Offset: 0x4
	// Line 88, Address: 0x1bfa6c, Func Offset: 0x1c
	// Line 90, Address: 0x1bfa94, Func Offset: 0x44
	// Line 92, Address: 0x1bfaa0, Func Offset: 0x50
	// Line 93, Address: 0x1bfab4, Func Offset: 0x64
	// Line 96, Address: 0x1bfab8, Func Offset: 0x68
	// Func End, Address: 0x1bfac0, Func Offset: 0x70
}

// 
// Start address: 0x1bfac0
float PlayerAnimeGetSpeed(int process)
{
	// Line 101, Address: 0x1bfac0, Func Offset: 0
	// Func End, Address: 0x1bfac8, Func Offset: 0x8
}

// 
// Start address: 0x1bfad0
float get_blend_time(int process)
{
	_PLAYER_WORK* p;
	float ret;
	// Line 107, Address: 0x1bfad0, Func Offset: 0
	// Line 110, Address: 0x1bfad4, Func Offset: 0x4
	// Line 117, Address: 0x1bfaec, Func Offset: 0x1c
	// Line 120, Address: 0x1bfb14, Func Offset: 0x44
	// Line 122, Address: 0x1bfb20, Func Offset: 0x50
	// Line 123, Address: 0x1bfb34, Func Offset: 0x64
	// Line 126, Address: 0x1bfb38, Func Offset: 0x68
	// Func End, Address: 0x1bfb40, Func Offset: 0x70
}

// 
// Start address: 0x1bfb40
void PlayerAnimeSetStart(_PLAYER_WORK* p, int process)
{
	int id;
	// Line 129, Address: 0x1bfb40, Func Offset: 0
	// Line 130, Address: 0x1bfb58, Func Offset: 0x18
	// Line 131, Address: 0x1bfb64, Func Offset: 0x24
	// Line 133, Address: 0x1bfb70, Func Offset: 0x30
	// Line 135, Address: 0x1bfb84, Func Offset: 0x44
	// Line 137, Address: 0x1bfba0, Func Offset: 0x60
	// Line 139, Address: 0x1bfbb0, Func Offset: 0x70
	// Line 140, Address: 0x1bfbb8, Func Offset: 0x78
	// Line 141, Address: 0x1bfbbc, Func Offset: 0x7c
	// Line 151, Address: 0x1bfbc0, Func Offset: 0x80
	// Func End, Address: 0x1bfbd8, Func Offset: 0x98
}

// 
// Start address: 0x1bfbe0
void anime_set_next(_PLAYER_WORK* p, int process, int subprocess)
{
	int id;
	sgAnime* fanim;
	int tim;
	// Line 154, Address: 0x1bfbe0, Func Offset: 0
	// Line 167, Address: 0x1bfc00, Func Offset: 0x20
	// Line 154, Address: 0x1bfc04, Func Offset: 0x24
	// Line 167, Address: 0x1bfc08, Func Offset: 0x28
	// Line 168, Address: 0x1bfc10, Func Offset: 0x30
	// Line 169, Address: 0x1bfc18, Func Offset: 0x38
	// Line 174, Address: 0x1bfc48, Func Offset: 0x68
	// Line 175, Address: 0x1bfc50, Func Offset: 0x70
	// Line 181, Address: 0x1bfc80, Func Offset: 0xa0
	// Line 184, Address: 0x1bfc8c, Func Offset: 0xac
	// Line 190, Address: 0x1bfcbc, Func Offset: 0xdc
	// Line 191, Address: 0x1bfcc4, Func Offset: 0xe4
	// Line 198, Address: 0x1bfcf4, Func Offset: 0x114
	// Line 203, Address: 0x1bfd00, Func Offset: 0x120
	// Line 204, Address: 0x1bfd0c, Func Offset: 0x12c
	// Line 205, Address: 0x1bfd14, Func Offset: 0x134
	// Line 206, Address: 0x1bfd20, Func Offset: 0x140
	// Line 212, Address: 0x1bfd50, Func Offset: 0x170
	// Line 213, Address: 0x1bfd5c, Func Offset: 0x17c
	// Line 217, Address: 0x1bfd68, Func Offset: 0x188
	// Line 220, Address: 0x1bfd70, Func Offset: 0x190
	// Line 221, Address: 0x1bfd78, Func Offset: 0x198
	// Line 223, Address: 0x1bfd90, Func Offset: 0x1b0
	// Line 224, Address: 0x1bfd94, Func Offset: 0x1b4
	// Line 227, Address: 0x1bfd98, Func Offset: 0x1b8
	// Line 230, Address: 0x1bfdb0, Func Offset: 0x1d0
	// Line 231, Address: 0x1bfdc4, Func Offset: 0x1e4
	// Line 232, Address: 0x1bfdd0, Func Offset: 0x1f0
	// Line 236, Address: 0x1bfdf4, Func Offset: 0x214
	// Line 237, Address: 0x1bfe08, Func Offset: 0x228
	// Line 238, Address: 0x1bfe10, Func Offset: 0x230
	// Line 239, Address: 0x1bfe2c, Func Offset: 0x24c
	// Line 246, Address: 0x1bfe40, Func Offset: 0x260
	// Line 247, Address: 0x1bfe44, Func Offset: 0x264
	// Line 248, Address: 0x1bfe48, Func Offset: 0x268
	// Line 249, Address: 0x1bfe58, Func Offset: 0x278
	// Line 252, Address: 0x1bfe60, Func Offset: 0x280
	// Func End, Address: 0x1bfe80, Func Offset: 0x2a0
}

// 
// Start address: 0x1bfe80
void PlayerAnimeSetNext(_PLAYER_WORK* p, int process)
{
	// Line 256, Address: 0x1bfe80, Func Offset: 0
	// Line 260, Address: 0x1bfe88, Func Offset: 0x8
	// Line 263, Address: 0x1bfe94, Func Offset: 0x14
	// Line 270, Address: 0x1bfea0, Func Offset: 0x20
	// Line 273, Address: 0x1bfea8, Func Offset: 0x28
	// Func End, Address: 0x1bfeb4, Func Offset: 0x34
}

// 
// Start address: 0x1bfec0
void PlayerAnimeSetNextSub(_PLAYER_WORK* p, int process, int subprocess)
{
	// Line 278, Address: 0x1bfec0, Func Offset: 0
	// Line 282, Address: 0x1bfec8, Func Offset: 0x8
	// Line 285, Address: 0x1bfee0, Func Offset: 0x20
	// Line 292, Address: 0x1bfeec, Func Offset: 0x2c
	// Line 294, Address: 0x1bfef4, Func Offset: 0x34
	// Line 295, Address: 0x1bfef8, Func Offset: 0x38
	// Func End, Address: 0x1bff04, Func Offset: 0x44
}

// 
// Start address: 0x1bff10
void PlayerAnimeSetNextLinkMode(_PLAYER_WORK* p, int process, int subprocess, float ratio)
{
	_anon4* mixer;
	sgBone* b;
	// Line 300, Address: 0x1bff10, Func Offset: 0
	// Line 304, Address: 0x1bff38, Func Offset: 0x28
	// Line 305, Address: 0x1bff50, Func Offset: 0x40
	// Line 306, Address: 0x1bff5c, Func Offset: 0x4c
	// Line 307, Address: 0x1bff68, Func Offset: 0x58
	// Line 313, Address: 0x1bff70, Func Offset: 0x60
	// Line 314, Address: 0x1bff7c, Func Offset: 0x6c
	// Line 317, Address: 0x1bff88, Func Offset: 0x78
	// Line 318, Address: 0x1bff90, Func Offset: 0x80
	// Line 322, Address: 0x1bffc8, Func Offset: 0xb8
	// Line 324, Address: 0x1bffcc, Func Offset: 0xbc
	// Line 325, Address: 0x1bffd8, Func Offset: 0xc8
	// Line 328, Address: 0x1bffe4, Func Offset: 0xd4
	// Line 333, Address: 0x1c0000, Func Offset: 0xf0
	// Line 334, Address: 0x1c001c, Func Offset: 0x10c
	// Line 338, Address: 0x1c0030, Func Offset: 0x120
	// Line 339, Address: 0x1c0034, Func Offset: 0x124
	// Line 343, Address: 0x1c0038, Func Offset: 0x128
	// Line 345, Address: 0x1c0044, Func Offset: 0x134
	// Line 347, Address: 0x1c004c, Func Offset: 0x13c
	// Line 348, Address: 0x1c0050, Func Offset: 0x140
	// Func End, Address: 0x1c0070, Func Offset: 0x160
}

// 
// Start address: 0x1c0070
void PlayerAnimeProceed(_PLAYER_WORK* p)
{
	float speed;
	_anon4* mixer;
	sgAnime* t;
	sgAnime* b;
	// Line 351, Address: 0x1c0070, Func Offset: 0
	// Line 352, Address: 0x1c0088, Func Offset: 0x18
	// Line 354, Address: 0x1c0098, Func Offset: 0x28
	// Line 355, Address: 0x1c00ac, Func Offset: 0x3c
	// Line 357, Address: 0x1c00b0, Func Offset: 0x40
	// Line 359, Address: 0x1c00b8, Func Offset: 0x48
	// Line 360, Address: 0x1c00d0, Func Offset: 0x60
	// Line 361, Address: 0x1c00dc, Func Offset: 0x6c
	// Line 362, Address: 0x1c00e0, Func Offset: 0x70
	// Line 363, Address: 0x1c00ec, Func Offset: 0x7c
	// Line 366, Address: 0x1c00f0, Func Offset: 0x80
	// Line 370, Address: 0x1c00fc, Func Offset: 0x8c
	// Line 371, Address: 0x1c010c, Func Offset: 0x9c
	// Line 372, Address: 0x1c0114, Func Offset: 0xa4
	// Line 373, Address: 0x1c011c, Func Offset: 0xac
	// Line 374, Address: 0x1c0128, Func Offset: 0xb8
	// Line 375, Address: 0x1c0134, Func Offset: 0xc4
	// Line 376, Address: 0x1c0140, Func Offset: 0xd0
	// Line 378, Address: 0x1c0148, Func Offset: 0xd8
	// Line 380, Address: 0x1c0154, Func Offset: 0xe4
	// Line 382, Address: 0x1c0160, Func Offset: 0xf0
	// Line 383, Address: 0x1c016c, Func Offset: 0xfc
	// Line 384, Address: 0x1c0170, Func Offset: 0x100
	// Line 385, Address: 0x1c0180, Func Offset: 0x110
	// Line 400, Address: 0x1c0188, Func Offset: 0x118
	// Func End, Address: 0x1c01a0, Func Offset: 0x130
}

// 
// Start address: 0x1c01a0
int PlayerAnimeGetEnd(_PLAYER_WORK* p)
{
	// Line 404, Address: 0x1c01a0, Func Offset: 0
	// Line 406, Address: 0x1c01b0, Func Offset: 0x10
	// Line 410, Address: 0x1c01c8, Func Offset: 0x28
	// Line 406, Address: 0x1c01d0, Func Offset: 0x30
	// Line 410, Address: 0x1c01d4, Func Offset: 0x34
	// Func End, Address: 0x1c01dc, Func Offset: 0x3c
}

// 
// Start address: 0x1c01e0
int PlayerAnimeOverByRatio(_PLAYER_WORK* p, float ratio)
{
	float current;
	float total;
	// Line 414, Address: 0x1c01e0, Func Offset: 0
	// Line 418, Address: 0x1c01f8, Func Offset: 0x18
	// Line 419, Address: 0x1c0204, Func Offset: 0x24
	// Line 421, Address: 0x1c021c, Func Offset: 0x3c
	// Line 422, Address: 0x1c022c, Func Offset: 0x4c
	// Line 424, Address: 0x1c0238, Func Offset: 0x58
	// Line 425, Address: 0x1c0240, Func Offset: 0x60
	// Func End, Address: 0x1c0258, Func Offset: 0x78
}

