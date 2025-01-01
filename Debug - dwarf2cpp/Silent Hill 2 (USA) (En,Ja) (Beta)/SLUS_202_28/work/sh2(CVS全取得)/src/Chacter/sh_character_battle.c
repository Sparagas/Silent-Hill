typedef struct SubCharacter;
typedef struct _CL_BATTLE_RESULT;
typedef struct shPlayerWork;
typedef struct _CL_VHIT_WALL;
typedef union _anon0;
typedef struct shAttackInfo;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _CL_HITPOLY_PLANE;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct _CL_VHIT_CHARA;
typedef union _anon1;
typedef struct _CL_VHIT_RESULT;
typedef union _anon2;
typedef struct shAttackQueueOne;
typedef struct _anon3;
typedef struct shAttackQueue;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct shSkelton;
typedef struct _anon4;
typedef struct PAD_3D;
typedef struct PAD_2D;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct PAD_INFO;
typedef struct Playing_Info;
typedef struct shBattleFight;
typedef struct _CL_BATTLE_QUE;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shBattleInfo;

typedef void(*type_18)(SubCharacter*);
typedef void(*type_20)(SubCharacter*);

typedef float type_0[7];
typedef unsigned int type_1[7];
typedef float type_2[7];
typedef unsigned char type_3[2];
typedef float type_4[7];
typedef unsigned char type_5[2];
typedef unsigned char type_6[20];
typedef unsigned int type_7[32];
typedef shAttackQueueOne type_8[20];
typedef float type_9[4][4];
typedef shAttackInfo type_10[66];
typedef unsigned char type_11[14];
typedef float type_12[7];
typedef unsigned char type_13[2];
typedef float type_14[7];
typedef float type_15[4];
typedef float type_16[4][4];
typedef float type_17[4][2];
typedef unsigned char type_19[69];
typedef float type_21[7];
typedef unsigned char type_22[4];
typedef unsigned int type_23[32];
typedef unsigned int type_24[9];
typedef PAD_INFO type_25[10];
typedef float type_26[4];
typedef unsigned char type_27[14];
typedef float type_28[4];
typedef float type_29[4];
typedef float type_30[4][4];
typedef float type_31[2];
typedef unsigned char type_32[4];
typedef unsigned char type_33[4];
typedef unsigned char type_34[97];

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
	_anon3 pos;
	_anon3 rot;
	_anon3 pos_spd;
	_anon3 rot_spd;
	_anon4 mat;
	shSkelton* sk_top;
	float eye_y;
	float center_y;
	float spd;
	float spd_org;
	float spd_y;
	float spd_roty;
	float grnd_normal[4];
	float grnd_height;
	_anon3 b_pos;
	_anon3 b_rot;
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

struct _CL_BATTLE_RESULT
{
	int enable;
	unsigned int id;
	int atr;
	float pos[4];
	float vec[4];
	unsigned short kind;
	unsigned short btlid;
	_anon0 obj;
};

struct shPlayerWork
{
	SubCharacter* player;
	_anon3 dist_rot;
	_anon3 dist_pos;
	_anon3 pos;
	_anon3 rot;
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
	_anon3 tgt_body_angle;
	_anon3 tgt_neck_angle;
	_anon3 tgt_arms_angle;
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

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

union _anon0
{
	SubCharacter* en;
	_CL_HITPOLY_PLANE* pl;
	_CL_HITPOLY_COLUMN* cl;
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

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
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

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
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

union _anon2
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct shAttackQueueOne
{
	SubCharacter* scp;
	unsigned char wep_no;
	unsigned short atk_no;
};

struct _anon3
{
	float x;
	float y;
	float z;
	float w;
};

struct shAttackQueue
{
	int rest;
	shAttackQueueOne queue[20];
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

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon4 src_m;
	_anon3 src_t;
	_anon4 des_m;
	_anon3 des_t;
	_anon3 axis;
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

struct _anon4
{
	float d[4][4];
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

struct Playing_Info
{
	unsigned char stage;
	unsigned char enemy_off;
	unsigned char voice_off;
	unsigned char memo_select;
	unsigned char clear_end_kind;
	unsigned char clear_end_number;
	unsigned char rank;
	unsigned char game_stage;
	unsigned char hidden_item_get;
	char spray_pow;
	unsigned short savecount;
	unsigned short clearcount;
	unsigned short item_get;
	unsigned short kill_by_shot;
	unsigned short kill_by_fight;
	float time;
	float walk_distance;
	float run_distance;
	float boat_clear_time;
	float boat_max_speed;
	float jms_damage_total;
	float mar_damage_by_enemy;
	float mar_damage_by_jms;
	float stage_check_point[7];
	unsigned int stage_score[7];
	unsigned int total_score;
	float total_time;
	unsigned char battle_level;
	unsigned char riddle_level;
	unsigned char brightness_level;
	char screen_position_x;
	char screen_position_y;
	unsigned char vibration;
	unsigned char auto_load;
	unsigned char sound;
	unsigned char bgm_volume;
	unsigned char se_volume;
	unsigned char weapon_control;
	unsigned char blood_color;
	unsigned char view_control;
	unsigned char retreat_turn;
	unsigned char walk_run_control;
	unsigned char auto_aiming;
	unsigned char view_mode;
	unsigned char bullet_adjust;
	unsigned char language;
	unsigned char subtitles;
	unsigned char control_type;
	unsigned char radar;
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct _CL_BATTLE_QUE
{
	unsigned short kind;
	unsigned short btlid;
	SubCharacter* sc;
	float svs[4];
	float sve[4];
	float evs[4];
	float eve[4];
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

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
float jms_walk_spd_ana[7];
float jms_back_spd_ana[7];
float jms_swalk_spd_ana[7];
float jms_run_spd_ana[7];
float jms_srun_spd_ana[7];
unsigned int pjames_act_with_wep_flag[9];
unsigned int pjames_upper_flag[32];
unsigned int pjames_lower_flag[32];
float sh2_battle_wall_hit;
int sh2_battle_attack_check;
shPlayerWork sh2jms;
Playing_Info playing;
shAttackQueue sh2_attack_queue;

void shBattleDamageRevise(float* damage, float* shock, SubCharacter* scp, _CL_BATTLE_RESULT* result);
void shBattleSetEffectDamage(SubCharacter* scp, float* pos, float* vec, unsigned short atk);
void shBattleSetSoundDamage(SubCharacter* scp, _CL_BATTLE_RESULT* result);
void shBattleAddEffectAttack(float* pos, float* vec);
void shBattleAttackByHumanGunshotTypeA(SubCharacter* attacker, unsigned short atk);
void shBattleAttackByHumanGunshotTypeB(SubCharacter* attacker, unsigned short atk);
void shBattleAttackByHumanFightType(SubCharacter* attacker, unsigned short atk);
void shGetHumanAttackSprayPos(int i, float* s_pos, float* s_vec, float* result);
void shBattleAttackByHumanFog(SubCharacter* attacker, unsigned short atk);
void shBattleAttackByHumanFinish(SubCharacter* attacker, unsigned short atk);
void shGetEnemyAttackStartPos(SubCharacter* attacker, unsigned short atk, float* s_pos, float* s_vec);
void shBattleAttackByEnemySlash(SubCharacter* attacker, unsigned short atk);
void shBattleAttackByEnemyStrike(SubCharacter* attacker, unsigned short atk);
void shBattleAttackByEnemyFog(SubCharacter* attacker, unsigned short atk);
void shBattleAttackByEnemyBite();
void shBattleAttackByEnemyHug(SubCharacter* attacker, unsigned short atk);
void shBattleAttackByEnemyNeedle(SubCharacter* attacker, unsigned short atk);
void shBattleAttackByEnemyShot(SubCharacter* attacker, unsigned short atk);
void shBattleAddAttackQueue(SubCharacter* scp, unsigned char wep_no, unsigned short atk_no);
void shBattleAttackHitCheckInit(SubCharacter* scp);
void shBattleAttackHitCheckToEnemy(SubCharacter* scp, unsigned char wep_no, unsigned short atk_no);
void shBattleAttackHitCheckToHuman(SubCharacter* scp, unsigned short atk_no);
int shBattleRequestNextAttackIsOk(unsigned short atk, unsigned short frame);
void shBattleGetResult(SubCharacter* scp);
void shBattleInitAttackQueue();
void shBattleExecAttackQueue();
float shBattleGetJamesHP();
float shBattleGetJamesHP_Rate();
void shBattleSetJamesDamage(unsigned short id, float damage, float* vec);
float shBattleEventWallHitCheck();
int shBattleCheckAttackByEnemy();

// 
// Start address: 0x1205a0
void shBattleDamageRevise(float* damage, float* shock, SubCharacter* scp, _CL_BATTLE_RESULT* result)
{
	// Line 173, Address: 0x1205a0, Func Offset: 0
	// Line 174, Address: 0x1205b0, Func Offset: 0x10
	// Line 175, Address: 0x1205b4, Func Offset: 0x14
	// Line 177, Address: 0x1205bc, Func Offset: 0x1c
	// Line 179, Address: 0x1205d4, Func Offset: 0x34
	// Line 181, Address: 0x1205dc, Func Offset: 0x3c
	// Line 182, Address: 0x120600, Func Offset: 0x60
	// Line 185, Address: 0x120608, Func Offset: 0x68
	// Line 190, Address: 0x120628, Func Offset: 0x88
	// Line 191, Address: 0x12064c, Func Offset: 0xac
	// Func End, Address: 0x120654, Func Offset: 0xb4
}

// 
// Start address: 0x120660
void shBattleSetEffectDamage(SubCharacter* scp, float* pos, float* vec, unsigned short atk)
{
	int atk_type;
	float vec_tmp[4];
	// Line 204, Address: 0x120660, Func Offset: 0
	// Line 210, Address: 0x12066c, Func Offset: 0xc
	// Line 214, Address: 0x12069c, Func Offset: 0x3c
	// Line 219, Address: 0x1206a4, Func Offset: 0x44
	// Line 220, Address: 0x1206c0, Func Offset: 0x60
	// Line 222, Address: 0x1206cc, Func Offset: 0x6c
	// Line 225, Address: 0x1206d0, Func Offset: 0x70
	// Line 245, Address: 0x120788, Func Offset: 0x128
	// Line 251, Address: 0x120794, Func Offset: 0x134
	// Line 266, Address: 0x1207ac, Func Offset: 0x14c
	// Func End, Address: 0x1207bc, Func Offset: 0x15c
}

// 
// Start address: 0x1207c0
void shBattleSetSoundDamage(SubCharacter* scp, _CL_BATTLE_RESULT* result)
{
	float vol;
	int type;
	int se;
	// Line 275, Address: 0x1207c0, Func Offset: 0
	// Line 280, Address: 0x1207dc, Func Offset: 0x1c
	// Line 282, Address: 0x1207e0, Func Offset: 0x20
	// Line 293, Address: 0x1208c4, Func Offset: 0x104
	// Line 294, Address: 0x1208c8, Func Offset: 0x108
	// Line 295, Address: 0x1208d4, Func Offset: 0x114
	// Line 298, Address: 0x1208dc, Func Offset: 0x11c
	// Line 299, Address: 0x1208e0, Func Offset: 0x120
	// Line 300, Address: 0x1208ec, Func Offset: 0x12c
	// Line 303, Address: 0x1208f4, Func Offset: 0x134
	// Line 308, Address: 0x1208fc, Func Offset: 0x13c
	// Line 310, Address: 0x120900, Func Offset: 0x140
	// Line 315, Address: 0x120904, Func Offset: 0x144
	// Line 316, Address: 0x120910, Func Offset: 0x150
	// Line 317, Address: 0x120920, Func Offset: 0x160
	// Line 319, Address: 0x120950, Func Offset: 0x190
	// Line 320, Address: 0x120978, Func Offset: 0x1b8
	// Line 321, Address: 0x120980, Func Offset: 0x1c0
	// Line 323, Address: 0x120988, Func Offset: 0x1c8
	// Line 324, Address: 0x1209b0, Func Offset: 0x1f0
	// Line 325, Address: 0x1209b8, Func Offset: 0x1f8
	// Line 329, Address: 0x1209c0, Func Offset: 0x200
	// Line 330, Address: 0x1209e8, Func Offset: 0x228
	// Line 331, Address: 0x1209f0, Func Offset: 0x230
	// Line 333, Address: 0x1209f8, Func Offset: 0x238
	// Line 334, Address: 0x120a20, Func Offset: 0x260
	// Line 335, Address: 0x120a28, Func Offset: 0x268
	// Line 337, Address: 0x120a30, Func Offset: 0x270
	// Line 338, Address: 0x120a54, Func Offset: 0x294
	// Line 339, Address: 0x120a5c, Func Offset: 0x29c
	// Line 341, Address: 0x120a64, Func Offset: 0x2a4
	// Line 342, Address: 0x120a8c, Func Offset: 0x2cc
	// Line 343, Address: 0x120a98, Func Offset: 0x2d8
	// Line 346, Address: 0x120aa0, Func Offset: 0x2e0
	// Line 349, Address: 0x120b14, Func Offset: 0x354
	// Line 350, Address: 0x120b18, Func Offset: 0x358
	// Line 351, Address: 0x120b20, Func Offset: 0x360
	// Line 355, Address: 0x120b28, Func Offset: 0x368
	// Line 356, Address: 0x120b2c, Func Offset: 0x36c
	// Line 357, Address: 0x120b34, Func Offset: 0x374
	// Line 362, Address: 0x120b3c, Func Offset: 0x37c
	// Line 363, Address: 0x120b40, Func Offset: 0x380
	// Line 364, Address: 0x120b48, Func Offset: 0x388
	// Line 366, Address: 0x120b50, Func Offset: 0x390
	// Line 367, Address: 0x120b78, Func Offset: 0x3b8
	// Line 370, Address: 0x120b84, Func Offset: 0x3c4
	// Line 374, Address: 0x120b8c, Func Offset: 0x3cc
	// Line 375, Address: 0x120bb0, Func Offset: 0x3f0
	// Line 376, Address: 0x120bb8, Func Offset: 0x3f8
	// Line 378, Address: 0x120bc0, Func Offset: 0x400
	// Line 379, Address: 0x120be8, Func Offset: 0x428
	// Line 380, Address: 0x120bf0, Func Offset: 0x430
	// Line 382, Address: 0x120bf8, Func Offset: 0x438
	// Line 383, Address: 0x120c20, Func Offset: 0x460
	// Line 384, Address: 0x120c2c, Func Offset: 0x46c
	// Line 387, Address: 0x120c34, Func Offset: 0x474
	// Line 408, Address: 0x120c38, Func Offset: 0x478
	// Line 409, Address: 0x120c40, Func Offset: 0x480
	// Line 410, Address: 0x120c48, Func Offset: 0x488
	// Line 411, Address: 0x120c60, Func Offset: 0x4a0
	// Line 412, Address: 0x120c68, Func Offset: 0x4a8
	// Line 416, Address: 0x120c7c, Func Offset: 0x4bc
	// Func End, Address: 0x120c98, Func Offset: 0x4d8
}

// 
// Start address: 0x120ca0
void shBattleAddEffectAttack(float* pos, float* vec)
{
	// Line 427, Address: 0x120ca0, Func Offset: 0
	// Line 435, Address: 0x120cb0, Func Offset: 0x10
	// Line 444, Address: 0x120cc0, Func Offset: 0x20
	// Line 446, Address: 0x120ccc, Func Offset: 0x2c
	// Line 448, Address: 0x120cd4, Func Offset: 0x34
	// Func End, Address: 0x120ce8, Func Offset: 0x48
}

// 
// Start address: 0x120cf0
void shBattleAttackByHumanGunshotTypeA(SubCharacter* attacker, unsigned short atk)
{
	int wep;
	_CL_BATTLE_QUE que;
	unsigned short ed;
	unsigned short st;
	unsigned short cur_frame;
	float gunvec[4];
	float gunpos[4];
	// Line 473, Address: 0x120cf0, Func Offset: 0
	// Line 481, Address: 0x120d10, Func Offset: 0x20
	// Line 482, Address: 0x120d2c, Func Offset: 0x3c
	// Line 485, Address: 0x120d34, Func Offset: 0x44
	// Line 486, Address: 0x120d44, Func Offset: 0x54
	// Line 487, Address: 0x120d64, Func Offset: 0x74
	// Line 490, Address: 0x120d74, Func Offset: 0x84
	// Line 493, Address: 0x120d9c, Func Offset: 0xac
	// Line 496, Address: 0x120dac, Func Offset: 0xbc
	// Line 497, Address: 0x120dd0, Func Offset: 0xe0
	// Line 498, Address: 0x120de4, Func Offset: 0xf4
	// Line 499, Address: 0x120df8, Func Offset: 0x108
	// Line 500, Address: 0x120e00, Func Offset: 0x110
	// Line 501, Address: 0x120e1c, Func Offset: 0x12c
	// Line 502, Address: 0x120e28, Func Offset: 0x138
	// Line 503, Address: 0x120e34, Func Offset: 0x144
	// Line 504, Address: 0x120e38, Func Offset: 0x148
	// Line 505, Address: 0x120e40, Func Offset: 0x150
	// Line 506, Address: 0x120e54, Func Offset: 0x164
	// Line 515, Address: 0x120e58, Func Offset: 0x168
	// Line 519, Address: 0x120e64, Func Offset: 0x174
	// Line 522, Address: 0x120e6c, Func Offset: 0x17c
	// Line 529, Address: 0x120e80, Func Offset: 0x190
	// Line 533, Address: 0x120eb4, Func Offset: 0x1c4
	// Line 535, Address: 0x120ec4, Func Offset: 0x1d4
	// Line 537, Address: 0x120ed4, Func Offset: 0x1e4
	// Line 540, Address: 0x120ee0, Func Offset: 0x1f0
	// Line 546, Address: 0x120eec, Func Offset: 0x1fc
	// Line 547, Address: 0x120efc, Func Offset: 0x20c
	// Line 550, Address: 0x120f00, Func Offset: 0x210
	// Func End, Address: 0x120f24, Func Offset: 0x234
}

// 
// Start address: 0x120f30
void shBattleAttackByHumanGunshotTypeB(SubCharacter* attacker, unsigned short atk)
{
	int wep;
	_CL_BATTLE_QUE que;
	unsigned short ed;
	unsigned short st;
	unsigned short cur_frame;
	float rot_direction;
	float rot_spread;
	float mat[4][4];
	float unit[4][4];
	float gunvec[4];
	float gunpos[4];
	float rot[4];
	float vec[4];
	int i;
	// Line 561, Address: 0x120f30, Func Offset: 0
	// Line 565, Address: 0x120f60, Func Offset: 0x30
	// Line 566, Address: 0x120f74, Func Offset: 0x44
	// Line 575, Address: 0x120f88, Func Offset: 0x58
	// Line 579, Address: 0x120f98, Func Offset: 0x68
	// Line 580, Address: 0x120fa4, Func Offset: 0x74
	// Line 581, Address: 0x120fc4, Func Offset: 0x94
	// Line 585, Address: 0x120fd4, Func Offset: 0xa4
	// Line 590, Address: 0x121000, Func Offset: 0xd0
	// Line 591, Address: 0x121010, Func Offset: 0xe0
	// Line 592, Address: 0x121024, Func Offset: 0xf4
	// Line 593, Address: 0x121058, Func Offset: 0x128
	// Line 594, Address: 0x121080, Func Offset: 0x150
	// Line 596, Address: 0x1210b8, Func Offset: 0x188
	// Line 599, Address: 0x1210c4, Func Offset: 0x194
	// Line 600, Address: 0x1210e0, Func Offset: 0x1b0
	// Line 603, Address: 0x12111c, Func Offset: 0x1ec
	// Line 604, Address: 0x12112c, Func Offset: 0x1fc
	// Line 605, Address: 0x121150, Func Offset: 0x220
	// Line 606, Address: 0x121174, Func Offset: 0x244
	// Line 609, Address: 0x121188, Func Offset: 0x258
	// Line 610, Address: 0x1211bc, Func Offset: 0x28c
	// Line 611, Address: 0x1211e0, Func Offset: 0x2b0
	// Line 612, Address: 0x121204, Func Offset: 0x2d4
	// Line 613, Address: 0x12120c, Func Offset: 0x2dc
	// Line 614, Address: 0x121228, Func Offset: 0x2f8
	// Line 615, Address: 0x121244, Func Offset: 0x314
	// Line 616, Address: 0x121260, Func Offset: 0x330
	// Line 617, Address: 0x121264, Func Offset: 0x334
	// Line 618, Address: 0x121274, Func Offset: 0x344
	// Line 619, Address: 0x121288, Func Offset: 0x358
	// Line 625, Address: 0x12128c, Func Offset: 0x35c
	// Line 626, Address: 0x121298, Func Offset: 0x368
	// Line 629, Address: 0x1212ac, Func Offset: 0x37c
	// Line 632, Address: 0x1212b4, Func Offset: 0x384
	// Line 635, Address: 0x1212c8, Func Offset: 0x398
	// Line 639, Address: 0x1212e4, Func Offset: 0x3b4
	// Line 640, Address: 0x1212f4, Func Offset: 0x3c4
	// Line 642, Address: 0x121304, Func Offset: 0x3d4
	// Line 645, Address: 0x121310, Func Offset: 0x3e0
	// Line 650, Address: 0x12131c, Func Offset: 0x3ec
	// Line 651, Address: 0x121330, Func Offset: 0x400
	// Line 653, Address: 0x121334, Func Offset: 0x404
	// Func End, Address: 0x121364, Func Offset: 0x434
}

// 
// Start address: 0x121370
void shBattleAttackByHumanFightType(SubCharacter* attacker, unsigned short atk)
{
	_CL_BATTLE_QUE que;
	unsigned short ed;
	unsigned short st;
	unsigned short cur_frame;
	float s_vec[4];
	float s_pos[4];
	int jouken;
	// Line 694, Address: 0x121370, Func Offset: 0
	// Line 701, Address: 0x12139c, Func Offset: 0x2c
	// Line 702, Address: 0x1213ac, Func Offset: 0x3c
	// Line 703, Address: 0x1213cc, Func Offset: 0x5c
	// Line 706, Address: 0x1213dc, Func Offset: 0x6c
	// Line 707, Address: 0x1213ec, Func Offset: 0x7c
	// Line 708, Address: 0x121414, Func Offset: 0xa4
	// Line 709, Address: 0x121428, Func Offset: 0xb8
	// Line 710, Address: 0x12143c, Func Offset: 0xcc
	// Line 713, Address: 0x121444, Func Offset: 0xd4
	// Line 721, Address: 0x121474, Func Offset: 0x104
	// Line 722, Address: 0x1214a4, Func Offset: 0x134
	// Line 724, Address: 0x1214b0, Func Offset: 0x140
	// Line 725, Address: 0x1214b4, Func Offset: 0x144
	// Line 732, Address: 0x1214bc, Func Offset: 0x14c
	// Line 733, Address: 0x1214e0, Func Offset: 0x170
	// Line 735, Address: 0x1214ec, Func Offset: 0x17c
	// Line 736, Address: 0x1214f0, Func Offset: 0x180
	// Line 738, Address: 0x1214f8, Func Offset: 0x188
	// Line 743, Address: 0x121500, Func Offset: 0x190
	// Line 744, Address: 0x121510, Func Offset: 0x1a0
	// Line 746, Address: 0x12151c, Func Offset: 0x1ac
	// Line 747, Address: 0x121524, Func Offset: 0x1b4
	// Line 751, Address: 0x12152c, Func Offset: 0x1bc
	// Line 753, Address: 0x121534, Func Offset: 0x1c4
	// Line 754, Address: 0x121554, Func Offset: 0x1e4
	// Line 755, Address: 0x121564, Func Offset: 0x1f4
	// Line 756, Address: 0x121574, Func Offset: 0x204
	// Line 757, Address: 0x121580, Func Offset: 0x210
	// Line 758, Address: 0x121588, Func Offset: 0x218
	// Line 759, Address: 0x121590, Func Offset: 0x220
	// Line 760, Address: 0x121598, Func Offset: 0x228
	// Line 762, Address: 0x12159c, Func Offset: 0x22c
	// Line 763, Address: 0x1215a4, Func Offset: 0x234
	// Line 764, Address: 0x1215b8, Func Offset: 0x248
	// Line 774, Address: 0x1215bc, Func Offset: 0x24c
	// Line 775, Address: 0x1215d8, Func Offset: 0x268
	// Line 782, Address: 0x1215e4, Func Offset: 0x274
	// Line 785, Address: 0x1215f4, Func Offset: 0x284
	// Line 786, Address: 0x121600, Func Offset: 0x290
	// Line 789, Address: 0x121604, Func Offset: 0x294
	// Func End, Address: 0x121630, Func Offset: 0x2c0
}

// 
// Start address: 0x121630
void shGetHumanAttackSprayPos(int i, float* s_pos, float* s_vec, float* result)
{
	float roty;
	float rotx;
	float vec[4];
	float pos1[4];
	// Line 795, Address: 0x121630, Func Offset: 0
	// Line 811, Address: 0x121660, Func Offset: 0x30
	// Line 812, Address: 0x121674, Func Offset: 0x44
	// Line 814, Address: 0x1216a0, Func Offset: 0x70
	// Line 816, Address: 0x1216e0, Func Offset: 0xb0
	// Line 817, Address: 0x121708, Func Offset: 0xd8
	// Line 818, Address: 0x121730, Func Offset: 0x100
	// Line 819, Address: 0x121758, Func Offset: 0x128
	// Line 821, Address: 0x121760, Func Offset: 0x130
	// Line 822, Address: 0x121788, Func Offset: 0x158
	// Line 823, Address: 0x1217b0, Func Offset: 0x180
	// Line 824, Address: 0x1217e8, Func Offset: 0x1b8
	// Line 826, Address: 0x1217f0, Func Offset: 0x1c0
	// Line 827, Address: 0x121828, Func Offset: 0x1f8
	// Line 828, Address: 0x121860, Func Offset: 0x230
	// Line 829, Address: 0x121888, Func Offset: 0x258
	// Line 831, Address: 0x121890, Func Offset: 0x260
	// Line 832, Address: 0x1218b8, Func Offset: 0x288
	// Line 833, Address: 0x1218e0, Func Offset: 0x2b0
	// Line 834, Address: 0x121918, Func Offset: 0x2e8
	// Line 836, Address: 0x121920, Func Offset: 0x2f0
	// Line 837, Address: 0x121958, Func Offset: 0x328
	// Line 838, Address: 0x121990, Func Offset: 0x360
	// Line 842, Address: 0x1219b8, Func Offset: 0x388
	// Line 843, Address: 0x1219c8, Func Offset: 0x398
	// Line 844, Address: 0x1219d8, Func Offset: 0x3a8
	// Line 845, Address: 0x1219e8, Func Offset: 0x3b8
	// Line 846, Address: 0x1219ec, Func Offset: 0x3bc
	// Line 847, Address: 0x121a10, Func Offset: 0x3e0
	// Func End, Address: 0x121a38, Func Offset: 0x408
}

// 
// Start address: 0x121a40
void shBattleAttackByHumanFog(SubCharacter* attacker, unsigned short atk)
{
	unsigned int pow;
	int wep;
	_CL_BATTLE_QUE que;
	unsigned short ed;
	unsigned short st;
	unsigned short cur_frame;
	float sp_end[4];
	float sp_start[4];
	float s_vec_result[4];
	float s_vec[4];
	float s_pos[4];
	int i;
	float max_range;
	float min_range;
	// Line 852, Address: 0x121a40, Func Offset: 0
	// Line 870, Address: 0x121a5c, Func Offset: 0x1c
	// Line 871, Address: 0x121a78, Func Offset: 0x38
	// Line 872, Address: 0x121a7c, Func Offset: 0x3c
	// Line 875, Address: 0x121a84, Func Offset: 0x44
	// Line 876, Address: 0x121aa0, Func Offset: 0x60
	// Line 877, Address: 0x121ab4, Func Offset: 0x74
	// Line 878, Address: 0x121ad4, Func Offset: 0x94
	// Line 881, Address: 0x121adc, Func Offset: 0x9c
	// Line 885, Address: 0x121ae8, Func Offset: 0xa8
	// Line 890, Address: 0x121af8, Func Offset: 0xb8
	// Line 893, Address: 0x121b84, Func Offset: 0x144
	// Line 897, Address: 0x121c10, Func Offset: 0x1d0
	// Line 899, Address: 0x121c1c, Func Offset: 0x1dc
	// Line 902, Address: 0x121c34, Func Offset: 0x1f4
	// Line 903, Address: 0x121c50, Func Offset: 0x210
	// Line 904, Address: 0x121c64, Func Offset: 0x224
	// Line 907, Address: 0x121c78, Func Offset: 0x238
	// Line 908, Address: 0x121c8c, Func Offset: 0x24c
	// Line 909, Address: 0x121c98, Func Offset: 0x258
	// Line 910, Address: 0x121ca4, Func Offset: 0x264
	// Line 912, Address: 0x121cb0, Func Offset: 0x270
	// Line 913, Address: 0x121cc0, Func Offset: 0x280
	// Line 914, Address: 0x121ce4, Func Offset: 0x2a4
	// Line 921, Address: 0x121ce8, Func Offset: 0x2a8
	// Line 924, Address: 0x121cf4, Func Offset: 0x2b4
	// Line 926, Address: 0x121cfc, Func Offset: 0x2bc
	// Line 927, Address: 0x121d1c, Func Offset: 0x2dc
	// Line 928, Address: 0x121d38, Func Offset: 0x2f8
	// Line 929, Address: 0x121d4c, Func Offset: 0x30c
	// Line 930, Address: 0x121d60, Func Offset: 0x320
	// Line 931, Address: 0x121d70, Func Offset: 0x330
	// Line 933, Address: 0x121d88, Func Offset: 0x348
	// Line 939, Address: 0x121d9c, Func Offset: 0x35c
	// Line 941, Address: 0x121dd8, Func Offset: 0x398
	// Line 942, Address: 0x121de0, Func Offset: 0x3a0
	// Line 944, Address: 0x121de8, Func Offset: 0x3a8
	// Line 945, Address: 0x121df0, Func Offset: 0x3b0
	// Line 947, Address: 0x121df8, Func Offset: 0x3b8
	// Line 948, Address: 0x121e00, Func Offset: 0x3c0
	// Line 950, Address: 0x121e08, Func Offset: 0x3c8
	// Line 951, Address: 0x121e10, Func Offset: 0x3d0
	// Line 953, Address: 0x121e18, Func Offset: 0x3d8
	// Line 957, Address: 0x121e3c, Func Offset: 0x3fc
	// Line 961, Address: 0x121e50, Func Offset: 0x410
	// Line 962, Address: 0x121e5c, Func Offset: 0x41c
	// Line 963, Address: 0x121e7c, Func Offset: 0x43c
	// Line 964, Address: 0x121e8c, Func Offset: 0x44c
	// Line 969, Address: 0x121ea8, Func Offset: 0x468
	// Line 973, Address: 0x121eb0, Func Offset: 0x470
	// Line 975, Address: 0x121ecc, Func Offset: 0x48c
	// Line 976, Address: 0x121ee4, Func Offset: 0x4a4
	// Line 977, Address: 0x121ef8, Func Offset: 0x4b8
	// Line 978, Address: 0x121f18, Func Offset: 0x4d8
	// Line 982, Address: 0x121f20, Func Offset: 0x4e0
	// Func End, Address: 0x121f3c, Func Offset: 0x4fc
}

// 
// Start address: 0x121f40
void shBattleAttackByHumanFinish(SubCharacter* attacker, unsigned short atk)
{
	_CL_BATTLE_QUE que;
	unsigned short ed;
	unsigned short st;
	unsigned short cur_frame;
	float s_vec[4];
	float s_pos[4];
	// Line 997, Address: 0x121f40, Func Offset: 0
	// Line 1003, Address: 0x121f6c, Func Offset: 0x2c
	// Line 1004, Address: 0x121f7c, Func Offset: 0x3c
	// Line 1005, Address: 0x121f9c, Func Offset: 0x5c
	// Line 1008, Address: 0x121fac, Func Offset: 0x6c
	// Line 1009, Address: 0x121fb8, Func Offset: 0x78
	// Line 1010, Address: 0x121fc8, Func Offset: 0x88
	// Line 1011, Address: 0x121fd0, Func Offset: 0x90
	// Line 1013, Address: 0x121fe0, Func Offset: 0xa0
	// Line 1014, Address: 0x122008, Func Offset: 0xc8
	// Line 1015, Address: 0x12201c, Func Offset: 0xdc
	// Line 1016, Address: 0x122030, Func Offset: 0xf0
	// Line 1020, Address: 0x12203c, Func Offset: 0xfc
	// Line 1023, Address: 0x122060, Func Offset: 0x120
	// Line 1024, Address: 0x122080, Func Offset: 0x140
	// Line 1025, Address: 0x122090, Func Offset: 0x150
	// Line 1026, Address: 0x1220a0, Func Offset: 0x160
	// Line 1027, Address: 0x1220a8, Func Offset: 0x168
	// Line 1028, Address: 0x1220b0, Func Offset: 0x170
	// Line 1029, Address: 0x1220b8, Func Offset: 0x178
	// Line 1031, Address: 0x1220c8, Func Offset: 0x188
	// Line 1032, Address: 0x1220d0, Func Offset: 0x190
	// Line 1033, Address: 0x1220e4, Func Offset: 0x1a4
	// Line 1040, Address: 0x1220e8, Func Offset: 0x1a8
	// Line 1041, Address: 0x122104, Func Offset: 0x1c4
	// Line 1046, Address: 0x122110, Func Offset: 0x1d0
	// Line 1049, Address: 0x122120, Func Offset: 0x1e0
	// Func End, Address: 0x12214c, Func Offset: 0x20c
}

// 
// Start address: 0x122150
void shGetEnemyAttackStartPos(SubCharacter* attacker, unsigned short atk, float* s_pos, float* s_vec)
{
	// Line 1071, Address: 0x122150, Func Offset: 0
	// Line 1073, Address: 0x122174, Func Offset: 0x24
	// Line 1076, Address: 0x1221a4, Func Offset: 0x54
	// Line 1077, Address: 0x1221bc, Func Offset: 0x6c
	// Line 1079, Address: 0x1221c4, Func Offset: 0x74
	// Line 1080, Address: 0x1221d8, Func Offset: 0x88
	// Line 1083, Address: 0x1221e0, Func Offset: 0x90
	// Line 1084, Address: 0x1221f8, Func Offset: 0xa8
	// Line 1086, Address: 0x122200, Func Offset: 0xb0
	// Line 1087, Address: 0x122214, Func Offset: 0xc4
	// Line 1089, Address: 0x12221c, Func Offset: 0xcc
	// Line 1090, Address: 0x122230, Func Offset: 0xe0
	// Line 1092, Address: 0x122238, Func Offset: 0xe8
	// Line 1093, Address: 0x12224c, Func Offset: 0xfc
	// Line 1095, Address: 0x122254, Func Offset: 0x104
	// Line 1096, Address: 0x122268, Func Offset: 0x118
	// Line 1098, Address: 0x122270, Func Offset: 0x120
	// Line 1099, Address: 0x122284, Func Offset: 0x134
	// Line 1101, Address: 0x12228c, Func Offset: 0x13c
	// Line 1102, Address: 0x1222a0, Func Offset: 0x150
	// Line 1104, Address: 0x1222a8, Func Offset: 0x158
	// Line 1105, Address: 0x1222bc, Func Offset: 0x16c
	// Line 1108, Address: 0x1222c4, Func Offset: 0x174
	// Line 1109, Address: 0x1222d8, Func Offset: 0x188
	// Line 1112, Address: 0x1222f0, Func Offset: 0x1a0
	// Func End, Address: 0x12230c, Func Offset: 0x1bc
}

// 
// Start address: 0x122310
void shBattleAttackByEnemySlash(SubCharacter* attacker, unsigned short atk)
{
	_CL_BATTLE_QUE que;
	unsigned short ed;
	unsigned short st;
	unsigned short cur_frame;
	float s_vec[4];
	float s_pos[4];
	// Line 1120, Address: 0x122310, Func Offset: 0
	// Line 1127, Address: 0x12233c, Func Offset: 0x2c
	// Line 1128, Address: 0x122348, Func Offset: 0x38
	// Line 1129, Address: 0x122368, Func Offset: 0x58
	// Line 1134, Address: 0x122378, Func Offset: 0x68
	// Line 1136, Address: 0x122390, Func Offset: 0x80
	// Line 1137, Address: 0x1223b8, Func Offset: 0xa8
	// Line 1138, Address: 0x1223cc, Func Offset: 0xbc
	// Line 1139, Address: 0x1223e0, Func Offset: 0xd0
	// Line 1146, Address: 0x1223e8, Func Offset: 0xd8
	// Line 1150, Address: 0x12240c, Func Offset: 0xfc
	// Line 1151, Address: 0x12242c, Func Offset: 0x11c
	// Line 1152, Address: 0x12243c, Func Offset: 0x12c
	// Line 1153, Address: 0x12244c, Func Offset: 0x13c
	// Line 1155, Address: 0x122454, Func Offset: 0x144
	// Line 1156, Address: 0x12245c, Func Offset: 0x14c
	// Line 1157, Address: 0x122464, Func Offset: 0x154
	// Line 1158, Address: 0x12246c, Func Offset: 0x15c
	// Line 1160, Address: 0x122470, Func Offset: 0x160
	// Line 1161, Address: 0x12247c, Func Offset: 0x16c
	// Line 1162, Address: 0x122490, Func Offset: 0x180
	// Line 1172, Address: 0x122494, Func Offset: 0x184
	// Line 1176, Address: 0x1224a0, Func Offset: 0x190
	// Line 1177, Address: 0x1224ac, Func Offset: 0x19c
	// Line 1185, Address: 0x1224e4, Func Offset: 0x1d4
	// Line 1189, Address: 0x122504, Func Offset: 0x1f4
	// Line 1194, Address: 0x12250c, Func Offset: 0x1fc
	// Line 1195, Address: 0x12251c, Func Offset: 0x20c
	// Func End, Address: 0x122548, Func Offset: 0x238
}

// 
// Start address: 0x122550
void shBattleAttackByEnemyStrike(SubCharacter* attacker, unsigned short atk)
{
	_CL_BATTLE_QUE que;
	unsigned short ed;
	unsigned short st;
	unsigned short cur_frame;
	float s_vec[4];
	float s_pos[4];
	// Line 1219, Address: 0x122550, Func Offset: 0
	// Line 1226, Address: 0x12257c, Func Offset: 0x2c
	// Line 1227, Address: 0x122588, Func Offset: 0x38
	// Line 1228, Address: 0x1225a8, Func Offset: 0x58
	// Line 1232, Address: 0x1225b8, Func Offset: 0x68
	// Line 1234, Address: 0x1225d0, Func Offset: 0x80
	// Line 1235, Address: 0x1225f8, Func Offset: 0xa8
	// Line 1236, Address: 0x12260c, Func Offset: 0xbc
	// Line 1237, Address: 0x122620, Func Offset: 0xd0
	// Line 1242, Address: 0x122628, Func Offset: 0xd8
	// Line 1245, Address: 0x122658, Func Offset: 0x108
	// Line 1246, Address: 0x122678, Func Offset: 0x128
	// Line 1247, Address: 0x122688, Func Offset: 0x138
	// Line 1248, Address: 0x122698, Func Offset: 0x148
	// Line 1249, Address: 0x1226a0, Func Offset: 0x150
	// Line 1250, Address: 0x1226a8, Func Offset: 0x158
	// Line 1251, Address: 0x1226b0, Func Offset: 0x160
	// Line 1252, Address: 0x1226b8, Func Offset: 0x168
	// Line 1254, Address: 0x1226bc, Func Offset: 0x16c
	// Line 1255, Address: 0x1226c8, Func Offset: 0x178
	// Line 1256, Address: 0x1226dc, Func Offset: 0x18c
	// Line 1265, Address: 0x1226e0, Func Offset: 0x190
	// Line 1266, Address: 0x1226fc, Func Offset: 0x1ac
	// Line 1271, Address: 0x122708, Func Offset: 0x1b8
	// Line 1272, Address: 0x122714, Func Offset: 0x1c4
	// Line 1280, Address: 0x1227ac, Func Offset: 0x25c
	// Line 1281, Address: 0x1227cc, Func Offset: 0x27c
	// Line 1284, Address: 0x1227d4, Func Offset: 0x284
	// Line 1285, Address: 0x1227f4, Func Offset: 0x2a4
	// Line 1287, Address: 0x1227fc, Func Offset: 0x2ac
	// Line 1288, Address: 0x12281c, Func Offset: 0x2cc
	// Line 1290, Address: 0x122824, Func Offset: 0x2d4
	// Line 1291, Address: 0x122844, Func Offset: 0x2f4
	// Line 1293, Address: 0x12284c, Func Offset: 0x2fc
	// Line 1294, Address: 0x122868, Func Offset: 0x318
	// Line 1298, Address: 0x122870, Func Offset: 0x320
	// Line 1300, Address: 0x12289c, Func Offset: 0x34c
	// Line 1302, Address: 0x1228a4, Func Offset: 0x354
	// Line 1304, Address: 0x1228d4, Func Offset: 0x384
	// Line 1306, Address: 0x1228dc, Func Offset: 0x38c
	// Line 1311, Address: 0x12290c, Func Offset: 0x3bc
	// Line 1316, Address: 0x122914, Func Offset: 0x3c4
	// Line 1422, Address: 0x122924, Func Offset: 0x3d4
	// Func End, Address: 0x122950, Func Offset: 0x400
}

// 
// Start address: 0x122950
void shBattleAttackByEnemyFog(SubCharacter* attacker, unsigned short atk)
{
	_CL_BATTLE_QUE que;
	float max_range;
	unsigned short ed;
	unsigned short st;
	unsigned short cur_frame;
	float s_vec[4];
	float s_pos[4];
	int i;
	// Line 1434, Address: 0x122950, Func Offset: 0
	// Line 1444, Address: 0x12297c, Func Offset: 0x2c
	// Line 1445, Address: 0x122988, Func Offset: 0x38
	// Line 1446, Address: 0x1229a8, Func Offset: 0x58
	// Line 1451, Address: 0x1229b8, Func Offset: 0x68
	// Line 1453, Address: 0x1229e0, Func Offset: 0x90
	// Line 1455, Address: 0x122a54, Func Offset: 0x104
	// Line 1460, Address: 0x122a60, Func Offset: 0x110
	// Line 1462, Address: 0x122a78, Func Offset: 0x128
	// Line 1463, Address: 0x122a80, Func Offset: 0x130
	// Line 1464, Address: 0x122a88, Func Offset: 0x138
	// Line 1465, Address: 0x122a90, Func Offset: 0x140
	// Line 1466, Address: 0x122aa0, Func Offset: 0x150
	// Line 1467, Address: 0x122ab0, Func Offset: 0x160
	// Line 1468, Address: 0x122ac0, Func Offset: 0x170
	// Line 1470, Address: 0x122acc, Func Offset: 0x17c
	// Line 1471, Address: 0x122adc, Func Offset: 0x18c
	// Line 1472, Address: 0x122af0, Func Offset: 0x1a0
	// Line 1480, Address: 0x122af4, Func Offset: 0x1a4
	// Line 1481, Address: 0x122b00, Func Offset: 0x1b0
	// Line 1485, Address: 0x122b14, Func Offset: 0x1c4
	// Line 1486, Address: 0x122b20, Func Offset: 0x1d0
	// Line 1487, Address: 0x122b40, Func Offset: 0x1f0
	// Line 1491, Address: 0x122b48, Func Offset: 0x1f8
	// Func End, Address: 0x122b74, Func Offset: 0x224
}

// 
// Start address: 0x122b80
void shBattleAttackByEnemyBite()
{
	// Line 1499, Address: 0x122b80, Func Offset: 0
	// Func End, Address: 0x122b88, Func Offset: 0x8
}

// 
// Start address: 0x122b90
void shBattleAttackByEnemyHug(SubCharacter* attacker, unsigned short atk)
{
	_CL_BATTLE_QUE que;
	float s_vec[4];
	float s_pos[4];
	// Line 1506, Address: 0x122b90, Func Offset: 0
	// Line 1512, Address: 0x122bac, Func Offset: 0x1c
	// Line 1514, Address: 0x122bbc, Func Offset: 0x2c
	// Line 1515, Address: 0x122bf4, Func Offset: 0x64
	// Line 1516, Address: 0x122c08, Func Offset: 0x78
	// Line 1517, Address: 0x122c1c, Func Offset: 0x8c
	// Line 1523, Address: 0x122c24, Func Offset: 0x94
	// Line 1524, Address: 0x122c44, Func Offset: 0xb4
	// Line 1525, Address: 0x122c54, Func Offset: 0xc4
	// Line 1526, Address: 0x122c64, Func Offset: 0xd4
	// Line 1527, Address: 0x122c6c, Func Offset: 0xdc
	// Line 1528, Address: 0x122c74, Func Offset: 0xe4
	// Line 1529, Address: 0x122c7c, Func Offset: 0xec
	// Line 1530, Address: 0x122c84, Func Offset: 0xf4
	// Line 1532, Address: 0x122c88, Func Offset: 0xf8
	// Line 1533, Address: 0x122c98, Func Offset: 0x108
	// Line 1534, Address: 0x122cac, Func Offset: 0x11c
	// Line 1543, Address: 0x122cb0, Func Offset: 0x120
	// Line 1544, Address: 0x122ccc, Func Offset: 0x13c
	// Line 1548, Address: 0x122cd8, Func Offset: 0x148
	// Line 1549, Address: 0x122ce8, Func Offset: 0x158
	// Func End, Address: 0x122d04, Func Offset: 0x174
}

// 
// Start address: 0x122d10
void shBattleAttackByEnemyNeedle(SubCharacter* attacker, unsigned short atk)
{
	_CL_BATTLE_QUE que;
	unsigned short ed;
	unsigned short st;
	unsigned short cur_frame;
	float s_vec[4];
	float s_pos[4];
	int i;
	// Line 1559, Address: 0x122d10, Func Offset: 0
	// Line 1566, Address: 0x122d30, Func Offset: 0x20
	// Line 1567, Address: 0x122d38, Func Offset: 0x28
	// Line 1571, Address: 0x122d48, Func Offset: 0x38
	// Line 1572, Address: 0x122d54, Func Offset: 0x44
	// Line 1574, Address: 0x122d6c, Func Offset: 0x5c
	// Line 1575, Address: 0x122d90, Func Offset: 0x80
	// Line 1576, Address: 0x122da4, Func Offset: 0x94
	// Line 1577, Address: 0x122db8, Func Offset: 0xa8
	// Line 1579, Address: 0x122dc0, Func Offset: 0xb0
	// Line 1580, Address: 0x122ddc, Func Offset: 0xcc
	// Line 1581, Address: 0x122de8, Func Offset: 0xd8
	// Line 1582, Address: 0x122df4, Func Offset: 0xe4
	// Line 1584, Address: 0x122df8, Func Offset: 0xe8
	// Line 1585, Address: 0x122e08, Func Offset: 0xf8
	// Line 1586, Address: 0x122e1c, Func Offset: 0x10c
	// Line 1596, Address: 0x122e20, Func Offset: 0x110
	// Line 1599, Address: 0x122e2c, Func Offset: 0x11c
	// Line 1601, Address: 0x122e38, Func Offset: 0x128
	// Line 1603, Address: 0x122e68, Func Offset: 0x158
	// Line 1606, Address: 0x122e70, Func Offset: 0x160
	// Line 1607, Address: 0x122e84, Func Offset: 0x174
	// Func End, Address: 0x122ea4, Func Offset: 0x194
}

// 
// Start address: 0x122eb0
void shBattleAttackByEnemyShot(SubCharacter* attacker, unsigned short atk)
{
	_CL_BATTLE_QUE que;
	unsigned short ed;
	unsigned short st;
	unsigned short cur_frame;
	float s_vec[4];
	float s_pos[4];
	// Line 1616, Address: 0x122eb0, Func Offset: 0
	// Line 1624, Address: 0x122ed4, Func Offset: 0x24
	// Line 1625, Address: 0x122ee0, Func Offset: 0x30
	// Line 1626, Address: 0x122f00, Func Offset: 0x50
	// Line 1629, Address: 0x122f10, Func Offset: 0x60
	// Line 1632, Address: 0x122f38, Func Offset: 0x88
	// Line 1635, Address: 0x122f50, Func Offset: 0xa0
	// Line 1636, Address: 0x122f74, Func Offset: 0xc4
	// Line 1637, Address: 0x122f88, Func Offset: 0xd8
	// Line 1638, Address: 0x122f9c, Func Offset: 0xec
	// Line 1639, Address: 0x122fa4, Func Offset: 0xf4
	// Line 1640, Address: 0x122fc0, Func Offset: 0x110
	// Line 1641, Address: 0x122fcc, Func Offset: 0x11c
	// Line 1642, Address: 0x122fd8, Func Offset: 0x128
	// Line 1643, Address: 0x122fdc, Func Offset: 0x12c
	// Line 1644, Address: 0x122fec, Func Offset: 0x13c
	// Line 1645, Address: 0x123000, Func Offset: 0x150
	// Line 1654, Address: 0x123004, Func Offset: 0x154
	// Line 1658, Address: 0x123010, Func Offset: 0x160
	// Line 1660, Address: 0x123018, Func Offset: 0x168
	// Line 1662, Address: 0x123028, Func Offset: 0x178
	// Line 1666, Address: 0x123034, Func Offset: 0x184
	// Line 1673, Address: 0x123050, Func Offset: 0x1a0
	// Line 1674, Address: 0x123060, Func Offset: 0x1b0
	// Line 1676, Address: 0x123064, Func Offset: 0x1b4
	// Func End, Address: 0x123088, Func Offset: 0x1d8
}

// 
// Start address: 0x123090
void shBattleAddAttackQueue(SubCharacter* scp, unsigned char wep_no, unsigned short atk_no)
{
	int no;
	// Line 1686, Address: 0x123090, Func Offset: 0
	// Line 1689, Address: 0x123098, Func Offset: 0x8
	// Line 1690, Address: 0x1230a8, Func Offset: 0x18
	// Line 1693, Address: 0x1230cc, Func Offset: 0x3c
	// Line 1694, Address: 0x1230d4, Func Offset: 0x44
	// Line 1695, Address: 0x1230e8, Func Offset: 0x58
	// Line 1696, Address: 0x1230f8, Func Offset: 0x68
	// Line 1697, Address: 0x123108, Func Offset: 0x78
	// Line 1698, Address: 0x12311c, Func Offset: 0x8c
	// Func End, Address: 0x12312c, Func Offset: 0x9c
}

// 
// Start address: 0x123130
void shBattleAttackHitCheckInit(SubCharacter* scp)
{
	// Line 1721, Address: 0x123130, Func Offset: 0
	// Line 1722, Address: 0x123134, Func Offset: 0x4
	// Line 1723, Address: 0x123138, Func Offset: 0x8
	// Line 1724, Address: 0x12313c, Func Offset: 0xc
	// Func End, Address: 0x123144, Func Offset: 0x14
}

// 
// Start address: 0x123150
void shBattleAttackHitCheckToEnemy(SubCharacter* scp, unsigned char wep_no, unsigned short atk_no)
{
	// Line 1726, Address: 0x123150, Func Offset: 0
	// Line 1727, Address: 0x123158, Func Offset: 0x8
	// Line 1728, Address: 0x123160, Func Offset: 0x10
	// Func End, Address: 0x123170, Func Offset: 0x20
}

// 
// Start address: 0x123170
void shBattleAttackHitCheckToHuman(SubCharacter* scp, unsigned short atk_no)
{
	// Line 1743, Address: 0x123170, Func Offset: 0
	// Line 1744, Address: 0x12317c, Func Offset: 0xc
	// Line 1745, Address: 0x123188, Func Offset: 0x18
	// Func End, Address: 0x123198, Func Offset: 0x28
}

// 
// Start address: 0x1231a0
int shBattleRequestNextAttackIsOk(unsigned short atk, unsigned short frame)
{
	// Line 1758, Address: 0x1231a0, Func Offset: 0
	// Line 1762, Address: 0x1231a8, Func Offset: 0x8
	// Line 1768, Address: 0x1231d4, Func Offset: 0x34
	// Line 1772, Address: 0x1231e0, Func Offset: 0x40
	// Line 1774, Address: 0x123234, Func Offset: 0x94
	// Line 1776, Address: 0x123240, Func Offset: 0xa0
	// Line 1783, Address: 0x12324c, Func Offset: 0xac
	// Line 1784, Address: 0x12328c, Func Offset: 0xec
	// Line 1786, Address: 0x123298, Func Offset: 0xf8
	// Line 1794, Address: 0x1232a4, Func Offset: 0x104
	// Line 1796, Address: 0x12330c, Func Offset: 0x16c
	// Line 1798, Address: 0x123318, Func Offset: 0x178
	// Line 1810, Address: 0x123324, Func Offset: 0x184
	// Line 1814, Address: 0x123330, Func Offset: 0x190
	// Line 1816, Address: 0x12337c, Func Offset: 0x1dc
	// Line 1818, Address: 0x123388, Func Offset: 0x1e8
	// Line 1822, Address: 0x12338c, Func Offset: 0x1ec
	// Func End, Address: 0x12339c, Func Offset: 0x1fc
}

// 
// Start address: 0x1233a0
void shBattleGetResult(SubCharacter* scp)
{
	float shock_revise;
	float damage_revise;
	_CL_BATTLE_RESULT* result;
	// Line 1839, Address: 0x1233a0, Func Offset: 0
	// Line 1842, Address: 0x1233b4, Func Offset: 0x14
	// Line 1844, Address: 0x1233b8, Func Offset: 0x18
	// Line 1845, Address: 0x1233c0, Func Offset: 0x20
	// Line 1849, Address: 0x1233fc, Func Offset: 0x5c
	// Line 1850, Address: 0x12340c, Func Offset: 0x6c
	// Line 1854, Address: 0x123410, Func Offset: 0x70
	// Line 1856, Address: 0x123418, Func Offset: 0x78
	// Line 1857, Address: 0x12343c, Func Offset: 0x9c
	// Line 1862, Address: 0x12347c, Func Offset: 0xdc
	// Line 1867, Address: 0x123488, Func Offset: 0xe8
	// Line 1872, Address: 0x123490, Func Offset: 0xf0
	// Line 1874, Address: 0x1234a0, Func Offset: 0x100
	// Line 1875, Address: 0x1234c4, Func Offset: 0x124
	// Line 1880, Address: 0x123504, Func Offset: 0x164
	// Line 1885, Address: 0x123510, Func Offset: 0x170
	// Line 1889, Address: 0x123518, Func Offset: 0x178
	// Line 1890, Address: 0x123528, Func Offset: 0x188
	// Line 1891, Address: 0x123538, Func Offset: 0x198
	// Line 1892, Address: 0x123560, Func Offset: 0x1c0
	// Line 1893, Address: 0x123568, Func Offset: 0x1c8
	// Line 1896, Address: 0x123570, Func Offset: 0x1d0
	// Line 1903, Address: 0x123578, Func Offset: 0x1d8
	// Line 1905, Address: 0x123588, Func Offset: 0x1e8
	// Line 1909, Address: 0x1235b4, Func Offset: 0x214
	// Line 1913, Address: 0x1235b8, Func Offset: 0x218
	// Line 1920, Address: 0x1235d0, Func Offset: 0x230
	// Line 1921, Address: 0x1235ec, Func Offset: 0x24c
	// Line 1923, Address: 0x1235f8, Func Offset: 0x258
	// Line 1924, Address: 0x12361c, Func Offset: 0x27c
	// Line 1925, Address: 0x123620, Func Offset: 0x280
	// Line 1926, Address: 0x123630, Func Offset: 0x290
	// Line 1927, Address: 0x123640, Func Offset: 0x2a0
	// Line 1928, Address: 0x123648, Func Offset: 0x2a8
	// Line 1930, Address: 0x123650, Func Offset: 0x2b0
	// Line 1939, Address: 0x123658, Func Offset: 0x2b8
	// Line 1943, Address: 0x123688, Func Offset: 0x2e8
	// Line 1944, Address: 0x1236a4, Func Offset: 0x304
	// Line 1945, Address: 0x1236bc, Func Offset: 0x31c
	// Line 1947, Address: 0x1236c0, Func Offset: 0x320
	// Line 1952, Address: 0x1236d0, Func Offset: 0x330
	// Line 1954, Address: 0x1236d8, Func Offset: 0x338
	// Line 1957, Address: 0x1236dc, Func Offset: 0x33c
	// Line 1958, Address: 0x123700, Func Offset: 0x360
	// Func End, Address: 0x123718, Func Offset: 0x378
}

// 
// Start address: 0x123720
void shBattleInitAttackQueue()
{
	// Line 1977, Address: 0x123720, Func Offset: 0
	// Line 1978, Address: 0x123728, Func Offset: 0x8
	// Line 1979, Address: 0x12373c, Func Offset: 0x1c
	// Line 1980, Address: 0x123748, Func Offset: 0x28
	// Line 1981, Address: 0x123750, Func Offset: 0x30
	// Func End, Address: 0x123760, Func Offset: 0x40
}

// 
// Start address: 0x123760
void shBattleExecAttackQueue()
{
	int i;
	// Line 1991, Address: 0x123760, Func Offset: 0
	// Line 1992, Address: 0x12376c, Func Offset: 0xc
	// Line 1995, Address: 0x123770, Func Offset: 0x10
	// Line 1996, Address: 0x123784, Func Offset: 0x24
	// Line 1998, Address: 0x123794, Func Offset: 0x34
	// Line 2000, Address: 0x1237a0, Func Offset: 0x40
	// Line 2002, Address: 0x1237a8, Func Offset: 0x48
	// Line 2005, Address: 0x1237c4, Func Offset: 0x64
	// Line 2006, Address: 0x12380c, Func Offset: 0xac
	// Line 2007, Address: 0x123810, Func Offset: 0xb0
	// Line 2011, Address: 0x123818, Func Offset: 0xb8
	// Line 2013, Address: 0x123820, Func Offset: 0xc0
	// Line 2017, Address: 0x123828, Func Offset: 0xc8
	// Line 2019, Address: 0x123830, Func Offset: 0xd0
	// Line 2023, Address: 0x123838, Func Offset: 0xd8
	// Line 2025, Address: 0x123840, Func Offset: 0xe0
	// Line 2029, Address: 0x123848, Func Offset: 0xe8
	// Line 2031, Address: 0x123850, Func Offset: 0xf0
	// Line 2035, Address: 0x123858, Func Offset: 0xf8
	// Line 2038, Address: 0x123860, Func Offset: 0x100
	// Line 2041, Address: 0x1238bc, Func Offset: 0x15c
	// Line 2045, Address: 0x1238c4, Func Offset: 0x164
	// Line 2049, Address: 0x1238cc, Func Offset: 0x16c
	// Line 2053, Address: 0x1238d4, Func Offset: 0x174
	// Line 2056, Address: 0x1238dc, Func Offset: 0x17c
	// Line 2071, Address: 0x1238e4, Func Offset: 0x184
	// Line 2073, Address: 0x1238ec, Func Offset: 0x18c
	// Line 2074, Address: 0x1238f8, Func Offset: 0x198
	// Line 2078, Address: 0x123900, Func Offset: 0x1a0
	// Line 2079, Address: 0x123908, Func Offset: 0x1a8
	// Line 2081, Address: 0x123940, Func Offset: 0x1e0
	// Line 2085, Address: 0x123964, Func Offset: 0x204
	// Line 2089, Address: 0x12396c, Func Offset: 0x20c
	// Line 2091, Address: 0x123974, Func Offset: 0x214
	// Line 2095, Address: 0x12397c, Func Offset: 0x21c
	// Line 2100, Address: 0x123984, Func Offset: 0x224
	// Line 2104, Address: 0x12398c, Func Offset: 0x22c
	// Line 2106, Address: 0x123994, Func Offset: 0x234
	// Line 2113, Address: 0x12399c, Func Offset: 0x23c
	// Line 2114, Address: 0x1239a0, Func Offset: 0x240
	// Line 2115, Address: 0x1239a4, Func Offset: 0x244
	// Line 2116, Address: 0x1239c4, Func Offset: 0x264
	// Func End, Address: 0x1239d8, Func Offset: 0x278
}

// 
// Start address: 0x1239e0
float shBattleGetJamesHP()
{
	// Line 2126, Address: 0x1239e0, Func Offset: 0
	// Line 2127, Address: 0x1239ec, Func Offset: 0xc
	// Func End, Address: 0x1239f4, Func Offset: 0x14
}

// 
// Start address: 0x123a00
float shBattleGetJamesHP_Rate()
{
	// Line 2135, Address: 0x123a00, Func Offset: 0
	// Line 2136, Address: 0x123a0c, Func Offset: 0xc
	// Func End, Address: 0x123a14, Func Offset: 0x14
}

// 
// Start address: 0x123a20
void shBattleSetJamesDamage(unsigned short id, float damage, float* vec)
{
	// Line 2148, Address: 0x123a20, Func Offset: 0
	// Line 2149, Address: 0x123a2c, Func Offset: 0xc
	// Line 2150, Address: 0x123a38, Func Offset: 0x18
	// Line 2151, Address: 0x123a48, Func Offset: 0x28
	// Func End, Address: 0x123a50, Func Offset: 0x30
}

// 
// Start address: 0x123a50
float shBattleEventWallHitCheck()
{
	// Line 2162, Address: 0x123a50, Func Offset: 0
	// Line 2163, Address: 0x123a58, Func Offset: 0x8
	// Func End, Address: 0x123a60, Func Offset: 0x10
}

// 
// Start address: 0x123a60
int shBattleCheckAttackByEnemy()
{
	// Line 2175, Address: 0x123a60, Func Offset: 0
	// Line 2176, Address: 0x123a68, Func Offset: 0x8
	// Func End, Address: 0x123a70, Func Offset: 0x10
}

