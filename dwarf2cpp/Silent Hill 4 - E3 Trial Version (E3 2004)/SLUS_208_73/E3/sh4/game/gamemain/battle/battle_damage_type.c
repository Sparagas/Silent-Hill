typedef enum BattleAttackAttribute : unsigned char;
typedef enum BattleAttackKind : unsigned char;
typedef enum BattleDamageType : unsigned char;


typedef BattleDamageType type_0[0];
typedef int type_1[0];
typedef BattleAttackAttribute type_2[0];

enum BattleAttackAttribute : unsigned char
{
	BAA_UNDEFINED,
	BAA_NOTHING,
	BAA_STAB,
	BAA_HIT,
	BAA_CUT,
	BAA_SHOOT,
	BAA_EXORCISM,
	BAA_EXORCISM_SHOOT,
	BAA_FINISH
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

BattleDamageType battle_damage_type[0];
int battle_hit_type[0];
BattleAttackAttribute battle_attack_attribute[0];

BattleDamageType BattleDamageTypeGet(BattleAttackKind kind);
int BattleHitTypeGet(BattleAttackKind kind);
BattleAttackAttribute BattleAttackAttributeGet(BattleAttackKind kind);
int BattleAttackStrength(BattleAttackKind kind);
int BattleAttackIsExorcism(BattleAttackKind kind);
int BattleAttackIsShoot(BattleAttackKind kind);
int BattleAttackIsContinuiously(BattleAttackKind kind);
int BattleAttackIsFinish(BattleAttackKind kind);

// 
// Start address: 0x2d9cb0
BattleDamageType BattleDamageTypeGet(BattleAttackKind kind)
{
	// Line 22, Address: 0x2d9cb4, Func Offset: 0x4
	// Line 23, Address: 0x2d9cc8, Func Offset: 0x18
	// Line 25, Address: 0x2d9cd0, Func Offset: 0x20
	// Line 26, Address: 0x2d9ce0, Func Offset: 0x30
	// Func End, Address: 0x2d9ce8, Func Offset: 0x38
}

// 
// Start address: 0x2d9cf0
int BattleHitTypeGet(BattleAttackKind kind)
{
	// Line 34, Address: 0x2d9cf4, Func Offset: 0x4
	// Line 35, Address: 0x2d9d08, Func Offset: 0x18
	// Line 37, Address: 0x2d9d10, Func Offset: 0x20
	// Line 38, Address: 0x2d9d28, Func Offset: 0x38
	// Func End, Address: 0x2d9d30, Func Offset: 0x40
}

// 
// Start address: 0x2d9d30
BattleAttackAttribute BattleAttackAttributeGet(BattleAttackKind kind)
{
	// Line 46, Address: 0x2d9d34, Func Offset: 0x4
	// Line 47, Address: 0x2d9d48, Func Offset: 0x18
	// Line 49, Address: 0x2d9d50, Func Offset: 0x20
	// Line 50, Address: 0x2d9d60, Func Offset: 0x30
	// Func End, Address: 0x2d9d68, Func Offset: 0x38
}

// 
// Start address: 0x2d9d70
int BattleAttackStrength(BattleAttackKind kind)
{
	int r;
	// Line 58, Address: 0x2d9d70, Func Offset: 0
	// Line 60, Address: 0x2d9d7c, Func Offset: 0xc
	// Line 71, Address: 0x2d9dac, Func Offset: 0x3c
	// Line 73, Address: 0x2d9db0, Func Offset: 0x40
	// Line 84, Address: 0x2d9db8, Func Offset: 0x48
	// Line 86, Address: 0x2d9dbc, Func Offset: 0x4c
	// Line 87, Address: 0x2d9dc0, Func Offset: 0x50
	// Line 88, Address: 0x2d9dc4, Func Offset: 0x54
	// Func End, Address: 0x2d9dd4, Func Offset: 0x64
}

// 
// Start address: 0x2d9de0
int BattleAttackIsExorcism(BattleAttackKind kind)
{
	int r;
	// Line 95, Address: 0x2d9de0, Func Offset: 0
	// Line 97, Address: 0x2d9dec, Func Offset: 0xc
	// Line 100, Address: 0x2d9e18, Func Offset: 0x38
	// Line 101, Address: 0x2d9e1c, Func Offset: 0x3c
	// Line 102, Address: 0x2d9e20, Func Offset: 0x40
	// Line 103, Address: 0x2d9e24, Func Offset: 0x44
	// Func End, Address: 0x2d9e34, Func Offset: 0x54
}

// 
// Start address: 0x2d9e40
int BattleAttackIsShoot(BattleAttackKind kind)
{
	int r;
	// Line 110, Address: 0x2d9e40, Func Offset: 0
	// Line 112, Address: 0x2d9e4c, Func Offset: 0xc
	// Line 115, Address: 0x2d9e78, Func Offset: 0x38
	// Line 116, Address: 0x2d9e7c, Func Offset: 0x3c
	// Line 117, Address: 0x2d9e80, Func Offset: 0x40
	// Line 118, Address: 0x2d9e84, Func Offset: 0x44
	// Func End, Address: 0x2d9e94, Func Offset: 0x54
}

// 
// Start address: 0x2d9ea0
int BattleAttackIsContinuiously(BattleAttackKind kind)
{
	int r;
	// Line 127, Address: 0x2d9ea0, Func Offset: 0
	// Line 132, Address: 0x2d9ed8, Func Offset: 0x38
	// Line 133, Address: 0x2d9edc, Func Offset: 0x3c
	// Line 135, Address: 0x2d9ee0, Func Offset: 0x40
	// Func End, Address: 0x2d9ee8, Func Offset: 0x48
}

// 
// Start address: 0x2d9ef0
int BattleAttackIsFinish(BattleAttackKind kind)
{
	// Line 142, Address: 0x2d9ef0, Func Offset: 0
	// Line 143, Address: 0x2d9ef8, Func Offset: 0x8
	// Line 144, Address: 0x2d9f00, Func Offset: 0x10
	// Line 143, Address: 0x2d9f04, Func Offset: 0x14
	// Line 144, Address: 0x2d9f10, Func Offset: 0x20
	// Func End, Address: 0x2d9f18, Func Offset: 0x28
}

