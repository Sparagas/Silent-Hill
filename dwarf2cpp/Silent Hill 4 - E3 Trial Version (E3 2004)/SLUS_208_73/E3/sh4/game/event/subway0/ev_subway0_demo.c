typedef struct sfObj;
typedef struct _anon0;
typedef struct sgIKHandle;
typedef struct sgBone;
typedef struct _anon1;
typedef union _anon2;
typedef struct sgAnime;
typedef struct sfCharacter;
typedef struct sgSVModel;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _EventDriver;
typedef enum sgIKSolveResult : unsigned char;

typedef int(*type_0)(sfObj*);
typedef int(*type_3)(sfObj*);
typedef int(*type_4)(sfObj*);
typedef int(*type_6)(sfObj*);
typedef int(*type_8)(sfObj*);
typedef sgIKSolveResult(*type_10)();
typedef void(*type_15)(sfObj*);
typedef void(*type_17)(sgAnime*, int);
typedef void(*type_18)(sfObj*);
typedef void(*type_28)(_anon3*, int, int, float*);

typedef float type_1[4];
typedef unsigned int type_2[2];
typedef float type_5[4][2];
typedef unsigned int type_7[3];
typedef unsigned int type_9[3];
typedef float type_11[4];
typedef _anon2 type_12[4];
typedef unsigned int type_13[3];
typedef _anon2 type_14[256];
typedef void* type_16[4];
typedef unsigned char type_19[4];
typedef short type_20[2];
typedef unsigned short type_21[2];
typedef char type_22[4];
typedef float type_23[4][4];
typedef unsigned char type_24[4];
typedef float type_25[1];
typedef int type_26[1];
typedef float type_27[4];
typedef unsigned int type_29[4];
typedef unsigned int type_30[3];

struct sfObj
{
	_anon2 fwork[256];
	_anon2* work;
	void(*func)(sfObj*);
	_anon2* work_pt0;
	_anon2* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon2* sys_work;
	_anon2* scene_work;
	_anon2* event_work;
	_anon2* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct _anon0
{
	sfCharacter chara;
	int half_demo_start;
	int demo_id;
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

struct _anon1
{
	int is_eileen_stand_ok;
};

union _anon2
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

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon4 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct _anon3
{
	unsigned long tex0;
	unsigned long clamp;
};

struct _anon4
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon3*, int, int, float*);
	int equip_flag;
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
	_anon2 val[4];
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

unsigned int ev_subway0_sb01_008_file[2];
_EventDriver ev_subway0_sb01_008;
unsigned int ev_subway0_sb01_009_file[3];
_EventDriver ev_subway0_sb01_009;
unsigned int ev_subway0_sb02_010_file[3];
char blood_set;
_EventDriver ev_subway0_sb02_010;
_EventDriver ev_subway0_sb09_015;
_EventDriver ev_subway0_sb10_2226;
unsigned int ev_subway0_sb24_017_file[4];
_EventDriver ev_subway0_sb24_017;
unsigned int ev_subway0_sb20_172_file[3];
_EventDriver ev_subway0_sb20_172;
unsigned int ev_subway0_046_file[3];
_EventDriver ev_subway0_sb10_046;
_EventDriver ev_subway0_sb11_046;
_EventDriver ev_subway0_sb07_2700;
_EventDriver ev_subway0_sb23_2701;

int ev_subway0_sb01_008_end(sfObj* obj);
void ev_subway0_sb02_010_demo_bloodset();
int ev_subway0_sb02_010_exec(sfObj* obj);
int ev_subway0_sb02_010_end(sfObj* obj);
int ev_subway0_sb09_015_init(sfObj* obj);
int ev_subway0_sb09_015_exec(sfObj* obj);
int ev_subway0_sb09_015_draw(sfObj* obj);
int ev_subway0_sb09_015_end(sfObj* obj);
int ev_subway0_sb10_2226_end(sfObj* obj);
int ev_subway0_sb24_017_end(sfObj* obj);
int ev_subway0_sb20_172_init(sfObj* obj);
int ev_subway0_sb20_172_exec(sfObj* obj);
int ev_subway0_sb20_172_end(sfObj* obj);
int ev_sb10_046_destruct(sfObj* obj);
int ev_sb11_046_destruct(sfObj* obj);
int ev_subway0_sb23_2701_end(sfObj* obj);

// 
// Start address: 0x1ed5320
int ev_subway0_sb01_008_end(sfObj* obj)
{
	// Line 88, Address: 0x1ed5320, Func Offset: 0
	// Line 90, Address: 0x1ed532c, Func Offset: 0xc
	// Line 92, Address: 0x1ed5334, Func Offset: 0x14
	// Line 93, Address: 0x1ed533c, Func Offset: 0x1c
	// Func End, Address: 0x1ed534c, Func Offset: 0x2c
}

// 
// Start address: 0x1ed5350
void ev_subway0_sb02_010_demo_bloodset()
{
	float pos[4];
	// Line 142, Address: 0x1ed5350, Func Offset: 0
	// Line 145, Address: 0x1ed5354, Func Offset: 0x4
	// Line 142, Address: 0x1ed5358, Func Offset: 0x8
	// Line 145, Address: 0x1ed535c, Func Offset: 0xc
	// Line 148, Address: 0x1ed5368, Func Offset: 0x18
	// Line 149, Address: 0x1ed5378, Func Offset: 0x28
	// Func End, Address: 0x1ed5384, Func Offset: 0x34
}

// 
// Start address: 0x1ed5390
int ev_subway0_sb02_010_exec(sfObj* obj)
{
	int rtv;
	// Line 152, Address: 0x1ed5390, Func Offset: 0
	// Line 155, Address: 0x1ed5394, Func Offset: 0x4
	// Line 152, Address: 0x1ed5398, Func Offset: 0x8
	// Line 155, Address: 0x1ed53a8, Func Offset: 0x18
	// Line 157, Address: 0x1ed53d0, Func Offset: 0x40
	// Line 158, Address: 0x1ed53d4, Func Offset: 0x44
	// Line 159, Address: 0x1ed53dc, Func Offset: 0x4c
	// Line 160, Address: 0x1ed53e8, Func Offset: 0x58
	// Line 161, Address: 0x1ed53f0, Func Offset: 0x60
	// Line 163, Address: 0x1ed53f8, Func Offset: 0x68
	// Line 164, Address: 0x1ed5408, Func Offset: 0x78
	// Line 165, Address: 0x1ed5410, Func Offset: 0x80
	// Line 166, Address: 0x1ed5418, Func Offset: 0x88
	// Line 167, Address: 0x1ed5424, Func Offset: 0x94
	// Line 168, Address: 0x1ed5428, Func Offset: 0x98
	// Line 169, Address: 0x1ed5430, Func Offset: 0xa0
	// Line 171, Address: 0x1ed5438, Func Offset: 0xa8
	// Line 186, Address: 0x1ed5440, Func Offset: 0xb0
	// Line 187, Address: 0x1ed5450, Func Offset: 0xc0
	// Line 188, Address: 0x1ed5494, Func Offset: 0x104
	// Line 189, Address: 0x1ed5498, Func Offset: 0x108
	// Line 190, Address: 0x1ed54b0, Func Offset: 0x120
	// Line 191, Address: 0x1ed54d4, Func Offset: 0x144
	// Line 193, Address: 0x1ed54d8, Func Offset: 0x148
	// Line 194, Address: 0x1ed54e8, Func Offset: 0x158
	// Line 195, Address: 0x1ed54f8, Func Offset: 0x168
	// Line 196, Address: 0x1ed5500, Func Offset: 0x170
	// Line 201, Address: 0x1ed550c, Func Offset: 0x17c
	// Line 203, Address: 0x1ed5510, Func Offset: 0x180
	// Line 204, Address: 0x1ed5514, Func Offset: 0x184
	// Func End, Address: 0x1ed5528, Func Offset: 0x198
	// Line 949, Address: 0x1ed5390, Func Offset: 0
	// Line 954, Address: 0x1ed5394, Func Offset: 0x4
	// Line 949, Address: 0x1ed5398, Func Offset: 0x8
	// Line 954, Address: 0x1ed53a8, Func Offset: 0x18
	// Line 956, Address: 0x1ed53cc, Func Offset: 0x3c
	// Line 958, Address: 0x1ed53d8, Func Offset: 0x48
	// Line 956, Address: 0x1ed53e0, Func Offset: 0x50
	// Line 958, Address: 0x1ed53e8, Func Offset: 0x58
	// Line 959, Address: 0x1ed53f0, Func Offset: 0x60
	// Line 960, Address: 0x1ed53f8, Func Offset: 0x68
	// Line 963, Address: 0x1ed5400, Func Offset: 0x70
	// Line 964, Address: 0x1ed5410, Func Offset: 0x80
	// Line 968, Address: 0x1ed5418, Func Offset: 0x88
	// Line 969, Address: 0x1ed541c, Func Offset: 0x8c
	// Line 971, Address: 0x1ed5424, Func Offset: 0x94
	// Line 975, Address: 0x1ed5450, Func Offset: 0xc0
	// Line 976, Address: 0x1ed546c, Func Offset: 0xdc
	// Line 977, Address: 0x1ed5478, Func Offset: 0xe8
	// Line 979, Address: 0x1ed5488, Func Offset: 0xf8
	// Line 980, Address: 0x1ed5494, Func Offset: 0x104
	// Line 981, Address: 0x1ed549c, Func Offset: 0x10c
	// Line 982, Address: 0x1ed54b4, Func Offset: 0x124
	// Line 984, Address: 0x1ed54b8, Func Offset: 0x128
	// Line 987, Address: 0x1ed54c4, Func Offset: 0x134
	// Line 988, Address: 0x1ed54cc, Func Offset: 0x13c
	// Line 990, Address: 0x1ed54d8, Func Offset: 0x148
	// Line 992, Address: 0x1ed54e0, Func Offset: 0x150
	// Line 994, Address: 0x1ed54e8, Func Offset: 0x158
	// Func End, Address: 0x1ed5500, Func Offset: 0x170
	// Line 414, Address: 0x1ed5390, Func Offset: 0
	// Line 417, Address: 0x1ed5394, Func Offset: 0x4
	// Line 418, Address: 0x1ed53b0, Func Offset: 0x20
	// Func End, Address: 0x1ed53c4, Func Offset: 0x34
}

// 
// Start address: 0x1ed5530
int ev_subway0_sb02_010_end(sfObj* obj)
{
	float ppos[4];
	// Line 207, Address: 0x1ed5530, Func Offset: 0
	// Line 208, Address: 0x1ed5534, Func Offset: 0x4
	// Line 207, Address: 0x1ed5538, Func Offset: 0x8
	// Line 208, Address: 0x1ed553c, Func Offset: 0xc
	// Line 210, Address: 0x1ed5548, Func Offset: 0x18
	// Line 213, Address: 0x1ed5550, Func Offset: 0x20
	// Line 214, Address: 0x1ed555c, Func Offset: 0x2c
	// Line 224, Address: 0x1ed5570, Func Offset: 0x40
	// Line 223, Address: 0x1ed5574, Func Offset: 0x44
	// Line 224, Address: 0x1ed5578, Func Offset: 0x48
	// Func End, Address: 0x1ed5580, Func Offset: 0x50
}

// 
// Start address: 0x1ed5580
int ev_subway0_sb09_015_init(sfObj* obj)
{
	// Line 254, Address: 0x1ed5580, Func Offset: 0
	// Line 255, Address: 0x1ed5584, Func Offset: 0x4
	// Line 254, Address: 0x1ed5588, Func Offset: 0x8
	// Line 255, Address: 0x1ed5590, Func Offset: 0x10
	// Line 260, Address: 0x1ed559c, Func Offset: 0x1c
	// Line 259, Address: 0x1ed55a0, Func Offset: 0x20
	// Line 260, Address: 0x1ed55a4, Func Offset: 0x24
	// Func End, Address: 0x1ed55b0, Func Offset: 0x30
	// Line 1008, Address: 0x1ed5580, Func Offset: 0
	// Line 1009, Address: 0x1ed559c, Func Offset: 0x1c
	// Line 1011, Address: 0x1ed55a4, Func Offset: 0x24
	// Line 1013, Address: 0x1ed55ac, Func Offset: 0x2c
	// Line 1014, Address: 0x1ed55cc, Func Offset: 0x4c
	// Line 1016, Address: 0x1ed55d0, Func Offset: 0x50
	// Line 1019, Address: 0x1ed55e4, Func Offset: 0x64
	// Line 1020, Address: 0x1ed55ec, Func Offset: 0x6c
	// Line 1022, Address: 0x1ed55f0, Func Offset: 0x70
	// Line 1023, Address: 0x1ed5618, Func Offset: 0x98
	// Line 1024, Address: 0x1ed5624, Func Offset: 0xa4
	// Line 1027, Address: 0x1ed5640, Func Offset: 0xc0
	// Line 1028, Address: 0x1ed564c, Func Offset: 0xcc
	// Line 1035, Address: 0x1ed5658, Func Offset: 0xd8
	// Line 1036, Address: 0x1ed5664, Func Offset: 0xe4
	// Line 1038, Address: 0x1ed566c, Func Offset: 0xec
	// Line 1039, Address: 0x1ed567c, Func Offset: 0xfc
	// Line 1041, Address: 0x1ed568c, Func Offset: 0x10c
	// Line 1042, Address: 0x1ed5690, Func Offset: 0x110
	// Func End, Address: 0x1ed56ac, Func Offset: 0x12c
}

// 
// Start address: 0x1ed55b0
int ev_subway0_sb09_015_exec(sfObj* obj)
{
	_anon0* wk;
	float pos[4];
	// Line 263, Address: 0x1ed55b0, Func Offset: 0
	// Line 266, Address: 0x1ed55b4, Func Offset: 0x4
	// Line 263, Address: 0x1ed55b8, Func Offset: 0x8
	// Line 266, Address: 0x1ed55bc, Func Offset: 0xc
	// Line 263, Address: 0x1ed55c0, Func Offset: 0x10
	// Line 266, Address: 0x1ed55c4, Func Offset: 0x14
	// Line 263, Address: 0x1ed55c8, Func Offset: 0x18
	// Line 266, Address: 0x1ed55d0, Func Offset: 0x20
	// Line 265, Address: 0x1ed55d4, Func Offset: 0x24
	// Line 268, Address: 0x1ed55d8, Func Offset: 0x28
	// Line 266, Address: 0x1ed55dc, Func Offset: 0x2c
	// Line 268, Address: 0x1ed55e0, Func Offset: 0x30
	// Line 269, Address: 0x1ed55fc, Func Offset: 0x4c
	// Line 270, Address: 0x1ed5600, Func Offset: 0x50
	// Line 271, Address: 0x1ed5624, Func Offset: 0x74
	// Line 272, Address: 0x1ed562c, Func Offset: 0x7c
	// Line 273, Address: 0x1ed5634, Func Offset: 0x84
	// Line 275, Address: 0x1ed5640, Func Offset: 0x90
	// Line 276, Address: 0x1ed5650, Func Offset: 0xa0
	// Line 279, Address: 0x1ed567c, Func Offset: 0xcc
	// Line 281, Address: 0x1ed5694, Func Offset: 0xe4
	// Line 282, Address: 0x1ed56a0, Func Offset: 0xf0
	// Line 283, Address: 0x1ed56a8, Func Offset: 0xf8
	// Line 286, Address: 0x1ed56d4, Func Offset: 0x124
	// Line 288, Address: 0x1ed56ec, Func Offset: 0x13c
	// Line 290, Address: 0x1ed56f8, Func Offset: 0x148
	// Line 291, Address: 0x1ed5700, Func Offset: 0x150
	// Line 293, Address: 0x1ed5708, Func Offset: 0x158
	// Line 294, Address: 0x1ed5718, Func Offset: 0x168
	// Line 295, Address: 0x1ed5744, Func Offset: 0x194
	// Line 296, Address: 0x1ed5760, Func Offset: 0x1b0
	// Line 297, Address: 0x1ed5768, Func Offset: 0x1b8
	// Line 298, Address: 0x1ed5770, Func Offset: 0x1c0
	// Line 299, Address: 0x1ed577c, Func Offset: 0x1cc
	// Line 300, Address: 0x1ed5780, Func Offset: 0x1d0
	// Line 302, Address: 0x1ed5790, Func Offset: 0x1e0
	// Line 301, Address: 0x1ed5794, Func Offset: 0x1e4
	// Line 302, Address: 0x1ed5798, Func Offset: 0x1e8
	// Line 301, Address: 0x1ed579c, Func Offset: 0x1ec
	// Line 302, Address: 0x1ed57a0, Func Offset: 0x1f0
	// Line 310, Address: 0x1ed57b0, Func Offset: 0x200
	// Line 309, Address: 0x1ed57b8, Func Offset: 0x208
	// Line 310, Address: 0x1ed57bc, Func Offset: 0x20c
	// Func End, Address: 0x1ed57cc, Func Offset: 0x21c
}

// 
// Start address: 0x1ed57d0
int ev_subway0_sb09_015_draw(sfObj* obj)
{
	_anon0* wk;
	// Line 313, Address: 0x1ed57d0, Func Offset: 0
	// Line 314, Address: 0x1ed57dc, Func Offset: 0xc
	// Line 316, Address: 0x1ed57e0, Func Offset: 0x10
	// Line 317, Address: 0x1ed57ec, Func Offset: 0x1c
	// Line 318, Address: 0x1ed57f4, Func Offset: 0x24
	// Line 319, Address: 0x1ed5804, Func Offset: 0x34
	// Line 320, Address: 0x1ed5814, Func Offset: 0x44
	// Line 321, Address: 0x1ed581c, Func Offset: 0x4c
	// Line 322, Address: 0x1ed5824, Func Offset: 0x54
	// Line 325, Address: 0x1ed5838, Func Offset: 0x68
	// Line 324, Address: 0x1ed5840, Func Offset: 0x70
	// Line 325, Address: 0x1ed5844, Func Offset: 0x74
	// Func End, Address: 0x1ed584c, Func Offset: 0x7c
	// Line 642, Address: 0x1ed57d0, Func Offset: 0
	// Line 643, Address: 0x1ed57d4, Func Offset: 0x4
	// Line 642, Address: 0x1ed57d8, Func Offset: 0x8
	// Line 643, Address: 0x1ed57f4, Func Offset: 0x24
	// Line 644, Address: 0x1ed5804, Func Offset: 0x34
	// Line 647, Address: 0x1ed580c, Func Offset: 0x3c
	// Line 652, Address: 0x1ed5810, Func Offset: 0x40
	// Line 654, Address: 0x1ed5818, Func Offset: 0x48
	// Line 652, Address: 0x1ed581c, Func Offset: 0x4c
	// Line 654, Address: 0x1ed5820, Func Offset: 0x50
	// Line 655, Address: 0x1ed584c, Func Offset: 0x7c
	// Line 656, Address: 0x1ed5858, Func Offset: 0x88
	// Line 657, Address: 0x1ed5860, Func Offset: 0x90
	// Line 658, Address: 0x1ed5864, Func Offset: 0x94
	// Line 659, Address: 0x1ed5868, Func Offset: 0x98
	// Line 662, Address: 0x1ed5878, Func Offset: 0xa8
	// Line 660, Address: 0x1ed587c, Func Offset: 0xac
	// Line 662, Address: 0x1ed5880, Func Offset: 0xb0
	// Line 663, Address: 0x1ed5890, Func Offset: 0xc0
	// Line 664, Address: 0x1ed5898, Func Offset: 0xc8
	// Line 665, Address: 0x1ed58a0, Func Offset: 0xd0
	// Line 666, Address: 0x1ed58a8, Func Offset: 0xd8
	// Line 668, Address: 0x1ed58b4, Func Offset: 0xe4
	// Line 671, Address: 0x1ed58c0, Func Offset: 0xf0
	// Line 672, Address: 0x1ed58d0, Func Offset: 0x100
	// Line 673, Address: 0x1ed58dc, Func Offset: 0x10c
	// Line 675, Address: 0x1ed58e8, Func Offset: 0x118
	// Line 677, Address: 0x1ed58f8, Func Offset: 0x128
	// Line 685, Address: 0x1ed5900, Func Offset: 0x130
	// Line 677, Address: 0x1ed5908, Func Offset: 0x138
	// Line 680, Address: 0x1ed5910, Func Offset: 0x140
	// Line 681, Address: 0x1ed5918, Func Offset: 0x148
	// Line 685, Address: 0x1ed591c, Func Offset: 0x14c
	// Line 687, Address: 0x1ed5924, Func Offset: 0x154
	// Line 689, Address: 0x1ed592c, Func Offset: 0x15c
	// Line 691, Address: 0x1ed5934, Func Offset: 0x164
	// Line 692, Address: 0x1ed593c, Func Offset: 0x16c
	// Line 694, Address: 0x1ed5944, Func Offset: 0x174
	// Line 695, Address: 0x1ed5954, Func Offset: 0x184
	// Line 696, Address: 0x1ed595c, Func Offset: 0x18c
	// Line 698, Address: 0x1ed5960, Func Offset: 0x190
	// Line 699, Address: 0x1ed5968, Func Offset: 0x198
	// Line 703, Address: 0x1ed5970, Func Offset: 0x1a0
	// Line 702, Address: 0x1ed5978, Func Offset: 0x1a8
	// Line 703, Address: 0x1ed597c, Func Offset: 0x1ac
	// Func End, Address: 0x1ed5998, Func Offset: 0x1c8
}

// 
// Start address: 0x1ed5850
int ev_subway0_sb09_015_end(sfObj* obj)
{
	_anon0* wk;
	// Line 328, Address: 0x1ed5850, Func Offset: 0
	// Line 329, Address: 0x1ed585c, Func Offset: 0xc
	// Line 331, Address: 0x1ed5860, Func Offset: 0x10
	// Line 332, Address: 0x1ed5868, Func Offset: 0x18
	// Line 333, Address: 0x1ed5870, Func Offset: 0x20
	// Line 336, Address: 0x1ed5878, Func Offset: 0x28
	// Line 335, Address: 0x1ed587c, Func Offset: 0x2c
	// Line 336, Address: 0x1ed5880, Func Offset: 0x30
	// Func End, Address: 0x1ed588c, Func Offset: 0x3c
}

// 
// Start address: 0x1ed5890
int ev_subway0_sb10_2226_end(sfObj* obj)
{
	// Line 367, Address: 0x1ed5890, Func Offset: 0
	// Func End, Address: 0x1ed5898, Func Offset: 0x8
	// Line 1145, Address: 0x1ed5890, Func Offset: 0
	// Line 1147, Address: 0x1ed58bc, Func Offset: 0x2c
	// Func End, Address: 0x1ed58c4, Func Offset: 0x34
}

// 
// Start address: 0x1ed58a0
int ev_subway0_sb24_017_end(sfObj* obj)
{
	// Line 484, Address: 0x1ed58a0, Func Offset: 0
	// Line 485, Address: 0x1ed58a4, Func Offset: 0x4
	// Line 484, Address: 0x1ed58a8, Func Offset: 0x8
	// Line 485, Address: 0x1ed58b4, Func Offset: 0x14
	// Line 487, Address: 0x1ed58bc, Func Offset: 0x1c
	// Line 489, Address: 0x1ed58c4, Func Offset: 0x24
	// Line 490, Address: 0x1ed58cc, Func Offset: 0x2c
	// Func End, Address: 0x1ed58dc, Func Offset: 0x3c
}

// 
// Start address: 0x1ed58e0
int ev_subway0_sb20_172_init(sfObj* obj)
{
	// Line 522, Address: 0x1ed58e0, Func Offset: 0
	// Line 523, Address: 0x1ed58e4, Func Offset: 0x4
	// Line 522, Address: 0x1ed58e8, Func Offset: 0x8
	// Line 523, Address: 0x1ed58f0, Func Offset: 0x10
	// Line 524, Address: 0x1ed5900, Func Offset: 0x20
	// Line 526, Address: 0x1ed5908, Func Offset: 0x28
	// Line 527, Address: 0x1ed590c, Func Offset: 0x2c
	// Line 528, Address: 0x1ed5910, Func Offset: 0x30
	// Line 529, Address: 0x1ed5918, Func Offset: 0x38
	// Func End, Address: 0x1ed5928, Func Offset: 0x48
}

// 
// Start address: 0x1ed5930
int ev_subway0_sb20_172_exec(sfObj* obj)
{
	_anon1* wk;
	// Line 532, Address: 0x1ed5930, Func Offset: 0
	// Line 533, Address: 0x1ed5944, Func Offset: 0x14
	// Line 536, Address: 0x1ed594c, Func Offset: 0x1c
	// Line 538, Address: 0x1ed5960, Func Offset: 0x30
	// Line 539, Address: 0x1ed596c, Func Offset: 0x3c
	// Line 540, Address: 0x1ed5980, Func Offset: 0x50
	// Line 542, Address: 0x1ed5988, Func Offset: 0x58
	// Line 547, Address: 0x1ed5990, Func Offset: 0x60
	// Line 548, Address: 0x1ed5998, Func Offset: 0x68
	// Func End, Address: 0x1ed59ac, Func Offset: 0x7c
	// Line 973, Address: 0x1ed5930, Func Offset: 0
	// Line 974, Address: 0x1ed5948, Func Offset: 0x18
	// Line 976, Address: 0x1ed5950, Func Offset: 0x20
	// Line 979, Address: 0x1ed595c, Func Offset: 0x2c
	// Line 981, Address: 0x1ed596c, Func Offset: 0x3c
	// Line 980, Address: 0x1ed5970, Func Offset: 0x40
	// Line 981, Address: 0x1ed5978, Func Offset: 0x48
	// Line 982, Address: 0x1ed5984, Func Offset: 0x54
	// Line 984, Address: 0x1ed5988, Func Offset: 0x58
	// Line 986, Address: 0x1ed59b8, Func Offset: 0x88
	// Line 987, Address: 0x1ed59bc, Func Offset: 0x8c
	// Line 988, Address: 0x1ed59c4, Func Offset: 0x94
	// Line 989, Address: 0x1ed59c8, Func Offset: 0x98
	// Line 990, Address: 0x1ed59d8, Func Offset: 0xa8
	// Line 992, Address: 0x1ed59f0, Func Offset: 0xc0
	// Line 994, Address: 0x1ed59f4, Func Offset: 0xc4
	// Line 995, Address: 0x1ed59fc, Func Offset: 0xcc
	// Line 996, Address: 0x1ed5a00, Func Offset: 0xd0
	// Line 997, Address: 0x1ed5a08, Func Offset: 0xd8
	// Line 999, Address: 0x1ed5a10, Func Offset: 0xe0
	// Line 1000, Address: 0x1ed5a18, Func Offset: 0xe8
	// Line 999, Address: 0x1ed5a20, Func Offset: 0xf0
	// Line 1000, Address: 0x1ed5a24, Func Offset: 0xf4
	// Line 1001, Address: 0x1ed5a30, Func Offset: 0x100
	// Line 1002, Address: 0x1ed5a34, Func Offset: 0x104
	// Line 1006, Address: 0x1ed5a38, Func Offset: 0x108
	// Line 1007, Address: 0x1ed5a48, Func Offset: 0x118
	// Line 1008, Address: 0x1ed5a4c, Func Offset: 0x11c
	// Line 1010, Address: 0x1ed5a50, Func Offset: 0x120
	// Line 1009, Address: 0x1ed5a54, Func Offset: 0x124
	// Line 1010, Address: 0x1ed5a58, Func Offset: 0x128
	// Line 1009, Address: 0x1ed5a5c, Func Offset: 0x12c
	// Line 1010, Address: 0x1ed5a60, Func Offset: 0x130
	// Line 1013, Address: 0x1ed5a68, Func Offset: 0x138
	// Line 1012, Address: 0x1ed5a70, Func Offset: 0x140
	// Line 1013, Address: 0x1ed5a74, Func Offset: 0x144
	// Func End, Address: 0x1ed5a84, Func Offset: 0x154
}

// 
// Start address: 0x1ed59b0
int ev_subway0_sb20_172_end(sfObj* obj)
{
	float pos0[4];
	// Line 551, Address: 0x1ed59b0, Func Offset: 0
	// Line 552, Address: 0x1ed59b4, Func Offset: 0x4
	// Line 551, Address: 0x1ed59b8, Func Offset: 0x8
	// Line 552, Address: 0x1ed59bc, Func Offset: 0xc
	// Line 551, Address: 0x1ed59c0, Func Offset: 0x10
	// Line 555, Address: 0x1ed59c4, Func Offset: 0x14
	// Line 552, Address: 0x1ed59c8, Func Offset: 0x18
	// Line 555, Address: 0x1ed59d4, Func Offset: 0x24
	// Line 556, Address: 0x1ed59dc, Func Offset: 0x2c
	// Line 558, Address: 0x1ed59f0, Func Offset: 0x40
	// Line 559, Address: 0x1ed59f8, Func Offset: 0x48
	// Line 560, Address: 0x1ed5a00, Func Offset: 0x50
	// Func End, Address: 0x1ed5a10, Func Offset: 0x60
	// Line 680, Address: 0x1ed59b0, Func Offset: 0
	// Line 681, Address: 0x1ed59b4, Func Offset: 0x4
	// Line 680, Address: 0x1ed59b8, Func Offset: 0x8
	// Line 681, Address: 0x1ed59cc, Func Offset: 0x1c
	// Line 682, Address: 0x1ed59dc, Func Offset: 0x2c
	// Line 685, Address: 0x1ed59e4, Func Offset: 0x34
	// Line 688, Address: 0x1ed59f0, Func Offset: 0x40
	// Line 691, Address: 0x1ed5a1c, Func Offset: 0x6c
	// Line 692, Address: 0x1ed5a24, Func Offset: 0x74
	// Line 697, Address: 0x1ed5a28, Func Offset: 0x78
	// Line 692, Address: 0x1ed5a30, Func Offset: 0x80
	// Line 693, Address: 0x1ed5a34, Func Offset: 0x84
	// Line 694, Address: 0x1ed5a3c, Func Offset: 0x8c
	// Line 697, Address: 0x1ed5a44, Func Offset: 0x94
	// Line 699, Address: 0x1ed5a4c, Func Offset: 0x9c
	// Line 700, Address: 0x1ed5a50, Func Offset: 0xa0
	// Line 701, Address: 0x1ed5a64, Func Offset: 0xb4
	// Line 704, Address: 0x1ed5a6c, Func Offset: 0xbc
	// Line 706, Address: 0x1ed5a70, Func Offset: 0xc0
	// Func End, Address: 0x1ed5a8c, Func Offset: 0xdc
}

// 
// Start address: 0x1ed5a10
int ev_sb10_046_destruct(sfObj* obj)
{
	// Line 590, Address: 0x1ed5a10, Func Offset: 0
	// Line 592, Address: 0x1ed5a18, Func Offset: 0x8
	// Line 595, Address: 0x1ed5a20, Func Offset: 0x10
	// Line 598, Address: 0x1ed5a28, Func Offset: 0x18
	// Line 601, Address: 0x1ed5a34, Func Offset: 0x24
	// Line 600, Address: 0x1ed5a38, Func Offset: 0x28
	// Line 601, Address: 0x1ed5a3c, Func Offset: 0x2c
	// Func End, Address: 0x1ed5a44, Func Offset: 0x34
}

// 
// Start address: 0x1ed5a50
int ev_sb11_046_destruct(sfObj* obj)
{
	// Line 616, Address: 0x1ed5a50, Func Offset: 0
	// Line 618, Address: 0x1ed5a58, Func Offset: 0x8
	// Line 621, Address: 0x1ed5a60, Func Offset: 0x10
	// Line 624, Address: 0x1ed5a68, Func Offset: 0x18
	// Line 627, Address: 0x1ed5a74, Func Offset: 0x24
	// Line 626, Address: 0x1ed5a78, Func Offset: 0x28
	// Line 627, Address: 0x1ed5a7c, Func Offset: 0x2c
	// Func End, Address: 0x1ed5a84, Func Offset: 0x34
	// Line 671, Address: 0x1ed5a50, Func Offset: 0
	// Line 672, Address: 0x1ed5a58, Func Offset: 0x8
	// Line 674, Address: 0x1ed5a60, Func Offset: 0x10
	// Line 673, Address: 0x1ed5a64, Func Offset: 0x14
	// Line 674, Address: 0x1ed5a68, Func Offset: 0x18
	// Func End, Address: 0x1ed5a70, Func Offset: 0x20
}

// 
// Start address: 0x1ed5a90
int ev_subway0_sb23_2701_end(sfObj* obj)
{
	float pos0[4];
	float pos1[4];
	float rot[4];
	// Line 649, Address: 0x1ed5a90, Func Offset: 0
	// Line 650, Address: 0x1ed5a94, Func Offset: 0x4
	// Line 649, Address: 0x1ed5a98, Func Offset: 0x8
	// Line 650, Address: 0x1ed5a9c, Func Offset: 0xc
	// Line 649, Address: 0x1ed5aa0, Func Offset: 0x10
	// Line 651, Address: 0x1ed5aa4, Func Offset: 0x14
	// Line 650, Address: 0x1ed5aa8, Func Offset: 0x18
	// Line 655, Address: 0x1ed5ab4, Func Offset: 0x24
	// Line 651, Address: 0x1ed5ab8, Func Offset: 0x28
	// Line 650, Address: 0x1ed5abc, Func Offset: 0x2c
	// Line 651, Address: 0x1ed5ac0, Func Offset: 0x30
	// Line 655, Address: 0x1ed5ac8, Func Offset: 0x38
	// Line 656, Address: 0x1ed5ad0, Func Offset: 0x40
	// Line 657, Address: 0x1ed5aec, Func Offset: 0x5c
	// Line 659, Address: 0x1ed5b00, Func Offset: 0x70
	// Line 660, Address: 0x1ed5b08, Func Offset: 0x78
	// Func End, Address: 0x1ed5b18, Func Offset: 0x88
	// Line 709, Address: 0x1ed5a90, Func Offset: 0
	// Line 710, Address: 0x1ed5a94, Func Offset: 0x4
	// Line 713, Address: 0x1ed5a9c, Func Offset: 0xc
	// Line 715, Address: 0x1ed5aa8, Func Offset: 0x18
	// Func End, Address: 0x1ed5ab0, Func Offset: 0x20
	// Line 1015, Address: 0x1ed5a90, Func Offset: 0
	// Line 1016, Address: 0x1ed5a9c, Func Offset: 0xc
	// Line 1018, Address: 0x1ed5aa4, Func Offset: 0x14
	// Line 1019, Address: 0x1ed5aac, Func Offset: 0x1c
	// Line 1021, Address: 0x1ed5ab0, Func Offset: 0x20
	// Line 1020, Address: 0x1ed5ab4, Func Offset: 0x24
	// Line 1021, Address: 0x1ed5ab8, Func Offset: 0x28
	// Func End, Address: 0x1ed5ac0, Func Offset: 0x30
	// Line 684, Address: 0x1ed5a90, Func Offset: 0
	// Line 685, Address: 0x1ed5a94, Func Offset: 0x4
	// Line 684, Address: 0x1ed5a98, Func Offset: 0x8
	// Line 685, Address: 0x1ed5a9c, Func Offset: 0xc
	// Line 686, Address: 0x1ed5aa8, Func Offset: 0x18
	// Line 690, Address: 0x1ed5aac, Func Offset: 0x1c
	// Line 686, Address: 0x1ed5ab0, Func Offset: 0x20
	// Line 690, Address: 0x1ed5ab8, Func Offset: 0x28
	// Line 685, Address: 0x1ed5ac0, Func Offset: 0x30
	// Line 690, Address: 0x1ed5ac4, Func Offset: 0x34
	// Line 686, Address: 0x1ed5ac8, Func Offset: 0x38
	// Line 690, Address: 0x1ed5acc, Func Offset: 0x3c
	// Line 693, Address: 0x1ed5ad4, Func Offset: 0x44
	// Line 692, Address: 0x1ed5ad8, Func Offset: 0x48
	// Line 693, Address: 0x1ed5adc, Func Offset: 0x4c
	// Func End, Address: 0x1ed5ae4, Func Offset: 0x54
}

