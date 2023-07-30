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


void get_id(int* file_id, int* tex_id);
void* EnemyTexWallTexData();
void* EnemyTexWallClutData();
void EnemyTexWallParameterSet(EnemyTexParameter* ptex);

// 
// Start address: 0x2e1ea0
void get_id(int* file_id, int* tex_id)
{
	int stage;
	int scene;
	// Line 16, Address: 0x2e1ea0, Func Offset: 0
	// Line 18, Address: 0x2e1ea4, Func Offset: 0x4
	// Line 16, Address: 0x2e1ea8, Func Offset: 0x8
	// Line 18, Address: 0x2e1eac, Func Offset: 0xc
	// Line 16, Address: 0x2e1eb0, Func Offset: 0x10
	// Line 18, Address: 0x2e1ec0, Func Offset: 0x20
	// Line 20, Address: 0x2e1ec8, Func Offset: 0x28
	// Line 21, Address: 0x2e1ed0, Func Offset: 0x30
	// Line 22, Address: 0x2e1ed8, Func Offset: 0x38
	// Line 24, Address: 0x2e1f00, Func Offset: 0x60
	// Line 25, Address: 0x2e1f14, Func Offset: 0x74
	// Line 26, Address: 0x2e1f18, Func Offset: 0x78
	// Line 29, Address: 0x2e1f20, Func Offset: 0x80
	// Line 31, Address: 0x2e1f28, Func Offset: 0x88
	// Line 32, Address: 0x2e1f34, Func Offset: 0x94
	// Line 33, Address: 0x2e1f38, Func Offset: 0x98
	// Line 34, Address: 0x2e1f40, Func Offset: 0xa0
	// Line 36, Address: 0x2e1f48, Func Offset: 0xa8
	// Line 38, Address: 0x2e1f50, Func Offset: 0xb0
	// Line 41, Address: 0x2e1f78, Func Offset: 0xd8
	// Line 42, Address: 0x2e1f80, Func Offset: 0xe0
	// Line 41, Address: 0x2e1f84, Func Offset: 0xe4
	// Line 43, Address: 0x2e1f88, Func Offset: 0xe8
	// Line 45, Address: 0x2e1f90, Func Offset: 0xf0
	// Line 46, Address: 0x2e1f98, Func Offset: 0xf8
	// Line 48, Address: 0x2e1fa0, Func Offset: 0x100
	// Line 51, Address: 0x2e1fac, Func Offset: 0x10c
	// Line 52, Address: 0x2e1fb0, Func Offset: 0x110
	// Func End, Address: 0x2e1fc8, Func Offset: 0x128
}

// 
// Start address: 0x2e1fd0
void* EnemyTexWallTexData()
{
	int file_id;
	int tex_id;
	// Line 55, Address: 0x2e1fd0, Func Offset: 0
	// Line 58, Address: 0x2e1fd8, Func Offset: 0x8
	// Line 59, Address: 0x2e1fe4, Func Offset: 0x14
	// Line 60, Address: 0x2e1ff0, Func Offset: 0x20
	// Func End, Address: 0x2e1ffc, Func Offset: 0x2c
}

// 
// Start address: 0x2e2000
void* EnemyTexWallClutData()
{
	int file_id;
	int tex_id;
	// Line 63, Address: 0x2e2000, Func Offset: 0
	// Line 66, Address: 0x2e2008, Func Offset: 0x8
	// Line 67, Address: 0x2e2014, Func Offset: 0x14
	// Line 68, Address: 0x2e2020, Func Offset: 0x20
	// Func End, Address: 0x2e202c, Func Offset: 0x2c
}

// 
// Start address: 0x2e2030
void EnemyTexWallParameterSet(EnemyTexParameter* ptex)
{
	// Line 72, Address: 0x2e2030, Func Offset: 0
	// Func End, Address: 0x2e2038, Func Offset: 0x8
}

