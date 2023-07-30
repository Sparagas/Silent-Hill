typedef struct EnemyEffectDemoGhostWork;
typedef struct sfObj;
typedef struct EnemyGhostStainWork;
typedef struct EnemyEffectStickyWork;
typedef union _anon0;
typedef struct EnemyEffectStickyBone;
typedef struct EnemyGhostStainParameter;

typedef void(*type_2)(sfObj*);
typedef void(*type_3)(sfObj*);
typedef void(*type_4)(sfObj*);
typedef void(*type_5)(sfObj*);
typedef void(*type_6)(sfObj*);

typedef _anon0 type_0[256];
typedef EnemyEffectStickyBone type_1[32];
typedef float type_7[4];
typedef float type_8[3];
typedef short type_9[2];
typedef unsigned short type_10[2];
typedef char type_11[4];
typedef unsigned char type_12[4];
typedef float type_13[1];
typedef int type_14[1];

struct EnemyEffectDemoGhostWork
{
	float pos[4];
	float normal[4];
	int start_frame;
	int sticky_appear;
	int erase_frame;
	int chara_index;
	EnemyGhostStainWork* stain_work;
	EnemyEffectStickyWork* sticky_work;
	int sticky_on;
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

struct EnemyGhostStainWork
{
};

struct EnemyEffectStickyWork
{
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

struct EnemyEffectStickyBone
{
	int bone;
	float pos[3];
	float y_deviation;
	int direction;
};

struct EnemyGhostStainParameter
{
	float size_w;
	float size_h;
	float appear_time;
	float spot_appear_wait_time;
	float spot_appear_time;
	float disappear_wait_time;
	float disappear_time;
};

EnemyEffectStickyBone bone_data[32];
EnemyGhostStainParameter demo_ghost_stain_parameter;
void(*EnemyEffectDemoGhostDraw)(sfObj*);
void(*EnemyEffectDemoGhostDestruct)(sfObj*);
void(*EnemyEffectDemoGhostHandle)(sfObj*);

void EnemyEffectDemoGhostConstruct(float* pos, float* normal, int start_frame, int sticky_appear, int erase_frame, int chara_index);
void EnemyEffectDemoGhostDestructDirect();
void EnemyEffectDemoGhostDestruct(sfObj* obj);
void EnemyEffectDemoGhostHandle(sfObj* obj);
void EnemyEffectDemoGhostDraw(sfObj* obj);

// 
// Start address: 0x1ee10e0
void EnemyEffectDemoGhostConstruct(float* pos, float* normal, int start_frame, int sticky_appear, int erase_frame, int chara_index)
{
	sfObj* obj;
	EnemyEffectDemoGhostWork* ew;
	// Line 96, Address: 0x1ee10e0, Func Offset: 0
	// Line 101, Address: 0x1ee111c, Func Offset: 0x3c
	// Line 102, Address: 0x1ee1128, Func Offset: 0x48
	// Line 105, Address: 0x1ee1130, Func Offset: 0x50
	// Line 106, Address: 0x1ee113c, Func Offset: 0x5c
	// Line 107, Address: 0x1ee1150, Func Offset: 0x70
	// Line 108, Address: 0x1ee1158, Func Offset: 0x78
	// Line 110, Address: 0x1ee1160, Func Offset: 0x80
	// Line 111, Address: 0x1ee1170, Func Offset: 0x90
	// Line 112, Address: 0x1ee1180, Func Offset: 0xa0
	// Line 113, Address: 0x1ee118c, Func Offset: 0xac
	// Line 115, Address: 0x1ee1190, Func Offset: 0xb0
	// Line 113, Address: 0x1ee1194, Func Offset: 0xb4
	// Line 115, Address: 0x1ee1198, Func Offset: 0xb8
	// Line 118, Address: 0x1ee11a0, Func Offset: 0xc0
	// Line 115, Address: 0x1ee11a4, Func Offset: 0xc4
	// Line 118, Address: 0x1ee11a8, Func Offset: 0xc8
	// Line 120, Address: 0x1ee11c0, Func Offset: 0xe0
	// Line 121, Address: 0x1ee11c8, Func Offset: 0xe8
	// Line 122, Address: 0x1ee11d0, Func Offset: 0xf0
	// Line 123, Address: 0x1ee11d4, Func Offset: 0xf4
	// Line 124, Address: 0x1ee11d8, Func Offset: 0xf8
	// Line 125, Address: 0x1ee11dc, Func Offset: 0xfc
	// Line 126, Address: 0x1ee11e0, Func Offset: 0x100
	// Line 127, Address: 0x1ee11e4, Func Offset: 0x104
	// Func End, Address: 0x1ee1214, Func Offset: 0x134
}

// 
// Start address: 0x1ee1220
void EnemyEffectDemoGhostDestructDirect()
{
	sfObj* obj;
	// Line 132, Address: 0x1ee1220, Func Offset: 0
	// Line 134, Address: 0x1ee1224, Func Offset: 0x4
	// Line 132, Address: 0x1ee1228, Func Offset: 0x8
	// Line 134, Address: 0x1ee122c, Func Offset: 0xc
	// Line 135, Address: 0x1ee1238, Func Offset: 0x18
	// Line 136, Address: 0x1ee1240, Func Offset: 0x20
	// Line 138, Address: 0x1ee1248, Func Offset: 0x28
	// Func End, Address: 0x1ee1254, Func Offset: 0x34
}

// 
// Start address: 0x1ee1260
void EnemyEffectDemoGhostDestruct(sfObj* obj)
{
	EnemyEffectDemoGhostWork* ew;
	// Line 144, Address: 0x1ee1260, Func Offset: 0
	// Line 146, Address: 0x1ee126c, Func Offset: 0xc
	// Line 147, Address: 0x1ee1274, Func Offset: 0x14
	// Line 148, Address: 0x1ee127c, Func Offset: 0x1c
	// Line 149, Address: 0x1ee1284, Func Offset: 0x24
	// Line 148, Address: 0x1ee1288, Func Offset: 0x28
	// Line 150, Address: 0x1ee128c, Func Offset: 0x2c
	// Line 151, Address: 0x1ee1294, Func Offset: 0x34
	// Line 152, Address: 0x1ee129c, Func Offset: 0x3c
	// Line 153, Address: 0x1ee12a0, Func Offset: 0x40
	// Func End, Address: 0x1ee12b0, Func Offset: 0x50
}

// 
// Start address: 0x1ee12b0
void EnemyEffectDemoGhostHandle(sfObj* obj)
{
	EnemyEffectDemoGhostWork* ew;
	int frame;
	sfObj* cobj;
	// Line 159, Address: 0x1ee12b0, Func Offset: 0
	// Line 162, Address: 0x1ee12c0, Func Offset: 0x10
	// Line 163, Address: 0x1ee12d0, Func Offset: 0x20
	// Line 165, Address: 0x1ee12d8, Func Offset: 0x28
	// Line 166, Address: 0x1ee12e4, Func Offset: 0x34
	// Line 165, Address: 0x1ee12ec, Func Offset: 0x3c
	// Line 166, Address: 0x1ee12f0, Func Offset: 0x40
	// Line 167, Address: 0x1ee1314, Func Offset: 0x64
	// Line 168, Address: 0x1ee1318, Func Offset: 0x68
	// Line 169, Address: 0x1ee1328, Func Offset: 0x78
	// Line 171, Address: 0x1ee1344, Func Offset: 0x94
	// Line 172, Address: 0x1ee134c, Func Offset: 0x9c
	// Line 174, Address: 0x1ee1350, Func Offset: 0xa0
	// Line 176, Address: 0x1ee1358, Func Offset: 0xa8
	// Line 178, Address: 0x1ee1368, Func Offset: 0xb8
	// Line 179, Address: 0x1ee1370, Func Offset: 0xc0
	// Line 180, Address: 0x1ee137c, Func Offset: 0xcc
	// Line 181, Address: 0x1ee1388, Func Offset: 0xd8
	// Line 182, Address: 0x1ee138c, Func Offset: 0xdc
	// Line 181, Address: 0x1ee1390, Func Offset: 0xe0
	// Line 182, Address: 0x1ee1394, Func Offset: 0xe4
	// Line 184, Address: 0x1ee13a0, Func Offset: 0xf0
	// Line 186, Address: 0x1ee13a4, Func Offset: 0xf4
	// Line 187, Address: 0x1ee13ac, Func Offset: 0xfc
	// Line 188, Address: 0x1ee13b0, Func Offset: 0x100
	// Line 189, Address: 0x1ee13c8, Func Offset: 0x118
	// Line 190, Address: 0x1ee13d4, Func Offset: 0x124
	// Line 191, Address: 0x1ee13dc, Func Offset: 0x12c
	// Line 192, Address: 0x1ee13e0, Func Offset: 0x130
	// Line 196, Address: 0x1ee13e8, Func Offset: 0x138
	// Line 197, Address: 0x1ee13f4, Func Offset: 0x144
	// Line 198, Address: 0x1ee13fc, Func Offset: 0x14c
	// Line 199, Address: 0x1ee1400, Func Offset: 0x150
	// Line 200, Address: 0x1ee1408, Func Offset: 0x158
	// Func End, Address: 0x1ee141c, Func Offset: 0x16c
}

// 
// Start address: 0x1ee1420
void EnemyEffectDemoGhostDraw(sfObj* obj)
{
	EnemyEffectDemoGhostWork* ew;
	// Line 206, Address: 0x1ee1420, Func Offset: 0
	// Line 208, Address: 0x1ee142c, Func Offset: 0xc
	// Line 209, Address: 0x1ee1434, Func Offset: 0x14
	// Line 210, Address: 0x1ee1438, Func Offset: 0x18
	// Line 211, Address: 0x1ee1444, Func Offset: 0x24
	// Line 212, Address: 0x1ee144c, Func Offset: 0x2c
	// Line 213, Address: 0x1ee1450, Func Offset: 0x30
	// Line 214, Address: 0x1ee1458, Func Offset: 0x38
	// Func End, Address: 0x1ee1468, Func Offset: 0x48
}

