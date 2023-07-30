typedef union _anon0;
typedef struct sgBone;
typedef struct sfCharacter;
typedef struct sgAnime;
typedef struct sfObj;
typedef struct _anon1;
typedef struct sfCldObject;
typedef struct sgQTNode;
typedef struct sfCldPart;
typedef struct _anon2;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sgSVModel;
typedef struct _anon3;
typedef struct _anon4;
typedef struct sgIKHandle;
typedef struct sgQTObject;
typedef struct _anon5;
typedef struct _PLAYER_WORK;
typedef struct _anon6;
typedef struct sfOffsetAABB;
typedef struct _anon7;
typedef union sfCldBody;
typedef struct _anon8;
typedef enum GameItem : unsigned char;
typedef struct _anon9;

typedef void(*type_1)(sfObj*);
typedef void(*type_7)(_anon2*, int, int, float*);
typedef sgIKSolveResult(*type_8)();
typedef void(*type_13)(sgAnime*, int);
typedef void(*type_19)(sfObj*);

typedef float type_0[4];
typedef sfCldPart* type_2[6];
typedef unsigned char type_3[3];
typedef float type_4[4][4];
typedef float type_5[4];
typedef float type_6[4][2];
typedef _PLAYER_WORK type_9[2];
typedef float type_10[4];
typedef unsigned char type_11[3];
typedef void* type_12[4];
typedef short type_14[2];
typedef unsigned short type_15[2];
typedef char type_16[4];
typedef _anon0 type_17[256];
typedef unsigned char type_18[4];
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

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon3 model_work;
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

struct _anon1
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

struct _anon2
{
	unsigned long tex0;
	unsigned long clamp;
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

struct _anon4
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
	_anon7 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
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
	_anon4* anim_ctrl;
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

struct _anon6
{
	float start[4];
	float end[4];
};

struct sfOffsetAABB
{
	_anon8 aabb;
	float offset[4];
};

struct _anon7
{
	float center[4];
	float radius;
};

union sfCldBody
{
	_anon9 obb;
	_anon8 aabb;
	sfOffsetAABB offset_aabb;
	_anon6 line;
	_anon7 sphere;
};

struct _anon8
{
	float bmin[4];
	float bmax[4];
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

struct _anon9
{
	float mat[4][4];
	float half_w[4];
};

_PLAYER_WORK playerw[2];
_anon5 player_battle_work;
float sg_vector_zero[4];

int PlayerBattlePipeNormalAttack();
int PlayerBattlePipeStrongAttack();

// 
// Start address: 0x2d8e40
int PlayerBattlePipeNormalAttack()
{
	float a_time;
	float pos_e[4];
	float dif;
	float adif;
	float target[4];
	int num;
	float ftime;
	// Line 63, Address: 0x2d8e40, Func Offset: 0
	// Line 64, Address: 0x2d8e44, Func Offset: 0x4
	// Line 63, Address: 0x2d8e48, Func Offset: 0x8
	// Line 64, Address: 0x2d8e54, Func Offset: 0x14
	// Line 66, Address: 0x2d8e64, Func Offset: 0x24
	// Line 69, Address: 0x2d8e70, Func Offset: 0x30
	// Line 70, Address: 0x2d8e84, Func Offset: 0x44
	// Line 73, Address: 0x2d8e90, Func Offset: 0x50
	// Line 75, Address: 0x2d8ea8, Func Offset: 0x68
	// Line 76, Address: 0x2d8eb8, Func Offset: 0x78
	// Line 78, Address: 0x2d8ec0, Func Offset: 0x80
	// Line 81, Address: 0x2d8ed0, Func Offset: 0x90
	// Line 82, Address: 0x2d8ee4, Func Offset: 0xa4
	// Line 84, Address: 0x2d8f08, Func Offset: 0xc8
	// Line 85, Address: 0x2d8f10, Func Offset: 0xd0
	// Line 86, Address: 0x2d8f1c, Func Offset: 0xdc
	// Line 88, Address: 0x2d8f3c, Func Offset: 0xfc
	// Line 90, Address: 0x2d8f48, Func Offset: 0x108
	// Line 92, Address: 0x2d8f5c, Func Offset: 0x11c
	// Line 96, Address: 0x2d8f60, Func Offset: 0x120
	// Line 97, Address: 0x2d8f78, Func Offset: 0x138
	// Line 99, Address: 0x2d8fc4, Func Offset: 0x184
	// Line 103, Address: 0x2d8fd4, Func Offset: 0x194
	// Line 104, Address: 0x2d8fdc, Func Offset: 0x19c
	// Line 106, Address: 0x2d8ffc, Func Offset: 0x1bc
	// Line 107, Address: 0x2d9010, Func Offset: 0x1d0
	// Line 108, Address: 0x2d9018, Func Offset: 0x1d8
	// Line 109, Address: 0x2d9030, Func Offset: 0x1f0
	// Line 110, Address: 0x2d9038, Func Offset: 0x1f8
	// Line 112, Address: 0x2d9050, Func Offset: 0x210
	// Line 114, Address: 0x2d9064, Func Offset: 0x224
	// Line 113, Address: 0x2d9068, Func Offset: 0x228
	// Line 114, Address: 0x2d906c, Func Offset: 0x22c
	// Line 117, Address: 0x2d9074, Func Offset: 0x234
	// Line 120, Address: 0x2d9078, Func Offset: 0x238
	// Line 121, Address: 0x2d908c, Func Offset: 0x24c
	// Line 122, Address: 0x2d9098, Func Offset: 0x258
	// Line 123, Address: 0x2d90a0, Func Offset: 0x260
	// Line 124, Address: 0x2d90ac, Func Offset: 0x26c
	// Line 129, Address: 0x2d90b0, Func Offset: 0x270
	// Line 130, Address: 0x2d90c4, Func Offset: 0x284
	// Line 133, Address: 0x2d90d0, Func Offset: 0x290
	// Line 135, Address: 0x2d90e8, Func Offset: 0x2a8
	// Line 137, Address: 0x2d9130, Func Offset: 0x2f0
	// Line 138, Address: 0x2d9144, Func Offset: 0x304
	// Line 139, Address: 0x2d9150, Func Offset: 0x310
	// Line 140, Address: 0x2d9154, Func Offset: 0x314
	// Line 143, Address: 0x2d9160, Func Offset: 0x320
	// Line 146, Address: 0x2d9198, Func Offset: 0x358
	// Line 147, Address: 0x2d91a4, Func Offset: 0x364
	// Line 148, Address: 0x2d91ac, Func Offset: 0x36c
	// Line 149, Address: 0x2d91b8, Func Offset: 0x378
	// Line 154, Address: 0x2d91e4, Func Offset: 0x3a4
	// Line 153, Address: 0x2d91e8, Func Offset: 0x3a8
	// Line 154, Address: 0x2d91f0, Func Offset: 0x3b0
	// Line 155, Address: 0x2d91fc, Func Offset: 0x3bc
	// Line 156, Address: 0x2d9200, Func Offset: 0x3c0
	// Line 157, Address: 0x2d920c, Func Offset: 0x3cc
	// Line 158, Address: 0x2d9210, Func Offset: 0x3d0
	// Line 162, Address: 0x2d9258, Func Offset: 0x418
	// Line 166, Address: 0x2d9270, Func Offset: 0x430
	// Line 168, Address: 0x2d927c, Func Offset: 0x43c
	// Line 170, Address: 0x2d92a4, Func Offset: 0x464
	// Line 171, Address: 0x2d92c0, Func Offset: 0x480
	// Line 173, Address: 0x2d92c8, Func Offset: 0x488
	// Line 174, Address: 0x2d92d4, Func Offset: 0x494
	// Line 176, Address: 0x2d92d8, Func Offset: 0x498
	// Line 177, Address: 0x2d92e0, Func Offset: 0x4a0
	// Func End, Address: 0x2d92f4, Func Offset: 0x4b4
}

// 
// Start address: 0x2d9300
int PlayerBattlePipeStrongAttack()
{
	_PLAYER_WORK* p;
	_anon1* ui_work;
	float a_time;
	float pos_e[4];
	sgBone* bone;
	float pos_wp[4];
	float dif;
	float adif;
	float target[4];
	// Line 180, Address: 0x2d9300, Func Offset: 0
	// Line 181, Address: 0x2d9310, Func Offset: 0x10
	// Line 180, Address: 0x2d9314, Func Offset: 0x14
	// Line 182, Address: 0x2d9318, Func Offset: 0x18
	// Line 184, Address: 0x2d9324, Func Offset: 0x24
	// Line 185, Address: 0x2d9330, Func Offset: 0x30
	// Line 187, Address: 0x2d9344, Func Offset: 0x44
	// Line 188, Address: 0x2d934c, Func Offset: 0x4c
	// Line 190, Address: 0x2d9358, Func Offset: 0x58
	// Line 193, Address: 0x2d9360, Func Offset: 0x60
	// Line 197, Address: 0x2d9370, Func Offset: 0x70
	// Line 198, Address: 0x2d9384, Func Offset: 0x84
	// Line 199, Address: 0x2d93b8, Func Offset: 0xb8
	// Line 205, Address: 0x2d93c4, Func Offset: 0xc4
	// Line 206, Address: 0x2d93cc, Func Offset: 0xcc
	// Line 207, Address: 0x2d93d8, Func Offset: 0xd8
	// Line 208, Address: 0x2d93e4, Func Offset: 0xe4
	// Line 210, Address: 0x2d93f0, Func Offset: 0xf0
	// Line 211, Address: 0x2d9408, Func Offset: 0x108
	// Line 212, Address: 0x2d9410, Func Offset: 0x110
	// Line 213, Address: 0x2d9428, Func Offset: 0x128
	// Line 214, Address: 0x2d9430, Func Offset: 0x130
	// Line 216, Address: 0x2d9448, Func Offset: 0x148
	// Line 218, Address: 0x2d9458, Func Offset: 0x158
	// Line 217, Address: 0x2d945c, Func Offset: 0x15c
	// Line 218, Address: 0x2d9460, Func Offset: 0x160
	// Line 223, Address: 0x2d9468, Func Offset: 0x168
	// Line 227, Address: 0x2d9494, Func Offset: 0x194
	// Line 226, Address: 0x2d9498, Func Offset: 0x198
	// Line 227, Address: 0x2d949c, Func Offset: 0x19c
	// Line 228, Address: 0x2d94a0, Func Offset: 0x1a0
	// Line 229, Address: 0x2d94ac, Func Offset: 0x1ac
	// Line 230, Address: 0x2d94b0, Func Offset: 0x1b0
	// Line 234, Address: 0x2d94d0, Func Offset: 0x1d0
	// Line 235, Address: 0x2d94d8, Func Offset: 0x1d8
	// Line 236, Address: 0x2d94dc, Func Offset: 0x1dc
	// Line 237, Address: 0x2d94e4, Func Offset: 0x1e4
	// Line 238, Address: 0x2d94e8, Func Offset: 0x1e8
	// Line 241, Address: 0x2d9520, Func Offset: 0x220
	// Line 243, Address: 0x2d9528, Func Offset: 0x228
	// Line 244, Address: 0x2d9538, Func Offset: 0x238
	// Line 245, Address: 0x2d953c, Func Offset: 0x23c
	// Line 247, Address: 0x2d9548, Func Offset: 0x248
	// Line 249, Address: 0x2d9554, Func Offset: 0x254
	// Line 251, Address: 0x2d9558, Func Offset: 0x258
	// Line 252, Address: 0x2d9560, Func Offset: 0x260
	// Func End, Address: 0x2d9578, Func Offset: 0x278
}

