typedef struct _seSlotInfo;
typedef struct _anon0;
typedef struct _anon1;
typedef struct _GAME_WORK;
typedef struct sfObj;
typedef enum EnemySeKind : unsigned char;
typedef union _anon2;
typedef enum EnemyKind : unsigned char;
typedef struct _seSceneData;

typedef void(*type_13)(sfObj*);
typedef void(*type_19)(sfObj*);

typedef float type_0[4];
typedef int type_1[1];
typedef _anon0 type_2[1];
typedef _seSlotInfo type_3[3];
typedef int type_4[21];
typedef _anon0 type_5[3];
typedef int type_6[1];
typedef int type_7[1];
typedef int type_8[3];
typedef _anon0* type_9[13];
typedef _anon0 type_10[3];
typedef int type_11[1];
typedef _anon2 type_12[256];
typedef int type_14[1];
typedef _anon0 type_15[3];
typedef float type_16[4];
typedef float type_17[4][4];
typedef int type_18[12];
typedef EnemySeKind type_20[3];
typedef _anon0 type_21[2];
typedef int* type_22[13];
typedef _anon0 type_23[3];
typedef _anon0 type_24[3];
typedef _anon0 type_25[2];
typedef short type_26[2];
typedef _anon0 type_27[3];
typedef unsigned short type_28[2];
typedef char type_29[4];
typedef unsigned char type_30[4];
typedef int type_31[22];
typedef _anon0 type_32[4];
typedef float type_33[1];
typedef int type_34[1];
typedef int type_35[1];
typedef _seSceneData type_36[3];
typedef int type_37[1];
typedef _anon0 type_38[3];
typedef int type_39[1];
typedef _anon0 type_40[3];
typedef int type_41[3];
typedef _anon0* type_42[1];

struct _seSlotInfo
{
	int entry_kind;
	int data_id;
};

struct _anon0
{
	int data_id;
	int se_slot;
};

struct _anon1
{
	void* start_addr;
	void* end_addr;
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

enum EnemySeKind : unsigned char
{
	ENEMY_SE_KIND_NOTHING,
	ENEMY_SE_KIND_CELL,
	ENEMY_SE_KIND_MUSH,
	ENEMY_SE_KIND_BUZZ,
	ENEMY_SE_KIND_MM,
	ENEMY_SE_KIND_WALLMAN,
	ENEMY_SE_KIND_WHEEL,
	ENEMY_SE_KIND_JINMEN,
	ENEMY_SE_KIND_TWINS,
	ENEMY_SE_KIND_HIL,
	ENEMY_SE_KIND_HYENA,
	ENEMY_SE_KIND_MULTI,
	ENEMY_SE_KIND_PICKGIRL,
	ENEMY_SE_KIND_FLAMES,
	ENEMY_SE_KIND_FAT,
	ENEMY_SE_KIND_SCRATCH,
	ENEMY_SE_KIND_KILLER0,
	ENEMY_SE_KIND_KILLER1,
	ENEMY_SE_KIND_KILLER2,
	ENEMY_SE_KIND_KILLER3,
	ENEMY_SE_KIND_NURSE,
	ENEMY_SE_KIND_MAX
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

enum EnemyKind : unsigned char
{
	ENEMY_KIND_NOTHING,
	ENEMY_KIND_CELL,
	ENEMY_KIND_MUSH,
	ENEMY_KIND_BUZZ,
	ENEMY_KIND_MM,
	ENEMY_KIND_WALLMAN,
	ENEMY_KIND_WHEEL,
	ENEMY_KIND_JINMEN,
	ENEMY_KIND_TWINS,
	ENEMY_KIND_HIL,
	ENEMY_KIND_HYENA,
	ENEMY_KIND_MULTI,
	ENEMY_KIND_PICKGIRL,
	ENEMY_KIND_FLAMES,
	ENEMY_KIND_FAT,
	ENEMY_KIND_SCRATCH,
	ENEMY_KIND_KILLER,
	ENEMY_KIND_NURSE,
	ENEMY_KIND_SAMPLE,
	ENEMY_KIND_MAX,
	ENEMY_KIND_TEST00 = 0,
	ENEMY_KIND_ALL = 0x13
};

struct _seSceneData
{
	int seq_data_id;
	int vab_data_id;
};

int sd_se_file[1];
_anon0 start_se_data[2];
_anon0* sd_se_data[1];
int stage_se_file[12];
_anon0 rl_stage_se_data[4];
_anon0 sb_stage_se_data[3];
_anon0 fr_stage_se_data[3];
_anon0 mz_stage_se_data[3];
_anon0 bd_stage_se_data[3];
_anon0 ie_stage_se_data[3];
_anon0 hs_stage_se_data[3];
_anon0 cm_stage_se_data[3];
_anon0 ls_stage_se_data[3];
_anon0 gt_stage_se_data[1];
_anon0 st_stage_se_data[2];
_seSceneData fr_scene_se_data[3];
_anon0* stage_se_data[13];
int enemy_se_data[22];
int ls_se_data_enemy[21];
int* se_data_enemy[13];
_anon1 data_addr_check;
int se_load_no;
int se_load_step;
_seSlotInfo se_slot_info[3];
_GAME_WORK gamew;
int load_count;
int enTotal;
int enemyID[3];

void SeDataAddrCheckStart();
void SeDataAddrCheckEnd();
void SeDataAddrCheckFreeMemory();
void sfSoundDataLoadSet(int data_no);
int sfSoundDataLoadSetEndCheck();
void sfSoundDataStageLoad();
void sfSoundDataStageSet();
int sfSoundDataGetSceneEnemyDataID(EnemyKind en_kind);
int sfSoundDataGetSceneEnemy(int* en_id);
void UpdateEnemyVabFile(int en_id);
int sfSoundDataEntryEnemy(int slot_no, int en_id);
int sfSoundDataCheckSceneEnemy(int* en_id, int en_kind_num);
void sfSoundDataSceneEnemyDataLoad(int* en_id, int en_kind_num);
void sfSoundDataEntrySceneEnemy(int* en_id, int en_kind_num);
void sfSoundDataLoadSceneData();
void sfSoundDataSetSceneData();
int sfSoundDataSetEndCheck();

// 
// Start address: 0x2c5560
void SeDataAddrCheckStart()
{
	// Line 262, Address: 0x2c5560, Func Offset: 0
	// Line 267, Address: 0x2c5568, Func Offset: 0x8
	// Line 268, Address: 0x2c5578, Func Offset: 0x18
	// Line 269, Address: 0x2c5588, Func Offset: 0x28
	// Func End, Address: 0x2c5594, Func Offset: 0x34
}

// 
// Start address: 0x2c55a0
void SeDataAddrCheckEnd()
{
	// Line 273, Address: 0x2c55a0, Func Offset: 0
	// Line 274, Address: 0x2c55a8, Func Offset: 0x8
	// Line 275, Address: 0x2c55b8, Func Offset: 0x18
	// Func End, Address: 0x2c55c4, Func Offset: 0x24
}

// 
// Start address: 0x2c55d0
void SeDataAddrCheckFreeMemory()
{
	void* current_addr;
	// Line 279, Address: 0x2c55d0, Func Offset: 0
	// Line 281, Address: 0x2c55d4, Func Offset: 0x4
	// Line 279, Address: 0x2c55d8, Func Offset: 0x8
	// Line 281, Address: 0x2c55dc, Func Offset: 0xc
	// Line 283, Address: 0x2c55e8, Func Offset: 0x18
	// Line 285, Address: 0x2c55f8, Func Offset: 0x28
	// Line 286, Address: 0x2c5604, Func Offset: 0x34
	// Line 287, Address: 0x2c560c, Func Offset: 0x3c
	// Line 288, Address: 0x2c5614, Func Offset: 0x44
	// Line 289, Address: 0x2c5618, Func Offset: 0x48
	// Line 290, Address: 0x2c5620, Func Offset: 0x50
	// Line 291, Address: 0x2c5628, Func Offset: 0x58
	// Func End, Address: 0x2c5634, Func Offset: 0x64
}

// 
// Start address: 0x2c5640
void sfSoundDataLoadSet(int data_no)
{
	// Line 298, Address: 0x2c5640, Func Offset: 0
	// Line 299, Address: 0x2c5648, Func Offset: 0x8
	// Line 300, Address: 0x2c564c, Func Offset: 0xc
	// Line 301, Address: 0x2c5654, Func Offset: 0x14
	// Line 303, Address: 0x2c5658, Func Offset: 0x18
	// Line 302, Address: 0x2c5660, Func Offset: 0x20
	// Line 304, Address: 0x2c5668, Func Offset: 0x28
	// Func End, Address: 0x2c5670, Func Offset: 0x30
}

// 
// Start address: 0x2c5670
int sfSoundDataLoadSetEndCheck()
{
	_anon0* se_data;
	int n;
	int slot_no;
	char* data;
	// Line 307, Address: 0x2c5670, Func Offset: 0
	// Line 314, Address: 0x2c5674, Func Offset: 0x4
	// Line 307, Address: 0x2c5678, Func Offset: 0x8
	// Line 314, Address: 0x2c567c, Func Offset: 0xc
	// Line 307, Address: 0x2c5680, Func Offset: 0x10
	// Line 314, Address: 0x2c5690, Func Offset: 0x20
	// Line 316, Address: 0x2c56b0, Func Offset: 0x40
	// Line 318, Address: 0x2c56b8, Func Offset: 0x48
	// Line 319, Address: 0x2c56c0, Func Offset: 0x50
	// Line 320, Address: 0x2c56e0, Func Offset: 0x70
	// Line 321, Address: 0x2c56e8, Func Offset: 0x78
	// Line 322, Address: 0x2c56f8, Func Offset: 0x88
	// Line 325, Address: 0x2c5700, Func Offset: 0x90
	// Line 328, Address: 0x2c5710, Func Offset: 0xa0
	// Line 329, Address: 0x2c572c, Func Offset: 0xbc
	// Line 330, Address: 0x2c5730, Func Offset: 0xc0
	// Line 333, Address: 0x2c5738, Func Offset: 0xc8
	// Line 334, Address: 0x2c5744, Func Offset: 0xd4
	// Line 337, Address: 0x2c574c, Func Offset: 0xdc
	// Line 338, Address: 0x2c575c, Func Offset: 0xec
	// Line 340, Address: 0x2c5768, Func Offset: 0xf8
	// Line 341, Address: 0x2c576c, Func Offset: 0xfc
	// Line 342, Address: 0x2c5780, Func Offset: 0x110
	// Line 343, Address: 0x2c5788, Func Offset: 0x118
	// Line 344, Address: 0x2c5790, Func Offset: 0x120
	// Line 345, Address: 0x2c579c, Func Offset: 0x12c
	// Line 346, Address: 0x2c57a0, Func Offset: 0x130
	// Line 347, Address: 0x2c57b0, Func Offset: 0x140
	// Line 349, Address: 0x2c57b8, Func Offset: 0x148
	// Line 350, Address: 0x2c57c8, Func Offset: 0x158
	// Line 353, Address: 0x2c57d0, Func Offset: 0x160
	// Line 354, Address: 0x2c57e0, Func Offset: 0x170
	// Line 355, Address: 0x2c57e8, Func Offset: 0x178
	// Line 356, Address: 0x2c57f0, Func Offset: 0x180
	// Line 359, Address: 0x2c57fc, Func Offset: 0x18c
	// Line 360, Address: 0x2c5800, Func Offset: 0x190
	// Line 361, Address: 0x2c5808, Func Offset: 0x198
	// Func End, Address: 0x2c5824, Func Offset: 0x1b4
}

// 
// Start address: 0x2c5830
void sfSoundDataStageLoad()
{
	int file_id;
	// Line 377, Address: 0x2c5830, Func Offset: 0
	// Line 381, Address: 0x2c5834, Func Offset: 0x4
	// Line 377, Address: 0x2c5838, Func Offset: 0x8
	// Line 381, Address: 0x2c583c, Func Offset: 0xc
	// Line 377, Address: 0x2c5840, Func Offset: 0x10
	// Line 381, Address: 0x2c5844, Func Offset: 0x14
	// Line 382, Address: 0x2c5854, Func Offset: 0x24
	// Line 383, Address: 0x2c585c, Func Offset: 0x2c
	// Line 384, Address: 0x2c5864, Func Offset: 0x34
	// Line 385, Address: 0x2c5870, Func Offset: 0x40
	// Line 386, Address: 0x2c5878, Func Offset: 0x48
	// Func End, Address: 0x2c5888, Func Offset: 0x58
}

// 
// Start address: 0x2c5890
void sfSoundDataStageSet()
{
	int stage_no;
	int seq_no;
	_anon0* se_data;
	int slot_no;
	char* data;
	// Line 393, Address: 0x2c5890, Func Offset: 0
	// Line 398, Address: 0x2c5894, Func Offset: 0x4
	// Line 393, Address: 0x2c5898, Func Offset: 0x8
	// Line 398, Address: 0x2c589c, Func Offset: 0xc
	// Line 393, Address: 0x2c58a0, Func Offset: 0x10
	// Line 398, Address: 0x2c58a4, Func Offset: 0x14
	// Line 393, Address: 0x2c58a8, Func Offset: 0x18
	// Line 398, Address: 0x2c58ac, Func Offset: 0x1c
	// Line 393, Address: 0x2c58b0, Func Offset: 0x20
	// Line 398, Address: 0x2c58b4, Func Offset: 0x24
	// Line 400, Address: 0x2c58bc, Func Offset: 0x2c
	// Line 402, Address: 0x2c58c0, Func Offset: 0x30
	// Line 400, Address: 0x2c58c4, Func Offset: 0x34
	// Line 402, Address: 0x2c58c8, Func Offset: 0x38
	// Line 401, Address: 0x2c58cc, Func Offset: 0x3c
	// Line 402, Address: 0x2c58d4, Func Offset: 0x44
	// Line 403, Address: 0x2c58e0, Func Offset: 0x50
	// Line 404, Address: 0x2c58e8, Func Offset: 0x58
	// Line 410, Address: 0x2c58f0, Func Offset: 0x60
	// Line 411, Address: 0x2c58fc, Func Offset: 0x6c
	// Line 414, Address: 0x2c5904, Func Offset: 0x74
	// Line 415, Address: 0x2c590c, Func Offset: 0x7c
	// Line 416, Address: 0x2c591c, Func Offset: 0x8c
	// Line 417, Address: 0x2c5924, Func Offset: 0x94
	// Line 418, Address: 0x2c5928, Func Offset: 0x98
	// Line 419, Address: 0x2c5938, Func Offset: 0xa8
	// Line 421, Address: 0x2c594c, Func Offset: 0xbc
	// Line 423, Address: 0x2c5954, Func Offset: 0xc4
	// Line 425, Address: 0x2c5970, Func Offset: 0xe0
	// Line 426, Address: 0x2c5980, Func Offset: 0xf0
	// Line 428, Address: 0x2c5988, Func Offset: 0xf8
	// Line 430, Address: 0x2c5998, Func Offset: 0x108
	// Line 432, Address: 0x2c59a0, Func Offset: 0x110
	// Line 434, Address: 0x2c59a8, Func Offset: 0x118
	// Line 435, Address: 0x2c59b8, Func Offset: 0x128
	// Line 437, Address: 0x2c59c0, Func Offset: 0x130
	// Line 440, Address: 0x2c59d4, Func Offset: 0x144
	// Line 441, Address: 0x2c59ec, Func Offset: 0x15c
	// Line 442, Address: 0x2c59f8, Func Offset: 0x168
	// Line 443, Address: 0x2c5a08, Func Offset: 0x178
	// Line 447, Address: 0x2c5a10, Func Offset: 0x180
	// Func End, Address: 0x2c5a2c, Func Offset: 0x19c
}

// 
// Start address: 0x2c5a30
int sfSoundDataGetSceneEnemyDataID(EnemyKind en_kind)
{
	int* scene_data;
	// Line 558, Address: 0x2c5a30, Func Offset: 0
	// Line 560, Address: 0x2c5a4c, Func Offset: 0x1c
	// Line 566, Address: 0x2c5a68, Func Offset: 0x38
	// Func End, Address: 0x2c5a70, Func Offset: 0x40
}

// 
// Start address: 0x2c5a70
int sfSoundDataGetSceneEnemy(int* en_id)
{
	EnemySeKind enKind[3];
	int enKindNum;
	int enDataID;
	int enDataNum;
	int i;
	int j;
	int exist;
	// Line 669, Address: 0x2c5a70, Func Offset: 0
	// Line 679, Address: 0x2c5a74, Func Offset: 0x4
	// Line 669, Address: 0x2c5a78, Func Offset: 0x8
	// Line 682, Address: 0x2c5a7c, Func Offset: 0xc
	// Line 669, Address: 0x2c5a80, Func Offset: 0x10
	// Line 679, Address: 0x2c5a8c, Func Offset: 0x1c
	// Line 682, Address: 0x2c5a90, Func Offset: 0x20
	// Line 681, Address: 0x2c5a94, Func Offset: 0x24
	// Line 682, Address: 0x2c5a9c, Func Offset: 0x2c
	// Line 683, Address: 0x2c5aa8, Func Offset: 0x38
	// Line 689, Address: 0x2c5ac0, Func Offset: 0x50
	// Line 690, Address: 0x2c5acc, Func Offset: 0x5c
	// Line 693, Address: 0x2c5ad8, Func Offset: 0x68
	// Line 695, Address: 0x2c5ae4, Func Offset: 0x74
	// Line 697, Address: 0x2c5aec, Func Offset: 0x7c
	// Line 698, Address: 0x2c5b00, Func Offset: 0x90
	// Line 700, Address: 0x2c5b08, Func Offset: 0x98
	// Line 706, Address: 0x2c5b14, Func Offset: 0xa4
	// Line 708, Address: 0x2c5b28, Func Offset: 0xb8
	// Line 709, Address: 0x2c5b2c, Func Offset: 0xbc
	// Func End, Address: 0x2c5b40, Func Offset: 0xd0
}

// 
// Start address: 0x2c5b40
void UpdateEnemyVabFile(int en_id)
{
	void* data;
	int arc_id;
	// Line 714, Address: 0x2c5b40, Func Offset: 0
	// Line 717, Address: 0x2c5b4c, Func Offset: 0xc
	// Line 718, Address: 0x2c5b54, Func Offset: 0x14
	// Line 719, Address: 0x2c5b5c, Func Offset: 0x1c
	// Line 720, Address: 0x2c5b64, Func Offset: 0x24
	// Line 721, Address: 0x2c5b6c, Func Offset: 0x2c
	// Line 722, Address: 0x2c5b70, Func Offset: 0x30
	// Func End, Address: 0x2c5b80, Func Offset: 0x40
}

// 
// Start address: 0x2c5b80
int sfSoundDataEntryEnemy(int slot_no, int en_id)
{
	char* data;
	// Line 728, Address: 0x2c5b80, Func Offset: 0
	// Line 733, Address: 0x2c5b90, Func Offset: 0x10
	// Line 734, Address: 0x2c5b98, Func Offset: 0x18
	// Line 735, Address: 0x2c5ba4, Func Offset: 0x24
	// Line 736, Address: 0x2c5bac, Func Offset: 0x2c
	// Line 737, Address: 0x2c5bb0, Func Offset: 0x30
	// Line 738, Address: 0x2c5bbc, Func Offset: 0x3c
	// Line 739, Address: 0x2c5bc4, Func Offset: 0x44
	// Line 740, Address: 0x2c5bcc, Func Offset: 0x4c
	// Line 741, Address: 0x2c5bd4, Func Offset: 0x54
	// Line 748, Address: 0x2c5bd8, Func Offset: 0x58
	// Line 749, Address: 0x2c5be8, Func Offset: 0x68
	// Line 752, Address: 0x2c5bf0, Func Offset: 0x70
	// Line 753, Address: 0x2c5bf8, Func Offset: 0x78
	// Func End, Address: 0x2c5c0c, Func Offset: 0x8c
}

// 
// Start address: 0x2c5c10
int sfSoundDataCheckSceneEnemy(int* en_id, int en_kind_num)
{
	int i;
	int j;
	int exist;
	// Line 766, Address: 0x2c5c10, Func Offset: 0
	// Line 779, Address: 0x2c5c1c, Func Offset: 0xc
	// Line 788, Address: 0x2c5c20, Func Offset: 0x10
	// Line 766, Address: 0x2c5c24, Func Offset: 0x14
	// Line 767, Address: 0x2c5c28, Func Offset: 0x18
	// Line 769, Address: 0x2c5c2c, Func Offset: 0x1c
	// Line 770, Address: 0x2c5c34, Func Offset: 0x24
	// Line 773, Address: 0x2c5c38, Func Offset: 0x28
	// Line 776, Address: 0x2c5c40, Func Offset: 0x30
	// Line 778, Address: 0x2c5c50, Func Offset: 0x40
	// Line 779, Address: 0x2c5c5c, Func Offset: 0x4c
	// Line 780, Address: 0x2c5c60, Func Offset: 0x50
	// Line 782, Address: 0x2c5c64, Func Offset: 0x54
	// Line 783, Address: 0x2c5c68, Func Offset: 0x58
	// Line 785, Address: 0x2c5c70, Func Offset: 0x60
	// Line 786, Address: 0x2c5c80, Func Offset: 0x70
	// Line 788, Address: 0x2c5c88, Func Offset: 0x78
	// Line 790, Address: 0x2c5c8c, Func Offset: 0x7c
	// Line 793, Address: 0x2c5ca0, Func Offset: 0x90
	// Func End, Address: 0x2c5ca8, Func Offset: 0x98
}

// 
// Start address: 0x2c5cb0
void sfSoundDataSceneEnemyDataLoad(int* en_id, int en_kind_num)
{
	int i;
	// Line 799, Address: 0x2c5cb0, Func Offset: 0
	// Line 803, Address: 0x2c5cb4, Func Offset: 0x4
	// Line 799, Address: 0x2c5cb8, Func Offset: 0x8
	// Line 803, Address: 0x2c5ccc, Func Offset: 0x1c
	// Line 804, Address: 0x2c5cd0, Func Offset: 0x20
	// Line 805, Address: 0x2c5ce4, Func Offset: 0x34
	// Line 808, Address: 0x2c5cec, Func Offset: 0x3c
	// Line 809, Address: 0x2c5cf4, Func Offset: 0x44
	// Line 810, Address: 0x2c5d08, Func Offset: 0x58
	// Func End, Address: 0x2c5d20, Func Offset: 0x70
}

// 
// Start address: 0x2c5d20
void sfSoundDataEntrySceneEnemy(int* en_id, int en_kind_num)
{
	int entry;
	int i;
	int j;
	// Line 815, Address: 0x2c5d20, Func Offset: 0
	// Line 819, Address: 0x2c5d24, Func Offset: 0x4
	// Line 815, Address: 0x2c5d28, Func Offset: 0x8
	// Line 819, Address: 0x2c5d44, Func Offset: 0x24
	// Line 820, Address: 0x2c5d48, Func Offset: 0x28
	// Line 821, Address: 0x2c5d5c, Func Offset: 0x3c
	// Line 827, Address: 0x2c5d64, Func Offset: 0x44
	// Line 828, Address: 0x2c5d6c, Func Offset: 0x4c
	// Line 829, Address: 0x2c5d70, Func Offset: 0x50
	// Line 830, Address: 0x2c5d7c, Func Offset: 0x5c
	// Line 835, Address: 0x2c5d98, Func Offset: 0x78
	// Line 837, Address: 0x2c5d9c, Func Offset: 0x7c
	// Line 838, Address: 0x2c5da4, Func Offset: 0x84
	// Line 837, Address: 0x2c5da8, Func Offset: 0x88
	// Line 839, Address: 0x2c5db4, Func Offset: 0x94
	// Line 837, Address: 0x2c5db8, Func Offset: 0x98
	// Line 839, Address: 0x2c5dbc, Func Offset: 0x9c
	// Line 842, Address: 0x2c5dc0, Func Offset: 0xa0
	// Line 840, Address: 0x2c5dc4, Func Offset: 0xa4
	// Line 842, Address: 0x2c5dcc, Func Offset: 0xac
	// Line 843, Address: 0x2c5dd8, Func Offset: 0xb8
	// Line 845, Address: 0x2c5de0, Func Offset: 0xc0
	// Line 846, Address: 0x2c5df0, Func Offset: 0xd0
	// Line 850, Address: 0x2c5dfc, Func Offset: 0xdc
	// Line 851, Address: 0x2c5e04, Func Offset: 0xe4
	// Line 852, Address: 0x2c5e14, Func Offset: 0xf4
	// Line 857, Address: 0x2c5e34, Func Offset: 0x114
	// Line 859, Address: 0x2c5e38, Func Offset: 0x118
	// Line 861, Address: 0x2c5e4c, Func Offset: 0x12c
	// Line 859, Address: 0x2c5e50, Func Offset: 0x130
	// Line 861, Address: 0x2c5e54, Func Offset: 0x134
	// Line 864, Address: 0x2c5e58, Func Offset: 0x138
	// Line 862, Address: 0x2c5e5c, Func Offset: 0x13c
	// Line 864, Address: 0x2c5e64, Func Offset: 0x144
	// Line 865, Address: 0x2c5e70, Func Offset: 0x150
	// Line 867, Address: 0x2c5e78, Func Offset: 0x158
	// Line 868, Address: 0x2c5e88, Func Offset: 0x168
	// Line 870, Address: 0x2c5e98, Func Offset: 0x178
	// Line 871, Address: 0x2c5ea8, Func Offset: 0x188
	// Line 872, Address: 0x2c5eb8, Func Offset: 0x198
	// Line 875, Address: 0x2c5ec0, Func Offset: 0x1a0
	// Func End, Address: 0x2c5ee0, Func Offset: 0x1c0
}

// 
// Start address: 0x2c5ee0
void sfSoundDataLoadSceneData()
{
	// Line 907, Address: 0x2c5ee0, Func Offset: 0
	// Line 909, Address: 0x2c5ee4, Func Offset: 0x4
	// Line 907, Address: 0x2c5ee8, Func Offset: 0x8
	// Line 909, Address: 0x2c5eec, Func Offset: 0xc
	// Line 911, Address: 0x2c5ef0, Func Offset: 0x10
	// Line 913, Address: 0x2c5f04, Func Offset: 0x24
	// Line 915, Address: 0x2c5f0c, Func Offset: 0x2c
	// Line 916, Address: 0x2c5f1c, Func Offset: 0x3c
	// Line 915, Address: 0x2c5f20, Func Offset: 0x40
	// Line 916, Address: 0x2c5f24, Func Offset: 0x44
	// Line 917, Address: 0x2c5f3c, Func Offset: 0x5c
	// Line 918, Address: 0x2c5f48, Func Offset: 0x68
	// Line 920, Address: 0x2c5f50, Func Offset: 0x70
	// Func End, Address: 0x2c5f5c, Func Offset: 0x7c
}

// 
// Start address: 0x2c5f60
void sfSoundDataSetSceneData()
{
	// Line 926, Address: 0x2c5f60, Func Offset: 0
	// Func End, Address: 0x2c5f74, Func Offset: 0x14
}

// 
// Start address: 0x2c5f80
int sfSoundDataSetEndCheck()
{
	// Line 943, Address: 0x2c5f80, Func Offset: 0
	// Line 944, Address: 0x2c5f84, Func Offset: 0x4
	// Line 943, Address: 0x2c5f88, Func Offset: 0x8
	// Line 944, Address: 0x2c5f8c, Func Offset: 0xc
	// Line 945, Address: 0x2c5f98, Func Offset: 0x18
	// Line 946, Address: 0x2c5fa0, Func Offset: 0x20
	// Line 949, Address: 0x2c5fa8, Func Offset: 0x28
	// Line 951, Address: 0x2c5fb8, Func Offset: 0x38
	// Line 952, Address: 0x2c5fc0, Func Offset: 0x40
	// Line 954, Address: 0x2c5fc8, Func Offset: 0x48
	// Line 955, Address: 0x2c5fd0, Func Offset: 0x50
	// Func End, Address: 0x2c5fdc, Func Offset: 0x5c
}

