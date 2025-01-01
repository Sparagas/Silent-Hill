typedef union _anon0;
typedef struct sfObj;
typedef struct _EventInst;
typedef struct EventFlag;
typedef struct _EventDriver;

typedef int(*type_1)(sfObj*);
typedef int(*type_2)(sfObj*);
typedef void(*type_3)(sfObj*);
typedef int(*type_4)(sfObj*);
typedef int(*type_5)(sfObj*);
typedef int(*type_6)(sfObj*);
typedef void(*type_9)(sfObj*);
typedef int(*type_30)(sfObj*);
typedef int(*type_31)(sfObj*);

typedef _anon0 type_0[256];
typedef _anon0 type_7[0];
typedef _anon0 type_8[4];
typedef _EventDriver type_10[1];
typedef _anon0 type_11[0];
typedef _anon0 type_12[0];
typedef _anon0 type_13[0];
typedef _EventDriver type_14[1];
typedef _anon0 type_15[0];
typedef _anon0 type_16[0];
typedef _anon0 type_17[0];
typedef _anon0 type_18[0];
typedef _anon0 type_19[0];
typedef short type_20[2];
typedef unsigned short type_21[2];
typedef _anon0 type_22[0];
typedef _anon0 type_23[0];
typedef char type_24[4];
typedef unsigned char type_25[4];
typedef float type_26[1];
typedef int type_27[1];
typedef _anon0 type_28[0];
typedef _anon0 type_29[0];
typedef unsigned char type_32[320];

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

struct _EventInst
{
	_EventDriver evdrv;
	unsigned int attr;
	int(*drawaf)(sfObj*);
	int(*endexitf)(sfObj*);
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

_anon0 MsgCommon_QustionEnterHole[0];
_anon0 MsgSubway0_076[0];
EventFlag event_flag;
_EventDriver ev_subway0_sb03_076;
_EventDriver ev_subway0_sb15_085;
_EventDriver ev_subway0_sb03_083;
_EventDriver ev_subway0_sb03_after_083;
_EventDriver ev_sb22_175;
_anon0 MsgSubway0_173[0];
_anon0 LynchStreetLine_Accs[0];
_anon0 LynchStreetLine_Accs_1st[0];
_EventDriver ev_sb_lynch_access_entrance;
_EventDriver ev_sb_lynch_access_opposite;
_EventDriver ev_sb_lynch_exit_access;
_EventDriver ev_sb_king_access;
_EventDriver ev_sb_king_exit_access;
_anon0 KingStreetLine_Accs[0];
_anon0 KingStreetLine_Accs_found_pass[0];
_EventDriver ev_sb_king_access_found_pass;
_EventDriver ev_sb20_173_no_coin;
_EventDriver ev_sb_vender;
_anon0 MsgSubway0_toybox[0];
_anon0 MsgCommon_NotWorrisome[0];
_EventDriver ev_sb18_toybox;
_EventDriver ev_sb_lynchs_vending_machine;
_EventDriver ev_sb_kings_vending_machine;
_anon0 MsgSubway0_kings_articles[0];
_anon0 MsgSubway0_kings_articles_l[0];
_EventDriver ev_sb_kings_articles[1];
_anon0 MsgSubway0_kings_driveroom[0];
_anon0 MsgSubway0_kings_driveroom_l[0];
_EventDriver ev_sb_kings_driveroom[1];
_EventDriver ev_sb22_kings_driveroom;
_EventDriver ev_sb01_es;
_EventDriver ev_sb01_small_column;
_EventDriver ev_sb01_large_column;
_EventDriver ev_sb01_pipe_root;
_EventDriver ev_sb01_pipe;
_EventDriver ev_sb01_info;
_EventDriver ev_sb01_poster;
_EventDriver ev_sb01_ad;
_EventDriver ev_sb03_urinal;
_EventDriver ev_sb03_m_door;
_EventDriver ev_sb03_f_door;
_EventDriver ev_sb04_phone;
_EventDriver ev_sb04_office;
_EventDriver ev_sb04_desk;
_EventDriver ev_sb05_end;
_EventDriver ev_sb07_end;
_EventDriver ev_sb07_rubble;
_EventDriver ev_sb08_vending_machine;
_EventDriver ev_sb14_vending_machine;
_EventDriver ev_sb17_geeky_things;

int ev_subway0_sb03_076_init();
int ev_subway0_sb03_076_exec(sfObj* obj);
int ev_sb25_175_destruct();
int ev_sb_lynch_access_entrance_init(sfObj* obj);
int ev_sb_king_access_found_pass_init(sfObj* obj);
int ev_sb20_173_no_coin_trgchk();
int ev_sb20_173_no_coin_destruct();
int ev_sb18_toybox_init();
int ev_sb_kings_articles_init();
int ev_sb_kings_driveroom_init();

// 
// Start address: 0x1ed6da0
int ev_subway0_sb03_076_init()
{
	// Line 57, Address: 0x1ed6da0, Func Offset: 0
	// Line 58, Address: 0x1ed6da4, Func Offset: 0x4
	// Line 57, Address: 0x1ed6da8, Func Offset: 0x8
	// Line 58, Address: 0x1ed6dac, Func Offset: 0xc
	// Line 60, Address: 0x1ed6dbc, Func Offset: 0x1c
	// Line 61, Address: 0x1ed6dc4, Func Offset: 0x24
	// Line 64, Address: 0x1ed6dd0, Func Offset: 0x30
	// Line 65, Address: 0x1ed6ddc, Func Offset: 0x3c
	// Line 67, Address: 0x1ed6de0, Func Offset: 0x40
	// Line 66, Address: 0x1ed6de4, Func Offset: 0x44
	// Line 67, Address: 0x1ed6de8, Func Offset: 0x48
	// Func End, Address: 0x1ed6df0, Func Offset: 0x50
	// Line 215, Address: 0x1ed6da0, Func Offset: 0
	// Line 218, Address: 0x1ed6da4, Func Offset: 0x4
	// Line 215, Address: 0x1ed6da8, Func Offset: 0x8
	// Line 218, Address: 0x1ed6dac, Func Offset: 0xc
	// Line 215, Address: 0x1ed6db0, Func Offset: 0x10
	// Line 217, Address: 0x1ed6dc0, Func Offset: 0x20
	// Line 218, Address: 0x1ed6dc4, Func Offset: 0x24
	// Line 221, Address: 0x1ed6dcc, Func Offset: 0x2c
	// Line 223, Address: 0x1ed6dd4, Func Offset: 0x34
	// Line 224, Address: 0x1ed6df4, Func Offset: 0x54
	// Line 225, Address: 0x1ed6df8, Func Offset: 0x58
	// Line 226, Address: 0x1ed6e00, Func Offset: 0x60
	// Line 227, Address: 0x1ed6e08, Func Offset: 0x68
	// Line 228, Address: 0x1ed6e10, Func Offset: 0x70
	// Line 229, Address: 0x1ed6e1c, Func Offset: 0x7c
	// Line 231, Address: 0x1ed6e30, Func Offset: 0x90
	// Line 234, Address: 0x1ed6e5c, Func Offset: 0xbc
	// Line 236, Address: 0x1ed6e74, Func Offset: 0xd4
	// Line 237, Address: 0x1ed6e80, Func Offset: 0xe0
	// Line 238, Address: 0x1ed6e88, Func Offset: 0xe8
	// Line 240, Address: 0x1ed6e98, Func Offset: 0xf8
	// Line 242, Address: 0x1ed6eb0, Func Offset: 0x110
	// Line 244, Address: 0x1ed6ebc, Func Offset: 0x11c
	// Line 246, Address: 0x1ed6ec4, Func Offset: 0x124
	// Line 248, Address: 0x1ed6ec8, Func Offset: 0x128
	// Line 249, Address: 0x1ed6ed8, Func Offset: 0x138
	// Line 250, Address: 0x1ed6ee4, Func Offset: 0x144
	// Line 255, Address: 0x1ed6ef4, Func Offset: 0x154
	// Line 256, Address: 0x1ed6f00, Func Offset: 0x160
	// Line 257, Address: 0x1ed6f08, Func Offset: 0x168
	// Line 259, Address: 0x1ed6f14, Func Offset: 0x174
	// Line 260, Address: 0x1ed6f24, Func Offset: 0x184
	// Line 262, Address: 0x1ed6f3c, Func Offset: 0x19c
	// Line 263, Address: 0x1ed6f5c, Func Offset: 0x1bc
	// Line 262, Address: 0x1ed6f60, Func Offset: 0x1c0
	// Line 263, Address: 0x1ed6f64, Func Offset: 0x1c4
	// Line 265, Address: 0x1ed6f68, Func Offset: 0x1c8
	// Line 266, Address: 0x1ed6f70, Func Offset: 0x1d0
	// Line 267, Address: 0x1ed6f78, Func Offset: 0x1d8
	// Line 268, Address: 0x1ed6f84, Func Offset: 0x1e4
	// Line 270, Address: 0x1ed6f88, Func Offset: 0x1e8
	// Line 272, Address: 0x1ed6f90, Func Offset: 0x1f0
	// Line 273, Address: 0x1ed6f98, Func Offset: 0x1f8
	// Line 274, Address: 0x1ed6fa0, Func Offset: 0x200
	// Line 275, Address: 0x1ed6fac, Func Offset: 0x20c
	// Line 278, Address: 0x1ed6fb0, Func Offset: 0x210
	// Line 281, Address: 0x1ed6fcc, Func Offset: 0x22c
	// Line 282, Address: 0x1ed6fd4, Func Offset: 0x234
	// Line 283, Address: 0x1ed6ffc, Func Offset: 0x25c
	// Line 284, Address: 0x1ed7000, Func Offset: 0x260
	// Line 285, Address: 0x1ed700c, Func Offset: 0x26c
	// Line 290, Address: 0x1ed7014, Func Offset: 0x274
	// Line 292, Address: 0x1ed7018, Func Offset: 0x278
	// Line 293, Address: 0x1ed7024, Func Offset: 0x284
	// Line 295, Address: 0x1ed7038, Func Offset: 0x298
	// Line 298, Address: 0x1ed7040, Func Offset: 0x2a0
	// Line 297, Address: 0x1ed7044, Func Offset: 0x2a4
	// Line 298, Address: 0x1ed7048, Func Offset: 0x2a8
	// Func End, Address: 0x1ed705c, Func Offset: 0x2bc
}

// 
// Start address: 0x1ed6df0
int ev_subway0_sb03_076_exec(sfObj* obj)
{
	int ret;
	_EventInst* evinst;
	// Line 70, Address: 0x1ed6df0, Func Offset: 0
	// Line 73, Address: 0x1ed6e04, Func Offset: 0x14
	// Line 74, Address: 0x1ed6e14, Func Offset: 0x24
	// Line 75, Address: 0x1ed6e28, Func Offset: 0x38
	// Line 77, Address: 0x1ed6e30, Func Offset: 0x40
	// Line 78, Address: 0x1ed6e3c, Func Offset: 0x4c
	// Line 79, Address: 0x1ed6e40, Func Offset: 0x50
	// Line 80, Address: 0x1ed6e44, Func Offset: 0x54
	// Line 81, Address: 0x1ed6e48, Func Offset: 0x58
	// Line 82, Address: 0x1ed6e4c, Func Offset: 0x5c
	// Func End, Address: 0x1ed6e60, Func Offset: 0x70
	// Line 273, Address: 0x1ed6df0, Func Offset: 0
	// Line 281, Address: 0x1ed6e08, Func Offset: 0x18
	// Line 282, Address: 0x1ed6e14, Func Offset: 0x24
	// Line 283, Address: 0x1ed6e1c, Func Offset: 0x2c
	// Line 284, Address: 0x1ed6e38, Func Offset: 0x48
	// Line 285, Address: 0x1ed6e44, Func Offset: 0x54
	// Line 286, Address: 0x1ed6e54, Func Offset: 0x64
	// Line 288, Address: 0x1ed6e5c, Func Offset: 0x6c
	// Line 289, Address: 0x1ed6e80, Func Offset: 0x90
	// Line 290, Address: 0x1ed6e98, Func Offset: 0xa8
	// Line 291, Address: 0x1ed6e9c, Func Offset: 0xac
	// Line 294, Address: 0x1ed6ea8, Func Offset: 0xb8
	// Line 293, Address: 0x1ed6eac, Func Offset: 0xbc
	// Line 294, Address: 0x1ed6eb0, Func Offset: 0xc0
	// Line 295, Address: 0x1ed6eb8, Func Offset: 0xc8
	// Line 294, Address: 0x1ed6ebc, Func Offset: 0xcc
	// Line 295, Address: 0x1ed6ecc, Func Offset: 0xdc
	// Line 296, Address: 0x1ed6ed8, Func Offset: 0xe8
	// Line 298, Address: 0x1ed6edc, Func Offset: 0xec
	// Line 299, Address: 0x1ed6ee0, Func Offset: 0xf0
	// Line 300, Address: 0x1ed6ef4, Func Offset: 0x104
	// Func End, Address: 0x1ed6f0c, Func Offset: 0x11c
}

// 
// Start address: 0x1ed6e60
int ev_sb25_175_destruct()
{
	// Line 167, Address: 0x1ed6e60, Func Offset: 0
	// Line 168, Address: 0x1ed6e64, Func Offset: 0x4
	// Line 167, Address: 0x1ed6e68, Func Offset: 0x8
	// Line 169, Address: 0x1ed6e74, Func Offset: 0x14
	// Func End, Address: 0x1ed6e7c, Func Offset: 0x1c
}

// 
// Start address: 0x1ed6e80
int ev_sb_lynch_access_entrance_init(sfObj* obj)
{
	_EventInst* inst;
	// Line 186, Address: 0x1ed6e80, Func Offset: 0
	// Line 187, Address: 0x1ed6e90, Func Offset: 0x10
	// Line 189, Address: 0x1ed6e9c, Func Offset: 0x1c
	// Line 190, Address: 0x1ed6ea4, Func Offset: 0x24
	// Line 192, Address: 0x1ed6eb4, Func Offset: 0x34
	// Line 193, Address: 0x1ed6ec4, Func Offset: 0x44
	// Line 194, Address: 0x1ed6ed4, Func Offset: 0x54
	// Line 196, Address: 0x1ed6ee0, Func Offset: 0x60
	// Line 198, Address: 0x1ed6ef0, Func Offset: 0x70
	// Line 199, Address: 0x1ed6f00, Func Offset: 0x80
	// Line 202, Address: 0x1ed6f08, Func Offset: 0x88
	// Line 205, Address: 0x1ed6f1c, Func Offset: 0x9c
	// Line 206, Address: 0x1ed6f20, Func Offset: 0xa0
	// Line 207, Address: 0x1ed6f28, Func Offset: 0xa8
	// Func End, Address: 0x1ed6f3c, Func Offset: 0xbc
}

// 
// Start address: 0x1ed6f40
int ev_sb_king_access_found_pass_init(sfObj* obj)
{
	_EventInst* inst;
	// Line 244, Address: 0x1ed6f40, Func Offset: 0
	// Line 245, Address: 0x1ed6f4c, Func Offset: 0xc
	// Line 247, Address: 0x1ed6f54, Func Offset: 0x14
	// Line 248, Address: 0x1ed6f5c, Func Offset: 0x1c
	// Line 249, Address: 0x1ed6f6c, Func Offset: 0x2c
	// Line 250, Address: 0x1ed6f7c, Func Offset: 0x3c
	// Line 252, Address: 0x1ed6f88, Func Offset: 0x48
	// Line 254, Address: 0x1ed6f9c, Func Offset: 0x5c
	// Line 255, Address: 0x1ed6fa0, Func Offset: 0x60
	// Line 256, Address: 0x1ed6fa8, Func Offset: 0x68
	// Func End, Address: 0x1ed6fb8, Func Offset: 0x78
}

// 
// Start address: 0x1ed6fc0
int ev_sb20_173_no_coin_trgchk()
{
	// Line 275, Address: 0x1ed6fc0, Func Offset: 0
	// Line 276, Address: 0x1ed6fd0, Func Offset: 0x10
	// Func End, Address: 0x1ed6fd8, Func Offset: 0x18
}

// 
// Start address: 0x1ed6fe0
int ev_sb20_173_no_coin_destruct()
{
	// Line 281, Address: 0x1ed6fe0, Func Offset: 0
	// Line 282, Address: 0x1ed6fe4, Func Offset: 0x4
	// Line 281, Address: 0x1ed6fe8, Func Offset: 0x8
	// Line 283, Address: 0x1ed6ff4, Func Offset: 0x14
	// Func End, Address: 0x1ed6ffc, Func Offset: 0x1c
	// Line 1619, Address: 0x1ed6fe0, Func Offset: 0
	// Line 1620, Address: 0x1ed6ff0, Func Offset: 0x10
	// Line 1623, Address: 0x1ed6ff8, Func Offset: 0x18
	// Line 1625, Address: 0x1ed7008, Func Offset: 0x28
	// Line 1628, Address: 0x1ed7010, Func Offset: 0x30
	// Line 1631, Address: 0x1ed7018, Func Offset: 0x38
	// Func End, Address: 0x1ed7028, Func Offset: 0x48
}

// 
// Start address: 0x1ed7000
int ev_sb18_toybox_init()
{
	// Line 301, Address: 0x1ed7000, Func Offset: 0
	// Line 303, Address: 0x1ed7004, Func Offset: 0x4
	// Line 301, Address: 0x1ed7008, Func Offset: 0x8
	// Line 303, Address: 0x1ed700c, Func Offset: 0xc
	// Line 304, Address: 0x1ed701c, Func Offset: 0x1c
	// Line 305, Address: 0x1ed7024, Func Offset: 0x24
	// Line 308, Address: 0x1ed7030, Func Offset: 0x30
	// Line 309, Address: 0x1ed703c, Func Offset: 0x3c
	// Line 311, Address: 0x1ed7040, Func Offset: 0x40
	// Line 310, Address: 0x1ed7044, Func Offset: 0x44
	// Line 311, Address: 0x1ed7048, Func Offset: 0x48
	// Func End, Address: 0x1ed7050, Func Offset: 0x50
	// Line 355, Address: 0x1ed7000, Func Offset: 0
	// Line 351, Address: 0x1ed7004, Func Offset: 0x4
	// Line 355, Address: 0x1ed700c, Func Offset: 0xc
	// Line 351, Address: 0x1ed7014, Func Offset: 0x14
	// Line 357, Address: 0x1ed701c, Func Offset: 0x1c
	// Line 355, Address: 0x1ed7020, Func Offset: 0x20
	// Line 357, Address: 0x1ed702c, Func Offset: 0x2c
	// Line 355, Address: 0x1ed7030, Func Offset: 0x30
	// Line 357, Address: 0x1ed7044, Func Offset: 0x44
	// Line 355, Address: 0x1ed7048, Func Offset: 0x48
	// Line 351, Address: 0x1ed7050, Func Offset: 0x50
	// Line 355, Address: 0x1ed7054, Func Offset: 0x54
	// Line 357, Address: 0x1ed7058, Func Offset: 0x58
	// Line 358, Address: 0x1ed7060, Func Offset: 0x60
	// Line 359, Address: 0x1ed7074, Func Offset: 0x74
	// Line 361, Address: 0x1ed7080, Func Offset: 0x80
	// Line 363, Address: 0x1ed7094, Func Offset: 0x94
	// Line 365, Address: 0x1ed709c, Func Offset: 0x9c
	// Line 367, Address: 0x1ed70a8, Func Offset: 0xa8
	// Line 368, Address: 0x1ed70b0, Func Offset: 0xb0
	// Line 369, Address: 0x1ed70b4, Func Offset: 0xb4
	// Line 370, Address: 0x1ed70b8, Func Offset: 0xb8
	// Line 371, Address: 0x1ed70c0, Func Offset: 0xc0
	// Line 372, Address: 0x1ed70c4, Func Offset: 0xc4
	// Line 378, Address: 0x1ed70c8, Func Offset: 0xc8
	// Func End, Address: 0x1ed70dc, Func Offset: 0xdc
}

// 
// Start address: 0x1ed7050
int ev_sb_kings_articles_init()
{
	// Line 336, Address: 0x1ed7050, Func Offset: 0
	// Line 338, Address: 0x1ed7058, Func Offset: 0x8
	// Line 339, Address: 0x1ed7068, Func Offset: 0x18
	// Line 340, Address: 0x1ed7070, Func Offset: 0x20
	// Line 343, Address: 0x1ed7078, Func Offset: 0x28
	// Line 344, Address: 0x1ed7084, Func Offset: 0x34
	// Line 346, Address: 0x1ed7088, Func Offset: 0x38
	// Line 345, Address: 0x1ed708c, Func Offset: 0x3c
	// Line 346, Address: 0x1ed7090, Func Offset: 0x40
	// Func End, Address: 0x1ed7098, Func Offset: 0x48
}

// 
// Start address: 0x1ed70a0
int ev_sb_kings_driveroom_init()
{
	// Line 371, Address: 0x1ed70a0, Func Offset: 0
	// Line 372, Address: 0x1ed70a8, Func Offset: 0x8
	// Line 373, Address: 0x1ed70b8, Func Offset: 0x18
	// Line 374, Address: 0x1ed70c0, Func Offset: 0x20
	// Line 377, Address: 0x1ed70c8, Func Offset: 0x28
	// Line 378, Address: 0x1ed70d4, Func Offset: 0x34
	// Line 380, Address: 0x1ed70d8, Func Offset: 0x38
	// Line 379, Address: 0x1ed70dc, Func Offset: 0x3c
	// Line 380, Address: 0x1ed70e0, Func Offset: 0x40
	// Func End, Address: 0x1ed70e8, Func Offset: 0x48
}

