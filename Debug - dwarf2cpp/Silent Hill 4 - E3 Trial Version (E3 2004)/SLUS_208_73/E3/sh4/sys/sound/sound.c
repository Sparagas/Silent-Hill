typedef struct _SD_SPECIAL_AREA;
typedef struct _SD_TRACK_DATA;
typedef union _anon0;
typedef struct _anon1;
typedef struct _NEAR_TRACK_DATA;
typedef struct _SOUND_SYSTEM_INFORMATION;
typedef struct sfObj;
typedef union _anon2;
typedef struct _SD_TRACK_WORK;
typedef struct _soundSystemSDBInfo;
typedef struct _GAME_WORK;
typedef struct _SD_STREAM_MANAGER;
typedef struct _SD_TRACK_MANAGER;
typedef enum _cam3Step : unsigned char;
typedef struct _SD_RADIO_MANAGER;
typedef struct _cam3Work;
typedef struct _SD_ADX_TRACK;
typedef struct _SD_TRACK_AREA;
typedef struct _SOUND_SYSTEM_DATA;
typedef struct _SD_SEQ_ADX_MANAGER;

typedef void(*type_0)(sfObj*);
typedef void(*type_15)(sfObj*);
typedef void(*type_24)(sfObj*);
typedef void(*type_26)();

typedef void(*type_1)(sfObj*)[3];
typedef _SD_ADX_TRACK type_2[2];
typedef _SD_RADIO_MANAGER type_3[4];
typedef int type_4[9];
typedef int type_5[7];
typedef int type_6[1];
typedef unsigned long type_7[8];
typedef _SD_TRACK_MANAGER type_8[8];
typedef int type_9[1];
typedef char type_10[8];
typedef char type_11[8];
typedef char type_12[256];
typedef int type_13[1];
typedef _anon2 type_14[256];
typedef char type_16[32];
typedef int type_17[1];
typedef _NEAR_TRACK_DATA type_18[32];
typedef _soundSystemSDBInfo type_19[24];
typedef char type_20[256];
typedef float type_21[9];
typedef int type_22[1];
typedef int type_23[1];
typedef int type_25[1];
typedef char type_27[128];
typedef short type_28[2];
typedef void(*type_29)()[2];
typedef unsigned short type_30[2];
typedef char type_31[4];
typedef unsigned char type_32[4];
typedef float type_33[4];
typedef float type_34[4][4];
typedef unsigned char type_35[9600];
typedef float type_36[1];
typedef int type_37[1];
typedef int type_38[13];
typedef float type_39[4];

struct _SD_SPECIAL_AREA
{
	int track;
	int no;
	int percent;
	int spFlags;
	int fadeType;
	int volumeType;
	float volume;
	int stopType;
	int playPage;
	int dummy[7];
};

struct _SD_TRACK_DATA
{
	_SD_TRACK_AREA area;
	int block_id;
	short kind;
	short flags;
	_anon0 u;
};

union _anon0
{
	unsigned long stat[8];
	_SD_SPECIAL_AREA sa;
};

struct _anon1
{
	int read_type;
	int media_type;
	int debug;
	int res;
};

struct _NEAR_TRACK_DATA
{
	char inVol[8];
	char outVol[8];
};

struct _SOUND_SYSTEM_INFORMATION
{
	int fDVDUse;
	int fSoundOn;
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

struct _SD_TRACK_WORK
{
	_SD_TRACK_DATA* td_ary;
	float chara_pos[4];
	float half_w;
	int page;
	int near_area_num;
	_NEAR_TRACK_DATA near_track_ary[32];
};

struct _soundSystemSDBInfo
{
	int id;
	char name[32];
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

struct _SD_STREAM_MANAGER
{
	int fActive;
	int fPause;
	int track;
	int fQueueing;
};

struct _SD_TRACK_MANAGER
{
	int status;
	int fade_in_type;
	int fade_out_type;
	float volume;
};

enum _cam3Step : unsigned char
{
	CAM3_STEP_NORMAL,
	CAM3_STEP_AUTOFOCUS,
	CAM3_STEP_RESET,
	CAM3_STEP_STOP
};

struct _SD_RADIO_MANAGER
{
	int stat;
	int fadeType;
	float volume;
	float pan;
	short pitch;
	float targetVolume;
};

struct _cam3Work
{
	_cam3Step step;
	float mtx[4][4];
	float rot[4];
	float lookat[4];
	int run;
	int forceRotate;
};

struct _SD_ADX_TRACK
{
	int stat;
	int before_stat;
	int adx_no;
	int adx_next_no;
	int vol_stat;
	int vol_next_stat;
	int fade_out_type;
	int stop_type;
	int stop_next_type;
	float next_volume;
	float genPos[4];
	float radius;
};

struct _SD_TRACK_AREA
{
	float x0;
	float z0;
	float x1;
	float z1;
	float min_y;
	float max_y;
};

struct _SOUND_SYSTEM_DATA
{
	int fPlaySystemActive;
	int seqTrgLoadStep;
	int nowStage;
	int newStage;
	int nowStageForSE;
	int nowStageForEnemySE;
	int nowStageForReverb;
	int fAfterSdbLoadInit;
	int fAfterSdbLoadEnd;
	int fNowSeLoading;
	int fNowEnemySeLoading;
	int fNowReverbSetting;
	int fNowPreProcessMcMv;
	int page;
	int monoType;
	unsigned char* sdb_buf;
	void* sd_load_buf;
	int tool_update;
	int pauseStatus;
	int menuVolumeStatus;
	int movieStart;
};

struct _SD_SEQ_ADX_MANAGER
{
	_SD_ADX_TRACK track[2];
	int seq_stat;
	int seq_no;
	int seq_next_no;
	int seq_vol_stat;
	int seq_vol_next_stat;
	int seq_now_trg;
	int seq_fade_out_type;
	int seq_fLoadOnly;
	float seq_next_volume;
};

void(*camInitFuncs)()[2];
void(*camera_main_funcs)(sfObj*)[3];
_soundSystemSDBInfo ss_sdb_info[24];
int voiceTable[13];
_SD_SEQ_ADX_MANAGER seqAdxMan;
_SOUND_SYSTEM_DATA ssd;
_GAME_WORK gamew;
_SD_STREAM_MANAGER streamMan;
_SD_TRACK_MANAGER trackMan[8];
float track_fade_time[9];
_SD_TRACK_WORK trWork;
unsigned char sdb_buf[9600];
_SD_RADIO_MANAGER radioMan[4];
_SOUND_SYSTEM_INFORMATION ssi;
_cam3Work cam3_work;

void adxSoundStopStart();
int adxSoundStopWait();
void ToolDataUpdateStart();
void ToolDataUpdate();
void soundSystemToolDataUpdate();
int soundSystemToolDataUpdateWait();
void StreamStatusCheck();
void sdMenuExec();
void sdSequeceExec();
void adxVolumeControl();
void soundSystemMain();
void sfSoundSystemColdInit();
void sfSoundSystemHotInit();
void sdInitAfterSdbFileLoad();
int soundSystemToolGetStageID(int game_stage_id);
void sdInitBeforeSceneChange();
void sdInitAfterSceneChange();
int sfSdInit();
void sfSdVSync();
int sfSdCheckVoice(int no);
void sfSdPause(int mode);
char* sdGetRootPath();
int sfIsDVDUse();
void sfTurnOnDVD(int flag);
int sfIsSoundOn();
void sfTurnOnSound(int flag);

// 
// Start address: 0x1fe220
void adxSoundStopStart()
{
	int i;
	// Line 138, Address: 0x1fe220, Func Offset: 0
	// Line 140, Address: 0x1fe230, Func Offset: 0x10
	// Line 145, Address: 0x1fe240, Func Offset: 0x20
	// Line 147, Address: 0x1fe24c, Func Offset: 0x2c
	// Line 149, Address: 0x1fe258, Func Offset: 0x38
	// Line 150, Address: 0x1fe268, Func Offset: 0x48
	// Func End, Address: 0x1fe27c, Func Offset: 0x5c
}

// 
// Start address: 0x1fe280
int adxSoundStopWait()
{
	// Line 157, Address: 0x1fe280, Func Offset: 0
	// Line 158, Address: 0x1fe290, Func Offset: 0x10
	// Line 169, Address: 0x1fe308, Func Offset: 0x88
	// Line 172, Address: 0x1fe310, Func Offset: 0x90
	// Line 173, Address: 0x1fe318, Func Offset: 0x98
	// Func End, Address: 0x1fe324, Func Offset: 0xa4
}

// 
// Start address: 0x1fe330
void ToolDataUpdateStart()
{
	// Line 179, Address: 0x1fe330, Func Offset: 0
	// Line 180, Address: 0x1fe338, Func Offset: 0x8
	// Func End, Address: 0x1fe340, Func Offset: 0x10
}

// 
// Start address: 0x1fe340
void ToolDataUpdate()
{
	int stage_no;
	char realPath[128];
	// Line 187, Address: 0x1fe340, Func Offset: 0
	// Line 194, Address: 0x1fe344, Func Offset: 0x4
	// Line 187, Address: 0x1fe348, Func Offset: 0x8
	// Line 194, Address: 0x1fe350, Func Offset: 0x10
	// Line 196, Address: 0x1fe358, Func Offset: 0x18
	// Line 201, Address: 0x1fe390, Func Offset: 0x50
	// Line 202, Address: 0x1fe3b4, Func Offset: 0x74
	// Line 201, Address: 0x1fe3b8, Func Offset: 0x78
	// Line 202, Address: 0x1fe3c4, Func Offset: 0x84
	// Line 204, Address: 0x1fe3d0, Func Offset: 0x90
	// Line 207, Address: 0x1fe3e0, Func Offset: 0xa0
	// Line 208, Address: 0x1fe3f4, Func Offset: 0xb4
	// Line 212, Address: 0x1fe400, Func Offset: 0xc0
	// Line 214, Address: 0x1fe408, Func Offset: 0xc8
	// Line 215, Address: 0x1fe418, Func Offset: 0xd8
	// Line 219, Address: 0x1fe420, Func Offset: 0xe0
	// Line 221, Address: 0x1fe430, Func Offset: 0xf0
	// Line 225, Address: 0x1fe440, Func Offset: 0x100
	// Line 227, Address: 0x1fe470, Func Offset: 0x130
	// Line 228, Address: 0x1fe47c, Func Offset: 0x13c
	// Line 231, Address: 0x1fe484, Func Offset: 0x144
	// Line 230, Address: 0x1fe488, Func Offset: 0x148
	// Line 231, Address: 0x1fe48c, Func Offset: 0x14c
	// Line 230, Address: 0x1fe490, Func Offset: 0x150
	// Line 231, Address: 0x1fe494, Func Offset: 0x154
	// Line 230, Address: 0x1fe498, Func Offset: 0x158
	// Line 231, Address: 0x1fe49c, Func Offset: 0x15c
	// Line 232, Address: 0x1fe4a0, Func Offset: 0x160
	// Line 235, Address: 0x1fe4a8, Func Offset: 0x168
	// Line 236, Address: 0x1fe4b0, Func Offset: 0x170
	// Line 237, Address: 0x1fe4b4, Func Offset: 0x174
	// Line 236, Address: 0x1fe4b8, Func Offset: 0x178
	// Line 237, Address: 0x1fe4bc, Func Offset: 0x17c
	// Line 239, Address: 0x1fe4c4, Func Offset: 0x184
	// Line 243, Address: 0x1fe4cc, Func Offset: 0x18c
	// Line 244, Address: 0x1fe4d0, Func Offset: 0x190
	// Func End, Address: 0x1fe4e0, Func Offset: 0x1a0
}

// 
// Start address: 0x1fe4e0
void soundSystemToolDataUpdate()
{
	// Line 250, Address: 0x1fe4e0, Func Offset: 0
	// Func End, Address: 0x1fe4e8, Func Offset: 0x8
}

// 
// Start address: 0x1fe4f0
int soundSystemToolDataUpdateWait()
{
	// Line 258, Address: 0x1fe4f0, Func Offset: 0
	// Line 260, Address: 0x1fe4fc, Func Offset: 0xc
	// Func End, Address: 0x1fe504, Func Offset: 0x14
}

// 
// Start address: 0x1fe510
void StreamStatusCheck()
{
	int i;
	int stat;
	// Line 265, Address: 0x1fe510, Func Offset: 0
	// Line 269, Address: 0x1fe520, Func Offset: 0x10
	// Line 265, Address: 0x1fe524, Func Offset: 0x14
	// Line 269, Address: 0x1fe528, Func Offset: 0x18
	// Line 270, Address: 0x1fe538, Func Offset: 0x28
	// Line 279, Address: 0x1fe544, Func Offset: 0x34
	// Line 282, Address: 0x1fe558, Func Offset: 0x48
	// Line 283, Address: 0x1fe568, Func Offset: 0x58
	// Line 284, Address: 0x1fe56c, Func Offset: 0x5c
	// Line 283, Address: 0x1fe570, Func Offset: 0x60
	// Line 285, Address: 0x1fe574, Func Offset: 0x64
	// Line 286, Address: 0x1fe580, Func Offset: 0x70
	// Line 290, Address: 0x1fe584, Func Offset: 0x74
	// Line 292, Address: 0x1fe5a4, Func Offset: 0x94
	// Line 293, Address: 0x1fe5b4, Func Offset: 0xa4
	// Line 294, Address: 0x1fe5b8, Func Offset: 0xa8
	// Line 295, Address: 0x1fe5c0, Func Offset: 0xb0
	// Line 297, Address: 0x1fe5c8, Func Offset: 0xb8
	// Line 298, Address: 0x1fe5cc, Func Offset: 0xbc
	// Line 299, Address: 0x1fe5d4, Func Offset: 0xc4
	// Line 301, Address: 0x1fe5d8, Func Offset: 0xc8
	// Line 299, Address: 0x1fe5e0, Func Offset: 0xd0
	// Line 301, Address: 0x1fe5e4, Func Offset: 0xd4
	// Line 302, Address: 0x1fe5ec, Func Offset: 0xdc
	// Func End, Address: 0x1fe604, Func Offset: 0xf4
}

// 
// Start address: 0x1fe610
void sdMenuExec()
{
	int volume;
	float master;
	// Line 309, Address: 0x1fe610, Func Offset: 0
	// Line 314, Address: 0x1fe614, Func Offset: 0x4
	// Line 309, Address: 0x1fe618, Func Offset: 0x8
	// Line 314, Address: 0x1fe61c, Func Offset: 0xc
	// Line 309, Address: 0x1fe620, Func Offset: 0x10
	// Line 314, Address: 0x1fe628, Func Offset: 0x18
	// Line 317, Address: 0x1fe650, Func Offset: 0x40
	// Line 318, Address: 0x1fe678, Func Offset: 0x68
	// Line 319, Address: 0x1fe690, Func Offset: 0x80
	// Line 320, Address: 0x1fe694, Func Offset: 0x84
	// Line 321, Address: 0x1fe698, Func Offset: 0x88
	// Line 322, Address: 0x1fe6a0, Func Offset: 0x90
	// Line 325, Address: 0x1fe6a8, Func Offset: 0x98
	// Line 326, Address: 0x1fe6d0, Func Offset: 0xc0
	// Line 327, Address: 0x1fe6ec, Func Offset: 0xdc
	// Line 329, Address: 0x1fe6f0, Func Offset: 0xe0
	// Line 330, Address: 0x1fe6f8, Func Offset: 0xe8
	// Line 333, Address: 0x1fe700, Func Offset: 0xf0
	// Line 334, Address: 0x1fe728, Func Offset: 0x118
	// Line 335, Address: 0x1fe73c, Func Offset: 0x12c
	// Line 337, Address: 0x1fe740, Func Offset: 0x130
	// Line 345, Address: 0x1fe748, Func Offset: 0x138
	// Line 346, Address: 0x1fe758, Func Offset: 0x148
	// Line 347, Address: 0x1fe784, Func Offset: 0x174
	// Line 348, Address: 0x1fe794, Func Offset: 0x184
	// Line 349, Address: 0x1fe79c, Func Offset: 0x18c
	// Line 350, Address: 0x1fe7a8, Func Offset: 0x198
	// Line 351, Address: 0x1fe7b4, Func Offset: 0x1a4
	// Line 352, Address: 0x1fe7c0, Func Offset: 0x1b0
	// Line 354, Address: 0x1fe7cc, Func Offset: 0x1bc
	// Line 357, Address: 0x1fe7d0, Func Offset: 0x1c0
	// Line 359, Address: 0x1fe7f4, Func Offset: 0x1e4
	// Line 360, Address: 0x1fe7f8, Func Offset: 0x1e8
	// Line 363, Address: 0x1fe814, Func Offset: 0x204
	// Line 365, Address: 0x1fe81c, Func Offset: 0x20c
	// Line 366, Address: 0x1fe820, Func Offset: 0x210
	// Line 367, Address: 0x1fe840, Func Offset: 0x230
	// Line 373, Address: 0x1fe844, Func Offset: 0x234
	// Line 374, Address: 0x1fe848, Func Offset: 0x238
	// Func End, Address: 0x1fe85c, Func Offset: 0x24c
}

// 
// Start address: 0x1fe860
void sdSequeceExec()
{
	int i;
	// Line 376, Address: 0x1fe860, Func Offset: 0
	// Line 378, Address: 0x1fe86c, Func Offset: 0xc
	// Line 376, Address: 0x1fe870, Func Offset: 0x10
	// Line 378, Address: 0x1fe87c, Func Offset: 0x1c
	// Line 379, Address: 0x1fe884, Func Offset: 0x24
	// Line 380, Address: 0x1fe890, Func Offset: 0x30
	// Line 381, Address: 0x1fe8ac, Func Offset: 0x4c
	// Line 380, Address: 0x1fe8b0, Func Offset: 0x50
	// Line 381, Address: 0x1fe8c4, Func Offset: 0x64
	// Line 382, Address: 0x1fe8d0, Func Offset: 0x70
	// Line 383, Address: 0x1fe8d4, Func Offset: 0x74
	// Line 384, Address: 0x1fe8d8, Func Offset: 0x78
	// Line 385, Address: 0x1fe8e4, Func Offset: 0x84
	// Line 386, Address: 0x1fe8f4, Func Offset: 0x94
	// Line 387, Address: 0x1fe900, Func Offset: 0xa0
	// Line 386, Address: 0x1fe904, Func Offset: 0xa4
	// Line 387, Address: 0x1fe908, Func Offset: 0xa8
	// Line 390, Address: 0x1fe918, Func Offset: 0xb8
	// Line 391, Address: 0x1fe928, Func Offset: 0xc8
	// Line 392, Address: 0x1fe934, Func Offset: 0xd4
	// Line 393, Address: 0x1fe93c, Func Offset: 0xdc
	// Line 394, Address: 0x1fe950, Func Offset: 0xf0
	// Line 397, Address: 0x1fe958, Func Offset: 0xf8
	// Line 398, Address: 0x1fe96c, Func Offset: 0x10c
	// Line 399, Address: 0x1fe978, Func Offset: 0x118
	// Line 401, Address: 0x1fe99c, Func Offset: 0x13c
	// Line 399, Address: 0x1fe9a0, Func Offset: 0x140
	// Line 402, Address: 0x1fe9a4, Func Offset: 0x144
	// Line 403, Address: 0x1fe9ac, Func Offset: 0x14c
	// Line 405, Address: 0x1fe9bc, Func Offset: 0x15c
	// Line 406, Address: 0x1fe9c8, Func Offset: 0x168
	// Line 408, Address: 0x1fe9f8, Func Offset: 0x198
	// Line 409, Address: 0x1fea14, Func Offset: 0x1b4
	// Line 412, Address: 0x1fea18, Func Offset: 0x1b8
	// Line 413, Address: 0x1fea2c, Func Offset: 0x1cc
	// Line 415, Address: 0x1fea3c, Func Offset: 0x1dc
	// Line 416, Address: 0x1fea48, Func Offset: 0x1e8
	// Line 419, Address: 0x1fea78, Func Offset: 0x218
	// Line 420, Address: 0x1fea90, Func Offset: 0x230
	// Line 421, Address: 0x1fea94, Func Offset: 0x234
	// Line 431, Address: 0x1fea98, Func Offset: 0x238
	// Line 432, Address: 0x1feaa4, Func Offset: 0x244
	// Line 433, Address: 0x1feab4, Func Offset: 0x254
	// Line 434, Address: 0x1feab8, Func Offset: 0x258
	// Func End, Address: 0x1feacc, Func Offset: 0x26c
}

// 
// Start address: 0x1fead0
void adxVolumeControl()
{
	int i;
	// Line 438, Address: 0x1fead0, Func Offset: 0
	// Line 441, Address: 0x1feae4, Func Offset: 0x14
	// Line 438, Address: 0x1feae8, Func Offset: 0x18
	// Line 441, Address: 0x1feaec, Func Offset: 0x1c
	// Line 443, Address: 0x1feb04, Func Offset: 0x34
	// Line 444, Address: 0x1feb10, Func Offset: 0x40
	// Line 445, Address: 0x1feb28, Func Offset: 0x58
	// Line 444, Address: 0x1feb2c, Func Offset: 0x5c
	// Line 445, Address: 0x1feb40, Func Offset: 0x70
	// Line 446, Address: 0x1feb4c, Func Offset: 0x7c
	// Line 448, Address: 0x1feb50, Func Offset: 0x80
	// Line 449, Address: 0x1feb5c, Func Offset: 0x8c
	// Line 450, Address: 0x1feb74, Func Offset: 0xa4
	// Line 451, Address: 0x1feb7c, Func Offset: 0xac
	// Line 452, Address: 0x1feb8c, Func Offset: 0xbc
	// Line 453, Address: 0x1feb90, Func Offset: 0xc0
	// Line 454, Address: 0x1feb98, Func Offset: 0xc8
	// Line 456, Address: 0x1feba4, Func Offset: 0xd4
	// Line 457, Address: 0x1febb0, Func Offset: 0xe0
	// Line 465, Address: 0x1febc4, Func Offset: 0xf4
	// Line 466, Address: 0x1febdc, Func Offset: 0x10c
	// Line 468, Address: 0x1fec0c, Func Offset: 0x13c
	// Line 466, Address: 0x1fec10, Func Offset: 0x140
	// Line 469, Address: 0x1fec14, Func Offset: 0x144
	// Line 470, Address: 0x1fec1c, Func Offset: 0x14c
	// Line 472, Address: 0x1fec28, Func Offset: 0x158
	// Line 473, Address: 0x1fec30, Func Offset: 0x160
	// Line 475, Address: 0x1fec60, Func Offset: 0x190
	// Line 476, Address: 0x1fec7c, Func Offset: 0x1ac
	// Line 479, Address: 0x1fec80, Func Offset: 0x1b0
	// Line 480, Address: 0x1fec90, Func Offset: 0x1c0
	// Line 482, Address: 0x1fec9c, Func Offset: 0x1cc
	// Line 483, Address: 0x1feca8, Func Offset: 0x1d8
	// Line 485, Address: 0x1fecd8, Func Offset: 0x208
	// Line 486, Address: 0x1fecf0, Func Offset: 0x220
	// Line 490, Address: 0x1fecf4, Func Offset: 0x224
	// Line 494, Address: 0x1fecfc, Func Offset: 0x22c
	// Line 495, Address: 0x1fed00, Func Offset: 0x230
	// Line 497, Address: 0x1fed0c, Func Offset: 0x23c
	// Line 498, Address: 0x1fed10, Func Offset: 0x240
	// Line 503, Address: 0x1fed24, Func Offset: 0x254
	// Line 504, Address: 0x1fed28, Func Offset: 0x258
	// Line 508, Address: 0x1fed38, Func Offset: 0x268
	// Line 511, Address: 0x1fed4c, Func Offset: 0x27c
	// Line 513, Address: 0x1fed54, Func Offset: 0x284
	// Line 516, Address: 0x1fed98, Func Offset: 0x2c8
	// Line 518, Address: 0x1fedb0, Func Offset: 0x2e0
	// Line 520, Address: 0x1fedc0, Func Offset: 0x2f0
	// Line 524, Address: 0x1fedc8, Func Offset: 0x2f8
	// Line 520, Address: 0x1fedd0, Func Offset: 0x300
	// Line 524, Address: 0x1fedd4, Func Offset: 0x304
	// Line 525, Address: 0x1feddc, Func Offset: 0x30c
	// Func End, Address: 0x1fedf8, Func Offset: 0x328
}

// 
// Start address: 0x1fee00
void soundSystemMain()
{
	float chara_pos[4];
	int i;
	int j;
	int in;
	int out;
	int work;
	int fade_prio[9];
	// Line 533, Address: 0x1fee00, Func Offset: 0
	// Line 583, Address: 0x1fee08, Func Offset: 0x8
	// Line 585, Address: 0x1fee10, Func Offset: 0x10
	// Line 591, Address: 0x1fee20, Func Offset: 0x20
	// Line 592, Address: 0x1fee28, Func Offset: 0x28
	// Line 593, Address: 0x1fee34, Func Offset: 0x34
	// Line 594, Address: 0x1fee3c, Func Offset: 0x3c
	// Line 595, Address: 0x1fee48, Func Offset: 0x48
	// Line 597, Address: 0x1fee58, Func Offset: 0x58
	// Line 605, Address: 0x1fee60, Func Offset: 0x60
	// Line 608, Address: 0x1fee6c, Func Offset: 0x6c
	// Line 605, Address: 0x1fee70, Func Offset: 0x70
	// Line 608, Address: 0x1fee74, Func Offset: 0x74
	// Line 611, Address: 0x1fee7c, Func Offset: 0x7c
	// Line 619, Address: 0x1fee90, Func Offset: 0x90
	// Line 613, Address: 0x1fee94, Func Offset: 0x94
	// Line 619, Address: 0x1fee98, Func Offset: 0x98
	// Line 613, Address: 0x1fee9c, Func Offset: 0x9c
	// Line 629, Address: 0x1feea0, Func Offset: 0xa0
	// Line 628, Address: 0x1feea4, Func Offset: 0xa4
	// Line 613, Address: 0x1feea8, Func Offset: 0xa8
	// Line 612, Address: 0x1feeac, Func Offset: 0xac
	// Line 613, Address: 0x1feeb4, Func Offset: 0xb4
	// Line 615, Address: 0x1feec0, Func Offset: 0xc0
	// Line 614, Address: 0x1feec8, Func Offset: 0xc8
	// Line 615, Address: 0x1feecc, Func Offset: 0xcc
	// Line 616, Address: 0x1feee8, Func Offset: 0xe8
	// Line 617, Address: 0x1feeec, Func Offset: 0xec
	// Line 619, Address: 0x1feef0, Func Offset: 0xf0
	// Line 618, Address: 0x1feef8, Func Offset: 0xf8
	// Line 619, Address: 0x1feefc, Func Offset: 0xfc
	// Line 620, Address: 0x1fef18, Func Offset: 0x118
	// Line 622, Address: 0x1fef1c, Func Offset: 0x11c
	// Line 623, Address: 0x1fef30, Func Offset: 0x130
	// Line 624, Address: 0x1fef38, Func Offset: 0x138
	// Line 627, Address: 0x1fef44, Func Offset: 0x144
	// Line 628, Address: 0x1fef54, Func Offset: 0x154
	// Line 629, Address: 0x1fef68, Func Offset: 0x168
	// Line 630, Address: 0x1fef6c, Func Offset: 0x16c
	// Line 631, Address: 0x1fef70, Func Offset: 0x170
	// Line 634, Address: 0x1fef74, Func Offset: 0x174
	// Line 638, Address: 0x1fef88, Func Offset: 0x188
	// Line 641, Address: 0x1fef90, Func Offset: 0x190
	// Line 644, Address: 0x1fef98, Func Offset: 0x198
	// Line 648, Address: 0x1fefa0, Func Offset: 0x1a0
	// Line 651, Address: 0x1fefa8, Func Offset: 0x1a8
	// Line 654, Address: 0x1fefb0, Func Offset: 0x1b0
	// Line 663, Address: 0x1fefb8, Func Offset: 0x1b8
	// Func End, Address: 0x1fefc4, Func Offset: 0x1c4
}

// 
// Start address: 0x1fefd0
void sfSoundSystemColdInit()
{
	// Line 670, Address: 0x1fefd0, Func Offset: 0
	// Line 671, Address: 0x1fefd4, Func Offset: 0x4
	// Line 670, Address: 0x1fefd8, Func Offset: 0x8
	// Line 671, Address: 0x1fefdc, Func Offset: 0xc
	// Line 674, Address: 0x1fefec, Func Offset: 0x1c
	// Line 677, Address: 0x1feff0, Func Offset: 0x20
	// Line 674, Address: 0x1feff4, Func Offset: 0x24
	// Line 676, Address: 0x1ff000, Func Offset: 0x30
	// Line 675, Address: 0x1ff004, Func Offset: 0x34
	// Line 677, Address: 0x1ff008, Func Offset: 0x38
	// Line 675, Address: 0x1ff00c, Func Offset: 0x3c
	// Line 676, Address: 0x1ff018, Func Offset: 0x48
	// Line 677, Address: 0x1ff024, Func Offset: 0x54
	// Line 680, Address: 0x1ff034, Func Offset: 0x64
	// Line 683, Address: 0x1ff038, Func Offset: 0x68
	// Line 680, Address: 0x1ff03c, Func Offset: 0x6c
	// Line 683, Address: 0x1ff040, Func Offset: 0x70
	// Line 686, Address: 0x1ff048, Func Offset: 0x78
	// Line 687, Address: 0x1ff058, Func Offset: 0x88
	// Line 688, Address: 0x1ff068, Func Offset: 0x98
	// Line 689, Address: 0x1ff078, Func Offset: 0xa8
	// Func End, Address: 0x1ff084, Func Offset: 0xb4
}

// 
// Start address: 0x1ff090
void sfSoundSystemHotInit()
{
	int volume;
	// Line 696, Address: 0x1ff090, Func Offset: 0
	// Line 701, Address: 0x1ff094, Func Offset: 0x4
	// Line 696, Address: 0x1ff098, Func Offset: 0x8
	// Line 701, Address: 0x1ff09c, Func Offset: 0xc
	// Line 705, Address: 0x1ff0a8, Func Offset: 0x18
	// Line 704, Address: 0x1ff0ac, Func Offset: 0x1c
	// Line 705, Address: 0x1ff0b0, Func Offset: 0x20
	// Line 714, Address: 0x1ff0b4, Func Offset: 0x24
	// Line 704, Address: 0x1ff0b8, Func Offset: 0x28
	// Line 726, Address: 0x1ff0bc, Func Offset: 0x2c
	// Line 704, Address: 0x1ff0c0, Func Offset: 0x30
	// Line 706, Address: 0x1ff0c4, Func Offset: 0x34
	// Line 707, Address: 0x1ff0cc, Func Offset: 0x3c
	// Line 708, Address: 0x1ff0d4, Func Offset: 0x44
	// Line 709, Address: 0x1ff0dc, Func Offset: 0x4c
	// Line 710, Address: 0x1ff0e4, Func Offset: 0x54
	// Line 711, Address: 0x1ff0ec, Func Offset: 0x5c
	// Line 712, Address: 0x1ff0f4, Func Offset: 0x64
	// Line 713, Address: 0x1ff0fc, Func Offset: 0x6c
	// Line 714, Address: 0x1ff104, Func Offset: 0x74
	// Line 715, Address: 0x1ff10c, Func Offset: 0x7c
	// Line 716, Address: 0x1ff114, Func Offset: 0x84
	// Line 720, Address: 0x1ff11c, Func Offset: 0x8c
	// Line 721, Address: 0x1ff124, Func Offset: 0x94
	// Line 722, Address: 0x1ff12c, Func Offset: 0x9c
	// Line 723, Address: 0x1ff134, Func Offset: 0xa4
	// Line 724, Address: 0x1ff13c, Func Offset: 0xac
	// Line 725, Address: 0x1ff144, Func Offset: 0xb4
	// Line 726, Address: 0x1ff14c, Func Offset: 0xbc
	// Line 734, Address: 0x1ff18c, Func Offset: 0xfc
	// Line 729, Address: 0x1ff194, Func Offset: 0x104
	// Line 730, Address: 0x1ff19c, Func Offset: 0x10c
	// Line 731, Address: 0x1ff1a4, Func Offset: 0x114
	// Line 732, Address: 0x1ff1ac, Func Offset: 0x11c
	// Line 735, Address: 0x1ff1b4, Func Offset: 0x124
	// Line 738, Address: 0x1ff1b8, Func Offset: 0x128
	// Line 741, Address: 0x1ff1c0, Func Offset: 0x130
	// Line 745, Address: 0x1ff1c8, Func Offset: 0x138
	// Line 791, Address: 0x1ff1cc, Func Offset: 0x13c
	// Line 745, Address: 0x1ff1d0, Func Offset: 0x140
	// Line 754, Address: 0x1ff1d4, Func Offset: 0x144
	// Line 746, Address: 0x1ff1d8, Func Offset: 0x148
	// Line 791, Address: 0x1ff1e0, Func Offset: 0x150
	// Line 747, Address: 0x1ff1e4, Func Offset: 0x154
	// Line 748, Address: 0x1ff1ec, Func Offset: 0x15c
	// Line 753, Address: 0x1ff2d4, Func Offset: 0x244
	// Line 754, Address: 0x1ff2dc, Func Offset: 0x24c
	// Line 755, Address: 0x1ff2e4, Func Offset: 0x254
	// Line 756, Address: 0x1ff2ec, Func Offset: 0x25c
	// Line 757, Address: 0x1ff2f4, Func Offset: 0x264
	// Line 758, Address: 0x1ff2fc, Func Offset: 0x26c
	// Line 773, Address: 0x1ff394, Func Offset: 0x304
	// Line 774, Address: 0x1ff39c, Func Offset: 0x30c
	// Line 777, Address: 0x1ff3a4, Func Offset: 0x314
	// Line 778, Address: 0x1ff3ac, Func Offset: 0x31c
	// Line 779, Address: 0x1ff3b4, Func Offset: 0x324
	// Line 780, Address: 0x1ff3bc, Func Offset: 0x32c
	// Line 791, Address: 0x1ff3c0, Func Offset: 0x330
	// Line 792, Address: 0x1ff3c8, Func Offset: 0x338
	// Line 794, Address: 0x1ff3d8, Func Offset: 0x348
	// Line 797, Address: 0x1ff3e0, Func Offset: 0x350
	// Line 802, Address: 0x1ff3e8, Func Offset: 0x358
	// Line 803, Address: 0x1ff3f0, Func Offset: 0x360
	// Line 807, Address: 0x1ff3f4, Func Offset: 0x364
	// Line 803, Address: 0x1ff3f8, Func Offset: 0x368
	// Line 807, Address: 0x1ff3fc, Func Offset: 0x36c
	// Line 804, Address: 0x1ff400, Func Offset: 0x370
	// Line 807, Address: 0x1ff404, Func Offset: 0x374
	// Line 808, Address: 0x1ff40c, Func Offset: 0x37c
	// Line 809, Address: 0x1ff42c, Func Offset: 0x39c
	// Line 810, Address: 0x1ff43c, Func Offset: 0x3ac
	// Line 811, Address: 0x1ff444, Func Offset: 0x3b4
	// Line 812, Address: 0x1ff450, Func Offset: 0x3c0
	// Line 813, Address: 0x1ff45c, Func Offset: 0x3cc
	// Line 814, Address: 0x1ff468, Func Offset: 0x3d8
	// Line 815, Address: 0x1ff474, Func Offset: 0x3e4
	// Line 816, Address: 0x1ff478, Func Offset: 0x3e8
	// Func End, Address: 0x1ff488, Func Offset: 0x3f8
}

// 
// Start address: 0x1ff490
void sdInitAfterSdbFileLoad()
{
	// Line 827, Address: 0x1ff490, Func Offset: 0
	// Line 837, Address: 0x1ff494, Func Offset: 0x4
	// Line 827, Address: 0x1ff498, Func Offset: 0x8
	// Line 850, Address: 0x1ff49c, Func Offset: 0xc
	// Line 853, Address: 0x1ff4a4, Func Offset: 0x14
	// Line 854, Address: 0x1ff4bc, Func Offset: 0x2c
	// Line 856, Address: 0x1ff4dc, Func Offset: 0x4c
	// Line 857, Address: 0x1ff4e8, Func Offset: 0x58
	// Line 858, Address: 0x1ff4f4, Func Offset: 0x64
	// Line 859, Address: 0x1ff4f8, Func Offset: 0x68
	// Func End, Address: 0x1ff504, Func Offset: 0x74
}

// 
// Start address: 0x1ff510
int soundSystemToolGetStageID(int game_stage_id)
{
	// Line 870, Address: 0x1ff510, Func Offset: 0
	// Line 874, Address: 0x1ff514, Func Offset: 0x4
	// Line 870, Address: 0x1ff518, Func Offset: 0x8
	// Line 874, Address: 0x1ff524, Func Offset: 0x14
	// Line 879, Address: 0x1ff550, Func Offset: 0x40
	// Line 880, Address: 0x1ff560, Func Offset: 0x50
	// Line 886, Address: 0x1ff568, Func Offset: 0x58
	// Line 887, Address: 0x1ff570, Func Offset: 0x60
	// Func End, Address: 0x1ff580, Func Offset: 0x70
}

// 
// Start address: 0x1ff580
void sdInitBeforeSceneChange()
{
	unsigned int i;
	_SD_TRACK_DATA* td;
	// Line 894, Address: 0x1ff580, Func Offset: 0
	// Line 899, Address: 0x1ff590, Func Offset: 0x10
	// Line 900, Address: 0x1ff5a0, Func Offset: 0x20
	// Line 901, Address: 0x1ff5ac, Func Offset: 0x2c
	// Line 903, Address: 0x1ff5d0, Func Offset: 0x50
	// Line 907, Address: 0x1ff5e0, Func Offset: 0x60
	// Line 910, Address: 0x1ff5f0, Func Offset: 0x70
	// Line 911, Address: 0x1ff610, Func Offset: 0x90
	// Line 912, Address: 0x1ff624, Func Offset: 0xa4
	// Line 914, Address: 0x1ff630, Func Offset: 0xb0
	// Line 915, Address: 0x1ff638, Func Offset: 0xb8
	// Line 921, Address: 0x1ff648, Func Offset: 0xc8
	// Line 922, Address: 0x1ff658, Func Offset: 0xd8
	// Line 923, Address: 0x1ff660, Func Offset: 0xe0
	// Line 924, Address: 0x1ff668, Func Offset: 0xe8
	// Line 925, Address: 0x1ff670, Func Offset: 0xf0
	// Line 926, Address: 0x1ff678, Func Offset: 0xf8
	// Line 928, Address: 0x1ff680, Func Offset: 0x100
	// Line 932, Address: 0x1ff688, Func Offset: 0x108
	// Line 935, Address: 0x1ff690, Func Offset: 0x110
	// Line 936, Address: 0x1ff6b0, Func Offset: 0x130
	// Line 935, Address: 0x1ff6b4, Func Offset: 0x134
	// Line 936, Address: 0x1ff6b8, Func Offset: 0x138
	// Line 937, Address: 0x1ff6c4, Func Offset: 0x144
	// Line 938, Address: 0x1ff6d4, Func Offset: 0x154
	// Line 941, Address: 0x1ff6d8, Func Offset: 0x158
	// Line 942, Address: 0x1ff6f8, Func Offset: 0x178
	// Func End, Address: 0x1ff70c, Func Offset: 0x18c
}

// 
// Start address: 0x1ff710
void sdInitAfterSceneChange()
{
	unsigned int i;
	// Line 949, Address: 0x1ff710, Func Offset: 0
	// Line 953, Address: 0x1ff720, Func Offset: 0x10
	// Line 954, Address: 0x1ff730, Func Offset: 0x20
	// Line 955, Address: 0x1ff744, Func Offset: 0x34
	// Line 956, Address: 0x1ff750, Func Offset: 0x40
	// Line 957, Address: 0x1ff75c, Func Offset: 0x4c
	// Line 960, Address: 0x1ff764, Func Offset: 0x54
	// Line 963, Address: 0x1ff778, Func Offset: 0x68
	// Line 964, Address: 0x1ff790, Func Offset: 0x80
	// Line 963, Address: 0x1ff794, Func Offset: 0x84
	// Line 964, Address: 0x1ff798, Func Offset: 0x88
	// Line 965, Address: 0x1ff7a8, Func Offset: 0x98
	// Line 966, Address: 0x1ff7b0, Func Offset: 0xa0
	// Line 968, Address: 0x1ff7b8, Func Offset: 0xa8
	// Func End, Address: 0x1ff7cc, Func Offset: 0xbc
}

// 
// Start address: 0x1ff7d0
int sfSdInit()
{
	_anon1 env;
	char data[256];
	// Line 976, Address: 0x1ff7d0, Func Offset: 0
	// Line 981, Address: 0x1ff7d8, Func Offset: 0x8
	// Line 982, Address: 0x1ff7e8, Func Offset: 0x18
	// Line 984, Address: 0x1ff7f0, Func Offset: 0x20
	// Line 987, Address: 0x1ff804, Func Offset: 0x34
	// Line 989, Address: 0x1ff814, Func Offset: 0x44
	// Line 990, Address: 0x1ff818, Func Offset: 0x48
	// Line 989, Address: 0x1ff81c, Func Offset: 0x4c
	// Line 990, Address: 0x1ff820, Func Offset: 0x50
	// Line 991, Address: 0x1ff830, Func Offset: 0x60
	// Line 992, Address: 0x1ff838, Func Offset: 0x68
	// Line 994, Address: 0x1ff840, Func Offset: 0x70
	// Line 993, Address: 0x1ff844, Func Offset: 0x74
	// Line 994, Address: 0x1ff848, Func Offset: 0x78
	// Line 993, Address: 0x1ff84c, Func Offset: 0x7c
	// Line 994, Address: 0x1ff850, Func Offset: 0x80
	// Line 1007, Address: 0x1ff858, Func Offset: 0x88
	// Line 1003, Address: 0x1ff864, Func Offset: 0x94
	// Line 1007, Address: 0x1ff868, Func Offset: 0x98
	// Line 1009, Address: 0x1ff870, Func Offset: 0xa0
	// Line 1012, Address: 0x1ff888, Func Offset: 0xb8
	// Line 1013, Address: 0x1ff890, Func Offset: 0xc0
	// Line 1016, Address: 0x1ff898, Func Offset: 0xc8
	// Line 1017, Address: 0x1ff8a0, Func Offset: 0xd0
	// Func End, Address: 0x1ff8ac, Func Offset: 0xdc
}

// 
// Start address: 0x1ff8b0
void sfSdVSync()
{
	// Line 1024, Address: 0x1ff8b0, Func Offset: 0
	// Line 1026, Address: 0x1ff8b8, Func Offset: 0x8
	// Line 1027, Address: 0x1ff8c8, Func Offset: 0x18
	// Line 1029, Address: 0x1ff8d0, Func Offset: 0x20
	// Func End, Address: 0x1ff8dc, Func Offset: 0x2c
}

// 
// Start address: 0x1ff8e0
int sfSdCheckVoice(int no)
{
	int ret;
	// Line 1037, Address: 0x1ff8e0, Func Offset: 0
	// Line 1040, Address: 0x1ff8ec, Func Offset: 0xc
	// Line 1037, Address: 0x1ff8f0, Func Offset: 0x10
	// Line 1040, Address: 0x1ff8f4, Func Offset: 0x14
	// Line 1044, Address: 0x1ff8fc, Func Offset: 0x1c
	// Line 1046, Address: 0x1ff904, Func Offset: 0x24
	// Line 1047, Address: 0x1ff90c, Func Offset: 0x2c
	// Line 1050, Address: 0x1ff910, Func Offset: 0x30
	// Line 1053, Address: 0x1ff918, Func Offset: 0x38
	// Func End, Address: 0x1ff920, Func Offset: 0x40
}

// 
// Start address: 0x1ff920
void sfSdPause(int mode)
{
	int i;
	// Line 1061, Address: 0x1ff920, Func Offset: 0
	// Line 1064, Address: 0x1ff924, Func Offset: 0x4
	// Line 1061, Address: 0x1ff928, Func Offset: 0x8
	// Line 1064, Address: 0x1ff93c, Func Offset: 0x1c
	// Line 1066, Address: 0x1ff96c, Func Offset: 0x4c
	// Line 1064, Address: 0x1ff970, Func Offset: 0x50
	// Line 1067, Address: 0x1ff978, Func Offset: 0x58
	// Line 1069, Address: 0x1ff980, Func Offset: 0x60
	// Line 1073, Address: 0x1ff988, Func Offset: 0x68
	// Line 1075, Address: 0x1ff990, Func Offset: 0x70
	// Line 1076, Address: 0x1ff9a0, Func Offset: 0x80
	// Line 1079, Address: 0x1ff9a8, Func Offset: 0x88
	// Line 1083, Address: 0x1ff9b8, Func Offset: 0x98
	// Line 1081, Address: 0x1ff9bc, Func Offset: 0x9c
	// Line 1084, Address: 0x1ff9c0, Func Offset: 0xa0
	// Line 1086, Address: 0x1ff9c8, Func Offset: 0xa8
	// Line 1089, Address: 0x1ff9d0, Func Offset: 0xb0
	// Line 1090, Address: 0x1ff9e0, Func Offset: 0xc0
	// Line 1092, Address: 0x1ff9f0, Func Offset: 0xd0
	// Line 1094, Address: 0x1ff9f8, Func Offset: 0xd8
	// Line 1095, Address: 0x1ff9fc, Func Offset: 0xdc
	// Line 1094, Address: 0x1ffa00, Func Offset: 0xe0
	// Line 1095, Address: 0x1ffa04, Func Offset: 0xe4
	// Line 1097, Address: 0x1ffa08, Func Offset: 0xe8
	// Line 1098, Address: 0x1ffa18, Func Offset: 0xf8
	// Line 1102, Address: 0x1ffa20, Func Offset: 0x100
	// Line 1106, Address: 0x1ffa28, Func Offset: 0x108
	// Line 1108, Address: 0x1ffa30, Func Offset: 0x110
	// Line 1113, Address: 0x1ffa3c, Func Offset: 0x11c
	// Line 1109, Address: 0x1ffa40, Func Offset: 0x120
	// Line 1113, Address: 0x1ffa48, Func Offset: 0x128
	// Line 1109, Address: 0x1ffa4c, Func Offset: 0x12c
	// Line 1113, Address: 0x1ffa50, Func Offset: 0x130
	// Line 1114, Address: 0x1ffa58, Func Offset: 0x138
	// Line 1116, Address: 0x1ffa6c, Func Offset: 0x14c
	// Line 1120, Address: 0x1ffa88, Func Offset: 0x168
	// Line 1122, Address: 0x1ffa94, Func Offset: 0x174
	// Line 1123, Address: 0x1ffa98, Func Offset: 0x178
	// Line 1122, Address: 0x1ffa9c, Func Offset: 0x17c
	// Line 1123, Address: 0x1ffaa0, Func Offset: 0x180
	// Line 1126, Address: 0x1ffaa4, Func Offset: 0x184
	// Line 1127, Address: 0x1ffab8, Func Offset: 0x198
	// Line 1131, Address: 0x1ffac0, Func Offset: 0x1a0
	// Line 1132, Address: 0x1ffac4, Func Offset: 0x1a4
	// Line 1131, Address: 0x1ffac8, Func Offset: 0x1a8
	// Line 1132, Address: 0x1ffacc, Func Offset: 0x1ac
	// Line 1133, Address: 0x1ffad8, Func Offset: 0x1b8
	// Line 1135, Address: 0x1ffaec, Func Offset: 0x1cc
	// Line 1139, Address: 0x1ffb08, Func Offset: 0x1e8
	// Line 1141, Address: 0x1ffb14, Func Offset: 0x1f4
	// Line 1142, Address: 0x1ffb18, Func Offset: 0x1f8
	// Line 1141, Address: 0x1ffb1c, Func Offset: 0x1fc
	// Line 1142, Address: 0x1ffb20, Func Offset: 0x200
	// Line 1145, Address: 0x1ffb24, Func Offset: 0x204
	// Line 1146, Address: 0x1ffb38, Func Offset: 0x218
	// Line 1150, Address: 0x1ffb40, Func Offset: 0x220
	// Line 1151, Address: 0x1ffb44, Func Offset: 0x224
	// Line 1150, Address: 0x1ffb48, Func Offset: 0x228
	// Line 1151, Address: 0x1ffb4c, Func Offset: 0x22c
	// Line 1152, Address: 0x1ffb58, Func Offset: 0x238
	// Line 1154, Address: 0x1ffb6c, Func Offset: 0x24c
	// Line 1160, Address: 0x1ffba0, Func Offset: 0x280
	// Line 1162, Address: 0x1ffbac, Func Offset: 0x28c
	// Line 1163, Address: 0x1ffbb0, Func Offset: 0x290
	// Line 1162, Address: 0x1ffbb4, Func Offset: 0x294
	// Line 1163, Address: 0x1ffbb8, Func Offset: 0x298
	// Line 1166, Address: 0x1ffbbc, Func Offset: 0x29c
	// Line 1167, Address: 0x1ffbd0, Func Offset: 0x2b0
	// Line 1173, Address: 0x1ffbd8, Func Offset: 0x2b8
	// Line 1171, Address: 0x1ffbe0, Func Offset: 0x2c0
	// Line 1175, Address: 0x1ffbe8, Func Offset: 0x2c8
	// Line 1183, Address: 0x1ffbf0, Func Offset: 0x2d0
	// Line 1184, Address: 0x1ffbf8, Func Offset: 0x2d8
	// Func End, Address: 0x1ffc10, Func Offset: 0x2f0
}

// 
// Start address: 0x1ffc10
char* sdGetRootPath()
{
	char root_path[256];
	// Line 1205, Address: 0x1ffc10, Func Offset: 0
	// Line 1207, Address: 0x1ffc18, Func Offset: 0x8
	// Line 1209, Address: 0x1ffc30, Func Offset: 0x20
	// Line 1208, Address: 0x1ffc34, Func Offset: 0x24
	// Line 1209, Address: 0x1ffc3c, Func Offset: 0x2c
	// Func End, Address: 0x1ffc44, Func Offset: 0x34
}

// 
// Start address: 0x1ffc50
int sfIsDVDUse()
{
	// Line 1215, Address: 0x1ffc50, Func Offset: 0
	// Line 1216, Address: 0x1ffc54, Func Offset: 0x4
	// Func End, Address: 0x1ffc5c, Func Offset: 0xc
}

// 
// Start address: 0x1ffc60
void sfTurnOnDVD(int flag)
{
	// Line 1220, Address: 0x1ffc60, Func Offset: 0
	// Line 1221, Address: 0x1ffc64, Func Offset: 0x4
	// Func End, Address: 0x1ffc6c, Func Offset: 0xc
}

// 
// Start address: 0x1ffc70
int sfIsSoundOn()
{
	// Line 1225, Address: 0x1ffc70, Func Offset: 0
	// Line 1226, Address: 0x1ffc74, Func Offset: 0x4
	// Func End, Address: 0x1ffc7c, Func Offset: 0xc
}

// 
// Start address: 0x1ffc80
void sfTurnOnSound(int flag)
{
	// Line 1230, Address: 0x1ffc80, Func Offset: 0
	// Line 1231, Address: 0x1ffc84, Func Offset: 0x4
	// Func End, Address: 0x1ffc8c, Func Offset: 0xc
}

