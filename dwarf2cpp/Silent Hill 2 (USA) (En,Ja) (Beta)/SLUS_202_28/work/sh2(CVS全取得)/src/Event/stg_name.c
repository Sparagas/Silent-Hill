typedef struct shSkelton;
typedef struct Model_List;
typedef struct PAD_2D;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct PAD_INFO;
typedef struct Enemy_List;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct SubCharacter;
typedef struct _anon0;
typedef struct _AnimeInfo;
typedef struct Stage_Data;
typedef struct Event_List;
typedef struct shBattleFight;
typedef struct Item_List;
typedef struct shPlayerWork;
typedef struct _anon1;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct _CL_VHIT_WALL;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef struct _anon2;
typedef union _anon3;
typedef struct _CL_VHIT_RESULT;
typedef union _anon4;
typedef struct PAD_3D;
typedef struct _anon5;

typedef int(*type_3)();
typedef void(*type_7)(SubCharacter*);
typedef void(*type_8)();
typedef void(*type_12)(SubCharacter*);

typedef float type_0[4];
typedef float type_1[4][4];
typedef shAttackInfo type_2[66];
typedef unsigned char type_4[14];
typedef _anon1 type_5[55];
typedef PAD_INFO type_6[10];
typedef float type_9[4][2];
typedef float type_10[4];
typedef unsigned char type_11[69];
typedef float type_13[2];
typedef unsigned char type_14[4];
typedef unsigned char type_15[4];
typedef unsigned char type_16[4];
typedef unsigned char type_17[4];
typedef unsigned char type_18[4][211];
typedef unsigned char type_19[14];
typedef unsigned char type_20[2];
typedef unsigned char type_21[2];
typedef float type_22[4];
typedef _anon1 type_23[76];
typedef unsigned char type_24[97];
typedef _anon1 type_25[23];
typedef unsigned char type_26[20];
typedef unsigned char type_27[2];
typedef _anon1 type_28[6];

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon5 src_m;
	_anon2 src_t;
	_anon5 des_m;
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

struct Model_List
{
	short kind;
	short id;
	short flag_off;
	short flag_on;
	float pos[4];
	float rot[4];
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

struct Enemy_List
{
	short kind;
	short id;
	int pos_x;
	int pos_z;
	short pos_y;
	short rot_y;
	short status;
	unsigned short condition;
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
	_anon5 mat;
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
};

struct _anon0
{
	void(*SpecDraw)();
	void(*PreDraw)();
	void(*PostDraw)();
	void(*CharaDraw_Hook)();
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

struct Stage_Data
{
	Event_List* ev_list;
	unsigned char* ev_pos;
	int(*ev_prog)();
	Item_List* gi_list;
	Model_List* mdl_list;
	Enemy_List* en_list;
	void(*stage_init)();
	void(*room_init)();
	void(*alltime_func)();
	int glb_crd;
	int pc_model;
	_AnimeInfo* stg_anim_info;
	int(*bgm_control)();
	_anon0* gfw_func;
	int(*chara_data_clear)();
	void(*sound_call_after_load)();
	int reserve_11;
};

struct Event_List
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct Item_List
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
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

struct _anon1
{
	short xz;
	short block;
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
	_anon3 hit_check;
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

struct _anon2
{
	float x;
	float y;
	float z;
	float w;
};

union _anon3
{
	shBattleFight fight;
	shBattleShot shot;
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

struct PAD_3D
{
	char round_way;
	unsigned char reserved1;
	unsigned char lslide;
	unsigned char rslide;
	unsigned char lturn180;
	unsigned char rturn180;
};

struct _anon5
{
	float d[4][4];
};

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
shPlayerWork sh2jms;
Stage_Data* stage;
unsigned char room_to_block[4][211];
_anon1 block_a[23];
_anon1 block_b[55];
_anon1 block_c[76];
_anon1 block_d[6];

int RoomNameJms();
int RoomName(int glb_crd, float pos_x, float pos_z);
int RoomNameExtra(int tpwoin);
int RoomNameTownEast(int tpwoin);
int RoomNameBowling(int tpwoin);
int RoomNameHeaven(int tpwoin);
int RoomNameApart(int tpwoin);
int RoomNameHospital(int tpwoin);
int RoomNameDelusion(int tpwoin);
int RoomNameHotelFace(int tpwoin);
int RoomNameHotelBack(int tpwoin);
int RoomNameLastStage(int tpwoin);
int RoomNameMansion(int tpwoin);
int BlockNumber(int* ret, int glb_crd, float pos_x, float pos_z);
int BgIsOut(int glb_crd);

// 
// Start address: 0x1af0a0
int RoomNameJms()
{
	// Line 64, Address: 0x1af0a0, Func Offset: 0
	// Line 65, Address: 0x1af0a8, Func Offset: 0x8
	// Line 67, Address: 0x1af0d8, Func Offset: 0x38
	// Func End, Address: 0x1af0e8, Func Offset: 0x48
}

// 
// Start address: 0x1af0f0
int RoomName(int glb_crd, float pos_x, float pos_z)
{
	int z;
	int x;
	int tpwoin;
	// Line 79, Address: 0x1af0f0, Func Offset: 0
	// Line 84, Address: 0x1af0f8, Func Offset: 0x8
	// Line 85, Address: 0x1af124, Func Offset: 0x34
	// Line 86, Address: 0x1af134, Func Offset: 0x44
	// Line 89, Address: 0x1af13c, Func Offset: 0x4c
	// Line 91, Address: 0x1af154, Func Offset: 0x64
	// Line 93, Address: 0x1af17c, Func Offset: 0x8c
	// Line 94, Address: 0x1af188, Func Offset: 0x98
	// Line 95, Address: 0x1af19c, Func Offset: 0xac
	// Line 96, Address: 0x1af1a8, Func Offset: 0xb8
	// Line 97, Address: 0x1af1b4, Func Offset: 0xc4
	// Line 98, Address: 0x1af1c0, Func Offset: 0xd0
	// Line 99, Address: 0x1af1d4, Func Offset: 0xe4
	// Line 100, Address: 0x1af1e8, Func Offset: 0xf8
	// Line 101, Address: 0x1af1fc, Func Offset: 0x10c
	// Line 102, Address: 0x1af210, Func Offset: 0x120
	// Line 103, Address: 0x1af224, Func Offset: 0x134
	// Line 104, Address: 0x1af238, Func Offset: 0x148
	// Line 105, Address: 0x1af24c, Func Offset: 0x15c
	// Line 106, Address: 0x1af260, Func Offset: 0x170
	// Line 107, Address: 0x1af274, Func Offset: 0x184
	// Line 108, Address: 0x1af280, Func Offset: 0x190
	// Line 111, Address: 0x1af294, Func Offset: 0x1a4
	// Line 112, Address: 0x1af298, Func Offset: 0x1a8
	// Func End, Address: 0x1af2a8, Func Offset: 0x1b8
}

// 
// Start address: 0x1af2b0
int RoomNameExtra(int tpwoin)
{
	// Line 118, Address: 0x1af2b0, Func Offset: 0
	// Line 119, Address: 0x1af308, Func Offset: 0x58
	// Line 120, Address: 0x1af314, Func Offset: 0x64
	// Line 121, Address: 0x1af320, Func Offset: 0x70
	// Line 122, Address: 0x1af32c, Func Offset: 0x7c
	// Line 124, Address: 0x1af338, Func Offset: 0x88
	// Line 125, Address: 0x1af33c, Func Offset: 0x8c
	// Func End, Address: 0x1af344, Func Offset: 0x94
}

// 
// Start address: 0x1af350
int RoomNameTownEast(int tpwoin)
{
	// Line 131, Address: 0x1af350, Func Offset: 0
	// Line 137, Address: 0x1af3a0, Func Offset: 0x50
	// Line 139, Address: 0x1af3ac, Func Offset: 0x5c
	// Line 140, Address: 0x1af3b0, Func Offset: 0x60
	// Func End, Address: 0x1af3b8, Func Offset: 0x68
}

// 
// Start address: 0x1af3c0
int RoomNameBowling(int tpwoin)
{
	// Line 146, Address: 0x1af3c0, Func Offset: 0
	// Line 147, Address: 0x1af40c, Func Offset: 0x4c
	// Line 148, Address: 0x1af418, Func Offset: 0x58
	// Line 149, Address: 0x1af424, Func Offset: 0x64
	// Line 151, Address: 0x1af430, Func Offset: 0x70
	// Line 152, Address: 0x1af434, Func Offset: 0x74
	// Func End, Address: 0x1af43c, Func Offset: 0x7c
}

// 
// Start address: 0x1af440
int RoomNameHeaven(int tpwoin)
{
	// Line 158, Address: 0x1af440, Func Offset: 0
	// Line 159, Address: 0x1af480, Func Offset: 0x40
	// Line 160, Address: 0x1af48c, Func Offset: 0x4c
	// Line 162, Address: 0x1af498, Func Offset: 0x58
	// Line 163, Address: 0x1af49c, Func Offset: 0x5c
	// Func End, Address: 0x1af4a4, Func Offset: 0x64
}

// 
// Start address: 0x1af4b0
int RoomNameApart(int tpwoin)
{
	// Line 169, Address: 0x1af4b0, Func Offset: 0
	// Line 173, Address: 0x1af518, Func Offset: 0x68
	// Line 177, Address: 0x1af524, Func Offset: 0x74
	// Line 179, Address: 0x1af530, Func Offset: 0x80
	// Line 180, Address: 0x1af678, Func Offset: 0x1c8
	// Line 181, Address: 0x1af684, Func Offset: 0x1d4
	// Line 182, Address: 0x1af690, Func Offset: 0x1e0
	// Line 183, Address: 0x1af69c, Func Offset: 0x1ec
	// Line 184, Address: 0x1af6a8, Func Offset: 0x1f8
	// Line 185, Address: 0x1af6b4, Func Offset: 0x204
	// Line 186, Address: 0x1af6c0, Func Offset: 0x210
	// Line 187, Address: 0x1af6cc, Func Offset: 0x21c
	// Line 188, Address: 0x1af6d8, Func Offset: 0x228
	// Line 189, Address: 0x1af6e4, Func Offset: 0x234
	// Line 190, Address: 0x1af6f0, Func Offset: 0x240
	// Line 191, Address: 0x1af6fc, Func Offset: 0x24c
	// Line 192, Address: 0x1af708, Func Offset: 0x258
	// Line 193, Address: 0x1af714, Func Offset: 0x264
	// Line 194, Address: 0x1af720, Func Offset: 0x270
	// Line 195, Address: 0x1af72c, Func Offset: 0x27c
	// Line 196, Address: 0x1af738, Func Offset: 0x288
	// Line 197, Address: 0x1af744, Func Offset: 0x294
	// Line 198, Address: 0x1af750, Func Offset: 0x2a0
	// Line 199, Address: 0x1af75c, Func Offset: 0x2ac
	// Line 200, Address: 0x1af768, Func Offset: 0x2b8
	// Line 201, Address: 0x1af774, Func Offset: 0x2c4
	// Line 202, Address: 0x1af780, Func Offset: 0x2d0
	// Line 203, Address: 0x1af78c, Func Offset: 0x2dc
	// Line 205, Address: 0x1af798, Func Offset: 0x2e8
	// Line 206, Address: 0x1af79c, Func Offset: 0x2ec
	// Func End, Address: 0x1af7a4, Func Offset: 0x2f4
}

// 
// Start address: 0x1af7b0
int RoomNameHospital(int tpwoin)
{
	// Line 212, Address: 0x1af7b0, Func Offset: 0
	// Line 213, Address: 0x1afa3c, Func Offset: 0x28c
	// Line 214, Address: 0x1afa48, Func Offset: 0x298
	// Line 215, Address: 0x1afa54, Func Offset: 0x2a4
	// Line 216, Address: 0x1afa60, Func Offset: 0x2b0
	// Line 217, Address: 0x1afa6c, Func Offset: 0x2bc
	// Line 218, Address: 0x1afa78, Func Offset: 0x2c8
	// Line 219, Address: 0x1afa84, Func Offset: 0x2d4
	// Line 220, Address: 0x1afa90, Func Offset: 0x2e0
	// Line 221, Address: 0x1afa9c, Func Offset: 0x2ec
	// Line 222, Address: 0x1afaa8, Func Offset: 0x2f8
	// Line 223, Address: 0x1afab4, Func Offset: 0x304
	// Line 224, Address: 0x1afac0, Func Offset: 0x310
	// Line 225, Address: 0x1afacc, Func Offset: 0x31c
	// Line 226, Address: 0x1afad8, Func Offset: 0x328
	// Line 227, Address: 0x1afae4, Func Offset: 0x334
	// Line 228, Address: 0x1afaf0, Func Offset: 0x340
	// Line 229, Address: 0x1afafc, Func Offset: 0x34c
	// Line 230, Address: 0x1afb08, Func Offset: 0x358
	// Line 231, Address: 0x1afb14, Func Offset: 0x364
	// Line 232, Address: 0x1afb20, Func Offset: 0x370
	// Line 233, Address: 0x1afb2c, Func Offset: 0x37c
	// Line 234, Address: 0x1afb38, Func Offset: 0x388
	// Line 235, Address: 0x1afb44, Func Offset: 0x394
	// Line 236, Address: 0x1afb50, Func Offset: 0x3a0
	// Line 237, Address: 0x1afb5c, Func Offset: 0x3ac
	// Line 238, Address: 0x1afb68, Func Offset: 0x3b8
	// Line 239, Address: 0x1afb74, Func Offset: 0x3c4
	// Line 240, Address: 0x1afb80, Func Offset: 0x3d0
	// Line 241, Address: 0x1afb8c, Func Offset: 0x3dc
	// Line 242, Address: 0x1afb98, Func Offset: 0x3e8
	// Line 243, Address: 0x1afba4, Func Offset: 0x3f4
	// Line 244, Address: 0x1afbb0, Func Offset: 0x400
	// Line 245, Address: 0x1afbbc, Func Offset: 0x40c
	// Line 246, Address: 0x1afbc8, Func Offset: 0x418
	// Line 247, Address: 0x1afbd4, Func Offset: 0x424
	// Line 248, Address: 0x1afbe0, Func Offset: 0x430
	// Line 249, Address: 0x1afbec, Func Offset: 0x43c
	// Line 250, Address: 0x1afbf8, Func Offset: 0x448
	// Line 251, Address: 0x1afc04, Func Offset: 0x454
	// Line 252, Address: 0x1afc10, Func Offset: 0x460
	// Line 253, Address: 0x1afc1c, Func Offset: 0x46c
	// Line 254, Address: 0x1afc28, Func Offset: 0x478
	// Line 255, Address: 0x1afc34, Func Offset: 0x484
	// Line 256, Address: 0x1afc40, Func Offset: 0x490
	// Line 257, Address: 0x1afc4c, Func Offset: 0x49c
	// Line 258, Address: 0x1afc58, Func Offset: 0x4a8
	// Line 259, Address: 0x1afc64, Func Offset: 0x4b4
	// Line 260, Address: 0x1afc70, Func Offset: 0x4c0
	// Line 261, Address: 0x1afc7c, Func Offset: 0x4cc
	// Line 262, Address: 0x1afc88, Func Offset: 0x4d8
	// Line 263, Address: 0x1afc94, Func Offset: 0x4e4
	// Line 265, Address: 0x1afca0, Func Offset: 0x4f0
	// Line 266, Address: 0x1afca4, Func Offset: 0x4f4
	// Func End, Address: 0x1afcac, Func Offset: 0x4fc
}

// 
// Start address: 0x1afcb0
int RoomNameDelusion(int tpwoin)
{
	// Line 272, Address: 0x1afcb0, Func Offset: 0
	// Line 276, Address: 0x1afebc, Func Offset: 0x20c
	// Line 278, Address: 0x1afec8, Func Offset: 0x218
	// Line 280, Address: 0x1afed4, Func Offset: 0x224
	// Line 282, Address: 0x1afee0, Func Offset: 0x230
	// Line 283, Address: 0x1afeec, Func Offset: 0x23c
	// Line 285, Address: 0x1afef8, Func Offset: 0x248
	// Line 287, Address: 0x1aff04, Func Offset: 0x254
	// Line 288, Address: 0x1aff10, Func Offset: 0x260
	// Line 290, Address: 0x1aff1c, Func Offset: 0x26c
	// Line 292, Address: 0x1aff28, Func Offset: 0x278
	// Line 295, Address: 0x1aff34, Func Offset: 0x284
	// Line 297, Address: 0x1aff40, Func Offset: 0x290
	// Line 300, Address: 0x1aff4c, Func Offset: 0x29c
	// Line 302, Address: 0x1aff58, Func Offset: 0x2a8
	// Line 304, Address: 0x1aff64, Func Offset: 0x2b4
	// Line 306, Address: 0x1aff70, Func Offset: 0x2c0
	// Line 307, Address: 0x1aff7c, Func Offset: 0x2cc
	// Line 309, Address: 0x1aff88, Func Offset: 0x2d8
	// Line 311, Address: 0x1aff94, Func Offset: 0x2e4
	// Line 313, Address: 0x1affa0, Func Offset: 0x2f0
	// Line 315, Address: 0x1affac, Func Offset: 0x2fc
	// Line 317, Address: 0x1affb8, Func Offset: 0x308
	// Line 318, Address: 0x1b0160, Func Offset: 0x4b0
	// Line 319, Address: 0x1b016c, Func Offset: 0x4bc
	// Line 320, Address: 0x1b0178, Func Offset: 0x4c8
	// Line 321, Address: 0x1b0184, Func Offset: 0x4d4
	// Line 322, Address: 0x1b0190, Func Offset: 0x4e0
	// Line 323, Address: 0x1b019c, Func Offset: 0x4ec
	// Line 324, Address: 0x1b01a8, Func Offset: 0x4f8
	// Line 325, Address: 0x1b01b4, Func Offset: 0x504
	// Line 326, Address: 0x1b01c0, Func Offset: 0x510
	// Line 327, Address: 0x1b01cc, Func Offset: 0x51c
	// Line 328, Address: 0x1b01d8, Func Offset: 0x528
	// Line 329, Address: 0x1b01e4, Func Offset: 0x534
	// Line 330, Address: 0x1b01f0, Func Offset: 0x540
	// Line 331, Address: 0x1b01fc, Func Offset: 0x54c
	// Line 332, Address: 0x1b0208, Func Offset: 0x558
	// Line 333, Address: 0x1b0214, Func Offset: 0x564
	// Line 334, Address: 0x1b0220, Func Offset: 0x570
	// Line 335, Address: 0x1b022c, Func Offset: 0x57c
	// Line 336, Address: 0x1b0238, Func Offset: 0x588
	// Line 337, Address: 0x1b0244, Func Offset: 0x594
	// Line 338, Address: 0x1b0250, Func Offset: 0x5a0
	// Line 339, Address: 0x1b025c, Func Offset: 0x5ac
	// Line 340, Address: 0x1b0268, Func Offset: 0x5b8
	// Line 341, Address: 0x1b0274, Func Offset: 0x5c4
	// Line 342, Address: 0x1b0280, Func Offset: 0x5d0
	// Line 343, Address: 0x1b028c, Func Offset: 0x5dc
	// Line 344, Address: 0x1b0298, Func Offset: 0x5e8
	// Line 345, Address: 0x1b02a4, Func Offset: 0x5f4
	// Line 346, Address: 0x1b02b0, Func Offset: 0x600
	// Line 347, Address: 0x1b02bc, Func Offset: 0x60c
	// Line 348, Address: 0x1b02c8, Func Offset: 0x618
	// Line 349, Address: 0x1b02d4, Func Offset: 0x624
	// Line 351, Address: 0x1b02e0, Func Offset: 0x630
	// Line 352, Address: 0x1b02e4, Func Offset: 0x634
	// Func End, Address: 0x1b02ec, Func Offset: 0x63c
}

// 
// Start address: 0x1b02f0
int RoomNameHotelFace(int tpwoin)
{
	// Line 358, Address: 0x1b02f0, Func Offset: 0
	// Line 360, Address: 0x1b0310, Func Offset: 0x20
	// Line 362, Address: 0x1b031c, Func Offset: 0x2c
	// Line 363, Address: 0x1b0464, Func Offset: 0x174
	// Line 364, Address: 0x1b0470, Func Offset: 0x180
	// Line 365, Address: 0x1b047c, Func Offset: 0x18c
	// Line 366, Address: 0x1b0488, Func Offset: 0x198
	// Line 367, Address: 0x1b0494, Func Offset: 0x1a4
	// Line 368, Address: 0x1b04a0, Func Offset: 0x1b0
	// Line 369, Address: 0x1b04ac, Func Offset: 0x1bc
	// Line 370, Address: 0x1b04b8, Func Offset: 0x1c8
	// Line 371, Address: 0x1b04c4, Func Offset: 0x1d4
	// Line 372, Address: 0x1b04d0, Func Offset: 0x1e0
	// Line 373, Address: 0x1b04dc, Func Offset: 0x1ec
	// Line 374, Address: 0x1b04e8, Func Offset: 0x1f8
	// Line 375, Address: 0x1b04f4, Func Offset: 0x204
	// Line 376, Address: 0x1b0500, Func Offset: 0x210
	// Line 377, Address: 0x1b050c, Func Offset: 0x21c
	// Line 378, Address: 0x1b0518, Func Offset: 0x228
	// Line 379, Address: 0x1b0524, Func Offset: 0x234
	// Line 380, Address: 0x1b0530, Func Offset: 0x240
	// Line 381, Address: 0x1b053c, Func Offset: 0x24c
	// Line 382, Address: 0x1b0548, Func Offset: 0x258
	// Line 383, Address: 0x1b0554, Func Offset: 0x264
	// Line 384, Address: 0x1b0560, Func Offset: 0x270
	// Line 385, Address: 0x1b056c, Func Offset: 0x27c
	// Line 386, Address: 0x1b0578, Func Offset: 0x288
	// Line 388, Address: 0x1b0584, Func Offset: 0x294
	// Line 389, Address: 0x1b0588, Func Offset: 0x298
	// Func End, Address: 0x1b0590, Func Offset: 0x2a0
}

// 
// Start address: 0x1b0590
int RoomNameHotelBack(int tpwoin)
{
	// Line 395, Address: 0x1b0590, Func Offset: 0
	// Line 396, Address: 0x1b0690, Func Offset: 0x100
	// Line 397, Address: 0x1b069c, Func Offset: 0x10c
	// Line 398, Address: 0x1b06a8, Func Offset: 0x118
	// Line 399, Address: 0x1b06b4, Func Offset: 0x124
	// Line 400, Address: 0x1b06c0, Func Offset: 0x130
	// Line 401, Address: 0x1b06cc, Func Offset: 0x13c
	// Line 402, Address: 0x1b06d8, Func Offset: 0x148
	// Line 403, Address: 0x1b06e4, Func Offset: 0x154
	// Line 404, Address: 0x1b06f0, Func Offset: 0x160
	// Line 405, Address: 0x1b06fc, Func Offset: 0x16c
	// Line 406, Address: 0x1b0708, Func Offset: 0x178
	// Line 407, Address: 0x1b0714, Func Offset: 0x184
	// Line 408, Address: 0x1b0720, Func Offset: 0x190
	// Line 409, Address: 0x1b072c, Func Offset: 0x19c
	// Line 410, Address: 0x1b0738, Func Offset: 0x1a8
	// Line 411, Address: 0x1b0744, Func Offset: 0x1b4
	// Line 412, Address: 0x1b0750, Func Offset: 0x1c0
	// Line 413, Address: 0x1b075c, Func Offset: 0x1cc
	// Line 415, Address: 0x1b0768, Func Offset: 0x1d8
	// Line 416, Address: 0x1b076c, Func Offset: 0x1dc
	// Func End, Address: 0x1b0774, Func Offset: 0x1e4
}

// 
// Start address: 0x1b0780
int RoomNameLastStage(int tpwoin)
{
	// Line 422, Address: 0x1b0780, Func Offset: 0
	// Line 423, Address: 0x1b07c0, Func Offset: 0x40
	// Line 424, Address: 0x1b07cc, Func Offset: 0x4c
	// Line 426, Address: 0x1b07d8, Func Offset: 0x58
	// Line 427, Address: 0x1b07dc, Func Offset: 0x5c
	// Func End, Address: 0x1b07e4, Func Offset: 0x64
}

// 
// Start address: 0x1b07f0
int RoomNameMansion(int tpwoin)
{
	// Line 433, Address: 0x1b07f0, Func Offset: 0
	// Line 434, Address: 0x1b08fc, Func Offset: 0x10c
	// Line 435, Address: 0x1b0908, Func Offset: 0x118
	// Line 436, Address: 0x1b0914, Func Offset: 0x124
	// Line 437, Address: 0x1b0920, Func Offset: 0x130
	// Line 438, Address: 0x1b092c, Func Offset: 0x13c
	// Line 439, Address: 0x1b0938, Func Offset: 0x148
	// Line 440, Address: 0x1b0944, Func Offset: 0x154
	// Line 441, Address: 0x1b0950, Func Offset: 0x160
	// Line 442, Address: 0x1b095c, Func Offset: 0x16c
	// Line 443, Address: 0x1b0968, Func Offset: 0x178
	// Line 444, Address: 0x1b0974, Func Offset: 0x184
	// Line 445, Address: 0x1b0980, Func Offset: 0x190
	// Line 446, Address: 0x1b098c, Func Offset: 0x19c
	// Line 447, Address: 0x1b0998, Func Offset: 0x1a8
	// Line 448, Address: 0x1b09a4, Func Offset: 0x1b4
	// Line 449, Address: 0x1b09b0, Func Offset: 0x1c0
	// Line 450, Address: 0x1b09bc, Func Offset: 0x1cc
	// Line 451, Address: 0x1b09c8, Func Offset: 0x1d8
	// Line 452, Address: 0x1b09d4, Func Offset: 0x1e4
	// Line 454, Address: 0x1b09e0, Func Offset: 0x1f0
	// Line 455, Address: 0x1b09e4, Func Offset: 0x1f4
	// Func End, Address: 0x1b09ec, Func Offset: 0x1fc
}

// 
// Start address: 0x1b09f0
int BlockNumber(int* ret, int glb_crd, float pos_x, float pos_z)
{
	int i;
	int xz;
	int z;
	int x;
	int room;
	int result;
	int no;
	_anon1* block;
	// Line 864, Address: 0x1b09f0, Func Offset: 0
	// Line 872, Address: 0x1b0a1c, Func Offset: 0x2c
	// Line 874, Address: 0x1b0a34, Func Offset: 0x44
	// Line 875, Address: 0x1b0a5c, Func Offset: 0x6c
	// Line 877, Address: 0x1b0a74, Func Offset: 0x84
	// Line 878, Address: 0x1b0a88, Func Offset: 0x98
	// Line 879, Address: 0x1b0a94, Func Offset: 0xa4
	// Line 880, Address: 0x1b0ad4, Func Offset: 0xe4
	// Line 883, Address: 0x1b0ae0, Func Offset: 0xf0
	// Line 884, Address: 0x1b0b2c, Func Offset: 0x13c
	// Line 885, Address: 0x1b0b78, Func Offset: 0x188
	// Line 887, Address: 0x1b0ba0, Func Offset: 0x1b0
	// Line 889, Address: 0x1b0bd0, Func Offset: 0x1e0
	// Line 890, Address: 0x1b0be4, Func Offset: 0x1f4
	// Line 891, Address: 0x1b0bf8, Func Offset: 0x208
	// Line 892, Address: 0x1b0c0c, Func Offset: 0x21c
	// Line 895, Address: 0x1b0c18, Func Offset: 0x228
	// Line 897, Address: 0x1b0c1c, Func Offset: 0x22c
	// Line 898, Address: 0x1b0c24, Func Offset: 0x234
	// Line 899, Address: 0x1b0c48, Func Offset: 0x258
	// Line 900, Address: 0x1b0c68, Func Offset: 0x278
	// Line 901, Address: 0x1b0c84, Func Offset: 0x294
	// Line 902, Address: 0x1b0c8c, Func Offset: 0x29c
	// Line 905, Address: 0x1b0c94, Func Offset: 0x2a4
	// Line 906, Address: 0x1b0c98, Func Offset: 0x2a8
	// Line 908, Address: 0x1b0ca4, Func Offset: 0x2b4
	// Line 909, Address: 0x1b0ca8, Func Offset: 0x2b8
	// Func End, Address: 0x1b0ccc, Func Offset: 0x2dc
}

// 
// Start address: 0x1b0cd0
int BgIsOut(int glb_crd)
{
	// Line 960, Address: 0x1b0cd0, Func Offset: 0
	// Line 961, Address: 0x1b0cd8, Func Offset: 0x8
	// Line 963, Address: 0x1b0cf0, Func Offset: 0x20
	// Line 965, Address: 0x1b0d2c, Func Offset: 0x5c
	// Line 966, Address: 0x1b0d40, Func Offset: 0x70
	// Func End, Address: 0x1b0d50, Func Offset: 0x80
}

