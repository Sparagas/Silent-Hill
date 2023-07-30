typedef enum EnemySeKind : unsigned char;
typedef struct sfObj;
typedef struct EnemyManageDataOne;
typedef enum EnemyManageEntryType : unsigned char;
typedef enum _enum : unsigned char;
typedef struct EnemyManageData;
typedef struct EventFlag;
typedef struct EnemyManageBloodPoolData;
typedef union _anon0;
typedef enum EnemyKind : unsigned char;
typedef struct EnemyManageReplaceInfo;
typedef enum EnemyManageMoveSceneType : unsigned char;
typedef struct EnemyManage;
typedef enum EnemyCondition : unsigned char;

typedef void(*type_0)(sfObj*);
typedef void(*type_1)(sfObj*);
typedef void(*type_2)(sfObj*);
typedef void(*type_3)(sfObj*);
typedef void(*type_10)(sfObj*);
typedef void(*type_16)(sfObj*);

typedef int type_4[14];
typedef unsigned char type_5[320];
typedef int type_6[14];
typedef int type_7[64];
typedef _anon0 type_8[4];
typedef _anon0 type_9[256];
typedef float type_11[3];
typedef unsigned int type_12[32];
typedef EnemyManageDataOne type_13[64];
typedef EnemyManageBloodPoolData type_14[64];
typedef unsigned int type_15[128];
typedef short type_17[2];
typedef unsigned short type_18[2];
typedef char type_19[4];
typedef float type_20[4];
typedef unsigned char type_21[4];
typedef float type_22[1];
typedef int type_23[1];
typedef float type_24[4];
typedef EnemyManageReplaceInfo type_25[14];

enum EnemySeKind : unsigned char
{
	ENEMY_SE_KIND_NOTHING,
	ENEMY_SE_KIND_CELL,
	ENEMY_SE_KIND_MUSH,
	ENEMY_SE_KIND_BUZZ,
	ENEMY_SE_KIND_MM,
	ENEMY_SE_KIND_WALLMAN,
	ENEMY_SE_KIND_WHEEL,
	ENEMY_SE_KIND_JINMEN,
	ENEMY_SE_KIND_TWINS,
	ENEMY_SE_KIND_HIL,
	ENEMY_SE_KIND_HYENA,
	ENEMY_SE_KIND_MULTI,
	ENEMY_SE_KIND_PICKGIRL,
	ENEMY_SE_KIND_FLAMES,
	ENEMY_SE_KIND_FAT,
	ENEMY_SE_KIND_SCRATCH,
	ENEMY_SE_KIND_KILLER0,
	ENEMY_SE_KIND_KILLER1,
	ENEMY_SE_KIND_KILLER2,
	ENEMY_SE_KIND_KILLER3,
	ENEMY_SE_KIND_NURSE,
	ENEMY_SE_KIND_MAX
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

struct EnemyManageDataOne
{
	float pos[4];
	float rot[4];
	unsigned int id;
	short kind;
	short condition;
	float hp;
	float leave_time;
	short serial;
	char step;
	char type;
	char mode;
	char anime;
	char stage;
	char scene;
	unsigned int lru_point;
	_anon0 work[4];
	unsigned int padding;
};

enum EnemyManageEntryType : unsigned char
{
	ENEMY_MANAGE_ENTRY_TYPE_APPEAR,
	ENEMY_MANAGE_ENTRY_TYPE_FLAG_WAIT,
	ENEMY_MANAGE_ENTRY_TYPE_DIFFERENT_LEVEL,
	ENEMY_MANAGE_ENTRY_TYPE_ERASED,
	ENEMY_MANAGE_ENTRY_TYPE_ALREADY,
	ENEMY_MANAGE_ENTRY_TYPE_ANOTHER_SCENE
};

enum _enum : unsigned char
{
	GAME_STAGE_DUMMY,
	GAME_STAGE_3LDK,
	GAME_STAGE_SUBWAY,
	GAME_STAGE_FOREST,
	GAME_STAGE_WATER,
	GAME_STAGE_BUILDING,
	GAME_STAGE_HOME,
	GAME_STAGE_HOSPITAL,
	GAME_STAGE_PAST_HOME,
	GAME_STAGE_LAST,
	GAME_STAGE_TUNNEL,
	GAME_STAGE_SPIRAL,
	GAME_STAGE_TEST,
	GAME_STAGE_MAX
};

struct EnemyManageData
{
	unsigned int destroy_flag[32];
	EnemyManageDataOne data[64];
	EnemyManageBloodPoolData bloodpool[64];
	unsigned int item_data[128];
	float hil_size;
	unsigned int version;
};

struct EventFlag
{
	unsigned char flag[320];
};

struct EnemyManageBloodPoolData
{
	float pos[3];
	float size;
	char stage;
	char scene;
	unsigned short lru_point;
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

struct EnemyManageReplaceInfo
{
	char stage;
	char latter;
	char version;
};

enum EnemyManageMoveSceneType : unsigned char
{
	EN_MOVESCENE_ALL,
	EN_MOVESCENE_IN_SB14_TRAIN
};

struct EnemyManage
{
	float scene_move[4];
	EnemyManageData data;
	float stay_time;
	int stage;
	int latter;
	int step;
	int ms_old_scene;
	int ms_new_scene;
	int additional_scene;
	EnemyManageMoveSceneType ms_type;
	sfObj* finished_ghost;
	sfObj* released_ghost;
	int flag_wait_check;
};

enum EnemyCondition : unsigned char
{
	ENEMY_CONDITION_NOENTRY,
	ENEMY_CONDITION_NORMAL,
	ENEMY_CONDITION_CAUTION,
	ENEMY_CONDITION_CHASE,
	ENEMY_CONDITION_ESCAPE,
	ENEMY_CONDITION_BATTLE,
	ENEMY_CONDITION_SEIZE,
	ENEMY_CONDITION_INVINCIBLE,
	ENEMY_CONDITION_RISE,
	ENEMY_CONDITION_DAMAGE,
	ENEMY_CONDITION_DYING,
	ENEMY_CONDITION_DEAD,
	ENEMY_CONDITION_SPECIAL,
	ENEMY_CONDITION_HIDDEN,
	ENEMY_CONDITION_FULLHIDDEN,
	ENEMY_CONDITION_ANOTHERSCENE,
	ENEMY_CONDITION_ERASE,
	ENEMY_CONDITION_FLAGWAIT,
	ENEMY_CONDITION_EVENT
};

EnemyManageReplaceInfo replace_info[14];
EnemyManage enemy_manage;
void(*EnemyMushDraw)(sfObj*);
void(*EnemyMushDestruct)(sfObj*);
void(*EnemyMushConstruct)(sfObj*);
void(*EnemyMushHandle)(sfObj*);
EventFlag event_flag;
float sg_vector_zero[4];

void EnemyManageDataInit();
int EnemyManageCheckTableID(unsigned int id);
int EnemyManageIsGhostID(unsigned int id);
int get_serial_base(_enum stage);
void EnemyManageFlagSet(int stage, int serial);
int EnemyManageFlagCheck(int stage, int serial);
unsigned int EnemyManageGetNewID();
void stage_init();
void move_scene_exec();
void EnemyManageSceneInit();
void EnemyManageSceneSet();
void EnemyManageSceneEnd();
int EnemyManageInMainStep();
int EnemyManageInPause();
float EnemyManageStayTime();
float EnemyManageHilSize();
void EnemyManageHilExpand();
void EnemyManageHilDeflate();
void* EnemyManageItemData();
void EnemyManageSetAdditionalSceneNumber(int scene);
int EnemyManageAdditionalSceneNumber();
EnemyManageEntryType EnemyManageEntry(sfObj* obj);
int EnemyManageCheckEventFlag(sfObj* obj);
EnemyManageDataOne* EnemyManageDataEntry();
EnemyManageDataOne* EnemyManageDataAddress(unsigned int id);
void EnemyManageDataErase(unsigned int id);
void EnemyManageDataEraseDirect(EnemyManageDataOne* pe);
void EnemyManageStageEnemyDestroy(int stage);
void EnemyManageStageGhostDestroy(int stage);
void EnemyManageMoveScene(int old_scene, int new_scene, EnemyManageMoveSceneType type, float* move);
void EnemyManageDataPreserveCommon(sfObj* obj, EnemyManageDataOne* pe);
void EnemyManageDataExtractCommon(sfObj* obj, EnemyManageDataOne* pe);
void EnemyManageDataSetBloodPool(float* pos, float size);
void EnemyManageDataSave(EnemyManageData* adr);
void erase_stage_enemy(_enum stage);
void EnemyManageDataLoad(EnemyManageData* adr);
void EnemyManageExecute();
void EnemyManageLeaveExec(EnemyManageDataOne* pe);
int EnemyManageMayAppearGhost(EnemyManageDataOne* pe, int scene);
int EnemyCheckAppearFat();
int EnemyGhostFinish(sfObj* obj);
void EnemyGhostRemoveSword(sfObj* obj);
int EnemyGhostCheckFinish(sfObj* obj);
int EnemyGhostCheckRemoveSword(sfObj* obj);
int EnemyEDGhostCheckFinish(void* obj);
void EnemyGhostIgnoreFinishAndRemove(sfObj* obj);
int EnemyManageAddMovableEnemySeKind(EnemySeKind* output_table, int limit, int scene, int num);

// 
// Start address: 0x19bc50
void EnemyManageDataInit()
{
	int i;
	// Line 112, Address: 0x19bc50, Func Offset: 0
	// Line 114, Address: 0x19bc54, Func Offset: 0x4
	// Line 112, Address: 0x19bc58, Func Offset: 0x8
	// Line 114, Address: 0x19bc5c, Func Offset: 0xc
	// Line 115, Address: 0x19bc68, Func Offset: 0x18
	// Line 117, Address: 0x19bc78, Func Offset: 0x28
	// Line 119, Address: 0x19bca8, Func Offset: 0x58
	// Line 120, Address: 0x19bcac, Func Offset: 0x5c
	// Line 119, Address: 0x19bcb0, Func Offset: 0x60
	// Line 120, Address: 0x19bcb4, Func Offset: 0x64
	// Line 122, Address: 0x19bcbc, Func Offset: 0x6c
	// Line 123, Address: 0x19bcc8, Func Offset: 0x78
	// Line 121, Address: 0x19bcd4, Func Offset: 0x84
	// Line 127, Address: 0x19bcdc, Func Offset: 0x8c
	// Func End, Address: 0x19bce8, Func Offset: 0x98
}

// 
// Start address: 0x19bcf0
int EnemyManageCheckTableID(unsigned int id)
{
	// Line 152, Address: 0x19bcf0, Func Offset: 0
	// Line 153, Address: 0x19bcfc, Func Offset: 0xc
	// Line 155, Address: 0x19bd1c, Func Offset: 0x2c
	// Func End, Address: 0x19bd2c, Func Offset: 0x3c
}

// 
// Start address: 0x19bd30
int EnemyManageIsGhostID(unsigned int id)
{
	// Line 163, Address: 0x19bd30, Func Offset: 0
	// Line 165, Address: 0x19bd3c, Func Offset: 0xc
	// Func End, Address: 0x19bd44, Func Offset: 0x14
}

// 
// Start address: 0x19bd50
int get_serial_base(_enum stage)
{
	int num;
	// Line 174, Address: 0x19bd50, Func Offset: 0
	// Line 175, Address: 0x19bd7c, Func Offset: 0x2c
	// Line 177, Address: 0x19bd80, Func Offset: 0x30
	// Line 180, Address: 0x19bd88, Func Offset: 0x38
	// Line 183, Address: 0x19bd90, Func Offset: 0x40
	// Line 186, Address: 0x19bd98, Func Offset: 0x48
	// Line 189, Address: 0x19bda0, Func Offset: 0x50
	// Line 192, Address: 0x19bda8, Func Offset: 0x58
	// Line 194, Address: 0x19bdb0, Func Offset: 0x60
	// Line 196, Address: 0x19bdb4, Func Offset: 0x64
	// Line 198, Address: 0x19bdb8, Func Offset: 0x68
	// Func End, Address: 0x19bdc0, Func Offset: 0x70
}

// 
// Start address: 0x19bdc0
void EnemyManageFlagSet(int stage, int serial)
{
	int n;
	// Line 205, Address: 0x19bdc0, Func Offset: 0
	// Line 207, Address: 0x19bdc4, Func Offset: 0x4
	// Line 208, Address: 0x19bdcc, Func Offset: 0xc
	// Line 209, Address: 0x19bdd4, Func Offset: 0x14
	// Line 210, Address: 0x19bdd8, Func Offset: 0x18
	// Line 211, Address: 0x19be10, Func Offset: 0x50
	// Func End, Address: 0x19be1c, Func Offset: 0x5c
}

// 
// Start address: 0x19be20
int EnemyManageFlagCheck(int stage, int serial)
{
	int n;
	// Line 219, Address: 0x19be20, Func Offset: 0
	// Line 221, Address: 0x19be24, Func Offset: 0x4
	// Line 222, Address: 0x19be38, Func Offset: 0x18
	// Line 223, Address: 0x19be40, Func Offset: 0x20
	// Line 224, Address: 0x19be44, Func Offset: 0x24
	// Line 225, Address: 0x19be80, Func Offset: 0x60
	// Func End, Address: 0x19be8c, Func Offset: 0x6c
}

// 
// Start address: 0x19be90
unsigned int EnemyManageGetNewID()
{
	EnemyManageDataOne* pe;
	int i;
	unsigned int id;
	unsigned int nid;
	sfObj* obj;
	// Line 233, Address: 0x19be90, Func Offset: 0
	// Line 239, Address: 0x19bea0, Func Offset: 0x10
	// Line 233, Address: 0x19bea4, Func Offset: 0x14
	// Line 238, Address: 0x19bea8, Func Offset: 0x18
	// Line 233, Address: 0x19beac, Func Offset: 0x1c
	// Line 239, Address: 0x19beb0, Func Offset: 0x20
	// Line 240, Address: 0x19beb4, Func Offset: 0x24
	// Line 241, Address: 0x19beb8, Func Offset: 0x28
	// Line 242, Address: 0x19bec4, Func Offset: 0x34
	// Line 243, Address: 0x19bec8, Func Offset: 0x38
	// Line 244, Address: 0x19bed8, Func Offset: 0x48
	// Line 245, Address: 0x19bee4, Func Offset: 0x54
	// Line 249, Address: 0x19bee8, Func Offset: 0x58
	// Line 251, Address: 0x19bef8, Func Offset: 0x68
	// Line 252, Address: 0x19bf08, Func Offset: 0x78
	// Line 253, Address: 0x19bf14, Func Offset: 0x84
	// Line 254, Address: 0x19bf24, Func Offset: 0x94
	// Line 255, Address: 0x19bf30, Func Offset: 0xa0
	// Line 258, Address: 0x19bf34, Func Offset: 0xa4
	// Line 259, Address: 0x19bf48, Func Offset: 0xb8
	// Line 260, Address: 0x19bf4c, Func Offset: 0xbc
	// Func End, Address: 0x19bf68, Func Offset: 0xd8
}

// 
// Start address: 0x19bf70
void stage_init()
{
	// Line 267, Address: 0x19bf70, Func Offset: 0
	// Func End, Address: 0x19bf78, Func Offset: 0x8
}

// 
// Start address: 0x19bf80
void move_scene_exec()
{
	float pos[4];
	int stage;
	int old_scene;
	int new_scene;
	int i;
	int f;
	EnemyManageMoveSceneType type;
	EnemyManageDataOne* pe;
	float* move;
	// Line 271, Address: 0x19bf80, Func Offset: 0
	// Line 278, Address: 0x19bf84, Func Offset: 0x4
	// Line 271, Address: 0x19bf88, Func Offset: 0x8
	// Line 282, Address: 0x19bf94, Func Offset: 0x14
	// Line 271, Address: 0x19bf98, Func Offset: 0x18
	// Line 282, Address: 0x19bf9c, Func Offset: 0x1c
	// Line 271, Address: 0x19bfa0, Func Offset: 0x20
	// Line 284, Address: 0x19bfac, Func Offset: 0x2c
	// Line 271, Address: 0x19bfb0, Func Offset: 0x30
	// Line 278, Address: 0x19bfb4, Func Offset: 0x34
	// Line 283, Address: 0x19bfb8, Func Offset: 0x38
	// Line 279, Address: 0x19bfbc, Func Offset: 0x3c
	// Line 280, Address: 0x19bfc4, Func Offset: 0x44
	// Line 281, Address: 0x19bfcc, Func Offset: 0x4c
	// Line 284, Address: 0x19bfd4, Func Offset: 0x54
	// Line 285, Address: 0x19bfe0, Func Offset: 0x60
	// Line 288, Address: 0x19c014, Func Offset: 0x94
	// Line 289, Address: 0x19c01c, Func Offset: 0x9c
	// Line 290, Address: 0x19c020, Func Offset: 0xa0
	// Line 291, Address: 0x19c034, Func Offset: 0xb4
	// Line 292, Address: 0x19c038, Func Offset: 0xb8
	// Line 293, Address: 0x19c078, Func Offset: 0xf8
	// Line 296, Address: 0x19c07c, Func Offset: 0xfc
	// Line 298, Address: 0x19c080, Func Offset: 0x100
	// Line 299, Address: 0x19c088, Func Offset: 0x108
	// Line 300, Address: 0x19c0a0, Func Offset: 0x120
	// Line 303, Address: 0x19c0ac, Func Offset: 0x12c
	// Line 304, Address: 0x19c0c4, Func Offset: 0x144
	// Func End, Address: 0x19c0ec, Func Offset: 0x16c
}

// 
// Start address: 0x19c0f0
void EnemyManageSceneInit()
{
	int stage;
	// Line 309, Address: 0x19c0f0, Func Offset: 0
	// Line 311, Address: 0x19c0f8, Func Offset: 0x8
	// Line 312, Address: 0x19c10c, Func Offset: 0x1c
	// Line 313, Address: 0x19c114, Func Offset: 0x24
	// Line 314, Address: 0x19c120, Func Offset: 0x30
	// Line 316, Address: 0x19c128, Func Offset: 0x38
	// Line 317, Address: 0x19c12c, Func Offset: 0x3c
	// Line 318, Address: 0x19c13c, Func Offset: 0x4c
	// Line 320, Address: 0x19c140, Func Offset: 0x50
	// Line 319, Address: 0x19c148, Func Offset: 0x58
	// Line 321, Address: 0x19c150, Func Offset: 0x60
	// Line 322, Address: 0x19c15c, Func Offset: 0x6c
	// Line 323, Address: 0x19c194, Func Offset: 0xa4
	// Line 324, Address: 0x19c198, Func Offset: 0xa8
	// Line 325, Address: 0x19c1a0, Func Offset: 0xb0
	// Line 329, Address: 0x19c1a8, Func Offset: 0xb8
	// Line 332, Address: 0x19c1b4, Func Offset: 0xc4
	// Line 333, Address: 0x19c1b8, Func Offset: 0xc8
	// Line 334, Address: 0x19c1c0, Func Offset: 0xd0
	// Line 335, Address: 0x19c1c8, Func Offset: 0xd8
	// Line 336, Address: 0x19c1d8, Func Offset: 0xe8
	// Line 337, Address: 0x19c1e0, Func Offset: 0xf0
	// Line 339, Address: 0x19c1e4, Func Offset: 0xf4
	// Line 337, Address: 0x19c1e8, Func Offset: 0xf8
	// Line 339, Address: 0x19c1ec, Func Offset: 0xfc
	// Line 337, Address: 0x19c1f0, Func Offset: 0x100
	// Line 338, Address: 0x19c1f8, Func Offset: 0x108
	// Line 339, Address: 0x19c200, Func Offset: 0x110
	// Line 340, Address: 0x19c204, Func Offset: 0x114
	// Line 341, Address: 0x19c208, Func Offset: 0x118
	// Line 342, Address: 0x19c210, Func Offset: 0x120
	// Func End, Address: 0x19c220, Func Offset: 0x130
}

// 
// Start address: 0x19c220
void EnemyManageSceneSet()
{
	EnemyManageBloodPoolData* pbp;
	EnemyManageDataOne* pe;
	sfObj* obj;
	int i;
	int n;
	int stage;
	int scene;
	float t;
	float pos[4];
	// Line 347, Address: 0x19c220, Func Offset: 0
	// Line 355, Address: 0x19c240, Func Offset: 0x20
	// Line 356, Address: 0x19c248, Func Offset: 0x28
	// Line 358, Address: 0x19c250, Func Offset: 0x30
	// Line 356, Address: 0x19c254, Func Offset: 0x34
	// Line 359, Address: 0x19c258, Func Offset: 0x38
	// Line 358, Address: 0x19c25c, Func Offset: 0x3c
	// Line 360, Address: 0x19c260, Func Offset: 0x40
	// Line 361, Address: 0x19c274, Func Offset: 0x54
	// Line 362, Address: 0x19c2a0, Func Offset: 0x80
	// Line 363, Address: 0x19c2a8, Func Offset: 0x88
	// Line 364, Address: 0x19c2b0, Func Offset: 0x90
	// Line 365, Address: 0x19c2b8, Func Offset: 0x98
	// Line 367, Address: 0x19c2c4, Func Offset: 0xa4
	// Line 368, Address: 0x19c2d8, Func Offset: 0xb8
	// Line 369, Address: 0x19c2e8, Func Offset: 0xc8
	// Line 372, Address: 0x19c2ec, Func Offset: 0xcc
	// Line 374, Address: 0x19c300, Func Offset: 0xe0
	// Line 376, Address: 0x19c310, Func Offset: 0xf0
	// Line 375, Address: 0x19c314, Func Offset: 0xf4
	// Line 377, Address: 0x19c318, Func Offset: 0xf8
	// Line 378, Address: 0x19c320, Func Offset: 0x100
	// Line 382, Address: 0x19c354, Func Offset: 0x134
	// Line 387, Address: 0x19c38c, Func Offset: 0x16c
	// Line 389, Address: 0x19c390, Func Offset: 0x170
	// Line 391, Address: 0x19c3a0, Func Offset: 0x180
	// Line 392, Address: 0x19c3b8, Func Offset: 0x198
	// Line 394, Address: 0x19c3e0, Func Offset: 0x1c0
	// Line 395, Address: 0x19c3e8, Func Offset: 0x1c8
	// Line 396, Address: 0x19c3f0, Func Offset: 0x1d0
	// Line 399, Address: 0x19c40c, Func Offset: 0x1ec
	// Line 400, Address: 0x19c410, Func Offset: 0x1f0
	// Line 401, Address: 0x19c418, Func Offset: 0x1f8
	// Line 403, Address: 0x19c454, Func Offset: 0x234
	// Line 404, Address: 0x19c468, Func Offset: 0x248
	// Func End, Address: 0x19c490, Func Offset: 0x270
}

// 
// Start address: 0x19c490
void EnemyManageSceneEnd()
{
	// Line 410, Address: 0x19c490, Func Offset: 0
	// Line 411, Address: 0x19c498, Func Offset: 0x8
	// Func End, Address: 0x19c4a0, Func Offset: 0x10
}

// 
// Start address: 0x19c4a0
int EnemyManageInMainStep()
{
	// Line 426, Address: 0x19c4a0, Func Offset: 0
	// Line 427, Address: 0x19c4ac, Func Offset: 0xc
	// Func End, Address: 0x19c4b4, Func Offset: 0x14
}

// 
// Start address: 0x19c4c0
int EnemyManageInPause()
{
	// Line 433, Address: 0x19c4c0, Func Offset: 0
	// Line 434, Address: 0x19c4c8, Func Offset: 0x8
	// Line 435, Address: 0x19c4e0, Func Offset: 0x20
	// Line 437, Address: 0x19c4f8, Func Offset: 0x38
	// Func End, Address: 0x19c504, Func Offset: 0x44
}

// 
// Start address: 0x19c510
float EnemyManageStayTime()
{
	// Line 444, Address: 0x19c510, Func Offset: 0
	// Line 445, Address: 0x19c514, Func Offset: 0x4
	// Func End, Address: 0x19c51c, Func Offset: 0xc
}

// 
// Start address: 0x19c520
float EnemyManageHilSize()
{
	// Line 452, Address: 0x19c520, Func Offset: 0
	// Line 453, Address: 0x19c524, Func Offset: 0x4
	// Func End, Address: 0x19c52c, Func Offset: 0xc
}

// 
// Start address: 0x19c530
void EnemyManageHilExpand()
{
	// Line 459, Address: 0x19c530, Func Offset: 0
	// Line 460, Address: 0x19c544, Func Offset: 0x14
	// Line 459, Address: 0x19c550, Func Offset: 0x20
	// Line 460, Address: 0x19c558, Func Offset: 0x28
	// Line 461, Address: 0x19c564, Func Offset: 0x34
	// Line 462, Address: 0x19c56c, Func Offset: 0x3c
	// Line 463, Address: 0x19c570, Func Offset: 0x40
	// Func End, Address: 0x19c578, Func Offset: 0x48
}

// 
// Start address: 0x19c580
void EnemyManageHilDeflate()
{
	// Line 469, Address: 0x19c580, Func Offset: 0
	// Line 470, Address: 0x19c594, Func Offset: 0x14
	// Line 469, Address: 0x19c5a0, Func Offset: 0x20
	// Line 470, Address: 0x19c5a8, Func Offset: 0x28
	// Line 471, Address: 0x19c5b4, Func Offset: 0x34
	// Line 472, Address: 0x19c5bc, Func Offset: 0x3c
	// Line 473, Address: 0x19c5c0, Func Offset: 0x40
	// Func End, Address: 0x19c5c8, Func Offset: 0x48
}

// 
// Start address: 0x19c5d0
void* EnemyManageItemData()
{
	// Line 480, Address: 0x19c5d0, Func Offset: 0
	// Line 481, Address: 0x19c5d4, Func Offset: 0x4
	// Func End, Address: 0x19c5dc, Func Offset: 0xc
}

// 
// Start address: 0x19c5e0
void EnemyManageSetAdditionalSceneNumber(int scene)
{
	// Line 488, Address: 0x19c5e0, Func Offset: 0
	// Line 489, Address: 0x19c5e4, Func Offset: 0x4
	// Func End, Address: 0x19c5ec, Func Offset: 0xc
}

// 
// Start address: 0x19c5f0
int EnemyManageAdditionalSceneNumber()
{
	// Line 496, Address: 0x19c5f0, Func Offset: 0
	// Line 497, Address: 0x19c5f4, Func Offset: 0x4
	// Func End, Address: 0x19c5fc, Func Offset: 0xc
}

// 
// Start address: 0x19c600
EnemyManageEntryType EnemyManageEntry(sfObj* obj)
{
	int i;
	int n;
	EnemyManageDataOne* pe;
	unsigned int id;
	// Line 504, Address: 0x19c600, Func Offset: 0
	// Line 509, Address: 0x19c614, Func Offset: 0x14
	// Line 512, Address: 0x19c61c, Func Offset: 0x1c
	// Line 513, Address: 0x19c644, Func Offset: 0x44
	// Line 514, Address: 0x19c64c, Func Offset: 0x4c
	// Line 522, Address: 0x19c650, Func Offset: 0x50
	// Line 523, Address: 0x19c66c, Func Offset: 0x6c
	// Line 524, Address: 0x19c674, Func Offset: 0x74
	// Line 527, Address: 0x19c678, Func Offset: 0x78
	// Line 528, Address: 0x19c680, Func Offset: 0x80
	// Line 529, Address: 0x19c684, Func Offset: 0x84
	// Line 530, Address: 0x19c688, Func Offset: 0x88
	// Line 531, Address: 0x19c694, Func Offset: 0x94
	// Line 532, Address: 0x19c6a0, Func Offset: 0xa0
	// Line 533, Address: 0x19c6ac, Func Offset: 0xac
	// Line 536, Address: 0x19c6b0, Func Offset: 0xb0
	// Line 537, Address: 0x19c6c0, Func Offset: 0xc0
	// Line 539, Address: 0x19c6cc, Func Offset: 0xcc
	// Line 538, Address: 0x19c6d0, Func Offset: 0xd0
	// Line 539, Address: 0x19c6e8, Func Offset: 0xe8
	// Line 540, Address: 0x19c6f4, Func Offset: 0xf4
	// Line 541, Address: 0x19c714, Func Offset: 0x114
	// Line 542, Address: 0x19c718, Func Offset: 0x118
	// Line 544, Address: 0x19c720, Func Offset: 0x120
	// Line 547, Address: 0x19c728, Func Offset: 0x128
	// Line 551, Address: 0x19c760, Func Offset: 0x160
	// Line 553, Address: 0x19c768, Func Offset: 0x168
	// Line 554, Address: 0x19c788, Func Offset: 0x188
	// Line 555, Address: 0x19c78c, Func Offset: 0x18c
	// Line 556, Address: 0x19c794, Func Offset: 0x194
	// Line 557, Address: 0x19c798, Func Offset: 0x198
	// Line 563, Address: 0x19c7a0, Func Offset: 0x1a0
	// Line 567, Address: 0x19c7b8, Func Offset: 0x1b8
	// Func End, Address: 0x19c7d0, Func Offset: 0x1d0
}

// 
// Start address: 0x19c7d0
int EnemyManageCheckEventFlag(sfObj* obj)
{
	int flag;
	// Line 574, Address: 0x19c7d0, Func Offset: 0
	// Line 576, Address: 0x19c7dc, Func Offset: 0xc
	// Line 577, Address: 0x19c7e4, Func Offset: 0x14
	// Line 578, Address: 0x19c824, Func Offset: 0x54
	// Line 579, Address: 0x19c82c, Func Offset: 0x5c
	// Line 580, Address: 0x19c830, Func Offset: 0x60
	// Line 581, Address: 0x19c838, Func Offset: 0x68
	// Line 582, Address: 0x19c878, Func Offset: 0xa8
	// Line 584, Address: 0x19c880, Func Offset: 0xb0
	// Line 585, Address: 0x19c888, Func Offset: 0xb8
	// Func End, Address: 0x19c898, Func Offset: 0xc8
}

// 
// Start address: 0x19c8a0
EnemyManageDataOne* EnemyManageDataEntry()
{
	int i;
	int p;
	int n[14];
	int m[14];
	EnemyManageDataOne* pe;
	EnemyKind kind;
	EnemyCondition cond;
	int stage;
	int scene;
	int point;
	// Line 591, Address: 0x19c8a0, Func Offset: 0
	// Line 601, Address: 0x19c8c4, Func Offset: 0x24
	// Line 602, Address: 0x19c8cc, Func Offset: 0x2c
	// Line 603, Address: 0x19c8d4, Func Offset: 0x34
	// Line 602, Address: 0x19c8d8, Func Offset: 0x38
	// Line 603, Address: 0x19c8dc, Func Offset: 0x3c
	// Line 604, Address: 0x19c8e8, Func Offset: 0x48
	// Line 605, Address: 0x19c8f4, Func Offset: 0x54
	// Line 608, Address: 0x19c93c, Func Offset: 0x9c
	// Line 609, Address: 0x19c940, Func Offset: 0xa0
	// Line 608, Address: 0x19c944, Func Offset: 0xa4
	// Line 610, Address: 0x19c948, Func Offset: 0xa8
	// Line 612, Address: 0x19c94c, Func Offset: 0xac
	// Line 613, Address: 0x19c954, Func Offset: 0xb4
	// Line 616, Address: 0x19c964, Func Offset: 0xc4
	// Line 617, Address: 0x19c970, Func Offset: 0xd0
	// Line 618, Address: 0x19c974, Func Offset: 0xd4
	// Line 617, Address: 0x19c978, Func Offset: 0xd8
	// Line 618, Address: 0x19c97c, Func Offset: 0xdc
	// Line 621, Address: 0x19c98c, Func Offset: 0xec
	// Line 623, Address: 0x19c9a4, Func Offset: 0x104
	// Line 626, Address: 0x19c9b4, Func Offset: 0x114
	// Line 629, Address: 0x19c9cc, Func Offset: 0x12c
	// Line 633, Address: 0x19c9d8, Func Offset: 0x138
	// Line 635, Address: 0x19c9ec, Func Offset: 0x14c
	// Line 638, Address: 0x19c9fc, Func Offset: 0x15c
	// Line 640, Address: 0x19ca18, Func Offset: 0x178
	// Line 642, Address: 0x19ca2c, Func Offset: 0x18c
	// Line 644, Address: 0x19ca44, Func Offset: 0x1a4
	// Line 647, Address: 0x19ca5c, Func Offset: 0x1bc
	// Line 651, Address: 0x19ca68, Func Offset: 0x1c8
	// Line 653, Address: 0x19ca70, Func Offset: 0x1d0
	// Line 656, Address: 0x19ca80, Func Offset: 0x1e0
	// Line 658, Address: 0x19ca98, Func Offset: 0x1f8
	// Line 660, Address: 0x19caac, Func Offset: 0x20c
	// Line 662, Address: 0x19cac4, Func Offset: 0x224
	// Line 665, Address: 0x19cadc, Func Offset: 0x23c
	// Line 667, Address: 0x19cae8, Func Offset: 0x248
	// Line 669, Address: 0x19caec, Func Offset: 0x24c
	// Line 667, Address: 0x19caf8, Func Offset: 0x258
	// Line 670, Address: 0x19cafc, Func Offset: 0x25c
	// Line 671, Address: 0x19cb0c, Func Offset: 0x26c
	// Line 672, Address: 0x19cb10, Func Offset: 0x270
	// Line 675, Address: 0x19cb14, Func Offset: 0x274
	// Line 677, Address: 0x19cb28, Func Offset: 0x288
	// Line 679, Address: 0x19cb3c, Func Offset: 0x29c
	// Line 678, Address: 0x19cb40, Func Offset: 0x2a0
	// Line 679, Address: 0x19cb44, Func Offset: 0x2a4
	// Line 680, Address: 0x19cb60, Func Offset: 0x2c0
	// Line 679, Address: 0x19cb64, Func Offset: 0x2c4
	// Line 680, Address: 0x19cb68, Func Offset: 0x2c8
	// Line 679, Address: 0x19cb6c, Func Offset: 0x2cc
	// Line 681, Address: 0x19cb70, Func Offset: 0x2d0
	// Line 679, Address: 0x19cb78, Func Offset: 0x2d8
	// Line 680, Address: 0x19cb80, Func Offset: 0x2e0
	// Line 681, Address: 0x19cb84, Func Offset: 0x2e4
	// Line 684, Address: 0x19cba0, Func Offset: 0x300
	// Line 687, Address: 0x19cbd8, Func Offset: 0x338
	// Line 690, Address: 0x19cbe4, Func Offset: 0x344
	// Line 691, Address: 0x19cbfc, Func Offset: 0x35c
	// Line 693, Address: 0x19cc08, Func Offset: 0x368
	// Line 695, Address: 0x19cc14, Func Offset: 0x374
	// Line 697, Address: 0x19cc20, Func Offset: 0x380
	// Line 700, Address: 0x19cc28, Func Offset: 0x388
	// Line 701, Address: 0x19cc34, Func Offset: 0x394
	// Line 704, Address: 0x19cc38, Func Offset: 0x398
	// Line 702, Address: 0x19cc3c, Func Offset: 0x39c
	// Line 703, Address: 0x19cc40, Func Offset: 0x3a0
	// Line 705, Address: 0x19cc44, Func Offset: 0x3a4
	// Func End, Address: 0x19cc70, Func Offset: 0x3d0
}

// 
// Start address: 0x19cc70
EnemyManageDataOne* EnemyManageDataAddress(unsigned int id)
{
	int i;
	EnemyManageDataOne* pe;
	// Line 715, Address: 0x19cc70, Func Offset: 0
	// Line 716, Address: 0x19cc74, Func Offset: 0x4
	// Line 715, Address: 0x19cc78, Func Offset: 0x8
	// Line 716, Address: 0x19cc7c, Func Offset: 0xc
	// Line 717, Address: 0x19cc80, Func Offset: 0x10
	// Line 719, Address: 0x19cc98, Func Offset: 0x28
	// Line 721, Address: 0x19cca0, Func Offset: 0x30
	// Line 722, Address: 0x19ccb0, Func Offset: 0x40
	// Line 723, Address: 0x19ccb8, Func Offset: 0x48
	// Func End, Address: 0x19ccc0, Func Offset: 0x50
}

// 
// Start address: 0x19ccc0
void EnemyManageDataErase(unsigned int id)
{
	EnemyManageDataOne* pe;
	// Line 749, Address: 0x19ccc0, Func Offset: 0
	// Line 751, Address: 0x19cccc, Func Offset: 0xc
	// Line 752, Address: 0x19cce0, Func Offset: 0x20
	// Line 753, Address: 0x19cce8, Func Offset: 0x28
	// Line 754, Address: 0x19cd00, Func Offset: 0x40
	// Func End, Address: 0x19cd10, Func Offset: 0x50
}

// 
// Start address: 0x19cd10
void EnemyManageDataEraseDirect(EnemyManageDataOne* pe)
{
	// Line 760, Address: 0x19cd10, Func Offset: 0
	// Line 761, Address: 0x19cd20, Func Offset: 0x10
	// Line 762, Address: 0x19cd28, Func Offset: 0x18
	// Line 763, Address: 0x19cd30, Func Offset: 0x20
	// Line 764, Address: 0x19cd34, Func Offset: 0x24
	// Func End, Address: 0x19cd48, Func Offset: 0x38
}

// 
// Start address: 0x19cd50
void EnemyManageStageEnemyDestroy(int stage)
{
	int i;
	EnemyManageDataOne* pe;
	EnemyManageBloodPoolData* pb;
	int scene;
	// Line 770, Address: 0x19cd50, Func Offset: 0
	// Line 774, Address: 0x19cd54, Func Offset: 0x4
	// Line 770, Address: 0x19cd58, Func Offset: 0x8
	// Line 775, Address: 0x19cd5c, Func Offset: 0xc
	// Line 770, Address: 0x19cd60, Func Offset: 0x10
	// Line 777, Address: 0x19cd70, Func Offset: 0x20
	// Line 770, Address: 0x19cd74, Func Offset: 0x24
	// Line 776, Address: 0x19cd78, Func Offset: 0x28
	// Line 770, Address: 0x19cd7c, Func Offset: 0x2c
	// Line 776, Address: 0x19cd80, Func Offset: 0x30
	// Line 770, Address: 0x19cd84, Func Offset: 0x34
	// Line 774, Address: 0x19cd8c, Func Offset: 0x3c
	// Line 775, Address: 0x19cd90, Func Offset: 0x40
	// Line 778, Address: 0x19cd98, Func Offset: 0x48
	// Line 780, Address: 0x19cdb0, Func Offset: 0x60
	// Line 782, Address: 0x19cdc4, Func Offset: 0x74
	// Line 783, Address: 0x19cdc8, Func Offset: 0x78
	// Line 785, Address: 0x19cdd4, Func Offset: 0x84
	// Line 786, Address: 0x19cde4, Func Offset: 0x94
	// Line 788, Address: 0x19cdf8, Func Offset: 0xa8
	// Line 790, Address: 0x19ce00, Func Offset: 0xb0
	// Line 792, Address: 0x19ce1c, Func Offset: 0xcc
	// Line 794, Address: 0x19ce24, Func Offset: 0xd4
	// Line 796, Address: 0x19ce44, Func Offset: 0xf4
	// Line 797, Address: 0x19ce54, Func Offset: 0x104
	// Line 799, Address: 0x19ce68, Func Offset: 0x118
	// Line 801, Address: 0x19ce6c, Func Offset: 0x11c
	// Line 802, Address: 0x19ce78, Func Offset: 0x128
	// Line 804, Address: 0x19ce88, Func Offset: 0x138
	// Line 806, Address: 0x19ce90, Func Offset: 0x140
	// Line 809, Address: 0x19ce98, Func Offset: 0x148
	// Line 810, Address: 0x19cea8, Func Offset: 0x158
	// Line 811, Address: 0x19ceb4, Func Offset: 0x164
	// Line 812, Address: 0x19cec0, Func Offset: 0x170
	// Line 811, Address: 0x19cec4, Func Offset: 0x174
	// Line 812, Address: 0x19cec8, Func Offset: 0x178
	// Line 813, Address: 0x19cecc, Func Offset: 0x17c
	// Line 814, Address: 0x19ced0, Func Offset: 0x180
	// Line 815, Address: 0x19cedc, Func Offset: 0x18c
	// Line 817, Address: 0x19cee4, Func Offset: 0x194
	// Line 818, Address: 0x19cef8, Func Offset: 0x1a8
	// Func End, Address: 0x19cf20, Func Offset: 0x1d0
}

// 
// Start address: 0x19cf20
void EnemyManageStageGhostDestroy(int stage)
{
	int i;
	EnemyManageDataOne* pe;
	// Line 824, Address: 0x19cf20, Func Offset: 0
	// Line 828, Address: 0x19cf3c, Func Offset: 0x1c
	// Line 827, Address: 0x19cf40, Func Offset: 0x20
	// Line 829, Address: 0x19cf48, Func Offset: 0x28
	// Line 831, Address: 0x19cf60, Func Offset: 0x40
	// Line 833, Address: 0x19cf74, Func Offset: 0x54
	// Line 835, Address: 0x19cf8c, Func Offset: 0x6c
	// Line 836, Address: 0x19cf94, Func Offset: 0x74
	// Line 838, Address: 0x19cfb0, Func Offset: 0x90
	// Line 841, Address: 0x19cfb8, Func Offset: 0x98
	// Line 842, Address: 0x19cfc8, Func Offset: 0xa8
	// Func End, Address: 0x19cfe4, Func Offset: 0xc4
}

// 
// Start address: 0x19cff0
void EnemyManageMoveScene(int old_scene, int new_scene, EnemyManageMoveSceneType type, float* move)
{
	// Line 854, Address: 0x19cff0, Func Offset: 0
	// Line 857, Address: 0x19cff4, Func Offset: 0x4
	// Line 854, Address: 0x19cff8, Func Offset: 0x8
	// Line 857, Address: 0x19cffc, Func Offset: 0xc
	// Line 855, Address: 0x19d000, Func Offset: 0x10
	// Line 856, Address: 0x19d008, Func Offset: 0x18
	// Line 857, Address: 0x19d010, Func Offset: 0x20
	// Line 858, Address: 0x19d014, Func Offset: 0x24
	// Func End, Address: 0x19d01c, Func Offset: 0x2c
}

// 
// Start address: 0x19d020
void EnemyManageDataPreserveCommon(sfObj* obj, EnemyManageDataOne* pe)
{
	float pos[4];
	EnemyManageDataOne* pet;
	// Line 867, Address: 0x19d020, Func Offset: 0
	// Line 871, Address: 0x19d034, Func Offset: 0x14
	// Line 872, Address: 0x19d038, Func Offset: 0x18
	// Line 873, Address: 0x19d048, Func Offset: 0x28
	// Line 877, Address: 0x19d050, Func Offset: 0x30
	// Line 880, Address: 0x19d060, Func Offset: 0x40
	// Line 881, Address: 0x19d06c, Func Offset: 0x4c
	// Line 882, Address: 0x19d07c, Func Offset: 0x5c
	// Line 883, Address: 0x19d088, Func Offset: 0x68
	// Line 884, Address: 0x19d09c, Func Offset: 0x7c
	// Line 885, Address: 0x19d0a8, Func Offset: 0x88
	// Line 886, Address: 0x19d0bc, Func Offset: 0x9c
	// Line 887, Address: 0x19d0c8, Func Offset: 0xa8
	// Line 888, Address: 0x19d0d8, Func Offset: 0xb8
	// Line 889, Address: 0x19d0e4, Func Offset: 0xc4
	// Line 890, Address: 0x19d0f0, Func Offset: 0xd0
	// Line 891, Address: 0x19d0f8, Func Offset: 0xd8
	// Line 892, Address: 0x19d108, Func Offset: 0xe8
	// Func End, Address: 0x19d11c, Func Offset: 0xfc
}

// 
// Start address: 0x19d120
void EnemyManageDataExtractCommon(sfObj* obj, EnemyManageDataOne* pe)
{
	float pos[4];
	// Line 901, Address: 0x19d120, Func Offset: 0
	// Line 904, Address: 0x19d134, Func Offset: 0x14
	// Line 905, Address: 0x19d13c, Func Offset: 0x1c
	// Line 906, Address: 0x19d144, Func Offset: 0x24
	// Line 907, Address: 0x19d150, Func Offset: 0x30
	// Line 908, Address: 0x19d15c, Func Offset: 0x3c
	// Line 909, Address: 0x19d168, Func Offset: 0x48
	// Line 910, Address: 0x19d174, Func Offset: 0x54
	// Line 911, Address: 0x19d180, Func Offset: 0x60
	// Line 912, Address: 0x19d18c, Func Offset: 0x6c
	// Line 913, Address: 0x19d194, Func Offset: 0x74
	// Line 914, Address: 0x19d19c, Func Offset: 0x7c
	// Func End, Address: 0x19d1b4, Func Offset: 0x94
}

// 
// Start address: 0x19d1c0
void EnemyManageDataSetBloodPool(float* pos, float size)
{
	int i;
	unsigned int point_max;
	EnemyManageBloodPoolData* pbp;
	EnemyManageBloodPoolData* tpbp;
	// Line 921, Address: 0x19d1c0, Func Offset: 0
	// Line 927, Address: 0x19d1c4, Func Offset: 0x4
	// Line 921, Address: 0x19d1c8, Func Offset: 0x8
	// Line 926, Address: 0x19d1cc, Func Offset: 0xc
	// Line 921, Address: 0x19d1d0, Func Offset: 0x10
	// Line 927, Address: 0x19d1d4, Func Offset: 0x14
	// Line 925, Address: 0x19d1d8, Func Offset: 0x18
	// Line 929, Address: 0x19d1dc, Func Offset: 0x1c
	// Line 930, Address: 0x19d1e0, Func Offset: 0x20
	// Line 931, Address: 0x19d1ec, Func Offset: 0x2c
	// Line 932, Address: 0x19d1f8, Func Offset: 0x38
	// Line 935, Address: 0x19d1fc, Func Offset: 0x3c
	// Line 936, Address: 0x19d208, Func Offset: 0x48
	// Line 937, Address: 0x19d218, Func Offset: 0x58
	// Line 939, Address: 0x19d224, Func Offset: 0x64
	// Line 938, Address: 0x19d228, Func Offset: 0x68
	// Line 942, Address: 0x19d22c, Func Offset: 0x6c
	// Line 944, Address: 0x19d240, Func Offset: 0x80
	// Line 945, Address: 0x19d248, Func Offset: 0x88
	// Line 946, Address: 0x19d250, Func Offset: 0x90
	// Line 948, Address: 0x19d258, Func Offset: 0x98
	// Line 949, Address: 0x19d260, Func Offset: 0xa0
	// Line 950, Address: 0x19d26c, Func Offset: 0xac
	// Line 951, Address: 0x19d270, Func Offset: 0xb0
	// Func End, Address: 0x19d280, Func Offset: 0xc0
}

// 
// Start address: 0x19d280
void EnemyManageDataSave(EnemyManageData* adr)
{
	sfObj* obj;
	int n;
	int tmp_save[64];
	// Line 959, Address: 0x19d280, Func Offset: 0
	// Line 966, Address: 0x19d298, Func Offset: 0x18
	// Line 959, Address: 0x19d29c, Func Offset: 0x1c
	// Line 966, Address: 0x19d2a0, Func Offset: 0x20
	// Line 967, Address: 0x19d2b8, Func Offset: 0x38
	// Line 968, Address: 0x19d2cc, Func Offset: 0x4c
	// Line 969, Address: 0x19d2d8, Func Offset: 0x58
	// Line 968, Address: 0x19d2dc, Func Offset: 0x5c
	// Line 969, Address: 0x19d2e0, Func Offset: 0x60
	// Line 971, Address: 0x19d2f0, Func Offset: 0x70
	// Line 973, Address: 0x19d304, Func Offset: 0x84
	// Line 974, Address: 0x19d320, Func Offset: 0xa0
	// Line 975, Address: 0x19d328, Func Offset: 0xa8
	// Line 974, Address: 0x19d32c, Func Offset: 0xac
	// Line 975, Address: 0x19d330, Func Offset: 0xb0
	// Line 976, Address: 0x19d340, Func Offset: 0xc0
	// Func End, Address: 0x19d35c, Func Offset: 0xdc
}

// 
// Start address: 0x19d360
void erase_stage_enemy(_enum stage)
{
	int i;
	EnemyManageDataOne* pe;
	// Line 982, Address: 0x19d360, Func Offset: 0
	// Line 986, Address: 0x19d370, Func Offset: 0x10
	// Line 982, Address: 0x19d374, Func Offset: 0x14
	// Line 985, Address: 0x19d378, Func Offset: 0x18
	// Line 986, Address: 0x19d384, Func Offset: 0x24
	// Line 987, Address: 0x19d38c, Func Offset: 0x2c
	// Line 989, Address: 0x19d3a0, Func Offset: 0x40
	// Line 990, Address: 0x19d3ac, Func Offset: 0x4c
	// Line 993, Address: 0x19d3bc, Func Offset: 0x5c
	// Line 996, Address: 0x19d3d4, Func Offset: 0x74
	// Line 997, Address: 0x19d3d8, Func Offset: 0x78
	// Line 999, Address: 0x19d3e4, Func Offset: 0x84
	// Line 1000, Address: 0x19d3f8, Func Offset: 0x98
	// Func End, Address: 0x19d410, Func Offset: 0xb0
}

// 
// Start address: 0x19d410
void EnemyManageDataLoad(EnemyManageData* adr)
{
	unsigned int ver;
	int i;
	int latter;
	EnemyManageReplaceInfo* pri;
	// Line 1009, Address: 0x19d410, Func Offset: 0
	// Line 1014, Address: 0x19d41c, Func Offset: 0xc
	// Line 1009, Address: 0x19d420, Func Offset: 0x10
	// Line 1014, Address: 0x19d424, Func Offset: 0x14
	// Line 1009, Address: 0x19d428, Func Offset: 0x18
	// Line 1014, Address: 0x19d42c, Func Offset: 0x1c
	// Line 1009, Address: 0x19d430, Func Offset: 0x20
	// Line 1014, Address: 0x19d434, Func Offset: 0x24
	// Line 1017, Address: 0x19d43c, Func Offset: 0x2c
	// Line 1015, Address: 0x19d440, Func Offset: 0x30
	// Line 1017, Address: 0x19d444, Func Offset: 0x34
	// Line 1015, Address: 0x19d448, Func Offset: 0x38
	// Line 1018, Address: 0x19d450, Func Offset: 0x40
	// Line 1019, Address: 0x19d45c, Func Offset: 0x4c
	// Line 1020, Address: 0x19d464, Func Offset: 0x54
	// Line 1022, Address: 0x19d468, Func Offset: 0x58
	// Line 1023, Address: 0x19d474, Func Offset: 0x64
	// Line 1026, Address: 0x19d480, Func Offset: 0x70
	// Line 1027, Address: 0x19d488, Func Offset: 0x78
	// Line 1026, Address: 0x19d48c, Func Offset: 0x7c
	// Line 1027, Address: 0x19d490, Func Offset: 0x80
	// Line 1028, Address: 0x19d494, Func Offset: 0x84
	// Line 1029, Address: 0x19d498, Func Offset: 0x88
	// Line 1031, Address: 0x19d4c0, Func Offset: 0xb0
	// Line 1033, Address: 0x19d4c8, Func Offset: 0xb8
	// Line 1034, Address: 0x19d4d8, Func Offset: 0xc8
	// Line 1035, Address: 0x19d4e4, Func Offset: 0xd4
	// Line 1036, Address: 0x19d4e8, Func Offset: 0xd8
	// Func End, Address: 0x19d504, Func Offset: 0xf4
}

// 
// Start address: 0x19d510
void EnemyManageExecute()
{
	int i;
	EnemyManageDataOne* pe;
	// Line 1041, Address: 0x19d510, Func Offset: 0
	// Line 1044, Address: 0x19d51c, Func Offset: 0xc
	// Line 1045, Address: 0x19d548, Func Offset: 0x38
	// Line 1046, Address: 0x19d554, Func Offset: 0x44
	// Line 1045, Address: 0x19d558, Func Offset: 0x48
	// Line 1046, Address: 0x19d55c, Func Offset: 0x4c
	// Line 1047, Address: 0x19d560, Func Offset: 0x50
	// Line 1045, Address: 0x19d564, Func Offset: 0x54
	// Line 1048, Address: 0x19d570, Func Offset: 0x60
	// Line 1049, Address: 0x19d57c, Func Offset: 0x6c
	// Line 1051, Address: 0x19d588, Func Offset: 0x78
	// Line 1052, Address: 0x19d598, Func Offset: 0x88
	// Func End, Address: 0x19d5ac, Func Offset: 0x9c
}

// 
// Start address: 0x19d5b0
void EnemyManageLeaveExec(EnemyManageDataOne* pe)
{
	float t;
	// Line 1058, Address: 0x19d5b0, Func Offset: 0
	// Line 1060, Address: 0x19d5b4, Func Offset: 0x4
	// Line 1058, Address: 0x19d5b8, Func Offset: 0x8
	// Line 1060, Address: 0x19d5cc, Func Offset: 0x1c
	// Line 1062, Address: 0x19d5e8, Func Offset: 0x38
	// Line 1064, Address: 0x19d5f0, Func Offset: 0x40
	// Line 1065, Address: 0x19d5f4, Func Offset: 0x44
	// Line 1066, Address: 0x19d600, Func Offset: 0x50
	// Line 1067, Address: 0x19d604, Func Offset: 0x54
	// Func End, Address: 0x19d620, Func Offset: 0x70
}

// 
// Start address: 0x19d620
int EnemyManageMayAppearGhost(EnemyManageDataOne* pe, int scene)
{
	int stage;
	int prev_scene;
	int latter;
	int f1;
	int f2;
	int type;
	EnemyKind kind;
	// Line 1075, Address: 0x19d620, Func Offset: 0
	// Line 1078, Address: 0x19d624, Func Offset: 0x4
	// Line 1075, Address: 0x19d628, Func Offset: 0x8
	// Line 1079, Address: 0x19d654, Func Offset: 0x34
	// Line 1080, Address: 0x19d670, Func Offset: 0x50
	// Line 1082, Address: 0x19d678, Func Offset: 0x58
	// Line 1083, Address: 0x19d684, Func Offset: 0x64
	// Line 1084, Address: 0x19d690, Func Offset: 0x70
	// Line 1086, Address: 0x19d698, Func Offset: 0x78
	// Line 1087, Address: 0x19d69c, Func Offset: 0x7c
	// Line 1089, Address: 0x19d6b4, Func Offset: 0x94
	// Line 1090, Address: 0x19d6bc, Func Offset: 0x9c
	// Line 1091, Address: 0x19d6c0, Func Offset: 0xa0
	// Line 1092, Address: 0x19d6c4, Func Offset: 0xa4
	// Line 1093, Address: 0x19d6c8, Func Offset: 0xa8
	// Line 1094, Address: 0x19d6d4, Func Offset: 0xb4
	// Line 1095, Address: 0x19d6dc, Func Offset: 0xbc
	// Line 1096, Address: 0x19d704, Func Offset: 0xe4
	// Line 1097, Address: 0x19d708, Func Offset: 0xe8
	// Line 1099, Address: 0x19d710, Func Offset: 0xf0
	// Line 1100, Address: 0x19d764, Func Offset: 0x144
	// Line 1101, Address: 0x19d768, Func Offset: 0x148
	// Line 1102, Address: 0x19d788, Func Offset: 0x168
	// Line 1103, Address: 0x19d79c, Func Offset: 0x17c
	// Line 1104, Address: 0x19d7a0, Func Offset: 0x180
	// Line 1108, Address: 0x19d7a8, Func Offset: 0x188
	// Line 1112, Address: 0x19d7b0, Func Offset: 0x190
	// Line 1114, Address: 0x19d7c4, Func Offset: 0x1a4
	// Line 1115, Address: 0x19d7d0, Func Offset: 0x1b0
	// Line 1117, Address: 0x19d7d8, Func Offset: 0x1b8
	// Line 1121, Address: 0x19d7e0, Func Offset: 0x1c0
	// Line 1124, Address: 0x19d7f0, Func Offset: 0x1d0
	// Line 1126, Address: 0x19d7fc, Func Offset: 0x1dc
	// Line 1132, Address: 0x19d820, Func Offset: 0x200
	// Line 1133, Address: 0x19d828, Func Offset: 0x208
	// Line 1135, Address: 0x19d8a0, Func Offset: 0x280
	// Line 1138, Address: 0x19d8c4, Func Offset: 0x2a4
	// Line 1139, Address: 0x19d8cc, Func Offset: 0x2ac
	// Line 1141, Address: 0x19d8d0, Func Offset: 0x2b0
	// Line 1148, Address: 0x19d8d8, Func Offset: 0x2b8
	// Line 1151, Address: 0x19d8f8, Func Offset: 0x2d8
	// Line 1154, Address: 0x19d900, Func Offset: 0x2e0
	// Line 1156, Address: 0x19d918, Func Offset: 0x2f8
	// Line 1160, Address: 0x19d924, Func Offset: 0x304
	// Line 1163, Address: 0x19d950, Func Offset: 0x330
	// Line 1169, Address: 0x19d958, Func Offset: 0x338
	// Line 1171, Address: 0x19d960, Func Offset: 0x340
	// Line 1172, Address: 0x19d968, Func Offset: 0x348
	// Line 1174, Address: 0x19d980, Func Offset: 0x360
	// Line 1176, Address: 0x19d98c, Func Offset: 0x36c
	// Line 1177, Address: 0x19d9a0, Func Offset: 0x380
	// Line 1179, Address: 0x19d9b8, Func Offset: 0x398
	// Line 1182, Address: 0x19d9c0, Func Offset: 0x3a0
	// Line 1183, Address: 0x19d9e8, Func Offset: 0x3c8
	// Line 1185, Address: 0x19d9f4, Func Offset: 0x3d4
	// Line 1188, Address: 0x19da00, Func Offset: 0x3e0
	// Line 1189, Address: 0x19da1c, Func Offset: 0x3fc
	// Line 1191, Address: 0x19da30, Func Offset: 0x410
	// Line 1195, Address: 0x19da38, Func Offset: 0x418
	// Line 1198, Address: 0x19da40, Func Offset: 0x420
	// Line 1199, Address: 0x19da48, Func Offset: 0x428
	// Line 1200, Address: 0x19da58, Func Offset: 0x438
	// Line 1201, Address: 0x19da60, Func Offset: 0x440
	// Line 1205, Address: 0x19da98, Func Offset: 0x478
	// Line 1206, Address: 0x19daac, Func Offset: 0x48c
	// Line 1211, Address: 0x19dac8, Func Offset: 0x4a8
	// Line 1213, Address: 0x19dad0, Func Offset: 0x4b0
	// Line 1214, Address: 0x19db04, Func Offset: 0x4e4
	// Line 1216, Address: 0x19db08, Func Offset: 0x4e8
	// Line 1217, Address: 0x19db24, Func Offset: 0x504
	// Line 1218, Address: 0x19db28, Func Offset: 0x508
	// Line 1222, Address: 0x19db60, Func Offset: 0x540
	// Line 1224, Address: 0x19db68, Func Offset: 0x548
	// Line 1244, Address: 0x19dba0, Func Offset: 0x580
	// Line 1246, Address: 0x19dba8, Func Offset: 0x588
	// Line 1247, Address: 0x19dbb0, Func Offset: 0x590
	// Line 1249, Address: 0x19dbd0, Func Offset: 0x5b0
	// Line 1250, Address: 0x19dbe4, Func Offset: 0x5c4
	// Line 1252, Address: 0x19dbf4, Func Offset: 0x5d4
	// Line 1253, Address: 0x19dc00, Func Offset: 0x5e0
	// Line 1256, Address: 0x19dc08, Func Offset: 0x5e8
	// Line 1258, Address: 0x19dc10, Func Offset: 0x5f0
	// Line 1260, Address: 0x19dc18, Func Offset: 0x5f8
	// Line 1268, Address: 0x19dc38, Func Offset: 0x618
	// Line 1269, Address: 0x19dc40, Func Offset: 0x620
	// Line 1270, Address: 0x19dc4c, Func Offset: 0x62c
	// Line 1272, Address: 0x19dc5c, Func Offset: 0x63c
	// Line 1273, Address: 0x19dc68, Func Offset: 0x648
	// Line 1277, Address: 0x19dc70, Func Offset: 0x650
	// Line 1279, Address: 0x19dc78, Func Offset: 0x658
	// Line 1280, Address: 0x19dc84, Func Offset: 0x664
	// Line 1284, Address: 0x19dcb8, Func Offset: 0x698
	// Line 1285, Address: 0x19dcc0, Func Offset: 0x6a0
	// Line 1287, Address: 0x19dcc8, Func Offset: 0x6a8
	// Line 1292, Address: 0x19dcf0, Func Offset: 0x6d0
	// Line 1294, Address: 0x19dcf8, Func Offset: 0x6d8
	// Line 1295, Address: 0x19dd24, Func Offset: 0x704
	// Line 1296, Address: 0x19dd28, Func Offset: 0x708
	// Line 1298, Address: 0x19dd48, Func Offset: 0x728
	// Line 1301, Address: 0x19dd50, Func Offset: 0x730
	// Line 1303, Address: 0x19dd58, Func Offset: 0x738
	// Line 1305, Address: 0x19dd80, Func Offset: 0x760
	// Line 1308, Address: 0x19dd88, Func Offset: 0x768
	// Line 1310, Address: 0x19dd90, Func Offset: 0x770
	// Line 1312, Address: 0x19dda4, Func Offset: 0x784
	// Line 1315, Address: 0x19ddb0, Func Offset: 0x790
	// Line 1319, Address: 0x19ddb8, Func Offset: 0x798
	// Line 1322, Address: 0x19ddc0, Func Offset: 0x7a0
	// Line 1325, Address: 0x19ddd4, Func Offset: 0x7b4
	// Line 1327, Address: 0x19de08, Func Offset: 0x7e8
	// Line 1329, Address: 0x19de18, Func Offset: 0x7f8
	// Line 1334, Address: 0x19de24, Func Offset: 0x804
	// Line 1335, Address: 0x19de2c, Func Offset: 0x80c
	// Line 1336, Address: 0x19de30, Func Offset: 0x810
	// Line 1339, Address: 0x19de40, Func Offset: 0x820
	// Line 1341, Address: 0x19de48, Func Offset: 0x828
	// Line 1344, Address: 0x19de54, Func Offset: 0x834
	// Line 1345, Address: 0x19de5c, Func Offset: 0x83c
	// Line 1346, Address: 0x19de60, Func Offset: 0x840
	// Line 1351, Address: 0x19de6c, Func Offset: 0x84c
	// Line 1353, Address: 0x19de74, Func Offset: 0x854
	// Line 1356, Address: 0x19de78, Func Offset: 0x858
	// Line 1354, Address: 0x19de80, Func Offset: 0x860
	// Line 1356, Address: 0x19de84, Func Offset: 0x864
	// Line 1358, Address: 0x19dea8, Func Offset: 0x888
	// Line 1362, Address: 0x19deac, Func Offset: 0x88c
	// Line 1363, Address: 0x19deb0, Func Offset: 0x890
	// Line 1364, Address: 0x19ded0, Func Offset: 0x8b0
	// Line 1366, Address: 0x19ded8, Func Offset: 0x8b8
	// Line 1367, Address: 0x19dee0, Func Offset: 0x8c0
	// Func End, Address: 0x19df0c, Func Offset: 0x8ec
}

// 
// Start address: 0x19df10
int EnemyCheckAppearFat()
{
	EnemyManageDataOne* pe;
	EnemyCondition cond;
	int scene;
	int i;
	// Line 1373, Address: 0x19df10, Func Offset: 0
	// Line 1378, Address: 0x19df14, Func Offset: 0x4
	// Line 1373, Address: 0x19df18, Func Offset: 0x8
	// Line 1378, Address: 0x19df1c, Func Offset: 0xc
	// Line 1380, Address: 0x19df30, Func Offset: 0x20
	// Line 1382, Address: 0x19df38, Func Offset: 0x28
	// Line 1383, Address: 0x19df40, Func Offset: 0x30
	// Line 1382, Address: 0x19df44, Func Offset: 0x34
	// Line 1383, Address: 0x19df48, Func Offset: 0x38
	// Line 1384, Address: 0x19df4c, Func Offset: 0x3c
	// Line 1386, Address: 0x19df50, Func Offset: 0x40
	// Line 1384, Address: 0x19df54, Func Offset: 0x44
	// Line 1385, Address: 0x19df58, Func Offset: 0x48
	// Line 1386, Address: 0x19df5c, Func Offset: 0x4c
	// Line 1389, Address: 0x19df70, Func Offset: 0x60
	// Line 1391, Address: 0x19df78, Func Offset: 0x68
	// Line 1392, Address: 0x19df84, Func Offset: 0x74
	// Line 1394, Address: 0x19df8c, Func Offset: 0x7c
	// Line 1395, Address: 0x19df90, Func Offset: 0x80
	// Line 1397, Address: 0x19dfa0, Func Offset: 0x90
	// Line 1400, Address: 0x19dfa8, Func Offset: 0x98
	// Line 1402, Address: 0x19dfb0, Func Offset: 0xa0
	// Line 1403, Address: 0x19dfc0, Func Offset: 0xb0
	// Line 1405, Address: 0x19dfe0, Func Offset: 0xd0
	// Line 1407, Address: 0x19dfe8, Func Offset: 0xd8
	// Line 1408, Address: 0x19dff0, Func Offset: 0xe0
	// Func End, Address: 0x19e000, Func Offset: 0xf0
}

// 
// Start address: 0x19e000
int EnemyGhostFinish(sfObj* obj)
{
	// Line 1415, Address: 0x19e000, Func Offset: 0
	// Line 1416, Address: 0x19e00c, Func Offset: 0xc
	// Line 1417, Address: 0x19e030, Func Offset: 0x30
	// Line 1418, Address: 0x19e05c, Func Offset: 0x5c
	// Line 1419, Address: 0x19e060, Func Offset: 0x60
	// Line 1420, Address: 0x19e068, Func Offset: 0x68
	// Line 1421, Address: 0x19e078, Func Offset: 0x78
	// Line 1422, Address: 0x19e07c, Func Offset: 0x7c
	// Line 1423, Address: 0x19e080, Func Offset: 0x80
	// Line 1425, Address: 0x19e088, Func Offset: 0x88
	// Line 1427, Address: 0x19e090, Func Offset: 0x90
	// Line 1428, Address: 0x19e098, Func Offset: 0x98
	// Func End, Address: 0x19e0a8, Func Offset: 0xa8
}

// 
// Start address: 0x19e0b0
void EnemyGhostRemoveSword(sfObj* obj)
{
	// Line 1435, Address: 0x19e0b0, Func Offset: 0
	// Line 1436, Address: 0x19e0b4, Func Offset: 0x4
	// Func End, Address: 0x19e0bc, Func Offset: 0xc
}

// 
// Start address: 0x19e0c0
int EnemyGhostCheckFinish(sfObj* obj)
{
	// Line 1451, Address: 0x19e0c0, Func Offset: 0
	// Line 1453, Address: 0x19e0d0, Func Offset: 0x10
	// Line 1454, Address: 0x19e0dc, Func Offset: 0x1c
	// Line 1455, Address: 0x19e0e0, Func Offset: 0x20
	// Line 1456, Address: 0x19e0e8, Func Offset: 0x28
	// Func End, Address: 0x19e0f0, Func Offset: 0x30
}

// 
// Start address: 0x19e0f0
int EnemyGhostCheckRemoveSword(sfObj* obj)
{
	// Line 1471, Address: 0x19e0f0, Func Offset: 0
	// Line 1473, Address: 0x19e100, Func Offset: 0x10
	// Line 1474, Address: 0x19e10c, Func Offset: 0x1c
	// Line 1475, Address: 0x19e110, Func Offset: 0x20
	// Line 1476, Address: 0x19e118, Func Offset: 0x28
	// Func End, Address: 0x19e120, Func Offset: 0x30
}

// 
// Start address: 0x19e120
int EnemyEDGhostCheckFinish(void* obj)
{
	// Line 1486, Address: 0x19e120, Func Offset: 0
	// Func End, Address: 0x19e128, Func Offset: 0x8
}

// 
// Start address: 0x19e130
void EnemyGhostIgnoreFinishAndRemove(sfObj* obj)
{
	// Line 1505, Address: 0x19e130, Func Offset: 0
	// Line 1506, Address: 0x19e140, Func Offset: 0x10
	// Line 1507, Address: 0x19e144, Func Offset: 0x14
	// Line 1508, Address: 0x19e148, Func Offset: 0x18
	// Line 1509, Address: 0x19e158, Func Offset: 0x28
	// Line 1510, Address: 0x19e15c, Func Offset: 0x2c
	// Line 1511, Address: 0x19e160, Func Offset: 0x30
	// Func End, Address: 0x19e168, Func Offset: 0x38
}

// 
// Start address: 0x19e170
int EnemyManageAddMovableEnemySeKind(EnemySeKind* output_table, int limit, int scene, int num)
{
	int i;
	int j;
	EnemyManageDataOne* pe;
	EnemyKind kind;
	EnemySeKind sekind;
	// Line 1522, Address: 0x19e170, Func Offset: 0
	// Line 1528, Address: 0x19e1a4, Func Offset: 0x34
	// Line 1522, Address: 0x19e1a8, Func Offset: 0x38
	// Line 1527, Address: 0x19e1ac, Func Offset: 0x3c
	// Line 1522, Address: 0x19e1b0, Func Offset: 0x40
	// Line 1527, Address: 0x19e1b4, Func Offset: 0x44
	// Line 1529, Address: 0x19e1b8, Func Offset: 0x48
	// Line 1530, Address: 0x19e1c4, Func Offset: 0x54
	// Line 1531, Address: 0x19e1c8, Func Offset: 0x58
	// Line 1532, Address: 0x19e1d8, Func Offset: 0x68
	// Line 1534, Address: 0x19e1f8, Func Offset: 0x88
	// Line 1535, Address: 0x19e208, Func Offset: 0x98
	// Line 1538, Address: 0x19e218, Func Offset: 0xa8
	// Line 1539, Address: 0x19e228, Func Offset: 0xb8
	// Line 1543, Address: 0x19e234, Func Offset: 0xc4
	// Line 1544, Address: 0x19e244, Func Offset: 0xd4
	// Line 1546, Address: 0x19e248, Func Offset: 0xd8
	// Line 1556, Address: 0x19e2c8, Func Offset: 0x158
	// Line 1555, Address: 0x19e2cc, Func Offset: 0x15c
	// Line 1556, Address: 0x19e2d0, Func Offset: 0x160
	// Line 1557, Address: 0x19e2e0, Func Offset: 0x170
	// Line 1560, Address: 0x19e2f0, Func Offset: 0x180
	// Line 1561, Address: 0x19e300, Func Offset: 0x190
	// Line 1565, Address: 0x19e30c, Func Offset: 0x19c
	// Line 1566, Address: 0x19e31c, Func Offset: 0x1ac
	// Line 1570, Address: 0x19e328, Func Offset: 0x1b8
	// Line 1571, Address: 0x19e338, Func Offset: 0x1c8
	// Line 1572, Address: 0x19e33c, Func Offset: 0x1cc
	// Func End, Address: 0x19e36c, Func Offset: 0x1fc
}

