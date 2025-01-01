typedef struct sfObj;
typedef struct DemoEventTable;
typedef enum sgLightType : unsigned char;
typedef union _anon0;
typedef struct _anon1;

typedef void(*type_1)(sfObj*);
typedef void(*type_3)(sfObj*);
typedef void(*type_4)(sfObj*);
typedef void(*type_5)(sfObj*);
typedef void(*type_7)(sfObj*);
typedef void(*type_13)(sfObj*);

typedef float type_0[4];
typedef _anon0 type_2[256];
typedef short type_6[2];
typedef unsigned short type_8[2];
typedef char type_9[4];
typedef unsigned char type_10[4];
typedef float type_11[1];
typedef int type_12[1];

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

struct DemoEventTable
{
	int demo_id;
	void(*init)(sfObj*);
	void(*exec)(sfObj*);
	void(*end)(sfObj*);
	void(*draw)(sfObj*);
};

enum sgLightType : unsigned char
{
	SG_LIGHT_NONE,
	SG_LIGHT_AMBIENT,
	SG_LIGHT_DIRECTIONAL,
	SG_LIGHT_POINT,
	SG_LIGHT_SPOT,
	SG_LIGHT_REFRECT_DIRECTIONAL,
	SG_LIGHT_REFRECT_POINT
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

struct _anon1
{
	float color[4];
	float direction[4];
	float position[4];
	sgLightType type;
	float start;
	float end;
	float spot_cone_angle;
	float falloff_angle;
	int flag;
};

DemoEventTable demo_event_fr009;
DemoEventTable demo_event_fr012;
int demo017_effect;
DemoEventTable demo_event_fr017;
DemoEventTable demo_event_fr018;

void DemoEventInitFR017();
void DemoEventExecFR017();
void DemoEventEndFR017(sfObj* obj);
void DemoEventInitFR018();
void DemoEventExecFR018(sfObj* obj);
void DemoEventEndFR018();

// 
// Start address: 0x274a30
void DemoEventInitFR017()
{
	// Line 84, Address: 0x274a30, Func Offset: 0
	// Line 85, Address: 0x274a38, Func Offset: 0x8
	// Line 88, Address: 0x274a40, Func Offset: 0x10
	// Line 97, Address: 0x274a48, Func Offset: 0x18
	// Line 98, Address: 0x274a50, Func Offset: 0x20
	// Func End, Address: 0x274a5c, Func Offset: 0x2c
}

// 
// Start address: 0x274a60
void DemoEventExecFR017()
{
	int i;
	// Line 101, Address: 0x274a60, Func Offset: 0
	// Line 102, Address: 0x274a64, Func Offset: 0x4
	// Line 101, Address: 0x274a68, Func Offset: 0x8
	// Line 102, Address: 0x274a70, Func Offset: 0x10
	// Line 105, Address: 0x274a7c, Func Offset: 0x1c
	// Line 106, Address: 0x274a90, Func Offset: 0x30
	// Line 107, Address: 0x274aac, Func Offset: 0x4c
	// Line 108, Address: 0x274abc, Func Offset: 0x5c
	// Line 110, Address: 0x274ac4, Func Offset: 0x64
	// Line 111, Address: 0x274adc, Func Offset: 0x7c
	// Line 113, Address: 0x274ae0, Func Offset: 0x80
	// Line 114, Address: 0x274ae8, Func Offset: 0x88
	// Line 115, Address: 0x274af0, Func Offset: 0x90
	// Line 116, Address: 0x274af8, Func Offset: 0x98
	// Line 117, Address: 0x274b08, Func Offset: 0xa8
	// Line 119, Address: 0x274b10, Func Offset: 0xb0
	// Line 120, Address: 0x274b20, Func Offset: 0xc0
	// Line 122, Address: 0x274b28, Func Offset: 0xc8
	// Line 124, Address: 0x274b30, Func Offset: 0xd0
	// Func End, Address: 0x274b40, Func Offset: 0xe0
}

// 
// Start address: 0x274b40
void DemoEventEndFR017(sfObj* obj)
{
	// Line 127, Address: 0x274b40, Func Offset: 0
	// Line 129, Address: 0x274b50, Func Offset: 0x10
	// Line 131, Address: 0x274b58, Func Offset: 0x18
	// Line 132, Address: 0x274b60, Func Offset: 0x20
	// Func End, Address: 0x274b70, Func Offset: 0x30
}

// 
// Start address: 0x274b70
void DemoEventInitFR018()
{
	// Line 153, Address: 0x274b70, Func Offset: 0
	// Func End, Address: 0x274b78, Func Offset: 0x8
}

// 
// Start address: 0x274b80
void DemoEventExecFR018(sfObj* obj)
{
	float color[4];
	float pos[4];
	unsigned int id;
	_anon1* wk;
	// Line 157, Address: 0x274b80, Func Offset: 0
	// Line 158, Address: 0x274b90, Func Offset: 0x10
	// Line 159, Address: 0x274b9c, Func Offset: 0x1c
	// Line 160, Address: 0x274ba8, Func Offset: 0x28
	// Line 159, Address: 0x274bac, Func Offset: 0x2c
	// Line 164, Address: 0x274bb0, Func Offset: 0x30
	// Line 160, Address: 0x274bb4, Func Offset: 0x34
	// Line 159, Address: 0x274bb8, Func Offset: 0x38
	// Line 160, Address: 0x274bbc, Func Offset: 0x3c
	// Line 164, Address: 0x274bc4, Func Offset: 0x44
	// Line 165, Address: 0x274bd0, Func Offset: 0x50
	// Line 166, Address: 0x274bd4, Func Offset: 0x54
	// Line 167, Address: 0x274bdc, Func Offset: 0x5c
	// Line 168, Address: 0x274be4, Func Offset: 0x64
	// Line 169, Address: 0x274bf0, Func Offset: 0x70
	// Line 170, Address: 0x274bfc, Func Offset: 0x7c
	// Line 171, Address: 0x274c14, Func Offset: 0x94
	// Line 172, Address: 0x274c20, Func Offset: 0xa0
	// Line 173, Address: 0x274c28, Func Offset: 0xa8
	// Line 175, Address: 0x274c30, Func Offset: 0xb0
	// Line 177, Address: 0x274c50, Func Offset: 0xd0
	// Line 178, Address: 0x274c5c, Func Offset: 0xdc
	// Line 179, Address: 0x274c60, Func Offset: 0xe0
	// Func End, Address: 0x274c74, Func Offset: 0xf4
}

// 
// Start address: 0x274c80
void DemoEventEndFR018()
{
	// Line 183, Address: 0x274c80, Func Offset: 0
	// Func End, Address: 0x274c88, Func Offset: 0x8
}

