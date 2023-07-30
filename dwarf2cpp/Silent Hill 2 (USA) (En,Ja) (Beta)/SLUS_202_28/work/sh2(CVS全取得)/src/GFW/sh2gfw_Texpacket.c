typedef struct _anon0;
typedef struct _anon1;
typedef struct sh2gfw_TEX_HEAD;
typedef struct sh2gfw_CLUTS_HEAD;
typedef struct sh2gfw_TexMAN;
typedef union Q_WORDDATA;
typedef struct _anon2;
typedef struct _anon3;
typedef struct TexTable_List;
typedef struct _anon4;
typedef struct sh2gfw_ALLTEXSYNC_MAN;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct shGsDrawEnv;
typedef struct _anon9;
typedef struct shGsStencilDrawEnv;
typedef struct _anon10;
typedef struct _anon11;
typedef struct shGsLoopEnv;
typedef struct _anon12;
typedef struct TexTable_Element;
typedef struct _anon13;
typedef struct shGsTinyDrawEnv;
typedef struct _anon14;
typedef struct _anon15;
typedef struct TexTable_KickList;
typedef struct _anon16;
typedef struct _anon17;
typedef struct shGsAllEnv;
typedef struct sh2gfw_TexTrans_Manage_Table;
typedef struct _anon18;
typedef struct _anon19;


typedef shGsDrawEnv type_0[3];
typedef TexTable_List type_1[5];
typedef shGsStencilDrawEnv type_2[3];
typedef shGsTinyDrawEnv type_3[6];
typedef Q_WORDDATA type_4[10];
typedef Q_WORDDATA type_5[10];
typedef Q_WORDDATA type_6[10];
typedef Q_WORDDATA type_7[10];
typedef Q_WORDDATA type_8[10];
typedef Q_WORDDATA type_9[10];
typedef Q_WORDDATA type_10[10];
typedef Q_WORDDATA type_11[8];
typedef Q_WORDDATA type_12[2];
typedef Q_WORDDATA type_13[2];
typedef Q_WORDDATA type_14[2];
typedef Q_WORDDATA type_15[2];
typedef Q_WORDDATA type_16[2];
typedef Q_WORDDATA type_17[2];
typedef Q_WORDDATA type_18[2];
typedef Q_WORDDATA type_19[2];
typedef Q_WORDDATA type_20[2];
typedef Q_WORDDATA type_21[5];
typedef Q_WORDDATA type_22[2];
typedef Q_WORDDATA type_23[2];
typedef Q_WORDDATA type_24[2];
typedef Q_WORDDATA type_25[5];
typedef Q_WORDDATA type_26[2];
typedef Q_WORDDATA type_27[2];
typedef Q_WORDDATA type_28[2];
typedef Q_WORDDATA type_29[2];
typedef Q_WORDDATA type_30[2];
typedef Q_WORDDATA type_31[2];
typedef Q_WORDDATA type_32[2];
typedef unsigned int type_33[4];
typedef Q_WORDDATA type_34[2];
typedef unsigned short type_35[8];
typedef Q_WORDDATA type_36[6];
typedef Q_WORDDATA type_37[2];
typedef float type_38[4];
typedef unsigned char type_39[16];
typedef unsigned char type_40[16];
typedef int type_41[4];
typedef Q_WORDDATA type_42[6];
typedef unsigned char type_43[16];
typedef short type_44[8];
typedef char type_45[16];
typedef unsigned long type_46[2];
typedef int type_47[4];
typedef unsigned int type_48[3];
typedef unsigned int type_49[3];
typedef int type_50[4];
typedef unsigned int type_51[3];
typedef unsigned int type_52[24];
typedef unsigned int type_53[3];
typedef unsigned int type_54[3];
typedef Q_WORDDATA type_55[48];
typedef unsigned short type_56[8];
typedef sh2gfw_TexMAN type_57[96];
typedef TexTable_Element type_58[16];
typedef char type_59[128];
typedef TexTable_KickList type_60[80];
typedef _anon14 type_61[3];

struct _anon0
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

struct _anon1
{
	struct
	{
		unsigned long CLAMP : 1;
		unsigned long pad01 : 63;
	};
};

struct sh2gfw_TEX_HEAD
{
	unsigned int texture_no;
	unsigned short x;
	unsigned short y;
	unsigned short w;
	unsigned short h;
	unsigned char color;
	unsigned char padbyte;
	unsigned short importance;
	unsigned int datasize;
	unsigned int allsize;
	unsigned char sendpsm;
	unsigned char drawpsm;
	unsigned char bitshift;
	unsigned char tagpoint;
	unsigned char bitw;
	unsigned char bith;
	unsigned short check;
	Q_WORDDATA giftag;
};

struct sh2gfw_CLUTS_HEAD
{
	unsigned int clutssize;
	unsigned int toGSREGS;
	unsigned int toRawClut;
	unsigned char clutamount;
	unsigned char transcluts;
	unsigned char clw;
	unsigned char clh;
	unsigned char fmt[16];
	unsigned char transparency[16];
};

struct sh2gfw_TexMAN
{
	unsigned short check;
	unsigned short mode;
	unsigned short kind;
	unsigned short mark;
	unsigned short attr;
	unsigned short delay;
	int commandid;
	int slotid;
	void* Manage;
	sh2gfw_TexMAN* pPrev;
	sh2gfw_TexMAN* pNext;
	void* TexHead;
	void* ClutHead;
	void* tex;
	void* clut;
	Q_WORDDATA GIFA_D_REGS;
	Q_WORDDATA GS_TEXFLUSH;
	Q_WORDDATA GS_TEX0_1;
	Q_WORDDATA GS_TEX0_2;
	Q_WORDDATA GS_REG0;
	Q_WORDDATA GS_REG1;
	Q_WORDDATA GS_REG2;
	Q_WORDDATA GS_REG3;
	Q_WORDDATA GS_REG4;
	Q_WORDDATA TEX0_for_CLUT[48];
	Q_WORDDATA DMACNT;
	Q_WORDDATA GIFA_D_TEX;
	Q_WORDDATA GS_LABEL;
	Q_WORDDATA GS_TEX_BITBLT;
	Q_WORDDATA GS_TEX_TRXREG;
	Q_WORDDATA GS_TEX_TRXPOS;
	Q_WORDDATA GS_TEX_TRXDIR;
	Q_WORDDATA GIFIMAGE_TEX;
	Q_WORDDATA DMAREF_TEXTRANS;
	Q_WORDDATA DMACNT_CLUT;
	Q_WORDDATA GIFA_D_CLUT;
	Q_WORDDATA GS_CLUT_BITBLT;
	Q_WORDDATA GS_CLUT_TRXREG;
	Q_WORDDATA GS_CLUT_TRXPOS;
	Q_WORDDATA GS_CLUT_TRXDIR;
	Q_WORDDATA GIFIMAGE_CLUT;
	Q_WORDDATA DMAREF_CLUTTRANS;
	Q_WORDDATA DMAREF_DUMLBL;
	Q_WORDDATA DMAEND;
	Q_WORDDATA GIFA_D_LBLU;
	Q_WORDDATA GS_LABELU;
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

struct _anon2
{
	struct
	{
		unsigned long OFX : 16;
		unsigned long pad16 : 16;
		unsigned long OFY : 16;
		unsigned long pad48 : 16;
	};
};

struct _anon3
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

struct TexTable_List
{
	int list_head;
	int list_tail;
	int last_mark;
	int pad;
	TexTable_Element list_element[16];
};

struct _anon4
{
	struct
	{
		unsigned long X : 16;
		unsigned long Y : 16;
		unsigned long Z : 32;
	};
};

struct sh2gfw_ALLTEXSYNC_MAN
{
	short g_BG;
	short st_BG;
	short l_BG;
	short bg_CHR;
	short human_CHR;
	short en_CHR;
	short ura_CHR;
	short x_CHR;
	short alltex_CHR;
	short oS_CHR;
	short oA_CHR;
	short wp_CHR;
	short alltexnum;
	short alltex_BG;
	short alltex_EFF;
	unsigned short trans_NOW_num;
	sh2gfw_TexMAN Empty_Head;
	sh2gfw_TexMAN Used_Head;
	int dbg_add;
	int dbg_del;
	unsigned short fonttex;
	unsigned short pads;
	int pad2;
	sh2gfw_TexMAN TexMan[96];
};

struct _anon5
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

struct _anon6
{
	_anon19 testa;
	long testaaddr;
	_anon9 prim;
	long primaddr;
	_anon12 rgbaq;
	long rgbaqaddr;
	_anon4 xyz2a;
	long xyz2aaddr;
	_anon4 xyz2b;
	long xyz2baddr;
	_anon19 testb;
	long testbaddr;
};

struct _anon7
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

struct _anon8
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

struct shGsDrawEnv
{
	_anon0 giftag;
	_anon17 draw;
	Q_WORDDATA drawq2[5];
	_anon6 clear;
	_anon0 giftag_nc;
	_anon17 draw_nc;
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

struct _anon9
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

struct shGsStencilDrawEnv
{
	_anon0 giftag;
	_anon17 draw;
	Q_WORDDATA alpha1;
	Q_WORDDATA drawq2[6];
	_anon6 clear;
	Q_WORDDATA frame;
	_anon0 giftag_nc;
	_anon17 draw_nc;
	Q_WORDDATA alpha1_nc;
	Q_WORDDATA drawq2_nc[6];
	Q_WORDDATA gifad_frame_normal;
	Q_WORDDATA frame_normal;
	Q_WORDDATA gifad_frame_mskalpha;
	Q_WORDDATA frame_mskalpha;
	Q_WORDDATA gifad_frame_mskDalpha;
	Q_WORDDATA frame_mskDalpha;
};

struct _anon10
{
	struct
	{
		unsigned long DTHE : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon11
{
	struct
	{
		unsigned long AC : 1;
		unsigned long pad01 : 63;
	};
};

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

struct _anon12
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

struct TexTable_Element
{
	void* pTexMan;
	short mark;
	unsigned short kind;
};

struct _anon13
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

struct _anon14
{
	_anon16 pmode;
	_anon3 smode2;
	_anon18 dispfb;
	_anon5 display;
	_anon7 bgcolor;
};

struct _anon15
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

struct TexTable_KickList
{
	void* pTexMan;
	unsigned short Index;
	unsigned short SlotNo;
};

struct _anon16
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

struct _anon17
{
	_anon15 frame1;
	unsigned long frame1addr;
	_anon8 zbuf1;
	long zbuf1addr;
	_anon2 xyoffset1;
	long xyoffset1addr;
	_anon13 scissor1;
	long scissor1addr;
	_anon11 prmodecont;
	long prmodecontaddr;
	_anon1 colclamp;
	long colclampaddr;
	_anon10 dthe;
	long dtheaddr;
	_anon19 test1;
	long test1addr;
};

struct shGsAllEnv
{
	unsigned long loop_counter;
	unsigned int loop;
	unsigned int loop3;
	shGsLoopEnv LoopEnv;
	_anon14 DispEnv[3];
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

struct sh2gfw_TexTrans_Manage_Table
{
	int kick;
	int mark_now;
	int pad2;
	int pad3;
	TexTable_KickList TexKick_List[80];
	TexTable_List TexSlot_List[5];
};

struct _anon18
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

struct _anon19
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

shGsAllEnv shGs_AllEnv;
Q_WORDDATA fake_kick;
int fake_cid[4];
int fake_slot[4];
sh2gfw_ALLTEXSYNC_MAN AllTexSync_Man;
sh2gfw_TexTrans_Manage_Table TexTransTable;

void sh2gfw_allinit_TexMANlist(sh2gfw_ALLTEXSYNC_MAN* pATSM);
void sh2gfw_clear_TexMAN_TransParm();
sh2gfw_TexMAN* sh2gfw_set_TexToTrasMan(sh2gfw_ALLTEXSYNC_MAN* pATSM, sh2gfw_TEX_HEAD* pTexHead, sh2gfw_CLUTS_HEAD* pClutHead, void* pMAN, unsigned short mode);
sh2gfw_TexMAN* sh2gfw_get_newMANID(sh2gfw_ALLTEXSYNC_MAN* pATSM);
sh2gfw_TexMAN* sh2gfw_del_TexMAN(sh2gfw_ALLTEXSYNC_MAN* pATSM, sh2gfw_TexMAN* pDel);
void sh2gfw_init_SyncTexTag(sh2gfw_TexMAN* sTM, sh2gfw_TEX_HEAD* pTexHead, sh2gfw_CLUTS_HEAD* pClutHead, void* pMAN, unsigned short mode);
void sh2gfw_Change_TexBody(void* pT, void* texaddr);
void sh2gfw_Reset_TexBody(void* pT);
<unknown fundamental type (0xa510)>* sh2gfw_Get_RegTEX0(sh2gfw_TexMAN* sTM, unsigned int clutid, unsigned int flg);
int sh2gfw_Get_TFX(void* sTMV, int clutid);
int sh2gfw_Thr_d2TextureSend(void* ptm, int mode, int* cid, int* slotid);
int sh2gfw_Thr_d1d2SyncKick(void* pkaddr, int cid, int slotid);
int Fake_SetTexSlot(int sid, void* pk);
void sh2gfw_Lock_AllTexSlot_For_Shadow();
void sh2gfw_UnLock_AllTexSlot_For_Shadow();
void sh2gfw_init_TexTrans_Manage_Table();
int sh2gfw_EnQue_TexSlot(void* pTexMan);
void SetTexture2table(TexTable_List* pTL, void* pTexMan, int mark);
int sh2gfw_SetSlot2Tex(sh2gfw_TexMAN* sTM, int slotno);
int GetTexList_MinMark();

// 
// Start address: 0x17e480
void sh2gfw_allinit_TexMANlist(sh2gfw_ALLTEXSYNC_MAN* pATSM)
{
	int i;
	// Line 73, Address: 0x17e480, Func Offset: 0
	// Line 74, Address: 0x17e48c, Func Offset: 0xc
	// Line 75, Address: 0x17e4c8, Func Offset: 0x48
	// Line 77, Address: 0x17e4ec, Func Offset: 0x6c
	// Line 79, Address: 0x17e4f0, Func Offset: 0x70
	// Line 81, Address: 0x17e4f8, Func Offset: 0x78
	// Line 84, Address: 0x17e50c, Func Offset: 0x8c
	// Line 85, Address: 0x17e514, Func Offset: 0x94
	// Line 86, Address: 0x17e520, Func Offset: 0xa0
	// Line 87, Address: 0x17e528, Func Offset: 0xa8
	// Line 90, Address: 0x17e538, Func Offset: 0xb8
	// Line 93, Address: 0x17e544, Func Offset: 0xc4
	// Line 94, Address: 0x17e548, Func Offset: 0xc8
	// Line 97, Address: 0x17e54c, Func Offset: 0xcc
	// Line 103, Address: 0x17e588, Func Offset: 0x108
	// Func End, Address: 0x17e590, Func Offset: 0x110
}

// 
// Start address: 0x17e590
void sh2gfw_clear_TexMAN_TransParm()
{
	// Line 159, Address: 0x17e590, Func Offset: 0
	// Func End, Address: 0x17e598, Func Offset: 0x8
}

// 
// Start address: 0x17e5a0
sh2gfw_TexMAN* sh2gfw_set_TexToTrasMan(sh2gfw_ALLTEXSYNC_MAN* pATSM, sh2gfw_TEX_HEAD* pTexHead, sh2gfw_CLUTS_HEAD* pClutHead, void* pMAN, unsigned short mode)
{
	sh2gfw_TexMAN* pSTM;
	// Line 174, Address: 0x17e5a0, Func Offset: 0
	// Line 179, Address: 0x17e5d4, Func Offset: 0x34
	// Line 185, Address: 0x17e5e0, Func Offset: 0x40
	// Line 186, Address: 0x17e5fc, Func Offset: 0x5c
	// Line 190, Address: 0x17e608, Func Offset: 0x68
	// Line 191, Address: 0x17e614, Func Offset: 0x74
	// Line 195, Address: 0x17e660, Func Offset: 0xc0
	// Line 196, Address: 0x17e66c, Func Offset: 0xcc
	// Line 197, Address: 0x17e678, Func Offset: 0xd8
	// Line 198, Address: 0x17e698, Func Offset: 0xf8
	// Line 199, Address: 0x17e6a4, Func Offset: 0x104
	// Line 200, Address: 0x17e6ac, Func Offset: 0x10c
	// Line 202, Address: 0x17e6b8, Func Offset: 0x118
	// Line 203, Address: 0x17e6c4, Func Offset: 0x124
	// Line 205, Address: 0x17e6cc, Func Offset: 0x12c
	// Line 206, Address: 0x17e6d8, Func Offset: 0x138
	// Line 208, Address: 0x17e6e0, Func Offset: 0x140
	// Line 209, Address: 0x17e6ec, Func Offset: 0x14c
	// Line 211, Address: 0x17e6f4, Func Offset: 0x154
	// Line 212, Address: 0x17e70c, Func Offset: 0x16c
	// Line 213, Address: 0x17e718, Func Offset: 0x178
	// Line 214, Address: 0x17e738, Func Offset: 0x198
	// Line 215, Address: 0x17e744, Func Offset: 0x1a4
	// Line 216, Address: 0x17e764, Func Offset: 0x1c4
	// Line 217, Address: 0x17e770, Func Offset: 0x1d0
	// Line 218, Address: 0x17e790, Func Offset: 0x1f0
	// Line 219, Address: 0x17e79c, Func Offset: 0x1fc
	// Line 220, Address: 0x17e7bc, Func Offset: 0x21c
	// Line 221, Address: 0x17e7c8, Func Offset: 0x228
	// Line 222, Address: 0x17e7e8, Func Offset: 0x248
	// Line 223, Address: 0x17e7f4, Func Offset: 0x254
	// Line 224, Address: 0x17e814, Func Offset: 0x274
	// Line 225, Address: 0x17e820, Func Offset: 0x280
	// Line 226, Address: 0x17e828, Func Offset: 0x288
	// Line 229, Address: 0x17e834, Func Offset: 0x294
	// Line 235, Address: 0x17e840, Func Offset: 0x2a0
	// Line 237, Address: 0x17e874, Func Offset: 0x2d4
	// Line 238, Address: 0x17e878, Func Offset: 0x2d8
	// Func End, Address: 0x17e8a0, Func Offset: 0x300
}

// 
// Start address: 0x17e8a0
sh2gfw_TexMAN* sh2gfw_get_newMANID(sh2gfw_ALLTEXSYNC_MAN* pATSM)
{
	sh2gfw_TexMAN* pTp;
	sh2gfw_TexMAN* pUs;
	sh2gfw_TexMAN* plc;
	// Line 256, Address: 0x17e8a0, Func Offset: 0
	// Line 257, Address: 0x17e8a4, Func Offset: 0x4
	// Line 259, Address: 0x17e8a8, Func Offset: 0x8
	// Line 261, Address: 0x17e8bc, Func Offset: 0x1c
	// Line 262, Address: 0x17e8c0, Func Offset: 0x20
	// Line 263, Address: 0x17e8cc, Func Offset: 0x2c
	// Line 265, Address: 0x17e8d8, Func Offset: 0x38
	// Line 266, Address: 0x17e8e0, Func Offset: 0x40
	// Line 267, Address: 0x17e8e4, Func Offset: 0x44
	// Line 268, Address: 0x17e8ec, Func Offset: 0x4c
	// Line 275, Address: 0x17e8f0, Func Offset: 0x50
	// Func End, Address: 0x17e8f8, Func Offset: 0x58
}

// 
// Start address: 0x17e900
sh2gfw_TexMAN* sh2gfw_del_TexMAN(sh2gfw_ALLTEXSYNC_MAN* pATSM, sh2gfw_TexMAN* pDel)
{
	sh2gfw_TexMAN* pTp;
	sh2gfw_TexMAN* pUs;
	sh2gfw_TexMAN* plc;
	// Line 299, Address: 0x17e900, Func Offset: 0
	// Line 325, Address: 0x17e904, Func Offset: 0x4
	// Line 326, Address: 0x17e910, Func Offset: 0x10
	// Line 328, Address: 0x17e91c, Func Offset: 0x1c
	// Line 329, Address: 0x17e920, Func Offset: 0x20
	// Line 330, Address: 0x17e928, Func Offset: 0x28
	// Line 331, Address: 0x17e930, Func Offset: 0x30
	// Line 333, Address: 0x17e934, Func Offset: 0x34
	// Line 337, Address: 0x17e950, Func Offset: 0x50
	// Line 341, Address: 0x17e9a8, Func Offset: 0xa8
	// Line 342, Address: 0x17e9b4, Func Offset: 0xb4
	// Line 343, Address: 0x17e9c0, Func Offset: 0xc0
	// Line 344, Address: 0x17e9e0, Func Offset: 0xe0
	// Line 345, Address: 0x17e9ec, Func Offset: 0xec
	// Line 346, Address: 0x17e9f4, Func Offset: 0xf4
	// Line 348, Address: 0x17ea00, Func Offset: 0x100
	// Line 349, Address: 0x17ea0c, Func Offset: 0x10c
	// Line 351, Address: 0x17ea14, Func Offset: 0x114
	// Line 352, Address: 0x17ea20, Func Offset: 0x120
	// Line 354, Address: 0x17ea28, Func Offset: 0x128
	// Line 355, Address: 0x17ea34, Func Offset: 0x134
	// Line 360, Address: 0x17ea3c, Func Offset: 0x13c
	// Line 361, Address: 0x17ea54, Func Offset: 0x154
	// Line 362, Address: 0x17ea6c, Func Offset: 0x16c
	// Line 363, Address: 0x17ea8c, Func Offset: 0x18c
	// Line 364, Address: 0x17eaa4, Func Offset: 0x1a4
	// Line 365, Address: 0x17eac4, Func Offset: 0x1c4
	// Line 366, Address: 0x17eadc, Func Offset: 0x1dc
	// Line 367, Address: 0x17eafc, Func Offset: 0x1fc
	// Line 368, Address: 0x17eb14, Func Offset: 0x214
	// Line 369, Address: 0x17eb34, Func Offset: 0x234
	// Line 370, Address: 0x17eb4c, Func Offset: 0x24c
	// Line 371, Address: 0x17eb6c, Func Offset: 0x26c
	// Line 372, Address: 0x17eb84, Func Offset: 0x284
	// Line 373, Address: 0x17eba4, Func Offset: 0x2a4
	// Line 374, Address: 0x17ebbc, Func Offset: 0x2bc
	// Line 375, Address: 0x17ebc4, Func Offset: 0x2c4
	// Line 390, Address: 0x17ebdc, Func Offset: 0x2dc
	// Line 394, Address: 0x17ebe4, Func Offset: 0x2e4
	// Line 397, Address: 0x17ebe8, Func Offset: 0x2e8
	// Func End, Address: 0x17ebf0, Func Offset: 0x2f0
}

// 
// Start address: 0x17ebf0
void sh2gfw_init_SyncTexTag(sh2gfw_TexMAN* sTM, sh2gfw_TEX_HEAD* pTexHead, sh2gfw_CLUTS_HEAD* pClutHead, void* pMAN, unsigned short mode)
{
	Q_WORDDATA* pqwd;
	unsigned int dpsm;
	unsigned int i;
	unsigned int clm;
	unsigned int bw_64;
	unsigned int bh;
	unsigned int bw;
	// Line 545, Address: 0x17ebf0, Func Offset: 0
	// Line 549, Address: 0x17ebf4, Func Offset: 0x4
	// Line 550, Address: 0x17ebfc, Func Offset: 0xc
	// Line 552, Address: 0x17ec00, Func Offset: 0x10
	// Line 554, Address: 0x17ec04, Func Offset: 0x14
	// Line 555, Address: 0x17ec08, Func Offset: 0x18
	// Line 557, Address: 0x17ec0c, Func Offset: 0x1c
	// Line 559, Address: 0x17ec1c, Func Offset: 0x2c
	// Line 567, Address: 0x17ec24, Func Offset: 0x34
	// Line 568, Address: 0x17ec38, Func Offset: 0x48
	// Line 569, Address: 0x17ec3c, Func Offset: 0x4c
	// Line 570, Address: 0x17ec44, Func Offset: 0x54
	// Line 573, Address: 0x17ec48, Func Offset: 0x58
	// Line 574, Address: 0x17ec60, Func Offset: 0x70
	// Line 575, Address: 0x17ec78, Func Offset: 0x88
	// Line 579, Address: 0x17ec88, Func Offset: 0x98
	// Line 580, Address: 0x17ecbc, Func Offset: 0xcc
	// Line 581, Address: 0x17ecc4, Func Offset: 0xd4
	// Line 584, Address: 0x17ecc8, Func Offset: 0xd8
	// Line 585, Address: 0x17ecd0, Func Offset: 0xe0
	// Line 586, Address: 0x17ecd4, Func Offset: 0xe4
	// Line 589, Address: 0x17ecd8, Func Offset: 0xe8
	// Line 590, Address: 0x17ece0, Func Offset: 0xf0
	// Line 593, Address: 0x17ece4, Func Offset: 0xf4
	// Line 598, Address: 0x17ed08, Func Offset: 0x118
	// Line 607, Address: 0x17ed38, Func Offset: 0x148
	// Line 609, Address: 0x17ed54, Func Offset: 0x164
	// Line 610, Address: 0x17ed6c, Func Offset: 0x17c
	// Line 613, Address: 0x17ed84, Func Offset: 0x194
	// Line 615, Address: 0x17eda0, Func Offset: 0x1b0
	// Line 617, Address: 0x17edac, Func Offset: 0x1bc
	// Line 618, Address: 0x17edb4, Func Offset: 0x1c4
	// Line 619, Address: 0x17edbc, Func Offset: 0x1cc
	// Line 622, Address: 0x17edc4, Func Offset: 0x1d4
	// Line 625, Address: 0x17edd0, Func Offset: 0x1e0
	// Line 626, Address: 0x17edd8, Func Offset: 0x1e8
	// Line 629, Address: 0x17edf0, Func Offset: 0x200
	// Line 631, Address: 0x17ee10, Func Offset: 0x220
	// Line 632, Address: 0x17ee34, Func Offset: 0x244
	// Line 633, Address: 0x17ee48, Func Offset: 0x258
	// Line 634, Address: 0x17ee5c, Func Offset: 0x26c
	// Line 637, Address: 0x17ee70, Func Offset: 0x280
	// Line 638, Address: 0x17ee74, Func Offset: 0x284
	// Line 640, Address: 0x17ee78, Func Offset: 0x288
	// Line 641, Address: 0x17ee84, Func Offset: 0x294
	// Line 643, Address: 0x17eea0, Func Offset: 0x2b0
	// Line 644, Address: 0x17eea4, Func Offset: 0x2b4
	// Line 646, Address: 0x17eeb4, Func Offset: 0x2c4
	// Line 649, Address: 0x17eebc, Func Offset: 0x2cc
	// Line 650, Address: 0x17eed0, Func Offset: 0x2e0
	// Line 651, Address: 0x17eee4, Func Offset: 0x2f4
	// Line 654, Address: 0x17eef4, Func Offset: 0x304
	// Line 655, Address: 0x17ef10, Func Offset: 0x320
	// Line 657, Address: 0x17ef1c, Func Offset: 0x32c
	// Func End, Address: 0x17ef24, Func Offset: 0x334
}

// 
// Start address: 0x17ef30
void sh2gfw_Change_TexBody(void* pT, void* texaddr)
{
	sh2gfw_TexMAN* pTM;
	// Line 670, Address: 0x17ef30, Func Offset: 0
	// Line 671, Address: 0x17ef34, Func Offset: 0x4
	// Func End, Address: 0x17ef3c, Func Offset: 0xc
}

// 
// Start address: 0x17ef40
void sh2gfw_Reset_TexBody(void* pT)
{
	sh2gfw_TexMAN* pTM;
	// Line 682, Address: 0x17ef40, Func Offset: 0
	// Line 683, Address: 0x17ef48, Func Offset: 0x8
	// Func End, Address: 0x17ef50, Func Offset: 0x10
}

// 
// Start address: 0x17ef50
<unknown fundamental type (0xa510)>* sh2gfw_Get_RegTEX0(sh2gfw_TexMAN* sTM, unsigned int clutid, unsigned int flg)
{
	// Line 822, Address: 0x17ef50, Func Offset: 0
	// Line 823, Address: 0x17ef58, Func Offset: 0x8
	// Line 825, Address: 0x17ef74, Func Offset: 0x24
	// Line 830, Address: 0x17efa0, Func Offset: 0x50
	// Func End, Address: 0x17efa8, Func Offset: 0x58
}

// 
// Start address: 0x17efb0
int sh2gfw_Get_TFX(void* sTMV, int clutid)
{
	sh2gfw_CLUTS_HEAD* sCH;
	sh2gfw_TexMAN* sTM;
	// Line 842, Address: 0x17efb0, Func Offset: 0
	// Line 844, Address: 0x17efb4, Func Offset: 0x4
	// Line 845, Address: 0x17efbc, Func Offset: 0xc
	// Func End, Address: 0x17efc4, Func Offset: 0x14
}

// 
// Start address: 0x17efd0
int sh2gfw_Thr_d2TextureSend(void* ptm, int mode, int* cid, int* slotid)
{
	int comid;
	int slot;
	sh2gfw_TexMAN* pTM;
	// Line 986, Address: 0x17efd0, Func Offset: 0
	// Line 988, Address: 0x17eff8, Func Offset: 0x28
	// Line 995, Address: 0x17effc, Func Offset: 0x2c
	// Line 998, Address: 0x17f008, Func Offset: 0x38
	// Line 1000, Address: 0x17f01c, Func Offset: 0x4c
	// Line 1005, Address: 0x17f028, Func Offset: 0x58
	// Line 1007, Address: 0x17f03c, Func Offset: 0x6c
	// Line 1008, Address: 0x17f040, Func Offset: 0x70
	// Line 1010, Address: 0x17f044, Func Offset: 0x74
	// Line 1017, Address: 0x17f048, Func Offset: 0x78
	// Line 1020, Address: 0x17f04c, Func Offset: 0x7c
	// Func End, Address: 0x17f070, Func Offset: 0xa0
}

// 
// Start address: 0x17f070
int sh2gfw_Thr_d1d2SyncKick(void* pkaddr, int cid, int slotid)
{
	int d1cid;
	// Line 1041, Address: 0x17f070, Func Offset: 0
	// Line 1043, Address: 0x17f088, Func Offset: 0x18
	// Line 1044, Address: 0x17f094, Func Offset: 0x24
	// Line 1045, Address: 0x17f0a4, Func Offset: 0x34
	// Line 1047, Address: 0x17f0b0, Func Offset: 0x40
	// Line 1049, Address: 0x17f0b4, Func Offset: 0x44
	// Func End, Address: 0x17f0cc, Func Offset: 0x5c
}

// 
// Start address: 0x17f0d0
int Fake_SetTexSlot(int sid, void* pk)
{
	// Line 1064, Address: 0x17f0d0, Func Offset: 0
	// Line 1065, Address: 0x17f0e8, Func Offset: 0x18
	// Line 1067, Address: 0x17f0f0, Func Offset: 0x20
	// Line 1068, Address: 0x17f104, Func Offset: 0x34
	// Func End, Address: 0x17f11c, Func Offset: 0x4c
}

// 
// Start address: 0x17f120
void sh2gfw_Lock_AllTexSlot_For_Shadow()
{
	int i;
	// Line 1081, Address: 0x17f120, Func Offset: 0
	// Line 1084, Address: 0x17f12c, Func Offset: 0xc
	// Line 1085, Address: 0x17f138, Func Offset: 0x18
	// Line 1087, Address: 0x17f174, Func Offset: 0x54
	// Func End, Address: 0x17f188, Func Offset: 0x68
}

// 
// Start address: 0x17f190
void sh2gfw_UnLock_AllTexSlot_For_Shadow()
{
	int i;
	// Line 1095, Address: 0x17f190, Func Offset: 0
	// Line 1099, Address: 0x17f19c, Func Offset: 0xc
	// Line 1100, Address: 0x17f1a8, Func Offset: 0x18
	// Line 1101, Address: 0x17f1d0, Func Offset: 0x40
	// Line 1103, Address: 0x17f1e4, Func Offset: 0x54
	// Func End, Address: 0x17f1f8, Func Offset: 0x68
}

// 
// Start address: 0x17f200
void sh2gfw_init_TexTrans_Manage_Table()
{
	int i;
	// Line 1152, Address: 0x17f200, Func Offset: 0
	// Line 1153, Address: 0x17f20c, Func Offset: 0xc
	// Line 1154, Address: 0x17f22c, Func Offset: 0x2c
	// Line 1155, Address: 0x17f23c, Func Offset: 0x3c
	// Line 1158, Address: 0x17f24c, Func Offset: 0x4c
	// Line 1159, Address: 0x17f25c, Func Offset: 0x5c
	// Line 1161, Address: 0x17f26c, Func Offset: 0x6c
	// Line 1162, Address: 0x17f278, Func Offset: 0x78
	// Line 1164, Address: 0x17f280, Func Offset: 0x80
	// Func End, Address: 0x17f288, Func Offset: 0x88
}

// 
// Start address: 0x17f290
int sh2gfw_EnQue_TexSlot(void* pTexMan)
{
	TexTable_List* tl;
	int j;
	int i;
	// Line 1172, Address: 0x17f290, Func Offset: 0
	// Line 1176, Address: 0x17f2ac, Func Offset: 0x1c
	// Line 1179, Address: 0x17f2d4, Func Offset: 0x44
	// Line 1180, Address: 0x17f2e0, Func Offset: 0x50
	// Line 1182, Address: 0x17f2fc, Func Offset: 0x6c
	// Line 1183, Address: 0x17f308, Func Offset: 0x78
	// Line 1186, Address: 0x17f31c, Func Offset: 0x8c
	// Line 1188, Address: 0x17f334, Func Offset: 0xa4
	// Line 1190, Address: 0x17f350, Func Offset: 0xc0
	// Line 1191, Address: 0x17f374, Func Offset: 0xe4
	// Line 1193, Address: 0x17f37c, Func Offset: 0xec
	// Line 1194, Address: 0x17f390, Func Offset: 0x100
	// Line 1197, Address: 0x17f39c, Func Offset: 0x10c
	// Line 1198, Address: 0x17f3a8, Func Offset: 0x118
	// Line 1200, Address: 0x17f3c4, Func Offset: 0x134
	// Line 1202, Address: 0x17f3dc, Func Offset: 0x14c
	// Line 1204, Address: 0x17f3f8, Func Offset: 0x168
	// Line 1207, Address: 0x17f41c, Func Offset: 0x18c
	// Line 1208, Address: 0x17f438, Func Offset: 0x1a8
	// Func End, Address: 0x17f458, Func Offset: 0x1c8
}

// 
// Start address: 0x17f460
void SetTexture2table(TexTable_List* pTL, void* pTexMan, int mark)
{
	int tail;
	// Line 1220, Address: 0x17f460, Func Offset: 0
	// Line 1222, Address: 0x17f464, Func Offset: 0x4
	// Line 1223, Address: 0x17f470, Func Offset: 0x10
	// Line 1224, Address: 0x17f474, Func Offset: 0x14
	// Line 1226, Address: 0x17f478, Func Offset: 0x18
	// Line 1227, Address: 0x17f484, Func Offset: 0x24
	// Func End, Address: 0x17f48c, Func Offset: 0x2c
}

// 
// Start address: 0x17f490
int sh2gfw_SetSlot2Tex(sh2gfw_TexMAN* sTM, int slotno)
{
	Q_WORDDATA* pqwd;
	sh2gfw_CLUTS_HEAD* sCH;
	sh2gfw_TEX_HEAD* sTH;
	unsigned int tfx;
	unsigned int i;
	unsigned int kk;
	unsigned int cBP;
	unsigned int tBP;
	unsigned int bw_64;
	unsigned int bh;
	unsigned int bw;
	// Line 1236, Address: 0x17f490, Func Offset: 0
	// Line 1241, Address: 0x17f4bc, Func Offset: 0x2c
	// Line 1244, Address: 0x17f4c0, Func Offset: 0x30
	// Line 1245, Address: 0x17f4c4, Func Offset: 0x34
	// Line 1247, Address: 0x17f4c8, Func Offset: 0x38
	// Line 1248, Address: 0x17f4dc, Func Offset: 0x4c
	// Line 1264, Address: 0x17f4e0, Func Offset: 0x50
	// Line 1268, Address: 0x17f4e8, Func Offset: 0x58
	// Line 1269, Address: 0x17f500, Func Offset: 0x70
	// Line 1272, Address: 0x17f514, Func Offset: 0x84
	// Line 1278, Address: 0x17f518, Func Offset: 0x88
	// Line 1280, Address: 0x17f55c, Func Offset: 0xcc
	// Line 1286, Address: 0x17f57c, Func Offset: 0xec
	// Line 1290, Address: 0x17f5a8, Func Offset: 0x118
	// Line 1298, Address: 0x17f5b0, Func Offset: 0x120
	// Line 1299, Address: 0x17f5b4, Func Offset: 0x124
	// Line 1302, Address: 0x17f5b8, Func Offset: 0x128
	// Line 1307, Address: 0x17f5c4, Func Offset: 0x134
	// Line 1317, Address: 0x17f5cc, Func Offset: 0x13c
	// Line 1320, Address: 0x17f644, Func Offset: 0x1b4
	// Line 1321, Address: 0x17f64c, Func Offset: 0x1bc
	// Line 1322, Address: 0x17f65c, Func Offset: 0x1cc
	// Line 1325, Address: 0x17f668, Func Offset: 0x1d8
	// Line 1326, Address: 0x17f66c, Func Offset: 0x1dc
	// Line 1327, Address: 0x17f670, Func Offset: 0x1e0
	// Line 1329, Address: 0x17f684, Func Offset: 0x1f4
	// Line 1332, Address: 0x17f68c, Func Offset: 0x1fc
	// Line 1333, Address: 0x17f6a0, Func Offset: 0x210
	// Line 1334, Address: 0x17f6bc, Func Offset: 0x22c
	// Line 1340, Address: 0x17f6d4, Func Offset: 0x244
	// Line 1342, Address: 0x17f738, Func Offset: 0x2a8
	// Line 1346, Address: 0x17f790, Func Offset: 0x300
	// Line 1348, Address: 0x17f794, Func Offset: 0x304
	// Func End, Address: 0x17f7c0, Func Offset: 0x330
}

// 
// Start address: 0x17f7c0
int GetTexList_MinMark()
{
	int tmp;
	int i;
	// Line 1358, Address: 0x17f7c0, Func Offset: 0
	// Line 1360, Address: 0x17f7c4, Func Offset: 0x4
	// Line 1361, Address: 0x17f7d0, Func Offset: 0x10
	// Line 1364, Address: 0x17f814, Func Offset: 0x54
	// Line 1365, Address: 0x17f818, Func Offset: 0x58
	// Line 1369, Address: 0x17f82c, Func Offset: 0x6c
	// Func End, Address: 0x17f834, Func Offset: 0x74
}

