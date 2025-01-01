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

EventFlag event_flag;
_EventDriver ev_hospital0_hs14_161e;
_EventDriver ev_3ldk0_rl02_get_cutter;
_EventDriver ev_building0_GetMashyIron;
_EventDriver ev_hs10_bullet;

int ev_hospital0_hs14_161e_trgchk();
int ev_hospital0_hs14_161e_end(sfObj* obj);
int ev_3ldk0_trgchk_mcd_afterprologue();
int ev_hs10_bullet_check();

// 
// Start address: 0x1ed6720
int ev_hospital0_hs14_161e_trgchk()
{
	// Line 52, Address: 0x1ed6720, Func Offset: 0
	// Line 55, Address: 0x1ed6730, Func Offset: 0x10
	// Func End, Address: 0x1ed6738, Func Offset: 0x18
	// Line 1289, Address: 0x1ed6720, Func Offset: 0
	// Line 1290, Address: 0x1ed673c, Func Offset: 0x1c
	// Line 1293, Address: 0x1ed6748, Func Offset: 0x28
	// Line 1290, Address: 0x1ed674c, Func Offset: 0x2c
	// Line 1293, Address: 0x1ed6750, Func Offset: 0x30
	// Line 1297, Address: 0x1ed678c, Func Offset: 0x6c
	// Line 1298, Address: 0x1ed6798, Func Offset: 0x78
	// Line 1300, Address: 0x1ed67b8, Func Offset: 0x98
	// Line 1302, Address: 0x1ed67d0, Func Offset: 0xb0
	// Func End, Address: 0x1ed67ec, Func Offset: 0xcc
}

// 
// Start address: 0x1ed6740
int ev_hospital0_hs14_161e_end(sfObj* obj)
{
	// Line 1278, Address: 0x1ed6740, Func Offset: 0
	// Line 1279, Address: 0x1ed6744, Func Offset: 0x4
	// Line 1278, Address: 0x1ed6748, Func Offset: 0x8
	// Line 1279, Address: 0x1ed6750, Func Offset: 0x10
	// Line 1280, Address: 0x1ed6764, Func Offset: 0x24
	// Line 1282, Address: 0x1ed676c, Func Offset: 0x2c
	// Line 1281, Address: 0x1ed6770, Func Offset: 0x30
	// Line 1282, Address: 0x1ed6774, Func Offset: 0x34
	// Func End, Address: 0x1ed6780, Func Offset: 0x40
	// Line 57, Address: 0x1ed6740, Func Offset: 0
	// Line 58, Address: 0x1ed674c, Func Offset: 0xc
	// Line 59, Address: 0x1ed675c, Func Offset: 0x1c
	// Line 61, Address: 0x1ed6768, Func Offset: 0x28
	// Line 60, Address: 0x1ed6770, Func Offset: 0x30
	// Line 61, Address: 0x1ed6774, Func Offset: 0x34
	// Func End, Address: 0x1ed677c, Func Offset: 0x3c
}

// 
// Start address: 0x1ed6780
int ev_3ldk0_trgchk_mcd_afterprologue()
{
	// Line 1287, Address: 0x1ed6780, Func Offset: 0
	// Line 1288, Address: 0x1ed6784, Func Offset: 0x4
	// Line 1287, Address: 0x1ed6788, Func Offset: 0x8
	// Line 1288, Address: 0x1ed678c, Func Offset: 0xc
	// Line 1289, Address: 0x1ed6798, Func Offset: 0x18
	// Line 1290, Address: 0x1ed67a0, Func Offset: 0x20
	// Func End, Address: 0x1ed67ac, Func Offset: 0x2c
	// Line 86, Address: 0x1ed6780, Func Offset: 0
	// Func End, Address: 0x1ed6788, Func Offset: 0x8
}

// 
// Start address: 0x1ed6790
int ev_hs10_bullet_check()
{
	// Line 402, Address: 0x1ed6790, Func Offset: 0
	// Line 407, Address: 0x1ed6798, Func Offset: 0x8
	// Line 410, Address: 0x1ed67a0, Func Offset: 0x10
	// Line 407, Address: 0x1ed67a4, Func Offset: 0x14
	// Line 410, Address: 0x1ed67b0, Func Offset: 0x20
	// Func End, Address: 0x1ed67b8, Func Offset: 0x28
	// Line 109, Address: 0x1ed6790, Func Offset: 0
	// Line 112, Address: 0x1ed679c, Func Offset: 0xc
	// Func End, Address: 0x1ed67a4, Func Offset: 0x14
}

