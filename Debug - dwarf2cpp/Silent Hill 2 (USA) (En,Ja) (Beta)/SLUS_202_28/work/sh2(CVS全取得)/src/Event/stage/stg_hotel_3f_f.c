typedef struct _anon0;
typedef struct shBattleInfo;
typedef struct Enemy_List;
typedef struct FilterWork;
typedef struct SubCharacter;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct _anon1;
typedef struct Pad_KeyConfig;
typedef struct shGsDrawEnv;
typedef struct FilterParams;
typedef struct _CL_VHIT_WALL;
typedef struct _anon2;
typedef struct _CL_HITPOLY_HEAD;
typedef union fsFile;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef struct fsCdFile;
typedef struct _anon3;
typedef struct _anon4;
typedef struct Stage_Data;
typedef struct _anon5;
typedef union _anon6;
typedef struct _CL_VHIT_RESULT;
typedef struct _anon7;
typedef struct Event_List;
typedef struct PAD_3D;
typedef union _anon8;
typedef struct _anon9;
typedef struct shGsStencilDrawEnv;
typedef struct fsMgcFile;
typedef struct CharaData_DemoList;
typedef struct Item_List;
typedef union fsFileIndex;
typedef struct Model_List;
typedef union Q_WORDDATA;
typedef struct _anon10;
typedef struct PAD_2D;
typedef struct _CL_HITPOLY_PLANE;
typedef struct _anon11;
typedef struct fsMgfFile;
typedef struct _anon12;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct shGsLoopEnv;
typedef struct DramaDemo_MessageTime;
typedef struct shSkelton;
typedef struct PAD_INFO;
typedef struct _AnimeInfo;
typedef struct _anon13;
typedef struct fsHdFile;
typedef struct _anon14;
typedef struct _anon15;
typedef struct _anon16;
typedef struct DramaDemo_PlayInfo;
typedef struct fsMgpFile;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct shGsTinyDrawEnv;
typedef struct _anon17;
typedef struct _anon18;
typedef struct _anon19;
typedef struct _anon20;
typedef struct _anon21;
typedef struct _anon22;
typedef struct shGsAllEnv;
typedef struct _anon23;
typedef struct _anon24;
typedef struct shPlayerWork;
typedef struct _anon25;
typedef struct shBattleFight;
typedef struct _anon26;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct _anon27;

typedef void(*type_11)();
typedef int(*type_42)();
typedef void(*type_87)(SubCharacter*);
typedef void(*type_91)(SubCharacter*);

typedef Q_WORDDATA type_0[2];
typedef _AnimeInfo type_1[5];
typedef _AnimeInfo type_2[19];
typedef Q_WORDDATA type_3[2];
typedef Q_WORDDATA type_4[2];
typedef unsigned char type_5[97];
typedef Q_WORDDATA type_6[2];
typedef Q_WORDDATA type_7[2];
typedef _CL_HITPOLY_PLANE type_8[2];
typedef Q_WORDDATA type_9[2];
typedef Q_WORDDATA type_10[2];
typedef Q_WORDDATA type_12[2];
typedef Q_WORDDATA type_13[8];
typedef _AnimeInfo type_14[33];
typedef Q_WORDDATA type_15[2];
typedef DramaDemo_MessageTime type_16[36];
typedef Q_WORDDATA type_17[2];
typedef unsigned char type_18[160];
typedef Q_WORDDATA type_19[2];
typedef Q_WORDDATA type_20[5];
typedef Q_WORDDATA type_21[2];
typedef unsigned int type_22[255];
typedef Q_WORDDATA type_23[2];
typedef Q_WORDDATA type_24[5];
typedef Q_WORDDATA type_25[2];
typedef unsigned int type_26[32];
typedef Q_WORDDATA type_27[2];
typedef _AnimeInfo type_28[11];
typedef unsigned char type_29[4];
typedef unsigned char type_30[2];
typedef Q_WORDDATA type_31[2];
typedef _AnimeInfo type_32[30];
typedef char type_33[4];
typedef Q_WORDDATA type_34[2];
typedef fsFileIndex type_35[1];
typedef char type_36[4];
typedef unsigned char type_37[20];
typedef Q_WORDDATA type_38[2];
typedef char type_39[4];
typedef int type_40[6];
typedef Q_WORDDATA type_41[2];
typedef Q_WORDDATA type_43[2];
typedef char type_44[4];
typedef Q_WORDDATA type_45[2];
typedef float type_46[4][2];
typedef Q_WORDDATA type_47[6];
typedef char type_48[4];
typedef _AnimeInfo type_49[17];
typedef Q_WORDDATA type_50[6];
typedef float type_51[4][2];
typedef fsFileIndex type_52[1];
typedef DramaDemo_MessageTime type_53[9];
typedef Q_WORDDATA type_54[8];
typedef _AnimeInfo type_55[34];
typedef unsigned int type_56[4];
typedef float type_57[4][4];
typedef Model_List type_58[3];
typedef unsigned short type_59[8];
typedef unsigned int type_60[3];
typedef float type_61[4];
typedef shAttackInfo type_62[66];
typedef float type_63[4];
typedef float type_64[4][4];
typedef unsigned int type_65[3];
typedef unsigned char type_66[16];
typedef _AnimeInfo type_67[17];
typedef unsigned int type_68[3];
typedef unsigned char type_69[14];
typedef int type_70[4];
typedef unsigned int type_71[24];
typedef short type_72[8];
typedef int(*type_73)()[5];
typedef PAD_INFO type_74[10];
typedef unsigned int type_75[3];
typedef char type_76[16];
typedef Event_List type_77[18];
typedef unsigned int type_78[3];
typedef unsigned long type_79[2];
typedef float type_80[4];
typedef int type_81[5];
typedef unsigned short type_82[8];
typedef float type_83[2];
typedef _AnimeInfo type_84[17];
typedef CharaData_DemoList type_85[3];
typedef float type_86[4][2];
typedef char type_88[0];
typedef unsigned char type_89[69];
typedef fsFileIndex type_90[1];
typedef unsigned char type_92[4];
typedef unsigned char type_93[4];
typedef Q_WORDDATA type_94[54];
typedef unsigned char type_95[4];
typedef Q_WORDDATA type_96[54];
typedef _AnimeInfo type_97[33];
typedef float type_98[4][16];
typedef _anon11 type_99[3];
typedef shGsDrawEnv type_100[3];
typedef unsigned char type_101[2];
typedef shGsStencilDrawEnv type_102[3];
typedef unsigned char type_103[2];
typedef float type_104[4];
typedef shGsTinyDrawEnv type_105[6];
typedef Q_WORDDATA type_106[10];
typedef _AnimeInfo type_107[24];
typedef Q_WORDDATA type_108[10];
typedef Q_WORDDATA type_109[10];
typedef unsigned char type_110[14];
typedef CharaData_DemoList type_111[5];
typedef Q_WORDDATA type_112[10];
typedef Q_WORDDATA type_113[10];
typedef Q_WORDDATA type_114[10];
typedef Q_WORDDATA type_115[10];
typedef Q_WORDDATA type_116[8];

struct _anon0
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

struct FilterWork
{
	int GsFilterKind;
	int Flg;
	int Kind_History;
	int mode;
	Q_WORDDATA FilterData[8];
	Q_WORDDATA CopyFilterColor;
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
	_anon7 pos;
	_anon7 rot;
	_anon7 pos_spd;
	_anon7 rot_spd;
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
	_anon7 b_pos;
	_anon7 b_rot;
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

struct _anon1
{
	void(*SpecDraw)();
	void(*PreDraw)();
	void(*PostDraw)();
	void(*CharaDraw_Hook)();
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

struct shGsDrawEnv
{
	_anon22 giftag;
	_anon14 draw;
	Q_WORDDATA drawq2[5];
	_anon26 clear;
	_anon22 giftag_nc;
	_anon14 draw_nc;
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

struct FilterParams
{
	short base_Ix;
	short base_Iy;
	short FO_timer;
	short Max_Timer;
	char TargetSec;
	char FIO_ratio;
	char blurMode;
	char blurRatio;
	char LesserA;
	char GreaterA;
	char sw_flg;
	char dp_flg;
	unsigned char SoftIter;
	unsigned char SoftCit;
	unsigned char SoftAref;
	char SoftMode;
	char SoftShift;
	char TrimAlpha;
	short TexTrimEX;
	short TexTrimEY;
	short TexTrimSX;
	short TexTrimSY;
	int DOF_ZDepth;
	unsigned char KeyAlpha;
	unsigned char testkind;
	unsigned char S1_iter;
	unsigned char S1_alpha;
	char S1_shift;
	char S1_baseIX;
	unsigned char S2_iter;
	unsigned char S2_alpha;
	char S2_shift;
	char S2_baseIX;
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

struct _anon2
{
	unsigned int flag[255];
	float time_deai;
	unsigned int enemy[32];
	unsigned char safe[4];
	char rotate[4];
	char guruguru[4];
	char cylinder[4];
	unsigned short clock;
	unsigned short carbon;
	char runaway[4];
	unsigned short hanging;
	short pad;
	char trunk[4];
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

union fsFile
{
	_anon17 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
};

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon6 hit_check;
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

struct _anon3
{
	struct
	{
		unsigned long AC : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon4
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
	_anon1* gfw_func;
	int(*chara_data_clear)();
	void(*sound_call_after_load)();
	int reserve_11;
};

struct _anon5
{
	struct
	{
		unsigned long DTHE : 1;
		unsigned long pad01 : 63;
	};
};

union _anon6
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon8 hobj;
};

struct _anon7
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

struct PAD_3D
{
	char round_way;
	unsigned char reserved1;
	unsigned char lslide;
	unsigned char rslide;
	unsigned char lturn180;
	unsigned char rturn180;
};

union _anon8
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct _anon9
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

struct shGsStencilDrawEnv
{
	_anon22 giftag;
	_anon14 draw;
	Q_WORDDATA alpha1;
	Q_WORDDATA drawq2[6];
	_anon26 clear;
	Q_WORDDATA frame;
	_anon22 giftag_nc;
	_anon14 draw_nc;
	Q_WORDDATA alpha1_nc;
	Q_WORDDATA drawq2_nc[6];
	Q_WORDDATA gifad_frame_normal;
	Q_WORDDATA frame_normal;
	Q_WORDDATA gifad_frame_mskalpha;
	Q_WORDDATA frame_mskalpha;
	Q_WORDDATA gifad_frame_mskDalpha;
	Q_WORDDATA frame_mskDalpha;
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

struct CharaData_DemoList
{
	int kind;
	fsFileIndex* model;
	fsFileIndex* animation;
	fsFileIndex* shadow;
	fsFileIndex* cluster;
};

struct Item_List
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
};

union fsFileIndex
{
	_anon24 index;
	unsigned long pack;
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

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
};

struct _CL_HITPOLY_PLANE
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
	float p[4][4];
};

struct _anon11
{
	_anon4 pmode;
	_anon15 smode2;
	_anon10 dispfb;
	_anon19 display;
	_anon20 bgcolor;
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

struct _anon12
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

struct DramaDemo_MessageTime
{
	unsigned short start;
	unsigned short end;
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon13 src_m;
	_anon7 src_t;
	_anon13 des_m;
	_anon7 des_t;
	_anon7 axis;
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

struct _anon13
{
	float d[4][4];
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

struct _anon14
{
	_anon16 frame1;
	unsigned long frame1addr;
	_anon27 zbuf1;
	long zbuf1addr;
	_anon23 xyoffset1;
	long xyoffset1addr;
	_anon12 scissor1;
	long scissor1addr;
	_anon3 prmodecont;
	long prmodecontaddr;
	_anon21 colclamp;
	long colclampaddr;
	_anon5 dthe;
	long dtheaddr;
	_anon18 test1;
	long test1addr;
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

struct _anon16
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

struct DramaDemo_PlayInfo
{
	int demo_no;
	char* adr_dds_top;
	short* adr_anim;
	DramaDemo_MessageTime* adr_msg_time;
	short msg_start;
	short voice_sd_no;
	int* adr_voice;
	int stream_no;
	float stream_start;
	float add_pos_x;
	float add_pos_z;
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

struct _anon17
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

struct _anon18
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

struct _anon19
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
		unsigned long CLAMP : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon22
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

struct shGsAllEnv
{
	unsigned long loop_counter;
	unsigned int loop;
	unsigned int loop3;
	shGsLoopEnv LoopEnv;
	_anon11 DispEnv[3];
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

struct _anon23
{
	struct
	{
		unsigned long OFX : 16;
		unsigned long pad16 : 16;
		unsigned long OFY : 16;
		unsigned long pad48 : 16;
	};
};

struct _anon24
{
	fsFile* fp;
	char* name;
};

struct shPlayerWork
{
	SubCharacter* player;
	_anon7 dist_rot;
	_anon7 dist_pos;
	_anon7 pos;
	_anon7 rot;
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
	_anon7 tgt_body_angle;
	_anon7 tgt_neck_angle;
	_anon7 tgt_arms_angle;
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

struct _anon25
{
	struct
	{
		unsigned long X : 16;
		unsigned long Y : 16;
		unsigned long Z : 32;
	};
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct _anon26
{
	_anon18 testa;
	long testaaddr;
	_anon0 prim;
	long primaddr;
	_anon9 rgbaq;
	long rgbaqaddr;
	_anon25 xyz2a;
	long xyz2aaddr;
	_anon25 xyz2b;
	long xyz2baddr;
	_anon18 testb;
	long testbaddr;
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

struct _anon27
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

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
_AnimeInfo pjames_anim[34];
_AnimeInfo pjames_hg_anim[11];
_AnimeInfo pjames_sg_anim[17];
_AnimeInfo pjames_rg_anim[5];
_AnimeInfo pjames_sp_anim[17];
_AnimeInfo pjames_ka_anim[33];
_AnimeInfo pjames_pi_anim[33];
_AnimeInfo pjames_na_anim[17];
_AnimeInfo pjames_cs_anim[24];
_AnimeInfo pjames_demo_anim[30];
_AnimeInfo pjames_stage_anim[19];
unsigned char ev_pos[160];
Event_List ev_list[18];
_CL_HITPOLY_PLANE clActWallList_rr87[2];
float rr91_rr94_mado[4][16];
Q_WORDDATA ScissorVertex[54];
Q_WORDDATA OutputVertex[54];
shGsAllEnv shGs_AllEnv;
int(*ev_prog)()[5];
_anon1 SpecialDrawFunctions;
Model_List mdl_list[3];
Stage_Data stage_hotel_3f_f;
shPlayerWork sh2jms;
int ev_s_step;
int ev_p_step;
DramaDemo_MessageTime video_msg[9];
float total_demo_frame;
_anon2 game_flag;
fsFileIndex data_movie_murder_pss[1];
Pad_KeyConfig key_config;
char MemShare_gp_data_buf[0];
fsFileIndex data_demo_room312_tomatta_dds[1];
fsFileIndex data_demo_vtr_vtr_dds[1];
FilterWork shGsFilterWork;

int EvProgUseHotelStairKey();
int EvProgUseHotel312Key();
int EvProgMemoryOfMurder();
int EvProgVideoReplay();
void EvRoomInit();
void EvAllTimeFunc();
void RR91_Filter();

// 
// Start address: 0x1f020f0
int EvProgUseHotelStairKey()
{
	// Line 218, Address: 0x1f020f0, Func Offset: 0
	// Line 219, Address: 0x1f020f8, Func Offset: 0x8
	// Line 221, Address: 0x1f0210c, Func Offset: 0x1c
	// Func End, Address: 0x1f0211c, Func Offset: 0x2c
	// Line 104, Address: 0x1f020f0, Func Offset: 0
	// Line 105, Address: 0x1f020f8, Func Offset: 0x8
	// Line 107, Address: 0x1f02134, Func Offset: 0x44
	// Line 108, Address: 0x1f02140, Func Offset: 0x50
	// Line 110, Address: 0x1f0216c, Func Offset: 0x7c
	// Line 111, Address: 0x1f02180, Func Offset: 0x90
	// Line 115, Address: 0x1f02194, Func Offset: 0xa4
	// Line 116, Address: 0x1f021a8, Func Offset: 0xb8
	// Line 117, Address: 0x1f021b8, Func Offset: 0xc8
	// Line 118, Address: 0x1f021cc, Func Offset: 0xdc
	// Line 121, Address: 0x1f021d4, Func Offset: 0xe4
	// Line 122, Address: 0x1f021f8, Func Offset: 0x108
	// Line 125, Address: 0x1f02200, Func Offset: 0x110
	// Line 127, Address: 0x1f02210, Func Offset: 0x120
	// Line 128, Address: 0x1f02224, Func Offset: 0x134
	// Line 130, Address: 0x1f02230, Func Offset: 0x140
	// Line 131, Address: 0x1f02234, Func Offset: 0x144
	// Func End, Address: 0x1f02244, Func Offset: 0x154
}

// 
// Start address: 0x1f02250
int EvProgUseHotel312Key()
{
	// Line 136, Address: 0x1f02250, Func Offset: 0
	// Line 137, Address: 0x1f02258, Func Offset: 0x8
	// Line 140, Address: 0x1f02288, Func Offset: 0x38
	// Func End, Address: 0x1f02298, Func Offset: 0x48
}

// 
// Start address: 0x1f022a0
int EvProgMemoryOfMurder()
{
	int ret;
	DramaDemo_MessageTime murder_msg[36];
	float b_d02_data[4][2];
	float nor_data[4][2];
	DramaDemo_PlayInfo murder;
	CharaData_DemoList chara_murder[5];
	DramaDemo_PlayInfo video;
	CharaData_DemoList chara_video[3];
	// Line 213, Address: 0x1f022a0, Func Offset: 0
	// Line 255, Address: 0x1f022a8, Func Offset: 0x8
	// Line 257, Address: 0x1f022d8, Func Offset: 0x38
	// Line 258, Address: 0x1f022f0, Func Offset: 0x50
	// Line 259, Address: 0x1f02304, Func Offset: 0x64
	// Line 261, Address: 0x1f02320, Func Offset: 0x80
	// Line 263, Address: 0x1f0233c, Func Offset: 0x9c
	// Line 264, Address: 0x1f0234c, Func Offset: 0xac
	// Line 265, Address: 0x1f02358, Func Offset: 0xb8
	// Line 266, Address: 0x1f0236c, Func Offset: 0xcc
	// Line 269, Address: 0x1f02380, Func Offset: 0xe0
	// Line 270, Address: 0x1f023ac, Func Offset: 0x10c
	// Line 273, Address: 0x1f023b4, Func Offset: 0x114
	// Line 274, Address: 0x1f023c0, Func Offset: 0x120
	// Line 275, Address: 0x1f023d4, Func Offset: 0x134
	// Line 276, Address: 0x1f023dc, Func Offset: 0x13c
	// Line 277, Address: 0x1f023f0, Func Offset: 0x150
	// Line 278, Address: 0x1f02404, Func Offset: 0x164
	// Line 279, Address: 0x1f02410, Func Offset: 0x170
	// Line 280, Address: 0x1f02424, Func Offset: 0x184
	// Line 281, Address: 0x1f0243c, Func Offset: 0x19c
	// Line 282, Address: 0x1f02450, Func Offset: 0x1b0
	// Line 284, Address: 0x1f02484, Func Offset: 0x1e4
	// Line 285, Address: 0x1f02494, Func Offset: 0x1f4
	// Line 287, Address: 0x1f024bc, Func Offset: 0x21c
	// Line 289, Address: 0x1f024e4, Func Offset: 0x244
	// Line 290, Address: 0x1f0250c, Func Offset: 0x26c
	// Line 291, Address: 0x1f02534, Func Offset: 0x294
	// Line 292, Address: 0x1f02540, Func Offset: 0x2a0
	// Line 293, Address: 0x1f0254c, Func Offset: 0x2ac
	// Line 294, Address: 0x1f02560, Func Offset: 0x2c0
	// Line 296, Address: 0x1f0256c, Func Offset: 0x2cc
	// Line 297, Address: 0x1f02570, Func Offset: 0x2d0
	// Func End, Address: 0x1f02580, Func Offset: 0x2e0
	// Line 156, Address: 0x1f022a0, Func Offset: 0
	// Line 244, Address: 0x1f022a8, Func Offset: 0x8
	// Line 247, Address: 0x1f02338, Func Offset: 0x98
	// Line 248, Address: 0x1f02350, Func Offset: 0xb0
	// Line 249, Address: 0x1f02368, Func Offset: 0xc8
	// Line 250, Address: 0x1f02374, Func Offset: 0xd4
	// Line 251, Address: 0x1f02388, Func Offset: 0xe8
	// Line 252, Address: 0x1f0239c, Func Offset: 0xfc
	// Line 253, Address: 0x1f023a8, Func Offset: 0x108
	// Line 256, Address: 0x1f023bc, Func Offset: 0x11c
	// Line 257, Address: 0x1f023cc, Func Offset: 0x12c
	// Line 258, Address: 0x1f023d4, Func Offset: 0x134
	// Line 259, Address: 0x1f023e8, Func Offset: 0x148
	// Line 261, Address: 0x1f023fc, Func Offset: 0x15c
	// Line 263, Address: 0x1f0242c, Func Offset: 0x18c
	// Line 266, Address: 0x1f02434, Func Offset: 0x194
	// Line 267, Address: 0x1f02458, Func Offset: 0x1b8
	// Line 270, Address: 0x1f02460, Func Offset: 0x1c0
	// Line 271, Address: 0x1f02478, Func Offset: 0x1d8
	// Line 272, Address: 0x1f024a0, Func Offset: 0x200
	// Line 275, Address: 0x1f024a8, Func Offset: 0x208
	// Line 276, Address: 0x1f024d4, Func Offset: 0x234
	// Line 277, Address: 0x1f024e8, Func Offset: 0x248
	// Line 280, Address: 0x1f024f0, Func Offset: 0x250
	// Line 281, Address: 0x1f024f8, Func Offset: 0x258
	// Line 285, Address: 0x1f0250c, Func Offset: 0x26c
	// Line 286, Address: 0x1f0251c, Func Offset: 0x27c
	// Line 287, Address: 0x1f02528, Func Offset: 0x288
	// Line 288, Address: 0x1f02540, Func Offset: 0x2a0
	// Line 289, Address: 0x1f02554, Func Offset: 0x2b4
	// Line 290, Address: 0x1f02578, Func Offset: 0x2d8
	// Line 291, Address: 0x1f02584, Func Offset: 0x2e4
	// Line 292, Address: 0x1f02598, Func Offset: 0x2f8
	// Line 293, Address: 0x1f025a4, Func Offset: 0x304
	// Line 296, Address: 0x1f025b8, Func Offset: 0x318
	// Line 297, Address: 0x1f025e4, Func Offset: 0x344
	// Line 300, Address: 0x1f025ec, Func Offset: 0x34c
	// Line 301, Address: 0x1f025f4, Func Offset: 0x354
	// Line 305, Address: 0x1f02608, Func Offset: 0x368
	// Line 306, Address: 0x1f02614, Func Offset: 0x374
	// Line 307, Address: 0x1f0262c, Func Offset: 0x38c
	// Line 308, Address: 0x1f02650, Func Offset: 0x3b0
	// Line 309, Address: 0x1f0265c, Func Offset: 0x3bc
	// Line 310, Address: 0x1f02668, Func Offset: 0x3c8
	// Line 313, Address: 0x1f0267c, Func Offset: 0x3dc
	// Line 314, Address: 0x1f02688, Func Offset: 0x3e8
	// Line 315, Address: 0x1f02694, Func Offset: 0x3f4
	// Line 316, Address: 0x1f026a0, Func Offset: 0x400
	// Line 317, Address: 0x1f026b4, Func Offset: 0x414
	// Line 318, Address: 0x1f026bc, Func Offset: 0x41c
	// Line 319, Address: 0x1f026c8, Func Offset: 0x428
	// Line 320, Address: 0x1f026d4, Func Offset: 0x434
	// Line 322, Address: 0x1f026fc, Func Offset: 0x45c
	// Line 324, Address: 0x1f0271c, Func Offset: 0x47c
	// Line 326, Address: 0x1f02728, Func Offset: 0x488
	// Line 327, Address: 0x1f0272c, Func Offset: 0x48c
	// Func End, Address: 0x1f0273c, Func Offset: 0x49c
	// Line 272, Address: 0x1f022a0, Func Offset: 0
	// Line 273, Address: 0x1f022a8, Func Offset: 0x8
	// Line 274, Address: 0x1f022b8, Func Offset: 0x18
	// Func End, Address: 0x1f022c8, Func Offset: 0x28
}

// 
// Start address: 0x1f02740
int EvProgVideoReplay()
{
	// Line 315, Address: 0x1f02740, Func Offset: 0
	// Line 316, Address: 0x1f0275c, Func Offset: 0x1c
	// Func End, Address: 0x1f02764, Func Offset: 0x24
	// Line 334, Address: 0x1f02740, Func Offset: 0
	// Line 335, Address: 0x1f02744, Func Offset: 0x4
	// Func End, Address: 0x1f0274c, Func Offset: 0xc
}

// 
// Start address: 0x1f02750
void EvRoomInit()
{
	int room;
	// Line 319, Address: 0x1f02750, Func Offset: 0
	// Line 334, Address: 0x1f02758, Func Offset: 0x8
	// Line 336, Address: 0x1f02788, Func Offset: 0x38
	// Line 337, Address: 0x1f027a0, Func Offset: 0x50
	// Line 338, Address: 0x1f027b4, Func Offset: 0x64
	// Line 340, Address: 0x1f027e4, Func Offset: 0x94
	// Line 341, Address: 0x1f027fc, Func Offset: 0xac
	// Line 342, Address: 0x1f0280c, Func Offset: 0xbc
	// Line 343, Address: 0x1f0282c, Func Offset: 0xdc
	// Line 344, Address: 0x1f02838, Func Offset: 0xe8
	// Line 345, Address: 0x1f0284c, Func Offset: 0xfc
	// Line 349, Address: 0x1f02860, Func Offset: 0x110
	// Line 350, Address: 0x1f0288c, Func Offset: 0x13c
	// Line 353, Address: 0x1f02894, Func Offset: 0x144
	// Line 354, Address: 0x1f028a0, Func Offset: 0x150
	// Line 355, Address: 0x1f028c0, Func Offset: 0x170
	// Line 356, Address: 0x1f028d4, Func Offset: 0x184
	// Line 357, Address: 0x1f028dc, Func Offset: 0x18c
	// Line 358, Address: 0x1f028e8, Func Offset: 0x198
	// Line 359, Address: 0x1f028f4, Func Offset: 0x1a4
	// Line 361, Address: 0x1f02900, Func Offset: 0x1b0
	// Line 362, Address: 0x1f02904, Func Offset: 0x1b4
	// Func End, Address: 0x1f02914, Func Offset: 0x1c4
	// Line 345, Address: 0x1f02750, Func Offset: 0
	// Line 367, Address: 0x1f0275c, Func Offset: 0xc
	// Line 369, Address: 0x1f0278c, Func Offset: 0x3c
	// Line 370, Address: 0x1f0279c, Func Offset: 0x4c
	// Line 371, Address: 0x1f027b0, Func Offset: 0x60
	// Line 373, Address: 0x1f027d0, Func Offset: 0x80
	// Line 374, Address: 0x1f027d8, Func Offset: 0x88
	// Line 375, Address: 0x1f027ec, Func Offset: 0x9c
	// Line 376, Address: 0x1f02800, Func Offset: 0xb0
	// Line 377, Address: 0x1f02810, Func Offset: 0xc0
	// Line 379, Address: 0x1f0282c, Func Offset: 0xdc
	// Line 380, Address: 0x1f02834, Func Offset: 0xe4
	// Line 383, Address: 0x1f02848, Func Offset: 0xf8
	// Line 384, Address: 0x1f02874, Func Offset: 0x124
	// Line 387, Address: 0x1f0287c, Func Offset: 0x12c
	// Line 388, Address: 0x1f02890, Func Offset: 0x140
	// Line 389, Address: 0x1f02898, Func Offset: 0x148
	// Line 391, Address: 0x1f028b8, Func Offset: 0x168
	// Line 392, Address: 0x1f028cc, Func Offset: 0x17c
	// Line 393, Address: 0x1f028e0, Func Offset: 0x190
	// Line 394, Address: 0x1f028f4, Func Offset: 0x1a4
	// Line 395, Address: 0x1f02900, Func Offset: 0x1b0
	// Line 396, Address: 0x1f02914, Func Offset: 0x1c4
	// Line 397, Address: 0x1f02920, Func Offset: 0x1d0
	// Line 398, Address: 0x1f02934, Func Offset: 0x1e4
	// Line 399, Address: 0x1f02944, Func Offset: 0x1f4
	// Line 401, Address: 0x1f02960, Func Offset: 0x210
	// Line 402, Address: 0x1f02968, Func Offset: 0x218
	// Line 403, Address: 0x1f02974, Func Offset: 0x224
	// Line 404, Address: 0x1f02980, Func Offset: 0x230
	// Line 405, Address: 0x1f0298c, Func Offset: 0x23c
	// Line 406, Address: 0x1f02990, Func Offset: 0x240
	// Line 407, Address: 0x1f0299c, Func Offset: 0x24c
	// Line 408, Address: 0x1f029a0, Func Offset: 0x250
	// Line 409, Address: 0x1f029ac, Func Offset: 0x25c
	// Line 411, Address: 0x1f029b8, Func Offset: 0x268
	// Line 412, Address: 0x1f029bc, Func Offset: 0x26c
	// Func End, Address: 0x1f029d0, Func Offset: 0x280
	// Line 340, Address: 0x1f02750, Func Offset: 0
	// Line 343, Address: 0x1f02758, Func Offset: 0x8
	// Line 345, Address: 0x1f02760, Func Offset: 0x10
	// Line 346, Address: 0x1f0276c, Func Offset: 0x1c
	// Line 347, Address: 0x1f02784, Func Offset: 0x34
	// Line 348, Address: 0x1f02790, Func Offset: 0x40
	// Line 350, Address: 0x1f027a4, Func Offset: 0x54
	// Func End, Address: 0x1f027b4, Func Offset: 0x64
}

// 
// Start address: 0x1f027c0
void EvAllTimeFunc()
{
	int room;
	int disp_ctrl_list[5];
	// Line 306, Address: 0x1f027c0, Func Offset: 0
	// Line 312, Address: 0x1f027c8, Func Offset: 0x8
	// Line 314, Address: 0x1f027cc, Func Offset: 0xc
	// Line 316, Address: 0x1f02800, Func Offset: 0x40
	// Line 318, Address: 0x1f02818, Func Offset: 0x58
	// Line 319, Address: 0x1f02828, Func Offset: 0x68
	// Line 321, Address: 0x1f02830, Func Offset: 0x70
	// Line 323, Address: 0x1f02848, Func Offset: 0x88
	// Line 324, Address: 0x1f02858, Func Offset: 0x98
	// Line 326, Address: 0x1f02860, Func Offset: 0xa0
	// Line 327, Address: 0x1f02878, Func Offset: 0xb8
	// Line 328, Address: 0x1f02888, Func Offset: 0xc8
	// Line 330, Address: 0x1f028b0, Func Offset: 0xf0
	// Line 331, Address: 0x1f028c0, Func Offset: 0x100
	// Line 333, Address: 0x1f028cc, Func Offset: 0x10c
	// Line 334, Address: 0x1f028dc, Func Offset: 0x11c
	// Line 338, Address: 0x1f028f4, Func Offset: 0x134
	// Line 340, Address: 0x1f02958, Func Offset: 0x198
	// Line 341, Address: 0x1f02968, Func Offset: 0x1a8
	// Line 343, Address: 0x1f02980, Func Offset: 0x1c0
	// Line 344, Address: 0x1f029a0, Func Offset: 0x1e0
	// Line 348, Address: 0x1f029fc, Func Offset: 0x23c
	// Line 349, Address: 0x1f02a08, Func Offset: 0x248
	// Func End, Address: 0x1f02a18, Func Offset: 0x258
	// Line 355, Address: 0x1f027c0, Func Offset: 0
	// Line 359, Address: 0x1f027c8, Func Offset: 0x8
	// Line 360, Address: 0x1f027d0, Func Offset: 0x10
	// Line 362, Address: 0x1f027d4, Func Offset: 0x14
	// Line 363, Address: 0x1f027e0, Func Offset: 0x20
	// Line 364, Address: 0x1f027ec, Func Offset: 0x2c
	// Line 365, Address: 0x1f02804, Func Offset: 0x44
	// Line 367, Address: 0x1f02818, Func Offset: 0x58
	// Line 369, Address: 0x1f0282c, Func Offset: 0x6c
	// Line 370, Address: 0x1f0283c, Func Offset: 0x7c
	// Line 371, Address: 0x1f02844, Func Offset: 0x84
	// Line 373, Address: 0x1f02858, Func Offset: 0x98
	// Line 375, Address: 0x1f0286c, Func Offset: 0xac
	// Line 377, Address: 0x1f0287c, Func Offset: 0xbc
	// Line 378, Address: 0x1f02884, Func Offset: 0xc4
	// Line 380, Address: 0x1f02898, Func Offset: 0xd8
	// Line 381, Address: 0x1f028b0, Func Offset: 0xf0
	// Line 384, Address: 0x1f028c4, Func Offset: 0x104
	// Line 385, Address: 0x1f028cc, Func Offset: 0x10c
	// Line 386, Address: 0x1f028dc, Func Offset: 0x11c
	// Line 390, Address: 0x1f028f0, Func Offset: 0x130
	// Line 391, Address: 0x1f028fc, Func Offset: 0x13c
	// Func End, Address: 0x1f0290c, Func Offset: 0x14c
}

// 
// Start address: 0x1f02910
void RR91_Filter()
{
	FilterParams* pfp;
	int tmp;
	int* mp;
	float campos[4];
	// Line 420, Address: 0x1f02910, Func Offset: 0
	// Line 424, Address: 0x1f02920, Func Offset: 0x10
	// Line 425, Address: 0x1f0292c, Func Offset: 0x1c
	// Line 427, Address: 0x1f02934, Func Offset: 0x24
	// Line 430, Address: 0x1f02950, Func Offset: 0x40
	// Line 433, Address: 0x1f0297c, Func Offset: 0x6c
	// Line 436, Address: 0x1f02984, Func Offset: 0x74
	// Line 439, Address: 0x1f02990, Func Offset: 0x80
	// Line 440, Address: 0x1f02998, Func Offset: 0x88
	// Line 443, Address: 0x1f029a0, Func Offset: 0x90
	// Line 444, Address: 0x1f029ac, Func Offset: 0x9c
	// Line 445, Address: 0x1f029b4, Func Offset: 0xa4
	// Line 446, Address: 0x1f029bc, Func Offset: 0xac
	// Line 447, Address: 0x1f029c4, Func Offset: 0xb4
	// Line 448, Address: 0x1f029cc, Func Offset: 0xbc
	// Line 449, Address: 0x1f029d4, Func Offset: 0xc4
	// Line 452, Address: 0x1f029d8, Func Offset: 0xc8
	// Line 455, Address: 0x1f029e0, Func Offset: 0xd0
	// Line 456, Address: 0x1f029f4, Func Offset: 0xe4
	// Line 467, Address: 0x1f029fc, Func Offset: 0xec
	// Func End, Address: 0x1f02a14, Func Offset: 0x104
}

