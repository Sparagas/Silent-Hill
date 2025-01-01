typedef struct sgBone;
typedef struct sfObj;
typedef struct HyenaTonguePoint;
typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef union _anon6;

typedef void(*type_0)(sfObj*);
typedef void(*type_15)(sfObj*);

typedef float type_1[4][3];
typedef float type_2[8];
typedef float type_3[4];
typedef float type_4[8];
typedef float type_5[4];
typedef _anon4 type_6[4];
typedef short type_7[2];
typedef _anon6 type_8[0];
typedef unsigned short type_9[2];
typedef char type_10[4];
typedef unsigned char type_11[4];
typedef float type_12[1];
typedef int type_13[1];
typedef _anon5 type_14[256];

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

struct sfObj
{
	_anon5 fwork[256];
	_anon5* work;
	void(*func)(sfObj*);
	_anon5* work_pt0;
	_anon5* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon5* sys_work;
	_anon5* scene_work;
	_anon5* event_work;
	_anon5* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct HyenaTonguePoint
{
	int stat;
	int old_stat;
	float v[4];
	float old_v[4];
	float mv[4];
	float weight;
	float length;
	float bend_limit;
	sgBone* bone;
	float bk_quat[4];
};

struct _anon0
{
	_anon6 vertex[0];
};

struct _anon1
{
	float abcd[4];
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
	unsigned char next_offset;
	unsigned char flags;
	short id;
};

union _anon5
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

union _anon6
{
	float node[4];
	_anon4 data[4];
};

float sg_vector_unit_y[4];
float sg_vector_unit_z[4];

void calc_hitcircle_sphere_plane(_anon3* circle, _anon3* sphere, _anon1* plane, float* cl);
void calc_dir_vector_zx_bendlimit(float* dir, float* v0, float* v1, float bend_limit);
int is_this_angle_over(float* form_rad, float* v0, float* v1, float limit_rad);
_anon0* set_polygon_vertex3(float v[4]);
HyenaTonguePoint* EnemyHyenaTongueGetWork(int num);
void EnemyHyenaTongueDeleteWork(HyenaTonguePoint* ton);
void EnemyHyenaTongueInit(sfObj* obj, HyenaTonguePoint* ton, int num, float rot_y);
void EnemyHyenaTongueBendlimitSet(HyenaTonguePoint* ton, int num, float* bend);
void EnemyHyenaTongueBendlimitSetDefault(sfObj* obj, HyenaTonguePoint* ton, int num);
void EnemyHyenaTongueBendlimitSetSoft(sfObj* obj, HyenaTonguePoint* ton, int num);
int EnemyHyenaTongueUpdataBendLimitCheckOver2(HyenaTonguePoint* tp, float* bf0, float* bf1);
void EnemyHyenaTongueUpdataBendLimit(HyenaTonguePoint* tp, float* bf0, float* bf1);
void EnemyHyenaTongueHitCheck(HyenaTonguePoint* tp, int nest);
void EnemyHyenaTongueRecoveryRot(HyenaTonguePoint* ton, int num);
void EnemyHyenaTongueUpdate(sfObj* obj, HyenaTonguePoint* ton, int num);
void EnemyHyenaTongueStraight(HyenaTonguePoint* ton, int num, float rot_x, float rot_y);
void EnemyHyenaTongueReflectionRot(sfObj* obj, HyenaTonguePoint* ton, int num);

// 
// Start address: 0x2124d0
void calc_hitcircle_sphere_plane(_anon3* circle, _anon3* sphere, _anon1* plane, float* cl)
{
	_anon2 line;
	float pos[4];
	float nv[4];
	float a;
	float b;
	float c;
	// Line 61, Address: 0x2124d0, Func Offset: 0
	// Line 70, Address: 0x2124d8, Func Offset: 0x8
	// Line 61, Address: 0x2124dc, Func Offset: 0xc
	// Line 67, Address: 0x2124e8, Func Offset: 0x18
	// Line 70, Address: 0x212504, Func Offset: 0x34
	// Line 71, Address: 0x21251c, Func Offset: 0x4c
	// Line 72, Address: 0x212540, Func Offset: 0x70
	// Line 73, Address: 0x21256c, Func Offset: 0x9c
	// Line 74, Address: 0x212588, Func Offset: 0xb8
	// Line 75, Address: 0x2125b4, Func Offset: 0xe4
	// Line 78, Address: 0x2125d0, Func Offset: 0x100
	// Line 83, Address: 0x2125e8, Func Offset: 0x118
	// Line 90, Address: 0x2125f0, Func Offset: 0x120
	// Line 92, Address: 0x2125f8, Func Offset: 0x128
	// Line 93, Address: 0x212600, Func Offset: 0x130
	// Line 91, Address: 0x212604, Func Offset: 0x134
	// Line 90, Address: 0x21260c, Func Offset: 0x13c
	// Line 93, Address: 0x212610, Func Offset: 0x140
	// Line 92, Address: 0x212614, Func Offset: 0x144
	// Line 91, Address: 0x212618, Func Offset: 0x148
	// Line 93, Address: 0x21261c, Func Offset: 0x14c
	// Line 95, Address: 0x212640, Func Offset: 0x170
	// Func End, Address: 0x212654, Func Offset: 0x184
}

// 
// Start address: 0x212660
void calc_dir_vector_zx_bendlimit(float* dir, float* v0, float* v1, float bend_limit)
{
	float w0[4];
	float w1[4];
	float rad0;
	float rad1;
	float rad2;
	char lr;
	float cra;
	float crb;
	float crc;
	float cr;
	// Line 103, Address: 0x212660, Func Offset: 0
	// Line 109, Address: 0x212668, Func Offset: 0x8
	// Line 103, Address: 0x21266c, Func Offset: 0xc
	// Line 109, Address: 0x212694, Func Offset: 0x34
	// Line 110, Address: 0x2126b8, Func Offset: 0x58
	// Line 111, Address: 0x2126e0, Func Offset: 0x80
	// Line 115, Address: 0x2126f0, Func Offset: 0x90
	// Line 116, Address: 0x212718, Func Offset: 0xb8
	// Line 125, Address: 0x212744, Func Offset: 0xe4
	// Line 126, Address: 0x212754, Func Offset: 0xf4
	// Line 130, Address: 0x21275c, Func Offset: 0xfc
	// Line 125, Address: 0x212760, Func Offset: 0x100
	// Line 126, Address: 0x212768, Func Offset: 0x108
	// Line 127, Address: 0x212770, Func Offset: 0x110
	// Line 128, Address: 0x212774, Func Offset: 0x114
	// Line 127, Address: 0x212778, Func Offset: 0x118
	// Line 128, Address: 0x21277c, Func Offset: 0x11c
	// Line 130, Address: 0x212780, Func Offset: 0x120
	// Line 132, Address: 0x21278c, Func Offset: 0x12c
	// Line 134, Address: 0x212798, Func Offset: 0x138
	// Line 135, Address: 0x21279c, Func Offset: 0x13c
	// Line 139, Address: 0x2127a0, Func Offset: 0x140
	// Line 142, Address: 0x2127b4, Func Offset: 0x154
	// Line 143, Address: 0x2127bc, Func Offset: 0x15c
	// Line 147, Address: 0x2127c8, Func Offset: 0x168
	// Line 151, Address: 0x2127d0, Func Offset: 0x170
	// Line 152, Address: 0x2127e4, Func Offset: 0x184
	// Func End, Address: 0x212808, Func Offset: 0x1a8
}

// 
// Start address: 0x212810
int is_this_angle_over(float* form_rad, float* v0, float* v1, float limit_rad)
{
	float vec_rad;
	// Line 159, Address: 0x212810, Func Offset: 0
	// Line 170, Address: 0x212824, Func Offset: 0x14
	// Line 171, Address: 0x212838, Func Offset: 0x28
	// Line 173, Address: 0x212840, Func Offset: 0x30
	// Line 174, Address: 0x212844, Func Offset: 0x34
	// Line 176, Address: 0x212848, Func Offset: 0x38
	// Line 178, Address: 0x212854, Func Offset: 0x44
	// Line 179, Address: 0x212860, Func Offset: 0x50
	// Line 181, Address: 0x212868, Func Offset: 0x58
	// Line 182, Address: 0x212870, Func Offset: 0x60
	// Func End, Address: 0x212888, Func Offset: 0x78
}

// 
// Start address: 0x212890
_anon0* set_polygon_vertex3(float v[4])
{
	_anon0* poly;
	// Line 191, Address: 0x212890, Func Offset: 0
	// Line 194, Address: 0x212898, Func Offset: 0x8
	// Func End, Address: 0x2128a0, Func Offset: 0x10
}

// 
// Start address: 0x2128a0
HyenaTonguePoint* EnemyHyenaTongueGetWork(int num)
{
	// Line 202, Address: 0x2128a0, Func Offset: 0
	// Func End, Address: 0x2128b0, Func Offset: 0x10
}

// 
// Start address: 0x2128b0
void EnemyHyenaTongueDeleteWork(HyenaTonguePoint* ton)
{
	// Line 214, Address: 0x2128b0, Func Offset: 0
	// Func End, Address: 0x2128b8, Func Offset: 0x8
}

// 
// Start address: 0x2128c0
void EnemyHyenaTongueInit(sfObj* obj, HyenaTonguePoint* ton, int num, float rot_y)
{
	int i;
	float rev_rot[4];
	float rev_quat[4];
	// Line 222, Address: 0x2128c0, Func Offset: 0
	// Line 228, Address: 0x2128fc, Func Offset: 0x3c
	// Line 222, Address: 0x212900, Func Offset: 0x40
	// Line 228, Address: 0x212904, Func Offset: 0x44
	// Line 222, Address: 0x212908, Func Offset: 0x48
	// Line 228, Address: 0x21290c, Func Offset: 0x4c
	// Line 231, Address: 0x212938, Func Offset: 0x78
	// Line 228, Address: 0x212944, Func Offset: 0x84
	// Line 229, Address: 0x212948, Func Offset: 0x88
	// Line 230, Address: 0x212950, Func Offset: 0x90
	// Line 231, Address: 0x212954, Func Offset: 0x94
	// Line 232, Address: 0x212960, Func Offset: 0xa0
	// Line 233, Address: 0x21296c, Func Offset: 0xac
	// Line 234, Address: 0x212984, Func Offset: 0xc4
	// Line 235, Address: 0x212998, Func Offset: 0xd8
	// Line 236, Address: 0x2129a0, Func Offset: 0xe0
	// Line 238, Address: 0x2129ac, Func Offset: 0xec
	// Line 242, Address: 0x2129b0, Func Offset: 0xf0
	// Line 239, Address: 0x2129b4, Func Offset: 0xf4
	// Line 242, Address: 0x2129b8, Func Offset: 0xf8
	// Line 239, Address: 0x2129bc, Func Offset: 0xfc
	// Line 240, Address: 0x2129c0, Func Offset: 0x100
	// Line 242, Address: 0x2129c4, Func Offset: 0x104
	// Line 243, Address: 0x2129cc, Func Offset: 0x10c
	// Line 244, Address: 0x2129dc, Func Offset: 0x11c
	// Line 246, Address: 0x2129f0, Func Offset: 0x130
	// Line 247, Address: 0x212a08, Func Offset: 0x148
	// Line 248, Address: 0x212a1c, Func Offset: 0x15c
	// Line 247, Address: 0x212a24, Func Offset: 0x164
	// Line 248, Address: 0x212a28, Func Offset: 0x168
	// Line 247, Address: 0x212a2c, Func Offset: 0x16c
	// Line 248, Address: 0x212a30, Func Offset: 0x170
	// Line 250, Address: 0x212a38, Func Offset: 0x178
	// Line 251, Address: 0x212a48, Func Offset: 0x188
	// Func End, Address: 0x212a84, Func Offset: 0x1c4
}

// 
// Start address: 0x212a90
void EnemyHyenaTongueBendlimitSet(HyenaTonguePoint* ton, int num, float* bend)
{
	int i;
	// Line 259, Address: 0x212a90, Func Offset: 0
	// Line 260, Address: 0x212ab0, Func Offset: 0x20
	// Line 261, Address: 0x212b28, Func Offset: 0x98
	// Line 260, Address: 0x212b2c, Func Offset: 0x9c
	// Line 261, Address: 0x212b30, Func Offset: 0xa0
	// Line 260, Address: 0x212b34, Func Offset: 0xa4
	// Line 261, Address: 0x212b3c, Func Offset: 0xac
	// Line 262, Address: 0x212b48, Func Offset: 0xb8
	// Func End, Address: 0x212b50, Func Offset: 0xc0
}

// 
// Start address: 0x212b50
void EnemyHyenaTongueBendlimitSetDefault(sfObj* obj, HyenaTonguePoint* ton, int num)
{
	float bend_limit[8];
	// Line 268, Address: 0x212b50, Func Offset: 0
	// Line 269, Address: 0x212b54, Func Offset: 0x4
	// Line 268, Address: 0x212b58, Func Offset: 0x8
	// Line 269, Address: 0x212b5c, Func Offset: 0xc
	// Line 290, Address: 0x212b70, Func Offset: 0x20
	// Line 291, Address: 0x212b78, Func Offset: 0x28
	// Func End, Address: 0x212b84, Func Offset: 0x34
}

// 
// Start address: 0x212b90
void EnemyHyenaTongueBendlimitSetSoft(sfObj* obj, HyenaTonguePoint* ton, int num)
{
	float bend_limit[8];
	// Line 297, Address: 0x212b90, Func Offset: 0
	// Line 298, Address: 0x212b94, Func Offset: 0x4
	// Line 297, Address: 0x212b98, Func Offset: 0x8
	// Line 298, Address: 0x212b9c, Func Offset: 0xc
	// Line 308, Address: 0x212bb0, Func Offset: 0x20
	// Line 309, Address: 0x212bb8, Func Offset: 0x28
	// Func End, Address: 0x212bc4, Func Offset: 0x34
}

// 
// Start address: 0x212bd0
int EnemyHyenaTongueUpdataBendLimitCheckOver2(HyenaTonguePoint* tp, float* bf0, float* bf1)
{
	float v0[4];
	float v1[4];
	int ok;
	// Line 349, Address: 0x212bd0, Func Offset: 0
	// Line 354, Address: 0x212bdc, Func Offset: 0xc
	// Line 355, Address: 0x212bec, Func Offset: 0x1c
	// Line 358, Address: 0x212bf0, Func Offset: 0x20
	// Line 360, Address: 0x212bf8, Func Offset: 0x28
	// Line 361, Address: 0x212c0c, Func Offset: 0x3c
	// Line 362, Address: 0x212c28, Func Offset: 0x58
	// Line 363, Address: 0x212c44, Func Offset: 0x74
	// Line 365, Address: 0x212c4c, Func Offset: 0x7c
	// Line 366, Address: 0x212c50, Func Offset: 0x80
	// Line 367, Address: 0x212c58, Func Offset: 0x88
	// Func End, Address: 0x212c64, Func Offset: 0x94
}

// 
// Start address: 0x212c70
void EnemyHyenaTongueUpdataBendLimit(HyenaTonguePoint* tp, float* bf0, float* bf1)
{
	float v0[4];
	float v1[4];
	float dir[4];
	float nv[4];
	float quat[4];
	float pv[4][3];
	_anon1 plane;
	// Line 399, Address: 0x212c70, Func Offset: 0
	// Line 408, Address: 0x212c78, Func Offset: 0x8
	// Line 399, Address: 0x212c7c, Func Offset: 0xc
	// Line 408, Address: 0x212c84, Func Offset: 0x14
	// Line 409, Address: 0x212c98, Func Offset: 0x28
	// Line 410, Address: 0x212cb4, Func Offset: 0x44
	// Line 411, Address: 0x212cbc, Func Offset: 0x4c
	// Line 412, Address: 0x212ccc, Func Offset: 0x5c
	// Line 411, Address: 0x212cd0, Func Offset: 0x60
	// Line 412, Address: 0x212cd4, Func Offset: 0x64
	// Line 413, Address: 0x212cd8, Func Offset: 0x68
	// Line 411, Address: 0x212cdc, Func Offset: 0x6c
	// Line 412, Address: 0x212ce8, Func Offset: 0x78
	// Line 413, Address: 0x212cfc, Func Offset: 0x8c
	// Line 416, Address: 0x212d10, Func Offset: 0xa0
	// Line 417, Address: 0x212d1c, Func Offset: 0xac
	// Line 416, Address: 0x212d20, Func Offset: 0xb0
	// Line 417, Address: 0x212d24, Func Offset: 0xb4
	// Line 416, Address: 0x212d28, Func Offset: 0xb8
	// Line 417, Address: 0x212d38, Func Offset: 0xc8
	// Line 418, Address: 0x212d5c, Func Offset: 0xec
	// Line 421, Address: 0x212d70, Func Offset: 0x100
	// Line 422, Address: 0x212d80, Func Offset: 0x110
	// Line 425, Address: 0x212d90, Func Offset: 0x120
	// Line 426, Address: 0x212da4, Func Offset: 0x134
	// Line 430, Address: 0x212dcc, Func Offset: 0x15c
	// Line 432, Address: 0x212de0, Func Offset: 0x170
	// Line 435, Address: 0x212df0, Func Offset: 0x180
	// Line 436, Address: 0x212e10, Func Offset: 0x1a0
	// Func End, Address: 0x212e20, Func Offset: 0x1b0
}

// 
// Start address: 0x212e20
void EnemyHyenaTongueHitCheck(HyenaTonguePoint* tp, int nest)
{
	_anon2 line;
	_anon0* poly;
	_anon0* near_poly;
	float cl[4];
	float near_cl[4];
	float dist;
	float near_dist;
	int hit_num;
	_anon1 plane;
	_anon3 circle;
	_anon3 sphere;
	float nv[4];
	float quat[4];
	float v0[4];
	float v1[4];
	float dir[4];
	float a;
	float b;
	float c;
	float rad;
	// Line 556, Address: 0x212e20, Func Offset: 0
	// Line 580, Address: 0x212e44, Func Offset: 0x24
	// Line 587, Address: 0x212e4c, Func Offset: 0x2c
	// Line 588, Address: 0x212e58, Func Offset: 0x38
	// Line 587, Address: 0x212e5c, Func Offset: 0x3c
	// Line 588, Address: 0x212e6c, Func Offset: 0x4c
	// Line 589, Address: 0x212e84, Func Offset: 0x64
	// Line 590, Address: 0x212e98, Func Offset: 0x78
	// Line 591, Address: 0x212ea4, Func Offset: 0x84
	// Line 590, Address: 0x212ea8, Func Offset: 0x88
	// Line 592, Address: 0x212eac, Func Offset: 0x8c
	// Line 594, Address: 0x212eb8, Func Offset: 0x98
	// Line 595, Address: 0x212ec8, Func Offset: 0xa8
	// Line 594, Address: 0x212ecc, Func Offset: 0xac
	// Line 595, Address: 0x212ed0, Func Offset: 0xb0
	// Line 596, Address: 0x212ed4, Func Offset: 0xb4
	// Line 597, Address: 0x212ed8, Func Offset: 0xb8
	// Line 599, Address: 0x212ee0, Func Offset: 0xc0
	// Line 597, Address: 0x212ee4, Func Offset: 0xc4
	// Line 599, Address: 0x212ef4, Func Offset: 0xd4
	// Line 603, Address: 0x212efc, Func Offset: 0xdc
	// Line 599, Address: 0x212f04, Func Offset: 0xe4
	// Line 603, Address: 0x212f08, Func Offset: 0xe8
	// Line 604, Address: 0x212f0c, Func Offset: 0xec
	// Line 605, Address: 0x212f14, Func Offset: 0xf4
	// Line 606, Address: 0x212f20, Func Offset: 0x100
	// Line 607, Address: 0x212f30, Func Offset: 0x110
	// Line 609, Address: 0x212f38, Func Offset: 0x118
	// Line 611, Address: 0x212f40, Func Offset: 0x120
	// Line 612, Address: 0x212f4c, Func Offset: 0x12c
	// Line 616, Address: 0x212f50, Func Offset: 0x130
	// Line 617, Address: 0x212f60, Func Offset: 0x140
	// Line 620, Address: 0x212f6c, Func Offset: 0x14c
	// Line 621, Address: 0x212f78, Func Offset: 0x158
	// Line 624, Address: 0x212f84, Func Offset: 0x164
	// Line 626, Address: 0x212fa0, Func Offset: 0x180
	// Line 625, Address: 0x212fa8, Func Offset: 0x188
	// Line 627, Address: 0x212fb0, Func Offset: 0x190
	// Line 626, Address: 0x212fb8, Func Offset: 0x198
	// Line 627, Address: 0x212fbc, Func Offset: 0x19c
	// Line 625, Address: 0x212fc0, Func Offset: 0x1a0
	// Line 629, Address: 0x212fc4, Func Offset: 0x1a4
	// Line 631, Address: 0x212fd8, Func Offset: 0x1b8
	// Line 634, Address: 0x212fe4, Func Offset: 0x1c4
	// Line 632, Address: 0x212fe8, Func Offset: 0x1c8
	// Line 633, Address: 0x212fec, Func Offset: 0x1cc
	// Line 634, Address: 0x212ff0, Func Offset: 0x1d0
	// Line 637, Address: 0x213008, Func Offset: 0x1e8
	// Line 640, Address: 0x213018, Func Offset: 0x1f8
	// Line 645, Address: 0x213028, Func Offset: 0x208
	// Line 648, Address: 0x213034, Func Offset: 0x214
	// Line 645, Address: 0x213038, Func Offset: 0x218
	// Line 648, Address: 0x21303c, Func Offset: 0x21c
	// Line 645, Address: 0x213040, Func Offset: 0x220
	// Line 646, Address: 0x21304c, Func Offset: 0x22c
	// Line 648, Address: 0x213050, Func Offset: 0x230
	// Line 649, Address: 0x213058, Func Offset: 0x238
	// Line 650, Address: 0x213064, Func Offset: 0x244
	// Line 649, Address: 0x213068, Func Offset: 0x248
	// Line 650, Address: 0x21306c, Func Offset: 0x24c
	// Line 649, Address: 0x213070, Func Offset: 0x250
	// Line 650, Address: 0x213080, Func Offset: 0x260
	// Line 652, Address: 0x2130a4, Func Offset: 0x284
	// Line 655, Address: 0x2130b8, Func Offset: 0x298
	// Line 657, Address: 0x2130cc, Func Offset: 0x2ac
	// Line 658, Address: 0x2130dc, Func Offset: 0x2bc
	// Line 662, Address: 0x2130ec, Func Offset: 0x2cc
	// Line 663, Address: 0x21310c, Func Offset: 0x2ec
	// Line 665, Address: 0x213110, Func Offset: 0x2f0
	// Line 663, Address: 0x213118, Func Offset: 0x2f8
	// Line 665, Address: 0x21311c, Func Offset: 0x2fc
	// Line 667, Address: 0x21314c, Func Offset: 0x32c
	// Line 668, Address: 0x213180, Func Offset: 0x360
	// Line 670, Address: 0x2131b8, Func Offset: 0x398
	// Line 671, Address: 0x2131e4, Func Offset: 0x3c4
	// Line 674, Address: 0x21320c, Func Offset: 0x3ec
	// Line 676, Address: 0x213220, Func Offset: 0x400
	// Line 679, Address: 0x213230, Func Offset: 0x410
	// Line 680, Address: 0x213234, Func Offset: 0x414
	// Line 679, Address: 0x213238, Func Offset: 0x418
	// Line 680, Address: 0x21323c, Func Offset: 0x41c
	// Line 679, Address: 0x213244, Func Offset: 0x424
	// Line 680, Address: 0x21324c, Func Offset: 0x42c
	// Line 681, Address: 0x213260, Func Offset: 0x440
	// Line 682, Address: 0x21326c, Func Offset: 0x44c
	// Line 686, Address: 0x213278, Func Offset: 0x458
	// Line 690, Address: 0x213280, Func Offset: 0x460
	// Line 686, Address: 0x213284, Func Offset: 0x464
	// Line 690, Address: 0x213288, Func Offset: 0x468
	// Line 685, Address: 0x21328c, Func Offset: 0x46c
	// Line 687, Address: 0x213290, Func Offset: 0x470
	// Line 690, Address: 0x213294, Func Offset: 0x474
	// Line 686, Address: 0x213298, Func Offset: 0x478
	// Line 685, Address: 0x21329c, Func Offset: 0x47c
	// Line 687, Address: 0x2132a0, Func Offset: 0x480
	// Line 686, Address: 0x2132a4, Func Offset: 0x484
	// Line 690, Address: 0x2132a8, Func Offset: 0x488
	// Line 691, Address: 0x2132bc, Func Offset: 0x49c
	// Line 692, Address: 0x2132e8, Func Offset: 0x4c8
	// Line 695, Address: 0x213310, Func Offset: 0x4f0
	// Line 696, Address: 0x213320, Func Offset: 0x500
	// Line 697, Address: 0x213330, Func Offset: 0x510
	// Line 704, Address: 0x213340, Func Offset: 0x520
	// Line 705, Address: 0x21334c, Func Offset: 0x52c
	// Line 706, Address: 0x213358, Func Offset: 0x538
	// Line 705, Address: 0x21335c, Func Offset: 0x53c
	// Line 706, Address: 0x213360, Func Offset: 0x540
	// Line 705, Address: 0x213364, Func Offset: 0x544
	// Line 706, Address: 0x213374, Func Offset: 0x554
	// Line 708, Address: 0x213398, Func Offset: 0x578
	// Line 707, Address: 0x21339c, Func Offset: 0x57c
	// Line 710, Address: 0x2133a0, Func Offset: 0x580
	// Line 708, Address: 0x2133a4, Func Offset: 0x584
	// Line 710, Address: 0x2133a8, Func Offset: 0x588
	// Line 709, Address: 0x2133ac, Func Offset: 0x58c
	// Line 707, Address: 0x2133b0, Func Offset: 0x590
	// Line 708, Address: 0x2133b4, Func Offset: 0x594
	// Line 710, Address: 0x2133b8, Func Offset: 0x598
	// Line 712, Address: 0x2133c0, Func Offset: 0x5a0
	// Line 713, Address: 0x2133dc, Func Offset: 0x5bc
	// Line 716, Address: 0x2133e4, Func Offset: 0x5c4
	// Line 717, Address: 0x2133e8, Func Offset: 0x5c8
	// Func End, Address: 0x21340c, Func Offset: 0x5ec
}

// 
// Start address: 0x213410
void EnemyHyenaTongueRecoveryRot(HyenaTonguePoint* ton, int num)
{
	int i;
	// Line 723, Address: 0x213410, Func Offset: 0
	// Line 725, Address: 0x213424, Func Offset: 0x14
	// Line 723, Address: 0x213428, Func Offset: 0x18
	// Line 725, Address: 0x21342c, Func Offset: 0x1c
	// Line 726, Address: 0x213438, Func Offset: 0x28
	// Line 727, Address: 0x213444, Func Offset: 0x34
	// Line 728, Address: 0x213458, Func Offset: 0x48
	// Func End, Address: 0x213470, Func Offset: 0x60
}

// 
// Start address: 0x213470
void EnemyHyenaTongueUpdate(sfObj* obj, HyenaTonguePoint* ton, int num)
{
	float sub[4];
	float dir[4];
	float pos[4];
	int i;
	float tanroot_pos[4];
	// Line 734, Address: 0x213470, Func Offset: 0
	// Line 762, Address: 0x213490, Func Offset: 0x20
	// Line 766, Address: 0x21349c, Func Offset: 0x2c
	// Line 768, Address: 0x2134ac, Func Offset: 0x3c
	// Line 771, Address: 0x2134b8, Func Offset: 0x48
	// Line 773, Address: 0x2134c0, Func Offset: 0x50
	// Line 801, Address: 0x2134c8, Func Offset: 0x58
	// Line 773, Address: 0x2134cc, Func Offset: 0x5c
	// Line 788, Address: 0x2134d0, Func Offset: 0x60
	// Line 773, Address: 0x2134d4, Func Offset: 0x64
	// Line 788, Address: 0x2134d8, Func Offset: 0x68
	// Line 773, Address: 0x2134dc, Func Offset: 0x6c
	// Line 788, Address: 0x2134e0, Func Offset: 0x70
	// Line 801, Address: 0x2134e4, Func Offset: 0x74
	// Line 774, Address: 0x2134e8, Func Offset: 0x78
	// Line 801, Address: 0x2134ec, Func Offset: 0x7c
	// Line 773, Address: 0x2134fc, Func Offset: 0x8c
	// Line 801, Address: 0x213500, Func Offset: 0x90
	// Line 774, Address: 0x213504, Func Offset: 0x94
	// Line 788, Address: 0x21351c, Func Offset: 0xac
	// Line 801, Address: 0x213530, Func Offset: 0xc0
	// Line 802, Address: 0x213544, Func Offset: 0xd4
	// Line 805, Address: 0x213570, Func Offset: 0x100
	// Line 808, Address: 0x213590, Func Offset: 0x120
	// Line 809, Address: 0x2135dc, Func Offset: 0x16c
	// Line 810, Address: 0x213628, Func Offset: 0x1b8
	// Line 811, Address: 0x21363c, Func Offset: 0x1cc
	// Line 810, Address: 0x213640, Func Offset: 0x1d0
	// Line 811, Address: 0x21365c, Func Offset: 0x1ec
	// Line 810, Address: 0x213660, Func Offset: 0x1f0
	// Line 811, Address: 0x213680, Func Offset: 0x210
	// Line 812, Address: 0x2136a4, Func Offset: 0x234
	// Line 815, Address: 0x2136a8, Func Offset: 0x238
	// Line 816, Address: 0x2136e0, Func Offset: 0x270
	// Line 820, Address: 0x213724, Func Offset: 0x2b4
	// Line 825, Address: 0x21373c, Func Offset: 0x2cc
	// Line 826, Address: 0x21374c, Func Offset: 0x2dc
	// Line 825, Address: 0x213750, Func Offset: 0x2e0
	// Line 826, Address: 0x21375c, Func Offset: 0x2ec
	// Line 827, Address: 0x213764, Func Offset: 0x2f4
	// Line 828, Address: 0x2137a0, Func Offset: 0x330
	// Line 830, Address: 0x2137b8, Func Offset: 0x348
	// Line 831, Address: 0x2137d8, Func Offset: 0x368
	// Line 833, Address: 0x213808, Func Offset: 0x398
	// Line 834, Address: 0x213810, Func Offset: 0x3a0
	// Line 835, Address: 0x21381c, Func Offset: 0x3ac
	// Line 836, Address: 0x213830, Func Offset: 0x3c0
	// Line 838, Address: 0x213848, Func Offset: 0x3d8
	// Line 839, Address: 0x213868, Func Offset: 0x3f8
	// Line 841, Address: 0x213874, Func Offset: 0x404
	// Line 857, Address: 0x213878, Func Offset: 0x408
	// Line 858, Address: 0x2138a8, Func Offset: 0x438
	// Line 859, Address: 0x2138bc, Func Offset: 0x44c
	// Line 864, Address: 0x2138c8, Func Offset: 0x458
	// Line 865, Address: 0x21390c, Func Offset: 0x49c
	// Line 867, Address: 0x213914, Func Offset: 0x4a4
	// Line 865, Address: 0x213918, Func Offset: 0x4a8
	// Line 867, Address: 0x21391c, Func Offset: 0x4ac
	// Line 865, Address: 0x213920, Func Offset: 0x4b0
	// Line 867, Address: 0x213928, Func Offset: 0x4b8
	// Line 868, Address: 0x213934, Func Offset: 0x4c4
	// Line 865, Address: 0x213944, Func Offset: 0x4d4
	// Line 867, Address: 0x21394c, Func Offset: 0x4dc
	// Line 868, Address: 0x213950, Func Offset: 0x4e0
	// Line 870, Address: 0x21395c, Func Offset: 0x4ec
	// Line 871, Address: 0x213974, Func Offset: 0x504
	// Func End, Address: 0x21398c, Func Offset: 0x51c
}

// 
// Start address: 0x213990
void EnemyHyenaTongueStraight(HyenaTonguePoint* ton, int num, float rot_x, float rot_y)
{
	float rot[4];
	float rot_quat[4];
	float pos0[4];
	float pos1[4];
	int i;
	// Line 877, Address: 0x213990, Func Offset: 0
	// Line 883, Address: 0x2139a4, Func Offset: 0x14
	// Line 886, Address: 0x2139b0, Func Offset: 0x20
	// Line 884, Address: 0x2139b4, Func Offset: 0x24
	// Line 886, Address: 0x2139b8, Func Offset: 0x28
	// Line 887, Address: 0x2139c0, Func Offset: 0x30
	// Line 889, Address: 0x2139d4, Func Offset: 0x44
	// Line 890, Address: 0x2139e8, Func Offset: 0x58
	// Line 891, Address: 0x213a14, Func Offset: 0x84
	// Line 892, Address: 0x213a50, Func Offset: 0xc0
	// Line 893, Address: 0x213a64, Func Offset: 0xd4
	// Func End, Address: 0x213a78, Func Offset: 0xe8
}

// 
// Start address: 0x213a80
void EnemyHyenaTongueReflectionRot(sfObj* obj, HyenaTonguePoint* ton, int num)
{
	float sub0[4];
	float sub1[4];
	float pos0[4];
	float pos1[4];
	float quat0[4];
	float quat1[4];
	float quat[4];
	int i;
	// Line 899, Address: 0x213a80, Func Offset: 0
	// Line 906, Address: 0x213aa0, Func Offset: 0x20
	// Line 908, Address: 0x213ab0, Func Offset: 0x30
	// Line 910, Address: 0x213ab8, Func Offset: 0x38
	// Line 913, Address: 0x213ad4, Func Offset: 0x54
	// Line 914, Address: 0x213af0, Func Offset: 0x70
	// Line 915, Address: 0x213b0c, Func Offset: 0x8c
	// Line 916, Address: 0x213b2c, Func Offset: 0xac
	// Line 918, Address: 0x213b58, Func Offset: 0xd8
	// Line 919, Address: 0x213b9c, Func Offset: 0x11c
	// Line 922, Address: 0x213bc8, Func Offset: 0x148
	// Line 925, Address: 0x213bd8, Func Offset: 0x158
	// Line 927, Address: 0x213be8, Func Offset: 0x168
	// Line 928, Address: 0x213c00, Func Offset: 0x180
	// Line 929, Address: 0x213c18, Func Offset: 0x198
	// Func End, Address: 0x213c34, Func Offset: 0x1b4
}

