typedef struct _CL_HITPOLY_HEAD;
typedef struct SubCharacter;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef union _anon0;
typedef struct _CL_VHIT_RESULT;
typedef union _anon1;
typedef struct _AnimeInfo;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct shSkelton;
typedef struct _anon2;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct Item;
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

typedef void(*type_0)(SubCharacter*);
typedef void(*type_6)(SubCharacter*);
typedef void(*type_9)(SubCharacter*);
typedef void(*type_15)(SubCharacter*);

typedef unsigned char type_1[20];
typedef _AnimeInfo type_2[188];
typedef shAttackInfo type_3[66];
typedef unsigned char type_4[14];
typedef int type_5[188];
typedef unsigned char type_7[2];
typedef unsigned int type_8[2];
typedef float type_10[4][2];
typedef unsigned short type_11[11];
typedef float type_12[4];
typedef float type_13[4][4];
typedef unsigned char type_14[69];
typedef unsigned char type_16[4];
typedef unsigned short type_17[3];
typedef PAD_INFO type_18[10];
typedef unsigned char type_19[14];
typedef float type_20[4];
typedef float type_21[2];
typedef float type_22[4];
typedef unsigned char type_23[4];
typedef int type_24[188];
typedef unsigned char type_25[4];
typedef unsigned char type_26[97];
typedef unsigned char type_27[2];
typedef unsigned char type_28[2];

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
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

	void DemoJamesCheckModelParts();
	void HumanDJMSFunction();
	void DemoPlayerSetHeight();
	void HumanRDJMSFunction();
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
_AnimeInfo djames_anim[188];
int djames_anime_adr_list[188];
int djames_clani_adr_list[188];
shPlayerWork sh2jms;
Item item;
void(*HumanDJMSFunction)(SubCharacter*);
float wall_pos;
int mirror_mode;
void(*HumanRDJMSFunction)(SubCharacter*);

void DemoJamesCheckModelParts();
int HumanDJMSInit(SubCharacter* scp);
void HumanDJMSFunction();
void DemoPlayerSetHeight();
void shCharacterSetHumanDJMSLow(SubCharacter* scp);
int shCharacterHumanDJAMESAnimeSet(SubCharacter* scp, int anime_id);
int HumanRDJMSInit(SubCharacter* scp);
void HumanRDJMSFunction();
void shCharacterSetHumanRDJMSLow(SubCharacter* scp);

// 
// Start address: 0x1044d0
void SubCharacter::DemoJamesCheckModelParts()
{
	int light;
	int lhand;
	int rhand;
	// Line 476, Address: 0x1044d0, Func Offset: 0
	// Line 481, Address: 0x1044d8, Func Offset: 0x8
	// Line 482, Address: 0x104508, Func Offset: 0x38
	// Line 483, Address: 0x10450c, Func Offset: 0x3c
	// Line 484, Address: 0x104514, Func Offset: 0x44
	// Line 487, Address: 0x104518, Func Offset: 0x48
	// Line 488, Address: 0x104528, Func Offset: 0x58
	// Line 489, Address: 0x104530, Func Offset: 0x60
	// Line 490, Address: 0x104538, Func Offset: 0x68
	// Line 491, Address: 0x10453c, Func Offset: 0x6c
	// Line 493, Address: 0x10456c, Func Offset: 0x9c
	// Line 494, Address: 0x104570, Func Offset: 0xa0
	// Line 496, Address: 0x104578, Func Offset: 0xa8
	// Line 497, Address: 0x10457c, Func Offset: 0xac
	// Line 500, Address: 0x104584, Func Offset: 0xb4
	// Line 501, Address: 0x104588, Func Offset: 0xb8
	// Line 503, Address: 0x104590, Func Offset: 0xc0
	// Line 504, Address: 0x104594, Func Offset: 0xc4
	// Line 506, Address: 0x10459c, Func Offset: 0xcc
	// Line 507, Address: 0x1045a0, Func Offset: 0xd0
	// Line 509, Address: 0x1045a8, Func Offset: 0xd8
	// Line 510, Address: 0x1045ac, Func Offset: 0xdc
	// Line 512, Address: 0x1045b4, Func Offset: 0xe4
	// Line 513, Address: 0x1045b8, Func Offset: 0xe8
	// Line 515, Address: 0x1045c0, Func Offset: 0xf0
	// Line 521, Address: 0x1045c4, Func Offset: 0xf4
	// Line 522, Address: 0x1045cc, Func Offset: 0xfc
	// Func End, Address: 0x1045dc, Func Offset: 0x10c
}

// 
// Start address: 0x1045e0
int HumanDJMSInit(SubCharacter* scp)
{
	// Line 532, Address: 0x1045e0, Func Offset: 0
	// Line 533, Address: 0x1045e8, Func Offset: 0x8
	// Line 535, Address: 0x1045f4, Func Offset: 0x14
	// Line 536, Address: 0x1045f8, Func Offset: 0x18
	// Func End, Address: 0x104608, Func Offset: 0x28
}

// 
// Start address: 0x104610
void SubCharacter::HumanDJMSFunction()
{
	_AnimeInfo* aip;
	// Line 548, Address: 0x104610, Func Offset: 0
	// Line 553, Address: 0x104620, Func Offset: 0x10
	// Line 558, Address: 0x104640, Func Offset: 0x30
	// Line 561, Address: 0x104648, Func Offset: 0x38
	// Line 565, Address: 0x104678, Func Offset: 0x68
	// Line 566, Address: 0x104684, Func Offset: 0x74
	// Line 570, Address: 0x10468c, Func Offset: 0x7c
	// Line 573, Address: 0x104694, Func Offset: 0x84
	// Line 578, Address: 0x1046a0, Func Offset: 0x90
	// Func End, Address: 0x1046b4, Func Offset: 0xa4
}

// 
// Start address: 0x1046c0
void SubCharacter::DemoPlayerSetHeight()
{
	_CL_VHIT_RESULT floor;
	float ep[4];
	float sp[4];
	// Line 594, Address: 0x1046c0, Func Offset: 0
	// Line 598, Address: 0x1046d0, Func Offset: 0x10
	// Line 599, Address: 0x1046dc, Func Offset: 0x1c
	// Line 600, Address: 0x1046e8, Func Offset: 0x28
	// Line 601, Address: 0x104700, Func Offset: 0x40
	// Line 602, Address: 0x10471c, Func Offset: 0x5c
	// Line 604, Address: 0x10472c, Func Offset: 0x6c
	// Line 605, Address: 0x10473c, Func Offset: 0x7c
	// Line 606, Address: 0x104744, Func Offset: 0x84
	// Line 607, Address: 0x104768, Func Offset: 0xa8
	// Line 608, Address: 0x104770, Func Offset: 0xb0
	// Line 609, Address: 0x104774, Func Offset: 0xb4
	// Line 614, Address: 0x104784, Func Offset: 0xc4
	// Func End, Address: 0x104798, Func Offset: 0xd8
}

// 
// Start address: 0x1047a0
void shCharacterSetHumanDJMSLow(SubCharacter* scp)
{
	// Line 625, Address: 0x1047a0, Func Offset: 0
	// Line 626, Address: 0x1047a8, Func Offset: 0x8
	// Line 627, Address: 0x1047b8, Func Offset: 0x18
	// Func End, Address: 0x1047c8, Func Offset: 0x28
}

// 
// Start address: 0x1047d0
int shCharacterHumanDJAMESAnimeSet(SubCharacter* scp, int anime_id)
{
	_AnimeInfo* aip;
	short id;
	// Line 641, Address: 0x1047d0, Func Offset: 0
	// Line 645, Address: 0x1047ec, Func Offset: 0x1c
	// Line 647, Address: 0x1047fc, Func Offset: 0x2c
	// Line 650, Address: 0x104814, Func Offset: 0x44
	// Line 651, Address: 0x104830, Func Offset: 0x60
	// Line 665, Address: 0x10486c, Func Offset: 0x9c
	// Line 672, Address: 0x104898, Func Offset: 0xc8
	// Line 674, Address: 0x1048a4, Func Offset: 0xd4
	// Line 676, Address: 0x1048a8, Func Offset: 0xd8
	// Func End, Address: 0x1048c4, Func Offset: 0xf4
}

// 
// Start address: 0x1048d0
int HumanRDJMSInit(SubCharacter* scp)
{
	// Line 702, Address: 0x1048d0, Func Offset: 0
	// Line 703, Address: 0x1048e0, Func Offset: 0x10
	// Line 705, Address: 0x1048ec, Func Offset: 0x1c
	// Line 708, Address: 0x1048f4, Func Offset: 0x24
	// Line 710, Address: 0x104918, Func Offset: 0x48
	// Line 711, Address: 0x104920, Func Offset: 0x50
	// Line 712, Address: 0x104930, Func Offset: 0x60
	// Line 714, Address: 0x104938, Func Offset: 0x68
	// Line 715, Address: 0x104944, Func Offset: 0x74
	// Line 718, Address: 0x104954, Func Offset: 0x84
	// Line 719, Address: 0x104958, Func Offset: 0x88
	// Func End, Address: 0x10496c, Func Offset: 0x9c
}

// 
// Start address: 0x104970
void SubCharacter::HumanRDJMSFunction()
{
	SubCharacter* scp;
	// Line 722, Address: 0x104970, Func Offset: 0
	// Line 725, Address: 0x104980, Func Offset: 0x10
	// Line 727, Address: 0x1049a0, Func Offset: 0x30
	// Line 728, Address: 0x1049a8, Func Offset: 0x38
	// Line 729, Address: 0x1049b4, Func Offset: 0x44
	// Line 732, Address: 0x1049bc, Func Offset: 0x4c
	// Line 733, Address: 0x1049d4, Func Offset: 0x64
	// Line 736, Address: 0x1049dc, Func Offset: 0x6c
	// Line 739, Address: 0x104a0c, Func Offset: 0x9c
	// Line 740, Address: 0x104a24, Func Offset: 0xb4
	// Line 741, Address: 0x104a2c, Func Offset: 0xbc
	// Line 742, Address: 0x104a34, Func Offset: 0xc4
	// Line 743, Address: 0x104a40, Func Offset: 0xd0
	// Line 746, Address: 0x104a48, Func Offset: 0xd8
	// Line 752, Address: 0x104a50, Func Offset: 0xe0
	// Line 754, Address: 0x104a68, Func Offset: 0xf8
	// Line 755, Address: 0x104a70, Func Offset: 0x100
	// Line 756, Address: 0x104a78, Func Offset: 0x108
	// Line 757, Address: 0x104a84, Func Offset: 0x114
	// Line 760, Address: 0x104a8c, Func Offset: 0x11c
	// Line 761, Address: 0x104a94, Func Offset: 0x124
	// Line 762, Address: 0x104a9c, Func Offset: 0x12c
	// Line 763, Address: 0x104ab4, Func Offset: 0x144
	// Line 764, Address: 0x104ad0, Func Offset: 0x160
	// Line 765, Address: 0x104ae8, Func Offset: 0x178
	// Line 766, Address: 0x104af0, Func Offset: 0x180
	// Line 773, Address: 0x104b08, Func Offset: 0x198
	// Func End, Address: 0x104b1c, Func Offset: 0x1ac
}

// 
// Start address: 0x104b20
void shCharacterSetHumanRDJMSLow(SubCharacter* scp)
{
	// Line 788, Address: 0x104b20, Func Offset: 0
	// Line 789, Address: 0x104b28, Func Offset: 0x8
	// Line 790, Address: 0x104b38, Func Offset: 0x18
	// Func End, Address: 0x104b48, Func Offset: 0x28
}

