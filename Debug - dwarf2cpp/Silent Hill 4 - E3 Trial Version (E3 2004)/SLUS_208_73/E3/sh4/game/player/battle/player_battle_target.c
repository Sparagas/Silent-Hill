typedef struct sfCldObject;
typedef struct sfCharacter;
typedef struct sgQTNode;
typedef struct sfObj;
typedef struct sgBone;
typedef struct sfCldPart;
typedef struct _anon0;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sgSVModel;
typedef struct _anon1;
typedef struct sgQTObject;
typedef struct sgIKHandle;
typedef struct _anon2;
typedef enum EnemyCondition : unsigned char;
typedef struct _PLAYER_WORK;
typedef struct sfOffsetAABB;
typedef struct _anon3;
typedef union sfCldBody;
typedef union _anon4;
typedef enum GameItem : unsigned char;
typedef enum EnemyKind : unsigned char;
typedef struct _anon5;
typedef struct _anon6;
typedef struct sgAnime;
typedef enum sfMaphitMaterialType : unsigned char;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _anon9;
typedef union _anon10;
typedef struct _anon11;
typedef enum sfMaphitSpecType : unsigned char;
typedef struct _GAME_WORK;

typedef sgIKSolveResult(*type_6)();
typedef void(*type_8)(_anon1*, int, int, float*);
typedef void(*type_10)(sfObj*);
typedef void(*type_12)(sfObj*);
typedef void(*type_16)(sgAnime*, int);

typedef sfCldPart* type_0[6];
typedef unsigned char type_1[3];
typedef int type_2[1];
typedef float type_3[4][4];
typedef float type_4[4][2];
typedef _PLAYER_WORK type_5[2];
typedef float type_7[4];
typedef _anon4 type_9[256];
typedef unsigned char type_11[3];
typedef void* type_13[4];
typedef int type_14[1];
typedef float type_15[4];
typedef int type_17[1];
typedef float type_18[4];
typedef _anon8 type_19[4];
typedef _anon10 type_20[0];
typedef int type_21[1];
typedef unsigned char type_22[4];
typedef int type_23[1];
typedef short type_24[2];
typedef unsigned short type_25[2];
typedef char type_26[4];
typedef unsigned char type_27[4];
typedef int type_28[1];
typedef float type_29[1];
typedef int type_30[1];
typedef int type_31[1];

struct sfCldObject
{
	sgQTObject tree_object;
	sgQTNode* stay_node;
	sfCldPart* parts[6];
	unsigned char n_parts;
	unsigned char pad[3];
	void* data;
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

struct _anon0
{
	int dummy;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct _anon1
{
	unsigned long tex0;
	unsigned long clamp;
};

struct sgQTObject
{
	_anon7 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
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
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon1*, int, int, float*);
	int equip_flag;
};

enum EnemyCondition : unsigned char
{
	ENEMY_CONDITION_NOENTRY,
	ENEMY_CONDITION_NORMAL,
	ENEMY_CONDITION_CAUTION,
	ENEMY_CONDITION_CHASE,
	ENEMY_CONDITION_ESCAPE,
	ENEMY_CONDITION_BATTLE,
	ENEMY_CONDITION_SEIZE,
	ENEMY_CONDITION_INVINCIBLE,
	ENEMY_CONDITION_RISE,
	ENEMY_CONDITION_DAMAGE,
	ENEMY_CONDITION_DYING,
	ENEMY_CONDITION_DEAD,
	ENEMY_CONDITION_SPECIAL,
	ENEMY_CONDITION_HIDDEN,
	ENEMY_CONDITION_FULLHIDDEN,
	ENEMY_CONDITION_ANOTHERSCENE,
	ENEMY_CONDITION_ERASE,
	ENEMY_CONDITION_FLAGWAIT,
	ENEMY_CONDITION_EVENT
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
	_anon0* anim_ctrl;
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

struct sfOffsetAABB
{
	_anon9 aabb;
	float offset[4];
};

struct _anon3
{
	float start[4];
	float end[4];
};

union sfCldBody
{
	_anon11 obb;
	_anon9 aabb;
	sfOffsetAABB offset_aabb;
	_anon3 line;
	_anon7 sphere;
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

enum EnemyKind : unsigned char
{
	ENEMY_KIND_NOTHING,
	ENEMY_KIND_CELL,
	ENEMY_KIND_MUSH,
	ENEMY_KIND_BUZZ,
	ENEMY_KIND_MM,
	ENEMY_KIND_WALLMAN,
	ENEMY_KIND_WHEEL,
	ENEMY_KIND_JINMEN,
	ENEMY_KIND_TWINS,
	ENEMY_KIND_HIL,
	ENEMY_KIND_HYENA,
	ENEMY_KIND_MULTI,
	ENEMY_KIND_PICKGIRL,
	ENEMY_KIND_FLAMES,
	ENEMY_KIND_FAT,
	ENEMY_KIND_SCRATCH,
	ENEMY_KIND_KILLER,
	ENEMY_KIND_NURSE,
	ENEMY_KIND_SAMPLE,
	ENEMY_KIND_MAX,
	ENEMY_KIND_TEST00 = 0,
	ENEMY_KIND_ALL = 0x13
};

struct _anon5
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

struct _anon6
{
	_anon10 vertex[0];
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

enum sfMaphitMaterialType : unsigned char
{
	MH_MATERIAL_MUON,
	MH_MATERIAL_CON,
	MH_MATERIAL_TUCHI,
	MH_MATERIAL_KUSA,
	MH_MATERIAL_TETU,
	MH_MATERIAL_MIZU,
	MH_MATERIAL_TREE,
	MH_MATERIAL_JUUTAN,
	MH_MATERIAL_AMI,
	MH_MATERIAL_GARAS,
	MH_MATERIAL_KAATEN,
	MH_MATERIAL_NIKU,
	MH_MATERIAL_GAREKI
};

struct _anon7
{
	float center[4];
	float radius;
};

struct _anon8
{
	unsigned char next_offset;
	unsigned char flags;
	short id;
};

struct _anon9
{
	float bmin[4];
	float bmax[4];
};

union _anon10
{
	float node[4];
	_anon8 data[4];
};

struct _anon11
{
	float mat[4][4];
	float half_w[4];
};

enum sfMaphitSpecType : unsigned char
{
	MH_SPEC_NORMAL,
	MH_SPEC_PERMEATE
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

_GAME_WORK gamew;
float dist_s;
_anon5 player_battle_work;
_PLAYER_WORK playerw[2];
float ghost_dist;
sfObj* ghost_obj;

int _enemy_exist(sfObj* obj);
int line_hit_spec(_anon3* line);
int _check_target(sfObj* o, float dist, int mode);
int PlayerBattleCheckTarget(sfObj* o, int mode);
int PlayerBattleCheckTargetInDist(sfObj* o, float dist);
sfObj* PlayerBattleSearchEnemyNear(int mode);
sfObj* PlayerBattleSearchNextEnemyByStick();
int _check_battle_target(sfObj* o);
sfObj* PlayerBattleSearchBattleEnemyNear();
int PlayerBattleSearchPickgirlAttack();
int _check_near_enemy(sfObj* o);
int PlayerBattleSearchNearEnemies();

// 
// Start address: 0x1dd9b0
int _enemy_exist(sfObj* obj)
{
	int ret;
	EnemyCondition cond;
	// Line 73, Address: 0x1dd9b0, Func Offset: 0
	// Line 77, Address: 0x1dd9c4, Func Offset: 0x14
	// Line 78, Address: 0x1dd9d4, Func Offset: 0x24
	// Line 80, Address: 0x1dd9e0, Func Offset: 0x30
	// Line 81, Address: 0x1dd9ec, Func Offset: 0x3c
	// Line 91, Address: 0x1dda58, Func Offset: 0xa8
	// Line 92, Address: 0x1dda5c, Func Offset: 0xac
	// Line 94, Address: 0x1dda60, Func Offset: 0xb0
	// Line 95, Address: 0x1dda68, Func Offset: 0xb8
	// Func End, Address: 0x1dda7c, Func Offset: 0xcc
}

// 
// Start address: 0x1dda80
int line_hit_spec(_anon3* line)
{
	int i;
	int num;
	_anon6* pol;
	sfMaphitSpecType spec;
	sfMaphitMaterialType matel;
	// Line 99, Address: 0x1dda80, Func Offset: 0
	// Line 107, Address: 0x1dda90, Func Offset: 0x10
	// Line 108, Address: 0x1dda9c, Func Offset: 0x1c
	// Line 109, Address: 0x1ddaa4, Func Offset: 0x24
	// Line 110, Address: 0x1ddab0, Func Offset: 0x30
	// Line 111, Address: 0x1ddac0, Func Offset: 0x40
	// Line 112, Address: 0x1ddacc, Func Offset: 0x4c
	// Line 113, Address: 0x1ddad4, Func Offset: 0x54
	// Line 114, Address: 0x1ddae0, Func Offset: 0x60
	// Line 116, Address: 0x1ddafc, Func Offset: 0x7c
	// Line 118, Address: 0x1ddb04, Func Offset: 0x84
	// Line 120, Address: 0x1ddb18, Func Offset: 0x98
	// Line 121, Address: 0x1ddb20, Func Offset: 0xa0
	// Func End, Address: 0x1ddb38, Func Offset: 0xb8
}

// 
// Start address: 0x1ddb40
int _check_target(sfObj* o, float dist, int mode)
{
	_PLAYER_WORK* p;
	float pos_e[4];
	float pos_d[4];
	float rot_e[4];
	float rot_p[4];
	float ht;
	float peye[4];
	float psub[4];
	_anon3 line;
	float len;
	float nom[4];
	// Line 125, Address: 0x1ddb40, Func Offset: 0
	// Line 126, Address: 0x1ddb44, Func Offset: 0x4
	// Line 125, Address: 0x1ddb48, Func Offset: 0x8
	// Line 126, Address: 0x1ddb64, Func Offset: 0x24
	// Line 133, Address: 0x1ddb68, Func Offset: 0x28
	// Line 134, Address: 0x1ddb80, Func Offset: 0x40
	// Line 136, Address: 0x1ddba0, Func Offset: 0x60
	// Line 139, Address: 0x1ddba8, Func Offset: 0x68
	// Line 140, Address: 0x1ddbb8, Func Offset: 0x78
	// Line 143, Address: 0x1ddbc0, Func Offset: 0x80
	// Line 144, Address: 0x1ddbd8, Func Offset: 0x98
	// Line 146, Address: 0x1ddbe0, Func Offset: 0xa0
	// Line 148, Address: 0x1ddc04, Func Offset: 0xc4
	// Line 150, Address: 0x1ddc10, Func Offset: 0xd0
	// Line 151, Address: 0x1ddc28, Func Offset: 0xe8
	// Line 152, Address: 0x1ddc34, Func Offset: 0xf4
	// Line 153, Address: 0x1ddc3c, Func Offset: 0xfc
	// Line 155, Address: 0x1ddc44, Func Offset: 0x104
	// Line 157, Address: 0x1ddc48, Func Offset: 0x108
	// Line 159, Address: 0x1ddc54, Func Offset: 0x114
	// Line 160, Address: 0x1ddc74, Func Offset: 0x134
	// Line 163, Address: 0x1ddc98, Func Offset: 0x158
	// Line 164, Address: 0x1ddcac, Func Offset: 0x16c
	// Line 169, Address: 0x1ddcb8, Func Offset: 0x178
	// Line 171, Address: 0x1ddcdc, Func Offset: 0x19c
	// Line 172, Address: 0x1ddce4, Func Offset: 0x1a4
	// Line 173, Address: 0x1ddcf0, Func Offset: 0x1b0
	// Line 175, Address: 0x1ddd14, Func Offset: 0x1d4
	// Line 176, Address: 0x1ddd1c, Func Offset: 0x1dc
	// Line 178, Address: 0x1ddd28, Func Offset: 0x1e8
	// Line 179, Address: 0x1ddd34, Func Offset: 0x1f4
	// Line 180, Address: 0x1ddd38, Func Offset: 0x1f8
	// Line 181, Address: 0x1ddd4c, Func Offset: 0x20c
	// Line 184, Address: 0x1ddd58, Func Offset: 0x218
	// Line 190, Address: 0x1ddd80, Func Offset: 0x240
	// Line 191, Address: 0x1ddd90, Func Offset: 0x250
	// Line 192, Address: 0x1ddd9c, Func Offset: 0x25c
	// Line 191, Address: 0x1ddda4, Func Offset: 0x264
	// Line 192, Address: 0x1dddac, Func Offset: 0x26c
	// Line 193, Address: 0x1dddb4, Func Offset: 0x274
	// Line 199, Address: 0x1dddd4, Func Offset: 0x294
	// Line 200, Address: 0x1dde14, Func Offset: 0x2d4
	// Line 201, Address: 0x1dde2c, Func Offset: 0x2ec
	// Line 202, Address: 0x1dde30, Func Offset: 0x2f0
	// Line 204, Address: 0x1dde38, Func Offset: 0x2f8
	// Line 206, Address: 0x1dde40, Func Offset: 0x300
	// Line 208, Address: 0x1dde64, Func Offset: 0x324
	// Line 214, Address: 0x1dde84, Func Offset: 0x344
	// Line 215, Address: 0x1dde94, Func Offset: 0x354
	// Line 217, Address: 0x1dde9c, Func Offset: 0x35c
	// Line 219, Address: 0x1ddea0, Func Offset: 0x360
	// Line 223, Address: 0x1dded8, Func Offset: 0x398
	// Line 228, Address: 0x1ddee0, Func Offset: 0x3a0
	// Line 229, Address: 0x1ddeec, Func Offset: 0x3ac
	// Line 230, Address: 0x1ddef0, Func Offset: 0x3b0
	// Line 234, Address: 0x1ddefc, Func Offset: 0x3bc
	// Line 231, Address: 0x1ddf00, Func Offset: 0x3c0
	// Line 234, Address: 0x1ddf04, Func Offset: 0x3c4
	// Line 232, Address: 0x1ddf08, Func Offset: 0x3c8
	// Line 231, Address: 0x1ddf10, Func Offset: 0x3d0
	// Line 233, Address: 0x1ddf14, Func Offset: 0x3d4
	// Line 232, Address: 0x1ddf1c, Func Offset: 0x3dc
	// Line 233, Address: 0x1ddf20, Func Offset: 0x3e0
	// Line 234, Address: 0x1ddf24, Func Offset: 0x3e4
	// Line 235, Address: 0x1ddf48, Func Offset: 0x408
	// Line 236, Address: 0x1ddf74, Func Offset: 0x434
	// Line 237, Address: 0x1ddfb8, Func Offset: 0x478
	// Line 240, Address: 0x1ddfc0, Func Offset: 0x480
	// Line 241, Address: 0x1ddfc8, Func Offset: 0x488
	// Func End, Address: 0x1ddfe4, Func Offset: 0x4a4
}

// 
// Start address: 0x1ddff0
int PlayerBattleCheckTarget(sfObj* o, int mode)
{
	float dist;
	// Line 245, Address: 0x1ddff0, Func Offset: 0
	// Line 248, Address: 0x1ddff4, Func Offset: 0x4
	// Line 245, Address: 0x1ddff8, Func Offset: 0x8
	// Line 248, Address: 0x1ddffc, Func Offset: 0xc
	// Line 250, Address: 0x1de010, Func Offset: 0x20
	// Line 251, Address: 0x1de01c, Func Offset: 0x2c
	// Line 253, Address: 0x1de028, Func Offset: 0x38
	// Line 254, Address: 0x1de034, Func Offset: 0x44
	// Line 269, Address: 0x1de038, Func Offset: 0x48
	// Func End, Address: 0x1de040, Func Offset: 0x50
}

// 
// Start address: 0x1de040
int PlayerBattleCheckTargetInDist(sfObj* o, float dist)
{
	// Line 275, Address: 0x1de040, Func Offset: 0
	// Func End, Address: 0x1de04c, Func Offset: 0xc
}

// 
// Start address: 0x1de050
sfObj* PlayerBattleSearchEnemyNear(int mode)
{
	float dist_s_max;
	sfObj* o;
	sfObj* o_max;
	// Line 281, Address: 0x1de050, Func Offset: 0
	// Line 284, Address: 0x1de054, Func Offset: 0x4
	// Line 281, Address: 0x1de058, Func Offset: 0x8
	// Line 284, Address: 0x1de05c, Func Offset: 0xc
	// Line 281, Address: 0x1de060, Func Offset: 0x10
	// Line 292, Address: 0x1de070, Func Offset: 0x20
	// Line 281, Address: 0x1de074, Func Offset: 0x24
	// Line 284, Address: 0x1de078, Func Offset: 0x28
	// Line 292, Address: 0x1de07c, Func Offset: 0x2c
	// Line 296, Address: 0x1de090, Func Offset: 0x40
	// Line 300, Address: 0x1de0a4, Func Offset: 0x54
	// Line 302, Address: 0x1de0bc, Func Offset: 0x6c
	// Line 303, Address: 0x1de0c4, Func Offset: 0x74
	// Line 306, Address: 0x1de0dc, Func Offset: 0x8c
	// Line 308, Address: 0x1de0e0, Func Offset: 0x90
	// Line 309, Address: 0x1de0e8, Func Offset: 0x98
	// Line 311, Address: 0x1de100, Func Offset: 0xb0
	// Line 312, Address: 0x1de118, Func Offset: 0xc8
	// Line 314, Address: 0x1de11c, Func Offset: 0xcc
	// Line 317, Address: 0x1de124, Func Offset: 0xd4
	// Line 314, Address: 0x1de128, Func Offset: 0xd8
	// Line 320, Address: 0x1de130, Func Offset: 0xe0
	// Line 322, Address: 0x1de13c, Func Offset: 0xec
	// Line 323, Address: 0x1de140, Func Offset: 0xf0
	// Line 324, Address: 0x1de144, Func Offset: 0xf4
	// Line 328, Address: 0x1de158, Func Offset: 0x108
	// Line 332, Address: 0x1de17c, Func Offset: 0x12c
	// Func End, Address: 0x1de198, Func Offset: 0x148
}

// 
// Start address: 0x1de1a0
sfObj* PlayerBattleSearchNextEnemyByStick()
{
	_PLAYER_WORK* p;
	sfObj* o;
	sfObj* o_last;
	sfObj* o_target;
	sfObj* o_resv;
	float dig_min;
	float pos_e[4];
	float dir_c[4];
	float dir_e[4];
	float pos_ce[4];
	float pl_center[4];
	float lr;
	float pl_center[4];
	float dig_e;
	float dig_p;
	float dig;
	float dig_e;
	float dot_e;
	// Line 336, Address: 0x1de1a0, Func Offset: 0
	// Line 342, Address: 0x1de1a4, Func Offset: 0x4
	// Line 336, Address: 0x1de1a8, Func Offset: 0x8
	// Line 342, Address: 0x1de1ac, Func Offset: 0xc
	// Line 336, Address: 0x1de1b0, Func Offset: 0x10
	// Line 344, Address: 0x1de1b8, Func Offset: 0x18
	// Line 336, Address: 0x1de1bc, Func Offset: 0x1c
	// Line 345, Address: 0x1de1c0, Func Offset: 0x20
	// Line 336, Address: 0x1de1c4, Func Offset: 0x24
	// Line 346, Address: 0x1de1c8, Func Offset: 0x28
	// Line 342, Address: 0x1de1cc, Func Offset: 0x2c
	// Line 349, Address: 0x1de1d0, Func Offset: 0x30
	// Line 352, Address: 0x1de1d8, Func Offset: 0x38
	// Line 355, Address: 0x1de1ec, Func Offset: 0x4c
	// Line 364, Address: 0x1de1fc, Func Offset: 0x5c
	// Line 365, Address: 0x1de208, Func Offset: 0x68
	// Line 367, Address: 0x1de21c, Func Offset: 0x7c
	// Line 366, Address: 0x1de220, Func Offset: 0x80
	// Line 367, Address: 0x1de22c, Func Offset: 0x8c
	// Line 366, Address: 0x1de230, Func Offset: 0x90
	// Line 367, Address: 0x1de234, Func Offset: 0x94
	// Line 369, Address: 0x1de23c, Func Offset: 0x9c
	// Line 371, Address: 0x1de244, Func Offset: 0xa4
	// Line 372, Address: 0x1de264, Func Offset: 0xc4
	// Line 373, Address: 0x1de28c, Func Offset: 0xec
	// Line 375, Address: 0x1de298, Func Offset: 0xf8
	// Line 377, Address: 0x1de2a4, Func Offset: 0x104
	// Line 376, Address: 0x1de2a8, Func Offset: 0x108
	// Line 377, Address: 0x1de2ac, Func Offset: 0x10c
	// Line 378, Address: 0x1de2bc, Func Offset: 0x11c
	// Line 380, Address: 0x1de2c0, Func Offset: 0x120
	// Line 381, Address: 0x1de2e0, Func Offset: 0x140
	// Line 387, Address: 0x1de30c, Func Offset: 0x16c
	// Line 388, Address: 0x1de318, Func Offset: 0x178
	// Line 389, Address: 0x1de328, Func Offset: 0x188
	// Line 390, Address: 0x1de330, Func Offset: 0x190
	// Line 391, Address: 0x1de344, Func Offset: 0x1a4
	// Line 393, Address: 0x1de350, Func Offset: 0x1b0
	// Line 396, Address: 0x1de358, Func Offset: 0x1b8
	// Line 397, Address: 0x1de374, Func Offset: 0x1d4
	// Line 399, Address: 0x1de38c, Func Offset: 0x1ec
	// Line 401, Address: 0x1de394, Func Offset: 0x1f4
	// Line 402, Address: 0x1de398, Func Offset: 0x1f8
	// Line 403, Address: 0x1de3b4, Func Offset: 0x214
	// Line 405, Address: 0x1de3c0, Func Offset: 0x220
	// Line 412, Address: 0x1de3c8, Func Offset: 0x228
	// Line 413, Address: 0x1de3ec, Func Offset: 0x24c
	// Line 415, Address: 0x1de3f4, Func Offset: 0x254
	// Line 416, Address: 0x1de400, Func Offset: 0x260
	// Line 417, Address: 0x1de404, Func Offset: 0x264
	// Line 421, Address: 0x1de408, Func Offset: 0x268
	// Line 424, Address: 0x1de418, Func Offset: 0x278
	// Line 425, Address: 0x1de428, Func Offset: 0x288
	// Line 427, Address: 0x1de430, Func Offset: 0x290
	// Line 428, Address: 0x1de434, Func Offset: 0x294
	// Func End, Address: 0x1de454, Func Offset: 0x2b4
}

// 
// Start address: 0x1de460
int _check_battle_target(sfObj* o)
{
	// Line 432, Address: 0x1de460, Func Offset: 0
	// Line 442, Address: 0x1de468, Func Offset: 0x8
	// Line 457, Address: 0x1de470, Func Offset: 0x10
	// Line 442, Address: 0x1de474, Func Offset: 0x14
	// Line 457, Address: 0x1de478, Func Offset: 0x18
	// Func End, Address: 0x1de480, Func Offset: 0x20
}

// 
// Start address: 0x1de480
sfObj* PlayerBattleSearchBattleEnemyNear()
{
	_PLAYER_WORK* p;
	float dist_s_max;
	float dist;
	sfObj* o;
	sfObj* o_last;
	sfObj* o_max;
	float pos_e[4];
	float pos_d[4];
	// Line 461, Address: 0x1de480, Func Offset: 0
	// Line 463, Address: 0x1de484, Func Offset: 0x4
	// Line 461, Address: 0x1de488, Func Offset: 0x8
	// Line 463, Address: 0x1de48c, Func Offset: 0xc
	// Line 461, Address: 0x1de490, Func Offset: 0x10
	// Line 462, Address: 0x1de498, Func Offset: 0x18
	// Line 461, Address: 0x1de49c, Func Offset: 0x1c
	// Line 462, Address: 0x1de4a0, Func Offset: 0x20
	// Line 461, Address: 0x1de4a4, Func Offset: 0x24
	// Line 469, Address: 0x1de4a8, Func Offset: 0x28
	// Line 463, Address: 0x1de4ac, Func Offset: 0x2c
	// Line 472, Address: 0x1de4b0, Func Offset: 0x30
	// Line 478, Address: 0x1de4b8, Func Offset: 0x38
	// Line 481, Address: 0x1de4d0, Func Offset: 0x50
	// Line 482, Address: 0x1de4d8, Func Offset: 0x58
	// Line 483, Address: 0x1de4f8, Func Offset: 0x78
	// Line 485, Address: 0x1de514, Func Offset: 0x94
	// Line 487, Address: 0x1de520, Func Offset: 0xa0
	// Line 488, Address: 0x1de524, Func Offset: 0xa4
	// Line 489, Address: 0x1de528, Func Offset: 0xa8
	// Line 492, Address: 0x1de538, Func Offset: 0xb8
	// Line 493, Address: 0x1de554, Func Offset: 0xd4
	// Line 494, Address: 0x1de55c, Func Offset: 0xdc
	// Line 496, Address: 0x1de560, Func Offset: 0xe0
	// Line 497, Address: 0x1de568, Func Offset: 0xe8
	// Func End, Address: 0x1de584, Func Offset: 0x104
}

// 
// Start address: 0x1de590
int PlayerBattleSearchPickgirlAttack()
{
	sfObj* o;
	int ret;
	// Line 501, Address: 0x1de590, Func Offset: 0
	// Line 507, Address: 0x1de594, Func Offset: 0x4
	// Line 501, Address: 0x1de598, Func Offset: 0x8
	// Line 507, Address: 0x1de5a4, Func Offset: 0x14
	// Line 509, Address: 0x1de5b8, Func Offset: 0x28
	// Line 510, Address: 0x1de5d0, Func Offset: 0x40
	// Line 511, Address: 0x1de5e8, Func Offset: 0x58
	// Line 513, Address: 0x1de5ec, Func Offset: 0x5c
	// Line 515, Address: 0x1de600, Func Offset: 0x70
	// Line 516, Address: 0x1de604, Func Offset: 0x74
	// Func End, Address: 0x1de618, Func Offset: 0x88
}

// 
// Start address: 0x1de620
int _check_near_enemy(sfObj* o)
{
	_PLAYER_WORK* p;
	float pos_e[4];
	float pos_d[4];
	float dist;
	// Line 520, Address: 0x1de620, Func Offset: 0
	// Line 527, Address: 0x1de624, Func Offset: 0x4
	// Line 520, Address: 0x1de628, Func Offset: 0x8
	// Line 527, Address: 0x1de62c, Func Offset: 0xc
	// Line 520, Address: 0x1de630, Func Offset: 0x10
	// Line 521, Address: 0x1de640, Func Offset: 0x20
	// Line 527, Address: 0x1de644, Func Offset: 0x24
	// Line 530, Address: 0x1de648, Func Offset: 0x28
	// Line 531, Address: 0x1de658, Func Offset: 0x38
	// Line 534, Address: 0x1de660, Func Offset: 0x40
	// Line 536, Address: 0x1de66c, Func Offset: 0x4c
	// Line 537, Address: 0x1de68c, Func Offset: 0x6c
	// Line 540, Address: 0x1de6b0, Func Offset: 0x90
	// Line 541, Address: 0x1de6c4, Func Offset: 0xa4
	// Line 543, Address: 0x1de6d0, Func Offset: 0xb0
	// Line 544, Address: 0x1de6f4, Func Offset: 0xd4
	// Line 563, Address: 0x1de700, Func Offset: 0xe0
	// Line 564, Address: 0x1de708, Func Offset: 0xe8
	// Func End, Address: 0x1de720, Func Offset: 0x100
}

// 
// Start address: 0x1de720
int PlayerBattleSearchNearEnemies()
{
	_PLAYER_WORK* p;
	sfObj* o;
	sfObj* o_last;
	int ret;
	EnemyKind enkind;
	float pos_e[4];
	float sb[4];
	float dist;
	float pos_e[4];
	// Line 566, Address: 0x1de720, Func Offset: 0
	// Line 575, Address: 0x1de724, Func Offset: 0x4
	// Line 566, Address: 0x1de728, Func Offset: 0x8
	// Line 574, Address: 0x1de72c, Func Offset: 0xc
	// Line 566, Address: 0x1de730, Func Offset: 0x10
	// Line 575, Address: 0x1de734, Func Offset: 0x14
	// Line 566, Address: 0x1de738, Func Offset: 0x18
	// Line 567, Address: 0x1de73c, Func Offset: 0x1c
	// Line 566, Address: 0x1de740, Func Offset: 0x20
	// Line 567, Address: 0x1de744, Func Offset: 0x24
	// Line 574, Address: 0x1de748, Func Offset: 0x28
	// Line 570, Address: 0x1de74c, Func Offset: 0x2c
	// Line 575, Address: 0x1de750, Func Offset: 0x30
	// Line 573, Address: 0x1de754, Func Offset: 0x34
	// Line 578, Address: 0x1de758, Func Offset: 0x38
	// Line 583, Address: 0x1de760, Func Offset: 0x40
	// Line 584, Address: 0x1de768, Func Offset: 0x48
	// Line 592, Address: 0x1de7a0, Func Offset: 0x80
	// Line 593, Address: 0x1de7ac, Func Offset: 0x8c
	// Line 595, Address: 0x1de7c8, Func Offset: 0xa8
	// Line 594, Address: 0x1de7cc, Func Offset: 0xac
	// Line 595, Address: 0x1de7e4, Func Offset: 0xc4
	// Line 594, Address: 0x1de7e8, Func Offset: 0xc8
	// Line 595, Address: 0x1de800, Func Offset: 0xe0
	// Line 597, Address: 0x1de80c, Func Offset: 0xec
	// Line 596, Address: 0x1de810, Func Offset: 0xf0
	// Line 601, Address: 0x1de818, Func Offset: 0xf8
	// Line 604, Address: 0x1de82c, Func Offset: 0x10c
	// Line 606, Address: 0x1de844, Func Offset: 0x124
	// Line 608, Address: 0x1de84c, Func Offset: 0x12c
	// Line 612, Address: 0x1de85c, Func Offset: 0x13c
	// Line 614, Address: 0x1de870, Func Offset: 0x150
	// Line 615, Address: 0x1de874, Func Offset: 0x154
	// Func End, Address: 0x1de88c, Func Offset: 0x16c
}

