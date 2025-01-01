typedef union Q_WORDDATA;
typedef struct sh2gfw_ALLTEXSYNC_MAN;
typedef struct sh2gfw_TexMAN;
typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct sh2gfw_CLUTS_HEAD;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _anon9;
typedef struct _anon10;
typedef struct sh2gfw_TEX_HEAD;
typedef struct shGsDrawEnv;
typedef struct TexTable_List;
typedef struct TexTable_Element;
typedef struct shGsStencilDrawEnv;
typedef struct TexTable_KickList;
typedef struct _anon11;
typedef struct _anon12;
typedef struct sh2gfw_TexTrans_Manage_Table;
typedef struct _anon13;
typedef struct _anon14;
typedef struct shGsLoopEnv;
typedef struct _anon15;
typedef struct _anon16;
typedef struct shGsTinyDrawEnv;
typedef struct _anon17;
typedef struct _anon18;
typedef struct _anon19;
typedef struct shGsAllEnv;


typedef int type_0[4];
typedef int type_1[4];
typedef _anon5 type_2[3];
typedef shGsDrawEnv type_3[3];
typedef shGsStencilDrawEnv type_4[3];
typedef shGsTinyDrawEnv type_5[6];
typedef Q_WORDDATA type_6[10];
typedef Q_WORDDATA type_7[10];
typedef Q_WORDDATA type_8[10];
typedef Q_WORDDATA type_9[10];
typedef Q_WORDDATA type_10[10];
typedef Q_WORDDATA type_11[10];
typedef Q_WORDDATA type_12[10];
typedef Q_WORDDATA type_13[8];
typedef Q_WORDDATA type_14[2];
typedef Q_WORDDATA type_15[2];
typedef Q_WORDDATA type_16[2];
typedef unsigned char type_17[16];
typedef Q_WORDDATA type_18[2];
typedef unsigned char type_19[16];
typedef Q_WORDDATA type_20[2];
typedef Q_WORDDATA type_21[2];
typedef unsigned int type_22[4];
typedef Q_WORDDATA type_23[2];
typedef int type_24[5];
typedef unsigned short type_25[8];
typedef Q_WORDDATA type_26[2];
typedef float type_27[4];
typedef Q_WORDDATA type_28[2];
typedef unsigned char type_29[16];
typedef Q_WORDDATA type_30[5];
typedef Q_WORDDATA type_31[2];
typedef int type_32[4];
typedef Q_WORDDATA type_33[2];
typedef short type_34[8];
typedef Q_WORDDATA type_35[2];
typedef char type_36[16];
typedef Q_WORDDATA type_37[5];
typedef unsigned long type_38[2];
typedef Q_WORDDATA type_39[2];
typedef Q_WORDDATA type_40[2];
typedef Q_WORDDATA type_41[48];
typedef Q_WORDDATA type_42[96];
typedef Q_WORDDATA type_43[2];
typedef sh2gfw_TexMAN* type_44[96];
typedef Q_WORDDATA type_45[2];
typedef sh2gfw_TexMAN type_46[96];
typedef Q_WORDDATA type_47[2];
typedef Q_WORDDATA type_48[2];
typedef TexTable_Element type_49[16];
typedef Q_WORDDATA type_50[2];
typedef Q_WORDDATA type_51[2];
typedef Q_WORDDATA type_52[6];
typedef Q_WORDDATA type_53[2];
typedef Q_WORDDATA type_54[6];
typedef TexTable_KickList type_55[80];
typedef unsigned int type_56[3];
typedef TexTable_List type_57[5];
typedef unsigned int type_58[3];
typedef unsigned int type_59[3];
typedef unsigned int type_60[24];
typedef unsigned int type_61[3];
typedef unsigned int type_62[3];
typedef TexTable_List* type_63[5];
typedef int type_64[5];
typedef unsigned short type_65[8];
typedef char type_66[64];

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

struct sh2gfw_ALLTEXSYNC_MAN
{
	unsigned short trans_BACK_num;
	unsigned short transed_BACK;
	unsigned short alltex_BACK;
	unsigned short trans_CHR_num;
	unsigned short transed_CHR;
	unsigned short alltex_CHR;
	unsigned short trans_OTHER_num;
	unsigned short transed_OTHER;
	unsigned short alltex_OTHER;
	unsigned short trans_GBL_num;
	unsigned short transed_GBL;
	unsigned short alltex_GBL;
	unsigned short trans_ALL_num;
	unsigned short transed_ALL;
	unsigned short alltexnum;
	unsigned short trans_NOW_num;
	sh2gfw_TexMAN Empty_Head;
	sh2gfw_TexMAN Used_Head;
	int dbg_add;
	int dbg_del;
	int pad1;
	int pad2;
	Q_WORDDATA TexTransChain[96];
	sh2gfw_TexMAN* TransOrderTable[96];
	sh2gfw_TexMAN TexMan[96];
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

struct _anon2
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

struct _anon3
{
	struct
	{
		unsigned long OFX : 16;
		unsigned long pad16 : 16;
		unsigned long OFY : 16;
		unsigned long pad48 : 16;
	};
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

struct _anon4
{
	struct
	{
		unsigned long X : 16;
		unsigned long Y : 16;
		unsigned long Z : 32;
	};
};

struct _anon5
{
	_anon17 pmode;
	_anon2 smode2;
	_anon18 dispfb;
	_anon6 display;
	_anon7 bgcolor;
};

struct _anon6
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
	_anon16 frame1;
	unsigned long frame1addr;
	_anon9 zbuf1;
	long zbuf1addr;
	_anon3 xyoffset1;
	long xyoffset1addr;
	_anon15 scissor1;
	long scissor1addr;
	_anon11 prmodecont;
	long prmodecontaddr;
	_anon1 colclamp;
	long colclampaddr;
	_anon12 dthe;
	long dtheaddr;
	_anon19 test1;
	long test1addr;
};

struct _anon9
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

struct _anon10
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

struct shGsDrawEnv
{
	_anon0 giftag;
	_anon8 draw;
	Q_WORDDATA drawq2[5];
	_anon14 clear;
	_anon0 giftag_nc;
	_anon8 draw_nc;
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

struct TexTable_List
{
	int list_head;
	int list_tail;
	int last_mark;
	int pad;
	TexTable_Element list_element[16];
};

struct TexTable_Element
{
	void* pTexMan;
	short mark;
	unsigned short kind;
};

struct shGsStencilDrawEnv
{
	_anon0 giftag;
	_anon8 draw;
	Q_WORDDATA alpha1;
	Q_WORDDATA drawq2[6];
	_anon14 clear;
	Q_WORDDATA frame;
	_anon0 giftag_nc;
	_anon8 draw_nc;
	Q_WORDDATA alpha1_nc;
	Q_WORDDATA drawq2_nc[6];
	Q_WORDDATA gifad_frame_normal;
	Q_WORDDATA frame_normal;
	Q_WORDDATA gifad_frame_mskalpha;
	Q_WORDDATA frame_mskalpha;
	Q_WORDDATA gifad_frame_mskDalpha;
	Q_WORDDATA frame_mskDalpha;
};

struct TexTable_KickList
{
	void* pTexMan;
	unsigned short Index;
	unsigned short SlotNo;
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
		unsigned long DTHE : 1;
		unsigned long pad01 : 63;
	};
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
	_anon19 testa;
	long testaaddr;
	_anon10 prim;
	long primaddr;
	_anon13 rgbaq;
	long rgbaqaddr;
	_anon4 xyz2a;
	long xyz2aaddr;
	_anon4 xyz2b;
	long xyz2baddr;
	_anon19 testb;
	long testbaddr;
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

struct _anon15
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

struct _anon16
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

struct _anon17
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

struct shGsAllEnv
{
	unsigned long loop_counter;
	unsigned int loop;
	unsigned int loop3;
	shGsLoopEnv LoopEnv;
	_anon5 DispEnv[3];
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

shGsAllEnv shGs_AllEnv;
Q_WORDDATA fake_kick;
int fake_cid[4];
int fake_slot[4];
sh2gfw_ALLTEXSYNC_MAN AllTexSync_Man;
sh2gfw_TexTrans_Manage_Table TexTransTable;

void sh2gfw_allinit_TexMANlist(sh2gfw_ALLTEXSYNC_MAN* pATSM);
void sh2gfw_clear_TexMAN_TransParm(sh2gfw_ALLTEXSYNC_MAN* pATSM);
sh2gfw_TexMAN* sh2gfw_set_TexToTrasMan(sh2gfw_ALLTEXSYNC_MAN* pATSM, sh2gfw_TEX_HEAD* pTexHead, sh2gfw_CLUTS_HEAD* pClutHead, void* pMAN, unsigned short mode);
sh2gfw_TexMAN* sh2gfw_get_newMANID(sh2gfw_ALLTEXSYNC_MAN* pATSM);
sh2gfw_TexMAN* sh2gfw_del_TexMAN(sh2gfw_ALLTEXSYNC_MAN* pATSM, sh2gfw_TexMAN* pDel);
void sh2gfw_init_SyncTexTag(sh2gfw_TexMAN* sTM, sh2gfw_TEX_HEAD* pTexHead, sh2gfw_CLUTS_HEAD* pClutHead, void* pMAN, unsigned short mode);
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
// Start address: 0x184180
void sh2gfw_allinit_TexMANlist(sh2gfw_ALLTEXSYNC_MAN* pATSM)
{
	int i;
	// Line 70, Address: 0x184180, Func Offset: 0
	// Line 73, Address: 0x18418c, Func Offset: 0xc
	// Line 74, Address: 0x184198, Func Offset: 0x18
	// Line 75, Address: 0x1841dc, Func Offset: 0x5c
	// Line 77, Address: 0x184220, Func Offset: 0xa0
	// Line 78, Address: 0x184244, Func Offset: 0xc4
	// Line 81, Address: 0x184254, Func Offset: 0xd4
	// Line 82, Address: 0x184264, Func Offset: 0xe4
	// Line 83, Address: 0x18427c, Func Offset: 0xfc
	// Line 84, Address: 0x18428c, Func Offset: 0x10c
	// Line 87, Address: 0x1842a4, Func Offset: 0x124
	// Line 90, Address: 0x1842bc, Func Offset: 0x13c
	// Line 91, Address: 0x1842c4, Func Offset: 0x144
	// Line 93, Address: 0x1842cc, Func Offset: 0x14c
	// Func End, Address: 0x1842dc, Func Offset: 0x15c
}

// 
// Start address: 0x1842e0
void sh2gfw_clear_TexMAN_TransParm(sh2gfw_ALLTEXSYNC_MAN* pATSM)
{
	<unknown fundamental type (0xa510)>* pl;
	int i;
	// Line 118, Address: 0x1842e0, Func Offset: 0
	// Line 120, Address: 0x1842f0, Func Offset: 0x10
	// Line 121, Address: 0x1842f8, Func Offset: 0x18
	// Line 123, Address: 0x184300, Func Offset: 0x20
	// Line 124, Address: 0x184308, Func Offset: 0x28
	// Line 126, Address: 0x184310, Func Offset: 0x30
	// Line 127, Address: 0x184318, Func Offset: 0x38
	// Line 129, Address: 0x184320, Func Offset: 0x40
	// Line 130, Address: 0x184328, Func Offset: 0x48
	// Line 132, Address: 0x184330, Func Offset: 0x50
	// Line 133, Address: 0x184338, Func Offset: 0x58
	// Line 135, Address: 0x184340, Func Offset: 0x60
	// Line 138, Address: 0x184348, Func Offset: 0x68
	// Line 139, Address: 0x184354, Func Offset: 0x74
	// Line 140, Address: 0x184364, Func Offset: 0x84
	// Line 141, Address: 0x184368, Func Offset: 0x88
	// Line 143, Address: 0x18436c, Func Offset: 0x8c
	// Line 144, Address: 0x18437c, Func Offset: 0x9c
	// Func End, Address: 0x184390, Func Offset: 0xb0
}

// 
// Start address: 0x184390
sh2gfw_TexMAN* sh2gfw_set_TexToTrasMan(sh2gfw_ALLTEXSYNC_MAN* pATSM, sh2gfw_TEX_HEAD* pTexHead, sh2gfw_CLUTS_HEAD* pClutHead, void* pMAN, unsigned short mode)
{
	sh2gfw_TexMAN* pSTM;
	// Line 159, Address: 0x184390, Func Offset: 0
	// Line 164, Address: 0x1843b0, Func Offset: 0x20
	// Line 170, Address: 0x1843c0, Func Offset: 0x30
	// Line 171, Address: 0x1843dc, Func Offset: 0x4c
	// Line 173, Address: 0x184410, Func Offset: 0x80
	// Line 174, Address: 0x184420, Func Offset: 0x90
	// Line 176, Address: 0x184428, Func Offset: 0x98
	// Line 177, Address: 0x184438, Func Offset: 0xa8
	// Line 179, Address: 0x184440, Func Offset: 0xb0
	// Line 186, Address: 0x184450, Func Offset: 0xc0
	// Line 187, Address: 0x184468, Func Offset: 0xd8
	// Line 190, Address: 0x184478, Func Offset: 0xe8
	// Line 191, Address: 0x184488, Func Offset: 0xf8
	// Line 192, Address: 0x18448c, Func Offset: 0xfc
	// Func End, Address: 0x1844a0, Func Offset: 0x110
}

// 
// Start address: 0x1844a0
sh2gfw_TexMAN* sh2gfw_get_newMANID(sh2gfw_ALLTEXSYNC_MAN* pATSM)
{
	sh2gfw_TexMAN* pTp;
	sh2gfw_TexMAN* pUs;
	sh2gfw_TexMAN* plc;
	// Line 207, Address: 0x1844a0, Func Offset: 0
	// Line 210, Address: 0x1844b4, Func Offset: 0x14
	// Line 211, Address: 0x1844bc, Func Offset: 0x1c
	// Line 213, Address: 0x1844c4, Func Offset: 0x24
	// Line 215, Address: 0x1844e4, Func Offset: 0x44
	// Line 216, Address: 0x1844e8, Func Offset: 0x48
	// Line 217, Address: 0x1844f4, Func Offset: 0x54
	// Line 219, Address: 0x184500, Func Offset: 0x60
	// Line 220, Address: 0x184508, Func Offset: 0x68
	// Line 221, Address: 0x18450c, Func Offset: 0x6c
	// Line 222, Address: 0x184514, Func Offset: 0x74
	// Line 227, Address: 0x184518, Func Offset: 0x78
	// Line 229, Address: 0x18451c, Func Offset: 0x7c
	// Func End, Address: 0x184534, Func Offset: 0x94
}

// 
// Start address: 0x184540
sh2gfw_TexMAN* sh2gfw_del_TexMAN(sh2gfw_ALLTEXSYNC_MAN* pATSM, sh2gfw_TexMAN* pDel)
{
	sh2gfw_TexMAN* pTp;
	sh2gfw_TexMAN* pUs;
	sh2gfw_TexMAN* plc;
	// Line 250, Address: 0x184540, Func Offset: 0
	// Line 253, Address: 0x184558, Func Offset: 0x18
	// Line 254, Address: 0x184560, Func Offset: 0x20
	// Line 255, Address: 0x184568, Func Offset: 0x28
	// Line 279, Address: 0x18456c, Func Offset: 0x2c
	// Line 280, Address: 0x184580, Func Offset: 0x40
	// Line 282, Address: 0x184594, Func Offset: 0x54
	// Line 283, Address: 0x18459c, Func Offset: 0x5c
	// Line 284, Address: 0x1845a8, Func Offset: 0x68
	// Line 285, Address: 0x1845b4, Func Offset: 0x74
	// Line 287, Address: 0x1845bc, Func Offset: 0x7c
	// Line 289, Address: 0x1845cc, Func Offset: 0x8c
	// Line 292, Address: 0x1845d0, Func Offset: 0x90
	// Func End, Address: 0x1845e8, Func Offset: 0xa8
}

// 
// Start address: 0x1845f0
void sh2gfw_init_SyncTexTag(sh2gfw_TexMAN* sTM, sh2gfw_TEX_HEAD* pTexHead, sh2gfw_CLUTS_HEAD* pClutHead, void* pMAN, unsigned short mode)
{
	Q_WORDDATA* pqwd;
	unsigned int dpsm;
	unsigned int i;
	unsigned int clm;
	unsigned int bw_64;
	unsigned int bh;
	unsigned int bw;
	// Line 434, Address: 0x1845f0, Func Offset: 0
	// Line 437, Address: 0x184628, Func Offset: 0x38
	// Line 439, Address: 0x184630, Func Offset: 0x40
	// Line 440, Address: 0x18464c, Func Offset: 0x5c
	// Line 441, Address: 0x184668, Func Offset: 0x78
	// Line 442, Address: 0x184674, Func Offset: 0x84
	// Line 444, Address: 0x184680, Func Offset: 0x90
	// Line 446, Address: 0x18468c, Func Offset: 0x9c
	// Line 447, Address: 0x184698, Func Offset: 0xa8
	// Line 449, Address: 0x1846a4, Func Offset: 0xb4
	// Line 451, Address: 0x1846c4, Func Offset: 0xd4
	// Line 459, Address: 0x1846d4, Func Offset: 0xe4
	// Line 460, Address: 0x184704, Func Offset: 0x114
	// Line 461, Address: 0x184708, Func Offset: 0x118
	// Line 462, Address: 0x184724, Func Offset: 0x134
	// Line 465, Address: 0x184730, Func Offset: 0x140
	// Line 466, Address: 0x18474c, Func Offset: 0x15c
	// Line 467, Address: 0x18476c, Func Offset: 0x17c
	// Line 471, Address: 0x184784, Func Offset: 0x194
	// Line 472, Address: 0x1847d8, Func Offset: 0x1e8
	// Line 473, Address: 0x1847e0, Func Offset: 0x1f0
	// Line 474, Address: 0x1847e4, Func Offset: 0x1f4
	// Line 476, Address: 0x1847e8, Func Offset: 0x1f8
	// Line 477, Address: 0x1847f0, Func Offset: 0x200
	// Line 478, Address: 0x1847f4, Func Offset: 0x204
	// Line 479, Address: 0x1847f8, Func Offset: 0x208
	// Line 481, Address: 0x1847fc, Func Offset: 0x20c
	// Line 482, Address: 0x184804, Func Offset: 0x214
	// Line 483, Address: 0x184808, Func Offset: 0x218
	// Line 485, Address: 0x18480c, Func Offset: 0x21c
	// Line 486, Address: 0x184830, Func Offset: 0x240
	// Line 489, Address: 0x184834, Func Offset: 0x244
	// Line 490, Address: 0x184878, Func Offset: 0x288
	// Line 498, Address: 0x18487c, Func Offset: 0x28c
	// Line 500, Address: 0x184898, Func Offset: 0x2a8
	// Line 501, Address: 0x1848b4, Func Offset: 0x2c4
	// Line 504, Address: 0x1848d4, Func Offset: 0x2e4
	// Line 506, Address: 0x1848f4, Func Offset: 0x304
	// Line 508, Address: 0x184904, Func Offset: 0x314
	// Line 509, Address: 0x18490c, Func Offset: 0x31c
	// Line 510, Address: 0x18491c, Func Offset: 0x32c
	// Line 511, Address: 0x18492c, Func Offset: 0x33c
	// Line 513, Address: 0x184930, Func Offset: 0x340
	// Line 516, Address: 0x184940, Func Offset: 0x350
	// Line 517, Address: 0x18494c, Func Offset: 0x35c
	// Line 520, Address: 0x184968, Func Offset: 0x378
	// Line 521, Address: 0x184990, Func Offset: 0x3a0
	// Line 522, Address: 0x184994, Func Offset: 0x3a4
	// Line 523, Address: 0x1849c0, Func Offset: 0x3d0
	// Line 524, Address: 0x1849d8, Func Offset: 0x3e8
	// Line 525, Address: 0x1849f8, Func Offset: 0x408
	// Line 528, Address: 0x184a0c, Func Offset: 0x41c
	// Line 529, Address: 0x184a18, Func Offset: 0x428
	// Line 531, Address: 0x184a20, Func Offset: 0x430
	// Line 532, Address: 0x184a2c, Func Offset: 0x43c
	// Line 534, Address: 0x184a4c, Func Offset: 0x45c
	// Line 535, Address: 0x184a50, Func Offset: 0x460
	// Line 537, Address: 0x184a64, Func Offset: 0x474
	// Line 539, Address: 0x184a6c, Func Offset: 0x47c
	// Line 540, Address: 0x184a74, Func Offset: 0x484
	// Line 541, Address: 0x184a8c, Func Offset: 0x49c
	// Line 542, Address: 0x184aac, Func Offset: 0x4bc
	// Line 545, Address: 0x184ac0, Func Offset: 0x4d0
	// Line 546, Address: 0x184aec, Func Offset: 0x4fc
	// Line 548, Address: 0x184b00, Func Offset: 0x510
	// Func End, Address: 0x184b2c, Func Offset: 0x53c
}

// 
// Start address: 0x184b30
<unknown fundamental type (0xa510)>* sh2gfw_Get_RegTEX0(sh2gfw_TexMAN* sTM, unsigned int clutid, unsigned int flg)
{
	// Line 674, Address: 0x184b30, Func Offset: 0
	// Line 687, Address: 0x184b40, Func Offset: 0x10
	// Line 688, Address: 0x184b4c, Func Offset: 0x1c
	// Line 689, Address: 0x184b70, Func Offset: 0x40
	// Line 690, Address: 0x184b80, Func Offset: 0x50
	// Line 693, Address: 0x184ba4, Func Offset: 0x74
	// Line 695, Address: 0x184bac, Func Offset: 0x7c
	// Func End, Address: 0x184bb8, Func Offset: 0x88
}

// 
// Start address: 0x184bc0
int sh2gfw_Get_TFX(void* sTMV, int clutid)
{
	sh2gfw_CLUTS_HEAD* sCH;
	sh2gfw_TexMAN* sTM;
	// Line 702, Address: 0x184bc0, Func Offset: 0
	// Line 703, Address: 0x184bd4, Func Offset: 0x14
	// Line 707, Address: 0x184bd8, Func Offset: 0x18
	// Line 709, Address: 0x184bdc, Func Offset: 0x1c
	// Line 710, Address: 0x184bec, Func Offset: 0x2c
	// Func End, Address: 0x184c00, Func Offset: 0x40
}

// 
// Start address: 0x184c00
int sh2gfw_Thr_d2TextureSend(void* ptm, int mode, int* cid, int* slotid)
{
	int comid;
	int slot;
	sh2gfw_TexMAN* pTM;
	// Line 858, Address: 0x184c00, Func Offset: 0
	// Line 860, Address: 0x184c24, Func Offset: 0x24
	// Line 867, Address: 0x184c28, Func Offset: 0x28
	// Line 870, Address: 0x184c38, Func Offset: 0x38
	// Line 872, Address: 0x184c4c, Func Offset: 0x4c
	// Line 877, Address: 0x184c58, Func Offset: 0x58
	// Line 879, Address: 0x184c70, Func Offset: 0x70
	// Line 880, Address: 0x184c78, Func Offset: 0x78
	// Line 882, Address: 0x184c80, Func Offset: 0x80
	// Line 889, Address: 0x184c84, Func Offset: 0x84
	// Line 891, Address: 0x184c88, Func Offset: 0x88
	// Line 892, Address: 0x184c8c, Func Offset: 0x8c
	// Func End, Address: 0x184ca8, Func Offset: 0xa8
}

// 
// Start address: 0x184cb0
int sh2gfw_Thr_d1d2SyncKick(void* pkaddr, int cid, int slotid)
{
	int d1cid;
	// Line 913, Address: 0x184cb0, Func Offset: 0
	// Line 915, Address: 0x184cc8, Func Offset: 0x18
	// Line 916, Address: 0x184cd4, Func Offset: 0x24
	// Line 917, Address: 0x184ce4, Func Offset: 0x34
	// Line 919, Address: 0x184cf0, Func Offset: 0x40
	// Line 921, Address: 0x184cf4, Func Offset: 0x44
	// Func End, Address: 0x184d08, Func Offset: 0x58
}

// 
// Start address: 0x184d10
int Fake_SetTexSlot(int sid, void* pk)
{
	// Line 936, Address: 0x184d10, Func Offset: 0
	// Line 937, Address: 0x184d20, Func Offset: 0x10
	// Line 939, Address: 0x184d2c, Func Offset: 0x1c
	// Line 940, Address: 0x184d48, Func Offset: 0x38
	// Func End, Address: 0x184d58, Func Offset: 0x48
}

// 
// Start address: 0x184d60
void sh2gfw_Lock_AllTexSlot_For_Shadow()
{
	int i;
	// Line 953, Address: 0x184d60, Func Offset: 0
	// Line 956, Address: 0x184d6c, Func Offset: 0xc
	// Line 957, Address: 0x184d78, Func Offset: 0x18
	// Line 959, Address: 0x184db4, Func Offset: 0x54
	// Func End, Address: 0x184dc8, Func Offset: 0x68
}

// 
// Start address: 0x184dd0
void sh2gfw_UnLock_AllTexSlot_For_Shadow()
{
	int i;
	// Line 967, Address: 0x184dd0, Func Offset: 0
	// Line 971, Address: 0x184ddc, Func Offset: 0xc
	// Line 972, Address: 0x184de8, Func Offset: 0x18
	// Line 973, Address: 0x184e10, Func Offset: 0x40
	// Line 975, Address: 0x184e24, Func Offset: 0x54
	// Func End, Address: 0x184e38, Func Offset: 0x68
}

// 
// Start address: 0x184e40
void sh2gfw_init_TexTrans_Manage_Table()
{
	int i;
	// Line 1021, Address: 0x184e40, Func Offset: 0
	// Line 1024, Address: 0x184e48, Func Offset: 0x8
	// Line 1025, Address: 0x184e54, Func Offset: 0x14
	// Line 1026, Address: 0x184e74, Func Offset: 0x34
	// Line 1027, Address: 0x184e90, Func Offset: 0x50
	// Line 1030, Address: 0x184eb0, Func Offset: 0x70
	// Line 1031, Address: 0x184ecc, Func Offset: 0x8c
	// Line 1033, Address: 0x184edc, Func Offset: 0x9c
	// Line 1034, Address: 0x184ee8, Func Offset: 0xa8
	// Line 1036, Address: 0x184ef0, Func Offset: 0xb0
	// Func End, Address: 0x184f00, Func Offset: 0xc0
}

// 
// Start address: 0x184f00
int sh2gfw_EnQue_TexSlot(void* pTexMan)
{
	TexTable_List* tl;
	int j;
	int i;
	// Line 1044, Address: 0x184f00, Func Offset: 0
	// Line 1048, Address: 0x184f1c, Func Offset: 0x1c
	// Line 1051, Address: 0x184f48, Func Offset: 0x48
	// Line 1052, Address: 0x184f54, Func Offset: 0x54
	// Line 1054, Address: 0x184f70, Func Offset: 0x70
	// Line 1055, Address: 0x184f9c, Func Offset: 0x9c
	// Line 1058, Address: 0x184fb4, Func Offset: 0xb4
	// Line 1060, Address: 0x184fcc, Func Offset: 0xcc
	// Line 1062, Address: 0x184fec, Func Offset: 0xec
	// Line 1063, Address: 0x185014, Func Offset: 0x114
	// Line 1065, Address: 0x18501c, Func Offset: 0x11c
	// Line 1066, Address: 0x185030, Func Offset: 0x130
	// Line 1069, Address: 0x18503c, Func Offset: 0x13c
	// Line 1070, Address: 0x185048, Func Offset: 0x148
	// Line 1072, Address: 0x185064, Func Offset: 0x164
	// Line 1074, Address: 0x18507c, Func Offset: 0x17c
	// Line 1076, Address: 0x18509c, Func Offset: 0x19c
	// Line 1079, Address: 0x1850c4, Func Offset: 0x1c4
	// Line 1080, Address: 0x1850e4, Func Offset: 0x1e4
	// Func End, Address: 0x185104, Func Offset: 0x204
}

// 
// Start address: 0x185110
void SetTexture2table(TexTable_List* pTL, void* pTexMan, int mark)
{
	int tail;
	// Line 1090, Address: 0x185110, Func Offset: 0
	// Line 1092, Address: 0x185124, Func Offset: 0x14
	// Line 1094, Address: 0x18512c, Func Offset: 0x1c
	// Line 1095, Address: 0x185140, Func Offset: 0x30
	// Line 1096, Address: 0x185154, Func Offset: 0x44
	// Line 1098, Address: 0x185160, Func Offset: 0x50
	// Line 1099, Address: 0x185170, Func Offset: 0x60
	// Func End, Address: 0x185180, Func Offset: 0x70
}

// 
// Start address: 0x185180
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
	// Line 1110, Address: 0x185180, Func Offset: 0
	// Line 1112, Address: 0x1851b4, Func Offset: 0x34
	// Line 1115, Address: 0x1851b8, Func Offset: 0x38
	// Line 1118, Address: 0x1851c0, Func Offset: 0x40
	// Line 1119, Address: 0x1851c8, Func Offset: 0x48
	// Line 1121, Address: 0x1851d0, Func Offset: 0x50
	// Line 1122, Address: 0x185200, Func Offset: 0x80
	// Line 1123, Address: 0x185208, Func Offset: 0x88
	// Line 1138, Address: 0x185220, Func Offset: 0xa0
	// Line 1142, Address: 0x185230, Func Offset: 0xb0
	// Line 1143, Address: 0x185248, Func Offset: 0xc8
	// Line 1145, Address: 0x185260, Func Offset: 0xe0
	// Line 1146, Address: 0x185264, Func Offset: 0xe4
	// Line 1148, Address: 0x18526c, Func Offset: 0xec
	// Line 1152, Address: 0x185270, Func Offset: 0xf0
	// Line 1154, Address: 0x1852d0, Func Offset: 0x150
	// Line 1157, Address: 0x1852fc, Func Offset: 0x17c
	// Line 1160, Address: 0x185300, Func Offset: 0x180
	// Line 1163, Address: 0x18532c, Func Offset: 0x1ac
	// Line 1164, Address: 0x185330, Func Offset: 0x1b0
	// Line 1172, Address: 0x18533c, Func Offset: 0x1bc
	// Line 1173, Address: 0x185344, Func Offset: 0x1c4
	// Line 1174, Address: 0x18534c, Func Offset: 0x1cc
	// Line 1176, Address: 0x185354, Func Offset: 0x1d4
	// Line 1181, Address: 0x185360, Func Offset: 0x1e0
	// Line 1189, Address: 0x18536c, Func Offset: 0x1ec
	// Line 1190, Address: 0x185404, Func Offset: 0x284
	// Line 1191, Address: 0x185408, Func Offset: 0x288
	// Line 1192, Address: 0x18540c, Func Offset: 0x28c
	// Line 1194, Address: 0x18541c, Func Offset: 0x29c
	// Line 1196, Address: 0x185424, Func Offset: 0x2a4
	// Line 1197, Address: 0x18542c, Func Offset: 0x2ac
	// Line 1198, Address: 0x185444, Func Offset: 0x2c4
	// Line 1199, Address: 0x185464, Func Offset: 0x2e4
	// Line 1201, Address: 0x185480, Func Offset: 0x300
	// Line 1203, Address: 0x185484, Func Offset: 0x304
	// Line 1205, Address: 0x18548c, Func Offset: 0x30c
	// Line 1207, Address: 0x18551c, Func Offset: 0x39c
	// Line 1211, Address: 0x1855ac, Func Offset: 0x42c
	// Line 1213, Address: 0x1855b0, Func Offset: 0x430
	// Func End, Address: 0x1855e4, Func Offset: 0x464
}

// 
// Start address: 0x1855f0
int GetTexList_MinMark()
{
	int tmp;
	int i;
	// Line 1220, Address: 0x1855f0, Func Offset: 0
	// Line 1223, Address: 0x1855fc, Func Offset: 0xc
	// Line 1225, Address: 0x185600, Func Offset: 0x10
	// Line 1226, Address: 0x18560c, Func Offset: 0x1c
	// Line 1229, Address: 0x185650, Func Offset: 0x60
	// Line 1230, Address: 0x185658, Func Offset: 0x68
	// Line 1232, Address: 0x18566c, Func Offset: 0x7c
	// Line 1234, Address: 0x185670, Func Offset: 0x80
	// Func End, Address: 0x185684, Func Offset: 0x94
}

