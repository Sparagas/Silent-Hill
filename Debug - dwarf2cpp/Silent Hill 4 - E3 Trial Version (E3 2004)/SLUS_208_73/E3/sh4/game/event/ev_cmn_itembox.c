typedef struct _anon0;
typedef struct EventFlag;
typedef struct _EventInst;
typedef struct sfObj;
typedef union _anon1;
typedef struct _EventDriver;

typedef int(*type_1)(sfObj*);
typedef int(*type_2)(sfObj*);
typedef void(*type_4)(sfObj*);
typedef int(*type_5)(sfObj*);
typedef int(*type_6)(sfObj*);
typedef int(*type_7)(sfObj*);
typedef int(*type_8)(sfObj*);
typedef int(*type_10)(sfObj*);
typedef void(*type_11)(sfObj*);
typedef void(*type_13)();

typedef unsigned char type_0[320];
typedef _anon1 type_3[256];
typedef unsigned int type_9[1];
typedef _anon1 type_12[4];
typedef short type_14[2];
typedef unsigned short type_15[2];
typedef char type_16[4];
typedef unsigned char type_17[4];
typedef float type_18[1];
typedef int type_19[1];

struct _anon0
{
	unsigned char step;
	unsigned char step_s;
	unsigned char is_pausefunc_end;
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

struct sfObj
{
	_anon1 fwork[256];
	_anon1* work;
	void(*func)(sfObj*);
	_anon1* work_pt0;
	_anon1* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon1* sys_work;
	_anon1* scene_work;
	_anon1* event_work;
	_anon1* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

union _anon1
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
	_anon1 val[4];
};

unsigned int ev_cmn_itembox_file[1];
_EventDriver ev_itembox;
_anon0 ev_box_work;
EventFlag event_flag;
void(*pausefunc_itembox_exec)();

void work_init(_anon0* wk);
void pausefunc_itembox_init();
void pausefunc_itembox_exec();
int ev_cmn_itembox_trgchk_072();
int ev_cmn_itembox_init(sfObj* obj);
int ev_cmn_itembox_exec(sfObj* obj);
int ev_cmn_itembox_draw();
int ev_cmn_itembox_end();

// 
// Start address: 0x276000
void work_init(_anon0* wk)
{
	// Line 108, Address: 0x276000, Func Offset: 0
	// Func End, Address: 0x27600c, Func Offset: 0xc
}

// 
// Start address: 0x276010
void pausefunc_itembox_init()
{
	// Line 116, Address: 0x276010, Func Offset: 0
	// Line 119, Address: 0x276014, Func Offset: 0x4
	// Line 116, Address: 0x276018, Func Offset: 0x8
	// Line 119, Address: 0x27601c, Func Offset: 0xc
	// Line 120, Address: 0x276024, Func Offset: 0x14
	// Line 121, Address: 0x27602c, Func Offset: 0x1c
	// Func End, Address: 0x276038, Func Offset: 0x28
}

// 
// Start address: 0x276040
void pausefunc_itembox_exec()
{
	_anon0* wk;
	// Line 125, Address: 0x276040, Func Offset: 0
	// Line 126, Address: 0x27604c, Func Offset: 0xc
	// Line 129, Address: 0x276050, Func Offset: 0x10
	// Line 131, Address: 0x276058, Func Offset: 0x18
	// Line 134, Address: 0x276098, Func Offset: 0x58
	// Line 135, Address: 0x2760c0, Func Offset: 0x80
	// Line 136, Address: 0x2760c8, Func Offset: 0x88
	// Line 139, Address: 0x2760d0, Func Offset: 0x90
	// Line 140, Address: 0x2760d8, Func Offset: 0x98
	// Line 143, Address: 0x2760e0, Func Offset: 0xa0
	// Line 146, Address: 0x2760e8, Func Offset: 0xa8
	// Line 148, Address: 0x2760f0, Func Offset: 0xb0
	// Line 152, Address: 0x276100, Func Offset: 0xc0
	// Line 154, Address: 0x276110, Func Offset: 0xd0
	// Line 156, Address: 0x276118, Func Offset: 0xd8
	// Line 158, Address: 0x276124, Func Offset: 0xe4
	// Line 160, Address: 0x27612c, Func Offset: 0xec
	// Line 161, Address: 0x276130, Func Offset: 0xf0
	// Line 163, Address: 0x276140, Func Offset: 0x100
	// Line 165, Address: 0x276148, Func Offset: 0x108
	// Line 167, Address: 0x276150, Func Offset: 0x110
	// Line 171, Address: 0x276158, Func Offset: 0x118
	// Line 172, Address: 0x27617c, Func Offset: 0x13c
	// Line 173, Address: 0x276188, Func Offset: 0x148
	// Line 176, Address: 0x276190, Func Offset: 0x150
	// Line 178, Address: 0x2761a0, Func Offset: 0x160
	// Line 180, Address: 0x2761a8, Func Offset: 0x168
	// Line 185, Address: 0x2761b0, Func Offset: 0x170
	// Line 186, Address: 0x2761b8, Func Offset: 0x178
	// Line 190, Address: 0x2761c0, Func Offset: 0x180
	// Line 191, Address: 0x2761c8, Func Offset: 0x188
	// Line 192, Address: 0x2761d0, Func Offset: 0x190
	// Line 193, Address: 0x2761d8, Func Offset: 0x198
	// Func End, Address: 0x2761e8, Func Offset: 0x1a8
}

// 
// Start address: 0x2761f0
int ev_cmn_itembox_trgchk_072()
{
	// Line 204, Address: 0x2761f0, Func Offset: 0
	// Line 205, Address: 0x2761fc, Func Offset: 0xc
	// Func End, Address: 0x276204, Func Offset: 0x14
}

// 
// Start address: 0x276210
int ev_cmn_itembox_init(sfObj* obj)
{
	_EventInst* evinst;
	// Line 208, Address: 0x276210, Func Offset: 0
	// Line 211, Address: 0x27621c, Func Offset: 0xc
	// Line 214, Address: 0x276224, Func Offset: 0x14
	// Line 220, Address: 0x27622c, Func Offset: 0x1c
	// Line 221, Address: 0x276238, Func Offset: 0x28
	// Line 222, Address: 0x276240, Func Offset: 0x30
	// Line 223, Address: 0x276248, Func Offset: 0x38
	// Line 224, Address: 0x276254, Func Offset: 0x44
	// Line 228, Address: 0x276260, Func Offset: 0x50
	// Line 231, Address: 0x276268, Func Offset: 0x58
	// Line 234, Address: 0x276284, Func Offset: 0x74
	// Line 233, Address: 0x276288, Func Offset: 0x78
	// Line 234, Address: 0x27628c, Func Offset: 0x7c
	// Func End, Address: 0x276298, Func Offset: 0x88
}

// 
// Start address: 0x2762a0
int ev_cmn_itembox_exec(sfObj* obj)
{
	int rtv;
	_anon0* wk;
	// Line 237, Address: 0x2762a0, Func Offset: 0
	// Line 292, Address: 0x2762a4, Func Offset: 0x4
	// Line 237, Address: 0x2762a8, Func Offset: 0x8
	// Line 294, Address: 0x2762ac, Func Offset: 0xc
	// Line 237, Address: 0x2762b0, Func Offset: 0x10
	// Line 292, Address: 0x2762b4, Func Offset: 0x14
	// Line 294, Address: 0x2762b8, Func Offset: 0x18
	// Line 295, Address: 0x2762d4, Func Offset: 0x34
	// Line 296, Address: 0x2762d8, Func Offset: 0x38
	// Line 299, Address: 0x2762dc, Func Offset: 0x3c
	// Line 300, Address: 0x2762e4, Func Offset: 0x44
	// Line 301, Address: 0x2762f0, Func Offset: 0x50
	// Line 305, Address: 0x2762f8, Func Offset: 0x58
	// Line 307, Address: 0x276304, Func Offset: 0x64
	// Line 309, Address: 0x276318, Func Offset: 0x78
	// Line 312, Address: 0x27631c, Func Offset: 0x7c
	// Line 315, Address: 0x276320, Func Offset: 0x80
	// Line 316, Address: 0x276324, Func Offset: 0x84
	// Func End, Address: 0x276334, Func Offset: 0x94
}

// 
// Start address: 0x276340
int ev_cmn_itembox_draw()
{
	// Line 327, Address: 0x276340, Func Offset: 0
	// Func End, Address: 0x276348, Func Offset: 0x8
}

// 
// Start address: 0x276350
int ev_cmn_itembox_end()
{
	// Line 336, Address: 0x276350, Func Offset: 0
	// Line 338, Address: 0x276358, Func Offset: 0x8
	// Line 340, Address: 0x276360, Func Offset: 0x10
	// Line 343, Address: 0x276368, Func Offset: 0x18
	// Line 346, Address: 0x276370, Func Offset: 0x20
	// Line 349, Address: 0x276380, Func Offset: 0x30
	// Line 352, Address: 0x276388, Func Offset: 0x38
	// Line 355, Address: 0x276390, Func Offset: 0x40
	// Line 354, Address: 0x276394, Func Offset: 0x44
	// Line 355, Address: 0x276398, Func Offset: 0x48
	// Func End, Address: 0x2763a0, Func Offset: 0x50
}

