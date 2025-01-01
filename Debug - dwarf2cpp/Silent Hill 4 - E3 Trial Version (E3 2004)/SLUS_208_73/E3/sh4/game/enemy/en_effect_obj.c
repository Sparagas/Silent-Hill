typedef struct sfObj;
typedef struct EnemyKindTable;
typedef struct _anon0;
typedef struct EnemyEffectObjData;
typedef enum EnemyEffectKind : unsigned char;
typedef struct EnemyEffectObjWork;
typedef enum EnemyEffectAttribute : unsigned char;
typedef union _anon1;

typedef void(*type_0)(sfObj*);
typedef void(*type_1)(sfObj*);
typedef void(*type_2)(sfObj*);
typedef void(*type_3)(sfObj*);
typedef void(*type_4)(sfObj*);
typedef void(*type_6)(sfObj*);
typedef void(*type_9)(sfObj*);

typedef _anon1 type_5[256];
typedef float type_7[4];
typedef _anon1 type_8[7];
typedef short type_10[2];
typedef unsigned short type_11[2];
typedef char type_12[4];
typedef unsigned char type_13[4];
typedef float type_14[1];
typedef int type_15[1];

struct sfObj
{
	_anon1 fwork[256];
	_anon1* work;
	void(*func)(sfObj*);
	_anon1* work_pt0;
	_anon1* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon1* sys_work;
	_anon1* scene_work;
	_anon1* event_work;
	_anon1* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct EnemyKindTable
{
	void(*func)(sfObj*);
	void(*cnst)(sfObj*);
	void(*dest)(sfObj*);
	void(*rend)(sfObj*);
};

struct _anon0
{
	unsigned int id;
	float x;
	float y;
	float z;
	float rot;
	int ini;
	int dif;
	unsigned int id2;
	int serial;
	int eventdata;
	_anon1 dmy2[7];
	int flagcheck;
	int flagoffcheck;
};

struct EnemyEffectObjData
{
	float pos[4];
	EnemyEffectKind kind;
	unsigned int attr;
	sfObj* obj;
	EnemyEffectObjData* next;
};

enum EnemyEffectKind : unsigned char
{
	ENEMY_EFFECT_NONE,
	ENEMY_EFFECT_BLOODPOOL,
	ENEMY_EFFECT_TERRITORY,
	ENEMY_EFFECT_AFTERIMAGE,
	ENEMY_EFFECT_FLAME,
	ENEMY_EFFECT_TOACH,
	ENEMY_EFFECT_MAX
};

struct EnemyEffectObjWork
{
	EnemyEffectObjData* objtop;
	EnemyEffectObjData* objlast;
	int number;
};

enum EnemyEffectAttribute : unsigned char
{
	ENEMY_EFAT_BLOOD,
	ENEMY_EFAT_TERRITORY,
	ENEMY_EFAT_PLAYERWATCH
};

union _anon1
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

EnemyEffectObjWork en_effect_obj_work;
float sg_vector_zero[4];
void(*GameObjDestruct)(sfObj*);

void EnemyEffectObjWorkInit();
void EnemyEffectObjWorkAllDestruct();
sfObj* EnemyEffectObjSet(EnemyEffectKind kind, float* pos, float rot, int type);
void EnemyEffectObjEntry(sfObj* obj, EnemyEffectKind kind, int attr);
void EnemyEffectObjRemove(sfObj* obj);
void EnemyEffectObjGetFirstPos(sfObj* obj, float* pos);
float EnemyEffectObjGetFirstRot(sfObj* obj);
int EnemyEffectObjGetFirstType(sfObj* obj);
void EnemyEffectObjSuicide(sfObj* obj);
void EnemyEffectObjSetEffectType(sfObj* obj);
void EnemyEffectObjSetPos(sfObj* obj, float* pos);
float* EnemyEffectObjPos(sfObj* obj);
EnemyEffectKind EnemyEffectObjKind(sfObj* obj);
int EnemyObjIsEffect(sfObj* obj);
sfObj* EnemyEffectObjSearch(sfObj* obj);
sfObj* EnemyEffectObjSearchAttribute(EnemyEffectAttribute attr, sfObj* obj);

// 
// Start address: 0x1eba80
void EnemyEffectObjWorkInit()
{
	// Line 41, Address: 0x1eba80, Func Offset: 0
	// Func End, Address: 0x1eba90, Func Offset: 0x10
}

// 
// Start address: 0x1eba90
void EnemyEffectObjWorkAllDestruct()
{
	// Line 51, Address: 0x1eba90, Func Offset: 0
	// Func End, Address: 0x1eba98, Func Offset: 0x8
}

// 
// Start address: 0x1ebaa0
sfObj* EnemyEffectObjSet(EnemyEffectKind kind, float* pos, float rot, int type)
{
	sfObj* obj;
	EnemyKindTable* pt;
	// Line 64, Address: 0x1ebaa0, Func Offset: 0
	// Line 68, Address: 0x1ebac0, Func Offset: 0x20
	// Line 69, Address: 0x1ebae0, Func Offset: 0x40
	// Line 70, Address: 0x1ebae8, Func Offset: 0x48
	// Line 73, Address: 0x1ebb10, Func Offset: 0x70
	// Func End, Address: 0x1ebb28, Func Offset: 0x88
}

// 
// Start address: 0x1ebb30
void EnemyEffectObjEntry(sfObj* obj, EnemyEffectKind kind, int attr)
{
	EnemyEffectObjData* efd;
	EnemyEffectObjData* efd2;
	// Line 99, Address: 0x1ebb30, Func Offset: 0
	// Line 101, Address: 0x1ebb50, Func Offset: 0x20
	// Line 102, Address: 0x1ebb58, Func Offset: 0x28
	// Line 106, Address: 0x1ebb5c, Func Offset: 0x2c
	// Line 103, Address: 0x1ebb60, Func Offset: 0x30
	// Line 104, Address: 0x1ebb64, Func Offset: 0x34
	// Line 105, Address: 0x1ebb68, Func Offset: 0x38
	// Line 106, Address: 0x1ebb6c, Func Offset: 0x3c
	// Line 107, Address: 0x1ebb70, Func Offset: 0x40
	// Line 109, Address: 0x1ebb78, Func Offset: 0x48
	// Line 110, Address: 0x1ebb80, Func Offset: 0x50
	// Line 112, Address: 0x1ebb88, Func Offset: 0x58
	// Line 113, Address: 0x1ebb90, Func Offset: 0x60
	// Line 114, Address: 0x1ebba4, Func Offset: 0x74
	// Func End, Address: 0x1ebbbc, Func Offset: 0x8c
}

// 
// Start address: 0x1ebbc0
void EnemyEffectObjRemove(sfObj* obj)
{
	EnemyEffectObjData* efd;
	EnemyEffectObjData* pefd;
	// Line 123, Address: 0x1ebbc0, Func Offset: 0
	// Line 124, Address: 0x1ebbc8, Func Offset: 0x8
	// Line 125, Address: 0x1ebbd0, Func Offset: 0x10
	// Line 126, Address: 0x1ebbdc, Func Offset: 0x1c
	// Line 127, Address: 0x1ebbe4, Func Offset: 0x24
	// Line 128, Address: 0x1ebbe8, Func Offset: 0x28
	// Line 129, Address: 0x1ebbf0, Func Offset: 0x30
	// Line 130, Address: 0x1ebbfc, Func Offset: 0x3c
	// Line 131, Address: 0x1ebc00, Func Offset: 0x40
	// Line 132, Address: 0x1ebc0c, Func Offset: 0x4c
	// Line 134, Address: 0x1ebc10, Func Offset: 0x50
	// Line 135, Address: 0x1ebc20, Func Offset: 0x60
	// Line 137, Address: 0x1ebc28, Func Offset: 0x68
	// Line 138, Address: 0x1ebc2c, Func Offset: 0x6c
	// Line 139, Address: 0x1ebc30, Func Offset: 0x70
	// Line 141, Address: 0x1ebc38, Func Offset: 0x78
	// Func End, Address: 0x1ebc40, Func Offset: 0x80
}

// 
// Start address: 0x1ebc40
void EnemyEffectObjGetFirstPos(sfObj* obj, float* pos)
{
	_anon0* pse;
	// Line 148, Address: 0x1ebc40, Func Offset: 0
	// Line 150, Address: 0x1ebc4c, Func Offset: 0xc
	// Line 151, Address: 0x1ebc54, Func Offset: 0x14
	// Line 152, Address: 0x1ebc5c, Func Offset: 0x1c
	// Line 153, Address: 0x1ebc64, Func Offset: 0x24
	// Line 154, Address: 0x1ebc6c, Func Offset: 0x2c
	// Line 155, Address: 0x1ebc70, Func Offset: 0x30
	// Func End, Address: 0x1ebc80, Func Offset: 0x40
}

// 
// Start address: 0x1ebc80
float EnemyEffectObjGetFirstRot(sfObj* obj)
{
	_anon0* pse;
	// Line 162, Address: 0x1ebc80, Func Offset: 0
	// Line 164, Address: 0x1ebc88, Func Offset: 0x8
	// Line 166, Address: 0x1ebc90, Func Offset: 0x10
	// Line 165, Address: 0x1ebc94, Func Offset: 0x14
	// Line 166, Address: 0x1ebc98, Func Offset: 0x18
	// Func End, Address: 0x1ebca0, Func Offset: 0x20
}

// 
// Start address: 0x1ebca0
int EnemyEffectObjGetFirstType(sfObj* obj)
{
	_anon0* pse;
	// Line 173, Address: 0x1ebca0, Func Offset: 0
	// Line 175, Address: 0x1ebca8, Func Offset: 0x8
	// Line 177, Address: 0x1ebcb0, Func Offset: 0x10
	// Line 176, Address: 0x1ebcb4, Func Offset: 0x14
	// Line 177, Address: 0x1ebcb8, Func Offset: 0x18
	// Func End, Address: 0x1ebcc0, Func Offset: 0x20
}

// 
// Start address: 0x1ebcc0
void EnemyEffectObjSuicide(sfObj* obj)
{
	// Line 184, Address: 0x1ebcc0, Func Offset: 0
	// Line 185, Address: 0x1ebcc8, Func Offset: 0x8
	// Func End, Address: 0x1ebcd0, Func Offset: 0x10
}

// 
// Start address: 0x1ebcd0
void EnemyEffectObjSetEffectType(sfObj* obj)
{
	// Line 191, Address: 0x1ebcd0, Func Offset: 0
	// Line 192, Address: 0x1ebcd8, Func Offset: 0x8
	// Line 193, Address: 0x1ebce4, Func Offset: 0x14
	// Func End, Address: 0x1ebcf0, Func Offset: 0x20
}

// 
// Start address: 0x1ebcf0
void EnemyEffectObjSetPos(sfObj* obj, float* pos)
{
	EnemyEffectObjData* efd;
	// Line 200, Address: 0x1ebcf0, Func Offset: 0
	// Line 203, Address: 0x1ebcf4, Func Offset: 0x4
	// Line 204, Address: 0x1ebcf8, Func Offset: 0x8
	// Func End, Address: 0x1ebd00, Func Offset: 0x10
}

// 
// Start address: 0x1ebd00
float* EnemyEffectObjPos(sfObj* obj)
{
	// Line 211, Address: 0x1ebd00, Func Offset: 0
	// Line 213, Address: 0x1ebd0c, Func Offset: 0xc
	// Line 216, Address: 0x1ebd2c, Func Offset: 0x2c
	// Func End, Address: 0x1ebd3c, Func Offset: 0x3c
}

// 
// Start address: 0x1ebd40
EnemyEffectKind EnemyEffectObjKind(sfObj* obj)
{
	// Line 223, Address: 0x1ebd40, Func Offset: 0
	// Line 225, Address: 0x1ebd4c, Func Offset: 0xc
	// Line 228, Address: 0x1ebd6c, Func Offset: 0x2c
	// Func End, Address: 0x1ebd7c, Func Offset: 0x3c
}

// 
// Start address: 0x1ebd80
int EnemyObjIsEffect(sfObj* obj)
{
	EnemyEffectObjData* efd;
	// Line 245, Address: 0x1ebd80, Func Offset: 0
	// Line 246, Address: 0x1ebd88, Func Offset: 0x8
	// Line 247, Address: 0x1ebd90, Func Offset: 0x10
	// Line 248, Address: 0x1ebda8, Func Offset: 0x28
	// Line 249, Address: 0x1ebdac, Func Offset: 0x2c
	// Line 250, Address: 0x1ebdb8, Func Offset: 0x38
	// Line 251, Address: 0x1ebdc0, Func Offset: 0x40
	// Func End, Address: 0x1ebdc8, Func Offset: 0x48
}

// 
// Start address: 0x1ebdd0
sfObj* EnemyEffectObjSearch(sfObj* obj)
{
	EnemyEffectObjData* efd;
	// Line 260, Address: 0x1ebdd0, Func Offset: 0
	// Line 262, Address: 0x1ebdd8, Func Offset: 0x8
	// Line 263, Address: 0x1ebde0, Func Offset: 0x10
	// Line 264, Address: 0x1ebde4, Func Offset: 0x14
	// Line 266, Address: 0x1ebde8, Func Offset: 0x18
	// Line 267, Address: 0x1ebdf8, Func Offset: 0x28
	// Line 268, Address: 0x1ebe00, Func Offset: 0x30
	// Func End, Address: 0x1ebe08, Func Offset: 0x38
}

// 
// Start address: 0x1ebe10
sfObj* EnemyEffectObjSearchAttribute(EnemyEffectAttribute attr, sfObj* obj)
{
	unsigned int a;
	// Line 292, Address: 0x1ebe10, Func Offset: 0
	// Line 294, Address: 0x1ebe14, Func Offset: 0x4
	// Line 292, Address: 0x1ebe18, Func Offset: 0x8
	// Line 294, Address: 0x1ebe1c, Func Offset: 0xc
	// Line 292, Address: 0x1ebe20, Func Offset: 0x10
	// Line 294, Address: 0x1ebe24, Func Offset: 0x14
	// Line 296, Address: 0x1ebe28, Func Offset: 0x18
	// Line 297, Address: 0x1ebe34, Func Offset: 0x24
	// Line 299, Address: 0x1ebe48, Func Offset: 0x38
	// Line 300, Address: 0x1ebe5c, Func Offset: 0x4c
	// Line 301, Address: 0x1ebe60, Func Offset: 0x50
	// Func End, Address: 0x1ebe70, Func Offset: 0x60
}

