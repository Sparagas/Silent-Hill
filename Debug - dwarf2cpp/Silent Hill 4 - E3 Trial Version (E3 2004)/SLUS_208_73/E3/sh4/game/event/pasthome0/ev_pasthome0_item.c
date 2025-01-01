typedef struct EventFlag;
typedef union _anon0;
typedef struct sfObj;
typedef struct _EventDriver;

typedef int(*type_8)(sfObj*);
typedef void(*type_9)(sfObj*);
typedef int(*type_10)(sfObj*);
typedef int(*type_11)(sfObj*);
typedef int(*type_12)(sfObj*);
typedef int(*type_13)(sfObj*);
typedef void(*type_15)(sfObj*);

typedef unsigned char type_0[320];
typedef short type_1[2];
typedef unsigned short type_2[2];
typedef char type_3[4];
typedef unsigned char type_4[4];
typedef float type_5[1];
typedef _anon0 type_6[256];
typedef int type_7[1];
typedef _anon0 type_14[4];

struct EventFlag
{
	unsigned char flag[320];
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

_EventDriver ev_pasthome0_cm21_193b;
_EventDriver ev_pasthome0_cm21_194_03;
EventFlag event_flag;
_EventDriver ev_pasthome0_cm09_58_Item;
_EventDriver ev_pasthome0_cm17_revolver;
_EventDriver ev_pasthome0_cm05_submachinegun;
_EventDriver ev_ph_rl02_get_spray;
_EventDriver ev_cm_GetPutter;
_EventDriver ev_pasthome0_cm25_2321;
_EventDriver ev_pasthome0_cm25_2322;
_EventDriver ev_pasthome0_cm25_2324;
_EventDriver ev_pasthome0_cm25_2325;
_EventDriver ev_pasthome0_get_uniform;

int ev_pasthome0_cm09_58_Item_end();
int ev_pasthome0_cm05_submachinegun_trgchk();
int ev_3ldk0_rl02_trgchk_walldepth();
int ev_get_uniform_trgchk();
int ev_pasthome0_get_uniform_trgchk();

// 
// Start address: 0x1ed71a0
int ev_pasthome0_cm09_58_Item_end()
{
	// Line 54, Address: 0x1ed71a0, Func Offset: 0
	// Line 55, Address: 0x1ed71a4, Func Offset: 0x4
	// Line 54, Address: 0x1ed71a8, Func Offset: 0x8
	// Line 55, Address: 0x1ed71ac, Func Offset: 0xc
	// Line 57, Address: 0x1ed71b8, Func Offset: 0x18
	// Line 59, Address: 0x1ed71c0, Func Offset: 0x20
	// Line 58, Address: 0x1ed71c4, Func Offset: 0x24
	// Line 59, Address: 0x1ed71c8, Func Offset: 0x28
	// Func End, Address: 0x1ed71d0, Func Offset: 0x30
}

// 
// Start address: 0x1ed71d0
int ev_pasthome0_cm05_submachinegun_trgchk()
{
	int rtv;
	// Line 1702, Address: 0x1ed71d0, Func Offset: 0
	// Line 1703, Address: 0x1ed71d4, Func Offset: 0x4
	// Line 1702, Address: 0x1ed71d8, Func Offset: 0x8
	// Line 1703, Address: 0x1ed71dc, Func Offset: 0xc
	// Line 1702, Address: 0x1ed71e0, Func Offset: 0x10
	// Line 1703, Address: 0x1ed71ec, Func Offset: 0x1c
	// Line 1704, Address: 0x1ed71fc, Func Offset: 0x2c
	// Line 1706, Address: 0x1ed7210, Func Offset: 0x40
	// Line 1707, Address: 0x1ed7228, Func Offset: 0x58
	// Line 1708, Address: 0x1ed723c, Func Offset: 0x6c
	// Line 1709, Address: 0x1ed7248, Func Offset: 0x78
	// Func End, Address: 0x1ed7260, Func Offset: 0x90
	// Line 77, Address: 0x1ed71d0, Func Offset: 0
	// Line 80, Address: 0x1ed71dc, Func Offset: 0xc
	// Line 81, Address: 0x1ed71f0, Func Offset: 0x20
	// Line 82, Address: 0x1ed71f4, Func Offset: 0x24
	// Line 84, Address: 0x1ed71f8, Func Offset: 0x28
	// Line 85, Address: 0x1ed720c, Func Offset: 0x3c
	// Line 88, Address: 0x1ed7210, Func Offset: 0x40
	// Line 89, Address: 0x1ed7214, Func Offset: 0x44
	// Func End, Address: 0x1ed7224, Func Offset: 0x54
}

// 
// Start address: 0x1ed7230
int ev_3ldk0_rl02_trgchk_walldepth()
{
	// Line 116, Address: 0x1ed7230, Func Offset: 0
	// Func End, Address: 0x1ed7238, Func Offset: 0x8
}

// 
// Start address: 0x1ed7240
int ev_get_uniform_trgchk()
{
	int ending;
	// Line 145, Address: 0x1ed7240, Func Offset: 0
	// Line 148, Address: 0x1ed7248, Func Offset: 0x8
	// Line 152, Address: 0x1ed7250, Func Offset: 0x10
	// Line 153, Address: 0x1ed7268, Func Offset: 0x28
	// Line 157, Address: 0x1ed7270, Func Offset: 0x30
	// Line 158, Address: 0x1ed7280, Func Offset: 0x40
	// Line 160, Address: 0x1ed7288, Func Offset: 0x48
	// Line 161, Address: 0x1ed7290, Func Offset: 0x50
	// Func End, Address: 0x1ed729c, Func Offset: 0x5c
}

// 
// Start address: 0x1ed72a0
int ev_pasthome0_get_uniform_trgchk()
{
	// Line 164, Address: 0x1ed72a0, Func Offset: 0
	// Func End, Address: 0x1ed72a8, Func Offset: 0x8
}

