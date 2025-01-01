typedef struct sgIKHandle;
typedef struct sfObj;
typedef struct sfCharacter;
typedef struct sgBone;
typedef struct sgQTNode;
typedef struct sgAnime;
typedef struct sgQTObject;
typedef struct _anon0;
typedef struct _anon1;
typedef struct sfOffsetAABB;
typedef struct _anon2;
typedef union sfCldBody;
typedef struct _anon3;
typedef enum EnemyKind : unsigned char;
typedef struct sfCldPart;
typedef struct sfCldObject;
typedef struct _anon4;
typedef struct _PLAYER_WORK;
typedef struct _anon5;
typedef enum _enum : unsigned char;
typedef union _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _GAME_WORK;
typedef enum GameItem : unsigned char;
typedef struct _anon9;
typedef struct _anon10;
typedef struct sgSVModel;
typedef enum sgIKSolveResult : unsigned char;

typedef sgIKSolveResult(*type_1)();
typedef void(*type_5)(_anon0*, int, int, float*);
typedef void(*type_9)(sfObj*);
typedef void(*type_11)(sgAnime*, int);
typedef void(*type_12)(sfObj*);
typedef void(*type_14)(sfObj*);
typedef void(*type_15)(sfObj*);
typedef void(*type_21)(sfObj*);
typedef void(*type_24)(sfObj*);

typedef float type_0[4][2];
typedef float type_2[4];
typedef float type_3[4][4];
typedef float type_4[4];
typedef _anon1 type_6[18];
typedef unsigned char type_7[3];
typedef void* type_8[4];
typedef int type_10[1];
typedef int type_13[1];
typedef unsigned char type_16[4];
typedef int type_17[1];
typedef _PLAYER_WORK type_18[2];
typedef _anon6 type_19[256];
typedef int type_20[1];
typedef int type_22[1];
typedef int type_23[1];
typedef short type_25[2];
typedef unsigned short type_26[2];
typedef int type_27[1];
typedef char type_28[4];
typedef unsigned char type_29[4];
typedef sfCldPart* type_30[6];
typedef float type_31[1];
typedef float type_32[4];
typedef unsigned char type_33[3];
typedef int type_34[1];

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

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon2 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
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

struct sgQTObject
{
	_anon8 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

struct _anon0
{
	unsigned long tex0;
	unsigned long clamp;
};

struct _anon1
{
	_enum stage;
	int scene;
	float trans[4];
	float rot[4];
	int en_id;
	sfObj* obj;
};

struct sfOffsetAABB
{
	_anon9 aabb;
	float offset[4];
};

struct _anon2
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon0*, int, int, float*);
	int equip_flag;
};

union sfCldBody
{
	_anon10 obb;
	_anon9 aabb;
	sfOffsetAABB offset_aabb;
	_anon7 line;
	_anon8 sphere;
};

struct _anon3
{
	sfCharacter chr;
	sfCharacter chr_e;
	sfCharacter chr_s;
	sfObj* sh_obj;
	float time;
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

struct sfCldObject
{
	sgQTObject tree_object;
	sgQTNode* stay_node;
	sfCldPart* parts[6];
	unsigned char n_parts;
	unsigned char pad[3];
	void* data;
};

struct _anon4
{
	int dummy;
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

struct _anon5
{
	_enum stage;
	int scene;
	float trans[4];
	float rot[4];
	int en_id;
	sfObj* obj;
};

enum _enum : unsigned char
{
	GAME_STAGE_DUMMY,
	GAME_STAGE_3LDK,
	GAME_STAGE_SUBWAY,
	GAME_STAGE_FOREST,
	GAME_STAGE_WATER,
	GAME_STAGE_BUILDING,
	GAME_STAGE_HOME,
	GAME_STAGE_HOSPITAL,
	GAME_STAGE_PAST_HOME,
	GAME_STAGE_LAST,
	GAME_STAGE_TUNNEL,
	GAME_STAGE_SPIRAL,
	GAME_STAGE_TEST,
	GAME_STAGE_MAX
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

struct _anon7
{
	float start[4];
	float end[4];
};

struct _anon8
{
	float center[4];
	float radius;
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
	float bmin[4];
	float bmax[4];
};

struct _anon10
{
	float mat[4][4];
	float half_w[4];
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

float sg_vector_unit_x[4];
_anon1 sword_all_work[18];
_GAME_WORK gamew;
void(*sfObjFuncDummy)(sfObj*);
void(*PlayerSwordObjRender)(sfObj*);
void(*PlayerSwordObjDestruct)(sfObj*);
void(*PlayerSwordObj)(sfObj*);
_PLAYER_WORK playerw[2];
sfObj* target_ghost;
EnemyKind target_kind;

void PlayerSwordInitAtGameStart();
void PlayerSwordRestoreData(_anon5* load_data);
void PlayerSwordMakeData(_anon5* save_data);
int PlayerSwordRemoveByID(int ghost_id);
void PlayerSwordMoveScene(int old_scene, int new_scene, int type, float* move);
sfObj* get_enemy_obj(int id);
int PlayerSwordObjSet(int id);
void PlayerSwordObj(sfObj* obj);
void PlayerSwordObjDestruct(sfObj* obj);
void PlayerSwordObjRender(sfObj* obj);
int PlayerSwordAdd(float* trans, float* rot, int ghost_id);
int PlayerSwordSetScene();
void set_model();
void remove_model();
void sword_update();
void PlayerSwordSetTarget(sfObj* obj);
void set_angle();
void PlayerSwordStatMain();
int enemy_is_ghost(sfObj* obj);
sfObj* PlayerSwordCheckGhostFinish();

// 
// Start address: 0x2de350
void PlayerSwordInitAtGameStart()
{
	// Line 106, Address: 0x2de350, Func Offset: 0
	// Line 107, Address: 0x2de354, Func Offset: 0x4
	// Line 106, Address: 0x2de358, Func Offset: 0x8
	// Line 107, Address: 0x2de35c, Func Offset: 0xc
	// Line 110, Address: 0x2de368, Func Offset: 0x18
	// Line 116, Address: 0x2de374, Func Offset: 0x24
	// Line 111, Address: 0x2de378, Func Offset: 0x28
	// Line 112, Address: 0x2de380, Func Offset: 0x30
	// Line 111, Address: 0x2de384, Func Offset: 0x34
	// Line 112, Address: 0x2de388, Func Offset: 0x38
	// Line 116, Address: 0x2de394, Func Offset: 0x44
	// Line 113, Address: 0x2de398, Func Offset: 0x48
	// Line 116, Address: 0x2de3a4, Func Offset: 0x54
	// Line 114, Address: 0x2de3a8, Func Offset: 0x58
	// Line 116, Address: 0x2de3b4, Func Offset: 0x64
	// Line 115, Address: 0x2de3b8, Func Offset: 0x68
	// Line 116, Address: 0x2de3c4, Func Offset: 0x74
	// Line 119, Address: 0x2de3d8, Func Offset: 0x88
	// Func End, Address: 0x2de3e4, Func Offset: 0x94
}

// 
// Start address: 0x2de3f0
void PlayerSwordRestoreData(_anon5* load_data)
{
	// Line 124, Address: 0x2de3f4, Func Offset: 0x4
	// Func End, Address: 0x2de404, Func Offset: 0x14
}

// 
// Start address: 0x2de410
void PlayerSwordMakeData(_anon5* save_data)
{
	// Line 132, Address: 0x2de410, Func Offset: 0
	// Func End, Address: 0x2de420, Func Offset: 0x10
}

// 
// Start address: 0x2de420
int PlayerSwordRemoveByID(int ghost_id)
{
	int i;
	sfObj* en_obj;
	// Line 155, Address: 0x2de420, Func Offset: 0
	// Line 160, Address: 0x2de424, Func Offset: 0x4
	// Line 155, Address: 0x2de428, Func Offset: 0x8
	// Line 160, Address: 0x2de42c, Func Offset: 0xc
	// Line 155, Address: 0x2de430, Func Offset: 0x10
	// Line 160, Address: 0x2de43c, Func Offset: 0x1c
	// Line 161, Address: 0x2de440, Func Offset: 0x20
	// Line 162, Address: 0x2de454, Func Offset: 0x34
	// Line 161, Address: 0x2de458, Func Offset: 0x38
	// Line 162, Address: 0x2de45c, Func Offset: 0x3c
	// Line 165, Address: 0x2de488, Func Offset: 0x68
	// Line 167, Address: 0x2de498, Func Offset: 0x78
	// Line 168, Address: 0x2de4a0, Func Offset: 0x80
	// Line 169, Address: 0x2de4a8, Func Offset: 0x88
	// Line 171, Address: 0x2de4b0, Func Offset: 0x90
	// Line 172, Address: 0x2de4bc, Func Offset: 0x9c
	// Line 174, Address: 0x2de4c4, Func Offset: 0xa4
	// Line 176, Address: 0x2de4d8, Func Offset: 0xb8
	// Line 177, Address: 0x2de4e0, Func Offset: 0xc0
	// Func End, Address: 0x2de4f4, Func Offset: 0xd4
}

// 
// Start address: 0x2de500
void PlayerSwordMoveScene(int old_scene, int new_scene, int type, float* move)
{
	_enum now_stage;
	int i;
	// Line 223, Address: 0x2de500, Func Offset: 0
	// Line 226, Address: 0x2de504, Func Offset: 0x4
	// Line 223, Address: 0x2de508, Func Offset: 0x8
	// Line 226, Address: 0x2de534, Func Offset: 0x34
	// Line 227, Address: 0x2de538, Func Offset: 0x38
	// Line 228, Address: 0x2de540, Func Offset: 0x40
	// Line 231, Address: 0x2de574, Func Offset: 0x74
	// Line 233, Address: 0x2de5d0, Func Offset: 0xd0
	// Line 234, Address: 0x2de5f8, Func Offset: 0xf8
	// Line 236, Address: 0x2de600, Func Offset: 0x100
	// Line 238, Address: 0x2de628, Func Offset: 0x128
	// Line 240, Address: 0x2de650, Func Offset: 0x150
	// Line 241, Address: 0x2de664, Func Offset: 0x164
	// Func End, Address: 0x2de688, Func Offset: 0x188
}

// 
// Start address: 0x2de690
sfObj* get_enemy_obj(int id)
{
	sfObj* o;
	sfObj* ret;
	// Line 245, Address: 0x2de690, Func Offset: 0
	// Line 251, Address: 0x2de6a8, Func Offset: 0x18
	// Line 253, Address: 0x2de6c0, Func Offset: 0x30
	// Line 255, Address: 0x2de6d0, Func Offset: 0x40
	// Line 257, Address: 0x2de6d8, Func Offset: 0x48
	// Line 259, Address: 0x2de6e8, Func Offset: 0x58
	// Line 260, Address: 0x2de6ec, Func Offset: 0x5c
	// Func End, Address: 0x2de704, Func Offset: 0x74
}

// 
// Start address: 0x2de710
int PlayerSwordObjSet(int id)
{
	_anon1* aw;
	_anon3* ow;
	sfObj* obj;
	// Line 264, Address: 0x2de710, Func Offset: 0
	// Line 265, Address: 0x2de714, Func Offset: 0x4
	// Line 264, Address: 0x2de718, Func Offset: 0x8
	// Line 265, Address: 0x2de71c, Func Offset: 0xc
	// Line 264, Address: 0x2de720, Func Offset: 0x10
	// Line 265, Address: 0x2de724, Func Offset: 0x14
	// Line 264, Address: 0x2de728, Func Offset: 0x18
	// Line 265, Address: 0x2de730, Func Offset: 0x20
	// Line 270, Address: 0x2de734, Func Offset: 0x24
	// Line 271, Address: 0x2de740, Func Offset: 0x30
	// Line 272, Address: 0x2de748, Func Offset: 0x38
	// Line 274, Address: 0x2de750, Func Offset: 0x40
	// Line 275, Address: 0x2de760, Func Offset: 0x50
	// Line 277, Address: 0x2de770, Func Offset: 0x60
	// Line 276, Address: 0x2de774, Func Offset: 0x64
	// Line 277, Address: 0x2de778, Func Offset: 0x68
	// Line 278, Address: 0x2de788, Func Offset: 0x78
	// Line 281, Address: 0x2de7b4, Func Offset: 0xa4
	// Line 282, Address: 0x2de7c0, Func Offset: 0xb0
	// Line 283, Address: 0x2de7cc, Func Offset: 0xbc
	// Line 286, Address: 0x2de7f8, Func Offset: 0xe8
	// Line 287, Address: 0x2de804, Func Offset: 0xf4
	// Line 288, Address: 0x2de810, Func Offset: 0x100
	// Line 289, Address: 0x2de820, Func Offset: 0x110
	// Line 291, Address: 0x2de830, Func Offset: 0x120
	// Line 292, Address: 0x2de83c, Func Offset: 0x12c
	// Line 293, Address: 0x2de84c, Func Offset: 0x13c
	// Line 294, Address: 0x2de85c, Func Offset: 0x14c
	// Line 296, Address: 0x2de874, Func Offset: 0x164
	// Line 297, Address: 0x2de880, Func Offset: 0x170
	// Line 298, Address: 0x2de88c, Func Offset: 0x17c
	// Line 299, Address: 0x2de898, Func Offset: 0x188
	// Line 300, Address: 0x2de89c, Func Offset: 0x18c
	// Line 301, Address: 0x2de8a4, Func Offset: 0x194
	// Line 304, Address: 0x2de8a8, Func Offset: 0x198
	// Line 305, Address: 0x2de8b0, Func Offset: 0x1a0
	// Line 306, Address: 0x2de8b8, Func Offset: 0x1a8
	// Func End, Address: 0x2de8d4, Func Offset: 0x1c4
}

// 
// Start address: 0x2de8e0
void PlayerSwordObj(sfObj* obj)
{
	_anon3* w;
	// Line 308, Address: 0x2de8e0, Func Offset: 0
	// Line 310, Address: 0x2de8ec, Func Offset: 0xc
	// Line 311, Address: 0x2de90c, Func Offset: 0x2c
	// Line 314, Address: 0x2de918, Func Offset: 0x38
	// Func End, Address: 0x2de928, Func Offset: 0x48
}

// 
// Start address: 0x2de930
void PlayerSwordObjDestruct(sfObj* obj)
{
	_anon3* w;
	// Line 316, Address: 0x2de930, Func Offset: 0
	// Line 317, Address: 0x2de93c, Func Offset: 0xc
	// Line 318, Address: 0x2de940, Func Offset: 0x10
	// Line 319, Address: 0x2de94c, Func Offset: 0x1c
	// Line 320, Address: 0x2de954, Func Offset: 0x24
	// Line 321, Address: 0x2de95c, Func Offset: 0x2c
	// Line 322, Address: 0x2de964, Func Offset: 0x34
	// Line 325, Address: 0x2de96c, Func Offset: 0x3c
	// Func End, Address: 0x2de97c, Func Offset: 0x4c
}

// 
// Start address: 0x2de980
void PlayerSwordObjRender(sfObj* obj)
{
	_anon3* w;
	float a_f;
	unsigned int a_i;
	sgBone* bone;
	float s_ml;
	float s_wid[4];
	// Line 327, Address: 0x2de980, Func Offset: 0
	// Line 328, Address: 0x2de990, Func Offset: 0x10
	// Line 332, Address: 0x2de994, Func Offset: 0x14
	// Line 333, Address: 0x2de9b8, Func Offset: 0x38
	// Line 334, Address: 0x2de9c4, Func Offset: 0x44
	// Line 335, Address: 0x2de9d0, Func Offset: 0x50
	// Line 338, Address: 0x2de9d8, Func Offset: 0x58
	// Line 340, Address: 0x2de9e8, Func Offset: 0x68
	// Line 341, Address: 0x2de9f0, Func Offset: 0x70
	// Line 345, Address: 0x2de9fc, Func Offset: 0x7c
	// Line 350, Address: 0x2dea04, Func Offset: 0x84
	// Line 345, Address: 0x2dea08, Func Offset: 0x88
	// Line 349, Address: 0x2dea1c, Func Offset: 0x9c
	// Line 345, Address: 0x2dea2c, Func Offset: 0xac
	// Line 346, Address: 0x2dea34, Func Offset: 0xb4
	// Line 347, Address: 0x2dea38, Func Offset: 0xb8
	// Line 350, Address: 0x2dea3c, Func Offset: 0xbc
	// Line 351, Address: 0x2dea50, Func Offset: 0xd0
	// Line 352, Address: 0x2dea5c, Func Offset: 0xdc
	// Line 354, Address: 0x2dea74, Func Offset: 0xf4
	// Line 355, Address: 0x2dea7c, Func Offset: 0xfc
	// Line 356, Address: 0x2dea80, Func Offset: 0x100
	// Line 362, Address: 0x2dea88, Func Offset: 0x108
	// Func End, Address: 0x2dea9c, Func Offset: 0x11c
}

// 
// Start address: 0x2deaa0
int PlayerSwordAdd(float* trans, float* rot, int ghost_id)
{
	int i;
	float tmp[4];
	// Line 366, Address: 0x2deaa0, Func Offset: 0
	// Line 369, Address: 0x2deaa4, Func Offset: 0x4
	// Line 366, Address: 0x2deaa8, Func Offset: 0x8
	// Line 369, Address: 0x2deaac, Func Offset: 0xc
	// Line 366, Address: 0x2deab0, Func Offset: 0x10
	// Line 369, Address: 0x2deac4, Func Offset: 0x24
	// Line 371, Address: 0x2deac8, Func Offset: 0x28
	// Line 373, Address: 0x2dead4, Func Offset: 0x34
	// Line 374, Address: 0x2dead8, Func Offset: 0x38
	// Line 375, Address: 0x2deae4, Func Offset: 0x44
	// Line 376, Address: 0x2deaec, Func Offset: 0x4c
	// Line 378, Address: 0x2deaf0, Func Offset: 0x50
	// Line 375, Address: 0x2deaf4, Func Offset: 0x54
	// Line 378, Address: 0x2deafc, Func Offset: 0x5c
	// Line 375, Address: 0x2deb00, Func Offset: 0x60
	// Line 378, Address: 0x2deb04, Func Offset: 0x64
	// Line 379, Address: 0x2deb08, Func Offset: 0x68
	// Line 380, Address: 0x2deb14, Func Offset: 0x74
	// Line 378, Address: 0x2deb1c, Func Offset: 0x7c
	// Line 380, Address: 0x2deb20, Func Offset: 0x80
	// Line 378, Address: 0x2deb24, Func Offset: 0x84
	// Line 379, Address: 0x2deb2c, Func Offset: 0x8c
	// Line 380, Address: 0x2deb30, Func Offset: 0x90
	// Line 381, Address: 0x2deb34, Func Offset: 0x94
	// Line 382, Address: 0x2deb3c, Func Offset: 0x9c
	// Line 387, Address: 0x2deb44, Func Offset: 0xa4
	// Line 389, Address: 0x2deb50, Func Offset: 0xb0
	// Line 388, Address: 0x2deb54, Func Offset: 0xb4
	// Line 389, Address: 0x2deb68, Func Offset: 0xc8
	// Line 393, Address: 0x2deb70, Func Offset: 0xd0
	// Line 394, Address: 0x2deb78, Func Offset: 0xd8
	// Func End, Address: 0x2deb90, Func Offset: 0xf0
}

// 
// Start address: 0x2deb90
int PlayerSwordSetScene()
{
	int i;
	int ret;
	_enum stage;
	int scene;
	// Line 398, Address: 0x2deb90, Func Offset: 0
	// Line 401, Address: 0x2deb94, Func Offset: 0x4
	// Line 398, Address: 0x2deb98, Func Offset: 0x8
	// Line 416, Address: 0x2deba4, Func Offset: 0x14
	// Line 398, Address: 0x2deba8, Func Offset: 0x18
	// Line 400, Address: 0x2debac, Func Offset: 0x1c
	// Line 398, Address: 0x2debb0, Func Offset: 0x20
	// Line 416, Address: 0x2debb8, Func Offset: 0x28
	// Line 401, Address: 0x2debbc, Func Offset: 0x2c
	// Line 416, Address: 0x2debc0, Func Offset: 0x30
	// Line 402, Address: 0x2debc4, Func Offset: 0x34
	// Line 416, Address: 0x2debcc, Func Offset: 0x3c
	// Line 417, Address: 0x2debd0, Func Offset: 0x40
	// Line 419, Address: 0x2debe8, Func Offset: 0x58
	// Line 420, Address: 0x2debf8, Func Offset: 0x68
	// Line 423, Address: 0x2debfc, Func Offset: 0x6c
	// Line 425, Address: 0x2dec10, Func Offset: 0x80
	// Line 426, Address: 0x2dec14, Func Offset: 0x84
	// Func End, Address: 0x2dec34, Func Offset: 0xa4
}

// 
// Start address: 0x2dec40
void set_model()
{
	// Line 429, Address: 0x2dec40, Func Offset: 0
	// Line 430, Address: 0x2dec44, Func Offset: 0x4
	// Line 429, Address: 0x2dec48, Func Offset: 0x8
	// Line 430, Address: 0x2dec4c, Func Offset: 0xc
	// Line 429, Address: 0x2dec50, Func Offset: 0x10
	// Line 430, Address: 0x2dec54, Func Offset: 0x14
	// Line 431, Address: 0x2dec5c, Func Offset: 0x1c
	// Line 434, Address: 0x2dec8c, Func Offset: 0x4c
	// Line 436, Address: 0x2deca8, Func Offset: 0x68
	// Line 439, Address: 0x2decbc, Func Offset: 0x7c
	// Func End, Address: 0x2deccc, Func Offset: 0x8c
}

// 
// Start address: 0x2decd0
void remove_model()
{
	// Line 442, Address: 0x2decd0, Func Offset: 0
	// Line 443, Address: 0x2decd4, Func Offset: 0x4
	// Line 442, Address: 0x2decd8, Func Offset: 0x8
	// Line 443, Address: 0x2decdc, Func Offset: 0xc
	// Line 444, Address: 0x2dece8, Func Offset: 0x18
	// Line 447, Address: 0x2decf4, Func Offset: 0x24
	// Func End, Address: 0x2ded00, Func Offset: 0x30
}

// 
// Start address: 0x2ded00
void sword_update()
{
	sgBone* pl_bone;
	float pos[4];
	float rot[4];
	// Line 451, Address: 0x2ded00, Func Offset: 0
	// Line 455, Address: 0x2ded04, Func Offset: 0x4
	// Line 451, Address: 0x2ded08, Func Offset: 0x8
	// Line 455, Address: 0x2ded10, Func Offset: 0x10
	// Line 458, Address: 0x2ded1c, Func Offset: 0x1c
	// Line 460, Address: 0x2ded2c, Func Offset: 0x2c
	// Line 461, Address: 0x2ded38, Func Offset: 0x38
	// Line 462, Address: 0x2ded44, Func Offset: 0x44
	// Line 463, Address: 0x2ded54, Func Offset: 0x54
	// Line 464, Address: 0x2ded64, Func Offset: 0x64
	// Line 465, Address: 0x2ded68, Func Offset: 0x68
	// Func End, Address: 0x2ded78, Func Offset: 0x78
}

// 
// Start address: 0x2ded80
void PlayerSwordSetTarget(sfObj* obj)
{
	// Line 470, Address: 0x2ded80, Func Offset: 0
	// Line 472, Address: 0x2ded84, Func Offset: 0x4
	// Func End, Address: 0x2ded8c, Func Offset: 0xc
}

// 
// Start address: 0x2ded90
void set_angle()
{
	float pos_e[4];
	float sb[4];
	// Line 476, Address: 0x2ded90, Func Offset: 0
	// Line 480, Address: 0x2ded94, Func Offset: 0x4
	// Line 476, Address: 0x2ded98, Func Offset: 0x8
	// Line 480, Address: 0x2ded9c, Func Offset: 0xc
	// Line 481, Address: 0x2deda8, Func Offset: 0x18
	// Line 482, Address: 0x2dedb0, Func Offset: 0x20
	// Line 483, Address: 0x2dedd0, Func Offset: 0x40
	// Line 484, Address: 0x2dede4, Func Offset: 0x54
	// Line 487, Address: 0x2dede8, Func Offset: 0x58
	// Func End, Address: 0x2dedf4, Func Offset: 0x64
}

// 
// Start address: 0x2dee00
void PlayerSwordStatMain()
{
	_PLAYER_WORK* p;
	float ftime;
	float trans[4];
	float rot[4];
	float target[4];
	float dig;
	float g_time;
	// Line 491, Address: 0x2dee00, Func Offset: 0
	// Line 492, Address: 0x2dee0c, Func Offset: 0xc
	// Line 491, Address: 0x2dee10, Func Offset: 0x10
	// Line 492, Address: 0x2dee14, Func Offset: 0x14
	// Line 496, Address: 0x2dee18, Func Offset: 0x18
	// Line 497, Address: 0x2dee28, Func Offset: 0x28
	// Line 500, Address: 0x2dee90, Func Offset: 0x90
	// Line 501, Address: 0x2dee98, Func Offset: 0x98
	// Line 503, Address: 0x2dee9c, Func Offset: 0x9c
	// Line 501, Address: 0x2deea0, Func Offset: 0xa0
	// Line 503, Address: 0x2deea4, Func Offset: 0xa4
	// Line 504, Address: 0x2deeb0, Func Offset: 0xb0
	// Line 505, Address: 0x2deebc, Func Offset: 0xbc
	// Line 507, Address: 0x2deec8, Func Offset: 0xc8
	// Line 510, Address: 0x2deed0, Func Offset: 0xd0
	// Line 511, Address: 0x2deedc, Func Offset: 0xdc
	// Line 513, Address: 0x2deeec, Func Offset: 0xec
	// Line 514, Address: 0x2deef4, Func Offset: 0xf4
	// Line 515, Address: 0x2deef8, Func Offset: 0xf8
	// Line 520, Address: 0x2def00, Func Offset: 0x100
	// Line 524, Address: 0x2def08, Func Offset: 0x108
	// Line 525, Address: 0x2def14, Func Offset: 0x114
	// Line 526, Address: 0x2def20, Func Offset: 0x120
	// Line 527, Address: 0x2def30, Func Offset: 0x130
	// Line 528, Address: 0x2def34, Func Offset: 0x134
	// Line 529, Address: 0x2def3c, Func Offset: 0x13c
	// Line 530, Address: 0x2def40, Func Offset: 0x140
	// Line 531, Address: 0x2def48, Func Offset: 0x148
	// Line 534, Address: 0x2def50, Func Offset: 0x150
	// Line 535, Address: 0x2def5c, Func Offset: 0x15c
	// Line 536, Address: 0x2def6c, Func Offset: 0x16c
	// Line 537, Address: 0x2def70, Func Offset: 0x170
	// Line 538, Address: 0x2def94, Func Offset: 0x194
	// Line 539, Address: 0x2def98, Func Offset: 0x198
	// Line 540, Address: 0x2defa0, Func Offset: 0x1a0
	// Line 543, Address: 0x2defa8, Func Offset: 0x1a8
	// Line 544, Address: 0x2defb4, Func Offset: 0x1b4
	// Line 547, Address: 0x2defc0, Func Offset: 0x1c0
	// Line 544, Address: 0x2defc4, Func Offset: 0x1c4
	// Line 547, Address: 0x2defc8, Func Offset: 0x1c8
	// Line 544, Address: 0x2defd4, Func Offset: 0x1d4
	// Line 547, Address: 0x2defdc, Func Offset: 0x1dc
	// Line 551, Address: 0x2defec, Func Offset: 0x1ec
	// Line 552, Address: 0x2deff4, Func Offset: 0x1f4
	// Line 553, Address: 0x2df000, Func Offset: 0x200
	// Line 554, Address: 0x2df018, Func Offset: 0x218
	// Line 555, Address: 0x2df024, Func Offset: 0x224
	// Line 556, Address: 0x2df02c, Func Offset: 0x22c
	// Line 557, Address: 0x2df048, Func Offset: 0x248
	// Line 558, Address: 0x2df050, Func Offset: 0x250
	// Line 560, Address: 0x2df058, Func Offset: 0x258
	// Line 562, Address: 0x2df060, Func Offset: 0x260
	// Line 565, Address: 0x2df068, Func Offset: 0x268
	// Line 567, Address: 0x2df074, Func Offset: 0x274
	// Line 570, Address: 0x2df090, Func Offset: 0x290
	// Line 571, Address: 0x2df0ac, Func Offset: 0x2ac
	// Line 573, Address: 0x2df0b4, Func Offset: 0x2b4
	// Line 572, Address: 0x2df0b8, Func Offset: 0x2b8
	// Line 571, Address: 0x2df0bc, Func Offset: 0x2bc
	// Line 573, Address: 0x2df0c0, Func Offset: 0x2c0
	// Line 574, Address: 0x2df0c8, Func Offset: 0x2c8
	// Line 575, Address: 0x2df100, Func Offset: 0x300
	// Line 578, Address: 0x2df108, Func Offset: 0x308
	// Line 580, Address: 0x2df118, Func Offset: 0x318
	// Line 581, Address: 0x2df120, Func Offset: 0x320
	// Line 582, Address: 0x2df12c, Func Offset: 0x32c
	// Line 583, Address: 0x2df138, Func Offset: 0x338
	// Line 584, Address: 0x2df144, Func Offset: 0x344
	// Line 588, Address: 0x2df148, Func Offset: 0x348
	// Line 584, Address: 0x2df14c, Func Offset: 0x34c
	// Line 585, Address: 0x2df150, Func Offset: 0x350
	// Line 586, Address: 0x2df154, Func Offset: 0x354
	// Line 588, Address: 0x2df158, Func Offset: 0x358
	// Line 589, Address: 0x2df164, Func Offset: 0x364
	// Line 591, Address: 0x2df16c, Func Offset: 0x36c
	// Line 593, Address: 0x2df170, Func Offset: 0x370
	// Line 594, Address: 0x2df184, Func Offset: 0x384
	// Line 595, Address: 0x2df18c, Func Offset: 0x38c
	// Line 596, Address: 0x2df190, Func Offset: 0x390
	// Line 597, Address: 0x2df198, Func Offset: 0x398
	// Line 599, Address: 0x2df19c, Func Offset: 0x39c
	// Line 600, Address: 0x2df1a4, Func Offset: 0x3a4
	// Line 603, Address: 0x2df1a8, Func Offset: 0x3a8
	// Line 604, Address: 0x2df1b0, Func Offset: 0x3b0
	// Line 606, Address: 0x2df1b8, Func Offset: 0x3b8
	// Line 607, Address: 0x2df1c4, Func Offset: 0x3c4
	// Line 609, Address: 0x2df1d4, Func Offset: 0x3d4
	// Line 610, Address: 0x2df1dc, Func Offset: 0x3dc
	// Line 611, Address: 0x2df1e0, Func Offset: 0x3e0
	// Line 615, Address: 0x2df1e8, Func Offset: 0x3e8
	// Line 616, Address: 0x2df1f0, Func Offset: 0x3f0
	// Line 620, Address: 0x2df1f8, Func Offset: 0x3f8
	// Line 621, Address: 0x2df204, Func Offset: 0x404
	// Line 622, Address: 0x2df210, Func Offset: 0x410
	// Line 623, Address: 0x2df220, Func Offset: 0x420
	// Line 624, Address: 0x2df224, Func Offset: 0x424
	// Line 625, Address: 0x2df22c, Func Offset: 0x42c
	// Line 626, Address: 0x2df230, Func Offset: 0x430
	// Line 627, Address: 0x2df238, Func Offset: 0x438
	// Line 630, Address: 0x2df240, Func Offset: 0x440
	// Line 631, Address: 0x2df24c, Func Offset: 0x44c
	// Line 632, Address: 0x2df25c, Func Offset: 0x45c
	// Line 633, Address: 0x2df264, Func Offset: 0x464
	// Line 634, Address: 0x2df268, Func Offset: 0x468
	// Line 635, Address: 0x2df270, Func Offset: 0x470
	// Line 638, Address: 0x2df278, Func Offset: 0x478
	// Line 639, Address: 0x2df284, Func Offset: 0x484
	// Line 641, Address: 0x2df294, Func Offset: 0x494
	// Line 642, Address: 0x2df29c, Func Offset: 0x49c
	// Line 643, Address: 0x2df2a4, Func Offset: 0x4a4
	// Line 644, Address: 0x2df2b0, Func Offset: 0x4b0
	// Line 645, Address: 0x2df2bc, Func Offset: 0x4bc
	// Line 646, Address: 0x2df2c8, Func Offset: 0x4c8
	// Line 650, Address: 0x2df2cc, Func Offset: 0x4cc
	// Line 646, Address: 0x2df2d0, Func Offset: 0x4d0
	// Line 647, Address: 0x2df2d4, Func Offset: 0x4d4
	// Line 648, Address: 0x2df2d8, Func Offset: 0x4d8
	// Line 650, Address: 0x2df2dc, Func Offset: 0x4dc
	// Line 651, Address: 0x2df2e8, Func Offset: 0x4e8
	// Line 654, Address: 0x2df2f0, Func Offset: 0x4f0
	// Line 660, Address: 0x2df2f8, Func Offset: 0x4f8
	// Func End, Address: 0x2df30c, Func Offset: 0x50c
}

// 
// Start address: 0x2df310
int enemy_is_ghost(sfObj* obj)
{
	EnemyKind kind;
	int ret;
	// Line 664, Address: 0x2df310, Func Offset: 0
	// Line 668, Address: 0x2df31c, Func Offset: 0xc
	// Line 669, Address: 0x2df328, Func Offset: 0x18
	// Line 674, Address: 0x2df360, Func Offset: 0x50
	// Line 676, Address: 0x2df368, Func Offset: 0x58
	// Line 677, Address: 0x2df36c, Func Offset: 0x5c
	// Func End, Address: 0x2df37c, Func Offset: 0x6c
}

// 
// Start address: 0x2df380
sfObj* PlayerSwordCheckGhostFinish()
{
	sfObj* o;
	sfObj* o_last;
	sfObj* ret;
	float pos_e[4];
	float sb[4];
	float dist;
	// Line 681, Address: 0x2df380, Func Offset: 0
	// Line 686, Address: 0x2df390, Func Offset: 0x10
	// Line 690, Address: 0x2df394, Func Offset: 0x14
	// Line 693, Address: 0x2df3a0, Func Offset: 0x20
	// Line 695, Address: 0x2df3b0, Func Offset: 0x30
	// Line 699, Address: 0x2df3c0, Func Offset: 0x40
	// Line 700, Address: 0x2df3c8, Func Offset: 0x48
	// Line 702, Address: 0x2df3e8, Func Offset: 0x68
	// Line 701, Address: 0x2df3f0, Func Offset: 0x70
	// Line 702, Address: 0x2df400, Func Offset: 0x80
	// Line 701, Address: 0x2df404, Func Offset: 0x84
	// Line 702, Address: 0x2df414, Func Offset: 0x94
	// Line 705, Address: 0x2df44c, Func Offset: 0xcc
	// Line 709, Address: 0x2df450, Func Offset: 0xd0
	// Line 711, Address: 0x2df460, Func Offset: 0xe0
	// Line 712, Address: 0x2df464, Func Offset: 0xe4
	// Func End, Address: 0x2df478, Func Offset: 0xf8
}

