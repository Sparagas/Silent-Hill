typedef struct _anon0;
typedef struct EnemyTexParameter;
typedef struct EnemyTexRectangle;
typedef enum EnemyTexIdentity : unsigned char;


typedef EnemyTexRectangle type_0[12];
typedef _anon0 type_1[2];

struct _anon0
{
	float S;
	float T;
};

struct EnemyTexParameter
{
	_anon0 st[2];
	EnemyTexIdentity texid;
	unsigned long clamp;
	int rotate;
};

struct EnemyTexRectangle
{
	unsigned short u;
	unsigned short v;
	unsigned short w;
	unsigned short h;
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

EnemyTexRectangle ghoststain_tex[12];

void* EnemyTexGhostStainTexData();
void EnemyTexGhostStainParameterSet(EnemyTexParameter* ptex, int type);
int EnemyTexGhostStainGetWidth(int type);
int EnemyTexGhostStainGetHeight(int type);

// 
// Start address: 0x1db280
void* EnemyTexGhostStainTexData()
{
	// Line 30, Address: 0x1db280, Func Offset: 0
	// Func End, Address: 0x1db290, Func Offset: 0x10
}

// 
// Start address: 0x1db290
void EnemyTexGhostStainParameterSet(EnemyTexParameter* ptex, int type)
{
	// Line 34, Address: 0x1db290, Func Offset: 0
	// Line 35, Address: 0x1db2a8, Func Offset: 0x18
	// Line 36, Address: 0x1db2b0, Func Offset: 0x20
	// Line 37, Address: 0x1db2c8, Func Offset: 0x38
	// Func End, Address: 0x1db2dc, Func Offset: 0x4c
}

// 
// Start address: 0x1db2e0
int EnemyTexGhostStainGetWidth(int type)
{
	// Line 41, Address: 0x1db2e0, Func Offset: 0
	// Line 42, Address: 0x1db2f0, Func Offset: 0x10
	// Func End, Address: 0x1db2f8, Func Offset: 0x18
}

// 
// Start address: 0x1db300
int EnemyTexGhostStainGetHeight(int type)
{
	// Line 46, Address: 0x1db300, Func Offset: 0
	// Line 47, Address: 0x1db310, Func Offset: 0x10
	// Func End, Address: 0x1db318, Func Offset: 0x18
}

