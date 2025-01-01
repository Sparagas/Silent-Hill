typedef struct _anon0;
typedef struct EnemyTexParameter;
typedef enum EnemyTexIdentity : unsigned char;


typedef _anon0 type[2];

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


void* EnemyTexBloodPoolTexData();
void* EnemyTexBloodPoolClutData();

// 
// Start address: 0x1eba60
void* EnemyTexBloodPoolTexData()
{
	// Line 15, Address: 0x1eba60, Func Offset: 0
	// Func End, Address: 0x1eba70, Func Offset: 0x10
}

// 
// Start address: 0x1eba70
void* EnemyTexBloodPoolClutData()
{
	// Line 20, Address: 0x1eba70, Func Offset: 0
	// Func End, Address: 0x1eba80, Func Offset: 0x10
}

