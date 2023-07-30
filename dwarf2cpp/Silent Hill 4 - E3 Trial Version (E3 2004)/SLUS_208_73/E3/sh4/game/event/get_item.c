typedef struct _ObjHitCube;
typedef struct _anon0;
typedef struct _EventDriver;
typedef struct _ObjHitSphere;
typedef struct _EventObjWorkGetItem;
typedef struct sfObj;
typedef struct _EventHitWork;
typedef struct _EventObjWorkAutoAction;
typedef struct _ObjHitDoor;
typedef struct _EnforceItemWork;
typedef struct _ObjHitData;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sgIKHandle;
typedef struct _EventCtrlLink;
typedef struct sgBone;
typedef struct _anon1;
typedef struct _EventController;
typedef struct sfCharacter;
typedef struct _GAME_WORK;
typedef struct _EventInst;
typedef struct sgAnime;
typedef union _anon2;
typedef struct sgSVModel;
typedef struct _anon3;
typedef struct _ObjHitCylinder;

typedef void(*type_1)(_anon0*, int, int, float*);
typedef int(*type_2)(sfObj*);
typedef int(*type_3)(sfObj*);
typedef int(*type_4)(sfObj*);
typedef int(*type_5)(sfObj*);
typedef int(*type_6)(sfObj*);
typedef int(*type_7)(sfObj*);
typedef int(*type_8)(sfObj*);
typedef sgIKSolveResult(*type_16)();
typedef void(*type_24)(sgAnime*, int);
typedef int(*type_26)(sfObj*);
typedef void(*type_36)(sfObj*);
typedef int(*type_39)(sfObj*);
typedef int(*type_40)(sfObj*);
typedef void(*type_41)(sfObj*);
typedef int(*type_42)(sfObj*);
typedef int(*type_43)(sfObj*);

typedef float type_0[4];
typedef int(*type_9)(sfObj*)[5];
typedef int type_10[1];
typedef _anon2 type_11[4];
typedef int type_12[1];
typedef float type_13[4][2];
typedef _anon2 type_14[0];
typedef int type_15[1];
typedef float type_17[4];
typedef int type_18[1];
typedef int type_19[1];
typedef int type_20[1];
typedef void* type_21[4];
typedef _anon2 type_22[23];
typedef int type_23[1];
typedef short type_25[2];
typedef int type_27[1];
typedef int(*type_28)(sfObj*)[3];
typedef unsigned short type_29[2];
typedef char type_30[4];
typedef unsigned char type_31[4];
typedef _anon2 type_32[256];
typedef float type_33[4];
typedef float type_34[4][4];
typedef float type_35[1];
typedef unsigned char type_37[4];
typedef int type_38[1];

struct _ObjHitCube
{
	float w;
	float h;
	float d;
};

struct _anon0
{
	unsigned long tex0;
	unsigned long clamp;
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

struct _ObjHitSphere
{
	float r;
};

struct _EventObjWorkGetItem
{
	_EventController evctrl;
	_EventHitWork* evhit;
	_EventObjWorkAutoAction aact;
	short item_id;
	short serial_no;
	short full;
	short full_disp;
	_EnforceItemWork* enforce;
};

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

struct _EventHitWork
{
	_EventDriver* evdriver;
	sfObj* obj;
	_EventHitWork* prev;
	_EventHitWork* next;
	float pos[4];
	short setlevel;
	short item_id;
	short item_serial_no;
	float item_quat[4];
	sfCharacter* item_character;
	short is_enforce_item;
	void* enforce_item_work;
};

struct _EventObjWorkAutoAction
{
	float pos[4];
	short step;
	short cancel;
	float now_rot;
	float trg_rot;
	float rot_spd;
	short matchless;
	short sitdown;
	short timer;
	char end;
	char subject;
	char rot_msg;
	char sit_msg;
	char after_event_exec;
};

struct _ObjHitDoor
{
	int num;
};

struct _EnforceItemWork
{
	char use;
	char finisher;
	short live;
	short no;
	short stage;
	short scene;
	short type;
	float p[4];
	float quat[4];
	int model_id;
	int tex_id;
	int item_id;
	short level;
	_ObjHitData hitdt;
	int val[1];
};

struct _ObjHitData
{
	float pos[4];
	int type;
	unsigned int attr;
	float rot;
	void* check_func;
	union
	{
		_ObjHitCylinder cl;
		_ObjHitCube cb;
		_ObjHitSphere sp;
		_ObjHitDoor dr;
	};
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

struct _EventCtrlLink
{
	_EventCtrlLink* prev;
	_EventCtrlLink* next;
	void* evctrl;
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
	int id;
	float x;
	float y;
	float z;
	float rot;
	int id1;
	int id2;
	int id3;
	int id4;
	_anon2 dmy[23];
};

struct _EventController
{
	_EventDriver* evdriver;
	_EventInst evinst;
	sfObj* obj;
	_EventCtrlLink evlink;
	short step;
	short loadstep;
	unsigned int* loadfile;
	unsigned char active;
	unsigned char loadend;
	unsigned char exec_enable;
	short fd_obj_type;
};

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon3 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
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

struct _EventInst
{
	_EventDriver evdrv;
	unsigned int attr;
	int(*drawaf)(sfObj*);
	int(*endexitf)(sfObj*);
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

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct _anon3
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

struct _ObjHitCylinder
{
	float r;
	float h;
};

int(*ev_cmn_exec_mcd)(sfObj*);
_anon2 MsgCommon_ItemFull[0];
_GAME_WORK gamew;
int(*getitem_func)(sfObj*)[5];
int(*getitem_subject_func)(sfObj*)[3];
int(*functbl)(sfObj*);
int end_ret;
sfObj* now_obj;
int(*getitem_func_event_exec)(sfObj*);

int getitem_func_rot(sfObj* obj);
int getitem_func_fullcheck(sfObj* obj);
int getitem_func_event_exec(sfObj* obj);
int getitem_func_get_item(sfObj* obj);
void GetItemInit(sfObj* obj);
void GetItemMainSub();
int GetItemMain(sfObj* obj);

// 
// Start address: 0x2890d0
int getitem_func_rot(sfObj* obj)
{
	// Line 79, Address: 0x2890d0, Func Offset: 0
	// Line 84, Address: 0x2890d4, Func Offset: 0x4
	// Line 79, Address: 0x2890d8, Func Offset: 0x8
	// Line 84, Address: 0x2890dc, Func Offset: 0xc
	// Line 87, Address: 0x2890fc, Func Offset: 0x2c
	// Func End, Address: 0x289108, Func Offset: 0x38
}

// 
// Start address: 0x289110
int getitem_func_fullcheck(sfObj* obj)
{
	_EventObjWorkGetItem* work;
	_EventInst* inst;
	// Line 93, Address: 0x289110, Func Offset: 0
	// Line 94, Address: 0x289120, Func Offset: 0x10
	// Line 95, Address: 0x289130, Func Offset: 0x20
	// Line 96, Address: 0x289134, Func Offset: 0x24
	// Line 99, Address: 0x28913c, Func Offset: 0x2c
	// Line 96, Address: 0x289140, Func Offset: 0x30
	// Line 99, Address: 0x289144, Func Offset: 0x34
	// Line 102, Address: 0x28914c, Func Offset: 0x3c
	// Line 103, Address: 0x289158, Func Offset: 0x48
	// Line 104, Address: 0x289164, Func Offset: 0x54
	// Line 105, Address: 0x289174, Func Offset: 0x64
	// Line 106, Address: 0x289180, Func Offset: 0x70
	// Line 109, Address: 0x28918c, Func Offset: 0x7c
	// Line 110, Address: 0x289198, Func Offset: 0x88
	// Line 113, Address: 0x2891a0, Func Offset: 0x90
	// Line 112, Address: 0x2891a8, Func Offset: 0x98
	// Line 113, Address: 0x2891ac, Func Offset: 0x9c
	// Func End, Address: 0x2891b8, Func Offset: 0xa8
}

// 
// Start address: 0x2891c0
int getitem_func_event_exec(sfObj* obj)
{
	_EventObjWorkGetItem* work;
	_EventObjWorkAutoAction* aact;
	// Line 121, Address: 0x2891c0, Func Offset: 0
	// Line 125, Address: 0x2891dc, Func Offset: 0x1c
	// Line 126, Address: 0x2891f0, Func Offset: 0x30
	// Line 127, Address: 0x289200, Func Offset: 0x40
	// Line 128, Address: 0x28920c, Func Offset: 0x4c
	// Line 129, Address: 0x289214, Func Offset: 0x54
	// Line 130, Address: 0x289218, Func Offset: 0x58
	// Line 131, Address: 0x289224, Func Offset: 0x64
	// Line 132, Address: 0x28922c, Func Offset: 0x6c
	// Line 133, Address: 0x289230, Func Offset: 0x70
	// Line 134, Address: 0x289238, Func Offset: 0x78
	// Line 136, Address: 0x289240, Func Offset: 0x80
	// Line 139, Address: 0x289248, Func Offset: 0x88
	// Line 140, Address: 0x289250, Func Offset: 0x90
	// Func End, Address: 0x289268, Func Offset: 0xa8
}

// 
// Start address: 0x289270
int getitem_func_get_item(sfObj* obj)
{
	_EventObjWorkGetItem* work;
	_EnforceItemWork* enforce;
	// Line 149, Address: 0x289270, Func Offset: 0
	// Line 150, Address: 0x289280, Func Offset: 0x10
	// Line 153, Address: 0x289284, Func Offset: 0x14
	// Line 154, Address: 0x289294, Func Offset: 0x24
	// Line 157, Address: 0x28929c, Func Offset: 0x2c
	// Line 159, Address: 0x2892a4, Func Offset: 0x34
	// Line 160, Address: 0x2892c8, Func Offset: 0x58
	// Line 164, Address: 0x2892d0, Func Offset: 0x60
	// Line 177, Address: 0x2892d8, Func Offset: 0x68
	// Line 183, Address: 0x2892e8, Func Offset: 0x78
	// Line 182, Address: 0x2892f0, Func Offset: 0x80
	// Line 183, Address: 0x2892f4, Func Offset: 0x84
	// Func End, Address: 0x289300, Func Offset: 0x90
}

// 
// Start address: 0x289300
void GetItemInit(sfObj* obj)
{
	_anon1* soeve;
	_EventObjWorkGetItem* work;
	_EventObjWorkAutoAction* aact;
	float trans[4];
	// Line 205, Address: 0x289300, Func Offset: 0
	// Line 207, Address: 0x289314, Func Offset: 0x14
	// Line 210, Address: 0x28931c, Func Offset: 0x1c
	// Line 208, Address: 0x289320, Func Offset: 0x20
	// Line 210, Address: 0x289324, Func Offset: 0x24
	// Line 207, Address: 0x289330, Func Offset: 0x30
	// Line 209, Address: 0x289334, Func Offset: 0x34
	// Line 210, Address: 0x289338, Func Offset: 0x38
	// Line 212, Address: 0x289354, Func Offset: 0x54
	// Line 213, Address: 0x289358, Func Offset: 0x58
	// Line 214, Address: 0x289364, Func Offset: 0x64
	// Line 213, Address: 0x289370, Func Offset: 0x70
	// Line 214, Address: 0x289390, Func Offset: 0x90
	// Line 215, Address: 0x289398, Func Offset: 0x98
	// Line 217, Address: 0x28939c, Func Offset: 0x9c
	// Line 218, Address: 0x2893a4, Func Offset: 0xa4
	// Line 219, Address: 0x2893ac, Func Offset: 0xac
	// Line 223, Address: 0x2893b0, Func Offset: 0xb0
	// Line 225, Address: 0x2893c0, Func Offset: 0xc0
	// Line 224, Address: 0x2893c8, Func Offset: 0xc8
	// Line 225, Address: 0x2893cc, Func Offset: 0xcc
	// Line 226, Address: 0x2893d0, Func Offset: 0xd0
	// Line 228, Address: 0x2893d8, Func Offset: 0xd8
	// Line 231, Address: 0x2893e0, Func Offset: 0xe0
	// Line 229, Address: 0x2893e4, Func Offset: 0xe4
	// Line 231, Address: 0x2893e8, Func Offset: 0xe8
	// Line 230, Address: 0x2893ec, Func Offset: 0xec
	// Line 231, Address: 0x2893f0, Func Offset: 0xf0
	// Line 234, Address: 0x2893f8, Func Offset: 0xf8
	// Func End, Address: 0x289410, Func Offset: 0x110
}

// 
// Start address: 0x289410
void GetItemMainSub()
{
	_EventObjWorkAutoAction* aact;
	// Line 246, Address: 0x289410, Func Offset: 0
	// Line 259, Address: 0x289414, Func Offset: 0x4
	// Line 246, Address: 0x289418, Func Offset: 0x8
	// Line 248, Address: 0x28941c, Func Offset: 0xc
	// Line 246, Address: 0x289420, Func Offset: 0x10
	// Line 259, Address: 0x289424, Func Offset: 0x14
	// Line 248, Address: 0x289428, Func Offset: 0x18
	// Line 254, Address: 0x289430, Func Offset: 0x20
	// Line 248, Address: 0x289438, Func Offset: 0x28
	// Line 255, Address: 0x28943c, Func Offset: 0x2c
	// Line 259, Address: 0x289440, Func Offset: 0x30
	// Line 255, Address: 0x289444, Func Offset: 0x34
	// Line 259, Address: 0x28944c, Func Offset: 0x3c
	// Line 260, Address: 0x289468, Func Offset: 0x58
	// Line 261, Address: 0x289478, Func Offset: 0x68
	// Line 266, Address: 0x289480, Func Offset: 0x70
	// Line 267, Address: 0x28948c, Func Offset: 0x7c
	// Line 268, Address: 0x289494, Func Offset: 0x84
	// Line 269, Address: 0x28949c, Func Offset: 0x8c
	// Line 270, Address: 0x2894a4, Func Offset: 0x94
	// Line 272, Address: 0x2894a8, Func Offset: 0x98
	// Line 273, Address: 0x2894d8, Func Offset: 0xc8
	// Line 274, Address: 0x2894e4, Func Offset: 0xd4
	// Line 275, Address: 0x2894e8, Func Offset: 0xd8
	// Line 278, Address: 0x2894f0, Func Offset: 0xe0
	// Line 280, Address: 0x2894fc, Func Offset: 0xec
	// Line 281, Address: 0x289500, Func Offset: 0xf0
	// Func End, Address: 0x289510, Func Offset: 0x100
}

// 
// Start address: 0x289510
int GetItemMain(sfObj* obj)
{
	// Line 284, Address: 0x289510, Func Offset: 0
	// Line 285, Address: 0x289514, Func Offset: 0x4
	// Line 284, Address: 0x289518, Func Offset: 0x8
	// Line 287, Address: 0x28951c, Func Offset: 0xc
	// Line 288, Address: 0x289524, Func Offset: 0x14
	// Line 289, Address: 0x289528, Func Offset: 0x18
	// Line 288, Address: 0x28952c, Func Offset: 0x1c
	// Line 289, Address: 0x289530, Func Offset: 0x20
	// Func End, Address: 0x289538, Func Offset: 0x28
}

