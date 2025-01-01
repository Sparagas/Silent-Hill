typedef enum _enum_0 : unsigned char;
typedef enum _enum_1 : unsigned char;
typedef struct _GAME_WORK;


typedef int type_0[1];
typedef int type_1[5];
typedef float type_2[4];
typedef int type_3[5];
typedef int type_4[5];
typedef float type_5[4];
typedef float type_6[4][4];
typedef int type_7[5];
typedef int type_8[1];
typedef int type_9[1];
typedef int type_10[5];
typedef int type_11[1];
typedef int type_12[1];
typedef int type_13[1];
typedef int type_14[1];
typedef int type_15[5];

enum _enum_0 : unsigned char
{
	DOOR_MAT_NONE,
	DOOR_MAT_STEEL,
	DOOR_MAT_WOOD,
	DOOR_MAT_ELEVATOR,
	DOOR_MAT_KOSHI,
	DOOR_MAT_LARGE,
	DOOR_MAT_TRAIN,
	DOOR_MAT_MAX
};

enum _enum_1 : unsigned char
{
	DOOR_SE_KIND_OPEN,
	DOOR_SE_KIND_CLOSE,
	DOOR_SE_KIND_BROKEN,
	DOOR_SE_KIND_KEY_UNLOCK,
	DOOR_SE_KIND_KEY_LOCK,
	DOOR_SE_KIND_MAX
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

int door_se_tbl_wood[5];
int door_se_tbl_steel[5];
int door_se_tbl_elevator[5];
int door_se_tbl_lattice[5];
int door_se_tbl_big[5];
int door_se_tbl_train[5];
_enum_0 close_door_se_force_call_mat;
_GAME_WORK gamew;

int DoorSeGetMatKind(_enum_0 mat, _enum_1 kind);
int DoorSeGet(int sn, int dn, _enum_1 kind);
void DoorSeCall(int sn, int dn, _enum_1 kind);
void DoorSeCallOpen(int sn, int dn);
void DoorSeCallClose(int sn, int dn);
void DoorSeCallBroken(int sn, int dn);
void DoorSeCallKeyUnLock(int sn, int dn);
void DoorSeCallKeyLock(int sn, int dn);
void DoorSeCallCloseDisable();
void DoorSeCallCloseReserve(_enum_0 mat);
void DoorSeCallOpenInstantly(_enum_0 mat);

// 
// Start address: 0x2b7520
int DoorSeGetMatKind(_enum_0 mat, _enum_1 kind)
{
	int se;
	// Line 118, Address: 0x2b7520, Func Offset: 0
	// Line 120, Address: 0x2b7548, Func Offset: 0x28
	// Line 121, Address: 0x2b755c, Func Offset: 0x3c
	// Line 122, Address: 0x2b7564, Func Offset: 0x44
	// Line 123, Address: 0x2b7568, Func Offset: 0x48
	// Line 124, Address: 0x2b757c, Func Offset: 0x5c
	// Line 125, Address: 0x2b7584, Func Offset: 0x64
	// Line 126, Address: 0x2b7588, Func Offset: 0x68
	// Line 127, Address: 0x2b759c, Func Offset: 0x7c
	// Line 128, Address: 0x2b75a4, Func Offset: 0x84
	// Line 129, Address: 0x2b75a8, Func Offset: 0x88
	// Line 130, Address: 0x2b75bc, Func Offset: 0x9c
	// Line 131, Address: 0x2b75c4, Func Offset: 0xa4
	// Line 132, Address: 0x2b75c8, Func Offset: 0xa8
	// Line 133, Address: 0x2b75dc, Func Offset: 0xbc
	// Line 134, Address: 0x2b75e4, Func Offset: 0xc4
	// Line 135, Address: 0x2b75e8, Func Offset: 0xc8
	// Line 136, Address: 0x2b75fc, Func Offset: 0xdc
	// Line 139, Address: 0x2b7604, Func Offset: 0xe4
	// Line 140, Address: 0x2b7608, Func Offset: 0xe8
	// Line 142, Address: 0x2b760c, Func Offset: 0xec
	// Line 144, Address: 0x2b7610, Func Offset: 0xf0
	// Func End, Address: 0x2b7618, Func Offset: 0xf8
}

// 
// Start address: 0x2b7620
int DoorSeGet(int sn, int dn, _enum_1 kind)
{
	int* door;
	_enum_0 mat;
	// Line 156, Address: 0x2b7620, Func Offset: 0
	// Line 160, Address: 0x2b762c, Func Offset: 0xc
	// Line 161, Address: 0x2b7634, Func Offset: 0x14
	// Line 162, Address: 0x2b763c, Func Offset: 0x1c
	// Line 163, Address: 0x2b7644, Func Offset: 0x24
	// Line 165, Address: 0x2b7648, Func Offset: 0x28
	// Line 166, Address: 0x2b7650, Func Offset: 0x30
	// Line 167, Address: 0x2b7660, Func Offset: 0x40
	// Func End, Address: 0x2b7670, Func Offset: 0x50
}

// 
// Start address: 0x2b7670
void DoorSeCall(int sn, int dn, _enum_1 kind)
{
	int se;
	// Line 178, Address: 0x2b7670, Func Offset: 0
	// Line 180, Address: 0x2b7678, Func Offset: 0x8
	// Line 181, Address: 0x2b7684, Func Offset: 0x14
	// Line 182, Address: 0x2b768c, Func Offset: 0x1c
	// Line 183, Address: 0x2b7694, Func Offset: 0x24
	// Line 184, Address: 0x2b7698, Func Offset: 0x28
	// Func End, Address: 0x2b76a4, Func Offset: 0x34
}

// 
// Start address: 0x2b76b0
void DoorSeCallOpen(int sn, int dn)
{
	// Line 195, Address: 0x2b76b0, Func Offset: 0
	// Func End, Address: 0x2b76b8, Func Offset: 0x8
}

// 
// Start address: 0x2b76c0
void DoorSeCallClose(int sn, int dn)
{
	int se;
	// Line 206, Address: 0x2b76c0, Func Offset: 0
	// Line 208, Address: 0x2b76c4, Func Offset: 0x4
	// Line 206, Address: 0x2b76c8, Func Offset: 0x8
	// Line 208, Address: 0x2b76cc, Func Offset: 0xc
	// Line 209, Address: 0x2b76d8, Func Offset: 0x18
	// Line 210, Address: 0x2b76e0, Func Offset: 0x20
	// Line 213, Address: 0x2b76e8, Func Offset: 0x28
	// Line 214, Address: 0x2b76f8, Func Offset: 0x38
	// Line 216, Address: 0x2b7700, Func Offset: 0x40
	// Func End, Address: 0x2b770c, Func Offset: 0x4c
}

// 
// Start address: 0x2b7710
void DoorSeCallBroken(int sn, int dn)
{
	// Line 227, Address: 0x2b7710, Func Offset: 0
	// Func End, Address: 0x2b7718, Func Offset: 0x8
}

// 
// Start address: 0x2b7720
void DoorSeCallKeyUnLock(int sn, int dn)
{
	// Line 239, Address: 0x2b7720, Func Offset: 0
	// Func End, Address: 0x2b7728, Func Offset: 0x8
}

// 
// Start address: 0x2b7730
void DoorSeCallKeyLock(int sn, int dn)
{
	// Line 251, Address: 0x2b7730, Func Offset: 0
	// Func End, Address: 0x2b7738, Func Offset: 0x8
}

// 
// Start address: 0x2b7740
void DoorSeCallCloseDisable()
{
	// Line 265, Address: 0x2b7740, Func Offset: 0
	// Line 266, Address: 0x2b7748, Func Offset: 0x8
	// Func End, Address: 0x2b7750, Func Offset: 0x10
}

// 
// Start address: 0x2b7750
void DoorSeCallCloseReserve(_enum_0 mat)
{
	// Line 280, Address: 0x2b7750, Func Offset: 0
	// Line 281, Address: 0x2b7754, Func Offset: 0x4
	// Line 280, Address: 0x2b7758, Func Offset: 0x8
	// Line 281, Address: 0x2b775c, Func Offset: 0xc
	// Line 282, Address: 0x2b7760, Func Offset: 0x10
	// Func End, Address: 0x2b7768, Func Offset: 0x18
}

// 
// Start address: 0x2b7770
void DoorSeCallOpenInstantly(_enum_0 mat)
{
	int se;
	// Line 291, Address: 0x2b7770, Func Offset: 0
	// Line 293, Address: 0x2b7774, Func Offset: 0x4
	// Line 291, Address: 0x2b7778, Func Offset: 0x8
	// Line 293, Address: 0x2b7780, Func Offset: 0x10
	// Line 294, Address: 0x2b7788, Func Offset: 0x18
	// Line 295, Address: 0x2b7790, Func Offset: 0x20
	// Line 296, Address: 0x2b7798, Func Offset: 0x28
	// Func End, Address: 0x2b77a8, Func Offset: 0x38
}

