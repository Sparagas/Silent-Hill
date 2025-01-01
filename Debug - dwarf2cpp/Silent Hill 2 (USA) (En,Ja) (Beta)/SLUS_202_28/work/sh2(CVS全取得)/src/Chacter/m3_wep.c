typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef union _anon0;
typedef struct SubCharacter;
typedef struct _CL_VHIT_RESULT;
typedef union _anon1;
typedef struct shPlayerWork;
typedef struct shSkelton;
typedef struct _anon2;
typedef struct _AnimeInfo;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct _anon3;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct PAD_3D;
typedef struct shBattleArea;
typedef struct shItemScreenObjectSettingData;
typedef struct PAD_2D;
typedef struct shBattleInfo;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct PAD_INFO;
typedef struct _CL_VHIT_WALL;

typedef void(*type_4)(SubCharacter*);
typedef void(*type_10)(SubCharacter*);
typedef void(*type_13)(SubCharacter*);

typedef float type_0[2];
typedef unsigned char type_1[20];
typedef unsigned char type_2[4];
typedef unsigned char type_3[4];
typedef unsigned char type_5[2];
typedef shAttackInfo type_6[66];
typedef unsigned char type_7[2];
typedef unsigned char type_8[14];
typedef _AnimeInfo type_9[9];
typedef float type_11[4][2];
typedef unsigned char type_12[69];
typedef float type_14[4];
typedef float type_15[4][4];
typedef unsigned char type_16[4];
typedef shItemScreenObjectSettingData type_17[58];
typedef unsigned char type_18[2];
typedef float type_19[4][9];
typedef unsigned char type_20[14];
typedef float type_21[4];
typedef float type_22[4];
typedef unsigned char type_23[97];
typedef PAD_INFO type_24[10];

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

	void WeaponFunction();
	void shUpdateWeaponMatrixAfterAnime(short kind);
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

struct PAD_3D
{
	char round_way;
	unsigned char reserved1;
	unsigned char lslide;
	unsigned char rslide;
	unsigned char lturn180;
	unsigned char rturn180;
};

struct shBattleArea
{
	float center;
	float radius;
};

struct shItemScreenObjectSettingData
{
	int chara_id;
	float scale;
	_anon2 rot;
};

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
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
_AnimeInfo weapon_anim[9];
shItemScreenObjectSettingData item_screen_obj_data[58];
shPlayerWork sh2jms;
void(*WeaponFunction)(SubCharacter*);

void WeaponFunction();
void shUpdateWeaponMatrixAfterAnime(short kind);
void shGetJamesWeaponPos(float* pos, float* vec, int kind);
void shGetJamesWeaponStartPos(float* pos, float* vec);
void shGetJamesWeaponEndPos(float* pos, float* vec);
void shCharacterSetWeaponLow(SubCharacter* scp);

// 
// Start address: 0x11ffd0
void SubCharacter::WeaponFunction()
{
	float scale;
	_AnimeInfo* aip;
	// Line 55, Address: 0x11ffd0, Func Offset: 0
	// Line 59, Address: 0x11ffe4, Func Offset: 0x14
	// Line 65, Address: 0x120004, Func Offset: 0x34
	// Line 66, Address: 0x120010, Func Offset: 0x40
	// Line 68, Address: 0x120050, Func Offset: 0x80
	// Line 69, Address: 0x120058, Func Offset: 0x88
	// Line 71, Address: 0x120060, Func Offset: 0x90
	// Line 72, Address: 0x120068, Func Offset: 0x98
	// Line 74, Address: 0x120070, Func Offset: 0xa0
	// Line 75, Address: 0x120078, Func Offset: 0xa8
	// Line 77, Address: 0x120080, Func Offset: 0xb0
	// Line 78, Address: 0x120088, Func Offset: 0xb8
	// Line 80, Address: 0x120090, Func Offset: 0xc0
	// Line 81, Address: 0x120098, Func Offset: 0xc8
	// Line 83, Address: 0x1200a0, Func Offset: 0xd0
	// Line 84, Address: 0x1200a8, Func Offset: 0xd8
	// Line 86, Address: 0x1200b0, Func Offset: 0xe0
	// Line 87, Address: 0x1200b8, Func Offset: 0xe8
	// Line 89, Address: 0x1200c0, Func Offset: 0xf0
	// Line 92, Address: 0x1200c8, Func Offset: 0xf8
	// Line 100, Address: 0x1200f0, Func Offset: 0x120
	// Line 105, Address: 0x1200fc, Func Offset: 0x12c
	// Func End, Address: 0x120114, Func Offset: 0x144
}

// 
// Start address: 0x120120
void SubCharacter::shUpdateWeaponMatrixAfterAnime(short kind)
{
	SubCharacter* player;
	_anon3 mat;
	// Line 123, Address: 0x120120, Func Offset: 0
	// Line 128, Address: 0x120138, Func Offset: 0x18
	// Line 130, Address: 0x120140, Func Offset: 0x20
	// Line 131, Address: 0x120150, Func Offset: 0x30
	// Line 132, Address: 0x120184, Func Offset: 0x64
	// Line 134, Address: 0x1201ac, Func Offset: 0x8c
	// Line 135, Address: 0x1201bc, Func Offset: 0x9c
	// Line 138, Address: 0x1201c4, Func Offset: 0xa4
	// Line 141, Address: 0x1201f4, Func Offset: 0xd4
	// Line 142, Address: 0x1201fc, Func Offset: 0xdc
	// Func End, Address: 0x120214, Func Offset: 0xf4
}

// 
// Start address: 0x120220
void shGetJamesWeaponPos(float* pos, float* vec, int kind)
{
	float wep_range_test[4][9];
	shSkelton* stp;
	SubCharacter* scp;
	unsigned char weapon;
	_anon3 mat;
	_anon3 lw_mat;
	float vec0[4];
	float pos1[4];
	float pos0[4];
	// Line 153, Address: 0x120220, Func Offset: 0
	// Line 160, Address: 0x120244, Func Offset: 0x24
	// Line 178, Address: 0x120270, Func Offset: 0x50
	// Line 180, Address: 0x12027c, Func Offset: 0x5c
	// Line 182, Address: 0x120290, Func Offset: 0x70
	// Line 183, Address: 0x120298, Func Offset: 0x78
	// Line 193, Address: 0x1202c8, Func Offset: 0xa8
	// Line 195, Address: 0x1202cc, Func Offset: 0xac
	// Line 197, Address: 0x1202e8, Func Offset: 0xc8
	// Line 198, Address: 0x120318, Func Offset: 0xf8
	// Line 199, Address: 0x120324, Func Offset: 0x104
	// Line 201, Address: 0x12032c, Func Offset: 0x10c
	// Line 202, Address: 0x120360, Func Offset: 0x140
	// Line 205, Address: 0x120370, Func Offset: 0x150
	// Line 206, Address: 0x12037c, Func Offset: 0x15c
	// Line 208, Address: 0x120384, Func Offset: 0x164
	// Line 209, Address: 0x120398, Func Offset: 0x178
	// Line 211, Address: 0x1203a4, Func Offset: 0x184
	// Line 213, Address: 0x1203c0, Func Offset: 0x1a0
	// Line 214, Address: 0x1203f4, Func Offset: 0x1d4
	// Line 215, Address: 0x120404, Func Offset: 0x1e4
	// Line 216, Address: 0x120410, Func Offset: 0x1f0
	// Line 217, Address: 0x120418, Func Offset: 0x1f8
	// Line 219, Address: 0x120420, Func Offset: 0x200
	// Line 220, Address: 0x120440, Func Offset: 0x220
	// Line 221, Address: 0x120454, Func Offset: 0x234
	// Line 222, Address: 0x120468, Func Offset: 0x248
	// Line 223, Address: 0x12047c, Func Offset: 0x25c
	// Line 224, Address: 0x120490, Func Offset: 0x270
	// Line 228, Address: 0x12049c, Func Offset: 0x27c
	// Line 251, Address: 0x1204b0, Func Offset: 0x290
	// Line 252, Address: 0x1204cc, Func Offset: 0x2ac
	// Line 253, Address: 0x1204ec, Func Offset: 0x2cc
	// Func End, Address: 0x12050c, Func Offset: 0x2ec
}

// 
// Start address: 0x120510
void shGetJamesWeaponStartPos(float* pos, float* vec)
{
	// Line 255, Address: 0x120510, Func Offset: 0
	// Line 256, Address: 0x120518, Func Offset: 0x8
	// Line 257, Address: 0x120524, Func Offset: 0x14
	// Func End, Address: 0x120534, Func Offset: 0x24
}

// 
// Start address: 0x120540
void shGetJamesWeaponEndPos(float* pos, float* vec)
{
	// Line 259, Address: 0x120540, Func Offset: 0
	// Line 260, Address: 0x120548, Func Offset: 0x8
	// Line 261, Address: 0x120554, Func Offset: 0x14
	// Func End, Address: 0x120564, Func Offset: 0x24
}

// 
// Start address: 0x120570
void shCharacterSetWeaponLow(SubCharacter* scp)
{
	// Line 272, Address: 0x120570, Func Offset: 0
	// Line 273, Address: 0x120578, Func Offset: 0x8
	// Line 274, Address: 0x120588, Func Offset: 0x18
	// Func End, Address: 0x120598, Func Offset: 0x28
}

