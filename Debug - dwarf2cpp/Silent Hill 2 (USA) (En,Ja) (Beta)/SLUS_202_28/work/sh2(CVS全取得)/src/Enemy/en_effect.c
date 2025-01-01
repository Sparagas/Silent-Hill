typedef struct SubCharacter;
typedef struct EnPAP_DATA;
typedef struct EnEFCT_TASK;
typedef struct shSkelton;
typedef struct EnEFCT_SPRAY_DATA;
typedef struct _shTskTASK;
typedef struct SPACK_STATIC_DATA;
typedef struct EnNIK_DATA;
typedef struct sh2gfw_Env_ctl;
typedef struct EnEFCT_TY2DU_DATA;
typedef struct EnSCU_DATA;
typedef struct EnLOCAL_DATA;
typedef struct shBattleFight;
typedef struct EnAMBUSH_DATA;
typedef struct EnBOS_DATA;
typedef struct EnONI_DATA;
typedef struct shBattleShot;
typedef struct EnPATH_DATA;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct EnCOMMUNICATION;
typedef struct EnRED_DATA;
typedef struct _VbWVSMATRIX;
typedef struct EnEfctEnvData;
typedef struct _VbSCREENINFO;
typedef struct _CL_VHIT_WALL;
typedef struct SPACK_OT_DATA;
typedef struct _CL_HITPOLY_HEAD;
typedef struct EnSOUND_QUEUE;
typedef struct EnFORBIDDENAREA;
typedef struct EnIKE_DATA;
typedef struct shAttackInfo;
typedef struct EnINS_DATA;
typedef struct _CL_VHIT_CHARA;
typedef struct _anon0;
typedef struct EnLOCAL_WORK;
typedef struct EnTYU_DATA;
typedef union _anon1;
typedef struct _CL_VHIT_RESULT;
typedef struct EnARM_DATA;
typedef struct _shTskEXECUTE;
typedef union _anon2;
typedef struct EnNSE_DATA;
typedef struct SPACK_ENV_DATA;
typedef struct _anon3;
typedef struct SPACK_DATA;
typedef struct EnMKN_DATA;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct EnEDB_DATA;
typedef union Q_WORDDATA;
typedef struct EnEFCT_PFOG_DATA;
typedef struct sh2gfw_POINTL_MATRIX;

typedef void(*type_0)(SubCharacter*);
typedef void(*type_4)(EnEFCT_TASK*);
typedef void(*type_21)(EnEFCT_TASK*);
typedef void(*type_26)(void*);
typedef void(*type_33)(EnEFCT_TASK*);
typedef void(*type_38)(SubCharacter*);

typedef unsigned char type_1[16];
typedef float type_2[4];
typedef int type_3[4];
typedef int type_5[4];
typedef short type_6[8];
typedef char type_7[16];
typedef unsigned char type_8[4];
typedef _shTskTASK* type_9[8];
typedef unsigned long type_10[2];
typedef unsigned char type_11[14];
typedef float type_12[4];
typedef float type_13[4];
typedef unsigned char type_14[97];
typedef float type_15[4][4];
typedef <unknown fundamental type (0xa510)> type_16[6];
typedef <unknown fundamental type (0xa510)> type_17[6];
typedef <unknown fundamental type (0xa510)> type_18[6];
typedef <unknown fundamental type (0xa510)> type_19[6];
typedef unsigned short type_20[4];
typedef unsigned char type_22[20];
typedef EnLOCAL_DATA type_23[32];
typedef EnCOMMUNICATION type_24[8];
typedef EnFORBIDDENAREA type_25[2];
typedef EnSOUND_QUEUE type_27[8];
typedef unsigned char type_28[492];
typedef float type_29[4];
typedef float type_30[4][4];
typedef unsigned char type_31[14];
typedef shAttackInfo type_32[66];
typedef float type_34[16];
typedef float type_35[4][4];
typedef float type_36[4];
typedef unsigned char type_37[69];
typedef unsigned int type_39[4];
typedef float type_40[4];
typedef float type_41[4][4];
typedef unsigned short type_42[8];
typedef char type_43[3];
typedef float type_44[4];

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
	_anon0 pos;
	_anon0 rot;
	_anon0 pos_spd;
	_anon0 rot_spd;
	_anon3 mat;
	shSkelton* sk_top;
	float eye_y;
	float center_y;
	float spd;
	float spd_org;
	float spd_y;
	float spd_roty;
	float grnd_normal[4];
	float grnd_height;
	_anon0 b_pos;
	_anon0 b_rot;
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

struct EnPAP_DATA
{
	float target[4];
	char dc;
	char dcm;
	char signs;
	char count;
};

struct EnEFCT_TASK
{
	_shTskEXECUTE exe;
	int step;
	int count;
	union
	{
		EnEFCT_PFOG_DATA pfog;
		EnEFCT_SPRAY_DATA spray;
		EnEFCT_TY2DU_DATA tyu2d;
	};
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon3 src_m;
	_anon0 src_t;
	_anon3 des_m;
	_anon0 des_t;
	_anon0 axis;
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

struct EnEFCT_SPRAY_DATA
{
	float pos[4];
	float vec[4];
	unsigned int color;
	int timer;
	int timer1;
	int timer2;
	int alpha;
	float scattar;
	float size;
	float s;
	float t;
};

struct _shTskTASK
{
	_shTskEXECUTE exe;
	unsigned char freemem[492];
};

struct SPACK_STATIC_DATA
{
	unsigned short GifNLOOP;
	unsigned short DmaQwc;
	unsigned int PRE_PRIM_FLG_NREG;
	unsigned long REGS;
};

struct EnNIK_DATA
{
	float swing[4];
	float acc[4];
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

struct EnEFCT_TY2DU_DATA
{
	float pos[4];
	float rot[4];
};

struct EnSCU_DATA
{
	float stpos[4];
	float target[4];
	EnAMBUSH_DATA* ambush;
	int count;
	char dc;
	char dcm;
};

struct EnLOCAL_DATA
{
	char kind;
	char kind2;
	char mlv;
	char slv;
	char sslv;
	char type;
	unsigned char weight;
	char lie;
	char d_count;
	char last_atk;
	char anim;
	unsigned char anim_loop;
	short anim_s;
	unsigned int flag;
	int anim_n;
	int anim_step;
	SubCharacter* scp;
	EnPATH_DATA path;
	float vec[4];
	float endurance;
	float endurance_max;
	float hb_x;
	float hb_z;
	float hb_s;
	float tx;
	float tz;
	float tx2;
	float tz2;
	float trx;
	float trz;
	float size;
	float new_size;
	float tall;
	float new_tall;
	float center_y;
	float new_center;
	float eye_y;
	float new_eye;
	float p_dist;
	float radio;
	int timer;
	int sound_wait;
	int randseed;
	union
	{
		EnSCU_DATA scu;
		EnMKN_DATA mkn;
		EnTYU_DATA tyu;
		EnRED_DATA red;
		EnONI_DATA oni;
		EnNSE_DATA nse;
		EnIKE_DATA ike;
		EnPAP_DATA pap;
		EnEDB_DATA edb;
		EnARM_DATA arm;
		EnBOS_DATA bos;
		EnNIK_DATA nik;
		EnINS_DATA ins;
	};
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct EnAMBUSH_DATA
{
	float pl_x_min;
	float pl_z_min;
	float pl_x_max;
	float pl_z_max;
	float pos_x;
	float pos_z;
	float dir;
};

struct EnBOS_DATA
{
	float target[4];
	void* insect_dp;
	int near_count;
	float dist;
	float move_speed;
	float rot_speed;
	float rot_add;
	float y_speed;
	int mode;
	int end_count;
	char signs;
	char count;
};

struct EnONI_DATA
{
	char id;
	char check;
	char warp;
	short timer2;
	void* other;
	void* tp;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct EnPATH_DATA
{
	float angle;
	float markangle;
	float dist;
	char step;
	char deadend;
	short timer;
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

struct EnCOMMUNICATION
{
	float pos[4];
	int kind;
	int type;
	int time;
	float dist;
};

struct EnRED_DATA
{
	int attack_count;
	int boss_timer;
	void* tp;
};

struct _VbWVSMATRIX
{
	float wvm[4][4];
	float vsm[4][4];
	float wsm[4][4];
};

struct EnEfctEnvData
{
	<unknown fundamental type (0xa510)> Poison[6];
	<unknown fundamental type (0xa510)> Insect[6];
	<unknown fundamental type (0xa510)> Spray[6];
	<unknown fundamental type (0xa510)> Tyu2D[6];
	char SetPoisonTex;
	char SetInsectTex;
	char SetInsectTex_bak;
	char SetSprayTex;
	char SetTYU2DTex;
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

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

struct SPACK_OT_DATA
{
	unsigned short DmaQwc;
	unsigned short DmaId;
	void* Addr;
	unsigned int W;
	unsigned short VifQwc;
	unsigned char EnvID;
	unsigned char VifDirect;
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

struct EnSOUND_QUEUE
{
	SubCharacter* scp;
	int num;
	float vol;
	float time;
};

struct EnFORBIDDENAREA
{
	float x0;
	float z0;
	float x1;
	float z1;
};

struct EnIKE_DATA
{
	float handpos[4];
	float swing;
	int near_count;
	float dist;
	char direc;
	char signs;
	char count;
	char pipe_count;
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

struct EnINS_DATA
{
	float view_rot[4];
	float rot_add[4];
	void* leader;
	float def_speed;
	float move_speed;
	float speed_add;
	float rot_speed;
	float y_speed;
	float twin_dist;
	float dist_add;
};

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

struct _anon0
{
	float x;
	float y;
	float z;
	float w;
};

struct EnLOCAL_WORK
{
	EnLOCAL_DATA Data[32];
	EnCOMMUNICATION Communication[8];
	EnFORBIDDENAREA ForbiddenArea[2];
	EnSOUND_QUEUE SoundQueue[8];
	int CommunicationNum;
	int ForbiddenNum;
	int SoundQueueNum;
	unsigned int Status;
	EnLOCAL_DATA* This;
	_CL_VHIT_RESULT HitResult;
	int Max3DSounds;
	int ActiveEnemy;
};

struct EnTYU_DATA
{
	float point[4];
	EnCOMMUNICATION* tcomm;
	int near_count;
	float dist;
	short count;
	char moves;
};

union _anon1
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon2 hobj;
};

struct EnARM_DATA
{
	float hand_pos[4];
	float old_pos[4];
	int near_count;
	float dist;
	char arm;
	char attack;
	char scount;
	char signs;
	char count;
	char dir;
};

struct _shTskEXECUTE
{
	void(*adrs)(void*);
	void* next;
	void* prev;
	int mode;
	int atr;
};

union _anon2
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct EnNSE_DATA
{
	float speed;
	float tspeed;
	char signs;
	char count;
	char dc;
	char dcm;
};

struct SPACK_ENV_DATA
{
	unsigned short DmaQwc;
	unsigned short DmaId;
	void* Addr;
	unsigned int pad1;
	unsigned short VifQwc;
	unsigned char pad2;
	unsigned char VifDirect;
};

struct _anon3
{
	float d[4][4];
};

struct SPACK_DATA
{
	SPACK_OT_DATA** ot_top;
	SPACK_OT_DATA** ot_last;
	unsigned int ot_size;
	unsigned int ot_width;
	unsigned int w_ofs;
	unsigned int w_mini;
	unsigned int w_max;
	unsigned int envid;
	SPACK_OT_DATA* dma_top;
	SPACK_OT_DATA* dmabuf_pos;
	SPACK_ENV_DATA* env_top;
	unsigned long* pk_last;
	unsigned long* pos;
	short* ot_max;
	<unknown fundamental type (0xa510)>* packet;
	SPACK_STATIC_DATA* ps_top;
	unsigned long* pgiftag;
	unsigned long giftag_b;
	unsigned int flag;
	void* kick_top;
	void* old_lastpos;
};

struct EnMKN_DATA
{
	float stpos[4];
	float target[4];
	void* tp;
	float fall;
	short frame;
	char dc;
	char dcm;
};

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA dirvec;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

struct EnEDB_DATA
{
	float target[4];
	float rot;
	float arot;
	float speed;
	char bullet;
	char mark[3];
	char mark_n;
	char turn;
	char afford;
	char ccount;
	char pcount;
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

struct EnEFCT_PFOG_DATA
{
	float pos[4];
	float vec[4];
	unsigned int color;
	int alpha;
	float scattar;
	float size;
	float s;
	float t;
};

struct sh2gfw_POINTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
int en_efct_kind_list[4];
EnEfctEnvData EnEfctEnvData;
SPACK_DATA spack;
_shTskTASK* shTskTaskListTop[8];
EnLOCAL_WORK enLocalWork;
void(*enEfctMovePoisonFog)(EnEFCT_TASK*);
float sintable[16];
_VbSCREENINFO VbScreenInfo;
_VbWVSMATRIX VbWvsMatrix;
void(*enEfctMoveSpray)(EnEFCT_TASK*);
void(*enEfctMoveTYU2D)(EnEFCT_TASK*);
sh2gfw_Env_ctl Env_ctl;

unsigned int enMultColor(unsigned int color, int rate);
void enEfctInit();
void enEfctTexInit();
void enEfctClear();
void enEfctDraw();
void enEfctSetPoisonFog(float* pos, float* vec);
void enEfctMovePoisonFog(EnEFCT_TASK* pt);
void enEfctDrawPoisonFog(EnEFCT_TASK* pt);
void enEfctSetPoisonTex();
void enEfctDrawInsect(void* p);
void enEfctSetInsectTex();
void enEfctSetSpray(float* pos, float* vec, unsigned int color, int timer);
void enEfctMoveSpray(EnEFCT_TASK* pt);
void enEfctDrawSpray(EnEFCT_TASK* pt);
void enEfctSetSprayTex();
void enEfctSetTYU2D(float* pos, float* rot);
void enEfctMoveTYU2D(EnEFCT_TASK* pt);
void enEfctDrawTYU2D(EnEFCT_TASK* pt);
void enEfctSetTYU2DTex();

// 
// Start address: 0x14e020
unsigned int enMultColor(unsigned int color, int rate)
{
	unsigned int a;
	unsigned int b;
	unsigned int g;
	unsigned int r;
	// Line 56, Address: 0x14e020, Func Offset: 0
	// Line 57, Address: 0x14e02c, Func Offset: 0xc
	// Line 58, Address: 0x14e03c, Func Offset: 0x1c
	// Line 59, Address: 0x14e04c, Func Offset: 0x2c
	// Line 60, Address: 0x14e05c, Func Offset: 0x3c
	// Line 61, Address: 0x14e074, Func Offset: 0x54
	// Func End, Address: 0x14e07c, Func Offset: 0x5c
}

// 
// Start address: 0x14e080
void enEfctInit()
{
	// Line 66, Address: 0x14e080, Func Offset: 0
	// Line 67, Address: 0x14e08c, Func Offset: 0xc
	// Line 69, Address: 0x14e0ac, Func Offset: 0x2c
	// Line 72, Address: 0x14e0c0, Func Offset: 0x40
	// Line 73, Address: 0x14e0d0, Func Offset: 0x50
	// Line 74, Address: 0x14e0e8, Func Offset: 0x68
	// Line 75, Address: 0x14e11c, Func Offset: 0x9c
	// Line 76, Address: 0x14e150, Func Offset: 0xd0
	// Line 77, Address: 0x14e188, Func Offset: 0x108
	// Line 78, Address: 0x14e1c8, Func Offset: 0x148
	// Line 79, Address: 0x14e210, Func Offset: 0x190
	// Line 80, Address: 0x14e218, Func Offset: 0x198
	// Line 81, Address: 0x14e220, Func Offset: 0x1a0
	// Line 83, Address: 0x14e234, Func Offset: 0x1b4
	// Line 84, Address: 0x14e244, Func Offset: 0x1c4
	// Line 85, Address: 0x14e25c, Func Offset: 0x1dc
	// Line 86, Address: 0x14e290, Func Offset: 0x210
	// Line 87, Address: 0x14e2c4, Func Offset: 0x244
	// Line 88, Address: 0x14e2fc, Func Offset: 0x27c
	// Line 89, Address: 0x14e33c, Func Offset: 0x2bc
	// Line 90, Address: 0x14e384, Func Offset: 0x304
	// Line 91, Address: 0x14e38c, Func Offset: 0x30c
	// Line 92, Address: 0x14e394, Func Offset: 0x314
	// Line 94, Address: 0x14e3a8, Func Offset: 0x328
	// Line 95, Address: 0x14e3b8, Func Offset: 0x338
	// Line 96, Address: 0x14e3d0, Func Offset: 0x350
	// Line 97, Address: 0x14e404, Func Offset: 0x384
	// Line 98, Address: 0x14e438, Func Offset: 0x3b8
	// Line 99, Address: 0x14e470, Func Offset: 0x3f0
	// Line 100, Address: 0x14e4b0, Func Offset: 0x430
	// Line 101, Address: 0x14e4f8, Func Offset: 0x478
	// Line 102, Address: 0x14e500, Func Offset: 0x480
	// Line 103, Address: 0x14e508, Func Offset: 0x488
	// Line 105, Address: 0x14e51c, Func Offset: 0x49c
	// Line 106, Address: 0x14e52c, Func Offset: 0x4ac
	// Line 107, Address: 0x14e544, Func Offset: 0x4c4
	// Line 108, Address: 0x14e578, Func Offset: 0x4f8
	// Line 109, Address: 0x14e5ac, Func Offset: 0x52c
	// Line 110, Address: 0x14e5e4, Func Offset: 0x564
	// Line 111, Address: 0x14e624, Func Offset: 0x5a4
	// Line 112, Address: 0x14e66c, Func Offset: 0x5ec
	// Line 113, Address: 0x14e674, Func Offset: 0x5f4
	// Line 114, Address: 0x14e67c, Func Offset: 0x5fc
	// Line 115, Address: 0x14e690, Func Offset: 0x610
	// Func End, Address: 0x14e6a4, Func Offset: 0x624
}

// 
// Start address: 0x14e6b0
void enEfctTexInit()
{
	// Line 133, Address: 0x14e6b0, Func Offset: 0
	// Func End, Address: 0x14e6b8, Func Offset: 0x8
}

// 
// Start address: 0x14e6c0
void enEfctClear()
{
	_shTskTASK* pnext;
	_shTskTASK* pt;
	int n;
	int kind;
	// Line 137, Address: 0x14e6c0, Func Offset: 0
	// Line 140, Address: 0x14e6d8, Func Offset: 0x18
	// Line 141, Address: 0x14e6dc, Func Offset: 0x1c
	// Line 142, Address: 0x14e6e4, Func Offset: 0x24
	// Line 143, Address: 0x14e704, Func Offset: 0x44
	// Line 144, Address: 0x14e70c, Func Offset: 0x4c
	// Line 145, Address: 0x14e724, Func Offset: 0x64
	// Line 146, Address: 0x14e730, Func Offset: 0x70
	// Line 147, Address: 0x14e734, Func Offset: 0x74
	// Line 148, Address: 0x14e740, Func Offset: 0x80
	// Line 149, Address: 0x14e768, Func Offset: 0xa8
	// Func End, Address: 0x14e788, Func Offset: 0xc8
}

// 
// Start address: 0x14e790
void enEfctDraw()
{
	_shTskTASK* pt;
	int n;
	int kind;
	// Line 153, Address: 0x14e790, Func Offset: 0
	// Line 156, Address: 0x14e7a4, Func Offset: 0x14
	// Line 157, Address: 0x14e7a8, Func Offset: 0x18
	// Line 158, Address: 0x14e7b0, Func Offset: 0x20
	// Line 159, Address: 0x14e7b8, Func Offset: 0x28
	// Line 160, Address: 0x14e7c0, Func Offset: 0x30
	// Line 161, Address: 0x14e7c8, Func Offset: 0x38
	// Line 162, Address: 0x14e7e8, Func Offset: 0x58
	// Line 163, Address: 0x14e7f0, Func Offset: 0x60
	// Line 165, Address: 0x14e81c, Func Offset: 0x8c
	// Line 166, Address: 0x14e828, Func Offset: 0x98
	// Line 168, Address: 0x14e830, Func Offset: 0xa0
	// Line 169, Address: 0x14e83c, Func Offset: 0xac
	// Line 171, Address: 0x14e844, Func Offset: 0xb4
	// Line 174, Address: 0x14e850, Func Offset: 0xc0
	// Line 175, Address: 0x14e868, Func Offset: 0xd8
	// Line 176, Address: 0x14e870, Func Offset: 0xe0
	// Line 177, Address: 0x14e898, Func Offset: 0x108
	// Line 178, Address: 0x14e89c, Func Offset: 0x10c
	// Line 179, Address: 0x14e8ac, Func Offset: 0x11c
	// Line 180, Address: 0x14e8b4, Func Offset: 0x124
	// Line 182, Address: 0x14e8b8, Func Offset: 0x128
	// Line 183, Address: 0x14e8c8, Func Offset: 0x138
	// Line 184, Address: 0x14e8d0, Func Offset: 0x140
	// Line 186, Address: 0x14e8d4, Func Offset: 0x144
	// Line 187, Address: 0x14e8e4, Func Offset: 0x154
	// Line 188, Address: 0x14e8ec, Func Offset: 0x15c
	// Line 190, Address: 0x14e8f0, Func Offset: 0x160
	// Line 191, Address: 0x14e900, Func Offset: 0x170
	// Line 192, Address: 0x14e908, Func Offset: 0x178
	// Line 194, Address: 0x14e90c, Func Offset: 0x17c
	// Line 196, Address: 0x14e914, Func Offset: 0x184
	// Line 197, Address: 0x14e934, Func Offset: 0x1a4
	// Line 198, Address: 0x14e968, Func Offset: 0x1d8
	// Line 201, Address: 0x14e970, Func Offset: 0x1e0
	// Line 202, Address: 0x14e980, Func Offset: 0x1f0
	// Line 203, Address: 0x14e988, Func Offset: 0x1f8
	// Func End, Address: 0x14e9a4, Func Offset: 0x214
}

// 
// Start address: 0x14e9b0
void enEfctSetPoisonFog(float* pos, float* vec)
{
	EnEFCT_TASK* pt;
	// Line 209, Address: 0x14e9b0, Func Offset: 0
	// Line 211, Address: 0x14e9cc, Func Offset: 0x1c
	// Line 213, Address: 0x14e9e4, Func Offset: 0x34
	// Line 214, Address: 0x14e9ec, Func Offset: 0x3c
	// Line 215, Address: 0x14e9f4, Func Offset: 0x44
	// Line 216, Address: 0x14ea04, Func Offset: 0x54
	// Line 217, Address: 0x14ea08, Func Offset: 0x58
	// Line 218, Address: 0x14ea0c, Func Offset: 0x5c
	// Line 219, Address: 0x14ea10, Func Offset: 0x60
	// Line 220, Address: 0x14ea18, Func Offset: 0x68
	// Line 221, Address: 0x14ea3c, Func Offset: 0x8c
	// Line 222, Address: 0x14ea60, Func Offset: 0xb0
	// Line 223, Address: 0x14ea84, Func Offset: 0xd4
	// Line 224, Address: 0x14eaa4, Func Offset: 0xf4
	// Line 225, Address: 0x14eac8, Func Offset: 0x118
	// Line 226, Address: 0x14ead4, Func Offset: 0x124
	// Line 227, Address: 0x14eae0, Func Offset: 0x130
	// Line 229, Address: 0x14eafc, Func Offset: 0x14c
	// Line 230, Address: 0x14eb20, Func Offset: 0x170
	// Line 231, Address: 0x14eb2c, Func Offset: 0x17c
	// Line 233, Address: 0x14eb34, Func Offset: 0x184
	// Line 234, Address: 0x14eb40, Func Offset: 0x190
	// Line 236, Address: 0x14eb48, Func Offset: 0x198
	// Line 239, Address: 0x14eb54, Func Offset: 0x1a4
	// Func End, Address: 0x14eb70, Func Offset: 0x1c0
}

// 
// Start address: 0x14eb70
void enEfctMovePoisonFog(EnEFCT_TASK* pt)
{
	float d;
	float vec[4];
	// Line 247, Address: 0x14eb70, Func Offset: 0
	// Line 250, Address: 0x14eb8c, Func Offset: 0x1c
	// Line 252, Address: 0x14ebb8, Func Offset: 0x48
	// Line 253, Address: 0x14ebe4, Func Offset: 0x74
	// Line 254, Address: 0x14ec30, Func Offset: 0xc0
	// Line 255, Address: 0x14ec44, Func Offset: 0xd4
	// Line 256, Address: 0x14ec60, Func Offset: 0xf0
	// Line 257, Address: 0x14ec74, Func Offset: 0x104
	// Line 258, Address: 0x14eca0, Func Offset: 0x130
	// Line 260, Address: 0x14ecac, Func Offset: 0x13c
	// Line 262, Address: 0x14ecb4, Func Offset: 0x144
	// Line 263, Address: 0x14ecf8, Func Offset: 0x188
	// Line 264, Address: 0x14ed40, Func Offset: 0x1d0
	// Line 265, Address: 0x14ed64, Func Offset: 0x1f4
	// Line 266, Address: 0x14ed7c, Func Offset: 0x20c
	// Line 267, Address: 0x14ed84, Func Offset: 0x214
	// Line 268, Address: 0x14ed9c, Func Offset: 0x22c
	// Line 269, Address: 0x14eddc, Func Offset: 0x26c
	// Line 271, Address: 0x14ede8, Func Offset: 0x278
	// Line 273, Address: 0x14edf0, Func Offset: 0x280
	// Line 274, Address: 0x14ee44, Func Offset: 0x2d4
	// Line 275, Address: 0x14ee90, Func Offset: 0x320
	// Line 276, Address: 0x14eeb4, Func Offset: 0x344
	// Line 277, Address: 0x14eecc, Func Offset: 0x35c
	// Line 278, Address: 0x14eef4, Func Offset: 0x384
	// Line 279, Address: 0x14ef18, Func Offset: 0x3a8
	// Line 281, Address: 0x14ef68, Func Offset: 0x3f8
	// Line 285, Address: 0x14ef74, Func Offset: 0x404
	// Func End, Address: 0x14ef94, Func Offset: 0x424
}

// 
// Start address: 0x14efa0
void enEfctDrawPoisonFog(EnEFCT_TASK* pt)
{
	int i;
	float dt;
	float ds;
	float dy;
	float dx;
	float s;
	float q;
	float vec[4];
	float v0[4];
	// Line 297, Address: 0x14efa0, Func Offset: 0
	// Line 302, Address: 0x14efbc, Func Offset: 0x1c
	// Line 303, Address: 0x14f008, Func Offset: 0x68
	// Line 305, Address: 0x14f030, Func Offset: 0x90
	// Line 308, Address: 0x14f044, Func Offset: 0xa4
	// Line 313, Address: 0x14f110, Func Offset: 0x170
	// Line 316, Address: 0x14f118, Func Offset: 0x178
	// Line 320, Address: 0x14f14c, Func Offset: 0x1ac
	// Line 322, Address: 0x14f19c, Func Offset: 0x1fc
	// Line 323, Address: 0x14f1e4, Func Offset: 0x244
	// Line 324, Address: 0x14f238, Func Offset: 0x298
	// Line 325, Address: 0x14f244, Func Offset: 0x2a4
	// Line 326, Address: 0x14f284, Func Offset: 0x2e4
	// Line 327, Address: 0x14f290, Func Offset: 0x2f0
	// Line 328, Address: 0x14f2bc, Func Offset: 0x31c
	// Line 329, Address: 0x14f2e4, Func Offset: 0x344
	// Line 331, Address: 0x14f360, Func Offset: 0x3c0
	// Line 332, Address: 0x14f3b4, Func Offset: 0x414
	// Line 333, Address: 0x14f3c4, Func Offset: 0x424
	// Line 334, Address: 0x14f3cc, Func Offset: 0x42c
	// Line 335, Address: 0x14f3d8, Func Offset: 0x438
	// Func End, Address: 0x14f3f8, Func Offset: 0x458
}

// 
// Start address: 0x14f400
void enEfctSetPoisonTex()
{
	// Line 339, Address: 0x14f400, Func Offset: 0
	// Line 346, Address: 0x14f408, Func Offset: 0x8
	// Line 349, Address: 0x14f424, Func Offset: 0x24
	// Func End, Address: 0x14f434, Func Offset: 0x34
}

// 
// Start address: 0x14f440
void enEfctDrawInsect(void* p)
{
	unsigned short v;
	unsigned short u;
	float dy;
	float dx;
	float s;
	float q;
	float m0[4][4];
	float v1[4];
	float v0[4];
	EnLOCAL_DATA* dp;
	// Line 359, Address: 0x14f440, Func Offset: 0
	// Line 360, Address: 0x14f45c, Func Offset: 0x1c
	// Line 366, Address: 0x14f460, Func Offset: 0x20
	// Line 367, Address: 0x14f478, Func Offset: 0x38
	// Line 368, Address: 0x14f4bc, Func Offset: 0x7c
	// Line 370, Address: 0x14f4d0, Func Offset: 0x90
	// Line 371, Address: 0x14f4f4, Func Offset: 0xb4
	// Line 376, Address: 0x14f5c0, Func Offset: 0x180
	// Line 378, Address: 0x14f5c8, Func Offset: 0x188
	// Line 379, Address: 0x14f5ec, Func Offset: 0x1ac
	// Line 380, Address: 0x14f60c, Func Offset: 0x1cc
	// Line 382, Address: 0x14f64c, Func Offset: 0x20c
	// Line 383, Address: 0x14f668, Func Offset: 0x228
	// Line 384, Address: 0x14f694, Func Offset: 0x254
	// Line 385, Address: 0x14f6c0, Func Offset: 0x280
	// Line 386, Address: 0x14f6d0, Func Offset: 0x290
	// Line 387, Address: 0x14f6dc, Func Offset: 0x29c
	// Line 388, Address: 0x14f6e8, Func Offset: 0x2a8
	// Line 389, Address: 0x14f71c, Func Offset: 0x2dc
	// Line 390, Address: 0x14f758, Func Offset: 0x318
	// Line 391, Address: 0x14f764, Func Offset: 0x324
	// Line 392, Address: 0x14f770, Func Offset: 0x330
	// Line 393, Address: 0x14f7a4, Func Offset: 0x364
	// Line 394, Address: 0x14f7b8, Func Offset: 0x378
	// Line 395, Address: 0x14f7e0, Func Offset: 0x3a0
	// Line 396, Address: 0x14f818, Func Offset: 0x3d8
	// Line 397, Address: 0x14f828, Func Offset: 0x3e8
	// Line 398, Address: 0x14f854, Func Offset: 0x414
	// Line 399, Address: 0x14f868, Func Offset: 0x428
	// Line 400, Address: 0x14f8ac, Func Offset: 0x46c
	// Line 402, Address: 0x14f8c0, Func Offset: 0x480
	// Line 403, Address: 0x14f8e4, Func Offset: 0x4a4
	// Line 404, Address: 0x14f910, Func Offset: 0x4d0
	// Line 405, Address: 0x14f918, Func Offset: 0x4d8
	// Line 406, Address: 0x14f924, Func Offset: 0x4e4
	// Line 407, Address: 0x14f930, Func Offset: 0x4f0
	// Line 408, Address: 0x14f964, Func Offset: 0x524
	// Line 409, Address: 0x14f9a0, Func Offset: 0x560
	// Line 410, Address: 0x14f9ac, Func Offset: 0x56c
	// Line 411, Address: 0x14f9b8, Func Offset: 0x578
	// Line 412, Address: 0x14f9ec, Func Offset: 0x5ac
	// Line 413, Address: 0x14f9f4, Func Offset: 0x5b4
	// Line 414, Address: 0x14fa00, Func Offset: 0x5c0
	// Func End, Address: 0x14fa24, Func Offset: 0x5e4
}

// 
// Start address: 0x14fa30
void enEfctSetInsectTex()
{
	// Line 418, Address: 0x14fa30, Func Offset: 0
	// Line 419, Address: 0x14fa38, Func Offset: 0x8
	// Line 421, Address: 0x14fa54, Func Offset: 0x24
	// Func End, Address: 0x14fa64, Func Offset: 0x34
}

// 
// Start address: 0x14fa70
void enEfctSetSpray(float* pos, float* vec, unsigned int color, int timer)
{
	EnEFCT_TASK* pt;
	// Line 429, Address: 0x14fa70, Func Offset: 0
	// Line 431, Address: 0x14fa9c, Func Offset: 0x2c
	// Line 433, Address: 0x14fab4, Func Offset: 0x44
	// Line 434, Address: 0x14fabc, Func Offset: 0x4c
	// Line 435, Address: 0x14fac4, Func Offset: 0x54
	// Line 436, Address: 0x14fad4, Func Offset: 0x64
	// Line 437, Address: 0x14fad8, Func Offset: 0x68
	// Line 438, Address: 0x14fadc, Func Offset: 0x6c
	// Line 439, Address: 0x14fae0, Func Offset: 0x70
	// Line 440, Address: 0x14fae8, Func Offset: 0x78
	// Line 441, Address: 0x14fb0c, Func Offset: 0x9c
	// Line 442, Address: 0x14fb30, Func Offset: 0xc0
	// Line 443, Address: 0x14fb54, Func Offset: 0xe4
	// Line 444, Address: 0x14fb74, Func Offset: 0x104
	// Line 445, Address: 0x14fb98, Func Offset: 0x128
	// Line 446, Address: 0x14fba4, Func Offset: 0x134
	// Line 447, Address: 0x14fbb0, Func Offset: 0x140
	// Line 448, Address: 0x14fbd8, Func Offset: 0x168
	// Line 449, Address: 0x14fc00, Func Offset: 0x190
	// Line 450, Address: 0x14fc28, Func Offset: 0x1b8
	// Line 452, Address: 0x14fc44, Func Offset: 0x1d4
	// Line 453, Address: 0x14fc54, Func Offset: 0x1e4
	// Line 454, Address: 0x14fc68, Func Offset: 0x1f8
	// Line 455, Address: 0x14fc70, Func Offset: 0x200
	// Line 459, Address: 0x14fc84, Func Offset: 0x214
	// Line 460, Address: 0x14fc88, Func Offset: 0x218
	// Func End, Address: 0x14fcac, Func Offset: 0x23c
}

// 
// Start address: 0x14fcb0
void enEfctMoveSpray(EnEFCT_TASK* pt)
{
	float rt;
	float d;
	float vec[4];
	// Line 464, Address: 0x14fcb0, Func Offset: 0
	// Line 467, Address: 0x14fcc4, Func Offset: 0x14
	// Line 469, Address: 0x14fcf0, Func Offset: 0x40
	// Line 470, Address: 0x14fd08, Func Offset: 0x58
	// Line 471, Address: 0x14fd14, Func Offset: 0x64
	// Line 472, Address: 0x14fd48, Func Offset: 0x98
	// Line 473, Address: 0x14fd5c, Func Offset: 0xac
	// Line 474, Address: 0x14fd78, Func Offset: 0xc8
	// Line 475, Address: 0x14fd90, Func Offset: 0xe0
	// Line 476, Address: 0x14fdb4, Func Offset: 0x104
	// Line 478, Address: 0x14fdc0, Func Offset: 0x110
	// Line 480, Address: 0x14fdc8, Func Offset: 0x118
	// Line 481, Address: 0x14fde0, Func Offset: 0x130
	// Line 482, Address: 0x14fdfc, Func Offset: 0x14c
	// Line 483, Address: 0x14fe30, Func Offset: 0x180
	// Line 484, Address: 0x14fe54, Func Offset: 0x1a4
	// Line 485, Address: 0x14fe6c, Func Offset: 0x1bc
	// Line 486, Address: 0x14fe74, Func Offset: 0x1c4
	// Line 487, Address: 0x14fe90, Func Offset: 0x1e0
	// Line 488, Address: 0x14feb4, Func Offset: 0x204
	// Line 490, Address: 0x14fec0, Func Offset: 0x210
	// Line 492, Address: 0x14fec8, Func Offset: 0x218
	// Line 493, Address: 0x14fee0, Func Offset: 0x230
	// Line 494, Address: 0x14fefc, Func Offset: 0x24c
	// Line 495, Address: 0x14ff2c, Func Offset: 0x27c
	// Line 496, Address: 0x14ff50, Func Offset: 0x2a0
	// Line 497, Address: 0x14ff68, Func Offset: 0x2b8
	// Line 498, Address: 0x14ff90, Func Offset: 0x2e0
	// Line 499, Address: 0x14ffac, Func Offset: 0x2fc
	// Line 501, Address: 0x14ffd4, Func Offset: 0x324
	// Line 505, Address: 0x14ffe0, Func Offset: 0x330
	// Func End, Address: 0x14fff8, Func Offset: 0x348
}

// 
// Start address: 0x150000
void enEfctDrawSpray(EnEFCT_TASK* pt)
{
	int a;
	int b;
	int g;
	int r;
	int i;
	float dt;
	float ds;
	float dy;
	float dx;
	float s;
	float q;
	float vec[4];
	float v0[4];
	// Line 509, Address: 0x150000, Func Offset: 0
	// Line 514, Address: 0x15002c, Func Offset: 0x2c
	// Line 515, Address: 0x150078, Func Offset: 0x78
	// Line 517, Address: 0x1500a0, Func Offset: 0xa0
	// Line 518, Address: 0x1500b4, Func Offset: 0xb4
	// Line 520, Address: 0x1500bc, Func Offset: 0xbc
	// Line 525, Address: 0x150188, Func Offset: 0x188
	// Line 528, Address: 0x150190, Func Offset: 0x190
	// Line 529, Address: 0x1501ac, Func Offset: 0x1ac
	// Line 530, Address: 0x1501e0, Func Offset: 0x1e0
	// Line 531, Address: 0x150210, Func Offset: 0x210
	// Line 534, Address: 0x150238, Func Offset: 0x238
	// Line 538, Address: 0x15026c, Func Offset: 0x26c
	// Line 539, Address: 0x1502e4, Func Offset: 0x2e4
	// Line 540, Address: 0x15032c, Func Offset: 0x32c
	// Line 541, Address: 0x150380, Func Offset: 0x380
	// Line 542, Address: 0x15038c, Func Offset: 0x38c
	// Line 543, Address: 0x1503c8, Func Offset: 0x3c8
	// Line 544, Address: 0x1503d4, Func Offset: 0x3d4
	// Line 545, Address: 0x150400, Func Offset: 0x400
	// Line 546, Address: 0x150428, Func Offset: 0x428
	// Line 548, Address: 0x1504a4, Func Offset: 0x4a4
	// Line 549, Address: 0x1504f8, Func Offset: 0x4f8
	// Line 550, Address: 0x15050c, Func Offset: 0x50c
	// Line 551, Address: 0x150514, Func Offset: 0x514
	// Line 552, Address: 0x150520, Func Offset: 0x520
	// Func End, Address: 0x150550, Func Offset: 0x550
}

// 
// Start address: 0x150550
void enEfctSetSprayTex()
{
	// Line 556, Address: 0x150550, Func Offset: 0
	// Line 557, Address: 0x150558, Func Offset: 0x8
	// Line 559, Address: 0x150574, Func Offset: 0x24
	// Func End, Address: 0x150584, Func Offset: 0x34
}

// 
// Start address: 0x150590
void enEfctSetTYU2D(float* pos, float* rot)
{
	EnEFCT_TASK* pt;
	// Line 565, Address: 0x150590, Func Offset: 0
	// Line 567, Address: 0x1505a8, Func Offset: 0x18
	// Line 569, Address: 0x1505bc, Func Offset: 0x2c
	// Line 570, Address: 0x1505c4, Func Offset: 0x34
	// Line 571, Address: 0x1505cc, Func Offset: 0x3c
	// Line 572, Address: 0x1505dc, Func Offset: 0x4c
	// Line 573, Address: 0x1505f4, Func Offset: 0x64
	// Line 574, Address: 0x1505fc, Func Offset: 0x6c
	// Func End, Address: 0x150614, Func Offset: 0x84
}

// 
// Start address: 0x150620
void enEfctMoveTYU2D(EnEFCT_TASK* pt)
{
	void* tmp;
	// Line 581, Address: 0x150620, Func Offset: 0
	// Func End, Address: 0x150628, Func Offset: 0x8
}

// 
// Start address: 0x150630
void enEfctDrawTYU2D(EnEFCT_TASK* pt)
{
	float rate;
	float para[4];
	float lcolor[4];
	float ldir[4];
	float lpos[4];
	float amb[4];
	int b;
	int g;
	int r;
	int i;
	float* ppos;
	float w;
	float q[4];
	float rot[4][4];
	float mat[4][4];
	float vec2[4];
	float vec[4];
	float pos[4][4];
	// Line 588, Address: 0x150630, Func Offset: 0
	// Line 593, Address: 0x15064c, Func Offset: 0x1c
	// Line 595, Address: 0x150650, Func Offset: 0x20
	// Line 596, Address: 0x150678, Func Offset: 0x48
	// Line 597, Address: 0x150680, Func Offset: 0x50
	// Line 598, Address: 0x1506b8, Func Offset: 0x88
	// Line 599, Address: 0x1506c0, Func Offset: 0x90
	// Line 600, Address: 0x1506c8, Func Offset: 0x98
	// Line 601, Address: 0x1506f4, Func Offset: 0xc4
	// Line 602, Address: 0x1506f8, Func Offset: 0xc8
	// Line 603, Address: 0x150704, Func Offset: 0xd4
	// Line 604, Address: 0x150738, Func Offset: 0x108
	// Line 605, Address: 0x150754, Func Offset: 0x124
	// Line 606, Address: 0x15075c, Func Offset: 0x12c
	// Line 607, Address: 0x1507a8, Func Offset: 0x178
	// Line 609, Address: 0x150818, Func Offset: 0x1e8
	// Line 611, Address: 0x150820, Func Offset: 0x1f0
	// Line 612, Address: 0x150838, Func Offset: 0x208
	// Line 613, Address: 0x150844, Func Offset: 0x214
	// Line 614, Address: 0x150860, Func Offset: 0x230
	// Line 618, Address: 0x150874, Func Offset: 0x244
	// Line 619, Address: 0x150890, Func Offset: 0x260
	// Line 621, Address: 0x1508a8, Func Offset: 0x278
	// Line 623, Address: 0x1508c4, Func Offset: 0x294
	// Line 624, Address: 0x1508dc, Func Offset: 0x2ac
	// Line 625, Address: 0x1508f0, Func Offset: 0x2c0
	// Line 626, Address: 0x150910, Func Offset: 0x2e0
	// Line 627, Address: 0x150940, Func Offset: 0x310
	// Line 628, Address: 0x15094c, Func Offset: 0x31c
	// Line 629, Address: 0x150958, Func Offset: 0x328
	// Line 631, Address: 0x150964, Func Offset: 0x334
	// Line 633, Address: 0x1509a8, Func Offset: 0x378
	// Line 634, Address: 0x1509c4, Func Offset: 0x394
	// Line 635, Address: 0x1509d0, Func Offset: 0x3a0
	// Line 637, Address: 0x150a4c, Func Offset: 0x41c
	// Line 638, Address: 0x150a88, Func Offset: 0x458
	// Line 639, Address: 0x150ac8, Func Offset: 0x498
	// Line 640, Address: 0x150adc, Func Offset: 0x4ac
	// Line 641, Address: 0x150ae4, Func Offset: 0x4b4
	// Line 642, Address: 0x150af0, Func Offset: 0x4c0
	// Func End, Address: 0x150b10, Func Offset: 0x4e0
}

// 
// Start address: 0x150b10
void enEfctSetTYU2DTex()
{
	// Line 646, Address: 0x150b10, Func Offset: 0
	// Line 647, Address: 0x150b18, Func Offset: 0x8
	// Line 649, Address: 0x150b34, Func Offset: 0x24
	// Func End, Address: 0x150b44, Func Offset: 0x34
}

