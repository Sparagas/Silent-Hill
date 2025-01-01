typedef struct sgQTObject;
typedef struct BattleHit;
typedef struct sfOffsetAABB;
typedef union sfCldBody;
typedef struct sfCldPart;
typedef struct sgBone;
typedef enum BattleAttackKind : unsigned char;
typedef struct sfCldObject;
typedef struct _anon0;
typedef enum BattleHitResult : unsigned char;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct sgQTNode;


typedef float type_0[4];
typedef float type_1[4][4];
typedef float type_2[4];
typedef unsigned char type_3[3];
typedef float type_4[4];
typedef sfCldPart* type_5[6];
typedef unsigned char type_6[3];

struct sgQTObject
{
	_anon1 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
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

enum BattleHitResult : unsigned char
{
	GB_HIT_RES_NONE,
	GB_HIT_RES_PLAYER_HIT,
	GB_HIT_RES_ENEMY_HIT,
	GB_HIT_RES_EILEEN_HIT,
	GB_HIT_RES_END
};

struct _anon1
{
	float center[4];
	float radius;
};

struct _anon2
{
	float bmin[4];
	float bmax[4];
};

struct _anon3
{
	float mat[4][4];
	float half_w[4];
};

struct sgQTNode
{
	int dummy;
};

float sg_vector_unit_w[4];

void BattleHitConstruct(BattleHit* b_hit, sfCldObject* cld_obj, BattleAttackKind kind);
void BattleHitDestruct(BattleHit* b_hit);
BattleAttackKind BattleHitGetKind(BattleHit* b_hit);
void BattleHitSetDamage(BattleHit* b_hit, float damage);
float BattleHitGetDamage(BattleHit* b_hit);
void BattleHitSetShock(BattleHit* b_hit, float shock);
float BattleHitGetShock(BattleHit* b_hit);
void BattleHitSetOn(BattleHit* b_hit);
void BattleHitSetOriginPoint(BattleHit* b_hit, float* pos);
void BattleHitGetOriginPoint(BattleHit* b_hit, float* pos);
void BattleHitSetDirection(BattleHit* b_hit, float* dir);
int BattleHitGetDirection(BattleHit* b_hit, float* pos);
void BattleHitSetOrigin(BattleHit* b_hit, void* origin);
void* BattleHitGetOrigin(BattleHit* b_hit);
BattleHit* BattleHitFromCldObject(sfCldObject* cld_object);
BattleHit* BattleHitFromCldPart(sfCldPart* cld_part);
unsigned int BattleHitGetID(BattleHit* b_hit);
void BattleHitSetResult(BattleHit* b_hit, BattleHitResult result);
BattleHitResult BattleHitGetResult(BattleHit* b_hit);
void BattleHitClearResult(BattleHit* b_hit);

// 
// Start address: 0x2d9580
void BattleHitConstruct(BattleHit* b_hit, sfCldObject* cld_obj, BattleAttackKind kind)
{
	unsigned int id_const;
	// Line 42, Address: 0x2d9580, Func Offset: 0
	// Line 45, Address: 0x2d95a0, Func Offset: 0x20
	// Line 46, Address: 0x2d95a4, Func Offset: 0x24
	// Line 47, Address: 0x2d95a8, Func Offset: 0x28
	// Line 48, Address: 0x2d95ac, Func Offset: 0x2c
	// Line 49, Address: 0x2d95b0, Func Offset: 0x30
	// Line 50, Address: 0x2d95b8, Func Offset: 0x38
	// Line 51, Address: 0x2d95c8, Func Offset: 0x48
	// Line 52, Address: 0x2d95f0, Func Offset: 0x70
	// Line 53, Address: 0x2d95f4, Func Offset: 0x74
	// Func End, Address: 0x2d960c, Func Offset: 0x8c
}

// 
// Start address: 0x2d9610
void BattleHitDestruct(BattleHit* b_hit)
{
	// Line 60, Address: 0x2d9610, Func Offset: 0
	// Line 62, Address: 0x2d9620, Func Offset: 0x10
	// Line 64, Address: 0x2d9628, Func Offset: 0x18
	// Line 65, Address: 0x2d962c, Func Offset: 0x1c
	// Line 66, Address: 0x2d9634, Func Offset: 0x24
	// Line 67, Address: 0x2d963c, Func Offset: 0x2c
	// Line 68, Address: 0x2d964c, Func Offset: 0x3c
	// Line 70, Address: 0x2d9650, Func Offset: 0x40
	// Line 71, Address: 0x2d9654, Func Offset: 0x44
	// Line 72, Address: 0x2d965c, Func Offset: 0x4c
	// Line 73, Address: 0x2d9664, Func Offset: 0x54
	// Func End, Address: 0x2d967c, Func Offset: 0x6c
}

// 
// Start address: 0x2d9680
BattleAttackKind BattleHitGetKind(BattleHit* b_hit)
{
	// Line 90, Address: 0x2d9680, Func Offset: 0
	// Func End, Address: 0x2d9688, Func Offset: 0x8
}

// 
// Start address: 0x2d9690
void BattleHitSetDamage(BattleHit* b_hit, float damage)
{
	// Line 96, Address: 0x2d9690, Func Offset: 0
	// Func End, Address: 0x2d9698, Func Offset: 0x8
}

// 
// Start address: 0x2d96a0
float BattleHitGetDamage(BattleHit* b_hit)
{
	// Line 102, Address: 0x2d96a0, Func Offset: 0
	// Func End, Address: 0x2d96a8, Func Offset: 0x8
}

// 
// Start address: 0x2d96b0
void BattleHitSetShock(BattleHit* b_hit, float shock)
{
	// Line 108, Address: 0x2d96b0, Func Offset: 0
	// Func End, Address: 0x2d96b8, Func Offset: 0x8
}

// 
// Start address: 0x2d96c0
float BattleHitGetShock(BattleHit* b_hit)
{
	// Line 114, Address: 0x2d96c0, Func Offset: 0
	// Func End, Address: 0x2d96c8, Func Offset: 0x8
}

// 
// Start address: 0x2d96d0
void BattleHitSetOn(BattleHit* b_hit)
{
	// Line 121, Address: 0x2d96d0, Func Offset: 0
	// Func End, Address: 0x2d96d8, Func Offset: 0x8
}

// 
// Start address: 0x2d96e0
void BattleHitSetOriginPoint(BattleHit* b_hit, float* pos)
{
	// Line 138, Address: 0x2d96e0, Func Offset: 0
	// Line 139, Address: 0x2d96e8, Func Offset: 0x8
	// Line 140, Address: 0x2d96f0, Func Offset: 0x10
	// Func End, Address: 0x2d96f8, Func Offset: 0x18
}

// 
// Start address: 0x2d9700
void BattleHitGetOriginPoint(BattleHit* b_hit, float* pos)
{
	// Line 145, Address: 0x2d9700, Func Offset: 0
	// Line 146, Address: 0x2d9710, Func Offset: 0x10
	// Line 147, Address: 0x2d9714, Func Offset: 0x14
	// Line 148, Address: 0x2d971c, Func Offset: 0x1c
	// Line 149, Address: 0x2d9720, Func Offset: 0x20
	// Line 150, Address: 0x2d972c, Func Offset: 0x2c
	// Line 153, Address: 0x2d973c, Func Offset: 0x3c
	// Line 154, Address: 0x2d9744, Func Offset: 0x44
	// Func End, Address: 0x2d9750, Func Offset: 0x50
}

// 
// Start address: 0x2d9750
void BattleHitSetDirection(BattleHit* b_hit, float* dir)
{
	// Line 161, Address: 0x2d9750, Func Offset: 0
	// Line 162, Address: 0x2d9758, Func Offset: 0x8
	// Line 163, Address: 0x2d9760, Func Offset: 0x10
	// Func End, Address: 0x2d9768, Func Offset: 0x18
}

// 
// Start address: 0x2d9770
int BattleHitGetDirection(BattleHit* b_hit, float* pos)
{
	// Line 172, Address: 0x2d9770, Func Offset: 0
	// Line 173, Address: 0x2d9780, Func Offset: 0x10
	// Line 176, Address: 0x2d9788, Func Offset: 0x18
	// Line 177, Address: 0x2d9790, Func Offset: 0x20
	// Line 178, Address: 0x2d9798, Func Offset: 0x28
	// Func End, Address: 0x2d97a0, Func Offset: 0x30
}

// 
// Start address: 0x2d97a0
void BattleHitSetOrigin(BattleHit* b_hit, void* origin)
{
	// Line 183, Address: 0x2d97a0, Func Offset: 0
	// Func End, Address: 0x2d97a8, Func Offset: 0x8
}

// 
// Start address: 0x2d97b0
void* BattleHitGetOrigin(BattleHit* b_hit)
{
	// Line 188, Address: 0x2d97b0, Func Offset: 0
	// Func End, Address: 0x2d97b8, Func Offset: 0x8
}

// 
// Start address: 0x2d97c0
BattleHit* BattleHitFromCldObject(sfCldObject* cld_object)
{
	unsigned int id;
	BattleHit* b_hit;
	// Line 196, Address: 0x2d97c0, Func Offset: 0
	// Line 199, Address: 0x2d97c8, Func Offset: 0x8
	// Line 200, Address: 0x2d97d0, Func Offset: 0x10
	// Line 201, Address: 0x2d97d8, Func Offset: 0x18
	// Line 202, Address: 0x2d97dc, Func Offset: 0x1c
	// Line 203, Address: 0x2d97e4, Func Offset: 0x24
	// Line 204, Address: 0x2d97f0, Func Offset: 0x30
	// Line 206, Address: 0x2d97f8, Func Offset: 0x38
	// Line 208, Address: 0x2d9810, Func Offset: 0x50
	// Func End, Address: 0x2d9820, Func Offset: 0x60
}

// 
// Start address: 0x2d9820
BattleHit* BattleHitFromCldPart(sfCldPart* cld_part)
{
	sfCldObject* cld_obj;
	// Line 216, Address: 0x2d9820, Func Offset: 0
	// Line 218, Address: 0x2d9828, Func Offset: 0x8
	// Line 219, Address: 0x2d9830, Func Offset: 0x10
	// Line 220, Address: 0x2d9838, Func Offset: 0x18
	// Func End, Address: 0x2d9844, Func Offset: 0x24
}

// 
// Start address: 0x2d9850
unsigned int BattleHitGetID(BattleHit* b_hit)
{
	// Line 231, Address: 0x2d9850, Func Offset: 0
	// Func End, Address: 0x2d9858, Func Offset: 0x8
}

// 
// Start address: 0x2d9860
void BattleHitSetResult(BattleHit* b_hit, BattleHitResult result)
{
	// Line 237, Address: 0x2d9860, Func Offset: 0
	// Func End, Address: 0x2d9868, Func Offset: 0x8
}

// 
// Start address: 0x2d9870
BattleHitResult BattleHitGetResult(BattleHit* b_hit)
{
	// Line 243, Address: 0x2d9870, Func Offset: 0
	// Func End, Address: 0x2d9878, Func Offset: 0x8
}

// 
// Start address: 0x2d9880
void BattleHitClearResult(BattleHit* b_hit)
{
	// Line 249, Address: 0x2d9880, Func Offset: 0
	// Func End, Address: 0x2d9888, Func Offset: 0x8
}

