typedef struct _anon0;
typedef enum _enum : unsigned char;
typedef struct _GAME_WORK;
typedef struct _anon1;
typedef enum _mergeFileIDs : unsigned char;
typedef enum _ADX_PARTITION_ID : unsigned char;


typedef int type_0[1];
typedef int type_1[1];
typedef float type_2[4];
typedef int type_3[1];
typedef unsigned char type_4[796];
typedef unsigned char type_5[484];
typedef _anon1 type_6[1];
typedef unsigned char type_7[1084];
typedef int type_8[1];
typedef int type_9[1];
typedef unsigned char type_10[884];
typedef _anon1 type_11[13];
typedef int type_12[1];
typedef unsigned char type_13[884];
typedef char type_14[128];
typedef char type_15[512];
typedef _anon1 type_16[12];
typedef char type_17[128];
typedef float type_18[4];
typedef float type_19[4][4];
typedef int type_20[1];

struct _anon0
{
	int demo_partition_idx;
	int game_partition_idx;
	int otr_partition_idx;
	unsigned char demo_pinfo[796];
	unsigned char game_pinfo[484];
	unsigned char common_pinfo[1084];
	int step;
	int demo_target_idx;
	int game_target_idx;
};

enum _enum : unsigned char
{
	GAME_STAGE_DUMMY,
	GAME_STAGE_3LDK,
	GAME_STAGE_SUBWAY,
	GAME_STAGE_FOREST,
	GAME_STAGE_WATER,
	GAME_STAGE_BUILDING,
	GAME_STAGE_HOME,
	GAME_STAGE_HOSPITAL,
	GAME_STAGE_PAST_HOME,
	GAME_STAGE_LAST,
	GAME_STAGE_TUNNEL,
	GAME_STAGE_SPIRAL,
	GAME_STAGE_TEST,
	GAME_STAGE_MAX
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

struct _anon1
{
	char* dvd_afs_name;
	char* hd_afs_name;
	_mergeFileIDs merge_file_id;
};

enum _mergeFileIDs : unsigned char
{
	AFS_XRL,
	AFS_XSB,
	AFS_XFR,
	AFS_XMZ,
	AFS_XBD,
	AFS_XIE,
	AFS_XHS,
	AFS_XCM,
	AFS_XST,
	AFS_XGT,
	AFS_XLS,
	AFS_OTR,
	AFS_FILE_ID_MAX
};

enum _ADX_PARTITION_ID : unsigned char
{
	ADX_PARTITION_ERROR = 0xff,
	ADX_PARTITION_DATA = 0,
	ADX_PARTITION_DEMO,
	ADX_PARTITION_DEBUG_BGM,
	ADX_PARTITION_DEBUG_SE,
	ADX_PARTITION_GAME,
	ADX_PARTITION_OTR
};

_anon1 demofile_partitions[13];
_anon1 gamefile_partitions[12];
_anon1 otrfile_partitions[1];
_anon0 partition_status_work;
_GAME_WORK gamew;

int DemoPartitionIdxFromGame(_enum stage);
int GamePartitionIdxFromGame(_enum stage);
int DemoPartitionAfsName(int idx, char* fname);
int GamePartitionAfsName(int idx, char* fname);
_anon0* GetStatus();
void SoundLoadPartition_BGM_SE();
void adxFilePartitionInit();
void adxFilePartitionChangeStart();
void adxFilePartitionGameChangeStart(int stage);
int adxFilePartitionChange();
_ADX_PARTITION_ID adxFilePartitionIDFromMergeFile(_mergeFileIDs merge_file_id);

// 
// Start address: 0x2bc470
int DemoPartitionIdxFromGame(_enum stage)
{
	// Line 113, Address: 0x2bc470, Func Offset: 0
	// Func End, Address: 0x2bc478, Func Offset: 0x8
}

// 
// Start address: 0x2bc480
int GamePartitionIdxFromGame(_enum stage)
{
	// Line 123, Address: 0x2bc480, Func Offset: 0
	// Func End, Address: 0x2bc488, Func Offset: 0x8
}

// 
// Start address: 0x2bc490
int DemoPartitionAfsName(int idx, char* fname)
{
	char* afs_name;
	// Line 132, Address: 0x2bc490, Func Offset: 0
	// Line 135, Address: 0x2bc4a4, Func Offset: 0x14
	// Line 136, Address: 0x2bc4b4, Func Offset: 0x24
	// Line 137, Address: 0x2bc4cc, Func Offset: 0x3c
	// Line 138, Address: 0x2bc4d4, Func Offset: 0x44
	// Line 139, Address: 0x2bc4e0, Func Offset: 0x50
	// Line 140, Address: 0x2bc4e8, Func Offset: 0x58
	// Line 141, Address: 0x2bc4f0, Func Offset: 0x60
	// Line 142, Address: 0x2bc50c, Func Offset: 0x7c
	// Line 143, Address: 0x2bc514, Func Offset: 0x84
	// Line 144, Address: 0x2bc520, Func Offset: 0x90
	// Line 145, Address: 0x2bc534, Func Offset: 0xa4
	// Line 147, Address: 0x2bc540, Func Offset: 0xb0
	// Line 148, Address: 0x2bc548, Func Offset: 0xb8
	// Func End, Address: 0x2bc55c, Func Offset: 0xcc
}

// 
// Start address: 0x2bc560
int GamePartitionAfsName(int idx, char* fname)
{
	char* afs_name;
	// Line 157, Address: 0x2bc560, Func Offset: 0
	// Line 160, Address: 0x2bc574, Func Offset: 0x14
	// Line 161, Address: 0x2bc584, Func Offset: 0x24
	// Line 162, Address: 0x2bc59c, Func Offset: 0x3c
	// Line 163, Address: 0x2bc5a4, Func Offset: 0x44
	// Line 164, Address: 0x2bc5b0, Func Offset: 0x50
	// Line 165, Address: 0x2bc5b8, Func Offset: 0x58
	// Line 166, Address: 0x2bc5c0, Func Offset: 0x60
	// Line 167, Address: 0x2bc5dc, Func Offset: 0x7c
	// Line 168, Address: 0x2bc5e4, Func Offset: 0x84
	// Line 169, Address: 0x2bc5f0, Func Offset: 0x90
	// Line 170, Address: 0x2bc604, Func Offset: 0xa4
	// Line 172, Address: 0x2bc610, Func Offset: 0xb0
	// Line 173, Address: 0x2bc618, Func Offset: 0xb8
	// Func End, Address: 0x2bc62c, Func Offset: 0xcc
}

// 
// Start address: 0x2bc630
_anon0* GetStatus()
{
	// Line 179, Address: 0x2bc630, Func Offset: 0
	// Line 180, Address: 0x2bc634, Func Offset: 0x4
	// Func End, Address: 0x2bc63c, Func Offset: 0xc
}

// 
// Start address: 0x2bc640
void SoundLoadPartition_BGM_SE()
{
	char realPath[128];
	unsigned char ptinfo_se[884];
	unsigned char ptinfo_bgm[884];
	// Line 185, Address: 0x2bc640, Func Offset: 0
	// Line 196, Address: 0x2bc648, Func Offset: 0x8
	// Line 197, Address: 0x2bc65c, Func Offset: 0x1c
	// Line 198, Address: 0x2bc66c, Func Offset: 0x2c
	// Line 199, Address: 0x2bc678, Func Offset: 0x38
	// Line 200, Address: 0x2bc680, Func Offset: 0x40
	// Line 202, Address: 0x2bc690, Func Offset: 0x50
	// Line 203, Address: 0x2bc6a4, Func Offset: 0x64
	// Line 205, Address: 0x2bc6b8, Func Offset: 0x78
	// Line 206, Address: 0x2bc6cc, Func Offset: 0x8c
	// Line 207, Address: 0x2bc6dc, Func Offset: 0x9c
	// Line 208, Address: 0x2bc6e8, Func Offset: 0xa8
	// Line 209, Address: 0x2bc6f0, Func Offset: 0xb0
	// Line 211, Address: 0x2bc700, Func Offset: 0xc0
	// Line 212, Address: 0x2bc714, Func Offset: 0xd4
	// Line 213, Address: 0x2bc728, Func Offset: 0xe8
	// Func End, Address: 0x2bc734, Func Offset: 0xf4
}

// 
// Start address: 0x2bc740
void adxFilePartitionInit()
{
	_anon0* stat;
	// Line 218, Address: 0x2bc740, Func Offset: 0
	// Line 219, Address: 0x2bc748, Func Offset: 0x8
	// Line 220, Address: 0x2bc750, Func Offset: 0x10
	// Line 219, Address: 0x2bc754, Func Offset: 0x14
	// Line 220, Address: 0x2bc758, Func Offset: 0x18
	// Line 221, Address: 0x2bc75c, Func Offset: 0x1c
	// Line 225, Address: 0x2bc760, Func Offset: 0x20
	// Line 227, Address: 0x2bc770, Func Offset: 0x30
	// Line 229, Address: 0x2bc780, Func Offset: 0x40
	// Line 230, Address: 0x2bc784, Func Offset: 0x44
	// Line 239, Address: 0x2bc788, Func Offset: 0x48
	// Line 240, Address: 0x2bc798, Func Offset: 0x58
	// Line 243, Address: 0x2bc7a0, Func Offset: 0x60
	// Func End, Address: 0x2bc7b0, Func Offset: 0x70
}

// 
// Start address: 0x2bc7b0
void adxFilePartitionChangeStart()
{
	_anon0* stat;
	int stage;
	// Line 269, Address: 0x2bc7b0, Func Offset: 0
	// Line 270, Address: 0x2bc7b8, Func Offset: 0x8
	// Line 271, Address: 0x2bc7c0, Func Offset: 0x10
	// Line 273, Address: 0x2bc7c8, Func Offset: 0x18
	// Line 274, Address: 0x2bc7d4, Func Offset: 0x24
	// Line 275, Address: 0x2bc7e0, Func Offset: 0x30
	// Line 276, Address: 0x2bc7e4, Func Offset: 0x34
	// Func End, Address: 0x2bc7f0, Func Offset: 0x40
}

// 
// Start address: 0x2bc7f0
void adxFilePartitionGameChangeStart(int stage)
{
	_anon0* stat;
	// Line 285, Address: 0x2bc7f0, Func Offset: 0
	// Line 286, Address: 0x2bc7f8, Func Offset: 0x8
	// Line 289, Address: 0x2bc804, Func Offset: 0x14
	// Line 290, Address: 0x2bc810, Func Offset: 0x20
	// Line 291, Address: 0x2bc818, Func Offset: 0x28
	// Func End, Address: 0x2bc824, Func Offset: 0x34
}

// 
// Start address: 0x2bc830
int adxFilePartitionChange()
{
	_anon0* stat;
	int need_idx;
	char afs_name[128];
	// Line 302, Address: 0x2bc830, Func Offset: 0
	// Line 303, Address: 0x2bc838, Func Offset: 0x8
	// Line 307, Address: 0x2bc844, Func Offset: 0x14
	// Line 308, Address: 0x2bc86c, Func Offset: 0x3c
	// Line 309, Address: 0x2bc870, Func Offset: 0x40
	// Line 310, Address: 0x2bc878, Func Offset: 0x48
	// Line 313, Address: 0x2bc880, Func Offset: 0x50
	// Line 315, Address: 0x2bc890, Func Offset: 0x60
	// Line 319, Address: 0x2bc898, Func Offset: 0x68
	// Line 321, Address: 0x2bc89c, Func Offset: 0x6c
	// Line 323, Address: 0x2bc8a8, Func Offset: 0x78
	// Line 326, Address: 0x2bc8b0, Func Offset: 0x80
	// Line 327, Address: 0x2bc8c0, Func Offset: 0x90
	// Line 328, Address: 0x2bc8c4, Func Offset: 0x94
	// Line 329, Address: 0x2bc8cc, Func Offset: 0x9c
	// Line 332, Address: 0x2bc8d0, Func Offset: 0xa0
	// Line 333, Address: 0x2bc8e0, Func Offset: 0xb0
	// Line 334, Address: 0x2bc8e4, Func Offset: 0xb4
	// Line 333, Address: 0x2bc8e8, Func Offset: 0xb8
	// Line 334, Address: 0x2bc8ec, Func Offset: 0xbc
	// Line 337, Address: 0x2bc8f0, Func Offset: 0xc0
	// Line 339, Address: 0x2bc900, Func Offset: 0xd0
	// Line 340, Address: 0x2bc904, Func Offset: 0xd4
	// Line 339, Address: 0x2bc908, Func Offset: 0xd8
	// Line 340, Address: 0x2bc90c, Func Offset: 0xdc
	// Line 344, Address: 0x2bc910, Func Offset: 0xe0
	// Line 346, Address: 0x2bc914, Func Offset: 0xe4
	// Line 348, Address: 0x2bc920, Func Offset: 0xf0
	// Line 351, Address: 0x2bc928, Func Offset: 0xf8
	// Line 352, Address: 0x2bc938, Func Offset: 0x108
	// Line 353, Address: 0x2bc93c, Func Offset: 0x10c
	// Line 354, Address: 0x2bc944, Func Offset: 0x114
	// Line 357, Address: 0x2bc948, Func Offset: 0x118
	// Line 358, Address: 0x2bc958, Func Offset: 0x128
	// Line 359, Address: 0x2bc95c, Func Offset: 0x12c
	// Line 358, Address: 0x2bc960, Func Offset: 0x130
	// Line 359, Address: 0x2bc964, Func Offset: 0x134
	// Line 362, Address: 0x2bc968, Func Offset: 0x138
	// Line 365, Address: 0x2bc978, Func Offset: 0x148
	// Line 366, Address: 0x2bc97c, Func Offset: 0x14c
	// Line 365, Address: 0x2bc980, Func Offset: 0x150
	// Line 366, Address: 0x2bc984, Func Offset: 0x154
	// Line 369, Address: 0x2bc988, Func Offset: 0x158
	// Line 372, Address: 0x2bc990, Func Offset: 0x160
	// Line 373, Address: 0x2bc998, Func Offset: 0x168
	// Func End, Address: 0x2bc9a8, Func Offset: 0x178
}

// 
// Start address: 0x2bc9b0
_ADX_PARTITION_ID adxFilePartitionIDFromMergeFile(_mergeFileIDs merge_file_id)
{
	_anon0* stat;
	_anon1* pdata;
	int pt_data_idx;
	// Line 383, Address: 0x2bc9b0, Func Offset: 0
	// Line 384, Address: 0x2bc9b8, Func Offset: 0x8
	// Line 389, Address: 0x2bc9c4, Func Offset: 0x14
	// Line 390, Address: 0x2bc9cc, Func Offset: 0x1c
	// Line 392, Address: 0x2bc9d8, Func Offset: 0x28
	// Line 393, Address: 0x2bc9e4, Func Offset: 0x34
	// Line 398, Address: 0x2bc9f0, Func Offset: 0x40
	// Line 399, Address: 0x2bc9f4, Func Offset: 0x44
	// Line 400, Address: 0x2bc9fc, Func Offset: 0x4c
	// Line 401, Address: 0x2bca10, Func Offset: 0x60
	// Line 402, Address: 0x2bca1c, Func Offset: 0x6c
	// Line 403, Address: 0x2bca24, Func Offset: 0x74
	// Line 406, Address: 0x2bca28, Func Offset: 0x78
	// Line 407, Address: 0x2bca2c, Func Offset: 0x7c
	// Line 408, Address: 0x2bca34, Func Offset: 0x84
	// Line 409, Address: 0x2bca48, Func Offset: 0x98
	// Line 410, Address: 0x2bca54, Func Offset: 0xa4
	// Line 411, Address: 0x2bca5c, Func Offset: 0xac
	// Line 413, Address: 0x2bca60, Func Offset: 0xb0
	// Line 414, Address: 0x2bca68, Func Offset: 0xb8
	// Func End, Address: 0x2bca74, Func Offset: 0xc4
}

