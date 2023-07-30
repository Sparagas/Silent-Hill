typedef struct sgIKHandle;
typedef struct sgQTNode;
typedef struct _anon0;
typedef enum sfMaphitMaterialType : unsigned char;
typedef struct _anon1;
typedef struct sgQTObject;
typedef struct sgBone;
typedef struct _PLAYER_WORK;
typedef struct _anon2;
typedef struct _anon3;
typedef struct sfOffsetAABB;
typedef struct _anon4;
typedef struct _anon5;
typedef union sfCldBody;
typedef struct _GAME_WORK;
typedef struct _anon6;
typedef struct _anon7;
typedef union _anon8;
typedef struct sfCldPart;
typedef struct _anon9;
typedef enum GameItem : unsigned char;
typedef struct sgAnime;
typedef struct _anon10;
typedef struct _anon11;
typedef struct sfObj;
typedef struct sfCharacter;
typedef union _anon12;
typedef struct sfCldObject;
typedef struct sgSVModel;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _anon13;

typedef void(*type_2)(_anon0*, int, int, float*);
typedef sgIKSolveResult(*type_4)();
typedef void(*type_16)(sgAnime*, int);
typedef void(*type_20)(sfObj*);
typedef void(*type_24)(sfObj*);

typedef float type_0[4];
typedef float type_1[4][2];
typedef int type_3[1];
typedef _PLAYER_WORK type_5[2];
typedef int type_6[1];
typedef int type_7[1];
typedef _anon4 type_8[4];
typedef int type_9[1];
typedef _anon8 type_10[0];
typedef int type_11[13];
typedef unsigned char type_12[3];
typedef float type_13[4];
typedef void* type_14[4];
typedef int type_15[1];
typedef int type_17[13];
typedef unsigned char type_18[4];
typedef _anon12 type_19[256];
typedef int type_21[13];
typedef float type_22[4];
typedef float type_23[4][4];
typedef sfCldPart* type_25[6];
typedef unsigned char type_26[3];
typedef short type_27[2];
typedef int type_28[1];
typedef unsigned short type_29[2];
typedef int type_30[13];
typedef char type_31[4];
typedef unsigned char type_32[4];
typedef int type_33[1];
typedef float type_34[1];
typedef int type_35[1];

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

struct sgQTNode
{
	int dummy;
};

struct _anon0
{
	unsigned long tex0;
	unsigned long clamp;
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

struct _anon1
{
	int dummy;
};

struct sgQTObject
{
	_anon5 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
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
	_anon1* anim_ctrl;
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

struct _anon3
{
	float start[4];
	float end[4];
};

struct sfOffsetAABB
{
	_anon6 aabb;
	float offset[4];
};

struct _anon4
{
	unsigned char next_offset;
	unsigned char flags;
	short id;
};

struct _anon5
{
	float center[4];
	float radius;
};

union sfCldBody
{
	_anon9 obb;
	_anon6 aabb;
	sfOffsetAABB offset_aabb;
	_anon3 line;
	_anon5 sphere;
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
	float bmin[4];
	float bmax[4];
};

struct _anon7
{
	_anon8 vertex[0];
};

union _anon8
{
	float node[4];
	_anon4 data[4];
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

struct _anon9
{
	float mat[4][4];
	float half_w[4];
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

struct _anon10
{
	unsigned char r_foot;
	unsigned char l_foot;
	unsigned char tire;
	unsigned char die;
	unsigned char b_general;
	unsigned char b_g_val;
	unsigned char weapon;
	unsigned char weapon_val;
	unsigned char wall;
	int weapon_slot;
	float player_pan;
	float player_vol;
	float gaoh_time;
};

struct _anon11
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

struct sfObj
{
	_anon12 fwork[256];
	_anon12* work;
	void(*func)(sfObj*);
	_anon12* work_pt0;
	_anon12* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon12* sys_work;
	_anon12* scene_work;
	_anon12* event_work;
	_anon12* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon13 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

union _anon12
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

struct _anon13
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

int foot_se[13];
int wall_pipe_se[13];
int wall_pick_se[13];
int wall_knife_se[13];
_anon10 flags;
_GAME_WORK gamew;
int darea_loop;
int darea_no;
int attack_loop;
int attack_no;
int battle_loop;
int battle_no;
int damage_loop2;
int damage_no2;
int damage_loop;
int damage_no;
_PLAYER_WORK playerw[2];
_anon11 player_battle_work;

int se_call_player(int no, float vol);
void change_curse();
void PlayerSESetPan();
sfMaphitMaterialType foot_pol_check(float* pos);
void PlayerSEInit();
void PlayerSESetFoot(_PLAYER_WORK* p);
void PlayerSESetTire();
void PlayerSEResetTire();
void PlayerSESetDie();
void set_damage_loop_se(int no);
void set_darea_loop_se(int no);
void PlayerSEStopDamageLoop();
void PlayerSEStopDareaLoop();
void PlayerSESetDamageArea();
void PlayerSESetBattleGeneral(int type, _PLAYER_WORK* p);
void PlayerSEPostBattleGeneral();
void set_battle_loop_se(int no);
void set_attack_loop_se(int no);
void PlayerSEStopBattleLoop();
void PlayerSEStopAttackLoop();
int set_ready_se(_PLAYER_WORK* p);
void se_call_swing(_PLAYER_WORK* p, int feed);
void set_attack_se(_PLAYER_WORK* p);
void PlayerSESetWeapon(int type, _PLAYER_WORK* p);
void PlayerSECheckChainsawVib();
void PlayerSECheckWeapon(_PLAYER_WORK* p);
void PlayerSESetWall(sfMaphitMaterialType mtr, _PLAYER_WORK* p);
void PlayerSEResetWall();
void PlayerSoundSetPage();

// 
// Start address: 0x2b1e70
int se_call_player(int no, float vol)
{
	float vol_ls02;
	// Line 171, Address: 0x2b1e70, Func Offset: 0
	// Line 173, Address: 0x2b1e84, Func Offset: 0x14
	// Line 175, Address: 0x2b1ea8, Func Offset: 0x38
	// Line 178, Address: 0x2b1eb0, Func Offset: 0x40
	// Line 181, Address: 0x2b1ed4, Func Offset: 0x64
	// Line 182, Address: 0x2b1ed8, Func Offset: 0x68
	// Line 181, Address: 0x2b1edc, Func Offset: 0x6c
	// Line 182, Address: 0x2b1ee0, Func Offset: 0x70
	// Line 181, Address: 0x2b1ee8, Func Offset: 0x78
	// Line 182, Address: 0x2b1eec, Func Offset: 0x7c
	// Line 183, Address: 0x2b1ef8, Func Offset: 0x88
	// Line 185, Address: 0x2b1f00, Func Offset: 0x90
	// Line 189, Address: 0x2b1f20, Func Offset: 0xb0
	// Line 190, Address: 0x2b1f48, Func Offset: 0xd8
	// Func End, Address: 0x2b1f5c, Func Offset: 0xec
}

// 
// Start address: 0x2b1f60
void change_curse()
{
	float pos[4];
	float d_pan;
	float d_vol;
	int no;
	float vol;
	float cam_Z[4];
	float cam_pos[4];
	float vec[4];
	float at1;
	float at2;
	float dist;
	// Line 250, Address: 0x2b1f60, Func Offset: 0
	// Line 254, Address: 0x2b1f64, Func Offset: 0x4
	// Line 250, Address: 0x2b1f68, Func Offset: 0x8
	// Line 255, Address: 0x2b1f6c, Func Offset: 0xc
	// Line 250, Address: 0x2b1f70, Func Offset: 0x10
	// Line 254, Address: 0x2b1f7c, Func Offset: 0x1c
	// Line 255, Address: 0x2b1f80, Func Offset: 0x20
	// Line 257, Address: 0x2b1f84, Func Offset: 0x24
	// Line 262, Address: 0x2b1f94, Func Offset: 0x34
	// Line 264, Address: 0x2b1f9c, Func Offset: 0x3c
	// Line 265, Address: 0x2b1fa4, Func Offset: 0x44
	// Line 270, Address: 0x2b1fc0, Func Offset: 0x60
	// Line 271, Address: 0x2b1fcc, Func Offset: 0x6c
	// Line 272, Address: 0x2b1fdc, Func Offset: 0x7c
	// Line 277, Address: 0x2b1fe4, Func Offset: 0x84
	// Line 280, Address: 0x2b1fe8, Func Offset: 0x88
	// Line 277, Address: 0x2b1fec, Func Offset: 0x8c
	// Line 280, Address: 0x2b2000, Func Offset: 0xa0
	// Line 277, Address: 0x2b2004, Func Offset: 0xa4
	// Line 280, Address: 0x2b201c, Func Offset: 0xbc
	// Line 281, Address: 0x2b2028, Func Offset: 0xc8
	// Line 284, Address: 0x2b2030, Func Offset: 0xd0
	// Line 283, Address: 0x2b2034, Func Offset: 0xd4
	// Line 284, Address: 0x2b2038, Func Offset: 0xd8
	// Line 285, Address: 0x2b2040, Func Offset: 0xe0
	// Line 284, Address: 0x2b2048, Func Offset: 0xe8
	// Line 285, Address: 0x2b2058, Func Offset: 0xf8
	// Line 289, Address: 0x2b2064, Func Offset: 0x104
	// Line 296, Address: 0x2b2070, Func Offset: 0x110
	// Line 300, Address: 0x2b2098, Func Offset: 0x138
	// Func End, Address: 0x2b20b0, Func Offset: 0x150
}

// 
// Start address: 0x2b20b0
void PlayerSESetPan()
{
	_PLAYER_WORK* p;
	float cam_Z[4];
	float cam_pos[4];
	float p_vec[4];
	float rot;
	float vol;
	float pos_tmp[4];
	float wv_mat[4][4];
	float dist;
	// Line 304, Address: 0x2b20b0, Func Offset: 0
	// Line 313, Address: 0x2b20b8, Func Offset: 0x8
	// Line 304, Address: 0x2b20bc, Func Offset: 0xc
	// Line 305, Address: 0x2b20c4, Func Offset: 0x14
	// Line 304, Address: 0x2b20c8, Func Offset: 0x18
	// Line 313, Address: 0x2b20cc, Func Offset: 0x1c
	// Line 315, Address: 0x2b20d4, Func Offset: 0x24
	// Line 316, Address: 0x2b20dc, Func Offset: 0x2c
	// Line 330, Address: 0x2b20f8, Func Offset: 0x48
	// Line 331, Address: 0x2b20fc, Func Offset: 0x4c
	// Line 332, Address: 0x2b2100, Func Offset: 0x50
	// Line 330, Address: 0x2b2104, Func Offset: 0x54
	// Line 332, Address: 0x2b2108, Func Offset: 0x58
	// Line 331, Address: 0x2b210c, Func Offset: 0x5c
	// Line 330, Address: 0x2b2110, Func Offset: 0x60
	// Line 332, Address: 0x2b2114, Func Offset: 0x64
	// Line 330, Address: 0x2b2118, Func Offset: 0x68
	// Line 332, Address: 0x2b212c, Func Offset: 0x7c
	// Line 333, Address: 0x2b2134, Func Offset: 0x84
	// Line 334, Address: 0x2b2168, Func Offset: 0xb8
	// Line 340, Address: 0x2b2170, Func Offset: 0xc0
	// Line 343, Address: 0x2b2174, Func Offset: 0xc4
	// Line 340, Address: 0x2b2178, Func Offset: 0xc8
	// Line 334, Address: 0x2b218c, Func Offset: 0xdc
	// Line 340, Address: 0x2b2190, Func Offset: 0xe0
	// Line 343, Address: 0x2b21a8, Func Offset: 0xf8
	// Line 344, Address: 0x2b21bc, Func Offset: 0x10c
	// Line 346, Address: 0x2b21c8, Func Offset: 0x118
	// Line 347, Address: 0x2b21dc, Func Offset: 0x12c
	// Line 348, Address: 0x2b21e0, Func Offset: 0x130
	// Line 349, Address: 0x2b21ec, Func Offset: 0x13c
	// Line 348, Address: 0x2b21f4, Func Offset: 0x144
	// Line 349, Address: 0x2b2204, Func Offset: 0x154
	// Line 351, Address: 0x2b2210, Func Offset: 0x160
	// Line 355, Address: 0x2b2218, Func Offset: 0x168
	// Line 354, Address: 0x2b221c, Func Offset: 0x16c
	// Line 355, Address: 0x2b2220, Func Offset: 0x170
	// Line 356, Address: 0x2b2228, Func Offset: 0x178
	// Line 355, Address: 0x2b2230, Func Offset: 0x180
	// Line 356, Address: 0x2b2240, Func Offset: 0x190
	// Line 357, Address: 0x2b224c, Func Offset: 0x19c
	// Line 362, Address: 0x2b2250, Func Offset: 0x1a0
	// Line 363, Address: 0x2b2258, Func Offset: 0x1a8
	// Line 366, Address: 0x2b2260, Func Offset: 0x1b0
	// Line 367, Address: 0x2b2270, Func Offset: 0x1c0
	// Line 368, Address: 0x2b2284, Func Offset: 0x1d4
	// Line 369, Address: 0x2b2288, Func Offset: 0x1d8
	// Line 370, Address: 0x2b2298, Func Offset: 0x1e8
	// Line 371, Address: 0x2b22ac, Func Offset: 0x1fc
	// Line 372, Address: 0x2b22b0, Func Offset: 0x200
	// Line 373, Address: 0x2b22c0, Func Offset: 0x210
	// Line 374, Address: 0x2b22d4, Func Offset: 0x224
	// Line 375, Address: 0x2b22d8, Func Offset: 0x228
	// Line 376, Address: 0x2b22e8, Func Offset: 0x238
	// Line 377, Address: 0x2b22fc, Func Offset: 0x24c
	// Line 379, Address: 0x2b2300, Func Offset: 0x250
	// Line 380, Address: 0x2b2310, Func Offset: 0x260
	// Line 381, Address: 0x2b2318, Func Offset: 0x268
	// Line 382, Address: 0x2b2320, Func Offset: 0x270
	// Line 383, Address: 0x2b233c, Func Offset: 0x28c
	// Line 384, Address: 0x2b2344, Func Offset: 0x294
	// Line 387, Address: 0x2b2348, Func Offset: 0x298
	// Func End, Address: 0x2b2360, Func Offset: 0x2b0
}

// 
// Start address: 0x2b2360
sfMaphitMaterialType foot_pol_check(float* pos)
{
	_anon7* pol;
	_anon3 line;
	sfMaphitMaterialType ret;
	// Line 463, Address: 0x2b2360, Func Offset: 0
	// Line 470, Address: 0x2b2368, Func Offset: 0x8
	// Line 471, Address: 0x2b2374, Func Offset: 0x14
	// Line 476, Address: 0x2b2380, Func Offset: 0x20
	// Line 473, Address: 0x2b2384, Func Offset: 0x24
	// Line 475, Address: 0x2b238c, Func Offset: 0x2c
	// Line 473, Address: 0x2b2390, Func Offset: 0x30
	// Line 475, Address: 0x2b239c, Func Offset: 0x3c
	// Line 473, Address: 0x2b23a0, Func Offset: 0x40
	// Line 476, Address: 0x2b23a4, Func Offset: 0x44
	// Line 481, Address: 0x2b23ac, Func Offset: 0x4c
	// Line 485, Address: 0x2b23c8, Func Offset: 0x68
	// Func End, Address: 0x2b23d4, Func Offset: 0x74
}

// 
// Start address: 0x2b23e0
void PlayerSEInit()
{
	// Line 489, Address: 0x2b23e0, Func Offset: 0
	// Line 490, Address: 0x2b23e4, Func Offset: 0x4
	// Line 489, Address: 0x2b23e8, Func Offset: 0x8
	// Line 490, Address: 0x2b23ec, Func Offset: 0xc
	// Line 497, Address: 0x2b23f8, Func Offset: 0x18
	// Line 493, Address: 0x2b23fc, Func Offset: 0x1c
	// Line 497, Address: 0x2b2400, Func Offset: 0x20
	// Line 493, Address: 0x2b2404, Func Offset: 0x24
	// Line 494, Address: 0x2b240c, Func Offset: 0x2c
	// Line 498, Address: 0x2b2414, Func Offset: 0x34
	// Line 499, Address: 0x2b241c, Func Offset: 0x3c
	// Line 500, Address: 0x2b2424, Func Offset: 0x44
	// Line 501, Address: 0x2b242c, Func Offset: 0x4c
	// Line 502, Address: 0x2b2434, Func Offset: 0x54
	// Line 503, Address: 0x2b243c, Func Offset: 0x5c
	// Line 504, Address: 0x2b2444, Func Offset: 0x64
	// Line 505, Address: 0x2b244c, Func Offset: 0x6c
	// Line 506, Address: 0x2b2454, Func Offset: 0x74
	// Line 509, Address: 0x2b2458, Func Offset: 0x78
	// Line 511, Address: 0x2b2460, Func Offset: 0x80
	// Line 514, Address: 0x2b2468, Func Offset: 0x88
	// Func End, Address: 0x2b2474, Func Offset: 0x94
}

// 
// Start address: 0x2b2480
void PlayerSESetFoot(_PLAYER_WORK* p)
{
	sgBone* bone;
	float pos[4];
	float height_r;
	float check_r;
	float height_l;
	int f;
	float eff_pos[4];
	_anon2* ui_work;
	sfMaphitMaterialType mtr;
	sgBone* f_bone;
	sgBone* f_bone;
	float speed;
	float sb[4];
	// Line 518, Address: 0x2b2480, Func Offset: 0
	// Line 526, Address: 0x2b249c, Func Offset: 0x1c
	// Line 542, Address: 0x2b24a4, Func Offset: 0x24
	// Line 526, Address: 0x2b24a8, Func Offset: 0x28
	// Line 542, Address: 0x2b24ac, Func Offset: 0x2c
	// Line 539, Address: 0x2b24b0, Func Offset: 0x30
	// Line 542, Address: 0x2b24b4, Func Offset: 0x34
	// Line 543, Address: 0x2b24c8, Func Offset: 0x48
	// Line 544, Address: 0x2b24d0, Func Offset: 0x50
	// Line 546, Address: 0x2b24d8, Func Offset: 0x58
	// Line 549, Address: 0x2b24e0, Func Offset: 0x60
	// Line 550, Address: 0x2b24ec, Func Offset: 0x6c
	// Line 551, Address: 0x2b24f8, Func Offset: 0x78
	// Line 552, Address: 0x2b2518, Func Offset: 0x98
	// Line 553, Address: 0x2b2524, Func Offset: 0xa4
	// Line 556, Address: 0x2b2530, Func Offset: 0xb0
	// Line 557, Address: 0x2b2540, Func Offset: 0xc0
	// Line 558, Address: 0x2b254c, Func Offset: 0xcc
	// Line 559, Address: 0x2b2550, Func Offset: 0xd0
	// Line 561, Address: 0x2b2560, Func Offset: 0xe0
	// Line 562, Address: 0x2b2568, Func Offset: 0xe8
	// Line 564, Address: 0x2b2570, Func Offset: 0xf0
	// Line 567, Address: 0x2b2578, Func Offset: 0xf8
	// Line 568, Address: 0x2b2584, Func Offset: 0x104
	// Line 569, Address: 0x2b2590, Func Offset: 0x110
	// Line 570, Address: 0x2b25a8, Func Offset: 0x128
	// Line 569, Address: 0x2b25ac, Func Offset: 0x12c
	// Line 570, Address: 0x2b25b0, Func Offset: 0x130
	// Line 569, Address: 0x2b25b8, Func Offset: 0x138
	// Line 570, Address: 0x2b25bc, Func Offset: 0x13c
	// Line 571, Address: 0x2b25c8, Func Offset: 0x148
	// Line 574, Address: 0x2b25d4, Func Offset: 0x154
	// Line 575, Address: 0x2b25e4, Func Offset: 0x164
	// Line 576, Address: 0x2b25f0, Func Offset: 0x170
	// Line 577, Address: 0x2b25f4, Func Offset: 0x174
	// Line 578, Address: 0x2b2604, Func Offset: 0x184
	// Line 579, Address: 0x2b2608, Func Offset: 0x188
	// Line 580, Address: 0x2b2610, Func Offset: 0x190
	// Line 582, Address: 0x2b2618, Func Offset: 0x198
	// Line 586, Address: 0x2b2620, Func Offset: 0x1a0
	// Line 589, Address: 0x2b264c, Func Offset: 0x1cc
	// Line 590, Address: 0x2b265c, Func Offset: 0x1dc
	// Line 591, Address: 0x2b2668, Func Offset: 0x1e8
	// Line 592, Address: 0x2b266c, Func Offset: 0x1ec
	// Line 593, Address: 0x2b2680, Func Offset: 0x200
	// Line 594, Address: 0x2b268c, Func Offset: 0x20c
	// Line 595, Address: 0x2b2690, Func Offset: 0x210
	// Line 599, Address: 0x2b2698, Func Offset: 0x218
	// Line 600, Address: 0x2b26a8, Func Offset: 0x228
	// Line 605, Address: 0x2b26e0, Func Offset: 0x260
	// Line 609, Address: 0x2b26f4, Func Offset: 0x274
	// Line 610, Address: 0x2b2704, Func Offset: 0x284
	// Line 611, Address: 0x2b2724, Func Offset: 0x2a4
	// Line 612, Address: 0x2b2728, Func Offset: 0x2a8
	// Line 611, Address: 0x2b272c, Func Offset: 0x2ac
	// Line 612, Address: 0x2b2730, Func Offset: 0x2b0
	// Line 613, Address: 0x2b275c, Func Offset: 0x2dc
	// Line 612, Address: 0x2b2764, Func Offset: 0x2e4
	// Line 613, Address: 0x2b2768, Func Offset: 0x2e8
	// Line 615, Address: 0x2b2778, Func Offset: 0x2f8
	// Line 618, Address: 0x2b2780, Func Offset: 0x300
	// Line 619, Address: 0x2b27a0, Func Offset: 0x320
	// Line 624, Address: 0x2b27b0, Func Offset: 0x330
	// Func End, Address: 0x2b27d0, Func Offset: 0x350
}

// 
// Start address: 0x2b27d0
void PlayerSESetTire()
{
	// Line 628, Address: 0x2b27d0, Func Offset: 0
	// Line 629, Address: 0x2b27d4, Func Offset: 0x4
	// Line 628, Address: 0x2b27d8, Func Offset: 0x8
	// Line 629, Address: 0x2b27dc, Func Offset: 0xc
	// Line 630, Address: 0x2b27e8, Func Offset: 0x18
	// Line 631, Address: 0x2b27f8, Func Offset: 0x28
	// Line 632, Address: 0x2b2834, Func Offset: 0x64
	// Line 634, Address: 0x2b2840, Func Offset: 0x70
	// Line 635, Address: 0x2b284c, Func Offset: 0x7c
	// Line 636, Address: 0x2b285c, Func Offset: 0x8c
	// Line 640, Address: 0x2b2860, Func Offset: 0x90
	// Func End, Address: 0x2b286c, Func Offset: 0x9c
}

// 
// Start address: 0x2b2870
void PlayerSEResetTire()
{
	// Line 644, Address: 0x2b2870, Func Offset: 0
	// Line 645, Address: 0x2b2880, Func Offset: 0x10
	// Line 646, Address: 0x2b2890, Func Offset: 0x20
	// Line 647, Address: 0x2b28a0, Func Offset: 0x30
	// Line 650, Address: 0x2b28a8, Func Offset: 0x38
	// Func End, Address: 0x2b28b0, Func Offset: 0x40
}

// 
// Start address: 0x2b28b0
void PlayerSESetDie()
{
	// Line 654, Address: 0x2b28b0, Func Offset: 0
	// Line 655, Address: 0x2b28b4, Func Offset: 0x4
	// Line 654, Address: 0x2b28b8, Func Offset: 0x8
	// Line 655, Address: 0x2b28bc, Func Offset: 0xc
	// Line 656, Address: 0x2b28c8, Func Offset: 0x18
	// Line 657, Address: 0x2b28d8, Func Offset: 0x28
	// Line 658, Address: 0x2b28e4, Func Offset: 0x34
	// Line 661, Address: 0x2b28e8, Func Offset: 0x38
	// Func End, Address: 0x2b28f4, Func Offset: 0x44
}

// 
// Start address: 0x2b2900
void set_damage_loop_se(int no)
{
	// Line 666, Address: 0x2b2900, Func Offset: 0
	// Line 667, Address: 0x2b2914, Func Offset: 0x14
	// Line 668, Address: 0x2b291c, Func Offset: 0x1c
	// Line 671, Address: 0x2b2928, Func Offset: 0x28
	// Line 670, Address: 0x2b2930, Func Offset: 0x30
	// Line 671, Address: 0x2b2934, Func Offset: 0x34
	// Line 674, Address: 0x2b2948, Func Offset: 0x48
	// Func End, Address: 0x2b2958, Func Offset: 0x58
}

// 
// Start address: 0x2b2960
void set_darea_loop_se(int no)
{
	// Line 686, Address: 0x2b2960, Func Offset: 0
	// Line 687, Address: 0x2b2964, Func Offset: 0x4
	// Line 686, Address: 0x2b2968, Func Offset: 0x8
	// Line 687, Address: 0x2b2974, Func Offset: 0x14
	// Line 688, Address: 0x2b2980, Func Offset: 0x20
	// Line 689, Address: 0x2b298c, Func Offset: 0x2c
	// Line 690, Address: 0x2b2990, Func Offset: 0x30
	// Line 691, Address: 0x2b2994, Func Offset: 0x34
	// Line 694, Address: 0x2b2ab8, Func Offset: 0x158
	// Func End, Address: 0x2b2acc, Func Offset: 0x16c
}

// 
// Start address: 0x2b2ad0
void PlayerSEStopDamageLoop()
{
	// Line 697, Address: 0x2b2ad0, Func Offset: 0
	// Line 698, Address: 0x2b2ae0, Func Offset: 0x10
	// Line 699, Address: 0x2b2ae8, Func Offset: 0x18
	// Line 701, Address: 0x2b2af8, Func Offset: 0x28
	// Line 702, Address: 0x2b2b00, Func Offset: 0x30
	// Line 704, Address: 0x2b2b08, Func Offset: 0x38
	// Line 705, Address: 0x2b2b10, Func Offset: 0x40
	// Line 706, Address: 0x2b2b18, Func Offset: 0x48
	// Line 707, Address: 0x2b2b20, Func Offset: 0x50
	// Line 710, Address: 0x2b2b28, Func Offset: 0x58
	// Func End, Address: 0x2b2b34, Func Offset: 0x64
}

// 
// Start address: 0x2b2b40
void PlayerSEStopDareaLoop()
{
	// Line 712, Address: 0x2b2b40, Func Offset: 0
	// Line 713, Address: 0x2b2b50, Func Offset: 0x10
	// Line 714, Address: 0x2b2b58, Func Offset: 0x18
	// Line 716, Address: 0x2b2b60, Func Offset: 0x20
	// Line 717, Address: 0x2b2b68, Func Offset: 0x28
	// Line 720, Address: 0x2b2b70, Func Offset: 0x30
	// Func End, Address: 0x2b2b7c, Func Offset: 0x3c
}

// 
// Start address: 0x2b2b80
void PlayerSESetDamageArea()
{
	// Line 723, Address: 0x2b2b80, Func Offset: 0
	// Line 724, Address: 0x2b2b84, Func Offset: 0x4
	// Line 723, Address: 0x2b2b88, Func Offset: 0x8
	// Line 724, Address: 0x2b2b90, Func Offset: 0x10
	// Line 725, Address: 0x2b2b9c, Func Offset: 0x1c
	// Line 726, Address: 0x2b2bac, Func Offset: 0x2c
	// Line 727, Address: 0x2b2cc0, Func Offset: 0x140
	// Line 730, Address: 0x2b2cc8, Func Offset: 0x148
	// Line 732, Address: 0x2b2cd0, Func Offset: 0x150
	// Line 733, Address: 0x2b2cdc, Func Offset: 0x15c
	// Line 736, Address: 0x2b2ce0, Func Offset: 0x160
	// Func End, Address: 0x2b2cf0, Func Offset: 0x170
}

// 
// Start address: 0x2b2cf0
void PlayerSESetBattleGeneral(int type, _PLAYER_WORK* p)
{
	// Line 740, Address: 0x2b2cf0, Func Offset: 0
	// Line 741, Address: 0x2b2cf4, Func Offset: 0x4
	// Line 740, Address: 0x2b2cf8, Func Offset: 0x8
	// Line 741, Address: 0x2b2d00, Func Offset: 0x10
	// Line 744, Address: 0x2b2d0c, Func Offset: 0x1c
	// Line 745, Address: 0x2b2d10, Func Offset: 0x20
	// Line 744, Address: 0x2b2d14, Func Offset: 0x24
	// Line 745, Address: 0x2b2d18, Func Offset: 0x28
	// Line 746, Address: 0x2b2d20, Func Offset: 0x30
	// Line 747, Address: 0x2b2d28, Func Offset: 0x38
	// Line 748, Address: 0x2b2d4c, Func Offset: 0x5c
	// Line 749, Address: 0x2b2d50, Func Offset: 0x60
	// Line 750, Address: 0x2b2d54, Func Offset: 0x64
	// Line 751, Address: 0x2b2d5c, Func Offset: 0x6c
	// Line 752, Address: 0x2b2d60, Func Offset: 0x70
	// Line 753, Address: 0x2b2d70, Func Offset: 0x80
	// Line 758, Address: 0x2b2d80, Func Offset: 0x90
	// Line 760, Address: 0x2b2d88, Func Offset: 0x98
	// Line 761, Address: 0x2b2d98, Func Offset: 0xa8
	// Line 762, Address: 0x2b2da4, Func Offset: 0xb4
	// Line 764, Address: 0x2b2db0, Func Offset: 0xc0
	// Line 766, Address: 0x2b2dc0, Func Offset: 0xd0
	// Line 769, Address: 0x2b2dc8, Func Offset: 0xd8
	// Line 770, Address: 0x2b2dd8, Func Offset: 0xe8
	// Line 771, Address: 0x2b2de0, Func Offset: 0xf0
	// Line 772, Address: 0x2b2de8, Func Offset: 0xf8
	// Line 774, Address: 0x2b2df0, Func Offset: 0x100
	// Line 776, Address: 0x2b2df8, Func Offset: 0x108
	// Line 777, Address: 0x2b2e00, Func Offset: 0x110
	// Line 779, Address: 0x2b2e08, Func Offset: 0x118
	// Line 781, Address: 0x2b2e10, Func Offset: 0x120
	// Line 782, Address: 0x2b2e18, Func Offset: 0x128
	// Line 784, Address: 0x2b2e20, Func Offset: 0x130
	// Line 785, Address: 0x2b2e30, Func Offset: 0x140
	// Line 786, Address: 0x2b2e38, Func Offset: 0x148
	// Line 788, Address: 0x2b2e40, Func Offset: 0x150
	// Line 789, Address: 0x2b2e50, Func Offset: 0x160
	// Line 790, Address: 0x2b2e58, Func Offset: 0x168
	// Line 792, Address: 0x2b2e60, Func Offset: 0x170
	// Line 793, Address: 0x2b2e70, Func Offset: 0x180
	// Line 794, Address: 0x2b2e78, Func Offset: 0x188
	// Line 796, Address: 0x2b2e80, Func Offset: 0x190
	// Line 797, Address: 0x2b2e90, Func Offset: 0x1a0
	// Line 798, Address: 0x2b2e98, Func Offset: 0x1a8
	// Line 800, Address: 0x2b2ea0, Func Offset: 0x1b0
	// Line 801, Address: 0x2b2eb0, Func Offset: 0x1c0
	// Line 802, Address: 0x2b2eb8, Func Offset: 0x1c8
	// Line 804, Address: 0x2b2ec0, Func Offset: 0x1d0
	// Line 805, Address: 0x2b2ed0, Func Offset: 0x1e0
	// Line 806, Address: 0x2b2ed8, Func Offset: 0x1e8
	// Line 808, Address: 0x2b2ee0, Func Offset: 0x1f0
	// Line 809, Address: 0x2b2ef0, Func Offset: 0x200
	// Line 810, Address: 0x2b2ef8, Func Offset: 0x208
	// Line 812, Address: 0x2b2f00, Func Offset: 0x210
	// Line 813, Address: 0x2b2f10, Func Offset: 0x220
	// Line 815, Address: 0x2b2f18, Func Offset: 0x228
	// Line 816, Address: 0x2b2f28, Func Offset: 0x238
	// Line 819, Address: 0x2b2f30, Func Offset: 0x240
	// Line 820, Address: 0x2b2f38, Func Offset: 0x248
	// Line 822, Address: 0x2b2f40, Func Offset: 0x250
	// Line 823, Address: 0x2b2f58, Func Offset: 0x268
	// Line 825, Address: 0x2b2f60, Func Offset: 0x270
	// Line 826, Address: 0x2b2f70, Func Offset: 0x280
	// Line 827, Address: 0x2b2f7c, Func Offset: 0x28c
	// Line 828, Address: 0x2b3090, Func Offset: 0x3a0
	// Line 831, Address: 0x2b3098, Func Offset: 0x3a8
	// Line 833, Address: 0x2b30a0, Func Offset: 0x3b0
	// Line 835, Address: 0x2b30a8, Func Offset: 0x3b8
	// Line 837, Address: 0x2b30b0, Func Offset: 0x3c0
	// Line 838, Address: 0x2b30c8, Func Offset: 0x3d8
	// Line 840, Address: 0x2b30d0, Func Offset: 0x3e0
	// Line 841, Address: 0x2b30e0, Func Offset: 0x3f0
	// Line 843, Address: 0x2b30e8, Func Offset: 0x3f8
	// Line 844, Address: 0x2b30f8, Func Offset: 0x408
	// Line 846, Address: 0x2b3100, Func Offset: 0x410
	// Line 847, Address: 0x2b3118, Func Offset: 0x428
	// Line 849, Address: 0x2b3120, Func Offset: 0x430
	// Line 850, Address: 0x2b3130, Func Offset: 0x440
	// Line 851, Address: 0x2b3144, Func Offset: 0x454
	// Line 853, Address: 0x2b3150, Func Offset: 0x460
	// Line 855, Address: 0x2b3160, Func Offset: 0x470
	// Line 857, Address: 0x2b3168, Func Offset: 0x478
	// Line 863, Address: 0x2b3170, Func Offset: 0x480
	// Func End, Address: 0x2b3180, Func Offset: 0x490
}

// 
// Start address: 0x2b3180
void PlayerSEPostBattleGeneral()
{
	// Line 865, Address: 0x2b3180, Func Offset: 0
	// Line 866, Address: 0x2b3184, Func Offset: 0x4
	// Line 865, Address: 0x2b3188, Func Offset: 0x8
	// Line 866, Address: 0x2b318c, Func Offset: 0xc
	// Line 867, Address: 0x2b3198, Func Offset: 0x18
	// Line 868, Address: 0x2b319c, Func Offset: 0x1c
	// Line 869, Address: 0x2b31a0, Func Offset: 0x20
	// Line 871, Address: 0x2b31a4, Func Offset: 0x24
	// Line 872, Address: 0x2b31b4, Func Offset: 0x34
	// Line 871, Address: 0x2b31bc, Func Offset: 0x3c
	// Line 872, Address: 0x2b31c4, Func Offset: 0x44
	// Line 873, Address: 0x2b31d0, Func Offset: 0x50
	// Line 876, Address: 0x2b31d8, Func Offset: 0x58
	// Func End, Address: 0x2b31e4, Func Offset: 0x64
}

// 
// Start address: 0x2b31f0
void set_battle_loop_se(int no)
{
	// Line 881, Address: 0x2b31f0, Func Offset: 0
	// Line 882, Address: 0x2b3204, Func Offset: 0x14
	// Line 883, Address: 0x2b320c, Func Offset: 0x1c
	// Line 886, Address: 0x2b3218, Func Offset: 0x28
	// Line 885, Address: 0x2b3220, Func Offset: 0x30
	// Line 886, Address: 0x2b3224, Func Offset: 0x34
	// Line 889, Address: 0x2b3238, Func Offset: 0x48
	// Func End, Address: 0x2b3248, Func Offset: 0x58
}

// 
// Start address: 0x2b3250
void set_attack_loop_se(int no)
{
	// Line 891, Address: 0x2b3250, Func Offset: 0
	// Line 892, Address: 0x2b3264, Func Offset: 0x14
	// Line 893, Address: 0x2b326c, Func Offset: 0x1c
	// Line 896, Address: 0x2b3278, Func Offset: 0x28
	// Line 895, Address: 0x2b3280, Func Offset: 0x30
	// Line 896, Address: 0x2b3284, Func Offset: 0x34
	// Line 899, Address: 0x2b3298, Func Offset: 0x48
	// Func End, Address: 0x2b32a8, Func Offset: 0x58
}

// 
// Start address: 0x2b32b0
void PlayerSEStopBattleLoop()
{
	// Line 902, Address: 0x2b32b0, Func Offset: 0
	// Line 903, Address: 0x2b32c0, Func Offset: 0x10
	// Line 904, Address: 0x2b32c8, Func Offset: 0x18
	// Line 906, Address: 0x2b32d0, Func Offset: 0x20
	// Line 907, Address: 0x2b32d8, Func Offset: 0x28
	// Line 910, Address: 0x2b32e0, Func Offset: 0x30
	// Func End, Address: 0x2b32ec, Func Offset: 0x3c
}

// 
// Start address: 0x2b32f0
void PlayerSEStopAttackLoop()
{
	// Line 912, Address: 0x2b32f0, Func Offset: 0
	// Line 913, Address: 0x2b3300, Func Offset: 0x10
	// Line 914, Address: 0x2b3308, Func Offset: 0x18
	// Line 916, Address: 0x2b3310, Func Offset: 0x20
	// Line 917, Address: 0x2b3318, Func Offset: 0x28
	// Line 920, Address: 0x2b3320, Func Offset: 0x30
	// Func End, Address: 0x2b332c, Func Offset: 0x3c
}

// 
// Start address: 0x2b3330
int set_ready_se(_PLAYER_WORK* p)
{
	int ret;
	// Line 923, Address: 0x2b3330, Func Offset: 0
	// Line 926, Address: 0x2b3334, Func Offset: 0x4
	// Line 923, Address: 0x2b3338, Func Offset: 0x8
	// Line 926, Address: 0x2b333c, Func Offset: 0xc
	// Line 927, Address: 0x2b336c, Func Offset: 0x3c
	// Line 929, Address: 0x2b3370, Func Offset: 0x40
	// Line 931, Address: 0x2b3378, Func Offset: 0x48
	// Line 933, Address: 0x2b3388, Func Offset: 0x58
	// Line 935, Address: 0x2b3390, Func Offset: 0x60
	// Line 937, Address: 0x2b33a0, Func Offset: 0x70
	// Line 939, Address: 0x2b33a8, Func Offset: 0x78
	// Line 941, Address: 0x2b33b8, Func Offset: 0x88
	// Line 943, Address: 0x2b33c0, Func Offset: 0x90
	// Line 944, Address: 0x2b33c8, Func Offset: 0x98
	// Line 946, Address: 0x2b33cc, Func Offset: 0x9c
	// Line 949, Address: 0x2b33d0, Func Offset: 0xa0
	// Func End, Address: 0x2b33dc, Func Offset: 0xac
}

// 
// Start address: 0x2b33e0
void se_call_swing(_PLAYER_WORK* p, int feed)
{
	int r;
	// Line 952, Address: 0x2b33e0, Func Offset: 0
	// Line 953, Address: 0x2b33e4, Func Offset: 0x4
	// Line 952, Address: 0x2b33e8, Func Offset: 0x8
	// Line 953, Address: 0x2b33f0, Func Offset: 0x10
	// Line 954, Address: 0x2b33fc, Func Offset: 0x1c
	// Line 955, Address: 0x2b340c, Func Offset: 0x2c
	// Line 958, Address: 0x2b3418, Func Offset: 0x38
	// Line 959, Address: 0x2b3430, Func Offset: 0x50
	// Line 960, Address: 0x2b3438, Func Offset: 0x58
	// Line 961, Address: 0x2b3458, Func Offset: 0x78
	// Line 962, Address: 0x2b3464, Func Offset: 0x84
	// Line 966, Address: 0x2b3478, Func Offset: 0x98
	// Func End, Address: 0x2b3488, Func Offset: 0xa8
}

// 
// Start address: 0x2b3490
void set_attack_se(_PLAYER_WORK* p)
{
	GameItem item;
	// Line 969, Address: 0x2b3490, Func Offset: 0
	// Line 974, Address: 0x2b3494, Func Offset: 0x4
	// Line 969, Address: 0x2b3498, Func Offset: 0x8
	// Line 973, Address: 0x2b34a4, Func Offset: 0x14
	// Line 974, Address: 0x2b34a8, Func Offset: 0x18
	// Line 975, Address: 0x2b34b0, Func Offset: 0x20
	// Line 976, Address: 0x2b34c4, Func Offset: 0x34
	// Line 977, Address: 0x2b34d0, Func Offset: 0x40
	// Line 979, Address: 0x2b34d8, Func Offset: 0x48
	// Line 981, Address: 0x2b34e8, Func Offset: 0x58
	// Line 982, Address: 0x2b34f0, Func Offset: 0x60
	// Line 983, Address: 0x2b34f8, Func Offset: 0x68
	// Line 984, Address: 0x2b3504, Func Offset: 0x74
	// Line 985, Address: 0x2b3514, Func Offset: 0x84
	// Line 986, Address: 0x2b351c, Func Offset: 0x8c
	// Line 987, Address: 0x2b3528, Func Offset: 0x98
	// Line 989, Address: 0x2b3548, Func Offset: 0xb8
	// Line 990, Address: 0x2b3558, Func Offset: 0xc8
	// Line 991, Address: 0x2b3564, Func Offset: 0xd4
	// Line 992, Address: 0x2b356c, Func Offset: 0xdc
	// Line 994, Address: 0x2b3578, Func Offset: 0xe8
	// Line 995, Address: 0x2b3584, Func Offset: 0xf4
	// Line 996, Address: 0x2b3588, Func Offset: 0xf8
	// Line 997, Address: 0x2b35b8, Func Offset: 0x128
	// Line 998, Address: 0x2b35c0, Func Offset: 0x130
	// Line 1001, Address: 0x2b35e8, Func Offset: 0x158
	// Line 1002, Address: 0x2b35f8, Func Offset: 0x168
	// Line 1003, Address: 0x2b3604, Func Offset: 0x174
	// Line 1004, Address: 0x2b3630, Func Offset: 0x1a0
	// Line 1005, Address: 0x2b3638, Func Offset: 0x1a8
	// Line 1007, Address: 0x2b3668, Func Offset: 0x1d8
	// Line 1008, Address: 0x2b3678, Func Offset: 0x1e8
	// Line 1009, Address: 0x2b3690, Func Offset: 0x200
	// Line 1010, Address: 0x2b369c, Func Offset: 0x20c
	// Line 1012, Address: 0x2b36a8, Func Offset: 0x218
	// Line 1013, Address: 0x2b36b4, Func Offset: 0x224
	// Line 1014, Address: 0x2b36b8, Func Offset: 0x228
	// Line 1015, Address: 0x2b36e8, Func Offset: 0x258
	// Line 1016, Address: 0x2b36f0, Func Offset: 0x260
	// Line 1017, Address: 0x2b36fc, Func Offset: 0x26c
	// Line 1018, Address: 0x2b370c, Func Offset: 0x27c
	// Line 1019, Address: 0x2b3738, Func Offset: 0x2a8
	// Line 1020, Address: 0x2b3740, Func Offset: 0x2b0
	// Line 1021, Address: 0x2b374c, Func Offset: 0x2bc
	// Line 1022, Address: 0x2b3754, Func Offset: 0x2c4
	// Line 1023, Address: 0x2b3760, Func Offset: 0x2d0
	// Line 1024, Address: 0x2b376c, Func Offset: 0x2dc
	// Line 1033, Address: 0x2b3774, Func Offset: 0x2e4
	// Line 1036, Address: 0x2b3778, Func Offset: 0x2e8
	// Func End, Address: 0x2b378c, Func Offset: 0x2fc
}

// 
// Start address: 0x2b3790
void PlayerSESetWeapon(int type, _PLAYER_WORK* p)
{
	// Line 1038, Address: 0x2b3790, Func Offset: 0
	// Line 1039, Address: 0x2b3794, Func Offset: 0x4
	// Line 1038, Address: 0x2b3798, Func Offset: 0x8
	// Line 1039, Address: 0x2b379c, Func Offset: 0xc
	// Line 1040, Address: 0x2b37a4, Func Offset: 0x14
	// Line 1041, Address: 0x2b37b4, Func Offset: 0x24
	// Line 1042, Address: 0x2b37b8, Func Offset: 0x28
	// Line 1043, Address: 0x2b37dc, Func Offset: 0x4c
	// Line 1044, Address: 0x2b37e0, Func Offset: 0x50
	// Line 1045, Address: 0x2b37e4, Func Offset: 0x54
	// Line 1046, Address: 0x2b37ec, Func Offset: 0x5c
	// Line 1048, Address: 0x2b37f0, Func Offset: 0x60
	// Line 1051, Address: 0x2b3800, Func Offset: 0x70
	// Line 1054, Address: 0x2b3808, Func Offset: 0x78
	// Line 1055, Address: 0x2b3810, Func Offset: 0x80
	// Line 1058, Address: 0x2b3818, Func Offset: 0x88
	// Line 1059, Address: 0x2b3820, Func Offset: 0x90
	// Line 1062, Address: 0x2b3828, Func Offset: 0x98
	// Line 1064, Address: 0x2b3840, Func Offset: 0xb0
	// Line 1065, Address: 0x2b3848, Func Offset: 0xb8
	// Line 1066, Address: 0x2b3858, Func Offset: 0xc8
	// Line 1069, Address: 0x2b3860, Func Offset: 0xd0
	// Line 1072, Address: 0x2b3868, Func Offset: 0xd8
	// Line 1075, Address: 0x2b3870, Func Offset: 0xe0
	// Line 1076, Address: 0x2b3878, Func Offset: 0xe8
	// Line 1082, Address: 0x2b3880, Func Offset: 0xf0
	// Func End, Address: 0x2b388c, Func Offset: 0xfc
}

// 
// Start address: 0x2b3890
void PlayerSECheckChainsawVib()
{
	// Line 1084, Address: 0x2b3890, Func Offset: 0
	// Line 1085, Address: 0x2b3894, Func Offset: 0x4
	// Line 1084, Address: 0x2b3898, Func Offset: 0x8
	// Line 1085, Address: 0x2b389c, Func Offset: 0xc
	// Line 1086, Address: 0x2b38a8, Func Offset: 0x18
	// Line 1087, Address: 0x2b38b0, Func Offset: 0x20
	// Line 1088, Address: 0x2b38b8, Func Offset: 0x28
	// Line 1089, Address: 0x2b38c8, Func Offset: 0x38
	// Line 1093, Address: 0x2b38d0, Func Offset: 0x40
	// Func End, Address: 0x2b38dc, Func Offset: 0x4c
}

// 
// Start address: 0x2b38e0
void PlayerSECheckWeapon(_PLAYER_WORK* p)
{
	// Line 1095, Address: 0x2b38e0, Func Offset: 0
	// Line 1096, Address: 0x2b38f0, Func Offset: 0x10
	// Line 1097, Address: 0x2b38f8, Func Offset: 0x18
	// Line 1098, Address: 0x2b3900, Func Offset: 0x20
	// Line 1099, Address: 0x2b3908, Func Offset: 0x28
	// Line 1100, Address: 0x2b3910, Func Offset: 0x30
	// Line 1101, Address: 0x2b3928, Func Offset: 0x48
	// Line 1103, Address: 0x2b3930, Func Offset: 0x50
	// Line 1104, Address: 0x2b3940, Func Offset: 0x60
	// Line 1105, Address: 0x2b3944, Func Offset: 0x64
	// Line 1106, Address: 0x2b3948, Func Offset: 0x68
	// Line 1109, Address: 0x2b3950, Func Offset: 0x70
	// Line 1110, Address: 0x2b3960, Func Offset: 0x80
	// Line 1114, Address: 0x2b3968, Func Offset: 0x88
	// Func End, Address: 0x2b3978, Func Offset: 0x98
}

// 
// Start address: 0x2b3980
void PlayerSESetWall(sfMaphitMaterialType mtr, _PLAYER_WORK* p)
{
	int* seno;
	int se_id;
	// Line 1117, Address: 0x2b3980, Func Offset: 0
	// Line 1120, Address: 0x2b3984, Func Offset: 0x4
	// Line 1117, Address: 0x2b3988, Func Offset: 0x8
	// Line 1120, Address: 0x2b398c, Func Offset: 0xc
	// Line 1123, Address: 0x2b399c, Func Offset: 0x1c
	// Line 1124, Address: 0x2b39a8, Func Offset: 0x28
	// Line 1125, Address: 0x2b39ac, Func Offset: 0x2c
	// Line 1126, Address: 0x2b39b8, Func Offset: 0x38
	// Line 1127, Address: 0x2b39c4, Func Offset: 0x44
	// Line 1128, Address: 0x2b39c8, Func Offset: 0x48
	// Line 1130, Address: 0x2b39d0, Func Offset: 0x50
	// Line 1135, Address: 0x2b39d8, Func Offset: 0x58
	// Line 1136, Address: 0x2b39e8, Func Offset: 0x68
	// Line 1137, Address: 0x2b39f0, Func Offset: 0x70
	// Line 1138, Address: 0x2b3a00, Func Offset: 0x80
	// Line 1139, Address: 0x2b3a0c, Func Offset: 0x8c
	// Line 1144, Address: 0x2b3a10, Func Offset: 0x90
	// Func End, Address: 0x2b3a1c, Func Offset: 0x9c
}

// 
// Start address: 0x2b3a20
void PlayerSEResetWall()
{
	// Line 1147, Address: 0x2b3a20, Func Offset: 0
	// Line 1150, Address: 0x2b3a24, Func Offset: 0x4
	// Func End, Address: 0x2b3a2c, Func Offset: 0xc
}

// 
// Start address: 0x2b3a30
void PlayerSoundSetPage()
{
	_PLAYER_WORK* p;
	// Line 1154, Address: 0x2b3a30, Func Offset: 0
	// Line 1157, Address: 0x2b3a34, Func Offset: 0x4
	// Line 1154, Address: 0x2b3a38, Func Offset: 0x8
	// Line 1157, Address: 0x2b3a40, Func Offset: 0x10
	// Line 1155, Address: 0x2b3a44, Func Offset: 0x14
	// Line 1157, Address: 0x2b3a48, Func Offset: 0x18
	// Line 1158, Address: 0x2b3a50, Func Offset: 0x20
	// Line 1161, Address: 0x2b3a60, Func Offset: 0x30
	// Line 1163, Address: 0x2b3a68, Func Offset: 0x38
	// Line 1164, Address: 0x2b3a78, Func Offset: 0x48
	// Line 1166, Address: 0x2b3a7c, Func Offset: 0x4c
	// Line 1169, Address: 0x2b3a80, Func Offset: 0x50
	// Func End, Address: 0x2b3a90, Func Offset: 0x60
}

