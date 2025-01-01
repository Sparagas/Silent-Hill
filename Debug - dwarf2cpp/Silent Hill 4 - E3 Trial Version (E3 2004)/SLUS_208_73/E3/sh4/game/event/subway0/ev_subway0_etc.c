typedef struct sfObj;
typedef struct sgBone;
typedef struct sgAnime;
typedef struct sgIKHandle;
typedef struct _anon0;
typedef struct sfCldObject;
typedef struct _anon1;
typedef struct sgSVModel;
typedef union _anon2;
typedef struct sfCharacter;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _GAME_WORK;
typedef struct sgQTNode;
typedef struct sfCldPart;
typedef struct _anon5;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _EventInst;
typedef struct sgQTObject;
typedef struct _SubtitleMessageData;
typedef struct _EventDriver;
typedef struct _anon6;
typedef struct sfOffsetAABB;
typedef struct EventFlag;
typedef struct _anon7;
typedef union sfCldBody;
typedef struct _anon8;
typedef struct _anon9;

typedef int(*type_0)(sfObj*);
typedef void(*type_5)(sgAnime*, int);
typedef void(*type_13)(sfObj*);
typedef void(*type_19)(sfObj*);
typedef void(*type_23)(_anon3*, int, int, float*);
typedef int(*type_36)(sfObj*);
typedef int(*type_39)(sfObj*);
typedef sgIKSolveResult(*type_43)();
typedef int(*type_44)(sfObj*);
typedef int(*type_47)(sfObj*);
typedef int(*type_48)(sfObj*);
typedef int(*type_49)(sfObj*);

typedef unsigned char type_1[3];
typedef _anon2 type_2[4];
typedef void* type_3[4];
typedef int type_4[1];
typedef int type_6[1];
typedef float type_7[4];
typedef _anon2 type_8[256];
typedef int type_9[1];
typedef _SubtitleMessageData type_10[7];
typedef float type_11[4][4];
typedef unsigned char type_12[4];
typedef _anon2 type_14[0];
typedef _anon2 type_15[0];
typedef int type_16[1];
typedef _anon2 type_17[10];
typedef int type_18[1];
typedef int type_20[1];
typedef float type_21[4];
typedef float type_22[4][2];
typedef sfCldPart* type_24[6];
typedef unsigned char type_25[3];
typedef float type_26[4][2];
typedef int type_27[1];
typedef float type_28[4][4];
typedef float type_29[2];
typedef short type_30[2];
typedef unsigned short type_31[2];
typedef float type_32[4][4];
typedef char type_33[4];
typedef float type_34[2];
typedef unsigned char type_35[4];
typedef float type_37[1];
typedef int type_38[1];
typedef float type_40[4];
typedef float type_41[4][2];
typedef float type_42[4];
typedef float type_45[4];
typedef unsigned char type_46[320];

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

struct _anon0
{
	sfCharacter chara;
	sfCldObject cld_obj;
};

struct sfCldObject
{
	sgQTObject tree_object;
	sgQTNode* stay_node;
	sfCldPart* parts[6];
	unsigned char n_parts;
	unsigned char pad[3];
	void* data;
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
	_anon2 dmy[10];
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
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

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon4 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
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

struct _GAME_WORK
{
	int init_at_cold[1];
	int logo_displayed;
	int init_at_warm[1];
	int game_init_executed;
	void* warm_memory_top;
	int load_stage_start;
	int continue_play;
	int game_overed;
	int risky_continue_count;
	int level;
	int init_at_game[1];
	void* game_memory_top;
	int stage;
	int scene;
	int prev_scene;
	int prev_stage;
	int next_stage;
	int next_scene;
	int start_door;
	int world;
	int real_scene;
	float current_camera_mtx[4][4];
	float next_camera_mtx[4][4];
	float game_camera_back[4][4];
	float game_view_angle;
	float game_view_angle_back;
	float map_offset[4];
	void* player;
	int control;
	int player_pos;
	unsigned int next_flags;
	int gameover;
	int gameover_ok;
	int game_complete;
	int gauge;
	int event_disable;
	int eileen_status;
	int cynthia_status;
	int pause_disable_contine;
	unsigned int play_time;
	unsigned int continue_count;
	unsigned int killed_enemy;
	unsigned int held_ghost;
	int update_continue;
	int continue_item;
	int now_peeping;
	unsigned int pre_eil_timer;
	unsigned int eil_interval;
	int pre_demo_index;
	unsigned int pre_demo_type;
	unsigned int pre_door_timer;
	unsigned int door_interval;
	unsigned int pre_door_demo_no;
	int init_at_stage[1];
	void* stage_memory_top;
	int stage_data_save;
	int init_at_scene[1];
	void* scene_memory_top;
	void* snap_texture_load_buffer;
	int game_mode;
	int shadow_density;
	int door_move_disable;
	int fog_effect_off;
	int init_at_loop[1];
	int game_in_action;
	int player_touch_door_no;
	int* passing_door;
	int work_end[1];
	int open_door_sn;
	int open_door_dn;
	int close_door_se_disable;
	int close_door_se_reserve;
};

struct sgQTNode
{
	int dummy;
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

struct _anon5
{
	float dst[4];
	float eil_dst[4];
	float rot;
	float eil_rot;
	int bri;
	int cnt;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct _EventInst
{
	_EventDriver evdrv;
	unsigned int attr;
	int(*drawaf)(sfObj*);
	int(*endexitf)(sfObj*);
};

struct sgQTObject
{
	_anon7 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

struct _SubtitleMessageData
{
	short pack_id;
	short msg_id;
	float time;
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

struct _anon6
{
	float start[4];
	float end[4];
};

struct sfOffsetAABB
{
	_anon8 aabb;
	float offset[4];
};

struct EventFlag
{
	unsigned char flag[320];
};

struct _anon7
{
	float center[4];
	float radius;
};

union sfCldBody
{
	_anon9 obb;
	_anon8 aabb;
	sfOffsetAABB offset_aabb;
	_anon6 line;
	_anon7 sphere;
};

struct _anon8
{
	float bmin[4];
	float bmax[4];
};

struct _anon9
{
	float mat[4][4];
	float half_w[4];
};

_EventDriver ev_subway0_074;
EventFlag event_flag;
_GAME_WORK gamew;
float sg_vector_unit_z[4];
_anon2 CynthiasPass_Use[0];
_anon2 CoinOfLynchStreetLine_Use[0];
_EventDriver ev_subway0_084;
_EventDriver ev_subway0_173;
_EventDriver ev_subway0_177;
_SubtitleMessageData ev_016_mes[7];
_EventDriver ev_subway0_016;
_EventDriver ev_subway0_sb14_2224;
float sg_vector_unit_w[4];
_EventDriver ev_subway0_sb14_2224_after;
_EventDriver ev_sb14_map_train_on;

void Sb03ManequinConstruct(sfObj* obj);
void Sb03ManequinExec();
void Sb03ManequinDraw();
void Sb03ManequinDestruct(sfObj* obj);
void Sb03CoinConstruct(sfObj* obj);
void Sb03CoinExec();
void Sb03CoinDraw(sfObj* obj);
void Sb03CoinDestruct(sfObj* obj);
void through_init();
int through_gate(sfObj* obj, int use_coin);
void through_end();
int ev_subway0_084_construct(sfObj* obj);
int ev_subway0_084_exec(sfObj* obj);
int ev_subway0_084_end();
int ev_subway0_173_exec(sfObj* obj);
int ev_subway0_177_construct(sfObj* obj);
int ev_subway0_177_exec(sfObj* obj);
int ev_subway0_177_end();
int ev_subway0_016_init();
int ev_subway0_016_exec(sfObj* obj);
int ev_subway0_016_end();
int dummy();
int ev_subway0_sb14_2224_exec();
int ev_subway0_sb14_2224_end();
int ev_subway0_sb14_after_2224_exec(sfObj* obj);
int ev_subway0_sb14_after_2224_end();
void sb15_button_init(sfObj* obj);
void sb15_button_exec();
void sb15_button_draw(sfObj* obj);
void sb15_button_end(sfObj* obj);
int train_on();
int cam_horsewhip_trgchk();

// 
// Start address: 0x1ed5b20
void Sb03ManequinConstruct(sfObj* obj)
{
	_anon1* ow;
	_anon0* m;
	sfCldObject* cld;
	_anon1* fig;
	float pos[4];
	// Line 103, Address: 0x1ed5b20, Func Offset: 0
	// Line 105, Address: 0x1ed5b3c, Func Offset: 0x1c
	// Line 107, Address: 0x1ed5b48, Func Offset: 0x28
	// Line 108, Address: 0x1ed5b50, Func Offset: 0x30
	// Line 111, Address: 0x1ed5b88, Func Offset: 0x68
	// Line 112, Address: 0x1ed5b94, Func Offset: 0x74
	// Line 113, Address: 0x1ed5b9c, Func Offset: 0x7c
	// Line 115, Address: 0x1ed5ba4, Func Offset: 0x84
	// Line 113, Address: 0x1ed5ba8, Func Offset: 0x88
	// Line 117, Address: 0x1ed5bac, Func Offset: 0x8c
	// Line 118, Address: 0x1ed5bb4, Func Offset: 0x94
	// Line 121, Address: 0x1ed5bec, Func Offset: 0xcc
	// Line 122, Address: 0x1ed5bf8, Func Offset: 0xd8
	// Line 123, Address: 0x1ed5c00, Func Offset: 0xe0
	// Line 127, Address: 0x1ed5c08, Func Offset: 0xe8
	// Line 128, Address: 0x1ed5c1c, Func Offset: 0xfc
	// Line 132, Address: 0x1ed5c24, Func Offset: 0x104
	// Line 134, Address: 0x1ed5c30, Func Offset: 0x110
	// Line 137, Address: 0x1ed5c5c, Func Offset: 0x13c
	// Line 141, Address: 0x1ed5c74, Func Offset: 0x154
	// Line 142, Address: 0x1ed5c7c, Func Offset: 0x15c
	// Line 143, Address: 0x1ed5c88, Func Offset: 0x168
	// Line 144, Address: 0x1ed5c90, Func Offset: 0x170
	// Line 147, Address: 0x1ed5c98, Func Offset: 0x178
	// Line 151, Address: 0x1ed5c9c, Func Offset: 0x17c
	// Line 147, Address: 0x1ed5ca4, Func Offset: 0x184
	// Line 148, Address: 0x1ed5ca8, Func Offset: 0x188
	// Line 149, Address: 0x1ed5cb0, Func Offset: 0x190
	// Line 151, Address: 0x1ed5cb8, Func Offset: 0x198
	// Line 155, Address: 0x1ed5cc0, Func Offset: 0x1a0
	// Line 158, Address: 0x1ed5ccc, Func Offset: 0x1ac
	// Line 159, Address: 0x1ed5ce4, Func Offset: 0x1c4
	// Func End, Address: 0x1ed5d08, Func Offset: 0x1e8
}

// 
// Start address: 0x1ed5d10
void Sb03ManequinExec()
{
	// Line 164, Address: 0x1ed5d10, Func Offset: 0
	// Func End, Address: 0x1ed5d18, Func Offset: 0x8
	// Line 767, Address: 0x1ed5d10, Func Offset: 0
	// Line 768, Address: 0x1ed5d18, Func Offset: 0x8
	// Line 770, Address: 0x1ed5d20, Func Offset: 0x10
	// Line 769, Address: 0x1ed5d24, Func Offset: 0x14
	// Line 770, Address: 0x1ed5d28, Func Offset: 0x18
	// Func End, Address: 0x1ed5d30, Func Offset: 0x20
}

// 
// Start address: 0x1ed5d20
void Sb03ManequinDraw()
{
	// Line 169, Address: 0x1ed5d20, Func Offset: 0
	// Func End, Address: 0x1ed5d28, Func Offset: 0x8
	// Line 361, Address: 0x1ed5d20, Func Offset: 0
	// Line 362, Address: 0x1ed5d2c, Func Offset: 0xc
	// Line 363, Address: 0x1ed5d34, Func Offset: 0x14
	// Line 364, Address: 0x1ed5d3c, Func Offset: 0x1c
	// Line 365, Address: 0x1ed5d4c, Func Offset: 0x2c
	// Line 367, Address: 0x1ed5d5c, Func Offset: 0x3c
	// Line 368, Address: 0x1ed5d6c, Func Offset: 0x4c
	// Line 370, Address: 0x1ed5d78, Func Offset: 0x58
	// Line 372, Address: 0x1ed5d8c, Func Offset: 0x6c
	// Line 374, Address: 0x1ed5d90, Func Offset: 0x70
	// Line 375, Address: 0x1ed5d98, Func Offset: 0x78
	// Func End, Address: 0x1ed5da8, Func Offset: 0x88
}

// 
// Start address: 0x1ed5d30
void Sb03ManequinDestruct(sfObj* obj)
{
	_anon0* m;
	// Line 173, Address: 0x1ed5d30, Func Offset: 0
	// Line 174, Address: 0x1ed5d44, Func Offset: 0x14
	// Line 179, Address: 0x1ed5d4c, Func Offset: 0x1c
	// Line 180, Address: 0x1ed5d54, Func Offset: 0x24
	// Line 181, Address: 0x1ed5d5c, Func Offset: 0x2c
	// Line 183, Address: 0x1ed5d68, Func Offset: 0x38
	// Func End, Address: 0x1ed5d7c, Func Offset: 0x4c
	// Line 920, Address: 0x1ed5d30, Func Offset: 0
	// Line 924, Address: 0x1ed5d34, Func Offset: 0x4
	// Line 920, Address: 0x1ed5d38, Func Offset: 0x8
	// Line 922, Address: 0x1ed5d40, Func Offset: 0x10
	// Line 924, Address: 0x1ed5d44, Func Offset: 0x14
	// Line 925, Address: 0x1ed5d4c, Func Offset: 0x1c
	// Line 926, Address: 0x1ed5d68, Func Offset: 0x38
	// Line 928, Address: 0x1ed5d78, Func Offset: 0x48
	// Line 930, Address: 0x1ed5d80, Func Offset: 0x50
	// Line 931, Address: 0x1ed5d8c, Func Offset: 0x5c
	// Line 938, Address: 0x1ed5d94, Func Offset: 0x64
	// Line 937, Address: 0x1ed5d98, Func Offset: 0x68
	// Line 938, Address: 0x1ed5d9c, Func Offset: 0x6c
	// Func End, Address: 0x1ed5da8, Func Offset: 0x78
	// Line 772, Address: 0x1ed5d30, Func Offset: 0
	// Line 773, Address: 0x1ed5d38, Func Offset: 0x8
	// Line 775, Address: 0x1ed5d40, Func Offset: 0x10
	// Line 774, Address: 0x1ed5d44, Func Offset: 0x14
	// Line 775, Address: 0x1ed5d48, Func Offset: 0x18
	// Func End, Address: 0x1ed5d50, Func Offset: 0x20
}

// 
// Start address: 0x1ed5d80
void Sb03CoinConstruct(sfObj* obj)
{
	_anon1* ow;
	sfCharacter* chara;
	_anon1* fig;
	float pos[4];
	// Line 190, Address: 0x1ed5d80, Func Offset: 0
	// Line 192, Address: 0x1ed5d94, Func Offset: 0x14
	// Line 194, Address: 0x1ed5da0, Func Offset: 0x20
	// Line 195, Address: 0x1ed5da8, Func Offset: 0x28
	// Line 196, Address: 0x1ed5de0, Func Offset: 0x60
	// Line 197, Address: 0x1ed5dec, Func Offset: 0x6c
	// Line 198, Address: 0x1ed5df4, Func Offset: 0x74
	// Line 200, Address: 0x1ed5dfc, Func Offset: 0x7c
	// Line 198, Address: 0x1ed5e00, Func Offset: 0x80
	// Line 202, Address: 0x1ed5e04, Func Offset: 0x84
	// Line 203, Address: 0x1ed5e0c, Func Offset: 0x8c
	// Line 204, Address: 0x1ed5e44, Func Offset: 0xc4
	// Line 205, Address: 0x1ed5e50, Func Offset: 0xd0
	// Line 206, Address: 0x1ed5e58, Func Offset: 0xd8
	// Line 210, Address: 0x1ed5e60, Func Offset: 0xe0
	// Line 211, Address: 0x1ed5e74, Func Offset: 0xf4
	// Line 213, Address: 0x1ed5e7c, Func Offset: 0xfc
	// Line 215, Address: 0x1ed5e88, Func Offset: 0x108
	// Line 218, Address: 0x1ed5eb4, Func Offset: 0x134
	// Line 221, Address: 0x1ed5ebc, Func Offset: 0x13c
	// Line 225, Address: 0x1ed5ec0, Func Offset: 0x140
	// Line 221, Address: 0x1ed5ec8, Func Offset: 0x148
	// Line 222, Address: 0x1ed5ecc, Func Offset: 0x14c
	// Line 223, Address: 0x1ed5ed4, Func Offset: 0x154
	// Line 225, Address: 0x1ed5edc, Func Offset: 0x15c
	// Line 227, Address: 0x1ed5ee4, Func Offset: 0x164
	// Line 228, Address: 0x1ed5ee8, Func Offset: 0x168
	// Func End, Address: 0x1ed5f00, Func Offset: 0x180
	// Line 783, Address: 0x1ed5d80, Func Offset: 0
	// Line 785, Address: 0x1ed5d84, Func Offset: 0x4
	// Line 783, Address: 0x1ed5d88, Func Offset: 0x8
	// Line 785, Address: 0x1ed5d94, Func Offset: 0x14
	// Line 786, Address: 0x1ed5d9c, Func Offset: 0x1c
	// Line 787, Address: 0x1ed5dc8, Func Offset: 0x48
	// Line 789, Address: 0x1ed5dd0, Func Offset: 0x50
	// Line 788, Address: 0x1ed5dd4, Func Offset: 0x54
	// Line 789, Address: 0x1ed5dd8, Func Offset: 0x58
	// Func End, Address: 0x1ed5de4, Func Offset: 0x64
}

// 
// Start address: 0x1ed5f00
void Sb03CoinExec()
{
	// Line 233, Address: 0x1ed5f00, Func Offset: 0
	// Func End, Address: 0x1ed5f08, Func Offset: 0x8
	// Line 1195, Address: 0x1ed5f00, Func Offset: 0
	// Line 1196, Address: 0x1ed5f0c, Func Offset: 0xc
	// Line 1197, Address: 0x1ed5f10, Func Offset: 0x10
	// Func End, Address: 0x1ed5f18, Func Offset: 0x18
}

// 
// Start address: 0x1ed5f10
void Sb03CoinDraw(sfObj* obj)
{
	sfCharacter* chara;
	// Line 236, Address: 0x1ed5f10, Func Offset: 0
	// Line 237, Address: 0x1ed5f1c, Func Offset: 0xc
	// Line 240, Address: 0x1ed5f24, Func Offset: 0x14
	// Line 241, Address: 0x1ed5f34, Func Offset: 0x24
	// Line 243, Address: 0x1ed5f3c, Func Offset: 0x2c
	// Line 244, Address: 0x1ed5f40, Func Offset: 0x30
	// Func End, Address: 0x1ed5f4c, Func Offset: 0x3c
	// Line 181, Address: 0x1ed5f10, Func Offset: 0
	// Line 184, Address: 0x1ed5f14, Func Offset: 0x4
	// Line 181, Address: 0x1ed5f18, Func Offset: 0x8
	// Line 184, Address: 0x1ed5f1c, Func Offset: 0xc
	// Line 181, Address: 0x1ed5f20, Func Offset: 0x10
	// Line 184, Address: 0x1ed5f24, Func Offset: 0x14
	// Line 181, Address: 0x1ed5f28, Func Offset: 0x18
	// Line 186, Address: 0x1ed5f2c, Func Offset: 0x1c
	// Line 181, Address: 0x1ed5f30, Func Offset: 0x20
	// Line 183, Address: 0x1ed5f34, Func Offset: 0x24
	// Line 184, Address: 0x1ed5f38, Func Offset: 0x28
	// Line 186, Address: 0x1ed5f40, Func Offset: 0x30
	// Line 187, Address: 0x1ed5f5c, Func Offset: 0x4c
	// Line 188, Address: 0x1ed5f60, Func Offset: 0x50
	// Line 189, Address: 0x1ed5f68, Func Offset: 0x58
	// Line 190, Address: 0x1ed5f70, Func Offset: 0x60
	// Line 191, Address: 0x1ed5f7c, Func Offset: 0x6c
	// Line 192, Address: 0x1ed5f88, Func Offset: 0x78
	// Line 194, Address: 0x1ed5f9c, Func Offset: 0x8c
	// Line 197, Address: 0x1ed5fc8, Func Offset: 0xb8
	// Line 199, Address: 0x1ed5fe0, Func Offset: 0xd0
	// Line 200, Address: 0x1ed5fec, Func Offset: 0xdc
	// Line 201, Address: 0x1ed5ff8, Func Offset: 0xe8
	// Line 204, Address: 0x1ed6024, Func Offset: 0x114
	// Line 205, Address: 0x1ed6030, Func Offset: 0x120
	// Line 206, Address: 0x1ed6038, Func Offset: 0x128
	// Line 208, Address: 0x1ed6040, Func Offset: 0x130
	// Line 209, Address: 0x1ed6054, Func Offset: 0x144
	// Line 210, Address: 0x1ed6060, Func Offset: 0x150
	// Line 214, Address: 0x1ed6070, Func Offset: 0x160
	// Line 215, Address: 0x1ed6078, Func Offset: 0x168
	// Line 216, Address: 0x1ed6080, Func Offset: 0x170
	// Line 217, Address: 0x1ed6088, Func Offset: 0x178
	// Line 218, Address: 0x1ed6094, Func Offset: 0x184
	// Line 220, Address: 0x1ed60a0, Func Offset: 0x190
	// Line 221, Address: 0x1ed60b0, Func Offset: 0x1a0
	// Line 226, Address: 0x1ed60cc, Func Offset: 0x1bc
	// Line 227, Address: 0x1ed60d4, Func Offset: 0x1c4
	// Line 228, Address: 0x1ed60dc, Func Offset: 0x1cc
	// Line 229, Address: 0x1ed60e4, Func Offset: 0x1d4
	// Line 230, Address: 0x1ed60f0, Func Offset: 0x1e0
	// Line 233, Address: 0x1ed60fc, Func Offset: 0x1ec
	// Line 235, Address: 0x1ed6100, Func Offset: 0x1f0
	// Line 237, Address: 0x1ed6110, Func Offset: 0x200
	// Line 238, Address: 0x1ed6120, Func Offset: 0x210
	// Line 239, Address: 0x1ed6128, Func Offset: 0x218
	// Line 240, Address: 0x1ed6134, Func Offset: 0x224
	// Line 241, Address: 0x1ed6140, Func Offset: 0x230
	// Line 242, Address: 0x1ed6148, Func Offset: 0x238
	// Line 243, Address: 0x1ed6150, Func Offset: 0x240
	// Line 244, Address: 0x1ed615c, Func Offset: 0x24c
	// Line 245, Address: 0x1ed6164, Func Offset: 0x254
	// Line 244, Address: 0x1ed6168, Func Offset: 0x258
	// Line 245, Address: 0x1ed616c, Func Offset: 0x25c
	// Line 244, Address: 0x1ed6170, Func Offset: 0x260
	// Line 245, Address: 0x1ed6174, Func Offset: 0x264
	// Line 244, Address: 0x1ed6178, Func Offset: 0x268
	// Line 245, Address: 0x1ed617c, Func Offset: 0x26c
	// Line 246, Address: 0x1ed6184, Func Offset: 0x274
	// Line 247, Address: 0x1ed6188, Func Offset: 0x278
	// Line 248, Address: 0x1ed6190, Func Offset: 0x280
	// Line 249, Address: 0x1ed6194, Func Offset: 0x284
	// Line 250, Address: 0x1ed6198, Func Offset: 0x288
	// Line 252, Address: 0x1ed61a8, Func Offset: 0x298
	// Line 259, Address: 0x1ed61b0, Func Offset: 0x2a0
	// Line 260, Address: 0x1ed61bc, Func Offset: 0x2ac
	// Line 263, Address: 0x1ed61d0, Func Offset: 0x2c0
	// Line 266, Address: 0x1ed61d8, Func Offset: 0x2c8
	// Line 265, Address: 0x1ed61dc, Func Offset: 0x2cc
	// Line 266, Address: 0x1ed61e0, Func Offset: 0x2d0
	// Func End, Address: 0x1ed61f4, Func Offset: 0x2e4
}

// 
// Start address: 0x1ed5f50
void Sb03CoinDestruct(sfObj* obj)
{
	// Line 248, Address: 0x1ed5f50, Func Offset: 0
	// Line 249, Address: 0x1ed5f5c, Func Offset: 0xc
	// Line 252, Address: 0x1ed5f64, Func Offset: 0x14
	// Line 253, Address: 0x1ed5f6c, Func Offset: 0x1c
	// Line 254, Address: 0x1ed5f70, Func Offset: 0x20
	// Func End, Address: 0x1ed5f7c, Func Offset: 0x2c
	// Line 834, Address: 0x1ed5f50, Func Offset: 0
	// Line 835, Address: 0x1ed5f58, Func Offset: 0x8
	// Line 837, Address: 0x1ed5f60, Func Offset: 0x10
	// Line 836, Address: 0x1ed5f64, Func Offset: 0x14
	// Line 837, Address: 0x1ed5f68, Func Offset: 0x18
	// Func End, Address: 0x1ed5f70, Func Offset: 0x20
}

// 
// Start address: 0x1ed5f80
void through_init()
{
	// Line 281, Address: 0x1ed5f80, Func Offset: 0
	// Line 283, Address: 0x1ed5f88, Func Offset: 0x8
	// Line 285, Address: 0x1ed5f90, Func Offset: 0x10
	// Line 287, Address: 0x1ed5f98, Func Offset: 0x18
	// Line 289, Address: 0x1ed5fa0, Func Offset: 0x20
	// Line 290, Address: 0x1ed5fa8, Func Offset: 0x28
	// Func End, Address: 0x1ed5fb4, Func Offset: 0x34
}

// 
// Start address: 0x1ed5fc0
int through_gate(sfObj* obj, int use_coin)
{
	int rtv;
	_anon5* wk;
	_EventInst* inst;
	float r[4];
	// Line 294, Address: 0x1ed5fc0, Func Offset: 0
	// Line 299, Address: 0x1ed5fc4, Func Offset: 0x4
	// Line 294, Address: 0x1ed5fc8, Func Offset: 0x8
	// Line 295, Address: 0x1ed5fe0, Func Offset: 0x20
	// Line 294, Address: 0x1ed5fe4, Func Offset: 0x24
	// Line 299, Address: 0x1ed5fe8, Func Offset: 0x28
	// Line 296, Address: 0x1ed5fec, Func Offset: 0x2c
	// Line 299, Address: 0x1ed5ff0, Func Offset: 0x30
	// Line 301, Address: 0x1ed6030, Func Offset: 0x70
	// Line 302, Address: 0x1ed6038, Func Offset: 0x78
	// Line 303, Address: 0x1ed6040, Func Offset: 0x80
	// Line 304, Address: 0x1ed6048, Func Offset: 0x88
	// Line 305, Address: 0x1ed6058, Func Offset: 0x98
	// Line 307, Address: 0x1ed6060, Func Offset: 0xa0
	// Line 308, Address: 0x1ed6074, Func Offset: 0xb4
	// Line 309, Address: 0x1ed6078, Func Offset: 0xb8
	// Line 311, Address: 0x1ed6080, Func Offset: 0xc0
	// Line 314, Address: 0x1ed608c, Func Offset: 0xcc
	// Line 315, Address: 0x1ed6090, Func Offset: 0xd0
	// Line 318, Address: 0x1ed60a0, Func Offset: 0xe0
	// Line 320, Address: 0x1ed60a8, Func Offset: 0xe8
	// Line 322, Address: 0x1ed60ac, Func Offset: 0xec
	// Line 324, Address: 0x1ed60b4, Func Offset: 0xf4
	// Line 325, Address: 0x1ed60b8, Func Offset: 0xf8
	// Line 326, Address: 0x1ed60dc, Func Offset: 0x11c
	// Line 327, Address: 0x1ed60f8, Func Offset: 0x138
	// Line 328, Address: 0x1ed6100, Func Offset: 0x140
	// Line 331, Address: 0x1ed6118, Func Offset: 0x158
	// Line 333, Address: 0x1ed6120, Func Offset: 0x160
	// Line 334, Address: 0x1ed613c, Func Offset: 0x17c
	// Line 336, Address: 0x1ed6148, Func Offset: 0x188
	// Line 338, Address: 0x1ed6150, Func Offset: 0x190
	// Line 341, Address: 0x1ed6158, Func Offset: 0x198
	// Line 342, Address: 0x1ed6174, Func Offset: 0x1b4
	// Line 343, Address: 0x1ed617c, Func Offset: 0x1bc
	// Line 344, Address: 0x1ed6194, Func Offset: 0x1d4
	// Line 346, Address: 0x1ed6198, Func Offset: 0x1d8
	// Line 347, Address: 0x1ed61a4, Func Offset: 0x1e4
	// Line 350, Address: 0x1ed61b0, Func Offset: 0x1f0
	// Line 352, Address: 0x1ed61c0, Func Offset: 0x200
	// Line 355, Address: 0x1ed61d4, Func Offset: 0x214
	// Line 360, Address: 0x1ed61f0, Func Offset: 0x230
	// Line 361, Address: 0x1ed61f4, Func Offset: 0x234
	// Line 363, Address: 0x1ed61fc, Func Offset: 0x23c
	// Line 365, Address: 0x1ed6204, Func Offset: 0x244
	// Line 367, Address: 0x1ed6208, Func Offset: 0x248
	// Line 368, Address: 0x1ed6244, Func Offset: 0x284
	// Line 369, Address: 0x1ed6248, Func Offset: 0x288
	// Line 371, Address: 0x1ed6250, Func Offset: 0x290
	// Line 374, Address: 0x1ed6258, Func Offset: 0x298
	// Line 375, Address: 0x1ed627c, Func Offset: 0x2bc
	// Line 376, Address: 0x1ed6298, Func Offset: 0x2d8
	// Line 377, Address: 0x1ed629c, Func Offset: 0x2dc
	// Line 382, Address: 0x1ed62a0, Func Offset: 0x2e0
	// Line 383, Address: 0x1ed62a4, Func Offset: 0x2e4
	// Func End, Address: 0x1ed62c4, Func Offset: 0x304
	// Line 1009, Address: 0x1ed5fc0, Func Offset: 0
	// Line 1010, Address: 0x1ed5fc4, Func Offset: 0x4
	// Line 1009, Address: 0x1ed5fc8, Func Offset: 0x8
	// Line 1010, Address: 0x1ed5fcc, Func Offset: 0xc
	// Line 1009, Address: 0x1ed5fd0, Func Offset: 0x10
	// Line 1010, Address: 0x1ed5fdc, Func Offset: 0x1c
	// Line 1011, Address: 0x1ed5fec, Func Offset: 0x2c
	// Line 1013, Address: 0x1ed6000, Func Offset: 0x40
	// Line 1014, Address: 0x1ed6018, Func Offset: 0x58
	// Line 1015, Address: 0x1ed602c, Func Offset: 0x6c
	// Line 1016, Address: 0x1ed6038, Func Offset: 0x78
	// Func End, Address: 0x1ed6050, Func Offset: 0x90
}

// 
// Start address: 0x1ed62d0
void through_end()
{
	// Line 387, Address: 0x1ed62d0, Func Offset: 0
	// Line 389, Address: 0x1ed62d8, Func Offset: 0x8
	// Line 391, Address: 0x1ed62e0, Func Offset: 0x10
	// Line 392, Address: 0x1ed62e8, Func Offset: 0x18
	// Line 394, Address: 0x1ed62f0, Func Offset: 0x20
	// Line 396, Address: 0x1ed62f8, Func Offset: 0x28
	// Line 397, Address: 0x1ed6300, Func Offset: 0x30
	// Func End, Address: 0x1ed630c, Func Offset: 0x3c
}

// 
// Start address: 0x1ed6310
int ev_subway0_084_construct(sfObj* obj)
{
	void* adr;
	_anon5* wk;
	int kind;
	float eil_lynch_rot[2];
	float eil_lynch_pos[4][2];
	float lynch_rot[2];
	float lynch_pos[4][2];
	// Line 404, Address: 0x1ed6310, Func Offset: 0
	// Line 422, Address: 0x1ed6314, Func Offset: 0x4
	// Line 404, Address: 0x1ed6318, Func Offset: 0x8
	// Line 422, Address: 0x1ed6328, Func Offset: 0x18
	// Line 424, Address: 0x1ed6330, Func Offset: 0x20
	// Line 425, Address: 0x1ed6338, Func Offset: 0x28
	// Line 430, Address: 0x1ed6340, Func Offset: 0x30
	// Line 431, Address: 0x1ed6354, Func Offset: 0x44
	// Line 432, Address: 0x1ed636c, Func Offset: 0x5c
	// Line 434, Address: 0x1ed6370, Func Offset: 0x60
	// Line 432, Address: 0x1ed6374, Func Offset: 0x64
	// Line 434, Address: 0x1ed6378, Func Offset: 0x68
	// Line 432, Address: 0x1ed637c, Func Offset: 0x6c
	// Line 434, Address: 0x1ed6380, Func Offset: 0x70
	// Line 432, Address: 0x1ed6384, Func Offset: 0x74
	// Line 434, Address: 0x1ed6390, Func Offset: 0x80
	// Line 435, Address: 0x1ed6398, Func Offset: 0x88
	// Line 436, Address: 0x1ed63ac, Func Offset: 0x9c
	// Line 439, Address: 0x1ed63b0, Func Offset: 0xa0
	// Line 442, Address: 0x1ed63b8, Func Offset: 0xa8
	// Line 441, Address: 0x1ed63bc, Func Offset: 0xac
	// Line 442, Address: 0x1ed63c0, Func Offset: 0xb0
	// Func End, Address: 0x1ed63d4, Func Offset: 0xc4
	// Line 331, Address: 0x1ed6310, Func Offset: 0
	// Line 332, Address: 0x1ed631c, Func Offset: 0xc
	// Line 336, Address: 0x1ed6324, Func Offset: 0x14
	// Line 337, Address: 0x1ed632c, Func Offset: 0x1c
	// Line 338, Address: 0x1ed6330, Func Offset: 0x20
	// Func End, Address: 0x1ed633c, Func Offset: 0x2c
	// Line 953, Address: 0x1ed6310, Func Offset: 0
	// Line 954, Address: 0x1ed6314, Func Offset: 0x4
	// Line 953, Address: 0x1ed6318, Func Offset: 0x8
	// Line 954, Address: 0x1ed631c, Func Offset: 0xc
	// Line 955, Address: 0x1ed6320, Func Offset: 0x10
	// Line 956, Address: 0x1ed6334, Func Offset: 0x24
	// Line 957, Address: 0x1ed633c, Func Offset: 0x2c
	// Line 958, Address: 0x1ed6348, Func Offset: 0x38
	// Line 959, Address: 0x1ed6350, Func Offset: 0x40
	// Line 958, Address: 0x1ed6354, Func Offset: 0x44
	// Line 959, Address: 0x1ed6358, Func Offset: 0x48
	// Line 960, Address: 0x1ed6360, Func Offset: 0x50
	// Line 961, Address: 0x1ed6368, Func Offset: 0x58
	// Line 964, Address: 0x1ed6388, Func Offset: 0x78
	// Line 963, Address: 0x1ed638c, Func Offset: 0x7c
	// Line 964, Address: 0x1ed6390, Func Offset: 0x80
	// Func End, Address: 0x1ed6398, Func Offset: 0x88
}

// 
// Start address: 0x1ed63e0
int ev_subway0_084_exec(sfObj* obj)
{
	int rtv;
	// Line 450, Address: 0x1ed63e0, Func Offset: 0
	// Func End, Address: 0x1ed63e8, Func Offset: 0x8
	// Line 1106, Address: 0x1ed63e0, Func Offset: 0
	// Func End, Address: 0x1ed63e8, Func Offset: 0x8
}

// 
// Start address: 0x1ed63f0
int ev_subway0_084_end()
{
	// Line 456, Address: 0x1ed63f0, Func Offset: 0
	// Line 458, Address: 0x1ed63f8, Func Offset: 0x8
	// Line 460, Address: 0x1ed6400, Func Offset: 0x10
	// Line 459, Address: 0x1ed6404, Func Offset: 0x14
	// Line 460, Address: 0x1ed6408, Func Offset: 0x18
	// Func End, Address: 0x1ed6410, Func Offset: 0x20
	// Line 139, Address: 0x1ed63f0, Func Offset: 0
	// Func End, Address: 0x1ed63f8, Func Offset: 0x8
	// Line 1110, Address: 0x1ed63f0, Func Offset: 0
	// Line 1111, Address: 0x1ed63f4, Func Offset: 0x4
	// Line 1110, Address: 0x1ed63f8, Func Offset: 0x8
	// Line 1112, Address: 0x1ed6404, Func Offset: 0x14
	// Func End, Address: 0x1ed640c, Func Offset: 0x1c
	// Line 977, Address: 0x1ed63f0, Func Offset: 0
	// Line 979, Address: 0x1ed63f4, Func Offset: 0x4
	// Line 977, Address: 0x1ed63f8, Func Offset: 0x8
	// Line 979, Address: 0x1ed63fc, Func Offset: 0xc
	// Line 980, Address: 0x1ed6408, Func Offset: 0x18
	// Line 981, Address: 0x1ed6410, Func Offset: 0x20
	// Line 982, Address: 0x1ed641c, Func Offset: 0x2c
	// Line 983, Address: 0x1ed6428, Func Offset: 0x38
	// Line 984, Address: 0x1ed6434, Func Offset: 0x44
	// Line 986, Address: 0x1ed6438, Func Offset: 0x48
	// Line 985, Address: 0x1ed643c, Func Offset: 0x4c
	// Line 986, Address: 0x1ed6440, Func Offset: 0x50
	// Func End, Address: 0x1ed6448, Func Offset: 0x58
}

// 
// Start address: 0x1ed6410
int ev_subway0_173_exec(sfObj* obj)
{
	int rtv;
	// Line 513, Address: 0x1ed6410, Func Offset: 0
	// Func End, Address: 0x1ed6418, Func Offset: 0x8
	// Line 1118, Address: 0x1ed6410, Func Offset: 0
	// Line 1126, Address: 0x1ed6414, Func Offset: 0x4
	// Line 1118, Address: 0x1ed6418, Func Offset: 0x8
	// Line 1126, Address: 0x1ed641c, Func Offset: 0xc
	// Line 1129, Address: 0x1ed642c, Func Offset: 0x1c
	// Line 1130, Address: 0x1ed6448, Func Offset: 0x38
	// Line 1132, Address: 0x1ed6464, Func Offset: 0x54
	// Line 1137, Address: 0x1ed6468, Func Offset: 0x58
	// Line 1132, Address: 0x1ed646c, Func Offset: 0x5c
	// Line 1133, Address: 0x1ed6470, Func Offset: 0x60
	// Line 1137, Address: 0x1ed6478, Func Offset: 0x68
	// Line 1133, Address: 0x1ed647c, Func Offset: 0x6c
	// Line 1134, Address: 0x1ed6480, Func Offset: 0x70
	// Line 1137, Address: 0x1ed6484, Func Offset: 0x74
	// Line 1138, Address: 0x1ed648c, Func Offset: 0x7c
	// Line 1139, Address: 0x1ed6498, Func Offset: 0x88
	// Line 1140, Address: 0x1ed64a4, Func Offset: 0x94
	// Line 1141, Address: 0x1ed64c0, Func Offset: 0xb0
	// Func End, Address: 0x1ed64cc, Func Offset: 0xbc
}

// 
// Start address: 0x1ed6420
int ev_subway0_177_construct(sfObj* obj)
{
	void* adr;
	_anon5* wk;
	int kind;
	float eil_king_rot[4];
	float eil_king_pos[4][4];
	float king_rot[4];
	float king_pos[4][4];
	// Line 2017, Address: 0x1ed6420, Func Offset: 0
	// Line 2018, Address: 0x1ed642c, Func Offset: 0xc
	// Func End, Address: 0x1ed6434, Func Offset: 0x14
	// Line 538, Address: 0x1ed6420, Func Offset: 0
	// Line 567, Address: 0x1ed6424, Func Offset: 0x4
	// Line 538, Address: 0x1ed6428, Func Offset: 0x8
	// Line 567, Address: 0x1ed6438, Func Offset: 0x18
	// Line 569, Address: 0x1ed6440, Func Offset: 0x20
	// Line 570, Address: 0x1ed6448, Func Offset: 0x28
	// Line 574, Address: 0x1ed6450, Func Offset: 0x30
	// Line 575, Address: 0x1ed6464, Func Offset: 0x44
	// Line 576, Address: 0x1ed647c, Func Offset: 0x5c
	// Line 578, Address: 0x1ed6480, Func Offset: 0x60
	// Line 576, Address: 0x1ed6484, Func Offset: 0x64
	// Line 578, Address: 0x1ed6488, Func Offset: 0x68
	// Line 576, Address: 0x1ed648c, Func Offset: 0x6c
	// Line 578, Address: 0x1ed6490, Func Offset: 0x70
	// Line 576, Address: 0x1ed6494, Func Offset: 0x74
	// Line 578, Address: 0x1ed64a0, Func Offset: 0x80
	// Line 579, Address: 0x1ed64a8, Func Offset: 0x88
	// Line 580, Address: 0x1ed64bc, Func Offset: 0x9c
	// Line 583, Address: 0x1ed64c0, Func Offset: 0xa0
	// Line 586, Address: 0x1ed64c8, Func Offset: 0xa8
	// Line 585, Address: 0x1ed64cc, Func Offset: 0xac
	// Line 586, Address: 0x1ed64d0, Func Offset: 0xb0
	// Func End, Address: 0x1ed64e4, Func Offset: 0xc4
}

// 
// Start address: 0x1ed64f0
int ev_subway0_177_exec(sfObj* obj)
{
	int rtv;
	// Line 2041, Address: 0x1ed64f0, Func Offset: 0
	// Line 2047, Address: 0x1ed64f4, Func Offset: 0x4
	// Line 2041, Address: 0x1ed64f8, Func Offset: 0x8
	// Line 2047, Address: 0x1ed64fc, Func Offset: 0xc
	// Line 2041, Address: 0x1ed6500, Func Offset: 0x10
	// Line 2042, Address: 0x1ed650c, Func Offset: 0x1c
	// Line 2047, Address: 0x1ed6518, Func Offset: 0x28
	// Line 2048, Address: 0x1ed6520, Func Offset: 0x30
	// Line 2049, Address: 0x1ed6534, Func Offset: 0x44
	// Line 2050, Address: 0x1ed6548, Func Offset: 0x58
	// Line 2051, Address: 0x1ed6558, Func Offset: 0x68
	// Line 2052, Address: 0x1ed6568, Func Offset: 0x78
	// Line 2053, Address: 0x1ed6578, Func Offset: 0x88
	// Func End, Address: 0x1ed6590, Func Offset: 0xa0
	// Line 597, Address: 0x1ed64f0, Func Offset: 0
	// Func End, Address: 0x1ed64f8, Func Offset: 0x8
	// Line 1212, Address: 0x1ed64f0, Func Offset: 0
	// Line 1213, Address: 0x1ed64f4, Func Offset: 0x4
	// Line 1212, Address: 0x1ed64f8, Func Offset: 0x8
	// Line 1213, Address: 0x1ed64fc, Func Offset: 0xc
	// Line 1215, Address: 0x1ed6510, Func Offset: 0x20
	// Line 1216, Address: 0x1ed6518, Func Offset: 0x28
	// Func End, Address: 0x1ed6524, Func Offset: 0x34
}

// 
// Start address: 0x1ed6500
int ev_subway0_177_end()
{
	// Line 603, Address: 0x1ed6500, Func Offset: 0
	// Line 605, Address: 0x1ed6508, Func Offset: 0x8
	// Line 607, Address: 0x1ed6510, Func Offset: 0x10
	// Line 606, Address: 0x1ed6514, Func Offset: 0x14
	// Line 607, Address: 0x1ed6518, Func Offset: 0x18
	// Func End, Address: 0x1ed6520, Func Offset: 0x20
}

// 
// Start address: 0x1ed6520
int ev_subway0_016_init()
{
	// Line 648, Address: 0x1ed6520, Func Offset: 0
	// Line 650, Address: 0x1ed6524, Func Offset: 0x4
	// Line 648, Address: 0x1ed6528, Func Offset: 0x8
	// Line 650, Address: 0x1ed652c, Func Offset: 0xc
	// Line 652, Address: 0x1ed6534, Func Offset: 0x14
	// Line 653, Address: 0x1ed653c, Func Offset: 0x1c
	// Line 656, Address: 0x1ed6548, Func Offset: 0x28
	// Line 655, Address: 0x1ed654c, Func Offset: 0x2c
	// Line 656, Address: 0x1ed6550, Func Offset: 0x30
	// Func End, Address: 0x1ed6558, Func Offset: 0x38
}

// 
// Start address: 0x1ed6560
int ev_subway0_016_exec(sfObj* obj)
{
	int rtv;
	int stream_end;
	int subtitle_end;
	// Line 659, Address: 0x1ed6560, Func Offset: 0
	// Line 664, Address: 0x1ed6564, Func Offset: 0x4
	// Line 659, Address: 0x1ed6568, Func Offset: 0x8
	// Line 660, Address: 0x1ed657c, Func Offset: 0x1c
	// Line 659, Address: 0x1ed6580, Func Offset: 0x20
	// Line 661, Address: 0x1ed6584, Func Offset: 0x24
	// Line 664, Address: 0x1ed6588, Func Offset: 0x28
	// Line 665, Address: 0x1ed65a4, Func Offset: 0x44
	// Line 666, Address: 0x1ed65a8, Func Offset: 0x48
	// Line 667, Address: 0x1ed65b8, Func Offset: 0x58
	// Line 668, Address: 0x1ed65c0, Func Offset: 0x60
	// Line 670, Address: 0x1ed65c8, Func Offset: 0x68
	// Line 672, Address: 0x1ed65d0, Func Offset: 0x70
	// Line 673, Address: 0x1ed65e0, Func Offset: 0x80
	// Line 675, Address: 0x1ed65e8, Func Offset: 0x88
	// Line 677, Address: 0x1ed65f0, Func Offset: 0x90
	// Line 679, Address: 0x1ed65f4, Func Offset: 0x94
	// Line 681, Address: 0x1ed65f8, Func Offset: 0x98
	// Line 682, Address: 0x1ed6604, Func Offset: 0xa4
	// Line 685, Address: 0x1ed6610, Func Offset: 0xb0
	// Line 686, Address: 0x1ed6620, Func Offset: 0xc0
	// Line 687, Address: 0x1ed6624, Func Offset: 0xc4
	// Line 689, Address: 0x1ed6628, Func Offset: 0xc8
	// Line 690, Address: 0x1ed662c, Func Offset: 0xcc
	// Func End, Address: 0x1ed6648, Func Offset: 0xe8
	// Line 251, Address: 0x1ed6560, Func Offset: 0
	// Line 252, Address: 0x1ed6568, Func Offset: 0x8
	// Line 255, Address: 0x1ed6570, Func Offset: 0x10
	// Line 257, Address: 0x1ed657c, Func Offset: 0x1c
	// Line 258, Address: 0x1ed6590, Func Offset: 0x30
	// Line 259, Address: 0x1ed65d4, Func Offset: 0x74
	// Line 260, Address: 0x1ed65d8, Func Offset: 0x78
	// Line 261, Address: 0x1ed65e4, Func Offset: 0x84
	// Line 262, Address: 0x1ed65ec, Func Offset: 0x8c
	// Line 263, Address: 0x1ed65f0, Func Offset: 0x90
	// Line 264, Address: 0x1ed65fc, Func Offset: 0x9c
	// Line 265, Address: 0x1ed6604, Func Offset: 0xa4
	// Line 266, Address: 0x1ed6608, Func Offset: 0xa8
	// Line 269, Address: 0x1ed6614, Func Offset: 0xb4
	// Line 270, Address: 0x1ed6620, Func Offset: 0xc0
	// Line 271, Address: 0x1ed662c, Func Offset: 0xcc
	// Line 273, Address: 0x1ed6630, Func Offset: 0xd0
	// Line 272, Address: 0x1ed6634, Func Offset: 0xd4
	// Line 273, Address: 0x1ed6638, Func Offset: 0xd8
	// Func End, Address: 0x1ed6640, Func Offset: 0xe0
}

// 
// Start address: 0x1ed6650
int ev_subway0_016_end()
{
	// Line 693, Address: 0x1ed6650, Func Offset: 0
	// Line 694, Address: 0x1ed6658, Func Offset: 0x8
	// Line 695, Address: 0x1ed6660, Func Offset: 0x10
	// Line 698, Address: 0x1ed6668, Func Offset: 0x18
	// Line 697, Address: 0x1ed666c, Func Offset: 0x1c
	// Line 698, Address: 0x1ed6670, Func Offset: 0x20
	// Func End, Address: 0x1ed6678, Func Offset: 0x28
	// Line 1194, Address: 0x1ed6650, Func Offset: 0
	// Line 1196, Address: 0x1ed6654, Func Offset: 0x4
	// Line 1194, Address: 0x1ed6658, Func Offset: 0x8
	// Line 1196, Address: 0x1ed6660, Func Offset: 0x10
	// Line 1202, Address: 0x1ed6668, Func Offset: 0x18
	// Line 1199, Address: 0x1ed666c, Func Offset: 0x1c
	// Line 1202, Address: 0x1ed6670, Func Offset: 0x20
	// Line 1197, Address: 0x1ed6678, Func Offset: 0x28
	// Line 1199, Address: 0x1ed667c, Func Offset: 0x2c
	// Line 1202, Address: 0x1ed6680, Func Offset: 0x30
	// Line 1204, Address: 0x1ed66b8, Func Offset: 0x68
	// Line 1205, Address: 0x1ed66dc, Func Offset: 0x8c
	// Line 1206, Address: 0x1ed66e4, Func Offset: 0x94
	// Line 1209, Address: 0x1ed66f4, Func Offset: 0xa4
	// Line 1210, Address: 0x1ed66f8, Func Offset: 0xa8
	// Line 1211, Address: 0x1ed6708, Func Offset: 0xb8
	// Line 1213, Address: 0x1ed6714, Func Offset: 0xc4
	// Line 1215, Address: 0x1ed671c, Func Offset: 0xcc
	// Line 1217, Address: 0x1ed6720, Func Offset: 0xd0
	// Line 1218, Address: 0x1ed6730, Func Offset: 0xe0
	// Line 1220, Address: 0x1ed6740, Func Offset: 0xf0
	// Line 1221, Address: 0x1ed6754, Func Offset: 0x104
	// Line 1223, Address: 0x1ed6760, Func Offset: 0x110
	// Line 1225, Address: 0x1ed676c, Func Offset: 0x11c
	// Line 1227, Address: 0x1ed6788, Func Offset: 0x138
	// Line 1228, Address: 0x1ed6790, Func Offset: 0x140
	// Line 1230, Address: 0x1ed6794, Func Offset: 0x144
	// Line 1247, Address: 0x1ed6798, Func Offset: 0x148
	// Line 1249, Address: 0x1ed67a0, Func Offset: 0x150
	// Line 1250, Address: 0x1ed67a8, Func Offset: 0x158
	// Line 1252, Address: 0x1ed67b0, Func Offset: 0x160
	// Line 1256, Address: 0x1ed67c4, Func Offset: 0x174
	// Line 1258, Address: 0x1ed67e0, Func Offset: 0x190
	// Line 1259, Address: 0x1ed67e4, Func Offset: 0x194
	// Line 1264, Address: 0x1ed67f0, Func Offset: 0x1a0
	// Line 1269, Address: 0x1ed680c, Func Offset: 0x1bc
	// Line 1270, Address: 0x1ed6810, Func Offset: 0x1c0
	// Line 1271, Address: 0x1ed6814, Func Offset: 0x1c4
	// Line 1273, Address: 0x1ed6820, Func Offset: 0x1d0
	// Line 1276, Address: 0x1ed6828, Func Offset: 0x1d8
	// Line 1281, Address: 0x1ed6880, Func Offset: 0x230
	// Line 1283, Address: 0x1ed6890, Func Offset: 0x240
	// Line 1284, Address: 0x1ed68b4, Func Offset: 0x264
	// Line 1286, Address: 0x1ed68bc, Func Offset: 0x26c
	// Line 1288, Address: 0x1ed68c4, Func Offset: 0x274
	// Line 1290, Address: 0x1ed68c8, Func Offset: 0x278
	// Line 1291, Address: 0x1ed68d8, Func Offset: 0x288
	// Line 1292, Address: 0x1ed68e0, Func Offset: 0x290
	// Line 1293, Address: 0x1ed68e8, Func Offset: 0x298
	// Line 1297, Address: 0x1ed68f0, Func Offset: 0x2a0
	// Line 1299, Address: 0x1ed68fc, Func Offset: 0x2ac
	// Line 1300, Address: 0x1ed6910, Func Offset: 0x2c0
	// Line 1301, Address: 0x1ed6918, Func Offset: 0x2c8
	// Line 1303, Address: 0x1ed691c, Func Offset: 0x2cc
	// Line 1306, Address: 0x1ed6920, Func Offset: 0x2d0
	// Line 1307, Address: 0x1ed6928, Func Offset: 0x2d8
	// Func End, Address: 0x1ed693c, Func Offset: 0x2ec
}

// 
// Start address: 0x1ed6680
int dummy()
{
	// Line 785, Address: 0x1ed6680, Func Offset: 0
	// Func End, Address: 0x1ed6688, Func Offset: 0x8
	// Line 1241, Address: 0x1ed6680, Func Offset: 0
	// Line 1242, Address: 0x1ed6690, Func Offset: 0x10
	// Line 1245, Address: 0x1ed6698, Func Offset: 0x18
	// Line 1247, Address: 0x1ed66a8, Func Offset: 0x28
	// Line 1250, Address: 0x1ed66b0, Func Offset: 0x30
	// Line 1253, Address: 0x1ed66b8, Func Offset: 0x38
	// Func End, Address: 0x1ed66c8, Func Offset: 0x48
}

// 
// Start address: 0x1ed6690
int ev_subway0_sb14_2224_exec()
{
	// Line 790, Address: 0x1ed6690, Func Offset: 0
	// Func End, Address: 0x1ed6698, Func Offset: 0x8
	// Line 1573, Address: 0x1ed6690, Func Offset: 0
	// Line 1574, Address: 0x1ed6698, Func Offset: 0x8
	// Line 1577, Address: 0x1ed66a0, Func Offset: 0x10
	// Line 1581, Address: 0x1ed66a4, Func Offset: 0x14
	// Line 1577, Address: 0x1ed66a8, Func Offset: 0x18
	// Line 1578, Address: 0x1ed66ac, Func Offset: 0x1c
	// Line 1579, Address: 0x1ed66b4, Func Offset: 0x24
	// Line 1580, Address: 0x1ed66bc, Func Offset: 0x2c
	// Line 1581, Address: 0x1ed66c0, Func Offset: 0x30
	// Line 1583, Address: 0x1ed66dc, Func Offset: 0x4c
	// Line 1582, Address: 0x1ed66e0, Func Offset: 0x50
	// Line 1583, Address: 0x1ed66e4, Func Offset: 0x54
	// Func End, Address: 0x1ed66f0, Func Offset: 0x60
}

// 
// Start address: 0x1ed66a0
int ev_subway0_sb14_2224_end()
{
	float train_move[4];
	// Line 797, Address: 0x1ed66a0, Func Offset: 0
	// Line 793, Address: 0x1ed66a4, Func Offset: 0x4
	// Line 797, Address: 0x1ed66a8, Func Offset: 0x8
	// Line 793, Address: 0x1ed66ac, Func Offset: 0xc
	// Line 797, Address: 0x1ed66b0, Func Offset: 0x10
	// Line 800, Address: 0x1ed66c4, Func Offset: 0x24
	// Line 802, Address: 0x1ed66cc, Func Offset: 0x2c
	// Line 803, Address: 0x1ed66e4, Func Offset: 0x44
	// Line 805, Address: 0x1ed66fc, Func Offset: 0x5c
	// Line 804, Address: 0x1ed6700, Func Offset: 0x60
	// Line 805, Address: 0x1ed6704, Func Offset: 0x64
	// Func End, Address: 0x1ed670c, Func Offset: 0x6c
}

// 
// Start address: 0x1ed6710
int ev_subway0_sb14_after_2224_exec(sfObj* obj)
{
	int rtv;
	float eil_pos[4];
	float pos[4];
	// Line 2100, Address: 0x1ed6710, Func Offset: 0
	// Line 2103, Address: 0x1ed6714, Func Offset: 0x4
	// Line 2100, Address: 0x1ed6718, Func Offset: 0x8
	// Line 2103, Address: 0x1ed6728, Func Offset: 0x18
	// Line 2104, Address: 0x1ed6734, Func Offset: 0x24
	// Line 2106, Address: 0x1ed6738, Func Offset: 0x28
	// Line 2107, Address: 0x1ed6764, Func Offset: 0x54
	// Line 2108, Address: 0x1ed6770, Func Offset: 0x60
	// Line 2109, Address: 0x1ed677c, Func Offset: 0x6c
	// Line 2110, Address: 0x1ed6784, Func Offset: 0x74
	// Line 2113, Address: 0x1ed678c, Func Offset: 0x7c
	// Line 2119, Address: 0x1ed67b8, Func Offset: 0xa8
	// Line 2118, Address: 0x1ed67bc, Func Offset: 0xac
	// Line 2119, Address: 0x1ed67c0, Func Offset: 0xb0
	// Func End, Address: 0x1ed67d4, Func Offset: 0xc4
	// Line 822, Address: 0x1ed6710, Func Offset: 0
	// Line 825, Address: 0x1ed6724, Func Offset: 0x14
	// Line 828, Address: 0x1ed6750, Func Offset: 0x40
	// Line 830, Address: 0x1ed676c, Func Offset: 0x5c
	// Line 831, Address: 0x1ed6778, Func Offset: 0x68
	// Line 834, Address: 0x1ed6784, Func Offset: 0x74
	// Line 835, Address: 0x1ed6788, Func Offset: 0x78
	// Line 839, Address: 0x1ed6798, Func Offset: 0x88
	// Line 843, Address: 0x1ed67a4, Func Offset: 0x94
	// Line 844, Address: 0x1ed67b8, Func Offset: 0xa8
	// Line 848, Address: 0x1ed67d0, Func Offset: 0xc0
	// Line 850, Address: 0x1ed67d8, Func Offset: 0xc8
	// Line 855, Address: 0x1ed67e0, Func Offset: 0xd0
	// Line 857, Address: 0x1ed6804, Func Offset: 0xf4
	// Line 858, Address: 0x1ed680c, Func Offset: 0xfc
	// Line 860, Address: 0x1ed6814, Func Offset: 0x104
	// Line 861, Address: 0x1ed6818, Func Offset: 0x108
	// Line 862, Address: 0x1ed6828, Func Offset: 0x118
	// Line 863, Address: 0x1ed6830, Func Offset: 0x120
	// Line 865, Address: 0x1ed6838, Func Offset: 0x128
	// Line 869, Address: 0x1ed6840, Func Offset: 0x130
	// Line 870, Address: 0x1ed6850, Func Offset: 0x140
	// Line 872, Address: 0x1ed6858, Func Offset: 0x148
	// Line 875, Address: 0x1ed6860, Func Offset: 0x150
	// Line 876, Address: 0x1ed6868, Func Offset: 0x158
	// Line 878, Address: 0x1ed686c, Func Offset: 0x15c
	// Line 880, Address: 0x1ed6870, Func Offset: 0x160
	// Line 881, Address: 0x1ed6874, Func Offset: 0x164
	// Func End, Address: 0x1ed6888, Func Offset: 0x178
	// Line 351, Address: 0x1ed6710, Func Offset: 0
	// Line 353, Address: 0x1ed6714, Func Offset: 0x4
	// Line 351, Address: 0x1ed6718, Func Offset: 0x8
	// Line 353, Address: 0x1ed6724, Func Offset: 0x14
	// Line 354, Address: 0x1ed672c, Func Offset: 0x1c
	// Line 355, Address: 0x1ed6734, Func Offset: 0x24
	// Func End, Address: 0x1ed6744, Func Offset: 0x34
	// Line 1272, Address: 0x1ed6710, Func Offset: 0
	// Line 1273, Address: 0x1ed6714, Func Offset: 0x4
	// Line 1272, Address: 0x1ed6718, Func Offset: 0x8
	// Line 1273, Address: 0x1ed671c, Func Offset: 0xc
	// Line 1275, Address: 0x1ed6728, Func Offset: 0x18
	// Line 1276, Address: 0x1ed6730, Func Offset: 0x20
	// Func End, Address: 0x1ed673c, Func Offset: 0x2c
}

// 
// Start address: 0x1ed6890
int ev_subway0_sb14_after_2224_end()
{
	// Line 886, Address: 0x1ed6890, Func Offset: 0
	// Func End, Address: 0x1ed6898, Func Offset: 0x8
	// Line 1320, Address: 0x1ed6890, Func Offset: 0
	// Line 1321, Address: 0x1ed6894, Func Offset: 0x4
	// Line 1320, Address: 0x1ed6898, Func Offset: 0x8
	// Line 1321, Address: 0x1ed68a0, Func Offset: 0x10
	// Line 1322, Address: 0x1ed68b4, Func Offset: 0x24
	// Line 1324, Address: 0x1ed68bc, Func Offset: 0x2c
	// Line 1323, Address: 0x1ed68c0, Func Offset: 0x30
	// Line 1324, Address: 0x1ed68c4, Func Offset: 0x34
	// Func End, Address: 0x1ed68d0, Func Offset: 0x40
	// Line 1339, Address: 0x1ed6890, Func Offset: 0
	// Line 1340, Address: 0x1ed68a0, Func Offset: 0x10
	// Line 1343, Address: 0x1ed68a8, Func Offset: 0x18
	// Line 1345, Address: 0x1ed68b8, Func Offset: 0x28
	// Line 1348, Address: 0x1ed68c0, Func Offset: 0x30
	// Line 1351, Address: 0x1ed68c8, Func Offset: 0x38
	// Func End, Address: 0x1ed68d8, Func Offset: 0x48
}

// 
// Start address: 0x1ed68a0
void sb15_button_init(sfObj* obj)
{
	sfCharacter* chara;
	_anon1* fig;
	float pos[4];
	// Line 943, Address: 0x1ed68a0, Func Offset: 0
	// Line 944, Address: 0x1ed68a4, Func Offset: 0x4
	// Line 943, Address: 0x1ed68a8, Func Offset: 0x8
	// Line 944, Address: 0x1ed68b8, Func Offset: 0x18
	// Line 945, Address: 0x1ed68c8, Func Offset: 0x28
	// Line 947, Address: 0x1ed68d0, Func Offset: 0x30
	// Line 950, Address: 0x1ed68dc, Func Offset: 0x3c
	// Line 954, Address: 0x1ed6908, Func Offset: 0x68
	// Line 959, Address: 0x1ed690c, Func Offset: 0x6c
	// Line 954, Address: 0x1ed6914, Func Offset: 0x74
	// Line 955, Address: 0x1ed6918, Func Offset: 0x78
	// Line 956, Address: 0x1ed6920, Func Offset: 0x80
	// Line 959, Address: 0x1ed6928, Func Offset: 0x88
	// Line 964, Address: 0x1ed6930, Func Offset: 0x90
	// Func End, Address: 0x1ed6948, Func Offset: 0xa8
}

// 
// Start address: 0x1ed6950
void sb15_button_exec()
{
	// Line 968, Address: 0x1ed6950, Func Offset: 0
	// Func End, Address: 0x1ed6958, Func Offset: 0x8
	// Line 674, Address: 0x1ed6950, Func Offset: 0
	// Line 681, Address: 0x1ed6954, Func Offset: 0x4
	// Line 674, Address: 0x1ed6958, Func Offset: 0x8
	// Line 681, Address: 0x1ed695c, Func Offset: 0xc
	// Line 682, Address: 0x1ed696c, Func Offset: 0x1c
	// Line 683, Address: 0x1ed6974, Func Offset: 0x24
	// Line 684, Address: 0x1ed6980, Func Offset: 0x30
	// Line 687, Address: 0x1ed6994, Func Offset: 0x44
	// Line 688, Address: 0x1ed699c, Func Offset: 0x4c
	// Line 692, Address: 0x1ed69a8, Func Offset: 0x58
	// Line 693, Address: 0x1ed69b4, Func Offset: 0x64
	// Line 697, Address: 0x1ed69c8, Func Offset: 0x78
	// Line 696, Address: 0x1ed69cc, Func Offset: 0x7c
	// Line 697, Address: 0x1ed69d0, Func Offset: 0x80
	// Func End, Address: 0x1ed69d8, Func Offset: 0x88
	// Line 1372, Address: 0x1ed6950, Func Offset: 0
	// Line 1374, Address: 0x1ed6954, Func Offset: 0x4
	// Line 1372, Address: 0x1ed6958, Func Offset: 0x8
	// Line 1374, Address: 0x1ed695c, Func Offset: 0xc
	// Line 1372, Address: 0x1ed6960, Func Offset: 0x10
	// Line 1374, Address: 0x1ed6964, Func Offset: 0x14
	// Line 1372, Address: 0x1ed6968, Func Offset: 0x18
	// Line 1380, Address: 0x1ed696c, Func Offset: 0x1c
	// Line 1374, Address: 0x1ed6970, Func Offset: 0x20
	// Line 1380, Address: 0x1ed6980, Func Offset: 0x30
	// Line 1378, Address: 0x1ed6984, Func Offset: 0x34
	// Line 1380, Address: 0x1ed6988, Func Offset: 0x38
	// Line 1383, Address: 0x1ed69a0, Func Offset: 0x50
	// Line 1386, Address: 0x1ed69d8, Func Offset: 0x88
	// Line 1387, Address: 0x1ed69e0, Func Offset: 0x90
	// Line 1389, Address: 0x1ed69ec, Func Offset: 0x9c
	// Line 1390, Address: 0x1ed6a30, Func Offset: 0xe0
	// Line 1391, Address: 0x1ed6a44, Func Offset: 0xf4
	// Line 1393, Address: 0x1ed6a50, Func Offset: 0x100
	// Line 1394, Address: 0x1ed6a58, Func Offset: 0x108
	// Line 1397, Address: 0x1ed6a64, Func Offset: 0x114
	// Line 1399, Address: 0x1ed6a68, Func Offset: 0x118
	// Line 1398, Address: 0x1ed6a70, Func Offset: 0x120
	// Line 1399, Address: 0x1ed6a74, Func Offset: 0x124
	// Func End, Address: 0x1ed6a80, Func Offset: 0x130
	// Line 227, Address: 0x1ed6950, Func Offset: 0
	// Line 229, Address: 0x1ed6958, Func Offset: 0x8
	// Line 231, Address: 0x1ed6968, Func Offset: 0x18
	// Line 232, Address: 0x1ed6974, Func Offset: 0x24
	// Line 234, Address: 0x1ed6978, Func Offset: 0x28
	// Line 233, Address: 0x1ed697c, Func Offset: 0x2c
	// Line 234, Address: 0x1ed6980, Func Offset: 0x30
	// Func End, Address: 0x1ed6988, Func Offset: 0x38
}

// 
// Start address: 0x1ed6960
void sb15_button_draw(sfObj* obj)
{
	// Line 2279, Address: 0x1ed6960, Func Offset: 0
	// Line 2280, Address: 0x1ed6964, Func Offset: 0x4
	// Line 2279, Address: 0x1ed6968, Func Offset: 0x8
	// Line 2280, Address: 0x1ed6970, Func Offset: 0x10
	// Line 2281, Address: 0x1ed6978, Func Offset: 0x18
	// Line 2282, Address: 0x1ed6998, Func Offset: 0x38
	// Line 2283, Address: 0x1ed69b4, Func Offset: 0x54
	// Line 2284, Address: 0x1ed69c4, Func Offset: 0x64
	// Line 2285, Address: 0x1ed69dc, Func Offset: 0x7c
	// Func End, Address: 0x1ed69ec, Func Offset: 0x8c
	// Line 971, Address: 0x1ed6960, Func Offset: 0
	// Line 972, Address: 0x1ed6964, Func Offset: 0x4
	// Line 971, Address: 0x1ed6968, Func Offset: 0x8
	// Line 972, Address: 0x1ed696c, Func Offset: 0xc
	// Line 973, Address: 0x1ed6980, Func Offset: 0x20
	// Line 976, Address: 0x1ed6988, Func Offset: 0x28
	// Line 979, Address: 0x1ed6990, Func Offset: 0x30
	// Func End, Address: 0x1ed699c, Func Offset: 0x3c
}

// 
// Start address: 0x1ed69a0
void sb15_button_end(sfObj* obj)
{
	// Line 982, Address: 0x1ed69a0, Func Offset: 0
	// Line 983, Address: 0x1ed69ac, Func Offset: 0xc
	// Line 986, Address: 0x1ed69b4, Func Offset: 0x14
	// Line 988, Address: 0x1ed69bc, Func Offset: 0x1c
	// Line 989, Address: 0x1ed69c0, Func Offset: 0x20
	// Func End, Address: 0x1ed69cc, Func Offset: 0x2c
}

// 
// Start address: 0x1ed69d0
int train_on()
{
	// Line 993, Address: 0x1ed69d0, Func Offset: 0
	// Line 994, Address: 0x1ed69d8, Func Offset: 0x8
	// Line 996, Address: 0x1ed69e8, Func Offset: 0x18
	// Line 997, Address: 0x1ed69f4, Func Offset: 0x24
	// Line 1000, Address: 0x1ed69fc, Func Offset: 0x2c
	// Line 1001, Address: 0x1ed6a14, Func Offset: 0x44
	// Line 1004, Address: 0x1ed6a18, Func Offset: 0x48
	// Line 1003, Address: 0x1ed6a1c, Func Offset: 0x4c
	// Line 1004, Address: 0x1ed6a20, Func Offset: 0x50
	// Func End, Address: 0x1ed6a28, Func Offset: 0x58
}

// 
// Start address: 0x1ed6a30
int cam_horsewhip_trgchk()
{
	// Line 1020, Address: 0x1ed6a30, Func Offset: 0
	// Line 1022, Address: 0x1ed6a38, Func Offset: 0x8
	// Line 1023, Address: 0x1ed6a40, Func Offset: 0x10
	// Line 1022, Address: 0x1ed6a44, Func Offset: 0x14
	// Line 1023, Address: 0x1ed6a4c, Func Offset: 0x1c
	// Func End, Address: 0x1ed6a54, Func Offset: 0x24
}

