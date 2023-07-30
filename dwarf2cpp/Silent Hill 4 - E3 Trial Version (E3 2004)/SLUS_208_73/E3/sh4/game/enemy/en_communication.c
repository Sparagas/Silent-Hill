typedef struct EnemyCommunication;
typedef struct sfObj;
typedef enum EnemyKind : unsigned char;
typedef union _anon0;
typedef enum EnemyCommunicationCommand : unsigned char;
typedef struct sfAllocateList;
typedef struct EnemyCommunicationWork;

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

struct EnemyCommunication
{
	float pos[4];
	sfObj* obj;
	EnemyKind kind;
	EnemyCommunicationCommand com;
	float time;
	float dist;
	int id;
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

enum EnemyCommunicationCommand : unsigned char
{
	ENEMY_COM_VOID,
	ENEMY_COM_DISCOVERY,
	ENEMY_COM_ATTACK,
	ENEMY_COM_DAMAGE,
	ENEMY_COM_DEAD,
	ENEMY_COM_GATHER
};

struct sfAllocateList
{
	char* work_top;
	unsigned int size;
	int number;
};

struct EnemyCommunicationWork
{
	sfAllocateList work_list;
	int id;
};

EnemyCommunicationWork en_com_work;

void EnemyCommunicationWorkInit();
void EnemyCommunicationWorkAllDestruct();
void EnemyCommunicationTimePasses();
int EnemyCommunicationSet(sfObj* obj, EnemyKind kind, EnemyCommunicationCommand com, float* pos, float dist, float time);
EnemyCommunication* search_id(int id);
void EnemyCommunicationAnnulSameObj(sfObj* obj);
int EnemyCommunicationTribe(EnemyKind kind, float* pos);
int EnemyCommunicationSearch(EnemyKind kind, EnemyCommunicationCommand com, float* pos);
EnemyCommunicationCommand EnemyCommunicationGetCommand(int id);
void EnemyCommunicationGetPos(int id, float* pos);
sfObj* EnemyCommunicationGetObj(int id);

// 
// Start address: 0x197170
void EnemyCommunicationWorkInit()
{
	// Line 39, Address: 0x197170, Func Offset: 0
	// Line 40, Address: 0x197174, Func Offset: 0x4
	// Line 39, Address: 0x197178, Func Offset: 0x8
	// Line 40, Address: 0x19717c, Func Offset: 0xc
	// Line 41, Address: 0x197188, Func Offset: 0x18
	// Line 42, Address: 0x197190, Func Offset: 0x20
	// Func End, Address: 0x19719c, Func Offset: 0x2c
}

// 
// Start address: 0x1971a0
void EnemyCommunicationWorkAllDestruct()
{
	// Line 48, Address: 0x1971a0, Func Offset: 0
	// Func End, Address: 0x1971ac, Func Offset: 0xc
}

// 
// Start address: 0x1971b0
void EnemyCommunicationTimePasses()
{
	EnemyCommunication* pec;
	EnemyCommunication* npec;
	float dt;
	// Line 56, Address: 0x1971b0, Func Offset: 0
	// Line 58, Address: 0x1971c0, Func Offset: 0x10
	// Line 59, Address: 0x1971c8, Func Offset: 0x18
	// Line 58, Address: 0x1971cc, Func Offset: 0x1c
	// Line 59, Address: 0x1971d0, Func Offset: 0x20
	// Line 60, Address: 0x1971dc, Func Offset: 0x2c
	// Line 61, Address: 0x1971e8, Func Offset: 0x38
	// Line 62, Address: 0x1971f8, Func Offset: 0x48
	// Line 63, Address: 0x197210, Func Offset: 0x60
	// Line 64, Address: 0x197218, Func Offset: 0x68
	// Line 65, Address: 0x197230, Func Offset: 0x80
	// Line 68, Address: 0x197240, Func Offset: 0x90
	// Line 69, Address: 0x197248, Func Offset: 0x98
	// Func End, Address: 0x197260, Func Offset: 0xb0
}

// 
// Start address: 0x197260
int EnemyCommunicationSet(sfObj* obj, EnemyKind kind, EnemyCommunicationCommand com, float* pos, float dist, float time)
{
	EnemyCommunication* pec;
	// Line 83, Address: 0x197260, Func Offset: 0
	// Line 85, Address: 0x197278, Func Offset: 0x18
	// Line 83, Address: 0x19727c, Func Offset: 0x1c
	// Line 85, Address: 0x197298, Func Offset: 0x38
	// Line 86, Address: 0x1972a8, Func Offset: 0x48
	// Line 87, Address: 0x1972b8, Func Offset: 0x58
	// Line 88, Address: 0x1972bc, Func Offset: 0x5c
	// Line 89, Address: 0x1972c0, Func Offset: 0x60
	// Line 90, Address: 0x1972c4, Func Offset: 0x64
	// Line 93, Address: 0x1972cc, Func Offset: 0x6c
	// Line 91, Address: 0x1972d0, Func Offset: 0x70
	// Line 92, Address: 0x1972d4, Func Offset: 0x74
	// Line 93, Address: 0x1972d8, Func Offset: 0x78
	// Line 94, Address: 0x1972f0, Func Offset: 0x90
	// Func End, Address: 0x197314, Func Offset: 0xb4
}

// 
// Start address: 0x197320
EnemyCommunication* search_id(int id)
{
	EnemyCommunication* pec;
	// Line 101, Address: 0x197320, Func Offset: 0
	// Line 103, Address: 0x197330, Func Offset: 0x10
	// Line 104, Address: 0x19733c, Func Offset: 0x1c
	// Line 105, Address: 0x197348, Func Offset: 0x28
	// Line 106, Address: 0x197360, Func Offset: 0x40
	// Line 107, Address: 0x197370, Func Offset: 0x50
	// Line 108, Address: 0x197378, Func Offset: 0x58
	// Line 109, Address: 0x197380, Func Offset: 0x60
	// Func End, Address: 0x197390, Func Offset: 0x70
}

// 
// Start address: 0x197390
void EnemyCommunicationAnnulSameObj(sfObj* obj)
{
	EnemyCommunication* pec;
	EnemyCommunication* np;
	// Line 127, Address: 0x197390, Func Offset: 0
	// Line 129, Address: 0x1973a4, Func Offset: 0x14
	// Line 127, Address: 0x1973a8, Func Offset: 0x18
	// Line 129, Address: 0x1973ac, Func Offset: 0x1c
	// Line 130, Address: 0x1973b8, Func Offset: 0x28
	// Line 131, Address: 0x1973c0, Func Offset: 0x30
	// Line 132, Address: 0x1973d0, Func Offset: 0x40
	// Line 133, Address: 0x1973dc, Func Offset: 0x4c
	// Line 134, Address: 0x1973ec, Func Offset: 0x5c
	// Line 136, Address: 0x1973f0, Func Offset: 0x60
	// Line 137, Address: 0x1973f8, Func Offset: 0x68
	// Func End, Address: 0x197410, Func Offset: 0x80
}

// 
// Start address: 0x197410
int EnemyCommunicationTribe(EnemyKind kind, float* pos)
{
	int id;
	EnemyCommunication* pec;
	float vec[4];
	float d;
	float dm;
	// Line 145, Address: 0x197410, Func Offset: 0
	// Line 151, Address: 0x197414, Func Offset: 0x4
	// Line 145, Address: 0x197418, Func Offset: 0x8
	// Line 152, Address: 0x19742c, Func Offset: 0x1c
	// Line 145, Address: 0x197430, Func Offset: 0x20
	// Line 151, Address: 0x197438, Func Offset: 0x28
	// Line 152, Address: 0x19743c, Func Offset: 0x2c
	// Line 153, Address: 0x197448, Func Offset: 0x38
	// Line 154, Address: 0x197450, Func Offset: 0x40
	// Line 156, Address: 0x197480, Func Offset: 0x70
	// Line 157, Address: 0x197494, Func Offset: 0x84
	// Line 158, Address: 0x1974bc, Func Offset: 0xac
	// Line 160, Address: 0x1974d8, Func Offset: 0xc8
	// Line 159, Address: 0x1974dc, Func Offset: 0xcc
	// Line 163, Address: 0x1974e0, Func Offset: 0xd0
	// Line 164, Address: 0x1974f0, Func Offset: 0xe0
	// Line 166, Address: 0x1974f8, Func Offset: 0xe8
	// Func End, Address: 0x197514, Func Offset: 0x104
}

// 
// Start address: 0x197520
int EnemyCommunicationSearch(EnemyKind kind, EnemyCommunicationCommand com, float* pos)
{
	int id;
	EnemyCommunication* pec;
	float vec[4];
	float d;
	float dm;
	// Line 176, Address: 0x197520, Func Offset: 0
	// Line 182, Address: 0x197524, Func Offset: 0x4
	// Line 176, Address: 0x197528, Func Offset: 0x8
	// Line 183, Address: 0x19753c, Func Offset: 0x1c
	// Line 176, Address: 0x197540, Func Offset: 0x20
	// Line 182, Address: 0x197550, Func Offset: 0x30
	// Line 183, Address: 0x197554, Func Offset: 0x34
	// Line 184, Address: 0x197560, Func Offset: 0x40
	// Line 185, Address: 0x197568, Func Offset: 0x48
	// Line 187, Address: 0x1975a8, Func Offset: 0x88
	// Line 188, Address: 0x1975bc, Func Offset: 0x9c
	// Line 189, Address: 0x1975e4, Func Offset: 0xc4
	// Line 191, Address: 0x197600, Func Offset: 0xe0
	// Line 190, Address: 0x197604, Func Offset: 0xe4
	// Line 194, Address: 0x197608, Func Offset: 0xe8
	// Line 195, Address: 0x197618, Func Offset: 0xf8
	// Line 197, Address: 0x197620, Func Offset: 0x100
	// Func End, Address: 0x197640, Func Offset: 0x120
}

// 
// Start address: 0x197640
EnemyCommunicationCommand EnemyCommunicationGetCommand(int id)
{
	EnemyCommunication* pec;
	// Line 226, Address: 0x197640, Func Offset: 0
	// Line 228, Address: 0x197648, Func Offset: 0x8
	// Line 229, Address: 0x197650, Func Offset: 0x10
	// Line 231, Address: 0x197664, Func Offset: 0x24
	// Func End, Address: 0x197670, Func Offset: 0x30
}

// 
// Start address: 0x197670
void EnemyCommunicationGetPos(int id, float* pos)
{
	EnemyCommunication* pec;
	// Line 238, Address: 0x197670, Func Offset: 0
	// Line 240, Address: 0x19767c, Func Offset: 0xc
	// Line 241, Address: 0x197684, Func Offset: 0x14
	// Line 242, Address: 0x19768c, Func Offset: 0x1c
	// Line 243, Address: 0x197694, Func Offset: 0x24
	// Func End, Address: 0x1976a8, Func Offset: 0x38
}

// 
// Start address: 0x1976b0
sfObj* EnemyCommunicationGetObj(int id)
{
	EnemyCommunication* pec;
	// Line 274, Address: 0x1976b0, Func Offset: 0
	// Line 276, Address: 0x1976b8, Func Offset: 0x8
	// Line 277, Address: 0x1976c0, Func Offset: 0x10
	// Line 279, Address: 0x1976d4, Func Offset: 0x24
	// Func End, Address: 0x1976e0, Func Offset: 0x30
}

