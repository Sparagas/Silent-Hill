typedef struct sgIKHandle;
typedef union sfCldBody;
typedef struct sfCldPart;
typedef struct _anon0;
typedef struct _anon1;
typedef enum GameItem : unsigned char;
typedef struct sgBone;
typedef struct _anon2;
typedef struct _PLAYER_WORK;
typedef struct sgAnime;
typedef struct _anon3;
typedef struct sfObj;
typedef union _anon4;
typedef struct sfCharacter;
typedef struct sfCldObject;
typedef struct _anon5;
typedef struct sgQTNode;
typedef struct sgSVModel;
typedef struct _anon6;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _anon7;
typedef struct sgQTObject;
typedef struct sfOffsetAABB;

typedef void(*type_2)(sgAnime*, int);
typedef void(*type_5)(sfObj*);
typedef void(*type_8)(sfObj*);
typedef void(*type_19)(_anon5*, int, int, float*);
typedef sgIKSolveResult(*type_21)();

typedef unsigned char type_0[3];
typedef void* type_1[4];
typedef float type_3[4];
typedef _anon4 type_4[256];
typedef unsigned char type_6[4];
typedef float type_7[4];
typedef sfCldPart* type_9[6];
typedef float type_10[4];
typedef short type_11[2];
typedef float type_12[4][4];
typedef unsigned char type_13[3];
typedef unsigned short type_14[2];
typedef char type_15[4];
typedef unsigned char type_16[4];
typedef float type_17[1];
typedef int type_18[1];
typedef float type_20[4][2];

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

union sfCldBody
{
	_anon3 obb;
	_anon2 aabb;
	sfOffsetAABB offset_aabb;
	_anon0 line;
	_anon1 sphere;
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
	float start[4];
	float end[4];
};

struct _anon1
{
	float center[4];
	float radius;
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

struct _anon2
{
	float bmin[4];
	float bmax[4];
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

struct _anon3
{
	float mat[4][4];
	float half_w[4];
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

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon6 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
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

struct _anon5
{
	unsigned long tex0;
	unsigned long clamp;
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

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct _anon7
{
	int dummy;
};

struct sgQTObject
{
	_anon1 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

struct sfOffsetAABB
{
	_anon2 aabb;
	float offset[4];
};

float sg_vector_unit_z[4];

void CalcDirvectorUnitXZ_Radian(float* dir, float rad);
void CalcDirvectorXZ_Radian(float* dir, float rad, float length);
void CalcDirvectorUnitXZ_V2V(float* dir, float* to_v, float* from_v);
float CalcRadianXZ_V2V(float* v0, float* v1);
float calc_inner_cos(float* v0, float* v1);
float Calc2VectorsFormRadian(float* v0, float* v1);
void GetPlayerRotationToTargetXZ(float* trg, float* now_rot, float* trg_rot);

// 
// Start address: 0x221b40
void CalcDirvectorUnitXZ_Radian(float* dir, float rad)
{
	float v[4];
	float m[4][4];
	// Line 62, Address: 0x221b40, Func Offset: 0
	// Line 69, Address: 0x221b48, Func Offset: 0x8
	// Line 62, Address: 0x221b4c, Func Offset: 0xc
	// Line 68, Address: 0x221b54, Func Offset: 0x14
	// Line 67, Address: 0x221b58, Func Offset: 0x18
	// Line 69, Address: 0x221b5c, Func Offset: 0x1c
	// Line 72, Address: 0x221b68, Func Offset: 0x28
	// Line 73, Address: 0x221b9c, Func Offset: 0x5c
	// Func End, Address: 0x221bac, Func Offset: 0x6c
}

// 
// Start address: 0x221bb0
void CalcDirvectorXZ_Radian(float* dir, float rad, float length)
{
	float v[4];
	float m[4][4];
	// Line 80, Address: 0x221bb0, Func Offset: 0
	// Line 87, Address: 0x221bb8, Func Offset: 0x8
	// Line 80, Address: 0x221bbc, Func Offset: 0xc
	// Line 85, Address: 0x221bc8, Func Offset: 0x18
	// Line 87, Address: 0x221bcc, Func Offset: 0x1c
	// Line 86, Address: 0x221bd4, Func Offset: 0x24
	// Line 87, Address: 0x221bd8, Func Offset: 0x28
	// Line 90, Address: 0x221be0, Func Offset: 0x30
	// Line 91, Address: 0x221c14, Func Offset: 0x64
	// Line 92, Address: 0x221c30, Func Offset: 0x80
	// Func End, Address: 0x221c44, Func Offset: 0x94
}

// 
// Start address: 0x221c50
void CalcDirvectorUnitXZ_V2V(float* dir, float* to_v, float* from_v)
{
	float w_to_v[4];
	float w_from_v[4];
	// Line 98, Address: 0x221c50, Func Offset: 0
	// Line 101, Address: 0x221c54, Func Offset: 0x4
	// Line 102, Address: 0x221c60, Func Offset: 0x10
	// Line 103, Address: 0x221c6c, Func Offset: 0x1c
	// Line 106, Address: 0x221c74, Func Offset: 0x24
	// Line 107, Address: 0x221c88, Func Offset: 0x38
	// Line 108, Address: 0x221cac, Func Offset: 0x5c
	// Func End, Address: 0x221cb4, Func Offset: 0x64
}

// 
// Start address: 0x221cc0
float CalcRadianXZ_V2V(float* v0, float* v1)
{
	float sub[4];
	float w_v0[4];
	float w_v1[4];
	// Line 132, Address: 0x221cc0, Func Offset: 0
	// Line 135, Address: 0x221cc8, Func Offset: 0x8
	// Line 132, Address: 0x221ccc, Func Offset: 0xc
	// Line 135, Address: 0x221cd0, Func Offset: 0x10
	// Line 136, Address: 0x221cd8, Func Offset: 0x18
	// Line 139, Address: 0x221ce4, Func Offset: 0x24
	// Line 137, Address: 0x221ce8, Func Offset: 0x28
	// Line 139, Address: 0x221cf0, Func Offset: 0x30
	// Line 141, Address: 0x221d04, Func Offset: 0x44
	// Line 142, Address: 0x221d2c, Func Offset: 0x6c
	// Func End, Address: 0x221d3c, Func Offset: 0x7c
}

// 
// Start address: 0x221d40
float calc_inner_cos(float* v0, float* v1)
{
	// Line 151, Address: 0x221d40, Func Offset: 0
	// Line 152, Address: 0x221db0, Func Offset: 0x70
	// Func End, Address: 0x221db8, Func Offset: 0x78
}

// 
// Start address: 0x221dc0
float Calc2VectorsFormRadian(float* v0, float* v1)
{
	// Line 159, Address: 0x221dc0, Func Offset: 0
	// Line 160, Address: 0x221dd4, Func Offset: 0x14
	// Line 161, Address: 0x221ddc, Func Offset: 0x1c
	// Line 162, Address: 0x221e08, Func Offset: 0x48
	// Func End, Address: 0x221e1c, Func Offset: 0x5c
}

// 
// Start address: 0x221e20
void GetPlayerRotationToTargetXZ(float* trg, float* now_rot, float* trg_rot)
{
	float ppos[4];
	float sub[4];
	_PLAYER_WORK* p;
	float trg_a;
	float trg_b;
	// Line 172, Address: 0x221e20, Func Offset: 0
	// Line 174, Address: 0x221e48, Func Offset: 0x28
	// Line 177, Address: 0x221e50, Func Offset: 0x30
	// Line 178, Address: 0x221e64, Func Offset: 0x44
	// Line 179, Address: 0x221e7c, Func Offset: 0x5c
	// Line 182, Address: 0x221ea8, Func Offset: 0x88
	// Line 183, Address: 0x221eb0, Func Offset: 0x90
	// Line 190, Address: 0x221edc, Func Offset: 0xbc
	// Line 192, Address: 0x221f04, Func Offset: 0xe4
	// Line 195, Address: 0x221f24, Func Offset: 0x104
	// Line 197, Address: 0x221f60, Func Offset: 0x140
	// Line 201, Address: 0x221f68, Func Offset: 0x148
	// Line 203, Address: 0x221f70, Func Offset: 0x150
	// Line 205, Address: 0x221f98, Func Offset: 0x178
	// Line 208, Address: 0x221fac, Func Offset: 0x18c
	// Line 210, Address: 0x221fe8, Func Offset: 0x1c8
	// Line 212, Address: 0x221ff0, Func Offset: 0x1d0
	// Line 214, Address: 0x221ff4, Func Offset: 0x1d4
	// Line 216, Address: 0x221ff8, Func Offset: 0x1d8
	// Func End, Address: 0x22201c, Func Offset: 0x1fc
}

