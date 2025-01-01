typedef struct sgQTNode;
typedef struct sfObj;
typedef struct BattleHit;
typedef struct sfCldPart;
typedef struct EnemyPlayerDirectionDifferentData;
typedef struct sgSVModel;
typedef struct EnemyPlayerDistanceMeasureData;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _anon0;
typedef enum EnemyPlayerType : unsigned char;
typedef struct _anon1;
typedef struct sgQTObject;
typedef struct sfCharacter;
typedef struct sgIKHandle;
typedef struct sgAnime;
typedef struct sgBone;
typedef struct EnemyPlayerInfo;
typedef struct sfOffsetAABB;
typedef struct _PLAYER_WORK;
typedef enum BattleHitResult : unsigned char;
typedef union sfCldBody;
typedef struct EnemyPlayerInfoWork;
typedef enum PlayerExtStatus : unsigned char;
typedef struct EnemyClHitResult;
typedef union _anon2;
typedef struct sfCldObject;
typedef struct _anon3;
typedef struct _GAME_WORK;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef enum BattleAttackKind : unsigned char;
typedef enum GameItem : unsigned char;

typedef void(*type_6)(_anon0*, int, int, float*);
typedef sgIKSolveResult(*type_8)();
typedef void(*type_15)(sfObj*);
typedef void(*type_20)(sgAnime*, int);
typedef void(*type_21)(sfObj*);

typedef sfCldPart* type_0[6];
typedef unsigned char type_1[3];
typedef float type_2[4][4];
typedef float type_3[4][2];
typedef float type_4[4];
typedef float type_5[4];
typedef int type_7[1];
typedef int type_9[1];
typedef EnemyPlayerInfo type_10[3];
typedef _anon2 type_11[256];
typedef unsigned char type_12[3];
typedef int type_13[1];
typedef float type_14[4];
typedef int type_16[1];
typedef void* type_17[4];
typedef int type_18[1];
typedef int type_19[1];
typedef short type_22[2];
typedef unsigned short type_23[2];
typedef char type_24[4];
typedef unsigned char type_25[4];
typedef float type_26[1];
typedef _PLAYER_WORK type_27[2];
typedef int type_28[1];
typedef int type_29[1];
typedef unsigned char type_30[4];
typedef _anon8 type_31[2];

struct sgQTNode
{
	int dummy;
};

struct sfObj
{
	_anon2 fwork[256];
	_anon2* work;
	void(*func)(sfObj*);
	_anon2* work_pt0;
	_anon2* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon2* sys_work;
	_anon2* scene_work;
	_anon2* event_work;
	_anon2* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct BattleHit
{
	BattleAttackKind attack_kind;
	float damage;
	float shock;
	sfCldObject* cld_object;
	float origin_position[4];
	float attack_direction[4];
	BattleHitResult result;
	int flags;
	unsigned int id;
	void* origin;
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

struct EnemyPlayerDirectionDifferentData
{
	float* pos;
	float angle;
	EnemyPlayerType type;
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct EnemyPlayerDistanceMeasureData
{
	float* pos;
	float dist;
	EnemyPlayerType type;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct _anon0
{
	unsigned long tex0;
	unsigned long clamp;
};

enum EnemyPlayerType : unsigned char
{
	ENEMY_PLAYER_TYPE_PLAYER,
	ENEMY_PLAYER_TYPE_HEROINE,
	ENEMY_PLAYER_TYPE_NPC,
	ENEMY_PLAYER_TYPE_MAX,
	ENEMY_PLAYER_TYPE_NOTHING = 0xff
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

struct sgQTObject
{
	_anon5 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon1 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
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

struct EnemyPlayerInfo
{
	float compel_move[4];
	BattleHit* battle_hit;
	float eye_height;
	float ceiling_height;
};

struct sfOffsetAABB
{
	_anon6 aabb;
	float offset[4];
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
	_anon3* anim_ctrl;
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

enum BattleHitResult : unsigned char
{
	GB_HIT_RES_NONE,
	GB_HIT_RES_PLAYER_HIT,
	GB_HIT_RES_ENEMY_HIT,
	GB_HIT_RES_EILEEN_HIT,
	GB_HIT_RES_END
};

union sfCldBody
{
	_anon7 obb;
	_anon6 aabb;
	sfOffsetAABB offset_aabb;
	_anon4 line;
	_anon5 sphere;
};

struct EnemyPlayerInfoWork
{
	EnemyPlayerInfo pi[3];
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

struct EnemyClHitResult
{
};

union _anon2
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

struct _anon3
{
	int dummy;
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

struct _anon4
{
	float start[4];
	float end[4];
};

struct _anon5
{
	float center[4];
	float radius;
};

struct _anon6
{
	float bmin[4];
	float bmax[4];
};

struct _anon7
{
	float mat[4][4];
	float half_w[4];
};

struct _anon8
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

enum BattleAttackKind : unsigned char
{
	BAK_NOTHING,
	BAK_UNDEFINED,
	BAK_PLAYER_TABLE_START,
	BAK_PLAYER_HAND_GUN = 0x2,
	BAK_PLAYER_REVOLVER,
	BAK_PLAYER_PIPE,
	BAK_PLAYER_PIPE_ST,
	BAK_PLAYER_CUTTER,
	BAK_PLAYER_CUTTER_ST,
	BAK_PLAYER_BAT,
	BAK_PLAYER_BAT_ST,
	BAK_PLAYER_DRIVER,
	BAK_PLAYER_DRIVER_ST,
	BAK_PLAYER_SPOON,
	BAK_PLAYER_SPOON_ST,
	BAK_PLAYER_MID_MASHY,
	BAK_PLAYER_MID_MASHY_ST,
	BAK_PLAYER_MASHY_IRON,
	BAK_PLAYER_MASHY_IRON_ST,
	BAK_PLAYER_MASHY,
	BAK_PLAYER_MASHY_ST,
	BAK_PLAYER_SPADE_MASHY,
	BAK_PLAYER_SPADE_MASHY_ST,
	BAK_PLAYER_MASHY_NIBLICK,
	BAK_PLAYER_MASHY_NIBLICK_ST,
	BAK_PLAYER_PITCHER,
	BAK_PLAYER_PITCHER_ST,
	BAK_PLAYER_NIBLICK,
	BAK_PLAYER_NIBLICK_ST,
	BAK_PLAYER_PITCHING_WEDGE,
	BAK_PLAYER_PITCHING_WEDGE_ST,
	BAK_PLAYER_SAND_WEDGE,
	BAK_PLAYER_SAND_WEDGE_ST,
	BAK_PLAYER_PUTTER,
	BAK_PLAYER_PUTTER_ST,
	BAK_PLAYER_BOTTLE,
	BAK_PLAYER_BROKEN_BOTTLE,
	BAK_PLAYER_SCOOP,
	BAK_PLAYER_SCOOP_ST,
	BAK_PLAYER_HATCHET,
	BAK_PLAYER_HATCHET_ST,
	BAK_PLAYER_PICK,
	BAK_PLAYER_PICK_ST,
	BAK_PLAYER_STUNGUN,
	BAK_PLAYER_SPRAY,
	BAK_PLAYER_CHAINSAW,
	BAK_PLAYER_CHAINSAW_ST,
	BAK_PLAYER_WOOD_STICK,
	BAK_PLAYER_SILVER_BULLET,
	BAK_PLAYER_FINISH,
	BAK_PLAYER_SCOOP_FINISH,
	BAK_PLAYER_PICK_FINISH,
	BAK_PLAYER_CHAINSAW_FINISH,
	BAK_PLAYER_EIL_HANDBAG_N,
	BAK_PLAYER_EIL_HANDBAG_3_1,
	BAK_PLAYER_EIL_HANDBAG_3_2,
	BAK_PLAYER_EIL_HANDBAG_3_3,
	BAK_PLAYER_EIL_HANDBAG_FINISH,
	BAK_PLAYER_EIL_CLUB_N,
	BAK_PLAYER_EIL_CLUB_3_1,
	BAK_PLAYER_EIL_CLUB_3_2,
	BAK_PLAYER_EIL_CLUB_3_3,
	BAK_PLAYER_EIL_CLUB_FINISH,
	BAK_PLAYER_EIL_ROD_N,
	BAK_PLAYER_EIL_ROD_3_1,
	BAK_PLAYER_EIL_ROD_3_2,
	BAK_PLAYER_EIL_ROD_3_3,
	BAK_PLAYER_EIL_ROD_FINISH,
	BAK_PLAYER_EIL_CHAIN_N,
	BAK_PLAYER_EIL_CHAIN_3_1,
	BAK_PLAYER_EIL_CHAIN_3_2,
	BAK_PLAYER_EIL_CHAIN_3_3,
	BAK_PLAYER_EIL_CHAIN_FINISH,
	BAK_PLAYER_EIL_GUN_N,
	BAK_PLAYER_TABLE_END = 0x48,
	BAK_ENEMY_TABLE_START,
	BAK_MUSH_DEATH = 0x49,
	BAK_BUZZ_BLOODSUCK,
	BAK_BUZZ_PECK,
	BAK_BUZZ_DIVE,
	BAK_KABE_STRIKE,
	BAK_KABE_BRINGDOWN,
	BAK_KABE_SIDEBLOW,
	BAK_KABE_HEADBUTT,
	BAK_WHEEL_DASH,
	BAK_JIN_SCRATCH,
	BAK_JIN_STRIKE,
	BAK_JIN_STAB,
	BAK_JIN_BRINGDOWN,
	BAK_TWN_STRIKE,
	BAK_TWN_JUMP,
	BAK_TWN_TURN,
	BAK_HIL_WALL,
	BAK_HIL_FLOOR,
	BAK_HYENA_DASH,
	BAK_MULTI_HEADBUTT,
	BAK_FLAMES_ATT1,
	BAK_FLAMES_ATT2,
	BAK_FAT_SING,
	BAK_FAT_DASH,
	BAK_FAT_DASH2,
	BAK_FAT_BOMB,
	BAK_SCR_ATT1,
	BAK_SCR_ATT2,
	BAK_SCR_ATT4,
	BAK_KILLER_SHOOT,
	BAK_KILLER_RAPIDFIRE,
	BAK_KILLER_PIPE,
	BAK_KILLER_PIPE_ST,
	BAK_KILLER_CHAINSAW_STAB,
	BAK_KILLER_CHAINSAW_SHAKE,
	BAK_KILLER_BLOWOFF,
	BAK_ENEMY_TABLE_END = 0x6c,
	BAK_OTHER_TABLE_START,
	BAK_GHOSTSTAIN_FLICK = 0x6d,
	BAK_OTHER_TABLE_END = 0x6d,
	BAK_MAX_NUMBER
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

float sg_vector_unit_y[4];
_anon8 player_ext_info[2];
_GAME_WORK gamew;
EnemyPlayerInfoWork en_playerinfo;
_PLAYER_WORK playerw[2];
float sg_vector_zero[4];
float sg_vector_unit_w[4];
float en_vector_unit_y_minus[4];

int trans_to_gtype(EnemyPlayerType type);
void EnemyGetPlayerInfo();
float* EnemyGetPlayerPos(EnemyPlayerType type);
float* EnemyGetPlayerRot(EnemyPlayerType type);
float EnemyGetPlayerDir(EnemyPlayerType type);
float* EnemyGetPlayerEyePos(EnemyPlayerType type);
float EnemyGetPlayerEyeHeight(EnemyPlayerType type);
float* EnemyGetPlayerEyeDir(EnemyPlayerType type);
float EnemyGetPlayerFloorHeight(EnemyPlayerType type);
float EnemyGetPlayerHPRate(EnemyPlayerType type);
float* EnemyGetPlayersWeaponPos(EnemyPlayerType type);
float* EnemyGetPlayerCompelMove(EnemyPlayerType type);
int EnemyIsPlayerExistence(EnemyPlayerType type);
int EnemyIsPlayerFighting(EnemyPlayerType type, sfObj* obj);
int EnemyIsPlayerAttacking(EnemyPlayerType type, sfObj* obj);
int EnemyIsPlayerStrengthAttacking(EnemyPlayerType type, sfObj* obj);
int EnemyIsPlayerInvincible(EnemyPlayerType type);
int EnemyIsPlayerRunning(EnemyPlayerType type);
int EnemyIsPlayerStealthily(EnemyPlayerType type);
int EnemyIsPlayerAvoiding(EnemyPlayerType type);
int EnemyIsPlayerInAction(EnemyPlayerType type);
int EnemyIsPlayerCharging(EnemyPlayerType type);
int EnemyIsPlayerInDamage(EnemyPlayerType type);
int EnemyIsPlayerDead(EnemyPlayerType type);
int EnemyIsPlayerInEvent();
int EnemyMayAttackPlayer(EnemyPlayerType type);
int EnemyDoPlayerHaveSpear();
int EnemyCheckPlayerArrival(EnemyPlayerType type, float* pos, float check_height);
int EnemyCheckPlayerInSamePartition(EnemyPlayerType type, float* pos);
int EnemyGetPlayersWeapon(EnemyPlayerType type);
int EnemyIsPlayerWeaponGun(EnemyPlayerType type);
int EnemyIsPlayerWeaponAiming(EnemyPlayerType type);
float EnemyGetPlayerDirDiff(EnemyPlayerType type, float* pos);
float EnemyGetPlayerDirDiffXZ(EnemyPlayerType type, float* pos);
float EnemyGetPlayerDirDiff2XZ(EnemyPlayerType type, float* dir);
sfObj* EnemyGetPlayerObj(EnemyPlayerType type);
void* EnemyGetPlayerCharacter(EnemyPlayerType type);
int EnemyCheckPlayerObj(sfObj* obj);
void* EnemyGetPlayerCollideObj(EnemyPlayerType type);
EnemyPlayerType EnemyCheckPlayerCollideObj(void* cld);
EnemyPlayerType EnemySearchNearestPlayer(float* pos);
EnemyPlayerType EnemySearchNearestPlayerWithHit(float* pos);
float EnemyPlayerDistance(sfObj* obj, EnemyPlayerType type);
float EnemyPlayerDistanceXZ(sfObj* obj, EnemyPlayerType type);
float EnemyPlayerDistanceY(sfObj* obj, EnemyPlayerType type);
float EnemyPlayerDirection(sfObj* obj, EnemyPlayerType type);
int EnemyEDPlayerDirThisSide(void* data);
int EnemyEDPlayerDirOtherSide(void* data);
void EnemyPlayerPush(EnemyPlayerType type, float* move);
void EnemyPlayerTurn(EnemyPlayerType type, float* rot);
void EnemyPlayerTurnAngle(EnemyPlayerType type, float rot);
int EnemyActionLevelNow();
int EnemyActionLevelNowShift();
int EnemyActionLevelIsOverNormal();
int EnemyIsGameOver();

// 
// Start address: 0x1c0530
int trans_to_gtype(EnemyPlayerType type)
{
	int gtype;
	// Line 64, Address: 0x1c0530, Func Offset: 0
	// Line 65, Address: 0x1c055c, Func Offset: 0x2c
	// Line 67, Address: 0x1c0560, Func Offset: 0x30
	// Line 71, Address: 0x1c0568, Func Offset: 0x38
	// Line 74, Address: 0x1c0570, Func Offset: 0x40
	// Line 76, Address: 0x1c0574, Func Offset: 0x44
	// Line 78, Address: 0x1c0578, Func Offset: 0x48
	// Func End, Address: 0x1c0580, Func Offset: 0x50
}

// 
// Start address: 0x1c0580
void EnemyGetPlayerInfo()
{
	EnemyPlayerInfo* pif;
	_PLAYER_WORK* pw;
	int i;
	int cw;
	int t;
	float* ppos;
	float vec[4];
	EnemyClHitResult* cres;
	BattleHit* bh;
	// Line 106, Address: 0x1c0580, Func Offset: 0
	// Line 113, Address: 0x1c0598, Func Offset: 0x18
	// Line 116, Address: 0x1c05a4, Func Offset: 0x24
	// Line 114, Address: 0x1c05ac, Func Offset: 0x2c
	// Line 115, Address: 0x1c05b0, Func Offset: 0x30
	// Line 116, Address: 0x1c05b4, Func Offset: 0x34
	// Line 114, Address: 0x1c05b8, Func Offset: 0x38
	// Line 116, Address: 0x1c05bc, Func Offset: 0x3c
	// Line 117, Address: 0x1c05e8, Func Offset: 0x68
	// Line 118, Address: 0x1c05f0, Func Offset: 0x70
	// Line 119, Address: 0x1c05f4, Func Offset: 0x74
	// Line 122, Address: 0x1c0608, Func Offset: 0x88
	// Line 123, Address: 0x1c0624, Func Offset: 0xa4
	// Line 124, Address: 0x1c0628, Func Offset: 0xa8
	// Line 126, Address: 0x1c062c, Func Offset: 0xac
	// Line 127, Address: 0x1c0630, Func Offset: 0xb0
	// Line 128, Address: 0x1c0640, Func Offset: 0xc0
	// Line 129, Address: 0x1c0644, Func Offset: 0xc4
	// Line 130, Address: 0x1c064c, Func Offset: 0xcc
	// Line 131, Address: 0x1c0650, Func Offset: 0xd0
	// Line 132, Address: 0x1c065c, Func Offset: 0xdc
	// Line 133, Address: 0x1c0670, Func Offset: 0xf0
	// Line 132, Address: 0x1c0674, Func Offset: 0xf4
	// Line 133, Address: 0x1c0680, Func Offset: 0x100
	// Line 134, Address: 0x1c0698, Func Offset: 0x118
	// Line 145, Address: 0x1c06a0, Func Offset: 0x120
	// Line 146, Address: 0x1c06d0, Func Offset: 0x150
	// Line 147, Address: 0x1c06e8, Func Offset: 0x168
	// Line 148, Address: 0x1c0700, Func Offset: 0x180
	// Line 149, Address: 0x1c0708, Func Offset: 0x188
	// Line 158, Address: 0x1c070c, Func Offset: 0x18c
	// Line 159, Address: 0x1c0718, Func Offset: 0x198
	// Line 210, Address: 0x1c0720, Func Offset: 0x1a0
	// Line 211, Address: 0x1c0728, Func Offset: 0x1a8
	// Line 213, Address: 0x1c0734, Func Offset: 0x1b4
	// Line 227, Address: 0x1c0740, Func Offset: 0x1c0
	// Line 228, Address: 0x1c075c, Func Offset: 0x1dc
	// Line 229, Address: 0x1c0764, Func Offset: 0x1e4
	// Func End, Address: 0x1c0784, Func Offset: 0x204
}

// 
// Start address: 0x1c0790
float* EnemyGetPlayerPos(EnemyPlayerType type)
{
	float eileen_pos[4];
	float cynthia_pos[4];
	// Line 237, Address: 0x1c0790, Func Offset: 0
	// Line 236, Address: 0x1c0794, Func Offset: 0x4
	// Line 237, Address: 0x1c0798, Func Offset: 0x8
	// Line 238, Address: 0x1c07c4, Func Offset: 0x34
	// Line 240, Address: 0x1c07c8, Func Offset: 0x38
	// Line 241, Address: 0x1c07d4, Func Offset: 0x44
	// Line 242, Address: 0x1c07d8, Func Offset: 0x48
	// Line 244, Address: 0x1c07ec, Func Offset: 0x5c
	// Line 245, Address: 0x1c07f4, Func Offset: 0x64
	// Line 247, Address: 0x1c0800, Func Offset: 0x70
	// Line 248, Address: 0x1c080c, Func Offset: 0x7c
	// Line 251, Address: 0x1c0810, Func Offset: 0x80
	// Line 252, Address: 0x1c081c, Func Offset: 0x8c
	// Line 255, Address: 0x1c0828, Func Offset: 0x98
	// Line 256, Address: 0x1c0850, Func Offset: 0xc0
	// Func End, Address: 0x1c085c, Func Offset: 0xcc
}

// 
// Start address: 0x1c0860
float* EnemyGetPlayerRot(EnemyPlayerType type)
{
	float eileen_rot[4];
	float cynthia_rot[4];
	// Line 264, Address: 0x1c0860, Func Offset: 0
	// Line 263, Address: 0x1c0864, Func Offset: 0x4
	// Line 264, Address: 0x1c0868, Func Offset: 0x8
	// Line 265, Address: 0x1c0894, Func Offset: 0x34
	// Line 267, Address: 0x1c0898, Func Offset: 0x38
	// Line 268, Address: 0x1c08a4, Func Offset: 0x44
	// Line 269, Address: 0x1c08a8, Func Offset: 0x48
	// Line 271, Address: 0x1c08bc, Func Offset: 0x5c
	// Line 272, Address: 0x1c08c4, Func Offset: 0x64
	// Line 274, Address: 0x1c08d0, Func Offset: 0x70
	// Line 275, Address: 0x1c08dc, Func Offset: 0x7c
	// Line 278, Address: 0x1c08e0, Func Offset: 0x80
	// Line 279, Address: 0x1c08ec, Func Offset: 0x8c
	// Line 282, Address: 0x1c08f8, Func Offset: 0x98
	// Line 283, Address: 0x1c0928, Func Offset: 0xc8
	// Func End, Address: 0x1c0934, Func Offset: 0xd4
}

// 
// Start address: 0x1c0940
float EnemyGetPlayerDir(EnemyPlayerType type)
{
	// Line 291, Address: 0x1c0940, Func Offset: 0
	// Line 290, Address: 0x1c0944, Func Offset: 0x4
	// Line 291, Address: 0x1c0948, Func Offset: 0x8
	// Line 292, Address: 0x1c0974, Func Offset: 0x34
	// Line 294, Address: 0x1c0978, Func Offset: 0x38
	// Line 295, Address: 0x1c0984, Func Offset: 0x44
	// Line 296, Address: 0x1c0988, Func Offset: 0x48
	// Line 297, Address: 0x1c0994, Func Offset: 0x54
	// Line 299, Address: 0x1c0998, Func Offset: 0x58
	// Line 301, Address: 0x1c09b0, Func Offset: 0x70
	// Line 302, Address: 0x1c09e0, Func Offset: 0xa0
	// Func End, Address: 0x1c09ec, Func Offset: 0xac
}

// 
// Start address: 0x1c09f0
float* EnemyGetPlayerEyePos(EnemyPlayerType type)
{
	float eileen_eye[4];
	// Line 310, Address: 0x1c09f0, Func Offset: 0
	// Line 309, Address: 0x1c09f4, Func Offset: 0x4
	// Line 310, Address: 0x1c09f8, Func Offset: 0x8
	// Line 311, Address: 0x1c0a24, Func Offset: 0x34
	// Line 313, Address: 0x1c0a28, Func Offset: 0x38
	// Line 314, Address: 0x1c0a34, Func Offset: 0x44
	// Line 315, Address: 0x1c0a38, Func Offset: 0x48
	// Line 316, Address: 0x1c0a44, Func Offset: 0x54
	// Line 319, Address: 0x1c0a48, Func Offset: 0x58
	// Line 320, Address: 0x1c0a54, Func Offset: 0x64
	// Line 321, Address: 0x1c0a64, Func Offset: 0x74
	// Line 320, Address: 0x1c0a6c, Func Offset: 0x7c
	// Line 321, Address: 0x1c0a74, Func Offset: 0x84
	// Line 323, Address: 0x1c0a7c, Func Offset: 0x8c
	// Line 324, Address: 0x1c0a80, Func Offset: 0x90
	// Line 325, Address: 0x1c0ab0, Func Offset: 0xc0
	// Func End, Address: 0x1c0abc, Func Offset: 0xcc
}

// 
// Start address: 0x1c0ac0
float EnemyGetPlayerEyeHeight(EnemyPlayerType type)
{
	// Line 333, Address: 0x1c0ac4, Func Offset: 0x4
	// Line 335, Address: 0x1c0ae0, Func Offset: 0x20
	// Line 336, Address: 0x1c0af0, Func Offset: 0x30
	// Line 337, Address: 0x1c0afc, Func Offset: 0x3c
	// Line 338, Address: 0x1c0b00, Func Offset: 0x40
	// Line 339, Address: 0x1c0b18, Func Offset: 0x58
	// Func End, Address: 0x1c0b20, Func Offset: 0x60
}

// 
// Start address: 0x1c0b20
float* EnemyGetPlayerEyeDir(EnemyPlayerType type)
{
	float eileen_eye_dir[4];
	// Line 347, Address: 0x1c0b20, Func Offset: 0
	// Line 346, Address: 0x1c0b24, Func Offset: 0x4
	// Line 347, Address: 0x1c0b28, Func Offset: 0x8
	// Line 348, Address: 0x1c0b54, Func Offset: 0x34
	// Line 350, Address: 0x1c0b58, Func Offset: 0x38
	// Line 351, Address: 0x1c0b64, Func Offset: 0x44
	// Line 352, Address: 0x1c0b68, Func Offset: 0x48
	// Line 353, Address: 0x1c0b74, Func Offset: 0x54
	// Line 356, Address: 0x1c0b78, Func Offset: 0x58
	// Line 357, Address: 0x1c0b90, Func Offset: 0x70
	// Line 359, Address: 0x1c0b9c, Func Offset: 0x7c
	// Line 360, Address: 0x1c0ba0, Func Offset: 0x80
	// Line 361, Address: 0x1c0bd0, Func Offset: 0xb0
	// Func End, Address: 0x1c0bdc, Func Offset: 0xbc
}

// 
// Start address: 0x1c0be0
float EnemyGetPlayerFloorHeight(EnemyPlayerType type)
{
	// Line 383, Address: 0x1c0be0, Func Offset: 0
	// Line 382, Address: 0x1c0be4, Func Offset: 0x4
	// Line 383, Address: 0x1c0be8, Func Offset: 0x8
	// Line 384, Address: 0x1c0c14, Func Offset: 0x34
	// Line 386, Address: 0x1c0c18, Func Offset: 0x38
	// Line 388, Address: 0x1c0c24, Func Offset: 0x44
	// Line 389, Address: 0x1c0c28, Func Offset: 0x48
	// Line 390, Address: 0x1c0c2c, Func Offset: 0x4c
	// Line 391, Address: 0x1c0c30, Func Offset: 0x50
	// Line 392, Address: 0x1c0c60, Func Offset: 0x80
	// Func End, Address: 0x1c0c6c, Func Offset: 0x8c
}

// 
// Start address: 0x1c0c70
float EnemyGetPlayerHPRate(EnemyPlayerType type)
{
	// Line 430, Address: 0x1c0c70, Func Offset: 0
	// Line 429, Address: 0x1c0c74, Func Offset: 0x4
	// Line 430, Address: 0x1c0c78, Func Offset: 0x8
	// Line 433, Address: 0x1c0c90, Func Offset: 0x20
	// Line 435, Address: 0x1c0ca0, Func Offset: 0x30
	// Line 436, Address: 0x1c0cd0, Func Offset: 0x60
	// Func End, Address: 0x1c0cdc, Func Offset: 0x6c
}

// 
// Start address: 0x1c0ce0
float* EnemyGetPlayersWeaponPos(EnemyPlayerType type)
{
	// Line 444, Address: 0x1c0ce0, Func Offset: 0
	// Line 443, Address: 0x1c0ce4, Func Offset: 0x4
	// Line 444, Address: 0x1c0ce8, Func Offset: 0x8
	// Line 445, Address: 0x1c0d14, Func Offset: 0x34
	// Line 447, Address: 0x1c0d18, Func Offset: 0x38
	// Line 449, Address: 0x1c0d24, Func Offset: 0x44
	// Line 450, Address: 0x1c0d28, Func Offset: 0x48
	// Line 452, Address: 0x1c0d38, Func Offset: 0x58
	// Line 453, Address: 0x1c0d68, Func Offset: 0x88
	// Func End, Address: 0x1c0d74, Func Offset: 0x94
}

// 
// Start address: 0x1c0d80
float* EnemyGetPlayerCompelMove(EnemyPlayerType type)
{
	// Line 462, Address: 0x1c0d88, Func Offset: 0x8
	// Line 463, Address: 0x1c0d98, Func Offset: 0x18
	// Line 464, Address: 0x1c0da4, Func Offset: 0x24
	// Line 465, Address: 0x1c0da8, Func Offset: 0x28
	// Line 466, Address: 0x1c0db8, Func Offset: 0x38
	// Func End, Address: 0x1c0dc0, Func Offset: 0x40
}

// 
// Start address: 0x1c0dc0
int EnemyIsPlayerExistence(EnemyPlayerType type)
{
	int r;
	// Line 473, Address: 0x1c0dc0, Func Offset: 0
	// Line 475, Address: 0x1c0dc4, Func Offset: 0x4
	// Line 473, Address: 0x1c0dc8, Func Offset: 0x8
	// Line 475, Address: 0x1c0dcc, Func Offset: 0xc
	// Line 473, Address: 0x1c0dd0, Func Offset: 0x10
	// Line 475, Address: 0x1c0dd4, Func Offset: 0x14
	// Line 476, Address: 0x1c0dfc, Func Offset: 0x3c
	// Line 478, Address: 0x1c0e00, Func Offset: 0x40
	// Line 480, Address: 0x1c0e08, Func Offset: 0x48
	// Line 481, Address: 0x1c0e14, Func Offset: 0x54
	// Line 482, Address: 0x1c0e1c, Func Offset: 0x5c
	// Line 483, Address: 0x1c0e20, Func Offset: 0x60
	// Line 484, Address: 0x1c0e34, Func Offset: 0x74
	// Line 487, Address: 0x1c0e44, Func Offset: 0x84
	// Line 488, Address: 0x1c0e48, Func Offset: 0x88
	// Line 489, Address: 0x1c0e4c, Func Offset: 0x8c
	// Func End, Address: 0x1c0e5c, Func Offset: 0x9c
}

// 
// Start address: 0x1c0e60
int EnemyIsPlayerFighting(EnemyPlayerType type, sfObj* obj)
{
	int r;
	int gtype;
	// Line 513, Address: 0x1c0e60, Func Offset: 0
	// Line 516, Address: 0x1c0e64, Func Offset: 0x4
	// Line 513, Address: 0x1c0e68, Func Offset: 0x8
	// Line 516, Address: 0x1c0e6c, Func Offset: 0xc
	// Line 513, Address: 0x1c0e70, Func Offset: 0x10
	// Line 516, Address: 0x1c0e74, Func Offset: 0x14
	// Line 519, Address: 0x1c0e98, Func Offset: 0x38
	// Line 521, Address: 0x1c0ea0, Func Offset: 0x40
	// Line 522, Address: 0x1c0ea8, Func Offset: 0x48
	// Line 525, Address: 0x1c0ef4, Func Offset: 0x94
	// Line 526, Address: 0x1c0ef8, Func Offset: 0x98
	// Line 528, Address: 0x1c0f08, Func Offset: 0xa8
	// Line 529, Address: 0x1c0f10, Func Offset: 0xb0
	// Line 532, Address: 0x1c0f14, Func Offset: 0xb4
	// Line 533, Address: 0x1c0f18, Func Offset: 0xb8
	// Line 534, Address: 0x1c0f20, Func Offset: 0xc0
	// Func End, Address: 0x1c0f30, Func Offset: 0xd0
}

// 
// Start address: 0x1c0f30
int EnemyIsPlayerAttacking(EnemyPlayerType type, sfObj* obj)
{
	int r;
	int gtype;
	// Line 543, Address: 0x1c0f30, Func Offset: 0
	// Line 546, Address: 0x1c0f34, Func Offset: 0x4
	// Line 543, Address: 0x1c0f38, Func Offset: 0x8
	// Line 546, Address: 0x1c0f3c, Func Offset: 0xc
	// Line 543, Address: 0x1c0f40, Func Offset: 0x10
	// Line 546, Address: 0x1c0f44, Func Offset: 0x14
	// Line 549, Address: 0x1c0f68, Func Offset: 0x38
	// Line 551, Address: 0x1c0f70, Func Offset: 0x40
	// Line 552, Address: 0x1c0f78, Func Offset: 0x48
	// Line 554, Address: 0x1c0fb0, Func Offset: 0x80
	// Line 556, Address: 0x1c0fc0, Func Offset: 0x90
	// Line 557, Address: 0x1c0fc8, Func Offset: 0x98
	// Line 560, Address: 0x1c0fcc, Func Offset: 0x9c
	// Line 561, Address: 0x1c0fd0, Func Offset: 0xa0
	// Line 562, Address: 0x1c0fd8, Func Offset: 0xa8
	// Func End, Address: 0x1c0fe8, Func Offset: 0xb8
}

// 
// Start address: 0x1c0ff0
int EnemyIsPlayerStrengthAttacking(EnemyPlayerType type, sfObj* obj)
{
	int r;
	// Line 571, Address: 0x1c0ff0, Func Offset: 0
	// Line 572, Address: 0x1c0ffc, Func Offset: 0xc
	// Line 573, Address: 0x1c1004, Func Offset: 0x14
	// Line 574, Address: 0x1c1018, Func Offset: 0x28
	// Line 575, Address: 0x1c1030, Func Offset: 0x40
	// Line 580, Address: 0x1c1050, Func Offset: 0x60
	// Line 581, Address: 0x1c1054, Func Offset: 0x64
	// Line 583, Address: 0x1c1058, Func Offset: 0x68
	// Func End, Address: 0x1c1068, Func Offset: 0x78
}

// 
// Start address: 0x1c1070
int EnemyIsPlayerInvincible(EnemyPlayerType type)
{
	int r;
	int gtype;
	// Line 593, Address: 0x1c1070, Func Offset: 0
	// Line 590, Address: 0x1c1074, Func Offset: 0x4
	// Line 593, Address: 0x1c1078, Func Offset: 0x8
	// Line 590, Address: 0x1c1080, Func Offset: 0x10
	// Line 593, Address: 0x1c1084, Func Offset: 0x14
	// Line 596, Address: 0x1c10a0, Func Offset: 0x30
	// Line 598, Address: 0x1c10a8, Func Offset: 0x38
	// Line 599, Address: 0x1c10b0, Func Offset: 0x40
	// Line 601, Address: 0x1c10e8, Func Offset: 0x78
	// Line 602, Address: 0x1c10ec, Func Offset: 0x7c
	// Line 603, Address: 0x1c10f0, Func Offset: 0x80
	// Line 604, Address: 0x1c10f8, Func Offset: 0x88
	// Func End, Address: 0x1c1104, Func Offset: 0x94
}

// 
// Start address: 0x1c1110
int EnemyIsPlayerRunning(EnemyPlayerType type)
{
	// Line 612, Address: 0x1c1110, Func Offset: 0
	// Line 611, Address: 0x1c1114, Func Offset: 0x4
	// Line 612, Address: 0x1c1118, Func Offset: 0x8
	// Line 614, Address: 0x1c1154, Func Offset: 0x44
	// Func End, Address: 0x1c1160, Func Offset: 0x50
}

// 
// Start address: 0x1c1160
int EnemyIsPlayerStealthily(EnemyPlayerType type)
{
	// Line 622, Address: 0x1c1160, Func Offset: 0
	// Line 621, Address: 0x1c1164, Func Offset: 0x4
	// Line 622, Address: 0x1c1168, Func Offset: 0x8
	// Line 624, Address: 0x1c118c, Func Offset: 0x2c
	// Line 625, Address: 0x1c1190, Func Offset: 0x30
	// Line 627, Address: 0x1c1198, Func Offset: 0x38
	// Line 628, Address: 0x1c11d0, Func Offset: 0x70
	// Func End, Address: 0x1c11dc, Func Offset: 0x7c
}

// 
// Start address: 0x1c11e0
int EnemyIsPlayerAvoiding(EnemyPlayerType type)
{
	// Line 636, Address: 0x1c11e0, Func Offset: 0
	// Line 637, Address: 0x1c11f8, Func Offset: 0x18
	// Line 639, Address: 0x1c1220, Func Offset: 0x40
	// Line 641, Address: 0x1c1228, Func Offset: 0x48
	// Line 643, Address: 0x1c1250, Func Offset: 0x70
	// Line 645, Address: 0x1c1258, Func Offset: 0x78
	// Line 646, Address: 0x1c1260, Func Offset: 0x80
	// Func End, Address: 0x1c1268, Func Offset: 0x88
}

// 
// Start address: 0x1c1270
int EnemyIsPlayerInAction(EnemyPlayerType type)
{
	int r;
	// Line 655, Address: 0x1c1270, Func Offset: 0
	// Line 653, Address: 0x1c1274, Func Offset: 0x4
	// Line 655, Address: 0x1c1278, Func Offset: 0x8
	// Line 653, Address: 0x1c1280, Func Offset: 0x10
	// Line 655, Address: 0x1c1284, Func Offset: 0x14
	// Line 658, Address: 0x1c12a0, Func Offset: 0x30
	// Line 660, Address: 0x1c12a8, Func Offset: 0x38
	// Line 661, Address: 0x1c12e4, Func Offset: 0x74
	// Line 662, Address: 0x1c12e8, Func Offset: 0x78
	// Line 664, Address: 0x1c12ec, Func Offset: 0x7c
	// Line 665, Address: 0x1c12f0, Func Offset: 0x80
	// Line 666, Address: 0x1c12f8, Func Offset: 0x88
	// Func End, Address: 0x1c1304, Func Offset: 0x94
}

// 
// Start address: 0x1c1310
int EnemyIsPlayerCharging(EnemyPlayerType type)
{
	// Line 674, Address: 0x1c1310, Func Offset: 0
	// Line 673, Address: 0x1c1314, Func Offset: 0x4
	// Line 674, Address: 0x1c1318, Func Offset: 0x8
	// Line 677, Address: 0x1c1344, Func Offset: 0x34
	// Line 678, Address: 0x1c1348, Func Offset: 0x38
	// Line 680, Address: 0x1c1350, Func Offset: 0x40
	// Line 681, Address: 0x1c1390, Func Offset: 0x80
	// Func End, Address: 0x1c139c, Func Offset: 0x8c
}

// 
// Start address: 0x1c13a0
int EnemyIsPlayerInDamage(EnemyPlayerType type)
{
	int r;
	// Line 690, Address: 0x1c13a0, Func Offset: 0
	// Line 688, Address: 0x1c13a4, Func Offset: 0x4
	// Line 690, Address: 0x1c13a8, Func Offset: 0x8
	// Line 688, Address: 0x1c13b0, Func Offset: 0x10
	// Line 690, Address: 0x1c13b4, Func Offset: 0x14
	// Line 693, Address: 0x1c13d0, Func Offset: 0x30
	// Line 695, Address: 0x1c13d8, Func Offset: 0x38
	// Line 697, Address: 0x1c1424, Func Offset: 0x84
	// Line 698, Address: 0x1c1428, Func Offset: 0x88
	// Line 700, Address: 0x1c142c, Func Offset: 0x8c
	// Line 701, Address: 0x1c1430, Func Offset: 0x90
	// Line 702, Address: 0x1c1438, Func Offset: 0x98
	// Func End, Address: 0x1c1444, Func Offset: 0xa4
}

// 
// Start address: 0x1c1450
int EnemyIsPlayerDead(EnemyPlayerType type)
{
	int r;
	// Line 711, Address: 0x1c1450, Func Offset: 0
	// Line 709, Address: 0x1c1454, Func Offset: 0x4
	// Line 711, Address: 0x1c1458, Func Offset: 0x8
	// Line 709, Address: 0x1c1460, Func Offset: 0x10
	// Line 711, Address: 0x1c1464, Func Offset: 0x14
	// Line 714, Address: 0x1c1480, Func Offset: 0x30
	// Line 716, Address: 0x1c1488, Func Offset: 0x38
	// Line 718, Address: 0x1c14c8, Func Offset: 0x78
	// Line 720, Address: 0x1c14cc, Func Offset: 0x7c
	// Line 721, Address: 0x1c14d0, Func Offset: 0x80
	// Line 722, Address: 0x1c14d8, Func Offset: 0x88
	// Func End, Address: 0x1c14e4, Func Offset: 0x94
}

// 
// Start address: 0x1c14f0
int EnemyIsPlayerInEvent()
{
	// Line 729, Address: 0x1c14f0, Func Offset: 0
	// Line 730, Address: 0x1c14fc, Func Offset: 0xc
	// Func End, Address: 0x1c1504, Func Offset: 0x14
}

// 
// Start address: 0x1c1510
int EnemyMayAttackPlayer(EnemyPlayerType type)
{
	int r;
	// Line 737, Address: 0x1c1510, Func Offset: 0
	// Line 739, Address: 0x1c1514, Func Offset: 0x4
	// Line 737, Address: 0x1c1518, Func Offset: 0x8
	// Line 739, Address: 0x1c151c, Func Offset: 0xc
	// Line 737, Address: 0x1c1520, Func Offset: 0x10
	// Line 739, Address: 0x1c1524, Func Offset: 0x14
	// Line 737, Address: 0x1c1528, Func Offset: 0x18
	// Line 739, Address: 0x1c1530, Func Offset: 0x20
	// Line 741, Address: 0x1c1540, Func Offset: 0x30
	// Line 743, Address: 0x1c1548, Func Offset: 0x38
	// Line 745, Address: 0x1c1568, Func Offset: 0x58
	// Line 747, Address: 0x1c1570, Func Offset: 0x60
	// Line 752, Address: 0x1c15d0, Func Offset: 0xc0
	// Line 754, Address: 0x1c15d4, Func Offset: 0xc4
	// Line 755, Address: 0x1c15d8, Func Offset: 0xc8
	// Line 756, Address: 0x1c15e0, Func Offset: 0xd0
	// Func End, Address: 0x1c15f4, Func Offset: 0xe4
}

// 
// Start address: 0x1c1600
int EnemyDoPlayerHaveSpear()
{
	// Line 763, Address: 0x1c1600, Func Offset: 0
	// Func End, Address: 0x1c1608, Func Offset: 0x8
}

// 
// Start address: 0x1c1610
int EnemyCheckPlayerArrival(EnemyPlayerType type, float* pos, float check_height)
{
	float ppos[4];
	// Line 774, Address: 0x1c1610, Func Offset: 0
	// Line 776, Address: 0x1c1624, Func Offset: 0x14
	// Line 778, Address: 0x1c1638, Func Offset: 0x28
	// Line 777, Address: 0x1c163c, Func Offset: 0x2c
	// Line 778, Address: 0x1c1640, Func Offset: 0x30
	// Line 777, Address: 0x1c1644, Func Offset: 0x34
	// Line 778, Address: 0x1c1648, Func Offset: 0x38
	// Line 780, Address: 0x1c1670, Func Offset: 0x60
	// Line 782, Address: 0x1c1678, Func Offset: 0x68
	// Line 783, Address: 0x1c1680, Func Offset: 0x70
	// Func End, Address: 0x1c1694, Func Offset: 0x84
}

// 
// Start address: 0x1c16a0
int EnemyCheckPlayerInSamePartition(EnemyPlayerType type, float* pos)
{
	int pp;
	int mp;
	// Line 791, Address: 0x1c16a0, Func Offset: 0
	// Line 793, Address: 0x1c16a4, Func Offset: 0x4
	// Line 791, Address: 0x1c16a8, Func Offset: 0x8
	// Line 793, Address: 0x1c16ac, Func Offset: 0xc
	// Line 791, Address: 0x1c16b0, Func Offset: 0x10
	// Line 793, Address: 0x1c16b4, Func Offset: 0x14
	// Line 794, Address: 0x1c16c0, Func Offset: 0x20
	// Line 796, Address: 0x1c16c8, Func Offset: 0x28
	// Line 797, Address: 0x1c16d8, Func Offset: 0x38
	// Line 798, Address: 0x1c16e4, Func Offset: 0x44
	// Line 799, Address: 0x1c16f0, Func Offset: 0x50
	// Func End, Address: 0x1c1700, Func Offset: 0x60
}

// 
// Start address: 0x1c1700
int EnemyGetPlayersWeapon(EnemyPlayerType type)
{
	// Line 807, Address: 0x1c1700, Func Offset: 0
	// Line 806, Address: 0x1c1704, Func Offset: 0x4
	// Line 807, Address: 0x1c1708, Func Offset: 0x8
	// Line 809, Address: 0x1c1734, Func Offset: 0x34
	// Line 810, Address: 0x1c1738, Func Offset: 0x38
	// Line 812, Address: 0x1c1740, Func Offset: 0x40
	// Line 814, Address: 0x1c1748, Func Offset: 0x48
	// Line 815, Address: 0x1c1770, Func Offset: 0x70
	// Func End, Address: 0x1c177c, Func Offset: 0x7c
}

// 
// Start address: 0x1c1780
int EnemyIsPlayerWeaponGun(EnemyPlayerType type)
{
	int r;
	// Line 822, Address: 0x1c1780, Func Offset: 0
	// Line 824, Address: 0x1c1784, Func Offset: 0x4
	// Line 822, Address: 0x1c1788, Func Offset: 0x8
	// Line 824, Address: 0x1c178c, Func Offset: 0xc
	// Line 822, Address: 0x1c1790, Func Offset: 0x10
	// Line 824, Address: 0x1c1794, Func Offset: 0x14
	// Line 826, Address: 0x1c17b4, Func Offset: 0x34
	// Line 827, Address: 0x1c17b8, Func Offset: 0x38
	// Line 829, Address: 0x1c17c0, Func Offset: 0x40
	// Line 833, Address: 0x1c17f0, Func Offset: 0x70
	// Line 834, Address: 0x1c17f4, Func Offset: 0x74
	// Line 835, Address: 0x1c17f8, Func Offset: 0x78
	// Line 836, Address: 0x1c1800, Func Offset: 0x80
	// Func End, Address: 0x1c1810, Func Offset: 0x90
}

// 
// Start address: 0x1c1810
int EnemyIsPlayerWeaponAiming(EnemyPlayerType type)
{
	BattleHit* bh;
	int r;
	// Line 843, Address: 0x1c1810, Func Offset: 0
	// Line 846, Address: 0x1c1814, Func Offset: 0x4
	// Line 843, Address: 0x1c1818, Func Offset: 0x8
	// Line 846, Address: 0x1c182c, Func Offset: 0x1c
	// Line 849, Address: 0x1c1848, Func Offset: 0x38
	// Line 851, Address: 0x1c1850, Func Offset: 0x40
	// Line 856, Address: 0x1c18a8, Func Offset: 0x98
	// Line 861, Address: 0x1c18b0, Func Offset: 0xa0
	// Line 862, Address: 0x1c18c4, Func Offset: 0xb4
	// Line 863, Address: 0x1c18cc, Func Offset: 0xbc
	// Line 869, Address: 0x1c1908, Func Offset: 0xf8
	// Line 870, Address: 0x1c1910, Func Offset: 0x100
	// Line 873, Address: 0x1c1914, Func Offset: 0x104
	// Line 874, Address: 0x1c1918, Func Offset: 0x108
	// Line 875, Address: 0x1c1920, Func Offset: 0x110
	// Func End, Address: 0x1c1934, Func Offset: 0x124
}

// 
// Start address: 0x1c1940
float EnemyGetPlayerDirDiff(EnemyPlayerType type, float* pos)
{
	float vec[4];
	int gtype;
	// Line 887, Address: 0x1c1940, Func Offset: 0
	// Line 883, Address: 0x1c1944, Func Offset: 0x4
	// Line 887, Address: 0x1c1948, Func Offset: 0x8
	// Line 888, Address: 0x1c1960, Func Offset: 0x20
	// Line 889, Address: 0x1c196c, Func Offset: 0x2c
	// Line 890, Address: 0x1c1970, Func Offset: 0x30
	// Line 891, Address: 0x1c1978, Func Offset: 0x38
	// Line 892, Address: 0x1c19b4, Func Offset: 0x74
	// Line 893, Address: 0x1c19e0, Func Offset: 0xa0
	// Line 894, Address: 0x1c1a28, Func Offset: 0xe8
	// Func End, Address: 0x1c1a34, Func Offset: 0xf4
}

// 
// Start address: 0x1c1a40
float EnemyGetPlayerDirDiffXZ(EnemyPlayerType type, float* pos)
{
	float vec[4];
	float dir[4];
	int gtype;
	// Line 906, Address: 0x1c1a40, Func Offset: 0
	// Line 902, Address: 0x1c1a44, Func Offset: 0x4
	// Line 906, Address: 0x1c1a48, Func Offset: 0x8
	// Line 907, Address: 0x1c1a60, Func Offset: 0x20
	// Line 908, Address: 0x1c1a6c, Func Offset: 0x2c
	// Line 909, Address: 0x1c1a70, Func Offset: 0x30
	// Line 910, Address: 0x1c1a78, Func Offset: 0x38
	// Line 911, Address: 0x1c1ab4, Func Offset: 0x74
	// Line 912, Address: 0x1c1ab8, Func Offset: 0x78
	// Line 911, Address: 0x1c1ac0, Func Offset: 0x80
	// Line 912, Address: 0x1c1ac4, Func Offset: 0x84
	// Line 913, Address: 0x1c1ae8, Func Offset: 0xa8
	// Line 914, Address: 0x1c1b18, Func Offset: 0xd8
	// Line 915, Address: 0x1c1b1c, Func Offset: 0xdc
	// Line 914, Address: 0x1c1b24, Func Offset: 0xe4
	// Line 915, Address: 0x1c1b28, Func Offset: 0xe8
	// Line 916, Address: 0x1c1b4c, Func Offset: 0x10c
	// Line 917, Address: 0x1c1b70, Func Offset: 0x130
	// Func End, Address: 0x1c1b7c, Func Offset: 0x13c
}

// 
// Start address: 0x1c1b80
float EnemyGetPlayerDirDiff2XZ(EnemyPlayerType type, float* dir)
{
	float vec[4];
	float dir2[4];
	int gtype;
	// Line 929, Address: 0x1c1b80, Func Offset: 0
	// Line 925, Address: 0x1c1b84, Func Offset: 0x4
	// Line 929, Address: 0x1c1b88, Func Offset: 0x8
	// Line 930, Address: 0x1c1ba0, Func Offset: 0x20
	// Line 931, Address: 0x1c1bac, Func Offset: 0x2c
	// Line 932, Address: 0x1c1bb0, Func Offset: 0x30
	// Line 933, Address: 0x1c1bbc, Func Offset: 0x3c
	// Line 934, Address: 0x1c1bc8, Func Offset: 0x48
	// Line 935, Address: 0x1c1bcc, Func Offset: 0x4c
	// Line 936, Address: 0x1c1bf0, Func Offset: 0x70
	// Line 937, Address: 0x1c1c20, Func Offset: 0xa0
	// Line 938, Address: 0x1c1c24, Func Offset: 0xa4
	// Line 937, Address: 0x1c1c2c, Func Offset: 0xac
	// Line 938, Address: 0x1c1c30, Func Offset: 0xb0
	// Line 939, Address: 0x1c1c54, Func Offset: 0xd4
	// Line 940, Address: 0x1c1c78, Func Offset: 0xf8
	// Func End, Address: 0x1c1c84, Func Offset: 0x104
}

// 
// Start address: 0x1c1c90
sfObj* EnemyGetPlayerObj(EnemyPlayerType type)
{
	// Line 948, Address: 0x1c1c90, Func Offset: 0
	// Line 947, Address: 0x1c1c94, Func Offset: 0x4
	// Line 948, Address: 0x1c1c98, Func Offset: 0x8
	// Line 950, Address: 0x1c1cbc, Func Offset: 0x2c
	// Line 951, Address: 0x1c1cc0, Func Offset: 0x30
	// Line 953, Address: 0x1c1cc8, Func Offset: 0x38
	// Line 954, Address: 0x1c1cf0, Func Offset: 0x60
	// Func End, Address: 0x1c1cfc, Func Offset: 0x6c
}

// 
// Start address: 0x1c1d00
void* EnemyGetPlayerCharacter(EnemyPlayerType type)
{
	// Line 962, Address: 0x1c1d00, Func Offset: 0
	// Line 961, Address: 0x1c1d04, Func Offset: 0x4
	// Line 962, Address: 0x1c1d08, Func Offset: 0x8
	// Line 964, Address: 0x1c1d20, Func Offset: 0x20
	// Line 966, Address: 0x1c1d28, Func Offset: 0x28
	// Line 967, Address: 0x1c1d50, Func Offset: 0x50
	// Func End, Address: 0x1c1d5c, Func Offset: 0x5c
}

// 
// Start address: 0x1c1d60
int EnemyCheckPlayerObj(sfObj* obj)
{
	int i;
	// Line 974, Address: 0x1c1d60, Func Offset: 0
	// Line 976, Address: 0x1c1d74, Func Offset: 0x14
	// Line 977, Address: 0x1c1d78, Func Offset: 0x18
	// Line 978, Address: 0x1c1d8c, Func Offset: 0x2c
	// Line 980, Address: 0x1c1d94, Func Offset: 0x34
	// Line 982, Address: 0x1c1da8, Func Offset: 0x48
	// Func End, Address: 0x1c1dbc, Func Offset: 0x5c
}

// 
// Start address: 0x1c1dc0
void* EnemyGetPlayerCollideObj(EnemyPlayerType type)
{
	// Line 989, Address: 0x1c1dc0, Func Offset: 0
	// Line 990, Address: 0x1c1dcc, Func Offset: 0xc
	// Line 992, Address: 0x1c1e08, Func Offset: 0x48
	// Func End, Address: 0x1c1e18, Func Offset: 0x58
}

// 
// Start address: 0x1c1e20
EnemyPlayerType EnemyCheckPlayerCollideObj(void* cld)
{
	int i;
	// Line 999, Address: 0x1c1e20, Func Offset: 0
	// Line 1001, Address: 0x1c1e34, Func Offset: 0x14
	// Line 1002, Address: 0x1c1e38, Func Offset: 0x18
	// Line 1003, Address: 0x1c1e4c, Func Offset: 0x2c
	// Line 1005, Address: 0x1c1e58, Func Offset: 0x38
	// Line 1007, Address: 0x1c1e68, Func Offset: 0x48
	// Func End, Address: 0x1c1e7c, Func Offset: 0x5c
}

// 
// Start address: 0x1c1e80
EnemyPlayerType EnemySearchNearestPlayer(float* pos)
{
	int i;
	int p;
	int p_d;
	float d;
	float dm;
	float dm_d;
	// Line 1014, Address: 0x1c1e80, Func Offset: 0
	// Line 1018, Address: 0x1c1e84, Func Offset: 0x4
	// Line 1014, Address: 0x1c1e88, Func Offset: 0x8
	// Line 1019, Address: 0x1c1e9c, Func Offset: 0x1c
	// Line 1014, Address: 0x1c1ea0, Func Offset: 0x20
	// Line 1017, Address: 0x1c1ea4, Func Offset: 0x24
	// Line 1014, Address: 0x1c1ea8, Func Offset: 0x28
	// Line 1017, Address: 0x1c1eac, Func Offset: 0x2c
	// Line 1014, Address: 0x1c1eb0, Func Offset: 0x30
	// Line 1018, Address: 0x1c1eb4, Func Offset: 0x34
	// Line 1014, Address: 0x1c1ebc, Func Offset: 0x3c
	// Line 1018, Address: 0x1c1ec0, Func Offset: 0x40
	// Line 1019, Address: 0x1c1ec4, Func Offset: 0x44
	// Line 1023, Address: 0x1c1ec8, Func Offset: 0x48
	// Line 1024, Address: 0x1c1edc, Func Offset: 0x5c
	// Line 1025, Address: 0x1c1ef0, Func Offset: 0x70
	// Line 1024, Address: 0x1c1ef4, Func Offset: 0x74
	// Line 1025, Address: 0x1c1ef8, Func Offset: 0x78
	// Line 1026, Address: 0x1c1f08, Func Offset: 0x88
	// Line 1028, Address: 0x1c1f14, Func Offset: 0x94
	// Line 1030, Address: 0x1c1f18, Func Offset: 0x98
	// Line 1031, Address: 0x1c1f20, Func Offset: 0xa0
	// Line 1033, Address: 0x1c1f2c, Func Offset: 0xac
	// Line 1032, Address: 0x1c1f30, Func Offset: 0xb0
	// Line 1037, Address: 0x1c1f34, Func Offset: 0xb4
	// Line 1038, Address: 0x1c1f48, Func Offset: 0xc8
	// Line 1040, Address: 0x1c1f50, Func Offset: 0xd0
	// Line 1042, Address: 0x1c1f58, Func Offset: 0xd8
	// Line 1044, Address: 0x1c1f5c, Func Offset: 0xdc
	// Line 1045, Address: 0x1c1f60, Func Offset: 0xe0
	// Line 1046, Address: 0x1c1f64, Func Offset: 0xe4
	// Line 1045, Address: 0x1c1f80, Func Offset: 0x100
	// Line 1046, Address: 0x1c1f84, Func Offset: 0x104
	// Func End, Address: 0x1c1f90, Func Offset: 0x110
}

// 
// Start address: 0x1c1f90
EnemyPlayerType EnemySearchNearestPlayerWithHit(float* pos)
{
	int i;
	int p;
	int p_d;
	float d;
	float dm;
	float dm_d;
	float* ppos;
	// Line 1053, Address: 0x1c1f90, Func Offset: 0
	// Line 1058, Address: 0x1c1f94, Func Offset: 0x4
	// Line 1053, Address: 0x1c1f98, Func Offset: 0x8
	// Line 1059, Address: 0x1c1fac, Func Offset: 0x1c
	// Line 1053, Address: 0x1c1fb0, Func Offset: 0x20
	// Line 1057, Address: 0x1c1fb4, Func Offset: 0x24
	// Line 1053, Address: 0x1c1fb8, Func Offset: 0x28
	// Line 1057, Address: 0x1c1fbc, Func Offset: 0x2c
	// Line 1053, Address: 0x1c1fc0, Func Offset: 0x30
	// Line 1058, Address: 0x1c1fc8, Func Offset: 0x38
	// Line 1053, Address: 0x1c1fd0, Func Offset: 0x40
	// Line 1058, Address: 0x1c1fd4, Func Offset: 0x44
	// Line 1063, Address: 0x1c1fd8, Func Offset: 0x48
	// Line 1064, Address: 0x1c1fec, Func Offset: 0x5c
	// Line 1065, Address: 0x1c1ff8, Func Offset: 0x68
	// Line 1066, Address: 0x1c2010, Func Offset: 0x80
	// Line 1067, Address: 0x1c2018, Func Offset: 0x88
	// Line 1066, Address: 0x1c201c, Func Offset: 0x8c
	// Line 1067, Address: 0x1c2020, Func Offset: 0x90
	// Line 1068, Address: 0x1c2030, Func Offset: 0xa0
	// Line 1070, Address: 0x1c203c, Func Offset: 0xac
	// Line 1072, Address: 0x1c2040, Func Offset: 0xb0
	// Line 1073, Address: 0x1c2048, Func Offset: 0xb8
	// Line 1075, Address: 0x1c2054, Func Offset: 0xc4
	// Line 1074, Address: 0x1c2058, Func Offset: 0xc8
	// Line 1080, Address: 0x1c205c, Func Offset: 0xcc
	// Line 1081, Address: 0x1c2070, Func Offset: 0xe0
	// Line 1082, Address: 0x1c2078, Func Offset: 0xe8
	// Line 1083, Address: 0x1c207c, Func Offset: 0xec
	// Line 1084, Address: 0x1c2080, Func Offset: 0xf0
	// Line 1085, Address: 0x1c2084, Func Offset: 0xf4
	// Line 1084, Address: 0x1c20a0, Func Offset: 0x110
	// Line 1085, Address: 0x1c20a4, Func Offset: 0x114
	// Func End, Address: 0x1c20b4, Func Offset: 0x124
}

// 
// Start address: 0x1c20c0
float EnemyPlayerDistance(sfObj* obj, EnemyPlayerType type)
{
	// Line 1093, Address: 0x1c20c0, Func Offset: 0
	// Line 1094, Address: 0x1c20c4, Func Offset: 0x4
	// Line 1093, Address: 0x1c20c8, Func Offset: 0x8
	// Line 1094, Address: 0x1c20cc, Func Offset: 0xc
	// Line 1093, Address: 0x1c20d0, Func Offset: 0x10
	// Line 1094, Address: 0x1c20d4, Func Offset: 0x14
	// Line 1097, Address: 0x1c210c, Func Offset: 0x4c
	// Func End, Address: 0x1c211c, Func Offset: 0x5c
}

// 
// Start address: 0x1c2120
float EnemyPlayerDistanceXZ(sfObj* obj, EnemyPlayerType type)
{
	// Line 1105, Address: 0x1c2120, Func Offset: 0
	// Line 1106, Address: 0x1c2130, Func Offset: 0x10
	// Line 1108, Address: 0x1c2150, Func Offset: 0x30
	// Func End, Address: 0x1c2160, Func Offset: 0x40
}

// 
// Start address: 0x1c2160
float EnemyPlayerDistanceY(sfObj* obj, EnemyPlayerType type)
{
	// Line 1116, Address: 0x1c2160, Func Offset: 0
	// Line 1117, Address: 0x1c2170, Func Offset: 0x10
	// Line 1118, Address: 0x1c218c, Func Offset: 0x2c
	// Line 1117, Address: 0x1c2194, Func Offset: 0x34
	// Line 1118, Address: 0x1c2198, Func Offset: 0x38
	// Line 1117, Address: 0x1c219c, Func Offset: 0x3c
	// Line 1118, Address: 0x1c21a0, Func Offset: 0x40
	// Func End, Address: 0x1c21a8, Func Offset: 0x48
}

// 
// Start address: 0x1c21b0
float EnemyPlayerDirection(sfObj* obj, EnemyPlayerType type)
{
	float vec[4];
	// Line 1126, Address: 0x1c21b0, Func Offset: 0
	// Line 1129, Address: 0x1c21bc, Func Offset: 0xc
	// Line 1130, Address: 0x1c21e8, Func Offset: 0x38
	// Line 1131, Address: 0x1c21f0, Func Offset: 0x40
	// Func End, Address: 0x1c2200, Func Offset: 0x50
}

// 
// Start address: 0x1c2200
int EnemyEDPlayerDirThisSide(void* data)
{
	EnemyPlayerDirectionDifferentData* pd;
	float d;
	float c;
	// Line 1164, Address: 0x1c2200, Func Offset: 0
	// Line 1165, Address: 0x1c2210, Func Offset: 0x10
	// Line 1167, Address: 0x1c2214, Func Offset: 0x14
	// Line 1168, Address: 0x1c2220, Func Offset: 0x20
	// Line 1170, Address: 0x1c222c, Func Offset: 0x2c
	// Line 1173, Address: 0x1c223c, Func Offset: 0x3c
	// Func End, Address: 0x1c2250, Func Offset: 0x50
}

// 
// Start address: 0x1c2250
int EnemyEDPlayerDirOtherSide(void* data)
{
	EnemyPlayerDirectionDifferentData* pd;
	float d;
	float c;
	// Line 1180, Address: 0x1c2250, Func Offset: 0
	// Line 1181, Address: 0x1c2260, Func Offset: 0x10
	// Line 1183, Address: 0x1c2264, Func Offset: 0x14
	// Line 1184, Address: 0x1c2270, Func Offset: 0x20
	// Line 1186, Address: 0x1c227c, Func Offset: 0x2c
	// Line 1189, Address: 0x1c228c, Func Offset: 0x3c
	// Func End, Address: 0x1c22a0, Func Offset: 0x50
}

// 
// Start address: 0x1c22a0
void EnemyPlayerPush(EnemyPlayerType type, float* move)
{
	float* cm;
	// Line 1196, Address: 0x1c22a0, Func Offset: 0
	// Line 1197, Address: 0x1c22a4, Func Offset: 0x4
	// Line 1196, Address: 0x1c22a8, Func Offset: 0x8
	// Line 1197, Address: 0x1c22b8, Func Offset: 0x18
	// Line 1198, Address: 0x1c22e4, Func Offset: 0x44
	// Line 1199, Address: 0x1c22e8, Func Offset: 0x48
	// Line 1202, Address: 0x1c22f8, Func Offset: 0x58
	// Line 1203, Address: 0x1c2300, Func Offset: 0x60
	// Line 1208, Address: 0x1c2308, Func Offset: 0x68
	// Line 1211, Address: 0x1c2310, Func Offset: 0x70
	// Line 1212, Address: 0x1c2328, Func Offset: 0x88
	// Line 1214, Address: 0x1c233c, Func Offset: 0x9c
	// Func End, Address: 0x1c2354, Func Offset: 0xb4
}

// 
// Start address: 0x1c2360
void EnemyPlayerTurn(EnemyPlayerType type, float* rot)
{
	// Line 1221, Address: 0x1c2360, Func Offset: 0
	// Line 1222, Address: 0x1c2364, Func Offset: 0x4
	// Line 1221, Address: 0x1c2368, Func Offset: 0x8
	// Line 1222, Address: 0x1c236c, Func Offset: 0xc
	// Line 1221, Address: 0x1c2370, Func Offset: 0x10
	// Line 1222, Address: 0x1c2374, Func Offset: 0x14
	// Line 1223, Address: 0x1c2384, Func Offset: 0x24
	// Line 1224, Address: 0x1c2388, Func Offset: 0x28
	// Line 1225, Address: 0x1c2398, Func Offset: 0x38
	// Line 1228, Address: 0x1c23b4, Func Offset: 0x54
	// Line 1229, Address: 0x1c23b8, Func Offset: 0x58
	// Func End, Address: 0x1c23c8, Func Offset: 0x68
}

// 
// Start address: 0x1c23d0
void EnemyPlayerTurnAngle(EnemyPlayerType type, float rot)
{
	// Line 1237, Address: 0x1c23d0, Func Offset: 0
	// Line 1236, Address: 0x1c23d4, Func Offset: 0x4
	// Line 1237, Address: 0x1c23d8, Func Offset: 0x8
	// Line 1238, Address: 0x1c23ec, Func Offset: 0x1c
	// Line 1239, Address: 0x1c23f0, Func Offset: 0x20
	// Line 1240, Address: 0x1c2400, Func Offset: 0x30
	// Line 1244, Address: 0x1c2410, Func Offset: 0x40
	// Func End, Address: 0x1c241c, Func Offset: 0x4c
}

// 
// Start address: 0x1c2420
int EnemyActionLevelNow()
{
	// Line 1251, Address: 0x1c2420, Func Offset: 0
	// Func End, Address: 0x1c2428, Func Offset: 0x8
}

// 
// Start address: 0x1c2430
int EnemyActionLevelNowShift()
{
	int level;
	// Line 1258, Address: 0x1c2430, Func Offset: 0
	// Line 1260, Address: 0x1c243c, Func Offset: 0xc
	// Line 1263, Address: 0x1c2478, Func Offset: 0x48
	// Line 1266, Address: 0x1c2480, Func Offset: 0x50
	// Line 1269, Address: 0x1c2488, Func Offset: 0x58
	// Line 1272, Address: 0x1c2490, Func Offset: 0x60
	// Line 1274, Address: 0x1c2498, Func Offset: 0x68
	// Line 1276, Address: 0x1c249c, Func Offset: 0x6c
	// Line 1277, Address: 0x1c24a0, Func Offset: 0x70
	// Line 1278, Address: 0x1c24a4, Func Offset: 0x74
	// Func End, Address: 0x1c24b4, Func Offset: 0x84
}

// 
// Start address: 0x1c24c0
int EnemyActionLevelIsOverNormal()
{
	// Line 1284, Address: 0x1c24c0, Func Offset: 0
	// Line 1285, Address: 0x1c24c8, Func Offset: 0x8
	// Line 1286, Address: 0x1c24d0, Func Offset: 0x10
	// Line 1285, Address: 0x1c24d4, Func Offset: 0x14
	// Line 1286, Address: 0x1c24dc, Func Offset: 0x1c
	// Func End, Address: 0x1c24e4, Func Offset: 0x24
}

// 
// Start address: 0x1c24f0
int EnemyIsGameOver()
{
	// Line 1293, Address: 0x1c24f0, Func Offset: 0
	// Line 1294, Address: 0x1c24f8, Func Offset: 0x8
	// Func End, Address: 0x1c2500, Func Offset: 0x10
}

