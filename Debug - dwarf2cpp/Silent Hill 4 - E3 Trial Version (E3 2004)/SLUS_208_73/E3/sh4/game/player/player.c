typedef struct sgBone;
typedef struct _anon0;
typedef struct _PLAYER_WORK;
typedef struct _anon1;
typedef enum GameItem : unsigned char;
typedef struct _anon2;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sfObj;
typedef struct sfCharacter;
typedef struct sgAnime;
typedef struct sgIKHandle;
typedef union _anon3;
typedef struct _GAME_WORK;
typedef struct sfCldObject;
typedef struct sgQTNode;
typedef struct sfCldPart;
typedef struct sgSVModel;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct sgQTObject;
typedef struct sfOffsetAABB;
typedef enum PlayerExtStatus : unsigned char;
typedef union sfCldBody;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _anon9;
typedef struct _anon10;

typedef void(*type_10)(sfObj*);
typedef sgIKSolveResult(*type_12)();
typedef void(*type_16)(sfObj*);
typedef void(*type_22)(_anon4*, int, int, float*);
typedef void(*type_23)(sgAnime*, int);

typedef _anon1** type_0[10];
typedef int type_1[1];
typedef int type_2[1];
typedef int type_3[1];
typedef int type_4[1];
typedef float type_5[4];
typedef float type_6[4];
typedef _anon3 type_7[256];
typedef float type_8[4][2];
typedef float type_9[4][4];
typedef _anon2 type_11[2];
typedef int type_13[1];
typedef int type_14[1];
typedef sfCldPart* type_15[6];
typedef unsigned char type_17[3];
typedef _PLAYER_WORK type_18[2];
typedef int type_19[1];
typedef void* type_20[4];
typedef float type_21[4];
typedef unsigned char type_24[4];
typedef short type_25[2];
typedef unsigned short type_26[2];
typedef char type_27[4];
typedef unsigned char type_28[4];
typedef unsigned char type_29[3];
typedef float type_30[1];
typedef int type_31[1];

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

struct _anon0
{
	float mat[4][4];
	float half_w[4];
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
	_anon6* anim_ctrl;
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

struct _anon1
{
	float x;
	float y;
	float z;
	float rot;
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
	float pos[4];
	float rot[4];
	float move_rot[4];
	float eye_pos[4];
	float target_pos[4];
	float weapon_pos[4];
	float eye_dir[4];
	float floor_normal[4];
	sfObj* target_obj;
	float dir;
	float move_dir;
	float move_speed;
	float moved_speed[4];
	float floor_height;
	float hp_rate;
	float weapon_move[4];
	float weapon_speed;
	PlayerExtStatus status;
	GameItem weapon_kind;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct sfObj
{
	_anon3 fwork[256];
	_anon3* work;
	void(*func)(sfObj*);
	_anon3* work_pt0;
	_anon3* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon3* sys_work;
	_anon3* scene_work;
	_anon3* event_work;
	_anon3* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon5 model_work;
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

union _anon3
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

struct _anon4
{
	unsigned long tex0;
	unsigned long clamp;
};

struct _anon5
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon4*, int, int, float*);
	int equip_flag;
};

struct _anon6
{
	int dummy;
};

struct sgQTObject
{
	_anon9 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

struct sfOffsetAABB
{
	_anon10 aabb;
	float offset[4];
};

enum PlayerExtStatus : unsigned char
{
	PLAYER_STAT_ABSENT,
	PLAYER_STAT_MOVE,
	PLAYER_STAT_SILENT,
	PLAYER_STAT_READY,
	PLAYER_STAT_LOCK,
	PLAYER_STAT_ATTACK,
	PLAYER_STAT_DAMAGE,
	PLAYER_STAT_EVENT,
	PLAYER_STAT_SWORD,
	PLAYER_STAT_GODMODE,
	PLAYER_STAT_DEAD
};

union sfCldBody
{
	_anon0 obb;
	_anon10 aabb;
	sfOffsetAABB offset_aabb;
	_anon8 line;
	_anon9 sphere;
};

struct _anon7
{
	float abcd[4];
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

struct _anon10
{
	float bmin[4];
	float bmax[4];
};

void* c_anim;
_anon1** start_tbl[10];
_PLAYER_WORK playerw[2];
_GAME_WORK gamew;
float sg_vector_zero[4];
_anon2 player_ext_info[2];

void PlayerInitGame();
void PlayerInitStage();
void PlayerInitParam();
void PlayerSetSceneChange();
void PlayerSetType(int type);
int PlayerGetCurrentType();
_PLAYER_WORK* PlayerGetCurrentWork();
void PlayerGetPos(float* pos, int num);
void PlayerSetLocalPos(float* pos, int num);
void PlayerSetAngleY(float angle, int num);
float PlayerGetFloorHeight(float s_upper, float s_lower);
void PlayerSetNextStartPos(float* pos, float y_rot);
void PlayerSetGotmode();
void PlayerStopGotmode();
void PlayerSetInvincible();
void PlayerStopInvincible();
float rot_normalize(float f);
void PlayerRotNormalize();
int PlayerDamage(int num, float damage);
void PlayerSetStrengthHenry(float strength);
void PlayerSetDefenseHenry(float defense);
void PlayerRecover(int num, float recov);
void PlayerRecoverByAmpule(int num);
void PlayerRecoverByAidKit(int num);

// 
// Start address: 0x15c850
void PlayerInitGame()
{
	// Line 95, Address: 0x15c850, Func Offset: 0
	// Line 99, Address: 0x15c85c, Func Offset: 0xc
	// Func End, Address: 0x15c864, Func Offset: 0x14
}

// 
// Start address: 0x15c870
void PlayerInitStage()
{
	int i;
	// Line 103, Address: 0x15c870, Func Offset: 0
	// Line 107, Address: 0x15c878, Func Offset: 0x8
	// Line 110, Address: 0x15c880, Func Offset: 0x10
	// Line 113, Address: 0x15c888, Func Offset: 0x18
	// Line 110, Address: 0x15c88c, Func Offset: 0x1c
	// Line 111, Address: 0x15c8a0, Func Offset: 0x30
	// Line 112, Address: 0x15c8a4, Func Offset: 0x34
	// Line 113, Address: 0x15c8a8, Func Offset: 0x38
	// Line 114, Address: 0x15c8ac, Func Offset: 0x3c
	// Line 115, Address: 0x15c8b0, Func Offset: 0x40
	// Line 116, Address: 0x15c8b4, Func Offset: 0x44
	// Line 117, Address: 0x15c8b8, Func Offset: 0x48
	// Line 119, Address: 0x15c8bc, Func Offset: 0x4c
	// Line 123, Address: 0x15c8c4, Func Offset: 0x54
	// Line 120, Address: 0x15c8c8, Func Offset: 0x58
	// Line 123, Address: 0x15c8cc, Func Offset: 0x5c
	// Line 120, Address: 0x15c8d0, Func Offset: 0x60
	// Line 123, Address: 0x15c8d4, Func Offset: 0x64
	// Line 126, Address: 0x15c8dc, Func Offset: 0x6c
	// Line 129, Address: 0x15c8e4, Func Offset: 0x74
	// Line 132, Address: 0x15c8ec, Func Offset: 0x7c
	// Line 135, Address: 0x15c8f4, Func Offset: 0x84
	// Func End, Address: 0x15c900, Func Offset: 0x90
}

// 
// Start address: 0x15c900
void PlayerInitParam()
{
	// Line 139, Address: 0x15c900, Func Offset: 0
	// Line 148, Address: 0x15c904, Func Offset: 0x4
	// Line 139, Address: 0x15c908, Func Offset: 0x8
	// Line 142, Address: 0x15c90c, Func Offset: 0xc
	// Line 148, Address: 0x15c910, Func Offset: 0x10
	// Line 143, Address: 0x15c914, Func Offset: 0x14
	// Line 156, Address: 0x15c918, Func Offset: 0x18
	// Line 151, Address: 0x15c91c, Func Offset: 0x1c
	// Line 156, Address: 0x15c920, Func Offset: 0x20
	// Line 142, Address: 0x15c924, Func Offset: 0x24
	// Line 143, Address: 0x15c92c, Func Offset: 0x2c
	// Line 144, Address: 0x15c934, Func Offset: 0x34
	// Line 145, Address: 0x15c93c, Func Offset: 0x3c
	// Line 146, Address: 0x15c944, Func Offset: 0x44
	// Line 147, Address: 0x15c94c, Func Offset: 0x4c
	// Line 150, Address: 0x15c954, Func Offset: 0x54
	// Line 153, Address: 0x15c95c, Func Offset: 0x5c
	// Line 151, Address: 0x15c964, Func Offset: 0x64
	// Line 152, Address: 0x15c96c, Func Offset: 0x6c
	// Line 154, Address: 0x15c974, Func Offset: 0x74
	// Line 155, Address: 0x15c97c, Func Offset: 0x7c
	// Line 159, Address: 0x15c984, Func Offset: 0x84
	// Line 160, Address: 0x15c98c, Func Offset: 0x8c
	// Line 161, Address: 0x15c994, Func Offset: 0x94
	// Line 162, Address: 0x15c99c, Func Offset: 0x9c
	// Line 165, Address: 0x15c9a0, Func Offset: 0xa0
	// Line 166, Address: 0x15c9a8, Func Offset: 0xa8
	// Line 167, Address: 0x15c9b0, Func Offset: 0xb0
	// Line 170, Address: 0x15c9b8, Func Offset: 0xb8
	// Func End, Address: 0x15c9c4, Func Offset: 0xc4
}

// 
// Start address: 0x15c9d0
void PlayerSetSceneChange()
{
	// Line 174, Address: 0x15c9d0, Func Offset: 0
	// Line 175, Address: 0x15c9d8, Func Offset: 0x8
	// Line 176, Address: 0x15c9e0, Func Offset: 0x10
	// Line 179, Address: 0x15c9e8, Func Offset: 0x18
	// Func End, Address: 0x15c9f4, Func Offset: 0x24
}

// 
// Start address: 0x15ca00
void PlayerSetType(int type)
{
	// Line 196, Address: 0x15ca00, Func Offset: 0
	// Line 197, Address: 0x15ca0c, Func Offset: 0xc
	// Line 199, Address: 0x15ca10, Func Offset: 0x10
	// Line 202, Address: 0x15ca2c, Func Offset: 0x2c
	// Func End, Address: 0x15ca34, Func Offset: 0x34
}

// 
// Start address: 0x15ca40
int PlayerGetCurrentType()
{
	// Line 218, Address: 0x15ca40, Func Offset: 0
	// Line 219, Address: 0x15ca48, Func Offset: 0x8
	// Func End, Address: 0x15ca50, Func Offset: 0x10
}

// 
// Start address: 0x15ca50
_PLAYER_WORK* PlayerGetCurrentWork()
{
	// Line 232, Address: 0x15ca50, Func Offset: 0
	// Line 233, Address: 0x15ca54, Func Offset: 0x4
	// Func End, Address: 0x15ca5c, Func Offset: 0xc
}

// 
// Start address: 0x15ca60
void PlayerGetPos(float* pos, int num)
{
	_PLAYER_WORK* p;
	// Line 247, Address: 0x15ca64, Func Offset: 0x4
	// Line 250, Address: 0x15ca78, Func Offset: 0x18
	// Line 253, Address: 0x15ca7c, Func Offset: 0x1c
	// Func End, Address: 0x15ca84, Func Offset: 0x24
}

// 
// Start address: 0x15ca90
void PlayerSetLocalPos(float* pos, int num)
{
	_PLAYER_WORK* p;
	// Line 288, Address: 0x15ca90, Func Offset: 0
	// Line 290, Address: 0x15caa8, Func Offset: 0x18
	// Line 291, Address: 0x15cab0, Func Offset: 0x20
	// Line 296, Address: 0x15cab4, Func Offset: 0x24
	// Func End, Address: 0x15cabc, Func Offset: 0x2c
}

// 
// Start address: 0x15cac0
void PlayerSetAngleY(float angle, int num)
{
	_PLAYER_WORK* p;
	// Line 335, Address: 0x15cac0, Func Offset: 0
	// Line 337, Address: 0x15cad8, Func Offset: 0x18
	// Line 338, Address: 0x15cadc, Func Offset: 0x1c
	// Line 339, Address: 0x15cae0, Func Offset: 0x20
	// Line 340, Address: 0x15cae4, Func Offset: 0x24
	// Line 341, Address: 0x15cae8, Func Offset: 0x28
	// Line 342, Address: 0x15caec, Func Offset: 0x2c
	// Line 343, Address: 0x15caf0, Func Offset: 0x30
	// Line 344, Address: 0x15caf4, Func Offset: 0x34
	// Line 347, Address: 0x15caf8, Func Offset: 0x38
	// Func End, Address: 0x15cb00, Func Offset: 0x40
}

// 
// Start address: 0x15cb00
float PlayerGetFloorHeight(float s_upper, float s_lower)
{
	_anon8 line;
	_anon7 plane;
	int hit;
	float ret;
	float tmp[4];
	// Line 362, Address: 0x15cb00, Func Offset: 0
	// Line 375, Address: 0x15cb0c, Func Offset: 0xc
	// Line 362, Address: 0x15cb10, Func Offset: 0x10
	// Line 375, Address: 0x15cb14, Func Offset: 0x14
	// Line 369, Address: 0x15cb18, Func Offset: 0x18
	// Line 372, Address: 0x15cb24, Func Offset: 0x24
	// Line 370, Address: 0x15cb28, Func Offset: 0x28
	// Line 371, Address: 0x15cb38, Func Offset: 0x38
	// Line 374, Address: 0x15cb3c, Func Offset: 0x3c
	// Line 373, Address: 0x15cb40, Func Offset: 0x40
	// Line 375, Address: 0x15cb44, Func Offset: 0x44
	// Line 376, Address: 0x15cb4c, Func Offset: 0x4c
	// Line 378, Address: 0x15cb54, Func Offset: 0x54
	// Line 380, Address: 0x15cb60, Func Offset: 0x60
	// Line 382, Address: 0x15cb68, Func Offset: 0x68
	// Line 383, Address: 0x15cb7c, Func Offset: 0x7c
	// Line 386, Address: 0x15cb80, Func Offset: 0x80
	// Func End, Address: 0x15cb8c, Func Offset: 0x8c
}

// 
// Start address: 0x15cb90
void PlayerSetNextStartPos(float* pos, float y_rot)
{
	// Line 403, Address: 0x15cb90, Func Offset: 0
	// Line 404, Address: 0x15cba0, Func Offset: 0x10
	// Line 405, Address: 0x15cbb8, Func Offset: 0x28
	// Line 406, Address: 0x15cbc0, Func Offset: 0x30
	// Line 409, Address: 0x15cbc8, Func Offset: 0x38
	// Func End, Address: 0x15cbd0, Func Offset: 0x40
}

// 
// Start address: 0x15cbd0
void PlayerSetGotmode()
{
	// Line 415, Address: 0x15cbd0, Func Offset: 0
	// Line 418, Address: 0x15cbd8, Func Offset: 0x8
	// Func End, Address: 0x15cbe0, Func Offset: 0x10
}

// 
// Start address: 0x15cbe0
void PlayerStopGotmode()
{
	// Line 423, Address: 0x15cbe0, Func Offset: 0
	// Line 426, Address: 0x15cbe4, Func Offset: 0x4
	// Func End, Address: 0x15cbec, Func Offset: 0xc
}

// 
// Start address: 0x15cbf0
void PlayerSetInvincible()
{
	// Line 435, Address: 0x15cbf0, Func Offset: 0
	// Line 438, Address: 0x15cbf8, Func Offset: 0x8
	// Func End, Address: 0x15cc00, Func Offset: 0x10
}

// 
// Start address: 0x15cc00
void PlayerStopInvincible()
{
	// Line 443, Address: 0x15cc00, Func Offset: 0
	// Line 446, Address: 0x15cc04, Func Offset: 0x4
	// Func End, Address: 0x15cc0c, Func Offset: 0xc
}

// 
// Start address: 0x15cc10
float rot_normalize(float f)
{
	// Line 452, Address: 0x15cc10, Func Offset: 0
	// Line 451, Address: 0x15cc14, Func Offset: 0x4
	// Line 452, Address: 0x15cc18, Func Offset: 0x8
	// Line 453, Address: 0x15cc30, Func Offset: 0x20
	// Line 454, Address: 0x15cc3c, Func Offset: 0x2c
	// Line 455, Address: 0x15cc48, Func Offset: 0x38
	// Line 456, Address: 0x15cc64, Func Offset: 0x54
	// Line 457, Address: 0x15cc6c, Func Offset: 0x5c
	// Line 459, Address: 0x15cc78, Func Offset: 0x68
	// Line 462, Address: 0x15cc80, Func Offset: 0x70
	// Line 464, Address: 0x15cc88, Func Offset: 0x78
	// Func End, Address: 0x15cc94, Func Offset: 0x84
}

// 
// Start address: 0x15cca0
void PlayerRotNormalize()
{
	int i;
	// Line 476, Address: 0x15cca0, Func Offset: 0
	// Line 479, Address: 0x15ccb0, Func Offset: 0x10
	// Line 480, Address: 0x15ccc0, Func Offset: 0x20
	// Line 481, Address: 0x15cccc, Func Offset: 0x2c
	// Line 482, Address: 0x15ccd8, Func Offset: 0x38
	// Line 483, Address: 0x15cce0, Func Offset: 0x40
	// Line 482, Address: 0x15cce4, Func Offset: 0x44
	// Line 483, Address: 0x15cce8, Func Offset: 0x48
	// Line 486, Address: 0x15ccf4, Func Offset: 0x54
	// Func End, Address: 0x15cd08, Func Offset: 0x68
}

// 
// Start address: 0x15cd10
int PlayerDamage(int num, float damage)
{
	float life;
	float def;
	float mult;
	// Line 576, Address: 0x15cd10, Func Offset: 0
	// Line 586, Address: 0x15cd2c, Func Offset: 0x1c
	// Line 576, Address: 0x15cd30, Func Offset: 0x20
	// Line 578, Address: 0x15cd38, Func Offset: 0x28
	// Line 586, Address: 0x15cd3c, Func Offset: 0x2c
	// Line 576, Address: 0x15cd40, Func Offset: 0x30
	// Line 578, Address: 0x15cd44, Func Offset: 0x34
	// Line 576, Address: 0x15cd48, Func Offset: 0x38
	// Line 586, Address: 0x15cd4c, Func Offset: 0x3c
	// Line 576, Address: 0x15cd50, Func Offset: 0x40
	// Line 578, Address: 0x15cd54, Func Offset: 0x44
	// Line 586, Address: 0x15cd58, Func Offset: 0x48
	// Line 578, Address: 0x15cd5c, Func Offset: 0x4c
	// Line 577, Address: 0x15cd60, Func Offset: 0x50
	// Line 586, Address: 0x15cd64, Func Offset: 0x54
	// Line 587, Address: 0x15cd6c, Func Offset: 0x5c
	// Line 590, Address: 0x15cd78, Func Offset: 0x68
	// Line 591, Address: 0x15cd88, Func Offset: 0x78
	// Line 593, Address: 0x15cd90, Func Offset: 0x80
	// Line 595, Address: 0x15cdbc, Func Offset: 0xac
	// Line 596, Address: 0x15cdc8, Func Offset: 0xb8
	// Line 597, Address: 0x15cde8, Func Offset: 0xd8
	// Line 599, Address: 0x15cdec, Func Offset: 0xdc
	// Line 600, Address: 0x15cdf4, Func Offset: 0xe4
	// Line 604, Address: 0x15ce00, Func Offset: 0xf0
	// Line 602, Address: 0x15ce04, Func Offset: 0xf4
	// Line 605, Address: 0x15ce08, Func Offset: 0xf8
	// Func End, Address: 0x15ce24, Func Offset: 0x114
}

// 
// Start address: 0x15ce30
void PlayerSetStrengthHenry(float strength)
{
	_PLAYER_WORK* p;
	// Line 616, Address: 0x15ce30, Func Offset: 0
	// Line 614, Address: 0x15ce34, Func Offset: 0x4
	// Line 616, Address: 0x15ce38, Func Offset: 0x8
	// Line 617, Address: 0x15ce44, Func Offset: 0x14
	// Line 619, Address: 0x15ce48, Func Offset: 0x18
	// Line 621, Address: 0x15ce50, Func Offset: 0x20
	// Line 622, Address: 0x15ce5c, Func Offset: 0x2c
	// Line 625, Address: 0x15ce60, Func Offset: 0x30
	// Func End, Address: 0x15ce68, Func Offset: 0x38
}

// 
// Start address: 0x15ce70
void PlayerSetDefenseHenry(float defense)
{
	_PLAYER_WORK* p;
	// Line 637, Address: 0x15ce70, Func Offset: 0
	// Line 635, Address: 0x15ce74, Func Offset: 0x4
	// Line 637, Address: 0x15ce78, Func Offset: 0x8
	// Line 638, Address: 0x15ce84, Func Offset: 0x14
	// Line 640, Address: 0x15ce88, Func Offset: 0x18
	// Line 642, Address: 0x15ce90, Func Offset: 0x20
	// Line 643, Address: 0x15ce9c, Func Offset: 0x2c
	// Line 646, Address: 0x15cea0, Func Offset: 0x30
	// Func End, Address: 0x15cea8, Func Offset: 0x38
}

// 
// Start address: 0x15ceb0
void PlayerRecover(int num, float recov)
{
	float life;
	float max;
	// Line 658, Address: 0x15ceb4, Func Offset: 0x4
	// Line 660, Address: 0x15cec4, Func Offset: 0x14
	// Line 658, Address: 0x15cec8, Func Offset: 0x18
	// Line 660, Address: 0x15cecc, Func Offset: 0x1c
	// Line 659, Address: 0x15ced0, Func Offset: 0x20
	// Line 660, Address: 0x15ced4, Func Offset: 0x24
	// Line 662, Address: 0x15cedc, Func Offset: 0x2c
	// Line 663, Address: 0x15cee0, Func Offset: 0x30
	// Line 664, Address: 0x15ceec, Func Offset: 0x3c
	// Line 669, Address: 0x15cef0, Func Offset: 0x40
	// Func End, Address: 0x15cef8, Func Offset: 0x48
}

// 
// Start address: 0x15cf00
void PlayerRecoverByAmpule(int num)
{
	// Line 680, Address: 0x15cf00, Func Offset: 0
	// Line 681, Address: 0x15cf04, Func Offset: 0x4
	// Line 680, Address: 0x15cf08, Func Offset: 0x8
	// Line 681, Address: 0x15cf0c, Func Offset: 0xc
	// Line 680, Address: 0x15cf10, Func Offset: 0x10
	// Line 681, Address: 0x15cf14, Func Offset: 0x14
	// Line 683, Address: 0x15cf1c, Func Offset: 0x1c
	// Line 684, Address: 0x15cf30, Func Offset: 0x30
	// Line 685, Address: 0x15cf48, Func Offset: 0x48
	// Line 686, Address: 0x15cf50, Func Offset: 0x50
	// Line 687, Address: 0x15cf64, Func Offset: 0x64
	// Line 688, Address: 0x15cf7c, Func Offset: 0x7c
	// Line 690, Address: 0x15cf88, Func Offset: 0x88
	// Line 694, Address: 0x15cfa8, Func Offset: 0xa8
	// Func End, Address: 0x15cfb8, Func Offset: 0xb8
}

// 
// Start address: 0x15cfc0
void PlayerRecoverByAidKit(int num)
{
	_PLAYER_WORK* p;
	float lst;
	float minimum;
	float recov;
	// Line 704, Address: 0x15cfc0, Func Offset: 0
	// Line 705, Address: 0x15cfc4, Func Offset: 0x4
	// Line 704, Address: 0x15cfc8, Func Offset: 0x8
	// Line 705, Address: 0x15cfcc, Func Offset: 0xc
	// Line 704, Address: 0x15cfd0, Func Offset: 0x10
	// Line 705, Address: 0x15cfd4, Func Offset: 0x14
	// Line 704, Address: 0x15cfe0, Func Offset: 0x20
	// Line 705, Address: 0x15cfe4, Func Offset: 0x24
	// Line 710, Address: 0x15cfe8, Func Offset: 0x28
	// Line 712, Address: 0x15cff4, Func Offset: 0x34
	// Line 714, Address: 0x15d008, Func Offset: 0x48
	// Line 713, Address: 0x15d00c, Func Offset: 0x4c
	// Line 714, Address: 0x15d010, Func Offset: 0x50
	// Line 713, Address: 0x15d014, Func Offset: 0x54
	// Line 715, Address: 0x15d018, Func Offset: 0x58
	// Line 716, Address: 0x15d020, Func Offset: 0x60
	// Line 718, Address: 0x15d034, Func Offset: 0x74
	// Line 717, Address: 0x15d038, Func Offset: 0x78
	// Line 718, Address: 0x15d03c, Func Offset: 0x7c
	// Line 717, Address: 0x15d044, Func Offset: 0x84
	// Line 719, Address: 0x15d048, Func Offset: 0x88
	// Line 721, Address: 0x15d050, Func Offset: 0x90
	// Line 722, Address: 0x15d058, Func Offset: 0x98
	// Line 723, Address: 0x15d06c, Func Offset: 0xac
	// Line 725, Address: 0x15d070, Func Offset: 0xb0
	// Line 726, Address: 0x15d07c, Func Offset: 0xbc
	// Line 727, Address: 0x15d084, Func Offset: 0xc4
	// Line 729, Address: 0x15d090, Func Offset: 0xd0
	// Line 730, Address: 0x15d09c, Func Offset: 0xdc
	// Line 733, Address: 0x15d0a0, Func Offset: 0xe0
	// Func End, Address: 0x15d0b4, Func Offset: 0xf4
}

