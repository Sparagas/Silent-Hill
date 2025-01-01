typedef struct _EventDriver;
typedef struct sfObj;
typedef union _anon0;

typedef int(*type_1)(sfObj*);
typedef int(*type_3)(sfObj*);
typedef void(*type_4)(sfObj*);
typedef int(*type_5)(sfObj*);
typedef int(*type_7)(sfObj*);
typedef int(*type_8)(sfObj*);
typedef void(*type_11)(sfObj*);

typedef unsigned int type_0[4];
typedef _anon0 type_2[256];
typedef unsigned int type_6[3];
typedef _anon0 type_9[4];
typedef unsigned int type_10[7];
typedef unsigned int type_12[5];
typedef unsigned int type_13[4];
typedef short type_14[2];
typedef unsigned short type_15[2];
typedef float type_16[4];
typedef char type_17[4];
typedef unsigned char type_18[4];
typedef float type_19[1];
typedef int type_20[1];
typedef float type_21[4];

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

unsigned int ev_building0_bd18_111_file[4];
_EventDriver ev_building0_bd18_111;
unsigned int ev_building0_bd01_035_file[4];
_EventDriver ev_building0_bd01_035;
unsigned int ev_building0_bd12_036_file[7];
_EventDriver ev_building0_bd12_036;
unsigned int ev_building0_bd15_037_file[5];
_EventDriver ev_building0_bd15_037;
unsigned int ev_building0_bd04_048_file[3];
_EventDriver ev_building0_bd04_048;
float sg_vector_unit_y[4];
_EventDriver ev_building0_bd03_2703;

int ev_building0_bd18_111_end(sfObj* obj);
int ev_building0_bd12_036_end(sfObj* obj);
int ev_building0_bd15_037_end();
int ev_building0_bd04_048_end(sfObj* obj);
int ev_building0_bd03_2703_end(sfObj* obj);

// 
// Start address: 0x1ed82e0
int ev_building0_bd18_111_end(sfObj* obj)
{
	// Line 65, Address: 0x1ed82e0, Func Offset: 0
	// Line 70, Address: 0x1ed82ec, Func Offset: 0xc
	// Line 72, Address: 0x1ed82f4, Func Offset: 0x14
	// Line 73, Address: 0x1ed82fc, Func Offset: 0x1c
	// Line 81, Address: 0x1ed8304, Func Offset: 0x24
	// Line 83, Address: 0x1ed830c, Func Offset: 0x2c
	// Line 84, Address: 0x1ed8314, Func Offset: 0x34
	// Func End, Address: 0x1ed8324, Func Offset: 0x44
}

// 
// Start address: 0x1ed8330
int ev_building0_bd12_036_end(sfObj* obj)
{
	// Line 127, Address: 0x1ed8330, Func Offset: 0
	// Line 128, Address: 0x1ed8334, Func Offset: 0x4
	// Line 127, Address: 0x1ed8338, Func Offset: 0x8
	// Line 128, Address: 0x1ed8344, Func Offset: 0x14
	// Line 138, Address: 0x1ed834c, Func Offset: 0x1c
	// Line 140, Address: 0x1ed8354, Func Offset: 0x24
	// Line 141, Address: 0x1ed835c, Func Offset: 0x2c
	// Func End, Address: 0x1ed836c, Func Offset: 0x3c
}

// 
// Start address: 0x1ed8370
int ev_building0_bd15_037_end()
{
	// Line 172, Address: 0x1ed8370, Func Offset: 0
	// Line 173, Address: 0x1ed8378, Func Offset: 0x8
	// Line 175, Address: 0x1ed8380, Func Offset: 0x10
	// Line 177, Address: 0x1ed8388, Func Offset: 0x18
	// Line 178, Address: 0x1ed8390, Func Offset: 0x20
	// Line 179, Address: 0x1ed839c, Func Offset: 0x2c
	// Line 181, Address: 0x1ed83a4, Func Offset: 0x34
	// Line 180, Address: 0x1ed83a8, Func Offset: 0x38
	// Line 181, Address: 0x1ed83ac, Func Offset: 0x3c
	// Func End, Address: 0x1ed83b4, Func Offset: 0x44
}

// 
// Start address: 0x1ed83c0
int ev_building0_bd04_048_end(sfObj* obj)
{
	float pos[4];
	// Line 205, Address: 0x1ed83c0, Func Offset: 0
	// Line 206, Address: 0x1ed83c4, Func Offset: 0x4
	// Line 205, Address: 0x1ed83c8, Func Offset: 0x8
	// Line 206, Address: 0x1ed83cc, Func Offset: 0xc
	// Line 205, Address: 0x1ed83d0, Func Offset: 0x10
	// Line 208, Address: 0x1ed83d4, Func Offset: 0x14
	// Line 206, Address: 0x1ed83d8, Func Offset: 0x18
	// Line 208, Address: 0x1ed83e4, Func Offset: 0x24
	// Line 209, Address: 0x1ed83ec, Func Offset: 0x2c
	// Line 211, Address: 0x1ed8400, Func Offset: 0x40
	// Line 212, Address: 0x1ed8408, Func Offset: 0x48
	// Func End, Address: 0x1ed8418, Func Offset: 0x58
}

// 
// Start address: 0x1ed8420
int ev_building0_bd03_2703_end(sfObj* obj)
{
	float r[4];
	float h_pos[4];
	float e_pos[4];
	// Line 229, Address: 0x1ed8420, Func Offset: 0
	// Line 230, Address: 0x1ed842c, Func Offset: 0xc
	// Line 231, Address: 0x1ed8434, Func Offset: 0x14
	// Line 237, Address: 0x1ed843c, Func Offset: 0x1c
	// Line 239, Address: 0x1ed8464, Func Offset: 0x44
	// Line 242, Address: 0x1ed846c, Func Offset: 0x4c
	// Line 243, Address: 0x1ed8474, Func Offset: 0x54
	// Line 244, Address: 0x1ed8490, Func Offset: 0x70
	// Line 245, Address: 0x1ed84a8, Func Offset: 0x88
	// Line 246, Address: 0x1ed84b8, Func Offset: 0x98
	// Line 250, Address: 0x1ed84cc, Func Offset: 0xac
	// Line 249, Address: 0x1ed84d0, Func Offset: 0xb0
	// Line 250, Address: 0x1ed84d4, Func Offset: 0xb4
	// Func End, Address: 0x1ed84e0, Func Offset: 0xc0
}

