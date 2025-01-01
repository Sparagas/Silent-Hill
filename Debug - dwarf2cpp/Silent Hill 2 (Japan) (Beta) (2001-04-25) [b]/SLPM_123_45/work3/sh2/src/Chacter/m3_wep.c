typedef struct shSkelton;
typedef struct SubCharacter;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct SubObject;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct _anon0;
typedef struct shPlayerWork;
typedef struct _anon1;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct _AnimeInfo;
typedef struct shBattleArea;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
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

typedef void(*type_5)(SubCharacter*);
typedef void(*type_9)(SubCharacter*);
typedef void(*type_11)(SubCharacter*);
typedef void(*type_18)(SubCharacter*);
typedef void(*type_22)(SubCharacter*);

typedef unsigned char type_0[2];
typedef float type_1[4][9];
typedef unsigned char type_2[2];
typedef unsigned char type_3[34];
typedef float type_4[4][2];
typedef float type_6[4];
typedef float type_7[4][4];
typedef unsigned char type_8[10];
typedef unsigned char type_10[2];
typedef float type_12[4];
typedef shAttackInfo type_13[46];
typedef unsigned char type_14[4];
typedef unsigned char type_15[10];
typedef unsigned char type_16[4];
typedef unsigned char type_17[4];
typedef _AnimeInfo type_19[9];
typedef float type_20[4];
typedef PAD_INFO type_21[10];
typedef unsigned char type_23[13];

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

	void WeaponFunction();
	void shUpdateWeaponMatrixAfterAnime();
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
_AnimeInfo weapon_anim[9];
shPlayerWork sh2jms;
void(*WeaponFunction)(SubCharacter*);

void WeaponFunction();
void shUpdateWeaponMatrixAfterAnime();
void shGetJamesWeaponPos(float* pos, float* vec, int kind);
void shGetJamesWeaponStartPos(float* pos, float* vec);
void shGetJamesWeaponEndPos(float* pos, float* vec);
void shCharacterSetWeaponLow(SubCharacter* scp);

// 
// Start address: 0x128d00
void SubCharacter::WeaponFunction()
{
	_AnimeInfo* aip;
	// Line 73, Address: 0x128d00, Func Offset: 0
	// Line 77, Address: 0x128d10, Func Offset: 0x10
	// Line 80, Address: 0x128d34, Func Offset: 0x34
	// Line 81, Address: 0x128d44, Func Offset: 0x44
	// Line 83, Address: 0x128d84, Func Offset: 0x84
	// Line 84, Address: 0x128d8c, Func Offset: 0x8c
	// Line 86, Address: 0x128d94, Func Offset: 0x94
	// Line 87, Address: 0x128d9c, Func Offset: 0x9c
	// Line 89, Address: 0x128da4, Func Offset: 0xa4
	// Line 90, Address: 0x128dac, Func Offset: 0xac
	// Line 92, Address: 0x128db4, Func Offset: 0xb4
	// Line 93, Address: 0x128dbc, Func Offset: 0xbc
	// Line 95, Address: 0x128dc4, Func Offset: 0xc4
	// Line 96, Address: 0x128dcc, Func Offset: 0xcc
	// Line 98, Address: 0x128dd4, Func Offset: 0xd4
	// Line 99, Address: 0x128ddc, Func Offset: 0xdc
	// Line 101, Address: 0x128de4, Func Offset: 0xe4
	// Line 102, Address: 0x128dec, Func Offset: 0xec
	// Line 104, Address: 0x128df4, Func Offset: 0xf4
	// Line 107, Address: 0x128dfc, Func Offset: 0xfc
	// Line 109, Address: 0x128e24, Func Offset: 0x124
	// Line 114, Address: 0x128e34, Func Offset: 0x134
	// Func End, Address: 0x128e48, Func Offset: 0x148
}

// 
// Start address: 0x128e50
void SubCharacter::shUpdateWeaponMatrixAfterAnime()
{
	SubCharacter* player;
	_anon1 mat;
	// Line 132, Address: 0x128e50, Func Offset: 0
	// Line 137, Address: 0x128e60, Func Offset: 0x10
	// Line 139, Address: 0x128e68, Func Offset: 0x18
	// Line 140, Address: 0x128e78, Func Offset: 0x28
	// Line 141, Address: 0x128eac, Func Offset: 0x5c
	// Line 143, Address: 0x128ed8, Func Offset: 0x88
	// Line 144, Address: 0x128ee8, Func Offset: 0x98
	// Line 145, Address: 0x128f00, Func Offset: 0xb0
	// Line 146, Address: 0x128f18, Func Offset: 0xc8
	// Line 149, Address: 0x128f20, Func Offset: 0xd0
	// Line 152, Address: 0x128f50, Func Offset: 0x100
	// Line 153, Address: 0x128f60, Func Offset: 0x110
	// Func End, Address: 0x128f74, Func Offset: 0x124
}

// 
// Start address: 0x128f80
void shGetJamesWeaponPos(float* pos, float* vec, int kind)
{
	float wep_range_test[4][9];
	shSkelton* stp;
	SubCharacter* scp;
	unsigned char weapon;
	_anon1 mat;
	_anon1 lw_mat;
	float vec0[4];
	float pos1[4];
	float pos0[4];
	// Line 164, Address: 0x128f80, Func Offset: 0
	// Line 171, Address: 0x128fa4, Func Offset: 0x24
	// Line 189, Address: 0x128fd0, Func Offset: 0x50
	// Line 191, Address: 0x128fe0, Func Offset: 0x60
	// Line 193, Address: 0x128ff8, Func Offset: 0x78
	// Line 194, Address: 0x129000, Func Offset: 0x80
	// Line 204, Address: 0x129030, Func Offset: 0xb0
	// Line 206, Address: 0x129034, Func Offset: 0xb4
	// Line 208, Address: 0x129050, Func Offset: 0xd0
	// Line 209, Address: 0x129080, Func Offset: 0x100
	// Line 210, Address: 0x129090, Func Offset: 0x110
	// Line 212, Address: 0x129098, Func Offset: 0x118
	// Line 213, Address: 0x1290cc, Func Offset: 0x14c
	// Line 216, Address: 0x1290e0, Func Offset: 0x160
	// Line 217, Address: 0x1290f4, Func Offset: 0x174
	// Line 219, Address: 0x129104, Func Offset: 0x184
	// Line 220, Address: 0x129118, Func Offset: 0x198
	// Line 222, Address: 0x129124, Func Offset: 0x1a4
	// Line 224, Address: 0x129140, Func Offset: 0x1c0
	// Line 225, Address: 0x129174, Func Offset: 0x1f4
	// Line 226, Address: 0x129188, Func Offset: 0x208
	// Line 227, Address: 0x12919c, Func Offset: 0x21c
	// Line 228, Address: 0x1291ac, Func Offset: 0x22c
	// Line 230, Address: 0x1291b4, Func Offset: 0x234
	// Line 231, Address: 0x1291d8, Func Offset: 0x258
	// Line 232, Address: 0x1291ec, Func Offset: 0x26c
	// Line 233, Address: 0x129200, Func Offset: 0x280
	// Line 234, Address: 0x129214, Func Offset: 0x294
	// Line 235, Address: 0x129228, Func Offset: 0x2a8
	// Line 239, Address: 0x129234, Func Offset: 0x2b4
	// Line 262, Address: 0x129248, Func Offset: 0x2c8
	// Line 263, Address: 0x129264, Func Offset: 0x2e4
	// Line 264, Address: 0x129288, Func Offset: 0x308
	// Func End, Address: 0x1292a8, Func Offset: 0x328
}

// 
// Start address: 0x1292b0
void shGetJamesWeaponStartPos(float* pos, float* vec)
{
	// Line 266, Address: 0x1292b0, Func Offset: 0
	// Line 267, Address: 0x1292c0, Func Offset: 0x10
	// Line 268, Address: 0x1292d4, Func Offset: 0x24
	// Func End, Address: 0x1292e4, Func Offset: 0x34
}

// 
// Start address: 0x1292f0
void shGetJamesWeaponEndPos(float* pos, float* vec)
{
	// Line 270, Address: 0x1292f0, Func Offset: 0
	// Line 271, Address: 0x129300, Func Offset: 0x10
	// Line 272, Address: 0x129314, Func Offset: 0x24
	// Func End, Address: 0x129324, Func Offset: 0x34
}

// 
// Start address: 0x129330
void shCharacterSetWeaponLow(SubCharacter* scp)
{
	// Line 283, Address: 0x129330, Func Offset: 0
	// Line 284, Address: 0x12933c, Func Offset: 0xc
	// Line 285, Address: 0x129350, Func Offset: 0x20
	// Func End, Address: 0x129360, Func Offset: 0x30
}

