typedef struct SDrawData;
typedef struct NDrawData;
typedef struct ModelWork;
typedef struct Init_Gs_Packet;
typedef struct Packet;
typedef struct _anon0;
typedef struct _anon1;
typedef struct _sceDmaTag;
typedef struct ClusterData;
typedef struct EMapData;
typedef struct Data_0;
typedef struct _anon2;
typedef struct _anon3;
typedef struct Part;
typedef struct _anon4;
typedef union Q_WORDDATA;
typedef struct _anon5;
typedef struct AllData;
typedef union Q;
typedef struct Data_1;
typedef struct TextureParam;
typedef struct _anon6;
typedef struct _anon7;
typedef struct SMapData;
typedef struct PLightData;
typedef struct SprData;
typedef struct DSetupData;
typedef struct _anon8;
typedef struct _anon9;
typedef struct sh_Model;
typedef struct ELightData;
typedef struct _anon10;
typedef struct shGsDrawEnv;
typedef struct TextPosParam;
typedef struct LambertData;
typedef struct Data_2;
typedef struct _anon11;
typedef struct Data_3;
typedef struct shBattleFight;
typedef struct _anon12;
typedef struct EDrawData;
typedef struct shGsStencilDrawEnv;
typedef struct Data_4;
typedef struct _anon13;
typedef struct Light;
typedef struct _anon14;
typedef struct shBattleShot;
typedef struct _anon15;
typedef struct _anon16;
typedef struct _anon17;
typedef struct Model;
typedef struct _anon18;
typedef struct ModelCommonWork;
typedef struct _anon19;
typedef struct shGsLoopEnv;
typedef struct _anon20;
typedef struct _anon21;
typedef struct shAttackInfo;
typedef struct shGsTinyDrawEnv;
typedef union _anon22;
typedef struct Model3Junk;
typedef struct _anon23;
typedef struct shGsAllEnv;

typedef int(*type_79)(void*, void*, void*);

typedef unsigned int type_0[3];
typedef unsigned int type_1[3];
typedef _anon17 type_2[3];
typedef unsigned int type_3[3];
typedef shGsDrawEnv type_4[3];
typedef AllData type_5[2];
typedef unsigned int type_6[3];
typedef shGsStencilDrawEnv type_7[3];
typedef float type_8[4];
typedef shGsTinyDrawEnv type_9[6];
typedef unsigned int type_10[3];
typedef Q_WORDDATA type_11[10];
typedef float type_12[4];
typedef Q_WORDDATA type_13[10];
typedef unsigned int type_14[3];
typedef Q_WORDDATA type_15[10];
typedef unsigned int type_16[3];
typedef Q_WORDDATA type_17[10];
typedef unsigned int type_18[4];
typedef Q_WORDDATA type_19[10];
typedef unsigned int type_20[4];
typedef Q_WORDDATA type_21[10];
typedef Q_WORDDATA type_22[10];
typedef unsigned long type_23[2];
typedef unsigned int type_24[3];
typedef unsigned int type_25[4];
typedef Q_WORDDATA type_26[8];
typedef unsigned short type_27[8];
typedef Q_WORDDATA type_28[2];
typedef unsigned char type_29[16];
typedef Q_WORDDATA type_30[2];
typedef long type_31[2];
typedef Q_WORDDATA type_32[2];
typedef int type_33[4];
typedef <unknown fundamental type (0xa510)> type_34[0];
typedef short type_35[8];
typedef Q_WORDDATA type_36[2];
typedef NDrawData type_37[2];
typedef int type_38[4];
typedef char type_39[16];
typedef Q_WORDDATA type_40[2];
typedef NDrawData type_41[2];
typedef Q_WORDDATA type_42[2];
typedef float type_43[4];
typedef Q_WORDDATA type_44[2];
typedef float type_45[4][4];
typedef Q_WORDDATA type_46[2];
typedef Q_WORDDATA type_47[2];
typedef unsigned int type_48[4];
typedef Q_WORDDATA type_49[5];
typedef Q_WORDDATA type_50[2];
typedef unsigned short type_51[8];
typedef Q_WORDDATA type_52[2];
typedef float type_53[4];
typedef Q_WORDDATA type_54[2];
typedef unsigned char type_55[16];
typedef Q_WORDDATA type_56[5];
typedef int type_57[4];
typedef Q_WORDDATA type_58[2];
typedef short type_59[8];
typedef Q_WORDDATA type_60[2];
typedef char type_61[16];
typedef Q_WORDDATA type_62[2];
typedef unsigned long type_63[2];
typedef Q_WORDDATA type_64[2];
typedef void* type_65[4];
typedef Q_WORDDATA type_66[2];
typedef int type_67[4];
typedef Q_WORDDATA type_68[2];
typedef Q_WORDDATA type_69[2];
typedef Q_WORDDATA type_70[2];
typedef float type_71[4];
typedef Q_WORDDATA type_72[6];
typedef float type_73[4][2];
typedef Q_WORDDATA type_74[2];
typedef shAttackInfo type_75[46];
typedef float type_76[4];
typedef Q_WORDDATA type_77[6];
typedef float type_78[4][2];
typedef float type_80[4][4][128];
typedef unsigned int type_81[3];
typedef float type_82[4][4][256];
typedef unsigned int type_83[3];
typedef float type_84[4][2048];
typedef unsigned int type_85[3];
typedef unsigned int type_86[24];
typedef unsigned int type_87[3];
typedef unsigned int type_88[3];
typedef TextPosParam type_89[64];
typedef unsigned short type_90[8];
typedef unsigned int type_91[2];
typedef PLightData type_92[4];
typedef ELightData type_93[8];
typedef unsigned char type_94[2];
typedef <unknown fundamental type (0xa510)> type_95[4];

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

struct Packet
{
	unsigned long giftag_tag;
	unsigned long giftag_reg;
	unsigned long TexFlush_D;
	unsigned long TexFlush_A;
	unsigned long Clamp_D;
	unsigned long Clamp_A;
};

struct _anon0
{
	struct
	{
		unsigned long AC : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon1
{
	_anon11 testa;
	long testaaddr;
	_anon21 prim;
	long primaddr;
	_anon2 rgbaq;
	long rgbaqaddr;
	_anon18 xyz2a;
	long xyz2aaddr;
	_anon18 xyz2b;
	long xyz2baddr;
	_anon11 testb;
	long testbaddr;
};

struct _sceDmaTag
{
	unsigned short qwc;
	unsigned char mark;
	unsigned char id;
	_sceDmaTag* next;
	unsigned int p[2];
};

struct ClusterData
{
	unsigned short src;
	unsigned short dst;
	unsigned short n;
};

struct EMapData
{
	float vwm[4][4];
	float mag[4];
	float offset[4];
};

struct Data_0
{
	float diffuse[4];
	float ambient[4];
	float param[4];
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

struct _anon3
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

struct _anon4
{
	struct
	{
		unsigned long DTHE : 1;
		unsigned long pad01 : 63;
	};
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

struct _anon5
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

struct Data_1
{
	float param[4];
};

struct TextureParam
{
	unsigned long clamp;
	unsigned long tex1;
};

struct _anon6
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

struct _anon7
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

struct SMapData
{
	float nhm[4][4];
};

struct PLightData
{
	float nlm[4][4];
	float lcm[4][4];
};

struct SprData
{
	NDrawData ndraw[2];
	NDrawData odraw[2];
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

struct _anon8
{
	_anon23 chcr;
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

struct _anon9
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

struct ELightData
{
	float pos[4];
	float dir[4];
	float col[4];
	float param[4];
};

struct _anon10
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

struct shGsDrawEnv
{
	_anon16 giftag;
	_anon19 draw;
	Q_WORDDATA drawq2[5];
	_anon1 clear;
	_anon16 giftag_nc;
	_anon19 draw_nc;
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

struct TextPosParam
{
	unsigned long tex0;
};

struct LambertData
{
	float nlm[4][4];
	float lcm[4][4];
	float rgba_max[4];
	float global_ambient[4];
};

struct Data_2
{
	Q rgba;
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

struct Data_3
{
	Q specular;
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct _anon12
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

struct shGsStencilDrawEnv
{
	_anon16 giftag;
	_anon19 draw;
	Q_WORDDATA alpha1;
	Q_WORDDATA drawq2[6];
	_anon1 clear;
	Q_WORDDATA frame;
	_anon16 giftag_nc;
	_anon19 draw_nc;
	Q_WORDDATA alpha1_nc;
	Q_WORDDATA drawq2_nc[6];
	Q_WORDDATA gifad_frame_normal;
	Q_WORDDATA frame_normal;
	Q_WORDDATA gifad_frame_mskalpha;
	Q_WORDDATA frame_mskalpha;
	Q_WORDDATA gifad_frame_mskDalpha;
	Q_WORDDATA frame_mskDalpha;
};

struct Data_4
{
	Q specular;
};

struct _anon13
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
	int fake;
	float shadow_length;
	float shadow_density;
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

struct _anon14
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

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct _anon15
{
	struct
	{
		unsigned long OFX : 16;
		unsigned long pad16 : 16;
		unsigned long OFY : 16;
		unsigned long pad48 : 16;
	};
};

struct _anon16
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

struct _anon17
{
	_anon3 pmode;
	_anon10 smode2;
	_anon6 dispfb;
	_anon12 display;
	_anon14 bgcolor;
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

struct _anon18
{
	struct
	{
		unsigned long X : 16;
		unsigned long Y : 16;
		unsigned long Z : 32;
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

struct _anon19
{
	_anon9 frame1;
	unsigned long frame1addr;
	_anon20 zbuf1;
	long zbuf1addr;
	_anon15 xyoffset1;
	long xyoffset1addr;
	_anon7 scissor1;
	long scissor1addr;
	_anon0 prmodecont;
	long prmodecontaddr;
	_anon13 colclamp;
	long colclampaddr;
	_anon4 dthe;
	long dtheaddr;
	_anon11 test1;
	long test1addr;
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

struct _anon20
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

struct _anon21
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

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon22 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
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

union _anon22
{
	shBattleFight fight;
	shBattleShot shot;
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

struct _anon23
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

struct shGsAllEnv
{
	unsigned long loop_counter;
	unsigned int loop;
	unsigned int loop3;
	shGsLoopEnv LoopEnv;
	_anon17 DispEnv[3];
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

shAttackInfo sh2_attack_list[46];
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
void InitEnv1(_anon5* pk, unsigned int cid);
void TiniEnv(_anon5* pk);
void MakeVu1PartTransferPacket(Part* part, _anon5* pk);
void MakeLambertShadingPacket(Part* part, _anon5* pk);
void MakeNormalPacket(Part* part, _anon5* pk);
void MakeEnvironPacket(Part* part, _anon5* pk);
void MakeSpecularPacket(Part* part, _anon5* pk);
void MakeBaseSpecularPacket(Part* part, _anon5* pk);
void MakeOverPacket(Part* part, _anon5* pk);
void MakeDrawPacket(Part* part, _anon5* pk);
void DrawPart1(Part* part, _anon5* pk);
void DrawParts1(sh_Model* model, ModelWork* work);
void Model3DrawVu1Parts(Model* model, ModelWork* work);

// 
// Start address: 0x135920
void Model3LoadMpg1()
{
	Q_WORDDATA* qwd;
	<unknown fundamental type (0xa510)> packet_buffer[4];
	int initialized;
	// Line 195, Address: 0x135920, Func Offset: 0
	// Line 218, Address: 0x135930, Func Offset: 0x10
	// Line 220, Address: 0x135940, Func Offset: 0x20
	// Line 230, Address: 0x13595c, Func Offset: 0x3c
	// Line 231, Address: 0x135964, Func Offset: 0x44
	// Line 232, Address: 0x135970, Func Offset: 0x50
	// Line 233, Address: 0x135978, Func Offset: 0x58
	// Line 235, Address: 0x13597c, Func Offset: 0x5c
	// Line 238, Address: 0x135994, Func Offset: 0x74
	// Line 240, Address: 0x135998, Func Offset: 0x78
	// Line 241, Address: 0x1359a0, Func Offset: 0x80
	// Line 242, Address: 0x1359a4, Func Offset: 0x84
	// Line 243, Address: 0x1359a8, Func Offset: 0x88
	// Line 246, Address: 0x1359b4, Func Offset: 0x94
	// Line 249, Address: 0x1359c4, Func Offset: 0xa4
	// Func End, Address: 0x1359dc, Func Offset: 0xbc
}

// 
// Start address: 0x1359e0
void InitAllDataOne(AllData* p)
{
	SDrawData* data;
	SDrawData* data;
	EDrawData* data;
	DSetupData* data;
	LambertData* lambert_data;
	// Line 256, Address: 0x1359e0, Func Offset: 0
	// Line 259, Address: 0x135a10, Func Offset: 0x30
	// Line 260, Address: 0x135a28, Func Offset: 0x48
	// Line 265, Address: 0x135a3c, Func Offset: 0x5c
	// Line 266, Address: 0x135a58, Func Offset: 0x78
	// Line 267, Address: 0x135a6c, Func Offset: 0x8c
	// Line 268, Address: 0x135a74, Func Offset: 0x94
	// Line 274, Address: 0x135a78, Func Offset: 0x98
	// Line 275, Address: 0x135aa0, Func Offset: 0xc0
	// Line 276, Address: 0x135ab0, Func Offset: 0xd0
	// Line 277, Address: 0x135ab8, Func Offset: 0xd8
	// Line 278, Address: 0x135ac0, Func Offset: 0xe0
	// Line 279, Address: 0x135ac4, Func Offset: 0xe4
	// Line 282, Address: 0x135ad8, Func Offset: 0xf8
	// Line 283, Address: 0x135ae4, Func Offset: 0x104
	// Line 284, Address: 0x135ae8, Func Offset: 0x108
	// Line 285, Address: 0x135af0, Func Offset: 0x110
	// Line 286, Address: 0x135af8, Func Offset: 0x118
	// Line 287, Address: 0x135b00, Func Offset: 0x120
	// Line 288, Address: 0x135b08, Func Offset: 0x128
	// Line 289, Address: 0x135b10, Func Offset: 0x130
	// Line 290, Address: 0x135b18, Func Offset: 0x138
	// Line 291, Address: 0x135b20, Func Offset: 0x140
	// Line 292, Address: 0x135b24, Func Offset: 0x144
	// Line 302, Address: 0x135b2c, Func Offset: 0x14c
	// Line 303, Address: 0x135b54, Func Offset: 0x174
	// Line 304, Address: 0x135b64, Func Offset: 0x184
	// Line 305, Address: 0x135b6c, Func Offset: 0x18c
	// Line 306, Address: 0x135b74, Func Offset: 0x194
	// Line 307, Address: 0x135b78, Func Offset: 0x198
	// Line 310, Address: 0x135b8c, Func Offset: 0x1ac
	// Line 311, Address: 0x135b98, Func Offset: 0x1b8
	// Line 312, Address: 0x135b9c, Func Offset: 0x1bc
	// Line 313, Address: 0x135ba4, Func Offset: 0x1c4
	// Line 314, Address: 0x135bac, Func Offset: 0x1cc
	// Line 315, Address: 0x135bb4, Func Offset: 0x1d4
	// Line 316, Address: 0x135bbc, Func Offset: 0x1dc
	// Line 323, Address: 0x135bc4, Func Offset: 0x1e4
	// Line 341, Address: 0x135bcc, Func Offset: 0x1ec
	// Line 342, Address: 0x135bd4, Func Offset: 0x1f4
	// Line 343, Address: 0x135bd8, Func Offset: 0x1f8
	// Line 348, Address: 0x135be0, Func Offset: 0x200
	// Line 349, Address: 0x135c08, Func Offset: 0x228
	// Line 350, Address: 0x135c18, Func Offset: 0x238
	// Line 351, Address: 0x135c20, Func Offset: 0x240
	// Line 354, Address: 0x135c34, Func Offset: 0x254
	// Line 355, Address: 0x135c3c, Func Offset: 0x25c
	// Line 356, Address: 0x135c40, Func Offset: 0x260
	// Line 357, Address: 0x135c4c, Func Offset: 0x26c
	// Line 358, Address: 0x135c50, Func Offset: 0x270
	// Line 359, Address: 0x135c58, Func Offset: 0x278
	// Line 360, Address: 0x135c60, Func Offset: 0x280
	// Line 361, Address: 0x135c68, Func Offset: 0x288
	// Line 362, Address: 0x135c70, Func Offset: 0x290
	// Line 363, Address: 0x135c78, Func Offset: 0x298
	// Line 364, Address: 0x135c80, Func Offset: 0x2a0
	// Line 365, Address: 0x135c88, Func Offset: 0x2a8
	// Line 366, Address: 0x135c8c, Func Offset: 0x2ac
	// Line 368, Address: 0x135c94, Func Offset: 0x2b4
	// Func End, Address: 0x135cc8, Func Offset: 0x2e8
}

// 
// Start address: 0x135cd0
void InitSprData(SprData* p)
{
	NDrawData* data;
	NDrawData* data;
	int i;
	// Line 375, Address: 0x135cd0, Func Offset: 0
	// Line 379, Address: 0x135cf4, Func Offset: 0x24
	// Line 380, Address: 0x135d00, Func Offset: 0x30
	// Line 381, Address: 0x135d20, Func Offset: 0x50
	// Line 382, Address: 0x135d30, Func Offset: 0x60
	// Line 383, Address: 0x135d38, Func Offset: 0x68
	// Line 384, Address: 0x135d40, Func Offset: 0x70
	// Line 385, Address: 0x135d44, Func Offset: 0x74
	// Line 388, Address: 0x135d58, Func Offset: 0x88
	// Line 389, Address: 0x135d64, Func Offset: 0x94
	// Line 390, Address: 0x135d68, Func Offset: 0x98
	// Line 391, Address: 0x135d70, Func Offset: 0xa0
	// Line 392, Address: 0x135d74, Func Offset: 0xa4
	// Line 393, Address: 0x135d7c, Func Offset: 0xac
	// Line 394, Address: 0x135d80, Func Offset: 0xb0
	// Line 395, Address: 0x135d88, Func Offset: 0xb8
	// Line 396, Address: 0x135d90, Func Offset: 0xc0
	// Line 397, Address: 0x135d98, Func Offset: 0xc8
	// Line 398, Address: 0x135d9c, Func Offset: 0xcc
	// Line 399, Address: 0x135da4, Func Offset: 0xd4
	// Line 402, Address: 0x135db4, Func Offset: 0xe4
	// Line 403, Address: 0x135dc0, Func Offset: 0xf0
	// Line 404, Address: 0x135de4, Func Offset: 0x114
	// Line 405, Address: 0x135df4, Func Offset: 0x124
	// Line 406, Address: 0x135dfc, Func Offset: 0x12c
	// Line 407, Address: 0x135e04, Func Offset: 0x134
	// Line 408, Address: 0x135e08, Func Offset: 0x138
	// Line 411, Address: 0x135e1c, Func Offset: 0x14c
	// Line 412, Address: 0x135e28, Func Offset: 0x158
	// Line 413, Address: 0x135e2c, Func Offset: 0x15c
	// Line 414, Address: 0x135e34, Func Offset: 0x164
	// Line 415, Address: 0x135e38, Func Offset: 0x168
	// Line 416, Address: 0x135e40, Func Offset: 0x170
	// Line 417, Address: 0x135e44, Func Offset: 0x174
	// Line 418, Address: 0x135e4c, Func Offset: 0x17c
	// Line 419, Address: 0x135e54, Func Offset: 0x184
	// Line 420, Address: 0x135e5c, Func Offset: 0x18c
	// Line 421, Address: 0x135e60, Func Offset: 0x190
	// Line 422, Address: 0x135e68, Func Offset: 0x198
	// Line 423, Address: 0x135e7c, Func Offset: 0x1ac
	// Func End, Address: 0x135ea4, Func Offset: 0x1d4
}

// 
// Start address: 0x135eb0
void InitData1()
{
	_anon8* toSPR;
	int initialized;
	// Line 430, Address: 0x135eb0, Func Offset: 0
	// Line 432, Address: 0x135ebc, Func Offset: 0xc
	// Line 433, Address: 0x135ecc, Func Offset: 0x1c
	// Line 434, Address: 0x135edc, Func Offset: 0x2c
	// Line 435, Address: 0x135eec, Func Offset: 0x3c
	// Line 437, Address: 0x135efc, Func Offset: 0x4c
	// Line 441, Address: 0x135f08, Func Offset: 0x58
	// Line 443, Address: 0x135f24, Func Offset: 0x74
	// Line 444, Address: 0x135f34, Func Offset: 0x84
	// Line 445, Address: 0x135f44, Func Offset: 0x94
	// Line 446, Address: 0x135f5c, Func Offset: 0xac
	// Line 448, Address: 0x135f78, Func Offset: 0xc8
	// Func End, Address: 0x135f8c, Func Offset: 0xdc
}

// 
// Start address: 0x135f90
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
	// Line 455, Address: 0x135f90, Func Offset: 0
	// Line 456, Address: 0x135fbc, Func Offset: 0x2c
	// Line 458, Address: 0x135fc8, Func Offset: 0x38
	// Line 461, Address: 0x135fd0, Func Offset: 0x40
	// Line 465, Address: 0x135ffc, Func Offset: 0x6c
	// Line 467, Address: 0x136008, Func Offset: 0x78
	// Line 468, Address: 0x136014, Func Offset: 0x84
	// Line 472, Address: 0x136040, Func Offset: 0xb0
	// Line 474, Address: 0x136050, Func Offset: 0xc0
	// Line 475, Address: 0x136060, Func Offset: 0xd0
	// Line 480, Address: 0x136078, Func Offset: 0xe8
	// Line 482, Address: 0x136084, Func Offset: 0xf4
	// Line 483, Address: 0x136090, Func Offset: 0x100
	// Line 484, Address: 0x1360a0, Func Offset: 0x110
	// Line 489, Address: 0x1360dc, Func Offset: 0x14c
	// Line 490, Address: 0x1360ec, Func Offset: 0x15c
	// Line 492, Address: 0x1360fc, Func Offset: 0x16c
	// Line 493, Address: 0x13610c, Func Offset: 0x17c
	// Line 494, Address: 0x136114, Func Offset: 0x184
	// Line 495, Address: 0x13611c, Func Offset: 0x18c
	// Line 496, Address: 0x136124, Func Offset: 0x194
	// Line 497, Address: 0x13612c, Func Offset: 0x19c
	// Line 502, Address: 0x136140, Func Offset: 0x1b0
	// Line 506, Address: 0x13617c, Func Offset: 0x1ec
	// Line 508, Address: 0x13618c, Func Offset: 0x1fc
	// Line 512, Address: 0x1361a0, Func Offset: 0x210
	// Line 521, Address: 0x1361b8, Func Offset: 0x228
	// Line 522, Address: 0x1361f8, Func Offset: 0x268
	// Line 523, Address: 0x13620c, Func Offset: 0x27c
	// Line 524, Address: 0x136224, Func Offset: 0x294
	// Line 530, Address: 0x13623c, Func Offset: 0x2ac
	// Line 536, Address: 0x13627c, Func Offset: 0x2ec
	// Line 543, Address: 0x13628c, Func Offset: 0x2fc
	// Line 557, Address: 0x1362cc, Func Offset: 0x33c
	// Line 558, Address: 0x1362e8, Func Offset: 0x358
	// Line 559, Address: 0x136308, Func Offset: 0x378
	// Line 560, Address: 0x136328, Func Offset: 0x398
	// Line 567, Address: 0x136348, Func Offset: 0x3b8
	// Line 568, Address: 0x136388, Func Offset: 0x3f8
	// Line 570, Address: 0x1363a0, Func Offset: 0x410
	// Line 571, Address: 0x1363ac, Func Offset: 0x41c
	// Line 577, Address: 0x1363c0, Func Offset: 0x430
	// Line 578, Address: 0x136400, Func Offset: 0x470
	// Line 579, Address: 0x136440, Func Offset: 0x4b0
	// Line 582, Address: 0x136458, Func Offset: 0x4c8
	// Line 583, Address: 0x136464, Func Offset: 0x4d4
	// Line 584, Address: 0x136470, Func Offset: 0x4e0
	// Line 585, Address: 0x13647c, Func Offset: 0x4ec
	// Line 586, Address: 0x136488, Func Offset: 0x4f8
	// Line 587, Address: 0x136494, Func Offset: 0x504
	// Line 592, Address: 0x1364a8, Func Offset: 0x518
	// Line 593, Address: 0x1364c0, Func Offset: 0x530
	// Line 594, Address: 0x1364d8, Func Offset: 0x548
	// Line 595, Address: 0x1364f0, Func Offset: 0x560
	// Line 597, Address: 0x136508, Func Offset: 0x578
	// Func End, Address: 0x13653c, Func Offset: 0x5ac
}

// 
// Start address: 0x136540
void InitEnv1(_anon5* pk, unsigned int cid)
{
	Init_Gs_Packet packet4other;
	Init_Gs_Packet packet4main;
	// Line 604, Address: 0x136540, Func Offset: 0
	// Line 663, Address: 0x136550, Func Offset: 0x10
	// Line 664, Address: 0x136560, Func Offset: 0x20
	// Line 670, Address: 0x136570, Func Offset: 0x30
	// Line 671, Address: 0x136584, Func Offset: 0x44
	// Line 673, Address: 0x1365ac, Func Offset: 0x6c
	// Line 674, Address: 0x1365b4, Func Offset: 0x74
	// Line 678, Address: 0x1365dc, Func Offset: 0x9c
	// Func End, Address: 0x1365ec, Func Offset: 0xac
}

// 
// Start address: 0x1365f0
void TiniEnv(_anon5* pk)
{
	Packet packet;
	// Line 686, Address: 0x1365f0, Func Offset: 0
	// Line 710, Address: 0x1365fc, Func Offset: 0xc
	// Line 712, Address: 0x136624, Func Offset: 0x34
	// Func End, Address: 0x136634, Func Offset: 0x44
}

// 
// Start address: 0x136640
void MakeVu1PartTransferPacket(Part* part, _anon5* pk)
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
	// Line 719, Address: 0x136640, Func Offset: 0
	// Line 721, Address: 0x136674, Func Offset: 0x34
	// Line 725, Address: 0x1366a4, Func Offset: 0x64
	// Line 726, Address: 0x1366b0, Func Offset: 0x70
	// Line 727, Address: 0x1366c4, Func Offset: 0x84
	// Line 729, Address: 0x1366d0, Func Offset: 0x90
	// Line 730, Address: 0x1366dc, Func Offset: 0x9c
	// Line 731, Address: 0x1366f0, Func Offset: 0xb0
	// Line 732, Address: 0x1366f8, Func Offset: 0xb8
	// Line 733, Address: 0x136700, Func Offset: 0xc0
	// Line 734, Address: 0x136708, Func Offset: 0xc8
	// Line 737, Address: 0x136740, Func Offset: 0x100
	// Line 742, Address: 0x136758, Func Offset: 0x118
	// Line 743, Address: 0x136764, Func Offset: 0x124
	// Line 744, Address: 0x136770, Func Offset: 0x130
	// Line 745, Address: 0x136784, Func Offset: 0x144
	// Line 747, Address: 0x136790, Func Offset: 0x150
	// Line 748, Address: 0x13679c, Func Offset: 0x15c
	// Line 749, Address: 0x1367b0, Func Offset: 0x170
	// Line 751, Address: 0x1367bc, Func Offset: 0x17c
	// Line 754, Address: 0x1367f8, Func Offset: 0x1b8
	// Line 759, Address: 0x136810, Func Offset: 0x1d0
	// Line 760, Address: 0x136820, Func Offset: 0x1e0
	// Line 761, Address: 0x13682c, Func Offset: 0x1ec
	// Line 762, Address: 0x136840, Func Offset: 0x200
	// Line 764, Address: 0x13684c, Func Offset: 0x20c
	// Line 765, Address: 0x136858, Func Offset: 0x218
	// Line 766, Address: 0x136870, Func Offset: 0x230
	// Line 768, Address: 0x136884, Func Offset: 0x244
	// Line 771, Address: 0x1368c0, Func Offset: 0x280
	// Line 773, Address: 0x1368d8, Func Offset: 0x298
	// Func End, Address: 0x13690c, Func Offset: 0x2cc
}

// 
// Start address: 0x136910
void MakeLambertShadingPacket(Part* part, _anon5* pk)
{
	Data_0* lf_data;
	float brightness;
	Light* light;
	int i;
	int n_extras;
	int n_parallels;
	// Line 784, Address: 0x136910, Func Offset: 0
	// Line 785, Address: 0x136934, Func Offset: 0x24
	// Line 786, Address: 0x136940, Func Offset: 0x30
	// Line 790, Address: 0x13694c, Func Offset: 0x3c
	// Line 791, Address: 0x136958, Func Offset: 0x48
	// Line 794, Address: 0x1369a0, Func Offset: 0x90
	// Line 795, Address: 0x1369b0, Func Offset: 0xa0
	// Line 796, Address: 0x1369cc, Func Offset: 0xbc
	// Line 797, Address: 0x1369e0, Func Offset: 0xd0
	// Line 798, Address: 0x1369f4, Func Offset: 0xe4
	// Line 801, Address: 0x136a04, Func Offset: 0xf4
	// Line 802, Address: 0x136a10, Func Offset: 0x100
	// Line 803, Address: 0x136a20, Func Offset: 0x110
	// Line 806, Address: 0x136a68, Func Offset: 0x158
	// Line 807, Address: 0x136a78, Func Offset: 0x168
	// Line 808, Address: 0x136a94, Func Offset: 0x184
	// Line 810, Address: 0x136ab8, Func Offset: 0x1a8
	// Line 811, Address: 0x136acc, Func Offset: 0x1bc
	// Line 813, Address: 0x136ad4, Func Offset: 0x1c4
	// Line 814, Address: 0x136ae8, Func Offset: 0x1d8
	// Line 816, Address: 0x136af0, Func Offset: 0x1e0
	// Line 817, Address: 0x136b0c, Func Offset: 0x1fc
	// Line 818, Address: 0x136b10, Func Offset: 0x200
	// Line 819, Address: 0x136b24, Func Offset: 0x214
	// Line 842, Address: 0x136b34, Func Offset: 0x224
	// Line 845, Address: 0x136b40, Func Offset: 0x230
	// Line 848, Address: 0x136b7c, Func Offset: 0x26c
	// Line 849, Address: 0x136b8c, Func Offset: 0x27c
	// Line 850, Address: 0x136ba0, Func Offset: 0x290
	// Line 851, Address: 0x136bc8, Func Offset: 0x2b8
	// Line 852, Address: 0x136bdc, Func Offset: 0x2cc
	// Line 853, Address: 0x136c0c, Func Offset: 0x2fc
	// Line 856, Address: 0x136c20, Func Offset: 0x310
	// Line 858, Address: 0x136c30, Func Offset: 0x320
	// Line 874, Address: 0x136c44, Func Offset: 0x334
	// Line 879, Address: 0x136c54, Func Offset: 0x344
	// Line 880, Address: 0x136c68, Func Offset: 0x358
	// Line 881, Address: 0x136c7c, Func Offset: 0x36c
	// Line 882, Address: 0x136c98, Func Offset: 0x388
	// Line 883, Address: 0x136cac, Func Offset: 0x39c
	// Line 959, Address: 0x136cc0, Func Offset: 0x3b0
	// Func End, Address: 0x136ce4, Func Offset: 0x3d4
}

// 
// Start address: 0x136cf0
void MakeNormalPacket(Part* part, _anon5* pk)
{
	NDrawData* data;
	NDrawData* spr;
	TextureParam* texture;
	TextPosParam* text_pos;
	int text_pos_index;
	int i;
	_anon8* fromSPR;
	int mpg;
	TextureParam* texture_params;
	TextPosParam* text_pos_params;
	unsigned short* text_pos_indices;
	int n_textures;
	// Line 966, Address: 0x136cf0, Func Offset: 0
	// Line 967, Address: 0x136d24, Func Offset: 0x34
	// Line 968, Address: 0x136d30, Func Offset: 0x40
	// Line 969, Address: 0x136d40, Func Offset: 0x50
	// Line 970, Address: 0x136d54, Func Offset: 0x64
	// Line 971, Address: 0x136d68, Func Offset: 0x78
	// Line 973, Address: 0x136da0, Func Offset: 0xb0
	// Line 976, Address: 0x136db0, Func Offset: 0xc0
	// Line 977, Address: 0x136dbc, Func Offset: 0xcc
	// Line 978, Address: 0x136dcc, Func Offset: 0xdc
	// Line 979, Address: 0x136dd8, Func Offset: 0xe8
	// Line 980, Address: 0x136de4, Func Offset: 0xf4
	// Line 982, Address: 0x136e10, Func Offset: 0x120
	// Line 983, Address: 0x136e20, Func Offset: 0x130
	// Line 984, Address: 0x136e30, Func Offset: 0x140
	// Line 985, Address: 0x136e54, Func Offset: 0x164
	// Line 986, Address: 0x136e68, Func Offset: 0x178
	// Line 992, Address: 0x136e98, Func Offset: 0x1a8
	// Line 994, Address: 0x136ea0, Func Offset: 0x1b0
	// Line 995, Address: 0x136ea8, Func Offset: 0x1b8
	// Line 997, Address: 0x136eb0, Func Offset: 0x1c0
	// Line 998, Address: 0x136eb8, Func Offset: 0x1c8
	// Line 1000, Address: 0x136ed4, Func Offset: 0x1e4
	// Line 1001, Address: 0x136ef0, Func Offset: 0x200
	// Line 1002, Address: 0x136f08, Func Offset: 0x218
	// Line 1003, Address: 0x136f20, Func Offset: 0x230
	// Func End, Address: 0x136f54, Func Offset: 0x264
}

// 
// Start address: 0x136f60
void MakeEnvironPacket(Part* part, _anon5* pk)
{
	int mpg;
	Data_2* data;
	// Line 1011, Address: 0x136f60, Func Offset: 0
	// Line 1017, Address: 0x136f7c, Func Offset: 0x1c
	// Line 1018, Address: 0x136fac, Func Offset: 0x4c
	// Line 1019, Address: 0x136fbc, Func Offset: 0x5c
	// Line 1020, Address: 0x136fcc, Func Offset: 0x6c
	// Line 1023, Address: 0x13700c, Func Offset: 0xac
	// Line 1024, Address: 0x13701c, Func Offset: 0xbc
	// Line 1025, Address: 0x137030, Func Offset: 0xd0
	// Line 1026, Address: 0x137058, Func Offset: 0xf8
	// Line 1027, Address: 0x13706c, Func Offset: 0x10c
	// Line 1028, Address: 0x13709c, Func Offset: 0x13c
	// Line 1029, Address: 0x1370a4, Func Offset: 0x144
	// Line 1030, Address: 0x1370ac, Func Offset: 0x14c
	// Line 1031, Address: 0x1370b4, Func Offset: 0x154
	// Line 1032, Address: 0x1370c4, Func Offset: 0x164
	// Line 1033, Address: 0x1370e0, Func Offset: 0x180
	// Line 1034, Address: 0x1370f4, Func Offset: 0x194
	// Func End, Address: 0x137110, Func Offset: 0x1b0
}

// 
// Start address: 0x137110
void MakeSpecularPacket(Part* part, _anon5* pk)
{
	int mpg;
	Data_3* data;
	// Line 1042, Address: 0x137110, Func Offset: 0
	// Line 1048, Address: 0x13712c, Func Offset: 0x1c
	// Line 1049, Address: 0x13715c, Func Offset: 0x4c
	// Line 1050, Address: 0x13716c, Func Offset: 0x5c
	// Line 1051, Address: 0x13717c, Func Offset: 0x6c
	// Line 1054, Address: 0x1371bc, Func Offset: 0xac
	// Line 1055, Address: 0x1371cc, Func Offset: 0xbc
	// Line 1056, Address: 0x1371e0, Func Offset: 0xd0
	// Line 1057, Address: 0x137208, Func Offset: 0xf8
	// Line 1058, Address: 0x13721c, Func Offset: 0x10c
	// Line 1061, Address: 0x13724c, Func Offset: 0x13c
	// Line 1063, Address: 0x137260, Func Offset: 0x150
	// Line 1067, Address: 0x137270, Func Offset: 0x160
	// Line 1068, Address: 0x13728c, Func Offset: 0x17c
	// Line 1069, Address: 0x1372a0, Func Offset: 0x190
	// Func End, Address: 0x1372bc, Func Offset: 0x1ac
}

// 
// Start address: 0x1372c0
void MakeBaseSpecularPacket(Part* part, _anon5* pk)
{
	int mpg;
	Data_4* data;
	// Line 1076, Address: 0x1372c0, Func Offset: 0
	// Line 1082, Address: 0x1372dc, Func Offset: 0x1c
	// Line 1083, Address: 0x13730c, Func Offset: 0x4c
	// Line 1084, Address: 0x13731c, Func Offset: 0x5c
	// Line 1085, Address: 0x13732c, Func Offset: 0x6c
	// Line 1088, Address: 0x13736c, Func Offset: 0xac
	// Line 1089, Address: 0x13737c, Func Offset: 0xbc
	// Line 1090, Address: 0x137390, Func Offset: 0xd0
	// Line 1091, Address: 0x1373b8, Func Offset: 0xf8
	// Line 1092, Address: 0x1373cc, Func Offset: 0x10c
	// Line 1093, Address: 0x1373fc, Func Offset: 0x13c
	// Line 1094, Address: 0x137410, Func Offset: 0x150
	// Line 1095, Address: 0x137420, Func Offset: 0x160
	// Line 1096, Address: 0x13743c, Func Offset: 0x17c
	// Line 1097, Address: 0x137450, Func Offset: 0x190
	// Func End, Address: 0x13746c, Func Offset: 0x1ac
}

// 
// Start address: 0x137470
void MakeOverPacket(Part* part, _anon5* pk)
{
	NDrawData* data;
	NDrawData* spr;
	TextureParam* texture;
	TextPosParam* text_pos;
	int text_pos_index;
	int i;
	_anon8* fromSPR;
	int mpg;
	TextureParam* texture_params;
	TextPosParam* text_pos_params;
	unsigned short* text_pos_indices;
	int n_textures;
	// Line 1104, Address: 0x137470, Func Offset: 0
	// Line 1105, Address: 0x1374a4, Func Offset: 0x34
	// Line 1106, Address: 0x1374b0, Func Offset: 0x40
	// Line 1107, Address: 0x1374c0, Func Offset: 0x50
	// Line 1108, Address: 0x1374d4, Func Offset: 0x64
	// Line 1109, Address: 0x1374e8, Func Offset: 0x78
	// Line 1110, Address: 0x137520, Func Offset: 0xb0
	// Line 1113, Address: 0x137530, Func Offset: 0xc0
	// Line 1114, Address: 0x13753c, Func Offset: 0xcc
	// Line 1115, Address: 0x13754c, Func Offset: 0xdc
	// Line 1116, Address: 0x137558, Func Offset: 0xe8
	// Line 1117, Address: 0x137564, Func Offset: 0xf4
	// Line 1119, Address: 0x137594, Func Offset: 0x124
	// Line 1120, Address: 0x1375a4, Func Offset: 0x134
	// Line 1121, Address: 0x1375b4, Func Offset: 0x144
	// Line 1122, Address: 0x1375d8, Func Offset: 0x168
	// Line 1123, Address: 0x1375ec, Func Offset: 0x17c
	// Line 1124, Address: 0x137620, Func Offset: 0x1b0
	// Line 1125, Address: 0x137628, Func Offset: 0x1b8
	// Line 1126, Address: 0x137630, Func Offset: 0x1c0
	// Line 1128, Address: 0x137638, Func Offset: 0x1c8
	// Line 1129, Address: 0x137640, Func Offset: 0x1d0
	// Line 1131, Address: 0x13765c, Func Offset: 0x1ec
	// Line 1132, Address: 0x137678, Func Offset: 0x208
	// Line 1134, Address: 0x137690, Func Offset: 0x220
	// Line 1135, Address: 0x1376a8, Func Offset: 0x238
	// Func End, Address: 0x1376dc, Func Offset: 0x26c
}

// 
// Start address: 0x1376e0
void MakeDrawPacket(Part* part, _anon5* pk)
{
	<unknown fundamental type (0xa510)>* gifad;
	// Line 1142, Address: 0x1376e0, Func Offset: 0
	// Line 1144, Address: 0x1376f4, Func Offset: 0x14
	// Line 1147, Address: 0x137734, Func Offset: 0x54
	// Line 1148, Address: 0x137744, Func Offset: 0x64
	// Line 1150, Address: 0x137760, Func Offset: 0x80
	// Line 1151, Address: 0x137774, Func Offset: 0x94
	// Line 1153, Address: 0x137788, Func Offset: 0xa8
	// Line 1154, Address: 0x13779c, Func Offset: 0xbc
	// Line 1156, Address: 0x1377ac, Func Offset: 0xcc
	// Line 1157, Address: 0x1377bc, Func Offset: 0xdc
	// Line 1160, Address: 0x1377cc, Func Offset: 0xec
	// Line 1164, Address: 0x1377e4, Func Offset: 0x104
	// Line 1165, Address: 0x1377f0, Func Offset: 0x110
	// Line 1169, Address: 0x137814, Func Offset: 0x134
	// Line 1173, Address: 0x137824, Func Offset: 0x144
	// Line 1174, Address: 0x137830, Func Offset: 0x150
	// Line 1178, Address: 0x137854, Func Offset: 0x174
	// Line 1180, Address: 0x13785c, Func Offset: 0x17c
	// Line 1181, Address: 0x137874, Func Offset: 0x194
	// Line 1183, Address: 0x137884, Func Offset: 0x1a4
	// Line 1185, Address: 0x137894, Func Offset: 0x1b4
	// Func End, Address: 0x1378a8, Func Offset: 0x1c8
}

// 
// Start address: 0x1378b0
void DrawPart1(Part* part, _anon5* pk)
{
	Data_1* data;
	// Line 1193, Address: 0x1378b0, Func Offset: 0
	// Line 1194, Address: 0x1378dc, Func Offset: 0x2c
	// Line 1204, Address: 0x1378e8, Func Offset: 0x38
	// Line 1205, Address: 0x137900, Func Offset: 0x50
	// Line 1206, Address: 0x137910, Func Offset: 0x60
	// Line 1208, Address: 0x137920, Func Offset: 0x70
	// Line 1213, Address: 0x137930, Func Offset: 0x80
	// Line 1216, Address: 0x137940, Func Offset: 0x90
	// Line 1217, Address: 0x137950, Func Offset: 0xa0
	// Line 1218, Address: 0x13796c, Func Offset: 0xbc
	// Line 1219, Address: 0x13797c, Func Offset: 0xcc
	// Line 1220, Address: 0x1379a0, Func Offset: 0xf0
	// Line 1221, Address: 0x1379b8, Func Offset: 0x108
	// Line 1222, Address: 0x1379e0, Func Offset: 0x130
	// Line 1223, Address: 0x137a08, Func Offset: 0x158
	// Line 1224, Address: 0x137a30, Func Offset: 0x180
	// Line 1225, Address: 0x137a38, Func Offset: 0x188
	// Line 1226, Address: 0x137a48, Func Offset: 0x198
	// Line 1227, Address: 0x137a58, Func Offset: 0x1a8
	// Line 1229, Address: 0x137a68, Func Offset: 0x1b8
	// Line 1230, Address: 0x137a78, Func Offset: 0x1c8
	// Line 1231, Address: 0x137a8c, Func Offset: 0x1dc
	// Line 1234, Address: 0x137aa0, Func Offset: 0x1f0
	// Line 1244, Address: 0x137ae4, Func Offset: 0x234
	// Line 1245, Address: 0x137af4, Func Offset: 0x244
	// Line 1247, Address: 0x137afc, Func Offset: 0x24c
	// Line 1252, Address: 0x137b18, Func Offset: 0x268
	// Line 1253, Address: 0x137b28, Func Offset: 0x278
	// Line 1256, Address: 0x137b68, Func Offset: 0x2b8
	// Line 1257, Address: 0x137b78, Func Offset: 0x2c8
	// Line 1258, Address: 0x137b94, Func Offset: 0x2e4
	// Line 1259, Address: 0x137ba8, Func Offset: 0x2f8
	// Line 1264, Address: 0x137bbc, Func Offset: 0x30c
	// Line 1270, Address: 0x137bd4, Func Offset: 0x324
	// Line 1273, Address: 0x137c14, Func Offset: 0x364
	// Line 1274, Address: 0x137c24, Func Offset: 0x374
	// Line 1275, Address: 0x137c38, Func Offset: 0x388
	// Line 1276, Address: 0x137c60, Func Offset: 0x3b0
	// Line 1277, Address: 0x137c74, Func Offset: 0x3c4
	// Line 1280, Address: 0x137ca4, Func Offset: 0x3f4
	// Line 1286, Address: 0x137cb0, Func Offset: 0x400
	// Line 1287, Address: 0x137ccc, Func Offset: 0x41c
	// Line 1288, Address: 0x137ce0, Func Offset: 0x430
	// Line 1292, Address: 0x137cf4, Func Offset: 0x444
	// Line 1293, Address: 0x137d04, Func Offset: 0x454
	// Func End, Address: 0x137d30, Func Offset: 0x480
}

// 
// Start address: 0x137d30
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
	_anon5* pk;
	_anon5 packet;
	<unknown fundamental type (0xa510)>* packet_buffer;
	// Line 1302, Address: 0x137d30, Func Offset: 0
	// Line 1304, Address: 0x137d64, Func Offset: 0x34
	// Line 1306, Address: 0x137d70, Func Offset: 0x40
	// Line 1307, Address: 0x137d74, Func Offset: 0x44
	// Line 1308, Address: 0x137d80, Func Offset: 0x50
	// Line 1312, Address: 0x137d90, Func Offset: 0x60
	// Line 1314, Address: 0x137d9c, Func Offset: 0x6c
	// Line 1315, Address: 0x137da8, Func Offset: 0x78
	// Line 1316, Address: 0x137db0, Func Offset: 0x80
	// Line 1318, Address: 0x137ddc, Func Offset: 0xac
	// Line 1321, Address: 0x137de0, Func Offset: 0xb0
	// Line 1323, Address: 0x137df8, Func Offset: 0xc8
	// Line 1325, Address: 0x137e04, Func Offset: 0xd4
	// Line 1326, Address: 0x137e14, Func Offset: 0xe4
	// Line 1328, Address: 0x137e24, Func Offset: 0xf4
	// Line 1334, Address: 0x137e34, Func Offset: 0x104
	// Line 1337, Address: 0x137e50, Func Offset: 0x120
	// Line 1338, Address: 0x137e60, Func Offset: 0x130
	// Line 1339, Address: 0x137e7c, Func Offset: 0x14c
	// Line 1341, Address: 0x137e80, Func Offset: 0x150
	// Line 1342, Address: 0x137e90, Func Offset: 0x160
	// Line 1343, Address: 0x137ea0, Func Offset: 0x170
	// Line 1345, Address: 0x137eb0, Func Offset: 0x180
	// Line 1347, Address: 0x137ecc, Func Offset: 0x19c
	// Line 1349, Address: 0x137ed0, Func Offset: 0x1a0
	// Line 1352, Address: 0x137eec, Func Offset: 0x1bc
	// Line 1353, Address: 0x137ef8, Func Offset: 0x1c8
	// Line 1354, Address: 0x137f08, Func Offset: 0x1d8
	// Line 1355, Address: 0x137f18, Func Offset: 0x1e8
	// Line 1356, Address: 0x137f28, Func Offset: 0x1f8
	// Line 1362, Address: 0x137f34, Func Offset: 0x204
	// Line 1366, Address: 0x137f58, Func Offset: 0x228
	// Func End, Address: 0x137f8c, Func Offset: 0x25c
}

// 
// Start address: 0x137f90
void Model3DrawVu1Parts(Model* model, ModelWork* work)
{
	// Line 1446, Address: 0x137f90, Func Offset: 0
	// Line 1447, Address: 0x137fa0, Func Offset: 0x10
	// Line 1449, Address: 0x137fb4, Func Offset: 0x24
	// Line 1451, Address: 0x137fc4, Func Offset: 0x34
	// Func End, Address: 0x137fd4, Func Offset: 0x44
}

