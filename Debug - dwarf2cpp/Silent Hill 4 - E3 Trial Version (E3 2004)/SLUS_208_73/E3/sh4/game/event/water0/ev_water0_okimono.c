typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct sfObj;
typedef struct _anon6;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sgIKHandle;
typedef struct sgBone;
typedef struct _anon7;
typedef struct sfOffsetAABB;
typedef union sfCldBody;
typedef struct _anon8;
typedef struct _anon9;
typedef struct _anon10;
typedef struct _anon11;
typedef struct sfCldPart;
typedef struct _anon12;
typedef struct EventFlag;
typedef struct _anon13;
typedef struct sgAnime;
typedef union _anon14;
typedef struct sfCharacter;
typedef struct _anon15;
typedef struct sgSVModel;
typedef struct _anon16;

typedef void(*type_1)(_anon4*, int, int, float*);
typedef sgIKSolveResult(*type_6)();
typedef void(*type_17)(sgAnime*, int);
typedef void(*type_19)(sfObj*);
typedef void(*type_24)(sfObj*);

typedef float type_0[4];
typedef float type_2[4];
typedef float type_3[4][4];
typedef _anon14 type_4[10];
typedef float type_5[4][2];
typedef float type_7[4][24];
typedef float type_8[4];
typedef unsigned char type_9[3];
typedef unsigned int type_10[3];
typedef unsigned char type_11[320];
typedef void* type_12[4];
typedef _anon6 type_13[4];
typedef short type_14[2];
typedef _anon14 type_15[256];
typedef unsigned short type_16[2];
typedef char type_18[4];
typedef unsigned char type_20[4];
typedef float type_21[1];
typedef int type_22[1];
typedef unsigned char type_23[4];

struct _anon0
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
	_anon14 dmy[10];
};

struct _anon1
{
	int n_polygons;
	int polygons_offset;
};

struct _anon2
{
	sfCharacter chara;
	unsigned int timer;
};

struct _anon3
{
	sfCharacter chara;
};

struct _anon4
{
	unsigned long tex0;
	unsigned long clamp;
};

struct _anon5
{
	sfCharacter chara;
	unsigned int timer;
};

struct sfObj
{
	_anon14 fwork[256];
	_anon14* work;
	void(*func)(sfObj*);
	_anon14* work_pt0;
	_anon14* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon14* sys_work;
	_anon14* scene_work;
	_anon14* event_work;
	_anon14* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct _anon6
{
	sfCldPart cld_part;
	sgBone bone;
	_anon1 pool;
	float poly[4][24];
	int map_hit_id;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
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

struct _anon7
{
	float start[4];
	float end[4];
};

struct sfOffsetAABB
{
	_anon11 aabb;
	float offset[4];
};

union sfCldBody
{
	_anon12 obb;
	_anon11 aabb;
	sfOffsetAABB offset_aabb;
	_anon7 line;
	_anon9 sphere;
};

struct _anon8
{
	sfCharacter chara;
	unsigned int timer;
};

struct _anon9
{
	float center[4];
	float radius;
};

struct _anon10
{
	_anon15 emmodel;
	float rot_q[4];
	sgBone bone;
	float rot_y;
};

struct _anon11
{
	float bmin[4];
	float bmax[4];
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

struct _anon12
{
	float mat[4][4];
	float half_w[4];
};

struct EventFlag
{
	unsigned char flag[320];
};

struct _anon13
{
	_anon15 emmodel;
	sgBone bone;
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

union _anon14
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

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon16 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

struct _anon15
{
	void* texture_normal;
	void* texture_global;
	void* texture_semitrans;
	void* model_data;
	sgBone* parent_bone;
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct _anon16
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

float sg_matrix_unit[4][4];
float sg_vector_unit_y[4];
_anon6 pipe_hit_wk[4];
EventFlag event_flag;

void pipe_hit_construct(_anon6* phit);
void pipe_hit_pos_set(_anon6* phit, float* pos, float rot);
void pipe_hit_destruct(_anon6* phit);
void PipeHitWorkClear(_anon6* wk, int num);
void pipe_init(sfObj* obj, int floor);
int ev_mz_pipe_exec();
int ev_mz_pipe_draw(sfObj* obj);
int ev_mz_pipe_end(sfObj* obj);
int ev_mz01_pipe_init(sfObj* obj);
int ev_mz11_pipe_init(sfObj* obj);
int ev_mz21_pipe_init(sfObj* obj);
float get_rot_speed();
int ev_mz32_water_turbine_init(sfObj* obj);
int ev_mz32_water_turbine_exec(sfObj* obj);
int ev_mz32_water_turbine_draw(sfObj* obj);
int ev_mz32_water_turbine_end(sfObj* obj);
void axis_init(sfObj* obj, unsigned int mdl_id, unsigned int emt_id);
int ev_mz41_axis_init(sfObj* obj);
int ev_mz42_axis_init(sfObj* obj);
int ev_mz_axis_exec(sfObj* obj);
int ev_mz_axis_draw(sfObj* obj);
int ev_mz_axis_end(sfObj* obj);
int ev_mz33_valve_init(sfObj* obj);
int ev_mz33_cover_init(sfObj* obj);
int ev_mz33_cover_exec(sfObj* obj);
int ev_mz33_valve_exec(sfObj* obj);
int ev_mz33_draw();
int ev_mz33_end(sfObj* obj);
void ladder_init(sfObj* obj, unsigned int mdl_id, unsigned int emt_id);
int ev_mz03_ladder_init(sfObj* obj);
int ev_mz13_ladder_init(sfObj* obj);
int ev_mz_ladder_exec();
int ev_mz_ladder_draw(sfObj* obj);
int ev_mz_ladder_end(sfObj* obj);
void ladder_shadow_init(sfObj* obj, unsigned int mdl_id, unsigned int svm_id);
int ev_mz03_ladder_shadow_init(sfObj* obj);
int ev_mz13_ladder_shadow_init(sfObj* obj);
int ev_mz_ladder_shadow_exec(sfObj* obj);
int ev_mz_ladder_shadow_draw();
int ev_mz_ladder_shadow_end(sfObj* obj);
void mz01_door_init(sfObj* obj);
void mz01_door_exec();
void mz01_door_draw();
void mz01_door_end(sfObj* obj);

// 
// Start address: 0x1ed8070
void pipe_hit_construct(_anon6* phit)
{
	sfCldBody* body;
	float obb_xyz[4];
	// Line 1173, Address: 0x1ed8070, Func Offset: 0
	// Line 1177, Address: 0x1ed8074, Func Offset: 0x4
	// Line 1173, Address: 0x1ed8078, Func Offset: 0x8
	// Line 1177, Address: 0x1ed807c, Func Offset: 0xc
	// Line 1179, Address: 0x1ed809c, Func Offset: 0x2c
	// Line 1180, Address: 0x1ed80a4, Func Offset: 0x34
	// Line 1181, Address: 0x1ed80a8, Func Offset: 0x38
	// Line 1183, Address: 0x1ed80b0, Func Offset: 0x40
	// Func End, Address: 0x1ed80bc, Func Offset: 0x4c
	// Line 123, Address: 0x1ed8070, Func Offset: 0
	// Line 127, Address: 0x1ed8074, Func Offset: 0x4
	// Line 123, Address: 0x1ed8078, Func Offset: 0x8
	// Line 127, Address: 0x1ed807c, Func Offset: 0xc
	// Line 123, Address: 0x1ed8080, Func Offset: 0x10
	// Line 127, Address: 0x1ed8084, Func Offset: 0x14
	// Line 128, Address: 0x1ed808c, Func Offset: 0x1c
	// Line 129, Address: 0x1ed8090, Func Offset: 0x20
	// Line 130, Address: 0x1ed809c, Func Offset: 0x2c
	// Line 131, Address: 0x1ed80a8, Func Offset: 0x38
	// Line 132, Address: 0x1ed80b8, Func Offset: 0x48
	// Line 133, Address: 0x1ed80d0, Func Offset: 0x60
	// Line 134, Address: 0x1ed80d8, Func Offset: 0x68
	// Line 135, Address: 0x1ed8100, Func Offset: 0x90
	// Line 136, Address: 0x1ed8114, Func Offset: 0xa4
	// Line 138, Address: 0x1ed8118, Func Offset: 0xa8
	// Line 139, Address: 0x1ed812c, Func Offset: 0xbc
	// Func End, Address: 0x1ed813c, Func Offset: 0xcc
}

// 
// Start address: 0x1ed8140
void pipe_hit_pos_set(_anon6* phit, float* pos, float rot)
{
	float r[4];
	// Line 143, Address: 0x1ed8140, Func Offset: 0
	// Line 147, Address: 0x1ed8158, Func Offset: 0x18
	// Line 148, Address: 0x1ed8160, Func Offset: 0x20
	// Line 149, Address: 0x1ed8174, Func Offset: 0x34
	// Line 151, Address: 0x1ed8180, Func Offset: 0x40
	// Line 154, Address: 0x1ed8188, Func Offset: 0x48
	// Line 155, Address: 0x1ed8194, Func Offset: 0x54
	// Line 156, Address: 0x1ed819c, Func Offset: 0x5c
	// Line 157, Address: 0x1ed81a4, Func Offset: 0x64
	// Line 159, Address: 0x1ed81bc, Func Offset: 0x7c
	// Line 160, Address: 0x1ed81c0, Func Offset: 0x80
	// Func End, Address: 0x1ed81d4, Func Offset: 0x94
}

// 
// Start address: 0x1ed81e0
void pipe_hit_destruct(_anon6* phit)
{
	// Line 179, Address: 0x1ed81e0, Func Offset: 0
	// Line 180, Address: 0x1ed81ec, Func Offset: 0xc
	// Line 181, Address: 0x1ed81f4, Func Offset: 0x14
	// Line 182, Address: 0x1ed81fc, Func Offset: 0x1c
	// Line 183, Address: 0x1ed8200, Func Offset: 0x20
	// Func End, Address: 0x1ed820c, Func Offset: 0x2c
}

// 
// Start address: 0x1ed8210
void PipeHitWorkClear(_anon6* wk, int num)
{
	int i;
	// Line 187, Address: 0x1ed8210, Func Offset: 0
	// Line 189, Address: 0x1ed822c, Func Offset: 0x1c
	// Line 190, Address: 0x1ed8238, Func Offset: 0x28
	// Line 191, Address: 0x1ed8248, Func Offset: 0x38
	// Line 193, Address: 0x1ed824c, Func Offset: 0x3c
	// Line 191, Address: 0x1ed8250, Func Offset: 0x40
	// Line 193, Address: 0x1ed8254, Func Offset: 0x44
	// Line 194, Address: 0x1ed8260, Func Offset: 0x50
	// Func End, Address: 0x1ed8278, Func Offset: 0x68
}

// 
// Start address: 0x1ed8280
void pipe_init(sfObj* obj, int floor)
{
	int index;
	int rot_n;
	int i;
	int cnt;
	_anon10* wk;
	float r[4];
	unsigned int emb;
	float pipe_pos[4];
	unsigned int pipe_emb[3];
	// Line 200, Address: 0x1ed8280, Func Offset: 0
	// Line 211, Address: 0x1ed8284, Func Offset: 0x4
	// Line 200, Address: 0x1ed8288, Func Offset: 0x8
	// Line 211, Address: 0x1ed82a0, Func Offset: 0x20
	// Line 212, Address: 0x1ed82bc, Func Offset: 0x3c
	// Line 213, Address: 0x1ed82c8, Func Offset: 0x48
	// Line 214, Address: 0x1ed82d0, Func Offset: 0x50
	// Line 215, Address: 0x1ed82d4, Func Offset: 0x54
	// Line 217, Address: 0x1ed82d8, Func Offset: 0x58
	// Line 218, Address: 0x1ed82ec, Func Offset: 0x6c
	// Line 222, Address: 0x1ed82f4, Func Offset: 0x74
	// Line 224, Address: 0x1ed8308, Func Offset: 0x88
	// Line 225, Address: 0x1ed8310, Func Offset: 0x90
	// Line 227, Address: 0x1ed8324, Func Offset: 0xa4
	// Line 229, Address: 0x1ed833c, Func Offset: 0xbc
	// Line 232, Address: 0x1ed8348, Func Offset: 0xc8
	// Line 234, Address: 0x1ed8350, Func Offset: 0xd0
	// Line 235, Address: 0x1ed8358, Func Offset: 0xd8
	// Line 236, Address: 0x1ed837c, Func Offset: 0xfc
	// Line 239, Address: 0x1ed8380, Func Offset: 0x100
	// Line 242, Address: 0x1ed8394, Func Offset: 0x114
	// Line 243, Address: 0x1ed839c, Func Offset: 0x11c
	// Line 244, Address: 0x1ed83a8, Func Offset: 0x128
	// Line 247, Address: 0x1ed83ac, Func Offset: 0x12c
	// Line 244, Address: 0x1ed83b4, Func Offset: 0x134
	// Line 247, Address: 0x1ed83b8, Func Offset: 0x138
	// Line 249, Address: 0x1ed83c0, Func Offset: 0x140
	// Line 248, Address: 0x1ed83c4, Func Offset: 0x144
	// Line 249, Address: 0x1ed83c8, Func Offset: 0x148
	// Line 250, Address: 0x1ed83d0, Func Offset: 0x150
	// Line 251, Address: 0x1ed83e4, Func Offset: 0x164
	// Line 256, Address: 0x1ed83ec, Func Offset: 0x16c
	// Line 257, Address: 0x1ed83f4, Func Offset: 0x174
	// Line 258, Address: 0x1ed8400, Func Offset: 0x180
	// Line 259, Address: 0x1ed841c, Func Offset: 0x19c
	// Line 262, Address: 0x1ed8420, Func Offset: 0x1a0
	// Line 264, Address: 0x1ed8430, Func Offset: 0x1b0
	// Func End, Address: 0x1ed844c, Func Offset: 0x1cc
}

// 
// Start address: 0x1ed8450
int ev_mz_pipe_exec()
{
	// Line 625, Address: 0x1ed8450, Func Offset: 0
	// Func End, Address: 0x1ed8458, Func Offset: 0x8
	// Line 272, Address: 0x1ed8450, Func Offset: 0
	// Func End, Address: 0x1ed8458, Func Offset: 0x8
}

// 
// Start address: 0x1ed8460
int ev_mz_pipe_draw(sfObj* obj)
{
	// Line 630, Address: 0x1ed8460, Func Offset: 0
	// Line 633, Address: 0x1ed8464, Func Offset: 0x4
	// Line 630, Address: 0x1ed8468, Func Offset: 0x8
	// Line 633, Address: 0x1ed8470, Func Offset: 0x10
	// Line 634, Address: 0x1ed8484, Func Offset: 0x24
	// Line 636, Address: 0x1ed8488, Func Offset: 0x28
	// Line 637, Address: 0x1ed848c, Func Offset: 0x2c
	// Func End, Address: 0x1ed849c, Func Offset: 0x3c
	// Line 1318, Address: 0x1ed8460, Func Offset: 0
	// Line 1320, Address: 0x1ed8468, Func Offset: 0x8
	// Line 1322, Address: 0x1ed8470, Func Offset: 0x10
	// Line 1323, Address: 0x1ed8484, Func Offset: 0x24
	// Line 1324, Address: 0x1ed8494, Func Offset: 0x34
	// Line 1327, Address: 0x1ed8498, Func Offset: 0x38
	// Line 1326, Address: 0x1ed849c, Func Offset: 0x3c
	// Line 1327, Address: 0x1ed84a0, Func Offset: 0x40
	// Func End, Address: 0x1ed84a8, Func Offset: 0x48
	// Line 278, Address: 0x1ed8460, Func Offset: 0
	// Line 279, Address: 0x1ed846c, Func Offset: 0xc
	// Line 282, Address: 0x1ed8474, Func Offset: 0x14
	// Line 283, Address: 0x1ed847c, Func Offset: 0x1c
	// Line 286, Address: 0x1ed8480, Func Offset: 0x20
	// Line 285, Address: 0x1ed8484, Func Offset: 0x24
	// Line 286, Address: 0x1ed8488, Func Offset: 0x28
	// Func End, Address: 0x1ed8490, Func Offset: 0x30
}

// 
// Start address: 0x1ed8490
int ev_mz_pipe_end(sfObj* obj)
{
	int i;
	_anon6* phit;
	// Line 292, Address: 0x1ed8490, Func Offset: 0
	// Line 293, Address: 0x1ed84a4, Func Offset: 0x14
	// Line 296, Address: 0x1ed84ac, Func Offset: 0x1c
	// Line 298, Address: 0x1ed84b0, Func Offset: 0x20
	// Line 299, Address: 0x1ed84bc, Func Offset: 0x2c
	// Line 300, Address: 0x1ed84c0, Func Offset: 0x30
	// Line 302, Address: 0x1ed84c8, Func Offset: 0x38
	// Line 301, Address: 0x1ed84cc, Func Offset: 0x3c
	// Line 302, Address: 0x1ed84d0, Func Offset: 0x40
	// Line 303, Address: 0x1ed84dc, Func Offset: 0x4c
	// Line 306, Address: 0x1ed84e0, Func Offset: 0x50
	// Line 305, Address: 0x1ed84e8, Func Offset: 0x58
	// Line 306, Address: 0x1ed84ec, Func Offset: 0x5c
	// Func End, Address: 0x1ed84f8, Func Offset: 0x68
}

// 
// Start address: 0x1ed8500
int ev_mz01_pipe_init(sfObj* obj)
{
	// Line 662, Address: 0x1ed8500, Func Offset: 0
	// Line 671, Address: 0x1ed8504, Func Offset: 0x4
	// Line 662, Address: 0x1ed8508, Func Offset: 0x8
	// Line 671, Address: 0x1ed8510, Func Offset: 0x10
	// Line 672, Address: 0x1ed8524, Func Offset: 0x24
	// Line 674, Address: 0x1ed8528, Func Offset: 0x28
	// Line 675, Address: 0x1ed852c, Func Offset: 0x2c
	// Func End, Address: 0x1ed853c, Func Offset: 0x3c
	// Line 1391, Address: 0x1ed8500, Func Offset: 0
	// Line 1394, Address: 0x1ed8508, Func Offset: 0x8
	// Line 1396, Address: 0x1ed8514, Func Offset: 0x14
	// Line 1397, Address: 0x1ed851c, Func Offset: 0x1c
	// Line 1398, Address: 0x1ed8524, Func Offset: 0x24
	// Line 1400, Address: 0x1ed8528, Func Offset: 0x28
	// Line 1401, Address: 0x1ed852c, Func Offset: 0x2c
	// Func End, Address: 0x1ed853c, Func Offset: 0x3c
	// Line 312, Address: 0x1ed8500, Func Offset: 0
	// Line 313, Address: 0x1ed8508, Func Offset: 0x8
	// Line 315, Address: 0x1ed8510, Func Offset: 0x10
	// Line 314, Address: 0x1ed8514, Func Offset: 0x14
	// Line 315, Address: 0x1ed8518, Func Offset: 0x18
	// Func End, Address: 0x1ed8520, Func Offset: 0x20
}

// 
// Start address: 0x1ed8520
int ev_mz11_pipe_init(sfObj* obj)
{
	// Line 321, Address: 0x1ed8520, Func Offset: 0
	// Line 322, Address: 0x1ed8528, Func Offset: 0x8
	// Line 324, Address: 0x1ed8530, Func Offset: 0x10
	// Line 323, Address: 0x1ed8534, Func Offset: 0x14
	// Line 324, Address: 0x1ed8538, Func Offset: 0x18
	// Func End, Address: 0x1ed8540, Func Offset: 0x20
}

// 
// Start address: 0x1ed8540
int ev_mz21_pipe_init(sfObj* obj)
{
	// Line 679, Address: 0x1ed8540, Func Offset: 0
	// Func End, Address: 0x1ed8548, Func Offset: 0x8
	// Line 1427, Address: 0x1ed8540, Func Offset: 0
	// Line 1428, Address: 0x1ed854c, Func Offset: 0xc
	// Line 1430, Address: 0x1ed8554, Func Offset: 0x14
	// Line 1431, Address: 0x1ed855c, Func Offset: 0x1c
	// Func End, Address: 0x1ed856c, Func Offset: 0x2c
	// Line 330, Address: 0x1ed8540, Func Offset: 0
	// Line 331, Address: 0x1ed8548, Func Offset: 0x8
	// Line 333, Address: 0x1ed8550, Func Offset: 0x10
	// Line 332, Address: 0x1ed8554, Func Offset: 0x14
	// Line 333, Address: 0x1ed8558, Func Offset: 0x18
	// Func End, Address: 0x1ed8560, Func Offset: 0x20
}

// 
// Start address: 0x1ed8560
float get_rot_speed()
{
	float rot_s;
	int is_pos0_flow;
	int is_pos2_flow;
	// Line 341, Address: 0x1ed8560, Func Offset: 0
	// Line 346, Address: 0x1ed8564, Func Offset: 0x4
	// Line 341, Address: 0x1ed8568, Func Offset: 0x8
	// Line 345, Address: 0x1ed8574, Func Offset: 0x14
	// Line 346, Address: 0x1ed8578, Func Offset: 0x18
	// Line 347, Address: 0x1ed8584, Func Offset: 0x24
	// Line 358, Address: 0x1ed8590, Func Offset: 0x30
	// Line 359, Address: 0x1ed85a4, Func Offset: 0x44
	// Line 360, Address: 0x1ed85b0, Func Offset: 0x50
	// Line 361, Address: 0x1ed85b8, Func Offset: 0x58
	// Line 365, Address: 0x1ed85cc, Func Offset: 0x6c
	// Line 366, Address: 0x1ed85e8, Func Offset: 0x88
	// Line 367, Address: 0x1ed85f0, Func Offset: 0x90
	// Line 368, Address: 0x1ed8600, Func Offset: 0xa0
	// Line 369, Address: 0x1ed860c, Func Offset: 0xac
	// Line 372, Address: 0x1ed8610, Func Offset: 0xb0
	// Line 371, Address: 0x1ed8614, Func Offset: 0xb4
	// Line 372, Address: 0x1ed8618, Func Offset: 0xb8
	// Func End, Address: 0x1ed8628, Func Offset: 0xc8
}

// 
// Start address: 0x1ed8630
int ev_mz32_water_turbine_init(sfObj* obj)
{
	_anon0* fig;
	_anon8* tb;
	float pos[4];
	float ang;
	// Line 375, Address: 0x1ed8630, Func Offset: 0
	// Line 376, Address: 0x1ed8634, Func Offset: 0x4
	// Line 375, Address: 0x1ed8638, Func Offset: 0x8
	// Line 376, Address: 0x1ed864c, Func Offset: 0x1c
	// Line 377, Address: 0x1ed8658, Func Offset: 0x28
	// Line 378, Address: 0x1ed8664, Func Offset: 0x34
	// Line 379, Address: 0x1ed866c, Func Offset: 0x3c
	// Line 378, Address: 0x1ed8670, Func Offset: 0x40
	// Line 382, Address: 0x1ed8674, Func Offset: 0x44
	// Line 385, Address: 0x1ed86a0, Func Offset: 0x70
	// Line 389, Address: 0x1ed86a4, Func Offset: 0x74
	// Line 385, Address: 0x1ed86ac, Func Offset: 0x7c
	// Line 386, Address: 0x1ed86b0, Func Offset: 0x80
	// Line 387, Address: 0x1ed86b8, Func Offset: 0x88
	// Line 389, Address: 0x1ed86c0, Func Offset: 0x90
	// Line 395, Address: 0x1ed86c8, Func Offset: 0x98
	// Line 396, Address: 0x1ed86d8, Func Offset: 0xa8
	// Line 399, Address: 0x1ed86e0, Func Offset: 0xb0
	// Line 396, Address: 0x1ed86f8, Func Offset: 0xc8
	// Line 399, Address: 0x1ed86fc, Func Offset: 0xcc
	// Line 400, Address: 0x1ed8704, Func Offset: 0xd4
	// Line 405, Address: 0x1ed8710, Func Offset: 0xe0
	// Line 404, Address: 0x1ed8720, Func Offset: 0xf0
	// Line 405, Address: 0x1ed8724, Func Offset: 0xf4
	// Func End, Address: 0x1ed8730, Func Offset: 0x100
}

// 
// Start address: 0x1ed8730
int ev_mz32_water_turbine_exec(sfObj* obj)
{
	_anon8* tb;
	float axis[4];
	float r[4];
	float rot[4];
	float speed;
	_anon0* fig;
	float pos[4];
	float ang;
	// Line 408, Address: 0x1ed8730, Func Offset: 0
	// Line 409, Address: 0x1ed8748, Func Offset: 0x18
	// Line 411, Address: 0x1ed8750, Func Offset: 0x20
	// Line 413, Address: 0x1ed8760, Func Offset: 0x30
	// Line 415, Address: 0x1ed876c, Func Offset: 0x3c
	// Line 418, Address: 0x1ed8778, Func Offset: 0x48
	// Line 419, Address: 0x1ed8788, Func Offset: 0x58
	// Line 420, Address: 0x1ed8798, Func Offset: 0x68
	// Line 422, Address: 0x1ed87a4, Func Offset: 0x74
	// Line 425, Address: 0x1ed87b0, Func Offset: 0x80
	// Line 429, Address: 0x1ed87b8, Func Offset: 0x88
	// Line 434, Address: 0x1ed87bc, Func Offset: 0x8c
	// Line 429, Address: 0x1ed87c0, Func Offset: 0x90
	// Line 430, Address: 0x1ed87c4, Func Offset: 0x94
	// Line 431, Address: 0x1ed87cc, Func Offset: 0x9c
	// Line 434, Address: 0x1ed87d4, Func Offset: 0xa4
	// Line 435, Address: 0x1ed87dc, Func Offset: 0xac
	// Line 440, Address: 0x1ed87e8, Func Offset: 0xb8
	// Line 439, Address: 0x1ed87f8, Func Offset: 0xc8
	// Line 440, Address: 0x1ed87fc, Func Offset: 0xcc
	// Func End, Address: 0x1ed8804, Func Offset: 0xd4
}

// 
// Start address: 0x1ed8810
int ev_mz32_water_turbine_draw(sfObj* obj)
{
	// Line 443, Address: 0x1ed8810, Func Offset: 0
	// Line 444, Address: 0x1ed881c, Func Offset: 0xc
	// Line 447, Address: 0x1ed8824, Func Offset: 0x14
	// Line 448, Address: 0x1ed882c, Func Offset: 0x1c
	// Line 450, Address: 0x1ed8830, Func Offset: 0x20
	// Line 449, Address: 0x1ed8834, Func Offset: 0x24
	// Line 450, Address: 0x1ed8838, Func Offset: 0x28
	// Func End, Address: 0x1ed8840, Func Offset: 0x30
}

// 
// Start address: 0x1ed8840
int ev_mz32_water_turbine_end(sfObj* obj)
{
	// Line 453, Address: 0x1ed8840, Func Offset: 0
	// Line 454, Address: 0x1ed884c, Func Offset: 0xc
	// Line 457, Address: 0x1ed8854, Func Offset: 0x14
	// Line 460, Address: 0x1ed885c, Func Offset: 0x1c
	// Line 462, Address: 0x1ed886c, Func Offset: 0x2c
	// Line 464, Address: 0x1ed8874, Func Offset: 0x34
	// Line 467, Address: 0x1ed8878, Func Offset: 0x38
	// Line 466, Address: 0x1ed887c, Func Offset: 0x3c
	// Line 467, Address: 0x1ed8880, Func Offset: 0x40
	// Func End, Address: 0x1ed8888, Func Offset: 0x48
}

// 
// Start address: 0x1ed8890
void axis_init(sfObj* obj, unsigned int mdl_id, unsigned int emt_id)
{
	_anon0* fig;
	_anon5* ra;
	float pos[4];
	// Line 810, Address: 0x1ed8890, Func Offset: 0
	// Line 814, Address: 0x1ed8894, Func Offset: 0x4
	// Line 810, Address: 0x1ed8898, Func Offset: 0x8
	// Line 814, Address: 0x1ed889c, Func Offset: 0xc
	// Line 815, Address: 0x1ed88ac, Func Offset: 0x1c
	// Line 816, Address: 0x1ed88b4, Func Offset: 0x24
	// Line 819, Address: 0x1ed88b8, Func Offset: 0x28
	// Func End, Address: 0x1ed88c4, Func Offset: 0x34
	// Line 473, Address: 0x1ed8890, Func Offset: 0
	// Line 474, Address: 0x1ed88b0, Func Offset: 0x20
	// Line 475, Address: 0x1ed88bc, Func Offset: 0x2c
	// Line 476, Address: 0x1ed88c8, Func Offset: 0x38
	// Line 477, Address: 0x1ed88d0, Func Offset: 0x40
	// Line 481, Address: 0x1ed88d4, Func Offset: 0x44
	// Line 484, Address: 0x1ed88fc, Func Offset: 0x6c
	// Line 488, Address: 0x1ed8900, Func Offset: 0x70
	// Line 484, Address: 0x1ed8908, Func Offset: 0x78
	// Line 485, Address: 0x1ed890c, Func Offset: 0x7c
	// Line 486, Address: 0x1ed8914, Func Offset: 0x84
	// Line 488, Address: 0x1ed891c, Func Offset: 0x8c
	// Line 490, Address: 0x1ed8924, Func Offset: 0x94
	// Line 495, Address: 0x1ed8928, Func Offset: 0x98
	// Func End, Address: 0x1ed8940, Func Offset: 0xb0
}

// 
// Start address: 0x1ed8940
int ev_mz41_axis_init(sfObj* obj)
{
	float ang;
	float vol;
	_anon0* fig;
	float pos[4];
	// Line 499, Address: 0x1ed8940, Func Offset: 0
	// Line 500, Address: 0x1ed8944, Func Offset: 0x4
	// Line 499, Address: 0x1ed8948, Func Offset: 0x8
	// Line 500, Address: 0x1ed894c, Func Offset: 0xc
	// Line 499, Address: 0x1ed8950, Func Offset: 0x10
	// Line 500, Address: 0x1ed8954, Func Offset: 0x14
	// Line 499, Address: 0x1ed8958, Func Offset: 0x18
	// Line 500, Address: 0x1ed8960, Func Offset: 0x20
	// Line 502, Address: 0x1ed8970, Func Offset: 0x30
	// Line 505, Address: 0x1ed8980, Func Offset: 0x40
	// Line 509, Address: 0x1ed898c, Func Offset: 0x4c
	// Line 511, Address: 0x1ed89ac, Func Offset: 0x6c
	// Line 516, Address: 0x1ed89b0, Func Offset: 0x70
	// Line 511, Address: 0x1ed89b4, Func Offset: 0x74
	// Line 512, Address: 0x1ed89b8, Func Offset: 0x78
	// Line 513, Address: 0x1ed89c0, Func Offset: 0x80
	// Line 516, Address: 0x1ed89c8, Func Offset: 0x88
	// Line 517, Address: 0x1ed89d0, Func Offset: 0x90
	// Line 518, Address: 0x1ed89e8, Func Offset: 0xa8
	// Line 519, Address: 0x1ed89f4, Func Offset: 0xb4
	// Line 523, Address: 0x1ed8a00, Func Offset: 0xc0
	// Line 522, Address: 0x1ed8a10, Func Offset: 0xd0
	// Line 523, Address: 0x1ed8a14, Func Offset: 0xd4
	// Func End, Address: 0x1ed8a1c, Func Offset: 0xdc
}

// 
// Start address: 0x1ed8a20
int ev_mz42_axis_init(sfObj* obj)
{
	float ang;
	float vol;
	_anon0* fig;
	float pos[4];
	// Line 526, Address: 0x1ed8a20, Func Offset: 0
	// Line 527, Address: 0x1ed8a24, Func Offset: 0x4
	// Line 526, Address: 0x1ed8a28, Func Offset: 0x8
	// Line 527, Address: 0x1ed8a2c, Func Offset: 0xc
	// Line 526, Address: 0x1ed8a30, Func Offset: 0x10
	// Line 527, Address: 0x1ed8a34, Func Offset: 0x14
	// Line 526, Address: 0x1ed8a38, Func Offset: 0x18
	// Line 527, Address: 0x1ed8a40, Func Offset: 0x20
	// Line 529, Address: 0x1ed8a50, Func Offset: 0x30
	// Line 532, Address: 0x1ed8a60, Func Offset: 0x40
	// Line 536, Address: 0x1ed8a6c, Func Offset: 0x4c
	// Line 538, Address: 0x1ed8a8c, Func Offset: 0x6c
	// Line 543, Address: 0x1ed8a90, Func Offset: 0x70
	// Line 538, Address: 0x1ed8a94, Func Offset: 0x74
	// Line 539, Address: 0x1ed8a98, Func Offset: 0x78
	// Line 540, Address: 0x1ed8aa0, Func Offset: 0x80
	// Line 543, Address: 0x1ed8aa8, Func Offset: 0x88
	// Line 544, Address: 0x1ed8ab0, Func Offset: 0x90
	// Line 545, Address: 0x1ed8ac8, Func Offset: 0xa8
	// Line 546, Address: 0x1ed8ad4, Func Offset: 0xb4
	// Line 550, Address: 0x1ed8ae0, Func Offset: 0xc0
	// Line 549, Address: 0x1ed8af0, Func Offset: 0xd0
	// Line 550, Address: 0x1ed8af4, Func Offset: 0xd4
	// Func End, Address: 0x1ed8afc, Func Offset: 0xdc
}

// 
// Start address: 0x1ed8b00
int ev_mz_axis_exec(sfObj* obj)
{
	_anon5* ra;
	float axis[4];
	float r[4];
	float rot[4];
	float speed;
	_anon0* fig;
	float pos[4];
	float ang;
	float vol;
	// Line 553, Address: 0x1ed8b00, Func Offset: 0
	// Line 554, Address: 0x1ed8b1c, Func Offset: 0x1c
	// Line 556, Address: 0x1ed8b24, Func Offset: 0x24
	// Line 559, Address: 0x1ed8b34, Func Offset: 0x34
	// Line 561, Address: 0x1ed8b38, Func Offset: 0x38
	// Line 562, Address: 0x1ed8b48, Func Offset: 0x48
	// Line 566, Address: 0x1ed8b60, Func Offset: 0x60
	// Line 567, Address: 0x1ed8b6c, Func Offset: 0x6c
	// Line 568, Address: 0x1ed8b7c, Func Offset: 0x7c
	// Line 569, Address: 0x1ed8b8c, Func Offset: 0x8c
	// Line 571, Address: 0x1ed8b98, Func Offset: 0x98
	// Line 574, Address: 0x1ed8ba4, Func Offset: 0xa4
	// Line 578, Address: 0x1ed8bac, Func Offset: 0xac
	// Line 583, Address: 0x1ed8bb0, Func Offset: 0xb0
	// Line 578, Address: 0x1ed8bb4, Func Offset: 0xb4
	// Line 579, Address: 0x1ed8bb8, Func Offset: 0xb8
	// Line 580, Address: 0x1ed8bc0, Func Offset: 0xc0
	// Line 583, Address: 0x1ed8bc8, Func Offset: 0xc8
	// Line 584, Address: 0x1ed8bd0, Func Offset: 0xd0
	// Line 585, Address: 0x1ed8be8, Func Offset: 0xe8
	// Line 586, Address: 0x1ed8bf4, Func Offset: 0xf4
	// Line 591, Address: 0x1ed8c00, Func Offset: 0x100
	// Line 590, Address: 0x1ed8c14, Func Offset: 0x114
	// Line 591, Address: 0x1ed8c18, Func Offset: 0x118
	// Func End, Address: 0x1ed8c20, Func Offset: 0x120
}

// 
// Start address: 0x1ed8c20
int ev_mz_axis_draw(sfObj* obj)
{
	// Line 594, Address: 0x1ed8c20, Func Offset: 0
	// Line 596, Address: 0x1ed8c2c, Func Offset: 0xc
	// Line 599, Address: 0x1ed8c34, Func Offset: 0x14
	// Line 600, Address: 0x1ed8c3c, Func Offset: 0x1c
	// Line 603, Address: 0x1ed8c40, Func Offset: 0x20
	// Line 602, Address: 0x1ed8c44, Func Offset: 0x24
	// Line 603, Address: 0x1ed8c48, Func Offset: 0x28
	// Func End, Address: 0x1ed8c50, Func Offset: 0x30
}

// 
// Start address: 0x1ed8c50
int ev_mz_axis_end(sfObj* obj)
{
	// Line 606, Address: 0x1ed8c50, Func Offset: 0
	// Line 607, Address: 0x1ed8c5c, Func Offset: 0xc
	// Line 610, Address: 0x1ed8c64, Func Offset: 0x14
	// Line 613, Address: 0x1ed8c6c, Func Offset: 0x1c
	// Line 615, Address: 0x1ed8c7c, Func Offset: 0x2c
	// Line 617, Address: 0x1ed8c84, Func Offset: 0x34
	// Line 620, Address: 0x1ed8c88, Func Offset: 0x38
	// Line 619, Address: 0x1ed8c8c, Func Offset: 0x3c
	// Line 620, Address: 0x1ed8c90, Func Offset: 0x40
	// Func End, Address: 0x1ed8c98, Func Offset: 0x48
}

// 
// Start address: 0x1ed8ca0
int ev_mz33_valve_init(sfObj* obj)
{
	_anon2* wk;
	_anon0* fig;
	float pos[4];
	// Line 626, Address: 0x1ed8ca0, Func Offset: 0
	// Line 627, Address: 0x1ed8ca4, Func Offset: 0x4
	// Line 626, Address: 0x1ed8ca8, Func Offset: 0x8
	// Line 627, Address: 0x1ed8cbc, Func Offset: 0x1c
	// Line 628, Address: 0x1ed8ccc, Func Offset: 0x2c
	// Line 630, Address: 0x1ed8cd4, Func Offset: 0x34
	// Line 633, Address: 0x1ed8ce0, Func Offset: 0x40
	// Line 636, Address: 0x1ed8d0c, Func Offset: 0x6c
	// Line 640, Address: 0x1ed8d10, Func Offset: 0x70
	// Line 636, Address: 0x1ed8d18, Func Offset: 0x78
	// Line 637, Address: 0x1ed8d1c, Func Offset: 0x7c
	// Line 638, Address: 0x1ed8d24, Func Offset: 0x84
	// Line 640, Address: 0x1ed8d2c, Func Offset: 0x8c
	// Line 643, Address: 0x1ed8d34, Func Offset: 0x94
	// Line 647, Address: 0x1ed8d40, Func Offset: 0xa0
	// Line 646, Address: 0x1ed8d48, Func Offset: 0xa8
	// Line 647, Address: 0x1ed8d4c, Func Offset: 0xac
	// Func End, Address: 0x1ed8d60, Func Offset: 0xc0
}

// 
// Start address: 0x1ed8d60
int ev_mz33_cover_init(sfObj* obj)
{
	_anon2* wk;
	_anon0* fig;
	float pos[4];
	// Line 653, Address: 0x1ed8d60, Func Offset: 0
	// Line 654, Address: 0x1ed8d64, Func Offset: 0x4
	// Line 653, Address: 0x1ed8d68, Func Offset: 0x8
	// Line 654, Address: 0x1ed8d7c, Func Offset: 0x1c
	// Line 655, Address: 0x1ed8d8c, Func Offset: 0x2c
	// Line 657, Address: 0x1ed8d94, Func Offset: 0x34
	// Line 660, Address: 0x1ed8da0, Func Offset: 0x40
	// Line 663, Address: 0x1ed8dcc, Func Offset: 0x6c
	// Line 667, Address: 0x1ed8dd0, Func Offset: 0x70
	// Line 663, Address: 0x1ed8dd8, Func Offset: 0x78
	// Line 664, Address: 0x1ed8ddc, Func Offset: 0x7c
	// Line 665, Address: 0x1ed8de4, Func Offset: 0x84
	// Line 667, Address: 0x1ed8dec, Func Offset: 0x8c
	// Line 670, Address: 0x1ed8df4, Func Offset: 0x94
	// Line 674, Address: 0x1ed8e00, Func Offset: 0xa0
	// Line 673, Address: 0x1ed8e08, Func Offset: 0xa8
	// Line 674, Address: 0x1ed8e0c, Func Offset: 0xac
	// Func End, Address: 0x1ed8e20, Func Offset: 0xc0
}

// 
// Start address: 0x1ed8e20
int ev_mz33_cover_exec(sfObj* obj)
{
	_anon2* wk;
	float pos[4];
	// Line 679, Address: 0x1ed8e20, Func Offset: 0
	// Line 680, Address: 0x1ed8e34, Func Offset: 0x14
	// Line 684, Address: 0x1ed8e3c, Func Offset: 0x1c
	// Line 686, Address: 0x1ed8e50, Func Offset: 0x30
	// Line 687, Address: 0x1ed8e64, Func Offset: 0x44
	// Line 690, Address: 0x1ed8e6c, Func Offset: 0x4c
	// Line 692, Address: 0x1ed8e78, Func Offset: 0x58
	// Line 690, Address: 0x1ed8e80, Func Offset: 0x60
	// Line 692, Address: 0x1ed8e84, Func Offset: 0x64
	// Line 694, Address: 0x1ed8e8c, Func Offset: 0x6c
	// Line 702, Address: 0x1ed8e98, Func Offset: 0x78
	// Line 701, Address: 0x1ed8ea0, Func Offset: 0x80
	// Line 702, Address: 0x1ed8ea4, Func Offset: 0x84
	// Func End, Address: 0x1ed8eb0, Func Offset: 0x90
}

// 
// Start address: 0x1ed8eb0
int ev_mz33_valve_exec(sfObj* obj)
{
	_anon2* wk;
	float pos[4];
	// Line 706, Address: 0x1ed8eb0, Func Offset: 0
	// Line 707, Address: 0x1ed8ec4, Func Offset: 0x14
	// Line 711, Address: 0x1ed8ecc, Func Offset: 0x1c
	// Line 713, Address: 0x1ed8ee0, Func Offset: 0x30
	// Line 714, Address: 0x1ed8ef4, Func Offset: 0x44
	// Line 716, Address: 0x1ed8efc, Func Offset: 0x4c
	// Line 718, Address: 0x1ed8f08, Func Offset: 0x58
	// Line 724, Address: 0x1ed8f14, Func Offset: 0x64
	// Line 726, Address: 0x1ed8f18, Func Offset: 0x68
	// Line 725, Address: 0x1ed8f20, Func Offset: 0x70
	// Line 726, Address: 0x1ed8f24, Func Offset: 0x74
	// Func End, Address: 0x1ed8f30, Func Offset: 0x80
}

// 
// Start address: 0x1ed8f30
int ev_mz33_draw()
{
	// Line 741, Address: 0x1ed8f30, Func Offset: 0
	// Func End, Address: 0x1ed8f38, Func Offset: 0x8
}

// 
// Start address: 0x1ed8f40
int ev_mz33_end(sfObj* obj)
{
	// Line 745, Address: 0x1ed8f40, Func Offset: 0
	// Line 746, Address: 0x1ed8f54, Func Offset: 0x14
	// Line 748, Address: 0x1ed8f5c, Func Offset: 0x1c
	// Line 750, Address: 0x1ed8f64, Func Offset: 0x24
	// Line 753, Address: 0x1ed8f70, Func Offset: 0x30
	// Line 752, Address: 0x1ed8f78, Func Offset: 0x38
	// Line 753, Address: 0x1ed8f7c, Func Offset: 0x3c
	// Func End, Address: 0x1ed8f84, Func Offset: 0x44
}

// 
// Start address: 0x1ed8f90
void ladder_init(sfObj* obj, unsigned int mdl_id, unsigned int emt_id)
{
	_anon0* fig;
	_anon13* lw;
	float pos[4];
	// Line 761, Address: 0x1ed8f90, Func Offset: 0
	// Line 762, Address: 0x1ed8fb0, Func Offset: 0x20
	// Line 763, Address: 0x1ed8fc0, Func Offset: 0x30
	// Line 764, Address: 0x1ed8fcc, Func Offset: 0x3c
	// Line 765, Address: 0x1ed8fd4, Func Offset: 0x44
	// Line 764, Address: 0x1ed8fd8, Func Offset: 0x48
	// Line 769, Address: 0x1ed8fdc, Func Offset: 0x4c
	// Line 770, Address: 0x1ed8fe4, Func Offset: 0x54
	// Line 771, Address: 0x1ed8ff8, Func Offset: 0x68
	// Line 774, Address: 0x1ed900c, Func Offset: 0x7c
	// Line 776, Address: 0x1ed9014, Func Offset: 0x84
	// Line 780, Address: 0x1ed9018, Func Offset: 0x88
	// Line 776, Address: 0x1ed9020, Func Offset: 0x90
	// Line 777, Address: 0x1ed9024, Func Offset: 0x94
	// Line 778, Address: 0x1ed902c, Func Offset: 0x9c
	// Line 780, Address: 0x1ed9034, Func Offset: 0xa4
	// Line 781, Address: 0x1ed903c, Func Offset: 0xac
	// Line 782, Address: 0x1ed9044, Func Offset: 0xb4
	// Line 783, Address: 0x1ed9048, Func Offset: 0xb8
	// Func End, Address: 0x1ed9064, Func Offset: 0xd4
}

// 
// Start address: 0x1ed9070
int ev_mz03_ladder_init(sfObj* obj)
{
	// Line 787, Address: 0x1ed9070, Func Offset: 0
	// Line 786, Address: 0x1ed9074, Func Offset: 0x4
	// Line 787, Address: 0x1ed9078, Func Offset: 0x8
	// Line 786, Address: 0x1ed907c, Func Offset: 0xc
	// Line 787, Address: 0x1ed9080, Func Offset: 0x10
	// Line 792, Address: 0x1ed908c, Func Offset: 0x1c
	// Line 791, Address: 0x1ed9090, Func Offset: 0x20
	// Line 792, Address: 0x1ed9094, Func Offset: 0x24
	// Func End, Address: 0x1ed909c, Func Offset: 0x2c
}

// 
// Start address: 0x1ed90a0
int ev_mz13_ladder_init(sfObj* obj)
{
	// Line 796, Address: 0x1ed90a0, Func Offset: 0
	// Line 795, Address: 0x1ed90a4, Func Offset: 0x4
	// Line 796, Address: 0x1ed90a8, Func Offset: 0x8
	// Line 795, Address: 0x1ed90ac, Func Offset: 0xc
	// Line 796, Address: 0x1ed90b0, Func Offset: 0x10
	// Line 801, Address: 0x1ed90bc, Func Offset: 0x1c
	// Line 800, Address: 0x1ed90c0, Func Offset: 0x20
	// Line 801, Address: 0x1ed90c4, Func Offset: 0x24
	// Func End, Address: 0x1ed90cc, Func Offset: 0x2c
}

// 
// Start address: 0x1ed90d0
int ev_mz_ladder_exec()
{
	// Line 806, Address: 0x1ed90d0, Func Offset: 0
	// Func End, Address: 0x1ed90d8, Func Offset: 0x8
}

// 
// Start address: 0x1ed90e0
int ev_mz_ladder_draw(sfObj* obj)
{
	// Line 809, Address: 0x1ed90e0, Func Offset: 0
	// Line 810, Address: 0x1ed90ec, Func Offset: 0xc
	// Line 813, Address: 0x1ed90f4, Func Offset: 0x14
	// Line 814, Address: 0x1ed90fc, Func Offset: 0x1c
	// Line 816, Address: 0x1ed9100, Func Offset: 0x20
	// Line 815, Address: 0x1ed9104, Func Offset: 0x24
	// Line 816, Address: 0x1ed9108, Func Offset: 0x28
	// Func End, Address: 0x1ed9110, Func Offset: 0x30
}

// 
// Start address: 0x1ed9110
int ev_mz_ladder_end(sfObj* obj)
{
	// Line 819, Address: 0x1ed9110, Func Offset: 0
	// Line 820, Address: 0x1ed911c, Func Offset: 0xc
	// Line 823, Address: 0x1ed9124, Func Offset: 0x14
	// Line 824, Address: 0x1ed912c, Func Offset: 0x1c
	// Line 826, Address: 0x1ed9130, Func Offset: 0x20
	// Line 825, Address: 0x1ed9134, Func Offset: 0x24
	// Line 826, Address: 0x1ed9138, Func Offset: 0x28
	// Func End, Address: 0x1ed9140, Func Offset: 0x30
}

// 
// Start address: 0x1ed9140
void ladder_shadow_init(sfObj* obj, unsigned int mdl_id, unsigned int svm_id)
{
	_anon0* fig;
	_anon3* ls;
	float pos[4];
	// Line 831, Address: 0x1ed9140, Func Offset: 0
	// Line 832, Address: 0x1ed9168, Func Offset: 0x28
	// Line 833, Address: 0x1ed9174, Func Offset: 0x34
	// Line 834, Address: 0x1ed9180, Func Offset: 0x40
	// Line 835, Address: 0x1ed9188, Func Offset: 0x48
	// Line 839, Address: 0x1ed918c, Func Offset: 0x4c
	// Line 843, Address: 0x1ed91b8, Func Offset: 0x78
	// Line 846, Address: 0x1ed91cc, Func Offset: 0x8c
	// Line 850, Address: 0x1ed91d0, Func Offset: 0x90
	// Line 846, Address: 0x1ed91d8, Func Offset: 0x98
	// Line 847, Address: 0x1ed91dc, Func Offset: 0x9c
	// Line 848, Address: 0x1ed91e4, Func Offset: 0xa4
	// Line 850, Address: 0x1ed91ec, Func Offset: 0xac
	// Line 853, Address: 0x1ed91f4, Func Offset: 0xb4
	// Line 855, Address: 0x1ed9200, Func Offset: 0xc0
	// Func End, Address: 0x1ed9220, Func Offset: 0xe0
}

// 
// Start address: 0x1ed9220
int ev_mz03_ladder_shadow_init(sfObj* obj)
{
	// Line 859, Address: 0x1ed9220, Func Offset: 0
	// Line 858, Address: 0x1ed9224, Func Offset: 0x4
	// Line 859, Address: 0x1ed9228, Func Offset: 0x8
	// Line 858, Address: 0x1ed922c, Func Offset: 0xc
	// Line 859, Address: 0x1ed9230, Func Offset: 0x10
	// Line 864, Address: 0x1ed923c, Func Offset: 0x1c
	// Line 863, Address: 0x1ed9240, Func Offset: 0x20
	// Line 864, Address: 0x1ed9244, Func Offset: 0x24
	// Func End, Address: 0x1ed924c, Func Offset: 0x2c
}

// 
// Start address: 0x1ed9250
int ev_mz13_ladder_shadow_init(sfObj* obj)
{
	// Line 868, Address: 0x1ed9250, Func Offset: 0
	// Line 867, Address: 0x1ed9254, Func Offset: 0x4
	// Line 868, Address: 0x1ed9258, Func Offset: 0x8
	// Line 867, Address: 0x1ed925c, Func Offset: 0xc
	// Line 868, Address: 0x1ed9260, Func Offset: 0x10
	// Line 873, Address: 0x1ed926c, Func Offset: 0x1c
	// Line 872, Address: 0x1ed9270, Func Offset: 0x20
	// Line 873, Address: 0x1ed9274, Func Offset: 0x24
	// Func End, Address: 0x1ed927c, Func Offset: 0x2c
}

// 
// Start address: 0x1ed9280
int ev_mz_ladder_shadow_exec(sfObj* obj)
{
	_anon3* ls;
	_anon0* fig;
	float pos[4];
	// Line 876, Address: 0x1ed9280, Func Offset: 0
	// Line 877, Address: 0x1ed9294, Func Offset: 0x14
	// Line 879, Address: 0x1ed929c, Func Offset: 0x1c
	// Line 882, Address: 0x1ed92a4, Func Offset: 0x24
	// Line 885, Address: 0x1ed92b4, Func Offset: 0x34
	// Line 886, Address: 0x1ed92b8, Func Offset: 0x38
	// Line 885, Address: 0x1ed92c4, Func Offset: 0x44
	// Line 886, Address: 0x1ed92c8, Func Offset: 0x48
	// Line 887, Address: 0x1ed92d4, Func Offset: 0x54
	// Line 889, Address: 0x1ed92dc, Func Offset: 0x5c
	// Line 892, Address: 0x1ed92e8, Func Offset: 0x68
	// Line 893, Address: 0x1ed92f0, Func Offset: 0x70
	// Line 894, Address: 0x1ed92f8, Func Offset: 0x78
	// Line 895, Address: 0x1ed9300, Func Offset: 0x80
	// Line 896, Address: 0x1ed9304, Func Offset: 0x84
	// Line 898, Address: 0x1ed9308, Func Offset: 0x88
	// Line 899, Address: 0x1ed9314, Func Offset: 0x94
	// Line 902, Address: 0x1ed9318, Func Offset: 0x98
	// Line 901, Address: 0x1ed9320, Func Offset: 0xa0
	// Line 902, Address: 0x1ed9324, Func Offset: 0xa4
	// Func End, Address: 0x1ed9330, Func Offset: 0xb0
}

// 
// Start address: 0x1ed9330
int ev_mz_ladder_shadow_draw()
{
	// Line 907, Address: 0x1ed9330, Func Offset: 0
	// Func End, Address: 0x1ed9338, Func Offset: 0x8
}

// 
// Start address: 0x1ed9340
int ev_mz_ladder_shadow_end(sfObj* obj)
{
	// Line 910, Address: 0x1ed9340, Func Offset: 0
	// Line 911, Address: 0x1ed9354, Func Offset: 0x14
	// Line 914, Address: 0x1ed935c, Func Offset: 0x1c
	// Line 915, Address: 0x1ed9364, Func Offset: 0x24
	// Line 919, Address: 0x1ed9370, Func Offset: 0x30
	// Line 918, Address: 0x1ed9378, Func Offset: 0x38
	// Line 919, Address: 0x1ed937c, Func Offset: 0x3c
	// Func End, Address: 0x1ed9384, Func Offset: 0x44
}

// 
// Start address: 0x1ed9390
void mz01_door_init(sfObj* obj)
{
	sfCharacter* chara;
	_anon0* fig;
	float pos[4];
	// Line 925, Address: 0x1ed9390, Func Offset: 0
	// Line 926, Address: 0x1ed9394, Func Offset: 0x4
	// Line 925, Address: 0x1ed9398, Func Offset: 0x8
	// Line 926, Address: 0x1ed93ac, Func Offset: 0x1c
	// Line 927, Address: 0x1ed93bc, Func Offset: 0x2c
	// Line 929, Address: 0x1ed93c4, Func Offset: 0x34
	// Line 932, Address: 0x1ed93d0, Func Offset: 0x40
	// Line 936, Address: 0x1ed93fc, Func Offset: 0x6c
	// Line 940, Address: 0x1ed9400, Func Offset: 0x70
	// Line 936, Address: 0x1ed9408, Func Offset: 0x78
	// Line 937, Address: 0x1ed940c, Func Offset: 0x7c
	// Line 938, Address: 0x1ed9414, Func Offset: 0x84
	// Line 940, Address: 0x1ed941c, Func Offset: 0x8c
	// Line 942, Address: 0x1ed9424, Func Offset: 0x94
	// Line 944, Address: 0x1ed9430, Func Offset: 0xa0
	// Func End, Address: 0x1ed944c, Func Offset: 0xbc
}

// 
// Start address: 0x1ed9450
void mz01_door_exec()
{
	// Line 946, Address: 0x1ed9450, Func Offset: 0
	// Func End, Address: 0x1ed9458, Func Offset: 0x8
}

// 
// Start address: 0x1ed9460
void mz01_door_draw()
{
	// Line 947, Address: 0x1ed9460, Func Offset: 0
	// Func End, Address: 0x1ed9468, Func Offset: 0x8
}

// 
// Start address: 0x1ed9470
void mz01_door_end(sfObj* obj)
{
	// Line 246, Address: 0x1ed9470, Func Offset: 0
	// Line 247, Address: 0x1ed9488, Func Offset: 0x18
	// Line 246, Address: 0x1ed948c, Func Offset: 0x1c
	// Line 249, Address: 0x1ed9498, Func Offset: 0x28
	// Line 251, Address: 0x1ed949c, Func Offset: 0x2c
	// Line 252, Address: 0x1ed94a4, Func Offset: 0x34
	// Line 255, Address: 0x1ed94a8, Func Offset: 0x38
	// Line 256, Address: 0x1ed94b4, Func Offset: 0x44
	// Line 257, Address: 0x1ed94bc, Func Offset: 0x4c
	// Line 260, Address: 0x1ed94c0, Func Offset: 0x50
	// Line 261, Address: 0x1ed94f4, Func Offset: 0x84
	// Line 262, Address: 0x1ed94f8, Func Offset: 0x88
	// Line 263, Address: 0x1ed9500, Func Offset: 0x90
	// Line 264, Address: 0x1ed9508, Func Offset: 0x98
	// Line 265, Address: 0x1ed950c, Func Offset: 0x9c
	// Line 266, Address: 0x1ed9514, Func Offset: 0xa4
	// Line 267, Address: 0x1ed9518, Func Offset: 0xa8
	// Line 268, Address: 0x1ed9520, Func Offset: 0xb0
	// Line 269, Address: 0x1ed9528, Func Offset: 0xb8
	// Line 270, Address: 0x1ed952c, Func Offset: 0xbc
	// Line 271, Address: 0x1ed9534, Func Offset: 0xc4
	// Line 272, Address: 0x1ed9538, Func Offset: 0xc8
	// Line 273, Address: 0x1ed9540, Func Offset: 0xd0
	// Line 274, Address: 0x1ed9548, Func Offset: 0xd8
	// Line 278, Address: 0x1ed9550, Func Offset: 0xe0
	// Line 280, Address: 0x1ed9578, Func Offset: 0x108
	// Line 281, Address: 0x1ed9580, Func Offset: 0x110
	// Line 283, Address: 0x1ed958c, Func Offset: 0x11c
	// Line 285, Address: 0x1ed9594, Func Offset: 0x124
	// Line 288, Address: 0x1ed95a0, Func Offset: 0x130
	// Line 289, Address: 0x1ed95a8, Func Offset: 0x138
	// Line 290, Address: 0x1ed95bc, Func Offset: 0x14c
	// Line 291, Address: 0x1ed95d0, Func Offset: 0x160
	// Line 293, Address: 0x1ed95ec, Func Offset: 0x17c
	// Line 294, Address: 0x1ed95f4, Func Offset: 0x184
	// Line 296, Address: 0x1ed95fc, Func Offset: 0x18c
	// Line 299, Address: 0x1ed9604, Func Offset: 0x194
	// Line 303, Address: 0x1ed9618, Func Offset: 0x1a8
	// Line 305, Address: 0x1ed9624, Func Offset: 0x1b4
	// Line 311, Address: 0x1ed9630, Func Offset: 0x1c0
	// Line 312, Address: 0x1ed9638, Func Offset: 0x1c8
	// Line 317, Address: 0x1ed965c, Func Offset: 0x1ec
	// Line 314, Address: 0x1ed9660, Func Offset: 0x1f0
	// Line 317, Address: 0x1ed9668, Func Offset: 0x1f8
	// Line 314, Address: 0x1ed9670, Func Offset: 0x200
	// Line 317, Address: 0x1ed9674, Func Offset: 0x204
	// Line 319, Address: 0x1ed9684, Func Offset: 0x214
	// Line 320, Address: 0x1ed968c, Func Offset: 0x21c
	// Line 321, Address: 0x1ed9694, Func Offset: 0x224
	// Line 322, Address: 0x1ed9698, Func Offset: 0x228
	// Line 324, Address: 0x1ed96c0, Func Offset: 0x250
	// Line 325, Address: 0x1ed96cc, Func Offset: 0x25c
	// Line 327, Address: 0x1ed96d0, Func Offset: 0x260
	// Line 329, Address: 0x1ed96f8, Func Offset: 0x288
	// Line 331, Address: 0x1ed96fc, Func Offset: 0x28c
	// Line 332, Address: 0x1ed9720, Func Offset: 0x2b0
	// Line 334, Address: 0x1ed9728, Func Offset: 0x2b8
	// Line 336, Address: 0x1ed9730, Func Offset: 0x2c0
	// Line 340, Address: 0x1ed9740, Func Offset: 0x2d0
	// Line 338, Address: 0x1ed9744, Func Offset: 0x2d4
	// Line 347, Address: 0x1ed9748, Func Offset: 0x2d8
	// Line 348, Address: 0x1ed974c, Func Offset: 0x2dc
	// Func End, Address: 0x1ed9770, Func Offset: 0x300
	// Line 949, Address: 0x1ed9470, Func Offset: 0
	// Line 950, Address: 0x1ed9484, Func Offset: 0x14
	// Line 953, Address: 0x1ed948c, Func Offset: 0x1c
	// Line 954, Address: 0x1ed9494, Func Offset: 0x24
	// Line 956, Address: 0x1ed94a0, Func Offset: 0x30
	// Func End, Address: 0x1ed94b0, Func Offset: 0x40
}

