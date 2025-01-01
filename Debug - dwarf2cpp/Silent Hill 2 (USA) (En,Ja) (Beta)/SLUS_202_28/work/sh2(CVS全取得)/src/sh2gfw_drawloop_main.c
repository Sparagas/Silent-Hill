typedef struct Event_List;
typedef struct shGsLoopEnv;
typedef struct sh2gfw_VU_PARMS;
typedef struct Item_List;
typedef struct _anon0;
typedef struct _anon1;
typedef struct _AnimeInfo;
typedef struct _anon2;
typedef struct Model_List;
typedef struct shGsTinyDrawEnv;
typedef struct sh2gfw_Env_ctl;
typedef struct _anon3;
typedef struct Enemy_List;
typedef struct _anon4;
typedef struct shBattleFight;
typedef struct shGsAllEnv;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct shBattleShot;
typedef struct _anon8;
typedef struct _anon9;
typedef union Q_WORDDATA;
typedef struct _anon10;
typedef struct _anon11;
typedef struct _anon12;
typedef struct Stage_Data;
typedef struct _anon13;
typedef struct _VbWVSMATRIX;
typedef struct _anon14;
typedef struct _anon15;
typedef struct _VbSCREENINFO;
typedef struct shAttackInfo;
typedef struct shGsDrawEnv;
typedef struct _anon16;
typedef union _anon17;
typedef struct _anon18;
typedef struct _anon19;
typedef struct _anon20;
typedef struct _anon21;
typedef struct sh2gfw_TexMAN;
typedef struct _anon22;
typedef struct shGsStencilDrawEnv;
typedef struct sh2gfw_ALLTEXSYNC_MAN;
typedef struct _anon23;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct sh2gfw_POINTL_MATRIX;

typedef void(*type_10)();
typedef int(*type_15)();

typedef float type_0[4];
typedef float type_1[4][4];
typedef unsigned int type_2[3];
typedef unsigned int type_3[3];
typedef unsigned int type_4[3];
typedef unsigned int type_5[24];
typedef unsigned int type_6[3];
typedef unsigned int type_7[3];
typedef Q_WORDDATA type_8[48];
typedef float type_9[4];
typedef unsigned short type_11[8];
typedef sh2gfw_TexMAN type_12[96];
typedef float type_13[4];
typedef float type_14[4][4];
typedef Q_WORDDATA type_16[2];
typedef _anon5 type_17[3];
typedef shGsDrawEnv type_18[3];
typedef shGsStencilDrawEnv type_19[3];
typedef shGsTinyDrawEnv type_20[6];
typedef Q_WORDDATA type_21[10];
typedef Q_WORDDATA type_22[10];
typedef Q_WORDDATA type_23[10];
typedef Q_WORDDATA type_24[0];
typedef Q_WORDDATA type_25[10];
typedef Q_WORDDATA type_26[10];
typedef Q_WORDDATA type_27[10];
typedef Q_WORDDATA type_28[10];
typedef Q_WORDDATA type_29[8];
typedef Q_WORDDATA type_30[2];
typedef Q_WORDDATA type_31[2];
typedef unsigned short type_32[4];
typedef Q_WORDDATA type_33[2];
typedef int type_34[3];
typedef Q_WORDDATA type_35[2];
typedef Q_WORDDATA type_36[2];
typedef Q_WORDDATA type_37[2];
typedef Q_WORDDATA type_38[2];
typedef Q_WORDDATA type_39[2];
typedef Q_WORDDATA type_40[2];
typedef Q_WORDDATA type_41[5];
typedef Q_WORDDATA type_42[2];
typedef Q_WORDDATA type_43[2];
typedef Q_WORDDATA type_44[2];
typedef Q_WORDDATA type_45[0];
typedef Q_WORDDATA type_46[5];
typedef Q_WORDDATA type_47[2];
typedef Q_WORDDATA type_48[2];
typedef Q_WORDDATA type_49[2];
typedef Q_WORDDATA type_50[2];
typedef Q_WORDDATA type_51[2];
typedef unsigned int type_52[4];
typedef Q_WORDDATA type_53[2];
typedef unsigned short type_54[8];
typedef float type_55[4];
typedef Q_WORDDATA type_56[2];
typedef unsigned char type_57[16];
typedef Q_WORDDATA type_58[2];
typedef Q_WORDDATA type_59[6];
typedef Q_WORDDATA type_60[2];
typedef int type_61[4];
typedef short type_62[8];
typedef shAttackInfo type_63[66];
typedef char type_64[16];
typedef unsigned long type_65[2];
typedef Q_WORDDATA type_66[6];
typedef float type_67[4];

struct Event_List
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
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

struct sh2gfw_VU_PARMS
{
	float world_screen[4][4];
	float world_clip[4][4];
	float clip_screen[4][4];
	Q_WORDDATA fog_d;
	Q_WORDDATA rgbamax;
	Q_WORDDATA phong_rgbamax;
	Q_WORDDATA rgbamin;
	float local_screen[4][4];
	float local_clip[4][4];
	float light_vector0[4][4];
	float light_color0[4][4];
	float ambient_col[4];
	Q_WORDDATA light_pam[2];
	float light_pos[4][4];
	Q_WORDDATA GifTag_mskRGB;
	Q_WORDDATA Frame_mskRGB;
	Q_WORDDATA GifTag_mskNORMAL;
	Q_WORDDATA Frame_mskNORMAL;
	Q_WORDDATA GifTag_mskALPHA;
	Q_WORDDATA Frame_mskALPHA;
	Q_WORDDATA GifTag_mskZ;
	Q_WORDDATA mskZ;
	Q_WORDDATA GifTag_unmskZ;
	Q_WORDDATA unmskZ;
};

struct Item_List
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
};

struct _anon0
{
	struct
	{
		unsigned long DTHE : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon1
{
	struct
	{
		unsigned long AC : 1;
		unsigned long pad01 : 63;
	};
};

struct _AnimeInfo
{
	unsigned short name;
	unsigned short frame;
	short speed;
	unsigned short start;
	unsigned short end;
	unsigned char loop;
	char pad;
};

struct _anon2
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

struct Model_List
{
	short kind;
	short id;
	short flag_off;
	short flag_on;
	float pos[4];
	float rot[4];
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

struct sh2gfw_Env_ctl
{
	float camera_p[4];
	float camera_zd[4];
	float camera_yd[4];
	float camera_rot[4];
	float camera_ido[4];
	float camera_parms[4];
	float camera_parms2[4];
	float camera_mat[4][4];
	float objclip_mat[4][4];
	Q_WORDDATA block_index;
	float p_light0[4];
	float p_light1[4];
	float p_light2[4];
	float p_color0[4];
	float p_color1[4];
	float p_color2[4];
	float ambient[4];
	float VertexAmbient[4];
	float BaseAmbient[4];
	float BaseVertexColor[4];
	float spot0_Wpos[4];
	float spot0_Wdir[4];
	sh2gfw_SPOTL_MATRIX SpotL0;
	float spot1_Wpos[4];
	float spot1_Wdir[4];
	sh2gfw_SPOTL_MATRIX SpotL1;
	float CharacterLightFactor[4];
	float CharacterLightFactor_Other[4];
	sh2gfw_SPOTL_MATRIX SpotL2;
	float point0_localpos[4];
	sh2gfw_POINTL_MATRIX PointL0;
	unsigned short light_mode;
	unsigned short weather_mode;
	unsigned short time_mode;
	unsigned short now_block;
	unsigned short mode_buf[4];
	Q_WORDDATA stat_ctl_1;
	Q_WORDDATA stat_ctl_2;
	Q_WORDDATA fogcolor;
	Q_WORDDATA fogparm;
	Q_WORDDATA MoveFogColor;
	Q_WORDDATA clearcolor;
	Q_WORDDATA random_seeds;
	Q_WORDDATA compo_shadow_env;
	Q_WORDDATA compo_shadow_test;
	Q_WORDDATA compo_shadow_alp;
	Q_WORDDATA compo_shadow_col;
	Q_WORDDATA compo_Fill_col;
	Q_WORDDATA NoiseCondition;
	Q_WORDDATA CopyFilterColor;
};

struct _anon3
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

struct Enemy_List
{
	short kind;
	short id;
	int pos_x;
	int pos_z;
	short pos_y;
	short rot_y;
	short status;
	unsigned short condition;
};

struct _anon4
{
	float pos[4];
	float zdir[4];
	float ydir[4];
	float rot[4];
	float clip_volume[4];
	float world_view[4][4];
	float view_screen[4][4];
	float view_clip[4][4];
	float world_screen[4][4];
	float world_clip[4][4];
	float clip_screen[4][4];
	float camera_pam[4];
	float screen_pam1[4];
	float screen_pam2[4];
	float rot_zdir[4];
	float rot_ydir[4];
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
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

struct _anon5
{
	_anon8 pmode;
	_anon15 smode2;
	_anon10 dispfb;
	_anon18 display;
	_anon20 bgcolor;
};

struct _anon6
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

struct _anon7
{
	void(*SpecDraw)();
	void(*PreDraw)();
	void(*PostDraw)();
	void(*CharaDraw_Hook)();
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct _anon8
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

struct _anon9
{
	_anon6 frame1;
	unsigned long frame1addr;
	_anon21 zbuf1;
	long zbuf1addr;
	_anon14 xyoffset1;
	long xyoffset1addr;
	_anon3 scissor1;
	long scissor1addr;
	_anon1 prmodecont;
	long prmodecontaddr;
	_anon13 colclamp;
	long colclampaddr;
	_anon0 dthe;
	long dtheaddr;
	_anon11 test1;
	long test1addr;
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

struct _anon10
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

struct _anon11
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

struct Stage_Data
{
	Event_List* ev_list;
	unsigned char* ev_pos;
	int(*ev_prog)();
	Item_List* gi_list;
	Model_List* mdl_list;
	Enemy_List* en_list;
	void(*stage_init)();
	void(*room_init)();
	void(*alltime_func)();
	int glb_crd;
	int pc_model;
	_AnimeInfo* stg_anim_info;
	int(*bgm_control)();
	_anon7* gfw_func;
	int(*chara_data_clear)();
	void(*sound_call_after_load)();
	int reserve_11;
};

struct _anon13
{
	struct
	{
		unsigned long CLAMP : 1;
		unsigned long pad01 : 63;
	};
};

struct _VbWVSMATRIX
{
	float wvm[4][4];
	float vsm[4][4];
	float wsm[4][4];
};

struct _anon14
{
	struct
	{
		unsigned long OFX : 16;
		unsigned long pad16 : 16;
		unsigned long OFY : 16;
		unsigned long pad48 : 16;
	};
};

struct _anon15
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

struct _VbSCREENINFO
{
	float scr_z;
	float sx;
	float sy;
	float cx;
	float cy;
	float zmin;
	float zmax;
	float nearz;
	float farz;
};

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon17 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

struct shGsDrawEnv
{
	_anon12 giftag;
	_anon9 draw;
	Q_WORDDATA drawq2[5];
	_anon19 clear;
	_anon12 giftag_nc;
	_anon9 draw_nc;
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

struct _anon16
{
	struct
	{
		unsigned long X : 16;
		unsigned long Y : 16;
		unsigned long Z : 32;
	};
};

union _anon17
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _anon18
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

struct _anon19
{
	_anon11 testa;
	long testaaddr;
	_anon22 prim;
	long primaddr;
	_anon2 rgbaq;
	long rgbaqaddr;
	_anon16 xyz2a;
	long xyz2aaddr;
	_anon16 xyz2b;
	long xyz2baddr;
	_anon11 testb;
	long testbaddr;
};

struct _anon20
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

struct _anon21
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

struct _anon22
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
	_anon12 giftag;
	_anon9 draw;
	Q_WORDDATA alpha1;
	Q_WORDDATA drawq2[6];
	_anon19 clear;
	Q_WORDDATA frame;
	_anon12 giftag_nc;
	_anon9 draw_nc;
	Q_WORDDATA alpha1_nc;
	Q_WORDDATA drawq2_nc[6];
	Q_WORDDATA gifad_frame_normal;
	Q_WORDDATA frame_normal;
	Q_WORDDATA gifad_frame_mskalpha;
	Q_WORDDATA frame_mskalpha;
	Q_WORDDATA gifad_frame_mskDalpha;
	Q_WORDDATA frame_mskDalpha;
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

struct _anon23
{
	Q_WORDDATA* GS_kick;
	Q_WORDDATA* GS_tail;
	unsigned short main_num;
	unsigned short transnum;
	unsigned int pad1;
};

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA dirvec;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

struct sh2gfw_POINTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

shAttackInfo sh2_attack_list[66];
shGsAllEnv shGs_AllEnv;
_anon23 GSCTL_man;
Q_WORDDATA mct;
unsigned long res2;
unsigned long res;
Stage_Data* stage;
Q_WORDDATA Noise_Packet[0];
sh2gfw_Env_ctl Env_ctl;
Q_WORDDATA GSENV_CTL_PACK[0];
sh2gfw_VU_PARMS VU1_PARMS;
_VbWVSMATRIX VbWvsMatrix;
_anon4 Shadow_Mini_Camera;
_VbSCREENINFO VbScreenInfo;
_anon4 cam0;
sh2gfw_ALLTEXSYNC_MAN AllTexSync_Man;
int fog_check;

void all_Frame_Buffer_Clear();
void DrawLopp_Pre();
void kari_drawloop_main_2dSYNC();
void draw_main_3dSYNC();
void DrawLopp_Post();
unsigned int Get_FrameRate();
void Exec_PreDraw_OVfunc();
void draw_main();
void Noise_and_FontDraw(int loopmode);
void GSFilterExec4NextLoop();
void Calc_Set_Matrix();
void gs_loppstart_init();
void kari_setdmatag_and_draw();
void Draw_Character_And_Shadow();
void Spack_All_Draw();
int FOG_ROOM();
int DrawSpecialPolyforDemo();
int Check_DrawOrder();

// 
// Start address: 0x19fb80
void all_Frame_Buffer_Clear()
{
	Q_WORDDATA* kick;
	// Line 111, Address: 0x19fb80, Func Offset: 0
	// Line 113, Address: 0x19fb88, Func Offset: 0x8
	// Line 114, Address: 0x19fb98, Func Offset: 0x18
	// Line 115, Address: 0x19fba8, Func Offset: 0x28
	// Line 116, Address: 0x19fbb8, Func Offset: 0x38
	// Line 118, Address: 0x19fbc8, Func Offset: 0x48
	// Line 119, Address: 0x19fbd8, Func Offset: 0x58
	// Line 120, Address: 0x19fbe8, Func Offset: 0x68
	// Line 122, Address: 0x19fbf8, Func Offset: 0x78
	// Line 123, Address: 0x19fc08, Func Offset: 0x88
	// Line 127, Address: 0x19fc18, Func Offset: 0x98
	// Line 128, Address: 0x19fc20, Func Offset: 0xa0
	// Line 130, Address: 0x19fc2c, Func Offset: 0xac
	// Line 132, Address: 0x19fc3c, Func Offset: 0xbc
	// Line 134, Address: 0x19fc4c, Func Offset: 0xcc
	// Func End, Address: 0x19fc5c, Func Offset: 0xdc
}

// 
// Start address: 0x19fc60
void DrawLopp_Pre()
{
	// Line 139, Address: 0x19fc60, Func Offset: 0
	// Line 141, Address: 0x19fc68, Func Offset: 0x8
	// Line 142, Address: 0x19fc70, Func Offset: 0x10
	// Line 147, Address: 0x19fc78, Func Offset: 0x18
	// Line 151, Address: 0x19fc80, Func Offset: 0x20
	// Line 155, Address: 0x19fc88, Func Offset: 0x28
	// Line 160, Address: 0x19fc90, Func Offset: 0x30
	// Line 165, Address: 0x19fca0, Func Offset: 0x40
	// Line 170, Address: 0x19fca8, Func Offset: 0x48
	// Line 175, Address: 0x19fcb0, Func Offset: 0x50
	// Line 180, Address: 0x19fcc0, Func Offset: 0x60
	// Line 184, Address: 0x19fcc8, Func Offset: 0x68
	// Line 185, Address: 0x19fcd0, Func Offset: 0x70
	// Func End, Address: 0x19fce0, Func Offset: 0x80
}

// 
// Start address: 0x19fce0
void kari_drawloop_main_2dSYNC()
{
	// Line 194, Address: 0x19fce0, Func Offset: 0
	// Line 203, Address: 0x19fce8, Func Offset: 0x8
	// Line 206, Address: 0x19fcf0, Func Offset: 0x10
	// Line 209, Address: 0x19fcf8, Func Offset: 0x18
	// Line 210, Address: 0x19fd08, Func Offset: 0x28
	// Line 211, Address: 0x19fd18, Func Offset: 0x38
	// Func End, Address: 0x19fd28, Func Offset: 0x48
}

// 
// Start address: 0x19fd30
void draw_main_3dSYNC()
{
	// Line 217, Address: 0x19fd30, Func Offset: 0
	// Line 221, Address: 0x19fd38, Func Offset: 0x8
	// Line 229, Address: 0x19fd40, Func Offset: 0x10
	// Line 230, Address: 0x19fd50, Func Offset: 0x20
	// Line 232, Address: 0x19fd60, Func Offset: 0x30
	// Line 233, Address: 0x19fd70, Func Offset: 0x40
	// Line 246, Address: 0x19fd88, Func Offset: 0x58
	// Func End, Address: 0x19fd98, Func Offset: 0x68
}

// 
// Start address: 0x19fda0
void DrawLopp_Post()
{
	// Line 252, Address: 0x19fda0, Func Offset: 0
	// Line 267, Address: 0x19fda8, Func Offset: 0x8
	// Line 268, Address: 0x19fdb8, Func Offset: 0x18
	// Line 274, Address: 0x19fdc8, Func Offset: 0x28
	// Line 277, Address: 0x19fdd8, Func Offset: 0x38
	// Line 278, Address: 0x19fde4, Func Offset: 0x44
	// Line 283, Address: 0x19fdf0, Func Offset: 0x50
	// Line 287, Address: 0x19fdf8, Func Offset: 0x58
	// Line 295, Address: 0x19fe04, Func Offset: 0x64
	// Line 296, Address: 0x19fe18, Func Offset: 0x78
	// Line 304, Address: 0x19fe28, Func Offset: 0x88
	// Line 305, Address: 0x19fe38, Func Offset: 0x98
	// Func End, Address: 0x19fe48, Func Offset: 0xa8
}

// 
// Start address: 0x19fe50
unsigned int Get_FrameRate()
{
	// Line 313, Address: 0x19fe50, Func Offset: 0
	// Line 314, Address: 0x19fe58, Func Offset: 0x8
	// Func End, Address: 0x19fe60, Func Offset: 0x10
}

// 
// Start address: 0x19fe60
void Exec_PreDraw_OVfunc()
{
	// Line 321, Address: 0x19fe60, Func Offset: 0
	// Line 322, Address: 0x19fe68, Func Offset: 0x8
	// Line 323, Address: 0x19fe90, Func Offset: 0x30
	// Line 325, Address: 0x19fe98, Func Offset: 0x38
	// Func End, Address: 0x19fea8, Func Offset: 0x48
}

// 
// Start address: 0x19feb0
void draw_main()
{
	// Line 334, Address: 0x19feb0, Func Offset: 0
	// Line 338, Address: 0x19feb8, Func Offset: 0x8
	// Line 359, Address: 0x19fecc, Func Offset: 0x1c
	// Line 362, Address: 0x19fed4, Func Offset: 0x24
	// Line 369, Address: 0x19fedc, Func Offset: 0x2c
	// Line 370, Address: 0x19fee8, Func Offset: 0x38
	// Line 375, Address: 0x19fef0, Func Offset: 0x40
	// Line 380, Address: 0x19fef8, Func Offset: 0x48
	// Line 389, Address: 0x19ff00, Func Offset: 0x50
	// Line 396, Address: 0x19ff08, Func Offset: 0x58
	// Line 401, Address: 0x19ff10, Func Offset: 0x60
	// Line 407, Address: 0x19ff18, Func Offset: 0x68
	// Line 415, Address: 0x19ff20, Func Offset: 0x70
	// Line 420, Address: 0x19ff28, Func Offset: 0x78
	// Line 421, Address: 0x19ff30, Func Offset: 0x80
	// Line 422, Address: 0x19ff40, Func Offset: 0x90
	// Line 426, Address: 0x19ff4c, Func Offset: 0x9c
	// Line 434, Address: 0x19ff5c, Func Offset: 0xac
	// Func End, Address: 0x19ff6c, Func Offset: 0xbc
}

// 
// Start address: 0x19ff70
void Noise_and_FontDraw(int loopmode)
{
	Q_WORDDATA* qwd;
	// Line 440, Address: 0x19ff70, Func Offset: 0
	// Line 442, Address: 0x19ff80, Func Offset: 0x10
	// Line 447, Address: 0x19ff98, Func Offset: 0x28
	// Line 454, Address: 0x19ffa0, Func Offset: 0x30
	// Line 455, Address: 0x19ffb0, Func Offset: 0x40
	// Line 456, Address: 0x19ffbc, Func Offset: 0x4c
	// Line 458, Address: 0x19ffd0, Func Offset: 0x60
	// Line 459, Address: 0x19fff0, Func Offset: 0x80
	// Line 462, Address: 0x1a0004, Func Offset: 0x94
	// Line 464, Address: 0x1a0024, Func Offset: 0xb4
	// Line 469, Address: 0x1a0034, Func Offset: 0xc4
	// Line 471, Address: 0x1a0064, Func Offset: 0xf4
	// Func End, Address: 0x1a0078, Func Offset: 0x108
}

// 
// Start address: 0x1a0080
void GSFilterExec4NextLoop()
{
	int filtercommand;
	int idd[3];
	Q_WORDDATA* SendAddr;
	Q_WORDDATA* qwd;
	// Line 475, Address: 0x1a0080, Func Offset: 0
	// Line 477, Address: 0x1a0090, Func Offset: 0x10
	// Line 478, Address: 0x1a00ac, Func Offset: 0x2c
	// Line 480, Address: 0x1a00b4, Func Offset: 0x34
	// Line 483, Address: 0x1a00bc, Func Offset: 0x3c
	// Line 487, Address: 0x1a00cc, Func Offset: 0x4c
	// Line 489, Address: 0x1a00d8, Func Offset: 0x58
	// Line 491, Address: 0x1a00e4, Func Offset: 0x64
	// Line 493, Address: 0x1a00f4, Func Offset: 0x74
	// Line 496, Address: 0x1a0100, Func Offset: 0x80
	// Line 497, Address: 0x1a0114, Func Offset: 0x94
	// Line 499, Address: 0x1a0124, Func Offset: 0xa4
	// Line 500, Address: 0x1a0130, Func Offset: 0xb0
	// Line 502, Address: 0x1a0140, Func Offset: 0xc0
	// Func End, Address: 0x1a0158, Func Offset: 0xd8
}

// 
// Start address: 0x1a0160
void Calc_Set_Matrix()
{
	// Line 513, Address: 0x1a0160, Func Offset: 0
	// Line 525, Address: 0x1a0168, Func Offset: 0x8
	// Line 527, Address: 0x1a0180, Func Offset: 0x20
	// Line 540, Address: 0x1a0188, Func Offset: 0x28
	// Line 547, Address: 0x1a0218, Func Offset: 0xb8
	// Line 553, Address: 0x1a0238, Func Offset: 0xd8
	// Line 558, Address: 0x1a0240, Func Offset: 0xe0
	// Line 559, Address: 0x1a0258, Func Offset: 0xf8
	// Line 560, Address: 0x1a0270, Func Offset: 0x110
	// Line 561, Address: 0x1a0288, Func Offset: 0x128
	// Line 563, Address: 0x1a02a0, Func Offset: 0x140
	// Line 567, Address: 0x1a02a8, Func Offset: 0x148
	// Line 570, Address: 0x1a02c0, Func Offset: 0x160
	// Line 583, Address: 0x1a02d8, Func Offset: 0x178
	// Line 585, Address: 0x1a0380, Func Offset: 0x220
	// Line 588, Address: 0x1a03a0, Func Offset: 0x240
	// Line 597, Address: 0x1a03c0, Func Offset: 0x260
	// Line 598, Address: 0x1a03c8, Func Offset: 0x268
	// Line 599, Address: 0x1a03e0, Func Offset: 0x280
	// Func End, Address: 0x1a03f0, Func Offset: 0x290
}

// 
// Start address: 0x1a03f0
void gs_loppstart_init()
{
	Q_WORDDATA* kick;
	// Line 606, Address: 0x1a03f0, Func Offset: 0
	// Line 609, Address: 0x1a03f8, Func Offset: 0x8
	// Line 611, Address: 0x1a0408, Func Offset: 0x18
	// Line 612, Address: 0x1a0418, Func Offset: 0x28
	// Line 615, Address: 0x1a0428, Func Offset: 0x38
	// Line 616, Address: 0x1a0430, Func Offset: 0x40
	// Line 620, Address: 0x1a043c, Func Offset: 0x4c
	// Func End, Address: 0x1a044c, Func Offset: 0x5c
}

// 
// Start address: 0x1a0450
void kari_setdmatag_and_draw()
{
	Q_WORDDATA* buf;
	Q_WORDDATA* qwd;
	// Line 625, Address: 0x1a0450, Func Offset: 0
	// Line 629, Address: 0x1a045c, Func Offset: 0xc
	// Line 630, Address: 0x1a0468, Func Offset: 0x18
	// Line 635, Address: 0x1a046c, Func Offset: 0x1c
	// Line 637, Address: 0x1a0478, Func Offset: 0x28
	// Line 642, Address: 0x1a0490, Func Offset: 0x40
	// Line 644, Address: 0x1a04a4, Func Offset: 0x54
	// Line 645, Address: 0x1a04b0, Func Offset: 0x60
	// Line 650, Address: 0x1a04bc, Func Offset: 0x6c
	// Line 651, Address: 0x1a04cc, Func Offset: 0x7c
	// Line 655, Address: 0x1a04dc, Func Offset: 0x8c
	// Line 659, Address: 0x1a04e8, Func Offset: 0x98
	// Func End, Address: 0x1a04fc, Func Offset: 0xac
}

// 
// Start address: 0x1a0500
void Draw_Character_And_Shadow()
{
	_anon4* cam_tmp;
	int count;
	// Line 674, Address: 0x1a0500, Func Offset: 0
	// Line 688, Address: 0x1a0508, Func Offset: 0x8
	// Line 691, Address: 0x1a0510, Func Offset: 0x10
	// Line 697, Address: 0x1a0520, Func Offset: 0x20
	// Line 698, Address: 0x1a0528, Func Offset: 0x28
	// Line 704, Address: 0x1a053c, Func Offset: 0x3c
	// Line 708, Address: 0x1a0544, Func Offset: 0x44
	// Line 710, Address: 0x1a054c, Func Offset: 0x4c
	// Line 715, Address: 0x1a0554, Func Offset: 0x54
	// Line 718, Address: 0x1a055c, Func Offset: 0x5c
	// Line 720, Address: 0x1a0564, Func Offset: 0x64
	// Line 723, Address: 0x1a056c, Func Offset: 0x6c
	// Line 726, Address: 0x1a0574, Func Offset: 0x74
	// Line 731, Address: 0x1a057c, Func Offset: 0x7c
	// Line 735, Address: 0x1a0584, Func Offset: 0x84
	// Line 737, Address: 0x1a058c, Func Offset: 0x8c
	// Line 744, Address: 0x1a0594, Func Offset: 0x94
	// Line 746, Address: 0x1a059c, Func Offset: 0x9c
	// Line 748, Address: 0x1a05a4, Func Offset: 0xa4
	// Line 750, Address: 0x1a05b4, Func Offset: 0xb4
	// Line 753, Address: 0x1a05bc, Func Offset: 0xbc
	// Line 759, Address: 0x1a05d0, Func Offset: 0xd0
	// Line 763, Address: 0x1a05d8, Func Offset: 0xd8
	// Line 765, Address: 0x1a05e0, Func Offset: 0xe0
	// Line 770, Address: 0x1a05e8, Func Offset: 0xe8
	// Line 773, Address: 0x1a05f0, Func Offset: 0xf0
	// Line 775, Address: 0x1a05f8, Func Offset: 0xf8
	// Line 778, Address: 0x1a0600, Func Offset: 0x100
	// Line 781, Address: 0x1a0608, Func Offset: 0x108
	// Line 787, Address: 0x1a0610, Func Offset: 0x110
	// Line 790, Address: 0x1a0618, Func Offset: 0x118
	// Func End, Address: 0x1a0628, Func Offset: 0x128
}

// 
// Start address: 0x1a0630
void Spack_All_Draw()
{
	// Line 800, Address: 0x1a0630, Func Offset: 0
	// Line 803, Address: 0x1a0638, Func Offset: 0x8
	// Line 804, Address: 0x1a0640, Func Offset: 0x10
	// Line 809, Address: 0x1a066c, Func Offset: 0x3c
	// Line 814, Address: 0x1a0680, Func Offset: 0x50
	// Line 815, Address: 0x1a0690, Func Offset: 0x60
	// Line 817, Address: 0x1a06b4, Func Offset: 0x84
	// Line 819, Address: 0x1a06bc, Func Offset: 0x8c
	// Line 823, Address: 0x1a06c4, Func Offset: 0x94
	// Line 824, Address: 0x1a06cc, Func Offset: 0x9c
	// Line 826, Address: 0x1a06d4, Func Offset: 0xa4
	// Line 828, Address: 0x1a06f4, Func Offset: 0xc4
	// Line 830, Address: 0x1a06fc, Func Offset: 0xcc
	// Line 832, Address: 0x1a0704, Func Offset: 0xd4
	// Line 836, Address: 0x1a070c, Func Offset: 0xdc
	// Line 842, Address: 0x1a0714, Func Offset: 0xe4
	// Line 843, Address: 0x1a0724, Func Offset: 0xf4
	// Line 848, Address: 0x1a072c, Func Offset: 0xfc
	// Line 851, Address: 0x1a0734, Func Offset: 0x104
	// Line 854, Address: 0x1a073c, Func Offset: 0x10c
	// Line 857, Address: 0x1a0744, Func Offset: 0x114
	// Func End, Address: 0x1a0754, Func Offset: 0x124
}

// 
// Start address: 0x1a0760
int FOG_ROOM()
{
	int* mp;
	// Line 876, Address: 0x1a0760, Func Offset: 0
	// Line 879, Address: 0x1a0768, Func Offset: 0x8
	// Line 899, Address: 0x1a0770, Func Offset: 0x10
	// Line 911, Address: 0x1a0818, Func Offset: 0xb8
	// Line 916, Address: 0x1a0824, Func Offset: 0xc4
	// Line 917, Address: 0x1a0828, Func Offset: 0xc8
	// Func End, Address: 0x1a0838, Func Offset: 0xd8
}

// 
// Start address: 0x1a0840
int DrawSpecialPolyforDemo()
{
	// Line 920, Address: 0x1a0840, Func Offset: 0
	// Line 922, Address: 0x1a0848, Func Offset: 0x8
	// Line 923, Address: 0x1a0870, Func Offset: 0x30
	// Line 924, Address: 0x1a0878, Func Offset: 0x38
	// Line 927, Address: 0x1a0884, Func Offset: 0x44
	// Line 929, Address: 0x1a0888, Func Offset: 0x48
	// Func End, Address: 0x1a0898, Func Offset: 0x58
}

// 
// Start address: 0x1a08a0
int Check_DrawOrder()
{
	int* mp;
	// Line 936, Address: 0x1a08a0, Func Offset: 0
	// Line 937, Address: 0x1a08a8, Func Offset: 0x8
	// Line 939, Address: 0x1a08b8, Func Offset: 0x18
	// Line 942, Address: 0x1a08c4, Func Offset: 0x24
	// Line 944, Address: 0x1a08cc, Func Offset: 0x2c
	// Line 947, Address: 0x1a08f8, Func Offset: 0x58
	// Line 950, Address: 0x1a0904, Func Offset: 0x64
	// Line 952, Address: 0x1a0908, Func Offset: 0x68
	// Func End, Address: 0x1a0918, Func Offset: 0x78
}

