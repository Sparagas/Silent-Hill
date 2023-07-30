typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _PLAYER_WORK;
typedef enum BattleAttackKind : unsigned char;
typedef struct sfOffsetAABB;
typedef struct sgBone;
typedef union sfCldBody;
typedef struct _anon3;
typedef struct sfObj;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sfCldPart;
typedef struct sfCldObject;
typedef struct sgIKHandle;
typedef struct _anon4;
typedef struct _EventDriver;
typedef struct _anon5;
typedef struct BattleHit;
typedef enum GameItem : unsigned char;
typedef struct _anon6;
typedef union _anon7;
typedef enum sfMaphitMaterialType : unsigned char;
typedef struct sfCharacter;
typedef struct _GAME_WORK;
typedef struct sgAnime;
typedef enum BattleHitResult : unsigned char;
typedef struct sgQTNode;
typedef struct _anon8;
typedef struct sgSVModel;
typedef struct _anon9;
typedef struct _anon10;
typedef struct _anon11;
typedef struct _anon12;
typedef struct _anon13;
typedef struct _anon14;
typedef struct sgQTObject;
typedef struct _anon15;
typedef struct _anon16;
typedef struct _anon17;

typedef sgIKSolveResult(*type_14)();
typedef int(*type_18)(sfObj*);
typedef int(*type_19)(sfObj*);
typedef int(*type_22)(sfObj*);
typedef int(*type_26)(sfObj*);
typedef void(*type_28)(sfObj*);
typedef int(*type_29)(sfObj*);
typedef void(*type_37)(sgAnime*, int);
typedef void(*type_39)(sfObj*);
typedef void(*type_50)(_anon8*, int, int, float*);

typedef _anon15 type_0[4];
typedef _anon5 type_1[3];
typedef _anon14 type_2[38];
typedef _anon2 type_3[0];
typedef _anon5 type_4[3];
typedef float type_5[4];
typedef float type_6[4][4];
typedef unsigned char type_7[3];
typedef _anon7 type_8[6];
typedef float type_9[4][2];
typedef _anon7 type_10[6];
typedef _anon5 type_11[3];
typedef _PLAYER_WORK type_12[2];
typedef int type_13[1];
typedef int type_15[1];
typedef float type_16[32];
typedef _anon5* type_17[38];
typedef _anon5 type_20[3];
typedef int type_21[1];
typedef float type_23[4];
typedef _anon6 type_24[38];
typedef _anon7 type_25[256];
typedef int type_27[1];
typedef _anon5 type_30[3];
typedef _anon7 type_31[4];
typedef int type_32[1];
typedef void* type_33[4];
typedef _anon4 type_34[38];
typedef int type_35[1];
typedef _anon5 type_36[3];
typedef _anon5 type_38[3];
typedef int type_40[1];
typedef sfCldPart* type_41[6];
typedef unsigned char type_42[4];
typedef _anon5 type_43[3];
typedef unsigned char type_44[3];
typedef float type_45[4];
typedef _anon10 type_46[38];
typedef _anon5 type_47[3];
typedef short type_48[2];
typedef unsigned short type_49[2];
typedef char type_51[4];
typedef unsigned char type_52[4];
typedef float type_53[1];
typedef int type_54[1];
typedef _anon5 type_55[3];

struct _anon0
{
	_anon2 vertex[0];
};

struct _anon1
{
	float mat[4][4];
	float half_w[4];
};

union _anon2
{
	float node[4];
	_anon15 data[4];
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

struct sfOffsetAABB
{
	_anon16 aabb;
	float offset[4];
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

union sfCldBody
{
	_anon1 obb;
	_anon16 aabb;
	sfOffsetAABB offset_aabb;
	_anon12 line;
	_anon13 sphere;
};

struct _anon3
{
	int dummy;
};

struct sfObj
{
	_anon7 fwork[256];
	_anon7* work;
	void(*func)(sfObj*);
	_anon7* work_pt0;
	_anon7* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon7* sys_work;
	_anon7* scene_work;
	_anon7* event_work;
	_anon7* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
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

struct _anon4
{
	int file;
	int model;
	int model_b;
	int tex;
	int shadow;
	int shadow_b;
};

struct _EventDriver
{
	int evnum;
	int(*trgchk)(sfObj*);
	int(*init)(sfObj*);
	int(*exec)(sfObj*);
	int(*draw)(sfObj*);
	int(*end)(sfObj*);
	unsigned int* file;
	_anon7 val[4];
};

struct _anon5
{
	float start;
	float end;
	float se;
	float cancel;
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

struct _anon6
{
	BattleAttackKind normal;
	BattleAttackKind strong;
};

union _anon7
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

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon9 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
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

enum BattleHitResult : unsigned char
{
	GB_HIT_RES_NONE,
	GB_HIT_RES_PLAYER_HIT,
	GB_HIT_RES_ENEMY_HIT,
	GB_HIT_RES_EILEEN_HIT,
	GB_HIT_RES_END
};

struct sgQTNode
{
	int dummy;
};

struct _anon8
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

struct _anon9
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon8*, int, int, float*);
	int equip_flag;
};

struct _anon10
{
	int left;
	int right;
};

struct _anon11
{
	float abcd[4];
};

struct _anon12
{
	float start[4];
	float end[4];
};

struct _anon13
{
	float center[4];
	float radius;
};

struct _anon14
{
	float charge_time;
	int left;
	int right;
	int left_b;
	int right_b;
	float anim_speed;
};

struct sgQTObject
{
	_anon13 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

struct _anon15
{
	unsigned char next_offset;
	unsigned char flags;
	short id;
};

struct _anon16
{
	float bmin[4];
	float bmax[4];
};

struct _anon17
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

_anon5 _pipe[3];
_anon5 _scoop[3];
_anon5 _ax[3];
_anon5 _cutter[3];
_anon5 _bottle_b[3];
_anon5 _pick[3];
_anon5 _stun[3];
_anon5 _spray[3];
_anon5 _chain[3];
_anon5 _gun[3];
_anon5* wp_time_tbl[38];
unsigned int attack_id;
unsigned int last_attack;
_anon4 wp_table[38];
_anon14 wp_param[38];
_anon6 attack_tbl[38];
_anon10 sidestep_anim[38];
_anon7 break_msg[6];
_EventDriver break_event;
_anon7 bottle_msg[6];
_EventDriver bottle_event;
_PLAYER_WORK playerw[2];
_anon17 player_battle_work;
_GAME_WORK gamew;
BattleHit* wp_hit;
BattleHit weapon_hit;
sfCldObject sp_cld_obj;
sfCldObject* sp_cld;
sfCldObject fn_cld_obj;
int attack_type;
float sg_vector_unit_w[4];
float sg_vector_zero[4];
float multiattack_count;
float sg_vector_unit_x[4];
float sg_vector_unit_z[4];
float hit_delay_counter;
unsigned int step_counter;
int gun_fire_stat;
float gun_fire_pos[4];

void weapon_reduce(GameItem kind);
float get_start_time(int weapon, int num);
float PlayerWeaponGetStartTime(int weapon, int num);
float get_end_time(int weapon, int num);
float PlayerWeaponGetEndTime(int weapon, int num);
float get_cancel_time(int weapon, int num);
float PlayerWeaponGetCancelTime(int weapon, int num);
int PlayerWeaponAfterHitTime(_PLAYER_WORK* p, int num);
int PlayerWeaponAfterCancelTime(_PLAYER_WORK* p, int num);
int PlayerWeaponIsHitStart(_PLAYER_WORK* p, int num);
float get_sestart_time(int weapon, int num);
int PlayerWeaponGetSidestepAnim(int num);
BattleAttackKind get_battle_attack_kind(int mode);
void PlayerWeaponHitEntry(int mode, sfCldObject* cld);
void PlayerWeaponHitEntryFinish(sfCldObject* cld);
void PlayerWeaponHitEntryUpdate();
void PlayerWeaponRemoveHitEntry();
void PlayerWeaponRemoveCldEntry(_PLAYER_WORK* p);
void weapon_set(int player_type, int weapon);
void PlayerWeaponSet(int player_type, int weapon);
int PlayerWeaponSetByForce(GameItem weapon);
void PlayerWeaponSetFinishCld();
void PlayerWeaponRelease(int player_type);
void PlayerWeaponReleaseFinishCld();
void PlayerWeaponHitClear();
void set_hit_reduce();
float* obb_vertex(_anon1* obb, float* pos);
int PlayerWeaponAttack(int player_type, int mode);
int PlayerWeaponAttackGun(int player_type);
int PlayerWeaponAttackFinish(int player_type);
void PlayerWeaponGetEquipNum(int player_type, int* equip);
int PlayerWeaponIsShoot(GameItem weapon);
int PlayerWeaponChargable(GameItem weapon_kind);
float PlayerWeaponChargePerFrame(GameItem weapon_kind);
int PlayerWeaponDurabilityCheck(GameItem weapon);
float PlayerWeaponGetAnimSpeed(GameItem weapon);

// 
// Start address: 0x1f1ee0
void weapon_reduce(GameItem kind)
{
	_PLAYER_WORK* p;
	// Line 461, Address: 0x1f1ee0, Func Offset: 0
	// Line 462, Address: 0x1f1ee4, Func Offset: 0x4
	// Line 461, Address: 0x1f1ee8, Func Offset: 0x8
	// Line 462, Address: 0x1f1ef4, Func Offset: 0x14
	// Line 463, Address: 0x1f1ef8, Func Offset: 0x18
	// Line 465, Address: 0x1f1f00, Func Offset: 0x20
	// Line 467, Address: 0x1f1f10, Func Offset: 0x30
	// Line 469, Address: 0x1f1f1c, Func Offset: 0x3c
	// Line 470, Address: 0x1f1f24, Func Offset: 0x44
	// Line 471, Address: 0x1f1f28, Func Offset: 0x48
	// Line 472, Address: 0x1f1f34, Func Offset: 0x54
	// Line 474, Address: 0x1f1f40, Func Offset: 0x60
	// Line 475, Address: 0x1f1f50, Func Offset: 0x70
	// Line 477, Address: 0x1f1f58, Func Offset: 0x78
	// Line 478, Address: 0x1f1f60, Func Offset: 0x80
	// Line 479, Address: 0x1f1f6c, Func Offset: 0x8c
	// Line 481, Address: 0x1f1f78, Func Offset: 0x98
	// Line 484, Address: 0x1f1f88, Func Offset: 0xa8
	// Line 485, Address: 0x1f1f94, Func Offset: 0xb4
	// Line 489, Address: 0x1f1fa0, Func Offset: 0xc0
	// Func End, Address: 0x1f1fb4, Func Offset: 0xd4
}

// 
// Start address: 0x1f1fc0
float get_start_time(int weapon, int num)
{
	int wp_num;
	// Line 494, Address: 0x1f1fc0, Func Offset: 0
	// Line 502, Address: 0x1f1fc4, Func Offset: 0x4
	// Line 503, Address: 0x1f1ff4, Func Offset: 0x34
	// Func End, Address: 0x1f1ffc, Func Offset: 0x3c
}

// 
// Start address: 0x1f2000
float PlayerWeaponGetStartTime(int weapon, int num)
{
	// Line 507, Address: 0x1f2000, Func Offset: 0
	// Func End, Address: 0x1f2008, Func Offset: 0x8
}

// 
// Start address: 0x1f2010
float get_end_time(int weapon, int num)
{
	int wp_num;
	// Line 513, Address: 0x1f2010, Func Offset: 0
	// Line 521, Address: 0x1f2014, Func Offset: 0x4
	// Line 522, Address: 0x1f2040, Func Offset: 0x30
	// Func End, Address: 0x1f2048, Func Offset: 0x38
}

// 
// Start address: 0x1f2050
float PlayerWeaponGetEndTime(int weapon, int num)
{
	// Line 526, Address: 0x1f2050, Func Offset: 0
	// Func End, Address: 0x1f2058, Func Offset: 0x8
}

// 
// Start address: 0x1f2060
float get_cancel_time(int weapon, int num)
{
	int wp_num;
	// Line 532, Address: 0x1f2060, Func Offset: 0
	// Line 540, Address: 0x1f2064, Func Offset: 0x4
	// Line 541, Address: 0x1f2090, Func Offset: 0x30
	// Func End, Address: 0x1f2098, Func Offset: 0x38
}

// 
// Start address: 0x1f20a0
float PlayerWeaponGetCancelTime(int weapon, int num)
{
	// Line 545, Address: 0x1f20a0, Func Offset: 0
	// Func End, Address: 0x1f20a8, Func Offset: 0x8
}

// 
// Start address: 0x1f20b0
int PlayerWeaponAfterHitTime(_PLAYER_WORK* p, int num)
{
	int ret;
	float ftime;
	float a;
	// Line 550, Address: 0x1f20b0, Func Offset: 0
	// Line 555, Address: 0x1f20c8, Func Offset: 0x18
	// Line 560, Address: 0x1f20e4, Func Offset: 0x34
	// Line 567, Address: 0x1f211c, Func Offset: 0x6c
	// Line 570, Address: 0x1f213c, Func Offset: 0x8c
	// Func End, Address: 0x1f2154, Func Offset: 0xa4
}

// 
// Start address: 0x1f2160
int PlayerWeaponAfterCancelTime(_PLAYER_WORK* p, int num)
{
	int ret;
	float ftime;
	float ctime;
	float a;
	// Line 574, Address: 0x1f2160, Func Offset: 0
	// Line 580, Address: 0x1f2178, Func Offset: 0x18
	// Line 586, Address: 0x1f2194, Func Offset: 0x34
	// Line 588, Address: 0x1f21cc, Func Offset: 0x6c
	// Line 590, Address: 0x1f21dc, Func Offset: 0x7c
	// Line 592, Address: 0x1f21f0, Func Offset: 0x90
	// Line 593, Address: 0x1f21fc, Func Offset: 0x9c
	// Line 596, Address: 0x1f2208, Func Offset: 0xa8
	// Line 599, Address: 0x1f2210, Func Offset: 0xb0
	// Line 600, Address: 0x1f222c, Func Offset: 0xcc
	// Line 602, Address: 0x1f2238, Func Offset: 0xd8
	// Line 603, Address: 0x1f223c, Func Offset: 0xdc
	// Line 606, Address: 0x1f2240, Func Offset: 0xe0
	// Func End, Address: 0x1f2258, Func Offset: 0xf8
}

// 
// Start address: 0x1f2260
int PlayerWeaponIsHitStart(_PLAYER_WORK* p, int num)
{
	int ret;
	float ftime;
	float ctime;
	float a;
	// Line 610, Address: 0x1f2260, Func Offset: 0
	// Line 616, Address: 0x1f2278, Func Offset: 0x18
	// Line 622, Address: 0x1f2294, Func Offset: 0x34
	// Line 624, Address: 0x1f22cc, Func Offset: 0x6c
	// Line 626, Address: 0x1f22dc, Func Offset: 0x7c
	// Line 628, Address: 0x1f22f0, Func Offset: 0x90
	// Line 629, Address: 0x1f22fc, Func Offset: 0x9c
	// Line 632, Address: 0x1f2308, Func Offset: 0xa8
	// Line 635, Address: 0x1f2310, Func Offset: 0xb0
	// Line 636, Address: 0x1f232c, Func Offset: 0xcc
	// Line 638, Address: 0x1f2338, Func Offset: 0xd8
	// Line 639, Address: 0x1f233c, Func Offset: 0xdc
	// Line 642, Address: 0x1f2340, Func Offset: 0xe0
	// Func End, Address: 0x1f2358, Func Offset: 0xf8
}

// 
// Start address: 0x1f2360
float get_sestart_time(int weapon, int num)
{
	int wp_num;
	// Line 647, Address: 0x1f2360, Func Offset: 0
	// Line 655, Address: 0x1f2364, Func Offset: 0x4
	// Line 656, Address: 0x1f2390, Func Offset: 0x30
	// Func End, Address: 0x1f2398, Func Offset: 0x38
}

// 
// Start address: 0x1f23a0
int PlayerWeaponGetSidestepAnim(int num)
{
	int wp_num;
	// Line 662, Address: 0x1f23a0, Func Offset: 0
	// Line 672, Address: 0x1f23a8, Func Offset: 0x8
	// Line 673, Address: 0x1f23dc, Func Offset: 0x3c
	// Func End, Address: 0x1f23e4, Func Offset: 0x44
}

// 
// Start address: 0x1f23f0
BattleAttackKind get_battle_attack_kind(int mode)
{
	int wp_num;
	// Line 678, Address: 0x1f23f0, Func Offset: 0
	// Line 686, Address: 0x1f23f8, Func Offset: 0x8
	// Line 687, Address: 0x1f242c, Func Offset: 0x3c
	// Func End, Address: 0x1f2434, Func Offset: 0x44
}

// 
// Start address: 0x1f2440
void PlayerWeaponHitEntry(int mode, sfCldObject* cld)
{
	float shk;
	float dir[4];
	float pos_ct[4];
	float pos_p[4];
	sgBone* bone;
	// Line 691, Address: 0x1f2440, Func Offset: 0
	// Line 692, Address: 0x1f2444, Func Offset: 0x4
	// Line 691, Address: 0x1f2448, Func Offset: 0x8
	// Line 692, Address: 0x1f244c, Func Offset: 0xc
	// Line 693, Address: 0x1f2458, Func Offset: 0x18
	// Line 695, Address: 0x1f247c, Func Offset: 0x3c
	// Line 696, Address: 0x1f248c, Func Offset: 0x4c
	// Line 697, Address: 0x1f2494, Func Offset: 0x54
	// Line 699, Address: 0x1f24a0, Func Offset: 0x60
	// Line 700, Address: 0x1f24b8, Func Offset: 0x78
	// Line 701, Address: 0x1f24c4, Func Offset: 0x84
	// Line 703, Address: 0x1f24c8, Func Offset: 0x88
	// Line 705, Address: 0x1f24dc, Func Offset: 0x9c
	// Line 706, Address: 0x1f24e4, Func Offset: 0xa4
	// Line 707, Address: 0x1f24e8, Func Offset: 0xa8
	// Line 706, Address: 0x1f24ec, Func Offset: 0xac
	// Line 707, Address: 0x1f24f4, Func Offset: 0xb4
	// Line 706, Address: 0x1f24fc, Func Offset: 0xbc
	// Line 707, Address: 0x1f2500, Func Offset: 0xc0
	// Line 708, Address: 0x1f250c, Func Offset: 0xcc
	// Line 709, Address: 0x1f2510, Func Offset: 0xd0
	// Line 712, Address: 0x1f2520, Func Offset: 0xe0
	// Line 714, Address: 0x1f252c, Func Offset: 0xec
	// Line 715, Address: 0x1f254c, Func Offset: 0x10c
	// Line 717, Address: 0x1f256c, Func Offset: 0x12c
	// Line 731, Address: 0x1f2570, Func Offset: 0x130
	// Line 732, Address: 0x1f2580, Func Offset: 0x140
	// Line 733, Address: 0x1f258c, Func Offset: 0x14c
	// Line 734, Address: 0x1f25a0, Func Offset: 0x160
	// Line 736, Address: 0x1f25c0, Func Offset: 0x180
	// Line 734, Address: 0x1f25c4, Func Offset: 0x184
	// Line 735, Address: 0x1f25c8, Func Offset: 0x188
	// Line 734, Address: 0x1f25cc, Func Offset: 0x18c
	// Line 736, Address: 0x1f25d4, Func Offset: 0x194
	// Line 734, Address: 0x1f25dc, Func Offset: 0x19c
	// Line 735, Address: 0x1f25e4, Func Offset: 0x1a4
	// Line 736, Address: 0x1f25ec, Func Offset: 0x1ac
	// Line 735, Address: 0x1f25f4, Func Offset: 0x1b4
	// Line 736, Address: 0x1f25f8, Func Offset: 0x1b8
	// Line 738, Address: 0x1f2608, Func Offset: 0x1c8
	// Line 736, Address: 0x1f260c, Func Offset: 0x1cc
	// Line 738, Address: 0x1f2610, Func Offset: 0x1d0
	// Line 736, Address: 0x1f2614, Func Offset: 0x1d4
	// Line 738, Address: 0x1f261c, Func Offset: 0x1dc
	// Line 736, Address: 0x1f2620, Func Offset: 0x1e0
	// Line 738, Address: 0x1f2628, Func Offset: 0x1e8
	// Line 739, Address: 0x1f2638, Func Offset: 0x1f8
	// Line 748, Address: 0x1f2664, Func Offset: 0x224
	// Line 750, Address: 0x1f2674, Func Offset: 0x234
	// Line 753, Address: 0x1f2688, Func Offset: 0x248
	// Func End, Address: 0x1f2694, Func Offset: 0x254
}

// 
// Start address: 0x1f26a0
void PlayerWeaponHitEntryFinish(sfCldObject* cld)
{
	float dir[4];
	// Line 757, Address: 0x1f26a0, Func Offset: 0
	// Line 760, Address: 0x1f26a4, Func Offset: 0x4
	// Line 757, Address: 0x1f26a8, Func Offset: 0x8
	// Line 760, Address: 0x1f26ac, Func Offset: 0xc
	// Line 761, Address: 0x1f26c0, Func Offset: 0x20
	// Line 762, Address: 0x1f26cc, Func Offset: 0x2c
	// Line 763, Address: 0x1f26dc, Func Offset: 0x3c
	// Line 764, Address: 0x1f26e8, Func Offset: 0x48
	// Line 765, Address: 0x1f26f4, Func Offset: 0x54
	// Line 766, Address: 0x1f2700, Func Offset: 0x60
	// Line 767, Address: 0x1f2708, Func Offset: 0x68
	// Line 768, Address: 0x1f2714, Func Offset: 0x74
	// Line 769, Address: 0x1f2720, Func Offset: 0x80
	// Line 771, Address: 0x1f2728, Func Offset: 0x88
	// Line 773, Address: 0x1f2738, Func Offset: 0x98
	// Line 774, Address: 0x1f2744, Func Offset: 0xa4
	// Line 779, Address: 0x1f2750, Func Offset: 0xb0
	// Line 776, Address: 0x1f2754, Func Offset: 0xb4
	// Line 779, Address: 0x1f2758, Func Offset: 0xb8
	// Line 776, Address: 0x1f2760, Func Offset: 0xc0
	// Line 775, Address: 0x1f2764, Func Offset: 0xc4
	// Line 777, Address: 0x1f2768, Func Offset: 0xc8
	// Line 779, Address: 0x1f276c, Func Offset: 0xcc
	// Line 780, Address: 0x1f2774, Func Offset: 0xd4
	// Line 783, Address: 0x1f2788, Func Offset: 0xe8
	// Func End, Address: 0x1f2794, Func Offset: 0xf4
}

// 
// Start address: 0x1f27a0
void PlayerWeaponHitEntryUpdate()
{
	float dir[4];
	sgBone* bone;
	float pos_ct[4];
	float pos_p[4];
	// Line 787, Address: 0x1f27a0, Func Offset: 0
	// Line 788, Address: 0x1f27a4, Func Offset: 0x4
	// Line 787, Address: 0x1f27a8, Func Offset: 0x8
	// Line 788, Address: 0x1f27ac, Func Offset: 0xc
	// Line 801, Address: 0x1f27b8, Func Offset: 0x18
	// Line 802, Address: 0x1f27c4, Func Offset: 0x24
	// Line 803, Address: 0x1f27d0, Func Offset: 0x30
	// Line 804, Address: 0x1f27e4, Func Offset: 0x44
	// Line 806, Address: 0x1f2804, Func Offset: 0x64
	// Line 804, Address: 0x1f2808, Func Offset: 0x68
	// Line 805, Address: 0x1f280c, Func Offset: 0x6c
	// Line 804, Address: 0x1f2810, Func Offset: 0x70
	// Line 806, Address: 0x1f2818, Func Offset: 0x78
	// Line 804, Address: 0x1f2820, Func Offset: 0x80
	// Line 805, Address: 0x1f2828, Func Offset: 0x88
	// Line 806, Address: 0x1f2830, Func Offset: 0x90
	// Line 805, Address: 0x1f2838, Func Offset: 0x98
	// Line 806, Address: 0x1f283c, Func Offset: 0x9c
	// Line 807, Address: 0x1f284c, Func Offset: 0xac
	// Line 806, Address: 0x1f2850, Func Offset: 0xb0
	// Line 807, Address: 0x1f2854, Func Offset: 0xb4
	// Line 806, Address: 0x1f2858, Func Offset: 0xb8
	// Line 807, Address: 0x1f2860, Func Offset: 0xc0
	// Line 806, Address: 0x1f2864, Func Offset: 0xc4
	// Line 807, Address: 0x1f286c, Func Offset: 0xcc
	// Line 809, Address: 0x1f287c, Func Offset: 0xdc
	// Line 810, Address: 0x1f28a8, Func Offset: 0x108
	// Line 821, Address: 0x1f28b8, Func Offset: 0x118
	// Func End, Address: 0x1f28c4, Func Offset: 0x124
}

// 
// Start address: 0x1f28d0
void PlayerWeaponRemoveHitEntry()
{
	// Line 825, Address: 0x1f28d0, Func Offset: 0
	// Line 826, Address: 0x1f28e0, Func Offset: 0x10
	// Line 827, Address: 0x1f28e8, Func Offset: 0x18
	// Line 833, Address: 0x1f28f0, Func Offset: 0x20
	// Line 837, Address: 0x1f28f8, Func Offset: 0x28
	// Func End, Address: 0x1f2904, Func Offset: 0x34
}

// 
// Start address: 0x1f2910
void PlayerWeaponRemoveCldEntry(_PLAYER_WORK* p)
{
	// Line 841, Address: 0x1f2910, Func Offset: 0
	// Line 842, Address: 0x1f291c, Func Offset: 0xc
	// Line 843, Address: 0x1f2928, Func Offset: 0x18
	// Line 856, Address: 0x1f2930, Func Offset: 0x20
	// Line 859, Address: 0x1f2934, Func Offset: 0x24
	// Func End, Address: 0x1f2944, Func Offset: 0x34
}

// 
// Start address: 0x1f2950
void weapon_set(int player_type, int weapon)
{
	_PLAYER_WORK* p;
	sgBone* pl_bone;
	int wp_num;
	int wp_num;
	// Line 876, Address: 0x1f2950, Func Offset: 0
	// Line 877, Address: 0x1f2954, Func Offset: 0x4
	// Line 876, Address: 0x1f2958, Func Offset: 0x8
	// Line 877, Address: 0x1f295c, Func Offset: 0xc
	// Line 876, Address: 0x1f2960, Func Offset: 0x10
	// Line 877, Address: 0x1f2964, Func Offset: 0x14
	// Line 876, Address: 0x1f2968, Func Offset: 0x18
	// Line 877, Address: 0x1f296c, Func Offset: 0x1c
	// Line 876, Address: 0x1f2970, Func Offset: 0x20
	// Line 877, Address: 0x1f2974, Func Offset: 0x24
	// Line 876, Address: 0x1f2978, Func Offset: 0x28
	// Line 877, Address: 0x1f297c, Func Offset: 0x2c
	// Line 881, Address: 0x1f2984, Func Offset: 0x34
	// Line 884, Address: 0x1f2988, Func Offset: 0x38
	// Line 885, Address: 0x1f2990, Func Offset: 0x40
	// Line 886, Address: 0x1f299c, Func Offset: 0x4c
	// Line 887, Address: 0x1f29a4, Func Offset: 0x54
	// Line 889, Address: 0x1f29a8, Func Offset: 0x58
	// Line 891, Address: 0x1f29ac, Func Offset: 0x5c
	// Line 893, Address: 0x1f29bc, Func Offset: 0x6c
	// Line 892, Address: 0x1f29c8, Func Offset: 0x78
	// Line 893, Address: 0x1f29d0, Func Offset: 0x80
	// Line 896, Address: 0x1f2a04, Func Offset: 0xb4
	// Line 898, Address: 0x1f2a24, Func Offset: 0xd4
	// Line 899, Address: 0x1f2a30, Func Offset: 0xe0
	// Line 901, Address: 0x1f2a38, Func Offset: 0xe8
	// Line 902, Address: 0x1f2a40, Func Offset: 0xf0
	// Line 901, Address: 0x1f2a44, Func Offset: 0xf4
	// Line 902, Address: 0x1f2a48, Func Offset: 0xf8
	// Line 905, Address: 0x1f2a84, Func Offset: 0x134
	// Line 907, Address: 0x1f2aa4, Func Offset: 0x154
	// Line 913, Address: 0x1f2ab0, Func Offset: 0x160
	// Line 911, Address: 0x1f2ab4, Func Offset: 0x164
	// Line 913, Address: 0x1f2ab8, Func Offset: 0x168
	// Line 914, Address: 0x1f2ac0, Func Offset: 0x170
	// Line 917, Address: 0x1f2acc, Func Offset: 0x17c
	// Line 918, Address: 0x1f2ad4, Func Offset: 0x184
	// Line 919, Address: 0x1f2adc, Func Offset: 0x18c
	// Line 921, Address: 0x1f2aec, Func Offset: 0x19c
	// Line 924, Address: 0x1f2b0c, Func Offset: 0x1bc
	// Line 929, Address: 0x1f2b18, Func Offset: 0x1c8
	// Line 930, Address: 0x1f2b2c, Func Offset: 0x1dc
	// Line 934, Address: 0x1f2b5c, Func Offset: 0x20c
	// Line 937, Address: 0x1f2b60, Func Offset: 0x210
	// Line 938, Address: 0x1f2b68, Func Offset: 0x218
	// Line 939, Address: 0x1f2b80, Func Offset: 0x230
	// Line 940, Address: 0x1f2b9c, Func Offset: 0x24c
	// Line 941, Address: 0x1f2ba8, Func Offset: 0x258
	// Line 944, Address: 0x1f2bb4, Func Offset: 0x264
	// Line 941, Address: 0x1f2bb8, Func Offset: 0x268
	// Line 942, Address: 0x1f2bc0, Func Offset: 0x270
	// Line 943, Address: 0x1f2bcc, Func Offset: 0x27c
	// Line 944, Address: 0x1f2bd8, Func Offset: 0x288
	// Line 948, Address: 0x1f2bdc, Func Offset: 0x28c
	// Line 952, Address: 0x1f2be0, Func Offset: 0x290
	// Line 954, Address: 0x1f2bf8, Func Offset: 0x2a8
	// Line 955, Address: 0x1f2c04, Func Offset: 0x2b4
	// Line 956, Address: 0x1f2c14, Func Offset: 0x2c4
	// Line 957, Address: 0x1f2c34, Func Offset: 0x2e4
	// Line 958, Address: 0x1f2c3c, Func Offset: 0x2ec
	// Line 959, Address: 0x1f2c44, Func Offset: 0x2f4
	// Line 960, Address: 0x1f2c58, Func Offset: 0x308
	// Line 961, Address: 0x1f2c68, Func Offset: 0x318
	// Line 962, Address: 0x1f2c74, Func Offset: 0x324
	// Line 965, Address: 0x1f2c80, Func Offset: 0x330
	// Line 964, Address: 0x1f2c84, Func Offset: 0x334
	// Line 965, Address: 0x1f2c88, Func Offset: 0x338
	// Line 967, Address: 0x1f2c94, Func Offset: 0x344
	// Line 969, Address: 0x1f2ca0, Func Offset: 0x350
	// Line 971, Address: 0x1f2cb8, Func Offset: 0x368
	// Line 972, Address: 0x1f2cc4, Func Offset: 0x374
	// Line 973, Address: 0x1f2cd4, Func Offset: 0x384
	// Line 974, Address: 0x1f2cf4, Func Offset: 0x3a4
	// Line 975, Address: 0x1f2cfc, Func Offset: 0x3ac
	// Line 976, Address: 0x1f2d04, Func Offset: 0x3b4
	// Line 977, Address: 0x1f2d18, Func Offset: 0x3c8
	// Line 978, Address: 0x1f2d28, Func Offset: 0x3d8
	// Line 979, Address: 0x1f2d34, Func Offset: 0x3e4
	// Line 982, Address: 0x1f2d40, Func Offset: 0x3f0
	// Line 981, Address: 0x1f2d44, Func Offset: 0x3f4
	// Line 982, Address: 0x1f2d48, Func Offset: 0x3f8
	// Line 984, Address: 0x1f2d54, Func Offset: 0x404
	// Line 987, Address: 0x1f2d58, Func Offset: 0x408
	// Line 990, Address: 0x1f2d64, Func Offset: 0x414
	// Line 993, Address: 0x1f2d68, Func Offset: 0x418
	// Func End, Address: 0x1f2d84, Func Offset: 0x434
}

// 
// Start address: 0x1f2d90
void PlayerWeaponSet(int player_type, int weapon)
{
	// Line 997, Address: 0x1f2d90, Func Offset: 0
	// Func End, Address: 0x1f2d98, Func Offset: 0x8
}

// 
// Start address: 0x1f2da0
int PlayerWeaponSetByForce(GameItem weapon)
{
	int ret;
	int menu_id;
	// Line 1004, Address: 0x1f2da0, Func Offset: 0
	// Line 1008, Address: 0x1f2dbc, Func Offset: 0x1c
	// Line 1009, Address: 0x1f2dcc, Func Offset: 0x2c
	// Line 1010, Address: 0x1f2dd8, Func Offset: 0x38
	// Line 1011, Address: 0x1f2de4, Func Offset: 0x44
	// Line 1012, Address: 0x1f2de8, Func Offset: 0x48
	// Line 1013, Address: 0x1f2dfc, Func Offset: 0x5c
	// Line 1014, Address: 0x1f2e0c, Func Offset: 0x6c
	// Line 1015, Address: 0x1f2e14, Func Offset: 0x74
	// Line 1016, Address: 0x1f2e20, Func Offset: 0x80
	// Line 1018, Address: 0x1f2e24, Func Offset: 0x84
	// Line 1016, Address: 0x1f2e28, Func Offset: 0x88
	// Line 1017, Address: 0x1f2e2c, Func Offset: 0x8c
	// Line 1018, Address: 0x1f2e30, Func Offset: 0x90
	// Line 1019, Address: 0x1f2e38, Func Offset: 0x98
	// Line 1022, Address: 0x1f2e3c, Func Offset: 0x9c
	// Line 1027, Address: 0x1f2e50, Func Offset: 0xb0
	// Line 1028, Address: 0x1f2e54, Func Offset: 0xb4
	// Func End, Address: 0x1f2e70, Func Offset: 0xd0
}

// 
// Start address: 0x1f2e70
void PlayerWeaponSetFinishCld()
{
	// Line 1031, Address: 0x1f2e70, Func Offset: 0
	// Line 1035, Address: 0x1f2e74, Func Offset: 0x4
	// Line 1031, Address: 0x1f2e78, Func Offset: 0x8
	// Line 1035, Address: 0x1f2e7c, Func Offset: 0xc
	// Line 1036, Address: 0x1f2e84, Func Offset: 0x14
	// Line 1037, Address: 0x1f2e94, Func Offset: 0x24
	// Line 1039, Address: 0x1f2eb4, Func Offset: 0x44
	// Line 1040, Address: 0x1f2ec0, Func Offset: 0x50
	// Line 1041, Address: 0x1f2ed0, Func Offset: 0x60
	// Line 1048, Address: 0x1f2edc, Func Offset: 0x6c
	// Func End, Address: 0x1f2ee8, Func Offset: 0x78
}

// 
// Start address: 0x1f2ef0
void PlayerWeaponRelease(int player_type)
{
	_PLAYER_WORK* p;
	// Line 1053, Address: 0x1f2ef0, Func Offset: 0
	// Line 1052, Address: 0x1f2ef4, Func Offset: 0x4
	// Line 1053, Address: 0x1f2ef8, Func Offset: 0x8
	// Line 1052, Address: 0x1f2efc, Func Offset: 0xc
	// Line 1053, Address: 0x1f2f00, Func Offset: 0x10
	// Line 1052, Address: 0x1f2f04, Func Offset: 0x14
	// Line 1053, Address: 0x1f2f08, Func Offset: 0x18
	// Line 1056, Address: 0x1f2f14, Func Offset: 0x24
	// Line 1058, Address: 0x1f2f20, Func Offset: 0x30
	// Line 1060, Address: 0x1f2f48, Func Offset: 0x58
	// Line 1061, Address: 0x1f2f58, Func Offset: 0x68
	// Line 1062, Address: 0x1f2f60, Func Offset: 0x70
	// Line 1066, Address: 0x1f2f68, Func Offset: 0x78
	// Line 1067, Address: 0x1f2f74, Func Offset: 0x84
	// Line 1069, Address: 0x1f2f80, Func Offset: 0x90
	// Line 1070, Address: 0x1f2f88, Func Offset: 0x98
	// Line 1072, Address: 0x1f2f90, Func Offset: 0xa0
	// Line 1075, Address: 0x1f2f94, Func Offset: 0xa4
	// Func End, Address: 0x1f2fa4, Func Offset: 0xb4
}

// 
// Start address: 0x1f2fb0
void PlayerWeaponReleaseFinishCld()
{
	// Line 1079, Address: 0x1f2fb0, Func Offset: 0
	// Func End, Address: 0x1f2fbc, Func Offset: 0xc
}

// 
// Start address: 0x1f2fc0
void PlayerWeaponHitClear()
{
	// Line 1089, Address: 0x1f2fc0, Func Offset: 0
	// Line 1090, Address: 0x1f2fd0, Func Offset: 0x10
	// Line 1091, Address: 0x1f2fe0, Func Offset: 0x20
	// Line 1094, Address: 0x1f2fe4, Func Offset: 0x24
	// Func End, Address: 0x1f2fec, Func Offset: 0x2c
}

// 
// Start address: 0x1f2ff0
void set_hit_reduce()
{
	int f;
	// Line 1102, Address: 0x1f2ff0, Func Offset: 0
	// Line 1106, Address: 0x1f3000, Func Offset: 0x10
	// Line 1105, Address: 0x1f3004, Func Offset: 0x14
	// Line 1106, Address: 0x1f3008, Func Offset: 0x18
	// Line 1107, Address: 0x1f3010, Func Offset: 0x20
	// Line 1108, Address: 0x1f3018, Func Offset: 0x28
	// Line 1110, Address: 0x1f302c, Func Offset: 0x3c
	// Line 1111, Address: 0x1f3038, Func Offset: 0x48
	// Line 1112, Address: 0x1f3044, Func Offset: 0x54
	// Line 1113, Address: 0x1f3050, Func Offset: 0x60
	// Line 1114, Address: 0x1f305c, Func Offset: 0x6c
	// Line 1115, Address: 0x1f3068, Func Offset: 0x78
	// Line 1116, Address: 0x1f3074, Func Offset: 0x84
	// Line 1117, Address: 0x1f3080, Func Offset: 0x90
	// Line 1118, Address: 0x1f308c, Func Offset: 0x9c
	// Line 1120, Address: 0x1f3090, Func Offset: 0xa0
	// Line 1121, Address: 0x1f309c, Func Offset: 0xac
	// Line 1122, Address: 0x1f30ac, Func Offset: 0xbc
	// Line 1124, Address: 0x1f30b8, Func Offset: 0xc8
	// Line 1125, Address: 0x1f30c0, Func Offset: 0xd0
	// Line 1126, Address: 0x1f30c8, Func Offset: 0xd8
	// Line 1127, Address: 0x1f30d4, Func Offset: 0xe4
	// Line 1128, Address: 0x1f30d8, Func Offset: 0xe8
	// Line 1129, Address: 0x1f30e0, Func Offset: 0xf0
	// Line 1130, Address: 0x1f30ec, Func Offset: 0xfc
	// Line 1131, Address: 0x1f30fc, Func Offset: 0x10c
	// Line 1133, Address: 0x1f3108, Func Offset: 0x118
	// Line 1134, Address: 0x1f3114, Func Offset: 0x124
	// Line 1137, Address: 0x1f3118, Func Offset: 0x128
	// Func End, Address: 0x1f3120, Func Offset: 0x130
}

// 
// Start address: 0x1f3120
float* obb_vertex(_anon1* obb, float* pos)
{
	int i;
	float tmp[4];
	float v0[4];
	float s[4];
	float* p;
	float vert[32];
	float max_dist;
	float v[4];
	float sb[4];
	float dist;
	float nom[4];
	float len;
	float max_vec[4];
	// Line 1141, Address: 0x1f3120, Func Offset: 0
	// Line 1152, Address: 0x1f3128, Func Offset: 0x8
	// Line 1141, Address: 0x1f312c, Func Offset: 0xc
	// Line 1151, Address: 0x1f3138, Func Offset: 0x18
	// Line 1152, Address: 0x1f3154, Func Offset: 0x34
	// Line 1153, Address: 0x1f3164, Func Offset: 0x44
	// Line 1156, Address: 0x1f318c, Func Offset: 0x6c
	// Line 1154, Address: 0x1f3194, Func Offset: 0x74
	// Line 1155, Address: 0x1f3198, Func Offset: 0x78
	// Line 1156, Address: 0x1f319c, Func Offset: 0x7c
	// Line 1157, Address: 0x1f31ac, Func Offset: 0x8c
	// Line 1159, Address: 0x1f31d8, Func Offset: 0xb8
	// Line 1160, Address: 0x1f31e0, Func Offset: 0xc0
	// Line 1161, Address: 0x1f31ec, Func Offset: 0xcc
	// Line 1162, Address: 0x1f31f8, Func Offset: 0xd8
	// Line 1163, Address: 0x1f3204, Func Offset: 0xe4
	// Line 1164, Address: 0x1f3210, Func Offset: 0xf0
	// Line 1165, Address: 0x1f321c, Func Offset: 0xfc
	// Line 1166, Address: 0x1f3228, Func Offset: 0x108
	// Line 1167, Address: 0x1f3238, Func Offset: 0x118
	// Line 1171, Address: 0x1f3264, Func Offset: 0x144
	// Line 1172, Address: 0x1f3278, Func Offset: 0x158
	// Line 1174, Address: 0x1f32a8, Func Offset: 0x188
	// Line 1175, Address: 0x1f32b4, Func Offset: 0x194
	// Line 1176, Address: 0x1f32b8, Func Offset: 0x198
	// Line 1179, Address: 0x1f32c0, Func Offset: 0x1a0
	// Line 1180, Address: 0x1f32c4, Func Offset: 0x1a4
	// Line 1187, Address: 0x1f32d4, Func Offset: 0x1b4
	// Line 1188, Address: 0x1f32f4, Func Offset: 0x1d4
	// Line 1189, Address: 0x1f3330, Func Offset: 0x210
	// Line 1190, Address: 0x1f3344, Func Offset: 0x224
	// Line 1191, Address: 0x1f3378, Func Offset: 0x258
	// Line 1193, Address: 0x1f3380, Func Offset: 0x260
	// Line 1194, Address: 0x1f33b4, Func Offset: 0x294
	// Line 1195, Address: 0x1f33b8, Func Offset: 0x298
	// Line 1198, Address: 0x1f33d8, Func Offset: 0x2b8
	// Line 1199, Address: 0x1f33e0, Func Offset: 0x2c0
	// Func End, Address: 0x1f33f4, Func Offset: 0x2d4
}

// 
// Start address: 0x1f3400
int PlayerWeaponAttack(int player_type, int mode)
{
	_PLAYER_WORK* p;
	int hit;
	float hand_pos[4];
	sgBone* bone;
	_anon12 line;
	_anon0* pol;
	sfMaphitMaterialType mtr;
	float push_vec[4];
	float ftime;
	sfCldPart* cld_part;
	sfCldBody* body;
	int f;
	int parts;
	float kp_pos[4];
	sgBone* bone;
	float* max_vert;
	_anon12 line;
	_anon0* pol;
	sfMaphitMaterialType mtr;
	_anon11 plane;
	int res;
	float tmp[4];
	int vib_hit;
	sgBone* bone;
	sfCldBody* body;
	float mult;
	float rot[4];
	float mulrot[4];
	float addpos[4];
	// Line 1204, Address: 0x1f3400, Func Offset: 0
	// Line 1205, Address: 0x1f3404, Func Offset: 0x4
	// Line 1204, Address: 0x1f3408, Func Offset: 0x8
	// Line 1205, Address: 0x1f340c, Func Offset: 0xc
	// Line 1204, Address: 0x1f3410, Func Offset: 0x10
	// Line 1205, Address: 0x1f3414, Func Offset: 0x14
	// Line 1204, Address: 0x1f3418, Func Offset: 0x18
	// Line 1205, Address: 0x1f341c, Func Offset: 0x1c
	// Line 1204, Address: 0x1f3420, Func Offset: 0x20
	// Line 1205, Address: 0x1f3424, Func Offset: 0x24
	// Line 1204, Address: 0x1f3428, Func Offset: 0x28
	// Line 1205, Address: 0x1f342c, Func Offset: 0x2c
	// Line 1204, Address: 0x1f3430, Func Offset: 0x30
	// Line 1208, Address: 0x1f3434, Func Offset: 0x34
	// Line 1228, Address: 0x1f3440, Func Offset: 0x40
	// Line 1229, Address: 0x1f344c, Func Offset: 0x4c
	// Line 1230, Address: 0x1f3458, Func Offset: 0x58
	// Line 1231, Address: 0x1f3464, Func Offset: 0x64
	// Line 1232, Address: 0x1f3474, Func Offset: 0x74
	// Line 1233, Address: 0x1f3478, Func Offset: 0x78
	// Line 1234, Address: 0x1f3480, Func Offset: 0x80
	// Line 1236, Address: 0x1f3488, Func Offset: 0x88
	// Line 1238, Address: 0x1f3490, Func Offset: 0x90
	// Line 1240, Address: 0x1f3498, Func Offset: 0x98
	// Line 1244, Address: 0x1f349c, Func Offset: 0x9c
	// Line 1240, Address: 0x1f34a0, Func Offset: 0xa0
	// Line 1242, Address: 0x1f34a4, Func Offset: 0xa4
	// Line 1241, Address: 0x1f34a8, Func Offset: 0xa8
	// Line 1240, Address: 0x1f34ac, Func Offset: 0xac
	// Line 1242, Address: 0x1f34b4, Func Offset: 0xb4
	// Line 1243, Address: 0x1f34bc, Func Offset: 0xbc
	// Line 1242, Address: 0x1f34c0, Func Offset: 0xc0
	// Line 1244, Address: 0x1f34c4, Func Offset: 0xc4
	// Line 1245, Address: 0x1f34e4, Func Offset: 0xe4
	// Line 1246, Address: 0x1f351c, Func Offset: 0x11c
	// Line 1248, Address: 0x1f3524, Func Offset: 0x124
	// Line 1254, Address: 0x1f3528, Func Offset: 0x128
	// Line 1257, Address: 0x1f3550, Func Offset: 0x150
	// Line 1258, Address: 0x1f3558, Func Offset: 0x158
	// Line 1260, Address: 0x1f3560, Func Offset: 0x160
	// Line 1261, Address: 0x1f3574, Func Offset: 0x174
	// Line 1262, Address: 0x1f3578, Func Offset: 0x178
	// Line 1264, Address: 0x1f3580, Func Offset: 0x180
	// Line 1265, Address: 0x1f3594, Func Offset: 0x194
	// Line 1267, Address: 0x1f3598, Func Offset: 0x198
	// Line 1269, Address: 0x1f35d8, Func Offset: 0x1d8
	// Line 1270, Address: 0x1f35e4, Func Offset: 0x1e4
	// Line 1272, Address: 0x1f35e8, Func Offset: 0x1e8
	// Line 1275, Address: 0x1f3618, Func Offset: 0x218
	// Line 1276, Address: 0x1f3620, Func Offset: 0x220
	// Line 1281, Address: 0x1f3628, Func Offset: 0x228
	// Line 1283, Address: 0x1f3668, Func Offset: 0x268
	// Line 1284, Address: 0x1f3674, Func Offset: 0x274
	// Line 1286, Address: 0x1f3678, Func Offset: 0x278
	// Line 1289, Address: 0x1f36a8, Func Offset: 0x2a8
	// Line 1290, Address: 0x1f36b0, Func Offset: 0x2b0
	// Line 1298, Address: 0x1f36b8, Func Offset: 0x2b8
	// Line 1299, Address: 0x1f36d0, Func Offset: 0x2d0
	// Line 1300, Address: 0x1f36dc, Func Offset: 0x2dc
	// Line 1302, Address: 0x1f36e0, Func Offset: 0x2e0
	// Line 1305, Address: 0x1f3710, Func Offset: 0x310
	// Line 1306, Address: 0x1f3718, Func Offset: 0x318
	// Line 1315, Address: 0x1f3720, Func Offset: 0x320
	// Line 1327, Address: 0x1f3754, Func Offset: 0x354
	// Line 1328, Address: 0x1f3760, Func Offset: 0x360
	// Line 1331, Address: 0x1f376c, Func Offset: 0x36c
	// Line 1333, Address: 0x1f3790, Func Offset: 0x390
	// Line 1334, Address: 0x1f3798, Func Offset: 0x398
	// Line 1336, Address: 0x1f37c0, Func Offset: 0x3c0
	// Line 1337, Address: 0x1f37d0, Func Offset: 0x3d0
	// Line 1341, Address: 0x1f37dc, Func Offset: 0x3dc
	// Line 1342, Address: 0x1f37ec, Func Offset: 0x3ec
	// Line 1343, Address: 0x1f37f8, Func Offset: 0x3f8
	// Line 1344, Address: 0x1f3804, Func Offset: 0x404
	// Line 1346, Address: 0x1f380c, Func Offset: 0x40c
	// Line 1347, Address: 0x1f3814, Func Offset: 0x414
	// Line 1346, Address: 0x1f3818, Func Offset: 0x418
	// Line 1347, Address: 0x1f381c, Func Offset: 0x41c
	// Line 1348, Address: 0x1f3830, Func Offset: 0x430
	// Line 1350, Address: 0x1f383c, Func Offset: 0x43c
	// Line 1352, Address: 0x1f3840, Func Offset: 0x440
	// Line 1354, Address: 0x1f3848, Func Offset: 0x448
	// Line 1356, Address: 0x1f3870, Func Offset: 0x470
	// Line 1360, Address: 0x1f3880, Func Offset: 0x480
	// Line 1361, Address: 0x1f388c, Func Offset: 0x48c
	// Line 1362, Address: 0x1f389c, Func Offset: 0x49c
	// Line 1363, Address: 0x1f38a4, Func Offset: 0x4a4
	// Line 1383, Address: 0x1f38c0, Func Offset: 0x4c0
	// Line 1385, Address: 0x1f38cc, Func Offset: 0x4cc
	// Line 1386, Address: 0x1f38d4, Func Offset: 0x4d4
	// Line 1387, Address: 0x1f38dc, Func Offset: 0x4dc
	// Line 1389, Address: 0x1f38e4, Func Offset: 0x4e4
	// Line 1392, Address: 0x1f38e8, Func Offset: 0x4e8
	// Line 1394, Address: 0x1f38f0, Func Offset: 0x4f0
	// Line 1399, Address: 0x1f3924, Func Offset: 0x524
	// Line 1400, Address: 0x1f393c, Func Offset: 0x53c
	// Line 1401, Address: 0x1f3944, Func Offset: 0x544
	// Line 1402, Address: 0x1f3950, Func Offset: 0x550
	// Line 1408, Address: 0x1f3958, Func Offset: 0x558
	// Line 1410, Address: 0x1f3968, Func Offset: 0x568
	// Line 1411, Address: 0x1f3978, Func Offset: 0x578
	// Line 1412, Address: 0x1f3988, Func Offset: 0x588
	// Line 1413, Address: 0x1f3994, Func Offset: 0x594
	// Line 1414, Address: 0x1f399c, Func Offset: 0x59c
	// Line 1416, Address: 0x1f39ac, Func Offset: 0x5ac
	// Line 1418, Address: 0x1f39b0, Func Offset: 0x5b0
	// Line 1419, Address: 0x1f39cc, Func Offset: 0x5cc
	// Line 1420, Address: 0x1f39dc, Func Offset: 0x5dc
	// Line 1419, Address: 0x1f39e4, Func Offset: 0x5e4
	// Line 1420, Address: 0x1f39ec, Func Offset: 0x5ec
	// Line 1421, Address: 0x1f39f8, Func Offset: 0x5f8
	// Line 1422, Address: 0x1f3a00, Func Offset: 0x600
	// Line 1423, Address: 0x1f3a08, Func Offset: 0x608
	// Line 1428, Address: 0x1f3a10, Func Offset: 0x610
	// Line 1429, Address: 0x1f3a2c, Func Offset: 0x62c
	// Line 1431, Address: 0x1f3a48, Func Offset: 0x648
	// Line 1432, Address: 0x1f3a64, Func Offset: 0x664
	// Line 1463, Address: 0x1f3a70, Func Offset: 0x670
	// Line 1469, Address: 0x1f3a90, Func Offset: 0x690
	// Line 1471, Address: 0x1f3aa0, Func Offset: 0x6a0
	// Line 1473, Address: 0x1f3aa8, Func Offset: 0x6a8
	// Line 1474, Address: 0x1f3ab4, Func Offset: 0x6b4
	// Line 1473, Address: 0x1f3ab8, Func Offset: 0x6b8
	// Line 1474, Address: 0x1f3abc, Func Offset: 0x6bc
	// Line 1475, Address: 0x1f3af0, Func Offset: 0x6f0
	// Line 1476, Address: 0x1f3afc, Func Offset: 0x6fc
	// Line 1477, Address: 0x1f3b10, Func Offset: 0x710
	// Line 1479, Address: 0x1f3b20, Func Offset: 0x720
	// Line 1480, Address: 0x1f3b28, Func Offset: 0x728
	// Line 1484, Address: 0x1f3b38, Func Offset: 0x738
	// Line 1485, Address: 0x1f3b44, Func Offset: 0x744
	// Line 1486, Address: 0x1f3b60, Func Offset: 0x760
	// Line 1487, Address: 0x1f3b70, Func Offset: 0x770
	// Line 1488, Address: 0x1f3b84, Func Offset: 0x784
	// Line 1489, Address: 0x1f3bb0, Func Offset: 0x7b0
	// Line 1490, Address: 0x1f3be0, Func Offset: 0x7e0
	// Line 1491, Address: 0x1f3bf8, Func Offset: 0x7f8
	// Line 1492, Address: 0x1f3c08, Func Offset: 0x808
	// Line 1495, Address: 0x1f3c10, Func Offset: 0x810
	// Line 1496, Address: 0x1f3c24, Func Offset: 0x824
	// Line 1498, Address: 0x1f3c28, Func Offset: 0x828
	// Line 1499, Address: 0x1f3c34, Func Offset: 0x834
	// Line 1500, Address: 0x1f3c38, Func Offset: 0x838
	// Line 1499, Address: 0x1f3c3c, Func Offset: 0x83c
	// Line 1500, Address: 0x1f3c40, Func Offset: 0x840
	// Line 1501, Address: 0x1f3c4c, Func Offset: 0x84c
	// Line 1502, Address: 0x1f3c50, Func Offset: 0x850
	// Line 1503, Address: 0x1f3c5c, Func Offset: 0x85c
	// Line 1504, Address: 0x1f3c64, Func Offset: 0x864
	// Line 1505, Address: 0x1f3c74, Func Offset: 0x874
	// Line 1508, Address: 0x1f3c80, Func Offset: 0x880
	// Line 1509, Address: 0x1f3c8c, Func Offset: 0x88c
	// Line 1511, Address: 0x1f3c90, Func Offset: 0x890
	// Line 1509, Address: 0x1f3c94, Func Offset: 0x894
	// Line 1511, Address: 0x1f3c98, Func Offset: 0x898
	// Line 1512, Address: 0x1f3ca4, Func Offset: 0x8a4
	// Line 1513, Address: 0x1f3cac, Func Offset: 0x8ac
	// Line 1515, Address: 0x1f3cb8, Func Offset: 0x8b8
	// Line 1517, Address: 0x1f3cc4, Func Offset: 0x8c4
	// Line 1519, Address: 0x1f3cc8, Func Offset: 0x8c8
	// Line 1520, Address: 0x1f3cd0, Func Offset: 0x8d0
	// Line 1523, Address: 0x1f3ce0, Func Offset: 0x8e0
	// Line 1526, Address: 0x1f3cec, Func Offset: 0x8ec
	// Line 1527, Address: 0x1f3cfc, Func Offset: 0x8fc
	// Line 1528, Address: 0x1f3d0c, Func Offset: 0x90c
	// Line 1530, Address: 0x1f3d18, Func Offset: 0x918
	// Line 1531, Address: 0x1f3d30, Func Offset: 0x930
	// Line 1533, Address: 0x1f3d38, Func Offset: 0x938
	// Line 1535, Address: 0x1f3d40, Func Offset: 0x940
	// Line 1533, Address: 0x1f3d44, Func Offset: 0x944
	// Line 1535, Address: 0x1f3d4c, Func Offset: 0x94c
	// Line 1536, Address: 0x1f3d58, Func Offset: 0x958
	// Line 1539, Address: 0x1f3d68, Func Offset: 0x968
	// Line 1543, Address: 0x1f3d70, Func Offset: 0x970
	// Line 1544, Address: 0x1f3d78, Func Offset: 0x978
	// Func End, Address: 0x1f3d98, Func Offset: 0x998
}

// 
// Start address: 0x1f3da0
int PlayerWeaponAttackGun(int player_type)
{
	_PLAYER_WORK* p;
	int hit;
	sgBone* pl_bone;
	float wp_pos[4];
	float wp_rot[4];
	float rot_x[4];
	_anon12 line;
	float ftime;
	float m[4][4];
	float lc[4];
	_anon12 tline;
	sfCldBody* body;
	// Line 1550, Address: 0x1f3da0, Func Offset: 0
	// Line 1551, Address: 0x1f3da4, Func Offset: 0x4
	// Line 1550, Address: 0x1f3da8, Func Offset: 0x8
	// Line 1551, Address: 0x1f3dac, Func Offset: 0xc
	// Line 1550, Address: 0x1f3db0, Func Offset: 0x10
	// Line 1551, Address: 0x1f3db4, Func Offset: 0x14
	// Line 1550, Address: 0x1f3db8, Func Offset: 0x18
	// Line 1551, Address: 0x1f3dbc, Func Offset: 0x1c
	// Line 1550, Address: 0x1f3dc0, Func Offset: 0x20
	// Line 1551, Address: 0x1f3dc4, Func Offset: 0x24
	// Line 1550, Address: 0x1f3dc8, Func Offset: 0x28
	// Line 1551, Address: 0x1f3dcc, Func Offset: 0x2c
	// Line 1574, Address: 0x1f3dd0, Func Offset: 0x30
	// Line 1575, Address: 0x1f3de4, Func Offset: 0x44
	// Line 1574, Address: 0x1f3de8, Func Offset: 0x48
	// Line 1575, Address: 0x1f3dec, Func Offset: 0x4c
	// Line 1576, Address: 0x1f3e00, Func Offset: 0x60
	// Line 1577, Address: 0x1f3e0c, Func Offset: 0x6c
	// Line 1579, Address: 0x1f3e10, Func Offset: 0x70
	// Line 1581, Address: 0x1f3e40, Func Offset: 0xa0
	// Line 1582, Address: 0x1f3e44, Func Offset: 0xa4
	// Line 1583, Address: 0x1f3e50, Func Offset: 0xb0
	// Line 1588, Address: 0x1f3e58, Func Offset: 0xb8
	// Line 1589, Address: 0x1f3e70, Func Offset: 0xd0
	// Line 1590, Address: 0x1f3e78, Func Offset: 0xd8
	// Line 1591, Address: 0x1f3e84, Func Offset: 0xe4
	// Line 1592, Address: 0x1f3e8c, Func Offset: 0xec
	// Line 1599, Address: 0x1f3e90, Func Offset: 0xf0
	// Line 1601, Address: 0x1f3ea0, Func Offset: 0x100
	// Line 1602, Address: 0x1f3eac, Func Offset: 0x10c
	// Line 1604, Address: 0x1f3eb8, Func Offset: 0x118
	// Line 1606, Address: 0x1f3ec4, Func Offset: 0x124
	// Line 1611, Address: 0x1f3ecc, Func Offset: 0x12c
	// Line 1612, Address: 0x1f3ee4, Func Offset: 0x144
	// Line 1613, Address: 0x1f3f10, Func Offset: 0x170
	// Line 1614, Address: 0x1f3f38, Func Offset: 0x198
	// Line 1618, Address: 0x1f3f40, Func Offset: 0x1a0
	// Line 1619, Address: 0x1f3f54, Func Offset: 0x1b4
	// Line 1620, Address: 0x1f3f80, Func Offset: 0x1e0
	// Line 1621, Address: 0x1f3fac, Func Offset: 0x20c
	// Line 1624, Address: 0x1f3fb0, Func Offset: 0x210
	// Line 1625, Address: 0x1f3fc0, Func Offset: 0x220
	// Line 1629, Address: 0x1f3fdc, Func Offset: 0x23c
	// Line 1630, Address: 0x1f3ff0, Func Offset: 0x250
	// Line 1634, Address: 0x1f3ff8, Func Offset: 0x258
	// Line 1636, Address: 0x1f4014, Func Offset: 0x274
	// Line 1637, Address: 0x1f4024, Func Offset: 0x284
	// Line 1638, Address: 0x1f4028, Func Offset: 0x288
	// Line 1640, Address: 0x1f4030, Func Offset: 0x290
	// Line 1641, Address: 0x1f4038, Func Offset: 0x298
	// Line 1645, Address: 0x1f4040, Func Offset: 0x2a0
	// Line 1646, Address: 0x1f4048, Func Offset: 0x2a8
	// Line 1643, Address: 0x1f404c, Func Offset: 0x2ac
	// Line 1646, Address: 0x1f4050, Func Offset: 0x2b0
	// Line 1645, Address: 0x1f4054, Func Offset: 0x2b4
	// Line 1646, Address: 0x1f4058, Func Offset: 0x2b8
	// Line 1643, Address: 0x1f405c, Func Offset: 0x2bc
	// Line 1646, Address: 0x1f4060, Func Offset: 0x2c0
	// Line 1648, Address: 0x1f4090, Func Offset: 0x2f0
	// Line 1649, Address: 0x1f40a8, Func Offset: 0x308
	// Line 1650, Address: 0x1f40bc, Func Offset: 0x31c
	// Line 1672, Address: 0x1f40c0, Func Offset: 0x320
	// Line 1675, Address: 0x1f40e8, Func Offset: 0x348
	// Line 1676, Address: 0x1f4100, Func Offset: 0x360
	// Line 1692, Address: 0x1f4110, Func Offset: 0x370
	// Line 1693, Address: 0x1f4120, Func Offset: 0x380
	// Line 1698, Address: 0x1f4128, Func Offset: 0x388
	// Line 1699, Address: 0x1f4158, Func Offset: 0x3b8
	// Line 1700, Address: 0x1f4164, Func Offset: 0x3c4
	// Line 1702, Address: 0x1f4174, Func Offset: 0x3d4
	// Line 1703, Address: 0x1f4180, Func Offset: 0x3e0
	// Line 1704, Address: 0x1f4184, Func Offset: 0x3e4
	// Line 1703, Address: 0x1f4188, Func Offset: 0x3e8
	// Line 1704, Address: 0x1f418c, Func Offset: 0x3ec
	// Line 1706, Address: 0x1f4198, Func Offset: 0x3f8
	// Line 1707, Address: 0x1f41a4, Func Offset: 0x404
	// Line 1709, Address: 0x1f41ac, Func Offset: 0x40c
	// Line 1712, Address: 0x1f41bc, Func Offset: 0x41c
	// Line 1714, Address: 0x1f41e0, Func Offset: 0x440
	// Line 1722, Address: 0x1f41e8, Func Offset: 0x448
	// Line 1724, Address: 0x1f41f0, Func Offset: 0x450
	// Line 1732, Address: 0x1f41fc, Func Offset: 0x45c
	// Line 1735, Address: 0x1f4200, Func Offset: 0x460
	// Line 1736, Address: 0x1f4210, Func Offset: 0x470
	// Line 1737, Address: 0x1f4220, Func Offset: 0x480
	// Line 1739, Address: 0x1f4230, Func Offset: 0x490
	// Line 1740, Address: 0x1f423c, Func Offset: 0x49c
	// Line 1756, Address: 0x1f4240, Func Offset: 0x4a0
	// Line 1757, Address: 0x1f4248, Func Offset: 0x4a8
	// Func End, Address: 0x1f4264, Func Offset: 0x4c4
}

// 
// Start address: 0x1f4270
int PlayerWeaponAttackFinish(int player_type)
{
	_PLAYER_WORK* p;
	int hit;
	float ftime;
	float start_time;
	float sb[4];
	float en[4];
	float len;
	float lpf;
	float df;
	sfCldBody* body;
	float pos_f[4];
	float tpos[4];
	float tsub[4];
	float tdiff;
	sgBone* bone;
	sgBone* bone;
	// Line 1762, Address: 0x1f4270, Func Offset: 0
	// Line 1761, Address: 0x1f4274, Func Offset: 0x4
	// Line 1762, Address: 0x1f4278, Func Offset: 0x8
	// Line 1761, Address: 0x1f427c, Func Offset: 0xc
	// Line 1762, Address: 0x1f4280, Func Offset: 0x10
	// Line 1761, Address: 0x1f4284, Func Offset: 0x14
	// Line 1762, Address: 0x1f4288, Func Offset: 0x18
	// Line 1761, Address: 0x1f4290, Func Offset: 0x20
	// Line 1762, Address: 0x1f4294, Func Offset: 0x24
	// Line 1770, Address: 0x1f4298, Func Offset: 0x28
	// Line 1771, Address: 0x1f42a8, Func Offset: 0x38
	// Line 1772, Address: 0x1f42b8, Func Offset: 0x48
	// Line 1773, Address: 0x1f42d0, Func Offset: 0x60
	// Line 1774, Address: 0x1f42dc, Func Offset: 0x6c
	// Line 1775, Address: 0x1f42f0, Func Offset: 0x80
	// Line 1776, Address: 0x1f42fc, Func Offset: 0x8c
	// Line 1778, Address: 0x1f4310, Func Offset: 0xa0
	// Line 1780, Address: 0x1f4318, Func Offset: 0xa8
	// Line 1782, Address: 0x1f4338, Func Offset: 0xc8
	// Line 1789, Address: 0x1f4364, Func Offset: 0xf4
	// Line 1790, Address: 0x1f436c, Func Offset: 0xfc
	// Line 1791, Address: 0x1f438c, Func Offset: 0x11c
	// Line 1792, Address: 0x1f4390, Func Offset: 0x120
	// Line 1791, Address: 0x1f4398, Func Offset: 0x128
	// Line 1792, Address: 0x1f43a0, Func Offset: 0x130
	// Line 1793, Address: 0x1f43d8, Func Offset: 0x168
	// Line 1796, Address: 0x1f43f0, Func Offset: 0x180
	// Line 1797, Address: 0x1f4408, Func Offset: 0x198
	// Line 1798, Address: 0x1f440c, Func Offset: 0x19c
	// Line 1799, Address: 0x1f4418, Func Offset: 0x1a8
	// Line 1800, Address: 0x1f4448, Func Offset: 0x1d8
	// Line 1802, Address: 0x1f4450, Func Offset: 0x1e0
	// Line 1803, Address: 0x1f4474, Func Offset: 0x204
	// Line 1804, Address: 0x1f4478, Func Offset: 0x208
	// Line 1807, Address: 0x1f4480, Func Offset: 0x210
	// Line 1808, Address: 0x1f4488, Func Offset: 0x218
	// Line 1813, Address: 0x1f4490, Func Offset: 0x220
	// Line 1815, Address: 0x1f449c, Func Offset: 0x22c
	// Line 1816, Address: 0x1f44b4, Func Offset: 0x244
	// Line 1817, Address: 0x1f44bc, Func Offset: 0x24c
	// Line 1820, Address: 0x1f44c0, Func Offset: 0x250
	// Line 1821, Address: 0x1f44d0, Func Offset: 0x260
	// Line 1822, Address: 0x1f44e0, Func Offset: 0x270
	// Line 1823, Address: 0x1f44ec, Func Offset: 0x27c
	// Line 1824, Address: 0x1f44f0, Func Offset: 0x280
	// Line 1825, Address: 0x1f44fc, Func Offset: 0x28c
	// Line 1827, Address: 0x1f4500, Func Offset: 0x290
	// Line 1828, Address: 0x1f4518, Func Offset: 0x2a8
	// Line 1829, Address: 0x1f451c, Func Offset: 0x2ac
	// Line 1830, Address: 0x1f4528, Func Offset: 0x2b8
	// Line 1839, Address: 0x1f4530, Func Offset: 0x2c0
	// Line 1845, Address: 0x1f4538, Func Offset: 0x2c8
	// Line 1847, Address: 0x1f4544, Func Offset: 0x2d4
	// Line 1848, Address: 0x1f4554, Func Offset: 0x2e4
	// Line 1851, Address: 0x1f4558, Func Offset: 0x2e8
	// Line 1855, Address: 0x1f4564, Func Offset: 0x2f4
	// Line 1856, Address: 0x1f456c, Func Offset: 0x2fc
	// Line 1859, Address: 0x1f458c, Func Offset: 0x31c
	// Line 1857, Address: 0x1f4598, Func Offset: 0x328
	// Line 1859, Address: 0x1f45c8, Func Offset: 0x358
	// Line 1860, Address: 0x1f45d4, Func Offset: 0x364
	// Line 1863, Address: 0x1f45d8, Func Offset: 0x368
	// Line 1864, Address: 0x1f45e4, Func Offset: 0x374
	// Line 1868, Address: 0x1f45ec, Func Offset: 0x37c
	// Line 1872, Address: 0x1f4614, Func Offset: 0x3a4
	// Line 1874, Address: 0x1f4620, Func Offset: 0x3b0
	// Line 1879, Address: 0x1f4648, Func Offset: 0x3d8
	// Line 1880, Address: 0x1f4654, Func Offset: 0x3e4
	// Line 1881, Address: 0x1f4660, Func Offset: 0x3f0
	// Line 1882, Address: 0x1f4664, Func Offset: 0x3f4
	// Line 1885, Address: 0x1f4670, Func Offset: 0x400
	// Line 1886, Address: 0x1f467c, Func Offset: 0x40c
	// Line 1887, Address: 0x1f4688, Func Offset: 0x418
	// Line 1890, Address: 0x1f4690, Func Offset: 0x420
	// Line 1891, Address: 0x1f46c8, Func Offset: 0x458
	// Line 1892, Address: 0x1f46d0, Func Offset: 0x460
	// Line 1891, Address: 0x1f46d4, Func Offset: 0x464
	// Line 1899, Address: 0x1f46d8, Func Offset: 0x468
	// Line 1892, Address: 0x1f46dc, Func Offset: 0x46c
	// Line 1899, Address: 0x1f46e0, Func Offset: 0x470
	// Line 1891, Address: 0x1f46e4, Func Offset: 0x474
	// Line 1892, Address: 0x1f46ec, Func Offset: 0x47c
	// Line 1893, Address: 0x1f46f8, Func Offset: 0x488
	// Line 1894, Address: 0x1f4704, Func Offset: 0x494
	// Line 1895, Address: 0x1f4708, Func Offset: 0x498
	// Line 1896, Address: 0x1f4714, Func Offset: 0x4a4
	// Line 1897, Address: 0x1f471c, Func Offset: 0x4ac
	// Line 1899, Address: 0x1f4728, Func Offset: 0x4b8
	// Line 1900, Address: 0x1f4730, Func Offset: 0x4c0
	// Line 1904, Address: 0x1f4740, Func Offset: 0x4d0
	// Line 1906, Address: 0x1f474c, Func Offset: 0x4dc
	// Line 1907, Address: 0x1f4750, Func Offset: 0x4e0
	// Func End, Address: 0x1f4764, Func Offset: 0x4f4
}

// 
// Start address: 0x1f4770
void PlayerWeaponGetEquipNum(int player_type, int* equip)
{
	int wp_num;
	// Line 1913, Address: 0x1f4770, Func Offset: 0
	// Line 1915, Address: 0x1f4790, Func Offset: 0x20
	// Line 1916, Address: 0x1f4798, Func Offset: 0x28
	// Line 1915, Address: 0x1f479c, Func Offset: 0x2c
	// Line 1916, Address: 0x1f47a0, Func Offset: 0x30
	// Line 1917, Address: 0x1f47a8, Func Offset: 0x38
	// Line 1916, Address: 0x1f47ac, Func Offset: 0x3c
	// Line 1917, Address: 0x1f47b0, Func Offset: 0x40
	// Line 1916, Address: 0x1f47b4, Func Offset: 0x44
	// Line 1918, Address: 0x1f47b8, Func Offset: 0x48
	// Line 1917, Address: 0x1f47bc, Func Offset: 0x4c
	// Line 1918, Address: 0x1f47c0, Func Offset: 0x50
	// Line 1919, Address: 0x1f47c8, Func Offset: 0x58
	// Line 1916, Address: 0x1f47d4, Func Offset: 0x64
	// Line 1917, Address: 0x1f47d8, Func Offset: 0x68
	// Line 1918, Address: 0x1f47e0, Func Offset: 0x70
	// Line 1919, Address: 0x1f47e8, Func Offset: 0x78
	// Line 1920, Address: 0x1f47ec, Func Offset: 0x7c
	// Line 1922, Address: 0x1f47f8, Func Offset: 0x88
	// Line 1923, Address: 0x1f4800, Func Offset: 0x90
	// Line 1924, Address: 0x1f4808, Func Offset: 0x98
	// Line 1925, Address: 0x1f480c, Func Offset: 0x9c
	// Line 1929, Address: 0x1f4810, Func Offset: 0xa0
	// Func End, Address: 0x1f4818, Func Offset: 0xa8
}

// 
// Start address: 0x1f4820
int PlayerWeaponIsShoot(GameItem weapon)
{
	int ret;
	// Line 1969, Address: 0x1f4824, Func Offset: 0x4
	// Line 1971, Address: 0x1f4840, Func Offset: 0x20
	// Line 1972, Address: 0x1f4844, Func Offset: 0x24
	// Line 1975, Address: 0x1f4848, Func Offset: 0x28
	// Func End, Address: 0x1f4850, Func Offset: 0x30
}

// 
// Start address: 0x1f4850
int PlayerWeaponChargable(GameItem weapon_kind)
{
	int ret;
	// Line 1983, Address: 0x1f4850, Func Offset: 0
	// Line 1984, Address: 0x1f485c, Func Offset: 0xc
	// Line 1985, Address: 0x1f4864, Func Offset: 0x14
	// Line 1988, Address: 0x1f4868, Func Offset: 0x18
	// Line 1989, Address: 0x1f489c, Func Offset: 0x4c
	// Line 1992, Address: 0x1f48a0, Func Offset: 0x50
	// Func End, Address: 0x1f48a8, Func Offset: 0x58
}

// 
// Start address: 0x1f48b0
float PlayerWeaponChargePerFrame(GameItem weapon_kind)
{
	int wp;
	float ret;
	float c_time;
	// Line 1996, Address: 0x1f48b0, Func Offset: 0
	// Line 2002, Address: 0x1f48bc, Func Offset: 0xc
	// Line 2003, Address: 0x1f48c8, Func Offset: 0x18
	// Line 2006, Address: 0x1f48d8, Func Offset: 0x28
	// Line 2007, Address: 0x1f48e0, Func Offset: 0x30
	// Line 2008, Address: 0x1f48ec, Func Offset: 0x3c
	// Line 2010, Address: 0x1f48f0, Func Offset: 0x40
	// Line 2013, Address: 0x1f48f4, Func Offset: 0x44
	// Line 2014, Address: 0x1f48fc, Func Offset: 0x4c
	// Line 2017, Address: 0x1f4908, Func Offset: 0x58
	// Line 2018, Address: 0x1f4920, Func Offset: 0x70
	// Line 2020, Address: 0x1f493c, Func Offset: 0x8c
	// Line 2021, Address: 0x1f4940, Func Offset: 0x90
	// Func End, Address: 0x1f4950, Func Offset: 0xa0
}

// 
// Start address: 0x1f4950
int PlayerWeaponDurabilityCheck(GameItem weapon)
{
	int ret;
	int wp_num;
	// Line 2034, Address: 0x1f4950, Func Offset: 0
	// Line 2036, Address: 0x1f4954, Func Offset: 0x4
	// Line 2034, Address: 0x1f4958, Func Offset: 0x8
	// Line 2035, Address: 0x1f496c, Func Offset: 0x1c
	// Line 2038, Address: 0x1f4970, Func Offset: 0x20
	// Line 2039, Address: 0x1f49a8, Func Offset: 0x58
	// Line 2040, Address: 0x1f49ac, Func Offset: 0x5c
	// Line 2041, Address: 0x1f49b0, Func Offset: 0x60
	// Line 2042, Address: 0x1f49cc, Func Offset: 0x7c
	// Line 2045, Address: 0x1f49d0, Func Offset: 0x80
	// Line 2046, Address: 0x1f49d4, Func Offset: 0x84
	// Func End, Address: 0x1f49ec, Func Offset: 0x9c
}

// 
// Start address: 0x1f49f0
float PlayerWeaponGetAnimSpeed(GameItem weapon)
{
	float ret;
	// Line 2053, Address: 0x1f49f0, Func Offset: 0
	// Line 2055, Address: 0x1f49f8, Func Offset: 0x8
	// Line 2057, Address: 0x1f4a00, Func Offset: 0x10
	// Line 2061, Address: 0x1f4a20, Func Offset: 0x30
	// Func End, Address: 0x1f4a28, Func Offset: 0x38
}

