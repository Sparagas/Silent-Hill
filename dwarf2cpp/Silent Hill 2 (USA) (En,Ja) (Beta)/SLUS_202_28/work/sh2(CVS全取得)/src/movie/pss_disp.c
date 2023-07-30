typedef struct shGsLoopEnv;
typedef struct _anon0;
typedef struct _anon1;
typedef struct _PSS_MESSAGE_TIME;
typedef struct _sceDmaTag;
typedef struct _anon2;
typedef union fsFile;
typedef struct _anon3;
typedef struct _PSS_SUBTITLE_CTRL;
typedef struct fsCdFile;
typedef struct _anon4;
typedef struct shGsTinyDrawEnv;
typedef struct _PssCommonWork;
typedef struct _anon5;
typedef struct fsMgcFile;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _anon9;
typedef struct _anon10;
typedef struct shGsAllEnv;
typedef struct fsMgfFile;
typedef struct _anon11;
typedef struct _anon12;
typedef struct _anon13;
typedef struct _anon14;
typedef struct _anon15;
typedef struct _anon16;
typedef struct fsHdFile;
typedef struct _anon17;
typedef struct fsMgpFile;
typedef struct _anon18;
typedef struct _anon19;
typedef union Q_WORDDATA;
typedef struct _anon20;
typedef struct _anon21;
typedef union fsFileIndex;
typedef struct _anon22;
typedef struct _anon23;
typedef struct _anon24;
typedef struct _anon25;
typedef struct _anon26;
typedef struct _anon27;
typedef struct _anon28;
typedef struct shGsDrawEnv;
typedef struct _anon29;
typedef struct _anon30;
typedef struct shGsStencilDrawEnv;
typedef struct _anon31;
typedef struct _anon32;
typedef struct _anon33;
typedef struct _anon34;
typedef struct _anon35;
typedef struct _anon36;


typedef unsigned int type_0[3];
typedef unsigned int type_1[3];
typedef unsigned int type_2[3];
typedef unsigned int type_3[24];
typedef unsigned int type_4[3];
typedef unsigned int type_5[3];
typedef _anon19 type_6[2];
typedef unsigned int type_7[2];
typedef unsigned short type_8[8];
typedef unsigned char type_9[327680];
typedef unsigned char type_10[393216];
typedef _anon1 type_11[512];
typedef unsigned char type_12[49152];
typedef unsigned int type_13[3];
typedef unsigned int type_14[3];
typedef char type_15[2048];
typedef unsigned int type_16[3];
typedef unsigned int* type_17[2];
typedef unsigned int* type_18[2][3];
typedef _anon19 type_19[3];
typedef char type_20[16384];
typedef shGsDrawEnv type_21[3];
typedef unsigned int type_22[3];
typedef shGsStencilDrawEnv type_23[3];
typedef unsigned int type_24[3];
typedef shGsTinyDrawEnv type_25[6];
typedef Q_WORDDATA type_26[10];
typedef unsigned int type_27[3];
typedef unsigned long type_28[2];
typedef Q_WORDDATA type_29[10];
typedef unsigned int type_30[4];
typedef Q_WORDDATA type_31[10];
typedef unsigned int type_32[4];
typedef Q_WORDDATA type_33[10];
typedef Q_WORDDATA type_34[10];
typedef unsigned int type_35[3];
typedef unsigned int type_36[4];
typedef Q_WORDDATA type_37[10];
typedef unsigned short type_38[8];
typedef Q_WORDDATA type_39[10];
typedef float type_40[4];
typedef Q_WORDDATA type_41[8];
typedef unsigned long type_42[2];
typedef unsigned char type_43[16];
typedef Q_WORDDATA type_44[2];
typedef int type_45[4];
typedef Q_WORDDATA type_46[2];
typedef short type_47[8];
typedef Q_WORDDATA type_48[2];
typedef char type_49[16];
typedef Q_WORDDATA type_50[2];
typedef unsigned long type_51[2];
typedef Q_WORDDATA type_52[2];
typedef Q_WORDDATA type_53[2];
typedef Q_WORDDATA type_54[2];
typedef unsigned long type_55[2];
typedef Q_WORDDATA type_56[2];
typedef Q_WORDDATA type_57[2];
typedef Q_WORDDATA type_58[5];
typedef Q_WORDDATA type_59[2];
typedef Q_WORDDATA type_60[2];
typedef Q_WORDDATA type_61[2];
typedef Q_WORDDATA type_62[5];
typedef Q_WORDDATA type_63[2];
typedef Q_WORDDATA type_64[2];
typedef Q_WORDDATA type_65[2];
typedef Q_WORDDATA type_66[2];
typedef Q_WORDDATA type_67[2];
typedef Q_WORDDATA type_68[2];
typedef Q_WORDDATA type_69[2];
typedef Q_WORDDATA type_70[2];
typedef Q_WORDDATA type_71[6];
typedef Q_WORDDATA type_72[2];
typedef Q_WORDDATA type_73[6];
typedef unsigned int type_74[256];

struct shGsLoopEnv
{
	unsigned int GsDrawFBPs[3];
	unsigned int GsNowDispFBPs[3];
	unsigned int GsNextDispFBPs[3];
	unsigned int GsTexTBPs[24];
	unsigned int GsShadowFBP[3];
	unsigned int GsShadowWorkFBP[3];
	unsigned short clutsize;
	unsigned short clutamount;
	unsigned short GsClutPage[8];
};

struct _anon0
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

struct _anon1
{
	long pts;
	long dts;
	int pos;
	int len;
};

struct _PSS_MESSAGE_TIME
{
	unsigned short start;
	unsigned short end;
};

struct _sceDmaTag
{
	unsigned short qwc;
	unsigned char mark;
	unsigned char id;
	_sceDmaTag* next;
	unsigned int p[2];
};

struct _anon2
{
	_anon19 disp[2];
	_anon14 giftag0;
	_anon23 draw0;
	_anon35 clear0;
	_anon14 giftag1;
	_anon23 draw1;
	_anon35 clear1;
};

union fsFile
{
	_anon20 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
};

struct _anon3
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

struct _PSS_SUBTITLE_CTRL
{
	int msg_start;
	int msg_no;
	unsigned short* msg_bufp;
	_PSS_MESSAGE_TIME* adr_msg_time;
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

struct _anon4
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

struct shGsTinyDrawEnv
{
	Q_WORDDATA giftag;
	Q_WORDDATA frame;
	Q_WORDDATA scissor;
	Q_WORDDATA xyoffset;
	Q_WORDDATA zbuf;
	Q_WORDDATA test;
	Q_WORDDATA gifad_normal;
	Q_WORDDATA frame_normal;
	Q_WORDDATA gifad_mskalpha;
	Q_WORDDATA frame_mskalpha;
	Q_WORDDATA gifad_mskDalpha;
	Q_WORDDATA frame_mskDalpha;
};

struct _PssCommonWork
{
	unsigned char* mpegWorkp;
	_anon5* readBufp;
	<unknown fundamental type (0xa510)>* viBufDatap;
	_anon1 timeStamp[512];
	_anon7* voBufDatap;
	unsigned char audioBuff[49152];
	unsigned int* tagInterDatap;
	int videoDecTh;
	int defaultTh;
	char defStack[2048];
	char videoDecStack[16384];
	_anon2 db;
};

struct _anon5
{
	unsigned char data[327680];
	int put;
	int count;
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

struct _anon6
{
	_anon34 vibuf;
	unsigned int state;
	int sema;
	int hid_endimage;
	int hid_vblank;
	_anon15 csc;
};

struct _anon7
{
	unsigned char v[393216];
};

struct _anon8
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

struct _anon9
{
	_anon4 chcr;
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

struct _anon10
{
	int status;
	unsigned int* v;
};

struct shGsAllEnv
{
	unsigned long loop_counter;
	unsigned int loop;
	unsigned int loop3;
	shGsLoopEnv LoopEnv;
	_anon19 DispEnv[3];
	shGsDrawEnv DrawEnv[3];
	shGsStencilDrawEnv StencilBuf[3];
	shGsTinyDrawEnv StencilWork[6];
	Q_WORDDATA DefaultEnv[10];
	Q_WORDDATA StencilEnv[10];
	Q_WORDDATA CompshadowEnv[10];
	Q_WORDDATA Filter_A[10];
	Q_WORDDATA Filter_B[10];
	Q_WORDDATA Filter_C[10];
	Q_WORDDATA Filter_D[10];
	Q_WORDDATA MoveGTex[8];
	Q_WORDDATA GsReg_ALPHA_A[2];
	Q_WORDDATA GsReg_ALPHA_B[2];
	Q_WORDDATA GsReg_ALPHA_C[2];
	Q_WORDDATA GsReg_ALPHA_D[2];
	Q_WORDDATA GsReg_ALPHA_E[2];
	Q_WORDDATA GsReg_TEST_A[2];
	Q_WORDDATA GsReg_TEST_B[2];
	Q_WORDDATA GsReg_TEST_C[2];
	Q_WORDDATA GsReg_TEST_D[2];
	Q_WORDDATA GsReg_TEXA_A[2];
	Q_WORDDATA GsReg_TEXA_B[2];
	Q_WORDDATA GsReg_ZBUF_A[2];
	Q_WORDDATA GsReg_ZBUF_B[2];
	Q_WORDDATA GsReg_PABE_A[2];
	Q_WORDDATA GsReg_PABE_B[2];
	Q_WORDDATA GsReg_FBA_A[2];
	Q_WORDDATA GsReg_FBA_B[2];
	Q_WORDDATA GsReg_PRMODECONT_A[2];
	Q_WORDDATA GsReg_PRMODECONT_B[2];
	Q_WORDDATA GsSync_DummyLABEL[2];
	Q_WORDDATA GsSync_DummyTEXFLUSH[2];
	shGsDrawEnv Now_DrawEnv;
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

struct _anon11
{
	struct
	{
		unsigned long CLAMP : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon12
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

struct _anon13
{
	_anon7* data;
	_anon10* tagInter;
	_anon10* tag;
	int write;
	int count;
	int size;
};

struct _anon14
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

struct _anon15
{
	unsigned int* micro[2][3];
};

struct _anon16
{
	struct
	{
		unsigned long OFX : 16;
		unsigned long pad16 : 16;
		unsigned long OFY : 16;
		unsigned long pad48 : 16;
	};
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

struct _anon17
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

struct _anon18
{
	struct
	{
		unsigned long X : 16;
		unsigned long Y : 16;
		unsigned long Z : 32;
	};
};

struct _anon19
{
	_anon12 pmode;
	_anon22 smode2;
	_anon17 dispfb;
	_anon29 display;
	_anon30 bgcolor;
};

union Q_WORDDATA
{
	unsigned int ui32[4];
	unsigned short us16[8];
	float fl32[4];
	unsigned char uc8[16];
	int si32[4];
	short ss16[8];
	char sc8[16];
	unsigned long ul64[2];
	<unknown fundamental type (0xa510)> ul128;
};

struct _anon20
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

struct _anon21
{
	int status;
	int ctrl;
	fsFileIndex* file;
	int readrest;
	int writerest;
	int isPaused;
	int isStarted;
	short proceed_zero_count;
	int cnt;
	int stFrame;
	int movieabort;
	int framecnt;
	int maskon;
};

union fsFileIndex
{
	_anon27 index;
	unsigned long pack;
};

struct _anon22
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

struct _anon23
{
	_anon3 frame1;
	unsigned long frame1addr;
	_anon24 zbuf1;
	long zbuf1addr;
	_anon16 xyoffset1;
	long xyoffset1addr;
	_anon0 scissor1;
	long scissor1addr;
	_anon31 prmodecont;
	long prmodecontaddr;
	_anon11 colclamp;
	long colclampaddr;
	_anon32 dthe;
	long dtheaddr;
	_anon8 test1;
	long test1addr;
};

struct _anon24
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

struct _anon25
{
	int width;
	int height;
	int frameCount;
	long pts;
	long dts;
	unsigned long flags;
	long pts2nd;
	long dts2nd;
	unsigned long flags2nd;
	void* sys;
};

struct _anon26
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

struct _anon27
{
	fsFile* fp;
	char* name;
};

struct _anon28
{
	unsigned int* pCurrent;
	<unknown fundamental type (0xa510)>* pBase;
	<unknown fundamental type (0xa510)>* pDmaTag;
	unsigned long* pGifTag;
};

struct shGsDrawEnv
{
	_anon14 giftag;
	_anon23 draw;
	Q_WORDDATA drawq2[5];
	_anon35 clear;
	_anon14 giftag_nc;
	_anon23 draw_nc;
	Q_WORDDATA drawq2_nc[5];
	Q_WORDDATA gifad_frame_normal;
	Q_WORDDATA frame_normal;
	Q_WORDDATA gifad_frame_mskalpha;
	Q_WORDDATA frame_mskalpha;
	Q_WORDDATA gifad_frame_mskDalpha;
	Q_WORDDATA frame_mskDalpha;
	Q_WORDDATA gifad_frame_mskRGB;
	Q_WORDDATA frame_mskRGB;
};

struct _anon29
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

struct _anon30
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

struct shGsStencilDrawEnv
{
	_anon14 giftag;
	_anon23 draw;
	Q_WORDDATA alpha1;
	Q_WORDDATA drawq2[6];
	_anon35 clear;
	Q_WORDDATA frame;
	_anon14 giftag_nc;
	_anon23 draw_nc;
	Q_WORDDATA alpha1_nc;
	Q_WORDDATA drawq2_nc[6];
	Q_WORDDATA gifad_frame_normal;
	Q_WORDDATA frame_normal;
	Q_WORDDATA gifad_frame_mskalpha;
	Q_WORDDATA frame_mskalpha;
	Q_WORDDATA gifad_frame_mskDalpha;
	Q_WORDDATA frame_mskDalpha;
};

struct _anon31
{
	struct
	{
		unsigned long AC : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon32
{
	struct
	{
		unsigned long DTHE : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon33
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

struct _anon34
{
	<unknown fundamental type (0xa510)>* data;
	<unknown fundamental type (0xa510)>* tag;
	int n;
	int dmaStart;
	int dmaN;
	int readBytes;
	int buffSize;
	_anon36 env;
	int sema;
	int isActive;
	long totalBytes;
	_anon1* ts;
	int n_ts;
	int count_ts;
	int wt_ts;
};

struct _anon35
{
	_anon8 testa;
	long testaaddr;
	_anon26 prim;
	long primaddr;
	_anon33 rgbaq;
	long rgbaqaddr;
	_anon18 xyz2a;
	long xyz2aaddr;
	_anon18 xyz2b;
	long xyz2baddr;
	_anon8 testb;
	long testbaddr;
};

struct _anon36
{
	unsigned int d4madr;
	unsigned int d4tadr;
	unsigned int d4qwc;
	unsigned int d4chcr;
	unsigned int d3madr;
	unsigned int d3qwc;
	unsigned int d3chcr;
	unsigned int ipubp;
	unsigned int ipuctrl;
};

int isCountVblank;
int vblankCount;
int isFrameEnd;
int isUp;
int handler_error;
_PssCommonWork* pss_common_work;
shGsAllEnv shGs_AllEnv;
_anon13 voBuf;
int frd;
_anon21 pssExecCtrl;
_anon25 sys_mpeg;
unsigned int Movpictag[256];
int csct;
_anon6 videoDec;
_PSS_SUBTITLE_CTRL pssSubTitleCtrl;

void pssInitDisplay();
void pssDispClear();
void clearFinish();
int vblankHandler();
int pssDrawSubTitle();
int handler_endimage();
void startDisplay(int waitEven);
void endDisplay();
void MovePicture(unsigned int* tags, unsigned short fbp);
void SetDrawFBP(unsigned int* tags, unsigned short fbp);
void SetUndoXYOFFSET(unsigned int* tags);

// 
// Start address: 0x289b20
void pssInitDisplay()
{
	// Line 57, Address: 0x289b20, Func Offset: 0
	// Line 59, Address: 0x289b28, Func Offset: 0x8
	// Line 62, Address: 0x289b5c, Func Offset: 0x3c
	// Line 63, Address: 0x289b88, Func Offset: 0x68
	// Line 66, Address: 0x289bb4, Func Offset: 0x94
	// Line 67, Address: 0x289bf0, Func Offset: 0xd0
	// Line 68, Address: 0x289c28, Func Offset: 0x108
	// Line 72, Address: 0x289c58, Func Offset: 0x138
	// Line 73, Address: 0x289c8c, Func Offset: 0x16c
	// Line 76, Address: 0x289cc0, Func Offset: 0x1a0
	// Line 77, Address: 0x289ccc, Func Offset: 0x1ac
	// Func End, Address: 0x289cdc, Func Offset: 0x1bc
}

// 
// Start address: 0x289ce0
void pssDispClear()
{
	// Line 84, Address: 0x289ce0, Func Offset: 0
	// Line 85, Address: 0x289ce8, Func Offset: 0x8
	// Line 88, Address: 0x289d70, Func Offset: 0x90
	// Line 89, Address: 0x289d90, Func Offset: 0xb0
	// Line 90, Address: 0x289da0, Func Offset: 0xc0
	// Func End, Address: 0x289db0, Func Offset: 0xd0
}

// 
// Start address: 0x289db0
void clearFinish()
{
	// Line 108, Address: 0x289db0, Func Offset: 0
	// Line 109, Address: 0x289dc4, Func Offset: 0x14
	// Func End, Address: 0x289dcc, Func Offset: 0x1c
}

// 
// Start address: 0x289dd0
int vblankHandler()
{
	_anon10* tag;
	void* adr;
	_anon10* tag;
	_anon9* dmaGif2;
	_anon9* dmaGif_loadimage;
	// Line 125, Address: 0x289dd0, Func Offset: 0
	// Line 128, Address: 0x289de4, Func Offset: 0x14
	// Line 129, Address: 0x289df4, Func Offset: 0x24
	// Line 131, Address: 0x289e04, Func Offset: 0x34
	// Line 132, Address: 0x289e28, Func Offset: 0x58
	// Line 135, Address: 0x289e4c, Func Offset: 0x7c
	// Line 137, Address: 0x289e68, Func Offset: 0x98
	// Line 139, Address: 0x289e80, Func Offset: 0xb0
	// Line 140, Address: 0x289e90, Func Offset: 0xc0
	// Line 141, Address: 0x289ea4, Func Offset: 0xd4
	// Line 142, Address: 0x289eac, Func Offset: 0xdc
	// Line 143, Address: 0x289ec0, Func Offset: 0xf0
	// Line 144, Address: 0x289ec8, Func Offset: 0xf8
	// Line 147, Address: 0x289ed4, Func Offset: 0x104
	// Line 151, Address: 0x289f5c, Func Offset: 0x18c
	// Line 153, Address: 0x289f7c, Func Offset: 0x1ac
	// Line 156, Address: 0x289f9c, Func Offset: 0x1cc
	// Line 157, Address: 0x289fb0, Func Offset: 0x1e0
	// Line 158, Address: 0x289fbc, Func Offset: 0x1ec
	// Line 160, Address: 0x289fd0, Func Offset: 0x200
	// Line 167, Address: 0x289ff4, Func Offset: 0x224
	// Line 168, Address: 0x28a000, Func Offset: 0x230
	// Line 171, Address: 0x28a008, Func Offset: 0x238
	// Line 172, Address: 0x28a018, Func Offset: 0x248
	// Line 173, Address: 0x28a048, Func Offset: 0x278
	// Line 174, Address: 0x28a054, Func Offset: 0x284
	// Line 175, Address: 0x28a068, Func Offset: 0x298
	// Line 176, Address: 0x28a078, Func Offset: 0x2a8
	// Line 177, Address: 0x28a08c, Func Offset: 0x2bc
	// Line 178, Address: 0x28a0a0, Func Offset: 0x2d0
	// Line 180, Address: 0x28a0c8, Func Offset: 0x2f8
	// Line 183, Address: 0x28a0e4, Func Offset: 0x314
	// Line 184, Address: 0x28a0f8, Func Offset: 0x328
	// Line 185, Address: 0x28a104, Func Offset: 0x334
	// Line 187, Address: 0x28a118, Func Offset: 0x348
	// Line 195, Address: 0x28a13c, Func Offset: 0x36c
	// Line 196, Address: 0x28a148, Func Offset: 0x378
	// Line 197, Address: 0x28a14c, Func Offset: 0x37c
	// Line 200, Address: 0x28a158, Func Offset: 0x388
	// Line 201, Address: 0x28a168, Func Offset: 0x398
	// Line 202, Address: 0x28a198, Func Offset: 0x3c8
	// Line 203, Address: 0x28a1a4, Func Offset: 0x3d4
	// Line 204, Address: 0x28a1b8, Func Offset: 0x3e8
	// Line 205, Address: 0x28a1c8, Func Offset: 0x3f8
	// Line 206, Address: 0x28a1dc, Func Offset: 0x40c
	// Line 209, Address: 0x28a1f0, Func Offset: 0x420
	// Line 212, Address: 0x28a200, Func Offset: 0x430
	// Line 214, Address: 0x28a214, Func Offset: 0x444
	// Line 215, Address: 0x28a224, Func Offset: 0x454
	// Line 216, Address: 0x28a238, Func Offset: 0x468
	// Line 223, Address: 0x28a248, Func Offset: 0x478
	// Line 225, Address: 0x28a250, Func Offset: 0x480
	// Line 227, Address: 0x28a260, Func Offset: 0x490
	// Line 228, Address: 0x28a274, Func Offset: 0x4a4
	// Line 229, Address: 0x28a280, Func Offset: 0x4b0
	// Line 230, Address: 0x28a290, Func Offset: 0x4c0
	// Line 232, Address: 0x28a2a0, Func Offset: 0x4d0
	// Line 233, Address: 0x28a2ac, Func Offset: 0x4dc
	// Line 235, Address: 0x28a2b8, Func Offset: 0x4e8
	// Line 237, Address: 0x28a2c8, Func Offset: 0x4f8
	// Line 238, Address: 0x28a2e0, Func Offset: 0x510
	// Line 242, Address: 0x28a2f0, Func Offset: 0x520
	// Line 243, Address: 0x28a2f8, Func Offset: 0x528
	// Line 247, Address: 0x28a314, Func Offset: 0x544
	// Line 249, Address: 0x28a330, Func Offset: 0x560
	// Line 250, Address: 0x28a348, Func Offset: 0x578
	// Line 251, Address: 0x28a358, Func Offset: 0x588
	// Line 252, Address: 0x28a368, Func Offset: 0x598
	// Line 253, Address: 0x28a370, Func Offset: 0x5a0
	// Line 254, Address: 0x28a384, Func Offset: 0x5b4
	// Line 255, Address: 0x28a38c, Func Offset: 0x5bc
	// Line 258, Address: 0x28a398, Func Offset: 0x5c8
	// Line 259, Address: 0x28a3b8, Func Offset: 0x5e8
	// Line 260, Address: 0x28a3c0, Func Offset: 0x5f0
	// Line 261, Address: 0x28a3e8, Func Offset: 0x618
	// Line 262, Address: 0x28a3ec, Func Offset: 0x61c
	// Line 265, Address: 0x28a3f4, Func Offset: 0x624
	// Line 266, Address: 0x28a404, Func Offset: 0x634
	// Line 267, Address: 0x28a414, Func Offset: 0x644
	// Line 271, Address: 0x28a41c, Func Offset: 0x64c
	// Line 272, Address: 0x28a424, Func Offset: 0x654
	// Line 273, Address: 0x28a428, Func Offset: 0x658
	// Func End, Address: 0x28a444, Func Offset: 0x674
}

// 
// Start address: 0x28a450
int pssDrawSubTitle()
{
	// Line 277, Address: 0x28a450, Func Offset: 0
	// Line 278, Address: 0x28a458, Func Offset: 0x8
	// Line 280, Address: 0x28a468, Func Offset: 0x18
	// Line 282, Address: 0x28a490, Func Offset: 0x40
	// Line 283, Address: 0x28a498, Func Offset: 0x48
	// Line 285, Address: 0x28a4ac, Func Offset: 0x5c
	// Line 286, Address: 0x28a4dc, Func Offset: 0x8c
	// Line 287, Address: 0x28a4fc, Func Offset: 0xac
	// Line 290, Address: 0x28a508, Func Offset: 0xb8
	// Line 291, Address: 0x28a50c, Func Offset: 0xbc
	// Func End, Address: 0x28a51c, Func Offset: 0xcc
}

// 
// Start address: 0x28a520
int handler_endimage()
{
	// Line 298, Address: 0x28a520, Func Offset: 0
	// Line 299, Address: 0x28a528, Func Offset: 0x8
	// Line 300, Address: 0x28a530, Func Offset: 0x10
	// Line 301, Address: 0x28a540, Func Offset: 0x20
	// Line 302, Address: 0x28a550, Func Offset: 0x30
	// Line 303, Address: 0x28a558, Func Offset: 0x38
	// Line 305, Address: 0x28a56c, Func Offset: 0x4c
	// Line 307, Address: 0x28a574, Func Offset: 0x54
	// Line 308, Address: 0x28a578, Func Offset: 0x58
	// Func End, Address: 0x28a588, Func Offset: 0x68
}

// 
// Start address: 0x28a590
void startDisplay(int waitEven)
{
	// Line 316, Address: 0x28a590, Func Offset: 0
	// Line 319, Address: 0x28a5a0, Func Offset: 0x10
	// Line 321, Address: 0x28a5c0, Func Offset: 0x30
	// Line 322, Address: 0x28a5c8, Func Offset: 0x38
	// Line 323, Address: 0x28a5d4, Func Offset: 0x44
	// Line 324, Address: 0x28a5dc, Func Offset: 0x4c
	// Func End, Address: 0x28a5f0, Func Offset: 0x60
}

// 
// Start address: 0x28a5f0
void endDisplay()
{
	// Line 331, Address: 0x28a5f0, Func Offset: 0
	// Line 332, Address: 0x28a5f8, Func Offset: 0x8
	// Line 333, Address: 0x28a608, Func Offset: 0x18
	// Line 334, Address: 0x28a610, Func Offset: 0x20
	// Line 335, Address: 0x28a618, Func Offset: 0x28
	// Func End, Address: 0x28a628, Func Offset: 0x38
}

// 
// Start address: 0x28a630
void MovePicture(unsigned int* tags, unsigned short fbp)
{
	int image_h;
	int image_w;
	_anon28 packet;
	unsigned long giftag_eop[2];
	// Line 338, Address: 0x28a630, Func Offset: 0
	// Line 339, Address: 0x28a640, Func Offset: 0x10
	// Line 349, Address: 0x28a654, Func Offset: 0x24
	// Line 350, Address: 0x28a670, Func Offset: 0x40
	// Line 368, Address: 0x28a67c, Func Offset: 0x4c
	// Line 370, Address: 0x28a694, Func Offset: 0x64
	// Line 371, Address: 0x28a6a8, Func Offset: 0x78
	// Line 372, Address: 0x28a6bc, Func Offset: 0x8c
	// Line 374, Address: 0x28a6d0, Func Offset: 0xa0
	// Line 377, Address: 0x28a6fc, Func Offset: 0xcc
	// Line 379, Address: 0x28a710, Func Offset: 0xe0
	// Line 380, Address: 0x28a724, Func Offset: 0xf4
	// Line 381, Address: 0x28a73c, Func Offset: 0x10c
	// Line 383, Address: 0x28a754, Func Offset: 0x124
	// Line 387, Address: 0x28a770, Func Offset: 0x140
	// Line 390, Address: 0x28a780, Func Offset: 0x150
	// Line 392, Address: 0x28a794, Func Offset: 0x164
	// Line 393, Address: 0x28a7ac, Func Offset: 0x17c
	// Line 394, Address: 0x28a7d0, Func Offset: 0x1a0
	// Line 396, Address: 0x28a7f4, Func Offset: 0x1c4
	// Line 398, Address: 0x28a808, Func Offset: 0x1d8
	// Line 400, Address: 0x28a820, Func Offset: 0x1f0
	// Line 401, Address: 0x28a844, Func Offset: 0x214
	// Line 403, Address: 0x28a868, Func Offset: 0x238
	// Line 407, Address: 0x28a870, Func Offset: 0x240
	// Line 409, Address: 0x28a884, Func Offset: 0x254
	// Line 410, Address: 0x28a89c, Func Offset: 0x26c
	// Line 411, Address: 0x28a8c0, Func Offset: 0x290
	// Line 413, Address: 0x28a8e4, Func Offset: 0x2b4
	// Line 415, Address: 0x28a8f8, Func Offset: 0x2c8
	// Line 417, Address: 0x28a910, Func Offset: 0x2e0
	// Line 418, Address: 0x28a934, Func Offset: 0x304
	// Line 422, Address: 0x28a958, Func Offset: 0x328
	// Line 425, Address: 0x28a964, Func Offset: 0x334
	// Line 426, Address: 0x28a970, Func Offset: 0x340
	// Func End, Address: 0x28a984, Func Offset: 0x354
}

// 
// Start address: 0x28a990
void SetDrawFBP(unsigned int* tags, unsigned short fbp)
{
	_anon28 packet;
	unsigned long giftag_eop[2];
	// Line 429, Address: 0x28a990, Func Offset: 0
	// Line 430, Address: 0x28a9a0, Func Offset: 0x10
	// Line 434, Address: 0x28a9b4, Func Offset: 0x24
	// Line 435, Address: 0x28a9d0, Func Offset: 0x40
	// Line 436, Address: 0x28a9dc, Func Offset: 0x4c
	// Line 437, Address: 0x28a9f4, Func Offset: 0x64
	// Line 439, Address: 0x28aa08, Func Offset: 0x78
	// Line 441, Address: 0x28aa24, Func Offset: 0x94
	// Line 442, Address: 0x28aa30, Func Offset: 0xa0
	// Line 443, Address: 0x28aa3c, Func Offset: 0xac
	// Func End, Address: 0x28aa50, Func Offset: 0xc0
}

// 
// Start address: 0x28aa50
void SetUndoXYOFFSET(unsigned int* tags)
{
	_anon28 packet;
	unsigned long giftag_eop[2];
	// Line 446, Address: 0x28aa50, Func Offset: 0
	// Line 447, Address: 0x28aa58, Func Offset: 0x8
	// Line 451, Address: 0x28aa6c, Func Offset: 0x1c
	// Line 452, Address: 0x28aa88, Func Offset: 0x38
	// Line 453, Address: 0x28aa94, Func Offset: 0x44
	// Line 454, Address: 0x28aaac, Func Offset: 0x5c
	// Line 456, Address: 0x28aac0, Func Offset: 0x70
	// Line 458, Address: 0x28aadc, Func Offset: 0x8c
	// Line 459, Address: 0x28aae8, Func Offset: 0x98
	// Line 460, Address: 0x28aaf4, Func Offset: 0xa4
	// Func End, Address: 0x28ab04, Func Offset: 0xb4
}

