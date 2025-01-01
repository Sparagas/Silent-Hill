typedef struct _anon0;
typedef enum EnemyKind : unsigned char;


typedef int type_0[21];
typedef float type_1[10];

struct _anon0
{
	float work[10];
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

int type_tbl[21];

int EnemyParameterIndexGet(EnemyKind kind, int type, int level);
_anon0* EnemyParameterPtr(EnemyKind kind, int type, int level);
float EnemyParameterHP(EnemyKind kind, int type);
float EnemyParameterEndurance(EnemyKind kind, int type);
float EnemyParameterAutoRecover(EnemyKind kind, int type);
float EnemyParameterMoveSpeed(EnemyKind kind, int type);
float EnemyParameterMoveSpeed2(EnemyKind kind, int type);
float EnemyParameterAttackPoint(EnemyKind kind, int type, int n);
float EnemyParameterDamageRange(EnemyKind kind, int type);
float EnemyParameterExtentDamage(EnemyKind kind, int type);

// 
// Start address: 0x1a19d0
int EnemyParameterIndexGet(EnemyKind kind, int type, int level)
{
	int index;
	int i;
	// Line 46, Address: 0x1a19d0, Func Offset: 0
	// Line 47, Address: 0x1a19e0, Func Offset: 0x10
	// Line 48, Address: 0x1a19e4, Func Offset: 0x14
	// Line 51, Address: 0x1a19ec, Func Offset: 0x1c
	// Line 52, Address: 0x1a1a10, Func Offset: 0x40
	// Line 53, Address: 0x1a1abc, Func Offset: 0xec
	// Line 52, Address: 0x1a1ac4, Func Offset: 0xf4
	// Line 53, Address: 0x1a1ad0, Func Offset: 0x100
	// Line 54, Address: 0x1a1ad8, Func Offset: 0x108
	// Line 58, Address: 0x1a1ae4, Func Offset: 0x114
	// Func End, Address: 0x1a1aec, Func Offset: 0x11c
}

// 
// Start address: 0x1a1af0
_anon0* EnemyParameterPtr(EnemyKind kind, int type, int level)
{
	_anon0* rtv;
	int index;
	// Line 62, Address: 0x1a1af0, Func Offset: 0
	// Line 63, Address: 0x1a1afc, Func Offset: 0xc
	// Line 65, Address: 0x1a1b00, Func Offset: 0x10
	// Line 66, Address: 0x1a1b14, Func Offset: 0x24
	// Line 67, Address: 0x1a1b38, Func Offset: 0x48
	// Line 68, Address: 0x1a1b48, Func Offset: 0x58
	// Line 69, Address: 0x1a1b50, Func Offset: 0x60
	// Line 75, Address: 0x1a1b68, Func Offset: 0x78
	// Func End, Address: 0x1a1b78, Func Offset: 0x88
}

// 
// Start address: 0x1a1b80
float EnemyParameterHP(EnemyKind kind, int type)
{
	float rtv;
	_anon0* ep;
	// Line 79, Address: 0x1a1b80, Func Offset: 0
	// Line 80, Address: 0x1a1b98, Func Offset: 0x18
	// Line 81, Address: 0x1a1b9c, Func Offset: 0x1c
	// Line 83, Address: 0x1a1bb4, Func Offset: 0x34
	// Line 84, Address: 0x1a1bbc, Func Offset: 0x3c
	// Line 87, Address: 0x1a1bc0, Func Offset: 0x40
	// Line 86, Address: 0x1a1bc4, Func Offset: 0x44
	// Line 87, Address: 0x1a1bc8, Func Offset: 0x48
	// Func End, Address: 0x1a1bdc, Func Offset: 0x5c
}

// 
// Start address: 0x1a1be0
float EnemyParameterEndurance(EnemyKind kind, int type)
{
	float rtv;
	_anon0* ep;
	// Line 91, Address: 0x1a1be0, Func Offset: 0
	// Line 92, Address: 0x1a1bf8, Func Offset: 0x18
	// Line 93, Address: 0x1a1bfc, Func Offset: 0x1c
	// Line 95, Address: 0x1a1c14, Func Offset: 0x34
	// Line 96, Address: 0x1a1c1c, Func Offset: 0x3c
	// Line 99, Address: 0x1a1c20, Func Offset: 0x40
	// Line 98, Address: 0x1a1c24, Func Offset: 0x44
	// Line 99, Address: 0x1a1c28, Func Offset: 0x48
	// Func End, Address: 0x1a1c3c, Func Offset: 0x5c
}

// 
// Start address: 0x1a1c40
float EnemyParameterAutoRecover(EnemyKind kind, int type)
{
	float rtv;
	_anon0* ep;
	// Line 103, Address: 0x1a1c40, Func Offset: 0
	// Line 104, Address: 0x1a1c58, Func Offset: 0x18
	// Line 105, Address: 0x1a1c5c, Func Offset: 0x1c
	// Line 107, Address: 0x1a1c74, Func Offset: 0x34
	// Line 108, Address: 0x1a1c7c, Func Offset: 0x3c
	// Line 111, Address: 0x1a1c80, Func Offset: 0x40
	// Line 110, Address: 0x1a1c84, Func Offset: 0x44
	// Line 111, Address: 0x1a1c88, Func Offset: 0x48
	// Func End, Address: 0x1a1c9c, Func Offset: 0x5c
}

// 
// Start address: 0x1a1ca0
float EnemyParameterMoveSpeed(EnemyKind kind, int type)
{
	float rtv;
	_anon0* ep;
	// Line 115, Address: 0x1a1ca0, Func Offset: 0
	// Line 116, Address: 0x1a1cb8, Func Offset: 0x18
	// Line 117, Address: 0x1a1cbc, Func Offset: 0x1c
	// Line 119, Address: 0x1a1cd4, Func Offset: 0x34
	// Line 120, Address: 0x1a1cdc, Func Offset: 0x3c
	// Line 123, Address: 0x1a1ce0, Func Offset: 0x40
	// Line 122, Address: 0x1a1ce4, Func Offset: 0x44
	// Line 123, Address: 0x1a1ce8, Func Offset: 0x48
	// Func End, Address: 0x1a1cfc, Func Offset: 0x5c
}

// 
// Start address: 0x1a1d00
float EnemyParameterMoveSpeed2(EnemyKind kind, int type)
{
	float rtv;
	_anon0* ep;
	// Line 127, Address: 0x1a1d00, Func Offset: 0
	// Line 128, Address: 0x1a1d18, Func Offset: 0x18
	// Line 129, Address: 0x1a1d1c, Func Offset: 0x1c
	// Line 131, Address: 0x1a1d34, Func Offset: 0x34
	// Line 132, Address: 0x1a1d3c, Func Offset: 0x3c
	// Line 135, Address: 0x1a1d40, Func Offset: 0x40
	// Line 134, Address: 0x1a1d44, Func Offset: 0x44
	// Line 135, Address: 0x1a1d48, Func Offset: 0x48
	// Func End, Address: 0x1a1d5c, Func Offset: 0x5c
}

// 
// Start address: 0x1a1d60
float EnemyParameterAttackPoint(EnemyKind kind, int type, int n)
{
	float rtv;
	_anon0* ep;
	// Line 139, Address: 0x1a1d60, Func Offset: 0
	// Line 140, Address: 0x1a1d80, Func Offset: 0x20
	// Line 141, Address: 0x1a1d84, Func Offset: 0x24
	// Line 143, Address: 0x1a1d9c, Func Offset: 0x3c
	// Line 144, Address: 0x1a1da4, Func Offset: 0x44
	// Line 145, Address: 0x1a1dbc, Func Offset: 0x5c
	// Line 147, Address: 0x1a1dc0, Func Offset: 0x60
	// Line 150, Address: 0x1a1dc8, Func Offset: 0x68
	// Line 152, Address: 0x1a1dd0, Func Offset: 0x70
	// Line 155, Address: 0x1a1dd4, Func Offset: 0x74
	// Line 157, Address: 0x1a1dd8, Func Offset: 0x78
	// Line 156, Address: 0x1a1ddc, Func Offset: 0x7c
	// Line 157, Address: 0x1a1de0, Func Offset: 0x80
	// Func End, Address: 0x1a1df8, Func Offset: 0x98
}

// 
// Start address: 0x1a1e00
float EnemyParameterDamageRange(EnemyKind kind, int type)
{
	float rtv;
	_anon0* ep;
	// Line 161, Address: 0x1a1e00, Func Offset: 0
	// Line 162, Address: 0x1a1e18, Func Offset: 0x18
	// Line 163, Address: 0x1a1e1c, Func Offset: 0x1c
	// Line 165, Address: 0x1a1e34, Func Offset: 0x34
	// Line 166, Address: 0x1a1e3c, Func Offset: 0x3c
	// Line 169, Address: 0x1a1e40, Func Offset: 0x40
	// Line 168, Address: 0x1a1e44, Func Offset: 0x44
	// Line 169, Address: 0x1a1e48, Func Offset: 0x48
	// Func End, Address: 0x1a1e5c, Func Offset: 0x5c
}

// 
// Start address: 0x1a1e60
float EnemyParameterExtentDamage(EnemyKind kind, int type)
{
	float rtv;
	_anon0* ep;
	// Line 173, Address: 0x1a1e60, Func Offset: 0
	// Line 174, Address: 0x1a1e78, Func Offset: 0x18
	// Line 175, Address: 0x1a1e7c, Func Offset: 0x1c
	// Line 177, Address: 0x1a1e94, Func Offset: 0x34
	// Line 178, Address: 0x1a1e9c, Func Offset: 0x3c
	// Line 181, Address: 0x1a1ea0, Func Offset: 0x40
	// Line 180, Address: 0x1a1ea4, Func Offset: 0x44
	// Line 181, Address: 0x1a1ea8, Func Offset: 0x48
	// Func End, Address: 0x1a1ebc, Func Offset: 0x5c
}

