typedef struct sfObj;
typedef struct _EventDriver;
typedef union _anon0;

typedef void(*type_1)(sfObj*);
typedef int(*type_2)(sfObj*);
typedef int(*type_3)(sfObj*);
typedef int(*type_4)(sfObj*);
typedef int(*type_5)(sfObj*);
typedef int(*type_6)(sfObj*);
typedef void(*type_8)(sfObj*);

typedef _anon0 type_0[256];
typedef _anon0 type_7[4];
typedef short type_9[2];
typedef unsigned short type_10[2];
typedef char type_11[4];
typedef unsigned char type_12[4];
typedef float type_13[1];
typedef int type_14[1];

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

struct _EventDriver
{
	int evnum;
	int(*trgchk)(sfObj*);
	int(*init)(sfObj*);
	int(*exec)(sfObj*);
	int(*draw)(sfObj*);
	int(*end)(sfObj*);
	unsigned int* file;
	_anon0 val[4];
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

_EventDriver ev_last0_ls01_goto_ls02;

int ev_last0_ls01_goto_ls02_exec(sfObj* obj);

// 
// Start address: 0x1edb090
int ev_last0_ls01_goto_ls02_exec(sfObj* obj)
{
	// Line 54, Address: 0x1edb090, Func Offset: 0
	// Line 55, Address: 0x1edb098, Func Offset: 0x8
	// Line 56, Address: 0x1edb0a8, Func Offset: 0x18
	// Line 57, Address: 0x1edb0b8, Func Offset: 0x28
	// Line 59, Address: 0x1edb0c0, Func Offset: 0x30
	// Line 61, Address: 0x1edb0c8, Func Offset: 0x38
	// Line 62, Address: 0x1edb0d0, Func Offset: 0x40
	// Func End, Address: 0x1edb0dc, Func Offset: 0x4c
}

