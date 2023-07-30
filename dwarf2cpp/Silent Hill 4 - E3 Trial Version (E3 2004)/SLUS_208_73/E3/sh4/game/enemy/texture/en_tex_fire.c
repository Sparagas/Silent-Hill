typedef struct EnemyTexParameter;
typedef struct sfBillboard;
typedef struct _anon0;
typedef enum EnemyTexIdentity : unsigned char;


typedef float type_0[4];
typedef _anon0 type_1[2];

struct EnemyTexParameter
{
	_anon0 st[2];
	EnemyTexIdentity texid;
	unsigned long clamp;
	int rotate;
};

struct sfBillboard
{
	float worldpos[4];
	float width;
	float height;
	float transparency;
	unsigned int color;
	unsigned short u;
	unsigned short v;
	unsigned short t_width;
	unsigned short t_height;
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


void* EnemyTexFireTexData();
void* EnemyTexFireLightTexData();
void* EnemyTexFlame1TexData();
void* EnemyTexFlame2TexData();
void* EnemyTexToachTexData();
void EnemyTexFlame1ParameterSet(EnemyTexParameter* ptex, int id);
void EnemyTexFlame2ParameterSet(EnemyTexParameter* ptex, int id);
void EnemyTexFireSparkParameterSet(EnemyTexParameter* ptex, int id);
void EnemyTexToachParameterSet(EnemyTexParameter* ptex, int id);

// 
// Start address: 0x1a8390
void* EnemyTexFireTexData()
{
	// Line 30, Address: 0x1a8390, Func Offset: 0
	// Func End, Address: 0x1a83a0, Func Offset: 0x10
}

// 
// Start address: 0x1a83a0
void* EnemyTexFireLightTexData()
{
	// Line 35, Address: 0x1a83a0, Func Offset: 0
	// Func End, Address: 0x1a83b0, Func Offset: 0x10
}

// 
// Start address: 0x1a83b0
void* EnemyTexFlame1TexData()
{
	// Line 40, Address: 0x1a83b0, Func Offset: 0
	// Func End, Address: 0x1a83c0, Func Offset: 0x10
}

// 
// Start address: 0x1a83c0
void* EnemyTexFlame2TexData()
{
	// Line 45, Address: 0x1a83c0, Func Offset: 0
	// Func End, Address: 0x1a83d0, Func Offset: 0x10
}

// 
// Start address: 0x1a83d0
void* EnemyTexToachTexData()
{
	// Line 50, Address: 0x1a83d0, Func Offset: 0
	// Func End, Address: 0x1a83e0, Func Offset: 0x10
}

// 
// Start address: 0x1a83e0
void EnemyTexFlame1ParameterSet(EnemyTexParameter* ptex, int id)
{
	int u;
	int v;
	// Line 54, Address: 0x1a83e0, Func Offset: 0
	// Line 56, Address: 0x1a83f8, Func Offset: 0x18
	// Line 57, Address: 0x1a8400, Func Offset: 0x20
	// Line 58, Address: 0x1a8418, Func Offset: 0x38
	// Line 59, Address: 0x1a842c, Func Offset: 0x4c
	// Line 60, Address: 0x1a8444, Func Offset: 0x64
	// Line 63, Address: 0x1a8454, Func Offset: 0x74
	// Func End, Address: 0x1a8468, Func Offset: 0x88
}

// 
// Start address: 0x1a8470
void EnemyTexFlame2ParameterSet(EnemyTexParameter* ptex, int id)
{
	int u;
	int v;
	// Line 66, Address: 0x1a8470, Func Offset: 0
	// Line 68, Address: 0x1a8488, Func Offset: 0x18
	// Line 69, Address: 0x1a8490, Func Offset: 0x20
	// Line 70, Address: 0x1a84a8, Func Offset: 0x38
	// Line 71, Address: 0x1a84bc, Func Offset: 0x4c
	// Line 72, Address: 0x1a84d4, Func Offset: 0x64
	// Line 75, Address: 0x1a84e4, Func Offset: 0x74
	// Func End, Address: 0x1a84f8, Func Offset: 0x88
}

// 
// Start address: 0x1a8500
void EnemyTexFireSparkParameterSet(EnemyTexParameter* ptex, int id)
{
	int v;
	// Line 109, Address: 0x1a8500, Func Offset: 0
	// Line 111, Address: 0x1a8514, Func Offset: 0x14
	// Line 112, Address: 0x1a8520, Func Offset: 0x20
	// Line 113, Address: 0x1a8530, Func Offset: 0x30
	// Line 114, Address: 0x1a853c, Func Offset: 0x3c
	// Line 115, Address: 0x1a8540, Func Offset: 0x40
	// Line 117, Address: 0x1a8554, Func Offset: 0x54
	// Func End, Address: 0x1a8568, Func Offset: 0x68
}

// 
// Start address: 0x1a8570
void EnemyTexToachParameterSet(EnemyTexParameter* ptex, int id)
{
	int u;
	int v;
	// Line 131, Address: 0x1a8570, Func Offset: 0
	// Line 133, Address: 0x1a8588, Func Offset: 0x18
	// Line 134, Address: 0x1a8590, Func Offset: 0x20
	// Line 135, Address: 0x1a85a8, Func Offset: 0x38
	// Line 136, Address: 0x1a85bc, Func Offset: 0x4c
	// Line 137, Address: 0x1a85d4, Func Offset: 0x64
	// Line 140, Address: 0x1a85e4, Func Offset: 0x74
	// Func End, Address: 0x1a85f8, Func Offset: 0x88
}

