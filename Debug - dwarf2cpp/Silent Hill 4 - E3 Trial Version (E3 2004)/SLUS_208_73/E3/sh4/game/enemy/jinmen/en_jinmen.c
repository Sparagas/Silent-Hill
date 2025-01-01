typedef struct sfObj;
typedef struct _anon0;
typedef struct EnemySenseData;
typedef enum GameItem : unsigned char;
typedef struct EnemySearchData;
typedef struct EnemyBattleDamage;
typedef struct EnemySearchPoint;
typedef enum EnemyBattleDamageAnimeNumber : unsigned char;
typedef struct sgBone;
typedef struct EnemyClHitResult;
typedef enum EnemySoundType : unsigned char;
typedef struct EnemyJinmenWork;
typedef struct EnemyManageDataOne;
typedef struct _anon1;
typedef struct EnemyObjHook;
typedef enum EnemyCondition : unsigned char;
typedef struct _anon2;
typedef struct sfOffsetAABB;
typedef union sfCldBody;
typedef struct EnemyRwMotionParameter;
typedef struct _anon3;
typedef struct EnemySoundTypeControl;
typedef struct EnemyRwMotion;
typedef struct _anon4;
typedef struct sfCldPart;
typedef struct _anon5;
typedef struct EnemyRwWork;
typedef struct _anon6;
typedef enum BattleAttackKind : unsigned char;
typedef union _anon7;
typedef struct EventFlag;
typedef union _anon8;
typedef struct EnemySoundTypeControlData;
typedef enum EnemyFmMotionParameterType : unsigned char;
typedef struct EnemyFmMotion;
typedef struct EnemyFootStepsData;
typedef struct EnemyFmWork;
typedef enum EnemyJinmenViewType : unsigned char;
typedef struct EnemyFootStepData;
typedef enum EnemySenseResultType : unsigned char;
typedef enum EnemyPlayerType : unsigned char;
typedef enum EnemyManageEntryType : unsigned char;
typedef struct EnemySenseResult;
typedef enum BattleDamageType : unsigned char;
typedef enum EnemySenseType : unsigned char;
typedef struct EnemyMeasureResult;

typedef void(*type_0)(void*, int);
typedef void(*type_2)(void*, int);
typedef void(*type_4)(void*, int);
typedef int(*type_5)(void*);
typedef void(*type_7)(void*, int);
typedef void(*type_8)(void*, int);
typedef void(*type_11)(sfObj*);
typedef void(*type_17)(sfObj*);
typedef void(*type_18)(void*, int);
typedef void(*type_20)(void*, int);
typedef int(*type_21)(void*);
typedef void(*type_22)(sfObj*);
typedef int(*type_23)(void*);
typedef int(*type_27)(void*);
typedef void(*type_30)(void*, int);
typedef int(*type_31)(void*);
typedef void(*type_33)(sfObj*);
typedef int(*type_35)(void*);
typedef void(*type_36)(sfObj*);
typedef void(*type_40)(void*, int);
typedef void(*type_41)(void*, int);

typedef float type_1[4];
typedef _anon8 type_3[4];
typedef float type_6[4];
typedef EnemyRwMotionParameter type_9[0];
typedef unsigned char type_10[3];
typedef void(*type_12)(sfObj*)[24];
typedef _anon6 type_13[4];
typedef unsigned char type_14[320];
typedef _anon7 type_15[0];
typedef _anon8 type_16[256];
typedef int type_19[0];
typedef short type_24[2];
typedef short type_25[0];
typedef unsigned short type_26[2];
typedef char type_28[4];
typedef unsigned char type_29[4];
typedef float type_32[1];
typedef int type_34[1];
typedef float type_37[4];
typedef float type_38[4][4];
typedef EnemyFootStepData type_39[0];

struct sfObj
{
	_anon8 fwork[256];
	_anon8* work;
	void(*func)(sfObj*);
	_anon8* work_pt0;
	_anon8* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon8* sys_work;
	_anon8* scene_work;
	_anon8* event_work;
	_anon8* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct _anon0
{
	_anon7 vertex[0];
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

struct EnemySearchData
{
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

struct EnemySearchPoint
{
};

enum EnemyBattleDamageAnimeNumber : unsigned char
{
	EN_BDANM_DMH1,
	EN_BDANM_DMH2,
	EN_BDANM_DMP1,
	EN_BDANM_DMP2,
	EN_BDANM_DMP3,
	EN_BDANM_DMS1,
	EN_BDANM_DMS2,
	EN_BDANM_DMC,
	EN_BDANM_XXP1,
	EN_BDANM_XXP2,
	EN_BDANM_XXP3,
	EN_BDANM_XXS1,
	EN_BDANM_XXS2,
	EN_BDANM_XXG1,
	EN_BDANM_XXG2,
	EN_BDANM_XXC1,
	EN_BDANM_XXC2,
	EN_BDANM_EXTRA = 0xff
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

struct EnemyClHitResult
{
};

enum EnemySoundType : unsigned char
{
	EN_SOUND_TYPE_FOOTSTEPS,
	EN_SOUND_TYPE_BUZZ,
	EN_SOUND_TYPE_MUCUS,
	EN_SOUND_TYPE_JINMEN,
	EN_SOUND_TYPE_HYENA,
	EN_SOUND_TYPE_MMZ,
	EN_SOUND_TYPE_MUSH,
	EN_SOUND_TYPE_TWINS,
	EN_SOUND_TYPE_FLAMES,
	EN_SOUND_TYPE_WHEEL,
	EN_SOUND_TYPE_MAX
};

struct EnemyJinmenWork
{
	float target_pos[4];
	float view_target[4];
	float head_move[4];
	float head_old[4];
	float head_rot[4];
	float head2_rot[4];
	float hitback[4];
	EnemyRwWork* rw_work;
	EnemyFmWork* fm_work;
	EnemySearchData* search;
	EnemySenseData* player_check;
	EnemyJinmenViewType view_type;
	int head_mode;
	int head2_mode;
	float anime_speed;
	float timer;
	float move_speed;
	int falling_direction;
	int finish_count;
	int b_count;
	void* view_target_obj;
	EnemyObjHook* animechange_hook;
	EnemyObjHook* animeupdate_hook;
	int attack_kind;
	int target_player;
	sfObj* weapon_obj;
	EnemySoundTypeControl* sound_control;
	GameItem first_item;
	int waiting;
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
	_anon8 work[4];
	unsigned int padding;
};

struct _anon1
{
	float abcd[4];
};

struct EnemyObjHook
{
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

struct _anon2
{
	float start[4];
	float end[4];
};

struct sfOffsetAABB
{
	_anon4 aabb;
	float offset[4];
};

union sfCldBody
{
	_anon5 obb;
	_anon4 aabb;
	sfOffsetAABB offset_aabb;
	_anon2 line;
	_anon3 sphere;
};

struct EnemyRwMotionParameter
{
	short frame;
	short cond;
};

struct _anon3
{
	float center[4];
	float radius;
};

struct EnemySoundTypeControl
{
};

struct EnemyRwMotion
{
	short right_foot;
	short left_foot;
	float rate;
	EnemyRwMotionParameter param[0];
};

struct _anon4
{
	float bmin[4];
	float bmax[4];
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
	float mat[4][4];
	float half_w[4];
};

struct EnemyRwWork
{
};

struct _anon6
{
	unsigned char next_offset;
	unsigned char flags;
	short id;
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

union _anon7
{
	float node[4];
	_anon6 data[4];
};

struct EventFlag
{
	unsigned char flag[320];
};

union _anon8
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

struct EnemySoundTypeControlData
{
	EnemySoundType sound_type;
	float fadein_speed;
	float fadeout_speed;
	int call_no[0];
};

enum EnemyFmMotionParameterType : unsigned char
{
	ENEMY_FM_PARAM_Z_ONLY,
	ENEMY_FM_PARAM_X_ONLY,
	ENEMY_FM_PARAM_XZ,
	ENEMY_FM_PARAM_XYZ
};

struct EnemyFmMotion
{
	int max_frame;
	EnemyFmMotionParameterType param_type;
	short param[0];
};

struct EnemyFootStepsData
{
	int sound;
	int data_number;
	EnemyFootStepData data[0];
};

struct EnemyFmWork
{
};

enum EnemyJinmenViewType : unsigned char
{
	EN_JIN_VIEW_NOTHING,
	EN_JIN_VIEW_PLAYER,
	EN_JIN_VIEW_OBJ,
	EN_JIN_VIEW_ENEMY,
	EN_JIN_VIEW_TARGET,
	EN_JIN_VIEW_DAMAGE
};

struct EnemyFootStepData
{
	unsigned short frame;
	char dir;
	unsigned char bone_num;
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

enum EnemyManageEntryType : unsigned char
{
	ENEMY_MANAGE_ENTRY_TYPE_APPEAR,
	ENEMY_MANAGE_ENTRY_TYPE_FLAG_WAIT,
	ENEMY_MANAGE_ENTRY_TYPE_DIFFERENT_LEVEL,
	ENEMY_MANAGE_ENTRY_TYPE_ERASED,
	ENEMY_MANAGE_ENTRY_TYPE_ALREADY,
	ENEMY_MANAGE_ENTRY_TYPE_ANOTHER_SCENE
};

struct EnemySenseResult
{
	float pos[4];
	EnemySenseResultType type;
	float level;
	sfObj* obj;
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

enum EnemySenseType : unsigned char
{
	EN_SENSE_TYPE_SIGHT_OF_PLAYER,
	EN_SENSE_TYPE_SIGHT_OF_PLAYER_XZ,
	EN_SENSE_TYPE_NOSIGHT_OF_PLAYER,
	EN_SENSE_TYPE_NOSIGHT_OF_PLAYER_XZ
};

struct EnemyMeasureResult
{
	float pos[4];
	float normal[4];
	float dist;
	int exist;
	_anon0* poly;
};

EnemyRwMotion rw_wlk;
EnemyRwMotion rw_wlkarm;
EnemyFootStepsData fs_wlk;
EnemyFootStepsData fs_wlkarm;
EnemyRwMotion rw_wlkb;
EnemyFootStepsData fs_wlkb;
EnemyRwMotion rw_wlkr;
EnemyFootStepsData fs_wlkr;
EnemyRwMotion rw_wlkl;
EnemyFootStepsData fs_wlkl;
EnemyFmMotion fm_run;
EnemyFootStepsData fs_run;
EnemyFmMotion fm_runb;
EnemyFootStepsData fs_runb;
EnemyFmMotion fm_runr;
EnemyFootStepsData fs_runr;
EnemyFmMotion fm_runl;
EnemyFootStepsData fs_runl;
EnemyFmMotion fm_xxg1;
EnemyFmMotion fm_xxg2;
EnemyFootStepsData fs_att2;
EnemyFootStepsData fs_att3;
EnemyFmMotion fm_ratt1;
EnemyFootStepsData fs_ratt1;
EnemyFmMotion fm_ratt3;
EnemyFootStepsData fs_ratt3;
EnemyFootStepsData fs_stand;
EnemySoundTypeControlData jinmen_sound;
float jinmen_head_pos[4];
int wait_type;
float wait_timer;
float traffic_fluctuation;
float traffic_rate;
EventFlag event_flag;
void(*EnemyJinmenAnimeUpdateHook)(sfObj*);
void(*EnemyJinmenAnimeChangeHook)(sfObj*);
sfObj* traffic_master;
void(*jinmen_jump_table)(sfObj*)[24];
int(*EnemyEDAnimeIsEndSoon)(void*);
float sg_vector_unit_y[4];
float en_quat_rot_y_30[4];
float en_quat_rot_y_330[4];
int(*EnemyEDAnimeIsEnd)(void*);
void(*EnemyEDJinmenExciteSoundCall)(void*, int);
int(*EnemyEDAnimeIsOver)(void*);
void(*EnemyEDJinmenBackStepEnd)(void*, int);
void(*EnemyEDJinmenRevival)(void*, int);
float sg_vector_unit_w[4];
float sg_vector_unit_x[4];
float en_vector_unit_y_minus[4];
int(*EnemyEDSenseTest)(void*);
int(*EnemyEDBattleDamageCheck)(void*);
void(*EnemyEDBattleDamageRefrect)(void*, int);
void(*EnemyEDJinmenAdditionalDamageDown)(void*, int);
void(*EnemyEDJinmenAdditionalDamage)(void*, int);
void(*EnemyEDJinmenGather)(void*, int);
int(*EnemyEDJinmenCheckGather)(void*);

void EnemyJinmenConstruct(sfObj* obj);
void EnemyJinmenHandle(sfObj* obj);
void EnemyJinmenDraw();
void EnemyJinmenDestruct(sfObj* obj);
void EnemyJinmenDataPreserve(sfObj* obj);
void EnemyJinmenDataExtract(sfObj* obj);
void EnemyJinmenControl(sfObj* obj);
void EnemyJinmenControlInit(sfObj* obj);
void EnemyJinmenControlDescent(sfObj* obj);
void EnemyJinmenControlWander(sfObj* obj);
void EnemyJinmenControlCaution(sfObj* obj);
void EnemyJinmenControlAngry(sfObj* obj);
void EnemyJinmenControlApproach(sfObj* obj);
void EnemyJinmenControlAttack(sfObj* obj);
void EnemyJinmenControlAway(sfObj* obj);
void EnemyJinmenControlWild(sfObj* obj);
void EnemyJinmenControlCaution4(sfObj* obj);
void EnemyJinmenControlKabaddi(sfObj* obj);
void EnemyJinmenControlSearch(sfObj* obj);
void EnemyJinmenControlGather(sfObj* obj);
void EnemyJinmenControlApproach4(sfObj* obj);
void EnemyJinmenControlAttack4(sfObj* obj);
void EnemyJinmenControlAway4(sfObj* obj);
void EnemyJinmenControlLeap(sfObj* obj);
void EnemyJinmenControlDamage(sfObj* obj);
void EnemyJinmenControlDown(sfObj* obj);
void EnemyJinmenControlGuard(sfObj* obj);
void EnemyJinmenControlWait(sfObj* obj);
void EnemyJinmenControlNoMove(sfObj* obj);
void EnemyJinmenControlJump(sfObj* obj);
void EnemyJinmenControlFlagWait(sfObj* obj);
void EnemyJinmenControlDead(sfObj* obj);
int EnemyJinmenSearchPath(sfObj* obj, float* destination, float* target);
int EnemyJinmenCheckDescent(sfObj* obj);
int EnemyJinmenSetDescentPos(sfObj* obj);
int EnemyJinmenCheckLeap(sfObj* obj);
int EnemyJinmenCheckNarrowPassage(sfObj* obj);
void EnemyJinmenHeadInit(sfObj* obj);
void EnemyJinmenChangeHeadMode(sfObj* obj, int mode);
void EnemyJinmenChangeHead2Mode(sfObj* obj, int mode);
void EnemyJinmenChangeViewType(sfObj* obj, EnemyJinmenViewType type);
void EnemyJinmenPassWeapon(sfObj* obj);
void EnemyJinmenAnimeChangeHook(sfObj* obj);
void EnemyJinmenAnimeUpdateHook(sfObj* obj);
void EnemyJinmenHeadControl(sfObj* obj);
void EnemyJinmenHead2Control(sfObj* obj);
void EnemyJinmenHitCheck(sfObj* obj);
void EnemyJinmenAnimeSet(sfObj* obj, int anime);
void EnemyJinmenChangeAnimeSpeed(sfObj* obj);
void EnemyJinmenAttackSet(sfObj* obj);
int EnemyJinmenCheckGather(sfObj* obj);
int EnemyJinmenCanAttack(sfObj* obj);
void EnemyJinmenSetGather(sfObj* obj);
void EnemyJinmenSetGatherA(sfObj* obj);
void EnemyJinmenSoundStart(sfObj* obj);
void EnemyJinmenSoundStop(sfObj* obj);
void EnemyJinmenLeftItemSet(sfObj* obj);
void EnemyJinmenFindPlayer(sfObj* obj, void(*func)(void*, int));
void EnemyJinmenNoFindPlayer(sfObj* obj, void(*func)(void*, int));
void EnemyJinmenFindPlayerAttack(sfObj* obj, void(*func)(void*, int));
void EnemyJinmenSetEventDamageCheck(sfObj* obj);
void EnemyJinmenSetEventGather(sfObj* obj);
EnemyBattleDamageAnimeNumber damage_anime(BattleDamageType type, float* dir, int down, int mode);
int EnemyJinmenAddDamage(sfObj* obj, EnemyBattleDamage* bd);
void EnemyJinmenSetStairsDown(sfObj* obj, float* normal);
void EnemyEDJinmenAdditionalDamage(void* obj);
void EnemyEDJinmenAdditionalDamageDown(void* obj);
void EnemyEDJinmenRevival(void* obj);
void EnemyEDJinmenBackStepEnd(void* obj);
int EnemyEDJinmenCheckGather(void* obj);
void EnemyEDJinmenGather(void* obj);
void EnemyEDJinmenExciteSoundCall(void* obj);

// 
// Start address: 0x1c2500
void EnemyJinmenConstruct(sfObj* obj)
{
	EnemyManageEntryType etype;
	EnemyJinmenWork* ew;
	GameItem item;
	int type;
	int f;
	int sf;
	_anon5 obb;
	_anon4 aabb;
	// Line 1314, Address: 0x1c2500, Func Offset: 0
	// Line 1320, Address: 0x1c2504, Func Offset: 0x4
	// Line 1314, Address: 0x1c2508, Func Offset: 0x8
	// Line 1320, Address: 0x1c2524, Func Offset: 0x24
	// Line 1322, Address: 0x1c252c, Func Offset: 0x2c
	// Line 1323, Address: 0x1c253c, Func Offset: 0x3c
	// Line 1325, Address: 0x1c2558, Func Offset: 0x58
	// Line 1326, Address: 0x1c2560, Func Offset: 0x60
	// Line 1329, Address: 0x1c2568, Func Offset: 0x68
	// Line 1330, Address: 0x1c2574, Func Offset: 0x74
	// Line 1331, Address: 0x1c2580, Func Offset: 0x80
	// Line 1332, Address: 0x1c2584, Func Offset: 0x84
	// Line 1334, Address: 0x1c2588, Func Offset: 0x88
	// Line 1336, Address: 0x1c25a8, Func Offset: 0xa8
	// Line 1337, Address: 0x1c25ac, Func Offset: 0xac
	// Line 1339, Address: 0x1c25b0, Func Offset: 0xb0
	// Line 1340, Address: 0x1c25c0, Func Offset: 0xc0
	// Line 1341, Address: 0x1c25d0, Func Offset: 0xd0
	// Line 1343, Address: 0x1c25dc, Func Offset: 0xdc
	// Line 1344, Address: 0x1c25ec, Func Offset: 0xec
	// Line 1345, Address: 0x1c25f4, Func Offset: 0xf4
	// Line 1347, Address: 0x1c2628, Func Offset: 0x128
	// Line 1348, Address: 0x1c2630, Func Offset: 0x130
	// Line 1349, Address: 0x1c2640, Func Offset: 0x140
	// Line 1350, Address: 0x1c2648, Func Offset: 0x148
	// Line 1351, Address: 0x1c2654, Func Offset: 0x154
	// Line 1353, Address: 0x1c2678, Func Offset: 0x178
	// Line 1357, Address: 0x1c2690, Func Offset: 0x190
	// Line 1358, Address: 0x1c269c, Func Offset: 0x19c
	// Line 1359, Address: 0x1c26a0, Func Offset: 0x1a0
	// Line 1360, Address: 0x1c26a8, Func Offset: 0x1a8
	// Line 1359, Address: 0x1c26ac, Func Offset: 0x1ac
	// Line 1363, Address: 0x1c26b0, Func Offset: 0x1b0
	// Line 1360, Address: 0x1c26b4, Func Offset: 0x1b4
	// Line 1365, Address: 0x1c26b8, Func Offset: 0x1b8
	// Line 1363, Address: 0x1c26bc, Func Offset: 0x1bc
	// Line 1365, Address: 0x1c26c0, Func Offset: 0x1c0
	// Line 1366, Address: 0x1c26c8, Func Offset: 0x1c8
	// Line 1372, Address: 0x1c26e0, Func Offset: 0x1e0
	// Line 1374, Address: 0x1c2710, Func Offset: 0x210
	// Line 1375, Address: 0x1c271c, Func Offset: 0x21c
	// Line 1376, Address: 0x1c2728, Func Offset: 0x228
	// Line 1378, Address: 0x1c273c, Func Offset: 0x23c
	// Line 1380, Address: 0x1c2750, Func Offset: 0x250
	// Line 1381, Address: 0x1c275c, Func Offset: 0x25c
	// Line 1382, Address: 0x1c2764, Func Offset: 0x264
	// Line 1381, Address: 0x1c2768, Func Offset: 0x268
	// Line 1382, Address: 0x1c276c, Func Offset: 0x26c
	// Line 1383, Address: 0x1c2778, Func Offset: 0x278
	// Line 1385, Address: 0x1c2798, Func Offset: 0x298
	// Line 1386, Address: 0x1c27a4, Func Offset: 0x2a4
	// Line 1387, Address: 0x1c27ac, Func Offset: 0x2ac
	// Line 1388, Address: 0x1c27b4, Func Offset: 0x2b4
	// Line 1390, Address: 0x1c27b8, Func Offset: 0x2b8
	// Line 1392, Address: 0x1c27c0, Func Offset: 0x2c0
	// Line 1394, Address: 0x1c27d0, Func Offset: 0x2d0
	// Line 1396, Address: 0x1c27dc, Func Offset: 0x2dc
	// Line 1397, Address: 0x1c27e4, Func Offset: 0x2e4
	// Line 1398, Address: 0x1c27f0, Func Offset: 0x2f0
	// Line 1399, Address: 0x1c2834, Func Offset: 0x334
	// Line 1400, Address: 0x1c2838, Func Offset: 0x338
	// Line 1403, Address: 0x1c284c, Func Offset: 0x34c
	// Line 1404, Address: 0x1c2854, Func Offset: 0x354
	// Line 1405, Address: 0x1c2858, Func Offset: 0x358
	// Line 1408, Address: 0x1c286c, Func Offset: 0x36c
	// Line 1409, Address: 0x1c2874, Func Offset: 0x374
	// Line 1410, Address: 0x1c2878, Func Offset: 0x378
	// Line 1413, Address: 0x1c288c, Func Offset: 0x38c
	// Line 1414, Address: 0x1c2894, Func Offset: 0x394
	// Line 1415, Address: 0x1c2898, Func Offset: 0x398
	// Line 1418, Address: 0x1c28ac, Func Offset: 0x3ac
	// Line 1419, Address: 0x1c28b4, Func Offset: 0x3b4
	// Line 1420, Address: 0x1c28b8, Func Offset: 0x3b8
	// Line 1421, Address: 0x1c28cc, Func Offset: 0x3cc
	// Line 1426, Address: 0x1c28d0, Func Offset: 0x3d0
	// Line 1427, Address: 0x1c28dc, Func Offset: 0x3dc
	// Line 1428, Address: 0x1c28f4, Func Offset: 0x3f4
	// Line 1429, Address: 0x1c28f8, Func Offset: 0x3f8
	// Line 1430, Address: 0x1c2904, Func Offset: 0x404
	// Line 1431, Address: 0x1c2908, Func Offset: 0x408
	// Line 1432, Address: 0x1c2914, Func Offset: 0x414
	// Line 1433, Address: 0x1c2924, Func Offset: 0x424
	// Line 1434, Address: 0x1c2930, Func Offset: 0x430
	// Line 1437, Address: 0x1c2938, Func Offset: 0x438
	// Line 1438, Address: 0x1c2944, Func Offset: 0x444
	// Line 1439, Address: 0x1c294c, Func Offset: 0x44c
	// Line 1440, Address: 0x1c295c, Func Offset: 0x45c
	// Line 1442, Address: 0x1c2968, Func Offset: 0x468
	// Line 1444, Address: 0x1c2974, Func Offset: 0x474
	// Line 1443, Address: 0x1c2978, Func Offset: 0x478
	// Line 1444, Address: 0x1c297c, Func Offset: 0x47c
	// Line 1443, Address: 0x1c2980, Func Offset: 0x480
	// Line 1445, Address: 0x1c2988, Func Offset: 0x488
	// Line 1446, Address: 0x1c2994, Func Offset: 0x494
	// Line 1447, Address: 0x1c299c, Func Offset: 0x49c
	// Func End, Address: 0x1c29c4, Func Offset: 0x4c4
}

// 
// Start address: 0x1c29d0
void EnemyJinmenHandle(sfObj* obj)
{
	EnemyJinmenWork* ew;
	EnemyCondition cond;
	// Line 1451, Address: 0x1c29d0, Func Offset: 0
	// Line 1454, Address: 0x1c29e4, Func Offset: 0x14
	// Line 1455, Address: 0x1c29f0, Func Offset: 0x20
	// Line 1457, Address: 0x1c29fc, Func Offset: 0x2c
	// Line 1458, Address: 0x1c2a08, Func Offset: 0x38
	// Line 1459, Address: 0x1c2a14, Func Offset: 0x44
	// Line 1460, Address: 0x1c2a1c, Func Offset: 0x4c
	// Line 1461, Address: 0x1c2a3c, Func Offset: 0x6c
	// Line 1463, Address: 0x1c2a44, Func Offset: 0x74
	// Line 1464, Address: 0x1c2a5c, Func Offset: 0x8c
	// Line 1465, Address: 0x1c2a64, Func Offset: 0x94
	// Line 1466, Address: 0x1c2a70, Func Offset: 0xa0
	// Line 1467, Address: 0x1c2a78, Func Offset: 0xa8
	// Line 1468, Address: 0x1c2a88, Func Offset: 0xb8
	// Line 1469, Address: 0x1c2a90, Func Offset: 0xc0
	// Line 1470, Address: 0x1c2a98, Func Offset: 0xc8
	// Line 1471, Address: 0x1c2aa0, Func Offset: 0xd0
	// Line 1472, Address: 0x1c2aac, Func Offset: 0xdc
	// Line 1473, Address: 0x1c2abc, Func Offset: 0xec
	// Line 1474, Address: 0x1c2ac0, Func Offset: 0xf0
	// Line 1494, Address: 0x1c2ac8, Func Offset: 0xf8
	// Line 1496, Address: 0x1c2ad0, Func Offset: 0x100
	// Line 1498, Address: 0x1c2ad8, Func Offset: 0x108
	// Line 1499, Address: 0x1c2ae8, Func Offset: 0x118
	// Line 1501, Address: 0x1c2b0c, Func Offset: 0x13c
	// Line 1502, Address: 0x1c2b18, Func Offset: 0x148
	// Line 1503, Address: 0x1c2b20, Func Offset: 0x150
	// Line 1505, Address: 0x1c2b28, Func Offset: 0x158
	// Line 1506, Address: 0x1c2b30, Func Offset: 0x160
	// Line 1507, Address: 0x1c2b3c, Func Offset: 0x16c
	// Line 1508, Address: 0x1c2b44, Func Offset: 0x174
	// Line 1510, Address: 0x1c2b4c, Func Offset: 0x17c
	// Line 1511, Address: 0x1c2b50, Func Offset: 0x180
	// Func End, Address: 0x1c2b68, Func Offset: 0x198
}

// 
// Start address: 0x1c2b70
void EnemyJinmenDraw()
{
	// Line 1530, Address: 0x1c2b70, Func Offset: 0
	// Func End, Address: 0x1c2b78, Func Offset: 0x8
}

// 
// Start address: 0x1c2b80
void EnemyJinmenDestruct(sfObj* obj)
{
	EnemyJinmenWork* ew;
	GameItem item;
	// Line 1534, Address: 0x1c2b80, Func Offset: 0
	// Line 1537, Address: 0x1c2b90, Func Offset: 0x10
	// Line 1538, Address: 0x1c2b98, Func Offset: 0x18
	// Line 1539, Address: 0x1c2ba8, Func Offset: 0x28
	// Line 1541, Address: 0x1c2bb0, Func Offset: 0x30
	// Line 1542, Address: 0x1c2bbc, Func Offset: 0x3c
	// Line 1543, Address: 0x1c2bc4, Func Offset: 0x44
	// Line 1544, Address: 0x1c2bd4, Func Offset: 0x54
	// Line 1545, Address: 0x1c2bdc, Func Offset: 0x5c
	// Line 1546, Address: 0x1c2be4, Func Offset: 0x64
	// Line 1547, Address: 0x1c2be8, Func Offset: 0x68
	// Line 1549, Address: 0x1c2bf4, Func Offset: 0x74
	// Line 1551, Address: 0x1c2bfc, Func Offset: 0x7c
	// Line 1552, Address: 0x1c2c08, Func Offset: 0x88
	// Line 1553, Address: 0x1c2c14, Func Offset: 0x94
	// Line 1554, Address: 0x1c2c1c, Func Offset: 0x9c
	// Line 1555, Address: 0x1c2c20, Func Offset: 0xa0
	// Line 1558, Address: 0x1c2c28, Func Offset: 0xa8
	// Line 1559, Address: 0x1c2c44, Func Offset: 0xc4
	// Line 1560, Address: 0x1c2c5c, Func Offset: 0xdc
	// Line 1561, Address: 0x1c2c64, Func Offset: 0xe4
	// Line 1562, Address: 0x1c2c6c, Func Offset: 0xec
	// Line 1563, Address: 0x1c2c70, Func Offset: 0xf0
	// Line 1569, Address: 0x1c2cc0, Func Offset: 0x140
	// Line 1572, Address: 0x1c2ccc, Func Offset: 0x14c
	// Line 1573, Address: 0x1c2cd0, Func Offset: 0x150
	// Line 1574, Address: 0x1c2cd8, Func Offset: 0x158
	// Line 1575, Address: 0x1c2ce0, Func Offset: 0x160
	// Line 1576, Address: 0x1c2ce8, Func Offset: 0x168
	// Line 1577, Address: 0x1c2cf0, Func Offset: 0x170
	// Line 1578, Address: 0x1c2cf8, Func Offset: 0x178
	// Line 1579, Address: 0x1c2d00, Func Offset: 0x180
	// Line 1580, Address: 0x1c2d08, Func Offset: 0x188
	// Func End, Address: 0x1c2d1c, Func Offset: 0x19c
}

// 
// Start address: 0x1c2d20
void EnemyJinmenDataPreserve(sfObj* obj)
{
	EnemyJinmenWork* ew;
	EnemyManageDataOne* pe;
	_anon8 iu;
	// Line 1584, Address: 0x1c2d20, Func Offset: 0
	// Line 1588, Address: 0x1c2d34, Func Offset: 0x14
	// Line 1589, Address: 0x1c2d4c, Func Offset: 0x2c
	// Line 1593, Address: 0x1c2d80, Func Offset: 0x60
	// Line 1595, Address: 0x1c2d88, Func Offset: 0x68
	// Line 1596, Address: 0x1c2d90, Func Offset: 0x70
	// Line 1597, Address: 0x1c2d9c, Func Offset: 0x7c
	// Line 1598, Address: 0x1c2da8, Func Offset: 0x88
	// Line 1600, Address: 0x1c2db4, Func Offset: 0x94
	// Line 1599, Address: 0x1c2db8, Func Offset: 0x98
	// Line 1600, Address: 0x1c2dc0, Func Offset: 0xa0
	// Line 1601, Address: 0x1c2dc8, Func Offset: 0xa8
	// Func End, Address: 0x1c2de0, Func Offset: 0xc0
}

// 
// Start address: 0x1c2de0
void EnemyJinmenDataExtract(sfObj* obj)
{
	EnemyJinmenWork* ew;
	EnemyManageDataOne* pe;
	// Line 1605, Address: 0x1c2de0, Func Offset: 0
	// Line 1608, Address: 0x1c2df4, Func Offset: 0x14
	// Line 1609, Address: 0x1c2e00, Func Offset: 0x20
	// Line 1610, Address: 0x1c2e14, Func Offset: 0x34
	// Line 1611, Address: 0x1c2e20, Func Offset: 0x40
	// Line 1612, Address: 0x1c2e2c, Func Offset: 0x4c
	// Line 1613, Address: 0x1c2e44, Func Offset: 0x64
	// Line 1614, Address: 0x1c2e4c, Func Offset: 0x6c
	// Line 1615, Address: 0x1c2e58, Func Offset: 0x78
	// Line 1616, Address: 0x1c2e64, Func Offset: 0x84
	// Line 1617, Address: 0x1c2e6c, Func Offset: 0x8c
	// Line 1618, Address: 0x1c2e7c, Func Offset: 0x9c
	// Line 1619, Address: 0x1c2e84, Func Offset: 0xa4
	// Line 1620, Address: 0x1c2e88, Func Offset: 0xa8
	// Line 1621, Address: 0x1c2e8c, Func Offset: 0xac
	// Line 1624, Address: 0x1c2e98, Func Offset: 0xb8
	// Line 1625, Address: 0x1c2ea4, Func Offset: 0xc4
	// Func End, Address: 0x1c2ebc, Func Offset: 0xdc
}

// 
// Start address: 0x1c2ec0
void EnemyJinmenControl(sfObj* obj)
{
	EnemyJinmenWork* ew;
	int step;
	int mode;
	EnemyMeasureResult mres;
	EnemyMeasureResult mres;
	// Line 1673, Address: 0x1c2ec0, Func Offset: 0
	// Line 1676, Address: 0x1c2ed8, Func Offset: 0x18
	// Line 1688, Address: 0x1c2ee4, Func Offset: 0x24
	// Line 1690, Address: 0x1c2eec, Func Offset: 0x2c
	// Line 1692, Address: 0x1c2ef8, Func Offset: 0x38
	// Line 1694, Address: 0x1c2f14, Func Offset: 0x54
	// Line 1696, Address: 0x1c2f38, Func Offset: 0x78
	// Line 1697, Address: 0x1c2f44, Func Offset: 0x84
	// Line 1701, Address: 0x1c2f48, Func Offset: 0x88
	// Line 1702, Address: 0x1c2f54, Func Offset: 0x94
	// Line 1706, Address: 0x1c2f80, Func Offset: 0xc0
	// Line 1708, Address: 0x1c2fa4, Func Offset: 0xe4
	// Line 1709, Address: 0x1c2fb0, Func Offset: 0xf0
	// Line 1710, Address: 0x1c2fb4, Func Offset: 0xf4
	// Line 1711, Address: 0x1c2fc0, Func Offset: 0x100
	// Line 1712, Address: 0x1c2fc8, Func Offset: 0x108
	// Line 1715, Address: 0x1c2fd4, Func Offset: 0x114
	// Line 1716, Address: 0x1c2fdc, Func Offset: 0x11c
	// Line 1717, Address: 0x1c2fe0, Func Offset: 0x120
	// Line 1720, Address: 0x1c300c, Func Offset: 0x14c
	// Line 1722, Address: 0x1c3030, Func Offset: 0x170
	// Line 1723, Address: 0x1c303c, Func Offset: 0x17c
	// Line 1724, Address: 0x1c3048, Func Offset: 0x188
	// Line 1728, Address: 0x1c3054, Func Offset: 0x194
	// Line 1730, Address: 0x1c3058, Func Offset: 0x198
	// Line 1733, Address: 0x1c3094, Func Offset: 0x1d4
	// Line 1734, Address: 0x1c30a4, Func Offset: 0x1e4
	// Line 1736, Address: 0x1c30c8, Func Offset: 0x208
	// Line 1737, Address: 0x1c30d0, Func Offset: 0x210
	// Line 1738, Address: 0x1c30d8, Func Offset: 0x218
	// Line 1739, Address: 0x1c30dc, Func Offset: 0x21c
	// Line 1740, Address: 0x1c30e0, Func Offset: 0x220
	// Line 1741, Address: 0x1c30f0, Func Offset: 0x230
	// Line 1743, Address: 0x1c30f8, Func Offset: 0x238
	// Line 1745, Address: 0x1c3104, Func Offset: 0x244
	// Line 1747, Address: 0x1c3108, Func Offset: 0x248
	// Line 1752, Address: 0x1c312c, Func Offset: 0x26c
	// Line 1753, Address: 0x1c3130, Func Offset: 0x270
	// Line 1754, Address: 0x1c3148, Func Offset: 0x288
	// Line 1760, Address: 0x1c3150, Func Offset: 0x290
	// Func End, Address: 0x1c316c, Func Offset: 0x2ac
}

// 
// Start address: 0x1c3170
void EnemyJinmenControlInit(sfObj* obj)
{
	EnemyJinmenWork* ew;
	float* pos;
	float* rot;
	int fs;
	float tpos[4];
	// Line 1764, Address: 0x1c3170, Func Offset: 0
	// Line 1769, Address: 0x1c3180, Func Offset: 0x10
	// Line 1770, Address: 0x1c318c, Func Offset: 0x1c
	// Line 1771, Address: 0x1c3194, Func Offset: 0x24
	// Line 1772, Address: 0x1c319c, Func Offset: 0x2c
	// Line 1773, Address: 0x1c31a4, Func Offset: 0x34
	// Line 1774, Address: 0x1c31a8, Func Offset: 0x38
	// Line 1775, Address: 0x1c31b8, Func Offset: 0x48
	// Line 1776, Address: 0x1c31c4, Func Offset: 0x54
	// Line 1777, Address: 0x1c31d4, Func Offset: 0x64
	// Line 1778, Address: 0x1c31e0, Func Offset: 0x70
	// Line 1779, Address: 0x1c31e8, Func Offset: 0x78
	// Line 1780, Address: 0x1c31f4, Func Offset: 0x84
	// Line 1781, Address: 0x1c3200, Func Offset: 0x90
	// Line 1782, Address: 0x1c3208, Func Offset: 0x98
	// Line 1784, Address: 0x1c3218, Func Offset: 0xa8
	// Line 1785, Address: 0x1c3224, Func Offset: 0xb4
	// Line 1787, Address: 0x1c3254, Func Offset: 0xe4
	// Line 1788, Address: 0x1c325c, Func Offset: 0xec
	// Line 1789, Address: 0x1c326c, Func Offset: 0xfc
	// Line 1790, Address: 0x1c3278, Func Offset: 0x108
	// Line 1793, Address: 0x1c3280, Func Offset: 0x110
	// Line 1794, Address: 0x1c328c, Func Offset: 0x11c
	// Line 1795, Address: 0x1c3294, Func Offset: 0x124
	// Line 1796, Address: 0x1c32b4, Func Offset: 0x144
	// Line 1798, Address: 0x1c32c8, Func Offset: 0x158
	// Line 1799, Address: 0x1c32d0, Func Offset: 0x160
	// Line 1800, Address: 0x1c32d8, Func Offset: 0x168
	// Line 1802, Address: 0x1c32e4, Func Offset: 0x174
	// Line 1803, Address: 0x1c32f0, Func Offset: 0x180
	// Line 1804, Address: 0x1c32fc, Func Offset: 0x18c
	// Line 1805, Address: 0x1c3300, Func Offset: 0x190
	// Func End, Address: 0x1c3314, Func Offset: 0x1a4
}

// 
// Start address: 0x1c3320
void EnemyJinmenControlDescent(sfObj* obj)
{
	EnemyJinmenWork* ew;
	float* pos;
	float* ppos;
	float tpos[4];
	float vec[4];
	float rot[4];
	float dt;
	float d;
	int f;
	// Line 1809, Address: 0x1c3320, Func Offset: 0
	// Line 1816, Address: 0x1c3344, Func Offset: 0x24
	// Line 1817, Address: 0x1c334c, Func Offset: 0x2c
	// Line 1818, Address: 0x1c3358, Func Offset: 0x38
	// Line 1819, Address: 0x1c3364, Func Offset: 0x44
	// Line 1820, Address: 0x1c3370, Func Offset: 0x50
	// Line 1821, Address: 0x1c337c, Func Offset: 0x5c
	// Line 1822, Address: 0x1c3388, Func Offset: 0x68
	// Line 1825, Address: 0x1c33e0, Func Offset: 0xc0
	// Line 1826, Address: 0x1c33ec, Func Offset: 0xcc
	// Line 1827, Address: 0x1c33f4, Func Offset: 0xd4
	// Line 1828, Address: 0x1c3400, Func Offset: 0xe0
	// Line 1829, Address: 0x1c340c, Func Offset: 0xec
	// Line 1830, Address: 0x1c341c, Func Offset: 0xfc
	// Line 1831, Address: 0x1c342c, Func Offset: 0x10c
	// Line 1832, Address: 0x1c3438, Func Offset: 0x118
	// Line 1833, Address: 0x1c3448, Func Offset: 0x128
	// Line 1834, Address: 0x1c3454, Func Offset: 0x134
	// Line 1835, Address: 0x1c345c, Func Offset: 0x13c
	// Line 1836, Address: 0x1c3468, Func Offset: 0x148
	// Line 1837, Address: 0x1c347c, Func Offset: 0x15c
	// Line 1836, Address: 0x1c3480, Func Offset: 0x160
	// Line 1837, Address: 0x1c3490, Func Offset: 0x170
	// Line 1838, Address: 0x1c34a4, Func Offset: 0x184
	// Line 1839, Address: 0x1c34c0, Func Offset: 0x1a0
	// Line 1840, Address: 0x1c34dc, Func Offset: 0x1bc
	// Line 1841, Address: 0x1c3500, Func Offset: 0x1e0
	// Line 1843, Address: 0x1c3504, Func Offset: 0x1e4
	// Line 1844, Address: 0x1c3510, Func Offset: 0x1f0
	// Line 1845, Address: 0x1c352c, Func Offset: 0x20c
	// Line 1846, Address: 0x1c3530, Func Offset: 0x210
	// Line 1848, Address: 0x1c353c, Func Offset: 0x21c
	// Line 1849, Address: 0x1c3540, Func Offset: 0x220
	// Line 1850, Address: 0x1c355c, Func Offset: 0x23c
	// Line 1851, Address: 0x1c3568, Func Offset: 0x248
	// Line 1852, Address: 0x1c3578, Func Offset: 0x258
	// Line 1853, Address: 0x1c3584, Func Offset: 0x264
	// Line 1855, Address: 0x1c358c, Func Offset: 0x26c
	// Line 1856, Address: 0x1c3594, Func Offset: 0x274
	// Line 1857, Address: 0x1c3598, Func Offset: 0x278
	// Line 1858, Address: 0x1c35a0, Func Offset: 0x280
	// Line 1859, Address: 0x1c35b0, Func Offset: 0x290
	// Line 1858, Address: 0x1c35b4, Func Offset: 0x294
	// Line 1859, Address: 0x1c35bc, Func Offset: 0x29c
	// Line 1860, Address: 0x1c35d0, Func Offset: 0x2b0
	// Line 1861, Address: 0x1c35e0, Func Offset: 0x2c0
	// Line 1862, Address: 0x1c35fc, Func Offset: 0x2dc
	// Line 1863, Address: 0x1c3608, Func Offset: 0x2e8
	// Line 1864, Address: 0x1c3620, Func Offset: 0x300
	// Line 1865, Address: 0x1c3628, Func Offset: 0x308
	// Line 1866, Address: 0x1c3634, Func Offset: 0x314
	// Line 1867, Address: 0x1c3644, Func Offset: 0x324
	// Line 1868, Address: 0x1c3650, Func Offset: 0x330
	// Line 1869, Address: 0x1c3660, Func Offset: 0x340
	// Line 1870, Address: 0x1c366c, Func Offset: 0x34c
	// Line 1871, Address: 0x1c3678, Func Offset: 0x358
	// Line 1872, Address: 0x1c3684, Func Offset: 0x364
	// Line 1873, Address: 0x1c368c, Func Offset: 0x36c
	// Line 1874, Address: 0x1c3694, Func Offset: 0x374
	// Line 1875, Address: 0x1c36b0, Func Offset: 0x390
	// Line 1876, Address: 0x1c36b8, Func Offset: 0x398
	// Line 1877, Address: 0x1c36c0, Func Offset: 0x3a0
	// Line 1880, Address: 0x1c36c8, Func Offset: 0x3a8
	// Line 1881, Address: 0x1c36dc, Func Offset: 0x3bc
	// Line 1883, Address: 0x1c36fc, Func Offset: 0x3dc
	// Line 1885, Address: 0x1c3708, Func Offset: 0x3e8
	// Line 1888, Address: 0x1c3710, Func Offset: 0x3f0
	// Line 1889, Address: 0x1c3724, Func Offset: 0x404
	// Line 1890, Address: 0x1c3730, Func Offset: 0x410
	// Line 1891, Address: 0x1c3740, Func Offset: 0x420
	// Line 1892, Address: 0x1c375c, Func Offset: 0x43c
	// Line 1894, Address: 0x1c3794, Func Offset: 0x474
	// Line 1895, Address: 0x1c37a0, Func Offset: 0x480
	// Line 1896, Address: 0x1c37c4, Func Offset: 0x4a4
	// Line 1897, Address: 0x1c37d8, Func Offset: 0x4b8
	// Line 1899, Address: 0x1c3810, Func Offset: 0x4f0
	// Line 1902, Address: 0x1c381c, Func Offset: 0x4fc
	// Line 1903, Address: 0x1c3824, Func Offset: 0x504
	// Line 1904, Address: 0x1c3828, Func Offset: 0x508
	// Line 1906, Address: 0x1c3840, Func Offset: 0x520
	// Line 1908, Address: 0x1c3848, Func Offset: 0x528
	// Line 1910, Address: 0x1c3860, Func Offset: 0x540
	// Line 1912, Address: 0x1c3868, Func Offset: 0x548
	// Line 1916, Address: 0x1c3880, Func Offset: 0x560
	// Func End, Address: 0x1c38a8, Func Offset: 0x588
}

// 
// Start address: 0x1c38b0
void EnemyJinmenControlWander(sfObj* obj)
{
	float* pos;
	float rot[4];
	float quat[4];
	float d;
	float dt;
	EnemyJinmenWork* ew;
	// Line 1920, Address: 0x1c38b0, Func Offset: 0
	// Line 1925, Address: 0x1c38cc, Func Offset: 0x1c
	// Line 1926, Address: 0x1c38d4, Func Offset: 0x24
	// Line 1927, Address: 0x1c38e0, Func Offset: 0x30
	// Line 1928, Address: 0x1c38ec, Func Offset: 0x3c
	// Line 1929, Address: 0x1c38f8, Func Offset: 0x48
	// Line 1931, Address: 0x1c3938, Func Offset: 0x88
	// Line 1932, Address: 0x1c3944, Func Offset: 0x94
	// Line 1933, Address: 0x1c3954, Func Offset: 0xa4
	// Line 1934, Address: 0x1c395c, Func Offset: 0xac
	// Line 1935, Address: 0x1c3968, Func Offset: 0xb8
	// Line 1936, Address: 0x1c3974, Func Offset: 0xc4
	// Line 1937, Address: 0x1c3980, Func Offset: 0xd0
	// Line 1939, Address: 0x1c3988, Func Offset: 0xd8
	// Line 1941, Address: 0x1c3994, Func Offset: 0xe4
	// Line 1942, Address: 0x1c3998, Func Offset: 0xe8
	// Line 1944, Address: 0x1c39cc, Func Offset: 0x11c
	// Line 1945, Address: 0x1c39dc, Func Offset: 0x12c
	// Line 1947, Address: 0x1c39f4, Func Offset: 0x144
	// Line 1948, Address: 0x1c39fc, Func Offset: 0x14c
	// Line 1949, Address: 0x1c3a04, Func Offset: 0x154
	// Line 1950, Address: 0x1c3a08, Func Offset: 0x158
	// Line 1953, Address: 0x1c3a18, Func Offset: 0x168
	// Line 1956, Address: 0x1c3a50, Func Offset: 0x1a0
	// Line 1957, Address: 0x1c3a58, Func Offset: 0x1a8
	// Line 1958, Address: 0x1c3a60, Func Offset: 0x1b0
	// Line 1959, Address: 0x1c3a68, Func Offset: 0x1b8
	// Line 1958, Address: 0x1c3a6c, Func Offset: 0x1bc
	// Line 1959, Address: 0x1c3a70, Func Offset: 0x1c0
	// Line 1960, Address: 0x1c3a98, Func Offset: 0x1e8
	// Line 1961, Address: 0x1c3aa0, Func Offset: 0x1f0
	// Line 1962, Address: 0x1c3aac, Func Offset: 0x1fc
	// Line 1963, Address: 0x1c3ad4, Func Offset: 0x224
	// Line 1964, Address: 0x1c3adc, Func Offset: 0x22c
	// Line 1967, Address: 0x1c3ae8, Func Offset: 0x238
	// Line 1969, Address: 0x1c3af0, Func Offset: 0x240
	// Line 1971, Address: 0x1c3b08, Func Offset: 0x258
	// Line 1973, Address: 0x1c3b10, Func Offset: 0x260
	// Line 1977, Address: 0x1c3b28, Func Offset: 0x278
	// Line 1978, Address: 0x1c3b30, Func Offset: 0x280
	// Line 1980, Address: 0x1c3b50, Func Offset: 0x2a0
	// Line 1981, Address: 0x1c3b5c, Func Offset: 0x2ac
	// Line 1982, Address: 0x1c3b68, Func Offset: 0x2b8
	// Line 1981, Address: 0x1c3b6c, Func Offset: 0x2bc
	// Line 1982, Address: 0x1c3b70, Func Offset: 0x2c0
	// Line 1983, Address: 0x1c3b7c, Func Offset: 0x2cc
	// Line 1984, Address: 0x1c3b8c, Func Offset: 0x2dc
	// Line 1985, Address: 0x1c3b9c, Func Offset: 0x2ec
	// Line 1987, Address: 0x1c3ba4, Func Offset: 0x2f4
	// Line 1988, Address: 0x1c3ba8, Func Offset: 0x2f8
	// Func End, Address: 0x1c3bc8, Func Offset: 0x318
}

// 
// Start address: 0x1c3bd0
void EnemyJinmenControlCaution(sfObj* obj)
{
	EnemyJinmenWork* ew;
	float* pos;
	float* ppos;
	float tpos[4];
	float vec[4];
	float rot[4];
	float dt;
	int lr;
	float r;
	EnemySenseResult sres;
	// Line 1992, Address: 0x1c3bd0, Func Offset: 0
	// Line 1998, Address: 0x1c3bf4, Func Offset: 0x24
	// Line 1999, Address: 0x1c3bfc, Func Offset: 0x2c
	// Line 2000, Address: 0x1c3c08, Func Offset: 0x38
	// Line 2001, Address: 0x1c3c14, Func Offset: 0x44
	// Line 2002, Address: 0x1c3c20, Func Offset: 0x50
	// Line 2003, Address: 0x1c3c2c, Func Offset: 0x5c
	// Line 2004, Address: 0x1c3c38, Func Offset: 0x68
	// Line 2005, Address: 0x1c3c64, Func Offset: 0x94
	// Line 2006, Address: 0x1c3c68, Func Offset: 0x98
	// Line 2007, Address: 0x1c3c74, Func Offset: 0xa4
	// Line 2008, Address: 0x1c3c84, Func Offset: 0xb4
	// Line 2009, Address: 0x1c3c90, Func Offset: 0xc0
	// Line 2010, Address: 0x1c3c98, Func Offset: 0xc8
	// Line 2011, Address: 0x1c3ca4, Func Offset: 0xd4
	// Line 2012, Address: 0x1c3cb0, Func Offset: 0xe0
	// Line 2013, Address: 0x1c3cb8, Func Offset: 0xe8
	// Line 2014, Address: 0x1c3cbc, Func Offset: 0xec
	// Line 2017, Address: 0x1c3cc8, Func Offset: 0xf8
	// Line 2020, Address: 0x1c3d04, Func Offset: 0x134
	// Line 2021, Address: 0x1c3d0c, Func Offset: 0x13c
	// Line 2022, Address: 0x1c3d14, Func Offset: 0x144
	// Line 2023, Address: 0x1c3d18, Func Offset: 0x148
	// Line 2024, Address: 0x1c3d24, Func Offset: 0x154
	// Line 2027, Address: 0x1c3d84, Func Offset: 0x1b4
	// Line 2028, Address: 0x1c3d8c, Func Offset: 0x1bc
	// Line 2029, Address: 0x1c3d98, Func Offset: 0x1c8
	// Line 2030, Address: 0x1c3da0, Func Offset: 0x1d0
	// Line 2032, Address: 0x1c3dc4, Func Offset: 0x1f4
	// Line 2034, Address: 0x1c3dcc, Func Offset: 0x1fc
	// Line 2035, Address: 0x1c3dd4, Func Offset: 0x204
	// Line 2036, Address: 0x1c3dd8, Func Offset: 0x208
	// Line 2039, Address: 0x1c3e20, Func Offset: 0x250
	// Line 2040, Address: 0x1c3e28, Func Offset: 0x258
	// Line 2044, Address: 0x1c3e30, Func Offset: 0x260
	// Line 2047, Address: 0x1c3e6c, Func Offset: 0x29c
	// Line 2048, Address: 0x1c3e74, Func Offset: 0x2a4
	// Line 2049, Address: 0x1c3e80, Func Offset: 0x2b0
	// Line 2051, Address: 0x1c3e88, Func Offset: 0x2b8
	// Line 2053, Address: 0x1c3e9c, Func Offset: 0x2cc
	// Line 2055, Address: 0x1c3ea4, Func Offset: 0x2d4
	// Line 2056, Address: 0x1c3eac, Func Offset: 0x2dc
	// Line 2057, Address: 0x1c3ee0, Func Offset: 0x310
	// Line 2059, Address: 0x1c3ef0, Func Offset: 0x320
	// Line 2060, Address: 0x1c3f18, Func Offset: 0x348
	// Line 2061, Address: 0x1c3f20, Func Offset: 0x350
	// Line 2063, Address: 0x1c3f28, Func Offset: 0x358
	// Line 2064, Address: 0x1c3f30, Func Offset: 0x360
	// Line 2065, Address: 0x1c3f38, Func Offset: 0x368
	// Line 2066, Address: 0x1c3f44, Func Offset: 0x374
	// Line 2067, Address: 0x1c3f50, Func Offset: 0x380
	// Line 2068, Address: 0x1c3f5c, Func Offset: 0x38c
	// Line 2070, Address: 0x1c3f68, Func Offset: 0x398
	// Line 2072, Address: 0x1c3f8c, Func Offset: 0x3bc
	// Line 2073, Address: 0x1c3f94, Func Offset: 0x3c4
	// Line 2074, Address: 0x1c3f98, Func Offset: 0x3c8
	// Line 2075, Address: 0x1c3fb0, Func Offset: 0x3e0
	// Line 2076, Address: 0x1c3fb4, Func Offset: 0x3e4
	// Line 2077, Address: 0x1c3fcc, Func Offset: 0x3fc
	// Line 2078, Address: 0x1c3fe4, Func Offset: 0x414
	// Line 2079, Address: 0x1c3fec, Func Offset: 0x41c
	// Line 2080, Address: 0x1c3ff0, Func Offset: 0x420
	// Line 2081, Address: 0x1c4008, Func Offset: 0x438
	// Line 2082, Address: 0x1c400c, Func Offset: 0x43c
	// Line 2083, Address: 0x1c4024, Func Offset: 0x454
	// Line 2084, Address: 0x1c403c, Func Offset: 0x46c
	// Line 2085, Address: 0x1c4044, Func Offset: 0x474
	// Line 2086, Address: 0x1c4048, Func Offset: 0x478
	// Line 2088, Address: 0x1c4060, Func Offset: 0x490
	// Line 2090, Address: 0x1c4068, Func Offset: 0x498
	// Line 2091, Address: 0x1c4080, Func Offset: 0x4b0
	// Line 2093, Address: 0x1c4088, Func Offset: 0x4b8
	// Line 2095, Address: 0x1c40b0, Func Offset: 0x4e0
	// Line 2096, Address: 0x1c40b8, Func Offset: 0x4e8
	// Line 2100, Address: 0x1c40c0, Func Offset: 0x4f0
	// Line 2101, Address: 0x1c40d4, Func Offset: 0x504
	// Line 2102, Address: 0x1c40f0, Func Offset: 0x520
	// Line 2103, Address: 0x1c4108, Func Offset: 0x538
	// Line 2104, Address: 0x1c410c, Func Offset: 0x53c
	// Line 2106, Address: 0x1c4144, Func Offset: 0x574
	// Line 2107, Address: 0x1c414c, Func Offset: 0x57c
	// Line 2108, Address: 0x1c4158, Func Offset: 0x588
	// Line 2111, Address: 0x1c4164, Func Offset: 0x594
	// Line 2112, Address: 0x1c4168, Func Offset: 0x598
	// Line 2114, Address: 0x1c4188, Func Offset: 0x5b8
	// Line 2115, Address: 0x1c4194, Func Offset: 0x5c4
	// Line 2116, Address: 0x1c41a0, Func Offset: 0x5d0
	// Line 2118, Address: 0x1c41b0, Func Offset: 0x5e0
	// Line 2120, Address: 0x1c41e0, Func Offset: 0x610
	// Line 2122, Address: 0x1c41e8, Func Offset: 0x618
	// Line 2123, Address: 0x1c4200, Func Offset: 0x630
	// Line 2124, Address: 0x1c4210, Func Offset: 0x640
	// Line 2127, Address: 0x1c4218, Func Offset: 0x648
	// Func End, Address: 0x1c4240, Func Offset: 0x670
}

// 
// Start address: 0x1c4240
void EnemyJinmenControlAngry(sfObj* obj)
{
	EnemyJinmenWork* ew;
	EnemySenseResult sres;
	// Line 2131, Address: 0x1c4240, Func Offset: 0
	// Line 2133, Address: 0x1c4254, Func Offset: 0x14
	// Line 2134, Address: 0x1c4260, Func Offset: 0x20
	// Line 2135, Address: 0x1c428c, Func Offset: 0x4c
	// Line 2136, Address: 0x1c4290, Func Offset: 0x50
	// Line 2137, Address: 0x1c429c, Func Offset: 0x5c
	// Line 2138, Address: 0x1c42ac, Func Offset: 0x6c
	// Line 2139, Address: 0x1c42b8, Func Offset: 0x78
	// Line 2140, Address: 0x1c42ec, Func Offset: 0xac
	// Line 2141, Address: 0x1c42f4, Func Offset: 0xb4
	// Line 2142, Address: 0x1c42fc, Func Offset: 0xbc
	// Line 2143, Address: 0x1c4300, Func Offset: 0xc0
	// Line 2144, Address: 0x1c4308, Func Offset: 0xc8
	// Line 2145, Address: 0x1c4328, Func Offset: 0xe8
	// Line 2146, Address: 0x1c4330, Func Offset: 0xf0
	// Line 2147, Address: 0x1c4338, Func Offset: 0xf8
	// Line 2148, Address: 0x1c4344, Func Offset: 0x104
	// Line 2149, Address: 0x1c4348, Func Offset: 0x108
	// Line 2150, Address: 0x1c4354, Func Offset: 0x114
	// Line 2151, Address: 0x1c4360, Func Offset: 0x120
	// Line 2152, Address: 0x1c4368, Func Offset: 0x128
	// Line 2153, Address: 0x1c4370, Func Offset: 0x130
	// Line 2155, Address: 0x1c4378, Func Offset: 0x138
	// Line 2156, Address: 0x1c438c, Func Offset: 0x14c
	// Line 2157, Address: 0x1c4394, Func Offset: 0x154
	// Line 2158, Address: 0x1c4398, Func Offset: 0x158
	// Line 2160, Address: 0x1c43a8, Func Offset: 0x168
	// Line 2164, Address: 0x1c43ec, Func Offset: 0x1ac
	// Line 2165, Address: 0x1c43f4, Func Offset: 0x1b4
	// Line 2167, Address: 0x1c43fc, Func Offset: 0x1bc
	// Line 2168, Address: 0x1c4400, Func Offset: 0x1c0
	// Line 2169, Address: 0x1c4424, Func Offset: 0x1e4
	// Line 2170, Address: 0x1c442c, Func Offset: 0x1ec
	// Line 2171, Address: 0x1c4434, Func Offset: 0x1f4
	// Line 2172, Address: 0x1c443c, Func Offset: 0x1fc
	// Line 2173, Address: 0x1c4440, Func Offset: 0x200
	// Line 2174, Address: 0x1c4454, Func Offset: 0x214
	// Line 2175, Address: 0x1c445c, Func Offset: 0x21c
	// Line 2176, Address: 0x1c4464, Func Offset: 0x224
	// Line 2177, Address: 0x1c4468, Func Offset: 0x228
	// Line 2180, Address: 0x1c44a0, Func Offset: 0x260
	// Line 2181, Address: 0x1c44ac, Func Offset: 0x26c
	// Line 2182, Address: 0x1c44b4, Func Offset: 0x274
	// Line 2183, Address: 0x1c44b8, Func Offset: 0x278
	// Line 2185, Address: 0x1c44c4, Func Offset: 0x284
	// Line 2186, Address: 0x1c44c8, Func Offset: 0x288
	// Func End, Address: 0x1c44e0, Func Offset: 0x2a0
}

// 
// Start address: 0x1c44e0
void EnemyJinmenControlApproach(sfObj* obj)
{
	EnemyJinmenWork* ew;
	float* pos;
	float* ppos;
	float rot[4];
	float dt;
	EnemySenseResult sres;
	// Line 2190, Address: 0x1c44e0, Func Offset: 0
	// Line 2195, Address: 0x1c44fc, Func Offset: 0x1c
	// Line 2196, Address: 0x1c4504, Func Offset: 0x24
	// Line 2197, Address: 0x1c4510, Func Offset: 0x30
	// Line 2198, Address: 0x1c451c, Func Offset: 0x3c
	// Line 2199, Address: 0x1c4528, Func Offset: 0x48
	// Line 2200, Address: 0x1c4534, Func Offset: 0x54
	// Line 2201, Address: 0x1c4544, Func Offset: 0x64
	// Line 2202, Address: 0x1c454c, Func Offset: 0x6c
	// Line 2203, Address: 0x1c4554, Func Offset: 0x74
	// Line 2204, Address: 0x1c4558, Func Offset: 0x78
	// Line 2205, Address: 0x1c457c, Func Offset: 0x9c
	// Line 2206, Address: 0x1c4580, Func Offset: 0xa0
	// Line 2207, Address: 0x1c458c, Func Offset: 0xac
	// Line 2208, Address: 0x1c459c, Func Offset: 0xbc
	// Line 2209, Address: 0x1c45a8, Func Offset: 0xc8
	// Line 2210, Address: 0x1c45b0, Func Offset: 0xd0
	// Line 2211, Address: 0x1c45bc, Func Offset: 0xdc
	// Line 2212, Address: 0x1c45c8, Func Offset: 0xe8
	// Line 2213, Address: 0x1c45d0, Func Offset: 0xf0
	// Line 2216, Address: 0x1c45d8, Func Offset: 0xf8
	// Line 2218, Address: 0x1c45fc, Func Offset: 0x11c
	// Line 2221, Address: 0x1c4604, Func Offset: 0x124
	// Line 2222, Address: 0x1c4608, Func Offset: 0x128
	// Line 2224, Address: 0x1c4628, Func Offset: 0x148
	// Line 2225, Address: 0x1c4634, Func Offset: 0x154
	// Line 2226, Address: 0x1c4640, Func Offset: 0x160
	// Line 2228, Address: 0x1c4650, Func Offset: 0x170
	// Line 2230, Address: 0x1c4680, Func Offset: 0x1a0
	// Line 2232, Address: 0x1c4688, Func Offset: 0x1a8
	// Line 2233, Address: 0x1c46a0, Func Offset: 0x1c0
	// Line 2234, Address: 0x1c46b0, Func Offset: 0x1d0
	// Line 2235, Address: 0x1c46b8, Func Offset: 0x1d8
	// Line 2237, Address: 0x1c46e0, Func Offset: 0x200
	// Line 2240, Address: 0x1c46e8, Func Offset: 0x208
	// Func End, Address: 0x1c4708, Func Offset: 0x228
}

// 
// Start address: 0x1c4710
void EnemyJinmenControlAttack(sfObj* obj)
{
	EnemyJinmenWork* ew;
	float* pos;
	float dt;
	int wp_type;
	int wp_kind;
	float vec[4];
	// Line 2244, Address: 0x1c4710, Func Offset: 0
	// Line 2248, Address: 0x1c4728, Func Offset: 0x18
	// Line 2249, Address: 0x1c4734, Func Offset: 0x24
	// Line 2250, Address: 0x1c473c, Func Offset: 0x2c
	// Line 2251, Address: 0x1c4748, Func Offset: 0x38
	// Line 2252, Address: 0x1c476c, Func Offset: 0x5c
	// Line 2253, Address: 0x1c4770, Func Offset: 0x60
	// Line 2255, Address: 0x1c4778, Func Offset: 0x68
	// Line 2256, Address: 0x1c4784, Func Offset: 0x74
	// Line 2257, Address: 0x1c4794, Func Offset: 0x84
	// Line 2258, Address: 0x1c47a0, Func Offset: 0x90
	// Line 2259, Address: 0x1c47ac, Func Offset: 0x9c
	// Line 2262, Address: 0x1c47b4, Func Offset: 0xa4
	// Line 2263, Address: 0x1c47c0, Func Offset: 0xb0
	// Line 2269, Address: 0x1c4810, Func Offset: 0x100
	// Line 2271, Address: 0x1c4830, Func Offset: 0x120
	// Line 2274, Address: 0x1c4838, Func Offset: 0x128
	// Line 2277, Address: 0x1c4840, Func Offset: 0x130
	// Line 2279, Address: 0x1c4848, Func Offset: 0x138
	// Line 2281, Address: 0x1c484c, Func Offset: 0x13c
	// Line 2282, Address: 0x1c4850, Func Offset: 0x140
	// Line 2283, Address: 0x1c4854, Func Offset: 0x144
	// Line 2284, Address: 0x1c4860, Func Offset: 0x150
	// Line 2286, Address: 0x1c486c, Func Offset: 0x15c
	// Line 2287, Address: 0x1c4878, Func Offset: 0x168
	// Line 2288, Address: 0x1c488c, Func Offset: 0x17c
	// Line 2289, Address: 0x1c4894, Func Offset: 0x184
	// Line 2290, Address: 0x1c48a0, Func Offset: 0x190
	// Line 2292, Address: 0x1c48ac, Func Offset: 0x19c
	// Line 2293, Address: 0x1c48b4, Func Offset: 0x1a4
	// Line 2295, Address: 0x1c48b8, Func Offset: 0x1a8
	// Line 2296, Address: 0x1c48d4, Func Offset: 0x1c4
	// Line 2298, Address: 0x1c48ec, Func Offset: 0x1dc
	// Line 2299, Address: 0x1c48f4, Func Offset: 0x1e4
	// Line 2300, Address: 0x1c48f8, Func Offset: 0x1e8
	// Line 2301, Address: 0x1c4914, Func Offset: 0x204
	// Line 2304, Address: 0x1c492c, Func Offset: 0x21c
	// Line 2305, Address: 0x1c4930, Func Offset: 0x220
	// Line 2306, Address: 0x1c4940, Func Offset: 0x230
	// Line 2309, Address: 0x1c4960, Func Offset: 0x250
	// Line 2310, Address: 0x1c4968, Func Offset: 0x258
	// Line 2312, Address: 0x1c497c, Func Offset: 0x26c
	// Line 2313, Address: 0x1c4990, Func Offset: 0x280
	// Line 2314, Address: 0x1c49c0, Func Offset: 0x2b0
	// Line 2315, Address: 0x1c49cc, Func Offset: 0x2bc
	// Line 2316, Address: 0x1c49d0, Func Offset: 0x2c0
	// Func End, Address: 0x1c49ec, Func Offset: 0x2dc
}

// 
// Start address: 0x1c49f0
void EnemyJinmenControlAway(sfObj* obj)
{
	EnemyJinmenWork* ew;
	float* pos;
	float* ppos;
	float rot[4];
	float dt;
	float d;
	EnemySenseResult sres;
	// Line 2320, Address: 0x1c49f0, Func Offset: 0
	// Line 2325, Address: 0x1c4a0c, Func Offset: 0x1c
	// Line 2326, Address: 0x1c4a14, Func Offset: 0x24
	// Line 2327, Address: 0x1c4a20, Func Offset: 0x30
	// Line 2328, Address: 0x1c4a2c, Func Offset: 0x3c
	// Line 2329, Address: 0x1c4a38, Func Offset: 0x48
	// Line 2330, Address: 0x1c4a44, Func Offset: 0x54
	// Line 2331, Address: 0x1c4a84, Func Offset: 0x94
	// Line 2332, Address: 0x1c4a88, Func Offset: 0x98
	// Line 2333, Address: 0x1c4a94, Func Offset: 0xa4
	// Line 2334, Address: 0x1c4aa4, Func Offset: 0xb4
	// Line 2335, Address: 0x1c4ab0, Func Offset: 0xc0
	// Line 2336, Address: 0x1c4abc, Func Offset: 0xcc
	// Line 2337, Address: 0x1c4ac4, Func Offset: 0xd4
	// Line 2340, Address: 0x1c4b30, Func Offset: 0x140
	// Line 2341, Address: 0x1c4b38, Func Offset: 0x148
	// Line 2342, Address: 0x1c4b44, Func Offset: 0x154
	// Line 2343, Address: 0x1c4b4c, Func Offset: 0x15c
	// Line 2344, Address: 0x1c4b50, Func Offset: 0x160
	// Line 2345, Address: 0x1c4b58, Func Offset: 0x168
	// Line 2346, Address: 0x1c4b64, Func Offset: 0x174
	// Line 2347, Address: 0x1c4b70, Func Offset: 0x180
	// Line 2346, Address: 0x1c4b74, Func Offset: 0x184
	// Line 2347, Address: 0x1c4b80, Func Offset: 0x190
	// Line 2351, Address: 0x1c4b88, Func Offset: 0x198
	// Line 2352, Address: 0x1c4b94, Func Offset: 0x1a4
	// Line 2353, Address: 0x1c4bac, Func Offset: 0x1bc
	// Line 2354, Address: 0x1c4bb4, Func Offset: 0x1c4
	// Line 2355, Address: 0x1c4bbc, Func Offset: 0x1cc
	// Line 2356, Address: 0x1c4bc0, Func Offset: 0x1d0
	// Line 2357, Address: 0x1c4bc4, Func Offset: 0x1d4
	// Line 2356, Address: 0x1c4bc8, Func Offset: 0x1d8
	// Line 2357, Address: 0x1c4bcc, Func Offset: 0x1dc
	// Line 2358, Address: 0x1c4bd8, Func Offset: 0x1e8
	// Line 2359, Address: 0x1c4bf0, Func Offset: 0x200
	// Line 2363, Address: 0x1c4c20, Func Offset: 0x230
	// Line 2366, Address: 0x1c4c60, Func Offset: 0x270
	// Line 2367, Address: 0x1c4c68, Func Offset: 0x278
	// Line 2368, Address: 0x1c4c74, Func Offset: 0x284
	// Line 2369, Address: 0x1c4c80, Func Offset: 0x290
	// Line 2371, Address: 0x1c4c8c, Func Offset: 0x29c
	// Line 2372, Address: 0x1c4c98, Func Offset: 0x2a8
	// Line 2374, Address: 0x1c4ca4, Func Offset: 0x2b4
	// Line 2375, Address: 0x1c4cb0, Func Offset: 0x2c0
	// Line 2376, Address: 0x1c4cc4, Func Offset: 0x2d4
	// Line 2377, Address: 0x1c4ccc, Func Offset: 0x2dc
	// Line 2378, Address: 0x1c4cd8, Func Offset: 0x2e8
	// Line 2379, Address: 0x1c4ce4, Func Offset: 0x2f4
	// Line 2378, Address: 0x1c4ce8, Func Offset: 0x2f8
	// Line 2379, Address: 0x1c4cf4, Func Offset: 0x304
	// Line 2383, Address: 0x1c4cfc, Func Offset: 0x30c
	// Line 2384, Address: 0x1c4d04, Func Offset: 0x314
	// Line 2385, Address: 0x1c4d08, Func Offset: 0x318
	// Line 2387, Address: 0x1c4d20, Func Offset: 0x330
	// Line 2389, Address: 0x1c4d28, Func Offset: 0x338
	// Line 2391, Address: 0x1c4d40, Func Offset: 0x350
	// Line 2393, Address: 0x1c4d48, Func Offset: 0x358
	// Line 2394, Address: 0x1c4d50, Func Offset: 0x360
	// Line 2396, Address: 0x1c4d70, Func Offset: 0x380
	// Line 2397, Address: 0x1c4d7c, Func Offset: 0x38c
	// Line 2399, Address: 0x1c4d8c, Func Offset: 0x39c
	// Line 2401, Address: 0x1c4dbc, Func Offset: 0x3cc
	// Line 2403, Address: 0x1c4dc4, Func Offset: 0x3d4
	// Line 2404, Address: 0x1c4de0, Func Offset: 0x3f0
	// Line 2405, Address: 0x1c4df0, Func Offset: 0x400
	// Line 2408, Address: 0x1c4df8, Func Offset: 0x408
	// Func End, Address: 0x1c4e18, Func Offset: 0x428
}

// 
// Start address: 0x1c4e20
void EnemyJinmenControlWild(sfObj* obj)
{
	float* pos;
	float rot[4];
	float quat[4];
	float d;
	float dt;
	EnemyJinmenWork* ew;
	// Line 2412, Address: 0x1c4e20, Func Offset: 0
	// Line 2417, Address: 0x1c4e38, Func Offset: 0x18
	// Line 2418, Address: 0x1c4e40, Func Offset: 0x20
	// Line 2419, Address: 0x1c4e4c, Func Offset: 0x2c
	// Line 2420, Address: 0x1c4e58, Func Offset: 0x38
	// Line 2421, Address: 0x1c4e64, Func Offset: 0x44
	// Line 2423, Address: 0x1c4e98, Func Offset: 0x78
	// Line 2424, Address: 0x1c4ea0, Func Offset: 0x80
	// Line 2425, Address: 0x1c4eb0, Func Offset: 0x90
	// Line 2426, Address: 0x1c4eb8, Func Offset: 0x98
	// Line 2427, Address: 0x1c4ec4, Func Offset: 0xa4
	// Line 2428, Address: 0x1c4ed0, Func Offset: 0xb0
	// Line 2429, Address: 0x1c4edc, Func Offset: 0xbc
	// Line 2431, Address: 0x1c4ee4, Func Offset: 0xc4
	// Line 2434, Address: 0x1c4ef0, Func Offset: 0xd0
	// Line 2436, Address: 0x1c4f24, Func Offset: 0x104
	// Line 2437, Address: 0x1c4f34, Func Offset: 0x114
	// Line 2439, Address: 0x1c4f4c, Func Offset: 0x12c
	// Line 2440, Address: 0x1c4f54, Func Offset: 0x134
	// Line 2441, Address: 0x1c4f5c, Func Offset: 0x13c
	// Line 2442, Address: 0x1c4f60, Func Offset: 0x140
	// Line 2445, Address: 0x1c4f70, Func Offset: 0x150
	// Line 2446, Address: 0x1c4f80, Func Offset: 0x160
	// Line 2447, Address: 0x1c4f88, Func Offset: 0x168
	// Line 2449, Address: 0x1c4f90, Func Offset: 0x170
	// Line 2452, Address: 0x1c4fc8, Func Offset: 0x1a8
	// Line 2453, Address: 0x1c4fd0, Func Offset: 0x1b0
	// Line 2454, Address: 0x1c4fe8, Func Offset: 0x1c8
	// Line 2455, Address: 0x1c4ff0, Func Offset: 0x1d0
	// Line 2456, Address: 0x1c5020, Func Offset: 0x200
	// Line 2457, Address: 0x1c502c, Func Offset: 0x20c
	// Line 2460, Address: 0x1c5038, Func Offset: 0x218
	// Line 2462, Address: 0x1c5040, Func Offset: 0x220
	// Line 2464, Address: 0x1c5054, Func Offset: 0x234
	// Line 2465, Address: 0x1c505c, Func Offset: 0x23c
	// Line 2466, Address: 0x1c5060, Func Offset: 0x240
	// Line 2467, Address: 0x1c5070, Func Offset: 0x250
	// Line 2469, Address: 0x1c5080, Func Offset: 0x260
	// Line 2471, Address: 0x1c50a0, Func Offset: 0x280
	// Line 2472, Address: 0x1c50ac, Func Offset: 0x28c
	// Line 2473, Address: 0x1c50b8, Func Offset: 0x298
	// Line 2472, Address: 0x1c50bc, Func Offset: 0x29c
	// Line 2473, Address: 0x1c50c0, Func Offset: 0x2a0
	// Line 2474, Address: 0x1c50d0, Func Offset: 0x2b0
	// Line 2475, Address: 0x1c50d8, Func Offset: 0x2b8
	// Line 2476, Address: 0x1c50e4, Func Offset: 0x2c4
	// Line 2477, Address: 0x1c50e8, Func Offset: 0x2c8
	// Func End, Address: 0x1c5104, Func Offset: 0x2e4
}

// 
// Start address: 0x1c5110
void EnemyJinmenControlCaution4(sfObj* obj)
{
	EnemyJinmenWork* ew;
	float* pos;
	float vec[4];
	float rot[4];
	float dt;
	// Line 2481, Address: 0x1c5110, Func Offset: 0
	// Line 2487, Address: 0x1c5128, Func Offset: 0x18
	// Line 2488, Address: 0x1c5134, Func Offset: 0x24
	// Line 2489, Address: 0x1c5140, Func Offset: 0x30
	// Line 2490, Address: 0x1c514c, Func Offset: 0x3c
	// Line 2491, Address: 0x1c5158, Func Offset: 0x48
	// Line 2492, Address: 0x1c518c, Func Offset: 0x7c
	// Line 2493, Address: 0x1c5190, Func Offset: 0x80
	// Line 2494, Address: 0x1c5198, Func Offset: 0x88
	// Line 2495, Address: 0x1c51a4, Func Offset: 0x94
	// Line 2496, Address: 0x1c51b0, Func Offset: 0xa0
	// Line 2497, Address: 0x1c51c0, Func Offset: 0xb0
	// Line 2498, Address: 0x1c51c8, Func Offset: 0xb8
	// Line 2499, Address: 0x1c51d4, Func Offset: 0xc4
	// Line 2500, Address: 0x1c51dc, Func Offset: 0xcc
	// Line 2501, Address: 0x1c51e8, Func Offset: 0xd8
	// Line 2500, Address: 0x1c51ec, Func Offset: 0xdc
	// Line 2501, Address: 0x1c51f8, Func Offset: 0xe8
	// Line 2502, Address: 0x1c5208, Func Offset: 0xf8
	// Line 2503, Address: 0x1c5210, Func Offset: 0x100
	// Line 2505, Address: 0x1c5218, Func Offset: 0x108
	// Line 2506, Address: 0x1c5220, Func Offset: 0x110
	// Line 2508, Address: 0x1c5228, Func Offset: 0x118
	// Line 2511, Address: 0x1c5258, Func Offset: 0x148
	// Line 2512, Address: 0x1c5264, Func Offset: 0x154
	// Line 2513, Address: 0x1c5270, Func Offset: 0x160
	// Line 2515, Address: 0x1c5278, Func Offset: 0x168
	// Line 2516, Address: 0x1c5294, Func Offset: 0x184
	// Line 2517, Address: 0x1c52a4, Func Offset: 0x194
	// Line 2519, Address: 0x1c52d8, Func Offset: 0x1c8
	// Line 2520, Address: 0x1c52e4, Func Offset: 0x1d4
	// Line 2521, Address: 0x1c52f0, Func Offset: 0x1e0
	// Line 2523, Address: 0x1c52fc, Func Offset: 0x1ec
	// Line 2525, Address: 0x1c5304, Func Offset: 0x1f4
	// Line 2526, Address: 0x1c5308, Func Offset: 0x1f8
	// Line 2527, Address: 0x1c5320, Func Offset: 0x210
	// Line 2528, Address: 0x1c5340, Func Offset: 0x230
	// Line 2529, Address: 0x1c5360, Func Offset: 0x250
	// Line 2530, Address: 0x1c5368, Func Offset: 0x258
	// Line 2531, Address: 0x1c5370, Func Offset: 0x260
	// Line 2536, Address: 0x1c5378, Func Offset: 0x268
	// Line 2538, Address: 0x1c5390, Func Offset: 0x280
	// Line 2540, Address: 0x1c5398, Func Offset: 0x288
	// Line 2544, Address: 0x1c53b0, Func Offset: 0x2a0
	// Func End, Address: 0x1c53cc, Func Offset: 0x2bc
}

// 
// Start address: 0x1c53d0
void EnemyJinmenControlKabaddi(sfObj* obj)
{
	EnemyJinmenWork* ew;
	float* pos;
	float* ppos;
	float tpos[4];
	float vec[4];
	float rot[4];
	float dt;
	float pd;
	int lr;
	// Line 2548, Address: 0x1c53d0, Func Offset: 0
	// Line 2555, Address: 0x1c53f0, Func Offset: 0x20
	// Line 2556, Address: 0x1c53fc, Func Offset: 0x2c
	// Line 2557, Address: 0x1c5408, Func Offset: 0x38
	// Line 2558, Address: 0x1c5414, Func Offset: 0x44
	// Line 2559, Address: 0x1c541c, Func Offset: 0x4c
	// Line 2558, Address: 0x1c5420, Func Offset: 0x50
	// Line 2559, Address: 0x1c5424, Func Offset: 0x54
	// Line 2560, Address: 0x1c542c, Func Offset: 0x5c
	// Line 2561, Address: 0x1c5438, Func Offset: 0x68
	// Line 2563, Address: 0x1c5478, Func Offset: 0xa8
	// Line 2564, Address: 0x1c5488, Func Offset: 0xb8
	// Line 2566, Address: 0x1c5490, Func Offset: 0xc0
	// Line 2567, Address: 0x1c549c, Func Offset: 0xcc
	// Line 2568, Address: 0x1c54a8, Func Offset: 0xd8
	// Line 2569, Address: 0x1c54b4, Func Offset: 0xe4
	// Line 2570, Address: 0x1c54c4, Func Offset: 0xf4
	// Line 2571, Address: 0x1c54cc, Func Offset: 0xfc
	// Line 2572, Address: 0x1c54e0, Func Offset: 0x110
	// Line 2573, Address: 0x1c54e8, Func Offset: 0x118
	// Line 2574, Address: 0x1c5500, Func Offset: 0x130
	// Line 2576, Address: 0x1c5510, Func Offset: 0x140
	// Line 2577, Address: 0x1c5518, Func Offset: 0x148
	// Line 2578, Address: 0x1c5520, Func Offset: 0x150
	// Line 2579, Address: 0x1c5528, Func Offset: 0x158
	// Line 2580, Address: 0x1c5534, Func Offset: 0x164
	// Line 2581, Address: 0x1c5538, Func Offset: 0x168
	// Line 2582, Address: 0x1c5540, Func Offset: 0x170
	// Line 2583, Address: 0x1c5548, Func Offset: 0x178
	// Line 2585, Address: 0x1c5550, Func Offset: 0x180
	// Line 2586, Address: 0x1c5564, Func Offset: 0x194
	// Line 2587, Address: 0x1c556c, Func Offset: 0x19c
	// Line 2588, Address: 0x1c5570, Func Offset: 0x1a0
	// Line 2591, Address: 0x1c5580, Func Offset: 0x1b0
	// Line 2594, Address: 0x1c55c8, Func Offset: 0x1f8
	// Line 2595, Address: 0x1c55d4, Func Offset: 0x204
	// Line 2596, Address: 0x1c55e0, Func Offset: 0x210
	// Line 2598, Address: 0x1c55e8, Func Offset: 0x218
	// Line 2599, Address: 0x1c55f8, Func Offset: 0x228
	// Line 2600, Address: 0x1c562c, Func Offset: 0x25c
	// Line 2601, Address: 0x1c5634, Func Offset: 0x264
	// Line 2602, Address: 0x1c563c, Func Offset: 0x26c
	// Line 2604, Address: 0x1c5688, Func Offset: 0x2b8
	// Line 2605, Address: 0x1c5694, Func Offset: 0x2c4
	// Line 2606, Address: 0x1c5698, Func Offset: 0x2c8
	// Line 2607, Address: 0x1c56a4, Func Offset: 0x2d4
	// Line 2609, Address: 0x1c56ac, Func Offset: 0x2dc
	// Line 2610, Address: 0x1c56b0, Func Offset: 0x2e0
	// Line 2614, Address: 0x1c56e0, Func Offset: 0x310
	// Line 2615, Address: 0x1c56e8, Func Offset: 0x318
	// Line 2617, Address: 0x1c56f0, Func Offset: 0x320
	// Line 2620, Address: 0x1c5724, Func Offset: 0x354
	// Line 2621, Address: 0x1c5740, Func Offset: 0x370
	// Line 2622, Address: 0x1c574c, Func Offset: 0x37c
	// Line 2623, Address: 0x1c5758, Func Offset: 0x388
	// Line 2625, Address: 0x1c576c, Func Offset: 0x39c
	// Line 2626, Address: 0x1c5774, Func Offset: 0x3a4
	// Line 2627, Address: 0x1c578c, Func Offset: 0x3bc
	// Line 2629, Address: 0x1c579c, Func Offset: 0x3cc
	// Line 2630, Address: 0x1c57a0, Func Offset: 0x3d0
	// Line 2631, Address: 0x1c57a8, Func Offset: 0x3d8
	// Line 2632, Address: 0x1c57b0, Func Offset: 0x3e0
	// Line 2633, Address: 0x1c57b8, Func Offset: 0x3e8
	// Line 2634, Address: 0x1c57c4, Func Offset: 0x3f4
	// Line 2635, Address: 0x1c57c8, Func Offset: 0x3f8
	// Line 2636, Address: 0x1c57d0, Func Offset: 0x400
	// Line 2638, Address: 0x1c57d8, Func Offset: 0x408
	// Line 2641, Address: 0x1c57e8, Func Offset: 0x418
	// Line 2642, Address: 0x1c5818, Func Offset: 0x448
	// Line 2643, Address: 0x1c5820, Func Offset: 0x450
	// Line 2645, Address: 0x1c5828, Func Offset: 0x458
	// Line 2646, Address: 0x1c5838, Func Offset: 0x468
	// Line 2648, Address: 0x1c5848, Func Offset: 0x478
	// Line 2650, Address: 0x1c5868, Func Offset: 0x498
	// Line 2651, Address: 0x1c5880, Func Offset: 0x4b0
	// Line 2653, Address: 0x1c5894, Func Offset: 0x4c4
	// Line 2654, Address: 0x1c5898, Func Offset: 0x4c8
	// Line 2656, Address: 0x1c58a0, Func Offset: 0x4d0
	// Line 2658, Address: 0x1c58b4, Func Offset: 0x4e4
	// Line 2659, Address: 0x1c58bc, Func Offset: 0x4ec
	// Line 2660, Address: 0x1c58c0, Func Offset: 0x4f0
	// Line 2661, Address: 0x1c58d8, Func Offset: 0x508
	// Line 2662, Address: 0x1c58dc, Func Offset: 0x50c
	// Line 2663, Address: 0x1c58f4, Func Offset: 0x524
	// Line 2664, Address: 0x1c5904, Func Offset: 0x534
	// Line 2665, Address: 0x1c5910, Func Offset: 0x540
	// Line 2666, Address: 0x1c5924, Func Offset: 0x554
	// Line 2667, Address: 0x1c5928, Func Offset: 0x558
	// Line 2668, Address: 0x1c5944, Func Offset: 0x574
	// Line 2670, Address: 0x1c5964, Func Offset: 0x594
	// Line 2672, Address: 0x1c5970, Func Offset: 0x5a0
	// Line 2673, Address: 0x1c597c, Func Offset: 0x5ac
	// Line 2674, Address: 0x1c59ac, Func Offset: 0x5dc
	// Line 2675, Address: 0x1c59b8, Func Offset: 0x5e8
	// Func End, Address: 0x1c59dc, Func Offset: 0x60c
}

// 
// Start address: 0x1c59e0
void EnemyJinmenControlSearch(sfObj* obj)
{
	EnemyJinmenWork* ew;
	float* pos;
	float dt;
	EnemySenseResult sres;
	// Line 2679, Address: 0x1c59e0, Func Offset: 0
	// Line 2683, Address: 0x1c59f8, Func Offset: 0x18
	// Line 2684, Address: 0x1c5a04, Func Offset: 0x24
	// Line 2685, Address: 0x1c5a10, Func Offset: 0x30
	// Line 2686, Address: 0x1c5a20, Func Offset: 0x40
	// Line 2685, Address: 0x1c5a24, Func Offset: 0x44
	// Line 2686, Address: 0x1c5a28, Func Offset: 0x48
	// Line 2687, Address: 0x1c5a34, Func Offset: 0x54
	// Line 2689, Address: 0x1c5a48, Func Offset: 0x68
	// Line 2690, Address: 0x1c5a54, Func Offset: 0x74
	// Line 2692, Address: 0x1c5a90, Func Offset: 0xb0
	// Line 2693, Address: 0x1c5a98, Func Offset: 0xb8
	// Line 2694, Address: 0x1c5aa4, Func Offset: 0xc4
	// Line 2695, Address: 0x1c5ab0, Func Offset: 0xd0
	// Line 2696, Address: 0x1c5ac0, Func Offset: 0xe0
	// Line 2697, Address: 0x1c5ac8, Func Offset: 0xe8
	// Line 2698, Address: 0x1c5ad0, Func Offset: 0xf0
	// Line 2701, Address: 0x1c5b08, Func Offset: 0x128
	// Line 2702, Address: 0x1c5b14, Func Offset: 0x134
	// Line 2703, Address: 0x1c5b20, Func Offset: 0x140
	// Line 2705, Address: 0x1c5b28, Func Offset: 0x148
	// Line 2706, Address: 0x1c5b34, Func Offset: 0x154
	// Line 2707, Address: 0x1c5b40, Func Offset: 0x160
	// Line 2706, Address: 0x1c5b44, Func Offset: 0x164
	// Line 2707, Address: 0x1c5b50, Func Offset: 0x170
	// Line 2708, Address: 0x1c5b58, Func Offset: 0x178
	// Line 2710, Address: 0x1c5b60, Func Offset: 0x180
	// Line 2711, Address: 0x1c5b7c, Func Offset: 0x19c
	// Line 2712, Address: 0x1c5b9c, Func Offset: 0x1bc
	// Line 2713, Address: 0x1c5ba4, Func Offset: 0x1c4
	// Line 2714, Address: 0x1c5bb0, Func Offset: 0x1d0
	// Line 2715, Address: 0x1c5bb8, Func Offset: 0x1d8
	// Line 2717, Address: 0x1c5bc4, Func Offset: 0x1e4
	// Line 2718, Address: 0x1c5be0, Func Offset: 0x200
	// Line 2720, Address: 0x1c5be8, Func Offset: 0x208
	// Line 2722, Address: 0x1c5bf0, Func Offset: 0x210
	// Line 2723, Address: 0x1c5c04, Func Offset: 0x224
	// Line 2724, Address: 0x1c5c0c, Func Offset: 0x22c
	// Line 2725, Address: 0x1c5c10, Func Offset: 0x230
	// Line 2726, Address: 0x1c5c1c, Func Offset: 0x23c
	// Line 2727, Address: 0x1c5c2c, Func Offset: 0x24c
	// Line 2728, Address: 0x1c5c48, Func Offset: 0x268
	// Line 2729, Address: 0x1c5c50, Func Offset: 0x270
	// Line 2730, Address: 0x1c5c78, Func Offset: 0x298
	// Line 2731, Address: 0x1c5c80, Func Offset: 0x2a0
	// Line 2732, Address: 0x1c5c8c, Func Offset: 0x2ac
	// Line 2733, Address: 0x1c5c98, Func Offset: 0x2b8
	// Line 2734, Address: 0x1c5ca4, Func Offset: 0x2c4
	// Line 2736, Address: 0x1c5cb0, Func Offset: 0x2d0
	// Line 2737, Address: 0x1c5cb8, Func Offset: 0x2d8
	// Line 2739, Address: 0x1c5cc0, Func Offset: 0x2e0
	// Line 2741, Address: 0x1c5cd0, Func Offset: 0x2f0
	// Line 2744, Address: 0x1c5d08, Func Offset: 0x328
	// Line 2745, Address: 0x1c5d10, Func Offset: 0x330
	// Line 2748, Address: 0x1c5d18, Func Offset: 0x338
	// Line 2749, Address: 0x1c5d38, Func Offset: 0x358
	// Line 2750, Address: 0x1c5d44, Func Offset: 0x364
	// Line 2751, Address: 0x1c5d60, Func Offset: 0x380
	// Line 2755, Address: 0x1c5d68, Func Offset: 0x388
	// Func End, Address: 0x1c5d84, Func Offset: 0x3a4
}

// 
// Start address: 0x1c5d90
void EnemyJinmenControlGather(sfObj* obj)
{
	EnemyJinmenWork* ew;
	float* pos;
	float* ppos;
	float* target;
	float rot[4];
	float tpos[4];
	float vec[4];
	float dt;
	int id;
	// Line 2759, Address: 0x1c5d90, Func Offset: 0
	// Line 2766, Address: 0x1c5db0, Func Offset: 0x20
	// Line 2767, Address: 0x1c5dbc, Func Offset: 0x2c
	// Line 2768, Address: 0x1c5dc8, Func Offset: 0x38
	// Line 2769, Address: 0x1c5dd4, Func Offset: 0x44
	// Line 2770, Address: 0x1c5de4, Func Offset: 0x54
	// Line 2772, Address: 0x1c5df8, Func Offset: 0x68
	// Line 2773, Address: 0x1c5e00, Func Offset: 0x70
	// Line 2774, Address: 0x1c5e0c, Func Offset: 0x7c
	// Line 2775, Address: 0x1c5e44, Func Offset: 0xb4
	// Line 2776, Address: 0x1c5e48, Func Offset: 0xb8
	// Line 2777, Address: 0x1c5e54, Func Offset: 0xc4
	// Line 2778, Address: 0x1c5e5c, Func Offset: 0xcc
	// Line 2779, Address: 0x1c5e64, Func Offset: 0xd4
	// Line 2780, Address: 0x1c5e6c, Func Offset: 0xdc
	// Line 2781, Address: 0x1c5e70, Func Offset: 0xe0
	// Line 2782, Address: 0x1c5e7c, Func Offset: 0xec
	// Line 2783, Address: 0x1c5e88, Func Offset: 0xf8
	// Line 2784, Address: 0x1c5e90, Func Offset: 0x100
	// Line 2785, Address: 0x1c5e9c, Func Offset: 0x10c
	// Line 2786, Address: 0x1c5eb0, Func Offset: 0x120
	// Line 2787, Address: 0x1c5eb8, Func Offset: 0x128
	// Line 2789, Address: 0x1c5ec0, Func Offset: 0x130
	// Line 2791, Address: 0x1c5ee4, Func Offset: 0x154
	// Line 2792, Address: 0x1c5ef8, Func Offset: 0x168
	// Line 2793, Address: 0x1c5f20, Func Offset: 0x190
	// Line 2794, Address: 0x1c5f28, Func Offset: 0x198
	// Line 2797, Address: 0x1c5f30, Func Offset: 0x1a0
	// Line 2798, Address: 0x1c5f38, Func Offset: 0x1a8
	// Line 2799, Address: 0x1c5f44, Func Offset: 0x1b4
	// Line 2800, Address: 0x1c5f4c, Func Offset: 0x1bc
	// Line 2801, Address: 0x1c5f54, Func Offset: 0x1c4
	// Line 2802, Address: 0x1c5f58, Func Offset: 0x1c8
	// Line 2803, Address: 0x1c5f6c, Func Offset: 0x1dc
	// Line 2804, Address: 0x1c5f74, Func Offset: 0x1e4
	// Line 2805, Address: 0x1c5f78, Func Offset: 0x1e8
	// Line 2806, Address: 0x1c5f84, Func Offset: 0x1f4
	// Line 2807, Address: 0x1c5f94, Func Offset: 0x204
	// Line 2808, Address: 0x1c5fa0, Func Offset: 0x210
	// Line 2809, Address: 0x1c5fa8, Func Offset: 0x218
	// Line 2810, Address: 0x1c5fb4, Func Offset: 0x224
	// Line 2809, Address: 0x1c5fb8, Func Offset: 0x228
	// Line 2810, Address: 0x1c5fc8, Func Offset: 0x238
	// Line 2813, Address: 0x1c5fd0, Func Offset: 0x240
	// Line 2816, Address: 0x1c5fe0, Func Offset: 0x250
	// Line 2817, Address: 0x1c5fec, Func Offset: 0x25c
	// Line 2821, Address: 0x1c6038, Func Offset: 0x2a8
	// Line 2822, Address: 0x1c6040, Func Offset: 0x2b0
	// Line 2824, Address: 0x1c6048, Func Offset: 0x2b8
	// Line 2825, Address: 0x1c6060, Func Offset: 0x2d0
	// Line 2826, Address: 0x1c6068, Func Offset: 0x2d8
	// Line 2828, Address: 0x1c6070, Func Offset: 0x2e0
	// Line 2829, Address: 0x1c608c, Func Offset: 0x2fc
	// Line 2833, Address: 0x1c6098, Func Offset: 0x308
	// Line 2834, Address: 0x1c60a8, Func Offset: 0x318
	// Line 2836, Address: 0x1c60b8, Func Offset: 0x328
	// Line 2837, Address: 0x1c60d8, Func Offset: 0x348
	// Line 2838, Address: 0x1c60e4, Func Offset: 0x354
	// Line 2839, Address: 0x1c60f4, Func Offset: 0x364
	// Line 2840, Address: 0x1c60fc, Func Offset: 0x36c
	// Line 2841, Address: 0x1c6100, Func Offset: 0x370
	// Func End, Address: 0x1c6124, Func Offset: 0x394
}

// 
// Start address: 0x1c6130
void EnemyJinmenControlApproach4(sfObj* obj)
{
	EnemyJinmenWork* ew;
	float* pos;
	float* ppos;
	float tpos[4];
	float rot[4];
	float dt;
	// Line 2845, Address: 0x1c6130, Func Offset: 0
	// Line 2851, Address: 0x1c614c, Func Offset: 0x1c
	// Line 2852, Address: 0x1c6154, Func Offset: 0x24
	// Line 2853, Address: 0x1c6160, Func Offset: 0x30
	// Line 2854, Address: 0x1c616c, Func Offset: 0x3c
	// Line 2855, Address: 0x1c6178, Func Offset: 0x48
	// Line 2856, Address: 0x1c6184, Func Offset: 0x54
	// Line 2857, Address: 0x1c6194, Func Offset: 0x64
	// Line 2858, Address: 0x1c619c, Func Offset: 0x6c
	// Line 2859, Address: 0x1c61a4, Func Offset: 0x74
	// Line 2860, Address: 0x1c61a8, Func Offset: 0x78
	// Line 2861, Address: 0x1c61cc, Func Offset: 0x9c
	// Line 2862, Address: 0x1c61d0, Func Offset: 0xa0
	// Line 2863, Address: 0x1c61d8, Func Offset: 0xa8
	// Line 2864, Address: 0x1c61e8, Func Offset: 0xb8
	// Line 2865, Address: 0x1c61f4, Func Offset: 0xc4
	// Line 2866, Address: 0x1c61fc, Func Offset: 0xcc
	// Line 2867, Address: 0x1c6208, Func Offset: 0xd8
	// Line 2868, Address: 0x1c6214, Func Offset: 0xe4
	// Line 2869, Address: 0x1c621c, Func Offset: 0xec
	// Line 2871, Address: 0x1c6224, Func Offset: 0xf4
	// Line 2872, Address: 0x1c6228, Func Offset: 0xf8
	// Line 2873, Address: 0x1c6238, Func Offset: 0x108
	// Line 2875, Address: 0x1c625c, Func Offset: 0x12c
	// Line 2876, Address: 0x1c6264, Func Offset: 0x134
	// Line 2880, Address: 0x1c626c, Func Offset: 0x13c
	// Line 2881, Address: 0x1c6270, Func Offset: 0x140
	// Line 2883, Address: 0x1c6298, Func Offset: 0x168
	// Line 2884, Address: 0x1c62a4, Func Offset: 0x174
	// Line 2886, Address: 0x1c62b0, Func Offset: 0x180
	// Line 2887, Address: 0x1c62c0, Func Offset: 0x190
	// Line 2889, Address: 0x1c62d0, Func Offset: 0x1a0
	// Line 2891, Address: 0x1c62f0, Func Offset: 0x1c0
	// Line 2892, Address: 0x1c62fc, Func Offset: 0x1cc
	// Func End, Address: 0x1c6320, Func Offset: 0x1f0
}

// 
// Start address: 0x1c6320
void EnemyJinmenControlAttack4(sfObj* obj)
{
	EnemyJinmenWork* ew;
	float* pos;
	float dt;
	int wp_type;
	int wp_kind;
	// Line 2896, Address: 0x1c6320, Func Offset: 0
	// Line 2900, Address: 0x1c6338, Func Offset: 0x18
	// Line 2901, Address: 0x1c6344, Func Offset: 0x24
	// Line 2902, Address: 0x1c634c, Func Offset: 0x2c
	// Line 2903, Address: 0x1c6358, Func Offset: 0x38
	// Line 2906, Address: 0x1c6370, Func Offset: 0x50
	// Line 2907, Address: 0x1c6378, Func Offset: 0x58
	// Line 2908, Address: 0x1c6384, Func Offset: 0x64
	// Line 2909, Address: 0x1c6394, Func Offset: 0x74
	// Line 2910, Address: 0x1c63a0, Func Offset: 0x80
	// Line 2911, Address: 0x1c63ac, Func Offset: 0x8c
	// Line 2914, Address: 0x1c63b4, Func Offset: 0x94
	// Line 2915, Address: 0x1c63c0, Func Offset: 0xa0
	// Line 2921, Address: 0x1c6410, Func Offset: 0xf0
	// Line 2923, Address: 0x1c6430, Func Offset: 0x110
	// Line 2926, Address: 0x1c6438, Func Offset: 0x118
	// Line 2929, Address: 0x1c6440, Func Offset: 0x120
	// Line 2931, Address: 0x1c6448, Func Offset: 0x128
	// Line 2933, Address: 0x1c644c, Func Offset: 0x12c
	// Line 2934, Address: 0x1c6450, Func Offset: 0x130
	// Line 2935, Address: 0x1c6454, Func Offset: 0x134
	// Line 2936, Address: 0x1c6460, Func Offset: 0x140
	// Line 2938, Address: 0x1c646c, Func Offset: 0x14c
	// Line 2939, Address: 0x1c6478, Func Offset: 0x158
	// Line 2940, Address: 0x1c6480, Func Offset: 0x160
	// Line 2943, Address: 0x1c6488, Func Offset: 0x168
	// Line 2944, Address: 0x1c64a4, Func Offset: 0x184
	// Line 2947, Address: 0x1c64bc, Func Offset: 0x19c
	// Line 2948, Address: 0x1c64c0, Func Offset: 0x1a0
	// Line 2949, Address: 0x1c64d0, Func Offset: 0x1b0
	// Line 2952, Address: 0x1c64f0, Func Offset: 0x1d0
	// Line 2953, Address: 0x1c64f8, Func Offset: 0x1d8
	// Func End, Address: 0x1c6514, Func Offset: 0x1f4
}

// 
// Start address: 0x1c6520
void EnemyJinmenControlAway4(sfObj* obj)
{
	EnemyJinmenWork* ew;
	float* pos;
	float rot[4];
	float dt;
	// Line 2957, Address: 0x1c6520, Func Offset: 0
	// Line 2962, Address: 0x1c6538, Func Offset: 0x18
	// Line 2963, Address: 0x1c6540, Func Offset: 0x20
	// Line 2964, Address: 0x1c654c, Func Offset: 0x2c
	// Line 2965, Address: 0x1c6558, Func Offset: 0x38
	// Line 2966, Address: 0x1c6564, Func Offset: 0x44
	// Line 2968, Address: 0x1c6590, Func Offset: 0x70
	// Line 2969, Address: 0x1c659c, Func Offset: 0x7c
	// Line 2970, Address: 0x1c65ac, Func Offset: 0x8c
	// Line 2971, Address: 0x1c65b8, Func Offset: 0x98
	// Line 2972, Address: 0x1c65c4, Func Offset: 0xa4
	// Line 2973, Address: 0x1c65fc, Func Offset: 0xdc
	// Line 2974, Address: 0x1c6604, Func Offset: 0xe4
	// Line 2975, Address: 0x1c6610, Func Offset: 0xf0
	// Line 2974, Address: 0x1c6614, Func Offset: 0xf4
	// Line 2975, Address: 0x1c6618, Func Offset: 0xf8
	// Line 2974, Address: 0x1c661c, Func Offset: 0xfc
	// Line 2975, Address: 0x1c6624, Func Offset: 0x104
	// Line 2976, Address: 0x1c662c, Func Offset: 0x10c
	// Line 2977, Address: 0x1c6634, Func Offset: 0x114
	// Line 2978, Address: 0x1c6638, Func Offset: 0x118
	// Line 2979, Address: 0x1c6640, Func Offset: 0x120
	// Line 2980, Address: 0x1c664c, Func Offset: 0x12c
	// Line 2981, Address: 0x1c6654, Func Offset: 0x134
	// Line 2983, Address: 0x1c6658, Func Offset: 0x138
	// Line 2981, Address: 0x1c665c, Func Offset: 0x13c
	// Line 2983, Address: 0x1c6660, Func Offset: 0x140
	// Line 2987, Address: 0x1c6668, Func Offset: 0x148
	// Line 2988, Address: 0x1c6684, Func Offset: 0x164
	// Line 2990, Address: 0x1c6688, Func Offset: 0x168
	// Line 2992, Address: 0x1c66a4, Func Offset: 0x184
	// Line 2993, Address: 0x1c66ac, Func Offset: 0x18c
	// Line 2994, Address: 0x1c66b0, Func Offset: 0x190
	// Line 2995, Address: 0x1c66c0, Func Offset: 0x1a0
	// Line 2996, Address: 0x1c66c8, Func Offset: 0x1a8
	// Line 2997, Address: 0x1c66d4, Func Offset: 0x1b4
	// Line 2998, Address: 0x1c66dc, Func Offset: 0x1bc
	// Line 2999, Address: 0x1c66e0, Func Offset: 0x1c0
	// Line 3000, Address: 0x1c66ec, Func Offset: 0x1cc
	// Line 3001, Address: 0x1c66f8, Func Offset: 0x1d8
	// Line 3000, Address: 0x1c66fc, Func Offset: 0x1dc
	// Line 3001, Address: 0x1c6700, Func Offset: 0x1e0
	// Line 3000, Address: 0x1c6704, Func Offset: 0x1e4
	// Line 3001, Address: 0x1c6708, Func Offset: 0x1e8
	// Line 3002, Address: 0x1c6710, Func Offset: 0x1f0
	// Line 3005, Address: 0x1c6718, Func Offset: 0x1f8
	// Line 3006, Address: 0x1c6734, Func Offset: 0x214
	// Line 3007, Address: 0x1c6740, Func Offset: 0x220
	// Line 3008, Address: 0x1c6768, Func Offset: 0x248
	// Line 3009, Address: 0x1c6770, Func Offset: 0x250
	// Line 3011, Address: 0x1c6778, Func Offset: 0x258
	// Line 3013, Address: 0x1c6780, Func Offset: 0x260
	// Line 3015, Address: 0x1c67a0, Func Offset: 0x280
	// Line 3019, Address: 0x1c67a8, Func Offset: 0x288
	// Line 3022, Address: 0x1c67e8, Func Offset: 0x2c8
	// Line 3023, Address: 0x1c67f4, Func Offset: 0x2d4
	// Line 3024, Address: 0x1c67fc, Func Offset: 0x2dc
	// Line 3025, Address: 0x1c6800, Func Offset: 0x2e0
	// Line 3027, Address: 0x1c6828, Func Offset: 0x308
	// Line 3029, Address: 0x1c683c, Func Offset: 0x31c
	// Line 3030, Address: 0x1c6840, Func Offset: 0x320
	// Line 3032, Address: 0x1c6860, Func Offset: 0x340
	// Line 3033, Address: 0x1c686c, Func Offset: 0x34c
	// Line 3034, Address: 0x1c6874, Func Offset: 0x354
	// Line 3035, Address: 0x1c6878, Func Offset: 0x358
	// Line 3037, Address: 0x1c6890, Func Offset: 0x370
	// Line 3039, Address: 0x1c6898, Func Offset: 0x378
	// Line 3043, Address: 0x1c68b0, Func Offset: 0x390
	// Func End, Address: 0x1c68cc, Func Offset: 0x3ac
}

// 
// Start address: 0x1c68d0
void EnemyJinmenControlLeap(sfObj* obj)
{
	EnemyJinmenWork* ew;
	float* pos;
	float dt;
	// Line 3047, Address: 0x1c68d0, Func Offset: 0
	// Line 3051, Address: 0x1c68e8, Func Offset: 0x18
	// Line 3052, Address: 0x1c68f4, Func Offset: 0x24
	// Line 3053, Address: 0x1c6900, Func Offset: 0x30
	// Line 3054, Address: 0x1c6910, Func Offset: 0x40
	// Line 3053, Address: 0x1c6914, Func Offset: 0x44
	// Line 3054, Address: 0x1c6918, Func Offset: 0x48
	// Line 3055, Address: 0x1c6924, Func Offset: 0x54
	// Line 3057, Address: 0x1c6938, Func Offset: 0x68
	// Line 3058, Address: 0x1c6948, Func Offset: 0x78
	// Line 3059, Address: 0x1c6950, Func Offset: 0x80
	// Line 3060, Address: 0x1c6958, Func Offset: 0x88
	// Line 3061, Address: 0x1c6964, Func Offset: 0x94
	// Line 3062, Address: 0x1c6968, Func Offset: 0x98
	// Line 3063, Address: 0x1c6974, Func Offset: 0xa4
	// Line 3065, Address: 0x1c69a8, Func Offset: 0xd8
	// Line 3066, Address: 0x1c69b0, Func Offset: 0xe0
	// Line 3067, Address: 0x1c69b8, Func Offset: 0xe8
	// Line 3068, Address: 0x1c69c0, Func Offset: 0xf0
	// Line 3069, Address: 0x1c69d0, Func Offset: 0x100
	// Line 3070, Address: 0x1c69d8, Func Offset: 0x108
	// Line 3071, Address: 0x1c69e4, Func Offset: 0x114
	// Line 3072, Address: 0x1c69ec, Func Offset: 0x11c
	// Line 3073, Address: 0x1c69f0, Func Offset: 0x120
	// Line 3074, Address: 0x1c6a00, Func Offset: 0x130
	// Line 3077, Address: 0x1c6a08, Func Offset: 0x138
	// Line 3078, Address: 0x1c6a14, Func Offset: 0x144
	// Line 3079, Address: 0x1c6a20, Func Offset: 0x150
	// Line 3081, Address: 0x1c6a28, Func Offset: 0x158
	// Line 3082, Address: 0x1c6a3c, Func Offset: 0x16c
	// Line 3083, Address: 0x1c6a44, Func Offset: 0x174
	// Line 3084, Address: 0x1c6a48, Func Offset: 0x178
	// Line 3087, Address: 0x1c6a58, Func Offset: 0x188
	// Line 3088, Address: 0x1c6a68, Func Offset: 0x198
	// Line 3092, Address: 0x1c6a70, Func Offset: 0x1a0
	// Line 3094, Address: 0x1c6a90, Func Offset: 0x1c0
	// Func End, Address: 0x1c6aac, Func Offset: 0x1dc
}

// 
// Start address: 0x1c6ab0
void EnemyJinmenControlDamage(sfObj* obj)
{
	EnemyJinmenWork* ew;
	float vec[4];
	float dt;
	int nextstep;
	EnemyBattleDamage bd;
	int s;
	// Line 3098, Address: 0x1c6ab0, Func Offset: 0
	// Line 3103, Address: 0x1c6acc, Func Offset: 0x1c
	// Line 3104, Address: 0x1c6ad8, Func Offset: 0x28
	// Line 3105, Address: 0x1c6ae4, Func Offset: 0x34
	// Line 3107, Address: 0x1c6b10, Func Offset: 0x60
	// Line 3108, Address: 0x1c6b1c, Func Offset: 0x6c
	// Line 3109, Address: 0x1c6b24, Func Offset: 0x74
	// Line 3110, Address: 0x1c6b30, Func Offset: 0x80
	// Line 3114, Address: 0x1c6b3c, Func Offset: 0x8c
	// Line 3115, Address: 0x1c6b48, Func Offset: 0x98
	// Line 3116, Address: 0x1c6b54, Func Offset: 0xa4
	// Line 3117, Address: 0x1c6b64, Func Offset: 0xb4
	// Line 3118, Address: 0x1c6b7c, Func Offset: 0xcc
	// Line 3122, Address: 0x1c6bc8, Func Offset: 0x118
	// Line 3121, Address: 0x1c6bcc, Func Offset: 0x11c
	// Line 3124, Address: 0x1c6bd0, Func Offset: 0x120
	// Line 3125, Address: 0x1c6bdc, Func Offset: 0x12c
	// Line 3126, Address: 0x1c6be8, Func Offset: 0x138
	// Line 3127, Address: 0x1c6bf4, Func Offset: 0x144
	// Line 3128, Address: 0x1c6bfc, Func Offset: 0x14c
	// Line 3131, Address: 0x1c6c00, Func Offset: 0x150
	// Line 3132, Address: 0x1c6c10, Func Offset: 0x160
	// Line 3133, Address: 0x1c6c24, Func Offset: 0x174
	// Line 3134, Address: 0x1c6c4c, Func Offset: 0x19c
	// Line 3135, Address: 0x1c6c54, Func Offset: 0x1a4
	// Line 3136, Address: 0x1c6c60, Func Offset: 0x1b0
	// Line 3137, Address: 0x1c6c6c, Func Offset: 0x1bc
	// Line 3138, Address: 0x1c6c70, Func Offset: 0x1c0
	// Line 3140, Address: 0x1c6c7c, Func Offset: 0x1cc
	// Line 3142, Address: 0x1c6c84, Func Offset: 0x1d4
	// Line 3143, Address: 0x1c6c88, Func Offset: 0x1d8
	// Line 3145, Address: 0x1c6c9c, Func Offset: 0x1ec
	// Line 3146, Address: 0x1c6ca8, Func Offset: 0x1f8
	// Line 3147, Address: 0x1c6cb8, Func Offset: 0x208
	// Line 3148, Address: 0x1c6cd4, Func Offset: 0x224
	// Line 3150, Address: 0x1c6cf4, Func Offset: 0x244
	// Line 3153, Address: 0x1c6d00, Func Offset: 0x250
	// Line 3156, Address: 0x1c6d08, Func Offset: 0x258
	// Line 3157, Address: 0x1c6d10, Func Offset: 0x260
	// Line 3159, Address: 0x1c6d2c, Func Offset: 0x27c
	// Line 3160, Address: 0x1c6d38, Func Offset: 0x288
	// Line 3163, Address: 0x1c6d3c, Func Offset: 0x28c
	// Line 3164, Address: 0x1c6d40, Func Offset: 0x290
	// Line 3165, Address: 0x1c6d54, Func Offset: 0x2a4
	// Line 3166, Address: 0x1c6d5c, Func Offset: 0x2ac
	// Line 3167, Address: 0x1c6d64, Func Offset: 0x2b4
	// Line 3168, Address: 0x1c6d68, Func Offset: 0x2b8
	// Line 3169, Address: 0x1c6d80, Func Offset: 0x2d0
	// Line 3171, Address: 0x1c6d88, Func Offset: 0x2d8
	// Line 3173, Address: 0x1c6da0, Func Offset: 0x2f0
	// Line 3175, Address: 0x1c6da8, Func Offset: 0x2f8
	// Line 3176, Address: 0x1c6dc8, Func Offset: 0x318
	// Line 3177, Address: 0x1c6de4, Func Offset: 0x334
	// Line 3178, Address: 0x1c6df4, Func Offset: 0x344
	// Line 3179, Address: 0x1c6dfc, Func Offset: 0x34c
	// Line 3180, Address: 0x1c6e08, Func Offset: 0x358
	// Line 3181, Address: 0x1c6e14, Func Offset: 0x364
	// Line 3182, Address: 0x1c6e18, Func Offset: 0x368
	// Line 3183, Address: 0x1c6e24, Func Offset: 0x374
	// Line 3184, Address: 0x1c6e30, Func Offset: 0x380
	// Line 3187, Address: 0x1c6e3c, Func Offset: 0x38c
	// Line 3188, Address: 0x1c6e44, Func Offset: 0x394
	// Line 3189, Address: 0x1c6e48, Func Offset: 0x398
	// Line 3190, Address: 0x1c6e68, Func Offset: 0x3b8
	// Line 3192, Address: 0x1c6e70, Func Offset: 0x3c0
	// Line 3194, Address: 0x1c6e78, Func Offset: 0x3c8
	// Line 3195, Address: 0x1c6e94, Func Offset: 0x3e4
	// Line 3196, Address: 0x1c6ea4, Func Offset: 0x3f4
	// Line 3197, Address: 0x1c6eac, Func Offset: 0x3fc
	// Line 3198, Address: 0x1c6eb8, Func Offset: 0x408
	// Line 3202, Address: 0x1c6ec4, Func Offset: 0x414
	// Line 3203, Address: 0x1c6ec8, Func Offset: 0x418
	// Func End, Address: 0x1c6ee8, Func Offset: 0x438
}

// 
// Start address: 0x1c6ef0
void EnemyJinmenControlDown(sfObj* obj)
{
	EnemyJinmenWork* ew;
	float vec[4];
	float dt;
	float tpos[4];
	_anon1 plane;
	float rot[4];
	float pos[4];
	// Line 3207, Address: 0x1c6ef0, Func Offset: 0
	// Line 3211, Address: 0x1c6f04, Func Offset: 0x14
	// Line 3212, Address: 0x1c6f0c, Func Offset: 0x1c
	// Line 3213, Address: 0x1c6f18, Func Offset: 0x28
	// Line 3214, Address: 0x1c6f34, Func Offset: 0x44
	// Line 3215, Address: 0x1c6f5c, Func Offset: 0x6c
	// Line 3216, Address: 0x1c6f64, Func Offset: 0x74
	// Line 3217, Address: 0x1c6f74, Func Offset: 0x84
	// Line 3219, Address: 0x1c6f80, Func Offset: 0x90
	// Line 3221, Address: 0x1c6f90, Func Offset: 0xa0
	// Line 3222, Address: 0x1c6fac, Func Offset: 0xbc
	// Line 3223, Address: 0x1c6fbc, Func Offset: 0xcc
	// Line 3225, Address: 0x1c6fcc, Func Offset: 0xdc
	// Line 3226, Address: 0x1c6fd4, Func Offset: 0xe4
	// Line 3227, Address: 0x1c7008, Func Offset: 0x118
	// Line 3228, Address: 0x1c7020, Func Offset: 0x130
	// Line 3229, Address: 0x1c7044, Func Offset: 0x154
	// Line 3230, Address: 0x1c7050, Func Offset: 0x160
	// Line 3231, Address: 0x1c708c, Func Offset: 0x19c
	// Line 3232, Address: 0x1c7094, Func Offset: 0x1a4
	// Line 3233, Address: 0x1c7098, Func Offset: 0x1a8
	// Line 3232, Address: 0x1c709c, Func Offset: 0x1ac
	// Line 3233, Address: 0x1c70a0, Func Offset: 0x1b0
	// Line 3232, Address: 0x1c70a4, Func Offset: 0x1b4
	// Line 3233, Address: 0x1c70a8, Func Offset: 0x1b8
	// Line 3232, Address: 0x1c70bc, Func Offset: 0x1cc
	// Line 3233, Address: 0x1c70c0, Func Offset: 0x1d0
	// Line 3232, Address: 0x1c70c8, Func Offset: 0x1d8
	// Line 3233, Address: 0x1c70cc, Func Offset: 0x1dc
	// Line 3235, Address: 0x1c70e8, Func Offset: 0x1f8
	// Line 3236, Address: 0x1c7100, Func Offset: 0x210
	// Line 3237, Address: 0x1c7124, Func Offset: 0x234
	// Line 3238, Address: 0x1c7128, Func Offset: 0x238
	// Line 3237, Address: 0x1c7130, Func Offset: 0x240
	// Line 3238, Address: 0x1c7134, Func Offset: 0x244
	// Line 3239, Address: 0x1c713c, Func Offset: 0x24c
	// Line 3240, Address: 0x1c7140, Func Offset: 0x250
	// Line 3243, Address: 0x1c7158, Func Offset: 0x268
	// Line 3244, Address: 0x1c7160, Func Offset: 0x270
	// Line 3245, Address: 0x1c7180, Func Offset: 0x290
	// Line 3247, Address: 0x1c7198, Func Offset: 0x2a8
	// Line 3250, Address: 0x1c71a4, Func Offset: 0x2b4
	// Line 3251, Address: 0x1c71a8, Func Offset: 0x2b8
	// Line 3252, Address: 0x1c71b4, Func Offset: 0x2c4
	// Line 3254, Address: 0x1c71c0, Func Offset: 0x2d0
	// Line 3257, Address: 0x1c7214, Func Offset: 0x324
	// Line 3258, Address: 0x1c7218, Func Offset: 0x328
	// Line 3259, Address: 0x1c7224, Func Offset: 0x334
	// Line 3260, Address: 0x1c7230, Func Offset: 0x340
	// Line 3261, Address: 0x1c723c, Func Offset: 0x34c
	// Line 3262, Address: 0x1c724c, Func Offset: 0x35c
	// Line 3263, Address: 0x1c725c, Func Offset: 0x36c
	// Line 3265, Address: 0x1c7288, Func Offset: 0x398
	// Line 3266, Address: 0x1c7294, Func Offset: 0x3a4
	// Line 3267, Address: 0x1c729c, Func Offset: 0x3ac
	// Line 3269, Address: 0x1c72a0, Func Offset: 0x3b0
	// Line 3271, Address: 0x1c72a8, Func Offset: 0x3b8
	// Line 3274, Address: 0x1c72c4, Func Offset: 0x3d4
	// Line 3275, Address: 0x1c72d0, Func Offset: 0x3e0
	// Line 3277, Address: 0x1c72e0, Func Offset: 0x3f0
	// Line 3278, Address: 0x1c72ec, Func Offset: 0x3fc
	// Line 3277, Address: 0x1c72f0, Func Offset: 0x400
	// Line 3278, Address: 0x1c72f4, Func Offset: 0x404
	// Line 3277, Address: 0x1c72f8, Func Offset: 0x408
	// Line 3278, Address: 0x1c7300, Func Offset: 0x410
	// Line 3279, Address: 0x1c7308, Func Offset: 0x418
	// Line 3280, Address: 0x1c7314, Func Offset: 0x424
	// Line 3281, Address: 0x1c731c, Func Offset: 0x42c
	// Line 3282, Address: 0x1c7338, Func Offset: 0x448
	// Line 3283, Address: 0x1c735c, Func Offset: 0x46c
	// Line 3284, Address: 0x1c7384, Func Offset: 0x494
	// Line 3285, Address: 0x1c738c, Func Offset: 0x49c
	// Line 3286, Address: 0x1c7398, Func Offset: 0x4a8
	// Line 3288, Address: 0x1c73b8, Func Offset: 0x4c8
	// Line 3289, Address: 0x1c73c4, Func Offset: 0x4d4
	// Line 3290, Address: 0x1c73cc, Func Offset: 0x4dc
	// Line 3291, Address: 0x1c73d0, Func Offset: 0x4e0
	// Line 3293, Address: 0x1c7404, Func Offset: 0x514
	// Line 3294, Address: 0x1c740c, Func Offset: 0x51c
	// Line 3295, Address: 0x1c7418, Func Offset: 0x528
	// Line 3296, Address: 0x1c7428, Func Offset: 0x538
	// Line 3297, Address: 0x1c7434, Func Offset: 0x544
	// Line 3298, Address: 0x1c7464, Func Offset: 0x574
	// Line 3299, Address: 0x1c7478, Func Offset: 0x588
	// Line 3298, Address: 0x1c747c, Func Offset: 0x58c
	// Line 3299, Address: 0x1c7490, Func Offset: 0x5a0
	// Line 3300, Address: 0x1c749c, Func Offset: 0x5ac
	// Line 3302, Address: 0x1c74a8, Func Offset: 0x5b8
	// Line 3304, Address: 0x1c74b0, Func Offset: 0x5c0
	// Line 3305, Address: 0x1c74cc, Func Offset: 0x5dc
	// Line 3307, Address: 0x1c7508, Func Offset: 0x618
	// Line 3308, Address: 0x1c7510, Func Offset: 0x620
	// Line 3309, Address: 0x1c751c, Func Offset: 0x62c
	// Line 3311, Address: 0x1c752c, Func Offset: 0x63c
	// Line 3312, Address: 0x1c7538, Func Offset: 0x648
	// Line 3313, Address: 0x1c7540, Func Offset: 0x650
	// Line 3314, Address: 0x1c7554, Func Offset: 0x664
	// Line 3313, Address: 0x1c7558, Func Offset: 0x668
	// Line 3314, Address: 0x1c7568, Func Offset: 0x678
	// Line 3315, Address: 0x1c7570, Func Offset: 0x680
	// Line 3318, Address: 0x1c757c, Func Offset: 0x68c
	// Line 3319, Address: 0x1c7584, Func Offset: 0x694
	// Line 3320, Address: 0x1c7588, Func Offset: 0x698
	// Line 3322, Address: 0x1c75a4, Func Offset: 0x6b4
	// Line 3323, Address: 0x1c75ac, Func Offset: 0x6bc
	// Line 3324, Address: 0x1c75b0, Func Offset: 0x6c0
	// Line 3325, Address: 0x1c75e0, Func Offset: 0x6f0
	// Line 3326, Address: 0x1c75ec, Func Offset: 0x6fc
	// Line 3327, Address: 0x1c75f8, Func Offset: 0x708
	// Line 3328, Address: 0x1c7604, Func Offset: 0x714
	// Line 3330, Address: 0x1c760c, Func Offset: 0x71c
	// Line 3331, Address: 0x1c7614, Func Offset: 0x724
	// Line 3332, Address: 0x1c7618, Func Offset: 0x728
	// Line 3333, Address: 0x1c7634, Func Offset: 0x744
	// Line 3334, Address: 0x1c7640, Func Offset: 0x750
	// Line 3335, Address: 0x1c7650, Func Offset: 0x760
	// Line 3336, Address: 0x1c765c, Func Offset: 0x76c
	// Line 3337, Address: 0x1c7678, Func Offset: 0x788
	// Line 3338, Address: 0x1c76a4, Func Offset: 0x7b4
	// Line 3339, Address: 0x1c76d0, Func Offset: 0x7e0
	// Line 3340, Address: 0x1c76f0, Func Offset: 0x800
	// Line 3341, Address: 0x1c7704, Func Offset: 0x814
	// Line 3343, Address: 0x1c7708, Func Offset: 0x818
	// Line 3347, Address: 0x1c7710, Func Offset: 0x820
	// Func End, Address: 0x1c7728, Func Offset: 0x838
}

// 
// Start address: 0x1c7730
void EnemyJinmenControlGuard(sfObj* obj)
{
	EnemyJinmenWork* ew;
	float* pos;
	float* ppos;
	float* rot;
	float tpos[4];
	float vec[4];
	EnemySenseResult sres;
	float dt;
	float d;
	float dir;
	// Line 3351, Address: 0x1c7730, Func Offset: 0
	// Line 3358, Address: 0x1c7750, Func Offset: 0x20
	// Line 3359, Address: 0x1c775c, Func Offset: 0x2c
	// Line 3360, Address: 0x1c7768, Func Offset: 0x38
	// Line 3361, Address: 0x1c7774, Func Offset: 0x44
	// Line 3362, Address: 0x1c7784, Func Offset: 0x54
	// Line 3361, Address: 0x1c7788, Func Offset: 0x58
	// Line 3362, Address: 0x1c778c, Func Offset: 0x5c
	// Line 3363, Address: 0x1c7798, Func Offset: 0x68
	// Line 3364, Address: 0x1c77a0, Func Offset: 0x70
	// Line 3365, Address: 0x1c77a8, Func Offset: 0x78
	// Line 3366, Address: 0x1c77b0, Func Offset: 0x80
	// Line 3367, Address: 0x1c77bc, Func Offset: 0x8c
	// Line 3368, Address: 0x1c77c0, Func Offset: 0x90
	// Line 3369, Address: 0x1c77cc, Func Offset: 0x9c
	// Line 3370, Address: 0x1c77d8, Func Offset: 0xa8
	// Line 3371, Address: 0x1c7804, Func Offset: 0xd4
	// Line 3372, Address: 0x1c7808, Func Offset: 0xd8
	// Line 3373, Address: 0x1c7814, Func Offset: 0xe4
	// Line 3374, Address: 0x1c7820, Func Offset: 0xf0
	// Line 3375, Address: 0x1c7828, Func Offset: 0xf8
	// Line 3376, Address: 0x1c7830, Func Offset: 0x100
	// Line 3377, Address: 0x1c7844, Func Offset: 0x114
	// Line 3378, Address: 0x1c7854, Func Offset: 0x124
	// Line 3379, Address: 0x1c7860, Func Offset: 0x130
	// Line 3380, Address: 0x1c786c, Func Offset: 0x13c
	// Line 3381, Address: 0x1c7874, Func Offset: 0x144
	// Line 3382, Address: 0x1c7878, Func Offset: 0x148
	// Line 3383, Address: 0x1c7884, Func Offset: 0x154
	// Line 3384, Address: 0x1c7890, Func Offset: 0x160
	// Line 3385, Address: 0x1c78a0, Func Offset: 0x170
	// Line 3388, Address: 0x1c78a8, Func Offset: 0x178
	// Line 3389, Address: 0x1c78b8, Func Offset: 0x188
	// Line 3390, Address: 0x1c78c0, Func Offset: 0x190
	// Line 3391, Address: 0x1c78cc, Func Offset: 0x19c
	// Line 3393, Address: 0x1c78fc, Func Offset: 0x1cc
	// Line 3394, Address: 0x1c7904, Func Offset: 0x1d4
	// Line 3395, Address: 0x1c7930, Func Offset: 0x200
	// Line 3396, Address: 0x1c7938, Func Offset: 0x208
	// Line 3397, Address: 0x1c7964, Func Offset: 0x234
	// Line 3398, Address: 0x1c796c, Func Offset: 0x23c
	// Line 3399, Address: 0x1c7978, Func Offset: 0x248
	// Line 3400, Address: 0x1c7980, Func Offset: 0x250
	// Line 3401, Address: 0x1c798c, Func Offset: 0x25c
	// Line 3402, Address: 0x1c7998, Func Offset: 0x268
	// Line 3404, Address: 0x1c79a4, Func Offset: 0x274
	// Line 3405, Address: 0x1c79ac, Func Offset: 0x27c
	// Line 3406, Address: 0x1c79b0, Func Offset: 0x280
	// Line 3407, Address: 0x1c79d0, Func Offset: 0x2a0
	// Line 3409, Address: 0x1c7a00, Func Offset: 0x2d0
	// Line 3410, Address: 0x1c7a08, Func Offset: 0x2d8
	// Line 3413, Address: 0x1c7a10, Func Offset: 0x2e0
	// Line 3414, Address: 0x1c7a30, Func Offset: 0x300
	// Line 3419, Address: 0x1c7a84, Func Offset: 0x354
	// Line 3420, Address: 0x1c7a8c, Func Offset: 0x35c
	// Line 3421, Address: 0x1c7a98, Func Offset: 0x368
	// Line 3423, Address: 0x1c7aa0, Func Offset: 0x370
	// Line 3424, Address: 0x1c7aac, Func Offset: 0x37c
	// Line 3425, Address: 0x1c7ab8, Func Offset: 0x388
	// Line 3426, Address: 0x1c7ac8, Func Offset: 0x398
	// Line 3428, Address: 0x1c7ad4, Func Offset: 0x3a4
	// Line 3429, Address: 0x1c7adc, Func Offset: 0x3ac
	// Line 3430, Address: 0x1c7ae0, Func Offset: 0x3b0
	// Line 3431, Address: 0x1c7af0, Func Offset: 0x3c0
	// Line 3432, Address: 0x1c7af8, Func Offset: 0x3c8
	// Line 3433, Address: 0x1c7b04, Func Offset: 0x3d4
	// Line 3435, Address: 0x1c7b34, Func Offset: 0x404
	// Line 3436, Address: 0x1c7b3c, Func Offset: 0x40c
	// Line 3437, Address: 0x1c7b48, Func Offset: 0x418
	// Line 3441, Address: 0x1c7b98, Func Offset: 0x468
	// Line 3442, Address: 0x1c7ba4, Func Offset: 0x474
	// Line 3443, Address: 0x1c7bc0, Func Offset: 0x490
	// Line 3444, Address: 0x1c7bc8, Func Offset: 0x498
	// Line 3445, Address: 0x1c7bd4, Func Offset: 0x4a4
	// Line 3446, Address: 0x1c7bdc, Func Offset: 0x4ac
	// Line 3447, Address: 0x1c7bf8, Func Offset: 0x4c8
	// Line 3448, Address: 0x1c7c00, Func Offset: 0x4d0
	// Line 3449, Address: 0x1c7c24, Func Offset: 0x4f4
	// Line 3450, Address: 0x1c7c2c, Func Offset: 0x4fc
	// Line 3451, Address: 0x1c7c4c, Func Offset: 0x51c
	// Line 3452, Address: 0x1c7c54, Func Offset: 0x524
	// Line 3453, Address: 0x1c7c60, Func Offset: 0x530
	// Line 3454, Address: 0x1c7c6c, Func Offset: 0x53c
	// Line 3455, Address: 0x1c7c70, Func Offset: 0x540
	// Line 3456, Address: 0x1c7c78, Func Offset: 0x548
	// Line 3457, Address: 0x1c7c90, Func Offset: 0x560
	// Line 3459, Address: 0x1c7cc0, Func Offset: 0x590
	// Line 3462, Address: 0x1c7cc8, Func Offset: 0x598
	// Line 3464, Address: 0x1c7cd0, Func Offset: 0x5a0
	// Line 3465, Address: 0x1c7ce0, Func Offset: 0x5b0
	// Line 3466, Address: 0x1c7ce8, Func Offset: 0x5b8
	// Line 3467, Address: 0x1c7cf4, Func Offset: 0x5c4
	// Line 3468, Address: 0x1c7d1c, Func Offset: 0x5ec
	// Line 3469, Address: 0x1c7d28, Func Offset: 0x5f8
	// Line 3470, Address: 0x1c7d30, Func Offset: 0x600
	// Line 3472, Address: 0x1c7d60, Func Offset: 0x630
	// Line 3473, Address: 0x1c7d68, Func Offset: 0x638
	// Line 3478, Address: 0x1c7d70, Func Offset: 0x640
	// Line 3479, Address: 0x1c7d80, Func Offset: 0x650
	// Line 3480, Address: 0x1c7d88, Func Offset: 0x658
	// Line 3482, Address: 0x1c7d90, Func Offset: 0x660
	// Line 3483, Address: 0x1c7db0, Func Offset: 0x680
	// Line 3485, Address: 0x1c7de0, Func Offset: 0x6b0
	// Line 3486, Address: 0x1c7de8, Func Offset: 0x6b8
	// Line 3489, Address: 0x1c7df0, Func Offset: 0x6c0
	// Line 3491, Address: 0x1c7e14, Func Offset: 0x6e4
	// Line 3493, Address: 0x1c7e1c, Func Offset: 0x6ec
	// Line 3494, Address: 0x1c7e24, Func Offset: 0x6f4
	// Line 3495, Address: 0x1c7e28, Func Offset: 0x6f8
	// Line 3499, Address: 0x1c7e40, Func Offset: 0x710
	// Line 3501, Address: 0x1c7e60, Func Offset: 0x730
	// Func End, Address: 0x1c7e84, Func Offset: 0x754
}

// 
// Start address: 0x1c7e90
void EnemyJinmenControlWait(sfObj* obj)
{
	EnemyJinmenWork* ew;
	// Line 3505, Address: 0x1c7e90, Func Offset: 0
	// Line 3507, Address: 0x1c7ea0, Func Offset: 0x10
	// Line 3508, Address: 0x1c7eac, Func Offset: 0x1c
	// Line 3510, Address: 0x1c7ed0, Func Offset: 0x40
	// Line 3511, Address: 0x1c7edc, Func Offset: 0x4c
	// Line 3512, Address: 0x1c7ee8, Func Offset: 0x58
	// Line 3513, Address: 0x1c7ef4, Func Offset: 0x64
	// Line 3514, Address: 0x1c7f00, Func Offset: 0x70
	// Line 3515, Address: 0x1c7f10, Func Offset: 0x80
	// Line 3516, Address: 0x1c7f18, Func Offset: 0x88
	// Line 3517, Address: 0x1c7f1c, Func Offset: 0x8c
	// Line 3520, Address: 0x1c7f28, Func Offset: 0x98
	// Line 3522, Address: 0x1c7f4c, Func Offset: 0xbc
	// Line 3523, Address: 0x1c7f5c, Func Offset: 0xcc
	// Line 3524, Address: 0x1c7f68, Func Offset: 0xd8
	// Line 3528, Address: 0x1c7f74, Func Offset: 0xe4
	// Line 3529, Address: 0x1c7f78, Func Offset: 0xe8
	// Func End, Address: 0x1c7f8c, Func Offset: 0xfc
}

// 
// Start address: 0x1c7f90
void EnemyJinmenControlNoMove(sfObj* obj)
{
	// Line 3533, Address: 0x1c7f90, Func Offset: 0
	// Line 3534, Address: 0x1c7f9c, Func Offset: 0xc
	// Line 3535, Address: 0x1c7fb4, Func Offset: 0x24
	// Line 3536, Address: 0x1c7fb8, Func Offset: 0x28
	// Line 3537, Address: 0x1c7fc4, Func Offset: 0x34
	// Line 3538, Address: 0x1c7fcc, Func Offset: 0x3c
	// Line 3539, Address: 0x1c7fd8, Func Offset: 0x48
	// Line 3540, Address: 0x1c7fe4, Func Offset: 0x54
	// Line 3541, Address: 0x1c7ff0, Func Offset: 0x60
	// Line 3542, Address: 0x1c7ffc, Func Offset: 0x6c
	// Line 3543, Address: 0x1c8004, Func Offset: 0x74
	// Line 3544, Address: 0x1c800c, Func Offset: 0x7c
	// Line 3546, Address: 0x1c8014, Func Offset: 0x84
	// Line 3547, Address: 0x1c8018, Func Offset: 0x88
	// Func End, Address: 0x1c8028, Func Offset: 0x98
}

// 
// Start address: 0x1c8030
void EnemyJinmenControlJump(sfObj* obj)
{
	EnemyJinmenWork* ew;
	float* rot;
	float vec[4];
	float trot[4];
	float r;
	float dt;
	// Line 3551, Address: 0x1c8030, Func Offset: 0
	// Line 3557, Address: 0x1c8048, Func Offset: 0x18
	// Line 3558, Address: 0x1c8050, Func Offset: 0x20
	// Line 3559, Address: 0x1c8058, Func Offset: 0x28
	// Line 3560, Address: 0x1c8068, Func Offset: 0x38
	// Line 3562, Address: 0x1c8070, Func Offset: 0x40
	// Line 3563, Address: 0x1c8080, Func Offset: 0x50
	// Line 3564, Address: 0x1c80a0, Func Offset: 0x70
	// Line 3565, Address: 0x1c80a4, Func Offset: 0x74
	// Line 3564, Address: 0x1c80a8, Func Offset: 0x78
	// Line 3565, Address: 0x1c80ac, Func Offset: 0x7c
	// Line 3564, Address: 0x1c80b8, Func Offset: 0x88
	// Line 3565, Address: 0x1c80c0, Func Offset: 0x90
	// Line 3567, Address: 0x1c80e0, Func Offset: 0xb0
	// Line 3568, Address: 0x1c80f0, Func Offset: 0xc0
	// Line 3569, Address: 0x1c80f8, Func Offset: 0xc8
	// Line 3570, Address: 0x1c8100, Func Offset: 0xd0
	// Line 3574, Address: 0x1c8148, Func Offset: 0x118
	// Line 3575, Address: 0x1c8154, Func Offset: 0x124
	// Line 3577, Address: 0x1c8178, Func Offset: 0x148
	// Line 3578, Address: 0x1c8184, Func Offset: 0x154
	// Line 3579, Address: 0x1c8190, Func Offset: 0x160
	// Line 3580, Address: 0x1c819c, Func Offset: 0x16c
	// Line 3581, Address: 0x1c81a8, Func Offset: 0x178
	// Line 3582, Address: 0x1c81b0, Func Offset: 0x180
	// Line 3583, Address: 0x1c81bc, Func Offset: 0x18c
	// Line 3585, Address: 0x1c81c4, Func Offset: 0x194
	// Line 3586, Address: 0x1c81c8, Func Offset: 0x198
	// Line 3587, Address: 0x1c81e4, Func Offset: 0x1b4
	// Line 3588, Address: 0x1c8200, Func Offset: 0x1d0
	// Line 3589, Address: 0x1c822c, Func Offset: 0x1fc
	// Line 3590, Address: 0x1c8234, Func Offset: 0x204
	// Line 3591, Address: 0x1c8238, Func Offset: 0x208
	// Line 3592, Address: 0x1c8244, Func Offset: 0x214
	// Line 3594, Address: 0x1c8270, Func Offset: 0x240
	// Line 3597, Address: 0x1c82a8, Func Offset: 0x278
	// Line 3594, Address: 0x1c82ac, Func Offset: 0x27c
	// Line 3596, Address: 0x1c82b0, Func Offset: 0x280
	// Line 3597, Address: 0x1c82b4, Func Offset: 0x284
	// Line 3598, Address: 0x1c82c4, Func Offset: 0x294
	// Line 3599, Address: 0x1c82cc, Func Offset: 0x29c
	// Line 3600, Address: 0x1c8304, Func Offset: 0x2d4
	// Line 3601, Address: 0x1c8310, Func Offset: 0x2e0
	// Line 3602, Address: 0x1c8334, Func Offset: 0x304
	// Line 3603, Address: 0x1c8348, Func Offset: 0x318
	// Line 3604, Address: 0x1c8358, Func Offset: 0x328
	// Line 3605, Address: 0x1c8364, Func Offset: 0x334
	// Line 3606, Address: 0x1c8370, Func Offset: 0x340
	// Line 3607, Address: 0x1c837c, Func Offset: 0x34c
	// Line 3608, Address: 0x1c8380, Func Offset: 0x350
	// Line 3609, Address: 0x1c838c, Func Offset: 0x35c
	// Line 3610, Address: 0x1c8394, Func Offset: 0x364
	// Line 3611, Address: 0x1c8398, Func Offset: 0x368
	// Line 3613, Address: 0x1c83a0, Func Offset: 0x370
	// Line 3615, Address: 0x1c83b0, Func Offset: 0x380
	// Line 3616, Address: 0x1c83b8, Func Offset: 0x388
	// Line 3617, Address: 0x1c83c0, Func Offset: 0x390
	// Line 3618, Address: 0x1c83c8, Func Offset: 0x398
	// Line 3619, Address: 0x1c83d4, Func Offset: 0x3a4
	// Line 3620, Address: 0x1c83e0, Func Offset: 0x3b0
	// Line 3619, Address: 0x1c83e4, Func Offset: 0x3b4
	// Line 3620, Address: 0x1c83e8, Func Offset: 0x3b8
	// Line 3619, Address: 0x1c83ec, Func Offset: 0x3bc
	// Line 3620, Address: 0x1c83f0, Func Offset: 0x3c0
	// Line 3622, Address: 0x1c83f8, Func Offset: 0x3c8
	// Line 3623, Address: 0x1c8404, Func Offset: 0x3d4
	// Line 3624, Address: 0x1c843c, Func Offset: 0x40c
	// Line 3625, Address: 0x1c8448, Func Offset: 0x418
	// Func End, Address: 0x1c8464, Func Offset: 0x434
}

// 
// Start address: 0x1c8470
void EnemyJinmenControlFlagWait(sfObj* obj)
{
	// Line 3629, Address: 0x1c8470, Func Offset: 0
	// Line 3630, Address: 0x1c847c, Func Offset: 0xc
	// Line 3631, Address: 0x1c848c, Func Offset: 0x1c
	// Line 3632, Address: 0x1c8494, Func Offset: 0x24
	// Line 3634, Address: 0x1c84a0, Func Offset: 0x30
	// Func End, Address: 0x1c84b0, Func Offset: 0x40
}

// 
// Start address: 0x1c84b0
void EnemyJinmenControlDead(sfObj* obj)
{
	// Line 3638, Address: 0x1c84b0, Func Offset: 0
	// Line 3639, Address: 0x1c84bc, Func Offset: 0xc
	// Line 3640, Address: 0x1c84cc, Func Offset: 0x1c
	// Line 3641, Address: 0x1c84d4, Func Offset: 0x24
	// Line 3643, Address: 0x1c84e0, Func Offset: 0x30
	// Func End, Address: 0x1c84f0, Func Offset: 0x40
}

// 
// Start address: 0x1c84f0
int EnemyJinmenSearchPath(sfObj* obj, float* destination, float* target)
{
	EnemyJinmenWork* ew;
	EnemySearchPoint* esp;
	float* pos;
	float tpos[4];
	// Line 3648, Address: 0x1c84f0, Func Offset: 0
	// Line 3653, Address: 0x1c8514, Func Offset: 0x24
	// Line 3654, Address: 0x1c851c, Func Offset: 0x2c
	// Line 3655, Address: 0x1c8524, Func Offset: 0x34
	// Line 3656, Address: 0x1c8534, Func Offset: 0x44
	// Line 3658, Address: 0x1c8540, Func Offset: 0x50
	// Line 3657, Address: 0x1c8544, Func Offset: 0x54
	// Line 3658, Address: 0x1c855c, Func Offset: 0x6c
	// Line 3659, Address: 0x1c8570, Func Offset: 0x80
	// Line 3661, Address: 0x1c8578, Func Offset: 0x88
	// Line 3663, Address: 0x1c85a0, Func Offset: 0xb0
	// Line 3665, Address: 0x1c85a8, Func Offset: 0xb8
	// Line 3666, Address: 0x1c85b4, Func Offset: 0xc4
	// Line 3667, Address: 0x1c85b8, Func Offset: 0xc8
	// Func End, Address: 0x1c85d8, Func Offset: 0xe8
}

// 
// Start address: 0x1c85e0
int EnemyJinmenCheckDescent(sfObj* obj)
{
	EnemyJinmenWork* ew;
	float* pos;
	float* ppos;
	int f;
	// Line 3671, Address: 0x1c85e0, Func Offset: 0
	// Line 3675, Address: 0x1c85f4, Func Offset: 0x14
	// Line 3676, Address: 0x1c8608, Func Offset: 0x28
	// Line 3678, Address: 0x1c8610, Func Offset: 0x30
	// Line 3679, Address: 0x1c861c, Func Offset: 0x3c
	// Line 3680, Address: 0x1c8624, Func Offset: 0x44
	// Line 3681, Address: 0x1c8630, Func Offset: 0x50
	// Line 3682, Address: 0x1c8638, Func Offset: 0x58
	// Line 3684, Address: 0x1c8654, Func Offset: 0x74
	// Line 3685, Address: 0x1c867c, Func Offset: 0x9c
	// Line 3687, Address: 0x1c8688, Func Offset: 0xa8
	// Line 3689, Address: 0x1c8690, Func Offset: 0xb0
	// Line 3690, Address: 0x1c8694, Func Offset: 0xb4
	// Line 3691, Address: 0x1c8698, Func Offset: 0xb8
	// Line 3692, Address: 0x1c86b0, Func Offset: 0xd0
	// Line 3693, Address: 0x1c86c0, Func Offset: 0xe0
	// Line 3695, Address: 0x1c86d8, Func Offset: 0xf8
	// Line 3697, Address: 0x1c86e0, Func Offset: 0x100
	// Line 3698, Address: 0x1c86f4, Func Offset: 0x114
	// Line 3699, Address: 0x1c86fc, Func Offset: 0x11c
	// Line 3700, Address: 0x1c8700, Func Offset: 0x120
	// Line 3701, Address: 0x1c870c, Func Offset: 0x12c
	// Line 3702, Address: 0x1c8718, Func Offset: 0x138
	// Line 3704, Address: 0x1c8720, Func Offset: 0x140
	// Line 3707, Address: 0x1c8728, Func Offset: 0x148
	// Line 3708, Address: 0x1c8730, Func Offset: 0x150
	// Func End, Address: 0x1c8748, Func Offset: 0x168
}

// 
// Start address: 0x1c8750
int EnemyJinmenSetDescentPos(sfObj* obj)
{
	EnemyJinmenWork* ew;
	float* ppos;
	float pos[4];
	float tpos[4];
	float vec[4];
	float rot[4];
	EnemyClHitResult* cres;
	EnemyMeasureResult mres;
	_anon3 sphere;
	int r;
	// Line 3712, Address: 0x1c8750, Func Offset: 0
	// Line 3721, Address: 0x1c8768, Func Offset: 0x18
	// Line 3722, Address: 0x1c8770, Func Offset: 0x20
	// Line 3723, Address: 0x1c877c, Func Offset: 0x2c
	// Line 3724, Address: 0x1c878c, Func Offset: 0x3c
	// Line 3725, Address: 0x1c8794, Func Offset: 0x44
	// Line 3726, Address: 0x1c8798, Func Offset: 0x48
	// Line 3728, Address: 0x1c87a4, Func Offset: 0x54
	// Line 3727, Address: 0x1c87a8, Func Offset: 0x58
	// Line 3728, Address: 0x1c87bc, Func Offset: 0x6c
	// Line 3729, Address: 0x1c87e4, Func Offset: 0x94
	// Line 3730, Address: 0x1c87ec, Func Offset: 0x9c
	// Line 3732, Address: 0x1c8820, Func Offset: 0xd0
	// Line 3733, Address: 0x1c8830, Func Offset: 0xe0
	// Line 3734, Address: 0x1c8858, Func Offset: 0x108
	// Line 3735, Address: 0x1c8874, Func Offset: 0x124
	// Line 3736, Address: 0x1c8880, Func Offset: 0x130
	// Line 3737, Address: 0x1c888c, Func Offset: 0x13c
	// Line 3738, Address: 0x1c8890, Func Offset: 0x140
	// Line 3740, Address: 0x1c88bc, Func Offset: 0x16c
	// Line 3741, Address: 0x1c88c8, Func Offset: 0x178
	// Line 3742, Address: 0x1c88e0, Func Offset: 0x190
	// Line 3743, Address: 0x1c88ec, Func Offset: 0x19c
	// Line 3744, Address: 0x1c8904, Func Offset: 0x1b4
	// Line 3745, Address: 0x1c8908, Func Offset: 0x1b8
	// Line 3746, Address: 0x1c8918, Func Offset: 0x1c8
	// Line 3747, Address: 0x1c8920, Func Offset: 0x1d0
	// Line 3750, Address: 0x1c896c, Func Offset: 0x21c
	// Line 3751, Address: 0x1c8980, Func Offset: 0x230
	// Line 3754, Address: 0x1c8990, Func Offset: 0x240
	// Line 3752, Address: 0x1c8994, Func Offset: 0x244
	// Line 3753, Address: 0x1c8998, Func Offset: 0x248
	// Line 3754, Address: 0x1c89a0, Func Offset: 0x250
	// Line 3753, Address: 0x1c89a4, Func Offset: 0x254
	// Line 3754, Address: 0x1c89a8, Func Offset: 0x258
	// Line 3755, Address: 0x1c89b0, Func Offset: 0x260
	// Line 3757, Address: 0x1c89c0, Func Offset: 0x270
	// Line 3756, Address: 0x1c89c4, Func Offset: 0x274
	// Line 3757, Address: 0x1c89c8, Func Offset: 0x278
	// Line 3759, Address: 0x1c89ec, Func Offset: 0x29c
	// Line 3760, Address: 0x1c89f0, Func Offset: 0x2a0
	// Line 3759, Address: 0x1c89f4, Func Offset: 0x2a4
	// Line 3761, Address: 0x1c89f8, Func Offset: 0x2a8
	// Line 3762, Address: 0x1c8a00, Func Offset: 0x2b0
	// Line 3764, Address: 0x1c8a04, Func Offset: 0x2b4
	// Line 3765, Address: 0x1c8a08, Func Offset: 0x2b8
	// Line 3766, Address: 0x1c8a10, Func Offset: 0x2c0
	// Line 3767, Address: 0x1c8a1c, Func Offset: 0x2cc
	// Line 3768, Address: 0x1c8a24, Func Offset: 0x2d4
	// Line 3769, Address: 0x1c8a40, Func Offset: 0x2f0
	// Line 3771, Address: 0x1c8a5c, Func Offset: 0x30c
	// Line 3772, Address: 0x1c8a68, Func Offset: 0x318
	// Line 3774, Address: 0x1c8a74, Func Offset: 0x324
	// Line 3775, Address: 0x1c8a80, Func Offset: 0x330
	// Line 3777, Address: 0x1c8a84, Func Offset: 0x334
	// Line 3778, Address: 0x1c8a88, Func Offset: 0x338
	// Line 3779, Address: 0x1c8a90, Func Offset: 0x340
	// Line 3780, Address: 0x1c8a98, Func Offset: 0x348
	// Func End, Address: 0x1c8ab4, Func Offset: 0x364
}

// 
// Start address: 0x1c8ac0
int EnemyJinmenCheckLeap(sfObj* obj)
{
	EnemyJinmenWork* ew;
	EnemyMeasureResult mres;
	float* pos;
	// Line 3784, Address: 0x1c8ac0, Func Offset: 0
	// Line 3788, Address: 0x1c8ad4, Func Offset: 0x14
	// Line 3789, Address: 0x1c8ae0, Func Offset: 0x20
	// Line 3790, Address: 0x1c8af0, Func Offset: 0x30
	// Line 3793, Address: 0x1c8b28, Func Offset: 0x68
	// Line 3795, Address: 0x1c8b30, Func Offset: 0x70
	// Line 3796, Address: 0x1c8b44, Func Offset: 0x84
	// Line 3797, Address: 0x1c8b4c, Func Offset: 0x8c
	// Line 3798, Address: 0x1c8b50, Func Offset: 0x90
	// Line 3800, Address: 0x1c8b78, Func Offset: 0xb8
	// Line 3803, Address: 0x1c8b80, Func Offset: 0xc0
	// Line 3806, Address: 0x1c8b98, Func Offset: 0xd8
	// Func End, Address: 0x1c8bb0, Func Offset: 0xf0
}

// 
// Start address: 0x1c8bb0
int EnemyJinmenCheckNarrowPassage(sfObj* obj)
{
	float pos[4];
	// Line 3810, Address: 0x1c8bb0, Func Offset: 0
	// Line 3812, Address: 0x1c8bb8, Func Offset: 0x8
	// Line 3813, Address: 0x1c8bc0, Func Offset: 0x10
	// Line 3814, Address: 0x1c8bcc, Func Offset: 0x1c
	// Line 3813, Address: 0x1c8bd8, Func Offset: 0x28
	// Line 3814, Address: 0x1c8bdc, Func Offset: 0x2c
	// Line 3815, Address: 0x1c8be4, Func Offset: 0x34
	// Func End, Address: 0x1c8bf0, Func Offset: 0x40
}

// 
// Start address: 0x1c8bf0
void EnemyJinmenHeadInit(sfObj* obj)
{
	EnemyJinmenWork* ew;
	// Line 3819, Address: 0x1c8bf0, Func Offset: 0
	// Line 3821, Address: 0x1c8bf8, Func Offset: 0x8
	// Line 3822, Address: 0x1c8c00, Func Offset: 0x10
	// Line 3823, Address: 0x1c8c04, Func Offset: 0x14
	// Line 3824, Address: 0x1c8c08, Func Offset: 0x18
	// Line 3825, Address: 0x1c8c0c, Func Offset: 0x1c
	// Func End, Address: 0x1c8c18, Func Offset: 0x28
}

// 
// Start address: 0x1c8c20
void EnemyJinmenChangeHeadMode(sfObj* obj, int mode)
{
	EnemyJinmenWork* ew;
	sgBone* bone;
	// Line 3829, Address: 0x1c8c20, Func Offset: 0
	// Line 3833, Address: 0x1c8c38, Func Offset: 0x18
	// Line 3835, Address: 0x1c8c40, Func Offset: 0x20
	// Line 3836, Address: 0x1c8c4c, Func Offset: 0x2c
	// Line 3838, Address: 0x1c8c60, Func Offset: 0x40
	// Line 3839, Address: 0x1c8c6c, Func Offset: 0x4c
	// Line 3842, Address: 0x1c8c78, Func Offset: 0x58
	// Line 3843, Address: 0x1c8c7c, Func Offset: 0x5c
	// Func End, Address: 0x1c8c98, Func Offset: 0x78
}

// 
// Start address: 0x1c8ca0
void EnemyJinmenChangeHead2Mode(sfObj* obj, int mode)
{
	EnemyJinmenWork* ew;
	sgBone* bone;
	int omode;
	// Line 3847, Address: 0x1c8ca0, Func Offset: 0
	// Line 3851, Address: 0x1c8cb8, Func Offset: 0x18
	// Line 3852, Address: 0x1c8cc0, Func Offset: 0x20
	// Line 3853, Address: 0x1c8cc4, Func Offset: 0x24
	// Line 3854, Address: 0x1c8ccc, Func Offset: 0x2c
	// Line 3857, Address: 0x1c8ce8, Func Offset: 0x48
	// Line 3859, Address: 0x1c8cf0, Func Offset: 0x50
	// Line 3860, Address: 0x1c8cf8, Func Offset: 0x58
	// Line 3861, Address: 0x1c8d08, Func Offset: 0x68
	// Line 3862, Address: 0x1c8d10, Func Offset: 0x70
	// Line 3863, Address: 0x1c8d1c, Func Offset: 0x7c
	// Line 3864, Address: 0x1c8d28, Func Offset: 0x88
	// Line 3867, Address: 0x1c8d2c, Func Offset: 0x8c
	// Line 3868, Address: 0x1c8d30, Func Offset: 0x90
	// Line 3869, Address: 0x1c8d34, Func Offset: 0x94
	// Func End, Address: 0x1c8d50, Func Offset: 0xb0
}

// 
// Start address: 0x1c8d50
void EnemyJinmenChangeViewType(sfObj* obj, EnemyJinmenViewType type)
{
	EnemyJinmenWork* ew;
	EnemyJinmenViewType otype;
	// Line 3873, Address: 0x1c8d50, Func Offset: 0
	// Line 3876, Address: 0x1c8d68, Func Offset: 0x18
	// Line 3877, Address: 0x1c8d70, Func Offset: 0x20
	// Line 3878, Address: 0x1c8d78, Func Offset: 0x28
	// Line 3879, Address: 0x1c8d80, Func Offset: 0x30
	// Line 3883, Address: 0x1c8dbc, Func Offset: 0x6c
	// Line 3884, Address: 0x1c8dc0, Func Offset: 0x70
	// Line 3885, Address: 0x1c8dcc, Func Offset: 0x7c
	// Line 3886, Address: 0x1c8dd4, Func Offset: 0x84
	// Line 3887, Address: 0x1c8dd8, Func Offset: 0x88
	// Line 3889, Address: 0x1c8de4, Func Offset: 0x94
	// Line 3890, Address: 0x1c8de8, Func Offset: 0x98
	// Line 3891, Address: 0x1c8dec, Func Offset: 0x9c
	// Func End, Address: 0x1c8e08, Func Offset: 0xb8
}

// 
// Start address: 0x1c8e10
void EnemyJinmenPassWeapon(sfObj* obj)
{
	EnemyJinmenWork* ew;
	sgBone* bone;
	sfObj* wobj;
	// Line 3895, Address: 0x1c8e10, Func Offset: 0
	// Line 3899, Address: 0x1c8e20, Func Offset: 0x10
	// Line 3900, Address: 0x1c8e28, Func Offset: 0x18
	// Line 3901, Address: 0x1c8e2c, Func Offset: 0x1c
	// Line 3902, Address: 0x1c8e34, Func Offset: 0x24
	// Line 3903, Address: 0x1c8e3c, Func Offset: 0x2c
	// Line 3905, Address: 0x1c8e48, Func Offset: 0x38
	// Func End, Address: 0x1c8e5c, Func Offset: 0x4c
}

// 
// Start address: 0x1c8e60
void EnemyJinmenAnimeChangeHook(sfObj* obj)
{
	// Line 3910, Address: 0x1c8e60, Func Offset: 0
	// Func End, Address: 0x1c8e68, Func Offset: 0x8
}

// 
// Start address: 0x1c8e70
void EnemyJinmenAnimeUpdateHook(sfObj* obj)
{
	EnemyJinmenWork* ew;
	sgBone* bone;
	sgBone* pbone;
	float* prot;
	float trot[4];
	float rrot[4];
	sfCldPart* pcp;
	// Line 3915, Address: 0x1c8e70, Func Offset: 0
	// Line 3920, Address: 0x1c8e84, Func Offset: 0x14
	// Line 3921, Address: 0x1c8e90, Func Offset: 0x20
	// Line 3922, Address: 0x1c8e9c, Func Offset: 0x2c
	// Line 3923, Address: 0x1c8ea8, Func Offset: 0x38
	// Line 3924, Address: 0x1c8eb0, Func Offset: 0x40
	// Line 3925, Address: 0x1c8eb8, Func Offset: 0x48
	// Line 3926, Address: 0x1c8ec4, Func Offset: 0x54
	// Line 3927, Address: 0x1c8ed4, Func Offset: 0x64
	// Line 3929, Address: 0x1c8ee0, Func Offset: 0x70
	// Line 3930, Address: 0x1c8eec, Func Offset: 0x7c
	// Line 3931, Address: 0x1c8ef4, Func Offset: 0x84
	// Line 3934, Address: 0x1c8f00, Func Offset: 0x90
	// Line 3935, Address: 0x1c8f10, Func Offset: 0xa0
	// Line 3936, Address: 0x1c8f18, Func Offset: 0xa8
	// Line 3938, Address: 0x1c8f2c, Func Offset: 0xbc
	// Line 3940, Address: 0x1c8f30, Func Offset: 0xc0
	// Func End, Address: 0x1c8f48, Func Offset: 0xd8
}

// 
// Start address: 0x1c8f50
void EnemyJinmenHeadControl(sfObj* obj)
{
	EnemyJinmenWork* ew;
	sgBone* bone;
	float* bpos;
	float* rot;
	float vec[4];
	float tpos[4];
	float nrot[4];
	int r;
	// Line 3944, Address: 0x1c8f50, Func Offset: 0
	// Line 3952, Address: 0x1c8f68, Func Offset: 0x18
	// Line 3954, Address: 0x1c8f70, Func Offset: 0x20
	// Line 3956, Address: 0x1c8fa0, Func Offset: 0x50
	// Line 3957, Address: 0x1c8fb0, Func Offset: 0x60
	// Line 3959, Address: 0x1c8fbc, Func Offset: 0x6c
	// Line 3961, Address: 0x1c8fc4, Func Offset: 0x74
	// Line 3962, Address: 0x1c8fc8, Func Offset: 0x78
	// Line 3965, Address: 0x1c8fe8, Func Offset: 0x98
	// Line 3969, Address: 0x1c8ff8, Func Offset: 0xa8
	// Line 3972, Address: 0x1c9004, Func Offset: 0xb4
	// Line 3973, Address: 0x1c9010, Func Offset: 0xc0
	// Line 3974, Address: 0x1c901c, Func Offset: 0xcc
	// Line 3975, Address: 0x1c9024, Func Offset: 0xd4
	// Line 3974, Address: 0x1c9028, Func Offset: 0xd8
	// Line 3975, Address: 0x1c902c, Func Offset: 0xdc
	// Line 3976, Address: 0x1c906c, Func Offset: 0x11c
	// Line 3977, Address: 0x1c9070, Func Offset: 0x120
	// Line 3978, Address: 0x1c9080, Func Offset: 0x130
	// Line 3980, Address: 0x1c9088, Func Offset: 0x138
	// Line 3981, Address: 0x1c9094, Func Offset: 0x144
	// Line 3982, Address: 0x1c90ac, Func Offset: 0x15c
	// Line 3983, Address: 0x1c90b4, Func Offset: 0x164
	// Line 3984, Address: 0x1c90b8, Func Offset: 0x168
	// Line 3985, Address: 0x1c90c4, Func Offset: 0x174
	// Line 3986, Address: 0x1c90cc, Func Offset: 0x17c
	// Line 3987, Address: 0x1c90d0, Func Offset: 0x180
	// Line 3988, Address: 0x1c90e0, Func Offset: 0x190
	// Line 3990, Address: 0x1c90e8, Func Offset: 0x198
	// Line 3993, Address: 0x1c90f8, Func Offset: 0x1a8
	// Line 3994, Address: 0x1c9108, Func Offset: 0x1b8
	// Line 3995, Address: 0x1c9124, Func Offset: 0x1d4
	// Line 3996, Address: 0x1c9130, Func Offset: 0x1e0
	// Line 3997, Address: 0x1c914c, Func Offset: 0x1fc
	// Line 3999, Address: 0x1c9174, Func Offset: 0x224
	// Line 4000, Address: 0x1c9188, Func Offset: 0x238
	// Line 4001, Address: 0x1c9194, Func Offset: 0x244
	// Line 4002, Address: 0x1c9198, Func Offset: 0x248
	// Func End, Address: 0x1c91b4, Func Offset: 0x264
}

// 
// Start address: 0x1c91c0
void EnemyJinmenHead2Control(sfObj* obj)
{
	EnemyJinmenWork* ew;
	float* ppos;
	float* prot;
	float hpos[4];
	float vec[4];
	float vec2[4];
	float rrot[4];
	sgBone* bone;
	sgBone* pbone;
	float d;
	float d2;
	float dt;
	// Line 4006, Address: 0x1c91c0, Func Offset: 0
	// Line 4014, Address: 0x1c91d8, Func Offset: 0x18
	// Line 4015, Address: 0x1c91e4, Func Offset: 0x24
	// Line 4016, Address: 0x1c91ec, Func Offset: 0x2c
	// Line 4015, Address: 0x1c91f0, Func Offset: 0x30
	// Line 4016, Address: 0x1c91f4, Func Offset: 0x34
	// Line 4017, Address: 0x1c9200, Func Offset: 0x40
	// Line 4018, Address: 0x1c9208, Func Offset: 0x48
	// Line 4020, Address: 0x1c9228, Func Offset: 0x68
	// Line 4022, Address: 0x1c9230, Func Offset: 0x70
	// Line 4024, Address: 0x1c925c, Func Offset: 0x9c
	// Line 4026, Address: 0x1c9260, Func Offset: 0xa0
	// Line 4028, Address: 0x1c9268, Func Offset: 0xa8
	// Line 4029, Address: 0x1c9270, Func Offset: 0xb0
	// Line 4030, Address: 0x1c9280, Func Offset: 0xc0
	// Line 4031, Address: 0x1c9294, Func Offset: 0xd4
	// Line 4032, Address: 0x1c92b0, Func Offset: 0xf0
	// Line 4033, Address: 0x1c92c4, Func Offset: 0x104
	// Line 4034, Address: 0x1c92e0, Func Offset: 0x120
	// Line 4035, Address: 0x1c9300, Func Offset: 0x140
	// Line 4036, Address: 0x1c9330, Func Offset: 0x170
	// Line 4037, Address: 0x1c9350, Func Offset: 0x190
	// Line 4038, Address: 0x1c9370, Func Offset: 0x1b0
	// Line 4039, Address: 0x1c93a0, Func Offset: 0x1e0
	// Line 4040, Address: 0x1c93c0, Func Offset: 0x200
	// Line 4041, Address: 0x1c940c, Func Offset: 0x24c
	// Line 4042, Address: 0x1c9430, Func Offset: 0x270
	// Line 4043, Address: 0x1c9450, Func Offset: 0x290
	// Line 4044, Address: 0x1c946c, Func Offset: 0x2ac
	// Line 4045, Address: 0x1c9478, Func Offset: 0x2b8
	// Line 4046, Address: 0x1c9488, Func Offset: 0x2c8
	// Line 4047, Address: 0x1c9498, Func Offset: 0x2d8
	// Line 4046, Address: 0x1c949c, Func Offset: 0x2dc
	// Line 4047, Address: 0x1c94a0, Func Offset: 0x2e0
	// Line 4048, Address: 0x1c94b4, Func Offset: 0x2f4
	// Line 4051, Address: 0x1c94c0, Func Offset: 0x300
	// Line 4049, Address: 0x1c94c4, Func Offset: 0x304
	// Line 4050, Address: 0x1c94c8, Func Offset: 0x308
	// Line 4049, Address: 0x1c94cc, Func Offset: 0x30c
	// Line 4050, Address: 0x1c94d0, Func Offset: 0x310
	// Line 4052, Address: 0x1c94d4, Func Offset: 0x314
	// Line 4053, Address: 0x1c94d8, Func Offset: 0x318
	// Line 4055, Address: 0x1c94e0, Func Offset: 0x320
	// Line 4053, Address: 0x1c94e4, Func Offset: 0x324
	// Line 4055, Address: 0x1c94fc, Func Offset: 0x33c
	// Line 4053, Address: 0x1c9500, Func Offset: 0x340
	// Line 4055, Address: 0x1c9508, Func Offset: 0x348
	// Line 4053, Address: 0x1c950c, Func Offset: 0x34c
	// Line 4055, Address: 0x1c9510, Func Offset: 0x350
	// Line 4056, Address: 0x1c9518, Func Offset: 0x358
	// Line 4055, Address: 0x1c951c, Func Offset: 0x35c
	// Line 4056, Address: 0x1c9520, Func Offset: 0x360
	// Line 4058, Address: 0x1c952c, Func Offset: 0x36c
	// Line 4057, Address: 0x1c9530, Func Offset: 0x370
	// Line 4058, Address: 0x1c953c, Func Offset: 0x37c
	// Line 4057, Address: 0x1c9540, Func Offset: 0x380
	// Line 4058, Address: 0x1c9544, Func Offset: 0x384
	// Line 4059, Address: 0x1c954c, Func Offset: 0x38c
	// Line 4060, Address: 0x1c955c, Func Offset: 0x39c
	// Line 4061, Address: 0x1c9578, Func Offset: 0x3b8
	// Func End, Address: 0x1c9594, Func Offset: 0x3d4
}

// 
// Start address: 0x1c95a0
void EnemyJinmenHitCheck(sfObj* obj)
{
	EnemyJinmenWork* ew;
	float dt;
	float rdt;
	float vec[4];
	EnemyMeasureResult mres;
	// Line 4065, Address: 0x1c95a0, Func Offset: 0
	// Line 4069, Address: 0x1c95b8, Func Offset: 0x18
	// Line 4070, Address: 0x1c95c0, Func Offset: 0x20
	// Line 4071, Address: 0x1c95cc, Func Offset: 0x2c
	// Line 4072, Address: 0x1c95dc, Func Offset: 0x3c
	// Line 4073, Address: 0x1c95ec, Func Offset: 0x4c
	// Line 4074, Address: 0x1c95f0, Func Offset: 0x50
	// Line 4075, Address: 0x1c95fc, Func Offset: 0x5c
	// Line 4076, Address: 0x1c9604, Func Offset: 0x64
	// Line 4077, Address: 0x1c9608, Func Offset: 0x68
	// Line 4081, Address: 0x1c9658, Func Offset: 0xb8
	// Line 4083, Address: 0x1c9668, Func Offset: 0xc8
	// Line 4084, Address: 0x1c9678, Func Offset: 0xd8
	// Line 4085, Address: 0x1c9688, Func Offset: 0xe8
	// Line 4088, Address: 0x1c969c, Func Offset: 0xfc
	// Line 4089, Address: 0x1c96a0, Func Offset: 0x100
	// Line 4091, Address: 0x1c96a8, Func Offset: 0x108
	// Line 4093, Address: 0x1c96b0, Func Offset: 0x110
	// Line 4094, Address: 0x1c96e4, Func Offset: 0x144
	// Line 4095, Address: 0x1c96f0, Func Offset: 0x150
	// Line 4097, Address: 0x1c96f8, Func Offset: 0x158
	// Line 4100, Address: 0x1c9700, Func Offset: 0x160
	// Line 4101, Address: 0x1c9710, Func Offset: 0x170
	// Line 4102, Address: 0x1c971c, Func Offset: 0x17c
	// Line 4103, Address: 0x1c9728, Func Offset: 0x188
	// Line 4104, Address: 0x1c9734, Func Offset: 0x194
	// Line 4103, Address: 0x1c9740, Func Offset: 0x1a0
	// Line 4104, Address: 0x1c9748, Func Offset: 0x1a8
	// Line 4105, Address: 0x1c9770, Func Offset: 0x1d0
	// Line 4106, Address: 0x1c977c, Func Offset: 0x1dc
	// Line 4107, Address: 0x1c97a0, Func Offset: 0x200
	// Line 4108, Address: 0x1c97b8, Func Offset: 0x218
	// Line 4110, Address: 0x1c97c4, Func Offset: 0x224
	// Line 4111, Address: 0x1c97c8, Func Offset: 0x228
	// Line 4112, Address: 0x1c97d0, Func Offset: 0x230
	// Func End, Address: 0x1c97ec, Func Offset: 0x24c
}

// 
// Start address: 0x1c97f0
void EnemyJinmenAnimeSet(sfObj* obj, int anime)
{
	EnemyJinmenWork* ew;
	EnemyRwMotion* pm;
	EnemyFmMotion* pfm;
	EnemyFootStepsData* pfs;
	int old_anime;
	int cf;
	// Line 4116, Address: 0x1c97f0, Func Offset: 0
	// Line 4122, Address: 0x1c9810, Func Offset: 0x20
	// Line 4123, Address: 0x1c981c, Func Offset: 0x2c
	// Line 4124, Address: 0x1c9828, Func Offset: 0x38
	// Line 4125, Address: 0x1c9834, Func Offset: 0x44
	// Line 4126, Address: 0x1c9840, Func Offset: 0x50
	// Line 4128, Address: 0x1c9844, Func Offset: 0x54
	// Line 4129, Address: 0x1c9848, Func Offset: 0x58
	// Line 4130, Address: 0x1c9854, Func Offset: 0x64
	// Line 4132, Address: 0x1c9860, Func Offset: 0x70
	// Line 4134, Address: 0x1c9868, Func Offset: 0x78
	// Line 4135, Address: 0x1c986c, Func Offset: 0x7c
	// Line 4143, Address: 0x1c98e0, Func Offset: 0xf0
	// Line 4144, Address: 0x1c98ec, Func Offset: 0xfc
	// Line 4145, Address: 0x1c98f4, Func Offset: 0x104
	// Line 4146, Address: 0x1c98f8, Func Offset: 0x108
	// Line 4148, Address: 0x1c9904, Func Offset: 0x114
	// Line 4149, Address: 0x1c9908, Func Offset: 0x118
	// Line 4157, Address: 0x1c9a84, Func Offset: 0x294
	// Line 4158, Address: 0x1c9a88, Func Offset: 0x298
	// Line 4159, Address: 0x1c9a90, Func Offset: 0x2a0
	// Line 4161, Address: 0x1c9a9c, Func Offset: 0x2ac
	// Line 4164, Address: 0x1c9aa4, Func Offset: 0x2b4
	// Line 4165, Address: 0x1c9aa8, Func Offset: 0x2b8
	// Line 4166, Address: 0x1c9ab4, Func Offset: 0x2c4
	// Line 4167, Address: 0x1c9abc, Func Offset: 0x2cc
	// Line 4168, Address: 0x1c9ac0, Func Offset: 0x2d0
	// Line 4169, Address: 0x1c9ac8, Func Offset: 0x2d8
	// Line 4170, Address: 0x1c9ae0, Func Offset: 0x2f0
	// Line 4171, Address: 0x1c9af4, Func Offset: 0x304
	// Line 4172, Address: 0x1c9b00, Func Offset: 0x310
	// Line 4174, Address: 0x1c9b0c, Func Offset: 0x31c
	// Line 4180, Address: 0x1c9b14, Func Offset: 0x324
	// Line 4181, Address: 0x1c9b18, Func Offset: 0x328
	// Line 4182, Address: 0x1c9b20, Func Offset: 0x330
	// Line 4183, Address: 0x1c9b34, Func Offset: 0x344
	// Line 4185, Address: 0x1c9b3c, Func Offset: 0x34c
	// Line 4186, Address: 0x1c9b40, Func Offset: 0x350
	// Line 4187, Address: 0x1c9b58, Func Offset: 0x368
	// Line 4188, Address: 0x1c9b6c, Func Offset: 0x37c
	// Line 4193, Address: 0x1c9b74, Func Offset: 0x384
	// Line 4194, Address: 0x1c9b78, Func Offset: 0x388
	// Line 4195, Address: 0x1c9b80, Func Offset: 0x390
	// Line 4196, Address: 0x1c9b90, Func Offset: 0x3a0
	// Line 4199, Address: 0x1c9b9c, Func Offset: 0x3ac
	// Line 4200, Address: 0x1c9ba8, Func Offset: 0x3b8
	// Line 4201, Address: 0x1c9bb4, Func Offset: 0x3c4
	// Line 4202, Address: 0x1c9bb8, Func Offset: 0x3c8
	// Line 4203, Address: 0x1c9be0, Func Offset: 0x3f0
	// Line 4206, Address: 0x1c9be8, Func Offset: 0x3f8
	// Line 4207, Address: 0x1c9bf0, Func Offset: 0x400
	// Line 4208, Address: 0x1c9bfc, Func Offset: 0x40c
	// Line 4209, Address: 0x1c9c24, Func Offset: 0x434
	// Line 4210, Address: 0x1c9c2c, Func Offset: 0x43c
	// Line 4211, Address: 0x1c9c30, Func Offset: 0x440
	// Line 4212, Address: 0x1c9c38, Func Offset: 0x448
	// Line 4213, Address: 0x1c9c44, Func Offset: 0x454
	// Line 4214, Address: 0x1c9c48, Func Offset: 0x458
	// Line 4216, Address: 0x1c9c50, Func Offset: 0x460
	// Line 4217, Address: 0x1c9c64, Func Offset: 0x474
	// Line 4216, Address: 0x1c9c68, Func Offset: 0x478
	// Line 4217, Address: 0x1c9c6c, Func Offset: 0x47c
	// Line 4216, Address: 0x1c9c70, Func Offset: 0x480
	// Line 4217, Address: 0x1c9c7c, Func Offset: 0x48c
	// Line 4218, Address: 0x1c9c84, Func Offset: 0x494
	// Line 4221, Address: 0x1c9c8c, Func Offset: 0x49c
	// Line 4222, Address: 0x1c9c90, Func Offset: 0x4a0
	// Line 4225, Address: 0x1c9c9c, Func Offset: 0x4ac
	// Line 4226, Address: 0x1c9ca0, Func Offset: 0x4b0
	// Line 4230, Address: 0x1c9ca8, Func Offset: 0x4b8
	// Line 4227, Address: 0x1c9cac, Func Offset: 0x4bc
	// Line 4228, Address: 0x1c9cb0, Func Offset: 0x4c0
	// Line 4230, Address: 0x1c9cb4, Func Offset: 0x4c4
	// Line 4231, Address: 0x1c9de4, Func Offset: 0x5f4
	// Line 4232, Address: 0x1c9de8, Func Offset: 0x5f8
	// Line 4233, Address: 0x1c9dec, Func Offset: 0x5fc
	// Line 4232, Address: 0x1c9df0, Func Offset: 0x600
	// Line 4234, Address: 0x1c9df4, Func Offset: 0x604
	// Line 4235, Address: 0x1c9dfc, Func Offset: 0x60c
	// Line 4236, Address: 0x1c9e00, Func Offset: 0x610
	// Line 4237, Address: 0x1c9e04, Func Offset: 0x614
	// Line 4236, Address: 0x1c9e08, Func Offset: 0x618
	// Line 4238, Address: 0x1c9e0c, Func Offset: 0x61c
	// Line 4240, Address: 0x1c9e14, Func Offset: 0x624
	// Line 4241, Address: 0x1c9e18, Func Offset: 0x628
	// Line 4242, Address: 0x1c9e1c, Func Offset: 0x62c
	// Line 4241, Address: 0x1c9e20, Func Offset: 0x630
	// Line 4243, Address: 0x1c9e24, Func Offset: 0x634
	// Line 4245, Address: 0x1c9e2c, Func Offset: 0x63c
	// Line 4246, Address: 0x1c9e30, Func Offset: 0x640
	// Line 4247, Address: 0x1c9e34, Func Offset: 0x644
	// Line 4246, Address: 0x1c9e38, Func Offset: 0x648
	// Line 4248, Address: 0x1c9e3c, Func Offset: 0x64c
	// Line 4250, Address: 0x1c9e44, Func Offset: 0x654
	// Line 4251, Address: 0x1c9e48, Func Offset: 0x658
	// Line 4252, Address: 0x1c9e4c, Func Offset: 0x65c
	// Line 4251, Address: 0x1c9e50, Func Offset: 0x660
	// Line 4253, Address: 0x1c9e54, Func Offset: 0x664
	// Line 4255, Address: 0x1c9e5c, Func Offset: 0x66c
	// Line 4256, Address: 0x1c9e60, Func Offset: 0x670
	// Line 4257, Address: 0x1c9e64, Func Offset: 0x674
	// Line 4256, Address: 0x1c9e68, Func Offset: 0x678
	// Line 4258, Address: 0x1c9e6c, Func Offset: 0x67c
	// Line 4260, Address: 0x1c9e74, Func Offset: 0x684
	// Line 4261, Address: 0x1c9e78, Func Offset: 0x688
	// Line 4262, Address: 0x1c9e7c, Func Offset: 0x68c
	// Line 4261, Address: 0x1c9e80, Func Offset: 0x690
	// Line 4263, Address: 0x1c9e84, Func Offset: 0x694
	// Line 4265, Address: 0x1c9e8c, Func Offset: 0x69c
	// Line 4266, Address: 0x1c9e90, Func Offset: 0x6a0
	// Line 4267, Address: 0x1c9e94, Func Offset: 0x6a4
	// Line 4266, Address: 0x1c9e98, Func Offset: 0x6a8
	// Line 4268, Address: 0x1c9e9c, Func Offset: 0x6ac
	// Line 4270, Address: 0x1c9ea4, Func Offset: 0x6b4
	// Line 4271, Address: 0x1c9ea8, Func Offset: 0x6b8
	// Line 4272, Address: 0x1c9eac, Func Offset: 0x6bc
	// Line 4271, Address: 0x1c9eb0, Func Offset: 0x6c0
	// Line 4273, Address: 0x1c9eb4, Func Offset: 0x6c4
	// Line 4275, Address: 0x1c9ebc, Func Offset: 0x6cc
	// Line 4276, Address: 0x1c9ec0, Func Offset: 0x6d0
	// Line 4277, Address: 0x1c9ec4, Func Offset: 0x6d4
	// Line 4279, Address: 0x1c9ecc, Func Offset: 0x6dc
	// Line 4280, Address: 0x1c9ed0, Func Offset: 0x6e0
	// Line 4281, Address: 0x1c9ed4, Func Offset: 0x6e4
	// Line 4282, Address: 0x1c9edc, Func Offset: 0x6ec
	// Line 4283, Address: 0x1c9ee0, Func Offset: 0x6f0
	// Line 4284, Address: 0x1c9ee4, Func Offset: 0x6f4
	// Line 4285, Address: 0x1c9eec, Func Offset: 0x6fc
	// Line 4286, Address: 0x1c9ef0, Func Offset: 0x700
	// Line 4287, Address: 0x1c9ef4, Func Offset: 0x704
	// Line 4288, Address: 0x1c9efc, Func Offset: 0x70c
	// Line 4289, Address: 0x1c9f00, Func Offset: 0x710
	// Line 4290, Address: 0x1c9f04, Func Offset: 0x714
	// Line 4289, Address: 0x1c9f08, Func Offset: 0x718
	// Line 4291, Address: 0x1c9f0c, Func Offset: 0x71c
	// Line 4292, Address: 0x1c9f14, Func Offset: 0x724
	// Line 4293, Address: 0x1c9f18, Func Offset: 0x728
	// Line 4294, Address: 0x1c9f1c, Func Offset: 0x72c
	// Line 4293, Address: 0x1c9f20, Func Offset: 0x730
	// Line 4295, Address: 0x1c9f24, Func Offset: 0x734
	// Line 4296, Address: 0x1c9f2c, Func Offset: 0x73c
	// Line 4297, Address: 0x1c9f30, Func Offset: 0x740
	// Line 4300, Address: 0x1c9f38, Func Offset: 0x748
	// Line 4301, Address: 0x1c9f40, Func Offset: 0x750
	// Line 4302, Address: 0x1c9f4c, Func Offset: 0x75c
	// Line 4304, Address: 0x1c9f58, Func Offset: 0x768
	// Line 4305, Address: 0x1c9f64, Func Offset: 0x774
	// Line 4306, Address: 0x1c9f7c, Func Offset: 0x78c
	// Line 4307, Address: 0x1c9f8c, Func Offset: 0x79c
	// Line 4308, Address: 0x1c9f98, Func Offset: 0x7a8
	// Line 4310, Address: 0x1c9fa8, Func Offset: 0x7b8
	// Func End, Address: 0x1c9fc8, Func Offset: 0x7d8
}

// 
// Start address: 0x1c9fd0
void EnemyJinmenChangeAnimeSpeed(sfObj* obj)
{
	EnemyJinmenWork* ew;
	// Line 4314, Address: 0x1c9fd0, Func Offset: 0
	// Line 4316, Address: 0x1c9fe0, Func Offset: 0x10
	// Line 4317, Address: 0x1c9fec, Func Offset: 0x1c
	// Line 4318, Address: 0x1ca010, Func Offset: 0x40
	// Line 4317, Address: 0x1ca014, Func Offset: 0x44
	// Line 4318, Address: 0x1ca020, Func Offset: 0x50
	// Line 4319, Address: 0x1ca030, Func Offset: 0x60
	// Line 4320, Address: 0x1ca04c, Func Offset: 0x7c
	// Line 4321, Address: 0x1ca050, Func Offset: 0x80
	// Line 4322, Address: 0x1ca05c, Func Offset: 0x8c
	// Func End, Address: 0x1ca070, Func Offset: 0xa0
}

// 
// Start address: 0x1ca070
void EnemyJinmenAttackSet(sfObj* obj)
{
	EnemyJinmenWork* ew;
	int fr;
	sfCldPart* pcp;
	_anon3* psp;
	GameItem item;
	// Line 4326, Address: 0x1ca070, Func Offset: 0
	// Line 4329, Address: 0x1ca084, Func Offset: 0x14
	// Line 4330, Address: 0x1ca090, Func Offset: 0x20
	// Line 4331, Address: 0x1ca0b4, Func Offset: 0x44
	// Line 4333, Address: 0x1ca0b8, Func Offset: 0x48
	// Line 4336, Address: 0x1ca0c0, Func Offset: 0x50
	// Line 4338, Address: 0x1ca0c8, Func Offset: 0x58
	// Line 4340, Address: 0x1ca0cc, Func Offset: 0x5c
	// Line 4341, Address: 0x1ca0d0, Func Offset: 0x60
	// Line 4342, Address: 0x1ca0e8, Func Offset: 0x78
	// Line 4343, Address: 0x1ca0f4, Func Offset: 0x84
	// Line 4350, Address: 0x1ca130, Func Offset: 0xc0
	// Line 4351, Address: 0x1ca140, Func Offset: 0xd0
	// Line 4353, Address: 0x1ca158, Func Offset: 0xe8
	// Line 4354, Address: 0x1ca170, Func Offset: 0x100
	// Line 4355, Address: 0x1ca174, Func Offset: 0x104
	// Line 4356, Address: 0x1ca180, Func Offset: 0x110
	// Line 4355, Address: 0x1ca184, Func Offset: 0x114
	// Line 4356, Address: 0x1ca190, Func Offset: 0x120
	// Line 4358, Address: 0x1ca228, Func Offset: 0x1b8
	// Line 4359, Address: 0x1ca230, Func Offset: 0x1c0
	// Line 4360, Address: 0x1ca244, Func Offset: 0x1d4
	// Line 4372, Address: 0x1ca24c, Func Offset: 0x1dc
	// Line 4373, Address: 0x1ca250, Func Offset: 0x1e0
	// Line 4374, Address: 0x1ca258, Func Offset: 0x1e8
	// Line 4377, Address: 0x1ca270, Func Offset: 0x200
	// Line 4378, Address: 0x1ca29c, Func Offset: 0x22c
	// Line 4379, Address: 0x1ca2a0, Func Offset: 0x230
	// Line 4383, Address: 0x1ca2d4, Func Offset: 0x264
	// Line 4384, Address: 0x1ca2e0, Func Offset: 0x270
	// Line 4385, Address: 0x1ca2e8, Func Offset: 0x278
	// Line 4386, Address: 0x1ca2f8, Func Offset: 0x288
	// Line 4387, Address: 0x1ca304, Func Offset: 0x294
	// Line 4392, Address: 0x1ca30c, Func Offset: 0x29c
	// Line 4393, Address: 0x1ca310, Func Offset: 0x2a0
	// Line 4394, Address: 0x1ca31c, Func Offset: 0x2ac
	// Line 4400, Address: 0x1ca320, Func Offset: 0x2b0
	// Func End, Address: 0x1ca338, Func Offset: 0x2c8
}

// 
// Start address: 0x1ca340
int EnemyJinmenCheckGather(sfObj* obj)
{
	int id;
	// Line 4404, Address: 0x1ca340, Func Offset: 0
	// Line 4406, Address: 0x1ca34c, Func Offset: 0xc
	// Line 4408, Address: 0x1ca364, Func Offset: 0x24
	// Line 4409, Address: 0x1ca36c, Func Offset: 0x2c
	// Line 4411, Address: 0x1ca384, Func Offset: 0x44
	// Line 4413, Address: 0x1ca388, Func Offset: 0x48
	// Func End, Address: 0x1ca398, Func Offset: 0x58
}

// 
// Start address: 0x1ca3a0
int EnemyJinmenCanAttack(sfObj* obj)
{
	EnemyJinmenWork* ew;
	// Line 4417, Address: 0x1ca3a0, Func Offset: 0
	// Line 4419, Address: 0x1ca3b0, Func Offset: 0x10
	// Line 4420, Address: 0x1ca3b8, Func Offset: 0x18
	// Line 4421, Address: 0x1ca3e0, Func Offset: 0x40
	// Line 4422, Address: 0x1ca3e8, Func Offset: 0x48
	// Line 4424, Address: 0x1ca408, Func Offset: 0x68
	// Func End, Address: 0x1ca41c, Func Offset: 0x7c
}

// 
// Start address: 0x1ca420
void EnemyJinmenSetGather(sfObj* obj)
{
	// Line 4428, Address: 0x1ca420, Func Offset: 0
	// Line 4429, Address: 0x1ca42c, Func Offset: 0xc
	// Line 4432, Address: 0x1ca458, Func Offset: 0x38
	// Func End, Address: 0x1ca468, Func Offset: 0x48
}

// 
// Start address: 0x1ca470
void EnemyJinmenSetGatherA(sfObj* obj)
{
	// Line 4436, Address: 0x1ca470, Func Offset: 0
	// Line 4437, Address: 0x1ca47c, Func Offset: 0xc
	// Line 4440, Address: 0x1ca4a8, Func Offset: 0x38
	// Func End, Address: 0x1ca4b8, Func Offset: 0x48
}

// 
// Start address: 0x1ca4c0
void EnemyJinmenSoundStart(sfObj* obj)
{
	// Line 4453, Address: 0x1ca4c0, Func Offset: 0
	// Func End, Address: 0x1ca4c8, Func Offset: 0x8
}

// 
// Start address: 0x1ca4d0
void EnemyJinmenSoundStop(sfObj* obj)
{
	// Line 4459, Address: 0x1ca4d0, Func Offset: 0
	// Func End, Address: 0x1ca4d8, Func Offset: 0x8
}

// 
// Start address: 0x1ca4e0
void EnemyJinmenLeftItemSet(sfObj* obj)
{
	EnemyJinmenWork* ew;
	GameItem item;
	EnemyMeasureResult mres;
	sgBone* bone;
	float* bpos;
	float* brot;
	float tpos[4];
	float vec[4];
	float trot[4];
	float trot2[4];
	// Line 4464, Address: 0x1ca4e0, Func Offset: 0
	// Line 4473, Address: 0x1ca4f8, Func Offset: 0x18
	// Line 4474, Address: 0x1ca504, Func Offset: 0x24
	// Line 4475, Address: 0x1ca50c, Func Offset: 0x2c
	// Line 4476, Address: 0x1ca518, Func Offset: 0x38
	// Line 4478, Address: 0x1ca558, Func Offset: 0x78
	// Line 4479, Address: 0x1ca568, Func Offset: 0x88
	// Line 4481, Address: 0x1ca570, Func Offset: 0x90
	// Line 4482, Address: 0x1ca580, Func Offset: 0xa0
	// Line 4484, Address: 0x1ca588, Func Offset: 0xa8
	// Line 4485, Address: 0x1ca598, Func Offset: 0xb8
	// Line 4487, Address: 0x1ca5a0, Func Offset: 0xc0
	// Line 4488, Address: 0x1ca5b0, Func Offset: 0xd0
	// Line 4490, Address: 0x1ca5b8, Func Offset: 0xd8
	// Line 4492, Address: 0x1ca5cc, Func Offset: 0xec
	// Line 4494, Address: 0x1ca5d0, Func Offset: 0xf0
	// Line 4495, Address: 0x1ca5dc, Func Offset: 0xfc
	// Line 4496, Address: 0x1ca5ec, Func Offset: 0x10c
	// Line 4497, Address: 0x1ca5f4, Func Offset: 0x114
	// Line 4498, Address: 0x1ca604, Func Offset: 0x124
	// Line 4499, Address: 0x1ca60c, Func Offset: 0x12c
	// Line 4500, Address: 0x1ca618, Func Offset: 0x138
	// Line 4499, Address: 0x1ca61c, Func Offset: 0x13c
	// Line 4500, Address: 0x1ca620, Func Offset: 0x140
	// Line 4499, Address: 0x1ca628, Func Offset: 0x148
	// Line 4500, Address: 0x1ca62c, Func Offset: 0x14c
	// Line 4501, Address: 0x1ca634, Func Offset: 0x154
	// Line 4502, Address: 0x1ca650, Func Offset: 0x170
	// Line 4504, Address: 0x1ca660, Func Offset: 0x180
	// Line 4503, Address: 0x1ca664, Func Offset: 0x184
	// Line 4504, Address: 0x1ca668, Func Offset: 0x188
	// Line 4503, Address: 0x1ca66c, Func Offset: 0x18c
	// Line 4504, Address: 0x1ca67c, Func Offset: 0x19c
	// Line 4505, Address: 0x1ca68c, Func Offset: 0x1ac
	// Line 4506, Address: 0x1ca6ac, Func Offset: 0x1cc
	// Line 4508, Address: 0x1ca6b4, Func Offset: 0x1d4
	// Line 4509, Address: 0x1ca6c0, Func Offset: 0x1e0
	// Line 4510, Address: 0x1ca6d4, Func Offset: 0x1f4
	// Line 4511, Address: 0x1ca6d8, Func Offset: 0x1f8
	// Line 4512, Address: 0x1ca6f4, Func Offset: 0x214
	// Line 4513, Address: 0x1ca710, Func Offset: 0x230
	// Line 4514, Address: 0x1ca720, Func Offset: 0x240
	// Line 4516, Address: 0x1ca738, Func Offset: 0x258
	// Line 4517, Address: 0x1ca754, Func Offset: 0x274
	// Line 4518, Address: 0x1ca764, Func Offset: 0x284
	// Line 4520, Address: 0x1ca77c, Func Offset: 0x29c
	// Line 4521, Address: 0x1ca780, Func Offset: 0x2a0
	// Line 4522, Address: 0x1ca798, Func Offset: 0x2b8
	// Line 4523, Address: 0x1ca7b0, Func Offset: 0x2d0
	// Line 4524, Address: 0x1ca7cc, Func Offset: 0x2ec
	// Line 4525, Address: 0x1ca7dc, Func Offset: 0x2fc
	// Line 4526, Address: 0x1ca7f8, Func Offset: 0x318
	// Line 4527, Address: 0x1ca808, Func Offset: 0x328
	// Line 4528, Address: 0x1ca820, Func Offset: 0x340
	// Line 4529, Address: 0x1ca834, Func Offset: 0x354
	// Line 4533, Address: 0x1ca83c, Func Offset: 0x35c
	// Line 4534, Address: 0x1ca840, Func Offset: 0x360
	// Func End, Address: 0x1ca85c, Func Offset: 0x37c
}

// 
// Start address: 0x1ca860
void EnemyJinmenFindPlayer(sfObj* obj, void(*func)(void*, int))
{
	EnemyJinmenWork* ew;
	EnemySenseData* es;
	// Line 4540, Address: 0x1ca860, Func Offset: 0
	// Line 4543, Address: 0x1ca87c, Func Offset: 0x1c
	// Line 4544, Address: 0x1ca884, Func Offset: 0x24
	// Line 4543, Address: 0x1ca888, Func Offset: 0x28
	// Line 4545, Address: 0x1ca88c, Func Offset: 0x2c
	// Line 4546, Address: 0x1ca898, Func Offset: 0x38
	// Line 4547, Address: 0x1ca8a4, Func Offset: 0x44
	// Line 4548, Address: 0x1ca8b4, Func Offset: 0x54
	// Line 4549, Address: 0x1ca8b8, Func Offset: 0x58
	// Line 4548, Address: 0x1ca8bc, Func Offset: 0x5c
	// Line 4550, Address: 0x1ca8c0, Func Offset: 0x60
	// Line 4549, Address: 0x1ca8c4, Func Offset: 0x64
	// Line 4550, Address: 0x1ca8c8, Func Offset: 0x68
	// Line 4551, Address: 0x1ca8cc, Func Offset: 0x6c
	// Line 4552, Address: 0x1ca8d8, Func Offset: 0x78
	// Line 4553, Address: 0x1ca8e0, Func Offset: 0x80
	// Line 4552, Address: 0x1ca8e4, Func Offset: 0x84
	// Line 4554, Address: 0x1ca8e8, Func Offset: 0x88
	// Line 4553, Address: 0x1ca8ec, Func Offset: 0x8c
	// Line 4554, Address: 0x1ca8f0, Func Offset: 0x90
	// Line 4556, Address: 0x1ca8f8, Func Offset: 0x98
	// Line 4559, Address: 0x1ca900, Func Offset: 0xa0
	// Line 4557, Address: 0x1ca904, Func Offset: 0xa4
	// Line 4558, Address: 0x1ca908, Func Offset: 0xa8
	// Line 4559, Address: 0x1ca90c, Func Offset: 0xac
	// Line 4560, Address: 0x1ca914, Func Offset: 0xb4
	// Line 4561, Address: 0x1ca92c, Func Offset: 0xcc
	// Line 4562, Address: 0x1ca938, Func Offset: 0xd8
	// Line 4564, Address: 0x1ca950, Func Offset: 0xf0
	// Func End, Address: 0x1ca96c, Func Offset: 0x10c
}

// 
// Start address: 0x1ca970
void EnemyJinmenNoFindPlayer(sfObj* obj, void(*func)(void*, int))
{
	EnemyJinmenWork* ew;
	EnemySenseData* es;
	// Line 4568, Address: 0x1ca970, Func Offset: 0
	// Line 4571, Address: 0x1ca98c, Func Offset: 0x1c
	// Line 4572, Address: 0x1ca994, Func Offset: 0x24
	// Line 4571, Address: 0x1ca998, Func Offset: 0x28
	// Line 4573, Address: 0x1ca99c, Func Offset: 0x2c
	// Line 4574, Address: 0x1ca9a8, Func Offset: 0x38
	// Line 4575, Address: 0x1ca9b4, Func Offset: 0x44
	// Line 4576, Address: 0x1ca9c4, Func Offset: 0x54
	// Line 4577, Address: 0x1ca9c8, Func Offset: 0x58
	// Line 4576, Address: 0x1ca9cc, Func Offset: 0x5c
	// Line 4578, Address: 0x1ca9d0, Func Offset: 0x60
	// Line 4577, Address: 0x1ca9d4, Func Offset: 0x64
	// Line 4578, Address: 0x1ca9d8, Func Offset: 0x68
	// Line 4579, Address: 0x1ca9dc, Func Offset: 0x6c
	// Line 4580, Address: 0x1ca9e8, Func Offset: 0x78
	// Line 4581, Address: 0x1ca9f0, Func Offset: 0x80
	// Line 4582, Address: 0x1ca9f8, Func Offset: 0x88
	// Line 4583, Address: 0x1caa04, Func Offset: 0x94
	// Line 4584, Address: 0x1caa08, Func Offset: 0x98
	// Line 4587, Address: 0x1caa10, Func Offset: 0xa0
	// Line 4585, Address: 0x1caa14, Func Offset: 0xa4
	// Line 4586, Address: 0x1caa1c, Func Offset: 0xac
	// Line 4587, Address: 0x1caa20, Func Offset: 0xb0
	// Line 4588, Address: 0x1caa28, Func Offset: 0xb8
	// Line 4589, Address: 0x1caa40, Func Offset: 0xd0
	// Line 4590, Address: 0x1caa48, Func Offset: 0xd8
	// Line 4592, Address: 0x1caa60, Func Offset: 0xf0
	// Func End, Address: 0x1caa7c, Func Offset: 0x10c
}

// 
// Start address: 0x1caa80
void EnemyJinmenFindPlayerAttack(sfObj* obj, void(*func)(void*, int))
{
	EnemyJinmenWork* ew;
	EnemySenseData* es;
	// Line 4596, Address: 0x1caa80, Func Offset: 0
	// Line 4599, Address: 0x1caa9c, Func Offset: 0x1c
	// Line 4600, Address: 0x1caaa4, Func Offset: 0x24
	// Line 4601, Address: 0x1caaa8, Func Offset: 0x28
	// Line 4602, Address: 0x1caabc, Func Offset: 0x3c
	// Line 4603, Address: 0x1caac8, Func Offset: 0x48
	// Line 4604, Address: 0x1caad4, Func Offset: 0x54
	// Line 4605, Address: 0x1caae4, Func Offset: 0x64
	// Line 4606, Address: 0x1caae8, Func Offset: 0x68
	// Line 4607, Address: 0x1caaf0, Func Offset: 0x70
	// Line 4609, Address: 0x1caaf8, Func Offset: 0x78
	// Line 4614, Address: 0x1cab00, Func Offset: 0x80
	// Line 4610, Address: 0x1cab04, Func Offset: 0x84
	// Line 4611, Address: 0x1cab0c, Func Offset: 0x8c
	// Line 4610, Address: 0x1cab10, Func Offset: 0x90
	// Line 4611, Address: 0x1cab14, Func Offset: 0x94
	// Line 4612, Address: 0x1cab18, Func Offset: 0x98
	// Line 4613, Address: 0x1cab1c, Func Offset: 0x9c
	// Line 4614, Address: 0x1cab20, Func Offset: 0xa0
	// Line 4615, Address: 0x1cab28, Func Offset: 0xa8
	// Line 4616, Address: 0x1cab40, Func Offset: 0xc0
	// Line 4617, Address: 0x1cab48, Func Offset: 0xc8
	// Line 4619, Address: 0x1cab60, Func Offset: 0xe0
	// Func End, Address: 0x1cab7c, Func Offset: 0xfc
}

// 
// Start address: 0x1cab80
void EnemyJinmenSetEventDamageCheck(sfObj* obj)
{
	// Line 4624, Address: 0x1cab80, Func Offset: 0
	// Line 4625, Address: 0x1cab8c, Func Offset: 0xc
	// Line 4627, Address: 0x1cabd0, Func Offset: 0x50
	// Line 4629, Address: 0x1cabec, Func Offset: 0x6c
	// Line 4630, Address: 0x1cabf4, Func Offset: 0x74
	// Line 4631, Address: 0x1cabf8, Func Offset: 0x78
	// Line 4633, Address: 0x1cac10, Func Offset: 0x90
	// Line 4635, Address: 0x1cac28, Func Offset: 0xa8
	// Line 4636, Address: 0x1cac30, Func Offset: 0xb0
	// Line 4639, Address: 0x1cac4c, Func Offset: 0xcc
	// Line 4643, Address: 0x1cac54, Func Offset: 0xd4
	// Line 4644, Address: 0x1cac58, Func Offset: 0xd8
	// Line 4645, Address: 0x1cac6c, Func Offset: 0xec
	// Line 4647, Address: 0x1cac84, Func Offset: 0x104
	// Line 4650, Address: 0x1cac8c, Func Offset: 0x10c
	// Line 4651, Address: 0x1cac90, Func Offset: 0x110
	// Line 4655, Address: 0x1caca8, Func Offset: 0x128
	// Func End, Address: 0x1cacb8, Func Offset: 0x138
}

// 
// Start address: 0x1cacc0
void EnemyJinmenSetEventGather(sfObj* obj)
{
	// Line 4660, Address: 0x1cacc4, Func Offset: 0x4
	// Func End, Address: 0x1cacdc, Func Offset: 0x1c
}

// 
// Start address: 0x1cace0
EnemyBattleDamageAnimeNumber damage_anime(BattleDamageType type, float* dir, int down, int mode)
{
	EnemyBattleDamageAnimeNumber m;
	float r;
	// Line 4669, Address: 0x1cace0, Func Offset: 0
	// Line 4673, Address: 0x1cace4, Func Offset: 0x4
	// Line 4669, Address: 0x1cace8, Func Offset: 0x8
	// Line 4673, Address: 0x1cacec, Func Offset: 0xc
	// Line 4669, Address: 0x1cacf0, Func Offset: 0x10
	// Line 4673, Address: 0x1cad0c, Func Offset: 0x2c
	// Line 4675, Address: 0x1cad24, Func Offset: 0x44
	// Line 4676, Address: 0x1cad2c, Func Offset: 0x4c
	// Line 4677, Address: 0x1cad54, Func Offset: 0x74
	// Line 4678, Address: 0x1cad58, Func Offset: 0x78
	// Line 4679, Address: 0x1cad60, Func Offset: 0x80
	// Line 4681, Address: 0x1cad88, Func Offset: 0xa8
	// Line 4682, Address: 0x1cad90, Func Offset: 0xb0
	// Line 4684, Address: 0x1cad98, Func Offset: 0xb8
	// Line 4685, Address: 0x1cada0, Func Offset: 0xc0
	// Line 4687, Address: 0x1cadc8, Func Offset: 0xe8
	// Line 4688, Address: 0x1cadd0, Func Offset: 0xf0
	// Line 4691, Address: 0x1cadd8, Func Offset: 0xf8
	// Line 4696, Address: 0x1cade0, Func Offset: 0x100
	// Line 4697, Address: 0x1cade8, Func Offset: 0x108
	// Line 4700, Address: 0x1cadf0, Func Offset: 0x110
	// Line 4701, Address: 0x1cadf8, Func Offset: 0x118
	// Line 4703, Address: 0x1cae10, Func Offset: 0x130
	// Line 4704, Address: 0x1cae18, Func Offset: 0x138
	// Line 4706, Address: 0x1cae1c, Func Offset: 0x13c
	// Line 4707, Address: 0x1cae28, Func Offset: 0x148
	// Line 4709, Address: 0x1cae70, Func Offset: 0x190
	// Line 4710, Address: 0x1cae78, Func Offset: 0x198
	// Line 4713, Address: 0x1cae80, Func Offset: 0x1a0
	// Line 4716, Address: 0x1cae88, Func Offset: 0x1a8
	// Line 4717, Address: 0x1cae90, Func Offset: 0x1b0
	// Line 4718, Address: 0x1cae94, Func Offset: 0x1b4
	// Line 4719, Address: 0x1caea0, Func Offset: 0x1c0
	// Line 4721, Address: 0x1caea8, Func Offset: 0x1c8
	// Line 4724, Address: 0x1caeb0, Func Offset: 0x1d0
	// Line 4725, Address: 0x1caeb8, Func Offset: 0x1d8
	// Line 4727, Address: 0x1caed0, Func Offset: 0x1f0
	// Line 4728, Address: 0x1caed8, Func Offset: 0x1f8
	// Line 4730, Address: 0x1caee0, Func Offset: 0x200
	// Line 4731, Address: 0x1caee8, Func Offset: 0x208
	// Line 4733, Address: 0x1caf1c, Func Offset: 0x23c
	// Line 4734, Address: 0x1caf28, Func Offset: 0x248
	// Line 4737, Address: 0x1caf30, Func Offset: 0x250
	// Line 4740, Address: 0x1caf38, Func Offset: 0x258
	// Line 4741, Address: 0x1caf40, Func Offset: 0x260
	// Line 4742, Address: 0x1caf44, Func Offset: 0x264
	// Line 4743, Address: 0x1caf50, Func Offset: 0x270
	// Line 4745, Address: 0x1caf58, Func Offset: 0x278
	// Line 4747, Address: 0x1caf60, Func Offset: 0x280
	// Line 4749, Address: 0x1caf68, Func Offset: 0x288
	// Line 4750, Address: 0x1caf70, Func Offset: 0x290
	// Line 4752, Address: 0x1caf78, Func Offset: 0x298
	// Line 4754, Address: 0x1caf80, Func Offset: 0x2a0
	// Line 4755, Address: 0x1caf88, Func Offset: 0x2a8
	// Line 4757, Address: 0x1cafac, Func Offset: 0x2cc
	// Line 4758, Address: 0x1cafb8, Func Offset: 0x2d8
	// Line 4760, Address: 0x1cafc0, Func Offset: 0x2e0
	// Line 4761, Address: 0x1cafc8, Func Offset: 0x2e8
	// Line 4763, Address: 0x1cafec, Func Offset: 0x30c
	// Line 4764, Address: 0x1caff8, Func Offset: 0x318
	// Line 4767, Address: 0x1cb000, Func Offset: 0x320
	// Line 4769, Address: 0x1cb008, Func Offset: 0x328
	// Line 4770, Address: 0x1cb010, Func Offset: 0x330
	// Line 4772, Address: 0x1cb034, Func Offset: 0x354
	// Line 4773, Address: 0x1cb040, Func Offset: 0x360
	// Line 4775, Address: 0x1cb048, Func Offset: 0x368
	// Line 4776, Address: 0x1cb050, Func Offset: 0x370
	// Line 4778, Address: 0x1cb074, Func Offset: 0x394
	// Line 4779, Address: 0x1cb080, Func Offset: 0x3a0
	// Line 4782, Address: 0x1cb088, Func Offset: 0x3a8
	// Line 4784, Address: 0x1cb090, Func Offset: 0x3b0
	// Line 4785, Address: 0x1cb098, Func Offset: 0x3b8
	// Line 4787, Address: 0x1cb0b8, Func Offset: 0x3d8
	// Line 4788, Address: 0x1cb0c0, Func Offset: 0x3e0
	// Line 4790, Address: 0x1cb0c8, Func Offset: 0x3e8
	// Line 4791, Address: 0x1cb0d0, Func Offset: 0x3f0
	// Line 4793, Address: 0x1cb0f0, Func Offset: 0x410
	// Line 4794, Address: 0x1cb0f8, Func Offset: 0x418
	// Line 4797, Address: 0x1cb100, Func Offset: 0x420
	// Line 4799, Address: 0x1cb108, Func Offset: 0x428
	// Line 4800, Address: 0x1cb110, Func Offset: 0x430
	// Line 4802, Address: 0x1cb158, Func Offset: 0x478
	// Line 4803, Address: 0x1cb160, Func Offset: 0x480
	// Line 4805, Address: 0x1cb168, Func Offset: 0x488
	// Line 4806, Address: 0x1cb170, Func Offset: 0x490
	// Line 4808, Address: 0x1cb1b8, Func Offset: 0x4d8
	// Line 4809, Address: 0x1cb1c0, Func Offset: 0x4e0
	// Line 4812, Address: 0x1cb1c8, Func Offset: 0x4e8
	// Line 4815, Address: 0x1cb1d0, Func Offset: 0x4f0
	// Line 4817, Address: 0x1cb1d8, Func Offset: 0x4f8
	// Line 4819, Address: 0x1cb1f8, Func Offset: 0x518
	// Line 4820, Address: 0x1cb200, Func Offset: 0x520
	// Line 4822, Address: 0x1cb208, Func Offset: 0x528
	// Line 4825, Address: 0x1cb210, Func Offset: 0x530
	// Line 4827, Address: 0x1cb214, Func Offset: 0x534
	// Line 4828, Address: 0x1cb218, Func Offset: 0x538
	// Line 4829, Address: 0x1cb21c, Func Offset: 0x53c
	// Func End, Address: 0x1cb23c, Func Offset: 0x55c
}

// 
// Start address: 0x1cb240
int EnemyJinmenAddDamage(sfObj* obj, EnemyBattleDamage* bd)
{
	EnemyJinmenWork* ew;
	float dir[4];
	float rrot[4];
	int motion;
	int d;
	int nextstep;
	float s;
	// Line 4833, Address: 0x1cb240, Func Offset: 0
	// Line 4840, Address: 0x1cb264, Func Offset: 0x24
	// Line 4841, Address: 0x1cb270, Func Offset: 0x30
	// Line 4842, Address: 0x1cb284, Func Offset: 0x44
	// Line 4843, Address: 0x1cb294, Func Offset: 0x54
	// Line 4844, Address: 0x1cb2b4, Func Offset: 0x74
	// Line 4846, Address: 0x1cb2d8, Func Offset: 0x98
	// Line 4844, Address: 0x1cb2dc, Func Offset: 0x9c
	// Line 4846, Address: 0x1cb2e0, Func Offset: 0xa0
	// Line 4847, Address: 0x1cb2e4, Func Offset: 0xa4
	// Line 4848, Address: 0x1cb2f0, Func Offset: 0xb0
	// Line 4851, Address: 0x1cb2fc, Func Offset: 0xbc
	// Line 4852, Address: 0x1cb300, Func Offset: 0xc0
	// Line 4855, Address: 0x1cb31c, Func Offset: 0xdc
	// Line 4856, Address: 0x1cb338, Func Offset: 0xf8
	// Line 4859, Address: 0x1cb340, Func Offset: 0x100
	// Line 4862, Address: 0x1cb360, Func Offset: 0x120
	// Line 4863, Address: 0x1cb368, Func Offset: 0x128
	// Line 4866, Address: 0x1cb378, Func Offset: 0x138
	// Line 4868, Address: 0x1cb380, Func Offset: 0x140
	// Line 4869, Address: 0x1cb384, Func Offset: 0x144
	// Line 4872, Address: 0x1cb388, Func Offset: 0x148
	// Line 4873, Address: 0x1cb3b0, Func Offset: 0x170
	// Line 4874, Address: 0x1cb3d0, Func Offset: 0x190
	// Line 4875, Address: 0x1cb3e0, Func Offset: 0x1a0
	// Line 4876, Address: 0x1cb3e4, Func Offset: 0x1a4
	// Line 4877, Address: 0x1cb3e8, Func Offset: 0x1a8
	// Line 4887, Address: 0x1cb440, Func Offset: 0x200
	// Line 4889, Address: 0x1cb448, Func Offset: 0x208
	// Line 4891, Address: 0x1cb450, Func Offset: 0x210
	// Line 4892, Address: 0x1cb45c, Func Offset: 0x21c
	// Line 4893, Address: 0x1cb468, Func Offset: 0x228
	// Line 4894, Address: 0x1cb46c, Func Offset: 0x22c
	// Func End, Address: 0x1cb490, Func Offset: 0x250
}

// 
// Start address: 0x1cb490
void EnemyJinmenSetStairsDown(sfObj* obj, float* normal)
{
	float rot[4];
	// Line 4898, Address: 0x1cb490, Func Offset: 0
	// Line 4900, Address: 0x1cb4a4, Func Offset: 0x14
	// Line 4901, Address: 0x1cb4bc, Func Offset: 0x2c
	// Line 4902, Address: 0x1cb4c8, Func Offset: 0x38
	// Line 4903, Address: 0x1cb4d8, Func Offset: 0x48
	// Line 4904, Address: 0x1cb4e8, Func Offset: 0x58
	// Line 4905, Address: 0x1cb4f4, Func Offset: 0x64
	// Func End, Address: 0x1cb508, Func Offset: 0x78
}

// 
// Start address: 0x1cb510
void EnemyEDJinmenAdditionalDamage(void* obj)
{
	EnemyJinmenWork* ew;
	EnemyBattleDamage bd;
	float vec[4];
	int s;
	int nextstep;
	// Line 4909, Address: 0x1cb510, Func Offset: 0
	// Line 4912, Address: 0x1cb528, Func Offset: 0x18
	// Line 4913, Address: 0x1cb534, Func Offset: 0x24
	// Line 4914, Address: 0x1cb540, Func Offset: 0x30
	// Line 4915, Address: 0x1cb550, Func Offset: 0x40
	// Line 4916, Address: 0x1cb560, Func Offset: 0x50
	// Line 4917, Address: 0x1cb570, Func Offset: 0x60
	// Line 4918, Address: 0x1cb584, Func Offset: 0x74
	// Line 4919, Address: 0x1cb5ac, Func Offset: 0x9c
	// Line 4920, Address: 0x1cb5b4, Func Offset: 0xa4
	// Line 4921, Address: 0x1cb5c0, Func Offset: 0xb0
	// Line 4923, Address: 0x1cb5cc, Func Offset: 0xbc
	// Line 4924, Address: 0x1cb5d8, Func Offset: 0xc8
	// Line 4925, Address: 0x1cb5ec, Func Offset: 0xdc
	// Line 4926, Address: 0x1cb608, Func Offset: 0xf8
	// Line 4928, Address: 0x1cb60c, Func Offset: 0xfc
	// Line 4929, Address: 0x1cb610, Func Offset: 0x100
	// Line 4930, Address: 0x1cb620, Func Offset: 0x110
	// Line 4934, Address: 0x1cb648, Func Offset: 0x138
	// Line 4935, Address: 0x1cb654, Func Offset: 0x144
	// Line 4936, Address: 0x1cb66c, Func Offset: 0x15c
	// Line 4940, Address: 0x1cb6b8, Func Offset: 0x1a8
	// Line 4939, Address: 0x1cb6bc, Func Offset: 0x1ac
	// Line 4942, Address: 0x1cb6c0, Func Offset: 0x1b0
	// Line 4943, Address: 0x1cb6cc, Func Offset: 0x1bc
	// Line 4944, Address: 0x1cb6d8, Func Offset: 0x1c8
	// Line 4945, Address: 0x1cb6e0, Func Offset: 0x1d0
	// Line 4947, Address: 0x1cb6e8, Func Offset: 0x1d8
	// Line 4948, Address: 0x1cb6f0, Func Offset: 0x1e0
	// Line 4950, Address: 0x1cb6fc, Func Offset: 0x1ec
	// Line 4951, Address: 0x1cb700, Func Offset: 0x1f0
	// Line 4952, Address: 0x1cb70c, Func Offset: 0x1fc
	// Line 4953, Address: 0x1cb710, Func Offset: 0x200
	// Func End, Address: 0x1cb72c, Func Offset: 0x21c
}

// 
// Start address: 0x1cb730
void EnemyEDJinmenAdditionalDamageDown(void* obj)
{
	EnemyJinmenWork* ew;
	EnemyBattleDamage bd;
	float pos[4];
	// Line 4957, Address: 0x1cb730, Func Offset: 0
	// Line 4960, Address: 0x1cb744, Func Offset: 0x14
	// Line 4961, Address: 0x1cb750, Func Offset: 0x20
	// Line 4962, Address: 0x1cb75c, Func Offset: 0x2c
	// Line 4963, Address: 0x1cb76c, Func Offset: 0x3c
	// Line 4964, Address: 0x1cb778, Func Offset: 0x48
	// Line 4965, Address: 0x1cb784, Func Offset: 0x54
	// Line 4966, Address: 0x1cb78c, Func Offset: 0x5c
	// Line 4967, Address: 0x1cb798, Func Offset: 0x68
	// Line 4968, Address: 0x1cb7a4, Func Offset: 0x74
	// Line 4969, Address: 0x1cb7a8, Func Offset: 0x78
	// Line 4970, Address: 0x1cb7b4, Func Offset: 0x84
	// Line 4971, Address: 0x1cb7c4, Func Offset: 0x94
	// Line 4972, Address: 0x1cb7d8, Func Offset: 0xa8
	// Line 4973, Address: 0x1cb800, Func Offset: 0xd0
	// Line 4974, Address: 0x1cb808, Func Offset: 0xd8
	// Line 4975, Address: 0x1cb828, Func Offset: 0xf8
	// Line 4976, Address: 0x1cb830, Func Offset: 0x100
	// Line 4977, Address: 0x1cb838, Func Offset: 0x108
	// Line 4978, Address: 0x1cb83c, Func Offset: 0x10c
	// Line 4979, Address: 0x1cb840, Func Offset: 0x110
	// Line 4982, Address: 0x1cb848, Func Offset: 0x118
	// Line 4983, Address: 0x1cb858, Func Offset: 0x128
	// Line 4985, Address: 0x1cb868, Func Offset: 0x138
	// Line 4986, Address: 0x1cb87c, Func Offset: 0x14c
	// Line 4985, Address: 0x1cb880, Func Offset: 0x150
	// Line 4986, Address: 0x1cb884, Func Offset: 0x154
	// Line 4985, Address: 0x1cb888, Func Offset: 0x158
	// Line 4986, Address: 0x1cb890, Func Offset: 0x160
	// Line 4987, Address: 0x1cb898, Func Offset: 0x168
	// Line 4989, Address: 0x1cb8a4, Func Offset: 0x174
	// Line 4990, Address: 0x1cb8a8, Func Offset: 0x178
	// Func End, Address: 0x1cb8c0, Func Offset: 0x190
}

// 
// Start address: 0x1cb8c0
void EnemyEDJinmenRevival(void* obj)
{
	// Line 4994, Address: 0x1cb8c0, Func Offset: 0
	// Line 4995, Address: 0x1cb8c4, Func Offset: 0x4
	// Line 4994, Address: 0x1cb8c8, Func Offset: 0x8
	// Line 4995, Address: 0x1cb8cc, Func Offset: 0xc
	// Line 4994, Address: 0x1cb8d0, Func Offset: 0x10
	// Line 4995, Address: 0x1cb8d4, Func Offset: 0x14
	// Line 4996, Address: 0x1cb8dc, Func Offset: 0x1c
	// Line 4997, Address: 0x1cb8ec, Func Offset: 0x2c
	// Line 4998, Address: 0x1cb8fc, Func Offset: 0x3c
	// Line 4999, Address: 0x1cb910, Func Offset: 0x50
	// Line 5000, Address: 0x1cb918, Func Offset: 0x58
	// Line 5001, Address: 0x1cb920, Func Offset: 0x60
	// Line 5002, Address: 0x1cb92c, Func Offset: 0x6c
	// Line 5003, Address: 0x1cb930, Func Offset: 0x70
	// Func End, Address: 0x1cb940, Func Offset: 0x80
}

// 
// Start address: 0x1cb940
void EnemyEDJinmenBackStepEnd(void* obj)
{
	EnemyJinmenWork* ew;
	float* pos;
	float tpos[4];
	float vec[4];
	// Line 5007, Address: 0x1cb940, Func Offset: 0
	// Line 5011, Address: 0x1cb954, Func Offset: 0x14
	// Line 5012, Address: 0x1cb960, Func Offset: 0x20
	// Line 5013, Address: 0x1cb96c, Func Offset: 0x2c
	// Line 5014, Address: 0x1cb97c, Func Offset: 0x3c
	// Line 5015, Address: 0x1cb984, Func Offset: 0x44
	// Line 5016, Address: 0x1cb98c, Func Offset: 0x4c
	// Line 5017, Address: 0x1cb990, Func Offset: 0x50
	// Line 5018, Address: 0x1cb9a4, Func Offset: 0x64
	// Line 5019, Address: 0x1cb9ac, Func Offset: 0x6c
	// Line 5020, Address: 0x1cb9b8, Func Offset: 0x78
	// Line 5022, Address: 0x1cb9c0, Func Offset: 0x80
	// Line 5023, Address: 0x1cb9d8, Func Offset: 0x98
	// Line 5025, Address: 0x1cb9fc, Func Offset: 0xbc
	// Line 5026, Address: 0x1cba04, Func Offset: 0xc4
	// Line 5027, Address: 0x1cba10, Func Offset: 0xd0
	// Line 5028, Address: 0x1cba18, Func Offset: 0xd8
	// Line 5029, Address: 0x1cba24, Func Offset: 0xe4
	// Line 5030, Address: 0x1cba28, Func Offset: 0xe8
	// Line 5032, Address: 0x1cba30, Func Offset: 0xf0
	// Line 5033, Address: 0x1cba48, Func Offset: 0x108
	// Line 5035, Address: 0x1cba6c, Func Offset: 0x12c
	// Line 5037, Address: 0x1cba8c, Func Offset: 0x14c
	// Line 5038, Address: 0x1cba94, Func Offset: 0x154
	// Line 5039, Address: 0x1cba9c, Func Offset: 0x15c
	// Line 5040, Address: 0x1cbaa0, Func Offset: 0x160
	// Line 5041, Address: 0x1cbac0, Func Offset: 0x180
	// Line 5042, Address: 0x1cbacc, Func Offset: 0x18c
	// Line 5041, Address: 0x1cbad0, Func Offset: 0x190
	// Line 5042, Address: 0x1cbadc, Func Offset: 0x19c
	// Line 5043, Address: 0x1cbae4, Func Offset: 0x1a4
	// Line 5044, Address: 0x1cbaec, Func Offset: 0x1ac
	// Line 5045, Address: 0x1cbaf0, Func Offset: 0x1b0
	// Line 5046, Address: 0x1cbafc, Func Offset: 0x1bc
	// Line 5047, Address: 0x1cbb08, Func Offset: 0x1c8
	// Line 5052, Address: 0x1cbb10, Func Offset: 0x1d0
	// Line 5053, Address: 0x1cbb24, Func Offset: 0x1e4
	// Line 5054, Address: 0x1cbb4c, Func Offset: 0x20c
	// Line 5055, Address: 0x1cbb68, Func Offset: 0x228
	// Line 5056, Address: 0x1cbb80, Func Offset: 0x240
	// Line 5057, Address: 0x1cbb88, Func Offset: 0x248
	// Line 5059, Address: 0x1cbb90, Func Offset: 0x250
	// Line 5060, Address: 0x1cbb9c, Func Offset: 0x25c
	// Func End, Address: 0x1cbbb8, Func Offset: 0x278
}

// 
// Start address: 0x1cbbc0
int EnemyEDJinmenCheckGather(void* obj)
{
	// Line 5065, Address: 0x1cbbc0, Func Offset: 0
	// Func End, Address: 0x1cbbc8, Func Offset: 0x8
}

// 
// Start address: 0x1cbbd0
void EnemyEDJinmenGather(void* obj)
{
	EnemyJinmenWork* ew;
	// Line 5070, Address: 0x1cbbd0, Func Offset: 0
	// Line 5072, Address: 0x1cbbdc, Func Offset: 0xc
	// Line 5073, Address: 0x1cbbec, Func Offset: 0x1c
	// Line 5074, Address: 0x1cbbf4, Func Offset: 0x24
	// Line 5078, Address: 0x1cbc18, Func Offset: 0x48
	// Line 5080, Address: 0x1cbc20, Func Offset: 0x50
	// Func End, Address: 0x1cbc30, Func Offset: 0x60
}

// 
// Start address: 0x1cbc30
void EnemyEDJinmenExciteSoundCall(void* obj)
{
	// Line 5084, Address: 0x1cbc30, Func Offset: 0
	// Line 5085, Address: 0x1cbc3c, Func Offset: 0xc
	// Line 5086, Address: 0x1cbc50, Func Offset: 0x20
	// Line 5088, Address: 0x1cbc58, Func Offset: 0x28
	// Func End, Address: 0x1cbc68, Func Offset: 0x38
}

