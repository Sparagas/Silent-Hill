typedef struct _anon0;
typedef struct SDrawData;
typedef struct Part;
typedef struct shGsStencilDrawEnv;
typedef struct TextPosParam;
typedef struct _anon1;
typedef union Q_WORDDATA;
typedef struct NDrawData;
typedef struct shGsDrawEnv;
typedef struct _anon2;
typedef struct LambertData;
typedef struct AllData;
typedef struct Data_0;
typedef struct _anon3;
typedef struct TextureParam;
typedef struct sh_Model;
typedef struct ModelWork;
typedef struct ClusterData;
typedef struct _anon4;
typedef struct shGsLoopEnv;
typedef struct shBattleFight;
typedef struct PLightData;
typedef union Q;
typedef struct SprData;
typedef struct _anon5;
typedef struct _anon6;
typedef struct shBattleShot;
typedef struct Init_Gs_Packet;
typedef struct ELightData;
typedef struct _anon7;
typedef struct _anon8;
typedef struct Light;
typedef struct Model;
typedef struct _anon9;
typedef struct shGsTinyDrawEnv;
typedef struct _anon10;
typedef struct EMapData;
typedef struct _anon11;
typedef struct _anon12;
typedef struct Data_1;
typedef struct shGsAllEnv;
typedef struct SMapData;
typedef struct Data_2;
typedef struct shAttackInfo;
typedef struct _anon13;
typedef struct DSetupData;
typedef struct _anon14;
typedef union _anon15;
typedef struct _sceDmaTag;
typedef struct EDrawData;
typedef struct _anon16;
typedef struct ModelCommonWork;
typedef struct Data_3;
typedef struct Data_4;
typedef struct _anon17;
typedef struct _anon18;
typedef struct _anon19;
typedef struct _anon20;
typedef struct _anon21;
typedef struct Model3Junk;
typedef struct _anon22;
typedef struct Packet;
typedef struct _anon23;

typedef int(*type_59)(void*, void*, void*);

typedef Q_WORDDATA type_0[2];
typedef unsigned char type_1[2];
typedef Q_WORDDATA type_2[2];
typedef Q_WORDDATA type_3[2];
typedef float type_4[4];
typedef Q_WORDDATA type_5[2];
typedef Q_WORDDATA type_6[6];
typedef unsigned int type_7[3];
typedef Q_WORDDATA type_8[2];
typedef Q_WORDDATA type_9[5];
typedef Q_WORDDATA type_10[6];
typedef Q_WORDDATA type_11[5];
typedef float type_12[4];
typedef unsigned int type_13[3];
typedef <unknown fundamental type (0xa510)> type_14[0];
typedef unsigned int type_15[3];
typedef NDrawData type_16[2];
typedef unsigned int type_17[3];
typedef unsigned long type_18[2];
typedef NDrawData type_19[2];
typedef unsigned int type_20[24];
typedef unsigned int type_21[4];
typedef unsigned int type_22[3];
typedef unsigned short type_23[8];
typedef unsigned int type_24[3];
typedef unsigned char type_25[16];
typedef long type_26[2];
typedef unsigned int type_27[4];
typedef int type_28[4];
typedef unsigned short type_29[8];
typedef unsigned short type_30[8];
typedef short type_31[8];
typedef char type_32[16];
typedef float type_33[4];
typedef unsigned char type_34[16];
typedef int type_35[4];
typedef short type_36[8];
typedef int type_37[4];
typedef char type_38[16];
typedef unsigned long type_39[2];
typedef int type_40[4];
typedef float type_41[4][4];
typedef float type_42[4];
typedef _anon22 type_43[3];
typedef shGsDrawEnv type_44[3];
typedef shGsStencilDrawEnv type_45[3];
typedef shGsTinyDrawEnv type_46[6];
typedef Q_WORDDATA type_47[10];
typedef void* type_48[4];
typedef float type_49[4];
typedef float type_50[4][2];
typedef Q_WORDDATA type_51[10];
typedef Q_WORDDATA type_52[10];
typedef unsigned int type_53[2];
typedef Q_WORDDATA type_54[10];
typedef float type_55[4];
typedef float type_56[4][2];
typedef Q_WORDDATA type_57[10];
typedef Q_WORDDATA type_58[10];
typedef Q_WORDDATA type_60[10];
typedef Q_WORDDATA type_61[8];
typedef Q_WORDDATA type_62[2];
typedef float type_63[4][4][128];
typedef Q_WORDDATA type_64[2];
typedef float type_65[4][4][256];
typedef Q_WORDDATA type_66[2];
typedef float type_67[4][2048];
typedef Q_WORDDATA type_68[2];
typedef shAttackInfo type_69[66];
typedef Q_WORDDATA type_70[2];
typedef Q_WORDDATA type_71[2];
typedef unsigned int type_72[3];
typedef TextPosParam type_73[64];
typedef Q_WORDDATA type_74[2];
typedef Q_WORDDATA type_75[2];
typedef unsigned int type_76[3];
typedef unsigned int type_77[3];
typedef Q_WORDDATA type_78[2];
typedef PLightData type_79[4];
typedef Q_WORDDATA type_80[2];
typedef unsigned int type_81[3];
typedef ELightData type_82[8];
typedef Q_WORDDATA type_83[2];
typedef <unknown fundamental type (0xa510)> type_84[4];
typedef unsigned int type_85[3];
typedef Q_WORDDATA type_86[2];
typedef Q_WORDDATA type_87[2];
typedef unsigned int type_88[3];
typedef Q_WORDDATA type_89[2];
typedef unsigned int type_90[4];
typedef Q_WORDDATA type_91[2];
typedef unsigned int type_92[4];
typedef Q_WORDDATA type_93[2];
typedef AllData type_94[2];
typedef unsigned int type_95[3];

struct _anon0
{
	unsigned int* pCurrent;
	<unknown fundamental type (0xa510)>* pBase;
	<unknown fundamental type (0xa510)>* pDmaTag;
	unsigned int* pVifCode;
	unsigned int numlen;
	unsigned long* pGifTag;
	unsigned int pad12;
	unsigned int pad13;
};

struct SDrawData
{
	Q giftag;
	Q waittag;
	Q envtag;
	Q tex0;
	Q tex1;
	Q clamp;
	Q alpha;
	Q fogcol;
	Q reflection_color;
};

struct Part
{
	unsigned int size;
	unsigned int type;
	unsigned int packet_offset;
	unsigned int packet_qwc;
	unsigned int xtop;
	unsigned int n_cluster_data;
	unsigned int cluster_data_offset;
	unsigned int n_skeletons;
	unsigned int skeletons_offset;
	unsigned int n_skeleton_pairs;
	unsigned int skeleton_pairs_offset;
	unsigned int data_skeletons_offset;
	unsigned int data_skeleton_pairs_offset;
	unsigned int n_textures;
	unsigned int text_pos_indices_offset;
	unsigned int texture_params_offset;
	unsigned char shading_type;
	unsigned char specular_pos;
	unsigned char equipment_id;
	unsigned char hoge;
	unsigned char backclip;
	unsigned char envmap_param;
	unsigned char reserved[2];
	float phong_param_a;
	float phong_param_b;
	float blinn_param;
	unsigned int padding[3];
	float diffuse[4];
	float ambient[4];
	float specular[4];
};

struct shGsStencilDrawEnv
{
	_anon9 giftag;
	_anon1 draw;
	Q_WORDDATA alpha1;
	Q_WORDDATA drawq2[6];
	_anon12 clear;
	Q_WORDDATA frame;
	_anon9 giftag_nc;
	_anon1 draw_nc;
	Q_WORDDATA alpha1_nc;
	Q_WORDDATA drawq2_nc[6];
	Q_WORDDATA gifad_frame_normal;
	Q_WORDDATA frame_normal;
	Q_WORDDATA gifad_frame_mskalpha;
	Q_WORDDATA frame_mskalpha;
	Q_WORDDATA gifad_frame_mskDalpha;
	Q_WORDDATA frame_mskDalpha;
};

struct TextPosParam
{
	unsigned long tex0;
};

struct _anon1
{
	_anon3 frame1;
	unsigned long frame1addr;
	_anon13 zbuf1;
	long zbuf1addr;
	_anon10 xyoffset1;
	long xyoffset1addr;
	_anon23 scissor1;
	long scissor1addr;
	_anon17 prmodecont;
	long prmodecontaddr;
	_anon8 colclamp;
	long colclampaddr;
	_anon19 dthe;
	long dtheaddr;
	_anon5 test1;
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

struct NDrawData
{
	Q giftag;
	Q waittag;
	Q envtag;
	Q tex0;
	Q tex1;
	Q clamp;
	Q alpha;
	Q fogcol;
};

struct shGsDrawEnv
{
	_anon9 giftag;
	_anon1 draw;
	Q_WORDDATA drawq2[5];
	_anon12 clear;
	_anon9 giftag_nc;
	_anon1 draw_nc;
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

struct LambertData
{
	float nlm[4][4];
	float lcm[4][4];
	float rgba_max[4];
	float global_ambient[4];
};

struct AllData
{
	LambertData lambert;
	PLightData plight[4];
	ELightData elight[8];
	EMapData emap;
	SMapData smap;
	DSetupData dsetup;
	EDrawData edraw;
	SDrawData sdraw;
	SDrawData bdraw;
};

struct Data_0
{
	Q rgba;
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

struct TextureParam
{
	unsigned long clamp;
	unsigned long tex1;
};

struct sh_Model
{
	unsigned int id;
	unsigned int revision;
	unsigned int initial_matrices_offset;
	unsigned int n_skeletons;
	unsigned int skeleton_structure_offset;
	unsigned int n_skeleton_pairs;
	unsigned int skeleton_pairs_offset;
	unsigned int default_pcms_offset;
	unsigned int n_vu1_parts;
	unsigned int vu1_parts_offset;
	unsigned int n_vu0_parts;
	unsigned int vu0_parts_offset;
	unsigned int n_texture_blocks;
	unsigned int texture_blocks_offset;
	unsigned int n_text_poses;
	unsigned int text_poses_offset;
	unsigned int text_pos_params_offset;
	unsigned int n_cluster_nodes;
	unsigned int cluster_nodes_offset;
	unsigned int n_clusters;
	unsigned int clusters_offset;
	unsigned int n_func_data;
	unsigned int func_data_offset;
	unsigned int hit_offset;
	unsigned int box_offset;
	unsigned int flag;
	unsigned int relative_matrices_offset;
	unsigned int relative_transes_offset;
	void* pTexMAN[4];
};

struct ModelWork
{
	unsigned int id;
	float relatives[4][4];
	float matrices[4][4];
	float* cluster_weights;
	<unknown fundamental type (0xa510)> equipment_flag;
	int(*draw_hook)(void*, void*, void*);
	void* draw_hook_data;
};

struct ClusterData
{
	unsigned short src;
	unsigned short dst;
	unsigned short n;
};

struct _anon4
{
	_anon16 chcr;
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct PLightData
{
	float nlm[4][4];
	float lcm[4][4];
};

union Q
{
	<unknown fundamental type (0xa510)> u128;
	unsigned long u64[2];
	unsigned int u32[4];
	unsigned short u16[8];
	unsigned char u8[16];
	long s64[2];
	int s32[4];
	short s16[8];
	char s8[16];
	int q[4];
	float fv[4];
	int iv[4];
};

struct SprData
{
	NDrawData ndraw[2];
	NDrawData odraw[2];
};

struct _anon5
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

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct Init_Gs_Packet
{
	unsigned long giftag_tag;
	unsigned long giftag_reg;
	unsigned long test_d;
	unsigned long test_a;
	unsigned long fba_d;
	unsigned long fba_a;
	unsigned long texflush_d;
	unsigned long texflush_a;
};

struct ELightData
{
	float pos[4];
	float dir[4];
	float col[4];
	float param[4];
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
		unsigned long CLAMP : 1;
		unsigned long pad01 : 63;
	};
};

struct Light
{
	int kind;
	float intensity;
	float influence;
	float intensity2;
	float influence2;
	short cid;
	short fakekind;
	float inf_fac;
	void* DrawEnv_LightData;
	float pos[4];
	float vpos[4];
	float dir[4];
	float vdir[4];
	float color[4];
	float f_start;
	float f_end;
	float s_start;
	float s_end;
	float f_a;
	float f_b;
	float s_a;
	float s_b;
	float f_ra;
	float f_rb;
};

struct Model
{
	unsigned int id;
	unsigned int revision;
	unsigned int initial_matrices_offset;
	unsigned int n_skeletons;
	unsigned int skeleton_structure_offset;
	unsigned int n_skeleton_pairs;
	unsigned int skeleton_pairs_offset;
	unsigned int default_pcms_offset;
	unsigned int n_vu1_parts;
	unsigned int vu1_parts_offset;
	unsigned int n_vu0_parts;
	unsigned int vu0_parts_offset;
	unsigned int n_texture_blocks;
	unsigned int texture_blocks_offset;
	unsigned int n_text_poses;
	unsigned int text_poses_offset;
	unsigned int text_pos_params_offset;
	unsigned int n_cluster_nodes;
	unsigned int cluster_nodes_offset;
	unsigned int n_clusters;
	unsigned int clusters_offset;
	unsigned int n_func_data;
	unsigned int func_data_offset;
	unsigned int hit_offset;
	unsigned int box_offset;
	unsigned int flag;
	unsigned int relative_matrices_offset;
	unsigned int relative_transes_offset;
	unsigned int reserved_1c;
	unsigned int reserved_1d;
	unsigned int reserved_1e;
	unsigned int reserved_1f;
};

struct _anon9
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

struct _anon10
{
	struct
	{
		unsigned long OFX : 16;
		unsigned long pad16 : 16;
		unsigned long OFY : 16;
		unsigned long pad48 : 16;
	};
};

struct EMapData
{
	float vwm[4][4];
	float mag[4];
	float offset[4];
};

struct _anon11
{
	struct
	{
		unsigned long X : 16;
		unsigned long Y : 16;
		unsigned long Z : 32;
	};
};

struct _anon12
{
	_anon5 testa;
	long testaaddr;
	_anon14 prim;
	long primaddr;
	_anon20 rgbaq;
	long rgbaqaddr;
	_anon11 xyz2a;
	long xyz2aaddr;
	_anon11 xyz2b;
	long xyz2baddr;
	_anon5 testb;
	long testbaddr;
};

struct Data_1
{
	Q specular;
};

struct shGsAllEnv
{
	unsigned long loop_counter;
	unsigned int loop;
	unsigned int loop3;
	shGsLoopEnv LoopEnv;
	_anon22 DispEnv[3];
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

struct SMapData
{
	float nhm[4][4];
};

struct Data_2
{
	float param[4];
};

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon15 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

struct _anon13
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

struct DSetupData
{
	float vsp[4][2];
	float vcp[4][2];
	Q xyz_mul;
	Q xyz_add;
	Q rgba_max;
	Q waittag;
};

struct _anon14
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

union _anon15
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _sceDmaTag
{
	unsigned short qwc;
	unsigned char mark;
	unsigned char id;
	_sceDmaTag* next;
	unsigned int p[2];
};

struct EDrawData
{
	Q giftag;
	Q waittag;
	Q envtag;
	Q tex0;
	Q tex1;
	Q clamp;
	Q alpha;
	Q fogcol;
};

struct _anon16
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

struct ModelCommonWork
{
	float skeleton_matrices[4][4][128];
	float envelope_matrices[4][4][256];
	float cluster_nodes[4][2048];
	float top_skeleton_matrix[4][4];
	float vsp[4][2];
	float vcp[4][2];
	float vcp_gs[4][2];
	TextPosParam text_pos_params[64];
	unsigned long specular_mapping_tex0;
	unsigned long latitude_mapping_tex0;
};

struct Data_3
{
	Q specular;
};

struct Data_4
{
	float diffuse[4];
	float ambient[4];
	float param[4];
};

struct _anon17
{
	struct
	{
		unsigned long AC : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon18
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

struct _anon19
{
	struct
	{
		unsigned long DTHE : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon20
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

struct _anon21
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

struct Model3Junk
{
	float xyz_min[4];
	float xyz_max[4];
	float xyz_min_wide[4];
	float xyz_max_wide[4];
	float rgba_max[4];
	float global_ambient[4];
	<unknown fundamental type (0xa510)> giftag_0;
	<unknown fundamental type (0xa510)> giftag_1;
	<unknown fundamental type (0xa510)> giftag_2;
	float camera[4];
	float wvm[4][4];
	float vsm[4][4];
	float wsm[4][4];
	float vwm[4][4];
	void* vi00;
	void* xtop;
	float cluster_nodes[4];
	unsigned int fogcol;
	unsigned char view_clip_and;
	unsigned char view_clip_or;
	unsigned char gs_clip_and;
	unsigned char gs_clip_or;
};

struct _anon22
{
	_anon18 pmode;
	_anon2 smode2;
	_anon21 dispfb;
	_anon6 display;
	_anon7 bgcolor;
};

struct Packet
{
	unsigned long giftag_tag;
	unsigned long giftag_reg;
	unsigned long TexFlush_D;
	unsigned long TexFlush_A;
	unsigned long Clamp_D;
	unsigned long Clamp_A;
};

struct _anon23
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

shAttackInfo sh2_attack_list[66];
int muga;
SprData* spr_data;
int model3_mpg1_view_size;
<unknown fundamental type (0xa510)> model3_mpg1_view_load[0];
Model3Junk model3_junk;
SprData spr_data_mem;
AllData all_data_db[2];
ModelCommonWork* model_common_work;
AllData* all_data;
int all_data_page;
unsigned int xitop;
shGsAllEnv shGs_AllEnv;
unsigned int prev_xtop;
Model* model;

void Model3LoadMpg1();
void InitAllDataOne(AllData* p);
void InitSprData(SprData* p);
void InitData1();
void MakeData1();
void InitEnv1(_anon0* pk);
void TiniEnv(_anon0* pk);
void MakeVu1PartTransferPacket(Part* part, _anon0* pk);
void MakeLambertShadingPacket(Part* part, _anon0* pk);
void MakeNormalPacket(Part* part, _anon0* pk);
void MakeEnvironPacket(Part* part, _anon0* pk);
void MakeSpecularPacket(Part* part, _anon0* pk);
void MakeBaseSpecularPacket(Part* part, _anon0* pk);
void MakeOverPacket(Part* part, _anon0* pk);
void MakeDrawPacket(Part* part, _anon0* pk);
void DrawPart1(Part* part, _anon0* pk);
void DrawParts1(sh_Model* model, ModelWork* work);
void Model3DrawVu1Parts(Model* model, ModelWork* work);

// 
// Start address: 0x12bde0
void Model3LoadMpg1()
{
	Q_WORDDATA* qwd;
	<unknown fundamental type (0xa510)> packet_buffer[4];
	int initialized;
	// Line 195, Address: 0x12bde0, Func Offset: 0
	// Line 218, Address: 0x12bdec, Func Offset: 0xc
	// Line 220, Address: 0x12bdfc, Func Offset: 0x1c
	// Line 230, Address: 0x12be14, Func Offset: 0x34
	// Line 231, Address: 0x12be1c, Func Offset: 0x3c
	// Line 232, Address: 0x12be28, Func Offset: 0x48
	// Line 233, Address: 0x12be30, Func Offset: 0x50
	// Line 235, Address: 0x12be34, Func Offset: 0x54
	// Line 240, Address: 0x12be4c, Func Offset: 0x6c
	// Line 241, Address: 0x12be54, Func Offset: 0x74
	// Line 242, Address: 0x12be58, Func Offset: 0x78
	// Line 243, Address: 0x12be5c, Func Offset: 0x7c
	// Line 246, Address: 0x12be68, Func Offset: 0x88
	// Line 249, Address: 0x12be78, Func Offset: 0x98
	// Func End, Address: 0x12be8c, Func Offset: 0xac
}

// 
// Start address: 0x12be90
void InitAllDataOne(AllData* p)
{
	SDrawData* data;
	SDrawData* data;
	EDrawData* data;
	DSetupData* data;
	LambertData* lambert_data;
	// Line 256, Address: 0x12be90, Func Offset: 0
	// Line 259, Address: 0x12bea4, Func Offset: 0x14
	// Line 260, Address: 0x12beb8, Func Offset: 0x28
	// Line 265, Address: 0x12becc, Func Offset: 0x3c
	// Line 266, Address: 0x12bee0, Func Offset: 0x50
	// Line 267, Address: 0x12bef4, Func Offset: 0x64
	// Line 268, Address: 0x12befc, Func Offset: 0x6c
	// Line 274, Address: 0x12bf00, Func Offset: 0x70
	// Line 275, Address: 0x12bf14, Func Offset: 0x84
	// Line 276, Address: 0x12bf24, Func Offset: 0x94
	// Line 277, Address: 0x12bf2c, Func Offset: 0x9c
	// Line 278, Address: 0x12bf30, Func Offset: 0xa0
	// Line 279, Address: 0x12bf34, Func Offset: 0xa4
	// Line 282, Address: 0x12bf48, Func Offset: 0xb8
	// Line 283, Address: 0x12bf54, Func Offset: 0xc4
	// Line 284, Address: 0x12bf58, Func Offset: 0xc8
	// Line 285, Address: 0x12bf60, Func Offset: 0xd0
	// Line 286, Address: 0x12bf68, Func Offset: 0xd8
	// Line 287, Address: 0x12bf70, Func Offset: 0xe0
	// Line 288, Address: 0x12bf78, Func Offset: 0xe8
	// Line 289, Address: 0x12bf80, Func Offset: 0xf0
	// Line 290, Address: 0x12bf88, Func Offset: 0xf8
	// Line 291, Address: 0x12bf90, Func Offset: 0x100
	// Line 292, Address: 0x12bf94, Func Offset: 0x104
	// Line 302, Address: 0x12bf9c, Func Offset: 0x10c
	// Line 303, Address: 0x12bfac, Func Offset: 0x11c
	// Line 304, Address: 0x12bfbc, Func Offset: 0x12c
	// Line 305, Address: 0x12bfc0, Func Offset: 0x130
	// Line 306, Address: 0x12bfc4, Func Offset: 0x134
	// Line 307, Address: 0x12bfc8, Func Offset: 0x138
	// Line 310, Address: 0x12bfdc, Func Offset: 0x14c
	// Line 311, Address: 0x12bfe0, Func Offset: 0x150
	// Line 312, Address: 0x12bfe4, Func Offset: 0x154
	// Line 313, Address: 0x12bfe8, Func Offset: 0x158
	// Line 314, Address: 0x12bfec, Func Offset: 0x15c
	// Line 315, Address: 0x12bff0, Func Offset: 0x160
	// Line 316, Address: 0x12bff8, Func Offset: 0x168
	// Line 321, Address: 0x12bffc, Func Offset: 0x16c
	// Line 344, Address: 0x12c004, Func Offset: 0x174
	// Line 345, Address: 0x12c008, Func Offset: 0x178
	// Line 346, Address: 0x12c00c, Func Offset: 0x17c
	// Line 351, Address: 0x12c010, Func Offset: 0x180
	// Line 352, Address: 0x12c020, Func Offset: 0x190
	// Line 353, Address: 0x12c030, Func Offset: 0x1a0
	// Line 354, Address: 0x12c034, Func Offset: 0x1a4
	// Line 357, Address: 0x12c048, Func Offset: 0x1b8
	// Line 358, Address: 0x12c04c, Func Offset: 0x1bc
	// Line 359, Address: 0x12c050, Func Offset: 0x1c0
	// Line 360, Address: 0x12c054, Func Offset: 0x1c4
	// Line 361, Address: 0x12c058, Func Offset: 0x1c8
	// Line 362, Address: 0x12c05c, Func Offset: 0x1cc
	// Line 363, Address: 0x12c060, Func Offset: 0x1d0
	// Line 364, Address: 0x12c064, Func Offset: 0x1d4
	// Line 365, Address: 0x12c068, Func Offset: 0x1d8
	// Line 366, Address: 0x12c06c, Func Offset: 0x1dc
	// Line 367, Address: 0x12c070, Func Offset: 0x1e0
	// Line 368, Address: 0x12c074, Func Offset: 0x1e4
	// Line 369, Address: 0x12c078, Func Offset: 0x1e8
	// Line 371, Address: 0x12c07c, Func Offset: 0x1ec
	// Func End, Address: 0x12c094, Func Offset: 0x204
}

// 
// Start address: 0x12c0a0
void InitSprData(SprData* p)
{
	NDrawData* data;
	NDrawData* data;
	int i;
	// Line 382, Address: 0x12c0a0, Func Offset: 0
	// Line 383, Address: 0x12c0ac, Func Offset: 0xc
	// Line 384, Address: 0x12c0c4, Func Offset: 0x24
	// Line 385, Address: 0x12c0d4, Func Offset: 0x34
	// Line 386, Address: 0x12c0dc, Func Offset: 0x3c
	// Line 387, Address: 0x12c0e4, Func Offset: 0x44
	// Line 388, Address: 0x12c0e8, Func Offset: 0x48
	// Line 391, Address: 0x12c0fc, Func Offset: 0x5c
	// Line 392, Address: 0x12c108, Func Offset: 0x68
	// Line 393, Address: 0x12c10c, Func Offset: 0x6c
	// Line 394, Address: 0x12c114, Func Offset: 0x74
	// Line 395, Address: 0x12c118, Func Offset: 0x78
	// Line 396, Address: 0x12c120, Func Offset: 0x80
	// Line 397, Address: 0x12c124, Func Offset: 0x84
	// Line 398, Address: 0x12c12c, Func Offset: 0x8c
	// Line 399, Address: 0x12c134, Func Offset: 0x94
	// Line 400, Address: 0x12c13c, Func Offset: 0x9c
	// Line 401, Address: 0x12c140, Func Offset: 0xa0
	// Line 402, Address: 0x12c148, Func Offset: 0xa8
	// Line 405, Address: 0x12c15c, Func Offset: 0xbc
	// Line 406, Address: 0x12c168, Func Offset: 0xc8
	// Line 407, Address: 0x12c184, Func Offset: 0xe4
	// Line 408, Address: 0x12c194, Func Offset: 0xf4
	// Line 409, Address: 0x12c19c, Func Offset: 0xfc
	// Line 410, Address: 0x12c1a4, Func Offset: 0x104
	// Line 411, Address: 0x12c1a8, Func Offset: 0x108
	// Line 414, Address: 0x12c1bc, Func Offset: 0x11c
	// Line 415, Address: 0x12c1c8, Func Offset: 0x128
	// Line 416, Address: 0x12c1cc, Func Offset: 0x12c
	// Line 417, Address: 0x12c1d4, Func Offset: 0x134
	// Line 418, Address: 0x12c1d8, Func Offset: 0x138
	// Line 419, Address: 0x12c1e0, Func Offset: 0x140
	// Line 420, Address: 0x12c1e4, Func Offset: 0x144
	// Line 421, Address: 0x12c1ec, Func Offset: 0x14c
	// Line 422, Address: 0x12c1f4, Func Offset: 0x154
	// Line 423, Address: 0x12c1fc, Func Offset: 0x15c
	// Line 424, Address: 0x12c200, Func Offset: 0x160
	// Line 425, Address: 0x12c208, Func Offset: 0x168
	// Line 426, Address: 0x12c21c, Func Offset: 0x17c
	// Func End, Address: 0x12c224, Func Offset: 0x184
}

// 
// Start address: 0x12c230
void InitData1()
{
	_anon4* toSPR;
	int initialized;
	// Line 433, Address: 0x12c230, Func Offset: 0
	// Line 435, Address: 0x12c238, Func Offset: 0x8
	// Line 436, Address: 0x12c248, Func Offset: 0x18
	// Line 437, Address: 0x12c258, Func Offset: 0x28
	// Line 438, Address: 0x12c268, Func Offset: 0x38
	// Line 440, Address: 0x12c278, Func Offset: 0x48
	// Line 445, Address: 0x12c284, Func Offset: 0x54
	// Line 447, Address: 0x12c2a0, Func Offset: 0x70
	// Line 448, Address: 0x12c2ac, Func Offset: 0x7c
	// Line 449, Address: 0x12c2bc, Func Offset: 0x8c
	// Line 451, Address: 0x12c2d4, Func Offset: 0xa4
	// Line 453, Address: 0x12c2f0, Func Offset: 0xc0
	// Func End, Address: 0x12c300, Func Offset: 0xd0
}

// 
// Start address: 0x12c300
void MakeData1()
{
	Q c;
	unsigned long tex0;
	SDrawData* bdraw;
	SDrawData* sdraw;
	unsigned long tex0;
	EDrawData* edraw;
	DSetupData* data;
	SMapData* data;
	EMapData* data;
	LambertData* data;
	ELightData* data;
	Light* light;
	int i;
	int n_extras;
	PLightData* data;
	int i;
	int n_parallels;
	unsigned int fogcol;
	float offset[4];
	float mag[4];
	// Line 460, Address: 0x12c300, Func Offset: 0
	// Line 461, Address: 0x12c31c, Func Offset: 0x1c
	// Line 463, Address: 0x12c324, Func Offset: 0x24
	// Line 466, Address: 0x12c32c, Func Offset: 0x2c
	// Line 470, Address: 0x12c358, Func Offset: 0x58
	// Line 472, Address: 0x12c364, Func Offset: 0x64
	// Line 473, Address: 0x12c370, Func Offset: 0x70
	// Line 477, Address: 0x12c394, Func Offset: 0x94
	// Line 479, Address: 0x12c3a4, Func Offset: 0xa4
	// Line 480, Address: 0x12c3b4, Func Offset: 0xb4
	// Line 485, Address: 0x12c3c4, Func Offset: 0xc4
	// Line 487, Address: 0x12c3d0, Func Offset: 0xd0
	// Line 488, Address: 0x12c3dc, Func Offset: 0xdc
	// Line 489, Address: 0x12c3ec, Func Offset: 0xec
	// Line 494, Address: 0x12c410, Func Offset: 0x110
	// Line 495, Address: 0x12c420, Func Offset: 0x120
	// Line 497, Address: 0x12c430, Func Offset: 0x130
	// Line 498, Address: 0x12c440, Func Offset: 0x140
	// Line 499, Address: 0x12c448, Func Offset: 0x148
	// Line 500, Address: 0x12c450, Func Offset: 0x150
	// Line 501, Address: 0x12c458, Func Offset: 0x158
	// Line 502, Address: 0x12c460, Func Offset: 0x160
	// Line 507, Address: 0x12c474, Func Offset: 0x174
	// Line 511, Address: 0x12c490, Func Offset: 0x190
	// Line 513, Address: 0x12c4a0, Func Offset: 0x1a0
	// Line 517, Address: 0x12c4b0, Func Offset: 0x1b0
	// Line 526, Address: 0x12c4c4, Func Offset: 0x1c4
	// Line 527, Address: 0x12c4e0, Func Offset: 0x1e0
	// Line 528, Address: 0x12c4f4, Func Offset: 0x1f4
	// Line 529, Address: 0x12c508, Func Offset: 0x208
	// Line 535, Address: 0x12c51c, Func Offset: 0x21c
	// Line 541, Address: 0x12c538, Func Offset: 0x238
	// Line 548, Address: 0x12c544, Func Offset: 0x244
	// Line 562, Address: 0x12c560, Func Offset: 0x260
	// Line 563, Address: 0x12c57c, Func Offset: 0x27c
	// Line 564, Address: 0x12c598, Func Offset: 0x298
	// Line 565, Address: 0x12c5b4, Func Offset: 0x2b4
	// Line 572, Address: 0x12c5d0, Func Offset: 0x2d0
	// Line 573, Address: 0x12c5ec, Func Offset: 0x2ec
	// Line 575, Address: 0x12c600, Func Offset: 0x300
	// Line 576, Address: 0x12c604, Func Offset: 0x304
	// Line 582, Address: 0x12c610, Func Offset: 0x310
	// Line 583, Address: 0x12c628, Func Offset: 0x328
	// Line 584, Address: 0x12c638, Func Offset: 0x338
	// Line 587, Address: 0x12c64c, Func Offset: 0x34c
	// Line 588, Address: 0x12c658, Func Offset: 0x358
	// Line 589, Address: 0x12c65c, Func Offset: 0x35c
	// Line 590, Address: 0x12c664, Func Offset: 0x364
	// Line 591, Address: 0x12c668, Func Offset: 0x368
	// Line 592, Address: 0x12c670, Func Offset: 0x370
	// Line 597, Address: 0x12c674, Func Offset: 0x374
	// Line 598, Address: 0x12c680, Func Offset: 0x380
	// Line 599, Address: 0x12c68c, Func Offset: 0x38c
	// Line 600, Address: 0x12c698, Func Offset: 0x398
	// Line 602, Address: 0x12c6a4, Func Offset: 0x3a4
	// Func End, Address: 0x12c6c8, Func Offset: 0x3c8
}

// 
// Start address: 0x12c6d0
void InitEnv1(_anon0* pk)
{
	Init_Gs_Packet packet4main;
	// Line 609, Address: 0x12c6d0, Func Offset: 0
	// Line 668, Address: 0x12c6e0, Func Offset: 0x10
	// Line 669, Address: 0x12c6ec, Func Offset: 0x1c
	// Line 673, Address: 0x12c6fc, Func Offset: 0x2c
	// Line 692, Address: 0x12c724, Func Offset: 0x54
	// Func End, Address: 0x12c738, Func Offset: 0x68
}

// 
// Start address: 0x12c740
void TiniEnv(_anon0* pk)
{
	Packet packet;
	// Line 700, Address: 0x12c740, Func Offset: 0
	// Line 724, Address: 0x12c748, Func Offset: 0x8
	// Line 726, Address: 0x12c76c, Func Offset: 0x2c
	// Func End, Address: 0x12c77c, Func Offset: 0x3c
}

// 
// Start address: 0x12c780
void MakeVu1PartTransferPacket(Part* part, _anon0* pk)
{
	float src[4];
	int pair_no;
	int i;
	int dst_top;
	unsigned short* pairs;
	int n_skeleton_pairs;
	float envelope_matrices[4][4];
	float src[4];
	int skeleton_no;
	int i;
	int dst_top;
	unsigned short* skeletons;
	int n_skeletons;
	float matrices[4][4];
	unsigned int n;
	unsigned int dst;
	unsigned int src;
	ClusterData* cluster_data;
	int i;
	float cluster_nodes[4];
	ClusterData* cluster_data_top;
	int n_cluster_data;
	// Line 733, Address: 0x12c780, Func Offset: 0
	// Line 735, Address: 0x12c7ac, Func Offset: 0x2c
	// Line 739, Address: 0x12c7d0, Func Offset: 0x50
	// Line 740, Address: 0x12c7d4, Func Offset: 0x54
	// Line 741, Address: 0x12c7dc, Func Offset: 0x5c
	// Line 743, Address: 0x12c7e4, Func Offset: 0x64
	// Line 744, Address: 0x12c7f0, Func Offset: 0x70
	// Line 745, Address: 0x12c800, Func Offset: 0x80
	// Line 746, Address: 0x12c804, Func Offset: 0x84
	// Line 747, Address: 0x12c808, Func Offset: 0x88
	// Line 748, Address: 0x12c80c, Func Offset: 0x8c
	// Line 751, Address: 0x12c83c, Func Offset: 0xbc
	// Line 756, Address: 0x12c84c, Func Offset: 0xcc
	// Line 757, Address: 0x12c854, Func Offset: 0xd4
	// Line 758, Address: 0x12c858, Func Offset: 0xd8
	// Line 759, Address: 0x12c860, Func Offset: 0xe0
	// Line 761, Address: 0x12c864, Func Offset: 0xe4
	// Line 762, Address: 0x12c870, Func Offset: 0xf0
	// Line 763, Address: 0x12c87c, Func Offset: 0xfc
	// Line 765, Address: 0x12c884, Func Offset: 0x104
	// Line 768, Address: 0x12c8b0, Func Offset: 0x130
	// Line 773, Address: 0x12c8c4, Func Offset: 0x144
	// Line 774, Address: 0x12c8d0, Func Offset: 0x150
	// Line 775, Address: 0x12c8d4, Func Offset: 0x154
	// Line 776, Address: 0x12c8dc, Func Offset: 0x15c
	// Line 778, Address: 0x12c8e0, Func Offset: 0x160
	// Line 779, Address: 0x12c8ec, Func Offset: 0x16c
	// Line 780, Address: 0x12c8f8, Func Offset: 0x178
	// Line 782, Address: 0x12c900, Func Offset: 0x180
	// Line 785, Address: 0x12c92c, Func Offset: 0x1ac
	// Line 787, Address: 0x12c93c, Func Offset: 0x1bc
	// Func End, Address: 0x12c968, Func Offset: 0x1e8
}

// 
// Start address: 0x12c970
void MakeLambertShadingPacket(Part* part, _anon0* pk)
{
	Data_4* lf_data;
	float brightness;
	Light* light;
	int i;
	int n_extras;
	int n_parallels;
	// Line 798, Address: 0x12c970, Func Offset: 0
	// Line 799, Address: 0x12c998, Func Offset: 0x28
	// Line 800, Address: 0x12c9a4, Func Offset: 0x34
	// Line 804, Address: 0x12c9b0, Func Offset: 0x40
	// Line 805, Address: 0x12c9bc, Func Offset: 0x4c
	// Line 808, Address: 0x12c9fc, Func Offset: 0x8c
	// Line 809, Address: 0x12ca0c, Func Offset: 0x9c
	// Line 810, Address: 0x12ca28, Func Offset: 0xb8
	// Line 811, Address: 0x12ca3c, Func Offset: 0xcc
	// Line 812, Address: 0x12ca50, Func Offset: 0xe0
	// Line 815, Address: 0x12ca64, Func Offset: 0xf4
	// Line 816, Address: 0x12ca70, Func Offset: 0x100
	// Line 817, Address: 0x12ca80, Func Offset: 0x110
	// Line 820, Address: 0x12cac0, Func Offset: 0x150
	// Line 821, Address: 0x12cad0, Func Offset: 0x160
	// Line 822, Address: 0x12caec, Func Offset: 0x17c
	// Line 824, Address: 0x12cb10, Func Offset: 0x1a0
	// Line 825, Address: 0x12cb24, Func Offset: 0x1b4
	// Line 827, Address: 0x12cb2c, Func Offset: 0x1bc
	// Line 828, Address: 0x12cb40, Func Offset: 0x1d0
	// Line 830, Address: 0x12cb48, Func Offset: 0x1d8
	// Line 832, Address: 0x12cb6c, Func Offset: 0x1fc
	// Line 833, Address: 0x12cb80, Func Offset: 0x210
	// Line 875, Address: 0x12cb94, Func Offset: 0x224
	// Line 878, Address: 0x12cba0, Func Offset: 0x230
	// Line 881, Address: 0x12cbd4, Func Offset: 0x264
	// Line 882, Address: 0x12cbe4, Func Offset: 0x274
	// Line 883, Address: 0x12cbf8, Func Offset: 0x288
	// Line 884, Address: 0x12cc18, Func Offset: 0x2a8
	// Line 885, Address: 0x12cc2c, Func Offset: 0x2bc
	// Line 886, Address: 0x12cc5c, Func Offset: 0x2ec
	// Line 889, Address: 0x12cc6c, Func Offset: 0x2fc
	// Line 891, Address: 0x12cc74, Func Offset: 0x304
	// Line 907, Address: 0x12cc84, Func Offset: 0x314
	// Line 912, Address: 0x12cc8c, Func Offset: 0x31c
	// Line 913, Address: 0x12cc98, Func Offset: 0x328
	// Line 914, Address: 0x12cca4, Func Offset: 0x334
	// Line 915, Address: 0x12ccc0, Func Offset: 0x350
	// Line 916, Address: 0x12ccd4, Func Offset: 0x364
	// Line 918, Address: 0x12cce8, Func Offset: 0x378
	// Func End, Address: 0x12cd10, Func Offset: 0x3a0
}

// 
// Start address: 0x12cd10
void MakeNormalPacket(Part* part, _anon0* pk)
{
	NDrawData* data;
	NDrawData* spr;
	TextureParam* texture;
	TextPosParam* text_pos;
	int text_pos_index;
	int i;
	_anon4* fromSPR;
	int mpg;
	TextureParam* texture_params;
	TextPosParam* text_pos_params;
	unsigned short* text_pos_indices;
	int n_textures;
	// Line 925, Address: 0x12cd10, Func Offset: 0
	// Line 926, Address: 0x12cd40, Func Offset: 0x30
	// Line 927, Address: 0x12cd48, Func Offset: 0x38
	// Line 928, Address: 0x12cd54, Func Offset: 0x44
	// Line 929, Address: 0x12cd64, Func Offset: 0x54
	// Line 930, Address: 0x12cd6c, Func Offset: 0x5c
	// Line 932, Address: 0x12cd80, Func Offset: 0x70
	// Line 935, Address: 0x12cd90, Func Offset: 0x80
	// Line 936, Address: 0x12cd9c, Func Offset: 0x8c
	// Line 937, Address: 0x12cdac, Func Offset: 0x9c
	// Line 938, Address: 0x12cdb4, Func Offset: 0xa4
	// Line 939, Address: 0x12cdbc, Func Offset: 0xac
	// Line 941, Address: 0x12cde4, Func Offset: 0xd4
	// Line 942, Address: 0x12cdf4, Func Offset: 0xe4
	// Line 943, Address: 0x12ce04, Func Offset: 0xf4
	// Line 944, Address: 0x12ce20, Func Offset: 0x110
	// Line 945, Address: 0x12ce30, Func Offset: 0x120
	// Line 951, Address: 0x12ce64, Func Offset: 0x154
	// Line 953, Address: 0x12ce6c, Func Offset: 0x15c
	// Line 954, Address: 0x12ce74, Func Offset: 0x164
	// Line 956, Address: 0x12ce7c, Func Offset: 0x16c
	// Line 957, Address: 0x12ce84, Func Offset: 0x174
	// Line 959, Address: 0x12ce9c, Func Offset: 0x18c
	// Line 960, Address: 0x12ceb8, Func Offset: 0x1a8
	// Line 961, Address: 0x12cecc, Func Offset: 0x1bc
	// Line 962, Address: 0x12cee0, Func Offset: 0x1d0
	// Func End, Address: 0x12cf14, Func Offset: 0x204
}

// 
// Start address: 0x12cf20
void MakeEnvironPacket(Part* part, _anon0* pk)
{
	int mpg;
	Data_0* data;
	// Line 970, Address: 0x12cf20, Func Offset: 0
	// Line 976, Address: 0x12cf3c, Func Offset: 0x1c
	// Line 977, Address: 0x12cf50, Func Offset: 0x30
	// Line 978, Address: 0x12cf60, Func Offset: 0x40
	// Line 979, Address: 0x12cf70, Func Offset: 0x50
	// Line 982, Address: 0x12cfa8, Func Offset: 0x88
	// Line 983, Address: 0x12cfb8, Func Offset: 0x98
	// Line 984, Address: 0x12cfcc, Func Offset: 0xac
	// Line 985, Address: 0x12cfec, Func Offset: 0xcc
	// Line 986, Address: 0x12cffc, Func Offset: 0xdc
	// Line 987, Address: 0x12d02c, Func Offset: 0x10c
	// Line 988, Address: 0x12d034, Func Offset: 0x114
	// Line 989, Address: 0x12d038, Func Offset: 0x118
	// Line 990, Address: 0x12d03c, Func Offset: 0x11c
	// Line 991, Address: 0x12d044, Func Offset: 0x124
	// Line 992, Address: 0x12d060, Func Offset: 0x140
	// Line 993, Address: 0x12d074, Func Offset: 0x154
	// Func End, Address: 0x12d090, Func Offset: 0x170
}

// 
// Start address: 0x12d090
void MakeSpecularPacket(Part* part, _anon0* pk)
{
	int mpg;
	Data_1* data;
	// Line 1001, Address: 0x12d090, Func Offset: 0
	// Line 1007, Address: 0x12d0b0, Func Offset: 0x20
	// Line 1008, Address: 0x12d0c4, Func Offset: 0x34
	// Line 1009, Address: 0x12d0d4, Func Offset: 0x44
	// Line 1010, Address: 0x12d0e4, Func Offset: 0x54
	// Line 1013, Address: 0x12d11c, Func Offset: 0x8c
	// Line 1014, Address: 0x12d12c, Func Offset: 0x9c
	// Line 1015, Address: 0x12d140, Func Offset: 0xb0
	// Line 1016, Address: 0x12d160, Func Offset: 0xd0
	// Line 1017, Address: 0x12d174, Func Offset: 0xe4
	// Line 1020, Address: 0x12d1a4, Func Offset: 0x114
	// Line 1022, Address: 0x12d1b4, Func Offset: 0x124
	// Line 1026, Address: 0x12d1bc, Func Offset: 0x12c
	// Line 1027, Address: 0x12d1d8, Func Offset: 0x148
	// Line 1028, Address: 0x12d1ec, Func Offset: 0x15c
	// Func End, Address: 0x12d20c, Func Offset: 0x17c
}

// 
// Start address: 0x12d210
void MakeBaseSpecularPacket(Part* part, _anon0* pk)
{
	int mpg;
	Data_3* data;
	// Line 1035, Address: 0x12d210, Func Offset: 0
	// Line 1041, Address: 0x12d230, Func Offset: 0x20
	// Line 1042, Address: 0x12d244, Func Offset: 0x34
	// Line 1043, Address: 0x12d254, Func Offset: 0x44
	// Line 1044, Address: 0x12d264, Func Offset: 0x54
	// Line 1047, Address: 0x12d29c, Func Offset: 0x8c
	// Line 1048, Address: 0x12d2ac, Func Offset: 0x9c
	// Line 1049, Address: 0x12d2c0, Func Offset: 0xb0
	// Line 1050, Address: 0x12d2e0, Func Offset: 0xd0
	// Line 1051, Address: 0x12d2f4, Func Offset: 0xe4
	// Line 1052, Address: 0x12d324, Func Offset: 0x114
	// Line 1053, Address: 0x12d334, Func Offset: 0x124
	// Line 1054, Address: 0x12d33c, Func Offset: 0x12c
	// Line 1055, Address: 0x12d358, Func Offset: 0x148
	// Line 1056, Address: 0x12d36c, Func Offset: 0x15c
	// Func End, Address: 0x12d38c, Func Offset: 0x17c
}

// 
// Start address: 0x12d390
void MakeOverPacket(Part* part, _anon0* pk)
{
	NDrawData* data;
	NDrawData* spr;
	TextureParam* texture;
	TextPosParam* text_pos;
	int text_pos_index;
	int i;
	_anon4* fromSPR;
	int mpg;
	TextureParam* texture_params;
	TextPosParam* text_pos_params;
	unsigned short* text_pos_indices;
	int n_textures;
	// Line 1063, Address: 0x12d390, Func Offset: 0
	// Line 1064, Address: 0x12d3c0, Func Offset: 0x30
	// Line 1065, Address: 0x12d3c8, Func Offset: 0x38
	// Line 1066, Address: 0x12d3d4, Func Offset: 0x44
	// Line 1067, Address: 0x12d3e4, Func Offset: 0x54
	// Line 1068, Address: 0x12d3ec, Func Offset: 0x5c
	// Line 1069, Address: 0x12d400, Func Offset: 0x70
	// Line 1072, Address: 0x12d410, Func Offset: 0x80
	// Line 1073, Address: 0x12d41c, Func Offset: 0x8c
	// Line 1074, Address: 0x12d42c, Func Offset: 0x9c
	// Line 1075, Address: 0x12d434, Func Offset: 0xa4
	// Line 1076, Address: 0x12d43c, Func Offset: 0xac
	// Line 1078, Address: 0x12d468, Func Offset: 0xd8
	// Line 1079, Address: 0x12d478, Func Offset: 0xe8
	// Line 1080, Address: 0x12d488, Func Offset: 0xf8
	// Line 1081, Address: 0x12d4a4, Func Offset: 0x114
	// Line 1082, Address: 0x12d4b4, Func Offset: 0x124
	// Line 1083, Address: 0x12d4e4, Func Offset: 0x154
	// Line 1084, Address: 0x12d4ec, Func Offset: 0x15c
	// Line 1085, Address: 0x12d4f4, Func Offset: 0x164
	// Line 1087, Address: 0x12d4fc, Func Offset: 0x16c
	// Line 1088, Address: 0x12d504, Func Offset: 0x174
	// Line 1090, Address: 0x12d51c, Func Offset: 0x18c
	// Line 1091, Address: 0x12d538, Func Offset: 0x1a8
	// Line 1093, Address: 0x12d54c, Func Offset: 0x1bc
	// Line 1094, Address: 0x12d560, Func Offset: 0x1d0
	// Func End, Address: 0x12d594, Func Offset: 0x204
}

// 
// Start address: 0x12d5a0
void MakeDrawPacket(Part* part, _anon0* pk)
{
	<unknown fundamental type (0xa510)>* gifad;
	// Line 1101, Address: 0x12d5a0, Func Offset: 0
	// Line 1103, Address: 0x12d5b8, Func Offset: 0x18
	// Line 1106, Address: 0x12d5f0, Func Offset: 0x50
	// Line 1107, Address: 0x12d600, Func Offset: 0x60
	// Line 1109, Address: 0x12d61c, Func Offset: 0x7c
	// Line 1110, Address: 0x12d630, Func Offset: 0x90
	// Line 1112, Address: 0x12d644, Func Offset: 0xa4
	// Line 1113, Address: 0x12d650, Func Offset: 0xb0
	// Line 1115, Address: 0x12d660, Func Offset: 0xc0
	// Line 1116, Address: 0x12d66c, Func Offset: 0xcc
	// Line 1119, Address: 0x12d67c, Func Offset: 0xdc
	// Line 1123, Address: 0x12d68c, Func Offset: 0xec
	// Line 1124, Address: 0x12d698, Func Offset: 0xf8
	// Line 1128, Address: 0x12d6b8, Func Offset: 0x118
	// Line 1132, Address: 0x12d6c8, Func Offset: 0x128
	// Line 1133, Address: 0x12d6d4, Func Offset: 0x134
	// Line 1137, Address: 0x12d6f4, Func Offset: 0x154
	// Line 1139, Address: 0x12d6fc, Func Offset: 0x15c
	// Line 1140, Address: 0x12d70c, Func Offset: 0x16c
	// Line 1142, Address: 0x12d71c, Func Offset: 0x17c
	// Line 1144, Address: 0x12d72c, Func Offset: 0x18c
	// Func End, Address: 0x12d744, Func Offset: 0x1a4
}

// 
// Start address: 0x12d750
void DrawPart1(Part* part, _anon0* pk)
{
	Data_2* data;
	// Line 1152, Address: 0x12d750, Func Offset: 0
	// Line 1153, Address: 0x12d768, Func Offset: 0x18
	// Line 1163, Address: 0x12d774, Func Offset: 0x24
	// Line 1164, Address: 0x12d788, Func Offset: 0x38
	// Line 1165, Address: 0x12d798, Func Offset: 0x48
	// Line 1167, Address: 0x12d7a8, Func Offset: 0x58
	// Line 1172, Address: 0x12d7b4, Func Offset: 0x64
	// Line 1175, Address: 0x12d7c4, Func Offset: 0x74
	// Line 1176, Address: 0x12d7d4, Func Offset: 0x84
	// Line 1177, Address: 0x12d7ec, Func Offset: 0x9c
	// Line 1178, Address: 0x12d7fc, Func Offset: 0xac
	// Line 1179, Address: 0x12d818, Func Offset: 0xc8
	// Line 1180, Address: 0x12d828, Func Offset: 0xd8
	// Line 1181, Address: 0x12d844, Func Offset: 0xf4
	// Line 1182, Address: 0x12d860, Func Offset: 0x110
	// Line 1183, Address: 0x12d87c, Func Offset: 0x12c
	// Line 1184, Address: 0x12d898, Func Offset: 0x148
	// Line 1185, Address: 0x12d8a0, Func Offset: 0x150
	// Line 1186, Address: 0x12d8b0, Func Offset: 0x160
	// Line 1187, Address: 0x12d8c0, Func Offset: 0x170
	// Line 1188, Address: 0x12d8d0, Func Offset: 0x180
	// Line 1191, Address: 0x12d8e0, Func Offset: 0x190
	// Line 1192, Address: 0x12d8f4, Func Offset: 0x1a4
	// Line 1195, Address: 0x12d908, Func Offset: 0x1b8
	// Line 1205, Address: 0x12d944, Func Offset: 0x1f4
	// Line 1206, Address: 0x12d954, Func Offset: 0x204
	// Line 1208, Address: 0x12d95c, Func Offset: 0x20c
	// Line 1213, Address: 0x12d984, Func Offset: 0x234
	// Line 1214, Address: 0x12d990, Func Offset: 0x240
	// Line 1217, Address: 0x12d9c8, Func Offset: 0x278
	// Line 1218, Address: 0x12d9d8, Func Offset: 0x288
	// Line 1219, Address: 0x12d9f4, Func Offset: 0x2a4
	// Line 1220, Address: 0x12da08, Func Offset: 0x2b8
	// Line 1225, Address: 0x12da1c, Func Offset: 0x2cc
	// Line 1231, Address: 0x12da2c, Func Offset: 0x2dc
	// Line 1234, Address: 0x12da60, Func Offset: 0x310
	// Line 1235, Address: 0x12da70, Func Offset: 0x320
	// Line 1236, Address: 0x12da84, Func Offset: 0x334
	// Line 1237, Address: 0x12daa4, Func Offset: 0x354
	// Line 1238, Address: 0x12dab4, Func Offset: 0x364
	// Line 1241, Address: 0x12dae4, Func Offset: 0x394
	// Line 1247, Address: 0x12daec, Func Offset: 0x39c
	// Line 1248, Address: 0x12db08, Func Offset: 0x3b8
	// Line 1249, Address: 0x12db1c, Func Offset: 0x3cc
	// Line 1253, Address: 0x12db30, Func Offset: 0x3e0
	// Line 1254, Address: 0x12db40, Func Offset: 0x3f0
	// Func End, Address: 0x12db58, Func Offset: 0x408
}

// 
// Start address: 0x12db60
void DrawParts1(sh_Model* model, ModelWork* work)
{
	int en;
	int st;
	void* pktop;
	int itex;
	int i;
	Part* part;
	Part* parts_top;
	int n_parts;
	_anon0* pk;
	_anon0 packet;
	<unknown fundamental type (0xa510)>* packet_buffer;
	// Line 1263, Address: 0x12db60, Func Offset: 0
	// Line 1265, Address: 0x12db8c, Func Offset: 0x2c
	// Line 1267, Address: 0x12db98, Func Offset: 0x38
	// Line 1269, Address: 0x12db9c, Func Offset: 0x3c
	// Line 1273, Address: 0x12dba4, Func Offset: 0x44
	// Line 1275, Address: 0x12dbb0, Func Offset: 0x50
	// Line 1276, Address: 0x12dbbc, Func Offset: 0x5c
	// Line 1277, Address: 0x12dbc4, Func Offset: 0x64
	// Line 1279, Address: 0x12dbe4, Func Offset: 0x84
	// Line 1282, Address: 0x12dbe8, Func Offset: 0x88
	// Line 1284, Address: 0x12dc00, Func Offset: 0xa0
	// Line 1286, Address: 0x12dc0c, Func Offset: 0xac
	// Line 1287, Address: 0x12dc1c, Func Offset: 0xbc
	// Line 1289, Address: 0x12dc2c, Func Offset: 0xcc
	// Line 1295, Address: 0x12dc34, Func Offset: 0xd4
	// Line 1298, Address: 0x12dc4c, Func Offset: 0xec
	// Line 1299, Address: 0x12dc5c, Func Offset: 0xfc
	// Line 1302, Address: 0x12dc7c, Func Offset: 0x11c
	// Line 1303, Address: 0x12dc8c, Func Offset: 0x12c
	// Line 1304, Address: 0x12dc9c, Func Offset: 0x13c
	// Line 1306, Address: 0x12dcac, Func Offset: 0x14c
	// Line 1308, Address: 0x12dcc8, Func Offset: 0x168
	// Line 1310, Address: 0x12dccc, Func Offset: 0x16c
	// Line 1313, Address: 0x12dce4, Func Offset: 0x184
	// Line 1314, Address: 0x12dcf0, Func Offset: 0x190
	// Line 1315, Address: 0x12dd00, Func Offset: 0x1a0
	// Line 1316, Address: 0x12dd10, Func Offset: 0x1b0
	// Line 1317, Address: 0x12dd20, Func Offset: 0x1c0
	// Line 1323, Address: 0x12dd2c, Func Offset: 0x1cc
	// Line 1327, Address: 0x12dd48, Func Offset: 0x1e8
	// Func End, Address: 0x12dd74, Func Offset: 0x214
}

// 
// Start address: 0x12dd80
void Model3DrawVu1Parts(Model* model, ModelWork* work)
{
	// Line 1407, Address: 0x12dd80, Func Offset: 0
	// Line 1408, Address: 0x12dd88, Func Offset: 0x8
	// Line 1410, Address: 0x12dd9c, Func Offset: 0x1c
	// Line 1412, Address: 0x12dda4, Func Offset: 0x24
	// Func End, Address: 0x12ddb4, Func Offset: 0x34
}

