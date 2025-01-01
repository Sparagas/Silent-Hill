typedef struct sfObj;
typedef struct _hs14_cageWork;
typedef struct _hs04_elvdoorWork;
typedef struct _hs13_ceilingWork;
typedef struct _hs32_doorWork;
typedef struct _anon0;
typedef struct _hs20_eilwig;
typedef struct _anon1;
typedef union _anon2;
typedef struct _hs09_photoWork;
typedef struct EventFlag;
typedef struct _EventDriver;
typedef struct _hs21_chainWork;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sgSVModel;
typedef union _anon3;
typedef struct sgIKHandle;
typedef struct sfCharacter;
typedef struct sgBone;
typedef struct _anon4;
typedef struct _evBgCharData;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _EilWork;
typedef struct _anon7;
typedef union _anon8;
typedef struct _anon9;
typedef struct _hs21_corpseWork;
typedef struct sgAnime;
typedef struct _GAME_WORK;

typedef int(*type_6)(sfObj*);
typedef int(*type_7)(sfObj*);
typedef int(*type_10)(sfObj*);
typedef void(*type_12)(sfObj*);
typedef int(*type_15)(sfObj*);
typedef int(*type_18)(sfObj*);
typedef sgIKSolveResult(*type_21)();
typedef void(*type_25)(sfObj*);
typedef void(*type_29)(_anon6*, int, int, float*);
typedef void(*type_45)(sgAnime*, int);

typedef float type_0[4][2];
typedef float type_1[4][2];
typedef _anon0 type_2[4];
typedef float type_3[4];
typedef _anon2 type_4[0];
typedef unsigned char type_5[320];
typedef float type_8[4][2];
typedef _anon3 type_9[256];
typedef float type_11[4];
typedef float type_13[4][4];
typedef float type_14[4];
typedef float type_16[4][2];
typedef float type_17[4][4];
typedef float type_19[2];
typedef _anon3 type_20[4];
typedef int type_22[1];
typedef float type_23[4][256];
typedef int type_24[1];
typedef _anon3 type_26[10];
typedef float type_27[4][2];
typedef float type_28[4][2][2];
typedef int type_30[1];
typedef short type_31[2];
typedef float type_32[4][2];
typedef float type_33[4][2];
typedef int type_34[1];
typedef unsigned short type_35[2];
typedef void* type_36[4];
typedef char type_37[4];
typedef unsigned char type_38[4];
typedef float type_39[4][2];
typedef float type_40[4][2];
typedef float type_41[1];
typedef float type_42[4][2];
typedef float type_43[4][2][2];
typedef int type_44[1];
typedef float type_46[4][2];
typedef int type_47[1];
typedef int type_48[1];
typedef unsigned char type_49[4];
typedef int type_50[1];

struct sfObj
{
	_anon3 fwork[256];
	_anon3* work;
	void(*func)(sfObj*);
	_anon3* work_pt0;
	_anon3* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon3* sys_work;
	_anon3* scene_work;
	_anon3* event_work;
	_anon3* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct _hs14_cageWork
{
	_anon5 emmodel;
	sgBone bone;
	float pos[4];
	float hitpoly[4];
	float rate_cage;
	float wait;
	int maphit_id;
	int se_slot;
};

struct _hs04_elvdoorWork
{
	_anon5 emmodel;
	sgBone bone;
	float counter;
	float hitpoly[4];
	int maphit_id;
};

struct _hs13_ceilingWork
{
	_anon5 emmodel;
	sgBone bone;
	float pos[4];
	float rate_ceiling;
	float wait;
	int se_slot;
};

struct _hs32_doorWork
{
	_anon5 emmodel;
	sgBone bone;
	int mode;
};

struct _anon0
{
	unsigned char next_offset;
	unsigned char flags;
	short id;
};

struct _hs20_eilwig
{
	_anon5 emmodel;
	sgBone bone;
	int slot;
};

struct _anon1
{
	_anon2 vertex[0];
};

union _anon2
{
	float node[4];
	_anon0 data[4];
};

struct _hs09_photoWork
{
	_anon5 emmodel;
	sgBone bone;
};

struct EventFlag
{
	unsigned char flag[320];
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
	_anon3 val[4];
};

struct _hs21_chainWork
{
	_anon5 emmodel;
	_anon5 emmodel2;
	sgBone bone;
	sgBone bone2;
	float counter;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

union _anon3
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

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon7 model_work;
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

struct _anon4
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
	_anon3 dmy[10];
};

struct _evBgCharData
{
	int model_id;
	int emt_id;
	int kage_id;
	int anim_id;
};

struct _anon5
{
	void* texture_normal;
	void* texture_global;
	void* texture_semitrans;
	void* model_data;
	sgBone* parent_bone;
};

struct _anon6
{
	unsigned long tex0;
	unsigned long clamp;
};

struct _EilWork
{
	sfCharacter chara;
	sfCharacter chara_a;
	_anon8 p;
	float qrot[4];
};

struct _anon7
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon6*, int, int, float*);
	int equip_flag;
};

union _anon8
{
	_anon9 str;
	float pos[4];
};

struct _anon9
{
	float pos_x;
	float pos_y;
	float pos_z;
	float pos_padding;
};

struct _hs21_corpseWork
{
	_anon5 emmodel;
	sgBone bone;
	float counter;
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

EventFlag event_flag;
float wk_hitpoly[4][256];
sfObj* g_cageobj;
_EventDriver ev_hospital0_hs14_cage_door;
_EventDriver ev_hospital0_hs14_cage_door_open;
_EventDriver ev_hospital0_hs14_cage_door_access;
float sg_vector_unit_y[4];
float elv_door_coll[4][4];
_EventDriver ev_hospital0_fr32_159_5;
_EventDriver ev_hospital0_fr32_159_5_2;
_GAME_WORK gamew;
_EventDriver ev_hospital0_hs04_elv_pass;
float cageCamViewAngle;
float ceilCamViewAngle;

int ev_hospital0_eil_medal_init(sfObj* obj);
int ev_hospital0_eil_medal_exec(sfObj* obj);
int ev_hospital0_eil_medal_draw(sfObj* obj);
int ev_hospital0_eil_medal_end(sfObj* obj);
int ev_hospital0_eil_eye_init(sfObj* obj);
void ev_hospital0_eil_eye_set_transparency();
void ev_hospital0_eil_eye_reset_transparency();
int ev_hospital0_eil_eye_exec(sfObj* obj);
int ev_hospital0_eil_eye_draw(sfObj* obj);
int ev_hospital0_eil_eye_end(sfObj* obj);
int ev_hospital0_eil_wig_init(sfObj* obj);
int ev_hospital0_eil_wig_exec(sfObj* obj);
int ev_hospital0_eil_wig_draw(sfObj* obj);
int ev_hospital0_eil_wig_end(sfObj* obj);
int ev_hospital0_hs09_photo_init(sfObj* obj);
int ev_hospital0_hs09_photo_exec(sfObj* obj);
int ev_hospital0_hs09_photo_draw(sfObj* obj);
int ev_hospital0_hs09_photo_end(sfObj* obj);
int ev_hospital0_hs13_ceiling_fall_init(sfObj* obj);
int ev_hospital0_hs13_ceiling_fall_exec(sfObj* obj);
int ev_hospital0_hs13_ceiling_fall_draw(sfObj* obj);
int ev_hospital0_hs13_ceiling_fall_end(sfObj* obj);
int ev_hospital0_hs14_cage_fall_maphit_exec(sfObj* obj);
int ev_hospital0_hs14_cage_fall_maphit_init(sfObj* obj);
int ev_hospital0_hs14_cage_fall_maphit_end(sfObj* obj);
int ev_hospital0_hs14_cage_fall_init(sfObj* obj);
int ev_hospital0_hs14_cage_fall_start();
int ev_hospital0_hs14_cage_fall_exec(sfObj* obj);
int ev_hospital0_hs14_cage_fall_draw(sfObj* obj);
int ev_hospital0_hs14_cage_fall_end(sfObj* obj);
int ev_hospital0_hs14_cage_door_exec(sfObj* obj);
int ev_hospital0_hs14_cage_door_open_trgchk(sfObj* obj);
int ev_hospital0_hs14_cage_door_open_init(sfObj* obj);
int ev_hospital0_hs14_cage_door_open_end();
int ev_hospital0_hs14_cage_door_access_init(sfObj* obj);
int ev_hospital0_hs32_door_init(sfObj* obj);
int ev_hospital0_hs32_door_exec(sfObj* obj);
int ev_hospital0_hs32_door_draw(sfObj* obj);
int ev_hospital0_hs32_door_end(sfObj* obj);
sfObj* ev_hospital0_hs32_door_get_obj(int door_num);
void ev_hospital0_hs32_door_open(sfObj* obj);
void ev_hospital0_hs32_door_close(sfObj* obj);
int ev_hospital0_hs32_is_door_open(sfObj* obj);
int ev_hospital0_hs32_is_door_close(sfObj* obj);
int ev_hospital0_hs21_chain_init(sfObj* obj);
int ev_hospital0_hs21_chain_exec(sfObj* obj);
int ev_hospital0_hs21_chain_draw(sfObj* obj);
int ev_hospital0_hs21_chain_end(sfObj* obj);
int ev_hospital0_hs04_elvdoor_init(sfObj* obj);
int ev_hospital0_hs04_elvdoor_exec(sfObj* obj);
int ev_hospital0_hs04_elvdoor_draw(sfObj* obj);
int ev_hospital0_hs04_elvdoor_end(sfObj* obj);
int ev_hospital0_fr32_159_5_exec(sfObj* obj);
int ev_hospital0_hs28_corpse_init(sfObj* obj);
int ev_hospital0_hs28_corpse_exec(sfObj* obj);
int ev_hospital0_hs28_corpse_draw(sfObj* obj);
int ev_hospital0_hs28_corpse_end(sfObj* obj);
int ev_hospital0_hs11_rain_construct(sfObj* obj);
int ev_hospital0_hs04_elv_pass_end();

// 
// Start address: 0x1ed4320
int ev_hospital0_eil_medal_init(sfObj* obj)
{
	sfCharacter* chara;
	_evBgCharData dat;
	_evBgCharData dat;
	// Line 20, Address: 0x1ed4320, Func Offset: 0
	// Line 22, Address: 0x1ed4334, Func Offset: 0x14
	// Line 23, Address: 0x1ed4344, Func Offset: 0x24
	// Line 33, Address: 0x1ed4388, Func Offset: 0x68
	// Line 34, Address: 0x1ed4390, Func Offset: 0x70
	// Line 38, Address: 0x1ed43f4, Func Offset: 0xd4
	// Line 40, Address: 0x1ed43f8, Func Offset: 0xd8
	// Line 46, Address: 0x1ed4400, Func Offset: 0xe0
	// Line 49, Address: 0x1ed4404, Func Offset: 0xe4
	// Line 50, Address: 0x1ed4408, Func Offset: 0xe8
	// Line 51, Address: 0x1ed440c, Func Offset: 0xec
	// Func End, Address: 0x1ed4420, Func Offset: 0x100
	// Line 111, Address: 0x1ed4320, Func Offset: 0
	// Line 113, Address: 0x1ed432c, Func Offset: 0xc
	// Line 114, Address: 0x1ed433c, Func Offset: 0x1c
	// Line 115, Address: 0x1ed4348, Func Offset: 0x28
	// Line 114, Address: 0x1ed434c, Func Offset: 0x2c
	// Line 115, Address: 0x1ed4350, Func Offset: 0x30
	// Line 116, Address: 0x1ed4358, Func Offset: 0x38
	// Line 117, Address: 0x1ed4360, Func Offset: 0x40
	// Line 118, Address: 0x1ed4370, Func Offset: 0x50
	// Line 119, Address: 0x1ed437c, Func Offset: 0x5c
	// Line 120, Address: 0x1ed4380, Func Offset: 0x60
	// Line 121, Address: 0x1ed438c, Func Offset: 0x6c
	// Line 122, Address: 0x1ed4398, Func Offset: 0x78
	// Line 124, Address: 0x1ed43a4, Func Offset: 0x84
	// Line 123, Address: 0x1ed43a8, Func Offset: 0x88
	// Line 124, Address: 0x1ed43ac, Func Offset: 0x8c
	// Func End, Address: 0x1ed43b8, Func Offset: 0x98
}

// 
// Start address: 0x1ed43c0
int ev_hospital0_eil_medal_exec(sfObj* obj)
{
	// Line 126, Address: 0x1ed43c0, Func Offset: 0
	// Line 127, Address: 0x1ed43c4, Func Offset: 0x4
	// Line 126, Address: 0x1ed43c8, Func Offset: 0x8
	// Line 127, Address: 0x1ed43d0, Func Offset: 0x10
	// Line 128, Address: 0x1ed43e8, Func Offset: 0x28
	// Line 130, Address: 0x1ed43f0, Func Offset: 0x30
	// Line 129, Address: 0x1ed43f4, Func Offset: 0x34
	// Line 130, Address: 0x1ed43f8, Func Offset: 0x38
	// Func End, Address: 0x1ed4404, Func Offset: 0x44
}

// 
// Start address: 0x1ed4410
int ev_hospital0_eil_medal_draw(sfObj* obj)
{
	// Line 132, Address: 0x1ed4410, Func Offset: 0
	// Line 133, Address: 0x1ed4418, Func Offset: 0x8
	// Line 135, Address: 0x1ed4420, Func Offset: 0x10
	// Line 134, Address: 0x1ed4424, Func Offset: 0x14
	// Line 135, Address: 0x1ed4428, Func Offset: 0x18
	// Func End, Address: 0x1ed4430, Func Offset: 0x20
	// Line 95, Address: 0x1ed4410, Func Offset: 0
	// Line 100, Address: 0x1ed4414, Func Offset: 0x4
	// Line 95, Address: 0x1ed4418, Func Offset: 0x8
	// Line 100, Address: 0x1ed441c, Func Offset: 0xc
	// Line 95, Address: 0x1ed4420, Func Offset: 0x10
	// Line 100, Address: 0x1ed4428, Func Offset: 0x18
	// Line 101, Address: 0x1ed4430, Func Offset: 0x20
	// Line 103, Address: 0x1ed4440, Func Offset: 0x30
	// Line 104, Address: 0x1ed445c, Func Offset: 0x4c
	// Line 105, Address: 0x1ed4464, Func Offset: 0x54
	// Line 106, Address: 0x1ed447c, Func Offset: 0x6c
	// Line 107, Address: 0x1ed4484, Func Offset: 0x74
	// Line 109, Address: 0x1ed448c, Func Offset: 0x7c
	// Line 108, Address: 0x1ed4490, Func Offset: 0x80
	// Line 109, Address: 0x1ed4494, Func Offset: 0x84
	// Func End, Address: 0x1ed44a0, Func Offset: 0x90
}

// 
// Start address: 0x1ed4430
int ev_hospital0_eil_medal_end(sfObj* obj)
{
	// Line 270, Address: 0x1ed4430, Func Offset: 0
	// Line 275, Address: 0x1ed4458, Func Offset: 0x28
	// Line 278, Address: 0x1ed4478, Func Offset: 0x48
	// Line 283, Address: 0x1ed4480, Func Offset: 0x50
	// Line 285, Address: 0x1ed4484, Func Offset: 0x54
	// Line 287, Address: 0x1ed4488, Func Offset: 0x58
	// Func End, Address: 0x1ed4490, Func Offset: 0x60
	// Line 220, Address: 0x1ed4430, Func Offset: 0
	// Line 228, Address: 0x1ed4438, Func Offset: 0x8
	// Line 220, Address: 0x1ed443c, Func Offset: 0xc
	// Line 228, Address: 0x1ed4440, Func Offset: 0x10
	// Line 232, Address: 0x1ed4448, Func Offset: 0x18
	// Line 234, Address: 0x1ed445c, Func Offset: 0x2c
	// Line 235, Address: 0x1ed446c, Func Offset: 0x3c
	// Line 239, Address: 0x1ed448c, Func Offset: 0x5c
	// Line 244, Address: 0x1ed4498, Func Offset: 0x68
	// Line 239, Address: 0x1ed449c, Func Offset: 0x6c
	// Line 244, Address: 0x1ed44a8, Func Offset: 0x78
	// Line 239, Address: 0x1ed44ac, Func Offset: 0x7c
	// Line 244, Address: 0x1ed44b0, Func Offset: 0x80
	// Line 245, Address: 0x1ed44c0, Func Offset: 0x90
	// Line 250, Address: 0x1ed44e8, Func Offset: 0xb8
	// Line 253, Address: 0x1ed4504, Func Offset: 0xd4
	// Line 257, Address: 0x1ed4534, Func Offset: 0x104
	// Line 258, Address: 0x1ed4548, Func Offset: 0x118
	// Line 259, Address: 0x1ed4550, Func Offset: 0x120
	// Line 260, Address: 0x1ed4558, Func Offset: 0x128
	// Line 262, Address: 0x1ed4568, Func Offset: 0x138
	// Line 265, Address: 0x1ed4578, Func Offset: 0x148
	// Func End, Address: 0x1ed458c, Func Offset: 0x15c
	// Line 151, Address: 0x1ed4430, Func Offset: 0
	// Line 152, Address: 0x1ed4450, Func Offset: 0x20
	// Line 154, Address: 0x1ed4454, Func Offset: 0x24
	// Line 157, Address: 0x1ed445c, Func Offset: 0x2c
	// Line 158, Address: 0x1ed4484, Func Offset: 0x54
	// Line 160, Address: 0x1ed4488, Func Offset: 0x58
	// Line 161, Address: 0x1ed4490, Func Offset: 0x60
	// Line 163, Address: 0x1ed4494, Func Offset: 0x64
	// Line 164, Address: 0x1ed449c, Func Offset: 0x6c
	// Line 165, Address: 0x1ed44a4, Func Offset: 0x74
	// Line 167, Address: 0x1ed44a8, Func Offset: 0x78
	// Line 172, Address: 0x1ed44c0, Func Offset: 0x90
	// Line 174, Address: 0x1ed44c8, Func Offset: 0x98
	// Line 183, Address: 0x1ed44d0, Func Offset: 0xa0
	// Line 185, Address: 0x1ed44d4, Func Offset: 0xa4
	// Line 186, Address: 0x1ed44dc, Func Offset: 0xac
	// Line 188, Address: 0x1ed44e0, Func Offset: 0xb0
	// Line 190, Address: 0x1ed44f0, Func Offset: 0xc0
	// Line 191, Address: 0x1ed4520, Func Offset: 0xf0
	// Line 195, Address: 0x1ed4524, Func Offset: 0xf4
	// Line 197, Address: 0x1ed452c, Func Offset: 0xfc
	// Line 198, Address: 0x1ed4534, Func Offset: 0x104
	// Line 205, Address: 0x1ed4538, Func Offset: 0x108
	// Line 207, Address: 0x1ed453c, Func Offset: 0x10c
	// Line 209, Address: 0x1ed4544, Func Offset: 0x114
	// Line 211, Address: 0x1ed4548, Func Offset: 0x118
	// Line 214, Address: 0x1ed4558, Func Offset: 0x128
	// Line 216, Address: 0x1ed4560, Func Offset: 0x130
	// Line 218, Address: 0x1ed4568, Func Offset: 0x138
	// Line 222, Address: 0x1ed4570, Func Offset: 0x140
	// Line 224, Address: 0x1ed4584, Func Offset: 0x154
	// Line 230, Address: 0x1ed4588, Func Offset: 0x158
	// Line 231, Address: 0x1ed458c, Func Offset: 0x15c
	// Func End, Address: 0x1ed45a8, Func Offset: 0x178
	// Line 137, Address: 0x1ed4430, Func Offset: 0
	// Line 138, Address: 0x1ed4438, Func Offset: 0x8
	// Line 140, Address: 0x1ed4440, Func Offset: 0x10
	// Line 139, Address: 0x1ed4444, Func Offset: 0x14
	// Line 140, Address: 0x1ed4448, Func Offset: 0x18
	// Func End, Address: 0x1ed4450, Func Offset: 0x20
}

// 
// Start address: 0x1ed4450
int ev_hospital0_eil_eye_init(sfObj* obj)
{
	float pos[4];
	_anon4* objfg;
	_EilWork* wk;
	float scale[4];
	// Line 162, Address: 0x1ed4450, Func Offset: 0
	// Line 165, Address: 0x1ed4464, Func Offset: 0x14
	// Line 166, Address: 0x1ed4470, Func Offset: 0x20
	// Line 167, Address: 0x1ed4484, Func Offset: 0x34
	// Line 169, Address: 0x1ed448c, Func Offset: 0x3c
	// Line 171, Address: 0x1ed44b8, Func Offset: 0x68
	// Line 174, Address: 0x1ed44e4, Func Offset: 0x94
	// Line 179, Address: 0x1ed44e8, Func Offset: 0x98
	// Line 174, Address: 0x1ed44f0, Func Offset: 0xa0
	// Line 175, Address: 0x1ed44f4, Func Offset: 0xa4
	// Line 176, Address: 0x1ed44fc, Func Offset: 0xac
	// Line 179, Address: 0x1ed4504, Func Offset: 0xb4
	// Line 180, Address: 0x1ed450c, Func Offset: 0xbc
	// Line 182, Address: 0x1ed4518, Func Offset: 0xc8
	// Line 183, Address: 0x1ed4524, Func Offset: 0xd4
	// Line 182, Address: 0x1ed4528, Func Offset: 0xd8
	// Line 183, Address: 0x1ed452c, Func Offset: 0xdc
	// Line 185, Address: 0x1ed4544, Func Offset: 0xf4
	// Line 186, Address: 0x1ed454c, Func Offset: 0xfc
	// Line 188, Address: 0x1ed4550, Func Offset: 0x100
	// Line 189, Address: 0x1ed4558, Func Offset: 0x108
	// Func End, Address: 0x1ed4570, Func Offset: 0x120
}

// 
// Start address: 0x1ed4570
void ev_hospital0_eil_eye_set_transparency()
{
	int a;
	// Line 421, Address: 0x1ed4570, Func Offset: 0
	// Line 424, Address: 0x1ed4574, Func Offset: 0x4
	// Line 421, Address: 0x1ed4578, Func Offset: 0x8
	// Line 424, Address: 0x1ed457c, Func Offset: 0xc
	// Line 425, Address: 0x1ed458c, Func Offset: 0x1c
	// Line 426, Address: 0x1ed4594, Func Offset: 0x24
	// Line 428, Address: 0x1ed4598, Func Offset: 0x28
	// Line 432, Address: 0x1ed45a0, Func Offset: 0x30
	// Line 433, Address: 0x1ed45a8, Func Offset: 0x38
	// Func End, Address: 0x1ed45b4, Func Offset: 0x44
	// Line 194, Address: 0x1ed4570, Func Offset: 0
	// Line 195, Address: 0x1ed4584, Func Offset: 0x14
	// Func End, Address: 0x1ed4598, Func Offset: 0x28
	// Line 182, Address: 0x1ed4570, Func Offset: 0
	// Line 183, Address: 0x1ed457c, Func Offset: 0xc
	// Line 184, Address: 0x1ed458c, Func Offset: 0x1c
	// Line 185, Address: 0x1ed4594, Func Offset: 0x24
	// Line 184, Address: 0x1ed4598, Func Offset: 0x28
	// Line 185, Address: 0x1ed459c, Func Offset: 0x2c
	// Line 186, Address: 0x1ed45a4, Func Offset: 0x34
	// Line 187, Address: 0x1ed45b0, Func Offset: 0x40
	// Line 189, Address: 0x1ed45b8, Func Offset: 0x48
	// Line 190, Address: 0x1ed45c0, Func Offset: 0x50
	// Func End, Address: 0x1ed45d0, Func Offset: 0x60
}

// 
// Start address: 0x1ed45a0
void ev_hospital0_eil_eye_reset_transparency()
{
	// Line 128, Address: 0x1ed45a0, Func Offset: 0
	// Func End, Address: 0x1ed45a8, Func Offset: 0x8
	// Line 200, Address: 0x1ed45a0, Func Offset: 0
	// Line 202, Address: 0x1ed45a8, Func Offset: 0x8
	// Line 203, Address: 0x1ed45b0, Func Offset: 0x10
	// Line 204, Address: 0x1ed45b8, Func Offset: 0x18
	// Func End, Address: 0x1ed45c4, Func Offset: 0x24
}

// 
// Start address: 0x1ed45d0
int ev_hospital0_eil_eye_exec(sfObj* obj)
{
	float pos_d[4];
	float rot[4];
	_EilWork* wk;
	float rand_base;
	_anon4* objfg;
	// Line 252, Address: 0x1ed45d0, Func Offset: 0
	// Func End, Address: 0x1ed45dc, Func Offset: 0xc
	// Line 207, Address: 0x1ed45d0, Func Offset: 0
	// Line 211, Address: 0x1ed45d4, Func Offset: 0x4
	// Line 207, Address: 0x1ed45d8, Func Offset: 0x8
	// Line 211, Address: 0x1ed45dc, Func Offset: 0xc
	// Line 207, Address: 0x1ed45e0, Func Offset: 0x10
	// Line 211, Address: 0x1ed45fc, Func Offset: 0x2c
	// Line 213, Address: 0x1ed4600, Func Offset: 0x30
	// Line 215, Address: 0x1ed4608, Func Offset: 0x38
	// Line 220, Address: 0x1ed460c, Func Offset: 0x3c
	// Line 216, Address: 0x1ed4610, Func Offset: 0x40
	// Line 217, Address: 0x1ed4614, Func Offset: 0x44
	// Line 220, Address: 0x1ed4618, Func Offset: 0x48
	// Line 221, Address: 0x1ed4624, Func Offset: 0x54
	// Line 223, Address: 0x1ed462c, Func Offset: 0x5c
	// Line 221, Address: 0x1ed4630, Func Offset: 0x60
	// Line 222, Address: 0x1ed4640, Func Offset: 0x70
	// Line 223, Address: 0x1ed4650, Func Offset: 0x80
	// Line 224, Address: 0x1ed465c, Func Offset: 0x8c
	// Line 230, Address: 0x1ed4664, Func Offset: 0x94
	// Line 231, Address: 0x1ed4688, Func Offset: 0xb8
	// Line 233, Address: 0x1ed46a8, Func Offset: 0xd8
	// Line 235, Address: 0x1ed46bc, Func Offset: 0xec
	// Line 236, Address: 0x1ed46e4, Func Offset: 0x114
	// Line 235, Address: 0x1ed46e8, Func Offset: 0x118
	// Line 237, Address: 0x1ed46f4, Func Offset: 0x124
	// Line 240, Address: 0x1ed4710, Func Offset: 0x140
	// Line 238, Address: 0x1ed4718, Func Offset: 0x148
	// Line 237, Address: 0x1ed471c, Func Offset: 0x14c
	// Line 240, Address: 0x1ed4724, Func Offset: 0x154
	// Line 241, Address: 0x1ed472c, Func Offset: 0x15c
	// Line 244, Address: 0x1ed4738, Func Offset: 0x168
	// Line 243, Address: 0x1ed4758, Func Offset: 0x188
	// Line 244, Address: 0x1ed475c, Func Offset: 0x18c
	// Func End, Address: 0x1ed4764, Func Offset: 0x194
	// Line 193, Address: 0x1ed45d0, Func Offset: 0
	// Line 194, Address: 0x1ed45e0, Func Offset: 0x10
	// Line 195, Address: 0x1ed45e8, Func Offset: 0x18
	// Line 198, Address: 0x1ed45f8, Func Offset: 0x28
	// Line 199, Address: 0x1ed4608, Func Offset: 0x38
	// Line 202, Address: 0x1ed4618, Func Offset: 0x48
	// Line 204, Address: 0x1ed4634, Func Offset: 0x64
	// Line 206, Address: 0x1ed4638, Func Offset: 0x68
	// Line 209, Address: 0x1ed4640, Func Offset: 0x70
	// Line 211, Address: 0x1ed4648, Func Offset: 0x78
	// Line 213, Address: 0x1ed464c, Func Offset: 0x7c
	// Line 215, Address: 0x1ed4650, Func Offset: 0x80
	// Line 216, Address: 0x1ed4660, Func Offset: 0x90
	// Line 217, Address: 0x1ed466c, Func Offset: 0x9c
	// Line 219, Address: 0x1ed4670, Func Offset: 0xa0
	// Line 220, Address: 0x1ed4678, Func Offset: 0xa8
	// Func End, Address: 0x1ed468c, Func Offset: 0xbc
}

// 
// Start address: 0x1ed4770
int ev_hospital0_eil_eye_draw(sfObj* obj)
{
	_EilWork* wk;
	// Line 543, Address: 0x1ed4770, Func Offset: 0
	// Line 546, Address: 0x1ed4774, Func Offset: 0x4
	// Line 543, Address: 0x1ed4778, Func Offset: 0x8
	// Line 546, Address: 0x1ed477c, Func Offset: 0xc
	// Line 547, Address: 0x1ed478c, Func Offset: 0x1c
	// Line 548, Address: 0x1ed4794, Func Offset: 0x24
	// Line 551, Address: 0x1ed4798, Func Offset: 0x28
	// Line 552, Address: 0x1ed47a4, Func Offset: 0x34
	// Line 553, Address: 0x1ed47bc, Func Offset: 0x4c
	// Line 556, Address: 0x1ed47c8, Func Offset: 0x58
	// Line 560, Address: 0x1ed47d0, Func Offset: 0x60
	// Line 561, Address: 0x1ed47d8, Func Offset: 0x68
	// Func End, Address: 0x1ed47e4, Func Offset: 0x74
	// Line 68, Address: 0x1ed4770, Func Offset: 0
	// Line 69, Address: 0x1ed4784, Func Offset: 0x14
	// Line 70, Address: 0x1ed478c, Func Offset: 0x1c
	// Line 72, Address: 0x1ed479c, Func Offset: 0x2c
	// Line 76, Address: 0x1ed47a4, Func Offset: 0x34
	// Line 80, Address: 0x1ed47d0, Func Offset: 0x60
	// Line 81, Address: 0x1ed47dc, Func Offset: 0x6c
	// Line 83, Address: 0x1ed47f4, Func Offset: 0x84
	// Line 89, Address: 0x1ed4804, Func Offset: 0x94
	// Line 90, Address: 0x1ed4808, Func Offset: 0x98
	// Func End, Address: 0x1ed481c, Func Offset: 0xac
	// Line 246, Address: 0x1ed4770, Func Offset: 0
	// Line 247, Address: 0x1ed4784, Func Offset: 0x14
	// Line 248, Address: 0x1ed4788, Func Offset: 0x18
	// Line 250, Address: 0x1ed4790, Func Offset: 0x20
	// Line 251, Address: 0x1ed4798, Func Offset: 0x28
	// Line 252, Address: 0x1ed47a0, Func Offset: 0x30
	// Line 254, Address: 0x1ed47a8, Func Offset: 0x38
	// Line 253, Address: 0x1ed47ac, Func Offset: 0x3c
	// Line 254, Address: 0x1ed47b0, Func Offset: 0x40
	// Func End, Address: 0x1ed47c0, Func Offset: 0x50
}

// 
// Start address: 0x1ed47c0
int ev_hospital0_eil_eye_end(sfObj* obj)
{
	_EilWork* wk;
	// Line 253, Address: 0x1ed47c0, Func Offset: 0
	// Line 254, Address: 0x1ed47c8, Func Offset: 0x8
	// Func End, Address: 0x1ed47d0, Func Offset: 0x10
	// Line 431, Address: 0x1ed47c0, Func Offset: 0
	// Line 432, Address: 0x1ed47c8, Func Offset: 0x8
	// Line 434, Address: 0x1ed47d0, Func Offset: 0x10
	// Line 433, Address: 0x1ed47d4, Func Offset: 0x14
	// Line 434, Address: 0x1ed47d8, Func Offset: 0x18
	// Func End, Address: 0x1ed47e0, Func Offset: 0x20
	// Line 256, Address: 0x1ed47c0, Func Offset: 0
	// Line 257, Address: 0x1ed47cc, Func Offset: 0xc
	// Line 258, Address: 0x1ed47d0, Func Offset: 0x10
	// Line 259, Address: 0x1ed47d8, Func Offset: 0x18
	// Line 261, Address: 0x1ed47e0, Func Offset: 0x20
	// Line 260, Address: 0x1ed47e4, Func Offset: 0x24
	// Line 261, Address: 0x1ed47e8, Func Offset: 0x28
	// Func End, Address: 0x1ed47f4, Func Offset: 0x34
}

// 
// Start address: 0x1ed4800
int ev_hospital0_eil_wig_init(sfObj* obj)
{
	_hs20_eilwig* wk;
	// Line 275, Address: 0x1ed4800, Func Offset: 0
	// Line 281, Address: 0x1ed4804, Func Offset: 0x4
	// Line 275, Address: 0x1ed4808, Func Offset: 0x8
	// Line 281, Address: 0x1ed4810, Func Offset: 0x10
	// Line 282, Address: 0x1ed4820, Func Offset: 0x20
	// Line 286, Address: 0x1ed4828, Func Offset: 0x28
	// Line 287, Address: 0x1ed4830, Func Offset: 0x30
	// Line 288, Address: 0x1ed4848, Func Offset: 0x48
	// Line 289, Address: 0x1ed4860, Func Offset: 0x60
	// Line 291, Address: 0x1ed4878, Func Offset: 0x78
	// Line 292, Address: 0x1ed4880, Func Offset: 0x80
	// Line 294, Address: 0x1ed4884, Func Offset: 0x84
	// Line 292, Address: 0x1ed4888, Func Offset: 0x88
	// Line 294, Address: 0x1ed488c, Func Offset: 0x8c
	// Line 298, Address: 0x1ed4890, Func Offset: 0x90
	// Line 297, Address: 0x1ed4898, Func Offset: 0x98
	// Line 298, Address: 0x1ed489c, Func Offset: 0x9c
	// Func End, Address: 0x1ed48a4, Func Offset: 0xa4
}

// 
// Start address: 0x1ed48b0
int ev_hospital0_eil_wig_exec(sfObj* obj)
{
	float eil_pos[4];
	_hs20_eilwig* wk;
	_hs20_eilwig* wk;
	float postbl[4];
	// Line 70, Address: 0x1ed48b0, Func Offset: 0
	// Line 71, Address: 0x1ed48bc, Func Offset: 0xc
	// Line 72, Address: 0x1ed48cc, Func Offset: 0x1c
	// Line 75, Address: 0x1ed48e0, Func Offset: 0x30
	// Line 77, Address: 0x1ed490c, Func Offset: 0x5c
	// Line 79, Address: 0x1ed4910, Func Offset: 0x60
	// Line 85, Address: 0x1ed4918, Func Offset: 0x68
	// Line 87, Address: 0x1ed491c, Func Offset: 0x6c
	// Line 90, Address: 0x1ed4920, Func Offset: 0x70
	// Func End, Address: 0x1ed4930, Func Offset: 0x80
	// Line 301, Address: 0x1ed48b0, Func Offset: 0
	// Line 304, Address: 0x1ed48b4, Func Offset: 0x4
	// Line 301, Address: 0x1ed48b8, Func Offset: 0x8
	// Line 304, Address: 0x1ed48bc, Func Offset: 0xc
	// Line 301, Address: 0x1ed48c0, Func Offset: 0x10
	// Line 304, Address: 0x1ed48c4, Func Offset: 0x14
	// Line 301, Address: 0x1ed48c8, Func Offset: 0x18
	// Line 304, Address: 0x1ed48cc, Func Offset: 0x1c
	// Line 306, Address: 0x1ed48d4, Func Offset: 0x24
	// Line 310, Address: 0x1ed48e8, Func Offset: 0x38
	// Line 311, Address: 0x1ed48ec, Func Offset: 0x3c
	// Line 313, Address: 0x1ed4914, Func Offset: 0x64
	// Line 316, Address: 0x1ed4924, Func Offset: 0x74
	// Line 318, Address: 0x1ed492c, Func Offset: 0x7c
	// Line 319, Address: 0x1ed4938, Func Offset: 0x88
	// Line 323, Address: 0x1ed4960, Func Offset: 0xb0
	// Line 322, Address: 0x1ed4968, Func Offset: 0xb8
	// Line 323, Address: 0x1ed496c, Func Offset: 0xbc
	// Func End, Address: 0x1ed4978, Func Offset: 0xc8
}

// 
// Start address: 0x1ed4980
int ev_hospital0_eil_wig_draw(sfObj* obj)
{
	// Line 325, Address: 0x1ed4980, Func Offset: 0
	// Line 326, Address: 0x1ed498c, Func Offset: 0xc
	// Line 328, Address: 0x1ed4994, Func Offset: 0x14
	// Line 329, Address: 0x1ed499c, Func Offset: 0x1c
	// Line 331, Address: 0x1ed49a0, Func Offset: 0x20
	// Line 330, Address: 0x1ed49a4, Func Offset: 0x24
	// Line 331, Address: 0x1ed49a8, Func Offset: 0x28
	// Func End, Address: 0x1ed49b0, Func Offset: 0x30
}

// 
// Start address: 0x1ed49b0
int ev_hospital0_eil_wig_end(sfObj* obj)
{
	_hs20_eilwig* wk;
	// Line 333, Address: 0x1ed49b0, Func Offset: 0
	// Line 334, Address: 0x1ed49c0, Func Offset: 0x10
	// Line 336, Address: 0x1ed49c8, Func Offset: 0x18
	// Line 337, Address: 0x1ed49d0, Func Offset: 0x20
	// Line 338, Address: 0x1ed49dc, Func Offset: 0x2c
	// Line 340, Address: 0x1ed49e0, Func Offset: 0x30
	// Line 339, Address: 0x1ed49e8, Func Offset: 0x38
	// Line 340, Address: 0x1ed49ec, Func Offset: 0x3c
	// Func End, Address: 0x1ed49f4, Func Offset: 0x44
}

// 
// Start address: 0x1ed4a00
int ev_hospital0_hs09_photo_init(sfObj* obj)
{
	_hs09_photoWork* wk;
	// Line 165, Address: 0x1ed4a00, Func Offset: 0
	// Line 170, Address: 0x1ed4a30, Func Offset: 0x30
	// Line 171, Address: 0x1ed4a40, Func Offset: 0x40
	// Line 173, Address: 0x1ed4a44, Func Offset: 0x44
	// Line 175, Address: 0x1ed4a48, Func Offset: 0x48
	// Func End, Address: 0x1ed4a50, Func Offset: 0x50
	// Line 353, Address: 0x1ed4a00, Func Offset: 0
	// Line 359, Address: 0x1ed4a04, Func Offset: 0x4
	// Line 353, Address: 0x1ed4a08, Func Offset: 0x8
	// Line 359, Address: 0x1ed4a10, Func Offset: 0x10
	// Line 360, Address: 0x1ed4a20, Func Offset: 0x20
	// Line 364, Address: 0x1ed4a28, Func Offset: 0x28
	// Line 365, Address: 0x1ed4a30, Func Offset: 0x30
	// Line 366, Address: 0x1ed4a48, Func Offset: 0x48
	// Line 367, Address: 0x1ed4a60, Func Offset: 0x60
	// Line 369, Address: 0x1ed4a78, Func Offset: 0x78
	// Line 370, Address: 0x1ed4a80, Func Offset: 0x80
	// Line 374, Address: 0x1ed4a88, Func Offset: 0x88
	// Line 373, Address: 0x1ed4a90, Func Offset: 0x90
	// Line 374, Address: 0x1ed4a94, Func Offset: 0x94
	// Func End, Address: 0x1ed4a9c, Func Offset: 0x9c
}

// 
// Start address: 0x1ed4aa0
int ev_hospital0_hs09_photo_exec(sfObj* obj)
{
	_hs09_photoWork* wk;
	float postbl[4][2];
	float rottbl[4][2];
	// Line 586, Address: 0x1ed4aa0, Func Offset: 0
	// Line 589, Address: 0x1ed4aa4, Func Offset: 0x4
	// Line 586, Address: 0x1ed4aa8, Func Offset: 0x8
	// Line 589, Address: 0x1ed4ab0, Func Offset: 0x10
	// Line 594, Address: 0x1ed4ac0, Func Offset: 0x20
	// Line 600, Address: 0x1ed4ae4, Func Offset: 0x44
	// Line 598, Address: 0x1ed4ae8, Func Offset: 0x48
	// Line 604, Address: 0x1ed4af8, Func Offset: 0x58
	// Line 605, Address: 0x1ed4afc, Func Offset: 0x5c
	// Func End, Address: 0x1ed4b0c, Func Offset: 0x6c
	// Line 377, Address: 0x1ed4aa0, Func Offset: 0
	// Line 386, Address: 0x1ed4ab4, Func Offset: 0x14
	// Line 391, Address: 0x1ed4abc, Func Offset: 0x1c
	// Line 387, Address: 0x1ed4ac0, Func Offset: 0x20
	// Line 391, Address: 0x1ed4ac4, Func Offset: 0x24
	// Line 387, Address: 0x1ed4ad0, Func Offset: 0x30
	// Line 391, Address: 0x1ed4ad8, Func Offset: 0x38
	// Line 392, Address: 0x1ed4ae0, Func Offset: 0x40
	// Line 393, Address: 0x1ed4af4, Func Offset: 0x54
	// Line 395, Address: 0x1ed4af8, Func Offset: 0x58
	// Line 394, Address: 0x1ed4b00, Func Offset: 0x60
	// Line 395, Address: 0x1ed4b04, Func Offset: 0x64
	// Func End, Address: 0x1ed4b10, Func Offset: 0x70
}

// 
// Start address: 0x1ed4b10
int ev_hospital0_hs09_photo_draw(sfObj* obj)
{
	// Line 793, Address: 0x1ed4b10, Func Offset: 0
	// Line 798, Address: 0x1ed4b14, Func Offset: 0x4
	// Line 793, Address: 0x1ed4b18, Func Offset: 0x8
	// Line 798, Address: 0x1ed4b24, Func Offset: 0x14
	// Line 796, Address: 0x1ed4b28, Func Offset: 0x18
	// Line 798, Address: 0x1ed4b2c, Func Offset: 0x1c
	// Line 799, Address: 0x1ed4b58, Func Offset: 0x48
	// Line 802, Address: 0x1ed4b60, Func Offset: 0x50
	// Line 806, Address: 0x1ed4b68, Func Offset: 0x58
	// Line 807, Address: 0x1ed4b70, Func Offset: 0x60
	// Func End, Address: 0x1ed4b84, Func Offset: 0x74
	// Line 610, Address: 0x1ed4b10, Func Offset: 0
	// Func End, Address: 0x1ed4b18, Func Offset: 0x8
	// Line 397, Address: 0x1ed4b10, Func Offset: 0
	// Line 398, Address: 0x1ed4b1c, Func Offset: 0xc
	// Line 400, Address: 0x1ed4b24, Func Offset: 0x14
	// Line 401, Address: 0x1ed4b2c, Func Offset: 0x1c
	// Line 403, Address: 0x1ed4b30, Func Offset: 0x20
	// Line 402, Address: 0x1ed4b34, Func Offset: 0x24
	// Line 403, Address: 0x1ed4b38, Func Offset: 0x28
	// Func End, Address: 0x1ed4b40, Func Offset: 0x30
}

// 
// Start address: 0x1ed4b40
int ev_hospital0_hs09_photo_end(sfObj* obj)
{
	// Line 405, Address: 0x1ed4b40, Func Offset: 0
	// Line 406, Address: 0x1ed4b4c, Func Offset: 0xc
	// Line 408, Address: 0x1ed4b54, Func Offset: 0x14
	// Line 409, Address: 0x1ed4b5c, Func Offset: 0x1c
	// Line 411, Address: 0x1ed4b60, Func Offset: 0x20
	// Line 410, Address: 0x1ed4b64, Func Offset: 0x24
	// Line 411, Address: 0x1ed4b68, Func Offset: 0x28
	// Func End, Address: 0x1ed4b70, Func Offset: 0x30
}

// 
// Start address: 0x1ed4b70
int ev_hospital0_hs13_ceiling_fall_init(sfObj* obj)
{
	_hs13_ceilingWork* wk;
	// Line 434, Address: 0x1ed4b70, Func Offset: 0
	// Line 440, Address: 0x1ed4b74, Func Offset: 0x4
	// Line 434, Address: 0x1ed4b78, Func Offset: 0x8
	// Line 440, Address: 0x1ed4b80, Func Offset: 0x10
	// Line 441, Address: 0x1ed4b90, Func Offset: 0x20
	// Line 445, Address: 0x1ed4b98, Func Offset: 0x28
	// Line 446, Address: 0x1ed4ba0, Func Offset: 0x30
	// Line 447, Address: 0x1ed4bb8, Func Offset: 0x48
	// Line 448, Address: 0x1ed4bd0, Func Offset: 0x60
	// Line 450, Address: 0x1ed4be8, Func Offset: 0x78
	// Line 451, Address: 0x1ed4bf0, Func Offset: 0x80
	// Line 452, Address: 0x1ed4bf4, Func Offset: 0x84
	// Line 451, Address: 0x1ed4bf8, Func Offset: 0x88
	// Line 452, Address: 0x1ed4bfc, Func Offset: 0x8c
	// Line 456, Address: 0x1ed4c00, Func Offset: 0x90
	// Line 455, Address: 0x1ed4c08, Func Offset: 0x98
	// Line 456, Address: 0x1ed4c0c, Func Offset: 0x9c
	// Func End, Address: 0x1ed4c14, Func Offset: 0xa4
}

// 
// Start address: 0x1ed4c20
int ev_hospital0_hs13_ceiling_fall_exec(sfObj* obj)
{
	_hs13_ceilingWork* wk;
	float swing_v;
	float pos[4];
	float ceilCamPos[4];
	float ceilTargetPos[4];
	int bQuake;
	float postbl[4][2];
	// Line 462, Address: 0x1ed4c20, Func Offset: 0
	// Line 473, Address: 0x1ed4c30, Func Offset: 0x10
	// Line 463, Address: 0x1ed4c34, Func Offset: 0x14
	// Line 473, Address: 0x1ed4c38, Func Offset: 0x18
	// Line 475, Address: 0x1ed4c60, Func Offset: 0x40
	// Line 476, Address: 0x1ed4c74, Func Offset: 0x54
	// Line 477, Address: 0x1ed4c7c, Func Offset: 0x5c
	// Line 478, Address: 0x1ed4c80, Func Offset: 0x60
	// Line 479, Address: 0x1ed4c94, Func Offset: 0x74
	// Line 480, Address: 0x1ed4c9c, Func Offset: 0x7c
	// Line 482, Address: 0x1ed4ca8, Func Offset: 0x88
	// Line 483, Address: 0x1ed4cb4, Func Offset: 0x94
	// Line 482, Address: 0x1ed4cc0, Func Offset: 0xa0
	// Line 483, Address: 0x1ed4cc4, Func Offset: 0xa4
	// Line 484, Address: 0x1ed4cd0, Func Offset: 0xb0
	// Line 485, Address: 0x1ed4cd4, Func Offset: 0xb4
	// Line 486, Address: 0x1ed4cd8, Func Offset: 0xb8
	// Line 488, Address: 0x1ed4ce4, Func Offset: 0xc4
	// Line 490, Address: 0x1ed4ce8, Func Offset: 0xc8
	// Line 491, Address: 0x1ed4d04, Func Offset: 0xe4
	// Line 493, Address: 0x1ed4d28, Func Offset: 0x108
	// Line 497, Address: 0x1ed4d38, Func Offset: 0x118
	// Line 494, Address: 0x1ed4d44, Func Offset: 0x124
	// Line 497, Address: 0x1ed4d48, Func Offset: 0x128
	// Line 495, Address: 0x1ed4d4c, Func Offset: 0x12c
	// Line 497, Address: 0x1ed4d50, Func Offset: 0x130
	// Line 495, Address: 0x1ed4d54, Func Offset: 0x134
	// Line 497, Address: 0x1ed4d58, Func Offset: 0x138
	// Line 500, Address: 0x1ed4d60, Func Offset: 0x140
	// Line 501, Address: 0x1ed4d6c, Func Offset: 0x14c
	// Line 502, Address: 0x1ed4d74, Func Offset: 0x154
	// Line 503, Address: 0x1ed4d78, Func Offset: 0x158
	// Line 504, Address: 0x1ed4d94, Func Offset: 0x174
	// Line 506, Address: 0x1ed4da4, Func Offset: 0x184
	// Line 507, Address: 0x1ed4dbc, Func Offset: 0x19c
	// Line 510, Address: 0x1ed4dc8, Func Offset: 0x1a8
	// Line 511, Address: 0x1ed4df0, Func Offset: 0x1d0
	// Line 512, Address: 0x1ed4e00, Func Offset: 0x1e0
	// Line 513, Address: 0x1ed4e04, Func Offset: 0x1e4
	// Line 515, Address: 0x1ed4e10, Func Offset: 0x1f0
	// Line 516, Address: 0x1ed4e1c, Func Offset: 0x1fc
	// Line 517, Address: 0x1ed4e24, Func Offset: 0x204
	// Line 518, Address: 0x1ed4e28, Func Offset: 0x208
	// Line 519, Address: 0x1ed4e34, Func Offset: 0x214
	// Line 521, Address: 0x1ed4e3c, Func Offset: 0x21c
	// Line 522, Address: 0x1ed4e40, Func Offset: 0x220
	// Line 523, Address: 0x1ed4e44, Func Offset: 0x224
	// Line 525, Address: 0x1ed4e48, Func Offset: 0x228
	// Line 530, Address: 0x1ed4e54, Func Offset: 0x234
	// Line 532, Address: 0x1ed4e70, Func Offset: 0x250
	// Line 537, Address: 0x1ed4e80, Func Offset: 0x260
	// Line 538, Address: 0x1ed4e90, Func Offset: 0x270
	// Line 539, Address: 0x1ed4eb0, Func Offset: 0x290
	// Line 541, Address: 0x1ed4ec8, Func Offset: 0x2a8
	// Line 543, Address: 0x1ed4ee8, Func Offset: 0x2c8
	// Line 541, Address: 0x1ed4ef0, Func Offset: 0x2d0
	// Line 543, Address: 0x1ed4f00, Func Offset: 0x2e0
	// Line 544, Address: 0x1ed4f08, Func Offset: 0x2e8
	// Line 546, Address: 0x1ed4f0c, Func Offset: 0x2ec
	// Line 544, Address: 0x1ed4f14, Func Offset: 0x2f4
	// Line 546, Address: 0x1ed4f18, Func Offset: 0x2f8
	// Line 544, Address: 0x1ed4f1c, Func Offset: 0x2fc
	// Line 546, Address: 0x1ed4f2c, Func Offset: 0x30c
	// Line 547, Address: 0x1ed4f34, Func Offset: 0x314
	// Line 549, Address: 0x1ed4f38, Func Offset: 0x318
	// Line 548, Address: 0x1ed4f40, Func Offset: 0x320
	// Line 549, Address: 0x1ed4f44, Func Offset: 0x324
	// Func End, Address: 0x1ed4f50, Func Offset: 0x330
}

// 
// Start address: 0x1ed4f50
int ev_hospital0_hs13_ceiling_fall_draw(sfObj* obj)
{
	// Line 551, Address: 0x1ed4f50, Func Offset: 0
	// Line 552, Address: 0x1ed4f5c, Func Offset: 0xc
	// Line 554, Address: 0x1ed4f64, Func Offset: 0x14
	// Line 555, Address: 0x1ed4f6c, Func Offset: 0x1c
	// Line 557, Address: 0x1ed4f70, Func Offset: 0x20
	// Line 556, Address: 0x1ed4f74, Func Offset: 0x24
	// Line 557, Address: 0x1ed4f78, Func Offset: 0x28
	// Func End, Address: 0x1ed4f80, Func Offset: 0x30
	// Line 123, Address: 0x1ed4f50, Func Offset: 0
	// Line 124, Address: 0x1ed4f5c, Func Offset: 0xc
	// Line 126, Address: 0x1ed4f64, Func Offset: 0x14
	// Line 127, Address: 0x1ed4f6c, Func Offset: 0x1c
	// Line 130, Address: 0x1ed4f70, Func Offset: 0x20
	// Line 128, Address: 0x1ed4f74, Func Offset: 0x24
	// Line 130, Address: 0x1ed4f78, Func Offset: 0x28
	// Func End, Address: 0x1ed4f80, Func Offset: 0x30
}

// 
// Start address: 0x1ed4f80
int ev_hospital0_hs13_ceiling_fall_end(sfObj* obj)
{
	_hs13_ceilingWork* wk;
	// Line 559, Address: 0x1ed4f80, Func Offset: 0
	// Line 560, Address: 0x1ed4f90, Func Offset: 0x10
	// Line 562, Address: 0x1ed4f98, Func Offset: 0x18
	// Line 564, Address: 0x1ed4fa4, Func Offset: 0x24
	// Line 566, Address: 0x1ed4fb0, Func Offset: 0x30
	// Line 567, Address: 0x1ed4fb8, Func Offset: 0x38
	// Line 572, Address: 0x1ed4fc0, Func Offset: 0x40
	// Line 571, Address: 0x1ed4fc8, Func Offset: 0x48
	// Line 572, Address: 0x1ed4fcc, Func Offset: 0x4c
	// Func End, Address: 0x1ed4fd4, Func Offset: 0x54
	// Line 140, Address: 0x1ed4f80, Func Offset: 0
	// Line 146, Address: 0x1ed4fc0, Func Offset: 0x40
	// Line 147, Address: 0x1ed4fd4, Func Offset: 0x54
	// Line 151, Address: 0x1ed4fdc, Func Offset: 0x5c
	// Line 153, Address: 0x1ed5000, Func Offset: 0x80
	// Line 154, Address: 0x1ed500c, Func Offset: 0x8c
	// Line 156, Address: 0x1ed5018, Func Offset: 0x98
	// Line 157, Address: 0x1ed5020, Func Offset: 0xa0
	// Line 158, Address: 0x1ed5034, Func Offset: 0xb4
	// Line 160, Address: 0x1ed5038, Func Offset: 0xb8
	// Line 162, Address: 0x1ed5044, Func Offset: 0xc4
	// Line 163, Address: 0x1ed504c, Func Offset: 0xcc
	// Line 164, Address: 0x1ed5060, Func Offset: 0xe0
	// Line 165, Address: 0x1ed5068, Func Offset: 0xe8
	// Line 167, Address: 0x1ed506c, Func Offset: 0xec
	// Line 171, Address: 0x1ed5070, Func Offset: 0xf0
	// Line 170, Address: 0x1ed5078, Func Offset: 0xf8
	// Line 171, Address: 0x1ed507c, Func Offset: 0xfc
	// Func End, Address: 0x1ed50a0, Func Offset: 0x120
}

// 
// Start address: 0x1ed4fe0
int ev_hospital0_hs14_cage_fall_maphit_exec(sfObj* obj)
{
	float pos[4];
	_hs14_cageWork* wk;
	_anon1* pol;
	float rot;
	float r;
	// Line 604, Address: 0x1ed4fe0, Func Offset: 0
	// Line 610, Address: 0x1ed4fe8, Func Offset: 0x8
	// Line 608, Address: 0x1ed4fec, Func Offset: 0xc
	// Line 609, Address: 0x1ed4ff0, Func Offset: 0x10
	// Line 610, Address: 0x1ed4ff4, Func Offset: 0x14
	// Line 627, Address: 0x1ed4ffc, Func Offset: 0x1c
	// Line 612, Address: 0x1ed5004, Func Offset: 0x24
	// Line 627, Address: 0x1ed500c, Func Offset: 0x2c
	// Line 631, Address: 0x1ed5028, Func Offset: 0x48
	// Line 630, Address: 0x1ed502c, Func Offset: 0x4c
	// Line 631, Address: 0x1ed5030, Func Offset: 0x50
	// Func End, Address: 0x1ed5038, Func Offset: 0x58
	// Line 21, Address: 0x1ed4fe0, Func Offset: 0
	// Func End, Address: 0x1ed4fe8, Func Offset: 0x8
}

// 
// Start address: 0x1ed5040
int ev_hospital0_hs14_cage_fall_maphit_init(sfObj* obj)
{
	_hs14_cageWork* wk;
	_anon1* pol;
	// Line 615, Address: 0x1ed5040, Func Offset: 0
	// Line 616, Address: 0x1ed5048, Func Offset: 0x8
	// Line 618, Address: 0x1ed5050, Func Offset: 0x10
	// Line 617, Address: 0x1ed5054, Func Offset: 0x14
	// Line 618, Address: 0x1ed5058, Func Offset: 0x18
	// Func End, Address: 0x1ed5060, Func Offset: 0x20
	// Line 634, Address: 0x1ed5040, Func Offset: 0
	// Line 635, Address: 0x1ed5050, Func Offset: 0x10
	// Line 638, Address: 0x1ed5054, Func Offset: 0x14
	// Line 639, Address: 0x1ed505c, Func Offset: 0x1c
	// Line 641, Address: 0x1ed506c, Func Offset: 0x2c
	// Line 640, Address: 0x1ed5070, Func Offset: 0x30
	// Line 641, Address: 0x1ed5074, Func Offset: 0x34
	// Func End, Address: 0x1ed5084, Func Offset: 0x44
}

// 
// Start address: 0x1ed5090
int ev_hospital0_hs14_cage_fall_maphit_end(sfObj* obj)
{
	// Line 1057, Address: 0x1ed5090, Func Offset: 0
	// Line 1058, Address: 0x1ed50a4, Func Offset: 0x14
	// Line 1063, Address: 0x1ed50a8, Func Offset: 0x18
	// Line 1066, Address: 0x1ed50b0, Func Offset: 0x20
	// Line 1070, Address: 0x1ed50d0, Func Offset: 0x40
	// Line 1071, Address: 0x1ed50dc, Func Offset: 0x4c
	// Line 1072, Address: 0x1ed50e4, Func Offset: 0x54
	// Line 1073, Address: 0x1ed50ec, Func Offset: 0x5c
	// Line 1075, Address: 0x1ed50f0, Func Offset: 0x60
	// Line 1076, Address: 0x1ed5108, Func Offset: 0x78
	// Line 1077, Address: 0x1ed5110, Func Offset: 0x80
	// Line 1079, Address: 0x1ed5118, Func Offset: 0x88
	// Line 1080, Address: 0x1ed5120, Func Offset: 0x90
	// Line 1083, Address: 0x1ed512c, Func Offset: 0x9c
	// Line 1085, Address: 0x1ed514c, Func Offset: 0xbc
	// Line 1087, Address: 0x1ed5154, Func Offset: 0xc4
	// Line 1093, Address: 0x1ed5158, Func Offset: 0xc8
	// Line 1094, Address: 0x1ed515c, Func Offset: 0xcc
	// Func End, Address: 0x1ed5170, Func Offset: 0xe0
	// Line 731, Address: 0x1ed5090, Func Offset: 0
	// Line 732, Address: 0x1ed5094, Func Offset: 0x4
	// Line 735, Address: 0x1ed509c, Func Offset: 0xc
	// Line 802, Address: 0x1ed50ac, Func Offset: 0x1c
	// Line 805, Address: 0x1ed50b0, Func Offset: 0x20
	// Line 804, Address: 0x1ed50b4, Func Offset: 0x24
	// Line 805, Address: 0x1ed50b8, Func Offset: 0x28
	// Func End, Address: 0x1ed50c0, Func Offset: 0x30
	// Line 644, Address: 0x1ed5090, Func Offset: 0
	// Line 646, Address: 0x1ed5098, Func Offset: 0x8
	// Line 648, Address: 0x1ed50a4, Func Offset: 0x14
	// Line 647, Address: 0x1ed50a8, Func Offset: 0x18
	// Line 648, Address: 0x1ed50ac, Func Offset: 0x1c
	// Func End, Address: 0x1ed50b4, Func Offset: 0x24
}

// 
// Start address: 0x1ed50c0
int ev_hospital0_hs14_cage_fall_init(sfObj* obj)
{
	_hs14_cageWork* wk;
	// Line 808, Address: 0x1ed50c0, Func Offset: 0
	// Line 809, Address: 0x1ed50d0, Func Offset: 0x10
	// Line 808, Address: 0x1ed50d4, Func Offset: 0x14
	// Line 811, Address: 0x1ed50d8, Func Offset: 0x18
	// Line 815, Address: 0x1ed50e0, Func Offset: 0x20
	// Line 822, Address: 0x1ed50f0, Func Offset: 0x30
	// Line 823, Address: 0x1ed50f4, Func Offset: 0x34
	// Line 822, Address: 0x1ed50f8, Func Offset: 0x38
	// Line 823, Address: 0x1ed50fc, Func Offset: 0x3c
	// Line 827, Address: 0x1ed5128, Func Offset: 0x68
	// Line 829, Address: 0x1ed5130, Func Offset: 0x70
	// Line 828, Address: 0x1ed5134, Func Offset: 0x74
	// Line 829, Address: 0x1ed5138, Func Offset: 0x78
	// Line 828, Address: 0x1ed513c, Func Offset: 0x7c
	// Line 827, Address: 0x1ed5144, Func Offset: 0x84
	// Line 830, Address: 0x1ed5148, Func Offset: 0x88
	// Line 834, Address: 0x1ed5150, Func Offset: 0x90
	// Line 836, Address: 0x1ed5158, Func Offset: 0x98
	// Line 835, Address: 0x1ed515c, Func Offset: 0x9c
	// Line 836, Address: 0x1ed5160, Func Offset: 0xa0
	// Line 835, Address: 0x1ed5164, Func Offset: 0xa4
	// Line 834, Address: 0x1ed516c, Func Offset: 0xac
	// Line 835, Address: 0x1ed5174, Func Offset: 0xb4
	// Line 840, Address: 0x1ed5178, Func Offset: 0xb8
	// Line 842, Address: 0x1ed5188, Func Offset: 0xc8
	// Line 843, Address: 0x1ed5194, Func Offset: 0xd4
	// Line 845, Address: 0x1ed5198, Func Offset: 0xd8
	// Line 846, Address: 0x1ed51ac, Func Offset: 0xec
	// Line 849, Address: 0x1ed51b0, Func Offset: 0xf0
	// Line 850, Address: 0x1ed51b4, Func Offset: 0xf4
	// Func End, Address: 0x1ed51d0, Func Offset: 0x110
	// Line 672, Address: 0x1ed50c0, Func Offset: 0
	// Line 673, Address: 0x1ed50c4, Func Offset: 0x4
	// Line 672, Address: 0x1ed50c8, Func Offset: 0x8
	// Line 673, Address: 0x1ed50d0, Func Offset: 0x10
	// Line 674, Address: 0x1ed50ec, Func Offset: 0x2c
	// Line 675, Address: 0x1ed50f0, Func Offset: 0x30
	// Line 676, Address: 0x1ed5104, Func Offset: 0x44
	// Line 677, Address: 0x1ed510c, Func Offset: 0x4c
	// Line 679, Address: 0x1ed5110, Func Offset: 0x50
	// Line 681, Address: 0x1ed5118, Func Offset: 0x58
	// Line 682, Address: 0x1ed512c, Func Offset: 0x6c
	// Line 683, Address: 0x1ed5134, Func Offset: 0x74
	// Line 688, Address: 0x1ed5138, Func Offset: 0x78
	// Line 687, Address: 0x1ed5140, Func Offset: 0x80
	// Line 688, Address: 0x1ed5144, Func Offset: 0x84
	// Func End, Address: 0x1ed514c, Func Offset: 0x8c
	// Line 652, Address: 0x1ed50c0, Func Offset: 0
	// Line 658, Address: 0x1ed50c4, Func Offset: 0x4
	// Line 652, Address: 0x1ed50c8, Func Offset: 0x8
	// Line 658, Address: 0x1ed50d0, Func Offset: 0x10
	// Line 659, Address: 0x1ed50e0, Func Offset: 0x20
	// Line 663, Address: 0x1ed50e8, Func Offset: 0x28
	// Line 665, Address: 0x1ed50ec, Func Offset: 0x2c
	// Line 663, Address: 0x1ed50f0, Func Offset: 0x30
	// Line 665, Address: 0x1ed50f4, Func Offset: 0x34
	// Line 666, Address: 0x1ed50fc, Func Offset: 0x3c
	// Line 667, Address: 0x1ed5114, Func Offset: 0x54
	// Line 668, Address: 0x1ed512c, Func Offset: 0x6c
	// Line 669, Address: 0x1ed5144, Func Offset: 0x84
	// Line 670, Address: 0x1ed514c, Func Offset: 0x8c
	// Line 672, Address: 0x1ed5154, Func Offset: 0x94
	// Line 675, Address: 0x1ed5158, Func Offset: 0x98
	// Line 674, Address: 0x1ed5160, Func Offset: 0xa0
	// Line 675, Address: 0x1ed5164, Func Offset: 0xa4
	// Func End, Address: 0x1ed516c, Func Offset: 0xac
	// Line 181, Address: 0x1ed50c0, Func Offset: 0
	// Line 182, Address: 0x1ed50cc, Func Offset: 0xc
	// Line 183, Address: 0x1ed50d4, Func Offset: 0x14
	// Line 184, Address: 0x1ed50dc, Func Offset: 0x1c
	// Line 185, Address: 0x1ed50e8, Func Offset: 0x28
	// Line 188, Address: 0x1ed50f0, Func Offset: 0x30
	// Line 186, Address: 0x1ed50f4, Func Offset: 0x34
	// Line 188, Address: 0x1ed50f8, Func Offset: 0x38
	// Func End, Address: 0x1ed5104, Func Offset: 0x44
}

// 
// Start address: 0x1ed5170
int ev_hospital0_hs14_cage_fall_start()
{
	// Line 1097, Address: 0x1ed5170, Func Offset: 0
	// Line 1099, Address: 0x1ed5174, Func Offset: 0x4
	// Line 1097, Address: 0x1ed5178, Func Offset: 0x8
	// Line 1099, Address: 0x1ed517c, Func Offset: 0xc
	// Line 1102, Address: 0x1ed5184, Func Offset: 0x14
	// Line 1103, Address: 0x1ed5188, Func Offset: 0x18
	// Line 1102, Address: 0x1ed518c, Func Offset: 0x1c
	// Line 1104, Address: 0x1ed519c, Func Offset: 0x2c
	// Func End, Address: 0x1ed51a8, Func Offset: 0x38
	// Line 682, Address: 0x1ed5170, Func Offset: 0
	// Line 683, Address: 0x1ed5178, Func Offset: 0x8
	// Line 684, Address: 0x1ed5180, Func Offset: 0x10
	// Line 686, Address: 0x1ed5188, Func Offset: 0x18
	// Func End, Address: 0x1ed5190, Func Offset: 0x20
}

// 
// Start address: 0x1ed5190
int ev_hospital0_hs14_cage_fall_exec(sfObj* obj)
{
	_hs14_cageWork* wk;
	float swing_v;
	float pos[4];
	float cageTargetPos[4];
	float cageCamPos[4];
	int bQuake;
	float postbl[4][2];
	// Line 688, Address: 0x1ed5190, Func Offset: 0
	// Line 698, Address: 0x1ed5194, Func Offset: 0x4
	// Line 688, Address: 0x1ed5198, Func Offset: 0x8
	// Line 698, Address: 0x1ed51a4, Func Offset: 0x14
	// Line 689, Address: 0x1ed51a8, Func Offset: 0x18
	// Line 698, Address: 0x1ed51ac, Func Offset: 0x1c
	// Line 699, Address: 0x1ed51e4, Func Offset: 0x54
	// Line 700, Address: 0x1ed51e8, Func Offset: 0x58
	// Line 701, Address: 0x1ed51ec, Func Offset: 0x5c
	// Line 700, Address: 0x1ed51f0, Func Offset: 0x60
	// Line 701, Address: 0x1ed51f4, Func Offset: 0x64
	// Line 702, Address: 0x1ed5204, Func Offset: 0x74
	// Line 704, Address: 0x1ed520c, Func Offset: 0x7c
	// Line 705, Address: 0x1ed5210, Func Offset: 0x80
	// Line 707, Address: 0x1ed5224, Func Offset: 0x94
	// Line 706, Address: 0x1ed5228, Func Offset: 0x98
	// Line 709, Address: 0x1ed522c, Func Offset: 0x9c
	// Line 707, Address: 0x1ed5230, Func Offset: 0xa0
	// Line 709, Address: 0x1ed5234, Func Offset: 0xa4
	// Line 710, Address: 0x1ed523c, Func Offset: 0xac
	// Line 711, Address: 0x1ed5248, Func Offset: 0xb8
	// Line 713, Address: 0x1ed5258, Func Offset: 0xc8
	// Line 715, Address: 0x1ed5260, Func Offset: 0xd0
	// Line 717, Address: 0x1ed5270, Func Offset: 0xe0
	// Line 720, Address: 0x1ed5278, Func Offset: 0xe8
	// Line 725, Address: 0x1ed5298, Func Offset: 0x108
	// Line 726, Address: 0x1ed52a4, Func Offset: 0x114
	// Line 727, Address: 0x1ed52a8, Func Offset: 0x118
	// Line 728, Address: 0x1ed52b4, Func Offset: 0x124
	// Line 729, Address: 0x1ed52b8, Func Offset: 0x128
	// Line 731, Address: 0x1ed52d4, Func Offset: 0x144
	// Line 732, Address: 0x1ed52f8, Func Offset: 0x168
	// Line 733, Address: 0x1ed5308, Func Offset: 0x178
	// Line 734, Address: 0x1ed530c, Func Offset: 0x17c
	// Line 735, Address: 0x1ed5318, Func Offset: 0x188
	// Line 737, Address: 0x1ed5324, Func Offset: 0x194
	// Line 739, Address: 0x1ed5340, Func Offset: 0x1b0
	// Line 740, Address: 0x1ed534c, Func Offset: 0x1bc
	// Line 741, Address: 0x1ed5354, Func Offset: 0x1c4
	// Line 742, Address: 0x1ed5358, Func Offset: 0x1c8
	// Line 743, Address: 0x1ed5364, Func Offset: 0x1d4
	// Line 742, Address: 0x1ed5370, Func Offset: 0x1e0
	// Line 743, Address: 0x1ed5374, Func Offset: 0x1e4
	// Line 744, Address: 0x1ed5380, Func Offset: 0x1f0
	// Line 746, Address: 0x1ed5384, Func Offset: 0x1f4
	// Line 744, Address: 0x1ed5388, Func Offset: 0x1f8
	// Line 746, Address: 0x1ed538c, Func Offset: 0x1fc
	// Line 748, Address: 0x1ed539c, Func Offset: 0x20c
	// Line 749, Address: 0x1ed53a0, Func Offset: 0x210
	// Line 750, Address: 0x1ed53a8, Func Offset: 0x218
	// Line 751, Address: 0x1ed53b4, Func Offset: 0x224
	// Line 755, Address: 0x1ed53c4, Func Offset: 0x234
	// Line 756, Address: 0x1ed53d0, Func Offset: 0x240
	// Line 761, Address: 0x1ed53d8, Func Offset: 0x248
	// Line 762, Address: 0x1ed53e8, Func Offset: 0x258
	// Line 763, Address: 0x1ed5408, Func Offset: 0x278
	// Line 765, Address: 0x1ed5420, Func Offset: 0x290
	// Line 767, Address: 0x1ed5440, Func Offset: 0x2b0
	// Line 765, Address: 0x1ed5448, Func Offset: 0x2b8
	// Line 767, Address: 0x1ed5458, Func Offset: 0x2c8
	// Line 768, Address: 0x1ed5460, Func Offset: 0x2d0
	// Line 770, Address: 0x1ed5464, Func Offset: 0x2d4
	// Line 768, Address: 0x1ed546c, Func Offset: 0x2dc
	// Line 770, Address: 0x1ed5470, Func Offset: 0x2e0
	// Line 768, Address: 0x1ed5474, Func Offset: 0x2e4
	// Line 770, Address: 0x1ed5484, Func Offset: 0x2f4
	// Line 771, Address: 0x1ed548c, Func Offset: 0x2fc
	// Line 772, Address: 0x1ed5498, Func Offset: 0x308
	// Line 777, Address: 0x1ed54a0, Func Offset: 0x310
	// Line 778, Address: 0x1ed54bc, Func Offset: 0x32c
	// Line 779, Address: 0x1ed54c4, Func Offset: 0x334
	// Line 782, Address: 0x1ed54c8, Func Offset: 0x338
	// Line 781, Address: 0x1ed54d0, Func Offset: 0x340
	// Line 782, Address: 0x1ed54d4, Func Offset: 0x344
	// Func End, Address: 0x1ed54e0, Func Offset: 0x350
}

// 
// Start address: 0x1ed54e0
int ev_hospital0_hs14_cage_fall_draw(sfObj* obj)
{
	// Line 784, Address: 0x1ed54e0, Func Offset: 0
	// Line 785, Address: 0x1ed54ec, Func Offset: 0xc
	// Line 787, Address: 0x1ed54f4, Func Offset: 0x14
	// Line 788, Address: 0x1ed54fc, Func Offset: 0x1c
	// Line 790, Address: 0x1ed5500, Func Offset: 0x20
	// Line 789, Address: 0x1ed5504, Func Offset: 0x24
	// Line 790, Address: 0x1ed5508, Func Offset: 0x28
	// Func End, Address: 0x1ed5510, Func Offset: 0x30
}

// 
// Start address: 0x1ed5510
int ev_hospital0_hs14_cage_fall_end(sfObj* obj)
{
	// Line 792, Address: 0x1ed5510, Func Offset: 0
	// Line 793, Address: 0x1ed551c, Func Offset: 0xc
	// Line 794, Address: 0x1ed5528, Func Offset: 0x18
	// Line 796, Address: 0x1ed5530, Func Offset: 0x20
	// Line 799, Address: 0x1ed5538, Func Offset: 0x28
	// Line 798, Address: 0x1ed5540, Func Offset: 0x30
	// Line 799, Address: 0x1ed5544, Func Offset: 0x34
	// Func End, Address: 0x1ed554c, Func Offset: 0x3c
}

// 
// Start address: 0x1ed5550
int ev_hospital0_hs14_cage_door_exec(sfObj* obj)
{
	int ret;
	float pos[4][2];
	float rot[2];
	// Line 804, Address: 0x1ed5550, Func Offset: 0
	// Line 806, Address: 0x1ed5554, Func Offset: 0x4
	// Line 804, Address: 0x1ed5558, Func Offset: 0x8
	// Line 810, Address: 0x1ed555c, Func Offset: 0xc
	// Line 804, Address: 0x1ed5560, Func Offset: 0x10
	// Line 806, Address: 0x1ed5564, Func Offset: 0x14
	// Line 804, Address: 0x1ed5568, Func Offset: 0x18
	// Line 806, Address: 0x1ed556c, Func Offset: 0x1c
	// Line 810, Address: 0x1ed5574, Func Offset: 0x24
	// Line 806, Address: 0x1ed5578, Func Offset: 0x28
	// Line 810, Address: 0x1ed557c, Func Offset: 0x2c
	// Line 806, Address: 0x1ed5584, Func Offset: 0x34
	// Line 811, Address: 0x1ed5588, Func Offset: 0x38
	// Line 806, Address: 0x1ed558c, Func Offset: 0x3c
	// Line 810, Address: 0x1ed5590, Func Offset: 0x40
	// Line 811, Address: 0x1ed5598, Func Offset: 0x48
	// Line 814, Address: 0x1ed55c0, Func Offset: 0x70
	// Line 816, Address: 0x1ed55f8, Func Offset: 0xa8
	// Line 818, Address: 0x1ed5614, Func Offset: 0xc4
	// Line 820, Address: 0x1ed561c, Func Offset: 0xcc
	// Line 821, Address: 0x1ed5624, Func Offset: 0xd4
	// Line 822, Address: 0x1ed562c, Func Offset: 0xdc
	// Line 823, Address: 0x1ed5634, Func Offset: 0xe4
	// Line 824, Address: 0x1ed5638, Func Offset: 0xe8
	// Line 826, Address: 0x1ed5648, Func Offset: 0xf8
	// Line 827, Address: 0x1ed5660, Func Offset: 0x110
	// Line 829, Address: 0x1ed5678, Func Offset: 0x128
	// Line 831, Address: 0x1ed5680, Func Offset: 0x130
	// Line 832, Address: 0x1ed5688, Func Offset: 0x138
	// Line 833, Address: 0x1ed5694, Func Offset: 0x144
	// Line 835, Address: 0x1ed5698, Func Offset: 0x148
	// Line 836, Address: 0x1ed56d0, Func Offset: 0x180
	// Line 838, Address: 0x1ed56d4, Func Offset: 0x184
	// Line 839, Address: 0x1ed56d8, Func Offset: 0x188
	// Line 840, Address: 0x1ed56dc, Func Offset: 0x18c
	// Func End, Address: 0x1ed56f0, Func Offset: 0x1a0
}

// 
// Start address: 0x1ed56f0
int ev_hospital0_hs14_cage_door_open_trgchk(sfObj* obj)
{
	// Line 854, Address: 0x1ed56f0, Func Offset: 0
	// Line 856, Address: 0x1ed56f4, Func Offset: 0x4
	// Line 854, Address: 0x1ed56f8, Func Offset: 0x8
	// Line 856, Address: 0x1ed56fc, Func Offset: 0xc
	// Line 858, Address: 0x1ed571c, Func Offset: 0x2c
	// Func End, Address: 0x1ed5728, Func Offset: 0x38
}

// 
// Start address: 0x1ed5730
int ev_hospital0_hs14_cage_door_open_init(sfObj* obj)
{
	// Line 1377, Address: 0x1ed5730, Func Offset: 0
	// Line 1374, Address: 0x1ed5734, Func Offset: 0x4
	// Line 1377, Address: 0x1ed5738, Func Offset: 0x8
	// Line 1374, Address: 0x1ed5740, Func Offset: 0x10
	// Line 1377, Address: 0x1ed5744, Func Offset: 0x14
	// Line 1382, Address: 0x1ed5764, Func Offset: 0x34
	// Line 1381, Address: 0x1ed5768, Func Offset: 0x38
	// Line 1382, Address: 0x1ed576c, Func Offset: 0x3c
	// Func End, Address: 0x1ed5774, Func Offset: 0x44
	// Line 860, Address: 0x1ed5730, Func Offset: 0
	// Line 862, Address: 0x1ed5734, Func Offset: 0x4
	// Line 860, Address: 0x1ed5738, Func Offset: 0x8
	// Line 862, Address: 0x1ed573c, Func Offset: 0xc
	// Line 860, Address: 0x1ed5740, Func Offset: 0x10
	// Line 862, Address: 0x1ed5744, Func Offset: 0x14
	// Line 863, Address: 0x1ed575c, Func Offset: 0x2c
	// Line 864, Address: 0x1ed5764, Func Offset: 0x34
	// Func End, Address: 0x1ed5774, Func Offset: 0x44
	// Line 531, Address: 0x1ed5730, Func Offset: 0
	// Line 534, Address: 0x1ed5738, Func Offset: 0x8
	// Line 536, Address: 0x1ed5748, Func Offset: 0x18
	// Line 539, Address: 0x1ed5750, Func Offset: 0x20
	// Line 538, Address: 0x1ed5754, Func Offset: 0x24
	// Line 539, Address: 0x1ed5758, Func Offset: 0x28
	// Func End, Address: 0x1ed5760, Func Offset: 0x30
}

// 
// Start address: 0x1ed5780
int ev_hospital0_hs14_cage_door_open_end()
{
	// Line 1401, Address: 0x1ed5780, Func Offset: 0
	// Line 1402, Address: 0x1ed578c, Func Offset: 0xc
	// Func End, Address: 0x1ed5794, Func Offset: 0x14
	// Line 869, Address: 0x1ed5780, Func Offset: 0
	// Line 870, Address: 0x1ed5784, Func Offset: 0x4
	// Line 869, Address: 0x1ed5788, Func Offset: 0x8
	// Line 871, Address: 0x1ed5794, Func Offset: 0x14
	// Func End, Address: 0x1ed579c, Func Offset: 0x1c
}

// 
// Start address: 0x1ed57a0
int ev_hospital0_hs14_cage_door_access_init(sfObj* obj)
{
	// Line 1404, Address: 0x1ed57a0, Func Offset: 0
	// Line 1405, Address: 0x1ed57a4, Func Offset: 0x4
	// Line 1404, Address: 0x1ed57a8, Func Offset: 0x8
	// Line 1405, Address: 0x1ed57b0, Func Offset: 0x10
	// Line 1406, Address: 0x1ed57bc, Func Offset: 0x1c
	// Line 1408, Address: 0x1ed57d0, Func Offset: 0x30
	// Line 1407, Address: 0x1ed57d4, Func Offset: 0x34
	// Line 1408, Address: 0x1ed57d8, Func Offset: 0x38
	// Func End, Address: 0x1ed57e4, Func Offset: 0x44
	// Line 885, Address: 0x1ed57a0, Func Offset: 0
	// Line 887, Address: 0x1ed57a4, Func Offset: 0x4
	// Line 885, Address: 0x1ed57a8, Func Offset: 0x8
	// Line 887, Address: 0x1ed57ac, Func Offset: 0xc
	// Line 885, Address: 0x1ed57b0, Func Offset: 0x10
	// Line 887, Address: 0x1ed57b4, Func Offset: 0x14
	// Line 888, Address: 0x1ed57cc, Func Offset: 0x2c
	// Line 889, Address: 0x1ed57d4, Func Offset: 0x34
	// Func End, Address: 0x1ed57e4, Func Offset: 0x44
}

// 
// Start address: 0x1ed57f0
int ev_hospital0_hs32_door_init(sfObj* obj)
{
	_anon4* sw;
	_hs32_doorWork* wk;
	sgBone* bone;
	float qrot[4];
	float pos[4];
	// Line 1410, Address: 0x1ed57f0, Func Offset: 0
	// Line 1414, Address: 0x1ed57f4, Func Offset: 0x4
	// Line 1410, Address: 0x1ed57f8, Func Offset: 0x8
	// Line 1414, Address: 0x1ed5804, Func Offset: 0x14
	// Line 1412, Address: 0x1ed5808, Func Offset: 0x18
	// Line 1414, Address: 0x1ed580c, Func Offset: 0x1c
	// Line 1416, Address: 0x1ed5838, Func Offset: 0x48
	// Line 1417, Address: 0x1ed585c, Func Offset: 0x6c
	// Line 1418, Address: 0x1ed5864, Func Offset: 0x74
	// Line 1419, Address: 0x1ed586c, Func Offset: 0x7c
	// Line 1421, Address: 0x1ed5870, Func Offset: 0x80
	// Line 1423, Address: 0x1ed5880, Func Offset: 0x90
	// Line 1425, Address: 0x1ed5888, Func Offset: 0x98
	// Line 1430, Address: 0x1ed58a4, Func Offset: 0xb4
	// Line 1432, Address: 0x1ed58b0, Func Offset: 0xc0
	// Line 1430, Address: 0x1ed58b4, Func Offset: 0xc4
	// Line 1432, Address: 0x1ed58b8, Func Offset: 0xc8
	// Line 1433, Address: 0x1ed58c4, Func Offset: 0xd4
	// Line 1434, Address: 0x1ed58c8, Func Offset: 0xd8
	// Line 1433, Address: 0x1ed58cc, Func Offset: 0xdc
	// Line 1434, Address: 0x1ed58d0, Func Offset: 0xe0
	// Line 1433, Address: 0x1ed58d4, Func Offset: 0xe4
	// Line 1435, Address: 0x1ed58d8, Func Offset: 0xe8
	// Line 1436, Address: 0x1ed58e4, Func Offset: 0xf4
	// Line 1439, Address: 0x1ed58f0, Func Offset: 0x100
	// Line 1440, Address: 0x1ed58fc, Func Offset: 0x10c
	// Line 1442, Address: 0x1ed5904, Func Offset: 0x114
	// Line 1443, Address: 0x1ed590c, Func Offset: 0x11c
	// Line 1445, Address: 0x1ed5910, Func Offset: 0x120
	// Line 1446, Address: 0x1ed5920, Func Offset: 0x130
	// Line 1449, Address: 0x1ed5944, Func Offset: 0x154
	// Line 1450, Address: 0x1ed5958, Func Offset: 0x168
	// Line 1452, Address: 0x1ed5960, Func Offset: 0x170
	// Line 1455, Address: 0x1ed5968, Func Offset: 0x178
	// Line 1456, Address: 0x1ed5978, Func Offset: 0x188
	// Line 1460, Address: 0x1ed5980, Func Offset: 0x190
	// Line 1461, Address: 0x1ed5988, Func Offset: 0x198
	// Func End, Address: 0x1ed599c, Func Offset: 0x1ac
	// Line 924, Address: 0x1ed57f0, Func Offset: 0
	// Line 925, Address: 0x1ed5808, Func Offset: 0x18
	// Line 926, Address: 0x1ed5814, Func Offset: 0x24
	// Line 928, Address: 0x1ed5828, Func Offset: 0x38
	// Line 929, Address: 0x1ed583c, Func Offset: 0x4c
	// Line 937, Address: 0x1ed5844, Func Offset: 0x54
	// Line 948, Address: 0x1ed584c, Func Offset: 0x5c
	// Line 949, Address: 0x1ed5864, Func Offset: 0x74
	// Line 950, Address: 0x1ed587c, Func Offset: 0x8c
	// Line 953, Address: 0x1ed5894, Func Offset: 0xa4
	// Line 952, Address: 0x1ed5898, Func Offset: 0xa8
	// Line 957, Address: 0x1ed589c, Func Offset: 0xac
	// Line 953, Address: 0x1ed58a0, Func Offset: 0xb0
	// Line 954, Address: 0x1ed58a4, Func Offset: 0xb4
	// Line 955, Address: 0x1ed58ac, Func Offset: 0xbc
	// Line 957, Address: 0x1ed58b4, Func Offset: 0xc4
	// Line 959, Address: 0x1ed58bc, Func Offset: 0xcc
	// Line 961, Address: 0x1ed58cc, Func Offset: 0xdc
	// Line 962, Address: 0x1ed58dc, Func Offset: 0xec
	// Line 963, Address: 0x1ed58f4, Func Offset: 0x104
	// Line 967, Address: 0x1ed5900, Func Offset: 0x110
	// Line 968, Address: 0x1ed5904, Func Offset: 0x114
	// Line 970, Address: 0x1ed5908, Func Offset: 0x118
	// Line 971, Address: 0x1ed5910, Func Offset: 0x120
	// Func End, Address: 0x1ed592c, Func Offset: 0x13c
	// Line 589, Address: 0x1ed57f0, Func Offset: 0
	// Line 591, Address: 0x1ed57f4, Func Offset: 0x4
	// Line 589, Address: 0x1ed57f8, Func Offset: 0x8
	// Line 591, Address: 0x1ed57fc, Func Offset: 0xc
	// Line 592, Address: 0x1ed580c, Func Offset: 0x1c
	// Line 595, Address: 0x1ed5820, Func Offset: 0x30
	// Line 597, Address: 0x1ed5830, Func Offset: 0x40
	// Line 596, Address: 0x1ed5834, Func Offset: 0x44
	// Line 597, Address: 0x1ed5838, Func Offset: 0x48
	// Func End, Address: 0x1ed5840, Func Offset: 0x50
}

// 
// Start address: 0x1ed5930
int ev_hospital0_hs32_door_exec(sfObj* obj)
{
	_hs32_doorWork* wk;
	_anon4* sw;
	float pos[4];
	float t;
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
// Start address: 0x1ed5a90
int ev_hospital0_hs32_door_draw(sfObj* obj)
{
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

// 
// Start address: 0x1ed5ac0
int ev_hospital0_hs32_door_end(sfObj* obj)
{
	// Line 1023, Address: 0x1ed5ac0, Func Offset: 0
	// Line 1024, Address: 0x1ed5acc, Func Offset: 0xc
	// Line 1026, Address: 0x1ed5ad4, Func Offset: 0x14
	// Line 1027, Address: 0x1ed5adc, Func Offset: 0x1c
	// Line 1029, Address: 0x1ed5ae0, Func Offset: 0x20
	// Line 1028, Address: 0x1ed5ae4, Func Offset: 0x24
	// Line 1029, Address: 0x1ed5ae8, Func Offset: 0x28
	// Func End, Address: 0x1ed5af0, Func Offset: 0x30
}

// 
// Start address: 0x1ed5af0
sfObj* ev_hospital0_hs32_door_get_obj(int door_num)
{
	int i;
	int n;
	sfObj* obj;
	// Line 1031, Address: 0x1ed5af0, Func Offset: 0
	// Line 1034, Address: 0x1ed5b04, Func Offset: 0x14
	// Line 1035, Address: 0x1ed5b14, Func Offset: 0x24
	// Line 1036, Address: 0x1ed5b20, Func Offset: 0x30
	// Line 1037, Address: 0x1ed5b2c, Func Offset: 0x3c
	// Line 1038, Address: 0x1ed5b38, Func Offset: 0x48
	// Line 1040, Address: 0x1ed5b40, Func Offset: 0x50
	// Line 1041, Address: 0x1ed5b50, Func Offset: 0x60
	// Line 1042, Address: 0x1ed5b58, Func Offset: 0x68
	// Func End, Address: 0x1ed5b70, Func Offset: 0x80
	// Line 695, Address: 0x1ed5af0, Func Offset: 0
	// Line 696, Address: 0x1ed5af8, Func Offset: 0x8
	// Line 698, Address: 0x1ed5b00, Func Offset: 0x10
	// Line 697, Address: 0x1ed5b04, Func Offset: 0x14
	// Line 698, Address: 0x1ed5b08, Func Offset: 0x18
	// Func End, Address: 0x1ed5b10, Func Offset: 0x20
}

// 
// Start address: 0x1ed5b70
void ev_hospital0_hs32_door_open(sfObj* obj)
{
	_hs32_doorWork* wk;
	float pos[4];
	// Line 1610, Address: 0x1ed5b70, Func Offset: 0
	// Line 1614, Address: 0x1ed5b74, Func Offset: 0x4
	// Line 1610, Address: 0x1ed5b78, Func Offset: 0x8
	// Line 1614, Address: 0x1ed5b88, Func Offset: 0x18
	// Line 1617, Address: 0x1ed5b94, Func Offset: 0x24
	// Line 1618, Address: 0x1ed5ba8, Func Offset: 0x38
	// Line 1619, Address: 0x1ed5bd4, Func Offset: 0x64
	// Line 1620, Address: 0x1ed5be0, Func Offset: 0x70
	// Line 1622, Address: 0x1ed5bf8, Func Offset: 0x88
	// Line 1623, Address: 0x1ed5c24, Func Offset: 0xb4
	// Line 1624, Address: 0x1ed5c30, Func Offset: 0xc0
	// Line 1627, Address: 0x1ed5c48, Func Offset: 0xd8
	// Line 1629, Address: 0x1ed5c50, Func Offset: 0xe0
	// Line 1630, Address: 0x1ed5c54, Func Offset: 0xe4
	// Func End, Address: 0x1ed5c6c, Func Offset: 0xfc
	// Line 1044, Address: 0x1ed5b70, Func Offset: 0
	// Line 1045, Address: 0x1ed5b74, Func Offset: 0x4
	// Line 1048, Address: 0x1ed5b88, Func Offset: 0x18
	// Line 1049, Address: 0x1ed5b8c, Func Offset: 0x1c
	// Line 1048, Address: 0x1ed5b90, Func Offset: 0x20
	// Line 1049, Address: 0x1ed5b94, Func Offset: 0x24
	// Line 1050, Address: 0x1ed5b9c, Func Offset: 0x2c
	// Line 1051, Address: 0x1ed5bc4, Func Offset: 0x54
	// Line 1052, Address: 0x1ed5bc8, Func Offset: 0x58
	// Func End, Address: 0x1ed5bd4, Func Offset: 0x64
}

// 
// Start address: 0x1ed5be0
void ev_hospital0_hs32_door_close(sfObj* obj)
{
	_hs32_doorWork* wk;
	float pos[4];
	// Line 1084, Address: 0x1ed5be0, Func Offset: 0
	// Line 1085, Address: 0x1ed5be4, Func Offset: 0x4
	// Line 1084, Address: 0x1ed5be8, Func Offset: 0x8
	// Line 1085, Address: 0x1ed5bf0, Func Offset: 0x10
	// Line 1087, Address: 0x1ed5c10, Func Offset: 0x30
	// Line 1089, Address: 0x1ed5c18, Func Offset: 0x38
	// Line 1091, Address: 0x1ed5c20, Func Offset: 0x40
	// Line 1095, Address: 0x1ed5c40, Func Offset: 0x60
	// Line 1097, Address: 0x1ed5c48, Func Offset: 0x68
	// Line 1098, Address: 0x1ed5c4c, Func Offset: 0x6c
	// Line 1100, Address: 0x1ed5c58, Func Offset: 0x78
	// Line 1101, Address: 0x1ed5c60, Func Offset: 0x80
	// Func End, Address: 0x1ed5c70, Func Offset: 0x90
	// Line 841, Address: 0x1ed5be0, Func Offset: 0
	// Line 842, Address: 0x1ed5be8, Func Offset: 0x8
	// Line 845, Address: 0x1ed5bf4, Func Offset: 0x14
	// Line 846, Address: 0x1ed5c04, Func Offset: 0x24
	// Line 852, Address: 0x1ed5c0c, Func Offset: 0x2c
	// Line 855, Address: 0x1ed5c10, Func Offset: 0x30
	// Line 854, Address: 0x1ed5c14, Func Offset: 0x34
	// Line 855, Address: 0x1ed5c18, Func Offset: 0x38
	// Func End, Address: 0x1ed5c20, Func Offset: 0x40
	// Line 1054, Address: 0x1ed5be0, Func Offset: 0
	// Line 1055, Address: 0x1ed5be4, Func Offset: 0x4
	// Line 1058, Address: 0x1ed5bf8, Func Offset: 0x18
	// Line 1059, Address: 0x1ed5bfc, Func Offset: 0x1c
	// Line 1058, Address: 0x1ed5c00, Func Offset: 0x20
	// Line 1059, Address: 0x1ed5c04, Func Offset: 0x24
	// Line 1060, Address: 0x1ed5c0c, Func Offset: 0x2c
	// Line 1061, Address: 0x1ed5c34, Func Offset: 0x54
	// Line 1062, Address: 0x1ed5c38, Func Offset: 0x58
	// Func End, Address: 0x1ed5c44, Func Offset: 0x64
}

// 
// Start address: 0x1ed5c50
int ev_hospital0_hs32_is_door_open(sfObj* obj)
{
	// Line 1065, Address: 0x1ed5c50, Func Offset: 0
	// Line 1067, Address: 0x1ed5c64, Func Offset: 0x14
	// Line 1068, Address: 0x1ed5c74, Func Offset: 0x24
	// Line 1069, Address: 0x1ed5c78, Func Offset: 0x28
	// Line 1070, Address: 0x1ed5c80, Func Offset: 0x30
	// Func End, Address: 0x1ed5c88, Func Offset: 0x38
}

// 
// Start address: 0x1ed5c90
int ev_hospital0_hs32_is_door_close(sfObj* obj)
{
	// Line 1073, Address: 0x1ed5c90, Func Offset: 0
	// Line 1075, Address: 0x1ed5ca4, Func Offset: 0x14
	// Line 1076, Address: 0x1ed5cb4, Func Offset: 0x24
	// Line 1077, Address: 0x1ed5cb8, Func Offset: 0x28
	// Line 1078, Address: 0x1ed5cc0, Func Offset: 0x30
	// Func End, Address: 0x1ed5cc8, Func Offset: 0x38
}

// 
// Start address: 0x1ed5cd0
int ev_hospital0_hs21_chain_init(sfObj* obj)
{
	_hs21_chainWork* wk;
	unsigned int model;
	unsigned int model2;
	unsigned int tex;
	unsigned int tex2;
	float postbl[4][2];
	// Line 1092, Address: 0x1ed5cd0, Func Offset: 0
	// Line 1100, Address: 0x1ed5cd4, Func Offset: 0x4
	// Line 1092, Address: 0x1ed5cd8, Func Offset: 0x8
	// Line 1100, Address: 0x1ed5ce8, Func Offset: 0x18
	// Line 1101, Address: 0x1ed5cf8, Func Offset: 0x28
	// Line 1102, Address: 0x1ed5d00, Func Offset: 0x30
	// Line 1107, Address: 0x1ed5d04, Func Offset: 0x34
	// Line 1108, Address: 0x1ed5d0c, Func Offset: 0x3c
	// Line 1109, Address: 0x1ed5d10, Func Offset: 0x40
	// Line 1108, Address: 0x1ed5d14, Func Offset: 0x44
	// Line 1110, Address: 0x1ed5d18, Func Offset: 0x48
	// Line 1112, Address: 0x1ed5d1c, Func Offset: 0x4c
	// Line 1113, Address: 0x1ed5d28, Func Offset: 0x58
	// Line 1114, Address: 0x1ed5d34, Func Offset: 0x64
	// Line 1115, Address: 0x1ed5d38, Func Offset: 0x68
	// Line 1114, Address: 0x1ed5d3c, Func Offset: 0x6c
	// Line 1116, Address: 0x1ed5d40, Func Offset: 0x70
	// Line 1118, Address: 0x1ed5d44, Func Offset: 0x74
	// Line 1119, Address: 0x1ed5d50, Func Offset: 0x80
	// Line 1120, Address: 0x1ed5d58, Func Offset: 0x88
	// Line 1122, Address: 0x1ed5d60, Func Offset: 0x90
	// Line 1127, Address: 0x1ed5d68, Func Offset: 0x98
	// Line 1128, Address: 0x1ed5d7c, Func Offset: 0xac
	// Line 1130, Address: 0x1ed5d90, Func Offset: 0xc0
	// Line 1131, Address: 0x1ed5da8, Func Offset: 0xd8
	// Line 1132, Address: 0x1ed5db0, Func Offset: 0xe0
	// Line 1134, Address: 0x1ed5db4, Func Offset: 0xe4
	// Line 1137, Address: 0x1ed5dc4, Func Offset: 0xf4
	// Line 1138, Address: 0x1ed5dd8, Func Offset: 0x108
	// Line 1140, Address: 0x1ed5dec, Func Offset: 0x11c
	// Line 1141, Address: 0x1ed5e04, Func Offset: 0x134
	// Line 1142, Address: 0x1ed5e0c, Func Offset: 0x13c
	// Line 1144, Address: 0x1ed5e10, Func Offset: 0x140
	// Line 1142, Address: 0x1ed5e18, Func Offset: 0x148
	// Line 1144, Address: 0x1ed5e1c, Func Offset: 0x14c
	// Line 1146, Address: 0x1ed5e24, Func Offset: 0x154
	// Line 1149, Address: 0x1ed5e28, Func Offset: 0x158
	// Line 1148, Address: 0x1ed5e30, Func Offset: 0x160
	// Line 1149, Address: 0x1ed5e34, Func Offset: 0x164
	// Func End, Address: 0x1ed5e44, Func Offset: 0x174
}

// 
// Start address: 0x1ed5e50
int ev_hospital0_hs21_chain_exec(sfObj* obj)
{
	float pos[4];
	float rot[4];
	float qrot[4];
	float v0;
	_hs21_chainWork* wk;
	float postbl[4];
	float postbl_st[4][2][2];
	// Line 1152, Address: 0x1ed5e50, Func Offset: 0
	// Line 1171, Address: 0x1ed5e54, Func Offset: 0x4
	// Line 1152, Address: 0x1ed5e58, Func Offset: 0x8
	// Line 1171, Address: 0x1ed5e5c, Func Offset: 0xc
	// Line 1152, Address: 0x1ed5e60, Func Offset: 0x10
	// Line 1171, Address: 0x1ed5e64, Func Offset: 0x14
	// Line 1152, Address: 0x1ed5e68, Func Offset: 0x18
	// Line 1171, Address: 0x1ed5e80, Func Offset: 0x30
	// Line 1169, Address: 0x1ed5e84, Func Offset: 0x34
	// Line 1171, Address: 0x1ed5e88, Func Offset: 0x38
	// Line 1173, Address: 0x1ed5e90, Func Offset: 0x40
	// Line 1174, Address: 0x1ed5ea4, Func Offset: 0x54
	// Line 1173, Address: 0x1ed5ea8, Func Offset: 0x58
	// Line 1174, Address: 0x1ed5eb4, Func Offset: 0x64
	// Line 1175, Address: 0x1ed5ed0, Func Offset: 0x80
	// Line 1177, Address: 0x1ed5f04, Func Offset: 0xb4
	// Line 1179, Address: 0x1ed5f14, Func Offset: 0xc4
	// Line 1181, Address: 0x1ed5f30, Func Offset: 0xe0
	// Line 1182, Address: 0x1ed5f34, Func Offset: 0xe4
	// Line 1179, Address: 0x1ed5f38, Func Offset: 0xe8
	// Line 1185, Address: 0x1ed5f3c, Func Offset: 0xec
	// Line 1181, Address: 0x1ed5f44, Func Offset: 0xf4
	// Line 1182, Address: 0x1ed5f50, Func Offset: 0x100
	// Line 1183, Address: 0x1ed5f58, Func Offset: 0x108
	// Line 1185, Address: 0x1ed5f60, Func Offset: 0x110
	// Line 1191, Address: 0x1ed5f6c, Func Offset: 0x11c
	// Line 1185, Address: 0x1ed5f70, Func Offset: 0x120
	// Line 1191, Address: 0x1ed5f74, Func Offset: 0x124
	// Line 1187, Address: 0x1ed5f78, Func Offset: 0x128
	// Line 1188, Address: 0x1ed5f84, Func Offset: 0x134
	// Line 1189, Address: 0x1ed5f8c, Func Offset: 0x13c
	// Line 1191, Address: 0x1ed5f94, Func Offset: 0x144
	// Line 1193, Address: 0x1ed5fa0, Func Offset: 0x150
	// Line 1194, Address: 0x1ed5fd4, Func Offset: 0x184
	// Line 1195, Address: 0x1ed5fe0, Func Offset: 0x190
	// Line 1198, Address: 0x1ed5ffc, Func Offset: 0x1ac
	// Line 1199, Address: 0x1ed600c, Func Offset: 0x1bc
	// Line 1201, Address: 0x1ed6018, Func Offset: 0x1c8
	// Line 1203, Address: 0x1ed6028, Func Offset: 0x1d8
	// Line 1201, Address: 0x1ed6030, Func Offset: 0x1e0
	// Line 1203, Address: 0x1ed6034, Func Offset: 0x1e4
	// Line 1206, Address: 0x1ed6044, Func Offset: 0x1f4
	// Line 1203, Address: 0x1ed6048, Func Offset: 0x1f8
	// Line 1206, Address: 0x1ed604c, Func Offset: 0x1fc
	// Line 1207, Address: 0x1ed6058, Func Offset: 0x208
	// Line 1210, Address: 0x1ed6064, Func Offset: 0x214
	// Line 1209, Address: 0x1ed6080, Func Offset: 0x230
	// Line 1210, Address: 0x1ed6084, Func Offset: 0x234
	// Func End, Address: 0x1ed6090, Func Offset: 0x240
}

// 
// Start address: 0x1ed6090
int ev_hospital0_hs21_chain_draw(sfObj* obj)
{
	_hs21_chainWork* wk;
	// Line 1212, Address: 0x1ed6090, Func Offset: 0
	// Line 1213, Address: 0x1ed60a0, Func Offset: 0x10
	// Line 1215, Address: 0x1ed60a8, Func Offset: 0x18
	// Line 1216, Address: 0x1ed60b0, Func Offset: 0x20
	// Line 1219, Address: 0x1ed60b8, Func Offset: 0x28
	// Line 1218, Address: 0x1ed60c0, Func Offset: 0x30
	// Line 1219, Address: 0x1ed60c4, Func Offset: 0x34
	// Func End, Address: 0x1ed60cc, Func Offset: 0x3c
}

// 
// Start address: 0x1ed60d0
int ev_hospital0_hs21_chain_end(sfObj* obj)
{
	_hs21_chainWork* wk;
	// Line 1221, Address: 0x1ed60d0, Func Offset: 0
	// Line 1222, Address: 0x1ed60e0, Func Offset: 0x10
	// Line 1224, Address: 0x1ed60e8, Func Offset: 0x18
	// Line 1225, Address: 0x1ed60f0, Func Offset: 0x20
	// Line 1228, Address: 0x1ed60f8, Func Offset: 0x28
	// Line 1227, Address: 0x1ed6100, Func Offset: 0x30
	// Line 1228, Address: 0x1ed6104, Func Offset: 0x34
	// Func End, Address: 0x1ed610c, Func Offset: 0x3c
}

// 
// Start address: 0x1ed6110
int ev_hospital0_hs04_elvdoor_init(sfObj* obj)
{
	_anon1* pol;
	_hs04_elvdoorWork* wk;
	// Line 1249, Address: 0x1ed6110, Func Offset: 0
	// Line 1256, Address: 0x1ed6114, Func Offset: 0x4
	// Line 1249, Address: 0x1ed6118, Func Offset: 0x8
	// Line 1256, Address: 0x1ed6124, Func Offset: 0x14
	// Line 1257, Address: 0x1ed6134, Func Offset: 0x24
	// Line 1260, Address: 0x1ed613c, Func Offset: 0x2c
	// Line 1261, Address: 0x1ed6144, Func Offset: 0x34
	// Line 1262, Address: 0x1ed615c, Func Offset: 0x4c
	// Line 1263, Address: 0x1ed6174, Func Offset: 0x64
	// Line 1265, Address: 0x1ed618c, Func Offset: 0x7c
	// Line 1266, Address: 0x1ed6194, Func Offset: 0x84
	// Line 1268, Address: 0x1ed6198, Func Offset: 0x88
	// Line 1266, Address: 0x1ed61a0, Func Offset: 0x90
	// Line 1268, Address: 0x1ed61a4, Func Offset: 0x94
	// Line 1270, Address: 0x1ed61a8, Func Offset: 0x98
	// Line 1269, Address: 0x1ed61ac, Func Offset: 0x9c
	// Line 1270, Address: 0x1ed61b0, Func Offset: 0xa0
	// Line 1271, Address: 0x1ed61b4, Func Offset: 0xa4
	// Line 1272, Address: 0x1ed61c0, Func Offset: 0xb0
	// Line 1277, Address: 0x1ed61d0, Func Offset: 0xc0
	// Line 1276, Address: 0x1ed61d8, Func Offset: 0xc8
	// Line 1277, Address: 0x1ed61dc, Func Offset: 0xcc
	// Func End, Address: 0x1ed61e8, Func Offset: 0xd8
}

// 
// Start address: 0x1ed61f0
int ev_hospital0_hs04_elvdoor_exec(sfObj* obj)
{
	_hs04_elvdoorWork* wk;
	float postbl[4][2];
	// Line 1280, Address: 0x1ed61f0, Func Offset: 0
	// Line 1290, Address: 0x1ed6204, Func Offset: 0x14
	// Line 1296, Address: 0x1ed620c, Func Offset: 0x1c
	// Line 1294, Address: 0x1ed6210, Func Offset: 0x20
	// Line 1296, Address: 0x1ed6214, Func Offset: 0x24
	// Line 1294, Address: 0x1ed621c, Func Offset: 0x2c
	// Line 1296, Address: 0x1ed6224, Func Offset: 0x34
	// Line 1298, Address: 0x1ed6230, Func Offset: 0x40
	// Line 1299, Address: 0x1ed6238, Func Offset: 0x48
	// Line 1300, Address: 0x1ed6240, Func Offset: 0x50
	// Line 1299, Address: 0x1ed6244, Func Offset: 0x54
	// Line 1300, Address: 0x1ed6248, Func Offset: 0x58
	// Line 1301, Address: 0x1ed6250, Func Offset: 0x60
	// Line 1302, Address: 0x1ed6258, Func Offset: 0x68
	// Line 1303, Address: 0x1ed625c, Func Offset: 0x6c
	// Line 1304, Address: 0x1ed6268, Func Offset: 0x78
	// Line 1305, Address: 0x1ed6274, Func Offset: 0x84
	// Line 1306, Address: 0x1ed627c, Func Offset: 0x8c
	// Line 1307, Address: 0x1ed6284, Func Offset: 0x94
	// Line 1309, Address: 0x1ed628c, Func Offset: 0x9c
	// Line 1311, Address: 0x1ed6290, Func Offset: 0xa0
	// Line 1310, Address: 0x1ed6298, Func Offset: 0xa8
	// Line 1311, Address: 0x1ed629c, Func Offset: 0xac
	// Func End, Address: 0x1ed62a8, Func Offset: 0xb8
}

// 
// Start address: 0x1ed62b0
int ev_hospital0_hs04_elvdoor_draw(sfObj* obj)
{
	// Line 1313, Address: 0x1ed62b0, Func Offset: 0
	// Line 1314, Address: 0x1ed62bc, Func Offset: 0xc
	// Line 1316, Address: 0x1ed62c4, Func Offset: 0x14
	// Line 1317, Address: 0x1ed62cc, Func Offset: 0x1c
	// Line 1319, Address: 0x1ed62d0, Func Offset: 0x20
	// Line 1318, Address: 0x1ed62d4, Func Offset: 0x24
	// Line 1319, Address: 0x1ed62d8, Func Offset: 0x28
	// Func End, Address: 0x1ed62e0, Func Offset: 0x30
}

// 
// Start address: 0x1ed62e0
int ev_hospital0_hs04_elvdoor_end(sfObj* obj)
{
	_hs04_elvdoorWork* wk;
	// Line 1156, Address: 0x1ed62e0, Func Offset: 0
	// Line 1157, Address: 0x1ed62e8, Func Offset: 0x8
	// Line 1159, Address: 0x1ed62f0, Func Offset: 0x10
	// Line 1158, Address: 0x1ed62f4, Func Offset: 0x14
	// Line 1159, Address: 0x1ed62f8, Func Offset: 0x18
	// Func End, Address: 0x1ed6300, Func Offset: 0x20
	// Line 1321, Address: 0x1ed62e0, Func Offset: 0
	// Line 1322, Address: 0x1ed62f0, Func Offset: 0x10
	// Line 1324, Address: 0x1ed62f8, Func Offset: 0x18
	// Line 1325, Address: 0x1ed6300, Func Offset: 0x20
	// Line 1328, Address: 0x1ed6308, Func Offset: 0x28
	// Line 1327, Address: 0x1ed6310, Func Offset: 0x30
	// Line 1328, Address: 0x1ed6314, Func Offset: 0x34
	// Func End, Address: 0x1ed631c, Func Offset: 0x3c
}

// 
// Start address: 0x1ed6320
int ev_hospital0_fr32_159_5_exec(sfObj* obj)
{
	int ret;
	float counter;
	// Line 1078, Address: 0x1ed6320, Func Offset: 0
	// Line 1079, Address: 0x1ed6324, Func Offset: 0x4
	// Line 1078, Address: 0x1ed6328, Func Offset: 0x8
	// Line 1079, Address: 0x1ed632c, Func Offset: 0xc
	// Line 1078, Address: 0x1ed6330, Func Offset: 0x10
	// Line 1079, Address: 0x1ed633c, Func Offset: 0x1c
	// Line 1080, Address: 0x1ed634c, Func Offset: 0x2c
	// Line 1082, Address: 0x1ed6360, Func Offset: 0x40
	// Line 1083, Address: 0x1ed6378, Func Offset: 0x58
	// Line 1084, Address: 0x1ed638c, Func Offset: 0x6c
	// Line 1085, Address: 0x1ed6398, Func Offset: 0x78
	// Func End, Address: 0x1ed63b0, Func Offset: 0x90
	// Line 1407, Address: 0x1ed6320, Func Offset: 0
	// Line 1410, Address: 0x1ed6324, Func Offset: 0x4
	// Line 1407, Address: 0x1ed6328, Func Offset: 0x8
	// Line 1410, Address: 0x1ed6338, Func Offset: 0x18
	// Line 1412, Address: 0x1ed6360, Func Offset: 0x40
	// Line 1413, Address: 0x1ed6370, Func Offset: 0x50
	// Line 1418, Address: 0x1ed6384, Func Offset: 0x64
	// Line 1419, Address: 0x1ed638c, Func Offset: 0x6c
	// Line 1420, Address: 0x1ed6390, Func Offset: 0x70
	// Line 1421, Address: 0x1ed639c, Func Offset: 0x7c
	// Line 1423, Address: 0x1ed63a0, Func Offset: 0x80
	// Line 1424, Address: 0x1ed63bc, Func Offset: 0x9c
	// Line 1425, Address: 0x1ed63c4, Func Offset: 0xa4
	// Line 1427, Address: 0x1ed63d0, Func Offset: 0xb0
	// Line 1428, Address: 0x1ed63dc, Func Offset: 0xbc
	// Line 1427, Address: 0x1ed63e0, Func Offset: 0xc0
	// Line 1428, Address: 0x1ed63e4, Func Offset: 0xc4
	// Line 1427, Address: 0x1ed63f0, Func Offset: 0xd0
	// Line 1428, Address: 0x1ed63f8, Func Offset: 0xd8
	// Line 1429, Address: 0x1ed6404, Func Offset: 0xe4
	// Line 1430, Address: 0x1ed6408, Func Offset: 0xe8
	// Line 1429, Address: 0x1ed640c, Func Offset: 0xec
	// Line 1432, Address: 0x1ed6414, Func Offset: 0xf4
	// Line 1433, Address: 0x1ed6418, Func Offset: 0xf8
	// Line 1434, Address: 0x1ed641c, Func Offset: 0xfc
	// Func End, Address: 0x1ed6430, Func Offset: 0x110
}

// 
// Start address: 0x1ed6430
int ev_hospital0_hs28_corpse_init(sfObj* obj)
{
	_hs21_corpseWork* wk;
	float postbl[4][2];
	// Line 458, Address: 0x1ed6430, Func Offset: 0
	// Line 460, Address: 0x1ed6468, Func Offset: 0x38
	// Line 461, Address: 0x1ed6470, Func Offset: 0x40
	// Line 462, Address: 0x1ed6478, Func Offset: 0x48
	// Func End, Address: 0x1ed6480, Func Offset: 0x50
	// Line 1468, Address: 0x1ed6430, Func Offset: 0
	// Line 1475, Address: 0x1ed6434, Func Offset: 0x4
	// Line 1468, Address: 0x1ed6438, Func Offset: 0x8
	// Line 1475, Address: 0x1ed6440, Func Offset: 0x10
	// Line 1476, Address: 0x1ed6450, Func Offset: 0x20
	// Line 1486, Address: 0x1ed6458, Func Offset: 0x28
	// Line 1487, Address: 0x1ed6470, Func Offset: 0x40
	// Line 1489, Address: 0x1ed6488, Func Offset: 0x58
	// Line 1490, Address: 0x1ed64a0, Func Offset: 0x70
	// Line 1491, Address: 0x1ed64a8, Func Offset: 0x78
	// Line 1493, Address: 0x1ed64ac, Func Offset: 0x7c
	// Line 1496, Address: 0x1ed64bc, Func Offset: 0x8c
	// Line 1499, Address: 0x1ed64c0, Func Offset: 0x90
	// Line 1498, Address: 0x1ed64c8, Func Offset: 0x98
	// Line 1499, Address: 0x1ed64cc, Func Offset: 0x9c
	// Func End, Address: 0x1ed64d4, Func Offset: 0xa4
}

// 
// Start address: 0x1ed64e0
int ev_hospital0_hs28_corpse_exec(sfObj* obj)
{
	float rot[4];
	float qrot[4];
	float v0;
	_hs21_corpseWork* wk;
	float postbl[4];
	float postbl_st[4][2][2];
	// Line 480, Address: 0x1ed64e0, Func Offset: 0
	// Line 486, Address: 0x1ed64e4, Func Offset: 0x4
	// Line 480, Address: 0x1ed64e8, Func Offset: 0x8
	// Line 486, Address: 0x1ed64ec, Func Offset: 0xc
	// Line 480, Address: 0x1ed64f0, Func Offset: 0x10
	// Line 486, Address: 0x1ed64f4, Func Offset: 0x14
	// Line 480, Address: 0x1ed64f8, Func Offset: 0x18
	// Line 482, Address: 0x1ed650c, Func Offset: 0x2c
	// Line 486, Address: 0x1ed6510, Func Offset: 0x30
	// Line 483, Address: 0x1ed6514, Func Offset: 0x34
	// Line 491, Address: 0x1ed6518, Func Offset: 0x38
	// Line 484, Address: 0x1ed651c, Func Offset: 0x3c
	// Line 486, Address: 0x1ed6520, Func Offset: 0x40
	// Line 491, Address: 0x1ed6524, Func Offset: 0x44
	// Line 492, Address: 0x1ed654c, Func Offset: 0x6c
	// Line 493, Address: 0x1ed6550, Func Offset: 0x70
	// Line 494, Address: 0x1ed6558, Func Offset: 0x78
	// Line 495, Address: 0x1ed6560, Func Offset: 0x80
	// Line 497, Address: 0x1ed656c, Func Offset: 0x8c
	// Line 500, Address: 0x1ed6598, Func Offset: 0xb8
	// Line 501, Address: 0x1ed65a4, Func Offset: 0xc4
	// Line 502, Address: 0x1ed65b0, Func Offset: 0xd0
	// Line 503, Address: 0x1ed65bc, Func Offset: 0xdc
	// Line 504, Address: 0x1ed65c8, Func Offset: 0xe8
	// Line 505, Address: 0x1ed65d0, Func Offset: 0xf0
	// Line 506, Address: 0x1ed65d8, Func Offset: 0xf8
	// Line 508, Address: 0x1ed65e0, Func Offset: 0x100
	// Line 509, Address: 0x1ed65f0, Func Offset: 0x110
	// Line 510, Address: 0x1ed65f8, Func Offset: 0x118
	// Line 511, Address: 0x1ed6600, Func Offset: 0x120
	// Line 512, Address: 0x1ed660c, Func Offset: 0x12c
	// Line 513, Address: 0x1ed6610, Func Offset: 0x130
	// Line 514, Address: 0x1ed6620, Func Offset: 0x140
	// Line 516, Address: 0x1ed6628, Func Offset: 0x148
	// Line 517, Address: 0x1ed663c, Func Offset: 0x15c
	// Line 518, Address: 0x1ed665c, Func Offset: 0x17c
	// Line 519, Address: 0x1ed6684, Func Offset: 0x1a4
	// Line 520, Address: 0x1ed66a8, Func Offset: 0x1c8
	// Line 521, Address: 0x1ed66ac, Func Offset: 0x1cc
	// Line 522, Address: 0x1ed66b0, Func Offset: 0x1d0
	// Line 523, Address: 0x1ed66c8, Func Offset: 0x1e8
	// Line 524, Address: 0x1ed66d0, Func Offset: 0x1f0
	// Line 525, Address: 0x1ed66dc, Func Offset: 0x1fc
	// Line 526, Address: 0x1ed66e0, Func Offset: 0x200
	// Line 527, Address: 0x1ed6704, Func Offset: 0x224
	// Line 528, Address: 0x1ed672c, Func Offset: 0x24c
	// Line 529, Address: 0x1ed6748, Func Offset: 0x268
	// Line 530, Address: 0x1ed6758, Func Offset: 0x278
	// Line 532, Address: 0x1ed6768, Func Offset: 0x288
	// Line 534, Address: 0x1ed6774, Func Offset: 0x294
	// Line 535, Address: 0x1ed6788, Func Offset: 0x2a8
	// Line 536, Address: 0x1ed6794, Func Offset: 0x2b4
	// Line 543, Address: 0x1ed679c, Func Offset: 0x2bc
	// Line 545, Address: 0x1ed67a0, Func Offset: 0x2c0
	// Line 546, Address: 0x1ed67a4, Func Offset: 0x2c4
	// Func End, Address: 0x1ed67c4, Func Offset: 0x2e4
	// Line 1501, Address: 0x1ed64e0, Func Offset: 0
	// Line 1515, Address: 0x1ed64e4, Func Offset: 0x4
	// Line 1501, Address: 0x1ed64e8, Func Offset: 0x8
	// Line 1515, Address: 0x1ed64ec, Func Offset: 0xc
	// Line 1501, Address: 0x1ed64f0, Func Offset: 0x10
	// Line 1515, Address: 0x1ed64f4, Func Offset: 0x14
	// Line 1501, Address: 0x1ed64f8, Func Offset: 0x18
	// Line 1513, Address: 0x1ed64fc, Func Offset: 0x1c
	// Line 1517, Address: 0x1ed6500, Func Offset: 0x20
	// Line 1518, Address: 0x1ed6514, Func Offset: 0x34
	// Line 1517, Address: 0x1ed6518, Func Offset: 0x38
	// Line 1518, Address: 0x1ed6524, Func Offset: 0x44
	// Line 1519, Address: 0x1ed6540, Func Offset: 0x60
	// Line 1521, Address: 0x1ed6574, Func Offset: 0x94
	// Line 1523, Address: 0x1ed6584, Func Offset: 0xa4
	// Line 1541, Address: 0x1ed6594, Func Offset: 0xb4
	// Line 1523, Address: 0x1ed6598, Func Offset: 0xb8
	// Line 1541, Address: 0x1ed659c, Func Offset: 0xbc
	// Line 1523, Address: 0x1ed65a4, Func Offset: 0xc4
	// Line 1541, Address: 0x1ed65a8, Func Offset: 0xc8
	// Line 1543, Address: 0x1ed65c8, Func Offset: 0xe8
	// Line 1542, Address: 0x1ed65d0, Func Offset: 0xf0
	// Line 1543, Address: 0x1ed65d4, Func Offset: 0xf4
	// Line 1546, Address: 0x1ed65f4, Func Offset: 0x114
	// Line 1543, Address: 0x1ed65f8, Func Offset: 0x118
	// Line 1546, Address: 0x1ed65fc, Func Offset: 0x11c
	// Line 1547, Address: 0x1ed6608, Func Offset: 0x128
	// Line 1549, Address: 0x1ed6614, Func Offset: 0x134
	// Line 1548, Address: 0x1ed6620, Func Offset: 0x140
	// Line 1549, Address: 0x1ed6624, Func Offset: 0x144
	// Func End, Address: 0x1ed662c, Func Offset: 0x14c
}

// 
// Start address: 0x1ed6630
int ev_hospital0_hs28_corpse_draw(sfObj* obj)
{
	// Line 1241, Address: 0x1ed6630, Func Offset: 0
	// Line 1242, Address: 0x1ed6634, Func Offset: 0x4
	// Line 1241, Address: 0x1ed6638, Func Offset: 0x8
	// Line 1242, Address: 0x1ed663c, Func Offset: 0xc
	// Line 1244, Address: 0x1ed6650, Func Offset: 0x20
	// Line 1245, Address: 0x1ed6658, Func Offset: 0x28
	// Func End, Address: 0x1ed6664, Func Offset: 0x34
	// Line 1551, Address: 0x1ed6630, Func Offset: 0
	// Line 1552, Address: 0x1ed663c, Func Offset: 0xc
	// Line 1554, Address: 0x1ed6644, Func Offset: 0x14
	// Line 1555, Address: 0x1ed664c, Func Offset: 0x1c
	// Line 1557, Address: 0x1ed6650, Func Offset: 0x20
	// Line 1556, Address: 0x1ed6654, Func Offset: 0x24
	// Line 1557, Address: 0x1ed6658, Func Offset: 0x28
	// Func End, Address: 0x1ed6660, Func Offset: 0x30
	// Line 1226, Address: 0x1ed6630, Func Offset: 0
	// Line 1227, Address: 0x1ed6640, Func Offset: 0x10
	// Line 1230, Address: 0x1ed6648, Func Offset: 0x18
	// Line 1232, Address: 0x1ed6658, Func Offset: 0x28
	// Line 1235, Address: 0x1ed6660, Func Offset: 0x30
	// Line 1238, Address: 0x1ed6668, Func Offset: 0x38
	// Func End, Address: 0x1ed6678, Func Offset: 0x48
}

// 
// Start address: 0x1ed6660
int ev_hospital0_hs28_corpse_end(sfObj* obj)
{
	// Line 1559, Address: 0x1ed6660, Func Offset: 0
	// Line 1560, Address: 0x1ed666c, Func Offset: 0xc
	// Line 1562, Address: 0x1ed6674, Func Offset: 0x14
	// Line 1563, Address: 0x1ed667c, Func Offset: 0x1c
	// Line 1565, Address: 0x1ed6680, Func Offset: 0x20
	// Line 1564, Address: 0x1ed6684, Func Offset: 0x24
	// Line 1565, Address: 0x1ed6688, Func Offset: 0x28
	// Func End, Address: 0x1ed6690, Func Offset: 0x30
}

// 
// Start address: 0x1ed6690
int ev_hospital0_hs11_rain_construct(sfObj* obj)
{
	_anon4* fig;
	float pos[4];
	int i;
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
// Start address: 0x1ed66f0
int ev_hospital0_hs04_elv_pass_end()
{
	// Line 1257, Address: 0x1ed66f0, Func Offset: 0
	// Line 1258, Address: 0x1ed66f8, Func Offset: 0x8
	// Line 1260, Address: 0x1ed6700, Func Offset: 0x10
	// Line 1259, Address: 0x1ed6704, Func Offset: 0x14
	// Line 1260, Address: 0x1ed6708, Func Offset: 0x18
	// Func End, Address: 0x1ed6710, Func Offset: 0x20
	// Line 1589, Address: 0x1ed66f0, Func Offset: 0
	// Line 1592, Address: 0x1ed66f4, Func Offset: 0x4
	// Line 1589, Address: 0x1ed66f8, Func Offset: 0x8
	// Line 1592, Address: 0x1ed66fc, Func Offset: 0xc
	// Line 1594, Address: 0x1ed670c, Func Offset: 0x1c
	// Line 1593, Address: 0x1ed6710, Func Offset: 0x20
	// Line 1594, Address: 0x1ed6714, Func Offset: 0x24
	// Func End, Address: 0x1ed671c, Func Offset: 0x2c
}

