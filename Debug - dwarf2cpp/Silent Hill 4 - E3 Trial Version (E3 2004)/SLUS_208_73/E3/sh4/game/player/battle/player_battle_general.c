typedef union _anon0;
typedef struct sgBone;
typedef struct _anon1;
typedef struct sfObj;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _PLAYER_WORK;
typedef struct _anon5;
typedef struct sfCharacter;
typedef struct sgAnime;
typedef struct _anon6;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sgIKHandle;
typedef struct sfCldObject;
typedef struct sgQTNode;
typedef struct sfCldPart;
typedef struct _anon7;
typedef struct sgSVModel;
typedef struct _anon8;
typedef struct _anon9;
typedef struct sgQTObject;
typedef struct sfOffsetAABB;
typedef union sfCldBody;
typedef enum GameItem : unsigned char;

typedef void(*type_1)(sfObj*);
typedef sgIKSolveResult(*type_5)();
typedef void(*type_8)(_anon7*, int, int, float*);
typedef void(*type_12)(sgAnime*, int);
typedef void(*type_18)(sfObj*);

typedef float type_0[4];
typedef float type_2[4];
typedef float type_3[4][2];
typedef sfCldPart* type_4[6];
typedef unsigned char type_6[3];
typedef float type_7[4][4];
typedef _PLAYER_WORK type_9[2];
typedef float type_10[4];
typedef void* type_11[4];
typedef short type_13[2];
typedef unsigned short type_14[2];
typedef char type_15[4];
typedef _anon0 type_16[256];
typedef unsigned char type_17[4];
typedef unsigned char type_19[3];
typedef float type_20[1];
typedef int type_21[1];
typedef unsigned char type_22[4];

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
	float start[4];
	float end[4];
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

struct _anon2
{
	float center[4];
	float radius;
};

struct _anon3
{
	float bmin[4];
	float bmax[4];
};

struct _anon4
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
	_anon9* anim_ctrl;
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

struct _anon5
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

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon8 model_work;
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

struct _anon6
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

struct _anon7
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

struct _anon8
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon7*, int, int, float*);
	int equip_flag;
};

struct _anon9
{
	int dummy;
};

struct sgQTObject
{
	_anon2 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

struct sfOffsetAABB
{
	_anon3 aabb;
	float offset[4];
};

union sfCldBody
{
	_anon4 obb;
	_anon3 aabb;
	sfOffsetAABB offset_aabb;
	_anon1 line;
	_anon2 sphere;
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

_PLAYER_WORK playerw[2];
_anon6 player_battle_work;
int stun_effect_set;
float sg_vector_zero[4];

int PlayerBattleGeneralDownBlow();
int PlayerBattleGeneralGetSubAnim(_PLAYER_WORK* p, _anon5* ui_work);
void PlayerBattleGeneralSetAttack(_PLAYER_WORK* p);
void PlayerBattleGeneralCheckBackstep(_PLAYER_WORK* p, _anon5* ui_work);
int motion_is_pipe();
int PlayerBattleGeneralStart();
int neutral_all();
int PlayerBattleGeneralNeutral();
int normal_attack_all();
int PlayerBattleGeneralNormalAttack();
int strong_attack_all();
int PlayerBattleGeneralStrongAttack();
int PlayerBattleGeneralStop();
int PlayerBattleGeneralStopNoCancel();
int PlayerBattleGeneralFinish();
void PlayerBattleStungunEffectSet();

// 
// Start address: 0x2d06e0
int PlayerBattleGeneralDownBlow()
{
	int ret;
	// Line 74, Address: 0x2d06e0, Func Offset: 0
	// Line 77, Address: 0x2d06ec, Func Offset: 0xc
	// Line 78, Address: 0x2d06fc, Func Offset: 0x1c
	// Line 80, Address: 0x2d0720, Func Offset: 0x40
	// Line 82, Address: 0x2d0724, Func Offset: 0x44
	// Line 84, Address: 0x2d0728, Func Offset: 0x48
	// Line 85, Address: 0x2d072c, Func Offset: 0x4c
	// Func End, Address: 0x2d073c, Func Offset: 0x5c
}

// 
// Start address: 0x2d0740
int PlayerBattleGeneralGetSubAnim(_PLAYER_WORK* p, _anon5* ui_work)
{
	float thres;
	int ret;
	float pos_e[4];
	float rotdif;
	float f;
	float a;
	int prev;
	// Line 89, Address: 0x2d0740, Func Offset: 0
	// Line 98, Address: 0x2d0744, Func Offset: 0x4
	// Line 89, Address: 0x2d0748, Func Offset: 0x8
	// Line 98, Address: 0x2d0754, Func Offset: 0x14
	// Line 101, Address: 0x2d075c, Func Offset: 0x1c
	// Line 104, Address: 0x2d0768, Func Offset: 0x28
	// Line 105, Address: 0x2d0774, Func Offset: 0x34
	// Line 109, Address: 0x2d0780, Func Offset: 0x40
	// Line 110, Address: 0x2d078c, Func Offset: 0x4c
	// Line 112, Address: 0x2d0790, Func Offset: 0x50
	// Line 113, Address: 0x2d07b0, Func Offset: 0x70
	// Line 116, Address: 0x2d07bc, Func Offset: 0x7c
	// Line 117, Address: 0x2d07c4, Func Offset: 0x84
	// Line 118, Address: 0x2d07dc, Func Offset: 0x9c
	// Line 120, Address: 0x2d07f4, Func Offset: 0xb4
	// Line 126, Address: 0x2d081c, Func Offset: 0xdc
	// Line 130, Address: 0x2d0828, Func Offset: 0xe8
	// Line 136, Address: 0x2d0830, Func Offset: 0xf0
	// Line 151, Address: 0x2d0838, Func Offset: 0xf8
	// Line 152, Address: 0x2d0848, Func Offset: 0x108
	// Line 154, Address: 0x2d084c, Func Offset: 0x10c
	// Line 157, Address: 0x2d0858, Func Offset: 0x118
	// Line 158, Address: 0x2d0860, Func Offset: 0x120
	// Line 161, Address: 0x2d0880, Func Offset: 0x140
	// Line 167, Address: 0x2d0888, Func Offset: 0x148
	// Line 168, Address: 0x2d089c, Func Offset: 0x15c
	// Line 170, Address: 0x2d08a8, Func Offset: 0x168
	// Line 172, Address: 0x2d08ac, Func Offset: 0x16c
	// Line 174, Address: 0x2d08b0, Func Offset: 0x170
	// Line 176, Address: 0x2d08c0, Func Offset: 0x180
	// Line 180, Address: 0x2d08c8, Func Offset: 0x188
	// Func End, Address: 0x2d08dc, Func Offset: 0x19c
}

// 
// Start address: 0x2d08e0
void PlayerBattleGeneralSetAttack(_PLAYER_WORK* p)
{
	float e_pos[4];
	// Line 184, Address: 0x2d08e0, Func Offset: 0
	// Line 186, Address: 0x2d08e4, Func Offset: 0x4
	// Line 184, Address: 0x2d08e8, Func Offset: 0x8
	// Line 186, Address: 0x2d08f0, Func Offset: 0x10
	// Line 187, Address: 0x2d08fc, Func Offset: 0x1c
	// Line 188, Address: 0x2d090c, Func Offset: 0x2c
	// Line 190, Address: 0x2d0918, Func Offset: 0x38
	// Line 193, Address: 0x2d0920, Func Offset: 0x40
	// Line 194, Address: 0x2d0928, Func Offset: 0x48
	// Line 195, Address: 0x2d0930, Func Offset: 0x50
	// Line 196, Address: 0x2d0938, Func Offset: 0x58
	// Line 198, Address: 0x2d0964, Func Offset: 0x84
	// Line 199, Address: 0x2d0968, Func Offset: 0x88
	// Line 200, Address: 0x2d0970, Func Offset: 0x90
	// Line 202, Address: 0x2d0978, Func Offset: 0x98
	// Line 204, Address: 0x2d0984, Func Offset: 0xa4
	// Line 205, Address: 0x2d098c, Func Offset: 0xac
	// Line 208, Address: 0x2d09a0, Func Offset: 0xc0
	// Line 210, Address: 0x2d09ac, Func Offset: 0xcc
	// Line 211, Address: 0x2d09d0, Func Offset: 0xf0
	// Line 214, Address: 0x2d09e0, Func Offset: 0x100
	// Line 220, Address: 0x2d09e8, Func Offset: 0x108
	// Line 221, Address: 0x2d09f8, Func Offset: 0x118
	// Line 222, Address: 0x2d0a00, Func Offset: 0x120
	// Line 225, Address: 0x2d0a08, Func Offset: 0x128
	// Line 228, Address: 0x2d0a10, Func Offset: 0x130
	// Line 229, Address: 0x2d0a1c, Func Offset: 0x13c
	// Line 230, Address: 0x2d0a30, Func Offset: 0x150
	// Line 233, Address: 0x2d0a38, Func Offset: 0x158
	// Line 234, Address: 0x2d0a54, Func Offset: 0x174
	// Line 237, Address: 0x2d0a68, Func Offset: 0x188
	// Line 239, Address: 0x2d0a6c, Func Offset: 0x18c
	// Line 240, Address: 0x2d0a70, Func Offset: 0x190
	// Func End, Address: 0x2d0a80, Func Offset: 0x1a0
}

// 
// Start address: 0x2d0a80
void PlayerBattleGeneralCheckBackstep(_PLAYER_WORK* p, _anon5* ui_work)
{
	// Line 244, Address: 0x2d0a80, Func Offset: 0
	// Line 245, Address: 0x2d0a84, Func Offset: 0x4
	// Line 244, Address: 0x2d0a88, Func Offset: 0x8
	// Line 245, Address: 0x2d0a8c, Func Offset: 0xc
	// Line 244, Address: 0x2d0a90, Func Offset: 0x10
	// Line 245, Address: 0x2d0a94, Func Offset: 0x14
	// Line 246, Address: 0x2d0aa4, Func Offset: 0x24
	// Line 249, Address: 0x2d0ab4, Func Offset: 0x34
	// Line 250, Address: 0x2d0ac0, Func Offset: 0x40
	// Line 253, Address: 0x2d0ad4, Func Offset: 0x54
	// Line 251, Address: 0x2d0ad8, Func Offset: 0x58
	// Line 253, Address: 0x2d0adc, Func Offset: 0x5c
	// Line 252, Address: 0x2d0ae4, Func Offset: 0x64
	// Line 254, Address: 0x2d0ae8, Func Offset: 0x68
	// Line 255, Address: 0x2d0af0, Func Offset: 0x70
	// Line 258, Address: 0x2d0b04, Func Offset: 0x84
	// Line 256, Address: 0x2d0b08, Func Offset: 0x88
	// Line 258, Address: 0x2d0b0c, Func Offset: 0x8c
	// Line 257, Address: 0x2d0b14, Func Offset: 0x94
	// Line 260, Address: 0x2d0b1c, Func Offset: 0x9c
	// Line 258, Address: 0x2d0b20, Func Offset: 0xa0
	// Line 263, Address: 0x2d0b24, Func Offset: 0xa4
	// Line 264, Address: 0x2d0b38, Func Offset: 0xb8
	// Line 265, Address: 0x2d0b48, Func Offset: 0xc8
	// Line 270, Address: 0x2d0b50, Func Offset: 0xd0
	// Func End, Address: 0x2d0b60, Func Offset: 0xe0
}

// 
// Start address: 0x2d0b60
int motion_is_pipe()
{
	int ret;
	// Line 275, Address: 0x2d0b60, Func Offset: 0
	// Line 277, Address: 0x2d0b64, Func Offset: 0x4
	// Line 275, Address: 0x2d0b68, Func Offset: 0x8
	// Line 277, Address: 0x2d0b6c, Func Offset: 0xc
	// Line 278, Address: 0x2d0b74, Func Offset: 0x14
	// Line 279, Address: 0x2d0b80, Func Offset: 0x20
	// Line 281, Address: 0x2d0b94, Func Offset: 0x34
	// Line 282, Address: 0x2d0ba0, Func Offset: 0x40
	// Line 283, Address: 0x2d0bac, Func Offset: 0x4c
	// Line 286, Address: 0x2d0bb0, Func Offset: 0x50
	// Func End, Address: 0x2d0bb8, Func Offset: 0x58
}

// 
// Start address: 0x2d0bc0
int PlayerBattleGeneralStart()
{
	sfObj* target;
	// Line 290, Address: 0x2d0bc0, Func Offset: 0
	// Line 292, Address: 0x2d0bc4, Func Offset: 0x4
	// Line 290, Address: 0x2d0bc8, Func Offset: 0x8
	// Line 292, Address: 0x2d0bcc, Func Offset: 0xc
	// Line 294, Address: 0x2d0bd8, Func Offset: 0x18
	// Line 295, Address: 0x2d0be0, Func Offset: 0x20
	// Line 296, Address: 0x2d0be8, Func Offset: 0x28
	// Line 297, Address: 0x2d0bf0, Func Offset: 0x30
	// Line 299, Address: 0x2d0c04, Func Offset: 0x44
	// Line 300, Address: 0x2d0c08, Func Offset: 0x48
	// Line 301, Address: 0x2d0c1c, Func Offset: 0x5c
	// Line 302, Address: 0x2d0c24, Func Offset: 0x64
	// Line 304, Address: 0x2d0c30, Func Offset: 0x70
	// Line 306, Address: 0x2d0c48, Func Offset: 0x88
	// Line 307, Address: 0x2d0c58, Func Offset: 0x98
	// Line 309, Address: 0x2d0c60, Func Offset: 0xa0
	// Line 313, Address: 0x2d0c70, Func Offset: 0xb0
	// Line 315, Address: 0x2d0c84, Func Offset: 0xc4
	// Line 316, Address: 0x2d0c90, Func Offset: 0xd0
	// Line 317, Address: 0x2d0c98, Func Offset: 0xd8
	// Line 318, Address: 0x2d0cac, Func Offset: 0xec
	// Line 319, Address: 0x2d0cb8, Func Offset: 0xf8
	// Line 320, Address: 0x2d0cc0, Func Offset: 0x100
	// Line 321, Address: 0x2d0cc8, Func Offset: 0x108
	// Line 322, Address: 0x2d0cdc, Func Offset: 0x11c
	// Line 323, Address: 0x2d0ce4, Func Offset: 0x124
	// Line 324, Address: 0x2d0cf0, Func Offset: 0x130
	// Line 326, Address: 0x2d0d0c, Func Offset: 0x14c
	// Line 327, Address: 0x2d0d24, Func Offset: 0x164
	// Line 330, Address: 0x2d0d28, Func Offset: 0x168
	// Line 331, Address: 0x2d0d3c, Func Offset: 0x17c
	// Line 332, Address: 0x2d0d50, Func Offset: 0x190
	// Line 333, Address: 0x2d0d6c, Func Offset: 0x1ac
	// Line 336, Address: 0x2d0d78, Func Offset: 0x1b8
	// Line 338, Address: 0x2d0d84, Func Offset: 0x1c4
	// Line 341, Address: 0x2d0d88, Func Offset: 0x1c8
	// Line 340, Address: 0x2d0d8c, Func Offset: 0x1cc
	// Line 341, Address: 0x2d0d90, Func Offset: 0x1d0
	// Func End, Address: 0x2d0d98, Func Offset: 0x1d8
}

// 
// Start address: 0x2d0da0
int neutral_all()
{
	int sanim;
	// Line 345, Address: 0x2d0da0, Func Offset: 0
	// Line 348, Address: 0x2d0da4, Func Offset: 0x4
	// Line 345, Address: 0x2d0da8, Func Offset: 0x8
	// Line 348, Address: 0x2d0dac, Func Offset: 0xc
	// Line 349, Address: 0x2d0db8, Func Offset: 0x18
	// Line 350, Address: 0x2d0dbc, Func Offset: 0x1c
	// Line 351, Address: 0x2d0dd4, Func Offset: 0x34
	// Line 352, Address: 0x2d0e00, Func Offset: 0x60
	// Line 355, Address: 0x2d0e18, Func Offset: 0x78
	// Line 357, Address: 0x2d0e2c, Func Offset: 0x8c
	// Line 358, Address: 0x2d0e34, Func Offset: 0x94
	// Line 360, Address: 0x2d0e38, Func Offset: 0x98
	// Line 364, Address: 0x2d0e4c, Func Offset: 0xac
	// Line 366, Address: 0x2d0e58, Func Offset: 0xb8
	// Line 367, Address: 0x2d0e6c, Func Offset: 0xcc
	// Line 370, Address: 0x2d0e70, Func Offset: 0xd0
	// Line 369, Address: 0x2d0e78, Func Offset: 0xd8
	// Line 370, Address: 0x2d0e7c, Func Offset: 0xdc
	// Func End, Address: 0x2d0e84, Func Offset: 0xe4
}

// 
// Start address: 0x2d0e90
int PlayerBattleGeneralNeutral()
{
	sfObj* target;
	sfObj* next_target;
	sfObj* next_target;
	// Line 372, Address: 0x2d0e90, Func Offset: 0
	// Line 373, Address: 0x2d0e94, Func Offset: 0x4
	// Line 372, Address: 0x2d0e98, Func Offset: 0x8
	// Line 373, Address: 0x2d0ea0, Func Offset: 0x10
	// Line 374, Address: 0x2d0eb0, Func Offset: 0x20
	// Line 375, Address: 0x2d0eb8, Func Offset: 0x28
	// Line 377, Address: 0x2d0ec0, Func Offset: 0x30
	// Line 380, Address: 0x2d0ec8, Func Offset: 0x38
	// Line 383, Address: 0x2d0ed8, Func Offset: 0x48
	// Line 384, Address: 0x2d0ee0, Func Offset: 0x50
	// Line 385, Address: 0x2d0ee8, Func Offset: 0x58
	// Line 386, Address: 0x2d0eec, Func Offset: 0x5c
	// Line 387, Address: 0x2d0efc, Func Offset: 0x6c
	// Line 390, Address: 0x2d0f08, Func Offset: 0x78
	// Line 391, Address: 0x2d0f10, Func Offset: 0x80
	// Line 392, Address: 0x2d0f18, Func Offset: 0x88
	// Line 393, Address: 0x2d0f1c, Func Offset: 0x8c
	// Line 396, Address: 0x2d0f2c, Func Offset: 0x9c
	// Line 399, Address: 0x2d0f40, Func Offset: 0xb0
	// Line 400, Address: 0x2d0f48, Func Offset: 0xb8
	// Line 403, Address: 0x2d0f60, Func Offset: 0xd0
	// Line 405, Address: 0x2d0f6c, Func Offset: 0xdc
	// Line 406, Address: 0x2d0f74, Func Offset: 0xe4
	// Line 408, Address: 0x2d0f8c, Func Offset: 0xfc
	// Line 409, Address: 0x2d0f90, Func Offset: 0x100
	// Line 414, Address: 0x2d0fa4, Func Offset: 0x114
	// Line 409, Address: 0x2d0fa8, Func Offset: 0x118
	// Line 416, Address: 0x2d0fb0, Func Offset: 0x120
	// Line 418, Address: 0x2d0fb8, Func Offset: 0x128
	// Line 419, Address: 0x2d0fc0, Func Offset: 0x130
	// Line 420, Address: 0x2d0fd0, Func Offset: 0x140
	// Line 421, Address: 0x2d0fd4, Func Offset: 0x144
	// Line 422, Address: 0x2d0fd8, Func Offset: 0x148
	// Line 423, Address: 0x2d0fe0, Func Offset: 0x150
	// Line 427, Address: 0x2d0ff4, Func Offset: 0x164
	// Line 429, Address: 0x2d0ffc, Func Offset: 0x16c
	// Line 430, Address: 0x2d1004, Func Offset: 0x174
	// Line 431, Address: 0x2d1008, Func Offset: 0x178
	// Line 434, Address: 0x2d101c, Func Offset: 0x18c
	// Line 436, Address: 0x2d1020, Func Offset: 0x190
	// Line 437, Address: 0x2d1034, Func Offset: 0x1a4
	// Line 438, Address: 0x2d103c, Func Offset: 0x1ac
	// Line 439, Address: 0x2d1048, Func Offset: 0x1b8
	// Line 440, Address: 0x2d105c, Func Offset: 0x1cc
	// Line 441, Address: 0x2d1064, Func Offset: 0x1d4
	// Line 442, Address: 0x2d1070, Func Offset: 0x1e0
	// Line 444, Address: 0x2d10a0, Func Offset: 0x210
	// Line 445, Address: 0x2d10a4, Func Offset: 0x214
	// Line 446, Address: 0x2d10b0, Func Offset: 0x220
	// Line 448, Address: 0x2d10dc, Func Offset: 0x24c
	// Line 447, Address: 0x2d10e0, Func Offset: 0x250
	// Line 448, Address: 0x2d10e4, Func Offset: 0x254
	// Line 447, Address: 0x2d10e8, Func Offset: 0x258
	// Line 449, Address: 0x2d10f0, Func Offset: 0x260
	// Line 450, Address: 0x2d10f8, Func Offset: 0x268
	// Line 451, Address: 0x2d1100, Func Offset: 0x270
	// Line 453, Address: 0x2d112c, Func Offset: 0x29c
	// Line 452, Address: 0x2d1130, Func Offset: 0x2a0
	// Line 453, Address: 0x2d1134, Func Offset: 0x2a4
	// Line 452, Address: 0x2d1138, Func Offset: 0x2a8
	// Line 454, Address: 0x2d1140, Func Offset: 0x2b0
	// Line 455, Address: 0x2d114c, Func Offset: 0x2bc
	// Line 457, Address: 0x2d1150, Func Offset: 0x2c0
	// Line 458, Address: 0x2d1178, Func Offset: 0x2e8
	// Line 459, Address: 0x2d1184, Func Offset: 0x2f4
	// Line 460, Address: 0x2d1188, Func Offset: 0x2f8
	// Line 461, Address: 0x2d119c, Func Offset: 0x30c
	// Line 462, Address: 0x2d11b0, Func Offset: 0x320
	// Line 463, Address: 0x2d11c8, Func Offset: 0x338
	// Line 466, Address: 0x2d11d0, Func Offset: 0x340
	// Line 468, Address: 0x2d11dc, Func Offset: 0x34c
	// Line 471, Address: 0x2d11e0, Func Offset: 0x350
	// Line 470, Address: 0x2d11e8, Func Offset: 0x358
	// Line 471, Address: 0x2d11ec, Func Offset: 0x35c
	// Func End, Address: 0x2d11f4, Func Offset: 0x364
}

// 
// Start address: 0x2d1200
int normal_attack_all()
{
	float a_time;
	float pos_e[4];
	sgBone* bone;
	float pos_wp[4];
	float dif;
	float adif;
	float target[4];
	sgBone* bone;
	float pos_wp[4];
	float col[4];
	int num;
	// Line 475, Address: 0x2d1200, Func Offset: 0
	// Line 477, Address: 0x2d1204, Func Offset: 0x4
	// Line 475, Address: 0x2d1208, Func Offset: 0x8
	// Line 477, Address: 0x2d120c, Func Offset: 0xc
	// Line 475, Address: 0x2d1210, Func Offset: 0x10
	// Line 477, Address: 0x2d1218, Func Offset: 0x18
	// Line 479, Address: 0x2d1228, Func Offset: 0x28
	// Line 480, Address: 0x2d1238, Func Offset: 0x38
	// Line 482, Address: 0x2d1240, Func Offset: 0x40
	// Line 485, Address: 0x2d1250, Func Offset: 0x50
	// Line 486, Address: 0x2d1258, Func Offset: 0x58
	// Line 487, Address: 0x2d126c, Func Offset: 0x6c
	// Line 488, Address: 0x2d1278, Func Offset: 0x78
	// Line 489, Address: 0x2d1280, Func Offset: 0x80
	// Line 490, Address: 0x2d128c, Func Offset: 0x8c
	// Line 493, Address: 0x2d1298, Func Offset: 0x98
	// Line 495, Address: 0x2d12ac, Func Offset: 0xac
	// Line 496, Address: 0x2d12c4, Func Offset: 0xc4
	// Line 497, Address: 0x2d12fc, Func Offset: 0xfc
	// Line 503, Address: 0x2d130c, Func Offset: 0x10c
	// Line 504, Address: 0x2d1314, Func Offset: 0x114
	// Line 505, Address: 0x2d1324, Func Offset: 0x124
	// Line 506, Address: 0x2d1330, Func Offset: 0x130
	// Line 508, Address: 0x2d133c, Func Offset: 0x13c
	// Line 509, Address: 0x2d1354, Func Offset: 0x154
	// Line 510, Address: 0x2d1358, Func Offset: 0x158
	// Line 511, Address: 0x2d1370, Func Offset: 0x170
	// Line 512, Address: 0x2d1378, Func Offset: 0x178
	// Line 514, Address: 0x2d1390, Func Offset: 0x190
	// Line 516, Address: 0x2d13a4, Func Offset: 0x1a4
	// Line 515, Address: 0x2d13a8, Func Offset: 0x1a8
	// Line 516, Address: 0x2d13ac, Func Offset: 0x1ac
	// Line 519, Address: 0x2d13b4, Func Offset: 0x1b4
	// Line 521, Address: 0x2d13b8, Func Offset: 0x1b8
	// Line 524, Address: 0x2d13f0, Func Offset: 0x1f0
	// Line 525, Address: 0x2d13fc, Func Offset: 0x1fc
	// Line 524, Address: 0x2d1400, Func Offset: 0x200
	// Line 525, Address: 0x2d1408, Func Offset: 0x208
	// Line 526, Address: 0x2d1414, Func Offset: 0x214
	// Line 527, Address: 0x2d1420, Func Offset: 0x220
	// Line 528, Address: 0x2d1444, Func Offset: 0x244
	// Line 529, Address: 0x2d144c, Func Offset: 0x24c
	// Line 531, Address: 0x2d1450, Func Offset: 0x250
	// Line 532, Address: 0x2d1458, Func Offset: 0x258
	// Line 534, Address: 0x2d1460, Func Offset: 0x260
	// Line 537, Address: 0x2d1468, Func Offset: 0x268
	// Line 538, Address: 0x2d147c, Func Offset: 0x27c
	// Line 539, Address: 0x2d1488, Func Offset: 0x288
	// Line 541, Address: 0x2d1490, Func Offset: 0x290
	// Line 539, Address: 0x2d1494, Func Offset: 0x294
	// Line 541, Address: 0x2d1498, Func Offset: 0x298
	// Line 542, Address: 0x2d14a8, Func Offset: 0x2a8
	// Line 544, Address: 0x2d14b8, Func Offset: 0x2b8
	// Line 549, Address: 0x2d14c0, Func Offset: 0x2c0
	// Line 550, Address: 0x2d14d4, Func Offset: 0x2d4
	// Line 553, Address: 0x2d14e0, Func Offset: 0x2e0
	// Line 557, Address: 0x2d1538, Func Offset: 0x338
	// Line 558, Address: 0x2d154c, Func Offset: 0x34c
	// Line 559, Address: 0x2d1558, Func Offset: 0x358
	// Line 560, Address: 0x2d155c, Func Offset: 0x35c
	// Line 559, Address: 0x2d1560, Func Offset: 0x360
	// Line 560, Address: 0x2d1564, Func Offset: 0x364
	// Line 561, Address: 0x2d1574, Func Offset: 0x374
	// Line 562, Address: 0x2d1584, Func Offset: 0x384
	// Line 563, Address: 0x2d1588, Func Offset: 0x388
	// Line 566, Address: 0x2d1590, Func Offset: 0x390
	// Line 569, Address: 0x2d15c8, Func Offset: 0x3c8
	// Line 570, Address: 0x2d15d4, Func Offset: 0x3d4
	// Line 572, Address: 0x2d15dc, Func Offset: 0x3dc
	// Line 570, Address: 0x2d15e0, Func Offset: 0x3e0
	// Line 572, Address: 0x2d15e4, Func Offset: 0x3e4
	// Line 573, Address: 0x2d15f4, Func Offset: 0x3f4
	// Line 574, Address: 0x2d1604, Func Offset: 0x404
	// Line 575, Address: 0x2d1608, Func Offset: 0x408
	// Line 577, Address: 0x2d1610, Func Offset: 0x410
	// Line 582, Address: 0x2d163c, Func Offset: 0x43c
	// Line 581, Address: 0x2d1640, Func Offset: 0x440
	// Line 582, Address: 0x2d1648, Func Offset: 0x448
	// Line 583, Address: 0x2d1654, Func Offset: 0x454
	// Line 584, Address: 0x2d1658, Func Offset: 0x458
	// Line 583, Address: 0x2d165c, Func Offset: 0x45c
	// Line 584, Address: 0x2d1660, Func Offset: 0x460
	// Line 585, Address: 0x2d1670, Func Offset: 0x470
	// Line 587, Address: 0x2d1680, Func Offset: 0x480
	// Line 589, Address: 0x2d1688, Func Offset: 0x488
	// Line 592, Address: 0x2d16d0, Func Offset: 0x4d0
	// Line 593, Address: 0x2d16e8, Func Offset: 0x4e8
	// Line 594, Address: 0x2d16fc, Func Offset: 0x4fc
	// Line 595, Address: 0x2d170c, Func Offset: 0x50c
	// Line 596, Address: 0x2d1710, Func Offset: 0x510
	// Line 600, Address: 0x2d1718, Func Offset: 0x518
	// Line 602, Address: 0x2d1724, Func Offset: 0x524
	// Line 604, Address: 0x2d174c, Func Offset: 0x54c
	// Line 605, Address: 0x2d1768, Func Offset: 0x568
	// Line 607, Address: 0x2d1770, Func Offset: 0x570
	// Line 608, Address: 0x2d177c, Func Offset: 0x57c
	// Line 611, Address: 0x2d1780, Func Offset: 0x580
	// Line 613, Address: 0x2d17ac, Func Offset: 0x5ac
	// Line 614, Address: 0x2d17bc, Func Offset: 0x5bc
	// Line 616, Address: 0x2d17c0, Func Offset: 0x5c0
	// Line 617, Address: 0x2d17c8, Func Offset: 0x5c8
	// Func End, Address: 0x2d17dc, Func Offset: 0x5dc
}

// 
// Start address: 0x2d17e0
int PlayerBattleGeneralNormalAttack()
{
	// Line 619, Address: 0x2d17e0, Func Offset: 0
	// Line 620, Address: 0x2d17e4, Func Offset: 0x4
	// Line 619, Address: 0x2d17e8, Func Offset: 0x8
	// Line 620, Address: 0x2d17ec, Func Offset: 0xc
	// Line 621, Address: 0x2d17fc, Func Offset: 0x1c
	// Line 622, Address: 0x2d180c, Func Offset: 0x2c
	// Line 621, Address: 0x2d1810, Func Offset: 0x30
	// Line 623, Address: 0x2d1818, Func Offset: 0x38
	// Line 625, Address: 0x2d1830, Func Offset: 0x50
	// Line 627, Address: 0x2d1840, Func Offset: 0x60
	// Line 628, Address: 0x2d184c, Func Offset: 0x6c
	// Line 629, Address: 0x2d185c, Func Offset: 0x7c
	// Line 630, Address: 0x2d1860, Func Offset: 0x80
	// Line 633, Address: 0x2d1880, Func Offset: 0xa0
	// Line 635, Address: 0x2d1890, Func Offset: 0xb0
	// Line 636, Address: 0x2d189c, Func Offset: 0xbc
	// Line 637, Address: 0x2d18ac, Func Offset: 0xcc
	// Line 639, Address: 0x2d18b0, Func Offset: 0xd0
	// Line 643, Address: 0x2d18d8, Func Offset: 0xf8
	// Func End, Address: 0x2d18e4, Func Offset: 0x104
}

// 
// Start address: 0x2d18f0
int strong_attack_all()
{
	_PLAYER_WORK* p;
	_anon5* ui_work;
	// Line 647, Address: 0x2d18f0, Func Offset: 0
	// Line 648, Address: 0x2d18fc, Func Offset: 0xc
	// Line 647, Address: 0x2d1900, Func Offset: 0x10
	// Line 649, Address: 0x2d1904, Func Offset: 0x14
	// Line 651, Address: 0x2d1910, Func Offset: 0x20
	// Line 652, Address: 0x2d191c, Func Offset: 0x2c
	// Line 654, Address: 0x2d1930, Func Offset: 0x40
	// Line 655, Address: 0x2d1938, Func Offset: 0x48
	// Line 657, Address: 0x2d1940, Func Offset: 0x50
	// Line 660, Address: 0x2d1948, Func Offset: 0x58
	// Line 664, Address: 0x2d1974, Func Offset: 0x84
	// Line 663, Address: 0x2d1978, Func Offset: 0x88
	// Line 664, Address: 0x2d197c, Func Offset: 0x8c
	// Line 665, Address: 0x2d1980, Func Offset: 0x90
	// Line 666, Address: 0x2d198c, Func Offset: 0x9c
	// Line 667, Address: 0x2d1990, Func Offset: 0xa0
	// Line 671, Address: 0x2d19b0, Func Offset: 0xc0
	// Line 672, Address: 0x2d19b8, Func Offset: 0xc8
	// Line 673, Address: 0x2d19bc, Func Offset: 0xcc
	// Line 674, Address: 0x2d19c4, Func Offset: 0xd4
	// Line 675, Address: 0x2d19c8, Func Offset: 0xd8
	// Line 678, Address: 0x2d1a00, Func Offset: 0x110
	// Line 680, Address: 0x2d1a08, Func Offset: 0x118
	// Line 681, Address: 0x2d1a18, Func Offset: 0x128
	// Line 683, Address: 0x2d1a1c, Func Offset: 0x12c
	// Line 686, Address: 0x2d1a28, Func Offset: 0x138
	// Line 688, Address: 0x2d1a34, Func Offset: 0x144
	// Line 690, Address: 0x2d1a38, Func Offset: 0x148
	// Line 691, Address: 0x2d1a40, Func Offset: 0x150
	// Func End, Address: 0x2d1a54, Func Offset: 0x164
}

// 
// Start address: 0x2d1a60
int PlayerBattleGeneralStrongAttack()
{
	// Line 694, Address: 0x2d1a60, Func Offset: 0
	// Line 695, Address: 0x2d1a6c, Func Offset: 0xc
	// Line 694, Address: 0x2d1a70, Func Offset: 0x10
	// Line 695, Address: 0x2d1a74, Func Offset: 0x14
	// Line 696, Address: 0x2d1a7c, Func Offset: 0x1c
	// Line 697, Address: 0x2d1a8c, Func Offset: 0x2c
	// Line 698, Address: 0x2d1a90, Func Offset: 0x30
	// Line 701, Address: 0x2d1ab0, Func Offset: 0x50
	// Line 703, Address: 0x2d1ac0, Func Offset: 0x60
	// Line 704, Address: 0x2d1acc, Func Offset: 0x6c
	// Line 705, Address: 0x2d1adc, Func Offset: 0x7c
	// Line 707, Address: 0x2d1ae0, Func Offset: 0x80
	// Line 711, Address: 0x2d1b08, Func Offset: 0xa8
	// Func End, Address: 0x2d1b14, Func Offset: 0xb4
}

// 
// Start address: 0x2d1b20
int PlayerBattleGeneralStop()
{
	_PLAYER_WORK* p;
	_anon5* ui_work;
	sfObj* near_target;
	// Line 715, Address: 0x2d1b20, Func Offset: 0
	// Line 716, Address: 0x2d1b2c, Func Offset: 0xc
	// Line 715, Address: 0x2d1b30, Func Offset: 0x10
	// Line 717, Address: 0x2d1b34, Func Offset: 0x14
	// Line 720, Address: 0x2d1b40, Func Offset: 0x20
	// Line 721, Address: 0x2d1b4c, Func Offset: 0x2c
	// Line 722, Address: 0x2d1b60, Func Offset: 0x40
	// Line 723, Address: 0x2d1b68, Func Offset: 0x48
	// Line 725, Address: 0x2d1b70, Func Offset: 0x50
	// Line 726, Address: 0x2d1b84, Func Offset: 0x64
	// Line 727, Address: 0x2d1b88, Func Offset: 0x68
	// Line 728, Address: 0x2d1b94, Func Offset: 0x74
	// Line 729, Address: 0x2d1b9c, Func Offset: 0x7c
	// Line 730, Address: 0x2d1ba0, Func Offset: 0x80
	// Line 733, Address: 0x2d1bac, Func Offset: 0x8c
	// Line 735, Address: 0x2d1bb0, Func Offset: 0x90
	// Line 736, Address: 0x2d1bbc, Func Offset: 0x9c
	// Line 737, Address: 0x2d1bc4, Func Offset: 0xa4
	// Line 739, Address: 0x2d1bc8, Func Offset: 0xa8
	// Line 741, Address: 0x2d1bd0, Func Offset: 0xb0
	// Line 742, Address: 0x2d1c04, Func Offset: 0xe4
	// Line 743, Address: 0x2d1c10, Func Offset: 0xf0
	// Line 744, Address: 0x2d1c14, Func Offset: 0xf4
	// Line 746, Address: 0x2d1c18, Func Offset: 0xf8
	// Line 747, Address: 0x2d1c20, Func Offset: 0x100
	// Line 751, Address: 0x2d1c54, Func Offset: 0x134
	// Line 752, Address: 0x2d1c60, Func Offset: 0x140
	// Line 753, Address: 0x2d1c68, Func Offset: 0x148
	// Line 754, Address: 0x2d1c78, Func Offset: 0x158
	// Line 756, Address: 0x2d1c90, Func Offset: 0x170
	// Line 757, Address: 0x2d1c94, Func Offset: 0x174
	// Line 758, Address: 0x2d1ca0, Func Offset: 0x180
	// Line 762, Address: 0x2d1ca4, Func Offset: 0x184
	// Line 764, Address: 0x2d1cb0, Func Offset: 0x190
	// Line 765, Address: 0x2d1cc0, Func Offset: 0x1a0
	// Line 766, Address: 0x2d1ccc, Func Offset: 0x1ac
	// Line 767, Address: 0x2d1cd0, Func Offset: 0x1b0
	// Line 768, Address: 0x2d1cd4, Func Offset: 0x1b4
	// Line 771, Address: 0x2d1cd8, Func Offset: 0x1b8
	// Line 774, Address: 0x2d1ce0, Func Offset: 0x1c0
	// Line 777, Address: 0x2d1ce8, Func Offset: 0x1c8
	// Line 776, Address: 0x2d1cec, Func Offset: 0x1cc
	// Line 777, Address: 0x2d1cf0, Func Offset: 0x1d0
	// Func End, Address: 0x2d1d00, Func Offset: 0x1e0
}

// 
// Start address: 0x2d1d00
int PlayerBattleGeneralStopNoCancel()
{
	_PLAYER_WORK* p;
	_anon5* ui_work;
	// Line 781, Address: 0x2d1d00, Func Offset: 0
	// Line 782, Address: 0x2d1d0c, Func Offset: 0xc
	// Line 781, Address: 0x2d1d10, Func Offset: 0x10
	// Line 783, Address: 0x2d1d14, Func Offset: 0x14
	// Line 786, Address: 0x2d1d20, Func Offset: 0x20
	// Line 787, Address: 0x2d1d2c, Func Offset: 0x2c
	// Line 788, Address: 0x2d1d40, Func Offset: 0x40
	// Line 789, Address: 0x2d1d48, Func Offset: 0x48
	// Line 791, Address: 0x2d1d50, Func Offset: 0x50
	// Line 792, Address: 0x2d1d64, Func Offset: 0x64
	// Line 793, Address: 0x2d1d68, Func Offset: 0x68
	// Line 794, Address: 0x2d1d74, Func Offset: 0x74
	// Line 795, Address: 0x2d1d7c, Func Offset: 0x7c
	// Line 796, Address: 0x2d1d80, Func Offset: 0x80
	// Line 799, Address: 0x2d1d8c, Func Offset: 0x8c
	// Line 800, Address: 0x2d1d90, Func Offset: 0x90
	// Line 802, Address: 0x2d1d9c, Func Offset: 0x9c
	// Line 803, Address: 0x2d1dd0, Func Offset: 0xd0
	// Line 806, Address: 0x2d1dd4, Func Offset: 0xd4
	// Line 804, Address: 0x2d1dd8, Func Offset: 0xd8
	// Line 805, Address: 0x2d1ddc, Func Offset: 0xdc
	// Line 807, Address: 0x2d1de0, Func Offset: 0xe0
	// Line 809, Address: 0x2d1de8, Func Offset: 0xe8
	// Line 810, Address: 0x2d1df8, Func Offset: 0xf8
	// Line 813, Address: 0x2d1dfc, Func Offset: 0xfc
	// Line 811, Address: 0x2d1e00, Func Offset: 0x100
	// Line 812, Address: 0x2d1e04, Func Offset: 0x104
	// Line 813, Address: 0x2d1e08, Func Offset: 0x108
	// Line 814, Address: 0x2d1e0c, Func Offset: 0x10c
	// Line 816, Address: 0x2d1e10, Func Offset: 0x110
	// Line 819, Address: 0x2d1e18, Func Offset: 0x118
	// Line 822, Address: 0x2d1e20, Func Offset: 0x120
	// Line 821, Address: 0x2d1e24, Func Offset: 0x124
	// Line 822, Address: 0x2d1e28, Func Offset: 0x128
	// Func End, Address: 0x2d1e38, Func Offset: 0x138
}

// 
// Start address: 0x2d1e40
int PlayerBattleGeneralFinish()
{
	_PLAYER_WORK* p;
	_anon5* ui_work;
	float ftime;
	sfObj* near_target;
	sfObj* near;
	// Line 825, Address: 0x2d1e40, Func Offset: 0
	// Line 826, Address: 0x2d1e50, Func Offset: 0x10
	// Line 825, Address: 0x2d1e54, Func Offset: 0x14
	// Line 827, Address: 0x2d1e58, Func Offset: 0x18
	// Line 830, Address: 0x2d1e60, Func Offset: 0x20
	// Line 832, Address: 0x2d1e78, Func Offset: 0x38
	// Line 833, Address: 0x2d1e8c, Func Offset: 0x4c
	// Line 834, Address: 0x2d1e98, Func Offset: 0x58
	// Line 835, Address: 0x2d1ea4, Func Offset: 0x64
	// Line 836, Address: 0x2d1eb0, Func Offset: 0x70
	// Line 837, Address: 0x2d1eb8, Func Offset: 0x78
	// Line 838, Address: 0x2d1ec0, Func Offset: 0x80
	// Line 839, Address: 0x2d1ecc, Func Offset: 0x8c
	// Line 841, Address: 0x2d1ed4, Func Offset: 0x94
	// Line 842, Address: 0x2d1f04, Func Offset: 0xc4
	// Line 843, Address: 0x2d1f0c, Func Offset: 0xcc
	// Line 845, Address: 0x2d1f18, Func Offset: 0xd8
	// Line 847, Address: 0x2d1f20, Func Offset: 0xe0
	// Line 849, Address: 0x2d1f28, Func Offset: 0xe8
	// Line 850, Address: 0x2d1f34, Func Offset: 0xf4
	// Line 851, Address: 0x2d1f38, Func Offset: 0xf8
	// Line 853, Address: 0x2d1f44, Func Offset: 0x104
	// Line 855, Address: 0x2d1f4c, Func Offset: 0x10c
	// Line 856, Address: 0x2d1f5c, Func Offset: 0x11c
	// Line 857, Address: 0x2d1f60, Func Offset: 0x120
	// Line 859, Address: 0x2d1f64, Func Offset: 0x124
	// Line 861, Address: 0x2d1f68, Func Offset: 0x128
	// Line 862, Address: 0x2d1f78, Func Offset: 0x138
	// Line 863, Address: 0x2d1f88, Func Offset: 0x148
	// Line 864, Address: 0x2d1f8c, Func Offset: 0x14c
	// Line 865, Address: 0x2d1f98, Func Offset: 0x158
	// Line 867, Address: 0x2d1fb4, Func Offset: 0x174
	// Line 869, Address: 0x2d1fc0, Func Offset: 0x180
	// Line 871, Address: 0x2d1fc8, Func Offset: 0x188
	// Line 872, Address: 0x2d1fd0, Func Offset: 0x190
	// Line 873, Address: 0x2d1fd4, Func Offset: 0x194
	// Line 875, Address: 0x2d1fe0, Func Offset: 0x1a0
	// Line 876, Address: 0x2d1fe8, Func Offset: 0x1a8
	// Line 878, Address: 0x2d1ff0, Func Offset: 0x1b0
	// Line 881, Address: 0x2d2008, Func Offset: 0x1c8
	// Line 880, Address: 0x2d200c, Func Offset: 0x1cc
	// Line 881, Address: 0x2d2010, Func Offset: 0x1d0
	// Line 884, Address: 0x2d2018, Func Offset: 0x1d8
	// Line 887, Address: 0x2d2020, Func Offset: 0x1e0
	// Line 888, Address: 0x2d2030, Func Offset: 0x1f0
	// Line 889, Address: 0x2d2034, Func Offset: 0x1f4
	// Line 891, Address: 0x2d2038, Func Offset: 0x1f8
	// Line 892, Address: 0x2d2040, Func Offset: 0x200
	// Line 895, Address: 0x2d2068, Func Offset: 0x228
	// Line 900, Address: 0x2d2084, Func Offset: 0x244
	// Line 899, Address: 0x2d2088, Func Offset: 0x248
	// Line 900, Address: 0x2d208c, Func Offset: 0x24c
	// Line 901, Address: 0x2d2090, Func Offset: 0x250
	// Line 902, Address: 0x2d2098, Func Offset: 0x258
	// Line 904, Address: 0x2d20a0, Func Offset: 0x260
	// Line 906, Address: 0x2d20a8, Func Offset: 0x268
	// Line 907, Address: 0x2d20b4, Func Offset: 0x274
	// Line 908, Address: 0x2d20b8, Func Offset: 0x278
	// Line 910, Address: 0x2d20c4, Func Offset: 0x284
	// Line 912, Address: 0x2d20d0, Func Offset: 0x290
	// Line 913, Address: 0x2d20d8, Func Offset: 0x298
	// Line 916, Address: 0x2d210c, Func Offset: 0x2cc
	// Line 917, Address: 0x2d2110, Func Offset: 0x2d0
	// Line 918, Address: 0x2d2114, Func Offset: 0x2d4
	// Line 921, Address: 0x2d2118, Func Offset: 0x2d8
	// Line 922, Address: 0x2d2128, Func Offset: 0x2e8
	// Line 923, Address: 0x2d2134, Func Offset: 0x2f4
	// Line 924, Address: 0x2d213c, Func Offset: 0x2fc
	// Line 926, Address: 0x2d2148, Func Offset: 0x308
	// Line 929, Address: 0x2d2154, Func Offset: 0x314
	// Line 931, Address: 0x2d2158, Func Offset: 0x318
	// Line 932, Address: 0x2d2160, Func Offset: 0x320
	// Func End, Address: 0x2d2178, Func Offset: 0x338
}

// 
// Start address: 0x2d2180
void PlayerBattleStungunEffectSet()
{
	_PLAYER_WORK* p;
	sgBone* bone;
	float local_l[4];
	float local_r[4];
	_anon1 line;
	float m[4][4];
	// Line 936, Address: 0x2d2180, Func Offset: 0
	// Line 939, Address: 0x2d2184, Func Offset: 0x4
	// Line 936, Address: 0x2d2188, Func Offset: 0x8
	// Line 939, Address: 0x2d218c, Func Offset: 0xc
	// Line 940, Address: 0x2d2198, Func Offset: 0x18
	// Line 937, Address: 0x2d219c, Func Offset: 0x1c
	// Line 940, Address: 0x2d21a0, Func Offset: 0x20
	// Line 944, Address: 0x2d21a8, Func Offset: 0x28
	// Line 939, Address: 0x2d21ac, Func Offset: 0x2c
	// Line 944, Address: 0x2d21b0, Func Offset: 0x30
	// Line 940, Address: 0x2d21b4, Func Offset: 0x34
	// Line 944, Address: 0x2d21bc, Func Offset: 0x3c
	// Line 946, Address: 0x2d21c8, Func Offset: 0x48
	// Line 948, Address: 0x2d21dc, Func Offset: 0x5c
	// Line 951, Address: 0x2d21e8, Func Offset: 0x68
	// Line 952, Address: 0x2d21f4, Func Offset: 0x74
	// Line 953, Address: 0x2d2200, Func Offset: 0x80
	// Line 954, Address: 0x2d2238, Func Offset: 0xb8
	// Line 956, Address: 0x2d2270, Func Offset: 0xf0
	// Line 958, Address: 0x2d227c, Func Offset: 0xfc
	// Line 959, Address: 0x2d2280, Func Offset: 0x100
	// Func End, Address: 0x2d228c, Func Offset: 0x10c
}

