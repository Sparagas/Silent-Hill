typedef struct shAttackInfo;
typedef struct _anon0;
typedef struct _CL_VHIT_WALL;
typedef struct _anon1;
typedef union _anon2;
typedef struct shPlayerWork;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _anon3;
typedef struct SubCharacter;
typedef struct _CL_VHIT_CHARA;
typedef struct _CL_VHIT_RESULT;
typedef union _anon4;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct Model_List;
typedef struct SubObject;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct _anon7;
typedef struct shSkelton;
typedef struct PAD_3D;
typedef struct _anon8;
typedef struct shBattleFight;
typedef struct PAD_2D;
typedef struct shBattleShot;
typedef struct PAD_INFO;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef enum _JAMES_LOWER_STATUS : unsigned char;

typedef void(*type_6)();
typedef int(*type_7)();
typedef void(*type_10)(SubCharacter*);
typedef void(*type_11)(SubCharacter*);
typedef void(*type_25)(SubCharacter*);
typedef void(*type_27)(SubCharacter*);

typedef unsigned int type_0[256];
typedef unsigned char type_1[10];
typedef unsigned int type_2[32];
typedef unsigned char type_3[4];
typedef char type_4[4];
typedef char type_5[4];
typedef unsigned char type_8[4];
typedef unsigned char type_9[2];
typedef unsigned char type_12[13];
typedef _anon5 type_13[5];
typedef unsigned char type_14[262];
typedef float type_15[4];
typedef unsigned char type_16[34];
typedef int(*type_17)()[5];
typedef float type_18[4][2];
typedef float type_19[4];
typedef float type_20[4][4];
typedef unsigned char type_21[4];
typedef unsigned char type_22[4];
typedef PAD_INFO type_23[10];
typedef unsigned char type_24[10];
typedef shAttackInfo type_26[46];
typedef _anon0 type_28[25];
typedef unsigned char type_29[4];
typedef unsigned char type_30[2];
typedef unsigned char type_31[2];
typedef unsigned short type_32[0];
typedef Model_List type_33[2];
typedef float type_34[4];

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

struct _anon0
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

struct _anon1
{
	unsigned int flag[256];
	unsigned int enemy[32];
	unsigned char safe[4];
	char guruguru[4];
	char cylinder[4];
	unsigned short clock;
	unsigned short carbon;
	unsigned short hanging;
	unsigned char trunk[4];
};

union _anon2
{
	shBattleFight fight;
	shBattleShot shot;
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
	_anon6 tgt_body_angle;
	_anon6 tgt_neck_angle;
	_anon6 tgt_arms_angle;
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

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
};

struct _anon3
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
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
	_anon6 pos;
	_anon6 rot;
	_anon6 pos_spd;
	_anon6 rot_spd;
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

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon4 hobj;
};

union _anon4
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
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

struct Model_List
{
	short kind;
	short id;
	short flag_off;
	short flag_on;
	float pos[4];
	float rot[4];
};

struct SubObject
{
	unsigned int status;
	unsigned int sub_status;
	unsigned int sub_st;
	short kind;
	short id;
	unsigned int step;
	_anon6 pos;
	_anon6 rot;
	_anon6 pos_spd;
	_anon6 rot_spd;
	_anon8 mat;
	void(*function)(SubCharacter*);
	void(*effecter_function)(SubCharacter*);
	SubObject* pre;
	SubObject* next;
};

struct _anon5
{
	short kind;
	short id;
	int pos_x;
	int pos_z;
	short pos_y;
	short rot_y;
	short status;
	short condition;
};

struct _anon6
{
	float x;
	float y;
	float z;
	float w;
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

struct _anon7
{
	_anon0* ev_list;
	unsigned char* ev_pos;
	int(*ev_prog)();
	_anon3* gi_list;
	Model_List* mdl_list;
	_anon5* en_list;
	void(*stage_init)();
	void(*room_init)();
	void(*alltime_func)();
	int glb_crd;
	int reserve_05;
	int reserve_06;
	int reserve_07;
	int reserve_08;
	int reserve_09;
	int reserve_10;
	int reserve_11;
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon8 src_m;
	_anon6 src_t;
	_anon8 des_m;
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

struct PAD_3D
{
	char round_way;
	unsigned char reserved1;
	unsigned char lslide;
	unsigned char rslide;
	unsigned char lturn180;
	unsigned char rturn180;
};

struct _anon8
{
	float d[4][4];
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
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

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
unsigned char ev_pos[262];
_anon0 ev_list[25];
int(*ev_prog)()[5];
Model_List mdl_list[2];
_anon5 en_list[5];
_anon7 stage_apart_w2f;
shPlayerWork sh2jms;
int ev_s_step;
int ev_p_step;
int ev_prog_flag_set;
int ev_cancel;
unsigned short msg_station[0];
_anon1 game_flag;

int EvProgReadDearTim();
int EvProgUseLyneKey();
int EvProgGetApartStairKey();
int EvProgUseApartStairKey();

// 
// Start address: 0x225fd0
int EvProgReadDearTim()
{
	float door_pos[4];
	// Line 91, Address: 0x225fd0, Func Offset: 0
	// Line 94, Address: 0x225fd8, Func Offset: 0x8
	// Line 96, Address: 0x226020, Func Offset: 0x50
	// Line 97, Address: 0x226034, Func Offset: 0x64
	// Line 98, Address: 0x22604c, Func Offset: 0x7c
	// Line 99, Address: 0x22606c, Func Offset: 0x9c
	// Line 100, Address: 0x226080, Func Offset: 0xb0
	// Line 101, Address: 0x226094, Func Offset: 0xc4
	// Line 104, Address: 0x22609c, Func Offset: 0xcc
	// Line 105, Address: 0x2260c0, Func Offset: 0xf0
	// Line 106, Address: 0x2260c8, Func Offset: 0xf8
	// Line 108, Address: 0x2260f4, Func Offset: 0x124
	// Line 109, Address: 0x2260fc, Func Offset: 0x12c
	// Line 111, Address: 0x226110, Func Offset: 0x140
	// Line 114, Address: 0x226118, Func Offset: 0x148
	// Line 115, Address: 0x22612c, Func Offset: 0x15c
	// Line 116, Address: 0x226140, Func Offset: 0x170
	// Line 119, Address: 0x226148, Func Offset: 0x178
	// Line 120, Address: 0x22615c, Func Offset: 0x18c
	// Line 121, Address: 0x226170, Func Offset: 0x1a0
	// Line 124, Address: 0x226178, Func Offset: 0x1a8
	// Line 125, Address: 0x22618c, Func Offset: 0x1bc
	// Line 127, Address: 0x226198, Func Offset: 0x1c8
	// Line 128, Address: 0x22619c, Func Offset: 0x1cc
	// Func End, Address: 0x2261ac, Func Offset: 0x1dc
}

// 
// Start address: 0x2261b0
int EvProgUseLyneKey()
{
	// Line 134, Address: 0x2261b0, Func Offset: 0
	// Line 135, Address: 0x2261b8, Func Offset: 0x8
	// Line 136, Address: 0x2261c8, Func Offset: 0x18
	// Func End, Address: 0x2261d8, Func Offset: 0x28
}

// 
// Start address: 0x2261e0
int EvProgGetApartStairKey()
{
	// Line 142, Address: 0x2261e0, Func Offset: 0
	// Line 143, Address: 0x2261e8, Func Offset: 0x8
	// Line 145, Address: 0x2261f8, Func Offset: 0x18
	// Func End, Address: 0x226208, Func Offset: 0x28
}

// 
// Start address: 0x226210
int EvProgUseApartStairKey()
{
	// Line 151, Address: 0x226210, Func Offset: 0
	// Line 152, Address: 0x226218, Func Offset: 0x8
	// Line 153, Address: 0x226228, Func Offset: 0x18
	// Func End, Address: 0x226238, Func Offset: 0x28
}

