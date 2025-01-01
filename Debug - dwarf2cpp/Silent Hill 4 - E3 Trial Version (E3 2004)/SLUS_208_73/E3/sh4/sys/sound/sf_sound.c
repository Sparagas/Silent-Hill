typedef struct _SD_MASTER_VOLUME;
typedef union _anon0;
typedef struct sfObj;
typedef struct _SD_RADIO_MANAGER;
typedef struct _SD_SEQ_MANAGER;
typedef struct _SD_REV_MANAGER;
typedef enum _cam3Step : unsigned char;
typedef struct _SD_TRACK_MANAGER;
typedef struct _SD_TRACK_PLAY_MANAGER;
typedef struct _cam3Work;
typedef struct _GAME_WORK;
typedef struct _SD_ADX_TRACK;
typedef struct _SOUND_SYSTEM_DATA;
typedef struct _SD_SEQ_ADX_MANAGER;
typedef struct _SD_TRIGGER_LOAD_MANAGER;

typedef void(*type_1)(sfObj*);
typedef void(*type_5)(sfObj*);
typedef void(*type_7)();
typedef void(*type_15)(sfObj*);

typedef int type_0[4];
typedef int type_2[4];
typedef int type_3[4][19];
typedef int type_4[16];
typedef int type_6[1];
typedef void(*type_8)()[2];
typedef int type_9[1];
typedef int type_10[1];
typedef float type_11[4];
typedef int type_12[1];
typedef int type_13[1];
typedef int type_14[1];
typedef _SD_TRACK_PLAY_MANAGER type_16[3];
typedef void(*type_17)(sfObj*)[3];
typedef _SD_RADIO_MANAGER type_18[4];
typedef _SD_SEQ_MANAGER type_19[8];
typedef int type_20[128];
typedef short type_21[2];
typedef unsigned short type_22[2];
typedef int type_23[1];
typedef char type_24[4];
typedef unsigned char type_25[4];
typedef float type_26[1];
typedef _SD_ADX_TRACK type_27[2];
typedef int type_28[1];
typedef float type_29[4];
typedef float type_30[4][4];
typedef char type_31[32];
typedef _SD_TRACK_MANAGER type_32[8];
typedef _anon0 type_33[256];

struct _SD_MASTER_VOLUME
{
	float bgm;
	float se;
	float stream;
	float inMenu;
};

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

struct _SD_RADIO_MANAGER
{
	int stat;
	int fadeType;
	float volume;
	float pan;
	short pitch;
	float targetVolume;
};

struct _SD_SEQ_MANAGER
{
	int stage;
	int no;
	int chan[16];
};

struct _SD_REV_MANAGER
{
	int type;
	int depth;
};

enum _cam3Step : unsigned char
{
	CAM3_STEP_NORMAL,
	CAM3_STEP_AUTOFOCUS,
	CAM3_STEP_RESET,
	CAM3_STEP_STOP
};

struct _SD_TRACK_MANAGER
{
	int status;
	int fade_in_type;
	int fade_out_type;
	float volume;
};

struct _SD_TRACK_PLAY_MANAGER
{
	int stat;
	int no;
	int next_no;
	int vol_type;
	int next_vol_type;
	int stop_type;
	int next_stop_type;
	int fade_out_type;
	float now_volume;
	float next_volume;
	float radius;
	float genPos[4];
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

struct _SD_TRIGGER_LOAD_MANAGER
{
	int step;
	unsigned int vabID;
	char baseName[32];
};

void(*camInitFuncs)()[2];
void(*camera_main_funcs)(sfObj*)[3];
int dbTable[128];
int labelTable[4];
_SD_SEQ_MANAGER seqMan[8];
int revTable[4][19];
_SD_REV_MANAGER revMan;
_SD_TRACK_MANAGER trackMan[8];
_SD_SEQ_ADX_MANAGER seqAdxMan;
_SOUND_SYSTEM_DATA ssd;
_SD_TRACK_PLAY_MANAGER trackReserve[3];
_SD_MASTER_VOLUME masterVolume;
_GAME_WORK gamew;
_SD_TRIGGER_LOAD_MANAGER trgMan;
_SD_RADIO_MANAGER radioMan[4];
_cam3Work cam3_work;

int sdCheckMenuVolume(int no);
int sfSeCallEx(int se_no, float volume, float pan, int pitch, int overwrite);
int sfSePosCallEx(int se_no, float volume, float* pos, int pitch, int mode, float radius, int overwrite);
int sfSeSysCallEx(int se_no);
int sfSeChangeEx(int se_no, float volume, float pan, int slot);
int sfSePosChangeEx(int se_no, float volume, float* pos, int pitch, int mode, float radius, int slot);
void sfSeStop(int se_no, int slot);
void sdSysSetReverb();
int sdSysGetAdxState(int track_no);
void sdSysPlaySeq(int seq_no, int volType, float volume);
void sdSysPlaySeqWithTrgLoad(int seq_no, int fadeType, int volType, float volume);
void sdSysSeqTrgLoadStart();
void sdSysSeqTrgCheckLoadEnd();
void sdSysStopSeq(int fNextClear);
void sdSysStopSeqWithFade(int fadeType, int fNextClear);
void sdSysPlayADX(int adx_no, int track, int volType, int stopType, float volume);
void sdSysStopADX(int track, int fNextClear);
void sdSequenceTrackVolume(int track_no, float volume);
void sdADXTrackVolume(int adx_track_no, float volume);
void sdSysStopADXWithFade(int track, int fadeType, int fNextClear);
void sdInitTrackReserve();
void sdInitReverb();
int sdChangeReverb(int stage_no, int scene_no);
int sdChangeStage2TrgNo(int stage_no);
void sdSysPlayADXWithTrackMan(int adx_no, int track, int volType, int stopType, float volume);
void sfSdCallEx(int no, int track, float volume, int volType, int stopType);
int GetPlayTrack(int no);
void sfSdStop(int no, int fadeType);
void sfSdStopAllForce();
void sfSdSetPan(int no, float pan);
void sfSdSetVolume(int no, float vol);
void sfSdSetAngle(int no, float angle);
int sfSdGetPlayTime(float* time, int no);
void sfSeGetAdxInfo(int* pt, int* adx_no, int se_no);
int sdGetTrackNo(int bgm_no);
void sdAllStopSpu();
void sdOutputMono(int flag);
void sfSetBgmMaster(float volume);
float sfGetBgmMaster();
void sfSetSeMaster(float volume);
float sfGetSeMaster();
void sdSetStreamMaster(float volume);
float sdGetStreamMaster();
void sdSetMenuMaster(float volume);
void sdSetMenuMasterDirect(float volume);
float sdGetMenuMaster();
void sdSetSpuMaster(float volume);
float sdCalcVolumeForAdxSe(float* pos, float muteMeter, int mode);
void sdCalcPanForAdxSe();
int sdRadPan2IntPan(float rad_pan);
float SeCallPosDistance(float* pos, float muteMeter, int mode);
float SeCallPosDirection(float* pos);
void sfSdStopAll();
int sdGetMovieVolume(float volume);

// 
// Start address: 0x205630
int sdCheckMenuVolume(int no)
{
	int ret;
	// Line 248, Address: 0x205630, Func Offset: 0
	// Line 251, Address: 0x20563c, Func Offset: 0xc
	// Line 248, Address: 0x205640, Func Offset: 0x10
	// Line 251, Address: 0x205644, Func Offset: 0x14
	// Line 255, Address: 0x20564c, Func Offset: 0x1c
	// Line 257, Address: 0x205654, Func Offset: 0x24
	// Line 258, Address: 0x20565c, Func Offset: 0x2c
	// Line 261, Address: 0x205660, Func Offset: 0x30
	// Line 264, Address: 0x205668, Func Offset: 0x38
	// Func End, Address: 0x205670, Func Offset: 0x40
}

// 
// Start address: 0x205670
int sfSeCallEx(int se_no, float volume, float pan, int pitch, int overwrite)
{
	int Ivol;
	int Ipan;
	// Line 280, Address: 0x205670, Func Offset: 0
	// Line 283, Address: 0x2056a4, Func Offset: 0x34
	// Line 284, Address: 0x2056b4, Func Offset: 0x44
	// Line 285, Address: 0x2056bc, Func Offset: 0x4c
	// Line 286, Address: 0x2056c0, Func Offset: 0x50
	// Line 287, Address: 0x2056c8, Func Offset: 0x58
	// Line 290, Address: 0x2056d0, Func Offset: 0x60
	// Line 291, Address: 0x2056f4, Func Offset: 0x84
	// Line 290, Address: 0x2056fc, Func Offset: 0x8c
	// Line 291, Address: 0x205704, Func Offset: 0x94
	// Line 293, Address: 0x205714, Func Offset: 0xa4
	// Line 304, Address: 0x20571c, Func Offset: 0xac
	// Line 306, Address: 0x205738, Func Offset: 0xc8
	// Func End, Address: 0x205760, Func Offset: 0xf0
}

// 
// Start address: 0x205760
int sfSePosCallEx(int se_no, float volume, float* pos, int pitch, int mode, float radius, int overwrite)
{
	int Ivol;
	int Ipan;
	float distVol;
	float radPan;
	// Line 325, Address: 0x205760, Func Offset: 0
	// Line 329, Address: 0x2057a0, Func Offset: 0x40
	// Line 330, Address: 0x2057b0, Func Offset: 0x50
	// Line 332, Address: 0x2057b8, Func Offset: 0x58
	// Line 333, Address: 0x2057c0, Func Offset: 0x60
	// Line 338, Address: 0x2057c8, Func Offset: 0x68
	// Line 340, Address: 0x2057dc, Func Offset: 0x7c
	// Line 341, Address: 0x2057e8, Func Offset: 0x88
	// Line 342, Address: 0x2057fc, Func Offset: 0x9c
	// Line 343, Address: 0x205800, Func Offset: 0xa0
	// Line 345, Address: 0x205818, Func Offset: 0xb8
	// Line 347, Address: 0x205820, Func Offset: 0xc0
	// Line 348, Address: 0x20583c, Func Offset: 0xdc
	// Line 347, Address: 0x205844, Func Offset: 0xe4
	// Line 348, Address: 0x205854, Func Offset: 0xf4
	// Line 350, Address: 0x205864, Func Offset: 0x104
	// Line 352, Address: 0x20586c, Func Offset: 0x10c
	// Line 364, Address: 0x205884, Func Offset: 0x124
	// Line 366, Address: 0x2058a0, Func Offset: 0x140
	// Func End, Address: 0x2058cc, Func Offset: 0x16c
}

// 
// Start address: 0x2058d0
int sfSeSysCallEx(int se_no)
{
	int Ivol;
	int Ipan;
	// Line 378, Address: 0x2058d0, Func Offset: 0
	// Line 381, Address: 0x2058e0, Func Offset: 0x10
	// Line 382, Address: 0x2058f0, Func Offset: 0x20
	// Line 384, Address: 0x2058f8, Func Offset: 0x28
	// Line 385, Address: 0x205900, Func Offset: 0x30
	// Line 388, Address: 0x205908, Func Offset: 0x38
	// Line 389, Address: 0x205924, Func Offset: 0x54
	// Line 388, Address: 0x20592c, Func Offset: 0x5c
	// Line 389, Address: 0x205934, Func Offset: 0x64
	// Line 391, Address: 0x205944, Func Offset: 0x74
	// Line 393, Address: 0x205950, Func Offset: 0x80
	// Line 394, Address: 0x205970, Func Offset: 0xa0
	// Func End, Address: 0x205984, Func Offset: 0xb4
}

// 
// Start address: 0x205990
int sfSeChangeEx(int se_no, float volume, float pan, int slot)
{
	int Ivol;
	int Ipan;
	// Line 412, Address: 0x205990, Func Offset: 0
	// Line 415, Address: 0x2059bc, Func Offset: 0x2c
	// Line 416, Address: 0x2059cc, Func Offset: 0x3c
	// Line 417, Address: 0x2059d4, Func Offset: 0x44
	// Line 418, Address: 0x2059d8, Func Offset: 0x48
	// Line 419, Address: 0x2059e0, Func Offset: 0x50
	// Line 422, Address: 0x2059e8, Func Offset: 0x58
	// Line 423, Address: 0x205a0c, Func Offset: 0x7c
	// Line 422, Address: 0x205a14, Func Offset: 0x84
	// Line 423, Address: 0x205a1c, Func Offset: 0x8c
	// Line 425, Address: 0x205a2c, Func Offset: 0x9c
	// Line 427, Address: 0x205a34, Func Offset: 0xa4
	// Line 432, Address: 0x205a4c, Func Offset: 0xbc
	// Line 433, Address: 0x205a50, Func Offset: 0xc0
	// Func End, Address: 0x205a74, Func Offset: 0xe4
}

// 
// Start address: 0x205a80
int sfSePosChangeEx(int se_no, float volume, float* pos, int pitch, int mode, float radius, int slot)
{
	int Ivol;
	int Ipan;
	float distVol;
	float radPan;
	// Line 453, Address: 0x205a80, Func Offset: 0
	// Line 457, Address: 0x205ac0, Func Offset: 0x40
	// Line 458, Address: 0x205ad0, Func Offset: 0x50
	// Line 460, Address: 0x205ad8, Func Offset: 0x58
	// Line 461, Address: 0x205ae0, Func Offset: 0x60
	// Line 466, Address: 0x205ae8, Func Offset: 0x68
	// Line 467, Address: 0x205afc, Func Offset: 0x7c
	// Line 469, Address: 0x205b10, Func Offset: 0x90
	// Line 471, Address: 0x205b18, Func Offset: 0x98
	// Line 472, Address: 0x205b34, Func Offset: 0xb4
	// Line 471, Address: 0x205b3c, Func Offset: 0xbc
	// Line 472, Address: 0x205b4c, Func Offset: 0xcc
	// Line 474, Address: 0x205b5c, Func Offset: 0xdc
	// Line 476, Address: 0x205b64, Func Offset: 0xe4
	// Line 478, Address: 0x205b7c, Func Offset: 0xfc
	// Line 484, Address: 0x205b94, Func Offset: 0x114
	// Line 485, Address: 0x205b98, Func Offset: 0x118
	// Func End, Address: 0x205bc4, Func Offset: 0x144
}

// 
// Start address: 0x205bd0
void sfSeStop(int se_no, int slot)
{
	// Line 496, Address: 0x205bd0, Func Offset: 0
	// Line 497, Address: 0x205be4, Func Offset: 0x14
	// Line 500, Address: 0x205bf4, Func Offset: 0x24
	// Line 504, Address: 0x205bfc, Func Offset: 0x2c
	// Line 506, Address: 0x205c08, Func Offset: 0x38
	// Func End, Address: 0x205c1c, Func Offset: 0x4c
}

// 
// Start address: 0x205c20
void sdSysSetReverb()
{
	// Line 514, Address: 0x205c20, Func Offset: 0
	// Line 515, Address: 0x205c28, Func Offset: 0x8
	// Line 518, Address: 0x205c38, Func Offset: 0x18
	// Line 519, Address: 0x205c4c, Func Offset: 0x2c
	// Line 520, Address: 0x205c64, Func Offset: 0x44
	// Func End, Address: 0x205c74, Func Offset: 0x54
}

// 
// Start address: 0x205c80
int sdSysGetAdxState(int track_no)
{
	int adxState;
	int retState;
	// Line 528, Address: 0x205c80, Func Offset: 0
	// Line 534, Address: 0x205c88, Func Offset: 0x8
	// Line 536, Address: 0x205c90, Func Offset: 0x10
	// Line 540, Address: 0x205cb4, Func Offset: 0x34
	// Line 542, Address: 0x205cb8, Func Offset: 0x38
	// Line 546, Address: 0x205cc0, Func Offset: 0x40
	// Line 549, Address: 0x205cc8, Func Offset: 0x48
	// Line 552, Address: 0x205cd0, Func Offset: 0x50
	// Line 554, Address: 0x205cd8, Func Offset: 0x58
	// Line 556, Address: 0x205cdc, Func Offset: 0x5c
	// Line 559, Address: 0x205ce0, Func Offset: 0x60
	// Func End, Address: 0x205cec, Func Offset: 0x6c
}

// 
// Start address: 0x205cf0
void sdSysPlaySeq(int seq_no, int volType, float volume)
{
	int i;
	int Ivol;
	// Line 567, Address: 0x205cf0, Func Offset: 0
	// Line 571, Address: 0x205d14, Func Offset: 0x24
	// Line 574, Address: 0x205d24, Func Offset: 0x34
	// Line 575, Address: 0x205d30, Func Offset: 0x40
	// Line 576, Address: 0x205d38, Func Offset: 0x48
	// Line 584, Address: 0x205d40, Func Offset: 0x50
	// Line 585, Address: 0x205d48, Func Offset: 0x58
	// Line 586, Address: 0x205d4c, Func Offset: 0x5c
	// Line 587, Address: 0x205d50, Func Offset: 0x60
	// Line 588, Address: 0x205d74, Func Offset: 0x84
	// Line 587, Address: 0x205d7c, Func Offset: 0x8c
	// Line 588, Address: 0x205d84, Func Offset: 0x94
	// Line 589, Address: 0x205d94, Func Offset: 0xa4
	// Line 593, Address: 0x205db0, Func Offset: 0xc0
	// Line 592, Address: 0x205db4, Func Offset: 0xc4
	// Line 593, Address: 0x205db8, Func Offset: 0xc8
	// Line 592, Address: 0x205dbc, Func Offset: 0xcc
	// Line 598, Address: 0x205dc0, Func Offset: 0xd0
	// Line 592, Address: 0x205dc4, Func Offset: 0xd4
	// Line 594, Address: 0x205dc8, Func Offset: 0xd8
	// Line 595, Address: 0x205dd4, Func Offset: 0xe4
	// Line 596, Address: 0x205ddc, Func Offset: 0xec
	// Line 598, Address: 0x205de0, Func Offset: 0xf0
	// Line 599, Address: 0x205de8, Func Offset: 0xf8
	// Line 600, Address: 0x205df8, Func Offset: 0x108
	// Line 604, Address: 0x205e04, Func Offset: 0x114
	// Line 600, Address: 0x205e08, Func Offset: 0x118
	// Line 601, Address: 0x205e0c, Func Offset: 0x11c
	// Line 600, Address: 0x205e10, Func Offset: 0x120
	// Line 601, Address: 0x205e14, Func Offset: 0x124
	// Line 602, Address: 0x205e20, Func Offset: 0x130
	// Line 603, Address: 0x205e2c, Func Offset: 0x13c
	// Line 602, Address: 0x205e30, Func Offset: 0x140
	// Line 603, Address: 0x205e34, Func Offset: 0x144
	// Line 604, Address: 0x205e40, Func Offset: 0x150
	// Line 605, Address: 0x205e4c, Func Offset: 0x15c
	// Func End, Address: 0x205e70, Func Offset: 0x180
}

// 
// Start address: 0x205e70
void sdSysPlaySeqWithTrgLoad(int seq_no, int fadeType, int volType, float volume)
{
	// Line 615, Address: 0x205e70, Func Offset: 0
	// Line 616, Address: 0x205e7c, Func Offset: 0xc
	// Line 615, Address: 0x205e80, Func Offset: 0x10
	// Line 616, Address: 0x205e84, Func Offset: 0x14
	// Line 618, Address: 0x205eb0, Func Offset: 0x40
	// Line 619, Address: 0x205ebc, Func Offset: 0x4c
	// Line 620, Address: 0x205ec4, Func Offset: 0x54
	// Line 622, Address: 0x205ec8, Func Offset: 0x58
	// Line 623, Address: 0x205ed8, Func Offset: 0x68
	// Line 624, Address: 0x205ee0, Func Offset: 0x70
	// Line 627, Address: 0x205ee8, Func Offset: 0x78
	// Line 628, Address: 0x205ef0, Func Offset: 0x80
	// Line 626, Address: 0x205ef8, Func Offset: 0x88
	// Line 629, Address: 0x205f00, Func Offset: 0x90
	// Line 630, Address: 0x205f08, Func Offset: 0x98
	// Line 631, Address: 0x205f10, Func Offset: 0xa0
	// Line 632, Address: 0x205f20, Func Offset: 0xb0
	// Line 633, Address: 0x205f28, Func Offset: 0xb8
	// Line 634, Address: 0x205f30, Func Offset: 0xc0
	// Line 636, Address: 0x205f3c, Func Offset: 0xcc
	// Line 637, Address: 0x205f40, Func Offset: 0xd0
	// Func End, Address: 0x205f4c, Func Offset: 0xdc
}

// 
// Start address: 0x205f50
void sdSysSeqTrgLoadStart()
{
	// Line 672, Address: 0x205f50, Func Offset: 0
	// Line 675, Address: 0x205f54, Func Offset: 0x4
	// Line 672, Address: 0x205f58, Func Offset: 0x8
	// Line 675, Address: 0x205f5c, Func Offset: 0xc
	// Line 676, Address: 0x205f78, Func Offset: 0x28
	// Line 681, Address: 0x205f80, Func Offset: 0x30
	// Line 688, Address: 0x205f88, Func Offset: 0x38
	// Line 689, Address: 0x205f90, Func Offset: 0x40
	// Line 688, Address: 0x205f94, Func Offset: 0x44
	// Line 689, Address: 0x205f98, Func Offset: 0x48
	// Line 693, Address: 0x205fa0, Func Offset: 0x50
	// Line 694, Address: 0x205fa8, Func Offset: 0x58
	// Func End, Address: 0x205fb4, Func Offset: 0x64
}

// 
// Start address: 0x205fc0
void sdSysSeqTrgCheckLoadEnd()
{
	int ret;
	// Line 697, Address: 0x205fc0, Func Offset: 0
	// Line 699, Address: 0x205fc4, Func Offset: 0x4
	// Line 697, Address: 0x205fc8, Func Offset: 0x8
	// Line 699, Address: 0x205fcc, Func Offset: 0xc
	// Line 701, Address: 0x205fd8, Func Offset: 0x18
	// Line 703, Address: 0x205fe0, Func Offset: 0x20
	// Line 704, Address: 0x205fec, Func Offset: 0x2c
	// Line 703, Address: 0x205ff0, Func Offset: 0x30
	// Line 704, Address: 0x205ff4, Func Offset: 0x34
	// Line 705, Address: 0x20600c, Func Offset: 0x4c
	// Line 707, Address: 0x20601c, Func Offset: 0x5c
	// Line 708, Address: 0x206020, Func Offset: 0x60
	// Line 709, Address: 0x206028, Func Offset: 0x68
	// Line 710, Address: 0x20602c, Func Offset: 0x6c
	// Line 711, Address: 0x206040, Func Offset: 0x80
	// Line 712, Address: 0x206048, Func Offset: 0x88
	// Line 713, Address: 0x206050, Func Offset: 0x90
	// Line 715, Address: 0x20605c, Func Offset: 0x9c
	// Line 717, Address: 0x206064, Func Offset: 0xa4
	// Line 718, Address: 0x206068, Func Offset: 0xa8
	// Func End, Address: 0x206074, Func Offset: 0xb4
}

// 
// Start address: 0x206080
void sdSysStopSeq(int fNextClear)
{
	// Line 726, Address: 0x206080, Func Offset: 0
	// Line 727, Address: 0x20608c, Func Offset: 0xc
	// Line 731, Address: 0x20609c, Func Offset: 0x1c
	// Line 733, Address: 0x2060a4, Func Offset: 0x24
	// Line 734, Address: 0x2060a8, Func Offset: 0x28
	// Line 733, Address: 0x2060ac, Func Offset: 0x2c
	// Line 734, Address: 0x2060b0, Func Offset: 0x30
	// Line 735, Address: 0x2060b8, Func Offset: 0x38
	// Line 736, Address: 0x2060bc, Func Offset: 0x3c
	// Line 737, Address: 0x2060c4, Func Offset: 0x44
	// Line 738, Address: 0x2060cc, Func Offset: 0x4c
	// Line 739, Address: 0x2060d0, Func Offset: 0x50
	// Func End, Address: 0x2060e0, Func Offset: 0x60
}

// 
// Start address: 0x2060e0
void sdSysStopSeqWithFade(int fadeType, int fNextClear)
{
	// Line 749, Address: 0x2060e0, Func Offset: 0
	// Line 756, Address: 0x206110, Func Offset: 0x30
	// Line 758, Address: 0x206118, Func Offset: 0x38
	// Line 759, Address: 0x206120, Func Offset: 0x40
	// Line 760, Address: 0x20612c, Func Offset: 0x4c
	// Line 761, Address: 0x206130, Func Offset: 0x50
	// Line 766, Address: 0x206138, Func Offset: 0x58
	// Func End, Address: 0x206140, Func Offset: 0x60
}

// 
// Start address: 0x206140
void sdSysPlayADX(int adx_no, int track, int volType, int stopType, float volume)
{
	int Ivol;
	int pt;
	int playAdxNo;
	// Line 776, Address: 0x206140, Func Offset: 0
	// Line 784, Address: 0x206158, Func Offset: 0x18
	// Line 776, Address: 0x20615c, Func Offset: 0x1c
	// Line 784, Address: 0x206174, Func Offset: 0x34
	// Line 785, Address: 0x20617c, Func Offset: 0x3c
	// Line 786, Address: 0x2061a0, Func Offset: 0x60
	// Line 787, Address: 0x2061b4, Func Offset: 0x74
	// Line 788, Address: 0x2061dc, Func Offset: 0x9c
	// Line 789, Address: 0x2061f4, Func Offset: 0xb4
	// Line 790, Address: 0x206204, Func Offset: 0xc4
	// Line 791, Address: 0x20622c, Func Offset: 0xec
	// Line 792, Address: 0x206238, Func Offset: 0xf8
	// Line 794, Address: 0x20625c, Func Offset: 0x11c
	// Line 795, Address: 0x206268, Func Offset: 0x128
	// Line 797, Address: 0x206290, Func Offset: 0x150
	// Line 798, Address: 0x2062a8, Func Offset: 0x168
	// Line 799, Address: 0x2062c4, Func Offset: 0x184
	// Line 800, Address: 0x2062d4, Func Offset: 0x194
	// Line 809, Address: 0x2062e4, Func Offset: 0x1a4
	// Line 810, Address: 0x2062f4, Func Offset: 0x1b4
	// Line 812, Address: 0x206304, Func Offset: 0x1c4
	// Line 814, Address: 0x206310, Func Offset: 0x1d0
	// Line 817, Address: 0x206320, Func Offset: 0x1e0
	// Line 820, Address: 0x206330, Func Offset: 0x1f0
	// Line 822, Address: 0x20633c, Func Offset: 0x1fc
	// Line 820, Address: 0x206340, Func Offset: 0x200
	// Line 828, Address: 0x206344, Func Offset: 0x204
	// Line 820, Address: 0x206348, Func Offset: 0x208
	// Line 821, Address: 0x206354, Func Offset: 0x214
	// Line 820, Address: 0x206358, Func Offset: 0x218
	// Line 821, Address: 0x20635c, Func Offset: 0x21c
	// Line 822, Address: 0x206360, Func Offset: 0x220
	// Line 821, Address: 0x206364, Func Offset: 0x224
	// Line 822, Address: 0x206368, Func Offset: 0x228
	// Line 821, Address: 0x20636c, Func Offset: 0x22c
	// Line 822, Address: 0x206370, Func Offset: 0x230
	// Line 823, Address: 0x206374, Func Offset: 0x234
	// Line 822, Address: 0x206378, Func Offset: 0x238
	// Line 823, Address: 0x20637c, Func Offset: 0x23c
	// Line 825, Address: 0x206380, Func Offset: 0x240
	// Line 823, Address: 0x206384, Func Offset: 0x244
	// Line 824, Address: 0x206388, Func Offset: 0x248
	// Line 823, Address: 0x20638c, Func Offset: 0x24c
	// Line 824, Address: 0x206390, Func Offset: 0x250
	// Line 825, Address: 0x206394, Func Offset: 0x254
	// Line 824, Address: 0x206398, Func Offset: 0x258
	// Line 825, Address: 0x20639c, Func Offset: 0x25c
	// Line 824, Address: 0x2063a0, Func Offset: 0x260
	// Line 825, Address: 0x2063a4, Func Offset: 0x264
	// Line 826, Address: 0x2063a8, Func Offset: 0x268
	// Line 825, Address: 0x2063ac, Func Offset: 0x26c
	// Line 826, Address: 0x2063b0, Func Offset: 0x270
	// Line 828, Address: 0x2063b8, Func Offset: 0x278
	// Line 826, Address: 0x2063bc, Func Offset: 0x27c
	// Line 828, Address: 0x2063c0, Func Offset: 0x280
	// Line 829, Address: 0x2063cc, Func Offset: 0x28c
	// Func End, Address: 0x2063f0, Func Offset: 0x2b0
}

// 
// Start address: 0x2063f0
void sdSysStopADX(int track, int fNextClear)
{
	int i;
	// Line 837, Address: 0x2063f0, Func Offset: 0
	// Line 841, Address: 0x206410, Func Offset: 0x20
	// Line 837, Address: 0x206414, Func Offset: 0x24
	// Line 841, Address: 0x206418, Func Offset: 0x28
	// Line 842, Address: 0x206428, Func Offset: 0x38
	// Line 843, Address: 0x206438, Func Offset: 0x48
	// Line 844, Address: 0x206444, Func Offset: 0x54
	// Line 845, Address: 0x20644c, Func Offset: 0x5c
	// Line 846, Address: 0x206450, Func Offset: 0x60
	// Line 847, Address: 0x206454, Func Offset: 0x64
	// Line 848, Address: 0x20645c, Func Offset: 0x6c
	// Line 851, Address: 0x206460, Func Offset: 0x70
	// Line 853, Address: 0x206464, Func Offset: 0x74
	// Line 851, Address: 0x206470, Func Offset: 0x80
	// Line 853, Address: 0x206474, Func Offset: 0x84
	// Line 854, Address: 0x20647c, Func Offset: 0x8c
	// Func End, Address: 0x20649c, Func Offset: 0xac
}

// 
// Start address: 0x2064a0
void sdSequenceTrackVolume(int track_no, float volume)
{
	int Ivol;
	int i;
	int j;
	// Line 861, Address: 0x2064a0, Func Offset: 0
	// Line 865, Address: 0x2064c4, Func Offset: 0x24
	// Line 870, Address: 0x2064d4, Func Offset: 0x34
	// Line 871, Address: 0x2064e8, Func Offset: 0x48
	// Line 872, Address: 0x20650c, Func Offset: 0x6c
	// Line 871, Address: 0x206514, Func Offset: 0x74
	// Line 872, Address: 0x20651c, Func Offset: 0x7c
	// Line 874, Address: 0x20652c, Func Offset: 0x8c
	// Line 881, Address: 0x206530, Func Offset: 0x90
	// Line 877, Address: 0x206534, Func Offset: 0x94
	// Line 881, Address: 0x206538, Func Offset: 0x98
	// Line 877, Address: 0x20653c, Func Offset: 0x9c
	// Line 881, Address: 0x20655c, Func Offset: 0xbc
	// Line 886, Address: 0x206564, Func Offset: 0xc4
	// Line 888, Address: 0x206570, Func Offset: 0xd0
	// Line 889, Address: 0x206578, Func Offset: 0xd8
	// Line 890, Address: 0x2065a4, Func Offset: 0x104
	// Line 892, Address: 0x2065c0, Func Offset: 0x120
	// Line 893, Address: 0x2065d4, Func Offset: 0x134
	// Line 894, Address: 0x2065d8, Func Offset: 0x138
	// Func End, Address: 0x2065fc, Func Offset: 0x15c
}

// 
// Start address: 0x206600
void sdADXTrackVolume(int adx_track_no, float volume)
{
	int Ivol;
	// Line 901, Address: 0x206600, Func Offset: 0
	// Line 907, Address: 0x206604, Func Offset: 0x4
	// Line 901, Address: 0x20660c, Func Offset: 0xc
	// Line 907, Address: 0x206614, Func Offset: 0x14
	// Line 901, Address: 0x206618, Func Offset: 0x18
	// Line 907, Address: 0x20661c, Func Offset: 0x1c
	// Line 901, Address: 0x206628, Func Offset: 0x28
	// Line 907, Address: 0x20662c, Func Offset: 0x2c
	// Line 909, Address: 0x206640, Func Offset: 0x40
	// Line 910, Address: 0x206664, Func Offset: 0x64
	// Line 911, Address: 0x20667c, Func Offset: 0x7c
	// Line 912, Address: 0x2066a4, Func Offset: 0xa4
	// Line 913, Address: 0x2066bc, Func Offset: 0xbc
	// Line 914, Address: 0x2066cc, Func Offset: 0xcc
	// Line 915, Address: 0x2066f4, Func Offset: 0xf4
	// Line 916, Address: 0x206700, Func Offset: 0x100
	// Line 918, Address: 0x206724, Func Offset: 0x124
	// Line 919, Address: 0x206730, Func Offset: 0x130
	// Line 921, Address: 0x206758, Func Offset: 0x158
	// Line 922, Address: 0x206770, Func Offset: 0x170
	// Line 923, Address: 0x20678c, Func Offset: 0x18c
	// Line 924, Address: 0x2067a0, Func Offset: 0x1a0
	// Func End, Address: 0x2067b8, Func Offset: 0x1b8
}

// 
// Start address: 0x2067c0
void sdSysStopADXWithFade(int track, int fadeType, int fNextClear)
{
	int i;
	// Line 932, Address: 0x2067c0, Func Offset: 0
	// Line 937, Address: 0x2067e8, Func Offset: 0x28
	// Line 938, Address: 0x2067f8, Func Offset: 0x38
	// Line 939, Address: 0x206808, Func Offset: 0x48
	// Line 941, Address: 0x20683c, Func Offset: 0x7c
	// Line 942, Address: 0x206840, Func Offset: 0x80
	// Line 946, Address: 0x20684c, Func Offset: 0x8c
	// Line 947, Address: 0x206850, Func Offset: 0x90
	// Line 949, Address: 0x206854, Func Offset: 0x94
	// Line 950, Address: 0x20685c, Func Offset: 0x9c
	// Line 951, Address: 0x206864, Func Offset: 0xa4
	// Line 952, Address: 0x206868, Func Offset: 0xa8
	// Line 958, Address: 0x20686c, Func Offset: 0xac
	// Line 959, Address: 0x206880, Func Offset: 0xc0
	// Func End, Address: 0x2068a0, Func Offset: 0xe0
}

// 
// Start address: 0x2068a0
void sdInitTrackReserve()
{
	int i;
	// Line 970, Address: 0x2068a4, Func Offset: 0x4
	// Line 972, Address: 0x2068bc, Func Offset: 0x1c
	// Line 970, Address: 0x2068c0, Func Offset: 0x20
	// Line 974, Address: 0x2068c4, Func Offset: 0x24
	// Line 978, Address: 0x2068c8, Func Offset: 0x28
	// Line 970, Address: 0x2068cc, Func Offset: 0x2c
	// Line 971, Address: 0x2068d8, Func Offset: 0x38
	// Line 972, Address: 0x2068dc, Func Offset: 0x3c
	// Line 973, Address: 0x2068e0, Func Offset: 0x40
	// Line 974, Address: 0x2068e4, Func Offset: 0x44
	// Line 975, Address: 0x2068e8, Func Offset: 0x48
	// Line 976, Address: 0x2068ec, Func Offset: 0x4c
	// Line 977, Address: 0x2068f0, Func Offset: 0x50
	// Line 978, Address: 0x2068f4, Func Offset: 0x54
	// Line 979, Address: 0x2068f8, Func Offset: 0x58
	// Line 980, Address: 0x2068fc, Func Offset: 0x5c
	// Line 981, Address: 0x206900, Func Offset: 0x60
	// Line 983, Address: 0x206904, Func Offset: 0x64
	// Line 985, Address: 0x206908, Func Offset: 0x68
	// Line 984, Address: 0x20690c, Func Offset: 0x6c
	// Line 985, Address: 0x206910, Func Offset: 0x70
	// Line 986, Address: 0x20691c, Func Offset: 0x7c
	// Func End, Address: 0x206924, Func Offset: 0x84
}

// 
// Start address: 0x206930
void sdInitReverb()
{
	// Line 994, Address: 0x206930, Func Offset: 0
	// Line 995, Address: 0x20693c, Func Offset: 0xc
	// Line 996, Address: 0x206944, Func Offset: 0x14
	// Func End, Address: 0x20694c, Func Offset: 0x1c
}

// 
// Start address: 0x206950
int sdChangeReverb(int stage_no, int scene_no)
{
	int type;
	int depth;
	int i;
	// Line 1011, Address: 0x206950, Func Offset: 0
	// Line 1009, Address: 0x206954, Func Offset: 0x4
	// Line 1010, Address: 0x206958, Func Offset: 0x8
	// Line 1011, Address: 0x20695c, Func Offset: 0xc
	// Line 1014, Address: 0x206964, Func Offset: 0x14
	// Line 1011, Address: 0x206968, Func Offset: 0x18
	// Line 1014, Address: 0x20696c, Func Offset: 0x1c
	// Line 1018, Address: 0x206974, Func Offset: 0x24
	// Line 1019, Address: 0x20698c, Func Offset: 0x3c
	// Line 1020, Address: 0x206994, Func Offset: 0x44
	// Line 1021, Address: 0x2069a4, Func Offset: 0x54
	// Line 1022, Address: 0x2069ac, Func Offset: 0x5c
	// Line 1024, Address: 0x2069b0, Func Offset: 0x60
	// Line 1025, Address: 0x2069c8, Func Offset: 0x78
	// Line 1026, Address: 0x2069d0, Func Offset: 0x80
	// Line 1027, Address: 0x2069e0, Func Offset: 0x90
	// Line 1031, Address: 0x2069ec, Func Offset: 0x9c
	// Line 1033, Address: 0x2069f8, Func Offset: 0xa8
	// Line 1034, Address: 0x206a18, Func Offset: 0xc8
	// Line 1036, Address: 0x206a20, Func Offset: 0xd0
	// Line 1035, Address: 0x206a24, Func Offset: 0xd4
	// Line 1036, Address: 0x206a28, Func Offset: 0xd8
	// Line 1038, Address: 0x206a30, Func Offset: 0xe0
	// Line 1040, Address: 0x206a38, Func Offset: 0xe8
	// Func End, Address: 0x206a40, Func Offset: 0xf0
}

// 
// Start address: 0x206a40
int sdChangeStage2TrgNo(int stage_no)
{
	int ret;
	int i;
	// Line 1052, Address: 0x206a40, Func Offset: 0
	// Line 1051, Address: 0x206a44, Func Offset: 0x4
	// Line 1052, Address: 0x206a48, Func Offset: 0x8
	// Line 1055, Address: 0x206a54, Func Offset: 0x14
	// Line 1059, Address: 0x206a5c, Func Offset: 0x1c
	// Line 1060, Address: 0x206a64, Func Offset: 0x24
	// Line 1061, Address: 0x206a7c, Func Offset: 0x3c
	// Line 1062, Address: 0x206a84, Func Offset: 0x44
	// Line 1061, Address: 0x206a88, Func Offset: 0x48
	// Line 1066, Address: 0x206a8c, Func Offset: 0x4c
	// Line 1070, Address: 0x206a98, Func Offset: 0x58
	// Func End, Address: 0x206aa0, Func Offset: 0x60
}

// 
// Start address: 0x206aa0
void sdSysPlayADXWithTrackMan(int adx_no, int track, int volType, int stopType, float volume)
{
	int status;
	int fade_type;
	// Line 1079, Address: 0x206aa0, Func Offset: 0
	// Line 1086, Address: 0x206aa4, Func Offset: 0x4
	// Line 1079, Address: 0x206aa8, Func Offset: 0x8
	// Line 1086, Address: 0x206aac, Func Offset: 0xc
	// Line 1090, Address: 0x206ab8, Func Offset: 0x18
	// Line 1093, Address: 0x206ac0, Func Offset: 0x20
	// Line 1094, Address: 0x206ac8, Func Offset: 0x28
	// Line 1095, Address: 0x206acc, Func Offset: 0x2c
	// Line 1099, Address: 0x206ad0, Func Offset: 0x30
	// Line 1100, Address: 0x206adc, Func Offset: 0x3c
	// Line 1103, Address: 0x206ae0, Func Offset: 0x40
	// Line 1104, Address: 0x206ae8, Func Offset: 0x48
	// Line 1105, Address: 0x206aec, Func Offset: 0x4c
	// Line 1106, Address: 0x206af4, Func Offset: 0x54
	// Line 1107, Address: 0x206afc, Func Offset: 0x5c
	// Line 1108, Address: 0x206b00, Func Offset: 0x60
	// Line 1109, Address: 0x206b08, Func Offset: 0x68
	// Line 1110, Address: 0x206b10, Func Offset: 0x70
	// Line 1111, Address: 0x206b18, Func Offset: 0x78
	// Line 1112, Address: 0x206b20, Func Offset: 0x80
	// Line 1115, Address: 0x206b28, Func Offset: 0x88
	// Line 1116, Address: 0x206b30, Func Offset: 0x90
	// Func End, Address: 0x206b3c, Func Offset: 0x9c
}

// 
// Start address: 0x206b40
void sfSdCallEx(int no, int track, float volume, int volType, int stopType)
{
	int tr;
	// Line 1140, Address: 0x206b40, Func Offset: 0
	// Line 1143, Address: 0x206b44, Func Offset: 0x4
	// Line 1140, Address: 0x206b48, Func Offset: 0x8
	// Line 1143, Address: 0x206b6c, Func Offset: 0x2c
	// Line 1144, Address: 0x206b80, Func Offset: 0x40
	// Line 1145, Address: 0x206b88, Func Offset: 0x48
	// Line 1146, Address: 0x206b90, Func Offset: 0x50
	// Line 1147, Address: 0x206b94, Func Offset: 0x54
	// Line 1149, Address: 0x206b98, Func Offset: 0x58
	// Line 1150, Address: 0x206ba8, Func Offset: 0x68
	// Line 1153, Address: 0x206bc0, Func Offset: 0x80
	// Line 1154, Address: 0x206bcc, Func Offset: 0x8c
	// Line 1155, Address: 0x206bdc, Func Offset: 0x9c
	// Line 1156, Address: 0x206be0, Func Offset: 0xa0
	// Func End, Address: 0x206c00, Func Offset: 0xc0
}

// 
// Start address: 0x206c00
int GetPlayTrack(int no)
{
	int tr;
	// Line 1165, Address: 0x206c00, Func Offset: 0
	// Line 1166, Address: 0x206c10, Func Offset: 0x10
	// Line 1167, Address: 0x206c1c, Func Offset: 0x1c
	// Line 1168, Address: 0x206c24, Func Offset: 0x24
	// Line 1169, Address: 0x206c38, Func Offset: 0x38
	// Line 1170, Address: 0x206c40, Func Offset: 0x40
	// Func End, Address: 0x206c48, Func Offset: 0x48
}

// 
// Start address: 0x206c50
void sfSdStop(int no, int fadeType)
{
	int tr;
	// Line 1182, Address: 0x206c50, Func Offset: 0
	// Line 1186, Address: 0x206c60, Func Offset: 0x10
	// Line 1191, Address: 0x206c6c, Func Offset: 0x1c
	// Line 1192, Address: 0x206c80, Func Offset: 0x30
	// Line 1195, Address: 0x206c90, Func Offset: 0x40
	// Line 1196, Address: 0x206c9c, Func Offset: 0x4c
	// Line 1197, Address: 0x206ca4, Func Offset: 0x54
	// Line 1198, Address: 0x206ca8, Func Offset: 0x58
	// Func End, Address: 0x206cbc, Func Offset: 0x6c
}

// 
// Start address: 0x206cc0
void sfSdStopAllForce()
{
	int i;
	// Line 1202, Address: 0x206cc0, Func Offset: 0
	// Line 1204, Address: 0x206cd0, Func Offset: 0x10
	// Line 1205, Address: 0x206ce0, Func Offset: 0x20
	// Line 1206, Address: 0x206cec, Func Offset: 0x2c
	// Line 1207, Address: 0x206cf4, Func Offset: 0x34
	// Line 1209, Address: 0x206cf8, Func Offset: 0x38
	// Line 1208, Address: 0x206cfc, Func Offset: 0x3c
	// Line 1212, Address: 0x206d00, Func Offset: 0x40
	// Line 1209, Address: 0x206d04, Func Offset: 0x44
	// Line 1213, Address: 0x206d08, Func Offset: 0x48
	// Line 1210, Address: 0x206d0c, Func Offset: 0x4c
	// Line 1214, Address: 0x206d10, Func Offset: 0x50
	// Line 1211, Address: 0x206d14, Func Offset: 0x54
	// Line 1214, Address: 0x206d18, Func Offset: 0x58
	// Line 1212, Address: 0x206d1c, Func Offset: 0x5c
	// Line 1213, Address: 0x206d20, Func Offset: 0x60
	// Line 1214, Address: 0x206d24, Func Offset: 0x64
	// Line 1215, Address: 0x206d2c, Func Offset: 0x6c
	// Func End, Address: 0x206d40, Func Offset: 0x80
}

// 
// Start address: 0x206d40
void sfSdSetPan(int no, float pan)
{
	int tr;
	int adx_pan;
	// Line 1251, Address: 0x206d40, Func Offset: 0
	// Line 1252, Address: 0x206d4c, Func Offset: 0xc
	// Line 1256, Address: 0x206d58, Func Offset: 0x18
	// Line 1261, Address: 0x206d60, Func Offset: 0x20
	// Line 1259, Address: 0x206d64, Func Offset: 0x24
	// Line 1261, Address: 0x206d70, Func Offset: 0x30
	// Line 1259, Address: 0x206d74, Func Offset: 0x34
	// Line 1261, Address: 0x206d7c, Func Offset: 0x3c
	// Line 1262, Address: 0x206d8c, Func Offset: 0x4c
	// Line 1263, Address: 0x206d9c, Func Offset: 0x5c
	// Line 1264, Address: 0x206dac, Func Offset: 0x6c
	// Line 1265, Address: 0x206dbc, Func Offset: 0x7c
	// Line 1266, Address: 0x206dc0, Func Offset: 0x80
	// Func End, Address: 0x206dd4, Func Offset: 0x94
}

// 
// Start address: 0x206de0
void sfSdSetVolume(int no, float vol)
{
	int tr;
	// Line 1278, Address: 0x206de0, Func Offset: 0
	// Line 1279, Address: 0x206de8, Func Offset: 0x8
	// Line 1281, Address: 0x206df4, Func Offset: 0x14
	// Line 1284, Address: 0x206dfc, Func Offset: 0x1c
	// Line 1285, Address: 0x206e04, Func Offset: 0x24
	// Func End, Address: 0x206e14, Func Offset: 0x34
}

// 
// Start address: 0x206e20
void sfSdSetAngle(int no, float angle)
{
	int tr;
	float pan;
	// Line 1297, Address: 0x206e20, Func Offset: 0
	// Line 1298, Address: 0x206e38, Func Offset: 0x18
	// Line 1304, Address: 0x206e40, Func Offset: 0x20
	// Line 1305, Address: 0x206e44, Func Offset: 0x24
	// Line 1304, Address: 0x206e48, Func Offset: 0x28
	// Line 1305, Address: 0x206e4c, Func Offset: 0x2c
	// Line 1304, Address: 0x206e50, Func Offset: 0x30
	// Line 1305, Address: 0x206e54, Func Offset: 0x34
	// Line 1304, Address: 0x206e5c, Func Offset: 0x3c
	// Line 1305, Address: 0x206e60, Func Offset: 0x40
	// Line 1306, Address: 0x206e6c, Func Offset: 0x4c
	// Line 1309, Address: 0x206e80, Func Offset: 0x60
	// Line 1312, Address: 0x206e88, Func Offset: 0x68
	// Line 1314, Address: 0x206e94, Func Offset: 0x74
	// Line 1319, Address: 0x206e9c, Func Offset: 0x7c
	// Line 1321, Address: 0x206ea8, Func Offset: 0x88
	// Func End, Address: 0x206ec0, Func Offset: 0xa0
}

// 
// Start address: 0x206ec0
int sfSdGetPlayTime(float* time, int no)
{
	int playTime;
	int trackNum;
	int i;
	// Line 1332, Address: 0x206ec0, Func Offset: 0
	// Line 1337, Address: 0x206ec4, Func Offset: 0x4
	// Line 1332, Address: 0x206ec8, Func Offset: 0x8
	// Line 1337, Address: 0x206ecc, Func Offset: 0xc
	// Line 1332, Address: 0x206ed0, Func Offset: 0x10
	// Line 1337, Address: 0x206ed4, Func Offset: 0x14
	// Line 1334, Address: 0x206edc, Func Offset: 0x1c
	// Line 1338, Address: 0x206ee0, Func Offset: 0x20
	// Line 1340, Address: 0x206eec, Func Offset: 0x2c
	// Line 1342, Address: 0x206ef4, Func Offset: 0x34
	// Line 1343, Address: 0x206f08, Func Offset: 0x48
	// Line 1344, Address: 0x206f14, Func Offset: 0x54
	// Line 1345, Address: 0x206f1c, Func Offset: 0x5c
	// Line 1347, Address: 0x206f20, Func Offset: 0x60
	// Line 1348, Address: 0x206f28, Func Offset: 0x68
	// Line 1349, Address: 0x206f44, Func Offset: 0x84
	// Line 1348, Address: 0x206f48, Func Offset: 0x88
	// Line 1349, Address: 0x206f4c, Func Offset: 0x8c
	// Line 1350, Address: 0x206f50, Func Offset: 0x90
	// Func End, Address: 0x206f60, Func Offset: 0xa0
}

// 
// Start address: 0x206f60
void sfSeGetAdxInfo(int* pt, int* adx_no, int se_no)
{
	// Line 1367, Address: 0x206f60, Func Offset: 0
	// Line 1368, Address: 0x206f6c, Func Offset: 0xc
	// Line 1370, Address: 0x206f70, Func Offset: 0x10
	// Line 1371, Address: 0x206f8c, Func Offset: 0x2c
	// Line 1373, Address: 0x206f94, Func Offset: 0x34
	// Line 1374, Address: 0x206fb4, Func Offset: 0x54
	// Line 1376, Address: 0x206fbc, Func Offset: 0x5c
	// Line 1377, Address: 0x206fe0, Func Offset: 0x80
	// Line 1378, Address: 0x206fe8, Func Offset: 0x88
	// Line 1379, Address: 0x206fec, Func Offset: 0x8c
	// Line 1382, Address: 0x206ff0, Func Offset: 0x90
	// Func End, Address: 0x206ff8, Func Offset: 0x98
}

// 
// Start address: 0x207000
int sdGetTrackNo(int bgm_no)
{
	// Line 1408, Address: 0x207000, Func Offset: 0
	// Line 1409, Address: 0x207010, Func Offset: 0x10
	// Line 1411, Address: 0x207018, Func Offset: 0x18
	// Line 1415, Address: 0x207030, Func Offset: 0x30
	// Func End, Address: 0x207038, Func Offset: 0x38
}

// 
// Start address: 0x207040
void sdAllStopSpu()
{
	// Line 1496, Address: 0x207040, Func Offset: 0
	// Line 1497, Address: 0x207048, Func Offset: 0x8
	// Line 1502, Address: 0x207058, Func Offset: 0x18
	// Line 1503, Address: 0x207060, Func Offset: 0x20
	// Line 1504, Address: 0x207068, Func Offset: 0x28
	// Func End, Address: 0x207074, Func Offset: 0x34
}

// 
// Start address: 0x207080
void sdOutputMono(int flag)
{
	// Line 1530, Address: 0x207080, Func Offset: 0
	// Line 1531, Address: 0x207084, Func Offset: 0x4
	// Line 1532, Address: 0x20708c, Func Offset: 0xc
	// Line 1533, Address: 0x20709c, Func Offset: 0x1c
	// Line 1534, Address: 0x2070a4, Func Offset: 0x24
	// Line 1535, Address: 0x2070b4, Func Offset: 0x34
	// Line 1536, Address: 0x2070bc, Func Offset: 0x3c
	// Line 1538, Address: 0x2070c0, Func Offset: 0x40
	// Line 1537, Address: 0x2070c4, Func Offset: 0x44
	// Line 1538, Address: 0x2070d0, Func Offset: 0x50
	// Line 1540, Address: 0x2070d8, Func Offset: 0x58
	// Line 1541, Address: 0x2070e0, Func Offset: 0x60
	// Line 1542, Address: 0x2070f0, Func Offset: 0x70
	// Line 1543, Address: 0x2070f8, Func Offset: 0x78
	// Line 1544, Address: 0x207108, Func Offset: 0x88
	// Line 1547, Address: 0x207110, Func Offset: 0x90
	// Line 1546, Address: 0x207114, Func Offset: 0x94
	// Line 1547, Address: 0x207118, Func Offset: 0x98
	// Line 1549, Address: 0x207124, Func Offset: 0xa4
	// Line 1550, Address: 0x207128, Func Offset: 0xa8
	// Func End, Address: 0x207134, Func Offset: 0xb4
}

// 
// Start address: 0x207140
void sfSetBgmMaster(float volume)
{
	int i;
	// Line 1558, Address: 0x207140, Func Offset: 0
	// Line 1561, Address: 0x207144, Func Offset: 0x4
	// Line 1558, Address: 0x207148, Func Offset: 0x8
	// Line 1561, Address: 0x20714c, Func Offset: 0xc
	// Line 1558, Address: 0x207150, Func Offset: 0x10
	// Line 1561, Address: 0x207154, Func Offset: 0x14
	// Line 1558, Address: 0x207158, Func Offset: 0x18
	// Line 1561, Address: 0x207160, Func Offset: 0x20
	// Line 1562, Address: 0x207168, Func Offset: 0x28
	// Line 1564, Address: 0x20716c, Func Offset: 0x2c
	// Line 1565, Address: 0x207178, Func Offset: 0x38
	// Line 1566, Address: 0x207194, Func Offset: 0x54
	// Line 1567, Address: 0x2071a4, Func Offset: 0x64
	// Line 1568, Address: 0x2071b4, Func Offset: 0x74
	// Line 1570, Address: 0x2071c4, Func Offset: 0x84
	// Line 1571, Address: 0x2071cc, Func Offset: 0x8c
	// Func End, Address: 0x2071e0, Func Offset: 0xa0
}

// 
// Start address: 0x2071e0
float sfGetBgmMaster()
{
	// Line 1580, Address: 0x2071e0, Func Offset: 0
	// Line 1581, Address: 0x2071e4, Func Offset: 0x4
	// Func End, Address: 0x2071ec, Func Offset: 0xc
}

// 
// Start address: 0x2071f0
void sfSetSeMaster(float volume)
{
	// Line 1590, Address: 0x2071f0, Func Offset: 0
	// Line 1591, Address: 0x207208, Func Offset: 0x18
	// Line 1592, Address: 0x20720c, Func Offset: 0x1c
	// Func End, Address: 0x207214, Func Offset: 0x24
}

// 
// Start address: 0x207220
float sfGetSeMaster()
{
	// Line 1601, Address: 0x207220, Func Offset: 0
	// Line 1602, Address: 0x207224, Func Offset: 0x4
	// Func End, Address: 0x20722c, Func Offset: 0xc
}

// 
// Start address: 0x207230
void sdSetStreamMaster(float volume)
{
	// Line 1611, Address: 0x207230, Func Offset: 0
	// Line 1612, Address: 0x207248, Func Offset: 0x18
	// Line 1613, Address: 0x20724c, Func Offset: 0x1c
	// Func End, Address: 0x207254, Func Offset: 0x24
}

// 
// Start address: 0x207260
float sdGetStreamMaster()
{
	// Line 1622, Address: 0x207260, Func Offset: 0
	// Line 1623, Address: 0x207264, Func Offset: 0x4
	// Func End, Address: 0x20726c, Func Offset: 0xc
}

// 
// Start address: 0x207270
void sdSetMenuMaster(float volume)
{
	// Line 1648, Address: 0x207270, Func Offset: 0
	// Line 1649, Address: 0x207290, Func Offset: 0x20
	// Line 1650, Address: 0x207294, Func Offset: 0x24
	// Func End, Address: 0x20729c, Func Offset: 0x2c
}

// 
// Start address: 0x2072a0
void sdSetMenuMasterDirect(float volume)
{
	// Line 1659, Address: 0x2072a0, Func Offset: 0
	// Line 1660, Address: 0x2072b8, Func Offset: 0x18
	// Line 1661, Address: 0x2072bc, Func Offset: 0x1c
	// Func End, Address: 0x2072c4, Func Offset: 0x24
}

// 
// Start address: 0x2072d0
float sdGetMenuMaster()
{
	// Line 1670, Address: 0x2072d0, Func Offset: 0
	// Line 1671, Address: 0x2072d4, Func Offset: 0x4
	// Func End, Address: 0x2072dc, Func Offset: 0xc
}

// 
// Start address: 0x2072e0
void sdSetSpuMaster(float volume)
{
	int Ivol;
	// Line 1682, Address: 0x2072e0, Func Offset: 0
	// Line 1683, Address: 0x2072f4, Func Offset: 0x14
	// Line 1682, Address: 0x2072fc, Func Offset: 0x1c
	// Line 1683, Address: 0x207304, Func Offset: 0x24
	// Line 1684, Address: 0x207310, Func Offset: 0x30
	// Func End, Address: 0x207318, Func Offset: 0x38
}

// 
// Start address: 0x207320
float sdCalcVolumeForAdxSe(float* pos, float muteMeter, int mode)
{
	// Line 1694, Address: 0x207320, Func Offset: 0
	// Func End, Address: 0x207328, Func Offset: 0x8
}

// 
// Start address: 0x207330
void sdCalcPanForAdxSe()
{
	// Line 1707, Address: 0x207330, Func Offset: 0
	// Func End, Address: 0x207338, Func Offset: 0x8
}

// 
// Start address: 0x207340
int sdRadPan2IntPan(float rad_pan)
{
	int Ipan;
	float tmp;
	// Line 1719, Address: 0x207340, Func Offset: 0
	// Line 1715, Address: 0x207344, Func Offset: 0x4
	// Line 1719, Address: 0x207348, Func Offset: 0x8
	// Line 1715, Address: 0x20734c, Func Offset: 0xc
	// Line 1719, Address: 0x207350, Func Offset: 0x10
	// Line 1720, Address: 0x207354, Func Offset: 0x14
	// Line 1723, Address: 0x207368, Func Offset: 0x28
	// Line 1720, Address: 0x20736c, Func Offset: 0x2c
	// Line 1722, Address: 0x207378, Func Offset: 0x38
	// Line 1723, Address: 0x20737c, Func Offset: 0x3c
	// Line 1720, Address: 0x207380, Func Offset: 0x40
	// Line 1722, Address: 0x207384, Func Offset: 0x44
	// Line 1723, Address: 0x20739c, Func Offset: 0x5c
	// Line 1726, Address: 0x2073ac, Func Offset: 0x6c
	// Func End, Address: 0x2073b8, Func Offset: 0x78
}

// 
// Start address: 0x2073c0
float SeCallPosDistance(float* pos, float muteMeter, int mode)
{
	float pos_tmp[4];
	float chara_pos[4];
	float cam_pos[4];
	float tmp[4];
	float dist_cam;
	float dist_pos;
	float len;
	float downPerMeter;
	// Line 1734, Address: 0x2073c0, Func Offset: 0
	// Line 1744, Address: 0x2073c4, Func Offset: 0x4
	// Line 1734, Address: 0x2073c8, Func Offset: 0x8
	// Line 1744, Address: 0x2073cc, Func Offset: 0xc
	// Line 1734, Address: 0x2073d0, Func Offset: 0x10
	// Line 1747, Address: 0x2073d4, Func Offset: 0x14
	// Line 1734, Address: 0x2073d8, Func Offset: 0x18
	// Line 1744, Address: 0x2073e0, Func Offset: 0x20
	// Line 1750, Address: 0x2073e4, Func Offset: 0x24
	// Line 1747, Address: 0x2073e8, Func Offset: 0x28
	// Line 1750, Address: 0x2073f8, Func Offset: 0x38
	// Line 1747, Address: 0x2073fc, Func Offset: 0x3c
	// Line 1750, Address: 0x207404, Func Offset: 0x44
	// Line 1752, Address: 0x20740c, Func Offset: 0x4c
	// Line 1754, Address: 0x207420, Func Offset: 0x60
	// Line 1757, Address: 0x207448, Func Offset: 0x88
	// Line 1758, Address: 0x207460, Func Offset: 0xa0
	// Line 1759, Address: 0x207484, Func Offset: 0xc4
	// Line 1760, Address: 0x207494, Func Offset: 0xd4
	// Line 1759, Address: 0x207498, Func Offset: 0xd8
	// Line 1760, Address: 0x20749c, Func Offset: 0xdc
	// Line 1761, Address: 0x2074b0, Func Offset: 0xf0
	// Line 1763, Address: 0x2074b8, Func Offset: 0xf8
	// Line 1761, Address: 0x2074c4, Func Offset: 0x104
	// Line 1763, Address: 0x2074c8, Func Offset: 0x108
	// Line 1764, Address: 0x2074d8, Func Offset: 0x118
	// Line 1765, Address: 0x2074fc, Func Offset: 0x13c
	// Line 1766, Address: 0x20750c, Func Offset: 0x14c
	// Line 1765, Address: 0x207510, Func Offset: 0x150
	// Line 1766, Address: 0x207514, Func Offset: 0x154
	// Line 1767, Address: 0x207528, Func Offset: 0x168
	// Line 1769, Address: 0x207538, Func Offset: 0x178
	// Line 1771, Address: 0x207540, Func Offset: 0x180
	// Line 1773, Address: 0x207550, Func Offset: 0x190
	// Line 1775, Address: 0x20756c, Func Offset: 0x1ac
	// Line 1777, Address: 0x20757c, Func Offset: 0x1bc
	// Line 1775, Address: 0x207580, Func Offset: 0x1c0
	// Line 1776, Address: 0x207584, Func Offset: 0x1c4
	// Line 1777, Address: 0x207588, Func Offset: 0x1c8
	// Line 1778, Address: 0x20759c, Func Offset: 0x1dc
	// Line 1779, Address: 0x2075a4, Func Offset: 0x1e4
	// Line 1780, Address: 0x2075ac, Func Offset: 0x1ec
	// Line 1781, Address: 0x2075b0, Func Offset: 0x1f0
	// Line 1783, Address: 0x2075bc, Func Offset: 0x1fc
	// Line 1785, Address: 0x2075c8, Func Offset: 0x208
	// Func End, Address: 0x2075dc, Func Offset: 0x21c
}

// 
// Start address: 0x2075e0
float SeCallPosDirection(float* pos)
{
	float rad_pan;
	float pos_tmp[4];
	float wv_mat[4][4];
	// Line 1793, Address: 0x2075e0, Func Offset: 0
	// Line 1802, Address: 0x2075e4, Func Offset: 0x4
	// Line 1793, Address: 0x2075e8, Func Offset: 0x8
	// Line 1799, Address: 0x2075ec, Func Offset: 0xc
	// Line 1800, Address: 0x2075f4, Func Offset: 0x14
	// Line 1799, Address: 0x2075f8, Func Offset: 0x18
	// Line 1802, Address: 0x2075fc, Func Offset: 0x1c
	// Line 1799, Address: 0x207600, Func Offset: 0x20
	// Line 1802, Address: 0x207608, Func Offset: 0x28
	// Line 1799, Address: 0x20760c, Func Offset: 0x2c
	// Line 1802, Address: 0x207614, Func Offset: 0x34
	// Line 1803, Address: 0x20761c, Func Offset: 0x3c
	// Line 1805, Address: 0x20764c, Func Offset: 0x6c
	// Line 1808, Address: 0x207654, Func Offset: 0x74
	// Func End, Address: 0x207660, Func Offset: 0x80
}

// 
// Start address: 0x207660
void sfSdStopAll()
{
	// Line 1856, Address: 0x207660, Func Offset: 0
	// Line 1858, Address: 0x207664, Func Offset: 0x4
	// Line 1856, Address: 0x207668, Func Offset: 0x8
	// Line 1858, Address: 0x20766c, Func Offset: 0xc
	// Line 1859, Address: 0x207674, Func Offset: 0x14
	// Line 1861, Address: 0x20767c, Func Offset: 0x1c
	// Line 1862, Address: 0x207684, Func Offset: 0x24
	// Func End, Address: 0x207690, Func Offset: 0x30
}

// 
// Start address: 0x207690
int sdGetMovieVolume(float volume)
{
	int Ivol;
	// Line 1867, Address: 0x207690, Func Offset: 0
	// Line 1870, Address: 0x20769c, Func Offset: 0xc
	// Line 1871, Address: 0x2076a8, Func Offset: 0x18
	// Line 1870, Address: 0x2076ac, Func Offset: 0x1c
	// Line 1871, Address: 0x2076b8, Func Offset: 0x28
	// Line 1870, Address: 0x2076bc, Func Offset: 0x2c
	// Line 1871, Address: 0x2076cc, Func Offset: 0x3c
	// Line 1874, Address: 0x2076dc, Func Offset: 0x4c
	// Line 1873, Address: 0x2076e0, Func Offset: 0x50
	// Line 1874, Address: 0x2076f0, Func Offset: 0x60
	// Line 1873, Address: 0x2076f4, Func Offset: 0x64
	// Line 1874, Address: 0x2076f8, Func Offset: 0x68
	// Func End, Address: 0x207700, Func Offset: 0x70
}

