typedef union _anon0;
typedef struct sfObj;
typedef struct sgAnime;
typedef struct sgBone;
typedef struct sgIKHandle;
typedef struct _WallMonshoWork;
typedef struct _DoorTextWork;
typedef struct _KabeShimiWork;
typedef struct sgSVModel;
typedef struct _PlateWork;
typedef struct sfCharacter;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _PlatePos;
typedef struct _GofuShimiWork;
typedef struct _anon3;
typedef struct _WalterBody;
typedef enum sgIKSolveResult : unsigned char;
typedef struct EventFlag;
typedef struct _GAME_WORK;

typedef void(*type_0)(sfObj*);
typedef void(*type_4)(sgAnime*, int);
typedef void(*type_9)(_anon2*, int, int, float*);
typedef sgIKSolveResult(*type_24)();
typedef void(*type_31)(sfObj*);

typedef void* type_1[4];
typedef float type_2[4];
typedef float type_3[4][4];
typedef float type_5[4];
typedef unsigned char type_6[4];
typedef unsigned int type_7[4];
typedef int type_8[1];
typedef int type_10[1];
typedef unsigned int type_11[4];
typedef int type_12[1];
typedef short type_13[2];
typedef unsigned short type_14[2];
typedef int type_15[1];
typedef char type_16[4];
typedef unsigned char type_17[4];
typedef unsigned char type_18[320];
typedef float type_19[4][2];
typedef float type_20[1];
typedef int type_21[1];
typedef _anon1 type_22[5];
typedef int type_23[1];
typedef int type_25[2];
typedef _anon0 type_26[256];
typedef int type_27[1];
typedef int type_28[2][5];
typedef _PlatePos type_29[4];
typedef float type_30[4];
typedef int type_32[1];

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

struct _WallMonshoWork
{
	_anon1 chr;
};

struct _DoorTextWork
{
	_anon1 chr;
};

struct _KabeShimiWork
{
	sfCharacter chr;
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct _PlateWork
{
	sfCharacter chr;
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

struct _anon1
{
	void* texture_normal;
	void* texture_global;
	void* texture_semitrans;
	void* model_data;
	sgBone* parent_bone;
};

struct _anon2
{
	unsigned long tex0;
	unsigned long clamp;
};

struct _PlatePos
{
	short flag;
	float pos[4];
};

struct _GofuShimiWork
{
	sfCharacter chr;
};

struct _anon3
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon2*, int, int, float*);
	int equip_flag;
};

struct _WalterBody
{
	sfCharacter chr;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct EventFlag
{
	unsigned char flag[320];
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

int hand_dt[2][5];
_anon1 hand_chr[5];
EventFlag event_flag;
_anon1 text_model;
_PlatePos plate_pos[4];
_GAME_WORK gamew;
float gofu_monsho_alpha;
sfObj* cross_obj;

void HandPrintConstruct();
void HandPrintDestruct();
void HandPrintDraw();
void TextPrintConstruct();
void TextPrintDestruct();
void TextPrintDraw();
void PlateConstruct(sfObj* obj);
void PlateDestruct(sfObj* obj);
void PlateExec();
void PlateDraw(sfObj* obj);
void WalterBodyConstruct(sfObj* obj);
void WalterBodyDestruct(sfObj* obj);
void WalterBodyExec();
void WalterBodyDraw();
void GofuShimiConstruct(sfObj* obj);
void GofuShimiDestruct(sfObj* obj);
void GofuShimiExec(sfObj* obj);
void GofuShimiDraw();
void KabeShimiConstruct(sfObj* obj);
void KabeShimiDestruct(sfObj* obj);
void KabeShimiExec();
void KabeShimiDraw(sfObj* obj);
void DoorTextConstruct(sfObj* obj);
void DoorTextDestruct();
void DoorTextExec();
void DoorTextDraw(sfObj* obj);

// 
// Start address: 0x1ee2410
void HandPrintConstruct()
{
	int i;
	// Line 74, Address: 0x1ee2410, Func Offset: 0
	// Line 77, Address: 0x1ee2420, Func Offset: 0x10
	// Line 74, Address: 0x1ee2424, Func Offset: 0x14
	// Line 77, Address: 0x1ee2428, Func Offset: 0x18
	// Line 78, Address: 0x1ee2438, Func Offset: 0x28
	// Line 79, Address: 0x1ee2440, Func Offset: 0x30
	// Line 80, Address: 0x1ee2454, Func Offset: 0x44
	// Line 81, Address: 0x1ee246c, Func Offset: 0x5c
	// Line 80, Address: 0x1ee2470, Func Offset: 0x60
	// Line 81, Address: 0x1ee2474, Func Offset: 0x64
	// Line 82, Address: 0x1ee2480, Func Offset: 0x70
	// Func End, Address: 0x1ee2498, Func Offset: 0x88
}

// 
// Start address: 0x1ee24a0
void HandPrintDestruct()
{
	// Line 89, Address: 0x1ee24a0, Func Offset: 0
	// Func End, Address: 0x1ee24a8, Func Offset: 0x8
}

// 
// Start address: 0x1ee24b0
void HandPrintDraw()
{
	int i;
	// Line 102, Address: 0x1ee24b0, Func Offset: 0
	// Line 105, Address: 0x1ee24c0, Func Offset: 0x10
	// Line 102, Address: 0x1ee24c4, Func Offset: 0x14
	// Line 105, Address: 0x1ee24c8, Func Offset: 0x18
	// Line 106, Address: 0x1ee24dc, Func Offset: 0x2c
	// Line 107, Address: 0x1ee2514, Func Offset: 0x64
	// Line 108, Address: 0x1ee251c, Func Offset: 0x6c
	// Line 110, Address: 0x1ee2524, Func Offset: 0x74
	// Line 108, Address: 0x1ee2530, Func Offset: 0x80
	// Line 110, Address: 0x1ee2534, Func Offset: 0x84
	// Line 111, Address: 0x1ee253c, Func Offset: 0x8c
	// Func End, Address: 0x1ee2554, Func Offset: 0xa4
}

// 
// Start address: 0x1ee2560
void TextPrintConstruct()
{
	// Line 126, Address: 0x1ee2560, Func Offset: 0
	// Line 129, Address: 0x1ee2564, Func Offset: 0x4
	// Line 126, Address: 0x1ee2568, Func Offset: 0x8
	// Line 129, Address: 0x1ee256c, Func Offset: 0xc
	// Line 130, Address: 0x1ee2574, Func Offset: 0x14
	// Line 131, Address: 0x1ee2590, Func Offset: 0x30
	// Line 132, Address: 0x1ee25ac, Func Offset: 0x4c
	// Func End, Address: 0x1ee25b8, Func Offset: 0x58
}

// 
// Start address: 0x1ee25c0
void TextPrintDestruct()
{
	// Line 139, Address: 0x1ee25c0, Func Offset: 0
	// Func End, Address: 0x1ee25c8, Func Offset: 0x8
}

// 
// Start address: 0x1ee25d0
void TextPrintDraw()
{
	// Line 152, Address: 0x1ee25d0, Func Offset: 0
	// Line 153, Address: 0x1ee25d4, Func Offset: 0x4
	// Line 152, Address: 0x1ee25d8, Func Offset: 0x8
	// Line 153, Address: 0x1ee25dc, Func Offset: 0xc
	// Line 154, Address: 0x1ee25e4, Func Offset: 0x14
	// Line 155, Address: 0x1ee25ec, Func Offset: 0x1c
	// Func End, Address: 0x1ee25f8, Func Offset: 0x28
}

// 
// Start address: 0x1ee2600
void PlateConstruct(sfObj* obj)
{
	_PlateWork* wk;
	unsigned int model[4];
	unsigned int tex[4];
	// Line 170, Address: 0x1ee2600, Func Offset: 0
	// Line 172, Address: 0x1ee2604, Func Offset: 0x4
	// Line 170, Address: 0x1ee2608, Func Offset: 0x8
	// Line 172, Address: 0x1ee260c, Func Offset: 0xc
	// Line 170, Address: 0x1ee2610, Func Offset: 0x10
	// Line 172, Address: 0x1ee2614, Func Offset: 0x14
	// Line 170, Address: 0x1ee2618, Func Offset: 0x18
	// Line 178, Address: 0x1ee261c, Func Offset: 0x1c
	// Line 170, Address: 0x1ee2620, Func Offset: 0x20
	// Line 172, Address: 0x1ee2628, Func Offset: 0x28
	// Line 185, Address: 0x1ee262c, Func Offset: 0x2c
	// Line 178, Address: 0x1ee2630, Func Offset: 0x30
	// Line 172, Address: 0x1ee2634, Func Offset: 0x34
	// Line 178, Address: 0x1ee2638, Func Offset: 0x38
	// Line 185, Address: 0x1ee2640, Func Offset: 0x40
	// Line 186, Address: 0x1ee264c, Func Offset: 0x4c
	// Line 188, Address: 0x1ee2650, Func Offset: 0x50
	// Line 189, Address: 0x1ee2690, Func Offset: 0x90
	// Line 190, Address: 0x1ee269c, Func Offset: 0x9c
	// Func End, Address: 0x1ee26b4, Func Offset: 0xb4
}

// 
// Start address: 0x1ee26c0
void PlateDestruct(sfObj* obj)
{
	// Line 199, Address: 0x1ee26c0, Func Offset: 0
	// Func End, Address: 0x1ee26c8, Func Offset: 0x8
}

// 
// Start address: 0x1ee26d0
void PlateExec()
{
	// Line 207, Address: 0x1ee26d0, Func Offset: 0
	// Func End, Address: 0x1ee26d8, Func Offset: 0x8
}

// 
// Start address: 0x1ee26e0
void PlateDraw(sfObj* obj)
{
	_PlatePos* pl;
	_PlateWork* wk;
	float quat[4];
	int i;
	// Line 225, Address: 0x1ee26e0, Func Offset: 0
	// Line 228, Address: 0x1ee26e4, Func Offset: 0x4
	// Line 225, Address: 0x1ee26e8, Func Offset: 0x8
	// Line 231, Address: 0x1ee26ec, Func Offset: 0xc
	// Line 225, Address: 0x1ee26f0, Func Offset: 0x10
	// Line 228, Address: 0x1ee26f4, Func Offset: 0x14
	// Line 225, Address: 0x1ee26f8, Func Offset: 0x18
	// Line 228, Address: 0x1ee26fc, Func Offset: 0x1c
	// Line 231, Address: 0x1ee2704, Func Offset: 0x24
	// Line 227, Address: 0x1ee2708, Func Offset: 0x28
	// Line 233, Address: 0x1ee270c, Func Offset: 0x2c
	// Line 228, Address: 0x1ee2714, Func Offset: 0x34
	// Line 231, Address: 0x1ee2718, Func Offset: 0x38
	// Line 233, Address: 0x1ee2724, Func Offset: 0x44
	// Line 234, Address: 0x1ee2758, Func Offset: 0x78
	// Line 235, Address: 0x1ee2760, Func Offset: 0x80
	// Line 236, Address: 0x1ee2768, Func Offset: 0x88
	// Line 237, Address: 0x1ee2774, Func Offset: 0x94
	// Line 238, Address: 0x1ee2780, Func Offset: 0xa0
	// Line 240, Address: 0x1ee2788, Func Offset: 0xa8
	// Line 241, Address: 0x1ee2798, Func Offset: 0xb8
	// Func End, Address: 0x1ee27ac, Func Offset: 0xcc
}

// 
// Start address: 0x1ee27b0
void WalterBodyConstruct(sfObj* obj)
{
	_WalterBody* wk;
	// Line 254, Address: 0x1ee27b0, Func Offset: 0
	// Line 257, Address: 0x1ee27b4, Func Offset: 0x4
	// Line 254, Address: 0x1ee27b8, Func Offset: 0x8
	// Line 257, Address: 0x1ee27bc, Func Offset: 0xc
	// Line 254, Address: 0x1ee27c0, Func Offset: 0x10
	// Line 257, Address: 0x1ee27cc, Func Offset: 0x1c
	// Line 258, Address: 0x1ee27d8, Func Offset: 0x28
	// Line 259, Address: 0x1ee27e0, Func Offset: 0x30
	// Line 260, Address: 0x1ee27e8, Func Offset: 0x38
	// Line 263, Address: 0x1ee27f0, Func Offset: 0x40
	// Line 264, Address: 0x1ee27fc, Func Offset: 0x4c
	// Line 266, Address: 0x1ee2800, Func Offset: 0x50
	// Line 267, Address: 0x1ee282c, Func Offset: 0x7c
	// Line 268, Address: 0x1ee2838, Func Offset: 0x88
	// Func End, Address: 0x1ee2850, Func Offset: 0xa0
}

// 
// Start address: 0x1ee2850
void WalterBodyDestruct(sfObj* obj)
{
	// Line 277, Address: 0x1ee2850, Func Offset: 0
	// Func End, Address: 0x1ee2858, Func Offset: 0x8
}

// 
// Start address: 0x1ee2860
void WalterBodyExec()
{
	// Line 285, Address: 0x1ee2860, Func Offset: 0
	// Func End, Address: 0x1ee2868, Func Offset: 0x8
}

// 
// Start address: 0x1ee2870
void WalterBodyDraw()
{
	// Line 292, Address: 0x1ee2870, Func Offset: 0
	// Func End, Address: 0x1ee2878, Func Offset: 0x8
}

// 
// Start address: 0x1ee2880
void GofuShimiConstruct(sfObj* obj)
{
	_GofuShimiWork* wk;
	// Line 396, Address: 0x1ee2880, Func Offset: 0
	// Line 399, Address: 0x1ee2884, Func Offset: 0x4
	// Line 396, Address: 0x1ee2888, Func Offset: 0x8
	// Line 399, Address: 0x1ee2894, Func Offset: 0x14
	// Line 400, Address: 0x1ee28b8, Func Offset: 0x38
	// Line 401, Address: 0x1ee28c4, Func Offset: 0x44
	// Line 402, Address: 0x1ee28cc, Func Offset: 0x4c
	// Line 403, Address: 0x1ee28d4, Func Offset: 0x54
	// Line 405, Address: 0x1ee28d8, Func Offset: 0x58
	// Line 406, Address: 0x1ee28e4, Func Offset: 0x64
	// Line 408, Address: 0x1ee28e8, Func Offset: 0x68
	// Line 409, Address: 0x1ee2914, Func Offset: 0x94
	// Func End, Address: 0x1ee292c, Func Offset: 0xac
}

// 
// Start address: 0x1ee2930
void GofuShimiDestruct(sfObj* obj)
{
	// Line 418, Address: 0x1ee2930, Func Offset: 0
	// Func End, Address: 0x1ee2938, Func Offset: 0x8
}

// 
// Start address: 0x1ee2940
void GofuShimiExec(sfObj* obj)
{
	_GofuShimiWork* wk;
	// Line 425, Address: 0x1ee2940, Func Offset: 0
	// Line 429, Address: 0x1ee2944, Func Offset: 0x4
	// Line 425, Address: 0x1ee2948, Func Offset: 0x8
	// Line 429, Address: 0x1ee294c, Func Offset: 0xc
	// Line 430, Address: 0x1ee295c, Func Offset: 0x1c
	// Line 431, Address: 0x1ee2964, Func Offset: 0x24
	// Line 433, Address: 0x1ee2970, Func Offset: 0x30
	// Line 435, Address: 0x1ee2978, Func Offset: 0x38
	// Func End, Address: 0x1ee2984, Func Offset: 0x44
}

// 
// Start address: 0x1ee2990
void GofuShimiDraw()
{
	// Line 442, Address: 0x1ee2990, Func Offset: 0
	// Func End, Address: 0x1ee2998, Func Offset: 0x8
}

// 
// Start address: 0x1ee29a0
void KabeShimiConstruct(sfObj* obj)
{
	_KabeShimiWork* wk;
	// Line 644, Address: 0x1ee29a0, Func Offset: 0
	// Line 647, Address: 0x1ee29a4, Func Offset: 0x4
	// Line 644, Address: 0x1ee29a8, Func Offset: 0x8
	// Line 647, Address: 0x1ee29ac, Func Offset: 0xc
	// Line 644, Address: 0x1ee29b0, Func Offset: 0x10
	// Line 647, Address: 0x1ee29b8, Func Offset: 0x18
	// Line 648, Address: 0x1ee29c4, Func Offset: 0x24
	// Line 649, Address: 0x1ee29cc, Func Offset: 0x2c
	// Line 650, Address: 0x1ee29d4, Func Offset: 0x34
	// Line 651, Address: 0x1ee29dc, Func Offset: 0x3c
	// Line 653, Address: 0x1ee29e0, Func Offset: 0x40
	// Line 654, Address: 0x1ee29ec, Func Offset: 0x4c
	// Line 656, Address: 0x1ee29f0, Func Offset: 0x50
	// Line 657, Address: 0x1ee2a1c, Func Offset: 0x7c
	// Func End, Address: 0x1ee2a34, Func Offset: 0x94
}

// 
// Start address: 0x1ee2a40
void KabeShimiDestruct(sfObj* obj)
{
	// Line 666, Address: 0x1ee2a40, Func Offset: 0
	// Func End, Address: 0x1ee2a48, Func Offset: 0x8
}

// 
// Start address: 0x1ee2a50
void KabeShimiExec()
{
	// Line 674, Address: 0x1ee2a50, Func Offset: 0
	// Func End, Address: 0x1ee2a58, Func Offset: 0x8
}

// 
// Start address: 0x1ee2a60
void KabeShimiDraw(sfObj* obj)
{
	_KabeShimiWork* wk;
	// Line 680, Address: 0x1ee2a60, Func Offset: 0
	// Line 683, Address: 0x1ee2a64, Func Offset: 0x4
	// Line 680, Address: 0x1ee2a68, Func Offset: 0x8
	// Line 681, Address: 0x1ee2a74, Func Offset: 0x14
	// Line 683, Address: 0x1ee2a78, Func Offset: 0x18
	// Line 684, Address: 0x1ee2a80, Func Offset: 0x20
	// Line 685, Address: 0x1ee2a8c, Func Offset: 0x2c
	// Func End, Address: 0x1ee2aa0, Func Offset: 0x40
}

// 
// Start address: 0x1ee2aa0
void DoorTextConstruct(sfObj* obj)
{
	_DoorTextWork* wk;
	// Line 698, Address: 0x1ee2aa0, Func Offset: 0
	// Line 701, Address: 0x1ee2aa4, Func Offset: 0x4
	// Line 698, Address: 0x1ee2aa8, Func Offset: 0x8
	// Line 701, Address: 0x1ee2aac, Func Offset: 0xc
	// Line 698, Address: 0x1ee2ab0, Func Offset: 0x10
	// Line 701, Address: 0x1ee2ab4, Func Offset: 0x14
	// Line 702, Address: 0x1ee2ac0, Func Offset: 0x20
	// Line 703, Address: 0x1ee2ac8, Func Offset: 0x28
	// Line 704, Address: 0x1ee2ad0, Func Offset: 0x30
	// Line 707, Address: 0x1ee2ad8, Func Offset: 0x38
	// Line 708, Address: 0x1ee2ae4, Func Offset: 0x44
	// Line 710, Address: 0x1ee2ae8, Func Offset: 0x48
	// Line 711, Address: 0x1ee2af0, Func Offset: 0x50
	// Line 712, Address: 0x1ee2b08, Func Offset: 0x68
	// Line 713, Address: 0x1ee2b20, Func Offset: 0x80
	// Func End, Address: 0x1ee2b30, Func Offset: 0x90
}

// 
// Start address: 0x1ee2b30
void DoorTextDestruct()
{
	// Line 720, Address: 0x1ee2b30, Func Offset: 0
	// Func End, Address: 0x1ee2b38, Func Offset: 0x8
}

// 
// Start address: 0x1ee2b40
void DoorTextExec()
{
	// Line 727, Address: 0x1ee2b40, Func Offset: 0
	// Func End, Address: 0x1ee2b48, Func Offset: 0x8
}

// 
// Start address: 0x1ee2b50
void DoorTextDraw(sfObj* obj)
{
	_DoorTextWork* wk;
	// Line 733, Address: 0x1ee2b50, Func Offset: 0
	// Line 737, Address: 0x1ee2b54, Func Offset: 0x4
	// Line 733, Address: 0x1ee2b58, Func Offset: 0x8
	// Line 737, Address: 0x1ee2b60, Func Offset: 0x10
	// Line 738, Address: 0x1ee2b80, Func Offset: 0x30
	// Line 739, Address: 0x1ee2b88, Func Offset: 0x38
	// Line 740, Address: 0x1ee2b90, Func Offset: 0x40
	// Line 742, Address: 0x1ee2b98, Func Offset: 0x48
	// Func End, Address: 0x1ee2ba8, Func Offset: 0x58
}

