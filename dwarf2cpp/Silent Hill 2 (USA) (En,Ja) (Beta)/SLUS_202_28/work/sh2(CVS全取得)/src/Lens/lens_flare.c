typedef struct _anon0;
typedef struct _VbSCREENINFO;
typedef struct _anon1;
typedef struct SubCharacter;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _CL_VHIT_WALL;
typedef struct _anon5;
typedef struct shSkelton;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _anon6;
typedef struct shAttackInfo;
typedef struct _anon7;
typedef struct _CL_VHIT_CHARA;
typedef struct _anon8;
typedef union _anon9;
typedef struct _CL_VHIT_RESULT;
typedef struct _anon10;
typedef union _anon11;
typedef struct sh2gfw_TEX_HEAD;
typedef struct _anon12;
typedef struct _anon13;
typedef struct _anon14;
typedef struct sh2gfw_TexMAN;
typedef struct sh2gfw_CLUTS_HEAD;
typedef struct sh2gfw_ALLTEXSYNC_MAN;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef union Q_WORDDATA;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct sh2gfw_Env_ctl;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct sh2gfw_Effect_Man;
typedef struct _anon15;
typedef struct _VbWVSMATRIX;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct _anon16;

typedef void(*type_29)(SubCharacter*);
typedef void(*type_33)(SubCharacter*);

typedef <unknown fundamental type (0xa510)> type_0[1024];
typedef float type_1[12];
typedef unsigned long type_2[2];
typedef float type_3[2];
typedef float type_4[4];
typedef float type_5[4];
typedef _anon1 type_6[4];
typedef float type_7[7];
typedef unsigned short type_8[4];
typedef float type_9[4];
typedef float type_10[4][4];
typedef _anon6 type_11[2];
typedef _anon12 type_12[2];
typedef float type_13[7];
typedef float type_14[7];
typedef unsigned long type_15[2];
typedef int type_16[7];
typedef float type_17[7];
typedef shAttackInfo type_18[66];
typedef unsigned int type_19[4];
typedef float type_20[4];
typedef unsigned short type_21[7];
typedef _anon2 type_22[4];
typedef float type_23[4][4];
typedef unsigned char type_24[16];
typedef unsigned int type_25[4];
typedef unsigned long type_26[2];
typedef unsigned char type_27[16];
typedef unsigned short type_28[8];
typedef _anon2 type_30[7];
typedef float type_31[4];
typedef unsigned char type_32[16];
typedef int type_34[4];
typedef short type_35[8];
typedef char type_36[16];
typedef unsigned long type_37[2];
typedef unsigned char type_38[4];
typedef Q_WORDDATA type_39[48];
typedef sh2gfw_TexMAN type_40[96];
typedef _anon2 type_41[4];
typedef _anon1 type_42[2];
typedef _anon1 type_43[2][7];
typedef float type_44[4];
typedef float type_45[4];
typedef float type_46[4][4];
typedef unsigned long type_47[2];

struct _anon0
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

struct _anon1
{
	float x;
	float y;
	float z;
	float w;
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
	unsigned int model_type;
	_anon1 pos;
	_anon1 rot;
	_anon1 pos_spd;
	_anon1 rot_spd;
	_anon8 mat;
	shSkelton* sk_top;
	float eye_y;
	float center_y;
	float spd;
	float spd_org;
	float spd_y;
	float spd_roty;
	float grnd_normal[4];
	float grnd_height;
	_anon1 b_pos;
	_anon1 b_rot;
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

struct _anon2
{
	int x;
	int y;
	int z;
	int w;
};

struct _anon3
{
	struct
	{
		unsigned long XDR : 2;
		unsigned long pad02 : 62;
	};
};

struct _anon4
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

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
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

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon8 src_m;
	_anon1 src_t;
	_anon8 des_m;
	_anon1 des_t;
	_anon1 axis;
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

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
};

struct _anon6
{
	unsigned char flare_inhibit_f;
	unsigned char water_inhibit_f;
	unsigned char lfl_sync_draw_func_exec_f;
	unsigned char draw_center_f;
	float tgt_l_eff_rate;
	float now_l_eff_rate;
	_anon1 scr_l_pos;
	float scr_l_ang_xy;
	float scr_l_ang_z;
	_anon2 l_screen_pos;
};

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon9 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

struct _anon7
{
	float center_x;
	float center_y;
	float width;
	float height;
};

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

struct _anon8
{
	float d[4][4];
};

union _anon9
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon11 hobj;
};

struct _anon10
{
	struct
	{
		unsigned long RRW : 12;
		unsigned long pad12 : 20;
		unsigned long RRH : 12;
		unsigned long pad44 : 20;
	};
};

union _anon11
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
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

struct _anon12
{
	float light_pow;
	_anon1 world_light_vector;
	_anon1 world_light_pos;
};

struct _anon13
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

struct _anon14
{
	unsigned int vifcode[4];
	_anon13 giftag;
	_anon0 bitbltbuf;
	long bitbltbufaddr;
	_anon4 trxpos;
	long trxposaddr;
	_anon10 trxreg;
	long trxregaddr;
	_anon16 finish;
	long finishaddr;
	_anon3 trxdir;
	long trxdiraddr;
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

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA dirvec;
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

struct sh2gfw_POINTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
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

struct sh2gfw_Effect_Man
{
	unsigned short effectid;
	unsigned short vifmark;
	unsigned short valid_id;
	unsigned short pads;
	int thr_cid;
	int thr_sid;
	<unknown fundamental type (0xa510)> Tex0Data;
	<unknown fundamental type (0xa510)> Alpha;
	void* pTexMAN;
	void* pTexHead;
	void* pTop;
	void* pPad;
};

struct _anon15
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

struct _VbWVSMATRIX
{
	float wvm[4][4];
	float vsm[4][4];
	float wsm[4][4];
};

struct shBattleArea
{
	float center;
	float radius;
};

struct shBattleInfo
{
	float pos[4];
	float vec[4];
	unsigned short id;
	unsigned short kind;
	float dead_timer;
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
	unsigned char se;
};

struct _anon16
{
	unsigned long pad00;
};

shAttackInfo sh2_attack_list[66];
_anon7 screen_info;
_VbSCREENINFO VbScreenInfo;
int demo_status;
int lf_flicker_on;
int lf_flicker_off;
_anon12 light_info[2];
_anon15 cam0;
_VbWVSMATRIX VbWvsMatrix;
sh2gfw_Effect_Man LF_Tex_Work;
sh2gfw_ALLTEXSYNC_MAN AllTexSync_Man;
int Lens_Fl_Head;
_anon6 light_flare_work[2];
float reverse_light_rate;
sh2gfw_Env_ctl Env_ctl;
void* adr;
<unknown fundamental type (0xa510)> sh_lf_packet[1024];

void shLensFlareGetScreenInfo();
int shLensFlareCameraIsSmooth();
int shLensFlareLightCenterIsVisible(_anon6* lf_info);
void shLensFlareSetLightSeed(_anon6* lf_work, _anon7* sc_info, int type);
float shLensFlareOresenHokan(float* Y_ary, int Y_suu, float input_X, float min_X, float max_X);
float shLensFlareMakeEffectTargetRate(float light_eff_pow, _anon6* lf_work);
void shLensFlareMakeScreenPos(_anon6* lf_work, _anon1* ws_l_sxyz_p, _anon1* ws_l_vec_p, int scr_z);
void shLensFlareMakeScreenAngle(_anon6* lf_work, _anon1* ws_l_sxyz_p, _anon1* ws_l_vec_p);
void shGetJamesLightInfo(_anon12* l_info, int type);
void shLensFlareMakeScreenInfo(_anon6* lf_work, _anon12* l_info);
void shLensFlareInit();
void shLensFlareExec(SubCharacter* scp, float light_intensity, int type);

// 
// Start address: 0x187020
void shLensFlareGetScreenInfo()
{
	// Line 388, Address: 0x187020, Func Offset: 0
	// Line 389, Address: 0x187030, Func Offset: 0x10
	// Line 390, Address: 0x187040, Func Offset: 0x20
	// Line 391, Address: 0x187050, Func Offset: 0x30
	// Line 398, Address: 0x187060, Func Offset: 0x40
	// Func End, Address: 0x187068, Func Offset: 0x48
}

// 
// Start address: 0x187070
int shLensFlareCameraIsSmooth()
{
	// Line 1400, Address: 0x187070, Func Offset: 0
	// Line 1403, Address: 0x187084, Func Offset: 0x14
	// Func End, Address: 0x18708c, Func Offset: 0x1c
}

// 
// Start address: 0x187090
int shLensFlareLightCenterIsVisible(_anon6* lf_info)
{
	int zval;
	unsigned int zbuffer;
	unsigned short* now_z_value;
	_anon14* StoreIm;
	// Line 1422, Address: 0x187090, Func Offset: 0
	// Line 1429, Address: 0x1870a0, Func Offset: 0x10
	// Line 1433, Address: 0x1870b8, Func Offset: 0x28
	// Line 1440, Address: 0x187100, Func Offset: 0x70
	// Line 1442, Address: 0x187110, Func Offset: 0x80
	// Line 1461, Address: 0x187118, Func Offset: 0x88
	// Line 1462, Address: 0x187128, Func Offset: 0x98
	// Line 1463, Address: 0x18713c, Func Offset: 0xac
	// Line 1465, Address: 0x187148, Func Offset: 0xb8
	// Line 1466, Address: 0x187154, Func Offset: 0xc4
	// Line 1469, Address: 0x187160, Func Offset: 0xd0
	// Line 1470, Address: 0x187168, Func Offset: 0xd8
	// Line 1474, Address: 0x18716c, Func Offset: 0xdc
	// Func End, Address: 0x187180, Func Offset: 0xf0
}

// 
// Start address: 0x187180
void shLensFlareSetLightSeed(_anon6* lf_work, _anon7* sc_info, int type)
{
	float wsm[4][4];
	_anon2 vi0;
	// Line 1493, Address: 0x187180, Func Offset: 0
	// Line 1497, Address: 0x1871a0, Func Offset: 0x20
	// Line 1500, Address: 0x1871ac, Func Offset: 0x2c
	// Line 1506, Address: 0x1871b4, Func Offset: 0x34
	// Line 1512, Address: 0x1871e4, Func Offset: 0x64
	// Line 1516, Address: 0x187208, Func Offset: 0x88
	// Line 1528, Address: 0x187324, Func Offset: 0x1a4
	// Func End, Address: 0x187340, Func Offset: 0x1c0
}

// 
// Start address: 0x1873c0
float shLensFlareOresenHokan(float* Y_ary, int Y_suu, float input_X, float min_X, float max_X)
{
	float tmp;
	int kukan_no;
	float kukan_w;
	float amari;
	float output_Y;
	// Line 1561, Address: 0x1873c0, Func Offset: 0
	// Line 1564, Address: 0x1873e0, Func Offset: 0x20
	// Line 1565, Address: 0x1873f0, Func Offset: 0x30
	// Line 1566, Address: 0x1873fc, Func Offset: 0x3c
	// Line 1567, Address: 0x187414, Func Offset: 0x54
	// Line 1568, Address: 0x187418, Func Offset: 0x58
	// Line 1572, Address: 0x187420, Func Offset: 0x60
	// Line 1573, Address: 0x18743c, Func Offset: 0x7c
	// Line 1574, Address: 0x187458, Func Offset: 0x98
	// Line 1575, Address: 0x187468, Func Offset: 0xa8
	// Line 1576, Address: 0x187474, Func Offset: 0xb4
	// Line 1577, Address: 0x187484, Func Offset: 0xc4
	// Line 1578, Address: 0x187488, Func Offset: 0xc8
	// Line 1588, Address: 0x187490, Func Offset: 0xd0
	// Line 1589, Address: 0x187498, Func Offset: 0xd8
	// Line 1590, Address: 0x18749c, Func Offset: 0xdc
	// Line 1593, Address: 0x1874b8, Func Offset: 0xf8
	// Line 1599, Address: 0x1874d8, Func Offset: 0x118
	// Func End, Address: 0x1874f8, Func Offset: 0x138
}

// 
// Start address: 0x187500
float shLensFlareMakeEffectTargetRate(float light_eff_pow, _anon6* lf_work)
{
	float ang_z_rate;
	float dist_rate;
	float pow_rate;
	float ret_tgt_rate;
	float ang_z_rate_dat[7];
	float dist_rate_dat[7];
	float pow_rate_dat[2];
	// Line 1619, Address: 0x187500, Func Offset: 0
	// Line 1634, Address: 0x187518, Func Offset: 0x18
	// Line 1654, Address: 0x18753c, Func Offset: 0x3c
	// Line 1673, Address: 0x18756c, Func Offset: 0x6c
	// Line 1678, Address: 0x18759c, Func Offset: 0x9c
	// Line 1681, Address: 0x1875a4, Func Offset: 0xa4
	// Line 1686, Address: 0x1875cc, Func Offset: 0xcc
	// Func End, Address: 0x1875e8, Func Offset: 0xe8
}

// 
// Start address: 0x1875f0
void shLensFlareMakeScreenPos(_anon6* lf_work, _anon1* ws_l_sxyz_p, _anon1* ws_l_vec_p, int scr_z)
{
	float tmp_vec_z;
	_anon1 tmp_pos;
	float geom_y;
	float geom_x;
	// Line 1707, Address: 0x1875f0, Func Offset: 0
	// Line 1712, Address: 0x1875f4, Func Offset: 0x4
	// Line 1714, Address: 0x187628, Func Offset: 0x38
	// Line 1715, Address: 0x18764c, Func Offset: 0x5c
	// Line 1720, Address: 0x187654, Func Offset: 0x64
	// Line 1722, Address: 0x187678, Func Offset: 0x88
	// Line 1723, Address: 0x18768c, Func Offset: 0x9c
	// Line 1726, Address: 0x1876a8, Func Offset: 0xb8
	// Line 1734, Address: 0x1876c8, Func Offset: 0xd8
	// Line 1735, Address: 0x1876d0, Func Offset: 0xe0
	// Line 1738, Address: 0x1876d8, Func Offset: 0xe8
	// Line 1739, Address: 0x1876e0, Func Offset: 0xf0
	// Line 1740, Address: 0x187700, Func Offset: 0x110
	// Line 1745, Address: 0x187714, Func Offset: 0x124
	// Func End, Address: 0x187720, Func Offset: 0x130
}

// 
// Start address: 0x187720
void shLensFlareMakeScreenAngle(_anon6* lf_work, _anon1* ws_l_sxyz_p, _anon1* ws_l_vec_p)
{
	_anon1 vec;
	float sin_z;
	float cos_z;
	_anon1 one_op_vec;
	_anon1 one_l_vec;
	_anon1 one_pos;
	// Line 1768, Address: 0x187720, Func Offset: 0
	// Line 1774, Address: 0x18773c, Func Offset: 0x1c
	// Line 1775, Address: 0x187748, Func Offset: 0x28
	// Line 1780, Address: 0x187758, Func Offset: 0x38
	// Line 1782, Address: 0x18776c, Func Offset: 0x4c
	// Line 1784, Address: 0x18777c, Func Offset: 0x5c
	// Line 1802, Address: 0x187790, Func Offset: 0x70
	// Line 1809, Address: 0x1877a4, Func Offset: 0x84
	// Line 1812, Address: 0x1877b8, Func Offset: 0x98
	// Line 1818, Address: 0x1877c8, Func Offset: 0xa8
	// Line 1820, Address: 0x1877dc, Func Offset: 0xbc
	// Func End, Address: 0x1877f8, Func Offset: 0xd8
}

// 
// Start address: 0x187850
void shGetJamesLightInfo(_anon12* l_info, int type)
{
	// Line 1835, Address: 0x187850, Func Offset: 0
	// Line 1837, Address: 0x187868, Func Offset: 0x18
	// Line 1838, Address: 0x187878, Func Offset: 0x28
	// Line 1839, Address: 0x187880, Func Offset: 0x30
	// Line 1843, Address: 0x187890, Func Offset: 0x40
	// Line 1844, Address: 0x187898, Func Offset: 0x48
	// Line 1849, Address: 0x1878a8, Func Offset: 0x58
	// Line 1851, Address: 0x1878b0, Func Offset: 0x60
	// Line 1853, Address: 0x1878c8, Func Offset: 0x78
	// Line 1856, Address: 0x1878e0, Func Offset: 0x90
	// Line 1857, Address: 0x18790c, Func Offset: 0xbc
	// Line 1862, Address: 0x187930, Func Offset: 0xe0
	// Line 1865, Address: 0x187958, Func Offset: 0x108
	// Func End, Address: 0x187970, Func Offset: 0x120
}

// 
// Start address: 0x187970
void shLensFlareMakeScreenInfo(_anon6* lf_work, _anon12* l_info)
{
	float wsm[4][4];
	_anon1 ws_l_vec;
	_anon1 ws_l_pos;
	// Line 1892, Address: 0x187970, Func Offset: 0
	// Line 1901, Address: 0x187988, Func Offset: 0x18
	// Line 1910, Address: 0x187994, Func Offset: 0x24
	// Line 1913, Address: 0x1879a8, Func Offset: 0x38
	// Line 1919, Address: 0x1879bc, Func Offset: 0x4c
	// Line 1923, Address: 0x1879d0, Func Offset: 0x60
	// Line 1926, Address: 0x1879f8, Func Offset: 0x88
	// Func End, Address: 0x187a10, Func Offset: 0xa0
}

// 
// Start address: 0x187a40
void shLensFlareInit()
{
	sh2gfw_CLUTS_HEAD* pCH;
	sh2gfw_TEX_HEAD* pTH;
	int i;
	// Line 1941, Address: 0x187a40, Func Offset: 0
	// Line 1947, Address: 0x187a48, Func Offset: 0x8
	// Line 1948, Address: 0x187a54, Func Offset: 0x14
	// Line 1950, Address: 0x187a68, Func Offset: 0x28
	// Line 1951, Address: 0x187a78, Func Offset: 0x38
	// Line 1952, Address: 0x187a88, Func Offset: 0x48
	// Line 1956, Address: 0x187a9c, Func Offset: 0x5c
	// Line 1957, Address: 0x187aa4, Func Offset: 0x64
	// Line 1960, Address: 0x187aac, Func Offset: 0x6c
	// Line 1964, Address: 0x187ad0, Func Offset: 0x90
	// Line 1968, Address: 0x187adc, Func Offset: 0x9c
	// Func End, Address: 0x187aec, Func Offset: 0xac
}

// 
// Start address: 0x187af0
void shLensFlareExec(SubCharacter* scp, float light_intensity, int type)
{
	int proj;
	int count;
	// Line 2057, Address: 0x187af0, Func Offset: 0
	// Line 2058, Address: 0x187b10, Func Offset: 0x20
	// Line 2066, Address: 0x187b18, Func Offset: 0x28
	// Line 2068, Address: 0x187b3c, Func Offset: 0x4c
	// Line 2078, Address: 0x187b64, Func Offset: 0x74
	// Line 2085, Address: 0x187b80, Func Offset: 0x90
	// Line 2090, Address: 0x187b90, Func Offset: 0xa0
	// Line 2091, Address: 0x187b98, Func Offset: 0xa8
	// Line 2099, Address: 0x187bf4, Func Offset: 0x104
	// Line 2101, Address: 0x187c04, Func Offset: 0x114
	// Line 2107, Address: 0x187c44, Func Offset: 0x154
	// Line 2112, Address: 0x187c58, Func Offset: 0x168
	// Line 2120, Address: 0x187c78, Func Offset: 0x188
	// Line 2149, Address: 0x187c90, Func Offset: 0x1a0
	// Func End, Address: 0x187cb4, Func Offset: 0x1c4
}

