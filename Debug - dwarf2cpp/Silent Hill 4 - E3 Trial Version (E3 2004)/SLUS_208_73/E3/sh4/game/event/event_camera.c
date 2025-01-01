typedef struct sfObj;
typedef struct _ObjHitCube;
typedef union _anon0;
typedef struct _ObjHitSphere;
typedef struct _EvCameraWork;
typedef struct _ObjHitDoor;
typedef struct _ObjHitData;
typedef enum _enum : unsigned char;
typedef struct EventFlag;
typedef struct _anon1;
typedef struct _ObjHitCylinder;

typedef void(*type_0)(sfObj*);
typedef void(*type_1)(sfObj*);
typedef int(*type_3)();

typedef unsigned char type_2[320];
typedef float type_4[4];
typedef short type_5[2];
typedef unsigned short type_6[2];
typedef char type_7[4];
typedef unsigned char type_8[4];
typedef float type_9[1];
typedef int type_10[1];
typedef _anon0 type_11[23];
typedef _anon0 type_12[256];

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

struct _ObjHitCube
{
	float w;
	float h;
	float d;
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

struct _ObjHitSphere
{
	float r;
};

struct _EvCameraWork
{
	_enum type;
	float cam_pos[4];
	float cam_ang_x;
	float cam_ang_y;
	float watch_pos[4];
	float view_angle;
	int(*trgchk)();
	int flag_check;
	int flag_off_check;
	float out_width;
	_ObjHitData bkhit;
	int existence_step;
};

struct _ObjHitDoor
{
	int num;
};

struct _ObjHitData
{
	float pos[4];
	int type;
	unsigned int attr;
	float rot;
	void* check_func;
	union
	{
		_ObjHitCylinder cl;
		_ObjHitCube cb;
		_ObjHitSphere sp;
		_ObjHitDoor dr;
	};
};

enum _enum : unsigned char
{
	EVCAM_TYPE_ANG,
	EVCAM_TYPE_WATCHPOS
};

struct EventFlag
{
	unsigned char flag[320];
};

struct _anon1
{
	int id;
	float x;
	float y;
	float z;
	float rot;
	int id1;
	int id2;
	int id3;
	int id4;
	_anon0 dmy[23];
};

struct _ObjHitCylinder
{
	float r;
	float h;
};

EventFlag event_flag;

void EventCameraRestoreHitdata(sfObj* obj);
void EventCameraChangeHitdata(sfObj* obj);
void EventCameraExistenceSet(sfObj* obj);
void EventCameraExec(sfObj* obj);
void EventCameraConstruct(sfObj* obj);
void EventCameraDestruct();
void EventCameraDraw();

// 
// Start address: 0x2dde60
void EventCameraRestoreHitdata(sfObj* obj)
{
	// Line 93, Address: 0x2dde60, Func Offset: 0
	// Func End, Address: 0x2dde74, Func Offset: 0x14
}

// 
// Start address: 0x2dde80
void EventCameraChangeHitdata(sfObj* obj)
{
	_EvCameraWork* cam;
	_ObjHitData* hitdt;
	// Line 104, Address: 0x2dde80, Func Offset: 0
	// Line 108, Address: 0x2dde84, Func Offset: 0x4
	// Line 107, Address: 0x2dde88, Func Offset: 0x8
	// Line 108, Address: 0x2dde8c, Func Offset: 0xc
	// Line 109, Address: 0x2ddeb4, Func Offset: 0x34
	// Line 111, Address: 0x2ddeb8, Func Offset: 0x38
	// Line 112, Address: 0x2ddec4, Func Offset: 0x44
	// Line 113, Address: 0x2ddecc, Func Offset: 0x4c
	// Line 115, Address: 0x2dded0, Func Offset: 0x50
	// Line 116, Address: 0x2ddeec, Func Offset: 0x6c
	// Line 117, Address: 0x2ddefc, Func Offset: 0x7c
	// Line 118, Address: 0x2ddf04, Func Offset: 0x84
	// Line 120, Address: 0x2ddf08, Func Offset: 0x88
	// Line 123, Address: 0x2ddf18, Func Offset: 0x98
	// Func End, Address: 0x2ddf20, Func Offset: 0xa0
}

// 
// Start address: 0x2ddf20
void EventCameraExistenceSet(sfObj* obj)
{
	_EvCameraWork* cam;
	int chk;
	// Line 132, Address: 0x2ddf20, Func Offset: 0
	// Line 133, Address: 0x2ddf34, Func Offset: 0x14
	// Line 136, Address: 0x2ddf38, Func Offset: 0x18
	// Line 142, Address: 0x2ddf40, Func Offset: 0x20
	// Line 138, Address: 0x2ddf44, Func Offset: 0x24
	// Line 142, Address: 0x2ddf48, Func Offset: 0x28
	// Line 147, Address: 0x2ddf64, Func Offset: 0x44
	// Line 148, Address: 0x2ddf6c, Func Offset: 0x4c
	// Line 149, Address: 0x2ddfa4, Func Offset: 0x84
	// Line 155, Address: 0x2ddfa8, Func Offset: 0x88
	// Line 156, Address: 0x2ddfb4, Func Offset: 0x94
	// Line 157, Address: 0x2ddfbc, Func Offset: 0x9c
	// Line 158, Address: 0x2ddff4, Func Offset: 0xd4
	// Line 164, Address: 0x2ddff8, Func Offset: 0xd8
	// Line 165, Address: 0x2de004, Func Offset: 0xe4
	// Line 166, Address: 0x2de00c, Func Offset: 0xec
	// Line 167, Address: 0x2de01c, Func Offset: 0xfc
	// Line 173, Address: 0x2de020, Func Offset: 0x100
	// Line 174, Address: 0x2de028, Func Offset: 0x108
	// Line 175, Address: 0x2de038, Func Offset: 0x118
	// Line 177, Address: 0x2de03c, Func Offset: 0x11c
	// Line 179, Address: 0x2de040, Func Offset: 0x120
	// Line 180, Address: 0x2de048, Func Offset: 0x128
	// Line 183, Address: 0x2de050, Func Offset: 0x130
	// Line 186, Address: 0x2de054, Func Offset: 0x134
	// Line 183, Address: 0x2de058, Func Offset: 0x138
	// Line 186, Address: 0x2de05c, Func Offset: 0x13c
	// Line 188, Address: 0x2de064, Func Offset: 0x144
	// Line 191, Address: 0x2de06c, Func Offset: 0x14c
	// Line 194, Address: 0x2de070, Func Offset: 0x150
	// Line 195, Address: 0x2de080, Func Offset: 0x160
	// Line 197, Address: 0x2de084, Func Offset: 0x164
	// Line 199, Address: 0x2de088, Func Offset: 0x168
	// Line 200, Address: 0x2de090, Func Offset: 0x170
	// Line 201, Address: 0x2de098, Func Offset: 0x178
	// Line 207, Address: 0x2de0a0, Func Offset: 0x180
	// Line 209, Address: 0x2de0ac, Func Offset: 0x18c
	// Line 211, Address: 0x2de0b4, Func Offset: 0x194
	// Line 213, Address: 0x2de0b8, Func Offset: 0x198
	// Line 216, Address: 0x2de0c0, Func Offset: 0x1a0
	// Func End, Address: 0x2de0d8, Func Offset: 0x1b8
}

// 
// Start address: 0x2de0e0
void EventCameraExec(sfObj* obj)
{
	_EvCameraWork* cam;
	float view_angle;
	// Line 225, Address: 0x2de0e0, Func Offset: 0
	// Line 226, Address: 0x2de0f0, Func Offset: 0x10
	// Line 230, Address: 0x2de0f4, Func Offset: 0x14
	// Line 232, Address: 0x2de0fc, Func Offset: 0x1c
	// Line 237, Address: 0x2de114, Func Offset: 0x34
	// Line 241, Address: 0x2de130, Func Offset: 0x50
	// Line 243, Address: 0x2de150, Func Offset: 0x70
	// Line 244, Address: 0x2de164, Func Offset: 0x84
	// Line 245, Address: 0x2de16c, Func Offset: 0x8c
	// Line 246, Address: 0x2de170, Func Offset: 0x90
	// Line 250, Address: 0x2de180, Func Offset: 0xa0
	// Func End, Address: 0x2de194, Func Offset: 0xb4
}

// 
// Start address: 0x2de1a0
void EventCameraConstruct(sfObj* obj)
{
	_anon1* info;
	float cpos[4];
	float lpos[4];
	_EvCameraWork* cam;
	// Line 259, Address: 0x2de1a0, Func Offset: 0
	// Line 262, Address: 0x2de1b0, Func Offset: 0x10
	// Line 263, Address: 0x2de1b8, Func Offset: 0x18
	// Line 264, Address: 0x2de1c4, Func Offset: 0x24
	// Line 263, Address: 0x2de1c8, Func Offset: 0x28
	// Line 262, Address: 0x2de1cc, Func Offset: 0x2c
	// Line 267, Address: 0x2de1d0, Func Offset: 0x30
	// Line 263, Address: 0x2de1d8, Func Offset: 0x38
	// Line 264, Address: 0x2de1dc, Func Offset: 0x3c
	// Line 263, Address: 0x2de1e0, Func Offset: 0x40
	// Line 264, Address: 0x2de1e4, Func Offset: 0x44
	// Line 263, Address: 0x2de1e8, Func Offset: 0x48
	// Line 264, Address: 0x2de1fc, Func Offset: 0x5c
	// Line 267, Address: 0x2de218, Func Offset: 0x78
	// Line 268, Address: 0x2de224, Func Offset: 0x84
	// Line 271, Address: 0x2de228, Func Offset: 0x88
	// Line 270, Address: 0x2de22c, Func Offset: 0x8c
	// Line 271, Address: 0x2de234, Func Offset: 0x94
	// Line 273, Address: 0x2de254, Func Offset: 0xb4
	// Line 274, Address: 0x2de26c, Func Offset: 0xcc
	// Line 275, Address: 0x2de274, Func Offset: 0xd4
	// Line 276, Address: 0x2de27c, Func Offset: 0xdc
	// Line 277, Address: 0x2de280, Func Offset: 0xe0
	// Line 279, Address: 0x2de28c, Func Offset: 0xec
	// Line 281, Address: 0x2de290, Func Offset: 0xf0
	// Line 288, Address: 0x2de29c, Func Offset: 0xfc
	// Line 283, Address: 0x2de2a0, Func Offset: 0x100
	// Line 284, Address: 0x2de2bc, Func Offset: 0x11c
	// Line 285, Address: 0x2de2c4, Func Offset: 0x124
	// Line 286, Address: 0x2de2cc, Func Offset: 0x12c
	// Line 288, Address: 0x2de2d8, Func Offset: 0x138
	// Line 290, Address: 0x2de2e4, Func Offset: 0x144
	// Line 292, Address: 0x2de2f0, Func Offset: 0x150
	// Line 293, Address: 0x2de304, Func Offset: 0x164
	// Line 296, Address: 0x2de308, Func Offset: 0x168
	// Line 297, Address: 0x2de318, Func Offset: 0x178
	// Func End, Address: 0x2de32c, Func Offset: 0x18c
}

// 
// Start address: 0x2de330
void EventCameraDestruct()
{
	// Line 307, Address: 0x2de330, Func Offset: 0
	// Func End, Address: 0x2de338, Func Offset: 0x8
}

// 
// Start address: 0x2de340
void EventCameraDraw()
{
	// Line 328, Address: 0x2de340, Func Offset: 0
	// Func End, Address: 0x2de348, Func Offset: 0x8
}

