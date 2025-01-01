typedef struct _EventDriver;
typedef struct sfObj;
typedef union _anon0;

typedef int(*type_0)(sfObj*);
typedef int(*type_1)(sfObj*);
typedef int(*type_2)(sfObj*);
typedef int(*type_3)(sfObj*);
typedef int(*type_4)(sfObj*);
typedef void(*type_7)(sfObj*);
typedef void(*type_13)(sfObj*);

typedef _anon0 type_5[4];
typedef _anon0 type_6[256];
typedef short type_8[2];
typedef unsigned short type_9[2];
typedef char type_10[4];
typedef unsigned char type_11[4];
typedef float type_12[1];
typedef int type_14[1];

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

_EventDriver ev_spiral0_st07_2705;

int ev_spiral0_st07_2705_end(sfObj* obj);

// 
// Start address: 0x335ae0
int ev_spiral0_st07_2705_end(sfObj* obj)
{
	// Line 43, Address: 0x335ae0, Func Offset: 0
	// Line 44, Address: 0x335aec, Func Offset: 0xc
	// Line 45, Address: 0x335af4, Func Offset: 0x14
	// Line 46, Address: 0x335afc, Func Offset: 0x1c
	// Line 47, Address: 0x335b04, Func Offset: 0x24
	// Func End, Address: 0x335b14, Func Offset: 0x34
}

