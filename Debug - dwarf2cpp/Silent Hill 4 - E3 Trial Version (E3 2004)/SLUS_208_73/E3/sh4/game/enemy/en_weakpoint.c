typedef enum BattleAttackAttribute : unsigned char;
typedef struct EnemyWeakPoint;
typedef enum EnemyKind : unsigned char;


typedef EnemyWeakPoint type_0[2];
typedef EnemyWeakPoint type_1[2];
typedef EnemyWeakPoint type_2[2];
typedef EnemyWeakPoint* type_3[18];

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

struct EnemyWeakPoint
{
	BattleAttackAttribute attr;
	float rate;
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

EnemyWeakPoint weak_point_mush[2];
EnemyWeakPoint weak_point_jinmen[2];
EnemyWeakPoint weak_point_hil[2];
EnemyWeakPoint* weak_point[18];

float EnemyBattleCheckWeakPoint(EnemyKind ekind, BattleAttackAttribute attr);

// 
// Start address: 0x20a3c0
float EnemyBattleCheckWeakPoint(EnemyKind ekind, BattleAttackAttribute attr)
{
	EnemyWeakPoint* pwp;
	// Line 99, Address: 0x20a3c0, Func Offset: 0
	// Line 101, Address: 0x20a3c4, Func Offset: 0x4
	// Line 99, Address: 0x20a3c8, Func Offset: 0x8
	// Line 101, Address: 0x20a3d8, Func Offset: 0x18
	// Line 103, Address: 0x20a3f0, Func Offset: 0x30
	// Line 104, Address: 0x20a3fc, Func Offset: 0x3c
	// Line 105, Address: 0x20a400, Func Offset: 0x40
	// Line 106, Address: 0x20a418, Func Offset: 0x58
	// Line 108, Address: 0x20a420, Func Offset: 0x60
	// Line 110, Address: 0x20a42c, Func Offset: 0x6c
	// Line 111, Address: 0x20a430, Func Offset: 0x70
	// Line 112, Address: 0x20a438, Func Offset: 0x78
	// Line 114, Address: 0x20a440, Func Offset: 0x80
	// Line 115, Address: 0x20a444, Func Offset: 0x84
	// Line 114, Address: 0x20a448, Func Offset: 0x88
	// Line 115, Address: 0x20a44c, Func Offset: 0x8c
	// Line 116, Address: 0x20a454, Func Offset: 0x94
	// Line 117, Address: 0x20a470, Func Offset: 0xb0
	// Func End, Address: 0x20a484, Func Offset: 0xc4
}

