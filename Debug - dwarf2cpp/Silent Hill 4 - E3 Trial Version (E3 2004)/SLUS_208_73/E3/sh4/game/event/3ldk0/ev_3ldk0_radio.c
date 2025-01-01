typedef struct sgBone;
typedef struct _anon0;
typedef struct _EventInst;
typedef struct _SubtitleMessageData;
typedef struct _anon1;
typedef struct sgAnime;
typedef struct EventFlag;
typedef struct sfObj;
typedef struct sgIKHandle;
typedef struct _GAME_WORK;
typedef union _anon2;
typedef struct sfCharacter;
typedef struct _EventDriver;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sgSVModel;
typedef struct _RADIO_DATA;

typedef void(*type_5)(_anon1*, int, int, float*);
typedef void(*type_12)(sgAnime*, int);
typedef void(*type_17)(sfObj*);
typedef void(*type_23)(sfObj*);
typedef int(*type_25)(sfObj*);
typedef int(*type_27)(sfObj*);
typedef int(*type_34)(sfObj*);
typedef int(*type_39)(sfObj*);
typedef int(*type_40)(sfObj*);
typedef int(*type_42)(sfObj*);
typedef int(*type_44)(sfObj*);
typedef sgIKSolveResult(*type_46)();

typedef int type_0[1];
typedef _SubtitleMessageData type_1[4];
typedef float type_2[4][4];
typedef _SubtitleMessageData type_3[7];
typedef float type_4[4];
typedef int type_6[1];
typedef _SubtitleMessageData type_7[9];
typedef int type_8[1];
typedef void* type_9[4];
typedef unsigned char type_10[320];
typedef _SubtitleMessageData type_11[2];
typedef int type_13[1];
typedef _SubtitleMessageData type_14[3];
typedef int type_15[1];
typedef _anon2 type_16[256];
typedef _SubtitleMessageData type_18[3];
typedef unsigned char type_19[4];
typedef int type_20[1];
typedef _SubtitleMessageData type_21[6];
typedef float type_22[4];
typedef _SubtitleMessageData type_24[3];
typedef float type_26[4];
typedef short type_28[2];
typedef unsigned short type_29[2];
typedef char type_30[4];
typedef unsigned char type_31[4];
typedef _SubtitleMessageData* type_32[6];
typedef float type_33[1];
typedef float type_35[4];
typedef int type_36[1];
typedef _anon2 type_37[2];
typedef _anon2 type_38[2][9];
typedef float type_41[4][2];
typedef _SubtitleMessageData type_43[3];
typedef float type_45[4][4];
typedef _anon2 type_47[4];
typedef int type_48[1];

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

struct _anon0
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon1*, int, int, float*);
	int equip_flag;
};

struct _EventInst
{
	_EventDriver evdrv;
	unsigned int attr;
	int(*drawaf)(sfObj*);
	int(*endexitf)(sfObj*);
};

struct _SubtitleMessageData
{
	short pack_id;
	short msg_id;
	float time;
};

struct _anon1
{
	unsigned long tex0;
	unsigned long clamp;
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

struct EventFlag
{
	unsigned char flag[320];
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
	_anon0 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
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

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct _RADIO_DATA
{
	sfObj* obj;
	_SubtitleMessageData* msg_dt;
	int sd_no;
	int sd_slot;
	char demo_thread;
	char end_reserved;
	char push_off_switch;
	char step;
	short play_timer;
	short wait_timer;
};

_SubtitleMessageData* reserve_allpurpose_msg;
short old_allpurpose_msg_no;
short rand_num;
float switch_se_pos[4];
float sd_vol[4];
float sd_pos[4][4];
_SubtitleMessageData radio_allpurpose_01[6];
_SubtitleMessageData radio_allpurpose_03[3];
_SubtitleMessageData radio_allpurpose_04[3];
_SubtitleMessageData radio_allpurpose_06[3];
_SubtitleMessageData radio_allpurpose_07[4];
_SubtitleMessageData radio_allpurpose_08[3];
_SubtitleMessageData* allpurpose_msg_tbl[6];
_SubtitleMessageData radio_allpurpose_noise[2];
_RADIO_DATA active_radio;
EventFlag event_flag;
_EventDriver ev_3ldk0_radio_resumu_noise;
_SubtitleMessageData radio_message_019[7];
_EventDriver ev_3ldk0_rl00_019_radio;
_SubtitleMessageData radio_message_038[9];
_EventDriver ev_3ldk0_rl00_038_radio;
_EventDriver ev_3ldk0_allpurpose_radio;
_GAME_WORK gamew;
_EventDriver ev_radio_sound;
_EventDriver ev_3ldk0_radio_off;

void ev_radio_clear();
void ev_radio_set_allpurpose_rand();
int is_active_radio_allpurpose();
int is_active_radio_noise();
int radio_is_on();
int ev_radio_resumu_noise_trgchk();
int ev_radio_poweron_init_noiseoff(sfObj* obj);
int ev_allpurpose_radio_poweron_trgchk();
int ev_allpurpose_radio_poweron_init(sfObj* obj);
int ev_radio_sound_trgchk();
int ev_radio_sound_init(sfObj* obj);
int ev_radio_sound_exec();
int ev_radio_sound_end();
void RadioLiquidCrystalConstruct(sfObj* obj);
void RadioLiquidCrystalExec(sfObj* obj);
void RadioLiquidCrystalDraw(sfObj* obj);
void RadioLiquidCrystalDestruct(sfObj* obj);
int ev_radio_poweron_trgchk();
int ev_radio_poweron_init(sfObj* obj);
int ev_radio_poweron_exec(sfObj* obj);
int ev_radio_poweron_exec_with_switch_se(sfObj* obj);
int ev_radio_poweroff_trgchk();
int ev_radio_poweroff_init(sfObj* obj);
int ev_radio_poweroff_exec();
void radio_sound_play();
void radio_sound_stop();
void radio_text_synchronize();
void ev_radio_waittimer_update();
void ev_radio_end_reserved();

// 
// Start address: 0x1ee4920
void ev_radio_clear()
{
	// Line 198, Address: 0x1ee4920, Func Offset: 0
	// Line 199, Address: 0x1ee4924, Func Offset: 0x4
	// Line 198, Address: 0x1ee4928, Func Offset: 0x8
	// Line 199, Address: 0x1ee492c, Func Offset: 0xc
	// Line 202, Address: 0x1ee493c, Func Offset: 0x1c
	// Line 204, Address: 0x1ee4940, Func Offset: 0x20
	// Line 202, Address: 0x1ee4944, Func Offset: 0x24
	// Line 204, Address: 0x1ee4948, Func Offset: 0x28
	// Line 202, Address: 0x1ee4950, Func Offset: 0x30
	// Line 205, Address: 0x1ee495c, Func Offset: 0x3c
	// Func End, Address: 0x1ee4968, Func Offset: 0x48
}

// 
// Start address: 0x1ee4970
void ev_radio_set_allpurpose_rand()
{
	// Line 220, Address: 0x1ee4970, Func Offset: 0
	// Line 222, Address: 0x1ee4978, Func Offset: 0x8
	// Func End, Address: 0x1ee4980, Func Offset: 0x10
}

// 
// Start address: 0x1ee4980
int is_active_radio_allpurpose()
{
	int ret;
	int i;
	// Line 228, Address: 0x1ee4980, Func Offset: 0
	// Line 232, Address: 0x1ee4984, Func Offset: 0x4
	// Line 228, Address: 0x1ee4988, Func Offset: 0x8
	// Line 232, Address: 0x1ee4998, Func Offset: 0x18
	// Line 233, Address: 0x1ee49a4, Func Offset: 0x24
	// Line 234, Address: 0x1ee49ac, Func Offset: 0x2c
	// Line 236, Address: 0x1ee49b0, Func Offset: 0x30
	// Line 237, Address: 0x1ee49c0, Func Offset: 0x40
	// Line 238, Address: 0x1ee49d4, Func Offset: 0x54
	// Line 240, Address: 0x1ee49dc, Func Offset: 0x5c
	// Line 241, Address: 0x1ee49f0, Func Offset: 0x70
	// Line 242, Address: 0x1ee4a08, Func Offset: 0x88
	// Line 243, Address: 0x1ee4a0c, Func Offset: 0x8c
	// Line 244, Address: 0x1ee4a10, Func Offset: 0x90
	// Line 245, Address: 0x1ee4a18, Func Offset: 0x98
	// Func End, Address: 0x1ee4a30, Func Offset: 0xb0
}

// 
// Start address: 0x1ee4a30
int is_active_radio_noise()
{
	int ret;
	// Line 268, Address: 0x1ee4a30, Func Offset: 0
	// Line 271, Address: 0x1ee4a34, Func Offset: 0x4
	// Line 268, Address: 0x1ee4a38, Func Offset: 0x8
	// Line 271, Address: 0x1ee4a40, Func Offset: 0x10
	// Line 272, Address: 0x1ee4a4c, Func Offset: 0x1c
	// Line 273, Address: 0x1ee4a54, Func Offset: 0x24
	// Line 275, Address: 0x1ee4a58, Func Offset: 0x28
	// Line 276, Address: 0x1ee4a70, Func Offset: 0x40
	// Line 277, Address: 0x1ee4a74, Func Offset: 0x44
	// Line 278, Address: 0x1ee4a78, Func Offset: 0x48
	// Line 279, Address: 0x1ee4a80, Func Offset: 0x50
	// Func End, Address: 0x1ee4a90, Func Offset: 0x60
}

// 
// Start address: 0x1ee4a90
int radio_is_on()
{
	// Line 286, Address: 0x1ee4a90, Func Offset: 0
	// Line 287, Address: 0x1ee4a9c, Func Offset: 0xc
	// Func End, Address: 0x1ee4aa4, Func Offset: 0x14
}

// 
// Start address: 0x1ee4ab0
int ev_radio_resumu_noise_trgchk()
{
	// Line 296, Address: 0x1ee4ab0, Func Offset: 0
	// Line 298, Address: 0x1ee4ab8, Func Offset: 0x8
	// Line 299, Address: 0x1ee4ac8, Func Offset: 0x18
	// Line 303, Address: 0x1ee4ad0, Func Offset: 0x20
	// Line 304, Address: 0x1ee4af0, Func Offset: 0x40
	// Line 309, Address: 0x1ee4af8, Func Offset: 0x48
	// Line 313, Address: 0x1ee4b08, Func Offset: 0x58
	// Func End, Address: 0x1ee4b14, Func Offset: 0x64
}

// 
// Start address: 0x1ee4b20
int ev_radio_poweron_init_noiseoff(sfObj* obj)
{
	// Line 340, Address: 0x1ee4b20, Func Offset: 0
	// Line 342, Address: 0x1ee4b30, Func Offset: 0x10
	// Func End, Address: 0x1ee4b38, Func Offset: 0x18
}

// 
// Start address: 0x1ee4b40
int ev_allpurpose_radio_poweron_trgchk()
{
	// Line 384, Address: 0x1ee4b40, Func Offset: 0
	// Line 386, Address: 0x1ee4b44, Func Offset: 0x4
	// Line 384, Address: 0x1ee4b48, Func Offset: 0x8
	// Line 386, Address: 0x1ee4b4c, Func Offset: 0xc
	// Line 387, Address: 0x1ee4b58, Func Offset: 0x18
	// Line 391, Address: 0x1ee4b60, Func Offset: 0x20
	// Line 392, Address: 0x1ee4b70, Func Offset: 0x30
	// Line 397, Address: 0x1ee4b78, Func Offset: 0x38
	// Line 400, Address: 0x1ee4b88, Func Offset: 0x48
	// Func End, Address: 0x1ee4b94, Func Offset: 0x54
}

// 
// Start address: 0x1ee4ba0
int ev_allpurpose_radio_poweron_init(sfObj* obj)
{
	_EventInst* inst;
	_SubtitleMessageData* allpurpose_msg;
	// Line 402, Address: 0x1ee4ba0, Func Offset: 0
	// Line 403, Address: 0x1ee4bb4, Func Offset: 0x14
	// Line 404, Address: 0x1ee4bc0, Func Offset: 0x20
	// Line 430, Address: 0x1ee4bd0, Func Offset: 0x30
	// Line 432, Address: 0x1ee4be4, Func Offset: 0x44
	// Line 435, Address: 0x1ee4bf0, Func Offset: 0x50
	// Line 439, Address: 0x1ee4bf8, Func Offset: 0x58
	// Line 440, Address: 0x1ee4c00, Func Offset: 0x60
	// Line 443, Address: 0x1ee4c08, Func Offset: 0x68
	// Line 446, Address: 0x1ee4c10, Func Offset: 0x70
	// Line 447, Address: 0x1ee4c20, Func Offset: 0x80
	// Line 449, Address: 0x1ee4c28, Func Offset: 0x88
	// Line 448, Address: 0x1ee4c2c, Func Offset: 0x8c
	// Line 449, Address: 0x1ee4c30, Func Offset: 0x90
	// Func End, Address: 0x1ee4c44, Func Offset: 0xa4
}

// 
// Start address: 0x1ee4c50
int ev_radio_sound_trgchk()
{
	// Line 464, Address: 0x1ee4c50, Func Offset: 0
	// Line 466, Address: 0x1ee4c58, Func Offset: 0x8
	// Line 469, Address: 0x1ee4c60, Func Offset: 0x10
	// Line 466, Address: 0x1ee4c64, Func Offset: 0x14
	// Line 469, Address: 0x1ee4c68, Func Offset: 0x18
	// Func End, Address: 0x1ee4c70, Func Offset: 0x20
}

// 
// Start address: 0x1ee4c70
int ev_radio_sound_init(sfObj* obj)
{
	_EventInst* evinst;
	// Line 471, Address: 0x1ee4c70, Func Offset: 0
	// Line 472, Address: 0x1ee4c7c, Func Offset: 0xc
	// Line 475, Address: 0x1ee4c84, Func Offset: 0x14
	// Line 478, Address: 0x1ee4c90, Func Offset: 0x20
	// Line 481, Address: 0x1ee4c94, Func Offset: 0x24
	// Line 484, Address: 0x1ee4c9c, Func Offset: 0x2c
	// Line 483, Address: 0x1ee4ca0, Func Offset: 0x30
	// Line 484, Address: 0x1ee4ca4, Func Offset: 0x34
	// Func End, Address: 0x1ee4cb0, Func Offset: 0x40
}

// 
// Start address: 0x1ee4cb0
int ev_radio_sound_exec()
{
	int ret;
	float angle;
	float pos[4];
	float volume;
	// Line 486, Address: 0x1ee4cb0, Func Offset: 0
	// Line 493, Address: 0x1ee4cb4, Func Offset: 0x4
	// Line 486, Address: 0x1ee4cb8, Func Offset: 0x8
	// Line 493, Address: 0x1ee4cc4, Func Offset: 0x14
	// Line 494, Address: 0x1ee4cd0, Func Offset: 0x20
	// Line 498, Address: 0x1ee4cd8, Func Offset: 0x28
	// Line 499, Address: 0x1ee4cfc, Func Offset: 0x4c
	// Line 500, Address: 0x1ee4d18, Func Offset: 0x68
	// Line 502, Address: 0x1ee4d28, Func Offset: 0x78
	// Line 503, Address: 0x1ee4d3c, Func Offset: 0x8c
	// Line 505, Address: 0x1ee4d40, Func Offset: 0x90
	// Line 509, Address: 0x1ee4d50, Func Offset: 0xa0
	// Line 510, Address: 0x1ee4d5c, Func Offset: 0xac
	// Line 513, Address: 0x1ee4d60, Func Offset: 0xb0
	// Line 514, Address: 0x1ee4d70, Func Offset: 0xc0
	// Line 515, Address: 0x1ee4d74, Func Offset: 0xc4
	// Line 516, Address: 0x1ee4d78, Func Offset: 0xc8
	// Line 514, Address: 0x1ee4d7c, Func Offset: 0xcc
	// Line 515, Address: 0x1ee4d80, Func Offset: 0xd0
	// Line 516, Address: 0x1ee4d84, Func Offset: 0xd4
	// Line 514, Address: 0x1ee4d8c, Func Offset: 0xdc
	// Line 515, Address: 0x1ee4d90, Func Offset: 0xe0
	// Line 514, Address: 0x1ee4d94, Func Offset: 0xe4
	// Line 516, Address: 0x1ee4d98, Func Offset: 0xe8
	// Line 514, Address: 0x1ee4d9c, Func Offset: 0xec
	// Line 515, Address: 0x1ee4da0, Func Offset: 0xf0
	// Line 516, Address: 0x1ee4da8, Func Offset: 0xf8
	// Line 518, Address: 0x1ee4dac, Func Offset: 0xfc
	// Line 519, Address: 0x1ee4dbc, Func Offset: 0x10c
	// Line 520, Address: 0x1ee4de4, Func Offset: 0x134
	// Line 522, Address: 0x1ee4df0, Func Offset: 0x140
	// Line 523, Address: 0x1ee4df8, Func Offset: 0x148
	// Line 527, Address: 0x1ee4e08, Func Offset: 0x158
	// Line 528, Address: 0x1ee4e18, Func Offset: 0x168
	// Line 531, Address: 0x1ee4e28, Func Offset: 0x178
	// Line 534, Address: 0x1ee4e34, Func Offset: 0x184
	// Line 535, Address: 0x1ee4e44, Func Offset: 0x194
	// Line 536, Address: 0x1ee4e4c, Func Offset: 0x19c
	// Line 539, Address: 0x1ee4e50, Func Offset: 0x1a0
	// Line 541, Address: 0x1ee4e58, Func Offset: 0x1a8
	// Line 542, Address: 0x1ee4e60, Func Offset: 0x1b0
	// Func End, Address: 0x1ee4e74, Func Offset: 0x1c4
}

// 
// Start address: 0x1ee4e80
int ev_radio_sound_end()
{
	// Line 544, Address: 0x1ee4e80, Func Offset: 0
	// Line 550, Address: 0x1ee4e88, Func Offset: 0x8
	// Line 554, Address: 0x1ee4e90, Func Offset: 0x10
	// Line 562, Address: 0x1ee4ec8, Func Offset: 0x48
	// Line 563, Address: 0x1ee4ed0, Func Offset: 0x50
	// Line 567, Address: 0x1ee4ed8, Func Offset: 0x58
	// Line 566, Address: 0x1ee4edc, Func Offset: 0x5c
	// Line 567, Address: 0x1ee4ee0, Func Offset: 0x60
	// Func End, Address: 0x1ee4ee8, Func Offset: 0x68
}

// 
// Start address: 0x1ee4ef0
void RadioLiquidCrystalConstruct(sfObj* obj)
{
	sfCharacter* liquid_crystal;
	sgAnime* anm;
	int i;
	// Line 584, Address: 0x1ee4ef0, Func Offset: 0
	// Line 588, Address: 0x1ee4ef4, Func Offset: 0x4
	// Line 584, Address: 0x1ee4ef8, Func Offset: 0x8
	// Line 588, Address: 0x1ee4f04, Func Offset: 0x14
	// Line 589, Address: 0x1ee4f10, Func Offset: 0x20
	// Line 591, Address: 0x1ee4f14, Func Offset: 0x24
	// Line 592, Address: 0x1ee4f40, Func Offset: 0x50
	// Line 593, Address: 0x1ee4f4c, Func Offset: 0x5c
	// Line 596, Address: 0x1ee4f64, Func Offset: 0x74
	// Line 603, Address: 0x1ee4f84, Func Offset: 0x94
	// Line 610, Address: 0x1ee4fac, Func Offset: 0xbc
	// Line 611, Address: 0x1ee4fb8, Func Offset: 0xc8
	// Line 610, Address: 0x1ee4fbc, Func Offset: 0xcc
	// Line 611, Address: 0x1ee4fc0, Func Offset: 0xd0
	// Line 610, Address: 0x1ee4fc8, Func Offset: 0xd8
	// Line 611, Address: 0x1ee4fcc, Func Offset: 0xdc
	// Line 612, Address: 0x1ee4fd4, Func Offset: 0xe4
	// Line 613, Address: 0x1ee4fec, Func Offset: 0xfc
	// Line 615, Address: 0x1ee4ff0, Func Offset: 0x100
	// Line 616, Address: 0x1ee4ff8, Func Offset: 0x108
	// Line 618, Address: 0x1ee5014, Func Offset: 0x124
	// Line 619, Address: 0x1ee5018, Func Offset: 0x128
	// Func End, Address: 0x1ee502c, Func Offset: 0x13c
}

// 
// Start address: 0x1ee5030
void RadioLiquidCrystalExec(sfObj* obj)
{
	sfCharacter* liquid_crystal;
	sgAnime* anm;
	// Line 621, Address: 0x1ee5030, Func Offset: 0
	// Line 625, Address: 0x1ee5038, Func Offset: 0x8
	// Line 626, Address: 0x1ee5048, Func Offset: 0x18
	// Line 627, Address: 0x1ee5050, Func Offset: 0x20
	// Line 635, Address: 0x1ee5058, Func Offset: 0x28
	// Func End, Address: 0x1ee5064, Func Offset: 0x34
}

// 
// Start address: 0x1ee5070
void RadioLiquidCrystalDraw(sfObj* obj)
{
	sfCharacter* liquid_crystal;
	// Line 637, Address: 0x1ee5070, Func Offset: 0
	// Line 640, Address: 0x1ee5078, Func Offset: 0x8
	// Line 641, Address: 0x1ee5088, Func Offset: 0x18
	// Line 643, Address: 0x1ee5090, Func Offset: 0x20
	// Func End, Address: 0x1ee509c, Func Offset: 0x2c
}

// 
// Start address: 0x1ee50a0
void RadioLiquidCrystalDestruct(sfObj* obj)
{
	// Line 648, Address: 0x1ee50a0, Func Offset: 0
	// Func End, Address: 0x1ee50a8, Func Offset: 0x8
}

// 
// Start address: 0x1ee50b0
int ev_radio_poweron_trgchk()
{
	// Line 655, Address: 0x1ee50b0, Func Offset: 0
	// Line 657, Address: 0x1ee50b8, Func Offset: 0x8
	// Line 658, Address: 0x1ee50c8, Func Offset: 0x18
	// Line 663, Address: 0x1ee50d0, Func Offset: 0x20
	// Line 667, Address: 0x1ee50e0, Func Offset: 0x30
	// Func End, Address: 0x1ee50ec, Func Offset: 0x3c
}

// 
// Start address: 0x1ee50f0
int ev_radio_poweron_init(sfObj* obj)
{
	_EventInst* evinst;
	// Line 669, Address: 0x1ee50f0, Func Offset: 0
	// Line 670, Address: 0x1ee50f8, Func Offset: 0x8
	// Line 673, Address: 0x1ee5100, Func Offset: 0x10
	// Line 675, Address: 0x1ee510c, Func Offset: 0x1c
	// Line 676, Address: 0x1ee5110, Func Offset: 0x20
	// Line 675, Address: 0x1ee5114, Func Offset: 0x24
	// Line 677, Address: 0x1ee5118, Func Offset: 0x28
	// Func End, Address: 0x1ee5124, Func Offset: 0x34
}

// 
// Start address: 0x1ee5130
int ev_radio_poweron_exec(sfObj* obj)
{
	_EventInst* evinst;
	_anon2 val;
	// Line 679, Address: 0x1ee5130, Func Offset: 0
	// Line 680, Address: 0x1ee5138, Func Offset: 0x8
	// Line 681, Address: 0x1ee5140, Func Offset: 0x10
	// Line 683, Address: 0x1ee5154, Func Offset: 0x24
	// Line 681, Address: 0x1ee5158, Func Offset: 0x28
	// Line 683, Address: 0x1ee5160, Func Offset: 0x30
	// Line 685, Address: 0x1ee5174, Func Offset: 0x44
	// Line 688, Address: 0x1ee5184, Func Offset: 0x54
	// Line 689, Address: 0x1ee518c, Func Offset: 0x5c
	// Line 690, Address: 0x1ee5194, Func Offset: 0x64
	// Line 698, Address: 0x1ee519c, Func Offset: 0x6c
	// Line 690, Address: 0x1ee51a0, Func Offset: 0x70
	// Line 699, Address: 0x1ee51a4, Func Offset: 0x74
	// Func End, Address: 0x1ee51b0, Func Offset: 0x80
}

// 
// Start address: 0x1ee51b0
int ev_radio_poweron_exec_with_switch_se(sfObj* obj)
{
	// Line 702, Address: 0x1ee51b0, Func Offset: 0
	// Line 704, Address: 0x1ee51b4, Func Offset: 0x4
	// Line 702, Address: 0x1ee51b8, Func Offset: 0x8
	// Line 704, Address: 0x1ee51bc, Func Offset: 0xc
	// Line 702, Address: 0x1ee51c0, Func Offset: 0x10
	// Line 704, Address: 0x1ee51c4, Func Offset: 0x14
	// Line 705, Address: 0x1ee51ec, Func Offset: 0x3c
	// Line 707, Address: 0x1ee51f4, Func Offset: 0x44
	// Line 706, Address: 0x1ee51f8, Func Offset: 0x48
	// Line 707, Address: 0x1ee51fc, Func Offset: 0x4c
	// Func End, Address: 0x1ee5208, Func Offset: 0x58
}

// 
// Start address: 0x1ee5210
int ev_radio_poweroff_trgchk()
{
	// Line 713, Address: 0x1ee5210, Func Offset: 0
	// Line 715, Address: 0x1ee5218, Func Offset: 0x8
	// Line 716, Address: 0x1ee5228, Func Offset: 0x18
	// Line 720, Address: 0x1ee5230, Func Offset: 0x20
	// Line 721, Address: 0x1ee5244, Func Offset: 0x34
	// Line 722, Address: 0x1ee524c, Func Offset: 0x3c
	// Line 726, Address: 0x1ee5250, Func Offset: 0x40
	// Line 730, Address: 0x1ee5260, Func Offset: 0x50
	// Func End, Address: 0x1ee526c, Func Offset: 0x5c
}

// 
// Start address: 0x1ee5270
int ev_radio_poweroff_init(sfObj* obj)
{
	_EventInst* evinst;
	// Line 732, Address: 0x1ee5270, Func Offset: 0
	// Line 733, Address: 0x1ee5278, Func Offset: 0x8
	// Line 736, Address: 0x1ee5280, Func Offset: 0x10
	// Line 739, Address: 0x1ee528c, Func Offset: 0x1c
	// Line 738, Address: 0x1ee5290, Func Offset: 0x20
	// Line 739, Address: 0x1ee5294, Func Offset: 0x24
	// Func End, Address: 0x1ee529c, Func Offset: 0x2c
}

// 
// Start address: 0x1ee52a0
int ev_radio_poweroff_exec()
{
	// Line 743, Address: 0x1ee52a0, Func Offset: 0
	// Line 741, Address: 0x1ee52a4, Func Offset: 0x4
	// Line 743, Address: 0x1ee52a8, Func Offset: 0x8
	// Line 741, Address: 0x1ee52b0, Func Offset: 0x10
	// Line 743, Address: 0x1ee52b4, Func Offset: 0x14
	// Line 746, Address: 0x1ee52d4, Func Offset: 0x34
	// Line 747, Address: 0x1ee52e4, Func Offset: 0x44
	// Line 748, Address: 0x1ee52f4, Func Offset: 0x54
	// Line 751, Address: 0x1ee52f8, Func Offset: 0x58
	// Line 753, Address: 0x1ee5304, Func Offset: 0x64
	// Line 755, Address: 0x1ee5310, Func Offset: 0x70
	// Line 754, Address: 0x1ee5314, Func Offset: 0x74
	// Line 755, Address: 0x1ee5318, Func Offset: 0x78
	// Func End, Address: 0x1ee5320, Func Offset: 0x80
}

// 
// Start address: 0x1ee5320
void radio_sound_play()
{
	_anon2 msg2sd[2][9];
	int i;
	float angle;
	float pos[4];
	// Line 773, Address: 0x1ee5320, Func Offset: 0
	// Line 774, Address: 0x1ee5324, Func Offset: 0x4
	// Line 773, Address: 0x1ee5328, Func Offset: 0x8
	// Line 774, Address: 0x1ee532c, Func Offset: 0xc
	// Line 795, Address: 0x1ee5368, Func Offset: 0x48
	// Line 774, Address: 0x1ee536c, Func Offset: 0x4c
	// Line 796, Address: 0x1ee53a4, Func Offset: 0x84
	// Line 774, Address: 0x1ee53a8, Func Offset: 0x88
	// Line 795, Address: 0x1ee53ac, Func Offset: 0x8c
	// Line 774, Address: 0x1ee53b0, Func Offset: 0x90
	// Line 796, Address: 0x1ee53b4, Func Offset: 0x94
	// Line 774, Address: 0x1ee53bc, Func Offset: 0x9c
	// Line 796, Address: 0x1ee53dc, Func Offset: 0xbc
	// Line 797, Address: 0x1ee53e0, Func Offset: 0xc0
	// Line 798, Address: 0x1ee53ec, Func Offset: 0xcc
	// Line 799, Address: 0x1ee53f8, Func Offset: 0xd8
	// Line 801, Address: 0x1ee5400, Func Offset: 0xe0
	// Line 802, Address: 0x1ee5410, Func Offset: 0xf0
	// Line 806, Address: 0x1ee5420, Func Offset: 0x100
	// Line 807, Address: 0x1ee542c, Func Offset: 0x10c
	// Line 808, Address: 0x1ee5430, Func Offset: 0x110
	// Line 809, Address: 0x1ee5434, Func Offset: 0x114
	// Line 807, Address: 0x1ee5438, Func Offset: 0x118
	// Line 808, Address: 0x1ee543c, Func Offset: 0x11c
	// Line 809, Address: 0x1ee5440, Func Offset: 0x120
	// Line 807, Address: 0x1ee5448, Func Offset: 0x128
	// Line 808, Address: 0x1ee544c, Func Offset: 0x12c
	// Line 807, Address: 0x1ee5450, Func Offset: 0x130
	// Line 809, Address: 0x1ee5454, Func Offset: 0x134
	// Line 807, Address: 0x1ee5458, Func Offset: 0x138
	// Line 808, Address: 0x1ee545c, Func Offset: 0x13c
	// Line 809, Address: 0x1ee5464, Func Offset: 0x144
	// Line 811, Address: 0x1ee5468, Func Offset: 0x148
	// Line 812, Address: 0x1ee5478, Func Offset: 0x158
	// Line 813, Address: 0x1ee54b8, Func Offset: 0x198
	// Line 815, Address: 0x1ee54c0, Func Offset: 0x1a0
	// Line 816, Address: 0x1ee54f8, Func Offset: 0x1d8
	// Line 817, Address: 0x1ee5500, Func Offset: 0x1e0
	// Line 822, Address: 0x1ee5510, Func Offset: 0x1f0
	// Line 823, Address: 0x1ee5520, Func Offset: 0x200
	// Line 825, Address: 0x1ee5530, Func Offset: 0x210
	// Func End, Address: 0x1ee553c, Func Offset: 0x21c
}

// 
// Start address: 0x1ee5540
void radio_sound_stop()
{
	// Line 831, Address: 0x1ee5540, Func Offset: 0
	// Line 832, Address: 0x1ee5544, Func Offset: 0x4
	// Line 831, Address: 0x1ee5548, Func Offset: 0x8
	// Line 832, Address: 0x1ee554c, Func Offset: 0xc
	// Line 836, Address: 0x1ee5558, Func Offset: 0x18
	// Line 837, Address: 0x1ee5568, Func Offset: 0x28
	// Line 838, Address: 0x1ee5578, Func Offset: 0x38
	// Line 839, Address: 0x1ee5580, Func Offset: 0x40
	// Line 840, Address: 0x1ee5584, Func Offset: 0x44
	// Line 842, Address: 0x1ee5590, Func Offset: 0x50
	// Line 843, Address: 0x1ee55a0, Func Offset: 0x60
	// Line 853, Address: 0x1ee55a8, Func Offset: 0x68
	// Func End, Address: 0x1ee55b4, Func Offset: 0x74
}

// 
// Start address: 0x1ee55c0
void radio_text_synchronize()
{
	float time;
	// Line 859, Address: 0x1ee55c0, Func Offset: 0
	// Line 860, Address: 0x1ee55c8, Func Offset: 0x8
	// Line 862, Address: 0x1ee55d8, Func Offset: 0x18
	// Line 865, Address: 0x1ee55f4, Func Offset: 0x34
	// Line 866, Address: 0x1ee560c, Func Offset: 0x4c
	// Line 868, Address: 0x1ee561c, Func Offset: 0x5c
	// Line 870, Address: 0x1ee5620, Func Offset: 0x60
	// Line 873, Address: 0x1ee5628, Func Offset: 0x68
	// Line 877, Address: 0x1ee5630, Func Offset: 0x70
	// Func End, Address: 0x1ee563c, Func Offset: 0x7c
}

// 
// Start address: 0x1ee5640
void ev_radio_waittimer_update()
{
	// Line 884, Address: 0x1ee5640, Func Offset: 0
	// Line 885, Address: 0x1ee5650, Func Offset: 0x10
	// Line 886, Address: 0x1ee565c, Func Offset: 0x1c
	// Line 887, Address: 0x1ee5660, Func Offset: 0x20
	// Func End, Address: 0x1ee5668, Func Offset: 0x28
}

// 
// Start address: 0x1ee5670
void ev_radio_end_reserved()
{
	// Line 893, Address: 0x1ee5670, Func Offset: 0
	// Line 894, Address: 0x1ee5678, Func Offset: 0x8
	// Line 896, Address: 0x1ee5688, Func Offset: 0x18
	// Line 899, Address: 0x1ee5690, Func Offset: 0x20
	// Line 900, Address: 0x1ee56a0, Func Offset: 0x30
	// Line 903, Address: 0x1ee56b0, Func Offset: 0x40
	// Func End, Address: 0x1ee56bc, Func Offset: 0x4c
}

