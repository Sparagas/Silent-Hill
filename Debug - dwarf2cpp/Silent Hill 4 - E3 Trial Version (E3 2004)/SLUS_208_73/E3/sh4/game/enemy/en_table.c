typedef struct sfObj;
typedef struct EnemyKindTable;
typedef union _anon0;

typedef void(*type_2)(sfObj*);
typedef void(*type_3)(sfObj*);
typedef void(*type_4)(sfObj*);
typedef void(*type_5)(sfObj*);
typedef void(*type_6)(sfObj*);
typedef void(*type_7)(sfObj*);

typedef EnemyKindTable type_0[24];
typedef _anon0 type_1[256];
typedef short type_8[2];
typedef unsigned short type_9[2];
typedef char type_10[4];
typedef unsigned char type_11[4];
typedef float type_12[1];
typedef int type_13[1];

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

struct EnemyKindTable
{
	void(*func)(sfObj*);
	void(*cnst)(sfObj*);
	void(*dest)(sfObj*);
	void(*rend)(sfObj*);
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

EnemyKindTable enemy_kind_tbl[24];

EnemyKindTable* EnemyKindTableGetAddress(int kind);

// 
// Start address: 0x163550
EnemyKindTable* EnemyKindTableGetAddress(int kind)
{
	// Line 194, Address: 0x163550, Func Offset: 0
	// Line 195, Address: 0x16355c, Func Offset: 0xc
	// Func End, Address: 0x163564, Func Offset: 0x14
}

