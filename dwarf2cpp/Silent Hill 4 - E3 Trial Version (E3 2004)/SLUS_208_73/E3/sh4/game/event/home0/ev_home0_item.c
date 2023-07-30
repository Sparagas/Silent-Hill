typedef struct EventFlag;
typedef union _anon0;
typedef struct _EventDriver;
typedef struct sfObj;

typedef int(*type_5)(sfObj*);
typedef int(*type_9)(sfObj*);
typedef void(*type_10)(sfObj*);
typedef int(*type_11)(sfObj*);
typedef int(*type_12)(sfObj*);
typedef int(*type_13)(sfObj*);
typedef void(*type_15)(sfObj*);

typedef unsigned char type_0[320];
typedef short type_1[2];
typedef unsigned short type_2[2];
typedef char type_3[4];
typedef unsigned char type_4[4];
typedef float type_6[1];
typedef _anon0 type_7[256];
typedef int type_8[1];
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

EventFlag event_flag;
_EventDriver ev_home0_ie01_041_getdoll;
_EventDriver ev_home0_ie22_Msg_121;
_EventDriver ev_home0_ie22_Msg_121_b;
_EventDriver ev_home0_ie22_Msg_122_2;
_EventDriver ev_home0_ie22_Msg_123_2;
_EventDriver ev_home0_ie22_report;
_EventDriver ev_home0_ie09_Msg_126b;
_EventDriver ev_home0_ie09_Msg_126c;
_EventDriver ev_home0_ie09_Msg_127;
_EventDriver ev_home0_ie09_Msg_128;
_EventDriver ev_home0_ie18_Msg_137;
_EventDriver ev_home0_ie05_Msg_139b_2;
_EventDriver ev_home0_ie13_Msg_140a_2;
_EventDriver ev_home0_ie17_revolver;
_EventDriver ev_home0_ie05_submachinegun;
_EventDriver ev_3ldk0_rl02_get_spray;
_EventDriver ev_building0_GetPutter;
_EventDriver ev_home0_ie24_key;
_EventDriver ev_home0_ie09_key;
_EventDriver ev_home0_iexx_key_1;
_EventDriver ev_home0_iexx_key_2;
_EventDriver ev_home0_iexx_key_6;
_EventDriver ev_home0_iexx_key_7;
_EventDriver ev_home0_iexx_key_8;
_EventDriver ev_home0_iexx_key_9;
_EventDriver ev_home0_iexx_key_10;
_EventDriver ev_home0_iexx_key_11;
_EventDriver ev_home0_iexx_key_12;
_EventDriver ev_home0_iexx_key_15;
_EventDriver ev_home0_iexx_key_16;
_EventDriver ev_home0_iexx_key_17;
_EventDriver ev_home0_iexx_key_18;
_EventDriver ev_home0_iexx_key_19;

int ev_home0_ie01_041_getdoll_trgchk();
int ev_home0_ie09_Msg_126c_trgchk();
int ev_home0_ie05_submachinegun_trgchk();
int ev_3ldk0_rl02_trgchk_walldepth();

// 
// Start address: 0x1ed58d0
int ev_home0_ie01_041_getdoll_trgchk()
{
	// Line 49, Address: 0x1ed58d0, Func Offset: 0
	// Line 52, Address: 0x1ed58fc, Func Offset: 0x2c
	// Line 53, Address: 0x1ed5904, Func Offset: 0x34
	// Line 54, Address: 0x1ed5908, Func Offset: 0x38
	// Line 56, Address: 0x1ed5910, Func Offset: 0x40
	// Func End, Address: 0x1ed5918, Func Offset: 0x48
}

// 
// Start address: 0x1ed5920
int ev_home0_ie09_Msg_126c_trgchk()
{
	// Line 94, Address: 0x1ed5920, Func Offset: 0
	// Line 95, Address: 0x1ed592c, Func Offset: 0xc
	// Func End, Address: 0x1ed5934, Func Offset: 0x14
	// Line 615, Address: 0x1ed5920, Func Offset: 0
	// Line 616, Address: 0x1ed5928, Func Offset: 0x8
	// Line 618, Address: 0x1ed5930, Func Offset: 0x10
	// Line 617, Address: 0x1ed5934, Func Offset: 0x14
	// Line 618, Address: 0x1ed5938, Func Offset: 0x18
	// Func End, Address: 0x1ed5940, Func Offset: 0x20
}

// 
// Start address: 0x1ed5940
int ev_home0_ie05_submachinegun_trgchk()
{
	int rtv;
	// Line 127, Address: 0x1ed5940, Func Offset: 0
	// Line 130, Address: 0x1ed594c, Func Offset: 0xc
	// Line 131, Address: 0x1ed5960, Func Offset: 0x20
	// Line 132, Address: 0x1ed5964, Func Offset: 0x24
	// Line 134, Address: 0x1ed5968, Func Offset: 0x28
	// Line 135, Address: 0x1ed597c, Func Offset: 0x3c
	// Line 138, Address: 0x1ed5980, Func Offset: 0x40
	// Line 139, Address: 0x1ed5984, Func Offset: 0x44
	// Func End, Address: 0x1ed5994, Func Offset: 0x54
	// Line 624, Address: 0x1ed5940, Func Offset: 0
	// Line 626, Address: 0x1ed5944, Func Offset: 0x4
	// Line 624, Address: 0x1ed5948, Func Offset: 0x8
	// Line 626, Address: 0x1ed594c, Func Offset: 0xc
	// Line 628, Address: 0x1ed595c, Func Offset: 0x1c
	// Line 627, Address: 0x1ed5960, Func Offset: 0x20
	// Line 628, Address: 0x1ed596c, Func Offset: 0x2c
	// Line 629, Address: 0x1ed5974, Func Offset: 0x34
	// Line 632, Address: 0x1ed5978, Func Offset: 0x38
	// Line 633, Address: 0x1ed5988, Func Offset: 0x48
	// Line 635, Address: 0x1ed599c, Func Offset: 0x5c
	// Line 637, Address: 0x1ed59b8, Func Offset: 0x78
	// Line 638, Address: 0x1ed59c0, Func Offset: 0x80
	// Func End, Address: 0x1ed59cc, Func Offset: 0x8c
}

// 
// Start address: 0x1ed59a0
int ev_3ldk0_rl02_trgchk_walldepth()
{
	// Line 1509, Address: 0x1ed59a0, Func Offset: 0
	// Line 1510, Address: 0x1ed59b4, Func Offset: 0x14
	// Line 1511, Address: 0x1ed59bc, Func Offset: 0x1c
	// Line 1510, Address: 0x1ed59c4, Func Offset: 0x24
	// Line 1513, Address: 0x1ed59d0, Func Offset: 0x30
	// Func End, Address: 0x1ed59d8, Func Offset: 0x38
	// Line 761, Address: 0x1ed59a0, Func Offset: 0
	// Line 762, Address: 0x1ed59b8, Func Offset: 0x18
	// Line 763, Address: 0x1ed59bc, Func Offset: 0x1c
	// Line 765, Address: 0x1ed59c4, Func Offset: 0x24
	// Line 768, Address: 0x1ed59cc, Func Offset: 0x2c
	// Line 771, Address: 0x1ed5a00, Func Offset: 0x60
	// Line 774, Address: 0x1ed5a08, Func Offset: 0x68
	// Line 775, Address: 0x1ed5a14, Func Offset: 0x74
	// Line 777, Address: 0x1ed5a20, Func Offset: 0x80
	// Line 776, Address: 0x1ed5a24, Func Offset: 0x84
	// Line 777, Address: 0x1ed5a38, Func Offset: 0x98
	// Line 780, Address: 0x1ed5a40, Func Offset: 0xa0
	// Line 783, Address: 0x1ed5a48, Func Offset: 0xa8
	// Line 784, Address: 0x1ed5a58, Func Offset: 0xb8
	// Line 785, Address: 0x1ed5a60, Func Offset: 0xc0
	// Line 786, Address: 0x1ed5a68, Func Offset: 0xc8
	// Line 787, Address: 0x1ed5a74, Func Offset: 0xd4
	// Line 790, Address: 0x1ed5a78, Func Offset: 0xd8
	// Line 791, Address: 0x1ed5a88, Func Offset: 0xe8
	// Line 792, Address: 0x1ed5a90, Func Offset: 0xf0
	// Line 793, Address: 0x1ed5a98, Func Offset: 0xf8
	// Line 794, Address: 0x1ed5aa4, Func Offset: 0x104
	// Line 796, Address: 0x1ed5aa8, Func Offset: 0x108
	// Line 797, Address: 0x1ed5ab0, Func Offset: 0x110
	// Line 800, Address: 0x1ed5ab8, Func Offset: 0x118
	// Line 803, Address: 0x1ed5ac0, Func Offset: 0x120
	// Line 804, Address: 0x1ed5ae8, Func Offset: 0x148
	// Line 805, Address: 0x1ed5af0, Func Offset: 0x150
	// Line 808, Address: 0x1ed5af8, Func Offset: 0x158
	// Line 809, Address: 0x1ed5b04, Func Offset: 0x164
	// Line 810, Address: 0x1ed5b18, Func Offset: 0x178
	// Line 811, Address: 0x1ed5b3c, Func Offset: 0x19c
	// Line 817, Address: 0x1ed5b48, Func Offset: 0x1a8
	// Line 818, Address: 0x1ed5b58, Func Offset: 0x1b8
	// Line 819, Address: 0x1ed5b60, Func Offset: 0x1c0
	// Line 820, Address: 0x1ed5b70, Func Offset: 0x1d0
	// Line 821, Address: 0x1ed5b84, Func Offset: 0x1e4
	// Line 824, Address: 0x1ed5b8c, Func Offset: 0x1ec
	// Line 825, Address: 0x1ed5b94, Func Offset: 0x1f4
	// Line 826, Address: 0x1ed5b98, Func Offset: 0x1f8
	// Line 829, Address: 0x1ed5ba4, Func Offset: 0x204
	// Line 830, Address: 0x1ed5bb4, Func Offset: 0x214
	// Line 836, Address: 0x1ed5bb8, Func Offset: 0x218
	// Line 837, Address: 0x1ed5bbc, Func Offset: 0x21c
	// Func End, Address: 0x1ed5bd4, Func Offset: 0x234
	// Line 166, Address: 0x1ed59a0, Func Offset: 0
	// Func End, Address: 0x1ed59a8, Func Offset: 0x8
}

