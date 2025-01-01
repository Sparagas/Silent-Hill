typedef struct EnemyClHitResult;
typedef struct sfObj;
typedef struct EnemyKillerHand;
typedef struct EnemyKillerLastWork;
typedef struct _anon0;
typedef struct EnemyBattleDamage;
typedef struct _anon1;
typedef struct EnemyKillerBodyWork;
typedef struct EnemyKillerSubWork;
typedef struct _anon2;
typedef struct sfCldObject;
typedef struct _anon3;
typedef struct EnemyRwWork;
typedef struct EnemyFmWork;
typedef struct sgBone;
typedef struct EnemyObjHook;
typedef struct sgQTNode;
typedef struct EnemySearchData;
typedef struct sfCldPart;
typedef struct EnemySearchPoint;
typedef struct sgQTObject;
typedef struct EventFlag;
typedef union _anon4;
typedef enum BattleAttackKind : unsigned char;
typedef struct sfOffsetAABB;
typedef union sfCldBody;
typedef enum EnemyManageEntryType : unsigned char;
typedef struct EnemyManageDataOne;
typedef enum BattleDamageType : unsigned char;

typedef void(*type_9)(sfObj*);
typedef void(*type_10)(void*, int);
typedef void(*type_11)(sfObj*);
typedef int(*type_20)(void*);
typedef int(*type_21)(void*);
typedef void(*type_24)(sfObj*);
typedef void(*type_26)(sfObj*);

typedef _anon4 type_0[4];
typedef float type_1[4];
typedef EnemyKillerHand type_2[2];
typedef sfCldPart* type_3[6];
typedef unsigned char type_4[3];
typedef sgBone* type_5[8];
typedef float type_6[5];
typedef _anon4 type_7[256];
typedef unsigned char type_8[320];
typedef float type_12[4];
typedef short type_13[2];
typedef unsigned short type_14[2];
typedef unsigned char type_15[3];
typedef char type_16[4];
typedef unsigned char type_17[4];
typedef float type_18[1];
typedef int type_19[1];
typedef float type_22[4];
typedef float type_23[4][4];
typedef void(*type_25)(sfObj*)[19];

struct EnemyClHitResult
{
};

struct sfObj
{
	_anon4 fwork[256];
	_anon4* work;
	void(*func)(sfObj*);
	_anon4* work_pt0;
	_anon4* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon4* sys_work;
	_anon4* scene_work;
	_anon4* event_work;
	_anon4* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct EnemyKillerHand
{
	float arm_rot;
	float arm_rot_v;
	int rot_mode;
	sfObj* weapon_obj;
	int bullet;
	int fire_count;
};

struct EnemyKillerLastWork
{
	EnemyKillerSubWork subwork;
	float target_pos[4];
	float timer;
	float timer2;
	int super_armor_count;
	float super_armor_wait;
	int attack_kind;
	float blow_range;
	int revenge;
	int avoid_check;
	EnemySearchData* search;
};

struct _anon0
{
	float start[4];
	float end[4];
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

struct _anon1
{
	float center[4];
	float radius;
};

struct EnemyKillerBodyWork
{
	float timer;
	EnemyObjHook* animechange_hook;
	sgBone* spear_bone[8];
	int spear_num;
	int sound_slot;
	int roar_on;
	int damage_is_effective;
	int blood_count;
	float blood_wait;
	int additional_damage;
};

struct EnemyKillerSubWork
{
	float head_rot[4];
	float neck_rot[4];
	EnemyKillerHand hand[2];
	int head_mode;
	EnemyRwWork* rw_work;
	EnemyFmWork* fm_work;
	sfObj* target_obj;
	EnemyObjHook* animechange_hook;
	EnemyObjHook* animeupdate_hook;
	int falling_direction;
};

struct _anon2
{
	float bmin[4];
	float bmax[4];
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
	float mat[4][4];
	float half_w[4];
};

struct EnemyRwWork
{
};

struct EnemyFmWork
{
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

struct EnemyObjHook
{
};

struct sgQTNode
{
	int dummy;
};

struct EnemySearchData
{
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

struct EnemySearchPoint
{
};

struct sgQTObject
{
	_anon1 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

struct EventFlag
{
	unsigned char flag[320];
};

union _anon4
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

struct sfOffsetAABB
{
	_anon2 aabb;
	float offset[4];
};

union sfCldBody
{
	_anon3 obb;
	_anon2 aabb;
	sfOffsetAABB offset_aabb;
	_anon0 line;
	_anon1 sphere;
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
	_anon4 work[4];
	unsigned int padding;
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

float shoot_wait[5];
float dead_body_pos[4];
float base_pos[4];
EventFlag event_flag;
void(*killl_jump_table)(sfObj*)[19];
float sg_vector_unit_y[4];
int(*EnemyEDAnimeIsEnd)(void*);
void(*EnemyEDKillerLastDamage)(void*, int);
int(*EnemyEDBattleDamageCheck)(void*);
sfObj* boss_body;
void(*EnemyKillerBodyAnimeChangeHook)(sfObj*);
float sg_vector_zero[4];

int check_flag_wait();
void EnemyKillerLastConstruct(sfObj* obj);
void EnemyKillerLastHandle(sfObj* obj);
void EnemyKillerLastDraw(sfObj* obj);
void EnemyKillerLastDestruct(sfObj* obj);
void EnemyKillerLastDataPreserve(sfObj* obj);
void EnemyKillerLastDataExtract(sfObj* obj);
int search_path(sfObj* obj, float* target);
void set_shoot_wait(sfObj* obj);
void EnemyKillerLastControl(sfObj* obj);
void EnemyKillerLastControlRoundI(sfObj* obj);
void EnemyKillerLastControlAttackI(sfObj* obj);
void EnemyKillerLastControlReadyI(sfObj* obj);
void EnemyKillerLastControlWarpI(sfObj* obj);
void EnemyKillerLastControlBlowI(sfObj* obj);
void EnemyKillerLastControlEvent1(sfObj* obj);
void EnemyKillerLastControlEvent2(sfObj* obj);
void EnemyKillerLastControlEvent3(sfObj* obj);
void EnemyKillerLastControlApproach(sfObj* obj);
void EnemyKillerLastControlAttack(sfObj* obj);
void EnemyKillerLastControlReady(sfObj* obj);
void EnemyKillerLastControlBlow(sfObj* obj);
void EnemyKillerLastControlDash(sfObj* obj);
void EnemyKillerLastControlCaution(sfObj* obj);
void set_interval_target(sfObj* obj);
void EnemyKillerLastControlInterval(sfObj* obj);
void EnemyKillerLastControlBackStep(sfObj* obj);
void EnemyKillerLastControlDamage(sfObj* obj);
void EnemyKillerLastControlFinish(sfObj* obj);
void EnemyKillerLastControlDead(sfObj* obj);
void EnemyKillerLastSetEventDamageCheck(sfObj* obj);
int EnemyKillerLastCheckWeaponHit(sfObj* obj);
int EnemyKillerLastCheckBack(sfObj* obj);
void EnemyEDKillerLastDamage(void* obj);
void EnemyKillerLastRevival(sfObj* obj);
void EnemyKillerBodyConstruct(sfObj* obj);
void EnemyKillerBodyHandle(sfObj* obj);
void EnemyKillerBodyAnimeSet(sfObj* obj, int anime);
void EnemyKillerBodyControlNormal(sfObj* obj);
void EnemyKillerBodyControlDamage(sfObj* obj);
void EnemyKillerBodyDraw();
void EnemyKillerBodyDestruct(sfObj* obj);
void EnemyKillerBodyAnimeChangeHook(sfObj* obj);
void EnemyKillerBodyStabSpear(sgBone* bone);
void EnemyKillerBodyDamage();
int EnemyKillerLastCheckUsedNavelString();
int EnemyKillerLastDamageIsEffective();
int EnemyCheckStuckAllSpears();
void EnemyKillerDead(sfObj* obj);
int EnemyKillerLastIsReadying();

// 
// Start address: 0x1ed5000
int check_flag_wait()
{
	// Line 188, Address: 0x1ed5000, Func Offset: 0
	// Line 189, Address: 0x1ed5010, Func Offset: 0x10
	// Func End, Address: 0x1ed5018, Func Offset: 0x18
}

// 
// Start address: 0x1ed5020
void EnemyKillerLastConstruct(sfObj* obj)
{
	EnemyKillerLastWork* ew;
	EnemyManageEntryType etype;
	// Line 610, Address: 0x1ed5020, Func Offset: 0
	// Line 611, Address: 0x1ed5028, Func Offset: 0x8
	// Line 613, Address: 0x1ed5030, Func Offset: 0x10
	// Line 612, Address: 0x1ed5034, Func Offset: 0x14
	// Line 613, Address: 0x1ed5038, Func Offset: 0x18
	// Func End, Address: 0x1ed5040, Func Offset: 0x20
	// Line 193, Address: 0x1ed5020, Func Offset: 0
	// Line 197, Address: 0x1ed5024, Func Offset: 0x4
	// Line 193, Address: 0x1ed5028, Func Offset: 0x8
	// Line 197, Address: 0x1ed503c, Func Offset: 0x1c
	// Line 199, Address: 0x1ed5044, Func Offset: 0x24
	// Line 201, Address: 0x1ed504c, Func Offset: 0x2c
	// Line 199, Address: 0x1ed5050, Func Offset: 0x30
	// Line 201, Address: 0x1ed5054, Func Offset: 0x34
	// Line 202, Address: 0x1ed5060, Func Offset: 0x40
	// Line 204, Address: 0x1ed506c, Func Offset: 0x4c
	// Line 205, Address: 0x1ed507c, Func Offset: 0x5c
	// Line 206, Address: 0x1ed5084, Func Offset: 0x64
	// Line 208, Address: 0x1ed50b0, Func Offset: 0x90
	// Line 209, Address: 0x1ed50c0, Func Offset: 0xa0
	// Line 210, Address: 0x1ed50d0, Func Offset: 0xb0
	// Line 212, Address: 0x1ed50f0, Func Offset: 0xd0
	// Line 213, Address: 0x1ed50f8, Func Offset: 0xd8
	// Line 214, Address: 0x1ed5104, Func Offset: 0xe4
	// Line 218, Address: 0x1ed5110, Func Offset: 0xf0
	// Line 219, Address: 0x1ed5118, Func Offset: 0xf8
	// Line 221, Address: 0x1ed5120, Func Offset: 0x100
	// Line 223, Address: 0x1ed5130, Func Offset: 0x110
	// Line 226, Address: 0x1ed5138, Func Offset: 0x118
	// Line 227, Address: 0x1ed5144, Func Offset: 0x124
	// Line 228, Address: 0x1ed5158, Func Offset: 0x138
	// Line 230, Address: 0x1ed516c, Func Offset: 0x14c
	// Line 233, Address: 0x1ed5170, Func Offset: 0x150
	// Line 231, Address: 0x1ed5174, Func Offset: 0x154
	// Line 233, Address: 0x1ed5178, Func Offset: 0x158
	// Line 234, Address: 0x1ed5184, Func Offset: 0x164
	// Func End, Address: 0x1ed51a0, Func Offset: 0x180
}

// 
// Start address: 0x1ed51a0
void EnemyKillerLastHandle(sfObj* obj)
{
	// Line 529, Address: 0x1ed51a0, Func Offset: 0
	// Line 531, Address: 0x1ed51ac, Func Offset: 0xc
	// Line 533, Address: 0x1ed51c0, Func Offset: 0x20
	// Line 536, Address: 0x1ed51c8, Func Offset: 0x28
	// Line 538, Address: 0x1ed51d4, Func Offset: 0x34
	// Line 539, Address: 0x1ed51e0, Func Offset: 0x40
	// Line 541, Address: 0x1ed51e8, Func Offset: 0x48
	// Line 542, Address: 0x1ed51f0, Func Offset: 0x50
	// Func End, Address: 0x1ed5200, Func Offset: 0x60
	// Line 238, Address: 0x1ed51a0, Func Offset: 0
	// Line 239, Address: 0x1ed51ac, Func Offset: 0xc
	// Line 241, Address: 0x1ed51bc, Func Offset: 0x1c
	// Line 242, Address: 0x1ed51c4, Func Offset: 0x24
	// Line 243, Address: 0x1ed51cc, Func Offset: 0x2c
	// Line 244, Address: 0x1ed51d4, Func Offset: 0x34
	// Line 245, Address: 0x1ed51dc, Func Offset: 0x3c
	// Line 246, Address: 0x1ed51e4, Func Offset: 0x44
	// Line 247, Address: 0x1ed51ec, Func Offset: 0x4c
	// Line 249, Address: 0x1ed51f4, Func Offset: 0x54
	// Line 250, Address: 0x1ed5204, Func Offset: 0x64
	// Line 251, Address: 0x1ed520c, Func Offset: 0x6c
	// Line 252, Address: 0x1ed5214, Func Offset: 0x74
	// Line 253, Address: 0x1ed5220, Func Offset: 0x80
	// Line 254, Address: 0x1ed5228, Func Offset: 0x88
	// Line 256, Address: 0x1ed5230, Func Offset: 0x90
	// Func End, Address: 0x1ed5240, Func Offset: 0xa0
}

// 
// Start address: 0x1ed5240
void EnemyKillerLastDraw(sfObj* obj)
{
	// Line 874, Address: 0x1ed5240, Func Offset: 0
	// Func End, Address: 0x1ed5260, Func Offset: 0x20
	// Line 260, Address: 0x1ed5240, Func Offset: 0
	// Line 261, Address: 0x1ed524c, Func Offset: 0xc
	// Line 262, Address: 0x1ed5254, Func Offset: 0x14
	// Line 266, Address: 0x1ed525c, Func Offset: 0x1c
	// Line 267, Address: 0x1ed5264, Func Offset: 0x24
	// Func End, Address: 0x1ed5274, Func Offset: 0x34
}

// 
// Start address: 0x1ed5280
void EnemyKillerLastDestruct(sfObj* obj)
{
	EnemyKillerLastWork* ew;
	// Line 271, Address: 0x1ed5280, Func Offset: 0
	// Line 273, Address: 0x1ed528c, Func Offset: 0xc
	// Line 274, Address: 0x1ed5294, Func Offset: 0x14
	// Line 275, Address: 0x1ed529c, Func Offset: 0x1c
	// Line 276, Address: 0x1ed52a4, Func Offset: 0x24
	// Line 277, Address: 0x1ed52ac, Func Offset: 0x2c
	// Func End, Address: 0x1ed52bc, Func Offset: 0x3c
}

// 
// Start address: 0x1ed52c0
void EnemyKillerLastDataPreserve(sfObj* obj)
{
	EnemyManageDataOne* pe;
	// Line 746, Address: 0x1ed52c0, Func Offset: 0
	// Line 747, Address: 0x1ed52c8, Func Offset: 0x8
	// Line 749, Address: 0x1ed52d0, Func Offset: 0x10
	// Line 748, Address: 0x1ed52d4, Func Offset: 0x14
	// Line 749, Address: 0x1ed52d8, Func Offset: 0x18
	// Func End, Address: 0x1ed52e0, Func Offset: 0x20
	// Line 281, Address: 0x1ed52c0, Func Offset: 0
	// Line 283, Address: 0x1ed52d0, Func Offset: 0x10
	// Line 284, Address: 0x1ed52dc, Func Offset: 0x1c
	// Line 285, Address: 0x1ed52e8, Func Offset: 0x28
	// Line 286, Address: 0x1ed52f4, Func Offset: 0x34
	// Func End, Address: 0x1ed5308, Func Offset: 0x48
}

// 
// Start address: 0x1ed5310
void EnemyKillerLastDataExtract(sfObj* obj)
{
	EnemyManageDataOne* pe;
	// Line 290, Address: 0x1ed5310, Func Offset: 0
	// Line 292, Address: 0x1ed5320, Func Offset: 0x10
	// Line 293, Address: 0x1ed5334, Func Offset: 0x24
	// Line 294, Address: 0x1ed5340, Func Offset: 0x30
	// Line 295, Address: 0x1ed534c, Func Offset: 0x3c
	// Line 296, Address: 0x1ed5354, Func Offset: 0x44
	// Func End, Address: 0x1ed5368, Func Offset: 0x58
}

// 
// Start address: 0x1ed5370
int search_path(sfObj* obj, float* target)
{
	EnemyKillerLastWork* ew;
	EnemySearchPoint* esp;
	float pos[4];
	// Line 1191, Address: 0x1ed5370, Func Offset: 0
	// Line 1192, Address: 0x1ed5374, Func Offset: 0x4
	// Line 1191, Address: 0x1ed5378, Func Offset: 0x8
	// Line 1192, Address: 0x1ed5380, Func Offset: 0x10
	// Line 1193, Address: 0x1ed538c, Func Offset: 0x1c
	// Line 1195, Address: 0x1ed53a0, Func Offset: 0x30
	// Line 1197, Address: 0x1ed53a8, Func Offset: 0x38
	// Func End, Address: 0x1ed53b8, Func Offset: 0x48
	// Line 300, Address: 0x1ed5370, Func Offset: 0
	// Line 304, Address: 0x1ed5388, Func Offset: 0x18
	// Line 305, Address: 0x1ed5394, Func Offset: 0x24
	// Line 306, Address: 0x1ed539c, Func Offset: 0x2c
	// Line 307, Address: 0x1ed53ac, Func Offset: 0x3c
	// Line 309, Address: 0x1ed53c4, Func Offset: 0x54
	// Line 310, Address: 0x1ed53cc, Func Offset: 0x5c
	// Line 309, Address: 0x1ed53d0, Func Offset: 0x60
	// Line 310, Address: 0x1ed53d4, Func Offset: 0x64
	// Line 311, Address: 0x1ed53ec, Func Offset: 0x7c
	// Line 312, Address: 0x1ed53f4, Func Offset: 0x84
	// Line 313, Address: 0x1ed53f8, Func Offset: 0x88
	// Line 315, Address: 0x1ed5420, Func Offset: 0xb0
	// Line 317, Address: 0x1ed5428, Func Offset: 0xb8
	// Line 321, Address: 0x1ed5434, Func Offset: 0xc4
	// Line 322, Address: 0x1ed5438, Func Offset: 0xc8
	// Func End, Address: 0x1ed5450, Func Offset: 0xe0
}

// 
// Start address: 0x1ed5450
void set_shoot_wait(sfObj* obj)
{
	EnemyKillerLastWork* ew;
	// Line 326, Address: 0x1ed5450, Func Offset: 0
	// Line 328, Address: 0x1ed545c, Func Offset: 0xc
	// Line 329, Address: 0x1ed5464, Func Offset: 0x14
	// Line 331, Address: 0x1ed54b0, Func Offset: 0x60
	// Func End, Address: 0x1ed54c4, Func Offset: 0x74
}

// 
// Start address: 0x1ed54d0
void EnemyKillerLastControl(sfObj* obj)
{
	EnemyKillerLastWork* ew;
	int step;
	float dt;
	// Line 888, Address: 0x1ed54d0, Func Offset: 0
	// Line 892, Address: 0x1ed54d4, Func Offset: 0x4
	// Line 888, Address: 0x1ed54d8, Func Offset: 0x8
	// Line 892, Address: 0x1ed54dc, Func Offset: 0xc
	// Line 888, Address: 0x1ed54e0, Func Offset: 0x10
	// Line 892, Address: 0x1ed54e4, Func Offset: 0x14
	// Line 893, Address: 0x1ed54f0, Func Offset: 0x20
	// Line 894, Address: 0x1ed54f8, Func Offset: 0x28
	// Line 899, Address: 0x1ed5508, Func Offset: 0x38
	// Line 895, Address: 0x1ed550c, Func Offset: 0x3c
	// Line 899, Address: 0x1ed5510, Func Offset: 0x40
	// Line 903, Address: 0x1ed5518, Func Offset: 0x48
	// Line 897, Address: 0x1ed551c, Func Offset: 0x4c
	// Line 899, Address: 0x1ed5520, Func Offset: 0x50
	// Line 903, Address: 0x1ed5534, Func Offset: 0x64
	// Line 904, Address: 0x1ed553c, Func Offset: 0x6c
	// Line 905, Address: 0x1ed5544, Func Offset: 0x74
	// Line 906, Address: 0x1ed554c, Func Offset: 0x7c
	// Line 910, Address: 0x1ed5550, Func Offset: 0x80
	// Line 906, Address: 0x1ed5554, Func Offset: 0x84
	// Line 907, Address: 0x1ed5558, Func Offset: 0x88
	// Line 908, Address: 0x1ed5560, Func Offset: 0x90
	// Line 910, Address: 0x1ed5568, Func Offset: 0x98
	// Line 914, Address: 0x1ed556c, Func Offset: 0x9c
	// Line 912, Address: 0x1ed5570, Func Offset: 0xa0
	// Line 915, Address: 0x1ed5578, Func Offset: 0xa8
	// Func End, Address: 0x1ed5588, Func Offset: 0xb8
	// Line 374, Address: 0x1ed54d0, Func Offset: 0
	// Line 378, Address: 0x1ed54e0, Func Offset: 0x10
	// Line 387, Address: 0x1ed54ec, Func Offset: 0x1c
	// Line 389, Address: 0x1ed54f4, Func Offset: 0x24
	// Line 390, Address: 0x1ed54fc, Func Offset: 0x2c
	// Line 391, Address: 0x1ed5520, Func Offset: 0x50
	// Line 392, Address: 0x1ed5524, Func Offset: 0x54
	// Line 393, Address: 0x1ed5534, Func Offset: 0x64
	// Line 397, Address: 0x1ed5538, Func Offset: 0x68
	// Line 398, Address: 0x1ed5548, Func Offset: 0x78
	// Line 401, Address: 0x1ed5550, Func Offset: 0x80
	// Line 403, Address: 0x1ed5558, Func Offset: 0x88
	// Line 405, Address: 0x1ed5574, Func Offset: 0xa4
	// Line 406, Address: 0x1ed557c, Func Offset: 0xac
	// Line 413, Address: 0x1ed5584, Func Offset: 0xb4
	// Func End, Address: 0x1ed5598, Func Offset: 0xc8
}

// 
// Start address: 0x1ed55a0
void EnemyKillerLastControlRoundI(sfObj* obj)
{
	EnemyKillerLastWork* ew;
	float* pos;
	float* ppos;
	float tpos[4];
	float vec[4];
	float rot[4];
	float trot[4];
	float dt;
	float d;
	float df;
	// Line 417, Address: 0x1ed55a0, Func Offset: 0
	// Line 423, Address: 0x1ed55c0, Func Offset: 0x20
	// Line 424, Address: 0x1ed55cc, Func Offset: 0x2c
	// Line 425, Address: 0x1ed55d8, Func Offset: 0x38
	// Line 426, Address: 0x1ed55e4, Func Offset: 0x44
	// Line 427, Address: 0x1ed55ec, Func Offset: 0x4c
	// Line 428, Address: 0x1ed55f8, Func Offset: 0x58
	// Line 429, Address: 0x1ed5624, Func Offset: 0x84
	// Line 430, Address: 0x1ed5628, Func Offset: 0x88
	// Line 431, Address: 0x1ed5630, Func Offset: 0x90
	// Line 432, Address: 0x1ed5638, Func Offset: 0x98
	// Line 433, Address: 0x1ed5640, Func Offset: 0xa0
	// Line 434, Address: 0x1ed564c, Func Offset: 0xac
	// Line 435, Address: 0x1ed5654, Func Offset: 0xb4
	// Line 437, Address: 0x1ed565c, Func Offset: 0xbc
	// Line 438, Address: 0x1ed5660, Func Offset: 0xc0
	// Line 439, Address: 0x1ed5674, Func Offset: 0xd4
	// Line 440, Address: 0x1ed5680, Func Offset: 0xe0
	// Line 439, Address: 0x1ed5684, Func Offset: 0xe4
	// Line 440, Address: 0x1ed568c, Func Offset: 0xec
	// Line 441, Address: 0x1ed56a0, Func Offset: 0x100
	// Line 442, Address: 0x1ed56a4, Func Offset: 0x104
	// Line 441, Address: 0x1ed56ac, Func Offset: 0x10c
	// Line 442, Address: 0x1ed56b0, Func Offset: 0x110
	// Line 443, Address: 0x1ed56d0, Func Offset: 0x130
	// Line 445, Address: 0x1ed56f8, Func Offset: 0x158
	// Line 446, Address: 0x1ed5708, Func Offset: 0x168
	// Line 447, Address: 0x1ed5734, Func Offset: 0x194
	// Line 448, Address: 0x1ed5754, Func Offset: 0x1b4
	// Line 449, Address: 0x1ed5764, Func Offset: 0x1c4
	// Line 451, Address: 0x1ed576c, Func Offset: 0x1cc
	// Line 452, Address: 0x1ed5770, Func Offset: 0x1d0
	// Line 453, Address: 0x1ed577c, Func Offset: 0x1dc
	// Line 454, Address: 0x1ed5780, Func Offset: 0x1e0
	// Line 453, Address: 0x1ed5784, Func Offset: 0x1e4
	// Line 454, Address: 0x1ed578c, Func Offset: 0x1ec
	// Line 455, Address: 0x1ed579c, Func Offset: 0x1fc
	// Line 456, Address: 0x1ed57ac, Func Offset: 0x20c
	// Line 457, Address: 0x1ed57b0, Func Offset: 0x210
	// Line 458, Address: 0x1ed57c4, Func Offset: 0x224
	// Line 459, Address: 0x1ed57d0, Func Offset: 0x230
	// Line 460, Address: 0x1ed57e0, Func Offset: 0x240
	// Line 461, Address: 0x1ed57f8, Func Offset: 0x258
	// Line 462, Address: 0x1ed5804, Func Offset: 0x264
	// Line 464, Address: 0x1ed5814, Func Offset: 0x274
	// Line 466, Address: 0x1ed5824, Func Offset: 0x284
	// Line 468, Address: 0x1ed582c, Func Offset: 0x28c
	// Line 469, Address: 0x1ed5834, Func Offset: 0x294
	// Line 470, Address: 0x1ed5838, Func Offset: 0x298
	// Line 472, Address: 0x1ed5888, Func Offset: 0x2e8
	// Line 473, Address: 0x1ed5890, Func Offset: 0x2f0
	// Line 476, Address: 0x1ed58d0, Func Offset: 0x330
	// Line 477, Address: 0x1ed58e8, Func Offset: 0x348
	// Line 478, Address: 0x1ed58f0, Func Offset: 0x350
	// Line 479, Address: 0x1ed58f8, Func Offset: 0x358
	// Line 481, Address: 0x1ed5904, Func Offset: 0x364
	// Line 485, Address: 0x1ed5968, Func Offset: 0x3c8
	// Line 486, Address: 0x1ed5974, Func Offset: 0x3d4
	// Line 488, Address: 0x1ed59a4, Func Offset: 0x404
	// Line 491, Address: 0x1ed59ac, Func Offset: 0x40c
	// Line 492, Address: 0x1ed59b0, Func Offset: 0x410
	// Line 493, Address: 0x1ed59c0, Func Offset: 0x420
	// Line 495, Address: 0x1ed59c8, Func Offset: 0x428
	// Func End, Address: 0x1ed59ec, Func Offset: 0x44c
}

// 
// Start address: 0x1ed59f0
void EnemyKillerLastControlAttackI(sfObj* obj)
{
	EnemyKillerLastWork* ew;
	float* pos;
	float* ppos;
	float vec[4];
	float dt;
	float d;
	float df;
	int sf;
	int ef;
	sfCldPart* pcp;
	_anon1* psp;
	// Line 499, Address: 0x1ed59f0, Func Offset: 0
	// Line 505, Address: 0x1ed5a18, Func Offset: 0x28
	// Line 506, Address: 0x1ed5a24, Func Offset: 0x34
	// Line 507, Address: 0x1ed5a30, Func Offset: 0x40
	// Line 508, Address: 0x1ed5a38, Func Offset: 0x48
	// Line 509, Address: 0x1ed5a44, Func Offset: 0x54
	// Line 510, Address: 0x1ed5a7c, Func Offset: 0x8c
	// Line 511, Address: 0x1ed5a80, Func Offset: 0x90
	// Line 512, Address: 0x1ed5a8c, Func Offset: 0x9c
	// Line 513, Address: 0x1ed5a94, Func Offset: 0xa4
	// Line 514, Address: 0x1ed5a9c, Func Offset: 0xac
	// Line 515, Address: 0x1ed5ab4, Func Offset: 0xc4
	// Line 516, Address: 0x1ed5ac4, Func Offset: 0xd4
	// Line 517, Address: 0x1ed5ad8, Func Offset: 0xe8
	// Line 519, Address: 0x1ed5b1c, Func Offset: 0x12c
	// Line 520, Address: 0x1ed5b24, Func Offset: 0x134
	// Line 521, Address: 0x1ed5b28, Func Offset: 0x138
	// Line 522, Address: 0x1ed5b30, Func Offset: 0x140
	// Line 523, Address: 0x1ed5b3c, Func Offset: 0x14c
	// Line 524, Address: 0x1ed5b44, Func Offset: 0x154
	// Line 525, Address: 0x1ed5b48, Func Offset: 0x158
	// Line 526, Address: 0x1ed5b54, Func Offset: 0x164
	// Line 527, Address: 0x1ed5b5c, Func Offset: 0x16c
	// Line 529, Address: 0x1ed5b64, Func Offset: 0x174
	// Line 530, Address: 0x1ed5b68, Func Offset: 0x178
	// Line 531, Address: 0x1ed5b78, Func Offset: 0x188
	// Line 533, Address: 0x1ed5b80, Func Offset: 0x190
	// Line 537, Address: 0x1ed5b90, Func Offset: 0x1a0
	// Line 540, Address: 0x1ed5ba4, Func Offset: 0x1b4
	// Line 541, Address: 0x1ed5bb0, Func Offset: 0x1c0
	// Line 542, Address: 0x1ed5bb4, Func Offset: 0x1c4
	// Line 544, Address: 0x1ed5bb8, Func Offset: 0x1c8
	// Line 545, Address: 0x1ed5bd8, Func Offset: 0x1e8
	// Line 552, Address: 0x1ed5c18, Func Offset: 0x228
	// Line 553, Address: 0x1ed5c28, Func Offset: 0x238
	// Line 555, Address: 0x1ed5c40, Func Offset: 0x250
	// Line 556, Address: 0x1ed5c58, Func Offset: 0x268
	// Line 557, Address: 0x1ed5c5c, Func Offset: 0x26c
	// Line 558, Address: 0x1ed5c60, Func Offset: 0x270
	// Line 557, Address: 0x1ed5c64, Func Offset: 0x274
	// Line 560, Address: 0x1ed5c68, Func Offset: 0x278
	// Line 558, Address: 0x1ed5c6c, Func Offset: 0x27c
	// Line 560, Address: 0x1ed5c70, Func Offset: 0x280
	// Line 557, Address: 0x1ed5c74, Func Offset: 0x284
	// Line 560, Address: 0x1ed5c78, Func Offset: 0x288
	// Line 561, Address: 0x1ed5c80, Func Offset: 0x290
	// Line 563, Address: 0x1ed5c94, Func Offset: 0x2a4
	// Line 565, Address: 0x1ed5ca0, Func Offset: 0x2b0
	// Line 569, Address: 0x1ed5cb0, Func Offset: 0x2c0
	// Line 570, Address: 0x1ed5cc4, Func Offset: 0x2d4
	// Line 571, Address: 0x1ed5cd4, Func Offset: 0x2e4
	// Line 572, Address: 0x1ed5cdc, Func Offset: 0x2ec
	// Line 573, Address: 0x1ed5ce4, Func Offset: 0x2f4
	// Line 574, Address: 0x1ed5ce8, Func Offset: 0x2f8
	// Line 575, Address: 0x1ed5cf4, Func Offset: 0x304
	// Line 576, Address: 0x1ed5cfc, Func Offset: 0x30c
	// Line 579, Address: 0x1ed5d00, Func Offset: 0x310
	// Line 580, Address: 0x1ed5d18, Func Offset: 0x328
	// Line 581, Address: 0x1ed5d20, Func Offset: 0x330
	// Line 582, Address: 0x1ed5d30, Func Offset: 0x340
	// Line 583, Address: 0x1ed5d40, Func Offset: 0x350
	// Line 584, Address: 0x1ed5d48, Func Offset: 0x358
	// Line 585, Address: 0x1ed5d64, Func Offset: 0x374
	// Line 586, Address: 0x1ed5d6c, Func Offset: 0x37c
	// Line 587, Address: 0x1ed5d8c, Func Offset: 0x39c
	// Line 590, Address: 0x1ed5dd8, Func Offset: 0x3e8
	// Line 591, Address: 0x1ed5de0, Func Offset: 0x3f0
	// Line 592, Address: 0x1ed5de8, Func Offset: 0x3f8
	// Line 594, Address: 0x1ed5df4, Func Offset: 0x404
	// Line 596, Address: 0x1ed5e50, Func Offset: 0x460
	// Line 597, Address: 0x1ed5e5c, Func Offset: 0x46c
	// Line 598, Address: 0x1ed5e80, Func Offset: 0x490
	// Line 599, Address: 0x1ed5e88, Func Offset: 0x498
	// Line 600, Address: 0x1ed5e90, Func Offset: 0x4a0
	// Line 604, Address: 0x1ed5e9c, Func Offset: 0x4ac
	// Line 605, Address: 0x1ed5ea0, Func Offset: 0x4b0
	// Line 607, Address: 0x1ed5ec0, Func Offset: 0x4d0
	// Func End, Address: 0x1ed5eec, Func Offset: 0x4fc
}

// 
// Start address: 0x1ed5ef0
void EnemyKillerLastControlReadyI(sfObj* obj)
{
	EnemyKillerLastWork* ew;
	float* pos;
	float* ppos;
	float rot[4];
	float vec[4];
	float dt;
	float d;
	float df;
	int f;
	int ns;
	// Line 1689, Address: 0x1ed5ef0, Func Offset: 0
	// Line 1692, Address: 0x1ed5ef4, Func Offset: 0x4
	// Line 1689, Address: 0x1ed5ef8, Func Offset: 0x8
	// Line 1692, Address: 0x1ed5efc, Func Offset: 0xc
	// Line 1689, Address: 0x1ed5f00, Func Offset: 0x10
	// Line 1692, Address: 0x1ed5f04, Func Offset: 0x14
	// Line 1694, Address: 0x1ed5f10, Func Offset: 0x20
	// Line 1696, Address: 0x1ed5f1c, Func Offset: 0x2c
	// Line 1697, Address: 0x1ed5f24, Func Offset: 0x34
	// Line 1698, Address: 0x1ed5f2c, Func Offset: 0x3c
	// Line 1701, Address: 0x1ed5f30, Func Offset: 0x40
	// Line 1704, Address: 0x1ed5f3c, Func Offset: 0x4c
	// Line 1706, Address: 0x1ed5f40, Func Offset: 0x50
	// Line 1704, Address: 0x1ed5f44, Func Offset: 0x54
	// Line 1707, Address: 0x1ed5f54, Func Offset: 0x64
	// Func End, Address: 0x1ed5f64, Func Offset: 0x74
	// Line 611, Address: 0x1ed5ef0, Func Offset: 0
	// Line 618, Address: 0x1ed5f10, Func Offset: 0x20
	// Line 619, Address: 0x1ed5f1c, Func Offset: 0x2c
	// Line 620, Address: 0x1ed5f28, Func Offset: 0x38
	// Line 621, Address: 0x1ed5f34, Func Offset: 0x44
	// Line 622, Address: 0x1ed5f40, Func Offset: 0x50
	// Line 623, Address: 0x1ed5f4c, Func Offset: 0x5c
	// Line 625, Address: 0x1ed5f78, Func Offset: 0x88
	// Line 626, Address: 0x1ed5f88, Func Offset: 0x98
	// Line 627, Address: 0x1ed5f90, Func Offset: 0xa0
	// Line 629, Address: 0x1ed5f98, Func Offset: 0xa8
	// Line 630, Address: 0x1ed5fa4, Func Offset: 0xb4
	// Line 631, Address: 0x1ed5fac, Func Offset: 0xbc
	// Line 632, Address: 0x1ed5fb8, Func Offset: 0xc8
	// Line 633, Address: 0x1ed5fc0, Func Offset: 0xd0
	// Line 634, Address: 0x1ed5fc8, Func Offset: 0xd8
	// Line 635, Address: 0x1ed5fd4, Func Offset: 0xe4
	// Line 636, Address: 0x1ed5fdc, Func Offset: 0xec
	// Line 637, Address: 0x1ed5fe4, Func Offset: 0xf4
	// Line 638, Address: 0x1ed5fe8, Func Offset: 0xf8
	// Line 640, Address: 0x1ed6008, Func Offset: 0x118
	// Line 641, Address: 0x1ed6014, Func Offset: 0x124
	// Line 642, Address: 0x1ed6024, Func Offset: 0x134
	// Line 643, Address: 0x1ed602c, Func Offset: 0x13c
	// Line 644, Address: 0x1ed6038, Func Offset: 0x148
	// Line 646, Address: 0x1ed6040, Func Offset: 0x150
	// Line 648, Address: 0x1ed604c, Func Offset: 0x15c
	// Line 649, Address: 0x1ed6054, Func Offset: 0x164
	// Line 650, Address: 0x1ed6058, Func Offset: 0x168
	// Line 651, Address: 0x1ed6078, Func Offset: 0x188
	// Line 653, Address: 0x1ed6094, Func Offset: 0x1a4
	// Line 654, Address: 0x1ed6098, Func Offset: 0x1a8
	// Line 655, Address: 0x1ed60a4, Func Offset: 0x1b4
	// Line 657, Address: 0x1ed60b4, Func Offset: 0x1c4
	// Line 658, Address: 0x1ed60d0, Func Offset: 0x1e0
	// Line 659, Address: 0x1ed60d4, Func Offset: 0x1e4
	// Line 660, Address: 0x1ed60d8, Func Offset: 0x1e8
	// Line 662, Address: 0x1ed60e0, Func Offset: 0x1f0
	// Line 664, Address: 0x1ed60e8, Func Offset: 0x1f8
	// Line 665, Address: 0x1ed6118, Func Offset: 0x228
	// Line 666, Address: 0x1ed6120, Func Offset: 0x230
	// Line 668, Address: 0x1ed6128, Func Offset: 0x238
	// Line 669, Address: 0x1ed6140, Func Offset: 0x250
	// Line 670, Address: 0x1ed6150, Func Offset: 0x260
	// Line 673, Address: 0x1ed619c, Func Offset: 0x2ac
	// Line 674, Address: 0x1ed61a4, Func Offset: 0x2b4
	// Line 675, Address: 0x1ed61a8, Func Offset: 0x2b8
	// Line 676, Address: 0x1ed61c4, Func Offset: 0x2d4
	// Line 677, Address: 0x1ed61cc, Func Offset: 0x2dc
	// Line 678, Address: 0x1ed61d8, Func Offset: 0x2e8
	// Line 679, Address: 0x1ed61e4, Func Offset: 0x2f4
	// Line 680, Address: 0x1ed61ec, Func Offset: 0x2fc
	// Line 681, Address: 0x1ed61f0, Func Offset: 0x300
	// Line 682, Address: 0x1ed6204, Func Offset: 0x314
	// Line 684, Address: 0x1ed6220, Func Offset: 0x330
	// Line 685, Address: 0x1ed6228, Func Offset: 0x338
	// Line 686, Address: 0x1ed6234, Func Offset: 0x344
	// Line 687, Address: 0x1ed6240, Func Offset: 0x350
	// Line 689, Address: 0x1ed6248, Func Offset: 0x358
	// Line 690, Address: 0x1ed6254, Func Offset: 0x364
	// Line 689, Address: 0x1ed6258, Func Offset: 0x368
	// Line 690, Address: 0x1ed625c, Func Offset: 0x36c
	// Line 694, Address: 0x1ed6298, Func Offset: 0x3a8
	// Line 695, Address: 0x1ed62c0, Func Offset: 0x3d0
	// Line 696, Address: 0x1ed62c8, Func Offset: 0x3d8
	// Line 697, Address: 0x1ed62d4, Func Offset: 0x3e4
	// Line 698, Address: 0x1ed62e0, Func Offset: 0x3f0
	// Line 701, Address: 0x1ed62e8, Func Offset: 0x3f8
	// Line 702, Address: 0x1ed62ec, Func Offset: 0x3fc
	// Line 703, Address: 0x1ed62f0, Func Offset: 0x400
	// Line 705, Address: 0x1ed6300, Func Offset: 0x410
	// Line 706, Address: 0x1ed6308, Func Offset: 0x418
	// Line 707, Address: 0x1ed6314, Func Offset: 0x424
	// Line 708, Address: 0x1ed6320, Func Offset: 0x430
	// Line 712, Address: 0x1ed6328, Func Offset: 0x438
	// Line 713, Address: 0x1ed6334, Func Offset: 0x444
	// Line 714, Address: 0x1ed6344, Func Offset: 0x454
	// Line 716, Address: 0x1ed6348, Func Offset: 0x458
	// Line 714, Address: 0x1ed634c, Func Offset: 0x45c
	// Line 716, Address: 0x1ed6354, Func Offset: 0x464
	// Line 717, Address: 0x1ed635c, Func Offset: 0x46c
	// Line 718, Address: 0x1ed6364, Func Offset: 0x474
	// Line 719, Address: 0x1ed6368, Func Offset: 0x478
	// Line 720, Address: 0x1ed637c, Func Offset: 0x48c
	// Line 721, Address: 0x1ed6384, Func Offset: 0x494
	// Line 722, Address: 0x1ed6390, Func Offset: 0x4a0
	// Line 723, Address: 0x1ed63b4, Func Offset: 0x4c4
	// Line 724, Address: 0x1ed63c0, Func Offset: 0x4d0
	// Line 729, Address: 0x1ed63cc, Func Offset: 0x4dc
	// Line 730, Address: 0x1ed63d0, Func Offset: 0x4e0
	// Line 732, Address: 0x1ed63f0, Func Offset: 0x500
	// Line 733, Address: 0x1ed6418, Func Offset: 0x528
	// Line 734, Address: 0x1ed6424, Func Offset: 0x534
	// Line 733, Address: 0x1ed6428, Func Offset: 0x538
	// Line 734, Address: 0x1ed642c, Func Offset: 0x53c
	// Line 738, Address: 0x1ed6468, Func Offset: 0x578
	// Line 739, Address: 0x1ed6490, Func Offset: 0x5a0
	// Line 740, Address: 0x1ed649c, Func Offset: 0x5ac
	// Line 742, Address: 0x1ed64a4, Func Offset: 0x5b4
	// Line 743, Address: 0x1ed64a8, Func Offset: 0x5b8
	// Line 745, Address: 0x1ed64ac, Func Offset: 0x5bc
	// Line 746, Address: 0x1ed64b0, Func Offset: 0x5c0
	// Line 747, Address: 0x1ed64c0, Func Offset: 0x5d0
	// Line 748, Address: 0x1ed64d4, Func Offset: 0x5e4
	// Line 749, Address: 0x1ed64dc, Func Offset: 0x5ec
	// Line 750, Address: 0x1ed64e8, Func Offset: 0x5f8
	// Line 751, Address: 0x1ed64f4, Func Offset: 0x604
	// Line 752, Address: 0x1ed64fc, Func Offset: 0x60c
	// Line 753, Address: 0x1ed6500, Func Offset: 0x610
	// Line 754, Address: 0x1ed6518, Func Offset: 0x628
	// Line 756, Address: 0x1ed6530, Func Offset: 0x640
	// Line 758, Address: 0x1ed6578, Func Offset: 0x688
	// Line 759, Address: 0x1ed657c, Func Offset: 0x68c
	// Line 760, Address: 0x1ed6580, Func Offset: 0x690
	// Line 762, Address: 0x1ed6590, Func Offset: 0x6a0
	// Line 763, Address: 0x1ed65b4, Func Offset: 0x6c4
	// Line 764, Address: 0x1ed65bc, Func Offset: 0x6cc
	// Line 765, Address: 0x1ed65c8, Func Offset: 0x6d8
	// Line 766, Address: 0x1ed65d0, Func Offset: 0x6e0
	// Line 768, Address: 0x1ed65d4, Func Offset: 0x6e4
	// Line 770, Address: 0x1ed65f8, Func Offset: 0x708
	// Line 771, Address: 0x1ed6600, Func Offset: 0x710
	// Line 772, Address: 0x1ed6604, Func Offset: 0x714
	// Line 773, Address: 0x1ed6608, Func Offset: 0x718
	// Line 774, Address: 0x1ed6614, Func Offset: 0x724
	// Line 775, Address: 0x1ed661c, Func Offset: 0x72c
	// Line 777, Address: 0x1ed6628, Func Offset: 0x738
	// Line 779, Address: 0x1ed6634, Func Offset: 0x744
	// Line 782, Address: 0x1ed663c, Func Offset: 0x74c
	// Line 783, Address: 0x1ed6640, Func Offset: 0x750
	// Line 785, Address: 0x1ed6660, Func Offset: 0x770
	// Line 786, Address: 0x1ed666c, Func Offset: 0x77c
	// Line 787, Address: 0x1ed6688, Func Offset: 0x798
	// Line 789, Address: 0x1ed66b8, Func Offset: 0x7c8
	// Line 790, Address: 0x1ed66c8, Func Offset: 0x7d8
	// Line 791, Address: 0x1ed66d0, Func Offset: 0x7e0
	// Line 792, Address: 0x1ed66d8, Func Offset: 0x7e8
	// Line 794, Address: 0x1ed66e4, Func Offset: 0x7f4
	// Line 795, Address: 0x1ed66ec, Func Offset: 0x7fc
	// Line 796, Address: 0x1ed66f0, Func Offset: 0x800
	// Line 797, Address: 0x1ed6700, Func Offset: 0x810
	// Line 798, Address: 0x1ed6718, Func Offset: 0x828
	// Line 799, Address: 0x1ed6720, Func Offset: 0x830
	// Line 800, Address: 0x1ed6740, Func Offset: 0x850
	// Line 801, Address: 0x1ed6748, Func Offset: 0x858
	// Line 802, Address: 0x1ed6760, Func Offset: 0x870
	// Line 803, Address: 0x1ed6768, Func Offset: 0x878
	// Line 804, Address: 0x1ed6770, Func Offset: 0x880
	// Line 806, Address: 0x1ed677c, Func Offset: 0x88c
	// Line 807, Address: 0x1ed6784, Func Offset: 0x894
	// Line 808, Address: 0x1ed6788, Func Offset: 0x898
	// Line 813, Address: 0x1ed6794, Func Offset: 0x8a4
	// Line 814, Address: 0x1ed6798, Func Offset: 0x8a8
	// Line 817, Address: 0x1ed67d0, Func Offset: 0x8e0
	// Line 819, Address: 0x1ed67d8, Func Offset: 0x8e8
	// Func End, Address: 0x1ed67fc, Func Offset: 0x90c
}

// 
// Start address: 0x1ed6800
void EnemyKillerLastControlWarpI(sfObj* obj)
{
	EnemyKillerLastWork* ew;
	float* pos;
	float* ppos;
	float tpos[4];
	float vec[4];
	float dt;
	float d;
	float d2;
	// Line 76, Address: 0x1ed6800, Func Offset: 0
	// Line 81, Address: 0x1ed680c, Func Offset: 0xc
	// Line 83, Address: 0x1ed6814, Func Offset: 0x14
	// Line 85, Address: 0x1ed681c, Func Offset: 0x1c
	// Line 88, Address: 0x1ed6824, Func Offset: 0x24
	// Line 89, Address: 0x1ed6834, Func Offset: 0x34
	// Line 90, Address: 0x1ed683c, Func Offset: 0x3c
	// Line 92, Address: 0x1ed6850, Func Offset: 0x50
	// Line 94, Address: 0x1ed6858, Func Offset: 0x58
	// Line 95, Address: 0x1ed6864, Func Offset: 0x64
	// Line 98, Address: 0x1ed6870, Func Offset: 0x70
	// Line 100, Address: 0x1ed687c, Func Offset: 0x7c
	// Line 102, Address: 0x1ed6884, Func Offset: 0x84
	// Line 104, Address: 0x1ed688c, Func Offset: 0x8c
	// Line 105, Address: 0x1ed6898, Func Offset: 0x98
	// Func End, Address: 0x1ed68a8, Func Offset: 0xa8
	// Line 823, Address: 0x1ed6800, Func Offset: 0
	// Line 828, Address: 0x1ed6820, Func Offset: 0x20
	// Line 829, Address: 0x1ed682c, Func Offset: 0x2c
	// Line 830, Address: 0x1ed6838, Func Offset: 0x38
	// Line 831, Address: 0x1ed6840, Func Offset: 0x40
	// Line 832, Address: 0x1ed684c, Func Offset: 0x4c
	// Line 834, Address: 0x1ed6878, Func Offset: 0x78
	// Line 836, Address: 0x1ed689c, Func Offset: 0x9c
	// Line 837, Address: 0x1ed68a8, Func Offset: 0xa8
	// Line 838, Address: 0x1ed68b4, Func Offset: 0xb4
	// Line 839, Address: 0x1ed68c0, Func Offset: 0xc0
	// Line 840, Address: 0x1ed68c8, Func Offset: 0xc8
	// Line 841, Address: 0x1ed68d0, Func Offset: 0xd0
	// Line 843, Address: 0x1ed68d8, Func Offset: 0xd8
	// Line 845, Address: 0x1ed6900, Func Offset: 0x100
	// Line 846, Address: 0x1ed6908, Func Offset: 0x108
	// Line 847, Address: 0x1ed6910, Func Offset: 0x110
	// Line 851, Address: 0x1ed691c, Func Offset: 0x11c
	// Line 852, Address: 0x1ed6920, Func Offset: 0x120
	// Line 853, Address: 0x1ed6940, Func Offset: 0x140
	// Line 852, Address: 0x1ed6944, Func Offset: 0x144
	// Line 853, Address: 0x1ed6948, Func Offset: 0x148
	// Line 855, Address: 0x1ed6964, Func Offset: 0x164
	// Line 856, Address: 0x1ed6978, Func Offset: 0x178
	// Line 858, Address: 0x1ed698c, Func Offset: 0x18c
	// Line 859, Address: 0x1ed6998, Func Offset: 0x198
	// Line 860, Address: 0x1ed69ac, Func Offset: 0x1ac
	// Line 861, Address: 0x1ed69b0, Func Offset: 0x1b0
	// Line 862, Address: 0x1ed69dc, Func Offset: 0x1dc
	// Line 864, Address: 0x1ed69e8, Func Offset: 0x1e8
	// Line 863, Address: 0x1ed69ec, Func Offset: 0x1ec
	// Line 864, Address: 0x1ed69f8, Func Offset: 0x1f8
	// Line 863, Address: 0x1ed6a08, Func Offset: 0x208
	// Line 864, Address: 0x1ed6a0c, Func Offset: 0x20c
	// Line 865, Address: 0x1ed6a14, Func Offset: 0x214
	// Line 866, Address: 0x1ed6a24, Func Offset: 0x224
	// Line 867, Address: 0x1ed6a30, Func Offset: 0x230
	// Line 868, Address: 0x1ed6a4c, Func Offset: 0x24c
	// Line 869, Address: 0x1ed6a50, Func Offset: 0x250
	// Line 868, Address: 0x1ed6a54, Func Offset: 0x254
	// Line 869, Address: 0x1ed6a58, Func Offset: 0x258
	// Line 870, Address: 0x1ed6a94, Func Offset: 0x294
	// Line 871, Address: 0x1ed6aac, Func Offset: 0x2ac
	// Line 872, Address: 0x1ed6ab8, Func Offset: 0x2b8
	// Line 873, Address: 0x1ed6ac0, Func Offset: 0x2c0
	// Line 876, Address: 0x1ed6af0, Func Offset: 0x2f0
	// Line 877, Address: 0x1ed6af8, Func Offset: 0x2f8
	// Line 878, Address: 0x1ed6b00, Func Offset: 0x300
	// Line 880, Address: 0x1ed6b0c, Func Offset: 0x30c
	// Line 881, Address: 0x1ed6b18, Func Offset: 0x318
	// Line 882, Address: 0x1ed6b1c, Func Offset: 0x31c
	// Line 883, Address: 0x1ed6b20, Func Offset: 0x320
	// Line 884, Address: 0x1ed6b44, Func Offset: 0x344
	// Line 887, Address: 0x1ed6b50, Func Offset: 0x350
	// Func End, Address: 0x1ed6b74, Func Offset: 0x374
}

// 
// Start address: 0x1ed6b80
void EnemyKillerLastControlBlowI(sfObj* obj)
{
	EnemyKillerLastWork* ew;
	float vec[4];
	float dt;
	float d;
	// Line 891, Address: 0x1ed6b80, Func Offset: 0
	// Line 895, Address: 0x1ed6b94, Func Offset: 0x14
	// Line 896, Address: 0x1ed6b9c, Func Offset: 0x1c
	// Line 897, Address: 0x1ed6ba8, Func Offset: 0x28
	// Line 898, Address: 0x1ed6bcc, Func Offset: 0x4c
	// Line 899, Address: 0x1ed6bd0, Func Offset: 0x50
	// Line 900, Address: 0x1ed6bdc, Func Offset: 0x5c
	// Line 901, Address: 0x1ed6be4, Func Offset: 0x64
	// Line 902, Address: 0x1ed6bec, Func Offset: 0x6c
	// Line 903, Address: 0x1ed6bf8, Func Offset: 0x78
	// Line 905, Address: 0x1ed6bfc, Func Offset: 0x7c
	// Line 903, Address: 0x1ed6c00, Func Offset: 0x80
	// Line 904, Address: 0x1ed6c04, Func Offset: 0x84
	// Line 905, Address: 0x1ed6c08, Func Offset: 0x88
	// Line 906, Address: 0x1ed6c10, Func Offset: 0x90
	// Line 908, Address: 0x1ed6c18, Func Offset: 0x98
	// Line 909, Address: 0x1ed6c38, Func Offset: 0xb8
	// Line 911, Address: 0x1ed6c58, Func Offset: 0xd8
	// Line 909, Address: 0x1ed6c5c, Func Offset: 0xdc
	// Line 911, Address: 0x1ed6c60, Func Offset: 0xe0
	// Line 914, Address: 0x1ed6ca4, Func Offset: 0x124
	// Line 915, Address: 0x1ed6ca8, Func Offset: 0x128
	// Line 917, Address: 0x1ed6cc4, Func Offset: 0x144
	// Line 919, Address: 0x1ed6cd8, Func Offset: 0x158
	// Line 920, Address: 0x1ed6ce4, Func Offset: 0x164
	// Line 925, Address: 0x1ed6ce8, Func Offset: 0x168
	// Line 926, Address: 0x1ed6d08, Func Offset: 0x188
	// Line 927, Address: 0x1ed6d10, Func Offset: 0x190
	// Line 928, Address: 0x1ed6d14, Func Offset: 0x194
	// Line 929, Address: 0x1ed6d18, Func Offset: 0x198
	// Line 930, Address: 0x1ed6d28, Func Offset: 0x1a8
	// Line 932, Address: 0x1ed6d54, Func Offset: 0x1d4
	// Line 933, Address: 0x1ed6d68, Func Offset: 0x1e8
	// Line 934, Address: 0x1ed6d80, Func Offset: 0x200
	// Line 935, Address: 0x1ed6d88, Func Offset: 0x208
	// Line 936, Address: 0x1ed6d90, Func Offset: 0x210
	// Line 937, Address: 0x1ed6da0, Func Offset: 0x220
	// Line 938, Address: 0x1ed6dbc, Func Offset: 0x23c
	// Line 939, Address: 0x1ed6dc4, Func Offset: 0x244
	// Line 940, Address: 0x1ed6dd0, Func Offset: 0x250
	// Line 945, Address: 0x1ed6ddc, Func Offset: 0x25c
	// Line 946, Address: 0x1ed6de0, Func Offset: 0x260
	// Func End, Address: 0x1ed6df8, Func Offset: 0x278
}

// 
// Start address: 0x1ed6e00
void EnemyKillerLastControlEvent1(sfObj* obj)
{
	EnemyKillerLastWork* ew;
	// Line 950, Address: 0x1ed6e00, Func Offset: 0
	// Line 952, Address: 0x1ed6e10, Func Offset: 0x10
	// Line 953, Address: 0x1ed6e1c, Func Offset: 0x1c
	// Line 955, Address: 0x1ed6e48, Func Offset: 0x48
	// Line 956, Address: 0x1ed6e54, Func Offset: 0x54
	// Line 957, Address: 0x1ed6e60, Func Offset: 0x60
	// Line 958, Address: 0x1ed6e6c, Func Offset: 0x6c
	// Line 959, Address: 0x1ed6e74, Func Offset: 0x74
	// Line 960, Address: 0x1ed6e7c, Func Offset: 0x7c
	// Line 961, Address: 0x1ed6e84, Func Offset: 0x84
	// Line 962, Address: 0x1ed6e88, Func Offset: 0x88
	// Line 963, Address: 0x1ed6e94, Func Offset: 0x94
	// Line 964, Address: 0x1ed6e9c, Func Offset: 0x9c
	// Line 965, Address: 0x1ed6ea0, Func Offset: 0xa0
	// Line 966, Address: 0x1ed6ec4, Func Offset: 0xc4
	// Line 967, Address: 0x1ed6ed0, Func Offset: 0xd0
	// Line 968, Address: 0x1ed6edc, Func Offset: 0xdc
	// Line 970, Address: 0x1ed6ee4, Func Offset: 0xe4
	// Line 971, Address: 0x1ed6eec, Func Offset: 0xec
	// Line 972, Address: 0x1ed6ef0, Func Offset: 0xf0
	// Line 976, Address: 0x1ed6f08, Func Offset: 0x108
	// Func End, Address: 0x1ed6f1c, Func Offset: 0x11c
}

// 
// Start address: 0x1ed6f20
void EnemyKillerLastControlEvent2(sfObj* obj)
{
	EnemyKillerLastWork* ew;
	float vec[4];
	float d;
	// Line 2445, Address: 0x1ed6f20, Func Offset: 0
	// Line 2451, Address: 0x1ed6f24, Func Offset: 0x4
	// Line 2445, Address: 0x1ed6f28, Func Offset: 0x8
	// Line 2451, Address: 0x1ed6f2c, Func Offset: 0xc
	// Line 2445, Address: 0x1ed6f30, Func Offset: 0x10
	// Line 2447, Address: 0x1ed6f38, Func Offset: 0x18
	// Line 2445, Address: 0x1ed6f3c, Func Offset: 0x1c
	// Line 2447, Address: 0x1ed6f40, Func Offset: 0x20
	// Line 2451, Address: 0x1ed6f44, Func Offset: 0x24
	// Line 2452, Address: 0x1ed6f4c, Func Offset: 0x2c
	// Line 2454, Address: 0x1ed6f60, Func Offset: 0x40
	// Line 2456, Address: 0x1ed6f74, Func Offset: 0x54
	// Line 2458, Address: 0x1ed6f84, Func Offset: 0x64
	// Line 2459, Address: 0x1ed6f9c, Func Offset: 0x7c
	// Line 2461, Address: 0x1ed6fa4, Func Offset: 0x84
	// Line 2462, Address: 0x1ed6fbc, Func Offset: 0x9c
	// Line 2468, Address: 0x1ed6fc8, Func Offset: 0xa8
	// Line 2470, Address: 0x1ed6fd8, Func Offset: 0xb8
	// Line 2471, Address: 0x1ed6fe0, Func Offset: 0xc0
	// Line 2473, Address: 0x1ed6fec, Func Offset: 0xcc
	// Line 2474, Address: 0x1ed6ff8, Func Offset: 0xd8
	// Line 2475, Address: 0x1ed7004, Func Offset: 0xe4
	// Line 2478, Address: 0x1ed7008, Func Offset: 0xe8
	// Line 2479, Address: 0x1ed7014, Func Offset: 0xf4
	// Line 2482, Address: 0x1ed7020, Func Offset: 0x100
	// Line 2479, Address: 0x1ed7028, Func Offset: 0x108
	// Line 2482, Address: 0x1ed702c, Func Offset: 0x10c
	// Line 2483, Address: 0x1ed7034, Func Offset: 0x114
	// Line 2485, Address: 0x1ed7038, Func Offset: 0x118
	// Line 2486, Address: 0x1ed7040, Func Offset: 0x120
	// Func End, Address: 0x1ed705c, Func Offset: 0x13c
	// Line 980, Address: 0x1ed6f20, Func Offset: 0
	// Line 982, Address: 0x1ed6f30, Func Offset: 0x10
	// Line 983, Address: 0x1ed6f3c, Func Offset: 0x1c
	// Line 984, Address: 0x1ed6f74, Func Offset: 0x54
	// Line 985, Address: 0x1ed6f78, Func Offset: 0x58
	// Line 986, Address: 0x1ed6f84, Func Offset: 0x64
	// Line 988, Address: 0x1ed6fb0, Func Offset: 0x90
	// Line 989, Address: 0x1ed6fbc, Func Offset: 0x9c
	// Line 990, Address: 0x1ed6fc8, Func Offset: 0xa8
	// Line 989, Address: 0x1ed6fcc, Func Offset: 0xac
	// Line 990, Address: 0x1ed6fd0, Func Offset: 0xb0
	// Line 989, Address: 0x1ed6fd4, Func Offset: 0xb4
	// Line 990, Address: 0x1ed6fe0, Func Offset: 0xc0
	// Line 991, Address: 0x1ed6fe8, Func Offset: 0xc8
	// Line 993, Address: 0x1ed6ff0, Func Offset: 0xd0
	// Line 994, Address: 0x1ed6ffc, Func Offset: 0xdc
	// Line 995, Address: 0x1ed7004, Func Offset: 0xe4
	// Line 996, Address: 0x1ed700c, Func Offset: 0xec
	// Line 997, Address: 0x1ed7014, Func Offset: 0xf4
	// Line 998, Address: 0x1ed7020, Func Offset: 0x100
	// Line 997, Address: 0x1ed7024, Func Offset: 0x104
	// Line 998, Address: 0x1ed7030, Func Offset: 0x110
	// Line 999, Address: 0x1ed7038, Func Offset: 0x118
	// Line 1001, Address: 0x1ed7040, Func Offset: 0x120
	// Line 1002, Address: 0x1ed7050, Func Offset: 0x130
	// Line 1003, Address: 0x1ed7058, Func Offset: 0x138
	// Line 1005, Address: 0x1ed7060, Func Offset: 0x140
	// Line 1007, Address: 0x1ed7068, Func Offset: 0x148
	// Line 1008, Address: 0x1ed708c, Func Offset: 0x16c
	// Line 1009, Address: 0x1ed7098, Func Offset: 0x178
	// Line 1010, Address: 0x1ed70a4, Func Offset: 0x184
	// Line 1012, Address: 0x1ed70ac, Func Offset: 0x18c
	// Line 1013, Address: 0x1ed70b4, Func Offset: 0x194
	// Line 1014, Address: 0x1ed70b8, Func Offset: 0x198
	// Line 1015, Address: 0x1ed70c8, Func Offset: 0x1a8
	// Line 1017, Address: 0x1ed70e8, Func Offset: 0x1c8
	// Line 1018, Address: 0x1ed70f0, Func Offset: 0x1d0
	// Line 1021, Address: 0x1ed70f8, Func Offset: 0x1d8
	// Line 1023, Address: 0x1ed7124, Func Offset: 0x204
	// Line 1024, Address: 0x1ed7138, Func Offset: 0x218
	// Line 1025, Address: 0x1ed7150, Func Offset: 0x230
	// Line 1026, Address: 0x1ed7158, Func Offset: 0x238
	// Line 1027, Address: 0x1ed7160, Func Offset: 0x240
	// Line 1032, Address: 0x1ed716c, Func Offset: 0x24c
	// Line 1033, Address: 0x1ed7170, Func Offset: 0x250
	// Func End, Address: 0x1ed7184, Func Offset: 0x264
}

// 
// Start address: 0x1ed7190
void EnemyKillerLastControlEvent3(sfObj* obj)
{
	EnemyKillerLastWork* ew;
	// Line 1037, Address: 0x1ed7190, Func Offset: 0
	// Line 1039, Address: 0x1ed71a0, Func Offset: 0x10
	// Line 1040, Address: 0x1ed71ac, Func Offset: 0x1c
	// Line 1042, Address: 0x1ed71d8, Func Offset: 0x48
	// Line 1043, Address: 0x1ed71e4, Func Offset: 0x54
	// Line 1044, Address: 0x1ed71ec, Func Offset: 0x5c
	// Line 1045, Address: 0x1ed71f4, Func Offset: 0x64
	// Line 1046, Address: 0x1ed71fc, Func Offset: 0x6c
	// Line 1047, Address: 0x1ed7204, Func Offset: 0x74
	// Line 1048, Address: 0x1ed7218, Func Offset: 0x88
	// Line 1047, Address: 0x1ed721c, Func Offset: 0x8c
	// Line 1048, Address: 0x1ed722c, Func Offset: 0x9c
	// Line 1049, Address: 0x1ed7240, Func Offset: 0xb0
	// Line 1050, Address: 0x1ed7248, Func Offset: 0xb8
	// Line 1051, Address: 0x1ed7250, Func Offset: 0xc0
	// Line 1052, Address: 0x1ed7264, Func Offset: 0xd4
	// Line 1053, Address: 0x1ed726c, Func Offset: 0xdc
	// Line 1054, Address: 0x1ed7274, Func Offset: 0xe4
	// Line 1055, Address: 0x1ed7278, Func Offset: 0xe8
	// Line 1056, Address: 0x1ed7284, Func Offset: 0xf4
	// Line 1057, Address: 0x1ed728c, Func Offset: 0xfc
	// Line 1058, Address: 0x1ed7294, Func Offset: 0x104
	// Line 1059, Address: 0x1ed7298, Func Offset: 0x108
	// Line 1060, Address: 0x1ed72a8, Func Offset: 0x118
	// Line 1061, Address: 0x1ed72b0, Func Offset: 0x120
	// Line 1063, Address: 0x1ed72b8, Func Offset: 0x128
	// Line 1065, Address: 0x1ed72c0, Func Offset: 0x130
	// Line 1066, Address: 0x1ed72e4, Func Offset: 0x154
	// Line 1067, Address: 0x1ed72f0, Func Offset: 0x160
	// Line 1068, Address: 0x1ed72fc, Func Offset: 0x16c
	// Line 1070, Address: 0x1ed7304, Func Offset: 0x174
	// Line 1071, Address: 0x1ed730c, Func Offset: 0x17c
	// Line 1072, Address: 0x1ed7310, Func Offset: 0x180
	// Line 1073, Address: 0x1ed7320, Func Offset: 0x190
	// Line 1074, Address: 0x1ed7334, Func Offset: 0x1a4
	// Line 1075, Address: 0x1ed7348, Func Offset: 0x1b8
	// Line 1077, Address: 0x1ed7350, Func Offset: 0x1c0
	// Line 1079, Address: 0x1ed7358, Func Offset: 0x1c8
	// Line 1080, Address: 0x1ed7368, Func Offset: 0x1d8
	// Line 1081, Address: 0x1ed7370, Func Offset: 0x1e0
	// Line 1083, Address: 0x1ed7378, Func Offset: 0x1e8
	// Line 1085, Address: 0x1ed7380, Func Offset: 0x1f0
	// Line 1086, Address: 0x1ed73a4, Func Offset: 0x214
	// Line 1087, Address: 0x1ed73b0, Func Offset: 0x220
	// Line 1088, Address: 0x1ed73bc, Func Offset: 0x22c
	// Line 1092, Address: 0x1ed73c8, Func Offset: 0x238
	// Func End, Address: 0x1ed73dc, Func Offset: 0x24c
}

// 
// Start address: 0x1ed73e0
void EnemyKillerLastControlApproach(sfObj* obj)
{
	EnemyKillerLastWork* ew;
	float* pos;
	float* ppos;
	float tpos[4];
	float rot[4];
	float dt;
	float d;
	// Line 468, Address: 0x1ed73e0, Func Offset: 0
	// Line 469, Address: 0x1ed73f0, Func Offset: 0x10
	// Line 470, Address: 0x1ed73f8, Func Offset: 0x18
	// Line 473, Address: 0x1ed7400, Func Offset: 0x20
	// Line 474, Address: 0x1ed7408, Func Offset: 0x28
	// Func End, Address: 0x1ed7418, Func Offset: 0x38
	// Line 1096, Address: 0x1ed73e0, Func Offset: 0
	// Line 1102, Address: 0x1ed73fc, Func Offset: 0x1c
	// Line 1103, Address: 0x1ed7408, Func Offset: 0x28
	// Line 1104, Address: 0x1ed7414, Func Offset: 0x34
	// Line 1105, Address: 0x1ed7420, Func Offset: 0x40
	// Line 1106, Address: 0x1ed7428, Func Offset: 0x48
	// Line 1107, Address: 0x1ed7434, Func Offset: 0x54
	// Line 1109, Address: 0x1ed7458, Func Offset: 0x78
	// Line 1110, Address: 0x1ed7464, Func Offset: 0x84
	// Line 1111, Address: 0x1ed746c, Func Offset: 0x8c
	// Line 1112, Address: 0x1ed7474, Func Offset: 0x94
	// Line 1113, Address: 0x1ed7480, Func Offset: 0xa0
	// Line 1114, Address: 0x1ed7488, Func Offset: 0xa8
	// Line 1117, Address: 0x1ed7490, Func Offset: 0xb0
	// Line 1118, Address: 0x1ed7498, Func Offset: 0xb8
	// Line 1119, Address: 0x1ed74a4, Func Offset: 0xc4
	// Line 1120, Address: 0x1ed74a8, Func Offset: 0xc8
	// Line 1119, Address: 0x1ed74ac, Func Offset: 0xcc
	// Line 1120, Address: 0x1ed74b4, Func Offset: 0xd4
	// Line 1121, Address: 0x1ed74c4, Func Offset: 0xe4
	// Line 1122, Address: 0x1ed74d4, Func Offset: 0xf4
	// Line 1123, Address: 0x1ed74d8, Func Offset: 0xf8
	// Line 1124, Address: 0x1ed74ec, Func Offset: 0x10c
	// Line 1125, Address: 0x1ed74f8, Func Offset: 0x118
	// Line 1126, Address: 0x1ed751c, Func Offset: 0x13c
	// Line 1127, Address: 0x1ed7524, Func Offset: 0x144
	// Line 1128, Address: 0x1ed753c, Func Offset: 0x15c
	// Line 1129, Address: 0x1ed7544, Func Offset: 0x164
	// Line 1130, Address: 0x1ed7564, Func Offset: 0x184
	// Line 1134, Address: 0x1ed756c, Func Offset: 0x18c
	// Line 1135, Address: 0x1ed7570, Func Offset: 0x190
	// Func End, Address: 0x1ed7590, Func Offset: 0x1b0
}

// 
// Start address: 0x1ed7590
void EnemyKillerLastControlAttack(sfObj* obj)
{
	EnemyKillerLastWork* ew;
	float* pos;
	float* ppos;
	float vec[4];
	float dt;
	float d;
	float df;
	int sf;
	int ef;
	sfCldPart* pcp;
	_anon1* psp;
	// Line 1139, Address: 0x1ed7590, Func Offset: 0
	// Line 1145, Address: 0x1ed75b4, Func Offset: 0x24
	// Line 1146, Address: 0x1ed75c0, Func Offset: 0x30
	// Line 1147, Address: 0x1ed75cc, Func Offset: 0x3c
	// Line 1148, Address: 0x1ed75d4, Func Offset: 0x44
	// Line 1149, Address: 0x1ed75e0, Func Offset: 0x50
	// Line 1150, Address: 0x1ed760c, Func Offset: 0x7c
	// Line 1151, Address: 0x1ed7610, Func Offset: 0x80
	// Line 1152, Address: 0x1ed761c, Func Offset: 0x8c
	// Line 1153, Address: 0x1ed7624, Func Offset: 0x94
	// Line 1154, Address: 0x1ed762c, Func Offset: 0x9c
	// Line 1155, Address: 0x1ed7644, Func Offset: 0xb4
	// Line 1156, Address: 0x1ed7654, Func Offset: 0xc4
	// Line 1157, Address: 0x1ed7668, Func Offset: 0xd8
	// Line 1160, Address: 0x1ed76c0, Func Offset: 0x130
	// Line 1161, Address: 0x1ed76c8, Func Offset: 0x138
	// Line 1162, Address: 0x1ed76cc, Func Offset: 0x13c
	// Line 1163, Address: 0x1ed76d8, Func Offset: 0x148
	// Line 1164, Address: 0x1ed76e4, Func Offset: 0x154
	// Line 1165, Address: 0x1ed76ec, Func Offset: 0x15c
	// Line 1166, Address: 0x1ed76f0, Func Offset: 0x160
	// Line 1167, Address: 0x1ed76fc, Func Offset: 0x16c
	// Line 1168, Address: 0x1ed7704, Func Offset: 0x174
	// Line 1170, Address: 0x1ed770c, Func Offset: 0x17c
	// Line 1171, Address: 0x1ed7710, Func Offset: 0x180
	// Line 1174, Address: 0x1ed7724, Func Offset: 0x194
	// Line 1175, Address: 0x1ed7730, Func Offset: 0x1a0
	// Line 1176, Address: 0x1ed7734, Func Offset: 0x1a4
	// Line 1178, Address: 0x1ed7738, Func Offset: 0x1a8
	// Line 1179, Address: 0x1ed7758, Func Offset: 0x1c8
	// Line 1186, Address: 0x1ed7798, Func Offset: 0x208
	// Line 1187, Address: 0x1ed77a8, Func Offset: 0x218
	// Line 1189, Address: 0x1ed77c0, Func Offset: 0x230
	// Line 1190, Address: 0x1ed77d8, Func Offset: 0x248
	// Line 1191, Address: 0x1ed77dc, Func Offset: 0x24c
	// Line 1192, Address: 0x1ed77e0, Func Offset: 0x250
	// Line 1191, Address: 0x1ed77e4, Func Offset: 0x254
	// Line 1194, Address: 0x1ed77e8, Func Offset: 0x258
	// Line 1192, Address: 0x1ed77ec, Func Offset: 0x25c
	// Line 1194, Address: 0x1ed77f0, Func Offset: 0x260
	// Line 1191, Address: 0x1ed77f4, Func Offset: 0x264
	// Line 1194, Address: 0x1ed77f8, Func Offset: 0x268
	// Line 1195, Address: 0x1ed7800, Func Offset: 0x270
	// Line 1197, Address: 0x1ed7814, Func Offset: 0x284
	// Line 1199, Address: 0x1ed7820, Func Offset: 0x290
	// Line 1203, Address: 0x1ed7830, Func Offset: 0x2a0
	// Line 1204, Address: 0x1ed7844, Func Offset: 0x2b4
	// Line 1205, Address: 0x1ed7850, Func Offset: 0x2c0
	// Line 1206, Address: 0x1ed7858, Func Offset: 0x2c8
	// Line 1208, Address: 0x1ed785c, Func Offset: 0x2cc
	// Line 1209, Address: 0x1ed7860, Func Offset: 0x2d0
	// Line 1210, Address: 0x1ed7878, Func Offset: 0x2e8
	// Line 1211, Address: 0x1ed7880, Func Offset: 0x2f0
	// Line 1212, Address: 0x1ed7890, Func Offset: 0x300
	// Line 1213, Address: 0x1ed78a0, Func Offset: 0x310
	// Line 1214, Address: 0x1ed78a8, Func Offset: 0x318
	// Line 1216, Address: 0x1ed78c4, Func Offset: 0x334
	// Line 1217, Address: 0x1ed78cc, Func Offset: 0x33c
	// Line 1218, Address: 0x1ed7914, Func Offset: 0x384
	// Line 1219, Address: 0x1ed791c, Func Offset: 0x38c
	// Line 1220, Address: 0x1ed7940, Func Offset: 0x3b0
	// Line 1221, Address: 0x1ed7948, Func Offset: 0x3b8
	// Line 1222, Address: 0x1ed7964, Func Offset: 0x3d4
	// Line 1223, Address: 0x1ed796c, Func Offset: 0x3dc
	// Line 1225, Address: 0x1ed79a8, Func Offset: 0x418
	// Line 1226, Address: 0x1ed79b4, Func Offset: 0x424
	// Line 1227, Address: 0x1ed79c0, Func Offset: 0x430
	// Line 1231, Address: 0x1ed79cc, Func Offset: 0x43c
	// Line 1232, Address: 0x1ed79d0, Func Offset: 0x440
	// Line 1234, Address: 0x1ed79f0, Func Offset: 0x460
	// Func End, Address: 0x1ed7a18, Func Offset: 0x488
}

// 
// Start address: 0x1ed7a20
void EnemyKillerLastControlReady(sfObj* obj)
{
	EnemyKillerLastWork* ew;
	float* pos;
	float* ppos;
	float rot[4];
	float vec[4];
	float dt;
	float d;
	float df;
	int f;
	int ns;
	// Line 1238, Address: 0x1ed7a20, Func Offset: 0
	// Line 1245, Address: 0x1ed7a40, Func Offset: 0x20
	// Line 1246, Address: 0x1ed7a4c, Func Offset: 0x2c
	// Line 1247, Address: 0x1ed7a58, Func Offset: 0x38
	// Line 1248, Address: 0x1ed7a64, Func Offset: 0x44
	// Line 1249, Address: 0x1ed7a70, Func Offset: 0x50
	// Line 1250, Address: 0x1ed7a7c, Func Offset: 0x5c
	// Line 1252, Address: 0x1ed7aa8, Func Offset: 0x88
	// Line 1253, Address: 0x1ed7ab8, Func Offset: 0x98
	// Line 1254, Address: 0x1ed7ac0, Func Offset: 0xa0
	// Line 1256, Address: 0x1ed7ac8, Func Offset: 0xa8
	// Line 1257, Address: 0x1ed7ad4, Func Offset: 0xb4
	// Line 1258, Address: 0x1ed7adc, Func Offset: 0xbc
	// Line 1259, Address: 0x1ed7ae8, Func Offset: 0xc8
	// Line 1260, Address: 0x1ed7af0, Func Offset: 0xd0
	// Line 1261, Address: 0x1ed7af8, Func Offset: 0xd8
	// Line 1263, Address: 0x1ed7b04, Func Offset: 0xe4
	// Line 1264, Address: 0x1ed7b10, Func Offset: 0xf0
	// Line 1266, Address: 0x1ed7b18, Func Offset: 0xf8
	// Line 1268, Address: 0x1ed7b38, Func Offset: 0x118
	// Line 1269, Address: 0x1ed7b44, Func Offset: 0x124
	// Line 1270, Address: 0x1ed7b54, Func Offset: 0x134
	// Line 1271, Address: 0x1ed7b5c, Func Offset: 0x13c
	// Line 1272, Address: 0x1ed7b68, Func Offset: 0x148
	// Line 1273, Address: 0x1ed7b70, Func Offset: 0x150
	// Line 1277, Address: 0x1ed7bd8, Func Offset: 0x1b8
	// Line 1278, Address: 0x1ed7be4, Func Offset: 0x1c4
	// Line 1280, Address: 0x1ed7be8, Func Offset: 0x1c8
	// Line 1282, Address: 0x1ed7bf4, Func Offset: 0x1d4
	// Line 1283, Address: 0x1ed7bfc, Func Offset: 0x1dc
	// Line 1284, Address: 0x1ed7c00, Func Offset: 0x1e0
	// Line 1285, Address: 0x1ed7c20, Func Offset: 0x200
	// Line 1287, Address: 0x1ed7c3c, Func Offset: 0x21c
	// Line 1293, Address: 0x1ed7cb0, Func Offset: 0x290
	// Line 1294, Address: 0x1ed7cb8, Func Offset: 0x298
	// Line 1295, Address: 0x1ed7cc4, Func Offset: 0x2a4
	// Line 1296, Address: 0x1ed7cd0, Func Offset: 0x2b0
	// Line 1299, Address: 0x1ed7cd8, Func Offset: 0x2b8
	// Line 1300, Address: 0x1ed7ce4, Func Offset: 0x2c4
	// Line 1304, Address: 0x1ed7d04, Func Offset: 0x2e4
	// Line 1303, Address: 0x1ed7d08, Func Offset: 0x2e8
	// Line 1304, Address: 0x1ed7d0c, Func Offset: 0x2ec
	// Line 1305, Address: 0x1ed7d1c, Func Offset: 0x2fc
	// Line 1306, Address: 0x1ed7d20, Func Offset: 0x300
	// Line 1307, Address: 0x1ed7d3c, Func Offset: 0x31c
	// Line 1308, Address: 0x1ed7d44, Func Offset: 0x324
	// Line 1309, Address: 0x1ed7d4c, Func Offset: 0x32c
	// Line 1310, Address: 0x1ed7d50, Func Offset: 0x330
	// Line 1311, Address: 0x1ed7d68, Func Offset: 0x348
	// Line 1312, Address: 0x1ed7d78, Func Offset: 0x358
	// Line 1316, Address: 0x1ed7dd4, Func Offset: 0x3b4
	// Line 1317, Address: 0x1ed7ddc, Func Offset: 0x3bc
	// Line 1318, Address: 0x1ed7de0, Func Offset: 0x3c0
	// Line 1319, Address: 0x1ed7dfc, Func Offset: 0x3dc
	// Line 1320, Address: 0x1ed7e04, Func Offset: 0x3e4
	// Line 1321, Address: 0x1ed7e10, Func Offset: 0x3f0
	// Line 1322, Address: 0x1ed7e1c, Func Offset: 0x3fc
	// Line 1323, Address: 0x1ed7e24, Func Offset: 0x404
	// Line 1324, Address: 0x1ed7e28, Func Offset: 0x408
	// Line 1325, Address: 0x1ed7e3c, Func Offset: 0x41c
	// Line 1327, Address: 0x1ed7e58, Func Offset: 0x438
	// Line 1328, Address: 0x1ed7e60, Func Offset: 0x440
	// Line 1329, Address: 0x1ed7e6c, Func Offset: 0x44c
	// Line 1330, Address: 0x1ed7e78, Func Offset: 0x458
	// Line 1332, Address: 0x1ed7e80, Func Offset: 0x460
	// Line 1333, Address: 0x1ed7e8c, Func Offset: 0x46c
	// Line 1332, Address: 0x1ed7e90, Func Offset: 0x470
	// Line 1333, Address: 0x1ed7e94, Func Offset: 0x474
	// Line 1335, Address: 0x1ed7eac, Func Offset: 0x48c
	// Line 1336, Address: 0x1ed7ed4, Func Offset: 0x4b4
	// Line 1337, Address: 0x1ed7edc, Func Offset: 0x4bc
	// Line 1338, Address: 0x1ed7ee8, Func Offset: 0x4c8
	// Line 1339, Address: 0x1ed7ef4, Func Offset: 0x4d4
	// Line 1341, Address: 0x1ed7efc, Func Offset: 0x4dc
	// Line 1344, Address: 0x1ed7f00, Func Offset: 0x4e0
	// Line 1346, Address: 0x1ed7f08, Func Offset: 0x4e8
	// Line 1347, Address: 0x1ed7f14, Func Offset: 0x4f4
	// Line 1348, Address: 0x1ed7f24, Func Offset: 0x504
	// Line 1350, Address: 0x1ed7f28, Func Offset: 0x508
	// Line 1348, Address: 0x1ed7f2c, Func Offset: 0x50c
	// Line 1350, Address: 0x1ed7f34, Func Offset: 0x514
	// Line 1351, Address: 0x1ed7f3c, Func Offset: 0x51c
	// Line 1352, Address: 0x1ed7f44, Func Offset: 0x524
	// Line 1353, Address: 0x1ed7f48, Func Offset: 0x528
	// Line 1354, Address: 0x1ed7f5c, Func Offset: 0x53c
	// Line 1355, Address: 0x1ed7f68, Func Offset: 0x548
	// Line 1357, Address: 0x1ed7f70, Func Offset: 0x550
	// Line 1358, Address: 0x1ed7f7c, Func Offset: 0x55c
	// Line 1359, Address: 0x1ed7f88, Func Offset: 0x568
	// Line 1360, Address: 0x1ed7fac, Func Offset: 0x58c
	// Line 1361, Address: 0x1ed7fb8, Func Offset: 0x598
	// Line 1366, Address: 0x1ed7fc4, Func Offset: 0x5a4
	// Line 1367, Address: 0x1ed7fc8, Func Offset: 0x5a8
	// Line 1370, Address: 0x1ed7fe8, Func Offset: 0x5c8
	// Line 1372, Address: 0x1ed7ff0, Func Offset: 0x5d0
	// Line 1374, Address: 0x1ed8010, Func Offset: 0x5f0
	// Line 1375, Address: 0x1ed8024, Func Offset: 0x604
	// Line 1376, Address: 0x1ed802c, Func Offset: 0x60c
	// Line 1375, Address: 0x1ed8030, Func Offset: 0x610
	// Line 1376, Address: 0x1ed8034, Func Offset: 0x614
	// Line 1378, Address: 0x1ed804c, Func Offset: 0x62c
	// Line 1379, Address: 0x1ed8074, Func Offset: 0x654
	// Line 1380, Address: 0x1ed8080, Func Offset: 0x660
	// Line 1383, Address: 0x1ed8088, Func Offset: 0x668
	// Line 1385, Address: 0x1ed808c, Func Offset: 0x66c
	// Line 1386, Address: 0x1ed8090, Func Offset: 0x670
	// Line 1387, Address: 0x1ed80a0, Func Offset: 0x680
	// Line 1388, Address: 0x1ed80b4, Func Offset: 0x694
	// Line 1389, Address: 0x1ed80bc, Func Offset: 0x69c
	// Line 1390, Address: 0x1ed80c8, Func Offset: 0x6a8
	// Line 1391, Address: 0x1ed80d4, Func Offset: 0x6b4
	// Line 1392, Address: 0x1ed80dc, Func Offset: 0x6bc
	// Line 1393, Address: 0x1ed80e0, Func Offset: 0x6c0
	// Line 1394, Address: 0x1ed80f8, Func Offset: 0x6d8
	// Line 1396, Address: 0x1ed8110, Func Offset: 0x6f0
	// Line 1399, Address: 0x1ed8194, Func Offset: 0x774
	// Line 1401, Address: 0x1ed8198, Func Offset: 0x778
	// Line 1403, Address: 0x1ed81a8, Func Offset: 0x788
	// Line 1407, Address: 0x1ed8200, Func Offset: 0x7e0
	// Line 1408, Address: 0x1ed8224, Func Offset: 0x804
	// Line 1409, Address: 0x1ed822c, Func Offset: 0x80c
	// Line 1410, Address: 0x1ed8238, Func Offset: 0x818
	// Line 1411, Address: 0x1ed8240, Func Offset: 0x820
	// Line 1413, Address: 0x1ed8244, Func Offset: 0x824
	// Line 1415, Address: 0x1ed8268, Func Offset: 0x848
	// Line 1416, Address: 0x1ed8270, Func Offset: 0x850
	// Line 1417, Address: 0x1ed8274, Func Offset: 0x854
	// Line 1418, Address: 0x1ed8278, Func Offset: 0x858
	// Line 1419, Address: 0x1ed8284, Func Offset: 0x864
	// Line 1420, Address: 0x1ed828c, Func Offset: 0x86c
	// Line 1422, Address: 0x1ed8298, Func Offset: 0x878
	// Line 1424, Address: 0x1ed82a4, Func Offset: 0x884
	// Line 1429, Address: 0x1ed82ac, Func Offset: 0x88c
	// Line 1430, Address: 0x1ed82b0, Func Offset: 0x890
	// Line 1432, Address: 0x1ed82d0, Func Offset: 0x8b0
	// Line 1434, Address: 0x1ed82dc, Func Offset: 0x8bc
	// Line 1435, Address: 0x1ed82e0, Func Offset: 0x8c0
	// Line 1436, Address: 0x1ed82fc, Func Offset: 0x8dc
	// Line 1437, Address: 0x1ed832c, Func Offset: 0x90c
	// Line 1438, Address: 0x1ed8330, Func Offset: 0x910
	// Line 1439, Address: 0x1ed833c, Func Offset: 0x91c
	// Line 1440, Address: 0x1ed8344, Func Offset: 0x924
	// Line 1441, Address: 0x1ed8348, Func Offset: 0x928
	// Line 1442, Address: 0x1ed8358, Func Offset: 0x938
	// Line 1443, Address: 0x1ed8370, Func Offset: 0x950
	// Line 1445, Address: 0x1ed8390, Func Offset: 0x970
	// Line 1446, Address: 0x1ed8398, Func Offset: 0x978
	// Line 1447, Address: 0x1ed83a0, Func Offset: 0x980
	// Line 1449, Address: 0x1ed83ac, Func Offset: 0x98c
	// Line 1450, Address: 0x1ed83b8, Func Offset: 0x998
	// Line 1452, Address: 0x1ed83c4, Func Offset: 0x9a4
	// Line 1453, Address: 0x1ed83cc, Func Offset: 0x9ac
	// Line 1454, Address: 0x1ed83d0, Func Offset: 0x9b0
	// Line 1455, Address: 0x1ed83dc, Func Offset: 0x9bc
	// Line 1456, Address: 0x1ed83e4, Func Offset: 0x9c4
	// Line 1457, Address: 0x1ed83e8, Func Offset: 0x9c8
	// Line 1458, Address: 0x1ed83f4, Func Offset: 0x9d4
	// Line 1459, Address: 0x1ed83fc, Func Offset: 0x9dc
	// Line 1460, Address: 0x1ed8400, Func Offset: 0x9e0
	// Line 1461, Address: 0x1ed8418, Func Offset: 0x9f8
	// Line 1462, Address: 0x1ed8430, Func Offset: 0xa10
	// Line 1463, Address: 0x1ed8444, Func Offset: 0xa24
	// Line 1464, Address: 0x1ed844c, Func Offset: 0xa2c
	// Line 1465, Address: 0x1ed8468, Func Offset: 0xa48
	// Line 1466, Address: 0x1ed8470, Func Offset: 0xa50
	// Line 1467, Address: 0x1ed8478, Func Offset: 0xa58
	// Line 1469, Address: 0x1ed8484, Func Offset: 0xa64
	// Line 1470, Address: 0x1ed848c, Func Offset: 0xa6c
	// Line 1471, Address: 0x1ed8490, Func Offset: 0xa70
	// Line 1472, Address: 0x1ed84a0, Func Offset: 0xa80
	// Line 1473, Address: 0x1ed84b8, Func Offset: 0xa98
	// Line 1474, Address: 0x1ed84c8, Func Offset: 0xaa8
	// Line 1475, Address: 0x1ed84d0, Func Offset: 0xab0
	// Line 1476, Address: 0x1ed84d8, Func Offset: 0xab8
	// Line 1478, Address: 0x1ed84e4, Func Offset: 0xac4
	// Line 1479, Address: 0x1ed8500, Func Offset: 0xae0
	// Line 1480, Address: 0x1ed8508, Func Offset: 0xae8
	// Line 1481, Address: 0x1ed8510, Func Offset: 0xaf0
	// Line 1486, Address: 0x1ed851c, Func Offset: 0xafc
	// Line 1487, Address: 0x1ed8520, Func Offset: 0xb00
	// Func End, Address: 0x1ed8544, Func Offset: 0xb24
}

// 
// Start address: 0x1ed8550
void EnemyKillerLastControlBlow(sfObj* obj)
{
	EnemyKillerLastWork* ew;
	float dt;
	// Line 697, Address: 0x1ed8550, Func Offset: 0
	// Line 698, Address: 0x1ed855c, Func Offset: 0xc
	// Line 701, Address: 0x1ed8568, Func Offset: 0x18
	// Line 698, Address: 0x1ed856c, Func Offset: 0x1c
	// Line 701, Address: 0x1ed857c, Func Offset: 0x2c
	// Line 702, Address: 0x1ed8588, Func Offset: 0x38
	// Line 703, Address: 0x1ed8594, Func Offset: 0x44
	// Line 704, Address: 0x1ed85a4, Func Offset: 0x54
	// Line 707, Address: 0x1ed85ac, Func Offset: 0x5c
	// Line 708, Address: 0x1ed85c0, Func Offset: 0x70
	// Line 709, Address: 0x1ed85c8, Func Offset: 0x78
	// Func End, Address: 0x1ed85d8, Func Offset: 0x88
	// Line 1491, Address: 0x1ed8550, Func Offset: 0
	// Line 1494, Address: 0x1ed8564, Func Offset: 0x14
	// Line 1495, Address: 0x1ed856c, Func Offset: 0x1c
	// Line 1496, Address: 0x1ed8578, Func Offset: 0x28
	// Line 1497, Address: 0x1ed85a4, Func Offset: 0x54
	// Line 1498, Address: 0x1ed85a8, Func Offset: 0x58
	// Line 1499, Address: 0x1ed85b4, Func Offset: 0x64
	// Line 1500, Address: 0x1ed85bc, Func Offset: 0x6c
	// Line 1501, Address: 0x1ed85c4, Func Offset: 0x74
	// Line 1502, Address: 0x1ed85d0, Func Offset: 0x80
	// Line 1504, Address: 0x1ed85d4, Func Offset: 0x84
	// Line 1502, Address: 0x1ed85d8, Func Offset: 0x88
	// Line 1503, Address: 0x1ed85dc, Func Offset: 0x8c
	// Line 1504, Address: 0x1ed85e0, Func Offset: 0x90
	// Line 1505, Address: 0x1ed85e8, Func Offset: 0x98
	// Line 1508, Address: 0x1ed85f0, Func Offset: 0xa0
	// Line 1509, Address: 0x1ed8610, Func Offset: 0xc0
	// Line 1511, Address: 0x1ed8630, Func Offset: 0xe0
	// Line 1509, Address: 0x1ed8634, Func Offset: 0xe4
	// Line 1511, Address: 0x1ed8638, Func Offset: 0xe8
	// Line 1514, Address: 0x1ed867c, Func Offset: 0x12c
	// Line 1515, Address: 0x1ed8680, Func Offset: 0x130
	// Line 1517, Address: 0x1ed869c, Func Offset: 0x14c
	// Line 1518, Address: 0x1ed86b0, Func Offset: 0x160
	// Line 1520, Address: 0x1ed86b8, Func Offset: 0x168
	// Line 1521, Address: 0x1ed86c8, Func Offset: 0x178
	// Line 1522, Address: 0x1ed86d8, Func Offset: 0x188
	// Line 1523, Address: 0x1ed86dc, Func Offset: 0x18c
	// Line 1524, Address: 0x1ed86e8, Func Offset: 0x198
	// Line 1529, Address: 0x1ed86ec, Func Offset: 0x19c
	// Line 1530, Address: 0x1ed86f0, Func Offset: 0x1a0
	// Line 1531, Address: 0x1ed8710, Func Offset: 0x1c0
	// Line 1532, Address: 0x1ed8718, Func Offset: 0x1c8
	// Line 1533, Address: 0x1ed871c, Func Offset: 0x1cc
	// Line 1534, Address: 0x1ed8720, Func Offset: 0x1d0
	// Line 1535, Address: 0x1ed8730, Func Offset: 0x1e0
	// Line 1536, Address: 0x1ed8744, Func Offset: 0x1f4
	// Line 1537, Address: 0x1ed874c, Func Offset: 0x1fc
	// Line 1539, Address: 0x1ed8798, Func Offset: 0x248
	// Line 1540, Address: 0x1ed87a0, Func Offset: 0x250
	// Line 1541, Address: 0x1ed87a8, Func Offset: 0x258
	// Line 1545, Address: 0x1ed87b4, Func Offset: 0x264
	// Line 1546, Address: 0x1ed87b8, Func Offset: 0x268
	// Func End, Address: 0x1ed87d0, Func Offset: 0x280
}

// 
// Start address: 0x1ed87d0
void EnemyKillerLastControlDash(sfObj* obj)
{
	EnemyKillerLastWork* ew;
	float* pos;
	float* ppos;
	float tpos[4];
	float vec[4];
	float rot[4];
	float dt;
	float d;
	// Line 1550, Address: 0x1ed87d0, Func Offset: 0
	// Line 1556, Address: 0x1ed87f0, Func Offset: 0x20
	// Line 1557, Address: 0x1ed87fc, Func Offset: 0x2c
	// Line 1558, Address: 0x1ed8808, Func Offset: 0x38
	// Line 1559, Address: 0x1ed8814, Func Offset: 0x44
	// Line 1560, Address: 0x1ed881c, Func Offset: 0x4c
	// Line 1561, Address: 0x1ed8828, Func Offset: 0x58
	// Line 1563, Address: 0x1ed8860, Func Offset: 0x90
	// Line 1564, Address: 0x1ed8870, Func Offset: 0xa0
	// Line 1566, Address: 0x1ed889c, Func Offset: 0xcc
	// Line 1567, Address: 0x1ed88b0, Func Offset: 0xe0
	// Line 1568, Address: 0x1ed88b8, Func Offset: 0xe8
	// Line 1569, Address: 0x1ed88c0, Func Offset: 0xf0
	// Line 1570, Address: 0x1ed88cc, Func Offset: 0xfc
	// Line 1571, Address: 0x1ed88d0, Func Offset: 0x100
	// Line 1573, Address: 0x1ed88d8, Func Offset: 0x108
	// Line 1574, Address: 0x1ed88e4, Func Offset: 0x114
	// Line 1575, Address: 0x1ed88ec, Func Offset: 0x11c
	// Line 1576, Address: 0x1ed88f4, Func Offset: 0x124
	// Line 1577, Address: 0x1ed8900, Func Offset: 0x130
	// Line 1579, Address: 0x1ed8908, Func Offset: 0x138
	// Line 1581, Address: 0x1ed8914, Func Offset: 0x144
	// Line 1582, Address: 0x1ed8918, Func Offset: 0x148
	// Line 1583, Address: 0x1ed8920, Func Offset: 0x150
	// Line 1584, Address: 0x1ed892c, Func Offset: 0x15c
	// Line 1585, Address: 0x1ed8930, Func Offset: 0x160
	// Line 1584, Address: 0x1ed8934, Func Offset: 0x164
	// Line 1585, Address: 0x1ed893c, Func Offset: 0x16c
	// Line 1586, Address: 0x1ed894c, Func Offset: 0x17c
	// Line 1587, Address: 0x1ed895c, Func Offset: 0x18c
	// Line 1589, Address: 0x1ed8960, Func Offset: 0x190
	// Line 1588, Address: 0x1ed8964, Func Offset: 0x194
	// Line 1589, Address: 0x1ed8968, Func Offset: 0x198
	// Line 1588, Address: 0x1ed8974, Func Offset: 0x1a4
	// Line 1589, Address: 0x1ed8978, Func Offset: 0x1a8
	// Line 1590, Address: 0x1ed8980, Func Offset: 0x1b0
	// Line 1591, Address: 0x1ed898c, Func Offset: 0x1bc
	// Line 1593, Address: 0x1ed89b0, Func Offset: 0x1e0
	// Line 1594, Address: 0x1ed89c4, Func Offset: 0x1f4
	// Line 1595, Address: 0x1ed89d4, Func Offset: 0x204
	// Line 1596, Address: 0x1ed89ec, Func Offset: 0x21c
	// Line 1597, Address: 0x1ed8a08, Func Offset: 0x238
	// Line 1598, Address: 0x1ed8a10, Func Offset: 0x240
	// Line 1599, Address: 0x1ed8a1c, Func Offset: 0x24c
	// Line 1601, Address: 0x1ed8a20, Func Offset: 0x250
	// Line 1599, Address: 0x1ed8a24, Func Offset: 0x254
	// Line 1600, Address: 0x1ed8a28, Func Offset: 0x258
	// Line 1601, Address: 0x1ed8a2c, Func Offset: 0x25c
	// Line 1602, Address: 0x1ed8a34, Func Offset: 0x264
	// Line 1604, Address: 0x1ed8a54, Func Offset: 0x284
	// Line 1605, Address: 0x1ed8a5c, Func Offset: 0x28c
	// Line 1606, Address: 0x1ed8a60, Func Offset: 0x290
	// Line 1611, Address: 0x1ed8a68, Func Offset: 0x298
	// Line 1612, Address: 0x1ed8a8c, Func Offset: 0x2bc
	// Line 1613, Address: 0x1ed8aa0, Func Offset: 0x2d0
	// Line 1614, Address: 0x1ed8aa8, Func Offset: 0x2d8
	// Line 1615, Address: 0x1ed8adc, Func Offset: 0x30c
	// Line 1617, Address: 0x1ed8ae8, Func Offset: 0x318
	// Line 1618, Address: 0x1ed8b08, Func Offset: 0x338
	// Line 1620, Address: 0x1ed8b2c, Func Offset: 0x35c
	// Line 1618, Address: 0x1ed8b30, Func Offset: 0x360
	// Line 1620, Address: 0x1ed8b34, Func Offset: 0x364
	// Line 1624, Address: 0x1ed8b78, Func Offset: 0x3a8
	// Line 1626, Address: 0x1ed8b94, Func Offset: 0x3c4
	// Line 1627, Address: 0x1ed8ba8, Func Offset: 0x3d8
	// Line 1628, Address: 0x1ed8bb0, Func Offset: 0x3e0
	// Line 1629, Address: 0x1ed8bb4, Func Offset: 0x3e4
	// Line 1630, Address: 0x1ed8bc4, Func Offset: 0x3f4
	// Line 1631, Address: 0x1ed8bc8, Func Offset: 0x3f8
	// Line 1632, Address: 0x1ed8bd0, Func Offset: 0x400
	// Line 1637, Address: 0x1ed8bd4, Func Offset: 0x404
	// Line 1638, Address: 0x1ed8bd8, Func Offset: 0x408
	// Line 1639, Address: 0x1ed8bf8, Func Offset: 0x428
	// Line 1640, Address: 0x1ed8c00, Func Offset: 0x430
	// Line 1641, Address: 0x1ed8c04, Func Offset: 0x434
	// Line 1642, Address: 0x1ed8c08, Func Offset: 0x438
	// Line 1643, Address: 0x1ed8c18, Func Offset: 0x448
	// Line 1644, Address: 0x1ed8c34, Func Offset: 0x464
	// Line 1645, Address: 0x1ed8c48, Func Offset: 0x478
	// Line 1646, Address: 0x1ed8c50, Func Offset: 0x480
	// Line 1647, Address: 0x1ed8c58, Func Offset: 0x488
	// Line 1649, Address: 0x1ed8c64, Func Offset: 0x494
	// Line 1650, Address: 0x1ed8c70, Func Offset: 0x4a0
	// Line 1651, Address: 0x1ed8c74, Func Offset: 0x4a4
	// Line 1652, Address: 0x1ed8c78, Func Offset: 0x4a8
	// Line 1654, Address: 0x1ed8c80, Func Offset: 0x4b0
	// Line 1656, Address: 0x1ed8c88, Func Offset: 0x4b8
	// Line 1657, Address: 0x1ed8cb8, Func Offset: 0x4e8
	// Line 1658, Address: 0x1ed8ccc, Func Offset: 0x4fc
	// Line 1659, Address: 0x1ed8ce4, Func Offset: 0x514
	// Line 1660, Address: 0x1ed8cf4, Func Offset: 0x524
	// Line 1663, Address: 0x1ed8d34, Func Offset: 0x564
	// Line 1664, Address: 0x1ed8d3c, Func Offset: 0x56c
	// Line 1665, Address: 0x1ed8d5c, Func Offset: 0x58c
	// Line 1666, Address: 0x1ed8d64, Func Offset: 0x594
	// Line 1667, Address: 0x1ed8d70, Func Offset: 0x5a0
	// Line 1669, Address: 0x1ed8d7c, Func Offset: 0x5ac
	// Line 1670, Address: 0x1ed8d80, Func Offset: 0x5b0
	// Line 1672, Address: 0x1ed8d88, Func Offset: 0x5b8
	// Line 1673, Address: 0x1ed8d9c, Func Offset: 0x5cc
	// Line 1674, Address: 0x1ed8dc0, Func Offset: 0x5f0
	// Line 1677, Address: 0x1ed8dc8, Func Offset: 0x5f8
	// Func End, Address: 0x1ed8dec, Func Offset: 0x61c
}

// 
// Start address: 0x1ed8df0
void EnemyKillerLastControlCaution(sfObj* obj)
{
	EnemyKillerLastWork* ew;
	float* pos;
	float* ppos;
	float tpos[4];
	float vec[4];
	float rot[4];
	float dt;
	float d;
	float df;
	// Line 1681, Address: 0x1ed8df0, Func Offset: 0
	// Line 1687, Address: 0x1ed8e0c, Func Offset: 0x1c
	// Line 1688, Address: 0x1ed8e18, Func Offset: 0x28
	// Line 1689, Address: 0x1ed8e24, Func Offset: 0x34
	// Line 1690, Address: 0x1ed8e30, Func Offset: 0x40
	// Line 1691, Address: 0x1ed8e38, Func Offset: 0x48
	// Line 1692, Address: 0x1ed8e44, Func Offset: 0x54
	// Line 1694, Address: 0x1ed8e68, Func Offset: 0x78
	// Line 1695, Address: 0x1ed8e74, Func Offset: 0x84
	// Line 1696, Address: 0x1ed8e7c, Func Offset: 0x8c
	// Line 1697, Address: 0x1ed8e90, Func Offset: 0xa0
	// Line 1698, Address: 0x1ed8e98, Func Offset: 0xa8
	// Line 1700, Address: 0x1ed8ea0, Func Offset: 0xb0
	// Line 1701, Address: 0x1ed8ea8, Func Offset: 0xb8
	// Line 1702, Address: 0x1ed8eb4, Func Offset: 0xc4
	// Line 1703, Address: 0x1ed8ebc, Func Offset: 0xcc
	// Line 1705, Address: 0x1ed8ec4, Func Offset: 0xd4
	// Line 1706, Address: 0x1ed8ec8, Func Offset: 0xd8
	// Line 1707, Address: 0x1ed8ed0, Func Offset: 0xe0
	// Line 1708, Address: 0x1ed8edc, Func Offset: 0xec
	// Line 1709, Address: 0x1ed8ee0, Func Offset: 0xf0
	// Line 1708, Address: 0x1ed8ee4, Func Offset: 0xf4
	// Line 1709, Address: 0x1ed8eec, Func Offset: 0xfc
	// Line 1710, Address: 0x1ed8efc, Func Offset: 0x10c
	// Line 1711, Address: 0x1ed8f0c, Func Offset: 0x11c
	// Line 1712, Address: 0x1ed8f10, Func Offset: 0x120
	// Line 1713, Address: 0x1ed8f24, Func Offset: 0x134
	// Line 1714, Address: 0x1ed8f30, Func Offset: 0x140
	// Line 1715, Address: 0x1ed8f48, Func Offset: 0x158
	// Line 1716, Address: 0x1ed8f54, Func Offset: 0x164
	// Line 1717, Address: 0x1ed8f64, Func Offset: 0x174
	// Line 1718, Address: 0x1ed8f80, Func Offset: 0x190
	// Line 1719, Address: 0x1ed8f88, Func Offset: 0x198
	// Line 1720, Address: 0x1ed8fac, Func Offset: 0x1bc
	// Line 1721, Address: 0x1ed8fc8, Func Offset: 0x1d8
	// Line 1722, Address: 0x1ed8fd0, Func Offset: 0x1e0
	// Line 1723, Address: 0x1ed8fec, Func Offset: 0x1fc
	// Line 1724, Address: 0x1ed8ff4, Func Offset: 0x204
	// Line 1725, Address: 0x1ed9000, Func Offset: 0x210
	// Line 1729, Address: 0x1ed900c, Func Offset: 0x21c
	// Line 1730, Address: 0x1ed9010, Func Offset: 0x220
	// Func End, Address: 0x1ed9030, Func Offset: 0x240
}

// 
// Start address: 0x1ed9030
void set_interval_target(sfObj* obj)
{
	EnemyKillerLastWork* ew;
	float* pos;
	float* ppos;
	float tpos[4];
	float vec[4];
	float vec2[4];
	float nom[4];
	EnemyClHitResult* cres;
	float d;
	// Line 1734, Address: 0x1ed9030, Func Offset: 0
	// Line 1740, Address: 0x1ed9044, Func Offset: 0x14
	// Line 1741, Address: 0x1ed904c, Func Offset: 0x1c
	// Line 1742, Address: 0x1ed905c, Func Offset: 0x2c
	// Line 1743, Address: 0x1ed9064, Func Offset: 0x34
	// Line 1744, Address: 0x1ed907c, Func Offset: 0x4c
	// Line 1745, Address: 0x1ed9080, Func Offset: 0x50
	// Line 1744, Address: 0x1ed9084, Func Offset: 0x54
	// Line 1745, Address: 0x1ed9088, Func Offset: 0x58
	// Line 1746, Address: 0x1ed90c4, Func Offset: 0x94
	// Line 1747, Address: 0x1ed90f0, Func Offset: 0xc0
	// Line 1748, Address: 0x1ed9108, Func Offset: 0xd8
	// Line 1749, Address: 0x1ed9114, Func Offset: 0xe4
	// Line 1752, Address: 0x1ed9134, Func Offset: 0x104
	// Line 1753, Address: 0x1ed913c, Func Offset: 0x10c
	// Line 1754, Address: 0x1ed9168, Func Offset: 0x138
	// Line 1755, Address: 0x1ed9174, Func Offset: 0x144
	// Line 1756, Address: 0x1ed9194, Func Offset: 0x164
	// Line 1759, Address: 0x1ed91b4, Func Offset: 0x184
	// Line 1761, Address: 0x1ed91d4, Func Offset: 0x1a4
	// Line 1762, Address: 0x1ed91d8, Func Offset: 0x1a8
	// Line 1763, Address: 0x1ed91e8, Func Offset: 0x1b8
	// Line 1764, Address: 0x1ed91f0, Func Offset: 0x1c0
	// Func End, Address: 0x1ed9208, Func Offset: 0x1d8
}

// 
// Start address: 0x1ed9210
void EnemyKillerLastControlInterval(sfObj* obj)
{
	EnemyKillerLastWork* ew;
	float* pos;
	float tpos[4];
	float vec[4];
	float rot[4];
	float dt;
	float d;
	// Line 1768, Address: 0x1ed9210, Func Offset: 0
	// Line 1774, Address: 0x1ed922c, Func Offset: 0x1c
	// Line 1775, Address: 0x1ed9238, Func Offset: 0x28
	// Line 1776, Address: 0x1ed9244, Func Offset: 0x34
	// Line 1777, Address: 0x1ed9250, Func Offset: 0x40
	// Line 1778, Address: 0x1ed925c, Func Offset: 0x4c
	// Line 1779, Address: 0x1ed929c, Func Offset: 0x8c
	// Line 1780, Address: 0x1ed92a0, Func Offset: 0x90
	// Line 1781, Address: 0x1ed92a8, Func Offset: 0x98
	// Line 1782, Address: 0x1ed92b0, Func Offset: 0xa0
	// Line 1783, Address: 0x1ed92b8, Func Offset: 0xa8
	// Line 1784, Address: 0x1ed92c4, Func Offset: 0xb4
	// Line 1785, Address: 0x1ed92cc, Func Offset: 0xbc
	// Line 1787, Address: 0x1ed92d0, Func Offset: 0xc0
	// Line 1788, Address: 0x1ed92dc, Func Offset: 0xcc
	// Line 1790, Address: 0x1ed92e4, Func Offset: 0xd4
	// Line 1791, Address: 0x1ed92e8, Func Offset: 0xd8
	// Line 1802, Address: 0x1ed92f4, Func Offset: 0xe4
	// Line 1803, Address: 0x1ed92f8, Func Offset: 0xe8
	// Line 1802, Address: 0x1ed92fc, Func Offset: 0xec
	// Line 1803, Address: 0x1ed9304, Func Offset: 0xf4
	// Line 1804, Address: 0x1ed9314, Func Offset: 0x104
	// Line 1805, Address: 0x1ed9324, Func Offset: 0x114
	// Line 1807, Address: 0x1ed9328, Func Offset: 0x118
	// Line 1806, Address: 0x1ed932c, Func Offset: 0x11c
	// Line 1807, Address: 0x1ed9330, Func Offset: 0x120
	// Line 1806, Address: 0x1ed933c, Func Offset: 0x12c
	// Line 1807, Address: 0x1ed9340, Func Offset: 0x130
	// Line 1808, Address: 0x1ed9348, Func Offset: 0x138
	// Line 1809, Address: 0x1ed9354, Func Offset: 0x144
	// Line 1810, Address: 0x1ed9364, Func Offset: 0x154
	// Line 1811, Address: 0x1ed937c, Func Offset: 0x16c
	// Line 1812, Address: 0x1ed9384, Func Offset: 0x174
	// Line 1813, Address: 0x1ed938c, Func Offset: 0x17c
	// Line 1814, Address: 0x1ed9390, Func Offset: 0x180
	// Line 1815, Address: 0x1ed93a8, Func Offset: 0x198
	// Line 1816, Address: 0x1ed93ac, Func Offset: 0x19c
	// Line 1815, Address: 0x1ed93b8, Func Offset: 0x1a8
	// Line 1816, Address: 0x1ed93bc, Func Offset: 0x1ac
	// Line 1817, Address: 0x1ed93c8, Func Offset: 0x1b8
	// Line 1818, Address: 0x1ed93d4, Func Offset: 0x1c4
	// Line 1819, Address: 0x1ed93dc, Func Offset: 0x1cc
	// Line 1820, Address: 0x1ed93e0, Func Offset: 0x1d0
	// Line 1821, Address: 0x1ed93f0, Func Offset: 0x1e0
	// Line 1823, Address: 0x1ed9410, Func Offset: 0x200
	// Line 1824, Address: 0x1ed9420, Func Offset: 0x210
	// Line 1825, Address: 0x1ed9438, Func Offset: 0x228
	// Line 1826, Address: 0x1ed9440, Func Offset: 0x230
	// Line 1827, Address: 0x1ed944c, Func Offset: 0x23c
	// Line 1830, Address: 0x1ed9454, Func Offset: 0x244
	// Line 1831, Address: 0x1ed9458, Func Offset: 0x248
	// Line 1832, Address: 0x1ed946c, Func Offset: 0x25c
	// Line 1833, Address: 0x1ed9490, Func Offset: 0x280
	// Line 1836, Address: 0x1ed9498, Func Offset: 0x288
	// Line 1838, Address: 0x1ed94bc, Func Offset: 0x2ac
	// Line 1840, Address: 0x1ed94c4, Func Offset: 0x2b4
	// Line 1841, Address: 0x1ed94cc, Func Offset: 0x2bc
	// Line 1842, Address: 0x1ed94d0, Func Offset: 0x2c0
	// Line 1844, Address: 0x1ed94f0, Func Offset: 0x2e0
	// Line 1845, Address: 0x1ed94f8, Func Offset: 0x2e8
	// Line 1844, Address: 0x1ed94fc, Func Offset: 0x2ec
	// Line 1845, Address: 0x1ed9500, Func Offset: 0x2f0
	// Line 1846, Address: 0x1ed952c, Func Offset: 0x31c
	// Line 1847, Address: 0x1ed9534, Func Offset: 0x324
	// Line 1849, Address: 0x1ed953c, Func Offset: 0x32c
	// Line 1851, Address: 0x1ed9544, Func Offset: 0x334
	// Line 1852, Address: 0x1ed9548, Func Offset: 0x338
	// Line 1854, Address: 0x1ed9568, Func Offset: 0x358
	// Line 1855, Address: 0x1ed957c, Func Offset: 0x36c
	// Line 1856, Address: 0x1ed958c, Func Offset: 0x37c
	// Line 1858, Address: 0x1ed9594, Func Offset: 0x384
	// Line 1859, Address: 0x1ed95c4, Func Offset: 0x3b4
	// Line 1860, Address: 0x1ed95d0, Func Offset: 0x3c0
	// Line 1861, Address: 0x1ed95e8, Func Offset: 0x3d8
	// Line 1862, Address: 0x1ed95f0, Func Offset: 0x3e0
	// Line 1863, Address: 0x1ed9610, Func Offset: 0x400
	// Line 1864, Address: 0x1ed9618, Func Offset: 0x408
	// Line 1865, Address: 0x1ed9630, Func Offset: 0x420
	// Line 1866, Address: 0x1ed9638, Func Offset: 0x428
	// Line 1867, Address: 0x1ed9640, Func Offset: 0x430
	// Line 1871, Address: 0x1ed964c, Func Offset: 0x43c
	// Line 1872, Address: 0x1ed9650, Func Offset: 0x440
	// Func End, Address: 0x1ed9670, Func Offset: 0x460
}

// 
// Start address: 0x1ed9670
void EnemyKillerLastControlBackStep(sfObj* obj)
{
	EnemyKillerLastWork* ew;
	float dt;
	float d;
	// Line 1876, Address: 0x1ed9670, Func Offset: 0
	// Line 1879, Address: 0x1ed9684, Func Offset: 0x14
	// Line 1880, Address: 0x1ed968c, Func Offset: 0x1c
	// Line 1881, Address: 0x1ed9698, Func Offset: 0x28
	// Line 1882, Address: 0x1ed96c4, Func Offset: 0x54
	// Line 1883, Address: 0x1ed96c8, Func Offset: 0x58
	// Line 1884, Address: 0x1ed96d4, Func Offset: 0x64
	// Line 1885, Address: 0x1ed96dc, Func Offset: 0x6c
	// Line 1886, Address: 0x1ed96e4, Func Offset: 0x74
	// Line 1887, Address: 0x1ed96ec, Func Offset: 0x7c
	// Line 1888, Address: 0x1ed96f8, Func Offset: 0x88
	// Line 1889, Address: 0x1ed9700, Func Offset: 0x90
	// Line 1891, Address: 0x1ed9708, Func Offset: 0x98
	// Line 1892, Address: 0x1ed9728, Func Offset: 0xb8
	// Line 1893, Address: 0x1ed9730, Func Offset: 0xc0
	// Line 1894, Address: 0x1ed9738, Func Offset: 0xc8
	// Line 1898, Address: 0x1ed9740, Func Offset: 0xd0
	// Line 1899, Address: 0x1ed975c, Func Offset: 0xec
	// Line 1900, Address: 0x1ed9764, Func Offset: 0xf4
	// Line 1903, Address: 0x1ed9798, Func Offset: 0x128
	// Line 1904, Address: 0x1ed97a0, Func Offset: 0x130
	// Line 1905, Address: 0x1ed97ac, Func Offset: 0x13c
	// Line 1906, Address: 0x1ed97b4, Func Offset: 0x144
	// Line 1907, Address: 0x1ed97bc, Func Offset: 0x14c
	// Line 1908, Address: 0x1ed97c8, Func Offset: 0x158
	// Line 1910, Address: 0x1ed97d0, Func Offset: 0x160
	// Line 1911, Address: 0x1ed97e0, Func Offset: 0x170
	// Line 1913, Address: 0x1ed9808, Func Offset: 0x198
	// Line 1915, Address: 0x1ed9828, Func Offset: 0x1b8
	// Line 1916, Address: 0x1ed9830, Func Offset: 0x1c0
	// Line 1917, Address: 0x1ed983c, Func Offset: 0x1cc
	// Line 1918, Address: 0x1ed9844, Func Offset: 0x1d4
	// Line 1919, Address: 0x1ed984c, Func Offset: 0x1dc
	// Line 1920, Address: 0x1ed9858, Func Offset: 0x1e8
	// Line 1922, Address: 0x1ed9860, Func Offset: 0x1f0
	// Line 1923, Address: 0x1ed9878, Func Offset: 0x208
	// Line 1924, Address: 0x1ed9880, Func Offset: 0x210
	// Line 1925, Address: 0x1ed9888, Func Offset: 0x218
	// Line 1927, Address: 0x1ed98b8, Func Offset: 0x248
	// Line 1929, Address: 0x1ed98c8, Func Offset: 0x258
	// Line 1930, Address: 0x1ed98d0, Func Offset: 0x260
	// Line 1931, Address: 0x1ed98d8, Func Offset: 0x268
	// Line 1933, Address: 0x1ed98e4, Func Offset: 0x274
	// Line 1934, Address: 0x1ed98ec, Func Offset: 0x27c
	// Line 1935, Address: 0x1ed98f0, Func Offset: 0x280
	// Line 1936, Address: 0x1ed98fc, Func Offset: 0x28c
	// Line 1937, Address: 0x1ed990c, Func Offset: 0x29c
	// Line 1938, Address: 0x1ed9914, Func Offset: 0x2a4
	// Line 1939, Address: 0x1ed991c, Func Offset: 0x2ac
	// Line 1940, Address: 0x1ed9938, Func Offset: 0x2c8
	// Line 1941, Address: 0x1ed9940, Func Offset: 0x2d0
	// Line 1942, Address: 0x1ed9948, Func Offset: 0x2d8
	// Line 1943, Address: 0x1ed9960, Func Offset: 0x2f0
	// Line 1944, Address: 0x1ed9968, Func Offset: 0x2f8
	// Line 1945, Address: 0x1ed9980, Func Offset: 0x310
	// Line 1946, Address: 0x1ed9988, Func Offset: 0x318
	// Line 1947, Address: 0x1ed9994, Func Offset: 0x324
	// Line 1948, Address: 0x1ed99bc, Func Offset: 0x34c
	// Line 1949, Address: 0x1ed99c0, Func Offset: 0x350
	// Line 1951, Address: 0x1ed99cc, Func Offset: 0x35c
	// Line 1952, Address: 0x1ed99d4, Func Offset: 0x364
	// Line 1953, Address: 0x1ed99d8, Func Offset: 0x368
	// Line 1954, Address: 0x1ed99ec, Func Offset: 0x37c
	// Line 1957, Address: 0x1ed99f4, Func Offset: 0x384
	// Line 1958, Address: 0x1ed99f8, Func Offset: 0x388
	// Line 1961, Address: 0x1ed9a20, Func Offset: 0x3b0
	// Line 1962, Address: 0x1ed9a30, Func Offset: 0x3c0
	// Line 1963, Address: 0x1ed9a44, Func Offset: 0x3d4
	// Line 1964, Address: 0x1ed9a4c, Func Offset: 0x3dc
	// Line 1965, Address: 0x1ed9a58, Func Offset: 0x3e8
	// Line 1966, Address: 0x1ed9a64, Func Offset: 0x3f4
	// Line 1967, Address: 0x1ed9a90, Func Offset: 0x420
	// Line 1969, Address: 0x1ed9a98, Func Offset: 0x428
	// Line 1970, Address: 0x1ed9aa4, Func Offset: 0x434
	// Line 1972, Address: 0x1ed9ab0, Func Offset: 0x440
	// Line 1974, Address: 0x1ed9ab8, Func Offset: 0x448
	// Line 1975, Address: 0x1ed9ad4, Func Offset: 0x464
	// Line 1976, Address: 0x1ed9ae4, Func Offset: 0x474
	// Line 1977, Address: 0x1ed9aec, Func Offset: 0x47c
	// Line 1978, Address: 0x1ed9af8, Func Offset: 0x488
	// Line 1981, Address: 0x1ed9b04, Func Offset: 0x494
	// Line 1982, Address: 0x1ed9b0c, Func Offset: 0x49c
	// Line 1983, Address: 0x1ed9b10, Func Offset: 0x4a0
	// Line 1985, Address: 0x1ed9b30, Func Offset: 0x4c0
	// Line 1986, Address: 0x1ed9b4c, Func Offset: 0x4dc
	// Line 1987, Address: 0x1ed9b58, Func Offset: 0x4e8
	// Line 1991, Address: 0x1ed9b64, Func Offset: 0x4f4
	// Line 1992, Address: 0x1ed9b68, Func Offset: 0x4f8
	// Func End, Address: 0x1ed9b80, Func Offset: 0x510
}

// 
// Start address: 0x1ed9b80
void EnemyKillerLastControlDamage(sfObj* obj)
{
	// Line 1996, Address: 0x1ed9b80, Func Offset: 0
	// Line 1998, Address: 0x1ed9b8c, Func Offset: 0xc
	// Line 1999, Address: 0x1ed9b94, Func Offset: 0x14
	// Line 2000, Address: 0x1ed9bcc, Func Offset: 0x4c
	// Line 2001, Address: 0x1ed9bd0, Func Offset: 0x50
	// Line 2002, Address: 0x1ed9bf4, Func Offset: 0x74
	// Line 2004, Address: 0x1ed9bfc, Func Offset: 0x7c
	// Line 2005, Address: 0x1ed9c04, Func Offset: 0x84
	// Line 2006, Address: 0x1ed9c08, Func Offset: 0x88
	// Line 2007, Address: 0x1ed9c2c, Func Offset: 0xac
	// Line 2008, Address: 0x1ed9c34, Func Offset: 0xb4
	// Line 2010, Address: 0x1ed9c3c, Func Offset: 0xbc
	// Line 2011, Address: 0x1ed9c44, Func Offset: 0xc4
	// Line 2012, Address: 0x1ed9c48, Func Offset: 0xc8
	// Line 2013, Address: 0x1ed9c5c, Func Offset: 0xdc
	// Line 2014, Address: 0x1ed9c64, Func Offset: 0xe4
	// Line 2017, Address: 0x1ed9c6c, Func Offset: 0xec
	// Line 2018, Address: 0x1ed9c70, Func Offset: 0xf0
	// Line 2019, Address: 0x1ed9c80, Func Offset: 0x100
	// Line 2023, Address: 0x1ed9c88, Func Offset: 0x108
	// Func End, Address: 0x1ed9c98, Func Offset: 0x118
}

// 
// Start address: 0x1ed9ca0
void EnemyKillerLastControlFinish(sfObj* obj)
{
	EnemyKillerLastWork* ew;
	float* pos;
	float rot[4];
	float tpos[4];
	float dt;
	// Line 2027, Address: 0x1ed9ca0, Func Offset: 0
	// Line 2033, Address: 0x1ed9cb8, Func Offset: 0x18
	// Line 2034, Address: 0x1ed9cc4, Func Offset: 0x24
	// Line 2035, Address: 0x1ed9cd0, Func Offset: 0x30
	// Line 2036, Address: 0x1ed9cdc, Func Offset: 0x3c
	// Line 2037, Address: 0x1ed9ce8, Func Offset: 0x48
	// Line 2040, Address: 0x1ed9d20, Func Offset: 0x80
	// Line 2041, Address: 0x1ed9d28, Func Offset: 0x88
	// Line 2042, Address: 0x1ed9d30, Func Offset: 0x90
	// Line 2043, Address: 0x1ed9d3c, Func Offset: 0x9c
	// Line 2044, Address: 0x1ed9d48, Func Offset: 0xa8
	// Line 2045, Address: 0x1ed9d50, Func Offset: 0xb0
	// Line 2046, Address: 0x1ed9d54, Func Offset: 0xb4
	// Line 2050, Address: 0x1ed9d60, Func Offset: 0xc0
	// Line 2051, Address: 0x1ed9d6c, Func Offset: 0xcc
	// Line 2053, Address: 0x1ed9d8c, Func Offset: 0xec
	// Line 2054, Address: 0x1ed9d98, Func Offset: 0xf8
	// Line 2055, Address: 0x1ed9da8, Func Offset: 0x108
	// Line 2057, Address: 0x1ed9db0, Func Offset: 0x110
	// Line 2058, Address: 0x1ed9dd4, Func Offset: 0x134
	// Line 2059, Address: 0x1ed9ddc, Func Offset: 0x13c
	// Line 2060, Address: 0x1ed9de4, Func Offset: 0x144
	// Line 2062, Address: 0x1ed9df0, Func Offset: 0x150
	// Line 2064, Address: 0x1ed9df8, Func Offset: 0x158
	// Line 2065, Address: 0x1ed9e08, Func Offset: 0x168
	// Line 2066, Address: 0x1ed9e10, Func Offset: 0x170
	// Line 2067, Address: 0x1ed9e1c, Func Offset: 0x17c
	// Line 2068, Address: 0x1ed9e28, Func Offset: 0x188
	// Line 2072, Address: 0x1ed9e38, Func Offset: 0x198
	// Line 2073, Address: 0x1ed9e4c, Func Offset: 0x1ac
	// Line 2075, Address: 0x1ed9e6c, Func Offset: 0x1cc
	// Line 2077, Address: 0x1ed9e78, Func Offset: 0x1d8
	// Line 2078, Address: 0x1ed9e94, Func Offset: 0x1f4
	// Line 2080, Address: 0x1ed9ec0, Func Offset: 0x220
	// Line 2081, Address: 0x1ed9edc, Func Offset: 0x23c
	// Line 2082, Address: 0x1ed9ee0, Func Offset: 0x240
	// Func End, Address: 0x1ed9efc, Func Offset: 0x25c
}

// 
// Start address: 0x1ed9f00
void EnemyKillerLastControlDead(sfObj* obj)
{
	// Line 2086, Address: 0x1ed9f00, Func Offset: 0
	// Line 2087, Address: 0x1ed9f0c, Func Offset: 0xc
	// Line 2088, Address: 0x1ed9f1c, Func Offset: 0x1c
	// Line 2089, Address: 0x1ed9f24, Func Offset: 0x24
	// Line 2090, Address: 0x1ed9f2c, Func Offset: 0x2c
	// Line 2091, Address: 0x1ed9f30, Func Offset: 0x30
	// Func End, Address: 0x1ed9f40, Func Offset: 0x40
}

// 
// Start address: 0x1ed9f40
void EnemyKillerLastSetEventDamageCheck(sfObj* obj)
{
	// Line 2097, Address: 0x1ed9f40, Func Offset: 0
	// Line 2099, Address: 0x1ed9f4c, Func Offset: 0xc
	// Line 2100, Address: 0x1ed9f5c, Func Offset: 0x1c
	// Line 2101, Address: 0x1ed9f64, Func Offset: 0x24
	// Line 2102, Address: 0x1ed9f94, Func Offset: 0x54
	// Line 2103, Address: 0x1ed9f98, Func Offset: 0x58
	// Line 2115, Address: 0x1ed9fa8, Func Offset: 0x68
	// Line 2118, Address: 0x1ed9fc4, Func Offset: 0x84
	// Line 2119, Address: 0x1ed9fc8, Func Offset: 0x88
	// Func End, Address: 0x1ed9fd8, Func Offset: 0x98
}

// 
// Start address: 0x1ed9fe0
int EnemyKillerLastCheckWeaponHit(sfObj* obj)
{
	sfCldObject* po;
	// Line 2123, Address: 0x1ed9fe0, Func Offset: 0
	// Line 2125, Address: 0x1ed9fe8, Func Offset: 0x8
	// Line 2126, Address: 0x1ed9ff0, Func Offset: 0x10
	// Line 2127, Address: 0x1ed9ff8, Func Offset: 0x18
	// Line 2128, Address: 0x1eda00c, Func Offset: 0x2c
	// Line 2130, Address: 0x1eda014, Func Offset: 0x34
	// Line 2131, Address: 0x1eda018, Func Offset: 0x38
	// Line 2132, Address: 0x1eda020, Func Offset: 0x40
	// Func End, Address: 0x1eda02c, Func Offset: 0x4c
}

// 
// Start address: 0x1eda030
int EnemyKillerLastCheckBack(sfObj* obj)
{
	float pos[4];
	float vec[4];
	// Line 2136, Address: 0x1eda030, Func Offset: 0
	// Line 2138, Address: 0x1eda038, Func Offset: 0x8
	// Line 2136, Address: 0x1eda03c, Func Offset: 0xc
	// Line 2138, Address: 0x1eda040, Func Offset: 0x10
	// Line 2139, Address: 0x1eda048, Func Offset: 0x18
	// Line 2140, Address: 0x1eda054, Func Offset: 0x24
	// Line 2139, Address: 0x1eda058, Func Offset: 0x28
	// Line 2140, Address: 0x1eda05c, Func Offset: 0x2c
	// Line 2141, Address: 0x1eda070, Func Offset: 0x40
	// Line 2142, Address: 0x1eda098, Func Offset: 0x68
	// Line 2143, Address: 0x1eda0b8, Func Offset: 0x88
	// Line 2144, Address: 0x1eda0d0, Func Offset: 0xa0
	// Line 2146, Address: 0x1eda0d8, Func Offset: 0xa8
	// Line 2148, Address: 0x1eda0e0, Func Offset: 0xb0
	// Func End, Address: 0x1eda0f0, Func Offset: 0xc0
}

// 
// Start address: 0x1eda0f0
void EnemyEDKillerLastDamage(void* obj)
{
	EnemyKillerLastWork* ew;
	EnemyBattleDamage bd;
	int d;
	// Line 2153, Address: 0x1eda0f0, Func Offset: 0
	// Line 2157, Address: 0x1eda108, Func Offset: 0x18
	// Line 2158, Address: 0x1eda114, Func Offset: 0x24
	// Line 2159, Address: 0x1eda124, Func Offset: 0x34
	// Line 2158, Address: 0x1eda128, Func Offset: 0x38
	// Line 2159, Address: 0x1eda12c, Func Offset: 0x3c
	// Line 2162, Address: 0x1eda134, Func Offset: 0x44
	// Line 2164, Address: 0x1eda14c, Func Offset: 0x5c
	// Line 2165, Address: 0x1eda150, Func Offset: 0x60
	// Line 2164, Address: 0x1eda154, Func Offset: 0x64
	// Line 2165, Address: 0x1eda158, Func Offset: 0x68
	// Line 2166, Address: 0x1eda164, Func Offset: 0x74
	// Line 2169, Address: 0x1eda180, Func Offset: 0x90
	// Line 2170, Address: 0x1eda188, Func Offset: 0x98
	// Line 2171, Address: 0x1eda194, Func Offset: 0xa4
	// Line 2172, Address: 0x1eda1a4, Func Offset: 0xb4
	// Line 2173, Address: 0x1eda1b8, Func Offset: 0xc8
	// Line 2174, Address: 0x1eda1d4, Func Offset: 0xe4
	// Line 2177, Address: 0x1eda208, Func Offset: 0x118
	// Line 2180, Address: 0x1eda210, Func Offset: 0x120
	// Line 2181, Address: 0x1eda214, Func Offset: 0x124
	// Line 2182, Address: 0x1eda238, Func Offset: 0x148
	// Line 2184, Address: 0x1eda248, Func Offset: 0x158
	// Line 2185, Address: 0x1eda250, Func Offset: 0x160
	// Line 2188, Address: 0x1eda280, Func Offset: 0x190
	// Line 2194, Address: 0x1eda288, Func Offset: 0x198
	// Line 2196, Address: 0x1eda2a4, Func Offset: 0x1b4
	// Line 2197, Address: 0x1eda2a8, Func Offset: 0x1b8
	// Line 2198, Address: 0x1eda2c4, Func Offset: 0x1d4
	// Line 2199, Address: 0x1eda2cc, Func Offset: 0x1dc
	// Line 2200, Address: 0x1eda2e8, Func Offset: 0x1f8
	// Line 2201, Address: 0x1eda2f0, Func Offset: 0x200
	// Line 2202, Address: 0x1eda2f8, Func Offset: 0x208
	// Line 2203, Address: 0x1eda300, Func Offset: 0x210
	// Line 2205, Address: 0x1eda30c, Func Offset: 0x21c
	// Line 2206, Address: 0x1eda310, Func Offset: 0x220
	// Line 2207, Address: 0x1eda318, Func Offset: 0x228
	// Line 2208, Address: 0x1eda328, Func Offset: 0x238
	// Line 2209, Address: 0x1eda330, Func Offset: 0x240
	// Line 2210, Address: 0x1eda338, Func Offset: 0x248
	// Line 2211, Address: 0x1eda344, Func Offset: 0x254
	// Line 2212, Address: 0x1eda34c, Func Offset: 0x25c
	// Line 2213, Address: 0x1eda354, Func Offset: 0x264
	// Line 2215, Address: 0x1eda35c, Func Offset: 0x26c
	// Line 2216, Address: 0x1eda36c, Func Offset: 0x27c
	// Line 2217, Address: 0x1eda374, Func Offset: 0x284
	// Line 2218, Address: 0x1eda390, Func Offset: 0x2a0
	// Line 2219, Address: 0x1eda398, Func Offset: 0x2a8
	// Line 2221, Address: 0x1eda3a4, Func Offset: 0x2b4
	// Line 2222, Address: 0x1eda3a8, Func Offset: 0x2b8
	// Func End, Address: 0x1eda3c4, Func Offset: 0x2d4
}

// 
// Start address: 0x1eda3d0
void EnemyKillerLastRevival(sfObj* obj)
{
	float vec[4];
	float d;
	float df;
	// Line 2226, Address: 0x1eda3d0, Func Offset: 0
	// Line 2229, Address: 0x1eda3e8, Func Offset: 0x18
	// Line 2230, Address: 0x1eda3f0, Func Offset: 0x20
	// Line 2231, Address: 0x1eda400, Func Offset: 0x30
	// Line 2233, Address: 0x1eda42c, Func Offset: 0x5c
	// Line 2234, Address: 0x1eda444, Func Offset: 0x74
	// Line 2235, Address: 0x1eda45c, Func Offset: 0x8c
	// Line 2236, Address: 0x1eda46c, Func Offset: 0x9c
	// Line 2237, Address: 0x1eda474, Func Offset: 0xa4
	// Line 2238, Address: 0x1eda4a4, Func Offset: 0xd4
	// Line 2239, Address: 0x1eda4ac, Func Offset: 0xdc
	// Line 2240, Address: 0x1eda4b8, Func Offset: 0xe8
	// Line 2242, Address: 0x1eda4c4, Func Offset: 0xf4
	// Line 2244, Address: 0x1eda508, Func Offset: 0x138
	// Line 2245, Address: 0x1eda510, Func Offset: 0x140
	// Line 2246, Address: 0x1eda530, Func Offset: 0x160
	// Line 2247, Address: 0x1eda538, Func Offset: 0x168
	// Line 2248, Address: 0x1eda554, Func Offset: 0x184
	// Line 2249, Address: 0x1eda55c, Func Offset: 0x18c
	// Line 2250, Address: 0x1eda568, Func Offset: 0x198
	// Line 2251, Address: 0x1eda574, Func Offset: 0x1a4
	// Line 2252, Address: 0x1eda578, Func Offset: 0x1a8
	// Func End, Address: 0x1eda594, Func Offset: 0x1c4
}

// 
// Start address: 0x1eda5a0
void EnemyKillerBodyConstruct(sfObj* obj)
{
	EnemyKillerBodyWork* ew;
	// Line 2301, Address: 0x1eda5a0, Func Offset: 0
	// Line 2304, Address: 0x1eda5a4, Func Offset: 0x4
	// Line 2301, Address: 0x1eda5a8, Func Offset: 0x8
	// Line 2304, Address: 0x1eda5b4, Func Offset: 0x14
	// Line 2306, Address: 0x1eda5bc, Func Offset: 0x1c
	// Line 2308, Address: 0x1eda5c4, Func Offset: 0x24
	// Line 2309, Address: 0x1eda5d4, Func Offset: 0x34
	// Line 2311, Address: 0x1eda5e0, Func Offset: 0x40
	// Line 2312, Address: 0x1eda5f0, Func Offset: 0x50
	// Line 2315, Address: 0x1eda604, Func Offset: 0x64
	// Line 2316, Address: 0x1eda60c, Func Offset: 0x6c
	// Line 2317, Address: 0x1eda614, Func Offset: 0x74
	// Line 2318, Address: 0x1eda618, Func Offset: 0x78
	// Line 2319, Address: 0x1eda624, Func Offset: 0x84
	// Line 2322, Address: 0x1eda638, Func Offset: 0x98
	// Line 2326, Address: 0x1eda644, Func Offset: 0xa4
	// Line 2328, Address: 0x1eda648, Func Offset: 0xa8
	// Line 2326, Address: 0x1eda64c, Func Offset: 0xac
	// Line 2330, Address: 0x1eda650, Func Offset: 0xb0
	// Line 2326, Address: 0x1eda654, Func Offset: 0xb4
	// Line 2328, Address: 0x1eda66c, Func Offset: 0xcc
	// Line 2330, Address: 0x1eda670, Func Offset: 0xd0
	// Line 2331, Address: 0x1eda674, Func Offset: 0xd4
	// Line 2332, Address: 0x1eda678, Func Offset: 0xd8
	// Func End, Address: 0x1eda68c, Func Offset: 0xec
}

// 
// Start address: 0x1eda690
void EnemyKillerBodyHandle(sfObj* obj)
{
	EnemyKillerBodyWork* ew;
	int frame;
	sgBone* bone;
	float spos[4];
	float vec[4];
	float vec2[4];
	float srot[4];
	int n;
	// Line 2336, Address: 0x1eda690, Func Offset: 0
	// Line 2338, Address: 0x1eda6a4, Func Offset: 0x14
	// Line 2339, Address: 0x1eda6b4, Func Offset: 0x24
	// Line 2341, Address: 0x1eda6d8, Func Offset: 0x48
	// Line 2342, Address: 0x1eda6e0, Func Offset: 0x50
	// Line 2344, Address: 0x1eda6e8, Func Offset: 0x58
	// Line 2347, Address: 0x1eda6f0, Func Offset: 0x60
	// Line 2348, Address: 0x1eda6f8, Func Offset: 0x68
	// Line 2349, Address: 0x1eda700, Func Offset: 0x70
	// Line 2350, Address: 0x1eda70c, Func Offset: 0x7c
	// Line 2352, Address: 0x1eda724, Func Offset: 0x94
	// Line 2353, Address: 0x1eda730, Func Offset: 0xa0
	// Line 2356, Address: 0x1eda748, Func Offset: 0xb8
	// Line 2357, Address: 0x1eda75c, Func Offset: 0xcc
	// Line 2358, Address: 0x1eda764, Func Offset: 0xd4
	// Line 2360, Address: 0x1eda770, Func Offset: 0xe0
	// Line 2361, Address: 0x1eda784, Func Offset: 0xf4
	// Line 2362, Address: 0x1eda788, Func Offset: 0xf8
	// Line 2361, Address: 0x1eda78c, Func Offset: 0xfc
	// Line 2362, Address: 0x1eda790, Func Offset: 0x100
	// Line 2365, Address: 0x1eda7a0, Func Offset: 0x110
	// Line 2366, Address: 0x1eda7ac, Func Offset: 0x11c
	// Line 2371, Address: 0x1eda7d0, Func Offset: 0x140
	// Line 2372, Address: 0x1eda7dc, Func Offset: 0x14c
	// Line 2373, Address: 0x1eda7f8, Func Offset: 0x168
	// Line 2374, Address: 0x1eda800, Func Offset: 0x170
	// Line 2376, Address: 0x1eda808, Func Offset: 0x178
	// Line 2377, Address: 0x1eda814, Func Offset: 0x184
	// Line 2378, Address: 0x1eda81c, Func Offset: 0x18c
	// Line 2379, Address: 0x1eda824, Func Offset: 0x194
	// Line 2380, Address: 0x1eda830, Func Offset: 0x1a0
	// Line 2381, Address: 0x1eda83c, Func Offset: 0x1ac
	// Line 2382, Address: 0x1eda868, Func Offset: 0x1d8
	// Line 2383, Address: 0x1eda888, Func Offset: 0x1f8
	// Line 2384, Address: 0x1eda8a4, Func Offset: 0x214
	// Line 2386, Address: 0x1eda8c0, Func Offset: 0x230
	// Line 2387, Address: 0x1eda8cc, Func Offset: 0x23c
	// Line 2390, Address: 0x1eda8d8, Func Offset: 0x248
	// Line 2391, Address: 0x1eda8e0, Func Offset: 0x250
	// Func End, Address: 0x1eda8f8, Func Offset: 0x268
}

// 
// Start address: 0x1eda900
void EnemyKillerBodyAnimeSet(sfObj* obj, int anime)
{
	EnemyKillerBodyWork* ew;
	// Line 2395, Address: 0x1eda900, Func Offset: 0
	// Line 2397, Address: 0x1eda914, Func Offset: 0x14
	// Line 2398, Address: 0x1eda924, Func Offset: 0x24
	// Line 2399, Address: 0x1eda92c, Func Offset: 0x2c
	// Line 2401, Address: 0x1eda940, Func Offset: 0x40
	// Line 2402, Address: 0x1eda948, Func Offset: 0x48
	// Line 2403, Address: 0x1eda94c, Func Offset: 0x4c
	// Func End, Address: 0x1eda960, Func Offset: 0x60
}

// 
// Start address: 0x1eda960
void EnemyKillerBodyControlNormal(sfObj* obj)
{
	EnemyKillerBodyWork* ew;
	// Line 2407, Address: 0x1eda960, Func Offset: 0
	// Line 2409, Address: 0x1eda970, Func Offset: 0x10
	// Line 2410, Address: 0x1eda97c, Func Offset: 0x1c
	// Line 2412, Address: 0x1eda9a0, Func Offset: 0x40
	// Line 2413, Address: 0x1eda9c8, Func Offset: 0x68
	// Line 2414, Address: 0x1eda9d4, Func Offset: 0x74
	// Line 2413, Address: 0x1eda9d8, Func Offset: 0x78
	// Line 2414, Address: 0x1eda9e8, Func Offset: 0x88
	// Line 2415, Address: 0x1eda9f0, Func Offset: 0x90
	// Line 2417, Address: 0x1eda9f8, Func Offset: 0x98
	// Line 2418, Address: 0x1edaa1c, Func Offset: 0xbc
	// Line 2421, Address: 0x1edaa24, Func Offset: 0xc4
	// Line 2422, Address: 0x1edaa28, Func Offset: 0xc8
	// Func End, Address: 0x1edaa3c, Func Offset: 0xdc
}

// 
// Start address: 0x1edaa40
void EnemyKillerBodyControlDamage(sfObj* obj)
{
	// Line 2426, Address: 0x1edaa40, Func Offset: 0
	// Line 2427, Address: 0x1edaa4c, Func Offset: 0xc
	// Line 2428, Address: 0x1edaa5c, Func Offset: 0x1c
	// Line 2429, Address: 0x1edaa64, Func Offset: 0x24
	// Line 2430, Address: 0x1edaa68, Func Offset: 0x28
	// Func End, Address: 0x1edaa78, Func Offset: 0x38
}

// 
// Start address: 0x1edaa80
void EnemyKillerBodyDraw()
{
	// Line 2435, Address: 0x1edaa80, Func Offset: 0
	// Func End, Address: 0x1edaa88, Func Offset: 0x8
}

// 
// Start address: 0x1edaa90
void EnemyKillerBodyDestruct(sfObj* obj)
{
	EnemyKillerBodyWork* ew;
	// Line 2439, Address: 0x1edaa90, Func Offset: 0
	// Line 2441, Address: 0x1edaa9c, Func Offset: 0xc
	// Line 2442, Address: 0x1edaaa4, Func Offset: 0x14
	// Line 2443, Address: 0x1edaab0, Func Offset: 0x20
	// Line 2444, Address: 0x1edaab8, Func Offset: 0x28
	// Line 2446, Address: 0x1edaac0, Func Offset: 0x30
	// Line 2447, Address: 0x1edaac8, Func Offset: 0x38
	// Line 2448, Address: 0x1edaad0, Func Offset: 0x40
	// Line 2449, Address: 0x1edaad8, Func Offset: 0x48
	// Func End, Address: 0x1edaae8, Func Offset: 0x58
}

// 
// Start address: 0x1edaaf0
void EnemyKillerBodyAnimeChangeHook(sfObj* obj)
{
	EnemyKillerBodyWork* ew;
	int i;
	sgBone* parent;
	// Line 2453, Address: 0x1edaaf0, Func Offset: 0
	// Line 2457, Address: 0x1edab08, Func Offset: 0x18
	// Line 2458, Address: 0x1edab10, Func Offset: 0x20
	// Line 2457, Address: 0x1edab14, Func Offset: 0x24
	// Line 2458, Address: 0x1edab18, Func Offset: 0x28
	// Line 2459, Address: 0x1edab20, Func Offset: 0x30
	// Line 2458, Address: 0x1edab24, Func Offset: 0x34
	// Line 2459, Address: 0x1edab28, Func Offset: 0x38
	// Line 2460, Address: 0x1edab38, Func Offset: 0x48
	// Line 2461, Address: 0x1edab44, Func Offset: 0x54
	// Line 2462, Address: 0x1edab58, Func Offset: 0x68
	// Func End, Address: 0x1edab74, Func Offset: 0x84
}

// 
// Start address: 0x1edab80
void EnemyKillerBodyStabSpear(sgBone* bone)
{
	EnemyKillerBodyWork* ew;
	sgBone* parent;
	sfObj* obj;
	float d;
	float vec[4];
	float vec2[4];
	// Line 2466, Address: 0x1edab80, Func Offset: 0
	// Line 2471, Address: 0x1edab84, Func Offset: 0x4
	// Line 2466, Address: 0x1edab88, Func Offset: 0x8
	// Line 2471, Address: 0x1edaba0, Func Offset: 0x20
	// Line 2472, Address: 0x1edaba8, Func Offset: 0x28
	// Line 2471, Address: 0x1edabac, Func Offset: 0x2c
	// Line 2473, Address: 0x1edabb0, Func Offset: 0x30
	// Line 2472, Address: 0x1edabb4, Func Offset: 0x34
	// Line 2473, Address: 0x1edabc8, Func Offset: 0x48
	// Line 2474, Address: 0x1edabd8, Func Offset: 0x58
	// Line 2475, Address: 0x1edabec, Func Offset: 0x6c
	// Line 2476, Address: 0x1edac00, Func Offset: 0x80
	// Line 2477, Address: 0x1edac0c, Func Offset: 0x8c
	// Line 2478, Address: 0x1edac34, Func Offset: 0xb4
	// Line 2480, Address: 0x1edac4c, Func Offset: 0xcc
	// Line 2481, Address: 0x1edac60, Func Offset: 0xe0
	// Line 2482, Address: 0x1edac8c, Func Offset: 0x10c
	// Line 2483, Address: 0x1edacc0, Func Offset: 0x140
	// Line 2484, Address: 0x1edace4, Func Offset: 0x164
	// Line 2485, Address: 0x1edad08, Func Offset: 0x188
	// Line 2486, Address: 0x1edad2c, Func Offset: 0x1ac
	// Line 2487, Address: 0x1edad38, Func Offset: 0x1b8
	// Line 2489, Address: 0x1edad40, Func Offset: 0x1c0
	// Line 2490, Address: 0x1edad50, Func Offset: 0x1d0
	// Line 2491, Address: 0x1edad60, Func Offset: 0x1e0
	// Line 2492, Address: 0x1edad6c, Func Offset: 0x1ec
	// Line 2493, Address: 0x1edad84, Func Offset: 0x204
	// Line 2494, Address: 0x1edad9c, Func Offset: 0x21c
	// Line 2495, Address: 0x1edada8, Func Offset: 0x228
	// Line 2496, Address: 0x1edadc0, Func Offset: 0x240
	// Line 2497, Address: 0x1edadc8, Func Offset: 0x248
	// Line 2499, Address: 0x1edadd8, Func Offset: 0x258
	// Line 2498, Address: 0x1edaddc, Func Offset: 0x25c
	// Line 2499, Address: 0x1edade0, Func Offset: 0x260
	// Line 2498, Address: 0x1edade4, Func Offset: 0x264
	// Line 2499, Address: 0x1edade8, Func Offset: 0x268
	// Line 2501, Address: 0x1edadf8, Func Offset: 0x278
	// Line 2504, Address: 0x1edadfc, Func Offset: 0x27c
	// Line 2501, Address: 0x1edae04, Func Offset: 0x284
	// Line 2504, Address: 0x1edae0c, Func Offset: 0x28c
	// Line 2505, Address: 0x1edae18, Func Offset: 0x298
	// Line 2506, Address: 0x1edae20, Func Offset: 0x2a0
	// Line 2507, Address: 0x1edae2c, Func Offset: 0x2ac
	// Line 2508, Address: 0x1edae34, Func Offset: 0x2b4
	// Line 2509, Address: 0x1edae40, Func Offset: 0x2c0
	// Line 2510, Address: 0x1edae48, Func Offset: 0x2c8
	// Line 2512, Address: 0x1edae54, Func Offset: 0x2d4
	// Line 2513, Address: 0x1edae58, Func Offset: 0x2d8
	// Func End, Address: 0x1edae74, Func Offset: 0x2f4
}

// 
// Start address: 0x1edae80
void EnemyKillerBodyDamage()
{
	EnemyKillerBodyWork* ew;
	// Line 2517, Address: 0x1edae80, Func Offset: 0
	// Line 2519, Address: 0x1edae84, Func Offset: 0x4
	// Line 2517, Address: 0x1edae88, Func Offset: 0x8
	// Line 2519, Address: 0x1edae90, Func Offset: 0x10
	// Line 2520, Address: 0x1edae98, Func Offset: 0x18
	// Line 2519, Address: 0x1edae9c, Func Offset: 0x1c
	// Line 2521, Address: 0x1edaea0, Func Offset: 0x20
	// Line 2522, Address: 0x1edaec0, Func Offset: 0x40
	// Line 2521, Address: 0x1edaec4, Func Offset: 0x44
	// Line 2522, Address: 0x1edaed4, Func Offset: 0x54
	// Line 2523, Address: 0x1edaee0, Func Offset: 0x60
	// Line 2524, Address: 0x1edaef8, Func Offset: 0x78
	// Func End, Address: 0x1edaf08, Func Offset: 0x88
}

// 
// Start address: 0x1edaf10
int EnemyKillerLastCheckUsedNavelString()
{
	EnemyKillerBodyWork* ew;
	// Line 2528, Address: 0x1edaf10, Func Offset: 0
	// Line 2530, Address: 0x1edaf14, Func Offset: 0x4
	// Line 2528, Address: 0x1edaf18, Func Offset: 0x8
	// Line 2530, Address: 0x1edaf1c, Func Offset: 0xc
	// Line 2531, Address: 0x1edaf24, Func Offset: 0x14
	// Line 2532, Address: 0x1edaf44, Func Offset: 0x34
	// Line 2533, Address: 0x1edaf48, Func Offset: 0x38
	// Line 2535, Address: 0x1edaf50, Func Offset: 0x40
	// Line 2536, Address: 0x1edaf58, Func Offset: 0x48
	// Func End, Address: 0x1edaf64, Func Offset: 0x54
}

// 
// Start address: 0x1edaf70
int EnemyKillerLastDamageIsEffective()
{
	EnemyKillerBodyWork* ew;
	// Line 2540, Address: 0x1edaf70, Func Offset: 0
	// Line 2545, Address: 0x1edaf74, Func Offset: 0x4
	// Line 2540, Address: 0x1edaf78, Func Offset: 0x8
	// Line 2545, Address: 0x1edaf7c, Func Offset: 0xc
	// Line 2548, Address: 0x1edaf84, Func Offset: 0x14
	// Line 2546, Address: 0x1edaf88, Func Offset: 0x18
	// Line 2548, Address: 0x1edaf8c, Func Offset: 0x1c
	// Func End, Address: 0x1edaf94, Func Offset: 0x24
}

// 
// Start address: 0x1edafa0
int EnemyCheckStuckAllSpears()
{
	// Line 181, Address: 0x1edafa0, Func Offset: 0
	// Line 184, Address: 0x1edafac, Func Offset: 0xc
	// Line 185, Address: 0x1edafbc, Func Offset: 0x1c
	// Line 187, Address: 0x1edafcc, Func Offset: 0x2c
	// Line 189, Address: 0x1edafd4, Func Offset: 0x34
	// Line 190, Address: 0x1edafd8, Func Offset: 0x38
	// Line 191, Address: 0x1edafdc, Func Offset: 0x3c
	// Line 193, Address: 0x1edafe0, Func Offset: 0x40
	// Line 194, Address: 0x1edafe4, Func Offset: 0x44
	// Func End, Address: 0x1edaff4, Func Offset: 0x54
	// Line 2554, Address: 0x1edafa0, Func Offset: 0
	// Line 2555, Address: 0x1edafa4, Func Offset: 0x4
	// Line 2554, Address: 0x1edafa8, Func Offset: 0x8
	// Line 2555, Address: 0x1edafac, Func Offset: 0xc
	// Line 2557, Address: 0x1edafc0, Func Offset: 0x20
	// Func End, Address: 0x1edafcc, Func Offset: 0x2c
}

// 
// Start address: 0x1edafd0
void EnemyKillerDead(sfObj* obj)
{
	// Line 2561, Address: 0x1edafd0, Func Offset: 0
	// Line 2562, Address: 0x1edafdc, Func Offset: 0xc
	// Line 2563, Address: 0x1edafe4, Func Offset: 0x14
	// Line 2564, Address: 0x1edafec, Func Offset: 0x1c
	// Line 2568, Address: 0x1edaff4, Func Offset: 0x24
	// Func End, Address: 0x1edb004, Func Offset: 0x34
}

// 
// Start address: 0x1edb010
int EnemyKillerLastIsReadying()
{
	sfObj* obj;
	int r;
	// Line 2574, Address: 0x1edb010, Func Offset: 0
	// Line 2577, Address: 0x1edb014, Func Offset: 0x4
	// Line 2574, Address: 0x1edb018, Func Offset: 0x8
	// Line 2577, Address: 0x1edb01c, Func Offset: 0xc
	// Line 2578, Address: 0x1edb028, Func Offset: 0x18
	// Line 2580, Address: 0x1edb038, Func Offset: 0x28
	// Line 2589, Address: 0x1edb06c, Func Offset: 0x5c
	// Line 2590, Address: 0x1edb070, Func Offset: 0x60
	// Line 2591, Address: 0x1edb074, Func Offset: 0x64
	// Line 2592, Address: 0x1edb078, Func Offset: 0x68
	// Line 2593, Address: 0x1edb080, Func Offset: 0x70
	// Func End, Address: 0x1edb090, Func Offset: 0x80
}

