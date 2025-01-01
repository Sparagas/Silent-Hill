typedef struct sh2gfw_BLOCKGLOBAL_HEAD;
typedef struct Item;
typedef struct sh2gfw_BLOCKLOCAL_HEAD;
typedef struct sh2gfw_TEX_HEAD;
typedef struct _anon0;
typedef struct sh2gfw_BLOCK_MAN;
typedef struct sh2gfw_AREA_HEAD;
typedef struct sh2gfw_BLOCK_HEAD;
typedef struct sh2gfw_GSREGS_HEAD;
typedef struct sh2gfw_GIFTAG_HEAD;
typedef struct DynamicLight;
typedef struct sh2gfw_CLUTS_HEAD;
typedef union Q_WORDDATA;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct James_SpotLight_Man;
typedef struct sh2gfw_Env_ctl;


typedef sh2gfw_BLOCK_MAN type_0[6];
typedef unsigned int type_1[2];
typedef unsigned short type_2[11];
typedef unsigned short type_3[3];
typedef unsigned short type_4[3];
typedef unsigned short type_5[4];
typedef unsigned short type_6[3];
typedef float type_7[4][2];
typedef sh2gfw_GSREGS_HEAD* type_8[4];
typedef sh2gfw_GIFTAG_HEAD* type_9[16];
typedef sh2gfw_GIFTAG_HEAD* type_10[16][4];
typedef unsigned short type_11[8];
typedef unsigned short type_12[8][16];
typedef unsigned short type_13[8][16][4];
typedef sh2gfw_TEX_HEAD* type_14[4];
typedef sh2gfw_CLUTS_HEAD* type_15[4];
typedef unsigned char type_16[4];
typedef float type_17[4];
typedef unsigned char type_18[16];
typedef unsigned char type_19[16][4];
typedef float type_20[4];
typedef float type_21[4][4];
typedef unsigned char type_22[16];
typedef unsigned char type_23[16][16];
typedef unsigned int type_24[4];
typedef unsigned char type_25[16][16][4];
typedef unsigned short type_26[8];
typedef unsigned char type_27[16];
typedef float type_28[4];
typedef unsigned char type_29[16];
typedef unsigned char type_30[16];
typedef int type_31[4];
typedef void* type_32[4];
typedef short type_33[8];
typedef Q_WORDDATA* type_34[4];
typedef char type_35[16];
typedef unsigned int type_36[4];
typedef unsigned long type_37[2];
typedef int type_38[8];
typedef int type_39[8];
typedef unsigned char type_40[16];
typedef unsigned char type_41[16];
typedef sh2gfw_GIFTAG_HEAD* type_42[16];
typedef unsigned int type_43[3];
typedef unsigned char type_44[8];
typedef unsigned char type_45[8][8];
typedef unsigned int type_46[3];
typedef Q_WORDDATA type_47[3];

struct sh2gfw_BLOCKGLOBAL_HEAD
{
	unsigned int gsregsamount;
	unsigned int transamount;
	unsigned char gtexnum;
	unsigned char gtransnum;
	unsigned short pads;
	unsigned int pad2;
};

struct Item
{
	unsigned int flag[2];
	unsigned short number[11];
	unsigned char light_switch;
	unsigned char radio_switch;
	unsigned char radio_volume;
	unsigned char equip;
	float ampoule_efficacy;
	unsigned short event_use[3];
	unsigned short short_pad;
	unsigned char last_cursor;
};

struct sh2gfw_BLOCKLOCAL_HEAD
{
	unsigned short gsregsamount[3];
	unsigned short transamount[3];
	unsigned short ltexnum;
	unsigned short pads;
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

struct sh2gfw_AREA_HEAD
{
	unsigned int area_id;
	unsigned int toGlobalTexHead;
	unsigned int toGlobalClutsHead;
	unsigned int date;
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

struct DynamicLight
{
	float NowCamDir[4];
	float BeforeCamDir[4];
	float NowDir[4];
	float BeforeDir[4];
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

struct James_SpotLight_Man
{
	short GunFlg;
	short Spot_Light_OnOff;
	short MicroCodeMode;
	short MicroChange;
	short SpotTime;
	short MaxTime;
	short MinTime;
	short SDt;
	short DarkTrimMax;
	short DarkDt;
	short NowDarkParm;
	short Pads;
	short FlickerRatio;
	short FlickerTime;
	short FlickerMaxTime;
	short FlickerFlg;
	float Gun_Refrection;
	float MaxIntensity;
	float MinIntensity;
	float NowIntensity;
	float MaxAlpha;
	float MinAlpha;
	float NowAlpha;
	float IntensityFactor;
	float DarkFactor;
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

James_SpotLight_Man JmsSpotMan;
Item item;
sh2gfw_BLOCK_MAN b_man[6];
sh2gfw_Env_ctl Env_ctl;
float colvec[4];
float colref[4];
DynamicLight DynamicLW;

void sh2gfw_ALLInit_SpotMan();
void sh2gfw_Propagate_JmsGunLight();
void sh2gfw_Set_JmsGunLight();
float sh2gfw_Get_JmsGunLight();
float sh2gfw_Get_GunLight();
void sh2gfw_Clear_MicroChange();
void sh2gfw_Set_MicroChange();
void sh2gfw_Change_MicroFLGS();
int sh2gfw_Check_MicroCode();
void sh2gfw_Set_MicroCode(int xx);
float sh2gfw_Get_DarkTrimFactor();
float sh2gfw_Get_MaxDarkScaleFactor();
int sh2gfw_Check_JmsSpotOnOff();
void sh2gfw_On_JmsSPOT();
int sh2gfw_TrueOff_JmsSPOT();
void sh2gfw_Off_JmsSPOT();
void sh2gfw_ForceOff_JmsSPOT();
void sh2gfw_ForceOn_JmsSPOT();
float LinearTrim(float Yen, float Yst, float Xen, float Xst, float Parm);
void Flicker_Jms_Spot();
void Calculate_Jms_Spot();
int Light_Spot_OnOffCheck2();
void Programed_Light_Set();

// 
// Start address: 0x28e0b0
void sh2gfw_ALLInit_SpotMan()
{
	// Line 93, Address: 0x28e0b0, Func Offset: 0
	// Line 94, Address: 0x28e0b8, Func Offset: 0x8
	// Line 95, Address: 0x28e0c0, Func Offset: 0x10
	// Line 96, Address: 0x28e0c8, Func Offset: 0x18
	// Line 98, Address: 0x28e0d0, Func Offset: 0x20
	// Line 99, Address: 0x28e0d8, Func Offset: 0x28
	// Line 100, Address: 0x28e0e4, Func Offset: 0x34
	// Line 101, Address: 0x28e0f0, Func Offset: 0x40
	// Line 103, Address: 0x28e0f8, Func Offset: 0x48
	// Line 104, Address: 0x28e104, Func Offset: 0x54
	// Line 105, Address: 0x28e10c, Func Offset: 0x5c
	// Line 108, Address: 0x28e114, Func Offset: 0x64
	// Line 109, Address: 0x28e120, Func Offset: 0x70
	// Line 110, Address: 0x28e128, Func Offset: 0x78
	// Line 111, Address: 0x28e134, Func Offset: 0x84
	// Line 113, Address: 0x28e13c, Func Offset: 0x8c
	// Line 114, Address: 0x28e144, Func Offset: 0x94
	// Line 115, Address: 0x28e150, Func Offset: 0xa0
	// Line 116, Address: 0x28e160, Func Offset: 0xb0
	// Line 117, Address: 0x28e168, Func Offset: 0xb8
	// Line 118, Address: 0x28e178, Func Offset: 0xc8
	// Line 119, Address: 0x28e180, Func Offset: 0xd0
	// Line 120, Address: 0x28e188, Func Offset: 0xd8
	// Line 121, Address: 0x28e194, Func Offset: 0xe4
	// Line 123, Address: 0x28e19c, Func Offset: 0xec
	// Func End, Address: 0x28e1a4, Func Offset: 0xf4
}

// 
// Start address: 0x28e1b0
void sh2gfw_Propagate_JmsGunLight()
{
	// Line 134, Address: 0x28e1b0, Func Offset: 0
	// Line 136, Address: 0x28e1c0, Func Offset: 0x10
	// Line 137, Address: 0x28e1e8, Func Offset: 0x38
	// Line 138, Address: 0x28e1f4, Func Offset: 0x44
	// Line 139, Address: 0x28e1fc, Func Offset: 0x4c
	// Line 142, Address: 0x28e204, Func Offset: 0x54
	// Line 144, Address: 0x28e20c, Func Offset: 0x5c
	// Line 146, Address: 0x28e214, Func Offset: 0x64
	// Func End, Address: 0x28e21c, Func Offset: 0x6c
}

// 
// Start address: 0x28e220
void sh2gfw_Set_JmsGunLight()
{
	// Line 150, Address: 0x28e220, Func Offset: 0
	// Line 151, Address: 0x28e22c, Func Offset: 0xc
	// Line 152, Address: 0x28e238, Func Offset: 0x18
	// Func End, Address: 0x28e240, Func Offset: 0x20
}

// 
// Start address: 0x28e240
float sh2gfw_Get_JmsGunLight()
{
	// Line 158, Address: 0x28e240, Func Offset: 0
	// Line 162, Address: 0x28e27c, Func Offset: 0x3c
	// Func End, Address: 0x28e284, Func Offset: 0x44
}

// 
// Start address: 0x28e290
float sh2gfw_Get_GunLight()
{
	// Line 169, Address: 0x28e290, Func Offset: 0
	// Line 173, Address: 0x28e2b8, Func Offset: 0x28
	// Func End, Address: 0x28e2c0, Func Offset: 0x30
}

// 
// Start address: 0x28e2c0
void sh2gfw_Clear_MicroChange()
{
	// Line 196, Address: 0x28e2c0, Func Offset: 0
	// Line 197, Address: 0x28e2c8, Func Offset: 0x8
	// Func End, Address: 0x28e2d0, Func Offset: 0x10
}

// 
// Start address: 0x28e2d0
void sh2gfw_Set_MicroChange()
{
	// Line 199, Address: 0x28e2d0, Func Offset: 0
	// Line 200, Address: 0x28e2e4, Func Offset: 0x14
	// Func End, Address: 0x28e2ec, Func Offset: 0x1c
}

// 
// Start address: 0x28e2f0
void sh2gfw_Change_MicroFLGS()
{
	// Line 202, Address: 0x28e2f0, Func Offset: 0
	// Line 203, Address: 0x28e314, Func Offset: 0x24
	// Func End, Address: 0x28e31c, Func Offset: 0x2c
}

// 
// Start address: 0x28e320
int sh2gfw_Check_MicroCode()
{
	// Line 207, Address: 0x28e320, Func Offset: 0
	// Line 208, Address: 0x28e328, Func Offset: 0x8
	// Func End, Address: 0x28e330, Func Offset: 0x10
}

// 
// Start address: 0x28e330
void sh2gfw_Set_MicroCode(int xx)
{
	// Line 211, Address: 0x28e330, Func Offset: 0
	// Line 212, Address: 0x28e33c, Func Offset: 0xc
	// Func End, Address: 0x28e344, Func Offset: 0x14
}

// 
// Start address: 0x28e350
float sh2gfw_Get_DarkTrimFactor()
{
	// Line 222, Address: 0x28e350, Func Offset: 0
	// Line 224, Address: 0x28e358, Func Offset: 0x8
	// Func End, Address: 0x28e360, Func Offset: 0x10
}

// 
// Start address: 0x28e360
float sh2gfw_Get_MaxDarkScaleFactor()
{
	int* mp;
	// Line 229, Address: 0x28e360, Func Offset: 0
	// Line 236, Address: 0x28e368, Func Offset: 0x8
	// Line 238, Address: 0x28e380, Func Offset: 0x20
	// Line 242, Address: 0x28e390, Func Offset: 0x30
	// Line 243, Address: 0x28e398, Func Offset: 0x38
	// Line 248, Address: 0x28e3d8, Func Offset: 0x78
	// Line 253, Address: 0x28e3e4, Func Offset: 0x84
	// Line 258, Address: 0x28e3f0, Func Offset: 0x90
	// Func End, Address: 0x28e400, Func Offset: 0xa0
}

// 
// Start address: 0x28e400
int sh2gfw_Check_JmsSpotOnOff()
{
	// Line 264, Address: 0x28e400, Func Offset: 0
	// Line 265, Address: 0x28e408, Func Offset: 0x8
	// Func End, Address: 0x28e410, Func Offset: 0x10
}

// 
// Start address: 0x28e410
void sh2gfw_On_JmsSPOT()
{
	int slot;
	// Line 267, Address: 0x28e410, Func Offset: 0
	// Line 274, Address: 0x28e41c, Func Offset: 0xc
	// Line 275, Address: 0x28e42c, Func Offset: 0x1c
	// Line 281, Address: 0x28e43c, Func Offset: 0x2c
	// Line 282, Address: 0x28e448, Func Offset: 0x38
	// Line 284, Address: 0x28e468, Func Offset: 0x58
	// Line 289, Address: 0x28e480, Func Offset: 0x70
	// Line 291, Address: 0x28e494, Func Offset: 0x84
	// Line 293, Address: 0x28e4a0, Func Offset: 0x90
	// Line 295, Address: 0x28e4ac, Func Offset: 0x9c
	// Line 296, Address: 0x28e4bc, Func Offset: 0xac
	// Line 300, Address: 0x28e4c8, Func Offset: 0xb8
	// Line 301, Address: 0x28e4d4, Func Offset: 0xc4
	// Line 308, Address: 0x28e4e0, Func Offset: 0xd0
	// Func End, Address: 0x28e4f4, Func Offset: 0xe4
}

// 
// Start address: 0x28e500
int sh2gfw_TrueOff_JmsSPOT()
{
	int slot;
	// Line 316, Address: 0x28e500, Func Offset: 0
	// Line 320, Address: 0x28e50c, Func Offset: 0xc
	// Line 321, Address: 0x28e51c, Func Offset: 0x1c
	// Line 324, Address: 0x28e52c, Func Offset: 0x2c
	// Line 326, Address: 0x28e53c, Func Offset: 0x3c
	// Line 327, Address: 0x28e548, Func Offset: 0x48
	// Line 329, Address: 0x28e568, Func Offset: 0x68
	// Line 334, Address: 0x28e580, Func Offset: 0x80
	// Line 335, Address: 0x28e594, Func Offset: 0x94
	// Line 337, Address: 0x28e5a0, Func Offset: 0xa0
	// Line 338, Address: 0x28e5a8, Func Offset: 0xa8
	// Line 339, Address: 0x28e5b4, Func Offset: 0xb4
	// Line 341, Address: 0x28e5d4, Func Offset: 0xd4
	// Line 345, Address: 0x28e5ec, Func Offset: 0xec
	// Line 346, Address: 0x28e5f0, Func Offset: 0xf0
	// Line 347, Address: 0x28e604, Func Offset: 0x104
	// Line 349, Address: 0x28e610, Func Offset: 0x110
	// Line 352, Address: 0x28e630, Func Offset: 0x130
	// Line 354, Address: 0x28e640, Func Offset: 0x140
	// Line 355, Address: 0x28e648, Func Offset: 0x148
	// Line 358, Address: 0x28e654, Func Offset: 0x154
	// Line 359, Address: 0x28e660, Func Offset: 0x160
	// Func End, Address: 0x28e674, Func Offset: 0x174
}

// 
// Start address: 0x28e680
void sh2gfw_Off_JmsSPOT()
{
	// Line 365, Address: 0x28e680, Func Offset: 0
	// Line 367, Address: 0x28e688, Func Offset: 0x8
	// Line 368, Address: 0x28e698, Func Offset: 0x18
	// Line 369, Address: 0x28e6a8, Func Offset: 0x28
	// Line 370, Address: 0x28e6b8, Func Offset: 0x38
	// Line 371, Address: 0x28e6c4, Func Offset: 0x44
	// Func End, Address: 0x28e6d4, Func Offset: 0x54
}

// 
// Start address: 0x28e6e0
void sh2gfw_ForceOff_JmsSPOT()
{
	// Line 378, Address: 0x28e6e0, Func Offset: 0
	// Line 380, Address: 0x28e6e8, Func Offset: 0x8
	// Line 381, Address: 0x28e6f8, Func Offset: 0x18
	// Line 383, Address: 0x28e708, Func Offset: 0x28
	// Line 385, Address: 0x28e710, Func Offset: 0x30
	// Line 386, Address: 0x28e71c, Func Offset: 0x3c
	// Line 391, Address: 0x28e724, Func Offset: 0x44
	// Line 392, Address: 0x28e72c, Func Offset: 0x4c
	// Line 396, Address: 0x28e734, Func Offset: 0x54
	// Func End, Address: 0x28e744, Func Offset: 0x64
}

// 
// Start address: 0x28e750
void sh2gfw_ForceOn_JmsSPOT()
{
	// Line 408, Address: 0x28e750, Func Offset: 0
	// Line 410, Address: 0x28e758, Func Offset: 0x8
	// Line 411, Address: 0x28e768, Func Offset: 0x18
	// Line 413, Address: 0x28e778, Func Offset: 0x28
	// Line 414, Address: 0x28e780, Func Offset: 0x30
	// Line 417, Address: 0x28e790, Func Offset: 0x40
	// Line 419, Address: 0x28e7a0, Func Offset: 0x50
	// Func End, Address: 0x28e7b0, Func Offset: 0x60
}

// 
// Start address: 0x28e7b0
float LinearTrim(float Yen, float Yst, float Xen, float Xst, float Parm)
{
	// Line 456, Address: 0x28e7b0, Func Offset: 0
	// Line 457, Address: 0x28e7d0, Func Offset: 0x20
	// Func End, Address: 0x28e7d8, Func Offset: 0x28
}

// 
// Start address: 0x28e7e0
void Flicker_Jms_Spot()
{
	unsigned int isd;
	unsigned int irc;
	unsigned int ira;
	// Line 465, Address: 0x28e7e0, Func Offset: 0
	// Line 466, Address: 0x28e7e8, Func Offset: 0x8
	// Line 467, Address: 0x28e7fc, Func Offset: 0x1c
	// Line 469, Address: 0x28e818, Func Offset: 0x38
	// Line 470, Address: 0x28e820, Func Offset: 0x40
	// Line 472, Address: 0x28e830, Func Offset: 0x50
	// Line 473, Address: 0x28e838, Func Offset: 0x58
	// Line 475, Address: 0x28e840, Func Offset: 0x60
	// Line 477, Address: 0x28e848, Func Offset: 0x68
	// Line 486, Address: 0x28e850, Func Offset: 0x70
	// Line 490, Address: 0x28e858, Func Offset: 0x78
	// Line 491, Address: 0x28e870, Func Offset: 0x90
	// Line 497, Address: 0x28e878, Func Offset: 0x98
	// Line 498, Address: 0x28e8c8, Func Offset: 0xe8
	// Line 504, Address: 0x28e8fc, Func Offset: 0x11c
	// Line 509, Address: 0x28e91c, Func Offset: 0x13c
	// Line 512, Address: 0x28e92c, Func Offset: 0x14c
	// Func End, Address: 0x28e93c, Func Offset: 0x15c
}

// 
// Start address: 0x28e940
void Calculate_Jms_Spot()
{
	float factor;
	// Line 514, Address: 0x28e940, Func Offset: 0
	// Line 522, Address: 0x28e948, Func Offset: 0x8
	// Line 524, Address: 0x28e964, Func Offset: 0x24
	// Line 525, Address: 0x28e990, Func Offset: 0x50
	// Line 526, Address: 0x28e998, Func Offset: 0x58
	// Line 527, Address: 0x28e9a0, Func Offset: 0x60
	// Line 528, Address: 0x28e9cc, Func Offset: 0x8c
	// Line 529, Address: 0x28e9d4, Func Offset: 0x94
	// Line 533, Address: 0x28e9dc, Func Offset: 0x9c
	// Line 553, Address: 0x28ea34, Func Offset: 0xf4
	// Line 558, Address: 0x28ea58, Func Offset: 0x118
	// Line 560, Address: 0x28ea60, Func Offset: 0x120
	// Line 561, Address: 0x28ea6c, Func Offset: 0x12c
	// Line 562, Address: 0x28eab8, Func Offset: 0x178
	// Line 567, Address: 0x28eac0, Func Offset: 0x180
	// Func End, Address: 0x28ead0, Func Offset: 0x190
}

// 
// Start address: 0x28ead0
int Light_Spot_OnOffCheck2()
{
	// Line 582, Address: 0x28ead0, Func Offset: 0
	// Line 586, Address: 0x28eae4, Func Offset: 0x14
	// Func End, Address: 0x28eaec, Func Offset: 0x1c
}

// 
// Start address: 0x28eaf0
void Programed_Light_Set()
{
	int slot;
	int ipara;
	float aimdir[4];
	float plane[4];
	float tmp[4];
	float MaxFactor;
	float factor;
	float inner;
	// Line 590, Address: 0x28eaf0, Func Offset: 0
	// Line 596, Address: 0x28eb04, Func Offset: 0x14
	// Line 598, Address: 0x28eb14, Func Offset: 0x24
	// Line 599, Address: 0x28eb2c, Func Offset: 0x3c
	// Line 601, Address: 0x28eb44, Func Offset: 0x54
	// Line 603, Address: 0x28eb54, Func Offset: 0x64
	// Line 605, Address: 0x28eb70, Func Offset: 0x80
	// Line 606, Address: 0x28eb8c, Func Offset: 0x9c
	// Line 607, Address: 0x28eb9c, Func Offset: 0xac
	// Line 609, Address: 0x28ebb4, Func Offset: 0xc4
	// Line 610, Address: 0x28ebd4, Func Offset: 0xe4
	// Line 611, Address: 0x28ebf8, Func Offset: 0x108
	// Line 612, Address: 0x28ec0c, Func Offset: 0x11c
	// Line 613, Address: 0x28ec24, Func Offset: 0x134
	// Line 619, Address: 0x28ec38, Func Offset: 0x148
	// Line 621, Address: 0x28ec58, Func Offset: 0x168
	// Line 623, Address: 0x28ec68, Func Offset: 0x178
	// Line 624, Address: 0x28ec80, Func Offset: 0x190
	// Line 626, Address: 0x28ec88, Func Offset: 0x198
	// Line 627, Address: 0x28eca8, Func Offset: 0x1b8
	// Line 633, Address: 0x28ecbc, Func Offset: 0x1cc
	// Line 634, Address: 0x28eccc, Func Offset: 0x1dc
	// Line 641, Address: 0x28ecdc, Func Offset: 0x1ec
	// Line 643, Address: 0x28ecec, Func Offset: 0x1fc
	// Line 644, Address: 0x28ecf8, Func Offset: 0x208
	// Line 646, Address: 0x28ed18, Func Offset: 0x228
	// Line 651, Address: 0x28ed30, Func Offset: 0x240
	// Line 653, Address: 0x28ed44, Func Offset: 0x254
	// Line 655, Address: 0x28ed50, Func Offset: 0x260
	// Line 657, Address: 0x28ed5c, Func Offset: 0x26c
	// Line 658, Address: 0x28ed6c, Func Offset: 0x27c
	// Line 659, Address: 0x28ed78, Func Offset: 0x288
	// Line 660, Address: 0x28ed84, Func Offset: 0x294
	// Line 661, Address: 0x28ed90, Func Offset: 0x2a0
	// Line 664, Address: 0x28eda0, Func Offset: 0x2b0
	// Line 666, Address: 0x28eda8, Func Offset: 0x2b8
	// Line 668, Address: 0x28edcc, Func Offset: 0x2dc
	// Line 669, Address: 0x28edd4, Func Offset: 0x2e4
	// Line 675, Address: 0x28eddc, Func Offset: 0x2ec
	// Line 676, Address: 0x28edec, Func Offset: 0x2fc
	// Line 677, Address: 0x28edf4, Func Offset: 0x304
	// Line 678, Address: 0x28ee0c, Func Offset: 0x31c
	// Line 681, Address: 0x28ee14, Func Offset: 0x324
	// Line 685, Address: 0x28ee20, Func Offset: 0x330
	// Line 687, Address: 0x28ee48, Func Offset: 0x358
	// Line 689, Address: 0x28ee58, Func Offset: 0x368
	// Line 691, Address: 0x28ee68, Func Offset: 0x378
	// Line 692, Address: 0x28ee7c, Func Offset: 0x38c
	// Line 693, Address: 0x28ee9c, Func Offset: 0x3ac
	// Line 694, Address: 0x28eeb4, Func Offset: 0x3c4
	// Line 696, Address: 0x28eebc, Func Offset: 0x3cc
	// Line 697, Address: 0x28eec4, Func Offset: 0x3d4
	// Line 701, Address: 0x28eedc, Func Offset: 0x3ec
	// Line 706, Address: 0x28eee4, Func Offset: 0x3f4
	// Line 709, Address: 0x28eeec, Func Offset: 0x3fc
	// Line 710, Address: 0x28eef4, Func Offset: 0x404
	// Line 712, Address: 0x28ef20, Func Offset: 0x430
	// Line 714, Address: 0x28ef2c, Func Offset: 0x43c
	// Line 715, Address: 0x28ef6c, Func Offset: 0x47c
	// Line 716, Address: 0x28ef74, Func Offset: 0x484
	// Line 717, Address: 0x28ef7c, Func Offset: 0x48c
	// Line 720, Address: 0x28ef84, Func Offset: 0x494
	// Line 721, Address: 0x28ef9c, Func Offset: 0x4ac
	// Line 722, Address: 0x28efa4, Func Offset: 0x4b4
	// Line 723, Address: 0x28efbc, Func Offset: 0x4cc
	// Line 724, Address: 0x28efc8, Func Offset: 0x4d8
	// Line 725, Address: 0x28efd0, Func Offset: 0x4e0
	// Line 732, Address: 0x28efe0, Func Offset: 0x4f0
	// Func End, Address: 0x28effc, Func Offset: 0x50c
}

