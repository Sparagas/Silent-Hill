typedef struct SubCharacter;
typedef struct shPlayerWork;
typedef struct shMariaWork;
typedef struct SubObject;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct _anon0;
typedef struct shSkelton;
typedef struct _USXY;
typedef struct _SXY;
typedef struct _anon1;
typedef struct shBattleFight;
typedef struct shAnime3d;
typedef struct shClusterAnime;
typedef struct shBattleShot;
typedef struct _AnimeInfo;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct PAD_3D;
typedef struct SubCharacterDisp;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct PAD_2D;
typedef struct PAD_INFO;
typedef struct shAttackInfo;
typedef enum _MARIA_MAIN_STATUS : unsigned char;
typedef struct _CL_VHIT_WALL;
typedef union _anon2;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _CL_VHIT_CHARA;
typedef struct _CL_VHIT_RESULT;
typedef union _anon3;
typedef enum _MARIA_SUB_STATUS : unsigned char;
typedef enum _JAMES_UPPER_STATUS : unsigned char;

typedef void(*type_11)(SubCharacter*);
typedef void(*type_13)(SubCharacter*);
typedef void(*type_14)(SubCharacter*);
typedef void(*type_21)(SubCharacter*);
typedef void(*type_23)(SubCharacter*);
typedef void(*type_32)(SubCharacter*);
typedef void(*type_37)(SubCharacter*);
typedef void(*type_38)(SubCharacter*);

typedef unsigned char type_0[13];
typedef unsigned char type_1[2];
typedef unsigned short type_2[2];
typedef unsigned short type_3[2][2];
typedef unsigned short type_4[2][2][11];
typedef unsigned char type_5[34];
typedef float type_6[4][2];
typedef unsigned int type_7[8];
typedef float type_8[4];
typedef float type_9[4][4];
typedef unsigned char type_10[10];
typedef float type_12[4];
typedef shAttackInfo type_15[46];
typedef unsigned char type_16[4];
typedef unsigned char type_17[4];
typedef unsigned char type_18[4];
typedef PAD_INFO type_19[10];
typedef void* type_20[3];
typedef unsigned char type_22[2];
typedef void(*type_24)(SubCharacter*)[8];
typedef unsigned char type_25[2];
typedef float type_26[4][5];
typedef float type_27[4];
typedef unsigned char type_28[10];
typedef _AnimeInfo type_29[36];
typedef unsigned short type_30[2];
typedef float type_31[4];
typedef unsigned short type_33[2];
typedef unsigned short type_34[2][2];
typedef unsigned short type_35[2][2][21];
typedef float type_36[4][4];
typedef void(*type_39)(SubCharacter*)[7];

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

	unsigned short MariaDamageMotionNo();
	void MariaSetSearchArea();
	void MariaSetHitColumn();
	void MariaCheckNeckAngle();
	void MariaUpdateStatusInitial();
	void MariaUpdateStatusExecPhase2();
	void MariaUpdateStatusExec();
	void MariaCheckDamage();
	void MariaCheckSetParameterPhase1();
	void MariaCheckSetParameterPhase2();
	void MariaCheckControl();
	void MariaUpdatePosition();
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

struct shMariaWork
{
	SubCharacter* mar_p;
	_anon0 pos;
	_anon0 rot;
	float to_target;
	float tgt_pos[4][5];
	int tgt_pointer;
	_MARIA_MAIN_STATUS main_status_now;
	_MARIA_MAIN_STATUS main_status_prev;
	_MARIA_SUB_STATUS sub_status_now;
	_MARIA_SUB_STATUS sub_status_prev;
	unsigned int sub_st_flg;
	unsigned int anime_st_flg;
	unsigned int anime_pause;
	_CL_VHIT_RESULT r_forward;
	_CL_VHIT_RESULT l_forward;
	_CL_VHIT_RESULT forward;
	_CL_VHIT_RESULT ft_floor;
	_CL_VHIT_RESULT r_foot;
	_CL_VHIT_RESULT l_foot;
	_CL_HITPOLY_COLUMN column_mov;
	_CL_HITPOLY_COLUMN column_atk;
	float col_mov_z_hosei;
	float col_atk_z_hosei;
	_anon0 tgt_neck_angle;
	SubCharacter* look_tgt;
	SubObject* look_obj;
	float dist_to_jms;
	float hp_recover;
	float stand_time;
	float move_time;
	float muteki_time;
	float relax_time;
	float afraid_time;
	int tired;
	int tired_max;
	unsigned char relax_flag;
	unsigned char no_damage;
	unsigned char dead;
	unsigned short damage_no;
	unsigned char enemy_around;
	unsigned char enemy_atk_area;
	unsigned char look_jms;
	unsigned char random_status;
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

struct _anon0
{
	float x;
	float y;
	float z;
	float w;
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

struct _USXY
{
	unsigned short x;
	unsigned short y;
};

struct _SXY
{
	short x;
	short y;
};

struct _anon1
{
	float d[4][4];
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct shAnime3d
{
	shSkelton* top;
	void* anime;
	void* frame_top;
	void* p_anime;
	void* p_frame_top;
	unsigned int frame_size;
	int total_count;
	_SXY c_count;
	_SXY c_speed;
	_SXY total_speed;
	_USXY cur_frame;
	char first_bone_type;
	char comp_type;
	_AnimeInfo* anim_a;
	_AnimeInfo* anim_b;
	_anon0 rot_neck;
	_anon0 rot_arms;
	_anon0 rot_body_neck;
	_anon0 rot_body;
	float scale;
};

struct shClusterAnime
{
	void* data;
	unsigned char used;
	unsigned char n_clusters;
	unsigned char is_repeat;
	unsigned char frame_updated;
	int frame_no;
	float* weights;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct _AnimeInfo
{
	unsigned short name;
	unsigned short frame;
	short speed;
	unsigned short start;
	unsigned short end;
	unsigned char loop;
	unsigned char pad;
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

struct PAD_3D
{
	char round_way;
	unsigned char reserved1;
	unsigned char lslide;
	unsigned char rslide;
	unsigned char lturn180;
	unsigned char rturn180;
};

struct SubCharacterDisp
{
	SubCharacter sc;
	shAnime3d anime2;
	shAnime3d anime;
	shClusterAnime* cluster_anime;
	void* models[3];
	void* work;
	void* data;
	unsigned int model_adr;
	unsigned int anime_adr;
	unsigned int clani_adr;
	void* anime_list;
	void* clani_list;
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

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
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

enum _MARIA_MAIN_STATUS : unsigned char
{
	MAR_MAIN_ST_STAND,
	MAR_MAIN_ST_CLOSE_TO,
	MAR_MAIN_ST_ALERT,
	MAR_MAIN_ST_DISCOVER,
	MAR_MAIN_ST_RECOVER,
	MAR_MAIN_ST_BOREDOM,
	MAR_MAIN_ST_DAMAGED
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

union _anon2
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

enum _MARIA_SUB_STATUS : unsigned char
{
	MAR_SUB_ST_STAND,
	MAR_SUB_ST_RELAX,
	MAR_SUB_ST_RELAX_OFF,
	MAR_SUB_ST_AFRAID,
	MAR_SUB_ST_TIRED,
	MAR_SUB_ST_WALK,
	MAR_SUB_ST_RUN,
	MAR_SUB_ST_DAMAGE
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

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
_AnimeInfo pmaria_anim[36];
unsigned int pmaria_sub_status_flag[8];
shMariaWork sh2mar;
float dtf;
void(*func_list_main)(SubCharacter*)[7];
int dt;
shPlayerWork sh2jms;
void(*func_list_sub)(SubCharacter*)[8];

void mar_flg_on(unsigned int* type, unsigned int status);
void mar_flg_off(unsigned int* type, unsigned int status);
int mar_sub_flg_on(unsigned int status);
int mar_anime_flg_on(unsigned int status);
void mar_main_st_set(int status, shMariaWork* w);
void mar_sub_st_set(int status, shMariaWork* w);
void mar_sub_flg_set(int status, shMariaWork* w);
void MariaBodyAngleCloseToTarget(float target);
void MariaSpeedDownToStand(SubCharacter* p);
void mar_sub_flg_check(int status);
void mar_muteki_set();
void mar_timer_set(int mode);
void mar_main_stand();
void mar_main_close_to();
void mar_main_alert();
void mar_main_discover();
void mar_main_recover();
void mar_main_boredom();
void mar_main_damaged();
void mar_sub_stand(SubCharacter* p);
void mar_sub_relax(SubCharacter* p);
void mar_sub_relax_off(SubCharacter* p);
void mar_sub_afraid(SubCharacter* p);
void mar_sub_tired(SubCharacter* p);
void mar_sub_walk(SubCharacter* p);
void mar_sub_run(SubCharacter* p);
void mar_sub_damage(SubCharacter* p);
int MariaCheckJamesLook(float* sp, float* ep);
int JamesCheckMariaLook(float* sp, float* ep);
int CheckJamesLook1(float* sp, float* ep);
int CheckJamesLook2(float* sp, float* ep);
int MariaCheckLook1(float* sp, float* ep);
int MariaCheckLook2(float* sp, float* ep);
void MariaSetStraightRoot();
unsigned short MariaDamageMotionNo();
int MariaTouchJamesCheck();
void MariaCheckFootLine();
void MariaSetSearchArea();
void MariaSetColumn_SetTarget(_CL_HITPOLY_COLUMN* mov, _CL_HITPOLY_COLUMN* atk, float* mov_z, float* atk_z);
void MariaSetColumn_CloseToTarget(_CL_HITPOLY_COLUMN* mov, _CL_HITPOLY_COLUMN* atk, float* mov_z, float* atk_z);
void MariaSetHitColumn();
void MariaCheckNeckAngle();
void MariaUpdateStatusInitial();
void MariaUpdateStatusExecPhase1();
void MariaUpdateStatusExecPhase2();
void MariaUpdateStatusExec();
void GetMariaPartsWorldMatrix(float mat[4], unsigned int parts_name);
void MariaCheckDamage();
void MariaCheckSetParameterPhase1();
void MariaCheckSetParameterPhase2();
void MariaCheckControl();
void maria_anim_set_all(_AnimeInfo* aip, int comp_type);
void MariaCheckAnime();
void MariaUpdatePosition();
void MariaCheckSound();

// 
// Start address: 0x221510
void mar_flg_on(unsigned int* type, unsigned int status)
{
	// Line 86, Address: 0x221510, Func Offset: 0
	// Line 87, Address: 0x22151c, Func Offset: 0xc
	// Line 88, Address: 0x221534, Func Offset: 0x24
	// Func End, Address: 0x221540, Func Offset: 0x30
}

// 
// Start address: 0x221540
void mar_flg_off(unsigned int* type, unsigned int status)
{
	// Line 90, Address: 0x221540, Func Offset: 0
	// Line 91, Address: 0x22154c, Func Offset: 0xc
	// Line 92, Address: 0x221568, Func Offset: 0x28
	// Func End, Address: 0x221574, Func Offset: 0x34
}

// 
// Start address: 0x221580
int mar_sub_flg_on(unsigned int status)
{
	// Line 102, Address: 0x221580, Func Offset: 0
	// Line 103, Address: 0x221588, Func Offset: 0x8
	// Line 104, Address: 0x221598, Func Offset: 0x18
	// Func End, Address: 0x2215a4, Func Offset: 0x24
}

// 
// Start address: 0x2215b0
int mar_anime_flg_on(unsigned int status)
{
	// Line 106, Address: 0x2215b0, Func Offset: 0
	// Line 107, Address: 0x2215b8, Func Offset: 0x8
	// Line 108, Address: 0x2215c8, Func Offset: 0x18
	// Func End, Address: 0x2215d4, Func Offset: 0x24
}

// 
// Start address: 0x2215e0
void mar_main_st_set(int status, shMariaWork* w)
{
	// Line 117, Address: 0x2215e0, Func Offset: 0
	// Line 118, Address: 0x2215ec, Func Offset: 0xc
	// Line 119, Address: 0x2215fc, Func Offset: 0x1c
	// Line 120, Address: 0x22160c, Func Offset: 0x2c
	// Func End, Address: 0x221618, Func Offset: 0x38
}

// 
// Start address: 0x221620
void mar_sub_st_set(int status, shMariaWork* w)
{
	// Line 122, Address: 0x221620, Func Offset: 0
	// Line 123, Address: 0x22162c, Func Offset: 0xc
	// Line 124, Address: 0x22163c, Func Offset: 0x1c
	// Line 125, Address: 0x22164c, Func Offset: 0x2c
	// Func End, Address: 0x221658, Func Offset: 0x38
}

// 
// Start address: 0x221660
void mar_sub_flg_set(int status, shMariaWork* w)
{
	// Line 131, Address: 0x221660, Func Offset: 0
	// Line 132, Address: 0x22166c, Func Offset: 0xc
	// Line 133, Address: 0x22168c, Func Offset: 0x2c
	// Func End, Address: 0x221698, Func Offset: 0x38
}

// 
// Start address: 0x2216a0
void MariaBodyAngleCloseToTarget(float target)
{
	float mov_angle;
	float roty_tmp;
	// Line 145, Address: 0x2216a0, Func Offset: 0
	// Line 151, Address: 0x2216b0, Func Offset: 0x10
	// Line 152, Address: 0x2216d0, Func Offset: 0x30
	// Line 153, Address: 0x221740, Func Offset: 0xa0
	// Line 154, Address: 0x22175c, Func Offset: 0xbc
	// Line 155, Address: 0x221780, Func Offset: 0xe0
	// Line 157, Address: 0x221798, Func Offset: 0xf8
	// Line 158, Address: 0x2217b0, Func Offset: 0x110
	// Line 159, Address: 0x2217b8, Func Offset: 0x118
	// Line 160, Address: 0x2217dc, Func Offset: 0x13c
	// Line 162, Address: 0x2217f4, Func Offset: 0x154
	// Line 164, Address: 0x22180c, Func Offset: 0x16c
	// Line 165, Address: 0x22182c, Func Offset: 0x18c
	// Func End, Address: 0x221840, Func Offset: 0x1a0
}

// 
// Start address: 0x221840
void MariaSpeedDownToStand(SubCharacter* p)
{
	// Line 172, Address: 0x221840, Func Offset: 0
	// Line 174, Address: 0x221848, Func Offset: 0x8
	// Line 176, Address: 0x221868, Func Offset: 0x28
	// Line 178, Address: 0x22188c, Func Offset: 0x4c
	// Line 180, Address: 0x221894, Func Offset: 0x54
	// Line 184, Address: 0x2218b8, Func Offset: 0x78
	// Line 185, Address: 0x221904, Func Offset: 0xc4
	// Func End, Address: 0x221910, Func Offset: 0xd0
}

// 
// Start address: 0x221910
void mar_sub_flg_check(int status)
{
	// Line 199, Address: 0x221910, Func Offset: 0
	// Line 200, Address: 0x22191c, Func Offset: 0xc
	// Line 201, Address: 0x22192c, Func Offset: 0x1c
	// Line 202, Address: 0x221944, Func Offset: 0x34
	// Line 203, Address: 0x221958, Func Offset: 0x48
	// Line 206, Address: 0x22196c, Func Offset: 0x5c
	// Func End, Address: 0x22197c, Func Offset: 0x6c
}

// 
// Start address: 0x221980
void mar_muteki_set()
{
	// Line 209, Address: 0x221980, Func Offset: 0
	// Line 210, Address: 0x221998, Func Offset: 0x18
	// Line 211, Address: 0x2219a8, Func Offset: 0x28
	// Line 212, Address: 0x2219b0, Func Offset: 0x30
	// Line 214, Address: 0x2219bc, Func Offset: 0x3c
	// Func End, Address: 0x2219c4, Func Offset: 0x44
}

// 
// Start address: 0x2219d0
void mar_timer_set(int mode)
{
	// Line 216, Address: 0x2219d0, Func Offset: 0
	// Line 217, Address: 0x2219d8, Func Offset: 0x8
	// Line 219, Address: 0x221a10, Func Offset: 0x40
	// Line 220, Address: 0x221a2c, Func Offset: 0x5c
	// Line 221, Address: 0x221a38, Func Offset: 0x68
	// Line 222, Address: 0x221a44, Func Offset: 0x74
	// Line 223, Address: 0x221a50, Func Offset: 0x80
	// Line 225, Address: 0x221a58, Func Offset: 0x88
	// Line 226, Address: 0x221a64, Func Offset: 0x94
	// Line 227, Address: 0x221a80, Func Offset: 0xb0
	// Line 228, Address: 0x221a8c, Func Offset: 0xbc
	// Line 229, Address: 0x221a98, Func Offset: 0xc8
	// Line 231, Address: 0x221aa0, Func Offset: 0xd0
	// Line 232, Address: 0x221abc, Func Offset: 0xec
	// Line 233, Address: 0x221ac8, Func Offset: 0xf8
	// Line 234, Address: 0x221ae4, Func Offset: 0x114
	// Line 235, Address: 0x221af0, Func Offset: 0x120
	// Line 237, Address: 0x221af8, Func Offset: 0x128
	// Line 238, Address: 0x221b14, Func Offset: 0x144
	// Line 239, Address: 0x221b20, Func Offset: 0x150
	// Line 240, Address: 0x221b2c, Func Offset: 0x15c
	// Line 243, Address: 0x221b48, Func Offset: 0x178
	// Func End, Address: 0x221b54, Func Offset: 0x184
}

// 
// Start address: 0x221b60
void mar_main_stand()
{
	shMariaWork* w;
	// Line 248, Address: 0x221b60, Func Offset: 0
	// Line 249, Address: 0x221b6c, Func Offset: 0xc
	// Line 255, Address: 0x221b74, Func Offset: 0x14
	// Line 256, Address: 0x221b88, Func Offset: 0x28
	// Line 257, Address: 0x221b94, Func Offset: 0x34
	// Line 262, Address: 0x221b9c, Func Offset: 0x3c
	// Line 263, Address: 0x221bb0, Func Offset: 0x50
	// Line 264, Address: 0x221bbc, Func Offset: 0x5c
	// Line 267, Address: 0x221bc4, Func Offset: 0x64
	// Func End, Address: 0x221bd8, Func Offset: 0x78
}

// 
// Start address: 0x221be0
void mar_main_close_to()
{
	shMariaWork* w;
	// Line 269, Address: 0x221be0, Func Offset: 0
	// Line 270, Address: 0x221bec, Func Offset: 0xc
	// Line 275, Address: 0x221bf4, Func Offset: 0x14
	// Line 276, Address: 0x221c08, Func Offset: 0x28
	// Line 277, Address: 0x221c14, Func Offset: 0x34
	// Line 282, Address: 0x221c1c, Func Offset: 0x3c
	// Line 283, Address: 0x221c50, Func Offset: 0x70
	// Line 284, Address: 0x221c5c, Func Offset: 0x7c
	// Line 289, Address: 0x221c64, Func Offset: 0x84
	// Line 291, Address: 0x221ca8, Func Offset: 0xc8
	// Line 292, Address: 0x221cb4, Func Offset: 0xd4
	// Line 297, Address: 0x221cbc, Func Offset: 0xdc
	// Line 298, Address: 0x221cd0, Func Offset: 0xf0
	// Line 299, Address: 0x221cdc, Func Offset: 0xfc
	// Line 302, Address: 0x221ce4, Func Offset: 0x104
	// Func End, Address: 0x221cf8, Func Offset: 0x118
}

// 
// Start address: 0x221d00
void mar_main_alert()
{
	shMariaWork* w;
	// Line 304, Address: 0x221d00, Func Offset: 0
	// Line 305, Address: 0x221d0c, Func Offset: 0xc
	// Line 310, Address: 0x221d14, Func Offset: 0x14
	// Line 311, Address: 0x221d28, Func Offset: 0x28
	// Line 312, Address: 0x221d34, Func Offset: 0x34
	// Line 317, Address: 0x221d3c, Func Offset: 0x3c
	// Line 318, Address: 0x221d50, Func Offset: 0x50
	// Line 319, Address: 0x221d5c, Func Offset: 0x5c
	// Line 322, Address: 0x221d64, Func Offset: 0x64
	// Func End, Address: 0x221d78, Func Offset: 0x78
}

// 
// Start address: 0x221d80
void mar_main_discover()
{
	shMariaWork* w;
	// Line 324, Address: 0x221d80, Func Offset: 0
	// Line 325, Address: 0x221d88, Func Offset: 0x8
	// Line 326, Address: 0x221d90, Func Offset: 0x10
	// Func End, Address: 0x221da0, Func Offset: 0x20
}

// 
// Start address: 0x221da0
void mar_main_recover()
{
	shMariaWork* w;
	// Line 328, Address: 0x221da0, Func Offset: 0
	// Line 329, Address: 0x221dac, Func Offset: 0xc
	// Line 334, Address: 0x221db4, Func Offset: 0x14
	// Line 335, Address: 0x221dc8, Func Offset: 0x28
	// Line 336, Address: 0x221dd4, Func Offset: 0x34
	// Line 341, Address: 0x221ddc, Func Offset: 0x3c
	// Line 342, Address: 0x221df0, Func Offset: 0x50
	// Line 343, Address: 0x221dfc, Func Offset: 0x5c
	// Line 346, Address: 0x221e04, Func Offset: 0x64
	// Func End, Address: 0x221e18, Func Offset: 0x78
}

// 
// Start address: 0x221e20
void mar_main_boredom()
{
	shMariaWork* w;
	// Line 348, Address: 0x221e20, Func Offset: 0
	// Line 349, Address: 0x221e2c, Func Offset: 0xc
	// Line 354, Address: 0x221e34, Func Offset: 0x14
	// Line 355, Address: 0x221e48, Func Offset: 0x28
	// Line 356, Address: 0x221e54, Func Offset: 0x34
	// Line 361, Address: 0x221e5c, Func Offset: 0x3c
	// Line 362, Address: 0x221e70, Func Offset: 0x50
	// Line 363, Address: 0x221e7c, Func Offset: 0x5c
	// Line 366, Address: 0x221e84, Func Offset: 0x64
	// Func End, Address: 0x221e98, Func Offset: 0x78
}

// 
// Start address: 0x221ea0
void mar_main_damaged()
{
	shMariaWork* w;
	// Line 368, Address: 0x221ea0, Func Offset: 0
	// Line 369, Address: 0x221eac, Func Offset: 0xc
	// Line 374, Address: 0x221eb4, Func Offset: 0x14
	// Line 375, Address: 0x221ec8, Func Offset: 0x28
	// Line 380, Address: 0x221ed4, Func Offset: 0x34
	// Line 381, Address: 0x221ee8, Func Offset: 0x48
	// Line 382, Address: 0x221ef4, Func Offset: 0x54
	// Line 385, Address: 0x221efc, Func Offset: 0x5c
	// Func End, Address: 0x221f10, Func Offset: 0x70
}

// 
// Start address: 0x221f10
void mar_sub_stand(SubCharacter* p)
{
	// Line 406, Address: 0x221f10, Func Offset: 0
	// Line 408, Address: 0x221f1c, Func Offset: 0xc
	// Line 411, Address: 0x221f28, Func Offset: 0x18
	// Line 414, Address: 0x221f44, Func Offset: 0x34
	// Line 415, Address: 0x221f50, Func Offset: 0x40
	// Func End, Address: 0x221f60, Func Offset: 0x50
}

// 
// Start address: 0x221f60
void mar_sub_relax(SubCharacter* p)
{
	// Line 417, Address: 0x221f60, Func Offset: 0
	// Line 419, Address: 0x221f6c, Func Offset: 0xc
	// Line 422, Address: 0x221f78, Func Offset: 0x18
	// Line 425, Address: 0x221f94, Func Offset: 0x34
	// Line 428, Address: 0x221fa0, Func Offset: 0x40
	// Line 430, Address: 0x221fd4, Func Offset: 0x74
	// Line 431, Address: 0x221fe8, Func Offset: 0x88
	// Line 432, Address: 0x221ff4, Func Offset: 0x94
	// Line 434, Address: 0x222008, Func Offset: 0xa8
	// Line 436, Address: 0x222010, Func Offset: 0xb0
	// Line 437, Address: 0x222034, Func Offset: 0xd4
	// Line 438, Address: 0x222040, Func Offset: 0xe0
	// Line 440, Address: 0x222054, Func Offset: 0xf4
	// Line 442, Address: 0x22205c, Func Offset: 0xfc
	// Line 443, Address: 0x222070, Func Offset: 0x110
	// Line 444, Address: 0x22207c, Func Offset: 0x11c
	// Line 445, Address: 0x222088, Func Offset: 0x128
	// Line 450, Address: 0x22209c, Func Offset: 0x13c
	// Line 451, Address: 0x2220b4, Func Offset: 0x154
	// Line 452, Address: 0x2220bc, Func Offset: 0x15c
	// Line 454, Address: 0x2220d0, Func Offset: 0x170
	// Func End, Address: 0x2220e0, Func Offset: 0x180
}

// 
// Start address: 0x2220e0
void mar_sub_relax_off(SubCharacter* p)
{
	// Line 456, Address: 0x2220e0, Func Offset: 0
	// Line 458, Address: 0x2220ec, Func Offset: 0xc
	// Line 461, Address: 0x2220f8, Func Offset: 0x18
	// Line 464, Address: 0x222104, Func Offset: 0x24
	// Line 465, Address: 0x222118, Func Offset: 0x38
	// Line 466, Address: 0x22212c, Func Offset: 0x4c
	// Line 468, Address: 0x222140, Func Offset: 0x60
	// Func End, Address: 0x222150, Func Offset: 0x70
}

// 
// Start address: 0x222150
void mar_sub_afraid(SubCharacter* p)
{
	short frame;
	// Line 470, Address: 0x222150, Func Offset: 0
	// Line 471, Address: 0x222160, Func Offset: 0x10
	// Line 474, Address: 0x222174, Func Offset: 0x24
	// Line 477, Address: 0x222180, Func Offset: 0x30
	// Line 480, Address: 0x22219c, Func Offset: 0x4c
	// Line 484, Address: 0x2221a8, Func Offset: 0x58
	// Line 485, Address: 0x2221bc, Func Offset: 0x6c
	// Line 486, Address: 0x2221d0, Func Offset: 0x80
	// Line 487, Address: 0x2221e4, Func Offset: 0x94
	// Line 489, Address: 0x2221f0, Func Offset: 0xa0
	// Func End, Address: 0x222204, Func Offset: 0xb4
}

// 
// Start address: 0x222210
void mar_sub_tired(SubCharacter* p)
{
	// Line 491, Address: 0x222210, Func Offset: 0
	// Line 493, Address: 0x22221c, Func Offset: 0xc
	// Line 496, Address: 0x222228, Func Offset: 0x18
	// Line 499, Address: 0x222244, Func Offset: 0x34
	// Line 502, Address: 0x222250, Func Offset: 0x40
	// Line 503, Address: 0x222270, Func Offset: 0x60
	// Line 504, Address: 0x222284, Func Offset: 0x74
	// Line 506, Address: 0x222298, Func Offset: 0x88
	// Func End, Address: 0x2222a8, Func Offset: 0x98
}

// 
// Start address: 0x2222b0
void mar_sub_walk(SubCharacter* p)
{
	// Line 508, Address: 0x2222b0, Func Offset: 0
	// Line 513, Address: 0x2222bc, Func Offset: 0xc
	// Line 516, Address: 0x2222c8, Func Offset: 0x18
	// Line 518, Address: 0x2222f0, Func Offset: 0x40
	// Line 519, Address: 0x222314, Func Offset: 0x64
	// Line 520, Address: 0x222370, Func Offset: 0xc0
	// Line 522, Address: 0x222378, Func Offset: 0xc8
	// Line 523, Address: 0x22239c, Func Offset: 0xec
	// Line 527, Address: 0x2223f8, Func Offset: 0x148
	// Line 528, Address: 0x222408, Func Offset: 0x158
	// Line 530, Address: 0x222448, Func Offset: 0x198
	// Line 531, Address: 0x222450, Func Offset: 0x1a0
	// Line 535, Address: 0x222488, Func Offset: 0x1d8
	// Line 538, Address: 0x222498, Func Offset: 0x1e8
	// Line 539, Address: 0x2224c0, Func Offset: 0x210
	// Line 541, Address: 0x2224d4, Func Offset: 0x224
	// Func End, Address: 0x2224e4, Func Offset: 0x234
}

// 
// Start address: 0x2224f0
void mar_sub_run(SubCharacter* p)
{
	// Line 543, Address: 0x2224f0, Func Offset: 0
	// Line 548, Address: 0x2224fc, Func Offset: 0xc
	// Line 551, Address: 0x222508, Func Offset: 0x18
	// Line 555, Address: 0x222524, Func Offset: 0x34
	// Line 556, Address: 0x222548, Func Offset: 0x58
	// Line 559, Address: 0x22259c, Func Offset: 0xac
	// Line 560, Address: 0x2225ac, Func Offset: 0xbc
	// Line 562, Address: 0x2225ec, Func Offset: 0xfc
	// Line 563, Address: 0x2225f4, Func Offset: 0x104
	// Line 567, Address: 0x22262c, Func Offset: 0x13c
	// Line 570, Address: 0x22263c, Func Offset: 0x14c
	// Line 571, Address: 0x222664, Func Offset: 0x174
	// Line 573, Address: 0x222678, Func Offset: 0x188
	// Func End, Address: 0x222688, Func Offset: 0x198
}

// 
// Start address: 0x222690
void mar_sub_damage(SubCharacter* p)
{
	short cur_frame;
	float damage_angle;
	_AnimeInfo* a_info;
	// Line 575, Address: 0x222690, Func Offset: 0
	// Line 576, Address: 0x2226a4, Func Offset: 0x14
	// Line 581, Address: 0x2226b4, Func Offset: 0x24
	// Line 584, Address: 0x2226c0, Func Offset: 0x30
	// Line 586, Address: 0x2226cc, Func Offset: 0x3c
	// Line 587, Address: 0x2226e0, Func Offset: 0x50
	// Line 588, Address: 0x2226f0, Func Offset: 0x60
	// Line 589, Address: 0x22270c, Func Offset: 0x7c
	// Line 590, Address: 0x22272c, Func Offset: 0x9c
	// Line 591, Address: 0x222734, Func Offset: 0xa4
	// Line 592, Address: 0x222748, Func Offset: 0xb8
	// Line 593, Address: 0x22275c, Func Offset: 0xcc
	// Line 594, Address: 0x222764, Func Offset: 0xd4
	// Line 598, Address: 0x222770, Func Offset: 0xe0
	// Line 599, Address: 0x222784, Func Offset: 0xf4
	// Line 605, Address: 0x2227b8, Func Offset: 0x128
	// Line 606, Address: 0x2227e0, Func Offset: 0x150
	// Line 607, Address: 0x2227f0, Func Offset: 0x160
	// Line 608, Address: 0x2227f8, Func Offset: 0x168
	// Line 610, Address: 0x22280c, Func Offset: 0x17c
	// Line 615, Address: 0x222814, Func Offset: 0x184
	// Line 616, Address: 0x222828, Func Offset: 0x198
	// Line 617, Address: 0x22283c, Func Offset: 0x1ac
	// Line 618, Address: 0x222858, Func Offset: 0x1c8
	// Line 620, Address: 0x22286c, Func Offset: 0x1dc
	// Line 641, Address: 0x222874, Func Offset: 0x1e4
	// Line 642, Address: 0x22289c, Func Offset: 0x20c
	// Line 644, Address: 0x2228c0, Func Offset: 0x230
	// Line 650, Address: 0x2228c8, Func Offset: 0x238
	// Line 651, Address: 0x2228f0, Func Offset: 0x260
	// Line 658, Address: 0x222914, Func Offset: 0x284
	// Line 659, Address: 0x222928, Func Offset: 0x298
	// Line 660, Address: 0x22293c, Func Offset: 0x2ac
	// Line 663, Address: 0x222950, Func Offset: 0x2c0
	// Line 664, Address: 0x222960, Func Offset: 0x2d0
	// Line 665, Address: 0x222970, Func Offset: 0x2e0
	// Line 668, Address: 0x222978, Func Offset: 0x2e8
	// Func End, Address: 0x222990, Func Offset: 0x300
}

// 
// Start address: 0x222990
int MariaCheckJamesLook(float* sp, float* ep)
{
	_CL_VHIT_RESULT result;
	// Line 696, Address: 0x222990, Func Offset: 0
	// Line 699, Address: 0x2229a0, Func Offset: 0x10
	// Line 701, Address: 0x2229c0, Func Offset: 0x30
	// Line 702, Address: 0x2229e4, Func Offset: 0x54
	// Line 704, Address: 0x2229f0, Func Offset: 0x60
	// Line 706, Address: 0x2229f4, Func Offset: 0x64
	// Func End, Address: 0x222a04, Func Offset: 0x74
}

// 
// Start address: 0x222a10
int JamesCheckMariaLook(float* sp, float* ep)
{
	_CL_VHIT_RESULT result;
	// Line 716, Address: 0x222a10, Func Offset: 0
	// Line 719, Address: 0x222a20, Func Offset: 0x10
	// Line 721, Address: 0x222a40, Func Offset: 0x30
	// Line 722, Address: 0x222a64, Func Offset: 0x54
	// Line 724, Address: 0x222a70, Func Offset: 0x60
	// Line 726, Address: 0x222a74, Func Offset: 0x64
	// Func End, Address: 0x222a84, Func Offset: 0x74
}

// 
// Start address: 0x222a90
int CheckJamesLook1(float* sp, float* ep)
{
	_CL_VHIT_RESULT result;
	// Line 736, Address: 0x222a90, Func Offset: 0
	// Line 739, Address: 0x222aa0, Func Offset: 0x10
	// Line 741, Address: 0x222abc, Func Offset: 0x2c
	// Line 742, Address: 0x222ae0, Func Offset: 0x50
	// Line 744, Address: 0x222aec, Func Offset: 0x5c
	// Line 746, Address: 0x222af0, Func Offset: 0x60
	// Func End, Address: 0x222b00, Func Offset: 0x70
}

// 
// Start address: 0x222b00
int CheckJamesLook2(float* sp, float* ep)
{
	_CL_VHIT_RESULT result;
	// Line 756, Address: 0x222b00, Func Offset: 0
	// Line 759, Address: 0x222b10, Func Offset: 0x10
	// Line 761, Address: 0x222b30, Func Offset: 0x30
	// Line 762, Address: 0x222b3c, Func Offset: 0x3c
	// Line 764, Address: 0x222b48, Func Offset: 0x48
	// Line 766, Address: 0x222b4c, Func Offset: 0x4c
	// Func End, Address: 0x222b5c, Func Offset: 0x5c
}

// 
// Start address: 0x222b60
int MariaCheckLook1(float* sp, float* ep)
{
	_CL_VHIT_RESULT result;
	// Line 776, Address: 0x222b60, Func Offset: 0
	// Line 779, Address: 0x222b70, Func Offset: 0x10
	// Line 781, Address: 0x222b90, Func Offset: 0x30
	// Line 783, Address: 0x222bc0, Func Offset: 0x60
	// Line 785, Address: 0x222bcc, Func Offset: 0x6c
	// Line 787, Address: 0x222bd0, Func Offset: 0x70
	// Func End, Address: 0x222be0, Func Offset: 0x80
}

// 
// Start address: 0x222be0
int MariaCheckLook2(float* sp, float* ep)
{
	_CL_VHIT_RESULT result;
	// Line 789, Address: 0x222be0, Func Offset: 0
	// Line 792, Address: 0x222bf0, Func Offset: 0x10
	// Line 794, Address: 0x222c10, Func Offset: 0x30
	// Line 795, Address: 0x222c34, Func Offset: 0x54
	// Line 797, Address: 0x222c40, Func Offset: 0x60
	// Line 799, Address: 0x222c44, Func Offset: 0x64
	// Func End, Address: 0x222c54, Func Offset: 0x74
}

// 
// Start address: 0x222c60
void MariaSetStraightRoot()
{
	float ep1[4];
	float ep0[4];
	float sp1[4];
	float sp0[4];
	int j;
	int i;
	// Line 859, Address: 0x222c60, Func Offset: 0
	// Line 868, Address: 0x222c6c, Func Offset: 0xc
	// Line 869, Address: 0x222c7c, Func Offset: 0x1c
	// Line 870, Address: 0x222c8c, Func Offset: 0x2c
	// Line 871, Address: 0x222cac, Func Offset: 0x4c
	// Line 872, Address: 0x222cbc, Func Offset: 0x5c
	// Line 873, Address: 0x222ccc, Func Offset: 0x6c
	// Line 882, Address: 0x222cec, Func Offset: 0x8c
	// Line 883, Address: 0x222cfc, Func Offset: 0x9c
	// Line 885, Address: 0x222d4c, Func Offset: 0xec
	// Line 887, Address: 0x222d60, Func Offset: 0x100
	// Line 890, Address: 0x222d68, Func Offset: 0x108
	// Line 891, Address: 0x222d94, Func Offset: 0x134
	// Line 894, Address: 0x222dc4, Func Offset: 0x164
	// Line 898, Address: 0x222dd8, Func Offset: 0x178
	// Line 899, Address: 0x222dec, Func Offset: 0x18c
	// Line 900, Address: 0x222e00, Func Offset: 0x1a0
	// Line 905, Address: 0x222e1c, Func Offset: 0x1bc
	// Line 907, Address: 0x222e44, Func Offset: 0x1e4
	// Line 910, Address: 0x222e54, Func Offset: 0x1f4
	// Line 911, Address: 0x222e60, Func Offset: 0x200
	// Line 912, Address: 0x222e84, Func Offset: 0x224
	// Line 913, Address: 0x222eb4, Func Offset: 0x254
	// Line 914, Address: 0x222ec0, Func Offset: 0x260
	// Line 915, Address: 0x222ef4, Func Offset: 0x294
	// Line 916, Address: 0x222f0c, Func Offset: 0x2ac
	// Line 918, Address: 0x222f20, Func Offset: 0x2c0
	// Line 921, Address: 0x222f30, Func Offset: 0x2d0
	// Line 922, Address: 0x222f40, Func Offset: 0x2e0
	// Line 939, Address: 0x222f74, Func Offset: 0x314
	// Func End, Address: 0x222f88, Func Offset: 0x328
}

// 
// Start address: 0x222f90
unsigned short SubCharacter::MariaDamageMotionNo()
{
	int dir;
	int kind;
	float roty2;
	float roty;
	float direction[4];
	unsigned short damage_motion_enemy_index[2][2][11];
	unsigned short damage_motion_james_weapon_index[2][2][21];
	unsigned short damage_motion_james_body_index[2];
	// Line 1050, Address: 0x222f90, Func Offset: 0
	// Line 1052, Address: 0x222fa0, Func Offset: 0x10
	// Line 1057, Address: 0x222fb4, Func Offset: 0x24
	// Line 1165, Address: 0x222ff0, Func Offset: 0x60
	// Line 1221, Address: 0x22302c, Func Offset: 0x9c
	// Line 1222, Address: 0x223038, Func Offset: 0xa8
	// Line 1223, Address: 0x223044, Func Offset: 0xb4
	// Line 1224, Address: 0x22304c, Func Offset: 0xbc
	// Line 1225, Address: 0x223074, Func Offset: 0xe4
	// Line 1228, Address: 0x223084, Func Offset: 0xf4
	// Line 1229, Address: 0x22308c, Func Offset: 0xfc
	// Line 1230, Address: 0x223108, Func Offset: 0x178
	// Line 1231, Address: 0x223148, Func Offset: 0x1b8
	// Line 1233, Address: 0x223154, Func Offset: 0x1c4
	// Line 1235, Address: 0x223158, Func Offset: 0x1c8
	// Line 1236, Address: 0x223164, Func Offset: 0x1d4
	// Line 1238, Address: 0x223178, Func Offset: 0x1e8
	// Line 1239, Address: 0x22318c, Func Offset: 0x1fc
	// Line 1240, Address: 0x223198, Func Offset: 0x208
	// Line 1242, Address: 0x2231c8, Func Offset: 0x238
	// Line 1243, Address: 0x2231d4, Func Offset: 0x244
	// Line 1246, Address: 0x223200, Func Offset: 0x270
	// Func End, Address: 0x223214, Func Offset: 0x284
}

// 
// Start address: 0x223220
int MariaTouchJamesCheck()
{
	float inner;
	float jms_vec[4];
	float to_jms[4];
	// Line 1251, Address: 0x223220, Func Offset: 0
	// Line 1256, Address: 0x223228, Func Offset: 0x8
	// Line 1257, Address: 0x22323c, Func Offset: 0x1c
	// Line 1260, Address: 0x223250, Func Offset: 0x30
	// Line 1261, Address: 0x223278, Func Offset: 0x58
	// Line 1262, Address: 0x2232a0, Func Offset: 0x80
	// Line 1263, Address: 0x2232c0, Func Offset: 0xa0
	// Line 1264, Address: 0x2232e0, Func Offset: 0xc0
	// Line 1267, Address: 0x223308, Func Offset: 0xe8
	// Line 1268, Address: 0x22331c, Func Offset: 0xfc
	// Line 1271, Address: 0x223330, Func Offset: 0x110
	// Line 1273, Address: 0x22335c, Func Offset: 0x13c
	// Line 1274, Address: 0x22337c, Func Offset: 0x15c
	// Line 1278, Address: 0x223388, Func Offset: 0x168
	// Line 1279, Address: 0x22338c, Func Offset: 0x16c
	// Func End, Address: 0x22339c, Func Offset: 0x17c
}

// 
// Start address: 0x2233a0
void MariaCheckFootLine()
{
	// Line 1284, Address: 0x2233a0, Func Offset: 0
	// Line 1285, Address: 0x2233a4, Func Offset: 0x4
	// Func End, Address: 0x2233b0, Func Offset: 0x10
}

// 
// Start address: 0x2233b0
void SubCharacter::MariaSetSearchArea()
{
	// Line 1298, Address: 0x2233b0, Func Offset: 0
	// Line 1316, Address: 0x2233b8, Func Offset: 0x8
	// Line 1317, Address: 0x2233c8, Func Offset: 0x18
	// Line 1323, Address: 0x2233d8, Func Offset: 0x28
	// Line 1324, Address: 0x2233e8, Func Offset: 0x38
	// Line 1325, Address: 0x2233f8, Func Offset: 0x48
	// Func End, Address: 0x223404, Func Offset: 0x54
}

// 
// Start address: 0x223410
void MariaSetColumn_SetTarget(_CL_HITPOLY_COLUMN* mov, _CL_HITPOLY_COLUMN* atk, float* mov_z, float* atk_z)
{
	_AnimeInfo* a_info;
	// Line 1332, Address: 0x223410, Func Offset: 0
	// Line 1333, Address: 0x22342c, Func Offset: 0x1c
	// Line 1336, Address: 0x223440, Func Offset: 0x30
	// Line 1337, Address: 0x223458, Func Offset: 0x48
	// Line 1338, Address: 0x22346c, Func Offset: 0x5c
	// Line 1341, Address: 0x223480, Func Offset: 0x70
	// Line 1342, Address: 0x22349c, Func Offset: 0x8c
	// Line 1343, Address: 0x2234c8, Func Offset: 0xb8
	// Line 1344, Address: 0x2234e4, Func Offset: 0xd4
	// Line 1345, Address: 0x223510, Func Offset: 0x100
	// Line 1347, Address: 0x223528, Func Offset: 0x118
	// Line 1348, Address: 0x223534, Func Offset: 0x124
	// Line 1351, Address: 0x223540, Func Offset: 0x130
	// Line 1355, Address: 0x22356c, Func Offset: 0x15c
	// Line 1357, Address: 0x223588, Func Offset: 0x178
	// Line 1364, Address: 0x223598, Func Offset: 0x188
	// Line 1365, Address: 0x2235a8, Func Offset: 0x198
	// Line 1366, Address: 0x2235c0, Func Offset: 0x1b0
	// Func End, Address: 0x2235d4, Func Offset: 0x1c4
}

// 
// Start address: 0x2235e0
void MariaSetColumn_CloseToTarget(_CL_HITPOLY_COLUMN* mov, _CL_HITPOLY_COLUMN* atk, float* mov_z, float* atk_z)
{
	// Line 1373, Address: 0x2235e0, Func Offset: 0
	// Line 1378, Address: 0x2235f8, Func Offset: 0x18
	// Line 1379, Address: 0x223614, Func Offset: 0x34
	// Line 1380, Address: 0x223640, Func Offset: 0x60
	// Line 1381, Address: 0x22365c, Func Offset: 0x7c
	// Line 1382, Address: 0x223674, Func Offset: 0x94
	// Line 1383, Address: 0x223688, Func Offset: 0xa8
	// Line 1384, Address: 0x2236b8, Func Offset: 0xd8
	// Line 1386, Address: 0x2236cc, Func Offset: 0xec
	// Line 1387, Address: 0x2236ec, Func Offset: 0x10c
	// Line 1388, Address: 0x22370c, Func Offset: 0x12c
	// Line 1389, Address: 0x22372c, Func Offset: 0x14c
	// Line 1392, Address: 0x22374c, Func Offset: 0x16c
	// Line 1393, Address: 0x223780, Func Offset: 0x1a0
	// Line 1394, Address: 0x2237b4, Func Offset: 0x1d4
	// Line 1395, Address: 0x2237e8, Func Offset: 0x208
	// Line 1397, Address: 0x22381c, Func Offset: 0x23c
	// Func End, Address: 0x22382c, Func Offset: 0x24c
}

// 
// Start address: 0x223830
void SubCharacter::MariaSetHitColumn()
{
	float mat[4][4];
	float atk_z;
	float mov_z;
	_CL_HITPOLY_COLUMN col_atk;
	_CL_HITPOLY_COLUMN col_mov;
	// Line 1403, Address: 0x223830, Func Offset: 0
	// Line 1411, Address: 0x22383c, Func Offset: 0xc
	// Line 1412, Address: 0x223854, Func Offset: 0x24
	// Line 1415, Address: 0x22386c, Func Offset: 0x3c
	// Line 1417, Address: 0x22388c, Func Offset: 0x5c
	// Line 1418, Address: 0x2238b8, Func Offset: 0x88
	// Line 1420, Address: 0x2238f4, Func Offset: 0xc4
	// Line 1421, Address: 0x223904, Func Offset: 0xd4
	// Line 1422, Address: 0x223910, Func Offset: 0xe0
	// Func End, Address: 0x223920, Func Offset: 0xf0
}

// 
// Start address: 0x223920
void SubCharacter::MariaCheckNeckAngle()
{
	float tmp[4];
	float pos[4];
	SubCharacterDisp* this_d;
	// Line 1433, Address: 0x223920, Func Offset: 0
	// Line 1443, Address: 0x223930, Func Offset: 0x10
	// Line 1448, Address: 0x223968, Func Offset: 0x48
	// Line 1449, Address: 0x223974, Func Offset: 0x54
	// Line 1450, Address: 0x223980, Func Offset: 0x60
	// Line 1455, Address: 0x223988, Func Offset: 0x68
	// Line 1466, Address: 0x223998, Func Offset: 0x78
	// Line 1467, Address: 0x2239b0, Func Offset: 0x90
	// Line 1469, Address: 0x2239c0, Func Offset: 0xa0
	// Line 1470, Address: 0x2239d0, Func Offset: 0xb0
	// Line 1471, Address: 0x2239e0, Func Offset: 0xc0
	// Line 1474, Address: 0x2239f0, Func Offset: 0xd0
	// Line 1475, Address: 0x223a10, Func Offset: 0xf0
	// Line 1477, Address: 0x223a48, Func Offset: 0x128
	// Line 1478, Address: 0x223af0, Func Offset: 0x1d0
	// Line 1479, Address: 0x223b98, Func Offset: 0x278
	// Line 1480, Address: 0x223ba0, Func Offset: 0x280
	// Line 1481, Address: 0x223bac, Func Offset: 0x28c
	// Line 1487, Address: 0x223bb8, Func Offset: 0x298
	// Line 1494, Address: 0x223be8, Func Offset: 0x2c8
	// Line 1501, Address: 0x223c1c, Func Offset: 0x2fc
	// Func End, Address: 0x223c30, Func Offset: 0x310
}

// 
// Start address: 0x223c30
void SubCharacter::MariaUpdateStatusInitial()
{
	// Line 1509, Address: 0x223c30, Func Offset: 0
	// Line 1512, Address: 0x223c40, Func Offset: 0x10
	// Line 1515, Address: 0x223c5c, Func Offset: 0x2c
	// Line 1522, Address: 0x223c6c, Func Offset: 0x3c
	// Line 1526, Address: 0x223c88, Func Offset: 0x58
	// Line 1530, Address: 0x223cd4, Func Offset: 0xa4
	// Line 1531, Address: 0x223cec, Func Offset: 0xbc
	// Line 1532, Address: 0x223d08, Func Offset: 0xd8
	// Line 1536, Address: 0x223d64, Func Offset: 0x134
	// Line 1537, Address: 0x223d84, Func Offset: 0x154
	// Line 1538, Address: 0x223db8, Func Offset: 0x188
	// Line 1544, Address: 0x223dc4, Func Offset: 0x194
	// Func End, Address: 0x223dd8, Func Offset: 0x1a8
}

// 
// Start address: 0x223de0
void MariaUpdateStatusExecPhase1()
{
	// Line 1553, Address: 0x223de0, Func Offset: 0
	// Line 1555, Address: 0x223de8, Func Offset: 0x8
	// Line 1557, Address: 0x223df8, Func Offset: 0x18
	// Line 1559, Address: 0x223e08, Func Offset: 0x28
	// Line 1560, Address: 0x223e3c, Func Offset: 0x5c
	// Line 1561, Address: 0x223e50, Func Offset: 0x70
	// Line 1564, Address: 0x223e58, Func Offset: 0x78
	// Line 1565, Address: 0x223e6c, Func Offset: 0x8c
	// Line 1566, Address: 0x223e80, Func Offset: 0xa0
	// Line 1569, Address: 0x223e88, Func Offset: 0xa8
	// Line 1570, Address: 0x223ebc, Func Offset: 0xdc
	// Line 1571, Address: 0x223ed0, Func Offset: 0xf0
	// Line 1574, Address: 0x223ed8, Func Offset: 0xf8
	// Line 1575, Address: 0x223ee8, Func Offset: 0x108
	// Line 1576, Address: 0x223efc, Func Offset: 0x11c
	// Line 1579, Address: 0x223f04, Func Offset: 0x124
	// Line 1581, Address: 0x223f40, Func Offset: 0x160
	// Line 1582, Address: 0x223f54, Func Offset: 0x174
	// Line 1585, Address: 0x223f5c, Func Offset: 0x17c
	// Line 1589, Address: 0x223f70, Func Offset: 0x190
	// Func End, Address: 0x223f80, Func Offset: 0x1a0
}

// 
// Start address: 0x223f80
void SubCharacter::MariaUpdateStatusExecPhase2()
{
	void(*mar_main_func)(SubCharacter*);
	// Line 1596, Address: 0x223f80, Func Offset: 0
	// Line 1597, Address: 0x223f90, Func Offset: 0x10
	// Line 1605, Address: 0x223f94, Func Offset: 0x14
	// Line 1606, Address: 0x223fb4, Func Offset: 0x34
	// Line 1609, Address: 0x223fc0, Func Offset: 0x40
	// Func End, Address: 0x223fd4, Func Offset: 0x54
}

// 
// Start address: 0x223fe0
void SubCharacter::MariaUpdateStatusExec()
{
	// Line 1616, Address: 0x223fe0, Func Offset: 0
	// Line 1617, Address: 0x223fec, Func Offset: 0xc
	// Line 1618, Address: 0x223ff8, Func Offset: 0x18
	// Line 1626, Address: 0x224004, Func Offset: 0x24
	// Func End, Address: 0x224014, Func Offset: 0x34
}

// 
// Start address: 0x224020
void GetMariaPartsWorldMatrix(float mat[4], unsigned int parts_name)
{
	shSkelton* sk;
	int i1;
	// Line 1639, Address: 0x224020, Func Offset: 0
	// Line 1643, Address: 0x224038, Func Offset: 0x18
	// Line 1645, Address: 0x224044, Func Offset: 0x24
	// Line 1646, Address: 0x224050, Func Offset: 0x30
	// Line 1648, Address: 0x22406c, Func Offset: 0x4c
	// Line 1653, Address: 0x224088, Func Offset: 0x68
	// Func End, Address: 0x2240a0, Func Offset: 0x80
}

// 
// Start address: 0x2240a0
void SubCharacter::MariaCheckDamage()
{
	// Line 1661, Address: 0x2240a0, Func Offset: 0
	// Line 1666, Address: 0x2240b0, Func Offset: 0x10
	// Line 1668, Address: 0x2240c0, Func Offset: 0x20
	// Line 1670, Address: 0x2240cc, Func Offset: 0x2c
	// Line 1672, Address: 0x2240ec, Func Offset: 0x4c
	// Line 1673, Address: 0x224100, Func Offset: 0x60
	// Line 1674, Address: 0x22410c, Func Offset: 0x6c
	// Line 1678, Address: 0x224164, Func Offset: 0xc4
	// Line 1679, Address: 0x2241a0, Func Offset: 0x100
	// Line 1681, Address: 0x2241ac, Func Offset: 0x10c
	// Line 1683, Address: 0x2241b4, Func Offset: 0x114
	// Line 1684, Address: 0x2241c8, Func Offset: 0x128
	// Line 1686, Address: 0x2241dc, Func Offset: 0x13c
	// Line 1687, Address: 0x2241f8, Func Offset: 0x158
	// Line 1688, Address: 0x224214, Func Offset: 0x174
	// Line 1691, Address: 0x224220, Func Offset: 0x180
	// Line 1692, Address: 0x224248, Func Offset: 0x1a8
	// Line 1694, Address: 0x224260, Func Offset: 0x1c0
	// Line 1698, Address: 0x224270, Func Offset: 0x1d0
	// Line 1701, Address: 0x224284, Func Offset: 0x1e4
	// Line 1703, Address: 0x2242dc, Func Offset: 0x23c
	// Line 1704, Address: 0x2242e8, Func Offset: 0x248
	// Line 1705, Address: 0x2242f4, Func Offset: 0x254
	// Line 1706, Address: 0x2242f8, Func Offset: 0x258
	// Line 1708, Address: 0x224314, Func Offset: 0x274
	// Line 1709, Address: 0x224370, Func Offset: 0x2d0
	// Func End, Address: 0x224384, Func Offset: 0x2e4
}

// 
// Start address: 0x224390
void SubCharacter::MariaCheckSetParameterPhase1()
{
	// Line 1718, Address: 0x224390, Func Offset: 0
	// Line 1724, Address: 0x22439c, Func Offset: 0xc
	// Line 1727, Address: 0x2243a8, Func Offset: 0x18
	// Line 1728, Address: 0x2243b4, Func Offset: 0x24
	// Func End, Address: 0x2243c4, Func Offset: 0x34
}

// 
// Start address: 0x2243d0
void SubCharacter::MariaCheckSetParameterPhase2()
{
	// Line 1737, Address: 0x2243d0, Func Offset: 0
	// Line 1738, Address: 0x2243dc, Func Offset: 0xc
	// Line 1739, Address: 0x2243e8, Func Offset: 0x18
	// Line 1741, Address: 0x2243f4, Func Offset: 0x24
	// Line 1742, Address: 0x224400, Func Offset: 0x30
	// Func End, Address: 0x224410, Func Offset: 0x40
}

// 
// Start address: 0x224410
void SubCharacter::MariaCheckControl()
{
	// Line 1751, Address: 0x224410, Func Offset: 0
	// Line 1752, Address: 0x22441c, Func Offset: 0xc
	// Line 1753, Address: 0x224428, Func Offset: 0x18
	// Line 1754, Address: 0x224434, Func Offset: 0x24
	// Func End, Address: 0x224444, Func Offset: 0x34
}

// 
// Start address: 0x224450
void maria_anim_set_all(_AnimeInfo* aip, int comp_type)
{
	// Line 1766, Address: 0x224450, Func Offset: 0
	// Line 1767, Address: 0x224460, Func Offset: 0x10
	// Line 1769, Address: 0x224490, Func Offset: 0x40
	// Func End, Address: 0x2244a0, Func Offset: 0x50
}

// 
// Start address: 0x2244a0
void MariaCheckAnime()
{
	int comp_type;
	int comp_type;
	int anime;
	_AnimeInfo* aip;
	SubCharacterDisp* scp_d;
	shMariaWork* w;
	int anime_change_check;
	// Line 1771, Address: 0x2244a0, Func Offset: 0
	// Line 1773, Address: 0x2244c0, Func Offset: 0x20
	// Line 1774, Address: 0x2244c8, Func Offset: 0x28
	// Line 1777, Address: 0x2244d0, Func Offset: 0x30
	// Line 1778, Address: 0x2244e4, Func Offset: 0x44
	// Line 1779, Address: 0x224510, Func Offset: 0x70
	// Line 1781, Address: 0x224540, Func Offset: 0xa0
	// Line 1782, Address: 0x224548, Func Offset: 0xa8
	// Line 1783, Address: 0x224558, Func Offset: 0xb8
	// Line 1784, Address: 0x224568, Func Offset: 0xc8
	// Line 1789, Address: 0x224570, Func Offset: 0xd0
	// Line 1791, Address: 0x2245a4, Func Offset: 0x104
	// Line 1792, Address: 0x2245a8, Func Offset: 0x108
	// Line 1794, Address: 0x2245b0, Func Offset: 0x110
	// Line 1795, Address: 0x2245b4, Func Offset: 0x114
	// Line 1797, Address: 0x2245bc, Func Offset: 0x11c
	// Line 1800, Address: 0x2245c0, Func Offset: 0x120
	// Line 1801, Address: 0x2245dc, Func Offset: 0x13c
	// Line 1802, Address: 0x2245ec, Func Offset: 0x14c
	// Line 1804, Address: 0x2245fc, Func Offset: 0x15c
	// Line 1806, Address: 0x224604, Func Offset: 0x164
	// Line 1807, Address: 0x22460c, Func Offset: 0x16c
	// Line 1808, Address: 0x22461c, Func Offset: 0x17c
	// Line 1809, Address: 0x22462c, Func Offset: 0x18c
	// Line 1811, Address: 0x224634, Func Offset: 0x194
	// Line 1812, Address: 0x22463c, Func Offset: 0x19c
	// Line 1813, Address: 0x22464c, Func Offset: 0x1ac
	// Line 1814, Address: 0x22465c, Func Offset: 0x1bc
	// Line 1816, Address: 0x224664, Func Offset: 0x1c4
	// Line 1817, Address: 0x22466c, Func Offset: 0x1cc
	// Line 1818, Address: 0x22467c, Func Offset: 0x1dc
	// Line 1819, Address: 0x22468c, Func Offset: 0x1ec
	// Line 1824, Address: 0x224694, Func Offset: 0x1f4
	// Line 1826, Address: 0x2246bc, Func Offset: 0x21c
	// Line 1827, Address: 0x2246c0, Func Offset: 0x220
	// Line 1828, Address: 0x2246d0, Func Offset: 0x230
	// Line 1830, Address: 0x2246d8, Func Offset: 0x238
	// Line 1831, Address: 0x2246dc, Func Offset: 0x23c
	// Line 1833, Address: 0x2246e4, Func Offset: 0x244
	// Line 1834, Address: 0x2246e8, Func Offset: 0x248
	// Line 1837, Address: 0x2246f8, Func Offset: 0x258
	// Line 1838, Address: 0x224700, Func Offset: 0x260
	// Line 1840, Address: 0x224710, Func Offset: 0x270
	// Line 1845, Address: 0x224718, Func Offset: 0x278
	// Line 1846, Address: 0x22472c, Func Offset: 0x28c
	// Line 1847, Address: 0x224730, Func Offset: 0x290
	// Line 1848, Address: 0x224740, Func Offset: 0x2a0
	// Line 1849, Address: 0x224748, Func Offset: 0x2a8
	// Line 1850, Address: 0x22474c, Func Offset: 0x2ac
	// Line 1852, Address: 0x22475c, Func Offset: 0x2bc
	// Line 1853, Address: 0x224764, Func Offset: 0x2c4
	// Line 1855, Address: 0x224774, Func Offset: 0x2d4
	// Line 1857, Address: 0x22477c, Func Offset: 0x2dc
	// Line 1858, Address: 0x2247a4, Func Offset: 0x304
	// Line 1859, Address: 0x2247b4, Func Offset: 0x314
	// Line 1862, Address: 0x2247c4, Func Offset: 0x324
	// Line 1863, Address: 0x2247d4, Func Offset: 0x334
	// Line 1867, Address: 0x2247e4, Func Offset: 0x344
	// Line 1868, Address: 0x2247fc, Func Offset: 0x35c
	// Line 1870, Address: 0x22480c, Func Offset: 0x36c
	// Line 1871, Address: 0x224824, Func Offset: 0x384
	// Line 1874, Address: 0x224834, Func Offset: 0x394
	// Line 1875, Address: 0x22484c, Func Offset: 0x3ac
	// Line 1876, Address: 0x22485c, Func Offset: 0x3bc
	// Line 1877, Address: 0x224864, Func Offset: 0x3c4
	// Line 1879, Address: 0x224874, Func Offset: 0x3d4
	// Func End, Address: 0x22489c, Func Offset: 0x3fc
}

// 
// Start address: 0x2248a0
void SubCharacter::MariaUpdatePosition()
{
	float cos_z;
	float cos_x;
	void(*mar_sub_func)(SubCharacter*);
	// Line 1888, Address: 0x2248a0, Func Offset: 0
	// Line 1889, Address: 0x2248b0, Func Offset: 0x10
	// Line 1897, Address: 0x2248b4, Func Offset: 0x14
	// Line 1898, Address: 0x2248d4, Func Offset: 0x34
	// Line 1908, Address: 0x2248e0, Func Offset: 0x40
	// Line 1909, Address: 0x2249bc, Func Offset: 0x11c
	// Line 1910, Address: 0x224a98, Func Offset: 0x1f8
	// Line 1912, Address: 0x224aa4, Func Offset: 0x204
	// Line 1923, Address: 0x224ab4, Func Offset: 0x214
	// Line 1924, Address: 0x224ac8, Func Offset: 0x228
	// Line 1925, Address: 0x224ae8, Func Offset: 0x248
	// Line 1929, Address: 0x224b08, Func Offset: 0x268
	// Line 1930, Address: 0x224b18, Func Offset: 0x278
	// Line 1931, Address: 0x224b28, Func Offset: 0x288
	// Line 1934, Address: 0x224b38, Func Offset: 0x298
	// Line 1935, Address: 0x224b54, Func Offset: 0x2b4
	// Line 1936, Address: 0x224b70, Func Offset: 0x2d0
	// Line 1938, Address: 0x224b8c, Func Offset: 0x2ec
	// Line 1954, Address: 0x224ba0, Func Offset: 0x300
	// Func End, Address: 0x224bb4, Func Offset: 0x314
}

// 
// Start address: 0x224bc0
void MariaCheckSound()
{
	// Line 1964, Address: 0x224bc0, Func Offset: 0
	// Func End, Address: 0x224bc8, Func Offset: 0x8
}

