typedef struct _anon0;
typedef struct EnemySenseData;
typedef struct sfObj;
typedef struct _anon1;
typedef struct EnemySearchData;
typedef struct EnemySearchPoint;
typedef struct EnemyTwinsWork;
typedef struct _anon2;
typedef struct sfOffsetAABB;
typedef union sfCldBody;
typedef struct _anon3;
typedef struct sfCldPart;
typedef struct _anon4;
typedef struct EnemyBattleDamage;
typedef struct sgBone;
typedef enum EnemyTwinsAnime : unsigned char;
typedef struct EnemyFootStepsData;
typedef struct _anon5;
typedef enum BattleAttackKind : unsigned char;
typedef union _anon6;
typedef union _anon7;
typedef struct EnemyManageDataOne;
typedef struct EnemyFootStepData;
typedef enum EnemySenseResultType : unsigned char;
typedef enum EnemyPlayerType : unsigned char;
typedef enum EnemyManageEntryType : unsigned char;
typedef struct EnemySenseResult;
typedef enum BattleDamageType : unsigned char;
typedef enum EnemySenseType : unsigned char;
typedef struct EnemyMeasureResult;

typedef void(*type_4)(sfObj*);
typedef void(*type_10)(sfObj*);
typedef int(*type_11)(void*);
typedef void(*type_12)(sfObj*);
typedef int(*type_14)(void*);
typedef int(*type_18)(void*);
typedef void(*type_21)(void*, int);
typedef int(*type_22)(void*);
typedef void(*type_26)(void*, int);
typedef void(*type_27)(void*, int);
typedef void(*type_29)(void*, int);

typedef float type_0[4];
typedef _anon7 type_1[4];
typedef float type_2[4];
typedef unsigned char type_3[3];
typedef void(*type_5)(sfObj*)[16];
typedef _anon5 type_6[4];
typedef float type_7[5];
typedef _anon6 type_8[0];
typedef _anon7 type_9[256];
typedef short type_13[2];
typedef unsigned short type_15[2];
typedef char type_16[4];
typedef unsigned char type_17[4];
typedef float type_19[1];
typedef int type_20[1];
typedef float type_23[4];
typedef float type_24[4][4];
typedef EnemyFootStepData type_25[0];
typedef float type_28[22];

struct _anon0
{
	_anon6 vertex[0];
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

struct _anon1
{
	float center[4];
	float radius;
};

struct EnemySearchData
{
};

struct EnemySearchPoint
{
};

struct EnemyTwinsWork
{
	float target_pos[4];
	float hitback[4];
	EnemySearchData* search;
	EnemySenseData* player_check;
	float anime_speed;
	float move_speed;
	float timer;
	float attack_timer;
	int finish_count;
	int attack_kind;
	int target_player;
	int first_pose;
	sfObj* tmp_obj;
};

struct _anon2
{
	float start[4];
	float end[4];
};

struct sfOffsetAABB
{
	_anon3 aabb;
	float offset[4];
};

union sfCldBody
{
	_anon4 obb;
	_anon3 aabb;
	sfOffsetAABB offset_aabb;
	_anon2 line;
	_anon1 sphere;
};

struct _anon3
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

struct _anon4
{
	float mat[4][4];
	float half_w[4];
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

enum EnemyTwinsAnime : unsigned char
{
	EN_TWN_ANM_NT,
	EN_TWN_ANM_LOOK,
	EN_TWN_ANM_POINT,
	EN_TWN_ANM_PEND,
	EN_TWN_ANM_WLK,
	EN_TWN_ANM_TURN,
	EN_TWN_ANM_RUN,
	EN_TWN_ANM_DMP1,
	EN_TWN_ANM_DMP2,
	EN_TWN_ANM_DMS1,
	EN_TWN_ANM_DMS2,
	EN_TWN_ANM_XXP1,
	EN_TWN_ANM_XXP2,
	EN_TWN_ANM_XXS1,
	EN_TWN_ANM_XXS2,
	EN_TWN_ANM_DNT,
	EN_TWN_ANM_UP,
	EN_TWN_ANM_ROT,
	EN_TWN_ANM_ATT1,
	EN_TWN_ANM_ATT2,
	EN_TWN_ANM_ATT3
};

struct EnemyFootStepsData
{
	int sound;
	int data_number;
	EnemyFootStepData data[0];
};

struct _anon5
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

union _anon6
{
	float node[4];
	_anon5 data[4];
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
	_anon7 work[4];
	unsigned int padding;
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

float attack_wait[5];
EnemyFootStepsData fs_wlk;
EnemyFootStepsData fs_run;
void(*twins_jump_table)(sfObj*)[16];
int(*EnemyEDAnimeIsEndSoon)(void*);
float sg_vector_unit_y[4];
int(*EnemyEDAnimeIsEnd)(void*);
void(*EnemyEDTwinsRevival)(void*, int);
int(*EnemyEDSenseTest)(void*);
int(*EnemyEDBattleDamageCheck)(void*);
void(*EnemyEDTwinsAdditionalDamageDown)(void*, int);
void(*EnemyEDBattleDamageRefrect)(void*, int);
void(*EnemyEDTwinsAdditionalDamage)(void*, int);
float att3_rot[22];

void EnemyTwinsConstruct(sfObj* obj);
void EnemyTwinsHandle(sfObj* obj);
void EnemyTwinsDraw();
void EnemyTwinsDestruct(sfObj* obj);
void EnemyTwinsDataPreserve(sfObj* obj);
void EnemyTwinsDataExtract(sfObj* obj);
void target_player(sfObj* obj);
void EnemyTwinsControl(sfObj* obj);
void EnemyTwinsControlInit(sfObj* obj);
void set_target(sfObj* obj);
int search_path(sfObj* obj, float* target);
void EnemyTwinsControlWander(sfObj* obj);
void EnemyTwinsControlPose(sfObj* obj);
void EnemyTwinsControlDash(sfObj* obj);
void EnemyTwinsControlCaution(sfObj* obj);
void EnemyTwinsControlInterval(sfObj* obj);
void EnemyTwinsControlApproach(sfObj* obj);
void EnemyTwinsControlAttack(sfObj* obj);
void EnemyTwinsControlJumpAttack(sfObj* obj);
void EnemyTwinsControlBackAttack(sfObj* obj);
void set_escape_point(sfObj* obj);
void EnemyTwinsControlEscape(sfObj* obj);
int set_damage_anime(sfObj* obj, EnemyBattleDamage* bd);
void EnemyTwinsControlDamage(sfObj* obj);
void EnemyTwinsControlDown(sfObj* obj);
void EnemyTwinsControlDead(sfObj* obj);
void EnemyTwinsControlEvent(sfObj* obj);
void EnemyTwinsControlTest();
int EnemyTwinsCanAttack(sfObj* obj);
void EnemyTwinsSetAttackWait(sfObj* obj);
void EnemyTwinsSetDamageCommand(sfObj* obj);
void EnemyTwinsHitCheck(sfObj* obj);
void EnemyTwinsAnimeSet(sfObj* obj, EnemyTwinsAnime anime);
void EnemyTwinsDamageSoundCall(sfObj* obj, EnemyBattleDamage* bd);
void EnemyTwinsSoundStop(sfObj* obj);
void EnemyTwinsSetFindPlayer(sfObj* obj);
void EnemyTwinsSetEventDamageCheck(sfObj* obj);
void EnemyEDTwinsAdditionalDamage(void* obj);
void EnemyEDTwinsAdditionalDamageDown(void* obj);
void EnemyEDTwinsRevival(void* obj);

// 
// Start address: 0x2eb720
void EnemyTwinsConstruct(sfObj* obj)
{
	EnemyManageEntryType etype;
	EnemyTwinsWork* ew;
	int type;
	int sf;
	EnemyManageDataOne* pe;
	// Line 196, Address: 0x2eb720, Func Offset: 0
	// Line 201, Address: 0x2eb724, Func Offset: 0x4
	// Line 196, Address: 0x2eb728, Func Offset: 0x8
	// Line 201, Address: 0x2eb740, Func Offset: 0x20
	// Line 203, Address: 0x2eb748, Func Offset: 0x28
	// Line 204, Address: 0x2eb754, Func Offset: 0x34
	// Line 207, Address: 0x2eb778, Func Offset: 0x58
	// Line 208, Address: 0x2eb780, Func Offset: 0x60
	// Line 211, Address: 0x2eb788, Func Offset: 0x68
	// Line 212, Address: 0x2eb794, Func Offset: 0x74
	// Line 213, Address: 0x2eb7a4, Func Offset: 0x84
	// Line 215, Address: 0x2eb7b0, Func Offset: 0x90
	// Line 216, Address: 0x2eb7c0, Func Offset: 0xa0
	// Line 217, Address: 0x2eb7c8, Func Offset: 0xa8
	// Line 219, Address: 0x2eb7f4, Func Offset: 0xd4
	// Line 220, Address: 0x2eb804, Func Offset: 0xe4
	// Line 221, Address: 0x2eb814, Func Offset: 0xf4
	// Line 222, Address: 0x2eb81c, Func Offset: 0xfc
	// Line 223, Address: 0x2eb828, Func Offset: 0x108
	// Line 225, Address: 0x2eb848, Func Offset: 0x128
	// Line 226, Address: 0x2eb860, Func Offset: 0x140
	// Line 227, Address: 0x2eb874, Func Offset: 0x154
	// Line 229, Address: 0x2eb898, Func Offset: 0x178
	// Line 230, Address: 0x2eb8a4, Func Offset: 0x184
	// Line 231, Address: 0x2eb8ac, Func Offset: 0x18c
	// Line 232, Address: 0x2eb8b4, Func Offset: 0x194
	// Line 233, Address: 0x2eb8b8, Func Offset: 0x198
	// Line 234, Address: 0x2eb8cc, Func Offset: 0x1ac
	// Line 235, Address: 0x2eb8dc, Func Offset: 0x1bc
	// Line 236, Address: 0x2eb8ec, Func Offset: 0x1cc
	// Line 238, Address: 0x2eb8f0, Func Offset: 0x1d0
	// Line 240, Address: 0x2eb8f8, Func Offset: 0x1d8
	// Line 242, Address: 0x2eb904, Func Offset: 0x1e4
	// Line 243, Address: 0x2eb90c, Func Offset: 0x1ec
	// Line 244, Address: 0x2eb918, Func Offset: 0x1f8
	// Line 245, Address: 0x2eb920, Func Offset: 0x200
	// Line 248, Address: 0x2eb93c, Func Offset: 0x21c
	// Line 249, Address: 0x2eb950, Func Offset: 0x230
	// Line 250, Address: 0x2eb968, Func Offset: 0x248
	// Line 251, Address: 0x2eb970, Func Offset: 0x250
	// Line 252, Address: 0x2eb97c, Func Offset: 0x25c
	// Line 253, Address: 0x2eb988, Func Offset: 0x268
	// Line 254, Address: 0x2eb990, Func Offset: 0x270
	// Line 255, Address: 0x2eb9a0, Func Offset: 0x280
	// Line 257, Address: 0x2eb9a8, Func Offset: 0x288
	// Line 261, Address: 0x2eb9b8, Func Offset: 0x298
	// Line 262, Address: 0x2eb9c4, Func Offset: 0x2a4
	// Func End, Address: 0x2eb9e8, Func Offset: 0x2c8
}

// 
// Start address: 0x2eb9f0
void EnemyTwinsHandle(sfObj* obj)
{
	// Line 266, Address: 0x2eb9f0, Func Offset: 0
	// Line 268, Address: 0x2eba00, Func Offset: 0x10
	// Line 270, Address: 0x2eba08, Func Offset: 0x18
	// Line 271, Address: 0x2eba10, Func Offset: 0x20
	// Line 272, Address: 0x2eba18, Func Offset: 0x28
	// Line 273, Address: 0x2eba20, Func Offset: 0x30
	// Line 274, Address: 0x2eba28, Func Offset: 0x38
	// Line 275, Address: 0x2eba30, Func Offset: 0x40
	// Line 277, Address: 0x2eba38, Func Offset: 0x48
	// Line 278, Address: 0x2eba48, Func Offset: 0x58
	// Line 280, Address: 0x2eba6c, Func Offset: 0x7c
	// Line 281, Address: 0x2eba74, Func Offset: 0x84
	// Line 282, Address: 0x2eba80, Func Offset: 0x90
	// Line 284, Address: 0x2eba88, Func Offset: 0x98
	// Func End, Address: 0x2eba9c, Func Offset: 0xac
}

// 
// Start address: 0x2ebaa0
void EnemyTwinsDraw()
{
	// Line 289, Address: 0x2ebaa0, Func Offset: 0
	// Func End, Address: 0x2ebaa8, Func Offset: 0x8
}

// 
// Start address: 0x2ebab0
void EnemyTwinsDestruct(sfObj* obj)
{
	EnemyTwinsWork* ew;
	// Line 293, Address: 0x2ebab0, Func Offset: 0
	// Line 295, Address: 0x2ebac0, Func Offset: 0x10
	// Line 296, Address: 0x2ebac8, Func Offset: 0x18
	// Line 297, Address: 0x2ebad0, Func Offset: 0x20
	// Line 298, Address: 0x2ebadc, Func Offset: 0x2c
	// Line 299, Address: 0x2ebae4, Func Offset: 0x34
	// Line 300, Address: 0x2ebaec, Func Offset: 0x3c
	// Line 302, Address: 0x2ebb08, Func Offset: 0x58
	// Line 303, Address: 0x2ebb24, Func Offset: 0x74
	// Line 304, Address: 0x2ebb3c, Func Offset: 0x8c
	// Line 305, Address: 0x2ebb44, Func Offset: 0x94
	// Line 306, Address: 0x2ebb4c, Func Offset: 0x9c
	// Line 307, Address: 0x2ebb50, Func Offset: 0xa0
	// Line 311, Address: 0x2ebb7c, Func Offset: 0xcc
	// Line 312, Address: 0x2ebb80, Func Offset: 0xd0
	// Line 315, Address: 0x2ebb8c, Func Offset: 0xdc
	// Line 316, Address: 0x2ebb90, Func Offset: 0xe0
	// Line 317, Address: 0x2ebb98, Func Offset: 0xe8
	// Line 318, Address: 0x2ebba4, Func Offset: 0xf4
	// Line 319, Address: 0x2ebbac, Func Offset: 0xfc
	// Line 321, Address: 0x2ebbb4, Func Offset: 0x104
	// Line 322, Address: 0x2ebbb8, Func Offset: 0x108
	// Line 323, Address: 0x2ebbc0, Func Offset: 0x110
	// Line 324, Address: 0x2ebbc8, Func Offset: 0x118
	// Func End, Address: 0x2ebbdc, Func Offset: 0x12c
}

// 
// Start address: 0x2ebbe0
void EnemyTwinsDataPreserve(sfObj* obj)
{
	EnemyTwinsWork* ew;
	EnemyManageDataOne* pe;
	_anon7 iu;
	// Line 328, Address: 0x2ebbe0, Func Offset: 0
	// Line 332, Address: 0x2ebbf4, Func Offset: 0x14
	// Line 333, Address: 0x2ebc0c, Func Offset: 0x2c
	// Line 336, Address: 0x2ebc34, Func Offset: 0x54
	// Line 337, Address: 0x2ebc3c, Func Offset: 0x5c
	// Line 338, Address: 0x2ebc48, Func Offset: 0x68
	// Line 339, Address: 0x2ebc54, Func Offset: 0x74
	// Line 341, Address: 0x2ebc60, Func Offset: 0x80
	// Line 340, Address: 0x2ebc64, Func Offset: 0x84
	// Line 341, Address: 0x2ebc6c, Func Offset: 0x8c
	// Line 342, Address: 0x2ebc74, Func Offset: 0x94
	// Func End, Address: 0x2ebc90, Func Offset: 0xb0
}

// 
// Start address: 0x2ebc90
void EnemyTwinsDataExtract(sfObj* obj)
{
	EnemyManageDataOne* pe;
	EnemyTwinsWork* ew;
	_anon7 iu;
	// Line 346, Address: 0x2ebc90, Func Offset: 0
	// Line 348, Address: 0x2ebca0, Func Offset: 0x10
	// Line 349, Address: 0x2ebcb4, Func Offset: 0x24
	// Line 350, Address: 0x2ebcc0, Func Offset: 0x30
	// Line 351, Address: 0x2ebccc, Func Offset: 0x3c
	// Line 352, Address: 0x2ebcd8, Func Offset: 0x48
	// Line 353, Address: 0x2ebcf0, Func Offset: 0x60
	// Line 354, Address: 0x2ebcfc, Func Offset: 0x6c
	// Line 355, Address: 0x2ebd08, Func Offset: 0x78
	// Line 356, Address: 0x2ebd10, Func Offset: 0x80
	// Line 357, Address: 0x2ebd20, Func Offset: 0x90
	// Line 358, Address: 0x2ebd28, Func Offset: 0x98
	// Line 359, Address: 0x2ebd34, Func Offset: 0xa4
	// Line 362, Address: 0x2ebd40, Func Offset: 0xb0
	// Line 363, Address: 0x2ebd48, Func Offset: 0xb8
	// Line 365, Address: 0x2ebd50, Func Offset: 0xc0
	// Line 363, Address: 0x2ebd58, Func Offset: 0xc8
	// Line 364, Address: 0x2ebd5c, Func Offset: 0xcc
	// Line 365, Address: 0x2ebd60, Func Offset: 0xd0
	// Line 367, Address: 0x2ebd68, Func Offset: 0xd8
	// Line 368, Address: 0x2ebd70, Func Offset: 0xe0
	// Func End, Address: 0x2ebd84, Func Offset: 0xf4
}

// 
// Start address: 0x2ebd90
void target_player(sfObj* obj)
{
	EnemyTwinsWork* ew;
	float* pos;
	// Line 408, Address: 0x2ebd90, Func Offset: 0
	// Line 411, Address: 0x2ebda0, Func Offset: 0x10
	// Line 412, Address: 0x2ebda8, Func Offset: 0x18
	// Line 413, Address: 0x2ebdb8, Func Offset: 0x28
	// Line 414, Address: 0x2ebdc4, Func Offset: 0x34
	// Line 413, Address: 0x2ebdc8, Func Offset: 0x38
	// Line 414, Address: 0x2ebdd0, Func Offset: 0x40
	// Line 415, Address: 0x2ebddc, Func Offset: 0x4c
	// Line 417, Address: 0x2ebdf0, Func Offset: 0x60
	// Func End, Address: 0x2ebe04, Func Offset: 0x74
}

// 
// Start address: 0x2ebe10
void EnemyTwinsControl(sfObj* obj)
{
	EnemyTwinsWork* ew;
	int step;
	float dt;
	// Line 421, Address: 0x2ebe10, Func Offset: 0
	// Line 424, Address: 0x2ebe20, Func Offset: 0x10
	// Line 433, Address: 0x2ebe2c, Func Offset: 0x1c
	// Line 434, Address: 0x2ebe34, Func Offset: 0x24
	// Line 436, Address: 0x2ebe3c, Func Offset: 0x2c
	// Line 438, Address: 0x2ebe44, Func Offset: 0x34
	// Line 440, Address: 0x2ebe60, Func Offset: 0x50
	// Line 441, Address: 0x2ebe84, Func Offset: 0x74
	// Line 442, Address: 0x2ebe90, Func Offset: 0x80
	// Line 443, Address: 0x2ebe94, Func Offset: 0x84
	// Line 445, Address: 0x2ebe98, Func Offset: 0x88
	// Line 446, Address: 0x2ebea0, Func Offset: 0x90
	// Line 447, Address: 0x2ebec4, Func Offset: 0xb4
	// Line 450, Address: 0x2ebed4, Func Offset: 0xc4
	// Line 456, Address: 0x2ebf08, Func Offset: 0xf8
	// Line 461, Address: 0x2ebf10, Func Offset: 0x100
	// Func End, Address: 0x2ebf24, Func Offset: 0x114
}

// 
// Start address: 0x2ebf30
void EnemyTwinsControlInit(sfObj* obj)
{
	EnemyTwinsWork* ew;
	// Line 465, Address: 0x2ebf30, Func Offset: 0
	// Line 467, Address: 0x2ebf40, Func Offset: 0x10
	// Line 468, Address: 0x2ebf4c, Func Offset: 0x1c
	// Line 470, Address: 0x2ebf68, Func Offset: 0x38
	// Line 471, Address: 0x2ebf70, Func Offset: 0x40
	// Line 472, Address: 0x2ebf84, Func Offset: 0x54
	// Line 473, Address: 0x2ebf8c, Func Offset: 0x5c
	// Line 474, Address: 0x2ebf98, Func Offset: 0x68
	// Line 475, Address: 0x2ebfa4, Func Offset: 0x74
	// Line 476, Address: 0x2ebfa8, Func Offset: 0x78
	// Func End, Address: 0x2ebfbc, Func Offset: 0x8c
}

// 
// Start address: 0x2ebfc0
void set_target(sfObj* obj)
{
	EnemyTwinsWork* ew;
	float* pos;
	float tpos[4];
	EnemyMeasureResult mres;
	int i;
	int p;
	// Line 480, Address: 0x2ebfc0, Func Offset: 0
	// Line 486, Address: 0x2ebfe0, Func Offset: 0x20
	// Line 487, Address: 0x2ebfe8, Func Offset: 0x28
	// Line 488, Address: 0x2ebff8, Func Offset: 0x38
	// Line 489, Address: 0x2ec004, Func Offset: 0x44
	// Line 490, Address: 0x2ec010, Func Offset: 0x50
	// Line 491, Address: 0x2ec020, Func Offset: 0x60
	// Line 494, Address: 0x2ec034, Func Offset: 0x74
	// Line 495, Address: 0x2ec040, Func Offset: 0x80
	// Line 494, Address: 0x2ec044, Func Offset: 0x84
	// Line 495, Address: 0x2ec048, Func Offset: 0x88
	// Line 499, Address: 0x2ec078, Func Offset: 0xb8
	// Line 500, Address: 0x2ec088, Func Offset: 0xc8
	// Line 501, Address: 0x2ec094, Func Offset: 0xd4
	// Func End, Address: 0x2ec0b8, Func Offset: 0xf8
}

// 
// Start address: 0x2ec0c0
int search_path(sfObj* obj, float* target)
{
	EnemyTwinsWork* ew;
	EnemySearchPoint* esp;
	float pos[4];
	// Line 505, Address: 0x2ec0c0, Func Offset: 0
	// Line 509, Address: 0x2ec0d8, Func Offset: 0x18
	// Line 510, Address: 0x2ec0e4, Func Offset: 0x24
	// Line 511, Address: 0x2ec0f0, Func Offset: 0x30
	// Line 512, Address: 0x2ec104, Func Offset: 0x44
	// Line 513, Address: 0x2ec10c, Func Offset: 0x4c
	// Line 512, Address: 0x2ec110, Func Offset: 0x50
	// Line 513, Address: 0x2ec114, Func Offset: 0x54
	// Line 514, Address: 0x2ec12c, Func Offset: 0x6c
	// Line 515, Address: 0x2ec134, Func Offset: 0x74
	// Line 516, Address: 0x2ec138, Func Offset: 0x78
	// Line 518, Address: 0x2ec160, Func Offset: 0xa0
	// Line 520, Address: 0x2ec168, Func Offset: 0xa8
	// Line 524, Address: 0x2ec174, Func Offset: 0xb4
	// Line 525, Address: 0x2ec178, Func Offset: 0xb8
	// Func End, Address: 0x2ec190, Func Offset: 0xd0
}

// 
// Start address: 0x2ec190
void EnemyTwinsControlWander(sfObj* obj)
{
	EnemyTwinsWork* ew;
	float* pos;
	float tpos[4];
	float vec[4];
	float rot[4];
	float dt;
	float d;
	float f;
	// Line 529, Address: 0x2ec190, Func Offset: 0
	// Line 535, Address: 0x2ec1ac, Func Offset: 0x1c
	// Line 536, Address: 0x2ec1b4, Func Offset: 0x24
	// Line 537, Address: 0x2ec1c0, Func Offset: 0x30
	// Line 538, Address: 0x2ec1cc, Func Offset: 0x3c
	// Line 539, Address: 0x2ec1d8, Func Offset: 0x48
	// Line 540, Address: 0x2ec204, Func Offset: 0x74
	// Line 541, Address: 0x2ec208, Func Offset: 0x78
	// Line 542, Address: 0x2ec210, Func Offset: 0x80
	// Line 543, Address: 0x2ec21c, Func Offset: 0x8c
	// Line 545, Address: 0x2ec224, Func Offset: 0x94
	// Line 546, Address: 0x2ec228, Func Offset: 0x98
	// Line 547, Address: 0x2ec230, Func Offset: 0xa0
	// Line 548, Address: 0x2ec238, Func Offset: 0xa8
	// Line 549, Address: 0x2ec25c, Func Offset: 0xcc
	// Line 550, Address: 0x2ec264, Func Offset: 0xd4
	// Line 551, Address: 0x2ec268, Func Offset: 0xd8
	// Line 554, Address: 0x2ec270, Func Offset: 0xe0
	// Line 555, Address: 0x2ec284, Func Offset: 0xf4
	// Line 556, Address: 0x2ec28c, Func Offset: 0xfc
	// Line 557, Address: 0x2ec294, Func Offset: 0x104
	// Line 558, Address: 0x2ec298, Func Offset: 0x108
	// Line 559, Address: 0x2ec2a0, Func Offset: 0x110
	// Line 558, Address: 0x2ec2a4, Func Offset: 0x114
	// Line 559, Address: 0x2ec2a8, Func Offset: 0x118
	// Line 560, Address: 0x2ec2b8, Func Offset: 0x128
	// Line 562, Address: 0x2ec2c8, Func Offset: 0x138
	// Line 563, Address: 0x2ec2dc, Func Offset: 0x14c
	// Line 564, Address: 0x2ec2e8, Func Offset: 0x158
	// Line 566, Address: 0x2ec30c, Func Offset: 0x17c
	// Line 573, Address: 0x2ec314, Func Offset: 0x184
	// Line 574, Address: 0x2ec318, Func Offset: 0x188
	// Line 575, Address: 0x2ec324, Func Offset: 0x194
	// Line 576, Address: 0x2ec358, Func Offset: 0x1c8
	// Line 577, Address: 0x2ec364, Func Offset: 0x1d4
	// Line 578, Address: 0x2ec36c, Func Offset: 0x1dc
	// Line 579, Address: 0x2ec3c0, Func Offset: 0x230
	// Line 581, Address: 0x2ec3f4, Func Offset: 0x264
	// Line 582, Address: 0x2ec3fc, Func Offset: 0x26c
	// Line 583, Address: 0x2ec418, Func Offset: 0x288
	// Line 586, Address: 0x2ec420, Func Offset: 0x290
	// Func End, Address: 0x2ec440, Func Offset: 0x2b0
}

// 
// Start address: 0x2ec440
void EnemyTwinsControlPose(sfObj* obj)
{
	EnemyTwinsWork* ew;
	float* pos;
	float vec[4];
	float dt;
	float d;
	float rot[4];
	float trot[4];
	int id;
	// Line 590, Address: 0x2ec440, Func Offset: 0
	// Line 595, Address: 0x2ec45c, Func Offset: 0x1c
	// Line 596, Address: 0x2ec464, Func Offset: 0x24
	// Line 597, Address: 0x2ec470, Func Offset: 0x30
	// Line 598, Address: 0x2ec47c, Func Offset: 0x3c
	// Line 600, Address: 0x2ec4a8, Func Offset: 0x68
	// Line 601, Address: 0x2ec4b4, Func Offset: 0x74
	// Line 602, Address: 0x2ec4d0, Func Offset: 0x90
	// Line 603, Address: 0x2ec4dc, Func Offset: 0x9c
	// Line 604, Address: 0x2ec4e4, Func Offset: 0xa4
	// Line 605, Address: 0x2ec4f0, Func Offset: 0xb0
	// Line 607, Address: 0x2ec4f8, Func Offset: 0xb8
	// Line 608, Address: 0x2ec518, Func Offset: 0xd8
	// Line 609, Address: 0x2ec530, Func Offset: 0xf0
	// Line 611, Address: 0x2ec588, Func Offset: 0x148
	// Line 612, Address: 0x2ec594, Func Offset: 0x154
	// Line 613, Address: 0x2ec5a0, Func Offset: 0x160
	// Line 614, Address: 0x2ec5ac, Func Offset: 0x16c
	// Line 617, Address: 0x2ec62c, Func Offset: 0x1ec
	// Line 618, Address: 0x2ec634, Func Offset: 0x1f4
	// Line 620, Address: 0x2ec668, Func Offset: 0x228
	// Line 621, Address: 0x2ec670, Func Offset: 0x230
	// Line 622, Address: 0x2ec678, Func Offset: 0x238
	// Line 623, Address: 0x2ec684, Func Offset: 0x244
	// Line 625, Address: 0x2ec68c, Func Offset: 0x24c
	// Line 626, Address: 0x2ec694, Func Offset: 0x254
	// Line 627, Address: 0x2ec698, Func Offset: 0x258
	// Line 628, Address: 0x2ec6ac, Func Offset: 0x26c
	// Line 629, Address: 0x2ec6b4, Func Offset: 0x274
	// Line 630, Address: 0x2ec6b8, Func Offset: 0x278
	// Line 631, Address: 0x2ec6c8, Func Offset: 0x288
	// Line 634, Address: 0x2ec714, Func Offset: 0x2d4
	// Line 635, Address: 0x2ec71c, Func Offset: 0x2dc
	// Line 636, Address: 0x2ec728, Func Offset: 0x2e8
	// Line 637, Address: 0x2ec760, Func Offset: 0x320
	// Line 638, Address: 0x2ec76c, Func Offset: 0x32c
	// Line 641, Address: 0x2ec774, Func Offset: 0x334
	// Line 642, Address: 0x2ec77c, Func Offset: 0x33c
	// Line 643, Address: 0x2ec780, Func Offset: 0x340
	// Line 645, Address: 0x2ec798, Func Offset: 0x358
	// Line 647, Address: 0x2ec7a0, Func Offset: 0x360
	// Line 648, Address: 0x2ec7b0, Func Offset: 0x370
	// Line 649, Address: 0x2ec7d0, Func Offset: 0x390
	// Line 650, Address: 0x2ec7f8, Func Offset: 0x3b8
	// Line 651, Address: 0x2ec800, Func Offset: 0x3c0
	// Line 652, Address: 0x2ec808, Func Offset: 0x3c8
	// Line 653, Address: 0x2ec810, Func Offset: 0x3d0
	// Line 654, Address: 0x2ec81c, Func Offset: 0x3dc
	// Line 657, Address: 0x2ec828, Func Offset: 0x3e8
	// Line 659, Address: 0x2ec830, Func Offset: 0x3f0
	// Line 660, Address: 0x2ec840, Func Offset: 0x400
	// Line 661, Address: 0x2ec848, Func Offset: 0x408
	// Line 662, Address: 0x2ec854, Func Offset: 0x414
	// Line 665, Address: 0x2ec858, Func Offset: 0x418
	// Line 666, Address: 0x2ec864, Func Offset: 0x424
	// Line 668, Address: 0x2ec884, Func Offset: 0x444
	// Line 669, Address: 0x2ec894, Func Offset: 0x454
	// Line 671, Address: 0x2ec8a0, Func Offset: 0x460
	// Line 673, Address: 0x2ec8a8, Func Offset: 0x468
	// Line 675, Address: 0x2ec8c0, Func Offset: 0x480
	// Line 677, Address: 0x2ec8c8, Func Offset: 0x488
	// Line 678, Address: 0x2ec8d4, Func Offset: 0x494
	// Line 681, Address: 0x2ec910, Func Offset: 0x4d0
	// Line 683, Address: 0x2ec920, Func Offset: 0x4e0
	// Line 686, Address: 0x2ec978, Func Offset: 0x538
	// Line 687, Address: 0x2ec988, Func Offset: 0x548
	// Line 688, Address: 0x2ec994, Func Offset: 0x554
	// Line 690, Address: 0x2ec9a0, Func Offset: 0x560
	// Line 692, Address: 0x2ec9b0, Func Offset: 0x570
	// Line 693, Address: 0x2ec9b8, Func Offset: 0x578
	// Line 694, Address: 0x2ec9c0, Func Offset: 0x580
	// Line 696, Address: 0x2ec9d8, Func Offset: 0x598
	// Line 697, Address: 0x2ec9e4, Func Offset: 0x5a4
	// Line 703, Address: 0x2ec9f0, Func Offset: 0x5b0
	// Line 705, Address: 0x2eca10, Func Offset: 0x5d0
	// Func End, Address: 0x2eca30, Func Offset: 0x5f0
}

// 
// Start address: 0x2eca30
void EnemyTwinsControlDash(sfObj* obj)
{
	EnemyTwinsWork* ew;
	float* pos;
	float* ppos;
	float tpos[4];
	float vec[4];
	float rot[4];
	float trot[4];
	float dt;
	float d;
	float r;
	float f;
	int frame;
	sfCldPart* pcp;
	_anon1* psp;
	// Line 709, Address: 0x2eca30, Func Offset: 0
	// Line 716, Address: 0x2eca50, Func Offset: 0x20
	// Line 717, Address: 0x2eca58, Func Offset: 0x28
	// Line 718, Address: 0x2eca64, Func Offset: 0x34
	// Line 719, Address: 0x2eca70, Func Offset: 0x40
	// Line 720, Address: 0x2eca7c, Func Offset: 0x4c
	// Line 721, Address: 0x2eca88, Func Offset: 0x58
	// Line 723, Address: 0x2ecac0, Func Offset: 0x90
	// Line 724, Address: 0x2ecac8, Func Offset: 0x98
	// Line 725, Address: 0x2ecad4, Func Offset: 0xa4
	// Line 726, Address: 0x2ecadc, Func Offset: 0xac
	// Line 728, Address: 0x2ecae4, Func Offset: 0xb4
	// Line 729, Address: 0x2ecae8, Func Offset: 0xb8
	// Line 730, Address: 0x2ecaf0, Func Offset: 0xc0
	// Line 731, Address: 0x2ecb04, Func Offset: 0xd4
	// Line 732, Address: 0x2ecb0c, Func Offset: 0xdc
	// Line 733, Address: 0x2ecb14, Func Offset: 0xe4
	// Line 734, Address: 0x2ecb18, Func Offset: 0xe8
	// Line 735, Address: 0x2ecb20, Func Offset: 0xf0
	// Line 734, Address: 0x2ecb24, Func Offset: 0xf4
	// Line 735, Address: 0x2ecb28, Func Offset: 0xf8
	// Line 736, Address: 0x2ecb38, Func Offset: 0x108
	// Line 738, Address: 0x2ecb48, Func Offset: 0x118
	// Line 739, Address: 0x2ecb5c, Func Offset: 0x12c
	// Line 740, Address: 0x2ecb68, Func Offset: 0x138
	// Line 741, Address: 0x2ecb70, Func Offset: 0x140
	// Line 742, Address: 0x2ecbc0, Func Offset: 0x190
	// Line 743, Address: 0x2ecbd8, Func Offset: 0x1a8
	// Line 744, Address: 0x2ecbe4, Func Offset: 0x1b4
	// Line 745, Address: 0x2ecbf4, Func Offset: 0x1c4
	// Line 747, Address: 0x2ecc30, Func Offset: 0x200
	// Line 748, Address: 0x2ecc40, Func Offset: 0x210
	// Line 749, Address: 0x2ecc48, Func Offset: 0x218
	// Line 750, Address: 0x2ecc64, Func Offset: 0x234
	// Line 751, Address: 0x2ecc6c, Func Offset: 0x23c
	// Line 752, Address: 0x2ecc78, Func Offset: 0x248
	// Line 753, Address: 0x2ecc80, Func Offset: 0x250
	// Line 754, Address: 0x2ecc8c, Func Offset: 0x25c
	// Line 755, Address: 0x2ecc98, Func Offset: 0x268
	// Line 756, Address: 0x2ecc9c, Func Offset: 0x26c
	// Line 755, Address: 0x2ecca0, Func Offset: 0x270
	// Line 756, Address: 0x2ecca4, Func Offset: 0x274
	// Line 758, Address: 0x2eccac, Func Offset: 0x27c
	// Line 761, Address: 0x2eccf0, Func Offset: 0x2c0
	// Line 762, Address: 0x2eccf8, Func Offset: 0x2c8
	// Line 763, Address: 0x2ecd08, Func Offset: 0x2d8
	// Line 764, Address: 0x2ecd14, Func Offset: 0x2e4
	// Line 763, Address: 0x2ecd18, Func Offset: 0x2e8
	// Line 764, Address: 0x2ecd1c, Func Offset: 0x2ec
	// Line 766, Address: 0x2ecd34, Func Offset: 0x304
	// Line 770, Address: 0x2ecd3c, Func Offset: 0x30c
	// Line 771, Address: 0x2ecd40, Func Offset: 0x310
	// Line 772, Address: 0x2ecd4c, Func Offset: 0x31c
	// Line 773, Address: 0x2ecd84, Func Offset: 0x354
	// Line 774, Address: 0x2ecd90, Func Offset: 0x360
	// Line 776, Address: 0x2ecd98, Func Offset: 0x368
	// Line 777, Address: 0x2ecdb0, Func Offset: 0x380
	// Line 779, Address: 0x2ecdb8, Func Offset: 0x388
	// Line 781, Address: 0x2ecdc0, Func Offset: 0x390
	// Line 782, Address: 0x2ecdd4, Func Offset: 0x3a4
	// Line 783, Address: 0x2ecddc, Func Offset: 0x3ac
	// Line 784, Address: 0x2ecde0, Func Offset: 0x3b0
	// Line 785, Address: 0x2ecde8, Func Offset: 0x3b8
	// Line 786, Address: 0x2ece00, Func Offset: 0x3d0
	// Line 788, Address: 0x2ece3c, Func Offset: 0x40c
	// Line 792, Address: 0x2ece40, Func Offset: 0x410
	// Line 793, Address: 0x2ece50, Func Offset: 0x420
	// Line 795, Address: 0x2ece68, Func Offset: 0x438
	// Line 796, Address: 0x2ece80, Func Offset: 0x450
	// Line 797, Address: 0x2ece84, Func Offset: 0x454
	// Line 801, Address: 0x2ecea0, Func Offset: 0x470
	// Line 802, Address: 0x2eceb4, Func Offset: 0x484
	// Line 803, Address: 0x2ecebc, Func Offset: 0x48c
	// Line 807, Address: 0x2ecec0, Func Offset: 0x490
	// Line 808, Address: 0x2eced4, Func Offset: 0x4a4
	// Line 809, Address: 0x2ecedc, Func Offset: 0x4ac
	// Line 811, Address: 0x2ecee0, Func Offset: 0x4b0
	// Line 812, Address: 0x2ecef8, Func Offset: 0x4c8
	// Line 813, Address: 0x2ecf00, Func Offset: 0x4d0
	// Line 814, Address: 0x2ecf0c, Func Offset: 0x4dc
	// Line 815, Address: 0x2ecf10, Func Offset: 0x4e0
	// Line 817, Address: 0x2ecf3c, Func Offset: 0x50c
	// Line 818, Address: 0x2ecf48, Func Offset: 0x518
	// Line 819, Address: 0x2ecf4c, Func Offset: 0x51c
	// Line 820, Address: 0x2ecf64, Func Offset: 0x534
	// Line 821, Address: 0x2ecf6c, Func Offset: 0x53c
	// Line 822, Address: 0x2ecf78, Func Offset: 0x548
	// Line 823, Address: 0x2ecf8c, Func Offset: 0x55c
	// Line 824, Address: 0x2ecf9c, Func Offset: 0x56c
	// Line 825, Address: 0x2ecfa0, Func Offset: 0x570
	// Line 826, Address: 0x2ecfb4, Func Offset: 0x584
	// Line 827, Address: 0x2ecfc4, Func Offset: 0x594
	// Line 830, Address: 0x2ecfd0, Func Offset: 0x5a0
	// Func End, Address: 0x2ecff4, Func Offset: 0x5c4
}

// 
// Start address: 0x2ed000
void EnemyTwinsControlCaution(sfObj* obj)
{
	EnemyTwinsWork* ew;
	float* pos;
	float* ppos;
	float vec[4];
	float rot[4];
	float trot[4];
	float dt;
	float d;
	float r;
	// Line 834, Address: 0x2ed000, Func Offset: 0
	// Line 840, Address: 0x2ed020, Func Offset: 0x20
	// Line 841, Address: 0x2ed028, Func Offset: 0x28
	// Line 842, Address: 0x2ed034, Func Offset: 0x34
	// Line 843, Address: 0x2ed040, Func Offset: 0x40
	// Line 844, Address: 0x2ed04c, Func Offset: 0x4c
	// Line 845, Address: 0x2ed058, Func Offset: 0x58
	// Line 846, Address: 0x2ed084, Func Offset: 0x84
	// Line 847, Address: 0x2ed088, Func Offset: 0x88
	// Line 848, Address: 0x2ed090, Func Offset: 0x90
	// Line 850, Address: 0x2ed0b8, Func Offset: 0xb8
	// Line 851, Address: 0x2ed0c0, Func Offset: 0xc0
	// Line 853, Address: 0x2ed0c8, Func Offset: 0xc8
	// Line 854, Address: 0x2ed0e0, Func Offset: 0xe0
	// Line 855, Address: 0x2ed0ec, Func Offset: 0xec
	// Line 854, Address: 0x2ed0f0, Func Offset: 0xf0
	// Line 855, Address: 0x2ed0f4, Func Offset: 0xf4
	// Line 857, Address: 0x2ed140, Func Offset: 0x140
	// Line 858, Address: 0x2ed148, Func Offset: 0x148
	// Line 860, Address: 0x2ed150, Func Offset: 0x150
	// Line 861, Address: 0x2ed16c, Func Offset: 0x16c
	// Line 862, Address: 0x2ed174, Func Offset: 0x174
	// Line 863, Address: 0x2ed17c, Func Offset: 0x17c
	// Line 864, Address: 0x2ed180, Func Offset: 0x180
	// Line 865, Address: 0x2ed18c, Func Offset: 0x18c
	// Line 866, Address: 0x2ed194, Func Offset: 0x194
	// Line 867, Address: 0x2ed19c, Func Offset: 0x19c
	// Line 868, Address: 0x2ed1a0, Func Offset: 0x1a0
	// Line 869, Address: 0x2ed1c8, Func Offset: 0x1c8
	// Line 868, Address: 0x2ed1cc, Func Offset: 0x1cc
	// Line 869, Address: 0x2ed1dc, Func Offset: 0x1dc
	// Line 871, Address: 0x2ed1fc, Func Offset: 0x1fc
	// Line 872, Address: 0x2ed208, Func Offset: 0x208
	// Line 873, Address: 0x2ed220, Func Offset: 0x220
	// Line 874, Address: 0x2ed240, Func Offset: 0x240
	// Line 876, Address: 0x2ed250, Func Offset: 0x250
	// Line 877, Address: 0x2ed264, Func Offset: 0x264
	// Line 878, Address: 0x2ed274, Func Offset: 0x274
	// Line 879, Address: 0x2ed280, Func Offset: 0x280
	// Line 880, Address: 0x2ed290, Func Offset: 0x290
	// Line 881, Address: 0x2ed29c, Func Offset: 0x29c
	// Line 880, Address: 0x2ed2a0, Func Offset: 0x2a0
	// Line 881, Address: 0x2ed2ac, Func Offset: 0x2ac
	// Line 883, Address: 0x2ed2b4, Func Offset: 0x2b4
	// Line 884, Address: 0x2ed2bc, Func Offset: 0x2bc
	// Line 885, Address: 0x2ed2c0, Func Offset: 0x2c0
	// Line 886, Address: 0x2ed2d8, Func Offset: 0x2d8
	// Line 887, Address: 0x2ed2e4, Func Offset: 0x2e4
	// Line 886, Address: 0x2ed2e8, Func Offset: 0x2e8
	// Line 887, Address: 0x2ed2ec, Func Offset: 0x2ec
	// Line 889, Address: 0x2ed328, Func Offset: 0x328
	// Line 890, Address: 0x2ed330, Func Offset: 0x330
	// Line 892, Address: 0x2ed338, Func Offset: 0x338
	// Line 893, Address: 0x2ed354, Func Offset: 0x354
	// Line 895, Address: 0x2ed390, Func Offset: 0x390
	// Line 896, Address: 0x2ed39c, Func Offset: 0x39c
	// Line 897, Address: 0x2ed3a8, Func Offset: 0x3a8
	// Line 901, Address: 0x2ed3b4, Func Offset: 0x3b4
	// Line 902, Address: 0x2ed3b8, Func Offset: 0x3b8
	// Func End, Address: 0x2ed3dc, Func Offset: 0x3dc
}

// 
// Start address: 0x2ed3e0
void EnemyTwinsControlInterval(sfObj* obj)
{
	EnemyTwinsWork* ew;
	float* pos;
	float* ppos;
	float tpos[4];
	float vec[4];
	float rot[4];
	float trot[4];
	float dt;
	float d;
	float r;
	float f;
	// Line 906, Address: 0x2ed3e0, Func Offset: 0
	// Line 912, Address: 0x2ed400, Func Offset: 0x20
	// Line 913, Address: 0x2ed408, Func Offset: 0x28
	// Line 914, Address: 0x2ed414, Func Offset: 0x34
	// Line 915, Address: 0x2ed420, Func Offset: 0x40
	// Line 916, Address: 0x2ed42c, Func Offset: 0x4c
	// Line 917, Address: 0x2ed438, Func Offset: 0x58
	// Line 919, Address: 0x2ed470, Func Offset: 0x90
	// Line 920, Address: 0x2ed47c, Func Offset: 0x9c
	// Line 921, Address: 0x2ed488, Func Offset: 0xa8
	// Line 922, Address: 0x2ed48c, Func Offset: 0xac
	// Line 925, Address: 0x2ed498, Func Offset: 0xb8
	// Line 926, Address: 0x2ed4b0, Func Offset: 0xd0
	// Line 927, Address: 0x2ed4b4, Func Offset: 0xd4
	// Line 928, Address: 0x2ed4c4, Func Offset: 0xe4
	// Line 933, Address: 0x2ed4dc, Func Offset: 0xfc
	// Line 934, Address: 0x2ed4e0, Func Offset: 0x100
	// Line 933, Address: 0x2ed4e4, Func Offset: 0x104
	// Line 934, Address: 0x2ed4ec, Func Offset: 0x10c
	// Line 935, Address: 0x2ed4fc, Func Offset: 0x11c
	// Line 936, Address: 0x2ed50c, Func Offset: 0x12c
	// Line 937, Address: 0x2ed510, Func Offset: 0x130
	// Line 938, Address: 0x2ed524, Func Offset: 0x144
	// Line 939, Address: 0x2ed530, Func Offset: 0x150
	// Line 940, Address: 0x2ed53c, Func Offset: 0x15c
	// Line 941, Address: 0x2ed574, Func Offset: 0x194
	// Line 942, Address: 0x2ed580, Func Offset: 0x1a0
	// Line 943, Address: 0x2ed59c, Func Offset: 0x1bc
	// Line 944, Address: 0x2ed5a8, Func Offset: 0x1c8
	// Line 946, Address: 0x2ed5b0, Func Offset: 0x1d0
	// Line 947, Address: 0x2ed5b8, Func Offset: 0x1d8
	// Line 948, Address: 0x2ed608, Func Offset: 0x228
	// Line 950, Address: 0x2ed63c, Func Offset: 0x25c
	// Line 951, Address: 0x2ed644, Func Offset: 0x264
	// Line 953, Address: 0x2ed674, Func Offset: 0x294
	// Line 954, Address: 0x2ed68c, Func Offset: 0x2ac
	// Line 955, Address: 0x2ed6ac, Func Offset: 0x2cc
	// Line 956, Address: 0x2ed6e0, Func Offset: 0x300
	// Line 957, Address: 0x2ed6e8, Func Offset: 0x308
	// Line 958, Address: 0x2ed6f0, Func Offset: 0x310
	// Line 959, Address: 0x2ed6fc, Func Offset: 0x31c
	// Line 961, Address: 0x2ed704, Func Offset: 0x324
	// Line 962, Address: 0x2ed710, Func Offset: 0x330
	// Line 966, Address: 0x2ed71c, Func Offset: 0x33c
	// Line 967, Address: 0x2ed724, Func Offset: 0x344
	// Line 968, Address: 0x2ed728, Func Offset: 0x348
	// Line 969, Address: 0x2ed750, Func Offset: 0x370
	// Line 968, Address: 0x2ed754, Func Offset: 0x374
	// Line 969, Address: 0x2ed764, Func Offset: 0x384
	// Line 971, Address: 0x2ed784, Func Offset: 0x3a4
	// Line 972, Address: 0x2ed790, Func Offset: 0x3b0
	// Line 973, Address: 0x2ed7a8, Func Offset: 0x3c8
	// Line 974, Address: 0x2ed7c4, Func Offset: 0x3e4
	// Line 975, Address: 0x2ed7d4, Func Offset: 0x3f4
	// Line 976, Address: 0x2ed7d8, Func Offset: 0x3f8
	// Line 977, Address: 0x2ed7ec, Func Offset: 0x40c
	// Line 978, Address: 0x2ed7fc, Func Offset: 0x41c
	// Line 979, Address: 0x2ed808, Func Offset: 0x428
	// Line 980, Address: 0x2ed818, Func Offset: 0x438
	// Line 983, Address: 0x2ed870, Func Offset: 0x490
	// Line 984, Address: 0x2ed884, Func Offset: 0x4a4
	// Line 985, Address: 0x2ed8ac, Func Offset: 0x4cc
	// Line 986, Address: 0x2ed8b4, Func Offset: 0x4d4
	// Line 988, Address: 0x2ed8bc, Func Offset: 0x4dc
	// Line 989, Address: 0x2ed8c0, Func Offset: 0x4e0
	// Line 990, Address: 0x2ed8cc, Func Offset: 0x4ec
	// Line 991, Address: 0x2ed8d8, Func Offset: 0x4f8
	// Line 993, Address: 0x2ed8e0, Func Offset: 0x500
	// Line 995, Address: 0x2ed8e8, Func Offset: 0x508
	// Line 998, Address: 0x2ed92c, Func Offset: 0x54c
	// Line 999, Address: 0x2ed944, Func Offset: 0x564
	// Line 1000, Address: 0x2ed964, Func Offset: 0x584
	// Line 1001, Address: 0x2ed96c, Func Offset: 0x58c
	// Line 1002, Address: 0x2ed978, Func Offset: 0x598
	// Line 1004, Address: 0x2ed984, Func Offset: 0x5a4
	// Line 1005, Address: 0x2ed9ac, Func Offset: 0x5cc
	// Line 1006, Address: 0x2ed9c4, Func Offset: 0x5e4
	// Line 1007, Address: 0x2ed9e4, Func Offset: 0x604
	// Line 1008, Address: 0x2ed9ec, Func Offset: 0x60c
	// Line 1009, Address: 0x2ed9f8, Func Offset: 0x618
	// Line 1011, Address: 0x2eda04, Func Offset: 0x624
	// Line 1012, Address: 0x2eda08, Func Offset: 0x628
	// Line 1016, Address: 0x2eda28, Func Offset: 0x648
	// Func End, Address: 0x2eda4c, Func Offset: 0x66c
}

// 
// Start address: 0x2eda50
void EnemyTwinsControlApproach(sfObj* obj)
{
	EnemyTwinsWork* ew;
	float* pos;
	float tpos[4];
	float vec[4];
	float rot[4];
	float dt;
	float f;
	float d;
	// Line 1020, Address: 0x2eda50, Func Offset: 0
	// Line 1026, Address: 0x2eda6c, Func Offset: 0x1c
	// Line 1027, Address: 0x2eda74, Func Offset: 0x24
	// Line 1028, Address: 0x2eda80, Func Offset: 0x30
	// Line 1029, Address: 0x2eda8c, Func Offset: 0x3c
	// Line 1030, Address: 0x2eda98, Func Offset: 0x48
	// Line 1031, Address: 0x2edabc, Func Offset: 0x6c
	// Line 1032, Address: 0x2edac0, Func Offset: 0x70
	// Line 1033, Address: 0x2edacc, Func Offset: 0x7c
	// Line 1036, Address: 0x2edb10, Func Offset: 0xc0
	// Line 1037, Address: 0x2edb18, Func Offset: 0xc8
	// Line 1039, Address: 0x2edb20, Func Offset: 0xd0
	// Line 1040, Address: 0x2edb28, Func Offset: 0xd8
	// Line 1041, Address: 0x2edb34, Func Offset: 0xe4
	// Line 1043, Address: 0x2edb3c, Func Offset: 0xec
	// Line 1044, Address: 0x2edb40, Func Offset: 0xf0
	// Line 1045, Address: 0x2edb50, Func Offset: 0x100
	// Line 1046, Address: 0x2edb64, Func Offset: 0x114
	// Line 1047, Address: 0x2edb6c, Func Offset: 0x11c
	// Line 1048, Address: 0x2edb74, Func Offset: 0x124
	// Line 1049, Address: 0x2edb78, Func Offset: 0x128
	// Line 1050, Address: 0x2edb80, Func Offset: 0x130
	// Line 1049, Address: 0x2edb84, Func Offset: 0x134
	// Line 1050, Address: 0x2edb88, Func Offset: 0x138
	// Line 1051, Address: 0x2edb98, Func Offset: 0x148
	// Line 1053, Address: 0x2edba8, Func Offset: 0x158
	// Line 1054, Address: 0x2edbbc, Func Offset: 0x16c
	// Line 1057, Address: 0x2edbc8, Func Offset: 0x178
	// Line 1058, Address: 0x2edbd4, Func Offset: 0x184
	// Line 1059, Address: 0x2edc08, Func Offset: 0x1b8
	// Line 1060, Address: 0x2edc14, Func Offset: 0x1c4
	// Line 1061, Address: 0x2edc1c, Func Offset: 0x1cc
	// Line 1062, Address: 0x2edc70, Func Offset: 0x220
	// Line 1063, Address: 0x2edc80, Func Offset: 0x230
	// Line 1065, Address: 0x2edcb4, Func Offset: 0x264
	// Line 1066, Address: 0x2edcbc, Func Offset: 0x26c
	// Line 1068, Address: 0x2edcfc, Func Offset: 0x2ac
	// Line 1070, Address: 0x2edd04, Func Offset: 0x2b4
	// Line 1071, Address: 0x2edd08, Func Offset: 0x2b8
	// Func End, Address: 0x2edd28, Func Offset: 0x2d8
}

// 
// Start address: 0x2edd30
void EnemyTwinsControlAttack(sfObj* obj)
{
	EnemyTwinsWork* ew;
	float* pos;
	float dt;
	int frame;
	float vec[4];
	sfCldPart* pcp;
	_anon1* psp;
	// Line 1075, Address: 0x2edd30, Func Offset: 0
	// Line 1080, Address: 0x2edd54, Func Offset: 0x24
	// Line 1081, Address: 0x2edd5c, Func Offset: 0x2c
	// Line 1082, Address: 0x2edd68, Func Offset: 0x38
	// Line 1083, Address: 0x2edd74, Func Offset: 0x44
	// Line 1085, Address: 0x2edd98, Func Offset: 0x68
	// Line 1088, Address: 0x2edda4, Func Offset: 0x74
	// Line 1089, Address: 0x2eddc4, Func Offset: 0x94
	// Line 1090, Address: 0x2eddec, Func Offset: 0xbc
	// Line 1091, Address: 0x2eddf4, Func Offset: 0xc4
	// Line 1092, Address: 0x2eddfc, Func Offset: 0xcc
	// Line 1094, Address: 0x2ede00, Func Offset: 0xd0
	// Line 1096, Address: 0x2ede34, Func Offset: 0x104
	// Line 1097, Address: 0x2ede3c, Func Offset: 0x10c
	// Line 1098, Address: 0x2ede44, Func Offset: 0x114
	// Line 1099, Address: 0x2ede48, Func Offset: 0x118
	// Line 1100, Address: 0x2ede54, Func Offset: 0x124
	// Line 1101, Address: 0x2ede5c, Func Offset: 0x12c
	// Line 1102, Address: 0x2ede60, Func Offset: 0x130
	// Line 1103, Address: 0x2ede6c, Func Offset: 0x13c
	// Line 1104, Address: 0x2ede74, Func Offset: 0x144
	// Line 1105, Address: 0x2ede78, Func Offset: 0x148
	// Line 1106, Address: 0x2ede8c, Func Offset: 0x15c
	// Line 1107, Address: 0x2ede94, Func Offset: 0x164
	// Line 1108, Address: 0x2ede98, Func Offset: 0x168
	// Line 1109, Address: 0x2edea0, Func Offset: 0x170
	// Line 1110, Address: 0x2edeb8, Func Offset: 0x188
	// Line 1113, Address: 0x2edef4, Func Offset: 0x1c4
	// Line 1117, Address: 0x2edef8, Func Offset: 0x1c8
	// Line 1118, Address: 0x2edf08, Func Offset: 0x1d8
	// Line 1120, Address: 0x2edf20, Func Offset: 0x1f0
	// Line 1121, Address: 0x2edf38, Func Offset: 0x208
	// Line 1122, Address: 0x2edf3c, Func Offset: 0x20c
	// Line 1124, Address: 0x2edf48, Func Offset: 0x218
	// Line 1122, Address: 0x2edf4c, Func Offset: 0x21c
	// Line 1124, Address: 0x2edf50, Func Offset: 0x220
	// Line 1122, Address: 0x2edf54, Func Offset: 0x224
	// Line 1124, Address: 0x2edf58, Func Offset: 0x228
	// Line 1125, Address: 0x2edf68, Func Offset: 0x238
	// Line 1126, Address: 0x2edf70, Func Offset: 0x240
	// Line 1129, Address: 0x2edf74, Func Offset: 0x244
	// Line 1130, Address: 0x2edf78, Func Offset: 0x248
	// Line 1131, Address: 0x2edf8c, Func Offset: 0x25c
	// Line 1132, Address: 0x2edf94, Func Offset: 0x264
	// Line 1134, Address: 0x2edf98, Func Offset: 0x268
	// Line 1135, Address: 0x2edfb0, Func Offset: 0x280
	// Line 1136, Address: 0x2edfb8, Func Offset: 0x288
	// Line 1139, Address: 0x2edfc4, Func Offset: 0x294
	// Line 1140, Address: 0x2edfc8, Func Offset: 0x298
	// Line 1142, Address: 0x2edfe8, Func Offset: 0x2b8
	// Func End, Address: 0x2ee010, Func Offset: 0x2e0
}

// 
// Start address: 0x2ee010
void EnemyTwinsControlJumpAttack(sfObj* obj)
{
	EnemyTwinsWork* ew;
	float* pos;
	float dt;
	int frame;
	float vec[4];
	// Line 1146, Address: 0x2ee010, Func Offset: 0
	// Line 1151, Address: 0x2ee02c, Func Offset: 0x1c
	// Line 1152, Address: 0x2ee034, Func Offset: 0x24
	// Line 1153, Address: 0x2ee040, Func Offset: 0x30
	// Line 1154, Address: 0x2ee04c, Func Offset: 0x3c
	// Line 1156, Address: 0x2ee070, Func Offset: 0x60
	// Line 1157, Address: 0x2ee07c, Func Offset: 0x6c
	// Line 1158, Address: 0x2ee088, Func Offset: 0x78
	// Line 1159, Address: 0x2ee090, Func Offset: 0x80
	// Line 1160, Address: 0x2ee09c, Func Offset: 0x8c
	// Line 1161, Address: 0x2ee0a0, Func Offset: 0x90
	// Line 1162, Address: 0x2ee0ac, Func Offset: 0x9c
	// Line 1163, Address: 0x2ee0b4, Func Offset: 0xa4
	// Line 1164, Address: 0x2ee0b8, Func Offset: 0xa8
	// Line 1165, Address: 0x2ee0c0, Func Offset: 0xb0
	// Line 1166, Address: 0x2ee0d8, Func Offset: 0xc8
	// Line 1169, Address: 0x2ee114, Func Offset: 0x104
	// Line 1170, Address: 0x2ee118, Func Offset: 0x108
	// Line 1172, Address: 0x2ee13c, Func Offset: 0x12c
	// Line 1173, Address: 0x2ee150, Func Offset: 0x140
	// Line 1174, Address: 0x2ee158, Func Offset: 0x148
	// Line 1177, Address: 0x2ee15c, Func Offset: 0x14c
	// Line 1178, Address: 0x2ee160, Func Offset: 0x150
	// Line 1179, Address: 0x2ee174, Func Offset: 0x164
	// Line 1180, Address: 0x2ee17c, Func Offset: 0x16c
	// Line 1182, Address: 0x2ee180, Func Offset: 0x170
	// Line 1183, Address: 0x2ee198, Func Offset: 0x188
	// Line 1184, Address: 0x2ee1a0, Func Offset: 0x190
	// Line 1187, Address: 0x2ee1ac, Func Offset: 0x19c
	// Line 1188, Address: 0x2ee1b0, Func Offset: 0x1a0
	// Line 1190, Address: 0x2ee1d0, Func Offset: 0x1c0
	// Line 1191, Address: 0x2ee1dc, Func Offset: 0x1cc
	// Line 1193, Address: 0x2ee1f0, Func Offset: 0x1e0
	// Line 1194, Address: 0x2ee204, Func Offset: 0x1f4
	// Line 1195, Address: 0x2ee238, Func Offset: 0x228
	// Line 1196, Address: 0x2ee244, Func Offset: 0x234
	// Line 1197, Address: 0x2ee248, Func Offset: 0x238
	// Func End, Address: 0x2ee268, Func Offset: 0x258
}

// 
// Start address: 0x2ee270
void EnemyTwinsControlBackAttack(sfObj* obj)
{
	EnemyTwinsWork* ew;
	float* pos;
	float trot[4];
	float rot[4];
	float dt;
	float d;
	float r;
	int frame;
	sfCldPart* pcp;
	_anon1* psp;
	// Line 1201, Address: 0x2ee270, Func Offset: 0
	// Line 1207, Address: 0x2ee290, Func Offset: 0x20
	// Line 1208, Address: 0x2ee298, Func Offset: 0x28
	// Line 1209, Address: 0x2ee2a4, Func Offset: 0x34
	// Line 1210, Address: 0x2ee2ac, Func Offset: 0x3c
	// Line 1211, Address: 0x2ee2b8, Func Offset: 0x48
	// Line 1212, Address: 0x2ee2dc, Func Offset: 0x6c
	// Line 1213, Address: 0x2ee2e0, Func Offset: 0x70
	// Line 1214, Address: 0x2ee2ec, Func Offset: 0x7c
	// Line 1215, Address: 0x2ee2f8, Func Offset: 0x88
	// Line 1216, Address: 0x2ee2fc, Func Offset: 0x8c
	// Line 1217, Address: 0x2ee308, Func Offset: 0x98
	// Line 1219, Address: 0x2ee310, Func Offset: 0xa0
	// Line 1220, Address: 0x2ee324, Func Offset: 0xb4
	// Line 1221, Address: 0x2ee32c, Func Offset: 0xbc
	// Line 1222, Address: 0x2ee330, Func Offset: 0xc0
	// Line 1223, Address: 0x2ee338, Func Offset: 0xc8
	// Line 1224, Address: 0x2ee350, Func Offset: 0xe0
	// Line 1227, Address: 0x2ee38c, Func Offset: 0x11c
	// Line 1231, Address: 0x2ee390, Func Offset: 0x120
	// Line 1232, Address: 0x2ee3a0, Func Offset: 0x130
	// Line 1234, Address: 0x2ee3b8, Func Offset: 0x148
	// Line 1235, Address: 0x2ee3d0, Func Offset: 0x160
	// Line 1236, Address: 0x2ee3d4, Func Offset: 0x164
	// Line 1238, Address: 0x2ee3e0, Func Offset: 0x170
	// Line 1236, Address: 0x2ee3e4, Func Offset: 0x174
	// Line 1238, Address: 0x2ee3e8, Func Offset: 0x178
	// Line 1236, Address: 0x2ee3ec, Func Offset: 0x17c
	// Line 1238, Address: 0x2ee3f0, Func Offset: 0x180
	// Line 1239, Address: 0x2ee400, Func Offset: 0x190
	// Line 1240, Address: 0x2ee408, Func Offset: 0x198
	// Line 1243, Address: 0x2ee40c, Func Offset: 0x19c
	// Line 1244, Address: 0x2ee410, Func Offset: 0x1a0
	// Line 1245, Address: 0x2ee424, Func Offset: 0x1b4
	// Line 1246, Address: 0x2ee42c, Func Offset: 0x1bc
	// Line 1248, Address: 0x2ee430, Func Offset: 0x1c0
	// Line 1249, Address: 0x2ee448, Func Offset: 0x1d8
	// Line 1250, Address: 0x2ee450, Func Offset: 0x1e0
	// Line 1253, Address: 0x2ee45c, Func Offset: 0x1ec
	// Line 1254, Address: 0x2ee460, Func Offset: 0x1f0
	// Line 1255, Address: 0x2ee468, Func Offset: 0x1f8
	// Line 1254, Address: 0x2ee46c, Func Offset: 0x1fc
	// Line 1255, Address: 0x2ee470, Func Offset: 0x200
	// Line 1257, Address: 0x2ee48c, Func Offset: 0x21c
	// Line 1258, Address: 0x2ee498, Func Offset: 0x228
	// Line 1259, Address: 0x2ee49c, Func Offset: 0x22c
	// Line 1260, Address: 0x2ee4b4, Func Offset: 0x244
	// Line 1261, Address: 0x2ee4bc, Func Offset: 0x24c
	// Line 1262, Address: 0x2ee4c8, Func Offset: 0x258
	// Line 1263, Address: 0x2ee4dc, Func Offset: 0x26c
	// Line 1264, Address: 0x2ee4ec, Func Offset: 0x27c
	// Line 1265, Address: 0x2ee4f0, Func Offset: 0x280
	// Line 1266, Address: 0x2ee500, Func Offset: 0x290
	// Line 1267, Address: 0x2ee510, Func Offset: 0x2a0
	// Line 1268, Address: 0x2ee51c, Func Offset: 0x2ac
	// Func End, Address: 0x2ee540, Func Offset: 0x2d0
}

// 
// Start address: 0x2ee540
void set_escape_point(sfObj* obj)
{
	EnemyTwinsWork* ew;
	float* ppos;
	float tpos[4];
	EnemyMeasureResult mres;
	int i;
	int p;
	// Line 1272, Address: 0x2ee540, Func Offset: 0
	// Line 1278, Address: 0x2ee560, Func Offset: 0x20
	// Line 1279, Address: 0x2ee568, Func Offset: 0x28
	// Line 1280, Address: 0x2ee574, Func Offset: 0x34
	// Line 1281, Address: 0x2ee58c, Func Offset: 0x4c
	// Line 1282, Address: 0x2ee598, Func Offset: 0x58
	// Line 1283, Address: 0x2ee5a8, Func Offset: 0x68
	// Line 1286, Address: 0x2ee5bc, Func Offset: 0x7c
	// Line 1287, Address: 0x2ee5c8, Func Offset: 0x88
	// Line 1286, Address: 0x2ee5cc, Func Offset: 0x8c
	// Line 1287, Address: 0x2ee5d0, Func Offset: 0x90
	// Line 1292, Address: 0x2ee614, Func Offset: 0xd4
	// Line 1293, Address: 0x2ee628, Func Offset: 0xe8
	// Line 1294, Address: 0x2ee634, Func Offset: 0xf4
	// Func End, Address: 0x2ee658, Func Offset: 0x118
}

// 
// Start address: 0x2ee660
void EnemyTwinsControlEscape(sfObj* obj)
{
	EnemyTwinsWork* ew;
	float* pos;
	float* ppos;
	float tpos[4];
	float vec[4];
	float rot[4];
	float dt;
	float d;
	float r;
	float f;
	// Line 1298, Address: 0x2ee660, Func Offset: 0
	// Line 1304, Address: 0x2ee684, Func Offset: 0x24
	// Line 1305, Address: 0x2ee68c, Func Offset: 0x2c
	// Line 1306, Address: 0x2ee698, Func Offset: 0x38
	// Line 1307, Address: 0x2ee6a4, Func Offset: 0x44
	// Line 1308, Address: 0x2ee6b0, Func Offset: 0x50
	// Line 1309, Address: 0x2ee6bc, Func Offset: 0x5c
	// Line 1310, Address: 0x2ee6f4, Func Offset: 0x94
	// Line 1311, Address: 0x2ee6f8, Func Offset: 0x98
	// Line 1312, Address: 0x2ee704, Func Offset: 0xa4
	// Line 1313, Address: 0x2ee710, Func Offset: 0xb0
	// Line 1316, Address: 0x2ee718, Func Offset: 0xb8
	// Line 1317, Address: 0x2ee720, Func Offset: 0xc0
	// Line 1318, Address: 0x2ee728, Func Offset: 0xc8
	// Line 1319, Address: 0x2ee72c, Func Offset: 0xcc
	// Line 1322, Address: 0x2ee738, Func Offset: 0xd8
	// Line 1323, Address: 0x2ee74c, Func Offset: 0xec
	// Line 1324, Address: 0x2ee754, Func Offset: 0xf4
	// Line 1325, Address: 0x2ee75c, Func Offset: 0xfc
	// Line 1326, Address: 0x2ee760, Func Offset: 0x100
	// Line 1327, Address: 0x2ee768, Func Offset: 0x108
	// Line 1326, Address: 0x2ee76c, Func Offset: 0x10c
	// Line 1327, Address: 0x2ee770, Func Offset: 0x110
	// Line 1328, Address: 0x2ee780, Func Offset: 0x120
	// Line 1330, Address: 0x2ee790, Func Offset: 0x130
	// Line 1331, Address: 0x2ee7a4, Func Offset: 0x144
	// Line 1332, Address: 0x2ee7b0, Func Offset: 0x150
	// Line 1333, Address: 0x2ee7b4, Func Offset: 0x154
	// Line 1332, Address: 0x2ee7b8, Func Offset: 0x158
	// Line 1333, Address: 0x2ee7bc, Func Offset: 0x15c
	// Line 1334, Address: 0x2ee7c4, Func Offset: 0x164
	// Line 1335, Address: 0x2ee818, Func Offset: 0x1b8
	// Line 1336, Address: 0x2ee830, Func Offset: 0x1d0
	// Line 1337, Address: 0x2ee834, Func Offset: 0x1d4
	// Line 1338, Address: 0x2ee848, Func Offset: 0x1e8
	// Line 1339, Address: 0x2ee858, Func Offset: 0x1f8
	// Line 1341, Address: 0x2ee8a8, Func Offset: 0x248
	// Line 1342, Address: 0x2ee8b0, Func Offset: 0x250
	// Line 1345, Address: 0x2ee904, Func Offset: 0x2a4
	// Line 1346, Address: 0x2ee90c, Func Offset: 0x2ac
	// Line 1348, Address: 0x2ee93c, Func Offset: 0x2dc
	// Line 1350, Address: 0x2ee968, Func Offset: 0x308
	// Line 1351, Address: 0x2ee974, Func Offset: 0x314
	// Line 1352, Address: 0x2ee980, Func Offset: 0x320
	// Line 1353, Address: 0x2ee990, Func Offset: 0x330
	// Line 1354, Address: 0x2ee998, Func Offset: 0x338
	// Line 1355, Address: 0x2ee9a0, Func Offset: 0x340
	// Line 1357, Address: 0x2ee9a8, Func Offset: 0x348
	// Line 1358, Address: 0x2ee9c8, Func Offset: 0x368
	// Line 1361, Address: 0x2ee9d0, Func Offset: 0x370
	// Line 1362, Address: 0x2ee9dc, Func Offset: 0x37c
	// Line 1363, Address: 0x2eea14, Func Offset: 0x3b4
	// Line 1364, Address: 0x2eea20, Func Offset: 0x3c0
	// Line 1366, Address: 0x2eea28, Func Offset: 0x3c8
	// Line 1370, Address: 0x2eea40, Func Offset: 0x3e0
	// Func End, Address: 0x2eea68, Func Offset: 0x408
}

// 
// Start address: 0x2eea70
int set_damage_anime(sfObj* obj, EnemyBattleDamage* bd)
{
	EnemyTwinsWork* ew;
	EnemyTwinsAnime anime;
	float dir[4];
	float rrot[4];
	int down;
	int d;
	int nextstep;
	// Line 1374, Address: 0x2eea70, Func Offset: 0
	// Line 1380, Address: 0x2eea88, Func Offset: 0x18
	// Line 1381, Address: 0x2eea90, Func Offset: 0x20
	// Line 1380, Address: 0x2eea94, Func Offset: 0x24
	// Line 1381, Address: 0x2eea98, Func Offset: 0x28
	// Line 1382, Address: 0x2eeabc, Func Offset: 0x4c
	// Line 1383, Address: 0x2eeadc, Func Offset: 0x6c
	// Line 1384, Address: 0x2eeaf0, Func Offset: 0x80
	// Line 1385, Address: 0x2eeb00, Func Offset: 0x90
	// Line 1386, Address: 0x2eeb20, Func Offset: 0xb0
	// Line 1387, Address: 0x2eeb48, Func Offset: 0xd8
	// Line 1389, Address: 0x2eeb50, Func Offset: 0xe0
	// Line 1398, Address: 0x2eeb7c, Func Offset: 0x10c
	// Line 1399, Address: 0x2eeb80, Func Offset: 0x110
	// Line 1401, Address: 0x2eeb88, Func Offset: 0x118
	// Line 1402, Address: 0x2eeb90, Func Offset: 0x120
	// Line 1405, Address: 0x2eeb98, Func Offset: 0x128
	// Line 1411, Address: 0x2eeba0, Func Offset: 0x130
	// Line 1413, Address: 0x2eeba8, Func Offset: 0x138
	// Line 1414, Address: 0x2eebb0, Func Offset: 0x140
	// Line 1417, Address: 0x2eebb8, Func Offset: 0x148
	// Line 1420, Address: 0x2eebc0, Func Offset: 0x150
	// Line 1422, Address: 0x2eebc8, Func Offset: 0x158
	// Line 1427, Address: 0x2eebd0, Func Offset: 0x160
	// Line 1429, Address: 0x2eebd8, Func Offset: 0x168
	// Line 1433, Address: 0x2eebe0, Func Offset: 0x170
	// Line 1435, Address: 0x2eebe8, Func Offset: 0x178
	// Line 1437, Address: 0x2eec00, Func Offset: 0x190
	// Line 1438, Address: 0x2eec08, Func Offset: 0x198
	// Line 1442, Address: 0x2eec0c, Func Offset: 0x19c
	// Line 1443, Address: 0x2eec10, Func Offset: 0x1a0
	// Line 1444, Address: 0x2eec18, Func Offset: 0x1a8
	// Line 1445, Address: 0x2eec34, Func Offset: 0x1c4
	// Line 1446, Address: 0x2eec38, Func Offset: 0x1c8
	// Line 1447, Address: 0x2eec68, Func Offset: 0x1f8
	// Line 1449, Address: 0x2eec70, Func Offset: 0x200
	// Line 1452, Address: 0x2eeca0, Func Offset: 0x230
	// Line 1453, Address: 0x2eeca4, Func Offset: 0x234
	// Func End, Address: 0x2eecbc, Func Offset: 0x24c
}

// 
// Start address: 0x2eecc0
void EnemyTwinsControlDamage(sfObj* obj)
{
	EnemyTwinsWork* ew;
	float dt;
	int fr;
	EnemyBattleDamage bd;
	int nextstep;
	EnemyTwinsAnime anime;
	float vec[4];
	float d;
	int sf;
	int ef;
	int f;
	float sp;
	float vec[4];
	// Line 1457, Address: 0x2eecc0, Func Offset: 0
	// Line 1461, Address: 0x2eece0, Func Offset: 0x20
	// Line 1462, Address: 0x2eecec, Func Offset: 0x2c
	// Line 1463, Address: 0x2eecf8, Func Offset: 0x38
	// Line 1464, Address: 0x2eed24, Func Offset: 0x64
	// Line 1465, Address: 0x2eed28, Func Offset: 0x68
	// Line 1466, Address: 0x2eed34, Func Offset: 0x74
	// Line 1471, Address: 0x2eed3c, Func Offset: 0x7c
	// Line 1472, Address: 0x2eed4c, Func Offset: 0x8c
	// Line 1473, Address: 0x2eed58, Func Offset: 0x98
	// Line 1474, Address: 0x2eed64, Func Offset: 0xa4
	// Line 1475, Address: 0x2eed74, Func Offset: 0xb4
	// Line 1477, Address: 0x2eed9c, Func Offset: 0xdc
	// Line 1479, Address: 0x2eeda0, Func Offset: 0xe0
	// Line 1481, Address: 0x2eedac, Func Offset: 0xec
	// Line 1482, Address: 0x2eedb4, Func Offset: 0xf4
	// Line 1483, Address: 0x2eedb8, Func Offset: 0xf8
	// Line 1485, Address: 0x2eedd0, Func Offset: 0x110
	// Line 1488, Address: 0x2eedd8, Func Offset: 0x118
	// Line 1490, Address: 0x2eee14, Func Offset: 0x154
	// Line 1492, Address: 0x2eee18, Func Offset: 0x158
	// Line 1495, Address: 0x2eee20, Func Offset: 0x160
	// Line 1497, Address: 0x2eee24, Func Offset: 0x164
	// Line 1498, Address: 0x2eee28, Func Offset: 0x168
	// Line 1499, Address: 0x2eee40, Func Offset: 0x180
	// Line 1501, Address: 0x2eee48, Func Offset: 0x188
	// Line 1503, Address: 0x2eee60, Func Offset: 0x1a0
	// Line 1505, Address: 0x2eee68, Func Offset: 0x1a8
	// Line 1506, Address: 0x2eee84, Func Offset: 0x1c4
	// Line 1507, Address: 0x2eee90, Func Offset: 0x1d0
	// Line 1508, Address: 0x2eeea4, Func Offset: 0x1e4
	// Line 1510, Address: 0x2eeeb0, Func Offset: 0x1f0
	// Line 1511, Address: 0x2eeebc, Func Offset: 0x1fc
	// Line 1512, Address: 0x2eeee8, Func Offset: 0x228
	// Line 1513, Address: 0x2eeef4, Func Offset: 0x234
	// Line 1518, Address: 0x2eef48, Func Offset: 0x288
	// Line 1520, Address: 0x2eef74, Func Offset: 0x2b4
	// Line 1521, Address: 0x2eef78, Func Offset: 0x2b8
	// Line 1522, Address: 0x2eef90, Func Offset: 0x2d0
	// Line 1524, Address: 0x2eefb8, Func Offset: 0x2f8
	// Line 1526, Address: 0x2eefc0, Func Offset: 0x300
	// Line 1527, Address: 0x2eefd4, Func Offset: 0x314
	// Line 1528, Address: 0x2eefdc, Func Offset: 0x31c
	// Line 1529, Address: 0x2eefe0, Func Offset: 0x320
	// Line 1530, Address: 0x2eeffc, Func Offset: 0x33c
	// Line 1532, Address: 0x2ef004, Func Offset: 0x344
	// Line 1533, Address: 0x2ef00c, Func Offset: 0x34c
	// Line 1534, Address: 0x2ef010, Func Offset: 0x350
	// Line 1535, Address: 0x2ef030, Func Offset: 0x370
	// Line 1543, Address: 0x2ef038, Func Offset: 0x378
	// Line 1544, Address: 0x2ef048, Func Offset: 0x388
	// Line 1546, Address: 0x2ef078, Func Offset: 0x3b8
	// Line 1547, Address: 0x2ef084, Func Offset: 0x3c4
	// Line 1549, Address: 0x2ef088, Func Offset: 0x3c8
	// Line 1550, Address: 0x2ef08c, Func Offset: 0x3cc
	// Line 1553, Address: 0x2ef094, Func Offset: 0x3d4
	// Line 1556, Address: 0x2ef098, Func Offset: 0x3d8
	// Line 1554, Address: 0x2ef0a0, Func Offset: 0x3e0
	// Line 1557, Address: 0x2ef0a4, Func Offset: 0x3e4
	// Line 1558, Address: 0x2ef0ac, Func Offset: 0x3ec
	// Line 1561, Address: 0x2ef0b0, Func Offset: 0x3f0
	// Line 1559, Address: 0x2ef0b8, Func Offset: 0x3f8
	// Line 1562, Address: 0x2ef0bc, Func Offset: 0x3fc
	// Line 1563, Address: 0x2ef0c4, Func Offset: 0x404
	// Line 1564, Address: 0x2ef0c8, Func Offset: 0x408
	// Line 1565, Address: 0x2ef0d4, Func Offset: 0x414
	// Line 1567, Address: 0x2ef0d8, Func Offset: 0x418
	// Line 1568, Address: 0x2ef0dc, Func Offset: 0x41c
	// Line 1572, Address: 0x2ef0e4, Func Offset: 0x424
	// Line 1575, Address: 0x2ef0e8, Func Offset: 0x428
	// Line 1573, Address: 0x2ef0f0, Func Offset: 0x430
	// Line 1574, Address: 0x2ef0f4, Func Offset: 0x434
	// Line 1578, Address: 0x2ef0f8, Func Offset: 0x438
	// Line 1579, Address: 0x2ef100, Func Offset: 0x440
	// Line 1581, Address: 0x2ef110, Func Offset: 0x450
	// Line 1582, Address: 0x2ef124, Func Offset: 0x464
	// Line 1584, Address: 0x2ef16c, Func Offset: 0x4ac
	// Line 1588, Address: 0x2ef178, Func Offset: 0x4b8
	// Func End, Address: 0x2ef19c, Func Offset: 0x4dc
}

// 
// Start address: 0x2ef1a0
void EnemyTwinsControlDown(sfObj* obj)
{
	EnemyTwinsWork* ew;
	float* pos;
	float tpos[4];
	float vec[4];
	float rot[4];
	float dt;
	EnemyMeasureResult mres;
	// Line 1592, Address: 0x2ef1a0, Func Offset: 0
	// Line 1598, Address: 0x2ef1b8, Func Offset: 0x18
	// Line 1599, Address: 0x2ef1c4, Func Offset: 0x24
	// Line 1600, Address: 0x2ef1cc, Func Offset: 0x2c
	// Line 1601, Address: 0x2ef1d8, Func Offset: 0x38
	// Line 1602, Address: 0x2ef1ec, Func Offset: 0x4c
	// Line 1604, Address: 0x2ef208, Func Offset: 0x68
	// Line 1605, Address: 0x2ef218, Func Offset: 0x78
	// Line 1606, Address: 0x2ef228, Func Offset: 0x88
	// Line 1607, Address: 0x2ef230, Func Offset: 0x90
	// Line 1608, Address: 0x2ef264, Func Offset: 0xc4
	// Line 1609, Address: 0x2ef27c, Func Offset: 0xdc
	// Line 1610, Address: 0x2ef298, Func Offset: 0xf8
	// Line 1611, Address: 0x2ef2a4, Func Offset: 0x104
	// Line 1612, Address: 0x2ef2b0, Func Offset: 0x110
	// Line 1613, Address: 0x2ef2c4, Func Offset: 0x124
	// Line 1614, Address: 0x2ef2c8, Func Offset: 0x128
	// Line 1615, Address: 0x2ef2dc, Func Offset: 0x13c
	// Line 1617, Address: 0x2ef2f4, Func Offset: 0x154
	// Line 1619, Address: 0x2ef300, Func Offset: 0x160
	// Line 1620, Address: 0x2ef30c, Func Offset: 0x16c
	// Line 1623, Address: 0x2ef318, Func Offset: 0x178
	// Line 1624, Address: 0x2ef344, Func Offset: 0x1a4
	// Line 1625, Address: 0x2ef348, Func Offset: 0x1a8
	// Line 1626, Address: 0x2ef354, Func Offset: 0x1b4
	// Line 1627, Address: 0x2ef364, Func Offset: 0x1c4
	// Line 1628, Address: 0x2ef374, Func Offset: 0x1d4
	// Line 1631, Address: 0x2ef388, Func Offset: 0x1e8
	// Line 1632, Address: 0x2ef3a4, Func Offset: 0x204
	// Line 1633, Address: 0x2ef3b0, Func Offset: 0x210
	// Line 1634, Address: 0x2ef3c0, Func Offset: 0x220
	// Line 1635, Address: 0x2ef3cc, Func Offset: 0x22c
	// Line 1634, Address: 0x2ef3d0, Func Offset: 0x230
	// Line 1635, Address: 0x2ef3d4, Func Offset: 0x234
	// Line 1634, Address: 0x2ef3d8, Func Offset: 0x238
	// Line 1635, Address: 0x2ef3e0, Func Offset: 0x240
	// Line 1636, Address: 0x2ef3e8, Func Offset: 0x248
	// Line 1637, Address: 0x2ef3f0, Func Offset: 0x250
	// Line 1638, Address: 0x2ef408, Func Offset: 0x268
	// Line 1639, Address: 0x2ef42c, Func Offset: 0x28c
	// Line 1640, Address: 0x2ef454, Func Offset: 0x2b4
	// Line 1641, Address: 0x2ef45c, Func Offset: 0x2bc
	// Line 1642, Address: 0x2ef468, Func Offset: 0x2c8
	// Line 1644, Address: 0x2ef488, Func Offset: 0x2e8
	// Line 1645, Address: 0x2ef494, Func Offset: 0x2f4
	// Line 1646, Address: 0x2ef4a0, Func Offset: 0x300
	// Line 1648, Address: 0x2ef4a8, Func Offset: 0x308
	// Line 1649, Address: 0x2ef4bc, Func Offset: 0x31c
	// Line 1650, Address: 0x2ef4c0, Func Offset: 0x320
	// Line 1652, Address: 0x2ef4c8, Func Offset: 0x328
	// Line 1653, Address: 0x2ef4d4, Func Offset: 0x334
	// Line 1655, Address: 0x2ef4e0, Func Offset: 0x340
	// Line 1656, Address: 0x2ef4fc, Func Offset: 0x35c
	// Line 1657, Address: 0x2ef508, Func Offset: 0x368
	// Line 1658, Address: 0x2ef51c, Func Offset: 0x37c
	// Line 1659, Address: 0x2ef528, Func Offset: 0x388
	// Line 1661, Address: 0x2ef530, Func Offset: 0x390
	// Line 1663, Address: 0x2ef564, Func Offset: 0x3c4
	// Line 1664, Address: 0x2ef56c, Func Offset: 0x3cc
	// Line 1665, Address: 0x2ef578, Func Offset: 0x3d8
	// Line 1666, Address: 0x2ef584, Func Offset: 0x3e4
	// Line 1667, Address: 0x2ef590, Func Offset: 0x3f0
	// Line 1668, Address: 0x2ef5bc, Func Offset: 0x41c
	// Line 1669, Address: 0x2ef5c4, Func Offset: 0x424
	// Line 1670, Address: 0x2ef5d8, Func Offset: 0x438
	// Line 1672, Address: 0x2ef5e0, Func Offset: 0x440
	// Line 1674, Address: 0x2ef5ec, Func Offset: 0x44c
	// Line 1675, Address: 0x2ef5f4, Func Offset: 0x454
	// Line 1676, Address: 0x2ef5f8, Func Offset: 0x458
	// Line 1677, Address: 0x2ef608, Func Offset: 0x468
	// Line 1678, Address: 0x2ef610, Func Offset: 0x470
	// Line 1679, Address: 0x2ef61c, Func Offset: 0x47c
	// Line 1678, Address: 0x2ef620, Func Offset: 0x480
	// Line 1679, Address: 0x2ef624, Func Offset: 0x484
	// Line 1678, Address: 0x2ef628, Func Offset: 0x488
	// Line 1679, Address: 0x2ef63c, Func Offset: 0x49c
	// Line 1681, Address: 0x2ef644, Func Offset: 0x4a4
	// Line 1682, Address: 0x2ef64c, Func Offset: 0x4ac
	// Line 1683, Address: 0x2ef650, Func Offset: 0x4b0
	// Line 1685, Address: 0x2ef66c, Func Offset: 0x4cc
	// Line 1686, Address: 0x2ef674, Func Offset: 0x4d4
	// Line 1687, Address: 0x2ef678, Func Offset: 0x4d8
	// Line 1688, Address: 0x2ef6a8, Func Offset: 0x508
	// Line 1689, Address: 0x2ef6b4, Func Offset: 0x514
	// Line 1690, Address: 0x2ef6c0, Func Offset: 0x520
	// Line 1691, Address: 0x2ef6c8, Func Offset: 0x528
	// Line 1693, Address: 0x2ef6d4, Func Offset: 0x534
	// Line 1694, Address: 0x2ef6dc, Func Offset: 0x53c
	// Line 1695, Address: 0x2ef6e0, Func Offset: 0x540
	// Line 1696, Address: 0x2ef6fc, Func Offset: 0x55c
	// Line 1700, Address: 0x2ef75c, Func Offset: 0x5bc
	// Line 1701, Address: 0x2ef770, Func Offset: 0x5d0
	// Line 1702, Address: 0x2ef774, Func Offset: 0x5d4
	// Line 1703, Address: 0x2ef780, Func Offset: 0x5e0
	// Line 1705, Address: 0x2ef788, Func Offset: 0x5e8
	// Line 1706, Address: 0x2ef794, Func Offset: 0x5f4
	// Line 1707, Address: 0x2ef7a4, Func Offset: 0x604
	// Line 1708, Address: 0x2ef7b0, Func Offset: 0x610
	// Line 1709, Address: 0x2ef7d0, Func Offset: 0x630
	// Line 1710, Address: 0x2ef7fc, Func Offset: 0x65c
	// Line 1711, Address: 0x2ef828, Func Offset: 0x688
	// Line 1713, Address: 0x2ef830, Func Offset: 0x690
	// Line 1715, Address: 0x2ef838, Func Offset: 0x698
	// Line 1716, Address: 0x2ef854, Func Offset: 0x6b4
	// Line 1717, Address: 0x2ef860, Func Offset: 0x6c0
	// Line 1718, Address: 0x2ef86c, Func Offset: 0x6cc
	// Line 1719, Address: 0x2ef878, Func Offset: 0x6d8
	// Line 1720, Address: 0x2ef880, Func Offset: 0x6e0
	// Line 1721, Address: 0x2ef8a0, Func Offset: 0x700
	// Line 1724, Address: 0x2ef8ac, Func Offset: 0x70c
	// Line 1725, Address: 0x2ef8b0, Func Offset: 0x710
	// Func End, Address: 0x2ef8cc, Func Offset: 0x72c
}

// 
// Start address: 0x2ef8d0
void EnemyTwinsControlDead(sfObj* obj)
{
	// Line 1729, Address: 0x2ef8d0, Func Offset: 0
	// Line 1730, Address: 0x2ef8dc, Func Offset: 0xc
	// Line 1731, Address: 0x2ef8ec, Func Offset: 0x1c
	// Line 1732, Address: 0x2ef8f4, Func Offset: 0x24
	// Line 1734, Address: 0x2ef900, Func Offset: 0x30
	// Func End, Address: 0x2ef910, Func Offset: 0x40
}

// 
// Start address: 0x2ef910
void EnemyTwinsControlEvent(sfObj* obj)
{
	// Line 1738, Address: 0x2ef910, Func Offset: 0
	// Line 1739, Address: 0x2ef91c, Func Offset: 0xc
	// Line 1741, Address: 0x2ef940, Func Offset: 0x30
	// Line 1742, Address: 0x2ef94c, Func Offset: 0x3c
	// Line 1743, Address: 0x2ef958, Func Offset: 0x48
	// Line 1744, Address: 0x2ef960, Func Offset: 0x50
	// Line 1749, Address: 0x2ef968, Func Offset: 0x58
	// Line 1750, Address: 0x2ef978, Func Offset: 0x68
	// Line 1752, Address: 0x2ef980, Func Offset: 0x70
	// Func End, Address: 0x2ef990, Func Offset: 0x80
}

// 
// Start address: 0x2ef990
void EnemyTwinsControlTest()
{
	// Line 1798, Address: 0x2ef990, Func Offset: 0
	// Func End, Address: 0x2ef998, Func Offset: 0x8
}

// 
// Start address: 0x2ef9a0
int EnemyTwinsCanAttack(sfObj* obj)
{
	EnemyTwinsWork* ew;
	float* pos;
	float* ppos;
	// Line 1805, Address: 0x2ef9a0, Func Offset: 0
	// Line 1808, Address: 0x2ef9b0, Func Offset: 0x10
	// Line 1809, Address: 0x2ef9b8, Func Offset: 0x18
	// Line 1810, Address: 0x2ef9d8, Func Offset: 0x38
	// Line 1811, Address: 0x2ef9e0, Func Offset: 0x40
	// Line 1812, Address: 0x2ef9ec, Func Offset: 0x4c
	// Line 1814, Address: 0x2efa18, Func Offset: 0x78
	// Line 1816, Address: 0x2efa20, Func Offset: 0x80
	// Line 1818, Address: 0x2efa38, Func Offset: 0x98
	// Func End, Address: 0x2efa4c, Func Offset: 0xac
}

// 
// Start address: 0x2efa50
void EnemyTwinsSetAttackWait(sfObj* obj)
{
	EnemyTwinsWork* ew;
	// Line 1822, Address: 0x2efa50, Func Offset: 0
	// Line 1824, Address: 0x2efa5c, Func Offset: 0xc
	// Line 1827, Address: 0x2efa88, Func Offset: 0x38
	// Line 1828, Address: 0x2efa90, Func Offset: 0x40
	// Line 1829, Address: 0x2efab0, Func Offset: 0x60
	// Func End, Address: 0x2efac0, Func Offset: 0x70
}

// 
// Start address: 0x2efac0
void EnemyTwinsSetDamageCommand(sfObj* obj)
{
	// Line 1833, Address: 0x2efac0, Func Offset: 0
	// Line 1834, Address: 0x2efacc, Func Offset: 0xc
	// Line 1837, Address: 0x2efaf8, Func Offset: 0x38
	// Func End, Address: 0x2efb08, Func Offset: 0x48
}

// 
// Start address: 0x2efb10
void EnemyTwinsHitCheck(sfObj* obj)
{
	EnemyTwinsWork* ew;
	float dt;
	float rdt;
	float vec[4];
	// Line 1841, Address: 0x2efb10, Func Offset: 0
	// Line 1845, Address: 0x2efb28, Func Offset: 0x18
	// Line 1846, Address: 0x2efb30, Func Offset: 0x20
	// Line 1847, Address: 0x2efb3c, Func Offset: 0x2c
	// Line 1848, Address: 0x2efb4c, Func Offset: 0x3c
	// Line 1849, Address: 0x2efb5c, Func Offset: 0x4c
	// Line 1850, Address: 0x2efb60, Func Offset: 0x50
	// Line 1851, Address: 0x2efb70, Func Offset: 0x60
	// Line 1852, Address: 0x2efb7c, Func Offset: 0x6c
	// Line 1851, Address: 0x2efb88, Func Offset: 0x78
	// Line 1852, Address: 0x2efb90, Func Offset: 0x80
	// Line 1853, Address: 0x2efbb8, Func Offset: 0xa8
	// Line 1854, Address: 0x2efbc4, Func Offset: 0xb4
	// Line 1855, Address: 0x2efbe8, Func Offset: 0xd8
	// Line 1857, Address: 0x2efc10, Func Offset: 0x100
	// Line 1858, Address: 0x2efc18, Func Offset: 0x108
	// Line 1859, Address: 0x2efc20, Func Offset: 0x110
	// Line 1860, Address: 0x2efc30, Func Offset: 0x120
	// Line 1863, Address: 0x2efc38, Func Offset: 0x128
	// Line 1865, Address: 0x2efc40, Func Offset: 0x130
	// Func End, Address: 0x2efc5c, Func Offset: 0x14c
}

// 
// Start address: 0x2efc60
void EnemyTwinsAnimeSet(sfObj* obj, EnemyTwinsAnime anime)
{
	EnemyTwinsWork* ew;
	EnemyFootStepsData* pfs;
	int old_anime;
	int cf;
	float s;
	// Line 1869, Address: 0x2efc60, Func Offset: 0
	// Line 1874, Address: 0x2efc84, Func Offset: 0x24
	// Line 1875, Address: 0x2efc90, Func Offset: 0x30
	// Line 1877, Address: 0x2efc9c, Func Offset: 0x3c
	// Line 1876, Address: 0x2efca0, Func Offset: 0x40
	// Line 1877, Address: 0x2efca4, Func Offset: 0x44
	// Line 1879, Address: 0x2efcf0, Func Offset: 0x90
	// Line 1880, Address: 0x2efcf8, Func Offset: 0x98
	// Line 1881, Address: 0x2efd10, Func Offset: 0xb0
	// Line 1885, Address: 0x2efd18, Func Offset: 0xb8
	// Line 1886, Address: 0x2efd20, Func Offset: 0xc0
	// Line 1887, Address: 0x2efd2c, Func Offset: 0xcc
	// Line 1888, Address: 0x2efd30, Func Offset: 0xd0
	// Line 1889, Address: 0x2efd48, Func Offset: 0xe8
	// Line 1891, Address: 0x2efd50, Func Offset: 0xf0
	// Line 1892, Address: 0x2efd5c, Func Offset: 0xfc
	// Line 1893, Address: 0x2efd64, Func Offset: 0x104
	// Line 1894, Address: 0x2efd68, Func Offset: 0x108
	// Line 1895, Address: 0x2efd80, Func Offset: 0x120
	// Line 1896, Address: 0x2efd8c, Func Offset: 0x12c
	// Line 1897, Address: 0x2efd98, Func Offset: 0x138
	// Line 1898, Address: 0x2efda0, Func Offset: 0x140
	// Line 1899, Address: 0x2efdac, Func Offset: 0x14c
	// Line 1900, Address: 0x2efdb0, Func Offset: 0x150
	// Line 1902, Address: 0x2efdc8, Func Offset: 0x168
	// Line 1904, Address: 0x2efdd0, Func Offset: 0x170
	// Line 1906, Address: 0x2efddc, Func Offset: 0x17c
	// Line 1907, Address: 0x2efde0, Func Offset: 0x180
	// Line 1909, Address: 0x2efde8, Func Offset: 0x188
	// Line 1911, Address: 0x2efe08, Func Offset: 0x1a8
	// Line 1912, Address: 0x2efe0c, Func Offset: 0x1ac
	// Line 1913, Address: 0x2efe14, Func Offset: 0x1b4
	// Line 1914, Address: 0x2efe18, Func Offset: 0x1b8
	// Line 1917, Address: 0x2efe20, Func Offset: 0x1c0
	// Line 1919, Address: 0x2efe28, Func Offset: 0x1c8
	// Line 1920, Address: 0x2efe30, Func Offset: 0x1d0
	// Line 1922, Address: 0x2efe8c, Func Offset: 0x22c
	// Line 1923, Address: 0x2efe90, Func Offset: 0x230
	// Line 1924, Address: 0x2efeac, Func Offset: 0x24c
	// Line 1926, Address: 0x2efeb4, Func Offset: 0x254
	// Line 1927, Address: 0x2efeb8, Func Offset: 0x258
	// Line 1928, Address: 0x2efed0, Func Offset: 0x270
	// Line 1931, Address: 0x2efed8, Func Offset: 0x278
	// Line 1932, Address: 0x2efee0, Func Offset: 0x280
	// Line 1935, Address: 0x2efee4, Func Offset: 0x284
	// Line 1936, Address: 0x2efee8, Func Offset: 0x288
	// Line 1937, Address: 0x2efef4, Func Offset: 0x294
	// Func End, Address: 0x2eff18, Func Offset: 0x2b8
}

// 
// Start address: 0x2eff20
void EnemyTwinsDamageSoundCall(sfObj* obj, EnemyBattleDamage* bd)
{
	// Line 1941, Address: 0x2eff20, Func Offset: 0
	// Line 1942, Address: 0x2eff30, Func Offset: 0x10
	// Line 1943, Address: 0x2eff40, Func Offset: 0x20
	// Line 1944, Address: 0x2eff54, Func Offset: 0x34
	// Line 1945, Address: 0x2eff7c, Func Offset: 0x5c
	// Line 1946, Address: 0x2eff84, Func Offset: 0x64
	// Line 1947, Address: 0x2eff90, Func Offset: 0x70
	// Line 1948, Address: 0x2eff9c, Func Offset: 0x7c
	// Line 1949, Address: 0x2effa0, Func Offset: 0x80
	// Func End, Address: 0x2effb0, Func Offset: 0x90
}

// 
// Start address: 0x2effb0
void EnemyTwinsSoundStop(sfObj* obj)
{
	// Line 1953, Address: 0x2effb0, Func Offset: 0
	// Line 1954, Address: 0x2effc0, Func Offset: 0x10
	// Line 1955, Address: 0x2effd4, Func Offset: 0x24
	// Line 1956, Address: 0x2efff4, Func Offset: 0x44
	// Line 1957, Address: 0x2f0004, Func Offset: 0x54
	// Line 1958, Address: 0x2f0008, Func Offset: 0x58
	// Func End, Address: 0x2f001c, Func Offset: 0x6c
}

// 
// Start address: 0x2f0020
void EnemyTwinsSetFindPlayer(sfObj* obj)
{
	EnemyTwinsWork* ew;
	EnemySenseData* es;
	float* pos;
	// Line 1962, Address: 0x2f0020, Func Offset: 0
	// Line 1967, Address: 0x2f0038, Func Offset: 0x18
	// Line 1968, Address: 0x2f0040, Func Offset: 0x20
	// Line 1967, Address: 0x2f0044, Func Offset: 0x24
	// Line 1969, Address: 0x2f0048, Func Offset: 0x28
	// Line 1970, Address: 0x2f0058, Func Offset: 0x38
	// Line 1973, Address: 0x2f0064, Func Offset: 0x44
	// Line 1971, Address: 0x2f0068, Func Offset: 0x48
	// Line 1973, Address: 0x2f006c, Func Offset: 0x4c
	// Line 1971, Address: 0x2f0070, Func Offset: 0x50
	// Line 1973, Address: 0x2f0074, Func Offset: 0x54
	// Line 1974, Address: 0x2f0088, Func Offset: 0x68
	// Line 1976, Address: 0x2f008c, Func Offset: 0x6c
	// Line 1977, Address: 0x2f00a8, Func Offset: 0x88
	// Line 1978, Address: 0x2f00b0, Func Offset: 0x90
	// Line 1979, Address: 0x2f00b8, Func Offset: 0x98
	// Line 1981, Address: 0x2f00c0, Func Offset: 0xa0
	// Line 1985, Address: 0x2f00c8, Func Offset: 0xa8
	// Line 1982, Address: 0x2f00cc, Func Offset: 0xac
	// Line 1981, Address: 0x2f00d0, Func Offset: 0xb0
	// Line 1982, Address: 0x2f00d4, Func Offset: 0xb4
	// Line 1985, Address: 0x2f00d8, Func Offset: 0xb8
	// Line 1983, Address: 0x2f00dc, Func Offset: 0xbc
	// Line 1985, Address: 0x2f00e0, Func Offset: 0xc0
	// Line 1984, Address: 0x2f00e4, Func Offset: 0xc4
	// Line 1985, Address: 0x2f00e8, Func Offset: 0xc8
	// Line 1986, Address: 0x2f00f8, Func Offset: 0xd8
	// Func End, Address: 0x2f0114, Func Offset: 0xf4
}

// 
// Start address: 0x2f0120
void EnemyTwinsSetEventDamageCheck(sfObj* obj)
{
	// Line 1990, Address: 0x2f0120, Func Offset: 0
	// Line 1991, Address: 0x2f012c, Func Offset: 0xc
	// Line 1993, Address: 0x2f0150, Func Offset: 0x30
	// Line 1995, Address: 0x2f016c, Func Offset: 0x4c
	// Line 1996, Address: 0x2f0174, Func Offset: 0x54
	// Line 1997, Address: 0x2f0178, Func Offset: 0x58
	// Line 1999, Address: 0x2f0190, Func Offset: 0x70
	// Line 2001, Address: 0x2f01a8, Func Offset: 0x88
	// Line 2002, Address: 0x2f01b0, Func Offset: 0x90
	// Line 2005, Address: 0x2f01cc, Func Offset: 0xac
	// Line 2006, Address: 0x2f01d4, Func Offset: 0xb4
	// Line 2007, Address: 0x2f01d8, Func Offset: 0xb8
	// Line 2010, Address: 0x2f01ec, Func Offset: 0xcc
	// Line 2011, Address: 0x2f01f0, Func Offset: 0xd0
	// Func End, Address: 0x2f0200, Func Offset: 0xe0
}

// 
// Start address: 0x2f0200
void EnemyEDTwinsAdditionalDamage(void* obj)
{
	EnemyBattleDamage bd;
	int nextstep;
	// Line 2015, Address: 0x2f0200, Func Offset: 0
	// Line 2019, Address: 0x2f0210, Func Offset: 0x10
	// Line 2020, Address: 0x2f0218, Func Offset: 0x18
	// Line 2021, Address: 0x2f0224, Func Offset: 0x24
	// Line 2022, Address: 0x2f0230, Func Offset: 0x30
	// Line 2023, Address: 0x2f0260, Func Offset: 0x60
	// Line 2024, Address: 0x2f0268, Func Offset: 0x68
	// Line 2025, Address: 0x2f0274, Func Offset: 0x74
	// Line 2026, Address: 0x2f0284, Func Offset: 0x84
	// Line 2027, Address: 0x2f0294, Func Offset: 0x94
	// Line 2028, Address: 0x2f02bc, Func Offset: 0xbc
	// Line 2030, Address: 0x2f02c0, Func Offset: 0xc0
	// Line 2031, Address: 0x2f02cc, Func Offset: 0xcc
	// Func End, Address: 0x2f02e4, Func Offset: 0xe4
}

// 
// Start address: 0x2f02f0
void EnemyEDTwinsAdditionalDamageDown(void* obj)
{
	EnemyTwinsWork* ew;
	EnemyBattleDamage bd;
	float pos[4];
	// Line 2035, Address: 0x2f02f0, Func Offset: 0
	// Line 2038, Address: 0x2f0304, Func Offset: 0x14
	// Line 2039, Address: 0x2f0310, Func Offset: 0x20
	// Line 2040, Address: 0x2f031c, Func Offset: 0x2c
	// Line 2041, Address: 0x2f032c, Func Offset: 0x3c
	// Line 2042, Address: 0x2f0338, Func Offset: 0x48
	// Line 2043, Address: 0x2f0344, Func Offset: 0x54
	// Line 2044, Address: 0x2f0348, Func Offset: 0x58
	// Line 2045, Address: 0x2f0354, Func Offset: 0x64
	// Line 2046, Address: 0x2f035c, Func Offset: 0x6c
	// Line 2047, Address: 0x2f0368, Func Offset: 0x78
	// Line 2048, Address: 0x2f0374, Func Offset: 0x84
	// Line 2049, Address: 0x2f0388, Func Offset: 0x98
	// Line 2050, Address: 0x2f03b0, Func Offset: 0xc0
	// Line 2051, Address: 0x2f03b8, Func Offset: 0xc8
	// Line 2054, Address: 0x2f03d4, Func Offset: 0xe4
	// Line 2055, Address: 0x2f03e0, Func Offset: 0xf0
	// Line 2057, Address: 0x2f03f0, Func Offset: 0x100
	// Line 2058, Address: 0x2f0404, Func Offset: 0x114
	// Line 2057, Address: 0x2f0408, Func Offset: 0x118
	// Line 2058, Address: 0x2f040c, Func Offset: 0x11c
	// Line 2057, Address: 0x2f0410, Func Offset: 0x120
	// Line 2058, Address: 0x2f0418, Func Offset: 0x128
	// Line 2059, Address: 0x2f0420, Func Offset: 0x130
	// Line 2061, Address: 0x2f042c, Func Offset: 0x13c
	// Line 2062, Address: 0x2f0430, Func Offset: 0x140
	// Func End, Address: 0x2f0448, Func Offset: 0x158
}

// 
// Start address: 0x2f0450
void EnemyEDTwinsRevival(void* obj)
{
	// Line 2066, Address: 0x2f0450, Func Offset: 0
	// Line 2067, Address: 0x2f0454, Func Offset: 0x4
	// Line 2066, Address: 0x2f0458, Func Offset: 0x8
	// Line 2067, Address: 0x2f045c, Func Offset: 0xc
	// Line 2066, Address: 0x2f0460, Func Offset: 0x10
	// Line 2067, Address: 0x2f0464, Func Offset: 0x14
	// Line 2068, Address: 0x2f046c, Func Offset: 0x1c
	// Line 2069, Address: 0x2f047c, Func Offset: 0x2c
	// Line 2070, Address: 0x2f048c, Func Offset: 0x3c
	// Line 2071, Address: 0x2f0498, Func Offset: 0x48
	// Func End, Address: 0x2f04a8, Func Offset: 0x58
}

