typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef union _anon0;
typedef struct SubCharacter;
typedef struct _CL_VHIT_RESULT;
typedef union _anon1;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct shSkelton;
typedef struct _anon2;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct PAD_3D;
typedef struct _anon3;
typedef struct PAD_2D;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct PAD_INFO;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct shPlayerWork;
typedef struct _CL_VHIT_WALL;

typedef void(*type_4)(SubCharacter*);
typedef void(*type_5)(SubCharacter*);
typedef void(*type_10)(SubCharacter*);

typedef unsigned char type_0[20];
typedef shAttackInfo type_1[66];
typedef unsigned char type_2[14];
typedef unsigned char type_3[2];
typedef float type_6[4][2];
typedef float type_7[4];
typedef float type_8[4][4];
typedef unsigned char type_9[69];
typedef unsigned char type_11[4];
typedef PAD_INFO type_12[10];
typedef unsigned char type_13[14];
typedef float type_14[4];
typedef float type_15[2];
typedef float type_16[4];
typedef unsigned char type_17[4];
typedef unsigned char type_18[4];
typedef unsigned char type_19[97];
typedef unsigned char type_20[2];
typedef unsigned char type_21[2];

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

	void HumanRPJMSFunction();
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

struct _anon2
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

struct PAD_3D
{
	char round_way;
	unsigned char reserved1;
	unsigned char lslide;
	unsigned char rslide;
	unsigned char lturn180;
	unsigned char rturn180;
};

struct _anon3
{
	float d[4][4];
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
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
shPlayerWork sh2jms;
float wall_pos;
int mirror_mode;
void(*HumanRPJMSFunction)(SubCharacter*);

int HumanRPJMSInit(SubCharacter* scp);
void HumanRPJMSFunction();
void shCharacterSetHumanRPJMSLow(SubCharacter* scp);
void shGetJamesLightPos_Calc_Reverse();
void shGetJamesLightPosOriginal_Reverse(float* pos, float* vec);
void PlayerSetReverseMode();

// 
// Start address: 0x24bbb0
int HumanRPJMSInit(SubCharacter* scp)
{
	// Line 50, Address: 0x24bbb0, Func Offset: 0
	// Line 51, Address: 0x24bbc0, Func Offset: 0x10
	// Line 53, Address: 0x24bbcc, Func Offset: 0x1c
	// Line 55, Address: 0x24bbd4, Func Offset: 0x24
	// Line 56, Address: 0x24bbd8, Func Offset: 0x28
	// Func End, Address: 0x24bbec, Func Offset: 0x3c
}

// 
// Start address: 0x24bbf0
void SubCharacter::HumanRPJMSFunction()
{
	// Line 65, Address: 0x24bbf0, Func Offset: 0
	// Line 69, Address: 0x24bc00, Func Offset: 0x10
	// Line 72, Address: 0x24bc20, Func Offset: 0x30
	// Line 73, Address: 0x24bc28, Func Offset: 0x38
	// Line 74, Address: 0x24bc34, Func Offset: 0x44
	// Line 78, Address: 0x24bc3c, Func Offset: 0x4c
	// Line 80, Address: 0x24bc5c, Func Offset: 0x6c
	// Line 83, Address: 0x24bc8c, Func Offset: 0x9c
	// Line 84, Address: 0x24bcac, Func Offset: 0xbc
	// Line 85, Address: 0x24bcbc, Func Offset: 0xcc
	// Line 86, Address: 0x24bccc, Func Offset: 0xdc
	// Line 87, Address: 0x24bce0, Func Offset: 0xf0
	// Line 90, Address: 0x24bce8, Func Offset: 0xf8
	// Line 96, Address: 0x24bcf8, Func Offset: 0x108
	// Line 98, Address: 0x24bd18, Func Offset: 0x128
	// Line 99, Address: 0x24bd28, Func Offset: 0x138
	// Line 100, Address: 0x24bd38, Func Offset: 0x148
	// Line 101, Address: 0x24bd44, Func Offset: 0x154
	// Line 104, Address: 0x24bd4c, Func Offset: 0x15c
	// Line 105, Address: 0x24bd5c, Func Offset: 0x16c
	// Line 106, Address: 0x24bd6c, Func Offset: 0x17c
	// Line 107, Address: 0x24bd8c, Func Offset: 0x19c
	// Line 108, Address: 0x24bdb0, Func Offset: 0x1c0
	// Line 109, Address: 0x24bdc8, Func Offset: 0x1d8
	// Line 110, Address: 0x24bdd0, Func Offset: 0x1e0
	// Line 119, Address: 0x24bde8, Func Offset: 0x1f8
	// Func End, Address: 0x24bdfc, Func Offset: 0x20c
}

// 
// Start address: 0x24be00
void shCharacterSetHumanRPJMSLow(SubCharacter* scp)
{
	// Line 135, Address: 0x24be00, Func Offset: 0
	// Line 136, Address: 0x24be08, Func Offset: 0x8
	// Line 137, Address: 0x24be18, Func Offset: 0x18
	// Func End, Address: 0x24be28, Func Offset: 0x28
}

// 
// Start address: 0x24be30
void shGetJamesLightPos_Calc_Reverse()
{
	// Line 149, Address: 0x24be30, Func Offset: 0
	// Line 151, Address: 0x24be60, Func Offset: 0x30
	// Line 152, Address: 0x24be80, Func Offset: 0x50
	// Line 153, Address: 0x24be90, Func Offset: 0x60
	// Line 154, Address: 0x24bea0, Func Offset: 0x70
	// Line 155, Address: 0x24beac, Func Offset: 0x7c
	// Line 156, Address: 0x24bec4, Func Offset: 0x94
	// Line 157, Address: 0x24bed4, Func Offset: 0xa4
	// Line 158, Address: 0x24bee4, Func Offset: 0xb4
	// Line 160, Address: 0x24beec, Func Offset: 0xbc
	// Line 161, Address: 0x24bf00, Func Offset: 0xd0
	// Line 162, Address: 0x24bf10, Func Offset: 0xe0
	// Line 163, Address: 0x24bf20, Func Offset: 0xf0
	// Line 164, Address: 0x24bf34, Func Offset: 0x104
	// Line 165, Address: 0x24bf44, Func Offset: 0x114
	// Line 166, Address: 0x24bf54, Func Offset: 0x124
	// Line 168, Address: 0x24bf5c, Func Offset: 0x12c
	// Line 173, Address: 0x24bf6c, Func Offset: 0x13c
	// Line 175, Address: 0x24bf8c, Func Offset: 0x15c
	// Line 176, Address: 0x24bf9c, Func Offset: 0x16c
	// Line 177, Address: 0x24bfa8, Func Offset: 0x178
	// Line 182, Address: 0x24bfb8, Func Offset: 0x188
	// Line 184, Address: 0x24bfd0, Func Offset: 0x1a0
	// Line 185, Address: 0x24bfe0, Func Offset: 0x1b0
	// Line 187, Address: 0x24bfe8, Func Offset: 0x1b8
	// Line 188, Address: 0x24bff8, Func Offset: 0x1c8
	// Line 189, Address: 0x24c00c, Func Offset: 0x1dc
	// Line 190, Address: 0x24c01c, Func Offset: 0x1ec
	// Line 191, Address: 0x24c02c, Func Offset: 0x1fc
	// Line 192, Address: 0x24c040, Func Offset: 0x210
	// Line 193, Address: 0x24c050, Func Offset: 0x220
	// Line 195, Address: 0x24c058, Func Offset: 0x228
	// Line 196, Address: 0x24c068, Func Offset: 0x238
	// Line 197, Address: 0x24c078, Func Offset: 0x248
	// Line 198, Address: 0x24c098, Func Offset: 0x268
	// Line 199, Address: 0x24c0a4, Func Offset: 0x274
	// Line 200, Address: 0x24c0b4, Func Offset: 0x284
	// Line 201, Address: 0x24c0c4, Func Offset: 0x294
	// Line 202, Address: 0x24c0dc, Func Offset: 0x2ac
	// Line 204, Address: 0x24c0e4, Func Offset: 0x2b4
	// Line 205, Address: 0x24c0f4, Func Offset: 0x2c4
	// Line 206, Address: 0x24c104, Func Offset: 0x2d4
	// Line 207, Address: 0x24c118, Func Offset: 0x2e8
	// Line 208, Address: 0x24c128, Func Offset: 0x2f8
	// Line 209, Address: 0x24c138, Func Offset: 0x308
	// Line 212, Address: 0x24c14c, Func Offset: 0x31c
	// Func End, Address: 0x24c154, Func Offset: 0x324
}

// 
// Start address: 0x24c160
void shGetJamesLightPosOriginal_Reverse(float* pos, float* vec)
{
	// Line 227, Address: 0x24c160, Func Offset: 0
	// Line 228, Address: 0x24c170, Func Offset: 0x10
	// Line 229, Address: 0x24c180, Func Offset: 0x20
	// Func End, Address: 0x24c188, Func Offset: 0x28
}

// 
// Start address: 0x24c190
void PlayerSetReverseMode()
{
	// Line 240, Address: 0x24c190, Func Offset: 0
	// Line 243, Address: 0x24c198, Func Offset: 0x8
	// Line 245, Address: 0x24c268, Func Offset: 0xd8
	// Line 246, Address: 0x24c270, Func Offset: 0xe0
	// Line 247, Address: 0x24c280, Func Offset: 0xf0
	// Line 248, Address: 0x24c288, Func Offset: 0xf8
	// Line 250, Address: 0x24c290, Func Offset: 0x100
	// Line 251, Address: 0x24c29c, Func Offset: 0x10c
	// Line 252, Address: 0x24c2ac, Func Offset: 0x11c
	// Line 253, Address: 0x24c2b4, Func Offset: 0x124
	// Line 257, Address: 0x24c2bc, Func Offset: 0x12c
	// Line 258, Address: 0x24c2c8, Func Offset: 0x138
	// Line 259, Address: 0x24c2d0, Func Offset: 0x140
	// Line 260, Address: 0x24c2d8, Func Offset: 0x148
	// Line 276, Address: 0x24c2e0, Func Offset: 0x150
	// Line 277, Address: 0x24c2ec, Func Offset: 0x15c
	// Line 278, Address: 0x24c2f8, Func Offset: 0x168
	// Line 279, Address: 0x24c300, Func Offset: 0x170
	// Line 281, Address: 0x24c308, Func Offset: 0x178
	// Line 282, Address: 0x24c314, Func Offset: 0x184
	// Line 285, Address: 0x24c31c, Func Offset: 0x18c
	// Line 286, Address: 0x24c348, Func Offset: 0x1b8
	// Func End, Address: 0x24c358, Func Offset: 0x1c8
}

