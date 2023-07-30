typedef struct sfCldObject;
typedef struct _anon0;
typedef struct EnemyBattleDamageData;
typedef struct EnemyBattleData;
typedef struct ResultObj;
typedef struct sfObj;
typedef struct EnemyBattleAttack;
typedef struct EnemyBattleDamage;
typedef struct EnemyBattleWork;
typedef struct EnemyClHitResult;
typedef enum EnemyKind : unsigned char;
typedef struct sgBone;
typedef struct sgQTNode;
typedef enum _enum : unsigned char;
typedef struct sgQTObject;
typedef struct sfAllocateList;
typedef struct sfCldPart;
typedef struct BattleHit;
typedef struct _anon1;
typedef struct sfOffsetAABB;
typedef union sfCldBody;
typedef union _anon2;
typedef enum BattleAttackKind : unsigned char;
typedef enum BattleDamageType : unsigned char;
typedef enum BattleHitResult : unsigned char;
typedef struct _anon3;
typedef enum EnemyBattleDamageAnimeNumber : unsigned char;
typedef struct _anon4;

typedef void(*type_8)(sfObj*);
typedef void(*type_9)(sfObj*);

typedef unsigned char type_0[3];
typedef ResultObj type_1[4];
typedef ResultObj type_2[8];
typedef float type_3[4];
typedef float type_4[4][4];
typedef unsigned char type_5[3];
typedef float type_6[4];
typedef _anon2 type_7[256];
typedef short type_10[2];
typedef unsigned short type_11[2];
typedef char type_12[4];
typedef unsigned char type_13[4];
typedef float type_14[1];
typedef int type_15[1];
typedef float type_16[4];
typedef EnemyBattleAttack* type_17[3];
typedef sfCldPart* type_18[6];

struct sfCldObject
{
	sgQTObject tree_object;
	sgQTNode* stay_node;
	sfCldPart* parts[6];
	unsigned char n_parts;
	unsigned char pad[3];
	void* data;
};

struct _anon0
{
	float start[4];
	float end[4];
};

struct EnemyBattleDamageData
{
	EnemyBattleDamage damage_data;
	sfObj* damage_obj;
	BattleHit* battle_hit;
};

struct EnemyBattleData
{
	float hp;
	float hp_max;
	float hp_rate;
	float endurance;
	float endurance_max;
	float exorcism_damage;
	float splash_size;
	int last_damage_id;
	BattleAttackKind last_damage_kind;
	EnemyBattleAttack* attack_cld[3];
};

struct ResultObj
{
	sfObj* obj;
	sfCldObject* cld;
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

struct EnemyBattleAttack
{
	sfCldObject cld_obj;
	BattleHit battle_hit;
	int reset;
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

struct EnemyBattleWork
{
	sfAllocateList damage_data;
	sfAllocateList damage_data_ex;
	sfAllocateList attack_cld;
	ResultObj hitresult_enemy[4];
	ResultObj hitresult_obj[8];
	int hitresult_enemy_num;
	int hitresult_obj_num;
};

struct EnemyClHitResult
{
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

enum _enum : unsigned char
{
	SF_CLD_TYPE_NONE,
	SF_CLD_TYPE_LINE,
	SF_CLD_TYPE_SPHERE,
	SF_CLD_TYPE_AABB,
	SF_CLD_TYPE_OFFSET_AABB,
	SF_CLD_TYPE_OBB
};

struct sgQTObject
{
	_anon1 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

struct sfAllocateList
{
	char* work_top;
	unsigned int size;
	int number;
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

struct _anon1
{
	float center[4];
	float radius;
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
	_anon0 line;
	_anon1 sphere;
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

enum BattleHitResult : unsigned char
{
	GB_HIT_RES_NONE,
	GB_HIT_RES_PLAYER_HIT,
	GB_HIT_RES_ENEMY_HIT,
	GB_HIT_RES_EILEEN_HIT,
	GB_HIT_RES_END
};

struct _anon3
{
	float bmin[4];
	float bmax[4];
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

struct _anon4
{
	float mat[4][4];
	float half_w[4];
};

EnemyBattleWork en_battle_work;
float sg_vector_zero[4];

void EnemyBattleWorkInit();
void EnemyBattleWorkAllDestruct();
void regist_damage(sfObj* obj);
void EnemyBattleExecute();
void EnemyBattleDataConstruct(sfObj* obj);
void EnemyBattleDataDestruct(sfObj* obj);
int EnemyBattleDamageCheck(sfObj* obj);
int EnemyEDBattleDamageCheck(void* obj);
EnemyBattleDamage* EnemyBattleDamageCheckObj(sfObj* obj, EnemyBattleDamage* start);
int EnemyBattleDamageSynthesize(EnemyBattleDamage* pbd, sfObj* obj);
void EnemyEDBattleDamageReduceHP(void* obj);
void EnemyEDBattleDamageRefrect(void* obj);
void EnemyBattleSetHP(sfObj* obj, float hp, float endurance);
void EnemyBattleResetHP(sfObj* obj, float hp);
float EnemyBattleHP(sfObj* obj);
float EnemyBattleHPRate(sfObj* obj);
float EnemyBattleMaxHP(sfObj* obj);
int EnemyBattleDiceHP(sfObj* obj, float border_l, float border_u);
float EnemyBattleEndurance(sfObj* obj);
float EnemyBattleEnduranceRate(sfObj* obj);
float EnemyBattleMaxEndurance(sfObj* obj);
int EnemyBattleIsEnduranceFull(sfObj* obj);
float EnemyBattleReduceHP(sfObj* obj, float damage);
float EnemyBattleReduceHPOnly(sfObj* obj, float damage);
float EnemyBattleAddHP(sfObj* obj, float heal);
float EnemyBattleAddHPDT(sfObj* obj, float heal);
float EnemyBattleAddEndurance(sfObj* obj, float heal);
float EnemyBattleAutoRecover(sfObj* obj);
int EnemyBattleAttackStart(sfObj* obj, int attack_id, BattleAttackKind attack_kind, float damage, float shock, _enum type, int dir_type);
void EnemyBattleAttackEnd(sfObj* obj, int attack_id);
void EnemyBattleAttackEndAll(sfObj* obj);
void EnemyBattleAttackChangePos(sfObj* obj, int attack_id, float* pos, float radius);
void EnemyBattleAttackSetLine(sfObj* obj, int attack_id, float* pos, float* target);
sfCldPart* EnemyBattleAttackGetCld(sfObj* obj, int attack_id);
void EnemyBattleAttackUpdate(sfObj* obj, int attack_id);
void EnemyBattleAttackUpdateAll(sfObj* obj);
BattleHitResult EnemyBattleAttackResult(sfObj* obj, int attack_id);
int EnemyBattleAttackResultIsPlayerHit(sfObj* obj, int attack_id);
EnemyBattleAttack* EnemyBattleAttackStartDirect(sfObj* obj, BattleAttackKind attack_kind, float damage, float shock, _enum type, int dir_type);
void EnemyBattleAttackEndDirect(EnemyBattleAttack* pba);
void EnemyBattleAttackChangePosDirect(EnemyBattleAttack* pba, float* pos, float radius);
BattleHitResult EnemyBattleAttackResultDirect(EnemyBattleAttack* pba);
void EnemyBattleAttackSetDamageExtent(sfObj* obj, int type, float range_rate, float damage_rate);
float EnemyBattleAttackSetCurse(float* pos, float range, float damage);
void EnemyBattleAttackSetDamageDirect(float damage);
float EnemyBattleCheckExorcismDamage(sfObj* obj, int type, float range_rate);
float EnemyBattleGetExorcismDamage(sfObj* obj);
void EnemyBattleResetExorcismDamage(sfObj* obj);
EnemyBattleDamageAnimeNumber EnemyBattleDamageAnime(BattleDamageType type, float* dir, int down);
int EnemyBattleAnimeIsDown(EnemyBattleDamageAnimeNumber anime);
int EnemyBattleDamageStrength(BattleDamageType type);
int EnemyBattleDamageIsExorcism(BattleAttackKind kind);
int EnemyBattleDamageSoundType(BattleAttackKind kind);
void EnemyBattleSetHitSplashSize(sfObj* obj, float size);
BattleAttackKind EnemyBattleLastHitKind(sfObj* obj);
void EnemyBattleSetLastHitKind(sfObj* obj, BattleAttackKind kind);
void EnemyBattleKilledCountUpByLastHitKind(sfObj* obj);
void EnemyBattleIgnoreLastDamageID(sfObj* obj);
int EnemyBattleAttackSoundType(BattleAttackKind kind);
void EnemyBattleHitSoundCall(sfObj* obj, BattleAttackKind kind);
float EnemyBattleGetFinishSoundDelay(sfObj* obj);

// 
// Start address: 0x186020
void EnemyBattleWorkInit()
{
	// Line 104, Address: 0x186020, Func Offset: 0
	// Line 105, Address: 0x186024, Func Offset: 0x4
	// Line 104, Address: 0x186028, Func Offset: 0x8
	// Line 105, Address: 0x18602c, Func Offset: 0xc
	// Line 107, Address: 0x186038, Func Offset: 0x18
	// Line 109, Address: 0x186048, Func Offset: 0x28
	// Line 111, Address: 0x186058, Func Offset: 0x38
	// Func End, Address: 0x186064, Func Offset: 0x44
}

// 
// Start address: 0x186070
void EnemyBattleWorkAllDestruct()
{
	EnemyBattleAttack* pba;
	// Line 116, Address: 0x186070, Func Offset: 0
	// Line 118, Address: 0x186074, Func Offset: 0x4
	// Line 116, Address: 0x186078, Func Offset: 0x8
	// Line 118, Address: 0x18607c, Func Offset: 0xc
	// Line 119, Address: 0x186088, Func Offset: 0x18
	// Line 120, Address: 0x186094, Func Offset: 0x24
	// Line 121, Address: 0x1860a4, Func Offset: 0x34
	// Line 122, Address: 0x1860b0, Func Offset: 0x40
	// Line 123, Address: 0x1860b8, Func Offset: 0x48
	// Line 124, Address: 0x1860cc, Func Offset: 0x5c
	// Line 125, Address: 0x1860d8, Func Offset: 0x68
	// Line 126, Address: 0x1860e4, Func Offset: 0x74
	// Func End, Address: 0x1860f4, Func Offset: 0x84
}

// 
// Start address: 0x186100
void regist_damage(sfObj* obj)
{
	EnemyBattleDamageData* pbd;
	EnemyBattleData* tbd;
	sfAllocateList* blist;
	sfCldObject* po;
	sfCldObject* cld;
	BattleHit* bh;
	BattleAttackKind kind;
	BattleDamageType dtype;
	EnemyKind ekind;
	float tpos[4];
	float dir[4];
	float hpos[4];
	int i;
	int n;
	int id;
	float d;
	float damage;
	// Line 132, Address: 0x186100, Func Offset: 0
	// Line 144, Address: 0x186118, Func Offset: 0x18
	// Line 132, Address: 0x18611c, Func Offset: 0x1c
	// Line 144, Address: 0x186128, Func Offset: 0x28
	// Line 132, Address: 0x18612c, Func Offset: 0x2c
	// Line 145, Address: 0x18613c, Func Offset: 0x3c
	// Line 146, Address: 0x186148, Func Offset: 0x48
	// Line 147, Address: 0x186150, Func Offset: 0x50
	// Line 148, Address: 0x186168, Func Offset: 0x68
	// Line 149, Address: 0x186174, Func Offset: 0x74
	// Line 150, Address: 0x186180, Func Offset: 0x80
	// Line 151, Address: 0x18618c, Func Offset: 0x8c
	// Line 152, Address: 0x186198, Func Offset: 0x98
	// Line 153, Address: 0x1861b0, Func Offset: 0xb0
	// Line 154, Address: 0x1861b8, Func Offset: 0xb8
	// Line 155, Address: 0x1861c0, Func Offset: 0xc0
	// Line 157, Address: 0x1861d8, Func Offset: 0xd8
	// Line 159, Address: 0x1861e0, Func Offset: 0xe0
	// Line 160, Address: 0x1861f0, Func Offset: 0xf0
	// Line 161, Address: 0x1861f8, Func Offset: 0xf8
	// Line 162, Address: 0x186200, Func Offset: 0x100
	// Line 163, Address: 0x18620c, Func Offset: 0x10c
	// Line 164, Address: 0x186218, Func Offset: 0x118
	// Line 165, Address: 0x186224, Func Offset: 0x124
	// Line 166, Address: 0x186230, Func Offset: 0x130
	// Line 169, Address: 0x186248, Func Offset: 0x148
	// Line 171, Address: 0x186260, Func Offset: 0x160
	// Line 172, Address: 0x18628c, Func Offset: 0x18c
	// Line 174, Address: 0x1862ac, Func Offset: 0x1ac
	// Line 175, Address: 0x1862d8, Func Offset: 0x1d8
	// Line 177, Address: 0x1862e0, Func Offset: 0x1e0
	// Line 178, Address: 0x1862e4, Func Offset: 0x1e4
	// Line 179, Address: 0x1862e8, Func Offset: 0x1e8
	// Line 180, Address: 0x1862f4, Func Offset: 0x1f4
	// Line 183, Address: 0x186314, Func Offset: 0x214
	// Line 184, Address: 0x186318, Func Offset: 0x218
	// Line 186, Address: 0x186340, Func Offset: 0x240
	// Line 187, Address: 0x186344, Func Offset: 0x244
	// Line 188, Address: 0x186350, Func Offset: 0x250
	// Line 190, Address: 0x1863a4, Func Offset: 0x2a4
	// Line 191, Address: 0x1863a8, Func Offset: 0x2a8
	// Line 192, Address: 0x1863ac, Func Offset: 0x2ac
	// Line 193, Address: 0x1863b4, Func Offset: 0x2b4
	// Line 194, Address: 0x1863b8, Func Offset: 0x2b8
	// Line 195, Address: 0x1863c0, Func Offset: 0x2c0
	// Line 197, Address: 0x1863c8, Func Offset: 0x2c8
	// Line 198, Address: 0x1863d8, Func Offset: 0x2d8
	// Line 202, Address: 0x1863dc, Func Offset: 0x2dc
	// Line 203, Address: 0x1863e0, Func Offset: 0x2e0
	// Line 204, Address: 0x1863f4, Func Offset: 0x2f4
	// Line 205, Address: 0x186400, Func Offset: 0x300
	// Line 206, Address: 0x18640c, Func Offset: 0x30c
	// Line 207, Address: 0x186414, Func Offset: 0x314
	// Line 209, Address: 0x186418, Func Offset: 0x318
	// Line 210, Address: 0x186428, Func Offset: 0x328
	// Line 213, Address: 0x186434, Func Offset: 0x334
	// Line 211, Address: 0x186438, Func Offset: 0x338
	// Line 213, Address: 0x18643c, Func Offset: 0x33c
	// Line 212, Address: 0x186440, Func Offset: 0x340
	// Line 213, Address: 0x186444, Func Offset: 0x344
	// Line 214, Address: 0x18644c, Func Offset: 0x34c
	// Line 215, Address: 0x186460, Func Offset: 0x360
	// Line 216, Address: 0x18646c, Func Offset: 0x36c
	// Line 217, Address: 0x18648c, Func Offset: 0x38c
	// Line 218, Address: 0x186490, Func Offset: 0x390
	// Line 219, Address: 0x1864bc, Func Offset: 0x3bc
	// Line 221, Address: 0x1864cc, Func Offset: 0x3cc
	// Line 220, Address: 0x1864d0, Func Offset: 0x3d0
	// Line 221, Address: 0x1864d4, Func Offset: 0x3d4
	// Line 220, Address: 0x1864e0, Func Offset: 0x3e0
	// Line 221, Address: 0x1864e4, Func Offset: 0x3e4
	// Line 222, Address: 0x1864f4, Func Offset: 0x3f4
	// Line 223, Address: 0x1864fc, Func Offset: 0x3fc
	// Line 224, Address: 0x186508, Func Offset: 0x408
	// Line 225, Address: 0x186514, Func Offset: 0x414
	// Line 226, Address: 0x186534, Func Offset: 0x434
	// Line 228, Address: 0x186560, Func Offset: 0x460
	// Line 227, Address: 0x186568, Func Offset: 0x468
	// Line 228, Address: 0x18656c, Func Offset: 0x46c
	// Line 229, Address: 0x186588, Func Offset: 0x488
	// Line 230, Address: 0x1865a4, Func Offset: 0x4a4
	// Line 231, Address: 0x1865a8, Func Offset: 0x4a8
	// Line 232, Address: 0x1865ac, Func Offset: 0x4ac
	// Line 234, Address: 0x1865b0, Func Offset: 0x4b0
	// Line 232, Address: 0x1865b8, Func Offset: 0x4b8
	// Line 234, Address: 0x1865bc, Func Offset: 0x4bc
	// Line 236, Address: 0x1865cc, Func Offset: 0x4cc
	// Line 237, Address: 0x1865d8, Func Offset: 0x4d8
	// Line 238, Address: 0x1865f0, Func Offset: 0x4f0
	// Line 239, Address: 0x1865f4, Func Offset: 0x4f4
	// Line 238, Address: 0x1865f8, Func Offset: 0x4f8
	// Line 239, Address: 0x1865fc, Func Offset: 0x4fc
	// Line 244, Address: 0x186674, Func Offset: 0x574
	// Line 245, Address: 0x186678, Func Offset: 0x578
	// Line 246, Address: 0x186680, Func Offset: 0x580
	// Line 249, Address: 0x186688, Func Offset: 0x588
	// Line 250, Address: 0x186694, Func Offset: 0x594
	// Line 252, Address: 0x18669c, Func Offset: 0x59c
	// Line 253, Address: 0x1866a0, Func Offset: 0x5a0
	// Line 254, Address: 0x1866b4, Func Offset: 0x5b4
	// Line 255, Address: 0x1866bc, Func Offset: 0x5bc
	// Line 256, Address: 0x1866c0, Func Offset: 0x5c0
	// Line 258, Address: 0x1866d8, Func Offset: 0x5d8
	// Line 260, Address: 0x1866dc, Func Offset: 0x5dc
	// Line 261, Address: 0x1866e0, Func Offset: 0x5e0
	// Line 262, Address: 0x1866f4, Func Offset: 0x5f4
	// Line 264, Address: 0x18670c, Func Offset: 0x60c
	// Line 265, Address: 0x18671c, Func Offset: 0x61c
	// Line 266, Address: 0x186728, Func Offset: 0x628
	// Line 265, Address: 0x18672c, Func Offset: 0x62c
	// Line 266, Address: 0x186730, Func Offset: 0x630
	// Line 265, Address: 0x186734, Func Offset: 0x634
	// Line 266, Address: 0x186738, Func Offset: 0x638
	// Line 265, Address: 0x186740, Func Offset: 0x640
	// Line 266, Address: 0x186748, Func Offset: 0x648
	// Line 277, Address: 0x186750, Func Offset: 0x650
	// Line 278, Address: 0x186768, Func Offset: 0x668
	// Func End, Address: 0x1867a0, Func Offset: 0x6a0
}

// 
// Start address: 0x1867a0
void EnemyBattleExecute()
{
	sfObj* obj;
	int i;
	int n;
	sfCldObject* po;
	EnemyBattleDamageData* pbd;
	EnemyBattleDamageData* npbd;
	sfAllocateList* blist;
	sfAllocateList* blist2;
	// Line 283, Address: 0x1867a0, Func Offset: 0
	// Line 288, Address: 0x1867a4, Func Offset: 0x4
	// Line 283, Address: 0x1867a8, Func Offset: 0x8
	// Line 288, Address: 0x1867ac, Func Offset: 0xc
	// Line 283, Address: 0x1867b0, Func Offset: 0x10
	// Line 288, Address: 0x1867bc, Func Offset: 0x1c
	// Line 289, Address: 0x1867c4, Func Offset: 0x24
	// Line 290, Address: 0x1867d0, Func Offset: 0x30
	// Line 291, Address: 0x1867d8, Func Offset: 0x38
	// Line 292, Address: 0x1867e4, Func Offset: 0x44
	// Line 293, Address: 0x1867ec, Func Offset: 0x4c
	// Line 294, Address: 0x1867f0, Func Offset: 0x50
	// Line 295, Address: 0x186800, Func Offset: 0x60
	// Line 296, Address: 0x186820, Func Offset: 0x80
	// Line 297, Address: 0x186848, Func Offset: 0xa8
	// Line 301, Address: 0x18685c, Func Offset: 0xbc
	// Line 304, Address: 0x186864, Func Offset: 0xc4
	// Line 306, Address: 0x186878, Func Offset: 0xd8
	// Line 307, Address: 0x186884, Func Offset: 0xe4
	// Line 312, Address: 0x186890, Func Offset: 0xf0
	// Line 311, Address: 0x186898, Func Offset: 0xf8
	// Line 313, Address: 0x18689c, Func Offset: 0xfc
	// Line 314, Address: 0x1868ac, Func Offset: 0x10c
	// Line 315, Address: 0x1868b8, Func Offset: 0x118
	// Line 316, Address: 0x1868c8, Func Offset: 0x128
	// Line 318, Address: 0x1868d8, Func Offset: 0x138
	// Line 319, Address: 0x1868e0, Func Offset: 0x140
	// Line 321, Address: 0x1868e8, Func Offset: 0x148
	// Func End, Address: 0x186904, Func Offset: 0x164
}

// 
// Start address: 0x186910
void EnemyBattleDataConstruct(sfObj* obj)
{
	EnemyBattleData* pbd;
	// Line 341, Address: 0x186910, Func Offset: 0
	// Line 344, Address: 0x186914, Func Offset: 0x4
	// Line 341, Address: 0x186918, Func Offset: 0x8
	// Line 344, Address: 0x186924, Func Offset: 0x14
	// Line 346, Address: 0x186930, Func Offset: 0x20
	// Line 347, Address: 0x186938, Func Offset: 0x28
	// Line 348, Address: 0x186940, Func Offset: 0x30
	// Line 351, Address: 0x186944, Func Offset: 0x34
	// Line 348, Address: 0x186948, Func Offset: 0x38
	// Line 351, Address: 0x18694c, Func Offset: 0x3c
	// Line 349, Address: 0x186950, Func Offset: 0x40
	// Line 351, Address: 0x186958, Func Offset: 0x48
	// Line 352, Address: 0x186960, Func Offset: 0x50
	// Func End, Address: 0x186974, Func Offset: 0x64
}

// 
// Start address: 0x186980
void EnemyBattleDataDestruct(sfObj* obj)
{
	EnemyBattleData* pbd;
	int i;
	// Line 358, Address: 0x186980, Func Offset: 0
	// Line 361, Address: 0x186994, Func Offset: 0x14
	// Line 362, Address: 0x18699c, Func Offset: 0x1c
	// Line 363, Address: 0x1869a8, Func Offset: 0x28
	// Line 364, Address: 0x1869b0, Func Offset: 0x30
	// Line 365, Address: 0x1869b4, Func Offset: 0x34
	// Line 366, Address: 0x1869bc, Func Offset: 0x3c
	// Line 367, Address: 0x1869c4, Func Offset: 0x44
	// Line 370, Address: 0x1869d4, Func Offset: 0x54
	// Line 371, Address: 0x1869e8, Func Offset: 0x68
	// Line 372, Address: 0x1869f4, Func Offset: 0x74
	// Func End, Address: 0x186a10, Func Offset: 0x90
}

// 
// Start address: 0x186a10
int EnemyBattleDamageCheck(sfObj* obj)
{
	EnemyBattleDamage* pbd;
	// Line 379, Address: 0x186a10, Func Offset: 0
	// Line 381, Address: 0x186a14, Func Offset: 0x4
	// Line 379, Address: 0x186a18, Func Offset: 0x8
	// Line 381, Address: 0x186a20, Func Offset: 0x10
	// Line 382, Address: 0x186a30, Func Offset: 0x20
	// Line 383, Address: 0x186a60, Func Offset: 0x50
	// Line 384, Address: 0x186a78, Func Offset: 0x68
	// Line 385, Address: 0x186a80, Func Offset: 0x70
	// Func End, Address: 0x186a90, Func Offset: 0x80
}

// 
// Start address: 0x186a90
int EnemyEDBattleDamageCheck(void* obj)
{
	// Line 393, Address: 0x186a90, Func Offset: 0
	// Func End, Address: 0x186a98, Func Offset: 0x8
}

// 
// Start address: 0x186aa0
EnemyBattleDamage* EnemyBattleDamageCheckObj(sfObj* obj, EnemyBattleDamage* start)
{
	EnemyBattleDamageData* pbd;
	// Line 403, Address: 0x186aa0, Func Offset: 0
	// Line 406, Address: 0x186ab0, Func Offset: 0x10
	// Line 408, Address: 0x186ac8, Func Offset: 0x28
	// Line 409, Address: 0x186ad4, Func Offset: 0x34
	// Line 411, Address: 0x186adc, Func Offset: 0x3c
	// Line 412, Address: 0x186af8, Func Offset: 0x58
	// Line 413, Address: 0x186b00, Func Offset: 0x60
	// Func End, Address: 0x186b10, Func Offset: 0x70
}

// 
// Start address: 0x186b10
int EnemyBattleDamageSynthesize(EnemyBattleDamage* pbd, sfObj* obj)
{
	EnemyBattleDamage* tpbd;
	float dir[4];
	float vec[4];
	float max_damage;
	int r;
	// Line 421, Address: 0x186b10, Func Offset: 0
	// Line 429, Address: 0x186b20, Func Offset: 0x10
	// Line 421, Address: 0x186b24, Func Offset: 0x14
	// Line 426, Address: 0x186b34, Func Offset: 0x24
	// Line 431, Address: 0x186b3c, Func Offset: 0x2c
	// Line 432, Address: 0x186b48, Func Offset: 0x38
	// Line 433, Address: 0x186b58, Func Offset: 0x48
	// Line 435, Address: 0x186b68, Func Offset: 0x58
	// Line 434, Address: 0x186b6c, Func Offset: 0x5c
	// Line 435, Address: 0x186b70, Func Offset: 0x60
	// Line 436, Address: 0x186b74, Func Offset: 0x64
	// Line 437, Address: 0x186b7c, Func Offset: 0x6c
	// Line 438, Address: 0x186b84, Func Offset: 0x74
	// Line 439, Address: 0x186b8c, Func Offset: 0x7c
	// Line 441, Address: 0x186b90, Func Offset: 0x80
	// Line 442, Address: 0x186ba0, Func Offset: 0x90
	// Line 444, Address: 0x186bb0, Func Offset: 0xa0
	// Line 446, Address: 0x186bb8, Func Offset: 0xa8
	// Line 447, Address: 0x186bc0, Func Offset: 0xb0
	// Line 448, Address: 0x186bd0, Func Offset: 0xc0
	// Line 449, Address: 0x186bf8, Func Offset: 0xe8
	// Line 451, Address: 0x186c18, Func Offset: 0x108
	// Line 452, Address: 0x186c28, Func Offset: 0x118
	// Line 453, Address: 0x186c54, Func Offset: 0x144
	// Line 455, Address: 0x186c70, Func Offset: 0x160
	// Line 456, Address: 0x186c78, Func Offset: 0x168
	// Line 457, Address: 0x186cac, Func Offset: 0x19c
	// Line 458, Address: 0x186cb0, Func Offset: 0x1a0
	// Line 459, Address: 0x186cb8, Func Offset: 0x1a8
	// Func End, Address: 0x186cd4, Func Offset: 0x1c4
}

// 
// Start address: 0x186ce0
void EnemyEDBattleDamageReduceHP(void* obj)
{
	EnemyBattleDamage bd;
	// Line 468, Address: 0x186ce0, Func Offset: 0
	// Line 470, Address: 0x186cf0, Func Offset: 0x10
	// Line 471, Address: 0x186cfc, Func Offset: 0x1c
	// Line 472, Address: 0x186d08, Func Offset: 0x28
	// Line 473, Address: 0x186d14, Func Offset: 0x34
	// Func End, Address: 0x186d24, Func Offset: 0x44
}

// 
// Start address: 0x186d30
void EnemyEDBattleDamageRefrect(void* obj)
{
	EnemyBattleDamage bd;
	// Line 482, Address: 0x186d30, Func Offset: 0
	// Line 484, Address: 0x186d40, Func Offset: 0x10
	// Line 485, Address: 0x186d4c, Func Offset: 0x1c
	// Line 486, Address: 0x186d58, Func Offset: 0x28
	// Func End, Address: 0x186d68, Func Offset: 0x38
}

// 
// Start address: 0x186d70
void EnemyBattleSetHP(sfObj* obj, float hp, float endurance)
{
	EnemyBattleData* pbd;
	// Line 494, Address: 0x186d70, Func Offset: 0
	// Line 495, Address: 0x186d84, Func Offset: 0x14
	// Line 496, Address: 0x186d8c, Func Offset: 0x1c
	// Line 497, Address: 0x186d90, Func Offset: 0x20
	// Line 496, Address: 0x186d94, Func Offset: 0x24
	// Line 497, Address: 0x186d98, Func Offset: 0x28
	// Line 498, Address: 0x186d9c, Func Offset: 0x2c
	// Line 499, Address: 0x186da4, Func Offset: 0x34
	// Func End, Address: 0x186db8, Func Offset: 0x48
}

// 
// Start address: 0x186dc0
void EnemyBattleResetHP(sfObj* obj, float hp)
{
	EnemyBattleData* pbd;
	// Line 518, Address: 0x186dc0, Func Offset: 0
	// Line 519, Address: 0x186dcc, Func Offset: 0xc
	// Line 520, Address: 0x186dd4, Func Offset: 0x14
	// Line 522, Address: 0x186ddc, Func Offset: 0x1c
	// Line 521, Address: 0x186de0, Func Offset: 0x20
	// Line 522, Address: 0x186de4, Func Offset: 0x24
	// Line 523, Address: 0x186dfc, Func Offset: 0x3c
	// Line 524, Address: 0x186e08, Func Offset: 0x48
	// Func End, Address: 0x186e18, Func Offset: 0x58
}

// 
// Start address: 0x186e20
float EnemyBattleHP(sfObj* obj)
{
	EnemyBattleData* pbd;
	// Line 531, Address: 0x186e20, Func Offset: 0
	// Line 532, Address: 0x186e28, Func Offset: 0x8
	// Line 534, Address: 0x186e30, Func Offset: 0x10
	// Line 533, Address: 0x186e34, Func Offset: 0x14
	// Line 534, Address: 0x186e38, Func Offset: 0x18
	// Func End, Address: 0x186e40, Func Offset: 0x20
}

// 
// Start address: 0x186e40
float EnemyBattleHPRate(sfObj* obj)
{
	EnemyBattleData* pbd;
	// Line 541, Address: 0x186e40, Func Offset: 0
	// Line 542, Address: 0x186e48, Func Offset: 0x8
	// Line 544, Address: 0x186e50, Func Offset: 0x10
	// Line 543, Address: 0x186e54, Func Offset: 0x14
	// Line 544, Address: 0x186e58, Func Offset: 0x18
	// Func End, Address: 0x186e60, Func Offset: 0x20
}

// 
// Start address: 0x186e60
float EnemyBattleMaxHP(sfObj* obj)
{
	EnemyBattleData* pbd;
	// Line 551, Address: 0x186e60, Func Offset: 0
	// Line 552, Address: 0x186e68, Func Offset: 0x8
	// Line 554, Address: 0x186e70, Func Offset: 0x10
	// Line 553, Address: 0x186e74, Func Offset: 0x14
	// Line 554, Address: 0x186e78, Func Offset: 0x18
	// Func End, Address: 0x186e80, Func Offset: 0x20
}

// 
// Start address: 0x186e80
int EnemyBattleDiceHP(sfObj* obj, float border_l, float border_u)
{
	EnemyBattleData* pbd;
	float hp;
	// Line 565, Address: 0x186e80, Func Offset: 0
	// Line 566, Address: 0x186e98, Func Offset: 0x18
	// Line 568, Address: 0x186ea0, Func Offset: 0x20
	// Line 569, Address: 0x186ec4, Func Offset: 0x44
	// Func End, Address: 0x186edc, Func Offset: 0x5c
}

// 
// Start address: 0x186ee0
float EnemyBattleEndurance(sfObj* obj)
{
	EnemyBattleData* pbd;
	// Line 576, Address: 0x186ee0, Func Offset: 0
	// Line 577, Address: 0x186ee8, Func Offset: 0x8
	// Line 579, Address: 0x186ef0, Func Offset: 0x10
	// Line 578, Address: 0x186ef4, Func Offset: 0x14
	// Line 579, Address: 0x186ef8, Func Offset: 0x18
	// Func End, Address: 0x186f00, Func Offset: 0x20
}

// 
// Start address: 0x186f00
float EnemyBattleEnduranceRate(sfObj* obj)
{
	EnemyBattleData* pbd;
	// Line 586, Address: 0x186f00, Func Offset: 0
	// Line 587, Address: 0x186f08, Func Offset: 0x8
	// Line 588, Address: 0x186f10, Func Offset: 0x10
	// Line 589, Address: 0x186f1c, Func Offset: 0x1c
	// Line 588, Address: 0x186f20, Func Offset: 0x20
	// Line 589, Address: 0x186f30, Func Offset: 0x30
	// Func End, Address: 0x186f38, Func Offset: 0x38
}

// 
// Start address: 0x186f40
float EnemyBattleMaxEndurance(sfObj* obj)
{
	EnemyBattleData* pbd;
	// Line 596, Address: 0x186f40, Func Offset: 0
	// Line 597, Address: 0x186f48, Func Offset: 0x8
	// Line 599, Address: 0x186f50, Func Offset: 0x10
	// Line 598, Address: 0x186f54, Func Offset: 0x14
	// Line 599, Address: 0x186f58, Func Offset: 0x18
	// Func End, Address: 0x186f60, Func Offset: 0x20
}

// 
// Start address: 0x186f60
int EnemyBattleIsEnduranceFull(sfObj* obj)
{
	EnemyBattleData* pbd;
	// Line 606, Address: 0x186f60, Func Offset: 0
	// Line 607, Address: 0x186f68, Func Offset: 0x8
	// Line 608, Address: 0x186f70, Func Offset: 0x10
	// Line 609, Address: 0x186f98, Func Offset: 0x38
	// Line 608, Address: 0x186f9c, Func Offset: 0x3c
	// Line 609, Address: 0x186fa0, Func Offset: 0x40
	// Func End, Address: 0x186fa8, Func Offset: 0x48
}

// 
// Start address: 0x186fb0
float EnemyBattleReduceHP(sfObj* obj, float damage)
{
	EnemyBattleData* pbd;
	// Line 617, Address: 0x186fb0, Func Offset: 0
	// Line 618, Address: 0x186fbc, Func Offset: 0xc
	// Line 622, Address: 0x186fc4, Func Offset: 0x14
	// Line 623, Address: 0x186fe0, Func Offset: 0x30
	// Line 625, Address: 0x186fe8, Func Offset: 0x38
	// Line 627, Address: 0x186ff0, Func Offset: 0x40
	// Line 628, Address: 0x18700c, Func Offset: 0x5c
	// Line 629, Address: 0x187020, Func Offset: 0x70
	// Line 630, Address: 0x187024, Func Offset: 0x74
	// Line 631, Address: 0x187028, Func Offset: 0x78
	// Line 632, Address: 0x187030, Func Offset: 0x80
	// Func End, Address: 0x187040, Func Offset: 0x90
}

// 
// Start address: 0x187040
float EnemyBattleReduceHPOnly(sfObj* obj, float damage)
{
	EnemyBattleData* pbd;
	// Line 640, Address: 0x187040, Func Offset: 0
	// Line 641, Address: 0x18704c, Func Offset: 0xc
	// Line 645, Address: 0x187054, Func Offset: 0x14
	// Line 646, Address: 0x187070, Func Offset: 0x30
	// Line 648, Address: 0x187078, Func Offset: 0x38
	// Line 650, Address: 0x187080, Func Offset: 0x40
	// Line 651, Address: 0x1870a4, Func Offset: 0x64
	// Line 652, Address: 0x1870b4, Func Offset: 0x74
	// Line 654, Address: 0x1870b8, Func Offset: 0x78
	// Line 655, Address: 0x1870c0, Func Offset: 0x80
	// Func End, Address: 0x1870d0, Func Offset: 0x90
}

// 
// Start address: 0x1870d0
float EnemyBattleAddHP(sfObj* obj, float heal)
{
	EnemyBattleData* pbd;
	// Line 663, Address: 0x1870d0, Func Offset: 0
	// Line 664, Address: 0x1870dc, Func Offset: 0xc
	// Line 665, Address: 0x1870e4, Func Offset: 0x14
	// Line 666, Address: 0x1870f4, Func Offset: 0x24
	// Line 665, Address: 0x1870f8, Func Offset: 0x28
	// Line 666, Address: 0x1870fc, Func Offset: 0x2c
	// Line 667, Address: 0x187118, Func Offset: 0x48
	// Line 669, Address: 0x187128, Func Offset: 0x58
	// Line 668, Address: 0x187130, Func Offset: 0x60
	// Line 669, Address: 0x187134, Func Offset: 0x64
	// Func End, Address: 0x18713c, Func Offset: 0x6c
}

// 
// Start address: 0x187140
float EnemyBattleAddHPDT(sfObj* obj, float heal)
{
	// Line 677, Address: 0x187140, Func Offset: 0
	// Line 678, Address: 0x187154, Func Offset: 0x14
	// Line 679, Address: 0x187168, Func Offset: 0x28
	// Func End, Address: 0x18717c, Func Offset: 0x3c
}

// 
// Start address: 0x187180
float EnemyBattleAddEndurance(sfObj* obj, float heal)
{
	EnemyBattleData* pbd;
	// Line 687, Address: 0x187180, Func Offset: 0
	// Line 688, Address: 0x18718c, Func Offset: 0xc
	// Line 689, Address: 0x187194, Func Offset: 0x14
	// Line 692, Address: 0x1871b0, Func Offset: 0x30
	// Line 691, Address: 0x1871b8, Func Offset: 0x38
	// Line 692, Address: 0x1871bc, Func Offset: 0x3c
	// Func End, Address: 0x1871c4, Func Offset: 0x44
}

// 
// Start address: 0x1871d0
float EnemyBattleAutoRecover(sfObj* obj)
{
	// Line 699, Address: 0x1871d0, Func Offset: 0
	// Line 700, Address: 0x1871e4, Func Offset: 0x14
	// Line 704, Address: 0x187218, Func Offset: 0x48
	// Func End, Address: 0x187230, Func Offset: 0x60
}

// 
// Start address: 0x187230
int EnemyBattleAttackStart(sfObj* obj, int attack_id, BattleAttackKind attack_kind, float damage, float shock, _enum type, int dir_type)
{
	EnemyBattleData* pbd;
	EnemyBattleAttack* pba;
	BattleHit* pbh;
	// Line 735, Address: 0x187230, Func Offset: 0
	// Line 741, Address: 0x187278, Func Offset: 0x48
	// Line 742, Address: 0x187290, Func Offset: 0x60
	// Line 744, Address: 0x187298, Func Offset: 0x68
	// Line 745, Address: 0x1872a8, Func Offset: 0x78
	// Line 746, Address: 0x1872b0, Func Offset: 0x80
	// Line 747, Address: 0x1872c8, Func Offset: 0x98
	// Line 748, Address: 0x1872d4, Func Offset: 0xa4
	// Line 749, Address: 0x1872d8, Func Offset: 0xa8
	// Line 750, Address: 0x1872f0, Func Offset: 0xc0
	// Line 751, Address: 0x187304, Func Offset: 0xd4
	// Line 752, Address: 0x18730c, Func Offset: 0xdc
	// Line 753, Address: 0x187310, Func Offset: 0xe0
	// Line 754, Address: 0x187324, Func Offset: 0xf4
	// Line 756, Address: 0x18732c, Func Offset: 0xfc
	// Line 757, Address: 0x18734c, Func Offset: 0x11c
	// Line 758, Address: 0x187354, Func Offset: 0x124
	// Line 760, Address: 0x187360, Func Offset: 0x130
	// Line 762, Address: 0x187368, Func Offset: 0x138
	// Line 763, Address: 0x187370, Func Offset: 0x140
	// Line 764, Address: 0x187378, Func Offset: 0x148
	// Line 765, Address: 0x187388, Func Offset: 0x158
	// Line 766, Address: 0x18738c, Func Offset: 0x15c
	// Line 767, Address: 0x187390, Func Offset: 0x160
	// Line 768, Address: 0x1873a0, Func Offset: 0x170
	// Line 770, Address: 0x1873b0, Func Offset: 0x180
	// Line 771, Address: 0x1873b8, Func Offset: 0x188
	// Line 772, Address: 0x1873c8, Func Offset: 0x198
	// Line 773, Address: 0x1873f0, Func Offset: 0x1c0
	// Line 774, Address: 0x1873f8, Func Offset: 0x1c8
	// Line 775, Address: 0x187408, Func Offset: 0x1d8
	// Line 777, Address: 0x187410, Func Offset: 0x1e0
	// Line 778, Address: 0x187414, Func Offset: 0x1e4
	// Line 779, Address: 0x187418, Func Offset: 0x1e8
	// Line 780, Address: 0x187428, Func Offset: 0x1f8
	// Line 784, Address: 0x187434, Func Offset: 0x204
	// Line 785, Address: 0x187448, Func Offset: 0x218
	// Line 787, Address: 0x187450, Func Offset: 0x220
	// Line 788, Address: 0x187464, Func Offset: 0x234
	// Line 789, Address: 0x18746c, Func Offset: 0x23c
	// Line 790, Address: 0x187470, Func Offset: 0x240
	// Line 792, Address: 0x187480, Func Offset: 0x250
	// Line 794, Address: 0x187490, Func Offset: 0x260
	// Line 795, Address: 0x187498, Func Offset: 0x268
	// Line 796, Address: 0x1874a0, Func Offset: 0x270
	// Func End, Address: 0x1874d4, Func Offset: 0x2a4
}

// 
// Start address: 0x1874e0
void EnemyBattleAttackEnd(sfObj* obj, int attack_id)
{
	EnemyBattleData* pbd;
	EnemyBattleAttack* pba;
	// Line 803, Address: 0x1874e0, Func Offset: 0
	// Line 806, Address: 0x1874f4, Func Offset: 0x14
	// Line 807, Address: 0x187508, Func Offset: 0x28
	// Line 809, Address: 0x187510, Func Offset: 0x30
	// Line 810, Address: 0x187518, Func Offset: 0x38
	// Line 811, Address: 0x187520, Func Offset: 0x40
	// Line 812, Address: 0x18752c, Func Offset: 0x4c
	// Line 813, Address: 0x187530, Func Offset: 0x50
	// Line 814, Address: 0x187538, Func Offset: 0x58
	// Line 815, Address: 0x187540, Func Offset: 0x60
	// Line 816, Address: 0x187548, Func Offset: 0x68
	// Line 817, Address: 0x187558, Func Offset: 0x78
	// Line 818, Address: 0x18755c, Func Offset: 0x7c
	// Func End, Address: 0x187574, Func Offset: 0x94
}

// 
// Start address: 0x187580
void EnemyBattleAttackEndAll(sfObj* obj)
{
	int i;
	// Line 824, Address: 0x187580, Func Offset: 0
	// Line 826, Address: 0x187594, Func Offset: 0x14
	// Line 827, Address: 0x187598, Func Offset: 0x18
	// Line 828, Address: 0x1875a4, Func Offset: 0x24
	// Line 829, Address: 0x1875b4, Func Offset: 0x34
	// Func End, Address: 0x1875c8, Func Offset: 0x48
}

// 
// Start address: 0x1875d0
void EnemyBattleAttackChangePos(sfObj* obj, int attack_id, float* pos, float radius)
{
	EnemyBattleData* pbd;
	EnemyBattleAttack* pba;
	BattleHit* pbh;
	sfCldPart* pcp;
	_anon1* psp;
	float vec[4];
	// Line 839, Address: 0x1875d0, Func Offset: 0
	// Line 846, Address: 0x1875f0, Func Offset: 0x20
	// Line 847, Address: 0x1875f8, Func Offset: 0x28
	// Line 848, Address: 0x187600, Func Offset: 0x30
	// Line 849, Address: 0x187608, Func Offset: 0x38
	// Line 850, Address: 0x187610, Func Offset: 0x40
	// Line 851, Address: 0x187618, Func Offset: 0x48
	// Line 852, Address: 0x187638, Func Offset: 0x68
	// Line 854, Address: 0x187640, Func Offset: 0x70
	// Line 855, Address: 0x187668, Func Offset: 0x98
	// Line 856, Address: 0x187674, Func Offset: 0xa4
	// Line 857, Address: 0x187678, Func Offset: 0xa8
	// Line 858, Address: 0x187688, Func Offset: 0xb8
	// Line 860, Address: 0x187690, Func Offset: 0xc0
	// Line 862, Address: 0x18769c, Func Offset: 0xcc
	// Line 863, Address: 0x1876bc, Func Offset: 0xec
	// Line 865, Address: 0x1876c0, Func Offset: 0xf0
	// Line 867, Address: 0x1876c8, Func Offset: 0xf8
	// Line 868, Address: 0x1876d4, Func Offset: 0x104
	// Line 869, Address: 0x1876ec, Func Offset: 0x11c
	// Line 870, Address: 0x187718, Func Offset: 0x148
	// Line 871, Address: 0x187724, Func Offset: 0x154
	// Line 872, Address: 0x187728, Func Offset: 0x158
	// Line 873, Address: 0x187734, Func Offset: 0x164
	// Line 877, Address: 0x18773c, Func Offset: 0x16c
	// Func End, Address: 0x18775c, Func Offset: 0x18c
}

// 
// Start address: 0x187760
void EnemyBattleAttackSetLine(sfObj* obj, int attack_id, float* pos, float* target)
{
	EnemyBattleData* pbd;
	EnemyBattleAttack* pba;
	BattleHit* pbh;
	sfCldPart* pcp;
	_anon0* pline;
	float vec[4];
	float ttarget[4];
	EnemyClHitResult* cres;
	// Line 887, Address: 0x187760, Func Offset: 0
	// Line 895, Address: 0x187780, Func Offset: 0x20
	// Line 896, Address: 0x187788, Func Offset: 0x28
	// Line 897, Address: 0x187790, Func Offset: 0x30
	// Line 898, Address: 0x187798, Func Offset: 0x38
	// Line 899, Address: 0x1877a0, Func Offset: 0x40
	// Line 900, Address: 0x1877a8, Func Offset: 0x48
	// Line 901, Address: 0x1877b4, Func Offset: 0x54
	// Line 902, Address: 0x1877cc, Func Offset: 0x6c
	// Line 903, Address: 0x1877d4, Func Offset: 0x74
	// Line 904, Address: 0x1877e0, Func Offset: 0x80
	// Line 905, Address: 0x1877ec, Func Offset: 0x8c
	// Line 906, Address: 0x1877f0, Func Offset: 0x90
	// Line 907, Address: 0x1877f8, Func Offset: 0x98
	// Line 908, Address: 0x187818, Func Offset: 0xb8
	// Line 909, Address: 0x187828, Func Offset: 0xc8
	// Line 910, Address: 0x187838, Func Offset: 0xd8
	// Line 911, Address: 0x187840, Func Offset: 0xe0
	// Line 912, Address: 0x18784c, Func Offset: 0xec
	// Line 914, Address: 0x187854, Func Offset: 0xf4
	// Line 915, Address: 0x187858, Func Offset: 0xf8
	// Line 913, Address: 0x18785c, Func Offset: 0xfc
	// Line 915, Address: 0x187860, Func Offset: 0x100
	// Line 916, Address: 0x187878, Func Offset: 0x118
	// Line 917, Address: 0x1878a4, Func Offset: 0x144
	// Line 918, Address: 0x1878b0, Func Offset: 0x150
	// Line 919, Address: 0x1878bc, Func Offset: 0x15c
	// Line 924, Address: 0x1878c4, Func Offset: 0x164
	// Func End, Address: 0x1878e4, Func Offset: 0x184
}

// 
// Start address: 0x1878f0
sfCldPart* EnemyBattleAttackGetCld(sfObj* obj, int attack_id)
{
	EnemyBattleData* pbd;
	EnemyBattleAttack* pba;
	// Line 931, Address: 0x1878f0, Func Offset: 0
	// Line 934, Address: 0x1878fc, Func Offset: 0xc
	// Line 935, Address: 0x187910, Func Offset: 0x20
	// Line 936, Address: 0x187918, Func Offset: 0x28
	// Line 937, Address: 0x187928, Func Offset: 0x38
	// Line 938, Address: 0x187934, Func Offset: 0x44
	// Line 939, Address: 0x187944, Func Offset: 0x54
	// Line 940, Address: 0x187968, Func Offset: 0x78
	// Func End, Address: 0x187978, Func Offset: 0x88
}

// 
// Start address: 0x187980
void EnemyBattleAttackUpdate(sfObj* obj, int attack_id)
{
	EnemyBattleData* pbd;
	EnemyBattleAttack* pba;
	BattleHit* pbh;
	sfCldPart* pcp;
	float pos[4];
	float vec[4];
	_anon0* line;
	// Line 947, Address: 0x187980, Func Offset: 0
	// Line 953, Address: 0x187990, Func Offset: 0x10
	// Line 954, Address: 0x187998, Func Offset: 0x18
	// Line 955, Address: 0x1879a0, Func Offset: 0x20
	// Line 956, Address: 0x1879a8, Func Offset: 0x28
	// Line 957, Address: 0x1879b0, Func Offset: 0x30
	// Line 958, Address: 0x1879b8, Func Offset: 0x38
	// Line 960, Address: 0x1879c0, Func Offset: 0x40
	// Line 961, Address: 0x1879e0, Func Offset: 0x60
	// Line 962, Address: 0x1879e8, Func Offset: 0x68
	// Line 966, Address: 0x187a18, Func Offset: 0x98
	// Line 967, Address: 0x187a28, Func Offset: 0xa8
	// Line 968, Address: 0x187a44, Func Offset: 0xc4
	// Line 969, Address: 0x187a70, Func Offset: 0xf0
	// Line 970, Address: 0x187a78, Func Offset: 0xf8
	// Line 971, Address: 0x187a94, Func Offset: 0x114
	// Line 972, Address: 0x187a98, Func Offset: 0x118
	// Line 974, Address: 0x187a9c, Func Offset: 0x11c
	// Line 975, Address: 0x187aa0, Func Offset: 0x120
	// Line 982, Address: 0x187aac, Func Offset: 0x12c
	// Line 983, Address: 0x187ab4, Func Offset: 0x134
	// Line 984, Address: 0x187ab8, Func Offset: 0x138
	// Line 985, Address: 0x187ac4, Func Offset: 0x144
	// Line 988, Address: 0x187ae0, Func Offset: 0x160
	// Line 990, Address: 0x187ae8, Func Offset: 0x168
	// Line 991, Address: 0x187af4, Func Offset: 0x174
	// Line 992, Address: 0x187b14, Func Offset: 0x194
	// Line 993, Address: 0x187b40, Func Offset: 0x1c0
	// Line 994, Address: 0x187b4c, Func Offset: 0x1cc
	// Line 995, Address: 0x187b50, Func Offset: 0x1d0
	// Line 1003, Address: 0x187b5c, Func Offset: 0x1dc
	// Line 1004, Address: 0x187b60, Func Offset: 0x1e0
	// Line 1005, Address: 0x187b68, Func Offset: 0x1e8
	// Func End, Address: 0x187b7c, Func Offset: 0x1fc
}

// 
// Start address: 0x187b80
void EnemyBattleAttackUpdateAll(sfObj* obj)
{
	int i;
	// Line 1011, Address: 0x187b80, Func Offset: 0
	// Line 1013, Address: 0x187b94, Func Offset: 0x14
	// Line 1014, Address: 0x187b98, Func Offset: 0x18
	// Line 1015, Address: 0x187ba4, Func Offset: 0x24
	// Line 1016, Address: 0x187bb4, Func Offset: 0x34
	// Func End, Address: 0x187bc8, Func Offset: 0x48
}

// 
// Start address: 0x187bd0
BattleHitResult EnemyBattleAttackResult(sfObj* obj, int attack_id)
{
	EnemyBattleData* pbd;
	EnemyBattleAttack* pba;
	// Line 1024, Address: 0x187bd0, Func Offset: 0
	// Line 1027, Address: 0x187bdc, Func Offset: 0xc
	// Line 1028, Address: 0x187bf0, Func Offset: 0x20
	// Line 1029, Address: 0x187bf8, Func Offset: 0x28
	// Line 1030, Address: 0x187c08, Func Offset: 0x38
	// Line 1031, Address: 0x187c14, Func Offset: 0x44
	// Line 1033, Address: 0x187c30, Func Offset: 0x60
	// Func End, Address: 0x187c40, Func Offset: 0x70
}

// 
// Start address: 0x187c40
int EnemyBattleAttackResultIsPlayerHit(sfObj* obj, int attack_id)
{
	int r;
	// Line 1041, Address: 0x187c40, Func Offset: 0
	// Line 1043, Address: 0x187c4c, Func Offset: 0xc
	// Line 1046, Address: 0x187c78, Func Offset: 0x38
	// Line 1047, Address: 0x187c7c, Func Offset: 0x3c
	// Line 1048, Address: 0x187c80, Func Offset: 0x40
	// Line 1049, Address: 0x187c84, Func Offset: 0x44
	// Func End, Address: 0x187c94, Func Offset: 0x54
}

// 
// Start address: 0x187ca0
EnemyBattleAttack* EnemyBattleAttackStartDirect(sfObj* obj, BattleAttackKind attack_kind, float damage, float shock, _enum type, int dir_type)
{
	EnemyBattleAttack* pba;
	BattleHit* pbh;
	// Line 1064, Address: 0x187ca0, Func Offset: 0
	// Line 1069, Address: 0x187cb8, Func Offset: 0x18
	// Line 1064, Address: 0x187cbc, Func Offset: 0x1c
	// Line 1069, Address: 0x187cd8, Func Offset: 0x38
	// Line 1070, Address: 0x187cec, Func Offset: 0x4c
	// Line 1072, Address: 0x187d00, Func Offset: 0x60
	// Line 1073, Address: 0x187d08, Func Offset: 0x68
	// Line 1074, Address: 0x187d14, Func Offset: 0x74
	// Line 1075, Address: 0x187d20, Func Offset: 0x80
	// Line 1076, Address: 0x187d28, Func Offset: 0x88
	// Line 1077, Address: 0x187d38, Func Offset: 0x98
	// Line 1083, Address: 0x187d40, Func Offset: 0xa0
	// Line 1082, Address: 0x187d44, Func Offset: 0xa4
	// Line 1083, Address: 0x187d48, Func Offset: 0xa8
	// Line 1084, Address: 0x187d54, Func Offset: 0xb4
	// Line 1085, Address: 0x187d60, Func Offset: 0xc0
	// Line 1086, Address: 0x187d74, Func Offset: 0xd4
	// Line 1087, Address: 0x187d7c, Func Offset: 0xdc
	// Line 1088, Address: 0x187d80, Func Offset: 0xe0
	// Line 1089, Address: 0x187d94, Func Offset: 0xf4
	// Line 1091, Address: 0x187d9c, Func Offset: 0xfc
	// Line 1092, Address: 0x187dbc, Func Offset: 0x11c
	// Line 1094, Address: 0x187dc8, Func Offset: 0x128
	// Line 1096, Address: 0x187dd8, Func Offset: 0x138
	// Line 1097, Address: 0x187de0, Func Offset: 0x140
	// Line 1098, Address: 0x187de8, Func Offset: 0x148
	// Func End, Address: 0x187e10, Func Offset: 0x170
}

// 
// Start address: 0x187e10
void EnemyBattleAttackEndDirect(EnemyBattleAttack* pba)
{
	// Line 1104, Address: 0x187e10, Func Offset: 0
	// Line 1105, Address: 0x187e20, Func Offset: 0x10
	// Line 1106, Address: 0x187e28, Func Offset: 0x18
	// Line 1107, Address: 0x187e30, Func Offset: 0x20
	// Line 1108, Address: 0x187e38, Func Offset: 0x28
	// Line 1109, Address: 0x187e48, Func Offset: 0x38
	// Func End, Address: 0x187e58, Func Offset: 0x48
}

// 
// Start address: 0x187e60
void EnemyBattleAttackChangePosDirect(EnemyBattleAttack* pba, float* pos, float radius)
{
	BattleHit* pbh;
	sfCldPart* pcp;
	_anon1* psp;
	float vec[4];
	// Line 1118, Address: 0x187e60, Func Offset: 0
	// Line 1123, Address: 0x187e78, Func Offset: 0x18
	// Line 1124, Address: 0x187e80, Func Offset: 0x20
	// Line 1126, Address: 0x187ea0, Func Offset: 0x40
	// Line 1127, Address: 0x187ec8, Func Offset: 0x68
	// Line 1128, Address: 0x187ed4, Func Offset: 0x74
	// Line 1129, Address: 0x187ed8, Func Offset: 0x78
	// Line 1130, Address: 0x187ee8, Func Offset: 0x88
	// Line 1132, Address: 0x187ef0, Func Offset: 0x90
	// Line 1134, Address: 0x187efc, Func Offset: 0x9c
	// Line 1135, Address: 0x187f1c, Func Offset: 0xbc
	// Line 1137, Address: 0x187f20, Func Offset: 0xc0
	// Line 1139, Address: 0x187f28, Func Offset: 0xc8
	// Line 1140, Address: 0x187f34, Func Offset: 0xd4
	// Line 1141, Address: 0x187f4c, Func Offset: 0xec
	// Line 1142, Address: 0x187f78, Func Offset: 0x118
	// Line 1143, Address: 0x187f84, Func Offset: 0x124
	// Line 1144, Address: 0x187f88, Func Offset: 0x128
	// Line 1145, Address: 0x187f94, Func Offset: 0x134
	// Line 1149, Address: 0x187f9c, Func Offset: 0x13c
	// Func End, Address: 0x187fb8, Func Offset: 0x158
}

// 
// Start address: 0x187fc0
BattleHitResult EnemyBattleAttackResultDirect(EnemyBattleAttack* pba)
{
	// Line 1156, Address: 0x187fc0, Func Offset: 0
	// Line 1157, Address: 0x187fc4, Func Offset: 0x4
	// Line 1159, Address: 0x187fe0, Func Offset: 0x20
	// Func End, Address: 0x187fec, Func Offset: 0x2c
}

// 
// Start address: 0x187ff0
void EnemyBattleAttackSetDamageExtent(sfObj* obj, int type, float range_rate, float damage_rate)
{
	EnemyBattleData* pbd;
	EnemyKind kind;
	float* pos;
	float range;
	// Line 1170, Address: 0x187ff0, Func Offset: 0
	// Line 1171, Address: 0x18801c, Func Offset: 0x2c
	// Line 1172, Address: 0x188028, Func Offset: 0x38
	// Line 1175, Address: 0x188030, Func Offset: 0x40
	// Line 1176, Address: 0x188040, Func Offset: 0x50
	// Line 1177, Address: 0x18804c, Func Offset: 0x5c
	// Line 1185, Address: 0x188060, Func Offset: 0x70
	// Line 1177, Address: 0x188068, Func Offset: 0x78
	// Line 1185, Address: 0x18806c, Func Offset: 0x7c
	// Line 1187, Address: 0x188090, Func Offset: 0xa0
	// Func End, Address: 0x1880b4, Func Offset: 0xc4
}

// 
// Start address: 0x1880c0
float EnemyBattleAttackSetCurse(float* pos, float range, float damage)
{
	// Line 1198, Address: 0x1880c0, Func Offset: 0
	// Func End, Address: 0x1880c8, Func Offset: 0x8
}

// 
// Start address: 0x1880d0
void EnemyBattleAttackSetDamageDirect(float damage)
{
	// Line 1209, Address: 0x1880d0, Func Offset: 0
	// Func End, Address: 0x1880d8, Func Offset: 0x8
}

// 
// Start address: 0x1880e0
float EnemyBattleCheckExorcismDamage(sfObj* obj, int type, float range_rate)
{
	EnemyBattleData* pbd;
	EnemyKind kind;
	float* pos;
	float range;
	float d;
	// Line 1219, Address: 0x1880e0, Func Offset: 0
	// Line 1220, Address: 0x188104, Func Offset: 0x24
	// Line 1221, Address: 0x188110, Func Offset: 0x30
	// Line 1224, Address: 0x188118, Func Offset: 0x38
	// Line 1225, Address: 0x188138, Func Offset: 0x58
	// Line 1226, Address: 0x188144, Func Offset: 0x64
	// Line 1228, Address: 0x188158, Func Offset: 0x78
	// Line 1226, Address: 0x18815c, Func Offset: 0x7c
	// Line 1228, Address: 0x188160, Func Offset: 0x80
	// Line 1229, Address: 0x18816c, Func Offset: 0x8c
	// Line 1231, Address: 0x188178, Func Offset: 0x98
	// Func End, Address: 0x188198, Func Offset: 0xb8
}

// 
// Start address: 0x1881a0
float EnemyBattleGetExorcismDamage(sfObj* obj)
{
	EnemyBattleData* pbd;
	// Line 1240, Address: 0x1881a0, Func Offset: 0
	// Line 1241, Address: 0x1881a8, Func Offset: 0x8
	// Line 1243, Address: 0x1881b0, Func Offset: 0x10
	// Line 1242, Address: 0x1881b4, Func Offset: 0x14
	// Line 1243, Address: 0x1881b8, Func Offset: 0x18
	// Func End, Address: 0x1881c0, Func Offset: 0x20
}

// 
// Start address: 0x1881c0
void EnemyBattleResetExorcismDamage(sfObj* obj)
{
	EnemyBattleData* pbd;
	// Line 1249, Address: 0x1881c0, Func Offset: 0
	// Line 1250, Address: 0x1881c8, Func Offset: 0x8
	// Line 1251, Address: 0x1881d0, Func Offset: 0x10
	// Line 1252, Address: 0x1881d4, Func Offset: 0x14
	// Func End, Address: 0x1881e0, Func Offset: 0x20
}

// 
// Start address: 0x1881e0
EnemyBattleDamageAnimeNumber EnemyBattleDamageAnime(BattleDamageType type, float* dir, int down)
{
	EnemyBattleDamageAnimeNumber m;
	// Line 1265, Address: 0x1881e0, Func Offset: 0
	// Line 1267, Address: 0x1881fc, Func Offset: 0x1c
	// Line 1265, Address: 0x188200, Func Offset: 0x20
	// Line 1267, Address: 0x188204, Func Offset: 0x24
	// Line 1270, Address: 0x18822c, Func Offset: 0x4c
	// Line 1271, Address: 0x188230, Func Offset: 0x50
	// Line 1272, Address: 0x188238, Func Offset: 0x58
	// Line 1273, Address: 0x18823c, Func Offset: 0x5c
	// Line 1274, Address: 0x188248, Func Offset: 0x68
	// Line 1276, Address: 0x18824c, Func Offset: 0x6c
	// Line 1279, Address: 0x188254, Func Offset: 0x74
	// Line 1280, Address: 0x188258, Func Offset: 0x78
	// Line 1281, Address: 0x188260, Func Offset: 0x80
	// Line 1282, Address: 0x188264, Func Offset: 0x84
	// Line 1283, Address: 0x188270, Func Offset: 0x90
	// Line 1285, Address: 0x188278, Func Offset: 0x98
	// Line 1289, Address: 0x188280, Func Offset: 0xa0
	// Line 1291, Address: 0x188288, Func Offset: 0xa8
	// Line 1294, Address: 0x188290, Func Offset: 0xb0
	// Line 1298, Address: 0x188298, Func Offset: 0xb8
	// Line 1299, Address: 0x1882a0, Func Offset: 0xc0
	// Line 1300, Address: 0x1882a4, Func Offset: 0xc4
	// Line 1301, Address: 0x1882b0, Func Offset: 0xd0
	// Line 1303, Address: 0x1882b8, Func Offset: 0xd8
	// Line 1305, Address: 0x1882c0, Func Offset: 0xe0
	// Line 1306, Address: 0x1882c8, Func Offset: 0xe8
	// Line 1307, Address: 0x1882cc, Func Offset: 0xec
	// Line 1308, Address: 0x1882d8, Func Offset: 0xf8
	// Line 1310, Address: 0x1882e0, Func Offset: 0x100
	// Line 1312, Address: 0x1882e8, Func Offset: 0x108
	// Line 1313, Address: 0x1882f0, Func Offset: 0x110
	// Line 1317, Address: 0x1882f8, Func Offset: 0x118
	// Line 1318, Address: 0x188300, Func Offset: 0x120
	// Line 1321, Address: 0x188308, Func Offset: 0x128
	// Line 1324, Address: 0x188310, Func Offset: 0x130
	// Line 1326, Address: 0x188318, Func Offset: 0x138
	// Line 1327, Address: 0x188320, Func Offset: 0x140
	// Line 1329, Address: 0x188328, Func Offset: 0x148
	// Line 1332, Address: 0x188330, Func Offset: 0x150
	// Line 1333, Address: 0x188338, Func Offset: 0x158
	// Line 1334, Address: 0x18833c, Func Offset: 0x15c
	// Line 1335, Address: 0x188348, Func Offset: 0x168
	// Line 1338, Address: 0x18834c, Func Offset: 0x16c
	// Line 1340, Address: 0x188350, Func Offset: 0x170
	// Func End, Address: 0x188358, Func Offset: 0x178
}

// 
// Start address: 0x188360
int EnemyBattleAnimeIsDown(EnemyBattleDamageAnimeNumber anime)
{
	// Line 1348, Address: 0x188368, Func Offset: 0x8
	// Line 1349, Address: 0x188388, Func Offset: 0x28
	// Func End, Address: 0x188390, Func Offset: 0x30
}

// 
// Start address: 0x188390
int EnemyBattleDamageStrength(BattleDamageType type)
{
	int r;
	// Line 1358, Address: 0x188390, Func Offset: 0
	// Line 1369, Address: 0x1883bc, Func Offset: 0x2c
	// Line 1371, Address: 0x1883c0, Func Offset: 0x30
	// Line 1382, Address: 0x1883c8, Func Offset: 0x38
	// Line 1384, Address: 0x1883cc, Func Offset: 0x3c
	// Line 1386, Address: 0x1883d0, Func Offset: 0x40
	// Func End, Address: 0x1883d8, Func Offset: 0x48
}

// 
// Start address: 0x1883e0
int EnemyBattleDamageIsExorcism(BattleAttackKind kind)
{
	int r;
	// Line 1395, Address: 0x1883e0, Func Offset: 0
	// Line 1397, Address: 0x1883f8, Func Offset: 0x18
	// Line 1398, Address: 0x1883fc, Func Offset: 0x1c
	// Line 1400, Address: 0x188400, Func Offset: 0x20
	// Func End, Address: 0x188408, Func Offset: 0x28
}

// 
// Start address: 0x188410
int EnemyBattleDamageSoundType(BattleAttackKind kind)
{
	int r;
	// Line 1409, Address: 0x188410, Func Offset: 0
	// Line 1415, Address: 0x1884d4, Func Offset: 0xc4
	// Line 1417, Address: 0x1884d8, Func Offset: 0xc8
	// Line 1430, Address: 0x1884e0, Func Offset: 0xd0
	// Line 1432, Address: 0x1884e8, Func Offset: 0xd8
	// Line 1434, Address: 0x1884ec, Func Offset: 0xdc
	// Line 1436, Address: 0x1884f0, Func Offset: 0xe0
	// Func End, Address: 0x1884f8, Func Offset: 0xe8
}

// 
// Start address: 0x188500
void EnemyBattleSetHitSplashSize(sfObj* obj, float size)
{
	EnemyBattleData* pbd;
	// Line 1446, Address: 0x188500, Func Offset: 0
	// Line 1447, Address: 0x18850c, Func Offset: 0xc
	// Line 1448, Address: 0x188514, Func Offset: 0x14
	// Line 1449, Address: 0x18852c, Func Offset: 0x2c
	// Func End, Address: 0x18853c, Func Offset: 0x3c
}

// 
// Start address: 0x188540
BattleAttackKind EnemyBattleLastHitKind(sfObj* obj)
{
	EnemyBattleData* pbd;
	// Line 1456, Address: 0x188540, Func Offset: 0
	// Line 1457, Address: 0x188548, Func Offset: 0x8
	// Line 1458, Address: 0x188550, Func Offset: 0x10
	// Line 1460, Address: 0x188564, Func Offset: 0x24
	// Func End, Address: 0x188570, Func Offset: 0x30
}

// 
// Start address: 0x188570
void EnemyBattleSetLastHitKind(sfObj* obj, BattleAttackKind kind)
{
	EnemyBattleData* pbd;
	// Line 1467, Address: 0x188570, Func Offset: 0
	// Line 1468, Address: 0x18857c, Func Offset: 0xc
	// Line 1469, Address: 0x188584, Func Offset: 0x14
	// Line 1470, Address: 0x18858c, Func Offset: 0x1c
	// Line 1471, Address: 0x188590, Func Offset: 0x20
	// Func End, Address: 0x1885a0, Func Offset: 0x30
}

// 
// Start address: 0x1885a0
void EnemyBattleKilledCountUpByLastHitKind(sfObj* obj)
{
	EnemyBattleData* pbd;
	// Line 1477, Address: 0x1885a0, Func Offset: 0
	// Line 1478, Address: 0x1885a8, Func Offset: 0x8
	// Line 1479, Address: 0x1885b0, Func Offset: 0x10
	// Line 1480, Address: 0x1885b8, Func Offset: 0x18
	// Line 1481, Address: 0x1885f4, Func Offset: 0x54
	// Line 1483, Address: 0x1885f8, Func Offset: 0x58
	// Line 1489, Address: 0x188600, Func Offset: 0x60
	// Func End, Address: 0x18860c, Func Offset: 0x6c
}

// 
// Start address: 0x188610
void EnemyBattleIgnoreLastDamageID(sfObj* obj)
{
	EnemyBattleData* pbd;
	// Line 1495, Address: 0x188610, Func Offset: 0
	// Line 1496, Address: 0x188618, Func Offset: 0x8
	// Line 1497, Address: 0x188620, Func Offset: 0x10
	// Line 1498, Address: 0x188628, Func Offset: 0x18
	// Line 1499, Address: 0x18862c, Func Offset: 0x1c
	// Func End, Address: 0x18863c, Func Offset: 0x2c
}

// 
// Start address: 0x188640
int EnemyBattleAttackSoundType(BattleAttackKind kind)
{
	int r;
	// Line 1508, Address: 0x188640, Func Offset: 0
	// Line 1510, Address: 0x1886e4, Func Offset: 0xa4
	// Line 1512, Address: 0x1886e8, Func Offset: 0xa8
	// Line 1516, Address: 0x1886f0, Func Offset: 0xb0
	// Line 1528, Address: 0x1886f8, Func Offset: 0xb8
	// Line 1530, Address: 0x1886fc, Func Offset: 0xbc
	// Line 1532, Address: 0x188700, Func Offset: 0xc0
	// Func End, Address: 0x188708, Func Offset: 0xc8
}

// 
// Start address: 0x188710
void EnemyBattleHitSoundCall(sfObj* obj, BattleAttackKind kind)
{
	// Line 1539, Address: 0x188710, Func Offset: 0
	// Line 1540, Address: 0x188720, Func Offset: 0x10
	// Line 1542, Address: 0x188750, Func Offset: 0x40
	// Line 1543, Address: 0x18875c, Func Offset: 0x4c
	// Line 1544, Address: 0x188764, Func Offset: 0x54
	// Line 1545, Address: 0x188768, Func Offset: 0x58
	// Line 1546, Address: 0x188774, Func Offset: 0x64
	// Line 1547, Address: 0x18877c, Func Offset: 0x6c
	// Line 1548, Address: 0x188780, Func Offset: 0x70
	// Line 1550, Address: 0x18878c, Func Offset: 0x7c
	// Line 1551, Address: 0x188790, Func Offset: 0x80
	// Func End, Address: 0x1887a0, Func Offset: 0x90
}

// 
// Start address: 0x1887a0
float EnemyBattleGetFinishSoundDelay(sfObj* obj)
{
	float delay;
	EnemyBattleData* pbd;
	// Line 1558, Address: 0x1887a0, Func Offset: 0
	// Line 1559, Address: 0x1887ac, Func Offset: 0xc
	// Line 1560, Address: 0x1887b0, Func Offset: 0x10
	// Line 1561, Address: 0x1887b8, Func Offset: 0x18
	// Line 1562, Address: 0x1887c8, Func Offset: 0x28
	// Line 1564, Address: 0x1887e0, Func Offset: 0x40
	// Line 1565, Address: 0x1887ec, Func Offset: 0x4c
	// Line 1566, Address: 0x1887f0, Func Offset: 0x50
	// Line 1567, Address: 0x1887f8, Func Offset: 0x58
	// Func End, Address: 0x188808, Func Offset: 0x68
}

