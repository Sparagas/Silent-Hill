typedef struct SubCharacter;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct MariaSoundInfo;
typedef struct _CL_VHIT_CHARA;
typedef union _anon0;
typedef struct _CL_VHIT_RESULT;
typedef struct shMariaWork;
typedef union _anon1;
typedef struct _AnimeInfo;
typedef struct SubCharacterDisp;
typedef struct shSkelton;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct _anon2;
typedef enum _MARIA_MAIN_STATUS : unsigned char;
typedef struct shPlayerWork;
typedef struct _USXY;
typedef struct _anon3;
typedef struct shClusterAnime;
typedef struct _SXY;
typedef struct _IXY;
typedef enum _MARIA_SUB_STATUS : unsigned char;
typedef struct shAnime3d;
typedef struct shBattleFight;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct MariaAppearPoint;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct PAD_3D;
typedef struct shBattleInfo;
typedef struct PAD_2D;
typedef struct PAD_INFO;
typedef struct _CL_VHIT_WALL;

typedef void(*type_17)(SubCharacter*);
typedef void(*type_22)(SubCharacter*);
typedef void(*type_28)(SubCharacter*);
typedef void(*type_33)(SubCharacter*);
typedef void(*type_35)(SubCharacter*);
typedef void(*type_41)(SubCharacter*);
typedef void(*type_43)(SubCharacter*);

typedef float type_0[2];
typedef unsigned short type_1[2];
typedef unsigned short type_2[2][2];
typedef unsigned short type_3[2][2][24];
typedef unsigned char type_4[20];
typedef unsigned int type_5[9];
typedef unsigned char type_6[4];
typedef unsigned char type_7[4];
typedef _AnimeInfo type_8[7];
typedef float type_9[4];
typedef unsigned short type_10[2];
typedef unsigned short type_11[2][2];
typedef unsigned short type_12[2][2][16];
typedef unsigned char type_13[2];
typedef unsigned char type_14[2];
typedef shAttackInfo type_15[66];
typedef unsigned char type_16[14];
typedef float type_18[4][2];
typedef float type_19[4];
typedef float type_20[4][4];
typedef unsigned char type_21[69];
typedef MariaSoundInfo type_23[4];
typedef unsigned char type_24[4];
typedef void* type_25[3];
typedef float type_26[4][5];
typedef unsigned char type_27[2];
typedef unsigned char type_29[14];
typedef _AnimeInfo type_30[40];
typedef float type_31[4];
typedef float type_32[4];
typedef float type_34[4][4];
typedef void(*type_36)(SubCharacter*)[7];
typedef unsigned char type_37[97];
typedef unsigned char type_38[4];
typedef unsigned char type_39[4];
typedef MariaAppearPoint type_40[91];
typedef void(*type_42)(SubCharacter*)[9];
typedef unsigned short type_44[2];
typedef MariaSoundInfo type_45[4];
typedef PAD_INFO type_46[10];

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

	int shMariaSoundOn(float vol, int se_name);
	unsigned short MariaDamageMotionNo();
	void MariaCheckFootLine();
	void MariaSetSearchArea();
	void MariaSetHeight();
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

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
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

struct MariaSoundInfo
{
	float vol;
	char frame;
	char domain;
};

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon1 hobj;
};

struct shMariaWork
{
	SubCharacter* mar_p;
	_anon2 dist_rot;
	_anon2 dist_pos;
	_anon2 pos;
	_anon2 rot;
	float to_target;
	float tgt_pos[4][5];
	int tgt_pointer;
	int pushed_dir;
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
	unsigned char se_upper[4];
	unsigned char se_foot[4];
	_anon2 tgt_neck_angle;
	SubCharacter* look_tgt;
	SubCharacter* look_obj;
	float dist_to_jms;
	float hp_recover;
	float stand_time;
	float move_time;
	float muteki_time;
	float relax_time;
	float afraid_time;
	float hp;
	float hp_max;
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
	unsigned char active_type;
};

union _anon1
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
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

struct _anon2
{
	float x;
	float y;
	float z;
	float w;
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

struct _USXY
{
	unsigned short x;
	unsigned short y;
};

struct _anon3
{
	float d[4][4];
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

struct _SXY
{
	short x;
	short y;
};

struct _IXY
{
	int x;
	int y;
};

enum _MARIA_SUB_STATUS : unsigned char
{
	MAR_SUB_ST_STAND,
	MAR_SUB_ST_RELAX,
	MAR_SUB_ST_RELAX_OFF,
	MAR_SUB_ST_AFRAID,
	MAR_SUB_ST_TIRED,
	MAR_SUB_ST_ONESTEP,
	MAR_SUB_ST_WALK,
	MAR_SUB_ST_RUN,
	MAR_SUB_ST_DAMAGE
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
	_IXY c_count;
	_SXY c_speed;
	_SXY total_speed;
	_USXY cur_frame;
	char first_bone_type;
	char comp_type;
	_AnimeInfo* anim_a;
	_AnimeInfo* anim_b;
	_anon2 rot_neck;
	_anon2 rot_arms;
	_anon2 rot_body_neck;
	_anon2 rot_body;
	float scale;
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

struct MariaAppearPoint
{
	short room_name_prev;
	short room_name_now;
	int active_type;
	float pos[4];
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

struct PAD_3D
{
	char round_way;
	unsigned char reserved1;
	unsigned char lslide;
	unsigned char rslide;
	unsigned char lturn180;
	unsigned char rturn180;
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

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
_AnimeInfo pmaria_anim[40];
_AnimeInfo d_mar_anim[7];
MariaAppearPoint maria_apeear_point_list[91];
unsigned int pmaria_sub_status_flag[9];
shMariaWork sh2mar;
float dtf;
void(*func_list_main)(SubCharacter*)[7];
int dt;
shPlayerWork sh2jms;
void(*func_list_sub)(SubCharacter*)[9];
void(*MariaSetHeightDummy)(SubCharacter*);

void mar_flg_on(unsigned int* type, unsigned int status);
void mar_flg_off(unsigned int* type, unsigned int status);
int mar_sub_flg_on(unsigned int status);
int mar_anime_flg_on(unsigned int status);
void mar_main_st_set(int status, shMariaWork* w);
void mar_sub_st_set(int status, shMariaWork* w);
void mar_sub_flg_set(int status, shMariaWork* w);
void MariaBodyAngleCloseToTarget(float target);
void MariaSpeedDownToStand(SubCharacter* p);
void MariaPushedAnyoneIsOn(SubCharacter* p);
int shMariaSoundOn(float vol, int se_name);
void MariaCheckSoundLower();
void MariaCheckSoundUpper();
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
void mar_sub_onestep(SubCharacter* p);
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
void MariaSetColumn_CloseToTarget();
void MariaSetHeightDummy();
void MariaSetHeight();
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
void MariaInitOnConnect();
void MariaSetHeightConnectWait();
void MariaStatusClear();

// 
// Start address: 0x223bd0
void mar_flg_on(unsigned int* type, unsigned int status)
{
	// Line 95, Address: 0x223bd0, Func Offset: 0
	// Line 96, Address: 0x223bdc, Func Offset: 0xc
	// Func End, Address: 0x223be4, Func Offset: 0x14
}

// 
// Start address: 0x223bf0
void mar_flg_off(unsigned int* type, unsigned int status)
{
	// Line 99, Address: 0x223bf0, Func Offset: 0
	// Line 100, Address: 0x223c00, Func Offset: 0x10
	// Func End, Address: 0x223c08, Func Offset: 0x18
}

// 
// Start address: 0x223c10
int mar_sub_flg_on(unsigned int status)
{
	// Line 107, Address: 0x223c10, Func Offset: 0
	// Line 108, Address: 0x223c1c, Func Offset: 0xc
	// Func End, Address: 0x223c24, Func Offset: 0x14
}

// 
// Start address: 0x223c30
int mar_anime_flg_on(unsigned int status)
{
	// Line 111, Address: 0x223c30, Func Offset: 0
	// Line 112, Address: 0x223c3c, Func Offset: 0xc
	// Func End, Address: 0x223c44, Func Offset: 0x14
}

// 
// Start address: 0x223c50
void mar_main_st_set(int status, shMariaWork* w)
{
	// Line 122, Address: 0x223c50, Func Offset: 0
	// Line 123, Address: 0x223c58, Func Offset: 0x8
	// Line 124, Address: 0x223c5c, Func Offset: 0xc
	// Func End, Address: 0x223c64, Func Offset: 0x14
}

// 
// Start address: 0x223c70
void mar_sub_st_set(int status, shMariaWork* w)
{
	// Line 127, Address: 0x223c70, Func Offset: 0
	// Line 128, Address: 0x223c78, Func Offset: 0x8
	// Line 129, Address: 0x223c7c, Func Offset: 0xc
	// Func End, Address: 0x223c84, Func Offset: 0x14
}

// 
// Start address: 0x223c90
void mar_sub_flg_set(int status, shMariaWork* w)
{
	// Line 136, Address: 0x223c90, Func Offset: 0
	// Line 137, Address: 0x223ca8, Func Offset: 0x18
	// Func End, Address: 0x223cb0, Func Offset: 0x20
}

// 
// Start address: 0x223cb0
void MariaBodyAngleCloseToTarget(float target)
{
	float mov_angle;
	float roty_tmp;
	// Line 149, Address: 0x223cb0, Func Offset: 0
	// Line 155, Address: 0x223cc8, Func Offset: 0x18
	// Line 156, Address: 0x223ce4, Func Offset: 0x34
	// Line 157, Address: 0x223d50, Func Offset: 0xa0
	// Line 158, Address: 0x223d68, Func Offset: 0xb8
	// Line 159, Address: 0x223d7c, Func Offset: 0xcc
	// Line 161, Address: 0x223d90, Func Offset: 0xe0
	// Line 162, Address: 0x223da4, Func Offset: 0xf4
	// Line 163, Address: 0x223dac, Func Offset: 0xfc
	// Line 164, Address: 0x223dc0, Func Offset: 0x110
	// Line 166, Address: 0x223dd4, Func Offset: 0x124
	// Line 168, Address: 0x223de8, Func Offset: 0x138
	// Line 169, Address: 0x223e08, Func Offset: 0x158
	// Func End, Address: 0x223e24, Func Offset: 0x174
}

// 
// Start address: 0x223e30
void MariaSpeedDownToStand(SubCharacter* p)
{
	// Line 179, Address: 0x223e30, Func Offset: 0
	// Line 181, Address: 0x223e4c, Func Offset: 0x1c
	// Line 183, Address: 0x223e6c, Func Offset: 0x3c
	// Line 185, Address: 0x223e74, Func Offset: 0x44
	// Line 189, Address: 0x223e94, Func Offset: 0x64
	// Line 190, Address: 0x223ec0, Func Offset: 0x90
	// Func End, Address: 0x223ec8, Func Offset: 0x98
}

// 
// Start address: 0x223ed0
void MariaPushedAnyoneIsOn(SubCharacter* p)
{
	float angle;
	// Line 198, Address: 0x223ed0, Func Offset: 0
	// Line 202, Address: 0x223ee0, Func Offset: 0x10
	// Line 204, Address: 0x223ef4, Func Offset: 0x24
	// Line 206, Address: 0x223f10, Func Offset: 0x40
	// Line 207, Address: 0x223f18, Func Offset: 0x48
	// Line 208, Address: 0x223f20, Func Offset: 0x50
	// Line 209, Address: 0x223f50, Func Offset: 0x80
	// Line 210, Address: 0x223f58, Func Offset: 0x88
	// Line 211, Address: 0x223f60, Func Offset: 0x90
	// Line 212, Address: 0x223f80, Func Offset: 0xb0
	// Line 213, Address: 0x223f90, Func Offset: 0xc0
	// Line 214, Address: 0x223fb4, Func Offset: 0xe4
	// Line 215, Address: 0x223fc0, Func Offset: 0xf0
	// Line 216, Address: 0x223fc8, Func Offset: 0xf8
	// Line 222, Address: 0x223fd4, Func Offset: 0x104
	// Func End, Address: 0x223fe8, Func Offset: 0x118
}

// 
// Start address: 0x223ff0
int SubCharacter::shMariaSoundOn(float vol, int se_name)
{
	// Line 233, Address: 0x223ff0, Func Offset: 0
	// Line 234, Address: 0x223ff8, Func Offset: 0x8
	// Line 235, Address: 0x224010, Func Offset: 0x20
	// Line 236, Address: 0x224014, Func Offset: 0x24
	// Func End, Address: 0x224024, Func Offset: 0x34
}

// 
// Start address: 0x224030
void MariaCheckSoundLower()
{
	_AnimeInfo* a_info;
	MariaSoundInfo se_info[4];
	int pitch;
	short frame;
	unsigned short se_l;
	unsigned short se_r;
	unsigned short se;
	unsigned int material;
	int i;
	// Line 244, Address: 0x224030, Func Offset: 0
	// Line 252, Address: 0x224054, Func Offset: 0x24
	// Line 258, Address: 0x224070, Func Offset: 0x40
	// Line 261, Address: 0x224084, Func Offset: 0x54
	// Line 266, Address: 0x22409c, Func Offset: 0x6c
	// Line 267, Address: 0x2240a8, Func Offset: 0x78
	// Line 268, Address: 0x2240b0, Func Offset: 0x80
	// Line 269, Address: 0x2240c4, Func Offset: 0x94
	// Line 271, Address: 0x2240d0, Func Offset: 0xa0
	// Line 272, Address: 0x2240d8, Func Offset: 0xa8
	// Line 273, Address: 0x2240ec, Func Offset: 0xbc
	// Line 275, Address: 0x2240fc, Func Offset: 0xcc
	// Line 276, Address: 0x224100, Func Offset: 0xd0
	// Line 277, Address: 0x224128, Func Offset: 0xf8
	// Line 278, Address: 0x224134, Func Offset: 0x104
	// Line 279, Address: 0x224140, Func Offset: 0x110
	// Line 280, Address: 0x22414c, Func Offset: 0x11c
	// Line 281, Address: 0x224158, Func Offset: 0x128
	// Line 282, Address: 0x224164, Func Offset: 0x134
	// Line 283, Address: 0x224170, Func Offset: 0x140
	// Line 284, Address: 0x22417c, Func Offset: 0x14c
	// Line 285, Address: 0x224188, Func Offset: 0x158
	// Line 286, Address: 0x224194, Func Offset: 0x164
	// Line 289, Address: 0x2241a0, Func Offset: 0x170
	// Line 290, Address: 0x2241a4, Func Offset: 0x174
	// Line 291, Address: 0x2241ac, Func Offset: 0x17c
	// Line 292, Address: 0x2241b8, Func Offset: 0x188
	// Line 296, Address: 0x2241bc, Func Offset: 0x18c
	// Line 297, Address: 0x2241c0, Func Offset: 0x190
	// Line 298, Address: 0x2241c8, Func Offset: 0x198
	// Line 299, Address: 0x2241cc, Func Offset: 0x19c
	// Line 300, Address: 0x2241d4, Func Offset: 0x1a4
	// Line 302, Address: 0x2241d8, Func Offset: 0x1a8
	// Line 305, Address: 0x2241ec, Func Offset: 0x1bc
	// Line 311, Address: 0x22421c, Func Offset: 0x1ec
	// Line 312, Address: 0x22422c, Func Offset: 0x1fc
	// Line 313, Address: 0x224234, Func Offset: 0x204
	// Line 314, Address: 0x22423c, Func Offset: 0x20c
	// Line 315, Address: 0x224244, Func Offset: 0x214
	// Line 316, Address: 0x22424c, Func Offset: 0x21c
	// Line 318, Address: 0x224254, Func Offset: 0x224
	// Line 319, Address: 0x224260, Func Offset: 0x230
	// Line 320, Address: 0x224264, Func Offset: 0x234
	// Line 322, Address: 0x22426c, Func Offset: 0x23c
	// Line 323, Address: 0x22427c, Func Offset: 0x24c
	// Line 324, Address: 0x224284, Func Offset: 0x254
	// Line 326, Address: 0x224290, Func Offset: 0x260
	// Line 328, Address: 0x224298, Func Offset: 0x268
	// Line 329, Address: 0x2242a0, Func Offset: 0x270
	// Line 330, Address: 0x2242a8, Func Offset: 0x278
	// Line 331, Address: 0x2242b0, Func Offset: 0x280
	// Line 332, Address: 0x2242b8, Func Offset: 0x288
	// Line 333, Address: 0x2242c4, Func Offset: 0x294
	// Line 334, Address: 0x2242c8, Func Offset: 0x298
	// Line 335, Address: 0x2242cc, Func Offset: 0x29c
	// Line 336, Address: 0x2242d0, Func Offset: 0x2a0
	// Line 339, Address: 0x2242d8, Func Offset: 0x2a8
	// Line 340, Address: 0x2242e0, Func Offset: 0x2b0
	// Line 341, Address: 0x2242e8, Func Offset: 0x2b8
	// Line 342, Address: 0x2242f4, Func Offset: 0x2c4
	// Line 343, Address: 0x2242f8, Func Offset: 0x2c8
	// Line 346, Address: 0x224300, Func Offset: 0x2d0
	// Line 348, Address: 0x2243d8, Func Offset: 0x3a8
	// Line 349, Address: 0x2243e0, Func Offset: 0x3b0
	// Line 350, Address: 0x2243e8, Func Offset: 0x3b8
	// Line 351, Address: 0x2243f0, Func Offset: 0x3c0
	// Line 353, Address: 0x2243f8, Func Offset: 0x3c8
	// Line 354, Address: 0x224400, Func Offset: 0x3d0
	// Line 355, Address: 0x224408, Func Offset: 0x3d8
	// Line 356, Address: 0x224410, Func Offset: 0x3e0
	// Line 358, Address: 0x224418, Func Offset: 0x3e8
	// Line 359, Address: 0x224420, Func Offset: 0x3f0
	// Line 360, Address: 0x224428, Func Offset: 0x3f8
	// Line 362, Address: 0x224430, Func Offset: 0x400
	// Line 363, Address: 0x224438, Func Offset: 0x408
	// Line 364, Address: 0x224440, Func Offset: 0x410
	// Line 365, Address: 0x224448, Func Offset: 0x418
	// Line 367, Address: 0x224450, Func Offset: 0x420
	// Line 368, Address: 0x224458, Func Offset: 0x428
	// Line 369, Address: 0x224460, Func Offset: 0x430
	// Line 371, Address: 0x224468, Func Offset: 0x438
	// Line 372, Address: 0x224470, Func Offset: 0x440
	// Line 373, Address: 0x224478, Func Offset: 0x448
	// Line 375, Address: 0x224480, Func Offset: 0x450
	// Line 376, Address: 0x224488, Func Offset: 0x458
	// Line 377, Address: 0x224490, Func Offset: 0x460
	// Line 379, Address: 0x224498, Func Offset: 0x468
	// Line 380, Address: 0x2244a0, Func Offset: 0x470
	// Line 381, Address: 0x2244a8, Func Offset: 0x478
	// Line 383, Address: 0x2244b0, Func Offset: 0x480
	// Line 384, Address: 0x2244b8, Func Offset: 0x488
	// Line 385, Address: 0x2244c0, Func Offset: 0x490
	// Line 387, Address: 0x2244c8, Func Offset: 0x498
	// Line 388, Address: 0x2244d0, Func Offset: 0x4a0
	// Line 389, Address: 0x2244d8, Func Offset: 0x4a8
	// Line 398, Address: 0x2244e0, Func Offset: 0x4b0
	// Line 399, Address: 0x2244e8, Func Offset: 0x4b8
	// Line 400, Address: 0x2244f0, Func Offset: 0x4c0
	// Line 402, Address: 0x2244f8, Func Offset: 0x4c8
	// Line 403, Address: 0x224500, Func Offset: 0x4d0
	// Line 404, Address: 0x224508, Func Offset: 0x4d8
	// Line 405, Address: 0x224510, Func Offset: 0x4e0
	// Line 407, Address: 0x224518, Func Offset: 0x4e8
	// Line 408, Address: 0x224520, Func Offset: 0x4f0
	// Line 409, Address: 0x224528, Func Offset: 0x4f8
	// Line 411, Address: 0x224530, Func Offset: 0x500
	// Line 412, Address: 0x224538, Func Offset: 0x508
	// Line 413, Address: 0x224540, Func Offset: 0x510
	// Line 415, Address: 0x224548, Func Offset: 0x518
	// Line 416, Address: 0x224550, Func Offset: 0x520
	// Line 417, Address: 0x224558, Func Offset: 0x528
	// Line 419, Address: 0x224560, Func Offset: 0x530
	// Line 420, Address: 0x224568, Func Offset: 0x538
	// Line 421, Address: 0x224570, Func Offset: 0x540
	// Line 423, Address: 0x224578, Func Offset: 0x548
	// Line 426, Address: 0x224580, Func Offset: 0x550
	// Line 427, Address: 0x22458c, Func Offset: 0x55c
	// Line 428, Address: 0x224590, Func Offset: 0x560
	// Line 433, Address: 0x224594, Func Offset: 0x564
	// Line 439, Address: 0x2245bc, Func Offset: 0x58c
	// Line 440, Address: 0x2245c4, Func Offset: 0x594
	// Line 441, Address: 0x2245cc, Func Offset: 0x59c
	// Line 443, Address: 0x2245d4, Func Offset: 0x5a4
	// Line 444, Address: 0x2245e4, Func Offset: 0x5b4
	// Line 446, Address: 0x2245ec, Func Offset: 0x5bc
	// Line 448, Address: 0x2245f4, Func Offset: 0x5c4
	// Line 449, Address: 0x2245fc, Func Offset: 0x5cc
	// Line 450, Address: 0x224604, Func Offset: 0x5d4
	// Line 451, Address: 0x224608, Func Offset: 0x5d8
	// Line 452, Address: 0x22460c, Func Offset: 0x5dc
	// Line 455, Address: 0x224614, Func Offset: 0x5e4
	// Line 456, Address: 0x22461c, Func Offset: 0x5ec
	// Line 457, Address: 0x224624, Func Offset: 0x5f4
	// Line 459, Address: 0x22462c, Func Offset: 0x5fc
	// Line 460, Address: 0x224634, Func Offset: 0x604
	// Line 461, Address: 0x22463c, Func Offset: 0x60c
	// Line 465, Address: 0x224640, Func Offset: 0x610
	// Line 466, Address: 0x22464c, Func Offset: 0x61c
	// Line 467, Address: 0x224660, Func Offset: 0x630
	// Line 468, Address: 0x224670, Func Offset: 0x640
	// Line 469, Address: 0x22467c, Func Offset: 0x64c
	// Line 470, Address: 0x224694, Func Offset: 0x664
	// Line 473, Address: 0x2246b8, Func Offset: 0x688
	// Line 476, Address: 0x2246d4, Func Offset: 0x6a4
	// Line 479, Address: 0x2246dc, Func Offset: 0x6ac
	// Line 485, Address: 0x2246f8, Func Offset: 0x6c8
	// Line 486, Address: 0x224700, Func Offset: 0x6d0
	// Line 487, Address: 0x224708, Func Offset: 0x6d8
	// Line 491, Address: 0x224718, Func Offset: 0x6e8
	// Line 492, Address: 0x22472c, Func Offset: 0x6fc
	// Func End, Address: 0x224758, Func Offset: 0x728
}

// 
// Start address: 0x224760
void MariaCheckSoundUpper()
{
	MariaSoundInfo se_info[4];
	short frame;
	unsigned short se;
	int i;
	_AnimeInfo* anim_p;
	// Line 500, Address: 0x224760, Func Offset: 0
	// Line 502, Address: 0x224778, Func Offset: 0x18
	// Line 508, Address: 0x224788, Func Offset: 0x28
	// Line 513, Address: 0x2247a4, Func Offset: 0x44
	// Line 516, Address: 0x2247bc, Func Offset: 0x5c
	// Line 518, Address: 0x2247e4, Func Offset: 0x84
	// Line 519, Address: 0x2247e8, Func Offset: 0x88
	// Line 521, Address: 0x2247f0, Func Offset: 0x90
	// Line 522, Address: 0x224800, Func Offset: 0xa0
	// Line 523, Address: 0x224804, Func Offset: 0xa4
	// Line 524, Address: 0x22480c, Func Offset: 0xac
	// Line 529, Address: 0x224810, Func Offset: 0xb0
	// Line 531, Address: 0x224830, Func Offset: 0xd0
	// Line 532, Address: 0x224838, Func Offset: 0xd8
	// Line 533, Address: 0x224840, Func Offset: 0xe0
	// Line 535, Address: 0x224848, Func Offset: 0xe8
	// Line 536, Address: 0x224858, Func Offset: 0xf8
	// Line 537, Address: 0x224860, Func Offset: 0x100
	// Line 538, Address: 0x224868, Func Offset: 0x108
	// Line 539, Address: 0x224870, Func Offset: 0x110
	// Line 540, Address: 0x224878, Func Offset: 0x118
	// Line 546, Address: 0x224884, Func Offset: 0x124
	// Line 547, Address: 0x224890, Func Offset: 0x130
	// Line 548, Address: 0x2248a4, Func Offset: 0x144
	// Line 549, Address: 0x2248b4, Func Offset: 0x154
	// Line 550, Address: 0x2248c0, Func Offset: 0x160
	// Line 551, Address: 0x2248d8, Func Offset: 0x178
	// Line 552, Address: 0x2248f4, Func Offset: 0x194
	// Line 553, Address: 0x2248f8, Func Offset: 0x198
	// Line 554, Address: 0x224900, Func Offset: 0x1a0
	// Line 555, Address: 0x224908, Func Offset: 0x1a8
	// Line 559, Address: 0x224918, Func Offset: 0x1b8
	// Line 560, Address: 0x22492c, Func Offset: 0x1cc
	// Func End, Address: 0x22494c, Func Offset: 0x1ec
}

// 
// Start address: 0x224950
void mar_sub_flg_check(int status)
{
	// Line 573, Address: 0x224950, Func Offset: 0
	// Line 574, Address: 0x224960, Func Offset: 0x10
	// Line 575, Address: 0x224970, Func Offset: 0x20
	// Line 576, Address: 0x224980, Func Offset: 0x30
	// Line 577, Address: 0x224990, Func Offset: 0x40
	// Line 580, Address: 0x2249a4, Func Offset: 0x54
	// Func End, Address: 0x2249b8, Func Offset: 0x68
}

// 
// Start address: 0x2249c0
void mar_muteki_set()
{
	// Line 583, Address: 0x2249c0, Func Offset: 0
	// Line 584, Address: 0x2249d4, Func Offset: 0x14
	// Line 585, Address: 0x2249e0, Func Offset: 0x20
	// Line 586, Address: 0x2249e8, Func Offset: 0x28
	// Line 588, Address: 0x2249f4, Func Offset: 0x34
	// Func End, Address: 0x2249fc, Func Offset: 0x3c
}

// 
// Start address: 0x224a00
void mar_timer_set(int mode)
{
	// Line 591, Address: 0x224a00, Func Offset: 0
	// Line 593, Address: 0x224a34, Func Offset: 0x34
	// Line 594, Address: 0x224a50, Func Offset: 0x50
	// Line 595, Address: 0x224a58, Func Offset: 0x58
	// Line 596, Address: 0x224a60, Func Offset: 0x60
	// Line 597, Address: 0x224a68, Func Offset: 0x68
	// Line 599, Address: 0x224a70, Func Offset: 0x70
	// Line 600, Address: 0x224a78, Func Offset: 0x78
	// Line 601, Address: 0x224a94, Func Offset: 0x94
	// Line 602, Address: 0x224a9c, Func Offset: 0x9c
	// Line 603, Address: 0x224aa4, Func Offset: 0xa4
	// Line 605, Address: 0x224aac, Func Offset: 0xac
	// Line 606, Address: 0x224ac8, Func Offset: 0xc8
	// Line 607, Address: 0x224ad0, Func Offset: 0xd0
	// Line 608, Address: 0x224ae4, Func Offset: 0xe4
	// Line 609, Address: 0x224aec, Func Offset: 0xec
	// Line 611, Address: 0x224af4, Func Offset: 0xf4
	// Line 612, Address: 0x224b10, Func Offset: 0x110
	// Line 613, Address: 0x224b18, Func Offset: 0x118
	// Line 614, Address: 0x224b20, Func Offset: 0x120
	// Line 617, Address: 0x224b34, Func Offset: 0x134
	// Func End, Address: 0x224b3c, Func Offset: 0x13c
}

// 
// Start address: 0x224b40
void mar_main_stand()
{
	shMariaWork* w;
	// Line 622, Address: 0x224b40, Func Offset: 0
	// Line 629, Address: 0x224b48, Func Offset: 0x8
	// Line 630, Address: 0x224b5c, Func Offset: 0x1c
	// Line 631, Address: 0x224b68, Func Offset: 0x28
	// Line 636, Address: 0x224b70, Func Offset: 0x30
	// Line 637, Address: 0x224b84, Func Offset: 0x44
	// Line 638, Address: 0x224b90, Func Offset: 0x50
	// Line 643, Address: 0x224b98, Func Offset: 0x58
	// Line 644, Address: 0x224bac, Func Offset: 0x6c
	// Line 645, Address: 0x224bb8, Func Offset: 0x78
	// Line 648, Address: 0x224bc0, Func Offset: 0x80
	// Func End, Address: 0x224bd0, Func Offset: 0x90
}

// 
// Start address: 0x224bd0
void mar_main_close_to()
{
	shMariaWork* w;
	// Line 650, Address: 0x224bd0, Func Offset: 0
	// Line 651, Address: 0x224bdc, Func Offset: 0xc
	// Line 656, Address: 0x224be4, Func Offset: 0x14
	// Line 657, Address: 0x224bf8, Func Offset: 0x28
	// Line 658, Address: 0x224c04, Func Offset: 0x34
	// Line 663, Address: 0x224c0c, Func Offset: 0x3c
	// Line 664, Address: 0x224c40, Func Offset: 0x70
	// Line 665, Address: 0x224c4c, Func Offset: 0x7c
	// Line 670, Address: 0x224c54, Func Offset: 0x84
	// Line 672, Address: 0x224c98, Func Offset: 0xc8
	// Line 673, Address: 0x224ca4, Func Offset: 0xd4
	// Line 678, Address: 0x224cac, Func Offset: 0xdc
	// Line 679, Address: 0x224cc0, Func Offset: 0xf0
	// Line 680, Address: 0x224ccc, Func Offset: 0xfc
	// Line 683, Address: 0x224cd4, Func Offset: 0x104
	// Func End, Address: 0x224ce8, Func Offset: 0x118
}

// 
// Start address: 0x224cf0
void mar_main_alert()
{
	shMariaWork* w;
	// Line 685, Address: 0x224cf0, Func Offset: 0
	// Line 691, Address: 0x224cf8, Func Offset: 0x8
	// Line 692, Address: 0x224d0c, Func Offset: 0x1c
	// Line 693, Address: 0x224d18, Func Offset: 0x28
	// Line 707, Address: 0x224d20, Func Offset: 0x30
	// Line 708, Address: 0x224d34, Func Offset: 0x44
	// Line 709, Address: 0x224d40, Func Offset: 0x50
	// Line 712, Address: 0x224d48, Func Offset: 0x58
	// Func End, Address: 0x224d58, Func Offset: 0x68
}

// 
// Start address: 0x224d60
void mar_main_discover()
{
	shMariaWork* w;
	// Line 716, Address: 0x224d60, Func Offset: 0
	// Func End, Address: 0x224d68, Func Offset: 0x8
}

// 
// Start address: 0x224d70
void mar_main_recover()
{
	shMariaWork* w;
	// Line 718, Address: 0x224d70, Func Offset: 0
	// Line 724, Address: 0x224d78, Func Offset: 0x8
	// Line 725, Address: 0x224d8c, Func Offset: 0x1c
	// Line 726, Address: 0x224d98, Func Offset: 0x28
	// Line 731, Address: 0x224da0, Func Offset: 0x30
	// Line 732, Address: 0x224db4, Func Offset: 0x44
	// Line 733, Address: 0x224dc0, Func Offset: 0x50
	// Line 738, Address: 0x224dc8, Func Offset: 0x58
	// Line 739, Address: 0x224ddc, Func Offset: 0x6c
	// Line 740, Address: 0x224de8, Func Offset: 0x78
	// Line 743, Address: 0x224df0, Func Offset: 0x80
	// Func End, Address: 0x224e00, Func Offset: 0x90
}

// 
// Start address: 0x224e00
void mar_main_boredom()
{
	shMariaWork* w;
	// Line 745, Address: 0x224e00, Func Offset: 0
	// Line 751, Address: 0x224e08, Func Offset: 0x8
	// Line 752, Address: 0x224e1c, Func Offset: 0x1c
	// Line 753, Address: 0x224e28, Func Offset: 0x28
	// Line 758, Address: 0x224e30, Func Offset: 0x30
	// Line 759, Address: 0x224e44, Func Offset: 0x44
	// Line 760, Address: 0x224e50, Func Offset: 0x50
	// Line 765, Address: 0x224e58, Func Offset: 0x58
	// Line 766, Address: 0x224e6c, Func Offset: 0x6c
	// Line 767, Address: 0x224e78, Func Offset: 0x78
	// Line 770, Address: 0x224e80, Func Offset: 0x80
	// Func End, Address: 0x224e90, Func Offset: 0x90
}

// 
// Start address: 0x224e90
void mar_main_damaged()
{
	shMariaWork* w;
	// Line 772, Address: 0x224e90, Func Offset: 0
	// Line 778, Address: 0x224e98, Func Offset: 0x8
	// Line 779, Address: 0x224eac, Func Offset: 0x1c
	// Line 784, Address: 0x224eb8, Func Offset: 0x28
	// Line 785, Address: 0x224ecc, Func Offset: 0x3c
	// Line 786, Address: 0x224ed8, Func Offset: 0x48
	// Line 789, Address: 0x224ee0, Func Offset: 0x50
	// Func End, Address: 0x224ef0, Func Offset: 0x60
}

// 
// Start address: 0x224ef0
void mar_sub_stand(SubCharacter* p)
{
	// Line 810, Address: 0x224ef0, Func Offset: 0
	// Line 812, Address: 0x224efc, Func Offset: 0xc
	// Line 815, Address: 0x224f08, Func Offset: 0x18
	// Line 818, Address: 0x224f24, Func Offset: 0x34
	// Line 821, Address: 0x224f30, Func Offset: 0x40
	// Line 822, Address: 0x224f40, Func Offset: 0x50
	// Line 824, Address: 0x224f54, Func Offset: 0x64
	// Func End, Address: 0x224f64, Func Offset: 0x74
}

// 
// Start address: 0x224f70
void mar_sub_relax(SubCharacter* p)
{
	// Line 826, Address: 0x224f70, Func Offset: 0
	// Line 828, Address: 0x224f7c, Func Offset: 0xc
	// Line 831, Address: 0x224f88, Func Offset: 0x18
	// Line 834, Address: 0x224fa4, Func Offset: 0x34
	// Line 837, Address: 0x224fb0, Func Offset: 0x40
	// Line 839, Address: 0x224fe0, Func Offset: 0x70
	// Line 840, Address: 0x224ff4, Func Offset: 0x84
	// Line 841, Address: 0x224ffc, Func Offset: 0x8c
	// Line 843, Address: 0x225010, Func Offset: 0xa0
	// Line 845, Address: 0x225018, Func Offset: 0xa8
	// Line 846, Address: 0x22503c, Func Offset: 0xcc
	// Line 847, Address: 0x225044, Func Offset: 0xd4
	// Line 849, Address: 0x225058, Func Offset: 0xe8
	// Line 851, Address: 0x225060, Func Offset: 0xf0
	// Line 852, Address: 0x225074, Func Offset: 0x104
	// Line 853, Address: 0x22507c, Func Offset: 0x10c
	// Line 854, Address: 0x225088, Func Offset: 0x118
	// Line 859, Address: 0x22509c, Func Offset: 0x12c
	// Line 860, Address: 0x2250b0, Func Offset: 0x140
	// Line 861, Address: 0x2250b8, Func Offset: 0x148
	// Line 864, Address: 0x2250cc, Func Offset: 0x15c
	// Line 865, Address: 0x2250dc, Func Offset: 0x16c
	// Line 867, Address: 0x2250f0, Func Offset: 0x180
	// Func End, Address: 0x225100, Func Offset: 0x190
}

// 
// Start address: 0x225100
void mar_sub_relax_off(SubCharacter* p)
{
	// Line 869, Address: 0x225100, Func Offset: 0
	// Line 871, Address: 0x22510c, Func Offset: 0xc
	// Line 874, Address: 0x225118, Func Offset: 0x18
	// Line 877, Address: 0x225124, Func Offset: 0x24
	// Line 878, Address: 0x225138, Func Offset: 0x38
	// Line 879, Address: 0x22514c, Func Offset: 0x4c
	// Line 882, Address: 0x225160, Func Offset: 0x60
	// Line 883, Address: 0x225170, Func Offset: 0x70
	// Line 885, Address: 0x225184, Func Offset: 0x84
	// Func End, Address: 0x225194, Func Offset: 0x94
}

// 
// Start address: 0x2251a0
void mar_sub_afraid(SubCharacter* p)
{
	short frame;
	// Line 887, Address: 0x2251a0, Func Offset: 0
	// Line 888, Address: 0x2251b0, Func Offset: 0x10
	// Line 891, Address: 0x2251b8, Func Offset: 0x18
	// Line 894, Address: 0x2251c4, Func Offset: 0x24
	// Line 897, Address: 0x2251e0, Func Offset: 0x40
	// Line 901, Address: 0x2251ec, Func Offset: 0x4c
	// Line 902, Address: 0x225200, Func Offset: 0x60
	// Line 903, Address: 0x225214, Func Offset: 0x74
	// Line 904, Address: 0x225228, Func Offset: 0x88
	// Line 911, Address: 0x225230, Func Offset: 0x90
	// Func End, Address: 0x225244, Func Offset: 0xa4
}

// 
// Start address: 0x225250
void mar_sub_tired(SubCharacter* p)
{
	// Line 913, Address: 0x225250, Func Offset: 0
	// Line 915, Address: 0x22525c, Func Offset: 0xc
	// Line 918, Address: 0x225268, Func Offset: 0x18
	// Line 921, Address: 0x225284, Func Offset: 0x34
	// Line 924, Address: 0x225290, Func Offset: 0x40
	// Line 925, Address: 0x2252b0, Func Offset: 0x60
	// Line 926, Address: 0x2252c4, Func Offset: 0x74
	// Line 929, Address: 0x2252d8, Func Offset: 0x88
	// Line 930, Address: 0x2252e8, Func Offset: 0x98
	// Line 932, Address: 0x2252fc, Func Offset: 0xac
	// Func End, Address: 0x22530c, Func Offset: 0xbc
}

// 
// Start address: 0x225310
void mar_sub_onestep(SubCharacter* p)
{
	// Line 934, Address: 0x225310, Func Offset: 0
	// Line 936, Address: 0x22531c, Func Offset: 0xc
	// Line 939, Address: 0x225328, Func Offset: 0x18
	// Line 942, Address: 0x225344, Func Offset: 0x34
	// Line 945, Address: 0x225350, Func Offset: 0x40
	// Line 946, Address: 0x225364, Func Offset: 0x54
	// Line 947, Address: 0x225378, Func Offset: 0x68
	// Line 948, Address: 0x22538c, Func Offset: 0x7c
	// Line 950, Address: 0x225394, Func Offset: 0x84
	// Func End, Address: 0x2253a4, Func Offset: 0x94
}

// 
// Start address: 0x2253b0
void mar_sub_walk(SubCharacter* p)
{
	// Line 952, Address: 0x2253b0, Func Offset: 0
	// Line 957, Address: 0x2253bc, Func Offset: 0xc
	// Line 960, Address: 0x2253c8, Func Offset: 0x18
	// Line 962, Address: 0x2253ec, Func Offset: 0x3c
	// Line 963, Address: 0x225408, Func Offset: 0x58
	// Line 964, Address: 0x225428, Func Offset: 0x78
	// Line 966, Address: 0x225430, Func Offset: 0x80
	// Line 967, Address: 0x22544c, Func Offset: 0x9c
	// Line 971, Address: 0x225464, Func Offset: 0xb4
	// Line 972, Address: 0x225474, Func Offset: 0xc4
	// Line 974, Address: 0x2254a4, Func Offset: 0xf4
	// Line 975, Address: 0x2254ac, Func Offset: 0xfc
	// Line 979, Address: 0x2254dc, Func Offset: 0x12c
	// Line 982, Address: 0x2254ec, Func Offset: 0x13c
	// Line 983, Address: 0x225514, Func Offset: 0x164
	// Line 985, Address: 0x225528, Func Offset: 0x178
	// Func End, Address: 0x225538, Func Offset: 0x188
}

// 
// Start address: 0x225540
void mar_sub_run(SubCharacter* p)
{
	// Line 987, Address: 0x225540, Func Offset: 0
	// Line 992, Address: 0x22554c, Func Offset: 0xc
	// Line 995, Address: 0x225558, Func Offset: 0x18
	// Line 999, Address: 0x225574, Func Offset: 0x34
	// Line 1000, Address: 0x225594, Func Offset: 0x54
	// Line 1003, Address: 0x2255b8, Func Offset: 0x78
	// Line 1004, Address: 0x2255c8, Func Offset: 0x88
	// Line 1006, Address: 0x2255f8, Func Offset: 0xb8
	// Line 1007, Address: 0x225600, Func Offset: 0xc0
	// Line 1011, Address: 0x225630, Func Offset: 0xf0
	// Line 1014, Address: 0x225640, Func Offset: 0x100
	// Line 1015, Address: 0x225668, Func Offset: 0x128
	// Line 1017, Address: 0x22567c, Func Offset: 0x13c
	// Func End, Address: 0x22568c, Func Offset: 0x14c
}

// 
// Start address: 0x225690
void mar_sub_damage(SubCharacter* p)
{
	short cur_frame;
	float damage_angle;
	_AnimeInfo* a_info;
	// Line 1019, Address: 0x225690, Func Offset: 0
	// Line 1020, Address: 0x2256a8, Func Offset: 0x18
	// Line 1025, Address: 0x2256b4, Func Offset: 0x24
	// Line 1028, Address: 0x2256c0, Func Offset: 0x30
	// Line 1030, Address: 0x2256cc, Func Offset: 0x3c
	// Line 1031, Address: 0x2256dc, Func Offset: 0x4c
	// Line 1032, Address: 0x2256e8, Func Offset: 0x58
	// Line 1033, Address: 0x2256f8, Func Offset: 0x68
	// Line 1034, Address: 0x22570c, Func Offset: 0x7c
	// Line 1035, Address: 0x225714, Func Offset: 0x84
	// Line 1036, Address: 0x225724, Func Offset: 0x94
	// Line 1037, Address: 0x225730, Func Offset: 0xa0
	// Line 1038, Address: 0x225738, Func Offset: 0xa8
	// Line 1042, Address: 0x22573c, Func Offset: 0xac
	// Line 1043, Address: 0x225750, Func Offset: 0xc0
	// Line 1049, Address: 0x225780, Func Offset: 0xf0
	// Line 1050, Address: 0x2257a0, Func Offset: 0x110
	// Line 1051, Address: 0x2257a8, Func Offset: 0x118
	// Line 1052, Address: 0x2257b0, Func Offset: 0x120
	// Line 1054, Address: 0x2257bc, Func Offset: 0x12c
	// Line 1059, Address: 0x2257c4, Func Offset: 0x134
	// Line 1060, Address: 0x2257d8, Func Offset: 0x148
	// Line 1061, Address: 0x2257e4, Func Offset: 0x154
	// Line 1062, Address: 0x2257f8, Func Offset: 0x168
	// Line 1064, Address: 0x225804, Func Offset: 0x174
	// Line 1086, Address: 0x22580c, Func Offset: 0x17c
	// Line 1087, Address: 0x22582c, Func Offset: 0x19c
	// Line 1089, Address: 0x22584c, Func Offset: 0x1bc
	// Line 1096, Address: 0x225854, Func Offset: 0x1c4
	// Line 1097, Address: 0x225874, Func Offset: 0x1e4
	// Line 1104, Address: 0x225894, Func Offset: 0x204
	// Line 1105, Address: 0x2258a8, Func Offset: 0x218
	// Line 1108, Address: 0x2258b0, Func Offset: 0x220
	// Line 1109, Address: 0x2258c0, Func Offset: 0x230
	// Line 1110, Address: 0x2258cc, Func Offset: 0x23c
	// Line 1112, Address: 0x2258d4, Func Offset: 0x244
	// Line 1113, Address: 0x2258e8, Func Offset: 0x258
	// Line 1116, Address: 0x2258fc, Func Offset: 0x26c
	// Func End, Address: 0x225918, Func Offset: 0x288
}

// 
// Start address: 0x225920
int MariaCheckJamesLook(float* sp, float* ep)
{
	_CL_VHIT_RESULT result;
	// Line 1145, Address: 0x225920, Func Offset: 0
	// Line 1148, Address: 0x225930, Func Offset: 0x10
	// Line 1150, Address: 0x225948, Func Offset: 0x28
	// Line 1151, Address: 0x22596c, Func Offset: 0x4c
	// Line 1153, Address: 0x225978, Func Offset: 0x58
	// Line 1155, Address: 0x22597c, Func Offset: 0x5c
	// Func End, Address: 0x22598c, Func Offset: 0x6c
}

// 
// Start address: 0x225990
int JamesCheckMariaLook(float* sp, float* ep)
{
	_CL_VHIT_RESULT result;
	// Line 1165, Address: 0x225990, Func Offset: 0
	// Line 1168, Address: 0x2259a0, Func Offset: 0x10
	// Line 1170, Address: 0x2259b8, Func Offset: 0x28
	// Line 1171, Address: 0x2259dc, Func Offset: 0x4c
	// Line 1173, Address: 0x2259e8, Func Offset: 0x58
	// Line 1175, Address: 0x2259ec, Func Offset: 0x5c
	// Func End, Address: 0x2259fc, Func Offset: 0x6c
}

// 
// Start address: 0x225a00
int CheckJamesLook1(float* sp, float* ep)
{
	_CL_VHIT_RESULT result;
	// Line 1185, Address: 0x225a00, Func Offset: 0
	// Line 1188, Address: 0x225a10, Func Offset: 0x10
	// Line 1190, Address: 0x225a24, Func Offset: 0x24
	// Line 1191, Address: 0x225a48, Func Offset: 0x48
	// Line 1193, Address: 0x225a54, Func Offset: 0x54
	// Line 1195, Address: 0x225a58, Func Offset: 0x58
	// Func End, Address: 0x225a68, Func Offset: 0x68
}

// 
// Start address: 0x225a70
int CheckJamesLook2(float* sp, float* ep)
{
	_CL_VHIT_RESULT result;
	// Line 1205, Address: 0x225a70, Func Offset: 0
	// Line 1208, Address: 0x225a80, Func Offset: 0x10
	// Line 1211, Address: 0x225a98, Func Offset: 0x28
	// Line 1215, Address: 0x225aa4, Func Offset: 0x34
	// Func End, Address: 0x225ab4, Func Offset: 0x44
}

// 
// Start address: 0x225ac0
int MariaCheckLook1(float* sp, float* ep)
{
	_CL_VHIT_RESULT result;
	// Line 1225, Address: 0x225ac0, Func Offset: 0
	// Line 1228, Address: 0x225ad0, Func Offset: 0x10
	// Line 1230, Address: 0x225ae8, Func Offset: 0x28
	// Line 1232, Address: 0x225b14, Func Offset: 0x54
	// Line 1234, Address: 0x225b20, Func Offset: 0x60
	// Line 1236, Address: 0x225b24, Func Offset: 0x64
	// Func End, Address: 0x225b34, Func Offset: 0x74
}

// 
// Start address: 0x225b40
int MariaCheckLook2(float* sp, float* ep)
{
	_CL_VHIT_RESULT result;
	// Line 1238, Address: 0x225b40, Func Offset: 0
	// Line 1241, Address: 0x225b50, Func Offset: 0x10
	// Line 1243, Address: 0x225b68, Func Offset: 0x28
	// Line 1244, Address: 0x225b8c, Func Offset: 0x4c
	// Line 1246, Address: 0x225b98, Func Offset: 0x58
	// Line 1248, Address: 0x225b9c, Func Offset: 0x5c
	// Func End, Address: 0x225bac, Func Offset: 0x6c
}

// 
// Start address: 0x225bb0
void MariaSetStraightRoot()
{
	float ep1[4];
	float ep0[4];
	float sp1[4];
	float sp0[4];
	int j;
	int i;
	// Line 1308, Address: 0x225bb0, Func Offset: 0
	// Line 1317, Address: 0x225bbc, Func Offset: 0xc
	// Line 1318, Address: 0x225bcc, Func Offset: 0x1c
	// Line 1319, Address: 0x225bd4, Func Offset: 0x24
	// Line 1320, Address: 0x225bec, Func Offset: 0x3c
	// Line 1321, Address: 0x225bfc, Func Offset: 0x4c
	// Line 1322, Address: 0x225c04, Func Offset: 0x54
	// Line 1331, Address: 0x225c10, Func Offset: 0x60
	// Line 1332, Address: 0x225c20, Func Offset: 0x70
	// Line 1334, Address: 0x225c6c, Func Offset: 0xbc
	// Line 1336, Address: 0x225c80, Func Offset: 0xd0
	// Line 1339, Address: 0x225c88, Func Offset: 0xd8
	// Line 1340, Address: 0x225ca8, Func Offset: 0xf8
	// Line 1343, Address: 0x225cd4, Func Offset: 0x124
	// Line 1347, Address: 0x225ce8, Func Offset: 0x138
	// Line 1348, Address: 0x225cfc, Func Offset: 0x14c
	// Line 1349, Address: 0x225d08, Func Offset: 0x158
	// Line 1354, Address: 0x225d20, Func Offset: 0x170
	// Line 1356, Address: 0x225d44, Func Offset: 0x194
	// Line 1359, Address: 0x225d54, Func Offset: 0x1a4
	// Line 1360, Address: 0x225d60, Func Offset: 0x1b0
	// Line 1361, Address: 0x225d80, Func Offset: 0x1d0
	// Line 1362, Address: 0x225dac, Func Offset: 0x1fc
	// Line 1363, Address: 0x225db8, Func Offset: 0x208
	// Line 1364, Address: 0x225de4, Func Offset: 0x234
	// Line 1365, Address: 0x225dfc, Func Offset: 0x24c
	// Line 1367, Address: 0x225e08, Func Offset: 0x258
	// Line 1370, Address: 0x225e18, Func Offset: 0x268
	// Line 1371, Address: 0x225e28, Func Offset: 0x278
	// Line 1389, Address: 0x225e54, Func Offset: 0x2a4
	// Func End, Address: 0x225e68, Func Offset: 0x2b8
}

// 
// Start address: 0x225e70
unsigned short SubCharacter::MariaDamageMotionNo()
{
	int dir;
	int kind;
	float roty2;
	float roty;
	float direction[4];
	unsigned short damage_motion_enemy_index[2][2][16];
	unsigned short damage_motion_james_weapon_index[2][2][24];
	unsigned short damage_motion_james_body_index[2];
	int test;
	// Line 1466, Address: 0x225e70, Func Offset: 0
	// Line 1468, Address: 0x225e80, Func Offset: 0x10
	// Line 1474, Address: 0x225e94, Func Offset: 0x24
	// Line 1597, Address: 0x225ec8, Func Offset: 0x58
	// Line 1684, Address: 0x225efc, Func Offset: 0x8c
	// Line 1685, Address: 0x225f08, Func Offset: 0x98
	// Line 1687, Address: 0x225f24, Func Offset: 0xb4
	// Line 1688, Address: 0x225f2c, Func Offset: 0xbc
	// Line 1689, Address: 0x225f54, Func Offset: 0xe4
	// Line 1692, Address: 0x225f64, Func Offset: 0xf4
	// Line 1693, Address: 0x225f6c, Func Offset: 0xfc
	// Line 1694, Address: 0x225fbc, Func Offset: 0x14c
	// Line 1695, Address: 0x225ffc, Func Offset: 0x18c
	// Line 1697, Address: 0x226008, Func Offset: 0x198
	// Line 1699, Address: 0x22600c, Func Offset: 0x19c
	// Line 1700, Address: 0x226018, Func Offset: 0x1a8
	// Line 1702, Address: 0x22602c, Func Offset: 0x1bc
	// Line 1703, Address: 0x226038, Func Offset: 0x1c8
	// Line 1705, Address: 0x22603c, Func Offset: 0x1cc
	// Line 1707, Address: 0x226094, Func Offset: 0x224
	// Line 1709, Address: 0x22609c, Func Offset: 0x22c
	// Line 1711, Address: 0x2260a0, Func Offset: 0x230
	// Line 1712, Address: 0x2260a8, Func Offset: 0x238
	// Line 1713, Address: 0x2260e4, Func Offset: 0x274
	// Line 1714, Address: 0x22611c, Func Offset: 0x2ac
	// Line 1719, Address: 0x226174, Func Offset: 0x304
	// Func End, Address: 0x226188, Func Offset: 0x318
}

// 
// Start address: 0x226190
int MariaTouchJamesCheck()
{
	float inner;
	float jms_vec[4];
	float to_jms[4];
	// Line 1724, Address: 0x226190, Func Offset: 0
	// Line 1729, Address: 0x226198, Func Offset: 0x8
	// Line 1730, Address: 0x2261ac, Func Offset: 0x1c
	// Line 1733, Address: 0x2261c0, Func Offset: 0x30
	// Line 1734, Address: 0x2261e8, Func Offset: 0x58
	// Line 1735, Address: 0x226210, Func Offset: 0x80
	// Line 1736, Address: 0x226228, Func Offset: 0x98
	// Line 1737, Address: 0x226238, Func Offset: 0xa8
	// Line 1740, Address: 0x226258, Func Offset: 0xc8
	// Line 1741, Address: 0x22626c, Func Offset: 0xdc
	// Line 1744, Address: 0x226280, Func Offset: 0xf0
	// Line 1746, Address: 0x2262ac, Func Offset: 0x11c
	// Line 1747, Address: 0x2262cc, Func Offset: 0x13c
	// Line 1751, Address: 0x2262d8, Func Offset: 0x148
	// Line 1752, Address: 0x2262dc, Func Offset: 0x14c
	// Func End, Address: 0x2262ec, Func Offset: 0x15c
}

// 
// Start address: 0x2262f0
void SubCharacter::MariaCheckFootLine()
{
	float ep[4];
	float sp[4];
	float mat[4][4];
	// Line 1757, Address: 0x2262f0, Func Offset: 0
	// Line 1763, Address: 0x226300, Func Offset: 0x10
	// Line 1764, Address: 0x226310, Func Offset: 0x20
	// Line 1765, Address: 0x226320, Func Offset: 0x30
	// Line 1766, Address: 0x22632c, Func Offset: 0x3c
	// Line 1767, Address: 0x226344, Func Offset: 0x54
	// Line 1768, Address: 0x226360, Func Offset: 0x70
	// Line 1769, Address: 0x226374, Func Offset: 0x84
	// Line 1771, Address: 0x226388, Func Offset: 0x98
	// Line 1776, Address: 0x2263b8, Func Offset: 0xc8
	// Line 1777, Address: 0x2263c8, Func Offset: 0xd8
	// Line 1778, Address: 0x2263d8, Func Offset: 0xe8
	// Line 1779, Address: 0x2263e4, Func Offset: 0xf4
	// Line 1780, Address: 0x2263fc, Func Offset: 0x10c
	// Line 1781, Address: 0x226418, Func Offset: 0x128
	// Line 1782, Address: 0x22642c, Func Offset: 0x13c
	// Line 1784, Address: 0x226440, Func Offset: 0x150
	// Line 1787, Address: 0x226470, Func Offset: 0x180
	// Func End, Address: 0x226484, Func Offset: 0x194
}

// 
// Start address: 0x226490
void SubCharacter::MariaSetSearchArea()
{
	// Line 1800, Address: 0x226490, Func Offset: 0
	// Line 1813, Address: 0x2264a0, Func Offset: 0x10
	// Line 1814, Address: 0x2264b0, Func Offset: 0x20
	// Line 1815, Address: 0x2264cc, Func Offset: 0x3c
	// Line 1817, Address: 0x2264d4, Func Offset: 0x44
	// Line 1826, Address: 0x2264f4, Func Offset: 0x64
	// Line 1831, Address: 0x226514, Func Offset: 0x84
	// Func End, Address: 0x226528, Func Offset: 0x98
}

// 
// Start address: 0x226530
void MariaSetColumn_SetTarget(_CL_HITPOLY_COLUMN* mov, _CL_HITPOLY_COLUMN* atk, float* mov_z, float* atk_z)
{
	_AnimeInfo* a_info;
	// Line 1838, Address: 0x226530, Func Offset: 0
	// Line 1839, Address: 0x226558, Func Offset: 0x28
	// Line 1842, Address: 0x226568, Func Offset: 0x38
	// Line 1843, Address: 0x226574, Func Offset: 0x44
	// Line 1844, Address: 0x22657c, Func Offset: 0x4c
	// Line 1847, Address: 0x226584, Func Offset: 0x54
	// Line 1848, Address: 0x226598, Func Offset: 0x68
	// Line 1849, Address: 0x2265bc, Func Offset: 0x8c
	// Line 1850, Address: 0x2265d0, Func Offset: 0xa0
	// Line 1853, Address: 0x2265f4, Func Offset: 0xc4
	// Line 1854, Address: 0x2265f8, Func Offset: 0xc8
	// Line 1857, Address: 0x2265fc, Func Offset: 0xcc
	// Line 1861, Address: 0x226624, Func Offset: 0xf4
	// Line 1863, Address: 0x22663c, Func Offset: 0x10c
	// Line 1870, Address: 0x226644, Func Offset: 0x114
	// Line 1871, Address: 0x226654, Func Offset: 0x124
	// Line 1872, Address: 0x226660, Func Offset: 0x130
	// Func End, Address: 0x226680, Func Offset: 0x150
}

// 
// Start address: 0x226680
void MariaSetColumn_CloseToTarget()
{
	// Line 1884, Address: 0x226680, Func Offset: 0
	// Line 1885, Address: 0x22669c, Func Offset: 0x1c
	// Line 1886, Address: 0x2266c8, Func Offset: 0x48
	// Line 1887, Address: 0x2266e4, Func Offset: 0x64
	// Line 1888, Address: 0x2266f8, Func Offset: 0x78
	// Line 1889, Address: 0x226708, Func Offset: 0x88
	// Line 1890, Address: 0x226738, Func Offset: 0xb8
	// Line 1903, Address: 0x226748, Func Offset: 0xc8
	// Func End, Address: 0x226750, Func Offset: 0xd0
}

// 
// Start address: 0x226750
void MariaSetHeightDummy()
{
	// Line 1911, Address: 0x226750, Func Offset: 0
	// Func End, Address: 0x226758, Func Offset: 0x8
}

// 
// Start address: 0x226760
void SubCharacter::MariaSetHeight()
{
	float ep[4];
	float sp[4];
	// Line 1913, Address: 0x226760, Func Offset: 0
	// Line 1920, Address: 0x226774, Func Offset: 0x14
	// Line 1921, Address: 0x226780, Func Offset: 0x20
	// Line 1922, Address: 0x22678c, Func Offset: 0x2c
	// Line 1923, Address: 0x2267a4, Func Offset: 0x44
	// Line 1924, Address: 0x2267c0, Func Offset: 0x60
	// Line 1926, Address: 0x2267d4, Func Offset: 0x74
	// Line 1927, Address: 0x2267e8, Func Offset: 0x88
	// Line 1928, Address: 0x2267f4, Func Offset: 0x94
	// Line 1939, Address: 0x22681c, Func Offset: 0xbc
	// Line 1942, Address: 0x226828, Func Offset: 0xc8
	// Line 1943, Address: 0x226844, Func Offset: 0xe4
	// Line 1944, Address: 0x226848, Func Offset: 0xe8
	// Line 1945, Address: 0x226854, Func Offset: 0xf4
	// Line 1946, Address: 0x22685c, Func Offset: 0xfc
	// Line 1948, Address: 0x226890, Func Offset: 0x130
	// Line 1949, Address: 0x2268bc, Func Offset: 0x15c
	// Line 1950, Address: 0x2268cc, Func Offset: 0x16c
	// Line 1952, Address: 0x2268d4, Func Offset: 0x174
	// Line 1953, Address: 0x2268d8, Func Offset: 0x178
	// Line 1957, Address: 0x2268e4, Func Offset: 0x184
	// Line 1958, Address: 0x2268e8, Func Offset: 0x188
	// Line 1960, Address: 0x2268f4, Func Offset: 0x194
	// Func End, Address: 0x22690c, Func Offset: 0x1ac
}

// 
// Start address: 0x226910
void SubCharacter::MariaSetHitColumn()
{
	float mat[4][4];
	float atk_z;
	float mov_z;
	_CL_HITPOLY_COLUMN col_atk;
	_CL_HITPOLY_COLUMN col_mov;
	// Line 1965, Address: 0x226910, Func Offset: 0
	// Line 1971, Address: 0x226920, Func Offset: 0x10
	// Line 1973, Address: 0x226928, Func Offset: 0x18
	// Line 1974, Address: 0x226940, Func Offset: 0x30
	// Line 1977, Address: 0x226958, Func Offset: 0x48
	// Line 1978, Address: 0x22696c, Func Offset: 0x5c
	// Line 1979, Address: 0x226990, Func Offset: 0x80
	// Line 1980, Address: 0x226998, Func Offset: 0x88
	// Line 1983, Address: 0x2269b8, Func Offset: 0xa8
	// Line 1986, Address: 0x2269e0, Func Offset: 0xd0
	// Line 1987, Address: 0x2269f0, Func Offset: 0xe0
	// Line 1988, Address: 0x2269f8, Func Offset: 0xe8
	// Func End, Address: 0x226a0c, Func Offset: 0xfc
}

// 
// Start address: 0x226a10
void SubCharacter::MariaCheckNeckAngle()
{
	float tmp[4];
	float pos[4];
	SubCharacterDisp* this_d;
	// Line 1999, Address: 0x226a10, Func Offset: 0
	// Line 2009, Address: 0x226a20, Func Offset: 0x10
	// Line 2014, Address: 0x226a54, Func Offset: 0x44
	// Line 2015, Address: 0x226a5c, Func Offset: 0x4c
	// Line 2016, Address: 0x226a64, Func Offset: 0x54
	// Line 2021, Address: 0x226a6c, Func Offset: 0x5c
	// Line 2032, Address: 0x226a7c, Func Offset: 0x6c
	// Line 2033, Address: 0x226a88, Func Offset: 0x78
	// Line 2035, Address: 0x226a98, Func Offset: 0x88
	// Line 2036, Address: 0x226aa8, Func Offset: 0x98
	// Line 2037, Address: 0x226ab8, Func Offset: 0xa8
	// Line 2040, Address: 0x226ac8, Func Offset: 0xb8
	// Line 2041, Address: 0x226ae4, Func Offset: 0xd4
	// Line 2043, Address: 0x226b1c, Func Offset: 0x10c
	// Line 2044, Address: 0x226bac, Func Offset: 0x19c
	// Line 2045, Address: 0x226c34, Func Offset: 0x224
	// Line 2046, Address: 0x226c3c, Func Offset: 0x22c
	// Line 2047, Address: 0x226c44, Func Offset: 0x234
	// Line 2053, Address: 0x226c4c, Func Offset: 0x23c
	// Line 2060, Address: 0x226c7c, Func Offset: 0x26c
	// Line 2067, Address: 0x226cb0, Func Offset: 0x2a0
	// Func End, Address: 0x226cc4, Func Offset: 0x2b4
}

// 
// Start address: 0x226cd0
void SubCharacter::MariaUpdateStatusInitial()
{
	// Line 2075, Address: 0x226cd0, Func Offset: 0
	// Line 2078, Address: 0x226ce0, Func Offset: 0x10
	// Line 2081, Address: 0x226cf8, Func Offset: 0x28
	// Line 2088, Address: 0x226d08, Func Offset: 0x38
	// Line 2092, Address: 0x226d24, Func Offset: 0x54
	// Line 2096, Address: 0x226d68, Func Offset: 0x98
	// Line 2097, Address: 0x226d7c, Func Offset: 0xac
	// Line 2098, Address: 0x226d98, Func Offset: 0xc8
	// Line 2102, Address: 0x226dd4, Func Offset: 0x104
	// Line 2103, Address: 0x226df4, Func Offset: 0x124
	// Line 2104, Address: 0x226e18, Func Offset: 0x148
	// Line 2110, Address: 0x226e20, Func Offset: 0x150
	// Func End, Address: 0x226e34, Func Offset: 0x164
}

// 
// Start address: 0x226e40
void MariaUpdateStatusExecPhase1()
{
	// Line 2119, Address: 0x226e40, Func Offset: 0
	// Line 2121, Address: 0x226e48, Func Offset: 0x8
	// Line 2123, Address: 0x226e58, Func Offset: 0x18
	// Line 2124, Address: 0x226e68, Func Offset: 0x28
	// Line 2126, Address: 0x226e7c, Func Offset: 0x3c
	// Line 2127, Address: 0x226eb0, Func Offset: 0x70
	// Line 2128, Address: 0x226ec4, Func Offset: 0x84
	// Line 2131, Address: 0x226ecc, Func Offset: 0x8c
	// Line 2132, Address: 0x226ee0, Func Offset: 0xa0
	// Line 2133, Address: 0x226ef4, Func Offset: 0xb4
	// Line 2136, Address: 0x226efc, Func Offset: 0xbc
	// Line 2137, Address: 0x226f30, Func Offset: 0xf0
	// Line 2138, Address: 0x226f44, Func Offset: 0x104
	// Line 2141, Address: 0x226f4c, Func Offset: 0x10c
	// Line 2142, Address: 0x226f5c, Func Offset: 0x11c
	// Line 2143, Address: 0x226f70, Func Offset: 0x130
	// Line 2147, Address: 0x226f78, Func Offset: 0x138
	// Line 2149, Address: 0x226fb0, Func Offset: 0x170
	// Line 2150, Address: 0x226fc4, Func Offset: 0x184
	// Line 2153, Address: 0x226fcc, Func Offset: 0x18c
	// Line 2157, Address: 0x226fe0, Func Offset: 0x1a0
	// Func End, Address: 0x226ff0, Func Offset: 0x1b0
}

// 
// Start address: 0x226ff0
void SubCharacter::MariaUpdateStatusExecPhase2()
{
	void(*mar_main_func)(SubCharacter*);
	// Line 2164, Address: 0x226ff0, Func Offset: 0
	// Line 2173, Address: 0x226ff8, Func Offset: 0x8
	// Line 2174, Address: 0x227014, Func Offset: 0x24
	// Line 2177, Address: 0x22701c, Func Offset: 0x2c
	// Func End, Address: 0x22702c, Func Offset: 0x3c
}

// 
// Start address: 0x227030
void SubCharacter::MariaUpdateStatusExec()
{
	// Line 2184, Address: 0x227030, Func Offset: 0
	// Line 2185, Address: 0x227040, Func Offset: 0x10
	// Line 2186, Address: 0x227048, Func Offset: 0x18
	// Line 2194, Address: 0x227054, Func Offset: 0x24
	// Func End, Address: 0x227068, Func Offset: 0x38
}

// 
// Start address: 0x227070
void GetMariaPartsWorldMatrix(float mat[4], unsigned int parts_name)
{
	shSkelton* sk;
	int i1;
	// Line 2207, Address: 0x227070, Func Offset: 0
	// Line 2211, Address: 0x227078, Func Offset: 0x8
	// Line 2213, Address: 0x227084, Func Offset: 0x14
	// Line 2214, Address: 0x227090, Func Offset: 0x20
	// Line 2216, Address: 0x2270ac, Func Offset: 0x3c
	// Line 2221, Address: 0x2270bc, Func Offset: 0x4c
	// Func End, Address: 0x2270cc, Func Offset: 0x5c
}

// 
// Start address: 0x2270d0
void SubCharacter::MariaCheckDamage()
{
	// Line 2229, Address: 0x2270d0, Func Offset: 0
	// Line 2235, Address: 0x2270e0, Func Offset: 0x10
	// Line 2238, Address: 0x2270e8, Func Offset: 0x18
	// Line 2239, Address: 0x2270f0, Func Offset: 0x20
	// Line 2241, Address: 0x2270f8, Func Offset: 0x28
	// Line 2243, Address: 0x227104, Func Offset: 0x34
	// Line 2245, Address: 0x227124, Func Offset: 0x54
	// Line 2246, Address: 0x227130, Func Offset: 0x60
	// Line 2247, Address: 0x227138, Func Offset: 0x68
	// Line 2251, Address: 0x227178, Func Offset: 0xa8
	// Line 2253, Address: 0x2271b4, Func Offset: 0xe4
	// Line 2254, Address: 0x2271d0, Func Offset: 0x100
	// Line 2255, Address: 0x2271d4, Func Offset: 0x104
	// Line 2256, Address: 0x2271dc, Func Offset: 0x10c
	// Line 2258, Address: 0x2271e8, Func Offset: 0x118
	// Line 2260, Address: 0x2271f0, Func Offset: 0x120
	// Line 2261, Address: 0x227204, Func Offset: 0x134
	// Line 2263, Address: 0x227218, Func Offset: 0x148
	// Line 2265, Address: 0x22725c, Func Offset: 0x18c
	// Line 2267, Address: 0x227278, Func Offset: 0x1a8
	// Line 2268, Address: 0x227294, Func Offset: 0x1c4
	// Line 2270, Address: 0x2272ac, Func Offset: 0x1dc
	// Line 2272, Address: 0x2272bc, Func Offset: 0x1ec
	// Line 2274, Address: 0x2272d8, Func Offset: 0x208
	// Line 2285, Address: 0x22735c, Func Offset: 0x28c
	// Line 2288, Address: 0x227368, Func Offset: 0x298
	// Line 2290, Address: 0x227384, Func Offset: 0x2b4
	// Line 2296, Address: 0x227390, Func Offset: 0x2c0
	// Line 2297, Address: 0x2273a4, Func Offset: 0x2d4
	// Line 2301, Address: 0x2273a8, Func Offset: 0x2d8
	// Line 2302, Address: 0x2273c4, Func Offset: 0x2f4
	// Line 2306, Address: 0x2273d0, Func Offset: 0x300
	// Line 2308, Address: 0x2273e4, Func Offset: 0x314
	// Line 2310, Address: 0x22742c, Func Offset: 0x35c
	// Line 2311, Address: 0x227430, Func Offset: 0x360
	// Line 2314, Address: 0x227434, Func Offset: 0x364
	// Line 2316, Address: 0x227450, Func Offset: 0x380
	// Line 2317, Address: 0x22748c, Func Offset: 0x3bc
	// Func End, Address: 0x2274a0, Func Offset: 0x3d0
}

// 
// Start address: 0x2274a0
void SubCharacter::MariaCheckSetParameterPhase1()
{
	// Line 2326, Address: 0x2274a0, Func Offset: 0
	// Line 2327, Address: 0x2274b0, Func Offset: 0x10
	// Line 2328, Address: 0x2274c0, Func Offset: 0x20
	// Line 2335, Address: 0x2274d0, Func Offset: 0x30
	// Line 2336, Address: 0x2274e4, Func Offset: 0x44
	// Line 2339, Address: 0x2274f0, Func Offset: 0x50
	// Line 2340, Address: 0x2274fc, Func Offset: 0x5c
	// Func End, Address: 0x227510, Func Offset: 0x70
}

// 
// Start address: 0x227510
void SubCharacter::MariaCheckSetParameterPhase2()
{
	// Line 2349, Address: 0x227510, Func Offset: 0
	// Line 2351, Address: 0x227520, Func Offset: 0x10
	// Line 2352, Address: 0x227528, Func Offset: 0x18
	// Line 2354, Address: 0x227534, Func Offset: 0x24
	// Line 2356, Address: 0x227540, Func Offset: 0x30
	// Func End, Address: 0x227554, Func Offset: 0x44
}

// 
// Start address: 0x227560
void SubCharacter::MariaCheckControl()
{
	// Line 2365, Address: 0x227560, Func Offset: 0
	// Line 2366, Address: 0x227570, Func Offset: 0x10
	// Line 2367, Address: 0x227578, Func Offset: 0x18
	// Line 2368, Address: 0x227584, Func Offset: 0x24
	// Func End, Address: 0x227598, Func Offset: 0x38
}

// 
// Start address: 0x2275a0
void maria_anim_set_all(_AnimeInfo* aip, int comp_type)
{
	// Line 2380, Address: 0x2275a0, Func Offset: 0
	// Line 2381, Address: 0x2275b8, Func Offset: 0x18
	// Line 2383, Address: 0x2275e8, Func Offset: 0x48
	// Func End, Address: 0x227600, Func Offset: 0x60
}

// 
// Start address: 0x227600
void MariaCheckAnime()
{
	int comp_type;
	int comp_type;
	int anime;
	_AnimeInfo* aip;
	SubCharacterDisp* scp_d;
	shMariaWork* w;
	int anime_change_check;
	// Line 2385, Address: 0x227600, Func Offset: 0
	// Line 2387, Address: 0x227618, Func Offset: 0x18
	// Line 2388, Address: 0x227620, Func Offset: 0x20
	// Line 2391, Address: 0x227628, Func Offset: 0x28
	// Line 2392, Address: 0x22763c, Func Offset: 0x3c
	// Line 2393, Address: 0x227664, Func Offset: 0x64
	// Line 2395, Address: 0x227690, Func Offset: 0x90
	// Line 2396, Address: 0x227698, Func Offset: 0x98
	// Line 2397, Address: 0x2276a8, Func Offset: 0xa8
	// Line 2398, Address: 0x2276b8, Func Offset: 0xb8
	// Line 2403, Address: 0x2276c0, Func Offset: 0xc0
	// Line 2405, Address: 0x2276f0, Func Offset: 0xf0
	// Line 2406, Address: 0x2276f4, Func Offset: 0xf4
	// Line 2408, Address: 0x2276fc, Func Offset: 0xfc
	// Line 2409, Address: 0x227700, Func Offset: 0x100
	// Line 2411, Address: 0x227708, Func Offset: 0x108
	// Line 2414, Address: 0x22770c, Func Offset: 0x10c
	// Line 2415, Address: 0x227728, Func Offset: 0x128
	// Line 2416, Address: 0x227738, Func Offset: 0x138
	// Line 2418, Address: 0x227748, Func Offset: 0x148
	// Line 2420, Address: 0x227750, Func Offset: 0x150
	// Line 2421, Address: 0x227758, Func Offset: 0x158
	// Line 2422, Address: 0x227768, Func Offset: 0x168
	// Line 2423, Address: 0x227778, Func Offset: 0x178
	// Line 2425, Address: 0x227780, Func Offset: 0x180
	// Line 2426, Address: 0x227788, Func Offset: 0x188
	// Line 2427, Address: 0x227798, Func Offset: 0x198
	// Line 2428, Address: 0x2277a8, Func Offset: 0x1a8
	// Line 2430, Address: 0x2277b0, Func Offset: 0x1b0
	// Line 2431, Address: 0x2277b8, Func Offset: 0x1b8
	// Line 2432, Address: 0x2277c8, Func Offset: 0x1c8
	// Line 2433, Address: 0x2277d8, Func Offset: 0x1d8
	// Line 2435, Address: 0x2277e0, Func Offset: 0x1e0
	// Line 2437, Address: 0x227810, Func Offset: 0x210
	// Line 2438, Address: 0x227818, Func Offset: 0x218
	// Line 2440, Address: 0x227820, Func Offset: 0x220
	// Line 2446, Address: 0x227828, Func Offset: 0x228
	// Line 2447, Address: 0x227838, Func Offset: 0x238
	// Line 2448, Address: 0x227848, Func Offset: 0x248
	// Line 2453, Address: 0x227850, Func Offset: 0x250
	// Line 2455, Address: 0x227874, Func Offset: 0x274
	// Line 2456, Address: 0x227878, Func Offset: 0x278
	// Line 2457, Address: 0x227888, Func Offset: 0x288
	// Line 2459, Address: 0x227890, Func Offset: 0x290
	// Line 2460, Address: 0x227894, Func Offset: 0x294
	// Line 2462, Address: 0x22789c, Func Offset: 0x29c
	// Line 2463, Address: 0x2278a0, Func Offset: 0x2a0
	// Line 2466, Address: 0x2278ac, Func Offset: 0x2ac
	// Line 2467, Address: 0x2278b4, Func Offset: 0x2b4
	// Line 2469, Address: 0x2278c4, Func Offset: 0x2c4
	// Line 2474, Address: 0x2278cc, Func Offset: 0x2cc
	// Line 2475, Address: 0x2278dc, Func Offset: 0x2dc
	// Line 2476, Address: 0x2278e0, Func Offset: 0x2e0
	// Line 2477, Address: 0x2278f0, Func Offset: 0x2f0
	// Line 2478, Address: 0x2278f8, Func Offset: 0x2f8
	// Line 2479, Address: 0x2278fc, Func Offset: 0x2fc
	// Line 2481, Address: 0x22790c, Func Offset: 0x30c
	// Line 2482, Address: 0x227914, Func Offset: 0x314
	// Line 2484, Address: 0x227924, Func Offset: 0x324
	// Line 2486, Address: 0x22792c, Func Offset: 0x32c
	// Line 2487, Address: 0x227950, Func Offset: 0x350
	// Line 2488, Address: 0x227960, Func Offset: 0x360
	// Line 2491, Address: 0x227970, Func Offset: 0x370
	// Line 2492, Address: 0x22797c, Func Offset: 0x37c
	// Line 2496, Address: 0x22798c, Func Offset: 0x38c
	// Line 2497, Address: 0x22799c, Func Offset: 0x39c
	// Line 2499, Address: 0x2279ac, Func Offset: 0x3ac
	// Line 2500, Address: 0x2279bc, Func Offset: 0x3bc
	// Line 2503, Address: 0x2279cc, Func Offset: 0x3cc
	// Line 2504, Address: 0x2279dc, Func Offset: 0x3dc
	// Line 2505, Address: 0x2279ec, Func Offset: 0x3ec
	// Line 2506, Address: 0x2279f4, Func Offset: 0x3f4
	// Line 2508, Address: 0x227a04, Func Offset: 0x404
	// Func End, Address: 0x227a24, Func Offset: 0x424
}

// 
// Start address: 0x227a30
void SubCharacter::MariaUpdatePosition()
{
	float cos_z;
	float cos_x;
	void(*mar_sub_func)(SubCharacter*);
	// Line 2517, Address: 0x227a30, Func Offset: 0
	// Line 2526, Address: 0x227a40, Func Offset: 0x10
	// Line 2527, Address: 0x227a5c, Func Offset: 0x2c
	// Line 2535, Address: 0x227a64, Func Offset: 0x34
	// Line 2536, Address: 0x227a78, Func Offset: 0x48
	// Line 2537, Address: 0x227b28, Func Offset: 0xf8
	// Line 2538, Address: 0x227bd8, Func Offset: 0x1a8
	// Line 2539, Address: 0x227be0, Func Offset: 0x1b0
	// Line 2540, Address: 0x227c8c, Func Offset: 0x25c
	// Line 2541, Address: 0x227d38, Func Offset: 0x308
	// Line 2544, Address: 0x227d3c, Func Offset: 0x30c
	// Line 2555, Address: 0x227d44, Func Offset: 0x314
	// Line 2556, Address: 0x227d4c, Func Offset: 0x31c
	// Line 2557, Address: 0x227d5c, Func Offset: 0x32c
	// Line 2561, Address: 0x227d6c, Func Offset: 0x33c
	// Line 2562, Address: 0x227d78, Func Offset: 0x348
	// Line 2563, Address: 0x227d84, Func Offset: 0x354
	// Line 2566, Address: 0x227d90, Func Offset: 0x360
	// Line 2567, Address: 0x227dac, Func Offset: 0x37c
	// Line 2568, Address: 0x227dc0, Func Offset: 0x390
	// Line 2570, Address: 0x227dd4, Func Offset: 0x3a4
	// Line 2586, Address: 0x227de8, Func Offset: 0x3b8
	// Func End, Address: 0x227dfc, Func Offset: 0x3cc
}

// 
// Start address: 0x227e00
void MariaCheckSound()
{
	// Line 2595, Address: 0x227e00, Func Offset: 0
	// Line 2596, Address: 0x227e08, Func Offset: 0x8
	// Line 2597, Address: 0x227e10, Func Offset: 0x10
	// Line 2599, Address: 0x227e18, Func Offset: 0x18
	// Func End, Address: 0x227e28, Func Offset: 0x28
}

// 
// Start address: 0x227e30
void MariaInitOnConnect()
{
	int i1;
	// Line 2608, Address: 0x227e30, Func Offset: 0
	// Line 2609, Address: 0x227e38, Func Offset: 0x8
	// Line 2611, Address: 0x227e3c, Func Offset: 0xc
	// Line 2612, Address: 0x227e50, Func Offset: 0x20
	// Line 2614, Address: 0x227e64, Func Offset: 0x34
	// Line 2615, Address: 0x227e78, Func Offset: 0x48
	// Line 2617, Address: 0x227e8c, Func Offset: 0x5c
	// Line 2618, Address: 0x227ea0, Func Offset: 0x70
	// Line 2619, Address: 0x227eb0, Func Offset: 0x80
	// Line 2624, Address: 0x227ec0, Func Offset: 0x90
	// Line 2625, Address: 0x227ed0, Func Offset: 0xa0
	// Line 2626, Address: 0x227ed4, Func Offset: 0xa4
	// Line 2627, Address: 0x227edc, Func Offset: 0xac
	// Line 2629, Address: 0x227f04, Func Offset: 0xd4
	// Line 2630, Address: 0x227f2c, Func Offset: 0xfc
	// Line 2631, Address: 0x227f54, Func Offset: 0x124
	// Line 2632, Address: 0x227f7c, Func Offset: 0x14c
	// Line 2633, Address: 0x227fa4, Func Offset: 0x174
	// Line 2634, Address: 0x227fbc, Func Offset: 0x18c
	// Line 2636, Address: 0x227fc4, Func Offset: 0x194
	// Line 2637, Address: 0x227fc8, Func Offset: 0x198
	// Line 2638, Address: 0x227fe4, Func Offset: 0x1b4
	// Line 2639, Address: 0x227fe8, Func Offset: 0x1b8
	// Line 2640, Address: 0x228010, Func Offset: 0x1e0
	// Line 2641, Address: 0x228050, Func Offset: 0x220
	// Line 2642, Address: 0x228068, Func Offset: 0x238
	// Line 2643, Address: 0x2280a8, Func Offset: 0x278
	// Line 2644, Address: 0x2280d4, Func Offset: 0x2a4
	// Line 2648, Address: 0x2280e0, Func Offset: 0x2b0
	// Line 2649, Address: 0x2280fc, Func Offset: 0x2cc
	// Line 2650, Address: 0x228128, Func Offset: 0x2f8
	// Line 2651, Address: 0x228144, Func Offset: 0x314
	// Line 2652, Address: 0x228174, Func Offset: 0x344
	// Line 2653, Address: 0x228188, Func Offset: 0x358
	// Line 2654, Address: 0x22819c, Func Offset: 0x36c
	// Line 2655, Address: 0x2281a4, Func Offset: 0x374
	// Line 2658, Address: 0x2281b8, Func Offset: 0x388
	// Line 2659, Address: 0x2281c0, Func Offset: 0x390
	// Line 2663, Address: 0x2281c8, Func Offset: 0x398
	// Line 2664, Address: 0x2281e0, Func Offset: 0x3b0
	// Line 2665, Address: 0x2281e8, Func Offset: 0x3b8
	// Line 2671, Address: 0x228218, Func Offset: 0x3e8
	// Line 2673, Address: 0x228228, Func Offset: 0x3f8
	// Line 2676, Address: 0x228230, Func Offset: 0x400
	// Line 2677, Address: 0x228238, Func Offset: 0x408
	// Line 2678, Address: 0x228240, Func Offset: 0x410
	// Line 2679, Address: 0x228248, Func Offset: 0x418
	// Line 2682, Address: 0x228250, Func Offset: 0x420
	// Line 2683, Address: 0x228264, Func Offset: 0x434
	// Line 2684, Address: 0x228278, Func Offset: 0x448
	// Line 2687, Address: 0x22828c, Func Offset: 0x45c
	// Line 2693, Address: 0x228298, Func Offset: 0x468
	// Func End, Address: 0x2282a8, Func Offset: 0x478
}

// 
// Start address: 0x2282b0
void MariaSetHeightConnectWait()
{
	// Line 2701, Address: 0x2282b0, Func Offset: 0
	// Line 2702, Address: 0x2282b8, Func Offset: 0x8
	// Line 2703, Address: 0x2282c8, Func Offset: 0x18
	// Func End, Address: 0x2282d8, Func Offset: 0x28
}

// 
// Start address: 0x2282e0
void MariaStatusClear()
{
	// Line 2711, Address: 0x2282e0, Func Offset: 0
	// Line 2712, Address: 0x2282ec, Func Offset: 0xc
	// Line 2713, Address: 0x2282f8, Func Offset: 0x18
	// Func End, Address: 0x228300, Func Offset: 0x20
}

