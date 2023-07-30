typedef enum EnemySenseResultType : unsigned char;
typedef enum EnemyPlayerType : unsigned char;
typedef struct EnemySenseResult;
typedef struct EnemySenseData;
typedef struct EnemyClHitResult;
typedef struct sfObj;
typedef enum EnemySenseType : unsigned char;
typedef union _anon0;
typedef struct EnemySenseWork;
typedef struct sfAllocateList2;

typedef void(*type_2)(sfObj*);
typedef void(*type_9)(sfObj*);

typedef float type_0[4];
typedef _anon0 type_1[256];
typedef short type_3[2];
typedef unsigned short type_4[2];
typedef char type_5[4];
typedef unsigned char type_6[4];
typedef float type_7[1];
typedef int type_8[1];

enum EnemySenseResultType : unsigned char
{
	EN_SENSE_RES_NOTHING,
	EN_SENSE_RES_FOUND
};

enum EnemyPlayerType : unsigned char
{
	ENEMY_PLAYER_TYPE_PLAYER,
	ENEMY_PLAYER_TYPE_HEROINE,
	ENEMY_PLAYER_TYPE_NPC,
	ENEMY_PLAYER_TYPE_MAX,
	ENEMY_PLAYER_TYPE_NOTHING = 0xff
};

struct EnemySenseResult
{
	float pos[4];
	EnemySenseResultType type;
	float level;
	sfObj* obj;
};

struct EnemySenseData
{
	EnemySenseResult result;
	float* pos;
	float* rot;
	float dist_limit;
	float dist_limit2;
	float angle_limit;
	float check_height;
	EnemySenseType type;
	EnemyPlayerType player;
};

struct EnemyClHitResult
{
};

struct sfObj
{
	_anon0 fwork[256];
	_anon0* work;
	void(*func)(sfObj*);
	_anon0* work_pt0;
	_anon0* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon0* sys_work;
	_anon0* scene_work;
	_anon0* event_work;
	_anon0* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

enum EnemySenseType : unsigned char
{
	EN_SENSE_TYPE_SIGHT_OF_PLAYER,
	EN_SENSE_TYPE_SIGHT_OF_PLAYER_XZ,
	EN_SENSE_TYPE_NOSIGHT_OF_PLAYER,
	EN_SENSE_TYPE_NOSIGHT_OF_PLAYER_XZ
};

union _anon0
{
	int si;
	unsigned int ui;
	void* pt;
	short ss[2];
	unsigned short us[2];
	char sc[4];
	unsigned char uc[4];
	float f;
	float fv[1];
	int iv[1];
};

struct EnemySenseWork
{
	sfAllocateList2 work_list;
};

struct sfAllocateList2
{
	char* work_top;
	unsigned int size;
	unsigned int lsize;
	int number;
};

EnemySenseWork en_sense;

void EnemySenseWorkInit();
void EnemySenseTimePasses();
int check_hit_eye(EnemyClHitResult* res, float* pos, float* tpos);
EnemySenseResultType EnemySenseSightOfPlayer(EnemySenseResult* res, EnemyPlayerType player, float* pos, float* rot, float dist, float angle);
EnemySenseResultType EnemySenseSightOfPlayerXZ(EnemySenseResult* res, EnemyPlayerType player, float* pos, float* rot, float dist, float angle);
EnemySenseResultType EnemySenseFeelPlayer(EnemySenseResult* res, EnemyPlayerType player, float* pos, float dist);
EnemySenseResultType EnemySenseFeelPlayerXZ(EnemySenseResult* res, EnemyPlayerType player, float* pos, float dist);
EnemySenseResultType EnemySenseSmellOfBlood(EnemySenseResult* res, sfObj* obj, float dist);
EnemySenseResultType EnemySenseSmellOfTerritory(EnemySenseResult* res, sfObj* obj, float dist);
float EnemySenseGetBloodRange(EnemySenseResult* res);
int EnemyEDSenseTest(void* sense_data);
EnemySenseData* EnemySenseDataWorkGet();
void EnemySenseDataWorkFree(EnemySenseData* pwork);
void EnemySenseDataWorkAllDestruct();

// 
// Start address: 0x1a42d0
void EnemySenseWorkInit()
{
	// Line 32, Address: 0x1a42d0, Func Offset: 0
	// Line 33, Address: 0x1a42d4, Func Offset: 0x4
	// Line 32, Address: 0x1a42d8, Func Offset: 0x8
	// Line 33, Address: 0x1a42dc, Func Offset: 0xc
	// Line 34, Address: 0x1a42e8, Func Offset: 0x18
	// Line 35, Address: 0x1a42f8, Func Offset: 0x28
	// Func End, Address: 0x1a4304, Func Offset: 0x34
}

// 
// Start address: 0x1a4310
void EnemySenseTimePasses()
{
	// Line 44, Address: 0x1a4310, Func Offset: 0
	// Func End, Address: 0x1a4318, Func Offset: 0x8
}

// 
// Start address: 0x1a4320
int check_hit_eye(EnemyClHitResult* res, float* pos, float* tpos)
{
	// Line 53, Address: 0x1a4320, Func Offset: 0
	// Line 54, Address: 0x1a432c, Func Offset: 0xc
	// Line 56, Address: 0x1a4354, Func Offset: 0x34
	// Func End, Address: 0x1a4364, Func Offset: 0x44
}

// 
// Start address: 0x1a4370
EnemySenseResultType EnemySenseSightOfPlayer(EnemySenseResult* res, EnemyPlayerType player, float* pos, float* rot, float dist, float angle)
{
	float* ppos;
	float vec[4];
	float dir[4];
	EnemyClHitResult* cres;
	float d;
	float c;
	float ct;
	// Line 70, Address: 0x1a4370, Func Offset: 0
	// Line 75, Address: 0x1a43ac, Func Offset: 0x3c
	// Line 76, Address: 0x1a43b4, Func Offset: 0x44
	// Line 77, Address: 0x1a43bc, Func Offset: 0x4c
	// Line 78, Address: 0x1a43cc, Func Offset: 0x5c
	// Line 79, Address: 0x1a43d4, Func Offset: 0x64
	// Line 80, Address: 0x1a43d8, Func Offset: 0x68
	// Line 81, Address: 0x1a43e4, Func Offset: 0x74
	// Line 83, Address: 0x1a43f0, Func Offset: 0x80
	// Line 84, Address: 0x1a4408, Func Offset: 0x98
	// Line 85, Address: 0x1a4430, Func Offset: 0xc0
	// Line 89, Address: 0x1a4440, Func Offset: 0xd0
	// Line 90, Address: 0x1a4474, Func Offset: 0x104
	// Line 91, Address: 0x1a4480, Func Offset: 0x110
	// Line 92, Address: 0x1a44a4, Func Offset: 0x134
	// Line 93, Address: 0x1a44ac, Func Offset: 0x13c
	// Line 98, Address: 0x1a44b8, Func Offset: 0x148
	// Line 99, Address: 0x1a44cc, Func Offset: 0x15c
	// Line 100, Address: 0x1a44d8, Func Offset: 0x168
	// Line 105, Address: 0x1a44f0, Func Offset: 0x180
	// Line 107, Address: 0x1a44f8, Func Offset: 0x188
	// Line 106, Address: 0x1a44fc, Func Offset: 0x18c
	// Line 107, Address: 0x1a4500, Func Offset: 0x190
	// Line 108, Address: 0x1a4504, Func Offset: 0x194
	// Line 109, Address: 0x1a4508, Func Offset: 0x198
	// Line 110, Address: 0x1a4510, Func Offset: 0x1a0
	// Line 111, Address: 0x1a4518, Func Offset: 0x1a8
	// Func End, Address: 0x1a4548, Func Offset: 0x1d8
}

// 
// Start address: 0x1a4550
EnemySenseResultType EnemySenseSightOfPlayerXZ(EnemySenseResult* res, EnemyPlayerType player, float* pos, float* rot, float dist, float angle)
{
	float* ppos;
	float vec[4];
	float dir[4];
	EnemyClHitResult* cres;
	float d;
	float c;
	float ct;
	// Line 125, Address: 0x1a4550, Func Offset: 0
	// Line 130, Address: 0x1a458c, Func Offset: 0x3c
	// Line 131, Address: 0x1a4594, Func Offset: 0x44
	// Line 132, Address: 0x1a459c, Func Offset: 0x4c
	// Line 133, Address: 0x1a45ac, Func Offset: 0x5c
	// Line 134, Address: 0x1a45b4, Func Offset: 0x64
	// Line 135, Address: 0x1a45b8, Func Offset: 0x68
	// Line 136, Address: 0x1a45c4, Func Offset: 0x74
	// Line 138, Address: 0x1a45d0, Func Offset: 0x80
	// Line 139, Address: 0x1a45e8, Func Offset: 0x98
	// Line 140, Address: 0x1a45f4, Func Offset: 0xa4
	// Line 141, Address: 0x1a4604, Func Offset: 0xb4
	// Line 145, Address: 0x1a4614, Func Offset: 0xc4
	// Line 146, Address: 0x1a4648, Func Offset: 0xf8
	// Line 148, Address: 0x1a4654, Func Offset: 0x104
	// Line 147, Address: 0x1a465c, Func Offset: 0x10c
	// Line 148, Address: 0x1a4668, Func Offset: 0x118
	// Line 152, Address: 0x1a46a0, Func Offset: 0x150
	// Line 153, Address: 0x1a46cc, Func Offset: 0x17c
	// Line 154, Address: 0x1a46f0, Func Offset: 0x1a0
	// Line 155, Address: 0x1a46f8, Func Offset: 0x1a8
	// Line 160, Address: 0x1a4704, Func Offset: 0x1b4
	// Line 161, Address: 0x1a4718, Func Offset: 0x1c8
	// Line 162, Address: 0x1a4724, Func Offset: 0x1d4
	// Line 166, Address: 0x1a473c, Func Offset: 0x1ec
	// Line 167, Address: 0x1a4740, Func Offset: 0x1f0
	// Line 169, Address: 0x1a4748, Func Offset: 0x1f8
	// Line 168, Address: 0x1a474c, Func Offset: 0x1fc
	// Line 169, Address: 0x1a4750, Func Offset: 0x200
	// Line 170, Address: 0x1a4754, Func Offset: 0x204
	// Line 171, Address: 0x1a4758, Func Offset: 0x208
	// Line 172, Address: 0x1a4760, Func Offset: 0x210
	// Line 173, Address: 0x1a4768, Func Offset: 0x218
	// Func End, Address: 0x1a4798, Func Offset: 0x248
}

// 
// Start address: 0x1a47a0
EnemySenseResultType EnemySenseFeelPlayer(EnemySenseResult* res, EnemyPlayerType player, float* pos, float dist)
{
	float* ppos;
	float d;
	// Line 185, Address: 0x1a47a0, Func Offset: 0
	// Line 188, Address: 0x1a47c4, Func Offset: 0x24
	// Line 189, Address: 0x1a47cc, Func Offset: 0x2c
	// Line 190, Address: 0x1a47d0, Func Offset: 0x30
	// Line 191, Address: 0x1a47e0, Func Offset: 0x40
	// Line 193, Address: 0x1a47e8, Func Offset: 0x48
	// Line 194, Address: 0x1a47f4, Func Offset: 0x54
	// Line 195, Address: 0x1a4804, Func Offset: 0x64
	// Line 196, Address: 0x1a4810, Func Offset: 0x70
	// Line 197, Address: 0x1a4814, Func Offset: 0x74
	// Line 198, Address: 0x1a481c, Func Offset: 0x7c
	// Line 199, Address: 0x1a4820, Func Offset: 0x80
	// Line 200, Address: 0x1a4828, Func Offset: 0x88
	// Func End, Address: 0x1a4844, Func Offset: 0xa4
}

// 
// Start address: 0x1a4850
EnemySenseResultType EnemySenseFeelPlayerXZ(EnemySenseResult* res, EnemyPlayerType player, float* pos, float dist)
{
	float* ppos;
	float d;
	// Line 212, Address: 0x1a4850, Func Offset: 0
	// Line 215, Address: 0x1a4874, Func Offset: 0x24
	// Line 216, Address: 0x1a487c, Func Offset: 0x2c
	// Line 217, Address: 0x1a4880, Func Offset: 0x30
	// Line 218, Address: 0x1a4890, Func Offset: 0x40
	// Line 220, Address: 0x1a4898, Func Offset: 0x48
	// Line 221, Address: 0x1a48a4, Func Offset: 0x54
	// Line 222, Address: 0x1a48b4, Func Offset: 0x64
	// Line 223, Address: 0x1a48c0, Func Offset: 0x70
	// Line 224, Address: 0x1a48c4, Func Offset: 0x74
	// Line 225, Address: 0x1a48cc, Func Offset: 0x7c
	// Line 226, Address: 0x1a48d0, Func Offset: 0x80
	// Line 227, Address: 0x1a48d8, Func Offset: 0x88
	// Func End, Address: 0x1a48f4, Func Offset: 0xa4
}

// 
// Start address: 0x1a4900
EnemySenseResultType EnemySenseSmellOfBlood(EnemySenseResult* res, sfObj* obj, float dist)
{
	sfObj* tobj;
	float pos[4];
	float* tpos;
	float d;
	// Line 267, Address: 0x1a4900, Func Offset: 0
	// Line 272, Address: 0x1a4918, Func Offset: 0x18
	// Line 267, Address: 0x1a491c, Func Offset: 0x1c
	// Line 272, Address: 0x1a4920, Func Offset: 0x20
	// Line 274, Address: 0x1a492c, Func Offset: 0x2c
	// Line 275, Address: 0x1a4940, Func Offset: 0x40
	// Line 276, Address: 0x1a4948, Func Offset: 0x48
	// Line 277, Address: 0x1a4954, Func Offset: 0x54
	// Line 278, Address: 0x1a4960, Func Offset: 0x60
	// Line 280, Address: 0x1a496c, Func Offset: 0x6c
	// Line 279, Address: 0x1a4970, Func Offset: 0x70
	// Line 281, Address: 0x1a4974, Func Offset: 0x74
	// Line 282, Address: 0x1a497c, Func Offset: 0x7c
	// Line 283, Address: 0x1a4980, Func Offset: 0x80
	// Line 284, Address: 0x1a4984, Func Offset: 0x84
	// Line 285, Address: 0x1a4988, Func Offset: 0x88
	// Line 286, Address: 0x1a4998, Func Offset: 0x98
	// Line 287, Address: 0x1a49a0, Func Offset: 0xa0
	// Line 288, Address: 0x1a49a4, Func Offset: 0xa4
	// Func End, Address: 0x1a49c0, Func Offset: 0xc0
}

// 
// Start address: 0x1a49c0
EnemySenseResultType EnemySenseSmellOfTerritory(EnemySenseResult* res, sfObj* obj, float dist)
{
	sfObj* tobj;
	float pos[4];
	float* tpos;
	float d;
	// Line 298, Address: 0x1a49c0, Func Offset: 0
	// Line 303, Address: 0x1a49e0, Func Offset: 0x20
	// Line 298, Address: 0x1a49e4, Func Offset: 0x24
	// Line 303, Address: 0x1a49e8, Func Offset: 0x28
	// Line 305, Address: 0x1a49f4, Func Offset: 0x34
	// Line 306, Address: 0x1a4a08, Func Offset: 0x48
	// Line 307, Address: 0x1a4a10, Func Offset: 0x50
	// Line 308, Address: 0x1a4a20, Func Offset: 0x60
	// Line 309, Address: 0x1a4a2c, Func Offset: 0x6c
	// Line 310, Address: 0x1a4a38, Func Offset: 0x78
	// Line 312, Address: 0x1a4a44, Func Offset: 0x84
	// Line 311, Address: 0x1a4a48, Func Offset: 0x88
	// Line 313, Address: 0x1a4a4c, Func Offset: 0x8c
	// Line 314, Address: 0x1a4a54, Func Offset: 0x94
	// Line 315, Address: 0x1a4a58, Func Offset: 0x98
	// Line 317, Address: 0x1a4a5c, Func Offset: 0x9c
	// Line 318, Address: 0x1a4a60, Func Offset: 0xa0
	// Line 319, Address: 0x1a4a70, Func Offset: 0xb0
	// Line 320, Address: 0x1a4a78, Func Offset: 0xb8
	// Line 321, Address: 0x1a4a7c, Func Offset: 0xbc
	// Func End, Address: 0x1a4a9c, Func Offset: 0xdc
}

// 
// Start address: 0x1a4aa0
float EnemySenseGetBloodRange(EnemySenseResult* res)
{
	float r;
	// Line 328, Address: 0x1a4aa0, Func Offset: 0
	// Line 329, Address: 0x1a4ab4, Func Offset: 0x14
	// Line 330, Address: 0x1a4ab8, Func Offset: 0x18
	// Line 332, Address: 0x1a4adc, Func Offset: 0x3c
	// Line 333, Address: 0x1a4afc, Func Offset: 0x5c
	// Line 334, Address: 0x1a4b00, Func Offset: 0x60
	// Line 337, Address: 0x1a4b0c, Func Offset: 0x6c
	// Line 339, Address: 0x1a4b10, Func Offset: 0x70
	// Line 338, Address: 0x1a4b14, Func Offset: 0x74
	// Line 339, Address: 0x1a4b18, Func Offset: 0x78
	// Func End, Address: 0x1a4b28, Func Offset: 0x88
}

// 
// Start address: 0x1a4b30
int EnemyEDSenseTest(void* sense_data)
{
	EnemySenseData* ps;
	int result;
	float pos[4];
	// Line 346, Address: 0x1a4b30, Func Offset: 0
	// Line 351, Address: 0x1a4b38, Func Offset: 0x8
	// Line 346, Address: 0x1a4b3c, Func Offset: 0xc
	// Line 350, Address: 0x1a4b40, Func Offset: 0x10
	// Line 351, Address: 0x1a4b48, Func Offset: 0x18
	// Line 353, Address: 0x1a4b50, Func Offset: 0x20
	// Line 354, Address: 0x1a4b84, Func Offset: 0x54
	// Line 355, Address: 0x1a4b88, Func Offset: 0x58
	// Line 356, Address: 0x1a4b94, Func Offset: 0x64
	// Line 355, Address: 0x1a4b98, Func Offset: 0x68
	// Line 356, Address: 0x1a4ba8, Func Offset: 0x78
	// Line 358, Address: 0x1a4bc4, Func Offset: 0x94
	// Line 359, Address: 0x1a4bcc, Func Offset: 0x9c
	// Line 362, Address: 0x1a4be0, Func Offset: 0xb0
	// Line 364, Address: 0x1a4be8, Func Offset: 0xb8
	// Line 365, Address: 0x1a4bf4, Func Offset: 0xc4
	// Line 364, Address: 0x1a4bf8, Func Offset: 0xc8
	// Line 365, Address: 0x1a4c08, Func Offset: 0xd8
	// Line 367, Address: 0x1a4c24, Func Offset: 0xf4
	// Line 368, Address: 0x1a4c2c, Func Offset: 0xfc
	// Line 371, Address: 0x1a4c40, Func Offset: 0x110
	// Line 373, Address: 0x1a4c48, Func Offset: 0x118
	// Line 374, Address: 0x1a4c54, Func Offset: 0x124
	// Line 373, Address: 0x1a4c58, Func Offset: 0x128
	// Line 374, Address: 0x1a4c68, Func Offset: 0x138
	// Line 376, Address: 0x1a4c88, Func Offset: 0x158
	// Line 377, Address: 0x1a4c90, Func Offset: 0x160
	// Line 380, Address: 0x1a4ca8, Func Offset: 0x178
	// Line 382, Address: 0x1a4cb0, Func Offset: 0x180
	// Line 383, Address: 0x1a4cbc, Func Offset: 0x18c
	// Line 382, Address: 0x1a4cc0, Func Offset: 0x190
	// Line 383, Address: 0x1a4cd0, Func Offset: 0x1a0
	// Line 385, Address: 0x1a4cf0, Func Offset: 0x1c0
	// Line 386, Address: 0x1a4cf8, Func Offset: 0x1c8
	// Line 390, Address: 0x1a4d14, Func Offset: 0x1e4
	// Line 392, Address: 0x1a4d18, Func Offset: 0x1e8
	// Func End, Address: 0x1a4d28, Func Offset: 0x1f8
}

// 
// Start address: 0x1a4d30
EnemySenseData* EnemySenseDataWorkGet()
{
	// Line 399, Address: 0x1a4d30, Func Offset: 0
	// Func End, Address: 0x1a4d3c, Func Offset: 0xc
}

// 
// Start address: 0x1a4d40
void EnemySenseDataWorkFree(EnemySenseData* pwork)
{
	// Line 407, Address: 0x1a4d44, Func Offset: 0x4
	// Func End, Address: 0x1a4d50, Func Offset: 0x10
}

// 
// Start address: 0x1a4d50
void EnemySenseDataWorkAllDestruct()
{
	// Line 418, Address: 0x1a4d50, Func Offset: 0
	// Func End, Address: 0x1a4d5c, Func Offset: 0xc
}

