typedef struct _EventInst;
typedef struct sfObj;
typedef union _anon0;
typedef struct _EventDriver;

typedef int(*type_0)(sfObj*);
typedef int(*type_1)(sfObj*);
typedef void(*type_4)(sfObj*);
typedef int(*type_5)(sfObj*);
typedef int(*type_9)(sfObj*);
typedef int(*type_12)(sfObj*);
typedef int(*type_14)(sfObj*);
typedef int(*type_17)(sfObj*);
typedef void(*type_20)(sfObj*);

typedef _anon0 type_2[16];
typedef _anon0 type_3[256];
typedef short type_6[2];
typedef _anon0 type_7[16];
typedef unsigned short type_8[2];
typedef char type_10[4];
typedef unsigned char type_11[4];
typedef float type_13[1];
typedef int type_15[1];
typedef _anon0 type_16[16];
typedef _anon0 type_18[16];
typedef _anon0 type_19[4];
typedef _anon0 type_21[16];

struct _EventInst
{
	_EventDriver evdrv;
	unsigned int attr;
	int(*drawaf)(sfObj*);
	int(*endexitf)(sfObj*);
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

_EventDriver ev_subway0_sb03_083_2;
_EventDriver ev_subway0_sb20_176;
_EventDriver ev_subway0_sb24_handle;
_EventDriver ev_subway0_sb18_2220;
_EventDriver ev_subway0_sb21_2221;
_EventDriver ev_subway0_sb19_horsewhip;
_EventDriver ev_subway0_sb25_plate;
_EventDriver ev_subway0_sb24_key;
_EventDriver ev_sb14_22_check63_drink;
_EventDriver ev_building0_GetNiblick;
_EventDriver ev_sp_bottle;
_EventDriver ev_sp_stungun;
_EventDriver ev_sp_bat;
_anon0 MsgSp_QustionGetScoop[16];
_EventDriver ev_sp_scoop;
_anon0 MsgSp_GetRustyHatchet[16];
_EventDriver ev_sp_axe;
_EventDriver ev_sp_spray;
_EventDriver ev_sp_revolver;
_EventDriver ev_sp_cutter;
_anon0 MsgSp_GetPick[16];
_EventDriver ev_sp_pick;
_anon0 MsgSp_GetPipe[16];
_EventDriver ev_sp_pipe;
_EventDriver ev_sp_chainsaw;
_anon0 MsgSp_GetHundgun[16];
_EventDriver ev_sp_hundgun;

int ev_subway0_sb18_2220_exec(sfObj* obj);
int ev_subway0_sb21_2221_exec(sfObj* obj);
int sb14_22_check_63();
int sb14_22_check_30();

// 
// Start address: 0x1ed6a60
int ev_subway0_sb18_2220_exec(sfObj* obj)
{
	int rtv;
	_EventInst* evinst;
	_anon0 val;
	// Line 104, Address: 0x1ed6a60, Func Offset: 0
	// Line 107, Address: 0x1ed6a74, Func Offset: 0x14
	// Line 109, Address: 0x1ed6aa0, Func Offset: 0x40
	// Line 111, Address: 0x1ed6ac4, Func Offset: 0x64
	// Line 113, Address: 0x1ed6ae0, Func Offset: 0x80
	// Line 116, Address: 0x1ed6aec, Func Offset: 0x8c
	// Line 117, Address: 0x1ed6af0, Func Offset: 0x90
	// Line 121, Address: 0x1ed6b00, Func Offset: 0xa0
	// Line 122, Address: 0x1ed6b08, Func Offset: 0xa8
	// Line 124, Address: 0x1ed6b10, Func Offset: 0xb0
	// Line 128, Address: 0x1ed6b18, Func Offset: 0xb8
	// Line 129, Address: 0x1ed6b34, Func Offset: 0xd4
	// Line 130, Address: 0x1ed6b38, Func Offset: 0xd8
	// Line 132, Address: 0x1ed6b40, Func Offset: 0xe0
	// Line 136, Address: 0x1ed6b48, Func Offset: 0xe8
	// Line 137, Address: 0x1ed6b58, Func Offset: 0xf8
	// Line 139, Address: 0x1ed6b7c, Func Offset: 0x11c
	// Line 141, Address: 0x1ed6b84, Func Offset: 0x124
	// Line 143, Address: 0x1ed6b8c, Func Offset: 0x12c
	// Line 144, Address: 0x1ed6b90, Func Offset: 0x130
	// Line 145, Address: 0x1ed6ba0, Func Offset: 0x140
	// Line 146, Address: 0x1ed6ba8, Func Offset: 0x148
	// Line 147, Address: 0x1ed6bc8, Func Offset: 0x168
	// Line 149, Address: 0x1ed6bd0, Func Offset: 0x170
	// Line 151, Address: 0x1ed6bd8, Func Offset: 0x178
	// Line 155, Address: 0x1ed6be0, Func Offset: 0x180
	// Line 157, Address: 0x1ed6bec, Func Offset: 0x18c
	// Line 159, Address: 0x1ed6bf0, Func Offset: 0x190
	// Line 160, Address: 0x1ed6bf4, Func Offset: 0x194
	// Func End, Address: 0x1ed6c08, Func Offset: 0x1a8
}

// 
// Start address: 0x1ed6c10
int ev_subway0_sb21_2221_exec(sfObj* obj)
{
	int rtv;
	// Line 181, Address: 0x1ed6c10, Func Offset: 0
	// Line 184, Address: 0x1ed6c14, Func Offset: 0x4
	// Line 181, Address: 0x1ed6c18, Func Offset: 0x8
	// Line 184, Address: 0x1ed6c28, Func Offset: 0x18
	// Line 186, Address: 0x1ed6c50, Func Offset: 0x40
	// Line 187, Address: 0x1ed6c74, Func Offset: 0x64
	// Line 191, Address: 0x1ed6c80, Func Offset: 0x70
	// Line 194, Address: 0x1ed6c90, Func Offset: 0x80
	// Line 197, Address: 0x1ed6cac, Func Offset: 0x9c
	// Line 199, Address: 0x1ed6cb4, Func Offset: 0xa4
	// Line 201, Address: 0x1ed6cd8, Func Offset: 0xc8
	// Line 203, Address: 0x1ed6ce0, Func Offset: 0xd0
	// Line 206, Address: 0x1ed6ce8, Func Offset: 0xd8
	// Line 208, Address: 0x1ed6cf8, Func Offset: 0xe8
	// Line 211, Address: 0x1ed6d04, Func Offset: 0xf4
	// Line 213, Address: 0x1ed6d08, Func Offset: 0xf8
	// Line 214, Address: 0x1ed6d0c, Func Offset: 0xfc
	// Func End, Address: 0x1ed6d20, Func Offset: 0x110
	// Line 1471, Address: 0x1ed6c10, Func Offset: 0
	// Line 1472, Address: 0x1ed6c20, Func Offset: 0x10
	// Line 1475, Address: 0x1ed6c28, Func Offset: 0x18
	// Line 1477, Address: 0x1ed6c38, Func Offset: 0x28
	// Line 1480, Address: 0x1ed6c40, Func Offset: 0x30
	// Line 1483, Address: 0x1ed6c48, Func Offset: 0x38
	// Func End, Address: 0x1ed6c58, Func Offset: 0x48
}

// 
// Start address: 0x1ed6d20
int sb14_22_check_63()
{
	// Line 330, Address: 0x1ed6d20, Func Offset: 0
	// Line 333, Address: 0x1ed6d28, Func Offset: 0x8
	// Line 336, Address: 0x1ed6d44, Func Offset: 0x24
	// Line 333, Address: 0x1ed6d48, Func Offset: 0x28
	// Line 336, Address: 0x1ed6d4c, Func Offset: 0x2c
	// Func End, Address: 0x1ed6d54, Func Offset: 0x34
}

// 
// Start address: 0x1ed6d60
int sb14_22_check_30()
{
	// Line 353, Address: 0x1ed6d60, Func Offset: 0
	// Line 356, Address: 0x1ed6d68, Func Offset: 0x8
	// Line 359, Address: 0x1ed6d84, Func Offset: 0x24
	// Line 356, Address: 0x1ed6d88, Func Offset: 0x28
	// Line 359, Address: 0x1ed6d8c, Func Offset: 0x2c
	// Func End, Address: 0x1ed6d94, Func Offset: 0x34
	// Line 204, Address: 0x1ed6d60, Func Offset: 0
	// Line 205, Address: 0x1ed6d64, Func Offset: 0x4
	// Line 204, Address: 0x1ed6d68, Func Offset: 0x8
	// Line 205, Address: 0x1ed6d70, Func Offset: 0x10
	// Line 208, Address: 0x1ed6d7c, Func Offset: 0x1c
	// Line 209, Address: 0x1ed6d84, Func Offset: 0x24
	// Line 212, Address: 0x1ed6d8c, Func Offset: 0x2c
	// Line 211, Address: 0x1ed6d90, Func Offset: 0x30
	// Line 212, Address: 0x1ed6d94, Func Offset: 0x34
	// Func End, Address: 0x1ed6da0, Func Offset: 0x40
}

