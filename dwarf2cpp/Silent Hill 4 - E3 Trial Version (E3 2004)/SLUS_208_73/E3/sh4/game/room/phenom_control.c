typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct sfObj;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _anon9;
typedef union _anon10;
typedef struct sgIKHandle;
typedef struct sgBone;
typedef struct EventFlag;
typedef struct sfCharacter;
typedef struct _anon11;
typedef struct _anon12;
typedef struct sgAnime;
typedef struct sgSVModel;
typedef struct _anon13;
typedef struct _GAME_WORK;

typedef void(*type_4)(_anon3*, int, int, float*);
typedef void(*type_8)(sfObj*);
typedef void(*type_11)(sfObj*);
typedef void(*type_13)(sfObj*);
typedef sgIKSolveResult(*type_17)();
typedef void(*type_20)(sfObj*);
typedef void(*type_32)(sgAnime*, int);
typedef void(*type_38)(int);

typedef int type_0[1];
typedef int type_1[1];
typedef float type_2[4][4];
typedef float type_3[4];
typedef int type_5[1];
typedef _anon7 type_6[5];
typedef _anon7 type_7[5];
typedef char* type_9[3];
typedef _anon1 type_10[15];
typedef _anon10 type_12[256];
typedef float type_14[4][2];
typedef _anon4 type_15[15];
typedef unsigned char type_16[320];
typedef float type_18[4];
typedef _anon13 type_19[0];
typedef short type_21[2];
typedef _anon6 type_22[5];
typedef unsigned short type_23[2];
typedef int type_24[1];
typedef void* type_25[4];
typedef _anon6 type_26[5];
typedef char type_27[4];
typedef unsigned char type_28[4];
typedef int type_29[1];
typedef float type_30[1];
typedef int type_31[1];
typedef int type_33[1];
typedef sfObj* type_34[30];
typedef unsigned char type_35[4];
typedef int type_36[1];
typedef float type_37[4];

struct _anon0
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

struct _anon1
{
	float level;
	float damage;
	short timer;
	char stat;
	char pad0;
};

struct _anon2
{
	float l_hand;
	float s_hand;
	int frame;
};

struct _anon3
{
	unsigned long tex0;
	unsigned long clamp;
};

struct _anon4
{
	float pos0[4];
	float spot[4];
	float level;
	float damage;
	int stat;
	int timer;
	int mdl_disp;
};

struct _anon5
{
	short access;
	short timer;
};

struct _anon6
{
	float pos[4];
	int room;
	int dir;
};

struct _anon7
{
	float pos[4];
	char room;
	char dir;
	char pad0;
	char pad1;
};

struct _anon8
{
	_anon7 crack[5];
	_anon7 ghost[5];
	char crack_no;
	char ghost_no;
	char pad0;
	char pad1;
};

struct sfObj
{
	_anon10 fwork[256];
	_anon10* work;
	void(*func)(sfObj*);
	_anon10* work_pt0;
	_anon10* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon10* sys_work;
	_anon10* scene_work;
	_anon10* event_work;
	_anon10* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct _anon9
{
	_anon1 ps[15];
	int time;
	short curse;
	short not_curse;
	char cover;
	char pad1;
	char pad2;
	char pad3;
	_anon2 clock;
	_anon8 mark;
	_anon5 sofa;
};

union _anon10
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

struct EventFlag
{
	unsigned char flag[320];
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

struct _anon11
{
	float pos0[4];
	float power;
	float rot_y;
	int n;
	int kind;
	int timer;
	int id;
	int alpha;
	int se;
	int se_slot;
	sfCharacter chara;
	sfObj* sptr[30];
};

struct _anon12
{
	_anon6 crack[5];
	_anon6 ghost[5];
	int crack_no;
	int ghost_no;
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

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct _anon13
{
	void(*func)(int);
	float pos0[4];
	float spot[4];
	int para0;
	int para1;
	int rad;
	int room_no;
	int timing;
	char* name;
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

_anon4 pw[15];
int pw_curse;
int pw_not_curse;
void(*PhenomCommonDestruct)(sfObj*);
_anon12 pmw;
int pw_cover;
int pw_frame;
_GAME_WORK gamew;
int pwd_now;
int pwd_num;
char* pwd_cover_str[3];
_anon13 phenom_data[0];
int pwd_proc;
int pwd_timer;
int pwd_test;
EventFlag event_flag;
void(*PhenomSetAll)(sfObj*);

float PhenomGetRadioVolume();
float PhenomGetCameraDist(float* pos0);
float PhenomGetVolum(float* pos0);
void PhenomCallNormalSound(int se, float* pos0);
void PhenomCallLoopSound(_anon11* pptr, int se, float vol);
void PhenomChangeLoopSound(_anon11* pptr);
void PhenomStopLoopSound(_anon11* pptr);
int PhenomGetStatus(int no);
int PhenomGetCurseLevel();
float PhenomGetCurseForEndingSub();
int PhenomGetCurseForEnding();
void PhenomSetAlpha(sfObj* obj);
void PhenomResetAlpha();
void PhenomMdlTexSet(sfObj* obj, sfCharacter* chara, int mdl, int tex, float* pos);
void PhenomGTexSet(sfCharacter* chara);
void PhenomAnimeSet(sfCharacter* chara, int file);
void PhenomWhenLoad(_anon9* ptr);
void PhenomWhenSave(_anon9* ptr);
void PhenomSetFrame();
void PhenomStartOne(int n);
void PhenomAddMark(int fn);
void PhenomSysInit();
void PhenomSysStart();
int IsPhenomDebugMode();
int GetPhenomDebugNum();
_anon4* GetPhenomWork(int n);
void PhenomCommonDestruct(sfObj* obj);
void PhenomDebugDrawFunc();
void DispPhenomDebug();
void SetFirstPwdNum();
int PhenomDebugCheckLR();
void PhenomDebug();
int CheckPhenomDebug();
void PhenomSetAll(sfObj* obj);
void PhenomAddTimer(int n, int time);
void PhenomUpdate();
void PhenomControlSet(sfObj* obj);

// 
// Start address: 0x2a2860
float PhenomGetRadioVolume()
{
	int i;
	float level;
	// Line 101, Address: 0x2a2860, Func Offset: 0
	// Line 100, Address: 0x2a2868, Func Offset: 0x8
	// Line 101, Address: 0x2a286c, Func Offset: 0xc
	// Line 102, Address: 0x2a2870, Func Offset: 0x10
	// Line 101, Address: 0x2a2874, Func Offset: 0x14
	// Line 102, Address: 0x2a2878, Func Offset: 0x18
	// Line 103, Address: 0x2a2888, Func Offset: 0x28
	// Line 104, Address: 0x2a2894, Func Offset: 0x34
	// Line 107, Address: 0x2a2898, Func Offset: 0x38
	// Line 109, Address: 0x2a28a8, Func Offset: 0x48
	// Line 110, Address: 0x2a28c4, Func Offset: 0x64
	// Func End, Address: 0x2a28cc, Func Offset: 0x6c
}

// 
// Start address: 0x2a28d0
float PhenomGetCameraDist(float* pos0)
{
	float x;
	float z;
	float f;
	float pos[4];
	// Line 115, Address: 0x2a28d0, Func Offset: 0
	// Line 119, Address: 0x2a28e0, Func Offset: 0x10
	// Line 120, Address: 0x2a28e8, Func Offset: 0x18
	// Line 124, Address: 0x2a28ec, Func Offset: 0x1c
	// Line 120, Address: 0x2a28f0, Func Offset: 0x20
	// Line 121, Address: 0x2a28f4, Func Offset: 0x24
	// Line 120, Address: 0x2a28fc, Func Offset: 0x2c
	// Line 124, Address: 0x2a2900, Func Offset: 0x30
	// Line 121, Address: 0x2a2904, Func Offset: 0x34
	// Line 122, Address: 0x2a2908, Func Offset: 0x38
	// Line 124, Address: 0x2a2914, Func Offset: 0x44
	// Func End, Address: 0x2a291c, Func Offset: 0x4c
}

// 
// Start address: 0x2a2920
float PhenomGetVolum(float* pos0)
{
	float f;
	// Line 132, Address: 0x2a2920, Func Offset: 0
	// Line 135, Address: 0x2a2928, Func Offset: 0x8
	// Line 136, Address: 0x2a2930, Func Offset: 0x10
	// Line 138, Address: 0x2a2974, Func Offset: 0x54
	// Func End, Address: 0x2a2980, Func Offset: 0x60
}

// 
// Start address: 0x2a2980
void PhenomCallNormalSound(int se, float* pos0)
{
	// Line 143, Address: 0x2a2980, Func Offset: 0
	// Line 145, Address: 0x2a2998, Func Offset: 0x18
	// Line 146, Address: 0x2a29c4, Func Offset: 0x44
	// Func End, Address: 0x2a29d8, Func Offset: 0x58
}

// 
// Start address: 0x2a29e0
void PhenomCallLoopSound(_anon11* pptr, int se, float vol)
{
	// Line 155, Address: 0x2a29e0, Func Offset: 0
	// Line 156, Address: 0x2a29ec, Func Offset: 0xc
	// Line 158, Address: 0x2a29f8, Func Offset: 0x18
	// Line 157, Address: 0x2a29fc, Func Offset: 0x1c
	// Line 158, Address: 0x2a2a00, Func Offset: 0x20
	// Line 159, Address: 0x2a2a20, Func Offset: 0x40
	// Func End, Address: 0x2a2a30, Func Offset: 0x50
}

// 
// Start address: 0x2a2a30
void PhenomChangeLoopSound(_anon11* pptr)
{
	float pos0[4];
	// Line 164, Address: 0x2a2a30, Func Offset: 0
	// Line 167, Address: 0x2a2a3c, Func Offset: 0xc
	// Line 168, Address: 0x2a2a48, Func Offset: 0x18
	// Line 169, Address: 0x2a2a60, Func Offset: 0x30
	// Line 168, Address: 0x2a2a68, Func Offset: 0x38
	// Line 169, Address: 0x2a2a6c, Func Offset: 0x3c
	// Line 173, Address: 0x2a2a70, Func Offset: 0x40
	// Line 174, Address: 0x2a2a9c, Func Offset: 0x6c
	// Func End, Address: 0x2a2ab0, Func Offset: 0x80
}

// 
// Start address: 0x2a2ab0
void PhenomStopLoopSound(_anon11* pptr)
{
	// Line 179, Address: 0x2a2ab0, Func Offset: 0
	// Line 180, Address: 0x2a2ac0, Func Offset: 0x10
	// Line 181, Address: 0x2a2acc, Func Offset: 0x1c
	// Line 182, Address: 0x2a2ad4, Func Offset: 0x24
	// Line 183, Address: 0x2a2adc, Func Offset: 0x2c
	// Line 184, Address: 0x2a2ae0, Func Offset: 0x30
	// Func End, Address: 0x2a2af0, Func Offset: 0x40
}

// 
// Start address: 0x2a2af0
int PhenomGetStatus(int no)
{
	// Line 189, Address: 0x2a2af0, Func Offset: 0
	// Line 190, Address: 0x2a2af4, Func Offset: 0x4
	// Line 189, Address: 0x2a2af8, Func Offset: 0x8
	// Line 190, Address: 0x2a2b04, Func Offset: 0x14
	// Line 191, Address: 0x2a2b0c, Func Offset: 0x1c
	// Line 192, Address: 0x2a2b28, Func Offset: 0x38
	// Line 196, Address: 0x2a2b40, Func Offset: 0x50
	// Line 197, Address: 0x2a2b58, Func Offset: 0x68
	// Func End, Address: 0x2a2b68, Func Offset: 0x78
}

// 
// Start address: 0x2a2b70
int PhenomGetCurseLevel()
{
	// Line 203, Address: 0x2a2b70, Func Offset: 0
	// Line 204, Address: 0x2a2b74, Func Offset: 0x4
	// Func End, Address: 0x2a2b7c, Func Offset: 0xc
}

// 
// Start address: 0x2a2b80
float PhenomGetCurseForEndingSub()
{
	int i;
	int n;
	float f;
	float df;
	// Line 222, Address: 0x2a2b80, Func Offset: 0
	// Line 221, Address: 0x2a2b84, Func Offset: 0x4
	// Line 222, Address: 0x2a2b88, Func Offset: 0x8
	// Line 223, Address: 0x2a2b90, Func Offset: 0x10
	// Line 222, Address: 0x2a2b94, Func Offset: 0x14
	// Line 223, Address: 0x2a2b98, Func Offset: 0x18
	// Line 224, Address: 0x2a2ba8, Func Offset: 0x28
	// Line 229, Address: 0x2a2bc0, Func Offset: 0x40
	// Line 227, Address: 0x2a2bc4, Func Offset: 0x44
	// Line 226, Address: 0x2a2bcc, Func Offset: 0x4c
	// Line 227, Address: 0x2a2bd0, Func Offset: 0x50
	// Line 229, Address: 0x2a2be4, Func Offset: 0x64
	// Line 230, Address: 0x2a2c10, Func Offset: 0x90
	// Line 238, Address: 0x2a2c18, Func Offset: 0x98
	// Func End, Address: 0x2a2c20, Func Offset: 0xa0
}

// 
// Start address: 0x2a2c20
int PhenomGetCurseForEnding()
{
	// Line 245, Address: 0x2a2c20, Func Offset: 0
	// Line 246, Address: 0x2a2c28, Func Offset: 0x8
	// Line 247, Address: 0x2a2c50, Func Offset: 0x30
	// Func End, Address: 0x2a2c5c, Func Offset: 0x3c
}

// 
// Start address: 0x2a2c60
void PhenomSetAlpha(sfObj* obj)
{
	// Line 252, Address: 0x2a2c60, Func Offset: 0
	// Line 259, Address: 0x2a2c68, Func Offset: 0x8
	// Line 263, Address: 0x2a2c7c, Func Offset: 0x1c
	// Line 267, Address: 0x2a2c88, Func Offset: 0x28
	// Func End, Address: 0x2a2c94, Func Offset: 0x34
}

// 
// Start address: 0x2a2ca0
void PhenomResetAlpha()
{
	// Line 269, Address: 0x2a2ca0, Func Offset: 0
	// Line 270, Address: 0x2a2ca8, Func Offset: 0x8
	// Line 271, Address: 0x2a2cb0, Func Offset: 0x10
	// Line 272, Address: 0x2a2cb8, Func Offset: 0x18
	// Func End, Address: 0x2a2cc4, Func Offset: 0x24
}

// 
// Start address: 0x2a2cd0
void PhenomMdlTexSet(sfObj* obj, sfCharacter* chara, int mdl, int tex, float* pos)
{
	// Line 277, Address: 0x2a2cd0, Func Offset: 0
	// Line 278, Address: 0x2a2cf8, Func Offset: 0x28
	// Line 279, Address: 0x2a2d1c, Func Offset: 0x4c
	// Line 280, Address: 0x2a2d2c, Func Offset: 0x5c
	// Line 281, Address: 0x2a2d38, Func Offset: 0x68
	// Func End, Address: 0x2a2d54, Func Offset: 0x84
}

// 
// Start address: 0x2a2d60
void PhenomGTexSet(sfCharacter* chara)
{
	// Line 286, Address: 0x2a2d60, Func Offset: 0
	// Line 290, Address: 0x2a2d64, Func Offset: 0x4
	// Line 286, Address: 0x2a2d68, Func Offset: 0x8
	// Line 289, Address: 0x2a2d70, Func Offset: 0x10
	// Line 290, Address: 0x2a2d74, Func Offset: 0x14
	// Line 291, Address: 0x2a2d88, Func Offset: 0x28
	// Func End, Address: 0x2a2d98, Func Offset: 0x38
}

// 
// Start address: 0x2a2da0
void PhenomAnimeSet(sfCharacter* chara, int file)
{
	sgAnime* anm;
	// Line 296, Address: 0x2a2da0, Func Offset: 0
	// Line 299, Address: 0x2a2dac, Func Offset: 0xc
	// Line 300, Address: 0x2a2db4, Func Offset: 0x14
	// Line 301, Address: 0x2a2dcc, Func Offset: 0x2c
	// Line 302, Address: 0x2a2ddc, Func Offset: 0x3c
	// Func End, Address: 0x2a2dec, Func Offset: 0x4c
}

// 
// Start address: 0x2a2df0
void PhenomWhenLoad(_anon9* ptr)
{
	int i;
	// Line 307, Address: 0x2a2df0, Func Offset: 0
	// Line 315, Address: 0x2a2df4, Func Offset: 0x4
	// Line 307, Address: 0x2a2df8, Func Offset: 0x8
	// Line 310, Address: 0x2a2dfc, Func Offset: 0xc
	// Line 307, Address: 0x2a2e00, Func Offset: 0x10
	// Line 315, Address: 0x2a2e04, Func Offset: 0x14
	// Line 310, Address: 0x2a2e08, Func Offset: 0x18
	// Line 315, Address: 0x2a2e14, Func Offset: 0x24
	// Line 310, Address: 0x2a2e18, Func Offset: 0x28
	// Line 311, Address: 0x2a2e1c, Func Offset: 0x2c
	// Line 312, Address: 0x2a2e28, Func Offset: 0x38
	// Line 313, Address: 0x2a2e34, Func Offset: 0x44
	// Line 320, Address: 0x2a2e40, Func Offset: 0x50
	// Line 316, Address: 0x2a2e4c, Func Offset: 0x5c
	// Line 320, Address: 0x2a2e50, Func Offset: 0x60
	// Line 316, Address: 0x2a2e54, Func Offset: 0x64
	// Line 317, Address: 0x2a2e58, Func Offset: 0x68
	// Line 318, Address: 0x2a2e60, Func Offset: 0x70
	// Line 319, Address: 0x2a2e68, Func Offset: 0x78
	// Line 320, Address: 0x2a2e70, Func Offset: 0x80
	// Line 323, Address: 0x2a2f10, Func Offset: 0x120
	// Line 325, Address: 0x2a2f18, Func Offset: 0x128
	// Line 326, Address: 0x2a2f1c, Func Offset: 0x12c
	// Line 325, Address: 0x2a2f24, Func Offset: 0x134
	// Line 326, Address: 0x2a2f28, Func Offset: 0x138
	// Line 327, Address: 0x2a2f3c, Func Offset: 0x14c
	// Line 332, Address: 0x2a2f44, Func Offset: 0x154
	// Line 328, Address: 0x2a2f48, Func Offset: 0x158
	// Line 332, Address: 0x2a2f4c, Func Offset: 0x15c
	// Line 328, Address: 0x2a2f50, Func Offset: 0x160
	// Line 329, Address: 0x2a2f54, Func Offset: 0x164
	// Line 330, Address: 0x2a2f5c, Func Offset: 0x16c
	// Line 331, Address: 0x2a2f64, Func Offset: 0x174
	// Line 332, Address: 0x2a2f68, Func Offset: 0x178
	// Line 333, Address: 0x2a2f70, Func Offset: 0x180
	// Line 336, Address: 0x2a2f78, Func Offset: 0x188
	// Line 333, Address: 0x2a2f7c, Func Offset: 0x18c
	// Line 334, Address: 0x2a2f80, Func Offset: 0x190
	// Line 336, Address: 0x2a2f88, Func Offset: 0x198
	// Line 337, Address: 0x2a2f90, Func Offset: 0x1a0
	// Func End, Address: 0x2a2fa0, Func Offset: 0x1b0
}

// 
// Start address: 0x2a2fa0
void PhenomWhenSave(_anon9* ptr)
{
	int i;
	// Line 342, Address: 0x2a2fa0, Func Offset: 0
	// Line 350, Address: 0x2a2fa4, Func Offset: 0x4
	// Line 342, Address: 0x2a2fa8, Func Offset: 0x8
	// Line 345, Address: 0x2a2fac, Func Offset: 0xc
	// Line 342, Address: 0x2a2fb0, Func Offset: 0x10
	// Line 350, Address: 0x2a2fb4, Func Offset: 0x14
	// Line 345, Address: 0x2a2fb8, Func Offset: 0x18
	// Line 350, Address: 0x2a2fc0, Func Offset: 0x20
	// Line 345, Address: 0x2a2fc8, Func Offset: 0x28
	// Line 346, Address: 0x2a2fcc, Func Offset: 0x2c
	// Line 347, Address: 0x2a2fd8, Func Offset: 0x38
	// Line 348, Address: 0x2a2fe4, Func Offset: 0x44
	// Line 354, Address: 0x2a2ff0, Func Offset: 0x50
	// Line 351, Address: 0x2a2ff4, Func Offset: 0x54
	// Line 354, Address: 0x2a2ff8, Func Offset: 0x58
	// Line 351, Address: 0x2a2ffc, Func Offset: 0x5c
	// Line 352, Address: 0x2a3000, Func Offset: 0x60
	// Line 353, Address: 0x2a3008, Func Offset: 0x68
	// Line 354, Address: 0x2a3010, Func Offset: 0x70
	// Line 357, Address: 0x2a30a4, Func Offset: 0x104
	// Line 359, Address: 0x2a30ac, Func Offset: 0x10c
	// Line 360, Address: 0x2a30b0, Func Offset: 0x110
	// Line 361, Address: 0x2a30cc, Func Offset: 0x12c
	// Line 366, Address: 0x2a30d4, Func Offset: 0x134
	// Line 362, Address: 0x2a30d8, Func Offset: 0x138
	// Line 366, Address: 0x2a30dc, Func Offset: 0x13c
	// Line 362, Address: 0x2a30e0, Func Offset: 0x140
	// Line 363, Address: 0x2a30e4, Func Offset: 0x144
	// Line 364, Address: 0x2a30ec, Func Offset: 0x14c
	// Line 365, Address: 0x2a30f4, Func Offset: 0x154
	// Line 366, Address: 0x2a30f8, Func Offset: 0x158
	// Line 367, Address: 0x2a3100, Func Offset: 0x160
	// Line 370, Address: 0x2a3104, Func Offset: 0x164
	// Line 367, Address: 0x2a3108, Func Offset: 0x168
	// Line 368, Address: 0x2a3110, Func Offset: 0x170
	// Line 370, Address: 0x2a3118, Func Offset: 0x178
	// Line 371, Address: 0x2a3120, Func Offset: 0x180
	// Func End, Address: 0x2a3130, Func Offset: 0x190
}

// 
// Start address: 0x2a3130
void PhenomSetFrame()
{
	// Line 376, Address: 0x2a3130, Func Offset: 0
	// Line 377, Address: 0x2a3138, Func Offset: 0x8
	// Line 378, Address: 0x2a3148, Func Offset: 0x18
	// Func End, Address: 0x2a3154, Func Offset: 0x24
}

// 
// Start address: 0x2a3160
void PhenomStartOne(int n)
{
	// Line 384, Address: 0x2a3160, Func Offset: 0
	// Line 383, Address: 0x2a3164, Func Offset: 0x4
	// Line 384, Address: 0x2a3168, Func Offset: 0x8
	// Line 383, Address: 0x2a3174, Func Offset: 0x14
	// Line 384, Address: 0x2a3178, Func Offset: 0x18
	// Line 387, Address: 0x2a3184, Func Offset: 0x24
	// Line 385, Address: 0x2a3188, Func Offset: 0x28
	// Line 386, Address: 0x2a3194, Func Offset: 0x34
	// Line 385, Address: 0x2a3198, Func Offset: 0x38
	// Line 386, Address: 0x2a319c, Func Offset: 0x3c
	// Line 387, Address: 0x2a31a0, Func Offset: 0x40
	// Line 386, Address: 0x2a31a4, Func Offset: 0x44
	// Line 387, Address: 0x2a31a8, Func Offset: 0x48
	// Line 386, Address: 0x2a31ac, Func Offset: 0x4c
	// Line 387, Address: 0x2a31b0, Func Offset: 0x50
	// Line 388, Address: 0x2a31b4, Func Offset: 0x54
	// Line 387, Address: 0x2a31b8, Func Offset: 0x58
	// Line 388, Address: 0x2a31bc, Func Offset: 0x5c
	// Line 389, Address: 0x2a31c4, Func Offset: 0x64
	// Line 390, Address: 0x2a31d8, Func Offset: 0x78
	// Func End, Address: 0x2a31e4, Func Offset: 0x84
}

// 
// Start address: 0x2a31f0
void PhenomAddMark(int fn)
{
	_anon6* pmwptr;
	float sv[4];
	// Line 397, Address: 0x2a31f0, Func Offset: 0
	// Line 401, Address: 0x2a31f8, Func Offset: 0x8
	// Line 402, Address: 0x2a3200, Func Offset: 0x10
	// Line 403, Address: 0x2a3210, Func Offset: 0x20
	// Line 402, Address: 0x2a3214, Func Offset: 0x24
	// Line 403, Address: 0x2a3218, Func Offset: 0x28
	// Line 404, Address: 0x2a3220, Func Offset: 0x30
	// Line 405, Address: 0x2a3224, Func Offset: 0x34
	// Line 406, Address: 0x2a3248, Func Offset: 0x58
	// Line 408, Address: 0x2a3250, Func Offset: 0x60
	// Line 409, Address: 0x2a3260, Func Offset: 0x70
	// Line 408, Address: 0x2a3264, Func Offset: 0x74
	// Line 409, Address: 0x2a326c, Func Offset: 0x7c
	// Line 410, Address: 0x2a3274, Func Offset: 0x84
	// Line 411, Address: 0x2a3278, Func Offset: 0x88
	// Line 414, Address: 0x2a32a0, Func Offset: 0xb0
	// Line 415, Address: 0x2a32ac, Func Offset: 0xbc
	// Line 416, Address: 0x2a32b8, Func Offset: 0xc8
	// Func End, Address: 0x2a32c8, Func Offset: 0xd8
}

// 
// Start address: 0x2a32d0
void PhenomSysInit()
{
	int i;
	// Line 427, Address: 0x2a32d0, Func Offset: 0
	// Line 431, Address: 0x2a32d4, Func Offset: 0x4
	// Line 427, Address: 0x2a32d8, Func Offset: 0x8
	// Line 426, Address: 0x2a32dc, Func Offset: 0xc
	// Line 428, Address: 0x2a32e0, Func Offset: 0x10
	// Line 431, Address: 0x2a32e4, Func Offset: 0x14
	// Line 428, Address: 0x2a32e8, Func Offset: 0x18
	// Line 431, Address: 0x2a32ec, Func Offset: 0x1c
	// Line 426, Address: 0x2a32f0, Func Offset: 0x20
	// Line 429, Address: 0x2a32f8, Func Offset: 0x28
	// Line 436, Address: 0x2a3300, Func Offset: 0x30
	// Line 432, Address: 0x2a3308, Func Offset: 0x38
	// Line 433, Address: 0x2a330c, Func Offset: 0x3c
	// Line 436, Address: 0x2a3310, Func Offset: 0x40
	// Line 434, Address: 0x2a3314, Func Offset: 0x44
	// Line 436, Address: 0x2a3318, Func Offset: 0x48
	// Line 435, Address: 0x2a331c, Func Offset: 0x4c
	// Line 436, Address: 0x2a3320, Func Offset: 0x50
	// Line 440, Address: 0x2a337c, Func Offset: 0xac
	// Line 441, Address: 0x2a3384, Func Offset: 0xb4
	// Line 443, Address: 0x2a33cc, Func Offset: 0xfc
	// Line 444, Address: 0x2a33d4, Func Offset: 0x104
	// Line 445, Address: 0x2a33d8, Func Offset: 0x108
	// Func End, Address: 0x2a33e0, Func Offset: 0x110
}

// 
// Start address: 0x2a33e0
void PhenomSysStart()
{
	// Line 455, Address: 0x2a33e0, Func Offset: 0
	// Line 456, Address: 0x2a33f0, Func Offset: 0x10
	// Line 458, Address: 0x2a33f4, Func Offset: 0x14
	// Line 456, Address: 0x2a33f8, Func Offset: 0x18
	// Line 457, Address: 0x2a3400, Func Offset: 0x20
	// Line 459, Address: 0x2a340c, Func Offset: 0x2c
	// Line 460, Address: 0x2a3414, Func Offset: 0x34
	// Line 461, Address: 0x2a3418, Func Offset: 0x38
	// Func End, Address: 0x2a3420, Func Offset: 0x40
}

// 
// Start address: 0x2a3420
int IsPhenomDebugMode()
{
	// Line 467, Address: 0x2a3420, Func Offset: 0
	// Line 468, Address: 0x2a3424, Func Offset: 0x4
	// Func End, Address: 0x2a342c, Func Offset: 0xc
}

// 
// Start address: 0x2a3430
int GetPhenomDebugNum()
{
	// Line 474, Address: 0x2a3430, Func Offset: 0
	// Line 475, Address: 0x2a3434, Func Offset: 0x4
	// Func End, Address: 0x2a343c, Func Offset: 0xc
}

// 
// Start address: 0x2a3440
_anon4* GetPhenomWork(int n)
{
	// Line 481, Address: 0x2a3440, Func Offset: 0
	// Line 482, Address: 0x2a344c, Func Offset: 0xc
	// Func End, Address: 0x2a3454, Func Offset: 0x14
}

// 
// Start address: 0x2a3460
void PhenomCommonDestruct(sfObj* obj)
{
	// Line 491, Address: 0x2a3460, Func Offset: 0
	// Func End, Address: 0x2a346c, Func Offset: 0xc
}

// 
// Start address: 0x2a3470
void PhenomDebugDrawFunc()
{
	// Line 506, Address: 0x2a3470, Func Offset: 0
	// Line 507, Address: 0x2a3478, Func Offset: 0x8
	// Line 572, Address: 0x2a3480, Func Offset: 0x10
	// Func End, Address: 0x2a348c, Func Offset: 0x1c
}

// 
// Start address: 0x2a3490
void DispPhenomDebug()
{
	// Line 626, Address: 0x2a3490, Func Offset: 0
	// Func End, Address: 0x2a3498, Func Offset: 0x8
}

// 
// Start address: 0x2a34a0
void SetFirstPwdNum()
{
	int room_no;
	// Line 635, Address: 0x2a34a0, Func Offset: 0
	// Line 634, Address: 0x2a34b0, Func Offset: 0x10
	// Line 635, Address: 0x2a34b4, Func Offset: 0x14
	// Line 634, Address: 0x2a34b8, Func Offset: 0x18
	// Line 637, Address: 0x2a34c0, Func Offset: 0x20
	// Line 638, Address: 0x2a34d4, Func Offset: 0x34
	// Line 639, Address: 0x2a34e0, Func Offset: 0x40
	// Line 640, Address: 0x2a34e8, Func Offset: 0x48
	// Func End, Address: 0x2a34f0, Func Offset: 0x50
}

// 
// Start address: 0x2a34f0
int PhenomDebugCheckLR()
{
	int room_no;
	// Line 645, Address: 0x2a34f0, Func Offset: 0
	// Line 648, Address: 0x2a34f4, Func Offset: 0x4
	// Line 645, Address: 0x2a34f8, Func Offset: 0x8
	// Line 648, Address: 0x2a3504, Func Offset: 0x14
	// Line 649, Address: 0x2a350c, Func Offset: 0x1c
	// Line 650, Address: 0x2a3510, Func Offset: 0x20
	// Line 651, Address: 0x2a352c, Func Offset: 0x3c
	// Line 652, Address: 0x2a353c, Func Offset: 0x4c
	// Line 653, Address: 0x2a3558, Func Offset: 0x68
	// Line 654, Address: 0x2a3588, Func Offset: 0x98
	// Line 656, Address: 0x2a3590, Func Offset: 0xa0
	// Line 658, Address: 0x2a35a4, Func Offset: 0xb4
	// Line 657, Address: 0x2a35a8, Func Offset: 0xb8
	// Line 658, Address: 0x2a35b8, Func Offset: 0xc8
	// Line 659, Address: 0x2a35d0, Func Offset: 0xe0
	// Line 660, Address: 0x2a3600, Func Offset: 0x110
	// Line 662, Address: 0x2a3608, Func Offset: 0x118
	// Line 663, Address: 0x2a3610, Func Offset: 0x120
	// Func End, Address: 0x2a3620, Func Offset: 0x130
}

// 
// Start address: 0x2a3620
void PhenomDebug()
{
	_anon4* pptr;
	// Line 668, Address: 0x2a3620, Func Offset: 0
	// Line 671, Address: 0x2a3624, Func Offset: 0x4
	// Line 668, Address: 0x2a3628, Func Offset: 0x8
	// Line 671, Address: 0x2a3630, Func Offset: 0x10
	// Line 673, Address: 0x2a363c, Func Offset: 0x1c
	// Line 675, Address: 0x2a3644, Func Offset: 0x24
	// Line 676, Address: 0x2a3654, Func Offset: 0x34
	// Line 675, Address: 0x2a3658, Func Offset: 0x38
	// Line 676, Address: 0x2a365c, Func Offset: 0x3c
	// Line 682, Address: 0x2a3688, Func Offset: 0x68
	// Line 683, Address: 0x2a3698, Func Offset: 0x78
	// Line 684, Address: 0x2a36ac, Func Offset: 0x8c
	// Line 685, Address: 0x2a36b4, Func Offset: 0x94
	// Line 686, Address: 0x2a36b8, Func Offset: 0x98
	// Line 687, Address: 0x2a36cc, Func Offset: 0xac
	// Line 688, Address: 0x2a36d8, Func Offset: 0xb8
	// Line 687, Address: 0x2a36e0, Func Offset: 0xc0
	// Line 688, Address: 0x2a36e4, Func Offset: 0xc4
	// Line 689, Address: 0x2a36f4, Func Offset: 0xd4
	// Line 690, Address: 0x2a36f8, Func Offset: 0xd8
	// Line 691, Address: 0x2a370c, Func Offset: 0xec
	// Line 692, Address: 0x2a3718, Func Offset: 0xf8
	// Line 691, Address: 0x2a3728, Func Offset: 0x108
	// Line 692, Address: 0x2a372c, Func Offset: 0x10c
	// Line 694, Address: 0x2a3738, Func Offset: 0x118
	// Line 698, Address: 0x2a3740, Func Offset: 0x120
	// Line 699, Address: 0x2a3750, Func Offset: 0x130
	// Line 700, Address: 0x2a3764, Func Offset: 0x144
	// Line 702, Address: 0x2a3788, Func Offset: 0x168
	// Line 703, Address: 0x2a379c, Func Offset: 0x17c
	// Line 705, Address: 0x2a37bc, Func Offset: 0x19c
	// Line 706, Address: 0x2a37c4, Func Offset: 0x1a4
	// Line 707, Address: 0x2a37c8, Func Offset: 0x1a8
	// Line 708, Address: 0x2a37d8, Func Offset: 0x1b8
	// Line 709, Address: 0x2a37ec, Func Offset: 0x1cc
	// Line 710, Address: 0x2a3814, Func Offset: 0x1f4
	// Line 711, Address: 0x2a3818, Func Offset: 0x1f8
	// Line 712, Address: 0x2a382c, Func Offset: 0x20c
	// Line 720, Address: 0x2a3854, Func Offset: 0x234
	// Line 722, Address: 0x2a3858, Func Offset: 0x238
	// Line 724, Address: 0x2a386c, Func Offset: 0x24c
	// Line 723, Address: 0x2a3870, Func Offset: 0x250
	// Line 724, Address: 0x2a3880, Func Offset: 0x260
	// Line 727, Address: 0x2a3898, Func Offset: 0x278
	// Line 728, Address: 0x2a38ac, Func Offset: 0x28c
	// Line 729, Address: 0x2a38d4, Func Offset: 0x2b4
	// Line 730, Address: 0x2a38d8, Func Offset: 0x2b8
	// Line 731, Address: 0x2a38e0, Func Offset: 0x2c0
	// Line 733, Address: 0x2a38e8, Func Offset: 0x2c8
	// Line 734, Address: 0x2a38f0, Func Offset: 0x2d0
	// Line 743, Address: 0x2a38f8, Func Offset: 0x2d8
	// Line 750, Address: 0x2a3910, Func Offset: 0x2f0
	// Line 752, Address: 0x2a3918, Func Offset: 0x2f8
	// Line 755, Address: 0x2a3924, Func Offset: 0x304
	// Line 756, Address: 0x2a3928, Func Offset: 0x308
	// Func End, Address: 0x2a3938, Func Offset: 0x318
}

// 
// Start address: 0x2a3940
int CheckPhenomDebug()
{
	// Line 767, Address: 0x2a3940, Func Offset: 0
	// Func End, Address: 0x2a3948, Func Offset: 0x8
}

// 
// Start address: 0x2a3950
void PhenomSetAll(sfObj* obj)
{
	int i;
	int room_no;
	// Line 772, Address: 0x2a3950, Func Offset: 0
	// Line 777, Address: 0x2a395c, Func Offset: 0xc
	// Line 772, Address: 0x2a3960, Func Offset: 0x10
	// Line 777, Address: 0x2a396c, Func Offset: 0x1c
	// Line 772, Address: 0x2a3970, Func Offset: 0x20
	// Line 777, Address: 0x2a3974, Func Offset: 0x24
	// Line 803, Address: 0x2a3998, Func Offset: 0x48
	// Line 804, Address: 0x2a399c, Func Offset: 0x4c
	// Line 805, Address: 0x2a39a4, Func Offset: 0x54
	// Line 806, Address: 0x2a39a8, Func Offset: 0x58
	// Line 807, Address: 0x2a39bc, Func Offset: 0x6c
	// Line 808, Address: 0x2a39d4, Func Offset: 0x84
	// Line 807, Address: 0x2a39d8, Func Offset: 0x88
	// Line 808, Address: 0x2a39dc, Func Offset: 0x8c
	// Line 809, Address: 0x2a39f0, Func Offset: 0xa0
	// Line 810, Address: 0x2a39f8, Func Offset: 0xa8
	// Line 814, Address: 0x2a3a08, Func Offset: 0xb8
	// Line 815, Address: 0x2a3a20, Func Offset: 0xd0
	// Line 816, Address: 0x2a3a40, Func Offset: 0xf0
	// Line 817, Address: 0x2a3a4c, Func Offset: 0xfc
	// Line 818, Address: 0x2a3a60, Func Offset: 0x110
	// Line 819, Address: 0x2a3a6c, Func Offset: 0x11c
	// Line 820, Address: 0x2a3a70, Func Offset: 0x120
	// Line 822, Address: 0x2a3a78, Func Offset: 0x128
	// Line 821, Address: 0x2a3a7c, Func Offset: 0x12c
	// Line 822, Address: 0x2a3a80, Func Offset: 0x130
	// Line 821, Address: 0x2a3a84, Func Offset: 0x134
	// Line 823, Address: 0x2a3a88, Func Offset: 0x138
	// Line 825, Address: 0x2a3a90, Func Offset: 0x140
	// Line 828, Address: 0x2a3a98, Func Offset: 0x148
	// Func End, Address: 0x2a3ab0, Func Offset: 0x160
}

// 
// Start address: 0x2a3ab0
void PhenomAddTimer(int n, int time)
{
	// Line 833, Address: 0x2a3ab0, Func Offset: 0
	// Line 834, Address: 0x2a3ad4, Func Offset: 0x24
	// Line 836, Address: 0x2a3af4, Func Offset: 0x44
	// Line 837, Address: 0x2a3b00, Func Offset: 0x50
	// Line 838, Address: 0x2a3b0c, Func Offset: 0x5c
	// Line 839, Address: 0x2a3b14, Func Offset: 0x64
	// Line 840, Address: 0x2a3b18, Func Offset: 0x68
	// Line 842, Address: 0x2a3b20, Func Offset: 0x70
	// Line 843, Address: 0x2a3b24, Func Offset: 0x74
	// Line 847, Address: 0x2a3b28, Func Offset: 0x78
	// Line 848, Address: 0x2a3b38, Func Offset: 0x88
	// Line 849, Address: 0x2a3b6c, Func Offset: 0xbc
	// Line 852, Address: 0x2a3b78, Func Offset: 0xc8
	// Line 853, Address: 0x2a3b9c, Func Offset: 0xec
	// Line 854, Address: 0x2a3ba4, Func Offset: 0xf4
	// Line 855, Address: 0x2a3bac, Func Offset: 0xfc
	// Line 856, Address: 0x2a3bb8, Func Offset: 0x108
	// Line 857, Address: 0x2a3bc4, Func Offset: 0x114
	// Line 858, Address: 0x2a3bcc, Func Offset: 0x11c
	// Line 860, Address: 0x2a3bd0, Func Offset: 0x120
	// Line 859, Address: 0x2a3bd4, Func Offset: 0x124
	// Line 860, Address: 0x2a3bdc, Func Offset: 0x12c
	// Line 859, Address: 0x2a3be0, Func Offset: 0x130
	// Line 860, Address: 0x2a3be4, Func Offset: 0x134
	// Line 861, Address: 0x2a3c20, Func Offset: 0x170
	// Line 863, Address: 0x2a3c34, Func Offset: 0x184
	// Line 864, Address: 0x2a3c38, Func Offset: 0x188
	// Func End, Address: 0x2a3c4c, Func Offset: 0x19c
}

// 
// Start address: 0x2a3c50
void PhenomUpdate()
{
	int retry;
	int s_level;
	int i;
	int j;
	int diff;
	int diff2;
	int k;
	int n;
	// Line 872, Address: 0x2a3c50, Func Offset: 0
	// Line 876, Address: 0x2a3c54, Func Offset: 0x4
	// Line 872, Address: 0x2a3c58, Func Offset: 0x8
	// Line 876, Address: 0x2a3c70, Func Offset: 0x20
	// Line 877, Address: 0x2a3c7c, Func Offset: 0x2c
	// Line 892, Address: 0x2a3c90, Func Offset: 0x40
	// Line 893, Address: 0x2a3ca0, Func Offset: 0x50
	// Line 894, Address: 0x2a3ca8, Func Offset: 0x58
	// Line 895, Address: 0x2a3cb4, Func Offset: 0x64
	// Line 903, Address: 0x2a3cc4, Func Offset: 0x74
	// Line 907, Address: 0x2a3cf4, Func Offset: 0xa4
	// Line 916, Address: 0x2a3d1c, Func Offset: 0xcc
	// Line 917, Address: 0x2a3d30, Func Offset: 0xe0
	// Line 919, Address: 0x2a3d48, Func Offset: 0xf8
	// Line 922, Address: 0x2a3d4c, Func Offset: 0xfc
	// Line 923, Address: 0x2a3d50, Func Offset: 0x100
	// Line 924, Address: 0x2a3d80, Func Offset: 0x130
	// Line 927, Address: 0x2a3da0, Func Offset: 0x150
	// Line 932, Address: 0x2a3dac, Func Offset: 0x15c
	// Line 933, Address: 0x2a3db4, Func Offset: 0x164
	// Line 934, Address: 0x2a3db8, Func Offset: 0x168
	// Line 935, Address: 0x2a3dc4, Func Offset: 0x174
	// Line 939, Address: 0x2a3ddc, Func Offset: 0x18c
	// Line 944, Address: 0x2a3dfc, Func Offset: 0x1ac
	// Line 947, Address: 0x2a3e04, Func Offset: 0x1b4
	// Line 949, Address: 0x2a3e08, Func Offset: 0x1b8
	// Line 950, Address: 0x2a3e14, Func Offset: 0x1c4
	// Line 955, Address: 0x2a3e24, Func Offset: 0x1d4
	// Line 957, Address: 0x2a3e2c, Func Offset: 0x1dc
	// Line 958, Address: 0x2a3e30, Func Offset: 0x1e0
	// Line 959, Address: 0x2a3e38, Func Offset: 0x1e8
	// Line 964, Address: 0x2a3e48, Func Offset: 0x1f8
	// Line 968, Address: 0x2a3e50, Func Offset: 0x200
	// Line 969, Address: 0x2a3e5c, Func Offset: 0x20c
	// Line 974, Address: 0x2a3e6c, Func Offset: 0x21c
	// Line 976, Address: 0x2a3e74, Func Offset: 0x224
	// Line 978, Address: 0x2a3e78, Func Offset: 0x228
	// Line 979, Address: 0x2a3e84, Func Offset: 0x234
	// Line 984, Address: 0x2a3e94, Func Offset: 0x244
	// Line 986, Address: 0x2a3e9c, Func Offset: 0x24c
	// Line 988, Address: 0x2a3ea0, Func Offset: 0x250
	// Line 989, Address: 0x2a3eac, Func Offset: 0x25c
	// Line 994, Address: 0x2a3ebc, Func Offset: 0x26c
	// Line 996, Address: 0x2a3ec4, Func Offset: 0x274
	// Line 998, Address: 0x2a3ec8, Func Offset: 0x278
	// Line 999, Address: 0x2a3ed8, Func Offset: 0x288
	// Line 1000, Address: 0x2a3ef0, Func Offset: 0x2a0
	// Line 1001, Address: 0x2a3f00, Func Offset: 0x2b0
	// Line 1002, Address: 0x2a3f10, Func Offset: 0x2c0
	// Line 1003, Address: 0x2a3f1c, Func Offset: 0x2cc
	// Line 1002, Address: 0x2a3f28, Func Offset: 0x2d8
	// Line 1003, Address: 0x2a3f2c, Func Offset: 0x2dc
	// Line 1004, Address: 0x2a3f38, Func Offset: 0x2e8
	// Line 1011, Address: 0x2a3f44, Func Offset: 0x2f4
	// Line 1016, Address: 0x2a3f64, Func Offset: 0x314
	// Line 1017, Address: 0x2a3f6c, Func Offset: 0x31c
	// Line 1022, Address: 0x2a3f70, Func Offset: 0x320
	// Line 1021, Address: 0x2a3f80, Func Offset: 0x330
	// Line 1022, Address: 0x2a3f84, Func Offset: 0x334
	// Line 1023, Address: 0x2a3f90, Func Offset: 0x340
	// Line 1024, Address: 0x2a3fa0, Func Offset: 0x350
	// Line 1025, Address: 0x2a3fb0, Func Offset: 0x360
	// Line 1026, Address: 0x2a3fbc, Func Offset: 0x36c
	// Line 1027, Address: 0x2a3fc0, Func Offset: 0x370
	// Line 1026, Address: 0x2a3fc8, Func Offset: 0x378
	// Line 1027, Address: 0x2a3fcc, Func Offset: 0x37c
	// Line 1028, Address: 0x2a3fd4, Func Offset: 0x384
	// Line 1033, Address: 0x2a3fe0, Func Offset: 0x390
	// Line 1044, Address: 0x2a3fe8, Func Offset: 0x398
	// Line 1045, Address: 0x2a3ff0, Func Offset: 0x3a0
	// Line 1046, Address: 0x2a3ff8, Func Offset: 0x3a8
	// Line 1079, Address: 0x2a4000, Func Offset: 0x3b0
	// Func End, Address: 0x2a4020, Func Offset: 0x3d0
}

// 
// Start address: 0x2a4020
void PhenomControlSet(sfObj* obj)
{
	sfObj* optr;
	int i;
	float dam;
	float range;
	// Line 1085, Address: 0x2a4020, Func Offset: 0
	// Line 1089, Address: 0x2a4024, Func Offset: 0x4
	// Line 1085, Address: 0x2a4028, Func Offset: 0x8
	// Line 1089, Address: 0x2a4040, Func Offset: 0x20
	// Line 1090, Address: 0x2a407c, Func Offset: 0x5c
	// Line 1094, Address: 0x2a4080, Func Offset: 0x60
	// Line 1096, Address: 0x2a4094, Func Offset: 0x74
	// Line 1097, Address: 0x2a409c, Func Offset: 0x7c
	// Line 1098, Address: 0x2a40a0, Func Offset: 0x80
	// Line 1100, Address: 0x2a40a8, Func Offset: 0x88
	// Line 1101, Address: 0x2a40b0, Func Offset: 0x90
	// Line 1102, Address: 0x2a40c0, Func Offset: 0xa0
	// Line 1110, Address: 0x2a40c4, Func Offset: 0xa4
	// Line 1112, Address: 0x2a40cc, Func Offset: 0xac
	// Line 1113, Address: 0x2a40d4, Func Offset: 0xb4
	// Line 1115, Address: 0x2a40dc, Func Offset: 0xbc
	// Line 1116, Address: 0x2a40e0, Func Offset: 0xc0
	// Line 1117, Address: 0x2a40f0, Func Offset: 0xd0
	// Line 1118, Address: 0x2a40fc, Func Offset: 0xdc
	// Line 1120, Address: 0x2a4104, Func Offset: 0xe4
	// Line 1122, Address: 0x2a410c, Func Offset: 0xec
	// Line 1123, Address: 0x2a4110, Func Offset: 0xf0
	// Line 1124, Address: 0x2a4118, Func Offset: 0xf8
	// Line 1125, Address: 0x2a4128, Func Offset: 0x108
	// Line 1126, Address: 0x2a412c, Func Offset: 0x10c
	// Line 1136, Address: 0x2a4138, Func Offset: 0x118
	// Line 1137, Address: 0x2a4140, Func Offset: 0x120
	// Line 1142, Address: 0x2a4168, Func Offset: 0x148
	// Line 1143, Address: 0x2a4188, Func Offset: 0x168
	// Line 1144, Address: 0x2a4198, Func Offset: 0x178
	// Line 1145, Address: 0x2a41a0, Func Offset: 0x180
	// Line 1150, Address: 0x2a41b0, Func Offset: 0x190
	// Line 1149, Address: 0x2a41b4, Func Offset: 0x194
	// Line 1150, Address: 0x2a41b8, Func Offset: 0x198
	// Line 1151, Address: 0x2a41c4, Func Offset: 0x1a4
	// Line 1152, Address: 0x2a41d4, Func Offset: 0x1b4
	// Line 1153, Address: 0x2a41fc, Func Offset: 0x1dc
	// Line 1155, Address: 0x2a4210, Func Offset: 0x1f0
	// Line 1156, Address: 0x2a4214, Func Offset: 0x1f4
	// Line 1155, Address: 0x2a4218, Func Offset: 0x1f8
	// Line 1158, Address: 0x2a421c, Func Offset: 0x1fc
	// Line 1156, Address: 0x2a4220, Func Offset: 0x200
	// Line 1157, Address: 0x2a4228, Func Offset: 0x208
	// Line 1158, Address: 0x2a4230, Func Offset: 0x210
	// Line 1159, Address: 0x2a4248, Func Offset: 0x228
	// Line 1166, Address: 0x2a4250, Func Offset: 0x230
	// Line 1167, Address: 0x2a425c, Func Offset: 0x23c
	// Line 1166, Address: 0x2a4268, Func Offset: 0x248
	// Line 1167, Address: 0x2a426c, Func Offset: 0x24c
	// Line 1168, Address: 0x2a4274, Func Offset: 0x254
	// Line 1170, Address: 0x2a4278, Func Offset: 0x258
	// Line 1173, Address: 0x2a4280, Func Offset: 0x260
	// Func End, Address: 0x2a42a0, Func Offset: 0x280
}

