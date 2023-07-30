typedef struct SubCharacter;
typedef struct SubObject;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct _anon0;
typedef struct shSkelton;
typedef struct _anon1;
typedef struct shBattleFight;
typedef struct shPlayerWork;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct _AnimeInfo;
typedef struct shBattleInfo;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_WALL;
typedef union _anon2;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _CL_VHIT_CHARA;
typedef struct PAD_3D;
typedef struct _CL_VHIT_RESULT;
typedef union _anon3;
typedef struct PAD_2D;
typedef struct PAD_INFO;

typedef void(*type_6)(SubCharacter*);
typedef void(*type_11)(SubCharacter*);
typedef void(*type_14)(SubCharacter*);
typedef void(*type_21)(SubCharacter*);
typedef void(*type_24)(SubCharacter*);

typedef unsigned char type_0[13];
typedef unsigned char type_1[2];
typedef unsigned char type_2[2];
typedef unsigned char type_3[34];
typedef float type_4[4][2];
typedef int type_5[98];
typedef float type_7[4];
typedef float type_8[4][4];
typedef _AnimeInfo type_9[97];
typedef unsigned char type_10[10];
typedef float type_12[4];
typedef unsigned char type_13[2];
typedef shAttackInfo type_15[46];
typedef unsigned char type_16[4];
typedef int type_17[98];
typedef unsigned char type_18[10];
typedef unsigned char type_19[4];
typedef float type_20[4];
typedef unsigned char type_22[4];
typedef PAD_INFO type_23[10];

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

	void DemoJamesCheckModelParts();
	void HumanDJMSFunction();
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
	_anon2 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
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

struct PAD_3D
{
	char round_way;
	unsigned char reserved1;
	unsigned char lslide;
	unsigned char rslide;
	unsigned char lturn180;
	unsigned char rturn180;
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

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
_AnimeInfo djames_anim[97];
int djames_anime_adr_list[98];
int djames_clani_adr_list[98];
shPlayerWork sh2jms;
void(*HumanDJMSFunction)(SubCharacter*);

void DemoJamesCheckModelParts();
int HumanDJMSInit(SubCharacter* scp, int type);
void HumanDJMSFunction();
void shCharacterSetHumanDJMSLow(SubCharacter* scp);
int shCharacterHumanDJAMESAnimeSet(SubCharacter* scp, int anime_id);

// 
// Start address: 0x105590
void SubCharacter::DemoJamesCheckModelParts()
{
	int light;
	int lhand;
	int rhand;
	// Line 280, Address: 0x105590, Func Offset: 0
	// Line 284, Address: 0x1055a8, Func Offset: 0x18
	// Line 285, Address: 0x1055c0, Func Offset: 0x30
	// Line 286, Address: 0x1055c4, Func Offset: 0x34
	// Line 287, Address: 0x1055cc, Func Offset: 0x3c
	// Line 290, Address: 0x1055d0, Func Offset: 0x40
	// Line 291, Address: 0x1055ec, Func Offset: 0x5c
	// Line 292, Address: 0x1055f4, Func Offset: 0x64
	// Line 293, Address: 0x1055fc, Func Offset: 0x6c
	// Line 294, Address: 0x105600, Func Offset: 0x70
	// Line 296, Address: 0x105634, Func Offset: 0xa4
	// Line 297, Address: 0x105638, Func Offset: 0xa8
	// Line 299, Address: 0x105640, Func Offset: 0xb0
	// Line 300, Address: 0x105644, Func Offset: 0xb4
	// Line 303, Address: 0x10564c, Func Offset: 0xbc
	// Line 304, Address: 0x105650, Func Offset: 0xc0
	// Line 306, Address: 0x105658, Func Offset: 0xc8
	// Line 307, Address: 0x10565c, Func Offset: 0xcc
	// Line 309, Address: 0x105664, Func Offset: 0xd4
	// Line 310, Address: 0x105668, Func Offset: 0xd8
	// Line 312, Address: 0x105670, Func Offset: 0xe0
	// Line 313, Address: 0x105674, Func Offset: 0xe4
	// Line 315, Address: 0x10567c, Func Offset: 0xec
	// Line 316, Address: 0x105680, Func Offset: 0xf0
	// Line 318, Address: 0x105688, Func Offset: 0xf8
	// Line 324, Address: 0x10568c, Func Offset: 0xfc
	// Line 325, Address: 0x1056a4, Func Offset: 0x114
	// Func End, Address: 0x1056c0, Func Offset: 0x130
}

// 
// Start address: 0x1056c0
int HumanDJMSInit(SubCharacter* scp, int type)
{
	// Line 335, Address: 0x1056c0, Func Offset: 0
	// Line 336, Address: 0x1056d4, Func Offset: 0x14
	// Line 337, Address: 0x105708, Func Offset: 0x48
	// Line 344, Address: 0x105718, Func Offset: 0x58
	// Line 345, Address: 0x10571c, Func Offset: 0x5c
	// Func End, Address: 0x105730, Func Offset: 0x70
}

// 
// Start address: 0x105730
void SubCharacter::HumanDJMSFunction()
{
	short id;
	_AnimeInfo* aip;
	// Line 357, Address: 0x105730, Func Offset: 0
	// Line 362, Address: 0x105744, Func Offset: 0x14
	// Line 370, Address: 0x105768, Func Offset: 0x38
	// Line 372, Address: 0x10577c, Func Offset: 0x4c
	// Line 374, Address: 0x1057a4, Func Offset: 0x74
	// Line 378, Address: 0x1057b4, Func Offset: 0x84
	// Line 379, Address: 0x1057bc, Func Offset: 0x8c
	// Line 383, Address: 0x1057e8, Func Offset: 0xb8
	// Line 385, Address: 0x1057f0, Func Offset: 0xc0
	// Line 389, Address: 0x105800, Func Offset: 0xd0
	// Line 390, Address: 0x105808, Func Offset: 0xd8
	// Line 396, Address: 0x105834, Func Offset: 0x104
	// Line 398, Address: 0x105844, Func Offset: 0x114
	// Line 402, Address: 0x10584c, Func Offset: 0x11c
	// Line 408, Address: 0x105858, Func Offset: 0x128
	// Func End, Address: 0x105870, Func Offset: 0x140
}

// 
// Start address: 0x105870
void shCharacterSetHumanDJMSLow(SubCharacter* scp)
{
	// Line 426, Address: 0x105870, Func Offset: 0
	// Line 427, Address: 0x10587c, Func Offset: 0xc
	// Line 428, Address: 0x105890, Func Offset: 0x20
	// Func End, Address: 0x1058a0, Func Offset: 0x30
}

// 
// Start address: 0x1058a0
int shCharacterHumanDJAMESAnimeSet(SubCharacter* scp, int anime_id)
{
	_AnimeInfo* aip;
	short id;
	// Line 442, Address: 0x1058a0, Func Offset: 0
	// Line 446, Address: 0x1058b8, Func Offset: 0x18
	// Line 448, Address: 0x1058cc, Func Offset: 0x2c
	// Line 451, Address: 0x1058f4, Func Offset: 0x54
	// Line 452, Address: 0x105914, Func Offset: 0x74
	// Line 463, Address: 0x105960, Func Offset: 0xc0
	// Line 470, Address: 0x105998, Func Offset: 0xf8
	// Line 472, Address: 0x1059a4, Func Offset: 0x104
	// Line 474, Address: 0x1059a8, Func Offset: 0x108
	// Func End, Address: 0x1059c0, Func Offset: 0x120
}

