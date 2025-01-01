typedef union fsFileIndex;
typedef struct _anon0;
typedef union fsFile;
typedef struct _SH2_SYS;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon1;


typedef fsFileIndex type_0[1];
typedef fsFileIndex type_1[1];
typedef <unknown fundamental type (0xa510)> type_2[5040];
typedef fsFileIndex type_3[1];
typedef unsigned int type_4[8];
typedef fsFileIndex type_5[1];
typedef fsFileIndex type_6[1];
typedef fsFileIndex type_7[1];
typedef fsFileIndex type_8[1];
typedef fsFileIndex type_9[1];
typedef fsFileIndex type_10[1];
typedef fsFileIndex type_11[1];
typedef fsFileIndex type_12[1];
typedef fsFileIndex type_13[1];
typedef fsFileIndex type_14[1];
typedef fsFileIndex type_15[1];
typedef fsFileIndex type_16[1];

union fsFileIndex
{
	_anon0 index;
	unsigned long pack;
};

struct _anon0
{
	fsFile* fp;
	char* name;
};

union fsFile
{
	_anon1 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
};

struct _SH2_SYS
{
	unsigned int step[8];
	unsigned int pre_playable;
	int main_status;
	unsigned int soft_reset;
	unsigned int frame_cnt;
};

struct fsCdFile
{
	struct
	{
		int type : 8;
		int number : 24;
	};
	char* name;
	int lsn;
	int size;
};

struct fsMgcFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	fsFile* parent;
	char* start;
	char* end;
};

struct fsMgfFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	fsFile* parent;
	int offset;
	int size;
};

struct fsHdFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	char* name;
	int offset;
	int size;
};

struct fsMgpFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	fsFile* file;
	fsMgcFile* start;
	fsMgcFile* end;
};

struct _anon1
{
	struct
	{
		int type : 8;
		int number : 24;
	};
	int pad0;
	int pad1;
	int pad2;
};

fsFileIndex* movieLastFile;
fsFileIndex data_movie_toilet_pss[1];
fsFileIndex data_movie_saikai_pss[1];
fsFileIndex data_movie_rouya_pss[1];
fsFileIndex data_movie_open_voc_pss[1];
fsFileIndex data_movie_open_bgm_pss[1];
fsFileIndex data_movie_murder_pss[1];
fsFileIndex data_movie_korosu_b_pss[1];
fsFileIndex data_movie_korosu_a_pss[1];
fsFileIndex data_movie_knife_pss[1];
fsFileIndex data_movie_hei_pss[1];
fsFileIndex data_movie_hakaba_pss[1];
fsFileIndex data_movie_gero_pss[1];
fsFileIndex data_movie_ending_pss[1];
fsFileIndex data_movie_end_dog_pss[1];
fsFileIndex data_movie_deai_pss[1];
int movieExecDummy;
int movieLastExitStatus;
_SH2_SYS Sh2sys;

int MovieSelectSlot(fsFileIndex* id);
void MoviePreSet(fsFileIndex* id);
void MovieTitlePreSet(fsFileIndex* id);
void MovieInit();
int MovieMain();
int MovieWaitReady();
void MoviePlayFromReady();
int MovieCheckSleep();
int MoviePlayOPMovie();
void movieSubPreSet(fsFileIndex* id, void* wk);
int movieGetLastExitStatus();
void movieSetSubTitleData(unsigned short* msg_bufp, void* adr_msg_time, int msg_start);

// 
// Start address: 0x287480
int MovieSelectSlot(fsFileIndex* id)
{
	int slot;
	// Line 36, Address: 0x287480, Func Offset: 0
	// Line 43, Address: 0x287488, Func Offset: 0x8
	// Line 61, Address: 0x287694, Func Offset: 0x214
	// Line 63, Address: 0x2876d4, Func Offset: 0x254
	// Func End, Address: 0x2876e4, Func Offset: 0x264
}

// 
// Start address: 0x2876f0
void MoviePreSet(fsFileIndex* id)
{
	int slot;
	// Line 67, Address: 0x2876f0, Func Offset: 0
	// Line 71, Address: 0x287700, Func Offset: 0x10
	// Line 72, Address: 0x287708, Func Offset: 0x18
	// Line 75, Address: 0x287714, Func Offset: 0x24
	// Line 76, Address: 0x287724, Func Offset: 0x34
	// Func End, Address: 0x287738, Func Offset: 0x48
}

// 
// Start address: 0x287740
void MovieTitlePreSet(fsFileIndex* id)
{
	// Line 79, Address: 0x287740, Func Offset: 0
	// Line 81, Address: 0x287750, Func Offset: 0x10
	// Line 82, Address: 0x287758, Func Offset: 0x18
	// Line 83, Address: 0x287768, Func Offset: 0x28
	// Func End, Address: 0x28777c, Func Offset: 0x3c
}

// 
// Start address: 0x287780
void MovieInit()
{
	// Line 86, Address: 0x287780, Func Offset: 0
	// Line 88, Address: 0x287788, Func Offset: 0x8
	// Line 89, Address: 0x287790, Func Offset: 0x10
	// Line 90, Address: 0x287798, Func Offset: 0x18
	// Line 91, Address: 0x2877a0, Func Offset: 0x20
	// Func End, Address: 0x2877b0, Func Offset: 0x30
}

// 
// Start address: 0x2877b0
int MovieMain()
{
	int ret;
	int result;
	// Line 99, Address: 0x2877b0, Func Offset: 0
	// Line 101, Address: 0x2877bc, Func Offset: 0xc
	// Line 103, Address: 0x2877c0, Func Offset: 0x10
	// Line 107, Address: 0x2877d0, Func Offset: 0x20
	// Line 108, Address: 0x2877d8, Func Offset: 0x28
	// Line 112, Address: 0x2877e4, Func Offset: 0x34
	// Line 113, Address: 0x2877ec, Func Offset: 0x3c
	// Line 115, Address: 0x287800, Func Offset: 0x50
	// Line 116, Address: 0x287818, Func Offset: 0x68
	// Line 118, Address: 0x287820, Func Offset: 0x70
	// Line 120, Address: 0x287830, Func Offset: 0x80
	// Line 121, Address: 0x287844, Func Offset: 0x94
	// Line 123, Address: 0x287850, Func Offset: 0xa0
	// Line 126, Address: 0x287854, Func Offset: 0xa4
	// Line 128, Address: 0x287858, Func Offset: 0xa8
	// Line 131, Address: 0x287860, Func Offset: 0xb0
	// Line 132, Address: 0x28786c, Func Offset: 0xbc
	// Line 133, Address: 0x287870, Func Offset: 0xc0
	// Func End, Address: 0x287884, Func Offset: 0xd4
}

// 
// Start address: 0x287890
int MovieWaitReady()
{
	// Line 147, Address: 0x287890, Func Offset: 0
	// Line 158, Address: 0x2878a0, Func Offset: 0x10
	// Func End, Address: 0x2878a8, Func Offset: 0x18
}

// 
// Start address: 0x2878b0
void MoviePlayFromReady()
{
	// Line 161, Address: 0x2878b0, Func Offset: 0
	// Line 162, Address: 0x2878b8, Func Offset: 0x8
	// Line 163, Address: 0x2878cc, Func Offset: 0x1c
	// Func End, Address: 0x2878dc, Func Offset: 0x2c
}

// 
// Start address: 0x2878e0
int MovieCheckSleep()
{
	// Line 167, Address: 0x2878e0, Func Offset: 0
	// Line 169, Address: 0x2878e8, Func Offset: 0x8
	// Line 172, Address: 0x2878f8, Func Offset: 0x18
	// Func End, Address: 0x287908, Func Offset: 0x28
}

// 
// Start address: 0x287910
int MoviePlayOPMovie()
{
	int result;
	// Line 176, Address: 0x287910, Func Offset: 0
	// Line 177, Address: 0x28791c, Func Offset: 0xc
	// Line 179, Address: 0x287920, Func Offset: 0x10
	// Line 182, Address: 0x28794c, Func Offset: 0x3c
	// Line 236, Address: 0x287958, Func Offset: 0x48
	// Line 238, Address: 0x287968, Func Offset: 0x58
	// Line 239, Address: 0x2879a4, Func Offset: 0x94
	// Line 242, Address: 0x2879ac, Func Offset: 0x9c
	// Line 243, Address: 0x2879bc, Func Offset: 0xac
	// Line 244, Address: 0x2879f8, Func Offset: 0xe8
	// Line 247, Address: 0x287a00, Func Offset: 0xf0
	// Line 248, Address: 0x287a10, Func Offset: 0x100
	// Line 251, Address: 0x287a1c, Func Offset: 0x10c
	// Line 252, Address: 0x287a24, Func Offset: 0x114
	// Line 253, Address: 0x287a30, Func Offset: 0x120
	// Line 254, Address: 0x287a44, Func Offset: 0x134
	// Line 259, Address: 0x287a58, Func Offset: 0x148
	// Line 260, Address: 0x287a60, Func Offset: 0x150
	// Line 261, Address: 0x287a74, Func Offset: 0x164
	// Line 263, Address: 0x287a84, Func Offset: 0x174
	// Line 264, Address: 0x287a98, Func Offset: 0x188
	// Line 266, Address: 0x287aa4, Func Offset: 0x194
	// Line 270, Address: 0x287aa8, Func Offset: 0x198
	// Line 276, Address: 0x287ab0, Func Offset: 0x1a0
	// Line 277, Address: 0x287ab8, Func Offset: 0x1a8
	// Line 278, Address: 0x287abc, Func Offset: 0x1ac
	// Func End, Address: 0x287ad0, Func Offset: 0x1c0
}

// 
// Start address: 0x287ad0
void movieSubPreSet(fsFileIndex* id, void* wk)
{
	int fid;
	void* p4;
	void* p3;
	void* p2;
	void* p1;
	void* p0;
	int p4;
	int p3;
	int p2;
	int p1;
	int p0;
	unsigned char* ppp;
	<unknown fundamental type (0xa510)> work[5040];
	// Line 304, Address: 0x287ad0, Func Offset: 0
	// Line 307, Address: 0x287af8, Func Offset: 0x28
	// Line 308, Address: 0x287b00, Func Offset: 0x30
	// Line 311, Address: 0x287b04, Func Offset: 0x34
	// Line 315, Address: 0x287b0c, Func Offset: 0x3c
	// Line 319, Address: 0x287b14, Func Offset: 0x44
	// Line 326, Address: 0x287b58, Func Offset: 0x88
	// Line 333, Address: 0x287b60, Func Offset: 0x90
	// Line 334, Address: 0x287b68, Func Offset: 0x98
	// Line 335, Address: 0x287b74, Func Offset: 0xa4
	// Line 336, Address: 0x287b80, Func Offset: 0xb0
	// Line 337, Address: 0x287b8c, Func Offset: 0xbc
	// Line 338, Address: 0x287b98, Func Offset: 0xc8
	// Line 340, Address: 0x287ba0, Func Offset: 0xd0
	// Line 341, Address: 0x287bb0, Func Offset: 0xe0
	// Line 343, Address: 0x287bd0, Func Offset: 0x100
	// Line 344, Address: 0x287bd8, Func Offset: 0x108
	// Line 349, Address: 0x287bec, Func Offset: 0x11c
	// Line 350, Address: 0x287c00, Func Offset: 0x130
	// Line 352, Address: 0x287c0c, Func Offset: 0x13c
	// Func End, Address: 0x287c34, Func Offset: 0x164
}

// 
// Start address: 0x287c40
int movieGetLastExitStatus()
{
	// Line 357, Address: 0x287c40, Func Offset: 0
	// Line 360, Address: 0x287c54, Func Offset: 0x14
	// Func End, Address: 0x287c5c, Func Offset: 0x1c
}

// 
// Start address: 0x287c60
void movieSetSubTitleData(unsigned short* msg_bufp, void* adr_msg_time, int msg_start)
{
	// Line 365, Address: 0x287c60, Func Offset: 0
	// Line 366, Address: 0x287c68, Func Offset: 0x8
	// Line 367, Address: 0x287c70, Func Offset: 0x10
	// Func End, Address: 0x287c80, Func Offset: 0x20
}

