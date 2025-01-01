typedef struct _CL_HITPOLY_HEAD;
typedef struct PAD_2D;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef union _anon0;
typedef struct SubCharacter;
typedef struct PAD_INFO;
typedef struct EnLOCAL_DATA;
typedef struct _CL_VHIT_RESULT;
typedef union _anon1;
typedef struct EnMKN_DATA;
typedef struct shSkelton;
typedef struct EnEDB_DATA;
typedef struct _anon2;
typedef struct _AnimeInfo;
typedef struct EnPAP_DATA;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct EnNIK_DATA;
typedef struct shPlayerWork;
typedef struct _anon3;
typedef struct EnBOS_DATA;
typedef struct EnSCU_DATA;
typedef struct EnAMBUSH_DATA;
typedef struct EnONI_DATA;
typedef struct EnPATH_DATA;
typedef struct shBattleFight;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct shBattleShot;
typedef struct EnRED_DATA;
typedef struct EnCOMMUNICATION;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct EnINS_DATA;
typedef struct EnIKE_DATA;
typedef struct PAD_3D;
typedef struct EnARM_DATA;
typedef struct EnTYU_DATA;
typedef struct _CL_VHIT_WALL;
typedef struct EnNSE_DATA;

typedef void(*type_11)(SubCharacter*);
typedef void(*type_15)(SubCharacter*);
typedef void(*type_21)(SubCharacter*);

typedef unsigned char type_0[20];
typedef _AnimeInfo type_1[10];
typedef PAD_INFO type_2[10];
typedef float type_3[2];
typedef shAttackInfo type_4[66];
typedef unsigned char type_5[4];
typedef unsigned char type_6[4];
typedef unsigned char type_7[14];
typedef char type_8[3];
typedef int type_9[21];
typedef unsigned char type_10[2];
typedef unsigned char type_12[2];
typedef float type_13[4][2];
typedef unsigned char type_14[69];
typedef float type_16[4];
typedef float type_17[4][4];
typedef _AnimeInfo type_18[21];
typedef unsigned char type_19[4];
typedef unsigned char type_20[14];
typedef float type_22[4];
typedef float type_23[4];
typedef unsigned char type_24[97];
typedef unsigned char type_25[2];

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
};

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
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

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
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

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
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

	void EnemyBOSFunction();
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

struct _CL_VHIT_RESULT
{
	int kind;
	_anon1 hobj;
};

union _anon1
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
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

struct _anon2
{
	float x;
	float y;
	float z;
	float w;
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

struct EnPAP_DATA
{
	float target[4];
	char dc;
	char dcm;
	char signs;
	char count;
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

struct EnNIK_DATA
{
	float swing[4];
	float acc[4];
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
	_anon2 tgt_body_angle;
	_anon2 tgt_neck_angle;
	_anon2 tgt_arms_angle;
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

struct _anon3
{
	float d[4][4];
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

struct EnSCU_DATA
{
	float stpos[4];
	float target[4];
	EnAMBUSH_DATA* ambush;
	int count;
	char dc;
	char dcm;
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

struct EnONI_DATA
{
	char id;
	char check;
	char warp;
	short timer2;
	void* other;
	void* tp;
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
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

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct EnRED_DATA
{
	int attack_count;
	int boss_timer;
	void* tp;
};

struct EnCOMMUNICATION
{
	float pos[4];
	int kind;
	int type;
	int time;
	float dist;
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

struct PAD_3D
{
	char round_way;
	unsigned char reserved1;
	unsigned char lslide;
	unsigned char rslide;
	unsigned char lturn180;
	unsigned char rturn180;
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

struct EnTYU_DATA
{
	float point[4];
	EnCOMMUNICATION* tcomm;
	int near_count;
	float dist;
	short count;
	char moves;
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
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

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
_AnimeInfo bos_anim[10];
_AnimeInfo d_bos_anim[21];
int dbos_anime_adr_list[21];
void(*EnemyBOSFunction)(SubCharacter*);
shPlayerWork sh2jms;

int EnemyBOSInit();
void EnemyBOSFunction();
void shCharacterSetEnemyBOSLow(SubCharacter* scp);
int shCharacterEnemyBOSAnimeSet(SubCharacter* scp, int anime_id);
int shCharacterEnemyBOSAnimeSetP(SubCharacter* scp, int anime_id, int comp);
void shGetEnemyBOSAttackPos(SubCharacter* scp, float* s_pos, float* s_vec, unsigned short atk);

// 
// Start address: 0x220b10
int EnemyBOSInit()
{
	// Line 82, Address: 0x220b10, Func Offset: 0
	// Line 83, Address: 0x220b14, Func Offset: 0x4
	// Func End, Address: 0x220b1c, Func Offset: 0xc
}

// 
// Start address: 0x220b20
void SubCharacter::EnemyBOSFunction()
{
	EnLOCAL_DATA* dp;
	float rot[4];
	float pos[4];
	// Line 95, Address: 0x220b20, Func Offset: 0
	// Line 99, Address: 0x220b30, Func Offset: 0x10
	// Line 105, Address: 0x220b50, Func Offset: 0x30
	// Line 106, Address: 0x220b5c, Func Offset: 0x3c
	// Line 110, Address: 0x220b68, Func Offset: 0x48
	// Line 112, Address: 0x220b70, Func Offset: 0x50
	// Line 114, Address: 0x220b80, Func Offset: 0x60
	// Line 116, Address: 0x220b90, Func Offset: 0x70
	// Line 126, Address: 0x220ba4, Func Offset: 0x84
	// Line 129, Address: 0x220bb4, Func Offset: 0x94
	// Line 130, Address: 0x220bcc, Func Offset: 0xac
	// Line 131, Address: 0x220bd0, Func Offset: 0xb0
	// Line 132, Address: 0x220bdc, Func Offset: 0xbc
	// Line 133, Address: 0x220be4, Func Offset: 0xc4
	// Line 139, Address: 0x220be8, Func Offset: 0xc8
	// Line 140, Address: 0x220bf4, Func Offset: 0xd4
	// Line 142, Address: 0x220c00, Func Offset: 0xe0
	// Line 149, Address: 0x220c0c, Func Offset: 0xec
	// Func End, Address: 0x220c20, Func Offset: 0x100
}

// 
// Start address: 0x220c20
void shCharacterSetEnemyBOSLow(SubCharacter* scp)
{
	// Line 165, Address: 0x220c20, Func Offset: 0
	// Line 166, Address: 0x220c28, Func Offset: 0x8
	// Line 167, Address: 0x220c38, Func Offset: 0x18
	// Func End, Address: 0x220c48, Func Offset: 0x28
}

// 
// Start address: 0x220c50
int shCharacterEnemyBOSAnimeSet(SubCharacter* scp, int anime_id)
{
	_AnimeInfo* aip;
	// Line 180, Address: 0x220c50, Func Offset: 0
	// Line 183, Address: 0x220c6c, Func Offset: 0x1c
	// Line 184, Address: 0x220c88, Func Offset: 0x38
	// Line 185, Address: 0x220c98, Func Offset: 0x48
	// Line 186, Address: 0x220cb4, Func Offset: 0x64
	// Line 194, Address: 0x220cf0, Func Offset: 0xa0
	// Line 196, Address: 0x220cfc, Func Offset: 0xac
	// Line 198, Address: 0x220d00, Func Offset: 0xb0
	// Func End, Address: 0x220d1c, Func Offset: 0xcc
}

// 
// Start address: 0x220d20
int shCharacterEnemyBOSAnimeSetP(SubCharacter* scp, int anime_id, int comp)
{
	_AnimeInfo* aip;
	// Line 211, Address: 0x220d20, Func Offset: 0
	// Line 214, Address: 0x220d40, Func Offset: 0x20
	// Line 215, Address: 0x220d5c, Func Offset: 0x3c
	// Line 216, Address: 0x220d78, Func Offset: 0x58
	// Line 223, Address: 0x220dc0, Func Offset: 0xa0
	// Line 225, Address: 0x220dcc, Func Offset: 0xac
	// Line 227, Address: 0x220dd0, Func Offset: 0xb0
	// Func End, Address: 0x220dec, Func Offset: 0xcc
}

// 
// Start address: 0x220df0
void shGetEnemyBOSAttackPos(SubCharacter* scp, float* s_pos, float* s_vec, unsigned short atk)
{
	shSkelton* stp;
	float wep_range[4];
	int sk_num;
	int i;
	_anon3 mat;
	_anon3 lw_mat;
	float vec[4];
	float pos1[4];
	float pos0[4];
	// Line 240, Address: 0x220df0, Func Offset: 0
	// Line 244, Address: 0x220e0c, Func Offset: 0x1c
	// Line 247, Address: 0x220e20, Func Offset: 0x30
	// Line 248, Address: 0x220e50, Func Offset: 0x60
	// Line 251, Address: 0x220e54, Func Offset: 0x64
	// Line 253, Address: 0x220e70, Func Offset: 0x80
	// Line 254, Address: 0x220e80, Func Offset: 0x90
	// Line 255, Address: 0x220ea0, Func Offset: 0xb0
	// Line 256, Address: 0x220eb0, Func Offset: 0xc0
	// Line 258, Address: 0x220eb8, Func Offset: 0xc8
	// Line 259, Address: 0x220ebc, Func Offset: 0xcc
	// Line 260, Address: 0x220ec0, Func Offset: 0xd0
	// Line 261, Address: 0x220ec4, Func Offset: 0xd4
	// Line 262, Address: 0x220ec8, Func Offset: 0xd8
	// Line 264, Address: 0x220ed0, Func Offset: 0xe0
	// Line 266, Address: 0x220ed4, Func Offset: 0xe4
	// Line 267, Address: 0x220ee0, Func Offset: 0xf0
	// Line 270, Address: 0x220efc, Func Offset: 0x10c
	// Line 271, Address: 0x220f2c, Func Offset: 0x13c
	// Line 272, Address: 0x220f34, Func Offset: 0x144
	// Line 273, Address: 0x220f3c, Func Offset: 0x14c
	// Line 274, Address: 0x220f44, Func Offset: 0x154
	// Line 275, Address: 0x220f4c, Func Offset: 0x15c
	// Line 276, Address: 0x220f50, Func Offset: 0x160
	// Line 278, Address: 0x220f58, Func Offset: 0x168
	// Line 279, Address: 0x220f6c, Func Offset: 0x17c
	// Line 283, Address: 0x220f78, Func Offset: 0x188
	// Line 284, Address: 0x220f8c, Func Offset: 0x19c
	// Line 285, Address: 0x220f9c, Func Offset: 0x1ac
	// Line 286, Address: 0x220fac, Func Offset: 0x1bc
	// Line 287, Address: 0x220fbc, Func Offset: 0x1cc
	// Line 288, Address: 0x220fc4, Func Offset: 0x1d4
	// Line 289, Address: 0x220fd8, Func Offset: 0x1e8
	// Line 290, Address: 0x220fe8, Func Offset: 0x1f8
	// Line 291, Address: 0x220ff8, Func Offset: 0x208
	// Line 292, Address: 0x221008, Func Offset: 0x218
	// Line 293, Address: 0x22100c, Func Offset: 0x21c
	// Line 295, Address: 0x221030, Func Offset: 0x240
	// Func End, Address: 0x22104c, Func Offset: 0x25c
}

