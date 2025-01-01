typedef struct _anon0;
typedef struct _anon1;
typedef struct SHADOW_CHAR_MAN;
typedef struct SubCharacter;
typedef struct shBattleFight;
typedef struct _anon2;
typedef struct _anon3;
typedef struct shSkelton;
typedef struct shBattleShot;
typedef struct shGsTinyDrawEnv;
typedef struct _anon4;
typedef struct _anon5;
typedef struct shBattleArea;
typedef union Q_WORDDATA;
typedef struct SHADOW_OFF_WORK_CHAR;
typedef struct SHADOW_SHAPE_FRAME;
typedef struct _AnimeInfo;
typedef struct SHADOW_OUTDOOR_MAN;
typedef struct shBattleInfo;
typedef struct SHADOW_OFF_WORK_BG;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct _anon6;
typedef struct _anon7;
typedef struct shGsAllEnv;
typedef struct _anon8;
typedef struct SHADOW_MAN;
typedef struct SPOT_LIGHT;
typedef struct _anon9;
typedef struct _anon10;
typedef struct _CL_VHIT_WALL;
typedef struct _anon11;
typedef struct SHADOW_ENV;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _anon12;
typedef struct SHADOW_PACKET_BUF;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef struct PAD_3D;
typedef struct SHADOW_MICRO_FRAME;
typedef struct _anon13;
typedef union _anon14;
typedef struct _anon15;
typedef struct _CL_VHIT_RESULT;
typedef struct DROP_SHADOW_ENV;
typedef union _anon16;
typedef struct PAD_2D;
typedef struct SHADOW_CHAR_HEAD;
typedef struct JMS_SHADOW_ENV;
typedef struct PAD_INFO;
typedef struct _anon17;
typedef struct shGsDrawEnv;
typedef struct _anon18;
typedef struct SHADOW_OUTDOOR_HEAD;
typedef struct _anon19;
typedef struct utilHeapCtrl;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct DROP_SHADOW_MICRO_FRAME;
typedef struct shGsStencilDrawEnv;
typedef struct _anon20;
typedef struct _anon21;
typedef struct _anon22;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct _anon23;
typedef struct shPlayerWork;
typedef struct _anon24;
typedef struct shGsLoopEnv;

typedef void(*type_80)(SubCharacter*);
typedef void(*type_84)(SubCharacter*);

typedef unsigned char type_0[14];
typedef unsigned int type_1[3];
typedef unsigned int type_2[24];
typedef unsigned int type_3[3];
typedef unsigned int type_4[3];
typedef unsigned short type_5[8];
typedef float type_6[4];
typedef unsigned char type_7[69];
typedef _AnimeInfo type_8[30];
typedef short type_9[22];
typedef unsigned int type_10[4];
typedef _AnimeInfo type_11[8];
typedef unsigned short type_12[8];
typedef short type_13[32];
typedef float type_14[4];
typedef unsigned char type_15[16];
typedef _AnimeInfo type_16[12];
typedef int type_17[4];
typedef short type_18[8];
typedef char type_19[16];
typedef _AnimeInfo type_20[10];
typedef SHADOW_OFF_WORK_CHAR type_21[2];
typedef unsigned long type_22[2];
typedef _anon0 type_23[3];
typedef shGsDrawEnv type_24[3];
typedef unsigned char type_25[2];
typedef shGsStencilDrawEnv type_26[3];
typedef SHADOW_OFF_WORK_BG type_27[4];
typedef shGsTinyDrawEnv type_28[6];
typedef Q_WORDDATA type_29[10];
typedef unsigned char type_30[14];
typedef Q_WORDDATA type_31[10];
typedef _AnimeInfo type_32[22];
typedef _AnimeInfo type_33[16];
typedef Q_WORDDATA type_34[10];
typedef Q_WORDDATA type_35[10];
typedef Q_WORDDATA type_36[10];
typedef Q_WORDDATA type_37[10];
typedef SHADOW_CHAR_MAN* type_38[16];
typedef Q_WORDDATA type_39[10];
typedef _AnimeInfo type_40[27];
typedef _AnimeInfo type_41[32];
typedef SHADOW_OUTDOOR_MAN* type_42[4];
typedef Q_WORDDATA type_43[8];
typedef Q_WORDDATA type_44[2];
typedef unsigned char type_45[97];
typedef Q_WORDDATA type_46[2];
typedef Q_WORDDATA type_47[2];
typedef Q_WORDDATA type_48[2];
typedef _AnimeInfo type_49[29];
typedef _AnimeInfo type_50[6];
typedef Q_WORDDATA type_51[2];
typedef Q_WORDDATA type_52[2];
typedef Q_WORDDATA type_53[6400];
typedef Q_WORDDATA type_54[2];
typedef Q_WORDDATA type_55[5];
typedef Q_WORDDATA type_56[2];
typedef PAD_INFO type_57[10];
typedef Q_WORDDATA type_58[640];
typedef Q_WORDDATA type_59[2];
typedef _AnimeInfo type_60[7];
typedef Q_WORDDATA type_61[2];
typedef Q_WORDDATA type_62[5];
typedef shAttackInfo type_63[66];
typedef Q_WORDDATA type_64[6400];
typedef Q_WORDDATA type_65[2];
typedef float type_66[4][3];
typedef Q_WORDDATA type_67[2];
typedef float type_68[2];
typedef Q_WORDDATA type_69[2];
typedef Q_WORDDATA type_70[2];
typedef Q_WORDDATA type_71[2];
typedef unsigned char type_72[20];
typedef Q_WORDDATA type_73[2];
typedef unsigned char type_74[4];
typedef Q_WORDDATA type_75[2];
typedef unsigned char type_76[4];
typedef float type_77[4][2];
typedef _AnimeInfo type_78[2];
typedef _AnimeInfo type_79[10];
typedef Q_WORDDATA type_81[2];
typedef _AnimeInfo type_82[35];
typedef Q_WORDDATA type_83[2];
typedef Q_WORDDATA type_85[2];
typedef Q_WORDDATA type_86[6];
typedef _AnimeInfo type_87[36];
typedef float type_88[4];
typedef float type_89[4][4];
typedef Q_WORDDATA type_90[2];
typedef SHADOW_MICRO_FRAME type_91[2];
typedef _AnimeInfo type_92[1];
typedef float type_93[4];
typedef _AnimeInfo type_94[6];
typedef Q_WORDDATA type_95[6];
typedef unsigned char type_96[4];
typedef float type_97[4];
typedef float type_98[4][4];
typedef SHADOW_MICRO_FRAME type_99[3];
typedef unsigned char type_100[2];
typedef unsigned char type_101[2];
typedef _AnimeInfo type_102[8];
typedef unsigned int type_103[3];
typedef unsigned int type_104[3];

struct _anon0
{
	_anon23 pmode;
	_anon5 smode2;
	_anon1 dispfb;
	_anon8 display;
	_anon10 bgcolor;
};

struct _anon1
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

struct SHADOW_CHAR_MAN
{
	SubCharacter* scp;
	unsigned short kind;
	short id;
	unsigned char obj_num;
	float spot_cam_angle;
	short light_kind;
	float light_pos[4];
	float light_dir[4];
	float light_param[4];
	float drop_shadow_matrix[4][4];
	Q_WORDDATA* raw_data;
	SHADOW_SHAPE_FRAME* shape;
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
	_anon19 pos;
	_anon19 rot;
	_anon19 pos_spd;
	_anon19 rot_spd;
	_anon20 mat;
	shSkelton* sk_top;
	float eye_y;
	float center_y;
	float spd;
	float spd_org;
	float spd_y;
	float spd_roty;
	float grnd_normal[4];
	float grnd_height;
	_anon19 b_pos;
	_anon19 b_rot;
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct _anon2
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

struct _anon3
{
	_anon4 frame1;
	unsigned long frame1addr;
	_anon17 zbuf1;
	long zbuf1addr;
	_anon12 xyoffset1;
	long xyoffset1addr;
	_anon2 scissor1;
	long scissor1addr;
	_anon21 prmodecont;
	long prmodecontaddr;
	_anon9 colclamp;
	long colclampaddr;
	_anon22 dthe;
	long dtheaddr;
	_anon7 test1;
	long test1addr;
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon20 src_m;
	_anon19 src_t;
	_anon20 des_m;
	_anon19 des_t;
	_anon19 axis;
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

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
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

struct _anon4
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

struct _anon5
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

struct shBattleArea
{
	float center;
	float radius;
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

struct SHADOW_OFF_WORK_CHAR
{
	unsigned short kind;
	short id;
	short obj_id[22];
};

struct SHADOW_SHAPE_FRAME
{
	float local_world[4][4];
	float local_light_position[4];
	Q_WORDDATA length;
	unsigned int* pRefPacket;
	unsigned int* pRawData;
	unsigned int* pKickAddr;
	short obj_id;
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

struct SHADOW_OUTDOOR_MAN
{
	unsigned short kind;
	short map_id;
	unsigned char lighting_mode;
	unsigned char obj_num;
	short light_kind;
	float light_pos[4];
	float light_dir[4];
	float light_param[4];
	Q_WORDDATA* raw_data;
	SHADOW_SHAPE_FRAME* shape;
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

struct SHADOW_OFF_WORK_BG
{
	short map_id;
	short obj_id[32];
};

enum _JAMES_UPPER_STATUS : unsigned char
{
	JMS_ST_U_STAND,
	JMS_ST_U_RELAX,
	JMS_ST_U_ALERT,
	JMS_ST_U_TIRED,
	JMS_ST_U_READY,
	JMS_ST_U_READYOFF,
	JMS_ST_U_LROUND,
	JMS_ST_U_RROUND,
	JMS_ST_U_BACK,
	JMS_ST_U_WALK,
	JMS_ST_U_LSWALK,
	JMS_ST_U_RSWALK,
	JMS_ST_U_RUN1,
	JMS_ST_U_RUN2,
	JMS_ST_U_RUN3,
	JMS_ST_U_LSRUN,
	JMS_ST_U_RSRUN,
	JMS_ST_U_WALL_F,
	JMS_ST_U_LTURN,
	JMS_ST_U_RTURN,
	JMS_ST_U_JUMP,
	JMS_ST_U_GUARD,
	JMS_ST_U_LSTEP,
	JMS_ST_U_RSTEP,
	JMS_ST_U_FALL,
	JMS_ST_U_DAMAGE,
	JMS_ST_U_HOLD,
	JMS_ST_U_RELEASE,
	JMS_ST_U_ATTACK,
	JMS_ST_U_KICK,
	JMS_ST_U_TO_STAND,
	JMS_ST_U_EVENT
};

struct _anon6
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

struct _anon7
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
	_anon0 DispEnv[3];
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

struct _anon8
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

struct SHADOW_MAN
{
	char change_flag;
	short spot_char_num;
	short spot_bg_num;
	short self_num;
	short parallel_char_num;
	short parallel_bg_num;
	short point_char_num;
	short char_man_num;
	short outdoor_man_num;
	short enemy_num;
	short chr_shadow_switch;
	short bg_shadow_switch;
	SHADOW_CHAR_MAN* char_man[16];
	SHADOW_OUTDOOR_MAN* outdoor_man[4];
	SHADOW_PACKET_BUF reftag_pool;
	SHADOW_PACKET_BUF kick_packet;
};

struct SPOT_LIGHT
{
	float c[4];
	float zdir[4];
	float range[4];
};

struct _anon9
{
	struct
	{
		unsigned long CLAMP : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon10
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

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

struct _anon11
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

struct SHADOW_ENV
{
	short block;
	short clip_kind;
	float leng;
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

struct _anon12
{
	struct
	{
		unsigned long OFX : 16;
		unsigned long pad16 : 16;
		unsigned long OFY : 16;
		unsigned long pad48 : 16;
	};
};

struct SHADOW_PACKET_BUF
{
	Q_WORDDATA* head;
	Q_WORDDATA* curr;
};

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon14 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

struct PAD_3D
{
	char round_way;
	unsigned char reserved1;
	unsigned char lslide;
	unsigned char rslide;
	unsigned char lturn180;
	unsigned char rturn180;
};

struct SHADOW_MICRO_FRAME
{
	float drop_shadow[4][4];
	float world_clip[4][4];
	float clip_screen[4][4];
	Q_WORDDATA color;
	Q_WORDDATA giftag_color;
	Q_WORDDATA giftag_dummy;
	Q_WORDDATA giftag_default;
	Q_WORDDATA giftag_3;
	Q_WORDDATA giftag_4;
	Q_WORDDATA giftag_5;
	Q_WORDDATA giftag_6;
	Q_WORDDATA giftag_7;
	Q_WORDDATA giftag_8;
	Q_WORDDATA giftag_9;
	Q_WORDDATA giftag_10;
	Q_WORDDATA alpha0;
	Q_WORDDATA alpha1;
	Q_WORDDATA flags;
	float y_unit[4];
	float dummy[4][3];
	float cam_pos[4];
	float spot_cam_dir[4];
	unsigned int* pKickAddr;
	unsigned int* pRawData;
};

struct _anon13
{
	struct
	{
		unsigned long X : 16;
		unsigned long Y : 16;
		unsigned long Z : 32;
	};
};

union _anon14
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _anon15
{
	_anon7 testa;
	long testaaddr;
	_anon18 prim;
	long primaddr;
	_anon24 rgbaq;
	long rgbaqaddr;
	_anon13 xyz2a;
	long xyz2aaddr;
	_anon13 xyz2b;
	long xyz2baddr;
	_anon7 testb;
	long testbaddr;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon16 hobj;
};

struct DROP_SHADOW_ENV
{
	short block;
	float alpha_min;
	float alpha_max;
	float height_revision;
	unsigned int color;
};

union _anon16
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
};

struct SHADOW_CHAR_HEAD
{
	short char_id;
	unsigned short kind;
	short obj_num;
	short reserve1;
	short reserve2;
	short reserve3;
	short reserve4;
	short reserve5;
};

struct JMS_SHADOW_ENV
{
	short light_kind;
	float bias;
	float height_revision;
	float scale;
};

struct PAD_INFO
{
	unsigned char action;
	unsigned char dash;
	unsigned char attack0;
	unsigned char attack1;
	unsigned char attack2;
	unsigned char menu;
	unsigned char hold;
	unsigned char search;
	unsigned char map;
	struct
	{
		unsigned char light_ : 4;
		unsigned char light : 4;
	};
	unsigned char l_button;
	unsigned char r_button;
	char lstickX;
	char lstickY;
	char rstickX;
	char rstickY;
	unsigned char forward;
	unsigned char backward;
	unsigned char lround;
	unsigned char rround;
	unsigned char skip;
	unsigned char pause;
	union
	{
		PAD_3D pad3d;
		PAD_2D pad2d;
	};
};

struct _anon17
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
	_anon11 giftag;
	_anon3 draw;
	Q_WORDDATA drawq2[5];
	_anon15 clear;
	_anon11 giftag_nc;
	_anon3 draw_nc;
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

struct _anon18
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

struct SHADOW_OUTDOOR_HEAD
{
	unsigned short kind;
	short map_id;
	short obj_num;
	short reserve1;
	short reserve2;
	short reserve3;
	short reserve4;
	short reserve5;
};

struct _anon19
{
	float x;
	float y;
	float z;
	float w;
};

struct utilHeapCtrl
{
	int size;
	int free;
	void* head;
	void* tail;
};

struct _CL_HITPOLY_COLUMN
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
	float p[4][2];
};

struct DROP_SHADOW_MICRO_FRAME
{
	float drop_shadow[4][4];
	float world_clip[4][4];
	float clip_screen[4][4];
	Q_WORDDATA color;
	Q_WORDDATA giftag_color;
	Q_WORDDATA giftag_dummy;
	Q_WORDDATA giftag_default;
	Q_WORDDATA fog_param;
	Q_WORDDATA alpha0;
	Q_WORDDATA alpha_range;
	Q_WORDDATA alpha_switch;
	unsigned int* pKickAddr;
	unsigned int* pRawData;
};

struct shGsStencilDrawEnv
{
	_anon11 giftag;
	_anon3 draw;
	Q_WORDDATA alpha1;
	Q_WORDDATA drawq2[6];
	_anon15 clear;
	Q_WORDDATA frame;
	_anon11 giftag_nc;
	_anon3 draw_nc;
	Q_WORDDATA alpha1_nc;
	Q_WORDDATA drawq2_nc[6];
	Q_WORDDATA gifad_frame_normal;
	Q_WORDDATA frame_normal;
	Q_WORDDATA gifad_frame_mskalpha;
	Q_WORDDATA frame_mskalpha;
	Q_WORDDATA gifad_frame_mskDalpha;
	Q_WORDDATA frame_mskDalpha;
};

struct _anon20
{
	float d[4][4];
};

struct _anon21
{
	struct
	{
		unsigned long AC : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon22
{
	struct
	{
		unsigned long DTHE : 1;
		unsigned long pad01 : 63;
	};
};

enum _JAMES_LOWER_STATUS : unsigned char
{
	JMS_ST_L_STAND,
	JMS_ST_L_RELAX,
	JMS_ST_L_ALERT,
	JMS_ST_L_TIRED,
	JMS_ST_L_READY,
	JMS_ST_L_READYOFF,
	JMS_ST_L_LROUND,
	JMS_ST_L_RROUND,
	JMS_ST_L_BACK,
	JMS_ST_L_WALK,
	JMS_ST_L_LSWALK,
	JMS_ST_L_RSWALK,
	JMS_ST_L_RUN1,
	JMS_ST_L_RUN2,
	JMS_ST_L_RUN3,
	JMS_ST_L_LSRUN,
	JMS_ST_L_RSRUN,
	JMS_ST_L_WALL_F,
	JMS_ST_L_LTURN,
	JMS_ST_L_RTURN,
	JMS_ST_L_JUMP,
	JMS_ST_L_GUARD,
	JMS_ST_L_LSTEP,
	JMS_ST_L_RSTEP,
	JMS_ST_L_FALL,
	JMS_ST_L_DAMAGE,
	JMS_ST_L_HOLD,
	JMS_ST_L_RELEASE,
	JMS_ST_L_ATTACK,
	JMS_ST_L_KICK,
	JMS_ST_L_TO_STAND,
	JMS_ST_L_EVENT
};

struct _anon23
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

struct shPlayerWork
{
	SubCharacter* player;
	_anon19 dist_rot;
	_anon19 dist_pos;
	_anon19 pos;
	_anon19 rot;
	float rot_y;
	float inner_to_wall;
	float dist_to_wall;
	float dir_tgt_2d;
	float dir_now_2d;
	unsigned char map_mode;
	unsigned char reserve0;
	unsigned char step;
	unsigned char sub_step;
	unsigned short timer;
	unsigned short timer2;
	unsigned int allbody_now;
	_JAMES_UPPER_STATUS upper_now;
	_JAMES_LOWER_STATUS lower_now;
	unsigned int allbody_prev;
	_JAMES_UPPER_STATUS upper_prev;
	_JAMES_LOWER_STATUS lower_prev;
	unsigned char event_status_now;
	unsigned char event_status_prev;
	unsigned char event_move_mode;
	unsigned char reserve1;
	unsigned int upper_st_flg;
	unsigned int lower_st_flg;
	unsigned int u_anime_st_flg;
	unsigned int l_anime_st_flg;
	unsigned int anime_pause;
	unsigned int act_with_wep;
	float light_vec_inner_rate;
	float light_pos_revise[4];
	float light_vec_revise[4];
	float light_pos[4];
	float light_vec[4];
	float light_pos_revise_reverse[4];
	float light_vec_revise_reverse[4];
	float light_pos_reverse[4];
	float light_vec_reverse[4];
	float light_vec_neck[4];
	int room_name_prev;
	int room_name_now;
	_CL_VHIT_RESULT r_side;
	_CL_VHIT_RESULT l_side;
	_CL_VHIT_RESULT foot;
	_CL_VHIT_RESULT ft_floor;
	_CL_VHIT_RESULT r_foot;
	_CL_VHIT_RESULT l_foot;
	_CL_HITPOLY_COLUMN column_mov;
	_CL_HITPOLY_COLUMN column_atk;
	float col_mov_z_hosei;
	float col_atk_z_hosei;
	unsigned char wep_no_hit_floor;
	unsigned char efct_upper;
	unsigned char light_reverse;
	unsigned char water_road;
	PAD_INFO pad[10];
	float rstick_x;
	float rstick_y;
	float lstick_x;
	float lstick_y;
	float lstick_p;
	float cam_rot_y[2];
	unsigned char now_cam_no;
	unsigned char cam_chg_flg;
	unsigned char ctrl_unit;
	unsigned char ctrl_inputing;
	unsigned char se_upper[4];
	unsigned char se_foot[4];
	float csaw_se_vol;
	unsigned char csaw_se_flg;
	unsigned char d_shock;
	unsigned char reserve2;
	unsigned char strike_splash_flg;
	int event_anime;
	_anon19 tgt_body_angle;
	_anon19 tgt_neck_angle;
	_anon19 tgt_arms_angle;
	unsigned char hold_chg[2];
	unsigned char hold_loop[2];
	unsigned char motion_no;
	unsigned char shotgun_dir;
	unsigned char shotgun_prev;
	unsigned char guard_check;
	int parts_light;
	int parts_rhand;
	int parts_lhand;
	SubCharacter* target;
	SubCharacter* look_tgt;
	float non_input;
	float hugging_gauge;
	float running_time;
	float muteki_time;
	float hp;
	float hp_max;
	float hp_recover;
	float shock;
	float spray_time;
	int tired;
	int tired_max;
	int spirit;
	SubCharacter* enemy_liedown;
	unsigned char enemy_around;
	unsigned char enemy_atk_area;
	unsigned char enemy_near;
	unsigned char lock_on;
	unsigned char running;
	unsigned char cannot_run;
	unsigned char fall_type;
	unsigned char reload;
	unsigned char weapon;
	unsigned char shoot_val;
	unsigned char reload_val;
	unsigned char atk_type;
	unsigned char atk_reserve[2];
	unsigned char attack_ok;
	char hold_type;
	unsigned char dead;
	unsigned char no_damage;
	unsigned char atk_count;
	unsigned char hug_status;
	unsigned char hug_dir;
	unsigned char se_on;
	unsigned char spray_set;
	char spray_pow;
	unsigned short damage_no;
	unsigned short attack_no;
};

struct _anon24
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

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
_AnimeInfo dmaria_anim[30];
_AnimeInfo p_hhh_mar_anim[6];
_AnimeInfo scu_anim[36];
_AnimeInfo d_scu_anim[10];
_AnimeInfo mkn_anim[35];
_AnimeInfo d_mkn_anim[8];
_AnimeInfo nse_anim[27];
_AnimeInfo d_nse_anim[1];
_AnimeInfo red_anim[12];
_AnimeInfo d_red_anim[7];
_AnimeInfo oni_anim[16];
_AnimeInfo d_oni_anim[10];
_AnimeInfo edb_anim[22];
_AnimeInfo d_edb_anim[2];
_AnimeInfo dangela_anim[32];
_AnimeInfo pangela_anim[6];
_AnimeInfo pap_anim[29];
_AnimeInfo d_pap_anim[8];
short jms_added_flag;
shGsAllEnv shGs_AllEnv;
SHADOW_MICRO_FRAME shadow_micro_frame_parallel[3];
SHADOW_MICRO_FRAME shadow_micro_frame_point;
SHADOW_MICRO_FRAME shadow_micro_frame[2];
SHADOW_OFF_WORK_BG shadow_off_work_bg[4];
SHADOW_OFF_WORK_CHAR shadow_off_work_char[2];
Q_WORDDATA Shadow_REFtag_Packet[6400];
SHADOW_MAN shadow_man;
Q_WORDDATA Shadow_Kick_Packet[640];
utilHeapCtrl* shadow_calcheap;
Q_WORDDATA Shadow_Calcwork[6400];
float light_dir_for_jms[4];
float light_pos_for_jms[4];
float light_param_for_jms[4];
JMS_SHADOW_ENV jms_shadow_env;
unsigned int Shadow_micro_code_parallel;
unsigned int Shadow_micro_code;
unsigned int Drop_Shadow_micro_code;
DROP_SHADOW_MICRO_FRAME drop_shadow_micro_frame;
shPlayerWork sh2jms;
JMS_SHADOW_ENV jms_shadow_env_para;

void sh2shd_init_shadow();
void sh2shd_reset_shadow();
int sh2shd_add_char(SubCharacter* scp, Q_WORDDATA* raw_data, short light_kind, float* light_pos, float* light_dir, float* light_param);
int sh2shd_Draw_ShadowChar(SubCharacter* scp, void* kg1, short light_kind, float* light_pos, float* light_dir, float* light_param);
int sh2shd_add_map(unsigned short id, Q_WORDDATA* raw_data, short light_kind, float* light_pos, float* light_dir, float* light_param);
Q_WORDDATA* sh2shd_exe_shadow(_anon6* cam);
void sh2shd_renew_shadow_man(_anon6* cam, int glb_coord, int map_id);
void make_chara_reftag_pool_and_kick_packet_for_spot();
void make_bg_reftag_pool_and_kick_packet_for_spot(float spot_cam_angle);
void make_chara_reftag_pool_and_kick_packet_for_point();
void make_chara_reftag_pool_and_kick_packet_for_self();
void make_chara_reftag_pool_and_kick_packet_for_parallel();
void make_bg_reftag_pool_and_kick_packet_for_parallel();
float get_spot_camera_angle(float* cam_pos, float* light_pos, float* light_dir);
float get_distance_from_light_to_chara(SHADOW_CHAR_MAN* man, float* iv);
Q_WORDDATA* sh2shd_exe_drop_shadow(_anon6* cam);
void sh2shd_renew_drop_shadow_man(SPOT_LIGHT* spot, _anon6* cam, int glb_coord, int map_id);
void sh2shd_make_stencil_drop_shadow_plane(float* plane, float* pos, float* normal);
void sh2shd_make_drop_shadow_plane(float* plane, float* pos, float* normal);
void sh2shd_reset_shadow_off_work();
int sh2shd_add_map_to_shadow_off_work(short map_id);
int sh2shd_off_obj(short map_id, short obj_id);
int sh2shd_add_char_to_shadow_off_work(unsigned short kind, short id);
int sh2shd_off_char_obj(unsigned short kind, short id, short obj_id);
int sh2shd_off_char_all_parts(unsigned short kind, short id);
void sh2shd_bg_shadow_off();
int check_self_spot(unsigned short kind);
int check_self_para(unsigned short kind);
void sh2shd_del_jms_upper_body(unsigned short kind, short id);
void sh2shd_del_jms_head(unsigned short kind, short id);

// 
// Start address: 0x1a1c50
void sh2shd_init_shadow()
{
	int j;
	int j;
	int i;
	// Line 102, Address: 0x1a1c50, Func Offset: 0
	// Line 106, Address: 0x1a1c58, Func Offset: 0x8
	// Line 107, Address: 0x1a1c60, Func Offset: 0x10
	// Line 108, Address: 0x1a1c68, Func Offset: 0x18
	// Line 109, Address: 0x1a1c70, Func Offset: 0x20
	// Line 110, Address: 0x1a1c78, Func Offset: 0x28
	// Line 111, Address: 0x1a1c80, Func Offset: 0x30
	// Line 112, Address: 0x1a1c88, Func Offset: 0x38
	// Line 113, Address: 0x1a1c90, Func Offset: 0x40
	// Line 114, Address: 0x1a1c98, Func Offset: 0x48
	// Line 116, Address: 0x1a1ca0, Func Offset: 0x50
	// Line 119, Address: 0x1a1ca8, Func Offset: 0x58
	// Line 120, Address: 0x1a1cb4, Func Offset: 0x64
	// Line 122, Address: 0x1a1cbc, Func Offset: 0x6c
	// Line 123, Address: 0x1a1cc8, Func Offset: 0x78
	// Line 125, Address: 0x1a1cec, Func Offset: 0x9c
	// Line 126, Address: 0x1a1cf8, Func Offset: 0xa8
	// Line 128, Address: 0x1a1d1c, Func Offset: 0xcc
	// Line 129, Address: 0x1a1d3c, Func Offset: 0xec
	// Line 134, Address: 0x1a1d74, Func Offset: 0x124
	// Line 139, Address: 0x1a1d8c, Func Offset: 0x13c
	// Line 143, Address: 0x1a1da4, Func Offset: 0x154
	// Line 146, Address: 0x1a1db0, Func Offset: 0x160
	// Line 147, Address: 0x1a1dcc, Func Offset: 0x17c
	// Line 148, Address: 0x1a1de0, Func Offset: 0x190
	// Line 149, Address: 0x1a1dec, Func Offset: 0x19c
	// Line 150, Address: 0x1a1e1c, Func Offset: 0x1cc
	// Line 153, Address: 0x1a1e2c, Func Offset: 0x1dc
	// Line 157, Address: 0x1a1e38, Func Offset: 0x1e8
	// Line 158, Address: 0x1a1e58, Func Offset: 0x208
	// Line 159, Address: 0x1a1e64, Func Offset: 0x214
	// Line 160, Address: 0x1a1e94, Func Offset: 0x244
	// Line 163, Address: 0x1a1ea4, Func Offset: 0x254
	// Line 164, Address: 0x1a1ebc, Func Offset: 0x26c
	// Line 165, Address: 0x1a1ed4, Func Offset: 0x284
	// Line 166, Address: 0x1a1eec, Func Offset: 0x29c
	// Line 167, Address: 0x1a1f04, Func Offset: 0x2b4
	// Line 168, Address: 0x1a1f1c, Func Offset: 0x2cc
	// Line 170, Address: 0x1a1f34, Func Offset: 0x2e4
	// Line 186, Address: 0x1a1f3c, Func Offset: 0x2ec
	// Func End, Address: 0x1a1f4c, Func Offset: 0x2fc
}

// 
// Start address: 0x1a1f50
void sh2shd_reset_shadow()
{
	int i;
	// Line 191, Address: 0x1a1f50, Func Offset: 0
	// Line 198, Address: 0x1a1f60, Func Offset: 0x10
	// Line 200, Address: 0x1a1f6c, Func Offset: 0x1c
	// Line 203, Address: 0x1a1f88, Func Offset: 0x38
	// Line 204, Address: 0x1a1f94, Func Offset: 0x44
	// Line 207, Address: 0x1a1f9c, Func Offset: 0x4c
	// Line 208, Address: 0x1a1fa8, Func Offset: 0x58
	// Line 209, Address: 0x1a1fac, Func Offset: 0x5c
	// Line 211, Address: 0x1a1fc4, Func Offset: 0x74
	// Line 213, Address: 0x1a1fd0, Func Offset: 0x80
	// Line 216, Address: 0x1a1fec, Func Offset: 0x9c
	// Line 217, Address: 0x1a1ff8, Func Offset: 0xa8
	// Line 220, Address: 0x1a2000, Func Offset: 0xb0
	// Line 221, Address: 0x1a200c, Func Offset: 0xbc
	// Line 222, Address: 0x1a2010, Func Offset: 0xc0
	// Line 224, Address: 0x1a2024, Func Offset: 0xd4
	// Line 225, Address: 0x1a202c, Func Offset: 0xdc
	// Line 226, Address: 0x1a2034, Func Offset: 0xe4
	// Line 227, Address: 0x1a203c, Func Offset: 0xec
	// Line 228, Address: 0x1a2044, Func Offset: 0xf4
	// Line 229, Address: 0x1a204c, Func Offset: 0xfc
	// Line 230, Address: 0x1a2054, Func Offset: 0x104
	// Line 231, Address: 0x1a205c, Func Offset: 0x10c
	// Line 232, Address: 0x1a2064, Func Offset: 0x114
	// Line 234, Address: 0x1a206c, Func Offset: 0x11c
	// Line 236, Address: 0x1a2074, Func Offset: 0x124
	// Line 239, Address: 0x1a207c, Func Offset: 0x12c
	// Line 240, Address: 0x1a2088, Func Offset: 0x138
	// Line 248, Address: 0x1a2090, Func Offset: 0x140
	// Func End, Address: 0x1a20a8, Func Offset: 0x158
}

// 
// Start address: 0x1a20b0
int sh2shd_add_char(SubCharacter* scp, Q_WORDDATA* raw_data, short light_kind, float* light_pos, float* light_dir, float* light_param)
{
	float light_vec[4];
	float cam_pos[4];
	float chr_pos[4];
	int map_id;
	int glb_coord;
	int demo_no;
	int i;
	SHADOW_CHAR_HEAD char_head;
	Q_WORDDATA* cur;
	// Line 267, Address: 0x1a20b0, Func Offset: 0
	// Line 280, Address: 0x1a20ec, Func Offset: 0x3c
	// Line 281, Address: 0x1a20f8, Func Offset: 0x48
	// Line 283, Address: 0x1a2108, Func Offset: 0x58
	// Line 285, Address: 0x1a2114, Func Offset: 0x64
	// Line 287, Address: 0x1a2124, Func Offset: 0x74
	// Line 288, Address: 0x1a2128, Func Offset: 0x78
	// Line 289, Address: 0x1a2134, Func Offset: 0x84
	// Line 290, Address: 0x1a2140, Func Offset: 0x90
	// Line 291, Address: 0x1a214c, Func Offset: 0x9c
	// Line 293, Address: 0x1a2150, Func Offset: 0xa0
	// Line 295, Address: 0x1a2158, Func Offset: 0xa8
	// Line 297, Address: 0x1a2178, Func Offset: 0xc8
	// Line 298, Address: 0x1a219c, Func Offset: 0xec
	// Line 301, Address: 0x1a21a8, Func Offset: 0xf8
	// Line 302, Address: 0x1a21bc, Func Offset: 0x10c
	// Line 303, Address: 0x1a21d8, Func Offset: 0x128
	// Line 305, Address: 0x1a21e4, Func Offset: 0x134
	// Line 307, Address: 0x1a2200, Func Offset: 0x150
	// Line 308, Address: 0x1a2208, Func Offset: 0x158
	// Line 310, Address: 0x1a2224, Func Offset: 0x174
	// Line 312, Address: 0x1a2240, Func Offset: 0x190
	// Line 313, Address: 0x1a2254, Func Offset: 0x1a4
	// Line 317, Address: 0x1a225c, Func Offset: 0x1ac
	// Line 323, Address: 0x1a2278, Func Offset: 0x1c8
	// Line 324, Address: 0x1a2284, Func Offset: 0x1d4
	// Line 325, Address: 0x1a2288, Func Offset: 0x1d8
	// Line 326, Address: 0x1a2294, Func Offset: 0x1e4
	// Line 327, Address: 0x1a2298, Func Offset: 0x1e8
	// Line 328, Address: 0x1a22ac, Func Offset: 0x1fc
	// Line 329, Address: 0x1a22cc, Func Offset: 0x21c
	// Line 330, Address: 0x1a22d8, Func Offset: 0x228
	// Line 331, Address: 0x1a22dc, Func Offset: 0x22c
	// Line 332, Address: 0x1a22ec, Func Offset: 0x23c
	// Line 333, Address: 0x1a230c, Func Offset: 0x25c
	// Line 335, Address: 0x1a2350, Func Offset: 0x2a0
	// Line 336, Address: 0x1a2358, Func Offset: 0x2a8
	// Line 337, Address: 0x1a2370, Func Offset: 0x2c0
	// Line 338, Address: 0x1a23b8, Func Offset: 0x308
	// Line 343, Address: 0x1a23c8, Func Offset: 0x318
	// Line 344, Address: 0x1a23dc, Func Offset: 0x32c
	// Line 346, Address: 0x1a23e8, Func Offset: 0x338
	// Line 348, Address: 0x1a23f4, Func Offset: 0x344
	// Line 349, Address: 0x1a23fc, Func Offset: 0x34c
	// Line 353, Address: 0x1a2418, Func Offset: 0x368
	// Line 354, Address: 0x1a2428, Func Offset: 0x378
	// Line 356, Address: 0x1a2434, Func Offset: 0x384
	// Line 357, Address: 0x1a243c, Func Offset: 0x38c
	// Line 358, Address: 0x1a2444, Func Offset: 0x394
	// Line 361, Address: 0x1a2460, Func Offset: 0x3b0
	// Line 362, Address: 0x1a2484, Func Offset: 0x3d4
	// Line 366, Address: 0x1a2490, Func Offset: 0x3e0
	// Line 367, Address: 0x1a24a4, Func Offset: 0x3f4
	// Line 370, Address: 0x1a24b0, Func Offset: 0x400
	// Line 373, Address: 0x1a24e0, Func Offset: 0x430
	// Line 374, Address: 0x1a24ec, Func Offset: 0x43c
	// Line 375, Address: 0x1a2508, Func Offset: 0x458
	// Line 377, Address: 0x1a2520, Func Offset: 0x470
	// Line 378, Address: 0x1a252c, Func Offset: 0x47c
	// Line 383, Address: 0x1a2538, Func Offset: 0x488
	// Line 384, Address: 0x1a2560, Func Offset: 0x4b0
	// Line 386, Address: 0x1a2578, Func Offset: 0x4c8
	// Line 390, Address: 0x1a25b4, Func Offset: 0x504
	// Line 400, Address: 0x1a25ec, Func Offset: 0x53c
	// Line 403, Address: 0x1a262c, Func Offset: 0x57c
	// Line 408, Address: 0x1a2640, Func Offset: 0x590
	// Line 410, Address: 0x1a266c, Func Offset: 0x5bc
	// Line 412, Address: 0x1a26a8, Func Offset: 0x5f8
	// Line 414, Address: 0x1a26b0, Func Offset: 0x600
	// Line 415, Address: 0x1a26c0, Func Offset: 0x610
	// Line 416, Address: 0x1a26d0, Func Offset: 0x620
	// Line 417, Address: 0x1a26e0, Func Offset: 0x630
	// Line 418, Address: 0x1a26e8, Func Offset: 0x638
	// Line 420, Address: 0x1a2704, Func Offset: 0x654
	// Line 422, Address: 0x1a2754, Func Offset: 0x6a4
	// Line 425, Address: 0x1a275c, Func Offset: 0x6ac
	// Line 430, Address: 0x1a279c, Func Offset: 0x6ec
	// Line 434, Address: 0x1a27cc, Func Offset: 0x71c
	// Line 435, Address: 0x1a27e0, Func Offset: 0x730
	// Line 438, Address: 0x1a27e8, Func Offset: 0x738
	// Line 439, Address: 0x1a27fc, Func Offset: 0x74c
	// Line 441, Address: 0x1a2804, Func Offset: 0x754
	// Line 442, Address: 0x1a2818, Func Offset: 0x768
	// Line 445, Address: 0x1a2820, Func Offset: 0x770
	// Line 446, Address: 0x1a2834, Func Offset: 0x784
	// Line 450, Address: 0x1a283c, Func Offset: 0x78c
	// Line 451, Address: 0x1a2850, Func Offset: 0x7a0
	// Line 454, Address: 0x1a2858, Func Offset: 0x7a8
	// Line 455, Address: 0x1a286c, Func Offset: 0x7bc
	// Line 458, Address: 0x1a2874, Func Offset: 0x7c4
	// Line 459, Address: 0x1a2888, Func Offset: 0x7d8
	// Line 463, Address: 0x1a2890, Func Offset: 0x7e0
	// Line 464, Address: 0x1a28a4, Func Offset: 0x7f4
	// Line 468, Address: 0x1a28ac, Func Offset: 0x7fc
	// Line 472, Address: 0x1a28c0, Func Offset: 0x810
	// Line 473, Address: 0x1a28dc, Func Offset: 0x82c
	// Line 475, Address: 0x1a28f0, Func Offset: 0x840
	// Line 478, Address: 0x1a28fc, Func Offset: 0x84c
	// Func End, Address: 0x1a2928, Func Offset: 0x878
}

// 
// Start address: 0x1a2930
int sh2shd_Draw_ShadowChar(SubCharacter* scp, void* kg1, short light_kind, float* light_pos, float* light_dir, float* light_param)
{
	int check;
	// Line 485, Address: 0x1a2930, Func Offset: 0
	// Line 492, Address: 0x1a2938, Func Offset: 0x8
	// Line 495, Address: 0x1a2950, Func Offset: 0x20
	// Line 496, Address: 0x1a297c, Func Offset: 0x4c
	// Func End, Address: 0x1a298c, Func Offset: 0x5c
}

// 
// Start address: 0x1a2990
int sh2shd_add_map(unsigned short id, Q_WORDDATA* raw_data, short light_kind, float* light_pos, float* light_dir, float* light_param)
{
	int i;
	SHADOW_OUTDOOR_HEAD outdoor_head;
	Q_WORDDATA* cur;
	// Line 505, Address: 0x1a2990, Func Offset: 0
	// Line 511, Address: 0x1a29cc, Func Offset: 0x3c
	// Line 512, Address: 0x1a29e0, Func Offset: 0x50
	// Line 515, Address: 0x1a29ec, Func Offset: 0x5c
	// Line 517, Address: 0x1a2a1c, Func Offset: 0x8c
	// Line 521, Address: 0x1a2a2c, Func Offset: 0x9c
	// Line 522, Address: 0x1a2a38, Func Offset: 0xa8
	// Line 523, Address: 0x1a2a54, Func Offset: 0xc4
	// Line 525, Address: 0x1a2a68, Func Offset: 0xd8
	// Line 526, Address: 0x1a2a74, Func Offset: 0xe4
	// Line 530, Address: 0x1a2a80, Func Offset: 0xf0
	// Line 531, Address: 0x1a2aa8, Func Offset: 0x118
	// Line 533, Address: 0x1a2ab4, Func Offset: 0x124
	// Line 536, Address: 0x1a2ae4, Func Offset: 0x154
	// Line 545, Address: 0x1a2b0c, Func Offset: 0x17c
	// Line 547, Address: 0x1a2b44, Func Offset: 0x1b4
	// Line 550, Address: 0x1a2b58, Func Offset: 0x1c8
	// Line 556, Address: 0x1a2b80, Func Offset: 0x1f0
	// Line 560, Address: 0x1a2ba4, Func Offset: 0x214
	// Line 561, Address: 0x1a2bb8, Func Offset: 0x228
	// Line 564, Address: 0x1a2bc0, Func Offset: 0x230
	// Line 568, Address: 0x1a2bd4, Func Offset: 0x244
	// Line 571, Address: 0x1a2be0, Func Offset: 0x250
	// Func End, Address: 0x1a2c0c, Func Offset: 0x27c
}

// 
// Start address: 0x1a2c10
Q_WORDDATA* sh2shd_exe_shadow(_anon6* cam)
{
	int count;
	int demo_no;
	int glb_coord;
	int map_id;
	float spot_cam_angle_bg;
	float cam_pos[4];
	int i;
	// Line 721, Address: 0x1a2c10, Func Offset: 0
	// Line 730, Address: 0x1a2c28, Func Offset: 0x18
	// Line 749, Address: 0x1a2c34, Func Offset: 0x24
	// Line 750, Address: 0x1a2c44, Func Offset: 0x34
	// Line 753, Address: 0x1a2c50, Func Offset: 0x40
	// Line 755, Address: 0x1a2c60, Func Offset: 0x50
	// Line 756, Address: 0x1a2c70, Func Offset: 0x60
	// Line 757, Address: 0x1a2c7c, Func Offset: 0x6c
	// Line 758, Address: 0x1a2c8c, Func Offset: 0x7c
	// Line 760, Address: 0x1a2c98, Func Offset: 0x88
	// Line 761, Address: 0x1a2ca0, Func Offset: 0x90
	// Line 762, Address: 0x1a2ca8, Func Offset: 0x98
	// Line 763, Address: 0x1a2cb0, Func Offset: 0xa0
	// Line 764, Address: 0x1a2cb8, Func Offset: 0xa8
	// Line 765, Address: 0x1a2cc0, Func Offset: 0xb0
	// Line 767, Address: 0x1a2cd0, Func Offset: 0xc0
	// Line 768, Address: 0x1a2cd8, Func Offset: 0xc8
	// Line 769, Address: 0x1a2ce4, Func Offset: 0xd4
	// Line 770, Address: 0x1a2cf4, Func Offset: 0xe4
	// Line 772, Address: 0x1a2d00, Func Offset: 0xf0
	// Line 773, Address: 0x1a2d08, Func Offset: 0xf8
	// Line 777, Address: 0x1a2d10, Func Offset: 0x100
	// Line 781, Address: 0x1a2d20, Func Offset: 0x110
	// Line 782, Address: 0x1a2d28, Func Offset: 0x118
	// Line 784, Address: 0x1a2d3c, Func Offset: 0x12c
	// Line 796, Address: 0x1a2d4c, Func Offset: 0x13c
	// Line 801, Address: 0x1a2d58, Func Offset: 0x148
	// Line 804, Address: 0x1a2d6c, Func Offset: 0x15c
	// Line 805, Address: 0x1a2d7c, Func Offset: 0x16c
	// Line 808, Address: 0x1a2d8c, Func Offset: 0x17c
	// Line 811, Address: 0x1a2d9c, Func Offset: 0x18c
	// Line 812, Address: 0x1a2db4, Func Offset: 0x1a4
	// Line 816, Address: 0x1a2dd4, Func Offset: 0x1c4
	// Line 820, Address: 0x1a2ddc, Func Offset: 0x1cc
	// Line 824, Address: 0x1a2dec, Func Offset: 0x1dc
	// Line 825, Address: 0x1a2df8, Func Offset: 0x1e8
	// Line 826, Address: 0x1a2e14, Func Offset: 0x204
	// Line 830, Address: 0x1a2e28, Func Offset: 0x218
	// Line 836, Address: 0x1a2e58, Func Offset: 0x248
	// Line 837, Address: 0x1a2e70, Func Offset: 0x260
	// Line 845, Address: 0x1a2e90, Func Offset: 0x280
	// Line 852, Address: 0x1a2e9c, Func Offset: 0x28c
	// Line 854, Address: 0x1a2eac, Func Offset: 0x29c
	// Line 855, Address: 0x1a2ec4, Func Offset: 0x2b4
	// Line 858, Address: 0x1a2ee4, Func Offset: 0x2d4
	// Line 864, Address: 0x1a2eec, Func Offset: 0x2dc
	// Line 867, Address: 0x1a2efc, Func Offset: 0x2ec
	// Line 868, Address: 0x1a2f14, Func Offset: 0x304
	// Line 872, Address: 0x1a2f34, Func Offset: 0x324
	// Line 880, Address: 0x1a2f3c, Func Offset: 0x32c
	// Line 883, Address: 0x1a2f4c, Func Offset: 0x33c
	// Line 884, Address: 0x1a2f64, Func Offset: 0x354
	// Line 888, Address: 0x1a2f84, Func Offset: 0x374
	// Line 893, Address: 0x1a2f8c, Func Offset: 0x37c
	// Line 896, Address: 0x1a2f9c, Func Offset: 0x38c
	// Line 897, Address: 0x1a2fb4, Func Offset: 0x3a4
	// Line 900, Address: 0x1a2fd4, Func Offset: 0x3c4
	// Line 904, Address: 0x1a2fdc, Func Offset: 0x3cc
	// Line 942, Address: 0x1a2fe4, Func Offset: 0x3d4
	// Line 944, Address: 0x1a2ff8, Func Offset: 0x3e8
	// Line 945, Address: 0x1a3004, Func Offset: 0x3f4
	// Func End, Address: 0x1a3020, Func Offset: 0x410
}

// 
// Start address: 0x1a3020
void sh2shd_renew_shadow_man(_anon6* cam, int glb_coord, int map_id)
{
	float dir[4];
	int count;
	int map_id;
	int glb_coord;
	float mat[4][4];
	float dir[4];
	float light_pos[4];
	int count;
	int weapon_flag;
	float height;
	float tmp_light_position[4];
	float virtual_light_position[4];
	float plane[4];
	float normal[4];
	float chara_pos[4];
	float chara_pos[4];
	float vec[4];
	float light_leng;
	int count;
	float spot_cam_angle;
	int spot_cam_flag;
	float normal[4];
	float height;
	float chara_pos[4];
	float virtual_spot_pos[4];
	float spot_cam_angle;
	float length_chara;
	float inverse_vector[4];
	float dis;
	int demo_no;
	SHADOW_ENV shadow_env;
	float cam_pos[4];
	float spot_cam_vector[4];
	float drop_shadow_matrix[4][4];
	float virtual_spot_c_back[4];
	int i;
	// Line 950, Address: 0x1a3020, Func Offset: 0
	// Line 967, Address: 0x1a3058, Func Offset: 0x38
	// Line 969, Address: 0x1a3064, Func Offset: 0x44
	// Line 972, Address: 0x1a3070, Func Offset: 0x50
	// Line 978, Address: 0x1a3080, Func Offset: 0x60
	// Line 981, Address: 0x1a309c, Func Offset: 0x7c
	// Line 982, Address: 0x1a30ac, Func Offset: 0x8c
	// Line 983, Address: 0x1a30b8, Func Offset: 0x98
	// Line 984, Address: 0x1a30d4, Func Offset: 0xb4
	// Line 996, Address: 0x1a3150, Func Offset: 0x130
	// Line 1001, Address: 0x1a31a0, Func Offset: 0x180
	// Line 1002, Address: 0x1a31d0, Func Offset: 0x1b0
	// Line 1014, Address: 0x1a31f0, Func Offset: 0x1d0
	// Line 1020, Address: 0x1a320c, Func Offset: 0x1ec
	// Line 1021, Address: 0x1a3224, Func Offset: 0x204
	// Line 1026, Address: 0x1a3250, Func Offset: 0x230
	// Line 1029, Address: 0x1a32e8, Func Offset: 0x2c8
	// Line 1031, Address: 0x1a3308, Func Offset: 0x2e8
	// Line 1035, Address: 0x1a3320, Func Offset: 0x300
	// Line 1047, Address: 0x1a3328, Func Offset: 0x308
	// Line 1053, Address: 0x1a3350, Func Offset: 0x330
	// Line 1054, Address: 0x1a336c, Func Offset: 0x34c
	// Line 1055, Address: 0x1a3390, Func Offset: 0x370
	// Line 1056, Address: 0x1a3394, Func Offset: 0x374
	// Line 1059, Address: 0x1a339c, Func Offset: 0x37c
	// Line 1064, Address: 0x1a33c0, Func Offset: 0x3a0
	// Line 1067, Address: 0x1a3404, Func Offset: 0x3e4
	// Line 1070, Address: 0x1a3440, Func Offset: 0x420
	// Line 1074, Address: 0x1a3488, Func Offset: 0x468
	// Line 1076, Address: 0x1a3494, Func Offset: 0x474
	// Line 1077, Address: 0x1a34a0, Func Offset: 0x480
	// Line 1078, Address: 0x1a34ac, Func Offset: 0x48c
	// Line 1086, Address: 0x1a34b8, Func Offset: 0x498
	// Line 1087, Address: 0x1a34c0, Func Offset: 0x4a0
	// Line 1088, Address: 0x1a34cc, Func Offset: 0x4ac
	// Line 1090, Address: 0x1a34d0, Func Offset: 0x4b0
	// Line 1093, Address: 0x1a34f8, Func Offset: 0x4d8
	// Line 1097, Address: 0x1a3510, Func Offset: 0x4f0
	// Line 1101, Address: 0x1a3520, Func Offset: 0x500
	// Line 1104, Address: 0x1a3524, Func Offset: 0x504
	// Line 1106, Address: 0x1a3530, Func Offset: 0x510
	// Line 1110, Address: 0x1a354c, Func Offset: 0x52c
	// Line 1111, Address: 0x1a3550, Func Offset: 0x530
	// Line 1116, Address: 0x1a3598, Func Offset: 0x578
	// Line 1117, Address: 0x1a35b0, Func Offset: 0x590
	// Line 1119, Address: 0x1a35bc, Func Offset: 0x59c
	// Line 1121, Address: 0x1a35c0, Func Offset: 0x5a0
	// Line 1125, Address: 0x1a35e0, Func Offset: 0x5c0
	// Line 1126, Address: 0x1a35e8, Func Offset: 0x5c8
	// Line 1129, Address: 0x1a3610, Func Offset: 0x5f0
	// Line 1139, Address: 0x1a3620, Func Offset: 0x600
	// Line 1141, Address: 0x1a363c, Func Offset: 0x61c
	// Line 1142, Address: 0x1a365c, Func Offset: 0x63c
	// Line 1145, Address: 0x1a3680, Func Offset: 0x660
	// Line 1146, Address: 0x1a3694, Func Offset: 0x674
	// Line 1151, Address: 0x1a3698, Func Offset: 0x678
	// Line 1168, Address: 0x1a36a8, Func Offset: 0x688
	// Line 1171, Address: 0x1a36c4, Func Offset: 0x6a4
	// Line 1172, Address: 0x1a36d4, Func Offset: 0x6b4
	// Line 1173, Address: 0x1a36e0, Func Offset: 0x6c0
	// Line 1174, Address: 0x1a36fc, Func Offset: 0x6dc
	// Line 1176, Address: 0x1a371c, Func Offset: 0x6fc
	// Line 1177, Address: 0x1a3724, Func Offset: 0x704
	// Line 1182, Address: 0x1a374c, Func Offset: 0x72c
	// Line 1185, Address: 0x1a3754, Func Offset: 0x734
	// Line 1189, Address: 0x1a3778, Func Offset: 0x758
	// Line 1196, Address: 0x1a3794, Func Offset: 0x774
	// Line 1197, Address: 0x1a37b0, Func Offset: 0x790
	// Line 1198, Address: 0x1a37cc, Func Offset: 0x7ac
	// Line 1199, Address: 0x1a37e8, Func Offset: 0x7c8
	// Line 1200, Address: 0x1a37f0, Func Offset: 0x7d0
	// Line 1201, Address: 0x1a381c, Func Offset: 0x7fc
	// Line 1202, Address: 0x1a3840, Func Offset: 0x820
	// Line 1204, Address: 0x1a385c, Func Offset: 0x83c
	// Line 1206, Address: 0x1a387c, Func Offset: 0x85c
	// Line 1207, Address: 0x1a3894, Func Offset: 0x874
	// Line 1209, Address: 0x1a3898, Func Offset: 0x878
	// Line 1211, Address: 0x1a38d0, Func Offset: 0x8b0
	// Line 1216, Address: 0x1a38e8, Func Offset: 0x8c8
	// Line 1226, Address: 0x1a38f8, Func Offset: 0x8d8
	// Line 1228, Address: 0x1a3904, Func Offset: 0x8e4
	// Line 1230, Address: 0x1a3920, Func Offset: 0x900
	// Line 1233, Address: 0x1a3984, Func Offset: 0x964
	// Line 1236, Address: 0x1a39c4, Func Offset: 0x9a4
	// Line 1238, Address: 0x1a39d8, Func Offset: 0x9b8
	// Line 1239, Address: 0x1a39dc, Func Offset: 0x9bc
	// Line 1240, Address: 0x1a39e4, Func Offset: 0x9c4
	// Line 1241, Address: 0x1a39e8, Func Offset: 0x9c8
	// Line 1243, Address: 0x1a39fc, Func Offset: 0x9dc
	// Line 1247, Address: 0x1a3a44, Func Offset: 0xa24
	// Line 1248, Address: 0x1a3a54, Func Offset: 0xa34
	// Line 1249, Address: 0x1a3a70, Func Offset: 0xa50
	// Line 1250, Address: 0x1a3a88, Func Offset: 0xa68
	// Line 1254, Address: 0x1a3aa8, Func Offset: 0xa88
	// Line 1258, Address: 0x1a3ac4, Func Offset: 0xaa4
	// Line 1261, Address: 0x1a3adc, Func Offset: 0xabc
	// Line 1263, Address: 0x1a3af8, Func Offset: 0xad8
	// Line 1266, Address: 0x1a3b00, Func Offset: 0xae0
	// Line 1268, Address: 0x1a3b18, Func Offset: 0xaf8
	// Line 1270, Address: 0x1a3b24, Func Offset: 0xb04
	// Line 1272, Address: 0x1a3b40, Func Offset: 0xb20
	// Line 1274, Address: 0x1a3b80, Func Offset: 0xb60
	// Line 1278, Address: 0x1a3bc0, Func Offset: 0xba0
	// Line 1280, Address: 0x1a3be0, Func Offset: 0xbc0
	// Line 1283, Address: 0x1a3be8, Func Offset: 0xbc8
	// Line 1289, Address: 0x1a3c00, Func Offset: 0xbe0
	// Line 1291, Address: 0x1a3c10, Func Offset: 0xbf0
	// Line 1298, Address: 0x1a3c14, Func Offset: 0xbf4
	// Line 1300, Address: 0x1a3c20, Func Offset: 0xc00
	// Line 1302, Address: 0x1a3c3c, Func Offset: 0xc1c
	// Line 1306, Address: 0x1a3c44, Func Offset: 0xc24
	// Line 1308, Address: 0x1a3c54, Func Offset: 0xc34
	// Line 1309, Address: 0x1a3c58, Func Offset: 0xc38
	// Line 1310, Address: 0x1a3c78, Func Offset: 0xc58
	// Line 1311, Address: 0x1a3c98, Func Offset: 0xc78
	// Line 1312, Address: 0x1a3ca4, Func Offset: 0xc84
	// Line 1314, Address: 0x1a3cd4, Func Offset: 0xcb4
	// Line 1317, Address: 0x1a3cf8, Func Offset: 0xcd8
	// Line 1320, Address: 0x1a3d34, Func Offset: 0xd14
	// Line 1321, Address: 0x1a3d60, Func Offset: 0xd40
	// Line 1324, Address: 0x1a3d74, Func Offset: 0xd54
	// Line 1327, Address: 0x1a3d90, Func Offset: 0xd70
	// Line 1329, Address: 0x1a3db0, Func Offset: 0xd90
	// Line 1330, Address: 0x1a3dd0, Func Offset: 0xdb0
	// Line 1332, Address: 0x1a3e00, Func Offset: 0xde0
	// Line 1333, Address: 0x1a3e14, Func Offset: 0xdf4
	// Line 1336, Address: 0x1a3e18, Func Offset: 0xdf8
	// Line 1338, Address: 0x1a3e28, Func Offset: 0xe08
	// Line 1340, Address: 0x1a3e2c, Func Offset: 0xe0c
	// Line 1342, Address: 0x1a3e38, Func Offset: 0xe18
	// Line 1345, Address: 0x1a3e74, Func Offset: 0xe54
	// Line 1350, Address: 0x1a3e7c, Func Offset: 0xe5c
	// Line 1352, Address: 0x1a3e80, Func Offset: 0xe60
	// Line 1353, Address: 0x1a3e9c, Func Offset: 0xe7c
	// Line 1356, Address: 0x1a3ebc, Func Offset: 0xe9c
	// Line 1357, Address: 0x1a3ef4, Func Offset: 0xed4
	// Line 1361, Address: 0x1a3f44, Func Offset: 0xf24
	// Line 1375, Address: 0x1a3f6c, Func Offset: 0xf4c
	// Line 1377, Address: 0x1a3f88, Func Offset: 0xf68
	// Line 1378, Address: 0x1a3fac, Func Offset: 0xf8c
	// Line 1379, Address: 0x1a3fd0, Func Offset: 0xfb0
	// Line 1382, Address: 0x1a4000, Func Offset: 0xfe0
	// Line 1383, Address: 0x1a4014, Func Offset: 0xff4
	// Line 1388, Address: 0x1a4018, Func Offset: 0xff8
	// Func End, Address: 0x1a404c, Func Offset: 0x102c
}

// 
// Start address: 0x1a4050
void make_chara_reftag_pool_and_kick_packet_for_spot()
{
	int i;
	// Line 1396, Address: 0x1a4050, Func Offset: 0
	// Line 1399, Address: 0x1a4060, Func Offset: 0x10
	// Line 1401, Address: 0x1a4070, Func Offset: 0x20
	// Line 1403, Address: 0x1a407c, Func Offset: 0x2c
	// Line 1405, Address: 0x1a4098, Func Offset: 0x48
	// Line 1407, Address: 0x1a40b4, Func Offset: 0x64
	// Line 1409, Address: 0x1a40c8, Func Offset: 0x78
	// Line 1417, Address: 0x1a40f0, Func Offset: 0xa0
	// Line 1419, Address: 0x1a4100, Func Offset: 0xb0
	// Line 1423, Address: 0x1a4108, Func Offset: 0xb8
	// Line 1428, Address: 0x1a411c, Func Offset: 0xcc
	// Line 1431, Address: 0x1a4130, Func Offset: 0xe0
	// Line 1433, Address: 0x1a4144, Func Offset: 0xf4
	// Line 1435, Address: 0x1a414c, Func Offset: 0xfc
	// Line 1437, Address: 0x1a4178, Func Offset: 0x128
	// Line 1439, Address: 0x1a418c, Func Offset: 0x13c
	// Line 1442, Address: 0x1a41b0, Func Offset: 0x160
	// Line 1445, Address: 0x1a41c4, Func Offset: 0x174
	// Line 1449, Address: 0x1a41d8, Func Offset: 0x188
	// Line 1452, Address: 0x1a41e0, Func Offset: 0x190
	// Line 1455, Address: 0x1a41ec, Func Offset: 0x19c
	// Line 1456, Address: 0x1a41f8, Func Offset: 0x1a8
	// Line 1459, Address: 0x1a4214, Func Offset: 0x1c4
	// Line 1463, Address: 0x1a4228, Func Offset: 0x1d8
	// Line 1466, Address: 0x1a423c, Func Offset: 0x1ec
	// Line 1467, Address: 0x1a4240, Func Offset: 0x1f0
	// Line 1468, Address: 0x1a4254, Func Offset: 0x204
	// Line 1469, Address: 0x1a4258, Func Offset: 0x208
	// Func End, Address: 0x1a4270, Func Offset: 0x220
}

// 
// Start address: 0x1a4270
void make_bg_reftag_pool_and_kick_packet_for_spot(float spot_cam_angle)
{
	int i;
	// Line 1475, Address: 0x1a4270, Func Offset: 0
	// Line 1478, Address: 0x1a4288, Func Offset: 0x18
	// Line 1480, Address: 0x1a4294, Func Offset: 0x24
	// Line 1481, Address: 0x1a42b0, Func Offset: 0x40
	// Line 1484, Address: 0x1a42bc, Func Offset: 0x4c
	// Line 1488, Address: 0x1a42d0, Func Offset: 0x60
	// Line 1490, Address: 0x1a42e4, Func Offset: 0x74
	// Line 1491, Address: 0x1a42e8, Func Offset: 0x78
	// Line 1492, Address: 0x1a42fc, Func Offset: 0x8c
	// Func End, Address: 0x1a4318, Func Offset: 0xa8
}

// 
// Start address: 0x1a4320
void make_chara_reftag_pool_and_kick_packet_for_point()
{
	int i;
	// Line 1498, Address: 0x1a4320, Func Offset: 0
	// Line 1501, Address: 0x1a4330, Func Offset: 0x10
	// Line 1503, Address: 0x1a4340, Func Offset: 0x20
	// Line 1505, Address: 0x1a434c, Func Offset: 0x2c
	// Line 1507, Address: 0x1a4368, Func Offset: 0x48
	// Line 1510, Address: 0x1a4378, Func Offset: 0x58
	// Line 1511, Address: 0x1a4394, Func Offset: 0x74
	// Line 1512, Address: 0x1a43a4, Func Offset: 0x84
	// Line 1515, Address: 0x1a43a8, Func Offset: 0x88
	// Line 1519, Address: 0x1a43bc, Func Offset: 0x9c
	// Line 1523, Address: 0x1a43d0, Func Offset: 0xb0
	// Line 1524, Address: 0x1a43e4, Func Offset: 0xc4
	// Line 1525, Address: 0x1a43e8, Func Offset: 0xc8
	// Func End, Address: 0x1a4400, Func Offset: 0xe0
}

// 
// Start address: 0x1a4400
void make_chara_reftag_pool_and_kick_packet_for_self()
{
	int i;
	// Line 1560, Address: 0x1a4400, Func Offset: 0
	// Line 1563, Address: 0x1a4410, Func Offset: 0x10
	// Line 1565, Address: 0x1a4420, Func Offset: 0x20
	// Line 1568, Address: 0x1a442c, Func Offset: 0x2c
	// Line 1574, Address: 0x1a4448, Func Offset: 0x48
	// Line 1576, Address: 0x1a4464, Func Offset: 0x64
	// Line 1584, Address: 0x1a4494, Func Offset: 0x94
	// Line 1586, Address: 0x1a44a0, Func Offset: 0xa0
	// Line 1590, Address: 0x1a44a8, Func Offset: 0xa8
	// Line 1593, Address: 0x1a44b4, Func Offset: 0xb4
	// Line 1590, Address: 0x1a44b8, Func Offset: 0xb8
	// Line 1596, Address: 0x1a44bc, Func Offset: 0xbc
	// Line 1599, Address: 0x1a44d0, Func Offset: 0xd0
	// Line 1600, Address: 0x1a44e4, Func Offset: 0xe4
	// Line 1602, Address: 0x1a44ec, Func Offset: 0xec
	// Line 1605, Address: 0x1a4518, Func Offset: 0x118
	// Line 1609, Address: 0x1a4530, Func Offset: 0x130
	// Line 1612, Address: 0x1a4548, Func Offset: 0x148
	// Line 1616, Address: 0x1a455c, Func Offset: 0x15c
	// Line 1617, Address: 0x1a4560, Func Offset: 0x160
	// Line 1618, Address: 0x1a4574, Func Offset: 0x174
	// Line 1619, Address: 0x1a4578, Func Offset: 0x178
	// Func End, Address: 0x1a4590, Func Offset: 0x190
}

// 
// Start address: 0x1a4590
void make_chara_reftag_pool_and_kick_packet_for_parallel()
{
	int i;
	// Line 1626, Address: 0x1a4590, Func Offset: 0
	// Line 1629, Address: 0x1a45a0, Func Offset: 0x10
	// Line 1631, Address: 0x1a45b0, Func Offset: 0x20
	// Line 1634, Address: 0x1a45bc, Func Offset: 0x2c
	// Line 1637, Address: 0x1a45d8, Func Offset: 0x48
	// Line 1638, Address: 0x1a45f4, Func Offset: 0x64
	// Line 1639, Address: 0x1a4604, Func Offset: 0x74
	// Line 1641, Address: 0x1a4608, Func Offset: 0x78
	// Line 1644, Address: 0x1a4618, Func Offset: 0x88
	// Line 1647, Address: 0x1a462c, Func Offset: 0x9c
	// Line 1668, Address: 0x1a4640, Func Offset: 0xb0
	// Line 1669, Address: 0x1a4654, Func Offset: 0xc4
	// Line 1670, Address: 0x1a4658, Func Offset: 0xc8
	// Func End, Address: 0x1a4670, Func Offset: 0xe0
}

// 
// Start address: 0x1a4670
void make_bg_reftag_pool_and_kick_packet_for_parallel()
{
	int i;
	// Line 1676, Address: 0x1a4670, Func Offset: 0
	// Line 1679, Address: 0x1a4680, Func Offset: 0x10
	// Line 1681, Address: 0x1a468c, Func Offset: 0x1c
	// Line 1682, Address: 0x1a46a8, Func Offset: 0x38
	// Line 1685, Address: 0x1a46b8, Func Offset: 0x48
	// Line 1688, Address: 0x1a46c8, Func Offset: 0x58
	// Line 1689, Address: 0x1a46dc, Func Offset: 0x6c
	// Line 1690, Address: 0x1a46e0, Func Offset: 0x70
	// Line 1691, Address: 0x1a46f4, Func Offset: 0x84
	// Func End, Address: 0x1a470c, Func Offset: 0x9c
}

// 
// Start address: 0x1a4710
float get_spot_camera_angle(float* cam_pos, float* light_pos, float* light_dir)
{
	float inner_product;
	float spot_cam_dir[4];
	// Line 1699, Address: 0x1a4710, Func Offset: 0
	// Line 1704, Address: 0x1a4714, Func Offset: 0x4
	// Line 1706, Address: 0x1a4728, Func Offset: 0x18
	// Line 1707, Address: 0x1a472c, Func Offset: 0x1c
	// Line 1708, Address: 0x1a4730, Func Offset: 0x20
	// Line 1711, Address: 0x1a4750, Func Offset: 0x40
	// Line 1714, Address: 0x1a4774, Func Offset: 0x64
	// Func End, Address: 0x1a4780, Func Offset: 0x70
}

// 
// Start address: 0x1a4780
float get_distance_from_light_to_chara(SHADOW_CHAR_MAN* man, float* iv)
{
	float chara_pos[4];
	float distance;
	// Line 1736, Address: 0x1a4780, Func Offset: 0
	// Line 1742, Address: 0x1a4798, Func Offset: 0x18
	// Line 1745, Address: 0x1a47b0, Func Offset: 0x30
	// Line 1746, Address: 0x1a47c8, Func Offset: 0x48
	// Line 1747, Address: 0x1a47d0, Func Offset: 0x50
	// Line 1748, Address: 0x1a47f8, Func Offset: 0x78
	// Line 1751, Address: 0x1a4804, Func Offset: 0x84
	// Line 1753, Address: 0x1a4820, Func Offset: 0xa0
	// Line 1754, Address: 0x1a4840, Func Offset: 0xc0
	// Line 1755, Address: 0x1a485c, Func Offset: 0xdc
	// Line 1758, Address: 0x1a4864, Func Offset: 0xe4
	// Line 1761, Address: 0x1a4870, Func Offset: 0xf0
	// Line 1762, Address: 0x1a4874, Func Offset: 0xf4
	// Func End, Address: 0x1a488c, Func Offset: 0x10c
}

// 
// Start address: 0x1a4890
Q_WORDDATA* sh2shd_exe_drop_shadow(_anon6* cam)
{
	Q_WORDDATA alpha_reg;
	int map_id;
	int glb_coord;
	DROP_SHADOW_ENV ds_env;
	int demo_no;
	Q_WORDDATA test_reg;
	SPOT_LIGHT spot;
	int i;
	// Line 1772, Address: 0x1a4890, Func Offset: 0
	// Line 1785, Address: 0x1a48a4, Func Offset: 0x14
	// Line 1786, Address: 0x1a48b4, Func Offset: 0x24
	// Line 1788, Address: 0x1a48c0, Func Offset: 0x30
	// Line 1790, Address: 0x1a48c8, Func Offset: 0x38
	// Line 1791, Address: 0x1a48d0, Func Offset: 0x40
	// Line 1802, Address: 0x1a48e8, Func Offset: 0x58
	// Line 1803, Address: 0x1a48f8, Func Offset: 0x68
	// Line 1816, Address: 0x1a491c, Func Offset: 0x8c
	// Line 1820, Address: 0x1a4930, Func Offset: 0xa0
	// Line 1823, Address: 0x1a4940, Func Offset: 0xb0
	// Line 1824, Address: 0x1a4950, Func Offset: 0xc0
	// Line 1832, Address: 0x1a4960, Func Offset: 0xd0
	// Line 1837, Address: 0x1a497c, Func Offset: 0xec
	// Line 1838, Address: 0x1a49c0, Func Offset: 0x130
	// Line 1839, Address: 0x1a49d4, Func Offset: 0x144
	// Line 1840, Address: 0x1a49ec, Func Offset: 0x15c
	// Line 1841, Address: 0x1a4a00, Func Offset: 0x170
	// Line 1842, Address: 0x1a4a18, Func Offset: 0x188
	// Line 1844, Address: 0x1a4a2c, Func Offset: 0x19c
	// Line 1845, Address: 0x1a4a44, Func Offset: 0x1b4
	// Line 1846, Address: 0x1a4a58, Func Offset: 0x1c8
	// Line 1847, Address: 0x1a4a70, Func Offset: 0x1e0
	// Line 1850, Address: 0x1a4a84, Func Offset: 0x1f4
	// Line 1851, Address: 0x1a4a9c, Func Offset: 0x20c
	// Line 1853, Address: 0x1a4ab0, Func Offset: 0x220
	// Line 1854, Address: 0x1a4ac8, Func Offset: 0x238
	// Line 1858, Address: 0x1a4adc, Func Offset: 0x24c
	// Line 1859, Address: 0x1a4af0, Func Offset: 0x260
	// Line 1860, Address: 0x1a4b08, Func Offset: 0x278
	// Line 1861, Address: 0x1a4b1c, Func Offset: 0x28c
	// Line 1862, Address: 0x1a4b30, Func Offset: 0x2a0
	// Line 1881, Address: 0x1a4b44, Func Offset: 0x2b4
	// Line 1888, Address: 0x1a4b64, Func Offset: 0x2d4
	// Line 1890, Address: 0x1a4b74, Func Offset: 0x2e4
	// Line 1892, Address: 0x1a4b80, Func Offset: 0x2f0
	// Line 1894, Address: 0x1a4b9c, Func Offset: 0x30c
	// Line 1895, Address: 0x1a4bbc, Func Offset: 0x32c
	// Line 1898, Address: 0x1a4bf8, Func Offset: 0x368
	// Line 1901, Address: 0x1a4c30, Func Offset: 0x3a0
	// Line 1902, Address: 0x1a4c44, Func Offset: 0x3b4
	// Line 1906, Address: 0x1a4c48, Func Offset: 0x3b8
	// Line 1908, Address: 0x1a4c58, Func Offset: 0x3c8
	// Line 1910, Address: 0x1a4c64, Func Offset: 0x3d4
	// Line 1911, Address: 0x1a4c80, Func Offset: 0x3f0
	// Line 1912, Address: 0x1a4ca0, Func Offset: 0x410
	// Line 1913, Address: 0x1a4cb4, Func Offset: 0x424
	// Line 1917, Address: 0x1a4cb8, Func Offset: 0x428
	// Line 1918, Address: 0x1a4cfc, Func Offset: 0x46c
	// Line 1920, Address: 0x1a4d10, Func Offset: 0x480
	// Line 1921, Address: 0x1a4d28, Func Offset: 0x498
	// Line 1922, Address: 0x1a4d3c, Func Offset: 0x4ac
	// Line 1923, Address: 0x1a4d54, Func Offset: 0x4c4
	// Line 1926, Address: 0x1a4d68, Func Offset: 0x4d8
	// Line 1927, Address: 0x1a4d80, Func Offset: 0x4f0
	// Line 1929, Address: 0x1a4d94, Func Offset: 0x504
	// Line 1930, Address: 0x1a4dac, Func Offset: 0x51c
	// Line 1933, Address: 0x1a4dc0, Func Offset: 0x530
	// Line 1934, Address: 0x1a4dd4, Func Offset: 0x544
	// Line 1935, Address: 0x1a4dec, Func Offset: 0x55c
	// Line 1936, Address: 0x1a4e00, Func Offset: 0x570
	// Line 1937, Address: 0x1a4e14, Func Offset: 0x584
	// Line 1939, Address: 0x1a4e28, Func Offset: 0x598
	// Line 1940, Address: 0x1a4e50, Func Offset: 0x5c0
	// Line 1943, Address: 0x1a4e64, Func Offset: 0x5d4
	// Line 1955, Address: 0x1a4e6c, Func Offset: 0x5dc
	// Line 1961, Address: 0x1a4e84, Func Offset: 0x5f4
	// Line 1962, Address: 0x1a4e90, Func Offset: 0x600
	// Func End, Address: 0x1a4ea8, Func Offset: 0x618
}

// 
// Start address: 0x1a4eb0
void sh2shd_renew_drop_shadow_man(SPOT_LIGHT* spot, _anon6* cam, int glb_coord, int map_id)
{
	float mat[4][4];
	float jms_alpha_decay;
	float jms_drop_shadow_matrix[4][4];
	float jms_plane[4];
	float jms_light_pos[4];
	int demo_no;
	float alpha_decay;
	float distance;
	float height;
	float cam_pos[4];
	float normal[4];
	float chara_pos[4];
	float plane[4];
	float light_pos[4];
	int i;
	// Line 1966, Address: 0x1a4eb0, Func Offset: 0
	// Line 1970, Address: 0x1a4ee0, Func Offset: 0x30
	// Line 1984, Address: 0x1a4ef4, Func Offset: 0x44
	// Line 1987, Address: 0x1a4f00, Func Offset: 0x50
	// Line 1989, Address: 0x1a4f14, Func Offset: 0x64
	// Line 1991, Address: 0x1a4f24, Func Offset: 0x74
	// Line 1993, Address: 0x1a4f30, Func Offset: 0x80
	// Line 2001, Address: 0x1a4f90, Func Offset: 0xe0
	// Line 2006, Address: 0x1a4fd0, Func Offset: 0x120
	// Line 2008, Address: 0x1a4fe8, Func Offset: 0x138
	// Line 2012, Address: 0x1a5000, Func Offset: 0x150
	// Line 2016, Address: 0x1a5024, Func Offset: 0x174
	// Line 2017, Address: 0x1a5030, Func Offset: 0x180
	// Line 2022, Address: 0x1a5038, Func Offset: 0x188
	// Line 2027, Address: 0x1a5058, Func Offset: 0x1a8
	// Line 2028, Address: 0x1a5064, Func Offset: 0x1b4
	// Line 2029, Address: 0x1a5068, Func Offset: 0x1b8
	// Line 2030, Address: 0x1a5070, Func Offset: 0x1c0
	// Line 2031, Address: 0x1a5074, Func Offset: 0x1c4
	// Line 2032, Address: 0x1a507c, Func Offset: 0x1cc
	// Line 2034, Address: 0x1a50ac, Func Offset: 0x1fc
	// Line 2035, Address: 0x1a50b8, Func Offset: 0x208
	// Line 2036, Address: 0x1a50c0, Func Offset: 0x210
	// Line 2038, Address: 0x1a50cc, Func Offset: 0x21c
	// Line 2041, Address: 0x1a5108, Func Offset: 0x258
	// Line 2043, Address: 0x1a512c, Func Offset: 0x27c
	// Line 2044, Address: 0x1a5140, Func Offset: 0x290
	// Line 2045, Address: 0x1a5154, Func Offset: 0x2a4
	// Line 2051, Address: 0x1a5158, Func Offset: 0x2a8
	// Line 2052, Address: 0x1a516c, Func Offset: 0x2bc
	// Line 2053, Address: 0x1a5178, Func Offset: 0x2c8
	// Line 2055, Address: 0x1a5194, Func Offset: 0x2e4
	// Line 2056, Address: 0x1a51b0, Func Offset: 0x300
	// Line 2059, Address: 0x1a51bc, Func Offset: 0x30c
	// Line 2061, Address: 0x1a51dc, Func Offset: 0x32c
	// Line 2062, Address: 0x1a5218, Func Offset: 0x368
	// Line 2063, Address: 0x1a5230, Func Offset: 0x380
	// Line 2064, Address: 0x1a5234, Func Offset: 0x384
	// Line 2065, Address: 0x1a523c, Func Offset: 0x38c
	// Line 2067, Address: 0x1a5258, Func Offset: 0x3a8
	// Line 2068, Address: 0x1a527c, Func Offset: 0x3cc
	// Line 2069, Address: 0x1a529c, Func Offset: 0x3ec
	// Line 2070, Address: 0x1a52a0, Func Offset: 0x3f0
	// Line 2072, Address: 0x1a52a8, Func Offset: 0x3f8
	// Line 2080, Address: 0x1a52b0, Func Offset: 0x400
	// Line 2081, Address: 0x1a52d0, Func Offset: 0x420
	// Line 2090, Address: 0x1a52d8, Func Offset: 0x428
	// Line 2092, Address: 0x1a530c, Func Offset: 0x45c
	// Line 2095, Address: 0x1a5330, Func Offset: 0x480
	// Line 2097, Address: 0x1a5374, Func Offset: 0x4c4
	// Line 2098, Address: 0x1a53a8, Func Offset: 0x4f8
	// Line 2099, Address: 0x1a53b8, Func Offset: 0x508
	// Line 2102, Address: 0x1a53c8, Func Offset: 0x518
	// Line 2104, Address: 0x1a53dc, Func Offset: 0x52c
	// Line 2106, Address: 0x1a53e8, Func Offset: 0x538
	// Line 2110, Address: 0x1a5444, Func Offset: 0x594
	// Line 2111, Address: 0x1a5478, Func Offset: 0x5c8
	// Line 2114, Address: 0x1a5498, Func Offset: 0x5e8
	// Line 2115, Address: 0x1a54ac, Func Offset: 0x5fc
	// Line 2122, Address: 0x1a54b0, Func Offset: 0x600
	// Func End, Address: 0x1a54d8, Func Offset: 0x628
}

// 
// Start address: 0x1a54e0
void sh2shd_make_stencil_drop_shadow_plane(float* plane, float* pos, float* normal)
{
	float norm[4];
	float d;
	// Line 2131, Address: 0x1a54e0, Func Offset: 0
	// Line 2135, Address: 0x1a54f4, Func Offset: 0x14
	// Line 2137, Address: 0x1a5518, Func Offset: 0x38
	// Line 2138, Address: 0x1a5558, Func Offset: 0x78
	// Line 2140, Address: 0x1a5560, Func Offset: 0x80
	// Line 2141, Address: 0x1a55a0, Func Offset: 0xc0
	// Line 2143, Address: 0x1a55a8, Func Offset: 0xc8
	// Line 2145, Address: 0x1a55d0, Func Offset: 0xf0
	// Line 2147, Address: 0x1a55f4, Func Offset: 0x114
	// Line 2148, Address: 0x1a5604, Func Offset: 0x124
	// Line 2149, Address: 0x1a5610, Func Offset: 0x130
	// Line 2150, Address: 0x1a5624, Func Offset: 0x144
	// Line 2153, Address: 0x1a562c, Func Offset: 0x14c
	// Line 2154, Address: 0x1a5630, Func Offset: 0x150
	// Line 2156, Address: 0x1a5638, Func Offset: 0x158
	// Line 2158, Address: 0x1a563c, Func Offset: 0x15c
	// Func End, Address: 0x1a5654, Func Offset: 0x174
}

// 
// Start address: 0x1a5660
void sh2shd_make_drop_shadow_plane(float* plane, float* pos, float* normal)
{
	float norm[4];
	float d;
	// Line 2167, Address: 0x1a5660, Func Offset: 0
	// Line 2171, Address: 0x1a5674, Func Offset: 0x14
	// Line 2173, Address: 0x1a5698, Func Offset: 0x38
	// Line 2174, Address: 0x1a56d8, Func Offset: 0x78
	// Line 2176, Address: 0x1a56e0, Func Offset: 0x80
	// Line 2177, Address: 0x1a5720, Func Offset: 0xc0
	// Line 2179, Address: 0x1a5728, Func Offset: 0xc8
	// Line 2181, Address: 0x1a5750, Func Offset: 0xf0
	// Line 2183, Address: 0x1a5774, Func Offset: 0x114
	// Line 2184, Address: 0x1a5784, Func Offset: 0x124
	// Line 2185, Address: 0x1a5790, Func Offset: 0x130
	// Line 2186, Address: 0x1a57a4, Func Offset: 0x144
	// Line 2189, Address: 0x1a57ac, Func Offset: 0x14c
	// Line 2190, Address: 0x1a57b0, Func Offset: 0x150
	// Line 2192, Address: 0x1a57b8, Func Offset: 0x158
	// Line 2220, Address: 0x1a57bc, Func Offset: 0x15c
	// Func End, Address: 0x1a57d4, Func Offset: 0x174
}

// 
// Start address: 0x1a57e0
void sh2shd_reset_shadow_off_work()
{
	int i;
	// Line 2247, Address: 0x1a57e0, Func Offset: 0
	// Line 2251, Address: 0x1a57ec, Func Offset: 0xc
	// Line 2252, Address: 0x1a5808, Func Offset: 0x28
	// Line 2257, Address: 0x1a581c, Func Offset: 0x3c
	// Line 2258, Address: 0x1a582c, Func Offset: 0x4c
	// Line 2262, Address: 0x1a583c, Func Offset: 0x5c
	// Line 2266, Address: 0x1a5848, Func Offset: 0x68
	// Line 2271, Address: 0x1a5868, Func Offset: 0x88
	// Line 2272, Address: 0x1a5878, Func Offset: 0x98
	// Line 2273, Address: 0x1a588c, Func Offset: 0xac
	// Func End, Address: 0x1a5894, Func Offset: 0xb4
}

// 
// Start address: 0x1a58a0
int sh2shd_add_map_to_shadow_off_work(short map_id)
{
	int i;
	// Line 2284, Address: 0x1a58a0, Func Offset: 0
	// Line 2287, Address: 0x1a58ac, Func Offset: 0xc
	// Line 2288, Address: 0x1a58d8, Func Offset: 0x38
	// Line 2291, Address: 0x1a58e4, Func Offset: 0x44
	// Line 2293, Address: 0x1a58f0, Func Offset: 0x50
	// Line 2295, Address: 0x1a5908, Func Offset: 0x68
	// Line 2296, Address: 0x1a5914, Func Offset: 0x74
	// Line 2298, Address: 0x1a5920, Func Offset: 0x80
	// Line 2299, Address: 0x1a593c, Func Offset: 0x9c
	// Line 2301, Address: 0x1a5950, Func Offset: 0xb0
	// Line 2302, Address: 0x1a5954, Func Offset: 0xb4
	// Func End, Address: 0x1a595c, Func Offset: 0xbc
}

// 
// Start address: 0x1a5960
int sh2shd_off_obj(short map_id, short obj_id)
{
	int j;
	int i;
	// Line 2332, Address: 0x1a5960, Func Offset: 0
	// Line 2336, Address: 0x1a5968, Func Offset: 0x8
	// Line 2338, Address: 0x1a5974, Func Offset: 0x14
	// Line 2340, Address: 0x1a59a0, Func Offset: 0x40
	// Line 2343, Address: 0x1a59b8, Func Offset: 0x58
	// Line 2345, Address: 0x1a59ec, Func Offset: 0x8c
	// Line 2348, Address: 0x1a59f8, Func Offset: 0x98
	// Line 2349, Address: 0x1a5a2c, Func Offset: 0xcc
	// Line 2352, Address: 0x1a5a38, Func Offset: 0xd8
	// Line 2354, Address: 0x1a5a44, Func Offset: 0xe4
	// Line 2357, Address: 0x1a5a58, Func Offset: 0xf8
	// Line 2359, Address: 0x1a5a8c, Func Offset: 0x12c
	// Line 2362, Address: 0x1a5ab0, Func Offset: 0x150
	// Line 2363, Address: 0x1a5abc, Func Offset: 0x15c
	// Line 2365, Address: 0x1a5ad4, Func Offset: 0x174
	// Line 2366, Address: 0x1a5ad8, Func Offset: 0x178
	// Func End, Address: 0x1a5ae8, Func Offset: 0x188
}

// 
// Start address: 0x1a5af0
int sh2shd_add_char_to_shadow_off_work(unsigned short kind, short id)
{
	int i;
	// Line 2422, Address: 0x1a5af0, Func Offset: 0
	// Line 2424, Address: 0x1a5afc, Func Offset: 0xc
	// Line 2426, Address: 0x1a5b3c, Func Offset: 0x4c
	// Line 2428, Address: 0x1a5b50, Func Offset: 0x60
	// Line 2429, Address: 0x1a5b5c, Func Offset: 0x6c
	// Line 2431, Address: 0x1a5b68, Func Offset: 0x78
	// Line 2432, Address: 0x1a5b84, Func Offset: 0x94
	// Line 2433, Address: 0x1a5b94, Func Offset: 0xa4
	// Line 2435, Address: 0x1a5ba8, Func Offset: 0xb8
	// Line 2436, Address: 0x1a5bac, Func Offset: 0xbc
	// Func End, Address: 0x1a5bb4, Func Offset: 0xc4
}

// 
// Start address: 0x1a5bc0
int sh2shd_off_char_obj(unsigned short kind, short id, short obj_id)
{
	int j;
	int i;
	// Line 2447, Address: 0x1a5bc0, Func Offset: 0
	// Line 2448, Address: 0x1a5bcc, Func Offset: 0xc
	// Line 2449, Address: 0x1a5c14, Func Offset: 0x54
	// Line 2451, Address: 0x1a5c30, Func Offset: 0x70
	// Line 2452, Address: 0x1a5c3c, Func Offset: 0x7c
	// Line 2455, Address: 0x1a5c48, Func Offset: 0x88
	// Line 2458, Address: 0x1a5c54, Func Offset: 0x94
	// Line 2460, Address: 0x1a5c84, Func Offset: 0xc4
	// Line 2462, Address: 0x1a5c98, Func Offset: 0xd8
	// Line 2463, Address: 0x1a5ca4, Func Offset: 0xe4
	// Line 2466, Address: 0x1a5cb0, Func Offset: 0xf0
	// Line 2468, Address: 0x1a5cd4, Func Offset: 0x114
	// Line 2469, Address: 0x1a5ce0, Func Offset: 0x120
	// Line 2473, Address: 0x1a5cf8, Func Offset: 0x138
	// Line 2474, Address: 0x1a5cfc, Func Offset: 0x13c
	// Func End, Address: 0x1a5d04, Func Offset: 0x144
}

// 
// Start address: 0x1a5d10
int sh2shd_off_char_all_parts(unsigned short kind, short id)
{
	int i;
	// Line 2485, Address: 0x1a5d10, Func Offset: 0
	// Line 2486, Address: 0x1a5d1c, Func Offset: 0xc
	// Line 2487, Address: 0x1a5d64, Func Offset: 0x54
	// Line 2489, Address: 0x1a5d80, Func Offset: 0x70
	// Line 2490, Address: 0x1a5d8c, Func Offset: 0x7c
	// Line 2493, Address: 0x1a5d98, Func Offset: 0x88
	// Line 2494, Address: 0x1a5db8, Func Offset: 0xa8
	// Line 2497, Address: 0x1a5dcc, Func Offset: 0xbc
	// Line 2498, Address: 0x1a5dd0, Func Offset: 0xc0
	// Func End, Address: 0x1a5dd8, Func Offset: 0xc8
}

// 
// Start address: 0x1a5de0
void sh2shd_bg_shadow_off()
{
	// Line 2513, Address: 0x1a5de0, Func Offset: 0
	// Line 2514, Address: 0x1a5de8, Func Offset: 0x8
	// Func End, Address: 0x1a5df0, Func Offset: 0x10
}

// 
// Start address: 0x1a5df0
int check_self_spot(unsigned short kind)
{
	// Line 2518, Address: 0x1a5df0, Func Offset: 0
	// Line 2519, Address: 0x1a5e0c, Func Offset: 0x1c
	// Line 2521, Address: 0x1a5e18, Func Offset: 0x28
	// Line 2522, Address: 0x1a5e1c, Func Offset: 0x2c
	// Func End, Address: 0x1a5e24, Func Offset: 0x34
}

// 
// Start address: 0x1a5e30
int check_self_para(unsigned short kind)
{
	// Line 2527, Address: 0x1a5e30, Func Offset: 0
	// Line 2528, Address: 0x1a5e48, Func Offset: 0x18
	// Line 2530, Address: 0x1a5e54, Func Offset: 0x24
	// Line 2531, Address: 0x1a5e58, Func Offset: 0x28
	// Func End, Address: 0x1a5e60, Func Offset: 0x30
}

// 
// Start address: 0x1a5e60
void sh2shd_del_jms_upper_body(unsigned short kind, short id)
{
	// Line 2536, Address: 0x1a5e60, Func Offset: 0
	// Line 2537, Address: 0x1a5e78, Func Offset: 0x18
	// Line 2539, Address: 0x1a5e80, Func Offset: 0x20
	// Line 2540, Address: 0x1a5e94, Func Offset: 0x34
	// Line 2541, Address: 0x1a5ea8, Func Offset: 0x48
	// Line 2542, Address: 0x1a5ebc, Func Offset: 0x5c
	// Line 2543, Address: 0x1a5ed0, Func Offset: 0x70
	// Line 2544, Address: 0x1a5ee4, Func Offset: 0x84
	// Line 2545, Address: 0x1a5ef8, Func Offset: 0x98
	// Line 2546, Address: 0x1a5f0c, Func Offset: 0xac
	// Line 2547, Address: 0x1a5f20, Func Offset: 0xc0
	// Line 2548, Address: 0x1a5f34, Func Offset: 0xd4
	// Line 2549, Address: 0x1a5f48, Func Offset: 0xe8
	// Func End, Address: 0x1a5f60, Func Offset: 0x100
}

// 
// Start address: 0x1a5f60
void sh2shd_del_jms_head(unsigned short kind, short id)
{
	// Line 2554, Address: 0x1a5f60, Func Offset: 0
	// Line 2555, Address: 0x1a5f78, Func Offset: 0x18
	// Line 2557, Address: 0x1a5f80, Func Offset: 0x20
	// Line 2558, Address: 0x1a5f94, Func Offset: 0x34
	// Line 2559, Address: 0x1a5fa8, Func Offset: 0x48
	// Func End, Address: 0x1a5fc0, Func Offset: 0x60
}

