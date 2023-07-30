typedef struct sh2gfw_BLOCK_MAN;
typedef struct sh2gfw_TEX_HEAD;
typedef struct _anon0;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct sh2gfw_AREA_HEAD;
typedef struct DemoLight_Work;
typedef struct sh2gfw_BLOCK_HEAD;
typedef struct sh2gfw_BLOCKGLOBAL_HEAD;
typedef struct sh2gfw_BLOCKLOCAL_HEAD;
typedef struct sh2gfw_GSREGS_HEAD;
typedef struct sh2gfw_GIFTAG_HEAD;
typedef union Q_WORDDATA;
typedef struct sh2gfw_CLUTS_HEAD;
typedef struct _SH2_SYS;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct sh2gfw_VU_PARMS;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct AAA_0;
typedef struct sh2gfw_Env_ctl;
typedef struct AAA_1;
typedef struct shAttackInfo;
typedef union _anon1;


typedef float type_0[4][4];
typedef unsigned short type_1[4];
typedef float type_2[4];
typedef float type_3[4][2];
typedef shAttackInfo type_4[66];
typedef short type_5[3];
typedef short type_6[3];
typedef short type_7[3];
typedef sh2gfw_GSREGS_HEAD* type_8[4];
typedef short type_9[3];
typedef sh2gfw_GIFTAG_HEAD* type_10[16];
typedef sh2gfw_GIFTAG_HEAD* type_11[16][4];
typedef unsigned short type_12[8];
typedef unsigned short type_13[8][16];
typedef unsigned short type_14[8][16][4];
typedef sh2gfw_TEX_HEAD* type_15[4];
typedef sh2gfw_CLUTS_HEAD* type_16[4];
typedef unsigned int type_17[4];
typedef unsigned char type_18[4];
typedef unsigned short type_19[8];
typedef unsigned char type_20[16];
typedef unsigned char type_21[16][4];
typedef float type_22[4];
typedef unsigned char type_23[16];
typedef unsigned char type_24[16];
typedef unsigned char type_25[16][16];
typedef unsigned char type_26[16][16][4];
typedef int type_27[4];
typedef unsigned char type_28[16];
typedef short type_29[8];
typedef char type_30[16];
typedef unsigned char type_31[16];
typedef unsigned long type_32[2];
typedef void* type_33[4];
typedef unsigned int type_34[8];
typedef Q_WORDDATA* type_35[4];
typedef unsigned int type_36[4];
typedef int type_37[8];
typedef int type_38[8];
typedef unsigned char type_39[16];
typedef unsigned char type_40[16];
typedef sh2gfw_BLOCK_MAN type_41[6];
typedef Q_WORDDATA type_42[2];
typedef sh2gfw_GIFTAG_HEAD* type_43[16];
typedef unsigned int type_44[3];
typedef unsigned char type_45[8];
typedef unsigned char type_46[8][8];
typedef unsigned int type_47[3];
typedef Q_WORDDATA type_48[3];
typedef float type_49[4];
typedef float type_50[4][4];
typedef float type_51[4][4];
typedef unsigned short type_52[3];
typedef unsigned short type_53[3];

struct sh2gfw_BLOCK_MAN
{
	sh2gfw_AREA_HEAD* pA_H;
	sh2gfw_BLOCK_HEAD* pB_H;
	sh2gfw_BLOCKGLOBAL_HEAD* pBG_H;
	sh2gfw_BLOCKLOCAL_HEAD* pBL_H;
	sh2gfw_GSREGS_HEAD* pGSREGS_H[4];
	sh2gfw_GIFTAG_HEAD* pGIF_H[16][4];
	unsigned short idVU_tag[8][16][4];
	sh2gfw_TEX_HEAD* pLTEX_H[4];
	sh2gfw_CLUTS_HEAD* pLCLUT_H[4];
	unsigned char gifnum[4];
	unsigned char vunum[16][4];
	unsigned char geom_amount[16][16][4];
	short texnum;
	short blockid;
	int ObjCondition;
	Q_WORDDATA* p_Matrices;
	void* pTexMAN[4];
	Q_WORDDATA* pBlockPack[4];
	unsigned int bp_leng[4];
	int vif1mark[8];
	int slotid[8];
	sh2gfw_GSREGS_HEAD* pTR_GSREGS_H;
	sh2gfw_TEX_HEAD* pTR_LTEX_H;
	sh2gfw_CLUTS_HEAD* pTR_LCLUT_H;
	void* pTR_TexMAN;
	void* pKT_GTR;
	void* pKT_LTR;
	short tr_gbl_gifnum;
	short tr_gifnum;
	unsigned char tr_gbl_vunum;
	unsigned char tr_vunum;
	unsigned char view_clip_flg;
	unsigned char view_tile;
	sh2gfw_GIFTAG_HEAD* pTR_GIF_H[16];
	unsigned char tileViewClipInfo[8][8];
	float Local_World[4][4];
	float World_Local[4][4];
	Q_WORDDATA calc_parms[3];
	Q_WORDDATA bitmsk_data;
	_anon0 blk_LightData;
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

struct _anon0
{
	float light_vect[4][4];
	float light_col[4][4];
	float light_amb[4];
	float light_pam[4][2];
	Q_WORDDATA LightPos1;
	Q_WORDDATA VertexAmbient;
	Q_WORDDATA BaseVertexColor;
	Q_WORDDATA BaseAmbient;
	Q_WORDDATA ALPHA_clear;
	float LightRealPos[4];
	float LightRealDir[4];
	unsigned int light_type_buf;
	unsigned int light_type_now;
	unsigned int pad1;
	unsigned int pad2;
};

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA dirvec;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

struct sh2gfw_AREA_HEAD
{
	unsigned int area_id;
	unsigned int toGlobalTexHead;
	unsigned int toGlobalClutsHead;
	unsigned int date;
};

struct DemoLight_Work
{
	short Parallel[3];
	short Parallel_Cid[3];
	short Point[3];
	short Point_Cid[3];
	short Spot;
	short Amb;
	short Ref;
	float demo_p_light0[4];
	float demo_p_color0[4];
	float demo_p_light1[4];
	float demo_p_color1[4];
	float demo_p_light2[4];
	float demo_p_color2[4];
	float demo_ambient[4];
	float demo_VertexAmbient[4];
	float demo_BaseAmbient[4];
	float demo_BaseVertexColor[4];
	float demo_spotcol[4];
	float demo_spotdir[4];
	float demo_spotpos[4];
	float demo_spotdecay[4];
	float demo_pointcol0[4];
	float demo_pointpos0[4];
	float demo_pointdecay0[4];
	float demo_pointcol1[4];
	float demo_pointpos1[4];
	float demo_pointdecay1[4];
	float demo_pointcol2[4];
	float demo_pointpos2[4];
	float demo_pointdecay2[4];
	float demo_RefLight_dir[4];
	float demo_RefLight_col[4];
};

struct sh2gfw_BLOCK_HEAD
{
	unsigned int block_id;
	unsigned int toGlobaldef;
	unsigned int toLocaldef;
	unsigned int toRawblockdataParms;
	unsigned int toLocalTex[3];
	unsigned int toLocalcluts[3];
	unsigned int texnum;
	unsigned char globaltexnum;
	unsigned char transtexnum;
	unsigned char divflg;
	unsigned char padc;
};

struct sh2gfw_BLOCKGLOBAL_HEAD
{
	unsigned int gsregsamount;
	unsigned int transamount;
	unsigned char gtexnum;
	unsigned char gtransnum;
	unsigned short pads;
	unsigned int pad2;
};

struct sh2gfw_BLOCKLOCAL_HEAD
{
	unsigned short gsregsamount[3];
	unsigned short transamount[3];
	unsigned short ltexnum;
	unsigned short pads;
};

struct sh2gfw_GSREGS_HEAD
{
	unsigned int clutssize;
	unsigned int toNextDATA;
	unsigned int toTexHead;
	unsigned char clutamount;
	unsigned char transamount;
	unsigned char eop_flg;
	unsigned char tr_flg;
	unsigned char fmt[16];
	unsigned char transparency[16];
};

struct sh2gfw_GIFTAG_HEAD
{
	unsigned short gsregs_amount;
	unsigned char trans_flg;
	unsigned char eop_flg;
	unsigned int toNextGIFHEAD;
	unsigned short id;
	unsigned char tcc;
	unsigned char tfx;
	unsigned char abe;
	unsigned char pad1;
	unsigned char pad2;
	unsigned char pad3;
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

struct _SH2_SYS
{
	unsigned int step[8];
	unsigned int pre_playable;
	int main_status;
	unsigned int soft_reset;
	unsigned int frame_cnt;
};

struct sh2gfw_POINTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct AAA_0
{
	float col[4];
	float pos[4];
	float decay[4];
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

struct AAA_1
{
	float col[4];
	float pos[4];
	float decay[4];
};

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon1 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

union _anon1
{
	shBattleFight fight;
	shBattleShot shot;
};

shAttackInfo sh2_attack_list[66];
DemoLight_Work DemoLightWork;
float DARK_Hosei;
sh2gfw_Env_ctl Env_ctl;
sh2gfw_VU_PARMS VU1_PARMS;
_SH2_SYS Sh2sys;
sh2gfw_BLOCK_MAN b_man[6];

void sh2gfw_Init_DemoLight_Work();
int sh2gfw_Set_DemoRefrectionHighLight(float* dir, float* col);
int sh2gfw_Get_DemoRefrectionHightLight(float* dir, float* col);
int sh2gfw_Check_DemoRefrectionHightLight();
int sh2gfw_Set_PallarelLight(float* dir, float* color, int n);
int sh2gfw_Check_ParallelDemoLight(int n);
int sh2gfw_Get_ParallelDemoLight(int n, float* dir, float* col);
void sh2gfw_Revive_ParallelDemoLight(int n);
void sh2gfw_Set_DemoPointLight(int n, float* pos, float* col, float falloff_start, float falloff_end);
int sh2gfw_Check_DemoPointLight();
int sh2gfw_Get_DemoPointLight(int n, float* pos, float* col, float* decay);
int sh2gfw_Check_DemoSpotLight();
void sh2gfw_Get_DemoSpotParm(float* svt);
void sh2gfw_Get_DemoSpotPosDirCol(float* pos, float* dir, float* col);
void sh2gfw_Set_SpotLight(float* dir, float* pos, float* color, float falloff_start, float falloff_end, float spread_pi);
void sh2gfw_setparal3LGT_blk(void* pbman, float* light_dir0, float* light_dir1, float* light_dir2, float* col0, float* col1, float* col2, float* ambient);
void sh2gfw_LightSet_ForBG(void* pb_man);
void sh2gfw_Store_SpotLight();
void sh2gfw_setsp1para2LGT_blk(void* pbman, void* sm, float* light0, float* color0, float* light1, float* color1, float* amb);
int sh2gfw_Get_NightOrDay();
int SetLightMode(int nod);
void Get_DemoOrPresetLight(float* pl, float* pc, int g);
void Get_DemoOrPresetAmbient(float* ab);
void sh2gfw_Set_JmsSpot_OnOrOff();

// 
// Start address: 0x17d2a0
void sh2gfw_Init_DemoLight_Work()
{
	// Line 80, Address: 0x17d2a0, Func Offset: 0
	// Line 81, Address: 0x17d2b8, Func Offset: 0x18
	// Line 83, Address: 0x17d2d0, Func Offset: 0x30
	// Line 84, Address: 0x17d2e8, Func Offset: 0x48
	// Line 85, Address: 0x17d300, Func Offset: 0x60
	// Line 87, Address: 0x17d318, Func Offset: 0x78
	// Func End, Address: 0x17d320, Func Offset: 0x80
}

// 
// Start address: 0x17d320
int sh2gfw_Set_DemoRefrectionHighLight(float* dir, float* col)
{
	// Line 135, Address: 0x17d320, Func Offset: 0
	// Line 136, Address: 0x17d32c, Func Offset: 0xc
	// Line 137, Address: 0x17d33c, Func Offset: 0x1c
	// Line 138, Address: 0x17d34c, Func Offset: 0x2c
	// Func End, Address: 0x17d354, Func Offset: 0x34
}

// 
// Start address: 0x17d360
int sh2gfw_Get_DemoRefrectionHightLight(float* dir, float* col)
{
	// Line 146, Address: 0x17d360, Func Offset: 0
	// Line 147, Address: 0x17d370, Func Offset: 0x10
	// Line 148, Address: 0x17d380, Func Offset: 0x20
	// Line 149, Address: 0x17d390, Func Offset: 0x30
	// Line 152, Address: 0x17d39c, Func Offset: 0x3c
	// Func End, Address: 0x17d3a4, Func Offset: 0x44
}

// 
// Start address: 0x17d3b0
int sh2gfw_Check_DemoRefrectionHightLight()
{
	// Line 159, Address: 0x17d3b0, Func Offset: 0
	// Line 160, Address: 0x17d3b8, Func Offset: 0x8
	// Func End, Address: 0x17d3c0, Func Offset: 0x10
}

// 
// Start address: 0x17d3c0
int sh2gfw_Set_PallarelLight(float* dir, float* color, int n)
{
	int k;
	// Line 168, Address: 0x17d3c0, Func Offset: 0
	// Line 173, Address: 0x17d3e0, Func Offset: 0x20
	// Line 175, Address: 0x17d3f8, Func Offset: 0x38
	// Line 176, Address: 0x17d404, Func Offset: 0x44
	// Line 178, Address: 0x17d42c, Func Offset: 0x6c
	// Line 180, Address: 0x17d43c, Func Offset: 0x7c
	// Line 181, Address: 0x17d450, Func Offset: 0x90
	// Line 182, Address: 0x17d46c, Func Offset: 0xac
	// Line 186, Address: 0x17d478, Func Offset: 0xb8
	// Line 187, Address: 0x17d48c, Func Offset: 0xcc
	// Line 188, Address: 0x17d4a8, Func Offset: 0xe8
	// Line 189, Address: 0x17d4c4, Func Offset: 0x104
	// Line 191, Address: 0x17d4d0, Func Offset: 0x110
	// Line 193, Address: 0x17d4d8, Func Offset: 0x118
	// Line 194, Address: 0x17d4ec, Func Offset: 0x12c
	// Line 195, Address: 0x17d508, Func Offset: 0x148
	// Line 196, Address: 0x17d524, Func Offset: 0x164
	// Line 200, Address: 0x17d530, Func Offset: 0x170
	// Line 203, Address: 0x17d53c, Func Offset: 0x17c
	// Line 205, Address: 0x17d540, Func Offset: 0x180
	// Func End, Address: 0x17d55c, Func Offset: 0x19c
}

// 
// Start address: 0x17d560
int sh2gfw_Check_ParallelDemoLight(int n)
{
	// Line 242, Address: 0x17d560, Func Offset: 0
	// Line 243, Address: 0x17d574, Func Offset: 0x14
	// Func End, Address: 0x17d57c, Func Offset: 0x1c
}

// 
// Start address: 0x17d580
int sh2gfw_Get_ParallelDemoLight(int n, float* dir, float* col)
{
	float svt[4];
	// Line 252, Address: 0x17d580, Func Offset: 0
	// Line 254, Address: 0x17d59c, Func Offset: 0x1c
	// Line 256, Address: 0x17d5ac, Func Offset: 0x2c
	// Line 257, Address: 0x17d5b4, Func Offset: 0x34
	// Line 259, Address: 0x17d5bc, Func Offset: 0x3c
	// Line 261, Address: 0x17d5c8, Func Offset: 0x48
	// Line 262, Address: 0x17d5cc, Func Offset: 0x4c
	// Func End, Address: 0x17d5d4, Func Offset: 0x54
}

// 
// Start address: 0x17d5e0
void sh2gfw_Revive_ParallelDemoLight(int n)
{
	// Line 269, Address: 0x17d5e0, Func Offset: 0
	// Line 270, Address: 0x17d5f8, Func Offset: 0x18
	// Func End, Address: 0x17d600, Func Offset: 0x20
}

// 
// Start address: 0x17d600
void sh2gfw_Set_DemoPointLight(int n, float* pos, float* col, float falloff_start, float falloff_end)
{
	AAA_1* pl;
	// Line 284, Address: 0x17d600, Func Offset: 0
	// Line 285, Address: 0x17d608, Func Offset: 0x8
	// Line 286, Address: 0x17d618, Func Offset: 0x18
	// Line 288, Address: 0x17d62c, Func Offset: 0x2c
	// Line 289, Address: 0x17d634, Func Offset: 0x34
	// Line 290, Address: 0x17d63c, Func Offset: 0x3c
	// Line 291, Address: 0x17d640, Func Offset: 0x40
	// Line 292, Address: 0x17d644, Func Offset: 0x44
	// Func End, Address: 0x17d64c, Func Offset: 0x4c
}

// 
// Start address: 0x17d650
int sh2gfw_Check_DemoPointLight()
{
	// Line 305, Address: 0x17d650, Func Offset: 0
	// Line 306, Address: 0x17d670, Func Offset: 0x20
	// Func End, Address: 0x17d678, Func Offset: 0x28
}

// 
// Start address: 0x17d680
int sh2gfw_Get_DemoPointLight(int n, float* pos, float* col, float* decay)
{
	AAA_0* pl;
	// Line 327, Address: 0x17d680, Func Offset: 0
	// Line 329, Address: 0x17d69c, Func Offset: 0x1c
	// Line 330, Address: 0x17d6a4, Func Offset: 0x24
	// Line 331, Address: 0x17d6b0, Func Offset: 0x30
	// Line 332, Address: 0x17d6b8, Func Offset: 0x38
	// Line 333, Address: 0x17d6c0, Func Offset: 0x40
	// Line 334, Address: 0x17d6c8, Func Offset: 0x48
	// Line 336, Address: 0x17d6d4, Func Offset: 0x54
	// Line 338, Address: 0x17d6d8, Func Offset: 0x58
	// Func End, Address: 0x17d6e0, Func Offset: 0x60
}

// 
// Start address: 0x17d6e0
int sh2gfw_Check_DemoSpotLight()
{
	// Line 349, Address: 0x17d6e0, Func Offset: 0
	// Line 350, Address: 0x17d6e8, Func Offset: 0x8
	// Func End, Address: 0x17d6f0, Func Offset: 0x10
}

// 
// Start address: 0x17d6f0
void sh2gfw_Get_DemoSpotParm(float* svt)
{
	// Line 357, Address: 0x17d6f0, Func Offset: 0
	// Line 359, Address: 0x17d700, Func Offset: 0x10
	// Func End, Address: 0x17d708, Func Offset: 0x18
}

// 
// Start address: 0x17d710
void sh2gfw_Get_DemoSpotPosDirCol(float* pos, float* dir, float* col)
{
	// Line 367, Address: 0x17d710, Func Offset: 0
	// Line 368, Address: 0x17d720, Func Offset: 0x10
	// Line 369, Address: 0x17d730, Func Offset: 0x20
	// Line 372, Address: 0x17d740, Func Offset: 0x30
	// Func End, Address: 0x17d748, Func Offset: 0x38
}

// 
// Start address: 0x17d750
void sh2gfw_Set_SpotLight(float* dir, float* pos, float* color, float falloff_start, float falloff_end, float spread_pi)
{
	// Line 392, Address: 0x17d750, Func Offset: 0
	// Line 394, Address: 0x17d768, Func Offset: 0x18
	// Line 396, Address: 0x17d774, Func Offset: 0x24
	// Line 397, Address: 0x17d784, Func Offset: 0x34
	// Line 398, Address: 0x17d794, Func Offset: 0x44
	// Line 400, Address: 0x17d7a4, Func Offset: 0x54
	// Line 401, Address: 0x17d7ac, Func Offset: 0x5c
	// Line 402, Address: 0x17d7c0, Func Offset: 0x70
	// Line 403, Address: 0x17d7c8, Func Offset: 0x78
	// Line 405, Address: 0x17d7d0, Func Offset: 0x80
	// Func End, Address: 0x17d7e8, Func Offset: 0x98
}

// 
// Start address: 0x17d7f0
void sh2gfw_setparal3LGT_blk(void* pbman, float* light_dir0, float* light_dir1, float* light_dir2, float* col0, float* col1, float* col2, float* ambient)
{
	float gref;
	float gcol[4];
	float iv[4];
	_anon0* slv;
	sh2gfw_BLOCK_MAN* pB_man;
	float tmp[4];
	float work[4][4];
	// Line 422, Address: 0x17d7f0, Func Offset: 0
	// Line 426, Address: 0x17d83c, Func Offset: 0x4c
	// Line 428, Address: 0x17d840, Func Offset: 0x50
	// Line 430, Address: 0x17d844, Func Offset: 0x54
	// Line 431, Address: 0x17d858, Func Offset: 0x68
	// Line 432, Address: 0x17d870, Func Offset: 0x80
	// Line 434, Address: 0x17d888, Func Offset: 0x98
	// Line 436, Address: 0x17d898, Func Offset: 0xa8
	// Line 439, Address: 0x17d8ac, Func Offset: 0xbc
	// Line 442, Address: 0x17d8c8, Func Offset: 0xd8
	// Line 443, Address: 0x17d8dc, Func Offset: 0xec
	// Line 448, Address: 0x17d8ec, Func Offset: 0xfc
	// Line 449, Address: 0x17d904, Func Offset: 0x114
	// Line 450, Address: 0x17d91c, Func Offset: 0x12c
	// Line 453, Address: 0x17d934, Func Offset: 0x144
	// Line 456, Address: 0x17d948, Func Offset: 0x158
	// Line 460, Address: 0x17d95c, Func Offset: 0x16c
	// Line 461, Address: 0x17d974, Func Offset: 0x184
	// Line 462, Address: 0x17d98c, Func Offset: 0x19c
	// Line 464, Address: 0x17d9b0, Func Offset: 0x1c0
	// Line 466, Address: 0x17d9c0, Func Offset: 0x1d0
	// Line 467, Address: 0x17d9d4, Func Offset: 0x1e4
	// Line 468, Address: 0x17d9e0, Func Offset: 0x1f0
	// Line 469, Address: 0x17d9ec, Func Offset: 0x1fc
	// Line 475, Address: 0x17d9f8, Func Offset: 0x208
	// Line 476, Address: 0x17da28, Func Offset: 0x238
	// Line 477, Address: 0x17da30, Func Offset: 0x240
	// Line 479, Address: 0x17da44, Func Offset: 0x254
	// Line 481, Address: 0x17da78, Func Offset: 0x288
	// Line 482, Address: 0x17da7c, Func Offset: 0x28c
	// Line 505, Address: 0x17da90, Func Offset: 0x2a0
	// Line 506, Address: 0x17da98, Func Offset: 0x2a8
	// Line 508, Address: 0x17daa0, Func Offset: 0x2b0
	// Line 509, Address: 0x17daac, Func Offset: 0x2bc
	// Line 511, Address: 0x17dab4, Func Offset: 0x2c4
	// Func End, Address: 0x17daec, Func Offset: 0x2fc
}

// 
// Start address: 0x17daf0
void sh2gfw_LightSet_ForBG(void* pb_man)
{
	int DemoFlg;
	float ab[4];
	float pc2[4];
	float pc1[4];
	float pc0[4];
	float pl2[4];
	float pl1[4];
	float pl0[4];
	sh2gfw_BLOCK_MAN* pB_man;
	// Line 521, Address: 0x17daf0, Func Offset: 0
	// Line 522, Address: 0x17db00, Func Offset: 0x10
	// Line 528, Address: 0x17db04, Func Offset: 0x14
	// Line 529, Address: 0x17db18, Func Offset: 0x28
	// Line 530, Address: 0x17db2c, Func Offset: 0x3c
	// Line 531, Address: 0x17db40, Func Offset: 0x50
	// Line 533, Address: 0x17db4c, Func Offset: 0x5c
	// Line 535, Address: 0x17db5c, Func Offset: 0x6c
	// Line 538, Address: 0x17db84, Func Offset: 0x94
	// Line 542, Address: 0x17db8c, Func Offset: 0x9c
	// Line 545, Address: 0x17db98, Func Offset: 0xa8
	// Line 547, Address: 0x17dba0, Func Offset: 0xb0
	// Line 548, Address: 0x17dbc0, Func Offset: 0xd0
	// Line 549, Address: 0x17dbe8, Func Offset: 0xf8
	// Line 552, Address: 0x17dc08, Func Offset: 0x118
	// Line 554, Address: 0x17dc18, Func Offset: 0x128
	// Line 556, Address: 0x17dc28, Func Offset: 0x138
	// Line 558, Address: 0x17dc30, Func Offset: 0x140
	// Line 559, Address: 0x17dc58, Func Offset: 0x168
	// Line 568, Address: 0x17dc60, Func Offset: 0x170
	// Line 570, Address: 0x17dc70, Func Offset: 0x180
	// Line 572, Address: 0x17dc80, Func Offset: 0x190
	// Line 575, Address: 0x17dc88, Func Offset: 0x198
	// Line 580, Address: 0x17dcb0, Func Offset: 0x1c0
	// Func End, Address: 0x17dcc8, Func Offset: 0x1d8
}

// 
// Start address: 0x17dcd0
void sh2gfw_Store_SpotLight()
{
	// Line 587, Address: 0x17dcd0, Func Offset: 0
	// Line 588, Address: 0x17dcd8, Func Offset: 0x8
	// Line 591, Address: 0x17dce8, Func Offset: 0x18
	// Line 593, Address: 0x17dd00, Func Offset: 0x30
	// Line 595, Address: 0x17dd18, Func Offset: 0x48
	// Line 596, Address: 0x17dd20, Func Offset: 0x50
	// Line 600, Address: 0x17dd38, Func Offset: 0x68
	// Line 602, Address: 0x17dd40, Func Offset: 0x70
	// Line 606, Address: 0x17dd5c, Func Offset: 0x8c
	// Line 612, Address: 0x17dd78, Func Offset: 0xa8
	// Line 615, Address: 0x17dd88, Func Offset: 0xb8
	// Line 619, Address: 0x17dda0, Func Offset: 0xd0
	// Line 626, Address: 0x17ddb8, Func Offset: 0xe8
	// Func End, Address: 0x17ddc8, Func Offset: 0xf8
}

// 
// Start address: 0x17ddd0
void sh2gfw_setsp1para2LGT_blk(void* pbman, void* sm, float* light0, float* color0, float* light1, float* color1, float* amb)
{
	float gref;
	float gcol[4];
	float iv[4];
	sh2gfw_SPOTL_MATRIX* splm;
	_anon0* slv;
	sh2gfw_BLOCK_MAN* pB_man;
	float coloralpha;
	float tmp[4];
	float pos[4];
	float dir_vec[4];
	float work[4][4];
	// Line 640, Address: 0x17ddd0, Func Offset: 0
	// Line 644, Address: 0x17de18, Func Offset: 0x48
	// Line 649, Address: 0x17de1c, Func Offset: 0x4c
	// Line 650, Address: 0x17de2c, Func Offset: 0x5c
	// Line 651, Address: 0x17de34, Func Offset: 0x64
	// Line 652, Address: 0x17de3c, Func Offset: 0x6c
	// Line 654, Address: 0x17de40, Func Offset: 0x70
	// Line 656, Address: 0x17de44, Func Offset: 0x74
	// Line 657, Address: 0x17de54, Func Offset: 0x84
	// Line 660, Address: 0x17de60, Func Offset: 0x90
	// Line 661, Address: 0x17de74, Func Offset: 0xa4
	// Line 662, Address: 0x17de8c, Func Offset: 0xbc
	// Line 665, Address: 0x17dea4, Func Offset: 0xd4
	// Line 667, Address: 0x17deb0, Func Offset: 0xe0
	// Line 670, Address: 0x17dec4, Func Offset: 0xf4
	// Line 673, Address: 0x17dee0, Func Offset: 0x110
	// Line 676, Address: 0x17def4, Func Offset: 0x124
	// Line 677, Address: 0x17df04, Func Offset: 0x134
	// Line 679, Address: 0x17df10, Func Offset: 0x140
	// Line 680, Address: 0x17df24, Func Offset: 0x154
	// Line 687, Address: 0x17df38, Func Offset: 0x168
	// Line 690, Address: 0x17df4c, Func Offset: 0x17c
	// Line 692, Address: 0x17df58, Func Offset: 0x188
	// Line 695, Address: 0x17df78, Func Offset: 0x1a8
	// Line 697, Address: 0x17df88, Func Offset: 0x1b8
	// Line 703, Address: 0x17df98, Func Offset: 0x1c8
	// Line 709, Address: 0x17df9c, Func Offset: 0x1cc
	// Line 711, Address: 0x17dfb4, Func Offset: 0x1e4
	// Line 712, Address: 0x17dfcc, Func Offset: 0x1fc
	// Line 714, Address: 0x17dfe4, Func Offset: 0x214
	// Line 716, Address: 0x17dffc, Func Offset: 0x22c
	// Line 717, Address: 0x17e014, Func Offset: 0x244
	// Line 718, Address: 0x17e038, Func Offset: 0x268
	// Line 720, Address: 0x17e048, Func Offset: 0x278
	// Line 721, Address: 0x17e05c, Func Offset: 0x28c
	// Line 722, Address: 0x17e068, Func Offset: 0x298
	// Line 723, Address: 0x17e074, Func Offset: 0x2a4
	// Line 728, Address: 0x17e080, Func Offset: 0x2b0
	// Line 729, Address: 0x17e0b0, Func Offset: 0x2e0
	// Line 730, Address: 0x17e0b8, Func Offset: 0x2e8
	// Line 732, Address: 0x17e0cc, Func Offset: 0x2fc
	// Line 734, Address: 0x17e0f4, Func Offset: 0x324
	// Line 735, Address: 0x17e0f8, Func Offset: 0x328
	// Line 742, Address: 0x17e10c, Func Offset: 0x33c
	// Line 745, Address: 0x17e120, Func Offset: 0x350
	// Line 747, Address: 0x17e134, Func Offset: 0x364
	// Line 752, Address: 0x17e138, Func Offset: 0x368
	// Line 753, Address: 0x17e140, Func Offset: 0x370
	// Line 755, Address: 0x17e148, Func Offset: 0x378
	// Line 756, Address: 0x17e154, Func Offset: 0x384
	// Line 757, Address: 0x17e15c, Func Offset: 0x38c
	// Func End, Address: 0x17e198, Func Offset: 0x3c8
}

// 
// Start address: 0x17e1a0
int sh2gfw_Get_NightOrDay()
{
	// Line 768, Address: 0x17e1a0, Func Offset: 0
	// Line 770, Address: 0x17e1ac, Func Offset: 0xc
	// Func End, Address: 0x17e1b4, Func Offset: 0x14
}

// 
// Start address: 0x17e1c0
int SetLightMode(int nod)
{
	// Line 783, Address: 0x17e1c0, Func Offset: 0
	// Line 786, Address: 0x17e1d4, Func Offset: 0x14
	// Func End, Address: 0x17e1dc, Func Offset: 0x1c
}

// 
// Start address: 0x17e1e0
void Get_DemoOrPresetLight(float* pl, float* pc, int g)
{
	// Line 960, Address: 0x17e1e0, Func Offset: 0
	// Line 961, Address: 0x17e1f0, Func Offset: 0x10
	// Line 962, Address: 0x17e20c, Func Offset: 0x2c
	// Line 964, Address: 0x17e234, Func Offset: 0x54
	// Line 965, Address: 0x17e244, Func Offset: 0x64
	// Line 966, Address: 0x17e258, Func Offset: 0x78
	// Line 968, Address: 0x17e260, Func Offset: 0x80
	// Line 969, Address: 0x17e270, Func Offset: 0x90
	// Line 970, Address: 0x17e284, Func Offset: 0xa4
	// Line 972, Address: 0x17e28c, Func Offset: 0xac
	// Line 973, Address: 0x17e29c, Func Offset: 0xbc
	// Line 976, Address: 0x17e2b0, Func Offset: 0xd0
	// Line 977, Address: 0x17e2b8, Func Offset: 0xd8
	// Line 979, Address: 0x17e2e0, Func Offset: 0x100
	// Line 980, Address: 0x17e2f0, Func Offset: 0x110
	// Line 981, Address: 0x17e304, Func Offset: 0x124
	// Line 983, Address: 0x17e30c, Func Offset: 0x12c
	// Line 984, Address: 0x17e31c, Func Offset: 0x13c
	// Line 985, Address: 0x17e330, Func Offset: 0x150
	// Line 987, Address: 0x17e338, Func Offset: 0x158
	// Line 988, Address: 0x17e348, Func Offset: 0x168
	// Line 995, Address: 0x17e35c, Func Offset: 0x17c
	// Func End, Address: 0x17e370, Func Offset: 0x190
}

// 
// Start address: 0x17e370
void Get_DemoOrPresetAmbient(float* ab)
{
	// Line 1000, Address: 0x17e370, Func Offset: 0
	// Line 1002, Address: 0x17e378, Func Offset: 0x8
	// Line 1003, Address: 0x17e388, Func Offset: 0x18
	// Line 1004, Address: 0x17e398, Func Offset: 0x28
	// Line 1005, Address: 0x17e3a0, Func Offset: 0x30
	// Line 1008, Address: 0x17e3b0, Func Offset: 0x40
	// Func End, Address: 0x17e3c0, Func Offset: 0x50
}

// 
// Start address: 0x17e3c0
void sh2gfw_Set_JmsSpot_OnOrOff()
{
	int* mp;
	// Line 1023, Address: 0x17e3c0, Func Offset: 0
	// Line 1026, Address: 0x17e3c8, Func Offset: 0x8
	// Line 1029, Address: 0x17e3dc, Func Offset: 0x1c
	// Line 1030, Address: 0x17e3e4, Func Offset: 0x24
	// Line 1039, Address: 0x17e464, Func Offset: 0xa4
	// Line 1046, Address: 0x17e46c, Func Offset: 0xac
	// Func End, Address: 0x17e47c, Func Offset: 0xbc
}

