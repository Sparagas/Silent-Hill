typedef struct _MotionLinkMoveParam;
typedef struct sgQTObject;
typedef struct sfObj;
typedef struct EnemyHyenaWork;
typedef struct EnemySenseResult;
typedef struct sgBone;
typedef struct sfOffsetAABB;
typedef enum EnemyHyenaTarget : unsigned short;
typedef struct _anon0;
typedef union sfCldBody;
typedef struct sgIKHandle;
typedef enum GameItem : unsigned char;
typedef struct sfCldPart;
typedef struct _PLAYER_WORK;
typedef struct _anon1;
typedef enum EnemyManageEntryType : unsigned char;
typedef struct HyenaTonguePoint;
typedef enum BattleDamageType : unsigned char;
typedef enum EnemyHyenaAnime : unsigned char;
typedef struct EnemyManageDataOne;
typedef struct EnemyObjHook;
typedef struct sgAnime;
typedef struct _anon2;
typedef struct EnemyBattleDamage;
typedef struct _anon3;
typedef struct _anon4;
typedef struct sfCharacter;
typedef struct _anon5;
typedef struct EnemySenseData;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef union _anon9;
typedef enum PlayerExtStatus : unsigned char;
typedef enum EnemyCondition : unsigned char;
typedef enum EnemySenseResultType : unsigned char;
typedef enum EnemyPlayerType : unsigned char;
typedef union _anon10;
typedef struct sfCldObject;
typedef struct EventFlag;
typedef struct _GAME_WORK;
typedef enum EnemySenseType : unsigned char;
typedef struct sgQTNode;
typedef struct _anon11;
typedef enum BattleAttackKind : unsigned char;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _anon12;
typedef struct sgSVModel;
typedef struct _anon13;

typedef sgIKSolveResult(*type_5)();
typedef void(*type_6)(_anon0*, int, int, float*);
typedef void(*type_8)(sfObj*);
typedef void(*type_11)(sfObj*);
typedef void(*type_22)(sgAnime*, int);
typedef void(*type_52)(sfObj*);
typedef void(*type_64)(sfObj*);

typedef float type_0[4][2];
typedef float type_1[4][4];
typedef _MotionLinkMoveParam type_2[3];
typedef _MotionLinkMoveParam type_3[2];
typedef float type_4[4];
typedef _MotionLinkMoveParam type_7[6];
typedef _anon12 type_9[2];
typedef _MotionLinkMoveParam type_10[2];
typedef _MotionLinkMoveParam type_12[2];
typedef unsigned char type_13[3];
typedef _MotionLinkMoveParam type_14[2];
typedef float type_15[4];
typedef char type_16[2];
typedef _anon10 type_17[2];
typedef _MotionLinkMoveParam type_18[2];
typedef _MotionLinkMoveParam type_19[2];
typedef void* type_20[4];
typedef _MotionLinkMoveParam type_21[5];
typedef _anon10 type_23[7];
typedef _MotionLinkMoveParam type_24[3];
typedef _MotionLinkMoveParam type_25[2];
typedef float type_26[4];
typedef int type_27[1];
typedef _MotionLinkMoveParam type_28[3];
typedef _anon10 type_29[4];
typedef int type_30[1];
typedef unsigned char type_31[4];
typedef _anon6 type_32[4];
typedef float type_33[2];
typedef _MotionLinkMoveParam type_34[2];
typedef _anon9 type_35[0];
typedef _MotionLinkMoveParam type_36[2];
typedef float type_37[2];
typedef int type_38[1];
typedef EnemyHyenaTarget type_39[2];
typedef float type_40[4];
typedef int type_41[1];
typedef _MotionLinkMoveParam type_42[3];
typedef _MotionLinkMoveParam type_43[3];
typedef unsigned char type_44[320];
typedef short type_45[2];
typedef _MotionLinkMoveParam type_46[7];
typedef unsigned short type_47[2];
typedef char type_48[4];
typedef _anon10 type_49[256];
typedef int type_50[1];
typedef unsigned char type_51[4];
typedef sfCldPart* type_53[6];
typedef float type_54[1];
typedef int type_55[8];
typedef int type_56[1];
typedef _MotionLinkMoveParam type_57[2];
typedef unsigned char type_58[3];
typedef int type_59[1];
typedef _MotionLinkMoveParam type_60[2];
typedef sgBone* type_61[8];
typedef int type_62[1];
typedef float type_63[4][8];
typedef sgBone* type_65[2];
typedef _MotionLinkMoveParam type_66[2];
typedef _MotionLinkMoveParam type_67[2];
typedef _PLAYER_WORK type_68[2];
typedef sgBone* type_69[2];
typedef sgBone* type_70[2];

struct _MotionLinkMoveParam
{
	int staf;
	int endf;
	float move[4];
};

struct sgQTObject
{
	_anon5 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

struct sfObj
{
	_anon10 fwork[256];
	_anon10* work;
	void(*func)(sfObj*);
	_anon10* work_pt0;
	_anon10* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon10* sys_work;
	_anon10* scene_work;
	_anon10* event_work;
	_anon10* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct EnemyHyenaWork
{
	float target_pos[4];
	EnemySenseData* player_check;
	float anime_speed;
	float pow;
	EnemyObjHook* animechange_hook;
	EnemyObjHook* animeupdate_hook;
	EnemyHyenaTarget target;
	short target_player;
	short target_bodypart;
	float target_rad;
	unsigned short old_step;
	unsigned short next_step;
	EnemyHyenaAnime old_anime;
	PlayerExtStatus old_playerstat;
	float rot[4];
	char run;
	char wander_lr;
	char wander_horming;
	char target_find;
	char down_lr;
	char set_blood;
	char bone_ctrl_false;
	char anime_chg;
	char anime_just_set;
	char target_dummy_enable;
	char target_dummy_lr;
	char oiuti;
	char stamp_cnt;
	char stamp_dead;
	char kill_counted;
	char chainsaw_damage_se_timer;
	unsigned short anime_play_timer;
	short wander_cnt;
	short wander_next;
	short angry_timer;
	short ignore_blood_timer;
	short ignore_terri_timer;
	short ignore_play_timer;
	short invalid_walkattack_timer;
	short frighten_disable_timer;
	short play_anime_times;
	short run_attack_cnt;
	short tougue_mode;
	short oiuti_timer;
	float src_threaten_dist;
	float nt_inter_time;
	float holding_dist;
	float old_epos_x;
	float old_epos_z;
	float target_dummy_rot;
	float target_dummy_move[4];
	float old_terri_pos[4];
	float holding_pos[4];
	float ppos[4];
	EnemySenseResult blood_res;
	int loop_se;
	int loop_se_slot;
	BattleDamageType bd_type;
	BattleAttackKind bd_kind;
	float bd_shock;
	float bd_dir[4];
	float ffoot[4];
	float waist[4];
	float bfoot[4];
	HyenaTonguePoint* tongue;
	float neck_now_rad;
	char flag[2];
	_anon10 wk[2];
	short rest_timer;
	short step_timer;
};

struct EnemySenseResult
{
	float pos[4];
	EnemySenseResultType type;
	float level;
	sfObj* obj;
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
	_anon7 aabb;
	float offset[4];
};

enum EnemyHyenaTarget : unsigned short
{
	HYENA_TARGET_NONE = 0xffff,
	HYENA_TARGET_PLAYER = 0,
	HYENA_TARGET_HENRY = 0,
	HYENA_TARGET_EILEEN,
	HYENA_TARGET_PLAYER_MAX = 0x1,
	HYENA_TARGET_BLOOD = 0x64,
	HYENA_TARGET_TERRITORY = 0xc8
};

struct _anon0
{
	unsigned long tex0;
	unsigned long clamp;
};

union sfCldBody
{
	_anon8 obb;
	_anon7 aabb;
	sfOffsetAABB offset_aabb;
	_anon4 line;
	_anon5 sphere;
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
	_anon11* anim_ctrl;
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

struct _anon1
{
	_anon9 vertex[0];
};

enum EnemyManageEntryType : unsigned char
{
	ENEMY_MANAGE_ENTRY_TYPE_APPEAR,
	ENEMY_MANAGE_ENTRY_TYPE_FLAG_WAIT,
	ENEMY_MANAGE_ENTRY_TYPE_DIFFERENT_LEVEL,
	ENEMY_MANAGE_ENTRY_TYPE_ERASED,
	ENEMY_MANAGE_ENTRY_TYPE_ALREADY,
	ENEMY_MANAGE_ENTRY_TYPE_ANOTHER_SCENE
};

struct HyenaTonguePoint
{
	int stat;
	int old_stat;
	float v[4];
	float old_v[4];
	float mv[4];
	float weight;
	float length;
	float bend_limit;
	sgBone* bone;
	float bk_quat[4];
};

enum BattleDamageType : unsigned char
{
	BDT_GUN,
	BDT_REVOLVER,
	BDT_PIPE,
	BDT_PIPE_ST,
	BDT_BAT,
	BDT_BAT_ST,
	BDT_CLUB,
	BDT_CLUB_ST,
	BDT_CUTTER,
	BDT_CUTTER_ST,
	BDT_BOTTLE,
	BDT_BOTTLE_ST,
	BDT_SCOOP,
	BDT_SCOOP_ST,
	BDT_HATCHET,
	BDT_HATCHET_ST,
	BDT_PICK,
	BDT_PICK_ST,
	BDT_STUNGUN,
	BDT_CHAINSAW,
	BDT_CHAINSAW_ST,
	BDT_SMALL,
	BDT_OTHER,
	BDT_EIL_HANDBAG = 0xa,
	BDT_EIL_CLUB = 0x4,
	BDT_EIL_ROD = 0x4,
	BDT_EIL_CHAIN = 0x6,
	BDT_EIL_GUN = 0
};

enum EnemyHyenaAnime : unsigned char
{
	EN_HYENA_ANM_MIN,
	EN_HYENA_ANM_ATT1 = 0,
	EN_HYENA_ANM_ATT2,
	EN_HYENA_ANM_ATT3,
	EN_HYENA_ANM_DIEL,
	EN_HYENA_ANM_DIER,
	EN_HYENA_ANM_DMH1,
	EN_HYENA_ANM_DMH2,
	EN_HYENA_ANM_DMP1,
	EN_HYENA_ANM_DMP2,
	EN_HYENA_ANM_DMP3,
	EN_HYENA_ANM_DMP4,
	EN_HYENA_ANM_DMS1,
	EN_HYENA_ANM_DMS2,
	EN_HYENA_ANM_NT,
	EN_HYENA_ANM_ROTL,
	EN_HYENA_ANM_ROTR,
	EN_HYENA_ANM_RUN,
	EN_HYENA_ANM_STY1,
	EN_HYENA_ANM_STY2,
	EN_HYENA_ANM_STY3,
	EN_HYENA_ANM_STY4,
	EN_HYENA_ANM_STY5,
	EN_HYENA_ANM_STY6,
	EN_HYENA_ANM_UPL,
	EN_HYENA_ANM_UPR,
	EN_HYENA_ANM_WLK,
	EN_HYENA_ANM_WLK2,
	EN_HYENA_ANM_WLKB,
	EN_HYENA_ANM_XXC,
	EN_HYENA_ANM_XXG1,
	EN_HYENA_ANM_XXG2,
	EN_HYENA_ANM_XXG3,
	EN_HYENA_ANM_XXP1,
	EN_HYENA_ANM_XXP2,
	EN_HYENA_ANM_XXP3,
	EN_HYENA_ANM_XXP4,
	EN_HYENA_ANM_XXS1,
	EN_HYENA_ANM_XXS2,
	EN_HYENA_ANM_DED,
	EN_HYENA_ANM_MAX = 0x26,
	EN_HYENA_ANM_NUM
};

struct EnemyManageDataOne
{
	float pos[4];
	float rot[4];
	unsigned int id;
	short kind;
	short condition;
	float hp;
	float leave_time;
	short serial;
	char step;
	char type;
	char mode;
	char anime;
	char stage;
	char scene;
	unsigned int lru_point;
	_anon10 work[4];
	unsigned int padding;
};

struct EnemyObjHook
{
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

struct _anon2
{
	unsigned int id;
	float x;
	float y;
	float z;
	float rot;
	int ini;
	int dif;
	unsigned int id2;
	int serial;
	int eventdata;
	_anon10 dmy2[7];
	int flagcheck;
	int flagoffcheck;
};

struct EnemyBattleDamage
{
	float pos[4];
	float dir[4];
	BattleAttackKind kind;
	BattleDamageType type;
	int id;
	float damage;
	float shock;
};

struct _anon3
{
	float abcd[4];
};

struct _anon4
{
	float start[4];
	float end[4];
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

struct _anon5
{
	float center[4];
	float radius;
};

struct EnemySenseData
{
	EnemySenseResult result;
	float* pos;
	float* rot;
	float dist_limit;
	float dist_limit2;
	float angle_limit;
	float check_height;
	EnemySenseType type;
	EnemyPlayerType player;
};

struct _anon6
{
	unsigned char next_offset;
	unsigned char flags;
	short id;
};

struct _anon7
{
	float bmin[4];
	float bmax[4];
};

struct _anon8
{
	float mat[4][4];
	float half_w[4];
};

union _anon9
{
	float node[4];
	_anon6 data[4];
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

enum EnemySenseResultType : unsigned char
{
	EN_SENSE_RES_NOTHING,
	EN_SENSE_RES_FOUND
};

enum EnemyPlayerType : unsigned char
{
	ENEMY_PLAYER_TYPE_PLAYER,
	ENEMY_PLAYER_TYPE_HEROINE,
	ENEMY_PLAYER_TYPE_NPC,
	ENEMY_PLAYER_TYPE_MAX,
	ENEMY_PLAYER_TYPE_NOTHING = 0xff
};

union _anon10
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

struct EventFlag
{
	unsigned char flag[320];
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

enum EnemySenseType : unsigned char
{
	EN_SENSE_TYPE_SIGHT_OF_PLAYER,
	EN_SENSE_TYPE_SIGHT_OF_PLAYER_XZ,
	EN_SENSE_TYPE_NOSIGHT_OF_PLAYER,
	EN_SENSE_TYPE_NOSIGHT_OF_PLAYER_XZ
};

struct sgQTNode
{
	int dummy;
};

struct _anon11
{
	int dummy;
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

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct _anon12
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

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
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

int walk_attack_group_invalid_timer;
float init_rot;
void(*EnemyHyenaAnimeUpdateHook)(sfObj*);
void(*EnemyHyenaAnimeChangeHook)(sfObj*);
_GAME_WORK gamew;
EventFlag event_flag;
int smell_base_cnt;
_anon12 player_ext_info[2];
_PLAYER_WORK playerw[2];
float sg_vector_zero[4];
float chest_new_pos[4];
float chest_hit_pos[4];
_anon4 line;
float sg_vector_unit_z[4];
_MotionLinkMoveParam mlm_hyena_wlk_param[5];
_MotionLinkMoveParam mlm_hyena_wlkb_param[7];
_MotionLinkMoveParam mlm_hyena_run_param[6];
_MotionLinkMoveParam mlm_hyena_att1_param[3];
_MotionLinkMoveParam mlm_hyena_att2_param[2];
_MotionLinkMoveParam mlm_hyena_xxp1_param[2];
_MotionLinkMoveParam mlm_hyena_xxp2_param[2];
_MotionLinkMoveParam mlm_hyena_xxp3_param[2];
_MotionLinkMoveParam mlm_hyena_xxp4_param[2];
_MotionLinkMoveParam mlm_hyena_xxs1_param[3];
_MotionLinkMoveParam mlm_hyena_xxs2_param[3];
_MotionLinkMoveParam mlm_hyena_xxc_param[3];
_MotionLinkMoveParam mlm_hyena_s_front[2];
_MotionLinkMoveParam mlm_hyena_m_front[2];
_MotionLinkMoveParam mlm_hyena_l_front[2];
_MotionLinkMoveParam mlm_hyena_vl_front[2];
_MotionLinkMoveParam mlm_hyena_vl_front_xxg[3];
_MotionLinkMoveParam mlm_hyena_m_swing[2];
_MotionLinkMoveParam mlm_hyena_vl_swing[2];
_MotionLinkMoveParam mlm_hyena_chainsaw[2];
_MotionLinkMoveParam mlm_hyena_gun[2];
float sg_matrix_unit[4][4];

void EnemyHyenaConstruct(sfObj* obj);
void EnemyHyenaHandle(sfObj* obj);
void EnemyHyenaDraw();
void EnemyHyenaDestruct(sfObj* obj);
void EnemyHyenaDataPreserve(sfObj* obj);
void EnemyHyenaDataExtract(sfObj* obj);
void EnemyHyenaControl(sfObj* obj);
void EnemyHyenaControlInit(sfObj* obj);
void EnemyHyenaControlWander(sfObj* obj);
void EnemyHyenaControlDescent(sfObj* obj);
void EnemyHyenaControlApproach(sfObj* obj);
void EnemyHyenaControlLieDown(sfObj* obj);
int EnemyHyenaControlSmell(sfObj* obj);
void EnemyHyenaControlSmellTerritory(sfObj* obj);
int EnemyHyenaCheckBloodRangeByNose(sfObj* obj, EnemySenseResult* blood_res);
void EnemyHyenaControlBloodSip(sfObj* obj);
int EnemyHyenaAttackEnableCheckIE16(sfObj* obj);
void EnemyHyenaControlRunAttack(sfObj* obj);
void EnemyHyenaFrightenDisableSet(sfObj* obj, int timer);
void EnemyHyenaFrightenDisableUpdate(sfObj* obj);
int EnemyHyenaFrightenDisableCheck(sfObj* obj);
int EnemyHyenaFrighten(sfObj* obj, float src_dist);
void EnemyHyenaControlThreaten(sfObj* obj);
void EnemyHyenaControlBackstep(sfObj* obj);
void EnemyHyenaControlBackstepAttack(sfObj* obj);
void EnemyHyenaControlWalkAttack(sfObj* obj);
void EnemyHyenaControlHolding(sfObj* obj);
void EnemyHyenaControlEscape(sfObj* obj);
void EnemyHyenaControlDamage(sfObj* obj);
void EnemyHyenaControlDown(sfObj* obj);
int EnemyHyenaHPRateDownCheck(sfObj* obj);
void EnemyHyenaControlStruggle(sfObj* obj);
void EnemyHyenaControlFinish();
void EnemyHyenaControlRise(sfObj* obj);
void EnemyHyenaSetBloodPool(sfObj* obj);
void EnemyHyenaSetBloodPoolFast(sfObj* obj);
void EnemyHyenaConditionDead();
void EnemyHyenaControlDead(sfObj* obj);
void EnemyHyenaControlDeadAdruptly(sfObj* obj);
void EnemyHyenaControlDeadDemo(sfObj* obj);
void EnemyHyenaControlNT(sfObj* obj);
void EnemyHyenaHitCheck(sfObj* obj);
int EnemyHyenaDamageDetect(sfObj* obj);
int EnemyHyenaDamageIsStrikehead(sfObj* obj, EnemyBattleDamage* bd);
int EnemyHyenaDamageEnableStamp(sfObj* obj);
void EnemyHyenaDamageAdditional(sfObj* obj);
int EnemyHyenaDamageSound(sfObj* obj);
void EnemyHyenaAnimeChangeHook(sfObj* obj);
void EnemyHyenaAnimeUpdateHook(sfObj* obj);
float EnemyHyenaAnimeNTInterTime(sfObj* obj);
void EnemyHyenaAnimeNTInterTimeReset(sfObj* obj);
void EnemyHyenaAnimeSetWithSpeed(sfObj* obj, EnemyHyenaAnime anime, float speed);
void EnemyHyenaAnimeSet(sfObj* obj, EnemyHyenaAnime anime);
int EnemyHyenaAnimeIsEndForwardFrame(sfObj* obj, int frame);
int EnemyHyenaIsRun(sfObj* obj);
void EnemyHyenaNextStepIssue(sfObj* obj, int next);
void EnemyHyenaNextStepSet(sfObj* obj);
void EnemyHyenaControlUpperLowerHalf(sfObj* obj);
void EnemyHyenaFootMove_sub(float* now, float* par, float base_rad, float range_rad, float dist);
void EnemyHyenaFootMove(sfObj* obj);
void EnemyHyenaNeckMove(sfObj* obj);
void EnemyHyenaSetCharaRot(sfObj* obj);
_MotionLinkMoveParam* EnemyHyenaMotionLinkDataGet(sfObj* obj);
_MotionLinkMoveParam* EnemyHyenaMotionLinkDamageDataGet(sfObj* obj);
void EnemyHyenaMotionLinkMove(sfObj* obj);
void EnemyHyenaTargetReset(sfObj* obj);
EnemyHyenaTarget EnemyHyenaTargetSearch_sub(sfObj* obj, float* pos);
int EnemyHyenaTargetSearch(sfObj* obj, float* pos);
int EnemyHyenaTargetSearchPlayerRun(sfObj* obj);
void EnemyHyenaTargetSetPlayer(sfObj* obj, EnemyHyenaTarget trgtype);
void EnemyHyenaTargetDummyPlayerInit(sfObj* obj);
void EnemyHyenaTargetDummyMoveUpdata(sfObj* obj);
int EnemyHyenaTargetCheckHuman(int target);
void EnemyHyenaTargetPosUpdate(sfObj* obj);
void EnemyHyenaTargetRadianSet(sfObj* obj);
int EnemyHyenaTargetRadianHorming(sfObj* obj, float horming_rad_unit);
int EnemyHyenaDetectPlayerFront(sfObj* obj, float rad_range);
float EnemyHyenaDetectSide(sfObj* obj, float* pos);
int EnemyHyenaDetectPlayerBackside(sfObj* obj);
void EnemyHyenaOldPlayerStatSet(sfObj* obj);
PlayerExtStatus EnemyHyenaOldPlayerStat(sfObj* obj);
void EnemyHyenaAngryTimerset(sfObj* obj, int timer);
void EnemyHyenaAngryUpdate(sfObj* obj);
int EnemyHyenaAngryCheck(sfObj* obj);
void EnemyHyenaAngryCollidePlayer(sfObj* obj);
void EnemyHyenaIgnoneBloodpoolTimerset(sfObj* obj, int timer);
void EnemyHyenaIgnoneBloodpoolUpdate(sfObj* obj);
int EnemyHyenaIgnoneBloodpoolCheck(sfObj* obj);
void EnemyHyenaIgnoneTerritoryTimerset(sfObj* obj, int timer);
void EnemyHyenaIgnoneTerritoryUpdate(sfObj* obj);
int EnemyHyenaIgnoneTerritoryCheck(sfObj* obj);
void EnemyHyenaIgnonePlayerTimerset(sfObj* obj, int timer);
void EnemyHyenaIgnonePlayerUpdate(sfObj* obj);
int EnemyHyenaIgnonePlayerCheck(sfObj* obj);
void EnemyHyenaInvalidWalkAttackTimerset(sfObj* obj, int timer);
void EnemyHyenaInvalidWalkAttackUpdate(sfObj* obj);
int EnemyHyenaInvalidWalkAttackCheck(sfObj* obj);
void EnemyHyenaSetInvalidWalkAttack(sfObj* obj);
void EnemyHyenaLoopSoundCall(sfObj* obj, int se);
void EnemyHyenaLoopSoundStop(sfObj* obj);
void EnemyHyenaWalkAttackGroupInvalidUpdate(sfObj* obj);
int EnemyHyenaWalkAttackGroupInvalidCheck();
int EnemyHyenaBackStepGameLevel();
int EnemyHyenaRunCornerCheck(sfObj* obj, int time);

// 
// Start address: 0x20a490
void EnemyHyenaConstruct(sfObj* obj)
{
	EnemyManageEntryType etype;
	EnemyHyenaWork* ew;
	_anon2* pse;
	_anon8 obb;
	_anon7 aabb;
	float epos[4];
	// Line 481, Address: 0x20a490, Func Offset: 0
	// Line 504, Address: 0x20a4ac, Func Offset: 0x1c
	// Line 508, Address: 0x20a4b8, Func Offset: 0x28
	// Line 511, Address: 0x20a4c4, Func Offset: 0x34
	// Line 512, Address: 0x20a4d0, Func Offset: 0x40
	// Line 514, Address: 0x20a4f8, Func Offset: 0x68
	// Line 515, Address: 0x20a500, Func Offset: 0x70
	// Line 519, Address: 0x20a508, Func Offset: 0x78
	// Line 522, Address: 0x20a52c, Func Offset: 0x9c
	// Line 526, Address: 0x20a53c, Func Offset: 0xac
	// Line 527, Address: 0x20a544, Func Offset: 0xb4
	// Line 532, Address: 0x20a580, Func Offset: 0xf0
	// Line 534, Address: 0x20a5a0, Func Offset: 0x110
	// Line 535, Address: 0x20a5b0, Func Offset: 0x120
	// Line 537, Address: 0x20a5b8, Func Offset: 0x128
	// Line 547, Address: 0x20a5c8, Func Offset: 0x138
	// Line 551, Address: 0x20a5d4, Func Offset: 0x144
	// Line 553, Address: 0x20a5f4, Func Offset: 0x164
	// Line 561, Address: 0x20a60c, Func Offset: 0x17c
	// Line 562, Address: 0x20a614, Func Offset: 0x184
	// Line 563, Address: 0x20a61c, Func Offset: 0x18c
	// Line 564, Address: 0x20a620, Func Offset: 0x190
	// Line 563, Address: 0x20a624, Func Offset: 0x194
	// Line 569, Address: 0x20a62c, Func Offset: 0x19c
	// Line 564, Address: 0x20a630, Func Offset: 0x1a0
	// Line 566, Address: 0x20a634, Func Offset: 0x1a4
	// Line 564, Address: 0x20a638, Func Offset: 0x1a8
	// Line 570, Address: 0x20a63c, Func Offset: 0x1ac
	// Line 566, Address: 0x20a640, Func Offset: 0x1b0
	// Line 563, Address: 0x20a644, Func Offset: 0x1b4
	// Line 566, Address: 0x20a648, Func Offset: 0x1b8
	// Line 571, Address: 0x20a64c, Func Offset: 0x1bc
	// Line 567, Address: 0x20a650, Func Offset: 0x1c0
	// Line 564, Address: 0x20a654, Func Offset: 0x1c4
	// Line 569, Address: 0x20a658, Func Offset: 0x1c8
	// Line 566, Address: 0x20a65c, Func Offset: 0x1cc
	// Line 567, Address: 0x20a660, Func Offset: 0x1d0
	// Line 570, Address: 0x20a664, Func Offset: 0x1d4
	// Line 566, Address: 0x20a668, Func Offset: 0x1d8
	// Line 567, Address: 0x20a66c, Func Offset: 0x1dc
	// Line 569, Address: 0x20a670, Func Offset: 0x1e0
	// Line 571, Address: 0x20a674, Func Offset: 0x1e4
	// Line 573, Address: 0x20a67c, Func Offset: 0x1ec
	// Line 574, Address: 0x20a688, Func Offset: 0x1f8
	// Line 573, Address: 0x20a69c, Func Offset: 0x20c
	// Line 574, Address: 0x20a6a0, Func Offset: 0x210
	// Line 579, Address: 0x20a6a8, Func Offset: 0x218
	// Line 583, Address: 0x20a6b8, Func Offset: 0x228
	// Line 585, Address: 0x20a6c4, Func Offset: 0x234
	// Line 586, Address: 0x20a6d0, Func Offset: 0x240
	// Line 587, Address: 0x20a6dc, Func Offset: 0x24c
	// Line 588, Address: 0x20a6f0, Func Offset: 0x260
	// Line 594, Address: 0x20a704, Func Offset: 0x274
	// Line 597, Address: 0x20a710, Func Offset: 0x280
	// Line 598, Address: 0x20a718, Func Offset: 0x288
	// Line 603, Address: 0x20a720, Func Offset: 0x290
	// Line 607, Address: 0x20a728, Func Offset: 0x298
	// Line 608, Address: 0x20a734, Func Offset: 0x2a4
	// Line 609, Address: 0x20a740, Func Offset: 0x2b0
	// Line 613, Address: 0x20a74c, Func Offset: 0x2bc
	// Line 614, Address: 0x20a75c, Func Offset: 0x2cc
	// Line 615, Address: 0x20a764, Func Offset: 0x2d4
	// Line 617, Address: 0x20a770, Func Offset: 0x2e0
	// Line 618, Address: 0x20a77c, Func Offset: 0x2ec
	// Line 622, Address: 0x20a780, Func Offset: 0x2f0
	// Line 623, Address: 0x20a788, Func Offset: 0x2f8
	// Line 624, Address: 0x20a790, Func Offset: 0x300
	// Line 626, Address: 0x20a798, Func Offset: 0x308
	// Line 627, Address: 0x20a79c, Func Offset: 0x30c
	// Line 634, Address: 0x20a7a4, Func Offset: 0x314
	// Line 627, Address: 0x20a7ac, Func Offset: 0x31c
	// Line 628, Address: 0x20a7b0, Func Offset: 0x320
	// Line 634, Address: 0x20a7bc, Func Offset: 0x32c
	// Line 635, Address: 0x20a7c4, Func Offset: 0x334
	// Line 636, Address: 0x20a7d8, Func Offset: 0x348
	// Line 637, Address: 0x20a7f4, Func Offset: 0x364
	// Line 638, Address: 0x20a818, Func Offset: 0x388
	// Line 639, Address: 0x20a838, Func Offset: 0x3a8
	// Line 640, Address: 0x20a85c, Func Offset: 0x3cc
	// Line 645, Address: 0x20a87c, Func Offset: 0x3ec
	// Line 646, Address: 0x20a890, Func Offset: 0x400
	// Line 647, Address: 0x20a8a8, Func Offset: 0x418
	// Line 648, Address: 0x20a8b0, Func Offset: 0x420
	// Line 650, Address: 0x20a8b8, Func Offset: 0x428
	// Line 653, Address: 0x20a8cc, Func Offset: 0x43c
	// Line 657, Address: 0x20a8d8, Func Offset: 0x448
	// Line 659, Address: 0x20a904, Func Offset: 0x474
	// Line 661, Address: 0x20a908, Func Offset: 0x478
	// Line 662, Address: 0x20a914, Func Offset: 0x484
	// Line 663, Address: 0x20a920, Func Offset: 0x490
	// Line 665, Address: 0x20a928, Func Offset: 0x498
	// Line 666, Address: 0x20a938, Func Offset: 0x4a8
	// Line 667, Address: 0x20a954, Func Offset: 0x4c4
	// Line 668, Address: 0x20a95c, Func Offset: 0x4cc
	// Line 670, Address: 0x20a968, Func Offset: 0x4d8
	// Line 672, Address: 0x20a974, Func Offset: 0x4e4
	// Line 673, Address: 0x20a980, Func Offset: 0x4f0
	// Line 674, Address: 0x20a998, Func Offset: 0x508
	// Line 675, Address: 0x20a9a0, Func Offset: 0x510
	// Line 677, Address: 0x20a9a8, Func Offset: 0x518
	// Line 678, Address: 0x20a9b4, Func Offset: 0x524
	// Line 679, Address: 0x20a9b8, Func Offset: 0x528
	// Line 681, Address: 0x20a9c4, Func Offset: 0x534
	// Line 693, Address: 0x20a9c8, Func Offset: 0x538
	// Line 694, Address: 0x20a9d0, Func Offset: 0x540
	// Func End, Address: 0x20a9f0, Func Offset: 0x560
}

// 
// Start address: 0x20a9f0
void EnemyHyenaHandle(sfObj* obj)
{
	EnemyCondition cond;
	EnemyHyenaWork* ew;
	float epos[4];
	// Line 700, Address: 0x20a9f0, Func Offset: 0
	// Line 705, Address: 0x20aa04, Func Offset: 0x14
	// Line 708, Address: 0x20aa0c, Func Offset: 0x1c
	// Line 713, Address: 0x20aa1c, Func Offset: 0x2c
	// Line 715, Address: 0x20aa50, Func Offset: 0x60
	// Line 718, Address: 0x20aa64, Func Offset: 0x74
	// Line 721, Address: 0x20aa68, Func Offset: 0x78
	// Line 722, Address: 0x20aa74, Func Offset: 0x84
	// Line 725, Address: 0x20aa80, Func Offset: 0x90
	// Line 727, Address: 0x20aa88, Func Offset: 0x98
	// Line 729, Address: 0x20aa98, Func Offset: 0xa8
	// Line 730, Address: 0x20aaa0, Func Offset: 0xb0
	// Line 754, Address: 0x20aaa8, Func Offset: 0xb8
	// Line 757, Address: 0x20aab0, Func Offset: 0xc0
	// Line 760, Address: 0x20aab8, Func Offset: 0xc8
	// Line 762, Address: 0x20aac0, Func Offset: 0xd0
	// Line 764, Address: 0x20aacc, Func Offset: 0xdc
	// Line 767, Address: 0x20aad4, Func Offset: 0xe4
	// Line 770, Address: 0x20aadc, Func Offset: 0xec
	// Line 771, Address: 0x20aae4, Func Offset: 0xf4
	// Line 775, Address: 0x20aae8, Func Offset: 0xf8
	// Line 778, Address: 0x20ab08, Func Offset: 0x118
	// Line 780, Address: 0x20ab18, Func Offset: 0x128
	// Line 781, Address: 0x20ab28, Func Offset: 0x138
	// Line 784, Address: 0x20ab30, Func Offset: 0x140
	// Line 786, Address: 0x20ab50, Func Offset: 0x160
	// Line 791, Address: 0x20ab60, Func Offset: 0x170
	// Line 792, Address: 0x20ab6c, Func Offset: 0x17c
	// Line 796, Address: 0x20ab70, Func Offset: 0x180
	// Line 792, Address: 0x20ab74, Func Offset: 0x184
	// Line 793, Address: 0x20ab78, Func Offset: 0x188
	// Line 796, Address: 0x20ab7c, Func Offset: 0x18c
	// Line 797, Address: 0x20ab84, Func Offset: 0x194
	// Line 825, Address: 0x20ab88, Func Offset: 0x198
	// Line 837, Address: 0x20ab98, Func Offset: 0x1a8
	// Line 839, Address: 0x20aba0, Func Offset: 0x1b0
	// Line 841, Address: 0x20aba8, Func Offset: 0x1b8
	// Line 843, Address: 0x20abb0, Func Offset: 0x1c0
	// Func End, Address: 0x20abc8, Func Offset: 0x1d8
}

// 
// Start address: 0x20abd0
void EnemyHyenaDraw()
{
	// Line 862, Address: 0x20abd0, Func Offset: 0
	// Func End, Address: 0x20abd8, Func Offset: 0x8
}

// 
// Start address: 0x20abe0
void EnemyHyenaDestruct(sfObj* obj)
{
	EnemyHyenaWork* ew;
	// Line 868, Address: 0x20abe0, Func Offset: 0
	// Line 871, Address: 0x20abf0, Func Offset: 0x10
	// Line 872, Address: 0x20abf8, Func Offset: 0x18
	// Line 873, Address: 0x20ac00, Func Offset: 0x20
	// Line 877, Address: 0x20ac0c, Func Offset: 0x2c
	// Line 878, Address: 0x20ac14, Func Offset: 0x34
	// Line 879, Address: 0x20ac1c, Func Offset: 0x3c
	// Line 880, Address: 0x20ac24, Func Offset: 0x44
	// Line 882, Address: 0x20ac2c, Func Offset: 0x4c
	// Line 883, Address: 0x20ac34, Func Offset: 0x54
	// Func End, Address: 0x20ac48, Func Offset: 0x68
}

// 
// Start address: 0x20ac50
void EnemyHyenaDataPreserve(sfObj* obj)
{
	EnemyHyenaWork* ew;
	EnemyManageDataOne* pe;
	_anon10 work;
	// Line 889, Address: 0x20ac50, Func Offset: 0
	// Line 894, Address: 0x20ac64, Func Offset: 0x14
	// Line 895, Address: 0x20ac6c, Func Offset: 0x1c
	// Line 896, Address: 0x20ac78, Func Offset: 0x28
	// Line 897, Address: 0x20ac84, Func Offset: 0x34
	// Line 900, Address: 0x20ac90, Func Offset: 0x40
	// Line 899, Address: 0x20ac94, Func Offset: 0x44
	// Line 902, Address: 0x20ac98, Func Offset: 0x48
	// Line 904, Address: 0x20ac9c, Func Offset: 0x4c
	// Line 899, Address: 0x20aca0, Func Offset: 0x50
	// Line 900, Address: 0x20aca4, Func Offset: 0x54
	// Line 901, Address: 0x20acac, Func Offset: 0x5c
	// Line 902, Address: 0x20acb4, Func Offset: 0x64
	// Line 903, Address: 0x20acbc, Func Offset: 0x6c
	// Line 904, Address: 0x20acc4, Func Offset: 0x74
	// Line 905, Address: 0x20accc, Func Offset: 0x7c
	// Func End, Address: 0x20ace4, Func Offset: 0x94
}

// 
// Start address: 0x20acf0
void EnemyHyenaDataExtract(sfObj* obj)
{
	EnemyHyenaWork* ew;
	EnemyManageDataOne* pe;
	_anon10 work;
	// Line 911, Address: 0x20acf0, Func Offset: 0
	// Line 916, Address: 0x20ad04, Func Offset: 0x14
	// Line 917, Address: 0x20ad10, Func Offset: 0x20
	// Line 918, Address: 0x20ad24, Func Offset: 0x34
	// Line 919, Address: 0x20ad30, Func Offset: 0x40
	// Line 921, Address: 0x20ad3c, Func Offset: 0x4c
	// Line 922, Address: 0x20ad44, Func Offset: 0x54
	// Line 923, Address: 0x20ad48, Func Offset: 0x58
	// Line 925, Address: 0x20ad4c, Func Offset: 0x5c
	// Line 928, Address: 0x20ad50, Func Offset: 0x60
	// Line 921, Address: 0x20ad54, Func Offset: 0x64
	// Line 922, Address: 0x20ad58, Func Offset: 0x68
	// Line 923, Address: 0x20ad60, Func Offset: 0x70
	// Line 924, Address: 0x20ad68, Func Offset: 0x78
	// Line 925, Address: 0x20ad70, Func Offset: 0x80
	// Line 926, Address: 0x20ad78, Func Offset: 0x88
	// Line 928, Address: 0x20ad7c, Func Offset: 0x8c
	// Line 931, Address: 0x20ad84, Func Offset: 0x94
	// Line 932, Address: 0x20ad90, Func Offset: 0xa0
	// Func End, Address: 0x20ada8, Func Offset: 0xb8
}

// 
// Start address: 0x20adb0
void EnemyHyenaControl(sfObj* obj)
{
	EnemyHyenaWork* ew;
	// Line 956, Address: 0x20adb0, Func Offset: 0
	// Line 957, Address: 0x20adc0, Func Offset: 0x10
	// Line 962, Address: 0x20adcc, Func Offset: 0x1c
	// Line 963, Address: 0x20add8, Func Offset: 0x28
	// Line 967, Address: 0x20ade0, Func Offset: 0x30
	// Line 968, Address: 0x20adf0, Func Offset: 0x40
	// Line 969, Address: 0x20adf8, Func Offset: 0x48
	// Line 970, Address: 0x20ae00, Func Offset: 0x50
	// Line 973, Address: 0x20ae08, Func Offset: 0x58
	// Line 976, Address: 0x20ae10, Func Offset: 0x60
	// Line 977, Address: 0x20ae3c, Func Offset: 0x8c
	// Line 979, Address: 0x20ae40, Func Offset: 0x90
	// Line 980, Address: 0x20ae48, Func Offset: 0x98
	// Line 983, Address: 0x20ae50, Func Offset: 0xa0
	// Line 984, Address: 0x20ae58, Func Offset: 0xa8
	// Line 987, Address: 0x20ae60, Func Offset: 0xb0
	// Line 988, Address: 0x20ae68, Func Offset: 0xb8
	// Line 991, Address: 0x20ae70, Func Offset: 0xc0
	// Line 992, Address: 0x20ae78, Func Offset: 0xc8
	// Line 995, Address: 0x20ae80, Func Offset: 0xd0
	// Line 996, Address: 0x20ae88, Func Offset: 0xd8
	// Line 999, Address: 0x20ae90, Func Offset: 0xe0
	// Line 1000, Address: 0x20ae98, Func Offset: 0xe8
	// Line 1003, Address: 0x20aea0, Func Offset: 0xf0
	// Line 1004, Address: 0x20aea8, Func Offset: 0xf8
	// Line 1007, Address: 0x20aeb0, Func Offset: 0x100
	// Line 1008, Address: 0x20aeb8, Func Offset: 0x108
	// Line 1011, Address: 0x20aec0, Func Offset: 0x110
	// Line 1012, Address: 0x20aec8, Func Offset: 0x118
	// Line 1015, Address: 0x20aed0, Func Offset: 0x120
	// Line 1016, Address: 0x20aed8, Func Offset: 0x128
	// Line 1019, Address: 0x20aee0, Func Offset: 0x130
	// Line 1020, Address: 0x20aee8, Func Offset: 0x138
	// Line 1023, Address: 0x20aef0, Func Offset: 0x140
	// Line 1024, Address: 0x20aef8, Func Offset: 0x148
	// Line 1027, Address: 0x20af00, Func Offset: 0x150
	// Line 1028, Address: 0x20af08, Func Offset: 0x158
	// Line 1031, Address: 0x20af10, Func Offset: 0x160
	// Line 1032, Address: 0x20af18, Func Offset: 0x168
	// Line 1035, Address: 0x20af20, Func Offset: 0x170
	// Line 1036, Address: 0x20af28, Func Offset: 0x178
	// Line 1039, Address: 0x20af30, Func Offset: 0x180
	// Line 1040, Address: 0x20af38, Func Offset: 0x188
	// Line 1043, Address: 0x20af40, Func Offset: 0x190
	// Line 1044, Address: 0x20af48, Func Offset: 0x198
	// Line 1047, Address: 0x20af50, Func Offset: 0x1a0
	// Line 1048, Address: 0x20af58, Func Offset: 0x1a8
	// Line 1051, Address: 0x20af60, Func Offset: 0x1b0
	// Line 1052, Address: 0x20af68, Func Offset: 0x1b8
	// Line 1055, Address: 0x20af70, Func Offset: 0x1c0
	// Line 1056, Address: 0x20af78, Func Offset: 0x1c8
	// Line 1059, Address: 0x20af80, Func Offset: 0x1d0
	// Line 1060, Address: 0x20af88, Func Offset: 0x1d8
	// Line 1063, Address: 0x20af90, Func Offset: 0x1e0
	// Line 1064, Address: 0x20af98, Func Offset: 0x1e8
	// Line 1067, Address: 0x20afa0, Func Offset: 0x1f0
	// Line 1068, Address: 0x20afa8, Func Offset: 0x1f8
	// Line 1071, Address: 0x20afb0, Func Offset: 0x200
	// Line 1076, Address: 0x20afb8, Func Offset: 0x208
	// Line 1079, Address: 0x20afc4, Func Offset: 0x214
	// Line 1080, Address: 0x20afd0, Func Offset: 0x220
	// Line 1083, Address: 0x20afd8, Func Offset: 0x228
	// Line 1085, Address: 0x20afe0, Func Offset: 0x230
	// Line 1086, Address: 0x20afe8, Func Offset: 0x238
	// Line 1087, Address: 0x20aff0, Func Offset: 0x240
	// Line 1088, Address: 0x20aff8, Func Offset: 0x248
	// Line 1089, Address: 0x20b000, Func Offset: 0x250
	// Line 1090, Address: 0x20b008, Func Offset: 0x258
	// Line 1091, Address: 0x20b010, Func Offset: 0x260
	// Line 1092, Address: 0x20b018, Func Offset: 0x268
	// Line 1094, Address: 0x20b020, Func Offset: 0x270
	// Line 1095, Address: 0x20b038, Func Offset: 0x288
	// Line 1098, Address: 0x20b040, Func Offset: 0x290
	// Line 1099, Address: 0x20b048, Func Offset: 0x298
	// Func End, Address: 0x20b05c, Func Offset: 0x2ac
}

// 
// Start address: 0x20b060
void EnemyHyenaControlInit(sfObj* obj)
{
	float pos[4];
	float rot[4];
	// Line 1105, Address: 0x20b060, Func Offset: 0
	// Line 1119, Address: 0x20b068, Func Offset: 0x8
	// Line 1105, Address: 0x20b06c, Func Offset: 0xc
	// Line 1119, Address: 0x20b070, Func Offset: 0x10
	// Line 1120, Address: 0x20b078, Func Offset: 0x18
	// Line 1123, Address: 0x20b084, Func Offset: 0x24
	// Line 1125, Address: 0x20b0a4, Func Offset: 0x44
	// Line 1126, Address: 0x20b0ac, Func Offset: 0x4c
	// Line 1128, Address: 0x20b0b8, Func Offset: 0x58
	// Line 1129, Address: 0x20b0c4, Func Offset: 0x64
	// Line 1131, Address: 0x20b0d0, Func Offset: 0x70
	// Func End, Address: 0x20b0e0, Func Offset: 0x80
}

// 
// Start address: 0x20b0e0
void EnemyHyenaControlWander(sfObj* obj)
{
	EnemyHyenaWork* ew;
	float rot;
	float unit[4];
	int i;
	float ppos[4];
	int rnd;
	// Line 1139, Address: 0x20b0e0, Func Offset: 0
	// Line 1142, Address: 0x20b0f8, Func Offset: 0x18
	// Line 1143, Address: 0x20b100, Func Offset: 0x20
	// Line 1147, Address: 0x20b10c, Func Offset: 0x2c
	// Line 1148, Address: 0x20b144, Func Offset: 0x64
	// Line 1150, Address: 0x20b148, Func Offset: 0x68
	// Line 1151, Address: 0x20b154, Func Offset: 0x74
	// Line 1150, Address: 0x20b158, Func Offset: 0x78
	// Line 1152, Address: 0x20b15c, Func Offset: 0x7c
	// Line 1153, Address: 0x20b17c, Func Offset: 0x9c
	// Line 1154, Address: 0x20b1d0, Func Offset: 0xf0
	// Line 1153, Address: 0x20b1d8, Func Offset: 0xf8
	// Line 1154, Address: 0x20b1dc, Func Offset: 0xfc
	// Line 1153, Address: 0x20b1e0, Func Offset: 0x100
	// Line 1154, Address: 0x20b1e4, Func Offset: 0x104
	// Line 1156, Address: 0x20b1ec, Func Offset: 0x10c
	// Line 1157, Address: 0x20b1f4, Func Offset: 0x114
	// Line 1158, Address: 0x20b200, Func Offset: 0x120
	// Line 1159, Address: 0x20b208, Func Offset: 0x128
	// Line 1163, Address: 0x20b210, Func Offset: 0x130
	// Line 1164, Address: 0x20b21c, Func Offset: 0x13c
	// Line 1170, Address: 0x20b228, Func Offset: 0x148
	// Line 1172, Address: 0x20b244, Func Offset: 0x164
	// Line 1175, Address: 0x20b250, Func Offset: 0x170
	// Line 1176, Address: 0x20b264, Func Offset: 0x184
	// Line 1177, Address: 0x20b284, Func Offset: 0x1a4
	// Line 1178, Address: 0x20b288, Func Offset: 0x1a8
	// Line 1180, Address: 0x20b290, Func Offset: 0x1b0
	// Line 1184, Address: 0x20b2a0, Func Offset: 0x1c0
	// Line 1186, Address: 0x20b2c8, Func Offset: 0x1e8
	// Line 1191, Address: 0x20b2d0, Func Offset: 0x1f0
	// Line 1194, Address: 0x20b2d8, Func Offset: 0x1f8
	// Line 1195, Address: 0x20b2e4, Func Offset: 0x204
	// Line 1198, Address: 0x20b30c, Func Offset: 0x22c
	// Line 1199, Address: 0x20b314, Func Offset: 0x234
	// Line 1202, Address: 0x20b318, Func Offset: 0x238
	// Line 1203, Address: 0x20b320, Func Offset: 0x240
	// Line 1204, Address: 0x20b32c, Func Offset: 0x24c
	// Line 1206, Address: 0x20b334, Func Offset: 0x254
	// Line 1208, Address: 0x20b33c, Func Offset: 0x25c
	// Line 1210, Address: 0x20b340, Func Offset: 0x260
	// Line 1214, Address: 0x20b35c, Func Offset: 0x27c
	// Line 1215, Address: 0x20b368, Func Offset: 0x288
	// Line 1216, Address: 0x20b374, Func Offset: 0x294
	// Line 1217, Address: 0x20b3c8, Func Offset: 0x2e8
	// Line 1216, Address: 0x20b3cc, Func Offset: 0x2ec
	// Line 1217, Address: 0x20b3d0, Func Offset: 0x2f0
	// Line 1218, Address: 0x20b3dc, Func Offset: 0x2fc
	// Line 1219, Address: 0x20b3e4, Func Offset: 0x304
	// Line 1222, Address: 0x20b3e8, Func Offset: 0x308
	// Line 1224, Address: 0x20b3f4, Func Offset: 0x314
	// Line 1222, Address: 0x20b3f8, Func Offset: 0x318
	// Line 1224, Address: 0x20b408, Func Offset: 0x328
	// Line 1228, Address: 0x20b430, Func Offset: 0x350
	// Line 1231, Address: 0x20b438, Func Offset: 0x358
	// Line 1232, Address: 0x20b43c, Func Offset: 0x35c
	// Line 1233, Address: 0x20b444, Func Offset: 0x364
	// Line 1234, Address: 0x20b448, Func Offset: 0x368
	// Line 1236, Address: 0x20b44c, Func Offset: 0x36c
	// Line 1238, Address: 0x20b450, Func Offset: 0x370
	// Line 1239, Address: 0x20b45c, Func Offset: 0x37c
	// Line 1238, Address: 0x20b460, Func Offset: 0x380
	// Line 1239, Address: 0x20b474, Func Offset: 0x394
	// Line 1242, Address: 0x20b47c, Func Offset: 0x39c
	// Line 1243, Address: 0x20b480, Func Offset: 0x3a0
	// Line 1244, Address: 0x20b494, Func Offset: 0x3b4
	// Line 1245, Address: 0x20b49c, Func Offset: 0x3bc
	// Line 1246, Address: 0x20b4a0, Func Offset: 0x3c0
	// Line 1245, Address: 0x20b4a4, Func Offset: 0x3c4
	// Line 1246, Address: 0x20b4a8, Func Offset: 0x3c8
	// Line 1247, Address: 0x20b4b0, Func Offset: 0x3d0
	// Line 1248, Address: 0x20b4b8, Func Offset: 0x3d8
	// Line 1249, Address: 0x20b4c4, Func Offset: 0x3e4
	// Line 1250, Address: 0x20b4cc, Func Offset: 0x3ec
	// Line 1251, Address: 0x20b4d8, Func Offset: 0x3f8
	// Line 1252, Address: 0x20b4e4, Func Offset: 0x404
	// Line 1256, Address: 0x20b4ec, Func Offset: 0x40c
	// Line 1261, Address: 0x20b4f0, Func Offset: 0x410
	// Line 1262, Address: 0x20b504, Func Offset: 0x424
	// Line 1263, Address: 0x20b50c, Func Offset: 0x42c
	// Line 1282, Address: 0x20b510, Func Offset: 0x430
	// Func End, Address: 0x20b52c, Func Offset: 0x44c
}

// 
// Start address: 0x20b530
void EnemyHyenaControlDescent(sfObj* obj)
{
	float vec[4];
	float rot[4];
	float dt;
	EnemyHyenaWork* ew;
	// Line 1288, Address: 0x20b530, Func Offset: 0
	// Line 1293, Address: 0x20b544, Func Offset: 0x14
	// Line 1294, Address: 0x20b54c, Func Offset: 0x1c
	// Line 1295, Address: 0x20b558, Func Offset: 0x28
	// Line 1298, Address: 0x20b568, Func Offset: 0x38
	// Line 1299, Address: 0x20b574, Func Offset: 0x44
	// Line 1300, Address: 0x20b580, Func Offset: 0x50
	// Line 1303, Address: 0x20b588, Func Offset: 0x58
	// Line 1305, Address: 0x20b5a0, Func Offset: 0x70
	// Line 1306, Address: 0x20b5a8, Func Offset: 0x78
	// Line 1309, Address: 0x20b5b0, Func Offset: 0x80
	// Line 1310, Address: 0x20b5bc, Func Offset: 0x8c
	// Line 1311, Address: 0x20b5c8, Func Offset: 0x98
	// Line 1312, Address: 0x20b5fc, Func Offset: 0xcc
	// Line 1314, Address: 0x20b60c, Func Offset: 0xdc
	// Line 1312, Address: 0x20b614, Func Offset: 0xe4
	// Line 1313, Address: 0x20b620, Func Offset: 0xf0
	// Line 1314, Address: 0x20b630, Func Offset: 0x100
	// Line 1315, Address: 0x20b64c, Func Offset: 0x11c
	// Line 1316, Address: 0x20b658, Func Offset: 0x128
	// Func End, Address: 0x20b670, Func Offset: 0x140
}

// 
// Start address: 0x20b670
void EnemyHyenaControlApproach(sfObj* obj)
{
	EnemyHyenaWork* ew;
	float epos[4];
	float dist;
	float horming_rad;
	float target_rad;
	int next_anime;
	float next_anime_speed;
	PlayerExtStatus pst;
	// Line 1332, Address: 0x20b670, Func Offset: 0
	// Line 1336, Address: 0x20b690, Func Offset: 0x20
	// Line 1348, Address: 0x20b69c, Func Offset: 0x2c
	// Line 1344, Address: 0x20b6a0, Func Offset: 0x30
	// Line 1348, Address: 0x20b6a4, Func Offset: 0x34
	// Line 1344, Address: 0x20b6a8, Func Offset: 0x38
	// Line 1348, Address: 0x20b6ac, Func Offset: 0x3c
	// Line 1349, Address: 0x20b6b4, Func Offset: 0x44
	// Line 1350, Address: 0x20b6c4, Func Offset: 0x54
	// Line 1354, Address: 0x20b6e0, Func Offset: 0x70
	// Line 1357, Address: 0x20b6f8, Func Offset: 0x88
	// Line 1359, Address: 0x20b72c, Func Offset: 0xbc
	// Line 1361, Address: 0x20b730, Func Offset: 0xc0
	// Line 1363, Address: 0x20b77c, Func Offset: 0x10c
	// Line 1364, Address: 0x20b780, Func Offset: 0x110
	// Line 1368, Address: 0x20b788, Func Offset: 0x118
	// Line 1370, Address: 0x20b790, Func Offset: 0x120
	// Line 1376, Address: 0x20b798, Func Offset: 0x128
	// Line 1378, Address: 0x20b7e4, Func Offset: 0x174
	// Line 1379, Address: 0x20b7e8, Func Offset: 0x178
	// Line 1383, Address: 0x20b7f0, Func Offset: 0x180
	// Line 1382, Address: 0x20b7f8, Func Offset: 0x188
	// Line 1386, Address: 0x20b7fc, Func Offset: 0x18c
	// Line 1388, Address: 0x20b800, Func Offset: 0x190
	// Line 1389, Address: 0x20b80c, Func Offset: 0x19c
	// Line 1391, Address: 0x20b814, Func Offset: 0x1a4
	// Line 1395, Address: 0x20b818, Func Offset: 0x1a8
	// Line 1397, Address: 0x20b84c, Func Offset: 0x1dc
	// Line 1399, Address: 0x20b850, Func Offset: 0x1e0
	// Line 1402, Address: 0x20b8bc, Func Offset: 0x24c
	// Line 1403, Address: 0x20b8c0, Func Offset: 0x250
	// Line 1405, Address: 0x20b8c8, Func Offset: 0x258
	// Line 1406, Address: 0x20b8f0, Func Offset: 0x280
	// Line 1410, Address: 0x20b8f8, Func Offset: 0x288
	// Line 1406, Address: 0x20b8fc, Func Offset: 0x28c
	// Line 1410, Address: 0x20b908, Func Offset: 0x298
	// Line 1406, Address: 0x20b90c, Func Offset: 0x29c
	// Line 1410, Address: 0x20b91c, Func Offset: 0x2ac
	// Line 1412, Address: 0x20b924, Func Offset: 0x2b4
	// Line 1413, Address: 0x20b928, Func Offset: 0x2b8
	// Line 1412, Address: 0x20b92c, Func Offset: 0x2bc
	// Line 1414, Address: 0x20b930, Func Offset: 0x2c0
	// Line 1415, Address: 0x20b93c, Func Offset: 0x2cc
	// Line 1417, Address: 0x20b960, Func Offset: 0x2f0
	// Line 1420, Address: 0x20b968, Func Offset: 0x2f8
	// Line 1425, Address: 0x20b970, Func Offset: 0x300
	// Line 1428, Address: 0x20b9dc, Func Offset: 0x36c
	// Line 1429, Address: 0x20b9e0, Func Offset: 0x370
	// Line 1431, Address: 0x20b9e8, Func Offset: 0x378
	// Line 1432, Address: 0x20ba10, Func Offset: 0x3a0
	// Line 1433, Address: 0x20ba14, Func Offset: 0x3a4
	// Line 1444, Address: 0x20ba18, Func Offset: 0x3a8
	// Line 1445, Address: 0x20ba40, Func Offset: 0x3d0
	// Line 1450, Address: 0x20ba48, Func Offset: 0x3d8
	// Line 1451, Address: 0x20ba68, Func Offset: 0x3f8
	// Line 1452, Address: 0x20baa0, Func Offset: 0x430
	// Line 1454, Address: 0x20bad4, Func Offset: 0x464
	// Line 1456, Address: 0x20bad8, Func Offset: 0x468
	// Line 1455, Address: 0x20bae0, Func Offset: 0x470
	// Line 1466, Address: 0x20bae4, Func Offset: 0x474
	// Line 1478, Address: 0x20bae8, Func Offset: 0x478
	// Line 1479, Address: 0x20bb00, Func Offset: 0x490
	// Line 1480, Address: 0x20bb08, Func Offset: 0x498
	// Line 1481, Address: 0x20bb10, Func Offset: 0x4a0
	// Line 1482, Address: 0x20bb28, Func Offset: 0x4b8
	// Line 1483, Address: 0x20bb30, Func Offset: 0x4c0
	// Line 1485, Address: 0x20bb38, Func Offset: 0x4c8
	// Line 1504, Address: 0x20bb60, Func Offset: 0x4f0
	// Line 1506, Address: 0x20bb80, Func Offset: 0x510
	// Line 1507, Address: 0x20bb8c, Func Offset: 0x51c
	// Line 1506, Address: 0x20bb90, Func Offset: 0x520
	// Line 1507, Address: 0x20bb94, Func Offset: 0x524
	// Line 1510, Address: 0x20bbac, Func Offset: 0x53c
	// Line 1511, Address: 0x20bbb0, Func Offset: 0x540
	// Line 1512, Address: 0x20bbb8, Func Offset: 0x548
	// Line 1513, Address: 0x20bbc4, Func Offset: 0x554
	// Line 1517, Address: 0x20bbc8, Func Offset: 0x558
	// Line 1518, Address: 0x20bbd4, Func Offset: 0x564
	// Line 1523, Address: 0x20bbe0, Func Offset: 0x570
	// Line 1526, Address: 0x20bc14, Func Offset: 0x5a4
	// Line 1528, Address: 0x20bc18, Func Offset: 0x5a8
	// Line 1530, Address: 0x20bc48, Func Offset: 0x5d8
	// Line 1531, Address: 0x20bc60, Func Offset: 0x5f0
	// Line 1532, Address: 0x20bc6c, Func Offset: 0x5fc
	// Line 1533, Address: 0x20bc74, Func Offset: 0x604
	// Line 1535, Address: 0x20bc78, Func Offset: 0x608
	// Line 1537, Address: 0x20bc94, Func Offset: 0x624
	// Line 1538, Address: 0x20bcac, Func Offset: 0x63c
	// Line 1539, Address: 0x20bcb8, Func Offset: 0x648
	// Line 1543, Address: 0x20bcc0, Func Offset: 0x650
	// Line 1555, Address: 0x20bd40, Func Offset: 0x6d0
	// Line 1556, Address: 0x20bd48, Func Offset: 0x6d8
	// Line 1558, Address: 0x20bd50, Func Offset: 0x6e0
	// Line 1561, Address: 0x20bda0, Func Offset: 0x730
	// Line 1562, Address: 0x20bda8, Func Offset: 0x738
	// Line 1566, Address: 0x20bdb0, Func Offset: 0x740
	// Line 1567, Address: 0x20bdfc, Func Offset: 0x78c
	// Line 1568, Address: 0x20be10, Func Offset: 0x7a0
	// Line 1569, Address: 0x20be1c, Func Offset: 0x7ac
	// Line 1572, Address: 0x20be28, Func Offset: 0x7b8
	// Line 1577, Address: 0x20be30, Func Offset: 0x7c0
	// Line 1582, Address: 0x20be40, Func Offset: 0x7d0
	// Line 1583, Address: 0x20be5c, Func Offset: 0x7ec
	// Line 1584, Address: 0x20be74, Func Offset: 0x804
	// Line 1585, Address: 0x20be80, Func Offset: 0x810
	// Line 1587, Address: 0x20be88, Func Offset: 0x818
	// Line 1588, Address: 0x20bea4, Func Offset: 0x834
	// Line 1589, Address: 0x20bebc, Func Offset: 0x84c
	// Line 1590, Address: 0x20bec8, Func Offset: 0x858
	// Line 1593, Address: 0x20bed0, Func Offset: 0x860
	// Line 1595, Address: 0x20bef4, Func Offset: 0x884
	// Line 1596, Address: 0x20befc, Func Offset: 0x88c
	// Line 1613, Address: 0x20bf08, Func Offset: 0x898
	// Line 1618, Address: 0x20bf10, Func Offset: 0x8a0
	// Line 1623, Address: 0x20bf20, Func Offset: 0x8b0
	// Line 1624, Address: 0x20bf3c, Func Offset: 0x8cc
	// Line 1625, Address: 0x20bf54, Func Offset: 0x8e4
	// Line 1626, Address: 0x20bf60, Func Offset: 0x8f0
	// Line 1628, Address: 0x20bf68, Func Offset: 0x8f8
	// Line 1629, Address: 0x20bf84, Func Offset: 0x914
	// Line 1630, Address: 0x20bf9c, Func Offset: 0x92c
	// Line 1631, Address: 0x20bfa8, Func Offset: 0x938
	// Line 1634, Address: 0x20bfb0, Func Offset: 0x940
	// Line 1635, Address: 0x20bfd8, Func Offset: 0x968
	// Line 1636, Address: 0x20bfe0, Func Offset: 0x970
	// Line 1635, Address: 0x20bfe4, Func Offset: 0x974
	// Line 1636, Address: 0x20bfe8, Func Offset: 0x978
	// Line 1641, Address: 0x20bff0, Func Offset: 0x980
	// Func End, Address: 0x20c014, Func Offset: 0x9a4
}

// 
// Start address: 0x20c020
void EnemyHyenaControlLieDown(sfObj* obj)
{
	EnemyHyenaWork* ew;
	// Line 1647, Address: 0x20c020, Func Offset: 0
	// Line 1648, Address: 0x20c030, Func Offset: 0x10
	// Line 1651, Address: 0x20c03c, Func Offset: 0x1c
	// Line 1652, Address: 0x20c074, Func Offset: 0x54
	// Line 1654, Address: 0x20c078, Func Offset: 0x58
	// Line 1655, Address: 0x20c090, Func Offset: 0x70
	// Line 1656, Address: 0x20c09c, Func Offset: 0x7c
	// Line 1657, Address: 0x20c0a4, Func Offset: 0x84
	// Line 1659, Address: 0x20c0ac, Func Offset: 0x8c
	// Line 1660, Address: 0x20c0b0, Func Offset: 0x90
	// Line 1661, Address: 0x20c0c0, Func Offset: 0xa0
	// Line 1662, Address: 0x20c0cc, Func Offset: 0xac
	// Line 1661, Address: 0x20c0d0, Func Offset: 0xb0
	// Line 1662, Address: 0x20c0d4, Func Offset: 0xb4
	// Line 1661, Address: 0x20c0dc, Func Offset: 0xbc
	// Line 1662, Address: 0x20c0e0, Func Offset: 0xc0
	// Line 1661, Address: 0x20c0e4, Func Offset: 0xc4
	// Line 1662, Address: 0x20c0e8, Func Offset: 0xc8
	// Line 1663, Address: 0x20c0f0, Func Offset: 0xd0
	// Line 1665, Address: 0x20c0f8, Func Offset: 0xd8
	// Line 1668, Address: 0x20c100, Func Offset: 0xe0
	// Line 1669, Address: 0x20c110, Func Offset: 0xf0
	// Line 1671, Address: 0x20c11c, Func Offset: 0xfc
	// Line 1672, Address: 0x20c128, Func Offset: 0x108
	// Line 1674, Address: 0x20c130, Func Offset: 0x110
	// Line 1675, Address: 0x20c14c, Func Offset: 0x12c
	// Line 1676, Address: 0x20c154, Func Offset: 0x134
	// Line 1677, Address: 0x20c160, Func Offset: 0x140
	// Line 1678, Address: 0x20c170, Func Offset: 0x150
	// Line 1679, Address: 0x20c178, Func Offset: 0x158
	// Line 1681, Address: 0x20c180, Func Offset: 0x160
	// Line 1685, Address: 0x20c18c, Func Offset: 0x16c
	// Line 1687, Address: 0x20c194, Func Offset: 0x174
	// Line 1688, Address: 0x20c198, Func Offset: 0x178
	// Line 1689, Address: 0x20c1a8, Func Offset: 0x188
	// Line 1690, Address: 0x20c1bc, Func Offset: 0x19c
	// Line 1698, Address: 0x20c1c8, Func Offset: 0x1a8
	// Line 1699, Address: 0x20c1d4, Func Offset: 0x1b4
	// Line 1700, Address: 0x20c1e4, Func Offset: 0x1c4
	// Line 1703, Address: 0x20c1e8, Func Offset: 0x1c8
	// Func End, Address: 0x20c1fc, Func Offset: 0x1dc
}

// 
// Start address: 0x20c200
int EnemyHyenaControlSmell(sfObj* obj)
{
	EnemyHyenaWork* ew;
	// Line 1709, Address: 0x20c200, Func Offset: 0
	// Line 1710, Address: 0x20c210, Func Offset: 0x10
	// Line 1712, Address: 0x20c21c, Func Offset: 0x1c
	// Line 1715, Address: 0x20c240, Func Offset: 0x40
	// Line 1716, Address: 0x20c254, Func Offset: 0x54
	// Line 1715, Address: 0x20c264, Func Offset: 0x64
	// Line 1716, Address: 0x20c268, Func Offset: 0x68
	// Line 1717, Address: 0x20c270, Func Offset: 0x70
	// Line 1718, Address: 0x20c27c, Func Offset: 0x7c
	// Line 1719, Address: 0x20c284, Func Offset: 0x84
	// Line 1721, Address: 0x20c28c, Func Offset: 0x8c
	// Line 1722, Address: 0x20c290, Func Offset: 0x90
	// Line 1723, Address: 0x20c2a0, Func Offset: 0xa0
	// Line 1726, Address: 0x20c2ac, Func Offset: 0xac
	// Line 1727, Address: 0x20c2c4, Func Offset: 0xc4
	// Line 1728, Address: 0x20c2d0, Func Offset: 0xd0
	// Line 1729, Address: 0x20c2d8, Func Offset: 0xd8
	// Line 1732, Address: 0x20c2e0, Func Offset: 0xe0
	// Line 1734, Address: 0x20c2fc, Func Offset: 0xfc
	// Line 1735, Address: 0x20c314, Func Offset: 0x114
	// Line 1736, Address: 0x20c320, Func Offset: 0x120
	// Line 1737, Address: 0x20c328, Func Offset: 0x128
	// Line 1740, Address: 0x20c330, Func Offset: 0x130
	// Line 1745, Address: 0x20c33c, Func Offset: 0x13c
	// Line 1759, Address: 0x20c340, Func Offset: 0x140
	// Line 1760, Address: 0x20c350, Func Offset: 0x150
	// Line 1763, Address: 0x20c358, Func Offset: 0x158
	// Line 1764, Address: 0x20c360, Func Offset: 0x160
	// Func End, Address: 0x20c374, Func Offset: 0x174
}

// 
// Start address: 0x20c380
void EnemyHyenaControlSmellTerritory(sfObj* obj)
{
	// Line 1770, Address: 0x20c380, Func Offset: 0
	// Line 1771, Address: 0x20c38c, Func Offset: 0xc
	// Line 1773, Address: 0x20c394, Func Offset: 0x14
	// Line 1776, Address: 0x20c39c, Func Offset: 0x1c
	// Func End, Address: 0x20c3ac, Func Offset: 0x2c
}

// 
// Start address: 0x20c3b0
int EnemyHyenaCheckBloodRangeByNose(sfObj* obj, EnemySenseResult* blood_res)
{
	float nose[4];
	// Line 1782, Address: 0x20c3b0, Func Offset: 0
	// Line 1784, Address: 0x20c3c8, Func Offset: 0x18
	// Line 1787, Address: 0x20c3d0, Func Offset: 0x20
	// Line 1791, Address: 0x20c3e0, Func Offset: 0x30
	// Line 1814, Address: 0x20c408, Func Offset: 0x58
	// Func End, Address: 0x20c420, Func Offset: 0x70
}

// 
// Start address: 0x20c420
void EnemyHyenaControlBloodSip(sfObj* obj)
{
	EnemyHyenaWork* ew;
	int bloodsip_end;
	// Line 1837, Address: 0x20c420, Func Offset: 0
	// Line 1838, Address: 0x20c434, Func Offset: 0x14
	// Line 1841, Address: 0x20c440, Func Offset: 0x20
	// Line 1843, Address: 0x20c474, Func Offset: 0x54
	// Line 1844, Address: 0x20c478, Func Offset: 0x58
	// Line 1845, Address: 0x20c47c, Func Offset: 0x5c
	// Line 1846, Address: 0x20c488, Func Offset: 0x68
	// Line 1847, Address: 0x20c490, Func Offset: 0x70
	// Line 1849, Address: 0x20c498, Func Offset: 0x78
	// Line 1850, Address: 0x20c4a4, Func Offset: 0x84
	// Line 1852, Address: 0x20c4b0, Func Offset: 0x90
	// Line 1856, Address: 0x20c4b8, Func Offset: 0x98
	// Line 1857, Address: 0x20c4d4, Func Offset: 0xb4
	// Line 1858, Address: 0x20c4dc, Func Offset: 0xbc
	// Line 1859, Address: 0x20c4e4, Func Offset: 0xc4
	// Line 1861, Address: 0x20c4f0, Func Offset: 0xd0
	// Line 1864, Address: 0x20c4f8, Func Offset: 0xd8
	// Line 1865, Address: 0x20c514, Func Offset: 0xf4
	// Line 1864, Address: 0x20c518, Func Offset: 0xf8
	// Line 1865, Address: 0x20c51c, Func Offset: 0xfc
	// Line 1864, Address: 0x20c520, Func Offset: 0x100
	// Line 1865, Address: 0x20c524, Func Offset: 0x104
	// Line 1866, Address: 0x20c530, Func Offset: 0x110
	// Line 1867, Address: 0x20c53c, Func Offset: 0x11c
	// Line 1870, Address: 0x20c544, Func Offset: 0x124
	// Line 1872, Address: 0x20c548, Func Offset: 0x128
	// Line 1873, Address: 0x20c554, Func Offset: 0x134
	// Line 1874, Address: 0x20c568, Func Offset: 0x148
	// Line 1875, Address: 0x20c570, Func Offset: 0x150
	// Line 1883, Address: 0x20c578, Func Offset: 0x158
	// Line 1885, Address: 0x20c590, Func Offset: 0x170
	// Line 1886, Address: 0x20c5a0, Func Offset: 0x180
	// Line 1888, Address: 0x20c5a4, Func Offset: 0x184
	// Line 1891, Address: 0x20c5a8, Func Offset: 0x188
	// Line 1892, Address: 0x20c5b8, Func Offset: 0x198
	// Line 1894, Address: 0x20c5bc, Func Offset: 0x19c
	// Line 1895, Address: 0x20c5d8, Func Offset: 0x1b8
	// Line 1896, Address: 0x20c5dc, Func Offset: 0x1bc
	// Line 1899, Address: 0x20c5e0, Func Offset: 0x1c0
	// Line 1901, Address: 0x20c5ec, Func Offset: 0x1cc
	// Line 1902, Address: 0x20c604, Func Offset: 0x1e4
	// Line 1903, Address: 0x20c610, Func Offset: 0x1f0
	// Line 1907, Address: 0x20c618, Func Offset: 0x1f8
	// Line 1910, Address: 0x20c620, Func Offset: 0x200
	// Line 1912, Address: 0x20c638, Func Offset: 0x218
	// Line 1913, Address: 0x20c64c, Func Offset: 0x22c
	// Line 1919, Address: 0x20c658, Func Offset: 0x238
	// Line 1920, Address: 0x20c668, Func Offset: 0x248
	// Line 1921, Address: 0x20c66c, Func Offset: 0x24c
	// Line 1922, Address: 0x20c670, Func Offset: 0x250
	// Func End, Address: 0x20c688, Func Offset: 0x268
}

// 
// Start address: 0x20c690
int EnemyHyenaAttackEnableCheckIE16(sfObj* obj)
{
	EnemyHyenaWork* ew;
	float epos[4];
	float ppos[4];
	_anon4 line;
	int hit_num;
	int ret;
	// Line 1928, Address: 0x20c690, Func Offset: 0
	// Line 1929, Address: 0x20c69c, Func Offset: 0xc
	// Line 1936, Address: 0x20c6a4, Func Offset: 0x14
	// Line 1939, Address: 0x20c6a8, Func Offset: 0x18
	// Line 1936, Address: 0x20c6ac, Func Offset: 0x1c
	// Line 1939, Address: 0x20c6b0, Func Offset: 0x20
	// Line 1940, Address: 0x20c6c8, Func Offset: 0x38
	// Line 1944, Address: 0x20c6d0, Func Offset: 0x40
	// Line 1945, Address: 0x20c6dc, Func Offset: 0x4c
	// Line 1947, Address: 0x20c6f0, Func Offset: 0x60
	// Line 1948, Address: 0x20c704, Func Offset: 0x74
	// Line 1950, Address: 0x20c710, Func Offset: 0x80
	// Line 1948, Address: 0x20c718, Func Offset: 0x88
	// Line 1950, Address: 0x20c720, Func Offset: 0x90
	// Line 1951, Address: 0x20c728, Func Offset: 0x98
	// Line 1968, Address: 0x20c734, Func Offset: 0xa4
	// Line 1977, Address: 0x20c73c, Func Offset: 0xac
	// Line 1978, Address: 0x20c748, Func Offset: 0xb8
	// Func End, Address: 0x20c758, Func Offset: 0xc8
}

// 
// Start address: 0x20c760
void EnemyHyenaControlRunAttack(sfObj* obj)
{
	EnemyHyenaWork* ew;
	// Line 1984, Address: 0x20c760, Func Offset: 0
	// Line 1988, Address: 0x20c774, Func Offset: 0x14
	// Line 1994, Address: 0x20c780, Func Offset: 0x20
	// Line 1996, Address: 0x20c7b8, Func Offset: 0x58
	// Line 1997, Address: 0x20c7bc, Func Offset: 0x5c
	// Line 1996, Address: 0x20c7c4, Func Offset: 0x64
	// Line 1997, Address: 0x20c7c8, Func Offset: 0x68
	// Line 1998, Address: 0x20c7d0, Func Offset: 0x70
	// Line 1999, Address: 0x20c7e4, Func Offset: 0x84
	// Line 2000, Address: 0x20c7f0, Func Offset: 0x90
	// Line 2001, Address: 0x20c7f8, Func Offset: 0x98
	// Line 2004, Address: 0x20c800, Func Offset: 0xa0
	// Line 2005, Address: 0x20c814, Func Offset: 0xb4
	// Line 2006, Address: 0x20c878, Func Offset: 0x118
	// Line 2009, Address: 0x20c880, Func Offset: 0x120
	// Line 2012, Address: 0x20c888, Func Offset: 0x128
	// Line 2015, Address: 0x20c8b0, Func Offset: 0x150
	// Line 2019, Address: 0x20c8c0, Func Offset: 0x160
	// Line 2021, Address: 0x20c8e8, Func Offset: 0x188
	// Line 2022, Address: 0x20c8fc, Func Offset: 0x19c
	// Line 2023, Address: 0x20c900, Func Offset: 0x1a0
	// Line 2022, Address: 0x20c904, Func Offset: 0x1a4
	// Line 2023, Address: 0x20c908, Func Offset: 0x1a8
	// Line 2024, Address: 0x20c910, Func Offset: 0x1b0
	// Line 2026, Address: 0x20c918, Func Offset: 0x1b8
	// Line 2029, Address: 0x20c920, Func Offset: 0x1c0
	// Line 2030, Address: 0x20c92c, Func Offset: 0x1cc
	// Line 2032, Address: 0x20c934, Func Offset: 0x1d4
	// Line 2033, Address: 0x20c93c, Func Offset: 0x1dc
	// Line 2034, Address: 0x20c940, Func Offset: 0x1e0
	// Line 2035, Address: 0x20c950, Func Offset: 0x1f0
	// Line 2038, Address: 0x20c95c, Func Offset: 0x1fc
	// Line 2039, Address: 0x20c970, Func Offset: 0x210
	// Line 2040, Address: 0x20c97c, Func Offset: 0x21c
	// Line 2043, Address: 0x20c988, Func Offset: 0x228
	// Line 2047, Address: 0x20c994, Func Offset: 0x234
	// Line 2048, Address: 0x20c998, Func Offset: 0x238
	// Func End, Address: 0x20c9b0, Func Offset: 0x250
}

// 
// Start address: 0x20c9b0
void EnemyHyenaFrightenDisableSet(sfObj* obj, int timer)
{
	EnemyHyenaWork* ew;
	// Line 2054, Address: 0x20c9b0, Func Offset: 0
	// Line 2055, Address: 0x20c9bc, Func Offset: 0xc
	// Line 2056, Address: 0x20c9c4, Func Offset: 0x14
	// Line 2057, Address: 0x20c9c8, Func Offset: 0x18
	// Func End, Address: 0x20c9d8, Func Offset: 0x28
}

// 
// Start address: 0x20c9e0
void EnemyHyenaFrightenDisableUpdate(sfObj* obj)
{
	EnemyHyenaWork* ew;
	// Line 2063, Address: 0x20c9e0, Func Offset: 0
	// Line 2064, Address: 0x20c9e8, Func Offset: 0x8
	// Line 2065, Address: 0x20c9f0, Func Offset: 0x10
	// Line 2066, Address: 0x20c9fc, Func Offset: 0x1c
	// Line 2067, Address: 0x20ca04, Func Offset: 0x24
	// Line 2068, Address: 0x20ca08, Func Offset: 0x28
	// Func End, Address: 0x20ca14, Func Offset: 0x34
}

// 
// Start address: 0x20ca20
int EnemyHyenaFrightenDisableCheck(sfObj* obj)
{
	EnemyHyenaWork* ew;
	// Line 2074, Address: 0x20ca20, Func Offset: 0
	// Line 2075, Address: 0x20ca28, Func Offset: 0x8
	// Line 2076, Address: 0x20ca30, Func Offset: 0x10
	// Line 2077, Address: 0x20ca34, Func Offset: 0x14
	// Line 2076, Address: 0x20ca38, Func Offset: 0x18
	// Line 2077, Address: 0x20ca3c, Func Offset: 0x1c
	// Func End, Address: 0x20ca44, Func Offset: 0x24
}

// 
// Start address: 0x20ca50
int EnemyHyenaFrighten(sfObj* obj, float src_dist)
{
	EnemyHyenaWork* ew;
	_PLAYER_WORK* p;
	float dist;
	int frighten;
	float evec[4];
	float pvec[4];
	float dot;
	// Line 2083, Address: 0x20ca50, Func Offset: 0
	// Line 2087, Address: 0x20ca70, Func Offset: 0x20
	// Line 2107, Address: 0x20ca7c, Func Offset: 0x2c
	// Line 2108, Address: 0x20ca8c, Func Offset: 0x3c
	// Line 2109, Address: 0x20ca94, Func Offset: 0x44
	// Line 2112, Address: 0x20ca98, Func Offset: 0x48
	// Line 2113, Address: 0x20caa8, Func Offset: 0x58
	// Line 2121, Address: 0x20cab0, Func Offset: 0x60
	// Line 2122, Address: 0x20cab8, Func Offset: 0x68
	// Line 2123, Address: 0x20cac0, Func Offset: 0x70
	// Line 2124, Address: 0x20cac8, Func Offset: 0x78
	// Line 2125, Address: 0x20caec, Func Offset: 0x9c
	// Line 2126, Address: 0x20cb10, Func Offset: 0xc0
	// Line 2127, Address: 0x20cb2c, Func Offset: 0xdc
	// Line 2128, Address: 0x20cb34, Func Offset: 0xe4
	// Line 2137, Address: 0x20cb38, Func Offset: 0xe8
	// Line 2138, Address: 0x20cb6c, Func Offset: 0x11c
	// Line 2140, Address: 0x20cb90, Func Offset: 0x140
	// Line 2144, Address: 0x20cb98, Func Offset: 0x148
	// Line 2148, Address: 0x20cc18, Func Offset: 0x1c8
	// Line 2150, Address: 0x20cc3c, Func Offset: 0x1ec
	// Line 2152, Address: 0x20cc44, Func Offset: 0x1f4
	// Line 2154, Address: 0x20cc48, Func Offset: 0x1f8
	// Line 2156, Address: 0x20cc88, Func Offset: 0x238
	// Line 2158, Address: 0x20ccac, Func Offset: 0x25c
	// Line 2160, Address: 0x20ccb4, Func Offset: 0x264
	// Line 2163, Address: 0x20ccb8, Func Offset: 0x268
	// Line 2164, Address: 0x20ccc8, Func Offset: 0x278
	// Line 2165, Address: 0x20cce0, Func Offset: 0x290
	// Line 2167, Address: 0x20cd30, Func Offset: 0x2e0
	// Line 2172, Address: 0x20cd38, Func Offset: 0x2e8
	// Line 2173, Address: 0x20cd4c, Func Offset: 0x2fc
	// Line 2174, Address: 0x20cd58, Func Offset: 0x308
	// Line 2175, Address: 0x20cda8, Func Offset: 0x358
	// Line 2180, Address: 0x20cdac, Func Offset: 0x35c
	// Line 2182, Address: 0x20cdb0, Func Offset: 0x360
	// Line 2184, Address: 0x20cdb8, Func Offset: 0x368
	// Line 2185, Address: 0x20cdd0, Func Offset: 0x380
	// Line 2187, Address: 0x20cdd8, Func Offset: 0x388
	// Line 2188, Address: 0x20cde0, Func Offset: 0x390
	// Func End, Address: 0x20ce00, Func Offset: 0x3b0
}

// 
// Start address: 0x20ce00
void EnemyHyenaControlThreaten(sfObj* obj)
{
	EnemyHyenaWork* ew;
	int next;
	float ppos[4];
	float dist;
	// Line 2194, Address: 0x20ce00, Func Offset: 0
	// Line 2201, Address: 0x20ce1c, Func Offset: 0x1c
	// Line 2206, Address: 0x20ce28, Func Offset: 0x28
	// Line 2207, Address: 0x20ce54, Func Offset: 0x54
	// Line 2209, Address: 0x20ce58, Func Offset: 0x58
	// Line 2210, Address: 0x20ce6c, Func Offset: 0x6c
	// Line 2213, Address: 0x20ce78, Func Offset: 0x78
	// Line 2212, Address: 0x20ce7c, Func Offset: 0x7c
	// Line 2213, Address: 0x20ce84, Func Offset: 0x84
	// Line 2214, Address: 0x20ce94, Func Offset: 0x94
	// Line 2215, Address: 0x20cea0, Func Offset: 0xa0
	// Line 2216, Address: 0x20cea8, Func Offset: 0xa8
	// Line 2218, Address: 0x20ceb0, Func Offset: 0xb0
	// Line 2219, Address: 0x20cec0, Func Offset: 0xc0
	// Line 2220, Address: 0x20cf18, Func Offset: 0x118
	// Line 2219, Address: 0x20cf1c, Func Offset: 0x11c
	// Line 2220, Address: 0x20cf20, Func Offset: 0x120
	// Line 2219, Address: 0x20cf24, Func Offset: 0x124
	// Line 2220, Address: 0x20cf28, Func Offset: 0x128
	// Line 2221, Address: 0x20cf38, Func Offset: 0x138
	// Line 2222, Address: 0x20cf44, Func Offset: 0x144
	// Line 2223, Address: 0x20cf54, Func Offset: 0x154
	// Line 2224, Address: 0x20cf60, Func Offset: 0x160
	// Line 2226, Address: 0x20cf68, Func Offset: 0x168
	// Line 2229, Address: 0x20cf70, Func Offset: 0x170
	// Line 2230, Address: 0x20cfa4, Func Offset: 0x1a4
	// Line 2240, Address: 0x20cfa8, Func Offset: 0x1a8
	// Line 2241, Address: 0x20cfbc, Func Offset: 0x1bc
	// Line 2243, Address: 0x20cfc8, Func Offset: 0x1c8
	// Line 2244, Address: 0x20cfe0, Func Offset: 0x1e0
	// Line 2246, Address: 0x20cff0, Func Offset: 0x1f0
	// Line 2248, Address: 0x20cff8, Func Offset: 0x1f8
	// Line 2251, Address: 0x20cffc, Func Offset: 0x1fc
	// Line 2254, Address: 0x20d000, Func Offset: 0x200
	// Line 2255, Address: 0x20d048, Func Offset: 0x248
	// Line 2257, Address: 0x20d058, Func Offset: 0x258
	// Line 2261, Address: 0x20d060, Func Offset: 0x260
	// Line 2263, Address: 0x20d068, Func Offset: 0x268
	// Line 2265, Address: 0x20d074, Func Offset: 0x274
	// Line 2266, Address: 0x20d08c, Func Offset: 0x28c
	// Line 2268, Address: 0x20d09c, Func Offset: 0x29c
	// Line 2272, Address: 0x20d0a8, Func Offset: 0x2a8
	// Line 2276, Address: 0x20d0b0, Func Offset: 0x2b0
	// Line 2278, Address: 0x20d0b8, Func Offset: 0x2b8
	// Line 2280, Address: 0x20d0ec, Func Offset: 0x2ec
	// Line 2281, Address: 0x20d0f8, Func Offset: 0x2f8
	// Line 2283, Address: 0x20d124, Func Offset: 0x324
	// Line 2284, Address: 0x20d148, Func Offset: 0x348
	// Line 2286, Address: 0x20d14c, Func Offset: 0x34c
	// Line 2289, Address: 0x20d150, Func Offset: 0x350
	// Line 2291, Address: 0x20d15c, Func Offset: 0x35c
	// Line 2294, Address: 0x20d164, Func Offset: 0x364
	// Line 2297, Address: 0x20d168, Func Offset: 0x368
	// Line 2298, Address: 0x20d174, Func Offset: 0x374
	// Line 2299, Address: 0x20d17c, Func Offset: 0x37c
	// Line 2301, Address: 0x20d190, Func Offset: 0x390
	// Func End, Address: 0x20d1b0, Func Offset: 0x3b0
}

// 
// Start address: 0x20d1b0
void EnemyHyenaControlBackstep(sfObj* obj)
{
	EnemyHyenaWork* ew;
	float epos[4];
	float target_rad;
	int next;
	// Line 2307, Address: 0x20d1b0, Func Offset: 0
	// Line 2309, Address: 0x20d1c8, Func Offset: 0x18
	// Line 2314, Address: 0x20d1d4, Func Offset: 0x24
	// Line 2315, Address: 0x20d1e0, Func Offset: 0x30
	// Line 2317, Address: 0x20d1fc, Func Offset: 0x4c
	// Line 2319, Address: 0x20d228, Func Offset: 0x78
	// Line 2320, Address: 0x20d23c, Func Offset: 0x8c
	// Line 2321, Address: 0x20d248, Func Offset: 0x98
	// Line 2322, Address: 0x20d250, Func Offset: 0xa0
	// Line 2326, Address: 0x20d258, Func Offset: 0xa8
	// Line 2327, Address: 0x20d26c, Func Offset: 0xbc
	// Line 2328, Address: 0x20d280, Func Offset: 0xd0
	// Line 2330, Address: 0x20d288, Func Offset: 0xd8
	// Line 2333, Address: 0x20d290, Func Offset: 0xe0
	// Line 2336, Address: 0x20d2a0, Func Offset: 0xf0
	// Line 2338, Address: 0x20d2d4, Func Offset: 0x124
	// Line 2341, Address: 0x20d2d8, Func Offset: 0x128
	// Line 2343, Address: 0x20d2e0, Func Offset: 0x130
	// Line 2345, Address: 0x20d338, Func Offset: 0x188
	// Line 2350, Address: 0x20d340, Func Offset: 0x190
	// Line 2352, Address: 0x20d348, Func Offset: 0x198
	// Line 2354, Address: 0x20d3a0, Func Offset: 0x1f0
	// Line 2357, Address: 0x20d3a8, Func Offset: 0x1f8
	// Line 2360, Address: 0x20d3ac, Func Offset: 0x1fc
	// Line 2361, Address: 0x20d3b0, Func Offset: 0x200
	// Line 2364, Address: 0x20d3bc, Func Offset: 0x20c
	// Line 2365, Address: 0x20d3c0, Func Offset: 0x210
	// Func End, Address: 0x20d3dc, Func Offset: 0x22c
}

// 
// Start address: 0x20d3e0
void EnemyHyenaControlBackstepAttack(sfObj* obj)
{
	EnemyHyenaWork* ew;
	float epos[4];
	float dist;
	// Line 2371, Address: 0x20d3e0, Func Offset: 0
	// Line 2374, Address: 0x20d3f4, Func Offset: 0x14
	// Line 2378, Address: 0x20d400, Func Offset: 0x20
	// Line 2379, Address: 0x20d40c, Func Offset: 0x2c
	// Line 2381, Address: 0x20d41c, Func Offset: 0x3c
	// Line 2383, Address: 0x20d440, Func Offset: 0x60
	// Line 2384, Address: 0x20d454, Func Offset: 0x74
	// Line 2385, Address: 0x20d460, Func Offset: 0x80
	// Line 2386, Address: 0x20d468, Func Offset: 0x88
	// Line 2388, Address: 0x20d470, Func Offset: 0x90
	// Line 2389, Address: 0x20d494, Func Offset: 0xb4
	// Line 2392, Address: 0x20d49c, Func Offset: 0xbc
	// Line 2393, Address: 0x20d4a0, Func Offset: 0xc0
	// Func End, Address: 0x20d4b8, Func Offset: 0xd8
}

// 
// Start address: 0x20d4c0
void EnemyHyenaControlWalkAttack(sfObj* obj)
{
	EnemyHyenaWork* ew;
	float epos[4];
	_anon4 eline;
	float distl;
	float distr;
	float ppos[4];
	float near_p[4];
	// Line 2399, Address: 0x20d4c0, Func Offset: 0
	// Line 2406, Address: 0x20d4d4, Func Offset: 0x14
	// Line 2412, Address: 0x20d4e0, Func Offset: 0x20
	// Line 2413, Address: 0x20d504, Func Offset: 0x44
	// Line 2414, Address: 0x20d508, Func Offset: 0x48
	// Line 2415, Address: 0x20d514, Func Offset: 0x54
	// Line 2416, Address: 0x20d528, Func Offset: 0x68
	// Line 2417, Address: 0x20d534, Func Offset: 0x74
	// Line 2418, Address: 0x20d53c, Func Offset: 0x7c
	// Line 2419, Address: 0x20d544, Func Offset: 0x84
	// Line 2420, Address: 0x20d548, Func Offset: 0x88
	// Line 2422, Address: 0x20d558, Func Offset: 0x98
	// Line 2423, Address: 0x20d56c, Func Offset: 0xac
	// Line 2424, Address: 0x20d578, Func Offset: 0xb8
	// Line 2427, Address: 0x20d580, Func Offset: 0xc0
	// Line 2435, Address: 0x20d5a8, Func Offset: 0xe8
	// Line 2442, Address: 0x20d5b8, Func Offset: 0xf8
	// Line 2443, Address: 0x20d5c4, Func Offset: 0x104
	// Line 2444, Address: 0x20d5d4, Func Offset: 0x114
	// Line 2445, Address: 0x20d5f8, Func Offset: 0x138
	// Line 2446, Address: 0x20d608, Func Offset: 0x148
	// Line 2450, Address: 0x20d62c, Func Offset: 0x16c
	// Line 2453, Address: 0x20d630, Func Offset: 0x170
	// Line 2456, Address: 0x20d668, Func Offset: 0x1a8
	// Line 2457, Address: 0x20d694, Func Offset: 0x1d4
	// Line 2458, Address: 0x20d69c, Func Offset: 0x1dc
	// Line 2459, Address: 0x20d6a0, Func Offset: 0x1e0
	// Line 2460, Address: 0x20d6bc, Func Offset: 0x1fc
	// Line 2462, Address: 0x20d6c4, Func Offset: 0x204
	// Line 2463, Address: 0x20d6c8, Func Offset: 0x208
	// Line 2465, Address: 0x20d6fc, Func Offset: 0x23c
	// Line 2468, Address: 0x20d700, Func Offset: 0x240
	// Line 2470, Address: 0x20d714, Func Offset: 0x254
	// Line 2475, Address: 0x20d724, Func Offset: 0x264
	// Line 2470, Address: 0x20d72c, Func Offset: 0x26c
	// Line 2475, Address: 0x20d758, Func Offset: 0x298
	// Line 2476, Address: 0x20d760, Func Offset: 0x2a0
	// Line 2479, Address: 0x20d770, Func Offset: 0x2b0
	// Line 2480, Address: 0x20d780, Func Offset: 0x2c0
	// Line 2482, Address: 0x20d790, Func Offset: 0x2d0
	// Line 2480, Address: 0x20d794, Func Offset: 0x2d4
	// Line 2482, Address: 0x20d798, Func Offset: 0x2d8
	// Line 2483, Address: 0x20d7a4, Func Offset: 0x2e4
	// Line 2485, Address: 0x20d7b4, Func Offset: 0x2f4
	// Line 2487, Address: 0x20d7c0, Func Offset: 0x300
	// Line 2489, Address: 0x20d7c8, Func Offset: 0x308
	// Line 2493, Address: 0x20d7d0, Func Offset: 0x310
	// Line 2495, Address: 0x20d808, Func Offset: 0x348
	// Line 2497, Address: 0x20d810, Func Offset: 0x350
	// Line 2501, Address: 0x20d818, Func Offset: 0x358
	// Line 2503, Address: 0x20d840, Func Offset: 0x380
	// Line 2505, Address: 0x20d848, Func Offset: 0x388
	// Line 2506, Address: 0x20d85c, Func Offset: 0x39c
	// Line 2512, Address: 0x20d868, Func Offset: 0x3a8
	// Func End, Address: 0x20d880, Func Offset: 0x3c0
}

// 
// Start address: 0x20d880
void EnemyHyenaControlHolding(sfObj* obj)
{
	EnemyHyenaWork* ew;
	float epos[4];
	float new_epos[4];
	float ppos[4];
	float dir[4];
	float move[4];
	sgBone* bone;
	float nose[4];
	float now_holding_dist;
	char holding_end;
	float dist;
	// Line 2518, Address: 0x20d880, Func Offset: 0
	// Line 2519, Address: 0x20d898, Func Offset: 0x18
	// Line 2535, Address: 0x20d8a4, Func Offset: 0x24
	// Line 2539, Address: 0x20d8d0, Func Offset: 0x50
	// Line 2543, Address: 0x20d8dc, Func Offset: 0x5c
	// Line 2544, Address: 0x20d8ec, Func Offset: 0x6c
	// Line 2545, Address: 0x20d914, Func Offset: 0x94
	// Line 2546, Address: 0x20d920, Func Offset: 0xa0
	// Line 2548, Address: 0x20d928, Func Offset: 0xa8
	// Line 2549, Address: 0x20d950, Func Offset: 0xd0
	// Line 2550, Address: 0x20d95c, Func Offset: 0xdc
	// Line 2552, Address: 0x20d960, Func Offset: 0xe0
	// Line 2555, Address: 0x20d96c, Func Offset: 0xec
	// Line 2556, Address: 0x20d988, Func Offset: 0x108
	// Line 2557, Address: 0x20d98c, Func Offset: 0x10c
	// Line 2556, Address: 0x20d990, Func Offset: 0x110
	// Line 2557, Address: 0x20d994, Func Offset: 0x114
	// Line 2560, Address: 0x20d9bc, Func Offset: 0x13c
	// Line 2563, Address: 0x20d9d0, Func Offset: 0x150
	// Line 2564, Address: 0x20d9e8, Func Offset: 0x168
	// Line 2565, Address: 0x20da14, Func Offset: 0x194
	// Line 2566, Address: 0x20da34, Func Offset: 0x1b4
	// Line 2567, Address: 0x20da54, Func Offset: 0x1d4
	// Line 2568, Address: 0x20da58, Func Offset: 0x1d8
	// Line 2567, Address: 0x20da5c, Func Offset: 0x1dc
	// Line 2568, Address: 0x20da60, Func Offset: 0x1e0
	// Line 2569, Address: 0x20da68, Func Offset: 0x1e8
	// Line 2572, Address: 0x20da74, Func Offset: 0x1f4
	// Line 2573, Address: 0x20da88, Func Offset: 0x208
	// Line 2574, Address: 0x20da94, Func Offset: 0x214
	// Line 2575, Address: 0x20daa0, Func Offset: 0x220
	// Line 2578, Address: 0x20daa8, Func Offset: 0x228
	// Line 2579, Address: 0x20dab8, Func Offset: 0x238
	// Line 2583, Address: 0x20dac8, Func Offset: 0x248
	// Line 2584, Address: 0x20dafc, Func Offset: 0x27c
	// Line 2592, Address: 0x20db08, Func Offset: 0x288
	// Line 2593, Address: 0x20db20, Func Offset: 0x2a0
	// Line 2594, Address: 0x20db24, Func Offset: 0x2a4
	// Line 2595, Address: 0x20db2c, Func Offset: 0x2ac
	// Line 2598, Address: 0x20db30, Func Offset: 0x2b0
	// Line 2600, Address: 0x20db54, Func Offset: 0x2d4
	// Line 2601, Address: 0x20db5c, Func Offset: 0x2dc
	// Line 2604, Address: 0x20db60, Func Offset: 0x2e0
	// Line 2605, Address: 0x20db70, Func Offset: 0x2f0
	// Line 2606, Address: 0x20db7c, Func Offset: 0x2fc
	// Line 2608, Address: 0x20db9c, Func Offset: 0x31c
	// Line 2609, Address: 0x20dba4, Func Offset: 0x324
	// Line 2614, Address: 0x20dba8, Func Offset: 0x328
	// Line 2617, Address: 0x20dbb0, Func Offset: 0x330
	// Line 2618, Address: 0x20dbbc, Func Offset: 0x33c
	// Line 2619, Address: 0x20dbd0, Func Offset: 0x350
	// Line 2620, Address: 0x20dbd8, Func Offset: 0x358
	// Line 2622, Address: 0x20dbe0, Func Offset: 0x360
	// Line 2625, Address: 0x20dbe8, Func Offset: 0x368
	// Line 2627, Address: 0x20dbf4, Func Offset: 0x374
	// Line 2628, Address: 0x20dbfc, Func Offset: 0x37c
	// Line 2632, Address: 0x20dc08, Func Offset: 0x388
	// Func End, Address: 0x20dc24, Func Offset: 0x3a4
}

// 
// Start address: 0x20dc30
void EnemyHyenaControlEscape(sfObj* obj)
{
	EnemyHyenaWork* ew;
	// Line 2659, Address: 0x20dc30, Func Offset: 0
	// Line 2661, Address: 0x20dc40, Func Offset: 0x10
	// Line 2666, Address: 0x20dc4c, Func Offset: 0x1c
	// Line 2668, Address: 0x20dc70, Func Offset: 0x40
	// Line 2669, Address: 0x20dc7c, Func Offset: 0x4c
	// Line 2668, Address: 0x20dc84, Func Offset: 0x54
	// Line 2669, Address: 0x20dc88, Func Offset: 0x58
	// Line 2668, Address: 0x20dc8c, Func Offset: 0x5c
	// Line 2669, Address: 0x20dc90, Func Offset: 0x60
	// Line 2670, Address: 0x20dc98, Func Offset: 0x68
	// Line 2671, Address: 0x20dca4, Func Offset: 0x74
	// Line 2672, Address: 0x20dcac, Func Offset: 0x7c
	// Line 2673, Address: 0x20dcb4, Func Offset: 0x84
	// Line 2675, Address: 0x20dcb8, Func Offset: 0x88
	// Line 2676, Address: 0x20dce0, Func Offset: 0xb0
	// Line 2680, Address: 0x20dce8, Func Offset: 0xb8
	// Line 2681, Address: 0x20dd0c, Func Offset: 0xdc
	// Line 2685, Address: 0x20dd10, Func Offset: 0xe0
	// Line 2687, Address: 0x20dd30, Func Offset: 0x100
	// Line 2690, Address: 0x20dd44, Func Offset: 0x114
	// Line 2692, Address: 0x20dd50, Func Offset: 0x120
	// Line 2693, Address: 0x20dd60, Func Offset: 0x130
	// Line 2695, Address: 0x20dd6c, Func Offset: 0x13c
	// Line 2697, Address: 0x20dd70, Func Offset: 0x140
	// Line 2698, Address: 0x20dd7c, Func Offset: 0x14c
	// Line 2699, Address: 0x20dd8c, Func Offset: 0x15c
	// Line 2700, Address: 0x20dd94, Func Offset: 0x164
	// Line 2702, Address: 0x20dda0, Func Offset: 0x170
	// Line 2706, Address: 0x20ddac, Func Offset: 0x17c
	// Line 2707, Address: 0x20ddb0, Func Offset: 0x180
	// Func End, Address: 0x20ddc4, Func Offset: 0x194
}

// 
// Start address: 0x20ddd0
void EnemyHyenaControlDamage(sfObj* obj)
{
	EnemyHyenaWork* ew;
	float epos[4];
	float ppos[4];
	float target_rad;
	// Line 2714, Address: 0x20ddd0, Func Offset: 0
	// Line 2715, Address: 0x20dde0, Func Offset: 0x10
	// Line 2720, Address: 0x20ddec, Func Offset: 0x1c
	// Line 2723, Address: 0x20de10, Func Offset: 0x40
	// Line 2724, Address: 0x20de1c, Func Offset: 0x4c
	// Line 2725, Address: 0x20de24, Func Offset: 0x54
	// Line 2726, Address: 0x20de2c, Func Offset: 0x5c
	// Line 2727, Address: 0x20de30, Func Offset: 0x60
	// Line 2729, Address: 0x20de40, Func Offset: 0x70
	// Line 2730, Address: 0x20de5c, Func Offset: 0x8c
	// Line 2731, Address: 0x20de64, Func Offset: 0x94
	// Line 2733, Address: 0x20de70, Func Offset: 0xa0
	// Line 2735, Address: 0x20de84, Func Offset: 0xb4
	// Line 2736, Address: 0x20de88, Func Offset: 0xb8
	// Line 2737, Address: 0x20de94, Func Offset: 0xc4
	// Line 2741, Address: 0x20deb0, Func Offset: 0xe0
	// Line 2742, Address: 0x20debc, Func Offset: 0xec
	// Line 2743, Address: 0x20ded0, Func Offset: 0x100
	// Line 2746, Address: 0x20dee8, Func Offset: 0x118
	// Line 2747, Address: 0x20df2c, Func Offset: 0x15c
	// Line 2748, Address: 0x20df34, Func Offset: 0x164
	// Line 2750, Address: 0x20df40, Func Offset: 0x170
	// Line 2755, Address: 0x20df4c, Func Offset: 0x17c
	// Line 2756, Address: 0x20df50, Func Offset: 0x180
	// Func End, Address: 0x20df64, Func Offset: 0x194
}

// 
// Start address: 0x20df70
void EnemyHyenaControlDown(sfObj* obj)
{
	EnemyHyenaWork* ew;
	// Line 2762, Address: 0x20df70, Func Offset: 0
	// Line 2763, Address: 0x20df80, Func Offset: 0x10
	// Line 2765, Address: 0x20df8c, Func Offset: 0x1c
	// Line 2767, Address: 0x20dfb0, Func Offset: 0x40
	// Line 2768, Address: 0x20dfc0, Func Offset: 0x50
	// Line 2769, Address: 0x20dfcc, Func Offset: 0x5c
	// Line 2770, Address: 0x20dfd8, Func Offset: 0x68
	// Line 2771, Address: 0x20dfe0, Func Offset: 0x70
	// Line 2773, Address: 0x20dfe8, Func Offset: 0x78
	// Line 2774, Address: 0x20dff8, Func Offset: 0x88
	// Line 2775, Address: 0x20e000, Func Offset: 0x90
	// Line 2776, Address: 0x20e01c, Func Offset: 0xac
	// Line 2777, Address: 0x20e024, Func Offset: 0xb4
	// Line 2779, Address: 0x20e030, Func Offset: 0xc0
	// Line 2783, Address: 0x20e03c, Func Offset: 0xcc
	// Line 2784, Address: 0x20e040, Func Offset: 0xd0
	// Func End, Address: 0x20e054, Func Offset: 0xe4
}

// 
// Start address: 0x20e060
int EnemyHyenaHPRateDownCheck(sfObj* obj)
{
	// Line 2790, Address: 0x20e060, Func Offset: 0
	// Line 2792, Address: 0x20e068, Func Offset: 0x8
	// Line 2793, Address: 0x20e08c, Func Offset: 0x2c
	// Func End, Address: 0x20e098, Func Offset: 0x38
}

// 
// Start address: 0x20e0a0
void EnemyHyenaControlStruggle(sfObj* obj)
{
	EnemyHyenaWork* ew;
	// Line 2799, Address: 0x20e0a0, Func Offset: 0
	// Line 2802, Address: 0x20e0b0, Func Offset: 0x10
	// Line 2804, Address: 0x20e0bc, Func Offset: 0x1c
	// Line 2807, Address: 0x20e0e0, Func Offset: 0x40
	// Line 2808, Address: 0x20e100, Func Offset: 0x60
	// Line 2809, Address: 0x20e104, Func Offset: 0x64
	// Line 2811, Address: 0x20e110, Func Offset: 0x70
	// Line 2813, Address: 0x20e11c, Func Offset: 0x7c
	// Line 2811, Address: 0x20e120, Func Offset: 0x80
	// Line 2813, Address: 0x20e124, Func Offset: 0x84
	// Line 2811, Address: 0x20e12c, Func Offset: 0x8c
	// Line 2813, Address: 0x20e138, Func Offset: 0x98
	// Line 2815, Address: 0x20e164, Func Offset: 0xc4
	// Line 2816, Address: 0x20e168, Func Offset: 0xc8
	// Line 2817, Address: 0x20e170, Func Offset: 0xd0
	// Line 2819, Address: 0x20e178, Func Offset: 0xd8
	// Line 2820, Address: 0x20e180, Func Offset: 0xe0
	// Line 2823, Address: 0x20e188, Func Offset: 0xe8
	// Line 2826, Address: 0x20e194, Func Offset: 0xf4
	// Line 2828, Address: 0x20e198, Func Offset: 0xf8
	// Line 2832, Address: 0x20e1e8, Func Offset: 0x148
	// Line 2833, Address: 0x20e1fc, Func Offset: 0x15c
	// Line 2835, Address: 0x20e208, Func Offset: 0x168
	// Line 2836, Address: 0x20e21c, Func Offset: 0x17c
	// Line 2837, Address: 0x20e220, Func Offset: 0x180
	// Line 2838, Address: 0x20e22c, Func Offset: 0x18c
	// Line 2839, Address: 0x20e238, Func Offset: 0x198
	// Line 2840, Address: 0x20e240, Func Offset: 0x1a0
	// Line 2852, Address: 0x20e248, Func Offset: 0x1a8
	// Line 2853, Address: 0x20e258, Func Offset: 0x1b8
	// Line 2855, Address: 0x20e274, Func Offset: 0x1d4
	// Line 2856, Address: 0x20e290, Func Offset: 0x1f0
	// Line 2857, Address: 0x20e298, Func Offset: 0x1f8
	// Line 2859, Address: 0x20e2a0, Func Offset: 0x200
	// Line 2860, Address: 0x20e2b0, Func Offset: 0x210
	// Line 2862, Address: 0x20e2bc, Func Offset: 0x21c
	// Line 2864, Address: 0x20e2c8, Func Offset: 0x228
	// Line 2869, Address: 0x20e2d4, Func Offset: 0x234
	// Line 2870, Address: 0x20e2d8, Func Offset: 0x238
	// Func End, Address: 0x20e2ec, Func Offset: 0x24c
}

// 
// Start address: 0x20e2f0
void EnemyHyenaControlFinish()
{
	// Line 2877, Address: 0x20e2f0, Func Offset: 0
	// Func End, Address: 0x20e2f8, Func Offset: 0x8
}

// 
// Start address: 0x20e300
void EnemyHyenaControlRise(sfObj* obj)
{
	EnemyHyenaWork* ew;
	float epos[4];
	float ppos[4];
	float target_rad;
	// Line 2883, Address: 0x20e300, Func Offset: 0
	// Line 2884, Address: 0x20e310, Func Offset: 0x10
	// Line 2890, Address: 0x20e31c, Func Offset: 0x1c
	// Line 2892, Address: 0x20e340, Func Offset: 0x40
	// Line 2893, Address: 0x20e354, Func Offset: 0x54
	// Line 2894, Address: 0x20e368, Func Offset: 0x68
	// Line 2896, Address: 0x20e370, Func Offset: 0x70
	// Line 2897, Address: 0x20e384, Func Offset: 0x84
	// Line 2898, Address: 0x20e388, Func Offset: 0x88
	// Line 2899, Address: 0x20e394, Func Offset: 0x94
	// Line 2900, Address: 0x20e39c, Func Offset: 0x9c
	// Line 2901, Address: 0x20e3a4, Func Offset: 0xa4
	// Line 2902, Address: 0x20e3a8, Func Offset: 0xa8
	// Line 2904, Address: 0x20e3b8, Func Offset: 0xb8
	// Line 2906, Address: 0x20e3cc, Func Offset: 0xcc
	// Line 2908, Address: 0x20e3e0, Func Offset: 0xe0
	// Line 2909, Address: 0x20e3e4, Func Offset: 0xe4
	// Line 2910, Address: 0x20e3f0, Func Offset: 0xf0
	// Line 2914, Address: 0x20e40c, Func Offset: 0x10c
	// Line 2915, Address: 0x20e418, Func Offset: 0x118
	// Line 2916, Address: 0x20e42c, Func Offset: 0x12c
	// Line 2919, Address: 0x20e444, Func Offset: 0x144
	// Line 2920, Address: 0x20e478, Func Offset: 0x178
	// Line 2921, Address: 0x20e480, Func Offset: 0x180
	// Line 2923, Address: 0x20e488, Func Offset: 0x188
	// Line 2927, Address: 0x20e494, Func Offset: 0x194
	// Line 2928, Address: 0x20e498, Func Offset: 0x198
	// Func End, Address: 0x20e4ac, Func Offset: 0x1ac
}

// 
// Start address: 0x20e4b0
void EnemyHyenaSetBloodPool(sfObj* obj)
{
	EnemyHyenaWork* ew;
	float epos[4];
	// Line 2934, Address: 0x20e4b0, Func Offset: 0
	// Line 2935, Address: 0x20e4c0, Func Offset: 0x10
	// Line 2937, Address: 0x20e4c8, Func Offset: 0x18
	// Line 2939, Address: 0x20e4d4, Func Offset: 0x24
	// Line 2940, Address: 0x20e4ec, Func Offset: 0x3c
	// Line 2941, Address: 0x20e4fc, Func Offset: 0x4c
	// Line 2942, Address: 0x20e504, Func Offset: 0x54
	// Line 2943, Address: 0x20e508, Func Offset: 0x58
	// Func End, Address: 0x20e51c, Func Offset: 0x6c
}

// 
// Start address: 0x20e520
void EnemyHyenaSetBloodPoolFast(sfObj* obj)
{
	EnemyHyenaWork* ew;
	float epos[4];
	// Line 2949, Address: 0x20e520, Func Offset: 0
	// Line 2950, Address: 0x20e530, Func Offset: 0x10
	// Line 2952, Address: 0x20e538, Func Offset: 0x18
	// Line 2954, Address: 0x20e544, Func Offset: 0x24
	// Line 2955, Address: 0x20e55c, Func Offset: 0x3c
	// Line 2957, Address: 0x20e56c, Func Offset: 0x4c
	// Line 2958, Address: 0x20e57c, Func Offset: 0x5c
	// Line 2959, Address: 0x20e584, Func Offset: 0x64
	// Line 2960, Address: 0x20e588, Func Offset: 0x68
	// Func End, Address: 0x20e59c, Func Offset: 0x7c
}

// 
// Start address: 0x20e5a0
void EnemyHyenaConditionDead()
{
	// Line 2973, Address: 0x20e5a0, Func Offset: 0
	// Func End, Address: 0x20e5a8, Func Offset: 0x8
}

// 
// Start address: 0x20e5b0
void EnemyHyenaControlDead(sfObj* obj)
{
	EnemyHyenaWork* ew;
	// Line 2980, Address: 0x20e5b0, Func Offset: 0
	// Line 2981, Address: 0x20e5c0, Func Offset: 0x10
	// Line 2983, Address: 0x20e5cc, Func Offset: 0x1c
	// Line 2984, Address: 0x20e5d8, Func Offset: 0x28
	// Line 2987, Address: 0x20e5e0, Func Offset: 0x30
	// Line 2988, Address: 0x20e5ec, Func Offset: 0x3c
	// Line 2989, Address: 0x20e5f8, Func Offset: 0x48
	// Line 2990, Address: 0x20e620, Func Offset: 0x70
	// Line 2991, Address: 0x20e630, Func Offset: 0x80
	// Line 2992, Address: 0x20e638, Func Offset: 0x88
	// Line 2993, Address: 0x20e644, Func Offset: 0x94
	// Line 2994, Address: 0x20e650, Func Offset: 0xa0
	// Line 2995, Address: 0x20e658, Func Offset: 0xa8
	// Line 2996, Address: 0x20e660, Func Offset: 0xb0
	// Line 3000, Address: 0x20e668, Func Offset: 0xb8
	// Line 3001, Address: 0x20e670, Func Offset: 0xc0
	// Line 3002, Address: 0x20e67c, Func Offset: 0xcc
	// Line 3003, Address: 0x20e688, Func Offset: 0xd8
	// Line 3004, Address: 0x20e690, Func Offset: 0xe0
	// Line 3005, Address: 0x20e698, Func Offset: 0xe8
	// Line 3010, Address: 0x20e6a0, Func Offset: 0xf0
	// Line 3011, Address: 0x20e6c4, Func Offset: 0x114
	// Line 3012, Address: 0x20e6c8, Func Offset: 0x118
	// Line 3013, Address: 0x20e6d4, Func Offset: 0x124
	// Line 3014, Address: 0x20e6e0, Func Offset: 0x130
	// Line 3015, Address: 0x20e6e8, Func Offset: 0x138
	// Line 3019, Address: 0x20e6f0, Func Offset: 0x140
	// Line 3020, Address: 0x20e6fc, Func Offset: 0x14c
	// Line 3021, Address: 0x20e704, Func Offset: 0x154
	// Line 3022, Address: 0x20e70c, Func Offset: 0x15c
	// Line 3025, Address: 0x20e710, Func Offset: 0x160
	// Line 3027, Address: 0x20e71c, Func Offset: 0x16c
	// Line 3028, Address: 0x20e724, Func Offset: 0x174
	// Line 3029, Address: 0x20e730, Func Offset: 0x180
	// Line 3030, Address: 0x20e740, Func Offset: 0x190
	// Line 3032, Address: 0x20e748, Func Offset: 0x198
	// Line 3033, Address: 0x20e75c, Func Offset: 0x1ac
	// Line 3035, Address: 0x20e760, Func Offset: 0x1b0
	// Line 3036, Address: 0x20e76c, Func Offset: 0x1bc
	// Line 3039, Address: 0x20e770, Func Offset: 0x1c0
	// Line 3041, Address: 0x20e780, Func Offset: 0x1d0
	// Line 3042, Address: 0x20e788, Func Offset: 0x1d8
	// Line 3046, Address: 0x20e790, Func Offset: 0x1e0
	// Line 3047, Address: 0x20e79c, Func Offset: 0x1ec
	// Line 3048, Address: 0x20e7a0, Func Offset: 0x1f0
	// Line 3050, Address: 0x20e7a8, Func Offset: 0x1f8
	// Line 3051, Address: 0x20e7b4, Func Offset: 0x204
	// Line 3052, Address: 0x20e7b8, Func Offset: 0x208
	// Line 3057, Address: 0x20e7e4, Func Offset: 0x234
	// Line 3058, Address: 0x20e7e8, Func Offset: 0x238
	// Func End, Address: 0x20e7fc, Func Offset: 0x24c
}

// 
// Start address: 0x20e800
void EnemyHyenaControlDeadAdruptly(sfObj* obj)
{
	EnemyHyenaWork* ew;
	// Line 3093, Address: 0x20e800, Func Offset: 0
	// Line 3094, Address: 0x20e80c, Func Offset: 0xc
	// Line 3096, Address: 0x20e814, Func Offset: 0x14
	// Line 3097, Address: 0x20e81c, Func Offset: 0x1c
	// Line 3098, Address: 0x20e828, Func Offset: 0x28
	// Line 3099, Address: 0x20e830, Func Offset: 0x30
	// Line 3100, Address: 0x20e83c, Func Offset: 0x3c
	// Line 3102, Address: 0x20e848, Func Offset: 0x48
	// Line 3103, Address: 0x20e854, Func Offset: 0x54
	// Line 3105, Address: 0x20e860, Func Offset: 0x60
	// Line 3106, Address: 0x20e86c, Func Offset: 0x6c
	// Line 3107, Address: 0x20e878, Func Offset: 0x78
	// Line 3108, Address: 0x20e880, Func Offset: 0x80
	// Func End, Address: 0x20e890, Func Offset: 0x90
}

// 
// Start address: 0x20e890
void EnemyHyenaControlDeadDemo(sfObj* obj)
{
	EnemyHyenaWork* ew;
	// Line 3114, Address: 0x20e890, Func Offset: 0
	// Line 3115, Address: 0x20e89c, Func Offset: 0xc
	// Line 3117, Address: 0x20e8a4, Func Offset: 0x14
	// Line 3118, Address: 0x20e8a8, Func Offset: 0x18
	// Line 3117, Address: 0x20e8ac, Func Offset: 0x1c
	// Line 3118, Address: 0x20e8b0, Func Offset: 0x20
	// Line 3119, Address: 0x20e8b8, Func Offset: 0x28
	// Line 3120, Address: 0x20e8c0, Func Offset: 0x30
	// Line 3121, Address: 0x20e8cc, Func Offset: 0x3c
	// Line 3122, Address: 0x20e8d8, Func Offset: 0x48
	// Line 3123, Address: 0x20e8e0, Func Offset: 0x50
	// Func End, Address: 0x20e8f0, Func Offset: 0x60
}

// 
// Start address: 0x20e8f0
void EnemyHyenaControlNT(sfObj* obj)
{
	EnemyHyenaWork* ew;
	// Line 3129, Address: 0x20e8f0, Func Offset: 0
	// Line 3130, Address: 0x20e900, Func Offset: 0x10
	// Line 3132, Address: 0x20e90c, Func Offset: 0x1c
	// Line 3135, Address: 0x20e930, Func Offset: 0x40
	// Line 3136, Address: 0x20e93c, Func Offset: 0x4c
	// Line 3135, Address: 0x20e944, Func Offset: 0x54
	// Line 3136, Address: 0x20e948, Func Offset: 0x58
	// Line 3135, Address: 0x20e94c, Func Offset: 0x5c
	// Line 3136, Address: 0x20e950, Func Offset: 0x60
	// Line 3137, Address: 0x20e958, Func Offset: 0x68
	// Line 3138, Address: 0x20e964, Func Offset: 0x74
	// Line 3139, Address: 0x20e96c, Func Offset: 0x7c
	// Line 3141, Address: 0x20e974, Func Offset: 0x84
	// Line 3142, Address: 0x20e978, Func Offset: 0x88
	// Line 3143, Address: 0x20e988, Func Offset: 0x98
	// Line 3145, Address: 0x20e994, Func Offset: 0xa4
	// Line 3146, Address: 0x20e9a0, Func Offset: 0xb0
	// Line 3148, Address: 0x20e9a8, Func Offset: 0xb8
	// Line 3149, Address: 0x20e9c4, Func Offset: 0xd4
	// Line 3150, Address: 0x20e9cc, Func Offset: 0xdc
	// Line 3152, Address: 0x20e9d8, Func Offset: 0xe8
	// Line 3157, Address: 0x20e9e4, Func Offset: 0xf4
	// Line 3162, Address: 0x20e9e8, Func Offset: 0xf8
	// Line 3163, Address: 0x20e9f4, Func Offset: 0x104
	// Line 3164, Address: 0x20ea04, Func Offset: 0x114
	// Line 3167, Address: 0x20ea08, Func Offset: 0x118
	// Func End, Address: 0x20ea1c, Func Offset: 0x12c
}

// 
// Start address: 0x20ea20
void EnemyHyenaHitCheck(sfObj* obj)
{
	int ret;
	// Line 3173, Address: 0x20ea20, Func Offset: 0
	// Line 3180, Address: 0x20ea2c, Func Offset: 0xc
	// Line 3181, Address: 0x20ea3c, Func Offset: 0x1c
	// Line 3182, Address: 0x20ea4c, Func Offset: 0x2c
	// Line 3194, Address: 0x20ea50, Func Offset: 0x30
	// Line 3201, Address: 0x20ea60, Func Offset: 0x40
	// Line 3202, Address: 0x20ea68, Func Offset: 0x48
	// Line 3206, Address: 0x20ea70, Func Offset: 0x50
	// Line 3208, Address: 0x20ea78, Func Offset: 0x58
	// Func End, Address: 0x20ea88, Func Offset: 0x68
}

// 
// Start address: 0x20ea90
int EnemyHyenaDamageDetect(sfObj* obj)
{
	EnemyHyenaWork* ew;
	// Line 3214, Address: 0x20ea90, Func Offset: 0
	// Line 3215, Address: 0x20eaa0, Func Offset: 0x10
	// Line 3226, Address: 0x20eaac, Func Offset: 0x1c
	// Line 3228, Address: 0x20eabc, Func Offset: 0x2c
	// Line 3237, Address: 0x20eac4, Func Offset: 0x34
	// Line 3238, Address: 0x20ead8, Func Offset: 0x48
	// Line 3240, Address: 0x20eaec, Func Offset: 0x5c
	// Line 3242, Address: 0x20eaf4, Func Offset: 0x64
	// Line 3244, Address: 0x20eaf8, Func Offset: 0x68
	// Line 3246, Address: 0x20eb00, Func Offset: 0x70
	// Line 3247, Address: 0x20eb08, Func Offset: 0x78
	// Func End, Address: 0x20eb1c, Func Offset: 0x8c
}

// 
// Start address: 0x20eb20
int EnemyHyenaDamageIsStrikehead(sfObj* obj, EnemyBattleDamage* bd)
{
	EnemyHyenaWork* ew;
	float dir[4];
	float bd_dir[4];
	float pos[4];
	float dot;
	// Line 3254, Address: 0x20eb20, Func Offset: 0
	// Line 3257, Address: 0x20eb34, Func Offset: 0x14
	// Line 3261, Address: 0x20eb3c, Func Offset: 0x1c
	// Line 3262, Address: 0x20eb50, Func Offset: 0x30
	// Line 3265, Address: 0x20eb54, Func Offset: 0x34
	// Line 3262, Address: 0x20eb5c, Func Offset: 0x3c
	// Line 3263, Address: 0x20eb60, Func Offset: 0x40
	// Line 3264, Address: 0x20eb64, Func Offset: 0x44
	// Line 3265, Address: 0x20eb6c, Func Offset: 0x4c
	// Line 3268, Address: 0x20eb8c, Func Offset: 0x6c
	// Line 3269, Address: 0x20eba8, Func Offset: 0x88
	// Line 3273, Address: 0x20ebb0, Func Offset: 0x90
	// Line 3274, Address: 0x20ebc8, Func Offset: 0xa8
	// Line 3275, Address: 0x20ebec, Func Offset: 0xcc
	// Line 3276, Address: 0x20ebf4, Func Offset: 0xd4
	// Line 3278, Address: 0x20ebf8, Func Offset: 0xd8
	// Line 3279, Address: 0x20ec00, Func Offset: 0xe0
	// Func End, Address: 0x20ec14, Func Offset: 0xf4
}

// 
// Start address: 0x20ec20
int EnemyHyenaDamageEnableStamp(sfObj* obj)
{
	EnemyHyenaWork* ew;
	// Line 3320, Address: 0x20ec20, Func Offset: 0
	// Line 3323, Address: 0x20ec28, Func Offset: 0x8
	// Line 3325, Address: 0x20ec30, Func Offset: 0x10
	// Line 3326, Address: 0x20ec34, Func Offset: 0x14
	// Line 3325, Address: 0x20ec38, Func Offset: 0x18
	// Line 3326, Address: 0x20ec3c, Func Offset: 0x1c
	// Func End, Address: 0x20ec44, Func Offset: 0x24
}

// 
// Start address: 0x20ec50
void EnemyHyenaDamageAdditional(sfObj* obj)
{
	EnemyHyenaWork* ew;
	EnemyBattleDamage bd;
	int lr;
	int down;
	EnemyHyenaAnime anm;
	float old_hp;
	int sd;
	_anon4 line;
	_anon1* poly;
	_anon3 plane;
	float nv[4];
	float unit_y[4];
	float epos[4];
	float dot;
	float v0[4];
	float v1[4];
	float cross[4];
	// Line 3333, Address: 0x20ec50, Func Offset: 0
	// Line 3335, Address: 0x20ec70, Func Offset: 0x20
	// Line 3347, Address: 0x20ec7c, Func Offset: 0x2c
	// Line 3350, Address: 0x20ec88, Func Offset: 0x38
	// Line 3379, Address: 0x20ec94, Func Offset: 0x44
	// Line 3381, Address: 0x20eca4, Func Offset: 0x54
	// Line 3386, Address: 0x20ecbc, Func Offset: 0x6c
	// Line 3394, Address: 0x20eccc, Func Offset: 0x7c
	// Line 3395, Address: 0x20ece0, Func Offset: 0x90
	// Line 3396, Address: 0x20ecec, Func Offset: 0x9c
	// Line 3397, Address: 0x20ecf0, Func Offset: 0xa0
	// Line 3396, Address: 0x20ecf4, Func Offset: 0xa4
	// Line 3398, Address: 0x20ecfc, Func Offset: 0xac
	// Line 3399, Address: 0x20ed04, Func Offset: 0xb4
	// Line 3402, Address: 0x20ed08, Func Offset: 0xb8
	// Line 3406, Address: 0x20ed1c, Func Offset: 0xcc
	// Line 3408, Address: 0x20ed24, Func Offset: 0xd4
	// Line 3409, Address: 0x20ed2c, Func Offset: 0xdc
	// Line 3413, Address: 0x20ed30, Func Offset: 0xe0
	// Line 3423, Address: 0x20ed3c, Func Offset: 0xec
	// Line 3426, Address: 0x20ed4c, Func Offset: 0xfc
	// Line 3429, Address: 0x20ed50, Func Offset: 0x100
	// Line 3426, Address: 0x20ed54, Func Offset: 0x104
	// Line 3427, Address: 0x20ed58, Func Offset: 0x108
	// Line 3428, Address: 0x20ed60, Func Offset: 0x110
	// Line 3429, Address: 0x20ed68, Func Offset: 0x118
	// Line 3433, Address: 0x20ed70, Func Offset: 0x120
	// Line 3434, Address: 0x20eda0, Func Offset: 0x150
	// Line 3435, Address: 0x20eda8, Func Offset: 0x158
	// Line 3438, Address: 0x20edb0, Func Offset: 0x160
	// Line 3439, Address: 0x20edb8, Func Offset: 0x168
	// Line 3440, Address: 0x20edc0, Func Offset: 0x170
	// Line 3446, Address: 0x20edc8, Func Offset: 0x178
	// Line 3453, Address: 0x20eddc, Func Offset: 0x18c
	// Line 3458, Address: 0x20edf0, Func Offset: 0x1a0
	// Line 3463, Address: 0x20ee18, Func Offset: 0x1c8
	// Line 3471, Address: 0x20ee78, Func Offset: 0x228
	// Line 3472, Address: 0x20ee7c, Func Offset: 0x22c
	// Line 3476, Address: 0x20ee80, Func Offset: 0x230
	// Line 3488, Address: 0x20ee88, Func Offset: 0x238
	// Line 3489, Address: 0x20ee90, Func Offset: 0x240
	// Line 3491, Address: 0x20ee94, Func Offset: 0x244
	// Line 3489, Address: 0x20ee98, Func Offset: 0x248
	// Line 3490, Address: 0x20eea4, Func Offset: 0x254
	// Line 3489, Address: 0x20eea8, Func Offset: 0x258
	// Line 3491, Address: 0x20eeac, Func Offset: 0x25c
	// Line 3489, Address: 0x20eeb0, Func Offset: 0x260
	// Line 3490, Address: 0x20eebc, Func Offset: 0x26c
	// Line 3491, Address: 0x20eed4, Func Offset: 0x284
	// Line 3492, Address: 0x20eedc, Func Offset: 0x28c
	// Line 3493, Address: 0x20eee4, Func Offset: 0x294
	// Line 3494, Address: 0x20eeec, Func Offset: 0x29c
	// Line 3496, Address: 0x20eef4, Func Offset: 0x2a4
	// Line 3497, Address: 0x20ef14, Func Offset: 0x2c4
	// Line 3499, Address: 0x20ef38, Func Offset: 0x2e8
	// Line 3500, Address: 0x20ef3c, Func Offset: 0x2ec
	// Line 3501, Address: 0x20ef44, Func Offset: 0x2f4
	// Line 3500, Address: 0x20ef4c, Func Offset: 0x2fc
	// Line 3499, Address: 0x20ef50, Func Offset: 0x300
	// Line 3501, Address: 0x20ef58, Func Offset: 0x308
	// Line 3502, Address: 0x20ef74, Func Offset: 0x324
	// Line 3509, Address: 0x20ef90, Func Offset: 0x340
	// Line 3510, Address: 0x20ef9c, Func Offset: 0x34c
	// Line 3511, Address: 0x20efa8, Func Offset: 0x358
	// Line 3512, Address: 0x20efb4, Func Offset: 0x364
	// Line 3513, Address: 0x20efd8, Func Offset: 0x388
	// Line 3515, Address: 0x20efec, Func Offset: 0x39c
	// Line 3517, Address: 0x20eff8, Func Offset: 0x3a8
	// Line 3522, Address: 0x20effc, Func Offset: 0x3ac
	// Line 3528, Address: 0x20f000, Func Offset: 0x3b0
	// Line 3530, Address: 0x20f034, Func Offset: 0x3e4
	// Line 3531, Address: 0x20f050, Func Offset: 0x400
	// Line 3534, Address: 0x20f058, Func Offset: 0x408
	// Line 3538, Address: 0x20f080, Func Offset: 0x430
	// Line 3542, Address: 0x20f088, Func Offset: 0x438
	// Line 3546, Address: 0x20f090, Func Offset: 0x440
	// Line 3547, Address: 0x20f094, Func Offset: 0x444
	// Line 3550, Address: 0x20f09c, Func Offset: 0x44c
	// Line 3552, Address: 0x20f0a0, Func Offset: 0x450
	// Line 3553, Address: 0x20f0a8, Func Offset: 0x458
	// Line 3555, Address: 0x20f0d0, Func Offset: 0x480
	// Line 3557, Address: 0x20f0d8, Func Offset: 0x488
	// Line 3559, Address: 0x20f0dc, Func Offset: 0x48c
	// Line 3563, Address: 0x20f0e8, Func Offset: 0x498
	// Line 3567, Address: 0x20f0f0, Func Offset: 0x4a0
	// Line 3568, Address: 0x20f0f8, Func Offset: 0x4a8
	// Line 3570, Address: 0x20f120, Func Offset: 0x4d0
	// Line 3572, Address: 0x20f128, Func Offset: 0x4d8
	// Line 3574, Address: 0x20f12c, Func Offset: 0x4dc
	// Line 3577, Address: 0x20f138, Func Offset: 0x4e8
	// Line 3579, Address: 0x20f160, Func Offset: 0x510
	// Line 3581, Address: 0x20f168, Func Offset: 0x518
	// Line 3584, Address: 0x20f16c, Func Offset: 0x51c
	// Line 3587, Address: 0x20f174, Func Offset: 0x524
	// Line 3589, Address: 0x20f178, Func Offset: 0x528
	// Line 3590, Address: 0x20f180, Func Offset: 0x530
	// Line 3592, Address: 0x20f1a8, Func Offset: 0x558
	// Line 3594, Address: 0x20f1b0, Func Offset: 0x560
	// Line 3596, Address: 0x20f1b4, Func Offset: 0x564
	// Line 3598, Address: 0x20f1c0, Func Offset: 0x570
	// Line 3600, Address: 0x20f1c4, Func Offset: 0x574
	// Line 3604, Address: 0x20f1cc, Func Offset: 0x57c
	// Line 3605, Address: 0x20f1d0, Func Offset: 0x580
	// Line 3606, Address: 0x20f1f0, Func Offset: 0x5a0
	// Line 3611, Address: 0x20f1f8, Func Offset: 0x5a8
	// Line 3612, Address: 0x20f200, Func Offset: 0x5b0
	// Line 3614, Address: 0x20f228, Func Offset: 0x5d8
	// Line 3618, Address: 0x20f230, Func Offset: 0x5e0
	// Line 3621, Address: 0x20f238, Func Offset: 0x5e8
	// Line 3623, Address: 0x20f248, Func Offset: 0x5f8
	// Line 3626, Address: 0x20f250, Func Offset: 0x600
	// Line 3628, Address: 0x20f278, Func Offset: 0x628
	// Line 3634, Address: 0x20f280, Func Offset: 0x630
	// Line 3638, Address: 0x20f288, Func Offset: 0x638
	// Line 3639, Address: 0x20f290, Func Offset: 0x640
	// Line 3641, Address: 0x20f2b8, Func Offset: 0x668
	// Line 3645, Address: 0x20f2c0, Func Offset: 0x670
	// Line 3648, Address: 0x20f2c8, Func Offset: 0x678
	// Line 3650, Address: 0x20f2f0, Func Offset: 0x6a0
	// Line 3652, Address: 0x20f2f8, Func Offset: 0x6a8
	// Line 3654, Address: 0x20f320, Func Offset: 0x6d0
	// Line 3659, Address: 0x20f328, Func Offset: 0x6d8
	// Line 3663, Address: 0x20f330, Func Offset: 0x6e0
	// Line 3664, Address: 0x20f348, Func Offset: 0x6f8
	// Line 3669, Address: 0x20f350, Func Offset: 0x700
	// Line 3670, Address: 0x20f358, Func Offset: 0x708
	// Line 3672, Address: 0x20f380, Func Offset: 0x730
	// Line 3674, Address: 0x20f388, Func Offset: 0x738
	// Line 3676, Address: 0x20f38c, Func Offset: 0x73c
	// Line 3678, Address: 0x20f398, Func Offset: 0x748
	// Line 3680, Address: 0x20f39c, Func Offset: 0x74c
	// Line 3682, Address: 0x20f3a4, Func Offset: 0x754
	// Line 3684, Address: 0x20f3a8, Func Offset: 0x758
	// Line 3685, Address: 0x20f3b0, Func Offset: 0x760
	// Line 3687, Address: 0x20f3d8, Func Offset: 0x788
	// Line 3689, Address: 0x20f3e0, Func Offset: 0x790
	// Line 3691, Address: 0x20f3e4, Func Offset: 0x794
	// Line 3694, Address: 0x20f3f0, Func Offset: 0x7a0
	// Line 3696, Address: 0x20f418, Func Offset: 0x7c8
	// Line 3698, Address: 0x20f420, Func Offset: 0x7d0
	// Line 3701, Address: 0x20f424, Func Offset: 0x7d4
	// Line 3703, Address: 0x20f42c, Func Offset: 0x7dc
	// Line 3705, Address: 0x20f430, Func Offset: 0x7e0
	// Line 3706, Address: 0x20f438, Func Offset: 0x7e8
	// Line 3708, Address: 0x20f460, Func Offset: 0x810
	// Line 3710, Address: 0x20f468, Func Offset: 0x818
	// Line 3712, Address: 0x20f46c, Func Offset: 0x81c
	// Line 3714, Address: 0x20f478, Func Offset: 0x828
	// Line 3716, Address: 0x20f47c, Func Offset: 0x82c
	// Line 3718, Address: 0x20f484, Func Offset: 0x834
	// Line 3720, Address: 0x20f488, Func Offset: 0x838
	// Line 3721, Address: 0x20f490, Func Offset: 0x840
	// Line 3723, Address: 0x20f4b8, Func Offset: 0x868
	// Line 3725, Address: 0x20f4c0, Func Offset: 0x870
	// Line 3727, Address: 0x20f4c4, Func Offset: 0x874
	// Line 3730, Address: 0x20f4d0, Func Offset: 0x880
	// Line 3732, Address: 0x20f4f8, Func Offset: 0x8a8
	// Line 3734, Address: 0x20f500, Func Offset: 0x8b0
	// Line 3742, Address: 0x20f508, Func Offset: 0x8b8
	// Line 3746, Address: 0x20f518, Func Offset: 0x8c8
	// Line 3747, Address: 0x20f51c, Func Offset: 0x8cc
	// Line 3750, Address: 0x20f520, Func Offset: 0x8d0
	// Line 3751, Address: 0x20f530, Func Offset: 0x8e0
	// Line 3752, Address: 0x20f540, Func Offset: 0x8f0
	// Line 3754, Address: 0x20f548, Func Offset: 0x8f8
	// Line 3755, Address: 0x20f55c, Func Offset: 0x90c
	// Line 3756, Address: 0x20f560, Func Offset: 0x910
	// Line 3757, Address: 0x20f584, Func Offset: 0x934
	// Func End, Address: 0x20f5ac, Func Offset: 0x95c
}

// 
// Start address: 0x20f5b0
int EnemyHyenaDamageSound(sfObj* obj)
{
	EnemyHyenaWork* ew;
	int se;
	// Line 3763, Address: 0x20f5b0, Func Offset: 0
	// Line 3764, Address: 0x20f5bc, Func Offset: 0xc
	// Line 3770, Address: 0x20f5c4, Func Offset: 0x14
	// Line 3764, Address: 0x20f5c8, Func Offset: 0x18
	// Line 3770, Address: 0x20f5cc, Func Offset: 0x1c
	// Line 3772, Address: 0x20f5d8, Func Offset: 0x28
	// Line 3776, Address: 0x20f5e0, Func Offset: 0x30
	// Line 3781, Address: 0x20f608, Func Offset: 0x58
	// Line 3792, Address: 0x20f610, Func Offset: 0x60
	// Line 3804, Address: 0x20f618, Func Offset: 0x68
	// Line 3808, Address: 0x20f620, Func Offset: 0x70
	// Line 3810, Address: 0x20f62c, Func Offset: 0x7c
	// Line 3816, Address: 0x20f648, Func Offset: 0x98
	// Line 3817, Address: 0x20f64c, Func Offset: 0x9c
	// Func End, Address: 0x20f660, Func Offset: 0xb0
}

// 
// Start address: 0x20f660
void EnemyHyenaAnimeChangeHook(sfObj* obj)
{
	EnemyHyenaWork* ew;
	// Line 3823, Address: 0x20f660, Func Offset: 0
	// Line 3824, Address: 0x20f668, Func Offset: 0x8
	// Line 3825, Address: 0x20f670, Func Offset: 0x10
	// Line 3826, Address: 0x20f678, Func Offset: 0x18
	// Line 3827, Address: 0x20f67c, Func Offset: 0x1c
	// Func End, Address: 0x20f688, Func Offset: 0x28
}

// 
// Start address: 0x20f690
void EnemyHyenaAnimeUpdateHook(sfObj* obj)
{
	EnemyHyenaWork* ew;
	sgAnime* panime;
	// Line 3833, Address: 0x20f690, Func Offset: 0
	// Line 3834, Address: 0x20f6a0, Func Offset: 0x10
	// Line 3837, Address: 0x20f6ac, Func Offset: 0x1c
	// Line 3838, Address: 0x20f6b4, Func Offset: 0x24
	// Line 3839, Address: 0x20f6cc, Func Offset: 0x3c
	// Line 3842, Address: 0x20f6dc, Func Offset: 0x4c
	// Line 3844, Address: 0x20f6e8, Func Offset: 0x58
	// Line 3845, Address: 0x20f6f8, Func Offset: 0x68
	// Line 3847, Address: 0x20f6fc, Func Offset: 0x6c
	// Line 3851, Address: 0x20f700, Func Offset: 0x70
	// Line 3852, Address: 0x20f728, Func Offset: 0x98
	// Line 3855, Address: 0x20f760, Func Offset: 0xd0
	// Line 3858, Address: 0x20f76c, Func Offset: 0xdc
	// Line 3860, Address: 0x20f778, Func Offset: 0xe8
	// Line 3861, Address: 0x20f78c, Func Offset: 0xfc
	// Line 3863, Address: 0x20f7b0, Func Offset: 0x120
	// Line 3866, Address: 0x20f7bc, Func Offset: 0x12c
	// Line 3868, Address: 0x20f7c8, Func Offset: 0x138
	// Line 3869, Address: 0x20f7dc, Func Offset: 0x14c
	// Line 3871, Address: 0x20f800, Func Offset: 0x170
	// Line 3874, Address: 0x20f80c, Func Offset: 0x17c
	// Line 3876, Address: 0x20f818, Func Offset: 0x188
	// Line 3877, Address: 0x20f82c, Func Offset: 0x19c
	// Line 3879, Address: 0x20f850, Func Offset: 0x1c0
	// Line 3882, Address: 0x20f85c, Func Offset: 0x1cc
	// Line 3884, Address: 0x20f868, Func Offset: 0x1d8
	// Line 3885, Address: 0x20f878, Func Offset: 0x1e8
	// Line 3887, Address: 0x20f89c, Func Offset: 0x20c
	// Line 3888, Address: 0x20f8a0, Func Offset: 0x210
	// Line 3891, Address: 0x20f8ac, Func Offset: 0x21c
	// Line 3893, Address: 0x20f8b0, Func Offset: 0x220
	// Line 3894, Address: 0x20f8b4, Func Offset: 0x224
	// Line 3895, Address: 0x20f8c0, Func Offset: 0x230
	// Func End, Address: 0x20f8d4, Func Offset: 0x244
}

// 
// Start address: 0x20f8e0
float EnemyHyenaAnimeNTInterTime(sfObj* obj)
{
	EnemyHyenaWork* ew;
	// Line 3901, Address: 0x20f8e0, Func Offset: 0
	// Line 3902, Address: 0x20f8e8, Func Offset: 0x8
	// Line 3904, Address: 0x20f8f0, Func Offset: 0x10
	// Line 3903, Address: 0x20f8f4, Func Offset: 0x14
	// Line 3904, Address: 0x20f8f8, Func Offset: 0x18
	// Func End, Address: 0x20f900, Func Offset: 0x20
}

// 
// Start address: 0x20f900
void EnemyHyenaAnimeNTInterTimeReset(sfObj* obj)
{
	EnemyHyenaWork* ew;
	// Line 3913, Address: 0x20f900, Func Offset: 0
	// Line 3914, Address: 0x20f908, Func Offset: 0x8
	// Line 3915, Address: 0x20f910, Func Offset: 0x10
	// Line 3916, Address: 0x20f918, Func Offset: 0x18
	// Func End, Address: 0x20f924, Func Offset: 0x24
}

// 
// Start address: 0x20f930
void EnemyHyenaAnimeSetWithSpeed(sfObj* obj, EnemyHyenaAnime anime, float speed)
{
	EnemyHyenaWork* ew;
	// Line 3919, Address: 0x20f930, Func Offset: 0
	// Line 3920, Address: 0x20f94c, Func Offset: 0x1c
	// Line 3921, Address: 0x20f954, Func Offset: 0x24
	// Line 3922, Address: 0x20f964, Func Offset: 0x34
	// Line 3923, Address: 0x20f968, Func Offset: 0x38
	// Func End, Address: 0x20f980, Func Offset: 0x50
}

// 
// Start address: 0x20f980
void EnemyHyenaAnimeSet(sfObj* obj, EnemyHyenaAnime anime)
{
	EnemyHyenaWork* ew;
	// Line 3926, Address: 0x20f980, Func Offset: 0
	// Line 3927, Address: 0x20f99c, Func Offset: 0x1c
	// Line 3929, Address: 0x20f9a8, Func Offset: 0x28
	// Line 3934, Address: 0x20f9bc, Func Offset: 0x3c
	// Line 3933, Address: 0x20f9c0, Func Offset: 0x40
	// Line 3935, Address: 0x20f9c4, Func Offset: 0x44
	// Line 3937, Address: 0x20f9d0, Func Offset: 0x50
	// Line 3939, Address: 0x20f9f8, Func Offset: 0x78
	// Line 3940, Address: 0x20fa18, Func Offset: 0x98
	// Line 3941, Address: 0x20fa30, Func Offset: 0xb0
	// Line 3942, Address: 0x20fa38, Func Offset: 0xb8
	// Line 3943, Address: 0x20fa40, Func Offset: 0xc0
	// Line 3944, Address: 0x20fa54, Func Offset: 0xd4
	// Line 3945, Address: 0x20fa5c, Func Offset: 0xdc
	// Line 3946, Address: 0x20fa68, Func Offset: 0xe8
	// Line 3947, Address: 0x20fa7c, Func Offset: 0xfc
	// Line 3948, Address: 0x20fa84, Func Offset: 0x104
	// Line 3950, Address: 0x20fa90, Func Offset: 0x110
	// Line 3952, Address: 0x20fa9c, Func Offset: 0x11c
	// Line 3964, Address: 0x20faa4, Func Offset: 0x124
	// Line 3965, Address: 0x20faa8, Func Offset: 0x128
	// Line 3966, Address: 0x20fab4, Func Offset: 0x134
	// Line 3968, Address: 0x20fabc, Func Offset: 0x13c
	// Line 3969, Address: 0x20fac0, Func Offset: 0x140
	// Line 3970, Address: 0x20fad0, Func Offset: 0x150
	// Line 3971, Address: 0x20fae4, Func Offset: 0x164
	// Line 3973, Address: 0x20faf0, Func Offset: 0x170
	// Line 3975, Address: 0x20fafc, Func Offset: 0x17c
	// Line 3999, Address: 0x20fb04, Func Offset: 0x184
	// Line 4000, Address: 0x20fb08, Func Offset: 0x188
	// Line 4001, Address: 0x20fb14, Func Offset: 0x194
	// Line 4003, Address: 0x20fb1c, Func Offset: 0x19c
	// Line 4004, Address: 0x20fb20, Func Offset: 0x1a0
	// Line 4006, Address: 0x20fb2c, Func Offset: 0x1ac
	// Line 4008, Address: 0x20fb30, Func Offset: 0x1b0
	// Line 4011, Address: 0x20fb3c, Func Offset: 0x1bc
	// Line 4014, Address: 0x20fb58, Func Offset: 0x1d8
	// Line 4015, Address: 0x20fb5c, Func Offset: 0x1dc
	// Line 4016, Address: 0x20fb64, Func Offset: 0x1e4
	// Line 4017, Address: 0x20fb68, Func Offset: 0x1e8
	// Line 4019, Address: 0x20fb6c, Func Offset: 0x1ec
	// Line 4022, Address: 0x20fb70, Func Offset: 0x1f0
	// Line 4028, Address: 0x20fc04, Func Offset: 0x284
	// Line 4030, Address: 0x20fc08, Func Offset: 0x288
	// Line 4039, Address: 0x20fc10, Func Offset: 0x290
	// Line 4040, Address: 0x20fc14, Func Offset: 0x294
	// Line 4041, Address: 0x20fc1c, Func Offset: 0x29c
	// Line 4042, Address: 0x20fc20, Func Offset: 0x2a0
	// Line 4044, Address: 0x20fc24, Func Offset: 0x2a4
	// Line 4047, Address: 0x20fc28, Func Offset: 0x2a8
	// Line 4080, Address: 0x20fc4c, Func Offset: 0x2cc
	// Line 4082, Address: 0x20fc50, Func Offset: 0x2d0
	// Line 4083, Address: 0x20fc5c, Func Offset: 0x2dc
	// Line 4084, Address: 0x20fc64, Func Offset: 0x2e4
	// Line 4092, Address: 0x20fc68, Func Offset: 0x2e8
	// Line 4094, Address: 0x20fc74, Func Offset: 0x2f4
	// Line 4097, Address: 0x20fc78, Func Offset: 0x2f8
	// Line 4098, Address: 0x20fc94, Func Offset: 0x314
	// Line 4099, Address: 0x20fc98, Func Offset: 0x318
	// Line 4100, Address: 0x20fc9c, Func Offset: 0x31c
	// Line 4101, Address: 0x20fca4, Func Offset: 0x324
	// Line 4102, Address: 0x20fca8, Func Offset: 0x328
	// Line 4103, Address: 0x20fcac, Func Offset: 0x32c
	// Line 4104, Address: 0x20fcb4, Func Offset: 0x334
	// Line 4105, Address: 0x20fcb8, Func Offset: 0x338
	// Line 4107, Address: 0x20fcbc, Func Offset: 0x33c
	// Line 4110, Address: 0x20fcc0, Func Offset: 0x340
	// Line 4112, Address: 0x20fcdc, Func Offset: 0x35c
	// Line 4113, Address: 0x20fce0, Func Offset: 0x360
	// Line 4114, Address: 0x20fcec, Func Offset: 0x36c
	// Line 4115, Address: 0x20fcf4, Func Offset: 0x374
	// Line 4116, Address: 0x20fcf8, Func Offset: 0x378
	// Line 4118, Address: 0x20fd04, Func Offset: 0x384
	// Line 4121, Address: 0x20fd08, Func Offset: 0x388
	// Line 4122, Address: 0x20fd10, Func Offset: 0x390
	// Func End, Address: 0x20fd2c, Func Offset: 0x3ac
}

// 
// Start address: 0x20fd30
int EnemyHyenaAnimeIsEndForwardFrame(sfObj* obj, int frame)
{
	// Line 4130, Address: 0x20fd30, Func Offset: 0
	// Line 4131, Address: 0x20fd44, Func Offset: 0x14
	// Line 4132, Address: 0x20fd5c, Func Offset: 0x2c
	// Line 4131, Address: 0x20fd60, Func Offset: 0x30
	// Line 4132, Address: 0x20fd64, Func Offset: 0x34
	// Line 4131, Address: 0x20fd6c, Func Offset: 0x3c
	// Line 4132, Address: 0x20fd70, Func Offset: 0x40
	// Func End, Address: 0x20fd78, Func Offset: 0x48
}

// 
// Start address: 0x20fd80
int EnemyHyenaIsRun(sfObj* obj)
{
	EnemyHyenaWork* ew;
	// Line 4138, Address: 0x20fd80, Func Offset: 0
	// Line 4139, Address: 0x20fd88, Func Offset: 0x8
	// Line 4141, Address: 0x20fd90, Func Offset: 0x10
	// Line 4140, Address: 0x20fd94, Func Offset: 0x14
	// Line 4141, Address: 0x20fd98, Func Offset: 0x18
	// Func End, Address: 0x20fda0, Func Offset: 0x20
}

// 
// Start address: 0x20fda0
void EnemyHyenaNextStepIssue(sfObj* obj, int next)
{
	EnemyHyenaWork* ew;
	// Line 4147, Address: 0x20fda0, Func Offset: 0
	// Line 4148, Address: 0x20fdac, Func Offset: 0xc
	// Line 4149, Address: 0x20fdb4, Func Offset: 0x14
	// Line 4150, Address: 0x20fdb8, Func Offset: 0x18
	// Func End, Address: 0x20fdc8, Func Offset: 0x28
}

// 
// Start address: 0x20fdd0
void EnemyHyenaNextStepSet(sfObj* obj)
{
	EnemyHyenaWork* ew;
	// Line 4156, Address: 0x20fdd0, Func Offset: 0
	// Line 4157, Address: 0x20fde4, Func Offset: 0x14
	// Line 4159, Address: 0x20fdec, Func Offset: 0x1c
	// Line 4164, Address: 0x20fe00, Func Offset: 0x30
	// Line 4168, Address: 0x20fe20, Func Offset: 0x50
	// Line 4169, Address: 0x20fe24, Func Offset: 0x54
	// Line 4175, Address: 0x20fe28, Func Offset: 0x58
	// Line 4170, Address: 0x20fe2c, Func Offset: 0x5c
	// Line 4171, Address: 0x20fe30, Func Offset: 0x60
	// Line 4172, Address: 0x20fe34, Func Offset: 0x64
	// Line 4173, Address: 0x20fe38, Func Offset: 0x68
	// Line 4175, Address: 0x20fe40, Func Offset: 0x70
	// Line 4178, Address: 0x20fe5c, Func Offset: 0x8c
	// Line 4181, Address: 0x20fe60, Func Offset: 0x90
	// Line 4182, Address: 0x20fe6c, Func Offset: 0x9c
	// Line 4183, Address: 0x20fe78, Func Offset: 0xa8
	// Line 4185, Address: 0x20fe80, Func Offset: 0xb0
	// Func End, Address: 0x20fe98, Func Offset: 0xc8
}

// 
// Start address: 0x20fea0
void EnemyHyenaControlUpperLowerHalf(sfObj* obj)
{
	EnemyHyenaWork* ew;
	int bonenum[8];
	sgBone* bone[8];
	float bonequat[4][8];
	sgBone* handparent[2];
	sgBone* footparent[2];
	float quat[4];
	float epos[4];
	int i;
	float chest_rot[4];
	float waist_rot[4];
	float root_rot[4];
	// Line 4191, Address: 0x20fea0, Func Offset: 0
	// Line 4204, Address: 0x20fed0, Func Offset: 0x30
	// Line 4205, Address: 0x20fedc, Func Offset: 0x3c
	// Line 4249, Address: 0x20fee4, Func Offset: 0x44
	// Line 4205, Address: 0x20fee8, Func Offset: 0x48
	// Line 4249, Address: 0x20feec, Func Offset: 0x4c
	// Line 4205, Address: 0x20fef0, Func Offset: 0x50
	// Line 4249, Address: 0x20fefc, Func Offset: 0x5c
	// Line 4253, Address: 0x20ff04, Func Offset: 0x64
	// Line 4254, Address: 0x20ff18, Func Offset: 0x78
	// Line 4255, Address: 0x20ff28, Func Offset: 0x88
	// Line 4256, Address: 0x20ff34, Func Offset: 0x94
	// Line 4255, Address: 0x20ff38, Func Offset: 0x98
	// Line 4256, Address: 0x20ff3c, Func Offset: 0x9c
	// Line 4255, Address: 0x20ff40, Func Offset: 0xa0
	// Line 4256, Address: 0x20ff44, Func Offset: 0xa4
	// Line 4260, Address: 0x20ff50, Func Offset: 0xb0
	// Line 4261, Address: 0x20ff60, Func Offset: 0xc0
	// Line 4262, Address: 0x20ff70, Func Offset: 0xd0
	// Line 4263, Address: 0x20ff88, Func Offset: 0xe8
	// Line 4265, Address: 0x20ffa4, Func Offset: 0x104
	// Line 4266, Address: 0x20ffb4, Func Offset: 0x114
	// Line 4267, Address: 0x20ffc4, Func Offset: 0x124
	// Line 4268, Address: 0x20ffdc, Func Offset: 0x13c
	// Line 4272, Address: 0x20fff4, Func Offset: 0x154
	// Line 4273, Address: 0x20fffc, Func Offset: 0x15c
	// Line 4274, Address: 0x210014, Func Offset: 0x174
	// Line 4276, Address: 0x210038, Func Offset: 0x198
	// Line 4277, Address: 0x210040, Func Offset: 0x1a0
	// Line 4278, Address: 0x210054, Func Offset: 0x1b4
	// Line 4280, Address: 0x21006c, Func Offset: 0x1cc
	// Line 4281, Address: 0x210074, Func Offset: 0x1d4
	// Line 4285, Address: 0x21008c, Func Offset: 0x1ec
	// Line 4286, Address: 0x210098, Func Offset: 0x1f8
	// Line 4287, Address: 0x2100a8, Func Offset: 0x208
	// Line 4291, Address: 0x2100b8, Func Offset: 0x218
	// Line 4294, Address: 0x2100c4, Func Offset: 0x224
	// Line 4295, Address: 0x2100d0, Func Offset: 0x230
	// Line 4296, Address: 0x2100e0, Func Offset: 0x240
	// Line 4300, Address: 0x2100f0, Func Offset: 0x250
	// Line 4303, Address: 0x2100fc, Func Offset: 0x25c
	// Line 4304, Address: 0x210108, Func Offset: 0x268
	// Line 4305, Address: 0x210118, Func Offset: 0x278
	// Line 4309, Address: 0x210124, Func Offset: 0x284
	// Line 4310, Address: 0x210130, Func Offset: 0x290
	// Line 4311, Address: 0x21013c, Func Offset: 0x29c
	// Line 4312, Address: 0x210148, Func Offset: 0x2a8
	// Line 4313, Address: 0x210154, Func Offset: 0x2b4
	// Func End, Address: 0x210188, Func Offset: 0x2e8
}

// 
// Start address: 0x210190
void EnemyHyenaFootMove_sub(float* now, float* par, float base_rad, float range_rad, float dist)
{
	float sub[4];
	float rad;
	// Line 4319, Address: 0x210190, Func Offset: 0
	// Line 4325, Address: 0x210198, Func Offset: 0x8
	// Line 4319, Address: 0x21019c, Func Offset: 0xc
	// Line 4324, Address: 0x2101b8, Func Offset: 0x28
	// Line 4325, Address: 0x2101cc, Func Offset: 0x3c
	// Line 4326, Address: 0x2101dc, Func Offset: 0x4c
	// Line 4327, Address: 0x210208, Func Offset: 0x78
	// Line 4328, Address: 0x210230, Func Offset: 0xa0
	// Line 4331, Address: 0x210244, Func Offset: 0xb4
	// Line 4332, Address: 0x210258, Func Offset: 0xc8
	// Line 4333, Address: 0x210284, Func Offset: 0xf4
	// Line 4335, Address: 0x210298, Func Offset: 0x108
	// Line 4337, Address: 0x2102a0, Func Offset: 0x110
	// Line 4338, Address: 0x2102a4, Func Offset: 0x114
	// Line 4339, Address: 0x2102a8, Func Offset: 0x118
	// Line 4340, Address: 0x2102c0, Func Offset: 0x130
	// Line 4341, Address: 0x2102d4, Func Offset: 0x144
	// Line 4342, Address: 0x2102d8, Func Offset: 0x148
	// Func End, Address: 0x2102f8, Func Offset: 0x168
}

// 
// Start address: 0x210300
void EnemyHyenaFootMove(sfObj* obj)
{
	EnemyHyenaWork* ew;
	float epos[4];
	float base_rad;
	// Line 4345, Address: 0x210300, Func Offset: 0
	// Line 4346, Address: 0x210310, Func Offset: 0x10
	// Line 4352, Address: 0x21031c, Func Offset: 0x1c
	// Line 4355, Address: 0x210328, Func Offset: 0x28
	// Line 4356, Address: 0x21032c, Func Offset: 0x2c
	// Line 4357, Address: 0x21033c, Func Offset: 0x3c
	// Line 4358, Address: 0x210350, Func Offset: 0x50
	// Line 4364, Address: 0x21036c, Func Offset: 0x6c
	// Line 4366, Address: 0x210378, Func Offset: 0x78
	// Line 4373, Address: 0x21039c, Func Offset: 0x9c
	// Line 4375, Address: 0x2103a8, Func Offset: 0xa8
	// Line 4377, Address: 0x2103cc, Func Offset: 0xcc
	// Func End, Address: 0x2103e0, Func Offset: 0xe0
}

// 
// Start address: 0x2103e0
void EnemyHyenaNeckMove(sfObj* obj)
{
	EnemyHyenaWork* ew;
	float chest[4];
	float all_rad;
	float rad;
	float rad1;
	float rad2;
	float rad3;
	float rad4;
	float quat[4];
	float add_quat[4];
	float v[4];
	float neck_trg_rad;
	float trg[4];
	// Line 4383, Address: 0x2103e0, Func Offset: 0
	// Line 4407, Address: 0x2103fc, Func Offset: 0x1c
	// Line 4417, Address: 0x210408, Func Offset: 0x28
	// Line 4420, Address: 0x210420, Func Offset: 0x40
	// Line 4423, Address: 0x210424, Func Offset: 0x44
	// Line 4424, Address: 0x210484, Func Offset: 0xa4
	// Line 4425, Address: 0x210488, Func Offset: 0xa8
	// Line 4430, Address: 0x210498, Func Offset: 0xb8
	// Line 4431, Address: 0x2104ac, Func Offset: 0xcc
	// Line 4432, Address: 0x2104b8, Func Offset: 0xd8
	// Line 4433, Address: 0x2104c4, Func Offset: 0xe4
	// Line 4435, Address: 0x2104cc, Func Offset: 0xec
	// Line 4437, Address: 0x2104d0, Func Offset: 0xf0
	// Line 4445, Address: 0x2104e4, Func Offset: 0x104
	// Line 4448, Address: 0x2104e8, Func Offset: 0x108
	// Line 4449, Address: 0x2104f4, Func Offset: 0x114
	// Line 4450, Address: 0x2104fc, Func Offset: 0x11c
	// Line 4452, Address: 0x21050c, Func Offset: 0x12c
	// Line 4455, Address: 0x210520, Func Offset: 0x140
	// Line 4457, Address: 0x21052c, Func Offset: 0x14c
	// Line 4458, Address: 0x210548, Func Offset: 0x168
	// Line 4459, Address: 0x210554, Func Offset: 0x174
	// Line 4463, Address: 0x21055c, Func Offset: 0x17c
	// Line 4465, Address: 0x210568, Func Offset: 0x188
	// Line 4466, Address: 0x210580, Func Offset: 0x1a0
	// Line 4468, Address: 0x21058c, Func Offset: 0x1ac
	// Line 4472, Address: 0x210598, Func Offset: 0x1b8
	// Line 4474, Address: 0x2105a0, Func Offset: 0x1c0
	// Line 4476, Address: 0x2105bc, Func Offset: 0x1dc
	// Line 4478, Address: 0x2105c8, Func Offset: 0x1e8
	// Line 4480, Address: 0x2105dc, Func Offset: 0x1fc
	// Line 4482, Address: 0x2105e0, Func Offset: 0x200
	// Line 4496, Address: 0x2105e8, Func Offset: 0x208
	// Line 4493, Address: 0x2105ec, Func Offset: 0x20c
	// Line 4503, Address: 0x2105f0, Func Offset: 0x210
	// Line 4493, Address: 0x2105f4, Func Offset: 0x214
	// Line 4499, Address: 0x2105fc, Func Offset: 0x21c
	// Line 4496, Address: 0x210600, Func Offset: 0x220
	// Line 4499, Address: 0x210604, Func Offset: 0x224
	// Line 4493, Address: 0x210608, Func Offset: 0x228
	// Line 4503, Address: 0x21060c, Func Offset: 0x22c
	// Line 4496, Address: 0x210610, Func Offset: 0x230
	// Line 4499, Address: 0x210614, Func Offset: 0x234
	// Line 4487, Address: 0x210618, Func Offset: 0x238
	// Line 4503, Address: 0x21061c, Func Offset: 0x23c
	// Line 4504, Address: 0x210630, Func Offset: 0x250
	// Line 4506, Address: 0x21063c, Func Offset: 0x25c
	// Line 4507, Address: 0x210648, Func Offset: 0x268
	// Line 4508, Address: 0x210658, Func Offset: 0x278
	// Line 4511, Address: 0x210670, Func Offset: 0x290
	// Line 4512, Address: 0x210688, Func Offset: 0x2a8
	// Line 4514, Address: 0x210690, Func Offset: 0x2b0
	// Line 4515, Address: 0x21069c, Func Offset: 0x2bc
	// Line 4516, Address: 0x2106ac, Func Offset: 0x2cc
	// Line 4519, Address: 0x2106c4, Func Offset: 0x2e4
	// Line 4520, Address: 0x2106dc, Func Offset: 0x2fc
	// Line 4522, Address: 0x2106e4, Func Offset: 0x304
	// Line 4523, Address: 0x2106f0, Func Offset: 0x310
	// Line 4524, Address: 0x210700, Func Offset: 0x320
	// Line 4525, Address: 0x210718, Func Offset: 0x338
	// Func End, Address: 0x210738, Func Offset: 0x358
}

// 
// Start address: 0x210740
void EnemyHyenaSetCharaRot(sfObj* obj)
{
	EnemyHyenaWork* ew;
	float vec[4];
	float quat[4];
	// Line 4662, Address: 0x210740, Func Offset: 0
	// Line 4663, Address: 0x21074c, Func Offset: 0xc
	// Line 4666, Address: 0x210754, Func Offset: 0x14
	// Line 4667, Address: 0x210768, Func Offset: 0x28
	// Line 4668, Address: 0x21077c, Func Offset: 0x3c
	// Line 4669, Address: 0x210788, Func Offset: 0x48
	// Func End, Address: 0x210798, Func Offset: 0x58
}

// 
// Start address: 0x2107a0
_MotionLinkMoveParam* EnemyHyenaMotionLinkDataGet(sfObj* obj)
{
	_MotionLinkMoveParam* param;
	// Line 5193, Address: 0x2107a0, Func Offset: 0
	// Line 5194, Address: 0x2107ac, Func Offset: 0xc
	// Line 5197, Address: 0x2107b4, Func Offset: 0x14
	// Line 5200, Address: 0x210848, Func Offset: 0xa8
	// Line 5201, Address: 0x21084c, Func Offset: 0xac
	// Line 5202, Address: 0x210854, Func Offset: 0xb4
	// Line 5203, Address: 0x210858, Func Offset: 0xb8
	// Line 5204, Address: 0x21085c, Func Offset: 0xbc
	// Line 5205, Address: 0x210864, Func Offset: 0xc4
	// Line 5206, Address: 0x210868, Func Offset: 0xc8
	// Line 5207, Address: 0x21086c, Func Offset: 0xcc
	// Line 5208, Address: 0x210874, Func Offset: 0xd4
	// Line 5209, Address: 0x210878, Func Offset: 0xd8
	// Line 5210, Address: 0x21087c, Func Offset: 0xdc
	// Line 5211, Address: 0x210884, Func Offset: 0xe4
	// Line 5212, Address: 0x210888, Func Offset: 0xe8
	// Line 5213, Address: 0x21088c, Func Offset: 0xec
	// Line 5214, Address: 0x210894, Func Offset: 0xf4
	// Line 5215, Address: 0x210898, Func Offset: 0xf8
	// Line 5216, Address: 0x21089c, Func Offset: 0xfc
	// Line 5217, Address: 0x2108a4, Func Offset: 0x104
	// Line 5218, Address: 0x2108a8, Func Offset: 0x108
	// Line 5219, Address: 0x2108ac, Func Offset: 0x10c
	// Line 5220, Address: 0x2108b4, Func Offset: 0x114
	// Line 5221, Address: 0x2108b8, Func Offset: 0x118
	// Line 5222, Address: 0x2108bc, Func Offset: 0x11c
	// Line 5223, Address: 0x2108c4, Func Offset: 0x124
	// Line 5224, Address: 0x2108c8, Func Offset: 0x128
	// Line 5225, Address: 0x2108cc, Func Offset: 0x12c
	// Line 5226, Address: 0x2108d4, Func Offset: 0x134
	// Line 5227, Address: 0x2108d8, Func Offset: 0x138
	// Line 5228, Address: 0x2108dc, Func Offset: 0x13c
	// Line 5229, Address: 0x2108e4, Func Offset: 0x144
	// Line 5230, Address: 0x2108e8, Func Offset: 0x148
	// Line 5231, Address: 0x2108ec, Func Offset: 0x14c
	// Line 5232, Address: 0x2108f4, Func Offset: 0x154
	// Line 5233, Address: 0x2108f8, Func Offset: 0x158
	// Line 5237, Address: 0x210900, Func Offset: 0x160
	// Line 5238, Address: 0x210904, Func Offset: 0x164
	// Func End, Address: 0x210914, Func Offset: 0x174
}

// 
// Start address: 0x210920
_MotionLinkMoveParam* EnemyHyenaMotionLinkDamageDataGet(sfObj* obj)
{
	EnemyHyenaWork* ew;
	_MotionLinkMoveParam* param;
	// Line 5343, Address: 0x210920, Func Offset: 0
	// Line 5344, Address: 0x210930, Func Offset: 0x10
	// Line 5347, Address: 0x210938, Func Offset: 0x18
	// Line 5344, Address: 0x21093c, Func Offset: 0x1c
	// Line 5347, Address: 0x210940, Func Offset: 0x20
	// Line 5368, Address: 0x210a20, Func Offset: 0x100
	// Line 5372, Address: 0x210a28, Func Offset: 0x108
	// Line 5374, Address: 0x210a54, Func Offset: 0x134
	// Line 5375, Address: 0x210a58, Func Offset: 0x138
	// Line 5376, Address: 0x210a5c, Func Offset: 0x13c
	// Line 5381, Address: 0x210a64, Func Offset: 0x144
	// Line 5382, Address: 0x210a68, Func Offset: 0x148
	// Line 5383, Address: 0x210a6c, Func Offset: 0x14c
	// Line 5388, Address: 0x210a74, Func Offset: 0x154
	// Line 5389, Address: 0x210a78, Func Offset: 0x158
	// Line 5390, Address: 0x210a7c, Func Offset: 0x15c
	// Line 5392, Address: 0x210a84, Func Offset: 0x164
	// Line 5393, Address: 0x210a88, Func Offset: 0x168
	// Line 5394, Address: 0x210a8c, Func Offset: 0x16c
	// Line 5397, Address: 0x210a94, Func Offset: 0x174
	// Line 5398, Address: 0x210a98, Func Offset: 0x178
	// Line 5399, Address: 0x210a9c, Func Offset: 0x17c
	// Line 5403, Address: 0x210aa4, Func Offset: 0x184
	// Line 5404, Address: 0x210aa8, Func Offset: 0x188
	// Line 5405, Address: 0x210aac, Func Offset: 0x18c
	// Line 5407, Address: 0x210ab4, Func Offset: 0x194
	// Line 5408, Address: 0x210ab8, Func Offset: 0x198
	// Line 5409, Address: 0x210abc, Func Offset: 0x19c
	// Line 5412, Address: 0x210ac4, Func Offset: 0x1a4
	// Line 5413, Address: 0x210ac8, Func Offset: 0x1a8
	// Line 5414, Address: 0x210acc, Func Offset: 0x1ac
	// Line 5417, Address: 0x210ad4, Func Offset: 0x1b4
	// Line 5418, Address: 0x210ad8, Func Offset: 0x1b8
	// Line 5422, Address: 0x210ae0, Func Offset: 0x1c0
	// Line 5423, Address: 0x210ae8, Func Offset: 0x1c8
	// Func End, Address: 0x210afc, Func Offset: 0x1dc
}

// 
// Start address: 0x210b00
void EnemyHyenaMotionLinkMove(sfObj* obj)
{
	EnemyHyenaWork* ew;
	float move[4];
	float quat[4];
	_MotionLinkMoveParam* param;
	int span;
	float mot_move[4];
	float dmg_move[4];
	float dir[4];
	float epos[4];
	_anon4 line;
	_anon1* poly;
	_anon3 plane;
	float nv[4];
	float unit_y[4];
	float dot;
	// Line 5426, Address: 0x210b00, Func Offset: 0
	// Line 5427, Address: 0x210b14, Func Offset: 0x14
	// Line 5439, Address: 0x210b20, Func Offset: 0x20
	// Line 5440, Address: 0x210b28, Func Offset: 0x28
	// Line 5441, Address: 0x210b34, Func Offset: 0x34
	// Line 5442, Address: 0x210b3c, Func Offset: 0x3c
	// Line 5443, Address: 0x210b40, Func Offset: 0x40
	// Line 5447, Address: 0x210b50, Func Offset: 0x50
	// Line 5448, Address: 0x210b80, Func Offset: 0x80
	// Line 5449, Address: 0x210b84, Func Offset: 0x84
	// Line 5458, Address: 0x210b8c, Func Offset: 0x8c
	// Line 5449, Address: 0x210b90, Func Offset: 0x90
	// Line 5448, Address: 0x210b94, Func Offset: 0x94
	// Line 5449, Address: 0x210b9c, Func Offset: 0x9c
	// Line 5450, Address: 0x210bb4, Func Offset: 0xb4
	// Line 5453, Address: 0x210bb8, Func Offset: 0xb8
	// Line 5450, Address: 0x210bbc, Func Offset: 0xbc
	// Line 5451, Address: 0x210bc8, Func Offset: 0xc8
	// Line 5453, Address: 0x210bd4, Func Offset: 0xd4
	// Line 5454, Address: 0x210bd8, Func Offset: 0xd8
	// Line 5453, Address: 0x210bdc, Func Offset: 0xdc
	// Line 5454, Address: 0x210be4, Func Offset: 0xe4
	// Line 5458, Address: 0x210bec, Func Offset: 0xec
	// Line 5468, Address: 0x210bfc, Func Offset: 0xfc
	// Line 5469, Address: 0x210c04, Func Offset: 0x104
	// Line 5471, Address: 0x210c08, Func Offset: 0x108
	// Line 5469, Address: 0x210c0c, Func Offset: 0x10c
	// Line 5470, Address: 0x210c18, Func Offset: 0x118
	// Line 5469, Address: 0x210c1c, Func Offset: 0x11c
	// Line 5471, Address: 0x210c20, Func Offset: 0x120
	// Line 5469, Address: 0x210c24, Func Offset: 0x124
	// Line 5470, Address: 0x210c30, Func Offset: 0x130
	// Line 5471, Address: 0x210c48, Func Offset: 0x148
	// Line 5472, Address: 0x210c50, Func Offset: 0x150
	// Line 5473, Address: 0x210c58, Func Offset: 0x158
	// Line 5474, Address: 0x210c60, Func Offset: 0x160
	// Line 5476, Address: 0x210c68, Func Offset: 0x168
	// Line 5477, Address: 0x210c88, Func Offset: 0x188
	// Line 5480, Address: 0x210cac, Func Offset: 0x1ac
	// Line 5481, Address: 0x210cb0, Func Offset: 0x1b0
	// Line 5482, Address: 0x210cb8, Func Offset: 0x1b8
	// Line 5481, Address: 0x210cc0, Func Offset: 0x1c0
	// Line 5480, Address: 0x210cc4, Func Offset: 0x1c4
	// Line 5482, Address: 0x210ccc, Func Offset: 0x1cc
	// Line 5483, Address: 0x210ce8, Func Offset: 0x1e8
	// Line 5484, Address: 0x210cfc, Func Offset: 0x1fc
	// Line 5485, Address: 0x210d00, Func Offset: 0x200
	// Line 5484, Address: 0x210d04, Func Offset: 0x204
	// Line 5485, Address: 0x210d08, Func Offset: 0x208
	// Line 5484, Address: 0x210d0c, Func Offset: 0x20c
	// Line 5485, Address: 0x210d10, Func Offset: 0x210
	// Line 5488, Address: 0x210d14, Func Offset: 0x214
	// Line 5492, Address: 0x210d18, Func Offset: 0x218
	// Line 5493, Address: 0x210d24, Func Offset: 0x224
	// Line 5494, Address: 0x210d34, Func Offset: 0x234
	// Line 5495, Address: 0x210d3c, Func Offset: 0x23c
	// Line 5497, Address: 0x210d40, Func Offset: 0x240
	// Line 5501, Address: 0x210d48, Func Offset: 0x248
	// Line 5502, Address: 0x210d50, Func Offset: 0x250
	// Line 5503, Address: 0x210d5c, Func Offset: 0x25c
	// Line 5505, Address: 0x210d64, Func Offset: 0x264
	// Line 5506, Address: 0x210d98, Func Offset: 0x298
	// Line 5510, Address: 0x210da0, Func Offset: 0x2a0
	// Line 5511, Address: 0x210db8, Func Offset: 0x2b8
	// Line 5512, Address: 0x210dbc, Func Offset: 0x2bc
	// Line 5513, Address: 0x210dc8, Func Offset: 0x2c8
	// Line 5517, Address: 0x210dd0, Func Offset: 0x2d0
	// Line 5521, Address: 0x210de0, Func Offset: 0x2e0
	// Line 5523, Address: 0x210e10, Func Offset: 0x310
	// Line 5522, Address: 0x210e14, Func Offset: 0x314
	// Line 5523, Address: 0x210e18, Func Offset: 0x318
	// Line 5522, Address: 0x210e1c, Func Offset: 0x31c
	// Line 5523, Address: 0x210e20, Func Offset: 0x320
	// Line 5532, Address: 0x210e24, Func Offset: 0x324
	// Line 5524, Address: 0x210e28, Func Offset: 0x328
	// Line 5522, Address: 0x210e30, Func Offset: 0x330
	// Line 5523, Address: 0x210e38, Func Offset: 0x338
	// Line 5524, Address: 0x210e3c, Func Offset: 0x33c
	// Line 5523, Address: 0x210e40, Func Offset: 0x340
	// Line 5524, Address: 0x210e50, Func Offset: 0x350
	// Line 5525, Address: 0x210e58, Func Offset: 0x358
	// Line 5528, Address: 0x210e5c, Func Offset: 0x35c
	// Line 5524, Address: 0x210e60, Func Offset: 0x360
	// Line 5525, Address: 0x210e6c, Func Offset: 0x36c
	// Line 5529, Address: 0x210e74, Func Offset: 0x374
	// Line 5525, Address: 0x210e78, Func Offset: 0x378
	// Line 5528, Address: 0x210e80, Func Offset: 0x380
	// Line 5530, Address: 0x210e84, Func Offset: 0x384
	// Line 5528, Address: 0x210e88, Func Offset: 0x388
	// Line 5529, Address: 0x210e90, Func Offset: 0x390
	// Line 5530, Address: 0x210e9c, Func Offset: 0x39c
	// Line 5532, Address: 0x210ea8, Func Offset: 0x3a8
	// Line 5537, Address: 0x210eac, Func Offset: 0x3ac
	// Line 5533, Address: 0x210eb0, Func Offset: 0x3b0
	// Line 5537, Address: 0x210eb4, Func Offset: 0x3b4
	// Line 5533, Address: 0x210ec0, Func Offset: 0x3c0
	// Line 5534, Address: 0x210ec4, Func Offset: 0x3c4
	// Line 5537, Address: 0x210ec8, Func Offset: 0x3c8
	// Line 5538, Address: 0x210ed0, Func Offset: 0x3d0
	// Line 5539, Address: 0x210ee0, Func Offset: 0x3e0
	// Line 5542, Address: 0x210ee8, Func Offset: 0x3e8
	// Line 5546, Address: 0x210ef0, Func Offset: 0x3f0
	// Line 5547, Address: 0x210f10, Func Offset: 0x410
	// Line 5548, Address: 0x210f1c, Func Offset: 0x41c
	// Func End, Address: 0x210f38, Func Offset: 0x438
}

// 
// Start address: 0x210f40
void EnemyHyenaTargetReset(sfObj* obj)
{
	EnemyHyenaWork* ew;
	// Line 5592, Address: 0x210f40, Func Offset: 0
	// Line 5593, Address: 0x210f48, Func Offset: 0x8
	// Line 5594, Address: 0x210f50, Func Offset: 0x10
	// Line 5595, Address: 0x210f58, Func Offset: 0x18
	// Line 5596, Address: 0x210f5c, Func Offset: 0x1c
	// Line 5597, Address: 0x210f60, Func Offset: 0x20
	// Line 5598, Address: 0x210f64, Func Offset: 0x24
	// Func End, Address: 0x210f70, Func Offset: 0x30
}

// 
// Start address: 0x210f70
EnemyHyenaTarget EnemyHyenaTargetSearch_sub(sfObj* obj, float* pos)
{
	EnemyHyenaWork* ew;
	EnemySenseResult terri_res;
	float blood_dist;
	float terri_dist;
	_PLAYER_WORK* pw;
	float player_dist[2];
	float life_rate[2];
	EnemyHyenaTarget trg_pid[2];
	float player_find_dist_max;
	int player_find;
	int i;
	float epos[4];
	// Line 5604, Address: 0x210f70, Func Offset: 0
	// Line 5607, Address: 0x210f94, Func Offset: 0x24
	// Line 5624, Address: 0x210fa0, Func Offset: 0x30
	// Line 5614, Address: 0x210fa4, Func Offset: 0x34
	// Line 5624, Address: 0x210fa8, Func Offset: 0x38
	// Line 5614, Address: 0x210fac, Func Offset: 0x3c
	// Line 5624, Address: 0x210fb8, Func Offset: 0x48
	// Line 5632, Address: 0x210fc0, Func Offset: 0x50
	// Line 5636, Address: 0x210fd8, Func Offset: 0x68
	// Line 5633, Address: 0x210fdc, Func Offset: 0x6c
	// Line 5637, Address: 0x210ff4, Func Offset: 0x84
	// Line 5638, Address: 0x211004, Func Offset: 0x94
	// Line 5640, Address: 0x211014, Func Offset: 0xa4
	// Line 5641, Address: 0x211020, Func Offset: 0xb0
	// Line 5643, Address: 0x211024, Func Offset: 0xb4
	// Line 5641, Address: 0x21102c, Func Offset: 0xbc
	// Line 5643, Address: 0x211030, Func Offset: 0xc0
	// Line 5644, Address: 0x211044, Func Offset: 0xd4
	// Line 5646, Address: 0x211058, Func Offset: 0xe8
	// Line 5652, Address: 0x21105c, Func Offset: 0xec
	// Line 5656, Address: 0x211060, Func Offset: 0xf0
	// Line 5658, Address: 0x211068, Func Offset: 0xf8
	// Line 5659, Address: 0x211078, Func Offset: 0x108
	// Line 5660, Address: 0x21109c, Func Offset: 0x12c
	// Line 5662, Address: 0x2110b4, Func Offset: 0x144
	// Line 5666, Address: 0x2110b8, Func Offset: 0x148
	// Line 5668, Address: 0x2110c0, Func Offset: 0x150
	// Line 5669, Address: 0x2110d0, Func Offset: 0x160
	// Line 5670, Address: 0x2110f8, Func Offset: 0x188
	// Line 5686, Address: 0x211110, Func Offset: 0x1a0
	// Line 5689, Address: 0x211128, Func Offset: 0x1b8
	// Line 5686, Address: 0x21112c, Func Offset: 0x1bc
	// Line 5689, Address: 0x211130, Func Offset: 0x1c0
	// Line 5691, Address: 0x21117c, Func Offset: 0x20c
	// Line 5692, Address: 0x211180, Func Offset: 0x210
	// Line 5693, Address: 0x211188, Func Offset: 0x218
	// Line 5699, Address: 0x211190, Func Offset: 0x220
	// Line 5702, Address: 0x21119c, Func Offset: 0x22c
	// Line 5699, Address: 0x2111a0, Func Offset: 0x230
	// Line 5702, Address: 0x2111a4, Func Offset: 0x234
	// Line 5705, Address: 0x211208, Func Offset: 0x298
	// Line 5706, Address: 0x211228, Func Offset: 0x2b8
	// Line 5712, Address: 0x211238, Func Offset: 0x2c8
	// Line 5715, Address: 0x211250, Func Offset: 0x2e0
	// Line 5712, Address: 0x211254, Func Offset: 0x2e4
	// Line 5715, Address: 0x211258, Func Offset: 0x2e8
	// Line 5718, Address: 0x2112a8, Func Offset: 0x338
	// Line 5719, Address: 0x2112b4, Func Offset: 0x344
	// Line 5721, Address: 0x2112bc, Func Offset: 0x34c
	// Line 5724, Address: 0x2112c0, Func Offset: 0x350
	// Line 5725, Address: 0x2112c8, Func Offset: 0x358
	// Func End, Address: 0x2112ec, Func Offset: 0x37c
}

// 
// Start address: 0x2112f0
int EnemyHyenaTargetSearch(sfObj* obj, float* pos)
{
	EnemyHyenaWork* ew;
	EnemyHyenaTarget target;
	int set_blood;
	int set_player;
	int set_territory;
	// Line 5762, Address: 0x2112f0, Func Offset: 0
	// Line 5763, Address: 0x211318, Func Offset: 0x28
	// Line 5774, Address: 0x211324, Func Offset: 0x34
	// Line 5769, Address: 0x211328, Func Offset: 0x38
	// Line 5770, Address: 0x21132c, Func Offset: 0x3c
	// Line 5774, Address: 0x211330, Func Offset: 0x40
	// Line 5775, Address: 0x211340, Func Offset: 0x50
	// Line 5783, Address: 0x211348, Func Offset: 0x58
	// Line 5786, Address: 0x211360, Func Offset: 0x70
	// Line 5788, Address: 0x21136c, Func Offset: 0x7c
	// Line 5789, Address: 0x211378, Func Offset: 0x88
	// Line 5791, Address: 0x211388, Func Offset: 0x98
	// Line 5792, Address: 0x211390, Func Offset: 0xa0
	// Line 5793, Address: 0x21139c, Func Offset: 0xac
	// Line 5798, Address: 0x2113a0, Func Offset: 0xb0
	// Line 5799, Address: 0x2113a8, Func Offset: 0xb8
	// Line 5800, Address: 0x2113b0, Func Offset: 0xc0
	// Line 5801, Address: 0x2113b4, Func Offset: 0xc4
	// Line 5802, Address: 0x2113bc, Func Offset: 0xcc
	// Line 5804, Address: 0x2113c0, Func Offset: 0xd0
	// Line 5805, Address: 0x2113c8, Func Offset: 0xd8
	// Line 5806, Address: 0x2113d0, Func Offset: 0xe0
	// Line 5807, Address: 0x2113d4, Func Offset: 0xe4
	// Line 5808, Address: 0x2113e0, Func Offset: 0xf0
	// Line 5809, Address: 0x2113fc, Func Offset: 0x10c
	// Line 5810, Address: 0x211404, Func Offset: 0x114
	// Line 5812, Address: 0x211408, Func Offset: 0x118
	// Line 5813, Address: 0x211410, Func Offset: 0x120
	// Line 5814, Address: 0x211418, Func Offset: 0x128
	// Line 5815, Address: 0x21141c, Func Offset: 0x12c
	// Line 5816, Address: 0x211424, Func Offset: 0x134
	// Line 5818, Address: 0x211428, Func Offset: 0x138
	// Line 5819, Address: 0x211430, Func Offset: 0x140
	// Line 5820, Address: 0x211438, Func Offset: 0x148
	// Func End, Address: 0x211460, Func Offset: 0x170
}

// 
// Start address: 0x211460
int EnemyHyenaTargetSearchPlayerRun(sfObj* obj)
{
	EnemyHyenaWork* ew;
	int ret;
	float dist;
	// Line 5917, Address: 0x211460, Func Offset: 0
	// Line 5918, Address: 0x211474, Func Offset: 0x14
	// Line 5922, Address: 0x211480, Func Offset: 0x20
	// Line 5923, Address: 0x211490, Func Offset: 0x30
	// Line 5927, Address: 0x211498, Func Offset: 0x38
	// Line 5930, Address: 0x2114a8, Func Offset: 0x48
	// Line 5931, Address: 0x2114d8, Func Offset: 0x78
	// Line 5932, Address: 0x2114e0, Func Offset: 0x80
	// Line 5933, Address: 0x2114e4, Func Offset: 0x84
	// Line 5934, Address: 0x2114f0, Func Offset: 0x90
	// Line 5935, Address: 0x21150c, Func Offset: 0xac
	// Line 5937, Address: 0x211510, Func Offset: 0xb0
	// Line 5938, Address: 0x211518, Func Offset: 0xb8
	// Func End, Address: 0x211530, Func Offset: 0xd0
}

// 
// Start address: 0x211530
void EnemyHyenaTargetSetPlayer(sfObj* obj, EnemyHyenaTarget trgtype)
{
	EnemyHyenaWork* ew;
	// Line 5944, Address: 0x211530, Func Offset: 0
	// Line 5945, Address: 0x211544, Func Offset: 0x14
	// Line 5947, Address: 0x211550, Func Offset: 0x20
	// Line 5948, Address: 0x211558, Func Offset: 0x28
	// Line 5950, Address: 0x211560, Func Offset: 0x30
	// Line 5951, Address: 0x211568, Func Offset: 0x38
	// Line 5952, Address: 0x211574, Func Offset: 0x44
	// Line 5956, Address: 0x211578, Func Offset: 0x48
	// Line 5957, Address: 0x211580, Func Offset: 0x50
	// Func End, Address: 0x211594, Func Offset: 0x64
}

// 
// Start address: 0x2115a0
void EnemyHyenaTargetDummyPlayerInit(sfObj* obj)
{
	EnemyHyenaWork* ew;
	// Line 5963, Address: 0x2115a0, Func Offset: 0
	// Line 5964, Address: 0x2115ac, Func Offset: 0xc
	// Line 5967, Address: 0x2115b4, Func Offset: 0x14
	// Line 5968, Address: 0x2115dc, Func Offset: 0x3c
	// Line 5971, Address: 0x2115e0, Func Offset: 0x40
	// Line 5972, Address: 0x2115ec, Func Offset: 0x4c
	// Line 5975, Address: 0x21163c, Func Offset: 0x9c
	// Line 5976, Address: 0x21164c, Func Offset: 0xac
	// Line 5977, Address: 0x211650, Func Offset: 0xb0
	// Func End, Address: 0x211664, Func Offset: 0xc4
}

// 
// Start address: 0x211670
void EnemyHyenaTargetDummyMoveUpdata(sfObj* obj)
{
	EnemyHyenaWork* ew;
	float limit;
	float unit;
	// Line 5995, Address: 0x211670, Func Offset: 0
	// Line 6001, Address: 0x21167c, Func Offset: 0xc
	// Line 6005, Address: 0x211684, Func Offset: 0x14
	// Line 6007, Address: 0x211698, Func Offset: 0x28
	// Line 6006, Address: 0x21169c, Func Offset: 0x2c
	// Line 6007, Address: 0x2116a0, Func Offset: 0x30
	// Line 6008, Address: 0x2116a4, Func Offset: 0x34
	// Line 6010, Address: 0x2116b0, Func Offset: 0x40
	// Line 6011, Address: 0x2116b8, Func Offset: 0x48
	// Line 6015, Address: 0x2116c0, Func Offset: 0x50
	// Line 6016, Address: 0x2116cc, Func Offset: 0x5c
	// Line 6017, Address: 0x2116d4, Func Offset: 0x64
	// Line 6018, Address: 0x2116e0, Func Offset: 0x70
	// Line 6020, Address: 0x2116ec, Func Offset: 0x7c
	// Line 6022, Address: 0x2116f8, Func Offset: 0x88
	// Line 6023, Address: 0x2116fc, Func Offset: 0x8c
	// Line 6022, Address: 0x211700, Func Offset: 0x90
	// Line 6023, Address: 0x211704, Func Offset: 0x94
	// Line 6024, Address: 0x211710, Func Offset: 0xa0
	// Line 6027, Address: 0x211720, Func Offset: 0xb0
	// Func End, Address: 0x211730, Func Offset: 0xc0
}

// 
// Start address: 0x211730
int EnemyHyenaTargetCheckHuman(int target)
{
	// Line 6034, Address: 0x211730, Func Offset: 0
	// Line 6035, Address: 0x211744, Func Offset: 0x14
	// Func End, Address: 0x21174c, Func Offset: 0x1c
}

// 
// Start address: 0x211750
void EnemyHyenaTargetPosUpdate(sfObj* obj)
{
	EnemyHyenaWork* ew;
	float ppos[4];
	float epos[4];
	float pos[4];
	float mat[4][4];
	float rad;
	// Line 6041, Address: 0x211750, Func Offset: 0
	// Line 6042, Address: 0x211760, Func Offset: 0x10
	// Line 6047, Address: 0x211768, Func Offset: 0x18
	// Line 6050, Address: 0x211788, Func Offset: 0x38
	// Line 6051, Address: 0x211794, Func Offset: 0x44
	// Line 6052, Address: 0x2117a0, Func Offset: 0x50
	// Line 6066, Address: 0x2117bc, Func Offset: 0x6c
	// Line 6067, Address: 0x2117c8, Func Offset: 0x78
	// Line 6072, Address: 0x2117f0, Func Offset: 0xa0
	// Line 6073, Address: 0x2117f8, Func Offset: 0xa8
	// Line 6074, Address: 0x211804, Func Offset: 0xb4
	// Line 6075, Address: 0x211818, Func Offset: 0xc8
	// Line 6076, Address: 0x21184c, Func Offset: 0xfc
	// Line 6084, Address: 0x211864, Func Offset: 0x114
	// Line 6085, Address: 0x211868, Func Offset: 0x118
	// Func End, Address: 0x21187c, Func Offset: 0x12c
}

// 
// Start address: 0x211880
void EnemyHyenaTargetRadianSet(sfObj* obj)
{
	EnemyHyenaWork* ew;
	float epos[4];
	// Line 6091, Address: 0x211880, Func Offset: 0
	// Line 6092, Address: 0x211890, Func Offset: 0x10
	// Line 6094, Address: 0x21189c, Func Offset: 0x1c
	// Line 6095, Address: 0x2118a8, Func Offset: 0x28
	// Line 6096, Address: 0x2118b8, Func Offset: 0x38
	// Func End, Address: 0x2118cc, Func Offset: 0x4c
}

// 
// Start address: 0x2118d0
int EnemyHyenaTargetRadianHorming(sfObj* obj, float horming_rad_unit)
{
	EnemyHyenaWork* ew;
	float area;
	float dir0[4];
	float dir1[4];
	// Line 6104, Address: 0x2118d0, Func Offset: 0
	// Line 6105, Address: 0x2118e4, Func Offset: 0x14
	// Line 6110, Address: 0x2118ec, Func Offset: 0x1c
	// Line 6105, Address: 0x2118f0, Func Offset: 0x20
	// Line 6110, Address: 0x2118f4, Func Offset: 0x24
	// Line 6111, Address: 0x211904, Func Offset: 0x34
	// Line 6112, Address: 0x211918, Func Offset: 0x48
	// Line 6111, Address: 0x21191c, Func Offset: 0x4c
	// Line 6112, Address: 0x211920, Func Offset: 0x50
	// Line 6111, Address: 0x211924, Func Offset: 0x54
	// Line 6112, Address: 0x21192c, Func Offset: 0x5c
	// Line 6111, Address: 0x211930, Func Offset: 0x60
	// Line 6112, Address: 0x211934, Func Offset: 0x64
	// Line 6114, Address: 0x211938, Func Offset: 0x68
	// Line 6112, Address: 0x21193c, Func Offset: 0x6c
	// Line 6114, Address: 0x21195c, Func Offset: 0x8c
	// Line 6115, Address: 0x211968, Func Offset: 0x98
	// Line 6118, Address: 0x211970, Func Offset: 0xa0
	// Line 6121, Address: 0x21197c, Func Offset: 0xac
	// Line 6122, Address: 0x211984, Func Offset: 0xb4
	// Line 6124, Address: 0x211990, Func Offset: 0xc0
	// Line 6125, Address: 0x2119a4, Func Offset: 0xd4
	// Line 6124, Address: 0x2119a8, Func Offset: 0xd8
	// Line 6125, Address: 0x2119ac, Func Offset: 0xdc
	// Line 6124, Address: 0x2119b0, Func Offset: 0xe0
	// Line 6125, Address: 0x2119b4, Func Offset: 0xe4
	// Line 6124, Address: 0x2119bc, Func Offset: 0xec
	// Line 6126, Address: 0x2119c0, Func Offset: 0xf0
	// Line 6125, Address: 0x2119c4, Func Offset: 0xf4
	// Line 6126, Address: 0x2119e4, Func Offset: 0x114
	// Line 6127, Address: 0x2119f0, Func Offset: 0x120
	// Line 6128, Address: 0x2119f4, Func Offset: 0x124
	// Line 6129, Address: 0x211a00, Func Offset: 0x130
	// Line 6132, Address: 0x211a08, Func Offset: 0x138
	// Line 6135, Address: 0x211a14, Func Offset: 0x144
	// Line 6136, Address: 0x211a1c, Func Offset: 0x14c
	// Line 6138, Address: 0x211a28, Func Offset: 0x158
	// Line 6139, Address: 0x211a3c, Func Offset: 0x16c
	// Line 6138, Address: 0x211a40, Func Offset: 0x170
	// Line 6139, Address: 0x211a44, Func Offset: 0x174
	// Line 6138, Address: 0x211a48, Func Offset: 0x178
	// Line 6139, Address: 0x211a4c, Func Offset: 0x17c
	// Line 6138, Address: 0x211a54, Func Offset: 0x184
	// Line 6140, Address: 0x211a58, Func Offset: 0x188
	// Line 6139, Address: 0x211a5c, Func Offset: 0x18c
	// Line 6140, Address: 0x211a7c, Func Offset: 0x1ac
	// Line 6141, Address: 0x211a88, Func Offset: 0x1b8
	// Line 6142, Address: 0x211a8c, Func Offset: 0x1bc
	// Line 6143, Address: 0x211a98, Func Offset: 0x1c8
	// Line 6146, Address: 0x211aa0, Func Offset: 0x1d0
	// Line 6147, Address: 0x211aa8, Func Offset: 0x1d8
	// Func End, Address: 0x211ac0, Func Offset: 0x1f0
}

// 
// Start address: 0x211ac0
int EnemyHyenaDetectPlayerFront(sfObj* obj, float rad_range)
{
	EnemyHyenaWork* ew;
	float ppos[4];
	float sub[4];
	float rad;
	float epos[4];
	// Line 6154, Address: 0x211ac0, Func Offset: 0
	// Line 6155, Address: 0x211ad8, Func Offset: 0x18
	// Line 6160, Address: 0x211ae4, Func Offset: 0x24
	// Line 6162, Address: 0x211af0, Func Offset: 0x30
	// Line 6163, Address: 0x211b04, Func Offset: 0x44
	// Line 6164, Address: 0x211b20, Func Offset: 0x60
	// Line 6167, Address: 0x211b4c, Func Offset: 0x8c
	// Line 6169, Address: 0x211b94, Func Offset: 0xd4
	// Line 6170, Address: 0x211bac, Func Offset: 0xec
	// Line 6171, Address: 0x211bb4, Func Offset: 0xf4
	// Line 6173, Address: 0x211bb8, Func Offset: 0xf8
	// Line 6174, Address: 0x211bc0, Func Offset: 0x100
	// Func End, Address: 0x211bd8, Func Offset: 0x118
}

// 
// Start address: 0x211be0
float EnemyHyenaDetectSide(sfObj* obj, float* pos)
{
	EnemyHyenaWork* ew;
	float epos[4];
	float dir0[4];
	float dir1[4];
	float rad;
	// Line 6183, Address: 0x211be0, Func Offset: 0
	// Line 6184, Address: 0x211bfc, Func Offset: 0x1c
	// Line 6189, Address: 0x211c08, Func Offset: 0x28
	// Line 6190, Address: 0x211c14, Func Offset: 0x34
	// Line 6191, Address: 0x211c20, Func Offset: 0x40
	// Line 6192, Address: 0x211c38, Func Offset: 0x58
	// Line 6194, Address: 0x211c4c, Func Offset: 0x6c
	// Line 6192, Address: 0x211c50, Func Offset: 0x70
	// Line 6194, Address: 0x211c54, Func Offset: 0x74
	// Line 6195, Address: 0x211c58, Func Offset: 0x78
	// Line 6192, Address: 0x211c5c, Func Offset: 0x7c
	// Line 6195, Address: 0x211c60, Func Offset: 0x80
	// Line 6194, Address: 0x211c64, Func Offset: 0x84
	// Line 6195, Address: 0x211c68, Func Offset: 0x88
	// Line 6192, Address: 0x211c6c, Func Offset: 0x8c
	// Line 6195, Address: 0x211c70, Func Offset: 0x90
	// Line 6194, Address: 0x211c74, Func Offset: 0x94
	// Line 6195, Address: 0x211c78, Func Offset: 0x98
	// Line 6194, Address: 0x211c7c, Func Offset: 0x9c
	// Line 6195, Address: 0x211c9c, Func Offset: 0xbc
	// Func End, Address: 0x211ca4, Func Offset: 0xc4
}

// 
// Start address: 0x211cb0
int EnemyHyenaDetectPlayerBackside(sfObj* obj)
{
	EnemyHyenaWork* ew;
	float dir0[4];
	float dir1[4];
	float dot;
	int ret;
	// Line 6201, Address: 0x211cb0, Func Offset: 0
	// Line 6202, Address: 0x211cb8, Func Offset: 0x8
	// Line 6207, Address: 0x211cc0, Func Offset: 0x10
	// Line 6202, Address: 0x211cc4, Func Offset: 0x14
	// Line 6207, Address: 0x211cc8, Func Offset: 0x18
	// Line 6208, Address: 0x211cd8, Func Offset: 0x28
	// Line 6209, Address: 0x211d08, Func Offset: 0x58
	// Line 6210, Address: 0x211d2c, Func Offset: 0x7c
	// Line 6212, Address: 0x211d4c, Func Offset: 0x9c
	// Func End, Address: 0x211d5c, Func Offset: 0xac
}

// 
// Start address: 0x211d60
void EnemyHyenaOldPlayerStatSet(sfObj* obj)
{
	EnemyHyenaWork* ew;
	// Line 6218, Address: 0x211d60, Func Offset: 0
	// Line 6219, Address: 0x211d68, Func Offset: 0x8
	// Line 6220, Address: 0x211d70, Func Offset: 0x10
	// Line 6221, Address: 0x211d84, Func Offset: 0x24
	// Line 6222, Address: 0x211dac, Func Offset: 0x4c
	// Line 6224, Address: 0x211db8, Func Offset: 0x58
	// Line 6225, Address: 0x211dbc, Func Offset: 0x5c
	// Line 6226, Address: 0x211dc0, Func Offset: 0x60
	// Func End, Address: 0x211dcc, Func Offset: 0x6c
}

// 
// Start address: 0x211dd0
PlayerExtStatus EnemyHyenaOldPlayerStat(sfObj* obj)
{
	EnemyHyenaWork* ew;
	// Line 6232, Address: 0x211dd0, Func Offset: 0
	// Line 6233, Address: 0x211dd8, Func Offset: 0x8
	// Line 6235, Address: 0x211de0, Func Offset: 0x10
	// Line 6234, Address: 0x211de4, Func Offset: 0x14
	// Line 6235, Address: 0x211de8, Func Offset: 0x18
	// Func End, Address: 0x211df0, Func Offset: 0x20
}

// 
// Start address: 0x211df0
void EnemyHyenaAngryTimerset(sfObj* obj, int timer)
{
	EnemyHyenaWork* ew;
	// Line 6264, Address: 0x211df0, Func Offset: 0
	// Line 6265, Address: 0x211dfc, Func Offset: 0xc
	// Line 6266, Address: 0x211e04, Func Offset: 0x14
	// Line 6271, Address: 0x211e08, Func Offset: 0x18
	// Func End, Address: 0x211e18, Func Offset: 0x28
}

// 
// Start address: 0x211e20
void EnemyHyenaAngryUpdate(sfObj* obj)
{
	EnemyHyenaWork* ew;
	// Line 6277, Address: 0x211e20, Func Offset: 0
	// Line 6278, Address: 0x211e28, Func Offset: 0x8
	// Line 6279, Address: 0x211e30, Func Offset: 0x10
	// Line 6280, Address: 0x211e3c, Func Offset: 0x1c
	// Line 6281, Address: 0x211e44, Func Offset: 0x24
	// Line 6282, Address: 0x211e48, Func Offset: 0x28
	// Func End, Address: 0x211e54, Func Offset: 0x34
}

// 
// Start address: 0x211e60
int EnemyHyenaAngryCheck(sfObj* obj)
{
	EnemyHyenaWork* ew;
	// Line 6288, Address: 0x211e60, Func Offset: 0
	// Line 6289, Address: 0x211e68, Func Offset: 0x8
	// Line 6290, Address: 0x211e70, Func Offset: 0x10
	// Line 6291, Address: 0x211e74, Func Offset: 0x14
	// Line 6290, Address: 0x211e78, Func Offset: 0x18
	// Line 6291, Address: 0x211e7c, Func Offset: 0x1c
	// Func End, Address: 0x211e84, Func Offset: 0x24
}

// 
// Start address: 0x211e90
void EnemyHyenaAngryCollidePlayer(sfObj* obj)
{
	EnemyHyenaWork* ew;
	// Line 6297, Address: 0x211e90, Func Offset: 0
	// Line 6298, Address: 0x211ea0, Func Offset: 0x10
	// Line 6301, Address: 0x211ea8, Func Offset: 0x18
	// Line 6305, Address: 0x211ebc, Func Offset: 0x2c
	// Line 6312, Address: 0x211f14, Func Offset: 0x84
	// Line 6313, Address: 0x211f18, Func Offset: 0x88
	// Line 6321, Address: 0x211f28, Func Offset: 0x98
	// Line 6322, Address: 0x211f2c, Func Offset: 0x9c
	// Line 6323, Address: 0x211f38, Func Offset: 0xa8
	// Line 6327, Address: 0x211f54, Func Offset: 0xc4
	// Line 6331, Address: 0x211f60, Func Offset: 0xd0
	// Func End, Address: 0x211f74, Func Offset: 0xe4
}

// 
// Start address: 0x211f80
void EnemyHyenaIgnoneBloodpoolTimerset(sfObj* obj, int timer)
{
	EnemyHyenaWork* ew;
	// Line 6345, Address: 0x211f80, Func Offset: 0
	// Line 6346, Address: 0x211f8c, Func Offset: 0xc
	// Line 6347, Address: 0x211f94, Func Offset: 0x14
	// Line 6348, Address: 0x211f98, Func Offset: 0x18
	// Func End, Address: 0x211fa8, Func Offset: 0x28
}

// 
// Start address: 0x211fb0
void EnemyHyenaIgnoneBloodpoolUpdate(sfObj* obj)
{
	EnemyHyenaWork* ew;
	// Line 6354, Address: 0x211fb0, Func Offset: 0
	// Line 6355, Address: 0x211fb8, Func Offset: 0x8
	// Line 6356, Address: 0x211fc0, Func Offset: 0x10
	// Line 6357, Address: 0x211fcc, Func Offset: 0x1c
	// Line 6358, Address: 0x211fd4, Func Offset: 0x24
	// Line 6359, Address: 0x211fd8, Func Offset: 0x28
	// Func End, Address: 0x211fe4, Func Offset: 0x34
}

// 
// Start address: 0x211ff0
int EnemyHyenaIgnoneBloodpoolCheck(sfObj* obj)
{
	EnemyHyenaWork* ew;
	// Line 6365, Address: 0x211ff0, Func Offset: 0
	// Line 6366, Address: 0x211ff8, Func Offset: 0x8
	// Line 6367, Address: 0x212000, Func Offset: 0x10
	// Line 6368, Address: 0x212004, Func Offset: 0x14
	// Line 6367, Address: 0x212008, Func Offset: 0x18
	// Line 6368, Address: 0x21200c, Func Offset: 0x1c
	// Func End, Address: 0x212014, Func Offset: 0x24
}

// 
// Start address: 0x212020
void EnemyHyenaIgnoneTerritoryTimerset(sfObj* obj, int timer)
{
	EnemyHyenaWork* ew;
	// Line 6374, Address: 0x212020, Func Offset: 0
	// Line 6375, Address: 0x21202c, Func Offset: 0xc
	// Line 6376, Address: 0x212034, Func Offset: 0x14
	// Line 6377, Address: 0x212038, Func Offset: 0x18
	// Func End, Address: 0x212048, Func Offset: 0x28
}

// 
// Start address: 0x212050
void EnemyHyenaIgnoneTerritoryUpdate(sfObj* obj)
{
	EnemyHyenaWork* ew;
	// Line 6383, Address: 0x212050, Func Offset: 0
	// Line 6384, Address: 0x212058, Func Offset: 0x8
	// Line 6385, Address: 0x212060, Func Offset: 0x10
	// Line 6386, Address: 0x21206c, Func Offset: 0x1c
	// Line 6387, Address: 0x212074, Func Offset: 0x24
	// Line 6388, Address: 0x212078, Func Offset: 0x28
	// Func End, Address: 0x212084, Func Offset: 0x34
}

// 
// Start address: 0x212090
int EnemyHyenaIgnoneTerritoryCheck(sfObj* obj)
{
	EnemyHyenaWork* ew;
	// Line 6394, Address: 0x212090, Func Offset: 0
	// Line 6395, Address: 0x212098, Func Offset: 0x8
	// Line 6396, Address: 0x2120a0, Func Offset: 0x10
	// Line 6397, Address: 0x2120a4, Func Offset: 0x14
	// Line 6396, Address: 0x2120a8, Func Offset: 0x18
	// Line 6397, Address: 0x2120ac, Func Offset: 0x1c
	// Func End, Address: 0x2120b4, Func Offset: 0x24
}

// 
// Start address: 0x2120c0
void EnemyHyenaIgnonePlayerTimerset(sfObj* obj, int timer)
{
	EnemyHyenaWork* ew;
	// Line 6403, Address: 0x2120c0, Func Offset: 0
	// Line 6404, Address: 0x2120cc, Func Offset: 0xc
	// Line 6405, Address: 0x2120d4, Func Offset: 0x14
	// Line 6406, Address: 0x2120d8, Func Offset: 0x18
	// Func End, Address: 0x2120e8, Func Offset: 0x28
}

// 
// Start address: 0x2120f0
void EnemyHyenaIgnonePlayerUpdate(sfObj* obj)
{
	EnemyHyenaWork* ew;
	// Line 6412, Address: 0x2120f0, Func Offset: 0
	// Line 6413, Address: 0x2120f8, Func Offset: 0x8
	// Line 6414, Address: 0x212100, Func Offset: 0x10
	// Line 6415, Address: 0x21210c, Func Offset: 0x1c
	// Line 6416, Address: 0x212114, Func Offset: 0x24
	// Line 6417, Address: 0x212118, Func Offset: 0x28
	// Func End, Address: 0x212124, Func Offset: 0x34
}

// 
// Start address: 0x212130
int EnemyHyenaIgnonePlayerCheck(sfObj* obj)
{
	EnemyHyenaWork* ew;
	// Line 6423, Address: 0x212130, Func Offset: 0
	// Line 6424, Address: 0x212138, Func Offset: 0x8
	// Line 6425, Address: 0x212140, Func Offset: 0x10
	// Line 6426, Address: 0x212144, Func Offset: 0x14
	// Line 6425, Address: 0x212148, Func Offset: 0x18
	// Line 6426, Address: 0x21214c, Func Offset: 0x1c
	// Func End, Address: 0x212154, Func Offset: 0x24
}

// 
// Start address: 0x212160
void EnemyHyenaInvalidWalkAttackTimerset(sfObj* obj, int timer)
{
	EnemyHyenaWork* ew;
	// Line 6432, Address: 0x212160, Func Offset: 0
	// Line 6433, Address: 0x21216c, Func Offset: 0xc
	// Line 6434, Address: 0x212174, Func Offset: 0x14
	// Line 6435, Address: 0x212178, Func Offset: 0x18
	// Func End, Address: 0x212188, Func Offset: 0x28
}

// 
// Start address: 0x212190
void EnemyHyenaInvalidWalkAttackUpdate(sfObj* obj)
{
	EnemyHyenaWork* ew;
	// Line 6441, Address: 0x212190, Func Offset: 0
	// Line 6442, Address: 0x212198, Func Offset: 0x8
	// Line 6443, Address: 0x2121a0, Func Offset: 0x10
	// Line 6444, Address: 0x2121ac, Func Offset: 0x1c
	// Line 6445, Address: 0x2121b4, Func Offset: 0x24
	// Line 6446, Address: 0x2121b8, Func Offset: 0x28
	// Func End, Address: 0x2121c4, Func Offset: 0x34
}

// 
// Start address: 0x2121d0
int EnemyHyenaInvalidWalkAttackCheck(sfObj* obj)
{
	EnemyHyenaWork* ew;
	// Line 6452, Address: 0x2121d0, Func Offset: 0
	// Line 6453, Address: 0x2121d8, Func Offset: 0x8
	// Line 6454, Address: 0x2121e0, Func Offset: 0x10
	// Line 6455, Address: 0x2121e4, Func Offset: 0x14
	// Line 6454, Address: 0x2121e8, Func Offset: 0x18
	// Line 6455, Address: 0x2121ec, Func Offset: 0x1c
	// Func End, Address: 0x2121f4, Func Offset: 0x24
}

// 
// Start address: 0x212200
void EnemyHyenaSetInvalidWalkAttack(sfObj* obj)
{
	// Line 6461, Address: 0x212200, Func Offset: 0
	// Line 6462, Address: 0x212204, Func Offset: 0x4
	// Line 6461, Address: 0x212208, Func Offset: 0x8
	// Line 6462, Address: 0x21220c, Func Offset: 0xc
	// Line 6461, Address: 0x212210, Func Offset: 0x10
	// Line 6462, Address: 0x212218, Func Offset: 0x18
	// Line 6465, Address: 0x212248, Func Offset: 0x48
	// Line 6466, Address: 0x212264, Func Offset: 0x64
	// Line 6467, Address: 0x21226c, Func Offset: 0x6c
	// Line 6468, Address: 0x212270, Func Offset: 0x70
	// Line 6473, Address: 0x212288, Func Offset: 0x88
	// Func End, Address: 0x212298, Func Offset: 0x98
}

// 
// Start address: 0x2122a0
void EnemyHyenaLoopSoundCall(sfObj* obj, int se)
{
	EnemyHyenaWork* ew;
	// Line 6479, Address: 0x2122a0, Func Offset: 0
	// Line 6480, Address: 0x2122b8, Func Offset: 0x18
	// Line 6483, Address: 0x2122c4, Func Offset: 0x24
	// Line 6486, Address: 0x2122cc, Func Offset: 0x2c
	// Line 6487, Address: 0x2122e0, Func Offset: 0x40
	// Func End, Address: 0x2122f8, Func Offset: 0x58
}

// 
// Start address: 0x212300
void EnemyHyenaLoopSoundStop(sfObj* obj)
{
	EnemyHyenaWork* ew;
	// Line 6493, Address: 0x212300, Func Offset: 0
	// Line 6494, Address: 0x212308, Func Offset: 0x8
	// Line 6495, Address: 0x212314, Func Offset: 0x14
	// Line 6496, Address: 0x21231c, Func Offset: 0x1c
	// Line 6497, Address: 0x212324, Func Offset: 0x24
	// Line 6498, Address: 0x212328, Func Offset: 0x28
	// Line 6499, Address: 0x21232c, Func Offset: 0x2c
	// Line 6500, Address: 0x212330, Func Offset: 0x30
	// Func End, Address: 0x212340, Func Offset: 0x40
}

// 
// Start address: 0x212340
void EnemyHyenaWalkAttackGroupInvalidUpdate(sfObj* obj)
{
	sfObj* search_obj;
	// Line 6507, Address: 0x212340, Func Offset: 0
	// Line 6510, Address: 0x212344, Func Offset: 0x4
	// Line 6507, Address: 0x212348, Func Offset: 0x8
	// Line 6510, Address: 0x212354, Func Offset: 0x14
	// Line 6511, Address: 0x21235c, Func Offset: 0x1c
	// Line 6515, Address: 0x212364, Func Offset: 0x24
	// Line 6516, Address: 0x212370, Func Offset: 0x30
	// Line 6518, Address: 0x21237c, Func Offset: 0x3c
	// Line 6519, Address: 0x212380, Func Offset: 0x40
	// Func End, Address: 0x212390, Func Offset: 0x50
}

// 
// Start address: 0x212390
int EnemyHyenaWalkAttackGroupInvalidCheck()
{
	// Line 6526, Address: 0x212390, Func Offset: 0
	// Line 6527, Address: 0x212398, Func Offset: 0x8
	// Func End, Address: 0x2123a0, Func Offset: 0x10
}

// 
// Start address: 0x2123a0
int EnemyHyenaBackStepGameLevel()
{
	int ret;
	// Line 6536, Address: 0x2123a0, Func Offset: 0
	// Line 6540, Address: 0x2123d8, Func Offset: 0x38
	// Line 6544, Address: 0x2123e0, Func Offset: 0x40
	// Line 6546, Address: 0x2123e4, Func Offset: 0x44
	// Line 6549, Address: 0x2123e8, Func Offset: 0x48
	// Func End, Address: 0x2123f0, Func Offset: 0x50
}

// 
// Start address: 0x2123f0
int EnemyHyenaRunCornerCheck(sfObj* obj, int time)
{
	EnemyHyenaWork* ew;
	float epos[4];
	float old_epos[4];
	int ret;
	// Line 6556, Address: 0x2123f0, Func Offset: 0
	// Line 6557, Address: 0x212408, Func Offset: 0x18
	// Line 6562, Address: 0x212414, Func Offset: 0x24
	// Line 6563, Address: 0x212424, Func Offset: 0x34
	// Line 6564, Address: 0x21242c, Func Offset: 0x3c
	// Line 6567, Address: 0x212430, Func Offset: 0x40
	// Line 6568, Address: 0x212438, Func Offset: 0x48
	// Line 6569, Address: 0x212440, Func Offset: 0x50
	// Line 6571, Address: 0x212444, Func Offset: 0x54
	// Line 6577, Address: 0x21244c, Func Offset: 0x5c
	// Line 6572, Address: 0x212450, Func Offset: 0x60
	// Line 6576, Address: 0x212454, Func Offset: 0x64
	// Line 6572, Address: 0x212458, Func Offset: 0x68
	// Line 6573, Address: 0x21245c, Func Offset: 0x6c
	// Line 6574, Address: 0x212460, Func Offset: 0x70
	// Line 6577, Address: 0x212464, Func Offset: 0x74
	// Line 6578, Address: 0x212484, Func Offset: 0x94
	// Line 6579, Address: 0x212490, Func Offset: 0xa0
	// Line 6582, Address: 0x2124a0, Func Offset: 0xb0
	// Line 6584, Address: 0x2124a8, Func Offset: 0xb8
	// Line 6585, Address: 0x2124ac, Func Offset: 0xbc
	// Line 6587, Address: 0x2124b0, Func Offset: 0xc0
	// Line 6588, Address: 0x2124b8, Func Offset: 0xc8
	// Func End, Address: 0x2124d0, Func Offset: 0xe0
}

