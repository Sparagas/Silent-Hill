typedef struct sfObj;
typedef union _anon0;
typedef struct sfOffsetAABB;
typedef struct sfCldPart;
typedef struct sgBone;
typedef union sfCldBody;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _EventInst;
typedef struct _anon6;
typedef struct _EventDriver;

typedef int(*type_0)(sfObj*);
typedef int(*type_1)(sfObj*);
typedef int(*type_2)(sfObj*);
typedef int(*type_4)(sfObj*);
typedef void(*type_5)(sfObj*);
typedef void(*type_8)(sfObj*);
typedef int(*type_18)(sfObj*);
typedef int(*type_20)(sfObj*);
typedef int(*type_22)(sfObj*);

typedef _anon0 type_3[256];
typedef _anon0 type_6[4];
typedef unsigned char type_7[3];
typedef float type_9[4];
typedef float type_10[4][4];
typedef float type_11[4];
typedef short type_12[2];
typedef unsigned short type_13[2];
typedef char type_14[4];
typedef unsigned char type_15[4];
typedef float type_16[1];
typedef int type_17[1];
typedef float type_19[4];
typedef float type_21[4][24];

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

struct sfOffsetAABB
{
	_anon4 aabb;
	float offset[4];
};

struct sfCldPart
{
	sfCldBody world_hit;
	sfCldBody local_hit;
	unsigned char hit_type;
	unsigned char pad[3];
	int hit_kind;
	sgBone* parent;
	void* data;
	void* parent_cld;
};

struct sgBone
{
	float rot[4];
	float trans[4];
	float scale[4];
	float abs_rot[4];
	float abs_trans[4];
	sgBone* parent;
	sgBone* child_list;
	sgBone* child_sibling;
	unsigned short last;
	unsigned short flag;
	float partly_blend_rate;
};

union sfCldBody
{
	_anon5 obb;
	_anon4 aabb;
	sfOffsetAABB offset_aabb;
	_anon2 line;
	_anon3 sphere;
};

struct _anon1
{
	int n_polygons;
	int polygons_offset;
};

struct _anon2
{
	float start[4];
	float end[4];
};

struct _anon3
{
	float center[4];
	float radius;
};

struct _anon4
{
	float bmin[4];
	float bmax[4];
};

struct _anon5
{
	float mat[4][4];
	float half_w[4];
};

struct _EventInst
{
	_EventDriver evdrv;
	unsigned int attr;
	int(*drawaf)(sfObj*);
	int(*endexitf)(sfObj*);
};

struct _anon6
{
	sfCldPart cld_part;
	sgBone bone;
	_anon1 pool;
	float polygons[4][24];
	int id;
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

float pre_view_angle;
_anon6 demo_chara_hit;
float sg_vector_unit_y[4];
float sg_matrix_unit[4][4];

void SetDemoDefViewAngle();
float GetDemoDefViewAngle();
void DemoAutoFade();
int ev_demo_trgchk();
int ev_demo_init(sfObj* obj);
int ev_demo_exec(sfObj* obj);
int ev_demo_exec_nfade(sfObj* obj, float in, float out);
int ev_demo_draw();
int ev_demo_end();
void ev_demo_set_hit(float* pos, float scale, float rot);
void ev_demo_remove_hit();
int ev_movie_init(sfObj* obj);
int ev_movie_exec(sfObj* obj);
int ev_movie_draw(sfObj* obj);
int ev_movie_end();

// 
// Start address: 0x290e90
void SetDemoDefViewAngle()
{
	float angle;
	// Line 28, Address: 0x290e90, Func Offset: 0
	// Line 30, Address: 0x290e98, Func Offset: 0x8
	// Line 31, Address: 0x290ea0, Func Offset: 0x10
	// Line 32, Address: 0x290ea8, Func Offset: 0x18
	// Func End, Address: 0x290eb4, Func Offset: 0x24
}

// 
// Start address: 0x290ec0
float GetDemoDefViewAngle()
{
	// Line 36, Address: 0x290ec0, Func Offset: 0
	// Line 37, Address: 0x290ec4, Func Offset: 0x4
	// Func End, Address: 0x290ecc, Func Offset: 0xc
}

// 
// Start address: 0x290ed0
void DemoAutoFade()
{
	// Line 40, Address: 0x290ed0, Func Offset: 0
	// Line 41, Address: 0x290ed8, Func Offset: 0x8
	// Line 42, Address: 0x290ee8, Func Offset: 0x18
	// Line 43, Address: 0x290f0c, Func Offset: 0x3c
	// Line 44, Address: 0x290f10, Func Offset: 0x40
	// Line 45, Address: 0x290f28, Func Offset: 0x58
	// Line 46, Address: 0x290f4c, Func Offset: 0x7c
	// Line 47, Address: 0x290f50, Func Offset: 0x80
	// Func End, Address: 0x290f5c, Func Offset: 0x8c
}

// 
// Start address: 0x290f60
int ev_demo_trgchk()
{
	// Line 52, Address: 0x290f60, Func Offset: 0
	// Func End, Address: 0x290f68, Func Offset: 0x8
}

// 
// Start address: 0x290f70
int ev_demo_init(sfObj* obj)
{
	_EventInst* evinst;
	int demo_num;
	// Line 56, Address: 0x290f70, Func Offset: 0
	// Line 57, Address: 0x290f78, Func Offset: 0x8
	// Line 58, Address: 0x290f84, Func Offset: 0x14
	// Line 61, Address: 0x290f94, Func Offset: 0x24
	// Line 58, Address: 0x290f98, Func Offset: 0x28
	// Line 61, Address: 0x290f9c, Func Offset: 0x2c
	// Line 64, Address: 0x290fa4, Func Offset: 0x34
	// Line 73, Address: 0x290fac, Func Offset: 0x3c
	// Line 76, Address: 0x290fb4, Func Offset: 0x44
	// Line 75, Address: 0x290fb8, Func Offset: 0x48
	// Line 76, Address: 0x290fbc, Func Offset: 0x4c
	// Func End, Address: 0x290fc8, Func Offset: 0x58
}

// 
// Start address: 0x290fd0
int ev_demo_exec(sfObj* obj)
{
	int rtv;
	// Line 79, Address: 0x290fd0, Func Offset: 0
	// Line 80, Address: 0x290fe0, Func Offset: 0x10
	// Line 82, Address: 0x290fe8, Func Offset: 0x18
	// Line 84, Address: 0x291008, Func Offset: 0x38
	// Line 85, Address: 0x291010, Func Offset: 0x40
	// Line 88, Address: 0x29101c, Func Offset: 0x4c
	// Line 89, Address: 0x291024, Func Offset: 0x54
	// Line 90, Address: 0x29102c, Func Offset: 0x5c
	// Line 91, Address: 0x291030, Func Offset: 0x60
	// Line 92, Address: 0x291038, Func Offset: 0x68
	// Line 98, Address: 0x291040, Func Offset: 0x70
	// Line 99, Address: 0x291044, Func Offset: 0x74
	// Func End, Address: 0x291058, Func Offset: 0x88
}

// 
// Start address: 0x291060
int ev_demo_exec_nfade(sfObj* obj, float in, float out)
{
	int rtv;
	// Line 102, Address: 0x291060, Func Offset: 0
	// Line 103, Address: 0x291080, Func Offset: 0x20
	// Line 105, Address: 0x291088, Func Offset: 0x28
	// Line 107, Address: 0x2910a8, Func Offset: 0x48
	// Line 108, Address: 0x2910b0, Func Offset: 0x50
	// Line 109, Address: 0x2910bc, Func Offset: 0x5c
	// Line 110, Address: 0x2910c4, Func Offset: 0x64
	// Line 111, Address: 0x2910cc, Func Offset: 0x6c
	// Line 112, Address: 0x2910d0, Func Offset: 0x70
	// Line 113, Address: 0x2910d8, Func Offset: 0x78
	// Line 114, Address: 0x2910e8, Func Offset: 0x88
	// Line 116, Address: 0x291130, Func Offset: 0xd0
	// Line 117, Address: 0x291140, Func Offset: 0xe0
	// Line 118, Address: 0x291148, Func Offset: 0xe8
	// Line 125, Address: 0x291190, Func Offset: 0x130
	// Line 126, Address: 0x291194, Func Offset: 0x134
	// Func End, Address: 0x2911b0, Func Offset: 0x150
}

// 
// Start address: 0x2911b0
int ev_demo_draw()
{
	// Line 132, Address: 0x2911b0, Func Offset: 0
	// Func End, Address: 0x2911b8, Func Offset: 0x8
}

// 
// Start address: 0x2911c0
int ev_demo_end()
{
	// Line 135, Address: 0x2911c0, Func Offset: 0
	// Line 137, Address: 0x2911c8, Func Offset: 0x8
	// Line 139, Address: 0x2911d0, Func Offset: 0x10
	// Line 149, Address: 0x2911d8, Func Offset: 0x18
	// Line 148, Address: 0x2911dc, Func Offset: 0x1c
	// Line 149, Address: 0x2911e0, Func Offset: 0x20
	// Func End, Address: 0x2911e8, Func Offset: 0x28
}

// 
// Start address: 0x2911f0
void ev_demo_set_hit(float* pos, float scale, float rot)
{
	sfCldPart* cld_part;
	sfCldBody* cld_body;
	_anon1* pool;
	sgBone* bone;
	float q[4];
	float obb_w[4];
	// Line 169, Address: 0x2911f0, Func Offset: 0
	// Line 182, Address: 0x2911f4, Func Offset: 0x4
	// Line 169, Address: 0x2911f8, Func Offset: 0x8
	// Line 182, Address: 0x2911fc, Func Offset: 0xc
	// Line 169, Address: 0x291200, Func Offset: 0x10
	// Line 181, Address: 0x291204, Func Offset: 0x14
	// Line 169, Address: 0x291208, Func Offset: 0x18
	// Line 182, Address: 0x29120c, Func Offset: 0x1c
	// Line 169, Address: 0x291210, Func Offset: 0x20
	// Line 179, Address: 0x291214, Func Offset: 0x24
	// Line 180, Address: 0x291218, Func Offset: 0x28
	// Line 179, Address: 0x291220, Func Offset: 0x30
	// Line 180, Address: 0x291224, Func Offset: 0x34
	// Line 183, Address: 0x291228, Func Offset: 0x38
	// Line 169, Address: 0x29122c, Func Offset: 0x3c
	// Line 181, Address: 0x291230, Func Offset: 0x40
	// Line 182, Address: 0x29123c, Func Offset: 0x4c
	// Line 183, Address: 0x291244, Func Offset: 0x54
	// Line 184, Address: 0x29124c, Func Offset: 0x5c
	// Line 185, Address: 0x291258, Func Offset: 0x68
	// Line 186, Address: 0x291268, Func Offset: 0x78
	// Line 187, Address: 0x291280, Func Offset: 0x90
	// Line 188, Address: 0x2912a8, Func Offset: 0xb8
	// Line 194, Address: 0x2912bc, Func Offset: 0xcc
	// Line 190, Address: 0x2912c0, Func Offset: 0xd0
	// Line 191, Address: 0x2912c4, Func Offset: 0xd4
	// Line 190, Address: 0x2912c8, Func Offset: 0xd8
	// Line 191, Address: 0x2912cc, Func Offset: 0xdc
	// Line 194, Address: 0x2912dc, Func Offset: 0xec
	// Line 196, Address: 0x2912e4, Func Offset: 0xf4
	// Line 197, Address: 0x2912f8, Func Offset: 0x108
	// Line 199, Address: 0x291304, Func Offset: 0x114
	// Line 202, Address: 0x29130c, Func Offset: 0x11c
	// Line 203, Address: 0x291324, Func Offset: 0x134
	// Line 205, Address: 0x29132c, Func Offset: 0x13c
	// Line 207, Address: 0x291344, Func Offset: 0x154
	// Func End, Address: 0x291360, Func Offset: 0x170
}

// 
// Start address: 0x291360
void ev_demo_remove_hit()
{
	// Line 211, Address: 0x291360, Func Offset: 0
	// Func End, Address: 0x29136c, Func Offset: 0xc
}

// 
// Start address: 0x291370
int ev_movie_init(sfObj* obj)
{
	_EventInst* evinst;
	// Line 232, Address: 0x291370, Func Offset: 0
	// Line 233, Address: 0x291378, Func Offset: 0x8
	// Line 235, Address: 0x291380, Func Offset: 0x10
	// Line 236, Address: 0x29138c, Func Offset: 0x1c
	// Line 237, Address: 0x291394, Func Offset: 0x24
	// Line 238, Address: 0x29139c, Func Offset: 0x2c
	// Line 239, Address: 0x2913a4, Func Offset: 0x34
	// Line 242, Address: 0x2913ac, Func Offset: 0x3c
	// Line 241, Address: 0x2913b0, Func Offset: 0x40
	// Line 242, Address: 0x2913b4, Func Offset: 0x44
	// Func End, Address: 0x2913bc, Func Offset: 0x4c
}

// 
// Start address: 0x2913c0
int ev_movie_exec(sfObj* obj)
{
	// Line 247, Address: 0x2913c0, Func Offset: 0
	// Line 250, Address: 0x2913c8, Func Offset: 0x8
	// Func End, Address: 0x2913d0, Func Offset: 0x10
}

// 
// Start address: 0x2913d0
int ev_movie_draw(sfObj* obj)
{
	_EventInst* evinst;
	int movie_id;
	// Line 253, Address: 0x2913d0, Func Offset: 0
	// Line 254, Address: 0x2913e0, Func Offset: 0x10
	// Line 255, Address: 0x2913e8, Func Offset: 0x18
	// Line 257, Address: 0x2913fc, Func Offset: 0x2c
	// Line 259, Address: 0x291404, Func Offset: 0x34
	// Line 260, Address: 0x29142c, Func Offset: 0x5c
	// Line 261, Address: 0x291430, Func Offset: 0x60
	// Line 262, Address: 0x291438, Func Offset: 0x68
	// Line 263, Address: 0x291440, Func Offset: 0x70
	// Line 265, Address: 0x291448, Func Offset: 0x78
	// Line 266, Address: 0x291458, Func Offset: 0x88
	// Line 267, Address: 0x291460, Func Offset: 0x90
	// Line 272, Address: 0x29146c, Func Offset: 0x9c
	// Line 275, Address: 0x291470, Func Offset: 0xa0
	// Line 274, Address: 0x291478, Func Offset: 0xa8
	// Line 275, Address: 0x29147c, Func Offset: 0xac
	// Func End, Address: 0x291488, Func Offset: 0xb8
}

// 
// Start address: 0x291490
int ev_movie_end()
{
	// Line 278, Address: 0x291490, Func Offset: 0
	// Line 279, Address: 0x291498, Func Offset: 0x8
	// Line 280, Address: 0x2914a0, Func Offset: 0x10
	// Line 281, Address: 0x2914a8, Func Offset: 0x18
	// Line 282, Address: 0x2914cc, Func Offset: 0x3c
	// Line 284, Address: 0x2914d4, Func Offset: 0x44
	// Line 283, Address: 0x2914d8, Func Offset: 0x48
	// Line 284, Address: 0x2914dc, Func Offset: 0x4c
	// Func End, Address: 0x2914e4, Func Offset: 0x54
}

