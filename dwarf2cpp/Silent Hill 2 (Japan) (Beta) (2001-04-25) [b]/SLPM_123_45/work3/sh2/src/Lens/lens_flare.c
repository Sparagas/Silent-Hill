typedef struct _anon0;
typedef struct _anon1;
typedef struct _VbWVSMATRIX;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _VbSCREENINFO;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _anon9;
typedef struct sh2gfw_TEX_HEAD;
typedef struct _anon10;
typedef struct _anon11;
typedef struct SubCharacter;
typedef struct _anon12;
typedef struct shSkelton;
typedef struct sh2gfw_Effect_Man;
typedef struct shBattleFight;
typedef struct sh2gfw_TexMAN;
typedef struct _anon13;
typedef struct sh2gfw_CLUTS_HEAD;
typedef struct sh2gfw_ALLTEXSYNC_MAN;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct shBattleInfo;
typedef struct _anon14;
typedef struct sh2gfw_POINTL_MATRIX;
typedef union Q_WORDDATA;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_WALL;
typedef union _anon15;
typedef struct _CL_HITPOLY_HEAD;
typedef struct sh2gfw_Env_ctl;
typedef struct _CL_VHIT_CHARA;
typedef struct _CL_VHIT_RESULT;
typedef union _anon16;

typedef void(*type_20)(SubCharacter*);
typedef void(*type_23)(SubCharacter*);

typedef unsigned long type_0[2];
typedef unsigned int type_1[4];
typedef float type_2[4];
typedef float type_3[4][4];
typedef float type_4[12];
typedef <unknown fundamental type (0xa510)> type_5[1024];
typedef float type_6[4][4];
typedef float type_7[4];
typedef _anon4 type_8[4];
typedef float type_9[7];
typedef float type_10[2];
typedef unsigned short type_11[4];
typedef unsigned long type_12[2];
typedef float type_13[7];
typedef unsigned long type_14[2];
typedef float type_15[7];
typedef int type_16[7];
typedef unsigned short type_17[7];
typedef float type_18[7];
typedef _anon6 type_19[4];
typedef float type_21[4];
typedef shAttackInfo type_22[46];
typedef float type_24[4];
typedef float type_25[4][4];
typedef unsigned char type_26[16];
typedef unsigned char type_27[16];
typedef float type_28[4];
typedef _anon6 type_29[7];
typedef unsigned long type_30[2];
typedef unsigned char type_31[4];
typedef float type_32[4];
typedef unsigned int type_33[4];
typedef unsigned short type_34[8];
typedef float type_35[4];
typedef unsigned char type_36[16];
typedef int type_37[4];
typedef <unknown fundamental type (0xa510)> type_38[160];
typedef Q_WORDDATA type_39[48];
typedef short type_40[8];
typedef Q_WORDDATA type_41[96];
typedef char type_42[16];
typedef sh2gfw_TexMAN* type_43[96];
typedef unsigned long type_44[2];
typedef sh2gfw_TexMAN type_45[96];
typedef _anon6 type_46[4];
typedef _anon4 type_47[2];
typedef _anon4 type_48[2][7];

struct _anon0
{
	unsigned int vifcode[4];
	_anon14 giftag;
	_anon9 bitbltbuf;
	long bitbltbufaddr;
	_anon12 trxpos;
	long trxposaddr;
	_anon13 trxreg;
	long trxregaddr;
	_anon8 finish;
	long finishaddr;
	_anon10 trxdir;
	long trxdiraddr;
};

struct _anon1
{
	float d[4][4];
};

struct _VbWVSMATRIX
{
	float wvm[4][4];
	float vsm[4][4];
	float wsm[4][4];
};

struct _anon2
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

struct _anon3
{
	unsigned char flare_inhibit_f;
	unsigned char water_inhibit_f;
	unsigned char lfl_sync_draw_func_exec_f;
	unsigned char draw_center_f;
	float tgt_l_eff_rate;
	float now_l_eff_rate;
	_anon4 scr_l_pos;
	float scr_l_ang_xy;
	float scr_l_ang_z;
	_anon6 l_screen_pos;
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

struct _anon4
{
	float x;
	float y;
	float z;
	float w;
};

struct _anon5
{
	float center_x;
	float center_y;
	float width;
	float height;
};

struct _anon6
{
	int x;
	int y;
	int z;
	int w;
};

struct _anon7
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

struct _anon8
{
	unsigned long pad00;
};

struct _anon9
{
	struct
	{
		unsigned long SBP : 14;
		unsigned long pad14 : 2;
		unsigned long SBW : 6;
		unsigned long pad22 : 2;
		unsigned long SPSM : 6;
		unsigned long pad30 : 2;
		unsigned long DBP : 14;
		unsigned long pad46 : 2;
		unsigned long DBW : 6;
		unsigned long pad54 : 2;
		unsigned long DPSM : 6;
		unsigned long pad62 : 2;
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

struct _anon10
{
	struct
	{
		unsigned long XDR : 2;
		unsigned long pad02 : 62;
	};
};

struct _anon11
{
	float light_pow;
	_anon4 world_light_vector;
	_anon4 world_light_pos;
};

struct SubCharacter
{
	int index;
	unsigned int status;
	unsigned int sub_status;
	unsigned int sub_st;
	short kind;
	short id;
	unsigned int step;
	_anon4 pos;
	_anon4 rot;
	_anon4 pos_spd;
	_anon4 rot_spd;
	_anon1 mat;
	shSkelton* sk_top;
	float eye_y;
	float center_y;
	float spd;
	float spd_org;
	float spd_y;
	float spd_roty;
	float grnd_normal[4];
	float grnd_height;
	_anon4 b_pos;
	_anon4 b_rot;
	int en_first_status;
	int colis_fall_timer;
	shBattleInfo battle;
	_CL_VHIT_RESULT eye;
	void(*function)(SubCharacter*);
	void(*effecter_function)(SubCharacter*);
	SubCharacter* pre;
	SubCharacter* next;
	unsigned char work[4];
	void* enemy_p;
};

struct _anon12
{
	struct
	{
		unsigned long SSAX : 11;
		unsigned long pad11 : 5;
		unsigned long SSAY : 11;
		unsigned long pad27 : 5;
		unsigned long DSAX : 11;
		unsigned long pad43 : 5;
		unsigned long DSAY : 11;
		unsigned long DIR : 2;
		unsigned long pad61 : 3;
	};
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon1 src_m;
	_anon4 src_t;
	_anon1 des_m;
	_anon4 des_t;
	_anon4 axis;
	float theta;
	float xx;
	float yy;
	float zz;
	float xy;
	float yz;
	float zx;
	unsigned short c_count;
	unsigned short c_speed;
	char change;
	char reserved;
	char is_key;
	char pad;
	void* untouchable;
};

struct sh2gfw_Effect_Man
{
	unsigned short effectid;
	unsigned short vifmark;
	unsigned short valid_id;
	unsigned short pads;
	unsigned int thr_cid;
	unsigned int thr_sid;
	<unknown fundamental type (0xa510)> Tex0Data;
	<unknown fundamental type (0xa510)> Alpha;
	void* pTexMAN;
	void* pTexHead;
	void* pTop;
	void* pPad;
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
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

struct _anon13
{
	struct
	{
		unsigned long RRW : 12;
		unsigned long pad12 : 20;
		unsigned long RRH : 12;
		unsigned long pad44 : 20;
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

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct shBattleArea
{
	float center;
	float radius;
};

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA spot_rot;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

struct shBattleInfo
{
	float pos[4];
	float vec[4];
	unsigned short id;
	unsigned short kind;
	float damage;
	float shock;
	int atk_result;
	float prev_atk_pos[4];
	SubCharacter* target;
	float hp;
	float hp_max;
	float hp_rate;
	unsigned int status;
	shBattleArea look;
	shBattleArea feel;
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

struct sh2gfw_POINTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
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

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

union _anon15
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
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
	float BaseAmbient[4];
	float VertexAmbient[4];
	float spot0_localpos[4];
	float spot0_localdir[4];
	sh2gfw_SPOTL_MATRIX SpotL0;
	float spot1_localpos[4];
	float spot1_localdir[4];
	sh2gfw_SPOTL_MATRIX SpotL1;
	float spot2_localpos[4];
	float spot2_localdir[4];
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

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon16 hobj;
};

union _anon16
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

shAttackInfo sh2_attack_list[46];
_anon5 screen_info;
_VbSCREENINFO VbScreenInfo;
int demo_status;
_anon3 light_flare_work;
<unknown fundamental type (0xa510)> now_z_value[160];
_anon11 light_info;
_anon7 cam0;
_VbWVSMATRIX VbWvsMatrix;
sh2gfw_Effect_Man LF_Tex_Work;
sh2gfw_ALLTEXSYNC_MAN AllTexSync_Man;
int Lens_Fl_Head;
sh2gfw_Env_ctl Env_ctl;
void* adr;
<unknown fundamental type (0xa510)> sh_lf_packet[1024];

void shLensFlareGetScreenInfo();
int shLensFlareCameraIsSmooth();
void shLensFlareSetLightSeed(_anon3* lf_work, _anon5* sc_info);
float shLensFlareOresenHokan(float* Y_ary, int Y_suu, float input_X, float min_X, float max_X);
float shLensFlareMakeEffectTargetRate(float light_eff_pow, _anon3* lf_work);
void shLensFlareMakeScreenPos(_anon3* lf_work, _anon4* ws_l_sxyz_p, _anon4* ws_l_vec_p, int scr_z);
void shLensFlareMakeScreenAngle(_anon3* lf_work, _anon4* ws_l_sxyz_p, _anon4* ws_l_vec_p);
void shGetJamesLightInfo(_anon11* l_info);
void shLensFlareMakeScreenInfo(_anon3* lf_work, _anon11* l_info);
void shLensFlareInit();
void shLensFlareExec(SubCharacter* scp, float light_intensity);

// 
// Start address: 0x18db20
void shLensFlareGetScreenInfo()
{
	// Line 493, Address: 0x18db20, Func Offset: 0
	// Line 494, Address: 0x18db30, Func Offset: 0x10
	// Line 495, Address: 0x18db40, Func Offset: 0x20
	// Line 496, Address: 0x18db50, Func Offset: 0x30
	// Line 503, Address: 0x18db60, Func Offset: 0x40
	// Func End, Address: 0x18db68, Func Offset: 0x48
}

// 
// Start address: 0x18db70
int shLensFlareCameraIsSmooth()
{
	// Line 1504, Address: 0x18db70, Func Offset: 0
	// Line 1505, Address: 0x18db84, Func Offset: 0x14
	// Line 1507, Address: 0x18db90, Func Offset: 0x20
	// Line 1508, Address: 0x18db94, Func Offset: 0x24
	// Func End, Address: 0x18db9c, Func Offset: 0x2c
}

// 
// Start address: 0x18dba0
void shLensFlareSetLightSeed(_anon3* lf_work, _anon5* sc_info)
{
	float wsm[4][4];
	_anon6 vi0;
	// Line 1597, Address: 0x18dba0, Func Offset: 0
	// Line 1601, Address: 0x18dbc4, Func Offset: 0x24
	// Line 1604, Address: 0x18dbd0, Func Offset: 0x30
	// Line 1610, Address: 0x18dbd8, Func Offset: 0x38
	// Line 1616, Address: 0x18dbf4, Func Offset: 0x54
	// Line 1620, Address: 0x18dc20, Func Offset: 0x80
	// Line 1632, Address: 0x18dd8c, Func Offset: 0x1ec
	// Func End, Address: 0x18ddb0, Func Offset: 0x210
}

// 
// Start address: 0x18de30
float shLensFlareOresenHokan(float* Y_ary, int Y_suu, float input_X, float min_X, float max_X)
{
	float tmp;
	int kukan_no;
	float kukan_w;
	float amari;
	float output_Y;
	// Line 1665, Address: 0x18de30, Func Offset: 0
	// Line 1668, Address: 0x18de50, Func Offset: 0x20
	// Line 1669, Address: 0x18de68, Func Offset: 0x38
	// Line 1670, Address: 0x18de84, Func Offset: 0x54
	// Line 1671, Address: 0x18dea4, Func Offset: 0x74
	// Line 1672, Address: 0x18deb0, Func Offset: 0x80
	// Line 1676, Address: 0x18deb8, Func Offset: 0x88
	// Line 1677, Address: 0x18dee0, Func Offset: 0xb0
	// Line 1678, Address: 0x18df0c, Func Offset: 0xdc
	// Line 1679, Address: 0x18df20, Func Offset: 0xf0
	// Line 1680, Address: 0x18df3c, Func Offset: 0x10c
	// Line 1681, Address: 0x18df4c, Func Offset: 0x11c
	// Line 1682, Address: 0x18df58, Func Offset: 0x128
	// Line 1688, Address: 0x18df60, Func Offset: 0x130
	// Line 1692, Address: 0x18df70, Func Offset: 0x140
	// Line 1693, Address: 0x18df78, Func Offset: 0x148
	// Line 1694, Address: 0x18df88, Func Offset: 0x158
	// Line 1695, Address: 0x18dfa0, Func Offset: 0x170
	// Line 1697, Address: 0x18dfa8, Func Offset: 0x178
	// Line 1702, Address: 0x18dff4, Func Offset: 0x1c4
	// Line 1703, Address: 0x18dff8, Func Offset: 0x1c8
	// Func End, Address: 0x18e00c, Func Offset: 0x1dc
}

// 
// Start address: 0x18e010
float shLensFlareMakeEffectTargetRate(float light_eff_pow, _anon3* lf_work)
{
	float ang_z_rate;
	float dist_rate;
	float pow_rate;
	float ret_tgt_rate;
	float ang_z_rate_dat[7];
	float dist_rate_dat[7];
	float pow_rate_dat[2];
	// Line 1723, Address: 0x18e010, Func Offset: 0
	// Line 1738, Address: 0x18e020, Func Offset: 0x10
	// Line 1758, Address: 0x18e048, Func Offset: 0x38
	// Line 1777, Address: 0x18e07c, Func Offset: 0x6c
	// Line 1782, Address: 0x18e0b4, Func Offset: 0xa4
	// Line 1785, Address: 0x18e0cc, Func Offset: 0xbc
	// Line 1789, Address: 0x18e110, Func Offset: 0x100
	// Line 1790, Address: 0x18e114, Func Offset: 0x104
	// Func End, Address: 0x18e124, Func Offset: 0x114
}

// 
// Start address: 0x18e130
void shLensFlareMakeScreenPos(_anon3* lf_work, _anon4* ws_l_sxyz_p, _anon4* ws_l_vec_p, int scr_z)
{
	float tmp_vec_z;
	_anon4 tmp_pos;
	float geom_y;
	float geom_x;
	// Line 1811, Address: 0x18e130, Func Offset: 0
	// Line 1816, Address: 0x18e144, Func Offset: 0x14
	// Line 1818, Address: 0x18e184, Func Offset: 0x54
	// Line 1819, Address: 0x18e1ac, Func Offset: 0x7c
	// Line 1823, Address: 0x18e1b4, Func Offset: 0x84
	// Line 1824, Address: 0x18e1ec, Func Offset: 0xbc
	// Line 1826, Address: 0x18e1f8, Func Offset: 0xc8
	// Line 1827, Address: 0x18e224, Func Offset: 0xf4
	// Line 1830, Address: 0x18e258, Func Offset: 0x128
	// Line 1838, Address: 0x18e28c, Func Offset: 0x15c
	// Line 1839, Address: 0x18e298, Func Offset: 0x168
	// Line 1842, Address: 0x18e2a4, Func Offset: 0x174
	// Line 1843, Address: 0x18e2b0, Func Offset: 0x180
	// Line 1844, Address: 0x18e2e0, Func Offset: 0x1b0
	// Line 1849, Address: 0x18e310, Func Offset: 0x1e0
	// Func End, Address: 0x18e31c, Func Offset: 0x1ec
}

// 
// Start address: 0x18e320
void shLensFlareMakeScreenAngle(_anon3* lf_work, _anon4* ws_l_sxyz_p, _anon4* ws_l_vec_p)
{
	_anon4 vec;
	float sin_z;
	float cos_z;
	_anon4 one_op_vec;
	_anon4 one_l_vec;
	_anon4 one_pos;
	// Line 1872, Address: 0x18e320, Func Offset: 0
	// Line 1878, Address: 0x18e334, Func Offset: 0x14
	// Line 1879, Address: 0x18e344, Func Offset: 0x24
	// Line 1884, Address: 0x18e354, Func Offset: 0x34
	// Line 1886, Address: 0x18e368, Func Offset: 0x48
	// Line 1888, Address: 0x18e378, Func Offset: 0x58
	// Line 1906, Address: 0x18e390, Func Offset: 0x70
	// Line 1913, Address: 0x18e3a4, Func Offset: 0x84
	// Line 1916, Address: 0x18e3b8, Func Offset: 0x98
	// Line 1922, Address: 0x18e3cc, Func Offset: 0xac
	// Line 1924, Address: 0x18e3e4, Func Offset: 0xc4
	// Func End, Address: 0x18e3f4, Func Offset: 0xd4
}

// 
// Start address: 0x18e460
void shGetJamesLightInfo(_anon11* l_info)
{
	// Line 1936, Address: 0x18e460, Func Offset: 0
	// Line 2058, Address: 0x18e46c, Func Offset: 0xc
	// Line 2065, Address: 0x18e484, Func Offset: 0x24
	// Line 2068, Address: 0x18e494, Func Offset: 0x34
	// Func End, Address: 0x18e4a4, Func Offset: 0x44
}

// 
// Start address: 0x18e4b0
void shLensFlareMakeScreenInfo(_anon3* lf_work, _anon11* l_info)
{
	float wsm[4][4];
	_anon4 ws_l_vec;
	_anon4 ws_l_pos;
	_anon1* wv_mat;
	// Line 2095, Address: 0x18e4b0, Func Offset: 0
	// Line 2104, Address: 0x18e4c4, Func Offset: 0x14
	// Line 2106, Address: 0x18e4d0, Func Offset: 0x20
	// Line 2113, Address: 0x18e4d4, Func Offset: 0x24
	// Line 2116, Address: 0x18e4ec, Func Offset: 0x3c
	// Line 2128, Address: 0x18e504, Func Offset: 0x54
	// Line 2132, Address: 0x18e518, Func Offset: 0x68
	// Line 2133, Address: 0x18e540, Func Offset: 0x90
	// Func End, Address: 0x18e554, Func Offset: 0xa4
}

// 
// Start address: 0x18e590
void shLensFlareInit()
{
	sh2gfw_CLUTS_HEAD* pCH;
	sh2gfw_TEX_HEAD* pTH;
	// Line 2148, Address: 0x18e590, Func Offset: 0
	// Line 2152, Address: 0x18e5a0, Func Offset: 0x10
	// Line 2154, Address: 0x18e5a8, Func Offset: 0x18
	// Line 2155, Address: 0x18e5b0, Func Offset: 0x20
	// Line 2159, Address: 0x18e5bc, Func Offset: 0x2c
	// Line 2160, Address: 0x18e5c4, Func Offset: 0x34
	// Line 2163, Address: 0x18e5cc, Func Offset: 0x3c
	// Line 2167, Address: 0x18e5f8, Func Offset: 0x68
	// Line 2171, Address: 0x18e604, Func Offset: 0x74
	// Func End, Address: 0x18e61c, Func Offset: 0x8c
}

// 
// Start address: 0x18e620
void shLensFlareExec(SubCharacter* scp, float light_intensity)
{
	int proj;
	int count;
	// Line 2247, Address: 0x18e620, Func Offset: 0
	// Line 2248, Address: 0x18e638, Func Offset: 0x18
	// Line 2256, Address: 0x18e640, Func Offset: 0x20
	// Line 2258, Address: 0x18e668, Func Offset: 0x48
	// Line 2268, Address: 0x18e67c, Func Offset: 0x5c
	// Line 2275, Address: 0x18e68c, Func Offset: 0x6c
	// Line 2281, Address: 0x18e6a4, Func Offset: 0x84
	// Line 2283, Address: 0x18e6b8, Func Offset: 0x98
	// Line 2289, Address: 0x18e6f4, Func Offset: 0xd4
	// Line 2294, Address: 0x18e700, Func Offset: 0xe0
	// Line 2302, Address: 0x18e71c, Func Offset: 0xfc
	// Line 2331, Address: 0x18e734, Func Offset: 0x114
	// Func End, Address: 0x18e74c, Func Offset: 0x12c
}

