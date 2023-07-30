typedef struct sfObj;
typedef union _anon0;

typedef void(*type_1)(sfObj*);
typedef void(*type_3)(sfObj*);

typedef _anon0 type_0[256];
typedef float type_2[4];
typedef short type_4[2];
typedef unsigned short type_5[2];
typedef char type_6[4];
typedef unsigned char type_7[4];
typedef float type_8[1];
typedef int type_9[1];

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


void EnemyEffectTerritoryConstruct(sfObj* obj);
void EnemyEffectGeneralDestruct(sfObj* obj);
void EnemyEffectDummyHandle();
void EnemyEffectDummyDraw();

// 
// Start address: 0x229c70
void EnemyEffectTerritoryConstruct(sfObj* obj)
{
	float pos[4];
	// Line 29, Address: 0x229c70, Func Offset: 0
	// Line 31, Address: 0x229c74, Func Offset: 0x4
	// Line 29, Address: 0x229c78, Func Offset: 0x8
	// Line 31, Address: 0x229c7c, Func Offset: 0xc
	// Line 29, Address: 0x229c80, Func Offset: 0x10
	// Line 31, Address: 0x229c84, Func Offset: 0x14
	// Line 33, Address: 0x229c8c, Func Offset: 0x1c
	// Line 34, Address: 0x229c98, Func Offset: 0x28
	// Line 35, Address: 0x229ca4, Func Offset: 0x34
	// Func End, Address: 0x229cb4, Func Offset: 0x44
}

// 
// Start address: 0x229cc0
void EnemyEffectGeneralDestruct(sfObj* obj)
{
	// Line 41, Address: 0x229cc0, Func Offset: 0
	// Line 42, Address: 0x229ccc, Func Offset: 0xc
	// Line 43, Address: 0x229cd4, Func Offset: 0x14
	// Line 44, Address: 0x229cdc, Func Offset: 0x1c
	// Func End, Address: 0x229cec, Func Offset: 0x2c
}

// 
// Start address: 0x229cf0
void EnemyEffectDummyHandle()
{
	// Line 52, Address: 0x229cf0, Func Offset: 0
	// Func End, Address: 0x229cf8, Func Offset: 0x8
}

// 
// Start address: 0x229d00
void EnemyEffectDummyDraw()
{
	// Line 60, Address: 0x229d00, Func Offset: 0
	// Func End, Address: 0x229d08, Func Offset: 0x8
}

