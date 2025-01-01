typedef struct shAttackQueue;
typedef struct SubCharacter;
typedef struct SubObject;
typedef struct _CL_HITPOLY_PLANE;
typedef struct _anon0;
typedef struct _CL_BATTLE_RESULT;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct PAD_3D;
typedef struct shSkelton;
typedef struct _anon1;
typedef struct PAD_2D;
typedef struct shBattleFight;
typedef struct PAD_INFO;
typedef struct shBattleShot;
typedef struct _CL_BATTLE_QUE;
typedef struct shBattleArea;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct shBattleInfo;
typedef struct shAttackInfo;
typedef struct shPlayerWork;
typedef union _anon2;
typedef struct _CL_VHIT_WALL;
typedef union _anon3;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _CL_VHIT_CHARA;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct shAttackQueueOne;
typedef struct _CL_VHIT_RESULT;
typedef union _anon4;

typedef void(*type_0)(SubCharacter*);
typedef void(*type_12)(SubCharacter*);
typedef void(*type_16)(SubCharacter*);
typedef void(*type_24)(SubCharacter*);

typedef shAttackQueueOne type_1[20];
typedef unsigned char type_2[13];
typedef float type_3[4][4];
typedef unsigned char type_4[34];
typedef float type_5[4][2];
typedef unsigned char type_6[4];
typedef unsigned char type_7[4];
typedef PAD_INFO type_8[10];
typedef float type_9[4];
typedef float type_10[4][4];
typedef unsigned char type_11[10];
typedef unsigned char type_13[2];
typedef float type_14[4];
typedef unsigned char type_15[2];
typedef shAttackInfo type_17[46];
typedef unsigned char type_18[4];
typedef unsigned char type_19[10];
typedef unsigned char type_20[2];
typedef float type_21[4];
typedef float type_22[4];
typedef float type_23[4][4];

struct shAttackQueue
{
	int rest;
	shAttackQueueOne queue[20];
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

struct _anon0
{
	float x;
	float y;
	float z;
	float w;
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
	_anon2 obj;
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

struct PAD_3D
{
	char round_way;
	unsigned char reserved1;
	unsigned char lslide;
	unsigned char rslide;
	unsigned char lturn180;
	unsigned char rturn180;
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

struct _anon1
{
	float d[4][4];
};

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
};

struct shBattleFight
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

struct shBattleShot
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

struct shBattleArea
{
	float center;
	float radius;
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

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon3 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
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

union _anon2
{
	SubCharacter* en;
	_CL_HITPOLY_PLANE* pl;
	_CL_HITPOLY_COLUMN* cl;
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

union _anon3
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

struct shAttackQueueOne
{
	SubCharacter* scp;
	unsigned char wep_no;
	unsigned short atk_no;
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

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
shPlayerWork sh2jms;
shAttackQueue sh2_attack_queue;

void shBattleDamageRevise(float* damage, float* shock, SubCharacter* scp, _CL_BATTLE_RESULT* result);
void shBattleSetEffectDamage(SubCharacter* scp, float* pos, float* vec, unsigned short atk);
void shBattleSetSoundDamage(SubCharacter* scp, _CL_BATTLE_RESULT* result);
void shBattleAddEffectAttack(float* pos, float* vec);
void shBattleAttackByHumanGunshotTypeA(SubCharacter* attacker, unsigned short atk);
void shBattleAttackByHumanGunshotTypeB(SubCharacter* attacker, unsigned short atk);
void shBattleAttackByHumanFightType(SubCharacter* attacker, unsigned short atk);
void shBattleAttackByHumanFog();
void shBattleAttackByHumanFinishTypeA(SubCharacter* attacker, unsigned short atk);
void shBattleAttackByHumanFinishTypeB(SubCharacter* attacker, unsigned short atk);
void shGetEnemyAttackStartPos(SubCharacter* attacker, unsigned short atk, float* s_pos, float* s_vec);
void shBattleAttackByEnemySlash(SubCharacter* attacker, unsigned short atk);
void shBattleAttackByEnemyStrike(SubCharacter* attacker, unsigned short atk);
void shBattleAttackByEnemyFog(SubCharacter* attacker, unsigned short atk);
void shBattleAttackByEnemyBite();
void shBattleAttackByEnemyHug();
void shBattleAttackByEnemyShot();
void shBattleAddAttackQueue(SubCharacter* scp, unsigned char wep_no, unsigned short atk_no);
void shBattleAttackHitCheckInit(SubCharacter* scp);
void shBattleAttackHitCheckToEnemy(SubCharacter* scp, unsigned char wep_no, unsigned short atk_no);
void shBattleAttackHitCheckToHuman(SubCharacter* scp, unsigned short atk_no);
int shBattleRequestNextAttackIsOk(unsigned short atk, unsigned short frame);
void shBattleGetResult(SubCharacter* scp);
void shBattleInitAttackQueue();
void shBattleExecAttackQueue();

// 
// Start address: 0x129360
void shBattleDamageRevise(float* damage, float* shock, SubCharacter* scp, _CL_BATTLE_RESULT* result)
{
	// Line 163, Address: 0x129360, Func Offset: 0
	// Line 164, Address: 0x129374, Func Offset: 0x14
	// Line 165, Address: 0x129388, Func Offset: 0x28
	// Line 166, Address: 0x129394, Func Offset: 0x34
	// Line 167, Address: 0x1293c8, Func Offset: 0x68
	// Line 169, Address: 0x1293d0, Func Offset: 0x70
	// Line 171, Address: 0x1293f4, Func Offset: 0x94
	// Line 172, Address: 0x129404, Func Offset: 0xa4
	// Line 175, Address: 0x12940c, Func Offset: 0xac
	// Line 176, Address: 0x129440, Func Offset: 0xe0
	// Line 180, Address: 0x129474, Func Offset: 0x114
	// Func End, Address: 0x129480, Func Offset: 0x120
}

// 
// Start address: 0x129480
void shBattleSetEffectDamage(SubCharacter* scp, float* pos, float* vec, unsigned short atk)
{
	int atk_type;
	float vec_tmp[4];
	// Line 193, Address: 0x129480, Func Offset: 0
	// Line 198, Address: 0x129498, Func Offset: 0x18
	// Line 199, Address: 0x1294b8, Func Offset: 0x38
	// Line 201, Address: 0x1294c4, Func Offset: 0x44
	// Line 203, Address: 0x1294c8, Func Offset: 0x48
	// Line 211, Address: 0x1294e4, Func Offset: 0x64
	// Line 225, Address: 0x1294f0, Func Offset: 0x70
	// Line 233, Address: 0x129508, Func Offset: 0x88
	// Line 234, Address: 0x129518, Func Offset: 0x98
	// Line 240, Address: 0x12952c, Func Offset: 0xac
	// Func End, Address: 0x129544, Func Offset: 0xc4
}

// 
// Start address: 0x129550
void shBattleSetSoundDamage(SubCharacter* scp, _CL_BATTLE_RESULT* result)
{
	float vol;
	int se;
	// Line 249, Address: 0x129550, Func Offset: 0
	// Line 255, Address: 0x129564, Func Offset: 0x14
	// Line 266, Address: 0x1295a0, Func Offset: 0x50
	// Line 267, Address: 0x1295a4, Func Offset: 0x54
	// Line 268, Address: 0x1295b8, Func Offset: 0x68
	// Line 270, Address: 0x1295c0, Func Offset: 0x70
	// Line 275, Address: 0x1295c4, Func Offset: 0x74
	// Line 276, Address: 0x1295d0, Func Offset: 0x80
	// Line 278, Address: 0x129600, Func Offset: 0xb0
	// Line 279, Address: 0x129628, Func Offset: 0xd8
	// Line 280, Address: 0x12963c, Func Offset: 0xec
	// Line 282, Address: 0x129644, Func Offset: 0xf4
	// Line 283, Address: 0x12966c, Func Offset: 0x11c
	// Line 284, Address: 0x129680, Func Offset: 0x130
	// Line 286, Address: 0x129688, Func Offset: 0x138
	// Line 307, Address: 0x12968c, Func Offset: 0x13c
	// Line 308, Address: 0x129694, Func Offset: 0x144
	// Line 310, Address: 0x1296b0, Func Offset: 0x160
	// Func End, Address: 0x1296c4, Func Offset: 0x174
}

// 
// Start address: 0x1296d0
void shBattleAddEffectAttack(float* pos, float* vec)
{
	// Line 321, Address: 0x1296d0, Func Offset: 0
	// Line 329, Address: 0x1296e0, Func Offset: 0x10
	// Line 332, Address: 0x1296f0, Func Offset: 0x20
	// Line 335, Address: 0x129704, Func Offset: 0x34
	// Line 337, Address: 0x129710, Func Offset: 0x40
	// Line 339, Address: 0x129718, Func Offset: 0x48
	// Func End, Address: 0x129728, Func Offset: 0x58
}

// 
// Start address: 0x129730
void shBattleAttackByHumanGunshotTypeA(SubCharacter* attacker, unsigned short atk)
{
	int wep;
	_CL_BATTLE_QUE que;
	unsigned short ed;
	unsigned short st;
	unsigned short cur_frame;
	float gunvec[4];
	float gunpos[4];
	// Line 364, Address: 0x129730, Func Offset: 0
	// Line 373, Address: 0x129750, Func Offset: 0x20
	// Line 374, Address: 0x129778, Func Offset: 0x48
	// Line 377, Address: 0x129780, Func Offset: 0x50
	// Line 378, Address: 0x129798, Func Offset: 0x68
	// Line 379, Address: 0x1297c4, Func Offset: 0x94
	// Line 382, Address: 0x1297f0, Func Offset: 0xc0
	// Line 385, Address: 0x129828, Func Offset: 0xf8
	// Line 388, Address: 0x129838, Func Offset: 0x108
	// Line 389, Address: 0x129870, Func Offset: 0x140
	// Line 390, Address: 0x1298a8, Func Offset: 0x178
	// Line 391, Address: 0x1298e0, Func Offset: 0x1b0
	// Line 392, Address: 0x1298f0, Func Offset: 0x1c0
	// Line 393, Address: 0x129928, Func Offset: 0x1f8
	// Line 394, Address: 0x129960, Func Offset: 0x230
	// Line 395, Address: 0x129998, Func Offset: 0x268
	// Line 396, Address: 0x1299a8, Func Offset: 0x278
	// Line 397, Address: 0x1299c0, Func Offset: 0x290
	// Line 398, Address: 0x1299e8, Func Offset: 0x2b8
	// Line 404, Address: 0x1299f0, Func Offset: 0x2c0
	// Line 407, Address: 0x1299fc, Func Offset: 0x2cc
	// Line 411, Address: 0x129a08, Func Offset: 0x2d8
	// Line 415, Address: 0x129a1c, Func Offset: 0x2ec
	// Line 418, Address: 0x129a38, Func Offset: 0x308
	// Line 419, Address: 0x129a4c, Func Offset: 0x31c
	// Line 425, Address: 0x129a5c, Func Offset: 0x32c
	// Line 428, Address: 0x129a68, Func Offset: 0x338
	// Line 429, Address: 0x129a7c, Func Offset: 0x34c
	// Line 432, Address: 0x129a84, Func Offset: 0x354
	// Func End, Address: 0x129aa4, Func Offset: 0x374
}

// 
// Start address: 0x129ab0
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
	int se;
	// Line 441, Address: 0x129ab0, Func Offset: 0
	// Line 446, Address: 0x129ad8, Func Offset: 0x28
	// Line 447, Address: 0x129aec, Func Offset: 0x3c
	// Line 459, Address: 0x129b00, Func Offset: 0x50
	// Line 463, Address: 0x129b10, Func Offset: 0x60
	// Line 464, Address: 0x129b24, Func Offset: 0x74
	// Line 465, Address: 0x129b4c, Func Offset: 0x9c
	// Line 468, Address: 0x129b74, Func Offset: 0xc4
	// Line 473, Address: 0x129ba8, Func Offset: 0xf8
	// Line 474, Address: 0x129bb8, Func Offset: 0x108
	// Line 475, Address: 0x129bcc, Func Offset: 0x11c
	// Line 476, Address: 0x129bfc, Func Offset: 0x14c
	// Line 477, Address: 0x129c24, Func Offset: 0x174
	// Line 479, Address: 0x129c60, Func Offset: 0x1b0
	// Line 482, Address: 0x129c6c, Func Offset: 0x1bc
	// Line 483, Address: 0x129c88, Func Offset: 0x1d8
	// Line 486, Address: 0x129cc4, Func Offset: 0x214
	// Line 487, Address: 0x129cd4, Func Offset: 0x224
	// Line 488, Address: 0x129cf8, Func Offset: 0x248
	// Line 489, Address: 0x129d1c, Func Offset: 0x26c
	// Line 492, Address: 0x129d30, Func Offset: 0x280
	// Line 493, Address: 0x129d64, Func Offset: 0x2b4
	// Line 494, Address: 0x129d98, Func Offset: 0x2e8
	// Line 495, Address: 0x129dcc, Func Offset: 0x31c
	// Line 496, Address: 0x129ddc, Func Offset: 0x32c
	// Line 497, Address: 0x129e10, Func Offset: 0x360
	// Line 498, Address: 0x129e44, Func Offset: 0x394
	// Line 499, Address: 0x129e78, Func Offset: 0x3c8
	// Line 500, Address: 0x129e88, Func Offset: 0x3d8
	// Line 501, Address: 0x129e9c, Func Offset: 0x3ec
	// Line 502, Address: 0x129ec0, Func Offset: 0x410
	// Line 509, Address: 0x129ec4, Func Offset: 0x414
	// Line 511, Address: 0x129ed0, Func Offset: 0x420
	// Line 513, Address: 0x129ee4, Func Offset: 0x434
	// Line 516, Address: 0x129eec, Func Offset: 0x43c
	// Line 520, Address: 0x129f00, Func Offset: 0x450
	// Line 522, Address: 0x129f10, Func Offset: 0x460
	// Line 526, Address: 0x129f24, Func Offset: 0x474
	// Line 527, Address: 0x129f34, Func Offset: 0x484
	// Line 533, Address: 0x129f44, Func Offset: 0x494
	// Line 534, Address: 0x129f4c, Func Offset: 0x49c
	// Line 536, Address: 0x129f54, Func Offset: 0x4a4
	// Func End, Address: 0x129f7c, Func Offset: 0x4cc
}

// 
// Start address: 0x129f80
void shBattleAttackByHumanFightType(SubCharacter* attacker, unsigned short atk)
{
	_CL_BATTLE_QUE que;
	unsigned short ed;
	unsigned short st;
	unsigned short cur_frame;
	float s_vec[4];
	float s_pos[4];
	int jouken;
	// Line 571, Address: 0x129f80, Func Offset: 0
	// Line 578, Address: 0x129fa4, Func Offset: 0x24
	// Line 579, Address: 0x129fbc, Func Offset: 0x3c
	// Line 580, Address: 0x129fe4, Func Offset: 0x64
	// Line 583, Address: 0x12a00c, Func Offset: 0x8c
	// Line 584, Address: 0x12a01c, Func Offset: 0x9c
	// Line 585, Address: 0x12a050, Func Offset: 0xd0
	// Line 586, Address: 0x12a084, Func Offset: 0x104
	// Line 587, Address: 0x12a0b8, Func Offset: 0x138
	// Line 590, Address: 0x12a0c8, Func Offset: 0x148
	// Line 597, Address: 0x12a0f8, Func Offset: 0x178
	// Line 598, Address: 0x12a12c, Func Offset: 0x1ac
	// Line 600, Address: 0x12a138, Func Offset: 0x1b8
	// Line 601, Address: 0x12a13c, Func Offset: 0x1bc
	// Line 606, Address: 0x12a144, Func Offset: 0x1c4
	// Line 607, Address: 0x12a16c, Func Offset: 0x1ec
	// Line 609, Address: 0x12a178, Func Offset: 0x1f8
	// Line 610, Address: 0x12a17c, Func Offset: 0x1fc
	// Line 612, Address: 0x12a184, Func Offset: 0x204
	// Line 616, Address: 0x12a18c, Func Offset: 0x20c
	// Line 618, Address: 0x12a194, Func Offset: 0x214
	// Line 619, Address: 0x12a1cc, Func Offset: 0x24c
	// Line 620, Address: 0x12a204, Func Offset: 0x284
	// Line 621, Address: 0x12a23c, Func Offset: 0x2bc
	// Line 622, Address: 0x12a250, Func Offset: 0x2d0
	// Line 623, Address: 0x12a270, Func Offset: 0x2f0
	// Line 624, Address: 0x12a290, Func Offset: 0x310
	// Line 625, Address: 0x12a2b0, Func Offset: 0x330
	// Line 626, Address: 0x12a2d8, Func Offset: 0x358
	// Line 627, Address: 0x12a30c, Func Offset: 0x38c
	// Line 628, Address: 0x12a340, Func Offset: 0x3c0
	// Line 629, Address: 0x12a374, Func Offset: 0x3f4
	// Line 631, Address: 0x12a384, Func Offset: 0x404
	// Line 632, Address: 0x12a398, Func Offset: 0x418
	// Line 633, Address: 0x12a3bc, Func Offset: 0x43c
	// Line 642, Address: 0x12a3c0, Func Offset: 0x440
	// Line 643, Address: 0x12a3dc, Func Offset: 0x45c
	// Line 648, Address: 0x12a3e8, Func Offset: 0x468
	// Line 649, Address: 0x12a3f8, Func Offset: 0x478
	// Func End, Address: 0x12a41c, Func Offset: 0x49c
}

// 
// Start address: 0x12a420
void shBattleAttackByHumanFog()
{
	// Line 719, Address: 0x12a420, Func Offset: 0
	// Line 720, Address: 0x12a424, Func Offset: 0x4
	// Func End, Address: 0x12a430, Func Offset: 0x10
}

// 
// Start address: 0x12a430
void shBattleAttackByHumanFinishTypeA(SubCharacter* attacker, unsigned short atk)
{
	_CL_BATTLE_QUE que;
	unsigned short ed;
	unsigned short st;
	unsigned short cur_frame;
	float s_vec[4];
	float s_pos[4];
	// Line 735, Address: 0x12a430, Func Offset: 0
	// Line 741, Address: 0x12a454, Func Offset: 0x24
	// Line 742, Address: 0x12a46c, Func Offset: 0x3c
	// Line 743, Address: 0x12a494, Func Offset: 0x64
	// Line 746, Address: 0x12a4bc, Func Offset: 0x8c
	// Line 747, Address: 0x12a4cc, Func Offset: 0x9c
	// Line 748, Address: 0x12a500, Func Offset: 0xd0
	// Line 749, Address: 0x12a534, Func Offset: 0x104
	// Line 750, Address: 0x12a568, Func Offset: 0x138
	// Line 755, Address: 0x12a578, Func Offset: 0x148
	// Line 758, Address: 0x12a5a0, Func Offset: 0x170
	// Line 759, Address: 0x12a5d8, Func Offset: 0x1a8
	// Line 760, Address: 0x12a610, Func Offset: 0x1e0
	// Line 761, Address: 0x12a648, Func Offset: 0x218
	// Line 762, Address: 0x12a668, Func Offset: 0x238
	// Line 763, Address: 0x12a688, Func Offset: 0x258
	// Line 764, Address: 0x12a6a8, Func Offset: 0x278
	// Line 765, Address: 0x12a6d0, Func Offset: 0x2a0
	// Line 766, Address: 0x12a704, Func Offset: 0x2d4
	// Line 767, Address: 0x12a738, Func Offset: 0x308
	// Line 768, Address: 0x12a76c, Func Offset: 0x33c
	// Line 770, Address: 0x12a788, Func Offset: 0x358
	// Line 771, Address: 0x12a79c, Func Offset: 0x36c
	// Line 772, Address: 0x12a7c0, Func Offset: 0x390
	// Line 779, Address: 0x12a7c4, Func Offset: 0x394
	// Line 780, Address: 0x12a7e0, Func Offset: 0x3b0
	// Line 784, Address: 0x12a7ec, Func Offset: 0x3bc
	// Line 785, Address: 0x12a7fc, Func Offset: 0x3cc
	// Func End, Address: 0x12a820, Func Offset: 0x3f0
}

// 
// Start address: 0x12a820
void shBattleAttackByHumanFinishTypeB(SubCharacter* attacker, unsigned short atk)
{
	_CL_BATTLE_QUE que;
	unsigned short ed;
	unsigned short st;
	unsigned short cur_frame;
	float s_vec[4];
	float s_pos[4];
	// Line 790, Address: 0x12a820, Func Offset: 0
	// Line 796, Address: 0x12a844, Func Offset: 0x24
	// Line 797, Address: 0x12a85c, Func Offset: 0x3c
	// Line 798, Address: 0x12a884, Func Offset: 0x64
	// Line 801, Address: 0x12a8ac, Func Offset: 0x8c
	// Line 802, Address: 0x12a8bc, Func Offset: 0x9c
	// Line 803, Address: 0x12a8f0, Func Offset: 0xd0
	// Line 804, Address: 0x12a924, Func Offset: 0x104
	// Line 805, Address: 0x12a958, Func Offset: 0x138
	// Line 810, Address: 0x12a968, Func Offset: 0x148
	// Line 813, Address: 0x12a990, Func Offset: 0x170
	// Line 814, Address: 0x12a9c8, Func Offset: 0x1a8
	// Line 815, Address: 0x12aa00, Func Offset: 0x1e0
	// Line 816, Address: 0x12aa38, Func Offset: 0x218
	// Line 817, Address: 0x12aa58, Func Offset: 0x238
	// Line 818, Address: 0x12aa78, Func Offset: 0x258
	// Line 819, Address: 0x12aa98, Func Offset: 0x278
	// Line 820, Address: 0x12aac0, Func Offset: 0x2a0
	// Line 821, Address: 0x12aaf4, Func Offset: 0x2d4
	// Line 822, Address: 0x12ab28, Func Offset: 0x308
	// Line 823, Address: 0x12ab5c, Func Offset: 0x33c
	// Line 825, Address: 0x12ab78, Func Offset: 0x358
	// Line 826, Address: 0x12ab8c, Func Offset: 0x36c
	// Line 827, Address: 0x12abb0, Func Offset: 0x390
	// Line 834, Address: 0x12abb4, Func Offset: 0x394
	// Line 835, Address: 0x12abd0, Func Offset: 0x3b0
	// Line 839, Address: 0x12abdc, Func Offset: 0x3bc
	// Line 840, Address: 0x12abec, Func Offset: 0x3cc
	// Func End, Address: 0x12ac10, Func Offset: 0x3f0
}

// 
// Start address: 0x12ac10
void shGetEnemyAttackStartPos(SubCharacter* attacker, unsigned short atk, float* s_pos, float* s_vec)
{
	// Line 860, Address: 0x12ac10, Func Offset: 0
	// Line 862, Address: 0x12ac28, Func Offset: 0x18
	// Line 865, Address: 0x12ac70, Func Offset: 0x60
	// Line 866, Address: 0x12ac88, Func Offset: 0x78
	// Line 868, Address: 0x12ac90, Func Offset: 0x80
	// Line 869, Address: 0x12aca8, Func Offset: 0x98
	// Line 871, Address: 0x12acb0, Func Offset: 0xa0
	// Line 872, Address: 0x12acc8, Func Offset: 0xb8
	// Line 874, Address: 0x12acd0, Func Offset: 0xc0
	// Line 877, Address: 0x12ace8, Func Offset: 0xd8
	// Func End, Address: 0x12acf8, Func Offset: 0xe8
}

// 
// Start address: 0x12ad00
void shBattleAttackByEnemySlash(SubCharacter* attacker, unsigned short atk)
{
	_CL_BATTLE_QUE que;
	unsigned short ed;
	unsigned short st;
	unsigned short cur_frame;
	float s_vec[4];
	float s_pos[4];
	int se;
	// Line 885, Address: 0x12ad00, Func Offset: 0
	// Line 893, Address: 0x12ad24, Func Offset: 0x24
	// Line 894, Address: 0x12ad38, Func Offset: 0x38
	// Line 895, Address: 0x12ad60, Func Offset: 0x60
	// Line 900, Address: 0x12ad88, Func Offset: 0x88
	// Line 913, Address: 0x12ada0, Func Offset: 0xa0
	// Line 914, Address: 0x12add4, Func Offset: 0xd4
	// Line 915, Address: 0x12ae08, Func Offset: 0x108
	// Line 916, Address: 0x12ae3c, Func Offset: 0x13c
	// Line 923, Address: 0x12ae4c, Func Offset: 0x14c
	// Line 926, Address: 0x12ae74, Func Offset: 0x174
	// Line 927, Address: 0x12aeac, Func Offset: 0x1ac
	// Line 928, Address: 0x12aee4, Func Offset: 0x1e4
	// Line 929, Address: 0x12af1c, Func Offset: 0x21c
	// Line 930, Address: 0x12af3c, Func Offset: 0x23c
	// Line 931, Address: 0x12af5c, Func Offset: 0x25c
	// Line 932, Address: 0x12af7c, Func Offset: 0x27c
	// Line 933, Address: 0x12afa4, Func Offset: 0x2a4
	// Line 934, Address: 0x12afd8, Func Offset: 0x2d8
	// Line 935, Address: 0x12b00c, Func Offset: 0x30c
	// Line 937, Address: 0x12b040, Func Offset: 0x340
	// Line 938, Address: 0x12b054, Func Offset: 0x354
	// Line 939, Address: 0x12b078, Func Offset: 0x378
	// Line 947, Address: 0x12b07c, Func Offset: 0x37c
	// Line 948, Address: 0x12b098, Func Offset: 0x398
	// Line 952, Address: 0x12b0a4, Func Offset: 0x3a4
	// Line 953, Address: 0x12b0b4, Func Offset: 0x3b4
	// Line 959, Address: 0x12b0d0, Func Offset: 0x3d0
	// Line 962, Address: 0x12b0e4, Func Offset: 0x3e4
	// Line 963, Address: 0x12b0ec, Func Offset: 0x3ec
	// Line 966, Address: 0x12b0f4, Func Offset: 0x3f4
	// Line 967, Address: 0x12b104, Func Offset: 0x404
	// Func End, Address: 0x12b128, Func Offset: 0x428
}

// 
// Start address: 0x12b130
void shBattleAttackByEnemyStrike(SubCharacter* attacker, unsigned short atk)
{
	_CL_BATTLE_QUE que;
	unsigned short ed;
	unsigned short st;
	unsigned short cur_frame;
	float s_vec[4];
	float s_pos[4];
	int se;
	// Line 991, Address: 0x12b130, Func Offset: 0
	// Line 999, Address: 0x12b154, Func Offset: 0x24
	// Line 1000, Address: 0x12b168, Func Offset: 0x38
	// Line 1001, Address: 0x12b190, Func Offset: 0x60
	// Line 1006, Address: 0x12b1b8, Func Offset: 0x88
	// Line 1019, Address: 0x12b1d0, Func Offset: 0xa0
	// Line 1020, Address: 0x12b204, Func Offset: 0xd4
	// Line 1021, Address: 0x12b238, Func Offset: 0x108
	// Line 1022, Address: 0x12b26c, Func Offset: 0x13c
	// Line 1027, Address: 0x12b27c, Func Offset: 0x14c
	// Line 1032, Address: 0x12b2b0, Func Offset: 0x180
	// Line 1033, Address: 0x12b2e8, Func Offset: 0x1b8
	// Line 1034, Address: 0x12b320, Func Offset: 0x1f0
	// Line 1035, Address: 0x12b358, Func Offset: 0x228
	// Line 1036, Address: 0x12b378, Func Offset: 0x248
	// Line 1037, Address: 0x12b398, Func Offset: 0x268
	// Line 1038, Address: 0x12b3b8, Func Offset: 0x288
	// Line 1039, Address: 0x12b3e0, Func Offset: 0x2b0
	// Line 1040, Address: 0x12b414, Func Offset: 0x2e4
	// Line 1041, Address: 0x12b448, Func Offset: 0x318
	// Line 1043, Address: 0x12b47c, Func Offset: 0x34c
	// Line 1044, Address: 0x12b490, Func Offset: 0x360
	// Line 1045, Address: 0x12b4b4, Func Offset: 0x384
	// Line 1053, Address: 0x12b4b8, Func Offset: 0x388
	// Line 1054, Address: 0x12b4d4, Func Offset: 0x3a4
	// Line 1058, Address: 0x12b4e0, Func Offset: 0x3b0
	// Line 1059, Address: 0x12b4f0, Func Offset: 0x3c0
	// Line 1065, Address: 0x12b50c, Func Offset: 0x3dc
	// Line 1068, Address: 0x12b520, Func Offset: 0x3f0
	// Line 1069, Address: 0x12b528, Func Offset: 0x3f8
	// Line 1072, Address: 0x12b530, Func Offset: 0x400
	// Line 1074, Address: 0x12b540, Func Offset: 0x410
	// Func End, Address: 0x12b564, Func Offset: 0x434
}

// 
// Start address: 0x12b570
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
	int se;
	// Line 1086, Address: 0x12b570, Func Offset: 0
	// Line 1096, Address: 0x12b590, Func Offset: 0x20
	// Line 1097, Address: 0x12b5a4, Func Offset: 0x34
	// Line 1098, Address: 0x12b5d0, Func Offset: 0x60
	// Line 1104, Address: 0x12b5fc, Func Offset: 0x8c
	// Line 1108, Address: 0x12b634, Func Offset: 0xc4
	// Line 1110, Address: 0x12b684, Func Offset: 0x114
	// Line 1115, Address: 0x12b690, Func Offset: 0x120
	// Line 1117, Address: 0x12b6a8, Func Offset: 0x138
	// Line 1118, Address: 0x12b6b0, Func Offset: 0x140
	// Line 1119, Address: 0x12b6b8, Func Offset: 0x148
	// Line 1120, Address: 0x12b6c0, Func Offset: 0x150
	// Line 1121, Address: 0x12b6d8, Func Offset: 0x168
	// Line 1122, Address: 0x12b6f0, Func Offset: 0x180
	// Line 1123, Address: 0x12b708, Func Offset: 0x198
	// Line 1125, Address: 0x12b71c, Func Offset: 0x1ac
	// Line 1126, Address: 0x12b734, Func Offset: 0x1c4
	// Line 1127, Address: 0x12b75c, Func Offset: 0x1ec
	// Line 1134, Address: 0x12b764, Func Offset: 0x1f4
	// Line 1135, Address: 0x12b770, Func Offset: 0x200
	// Line 1138, Address: 0x12b784, Func Offset: 0x214
	// Line 1139, Address: 0x12b794, Func Offset: 0x224
	// Line 1140, Address: 0x12b7b4, Func Offset: 0x244
	// Line 1143, Address: 0x12b7c8, Func Offset: 0x258
	// Line 1144, Address: 0x12b7d0, Func Offset: 0x260
	// Line 1146, Address: 0x12b7d8, Func Offset: 0x268
	// Func End, Address: 0x12b7f8, Func Offset: 0x288
}

// 
// Start address: 0x12b800
void shBattleAttackByEnemyBite()
{
	// Line 1153, Address: 0x12b800, Func Offset: 0
	// Line 1154, Address: 0x12b804, Func Offset: 0x4
	// Func End, Address: 0x12b810, Func Offset: 0x10
}

// 
// Start address: 0x12b810
void shBattleAttackByEnemyHug()
{
	// Line 1161, Address: 0x12b810, Func Offset: 0
	// Line 1162, Address: 0x12b814, Func Offset: 0x4
	// Func End, Address: 0x12b820, Func Offset: 0x10
}

// 
// Start address: 0x12b820
void shBattleAttackByEnemyShot()
{
	// Line 1171, Address: 0x12b820, Func Offset: 0
	// Line 1237, Address: 0x12b824, Func Offset: 0x4
	// Func End, Address: 0x12b830, Func Offset: 0x10
}

// 
// Start address: 0x12b830
void shBattleAddAttackQueue(SubCharacter* scp, unsigned char wep_no, unsigned short atk_no)
{
	int no;
	// Line 1247, Address: 0x12b830, Func Offset: 0
	// Line 1250, Address: 0x12b848, Func Offset: 0x18
	// Line 1251, Address: 0x12b858, Func Offset: 0x28
	// Line 1252, Address: 0x12b874, Func Offset: 0x44
	// Line 1254, Address: 0x12b87c, Func Offset: 0x4c
	// Line 1255, Address: 0x12b88c, Func Offset: 0x5c
	// Line 1256, Address: 0x12b8a4, Func Offset: 0x74
	// Line 1257, Address: 0x12b8bc, Func Offset: 0x8c
	// Line 1258, Address: 0x12b8d4, Func Offset: 0xa4
	// Line 1259, Address: 0x12b8e8, Func Offset: 0xb8
	// Func End, Address: 0x12b8fc, Func Offset: 0xcc
}

// 
// Start address: 0x12b900
void shBattleAttackHitCheckInit(SubCharacter* scp)
{
	// Line 1281, Address: 0x12b900, Func Offset: 0
	// Line 1282, Address: 0x12b908, Func Offset: 0x8
	// Line 1283, Address: 0x12b914, Func Offset: 0x14
	// Line 1284, Address: 0x12b91c, Func Offset: 0x1c
	// Func End, Address: 0x12b928, Func Offset: 0x28
}

// 
// Start address: 0x12b930
void shBattleAttackHitCheckToEnemy(SubCharacter* scp, unsigned char wep_no, unsigned short atk_no)
{
	// Line 1286, Address: 0x12b930, Func Offset: 0
	// Line 1287, Address: 0x12b944, Func Offset: 0x14
	// Line 1288, Address: 0x12b958, Func Offset: 0x28
	// Func End, Address: 0x12b968, Func Offset: 0x38
}

// 
// Start address: 0x12b970
void shBattleAttackHitCheckToHuman(SubCharacter* scp, unsigned short atk_no)
{
	// Line 1303, Address: 0x12b970, Func Offset: 0
	// Line 1304, Address: 0x12b980, Func Offset: 0x10
	// Line 1305, Address: 0x12b994, Func Offset: 0x24
	// Func End, Address: 0x12b9a4, Func Offset: 0x34
}

// 
// Start address: 0x12b9b0
int shBattleRequestNextAttackIsOk(unsigned short atk, unsigned short frame)
{
	// Line 1318, Address: 0x12b9b0, Func Offset: 0
	// Line 1322, Address: 0x12b9bc, Func Offset: 0xc
	// Line 1330, Address: 0x12b9ec, Func Offset: 0x3c
	// Line 1334, Address: 0x12b9f8, Func Offset: 0x48
	// Line 1336, Address: 0x12ba78, Func Offset: 0xc8
	// Line 1338, Address: 0x12ba84, Func Offset: 0xd4
	// Line 1349, Address: 0x12ba90, Func Offset: 0xe0
	// Line 1351, Address: 0x12bb0c, Func Offset: 0x15c
	// Line 1353, Address: 0x12bb18, Func Offset: 0x168
	// Line 1359, Address: 0x12bb24, Func Offset: 0x174
	// Line 1361, Address: 0x12bba4, Func Offset: 0x1f4
	// Line 1363, Address: 0x12bbb0, Func Offset: 0x200
	// Line 1367, Address: 0x12bbbc, Func Offset: 0x20c
	// Line 1369, Address: 0x12bc34, Func Offset: 0x284
	// Line 1371, Address: 0x12bc40, Func Offset: 0x290
	// Line 1375, Address: 0x12bc44, Func Offset: 0x294
	// Func End, Address: 0x12bc50, Func Offset: 0x2a0
}

// 
// Start address: 0x12bc50
void shBattleGetResult(SubCharacter* scp)
{
	float shock_revise;
	float damage_revise;
	_CL_BATTLE_RESULT* result;
	// Line 1392, Address: 0x12bc50, Func Offset: 0
	// Line 1395, Address: 0x12bc60, Func Offset: 0x10
	// Line 1397, Address: 0x12bc64, Func Offset: 0x14
	// Line 1398, Address: 0x12bc6c, Func Offset: 0x1c
	// Line 1402, Address: 0x12bca8, Func Offset: 0x58
	// Line 1403, Address: 0x12bcbc, Func Offset: 0x6c
	// Line 1406, Address: 0x12bcc8, Func Offset: 0x78
	// Line 1407, Address: 0x12bce4, Func Offset: 0x94
	// Line 1412, Address: 0x12bd28, Func Offset: 0xd8
	// Line 1417, Address: 0x12bd34, Func Offset: 0xe4
	// Line 1421, Address: 0x12bd3c, Func Offset: 0xec
	// Line 1422, Address: 0x12bd58, Func Offset: 0x108
	// Line 1427, Address: 0x12bd9c, Func Offset: 0x14c
	// Line 1432, Address: 0x12bda8, Func Offset: 0x158
	// Line 1433, Address: 0x12bdb4, Func Offset: 0x164
	// Line 1440, Address: 0x12bdbc, Func Offset: 0x16c
	// Line 1443, Address: 0x12bdd0, Func Offset: 0x180
	// Line 1452, Address: 0x12bde8, Func Offset: 0x198
	// Line 1453, Address: 0x12be04, Func Offset: 0x1b4
	// Line 1456, Address: 0x12be28, Func Offset: 0x1d8
	// Line 1465, Address: 0x12be38, Func Offset: 0x1e8
	// Line 1466, Address: 0x12be54, Func Offset: 0x204
	// Line 1468, Address: 0x12be68, Func Offset: 0x218
	// Line 1469, Address: 0x12be84, Func Offset: 0x234
	// Line 1470, Address: 0x12be90, Func Offset: 0x240
	// Line 1471, Address: 0x12bea4, Func Offset: 0x254
	// Line 1472, Address: 0x12beb8, Func Offset: 0x268
	// Line 1473, Address: 0x12bed4, Func Offset: 0x284
	// Line 1480, Address: 0x12bee0, Func Offset: 0x290
	// Line 1481, Address: 0x12bf00, Func Offset: 0x2b0
	// Func End, Address: 0x12bf14, Func Offset: 0x2c4
}

// 
// Start address: 0x12bf20
void shBattleInitAttackQueue()
{
	// Line 1500, Address: 0x12bf20, Func Offset: 0
	// Line 1501, Address: 0x12bf28, Func Offset: 0x8
	// Line 1502, Address: 0x12bf3c, Func Offset: 0x1c
	// Line 1503, Address: 0x12bf48, Func Offset: 0x28
	// Func End, Address: 0x12bf58, Func Offset: 0x38
}

// 
// Start address: 0x12bf60
void shBattleExecAttackQueue()
{
	int i;
	// Line 1513, Address: 0x12bf60, Func Offset: 0
	// Line 1514, Address: 0x12bf6c, Func Offset: 0xc
	// Line 1516, Address: 0x12bf70, Func Offset: 0x10
	// Line 1518, Address: 0x12bf78, Func Offset: 0x18
	// Line 1521, Address: 0x12bf9c, Func Offset: 0x3c
	// Line 1522, Address: 0x12bffc, Func Offset: 0x9c
	// Line 1523, Address: 0x12c000, Func Offset: 0xa0
	// Line 1527, Address: 0x12c030, Func Offset: 0xd0
	// Line 1529, Address: 0x12c038, Func Offset: 0xd8
	// Line 1533, Address: 0x12c068, Func Offset: 0x108
	// Line 1535, Address: 0x12c070, Func Offset: 0x110
	// Line 1539, Address: 0x12c0a0, Func Offset: 0x140
	// Line 1541, Address: 0x12c0a8, Func Offset: 0x148
	// Line 1545, Address: 0x12c0d8, Func Offset: 0x178
	// Line 1547, Address: 0x12c0e0, Func Offset: 0x180
	// Line 1551, Address: 0x12c110, Func Offset: 0x1b0
	// Line 1554, Address: 0x12c118, Func Offset: 0x1b8
	// Line 1556, Address: 0x12c134, Func Offset: 0x1d4
	// Line 1560, Address: 0x12c164, Func Offset: 0x204
	// Line 1562, Address: 0x12c16c, Func Offset: 0x20c
	// Line 1567, Address: 0x12c19c, Func Offset: 0x23c
	// Line 1573, Address: 0x12c1a4, Func Offset: 0x244
	// Line 1574, Address: 0x12c1c8, Func Offset: 0x268
	// Line 1578, Address: 0x12c1f8, Func Offset: 0x298
	// Line 1579, Address: 0x12c224, Func Offset: 0x2c4
	// Line 1583, Address: 0x12c254, Func Offset: 0x2f4
	// Line 1584, Address: 0x12c25c, Func Offset: 0x2fc
	// Line 1585, Address: 0x12c29c, Func Offset: 0x33c
	// Line 1586, Address: 0x12c2a0, Func Offset: 0x340
	// Line 1587, Address: 0x12c2bc, Func Offset: 0x35c
	// Line 1590, Address: 0x12c2c4, Func Offset: 0x364
	// Line 1594, Address: 0x12c2f4, Func Offset: 0x394
	// Line 1596, Address: 0x12c2fc, Func Offset: 0x39c
	// Line 1600, Address: 0x12c32c, Func Offset: 0x3cc
	// Line 1605, Address: 0x12c334, Func Offset: 0x3d4
	// Line 1609, Address: 0x12c364, Func Offset: 0x404
	// Line 1611, Address: 0x12c36c, Func Offset: 0x40c
	// Line 1616, Address: 0x12c39c, Func Offset: 0x43c
	// Line 1619, Address: 0x12c3a0, Func Offset: 0x440
	// Line 1620, Address: 0x12c3a4, Func Offset: 0x444
	// Line 1621, Address: 0x12c3c4, Func Offset: 0x464
	// Func End, Address: 0x12c3d8, Func Offset: 0x478
}

