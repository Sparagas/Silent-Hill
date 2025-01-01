typedef union _anon0;
typedef struct sgBone;
typedef struct _anon1;
typedef struct _anon2;
typedef enum sgLightType : unsigned char;
typedef struct sfCharacter;
typedef struct sfObj;
typedef struct sgAnime;
typedef struct _PLAYER_WORK;
typedef struct _anon3;
typedef struct _anon4;
typedef struct sfCldObject;
typedef struct sgQTNode;
typedef struct sfCldPart;
typedef struct sgSVModel;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sgIKHandle;
typedef struct _anon5;
typedef struct _GAME_WORK;
typedef struct _anon6;
typedef struct sgQTObject;
typedef struct sfOffsetAABB;
typedef union sfCldBody;
typedef enum GameItem : unsigned char;
typedef struct EventFlag;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _anon9;

typedef void(*type_1)(sfObj*);
typedef sgIKSolveResult(*type_13)();
typedef void(*type_14)(_anon5*, int, int, float*);
typedef void(*type_20)(sgAnime*, int);
typedef void(*type_26)(sfObj*);

typedef float type_0[4];
typedef int type_2[1];
typedef int type_3[1];
typedef sfCldPart* type_4[6];
typedef int type_5[1];
typedef unsigned char type_6[3];
typedef float type_7[4][4];
typedef int type_8[1];
typedef float type_9[4];
typedef float type_10[4][2];
typedef int type_11[1];
typedef int type_12[1];
typedef int type_15[1];
typedef unsigned char type_16[320];
typedef float type_17[4];
typedef unsigned char type_18[3];
typedef void* type_19[4];
typedef short type_21[2];
typedef unsigned short type_22[2];
typedef char type_23[4];
typedef _anon0 type_24[256];
typedef unsigned char type_25[4];
typedef float type_27[1];
typedef int type_28[1];
typedef _PLAYER_WORK type_29[2];
typedef unsigned char type_30[4];

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

struct _anon1
{
	float bmin[4];
	float bmax[4];
};

struct _anon2
{
	float mat[4][4];
	float half_w[4];
};

enum sgLightType : unsigned char
{
	SG_LIGHT_NONE,
	SG_LIGHT_AMBIENT,
	SG_LIGHT_DIRECTIONAL,
	SG_LIGHT_POINT,
	SG_LIGHT_SPOT,
	SG_LIGHT_REFRECT_DIRECTIONAL,
	SG_LIGHT_REFRECT_POINT
};

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon6 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
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

struct _anon3
{
	float color[4];
	float direction[4];
	float position[4];
	sgLightType type;
	float start;
	float end;
	float spot_cone_angle;
	float falloff_angle;
	int flag;
};

struct _anon4
{
	_anon3 light;
	_anon3* l;
	unsigned int id;
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

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
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

struct _anon5
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

struct _anon6
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon5*, int, int, float*);
	int equip_flag;
};

struct sgQTObject
{
	_anon9 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

struct sfOffsetAABB
{
	_anon1 aabb;
	float offset[4];
};

union sfCldBody
{
	_anon2 obb;
	_anon1 aabb;
	sfOffsetAABB offset_aabb;
	_anon8 line;
	_anon9 sphere;
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

struct EventFlag
{
	unsigned char flag[320];
};

struct _anon7
{
	int dummy;
};

struct _anon8
{
	float start[4];
	float end[4];
};

struct _anon9
{
	float center[4];
	float radius;
};

_anon4 lwork;
sfObj* fire_obj;
int fire_kind;
_PLAYER_WORK playerw[2];
float fire_back;
float fire_time;
_GAME_WORK gamew;
EventFlag event_flag;

void clear_light();
void init_lwork();
void set_fire();
void remove_fire();
int PlayerGeneralLightSet(float* pos, float* col, float start, float end);
void PlayerGeneralLightUpdatePos(float* pos);
void PlayerGeneralLightOff();
void PlayerStickRemoveFire();
void PlayerStickSuspend();
void PlayerStickSetScene();
void PlayerStickSceneEnd();
int PlayerStickSetFire();
int PlayerStickRestoreFire();
int PlayerStickCheckFire();
void PlayerStickSetEffect();

// 
// Start address: 0x2e9120
void clear_light()
{
	// Line 55, Address: 0x2e9120, Func Offset: 0
	// Line 56, Address: 0x2e9124, Func Offset: 0x4
	// Line 55, Address: 0x2e9128, Func Offset: 0x8
	// Line 56, Address: 0x2e912c, Func Offset: 0xc
	// Line 57, Address: 0x2e9138, Func Offset: 0x18
	// Line 58, Address: 0x2e9140, Func Offset: 0x20
	// Line 59, Address: 0x2e914c, Func Offset: 0x2c
	// Line 60, Address: 0x2e9154, Func Offset: 0x34
	// Line 61, Address: 0x2e915c, Func Offset: 0x3c
	// Line 64, Address: 0x2e9160, Func Offset: 0x40
	// Func End, Address: 0x2e916c, Func Offset: 0x4c
}

// 
// Start address: 0x2e9170
void init_lwork()
{
	// Line 69, Address: 0x2e9170, Func Offset: 0
	// Line 70, Address: 0x2e9178, Func Offset: 0x8
	// Line 73, Address: 0x2e917c, Func Offset: 0xc
	// Func End, Address: 0x2e9184, Func Offset: 0x14
}

// 
// Start address: 0x2e9190
void set_fire()
{
	float w;
	float h;
	sgBone* bone;
	float local_pos[4];
	float pos[4];
	float m[4][4];
	float col[4];
	// Line 80, Address: 0x2e9190, Func Offset: 0
	// Line 83, Address: 0x2e9194, Func Offset: 0x4
	// Line 80, Address: 0x2e9198, Func Offset: 0x8
	// Line 83, Address: 0x2e919c, Func Offset: 0xc
	// Line 80, Address: 0x2e91a0, Func Offset: 0x10
	// Line 83, Address: 0x2e91a4, Func Offset: 0x14
	// Line 87, Address: 0x2e91ac, Func Offset: 0x1c
	// Line 83, Address: 0x2e91b0, Func Offset: 0x20
	// Line 87, Address: 0x2e91b4, Func Offset: 0x24
	// Line 88, Address: 0x2e91c4, Func Offset: 0x34
	// Line 90, Address: 0x2e91d4, Func Offset: 0x44
	// Line 89, Address: 0x2e91d8, Func Offset: 0x48
	// Line 90, Address: 0x2e91dc, Func Offset: 0x4c
	// Line 91, Address: 0x2e91e0, Func Offset: 0x50
	// Line 93, Address: 0x2e91e8, Func Offset: 0x58
	// Line 94, Address: 0x2e91f0, Func Offset: 0x60
	// Line 96, Address: 0x2e91f8, Func Offset: 0x68
	// Line 99, Address: 0x2e920c, Func Offset: 0x7c
	// Line 100, Address: 0x2e921c, Func Offset: 0x8c
	// Line 101, Address: 0x2e9228, Func Offset: 0x98
	// Line 104, Address: 0x2e9238, Func Offset: 0xa8
	// Line 105, Address: 0x2e9244, Func Offset: 0xb4
	// Line 104, Address: 0x2e9248, Func Offset: 0xb8
	// Line 105, Address: 0x2e9250, Func Offset: 0xc0
	// Line 107, Address: 0x2e9258, Func Offset: 0xc8
	// Line 108, Address: 0x2e9264, Func Offset: 0xd4
	// Line 109, Address: 0x2e929c, Func Offset: 0x10c
	// Line 110, Address: 0x2e92ac, Func Offset: 0x11c
	// Line 111, Address: 0x2e92c8, Func Offset: 0x138
	// Line 112, Address: 0x2e92dc, Func Offset: 0x14c
	// Line 115, Address: 0x2e92e8, Func Offset: 0x158
	// Func End, Address: 0x2e92f8, Func Offset: 0x168
}

// 
// Start address: 0x2e9300
void remove_fire()
{
	// Line 119, Address: 0x2e9300, Func Offset: 0
	// Line 121, Address: 0x2e9310, Func Offset: 0x10
	// Line 122, Address: 0x2e9318, Func Offset: 0x18
	// Line 123, Address: 0x2e9320, Func Offset: 0x20
	// Line 124, Address: 0x2e932c, Func Offset: 0x2c
	// Line 125, Address: 0x2e9334, Func Offset: 0x34
	// Line 127, Address: 0x2e9338, Func Offset: 0x38
	// Line 130, Address: 0x2e9340, Func Offset: 0x40
	// Func End, Address: 0x2e934c, Func Offset: 0x4c
}

// 
// Start address: 0x2e9350
int PlayerGeneralLightSet(float* pos, float* col, float start, float end)
{
	// Line 134, Address: 0x2e9350, Func Offset: 0
	// Line 136, Address: 0x2e9354, Func Offset: 0x4
	// Line 134, Address: 0x2e9358, Func Offset: 0x8
	// Line 136, Address: 0x2e9374, Func Offset: 0x24
	// Line 137, Address: 0x2e9384, Func Offset: 0x34
	// Line 140, Address: 0x2e9390, Func Offset: 0x40
	// Line 141, Address: 0x2e93a0, Func Offset: 0x50
	// Line 142, Address: 0x2e93ac, Func Offset: 0x5c
	// Line 143, Address: 0x2e93bc, Func Offset: 0x6c
	// Line 144, Address: 0x2e93cc, Func Offset: 0x7c
	// Line 145, Address: 0x2e93dc, Func Offset: 0x8c
	// Line 146, Address: 0x2e93f0, Func Offset: 0xa0
	// Line 149, Address: 0x2e9404, Func Offset: 0xb4
	// Line 150, Address: 0x2e9408, Func Offset: 0xb8
	// Func End, Address: 0x2e9424, Func Offset: 0xd4
}

// 
// Start address: 0x2e9430
void PlayerGeneralLightUpdatePos(float* pos)
{
	// Line 153, Address: 0x2e9430, Func Offset: 0
	// Line 154, Address: 0x2e943c, Func Offset: 0xc
	// Line 155, Address: 0x2e9448, Func Offset: 0x18
	// Line 158, Address: 0x2e945c, Func Offset: 0x2c
	// Func End, Address: 0x2e9468, Func Offset: 0x38
}

// 
// Start address: 0x2e9470
void PlayerGeneralLightOff()
{
	// Line 162, Address: 0x2e9470, Func Offset: 0
	// Func End, Address: 0x2e9478, Func Offset: 0x8
}

// 
// Start address: 0x2e9480
void PlayerStickRemoveFire()
{
	// Line 169, Address: 0x2e9480, Func Offset: 0
	// Line 170, Address: 0x2e9488, Func Offset: 0x8
	// Line 171, Address: 0x2e9490, Func Offset: 0x10
	// Line 172, Address: 0x2e9498, Func Offset: 0x18
	// Line 173, Address: 0x2e94a0, Func Offset: 0x20
	// Line 174, Address: 0x2e94a8, Func Offset: 0x28
	// Line 177, Address: 0x2e94b0, Func Offset: 0x30
	// Func End, Address: 0x2e94bc, Func Offset: 0x3c
}

// 
// Start address: 0x2e94c0
void PlayerStickSuspend()
{
	// Line 181, Address: 0x2e94c0, Func Offset: 0
	// Line 182, Address: 0x2e94c8, Func Offset: 0x8
	// Line 185, Address: 0x2e94d0, Func Offset: 0x10
	// Line 186, Address: 0x2e94d8, Func Offset: 0x18
	// Line 183, Address: 0x2e94e0, Func Offset: 0x20
	// Line 184, Address: 0x2e94f0, Func Offset: 0x30
	// Line 189, Address: 0x2e94f8, Func Offset: 0x38
	// Func End, Address: 0x2e9504, Func Offset: 0x44
}

// 
// Start address: 0x2e9510
void PlayerStickSetScene()
{
	// Line 193, Address: 0x2e9510, Func Offset: 0
	// Line 195, Address: 0x2e9518, Func Offset: 0x8
	// Line 198, Address: 0x2e9520, Func Offset: 0x10
	// Line 201, Address: 0x2e9528, Func Offset: 0x18
	// Line 202, Address: 0x2e9538, Func Offset: 0x28
	// Line 206, Address: 0x2e9540, Func Offset: 0x30
	// Line 210, Address: 0x2e9584, Func Offset: 0x74
	// Line 211, Address: 0x2e958c, Func Offset: 0x7c
	// Line 213, Address: 0x2e9598, Func Offset: 0x88
	// Line 214, Address: 0x2e95a0, Func Offset: 0x90
	// Line 215, Address: 0x2e95a8, Func Offset: 0x98
	// Line 219, Address: 0x2e95b0, Func Offset: 0xa0
	// Func End, Address: 0x2e95bc, Func Offset: 0xac
}

// 
// Start address: 0x2e95c0
void PlayerStickSceneEnd()
{
	// Line 223, Address: 0x2e95c0, Func Offset: 0
	// Line 224, Address: 0x2e95c8, Func Offset: 0x8
	// Line 227, Address: 0x2e95d0, Func Offset: 0x10
	// Line 230, Address: 0x2e95d8, Func Offset: 0x18
	// Func End, Address: 0x2e95e4, Func Offset: 0x24
}

// 
// Start address: 0x2e95f0
int PlayerStickSetFire()
{
	int ret;
	// Line 236, Address: 0x2e95f0, Func Offset: 0
	// Line 239, Address: 0x2e95f4, Func Offset: 0x4
	// Line 236, Address: 0x2e95f8, Func Offset: 0x8
	// Line 239, Address: 0x2e95fc, Func Offset: 0xc
	// Line 236, Address: 0x2e9600, Func Offset: 0x10
	// Line 239, Address: 0x2e9604, Func Offset: 0x14
	// Line 242, Address: 0x2e9630, Func Offset: 0x40
	// Line 243, Address: 0x2e9644, Func Offset: 0x54
	// Line 244, Address: 0x2e964c, Func Offset: 0x5c
	// Line 245, Address: 0x2e9654, Func Offset: 0x64
	// Line 248, Address: 0x2e9660, Func Offset: 0x70
	// Line 247, Address: 0x2e9668, Func Offset: 0x78
	// Line 249, Address: 0x2e9674, Func Offset: 0x84
	// Line 250, Address: 0x2e9678, Func Offset: 0x88
	// Line 251, Address: 0x2e967c, Func Offset: 0x8c
	// Line 253, Address: 0x2e9680, Func Offset: 0x90
	// Line 254, Address: 0x2e9684, Func Offset: 0x94
	// Func End, Address: 0x2e9694, Func Offset: 0xa4
}

// 
// Start address: 0x2e96a0
int PlayerStickRestoreFire()
{
	int ret;
	// Line 258, Address: 0x2e96a0, Func Offset: 0
	// Line 259, Address: 0x2e96a4, Func Offset: 0x4
	// Line 258, Address: 0x2e96a8, Func Offset: 0x8
	// Line 261, Address: 0x2e96ac, Func Offset: 0xc
	// Line 258, Address: 0x2e96b0, Func Offset: 0x10
	// Line 259, Address: 0x2e96b4, Func Offset: 0x14
	// Line 261, Address: 0x2e96b8, Func Offset: 0x18
	// Line 262, Address: 0x2e96c4, Func Offset: 0x24
	// Line 263, Address: 0x2e96d0, Func Offset: 0x30
	// Line 264, Address: 0x2e96dc, Func Offset: 0x3c
	// Line 266, Address: 0x2e96e8, Func Offset: 0x48
	// Line 269, Address: 0x2e971c, Func Offset: 0x7c
	// Line 271, Address: 0x2e9730, Func Offset: 0x90
	// Line 270, Address: 0x2e9734, Func Offset: 0x94
	// Line 271, Address: 0x2e9738, Func Offset: 0x98
	// Line 270, Address: 0x2e9740, Func Offset: 0xa0
	// Line 272, Address: 0x2e9744, Func Offset: 0xa4
	// Line 275, Address: 0x2e9750, Func Offset: 0xb0
	// Line 274, Address: 0x2e9758, Func Offset: 0xb8
	// Line 277, Address: 0x2e9768, Func Offset: 0xc8
	// Line 278, Address: 0x2e976c, Func Offset: 0xcc
	// Line 280, Address: 0x2e9770, Func Offset: 0xd0
	// Line 281, Address: 0x2e9778, Func Offset: 0xd8
	// Func End, Address: 0x2e9788, Func Offset: 0xe8
}

// 
// Start address: 0x2e9790
int PlayerStickCheckFire()
{
	int ret;
	// Line 287, Address: 0x2e9790, Func Offset: 0
	// Line 290, Address: 0x2e9794, Func Offset: 0x4
	// Line 287, Address: 0x2e9798, Func Offset: 0x8
	// Line 290, Address: 0x2e979c, Func Offset: 0xc
	// Line 287, Address: 0x2e97a0, Func Offset: 0x10
	// Line 290, Address: 0x2e97a4, Func Offset: 0x14
	// Line 294, Address: 0x2e97ec, Func Offset: 0x5c
	// Line 297, Address: 0x2e97f0, Func Offset: 0x60
	// Line 298, Address: 0x2e97f4, Func Offset: 0x64
	// Func End, Address: 0x2e9804, Func Offset: 0x74
}

// 
// Start address: 0x2e9810
void PlayerStickSetEffect()
{
	sgBone* bone;
	float m[4][4];
	float local_pos[4];
	float pos[4];
	// Line 301, Address: 0x2e9810, Func Offset: 0
	// Line 302, Address: 0x2e9814, Func Offset: 0x4
	// Line 301, Address: 0x2e9818, Func Offset: 0x8
	// Line 302, Address: 0x2e981c, Func Offset: 0xc
	// Line 304, Address: 0x2e985c, Func Offset: 0x4c
	// Line 305, Address: 0x2e9874, Func Offset: 0x64
	// Line 306, Address: 0x2e9884, Func Offset: 0x74
	// Line 307, Address: 0x2e988c, Func Offset: 0x7c
	// Line 309, Address: 0x2e9890, Func Offset: 0x80
	// Line 312, Address: 0x2e98ac, Func Offset: 0x9c
	// Line 314, Address: 0x2e98b4, Func Offset: 0xa4
	// Line 312, Address: 0x2e98b8, Func Offset: 0xa8
	// Line 314, Address: 0x2e98c0, Func Offset: 0xb0
	// Line 315, Address: 0x2e98cc, Func Offset: 0xbc
	// Line 316, Address: 0x2e98d4, Func Offset: 0xc4
	// Line 317, Address: 0x2e98dc, Func Offset: 0xcc
	// Line 318, Address: 0x2e9914, Func Offset: 0x104
	// Line 319, Address: 0x2e9924, Func Offset: 0x114
	// Line 320, Address: 0x2e9938, Func Offset: 0x128
	// Line 323, Address: 0x2e9940, Func Offset: 0x130
	// Line 324, Address: 0x2e9948, Func Offset: 0x138
	// Line 328, Address: 0x2e9950, Func Offset: 0x140
	// Line 329, Address: 0x2e9970, Func Offset: 0x160
	// Line 330, Address: 0x2e998c, Func Offset: 0x17c
	// Line 331, Address: 0x2e99c8, Func Offset: 0x1b8
	// Line 332, Address: 0x2e99dc, Func Offset: 0x1cc
	// Line 334, Address: 0x2e99e8, Func Offset: 0x1d8
	// Line 335, Address: 0x2e99fc, Func Offset: 0x1ec
	// Line 336, Address: 0x2e9a18, Func Offset: 0x208
	// Line 337, Address: 0x2e9a2c, Func Offset: 0x21c
	// Line 339, Address: 0x2e9a30, Func Offset: 0x220
	// Line 340, Address: 0x2e9a40, Func Offset: 0x230
	// Line 339, Address: 0x2e9a48, Func Offset: 0x238
	// Line 340, Address: 0x2e9a50, Func Offset: 0x240
	// Line 341, Address: 0x2e9a5c, Func Offset: 0x24c
	// Line 342, Address: 0x2e9a64, Func Offset: 0x254
	// Line 348, Address: 0x2e9a74, Func Offset: 0x264
	// Line 353, Address: 0x2e9a7c, Func Offset: 0x26c
	// Line 355, Address: 0x2e9a88, Func Offset: 0x278
	// Line 359, Address: 0x2e9a90, Func Offset: 0x280
	// Line 360, Address: 0x2e9ab8, Func Offset: 0x2a8
	// Line 364, Address: 0x2e9ac0, Func Offset: 0x2b0
	// Func End, Address: 0x2e9acc, Func Offset: 0x2bc
}

