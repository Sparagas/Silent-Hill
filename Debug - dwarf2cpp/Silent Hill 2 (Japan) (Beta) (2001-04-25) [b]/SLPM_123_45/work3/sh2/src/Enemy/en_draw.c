typedef struct SPACK_OT_DATA;
typedef struct _CL_VHIT_WALL;
typedef union _anon0;
typedef struct SPACK_ENV_DATA;
typedef struct PAD_3D;
typedef struct _CL_HITPOLY_HEAD;
typedef struct SubCharacter;
typedef struct _CL_SELECT_MAP;
typedef struct EnLOCAL_DATA;
typedef struct _CL_VHIT_CHARA;
typedef struct SubObject;
typedef struct EnPATH_DATA;
typedef struct SPACK_STATIC_DATA;
typedef struct _CL_HITPOLY_PLANE;
typedef struct _CL_VHIT_RESULT;
typedef struct PAD_2D;
typedef union _anon1;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct PAD_INFO;
typedef struct EnCOMMUNICATION;
typedef struct shSkelton;
typedef struct EnAMBUSH_DATA;
typedef struct EnONI_DATA;
typedef struct _anon2;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct EnMKN_DATA;
typedef struct _VbWVSMATRIX;
typedef struct EnIKE_DATA;
typedef struct EnRED_DATA;
typedef struct _anon3;
typedef struct shPlayerWork;
typedef struct _CL_CHARA_LIST;
typedef struct shBattleFight;
typedef struct EnNSE_DATA;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct shBattleShot;
typedef struct EnEDB_DATA;
typedef struct EnLOCAL_WORK;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct EnPAP_DATA;
typedef struct EnSCU_DATA;
typedef struct SPACK_DATA;
typedef struct EnTYU_DATA;
typedef struct EnBOS_DATA;
typedef struct shAttackInfo;

typedef void(*type_6)(SubCharacter*);
typedef void(*type_7)(SubCharacter*);
typedef void(*type_23)(float*);
typedef void(*type_25)(SubCharacter*);
typedef void(*type_30)(SubCharacter*);

typedef float type_0[4];
typedef char type_1[2];
typedef unsigned char type_2[4];
typedef unsigned char type_3[10];
typedef unsigned char type_4[4];
typedef PAD_INFO type_5[10];
typedef unsigned char type_8[2];
typedef unsigned char type_9[2];
typedef unsigned char type_10[13];
typedef unsigned long type_11[7];
typedef float type_12[4][4];
typedef unsigned long type_13[4];
typedef float type_14[4][2];
typedef unsigned char type_15[34];
typedef int type_16[2];
typedef float type_17[4];
typedef float type_18[4][4];
typedef _CL_CHARA_LIST type_19[32];
typedef _CL_CHARA_LIST type_20[32][2];
typedef float type_21[4][2];
typedef unsigned char type_22[2];
typedef unsigned char type_24[10];
typedef EnLOCAL_DATA type_26[64];
typedef EnCOMMUNICATION type_27[8];
typedef shAttackInfo type_28[46];
typedef char type_29[3];
typedef int type_31[4];
typedef unsigned char type_32[4];
typedef float type_33[4];
typedef float type_34[4][4];
typedef float type_35[4];

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

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
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

struct PAD_3D
{
	char round_way;
	unsigned char reserved1;
	unsigned char lslide;
	unsigned char rslide;
	unsigned char lturn180;
	unsigned char rturn180;
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

struct SubCharacter
{
	int index;
	unsigned int status;
	unsigned int sub_status;
	unsigned int sub_st;
	short kind;
	short id;
	unsigned int step;
	_anon2 pos;
	_anon2 rot;
	_anon2 pos_spd;
	_anon2 rot_spd;
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
	_anon2 b_pos;
	_anon2 b_rot;
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

struct _CL_SELECT_MAP
{
	unsigned char* base;
	unsigned char sect;
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
	char anim;
	unsigned char anim_loop;
	char hoge[2];
	unsigned short flag;
	short anim_s;
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
	float size;
	float new_size;
	float tall;
	float new_tall;
	float center_y;
	float new_center;
	float eye_y;
	float new_eye;
	float p_dist;
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
		EnBOS_DATA bos;
	};
};

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

struct SubObject
{
	unsigned int status;
	unsigned int sub_status;
	unsigned int sub_st;
	short kind;
	short id;
	unsigned int step;
	_anon2 pos;
	_anon2 rot;
	_anon2 pos_spd;
	_anon2 rot_spd;
	_anon3 mat;
	void(*function)(SubCharacter*);
	void(*effecter_function)(SubCharacter*);
	SubObject* pre;
	SubObject* next;
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

struct SPACK_STATIC_DATA
{
	unsigned short GifNLOOP;
	unsigned short DmaQwc;
	unsigned int PRE_PRIM_FLG_NREG;
	unsigned long REGS;
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

struct _CL_VHIT_RESULT
{
	int kind;
	_anon1 hobj;
};

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
};

union _anon1
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
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

struct EnCOMMUNICATION
{
	float pos[4];
	int kind;
	int type;
	int time;
	float dist;
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon3 src_m;
	_anon2 src_t;
	_anon3 des_m;
	_anon2 des_t;
	_anon2 axis;
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

struct EnAMBUSH_DATA
{
	short pl_x_min;
	short pl_z_min;
	short pl_x_max;
	short pl_z_max;
	short pos_x;
	short pos_z;
	float dir;
};

struct EnONI_DATA
{
	char id;
	short timer2;
	void* other;
};

struct _anon2
{
	float x;
	float y;
	float z;
	float w;
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
	JMS_ST_L_STEP,
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

struct EnMKN_DATA
{
	float stpos[4];
	float target[4];
	short frame;
};

struct _VbWVSMATRIX
{
	float wvm[4][4];
	float vsm[4][4];
	float wsm[4][4];
};

struct EnIKE_DATA
{
	float handpos[4];
	char direc;
};

struct EnRED_DATA
{
	int dummy;
};

struct _anon3
{
	float d[4][4];
};

struct shPlayerWork
{
	SubCharacter* player;
	_anon2 dist_rot;
	_anon2 dist_pos;
	_anon2 pos;
	_anon2 rot;
	float rot_y;
	float inner_to_wall;
	float dist_to_wall;
	float dir_tgt_2d;
	float dir_now_2d;
	unsigned char map_mode;
	unsigned char step;
	unsigned char sub_step;
	unsigned short timer;
	unsigned short timer2;
	unsigned char allbody_now;
	_JAMES_UPPER_STATUS upper_now;
	_JAMES_LOWER_STATUS lower_now;
	unsigned char allbody_prev;
	_JAMES_UPPER_STATUS upper_prev;
	_JAMES_LOWER_STATUS lower_prev;
	unsigned char attack_now;
	unsigned char attack_prev;
	unsigned int upper_st_flg;
	unsigned int lower_st_flg;
	unsigned int u_anime_st_flg;
	unsigned int l_anime_st_flg;
	unsigned int anime_pause;
	unsigned int move_st_flg;
	unsigned int attack_st_flg;
	unsigned int damage_st_flg;
	float light_pos[4];
	float light_vec[4];
	float light_vec_neck[4];
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
	unsigned char se_upper[4];
	unsigned char se_foot[4];
	unsigned char d_shock;
	PAD_INFO pad[10];
	unsigned char ctrl_unit;
	unsigned char ctrl_inputing;
	unsigned char cfg_hold;
	unsigned char cfg_lock;
	unsigned char cfg_move;
	int event_anime;
	_anon2 tgt_body_angle;
	_anon2 tgt_neck_angle;
	_anon2 tgt_arms_angle;
	unsigned char motion_no;
	unsigned char hold_chg[2];
	unsigned char hold_loop[2];
	SubCharacter* target;
	SubCharacter* look_tgt;
	SubObject* look_obj;
	float non_input;
	float running_time;
	float muteki_time;
	float csaw_time;
	float hp_recover;
	int tired;
	int tired_max;
	int spirit;
	unsigned int game_st_flg;
	SubCharacter* enemy_liedown;
	unsigned char enemy_around;
	unsigned char enemy_atk_area;
	unsigned char enemy_near;
	unsigned char light_on;
	unsigned char radio_on;
	unsigned char lock_on;
	unsigned char running;
	unsigned char cannot_run;
	unsigned char fall_type;
	unsigned char reload;
	unsigned char weapon;
	unsigned char act_with_wep;
	unsigned char shoot_val;
	unsigned char reload_val;
	unsigned char atk_type;
	unsigned char atk_reserve[2];
	unsigned char attack_ok;
	char hold_type;
	unsigned char dead;
	unsigned char no_damage;
	unsigned char atk_count;
	unsigned short damage_no;
	unsigned short attack_no;
};

struct _CL_CHARA_LIST
{
	_CL_HITPOLY_COLUMN col;
	_CL_HITPOLY_COLUMN wcol;
	SubCharacter* sc;
	float opos[4];
	float pos[4];
	float mvec[4];
	float wallcv[4];
	float mang;
	int wflg;
	float ccvec[4];
	void(*heightfunc)(float*);
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct EnNSE_DATA
{
	float speed;
	float tspeed;
	char avoid;
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
	JMS_ST_U_STEP,
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

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
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
};

struct EnLOCAL_WORK
{
	EnLOCAL_DATA Data[64];
	EnCOMMUNICATION Communication[8];
	int CommunicationNum;
	EnLOCAL_DATA* This;
	_CL_VHIT_RESULT HitResult;
	int Max3DSounds;
	EnLOCAL_DATA* view_data;
	short view_x;
	short view_y;
	float fps;
	float spf;
	unsigned int dbflag;
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

struct EnPAP_DATA
{
	float target[4];
};

struct EnSCU_DATA
{
	float stpos[4];
	float target[4];
	EnAMBUSH_DATA* ambush;
	int count;
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
};

struct EnTYU_DATA
{
	float point[4];
	EnCOMMUNICATION* tcomm;
};

struct EnBOS_DATA
{
	int dummy;
};

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon0 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
unsigned long en_color[7];
_CL_CHARA_LIST clCharaList[32][2];
int clCharaListUse[2];
int clCharaListAct;
shPlayerWork sh2jms;
EnLOCAL_WORK enLocalWork;
SPACK_DATA spack;
_VbWVSMATRIX VbWvsMatrix;

void enDrawExec();
void draw_wall2(float* wall_pos1, float* wall_pos2, float* ppos, float prot[4], float* vpos);
void draw_column(float* column_pos, float size, float* ppos, float prot[4], float* vpos);
void enDrawTriangle(float* pos, float rot, int color, float size);
void enDrawBox(float* pos, float rot, int color, float size1, float size2);
int enViewSCUColor(EnLOCAL_DATA* dp);
int enViewMKNColor(EnLOCAL_DATA* dp);
int enViewNSEColor(EnLOCAL_DATA* dp);
int enViewTYUColor(EnLOCAL_DATA* dp);
int enViewEDBColor(EnLOCAL_DATA* dp);
int enViewREDColor(EnLOCAL_DATA* dp);
int enViewONIColor(EnLOCAL_DATA* dp);
int enViewIKEColor(EnLOCAL_DATA* dp);
int enViewPAPColor(EnLOCAL_DATA* dp);
int enViewBOSColor();
void enDrawDot(float* pos, unsigned int color);
void enDrawGauge(EnLOCAL_DATA* dp, float* pos);
void enDrawHpGauge(float hp_rate, float* pos);

// 
// Start address: 0x150ff0
void enDrawExec()
{
	int kind;
	int usemax;
	int act;
	int* ptr;
	_CL_HITPOLY_COLUMN* pl2;
	_CL_HITPOLY_COLUMN* clmn;
	_CL_HITPOLY_PLANE* pl;
	_CL_HITPOLY_PLANE* wall;
	_CL_SELECT_MAP* smapsv;
	_CL_SELECT_MAP* smap;
	int j;
	int j;
	int j;
	int j;
	int j;
	int j;
	int j;
	int j;
	int j;
	int j;
	unsigned long c;
	float prot[4][4];
	float rot;
	float vec[4];
	float vpos[4];
	float pr;
	float* ppos;
	int i;
	EnLOCAL_DATA* dp;
	// Line 75, Address: 0x150ff0, Func Offset: 0
	// Line 78, Address: 0x151018, Func Offset: 0x28
	// Line 79, Address: 0x151024, Func Offset: 0x34
	// Line 85, Address: 0x15103c, Func Offset: 0x4c
	// Line 86, Address: 0x15105c, Func Offset: 0x6c
	// Line 87, Address: 0x151094, Func Offset: 0xa4
	// Line 89, Address: 0x15109c, Func Offset: 0xac
	// Line 90, Address: 0x1510b0, Func Offset: 0xc0
	// Line 91, Address: 0x1510b8, Func Offset: 0xc8
	// Line 92, Address: 0x1510c4, Func Offset: 0xd4
	// Line 93, Address: 0x1510d0, Func Offset: 0xe0
	// Line 94, Address: 0x1510f8, Func Offset: 0x108
	// Line 96, Address: 0x15110c, Func Offset: 0x11c
	// Line 97, Address: 0x151114, Func Offset: 0x124
	// Line 98, Address: 0x151120, Func Offset: 0x130
	// Line 99, Address: 0x15112c, Func Offset: 0x13c
	// Line 100, Address: 0x151148, Func Offset: 0x158
	// Line 102, Address: 0x151198, Func Offset: 0x1a8
	// Line 103, Address: 0x1511cc, Func Offset: 0x1dc
	// Line 104, Address: 0x1511e8, Func Offset: 0x1f8
	// Line 105, Address: 0x1511f4, Func Offset: 0x204
	// Line 107, Address: 0x151228, Func Offset: 0x238
	// Line 114, Address: 0x15123c, Func Offset: 0x24c
	// Line 115, Address: 0x151258, Func Offset: 0x268
	// Line 117, Address: 0x151260, Func Offset: 0x270
	// Line 124, Address: 0x151274, Func Offset: 0x284
	// Line 125, Address: 0x151290, Func Offset: 0x2a0
	// Line 127, Address: 0x151298, Func Offset: 0x2a8
	// Line 134, Address: 0x1512ac, Func Offset: 0x2bc
	// Line 135, Address: 0x1512c8, Func Offset: 0x2d8
	// Line 137, Address: 0x1512d0, Func Offset: 0x2e0
	// Line 138, Address: 0x1512e4, Func Offset: 0x2f4
	// Line 139, Address: 0x151300, Func Offset: 0x310
	// Line 147, Address: 0x151308, Func Offset: 0x318
	// Line 154, Address: 0x15131c, Func Offset: 0x32c
	// Line 155, Address: 0x151338, Func Offset: 0x348
	// Line 157, Address: 0x151340, Func Offset: 0x350
	// Line 158, Address: 0x151354, Func Offset: 0x364
	// Line 159, Address: 0x151370, Func Offset: 0x380
	// Line 167, Address: 0x151378, Func Offset: 0x388
	// Line 168, Address: 0x15138c, Func Offset: 0x39c
	// Line 169, Address: 0x1513a8, Func Offset: 0x3b8
	// Line 177, Address: 0x1513b0, Func Offset: 0x3c0
	// Line 179, Address: 0x1513e8, Func Offset: 0x3f8
	// Line 187, Address: 0x1513f0, Func Offset: 0x400
	// Line 189, Address: 0x151434, Func Offset: 0x444
	// Line 197, Address: 0x15143c, Func Offset: 0x44c
	// Line 199, Address: 0x151480, Func Offset: 0x490
	// Line 207, Address: 0x151488, Func Offset: 0x498
	// Line 208, Address: 0x151490, Func Offset: 0x4a0
	// Line 210, Address: 0x1514ac, Func Offset: 0x4bc
	// Line 211, Address: 0x1514b0, Func Offset: 0x4c0
	// Line 212, Address: 0x1514c4, Func Offset: 0x4d4
	// Line 213, Address: 0x1514d4, Func Offset: 0x4e4
	// Line 214, Address: 0x1514e4, Func Offset: 0x4f4
	// Line 216, Address: 0x1514e8, Func Offset: 0x4f8
	// Line 218, Address: 0x1514fc, Func Offset: 0x50c
	// Line 220, Address: 0x151508, Func Offset: 0x518
	// Line 224, Address: 0x151560, Func Offset: 0x570
	// Line 225, Address: 0x151574, Func Offset: 0x584
	// Line 226, Address: 0x151584, Func Offset: 0x594
	// Line 227, Address: 0x15159c, Func Offset: 0x5ac
	// Line 235, Address: 0x1515b4, Func Offset: 0x5c4
	// Line 236, Address: 0x1515c8, Func Offset: 0x5d8
	// Line 239, Address: 0x1515ec, Func Offset: 0x5fc
	// Line 240, Address: 0x1515f4, Func Offset: 0x604
	// Line 242, Address: 0x151604, Func Offset: 0x614
	// Line 244, Address: 0x151624, Func Offset: 0x634
	// Line 245, Address: 0x15162c, Func Offset: 0x63c
	// Line 246, Address: 0x151640, Func Offset: 0x650
	// Line 247, Address: 0x151650, Func Offset: 0x660
	// Line 248, Address: 0x15166c, Func Offset: 0x67c
	// Line 249, Address: 0x151688, Func Offset: 0x698
	// Line 250, Address: 0x1516a4, Func Offset: 0x6b4
	// Line 251, Address: 0x1516ac, Func Offset: 0x6bc
	// Line 252, Address: 0x1516c8, Func Offset: 0x6d8
	// Line 253, Address: 0x1516e4, Func Offset: 0x6f4
	// Line 254, Address: 0x151700, Func Offset: 0x710
	// Line 255, Address: 0x15171c, Func Offset: 0x72c
	// Line 256, Address: 0x151720, Func Offset: 0x730
	// Line 257, Address: 0x151724, Func Offset: 0x734
	// Line 258, Address: 0x151738, Func Offset: 0x748
	// Line 260, Address: 0x151748, Func Offset: 0x758
	// Line 262, Address: 0x151768, Func Offset: 0x778
	// Line 263, Address: 0x151770, Func Offset: 0x780
	// Line 264, Address: 0x151784, Func Offset: 0x794
	// Line 265, Address: 0x151794, Func Offset: 0x7a4
	// Line 266, Address: 0x1517b0, Func Offset: 0x7c0
	// Line 267, Address: 0x1517cc, Func Offset: 0x7dc
	// Line 268, Address: 0x1517e8, Func Offset: 0x7f8
	// Line 269, Address: 0x1517f0, Func Offset: 0x800
	// Line 270, Address: 0x15180c, Func Offset: 0x81c
	// Line 271, Address: 0x151828, Func Offset: 0x838
	// Line 272, Address: 0x151844, Func Offset: 0x854
	// Line 274, Address: 0x151860, Func Offset: 0x870
	// Line 275, Address: 0x151864, Func Offset: 0x874
	// Line 276, Address: 0x151878, Func Offset: 0x888
	// Line 277, Address: 0x15187c, Func Offset: 0x88c
	// Line 278, Address: 0x15188c, Func Offset: 0x89c
	// Line 279, Address: 0x151894, Func Offset: 0x8a4
	// Line 281, Address: 0x151898, Func Offset: 0x8a8
	// Line 284, Address: 0x1518c0, Func Offset: 0x8d0
	// Line 285, Address: 0x1518c8, Func Offset: 0x8d8
	// Line 287, Address: 0x1518d8, Func Offset: 0x8e8
	// Line 289, Address: 0x1518f8, Func Offset: 0x908
	// Line 290, Address: 0x151900, Func Offset: 0x910
	// Line 291, Address: 0x151914, Func Offset: 0x924
	// Line 292, Address: 0x151930, Func Offset: 0x940
	// Line 293, Address: 0x151934, Func Offset: 0x944
	// Line 294, Address: 0x151948, Func Offset: 0x958
	// Line 295, Address: 0x15194c, Func Offset: 0x95c
	// Line 297, Address: 0x15195c, Func Offset: 0x96c
	// Line 298, Address: 0x15197c, Func Offset: 0x98c
	// Line 299, Address: 0x151990, Func Offset: 0x9a0
	// Line 300, Address: 0x15199c, Func Offset: 0x9ac
	// Line 301, Address: 0x1519d4, Func Offset: 0x9e4
	// Line 305, Address: 0x151a08, Func Offset: 0xa18
	// Line 307, Address: 0x151a74, Func Offset: 0xa84
	// Line 308, Address: 0x151a8c, Func Offset: 0xa9c
	// Line 310, Address: 0x151a94, Func Offset: 0xaa4
	// Func End, Address: 0x151ac4, Func Offset: 0xad4
}

// 
// Start address: 0x151ad0
void draw_wall2(float* wall_pos1, float* wall_pos2, float* ppos, float prot[4], float* vpos)
{
	int scr[4];
	float vec2[4];
	float vec[4];
	// Line 361, Address: 0x151ad0, Func Offset: 0
	// Line 364, Address: 0x151ad4, Func Offset: 0x4
	// Line 365, Address: 0x151adc, Func Offset: 0xc
	// Line 366, Address: 0x151ae8, Func Offset: 0x18
	// Line 367, Address: 0x151afc, Func Offset: 0x2c
	// Line 368, Address: 0x151b10, Func Offset: 0x40
	// Line 371, Address: 0x151bb0, Func Offset: 0xe0
	// Line 372, Address: 0x151bb8, Func Offset: 0xe8
	// Line 374, Address: 0x151c0c, Func Offset: 0x13c
	// Line 375, Address: 0x151c28, Func Offset: 0x158
	// Line 376, Address: 0x151c68, Func Offset: 0x198
	// Line 377, Address: 0x151c88, Func Offset: 0x1b8
	// Line 378, Address: 0x151c90, Func Offset: 0x1c0
	// Line 380, Address: 0x151cb0, Func Offset: 0x1e0
	// Line 381, Address: 0x151ce0, Func Offset: 0x210
	// Line 382, Address: 0x151cf8, Func Offset: 0x228
	// Line 383, Address: 0x151d30, Func Offset: 0x260
	// Line 384, Address: 0x151d7c, Func Offset: 0x2ac
	// Line 385, Address: 0x151da8, Func Offset: 0x2d8
	// Line 386, Address: 0x151dd8, Func Offset: 0x308
	// Line 387, Address: 0x151df0, Func Offset: 0x320
	// Line 388, Address: 0x151e28, Func Offset: 0x358
	// Line 389, Address: 0x151e74, Func Offset: 0x3a4
	// Line 390, Address: 0x151ea0, Func Offset: 0x3d0
	// Func End, Address: 0x151eac, Func Offset: 0x3dc
}

// 
// Start address: 0x151eb0
void draw_column(float* column_pos, float size, float* ppos, float prot[4], float* vpos)
{
	int scr[4];
	float vec2[4];
	float vec[4];
	// Line 393, Address: 0x151eb0, Func Offset: 0
	// Line 396, Address: 0x151eb4, Func Offset: 0x4
	// Line 397, Address: 0x151ebc, Func Offset: 0xc
	// Line 398, Address: 0x151ec8, Func Offset: 0x18
	// Line 399, Address: 0x151edc, Func Offset: 0x2c
	// Line 400, Address: 0x151f2c, Func Offset: 0x7c
	// Line 401, Address: 0x151f34, Func Offset: 0x84
	// Line 402, Address: 0x151f50, Func Offset: 0xa0
	// Line 403, Address: 0x151f70, Func Offset: 0xc0
	// Line 404, Address: 0x151f80, Func Offset: 0xd0
	// Line 405, Address: 0x151f8c, Func Offset: 0xdc
	// Line 406, Address: 0x151fbc, Func Offset: 0x10c
	// Line 407, Address: 0x151fd4, Func Offset: 0x124
	// Line 408, Address: 0x15200c, Func Offset: 0x15c
	// Line 409, Address: 0x152058, Func Offset: 0x1a8
	// Line 410, Address: 0x152084, Func Offset: 0x1d4
	// Line 411, Address: 0x152094, Func Offset: 0x1e4
	// Line 412, Address: 0x1520a0, Func Offset: 0x1f0
	// Line 413, Address: 0x1520d0, Func Offset: 0x220
	// Line 414, Address: 0x1520e8, Func Offset: 0x238
	// Line 415, Address: 0x152120, Func Offset: 0x270
	// Line 416, Address: 0x15216c, Func Offset: 0x2bc
	// Line 417, Address: 0x152198, Func Offset: 0x2e8
	// Line 418, Address: 0x1521a8, Func Offset: 0x2f8
	// Line 419, Address: 0x1521b4, Func Offset: 0x304
	// Line 420, Address: 0x1521e4, Func Offset: 0x334
	// Line 421, Address: 0x1521fc, Func Offset: 0x34c
	// Line 422, Address: 0x152234, Func Offset: 0x384
	// Line 423, Address: 0x152280, Func Offset: 0x3d0
	// Line 424, Address: 0x1522ac, Func Offset: 0x3fc
	// Line 425, Address: 0x1522bc, Func Offset: 0x40c
	// Line 426, Address: 0x1522c8, Func Offset: 0x418
	// Line 427, Address: 0x1522f8, Func Offset: 0x448
	// Line 428, Address: 0x152310, Func Offset: 0x460
	// Line 429, Address: 0x152348, Func Offset: 0x498
	// Line 430, Address: 0x152394, Func Offset: 0x4e4
	// Line 431, Address: 0x1523c0, Func Offset: 0x510
	// Func End, Address: 0x1523cc, Func Offset: 0x51c
}

// 
// Start address: 0x1523d0
void enDrawTriangle(float* pos, float rot, int color, float size)
{
	float dy;
	float dx;
	float y;
	float x;
	// Line 440, Address: 0x1523d0, Func Offset: 0
	// Line 442, Address: 0x1523fc, Func Offset: 0x2c
	// Line 443, Address: 0x152400, Func Offset: 0x30
	// Line 444, Address: 0x152404, Func Offset: 0x34
	// Line 445, Address: 0x152414, Func Offset: 0x44
	// Line 446, Address: 0x152424, Func Offset: 0x54
	// Line 448, Address: 0x15244c, Func Offset: 0x7c
	// Line 449, Address: 0x152468, Func Offset: 0x98
	// Line 450, Address: 0x152494, Func Offset: 0xc4
	// Line 451, Address: 0x152558, Func Offset: 0x188
	// Line 452, Address: 0x152624, Func Offset: 0x254
	// Line 453, Address: 0x1526f0, Func Offset: 0x320
	// Line 454, Address: 0x1526f8, Func Offset: 0x328
	// Func End, Address: 0x152720, Func Offset: 0x350
}

// 
// Start address: 0x152720
void enDrawBox(float* pos, float rot, int color, float size1, float size2)
{
	float dy;
	float dx;
	float y;
	float x;
	// Line 459, Address: 0x152720, Func Offset: 0
	// Line 461, Address: 0x152754, Func Offset: 0x34
	// Line 462, Address: 0x152758, Func Offset: 0x38
	// Line 463, Address: 0x15275c, Func Offset: 0x3c
	// Line 464, Address: 0x15276c, Func Offset: 0x4c
	// Line 465, Address: 0x15277c, Func Offset: 0x5c
	// Line 467, Address: 0x1527a4, Func Offset: 0x84
	// Line 468, Address: 0x1527c0, Func Offset: 0xa0
	// Line 469, Address: 0x1527ec, Func Offset: 0xcc
	// Line 472, Address: 0x1528c8, Func Offset: 0x1a8
	// Line 475, Address: 0x1529a4, Func Offset: 0x284
	// Line 478, Address: 0x152a80, Func Offset: 0x360
	// Line 481, Address: 0x152b5c, Func Offset: 0x43c
	// Line 482, Address: 0x152b64, Func Offset: 0x444
	// Func End, Address: 0x152b90, Func Offset: 0x470
}

// 
// Start address: 0x152b90
int enViewSCUColor(EnLOCAL_DATA* dp)
{
	int c;
	// Line 485, Address: 0x152b90, Func Offset: 0
	// Line 486, Address: 0x152b9c, Func Offset: 0xc
	// Line 487, Address: 0x152ba0, Func Offset: 0x10
	// Line 488, Address: 0x152bd8, Func Offset: 0x48
	// Line 489, Address: 0x152bf0, Func Offset: 0x60
	// Line 490, Address: 0x152bf4, Func Offset: 0x64
	// Line 491, Address: 0x152bfc, Func Offset: 0x6c
	// Line 493, Address: 0x152c00, Func Offset: 0x70
	// Line 494, Address: 0x152c40, Func Offset: 0xb0
	// Line 495, Address: 0x152c44, Func Offset: 0xb4
	// Line 496, Address: 0x152c84, Func Offset: 0xf4
	// Line 497, Address: 0x152c88, Func Offset: 0xf8
	// Line 498, Address: 0x152cac, Func Offset: 0x11c
	// Line 499, Address: 0x152cb0, Func Offset: 0x120
	// Line 501, Address: 0x152d28, Func Offset: 0x198
	// Line 503, Address: 0x152d2c, Func Offset: 0x19c
	// Line 504, Address: 0x152d30, Func Offset: 0x1a0
	// Func End, Address: 0x152d40, Func Offset: 0x1b0
}

// 
// Start address: 0x152d40
int enViewMKNColor(EnLOCAL_DATA* dp)
{
	int c;
	// Line 507, Address: 0x152d40, Func Offset: 0
	// Line 508, Address: 0x152d4c, Func Offset: 0xc
	// Line 509, Address: 0x152d50, Func Offset: 0x10
	// Line 510, Address: 0x152d6c, Func Offset: 0x2c
	// Line 511, Address: 0x152da4, Func Offset: 0x64
	// Line 512, Address: 0x152da8, Func Offset: 0x68
	// Line 513, Address: 0x152db0, Func Offset: 0x70
	// Line 515, Address: 0x152db4, Func Offset: 0x74
	// Line 516, Address: 0x152dd8, Func Offset: 0x98
	// Line 517, Address: 0x152ddc, Func Offset: 0x9c
	// Line 519, Address: 0x152e38, Func Offset: 0xf8
	// Line 520, Address: 0x152e3c, Func Offset: 0xfc
	// Line 521, Address: 0x152e60, Func Offset: 0x120
	// Line 522, Address: 0x152e64, Func Offset: 0x124
	// Line 524, Address: 0x152edc, Func Offset: 0x19c
	// Line 526, Address: 0x152ee0, Func Offset: 0x1a0
	// Line 527, Address: 0x152ee4, Func Offset: 0x1a4
	// Func End, Address: 0x152ef4, Func Offset: 0x1b4
}

// 
// Start address: 0x152f00
int enViewNSEColor(EnLOCAL_DATA* dp)
{
	int c;
	// Line 530, Address: 0x152f00, Func Offset: 0
	// Line 531, Address: 0x152f0c, Func Offset: 0xc
	// Line 532, Address: 0x152f10, Func Offset: 0x10
	// Line 533, Address: 0x152f2c, Func Offset: 0x2c
	// Line 534, Address: 0x152f44, Func Offset: 0x44
	// Line 535, Address: 0x152f48, Func Offset: 0x48
	// Line 536, Address: 0x152f50, Func Offset: 0x50
	// Line 538, Address: 0x152f54, Func Offset: 0x54
	// Line 539, Address: 0x152f94, Func Offset: 0x94
	// Line 540, Address: 0x152f98, Func Offset: 0x98
	// Line 541, Address: 0x152fbc, Func Offset: 0xbc
	// Line 542, Address: 0x152fc0, Func Offset: 0xc0
	// Line 543, Address: 0x152fe4, Func Offset: 0xe4
	// Line 544, Address: 0x152fe8, Func Offset: 0xe8
	// Line 546, Address: 0x153060, Func Offset: 0x160
	// Line 548, Address: 0x153064, Func Offset: 0x164
	// Line 549, Address: 0x153068, Func Offset: 0x168
	// Func End, Address: 0x153078, Func Offset: 0x178
}

// 
// Start address: 0x153080
int enViewTYUColor(EnLOCAL_DATA* dp)
{
	int c;
	// Line 552, Address: 0x153080, Func Offset: 0
	// Line 553, Address: 0x15308c, Func Offset: 0xc
	// Line 554, Address: 0x153090, Func Offset: 0x10
	// Line 556, Address: 0x1530c8, Func Offset: 0x48
	// Line 557, Address: 0x1530cc, Func Offset: 0x4c
	// Line 559, Address: 0x1530d4, Func Offset: 0x54
	// Line 560, Address: 0x1530d8, Func Offset: 0x58
	// Line 562, Address: 0x1530e0, Func Offset: 0x60
	// Line 563, Address: 0x1530e4, Func Offset: 0x64
	// Line 565, Address: 0x1530ec, Func Offset: 0x6c
	// Line 566, Address: 0x1530f0, Func Offset: 0x70
	// Line 568, Address: 0x1530f8, Func Offset: 0x78
	// Line 569, Address: 0x1530fc, Func Offset: 0x7c
	// Line 571, Address: 0x153104, Func Offset: 0x84
	// Line 574, Address: 0x153108, Func Offset: 0x88
	// Line 575, Address: 0x15310c, Func Offset: 0x8c
	// Func End, Address: 0x15311c, Func Offset: 0x9c
}

// 
// Start address: 0x153120
int enViewEDBColor(EnLOCAL_DATA* dp)
{
	int c;
	// Line 578, Address: 0x153120, Func Offset: 0
	// Line 579, Address: 0x15312c, Func Offset: 0xc
	// Line 580, Address: 0x153130, Func Offset: 0x10
	// Line 581, Address: 0x15314c, Func Offset: 0x2c
	// Line 582, Address: 0x153150, Func Offset: 0x30
	// Line 586, Address: 0x1531e8, Func Offset: 0xc8
	// Line 587, Address: 0x1531ec, Func Offset: 0xcc
	// Line 589, Address: 0x1531f4, Func Offset: 0xd4
	// Line 590, Address: 0x1531f8, Func Offset: 0xd8
	// Line 593, Address: 0x153200, Func Offset: 0xe0
	// Line 594, Address: 0x153204, Func Offset: 0xe4
	// Line 597, Address: 0x15320c, Func Offset: 0xec
	// Line 598, Address: 0x153210, Func Offset: 0xf0
	// Line 600, Address: 0x153218, Func Offset: 0xf8
	// Line 603, Address: 0x15321c, Func Offset: 0xfc
	// Line 604, Address: 0x153220, Func Offset: 0x100
	// Func End, Address: 0x153230, Func Offset: 0x110
}

// 
// Start address: 0x153230
int enViewREDColor(EnLOCAL_DATA* dp)
{
	int c;
	// Line 607, Address: 0x153230, Func Offset: 0
	// Line 608, Address: 0x15323c, Func Offset: 0xc
	// Line 609, Address: 0x153240, Func Offset: 0x10
	// Line 610, Address: 0x15325c, Func Offset: 0x2c
	// Line 611, Address: 0x153260, Func Offset: 0x30
	// Line 613, Address: 0x1532bc, Func Offset: 0x8c
	// Line 614, Address: 0x1532dc, Func Offset: 0xac
	// Line 615, Address: 0x1532e0, Func Offset: 0xb0
	// Line 616, Address: 0x153300, Func Offset: 0xd0
	// Line 617, Address: 0x153304, Func Offset: 0xd4
	// Line 618, Address: 0x15330c, Func Offset: 0xdc
	// Line 620, Address: 0x153310, Func Offset: 0xe0
	// Line 625, Address: 0x153318, Func Offset: 0xe8
	// Line 628, Address: 0x15331c, Func Offset: 0xec
	// Line 629, Address: 0x153320, Func Offset: 0xf0
	// Func End, Address: 0x153330, Func Offset: 0x100
}

// 
// Start address: 0x153330
int enViewONIColor(EnLOCAL_DATA* dp)
{
	int c;
	// Line 632, Address: 0x153330, Func Offset: 0
	// Line 633, Address: 0x15333c, Func Offset: 0xc
	// Line 634, Address: 0x153340, Func Offset: 0x10
	// Line 635, Address: 0x15335c, Func Offset: 0x2c
	// Line 636, Address: 0x153378, Func Offset: 0x48
	// Line 637, Address: 0x15337c, Func Offset: 0x4c
	// Line 638, Address: 0x153384, Func Offset: 0x54
	// Line 640, Address: 0x153388, Func Offset: 0x58
	// Line 641, Address: 0x1533ac, Func Offset: 0x7c
	// Line 642, Address: 0x1533b0, Func Offset: 0x80
	// Line 644, Address: 0x1533f0, Func Offset: 0xc0
	// Line 645, Address: 0x153408, Func Offset: 0xd8
	// Line 646, Address: 0x15340c, Func Offset: 0xdc
	// Line 647, Address: 0x153430, Func Offset: 0x100
	// Line 648, Address: 0x153434, Func Offset: 0x104
	// Line 649, Address: 0x15343c, Func Offset: 0x10c
	// Line 651, Address: 0x153440, Func Offset: 0x110
	// Line 657, Address: 0x153448, Func Offset: 0x118
	// Line 660, Address: 0x15344c, Func Offset: 0x11c
	// Line 661, Address: 0x153450, Func Offset: 0x120
	// Func End, Address: 0x153460, Func Offset: 0x130
}

// 
// Start address: 0x153460
int enViewIKEColor(EnLOCAL_DATA* dp)
{
	int c;
	// Line 664, Address: 0x153460, Func Offset: 0
	// Line 665, Address: 0x15346c, Func Offset: 0xc
	// Line 666, Address: 0x153470, Func Offset: 0x10
	// Line 668, Address: 0x1534a8, Func Offset: 0x48
	// Line 669, Address: 0x1534c4, Func Offset: 0x64
	// Line 670, Address: 0x1534c8, Func Offset: 0x68
	// Line 671, Address: 0x1534e8, Func Offset: 0x88
	// Line 672, Address: 0x1534ec, Func Offset: 0x8c
	// Line 673, Address: 0x1534f4, Func Offset: 0x94
	// Line 675, Address: 0x1534f8, Func Offset: 0x98
	// Line 682, Address: 0x153500, Func Offset: 0xa0
	// Line 683, Address: 0x153504, Func Offset: 0xa4
	// Line 694, Address: 0x15350c, Func Offset: 0xac
	// Line 695, Address: 0x153510, Func Offset: 0xb0
	// Line 697, Address: 0x153518, Func Offset: 0xb8
	// Line 700, Address: 0x15351c, Func Offset: 0xbc
	// Line 701, Address: 0x153520, Func Offset: 0xc0
	// Func End, Address: 0x153530, Func Offset: 0xd0
}

// 
// Start address: 0x153530
int enViewPAPColor(EnLOCAL_DATA* dp)
{
	int c;
	// Line 704, Address: 0x153530, Func Offset: 0
	// Line 705, Address: 0x15353c, Func Offset: 0xc
	// Line 706, Address: 0x153540, Func Offset: 0x10
	// Line 707, Address: 0x15355c, Func Offset: 0x2c
	// Line 708, Address: 0x153560, Func Offset: 0x30
	// Line 710, Address: 0x1535d4, Func Offset: 0xa4
	// Line 711, Address: 0x1535f0, Func Offset: 0xc0
	// Line 712, Address: 0x1535f4, Func Offset: 0xc4
	// Line 713, Address: 0x1535fc, Func Offset: 0xcc
	// Line 715, Address: 0x153600, Func Offset: 0xd0
	// Line 719, Address: 0x153608, Func Offset: 0xd8
	// Line 720, Address: 0x15360c, Func Offset: 0xdc
	// Line 723, Address: 0x153614, Func Offset: 0xe4
	// Line 726, Address: 0x153618, Func Offset: 0xe8
	// Line 727, Address: 0x15361c, Func Offset: 0xec
	// Func End, Address: 0x15362c, Func Offset: 0xfc
}

// 
// Start address: 0x153630
int enViewBOSColor()
{
	// Line 730, Address: 0x153630, Func Offset: 0
	// Line 731, Address: 0x153634, Func Offset: 0x4
	// Line 732, Address: 0x153638, Func Offset: 0x8
	// Func End, Address: 0x153644, Func Offset: 0x14
}

// 
// Start address: 0x153650
void enDrawDot(float* pos, unsigned int color)
{
	int y;
	int x;
	float prot[4][4];
	float vec[4];
	float vpos[4];
	float* ppos;
	// Line 735, Address: 0x153650, Func Offset: 0
	// Line 736, Address: 0x15366c, Func Offset: 0x1c
	// Line 740, Address: 0x153678, Func Offset: 0x28
	// Line 741, Address: 0x153680, Func Offset: 0x30
	// Line 742, Address: 0x15368c, Func Offset: 0x3c
	// Line 743, Address: 0x153698, Func Offset: 0x48
	// Line 744, Address: 0x1536c0, Func Offset: 0x70
	// Line 745, Address: 0x1536ec, Func Offset: 0x9c
	// Line 746, Address: 0x153700, Func Offset: 0xb0
	// Line 747, Address: 0x153730, Func Offset: 0xe0
	// Line 748, Address: 0x15374c, Func Offset: 0xfc
	// Line 749, Address: 0x153780, Func Offset: 0x130
	// Line 750, Address: 0x1537c8, Func Offset: 0x178
	// Line 752, Address: 0x153808, Func Offset: 0x1b8
	// Line 754, Address: 0x153810, Func Offset: 0x1c0
	// Line 756, Address: 0x153834, Func Offset: 0x1e4
	// Line 757, Address: 0x15384c, Func Offset: 0x1fc
	// Line 758, Address: 0x15386c, Func Offset: 0x21c
	// Line 759, Address: 0x1538ac, Func Offset: 0x25c
	// Line 760, Address: 0x1538b4, Func Offset: 0x264
	// Func End, Address: 0x1538d0, Func Offset: 0x280
}

// 
// Start address: 0x1538d0
void enDrawGauge(EnLOCAL_DATA* dp, float* pos)
{
	int x2;
	int y;
	int x;
	// Line 841, Address: 0x1538d0, Func Offset: 0
	// Line 843, Address: 0x1538e8, Func Offset: 0x18
	// Line 844, Address: 0x153924, Func Offset: 0x54
	// Line 845, Address: 0x153978, Func Offset: 0xa8
	// Line 847, Address: 0x1539b0, Func Offset: 0xe0
	// Line 848, Address: 0x1539cc, Func Offset: 0xfc
	// Line 849, Address: 0x1539ec, Func Offset: 0x11c
	// Line 850, Address: 0x153a30, Func Offset: 0x160
	// Line 851, Address: 0x153a74, Func Offset: 0x1a4
	// Line 852, Address: 0x153abc, Func Offset: 0x1ec
	// Line 853, Address: 0x153b04, Func Offset: 0x234
	// Line 854, Address: 0x153b48, Func Offset: 0x278
	// Line 855, Address: 0x153b90, Func Offset: 0x2c0
	// Line 856, Address: 0x153bd8, Func Offset: 0x308
	// Line 857, Address: 0x153bf4, Func Offset: 0x324
	// Line 858, Address: 0x153c14, Func Offset: 0x344
	// Line 859, Address: 0x153c5c, Func Offset: 0x38c
	// Line 860, Address: 0x153c90, Func Offset: 0x3c0
	// Line 861, Address: 0x153cd4, Func Offset: 0x404
	// Line 862, Address: 0x153cf4, Func Offset: 0x424
	// Line 863, Address: 0x153d3c, Func Offset: 0x46c
	// Line 865, Address: 0x153d74, Func Offset: 0x4a4
	// Line 866, Address: 0x153db8, Func Offset: 0x4e8
	// Line 867, Address: 0x153dc0, Func Offset: 0x4f0
	// Func End, Address: 0x153ddc, Func Offset: 0x50c
}

// 
// Start address: 0x153de0
void enDrawHpGauge(float hp_rate, float* pos)
{
	int x2;
	int y;
	int x;
	// Line 870, Address: 0x153de0, Func Offset: 0
	// Line 872, Address: 0x153df8, Func Offset: 0x18
	// Line 873, Address: 0x153e34, Func Offset: 0x54
	// Line 874, Address: 0x153e88, Func Offset: 0xa8
	// Line 876, Address: 0x153ebc, Func Offset: 0xdc
	// Line 877, Address: 0x153ed8, Func Offset: 0xf8
	// Line 878, Address: 0x153ef8, Func Offset: 0x118
	// Line 879, Address: 0x153f3c, Func Offset: 0x15c
	// Line 880, Address: 0x153f80, Func Offset: 0x1a0
	// Line 881, Address: 0x153fc8, Func Offset: 0x1e8
	// Line 882, Address: 0x154010, Func Offset: 0x230
	// Line 883, Address: 0x154054, Func Offset: 0x274
	// Line 884, Address: 0x154070, Func Offset: 0x290
	// Line 885, Address: 0x154090, Func Offset: 0x2b0
	// Line 886, Address: 0x1540d8, Func Offset: 0x2f8
	// Line 887, Address: 0x154108, Func Offset: 0x328
	// Line 888, Address: 0x15414c, Func Offset: 0x36c
	// Line 889, Address: 0x154154, Func Offset: 0x374
	// Func End, Address: 0x154170, Func Offset: 0x390
}

