typedef struct sfObj;
typedef struct EventFlag;
typedef struct _EventInst;
typedef struct _EventDriver;
typedef union _anon0;

typedef int(*type_1)(sfObj*);
typedef int(*type_2)(sfObj*);
typedef int(*type_4)(sfObj*);
typedef void(*type_5)(sfObj*);
typedef int(*type_6)(sfObj*);
typedef int(*type_7)(sfObj*);
typedef int(*type_8)(sfObj*);
typedef int(*type_9)(sfObj*);
typedef void(*type_11)(sfObj*);

typedef unsigned char type_0[320];
typedef _anon0 type_3[256];
typedef _anon0 type_10[4];
typedef unsigned int type_12[2];
typedef unsigned int type_13[1];
typedef unsigned int type_14[5];
typedef short type_15[2];
typedef unsigned short type_16[2];
typedef char type_17[4];
typedef unsigned char type_18[4];
typedef float type_19[4];
typedef float type_20[1];
typedef int type_21[1];

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

struct EventFlag
{
	unsigned char flag[320];
};

struct _EventInst
{
	_EventDriver evdrv;
	unsigned int attr;
	int(*drawaf)(sfObj*);
	int(*endexitf)(sfObj*);
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

unsigned int ev_last0_ls01_218_file[2];
_EventDriver ev_last0_ls01_218;
unsigned int ev_last0_ls02_050_file[5];
_EventDriver ev_last0_ls02_050;
unsigned int ev_last0_ls02_2327_file[1];
_EventDriver ev_last0_ls02_2327;
_EventDriver ev_last0_ls02_219;
EventFlag event_flag;
_EventDriver ev_last0_ls01_ending;
void* data_load_addr;

int ev_last0_ls01_218_end(sfObj* obj);
int ev_last0_ls02_050_end(sfObj* obj);
int ev_last0_ls02_050_draw(sfObj* obj);
int ev_last0_ls02_2327_init(sfObj* obj);
int ev_last0_ls02_2327_exec(sfObj* obj);
int ev_last0_ls02_2327_draw(sfObj* obj);
int ev_last0_ls02_219_init(sfObj* obj);
int ev_last0_ls02_219_exec();
int ev_last0_ls01_ending_trg();
int ev_last0_ls01_ending_init();
int ev_last0_ls01_ending_exec(sfObj* obj);
int ev_last0_ls01_ending_draw(sfObj* obj);

// 
// Start address: 0x2d29a0
int ev_last0_ls01_218_end(sfObj* obj)
{
	float ppos[4];
	// Line 88, Address: 0x2d29a0, Func Offset: 0
	// Line 89, Address: 0x2d29a4, Func Offset: 0x4
	// Line 88, Address: 0x2d29a8, Func Offset: 0x8
	// Line 89, Address: 0x2d29ac, Func Offset: 0xc
	// Line 88, Address: 0x2d29b0, Func Offset: 0x10
	// Line 90, Address: 0x2d29b4, Func Offset: 0x14
	// Line 89, Address: 0x2d29b8, Func Offset: 0x18
	// Line 90, Address: 0x2d29c4, Func Offset: 0x24
	// Line 91, Address: 0x2d29cc, Func Offset: 0x2c
	// Line 97, Address: 0x2d29d8, Func Offset: 0x38
	// Line 98, Address: 0x2d29e0, Func Offset: 0x40
	// Func End, Address: 0x2d29f0, Func Offset: 0x50
}

// 
// Start address: 0x2d29f0
int ev_last0_ls02_050_end(sfObj* obj)
{
	float ppos[4];
	// Line 121, Address: 0x2d29f0, Func Offset: 0
	// Line 122, Address: 0x2d29f4, Func Offset: 0x4
	// Line 121, Address: 0x2d29f8, Func Offset: 0x8
	// Line 122, Address: 0x2d29fc, Func Offset: 0xc
	// Line 121, Address: 0x2d2a00, Func Offset: 0x10
	// Line 123, Address: 0x2d2a04, Func Offset: 0x14
	// Line 122, Address: 0x2d2a08, Func Offset: 0x18
	// Line 123, Address: 0x2d2a14, Func Offset: 0x24
	// Line 124, Address: 0x2d2a1c, Func Offset: 0x2c
	// Line 128, Address: 0x2d2a30, Func Offset: 0x40
	// Line 129, Address: 0x2d2a38, Func Offset: 0x48
	// Func End, Address: 0x2d2a48, Func Offset: 0x58
}

// 
// Start address: 0x2d2a50
int ev_last0_ls02_050_draw(sfObj* obj)
{
	// Line 134, Address: 0x2d2a50, Func Offset: 0
	// Func End, Address: 0x2d2a58, Func Offset: 0x8
}

// 
// Start address: 0x2d2a60
int ev_last0_ls02_2327_init(sfObj* obj)
{
	// Line 155, Address: 0x2d2a60, Func Offset: 0
	// Line 156, Address: 0x2d2a6c, Func Offset: 0xc
	// Line 158, Address: 0x2d2a74, Func Offset: 0x14
	// Line 159, Address: 0x2d2a7c, Func Offset: 0x1c
	// Func End, Address: 0x2d2a8c, Func Offset: 0x2c
}

// 
// Start address: 0x2d2a90
int ev_last0_ls02_2327_exec(sfObj* obj)
{
	int ret;
	// Line 161, Address: 0x2d2a90, Func Offset: 0
	// Line 164, Address: 0x2d2a98, Func Offset: 0x8
	// Line 166, Address: 0x2d2aa4, Func Offset: 0x14
	// Line 168, Address: 0x2d2aac, Func Offset: 0x1c
	// Line 169, Address: 0x2d2ab4, Func Offset: 0x24
	// Line 171, Address: 0x2d2ab8, Func Offset: 0x28
	// Line 172, Address: 0x2d2abc, Func Offset: 0x2c
	// Func End, Address: 0x2d2acc, Func Offset: 0x3c
}

// 
// Start address: 0x2d2ad0
int ev_last0_ls02_2327_draw(sfObj* obj)
{
	// Line 174, Address: 0x2d2ad0, Func Offset: 0
	// Line 175, Address: 0x2d2adc, Func Offset: 0xc
	// Line 176, Address: 0x2d2ae4, Func Offset: 0x14
	// Line 177, Address: 0x2d2aec, Func Offset: 0x1c
	// Func End, Address: 0x2d2afc, Func Offset: 0x2c
}

// 
// Start address: 0x2d2b00
int ev_last0_ls02_219_init(sfObj* obj)
{
	_EventInst* evinst;
	// Line 265, Address: 0x2d2b00, Func Offset: 0
	// Line 266, Address: 0x2d2b08, Func Offset: 0x8
	// Line 269, Address: 0x2d2b10, Func Offset: 0x10
	// Line 272, Address: 0x2d2b1c, Func Offset: 0x1c
	// Line 274, Address: 0x2d2b24, Func Offset: 0x24
	// Line 276, Address: 0x2d2b2c, Func Offset: 0x2c
	// Line 279, Address: 0x2d2b50, Func Offset: 0x50
	// Line 278, Address: 0x2d2b54, Func Offset: 0x54
	// Line 279, Address: 0x2d2b58, Func Offset: 0x58
	// Func End, Address: 0x2d2b60, Func Offset: 0x60
}

// 
// Start address: 0x2d2b60
int ev_last0_ls02_219_exec()
{
	// Line 283, Address: 0x2d2b60, Func Offset: 0
	// Line 284, Address: 0x2d2b68, Func Offset: 0x8
	// Line 286, Address: 0x2d2b78, Func Offset: 0x18
	// Line 287, Address: 0x2d2b80, Func Offset: 0x20
	// Line 289, Address: 0x2d2b88, Func Offset: 0x28
	// Line 290, Address: 0x2d2b90, Func Offset: 0x30
	// Func End, Address: 0x2d2b9c, Func Offset: 0x3c
}

// 
// Start address: 0x2d2ba0
int ev_last0_ls01_ending_trg()
{
	// Line 309, Address: 0x2d2ba0, Func Offset: 0
	// Line 310, Address: 0x2d2bac, Func Offset: 0xc
	// Func End, Address: 0x2d2bb4, Func Offset: 0x14
}

// 
// Start address: 0x2d2bc0
int ev_last0_ls01_ending_init()
{
	// Line 313, Address: 0x2d2bc0, Func Offset: 0
	// Line 315, Address: 0x2d2bc8, Func Offset: 0x8
	// Line 316, Address: 0x2d2bd0, Func Offset: 0x10
	// Line 317, Address: 0x2d2bd8, Func Offset: 0x18
	// Line 320, Address: 0x2d2be0, Func Offset: 0x20
	// Line 319, Address: 0x2d2be4, Func Offset: 0x24
	// Line 320, Address: 0x2d2be8, Func Offset: 0x28
	// Func End, Address: 0x2d2bf0, Func Offset: 0x30
}

// 
// Start address: 0x2d2bf0
int ev_last0_ls01_ending_exec(sfObj* obj)
{
	// Line 324, Address: 0x2d2bf0, Func Offset: 0
	// Line 326, Address: 0x2d2bf8, Func Offset: 0x8
	// Func End, Address: 0x2d2c00, Func Offset: 0x10
}

// 
// Start address: 0x2d2c00
int ev_last0_ls01_ending_draw(sfObj* obj)
{
	int epi;
	// Line 329, Address: 0x2d2c00, Func Offset: 0
	// Line 332, Address: 0x2d2c0c, Func Offset: 0xc
	// Line 334, Address: 0x2d2c48, Func Offset: 0x48
	// Line 335, Address: 0x2d2c50, Func Offset: 0x50
	// Line 336, Address: 0x2d2c58, Func Offset: 0x58
	// Line 337, Address: 0x2d2c60, Func Offset: 0x60
	// Line 339, Address: 0x2d2c68, Func Offset: 0x68
	// Line 340, Address: 0x2d2c78, Func Offset: 0x78
	// Line 341, Address: 0x2d2c84, Func Offset: 0x84
	// Line 342, Address: 0x2d2c88, Func Offset: 0x88
	// Line 343, Address: 0x2d2c90, Func Offset: 0x90
	// Line 345, Address: 0x2d2c98, Func Offset: 0x98
	// Line 355, Address: 0x2d2ca0, Func Offset: 0xa0
	// Line 359, Address: 0x2d2cc8, Func Offset: 0xc8
	// Line 360, Address: 0x2d2cd0, Func Offset: 0xd0
	// Line 363, Address: 0x2d2cd8, Func Offset: 0xd8
	// Line 364, Address: 0x2d2ce0, Func Offset: 0xe0
	// Line 367, Address: 0x2d2ce8, Func Offset: 0xe8
	// Line 368, Address: 0x2d2cf0, Func Offset: 0xf0
	// Line 371, Address: 0x2d2cf8, Func Offset: 0xf8
	// Line 376, Address: 0x2d2d00, Func Offset: 0x100
	// Line 378, Address: 0x2d2d08, Func Offset: 0x108
	// Line 379, Address: 0x2d2d10, Func Offset: 0x110
	// Line 381, Address: 0x2d2d18, Func Offset: 0x118
	// Line 382, Address: 0x2d2d20, Func Offset: 0x120
	// Line 384, Address: 0x2d2d28, Func Offset: 0x128
	// Line 385, Address: 0x2d2d30, Func Offset: 0x130
	// Line 387, Address: 0x2d2d3c, Func Offset: 0x13c
	// Line 390, Address: 0x2d2d40, Func Offset: 0x140
	// Line 389, Address: 0x2d2d48, Func Offset: 0x148
	// Line 390, Address: 0x2d2d4c, Func Offset: 0x14c
	// Func End, Address: 0x2d2d54, Func Offset: 0x154
}

