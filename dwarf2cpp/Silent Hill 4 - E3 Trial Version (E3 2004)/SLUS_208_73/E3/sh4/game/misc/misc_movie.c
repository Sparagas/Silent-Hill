typedef struct _UUID;
typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef enum _enum_0 : unsigned char;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _sj_vtbl;
typedef struct _anon9;
typedef enum _enum_1 : unsigned char;
typedef struct _adxps2_sprm_host;
typedef struct _anon10;
typedef struct _anon11;
typedef struct _anon12;
typedef struct _anon13;
typedef struct _anon14;
typedef struct _anon15;
typedef struct _anon16;
typedef enum _enum_2 : unsigned char;
typedef struct _anon17;
typedef struct _anon18;
typedef struct _sceDmaTag;
typedef struct _anon19;
typedef struct _anon20;
typedef struct _anon21;
typedef struct _anon22;
typedef enum _enum_3 : unsigned char;
typedef struct _anon23;
typedef struct _anon24;
typedef struct _anon25;
typedef struct _anon26;
typedef struct _anon27;
typedef struct _anon28;
typedef struct _anon29;
typedef enum _enum_4 : unsigned char;
typedef struct _anon30;
typedef struct _anon31;
typedef struct MwsfdIf;

typedef void(*type_0)();
typedef void(*type_1)();
typedef int(*type_2)(int);
typedef void(*type_3)();
typedef void(*type_4)(_anon2*);
typedef int(*type_6)(_anon2*);
typedef void(*type_7)(_anon2*);
typedef void(*type_8)(_anon2*, char*);
typedef void(*type_9)(_anon2*);
typedef void(*type_10)();
typedef _enum_4(*type_11)(_anon2*);
typedef void(*type_12)();
typedef void(*type_13)(_anon2*, int*, int*);
typedef void(*type_14)();
typedef void(*type_16)(_anon8*);
typedef void(*type_17)(_anon2*, int);
typedef _UUID*(*type_18)(_anon8*);
typedef void(*type_19)(_anon2*, int);
typedef void(*type_20)(_anon8*);
typedef int(*type_21)(_anon2*);
typedef void(*type_22)(_anon8*, int, int, _anon5*);
typedef void(*type_23)(_anon2*, int, int);
typedef void(*type_24)(_anon8*, int, _anon5*);
typedef int(*type_25)(_anon2*, int);
typedef void(*type_26)(_anon8*, int, _anon5*);
typedef void(*type_27)(_anon2*, _anon8*);
typedef void(*type_28)(_anon2*, void*, int);
typedef int(*type_29)(_anon8*, int);
typedef int(*type_31)(_anon8*, int, int, int*);
typedef void(*type_33)(_anon8*, void(*)(void*, int), void*);
typedef void(*type_34)(void*, int);

typedef unsigned char type_5[8];
typedef unsigned int* type_15[2];
typedef unsigned int type_30[2];
typedef int type_32[4];
typedef unsigned long type_35[2];
typedef unsigned int type_36[3];
typedef unsigned int type_37[3];
typedef _anon9 type_38[2];
typedef unsigned int type_39[3];
typedef int type_40[2];
typedef unsigned int type_41[3];
typedef unsigned int type_42[3];
typedef unsigned long type_43[2];
typedef unsigned int type_44[3];
typedef unsigned int type_45[4];
typedef _anon30 type_46[14];
typedef unsigned int type_47[4];
typedef unsigned int type_48[3];

struct _UUID
{
	unsigned int Data1;
	unsigned short Data2;
	unsigned short Data3;
	unsigned char Data4[8];
};

struct _anon0
{
	struct
	{
		unsigned long PRIM : 3;
		unsigned long IIP : 1;
		unsigned long TME : 1;
		unsigned long FGE : 1;
		unsigned long ABE : 1;
		unsigned long AA1 : 1;
		unsigned long FST : 1;
		unsigned long CTXT : 1;
		unsigned long FIX : 1;
		unsigned long pad11 : 53;
	};
};

struct _anon1
{
	unsigned char* bufadr;
	_enum_1 buffmt;
	int width;
	int height;
	int x_mb;
	int y_mb;
	_enum_2 ptype;
	int fps;
	int fno;
	int time;
	int tunit;
	int concat_cnt;
	int fno_per_file;
	int time_per_file;
	int errcnt;
	int rcvcnt;
	void* usrdatptr;
	int usrdatsize;
	_enum_3 frmtype;
};

struct _anon2
{
	MwsfdIf* vtbl;
};

struct _anon3
{
	int ftype;
	int max_bps;
	int max_width;
	int max_height;
	int nfrm_pool_wk;
	int max_stm;
	char* work;
	int wksize;
	int compo_mode;
	_enum_1 buffmt;
	int rsv[2];
};

struct _anon4
{
	_anon26 chcr;
	unsigned int p0[3];
	void* madr;
	unsigned int p1[3];
	unsigned int qwc;
	unsigned int p2[3];
	_sceDmaTag* tadr;
	unsigned int p3[3];
	void* as0;
	unsigned int p4[3];
	void* as1;
	unsigned int p5[3];
	unsigned int p6[4];
	unsigned int p7[4];
	void* sadr;
	unsigned int p8[3];
};

struct _anon5
{
	char* data;
	int len;
};

enum _enum_0 : unsigned char
{
	MWSFD_DEC_SVR_IDLE,
	MWSFD_DEC_SVR_MAIN,
	MWSFD_DEC_SVR_END
};

struct _anon6
{
	float vhz;
	int disp_cycle;
	int disp_latency;
	_enum_0 dec_svr;
	int rsv[4];
};

struct _anon7
{
	_anon2* mwply;
	_anon6 iprm;
	_anon3 cprm;
	_enum_4 mwstat;
	_anon1 frm;
	char* mwsfd_wkadr;
	int id;
	int term_flag;
	int disp_flag;
};

struct _anon8
{
	_sj_vtbl* vtbl;
};

struct _sj_vtbl
{
	void(*QueryInterface)();
	void(*AddRef)();
	void(*Release)();
	void(*Destroy)(_anon8*);
	_UUID*(*GetUuid)(_anon8*);
	void(*Reset)(_anon8*);
	void(*GetChunk)(_anon8*, int, int, _anon5*);
	void(*UngetChunk)(_anon8*, int, _anon5*);
	void(*PutChunk)(_anon8*, int, _anon5*);
	int(*GetNumData)(_anon8*, int);
	int(*IsGetChunk)(_anon8*, int, int, int*);
	void(*EntryErrFunc)(_anon8*, void(*)(void*, int), void*);
};

struct _anon9
{
	_anon15 pmode;
	_anon20 smode2;
	_anon16 dispfb;
	_anon24 display;
	_anon21 bgcolor;
};

enum _enum_1 : unsigned char
{
	MWSFD_BUFFMT_DEFAULT,
	MWSFD_BUFFMT_MB_YCC420,
	MWSFD_BUFFMT_MB_ARGB8888,
	MWSFD_BUFFMT_PLN_YCC420,
	MWE_PLY_BUFFMT_MB_YCC420 = 0x1,
	MWE_PLY_BUFFMT_MB_ARGB8888,
	MWE_PLY_BUFFMT_PLN_YCC420,
	MWSFD_BUFFMT_END
};

struct _adxps2_sprm_host
{
	char* rtdir;
	int rdmode;
	int fsmode;
	int lkmode;
};

struct _anon10
{
	_anon19 frame1;
	unsigned long frame1addr;
	_anon31 zbuf1;
	long zbuf1addr;
	_anon25 xyoffset1;
	long xyoffset1addr;
	_anon17 scissor1;
	long scissor1addr;
	_anon11 prmodecont;
	long prmodecontaddr;
	_anon29 colclamp;
	long colclampaddr;
	_anon14 dthe;
	long dtheaddr;
	_anon23 test1;
	long test1addr;
};

struct _anon11
{
	struct
	{
		unsigned long AC : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon12
{
	struct
	{
		unsigned long NLOOP : 15;
		unsigned long EOP : 1;
		unsigned long pad16 : 16;
		unsigned long id : 14;
		unsigned long PRE : 1;
		unsigned long PRIM : 11;
		unsigned long FLG : 2;
		unsigned long NREG : 4;
	};
	struct
	{
		unsigned long REGS0 : 4;
		unsigned long REGS1 : 4;
		unsigned long REGS2 : 4;
		unsigned long REGS3 : 4;
		unsigned long REGS4 : 4;
		unsigned long REGS5 : 4;
		unsigned long REGS6 : 4;
		unsigned long REGS7 : 4;
		unsigned long REGS8 : 4;
		unsigned long REGS9 : 4;
		unsigned long REGS10 : 4;
		unsigned long REGS11 : 4;
		unsigned long REGS12 : 4;
		unsigned long REGS13 : 4;
		unsigned long REGS14 : 4;
		unsigned long REGS15 : 4;
	};
};

struct _anon13
{
	struct
	{
		unsigned int R : 8;
		unsigned int G : 8;
		unsigned int B : 8;
		unsigned int A : 8;
	};
	float Q;
};

struct _anon14
{
	struct
	{
		unsigned long DTHE : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon15
{
	struct
	{
		unsigned int EN1 : 1;
		unsigned int EN2 : 1;
		unsigned int CRTMD : 3;
		unsigned int MMOD : 1;
		unsigned int AMOD : 1;
		unsigned int SLBG : 1;
		unsigned int ALP : 8;
		unsigned int p0 : 16;
	};
	unsigned int p1;
};

struct _anon16
{
	struct
	{
		unsigned int FBP : 9;
		unsigned int FBW : 6;
		unsigned int PSM : 5;
		unsigned int p0 : 12;
	};
	struct
	{
		unsigned int DBX : 11;
		unsigned int DBY : 11;
		unsigned int p1 : 10;
	};
};

enum _enum_2 : unsigned char
{
	MWSFD_PTYPE_I = 0x1,
	MWSFD_PTYPE_P,
	MWSFD_PTYPE_B,
	MWSFD_PTYPE_D,
	MWE_PLY_PTYPE_I = 0x1,
	MWE_PLY_PTYPE_P,
	MWE_PLY_PTYPE_B,
	MWE_PLY_PTYPE_D,
	MWSFD_PTYPE_END
};

struct _anon17
{
	struct
	{
		unsigned long SCAX0 : 11;
		unsigned long pad11 : 5;
		unsigned long SCAX1 : 11;
		unsigned long pad27 : 5;
		unsigned long SCAY0 : 11;
		unsigned long pad43 : 5;
		unsigned long SCAY1 : 11;
		unsigned long pad59 : 5;
	};
};

struct _anon18
{
	unsigned int* pCurrent;
	<unknown fundamental type (0xa510)>* pBase;
	<unknown fundamental type (0xa510)>* pDmaTag;
	unsigned long* pGifTag;
};

struct _sceDmaTag
{
	unsigned short qwc;
	unsigned char mark;
	unsigned char id;
	_sceDmaTag* next;
	unsigned int p[2];
};

struct _anon19
{
	struct
	{
		unsigned long FBP : 9;
		unsigned long pad09 : 7;
		unsigned long FBW : 6;
		unsigned long pad22 : 2;
		unsigned long PSM : 6;
		unsigned long pad30 : 2;
		unsigned long FBMSK : 32;
	};
};

struct _anon20
{
	struct
	{
		unsigned int INT : 1;
		unsigned int FFMD : 1;
		unsigned int DPMS : 2;
		unsigned int p0 : 28;
	};
	unsigned int p1;
};

struct _anon21
{
	struct
	{
		unsigned int R : 8;
		unsigned int G : 8;
		unsigned int B : 8;
		unsigned int p0 : 8;
	};
	unsigned int p1;
};

struct _anon22
{
	_anon23 testa;
	long testaaddr;
	_anon0 prim;
	long primaddr;
	_anon13 rgbaq;
	long rgbaqaddr;
	_anon28 xyz2a;
	long xyz2aaddr;
	_anon28 xyz2b;
	long xyz2baddr;
	_anon23 testb;
	long testbaddr;
};

enum _enum_3 : unsigned char
{
	MWSFD_FRMTYPE_UNKNOWN,
	MWSFD_FRMTYPE_PROGRESSIVE,
	MWSFD_FRMTYPE_INTERLACE,
	MWSFD_FRMTYPE_END
};

struct _anon23
{
	struct
	{
		unsigned long ATE : 1;
		unsigned long ATST : 3;
		unsigned long AREF : 8;
		unsigned long AFAIL : 2;
		unsigned long DATE : 1;
		unsigned long DATM : 1;
		unsigned long ZTE : 1;
		unsigned long ZTST : 2;
		unsigned long pad19 : 45;
	};
};

struct _anon24
{
	struct
	{
		unsigned int DX : 12;
		unsigned int DY : 11;
		unsigned int MAGH : 4;
		unsigned int MAGV : 2;
		unsigned int p0 : 3;
	};
	struct
	{
		unsigned int DW : 12;
		unsigned int DH : 11;
		unsigned int p1 : 9;
	};
};

struct _anon25
{
	struct
	{
		unsigned long OFX : 16;
		unsigned long pad16 : 16;
		unsigned long OFY : 16;
		unsigned long pad48 : 16;
	};
};

struct _anon26
{
	struct
	{
		unsigned int DIR : 1;
		unsigned int p0 : 1;
		unsigned int MOD : 2;
		unsigned int ASP : 2;
		unsigned int TTE : 1;
		unsigned int TIE : 1;
		unsigned int STR : 1;
		unsigned int p1 : 7;
		unsigned int TAG : 16;
	};
};

struct _anon27
{
	_anon9 disp[2];
	_anon12 giftag0;
	_anon10 draw0;
	_anon22 clear0;
	_anon12 giftag1;
	_anon10 draw1;
	_anon22 clear1;
};

struct _anon28
{
	struct
	{
		unsigned long X : 16;
		unsigned long Y : 16;
		unsigned long Z : 32;
	};
};

struct _anon29
{
	struct
	{
		unsigned long CLAMP : 1;
		unsigned long pad01 : 63;
	};
};

enum _enum_4 : unsigned char
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

struct _anon30
{
	char* filename;
	int sfd_id;
};

struct _anon31
{
	struct
	{
		unsigned long ZBP : 9;
		unsigned long pad09 : 15;
		unsigned long PSM : 4;
		unsigned long pad28 : 4;
		unsigned long ZMSK : 1;
		unsigned long pad33 : 31;
	};
};

struct MwsfdIf
{
	void(*QueryInterface)();
	void(*AddRef)();
	void(*Release)();
	void(*VsyncHndl)(_anon2*);
	int(*ExecSvrHndl)(_anon2*);
	void(*Destroy)(_anon2*);
	void(*StartFname)(_anon2*, char*);
	void(*Stop)(_anon2*);
	_enum_4(*GetStat)(_anon2*);
	void(*GetTime)(_anon2*, int*, int*);
	void(*Pause)(_anon2*, int);
	void(*SetOutVol)(_anon2*, int);
	int(*GetOutVol)(_anon2*);
	void(*SetOutPan)(_anon2*, int, int);
	int(*GetOutPan)(_anon2*, int);
	void(*StartSj)(_anon2*, _anon8*);
	void(*StartMem)(_anon2*, void*, int);
};

_anon30 movie_files[14];
int movie_fade_flag;
int is_movie_play;
int isCountVblank;
unsigned int vblankCount;
float movie_fade_pow;
unsigned int* path3tag[2];
_anon7 ap_obj;
float movie_fade_frame;
_anon27 db;
int g_oddeven;
int(*usr_VintCbFunc)(int);
_adxps2_sprm_host ht_sprm;

void UsrWaitVBlank();
void UsrInitSync();
void UsrSyncFrame();
void setLoadMovieTag(void* image, int image_w, int image_h, unsigned int* tags);
void setDrawMovieTag(int image_w, int image_h, unsigned int* tags);
void UsrLoadMvFrm(unsigned char* frm, int sx, int sy);
void UsrLoadMvFrmFx(_anon1* frm);
void UsrDrawMv();
void MovieSetVol(_anon2* mwply);
void ApInitMw(_anon7* ap, int movie_id);
void ApFinishMw();
void MovieEnd();
int ApStart(_anon7* ap);
int IsMoviePlay();
int MovieGetID();
int MovieGetNowFrame();
int IsMovieAbleToSkip();
void ApStop(_anon7* ap);
int ApExec(_anon7* ap);
void ApDraw(_anon7* ap);
void UsrInitVideo();
void usr_Vblank();
int usr_VintCbFunc();
int MoviePlay(int movie_id);

// 
// Start address: 0x2f8120
void UsrWaitVBlank()
{
	// Line 207, Address: 0x2f8120, Func Offset: 0
	// Func End, Address: 0x2f8128, Func Offset: 0x8
}

// 
// Start address: 0x2f8130
void UsrInitSync()
{
	// Line 230, Address: 0x2f8130, Func Offset: 0
	// Line 231, Address: 0x2f813c, Func Offset: 0xc
	// Line 234, Address: 0x2f8140, Func Offset: 0x10
	// Func End, Address: 0x2f8148, Func Offset: 0x18
}

// 
// Start address: 0x2f8150
void UsrSyncFrame()
{
	// Line 239, Address: 0x2f8150, Func Offset: 0
	// Func End, Address: 0x2f8158, Func Offset: 0x8
}

// 
// Start address: 0x2f8160
void setLoadMovieTag(void* image, int image_w, int image_h, unsigned int* tags)
{
	unsigned int eop;
	unsigned int blocksize;
	int mbx;
	int i;
	unsigned long* rsvtag;
	_anon18 packet;
	unsigned long giftag[2];
	// Line 263, Address: 0x2f8160, Func Offset: 0
	// Line 292, Address: 0x2f8164, Func Offset: 0x4
	// Line 263, Address: 0x2f8168, Func Offset: 0x8
	// Line 276, Address: 0x2f816c, Func Offset: 0xc
	// Line 263, Address: 0x2f8170, Func Offset: 0x10
	// Line 276, Address: 0x2f8174, Func Offset: 0x14
	// Line 263, Address: 0x2f8178, Func Offset: 0x18
	// Line 292, Address: 0x2f817c, Func Offset: 0x1c
	// Line 263, Address: 0x2f8180, Func Offset: 0x20
	// Line 276, Address: 0x2f818c, Func Offset: 0x2c
	// Line 263, Address: 0x2f8190, Func Offset: 0x30
	// Line 290, Address: 0x2f8194, Func Offset: 0x34
	// Line 263, Address: 0x2f8198, Func Offset: 0x38
	// Line 282, Address: 0x2f819c, Func Offset: 0x3c
	// Line 263, Address: 0x2f81a0, Func Offset: 0x40
	// Line 292, Address: 0x2f81a4, Func Offset: 0x44
	// Line 276, Address: 0x2f81ac, Func Offset: 0x4c
	// Line 292, Address: 0x2f81b0, Func Offset: 0x50
	// Line 276, Address: 0x2f81b4, Func Offset: 0x54
	// Line 292, Address: 0x2f81b8, Func Offset: 0x58
	// Line 293, Address: 0x2f81c0, Func Offset: 0x60
	// Line 294, Address: 0x2f81c8, Func Offset: 0x68
	// Line 297, Address: 0x2f81dc, Func Offset: 0x7c
	// Line 298, Address: 0x2f81e8, Func Offset: 0x88
	// Line 300, Address: 0x2f8200, Func Offset: 0xa0
	// Line 301, Address: 0x2f821c, Func Offset: 0xbc
	// Line 304, Address: 0x2f8224, Func Offset: 0xc4
	// Line 306, Address: 0x2f8240, Func Offset: 0xe0
	// Line 308, Address: 0x2f8248, Func Offset: 0xe8
	// Line 311, Address: 0x2f8260, Func Offset: 0x100
	// Line 312, Address: 0x2f826c, Func Offset: 0x10c
	// Line 314, Address: 0x2f8288, Func Offset: 0x128
	// Line 315, Address: 0x2f8298, Func Offset: 0x138
	// Line 317, Address: 0x2f82a0, Func Offset: 0x140
	// Line 320, Address: 0x2f82ac, Func Offset: 0x14c
	// Line 325, Address: 0x2f82c8, Func Offset: 0x168
	// Line 320, Address: 0x2f82cc, Func Offset: 0x16c
	// Line 325, Address: 0x2f82d0, Func Offset: 0x170
	// Line 326, Address: 0x2f82d8, Func Offset: 0x178
	// Line 327, Address: 0x2f82f8, Func Offset: 0x198
	// Line 328, Address: 0x2f8300, Func Offset: 0x1a0
	// Line 331, Address: 0x2f8320, Func Offset: 0x1c0
	// Line 333, Address: 0x2f8330, Func Offset: 0x1d0
	// Line 336, Address: 0x2f8338, Func Offset: 0x1d8
	// Func End, Address: 0x2f8360, Func Offset: 0x200
}

// 
// Start address: 0x2f8360
void setDrawMovieTag(int image_w, int image_h, unsigned int* tags)
{
	int color;
	_anon18 packet;
	unsigned long giftag_eop[2];
	// Line 345, Address: 0x2f8360, Func Offset: 0
	// Line 353, Address: 0x2f8364, Func Offset: 0x4
	// Line 345, Address: 0x2f8368, Func Offset: 0x8
	// Line 353, Address: 0x2f836c, Func Offset: 0xc
	// Line 345, Address: 0x2f8370, Func Offset: 0x10
	// Line 353, Address: 0x2f8374, Func Offset: 0x14
	// Line 345, Address: 0x2f8378, Func Offset: 0x18
	// Line 359, Address: 0x2f8384, Func Offset: 0x24
	// Line 345, Address: 0x2f8388, Func Offset: 0x28
	// Line 353, Address: 0x2f8390, Func Offset: 0x30
	// Line 359, Address: 0x2f8398, Func Offset: 0x38
	// Line 360, Address: 0x2f83a0, Func Offset: 0x40
	// Line 361, Address: 0x2f83a4, Func Offset: 0x44
	// Line 362, Address: 0x2f83a8, Func Offset: 0x48
	// Line 363, Address: 0x2f83b4, Func Offset: 0x54
	// Line 380, Address: 0x2f83b8, Func Offset: 0x58
	// Line 381, Address: 0x2f83cc, Func Offset: 0x6c
	// Line 380, Address: 0x2f83d0, Func Offset: 0x70
	// Line 381, Address: 0x2f83d4, Func Offset: 0x74
	// Line 386, Address: 0x2f83e4, Func Offset: 0x84
	// Line 381, Address: 0x2f83e8, Func Offset: 0x88
	// Line 386, Address: 0x2f83ec, Func Offset: 0x8c
	// Line 381, Address: 0x2f83f0, Func Offset: 0x90
	// Line 386, Address: 0x2f83f4, Func Offset: 0x94
	// Line 388, Address: 0x2f83f8, Func Offset: 0x98
	// Line 386, Address: 0x2f83fc, Func Offset: 0x9c
	// Line 381, Address: 0x2f8400, Func Offset: 0xa0
	// Line 388, Address: 0x2f8404, Func Offset: 0xa4
	// Line 386, Address: 0x2f8410, Func Offset: 0xb0
	// Line 388, Address: 0x2f841c, Func Offset: 0xbc
	// Line 389, Address: 0x2f8424, Func Offset: 0xc4
	// Line 390, Address: 0x2f842c, Func Offset: 0xcc
	// Line 395, Address: 0x2f8440, Func Offset: 0xe0
	// Line 396, Address: 0x2f844c, Func Offset: 0xec
	// Line 397, Address: 0x2f845c, Func Offset: 0xfc
	// Line 398, Address: 0x2f846c, Func Offset: 0x10c
	// Line 399, Address: 0x2f8480, Func Offset: 0x120
	// Line 401, Address: 0x2f84b4, Func Offset: 0x154
	// Line 403, Address: 0x2f84c4, Func Offset: 0x164
	// Line 406, Address: 0x2f84e4, Func Offset: 0x184
	// Line 408, Address: 0x2f84f4, Func Offset: 0x194
	// Line 409, Address: 0x2f8508, Func Offset: 0x1a8
	// Line 410, Address: 0x2f8530, Func Offset: 0x1d0
	// Line 411, Address: 0x2f8560, Func Offset: 0x200
	// Line 413, Address: 0x2f858c, Func Offset: 0x22c
	// Line 415, Address: 0x2f8594, Func Offset: 0x234
	// Line 418, Address: 0x2f859c, Func Offset: 0x23c
	// Func End, Address: 0x2f85bc, Func Offset: 0x25c
}

// 
// Start address: 0x2f85c0
void UsrLoadMvFrm(unsigned char* frm, int sx, int sy)
{
	_anon4* dmaGif_loadimage;
	// Line 486, Address: 0x2f85c0, Func Offset: 0
	// Line 490, Address: 0x2f85c4, Func Offset: 0x4
	// Line 486, Address: 0x2f85c8, Func Offset: 0x8
	// Line 490, Address: 0x2f85e0, Func Offset: 0x20
	// Line 492, Address: 0x2f85ec, Func Offset: 0x2c
	// Line 496, Address: 0x2f8604, Func Offset: 0x44
	// Line 497, Address: 0x2f8610, Func Offset: 0x50
	// Line 498, Address: 0x2f861c, Func Offset: 0x5c
	// Line 501, Address: 0x2f862c, Func Offset: 0x6c
	// Func End, Address: 0x2f8644, Func Offset: 0x84
}

// 
// Start address: 0x2f8650
void UsrLoadMvFrmFx(_anon1* frm)
{
	// Line 509, Address: 0x2f8650, Func Offset: 0
	// Func End, Address: 0x2f8660, Func Offset: 0x10
}

// 
// Start address: 0x2f8660
void UsrDrawMv()
{
	_anon4* dmaGif_loadimage;
	// Line 516, Address: 0x2f8660, Func Offset: 0
	// Line 521, Address: 0x2f8664, Func Offset: 0x4
	// Line 516, Address: 0x2f8668, Func Offset: 0x8
	// Line 521, Address: 0x2f866c, Func Offset: 0xc
	// Line 522, Address: 0x2f8678, Func Offset: 0x18
	// Line 523, Address: 0x2f8684, Func Offset: 0x24
	// Line 526, Address: 0x2f8694, Func Offset: 0x34
	// Func End, Address: 0x2f86a4, Func Offset: 0x44
}

// 
// Start address: 0x2f86b0
void MovieSetVol(_anon2* mwply)
{
	float vol;
	int ivol;
	// Line 530, Address: 0x2f86b0, Func Offset: 0
	// Line 538, Address: 0x2f86b4, Func Offset: 0x4
	// Line 530, Address: 0x2f86b8, Func Offset: 0x8
	// Line 538, Address: 0x2f86c0, Func Offset: 0x10
	// Line 540, Address: 0x2f86ec, Func Offset: 0x3c
	// Line 542, Address: 0x2f86f4, Func Offset: 0x44
	// Line 543, Address: 0x2f8708, Func Offset: 0x58
	// Func End, Address: 0x2f8718, Func Offset: 0x68
}

// 
// Start address: 0x2f8720
void ApInitMw(_anon7* ap, int movie_id)
{
	_anon6* iprm;
	// Line 550, Address: 0x2f8720, Func Offset: 0
	// Line 554, Address: 0x2f8724, Func Offset: 0x4
	// Line 550, Address: 0x2f8728, Func Offset: 0x8
	// Line 554, Address: 0x2f8740, Func Offset: 0x20
	// Line 557, Address: 0x2f8748, Func Offset: 0x28
	// Line 558, Address: 0x2f874c, Func Offset: 0x2c
	// Line 566, Address: 0x2f8754, Func Offset: 0x34
	// Line 559, Address: 0x2f8758, Func Offset: 0x38
	// Line 567, Address: 0x2f875c, Func Offset: 0x3c
	// Line 568, Address: 0x2f8770, Func Offset: 0x50
	// Line 569, Address: 0x2f8774, Func Offset: 0x54
	// Line 568, Address: 0x2f8778, Func Offset: 0x58
	// Line 579, Address: 0x2f877c, Func Offset: 0x5c
	// Line 568, Address: 0x2f8780, Func Offset: 0x60
	// Line 569, Address: 0x2f8784, Func Offset: 0x64
	// Line 570, Address: 0x2f8788, Func Offset: 0x68
	// Line 579, Address: 0x2f878c, Func Offset: 0x6c
	// Line 582, Address: 0x2f8794, Func Offset: 0x74
	// Func End, Address: 0x2f87ac, Func Offset: 0x8c
}

// 
// Start address: 0x2f87b0
void ApFinishMw()
{
	// Line 594, Address: 0x2f87b0, Func Offset: 0
	// Func End, Address: 0x2f87b8, Func Offset: 0x8
}

// 
// Start address: 0x2f87c0
void MovieEnd()
{
	// Line 602, Address: 0x2f87c0, Func Offset: 0
	// Line 604, Address: 0x2f87c4, Func Offset: 0x4
	// Func End, Address: 0x2f87cc, Func Offset: 0xc
}

// 
// Start address: 0x2f87d0
int ApStart(_anon7* ap)
{
	_anon3* cprm;
	_anon2* mwply;
	int movie_id;
	unsigned int sfd_id;
	int result;
	// Line 615, Address: 0x2f87d0, Func Offset: 0
	// Line 623, Address: 0x2f87d4, Func Offset: 0x4
	// Line 615, Address: 0x2f87d8, Func Offset: 0x8
	// Line 623, Address: 0x2f87dc, Func Offset: 0xc
	// Line 615, Address: 0x2f87e0, Func Offset: 0x10
	// Line 622, Address: 0x2f87ec, Func Offset: 0x1c
	// Line 623, Address: 0x2f87f0, Func Offset: 0x20
	// Line 626, Address: 0x2f87f8, Func Offset: 0x28
	// Line 624, Address: 0x2f87fc, Func Offset: 0x2c
	// Line 625, Address: 0x2f8800, Func Offset: 0x30
	// Line 626, Address: 0x2f8804, Func Offset: 0x34
	// Line 625, Address: 0x2f8808, Func Offset: 0x38
	// Line 627, Address: 0x2f880c, Func Offset: 0x3c
	// Line 626, Address: 0x2f8810, Func Offset: 0x40
	// Line 631, Address: 0x2f8814, Func Offset: 0x44
	// Line 627, Address: 0x2f8818, Func Offset: 0x48
	// Line 628, Address: 0x2f881c, Func Offset: 0x4c
	// Line 629, Address: 0x2f8820, Func Offset: 0x50
	// Line 628, Address: 0x2f8824, Func Offset: 0x54
	// Line 629, Address: 0x2f8828, Func Offset: 0x58
	// Line 631, Address: 0x2f882c, Func Offset: 0x5c
	// Line 634, Address: 0x2f8838, Func Offset: 0x68
	// Line 635, Address: 0x2f8848, Func Offset: 0x78
	// Line 637, Address: 0x2f8850, Func Offset: 0x80
	// Line 639, Address: 0x2f8858, Func Offset: 0x88
	// Line 643, Address: 0x2f885c, Func Offset: 0x8c
	// Line 644, Address: 0x2f8868, Func Offset: 0x98
	// Line 647, Address: 0x2f8870, Func Offset: 0xa0
	// Line 649, Address: 0x2f8878, Func Offset: 0xa8
	// Line 656, Address: 0x2f887c, Func Offset: 0xac
	// Line 657, Address: 0x2f8880, Func Offset: 0xb0
	// Line 663, Address: 0x2f8894, Func Offset: 0xc4
	// Line 668, Address: 0x2f88c0, Func Offset: 0xf0
	// Line 671, Address: 0x2f88c8, Func Offset: 0xf8
	// Line 674, Address: 0x2f88d0, Func Offset: 0x100
	// Line 676, Address: 0x2f88d8, Func Offset: 0x108
	// Line 677, Address: 0x2f88e0, Func Offset: 0x110
	// Func End, Address: 0x2f88f4, Func Offset: 0x124
}

// 
// Start address: 0x2f8900
int IsMoviePlay()
{
	// Line 682, Address: 0x2f8900, Func Offset: 0
	// Line 683, Address: 0x2f8904, Func Offset: 0x4
	// Func End, Address: 0x2f890c, Func Offset: 0xc
}

// 
// Start address: 0x2f8910
int MovieGetID()
{
	// Line 688, Address: 0x2f8910, Func Offset: 0
	// Line 690, Address: 0x2f8918, Func Offset: 0x8
	// Line 693, Address: 0x2f8934, Func Offset: 0x24
	// Func End, Address: 0x2f8940, Func Offset: 0x30
}

// 
// Start address: 0x2f8940
int MovieGetNowFrame()
{
	int ncount;
	int tscale;
	int now_frame;
	// Line 698, Address: 0x2f8940, Func Offset: 0
	// Line 699, Address: 0x2f8948, Func Offset: 0x8
	// Line 701, Address: 0x2f8958, Func Offset: 0x18
	// Line 699, Address: 0x2f895c, Func Offset: 0x1c
	// Line 701, Address: 0x2f8960, Func Offset: 0x20
	// Line 702, Address: 0x2f8970, Func Offset: 0x30
	// Line 703, Address: 0x2f89a8, Func Offset: 0x68
	// Line 705, Address: 0x2f89b0, Func Offset: 0x70
	// Line 706, Address: 0x2f89b8, Func Offset: 0x78
	// Func End, Address: 0x2f89c4, Func Offset: 0x84
}

// 
// Start address: 0x2f89d0
int IsMovieAbleToSkip()
{
	int ending_info;
	// Line 720, Address: 0x2f89d0, Func Offset: 0
	// Line 725, Address: 0x2f89d8, Func Offset: 0x8
	// Line 727, Address: 0x2f89e0, Func Offset: 0x10
	// Line 728, Address: 0x2f8a24, Func Offset: 0x54
	// Line 729, Address: 0x2f8a28, Func Offset: 0x58
	// Line 730, Address: 0x2f8a38, Func Offset: 0x68
	// Line 732, Address: 0x2f8a40, Func Offset: 0x70
	// Line 733, Address: 0x2f8a50, Func Offset: 0x80
	// Line 735, Address: 0x2f8a58, Func Offset: 0x88
	// Line 736, Address: 0x2f8a68, Func Offset: 0x98
	// Line 738, Address: 0x2f8a70, Func Offset: 0xa0
	// Line 739, Address: 0x2f8a80, Func Offset: 0xb0
	// Line 741, Address: 0x2f8a88, Func Offset: 0xb8
	// Line 742, Address: 0x2f8a90, Func Offset: 0xc0
	// Line 744, Address: 0x2f8a98, Func Offset: 0xc8
	// Line 745, Address: 0x2f8aa0, Func Offset: 0xd0
	// Func End, Address: 0x2f8aac, Func Offset: 0xdc
}

// 
// Start address: 0x2f8ab0
void ApStop(_anon7* ap)
{
	// Line 751, Address: 0x2f8ab0, Func Offset: 0
	// Line 753, Address: 0x2f8ac4, Func Offset: 0x14
	// Line 754, Address: 0x2f8ad4, Func Offset: 0x24
	// Line 759, Address: 0x2f8ad8, Func Offset: 0x28
	// Func End, Address: 0x2f8ae8, Func Offset: 0x38
}

// 
// Start address: 0x2f8af0
int ApExec(_anon7* ap)
{
	_anon1 frm;
	_enum_4 stat;
	int ncount;
	int tscale;
	int now_frame;
	int frame_length;
	// Line 764, Address: 0x2f8af0, Func Offset: 0
	// Line 768, Address: 0x2f8b00, Func Offset: 0x10
	// Line 774, Address: 0x2f8b08, Func Offset: 0x18
	// Line 775, Address: 0x2f8b1c, Func Offset: 0x2c
	// Line 776, Address: 0x2f8b2c, Func Offset: 0x3c
	// Line 777, Address: 0x2f8b4c, Func Offset: 0x5c
	// Line 780, Address: 0x2f8b54, Func Offset: 0x64
	// Line 783, Address: 0x2f8b58, Func Offset: 0x68
	// Line 784, Address: 0x2f8b68, Func Offset: 0x78
	// Line 785, Address: 0x2f8b74, Func Offset: 0x84
	// Line 786, Address: 0x2f8b7c, Func Offset: 0x8c
	// Line 785, Address: 0x2f8b80, Func Offset: 0x90
	// Line 786, Address: 0x2f8b90, Func Offset: 0xa0
	// Line 787, Address: 0x2f8b9c, Func Offset: 0xac
	// Line 788, Address: 0x2f8ba0, Func Offset: 0xb0
	// Line 787, Address: 0x2f8ba4, Func Offset: 0xb4
	// Line 788, Address: 0x2f8ba8, Func Offset: 0xb8
	// Line 789, Address: 0x2f8bac, Func Offset: 0xbc
	// Line 791, Address: 0x2f8bb4, Func Offset: 0xc4
	// Line 793, Address: 0x2f8bb8, Func Offset: 0xc8
	// Line 794, Address: 0x2f8bc0, Func Offset: 0xd0
	// Line 793, Address: 0x2f8bc8, Func Offset: 0xd8
	// Line 794, Address: 0x2f8bd8, Func Offset: 0xe8
	// Line 795, Address: 0x2f8be4, Func Offset: 0xf4
	// Line 798, Address: 0x2f8bec, Func Offset: 0xfc
	// Line 795, Address: 0x2f8bf0, Func Offset: 0x100
	// Line 803, Address: 0x2f8bf4, Func Offset: 0x104
	// Line 804, Address: 0x2f8c08, Func Offset: 0x118
	// Line 805, Address: 0x2f8c34, Func Offset: 0x144
	// Line 806, Address: 0x2f8c3c, Func Offset: 0x14c
	// Line 807, Address: 0x2f8c4c, Func Offset: 0x15c
	// Line 808, Address: 0x2f8c5c, Func Offset: 0x16c
	// Line 820, Address: 0x2f8c68, Func Offset: 0x178
	// Line 822, Address: 0x2f8c74, Func Offset: 0x184
	// Line 826, Address: 0x2f8c80, Func Offset: 0x190
	// Line 829, Address: 0x2f8c8c, Func Offset: 0x19c
	// Line 832, Address: 0x2f8cb4, Func Offset: 0x1c4
	// Line 833, Address: 0x2f8cbc, Func Offset: 0x1cc
	// Line 832, Address: 0x2f8cc0, Func Offset: 0x1d0
	// Line 836, Address: 0x2f8cc4, Func Offset: 0x1d4
	// Line 838, Address: 0x2f8cdc, Func Offset: 0x1ec
	// Line 839, Address: 0x2f8ce8, Func Offset: 0x1f8
	// Line 840, Address: 0x2f8cec, Func Offset: 0x1fc
	// Line 842, Address: 0x2f8cf8, Func Offset: 0x208
	// Line 843, Address: 0x2f8d04, Func Offset: 0x214
	// Line 844, Address: 0x2f8d0c, Func Offset: 0x21c
	// Line 847, Address: 0x2f8d10, Func Offset: 0x220
	// Line 856, Address: 0x2f8d18, Func Offset: 0x228
	// Line 858, Address: 0x2f8d1c, Func Offset: 0x22c
	// Line 859, Address: 0x2f8d20, Func Offset: 0x230
	// Func End, Address: 0x2f8d34, Func Offset: 0x244
}

// 
// Start address: 0x2f8d40
void ApDraw(_anon7* ap)
{
	// Line 864, Address: 0x2f8d40, Func Offset: 0
	// Line 865, Address: 0x2f8d48, Func Offset: 0x8
	// Line 868, Address: 0x2f8d58, Func Offset: 0x18
	// Line 871, Address: 0x2f8d60, Func Offset: 0x20
	// Line 873, Address: 0x2f8d70, Func Offset: 0x30
	// Line 879, Address: 0x2f8d7c, Func Offset: 0x3c
	// Line 882, Address: 0x2f8d80, Func Offset: 0x40
	// Func End, Address: 0x2f8d8c, Func Offset: 0x4c
}

// 
// Start address: 0x2f8d90
void UsrInitVideo()
{
	// Line 887, Address: 0x2f8d90, Func Offset: 0
	// Line 895, Address: 0x2f8d98, Func Offset: 0x8
	// Line 896, Address: 0x2f8da0, Func Offset: 0x10
	// Line 901, Address: 0x2f8db4, Func Offset: 0x24
	// Line 903, Address: 0x2f8dd8, Func Offset: 0x48
	// Line 906, Address: 0x2f8de0, Func Offset: 0x50
	// Line 907, Address: 0x2f8de8, Func Offset: 0x58
	// Line 912, Address: 0x2f8df0, Func Offset: 0x60
	// Func End, Address: 0x2f8dfc, Func Offset: 0x6c
}

// 
// Start address: 0x2f8e00
void usr_Vblank()
{
	int frame_buf;
	int handler_error;
	// Line 916, Address: 0x2f8e00, Func Offset: 0
	// Line 920, Address: 0x2f8e04, Func Offset: 0x4
	// Line 916, Address: 0x2f8e08, Func Offset: 0x8
	// Line 928, Address: 0x2f8e0c, Func Offset: 0xc
	// Line 916, Address: 0x2f8e10, Func Offset: 0x10
	// Line 928, Address: 0x2f8e14, Func Offset: 0x14
	// Line 920, Address: 0x2f8e18, Func Offset: 0x18
	// Line 928, Address: 0x2f8e24, Func Offset: 0x24
	// Line 929, Address: 0x2f8e2c, Func Offset: 0x2c
	// Line 934, Address: 0x2f8e34, Func Offset: 0x34
	// Line 936, Address: 0x2f8e50, Func Offset: 0x50
	// Line 937, Address: 0x2f8e58, Func Offset: 0x58
	// Line 939, Address: 0x2f8eb0, Func Offset: 0xb0
	// Line 942, Address: 0x2f8ec0, Func Offset: 0xc0
	// Func End, Address: 0x2f8ed0, Func Offset: 0xd0
}

// 
// Start address: 0x2f8ed0
int usr_VintCbFunc()
{
	// Line 946, Address: 0x2f8ed0, Func Offset: 0
	// Line 950, Address: 0x2f8ed4, Func Offset: 0x4
	// Line 946, Address: 0x2f8ed8, Func Offset: 0x8
	// Line 950, Address: 0x2f8edc, Func Offset: 0xc
	// Line 952, Address: 0x2f8ee8, Func Offset: 0x18
	// Line 956, Address: 0x2f8ef0, Func Offset: 0x20
	// Line 958, Address: 0x2f8ef8, Func Offset: 0x28
	// Line 961, Address: 0x2f8f00, Func Offset: 0x30
	// Line 960, Address: 0x2f8f04, Func Offset: 0x34
	// Line 961, Address: 0x2f8f08, Func Offset: 0x38
	// Func End, Address: 0x2f8f10, Func Offset: 0x40
}

// 
// Start address: 0x2f8f10
int MoviePlay(int movie_id)
{
	_anon7* ap;
	int ret;
	void* allocate_start_ptr;
	// Line 969, Address: 0x2f8f10, Func Offset: 0
	// Line 980, Address: 0x2f8f24, Func Offset: 0x14
	// Line 982, Address: 0x2f8f30, Func Offset: 0x20
	// Line 983, Address: 0x2f8f38, Func Offset: 0x28
	// Line 985, Address: 0x2f8f40, Func Offset: 0x30
	// Line 989, Address: 0x2f8f44, Func Offset: 0x34
	// Line 991, Address: 0x2f8f54, Func Offset: 0x44
	// Line 994, Address: 0x2f8f60, Func Offset: 0x50
	// Line 996, Address: 0x2f8f6c, Func Offset: 0x5c
	// Line 997, Address: 0x2f8f74, Func Offset: 0x64
	// Line 998, Address: 0x2f8f78, Func Offset: 0x68
	// Line 1001, Address: 0x2f8fb8, Func Offset: 0xa8
	// Line 1003, Address: 0x2f8fc8, Func Offset: 0xb8
	// Line 1004, Address: 0x2f8fdc, Func Offset: 0xcc
	// Line 1007, Address: 0x2f8fec, Func Offset: 0xdc
	// Line 1011, Address: 0x2f9000, Func Offset: 0xf0
	// Line 1016, Address: 0x2f9008, Func Offset: 0xf8
	// Line 1019, Address: 0x2f9010, Func Offset: 0x100
	// Line 1022, Address: 0x2f901c, Func Offset: 0x10c
	// Line 1023, Address: 0x2f9024, Func Offset: 0x114
	// Line 1024, Address: 0x2f9040, Func Offset: 0x130
	// Line 1025, Address: 0x2f9054, Func Offset: 0x144
	// Line 1030, Address: 0x2f905c, Func Offset: 0x14c
	// Line 1033, Address: 0x2f9060, Func Offset: 0x150
	// Line 1035, Address: 0x2f9068, Func Offset: 0x158
	// Line 1036, Address: 0x2f9074, Func Offset: 0x164
	// Line 1039, Address: 0x2f9078, Func Offset: 0x168
	// Line 1036, Address: 0x2f907c, Func Offset: 0x16c
	// Line 1037, Address: 0x2f9080, Func Offset: 0x170
	// Line 1039, Address: 0x2f9084, Func Offset: 0x174
	// Line 1040, Address: 0x2f908c, Func Offset: 0x17c
	// Line 1044, Address: 0x2f9098, Func Offset: 0x188
	// Line 1046, Address: 0x2f90a0, Func Offset: 0x190
	// Line 1048, Address: 0x2f90a8, Func Offset: 0x198
	// Line 1052, Address: 0x2f90b0, Func Offset: 0x1a0
	// Line 1055, Address: 0x2f90c4, Func Offset: 0x1b4
	// Line 1056, Address: 0x2f90cc, Func Offset: 0x1bc
	// Line 1057, Address: 0x2f90d4, Func Offset: 0x1c4
	// Line 1060, Address: 0x2f90dc, Func Offset: 0x1cc
	// Line 1059, Address: 0x2f90e0, Func Offset: 0x1d0
	// Line 1060, Address: 0x2f90e4, Func Offset: 0x1d4
	// Func End, Address: 0x2f90f4, Func Offset: 0x1e4
}

