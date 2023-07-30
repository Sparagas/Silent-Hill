typedef struct _anon0;
typedef struct _SHADX;
typedef struct _UUID;
typedef struct _anon1;
typedef struct _adxps2_sprm_dvd;
typedef struct _adxps2_sprm_host;
typedef struct _adxps2_fcprm;
typedef struct _anon2;
typedef struct _SD_ADX_TRACK;
typedef struct _SD_SEQ_ADX_MANAGER;
typedef struct _adx_talk;
typedef struct _sj_vtbl;

typedef void(*type_0)();
typedef void(*type_1)();
typedef void(*type_2)(_anon0*);
typedef _UUID*(*type_4)(_anon0*);
typedef void(*type_5)(_anon0*);
typedef void(*type_6)(_anon0*, int, int, _anon1*);
typedef void(*type_7)(_anon0*, int, _anon1*);
typedef void(*type_8)(_anon0*, int, _anon1*);
typedef int(*type_9)(_anon0*, int);
typedef int(*type_13)(_anon0*, int, int, int*);
typedef void(*type_14)(_anon0*, void(*)(void*, int), void*);
typedef void(*type_15)(void*, int);
typedef int(*type_19)(int);
typedef void(*type_20)(void*, char*);
typedef void(*type_27)();

typedef short type_3[2];
typedef _anon0* type_10[2];
typedef char type_11[100];
typedef _anon0* type_12[2];
typedef unsigned char type_16[1980];
typedef unsigned char type_17[360932];
typedef unsigned char type_18[360932][2];
typedef float type_21[4];
typedef _SD_ADX_TRACK type_22[2];
typedef unsigned char type_23[8];
typedef _adx_talk* type_24[2];
typedef unsigned char* type_25[2];
typedef _anon0* type_26[2];

struct _anon0
{
	_sj_vtbl* vtbl;
};

struct _SHADX
{
	_adx_talk* adxt[2];
	unsigned char* track_buf[2];
};

struct _UUID
{
	unsigned int Data1;
	unsigned short Data2;
	unsigned short Data3;
	unsigned char Data4[8];
};

struct _anon1
{
	char* data;
	int len;
};

struct _adxps2_sprm_dvd
{
	char* rtdir;
	int rdmode;
	int nrtry;
	int speed;
	int dtype;
};

struct _adxps2_sprm_host
{
	char* rtdir;
	int rdmode;
	int fsmode;
	int lkmode;
};

struct _adxps2_fcprm
{
	char* flist;
	int maxflen;
	char* fcbuf;
	int fcsize;
};

struct _anon2
{
	int prio_lock;
	int prio_safe;
	int prio_vsync;
	int prio_fs;
	int prio_main;
	int prio_mwidle;
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

struct _adx_talk
{
	char used;
	char stat;
	char pmode;
	char maxnch;
	void* sjd;
	void* stm;
	void* rna;
	_anon0* sjf;
	_anon0* sji;
	_anon0* sjo[2];
	char* ibuf;
	int ibuflen;
	int ibufxlen;
	short* obuf;
	int obufsize;
	int obufdist;
	int svrfreq;
	short maxsct;
	short minsct;
	short outvol;
	short outpan[2];
	short outbalance;
	int maxdecsmpl;
	int lpcnt;
	int lp_skiplen;
	int trp;
	int wpos;
	int mofst;
	short ercode;
	int edecpos;
	short edeccnt;
	short eshrtcnt;
	char lpflg;
	char autorcvr;
	char fltmode;
	char execflag;
	char pstwait_flag;
	char pstready_flag;
	char pause_flag;
	void* amp;
	_anon0* ampsji[2];
	_anon0* ampsjo[2];
	int time_ofst;
	int lesct;
	int trpnsmpl;
	void* lsc;
	char lnkflg;
	char rsv;
	short rsv2;
	unsigned int tvofst;
	unsigned int svcnt;
	unsigned int decofst;
	int flush_nsmpl;
	char stm_start_flg;
	char rsv3;
	short rsv4;
	char* fname_wk;
	char* fname;
	void* dir;
	unsigned int ofst;
	unsigned int nsct;
};

struct _sj_vtbl
{
	void(*QueryInterface)();
	void(*AddRef)();
	void(*Release)();
	void(*Destroy)(_anon0*);
	_UUID*(*GetUuid)(_anon0*);
	void(*Reset)(_anon0*);
	void(*GetChunk)(_anon0*, int, int, _anon1*);
	void(*UngetChunk)(_anon0*, int, _anon1*);
	void(*PutChunk)(_anon0*, int, _anon1*);
	int(*GetNumData)(_anon0*, int);
	int(*IsGetChunk)(_anon0*, int, int, int*);
	void(*EntryErrFunc)(_anon0*, void(*)(void*, int), void*);
};

unsigned char dvd_cash_buf[1980];
int vsync_callback_id;
int(*SdAdxVsyncFunc)(int);
void(*SdAdxErrorFunction)(void*, char*);
unsigned char adx_tracks[360932][2];
_SHADX ap_work;
_SD_SEQ_ADX_MANAGER seqAdxMan;
_anon2 tprm;

void SetupHostFileSystem();
void SetupDVDFileSystem();
void adxInit();
void adxCreateCallback();
void adxDeleteCallback();
void adxInitWarm();
void adxSoundInit();
void adxSoundInitWarm();
void adxQuit();
void adxExecute();
int SdAdxVsyncFunc();
void SdAdxErrorFunction();
void adxDownReloadSector(int flag);
void adxSetPartition(int part_id, char* fname, unsigned char* ptinfo);
void adxTriggerChangePartition(int part_id, char* fname, unsigned char* ptinfo);
int adxPartitionLoadCompleted(int part_id);
void adxSetOutVol(int adx_track, int vol);
void adxSetPan(int adx_track, int ch, int pan);
void adxPlay(int adx_track, int part_id, int afs_num);
int adxGetStat(int adx_track);
int adxGetTime(int adx_track);
void adxPause(int adx_track, int pause_sw);
void adxStop(int adx_track);
void adxOutputMono(int flag);
int adxGetNumDataSjtmp(int adx_track, int ch);
int adxGetNumRoomSjtmp(int adx_track, int ch);

// 
// Start address: 0x24cea0
void SetupHostFileSystem()
{
	_adxps2_sprm_host ParameterStructureHost;
	char dir_path[100];
	// Line 132, Address: 0x24cea0, Func Offset: 0
	// Line 139, Address: 0x24cea4, Func Offset: 0x4
	// Line 132, Address: 0x24cea8, Func Offset: 0x8
	// Line 139, Address: 0x24ceac, Func Offset: 0xc
	// Line 140, Address: 0x24cebc, Func Offset: 0x1c
	// Line 142, Address: 0x24ced4, Func Offset: 0x34
	// Line 141, Address: 0x24ced8, Func Offset: 0x38
	// Line 142, Address: 0x24cedc, Func Offset: 0x3c
	// Line 141, Address: 0x24cee0, Func Offset: 0x40
	// Line 144, Address: 0x24cee8, Func Offset: 0x48
	// Line 159, Address: 0x24cef4, Func Offset: 0x54
	// Func End, Address: 0x24cf00, Func Offset: 0x60
}

// 
// Start address: 0x24cf00
void SetupDVDFileSystem()
{
	_adxps2_fcprm dvd_fcprm;
	_adxps2_sprm_dvd ParameterStructureDvd;
	// Line 166, Address: 0x24cf00, Func Offset: 0
	// Line 175, Address: 0x24cf04, Func Offset: 0x4
	// Line 166, Address: 0x24cf08, Func Offset: 0x8
	// Line 175, Address: 0x24cf0c, Func Offset: 0xc
	// Line 176, Address: 0x24cf1c, Func Offset: 0x1c
	// Line 178, Address: 0x24cf28, Func Offset: 0x28
	// Line 181, Address: 0x24cf34, Func Offset: 0x34
	// Line 182, Address: 0x24cf48, Func Offset: 0x48
	// Line 186, Address: 0x24cf4c, Func Offset: 0x4c
	// Line 182, Address: 0x24cf50, Func Offset: 0x50
	// Line 183, Address: 0x24cf5c, Func Offset: 0x5c
	// Line 184, Address: 0x24cf64, Func Offset: 0x64
	// Line 183, Address: 0x24cf68, Func Offset: 0x68
	// Line 186, Address: 0x24cf6c, Func Offset: 0x6c
	// Line 184, Address: 0x24cf70, Func Offset: 0x70
	// Line 185, Address: 0x24cf74, Func Offset: 0x74
	// Line 184, Address: 0x24cf78, Func Offset: 0x78
	// Line 185, Address: 0x24cf7c, Func Offset: 0x7c
	// Line 186, Address: 0x24cf84, Func Offset: 0x84
	// Line 188, Address: 0x24cf8c, Func Offset: 0x8c
	// Func End, Address: 0x24cf98, Func Offset: 0x98
}

// 
// Start address: 0x24cfa0
void adxInit()
{
	// Line 195, Address: 0x24cfa0, Func Offset: 0
	// Line 200, Address: 0x24cfa8, Func Offset: 0x8
	// Line 203, Address: 0x24cfb0, Func Offset: 0x10
	// Line 241, Address: 0x24cfb8, Func Offset: 0x18
	// Func End, Address: 0x24cfc4, Func Offset: 0x24
}

// 
// Start address: 0x24cfd0
void adxCreateCallback()
{
	// Line 245, Address: 0x24cfd0, Func Offset: 0
	// Line 248, Address: 0x24cfd4, Func Offset: 0x4
	// Line 245, Address: 0x24cfd8, Func Offset: 0x8
	// Line 248, Address: 0x24cfdc, Func Offset: 0xc
	// Line 250, Address: 0x24cff4, Func Offset: 0x24
	// Func End, Address: 0x24d000, Func Offset: 0x30
}

// 
// Start address: 0x24d000
void adxDeleteCallback()
{
	// Line 257, Address: 0x24d000, Func Offset: 0
	// Func End, Address: 0x24d010, Func Offset: 0x10
}

// 
// Start address: 0x24d010
void adxInitWarm()
{
	// Line 264, Address: 0x24d010, Func Offset: 0
	// Line 268, Address: 0x24d018, Func Offset: 0x8
	// Line 271, Address: 0x24d020, Func Offset: 0x10
	// Line 272, Address: 0x24d028, Func Offset: 0x18
	// Line 275, Address: 0x24d038, Func Offset: 0x28
	// Line 281, Address: 0x24d040, Func Offset: 0x30
	// Line 282, Address: 0x24d048, Func Offset: 0x38
	// Func End, Address: 0x24d054, Func Offset: 0x44
}

// 
// Start address: 0x24d060
void adxSoundInit()
{
	// Line 291, Address: 0x24d060, Func Offset: 0
	// Func End, Address: 0x24d068, Func Offset: 0x8
}

// 
// Start address: 0x24d070
void adxSoundInitWarm()
{
	int i;
	_SHADX* ap;
	// Line 296, Address: 0x24d070, Func Offset: 0
	// Line 301, Address: 0x24d074, Func Offset: 0x4
	// Line 296, Address: 0x24d078, Func Offset: 0x8
	// Line 299, Address: 0x24d084, Func Offset: 0x14
	// Line 296, Address: 0x24d088, Func Offset: 0x18
	// Line 299, Address: 0x24d08c, Func Offset: 0x1c
	// Line 301, Address: 0x24d090, Func Offset: 0x20
	// Line 312, Address: 0x24d098, Func Offset: 0x28
	// Line 313, Address: 0x24d0a8, Func Offset: 0x38
	// Line 315, Address: 0x24d0ac, Func Offset: 0x3c
	// Line 321, Address: 0x24d0cc, Func Offset: 0x5c
	// Line 315, Address: 0x24d0d0, Func Offset: 0x60
	// Line 321, Address: 0x24d0d4, Func Offset: 0x64
	// Line 322, Address: 0x24d0e0, Func Offset: 0x70
	// Func End, Address: 0x24d0f8, Func Offset: 0x88
}

// 
// Start address: 0x24d100
void adxQuit()
{
	// Line 327, Address: 0x24d100, Func Offset: 0
	// Line 329, Address: 0x24d108, Func Offset: 0x8
	// Line 332, Address: 0x24d110, Func Offset: 0x10
	// Line 333, Address: 0x24d118, Func Offset: 0x18
	// Line 334, Address: 0x24d120, Func Offset: 0x20
	// Line 335, Address: 0x24d128, Func Offset: 0x28
	// Func End, Address: 0x24d134, Func Offset: 0x34
}

// 
// Start address: 0x24d140
void adxExecute()
{
	// Line 344, Address: 0x24d140, Func Offset: 0
	// Line 399, Address: 0x24d148, Func Offset: 0x8
	// Line 404, Address: 0x24d150, Func Offset: 0x10
	// Line 405, Address: 0x24d158, Func Offset: 0x18
	// Line 406, Address: 0x24d160, Func Offset: 0x20
	// Func End, Address: 0x24d16c, Func Offset: 0x2c
}

// 
// Start address: 0x24d170
int SdAdxVsyncFunc()
{
	// Line 413, Address: 0x24d170, Func Offset: 0
	// Line 417, Address: 0x24d178, Func Offset: 0x8
	// Line 418, Address: 0x24d180, Func Offset: 0x10
	// Line 420, Address: 0x24d188, Func Offset: 0x18
	// Line 419, Address: 0x24d18c, Func Offset: 0x1c
	// Line 420, Address: 0x24d190, Func Offset: 0x20
	// Func End, Address: 0x24d198, Func Offset: 0x28
}

// 
// Start address: 0x24d1a0
void SdAdxErrorFunction()
{
	int ErrorCnt;
	// Line 433, Address: 0x24d1a0, Func Offset: 0
	// Line 442, Address: 0x24d1b0, Func Offset: 0x10
	// Func End, Address: 0x24d1b8, Func Offset: 0x18
}

// 
// Start address: 0x24d1c0
void adxDownReloadSector(int flag)
{
	int i;
	int secNormal;
	_SHADX* ap;
	// Line 453, Address: 0x24d1c0, Func Offset: 0
	// Line 457, Address: 0x24d1d0, Func Offset: 0x10
	// Line 453, Address: 0x24d1d4, Func Offset: 0x14
	// Line 459, Address: 0x24d1d8, Func Offset: 0x18
	// Line 461, Address: 0x24d1e0, Func Offset: 0x20
	// Line 462, Address: 0x24d1f0, Func Offset: 0x30
	// Line 463, Address: 0x24d1f4, Func Offset: 0x34
	// Line 464, Address: 0x24d1fc, Func Offset: 0x3c
	// Line 466, Address: 0x24d204, Func Offset: 0x44
	// Line 471, Address: 0x24d218, Func Offset: 0x58
	// Line 473, Address: 0x24d220, Func Offset: 0x60
	// Line 474, Address: 0x24d228, Func Offset: 0x68
	// Line 473, Address: 0x24d22c, Func Offset: 0x6c
	// Line 474, Address: 0x24d23c, Func Offset: 0x7c
	// Line 475, Address: 0x24d244, Func Offset: 0x84
	// Line 476, Address: 0x24d24c, Func Offset: 0x8c
	// Line 478, Address: 0x24d254, Func Offset: 0x94
	// Line 510, Address: 0x24d268, Func Offset: 0xa8
	// Func End, Address: 0x24d280, Func Offset: 0xc0
}

// 
// Start address: 0x24d280
void adxSetPartition(int part_id, char* fname, unsigned char* ptinfo)
{
	// Line 541, Address: 0x24d280, Func Offset: 0
	// Line 542, Address: 0x24d28c, Func Offset: 0xc
	// Line 544, Address: 0x24d294, Func Offset: 0x14
	// Line 546, Address: 0x24d2a8, Func Offset: 0x28
	// Line 550, Address: 0x24d2b0, Func Offset: 0x30
	// Line 553, Address: 0x24d2b8, Func Offset: 0x38
	// Line 554, Address: 0x24d2d0, Func Offset: 0x50
	// Func End, Address: 0x24d2e0, Func Offset: 0x60
}

// 
// Start address: 0x24d2e0
void adxTriggerChangePartition(int part_id, char* fname, unsigned char* ptinfo)
{
	int err;
	// Line 562, Address: 0x24d2e0, Func Offset: 0
	// Line 569, Address: 0x24d300, Func Offset: 0x20
	// Line 570, Address: 0x24d314, Func Offset: 0x34
	// Line 589, Address: 0x24d31c, Func Offset: 0x3c
	// Line 593, Address: 0x24d324, Func Offset: 0x44
	// Line 594, Address: 0x24d32c, Func Offset: 0x4c
	// Line 595, Address: 0x24d334, Func Offset: 0x54
	// Line 596, Address: 0x24d338, Func Offset: 0x58
	// Func End, Address: 0x24d350, Func Offset: 0x70
}

// 
// Start address: 0x24d350
int adxPartitionLoadCompleted(int part_id)
{
	// Line 604, Address: 0x24d350, Func Offset: 0
	// Line 606, Address: 0x24d358, Func Offset: 0x8
	// Line 610, Address: 0x24d360, Func Offset: 0x10
	// Line 606, Address: 0x24d364, Func Offset: 0x14
	// Line 610, Address: 0x24d36c, Func Offset: 0x1c
	// Func End, Address: 0x24d374, Func Offset: 0x24
}

// 
// Start address: 0x24d380
void adxSetOutVol(int adx_track, int vol)
{
	_SHADX* ap;
	// Line 627, Address: 0x24d380, Func Offset: 0
	// Line 626, Address: 0x24d384, Func Offset: 0x4
	// Line 627, Address: 0x24d388, Func Offset: 0x8
	// Line 626, Address: 0x24d390, Func Offset: 0x10
	// Line 629, Address: 0x24d394, Func Offset: 0x14
	// Line 631, Address: 0x24d3a4, Func Offset: 0x24
	// Line 632, Address: 0x24d3ac, Func Offset: 0x2c
	// Line 633, Address: 0x24d3b0, Func Offset: 0x30
	// Func End, Address: 0x24d3bc, Func Offset: 0x3c
}

// 
// Start address: 0x24d3c0
void adxSetPan(int adx_track, int ch, int pan)
{
	// Line 646, Address: 0x24d3c0, Func Offset: 0
	// Line 648, Address: 0x24d3dc, Func Offset: 0x1c
	// Line 649, Address: 0x24d3e4, Func Offset: 0x24
	// Line 650, Address: 0x24d3ec, Func Offset: 0x2c
	// Line 651, Address: 0x24d3f0, Func Offset: 0x30
	// Func End, Address: 0x24d3fc, Func Offset: 0x3c
}

// 
// Start address: 0x24d400
void adxPlay(int adx_track, int part_id, int afs_num)
{
	// Line 664, Address: 0x24d400, Func Offset: 0
	// Line 666, Address: 0x24d41c, Func Offset: 0x1c
	// Line 667, Address: 0x24d424, Func Offset: 0x24
	// Line 668, Address: 0x24d42c, Func Offset: 0x2c
	// Line 669, Address: 0x24d430, Func Offset: 0x30
	// Func End, Address: 0x24d43c, Func Offset: 0x3c
}

// 
// Start address: 0x24d440
int adxGetStat(int adx_track)
{
	int stat;
	_SHADX* ap;
	// Line 691, Address: 0x24d440, Func Offset: 0
	// Line 687, Address: 0x24d444, Func Offset: 0x4
	// Line 691, Address: 0x24d448, Func Offset: 0x8
	// Line 687, Address: 0x24d450, Func Offset: 0x10
	// Line 696, Address: 0x24d454, Func Offset: 0x14
	// Line 700, Address: 0x24d46c, Func Offset: 0x2c
	// Func End, Address: 0x24d478, Func Offset: 0x38
}

// 
// Start address: 0x24d480
int adxGetTime(int adx_track)
{
	// Line 733, Address: 0x24d480, Func Offset: 0
	// Line 735, Address: 0x24d49c, Func Offset: 0x1c
	// Line 739, Address: 0x24d4ac, Func Offset: 0x2c
	// Func End, Address: 0x24d4b8, Func Offset: 0x38
}

// 
// Start address: 0x24d4c0
void adxPause(int adx_track, int pause_sw)
{
	_SHADX* ap;
	// Line 752, Address: 0x24d4c0, Func Offset: 0
	// Line 751, Address: 0x24d4c4, Func Offset: 0x4
	// Line 752, Address: 0x24d4c8, Func Offset: 0x8
	// Line 751, Address: 0x24d4d0, Func Offset: 0x10
	// Line 754, Address: 0x24d4d4, Func Offset: 0x14
	// Line 755, Address: 0x24d4e4, Func Offset: 0x24
	// Line 756, Address: 0x24d4ec, Func Offset: 0x2c
	// Line 757, Address: 0x24d4f0, Func Offset: 0x30
	// Func End, Address: 0x24d4fc, Func Offset: 0x3c
}

// 
// Start address: 0x24d500
void adxStop(int adx_track)
{
	_SHADX* ap;
	// Line 768, Address: 0x24d500, Func Offset: 0
	// Line 767, Address: 0x24d504, Func Offset: 0x4
	// Line 768, Address: 0x24d508, Func Offset: 0x8
	// Line 767, Address: 0x24d510, Func Offset: 0x10
	// Line 770, Address: 0x24d514, Func Offset: 0x14
	// Line 771, Address: 0x24d524, Func Offset: 0x24
	// Line 772, Address: 0x24d52c, Func Offset: 0x2c
	// Line 773, Address: 0x24d530, Func Offset: 0x30
	// Func End, Address: 0x24d53c, Func Offset: 0x3c
}

// 
// Start address: 0x24d540
void adxOutputMono(int flag)
{
	// Line 783, Address: 0x24d540, Func Offset: 0
	// Line 784, Address: 0x24d544, Func Offset: 0x4
	// Line 785, Address: 0x24d54c, Func Offset: 0xc
	// Line 786, Address: 0x24d554, Func Offset: 0x14
	// Line 787, Address: 0x24d560, Func Offset: 0x20
	// Line 789, Address: 0x24d568, Func Offset: 0x28
	// Func End, Address: 0x24d574, Func Offset: 0x34
}

// 
// Start address: 0x24d580
int adxGetNumDataSjtmp(int adx_track, int ch)
{
	_SHADX* ap;
	// Line 800, Address: 0x24d580, Func Offset: 0
	// Line 799, Address: 0x24d584, Func Offset: 0x4
	// Line 800, Address: 0x24d588, Func Offset: 0x8
	// Line 799, Address: 0x24d590, Func Offset: 0x10
	// Line 802, Address: 0x24d594, Func Offset: 0x14
	// Line 806, Address: 0x24d5ac, Func Offset: 0x2c
	// Func End, Address: 0x24d5b8, Func Offset: 0x38
}

// 
// Start address: 0x24d5c0
int adxGetNumRoomSjtmp(int adx_track, int ch)
{
	_SHADX* ap;
	// Line 816, Address: 0x24d5c0, Func Offset: 0
	// Line 815, Address: 0x24d5c4, Func Offset: 0x4
	// Line 816, Address: 0x24d5c8, Func Offset: 0x8
	// Line 815, Address: 0x24d5d0, Func Offset: 0x10
	// Line 818, Address: 0x24d5d4, Func Offset: 0x14
	// Line 822, Address: 0x24d5ec, Func Offset: 0x2c
	// Func End, Address: 0x24d5f8, Func Offset: 0x38
}

