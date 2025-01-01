typedef struct sfCharacter;
typedef struct sfObj;
typedef struct _anon0;
typedef struct sgAnime;
typedef struct _anon1;
typedef struct sfCldObject;
typedef struct _GAME_WORK;
typedef struct sgQTNode;
typedef struct _anon2;
typedef struct sfCldPart;
typedef struct _anon3;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sgQTObject;
typedef struct sgIKHandle;
typedef struct sgBone;
typedef struct _anon4;
typedef union _anon5;
typedef struct sfOffsetAABB;
typedef struct _anon6;
typedef enum GameItem : unsigned char;
typedef union sfCldBody;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _PLAYER_WORK;
typedef struct _anon9;
typedef struct sgSVModel;

typedef void(*type_1)();
typedef void(*type_4)();
typedef void(*type_6)();
typedef void(*type_10)(_anon0*, int, int, float*);
typedef void(*type_17)();
typedef sgIKSolveResult(*type_23)();
typedef void(*type_24)(sfObj*);
typedef void(*type_26)();
typedef void(*type_34)();
typedef void(*type_35)(sfObj*);
typedef void(*type_41)();
typedef void(*type_42)();
typedef void(*type_43)(sgAnime*, int);

typedef unsigned char type_0[4];
typedef unsigned int type_2[10];
typedef void(*type_3)()[3];
typedef void(*type_5)()[14];
typedef void(*type_7)()[4];
typedef float type_8[4][4];
typedef float type_9[4];
typedef sfCldPart* type_11[6];
typedef unsigned char type_12[3];
typedef int type_13[1];
typedef int type_14[1];
typedef _PLAYER_WORK type_15[2];
typedef int type_16[1];
typedef void(*type_18)()[16];
typedef float type_19[4][2];
typedef int type_20[1];
typedef _anon5 type_21[256];
typedef float type_22[4];
typedef float type_25[4];
typedef void(*type_27)()[4];
typedef int type_28[1];
typedef int type_29[1];
typedef short type_30[2];
typedef unsigned char type_31[3];
typedef unsigned short type_32[2];
typedef char type_33[4];
typedef unsigned char type_36[4];
typedef int type_37[1];
typedef float type_38[1];
typedef int type_39[1];
typedef void* type_40[4];
typedef unsigned int type_44[10];

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon1 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

struct sfObj
{
	_anon5 fwork[256];
	_anon5* work;
	void(*func)(sfObj*);
	_anon5* work_pt0;
	_anon5* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon5* sys_work;
	_anon5* scene_work;
	_anon5* event_work;
	_anon5* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct _anon0
{
	unsigned long tex0;
	unsigned long clamp;
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

struct _anon1
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

struct sfCldObject
{
	sgQTObject tree_object;
	sgQTNode* stay_node;
	sfCldPart* parts[6];
	unsigned char n_parts;
	unsigned char pad[3];
	void* data;
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

struct sgQTNode
{
	int dummy;
};

struct _anon2
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

struct _anon3
{
	int b1_rot_n;
	int f1_rot_n;
	int f2_rot_n;
	int f3_rot_n;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct sgQTObject
{
	_anon6 bounding_ball;
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

struct _anon4
{
	float start[4];
	float end[4];
};

union _anon5
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

struct sfOffsetAABB
{
	_anon8 aabb;
	float offset[4];
};

struct _anon6
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

union sfCldBody
{
	_anon9 obb;
	_anon8 aabb;
	sfOffsetAABB offset_aabb;
	_anon4 line;
	_anon6 sphere;
};

struct _anon7
{
	float view_world[4][4];
	float view_angle;
	float focus_depth;
	float focus_range;
	float focus_intensity;
	short focus_type;
	short focus_level;
};

struct _anon8
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
	_anon2* anim_ctrl;
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

struct _anon9
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

_anon3 water_stage_rot_info;
void(*game_func)()[4];
unsigned char konami_cmd_step;
_GAME_WORK gamew;
float sg_vector_unit_w[4];
float sg_matrix_unit[4][4];
_PLAYER_WORK playerw[2];
void(*game_play_flow)()[16];
void(*game_demo_flow)()[14];
void(*game_pause_flow)()[4];
void(*game_flow)()[3];

void GameClearMzStageRotInfo();
_anon3* GameGetMzStageRotInfo();
void GameSaveMzRotInfo(void* dst);
void GameLoadMzRotInfo(void* src);
void konami_command_init();
int konami_command_check(int type);
void GameWorkInitCold();
void GameWorkInitWarm();
void GameWorkInitGame();
void GameWorkInitStage();
void GameWorkInitScene();
void GameWorkInitLoop();
void GameExecPreObjExec();
void GameExecPostObjExec();
void GameExecPreObjRender();
void GameDemoPreObjRender();
void GameExecPostObjRender();
void GameExecPreShadowRender();
void GameDemoPreShadowRender();
void GameExecPostShadowRender();
void GameDemoPostShadowRender();
void GameCameraExecute();
void GameDemoCameraExecute();
void GameStageExecute();
void GamePlayObjsExecute();
void GameDemoObjsExecute();
void GamePauseObjsExecute();
void GamePlayObjsRender();
void GameDemoObjsRender();
void GameExecPost3DRender();
void GameDemoPost3DRender();
void GameStart();
void GamePlay();
void GameOver();
void GameSetModePlay();
void GameSetModeDemo();
void GameSetModePause();
void GameMain();
void GameExecPostdrawOt();

// 
// Start address: 0x15d0c0
void GameClearMzStageRotInfo()
{
	// Line 122, Address: 0x15d0c0, Func Offset: 0
	// Func End, Address: 0x15d0d4, Func Offset: 0x14
}

// 
// Start address: 0x15d0e0
_anon3* GameGetMzStageRotInfo()
{
	// Line 124, Address: 0x15d0e0, Func Offset: 0
	// Func End, Address: 0x15d0ec, Func Offset: 0xc
}

// 
// Start address: 0x15d0f0
void GameSaveMzRotInfo(void* dst)
{
	// Line 129, Address: 0x15d0f0, Func Offset: 0
	// Func End, Address: 0x15d100, Func Offset: 0x10
}

// 
// Start address: 0x15d100
void GameLoadMzRotInfo(void* src)
{
	// Line 135, Address: 0x15d104, Func Offset: 0x4
	// Func End, Address: 0x15d114, Func Offset: 0x14
}

// 
// Start address: 0x15d120
void konami_command_init()
{
	// Line 169, Address: 0x15d120, Func Offset: 0
	// Line 170, Address: 0x15d124, Func Offset: 0x4
	// Func End, Address: 0x15d12c, Func Offset: 0xc
}

// 
// Start address: 0x15d130
int konami_command_check(int type)
{
	unsigned int trg;
	unsigned int* cmd;
	unsigned int cmd1[10];
	unsigned int cmd0[10];
	// Line 178, Address: 0x15d130, Func Offset: 0
	// Line 206, Address: 0x15d140, Func Offset: 0x10
	// Line 210, Address: 0x15d148, Func Offset: 0x18
	// Line 217, Address: 0x15d158, Func Offset: 0x28
	// Line 220, Address: 0x15d178, Func Offset: 0x48
	// Line 221, Address: 0x15d190, Func Offset: 0x60
	// Line 224, Address: 0x15d198, Func Offset: 0x68
	// Line 225, Address: 0x15d1b0, Func Offset: 0x80
	// Line 226, Address: 0x15d1bc, Func Offset: 0x8c
	// Line 227, Address: 0x15d1c4, Func Offset: 0x94
	// Line 229, Address: 0x15d1d0, Func Offset: 0xa0
	// Line 241, Address: 0x15d1d8, Func Offset: 0xa8
	// Line 242, Address: 0x15d1e0, Func Offset: 0xb0
	// Line 241, Address: 0x15d1e8, Func Offset: 0xb8
	// Line 242, Address: 0x15d1f0, Func Offset: 0xc0
	// Func End, Address: 0x15d1f8, Func Offset: 0xc8
}

// 
// Start address: 0x15d200
void GameWorkInitCold()
{
	// Line 254, Address: 0x15d200, Func Offset: 0
	// Func End, Address: 0x15d210, Func Offset: 0x10
}

// 
// Start address: 0x15d210
void GameWorkInitWarm()
{
	_GAME_WORK* w;
	// Line 260, Address: 0x15d210, Func Offset: 0
	// Line 263, Address: 0x15d214, Func Offset: 0x4
	// Line 260, Address: 0x15d218, Func Offset: 0x8
	// Line 263, Address: 0x15d220, Func Offset: 0x10
	// Line 261, Address: 0x15d224, Func Offset: 0x14
	// Line 263, Address: 0x15d228, Func Offset: 0x18
	// Line 264, Address: 0x15d230, Func Offset: 0x20
	// Line 266, Address: 0x15d238, Func Offset: 0x28
	// Line 270, Address: 0x15d244, Func Offset: 0x34
	// Line 271, Address: 0x15d248, Func Offset: 0x38
	// Line 275, Address: 0x15d258, Func Offset: 0x48
	// Func End, Address: 0x15d268, Func Offset: 0x58
}

// 
// Start address: 0x15d270
void GameWorkInitGame()
{
	_GAME_WORK* w;
	// Line 280, Address: 0x15d270, Func Offset: 0
	// Line 281, Address: 0x15d27c, Func Offset: 0xc
	// Line 283, Address: 0x15d284, Func Offset: 0x14
	// Line 284, Address: 0x15d290, Func Offset: 0x20
	// Line 286, Address: 0x15d298, Func Offset: 0x28
	// Line 288, Address: 0x15d2c0, Func Offset: 0x50
	// Line 290, Address: 0x15d2cc, Func Offset: 0x5c
	// Line 291, Address: 0x15d2f8, Func Offset: 0x88
	// Line 292, Address: 0x15d324, Func Offset: 0xb4
	// Line 293, Address: 0x15d32c, Func Offset: 0xbc
	// Line 292, Address: 0x15d330, Func Offset: 0xc0
	// Line 293, Address: 0x15d334, Func Offset: 0xc4
	// Line 292, Address: 0x15d33c, Func Offset: 0xcc
	// Line 293, Address: 0x15d340, Func Offset: 0xd0
	// Line 297, Address: 0x15d348, Func Offset: 0xd8
	// Line 298, Address: 0x15d354, Func Offset: 0xe4
	// Line 294, Address: 0x15d360, Func Offset: 0xf0
	// Line 295, Address: 0x15d368, Func Offset: 0xf8
	// Line 299, Address: 0x15d370, Func Offset: 0x100
	// Line 300, Address: 0x15d378, Func Offset: 0x108
	// Func End, Address: 0x15d388, Func Offset: 0x118
}

// 
// Start address: 0x15d390
void GameWorkInitStage()
{
	_GAME_WORK* w;
	// Line 305, Address: 0x15d390, Func Offset: 0
	// Line 308, Address: 0x15d394, Func Offset: 0x4
	// Line 305, Address: 0x15d398, Func Offset: 0x8
	// Line 308, Address: 0x15d3a0, Func Offset: 0x10
	// Line 306, Address: 0x15d3a4, Func Offset: 0x14
	// Line 308, Address: 0x15d3a8, Func Offset: 0x18
	// Line 309, Address: 0x15d3b0, Func Offset: 0x20
	// Line 310, Address: 0x15d3c0, Func Offset: 0x30
	// Line 312, Address: 0x15d3d0, Func Offset: 0x40
	// Line 315, Address: 0x15d3d8, Func Offset: 0x48
	// Line 316, Address: 0x15d3e4, Func Offset: 0x54
	// Line 317, Address: 0x15d3f0, Func Offset: 0x60
	// Func End, Address: 0x15d400, Func Offset: 0x70
}

// 
// Start address: 0x15d400
void GameWorkInitScene()
{
	_GAME_WORK* w;
	// Line 322, Address: 0x15d400, Func Offset: 0
	// Line 325, Address: 0x15d404, Func Offset: 0x4
	// Line 322, Address: 0x15d408, Func Offset: 0x8
	// Line 325, Address: 0x15d410, Func Offset: 0x10
	// Line 323, Address: 0x15d414, Func Offset: 0x14
	// Line 325, Address: 0x15d418, Func Offset: 0x18
	// Line 327, Address: 0x15d430, Func Offset: 0x30
	// Line 330, Address: 0x15d438, Func Offset: 0x38
	// Line 331, Address: 0x15d444, Func Offset: 0x44
	// Line 332, Address: 0x15d450, Func Offset: 0x50
	// Line 333, Address: 0x15d458, Func Offset: 0x58
	// Func End, Address: 0x15d468, Func Offset: 0x68
}

// 
// Start address: 0x15d470
void GameWorkInitLoop()
{
	// Line 340, Address: 0x15d470, Func Offset: 0
	// Func End, Address: 0x15d480, Func Offset: 0x10
}

// 
// Start address: 0x15d480
void GameExecPreObjExec()
{
	// Line 354, Address: 0x15d480, Func Offset: 0
	// Line 355, Address: 0x15d488, Func Offset: 0x8
	// Line 356, Address: 0x15d490, Func Offset: 0x10
	// Line 358, Address: 0x15d498, Func Offset: 0x18
	// Line 359, Address: 0x15d4a0, Func Offset: 0x20
	// Func End, Address: 0x15d4ac, Func Offset: 0x2c
}

// 
// Start address: 0x15d4b0
void GameExecPostObjExec()
{
	// Line 364, Address: 0x15d4b0, Func Offset: 0
	// Line 365, Address: 0x15d4b8, Func Offset: 0x8
	// Line 366, Address: 0x15d4c0, Func Offset: 0x10
	// Line 369, Address: 0x15d4c8, Func Offset: 0x18
	// Line 370, Address: 0x15d4d0, Func Offset: 0x20
	// Func End, Address: 0x15d4dc, Func Offset: 0x2c
}

// 
// Start address: 0x15d4e0
void GameExecPreObjRender()
{
	// Line 378, Address: 0x15d4e0, Func Offset: 0
	// Line 380, Address: 0x15d4e8, Func Offset: 0x8
	// Line 381, Address: 0x15d4f0, Func Offset: 0x10
	// Line 383, Address: 0x15d4f8, Func Offset: 0x18
	// Line 384, Address: 0x15d500, Func Offset: 0x20
	// Line 385, Address: 0x15d508, Func Offset: 0x28
	// Line 386, Address: 0x15d510, Func Offset: 0x30
	// Line 387, Address: 0x15d518, Func Offset: 0x38
	// Func End, Address: 0x15d524, Func Offset: 0x44
}

// 
// Start address: 0x15d530
void GameDemoPreObjRender()
{
	// Line 392, Address: 0x15d530, Func Offset: 0
	// Line 394, Address: 0x15d538, Func Offset: 0x8
	// Line 395, Address: 0x15d540, Func Offset: 0x10
	// Line 398, Address: 0x15d548, Func Offset: 0x18
	// Line 399, Address: 0x15d550, Func Offset: 0x20
	// Line 400, Address: 0x15d558, Func Offset: 0x28
	// Line 401, Address: 0x15d560, Func Offset: 0x30
	// Line 402, Address: 0x15d568, Func Offset: 0x38
	// Func End, Address: 0x15d574, Func Offset: 0x44
}

// 
// Start address: 0x15d580
void GameExecPostObjRender()
{
	// Line 407, Address: 0x15d580, Func Offset: 0
	// Line 408, Address: 0x15d588, Func Offset: 0x8
	// Line 409, Address: 0x15d590, Func Offset: 0x10
	// Line 410, Address: 0x15d598, Func Offset: 0x18
	// Line 424, Address: 0x15d5a0, Func Offset: 0x20
	// Func End, Address: 0x15d5ac, Func Offset: 0x2c
}

// 
// Start address: 0x15d5b0
void GameExecPreShadowRender()
{
	unsigned char val;
	// Line 428, Address: 0x15d5b0, Func Offset: 0
	// Line 431, Address: 0x15d5b8, Func Offset: 0x8
	// Line 437, Address: 0x15d5c8, Func Offset: 0x18
	// Line 439, Address: 0x15d5e4, Func Offset: 0x34
	// Line 440, Address: 0x15d5f0, Func Offset: 0x40
	// Line 441, Address: 0x15d5f4, Func Offset: 0x44
	// Line 442, Address: 0x15d5f8, Func Offset: 0x48
	// Line 450, Address: 0x15d600, Func Offset: 0x50
	// Line 451, Address: 0x15d608, Func Offset: 0x58
	// Func End, Address: 0x15d614, Func Offset: 0x64
}

// 
// Start address: 0x15d620
void GameDemoPreShadowRender()
{
	// Line 456, Address: 0x15d620, Func Offset: 0
	// Line 455, Address: 0x15d624, Func Offset: 0x4
	// Line 456, Address: 0x15d628, Func Offset: 0x8
	// Line 455, Address: 0x15d62c, Func Offset: 0xc
	// Line 456, Address: 0x15d630, Func Offset: 0x10
	// Line 457, Address: 0x15d638, Func Offset: 0x18
	// Line 458, Address: 0x15d648, Func Offset: 0x28
	// Line 459, Address: 0x15d650, Func Offset: 0x30
	// Func End, Address: 0x15d65c, Func Offset: 0x3c
}

// 
// Start address: 0x15d660
void GameExecPostShadowRender()
{
	// Line 463, Address: 0x15d660, Func Offset: 0
	// Line 464, Address: 0x15d668, Func Offset: 0x8
	// Line 467, Address: 0x15d670, Func Offset: 0x10
	// Line 468, Address: 0x15d678, Func Offset: 0x18
	// Func End, Address: 0x15d684, Func Offset: 0x24
}

// 
// Start address: 0x15d690
void GameDemoPostShadowRender()
{
	// Line 473, Address: 0x15d690, Func Offset: 0
	// Line 472, Address: 0x15d694, Func Offset: 0x4
	// Line 473, Address: 0x15d698, Func Offset: 0x8
	// Line 472, Address: 0x15d69c, Func Offset: 0xc
	// Line 473, Address: 0x15d6a0, Func Offset: 0x10
	// Line 476, Address: 0x15d6ac, Func Offset: 0x1c
	// Line 477, Address: 0x15d6b4, Func Offset: 0x24
	// Func End, Address: 0x15d6c0, Func Offset: 0x30
}

// 
// Start address: 0x15d6c0
void GameCameraExecute()
{
	// Line 482, Address: 0x15d6c0, Func Offset: 0
	// Line 483, Address: 0x15d6c4, Func Offset: 0x4
	// Line 482, Address: 0x15d6cc, Func Offset: 0xc
	// Line 483, Address: 0x15d6d0, Func Offset: 0x10
	// Line 484, Address: 0x15d6f8, Func Offset: 0x38
	// Line 485, Address: 0x15d704, Func Offset: 0x44
	// Line 486, Address: 0x15d710, Func Offset: 0x50
	// Line 487, Address: 0x15d718, Func Offset: 0x58
	// Func End, Address: 0x15d724, Func Offset: 0x64
}

// 
// Start address: 0x15d730
void GameDemoCameraExecute()
{
	_anon7 demo_camera;
	// Line 492, Address: 0x15d730, Func Offset: 0
	// Line 494, Address: 0x15d738, Func Offset: 0x8
	// Line 495, Address: 0x15d740, Func Offset: 0x10
	// Line 496, Address: 0x15d768, Func Offset: 0x38
	// Line 497, Address: 0x15d778, Func Offset: 0x48
	// Line 499, Address: 0x15d798, Func Offset: 0x68
	// Line 500, Address: 0x15d7b0, Func Offset: 0x80
	// Line 505, Address: 0x15d7b8, Func Offset: 0x88
	// Line 506, Address: 0x15d7e8, Func Offset: 0xb8
	// Line 507, Address: 0x15d7f4, Func Offset: 0xc4
	// Line 508, Address: 0x15d7fc, Func Offset: 0xcc
	// Func End, Address: 0x15d808, Func Offset: 0xd8
}

// 
// Start address: 0x15d810
void GameStageExecute()
{
	// Line 513, Address: 0x15d810, Func Offset: 0
	// Line 515, Address: 0x15d818, Func Offset: 0x8
	// Line 517, Address: 0x15d820, Func Offset: 0x10
	// Line 518, Address: 0x15d828, Func Offset: 0x18
	// Line 538, Address: 0x15d830, Func Offset: 0x20
	// Func End, Address: 0x15d83c, Func Offset: 0x2c
}

// 
// Start address: 0x15d840
void GamePlayObjsExecute()
{
	// Line 543, Address: 0x15d840, Func Offset: 0
	// Line 544, Address: 0x15d848, Func Offset: 0x8
	// Line 545, Address: 0x15d850, Func Offset: 0x10
	// Line 546, Address: 0x15d858, Func Offset: 0x18
	// Line 547, Address: 0x15d860, Func Offset: 0x20
	// Line 548, Address: 0x15d868, Func Offset: 0x28
	// Line 550, Address: 0x15d870, Func Offset: 0x30
	// Line 551, Address: 0x15d878, Func Offset: 0x38
	// Line 552, Address: 0x15d884, Func Offset: 0x44
	// Func End, Address: 0x15d890, Func Offset: 0x50
}

// 
// Start address: 0x15d890
void GameDemoObjsExecute()
{
	// Line 557, Address: 0x15d890, Func Offset: 0
	// Line 559, Address: 0x15d898, Func Offset: 0x8
	// Line 560, Address: 0x15d8a0, Func Offset: 0x10
	// Line 563, Address: 0x15d8a8, Func Offset: 0x18
	// Line 564, Address: 0x15d8bc, Func Offset: 0x2c
	// Line 565, Address: 0x15d8c4, Func Offset: 0x34
	// Line 567, Address: 0x15d8c8, Func Offset: 0x38
	// Func End, Address: 0x15d8d4, Func Offset: 0x44
}

// 
// Start address: 0x15d8e0
void GamePauseObjsExecute()
{
	// Line 573, Address: 0x15d8e0, Func Offset: 0
	// Func End, Address: 0x15d8e8, Func Offset: 0x8
}

// 
// Start address: 0x15d8f0
void GamePlayObjsRender()
{
	// Line 579, Address: 0x15d8f0, Func Offset: 0
	// Line 580, Address: 0x15d8f8, Func Offset: 0x8
	// Line 581, Address: 0x15d900, Func Offset: 0x10
	// Line 582, Address: 0x15d908, Func Offset: 0x18
	// Func End, Address: 0x15d914, Func Offset: 0x24
}

// 
// Start address: 0x15d920
void GameDemoObjsRender()
{
	// Line 587, Address: 0x15d920, Func Offset: 0
	// Line 588, Address: 0x15d928, Func Offset: 0x8
	// Line 589, Address: 0x15d930, Func Offset: 0x10
	// Line 590, Address: 0x15d938, Func Offset: 0x18
	// Line 591, Address: 0x15d940, Func Offset: 0x20
	// Line 593, Address: 0x15d948, Func Offset: 0x28
	// Line 594, Address: 0x15d950, Func Offset: 0x30
	// Func End, Address: 0x15d95c, Func Offset: 0x3c
}

// 
// Start address: 0x15d960
void GameExecPost3DRender()
{
	// Line 600, Address: 0x15d960, Func Offset: 0
	// Func End, Address: 0x15d968, Func Offset: 0x8
}

// 
// Start address: 0x15d970
void GameDemoPost3DRender()
{
	// Line 607, Address: 0x15d970, Func Offset: 0
	// Func End, Address: 0x15d978, Func Offset: 0x8
}

// 
// Start address: 0x15d980
void GameStart()
{
	// Line 702, Address: 0x15d980, Func Offset: 0
	// Line 703, Address: 0x15d988, Func Offset: 0x8
	// Line 710, Address: 0x15d990, Func Offset: 0x10
	// Line 711, Address: 0x15d998, Func Offset: 0x18
	// Line 713, Address: 0x15d9a0, Func Offset: 0x20
	// Func End, Address: 0x15d9ac, Func Offset: 0x2c
}

// 
// Start address: 0x15d9b0
void GamePlay()
{
	void(*func_table)();
	void(*func)();
	// Line 724, Address: 0x15d9b0, Func Offset: 0
	// Line 731, Address: 0x15d9b8, Func Offset: 0x8
	// Line 732, Address: 0x15d9c0, Func Offset: 0x10
	// Line 735, Address: 0x15d9c8, Func Offset: 0x18
	// Line 737, Address: 0x15d9d0, Func Offset: 0x20
	// Line 739, Address: 0x15d9ec, Func Offset: 0x3c
	// Line 740, Address: 0x15d9f0, Func Offset: 0x40
	// Line 741, Address: 0x15d9f4, Func Offset: 0x44
	// Line 743, Address: 0x15d9fc, Func Offset: 0x4c
	// Line 744, Address: 0x15da04, Func Offset: 0x54
	// Line 746, Address: 0x15da10, Func Offset: 0x60
	// Line 747, Address: 0x15da20, Func Offset: 0x70
	// Line 752, Address: 0x15da30, Func Offset: 0x80
	// Line 753, Address: 0x15da40, Func Offset: 0x90
	// Line 756, Address: 0x15da48, Func Offset: 0x98
	// Line 759, Address: 0x15da58, Func Offset: 0xa8
	// Line 761, Address: 0x15da68, Func Offset: 0xb8
	// Line 765, Address: 0x15da70, Func Offset: 0xc0
	// Func End, Address: 0x15da80, Func Offset: 0xd0
}

// 
// Start address: 0x15da80
void GameOver()
{
	// Line 771, Address: 0x15da80, Func Offset: 0
	// Line 772, Address: 0x15da88, Func Offset: 0x8
	// Line 773, Address: 0x15da90, Func Offset: 0x10
	// Line 775, Address: 0x15dac8, Func Offset: 0x48
	// Line 777, Address: 0x15dad0, Func Offset: 0x50
	// Line 779, Address: 0x15dad8, Func Offset: 0x58
	// Line 782, Address: 0x15db08, Func Offset: 0x88
	// Line 783, Address: 0x15db10, Func Offset: 0x90
	// Line 785, Address: 0x15db18, Func Offset: 0x98
	// Line 786, Address: 0x15db20, Func Offset: 0xa0
	// Line 787, Address: 0x15db30, Func Offset: 0xb0
	// Line 788, Address: 0x15db38, Func Offset: 0xb8
	// Line 790, Address: 0x15db40, Func Offset: 0xc0
	// Line 792, Address: 0x15db50, Func Offset: 0xd0
	// Line 793, Address: 0x15db58, Func Offset: 0xd8
	// Line 794, Address: 0x15db60, Func Offset: 0xe0
	// Line 795, Address: 0x15db68, Func Offset: 0xe8
	// Line 807, Address: 0x15db70, Func Offset: 0xf0
	// Line 808, Address: 0x15db80, Func Offset: 0x100
	// Line 810, Address: 0x15db88, Func Offset: 0x108
	// Line 813, Address: 0x15db90, Func Offset: 0x110
	// Line 814, Address: 0x15dba0, Func Offset: 0x120
	// Line 815, Address: 0x15dba8, Func Offset: 0x128
	// Line 816, Address: 0x15dbb0, Func Offset: 0x130
	// Line 817, Address: 0x15dbb8, Func Offset: 0x138
	// Line 821, Address: 0x15dbc0, Func Offset: 0x140
	// Line 822, Address: 0x15dbc8, Func Offset: 0x148
	// Func End, Address: 0x15dbd4, Func Offset: 0x154
}

// 
// Start address: 0x15dbe0
void GameSetModePlay()
{
	// Line 829, Address: 0x15dbe0, Func Offset: 0
	// Line 830, Address: 0x15dbe4, Func Offset: 0x4
	// Line 829, Address: 0x15dbe8, Func Offset: 0x8
	// Line 830, Address: 0x15dbec, Func Offset: 0xc
	// Line 831, Address: 0x15dbfc, Func Offset: 0x1c
	// Line 833, Address: 0x15dc28, Func Offset: 0x48
	// Line 835, Address: 0x15dc58, Func Offset: 0x78
	// Line 837, Address: 0x15dc68, Func Offset: 0x88
	// Line 839, Address: 0x15dc6c, Func Offset: 0x8c
	// Line 841, Address: 0x15dc78, Func Offset: 0x98
	// Line 842, Address: 0x15dc80, Func Offset: 0xa0
	// Func End, Address: 0x15dc8c, Func Offset: 0xac
}

// 
// Start address: 0x15dc90
void GameSetModeDemo()
{
	// Line 847, Address: 0x15dc90, Func Offset: 0
	// Line 848, Address: 0x15dc94, Func Offset: 0x4
	// Line 847, Address: 0x15dc98, Func Offset: 0x8
	// Line 848, Address: 0x15dc9c, Func Offset: 0xc
	// Line 849, Address: 0x15dca8, Func Offset: 0x18
	// Line 851, Address: 0x15dcd4, Func Offset: 0x44
	// Line 852, Address: 0x15dce4, Func Offset: 0x54
	// Line 853, Address: 0x15dce8, Func Offset: 0x58
	// Line 855, Address: 0x15dcf0, Func Offset: 0x60
	// Line 857, Address: 0x15dcfc, Func Offset: 0x6c
	// Line 858, Address: 0x15dd04, Func Offset: 0x74
	// Func End, Address: 0x15dd10, Func Offset: 0x80
}

// 
// Start address: 0x15dd10
void GameSetModePause()
{
	// Line 865, Address: 0x15dd10, Func Offset: 0
	// Line 866, Address: 0x15dd18, Func Offset: 0x8
	// Func End, Address: 0x15dd20, Func Offset: 0x10
}

// 
// Start address: 0x15dd20
void GameMain()
{
	void(*func)();
	// Line 872, Address: 0x15dd20, Func Offset: 0
	// Line 875, Address: 0x15dd28, Func Offset: 0x8
	// Line 876, Address: 0x15dd30, Func Offset: 0x10
	// Line 878, Address: 0x15dd38, Func Offset: 0x18
	// Line 879, Address: 0x15dd54, Func Offset: 0x34
	// Line 880, Address: 0x15dd5c, Func Offset: 0x3c
	// Line 881, Address: 0x15dd64, Func Offset: 0x44
	// Line 882, Address: 0x15dd70, Func Offset: 0x50
	// Line 883, Address: 0x15dd78, Func Offset: 0x58
	// Line 884, Address: 0x15dd80, Func Offset: 0x60
	// Line 887, Address: 0x15dd88, Func Offset: 0x68
	// Line 888, Address: 0x15dd90, Func Offset: 0x70
	// Func End, Address: 0x15dd9c, Func Offset: 0x7c
}

// 
// Start address: 0x15dda0
void GameExecPostdrawOt()
{
	// Line 894, Address: 0x15dda0, Func Offset: 0
	// Line 896, Address: 0x15dda8, Func Offset: 0x8
	// Line 899, Address: 0x15ddb0, Func Offset: 0x10
	// Line 900, Address: 0x15ddcc, Func Offset: 0x2c
	// Line 902, Address: 0x15ddd8, Func Offset: 0x38
	// Line 904, Address: 0x15dde0, Func Offset: 0x40
	// Line 906, Address: 0x15de00, Func Offset: 0x60
	// Line 907, Address: 0x15de08, Func Offset: 0x68
	// Line 911, Address: 0x15de10, Func Offset: 0x70
	// Line 913, Address: 0x15de18, Func Offset: 0x78
	// Line 915, Address: 0x15de20, Func Offset: 0x80
	// Line 918, Address: 0x15de28, Func Offset: 0x88
	// Line 921, Address: 0x15de30, Func Offset: 0x90
	// Line 922, Address: 0x15de40, Func Offset: 0xa0
	// Line 923, Address: 0x15de60, Func Offset: 0xc0
	// Line 928, Address: 0x15de68, Func Offset: 0xc8
	// Line 931, Address: 0x15de70, Func Offset: 0xd0
	// Line 932, Address: 0x15de78, Func Offset: 0xd8
	// Line 933, Address: 0x15de80, Func Offset: 0xe0
	// Line 934, Address: 0x15de88, Func Offset: 0xe8
	// Line 935, Address: 0x15de90, Func Offset: 0xf0
	// Line 936, Address: 0x15de98, Func Offset: 0xf8
	// Line 937, Address: 0x15dea0, Func Offset: 0x100
	// Func End, Address: 0x15deac, Func Offset: 0x10c
}

