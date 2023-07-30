typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct _CL_HITPOLY_HEAD;
typedef struct EnAMBUSH_DATA;
typedef struct SubCharacter;
typedef struct EnONI_DATA;
typedef struct SPACK_OT_DATA;
typedef struct EnMKN_DATA;
typedef struct SubObject;
typedef struct Item;
typedef struct _anon0;
typedef struct shPlayerWork;
typedef struct EnIKE_DATA;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct SPACK_ENV_DATA;
typedef struct EnRED_DATA;
typedef struct SPACK_STATIC_DATA;
typedef struct shSkelton;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct _anon1;
typedef struct SPACK_DATA;
typedef struct EnNSE_DATA;
typedef struct shBattleFight;
typedef struct EnEDB_DATA;
typedef struct EnLOCAL_WORK;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct EnLOCAL_DATA;
typedef struct EnSCU_DATA;
typedef struct EnPAP_DATA;
typedef struct _SH2_SYS;
typedef struct shBattleInfo;
typedef struct EnTYU_DATA;
typedef struct EnCOMMUNICATION;
typedef struct EnBOS_DATA;
typedef struct PAD_3D;
typedef struct shAttackInfo;
typedef struct Se_RadioInfo;
typedef struct _CL_VHIT_WALL;
typedef struct PAD_2D;
typedef union _anon2;
typedef struct EnPATH_DATA;
typedef struct PAD_INFO;
typedef struct _CL_VHIT_CHARA;
typedef struct _CL_VHIT_RESULT;
typedef union _anon3;
typedef struct _anon4;

typedef void(*type_0)(SubCharacter*);
typedef void(*type_2)(SubCharacter*);
typedef void(*type_15)(SubCharacter*);
typedef void(*type_19)(SubCharacter*);

typedef Se_RadioInfo type_1[4];
typedef unsigned int type_3[2];
typedef unsigned short type_4[11];
typedef unsigned char type_5[13];
typedef unsigned short type_6[3];
typedef float type_7[4][2];
typedef float type_8[4];
typedef unsigned char type_9[2];
typedef unsigned char type_10[34];
typedef float type_11[4];
typedef float type_12[4][4];
typedef EnLOCAL_DATA type_13[64];
typedef unsigned char type_14[10];
typedef EnCOMMUNICATION type_16[8];
typedef char type_17[3];
typedef shAttackInfo type_18[46];
typedef float type_20[4];
typedef unsigned int type_21[8];
typedef unsigned char type_22[4];
typedef unsigned char type_23[4];
typedef unsigned char type_24[4];
typedef PAD_INFO type_25[10];
typedef char type_26[2];
typedef unsigned char type_27[10];
typedef unsigned char type_28[2];
typedef unsigned char type_29[2];

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

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
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

struct SubCharacter
{
	int index;
	unsigned int status;
	unsigned int sub_status;
	unsigned int sub_st;
	short kind;
	short id;
	unsigned int step;
	_anon0 pos;
	_anon0 rot;
	_anon0 pos_spd;
	_anon0 rot_spd;
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

struct EnONI_DATA
{
	char id;
	short timer2;
	void* other;
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

struct EnMKN_DATA
{
	float stpos[4];
	float target[4];
	short frame;
};

struct SubObject
{
	unsigned int status;
	unsigned int sub_status;
	unsigned int sub_st;
	short kind;
	short id;
	unsigned int step;
	_anon0 pos;
	_anon0 rot;
	_anon0 pos_spd;
	_anon0 rot_spd;
	_anon1 mat;
	void(*function)(SubCharacter*);
	void(*effecter_function)(SubCharacter*);
	SubObject* pre;
	SubObject* next;
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

struct _anon0
{
	float x;
	float y;
	float z;
	float w;
};

struct shPlayerWork
{
	SubCharacter* player;
	_anon0 dist_rot;
	_anon0 dist_pos;
	_anon0 pos;
	_anon0 rot;
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
	_anon0 tgt_body_angle;
	_anon0 tgt_neck_angle;
	_anon0 tgt_arms_angle;
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

struct EnIKE_DATA
{
	float handpos[4];
	char direc;
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

struct EnRED_DATA
{
	int dummy;
};

struct SPACK_STATIC_DATA
{
	unsigned short GifNLOOP;
	unsigned short DmaQwc;
	unsigned int PRE_PRIM_FLG_NREG;
	unsigned long REGS;
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon1 src_m;
	_anon0 src_t;
	_anon1 des_m;
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

struct _anon1
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
};

struct EnNSE_DATA
{
	float speed;
	float tspeed;
	char avoid;
};

struct shBattleFight
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

struct EnSCU_DATA
{
	float stpos[4];
	float target[4];
	EnAMBUSH_DATA* ambush;
	int count;
};

struct EnPAP_DATA
{
	float target[4];
};

struct _SH2_SYS
{
	unsigned int step[8];
	int main_status;
	unsigned int boot_first;
	unsigned int soft_reset;
	unsigned int frame_cnt;
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

struct EnTYU_DATA
{
	float point[4];
	EnCOMMUNICATION* tcomm;
};

struct EnCOMMUNICATION
{
	float pos[4];
	int kind;
	int type;
	int time;
	float dist;
};

struct EnBOS_DATA
{
	int dummy;
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

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon2 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

struct Se_RadioInfo
{
	float volume;
	short pan;
	short pitch;
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
};

union _anon2
{
	shBattleFight fight;
	shBattleShot shot;
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

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon3 hobj;
};

union _anon3
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct _anon4
{
	int radio_step;
	float volume;
	int timer;
	Se_RadioInfo radio[4];
};

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
_anon4 t;
Item item;
_SH2_SYS Sh2sys;
shPlayerWork sh2jms;
EnLOCAL_WORK enLocalWork;
SPACK_DATA spack;

void radio_noise();

// 
// Start address: 0x1e00e0
void radio_noise()
{
	float EPOS[4];
	int side;
	float biggest;
	float f;
	int j;
	int i;
	// Line 62, Address: 0x1e00e0, Func Offset: 0
	// Line 63, Address: 0x1e00f4, Func Offset: 0x14
	// Line 65, Address: 0x1e00f8, Func Offset: 0x18
	// Line 66, Address: 0x1e0104, Func Offset: 0x24
	// Line 69, Address: 0x1e0108, Func Offset: 0x28
	// Line 72, Address: 0x1e0144, Func Offset: 0x64
	// Line 73, Address: 0x1e016c, Func Offset: 0x8c
	// Line 78, Address: 0x1e0174, Func Offset: 0x94
	// Line 83, Address: 0x1e01c4, Func Offset: 0xe4
	// Line 84, Address: 0x1e01cc, Func Offset: 0xec
	// Line 103, Address: 0x1e01d4, Func Offset: 0xf4
	// Line 104, Address: 0x1e01e0, Func Offset: 0x100
	// Line 105, Address: 0x1e01f4, Func Offset: 0x114
	// Line 106, Address: 0x1e0208, Func Offset: 0x128
	// Line 113, Address: 0x1e0210, Func Offset: 0x130
	// Line 118, Address: 0x1e0260, Func Offset: 0x180
	// Line 119, Address: 0x1e0268, Func Offset: 0x188
	// Line 121, Address: 0x1e0270, Func Offset: 0x190
	// Line 123, Address: 0x1e027c, Func Offset: 0x19c
	// Line 129, Address: 0x1e02e0, Func Offset: 0x200
	// Line 130, Address: 0x1e0314, Func Offset: 0x234
	// Line 131, Address: 0x1e0340, Func Offset: 0x260
	// Line 132, Address: 0x1e0368, Func Offset: 0x288
	// Line 133, Address: 0x1e0390, Func Offset: 0x2b0
	// Line 141, Address: 0x1e03c0, Func Offset: 0x2e0
	// Line 148, Address: 0x1e03e0, Func Offset: 0x300
	// Line 149, Address: 0x1e03f4, Func Offset: 0x314
	// Line 150, Address: 0x1e03f8, Func Offset: 0x318
	// Line 151, Address: 0x1e0408, Func Offset: 0x328
	// Line 152, Address: 0x1e0418, Func Offset: 0x338
	// Line 153, Address: 0x1e0428, Func Offset: 0x348
	// Line 155, Address: 0x1e043c, Func Offset: 0x35c
	// Line 156, Address: 0x1e0490, Func Offset: 0x3b0
	// Line 157, Address: 0x1e04cc, Func Offset: 0x3ec
	// Line 160, Address: 0x1e04d4, Func Offset: 0x3f4
	// Line 161, Address: 0x1e0534, Func Offset: 0x454
	// Line 163, Address: 0x1e0584, Func Offset: 0x4a4
	// Line 165, Address: 0x1e05a0, Func Offset: 0x4c0
	// Line 167, Address: 0x1e0614, Func Offset: 0x534
	// Line 169, Address: 0x1e0688, Func Offset: 0x5a8
	// Line 183, Address: 0x1e0698, Func Offset: 0x5b8
	// Func End, Address: 0x1e06b4, Func Offset: 0x5d4
}

