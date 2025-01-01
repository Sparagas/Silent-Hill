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


void* EnemyTexCoaltarTexData();
void EnemyTexCoaltarParameterSet(EnemyTexParameter* ptex, int type);

// 
// Start address: 0x1afb00
void* EnemyTexCoaltarTexData()
{
	// Line 20, Address: 0x1afb00, Func Offset: 0
	// Func End, Address: 0x1afb10, Func Offset: 0x10
}

// 
// Start address: 0x1afb10
void EnemyTexCoaltarParameterSet(EnemyTexParameter* ptex, int type)
{
	// Line 24, Address: 0x1afb10, Func Offset: 0
	// Line 29, Address: 0x1afb28, Func Offset: 0x18
	// Line 30, Address: 0x1afb30, Func Offset: 0x20
	// Line 31, Address: 0x1afb74, Func Offset: 0x64
	// Func End, Address: 0x1afb88, Func Offset: 0x78
}

