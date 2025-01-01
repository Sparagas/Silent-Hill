typedef union _anon0;
typedef struct sfObj;
typedef struct _cam3EvSet;
typedef struct EventFlag;
typedef struct sfCldObject;
typedef struct _anon1;
typedef struct sfCharacter;
typedef struct sgQTNode;
typedef struct sgSVModel;
typedef struct sfCldPart;
typedef struct _PLAYER_WORK;
typedef struct _anon2;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _anon3;
typedef struct sgIKHandle;
typedef struct sgQTObject;
typedef struct _anon4;
typedef struct sgBone;
typedef struct sfOffsetAABB;
typedef union sfCldBody;
typedef struct _cam3AFItem;
typedef struct _GAME_WORK;
typedef struct _anon5;
typedef enum GameItem : unsigned char;
typedef struct _cam3ldkAF;
typedef struct sgAnime;
typedef struct _anon6;
typedef enum _cam3Step : unsigned char;
typedef struct _anon7;
typedef struct _cam3Work;

typedef void(*type_0)(sfObj*);
typedef void(*type_8)(_anon1*, int, int, float*);
typedef sgIKSolveResult(*type_12)();
typedef void(*type_26)(sgAnime*, int);
typedef void(*type_31)(sfObj*);

typedef unsigned char type_1[320];
typedef _cam3EvSet type_2[7];
typedef sfCldPart* type_3[6];
typedef float type_4[4][4];
typedef unsigned char type_5[3];
typedef int type_6[1];
typedef float type_7[4];
typedef int type_9[1];
typedef float type_10[4][2];
typedef int type_11[1];
typedef int type_13[1];
typedef float type_14[4];
typedef float type_15[4];
typedef int type_16[1];
typedef int type_17[1];
typedef unsigned char type_18[3];
typedef _cam3AFItem type_19[128];
typedef int type_20[1];
typedef void* type_21[4];
typedef short type_22[2];
typedef unsigned short type_23[2];
typedef char type_24[4];
typedef unsigned char type_25[4];
typedef float type_27[1];
typedef int type_28[1];
typedef _anon0 type_29[256];
typedef unsigned char type_30[4];
typedef float type_32[4];

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

struct _cam3EvSet
{
	float target[4];
	float area_center[4];
	float radius;
	short sceneNo;
	int evntNo;
	int active;
	int complete;
};

struct EventFlag
{
	unsigned char flag[320];
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

struct _anon1
{
	unsigned long tex0;
	unsigned long clamp;
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
	_anon4 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

struct _anon4
{
	float center[4];
	float radius;
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
	_anon6 aabb;
	float offset[4];
};

union sfCldBody
{
	_anon7 obb;
	_anon6 aabb;
	sfOffsetAABB offset_aabb;
	_anon5 line;
	_anon4 sphere;
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

struct _anon5
{
	float start[4];
	float end[4];
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

struct _anon6
{
	float bmin[4];
	float bmax[4];
};

enum _cam3Step : unsigned char
{
	CAM3_STEP_NORMAL,
	CAM3_STEP_AUTOFOCUS,
	CAM3_STEP_RESET,
	CAM3_STEP_STOP
};

struct _anon7
{
	float mat[4][4];
	float half_w[4];
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

_cam3EvSet cam3ev_evnt[7];
int cam3ev_active;
_cam3EvSet* cam3ev_active_evnt;
int cam3ev_step;
_GAME_WORK gamew;
float rot_start_value;
EventFlag event_flag;
_cam3ldkAF cam3_afwork;
_cam3Work cam3_work;

void cam3EvActiveSetFlag();
void cam3EvActiveClearFlag();
int cam3EvIsComplete(int evnt_no);
void cam3EvActiveSetComplete();
void cam3EvActiveSet(int evnt_no);
void cam3EvClearActive();
_cam3EvSet* cam3EvGetActive();
float* cam3EvGetActivePos();
void cam3EvStepClear();
void cam3EvStepUp();
void cam3EvStepSet(int step);
void cam3EvMakeSphere(_anon4* sphere, float rad, float* center);
void cam3EvMakeLine(_anon5* line, float* pos, float cam[4]);
float cam3EvGetPlayerRotDifferFromTargetXZ(float* ply_pos, float ply_yrot, float* trg_pos);
float cam3EvGetRotXFromTargetPos(float* cam, float* trg);
int cam3EvCheckIntersect(float* p_pos);
void cam3EvPlayerForceRotStart();
int cam3EvPlayerForceRotX(float* dst, float* p_pos, float* p_rot);
int cam3EvPlayerForceRotY(float* dst, float* trg);
int cam3EvPlayerForceRot(float* p_pos, float* p_rot, float* t_pos);
void cam3EvInitEventFlag();
int cam3EvCheckStatus();
int cam3EvIsCameraFocusActive();
int Camera3ldkEventMain();
int Camera3ldkEventIsActive();
void Camera3ldkEventSceneEnd();
void Camera3ldkEventInit();

// 
// Start address: 0x332ce0
void cam3EvActiveSetFlag()
{
	// Line 98, Address: 0x332ce0, Func Offset: 0
	// Line 99, Address: 0x332ce8, Func Offset: 0x8
	// Func End, Address: 0x332cf0, Func Offset: 0x10
}

// 
// Start address: 0x332cf0
void cam3EvActiveClearFlag()
{
	// Line 103, Address: 0x332cf0, Func Offset: 0
	// Line 104, Address: 0x332cf4, Func Offset: 0x4
	// Func End, Address: 0x332cfc, Func Offset: 0xc
}

// 
// Start address: 0x332d00
int cam3EvIsComplete(int evnt_no)
{
	// Line 108, Address: 0x332d00, Func Offset: 0
	// Line 109, Address: 0x332d10, Func Offset: 0x10
	// Func End, Address: 0x332d18, Func Offset: 0x18
}

// 
// Start address: 0x332d20
void cam3EvActiveSetComplete()
{
	// Line 120, Address: 0x332d20, Func Offset: 0
	// Line 121, Address: 0x332d2c, Func Offset: 0xc
	// Func End, Address: 0x332d34, Func Offset: 0x14
}

// 
// Start address: 0x332d40
void cam3EvActiveSet(int evnt_no)
{
	// Line 126, Address: 0x332d40, Func Offset: 0
	// Line 127, Address: 0x332d54, Func Offset: 0x14
	// Func End, Address: 0x332d5c, Func Offset: 0x1c
}

// 
// Start address: 0x332d60
void cam3EvClearActive()
{
	// Line 132, Address: 0x332d60, Func Offset: 0
	// Line 133, Address: 0x332d64, Func Offset: 0x4
	// Func End, Address: 0x332d6c, Func Offset: 0xc
}

// 
// Start address: 0x332d70
_cam3EvSet* cam3EvGetActive()
{
	// Line 138, Address: 0x332d70, Func Offset: 0
	// Line 139, Address: 0x332d74, Func Offset: 0x4
	// Func End, Address: 0x332d7c, Func Offset: 0xc
}

// 
// Start address: 0x332d80
float* cam3EvGetActivePos()
{
	// Line 144, Address: 0x332d80, Func Offset: 0
	// Line 145, Address: 0x332d84, Func Offset: 0x4
	// Func End, Address: 0x332d8c, Func Offset: 0xc
}

// 
// Start address: 0x332d90
void cam3EvStepClear()
{
	// Line 150, Address: 0x332d90, Func Offset: 0
	// Line 151, Address: 0x332d94, Func Offset: 0x4
	// Func End, Address: 0x332d9c, Func Offset: 0xc
}

// 
// Start address: 0x332da0
void cam3EvStepUp()
{
	// Line 156, Address: 0x332da0, Func Offset: 0
	// Line 157, Address: 0x332db0, Func Offset: 0x10
	// Func End, Address: 0x332db8, Func Offset: 0x18
}

// 
// Start address: 0x332dc0
void cam3EvStepSet(int step)
{
	// Line 162, Address: 0x332dc0, Func Offset: 0
	// Line 163, Address: 0x332dc4, Func Offset: 0x4
	// Func End, Address: 0x332dcc, Func Offset: 0xc
}

// 
// Start address: 0x332dd0
void cam3EvMakeSphere(_anon4* sphere, float rad, float* center)
{
	// Line 168, Address: 0x332dd0, Func Offset: 0
	// Line 171, Address: 0x332dd8, Func Offset: 0x8
	// Func End, Address: 0x332de0, Func Offset: 0x10
}

// 
// Start address: 0x332de0
void cam3EvMakeLine(_anon5* line, float* pos, float cam[4])
{
	float camMtx[4][4];
	float tv[4];
	float side[4];
	// Line 177, Address: 0x332de0, Func Offset: 0
	// Line 182, Address: 0x332de4, Func Offset: 0x4
	// Line 183, Address: 0x332e0c, Func Offset: 0x2c
	// Line 184, Address: 0x332e10, Func Offset: 0x30
	// Line 183, Address: 0x332e18, Func Offset: 0x38
	// Line 184, Address: 0x332e1c, Func Offset: 0x3c
	// Line 186, Address: 0x332e40, Func Offset: 0x60
	// Line 187, Address: 0x332e68, Func Offset: 0x88
	// Line 188, Address: 0x332e6c, Func Offset: 0x8c
	// Line 187, Address: 0x332e70, Func Offset: 0x90
	// Line 188, Address: 0x332e74, Func Offset: 0x94
	// Line 189, Address: 0x332e88, Func Offset: 0xa8
	// Line 190, Address: 0x332ea4, Func Offset: 0xc4
	// Func End, Address: 0x332eac, Func Offset: 0xcc
}

// 
// Start address: 0x332eb0
float cam3EvGetPlayerRotDifferFromTargetXZ(float* ply_pos, float ply_yrot, float* trg_pos)
{
	float ply[4];
	float trg[4];
	float sub[4];
	float p2t[4];
	float p2tAng;
	float rad;
	// Line 194, Address: 0x332eb0, Func Offset: 0
	// Line 202, Address: 0x332eb8, Func Offset: 0x8
	// Line 194, Address: 0x332ebc, Func Offset: 0xc
	// Line 202, Address: 0x332ec8, Func Offset: 0x18
	// Line 203, Address: 0x332ed0, Func Offset: 0x20
	// Line 202, Address: 0x332ed4, Func Offset: 0x24
	// Line 203, Address: 0x332ed8, Func Offset: 0x28
	// Line 204, Address: 0x332ee0, Func Offset: 0x30
	// Line 203, Address: 0x332ee4, Func Offset: 0x34
	// Line 204, Address: 0x332ee8, Func Offset: 0x38
	// Line 205, Address: 0x332efc, Func Offset: 0x4c
	// Line 206, Address: 0x332f28, Func Offset: 0x78
	// Line 208, Address: 0x332f34, Func Offset: 0x84
	// Line 209, Address: 0x332f3c, Func Offset: 0x8c
	// Line 212, Address: 0x332f44, Func Offset: 0x94
	// Func End, Address: 0x332f58, Func Offset: 0xa8
}

// 
// Start address: 0x332f60
float cam3EvGetRotXFromTargetPos(float* cam, float* trg)
{
	float subVec[4];
	float rot[4];
	float dist;
	// Line 216, Address: 0x332f60, Func Offset: 0
	// Line 221, Address: 0x332f68, Func Offset: 0x8
	// Line 222, Address: 0x332f7c, Func Offset: 0x1c
	// Line 223, Address: 0x332f94, Func Offset: 0x34
	// Line 225, Address: 0x332fb4, Func Offset: 0x54
	// Line 226, Address: 0x332fc0, Func Offset: 0x60
	// Line 225, Address: 0x332fc4, Func Offset: 0x64
	// Line 229, Address: 0x332fd4, Func Offset: 0x74
	// Line 228, Address: 0x332fd8, Func Offset: 0x78
	// Line 229, Address: 0x332fdc, Func Offset: 0x7c
	// Func End, Address: 0x332fe4, Func Offset: 0x84
}

// 
// Start address: 0x332ff0
int cam3EvCheckIntersect(float* p_pos)
{
	_cam3EvSet* evSet;
	int i;
	_anon4 sphere;
	_anon5 line;
	// Line 256, Address: 0x332ff0, Func Offset: 0
	// Line 262, Address: 0x332ffc, Func Offset: 0xc
	// Line 256, Address: 0x333000, Func Offset: 0x10
	// Line 262, Address: 0x333004, Func Offset: 0x14
	// Line 256, Address: 0x333008, Func Offset: 0x18
	// Line 257, Address: 0x33300c, Func Offset: 0x1c
	// Line 262, Address: 0x333010, Func Offset: 0x20
	// Line 257, Address: 0x333014, Func Offset: 0x24
	// Line 262, Address: 0x333018, Func Offset: 0x28
	// Line 263, Address: 0x333024, Func Offset: 0x34
	// Line 264, Address: 0x333030, Func Offset: 0x40
	// Line 265, Address: 0x333050, Func Offset: 0x60
	// Line 266, Address: 0x333060, Func Offset: 0x70
	// Line 267, Address: 0x333078, Func Offset: 0x88
	// Line 272, Address: 0x333080, Func Offset: 0x90
	// Line 273, Address: 0x333088, Func Offset: 0x98
	// Line 275, Address: 0x333098, Func Offset: 0xa8
	// Line 276, Address: 0x3330a0, Func Offset: 0xb0
	// Func End, Address: 0x3330b4, Func Offset: 0xc4
}

// 
// Start address: 0x3330c0
void cam3EvPlayerForceRotStart()
{
	// Line 281, Address: 0x3330c0, Func Offset: 0
	// Line 282, Address: 0x3330c4, Func Offset: 0x4
	// Func End, Address: 0x3330cc, Func Offset: 0xc
}

// 
// Start address: 0x3330d0
int cam3EvPlayerForceRotX(float* dst, float* p_pos, float* p_rot)
{
	_cam3EvSet* active_evnt;
	float ang;
	// Line 285, Address: 0x3330d0, Func Offset: 0
	// Line 286, Address: 0x3330dc, Func Offset: 0xc
	// Line 289, Address: 0x3330e4, Func Offset: 0x14
	// Line 290, Address: 0x3330ec, Func Offset: 0x1c
	// Line 291, Address: 0x3330f4, Func Offset: 0x24
	// Line 293, Address: 0x3330f8, Func Offset: 0x28
	// Line 294, Address: 0x333108, Func Offset: 0x38
	// Line 295, Address: 0x333124, Func Offset: 0x54
	// Line 296, Address: 0x333134, Func Offset: 0x64
	// Line 295, Address: 0x333138, Func Offset: 0x68
	// Line 296, Address: 0x33313c, Func Offset: 0x6c
	// Line 297, Address: 0x333144, Func Offset: 0x74
	// Line 298, Address: 0x333148, Func Offset: 0x78
	// Line 299, Address: 0x333164, Func Offset: 0x94
	// Line 300, Address: 0x333174, Func Offset: 0xa4
	// Line 299, Address: 0x333178, Func Offset: 0xa8
	// Line 300, Address: 0x33317c, Func Offset: 0xac
	// Line 301, Address: 0x333184, Func Offset: 0xb4
	// Line 303, Address: 0x333188, Func Offset: 0xb8
	// Line 305, Address: 0x33318c, Func Offset: 0xbc
	// Line 306, Address: 0x333190, Func Offset: 0xc0
	// Func End, Address: 0x3331a0, Func Offset: 0xd0
}

// 
// Start address: 0x3331a0
int cam3EvPlayerForceRotY(float* dst, float* trg)
{
	float camZ[4];
	float eye[4];
	float trgRad;
	float eyeRad;
	float sub;
	// Line 310, Address: 0x3331a0, Func Offset: 0
	// Line 317, Address: 0x3331b8, Func Offset: 0x18
	// Line 319, Address: 0x3331d0, Func Offset: 0x30
	// Line 320, Address: 0x3331d8, Func Offset: 0x38
	// Line 321, Address: 0x3331f8, Func Offset: 0x58
	// Line 323, Address: 0x33320c, Func Offset: 0x6c
	// Line 324, Address: 0x333210, Func Offset: 0x70
	// Line 325, Address: 0x33322c, Func Offset: 0x8c
	// Line 326, Address: 0x333238, Func Offset: 0x98
	// Line 325, Address: 0x33323c, Func Offset: 0x9c
	// Line 326, Address: 0x333240, Func Offset: 0xa0
	// Line 328, Address: 0x333248, Func Offset: 0xa8
	// Line 329, Address: 0x333264, Func Offset: 0xc4
	// Line 330, Address: 0x333270, Func Offset: 0xd0
	// Line 329, Address: 0x333274, Func Offset: 0xd4
	// Line 330, Address: 0x333278, Func Offset: 0xd8
	// Line 333, Address: 0x333280, Func Offset: 0xe0
	// Line 335, Address: 0x333284, Func Offset: 0xe4
	// Line 336, Address: 0x333288, Func Offset: 0xe8
	// Func End, Address: 0x3332a0, Func Offset: 0x100
}

// 
// Start address: 0x3332a0
int cam3EvPlayerForceRot(float* p_pos, float* p_rot, float* t_pos)
{
	float yRot;
	float xRot;
	int xok;
	int yok;
	// Line 340, Address: 0x3332a0, Func Offset: 0
	// Line 345, Address: 0x3332a4, Func Offset: 0x4
	// Line 340, Address: 0x3332a8, Func Offset: 0x8
	// Line 345, Address: 0x3332ac, Func Offset: 0xc
	// Line 340, Address: 0x3332b0, Func Offset: 0x10
	// Line 346, Address: 0x3332b4, Func Offset: 0x14
	// Line 340, Address: 0x3332b8, Func Offset: 0x18
	// Line 345, Address: 0x3332bc, Func Offset: 0x1c
	// Line 341, Address: 0x3332d0, Func Offset: 0x30
	// Line 346, Address: 0x3332d8, Func Offset: 0x38
	// Line 342, Address: 0x3332dc, Func Offset: 0x3c
	// Line 345, Address: 0x3332e0, Func Offset: 0x40
	// Line 346, Address: 0x3332ec, Func Offset: 0x4c
	// Line 347, Address: 0x3332f8, Func Offset: 0x58
	// Line 348, Address: 0x333308, Func Offset: 0x68
	// Line 347, Address: 0x333310, Func Offset: 0x70
	// Line 348, Address: 0x333314, Func Offset: 0x74
	// Line 349, Address: 0x33331c, Func Offset: 0x7c
	// Line 351, Address: 0x33332c, Func Offset: 0x8c
	// Line 352, Address: 0x33333c, Func Offset: 0x9c
	// Line 353, Address: 0x333348, Func Offset: 0xa8
	// Line 354, Address: 0x333350, Func Offset: 0xb0
	// Func End, Address: 0x333364, Func Offset: 0xc4
}

// 
// Start address: 0x333370
void cam3EvInitEventFlag()
{
	_cam3EvSet* evSet;
	int curSceneNo;
	// Line 359, Address: 0x333370, Func Offset: 0
	// Line 361, Address: 0x333374, Func Offset: 0x4
	// Line 359, Address: 0x333378, Func Offset: 0x8
	// Line 363, Address: 0x33337c, Func Offset: 0xc
	// Line 359, Address: 0x333380, Func Offset: 0x10
	// Line 360, Address: 0x333384, Func Offset: 0x14
	// Line 359, Address: 0x333388, Func Offset: 0x18
	// Line 360, Address: 0x33338c, Func Offset: 0x1c
	// Line 361, Address: 0x333390, Func Offset: 0x20
	// Line 363, Address: 0x333394, Func Offset: 0x24
	// Line 366, Address: 0x3333a0, Func Offset: 0x30
	// Line 368, Address: 0x3333b8, Func Offset: 0x48
	// Line 370, Address: 0x3333c4, Func Offset: 0x54
	// Line 372, Address: 0x3333d0, Func Offset: 0x60
	// Line 374, Address: 0x3333d8, Func Offset: 0x68
	// Line 375, Address: 0x3333e4, Func Offset: 0x74
	// Line 377, Address: 0x3333f4, Func Offset: 0x84
	// Line 381, Address: 0x333400, Func Offset: 0x90
	// Line 382, Address: 0x333408, Func Offset: 0x98
	// Line 384, Address: 0x333418, Func Offset: 0xa8
	// Line 386, Address: 0x333420, Func Offset: 0xb0
	// Line 389, Address: 0x333424, Func Offset: 0xb4
	// Line 390, Address: 0x333428, Func Offset: 0xb8
	// Line 391, Address: 0x333430, Func Offset: 0xc0
	// Line 392, Address: 0x333440, Func Offset: 0xd0
	// Func End, Address: 0x333454, Func Offset: 0xe4
}

// 
// Start address: 0x333460
int cam3EvCheckStatus()
{
	_PLAYER_WORK* pw;
	int evntNo;
	// Line 396, Address: 0x333460, Func Offset: 0
	// Line 398, Address: 0x333464, Func Offset: 0x4
	// Line 396, Address: 0x333468, Func Offset: 0x8
	// Line 401, Address: 0x33346c, Func Offset: 0xc
	// Line 403, Address: 0x333474, Func Offset: 0x14
	// Line 405, Address: 0x333480, Func Offset: 0x20
	// Line 406, Address: 0x3334ac, Func Offset: 0x4c
	// Line 407, Address: 0x3334bc, Func Offset: 0x5c
	// Line 408, Address: 0x3334c4, Func Offset: 0x64
	// Line 410, Address: 0x3334cc, Func Offset: 0x6c
	// Line 412, Address: 0x3334d0, Func Offset: 0x70
	// Line 413, Address: 0x3334d8, Func Offset: 0x78
	// Func End, Address: 0x3334e4, Func Offset: 0x84
}

// 
// Start address: 0x3334f0
int cam3EvIsCameraFocusActive()
{
	sfObj* obj;
	float objPos[4];
	float trgPos[4];
	// Line 417, Address: 0x3334f0, Func Offset: 0
	// Line 422, Address: 0x333500, Func Offset: 0x10
	// Line 423, Address: 0x33350c, Func Offset: 0x1c
	// Line 424, Address: 0x333514, Func Offset: 0x24
	// Line 425, Address: 0x33351c, Func Offset: 0x2c
	// Line 427, Address: 0x333520, Func Offset: 0x30
	// Line 428, Address: 0x333528, Func Offset: 0x38
	// Line 429, Address: 0x33353c, Func Offset: 0x4c
	// Line 432, Address: 0x333578, Func Offset: 0x88
	// Line 435, Address: 0x333580, Func Offset: 0x90
	// Line 436, Address: 0x333588, Func Offset: 0x98
	// Func End, Address: 0x333594, Func Offset: 0xa4
}

// 
// Start address: 0x3335a0
int Camera3ldkEventMain()
{
	_PLAYER_WORK* pw;
	int camera_ok;
	int focus_ok;
	// Line 440, Address: 0x3335a0, Func Offset: 0
	// Line 442, Address: 0x3335a4, Func Offset: 0x4
	// Line 440, Address: 0x3335a8, Func Offset: 0x8
	// Line 449, Address: 0x3335ac, Func Offset: 0xc
	// Line 440, Address: 0x3335b0, Func Offset: 0x10
	// Line 442, Address: 0x3335b4, Func Offset: 0x14
	// Line 449, Address: 0x3335b8, Func Offset: 0x18
	// Line 450, Address: 0x3335f4, Func Offset: 0x54
	// Line 451, Address: 0x3335f8, Func Offset: 0x58
	// Line 452, Address: 0x333600, Func Offset: 0x60
	// Line 453, Address: 0x333614, Func Offset: 0x74
	// Line 454, Address: 0x33361c, Func Offset: 0x7c
	// Line 456, Address: 0x333624, Func Offset: 0x84
	// Line 458, Address: 0x33362c, Func Offset: 0x8c
	// Line 459, Address: 0x333630, Func Offset: 0x90
	// Line 460, Address: 0x333648, Func Offset: 0xa8
	// Line 461, Address: 0x333650, Func Offset: 0xb0
	// Line 462, Address: 0x333660, Func Offset: 0xc0
	// Line 463, Address: 0x333668, Func Offset: 0xc8
	// Line 464, Address: 0x333670, Func Offset: 0xd0
	// Line 468, Address: 0x333678, Func Offset: 0xd8
	// Line 469, Address: 0x333680, Func Offset: 0xe0
	// Line 472, Address: 0x333690, Func Offset: 0xf0
	// Line 473, Address: 0x333698, Func Offset: 0xf8
	// Line 474, Address: 0x3336a0, Func Offset: 0x100
	// Line 476, Address: 0x3336a8, Func Offset: 0x108
	// Line 477, Address: 0x3336b0, Func Offset: 0x110
	// Line 479, Address: 0x3336b8, Func Offset: 0x118
	// Line 480, Address: 0x3336c0, Func Offset: 0x120
	// Line 487, Address: 0x3336c8, Func Offset: 0x128
	// Line 486, Address: 0x3336d0, Func Offset: 0x130
	// Line 487, Address: 0x3336d4, Func Offset: 0x134
	// Func End, Address: 0x3336dc, Func Offset: 0x13c
}

// 
// Start address: 0x3336e0
int Camera3ldkEventIsActive()
{
	// Line 493, Address: 0x3336e0, Func Offset: 0
	// Line 494, Address: 0x3336e4, Func Offset: 0x4
	// Func End, Address: 0x3336ec, Func Offset: 0xc
}

// 
// Start address: 0x3336f0
void Camera3ldkEventSceneEnd()
{
	// Line 498, Address: 0x3336f0, Func Offset: 0
	// Line 499, Address: 0x3336f8, Func Offset: 0x8
	// Line 500, Address: 0x333700, Func Offset: 0x10
	// Line 501, Address: 0x333708, Func Offset: 0x18
	// Line 502, Address: 0x333710, Func Offset: 0x20
	// Func End, Address: 0x33371c, Func Offset: 0x2c
}

// 
// Start address: 0x333720
void Camera3ldkEventInit()
{
	_cam3EvSet* evSet;
	// Line 507, Address: 0x333720, Func Offset: 0
	// Line 508, Address: 0x333724, Func Offset: 0x4
	// Line 507, Address: 0x333728, Func Offset: 0x8
	// Line 508, Address: 0x33372c, Func Offset: 0xc
	// Line 509, Address: 0x333730, Func Offset: 0x10
	// Line 510, Address: 0x333740, Func Offset: 0x20
	// Line 511, Address: 0x333744, Func Offset: 0x24
	// Line 512, Address: 0x333748, Func Offset: 0x28
	// Line 513, Address: 0x33374c, Func Offset: 0x2c
	// Line 515, Address: 0x333760, Func Offset: 0x40
	// Line 516, Address: 0x333768, Func Offset: 0x48
	// Line 517, Address: 0x333770, Func Offset: 0x50
	// Func End, Address: 0x33377c, Func Offset: 0x5c
}

