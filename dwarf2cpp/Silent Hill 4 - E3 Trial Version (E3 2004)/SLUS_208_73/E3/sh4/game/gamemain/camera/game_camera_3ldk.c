typedef struct sfObj;
typedef struct sgAnime;
typedef struct _anon0;
typedef struct sfCharacter;
typedef union _anon1;
typedef struct _cam3AFItem;
typedef struct _player3ldkUiWork;
typedef struct _cam3Work;
typedef enum PlayerExtStatus : unsigned char;
typedef struct _anon2;
typedef struct _cam3ldkAF;
typedef struct _anon3;
typedef struct sfCldObject;
typedef struct sgQTNode;
typedef struct _anon4;
typedef struct sfCldPart;
typedef struct _anon5;
typedef struct _GAME_WORK;
typedef struct _anon6;
typedef enum _cam3Step : unsigned char;
typedef struct _PLAYER_WORK;
typedef struct _anon7;
typedef struct _anon8;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sgQTObject;
typedef struct sgIKHandle;
typedef struct _anon9;
typedef struct sgBone;
typedef struct sfOffsetAABB;
typedef union sfCldBody;
typedef enum GameItem : unsigned char;
typedef enum _cameraTypes : unsigned char;
typedef struct _cameraBaseWork;
typedef struct sgSVModel;

typedef void(*type_2)(sfObj*);
typedef void(*type_4)(_anon2*, int, int, float*);
typedef void(*type_6)(sfObj*);
typedef sgIKSolveResult(*type_17)();
typedef void(*type_29)(sgAnime*, int);

typedef unsigned char type_0[4];
typedef float type_1[4][4];
typedef float type_3[4];
typedef int type_5[1];
typedef _cam3AFItem type_7[128];
typedef int type_8[1];
typedef sfCldPart* type_9[6];
typedef unsigned char type_10[3];
typedef int type_11[1];
typedef int type_12[1];
typedef int type_13[1];
typedef float type_14[4];
typedef int type_15[1];
typedef float type_16[4][2];
typedef int type_18[1];
typedef float type_19[4];
typedef unsigned char type_20[3];
typedef short type_21[2];
typedef unsigned short type_22[2];
typedef _anon9 type_23[2];
typedef char type_24[4];
typedef unsigned char type_25[4];
typedef float type_26[1];
typedef int type_27[1];
typedef void* type_28[4];
typedef _anon1 type_30[256];

struct sfObj
{
	_anon1 fwork[256];
	_anon1* work;
	void(*func)(sfObj*);
	_anon1* work_pt0;
	_anon1* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon1* sys_work;
	_anon1* scene_work;
	_anon1* event_work;
	_anon1* objhit_work;
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

struct _anon0
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

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon0 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

union _anon1
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

struct _cam3AFItem
{
	int id;
	sfObj* obj;
	float dot;
	float v_dot;
	int disable;
	int valid;
};

struct _player3ldkUiWork
{
	float rot[4];
	float eye[4];
	float forward;
	float side;
	int eye_move;
	int eye_reset;
	int mode;
	int shakeLevel;
	float accessPos[4];
	int access;
	int decide;
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

struct _anon2
{
	unsigned long tex0;
	unsigned long clamp;
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

struct _anon3
{
	float start[4];
	float end[4];
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

struct _anon4
{
	float center[4];
	float radius;
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

struct _anon5
{
	float bmin[4];
	float bmax[4];
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

enum _cam3Step : unsigned char
{
	CAM3_STEP_NORMAL,
	CAM3_STEP_AUTOFOCUS,
	CAM3_STEP_RESET,
	CAM3_STEP_STOP
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
	_anon8* anim_ctrl;
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

struct _anon7
{
	float mat[4][4];
	float half_w[4];
};

struct _anon8
{
	int dummy;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct sgQTObject
{
	_anon4 bounding_ball;
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

struct _anon9
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
	_anon5 aabb;
	float offset[4];
};

union sfCldBody
{
	_anon7 obb;
	_anon5 aabb;
	sfOffsetAABB offset_aabb;
	_anon3 line;
	_anon4 sphere;
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

enum _cameraTypes : unsigned char
{
	CAMERA_3LDK_NORMAL = 0x3,
	CAMERA_3LDK_RAIL
};

struct _cameraBaseWork
{
	_cameraTypes type;
	_GAME_WORK* gameW;
	_PLAYER_WORK* playerW;
	void* camW;
	void* uiW;
	int numHitPolygons;
	float pos[4];
	float prvPos[4];
	float lookAt[4];
	float prvLookAt[4];
	float up[4];
	float trgPos[4];
	float trgLookat[4];
	float rot[4];
	float ratio;
	float lookAtRatio;
	float focalLength;
	float lookAtHeight;
	float fov;
	int run;
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

_cam3ldkAF* p_cam3af;
_GAME_WORK gamew;
_cam3ldkAF cam3_afwork;
_cameraBaseWork cambw;
_cam3Work cam3_work;
float sg_vector_zero[4];
float cam_height;
float CAM_BASE_UP[4];
float sg_matrix_unit[4][4];
_anon9 player_ext_info[2];

void Camera3ldkInit();
void Camera3ldkMain();
void Camera3ldkForcePos(float* pos);
float Camera3ldkGetHeight();
float* Camera3ldkGetRot();
void cam3RotFromTargetPos(float* target);
void Camera3ldkLookAt(float* tgt);
void cam3SetRotFromZ();
void cam3ldkGetDispPos(float* dst, float* pos);
void cam3InitState();
void cam3InitRuntime();
void cam3AFSetPreTarget();
void cam3FinalizeRuntime();
void cam3DecidePosition();
void cam3Move(float* pos);
void cam3Rotate(float cm[4], float* rot);
float cam3GetShakeHeight();
void cam3SetLookAt(float* pos);
int cam3AFCheckNearCenter(float* src);
int cam3AFLookAtItem();
void cam3AFRegistFocusItem(_cam3AFItem* item);
void cam3AFEjectFocusItem();
int cam3AFCheckInput();
int cam3AFCheck();
void Camera3ldkAFSearch(sfObj* obj);
void Camera3ldkAFCancel();
int Camera3ldkAFEjectItem(sfObj* obj);
int Camera3ldkAFCheckItemDistance(float* item_pos);
int Camera3ldkAFCheckItemInSight(float* target);
void cam3ldkAFInitItemList();
_cam3AFItem* cam3AFSetFocusItem();
float cam3ldkAFGetDotItem2Cam(float* item_pos);
int cam3AFSearchItem(sfObj* obj, int eject);
int cam3ldkAFEjectItem(int id);

// 
// Start address: 0x1d15f0
void Camera3ldkInit()
{
	// Line 84, Address: 0x1d15f0, Func Offset: 0
	// Line 86, Address: 0x1d15f4, Func Offset: 0x4
	// Line 84, Address: 0x1d15f8, Func Offset: 0x8
	// Line 86, Address: 0x1d15fc, Func Offset: 0xc
	// Line 88, Address: 0x1d160c, Func Offset: 0x1c
	// Line 87, Address: 0x1d1618, Func Offset: 0x28
	// Line 91, Address: 0x1d1628, Func Offset: 0x38
	// Line 89, Address: 0x1d162c, Func Offset: 0x3c
	// Line 91, Address: 0x1d1630, Func Offset: 0x40
	// Line 89, Address: 0x1d1634, Func Offset: 0x44
	// Line 91, Address: 0x1d163c, Func Offset: 0x4c
	// Line 92, Address: 0x1d1644, Func Offset: 0x54
	// Line 94, Address: 0x1d1650, Func Offset: 0x60
	// Line 96, Address: 0x1d1654, Func Offset: 0x64
	// Line 94, Address: 0x1d1658, Func Offset: 0x68
	// Line 96, Address: 0x1d165c, Func Offset: 0x6c
	// Line 97, Address: 0x1d166c, Func Offset: 0x7c
	// Line 98, Address: 0x1d1674, Func Offset: 0x84
	// Line 99, Address: 0x1d167c, Func Offset: 0x8c
	// Line 101, Address: 0x1d1688, Func Offset: 0x98
	// Line 102, Address: 0x1d1690, Func Offset: 0xa0
	// Line 105, Address: 0x1d1698, Func Offset: 0xa8
	// Line 106, Address: 0x1d16a0, Func Offset: 0xb0
	// Func End, Address: 0x1d16ac, Func Offset: 0xbc
}

// 
// Start address: 0x1d16b0
void Camera3ldkMain()
{
	_GAME_WORK* gameW;
	_PLAYER_WORK* player;
	float tv[4];
	// Line 132, Address: 0x1d16b0, Func Offset: 0
	// Line 137, Address: 0x1d16b4, Func Offset: 0x4
	// Line 132, Address: 0x1d16b8, Func Offset: 0x8
	// Line 137, Address: 0x1d16bc, Func Offset: 0xc
	// Line 132, Address: 0x1d16c0, Func Offset: 0x10
	// Line 156, Address: 0x1d16c4, Func Offset: 0x14
	// Line 138, Address: 0x1d16c8, Func Offset: 0x18
	// Line 156, Address: 0x1d16cc, Func Offset: 0x1c
	// Line 160, Address: 0x1d1718, Func Offset: 0x68
	// Line 162, Address: 0x1d1720, Func Offset: 0x70
	// Line 163, Address: 0x1d1744, Func Offset: 0x94
	// Line 164, Address: 0x1d1748, Func Offset: 0x98
	// Line 165, Address: 0x1d175c, Func Offset: 0xac
	// Line 167, Address: 0x1d1778, Func Offset: 0xc8
	// Line 166, Address: 0x1d177c, Func Offset: 0xcc
	// Line 167, Address: 0x1d1780, Func Offset: 0xd0
	// Line 166, Address: 0x1d1784, Func Offset: 0xd4
	// Line 167, Address: 0x1d1788, Func Offset: 0xd8
	// Line 166, Address: 0x1d178c, Func Offset: 0xdc
	// Line 167, Address: 0x1d1790, Func Offset: 0xe0
	// Line 173, Address: 0x1d1798, Func Offset: 0xe8
	// Line 176, Address: 0x1d17a0, Func Offset: 0xf0
	// Line 177, Address: 0x1d17a8, Func Offset: 0xf8
	// Line 179, Address: 0x1d17c8, Func Offset: 0x118
	// Line 178, Address: 0x1d17cc, Func Offset: 0x11c
	// Line 179, Address: 0x1d17d0, Func Offset: 0x120
	// Line 178, Address: 0x1d17d4, Func Offset: 0x124
	// Line 179, Address: 0x1d17d8, Func Offset: 0x128
	// Line 178, Address: 0x1d17dc, Func Offset: 0x12c
	// Line 179, Address: 0x1d17e0, Func Offset: 0x130
	// Line 187, Address: 0x1d17e8, Func Offset: 0x138
	// Line 189, Address: 0x1d17f0, Func Offset: 0x140
	// Line 190, Address: 0x1d17f8, Func Offset: 0x148
	// Line 192, Address: 0x1d1800, Func Offset: 0x150
	// Line 193, Address: 0x1d1810, Func Offset: 0x160
	// Line 194, Address: 0x1d181c, Func Offset: 0x16c
	// Line 195, Address: 0x1d1824, Func Offset: 0x174
	// Line 196, Address: 0x1d182c, Func Offset: 0x17c
	// Line 219, Address: 0x1d1840, Func Offset: 0x190
	// Func End, Address: 0x1d1850, Func Offset: 0x1a0
}

// 
// Start address: 0x1d1850
void Camera3ldkForcePos(float* pos)
{
	_cam3Work* cam3work;
	// Line 234, Address: 0x1d1850, Func Offset: 0
	// Line 236, Address: 0x1d1858, Func Offset: 0x8
	// Line 234, Address: 0x1d185c, Func Offset: 0xc
	// Line 236, Address: 0x1d1860, Func Offset: 0x10
	// Line 237, Address: 0x1d1868, Func Offset: 0x18
	// Func End, Address: 0x1d1870, Func Offset: 0x20
}

// 
// Start address: 0x1d1870
float Camera3ldkGetHeight()
{
	// Line 242, Address: 0x1d1870, Func Offset: 0
	// Line 243, Address: 0x1d1874, Func Offset: 0x4
	// Func End, Address: 0x1d187c, Func Offset: 0xc
}

// 
// Start address: 0x1d1880
float* Camera3ldkGetRot()
{
	// Line 262, Address: 0x1d1880, Func Offset: 0
	// Line 263, Address: 0x1d1884, Func Offset: 0x4
	// Func End, Address: 0x1d188c, Func Offset: 0xc
}

// 
// Start address: 0x1d1890
void cam3RotFromTargetPos(float* target)
{
	float subVec[4];
	float rot[4];
	float dist;
	// Line 318, Address: 0x1d1890, Func Offset: 0
	// Line 323, Address: 0x1d1894, Func Offset: 0x4
	// Line 318, Address: 0x1d1898, Func Offset: 0x8
	// Line 323, Address: 0x1d189c, Func Offset: 0xc
	// Line 324, Address: 0x1d18b4, Func Offset: 0x24
	// Line 325, Address: 0x1d18cc, Func Offset: 0x3c
	// Line 327, Address: 0x1d18ec, Func Offset: 0x5c
	// Line 330, Address: 0x1d18f8, Func Offset: 0x68
	// Line 327, Address: 0x1d18fc, Func Offset: 0x6c
	// Line 330, Address: 0x1d1900, Func Offset: 0x70
	// Line 328, Address: 0x1d1904, Func Offset: 0x74
	// Line 327, Address: 0x1d190c, Func Offset: 0x7c
	// Line 330, Address: 0x1d1910, Func Offset: 0x80
	// Line 328, Address: 0x1d1914, Func Offset: 0x84
	// Line 327, Address: 0x1d1918, Func Offset: 0x88
	// Line 330, Address: 0x1d191c, Func Offset: 0x8c
	// Line 331, Address: 0x1d1924, Func Offset: 0x94
	// Func End, Address: 0x1d1930, Func Offset: 0xa0
}

// 
// Start address: 0x1d1930
void Camera3ldkLookAt(float* tgt)
{
	_PLAYER_WORK* player;
	_cam3Work* cam_work;
	float eye[4];
	float tv[4];
	// Line 335, Address: 0x1d1930, Func Offset: 0
	// Line 336, Address: 0x1d193c, Func Offset: 0xc
	// Line 337, Address: 0x1d1944, Func Offset: 0x14
	// Line 340, Address: 0x1d1948, Func Offset: 0x18
	// Line 337, Address: 0x1d194c, Func Offset: 0x1c
	// Line 340, Address: 0x1d1950, Func Offset: 0x20
	// Line 343, Address: 0x1d1958, Func Offset: 0x28
	// Line 344, Address: 0x1d196c, Func Offset: 0x3c
	// Line 347, Address: 0x1d1998, Func Offset: 0x68
	// Line 348, Address: 0x1d19c0, Func Offset: 0x90
	// Line 351, Address: 0x1d19ec, Func Offset: 0xbc
	// Line 352, Address: 0x1d1a10, Func Offset: 0xe0
	// Line 355, Address: 0x1d1a3c, Func Offset: 0x10c
	// Line 360, Address: 0x1d1a4c, Func Offset: 0x11c
	// Line 356, Address: 0x1d1a50, Func Offset: 0x120
	// Line 360, Address: 0x1d1a54, Func Offset: 0x124
	// Line 356, Address: 0x1d1a58, Func Offset: 0x128
	// Line 360, Address: 0x1d1a5c, Func Offset: 0x12c
	// Line 363, Address: 0x1d1a64, Func Offset: 0x134
	// Line 365, Address: 0x1d1a6c, Func Offset: 0x13c
	// Line 366, Address: 0x1d1a74, Func Offset: 0x144
	// Func End, Address: 0x1d1a84, Func Offset: 0x154
}

// 
// Start address: 0x1d1a90
void cam3SetRotFromZ()
{
	_cam3Work* cam3work;
	float camZ[4];
	// Line 396, Address: 0x1d1a90, Func Offset: 0
	// Line 397, Address: 0x1d1a9c, Func Offset: 0xc
	// Line 399, Address: 0x1d1aa0, Func Offset: 0x10
	// Line 402, Address: 0x1d1ab4, Func Offset: 0x24
	// Line 404, Address: 0x1d1acc, Func Offset: 0x3c
	// Line 406, Address: 0x1d1adc, Func Offset: 0x4c
	// Line 407, Address: 0x1d1ae0, Func Offset: 0x50
	// Func End, Address: 0x1d1af0, Func Offset: 0x60
}

// 
// Start address: 0x1d1af0
void cam3ldkGetDispPos(float* dst, float* pos)
{
	float wsm[4][4];
	float pp[4];
	// Line 412, Address: 0x1d1af0, Func Offset: 0
	// Line 416, Address: 0x1d1b08, Func Offset: 0x18
	// Line 417, Address: 0x1d1b10, Func Offset: 0x20
	// Line 418, Address: 0x1d1b4c, Func Offset: 0x5c
	// Line 419, Address: 0x1d1b74, Func Offset: 0x84
	// Func End, Address: 0x1d1b88, Func Offset: 0x98
}

// 
// Start address: 0x1d1b90
void cam3InitState()
{
	_PLAYER_WORK* player;
	float lookAt[4];
	_cam3Work* camWork;
	// Line 423, Address: 0x1d1b90, Func Offset: 0
	// Line 427, Address: 0x1d1b94, Func Offset: 0x4
	// Line 423, Address: 0x1d1b98, Func Offset: 0x8
	// Line 426, Address: 0x1d1b9c, Func Offset: 0xc
	// Line 423, Address: 0x1d1ba0, Func Offset: 0x10
	// Line 430, Address: 0x1d1ba4, Func Offset: 0x14
	// Line 427, Address: 0x1d1ba8, Func Offset: 0x18
	// Line 424, Address: 0x1d1bac, Func Offset: 0x1c
	// Line 426, Address: 0x1d1bb4, Func Offset: 0x24
	// Line 430, Address: 0x1d1bbc, Func Offset: 0x2c
	// Line 432, Address: 0x1d1bf0, Func Offset: 0x60
	// Line 433, Address: 0x1d1bfc, Func Offset: 0x6c
	// Line 432, Address: 0x1d1c00, Func Offset: 0x70
	// Line 433, Address: 0x1d1c04, Func Offset: 0x74
	// Line 434, Address: 0x1d1c0c, Func Offset: 0x7c
	// Line 436, Address: 0x1d1c14, Func Offset: 0x84
	// Line 437, Address: 0x1d1c18, Func Offset: 0x88
	// Line 438, Address: 0x1d1c24, Func Offset: 0x94
	// Line 437, Address: 0x1d1c28, Func Offset: 0x98
	// Line 438, Address: 0x1d1c2c, Func Offset: 0x9c
	// Line 439, Address: 0x1d1c34, Func Offset: 0xa4
	// Line 441, Address: 0x1d1c3c, Func Offset: 0xac
	// Line 442, Address: 0x1d1c40, Func Offset: 0xb0
	// Line 443, Address: 0x1d1c4c, Func Offset: 0xbc
	// Line 442, Address: 0x1d1c50, Func Offset: 0xc0
	// Line 443, Address: 0x1d1c54, Func Offset: 0xc4
	// Line 444, Address: 0x1d1c5c, Func Offset: 0xcc
	// Line 446, Address: 0x1d1c64, Func Offset: 0xd4
	// Line 447, Address: 0x1d1c68, Func Offset: 0xd8
	// Line 448, Address: 0x1d1c74, Func Offset: 0xe4
	// Line 447, Address: 0x1d1c78, Func Offset: 0xe8
	// Line 448, Address: 0x1d1c7c, Func Offset: 0xec
	// Line 449, Address: 0x1d1c84, Func Offset: 0xf4
	// Line 451, Address: 0x1d1c8c, Func Offset: 0xfc
	// Line 452, Address: 0x1d1c90, Func Offset: 0x100
	// Line 453, Address: 0x1d1c9c, Func Offset: 0x10c
	// Line 452, Address: 0x1d1ca0, Func Offset: 0x110
	// Line 453, Address: 0x1d1ca4, Func Offset: 0x114
	// Line 457, Address: 0x1d1cb0, Func Offset: 0x120
	// Line 459, Address: 0x1d1cc4, Func Offset: 0x134
	// Line 458, Address: 0x1d1cc8, Func Offset: 0x138
	// Line 459, Address: 0x1d1cd4, Func Offset: 0x144
	// Line 462, Address: 0x1d1ce0, Func Offset: 0x150
	// Line 463, Address: 0x1d1cec, Func Offset: 0x15c
	// Line 473, Address: 0x1d1cf8, Func Offset: 0x168
	// Line 476, Address: 0x1d1d00, Func Offset: 0x170
	// Line 481, Address: 0x1d1d08, Func Offset: 0x178
	// Line 477, Address: 0x1d1d0c, Func Offset: 0x17c
	// Line 481, Address: 0x1d1d18, Func Offset: 0x188
	// Line 477, Address: 0x1d1d1c, Func Offset: 0x18c
	// Line 481, Address: 0x1d1d24, Func Offset: 0x194
	// Line 483, Address: 0x1d1d30, Func Offset: 0x1a0
	// Line 484, Address: 0x1d1d34, Func Offset: 0x1a4
	// Line 483, Address: 0x1d1d38, Func Offset: 0x1a8
	// Line 484, Address: 0x1d1d3c, Func Offset: 0x1ac
	// Line 483, Address: 0x1d1d40, Func Offset: 0x1b0
	// Line 484, Address: 0x1d1d44, Func Offset: 0x1b4
	// Line 483, Address: 0x1d1d4c, Func Offset: 0x1bc
	// Line 484, Address: 0x1d1d54, Func Offset: 0x1c4
	// Line 487, Address: 0x1d1d68, Func Offset: 0x1d8
	// Line 489, Address: 0x1d1d74, Func Offset: 0x1e4
	// Line 490, Address: 0x1d1d88, Func Offset: 0x1f8
	// Line 491, Address: 0x1d1d90, Func Offset: 0x200
	// Line 492, Address: 0x1d1dc0, Func Offset: 0x230
	// Line 493, Address: 0x1d1dd4, Func Offset: 0x244
	// Line 494, Address: 0x1d1ddc, Func Offset: 0x24c
	// Line 496, Address: 0x1d1de8, Func Offset: 0x258
	// Func End, Address: 0x1d1df8, Func Offset: 0x268
}

// 
// Start address: 0x1d1e00
void cam3InitRuntime()
{
	// Line 500, Address: 0x1d1e00, Func Offset: 0
	// Line 503, Address: 0x1d1e08, Func Offset: 0x8
	// Line 504, Address: 0x1d1e10, Func Offset: 0x10
	// Line 507, Address: 0x1d1e14, Func Offset: 0x14
	// Line 509, Address: 0x1d1e28, Func Offset: 0x28
	// Line 511, Address: 0x1d1e30, Func Offset: 0x30
	// Line 512, Address: 0x1d1e3c, Func Offset: 0x3c
	// Line 511, Address: 0x1d1e44, Func Offset: 0x44
	// Line 513, Address: 0x1d1e4c, Func Offset: 0x4c
	// Line 514, Address: 0x1d1e50, Func Offset: 0x50
	// Func End, Address: 0x1d1e5c, Func Offset: 0x5c
}

// 
// Start address: 0x1d1e60
void cam3AFSetPreTarget()
{
	_cam3ldkAF* p_cam3af;
	// Line 522, Address: 0x1d1e60, Func Offset: 0
	// Line 520, Address: 0x1d1e64, Func Offset: 0x4
	// Line 522, Address: 0x1d1e68, Func Offset: 0x8
	// Line 523, Address: 0x1d1e74, Func Offset: 0x14
	// Line 524, Address: 0x1d1e7c, Func Offset: 0x1c
	// Line 526, Address: 0x1d1e88, Func Offset: 0x28
	// Line 527, Address: 0x1d1e8c, Func Offset: 0x2c
	// Line 528, Address: 0x1d1e90, Func Offset: 0x30
	// Func End, Address: 0x1d1e98, Func Offset: 0x38
}

// 
// Start address: 0x1d1ea0
void cam3FinalizeRuntime()
{
	// Line 532, Address: 0x1d1ea0, Func Offset: 0
	// Line 533, Address: 0x1d1ea4, Func Offset: 0x4
	// Line 532, Address: 0x1d1ea8, Func Offset: 0x8
	// Line 535, Address: 0x1d1eac, Func Offset: 0xc
	// Line 536, Address: 0x1d1eb4, Func Offset: 0x14
	// Line 537, Address: 0x1d1eb8, Func Offset: 0x18
	// Line 539, Address: 0x1d1ec0, Func Offset: 0x20
	// Line 540, Address: 0x1d1ecc, Func Offset: 0x2c
	// Line 542, Address: 0x1d1ed4, Func Offset: 0x34
	// Line 543, Address: 0x1d1ee8, Func Offset: 0x48
	// Line 545, Address: 0x1d1ef0, Func Offset: 0x50
	// Func End, Address: 0x1d1efc, Func Offset: 0x5c
}

// 
// Start address: 0x1d1f00
void cam3DecidePosition()
{
	_GAME_WORK* gw;
	_PLAYER_WORK* player;
	_cam3Work* cam3Work;
	float pos[4];
	float shake;
	int shakeLvl;
	// Line 549, Address: 0x1d1f00, Func Offset: 0
	// Line 550, Address: 0x1d1f04, Func Offset: 0x4
	// Line 549, Address: 0x1d1f08, Func Offset: 0x8
	// Line 551, Address: 0x1d1f0c, Func Offset: 0xc
	// Line 549, Address: 0x1d1f10, Func Offset: 0x10
	// Line 550, Address: 0x1d1f14, Func Offset: 0x14
	// Line 549, Address: 0x1d1f18, Func Offset: 0x18
	// Line 558, Address: 0x1d1f1c, Func Offset: 0x1c
	// Line 551, Address: 0x1d1f20, Func Offset: 0x20
	// Line 558, Address: 0x1d1f24, Func Offset: 0x24
	// Line 560, Address: 0x1d1f2c, Func Offset: 0x2c
	// Line 561, Address: 0x1d1f40, Func Offset: 0x40
	// Line 562, Address: 0x1d1f54, Func Offset: 0x54
	// Line 564, Address: 0x1d1f60, Func Offset: 0x60
	// Line 565, Address: 0x1d1f70, Func Offset: 0x70
	// Line 566, Address: 0x1d1f74, Func Offset: 0x74
	// Line 568, Address: 0x1d1f84, Func Offset: 0x84
	// Line 572, Address: 0x1d1fa0, Func Offset: 0xa0
	// Line 576, Address: 0x1d1fc4, Func Offset: 0xc4
	// Line 577, Address: 0x1d1fcc, Func Offset: 0xcc
	// Line 578, Address: 0x1d1fd8, Func Offset: 0xd8
	// Line 582, Address: 0x1d2000, Func Offset: 0x100
	// Line 583, Address: 0x1d2024, Func Offset: 0x124
	// Line 584, Address: 0x1d202c, Func Offset: 0x12c
	// Line 585, Address: 0x1d2030, Func Offset: 0x130
	// Line 592, Address: 0x1d2048, Func Offset: 0x148
	// Line 593, Address: 0x1d2050, Func Offset: 0x150
	// Line 594, Address: 0x1d205c, Func Offset: 0x15c
	// Func End, Address: 0x1d2070, Func Offset: 0x170
}

// 
// Start address: 0x1d2070
void cam3Move(float* pos)
{
	_cam3Work* cam3Work;
	// Line 599, Address: 0x1d2070, Func Offset: 0
	// Line 601, Address: 0x1d2074, Func Offset: 0x4
	// Line 599, Address: 0x1d2078, Func Offset: 0x8
	// Line 601, Address: 0x1d207c, Func Offset: 0xc
	// Line 602, Address: 0x1d2088, Func Offset: 0x18
	// Line 603, Address: 0x1d208c, Func Offset: 0x1c
	// Func End, Address: 0x1d2094, Func Offset: 0x24
}

// 
// Start address: 0x1d20a0
void cam3Rotate(float cm[4], float* rot)
{
	float rym[4][4];
	float rxm[4][4];
	// Line 607, Address: 0x1d20a0, Func Offset: 0
	// Line 612, Address: 0x1d20b8, Func Offset: 0x18
	// Line 613, Address: 0x1d20cc, Func Offset: 0x2c
	// Line 615, Address: 0x1d20e0, Func Offset: 0x40
	// Line 616, Address: 0x1d2154, Func Offset: 0xb4
	// Line 617, Address: 0x1d21c8, Func Offset: 0x128
	// Func End, Address: 0x1d21dc, Func Offset: 0x13c
}

// 
// Start address: 0x1d21e0
float cam3GetShakeHeight()
{
	_anon6* ui;
	float mv;
	float side;
	float moved[4];
	float tf;
	// Line 639, Address: 0x1d21e0, Func Offset: 0
	// Line 640, Address: 0x1d21e4, Func Offset: 0x4
	// Line 639, Address: 0x1d21e8, Func Offset: 0x8
	// Line 640, Address: 0x1d21ec, Func Offset: 0xc
	// Line 648, Address: 0x1d21f4, Func Offset: 0x14
	// Line 650, Address: 0x1d2208, Func Offset: 0x28
	// Line 658, Address: 0x1d2240, Func Offset: 0x60
	// Line 660, Address: 0x1d225c, Func Offset: 0x7c
	// Line 658, Address: 0x1d2260, Func Offset: 0x80
	// Line 660, Address: 0x1d2264, Func Offset: 0x84
	// Line 658, Address: 0x1d2268, Func Offset: 0x88
	// Line 660, Address: 0x1d226c, Func Offset: 0x8c
	// Line 658, Address: 0x1d2270, Func Offset: 0x90
	// Line 660, Address: 0x1d2278, Func Offset: 0x98
	// Line 661, Address: 0x1d2280, Func Offset: 0xa0
	// Line 662, Address: 0x1d2294, Func Offset: 0xb4
	// Line 663, Address: 0x1d22ac, Func Offset: 0xcc
	// Line 664, Address: 0x1d22b8, Func Offset: 0xd8
	// Line 665, Address: 0x1d22c4, Func Offset: 0xe4
	// Line 666, Address: 0x1d22d4, Func Offset: 0xf4
	// Line 668, Address: 0x1d22d8, Func Offset: 0xf8
	// Line 669, Address: 0x1d2304, Func Offset: 0x124
	// Line 670, Address: 0x1d2310, Func Offset: 0x130
	// Line 671, Address: 0x1d2314, Func Offset: 0x134
	// Line 670, Address: 0x1d2318, Func Offset: 0x138
	// Line 671, Address: 0x1d2324, Func Offset: 0x144
	// Line 670, Address: 0x1d2330, Func Offset: 0x150
	// Line 671, Address: 0x1d2334, Func Offset: 0x154
	// Line 672, Address: 0x1d2344, Func Offset: 0x164
	// Line 673, Address: 0x1d2350, Func Offset: 0x170
	// Line 675, Address: 0x1d236c, Func Offset: 0x18c
	// Line 674, Address: 0x1d2370, Func Offset: 0x190
	// Line 675, Address: 0x1d237c, Func Offset: 0x19c
	// Line 674, Address: 0x1d2388, Func Offset: 0x1a8
	// Line 675, Address: 0x1d238c, Func Offset: 0x1ac
	// Line 677, Address: 0x1d239c, Func Offset: 0x1bc
	// Line 679, Address: 0x1d23a0, Func Offset: 0x1c0
	// Line 680, Address: 0x1d23ac, Func Offset: 0x1cc
	// Func End, Address: 0x1d23bc, Func Offset: 0x1dc
}

// 
// Start address: 0x1d23c0
void cam3SetLookAt(float* pos)
{
	_cam3Work* camWork;
	// Line 687, Address: 0x1d23c0, Func Offset: 0
	// Line 688, Address: 0x1d23cc, Func Offset: 0xc
	// Func End, Address: 0x1d23d4, Func Offset: 0x14
}

// 
// Start address: 0x1d23e0
int cam3AFCheckNearCenter(float* src)
{
	// Line 717, Address: 0x1d23e0, Func Offset: 0
	// Line 718, Address: 0x1d23ec, Func Offset: 0xc
	// Line 717, Address: 0x1d23f0, Func Offset: 0x10
	// Line 718, Address: 0x1d23f4, Func Offset: 0x14
	// Line 717, Address: 0x1d23f8, Func Offset: 0x18
	// Line 718, Address: 0x1d23fc, Func Offset: 0x1c
	// Line 717, Address: 0x1d2400, Func Offset: 0x20
	// Line 718, Address: 0x1d2404, Func Offset: 0x24
	// Line 720, Address: 0x1d2408, Func Offset: 0x28
	// Line 721, Address: 0x1d242c, Func Offset: 0x4c
	// Line 722, Address: 0x1d2434, Func Offset: 0x54
	// Line 724, Address: 0x1d2438, Func Offset: 0x58
	// Line 725, Address: 0x1d2440, Func Offset: 0x60
	// Func End, Address: 0x1d2448, Func Offset: 0x68
}

// 
// Start address: 0x1d2450
int cam3AFLookAtItem()
{
	_PLAYER_WORK* player;
	float tv[4];
	float subVec[4];
	float target[4];
	float targetRot[4];
	float dist;
	// Line 728, Address: 0x1d2450, Func Offset: 0
	// Line 731, Address: 0x1d2454, Func Offset: 0x4
	// Line 728, Address: 0x1d2458, Func Offset: 0x8
	// Line 731, Address: 0x1d2460, Func Offset: 0x10
	// Line 732, Address: 0x1d2470, Func Offset: 0x20
	// Line 737, Address: 0x1d2478, Func Offset: 0x28
	// Line 743, Address: 0x1d2480, Func Offset: 0x30
	// Line 748, Address: 0x1d2494, Func Offset: 0x44
	// Line 750, Address: 0x1d249c, Func Offset: 0x4c
	// Line 754, Address: 0x1d24a0, Func Offset: 0x50
	// Line 755, Address: 0x1d24c0, Func Offset: 0x70
	// Line 756, Address: 0x1d24d8, Func Offset: 0x88
	// Line 758, Address: 0x1d24f8, Func Offset: 0xa8
	// Line 761, Address: 0x1d2504, Func Offset: 0xb4
	// Line 758, Address: 0x1d2508, Func Offset: 0xb8
	// Line 761, Address: 0x1d250c, Func Offset: 0xbc
	// Line 758, Address: 0x1d2510, Func Offset: 0xc0
	// Line 761, Address: 0x1d2518, Func Offset: 0xc8
	// Line 762, Address: 0x1d2520, Func Offset: 0xd0
	// Line 761, Address: 0x1d2528, Func Offset: 0xd8
	// Line 762, Address: 0x1d252c, Func Offset: 0xdc
	// Line 763, Address: 0x1d2548, Func Offset: 0xf8
	// Line 765, Address: 0x1d2550, Func Offset: 0x100
	// Line 763, Address: 0x1d2558, Func Offset: 0x108
	// Line 765, Address: 0x1d255c, Func Offset: 0x10c
	// Line 766, Address: 0x1d2584, Func Offset: 0x134
	// Line 768, Address: 0x1d258c, Func Offset: 0x13c
	// Line 770, Address: 0x1d25ac, Func Offset: 0x15c
	// Line 769, Address: 0x1d25b0, Func Offset: 0x160
	// Line 770, Address: 0x1d25b4, Func Offset: 0x164
	// Line 769, Address: 0x1d25b8, Func Offset: 0x168
	// Line 771, Address: 0x1d25c8, Func Offset: 0x178
	// Line 772, Address: 0x1d25cc, Func Offset: 0x17c
	// Line 774, Address: 0x1d25d8, Func Offset: 0x188
	// Line 777, Address: 0x1d25e0, Func Offset: 0x190
	// Line 780, Address: 0x1d25e8, Func Offset: 0x198
	// Line 781, Address: 0x1d25f0, Func Offset: 0x1a0
	// Func End, Address: 0x1d2600, Func Offset: 0x1b0
}

// 
// Start address: 0x1d2600
void cam3AFRegistFocusItem(_cam3AFItem* item)
{
	_cam3ldkAF* afWork;
	// Line 785, Address: 0x1d2600, Func Offset: 0
	// Line 786, Address: 0x1d2604, Func Offset: 0x4
	// Line 787, Address: 0x1d260c, Func Offset: 0xc
	// Line 789, Address: 0x1d2610, Func Offset: 0x10
	// Func End, Address: 0x1d2618, Func Offset: 0x18
}

// 
// Start address: 0x1d2620
void cam3AFEjectFocusItem()
{
	// Line 794, Address: 0x1d2620, Func Offset: 0
	// Line 795, Address: 0x1d2624, Func Offset: 0x4
	// Line 794, Address: 0x1d2628, Func Offset: 0x8
	// Line 795, Address: 0x1d262c, Func Offset: 0xc
	// Line 796, Address: 0x1d2630, Func Offset: 0x10
	// Func End, Address: 0x1d2638, Func Offset: 0x18
}

// 
// Start address: 0x1d2640
int cam3AFCheckInput()
{
	_player3ldkUiWork* ui_3ldk;
	int check;
	// Line 800, Address: 0x1d2640, Func Offset: 0
	// Line 801, Address: 0x1d2644, Func Offset: 0x4
	// Line 800, Address: 0x1d2648, Func Offset: 0x8
	// Line 801, Address: 0x1d2650, Func Offset: 0x10
	// Line 805, Address: 0x1d265c, Func Offset: 0x1c
	// Line 807, Address: 0x1d2670, Func Offset: 0x30
	// Line 809, Address: 0x1d2678, Func Offset: 0x38
	// Line 811, Address: 0x1d2684, Func Offset: 0x44
	// Line 814, Address: 0x1d2690, Func Offset: 0x50
	// Line 817, Address: 0x1d26ac, Func Offset: 0x6c
	// Line 819, Address: 0x1d26b8, Func Offset: 0x78
	// Line 821, Address: 0x1d26c4, Func Offset: 0x84
	// Line 824, Address: 0x1d26d0, Func Offset: 0x90
	// Line 826, Address: 0x1d2738, Func Offset: 0xf8
	// Line 827, Address: 0x1d273c, Func Offset: 0xfc
	// Line 829, Address: 0x1d2740, Func Offset: 0x100
	// Line 830, Address: 0x1d2744, Func Offset: 0x104
	// Func End, Address: 0x1d2758, Func Offset: 0x118
}

// 
// Start address: 0x1d2760
int cam3AFCheck()
{
	_anon6* ui;
	int check;
	// Line 834, Address: 0x1d2760, Func Offset: 0
	// Line 836, Address: 0x1d2764, Func Offset: 0x4
	// Line 834, Address: 0x1d2768, Func Offset: 0x8
	// Line 836, Address: 0x1d2770, Func Offset: 0x10
	// Line 837, Address: 0x1d277c, Func Offset: 0x1c
	// Line 843, Address: 0x1d2784, Func Offset: 0x24
	// Line 844, Address: 0x1d27c0, Func Offset: 0x60
	// Line 845, Address: 0x1d27d0, Func Offset: 0x70
	// Line 848, Address: 0x1d27d8, Func Offset: 0x78
	// Line 849, Address: 0x1d27ec, Func Offset: 0x8c
	// Line 850, Address: 0x1d27fc, Func Offset: 0x9c
	// Line 851, Address: 0x1d2804, Func Offset: 0xa4
	// Line 854, Address: 0x1d2808, Func Offset: 0xa8
	// Line 855, Address: 0x1d2814, Func Offset: 0xb4
	// Line 858, Address: 0x1d2818, Func Offset: 0xb8
	// Line 859, Address: 0x1d2828, Func Offset: 0xc8
	// Line 862, Address: 0x1d2830, Func Offset: 0xd0
	// Line 863, Address: 0x1d2840, Func Offset: 0xe0
	// Line 867, Address: 0x1d2848, Func Offset: 0xe8
	// Line 868, Address: 0x1d2858, Func Offset: 0xf8
	// Line 869, Address: 0x1d2864, Func Offset: 0x104
	// Line 868, Address: 0x1d2868, Func Offset: 0x108
	// Line 872, Address: 0x1d2870, Func Offset: 0x110
	// Line 873, Address: 0x1d2888, Func Offset: 0x128
	// Line 874, Address: 0x1d288c, Func Offset: 0x12c
	// Line 877, Address: 0x1d2890, Func Offset: 0x130
	// Line 878, Address: 0x1d2898, Func Offset: 0x138
	// Line 882, Address: 0x1d28a8, Func Offset: 0x148
	// Line 885, Address: 0x1d28b4, Func Offset: 0x154
	// Line 883, Address: 0x1d28b8, Func Offset: 0x158
	// Line 884, Address: 0x1d28bc, Func Offset: 0x15c
	// Line 886, Address: 0x1d28c4, Func Offset: 0x164
	// Line 887, Address: 0x1d28c8, Func Offset: 0x168
	// Line 888, Address: 0x1d28d0, Func Offset: 0x170
	// Func End, Address: 0x1d28e4, Func Offset: 0x184
}

// 
// Start address: 0x1d28f0
void Camera3ldkAFSearch(sfObj* obj)
{
	float target[4];
	int objType;
	int distRet;
	int sightRet;
	// Line 912, Address: 0x1d28f0, Func Offset: 0
	// Line 930, Address: 0x1d2900, Func Offset: 0x10
	// Line 931, Address: 0x1d290c, Func Offset: 0x1c
	// Line 932, Address: 0x1d2914, Func Offset: 0x24
	// Line 938, Address: 0x1d2950, Func Offset: 0x60
	// Line 939, Address: 0x1d295c, Func Offset: 0x6c
	// Line 940, Address: 0x1d2968, Func Offset: 0x78
	// Line 942, Address: 0x1d2970, Func Offset: 0x80
	// Line 943, Address: 0x1d2988, Func Offset: 0x98
	// Line 946, Address: 0x1d2990, Func Offset: 0xa0
	// Line 951, Address: 0x1d299c, Func Offset: 0xac
	// Line 952, Address: 0x1d29a0, Func Offset: 0xb0
	// Func End, Address: 0x1d29b4, Func Offset: 0xc4
}

// 
// Start address: 0x1d29c0
void Camera3ldkAFCancel()
{
	// Line 957, Address: 0x1d29c0, Func Offset: 0
	// Line 958, Address: 0x1d29c8, Func Offset: 0x8
	// Func End, Address: 0x1d29d0, Func Offset: 0x10
}

// 
// Start address: 0x1d29d0
int Camera3ldkAFEjectItem(sfObj* obj)
{
	int objID;
	// Line 962, Address: 0x1d29d0, Func Offset: 0
	// Line 964, Address: 0x1d29d4, Func Offset: 0x4
	// Line 965, Address: 0x1d29dc, Func Offset: 0xc
	// Line 966, Address: 0x1d29e4, Func Offset: 0x14
	// Line 968, Address: 0x1d29e8, Func Offset: 0x18
	// Line 969, Address: 0x1d29f0, Func Offset: 0x20
	// Line 971, Address: 0x1d29f8, Func Offset: 0x28
	// Line 972, Address: 0x1d2a00, Func Offset: 0x30
	// Func End, Address: 0x1d2a0c, Func Offset: 0x3c
}

// 
// Start address: 0x1d2a10
int Camera3ldkAFCheckItemDistance(float* item_pos)
{
	_cam3Work* camWork;
	float t2c[4];
	float camPos[4];
	// Line 976, Address: 0x1d2a10, Func Offset: 0
	// Line 975, Address: 0x1d2a14, Func Offset: 0x4
	// Line 976, Address: 0x1d2a18, Func Offset: 0x8
	// Line 980, Address: 0x1d2a1c, Func Offset: 0xc
	// Line 983, Address: 0x1d2a28, Func Offset: 0x18
	// Line 981, Address: 0x1d2a2c, Func Offset: 0x1c
	// Line 983, Address: 0x1d2a30, Func Offset: 0x20
	// Line 984, Address: 0x1d2a44, Func Offset: 0x34
	// Line 985, Address: 0x1d2a80, Func Offset: 0x70
	// Line 988, Address: 0x1d2a88, Func Offset: 0x78
	// Line 989, Address: 0x1d2a90, Func Offset: 0x80
	// Func End, Address: 0x1d2a98, Func Offset: 0x88
}

// 
// Start address: 0x1d2aa0
int Camera3ldkAFCheckItemInSight(float* target)
{
	_cam3Work* camWork;
	float tv[4];
	float camZ[4];
	float dot;
	int x0;
	int y0;
	int x1;
	int y1;
	// Line 992, Address: 0x1d2aa0, Func Offset: 0
	// Line 1005, Address: 0x1d2ab0, Func Offset: 0x10
	// Line 1006, Address: 0x1d2ab8, Func Offset: 0x18
	// Line 1007, Address: 0x1d2ad8, Func Offset: 0x38
	// Line 1009, Address: 0x1d2b04, Func Offset: 0x64
	// Line 1010, Address: 0x1d2b28, Func Offset: 0x88
	// Line 1011, Address: 0x1d2b44, Func Offset: 0xa4
	// Line 1012, Address: 0x1d2b4c, Func Offset: 0xac
	// Line 1015, Address: 0x1d2b50, Func Offset: 0xb0
	// Line 1024, Address: 0x1d2b58, Func Offset: 0xb8
	// Line 1016, Address: 0x1d2b5c, Func Offset: 0xbc
	// Line 1019, Address: 0x1d2b64, Func Offset: 0xc4
	// Line 1016, Address: 0x1d2b68, Func Offset: 0xc8
	// Line 1020, Address: 0x1d2b6c, Func Offset: 0xcc
	// Line 1021, Address: 0x1d2b70, Func Offset: 0xd0
	// Line 1024, Address: 0x1d2b74, Func Offset: 0xd4
	// Line 1026, Address: 0x1d2bc0, Func Offset: 0x120
	// Line 1030, Address: 0x1d2bc8, Func Offset: 0x128
	// Line 1031, Address: 0x1d2bd0, Func Offset: 0x130
	// Func End, Address: 0x1d2be0, Func Offset: 0x140
}

// 
// Start address: 0x1d2be0
void cam3ldkAFInitItemList()
{
	// Line 1035, Address: 0x1d2be0, Func Offset: 0
	// Line 1037, Address: 0x1d2be4, Func Offset: 0x4
	// Line 1035, Address: 0x1d2be8, Func Offset: 0x8
	// Line 1037, Address: 0x1d2bec, Func Offset: 0xc
	// Line 1038, Address: 0x1d2bfc, Func Offset: 0x1c
	// Line 1039, Address: 0x1d2c08, Func Offset: 0x28
	// Line 1040, Address: 0x1d2c14, Func Offset: 0x34
	// Func End, Address: 0x1d2c20, Func Offset: 0x40
}

// 
// Start address: 0x1d2c20
_cam3AFItem* cam3AFSetFocusItem()
{
	_cam3AFItem* pItem;
	int i;
	// Line 1092, Address: 0x1d2c20, Func Offset: 0
	// Line 1098, Address: 0x1d2c30, Func Offset: 0x10
	// Line 1099, Address: 0x1d2c3c, Func Offset: 0x1c
	// Line 1100, Address: 0x1d2c44, Func Offset: 0x24
	// Line 1101, Address: 0x1d2c4c, Func Offset: 0x2c
	// Line 1104, Address: 0x1d2c50, Func Offset: 0x30
	// Line 1106, Address: 0x1d2c74, Func Offset: 0x54
	// Line 1107, Address: 0x1d2c7c, Func Offset: 0x5c
	// Line 1108, Address: 0x1d2c80, Func Offset: 0x60
	// Line 1109, Address: 0x1d2c8c, Func Offset: 0x6c
	// Line 1110, Address: 0x1d2c90, Func Offset: 0x70
	// Line 1113, Address: 0x1d2ca4, Func Offset: 0x84
	// Line 1115, Address: 0x1d2cc0, Func Offset: 0xa0
	// Line 1119, Address: 0x1d2cc8, Func Offset: 0xa8
	// Line 1120, Address: 0x1d2ce8, Func Offset: 0xc8
	// Line 1121, Address: 0x1d2cec, Func Offset: 0xcc
	// Line 1124, Address: 0x1d2cf8, Func Offset: 0xd8
	// Line 1128, Address: 0x1d2d08, Func Offset: 0xe8
	// Line 1129, Address: 0x1d2d14, Func Offset: 0xf4
	// Line 1130, Address: 0x1d2d1c, Func Offset: 0xfc
	// Line 1129, Address: 0x1d2d20, Func Offset: 0x100
	// Line 1132, Address: 0x1d2d28, Func Offset: 0x108
	// Line 1129, Address: 0x1d2d2c, Func Offset: 0x10c
	// Line 1132, Address: 0x1d2d30, Func Offset: 0x110
	// Line 1134, Address: 0x1d2d40, Func Offset: 0x120
	// Line 1136, Address: 0x1d2d48, Func Offset: 0x128
	// Line 1138, Address: 0x1d2d68, Func Offset: 0x148
	// Line 1139, Address: 0x1d2d70, Func Offset: 0x150
	// Func End, Address: 0x1d2d7c, Func Offset: 0x15c
}

// 
// Start address: 0x1d2d80
float cam3ldkAFGetDotItem2Cam(float* item_pos)
{
	_cam3Work* camWork;
	float i2c[4];
	float camZ[4];
	float dot;
	// Line 1144, Address: 0x1d2d80, Func Offset: 0
	// Line 1143, Address: 0x1d2d84, Func Offset: 0x4
	// Line 1144, Address: 0x1d2d88, Func Offset: 0x8
	// Line 1151, Address: 0x1d2d8c, Func Offset: 0xc
	// Line 1152, Address: 0x1d2da8, Func Offset: 0x28
	// Line 1154, Address: 0x1d2dd4, Func Offset: 0x54
	// Line 1156, Address: 0x1d2e00, Func Offset: 0x80
	// Line 1158, Address: 0x1d2e24, Func Offset: 0xa4
	// Func End, Address: 0x1d2e2c, Func Offset: 0xac
}

// 
// Start address: 0x1d2e30
int cam3AFSearchItem(sfObj* obj, int eject)
{
	_cam3AFItem* pItem;
	_cam3AFItem* firstValid;
	float itemPos[4];
	int ln;
	int validNum;
	// Line 1162, Address: 0x1d2e30, Func Offset: 0
	// Line 1169, Address: 0x1d2e34, Func Offset: 0x4
	// Line 1162, Address: 0x1d2e38, Func Offset: 0x8
	// Line 1169, Address: 0x1d2e64, Func Offset: 0x34
	// Line 1170, Address: 0x1d2e7c, Func Offset: 0x4c
	// Line 1171, Address: 0x1d2e84, Func Offset: 0x54
	// Line 1173, Address: 0x1d2e88, Func Offset: 0x58
	// Line 1174, Address: 0x1d2e94, Func Offset: 0x64
	// Line 1175, Address: 0x1d2ea8, Func Offset: 0x78
	// Line 1176, Address: 0x1d2eac, Func Offset: 0x7c
	// Line 1177, Address: 0x1d2eb8, Func Offset: 0x88
	// Line 1178, Address: 0x1d2ec0, Func Offset: 0x90
	// Line 1179, Address: 0x1d2ec4, Func Offset: 0x94
	// Line 1181, Address: 0x1d2ec8, Func Offset: 0x98
	// Line 1182, Address: 0x1d2ed4, Func Offset: 0xa4
	// Line 1185, Address: 0x1d2edc, Func Offset: 0xac
	// Line 1187, Address: 0x1d2ee0, Func Offset: 0xb0
	// Line 1188, Address: 0x1d2efc, Func Offset: 0xcc
	// Line 1189, Address: 0x1d2f08, Func Offset: 0xd8
	// Line 1190, Address: 0x1d2f18, Func Offset: 0xe8
	// Line 1192, Address: 0x1d2f2c, Func Offset: 0xfc
	// Line 1193, Address: 0x1d2f38, Func Offset: 0x108
	// Line 1194, Address: 0x1d2f3c, Func Offset: 0x10c
	// Line 1195, Address: 0x1d2f40, Func Offset: 0x110
	// Line 1196, Address: 0x1d2f50, Func Offset: 0x120
	// Line 1195, Address: 0x1d2f54, Func Offset: 0x124
	// Line 1196, Address: 0x1d2f5c, Func Offset: 0x12c
	// Line 1197, Address: 0x1d2f68, Func Offset: 0x138
	// Line 1200, Address: 0x1d2f70, Func Offset: 0x140
	// Line 1202, Address: 0x1d2f84, Func Offset: 0x154
	// Line 1200, Address: 0x1d2f88, Func Offset: 0x158
	// Line 1202, Address: 0x1d2f8c, Func Offset: 0x15c
	// Line 1204, Address: 0x1d2f98, Func Offset: 0x168
	// Line 1203, Address: 0x1d2f9c, Func Offset: 0x16c
	// Line 1204, Address: 0x1d2fa0, Func Offset: 0x170
	// Line 1205, Address: 0x1d2fac, Func Offset: 0x17c
	// Line 1207, Address: 0x1d2fb0, Func Offset: 0x180
	// Line 1209, Address: 0x1d2fb8, Func Offset: 0x188
	// Line 1211, Address: 0x1d2fc8, Func Offset: 0x198
	// Line 1212, Address: 0x1d2fd0, Func Offset: 0x1a0
	// Line 1216, Address: 0x1d2fd8, Func Offset: 0x1a8
	// Line 1219, Address: 0x1d2fe0, Func Offset: 0x1b0
	// Line 1221, Address: 0x1d2fec, Func Offset: 0x1bc
	// Line 1222, Address: 0x1d2ffc, Func Offset: 0x1cc
	// Line 1223, Address: 0x1d3008, Func Offset: 0x1d8
	// Line 1225, Address: 0x1d3010, Func Offset: 0x1e0
	// Line 1226, Address: 0x1d3018, Func Offset: 0x1e8
	// Line 1225, Address: 0x1d301c, Func Offset: 0x1ec
	// Line 1226, Address: 0x1d3024, Func Offset: 0x1f4
	// Line 1227, Address: 0x1d302c, Func Offset: 0x1fc
	// Line 1229, Address: 0x1d3030, Func Offset: 0x200
	// Line 1230, Address: 0x1d3038, Func Offset: 0x208
	// Func End, Address: 0x1d3064, Func Offset: 0x234
}

// 
// Start address: 0x1d3070
int cam3ldkAFEjectItem(int id)
{
	_cam3AFItem* pItem;
	int i;
	// Line 1247, Address: 0x1d3070, Func Offset: 0
	// Line 1251, Address: 0x1d3090, Func Offset: 0x20
	// Line 1252, Address: 0x1d3098, Func Offset: 0x28
	// Line 1253, Address: 0x1d30a4, Func Offset: 0x34
	// Line 1257, Address: 0x1d30b0, Func Offset: 0x40
	// Line 1258, Address: 0x1d30c0, Func Offset: 0x50
	// Line 1259, Address: 0x1d30d0, Func Offset: 0x60
	// Line 1261, Address: 0x1d30e4, Func Offset: 0x74
	// Line 1262, Address: 0x1d30f0, Func Offset: 0x80
	// Line 1263, Address: 0x1d30f4, Func Offset: 0x84
	// Line 1264, Address: 0x1d30f8, Func Offset: 0x88
	// Line 1265, Address: 0x1d3108, Func Offset: 0x98
	// Line 1264, Address: 0x1d310c, Func Offset: 0x9c
	// Line 1266, Address: 0x1d3110, Func Offset: 0xa0
	// Line 1264, Address: 0x1d3114, Func Offset: 0xa4
	// Line 1265, Address: 0x1d3118, Func Offset: 0xa8
	// Line 1266, Address: 0x1d3124, Func Offset: 0xb4
	// Line 1268, Address: 0x1d312c, Func Offset: 0xbc
	// Line 1270, Address: 0x1d3140, Func Offset: 0xd0
	// Line 1271, Address: 0x1d3148, Func Offset: 0xd8
	// Func End, Address: 0x1d3164, Func Offset: 0xf4
}

