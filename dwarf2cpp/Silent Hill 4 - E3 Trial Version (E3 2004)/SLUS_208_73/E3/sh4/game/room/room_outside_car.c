typedef struct sgBone;
typedef union _anon0;
typedef struct _anon1;
typedef struct sfObj;
typedef struct CarWork;
typedef struct sfCharacter;
typedef struct _anon2;
typedef struct sgAnime;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct sgSVModel;
typedef struct _anon7;
typedef struct sgTexArc;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sgTexData;
typedef struct sgClutData;
typedef struct sgIKHandle;

typedef void(*type_2)(sfObj*);
typedef void(*type_6)(sfObj*);
typedef void(*type_10)(sfObj*);
typedef void(*type_13)(_anon4*, int, int, float*);
typedef void(*type_15)(sfObj*);
typedef sgIKSolveResult(*type_21)();
typedef void(*type_32)();
typedef void(*type_35)(sgAnime*, int);

typedef _anon0 type_0[256];
typedef float type_1[4];
typedef unsigned char type_3[4];
typedef float type_4[4][4];
typedef CarWork* type_5[3];
typedef _anon2 type_7[2];
typedef float type_8[4];
typedef int type_9[2];
typedef float type_11[4][4];
typedef int type_12[2];
typedef _anon6 type_14[14];
typedef int type_16[4][8];
typedef float type_17[4];
typedef float type_18[4][2];
typedef float type_19[4][30];
typedef float type_20[4][4];
typedef short type_22[2];
typedef float type_23[4][4];
typedef unsigned short type_24[2];
typedef char type_25[4];
typedef unsigned char type_26[4];
typedef float type_27[1];
typedef int type_28[4];
typedef float type_29[4][4];
typedef int type_30[1];
typedef int type_31[4];
typedef int type_33[4][8];
typedef void* type_34[4];
typedef int type_36[4][1];

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
	short light_no;
	short light_type;
	float light_scale;
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

struct CarWork
{
	sfCharacter character;
	sfCharacter light_chara;
	float pos[4];
	float default_speed;
	float current_speed;
	float accel;
	float safety_ratio;
	short way_no;
	short car_no;
	short render_light_no;
	short hurry;
	short pushed;
	short safety;
	CarWork* next;
	sfObj* this_obj;
	int siren_amble;
	int siren_police;
	int event_end;
	int siren_timer[4];
	int light_timer;
};

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon5 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

struct _anon2
{
	float p0[4];
	float p1[4];
	float sp_dir[4];
	float delete_plane[4];
	float stop_point[4];
	float accel_point[4];
	float y_rot;
};

struct sgAnime
{
	void* play_data[4];
	sgBone* transforms;
	int n_transforms;
	sgIKHandle* ik_handles;
	sgBone* object_space;
	void(*post_func)(sgAnime*, int);
	float* reals;
	int n_reals;
	float vectors[4];
	int n_vectors;
	int current_time;
	int time_add;
	unsigned char play_status[4];
	unsigned short flag;
	unsigned short construct_check;
};

struct _anon3
{
	CarWork* cars[3];
	int n_cars;
	int time;
	int n_max_cars;
	int stop_at_junction;
};

struct _anon4
{
	unsigned long tex0;
	unsigned long clamp;
};

struct _anon5
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon4*, int, int, float*);
	int equip_flag;
};

struct _anon6
{
	int model_file[2];
	int texture_file[2];
	float max_speed;
	float max_acceleration;
	float length;
	int appearance;
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct _anon7
{
	short base;
	short buffer_w;
	unsigned char psm;
	unsigned char data_psm;
	short w;
	short h;
	short buffer_size;
	short w2;
	short h2;
};

struct sgTexArc
{
	<unknown fundamental type (0xa510)> dummy;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct sgTexData
{
	<unknown fundamental type (0xa510)> dummy;
};

struct sgClutData
{
	<unknown fundamental type (0xa510)> dummy;
};

struct sgIKHandle
{
	float acceleration[4][2];
	float damping_ratio;
	sgBone* bone;
	sgBone* start;
	sgBone* end;
	sgIKSolveResult(*solver)();
	sgIKSolveResult solve_result;
	float reach_constrain;
	float close_constrain;
	sgIKHandle* next;
};

_anon6 cars_table[14];
_anon2 drive_way[2];
_anon3 control_work;
void(*RoomOutSideCar)(sfObj*);
void(*RoomOutSideCarsControlDestruct)();
float sg_vector_unit_y[4];
void(*RoomOutSideCarDestuct)(sfObj*);
float ambul_rot_inv[4];
float ambul_lit_offset[4];
float ambul_lit_scale[4];
float siren_offsets[4][4];
float police_siren_offsets[4][4];
int siren_red_uvs[4][8];
int siren_blue_uvs[4][8];
unsigned long* sg_packet_cur;
float light_positions[4][30];
int out_light_uvs[4][1];

void RoomOutSideCarStopJunction(int val);
int JunctionStop();
int GetCarType();
void SetCarObj(sfObj* optr, unsigned int way, float* pos);
sfObj* CreateDemoCar(int type);
void DeleteCarObj(sfObj* optr);
void RoomOutSideCarDestuct(sfObj* optr);
void RoomOutSideCarsControlDestruct();
void RoomOutSideCarsControl(sfObj* obj);
void RoomOutSideCarsSetMax(int n);
void RoomOutSideCarsControlDraw();
void RoomOutSideCar(sfObj* obj);
void RoomOutSideCarDraw(CarWork* work);
void RoomOutSideCarDraw_Ambul01Light(CarWork* work);
float GetSize(float* v);
unsigned long GetTEX0();
void GetRect(float* c, float r, float vs[4]);
void RoomOutSideCarDraw_Siren(CarWork* work);
void OutLightDraw1(_anon1* o_light);
void OutSideLights(sfObj* obj);
void OutSideLightsDraw(sfObj* obj);
sfCharacter* RoomOutSideCarCreateAmbulance();

// 
// Start address: 0x21af70
void RoomOutSideCarStopJunction(int val)
{
	// Line 285, Address: 0x21af70, Func Offset: 0
	// Line 286, Address: 0x21af74, Func Offset: 0x4
	// Func End, Address: 0x21af7c, Func Offset: 0xc
}

// 
// Start address: 0x21af80
int JunctionStop()
{
	// Line 290, Address: 0x21af80, Func Offset: 0
	// Line 291, Address: 0x21af84, Func Offset: 0x4
	// Func End, Address: 0x21af8c, Func Offset: 0xc
}

// 
// Start address: 0x21af90
int GetCarType()
{
	int type;
	int tmp;
	// Line 299, Address: 0x21af90, Func Offset: 0
	// Line 300, Address: 0x21af9c, Func Offset: 0xc
	// Line 301, Address: 0x21afbc, Func Offset: 0x2c
	// Line 302, Address: 0x21afcc, Func Offset: 0x3c
	// Line 304, Address: 0x21afdc, Func Offset: 0x4c
	// Line 306, Address: 0x21aff8, Func Offset: 0x68
	// Func End, Address: 0x21b00c, Func Offset: 0x7c
}

// 
// Start address: 0x21b010
void SetCarObj(sfObj* optr, unsigned int way, float* pos)
{
	CarWork* work;
	CarWork* work_pre;
	int type;
	float r;
	float l;
	float v[4];
	unsigned int light_on;
	// Line 310, Address: 0x21b010, Func Offset: 0
	// Line 320, Address: 0x21b034, Func Offset: 0x24
	// Line 326, Address: 0x21b040, Func Offset: 0x30
	// Line 327, Address: 0x21b048, Func Offset: 0x38
	// Line 328, Address: 0x21b050, Func Offset: 0x40
	// Line 331, Address: 0x21b058, Func Offset: 0x48
	// Line 332, Address: 0x21b074, Func Offset: 0x64
	// Line 333, Address: 0x21b07c, Func Offset: 0x6c
	// Line 334, Address: 0x21b084, Func Offset: 0x74
	// Line 337, Address: 0x21b088, Func Offset: 0x78
	// Line 338, Address: 0x21b09c, Func Offset: 0x8c
	// Line 342, Address: 0x21b0a4, Func Offset: 0x94
	// Line 343, Address: 0x21b0bc, Func Offset: 0xac
	// Line 344, Address: 0x21b0e0, Func Offset: 0xd0
	// Line 346, Address: 0x21b124, Func Offset: 0x114
	// Line 344, Address: 0x21b128, Func Offset: 0x118
	// Line 345, Address: 0x21b134, Func Offset: 0x124
	// Line 344, Address: 0x21b138, Func Offset: 0x128
	// Line 345, Address: 0x21b140, Func Offset: 0x130
	// Line 346, Address: 0x21b14c, Func Offset: 0x13c
	// Line 347, Address: 0x21b164, Func Offset: 0x154
	// Line 348, Address: 0x21b16c, Func Offset: 0x15c
	// Line 350, Address: 0x21b174, Func Offset: 0x164
	// Line 352, Address: 0x21b178, Func Offset: 0x168
	// Line 353, Address: 0x21b188, Func Offset: 0x178
	// Line 354, Address: 0x21b194, Func Offset: 0x184
	// Line 355, Address: 0x21b1a4, Func Offset: 0x194
	// Line 356, Address: 0x21b1a8, Func Offset: 0x198
	// Line 358, Address: 0x21b1ac, Func Offset: 0x19c
	// Line 359, Address: 0x21b1cc, Func Offset: 0x1bc
	// Line 358, Address: 0x21b1d0, Func Offset: 0x1c0
	// Line 359, Address: 0x21b1dc, Func Offset: 0x1cc
	// Line 361, Address: 0x21b1e4, Func Offset: 0x1d4
	// Line 362, Address: 0x21b1ec, Func Offset: 0x1dc
	// Line 361, Address: 0x21b1f0, Func Offset: 0x1e0
	// Line 365, Address: 0x21b1f4, Func Offset: 0x1e4
	// Line 361, Address: 0x21b1f8, Func Offset: 0x1e8
	// Line 362, Address: 0x21b200, Func Offset: 0x1f0
	// Line 363, Address: 0x21b210, Func Offset: 0x200
	// Line 365, Address: 0x21b214, Func Offset: 0x204
	// Line 368, Address: 0x21b218, Func Offset: 0x208
	// Line 365, Address: 0x21b21c, Func Offset: 0x20c
	// Line 368, Address: 0x21b220, Func Offset: 0x210
	// Line 365, Address: 0x21b224, Func Offset: 0x214
	// Line 368, Address: 0x21b228, Func Offset: 0x218
	// Line 370, Address: 0x21b230, Func Offset: 0x220
	// Line 371, Address: 0x21b238, Func Offset: 0x228
	// Line 370, Address: 0x21b23c, Func Offset: 0x22c
	// Line 371, Address: 0x21b244, Func Offset: 0x234
	// Line 372, Address: 0x21b250, Func Offset: 0x240
	// Line 373, Address: 0x21b258, Func Offset: 0x248
	// Line 374, Address: 0x21b268, Func Offset: 0x258
	// Line 375, Address: 0x21b26c, Func Offset: 0x25c
	// Line 376, Address: 0x21b270, Func Offset: 0x260
	// Line 377, Address: 0x21b27c, Func Offset: 0x26c
	// Func End, Address: 0x21b2a0, Func Offset: 0x290
}

// 
// Start address: 0x21b2a0
sfObj* CreateDemoCar(int type)
{
	CarWork* work_pre;
	sfObj* optr;
	// Line 383, Address: 0x21b2a0, Func Offset: 0
	// Line 389, Address: 0x21b2b0, Func Offset: 0x10
	// Line 390, Address: 0x21b2bc, Func Offset: 0x1c
	// Line 391, Address: 0x21b2c4, Func Offset: 0x24
	// Line 393, Address: 0x21b2d0, Func Offset: 0x30
	// Line 394, Address: 0x21b2e0, Func Offset: 0x40
	// Line 395, Address: 0x21b2ec, Func Offset: 0x4c
	// Line 398, Address: 0x21b2fc, Func Offset: 0x5c
	// Line 396, Address: 0x21b300, Func Offset: 0x60
	// Line 400, Address: 0x21b304, Func Offset: 0x64
	// Line 397, Address: 0x21b308, Func Offset: 0x68
	// Line 398, Address: 0x21b30c, Func Offset: 0x6c
	// Line 400, Address: 0x21b310, Func Offset: 0x70
	// Line 401, Address: 0x21b31c, Func Offset: 0x7c
	// Line 402, Address: 0x21b328, Func Offset: 0x88
	// Line 403, Address: 0x21b338, Func Offset: 0x98
	// Line 405, Address: 0x21b340, Func Offset: 0xa0
	// Line 406, Address: 0x21b348, Func Offset: 0xa8
	// Line 407, Address: 0x21b350, Func Offset: 0xb0
	// Line 409, Address: 0x21b354, Func Offset: 0xb4
	// Line 410, Address: 0x21b368, Func Offset: 0xc8
	// Line 411, Address: 0x21b374, Func Offset: 0xd4
	// Line 412, Address: 0x21b378, Func Offset: 0xd8
	// Func End, Address: 0x21b38c, Func Offset: 0xec
}

// 
// Start address: 0x21b390
void DeleteCarObj(sfObj* optr)
{
	CarWork* work;
	CarWork* back_car;
	// Line 416, Address: 0x21b390, Func Offset: 0
	// Line 419, Address: 0x21b394, Func Offset: 0x4
	// Line 416, Address: 0x21b398, Func Offset: 0x8
	// Line 419, Address: 0x21b39c, Func Offset: 0xc
	// Line 421, Address: 0x21b3b0, Func Offset: 0x20
	// Line 422, Address: 0x21b3b4, Func Offset: 0x24
	// Line 423, Address: 0x21b3bc, Func Offset: 0x2c
	// Line 425, Address: 0x21b3c0, Func Offset: 0x30
	// Line 427, Address: 0x21b3c8, Func Offset: 0x38
	// Line 428, Address: 0x21b3cc, Func Offset: 0x3c
	// Line 430, Address: 0x21b3f0, Func Offset: 0x60
	// Line 434, Address: 0x21b3f8, Func Offset: 0x68
	// Line 436, Address: 0x21b400, Func Offset: 0x70
	// Line 437, Address: 0x21b414, Func Offset: 0x84
	// Func End, Address: 0x21b420, Func Offset: 0x90
}

// 
// Start address: 0x21b420
void RoomOutSideCarDestuct(sfObj* optr)
{
	// Line 442, Address: 0x21b420, Func Offset: 0
	// Line 444, Address: 0x21b42c, Func Offset: 0xc
	// Line 445, Address: 0x21b430, Func Offset: 0x10
	// Line 446, Address: 0x21b438, Func Offset: 0x18
	// Line 447, Address: 0x21b444, Func Offset: 0x24
	// Line 448, Address: 0x21b44c, Func Offset: 0x2c
	// Line 449, Address: 0x21b450, Func Offset: 0x30
	// Func End, Address: 0x21b460, Func Offset: 0x40
}

// 
// Start address: 0x21b460
void RoomOutSideCarsControlDestruct()
{
	int i;
	CarWork* car;
	// Line 456, Address: 0x21b460, Func Offset: 0
	// Line 459, Address: 0x21b46c, Func Offset: 0xc
	// Line 457, Address: 0x21b470, Func Offset: 0x10
	// Line 458, Address: 0x21b474, Func Offset: 0x14
	// Line 459, Address: 0x21b480, Func Offset: 0x20
	// Line 460, Address: 0x21b484, Func Offset: 0x24
	// Line 461, Address: 0x21b488, Func Offset: 0x28
	// Line 462, Address: 0x21b4a0, Func Offset: 0x40
	// Line 463, Address: 0x21b4b0, Func Offset: 0x50
	// Func End, Address: 0x21b4c0, Func Offset: 0x60
}

// 
// Start address: 0x21b4c0
void RoomOutSideCarsControl(sfObj* obj)
{
	int way_no;
	int i;
	sfObj* optr;
	sgTexArc* global_texture;
	_anon2* way;
	float v[4];
	float l;
	float set_l;
	float r;
	_anon2* way;
	_anon2* way;
	// Line 484, Address: 0x21b4c0, Func Offset: 0
	// Line 489, Address: 0x21b4c4, Func Offset: 0x4
	// Line 484, Address: 0x21b4c8, Func Offset: 0x8
	// Line 489, Address: 0x21b4e4, Func Offset: 0x24
	// Line 492, Address: 0x21b500, Func Offset: 0x40
	// Line 493, Address: 0x21b508, Func Offset: 0x48
	// Line 496, Address: 0x21b518, Func Offset: 0x58
	// Line 494, Address: 0x21b51c, Func Offset: 0x5c
	// Line 496, Address: 0x21b520, Func Offset: 0x60
	// Line 497, Address: 0x21b52c, Func Offset: 0x6c
	// Line 499, Address: 0x21b534, Func Offset: 0x74
	// Line 500, Address: 0x21b54c, Func Offset: 0x8c
	// Line 502, Address: 0x21b560, Func Offset: 0xa0
	// Line 504, Address: 0x21b568, Func Offset: 0xa8
	// Line 505, Address: 0x21b570, Func Offset: 0xb0
	// Line 510, Address: 0x21b578, Func Offset: 0xb8
	// Line 505, Address: 0x21b57c, Func Offset: 0xbc
	// Line 510, Address: 0x21b58c, Func Offset: 0xcc
	// Line 511, Address: 0x21b5a0, Func Offset: 0xe0
	// Line 512, Address: 0x21b5c4, Func Offset: 0x104
	// Line 513, Address: 0x21b5c8, Func Offset: 0x108
	// Line 515, Address: 0x21b5d0, Func Offset: 0x110
	// Line 518, Address: 0x21b5f0, Func Offset: 0x130
	// Line 515, Address: 0x21b5f8, Func Offset: 0x138
	// Line 517, Address: 0x21b5fc, Func Offset: 0x13c
	// Line 518, Address: 0x21b600, Func Offset: 0x140
	// Line 519, Address: 0x21b618, Func Offset: 0x158
	// Line 520, Address: 0x21b630, Func Offset: 0x170
	// Line 521, Address: 0x21b638, Func Offset: 0x178
	// Line 523, Address: 0x21b640, Func Offset: 0x180
	// Line 524, Address: 0x21b650, Func Offset: 0x190
	// Line 525, Address: 0x21b65c, Func Offset: 0x19c
	// Line 526, Address: 0x21b674, Func Offset: 0x1b4
	// Line 527, Address: 0x21b684, Func Offset: 0x1c4
	// Line 528, Address: 0x21b6ec, Func Offset: 0x22c
	// Line 527, Address: 0x21b6f0, Func Offset: 0x230
	// Line 528, Address: 0x21b6f4, Func Offset: 0x234
	// Line 529, Address: 0x21b758, Func Offset: 0x298
	// Line 530, Address: 0x21b760, Func Offset: 0x2a0
	// Line 539, Address: 0x21b768, Func Offset: 0x2a8
	// Line 540, Address: 0x21b778, Func Offset: 0x2b8
	// Line 541, Address: 0x21b788, Func Offset: 0x2c8
	// Line 542, Address: 0x21b78c, Func Offset: 0x2cc
	// Line 543, Address: 0x21b794, Func Offset: 0x2d4
	// Line 544, Address: 0x21b79c, Func Offset: 0x2dc
	// Line 545, Address: 0x21b7ac, Func Offset: 0x2ec
	// Line 546, Address: 0x21b7b0, Func Offset: 0x2f0
	// Line 549, Address: 0x21b818, Func Offset: 0x358
	// Line 550, Address: 0x21b828, Func Offset: 0x368
	// Line 551, Address: 0x21b838, Func Offset: 0x378
	// Line 552, Address: 0x21b83c, Func Offset: 0x37c
	// Line 553, Address: 0x21b844, Func Offset: 0x384
	// Line 554, Address: 0x21b84c, Func Offset: 0x38c
	// Line 555, Address: 0x21b85c, Func Offset: 0x39c
	// Line 556, Address: 0x21b860, Func Offset: 0x3a0
	// Line 561, Address: 0x21b8c8, Func Offset: 0x408
	// Func End, Address: 0x21b8e8, Func Offset: 0x428
}

// 
// Start address: 0x21b8f0
void RoomOutSideCarsSetMax(int n)
{
	// Line 566, Address: 0x21b8f0, Func Offset: 0
	// Line 567, Address: 0x21b8f4, Func Offset: 0x4
	// Func End, Address: 0x21b8fc, Func Offset: 0xc
}

// 
// Start address: 0x21b900
void RoomOutSideCarsControlDraw()
{
	int i;
	CarWork* car;
	// Line 572, Address: 0x21b900, Func Offset: 0
	// Line 574, Address: 0x21b910, Func Offset: 0x10
	// Line 572, Address: 0x21b914, Func Offset: 0x14
	// Line 574, Address: 0x21b918, Func Offset: 0x18
	// Line 575, Address: 0x21b920, Func Offset: 0x20
	// Line 576, Address: 0x21b924, Func Offset: 0x24
	// Line 577, Address: 0x21b930, Func Offset: 0x30
	// Line 578, Address: 0x21b938, Func Offset: 0x38
	// Line 579, Address: 0x21b93c, Func Offset: 0x3c
	// Line 580, Address: 0x21b950, Func Offset: 0x50
	// Line 581, Address: 0x21b960, Func Offset: 0x60
	// Func End, Address: 0x21b978, Func Offset: 0x78
}

// 
// Start address: 0x21b980
void RoomOutSideCar(sfObj* obj)
{
	sfCharacter* chara;
	CarWork* work;
	CarWork* front_car;
	float* fp;
	float v[4];
	float q[4];
	float r;
	int i;
	void* mdl_data;
	void* tex_data;
	void* gl_tex;
	_anon5* mdl;
	void* mdl_data;
	void* tex_data;
	float need_r;
	// Line 586, Address: 0x21b980, Func Offset: 0
	// Line 588, Address: 0x21b9a4, Func Offset: 0x24
	// Line 596, Address: 0x21b9a8, Func Offset: 0x28
	// Line 597, Address: 0x21b9b4, Func Offset: 0x34
	// Line 598, Address: 0x21b9bc, Func Offset: 0x3c
	// Line 599, Address: 0x21b9c4, Func Offset: 0x44
	// Line 601, Address: 0x21b9c8, Func Offset: 0x48
	// Line 602, Address: 0x21b9fc, Func Offset: 0x7c
	// Line 604, Address: 0x21ba00, Func Offset: 0x80
	// Line 606, Address: 0x21ba04, Func Offset: 0x84
	// Line 607, Address: 0x21ba30, Func Offset: 0xb0
	// Line 606, Address: 0x21ba34, Func Offset: 0xb4
	// Line 607, Address: 0x21ba38, Func Offset: 0xb8
	// Line 608, Address: 0x21ba64, Func Offset: 0xe4
	// Line 611, Address: 0x21ba74, Func Offset: 0xf4
	// Line 613, Address: 0x21ba84, Func Offset: 0x104
	// Line 615, Address: 0x21ba90, Func Offset: 0x110
	// Line 616, Address: 0x21ba9c, Func Offset: 0x11c
	// Line 617, Address: 0x21baa8, Func Offset: 0x128
	// Line 619, Address: 0x21bab4, Func Offset: 0x134
	// Line 620, Address: 0x21bac4, Func Offset: 0x144
	// Line 623, Address: 0x21bac8, Func Offset: 0x148
	// Line 624, Address: 0x21baf8, Func Offset: 0x178
	// Line 625, Address: 0x21bb04, Func Offset: 0x184
	// Line 628, Address: 0x21bb14, Func Offset: 0x194
	// Line 629, Address: 0x21bb58, Func Offset: 0x1d8
	// Line 630, Address: 0x21bb80, Func Offset: 0x200
	// Line 631, Address: 0x21bb8c, Func Offset: 0x20c
	// Line 630, Address: 0x21bb90, Func Offset: 0x210
	// Line 631, Address: 0x21bb94, Func Offset: 0x214
	// Line 630, Address: 0x21bb98, Func Offset: 0x218
	// Line 631, Address: 0x21bb9c, Func Offset: 0x21c
	// Line 632, Address: 0x21bbb4, Func Offset: 0x234
	// Line 635, Address: 0x21bbd4, Func Offset: 0x254
	// Line 636, Address: 0x21bc30, Func Offset: 0x2b0
	// Line 635, Address: 0x21bc34, Func Offset: 0x2b4
	// Line 636, Address: 0x21bc38, Func Offset: 0x2b8
	// Line 635, Address: 0x21bc40, Func Offset: 0x2c0
	// Line 636, Address: 0x21bc44, Func Offset: 0x2c4
	// Line 635, Address: 0x21bc50, Func Offset: 0x2d0
	// Line 636, Address: 0x21bc54, Func Offset: 0x2d4
	// Line 637, Address: 0x21bc60, Func Offset: 0x2e0
	// Line 639, Address: 0x21bc68, Func Offset: 0x2e8
	// Line 642, Address: 0x21bc94, Func Offset: 0x314
	// Line 643, Address: 0x21bca4, Func Offset: 0x324
	// Line 644, Address: 0x21bcb4, Func Offset: 0x334
	// Line 647, Address: 0x21bcc0, Func Offset: 0x340
	// Line 648, Address: 0x21bcc8, Func Offset: 0x348
	// Line 649, Address: 0x21bce4, Func Offset: 0x364
	// Line 651, Address: 0x21bcf4, Func Offset: 0x374
	// Line 653, Address: 0x21bcf8, Func Offset: 0x378
	// Line 651, Address: 0x21bcfc, Func Offset: 0x37c
	// Line 653, Address: 0x21bd04, Func Offset: 0x384
	// Line 655, Address: 0x21bd10, Func Offset: 0x390
	// Line 661, Address: 0x21bd18, Func Offset: 0x398
	// Line 663, Address: 0x21bd3c, Func Offset: 0x3bc
	// Line 664, Address: 0x21bd58, Func Offset: 0x3d8
	// Line 665, Address: 0x21bd70, Func Offset: 0x3f0
	// Line 666, Address: 0x21bd78, Func Offset: 0x3f8
	// Line 668, Address: 0x21bd98, Func Offset: 0x418
	// Line 669, Address: 0x21bdb8, Func Offset: 0x438
	// Line 670, Address: 0x21bdd8, Func Offset: 0x458
	// Line 671, Address: 0x21bdf0, Func Offset: 0x470
	// Line 672, Address: 0x21be08, Func Offset: 0x488
	// Line 674, Address: 0x21be10, Func Offset: 0x490
	// Line 675, Address: 0x21be14, Func Offset: 0x494
	// Line 678, Address: 0x21be18, Func Offset: 0x498
	// Line 679, Address: 0x21be24, Func Offset: 0x4a4
	// Line 680, Address: 0x21be40, Func Offset: 0x4c0
	// Line 684, Address: 0x21be48, Func Offset: 0x4c8
	// Line 685, Address: 0x21be54, Func Offset: 0x4d4
	// Line 686, Address: 0x21be60, Func Offset: 0x4e0
	// Line 685, Address: 0x21be64, Func Offset: 0x4e4
	// Line 686, Address: 0x21be80, Func Offset: 0x500
	// Line 687, Address: 0x21bea0, Func Offset: 0x520
	// Line 686, Address: 0x21bea8, Func Offset: 0x528
	// Line 687, Address: 0x21beac, Func Offset: 0x52c
	// Line 688, Address: 0x21beb8, Func Offset: 0x538
	// Line 689, Address: 0x21bf10, Func Offset: 0x590
	// Line 690, Address: 0x21bf30, Func Offset: 0x5b0
	// Line 691, Address: 0x21bf38, Func Offset: 0x5b8
	// Line 690, Address: 0x21bf3c, Func Offset: 0x5bc
	// Line 691, Address: 0x21bf5c, Func Offset: 0x5dc
	// Line 692, Address: 0x21bf7c, Func Offset: 0x5fc
	// Line 691, Address: 0x21bf84, Func Offset: 0x604
	// Line 692, Address: 0x21bf88, Func Offset: 0x608
	// Line 693, Address: 0x21bf94, Func Offset: 0x614
	// Line 694, Address: 0x21bf98, Func Offset: 0x618
	// Line 699, Address: 0x21bf9c, Func Offset: 0x61c
	// Line 700, Address: 0x21bfa4, Func Offset: 0x624
	// Line 702, Address: 0x21bfa8, Func Offset: 0x628
	// Line 703, Address: 0x21bfc8, Func Offset: 0x648
	// Line 704, Address: 0x21bffc, Func Offset: 0x67c
	// Line 705, Address: 0x21c000, Func Offset: 0x680
	// Line 704, Address: 0x21c00c, Func Offset: 0x68c
	// Line 705, Address: 0x21c010, Func Offset: 0x690
	// Line 707, Address: 0x21c01c, Func Offset: 0x69c
	// Line 708, Address: 0x21c028, Func Offset: 0x6a8
	// Line 709, Address: 0x21c02c, Func Offset: 0x6ac
	// Line 711, Address: 0x21c030, Func Offset: 0x6b0
	// Line 712, Address: 0x21c038, Func Offset: 0x6b8
	// Line 711, Address: 0x21c03c, Func Offset: 0x6bc
	// Line 712, Address: 0x21c05c, Func Offset: 0x6dc
	// Line 713, Address: 0x21c07c, Func Offset: 0x6fc
	// Line 712, Address: 0x21c084, Func Offset: 0x704
	// Line 713, Address: 0x21c088, Func Offset: 0x708
	// Line 717, Address: 0x21c094, Func Offset: 0x714
	// Line 719, Address: 0x21c09c, Func Offset: 0x71c
	// Line 721, Address: 0x21c0a0, Func Offset: 0x720
	// Line 726, Address: 0x21c0a8, Func Offset: 0x728
	// Line 727, Address: 0x21c0b8, Func Offset: 0x738
	// Line 728, Address: 0x21c110, Func Offset: 0x790
	// Line 729, Address: 0x21c130, Func Offset: 0x7b0
	// Line 730, Address: 0x21c138, Func Offset: 0x7b8
	// Line 729, Address: 0x21c13c, Func Offset: 0x7bc
	// Line 730, Address: 0x21c15c, Func Offset: 0x7dc
	// Line 732, Address: 0x21c17c, Func Offset: 0x7fc
	// Line 730, Address: 0x21c188, Func Offset: 0x808
	// Line 731, Address: 0x21c18c, Func Offset: 0x80c
	// Line 732, Address: 0x21c190, Func Offset: 0x810
	// Line 733, Address: 0x21c19c, Func Offset: 0x81c
	// Line 738, Address: 0x21c1a0, Func Offset: 0x820
	// Line 739, Address: 0x21c1a4, Func Offset: 0x824
	// Line 740, Address: 0x21c1c0, Func Offset: 0x840
	// Line 742, Address: 0x21c1e8, Func Offset: 0x868
	// Line 740, Address: 0x21c1ec, Func Offset: 0x86c
	// Line 741, Address: 0x21c1f4, Func Offset: 0x874
	// Line 740, Address: 0x21c1f8, Func Offset: 0x878
	// Line 742, Address: 0x21c204, Func Offset: 0x884
	// Line 740, Address: 0x21c208, Func Offset: 0x888
	// Line 741, Address: 0x21c220, Func Offset: 0x8a0
	// Line 742, Address: 0x21c224, Func Offset: 0x8a4
	// Line 740, Address: 0x21c228, Func Offset: 0x8a8
	// Line 741, Address: 0x21c234, Func Offset: 0x8b4
	// Line 742, Address: 0x21c238, Func Offset: 0x8b8
	// Line 743, Address: 0x21c248, Func Offset: 0x8c8
	// Line 745, Address: 0x21c26c, Func Offset: 0x8ec
	// Line 746, Address: 0x21c294, Func Offset: 0x914
	// Line 747, Address: 0x21c2b0, Func Offset: 0x930
	// Line 748, Address: 0x21c2b4, Func Offset: 0x934
	// Line 750, Address: 0x21c2b8, Func Offset: 0x938
	// Line 751, Address: 0x21c2e0, Func Offset: 0x960
	// Line 752, Address: 0x21c2fc, Func Offset: 0x97c
	// Line 753, Address: 0x21c300, Func Offset: 0x980
	// Line 754, Address: 0x21c30c, Func Offset: 0x98c
	// Line 758, Address: 0x21c310, Func Offset: 0x990
	// Line 759, Address: 0x21c32c, Func Offset: 0x9ac
	// Line 765, Address: 0x21c350, Func Offset: 0x9d0
	// Line 766, Address: 0x21c378, Func Offset: 0x9f8
	// Line 768, Address: 0x21c380, Func Offset: 0xa00
	// Line 767, Address: 0x21c384, Func Offset: 0xa04
	// Line 768, Address: 0x21c388, Func Offset: 0xa08
	// Line 767, Address: 0x21c38c, Func Offset: 0xa0c
	// Line 768, Address: 0x21c398, Func Offset: 0xa18
	// Line 769, Address: 0x21c3b8, Func Offset: 0xa38
	// Line 770, Address: 0x21c3c0, Func Offset: 0xa40
	// Line 771, Address: 0x21c3d8, Func Offset: 0xa58
	// Line 772, Address: 0x21c3dc, Func Offset: 0xa5c
	// Line 776, Address: 0x21c3e0, Func Offset: 0xa60
	// Line 777, Address: 0x21c42c, Func Offset: 0xaac
	// Line 780, Address: 0x21c448, Func Offset: 0xac8
	// Line 781, Address: 0x21c450, Func Offset: 0xad0
	// Line 780, Address: 0x21c454, Func Offset: 0xad4
	// Line 781, Address: 0x21c474, Func Offset: 0xaf4
	// Line 782, Address: 0x21c494, Func Offset: 0xb14
	// Line 781, Address: 0x21c49c, Func Offset: 0xb1c
	// Line 782, Address: 0x21c4a0, Func Offset: 0xb20
	// Line 784, Address: 0x21c4ac, Func Offset: 0xb2c
	// Line 785, Address: 0x21c4b4, Func Offset: 0xb34
	// Line 786, Address: 0x21c4bc, Func Offset: 0xb3c
	// Line 789, Address: 0x21c4c0, Func Offset: 0xb40
	// Line 790, Address: 0x21c4c8, Func Offset: 0xb48
	// Func End, Address: 0x21c4f0, Func Offset: 0xb70
}

// 
// Start address: 0x21c4f0
void RoomOutSideCarDraw(CarWork* work)
{
	// Line 799, Address: 0x21c4f0, Func Offset: 0
	// Line 802, Address: 0x21c4fc, Func Offset: 0xc
	// Line 804, Address: 0x21c504, Func Offset: 0x14
	// Line 805, Address: 0x21c510, Func Offset: 0x20
	// Line 807, Address: 0x21c518, Func Offset: 0x28
	// Line 808, Address: 0x21c530, Func Offset: 0x40
	// Line 809, Address: 0x21c538, Func Offset: 0x48
	// Func End, Address: 0x21c548, Func Offset: 0x58
}

// 
// Start address: 0x21c550
void RoomOutSideCarDraw_Ambul01Light(CarWork* work)
{
	sfCharacter* light_chara;
	sgBone* bone;
	sgBone* lit_bone;
	int i;
	// Line 829, Address: 0x21c550, Func Offset: 0
	// Line 840, Address: 0x21c564, Func Offset: 0x14
	// Line 831, Address: 0x21c568, Func Offset: 0x18
	// Line 840, Address: 0x21c56c, Func Offset: 0x1c
	// Line 841, Address: 0x21c574, Func Offset: 0x24
	// Line 842, Address: 0x21c57c, Func Offset: 0x2c
	// Line 843, Address: 0x21c584, Func Offset: 0x34
	// Line 844, Address: 0x21c588, Func Offset: 0x38
	// Line 845, Address: 0x21c594, Func Offset: 0x44
	// Line 846, Address: 0x21c598, Func Offset: 0x48
	// Line 848, Address: 0x21c5ac, Func Offset: 0x5c
	// Line 849, Address: 0x21c5b8, Func Offset: 0x68
	// Line 850, Address: 0x21c5c4, Func Offset: 0x74
	// Line 851, Address: 0x21c5d4, Func Offset: 0x84
	// Line 852, Address: 0x21c5e4, Func Offset: 0x94
	// Line 853, Address: 0x21c5f0, Func Offset: 0xa0
	// Line 855, Address: 0x21c600, Func Offset: 0xb0
	// Line 856, Address: 0x21c608, Func Offset: 0xb8
	// Line 857, Address: 0x21c610, Func Offset: 0xc0
	// Line 858, Address: 0x21c618, Func Offset: 0xc8
	// Func End, Address: 0x21c62c, Func Offset: 0xdc
}

// 
// Start address: 0x21c630
float GetSize(float* v)
{
	float v0[4];
	float v1[4];
	float wvm[4][4];
	float vsm[4][4];
	float r;
	// Line 897, Address: 0x21c630, Func Offset: 0
	// Line 905, Address: 0x21c640, Func Offset: 0x10
	// Line 906, Address: 0x21c648, Func Offset: 0x18
	// Line 907, Address: 0x21c650, Func Offset: 0x20
	// Line 908, Address: 0x21c684, Func Offset: 0x54
	// Line 910, Address: 0x21c694, Func Offset: 0x64
	// Line 909, Address: 0x21c698, Func Offset: 0x68
	// Line 910, Address: 0x21c69c, Func Offset: 0x6c
	// Line 909, Address: 0x21c6a0, Func Offset: 0x70
	// Line 910, Address: 0x21c6a8, Func Offset: 0x78
	// Line 909, Address: 0x21c6ac, Func Offset: 0x7c
	// Line 910, Address: 0x21c6b4, Func Offset: 0x84
	// Line 911, Address: 0x21c6e8, Func Offset: 0xb8
	// Line 912, Address: 0x21c728, Func Offset: 0xf8
	// Line 914, Address: 0x21c72c, Func Offset: 0xfc
	// Line 912, Address: 0x21c730, Func Offset: 0x100
	// Line 914, Address: 0x21c734, Func Offset: 0x104
	// Line 912, Address: 0x21c738, Func Offset: 0x108
	// Line 914, Address: 0x21c73c, Func Offset: 0x10c
	// Func End, Address: 0x21c744, Func Offset: 0x114
}

// 
// Start address: 0x21c750
unsigned long GetTEX0()
{
	sgTexArc* tdata_addr;
	sgTexData* tex_head;
	sgClutData* clut_head;
	_anon7* tex;
	unsigned long tex0;
	unsigned int id;
	int cbp;
	// Line 917, Address: 0x21c750, Func Offset: 0
	// Line 927, Address: 0x21c758, Func Offset: 0x8
	// Line 928, Address: 0x21c760, Func Offset: 0x10
	// Line 929, Address: 0x21c770, Func Offset: 0x20
	// Line 930, Address: 0x21c77c, Func Offset: 0x2c
	// Line 931, Address: 0x21c784, Func Offset: 0x34
	// Line 932, Address: 0x21c78c, Func Offset: 0x3c
	// Line 933, Address: 0x21c79c, Func Offset: 0x4c
	// Line 934, Address: 0x21c7a4, Func Offset: 0x54
	// Line 935, Address: 0x21c7b4, Func Offset: 0x64
	// Line 934, Address: 0x21c7bc, Func Offset: 0x6c
	// Line 935, Address: 0x21c7c0, Func Offset: 0x70
	// Line 937, Address: 0x21c7d0, Func Offset: 0x80
	// Func End, Address: 0x21c7e0, Func Offset: 0x90
}

// 
// Start address: 0x21c7e0
void GetRect(float* c, float r, float vs[4])
{
	float dx;
	float dy;
	// Line 940, Address: 0x21c7e0, Func Offset: 0
	// Line 944, Address: 0x21c7fc, Func Offset: 0x1c
	// Line 946, Address: 0x21c808, Func Offset: 0x28
	// Line 947, Address: 0x21c810, Func Offset: 0x30
	// Line 948, Address: 0x21c81c, Func Offset: 0x3c
	// Line 949, Address: 0x21c828, Func Offset: 0x48
	// Line 950, Address: 0x21c830, Func Offset: 0x50
	// Line 951, Address: 0x21c83c, Func Offset: 0x5c
	// Line 952, Address: 0x21c848, Func Offset: 0x68
	// Func End, Address: 0x21c860, Func Offset: 0x80
}

// 
// Start address: 0x21c860
void RoomOutSideCarDraw_Siren(CarWork* work)
{
	sfCharacter* chara;
	float v[4];
	float sc[4];
	float pos[4];
	int* uv;
	sgBone* bone;
	int i;
	unsigned long* pk;
	unsigned long tex0;
	float wsm[4][4];
	sgBone base_bone;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	int timer;
	float s;
	float scs[4][4];
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	// Line 956, Address: 0x21c860, Func Offset: 0
	// Line 977, Address: 0x21c87c, Func Offset: 0x1c
	// Line 978, Address: 0x21c888, Func Offset: 0x28
	// Line 979, Address: 0x21c890, Func Offset: 0x30
	// Line 980, Address: 0x21c8a0, Func Offset: 0x40
	// Line 981, Address: 0x21c8a8, Func Offset: 0x48
	// Line 982, Address: 0x21c8b0, Func Offset: 0x50
	// Line 983, Address: 0x21c8b8, Func Offset: 0x58
	// Line 984, Address: 0x21c8c4, Func Offset: 0x64
	// Line 986, Address: 0x21c8d0, Func Offset: 0x70
	// Line 988, Address: 0x21c8d8, Func Offset: 0x78
	// Line 989, Address: 0x21c8dc, Func Offset: 0x7c
	// Line 990, Address: 0x21c8e0, Func Offset: 0x80
	// Line 992, Address: 0x21c8ec, Func Offset: 0x8c
	// Line 993, Address: 0x21c904, Func Offset: 0xa4
	// Line 994, Address: 0x21c90c, Func Offset: 0xac
	// Line 995, Address: 0x21c914, Func Offset: 0xb4
	// Line 997, Address: 0x21c920, Func Offset: 0xc0
	// Line 1000, Address: 0x21c924, Func Offset: 0xc4
	// Line 997, Address: 0x21c928, Func Offset: 0xc8
	// Line 1000, Address: 0x21c92c, Func Offset: 0xcc
	// Line 1002, Address: 0x21c930, Func Offset: 0xd0
	// Line 997, Address: 0x21c934, Func Offset: 0xd4
	// Line 998, Address: 0x21c93c, Func Offset: 0xdc
	// Line 999, Address: 0x21c944, Func Offset: 0xe4
	// Line 1000, Address: 0x21c948, Func Offset: 0xe8
	// Line 1001, Address: 0x21c94c, Func Offset: 0xec
	// Line 1002, Address: 0x21c950, Func Offset: 0xf0
	// Line 1003, Address: 0x21c954, Func Offset: 0xf4
	// Line 997, Address: 0x21c958, Func Offset: 0xf8
	// Line 1005, Address: 0x21c964, Func Offset: 0x104
	// Line 997, Address: 0x21c968, Func Offset: 0x108
	// Line 1002, Address: 0x21c96c, Func Offset: 0x10c
	// Line 997, Address: 0x21c970, Func Offset: 0x110
	// Line 998, Address: 0x21c974, Func Offset: 0x114
	// Line 997, Address: 0x21c978, Func Offset: 0x118
	// Line 1003, Address: 0x21c97c, Func Offset: 0x11c
	// Line 998, Address: 0x21c980, Func Offset: 0x120
	// Line 999, Address: 0x21c994, Func Offset: 0x134
	// Line 998, Address: 0x21c998, Func Offset: 0x138
	// Line 999, Address: 0x21c9a0, Func Offset: 0x140
	// Line 1000, Address: 0x21c9b4, Func Offset: 0x154
	// Line 999, Address: 0x21c9b8, Func Offset: 0x158
	// Line 1000, Address: 0x21c9c0, Func Offset: 0x160
	// Line 1001, Address: 0x21c9d4, Func Offset: 0x174
	// Line 1000, Address: 0x21c9d8, Func Offset: 0x178
	// Line 1001, Address: 0x21c9e0, Func Offset: 0x180
	// Line 1002, Address: 0x21c9f4, Func Offset: 0x194
	// Line 1001, Address: 0x21c9f8, Func Offset: 0x198
	// Line 1002, Address: 0x21ca00, Func Offset: 0x1a0
	// Line 1003, Address: 0x21ca14, Func Offset: 0x1b4
	// Line 1002, Address: 0x21ca18, Func Offset: 0x1b8
	// Line 1003, Address: 0x21ca20, Func Offset: 0x1c0
	// Line 1005, Address: 0x21ca38, Func Offset: 0x1d8
	// Line 1006, Address: 0x21ca40, Func Offset: 0x1e0
	// Line 1010, Address: 0x21ca4c, Func Offset: 0x1ec
	// Line 1011, Address: 0x21ca58, Func Offset: 0x1f8
	// Line 1012, Address: 0x21ca74, Func Offset: 0x214
	// Line 1014, Address: 0x21ca80, Func Offset: 0x220
	// Line 1015, Address: 0x21ca9c, Func Offset: 0x23c
	// Line 1016, Address: 0x21caa0, Func Offset: 0x240
	// Line 1017, Address: 0x21cae0, Func Offset: 0x280
	// Line 1018, Address: 0x21cb10, Func Offset: 0x2b0
	// Line 1019, Address: 0x21cb2c, Func Offset: 0x2cc
	// Line 1021, Address: 0x21cb60, Func Offset: 0x300
	// Line 1022, Address: 0x21cb68, Func Offset: 0x308
	// Line 1023, Address: 0x21cb80, Func Offset: 0x320
	// Line 1025, Address: 0x21cb8c, Func Offset: 0x32c
	// Line 1026, Address: 0x21cb94, Func Offset: 0x334
	// Line 1027, Address: 0x21cba0, Func Offset: 0x340
	// Line 1028, Address: 0x21cbac, Func Offset: 0x34c
	// Line 1030, Address: 0x21cbc0, Func Offset: 0x360
	// Line 1033, Address: 0x21cbd0, Func Offset: 0x370
	// Line 1034, Address: 0x21cbdc, Func Offset: 0x37c
	// Line 1035, Address: 0x21cbe0, Func Offset: 0x380
	// Line 1033, Address: 0x21cbe4, Func Offset: 0x384
	// Line 1034, Address: 0x21cbfc, Func Offset: 0x39c
	// Line 1033, Address: 0x21cc00, Func Offset: 0x3a0
	// Line 1034, Address: 0x21cc08, Func Offset: 0x3a8
	// Line 1035, Address: 0x21cc24, Func Offset: 0x3c4
	// Line 1034, Address: 0x21cc28, Func Offset: 0x3c8
	// Line 1035, Address: 0x21cc58, Func Offset: 0x3f8
	// Line 1036, Address: 0x21cc98, Func Offset: 0x438
	// Line 1035, Address: 0x21cc9c, Func Offset: 0x43c
	// Line 1036, Address: 0x21cca0, Func Offset: 0x440
	// Line 1037, Address: 0x21cca8, Func Offset: 0x448
	// Line 1036, Address: 0x21ccac, Func Offset: 0x44c
	// Line 1037, Address: 0x21ccc4, Func Offset: 0x464
	// Line 1036, Address: 0x21ccc8, Func Offset: 0x468
	// Line 1037, Address: 0x21ccf8, Func Offset: 0x498
	// Line 1039, Address: 0x21cd38, Func Offset: 0x4d8
	// Line 1037, Address: 0x21cd3c, Func Offset: 0x4dc
	// Line 1039, Address: 0x21cd40, Func Offset: 0x4e0
	// Line 1040, Address: 0x21cd5c, Func Offset: 0x4fc
	// Line 1041, Address: 0x21cd74, Func Offset: 0x514
	// Line 1043, Address: 0x21cd7c, Func Offset: 0x51c
	// Line 1044, Address: 0x21cd84, Func Offset: 0x524
	// Line 1045, Address: 0x21cd8c, Func Offset: 0x52c
	// Line 1046, Address: 0x21cda4, Func Offset: 0x544
	// Line 1048, Address: 0x21cdbc, Func Offset: 0x55c
	// Line 1049, Address: 0x21cdc4, Func Offset: 0x564
	// Func End, Address: 0x21cde4, Func Offset: 0x584
}

// 
// Start address: 0x21cdf0
void OutLightDraw1(_anon1* o_light)
{
	int light_no;
	int light_type;
	float wsm[4][4];
	float dz[4];
	float pos[4];
	float v[4];
	float sc[4];
	float scs[4][4];
	float s;
	int* uv;
	int a;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	// Line 1099, Address: 0x21cdf0, Func Offset: 0
	// Line 1100, Address: 0x21ce08, Func Offset: 0x18
	// Line 1101, Address: 0x21ce0c, Func Offset: 0x1c
	// Line 1113, Address: 0x21ce10, Func Offset: 0x20
	// Line 1114, Address: 0x21ce18, Func Offset: 0x28
	// Line 1115, Address: 0x21ce34, Func Offset: 0x44
	// Line 1116, Address: 0x21ce3c, Func Offset: 0x4c
	// Line 1117, Address: 0x21ce58, Func Offset: 0x68
	// Line 1118, Address: 0x21ce84, Func Offset: 0x94
	// Line 1119, Address: 0x21ceb0, Func Offset: 0xc0
	// Line 1120, Address: 0x21ced0, Func Offset: 0xe0
	// Line 1121, Address: 0x21cf10, Func Offset: 0x120
	// Line 1122, Address: 0x21cf48, Func Offset: 0x158
	// Line 1123, Address: 0x21cf70, Func Offset: 0x180
	// Line 1124, Address: 0x21cfb0, Func Offset: 0x1c0
	// Line 1125, Address: 0x21cfb8, Func Offset: 0x1c8
	// Line 1126, Address: 0x21cfbc, Func Offset: 0x1cc
	// Line 1125, Address: 0x21cfcc, Func Offset: 0x1dc
	// Line 1126, Address: 0x21cfd0, Func Offset: 0x1e0
	// Line 1127, Address: 0x21cfd8, Func Offset: 0x1e8
	// Line 1128, Address: 0x21cfe4, Func Offset: 0x1f4
	// Line 1129, Address: 0x21cfe8, Func Offset: 0x1f8
	// Line 1130, Address: 0x21d000, Func Offset: 0x210
	// Line 1131, Address: 0x21d014, Func Offset: 0x224
	// Line 1132, Address: 0x21d018, Func Offset: 0x228
	// Line 1135, Address: 0x21d030, Func Offset: 0x240
	// Line 1132, Address: 0x21d034, Func Offset: 0x244
	// Line 1133, Address: 0x21d044, Func Offset: 0x254
	// Line 1132, Address: 0x21d048, Func Offset: 0x258
	// Line 1134, Address: 0x21d04c, Func Offset: 0x25c
	// Line 1132, Address: 0x21d050, Func Offset: 0x260
	// Line 1133, Address: 0x21d060, Func Offset: 0x270
	// Line 1132, Address: 0x21d064, Func Offset: 0x274
	// Line 1133, Address: 0x21d06c, Func Offset: 0x27c
	// Line 1134, Address: 0x21d088, Func Offset: 0x298
	// Line 1133, Address: 0x21d08c, Func Offset: 0x29c
	// Line 1134, Address: 0x21d094, Func Offset: 0x2a4
	// Line 1135, Address: 0x21d0b0, Func Offset: 0x2c0
	// Line 1134, Address: 0x21d0b4, Func Offset: 0x2c4
	// Line 1135, Address: 0x21d0e4, Func Offset: 0x2f4
	// Line 1136, Address: 0x21d124, Func Offset: 0x334
	// Line 1135, Address: 0x21d128, Func Offset: 0x338
	// Line 1136, Address: 0x21d12c, Func Offset: 0x33c
	// Line 1137, Address: 0x21d134, Func Offset: 0x344
	// Line 1136, Address: 0x21d138, Func Offset: 0x348
	// Line 1137, Address: 0x21d150, Func Offset: 0x360
	// Line 1136, Address: 0x21d154, Func Offset: 0x364
	// Line 1137, Address: 0x21d184, Func Offset: 0x394
	// Line 1138, Address: 0x21d1c8, Func Offset: 0x3d8
	// Func End, Address: 0x21d1e0, Func Offset: 0x3f0
}

// 
// Start address: 0x21d1e0
void OutSideLights(sfObj* obj)
{
	_anon1* light;
	int i;
	// Line 1142, Address: 0x21d1e0, Func Offset: 0
	// Line 1146, Address: 0x21d1e4, Func Offset: 0x4
	// Line 1142, Address: 0x21d1e8, Func Offset: 0x8
	// Line 1146, Address: 0x21d200, Func Offset: 0x20
	// Line 1147, Address: 0x21d21c, Func Offset: 0x3c
	// Line 1148, Address: 0x21d220, Func Offset: 0x40
	// Line 1149, Address: 0x21d224, Func Offset: 0x44
	// Line 1150, Address: 0x21d230, Func Offset: 0x50
	// Line 1152, Address: 0x21d234, Func Offset: 0x54
	// Line 1153, Address: 0x21d25c, Func Offset: 0x7c
	// Line 1155, Address: 0x21d274, Func Offset: 0x94
	// Line 1157, Address: 0x21d27c, Func Offset: 0x9c
	// Line 1155, Address: 0x21d280, Func Offset: 0xa0
	// Line 1157, Address: 0x21d284, Func Offset: 0xa4
	// Line 1158, Address: 0x21d290, Func Offset: 0xb0
	// Line 1162, Address: 0x21d29c, Func Offset: 0xbc
	// Line 1163, Address: 0x21d2a0, Func Offset: 0xc0
	// Func End, Address: 0x21d2bc, Func Offset: 0xdc
}

// 
// Start address: 0x21d2c0
void OutSideLightsDraw(sfObj* obj)
{
	_anon1* light;
	unsigned long tex0;
	sgTexArc* tdata_addr;
	sgTexData* tex_head;
	sgClutData* clut_head;
	_anon7* tex;
	unsigned long* pk;
	unsigned int id;
	int cbp;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	// Line 1167, Address: 0x21d2c0, Func Offset: 0
	// Line 1179, Address: 0x21d2c4, Func Offset: 0x4
	// Line 1167, Address: 0x21d2c8, Func Offset: 0x8
	// Line 1179, Address: 0x21d2d8, Func Offset: 0x18
	// Line 1180, Address: 0x21d2e8, Func Offset: 0x28
	// Line 1181, Address: 0x21d2f4, Func Offset: 0x34
	// Line 1182, Address: 0x21d2fc, Func Offset: 0x3c
	// Line 1183, Address: 0x21d304, Func Offset: 0x44
	// Line 1184, Address: 0x21d314, Func Offset: 0x54
	// Line 1185, Address: 0x21d31c, Func Offset: 0x5c
	// Line 1186, Address: 0x21d32c, Func Offset: 0x6c
	// Line 1185, Address: 0x21d334, Func Offset: 0x74
	// Line 1186, Address: 0x21d338, Func Offset: 0x78
	// Line 1188, Address: 0x21d34c, Func Offset: 0x8c
	// Line 1189, Address: 0x21d364, Func Offset: 0xa4
	// Line 1190, Address: 0x21d36c, Func Offset: 0xac
	// Line 1191, Address: 0x21d374, Func Offset: 0xb4
	// Line 1193, Address: 0x21d380, Func Offset: 0xc0
	// Line 1195, Address: 0x21d384, Func Offset: 0xc4
	// Line 1193, Address: 0x21d388, Func Offset: 0xc8
	// Line 1195, Address: 0x21d38c, Func Offset: 0xcc
	// Line 1196, Address: 0x21d390, Func Offset: 0xd0
	// Line 1193, Address: 0x21d394, Func Offset: 0xd4
	// Line 1196, Address: 0x21d398, Func Offset: 0xd8
	// Line 1193, Address: 0x21d39c, Func Offset: 0xdc
	// Line 1196, Address: 0x21d3a0, Func Offset: 0xe0
	// Line 1194, Address: 0x21d3a4, Func Offset: 0xe4
	// Line 1196, Address: 0x21d3a8, Func Offset: 0xe8
	// Line 1195, Address: 0x21d3ac, Func Offset: 0xec
	// Line 1196, Address: 0x21d3b0, Func Offset: 0xf0
	// Line 1193, Address: 0x21d3b8, Func Offset: 0xf8
	// Line 1197, Address: 0x21d3c4, Func Offset: 0x104
	// Line 1193, Address: 0x21d3c8, Func Offset: 0x108
	// Line 1194, Address: 0x21d3cc, Func Offset: 0x10c
	// Line 1193, Address: 0x21d3d0, Func Offset: 0x110
	// Line 1198, Address: 0x21d3d4, Func Offset: 0x114
	// Line 1194, Address: 0x21d3d8, Func Offset: 0x118
	// Line 1198, Address: 0x21d3dc, Func Offset: 0x11c
	// Line 1194, Address: 0x21d3e0, Func Offset: 0x120
	// Line 1195, Address: 0x21d3f0, Func Offset: 0x130
	// Line 1194, Address: 0x21d3f4, Func Offset: 0x134
	// Line 1195, Address: 0x21d3f8, Func Offset: 0x138
	// Line 1196, Address: 0x21d40c, Func Offset: 0x14c
	// Line 1195, Address: 0x21d410, Func Offset: 0x150
	// Line 1196, Address: 0x21d414, Func Offset: 0x154
	// Line 1197, Address: 0x21d428, Func Offset: 0x168
	// Line 1196, Address: 0x21d42c, Func Offset: 0x16c
	// Line 1197, Address: 0x21d430, Func Offset: 0x170
	// Line 1198, Address: 0x21d444, Func Offset: 0x184
	// Line 1197, Address: 0x21d448, Func Offset: 0x188
	// Line 1198, Address: 0x21d44c, Func Offset: 0x18c
	// Line 1200, Address: 0x21d464, Func Offset: 0x1a4
	// Line 1201, Address: 0x21d468, Func Offset: 0x1a8
	// Line 1202, Address: 0x21d478, Func Offset: 0x1b8
	// Line 1203, Address: 0x21d484, Func Offset: 0x1c4
	// Line 1204, Address: 0x21d488, Func Offset: 0x1c8
	// Line 1206, Address: 0x21d498, Func Offset: 0x1d8
	// Line 1208, Address: 0x21d4a0, Func Offset: 0x1e0
	// Line 1209, Address: 0x21d4a8, Func Offset: 0x1e8
	// Line 1210, Address: 0x21d4b0, Func Offset: 0x1f0
	// Line 1211, Address: 0x21d4c8, Func Offset: 0x208
	// Line 1212, Address: 0x21d4e0, Func Offset: 0x220
	// Func End, Address: 0x21d4f8, Func Offset: 0x238
}

// 
// Start address: 0x21d500
sfCharacter* RoomOutSideCarCreateAmbulance()
{
	sfObj* optr;
	// Line 1240, Address: 0x21d500, Func Offset: 0
	// Line 1245, Address: 0x21d508, Func Offset: 0x8
	// Line 1246, Address: 0x21d510, Func Offset: 0x10
	// Line 1247, Address: 0x21d518, Func Offset: 0x18
	// Line 1248, Address: 0x21d520, Func Offset: 0x20
	// Line 1250, Address: 0x21d524, Func Offset: 0x24
	// Line 1251, Address: 0x21d528, Func Offset: 0x28
	// Func End, Address: 0x21d534, Func Offset: 0x34
}

