typedef struct EnemyTexParameter;
typedef struct _anon0;
typedef struct EnemyTexRectangle;
typedef enum EnemyTexIdentity : unsigned char;


typedef _anon0 type_0[2];
typedef EnemyTexRectangle type_1[5];

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

EnemyTexRectangle crush_hil_tex[5];

void* EnemyTexMucusTexData();
void EnemyTexMucusParameterSet(EnemyTexParameter* ptex);
void* EnemyTexCrushHilTexData();
void EnemyTexCrushHilParameterSet(EnemyTexParameter* ptex, int type);

// 
// Start address: 0x1bf950
void* EnemyTexMucusTexData()
{
	// Line 15, Address: 0x1bf950, Func Offset: 0
	// Func End, Address: 0x1bf960, Func Offset: 0x10
}

// 
// Start address: 0x1bf960
void EnemyTexMucusParameterSet(EnemyTexParameter* ptex)
{
	// Line 20, Address: 0x1bf960, Func Offset: 0
	// Func End, Address: 0x1bf968, Func Offset: 0x8
}

// 
// Start address: 0x1bf970
void* EnemyTexCrushHilTexData()
{
	// Line 33, Address: 0x1bf970, Func Offset: 0
	// Func End, Address: 0x1bf980, Func Offset: 0x10
}

// 
// Start address: 0x1bf980
void EnemyTexCrushHilParameterSet(EnemyTexParameter* ptex, int type)
{
	// Line 37, Address: 0x1bf980, Func Offset: 0
	// Line 38, Address: 0x1bf998, Func Offset: 0x18
	// Line 39, Address: 0x1bf9a0, Func Offset: 0x20
	// Line 40, Address: 0x1bf9b8, Func Offset: 0x38
	// Func End, Address: 0x1bf9cc, Func Offset: 0x4c
}

