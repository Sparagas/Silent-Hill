typedef struct sfObj;
typedef struct EnemyWallGhostWork;
typedef struct EnemyGhostStainWork;
typedef struct sfCharacter;
typedef struct sgBone;
typedef struct sgAnime;
typedef struct sgIKHandle;
typedef struct sgSVModel;
typedef struct _anon0;
typedef union _anon1;
typedef struct _anon2;
typedef struct EnemyEffectStickyWork;
typedef struct EnemyEffectStickyBone;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _anon3;
typedef struct EnemyGhostStainParameter;

typedef void(*type_1)(sfObj*);
typedef void(*type_3)(sfObj*);
typedef void(*type_5)(sfObj*);
typedef void(*type_7)(sgAnime*, int);
typedef void(*type_12)(sfObj*);
typedef void(*type_14)(_anon0*, int, int, float*);
typedef void(*type_15)(sfObj*);
typedef sgIKSolveResult(*type_24)();

typedef int type_0[8];
typedef void* type_2[4];
typedef float type_4[4];
typedef float type_6[4][4];
typedef float type_8[4];
typedef unsigned char type_9[4];
typedef EnemyEffectStickyBone type_10[26];
typedef _anon1 type_11[256];
typedef int type_13[6];
typedef short type_16[2];
typedef unsigned short type_17[2];
typedef char type_18[4];
typedef unsigned char type_19[4];
typedef float type_20[3];
typedef float type_21[1];
typedef int type_22[1];
typedef float type_23[4][2];
typedef float type_25[4];

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

struct EnemyWallGhostWork
{
	sfCharacter character;
	float pos[4];
	float normal[4];
	sgAnime animework;
	_anon3 animemixer;
	int work_switch;
	int anime;
	int sticky_on;
	int sound_slot;
	int sound_no;
	float timer;
	EnemyGhostStainWork* stain_work;
	EnemyEffectStickyWork* sticky_work;
};

struct EnemyGhostStainWork
{
};

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon2 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
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

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct _anon0
{
	unsigned long tex0;
	unsigned long clamp;
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

struct _anon2
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon0*, int, int, float*);
	int equip_flag;
};

struct EnemyEffectStickyWork
{
};

struct EnemyEffectStickyBone
{
	int bone;
	float pos[3];
	float y_deviation;
	int direction;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct _anon3
{
	sgAnime* out_anime;
	sgAnime* base_anime;
	sgAnime* target_anime;
	float blend_ratio;
	float blend_speed;
	float play_speed_ratio;
	int flag;
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

int wall_ghost_anime[8];
EnemyEffectStickyBone wall_ghost_sticky_bone[26];
EnemyGhostStainParameter wall_ghost_stain_parameter;
void(*EnemyWallGhostDraw)(sfObj*);
void(*EnemyWallGhostDestruct)(sfObj*);
void(*EnemyWallGhostHandle)(sfObj*);
int crush_bone[6];
float sg_vector_zero[4];

sfObj* EnemyWallGhostConstruct();
void EnemyWallGhostDestruct(sfObj* obj);
void EnemyWallGhostHandle(sfObj* obj);
void EnemyWallGhostDraw(sfObj* obj);
void EnemyWallGhostAnimeUpdateHook(sfObj* obj);
void set_step(sfObj* obj, int step);
void set_substep(sfObj* obj, int substep);
sfObj* search_obj();
sgAnime* target_anime(EnemyWallGhostWork* ew);
int anime_is_play_end(EnemyWallGhostWork* ew);
int anime_can_change(EnemyWallGhostWork* ew);
void* anime_data(int anime);
void anime_set(sfObj* obj, int anime);
void anime_process(sfObj* obj);
void step_hidden(sfObj* obj);
void step_appear(sfObj* obj);
void step_normal(sfObj* obj);
void step_damage(sfObj* obj);
void step_dead(sfObj* obj);
void step_disappear(sfObj* obj);
void EnemyWallGhostAppear(float* pos, float* normal);
void EnemyWallGhostDisappear();

// 
// Start address: 0x1ee01c0
sfObj* EnemyWallGhostConstruct()
{
	sfObj* obj;
	EnemyWallGhostWork* ew;
	void* modeldata;
	void* texdata;
	void* shadowdata;
	// Line 173, Address: 0x1ee01c0, Func Offset: 0
	// Line 178, Address: 0x1ee01d8, Func Offset: 0x18
	// Line 179, Address: 0x1ee01e0, Func Offset: 0x20
	// Line 180, Address: 0x1ee01e8, Func Offset: 0x28
	// Line 184, Address: 0x1ee01f0, Func Offset: 0x30
	// Line 185, Address: 0x1ee01fc, Func Offset: 0x3c
	// Line 186, Address: 0x1ee0204, Func Offset: 0x44
	// Line 187, Address: 0x1ee020c, Func Offset: 0x4c
	// Line 188, Address: 0x1ee0210, Func Offset: 0x50
	// Line 189, Address: 0x1ee0220, Func Offset: 0x60
	// Line 190, Address: 0x1ee0234, Func Offset: 0x74
	// Line 191, Address: 0x1ee023c, Func Offset: 0x7c
	// Line 192, Address: 0x1ee0244, Func Offset: 0x84
	// Line 193, Address: 0x1ee0248, Func Offset: 0x88
	// Line 194, Address: 0x1ee0258, Func Offset: 0x98
	// Line 197, Address: 0x1ee0268, Func Offset: 0xa8
	// Line 201, Address: 0x1ee0278, Func Offset: 0xb8
	// Line 199, Address: 0x1ee027c, Func Offset: 0xbc
	// Line 201, Address: 0x1ee0280, Func Offset: 0xc0
	// Line 202, Address: 0x1ee0290, Func Offset: 0xd0
	// Line 203, Address: 0x1ee02a0, Func Offset: 0xe0
	// Line 204, Address: 0x1ee02b0, Func Offset: 0xf0
	// Line 205, Address: 0x1ee02c0, Func Offset: 0x100
	// Line 207, Address: 0x1ee02cc, Func Offset: 0x10c
	// Line 208, Address: 0x1ee02e4, Func Offset: 0x124
	// Line 209, Address: 0x1ee02f0, Func Offset: 0x130
	// Line 210, Address: 0x1ee0304, Func Offset: 0x144
	// Line 211, Address: 0x1ee030c, Func Offset: 0x14c
	// Line 215, Address: 0x1ee0324, Func Offset: 0x164
	// Line 214, Address: 0x1ee0328, Func Offset: 0x168
	// Line 215, Address: 0x1ee032c, Func Offset: 0x16c
	// Line 216, Address: 0x1ee0338, Func Offset: 0x178
	// Line 218, Address: 0x1ee033c, Func Offset: 0x17c
	// Line 216, Address: 0x1ee0340, Func Offset: 0x180
	// Line 218, Address: 0x1ee0344, Func Offset: 0x184
	// Line 219, Address: 0x1ee0348, Func Offset: 0x188
	// Func End, Address: 0x1ee0368, Func Offset: 0x1a8
}

// 
// Start address: 0x1ee0370
void EnemyWallGhostDestruct(sfObj* obj)
{
	EnemyWallGhostWork* ew;
	// Line 225, Address: 0x1ee0370, Func Offset: 0
	// Line 227, Address: 0x1ee037c, Func Offset: 0xc
	// Line 228, Address: 0x1ee0384, Func Offset: 0x14
	// Line 229, Address: 0x1ee038c, Func Offset: 0x1c
	// Line 230, Address: 0x1ee0394, Func Offset: 0x24
	// Line 229, Address: 0x1ee0398, Func Offset: 0x28
	// Line 231, Address: 0x1ee039c, Func Offset: 0x2c
	// Line 232, Address: 0x1ee03a4, Func Offset: 0x34
	// Line 233, Address: 0x1ee03ac, Func Offset: 0x3c
	// Line 232, Address: 0x1ee03b0, Func Offset: 0x40
	// Line 234, Address: 0x1ee03b4, Func Offset: 0x44
	// Line 235, Address: 0x1ee03bc, Func Offset: 0x4c
	// Line 236, Address: 0x1ee03c4, Func Offset: 0x54
	// Line 237, Address: 0x1ee03cc, Func Offset: 0x5c
	// Line 238, Address: 0x1ee03d0, Func Offset: 0x60
	// Line 239, Address: 0x1ee03d8, Func Offset: 0x68
	// Line 240, Address: 0x1ee03e0, Func Offset: 0x70
	// Func End, Address: 0x1ee03f0, Func Offset: 0x80
}

// 
// Start address: 0x1ee03f0
void EnemyWallGhostHandle(sfObj* obj)
{
	EnemyWallGhostWork* ew;
	// Line 246, Address: 0x1ee03f0, Func Offset: 0
	// Line 248, Address: 0x1ee0400, Func Offset: 0x10
	// Line 250, Address: 0x1ee0408, Func Offset: 0x18
	// Line 251, Address: 0x1ee0434, Func Offset: 0x44
	// Line 252, Address: 0x1ee0438, Func Offset: 0x48
	// Line 253, Address: 0x1ee0440, Func Offset: 0x50
	// Line 255, Address: 0x1ee0448, Func Offset: 0x58
	// Line 256, Address: 0x1ee0450, Func Offset: 0x60
	// Line 258, Address: 0x1ee0458, Func Offset: 0x68
	// Line 259, Address: 0x1ee0460, Func Offset: 0x70
	// Line 261, Address: 0x1ee0468, Func Offset: 0x78
	// Line 262, Address: 0x1ee0470, Func Offset: 0x80
	// Line 264, Address: 0x1ee0478, Func Offset: 0x88
	// Line 265, Address: 0x1ee0480, Func Offset: 0x90
	// Line 267, Address: 0x1ee0488, Func Offset: 0x98
	// Line 270, Address: 0x1ee0494, Func Offset: 0xa4
	// Line 271, Address: 0x1ee049c, Func Offset: 0xac
	// Line 273, Address: 0x1ee04c0, Func Offset: 0xd0
	// Line 274, Address: 0x1ee04cc, Func Offset: 0xdc
	// Line 275, Address: 0x1ee04d4, Func Offset: 0xe4
	// Line 276, Address: 0x1ee04e4, Func Offset: 0xf4
	// Line 277, Address: 0x1ee04ec, Func Offset: 0xfc
	// Line 280, Address: 0x1ee04f0, Func Offset: 0x100
	// Line 281, Address: 0x1ee04f8, Func Offset: 0x108
	// Line 283, Address: 0x1ee050c, Func Offset: 0x11c
	// Line 285, Address: 0x1ee0514, Func Offset: 0x124
	// Line 286, Address: 0x1ee0520, Func Offset: 0x130
	// Line 287, Address: 0x1ee0528, Func Offset: 0x138
	// Line 288, Address: 0x1ee0530, Func Offset: 0x140
	// Line 289, Address: 0x1ee053c, Func Offset: 0x14c
	// Line 290, Address: 0x1ee0540, Func Offset: 0x150
	// Func End, Address: 0x1ee0554, Func Offset: 0x164
}

// 
// Start address: 0x1ee0560
void EnemyWallGhostDraw(sfObj* obj)
{
	EnemyWallGhostWork* ew;
	// Line 296, Address: 0x1ee0560, Func Offset: 0
	// Line 299, Address: 0x1ee056c, Func Offset: 0xc
	// Line 300, Address: 0x1ee0574, Func Offset: 0x14
	// Line 301, Address: 0x1ee0580, Func Offset: 0x20
	// Line 303, Address: 0x1ee0588, Func Offset: 0x28
	// Line 304, Address: 0x1ee0590, Func Offset: 0x30
	// Func End, Address: 0x1ee05a0, Func Offset: 0x40
}

// 
// Start address: 0x1ee05a0
void EnemyWallGhostAnimeUpdateHook(sfObj* obj)
{
	sfCharacter* chara;
	sgBone* bone;
	int i;
	// Line 318, Address: 0x1ee05a0, Func Offset: 0
	// Line 323, Address: 0x1ee05b4, Func Offset: 0x14
	// Line 322, Address: 0x1ee05b8, Func Offset: 0x18
	// Line 323, Address: 0x1ee05bc, Func Offset: 0x1c
	// Line 324, Address: 0x1ee05c8, Func Offset: 0x28
	// Line 325, Address: 0x1ee05d4, Func Offset: 0x34
	// Line 326, Address: 0x1ee05e4, Func Offset: 0x44
	// Line 327, Address: 0x1ee05f4, Func Offset: 0x54
	// Func End, Address: 0x1ee060c, Func Offset: 0x6c
}

// 
// Start address: 0x1ee0610
void set_step(sfObj* obj, int step)
{
	// Line 335, Address: 0x1ee0610, Func Offset: 0
	// Line 337, Address: 0x1ee0614, Func Offset: 0x4
	// Func End, Address: 0x1ee061c, Func Offset: 0xc
}

// 
// Start address: 0x1ee0620
void set_substep(sfObj* obj, int substep)
{
	// Line 346, Address: 0x1ee0620, Func Offset: 0
	// Func End, Address: 0x1ee0628, Func Offset: 0x8
}

// 
// Start address: 0x1ee0630
sfObj* search_obj()
{
	// Line 353, Address: 0x1ee0630, Func Offset: 0
	// Func End, Address: 0x1ee063c, Func Offset: 0xc
}

// 
// Start address: 0x1ee0640
sgAnime* target_anime(EnemyWallGhostWork* ew)
{
	// Line 368, Address: 0x1ee0640, Func Offset: 0
	// Line 369, Address: 0x1ee0654, Func Offset: 0x14
	// Func End, Address: 0x1ee065c, Func Offset: 0x1c
}

// 
// Start address: 0x1ee0660
int anime_is_play_end(EnemyWallGhostWork* ew)
{
	// Line 376, Address: 0x1ee0660, Func Offset: 0
	// Line 377, Address: 0x1ee0668, Func Offset: 0x8
	// Line 379, Address: 0x1ee068c, Func Offset: 0x2c
	// Func End, Address: 0x1ee0698, Func Offset: 0x38
}

// 
// Start address: 0x1ee06a0
int anime_can_change(EnemyWallGhostWork* ew)
{
	int frame;
	int r;
	// Line 386, Address: 0x1ee06a0, Func Offset: 0
	// Line 388, Address: 0x1ee06ac, Func Offset: 0xc
	// Line 389, Address: 0x1ee06c8, Func Offset: 0x28
	// Line 391, Address: 0x1ee06d8, Func Offset: 0x38
	// Line 392, Address: 0x1ee0704, Func Offset: 0x64
	// Line 393, Address: 0x1ee0708, Func Offset: 0x68
	// Line 394, Address: 0x1ee0714, Func Offset: 0x74
	// Line 396, Address: 0x1ee071c, Func Offset: 0x7c
	// Line 397, Address: 0x1ee0720, Func Offset: 0x80
	// Line 398, Address: 0x1ee0728, Func Offset: 0x88
	// Line 400, Address: 0x1ee0730, Func Offset: 0x90
	// Line 404, Address: 0x1ee0768, Func Offset: 0xc8
	// Line 406, Address: 0x1ee0770, Func Offset: 0xd0
	// Line 407, Address: 0x1ee077c, Func Offset: 0xdc
	// Line 408, Address: 0x1ee0784, Func Offset: 0xe4
	// Line 409, Address: 0x1ee0788, Func Offset: 0xe8
	// Line 410, Address: 0x1ee07a8, Func Offset: 0x108
	// Line 413, Address: 0x1ee07ac, Func Offset: 0x10c
	// Line 414, Address: 0x1ee07b0, Func Offset: 0x110
	// Line 415, Address: 0x1ee07b8, Func Offset: 0x118
	// Func End, Address: 0x1ee07c8, Func Offset: 0x128
}

// 
// Start address: 0x1ee07d0
void* anime_data(int anime)
{
	int id;
	// Line 423, Address: 0x1ee07d0, Func Offset: 0
	// Line 422, Address: 0x1ee07d4, Func Offset: 0x4
	// Line 423, Address: 0x1ee07d8, Func Offset: 0x8
	// Line 422, Address: 0x1ee07e0, Func Offset: 0x10
	// Line 423, Address: 0x1ee07e4, Func Offset: 0x14
	// Line 424, Address: 0x1ee07ec, Func Offset: 0x1c
	// Line 426, Address: 0x1ee07fc, Func Offset: 0x2c
	// Func End, Address: 0x1ee0808, Func Offset: 0x38
}

// 
// Start address: 0x1ee0810
void anime_set(sfObj* obj, int anime)
{
	EnemyWallGhostWork* ew;
	sgAnime* panime;
	sgAnime* tanime;
	_anon3* pmixer;
	void* animedata;
	// Line 433, Address: 0x1ee0810, Func Offset: 0
	// Line 438, Address: 0x1ee0830, Func Offset: 0x20
	// Line 439, Address: 0x1ee0834, Func Offset: 0x24
	// Line 440, Address: 0x1ee0840, Func Offset: 0x30
	// Line 441, Address: 0x1ee0848, Func Offset: 0x38
	// Line 442, Address: 0x1ee0850, Func Offset: 0x40
	// Line 443, Address: 0x1ee0860, Func Offset: 0x50
	// Line 444, Address: 0x1ee0864, Func Offset: 0x54
	// Line 443, Address: 0x1ee086c, Func Offset: 0x5c
	// Line 444, Address: 0x1ee0870, Func Offset: 0x60
	// Line 445, Address: 0x1ee0878, Func Offset: 0x68
	// Line 446, Address: 0x1ee0888, Func Offset: 0x78
	// Line 447, Address: 0x1ee0890, Func Offset: 0x80
	// Line 448, Address: 0x1ee0894, Func Offset: 0x84
	// Line 447, Address: 0x1ee0898, Func Offset: 0x88
	// Line 448, Address: 0x1ee08a0, Func Offset: 0x90
	// Line 449, Address: 0x1ee08ac, Func Offset: 0x9c
	// Line 450, Address: 0x1ee08b8, Func Offset: 0xa8
	// Line 451, Address: 0x1ee08c8, Func Offset: 0xb8
	// Line 452, Address: 0x1ee08cc, Func Offset: 0xbc
	// Line 453, Address: 0x1ee08d8, Func Offset: 0xc8
	// Line 454, Address: 0x1ee08e4, Func Offset: 0xd4
	// Line 455, Address: 0x1ee08f0, Func Offset: 0xe0
	// Line 456, Address: 0x1ee0900, Func Offset: 0xf0
	// Line 458, Address: 0x1ee090c, Func Offset: 0xfc
	// Line 459, Address: 0x1ee0918, Func Offset: 0x108
	// Line 460, Address: 0x1ee091c, Func Offset: 0x10c
	// Line 459, Address: 0x1ee0920, Func Offset: 0x110
	// Line 460, Address: 0x1ee0924, Func Offset: 0x114
	// Line 462, Address: 0x1ee0938, Func Offset: 0x128
	// Line 463, Address: 0x1ee093c, Func Offset: 0x12c
	// Func End, Address: 0x1ee095c, Func Offset: 0x14c
}

// 
// Start address: 0x1ee0960
void anime_process(sfObj* obj)
{
	EnemyWallGhostWork* ew;
	// Line 469, Address: 0x1ee0960, Func Offset: 0
	// Line 471, Address: 0x1ee0970, Func Offset: 0x10
	// Line 472, Address: 0x1ee0974, Func Offset: 0x14
	// Line 473, Address: 0x1ee0980, Func Offset: 0x20
	// Line 474, Address: 0x1ee0990, Func Offset: 0x30
	// Line 475, Address: 0x1ee0998, Func Offset: 0x38
	// Line 476, Address: 0x1ee09a8, Func Offset: 0x48
	// Line 477, Address: 0x1ee09b8, Func Offset: 0x58
	// Line 479, Address: 0x1ee09c0, Func Offset: 0x60
	// Line 480, Address: 0x1ee09c8, Func Offset: 0x68
	// Line 482, Address: 0x1ee09d8, Func Offset: 0x78
	// Line 483, Address: 0x1ee09e0, Func Offset: 0x80
	// Func End, Address: 0x1ee09f4, Func Offset: 0x94
}

// 
// Start address: 0x1ee0a00
void step_hidden(sfObj* obj)
{
	EnemyWallGhostWork* ew;
	// Line 489, Address: 0x1ee0a00, Func Offset: 0
	// Line 491, Address: 0x1ee0a0c, Func Offset: 0xc
	// Line 492, Address: 0x1ee0a10, Func Offset: 0x10
	// Line 493, Address: 0x1ee0a1c, Func Offset: 0x1c
	// Line 494, Address: 0x1ee0a24, Func Offset: 0x24
	// Line 495, Address: 0x1ee0a2c, Func Offset: 0x2c
	// Line 497, Address: 0x1ee0a30, Func Offset: 0x30
	// Line 498, Address: 0x1ee0a3c, Func Offset: 0x3c
	// Line 499, Address: 0x1ee0a44, Func Offset: 0x44
	// Line 500, Address: 0x1ee0a4c, Func Offset: 0x4c
	// Line 502, Address: 0x1ee0a54, Func Offset: 0x54
	// Line 500, Address: 0x1ee0a58, Func Offset: 0x58
	// Line 503, Address: 0x1ee0a5c, Func Offset: 0x5c
	// Line 504, Address: 0x1ee0a64, Func Offset: 0x64
	// Line 505, Address: 0x1ee0a6c, Func Offset: 0x6c
	// Line 506, Address: 0x1ee0a74, Func Offset: 0x74
	// Line 507, Address: 0x1ee0a78, Func Offset: 0x78
	// Func End, Address: 0x1ee0a88, Func Offset: 0x88
}

// 
// Start address: 0x1ee0a90
void step_appear(sfObj* obj)
{
	EnemyWallGhostWork* ew;
	float dt;
	float pos[4];
	float rot[4];
	// Line 513, Address: 0x1ee0a90, Func Offset: 0
	// Line 516, Address: 0x1ee0aa0, Func Offset: 0x10
	// Line 517, Address: 0x1ee0aa4, Func Offset: 0x14
	// Line 518, Address: 0x1ee0aac, Func Offset: 0x1c
	// Line 519, Address: 0x1ee0ad4, Func Offset: 0x44
	// Line 520, Address: 0x1ee0ad8, Func Offset: 0x48
	// Line 522, Address: 0x1ee0ae4, Func Offset: 0x54
	// Line 521, Address: 0x1ee0aec, Func Offset: 0x5c
	// Line 522, Address: 0x1ee0af0, Func Offset: 0x60
	// Line 527, Address: 0x1ee0b08, Func Offset: 0x78
	// Line 528, Address: 0x1ee0b38, Func Offset: 0xa8
	// Line 529, Address: 0x1ee0b40, Func Offset: 0xb0
	// Line 528, Address: 0x1ee0b48, Func Offset: 0xb8
	// Line 529, Address: 0x1ee0b4c, Func Offset: 0xbc
	// Line 528, Address: 0x1ee0b50, Func Offset: 0xc0
	// Line 529, Address: 0x1ee0b58, Func Offset: 0xc8
	// Line 530, Address: 0x1ee0b6c, Func Offset: 0xdc
	// Line 531, Address: 0x1ee0b78, Func Offset: 0xe8
	// Line 532, Address: 0x1ee0b84, Func Offset: 0xf4
	// Line 534, Address: 0x1ee0b90, Func Offset: 0x100
	// Line 535, Address: 0x1ee0b9c, Func Offset: 0x10c
	// Line 536, Address: 0x1ee0ba4, Func Offset: 0x114
	// Line 537, Address: 0x1ee0ba8, Func Offset: 0x118
	// Line 539, Address: 0x1ee0bd0, Func Offset: 0x140
	// Line 537, Address: 0x1ee0bd4, Func Offset: 0x144
	// Line 538, Address: 0x1ee0bd8, Func Offset: 0x148
	// Line 539, Address: 0x1ee0bdc, Func Offset: 0x14c
	// Line 540, Address: 0x1ee0be8, Func Offset: 0x158
	// Line 543, Address: 0x1ee0bf0, Func Offset: 0x160
	// Line 542, Address: 0x1ee0bf4, Func Offset: 0x164
	// Line 543, Address: 0x1ee0bf8, Func Offset: 0x168
	// Line 542, Address: 0x1ee0c00, Func Offset: 0x170
	// Line 543, Address: 0x1ee0c04, Func Offset: 0x174
	// Line 544, Address: 0x1ee0c10, Func Offset: 0x180
	// Line 545, Address: 0x1ee0c1c, Func Offset: 0x18c
	// Line 546, Address: 0x1ee0c2c, Func Offset: 0x19c
	// Line 548, Address: 0x1ee0c38, Func Offset: 0x1a8
	// Line 547, Address: 0x1ee0c3c, Func Offset: 0x1ac
	// Line 548, Address: 0x1ee0c40, Func Offset: 0x1b0
	// Line 549, Address: 0x1ee0c4c, Func Offset: 0x1bc
	// Line 550, Address: 0x1ee0c50, Func Offset: 0x1c0
	// Line 551, Address: 0x1ee0c5c, Func Offset: 0x1cc
	// Line 552, Address: 0x1ee0c68, Func Offset: 0x1d8
	// Line 554, Address: 0x1ee0c74, Func Offset: 0x1e4
	// Line 555, Address: 0x1ee0c7c, Func Offset: 0x1ec
	// Line 556, Address: 0x1ee0c80, Func Offset: 0x1f0
	// Line 557, Address: 0x1ee0c90, Func Offset: 0x200
	// Line 561, Address: 0x1ee0c98, Func Offset: 0x208
	// Func End, Address: 0x1ee0cac, Func Offset: 0x21c
}

// 
// Start address: 0x1ee0cb0
void step_normal(sfObj* obj)
{
	EnemyWallGhostWork* ew;
	// Line 567, Address: 0x1ee0cb0, Func Offset: 0
	// Line 570, Address: 0x1ee0cb4, Func Offset: 0x4
	// Line 567, Address: 0x1ee0cb8, Func Offset: 0x8
	// Line 569, Address: 0x1ee0cc4, Func Offset: 0x14
	// Line 570, Address: 0x1ee0ccc, Func Offset: 0x1c
	// Line 572, Address: 0x1ee0ce8, Func Offset: 0x38
	// Line 573, Address: 0x1ee0d00, Func Offset: 0x50
	// Line 574, Address: 0x1ee0d0c, Func Offset: 0x5c
	// Line 575, Address: 0x1ee0d14, Func Offset: 0x64
	// Line 576, Address: 0x1ee0d18, Func Offset: 0x68
	// Line 577, Address: 0x1ee0d28, Func Offset: 0x78
	// Line 578, Address: 0x1ee0d30, Func Offset: 0x80
	// Line 579, Address: 0x1ee0d48, Func Offset: 0x98
	// Line 580, Address: 0x1ee0d6c, Func Offset: 0xbc
	// Line 581, Address: 0x1ee0d74, Func Offset: 0xc4
	// Line 582, Address: 0x1ee0da4, Func Offset: 0xf4
	// Line 586, Address: 0x1ee0dac, Func Offset: 0xfc
	// Line 587, Address: 0x1ee0db0, Func Offset: 0x100
	// Func End, Address: 0x1ee0dc4, Func Offset: 0x114
}

// 
// Start address: 0x1ee0dd0
void step_damage(sfObj* obj)
{
	EnemyWallGhostWork* ew;
	// Line 593, Address: 0x1ee0dd0, Func Offset: 0
	// Line 596, Address: 0x1ee0dd4, Func Offset: 0x4
	// Line 593, Address: 0x1ee0dd8, Func Offset: 0x8
	// Line 596, Address: 0x1ee0de4, Func Offset: 0x14
	// Line 595, Address: 0x1ee0de8, Func Offset: 0x18
	// Line 596, Address: 0x1ee0dec, Func Offset: 0x1c
	// Line 597, Address: 0x1ee0e04, Func Offset: 0x34
	// Line 598, Address: 0x1ee0e08, Func Offset: 0x38
	// Line 599, Address: 0x1ee0e10, Func Offset: 0x40
	// Line 600, Address: 0x1ee0e1c, Func Offset: 0x4c
	// Line 601, Address: 0x1ee0e24, Func Offset: 0x54
	// Line 602, Address: 0x1ee0e28, Func Offset: 0x58
	// Line 603, Address: 0x1ee0e34, Func Offset: 0x64
	// Line 602, Address: 0x1ee0e3c, Func Offset: 0x6c
	// Line 603, Address: 0x1ee0e40, Func Offset: 0x70
	// Line 604, Address: 0x1ee0e5c, Func Offset: 0x8c
	// Line 607, Address: 0x1ee0e64, Func Offset: 0x94
	// Line 608, Address: 0x1ee0e68, Func Offset: 0x98
	// Func End, Address: 0x1ee0e7c, Func Offset: 0xac
}

// 
// Start address: 0x1ee0e80
void step_dead(sfObj* obj)
{
	EnemyWallGhostWork* ew;
	// Line 614, Address: 0x1ee0e80, Func Offset: 0
	// Line 617, Address: 0x1ee0e84, Func Offset: 0x4
	// Line 614, Address: 0x1ee0e88, Func Offset: 0x8
	// Line 617, Address: 0x1ee0e94, Func Offset: 0x14
	// Line 616, Address: 0x1ee0e98, Func Offset: 0x18
	// Line 617, Address: 0x1ee0e9c, Func Offset: 0x1c
	// Line 618, Address: 0x1ee0eb4, Func Offset: 0x34
	// Line 619, Address: 0x1ee0eb8, Func Offset: 0x38
	// Line 620, Address: 0x1ee0ec4, Func Offset: 0x44
	// Line 621, Address: 0x1ee0ecc, Func Offset: 0x4c
	// Line 622, Address: 0x1ee0ed4, Func Offset: 0x54
	// Line 623, Address: 0x1ee0ed8, Func Offset: 0x58
	// Line 625, Address: 0x1ee0f00, Func Offset: 0x80
	// Line 623, Address: 0x1ee0f04, Func Offset: 0x84
	// Line 624, Address: 0x1ee0f08, Func Offset: 0x88
	// Line 625, Address: 0x1ee0f0c, Func Offset: 0x8c
	// Line 626, Address: 0x1ee0f18, Func Offset: 0x98
	// Line 628, Address: 0x1ee0f20, Func Offset: 0xa0
	// Line 629, Address: 0x1ee0f30, Func Offset: 0xb0
	// Line 633, Address: 0x1ee0f38, Func Offset: 0xb8
	// Func End, Address: 0x1ee0f4c, Func Offset: 0xcc
}

// 
// Start address: 0x1ee0f50
void step_disappear(sfObj* obj)
{
	EnemyWallGhostWork* ew;
	// Line 639, Address: 0x1ee0f50, Func Offset: 0
	// Line 642, Address: 0x1ee0f54, Func Offset: 0x4
	// Line 639, Address: 0x1ee0f58, Func Offset: 0x8
	// Line 641, Address: 0x1ee0f68, Func Offset: 0x18
	// Line 642, Address: 0x1ee0f6c, Func Offset: 0x1c
	// Line 644, Address: 0x1ee0f88, Func Offset: 0x38
	// Line 645, Address: 0x1ee0f98, Func Offset: 0x48
	// Line 646, Address: 0x1ee0fa4, Func Offset: 0x54
	// Line 647, Address: 0x1ee0fac, Func Offset: 0x5c
	// Line 648, Address: 0x1ee0fb4, Func Offset: 0x64
	// Line 649, Address: 0x1ee0fb8, Func Offset: 0x68
	// Line 651, Address: 0x1ee0fe0, Func Offset: 0x90
	// Line 649, Address: 0x1ee0fe4, Func Offset: 0x94
	// Line 650, Address: 0x1ee0fe8, Func Offset: 0x98
	// Line 651, Address: 0x1ee0fec, Func Offset: 0x9c
	// Line 653, Address: 0x1ee0ff8, Func Offset: 0xa8
	// Line 655, Address: 0x1ee1000, Func Offset: 0xb0
	// Line 656, Address: 0x1ee1010, Func Offset: 0xc0
	// Line 660, Address: 0x1ee1018, Func Offset: 0xc8
	// Func End, Address: 0x1ee102c, Func Offset: 0xdc
}

// 
// Start address: 0x1ee1030
void EnemyWallGhostAppear(float* pos, float* normal)
{
	sfObj* obj;
	EnemyWallGhostWork* ew;
	// Line 667, Address: 0x1ee1030, Func Offset: 0
	// Line 670, Address: 0x1ee1044, Func Offset: 0x14
	// Line 671, Address: 0x1ee1050, Func Offset: 0x20
	// Line 672, Address: 0x1ee1058, Func Offset: 0x28
	// Line 673, Address: 0x1ee105c, Func Offset: 0x2c
	// Line 674, Address: 0x1ee1064, Func Offset: 0x34
	// Line 675, Address: 0x1ee106c, Func Offset: 0x3c
	// Line 676, Address: 0x1ee1074, Func Offset: 0x44
	// Func End, Address: 0x1ee108c, Func Offset: 0x5c
}

// 
// Start address: 0x1ee1090
void EnemyWallGhostDisappear()
{
	sfObj* obj;
	// Line 714, Address: 0x1ee1090, Func Offset: 0
	// Line 716, Address: 0x1ee1098, Func Offset: 0x8
	// Line 717, Address: 0x1ee10a4, Func Offset: 0x14
	// Line 718, Address: 0x1ee10b0, Func Offset: 0x20
	// Line 720, Address: 0x1ee10c4, Func Offset: 0x34
	// Line 721, Address: 0x1ee10cc, Func Offset: 0x3c
	// Line 722, Address: 0x1ee10d0, Func Offset: 0x40
	// Func End, Address: 0x1ee10dc, Func Offset: 0x4c
}

