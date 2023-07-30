typedef struct sfObj;
typedef union _anon0;
typedef struct EventFlag;
typedef struct _EventDriver;

typedef int(*type_0)(sfObj*);
typedef int(*type_1)(sfObj*);
typedef int(*type_2)(sfObj*);
typedef int(*type_4)(sfObj*);
typedef void(*type_5)(sfObj*);
typedef void(*type_8)(sfObj*);
typedef int(*type_16)(sfObj*);

typedef _anon0 type_3[256];
typedef _anon0 type_6[4];
typedef unsigned char type_7[320];
typedef float type_9[4];
typedef short type_10[2];
typedef unsigned short type_11[2];
typedef char type_12[4];
typedef unsigned char type_13[4];
typedef float type_14[1];
typedef int type_15[1];

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

struct EventFlag
{
	unsigned char flag[320];
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

EventFlag event_flag;
_EventDriver ev_tunnel0_gt01_first_exit;

int ev_tunnel0_gt01_first_exit_trgchk();
int ev_tunnel0_gt01_first_exit_init(sfObj* obj);
int ev_tunnel0_gt01_first_exit_exec(sfObj* obj);
int ev_tunnel0_gt01_first_exit_end();

// 
// Start address: 0x2dfb70
int ev_tunnel0_gt01_first_exit_trgchk()
{
	// Line 60, Address: 0x2dfb70, Func Offset: 0
	// Line 63, Address: 0x2dfb80, Func Offset: 0x10
	// Func End, Address: 0x2dfb88, Func Offset: 0x18
}

// 
// Start address: 0x2dfb90
int ev_tunnel0_gt01_first_exit_init(sfObj* obj)
{
	// Line 65, Address: 0x2dfb90, Func Offset: 0
	// Line 66, Address: 0x2dfb94, Func Offset: 0x4
	// Line 65, Address: 0x2dfb98, Func Offset: 0x8
	// Line 66, Address: 0x2dfba0, Func Offset: 0x10
	// Line 68, Address: 0x2dfbac, Func Offset: 0x1c
	// Line 67, Address: 0x2dfbb0, Func Offset: 0x20
	// Line 68, Address: 0x2dfbb4, Func Offset: 0x24
	// Func End, Address: 0x2dfbc0, Func Offset: 0x30
}

// 
// Start address: 0x2dfbc0
int ev_tunnel0_gt01_first_exit_exec(sfObj* obj)
{
	int* p;
	// Line 70, Address: 0x2dfbc0, Func Offset: 0
	// Line 71, Address: 0x2dfbcc, Func Offset: 0xc
	// Line 73, Address: 0x2dfbd0, Func Offset: 0x10
	// Line 74, Address: 0x2dfbdc, Func Offset: 0x1c
	// Line 77, Address: 0x2dfbe4, Func Offset: 0x24
	// Line 81, Address: 0x2dfbe8, Func Offset: 0x28
	// Line 77, Address: 0x2dfbf0, Func Offset: 0x30
	// Line 81, Address: 0x2dfbf8, Func Offset: 0x38
	// Func End, Address: 0x2dfc00, Func Offset: 0x40
}

// 
// Start address: 0x2dfc00
int ev_tunnel0_gt01_first_exit_end()
{
	float start_pos[4];
	// Line 83, Address: 0x2dfc00, Func Offset: 0
	// Line 85, Address: 0x2dfc04, Func Offset: 0x4
	// Line 83, Address: 0x2dfc08, Func Offset: 0x8
	// Line 85, Address: 0x2dfc0c, Func Offset: 0xc
	// Line 86, Address: 0x2dfc18, Func Offset: 0x18
	// Line 87, Address: 0x2dfc28, Func Offset: 0x28
	// Line 88, Address: 0x2dfc3c, Func Offset: 0x3c
	// Line 89, Address: 0x2dfc40, Func Offset: 0x40
	// Line 88, Address: 0x2dfc44, Func Offset: 0x44
	// Line 90, Address: 0x2dfc54, Func Offset: 0x54
	// Func End, Address: 0x2dfc60, Func Offset: 0x60
}

