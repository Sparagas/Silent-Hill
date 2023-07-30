typedef struct EnemyTexParameter;
typedef struct _anon0;
typedef enum EnemyTexIdentity : unsigned char;


typedef _anon0 type[2];

struct EnemyTexParameter
{
	_anon0 st[2];
	EnemyTexIdentity texid;
	unsigned long clamp;
	int rotate;
};

struct _anon0
{
	float S;
	float T;
};

enum EnemyTexIdentity : unsigned char
{
	EN_TEX_ID_COALTAR,
	EN_TEX_ID_GHOSTSTAIN,
	EN_TEX_ID_CELL,
	EN_TEX_ID_CELL2,
	EN_TEX_ID_MUCUS,
	EN_TEX_ID_CRUSH_HIL,
	EN_TEX_ID_EARTHWORM,
	EN_TEX_ID_EARTHWORM2,
	EN_TEX_ID_EARTHWORM3,
	EN_TEX_ID_EARTHWORM4,
	EN_TEX_ID_BLOODPOOL,
	EN_TEX_ID_FLAME1,
	EN_TEX_ID_FLAME2,
	EN_TEX_ID_TOACH,
	EN_TEX_ID_FIRE,
	EN_TEX_ID_FIRELIGHT,
	EN_TEX_ID_WALL,
	EN_TEX_ID_MAX
};


void* EnemyTexCellTexData();
void* EnemyTexCell2TexData();
void EnemyTexCellParameterSet(EnemyTexParameter* ptex, int id);

// 
// Start address: 0x1f8cc0
void* EnemyTexCellTexData()
{
	// Line 24, Address: 0x1f8cc0, Func Offset: 0
	// Func End, Address: 0x1f8cd0, Func Offset: 0x10
}

// 
// Start address: 0x1f8cd0
void* EnemyTexCell2TexData()
{
	// Line 29, Address: 0x1f8cd0, Func Offset: 0
	// Func End, Address: 0x1f8ce0, Func Offset: 0x10
}

// 
// Start address: 0x1f8ce0
void EnemyTexCellParameterSet(EnemyTexParameter* ptex, int id)
{
	int u;
	int v;
	int r;
	// Line 33, Address: 0x1f8ce0, Func Offset: 0
	// Line 35, Address: 0x1f8cf8, Func Offset: 0x18
	// Line 36, Address: 0x1f8d00, Func Offset: 0x20
	// Line 37, Address: 0x1f8d14, Func Offset: 0x34
	// Line 38, Address: 0x1f8d2c, Func Offset: 0x4c
	// Line 39, Address: 0x1f8d40, Func Offset: 0x60
	// Line 40, Address: 0x1f8d58, Func Offset: 0x78
	// Line 41, Address: 0x1f8d6c, Func Offset: 0x8c
	// Line 44, Address: 0x1f8d7c, Func Offset: 0x9c
	// Line 45, Address: 0x1f8d88, Func Offset: 0xa8
	// Func End, Address: 0x1f8d9c, Func Offset: 0xbc
}

