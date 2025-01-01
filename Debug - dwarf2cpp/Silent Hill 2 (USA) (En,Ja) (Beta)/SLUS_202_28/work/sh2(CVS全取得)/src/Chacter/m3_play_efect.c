typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct JamesSoundInfo;
typedef struct SubCharacter;
typedef struct shBattleFight;
typedef struct _AnimeInfo;
typedef struct shBattleShot;
typedef struct shSkelton;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct _CL_VHIT_WALL;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef struct PAD_3D;
typedef union _anon0;
typedef struct _CL_VHIT_RESULT;
typedef union _anon1;
typedef struct PAD_2D;
typedef struct PAD_INFO;
typedef struct _anon2;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct _anon3;
typedef struct shPlayerWork;

typedef void(*type_38)(SubCharacter*);
typedef void(*type_42)(SubCharacter*);

typedef JamesSoundInfo type_0[4];
typedef _AnimeInfo type_1[20];
typedef _AnimeInfo type_2[34];
typedef _AnimeInfo type_3[17];
typedef unsigned int type_4[9];
typedef _AnimeInfo type_5[17];
typedef unsigned char type_6[20];
typedef JamesSoundInfo type_7[4];
typedef float type_8[7];
typedef unsigned char type_9[0];
typedef _AnimeInfo type_10[33];
typedef unsigned char type_11[0];
typedef unsigned char type_12[2];
typedef float type_13[4];
typedef unsigned char type_14[0];
typedef float type_15[4];
typedef float type_16[4][4];
typedef unsigned char type_17[14];
typedef unsigned char type_18[0];
typedef _AnimeInfo type_19[24];
typedef unsigned char type_20[0];
typedef unsigned char type_21[0];
typedef float type_22[7];
typedef unsigned char type_23[0];
typedef unsigned int type_24[32];
typedef unsigned char type_25[0];
typedef _AnimeInfo type_26[5];
typedef unsigned char type_27[69];
typedef PAD_INFO type_28[10];
typedef float type_29[4];
typedef shAttackInfo type_30[66];
typedef _AnimeInfo type_31[33];
typedef float type_32[2];
typedef float type_33[7];
typedef unsigned char type_34[4];
typedef unsigned char type_35[4];
typedef float type_36[4][2];
typedef _AnimeInfo type_37[11];
typedef unsigned char type_39[14];
typedef _AnimeInfo type_40[30];
typedef float type_41[7];
typedef float type_43[4];
typedef float type_44[4][4];
typedef unsigned char type_45[4];
typedef unsigned int type_46[32];
typedef unsigned char type_47[2];
typedef unsigned char type_48[2];
typedef _AnimeInfo type_49[17];
typedef float type_50[7];
typedef unsigned char type_51[97];

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

struct JamesSoundInfo
{
	float vol;
	char frame;
	char domain;
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

	int shJamesSoundOn(float vol, int se_name);
};

struct shBattleFight
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
	char pad;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
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

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
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

struct _anon3
{
	float d[4][4];
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

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
_AnimeInfo pjames_anim[34];
_AnimeInfo pjames_hg_anim[11];
_AnimeInfo pjames_sg_anim[17];
_AnimeInfo pjames_rg_anim[5];
_AnimeInfo pjames_sp_anim[17];
_AnimeInfo pjames_ka_anim[33];
_AnimeInfo pjames_pi_anim[33];
_AnimeInfo pjames_na_anim[17];
_AnimeInfo pjames_cs_anim[24];
_AnimeInfo pjames_demo_anim[30];
float jms_walk_spd_ana[7];
float jms_back_spd_ana[7];
float jms_swalk_spd_ana[7];
float jms_run_spd_ana[7];
float jms_srun_spd_ana[7];
unsigned int pjames_act_with_wep_flag[9];
unsigned int pjames_upper_flag[32];
unsigned int pjames_lower_flag[32];
_AnimeInfo pjames_stage_anim[20];
shPlayerWork sh2jms;
unsigned char __show_kodou_h_00[0];
unsigned char __show_kodou_h_01[0];
unsigned char __show_kodou_h_02[0];
unsigned char __show_kodou_h_03[0];
unsigned char __show_weapon_l_03[0];
unsigned char __show_weapon_l_02[0];
unsigned char __show_weapon_l_01[0];
unsigned char __show_weapon_l_00[0];

void PlayerCheckEffect();
void shJamesEffectFoot(int type);
int shJamesSoundOn(float vol, int se_name);
void PlayerCheckSoundLower();
void PlayerCheckSoundUpper();
void PlayerCheckSound();
void PlayerCheckDualShock();
int PlayerJamesIsInSquare(float* pos0, float* pos1);

// 
// Start address: 0x284130
void PlayerCheckEffect()
{
	int n;
	short call_frame;
	short now_frame;
	_AnimeInfo* anim_p;
	// Line 92, Address: 0x284130, Func Offset: 0
	// Line 94, Address: 0x284140, Func Offset: 0x10
	// Line 96, Address: 0x284158, Func Offset: 0x28
	// Line 100, Address: 0x28415c, Func Offset: 0x2c
	// Line 102, Address: 0x284178, Func Offset: 0x48
	// Line 104, Address: 0x284194, Func Offset: 0x64
	// Line 106, Address: 0x2841c8, Func Offset: 0x98
	// Line 108, Address: 0x2841ec, Func Offset: 0xbc
	// Line 109, Address: 0x2841f0, Func Offset: 0xc0
	// Line 111, Address: 0x2841f8, Func Offset: 0xc8
	// Line 114, Address: 0x2841fc, Func Offset: 0xcc
	// Line 116, Address: 0x284204, Func Offset: 0xd4
	// Line 117, Address: 0x284214, Func Offset: 0xe4
	// Line 119, Address: 0x284218, Func Offset: 0xe8
	// Line 121, Address: 0x284220, Func Offset: 0xf0
	// Line 122, Address: 0x284230, Func Offset: 0x100
	// Line 129, Address: 0x284234, Func Offset: 0x104
	// Line 130, Address: 0x284244, Func Offset: 0x114
	// Line 131, Address: 0x284258, Func Offset: 0x128
	// Line 132, Address: 0x284268, Func Offset: 0x138
	// Line 133, Address: 0x28427c, Func Offset: 0x14c
	// Line 134, Address: 0x284280, Func Offset: 0x150
	// Line 135, Address: 0x284288, Func Offset: 0x158
	// Line 137, Address: 0x28428c, Func Offset: 0x15c
	// Line 138, Address: 0x284294, Func Offset: 0x164
	// Line 139, Address: 0x2842b4, Func Offset: 0x184
	// Line 140, Address: 0x2842b8, Func Offset: 0x188
	// Line 141, Address: 0x2842c4, Func Offset: 0x194
	// Line 142, Address: 0x2842cc, Func Offset: 0x19c
	// Line 145, Address: 0x2842d4, Func Offset: 0x1a4
	// Func End, Address: 0x2842ec, Func Offset: 0x1bc
}

// 
// Start address: 0x2842f0
void shJamesEffectFoot(int type)
{
	int p_heel;
	int p_toe;
	float m_heel[4][4];
	float m_toe[4][4];
	// Line 153, Address: 0x2842f0, Func Offset: 0
	// Line 157, Address: 0x284304, Func Offset: 0x14
	// Line 158, Address: 0x28430c, Func Offset: 0x1c
	// Line 159, Address: 0x284310, Func Offset: 0x20
	// Line 160, Address: 0x284314, Func Offset: 0x24
	// Line 161, Address: 0x28431c, Func Offset: 0x2c
	// Line 162, Address: 0x284320, Func Offset: 0x30
	// Line 165, Address: 0x284324, Func Offset: 0x34
	// Line 166, Address: 0x284330, Func Offset: 0x40
	// Line 168, Address: 0x284340, Func Offset: 0x50
	// Line 169, Address: 0x284360, Func Offset: 0x70
	// Func End, Address: 0x284378, Func Offset: 0x88
}

// 
// Start address: 0x284380
int SubCharacter::shJamesSoundOn(float vol, int se_name)
{
	// Line 187, Address: 0x284380, Func Offset: 0
	// Line 189, Address: 0x284388, Func Offset: 0x8
	// Line 191, Address: 0x2843c4, Func Offset: 0x44
	// Line 192, Address: 0x2843dc, Func Offset: 0x5c
	// Line 193, Address: 0x2843e0, Func Offset: 0x60
	// Func End, Address: 0x2843f0, Func Offset: 0x70
}

// 
// Start address: 0x2843f0
void PlayerCheckSoundLower()
{
	float pos1[4];
	float pos0[4];
	float pos1[4];
	float pos0[4];
	float pos1[4];
	float pos0[4];
	float pos1[4];
	float pos0[4];
	_AnimeInfo* a_info;
	JamesSoundInfo se_info[4];
	int pitch;
	short frame;
	unsigned short se_l;
	unsigned short se_r;
	unsigned short se;
	unsigned int material;
	int i;
	// Line 201, Address: 0x2843f0, Func Offset: 0
	// Line 209, Address: 0x284410, Func Offset: 0x20
	// Line 215, Address: 0x28442c, Func Offset: 0x3c
	// Line 219, Address: 0x284444, Func Offset: 0x54
	// Line 226, Address: 0x284460, Func Offset: 0x70
	// Line 227, Address: 0x284468, Func Offset: 0x78
	// Line 229, Address: 0x284470, Func Offset: 0x80
	// Line 236, Address: 0x284554, Func Offset: 0x164
	// Line 239, Address: 0x284590, Func Offset: 0x1a0
	// Line 240, Address: 0x284598, Func Offset: 0x1a8
	// Line 241, Address: 0x2845a0, Func Offset: 0x1b0
	// Line 243, Address: 0x2845a8, Func Offset: 0x1b8
	// Line 244, Address: 0x2845b4, Func Offset: 0x1c4
	// Line 245, Address: 0x2845b8, Func Offset: 0x1c8
	// Line 246, Address: 0x2845bc, Func Offset: 0x1cc
	// Line 247, Address: 0x2845c4, Func Offset: 0x1d4
	// Line 248, Address: 0x2845cc, Func Offset: 0x1dc
	// Line 249, Address: 0x2845d4, Func Offset: 0x1e4
	// Line 251, Address: 0x2845dc, Func Offset: 0x1ec
	// Line 252, Address: 0x2845e8, Func Offset: 0x1f8
	// Line 253, Address: 0x2845ec, Func Offset: 0x1fc
	// Line 256, Address: 0x2845f4, Func Offset: 0x204
	// Line 266, Address: 0x2845fc, Func Offset: 0x20c
	// Line 267, Address: 0x284610, Func Offset: 0x220
	// Line 268, Address: 0x284618, Func Offset: 0x228
	// Line 269, Address: 0x284620, Func Offset: 0x230
	// Line 270, Address: 0x284628, Func Offset: 0x238
	// Line 271, Address: 0x284630, Func Offset: 0x240
	// Line 273, Address: 0x284638, Func Offset: 0x248
	// Line 274, Address: 0x284644, Func Offset: 0x254
	// Line 275, Address: 0x284650, Func Offset: 0x260
	// Line 277, Address: 0x284654, Func Offset: 0x264
	// Line 280, Address: 0x28465c, Func Offset: 0x26c
	// Line 281, Address: 0x284664, Func Offset: 0x274
	// Line 282, Address: 0x28466c, Func Offset: 0x27c
	// Line 296, Address: 0x284674, Func Offset: 0x284
	// Line 297, Address: 0x28467c, Func Offset: 0x28c
	// Line 298, Address: 0x284684, Func Offset: 0x294
	// Line 299, Address: 0x28468c, Func Offset: 0x29c
	// Line 300, Address: 0x284694, Func Offset: 0x2a4
	// Line 301, Address: 0x2846a0, Func Offset: 0x2b0
	// Line 302, Address: 0x2846ac, Func Offset: 0x2bc
	// Line 303, Address: 0x2846b8, Func Offset: 0x2c8
	// Line 304, Address: 0x2846c4, Func Offset: 0x2d4
	// Line 307, Address: 0x2846cc, Func Offset: 0x2dc
	// Line 309, Address: 0x2846fc, Func Offset: 0x30c
	// Line 310, Address: 0x284704, Func Offset: 0x314
	// Line 311, Address: 0x28470c, Func Offset: 0x31c
	// Line 312, Address: 0x284714, Func Offset: 0x324
	// Line 313, Address: 0x28471c, Func Offset: 0x32c
	// Line 314, Address: 0x284728, Func Offset: 0x338
	// Line 315, Address: 0x284730, Func Offset: 0x340
	// Line 316, Address: 0x28473c, Func Offset: 0x34c
	// Line 317, Address: 0x284748, Func Offset: 0x358
	// Line 319, Address: 0x284750, Func Offset: 0x360
	// Line 320, Address: 0x284758, Func Offset: 0x368
	// Line 321, Address: 0x284760, Func Offset: 0x370
	// Line 322, Address: 0x284768, Func Offset: 0x378
	// Line 323, Address: 0x284770, Func Offset: 0x380
	// Line 324, Address: 0x28477c, Func Offset: 0x38c
	// Line 325, Address: 0x284780, Func Offset: 0x390
	// Line 326, Address: 0x28478c, Func Offset: 0x39c
	// Line 327, Address: 0x284798, Func Offset: 0x3a8
	// Line 329, Address: 0x2847a0, Func Offset: 0x3b0
	// Line 330, Address: 0x2847a8, Func Offset: 0x3b8
	// Line 331, Address: 0x2847b0, Func Offset: 0x3c0
	// Line 332, Address: 0x2847b8, Func Offset: 0x3c8
	// Line 333, Address: 0x2847bc, Func Offset: 0x3cc
	// Line 334, Address: 0x2847c8, Func Offset: 0x3d8
	// Line 335, Address: 0x2847cc, Func Offset: 0x3dc
	// Line 336, Address: 0x2847d8, Func Offset: 0x3e8
	// Line 337, Address: 0x2847e4, Func Offset: 0x3f4
	// Line 339, Address: 0x2847ec, Func Offset: 0x3fc
	// Line 340, Address: 0x2847f4, Func Offset: 0x404
	// Line 341, Address: 0x2847fc, Func Offset: 0x40c
	// Line 342, Address: 0x284808, Func Offset: 0x418
	// Line 343, Address: 0x28480c, Func Offset: 0x41c
	// Line 345, Address: 0x284814, Func Offset: 0x424
	// Line 346, Address: 0x28481c, Func Offset: 0x42c
	// Line 347, Address: 0x284824, Func Offset: 0x434
	// Line 348, Address: 0x28482c, Func Offset: 0x43c
	// Line 349, Address: 0x284838, Func Offset: 0x448
	// Line 350, Address: 0x28483c, Func Offset: 0x44c
	// Line 351, Address: 0x284848, Func Offset: 0x458
	// Line 353, Address: 0x284850, Func Offset: 0x460
	// Line 354, Address: 0x284858, Func Offset: 0x468
	// Line 355, Address: 0x284860, Func Offset: 0x470
	// Line 356, Address: 0x28486c, Func Offset: 0x47c
	// Line 371, Address: 0x284870, Func Offset: 0x480
	// Line 372, Address: 0x28487c, Func Offset: 0x48c
	// Line 373, Address: 0x284884, Func Offset: 0x494
	// Line 374, Address: 0x284898, Func Offset: 0x4a8
	// Line 376, Address: 0x2848a4, Func Offset: 0x4b4
	// Line 377, Address: 0x2848ac, Func Offset: 0x4bc
	// Line 378, Address: 0x2848c0, Func Offset: 0x4d0
	// Line 381, Address: 0x2848d0, Func Offset: 0x4e0
	// Line 383, Address: 0x2848f8, Func Offset: 0x508
	// Line 384, Address: 0x2848fc, Func Offset: 0x50c
	// Line 397, Address: 0x284904, Func Offset: 0x514
	// Line 400, Address: 0x284908, Func Offset: 0x518
	// Line 402, Address: 0x284910, Func Offset: 0x520
	// Line 403, Address: 0x284914, Func Offset: 0x524
	// Line 405, Address: 0x28491c, Func Offset: 0x52c
	// Line 406, Address: 0x284920, Func Offset: 0x530
	// Line 408, Address: 0x284928, Func Offset: 0x538
	// Line 409, Address: 0x28492c, Func Offset: 0x53c
	// Line 411, Address: 0x284934, Func Offset: 0x544
	// Line 412, Address: 0x284938, Func Offset: 0x548
	// Line 414, Address: 0x284940, Func Offset: 0x550
	// Line 418, Address: 0x284968, Func Offset: 0x578
	// Line 422, Address: 0x28496c, Func Offset: 0x57c
	// Line 424, Address: 0x284974, Func Offset: 0x584
	// Line 427, Address: 0x284978, Func Offset: 0x588
	// Line 429, Address: 0x284980, Func Offset: 0x590
	// Line 430, Address: 0x284990, Func Offset: 0x5a0
	// Line 431, Address: 0x284994, Func Offset: 0x5a4
	// Line 432, Address: 0x28499c, Func Offset: 0x5ac
	// Line 448, Address: 0x2849a0, Func Offset: 0x5b0
	// Line 450, Address: 0x2849a8, Func Offset: 0x5b8
	// Line 451, Address: 0x2849ac, Func Offset: 0x5bc
	// Line 453, Address: 0x2849b4, Func Offset: 0x5c4
	// Line 466, Address: 0x284a00, Func Offset: 0x610
	// Line 467, Address: 0x284a14, Func Offset: 0x624
	// Line 469, Address: 0x284a28, Func Offset: 0x638
	// Line 471, Address: 0x284a38, Func Offset: 0x648
	// Line 475, Address: 0x284a3c, Func Offset: 0x64c
	// Line 476, Address: 0x284a44, Func Offset: 0x654
	// Line 479, Address: 0x284a48, Func Offset: 0x658
	// Line 483, Address: 0x284a50, Func Offset: 0x660
	// Line 484, Address: 0x284a64, Func Offset: 0x674
	// Line 486, Address: 0x284a78, Func Offset: 0x688
	// Line 488, Address: 0x284a88, Func Offset: 0x698
	// Line 492, Address: 0x284a8c, Func Offset: 0x69c
	// Line 493, Address: 0x284a94, Func Offset: 0x6a4
	// Line 496, Address: 0x284a98, Func Offset: 0x6a8
	// Line 500, Address: 0x284aa0, Func Offset: 0x6b0
	// Line 501, Address: 0x284ab4, Func Offset: 0x6c4
	// Line 503, Address: 0x284ac8, Func Offset: 0x6d8
	// Line 505, Address: 0x284ad8, Func Offset: 0x6e8
	// Line 509, Address: 0x284adc, Func Offset: 0x6ec
	// Line 510, Address: 0x284ae4, Func Offset: 0x6f4
	// Line 513, Address: 0x284ae8, Func Offset: 0x6f8
	// Line 517, Address: 0x284af0, Func Offset: 0x700
	// Line 518, Address: 0x284b04, Func Offset: 0x714
	// Line 520, Address: 0x284b18, Func Offset: 0x728
	// Line 522, Address: 0x284b28, Func Offset: 0x738
	// Line 526, Address: 0x284b2c, Func Offset: 0x73c
	// Line 527, Address: 0x284b34, Func Offset: 0x744
	// Line 530, Address: 0x284b38, Func Offset: 0x748
	// Line 532, Address: 0x284b40, Func Offset: 0x750
	// Line 533, Address: 0x284b44, Func Offset: 0x754
	// Line 535, Address: 0x284b4c, Func Offset: 0x75c
	// Line 538, Address: 0x284b50, Func Offset: 0x760
	// Line 540, Address: 0x284b58, Func Offset: 0x768
	// Line 541, Address: 0x284b5c, Func Offset: 0x76c
	// Line 543, Address: 0x284b64, Func Offset: 0x774
	// Line 544, Address: 0x284b68, Func Offset: 0x778
	// Line 546, Address: 0x284b70, Func Offset: 0x780
	// Line 547, Address: 0x284b74, Func Offset: 0x784
	// Line 550, Address: 0x284b7c, Func Offset: 0x78c
	// Line 553, Address: 0x284b80, Func Offset: 0x790
	// Line 554, Address: 0x284b88, Func Offset: 0x798
	// Line 555, Address: 0x284b8c, Func Offset: 0x79c
	// Line 556, Address: 0x284b94, Func Offset: 0x7a4
	// Line 558, Address: 0x284b98, Func Offset: 0x7a8
	// Line 561, Address: 0x284bac, Func Offset: 0x7bc
	// Line 563, Address: 0x284c84, Func Offset: 0x894
	// Line 564, Address: 0x284c8c, Func Offset: 0x89c
	// Line 566, Address: 0x284c94, Func Offset: 0x8a4
	// Line 569, Address: 0x284cd0, Func Offset: 0x8e0
	// Line 570, Address: 0x284cd8, Func Offset: 0x8e8
	// Line 571, Address: 0x284ce0, Func Offset: 0x8f0
	// Line 573, Address: 0x284ce8, Func Offset: 0x8f8
	// Line 574, Address: 0x284cf0, Func Offset: 0x900
	// Line 575, Address: 0x284cf8, Func Offset: 0x908
	// Line 576, Address: 0x284cfc, Func Offset: 0x90c
	// Line 578, Address: 0x284d04, Func Offset: 0x914
	// Line 579, Address: 0x284d0c, Func Offset: 0x91c
	// Line 582, Address: 0x284d10, Func Offset: 0x920
	// Line 594, Address: 0x284d18, Func Offset: 0x928
	// Line 595, Address: 0x284d20, Func Offset: 0x930
	// Line 597, Address: 0x284d28, Func Offset: 0x938
	// Line 600, Address: 0x284d30, Func Offset: 0x940
	// Line 601, Address: 0x284d38, Func Offset: 0x948
	// Line 602, Address: 0x284d40, Func Offset: 0x950
	// Line 608, Address: 0x284d48, Func Offset: 0x958
	// Line 612, Address: 0x284d94, Func Offset: 0x9a4
	// Line 613, Address: 0x284d9c, Func Offset: 0x9ac
	// Line 614, Address: 0x284da4, Func Offset: 0x9b4
	// Line 615, Address: 0x284da8, Func Offset: 0x9b8
	// Line 616, Address: 0x284dac, Func Offset: 0x9bc
	// Line 618, Address: 0x284db4, Func Offset: 0x9c4
	// Line 619, Address: 0x284dbc, Func Offset: 0x9cc
	// Line 620, Address: 0x284dc4, Func Offset: 0x9d4
	// Line 621, Address: 0x284dc8, Func Offset: 0x9d8
	// Line 622, Address: 0x284dcc, Func Offset: 0x9dc
	// Line 624, Address: 0x284dd4, Func Offset: 0x9e4
	// Line 625, Address: 0x284ddc, Func Offset: 0x9ec
	// Line 626, Address: 0x284de4, Func Offset: 0x9f4
	// Line 627, Address: 0x284de8, Func Offset: 0x9f8
	// Line 628, Address: 0x284dec, Func Offset: 0x9fc
	// Line 630, Address: 0x284df4, Func Offset: 0xa04
	// Line 635, Address: 0x284e1c, Func Offset: 0xa2c
	// Line 636, Address: 0x284e24, Func Offset: 0xa34
	// Line 637, Address: 0x284e2c, Func Offset: 0xa3c
	// Line 638, Address: 0x284e30, Func Offset: 0xa40
	// Line 642, Address: 0x284e34, Func Offset: 0xa44
	// Line 643, Address: 0x284e40, Func Offset: 0xa50
	// Line 644, Address: 0x284e54, Func Offset: 0xa64
	// Line 645, Address: 0x284e64, Func Offset: 0xa74
	// Line 646, Address: 0x284e70, Func Offset: 0xa80
	// Line 647, Address: 0x284e88, Func Offset: 0xa98
	// Line 650, Address: 0x284eac, Func Offset: 0xabc
	// Line 652, Address: 0x284ecc, Func Offset: 0xadc
	// Line 654, Address: 0x284ed8, Func Offset: 0xae8
	// Line 655, Address: 0x284f08, Func Offset: 0xb18
	// Line 658, Address: 0x284f10, Func Offset: 0xb20
	// Line 660, Address: 0x284f30, Func Offset: 0xb40
	// Line 662, Address: 0x284f3c, Func Offset: 0xb4c
	// Line 665, Address: 0x284f6c, Func Offset: 0xb7c
	// Line 666, Address: 0x284f70, Func Offset: 0xb80
	// Line 667, Address: 0x284f78, Func Offset: 0xb88
	// Line 668, Address: 0x284f80, Func Offset: 0xb90
	// Line 672, Address: 0x284f90, Func Offset: 0xba0
	// Line 674, Address: 0x284fa4, Func Offset: 0xbb4
	// Func End, Address: 0x284fcc, Func Offset: 0xbdc
}

// 
// Start address: 0x284fd0
void PlayerCheckSoundUpper()
{
	JamesSoundInfo se_info[4];
	short frame;
	unsigned int material;
	unsigned short se2;
	unsigned short se;
	int i;
	_AnimeInfo* anim_p;
	// Line 685, Address: 0x284fd0, Func Offset: 0
	// Line 687, Address: 0x284ff0, Func Offset: 0x20
	// Line 693, Address: 0x285008, Func Offset: 0x38
	// Line 701, Address: 0x285024, Func Offset: 0x54
	// Line 702, Address: 0x285040, Func Offset: 0x70
	// Line 705, Address: 0x285048, Func Offset: 0x78
	// Line 710, Address: 0x2850fc, Func Offset: 0x12c
	// Line 711, Address: 0x285110, Func Offset: 0x140
	// Line 712, Address: 0x285114, Func Offset: 0x144
	// Line 714, Address: 0x285118, Func Offset: 0x148
	// Line 718, Address: 0x285120, Func Offset: 0x150
	// Line 720, Address: 0x285150, Func Offset: 0x180
	// Line 721, Address: 0x285154, Func Offset: 0x184
	// Line 722, Address: 0x285170, Func Offset: 0x1a0
	// Line 724, Address: 0x285178, Func Offset: 0x1a8
	// Line 725, Address: 0x28517c, Func Offset: 0x1ac
	// Line 726, Address: 0x285198, Func Offset: 0x1c8
	// Line 732, Address: 0x2851a0, Func Offset: 0x1d0
	// Line 733, Address: 0x2851a4, Func Offset: 0x1d4
	// Line 734, Address: 0x2851c0, Func Offset: 0x1f0
	// Line 736, Address: 0x2851c8, Func Offset: 0x1f8
	// Line 739, Address: 0x2851ec, Func Offset: 0x21c
	// Line 742, Address: 0x2851f0, Func Offset: 0x220
	// Line 744, Address: 0x2851f8, Func Offset: 0x228
	// Line 746, Address: 0x285210, Func Offset: 0x240
	// Line 747, Address: 0x285214, Func Offset: 0x244
	// Line 749, Address: 0x28521c, Func Offset: 0x24c
	// Line 753, Address: 0x285220, Func Offset: 0x250
	// Line 755, Address: 0x285228, Func Offset: 0x258
	// Line 756, Address: 0x285238, Func Offset: 0x268
	// Line 758, Address: 0x28523c, Func Offset: 0x26c
	// Line 760, Address: 0x285244, Func Offset: 0x274
	// Line 763, Address: 0x285268, Func Offset: 0x298
	// Line 768, Address: 0x285270, Func Offset: 0x2a0
	// Line 771, Address: 0x285278, Func Offset: 0x2a8
	// Line 772, Address: 0x285284, Func Offset: 0x2b4
	// Line 773, Address: 0x285298, Func Offset: 0x2c8
	// Line 775, Address: 0x2852a4, Func Offset: 0x2d4
	// Line 776, Address: 0x2852ac, Func Offset: 0x2dc
	// Line 777, Address: 0x2852c0, Func Offset: 0x2f0
	// Line 780, Address: 0x2852d0, Func Offset: 0x300
	// Line 782, Address: 0x2852f8, Func Offset: 0x328
	// Line 783, Address: 0x2852fc, Func Offset: 0x32c
	// Line 785, Address: 0x285304, Func Offset: 0x334
	// Line 786, Address: 0x285308, Func Offset: 0x338
	// Line 788, Address: 0x285310, Func Offset: 0x340
	// Line 789, Address: 0x285314, Func Offset: 0x344
	// Line 791, Address: 0x28531c, Func Offset: 0x34c
	// Line 792, Address: 0x285320, Func Offset: 0x350
	// Line 794, Address: 0x285328, Func Offset: 0x358
	// Line 795, Address: 0x28532c, Func Offset: 0x35c
	// Line 797, Address: 0x285334, Func Offset: 0x364
	// Line 798, Address: 0x285338, Func Offset: 0x368
	// Line 800, Address: 0x285340, Func Offset: 0x370
	// Line 801, Address: 0x285344, Func Offset: 0x374
	// Line 803, Address: 0x28534c, Func Offset: 0x37c
	// Line 808, Address: 0x28538c, Func Offset: 0x3bc
	// Line 809, Address: 0x285390, Func Offset: 0x3c0
	// Line 811, Address: 0x285398, Func Offset: 0x3c8
	// Line 814, Address: 0x28539c, Func Offset: 0x3cc
	// Line 816, Address: 0x2853a4, Func Offset: 0x3d4
	// Line 817, Address: 0x2853a8, Func Offset: 0x3d8
	// Line 819, Address: 0x2853b0, Func Offset: 0x3e0
	// Line 820, Address: 0x2853b4, Func Offset: 0x3e4
	// Line 822, Address: 0x2853bc, Func Offset: 0x3ec
	// Line 823, Address: 0x2853c0, Func Offset: 0x3f0
	// Line 825, Address: 0x2853c8, Func Offset: 0x3f8
	// Line 826, Address: 0x2853cc, Func Offset: 0x3fc
	// Line 828, Address: 0x2853d4, Func Offset: 0x404
	// Line 829, Address: 0x2853d8, Func Offset: 0x408
	// Line 831, Address: 0x2853e0, Func Offset: 0x410
	// Line 835, Address: 0x2853e4, Func Offset: 0x414
	// Line 838, Address: 0x2853ec, Func Offset: 0x41c
	// Line 839, Address: 0x2853fc, Func Offset: 0x42c
	// Line 841, Address: 0x285400, Func Offset: 0x430
	// Line 844, Address: 0x285408, Func Offset: 0x438
	// Line 845, Address: 0x285418, Func Offset: 0x448
	// Line 849, Address: 0x285440, Func Offset: 0x470
	// Line 850, Address: 0x285444, Func Offset: 0x474
	// Line 853, Address: 0x28544c, Func Offset: 0x47c
	// Line 854, Address: 0x285450, Func Offset: 0x480
	// Line 856, Address: 0x285458, Func Offset: 0x488
	// Line 857, Address: 0x28545c, Func Offset: 0x48c
	// Line 866, Address: 0x285464, Func Offset: 0x494
	// Line 870, Address: 0x285468, Func Offset: 0x498
	// Line 872, Address: 0x285470, Func Offset: 0x4a0
	// Line 873, Address: 0x285484, Func Offset: 0x4b4
	// Line 875, Address: 0x285488, Func Offset: 0x4b8
	// Line 877, Address: 0x285490, Func Offset: 0x4c0
	// Line 878, Address: 0x285494, Func Offset: 0x4c4
	// Line 880, Address: 0x28549c, Func Offset: 0x4cc
	// Line 881, Address: 0x2854ac, Func Offset: 0x4dc
	// Line 882, Address: 0x2854b0, Func Offset: 0x4e0
	// Line 884, Address: 0x2854dc, Func Offset: 0x50c
	// Line 885, Address: 0x2854e0, Func Offset: 0x510
	// Line 887, Address: 0x2854e8, Func Offset: 0x518
	// Line 890, Address: 0x2854ec, Func Offset: 0x51c
	// Line 892, Address: 0x2854f4, Func Offset: 0x524
	// Line 894, Address: 0x285538, Func Offset: 0x568
	// Line 895, Address: 0x28553c, Func Offset: 0x56c
	// Line 897, Address: 0x285544, Func Offset: 0x574
	// Line 898, Address: 0x285548, Func Offset: 0x578
	// Line 900, Address: 0x285550, Func Offset: 0x580
	// Line 903, Address: 0x285554, Func Offset: 0x584
	// Line 911, Address: 0x2855ec, Func Offset: 0x61c
	// Line 912, Address: 0x2855f0, Func Offset: 0x620
	// Line 914, Address: 0x2855f8, Func Offset: 0x628
	// Line 915, Address: 0x2855fc, Func Offset: 0x62c
	// Line 917, Address: 0x285604, Func Offset: 0x634
	// Line 918, Address: 0x285608, Func Offset: 0x638
	// Line 920, Address: 0x285610, Func Offset: 0x640
	// Line 921, Address: 0x28562c, Func Offset: 0x65c
	// Line 923, Address: 0x285634, Func Offset: 0x664
	// Line 941, Address: 0x285650, Func Offset: 0x680
	// Line 943, Address: 0x285658, Func Offset: 0x688
	// Line 944, Address: 0x28565c, Func Offset: 0x68c
	// Line 949, Address: 0x285660, Func Offset: 0x690
	// Line 954, Address: 0x28570c, Func Offset: 0x73c
	// Line 955, Address: 0x285720, Func Offset: 0x750
	// Line 956, Address: 0x285728, Func Offset: 0x758
	// Line 957, Address: 0x285730, Func Offset: 0x760
	// Line 958, Address: 0x28573c, Func Offset: 0x76c
	// Line 960, Address: 0x285740, Func Offset: 0x770
	// Line 963, Address: 0x285748, Func Offset: 0x778
	// Line 965, Address: 0x285778, Func Offset: 0x7a8
	// Line 967, Address: 0x28579c, Func Offset: 0x7cc
	// Line 968, Address: 0x2857a4, Func Offset: 0x7d4
	// Line 970, Address: 0x2857ac, Func Offset: 0x7dc
	// Line 973, Address: 0x2857b4, Func Offset: 0x7e4
	// Line 974, Address: 0x2857bc, Func Offset: 0x7ec
	// Line 976, Address: 0x2857c4, Func Offset: 0x7f4
	// Line 978, Address: 0x2857dc, Func Offset: 0x80c
	// Line 979, Address: 0x2857e4, Func Offset: 0x814
	// Line 980, Address: 0x2857ec, Func Offset: 0x81c
	// Line 982, Address: 0x2857f4, Func Offset: 0x824
	// Line 983, Address: 0x2857fc, Func Offset: 0x82c
	// Line 986, Address: 0x285804, Func Offset: 0x834
	// Line 988, Address: 0x28580c, Func Offset: 0x83c
	// Line 989, Address: 0x28581c, Func Offset: 0x84c
	// Line 990, Address: 0x285820, Func Offset: 0x850
	// Line 992, Address: 0x285828, Func Offset: 0x858
	// Line 994, Address: 0x285830, Func Offset: 0x860
	// Line 996, Address: 0x285854, Func Offset: 0x884
	// Line 997, Address: 0x28585c, Func Offset: 0x88c
	// Line 998, Address: 0x285864, Func Offset: 0x894
	// Line 999, Address: 0x28586c, Func Offset: 0x89c
	// Line 1000, Address: 0x285870, Func Offset: 0x8a0
	// Line 1002, Address: 0x285878, Func Offset: 0x8a8
	// Line 1003, Address: 0x28587c, Func Offset: 0x8ac
	// Line 1004, Address: 0x285884, Func Offset: 0x8b4
	// Line 1005, Address: 0x28588c, Func Offset: 0x8bc
	// Line 1008, Address: 0x285890, Func Offset: 0x8c0
	// Line 1010, Address: 0x285898, Func Offset: 0x8c8
	// Line 1011, Address: 0x2858a4, Func Offset: 0x8d4
	// Line 1013, Address: 0x2858c8, Func Offset: 0x8f8
	// Line 1014, Address: 0x2858d8, Func Offset: 0x908
	// Line 1015, Address: 0x2858e0, Func Offset: 0x910
	// Line 1016, Address: 0x2858e4, Func Offset: 0x914
	// Line 1017, Address: 0x2858ec, Func Offset: 0x91c
	// Line 1018, Address: 0x2858f4, Func Offset: 0x924
	// Line 1020, Address: 0x2858f8, Func Offset: 0x928
	// Line 1021, Address: 0x285900, Func Offset: 0x930
	// Line 1023, Address: 0x285908, Func Offset: 0x938
	// Line 1024, Address: 0x285918, Func Offset: 0x948
	// Line 1025, Address: 0x285920, Func Offset: 0x950
	// Line 1026, Address: 0x285924, Func Offset: 0x954
	// Line 1027, Address: 0x28592c, Func Offset: 0x95c
	// Line 1028, Address: 0x285934, Func Offset: 0x964
	// Line 1032, Address: 0x285938, Func Offset: 0x968
	// Line 1033, Address: 0x285944, Func Offset: 0x974
	// Line 1035, Address: 0x28598c, Func Offset: 0x9bc
	// Line 1037, Address: 0x285994, Func Offset: 0x9c4
	// Line 1038, Address: 0x2859a0, Func Offset: 0x9d0
	// Line 1040, Address: 0x2859d0, Func Offset: 0xa00
	// Line 1041, Address: 0x2859d8, Func Offset: 0xa08
	// Line 1042, Address: 0x2859e0, Func Offset: 0xa10
	// Line 1043, Address: 0x2859e8, Func Offset: 0xa18
	// Line 1045, Address: 0x2859f0, Func Offset: 0xa20
	// Line 1046, Address: 0x285a00, Func Offset: 0xa30
	// Line 1047, Address: 0x285a04, Func Offset: 0xa34
	// Line 1048, Address: 0x285a08, Func Offset: 0xa38
	// Line 1049, Address: 0x285a10, Func Offset: 0xa40
	// Line 1050, Address: 0x285a18, Func Offset: 0xa48
	// Line 1052, Address: 0x285a1c, Func Offset: 0xa4c
	// Line 1053, Address: 0x285a24, Func Offset: 0xa54
	// Line 1055, Address: 0x285a2c, Func Offset: 0xa5c
	// Line 1056, Address: 0x285a3c, Func Offset: 0xa6c
	// Line 1057, Address: 0x285a44, Func Offset: 0xa74
	// Line 1058, Address: 0x285a48, Func Offset: 0xa78
	// Line 1059, Address: 0x285a50, Func Offset: 0xa80
	// Line 1060, Address: 0x285a58, Func Offset: 0xa88
	// Line 1064, Address: 0x285a60, Func Offset: 0xa90
	// Line 1065, Address: 0x285a6c, Func Offset: 0xa9c
	// Line 1067, Address: 0x285ab4, Func Offset: 0xae4
	// Line 1069, Address: 0x285abc, Func Offset: 0xaec
	// Line 1070, Address: 0x285ac8, Func Offset: 0xaf8
	// Line 1072, Address: 0x285aec, Func Offset: 0xb1c
	// Line 1073, Address: 0x285afc, Func Offset: 0xb2c
	// Line 1074, Address: 0x285b04, Func Offset: 0xb34
	// Line 1075, Address: 0x285b08, Func Offset: 0xb38
	// Line 1076, Address: 0x285b10, Func Offset: 0xb40
	// Line 1077, Address: 0x285b18, Func Offset: 0xb48
	// Line 1079, Address: 0x285b1c, Func Offset: 0xb4c
	// Line 1080, Address: 0x285b24, Func Offset: 0xb54
	// Line 1082, Address: 0x285b2c, Func Offset: 0xb5c
	// Line 1083, Address: 0x285b3c, Func Offset: 0xb6c
	// Line 1084, Address: 0x285b40, Func Offset: 0xb70
	// Line 1085, Address: 0x285b44, Func Offset: 0xb74
	// Line 1086, Address: 0x285b4c, Func Offset: 0xb7c
	// Line 1087, Address: 0x285b50, Func Offset: 0xb80
	// Line 1091, Address: 0x285b54, Func Offset: 0xb84
	// Line 1092, Address: 0x285b60, Func Offset: 0xb90
	// Line 1096, Address: 0x285ba8, Func Offset: 0xbd8
	// Line 1099, Address: 0x285bb0, Func Offset: 0xbe0
	// Line 1100, Address: 0x285bb8, Func Offset: 0xbe8
	// Line 1101, Address: 0x285bc0, Func Offset: 0xbf0
	// Line 1103, Address: 0x285bc8, Func Offset: 0xbf8
	// Line 1104, Address: 0x285bd8, Func Offset: 0xc08
	// Line 1106, Address: 0x285c00, Func Offset: 0xc30
	// Line 1107, Address: 0x285c08, Func Offset: 0xc38
	// Line 1108, Address: 0x285c14, Func Offset: 0xc44
	// Line 1110, Address: 0x285c1c, Func Offset: 0xc4c
	// Line 1111, Address: 0x285c24, Func Offset: 0xc54
	// Line 1115, Address: 0x285c30, Func Offset: 0xc60
	// Line 1117, Address: 0x285c38, Func Offset: 0xc68
	// Line 1118, Address: 0x285c40, Func Offset: 0xc70
	// Line 1119, Address: 0x285c4c, Func Offset: 0xc7c
	// Line 1121, Address: 0x285c54, Func Offset: 0xc84
	// Line 1122, Address: 0x285c68, Func Offset: 0xc98
	// Line 1123, Address: 0x285c70, Func Offset: 0xca0
	// Line 1125, Address: 0x285c7c, Func Offset: 0xcac
	// Line 1127, Address: 0x285c84, Func Offset: 0xcb4
	// Line 1128, Address: 0x285c8c, Func Offset: 0xcbc
	// Line 1129, Address: 0x285c98, Func Offset: 0xcc8
	// Line 1131, Address: 0x285ca0, Func Offset: 0xcd0
	// Line 1132, Address: 0x285ca8, Func Offset: 0xcd8
	// Line 1133, Address: 0x285cb4, Func Offset: 0xce4
	// Line 1134, Address: 0x285cbc, Func Offset: 0xcec
	// Line 1135, Address: 0x285cc0, Func Offset: 0xcf0
	// Line 1137, Address: 0x285cc4, Func Offset: 0xcf4
	// Line 1139, Address: 0x285ccc, Func Offset: 0xcfc
	// Line 1140, Address: 0x285cd4, Func Offset: 0xd04
	// Line 1141, Address: 0x285ce0, Func Offset: 0xd10
	// Line 1142, Address: 0x285ce4, Func Offset: 0xd14
	// Line 1147, Address: 0x285ce8, Func Offset: 0xd18
	// Line 1148, Address: 0x285cf4, Func Offset: 0xd24
	// Line 1149, Address: 0x285d08, Func Offset: 0xd38
	// Line 1150, Address: 0x285d18, Func Offset: 0xd48
	// Line 1151, Address: 0x285d24, Func Offset: 0xd54
	// Line 1154, Address: 0x285d3c, Func Offset: 0xd6c
	// Line 1155, Address: 0x285d78, Func Offset: 0xda8
	// Line 1156, Address: 0x285d9c, Func Offset: 0xdcc
	// Line 1158, Address: 0x285da8, Func Offset: 0xdd8
	// Line 1159, Address: 0x285db0, Func Offset: 0xde0
	// Line 1160, Address: 0x285db8, Func Offset: 0xde8
	// Line 1164, Address: 0x285dc8, Func Offset: 0xdf8
	// Line 1169, Address: 0x285ddc, Func Offset: 0xe0c
	// Line 1170, Address: 0x285df0, Func Offset: 0xe20
	// Line 1171, Address: 0x285e04, Func Offset: 0xe34
	// Line 1172, Address: 0x285e24, Func Offset: 0xe54
	// Line 1173, Address: 0x285e40, Func Offset: 0xe70
	// Line 1175, Address: 0x285e64, Func Offset: 0xe94
	// Line 1177, Address: 0x285e88, Func Offset: 0xeb8
	// Line 1178, Address: 0x285ea8, Func Offset: 0xed8
	// Line 1179, Address: 0x285eb0, Func Offset: 0xee0
	// Line 1180, Address: 0x285eb8, Func Offset: 0xee8
	// Line 1181, Address: 0x285ec4, Func Offset: 0xef4
	// Line 1185, Address: 0x285ed0, Func Offset: 0xf00
	// Line 1186, Address: 0x285ef8, Func Offset: 0xf28
	// Line 1189, Address: 0x285f04, Func Offset: 0xf34
	// Line 1190, Address: 0x285f18, Func Offset: 0xf48
	// Line 1191, Address: 0x285f3c, Func Offset: 0xf6c
	// Line 1192, Address: 0x285f48, Func Offset: 0xf78
	// Line 1193, Address: 0x285f50, Func Offset: 0xf80
	// Line 1194, Address: 0x285f58, Func Offset: 0xf88
	// Line 1213, Address: 0x285fd4, Func Offset: 0x1004
	// Func End, Address: 0x285ffc, Func Offset: 0x102c
}

// 
// Start address: 0x286000
void PlayerCheckSound()
{
	// Line 1218, Address: 0x286000, Func Offset: 0
	// Line 1219, Address: 0x286008, Func Offset: 0x8
	// Line 1220, Address: 0x286010, Func Offset: 0x10
	// Line 1221, Address: 0x286018, Func Offset: 0x18
	// Func End, Address: 0x286028, Func Offset: 0x28
}

// 
// Start address: 0x286030
void PlayerCheckDualShock()
{
	float rate;
	// Line 1241, Address: 0x286030, Func Offset: 0
	// Line 1243, Address: 0x28603c, Func Offset: 0xc
	// Line 1247, Address: 0x286048, Func Offset: 0x18
	// Line 1249, Address: 0x286088, Func Offset: 0x58
	// Line 1250, Address: 0x2860a4, Func Offset: 0x74
	// Line 1252, Address: 0x2860ac, Func Offset: 0x7c
	// Line 1253, Address: 0x2860c8, Func Offset: 0x98
	// Line 1255, Address: 0x2860d0, Func Offset: 0xa0
	// Line 1256, Address: 0x2860ec, Func Offset: 0xbc
	// Line 1258, Address: 0x2860f4, Func Offset: 0xc4
	// Line 1261, Address: 0x286110, Func Offset: 0xe0
	// Line 1264, Address: 0x286118, Func Offset: 0xe8
	// Line 1268, Address: 0x286134, Func Offset: 0x104
	// Line 1270, Address: 0x286184, Func Offset: 0x154
	// Line 1271, Address: 0x2861a0, Func Offset: 0x170
	// Line 1273, Address: 0x2861a8, Func Offset: 0x178
	// Line 1274, Address: 0x2861c4, Func Offset: 0x194
	// Line 1276, Address: 0x2861cc, Func Offset: 0x19c
	// Line 1277, Address: 0x2861e8, Func Offset: 0x1b8
	// Line 1279, Address: 0x2861f0, Func Offset: 0x1c0
	// Line 1284, Address: 0x28620c, Func Offset: 0x1dc
	// Func End, Address: 0x286220, Func Offset: 0x1f0
}

// 
// Start address: 0x286220
int PlayerJamesIsInSquare(float* pos0, float* pos1)
{
	// Line 1299, Address: 0x286220, Func Offset: 0
	// Line 1303, Address: 0x286280, Func Offset: 0x60
	// Line 1305, Address: 0x28628c, Func Offset: 0x6c
	// Line 1306, Address: 0x286290, Func Offset: 0x70
	// Func End, Address: 0x286298, Func Offset: 0x78
}

