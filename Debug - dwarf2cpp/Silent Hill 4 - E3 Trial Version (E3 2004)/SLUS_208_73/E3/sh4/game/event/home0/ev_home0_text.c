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
typedef void(*type_8)(sfObj*);
typedef int(*type_17)(sfObj*);
typedef int(*type_18)(sfObj*);

typedef _anon0 type_0[256];
typedef _anon0 type_7[4];
typedef _anon0 type_9[0];
typedef _anon0 type_10[0];
typedef short type_11[2];
typedef unsigned short type_12[2];
typedef char type_13[4];
typedef unsigned char type_14[4];
typedef float type_15[1];
typedef int type_16[1];
typedef unsigned char type_19[320];

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

_EventDriver ev_home0_ie22_Msg_122;
_EventDriver ev_home0_ie22_Msg_122b;
_EventDriver ev_home0_ie22_Msg_123;
_EventDriver ev_home0_ie22_Msg_123b;
EventFlag event_flag;
_EventDriver ev_home0_ie01_Msg_124;
_EventDriver ev_home0_ie01_Msg_124b;
_EventDriver ev_home0_ie01_Msg_124c;
_EventDriver ev_home0_ie09_Msg_126;
_EventDriver ev_home0_ie09_Msg_127b;
_EventDriver ev_home0_ie09_Msg_127c;
_EventDriver ev_home0_ie09_Msg_127d;
_EventDriver ev_home0_ie09_Msg_129;
_EventDriver ev_home0_ie07_Msg_130;
_EventDriver ev_home0_ie07_Msg_after_130;
_EventDriver ev_home0_ie14_Msg_132;
_EventDriver ev_home0_ie14_Msg_133_0;
_EventDriver ev_home0_ie14_Msg_133_1;
_EventDriver ev_home0_ie14_Msg_133_2;
_EventDriver ev_home0_ie14_Msg_133_3;
_EventDriver ev_home0_ie14_Msg_133_4;
_EventDriver ev_home0_ie14_Msg_133_5;
_EventDriver ev_home0_ie14_Msg_133_6;
_EventDriver ev_home0_ie14_Msg_133_7;
_EventDriver ev_home0_ie14_Msg_133_8;
_EventDriver ev_home0_ie14_Msg_133_9;
_EventDriver ev_home0_ie14_Msg_133_10;
_EventDriver ev_home0_ie14_Msg_133_11;
_EventDriver ev_home0_ie14_Msg_133_12;
_EventDriver ev_home0_ie14_Msg_133_13;
_EventDriver ev_home0_ie17_Msg_134;
_EventDriver ev_home0_ie12_Msg_136;
_EventDriver ev_home0_ie05_Msg_139;
_EventDriver ev_home0_ie05_Msg_139b;
_EventDriver ev_home0_ie05_Msg_139c;
_EventDriver ev_home0_ie13_Msg_140a;
_EventDriver ev_home0_ie13_Msg_140b;
_EventDriver ev_home0_ie24_Msg_141;
_EventDriver ev_home0_ie24_Msg_141b;
_EventDriver ev_home0_ie24_Msg_141c;
_EventDriver ev_home0_ie24_Msg_141d;
_EventDriver ev_home0_ie17_135b;
_EventDriver ev_home0_ie22_porno;
_EventDriver ev_home0_ie22_floor;
_EventDriver ev_home0_ie22_desk;
_EventDriver ev_home0_ie03_doorplate;
_EventDriver ev_home0_ie03_end;
_EventDriver ev_home0_ie11_end;
_EventDriver ev_home0_ie07_uniform;
_EventDriver ev_home0_ie08_speeker;
_EventDriver ev_home0_ie08_turntable;
_EventDriver ev_home0_ie08_rack;
_EventDriver ev_home0_ie04_light;
_EventDriver ev_home0_ie05_lamp;
_EventDriver ev_home0_ie06_bookrack;
_anon0 MsgHome0_ie06_gun[0];
_anon0 MsgHome0_ie06_gun_1st[0];
_EventDriver ev_home0_ie06_gun;
_EventDriver ev_home0_ie06_target;
_EventDriver ev_home0_ie18_console;
_EventDriver ev_home0_ie18_tv;
_EventDriver ev_home0_ie18_bookrack;
_EventDriver ev_home0_ie18_barbell;
_EventDriver ev_home0_ie16_toys;
_EventDriver ev_home0_ie16_bed;
_EventDriver ev_home0_ie16_wall;
_EventDriver ev_home0_ie19_kitchen;
_EventDriver ev_home0_ie13_bottle;
_EventDriver ev_home0_ie13_bottle_floor;
_EventDriver ev_home0_ie13_bottle_box;
_EventDriver ev_home0_ie15_plate;

int ev_home0_ie01_Msg_124_trgchk();
int ev_home0_ie01_Msg_124b_exec(sfObj* obj);
int ev_home0_ie01_Msg_124b_end();
int ev_home0_ie01_Msg_124c_trgchk();
int ev_home0_ie07_Msg_130_end();
int ev_home0_ie07_Msg_after_130_trgchk(sfObj* obj);
int ev_home0_ie14_Msg_132_end();
int ev_home0_ie17_135b_end();
int ev_home0_ie06_gun_init(sfObj* obj);

// 
// Start address: 0x1ed5b60
int ev_home0_ie01_Msg_124_trgchk()
{
	// Line 60, Address: 0x1ed5b60, Func Offset: 0
	// Line 61, Address: 0x1ed5b70, Func Offset: 0x10
	// Func End, Address: 0x1ed5b78, Func Offset: 0x18
}

// 
// Start address: 0x1ed5b80
int ev_home0_ie01_Msg_124b_exec(sfObj* obj)
{
	int rtv;
	// Line 1071, Address: 0x1ed5b80, Func Offset: 0
	// Line 1072, Address: 0x1ed5b8c, Func Offset: 0xc
	// Line 1073, Address: 0x1ed5ba8, Func Offset: 0x28
	// Line 1074, Address: 0x1ed5bb0, Func Offset: 0x30
	// Line 1075, Address: 0x1ed5bb8, Func Offset: 0x38
	// Func End, Address: 0x1ed5bc8, Func Offset: 0x48
	// Line 75, Address: 0x1ed5b80, Func Offset: 0
	// Line 78, Address: 0x1ed5b84, Func Offset: 0x4
	// Line 75, Address: 0x1ed5b88, Func Offset: 0x8
	// Line 78, Address: 0x1ed5b98, Func Offset: 0x18
	// Line 79, Address: 0x1ed5bb4, Func Offset: 0x34
	// Line 82, Address: 0x1ed5bb8, Func Offset: 0x38
	// Line 83, Address: 0x1ed5bc8, Func Offset: 0x48
	// Line 85, Address: 0x1ed5bd0, Func Offset: 0x50
	// Line 87, Address: 0x1ed5bd8, Func Offset: 0x58
	// Line 88, Address: 0x1ed5be0, Func Offset: 0x60
	// Line 90, Address: 0x1ed5be4, Func Offset: 0x64
	// Line 91, Address: 0x1ed5be8, Func Offset: 0x68
	// Line 92, Address: 0x1ed5bec, Func Offset: 0x6c
	// Func End, Address: 0x1ed5c00, Func Offset: 0x80
}

// 
// Start address: 0x1ed5c00
int ev_home0_ie01_Msg_124b_end()
{
	// Line 97, Address: 0x1ed5c00, Func Offset: 0
	// Func End, Address: 0x1ed5c08, Func Offset: 0x8
}

// 
// Start address: 0x1ed5c10
int ev_home0_ie01_Msg_124c_trgchk()
{
	// Line 112, Address: 0x1ed5c10, Func Offset: 0
	// Line 113, Address: 0x1ed5c1c, Func Offset: 0xc
	// Func End, Address: 0x1ed5c24, Func Offset: 0x14
	// Line 735, Address: 0x1ed5c10, Func Offset: 0
	// Line 736, Address: 0x1ed5c18, Func Offset: 0x8
	// Line 738, Address: 0x1ed5c20, Func Offset: 0x10
	// Line 737, Address: 0x1ed5c24, Func Offset: 0x14
	// Line 738, Address: 0x1ed5c28, Func Offset: 0x18
	// Func End, Address: 0x1ed5c30, Func Offset: 0x20
}

// 
// Start address: 0x1ed5c30
int ev_home0_ie07_Msg_130_end()
{
	// Line 143, Address: 0x1ed5c30, Func Offset: 0
	// Line 145, Address: 0x1ed5c38, Func Offset: 0x8
	// Line 146, Address: 0x1ed5c48, Func Offset: 0x18
	// Line 149, Address: 0x1ed5c58, Func Offset: 0x28
	// Line 148, Address: 0x1ed5c5c, Func Offset: 0x2c
	// Line 149, Address: 0x1ed5c60, Func Offset: 0x30
	// Func End, Address: 0x1ed5c68, Func Offset: 0x38
	// Line 743, Address: 0x1ed5c30, Func Offset: 0
	// Line 744, Address: 0x1ed5c34, Func Offset: 0x4
	// Line 743, Address: 0x1ed5c38, Func Offset: 0x8
	// Line 744, Address: 0x1ed5c3c, Func Offset: 0xc
	// Line 745, Address: 0x1ed5c50, Func Offset: 0x20
	// Line 747, Address: 0x1ed5c58, Func Offset: 0x28
	// Line 746, Address: 0x1ed5c5c, Func Offset: 0x2c
	// Line 747, Address: 0x1ed5c60, Func Offset: 0x30
	// Func End, Address: 0x1ed5c68, Func Offset: 0x38
}

// 
// Start address: 0x1ed5c70
int ev_home0_ie07_Msg_after_130_trgchk(sfObj* obj)
{
	// Line 1632, Address: 0x1ed5c70, Func Offset: 0
	// Line 1636, Address: 0x1ed5c74, Func Offset: 0x4
	// Line 1632, Address: 0x1ed5c78, Func Offset: 0x8
	// Line 1636, Address: 0x1ed5c84, Func Offset: 0x14
	// Line 1633, Address: 0x1ed5c88, Func Offset: 0x18
	// Line 1636, Address: 0x1ed5c8c, Func Offset: 0x1c
	// Line 1637, Address: 0x1ed5ca4, Func Offset: 0x34
	// Line 1636, Address: 0x1ed5ca8, Func Offset: 0x38
	// Line 1639, Address: 0x1ed5cb0, Func Offset: 0x40
	// Line 1641, Address: 0x1ed5cb8, Func Offset: 0x48
	// Line 1640, Address: 0x1ed5cbc, Func Offset: 0x4c
	// Line 1641, Address: 0x1ed5cc0, Func Offset: 0x50
	// Line 1642, Address: 0x1ed5cc4, Func Offset: 0x54
	// Line 1645, Address: 0x1ed5ccc, Func Offset: 0x5c
	// Line 1643, Address: 0x1ed5cd0, Func Offset: 0x60
	// Line 1642, Address: 0x1ed5cd4, Func Offset: 0x64
	// Line 1643, Address: 0x1ed5cd8, Func Offset: 0x68
	// Line 1645, Address: 0x1ed5cdc, Func Offset: 0x6c
	// Line 1643, Address: 0x1ed5ce0, Func Offset: 0x70
	// Line 1644, Address: 0x1ed5ce4, Func Offset: 0x74
	// Line 1645, Address: 0x1ed5cf0, Func Offset: 0x80
	// Line 1650, Address: 0x1ed5d10, Func Offset: 0xa0
	// Line 1651, Address: 0x1ed5d18, Func Offset: 0xa8
	// Line 1650, Address: 0x1ed5d1c, Func Offset: 0xac
	// Line 1651, Address: 0x1ed5d2c, Func Offset: 0xbc
	// Line 1652, Address: 0x1ed5d30, Func Offset: 0xc0
	// Line 1655, Address: 0x1ed5d38, Func Offset: 0xc8
	// Line 1652, Address: 0x1ed5d3c, Func Offset: 0xcc
	// Line 1655, Address: 0x1ed5d40, Func Offset: 0xd0
	// Line 1652, Address: 0x1ed5d44, Func Offset: 0xd4
	// Line 1653, Address: 0x1ed5d48, Func Offset: 0xd8
	// Line 1654, Address: 0x1ed5d4c, Func Offset: 0xdc
	// Line 1652, Address: 0x1ed5d50, Func Offset: 0xe0
	// Line 1653, Address: 0x1ed5d54, Func Offset: 0xe4
	// Line 1654, Address: 0x1ed5d58, Func Offset: 0xe8
	// Line 1655, Address: 0x1ed5d5c, Func Offset: 0xec
	// Line 1652, Address: 0x1ed5d64, Func Offset: 0xf4
	// Line 1655, Address: 0x1ed5d68, Func Offset: 0xf8
	// Line 1652, Address: 0x1ed5d6c, Func Offset: 0xfc
	// Line 1653, Address: 0x1ed5d70, Func Offset: 0x100
	// Line 1652, Address: 0x1ed5d74, Func Offset: 0x104
	// Line 1653, Address: 0x1ed5d84, Func Offset: 0x114
	// Line 1654, Address: 0x1ed5d9c, Func Offset: 0x12c
	// Line 1653, Address: 0x1ed5da0, Func Offset: 0x130
	// Line 1654, Address: 0x1ed5da8, Func Offset: 0x138
	// Line 1655, Address: 0x1ed5dc8, Func Offset: 0x158
	// Line 1657, Address: 0x1ed5dd8, Func Offset: 0x168
	// Line 1659, Address: 0x1ed5de4, Func Offset: 0x174
	// Line 1660, Address: 0x1ed5de8, Func Offset: 0x178
	// Line 1661, Address: 0x1ed5dfc, Func Offset: 0x18c
	// Line 1663, Address: 0x1ed5e20, Func Offset: 0x1b0
	// Line 1665, Address: 0x1ed5e44, Func Offset: 0x1d4
	// Line 1667, Address: 0x1ed5e48, Func Offset: 0x1d8
	// Line 1668, Address: 0x1ed5e5c, Func Offset: 0x1ec
	// Line 1669, Address: 0x1ed5e64, Func Offset: 0x1f4
	// Line 1671, Address: 0x1ed5e6c, Func Offset: 0x1fc
	// Line 1672, Address: 0x1ed5e74, Func Offset: 0x204
	// Line 1673, Address: 0x1ed5e7c, Func Offset: 0x20c
	// Line 1676, Address: 0x1ed5e80, Func Offset: 0x210
	// Line 1675, Address: 0x1ed5e88, Func Offset: 0x218
	// Line 1676, Address: 0x1ed5e8c, Func Offset: 0x21c
	// Func End, Address: 0x1ed5e98, Func Offset: 0x228
	// Line 1104, Address: 0x1ed5c70, Func Offset: 0
	// Line 1108, Address: 0x1ed5c74, Func Offset: 0x4
	// Line 1104, Address: 0x1ed5c78, Func Offset: 0x8
	// Line 1108, Address: 0x1ed5c80, Func Offset: 0x10
	// Line 1109, Address: 0x1ed5c90, Func Offset: 0x20
	// Line 1110, Address: 0x1ed5ca4, Func Offset: 0x34
	// Line 1111, Address: 0x1ed5ca8, Func Offset: 0x38
	// Line 1112, Address: 0x1ed5cb0, Func Offset: 0x40
	// Line 1113, Address: 0x1ed5cc8, Func Offset: 0x58
	// Line 1116, Address: 0x1ed5cd0, Func Offset: 0x60
	// Line 1115, Address: 0x1ed5cd8, Func Offset: 0x68
	// Line 1116, Address: 0x1ed5cdc, Func Offset: 0x6c
	// Func End, Address: 0x1ed5ce4, Func Offset: 0x74
	// Line 166, Address: 0x1ed5c70, Func Offset: 0
	// Line 167, Address: 0x1ed5c80, Func Offset: 0x10
	// Line 169, Address: 0x1ed5c98, Func Offset: 0x28
	// Line 171, Address: 0x1ed5ca0, Func Offset: 0x30
	// Line 172, Address: 0x1ed5ca8, Func Offset: 0x38
	// Func End, Address: 0x1ed5cb4, Func Offset: 0x44
	// Line 753, Address: 0x1ed5c70, Func Offset: 0
	// Line 754, Address: 0x1ed5c74, Func Offset: 0x4
	// Line 753, Address: 0x1ed5c78, Func Offset: 0x8
	// Line 754, Address: 0x1ed5c7c, Func Offset: 0xc
	// Line 755, Address: 0x1ed5c88, Func Offset: 0x18
	// Line 757, Address: 0x1ed5c90, Func Offset: 0x20
	// Line 756, Address: 0x1ed5c94, Func Offset: 0x24
	// Line 757, Address: 0x1ed5c98, Func Offset: 0x28
	// Func End, Address: 0x1ed5ca0, Func Offset: 0x30
}

// 
// Start address: 0x1ed5cc0
int ev_home0_ie14_Msg_132_end()
{
	// Line 189, Address: 0x1ed5cc0, Func Offset: 0
	// Line 190, Address: 0x1ed5cc8, Func Offset: 0x8
	// Line 192, Address: 0x1ed5cd8, Func Offset: 0x18
	// Line 195, Address: 0x1ed5ce8, Func Offset: 0x28
	// Line 194, Address: 0x1ed5cec, Func Offset: 0x2c
	// Line 195, Address: 0x1ed5cf0, Func Offset: 0x30
	// Func End, Address: 0x1ed5cf8, Func Offset: 0x38
}

// 
// Start address: 0x1ed5d00
int ev_home0_ie17_135b_end()
{
	// Line 1137, Address: 0x1ed5d00, Func Offset: 0
	// Line 1145, Address: 0x1ed5d14, Func Offset: 0x14
	// Line 1147, Address: 0x1ed5d18, Func Offset: 0x18
	// Line 1150, Address: 0x1ed5d20, Func Offset: 0x20
	// Line 1152, Address: 0x1ed5d54, Func Offset: 0x54
	// Line 1153, Address: 0x1ed5d5c, Func Offset: 0x5c
	// Line 1159, Address: 0x1ed5d60, Func Offset: 0x60
	// Line 1153, Address: 0x1ed5d68, Func Offset: 0x68
	// Line 1154, Address: 0x1ed5d6c, Func Offset: 0x6c
	// Line 1159, Address: 0x1ed5d70, Func Offset: 0x70
	// Line 1154, Address: 0x1ed5d74, Func Offset: 0x74
	// Line 1155, Address: 0x1ed5d78, Func Offset: 0x78
	// Line 1159, Address: 0x1ed5d80, Func Offset: 0x80
	// Line 1160, Address: 0x1ed5d88, Func Offset: 0x88
	// Line 1161, Address: 0x1ed5d94, Func Offset: 0x94
	// Line 1162, Address: 0x1ed5d98, Func Offset: 0x98
	// Line 1163, Address: 0x1ed5da4, Func Offset: 0xa4
	// Line 1165, Address: 0x1ed5da8, Func Offset: 0xa8
	// Line 1166, Address: 0x1ed5db0, Func Offset: 0xb0
	// Line 1167, Address: 0x1ed5dcc, Func Offset: 0xcc
	// Line 1168, Address: 0x1ed5df0, Func Offset: 0xf0
	// Line 1169, Address: 0x1ed5e30, Func Offset: 0x130
	// Line 1170, Address: 0x1ed5e3c, Func Offset: 0x13c
	// Line 1169, Address: 0x1ed5e44, Func Offset: 0x144
	// Line 1170, Address: 0x1ed5e48, Func Offset: 0x148
	// Line 1171, Address: 0x1ed5e54, Func Offset: 0x154
	// Line 1172, Address: 0x1ed5e58, Func Offset: 0x158
	// Line 1171, Address: 0x1ed5e5c, Func Offset: 0x15c
	// Line 1172, Address: 0x1ed5e60, Func Offset: 0x160
	// Line 1171, Address: 0x1ed5e64, Func Offset: 0x164
	// Line 1172, Address: 0x1ed5e70, Func Offset: 0x170
	// Line 1173, Address: 0x1ed5e8c, Func Offset: 0x18c
	// Line 1174, Address: 0x1ed5e94, Func Offset: 0x194
	// Line 1176, Address: 0x1ed5e98, Func Offset: 0x198
	// Line 1177, Address: 0x1ed5ea0, Func Offset: 0x1a0
	// Func End, Address: 0x1ed5eb8, Func Offset: 0x1b8
	// Line 967, Address: 0x1ed5d00, Func Offset: 0
	// Line 968, Address: 0x1ed5d04, Func Offset: 0x4
	// Line 967, Address: 0x1ed5d08, Func Offset: 0x8
	// Line 968, Address: 0x1ed5d10, Func Offset: 0x10
	// Line 969, Address: 0x1ed5d18, Func Offset: 0x18
	// Line 970, Address: 0x1ed5d38, Func Offset: 0x38
	// Line 971, Address: 0x1ed5d54, Func Offset: 0x54
	// Line 972, Address: 0x1ed5d64, Func Offset: 0x64
	// Line 973, Address: 0x1ed5d7c, Func Offset: 0x7c
	// Func End, Address: 0x1ed5d8c, Func Offset: 0x8c
	// Line 293, Address: 0x1ed5d00, Func Offset: 0
	// Line 294, Address: 0x1ed5d04, Func Offset: 0x4
	// Line 293, Address: 0x1ed5d08, Func Offset: 0x8
	// Line 295, Address: 0x1ed5d14, Func Offset: 0x14
	// Func End, Address: 0x1ed5d1c, Func Offset: 0x1c
}

// 
// Start address: 0x1ed5d20
int ev_home0_ie06_gun_init(sfObj* obj)
{
	_EventInst* inst;
	// Line 169, Address: 0x1ed5d20, Func Offset: 0
	// Func End, Address: 0x1ed5d28, Func Offset: 0x8
	// Line 361, Address: 0x1ed5d20, Func Offset: 0
	// Line 362, Address: 0x1ed5d2c, Func Offset: 0xc
	// Line 363, Address: 0x1ed5d34, Func Offset: 0x14
	// Line 364, Address: 0x1ed5d3c, Func Offset: 0x1c
	// Line 365, Address: 0x1ed5d4c, Func Offset: 0x2c
	// Line 367, Address: 0x1ed5d5c, Func Offset: 0x3c
	// Line 368, Address: 0x1ed5d6c, Func Offset: 0x4c
	// Line 370, Address: 0x1ed5d78, Func Offset: 0x58
	// Line 372, Address: 0x1ed5d8c, Func Offset: 0x6c
	// Line 374, Address: 0x1ed5d90, Func Offset: 0x70
	// Line 375, Address: 0x1ed5d98, Func Offset: 0x78
	// Func End, Address: 0x1ed5da8, Func Offset: 0x88
}

