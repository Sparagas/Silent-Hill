typedef struct _CL_HITPOLY_HEAD;
typedef struct SubCharacter;
typedef struct _anon0;
typedef struct shAttackInfo;
typedef struct Pad_KeyConfig;
typedef union _anon1;
typedef struct _anon2;
typedef struct _CL_VHIT_CHARA;
typedef struct _anon3;
typedef union fsFileIndex;
typedef struct Event_CamSetData;
typedef struct _anon4;
typedef union fsFile;
typedef struct _CL_VHIT_RESULT;
typedef union _anon5;
typedef struct shGsStencilDrawEnv;
typedef struct _anon6;
typedef struct Event_List;
typedef struct _anon7;
typedef struct _anon8;
typedef struct Item_List;
typedef struct shSkelton;
typedef struct _anon9;
typedef struct _anon10;
typedef struct _anon11;
typedef struct shGsLoopEnv;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct _anon12;
typedef struct _anon13;
typedef struct Model_List;
typedef struct DramaDemo_MessageTime;
typedef struct _SH2_SYS;
typedef struct _anon14;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct sh2gfw_AREA_HEAD;
typedef struct _anon15;
typedef struct shGsTinyDrawEnv;
typedef union Q_WORDDATA;
typedef struct Enemy_List;
typedef struct _AnimeInfo;
typedef struct PAD_3D;
typedef struct _anon16;
typedef struct _anon17;
typedef struct _anon18;
typedef struct fsCdFile;
typedef struct shGsAllEnv;
typedef struct PAD_2D;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct PAD_INFO;
typedef struct fsMgcFile;
typedef struct shBattleFight;
typedef struct Stage_Data;
typedef struct PicDraw_Data;
typedef struct fsMgfFile;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct fsHdFile;
typedef struct _anon19;
typedef struct _anon20;
typedef struct _anon21;
typedef struct shBattleInfo;
typedef struct _anon22;
typedef struct fsMgpFile;
typedef struct _anon23;
typedef struct _anon24;
typedef struct _anon25;
typedef struct shGsDrawEnv;
typedef struct _anon26;
typedef struct _CL_VHIT_WALL;
typedef struct shPlayerWork;

typedef int(*type_3)();
typedef void(*type_34)(SubCharacter*);
typedef void(*type_37)(SubCharacter*);
typedef void(*type_47)();

typedef unsigned char type_0[3];
typedef unsigned char type_1[2];
typedef Q_WORDDATA type_2[2];
typedef unsigned char type_4[2];
typedef Q_WORDDATA type_5[2];
typedef Q_WORDDATA type_6[5];
typedef Q_WORDDATA type_7[2];
typedef Q_WORDDATA type_8[2];
typedef Q_WORDDATA type_9[2];
typedef Q_WORDDATA type_10[2];
typedef float type_11[4];
typedef Q_WORDDATA type_12[2];
typedef Q_WORDDATA type_13[2];
typedef float type_14[4];
typedef float type_15[4][4];
typedef Q_WORDDATA type_16[2];
typedef Q_WORDDATA type_17[2];
typedef Q_WORDDATA type_18[6];
typedef Q_WORDDATA type_19[6];
typedef unsigned char type_20[20];
typedef int type_21[6];
typedef shAttackInfo type_22[66];
typedef unsigned int type_23[3];
typedef unsigned int type_24[3];
typedef unsigned int type_25[3];
typedef float type_26[4];
typedef float type_27[4][4];
typedef unsigned int type_28[24];
typedef unsigned int type_29[3];
typedef char type_30[0];
typedef float type_31[4];
typedef unsigned int type_32[8];
typedef unsigned int type_33[3];
typedef unsigned short type_35[8];
typedef float type_36[4][2];
typedef unsigned char type_38[2];
typedef unsigned char type_39[14];
typedef unsigned int type_40[4];
typedef unsigned short type_41[0];
typedef unsigned short type_42[8];
typedef float type_43[4];
typedef unsigned char type_44[4];
typedef unsigned char type_45[16];
typedef int type_46[4];
typedef short type_48[8];
typedef char type_49[16];
typedef unsigned long type_50[2];
typedef unsigned char type_51[69];
typedef _anon25 type_52[3];
typedef shGsDrawEnv type_53[3];
typedef shGsStencilDrawEnv type_54[3];
typedef shGsTinyDrawEnv type_55[6];
typedef Q_WORDDATA type_56[10];
typedef Q_WORDDATA type_57[10];
typedef Q_WORDDATA type_58[10];
typedef PAD_INFO type_59[10];
typedef Q_WORDDATA type_60[10];
typedef Q_WORDDATA type_61[10];
typedef Q_WORDDATA type_62[10];
typedef Q_WORDDATA type_63[10];
typedef Q_WORDDATA type_64[8];
typedef float type_65[2];
typedef short type_66[75];
typedef Q_WORDDATA type_67[2];
typedef Q_WORDDATA type_68[2];
typedef unsigned char type_69[14];
typedef Q_WORDDATA type_70[2];
typedef unsigned char type_71[4];
typedef Q_WORDDATA type_72[2];
typedef unsigned char type_73[4];
typedef Q_WORDDATA type_74[2];
typedef Q_WORDDATA type_75[2];
typedef Q_WORDDATA type_76[2];
typedef Q_WORDDATA type_77[2];
typedef Q_WORDDATA type_78[2];
typedef unsigned char type_79[97];
typedef Q_WORDDATA type_80[2];
typedef Q_WORDDATA type_81[5];
typedef Q_WORDDATA type_82[2];

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
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
	_anon6 pos;
	_anon6 rot;
	_anon6 pos_spd;
	_anon6 rot_spd;
	_anon13 mat;
	shSkelton* sk_top;
	float eye_y;
	float center_y;
	float spd;
	float spd_org;
	float spd_y;
	float spd_roty;
	float grnd_normal[4];
	float grnd_height;
	_anon6 b_pos;
	_anon6 b_rot;
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

struct _anon0
{
	_anon3 frame1;
	unsigned long frame1addr;
	_anon16 zbuf1;
	long zbuf1addr;
	_anon12 xyoffset1;
	long xyoffset1addr;
	_anon26 scissor1;
	long scissor1addr;
	_anon19 prmodecont;
	long prmodecontaddr;
	_anon10 colclamp;
	long colclampaddr;
	_anon21 dthe;
	long dtheaddr;
	_anon7 test1;
	long test1addr;
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

struct Pad_KeyConfig
{
	int enter;
	int cancel;
	int skip;
	int front_move;
	int back_move;
	int right_turn;
	int left_turn;
	int right_move;
	int left_move;
	int action;
	int attack;
	int dash;
	int light;
	int item;
	int search_view;
	int ready;
	int pause;
	int map;
	int padding[6];
};

union _anon1
{
	shBattleFight fight;
	shBattleShot shot;
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

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
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

union fsFileIndex
{
	_anon4 index;
	unsigned long pack;
};

struct Event_CamSetData
{
	float pos[4];
	float itr[4];
	float rot[4];
	float roll;
};

struct _anon4
{
	fsFile* fp;
	char* name;
};

union fsFile
{
	_anon24 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon5 hobj;
};

union _anon5
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct shGsStencilDrawEnv
{
	_anon11 giftag;
	_anon0 draw;
	Q_WORDDATA alpha1;
	Q_WORDDATA drawq2[6];
	_anon15 clear;
	Q_WORDDATA frame;
	_anon11 giftag_nc;
	_anon0 draw_nc;
	Q_WORDDATA alpha1_nc;
	Q_WORDDATA drawq2_nc[6];
	Q_WORDDATA gifad_frame_normal;
	Q_WORDDATA frame_normal;
	Q_WORDDATA gifad_frame_mskalpha;
	Q_WORDDATA frame_mskalpha;
	Q_WORDDATA gifad_frame_mskDalpha;
	Q_WORDDATA frame_mskDalpha;
};

struct _anon6
{
	float x;
	float y;
	float z;
	float w;
};

struct Event_List
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
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

struct Item_List
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon13 src_m;
	_anon6 src_t;
	_anon13 des_m;
	_anon6 des_t;
	_anon6 axis;
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

struct _anon9
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

struct _anon10
{
	struct
	{
		unsigned long CLAMP : 1;
		unsigned long pad01 : 63;
	};
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

struct _anon13
{
	float d[4][4];
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

struct DramaDemo_MessageTime
{
	unsigned short start;
	unsigned short end;
};

struct _SH2_SYS
{
	unsigned int step[8];
	unsigned int pre_playable;
	int main_status;
	unsigned int soft_reset;
	unsigned int frame_cnt;
};

struct _anon14
{
	struct
	{
		unsigned long X : 16;
		unsigned long Y : 16;
		unsigned long Z : 32;
	};
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

struct sh2gfw_AREA_HEAD
{
	unsigned int area_id;
	unsigned int toGlobalTexHead;
	unsigned int toGlobalClutsHead;
	unsigned int date;
};

struct _anon15
{
	_anon7 testa;
	long testaaddr;
	_anon18 prim;
	long primaddr;
	_anon22 rgbaq;
	long rgbaqaddr;
	_anon14 xyz2a;
	long xyz2aaddr;
	_anon14 xyz2b;
	long xyz2baddr;
	_anon7 testb;
	long testbaddr;
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

struct PAD_3D
{
	char round_way;
	unsigned char reserved1;
	unsigned char lslide;
	unsigned char rslide;
	unsigned char lturn180;
	unsigned char rturn180;
};

struct _anon16
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

struct _anon17
{
	void(*SpecDraw)();
	void(*PreDraw)();
	void(*PostDraw)();
	void(*CharaDraw_Hook)();
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

struct fsCdFile
{
	struct
	{
		int type : 8;
		int number : 24;
	};
	char* name;
	int lsn;
	int size;
};

struct shGsAllEnv
{
	unsigned long loop_counter;
	unsigned int loop;
	unsigned int loop3;
	shGsLoopEnv LoopEnv;
	_anon25 DispEnv[3];
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

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
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

struct fsMgcFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	fsFile* parent;
	char* start;
	char* end;
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
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
	_anon17* gfw_func;
	int(*chara_data_clear)();
	void(*sound_call_after_load)();
	int reserve_11;
};

struct PicDraw_Data
{
	sh2gfw_AREA_HEAD* ap;
	int tex;
	int clut;
	short x0;
	short y0;
	short x1;
	short y1;
	short x2;
	short y2;
	short x3;
	short y3;
	int us0;
	int vt0;
	int us1;
	int vt1;
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
	unsigned char alpha_a;
	unsigned char alpha_b;
	unsigned char alpha_c;
	unsigned char alpha_d;
	unsigned char alpha_fix;
	unsigned char test_ate;
	unsigned char test_atst;
	unsigned char test_aref;
	unsigned char test_afail;
	unsigned char test_date;
	unsigned char test_datm;
	unsigned char test_zte;
	unsigned char test_ztst;
	unsigned char pad[3];
	short otp;
	short status;
};

struct fsMgfFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	fsFile* parent;
	int offset;
	int size;
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

struct fsHdFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	char* name;
	int offset;
	int size;
};

struct _anon19
{
	struct
	{
		unsigned long AC : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon20
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

struct _anon21
{
	struct
	{
		unsigned long DTHE : 1;
		unsigned long pad01 : 63;
	};
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

struct _anon22
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

struct fsMgpFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	fsFile* file;
	fsMgcFile* start;
	fsMgcFile* end;
};

struct _anon23
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

struct _anon24
{
	struct
	{
		int type : 8;
		int number : 24;
	};
	int pad0;
	int pad1;
	int pad2;
};

struct _anon25
{
	_anon20 pmode;
	_anon2 smode2;
	_anon23 dispfb;
	_anon8 display;
	_anon9 bgcolor;
};

struct shGsDrawEnv
{
	_anon11 giftag;
	_anon0 draw;
	Q_WORDDATA drawq2[5];
	_anon15 clear;
	_anon11 giftag_nc;
	_anon0 draw_nc;
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

struct _anon26
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

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

struct shPlayerWork
{
	SubCharacter* player;
	_anon6 dist_rot;
	_anon6 dist_pos;
	_anon6 pos;
	_anon6 rot;
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
	_anon6 tgt_body_angle;
	_anon6 tgt_neck_angle;
	_anon6 tgt_arms_angle;
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

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
int ev_filter_on;
short item_to_chara[75];
int ev_s_step;
int ev_prog_flag_set;
int ev_cancel;
unsigned short msg_buffer[0];
shPlayerWork sh2jms;
char* layer_adr;
Pad_KeyConfig key_config;
float ev_filter;
_SH2_SYS Sh2sys;
float ev_cursor_y;
float ev_cursor_x;
char cursor_adr[0];
Stage_Data* stage;
float total_demo_frame;
float demo_frame;
int demo_status;
shGsAllEnv shGs_AllEnv;

int EvSubMessage(int msg);
int EvSubQuestion(int msg);
int EvSubItemUse0(int kind, int message, int se, int stereo, float* pos, int xxx);
int ItemUseSeTiming(int kind, int boa);
int EvSubItemGet(int kind, int message);
int EvSubItemGetAndAnim(int kind, int message);
int EvSubFileLoadAndFadeOut(fsFileIndex* file_0, fsFileIndex* file_1);
int EvSubPictureDisplayAndFadeIn(float fade);
int EvSubPictureDisplayOnly();
int EvSubPictureDisplayAndFadeOut(float fade);
int EvSubPictureDisplay(fsFileIndex* file, int msg);
int EvSubMapGet(fsFileIndex* file, int msg);
void EvSubPictureLayer(int x0, int y0, int x1, int y1, int alpha);
void EvSubPictureFilter();
void EvSubPictureInit();
void EvSubPictureStart();
void EvSubPictureEnd();
void EvSubPictureCursor(int color);
void EvDispControlModelEntry(int* list, int room, int no);
void EvDispControlModelExec(int* list);
void EvSubMovieReady(fsFileIndex* file, DramaDemo_MessageTime* msg_time, int msg_no);
int EvSubMovieStart(int demo);
void EvSubMovieEnd();

// 
// Start address: 0x1abf50
int EvSubMessage(int msg)
{
	// Line 113, Address: 0x1abf50, Func Offset: 0
	// Line 114, Address: 0x1abf58, Func Offset: 0x8
	// Line 116, Address: 0x1abf88, Func Offset: 0x38
	// Line 117, Address: 0x1abf9c, Func Offset: 0x4c
	// Line 118, Address: 0x1abfb0, Func Offset: 0x60
	// Line 121, Address: 0x1abfb8, Func Offset: 0x68
	// Line 122, Address: 0x1abfdc, Func Offset: 0x8c
	// Line 123, Address: 0x1abff4, Func Offset: 0xa4
	// Line 124, Address: 0x1abffc, Func Offset: 0xac
	// Line 126, Address: 0x1ac010, Func Offset: 0xc0
	// Line 129, Address: 0x1ac018, Func Offset: 0xc8
	// Line 131, Address: 0x1ac024, Func Offset: 0xd4
	// Line 132, Address: 0x1ac028, Func Offset: 0xd8
	// Func End, Address: 0x1ac038, Func Offset: 0xe8
}

// 
// Start address: 0x1ac040
int EvSubQuestion(int msg)
{
	// Line 141, Address: 0x1ac040, Func Offset: 0
	// Line 142, Address: 0x1ac048, Func Offset: 0x8
	// Line 144, Address: 0x1ac078, Func Offset: 0x38
	// Line 145, Address: 0x1ac08c, Func Offset: 0x4c
	// Line 146, Address: 0x1ac0a0, Func Offset: 0x60
	// Line 149, Address: 0x1ac0a8, Func Offset: 0x68
	// Line 150, Address: 0x1ac0bc, Func Offset: 0x7c
	// Line 151, Address: 0x1ac0c4, Func Offset: 0x84
	// Line 153, Address: 0x1ac0d8, Func Offset: 0x98
	// Line 156, Address: 0x1ac0e0, Func Offset: 0xa0
	// Line 158, Address: 0x1ac0ec, Func Offset: 0xac
	// Line 159, Address: 0x1ac0f0, Func Offset: 0xb0
	// Func End, Address: 0x1ac100, Func Offset: 0xc0
}

// 
// Start address: 0x1ac100
int EvSubItemUse0(int kind, int message, int se, int stereo, float* pos, int xxx)
{
	// Line 174, Address: 0x1ac100, Func Offset: 0
	// Line 175, Address: 0x1ac130, Func Offset: 0x30
	// Line 177, Address: 0x1ac160, Func Offset: 0x60
	// Line 178, Address: 0x1ac178, Func Offset: 0x78
	// Line 179, Address: 0x1ac184, Func Offset: 0x84
	// Line 180, Address: 0x1ac198, Func Offset: 0x98
	// Line 181, Address: 0x1ac1b8, Func Offset: 0xb8
	// Line 182, Address: 0x1ac1e4, Func Offset: 0xe4
	// Line 184, Address: 0x1ac1fc, Func Offset: 0xfc
	// Line 185, Address: 0x1ac210, Func Offset: 0x110
	// Line 188, Address: 0x1ac218, Func Offset: 0x118
	// Line 189, Address: 0x1ac22c, Func Offset: 0x12c
	// Line 190, Address: 0x1ac234, Func Offset: 0x134
	// Line 191, Address: 0x1ac254, Func Offset: 0x154
	// Line 192, Address: 0x1ac280, Func Offset: 0x180
	// Line 194, Address: 0x1ac298, Func Offset: 0x198
	// Line 196, Address: 0x1ac2ac, Func Offset: 0x1ac
	// Line 199, Address: 0x1ac2b4, Func Offset: 0x1b4
	// Line 200, Address: 0x1ac2d0, Func Offset: 0x1d0
	// Line 202, Address: 0x1ac2dc, Func Offset: 0x1dc
	// Line 203, Address: 0x1ac2e0, Func Offset: 0x1e0
	// Func End, Address: 0x1ac304, Func Offset: 0x204
}

// 
// Start address: 0x1ac310
int ItemUseSeTiming(int kind, int boa)
{
	// Line 210, Address: 0x1ac310, Func Offset: 0
	// Line 214, Address: 0x1ac33c, Func Offset: 0x2c
	// Line 218, Address: 0x1ac350, Func Offset: 0x40
	// Line 221, Address: 0x1ac364, Func Offset: 0x54
	// Line 222, Address: 0x1ac368, Func Offset: 0x58
	// Func End, Address: 0x1ac370, Func Offset: 0x60
}

// 
// Start address: 0x1ac370
int EvSubItemGet(int kind, int message)
{
	// Line 232, Address: 0x1ac370, Func Offset: 0
	// Line 233, Address: 0x1ac380, Func Offset: 0x10
	// Line 235, Address: 0x1ac3b0, Func Offset: 0x40
	// Line 236, Address: 0x1ac3c4, Func Offset: 0x54
	// Line 237, Address: 0x1ac3d8, Func Offset: 0x68
	// Line 240, Address: 0x1ac3e0, Func Offset: 0x70
	// Line 241, Address: 0x1ac3f4, Func Offset: 0x84
	// Line 242, Address: 0x1ac400, Func Offset: 0x90
	// Line 243, Address: 0x1ac424, Func Offset: 0xb4
	// Line 244, Address: 0x1ac42c, Func Offset: 0xbc
	// Line 246, Address: 0x1ac440, Func Offset: 0xd0
	// Line 248, Address: 0x1ac448, Func Offset: 0xd8
	// Line 250, Address: 0x1ac454, Func Offset: 0xe4
	// Line 251, Address: 0x1ac458, Func Offset: 0xe8
	// Func End, Address: 0x1ac46c, Func Offset: 0xfc
}

// 
// Start address: 0x1ac470
int EvSubItemGetAndAnim(int kind, int message)
{
	SubCharacter* scp;
	// Line 261, Address: 0x1ac470, Func Offset: 0
	// Line 264, Address: 0x1ac480, Func Offset: 0x10
	// Line 266, Address: 0x1ac4d4, Func Offset: 0x64
	// Line 267, Address: 0x1ac4e8, Func Offset: 0x78
	// Line 268, Address: 0x1ac50c, Func Offset: 0x9c
	// Line 269, Address: 0x1ac544, Func Offset: 0xd4
	// Line 270, Address: 0x1ac550, Func Offset: 0xe0
	// Line 271, Address: 0x1ac55c, Func Offset: 0xec
	// Line 272, Address: 0x1ac564, Func Offset: 0xf4
	// Line 273, Address: 0x1ac570, Func Offset: 0x100
	// Line 275, Address: 0x1ac57c, Func Offset: 0x10c
	// Line 278, Address: 0x1ac584, Func Offset: 0x114
	// Line 279, Address: 0x1ac594, Func Offset: 0x124
	// Line 280, Address: 0x1ac59c, Func Offset: 0x12c
	// Line 281, Address: 0x1ac5a4, Func Offset: 0x134
	// Line 282, Address: 0x1ac5bc, Func Offset: 0x14c
	// Line 283, Address: 0x1ac5cc, Func Offset: 0x15c
	// Line 285, Address: 0x1ac5d8, Func Offset: 0x168
	// Line 288, Address: 0x1ac5e0, Func Offset: 0x170
	// Line 290, Address: 0x1ac5f4, Func Offset: 0x184
	// Line 292, Address: 0x1ac60c, Func Offset: 0x19c
	// Line 293, Address: 0x1ac618, Func Offset: 0x1a8
	// Line 296, Address: 0x1ac620, Func Offset: 0x1b0
	// Line 297, Address: 0x1ac644, Func Offset: 0x1d4
	// Line 298, Address: 0x1ac650, Func Offset: 0x1e0
	// Line 299, Address: 0x1ac658, Func Offset: 0x1e8
	// Line 300, Address: 0x1ac67c, Func Offset: 0x20c
	// Line 301, Address: 0x1ac6b4, Func Offset: 0x244
	// Line 302, Address: 0x1ac6bc, Func Offset: 0x24c
	// Line 303, Address: 0x1ac6c8, Func Offset: 0x258
	// Line 304, Address: 0x1ac6d0, Func Offset: 0x260
	// Line 305, Address: 0x1ac6dc, Func Offset: 0x26c
	// Line 306, Address: 0x1ac6e0, Func Offset: 0x270
	// Line 307, Address: 0x1ac6fc, Func Offset: 0x28c
	// Line 310, Address: 0x1ac704, Func Offset: 0x294
	// Line 311, Address: 0x1ac72c, Func Offset: 0x2bc
	// Line 312, Address: 0x1ac738, Func Offset: 0x2c8
	// Line 315, Address: 0x1ac740, Func Offset: 0x2d0
	// Line 316, Address: 0x1ac754, Func Offset: 0x2e4
	// Line 318, Address: 0x1ac760, Func Offset: 0x2f0
	// Line 319, Address: 0x1ac764, Func Offset: 0x2f4
	// Func End, Address: 0x1ac778, Func Offset: 0x308
}

// 
// Start address: 0x1ac780
int EvSubFileLoadAndFadeOut(fsFileIndex* file_0, fsFileIndex* file_1)
{
	// Line 331, Address: 0x1ac780, Func Offset: 0
	// Line 332, Address: 0x1ac798, Func Offset: 0x18
	// Line 334, Address: 0x1ac7cc, Func Offset: 0x4c
	// Line 335, Address: 0x1ac7dc, Func Offset: 0x5c
	// Line 336, Address: 0x1ac7e4, Func Offset: 0x64
	// Line 337, Address: 0x1ac7fc, Func Offset: 0x7c
	// Line 339, Address: 0x1ac828, Func Offset: 0xa8
	// Line 340, Address: 0x1ac844, Func Offset: 0xc4
	// Line 341, Address: 0x1ac854, Func Offset: 0xd4
	// Line 345, Address: 0x1ac860, Func Offset: 0xe0
	// Line 346, Address: 0x1ac894, Func Offset: 0x114
	// Line 347, Address: 0x1ac898, Func Offset: 0x118
	// Func End, Address: 0x1ac8b0, Func Offset: 0x130
}

// 
// Start address: 0x1ac8b0
int EvSubPictureDisplayAndFadeIn(float fade)
{
	// Line 356, Address: 0x1ac8b0, Func Offset: 0
	// Line 357, Address: 0x1ac8b8, Func Offset: 0x8
	// Line 358, Address: 0x1ac8c8, Func Offset: 0x18
	// Line 359, Address: 0x1ac8d4, Func Offset: 0x24
	// Line 361, Address: 0x1ac8e0, Func Offset: 0x30
	// Line 362, Address: 0x1ac8e8, Func Offset: 0x38
	// Line 363, Address: 0x1ac8f0, Func Offset: 0x40
	// Line 365, Address: 0x1ac8f8, Func Offset: 0x48
	// Line 366, Address: 0x1ac900, Func Offset: 0x50
	// Func End, Address: 0x1ac910, Func Offset: 0x60
}

// 
// Start address: 0x1ac910
int EvSubPictureDisplayOnly()
{
	PicDraw_Data pic;
	// Line 375, Address: 0x1ac910, Func Offset: 0
	// Line 378, Address: 0x1ac918, Func Offset: 0x8
	// Line 380, Address: 0x1ac938, Func Offset: 0x28
	// Line 382, Address: 0x1ac948, Func Offset: 0x38
	// Line 383, Address: 0x1ac96c, Func Offset: 0x5c
	// Line 384, Address: 0x1ac974, Func Offset: 0x64
	// Line 386, Address: 0x1ac980, Func Offset: 0x70
	// Line 387, Address: 0x1ac984, Func Offset: 0x74
	// Func End, Address: 0x1ac994, Func Offset: 0x84
}

// 
// Start address: 0x1ac9a0
int EvSubPictureDisplayAndFadeOut(float fade)
{
	// Line 396, Address: 0x1ac9a0, Func Offset: 0
	// Line 397, Address: 0x1ac9a8, Func Offset: 0x8
	// Line 398, Address: 0x1ac9b8, Func Offset: 0x18
	// Line 399, Address: 0x1ac9c4, Func Offset: 0x24
	// Line 401, Address: 0x1ac9d0, Func Offset: 0x30
	// Line 402, Address: 0x1ac9d8, Func Offset: 0x38
	// Line 403, Address: 0x1ac9e0, Func Offset: 0x40
	// Line 405, Address: 0x1ac9e8, Func Offset: 0x48
	// Line 406, Address: 0x1ac9f0, Func Offset: 0x50
	// Func End, Address: 0x1aca00, Func Offset: 0x60
}

// 
// Start address: 0x1aca00
int EvSubPictureDisplay(fsFileIndex* file, int msg)
{
	// Line 416, Address: 0x1aca00, Func Offset: 0
	// Line 417, Address: 0x1aca18, Func Offset: 0x18
	// Line 419, Address: 0x1aca78, Func Offset: 0x78
	// Line 420, Address: 0x1aca90, Func Offset: 0x90
	// Line 421, Address: 0x1acaa0, Func Offset: 0xa0
	// Line 422, Address: 0x1acaa8, Func Offset: 0xa8
	// Line 423, Address: 0x1acabc, Func Offset: 0xbc
	// Line 424, Address: 0x1acac8, Func Offset: 0xc8
	// Line 427, Address: 0x1acad0, Func Offset: 0xd0
	// Line 428, Address: 0x1acaf8, Func Offset: 0xf8
	// Line 429, Address: 0x1acb08, Func Offset: 0x108
	// Line 431, Address: 0x1acb14, Func Offset: 0x114
	// Line 434, Address: 0x1acb1c, Func Offset: 0x11c
	// Line 435, Address: 0x1acb24, Func Offset: 0x124
	// Line 436, Address: 0x1acb2c, Func Offset: 0x12c
	// Line 437, Address: 0x1acb34, Func Offset: 0x134
	// Line 438, Address: 0x1acb50, Func Offset: 0x150
	// Line 441, Address: 0x1acb58, Func Offset: 0x158
	// Line 442, Address: 0x1acb60, Func Offset: 0x160
	// Line 443, Address: 0x1acb68, Func Offset: 0x168
	// Line 444, Address: 0x1acb70, Func Offset: 0x170
	// Line 446, Address: 0x1acba8, Func Offset: 0x1a8
	// Line 447, Address: 0x1acbbc, Func Offset: 0x1bc
	// Line 449, Address: 0x1acbc8, Func Offset: 0x1c8
	// Line 452, Address: 0x1acbd0, Func Offset: 0x1d0
	// Line 453, Address: 0x1acbd8, Func Offset: 0x1d8
	// Line 454, Address: 0x1acbe0, Func Offset: 0x1e0
	// Line 455, Address: 0x1acbe8, Func Offset: 0x1e8
	// Line 456, Address: 0x1acbf0, Func Offset: 0x1f0
	// Line 457, Address: 0x1acc04, Func Offset: 0x204
	// Line 458, Address: 0x1acc0c, Func Offset: 0x20c
	// Line 459, Address: 0x1acc1c, Func Offset: 0x21c
	// Line 461, Address: 0x1acc28, Func Offset: 0x228
	// Line 464, Address: 0x1acc30, Func Offset: 0x230
	// Line 465, Address: 0x1acc38, Func Offset: 0x238
	// Line 466, Address: 0x1acc40, Func Offset: 0x240
	// Line 467, Address: 0x1acc48, Func Offset: 0x248
	// Line 468, Address: 0x1acc64, Func Offset: 0x264
	// Line 471, Address: 0x1acc6c, Func Offset: 0x26c
	// Line 472, Address: 0x1acc80, Func Offset: 0x280
	// Line 473, Address: 0x1acc90, Func Offset: 0x290
	// Line 475, Address: 0x1acc9c, Func Offset: 0x29c
	// Line 476, Address: 0x1acca0, Func Offset: 0x2a0
	// Func End, Address: 0x1accb8, Func Offset: 0x2b8
}

// 
// Start address: 0x1accc0
int EvSubMapGet(fsFileIndex* file, int msg)
{
	// Line 486, Address: 0x1accc0, Func Offset: 0
	// Line 487, Address: 0x1accc8, Func Offset: 0x8
	// Line 488, Address: 0x1accd0, Func Offset: 0x10
	// Func End, Address: 0x1acce0, Func Offset: 0x20
}

// 
// Start address: 0x1acce0
void EvSubPictureLayer(int x0, int y0, int x1, int y1, int alpha)
{
	PicDraw_Data pic;
	// Line 498, Address: 0x1acce0, Func Offset: 0
	// Line 501, Address: 0x1acd10, Func Offset: 0x30
	// Line 503, Address: 0x1acd2c, Func Offset: 0x4c
	// Line 505, Address: 0x1acd3c, Func Offset: 0x5c
	// Line 506, Address: 0x1acd64, Func Offset: 0x84
	// Line 507, Address: 0x1acd6c, Func Offset: 0x8c
	// Line 508, Address: 0x1acd88, Func Offset: 0xa8
	// Line 509, Address: 0x1acdb4, Func Offset: 0xd4
	// Line 510, Address: 0x1acdc0, Func Offset: 0xe0
	// Func End, Address: 0x1acde4, Func Offset: 0x104
}

// 
// Start address: 0x1acdf0
void EvSubPictureFilter()
{
	// Line 518, Address: 0x1acdf0, Func Offset: 0
	// Line 519, Address: 0x1acdfc, Func Offset: 0xc
	// Func End, Address: 0x1ace04, Func Offset: 0x14
}

// 
// Start address: 0x1ace10
void EvSubPictureInit()
{
	// Line 527, Address: 0x1ace10, Func Offset: 0
	// Line 528, Address: 0x1ace18, Func Offset: 0x8
	// Line 529, Address: 0x1ace20, Func Offset: 0x10
	// Func End, Address: 0x1ace28, Func Offset: 0x18
}

// 
// Start address: 0x1ace30
void EvSubPictureStart()
{
	// Line 536, Address: 0x1ace30, Func Offset: 0
	// Line 537, Address: 0x1ace38, Func Offset: 0x8
	// Line 538, Address: 0x1ace40, Func Offset: 0x10
	// Line 539, Address: 0x1ace54, Func Offset: 0x24
	// Func End, Address: 0x1ace64, Func Offset: 0x34
}

// 
// Start address: 0x1ace70
void EvSubPictureEnd()
{
	PicDraw_Data pic;
	// Line 546, Address: 0x1ace70, Func Offset: 0
	// Line 549, Address: 0x1ace78, Func Offset: 0x8
	// Line 550, Address: 0x1ace88, Func Offset: 0x18
	// Line 551, Address: 0x1aceb4, Func Offset: 0x44
	// Line 552, Address: 0x1aced8, Func Offset: 0x68
	// Line 553, Address: 0x1acee0, Func Offset: 0x70
	// Line 554, Address: 0x1acf0c, Func Offset: 0x9c
	// Line 556, Address: 0x1acf2c, Func Offset: 0xbc
	// Line 558, Address: 0x1acf34, Func Offset: 0xc4
	// Line 559, Address: 0x1acf54, Func Offset: 0xe4
	// Line 560, Address: 0x1acf64, Func Offset: 0xf4
	// Line 562, Address: 0x1acf7c, Func Offset: 0x10c
	// Line 563, Address: 0x1acfcc, Func Offset: 0x15c
	// Line 564, Address: 0x1acfd4, Func Offset: 0x164
	// Line 567, Address: 0x1acfe0, Func Offset: 0x170
	// Line 568, Address: 0x1acff4, Func Offset: 0x184
	// Func End, Address: 0x1ad004, Func Offset: 0x194
}

// 
// Start address: 0x1ad010
void EvSubPictureCursor(int color)
{
	unsigned char lsy;
	unsigned char lsx;
	float any;
	float anx;
	int py;
	int px;
	PicDraw_Data pic;
	// Line 575, Address: 0x1ad010, Func Offset: 0
	// Line 581, Address: 0x1ad028, Func Offset: 0x18
	// Line 582, Address: 0x1ad03c, Func Offset: 0x2c
	// Line 583, Address: 0x1ad048, Func Offset: 0x38
	// Line 584, Address: 0x1ad080, Func Offset: 0x70
	// Line 585, Address: 0x1ad090, Func Offset: 0x80
	// Line 586, Address: 0x1ad0c4, Func Offset: 0xb4
	// Line 587, Address: 0x1ad0c8, Func Offset: 0xb8
	// Line 588, Address: 0x1ad0dc, Func Offset: 0xcc
	// Line 589, Address: 0x1ad0e8, Func Offset: 0xd8
	// Line 590, Address: 0x1ad120, Func Offset: 0x110
	// Line 591, Address: 0x1ad130, Func Offset: 0x120
	// Line 592, Address: 0x1ad164, Func Offset: 0x154
	// Line 593, Address: 0x1ad168, Func Offset: 0x158
	// Line 594, Address: 0x1ad190, Func Offset: 0x180
	// Line 595, Address: 0x1ad1c4, Func Offset: 0x1b4
	// Line 596, Address: 0x1ad1f4, Func Offset: 0x1e4
	// Line 597, Address: 0x1ad1fc, Func Offset: 0x1ec
	// Line 598, Address: 0x1ad244, Func Offset: 0x234
	// Line 599, Address: 0x1ad28c, Func Offset: 0x27c
	// Line 600, Address: 0x1ad2d0, Func Offset: 0x2c0
	// Line 603, Address: 0x1ad314, Func Offset: 0x304
	// Line 604, Address: 0x1ad344, Func Offset: 0x334
	// Line 606, Address: 0x1ad374, Func Offset: 0x364
	// Line 608, Address: 0x1ad390, Func Offset: 0x380
	// Line 610, Address: 0x1ad3a0, Func Offset: 0x390
	// Line 611, Address: 0x1ad3c4, Func Offset: 0x3b4
	// Line 612, Address: 0x1ad3cc, Func Offset: 0x3bc
	// Line 613, Address: 0x1ad3f8, Func Offset: 0x3e8
	// Line 614, Address: 0x1ad424, Func Offset: 0x414
	// Line 615, Address: 0x1ad450, Func Offset: 0x440
	// Line 617, Address: 0x1ad474, Func Offset: 0x464
	// Line 618, Address: 0x1ad4a0, Func Offset: 0x490
	// Line 619, Address: 0x1ad4c8, Func Offset: 0x4b8
	// Line 620, Address: 0x1ad4ec, Func Offset: 0x4dc
	// Line 621, Address: 0x1ad510, Func Offset: 0x500
	// Line 622, Address: 0x1ad52c, Func Offset: 0x51c
	// Line 623, Address: 0x1ad530, Func Offset: 0x520
	// Line 624, Address: 0x1ad53c, Func Offset: 0x52c
	// Func End, Address: 0x1ad558, Func Offset: 0x548
}

// 
// Start address: 0x1ad560
void EvDispControlModelEntry(int* list, int room, int no)
{
	int map_id;
	// Line 637, Address: 0x1ad560, Func Offset: 0
	// Line 639, Address: 0x1ad574, Func Offset: 0x14
	// Line 640, Address: 0x1ad5a0, Func Offset: 0x40
	// Line 641, Address: 0x1ad5a8, Func Offset: 0x48
	// Line 642, Address: 0x1ad5ac, Func Offset: 0x4c
	// Line 644, Address: 0x1ad5b0, Func Offset: 0x50
	// Line 645, Address: 0x1ad5b4, Func Offset: 0x54
	// Line 646, Address: 0x1ad5d0, Func Offset: 0x70
	// Func End, Address: 0x1ad5d8, Func Offset: 0x78
}

// 
// Start address: 0x1ad5e0
void EvDispControlModelExec(int* list)
{
	// Line 653, Address: 0x1ad5e0, Func Offset: 0
	// Line 654, Address: 0x1ad5f0, Func Offset: 0x10
	// Line 655, Address: 0x1ad604, Func Offset: 0x24
	// Line 656, Address: 0x1ad60c, Func Offset: 0x2c
	// Line 657, Address: 0x1ad614, Func Offset: 0x34
	// Line 658, Address: 0x1ad638, Func Offset: 0x58
	// Line 660, Address: 0x1ad640, Func Offset: 0x60
	// Line 662, Address: 0x1ad660, Func Offset: 0x80
	// Func End, Address: 0x1ad674, Func Offset: 0x94
}

// 
// Start address: 0x1ad680
void EvSubMovieReady(fsFileIndex* file, DramaDemo_MessageTime* msg_time, int msg_no)
{
	// Line 670, Address: 0x1ad680, Func Offset: 0
	// Line 671, Address: 0x1ad6a0, Func Offset: 0x20
	// Line 672, Address: 0x1ad6b8, Func Offset: 0x38
	// Line 673, Address: 0x1ad6cc, Func Offset: 0x4c
	// Line 674, Address: 0x1ad6fc, Func Offset: 0x7c
	// Line 676, Address: 0x1ad728, Func Offset: 0xa8
	// Line 677, Address: 0x1ad738, Func Offset: 0xb8
	// Line 678, Address: 0x1ad740, Func Offset: 0xc0
	// Line 679, Address: 0x1ad74c, Func Offset: 0xcc
	// Line 681, Address: 0x1ad764, Func Offset: 0xe4
	// Func End, Address: 0x1ad780, Func Offset: 0x100
}

// 
// Start address: 0x1ad780
int EvSubMovieStart(int demo)
{
	int movie;
	// Line 688, Address: 0x1ad780, Func Offset: 0
	// Line 691, Address: 0x1ad790, Func Offset: 0x10
	// Line 693, Address: 0x1ad798, Func Offset: 0x18
	// Line 694, Address: 0x1ad7d0, Func Offset: 0x50
	// Line 695, Address: 0x1ad7d8, Func Offset: 0x58
	// Line 696, Address: 0x1ad80c, Func Offset: 0x8c
	// Line 698, Address: 0x1ad818, Func Offset: 0x98
	// Line 699, Address: 0x1ad81c, Func Offset: 0x9c
	// Func End, Address: 0x1ad830, Func Offset: 0xb0
}

// 
// Start address: 0x1ad830
void EvSubMovieEnd()
{
	// Line 707, Address: 0x1ad830, Func Offset: 0
	// Line 708, Address: 0x1ad838, Func Offset: 0x8
	// Line 709, Address: 0x1ad844, Func Offset: 0x14
	// Line 710, Address: 0x1ad84c, Func Offset: 0x1c
	// Func End, Address: 0x1ad85c, Func Offset: 0x2c
}

