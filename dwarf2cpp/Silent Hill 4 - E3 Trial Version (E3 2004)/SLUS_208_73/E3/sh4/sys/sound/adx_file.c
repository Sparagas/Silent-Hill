typedef struct _anon0;
typedef enum _mergeFileIDs : unsigned char;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _sfAlsTable;
typedef struct _adx_fs;
typedef enum _ADX_PARTITION_ID : unsigned char;
typedef struct _anon5;
typedef struct _SD_STREAM_MANAGER;
typedef struct _SD_TRACK_MANAGER;
typedef struct _UUID;
typedef enum _enum : unsigned char;
typedef struct _sj_vtbl;
typedef struct _SD_ADX_TRACK;
typedef struct MwsfdIf;
typedef struct _SD_SEQ_ADX_MANAGER;
typedef struct _ADX_FILE_IO_MANAGER;

typedef void(*type_0)(_anon1*, int, int, _anon2*);
typedef void(*type_1)(_anon0*);
typedef void(*type_2)(_anon1*, int, _anon2*);
typedef _enum(*type_3)(_anon0*);
typedef void(*type_4)(_anon0*, int*, int*);
typedef void(*type_5)(_anon1*, int, _anon2*);
typedef void(*type_7)(_anon0*, int);
typedef int(*type_8)(_anon1*, int);
typedef void(*type_10)(_anon0*, int);
typedef void(*type_11)(void*, int);
typedef int(*type_12)(_anon1*, int, int, int*);
typedef int(*type_13)(_anon0*);
typedef void(*type_14)(_anon1*, void(*)(void*, int), void*);
typedef void(*type_16)(_anon0*, int, int);
typedef void(*type_17)(void*, int);
typedef int(*type_18)(_anon0*, int);
typedef void(*type_19)(_anon0*, _anon1*);
typedef void(*type_21)(void*, int);
typedef void(*type_22)(_anon0*, void*, int);
typedef void(*type_27)();
typedef void(*type_28)();
typedef void(*type_29)();
typedef void(*type_31)();
typedef void(*type_32)();
typedef void(*type_33)();
typedef void(*type_35)(_anon1*);
typedef void(*type_36)(_anon0*);
typedef _UUID*(*type_38)(_anon1*);
typedef int(*type_39)(_anon0*);
typedef void(*type_40)(_anon0*);
typedef void(*type_41)(_anon1*);
typedef void(*type_42)(_anon0*, char*);

typedef _SD_TRACK_MANAGER type_6[8];
typedef char type_9[512];
typedef _anon4 type_15[32];
typedef char* type_20[13];
typedef char type_23[512];
typedef _sfAlsTable type_24[0];
typedef float type_25[4];
typedef unsigned char type_26[8];
typedef char type_30[512];
typedef int type_34[128];
typedef _SD_ADX_TRACK type_37[2];

struct _anon0
{
	MwsfdIf* vtbl;
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

struct _anon1
{
	_sj_vtbl* vtbl;
};

struct _anon2
{
	char* data;
	int len;
};

struct _anon3
{
	int reading;
	_anon4 task[32];
	_adx_fs* adxf;
	int current_task;
};

struct _anon4
{
	int id;
	void* addr;
	int size;
	int sect;
	int als_table_index;
	char name[512];
	void(*func)(void*, int);
};

struct _sfAlsTable
{
	short afs_id;
	short afs_index;
};

struct _adx_fs
{
	char used;
	char stat;
	char sjflag;
	char stopnw_flg;
	void* stm;
	_anon1* sj;
	int fnsct;
	int fsize;
	int skpos;
	int rdstpos;
	int rqsct;
	int rdsct;
	char* buf;
	int bsize;
	int rqrdsct;
	int ofst;
	void* dir;
	char* stm_fname;
	unsigned int stm_ofsct;
	unsigned int stm_nsct;
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

struct _anon5
{
	char* name;
	int size;
	int merge_index;
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

struct _UUID
{
	unsigned int Data1;
	unsigned short Data2;
	unsigned short Data3;
	unsigned char Data4[8];
};

enum _enum : unsigned char
{
	MWSFD_STAT_STOP,
	MWSFD_STAT_PREP,
	MWSFD_STAT_PLAYING,
	MWSFD_STAT_PLAYEND,
	MWSFD_STAT_ERROR,
	MWE_PLY_STAT_STOP = 0,
	MWE_PLY_STAT_PREP,
	MWE_PLY_STAT_PLAYING,
	MWE_PLY_STAT_PLAYEND,
	MWE_PLY_STAT_ERROR,
	MWSFD_STAT_END
};

struct _sj_vtbl
{
	void(*QueryInterface)();
	void(*AddRef)();
	void(*Release)();
	void(*Destroy)(_anon1*);
	_UUID*(*GetUuid)(_anon1*);
	void(*Reset)(_anon1*);
	void(*GetChunk)(_anon1*, int, int, _anon2*);
	void(*UngetChunk)(_anon1*, int, _anon2*);
	void(*PutChunk)(_anon1*, int, _anon2*);
	int(*GetNumData)(_anon1*, int);
	int(*IsGetChunk)(_anon1*, int, int, int*);
	void(*EntryErrFunc)(_anon1*, void(*)(void*, int), void*);
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

struct MwsfdIf
{
	void(*QueryInterface)();
	void(*AddRef)();
	void(*Release)();
	void(*VsyncHndl)(_anon0*);
	int(*ExecSvrHndl)(_anon0*);
	void(*Destroy)(_anon0*);
	void(*StartFname)(_anon0*, char*);
	void(*Stop)(_anon0*);
	_enum(*GetStat)(_anon0*);
	void(*GetTime)(_anon0*, int*, int*);
	void(*Pause)(_anon0*, int);
	void(*SetOutVol)(_anon0*, int);
	int(*GetOutVol)(_anon0*);
	void(*SetOutPan)(_anon0*, int, int);
	int(*GetOutPan)(_anon0*, int);
	void(*StartSj)(_anon0*, _anon1*);
	void(*StartMem)(_anon0*, void*, int);
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

struct _ADX_FILE_IO_MANAGER
{
	int use;
	_adx_fs* adxf;
};

char* als_names[13];
_SD_TRACK_MANAGER trackMan[8];
_SD_SEQ_ADX_MANAGER seqAdxMan;
_SD_STREAM_MANAGER streamMan;
int dbTable[128];
_ADX_FILE_IO_MANAGER adx_demo_io;
_sfAlsTable sf_als_table[0];
_anon3 read_work;
int current_get_no;

void StreamReadySetTrackInfo(int type, int track, int adx_no);
void StreamReady(int adx_no, int track);
void StreamQueueingReady();
void StreamPlay();
void StreamPause();
void StreamStop(int fadeType);
int StreamIsPlayEnd(int afs_id);
int StreamIsPerfectPlayEnd(int afs_id);
int StreamIsQueueing();
int StreamReadyOK();
int StreamGetTrack();
void StreamSetVolume(float volume);
int adxDemoFileOpen(int afs_id);
int adxDemoFileRead(int sector, void* buf);
int adxDemoFileSyncCheck();
void adxDemoFileClose();
void adxFileSystemColdInit();
void adxFileSystemHotInit();
void adxFileSystemHotQuit();
_sfAlsTable* sfAlsGetAvailable(int als_index);
_adx_fs* GetAdxfFromAfs(_mergeFileIDs merge_file_id, int index);
_adx_fs* GetAdxfFromFileName(char* file_name);
void ReadTaskInit();
void TaskCallbackExec(int task_idx);
_anon4* TaskGet();
void TaskQuit(int task_idx);
int TaskStart(int task_idx);
int TaskReadWait();
int adxFileReadWithCallback(int merge_index, char* name, void* addr, unsigned int size, void(*func)(void*, int));
int adxFileRead(int merge_index, char* name, void* addr, unsigned int size);
int adxFileReadWaitAll(int mode);
void adxFileReadExecute();
void adxFileReadQuitAll();
int MovieGetInfo(_anon5** p_tbl, _sfAlsTable** p_als, int id);
int MovieOpenFromAfs(_anon0* mwply, _sfAlsTable* p_als);
int MovieOpenFromFile(_anon0* mwply, _anon5* p_tbl);
int adxFileMovieOpen(_anon0* mwply, int id);
int adxFileMovieOpenByName(_anon0* mwply, char* filename);

// 
// Start address: 0x249960
void StreamReadySetTrackInfo(int type, int track, int adx_no)
{
	int stat;
	int fade;
	// Line 77, Address: 0x249960, Func Offset: 0
	// Line 78, Address: 0x249984, Func Offset: 0x24
	// Line 79, Address: 0x249988, Func Offset: 0x28
	// Line 81, Address: 0x24998c, Func Offset: 0x2c
	// Line 82, Address: 0x249994, Func Offset: 0x34
	// Line 83, Address: 0x249998, Func Offset: 0x38
	// Line 85, Address: 0x24999c, Func Offset: 0x3c
	// Line 86, Address: 0x2499a4, Func Offset: 0x44
	// Line 87, Address: 0x2499a8, Func Offset: 0x48
	// Line 88, Address: 0x2499ac, Func Offset: 0x4c
	// Line 102, Address: 0x2499b8, Func Offset: 0x58
	// Line 97, Address: 0x2499c0, Func Offset: 0x60
	// Line 95, Address: 0x2499c4, Func Offset: 0x64
	// Line 96, Address: 0x2499d0, Func Offset: 0x70
	// Line 95, Address: 0x2499d4, Func Offset: 0x74
	// Line 96, Address: 0x2499d8, Func Offset: 0x78
	// Line 98, Address: 0x2499dc, Func Offset: 0x7c
	// Line 96, Address: 0x2499e0, Func Offset: 0x80
	// Line 97, Address: 0x2499e8, Func Offset: 0x88
	// Line 98, Address: 0x2499f4, Func Offset: 0x94
	// Line 97, Address: 0x2499f8, Func Offset: 0x98
	// Line 98, Address: 0x2499fc, Func Offset: 0x9c
	// Line 99, Address: 0x249a08, Func Offset: 0xa8
	// Line 100, Address: 0x249a14, Func Offset: 0xb4
	// Line 99, Address: 0x249a18, Func Offset: 0xb8
	// Line 100, Address: 0x249a1c, Func Offset: 0xbc
	// Line 102, Address: 0x249a20, Func Offset: 0xc0
	// Line 100, Address: 0x249a24, Func Offset: 0xc4
	// Line 102, Address: 0x249a2c, Func Offset: 0xcc
	// Line 105, Address: 0x249a38, Func Offset: 0xd8
	// Func End, Address: 0x249a40, Func Offset: 0xe0
}

// 
// Start address: 0x249a40
void StreamReady(int adx_no, int track)
{
	int tr;
	int vol;
	int pt;
	int playAdxNo;
	int type;
	// Line 116, Address: 0x249a40, Func Offset: 0
	// Line 123, Address: 0x249a44, Func Offset: 0x4
	// Line 116, Address: 0x249a48, Func Offset: 0x8
	// Line 123, Address: 0x249a5c, Func Offset: 0x1c
	// Line 124, Address: 0x249a64, Func Offset: 0x24
	// Line 125, Address: 0x249a6c, Func Offset: 0x2c
	// Line 126, Address: 0x249a78, Func Offset: 0x38
	// Line 127, Address: 0x249a7c, Func Offset: 0x3c
	// Line 130, Address: 0x249a80, Func Offset: 0x40
	// Line 131, Address: 0x249a9c, Func Offset: 0x5c
	// Line 130, Address: 0x249aa4, Func Offset: 0x64
	// Line 131, Address: 0x249aac, Func Offset: 0x6c
	// Line 132, Address: 0x249abc, Func Offset: 0x7c
	// Line 133, Address: 0x249ad8, Func Offset: 0x98
	// Line 134, Address: 0x249ae8, Func Offset: 0xa8
	// Line 138, Address: 0x249af8, Func Offset: 0xb8
	// Line 141, Address: 0x249b08, Func Offset: 0xc8
	// Line 139, Address: 0x249b10, Func Offset: 0xd0
	// Line 142, Address: 0x249b14, Func Offset: 0xd4
	// Line 143, Address: 0x249b18, Func Offset: 0xd8
	// Line 142, Address: 0x249b1c, Func Offset: 0xdc
	// Line 139, Address: 0x249b20, Func Offset: 0xe0
	// Line 140, Address: 0x249b28, Func Offset: 0xe8
	// Line 143, Address: 0x249b2c, Func Offset: 0xec
	// Line 144, Address: 0x249b34, Func Offset: 0xf4
	// Line 149, Address: 0x249b38, Func Offset: 0xf8
	// Line 151, Address: 0x249b44, Func Offset: 0x104
	// Line 152, Address: 0x249b48, Func Offset: 0x108
	// Line 159, Address: 0x249b50, Func Offset: 0x110
	// Line 160, Address: 0x249b60, Func Offset: 0x120
	// Line 162, Address: 0x249b6c, Func Offset: 0x12c
	// Line 164, Address: 0x249b78, Func Offset: 0x138
	// Line 168, Address: 0x249b88, Func Offset: 0x148
	// Line 173, Address: 0x249b98, Func Offset: 0x158
	// Line 174, Address: 0x249ba8, Func Offset: 0x168
	// Func End, Address: 0x249bc0, Func Offset: 0x180
}

// 
// Start address: 0x249bc0
void StreamQueueingReady()
{
	int afs_id;
	int vol;
	// Line 180, Address: 0x249bc0, Func Offset: 0
	// Line 186, Address: 0x249bc4, Func Offset: 0x4
	// Line 180, Address: 0x249bc8, Func Offset: 0x8
	// Line 186, Address: 0x249bd0, Func Offset: 0x10
	// Line 187, Address: 0x249bdc, Func Offset: 0x1c
	// Line 189, Address: 0x249bf8, Func Offset: 0x38
	// Line 190, Address: 0x249c14, Func Offset: 0x54
	// Line 189, Address: 0x249c1c, Func Offset: 0x5c
	// Line 190, Address: 0x249c24, Func Offset: 0x64
	// Line 191, Address: 0x249c34, Func Offset: 0x74
	// Line 192, Address: 0x249c54, Func Offset: 0x94
	// Line 193, Address: 0x249c68, Func Offset: 0xa8
	// Line 194, Address: 0x249c7c, Func Offset: 0xbc
	// Line 195, Address: 0x249c8c, Func Offset: 0xcc
	// Line 197, Address: 0x249ca0, Func Offset: 0xe0
	// Line 196, Address: 0x249ca4, Func Offset: 0xe4
	// Line 197, Address: 0x249ca8, Func Offset: 0xe8
	// Line 198, Address: 0x249cb4, Func Offset: 0xf4
	// Line 199, Address: 0x249cb8, Func Offset: 0xf8
	// Func End, Address: 0x249cc8, Func Offset: 0x108
}

// 
// Start address: 0x249cd0
void StreamPlay()
{
	// Line 205, Address: 0x249cd0, Func Offset: 0
	// Line 208, Address: 0x249cd4, Func Offset: 0x4
	// Line 205, Address: 0x249cd8, Func Offset: 0x8
	// Line 208, Address: 0x249cdc, Func Offset: 0xc
	// Line 209, Address: 0x249cf4, Func Offset: 0x24
	// Line 210, Address: 0x249d04, Func Offset: 0x34
	// Line 212, Address: 0x249d08, Func Offset: 0x38
	// Line 210, Address: 0x249d0c, Func Offset: 0x3c
	// Line 212, Address: 0x249d10, Func Offset: 0x40
	// Line 213, Address: 0x249d34, Func Offset: 0x64
	// Line 214, Address: 0x249d38, Func Offset: 0x68
	// Func End, Address: 0x249d44, Func Offset: 0x74
}

// 
// Start address: 0x249d50
void StreamPause()
{
	int i;
	// Line 220, Address: 0x249d50, Func Offset: 0
	// Line 224, Address: 0x249d54, Func Offset: 0x4
	// Line 220, Address: 0x249d58, Func Offset: 0x8
	// Line 224, Address: 0x249d5c, Func Offset: 0xc
	// Line 225, Address: 0x249d74, Func Offset: 0x24
	// Line 226, Address: 0x249d88, Func Offset: 0x38
	// Line 225, Address: 0x249d8c, Func Offset: 0x3c
	// Line 226, Address: 0x249d90, Func Offset: 0x40
	// Line 229, Address: 0x249da4, Func Offset: 0x54
	// Line 230, Address: 0x249db8, Func Offset: 0x68
	// Line 231, Address: 0x249dc0, Func Offset: 0x70
	// Line 233, Address: 0x249dcc, Func Offset: 0x7c
	// Line 234, Address: 0x249df4, Func Offset: 0xa4
	// Line 235, Address: 0x249df8, Func Offset: 0xa8
	// Func End, Address: 0x249e04, Func Offset: 0xb4
}

// 
// Start address: 0x249e10
void StreamStop(int fadeType)
{
	// Line 244, Address: 0x249e10, Func Offset: 0
	// Line 245, Address: 0x249e20, Func Offset: 0x10
	// Line 244, Address: 0x249e24, Func Offset: 0x14
	// Line 247, Address: 0x249e28, Func Offset: 0x18
	// Line 248, Address: 0x249e2c, Func Offset: 0x1c
	// Line 245, Address: 0x249e30, Func Offset: 0x20
	// Line 247, Address: 0x249e38, Func Offset: 0x28
	// Line 248, Address: 0x249e40, Func Offset: 0x30
	// Line 244, Address: 0x249e48, Func Offset: 0x38
	// Line 245, Address: 0x249e50, Func Offset: 0x40
	// Line 247, Address: 0x249e54, Func Offset: 0x44
	// Line 245, Address: 0x249e58, Func Offset: 0x48
	// Line 248, Address: 0x249e5c, Func Offset: 0x4c
	// Line 247, Address: 0x249e60, Func Offset: 0x50
	// Line 248, Address: 0x249e64, Func Offset: 0x54
	// Line 250, Address: 0x249e68, Func Offset: 0x58
	// Func End, Address: 0x249e70, Func Offset: 0x60
}

// 
// Start address: 0x249e70
int StreamIsPlayEnd(int afs_id)
{
	int i;
	int stat;
	// Line 275, Address: 0x249e70, Func Offset: 0
	// Line 276, Address: 0x249e80, Func Offset: 0x10
	// Line 277, Address: 0x249e8c, Func Offset: 0x1c
	// Line 278, Address: 0x249ea8, Func Offset: 0x38
	// Line 279, Address: 0x249eb8, Func Offset: 0x48
	// Line 280, Address: 0x249ec0, Func Offset: 0x50
	// Line 282, Address: 0x249ec8, Func Offset: 0x58
	// Line 284, Address: 0x249ed8, Func Offset: 0x68
	// Line 285, Address: 0x249ee0, Func Offset: 0x70
	// Func End, Address: 0x249ee8, Func Offset: 0x78
}

// 
// Start address: 0x249ef0
int StreamIsPerfectPlayEnd(int afs_id)
{
	int i;
	// Line 294, Address: 0x249ef0, Func Offset: 0
	// Line 295, Address: 0x249f00, Func Offset: 0x10
	// Line 298, Address: 0x249f0c, Func Offset: 0x1c
	// Line 301, Address: 0x249f34, Func Offset: 0x44
	// Line 303, Address: 0x249f48, Func Offset: 0x58
	// Line 304, Address: 0x249f50, Func Offset: 0x60
	// Func End, Address: 0x249f58, Func Offset: 0x68
}

// 
// Start address: 0x249f60
int StreamIsQueueing()
{
	// Line 319, Address: 0x249f60, Func Offset: 0
	// Line 320, Address: 0x249f64, Func Offset: 0x4
	// Func End, Address: 0x249f6c, Func Offset: 0xc
}

// 
// Start address: 0x249f70
int StreamReadyOK()
{
	// Line 327, Address: 0x249f70, Func Offset: 0
	// Line 328, Address: 0x249f74, Func Offset: 0x4
	// Func End, Address: 0x249f7c, Func Offset: 0xc
}

// 
// Start address: 0x249f80
int StreamGetTrack()
{
	// Line 336, Address: 0x249f80, Func Offset: 0
	// Line 340, Address: 0x249f98, Func Offset: 0x18
	// Func End, Address: 0x249fa0, Func Offset: 0x20
}

// 
// Start address: 0x249fa0
void StreamSetVolume(float volume)
{
	int Ivol;
	// Line 346, Address: 0x249fa0, Func Offset: 0
	// Line 349, Address: 0x249fa4, Func Offset: 0x4
	// Line 346, Address: 0x249fa8, Func Offset: 0x8
	// Line 349, Address: 0x249fb0, Func Offset: 0x10
	// Line 350, Address: 0x249fbc, Func Offset: 0x1c
	// Line 351, Address: 0x249fdc, Func Offset: 0x3c
	// Line 350, Address: 0x249fe4, Func Offset: 0x44
	// Line 351, Address: 0x249fec, Func Offset: 0x4c
	// Line 352, Address: 0x249ffc, Func Offset: 0x5c
	// Line 353, Address: 0x24a01c, Func Offset: 0x7c
	// Line 355, Address: 0x24a038, Func Offset: 0x98
	// Func End, Address: 0x24a048, Func Offset: 0xa8
}

// 
// Start address: 0x24a050
int adxDemoFileOpen(int afs_id)
{
	// Line 389, Address: 0x24a050, Func Offset: 0
	// Line 390, Address: 0x24a054, Func Offset: 0x4
	// Line 389, Address: 0x24a058, Func Offset: 0x8
	// Line 390, Address: 0x24a05c, Func Offset: 0xc
	// Line 391, Address: 0x24a068, Func Offset: 0x18
	// Line 392, Address: 0x24a078, Func Offset: 0x28
	// Line 394, Address: 0x24a088, Func Offset: 0x38
	// Line 396, Address: 0x24a090, Func Offset: 0x40
	// Line 398, Address: 0x24a09c, Func Offset: 0x4c
	// Line 399, Address: 0x24a0a4, Func Offset: 0x54
	// Line 402, Address: 0x24a0a8, Func Offset: 0x58
	// Line 404, Address: 0x24a0b0, Func Offset: 0x60
	// Func End, Address: 0x24a0bc, Func Offset: 0x6c
}

// 
// Start address: 0x24a0c0
int adxDemoFileRead(int sector, void* buf)
{
	int realSec;
	// Line 417, Address: 0x24a0c0, Func Offset: 0
	// Line 420, Address: 0x24a0c4, Func Offset: 0x4
	// Line 417, Address: 0x24a0c8, Func Offset: 0x8
	// Line 420, Address: 0x24a0cc, Func Offset: 0xc
	// Line 421, Address: 0x24a0d8, Func Offset: 0x18
	// Line 424, Address: 0x24a0e0, Func Offset: 0x20
	// Line 425, Address: 0x24a0ec, Func Offset: 0x2c
	// Line 427, Address: 0x24a0f8, Func Offset: 0x38
	// Line 430, Address: 0x24a100, Func Offset: 0x40
	// Line 433, Address: 0x24a110, Func Offset: 0x50
	// Func End, Address: 0x24a11c, Func Offset: 0x5c
}

// 
// Start address: 0x24a120
int adxDemoFileSyncCheck()
{
	int result;
	// Line 442, Address: 0x24a120, Func Offset: 0
	// Line 445, Address: 0x24a124, Func Offset: 0x4
	// Line 442, Address: 0x24a128, Func Offset: 0x8
	// Line 445, Address: 0x24a130, Func Offset: 0x10
	// Line 446, Address: 0x24a13c, Func Offset: 0x1c
	// Line 447, Address: 0x24a144, Func Offset: 0x24
	// Line 449, Address: 0x24a148, Func Offset: 0x28
	// Line 450, Address: 0x24a160, Func Offset: 0x40
	// Line 451, Address: 0x24a164, Func Offset: 0x44
	// Line 453, Address: 0x24a168, Func Offset: 0x48
	// Line 454, Address: 0x24a170, Func Offset: 0x50
	// Func End, Address: 0x24a180, Func Offset: 0x60
}

// 
// Start address: 0x24a180
void adxDemoFileClose()
{
	// Line 461, Address: 0x24a180, Func Offset: 0
	// Line 462, Address: 0x24a184, Func Offset: 0x4
	// Line 461, Address: 0x24a188, Func Offset: 0x8
	// Line 462, Address: 0x24a18c, Func Offset: 0xc
	// Line 466, Address: 0x24a198, Func Offset: 0x18
	// Line 467, Address: 0x24a1a0, Func Offset: 0x20
	// Line 468, Address: 0x24a1ac, Func Offset: 0x2c
	// Line 469, Address: 0x24a1b4, Func Offset: 0x34
	// Func End, Address: 0x24a1c4, Func Offset: 0x44
}

// 
// Start address: 0x24a1d0
void adxFileSystemColdInit()
{
	// Line 512, Address: 0x24a1d0, Func Offset: 0
	// Line 513, Address: 0x24a1d8, Func Offset: 0x8
	// Line 514, Address: 0x24a1dc, Func Offset: 0xc
	// Func End, Address: 0x24a1e4, Func Offset: 0x14
}

// 
// Start address: 0x24a1f0
void adxFileSystemHotInit()
{
	// Line 526, Address: 0x24a1f0, Func Offset: 0
	// Line 527, Address: 0x24a1f8, Func Offset: 0x8
	// Line 528, Address: 0x24a200, Func Offset: 0x10
	// Line 529, Address: 0x24a208, Func Offset: 0x18
	// Line 531, Address: 0x24a20c, Func Offset: 0x1c
	// Func End, Address: 0x24a214, Func Offset: 0x24
}

// 
// Start address: 0x24a220
void adxFileSystemHotQuit()
{
	// Line 538, Address: 0x24a220, Func Offset: 0
	// Line 539, Address: 0x24a228, Func Offset: 0x8
	// Line 541, Address: 0x24a230, Func Offset: 0x10
	// Line 542, Address: 0x24a238, Func Offset: 0x18
	// Func End, Address: 0x24a244, Func Offset: 0x24
}

// 
// Start address: 0x24a250
_sfAlsTable* sfAlsGetAvailable(int als_index)
{
	int partition_id;
	int i;
	_sfAlsTable* ptr;
	_mergeFileIDs merge_file_id;
	// Line 552, Address: 0x24a250, Func Offset: 0
	// Line 557, Address: 0x24a25c, Func Offset: 0xc
	// Line 558, Address: 0x24a264, Func Offset: 0x14
	// Line 560, Address: 0x24a270, Func Offset: 0x20
	// Line 561, Address: 0x24a27c, Func Offset: 0x2c
	// Line 563, Address: 0x24a290, Func Offset: 0x40
	// Line 565, Address: 0x24a294, Func Offset: 0x44
	// Line 567, Address: 0x24a29c, Func Offset: 0x4c
	// Line 569, Address: 0x24a2ac, Func Offset: 0x5c
	// Line 570, Address: 0x24a2b4, Func Offset: 0x64
	// Line 571, Address: 0x24a2bc, Func Offset: 0x6c
	// Line 572, Address: 0x24a2d0, Func Offset: 0x80
	// Line 573, Address: 0x24a2d8, Func Offset: 0x88
	// Func End, Address: 0x24a2ec, Func Offset: 0x9c
}

// 
// Start address: 0x24a2f0
_adx_fs* GetAdxfFromAfs(_mergeFileIDs merge_file_id, int index)
{
	_adx_fs* adxf;
	_ADX_PARTITION_ID partition_id;
	// Line 586, Address: 0x24a2f0, Func Offset: 0
	// Line 590, Address: 0x24a2fc, Func Offset: 0xc
	// Line 593, Address: 0x24a304, Func Offset: 0x14
	// Line 594, Address: 0x24a318, Func Offset: 0x28
	// Line 596, Address: 0x24a320, Func Offset: 0x30
	// Line 598, Address: 0x24a328, Func Offset: 0x38
	// Func End, Address: 0x24a338, Func Offset: 0x48
}

// 
// Start address: 0x24a340
_adx_fs* GetAdxfFromFileName(char* file_name)
{
	_adx_fs* adxf;
	// Line 606, Address: 0x24a340, Func Offset: 0
	// Line 608, Address: 0x24a344, Func Offset: 0x4
	// Line 609, Address: 0x24a34c, Func Offset: 0xc
	// Line 611, Address: 0x24a358, Func Offset: 0x18
	// Line 613, Address: 0x24a360, Func Offset: 0x20
	// Func End, Address: 0x24a36c, Func Offset: 0x2c
}

// 
// Start address: 0x24a370
void ReadTaskInit()
{
	_anon3* work;
	int i;
	// Line 640, Address: 0x24a370, Func Offset: 0
	// Line 643, Address: 0x24a374, Func Offset: 0x4
	// Line 640, Address: 0x24a378, Func Offset: 0x8
	// Line 644, Address: 0x24a380, Func Offset: 0x10
	// Line 647, Address: 0x24a3b0, Func Offset: 0x40
	// Func End, Address: 0x24a3b8, Func Offset: 0x48
}

// 
// Start address: 0x24a3c0
void TaskCallbackExec(int task_idx)
{
	_anon4* task;
	// Line 653, Address: 0x24a3c0, Func Offset: 0
	// Line 651, Address: 0x24a3c4, Func Offset: 0x4
	// Line 653, Address: 0x24a3c8, Func Offset: 0x8
	// Line 651, Address: 0x24a3cc, Func Offset: 0xc
	// Line 653, Address: 0x24a3d0, Func Offset: 0x10
	// Line 654, Address: 0x24a3f0, Func Offset: 0x30
	// Line 655, Address: 0x24a3f8, Func Offset: 0x38
	// Line 656, Address: 0x24a404, Func Offset: 0x44
	// Line 657, Address: 0x24a408, Func Offset: 0x48
	// Func End, Address: 0x24a414, Func Offset: 0x54
}

// 
// Start address: 0x24a420
_anon4* TaskGet()
{
	int num;
	int i;
	_anon3* work;
	_anon4* task;
	// Line 665, Address: 0x24a420, Func Offset: 0
	// Line 669, Address: 0x24a424, Func Offset: 0x4
	// Line 665, Address: 0x24a428, Func Offset: 0x8
	// Line 670, Address: 0x24a42c, Func Offset: 0xc
	// Line 671, Address: 0x24a438, Func Offset: 0x18
	// Line 673, Address: 0x24a444, Func Offset: 0x24
	// Line 675, Address: 0x24a44c, Func Offset: 0x2c
	// Line 676, Address: 0x24a460, Func Offset: 0x40
	// Line 680, Address: 0x24a46c, Func Offset: 0x4c
	// Line 681, Address: 0x24a474, Func Offset: 0x54
	// Line 684, Address: 0x24a478, Func Offset: 0x58
	// Line 682, Address: 0x24a480, Func Offset: 0x60
	// Line 684, Address: 0x24a484, Func Offset: 0x64
	// Line 682, Address: 0x24a488, Func Offset: 0x68
	// Line 684, Address: 0x24a48c, Func Offset: 0x6c
	// Line 686, Address: 0x24a498, Func Offset: 0x78
	// Line 684, Address: 0x24a49c, Func Offset: 0x7c
	// Line 687, Address: 0x24a4a0, Func Offset: 0x80
	// Line 688, Address: 0x24a4a4, Func Offset: 0x84
	// Line 689, Address: 0x24a4a8, Func Offset: 0x88
	// Line 690, Address: 0x24a4ac, Func Offset: 0x8c
	// Line 691, Address: 0x24a4b0, Func Offset: 0x90
	// Line 692, Address: 0x24a4b4, Func Offset: 0x94
	// Line 695, Address: 0x24a4b8, Func Offset: 0x98
	// Func End, Address: 0x24a4c0, Func Offset: 0xa0
}

// 
// Start address: 0x24a4c0
void TaskQuit(int task_idx)
{
	_anon3* work;
	// Line 699, Address: 0x24a4c0, Func Offset: 0
	// Line 703, Address: 0x24a4c4, Func Offset: 0x4
	// Line 699, Address: 0x24a4c8, Func Offset: 0x8
	// Line 703, Address: 0x24a4cc, Func Offset: 0xc
	// Line 699, Address: 0x24a4d0, Func Offset: 0x10
	// Line 703, Address: 0x24a4d4, Func Offset: 0x14
	// Line 700, Address: 0x24a4d8, Func Offset: 0x18
	// Line 703, Address: 0x24a4dc, Func Offset: 0x1c
	// Line 700, Address: 0x24a4e0, Func Offset: 0x20
	// Line 703, Address: 0x24a4e4, Func Offset: 0x24
	// Line 704, Address: 0x24a4ec, Func Offset: 0x2c
	// Line 703, Address: 0x24a4f0, Func Offset: 0x30
	// Line 704, Address: 0x24a4f4, Func Offset: 0x34
	// Line 706, Address: 0x24a500, Func Offset: 0x40
	// Line 707, Address: 0x24a508, Func Offset: 0x48
	// Line 710, Address: 0x24a50c, Func Offset: 0x4c
	// Line 711, Address: 0x24a514, Func Offset: 0x54
	// Func End, Address: 0x24a528, Func Offset: 0x68
}

// 
// Start address: 0x24a530
int TaskStart(int task_idx)
{
	_anon3* work;
	_anon4* task;
	_sfAlsTable* alsp;
	int sectsize;
	// Line 724, Address: 0x24a530, Func Offset: 0
	// Line 726, Address: 0x24a534, Func Offset: 0x4
	// Line 724, Address: 0x24a538, Func Offset: 0x8
	// Line 726, Address: 0x24a53c, Func Offset: 0xc
	// Line 724, Address: 0x24a540, Func Offset: 0x10
	// Line 726, Address: 0x24a544, Func Offset: 0x14
	// Line 724, Address: 0x24a548, Func Offset: 0x18
	// Line 726, Address: 0x24a54c, Func Offset: 0x1c
	// Line 725, Address: 0x24a550, Func Offset: 0x20
	// Line 724, Address: 0x24a554, Func Offset: 0x24
	// Line 732, Address: 0x24a558, Func Offset: 0x28
	// Line 725, Address: 0x24a55c, Func Offset: 0x2c
	// Line 726, Address: 0x24a560, Func Offset: 0x30
	// Line 732, Address: 0x24a564, Func Offset: 0x34
	// Line 726, Address: 0x24a568, Func Offset: 0x38
	// Line 744, Address: 0x24a570, Func Offset: 0x40
	// Line 745, Address: 0x24a57c, Func Offset: 0x4c
	// Line 748, Address: 0x24a584, Func Offset: 0x54
	// Line 749, Address: 0x24a594, Func Offset: 0x64
	// Line 757, Address: 0x24a598, Func Offset: 0x68
	// Line 759, Address: 0x24a5a4, Func Offset: 0x74
	// Line 763, Address: 0x24a5b4, Func Offset: 0x84
	// Line 764, Address: 0x24a5bc, Func Offset: 0x8c
	// Line 765, Address: 0x24a5cc, Func Offset: 0x9c
	// Line 766, Address: 0x24a5d4, Func Offset: 0xa4
	// Line 767, Address: 0x24a5dc, Func Offset: 0xac
	// Line 766, Address: 0x24a5e0, Func Offset: 0xb0
	// Line 770, Address: 0x24a5e4, Func Offset: 0xb4
	// Line 771, Address: 0x24a5ec, Func Offset: 0xbc
	// Line 772, Address: 0x24a5f4, Func Offset: 0xc4
	// Line 771, Address: 0x24a5f8, Func Offset: 0xc8
	// Line 775, Address: 0x24a5fc, Func Offset: 0xcc
	// Line 776, Address: 0x24a604, Func Offset: 0xd4
	// Line 777, Address: 0x24a60c, Func Offset: 0xdc
	// Line 778, Address: 0x24a610, Func Offset: 0xe0
	// Line 781, Address: 0x24a618, Func Offset: 0xe8
	// Line 782, Address: 0x24a62c, Func Offset: 0xfc
	// Line 785, Address: 0x24a630, Func Offset: 0x100
	// Line 786, Address: 0x24a634, Func Offset: 0x104
	// Line 795, Address: 0x24a644, Func Offset: 0x114
	// Line 796, Address: 0x24a648, Func Offset: 0x118
	// Func End, Address: 0x24a660, Func Offset: 0x130
}

// 
// Start address: 0x24a660
int TaskReadWait()
{
	// Line 809, Address: 0x24a660, Func Offset: 0
	// Line 813, Address: 0x24a66c, Func Offset: 0xc
	// Func End, Address: 0x24a674, Func Offset: 0x14
}

// 
// Start address: 0x24a680
int adxFileReadWithCallback(int merge_index, char* name, void* addr, unsigned int size, void(*func)(void*, int))
{
	_anon3* work;
	_anon4* task;
	// Line 842, Address: 0x24a680, Func Offset: 0
	// Line 845, Address: 0x24a698, Func Offset: 0x18
	// Line 848, Address: 0x24a69c, Func Offset: 0x1c
	// Line 849, Address: 0x24a6a4, Func Offset: 0x24
	// Line 850, Address: 0x24a6ac, Func Offset: 0x2c
	// Line 852, Address: 0x24a6b8, Func Offset: 0x38
	// Line 853, Address: 0x24a6c0, Func Offset: 0x40
	// Line 854, Address: 0x24a6c4, Func Offset: 0x44
	// Line 855, Address: 0x24a6c8, Func Offset: 0x48
	// Line 857, Address: 0x24a6cc, Func Offset: 0x4c
	// Line 858, Address: 0x24a6d4, Func Offset: 0x54
	// Line 860, Address: 0x24a6e0, Func Offset: 0x60
	// Line 863, Address: 0x24a6e8, Func Offset: 0x68
	// Func End, Address: 0x24a6f8, Func Offset: 0x78
}

// 
// Start address: 0x24a700
int adxFileRead(int merge_index, char* name, void* addr, unsigned int size)
{
	// Line 881, Address: 0x24a700, Func Offset: 0
	// Func End, Address: 0x24a708, Func Offset: 0x8
}

// 
// Start address: 0x24a710
int adxFileReadWaitAll(int mode)
{
	// Line 898, Address: 0x24a710, Func Offset: 0
	// Line 902, Address: 0x24a714, Func Offset: 0x4
	// Line 903, Address: 0x24a71c, Func Offset: 0xc
	// Line 907, Address: 0x24a72c, Func Offset: 0x1c
	// Line 908, Address: 0x24a730, Func Offset: 0x20
	// Line 911, Address: 0x24a744, Func Offset: 0x34
	// Line 912, Address: 0x24a74c, Func Offset: 0x3c
	// Line 914, Address: 0x24a754, Func Offset: 0x44
	// Line 915, Address: 0x24a75c, Func Offset: 0x4c
	// Line 916, Address: 0x24a764, Func Offset: 0x54
	// Line 918, Address: 0x24a770, Func Offset: 0x60
	// Line 919, Address: 0x24a778, Func Offset: 0x68
	// Func End, Address: 0x24a784, Func Offset: 0x74
}

// 
// Start address: 0x24a790
void adxFileReadExecute()
{
	int i;
	_anon3* work;
	// Line 925, Address: 0x24a790, Func Offset: 0
	// Line 929, Address: 0x24a794, Func Offset: 0x4
	// Line 925, Address: 0x24a798, Func Offset: 0x8
	// Line 929, Address: 0x24a7a4, Func Offset: 0x14
	// Line 927, Address: 0x24a7a8, Func Offset: 0x18
	// Line 929, Address: 0x24a7ac, Func Offset: 0x1c
	// Line 930, Address: 0x24a7b4, Func Offset: 0x24
	// Line 931, Address: 0x24a7c8, Func Offset: 0x38
	// Line 932, Address: 0x24a7d0, Func Offset: 0x40
	// Line 933, Address: 0x24a7d8, Func Offset: 0x48
	// Line 934, Address: 0x24a7e0, Func Offset: 0x50
	// Line 935, Address: 0x24a7f4, Func Offset: 0x64
	// Line 937, Address: 0x24a7fc, Func Offset: 0x6c
	// Line 939, Address: 0x24a804, Func Offset: 0x74
	// Line 941, Address: 0x24a808, Func Offset: 0x78
	// Line 943, Address: 0x24a818, Func Offset: 0x88
	// Line 944, Address: 0x24a82c, Func Offset: 0x9c
	// Line 945, Address: 0x24a834, Func Offset: 0xa4
	// Line 947, Address: 0x24a83c, Func Offset: 0xac
	// Line 949, Address: 0x24a850, Func Offset: 0xc0
	// Line 950, Address: 0x24a85c, Func Offset: 0xcc
	// Line 952, Address: 0x24a860, Func Offset: 0xd0
	// Func End, Address: 0x24a874, Func Offset: 0xe4
}

// 
// Start address: 0x24a880
void adxFileReadQuitAll()
{
	_anon3* work;
	// Line 977, Address: 0x24a880, Func Offset: 0
	// Line 979, Address: 0x24a88c, Func Offset: 0xc
	// Line 981, Address: 0x24a890, Func Offset: 0x10
	// Line 983, Address: 0x24a898, Func Offset: 0x18
	// Line 984, Address: 0x24a8a8, Func Offset: 0x28
	// Line 985, Address: 0x24a8b0, Func Offset: 0x30
	// Line 988, Address: 0x24a8b8, Func Offset: 0x38
	// Line 989, Address: 0x24a8c0, Func Offset: 0x40
	// Func End, Address: 0x24a8d0, Func Offset: 0x50
}

// 
// Start address: 0x24a8d0
int MovieGetInfo(_anon5** p_tbl, _sfAlsTable** p_als, int id)
{
	// Line 1004, Address: 0x24a8d0, Func Offset: 0
	// Line 1008, Address: 0x24a8f0, Func Offset: 0x20
	// Line 1009, Address: 0x24a900, Func Offset: 0x30
	// Line 1010, Address: 0x24a908, Func Offset: 0x38
	// Line 1011, Address: 0x24a914, Func Offset: 0x44
	// Line 1012, Address: 0x24a91c, Func Offset: 0x4c
	// Line 1016, Address: 0x24a920, Func Offset: 0x50
	// Line 1018, Address: 0x24a92c, Func Offset: 0x5c
	// Line 1019, Address: 0x24a930, Func Offset: 0x60
	// Func End, Address: 0x24a948, Func Offset: 0x78
}

// 
// Start address: 0x24a950
int MovieOpenFromAfs(_anon0* mwply, _sfAlsTable* p_als)
{
	_ADX_PARTITION_ID pt_id;
	short afs_idx;
	// Line 1024, Address: 0x24a950, Func Offset: 0
	// Line 1029, Address: 0x24a964, Func Offset: 0x14
	// Line 1030, Address: 0x24a96c, Func Offset: 0x1c
	// Line 1031, Address: 0x24a974, Func Offset: 0x24
	// Line 1038, Address: 0x24a978, Func Offset: 0x28
	// Line 1039, Address: 0x24a98c, Func Offset: 0x3c
	// Line 1040, Address: 0x24a998, Func Offset: 0x48
	// Line 1041, Address: 0x24a9a0, Func Offset: 0x50
	// Line 1045, Address: 0x24a9a8, Func Offset: 0x58
	// Line 1046, Address: 0x24a9bc, Func Offset: 0x6c
	// Line 1047, Address: 0x24a9d4, Func Offset: 0x84
	// Line 1048, Address: 0x24a9d8, Func Offset: 0x88
	// Func End, Address: 0x24a9f0, Func Offset: 0xa0
}

// 
// Start address: 0x24a9f0
int MovieOpenFromFile(_anon0* mwply, _anon5* p_tbl)
{
	char tmpname[512];
	char* name2;
	// Line 1052, Address: 0x24a9f0, Func Offset: 0
	// Line 1056, Address: 0x24aa04, Func Offset: 0x14
	// Line 1057, Address: 0x24aa10, Func Offset: 0x20
	// Line 1058, Address: 0x24aa1c, Func Offset: 0x2c
	// Line 1059, Address: 0x24aa24, Func Offset: 0x34
	// Line 1061, Address: 0x24aa28, Func Offset: 0x38
	// Line 1063, Address: 0x24aa3c, Func Offset: 0x4c
	// Line 1067, Address: 0x24aa44, Func Offset: 0x54
	// Line 1069, Address: 0x24aa50, Func Offset: 0x60
	// Line 1070, Address: 0x24aa64, Func Offset: 0x74
	// Line 1072, Address: 0x24aa74, Func Offset: 0x84
	// Line 1073, Address: 0x24aa78, Func Offset: 0x88
	// Func End, Address: 0x24aa8c, Func Offset: 0x9c
}

// 
// Start address: 0x24aa90
int adxFileMovieOpen(_anon0* mwply, int id)
{
	_anon5* p_tbl;
	_sfAlsTable* p_als;
	// Line 1089, Address: 0x24aa90, Func Offset: 0
	// Line 1094, Address: 0x24aa9c, Func Offset: 0xc
	// Line 1089, Address: 0x24aaa0, Func Offset: 0x10
	// Line 1090, Address: 0x24aaa8, Func Offset: 0x18
	// Line 1094, Address: 0x24aaac, Func Offset: 0x1c
	// Line 1095, Address: 0x24aac0, Func Offset: 0x30
	// Line 1098, Address: 0x24aacc, Func Offset: 0x3c
	// Line 1100, Address: 0x24aad4, Func Offset: 0x44
	// Line 1101, Address: 0x24aae8, Func Offset: 0x58
	// Line 1106, Address: 0x24aaf0, Func Offset: 0x60
	// Line 1107, Address: 0x24ab08, Func Offset: 0x78
	// Line 1110, Address: 0x24ab10, Func Offset: 0x80
	// Line 1111, Address: 0x24ab18, Func Offset: 0x88
	// Func End, Address: 0x24ab28, Func Offset: 0x98
}

// 
// Start address: 0x24ab30
int adxFileMovieOpenByName(_anon0* mwply, char* filename)
{
	char tmpname[512];
	// Line 1125, Address: 0x24ab30, Func Offset: 0
	// Line 1128, Address: 0x24ab3c, Func Offset: 0xc
	// Line 1129, Address: 0x24ab44, Func Offset: 0x14
	// Line 1131, Address: 0x24ab50, Func Offset: 0x20
	// Line 1132, Address: 0x24ab58, Func Offset: 0x28
	// Line 1134, Address: 0x24ab6c, Func Offset: 0x3c
	// Line 1135, Address: 0x24ab70, Func Offset: 0x40
	// Func End, Address: 0x24ab80, Func Offset: 0x50
}

