typedef struct Model_List;
typedef struct _anon0;
typedef struct shSkelton;
typedef struct _anon1;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct _anon2;
typedef struct SubCharacter;
typedef struct _anon3;
typedef struct shBattleArea;
typedef struct _anon4;
typedef struct shBattleInfo;
typedef struct PAD_3D;
typedef struct PAD_2D;
typedef struct PAD_INFO;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_WALL;
typedef union _anon5;
typedef struct _CL_HITPOLY_HEAD;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct _CL_VHIT_CHARA;
typedef struct SubObject;
typedef struct _CL_VHIT_RESULT;
typedef union _anon6;
typedef struct shPlayerWork;
typedef struct _anon7;
typedef struct _CL_HITPOLY_COLUMN;
typedef enum _JAMES_UPPER_STATUS : unsigned char;

typedef void(*type_5)(SubCharacter*);
typedef void(*type_7)(SubCharacter*);
typedef int(*type_8)();
typedef void(*type_10)();
typedef void(*type_18)(SubCharacter*);
typedef void(*type_19)(SubCharacter*);

typedef float type_0[4][2];
typedef float type_1[4];
typedef float type_2[4];
typedef float type_3[4][4];
typedef unsigned char type_4[10];
typedef shAttackInfo type_6[46];
typedef unsigned char type_9[4];
typedef unsigned char type_11[4];
typedef unsigned char type_12[4];
typedef PAD_INFO type_13[10];
typedef unsigned char type_14[2];
typedef unsigned char type_15[2];
typedef unsigned char type_16[10];
typedef float type_17[4];
typedef unsigned char type_20[13];
typedef unsigned char type_21[4];
typedef unsigned char type_22[4][183];
typedef unsigned char type_23[2];
typedef unsigned char type_24[34];

struct Model_List
{
	short kind;
	short id;
	short flag_off;
	short flag_on;
	float pos[4];
	float rot[4];
};

struct _anon0
{
	float d[4][4];
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon0 src_m;
	_anon7 src_t;
	_anon0 des_m;
	_anon7 des_t;
	_anon7 axis;
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
	short kind;
	short id;
	int pos_x;
	int pos_z;
	short pos_y;
	short rot_y;
	short status;
	short condition;
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

struct _anon2
{
	_anon3* ev_list;
	unsigned char* ev_pos;
	int(*ev_prog)();
	_anon4* gi_list;
	Model_List* mdl_list;
	_anon1* en_list;
	void(*stage_init)();
	void(*room_init)();
	void(*alltime_func)();
	int glb_crd;
	int reserve_05;
	int reserve_06;
	int reserve_07;
	int reserve_08;
	int reserve_09;
	int reserve_10;
	int reserve_11;
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
	_anon7 pos;
	_anon7 rot;
	_anon7 pos_spd;
	_anon7 rot_spd;
	_anon0 mat;
	shSkelton* sk_top;
	float eye_y;
	float center_y;
	float spd;
	float spd_org;
	float spd_y;
	float spd_roty;
	float grnd_normal[4];
	float grnd_height;
	_anon7 b_pos;
	_anon7 b_rot;
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

struct _anon3
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
};

struct shBattleArea
{
	float center;
	float radius;
};

struct _anon4
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
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

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon5 hit_check;
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

union _anon5
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

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

struct SubObject
{
	unsigned int status;
	unsigned int sub_status;
	unsigned int sub_st;
	short kind;
	short id;
	unsigned int step;
	_anon7 pos;
	_anon7 rot;
	_anon7 pos_spd;
	_anon7 rot_spd;
	_anon0 mat;
	void(*function)(SubCharacter*);
	void(*effecter_function)(SubCharacter*);
	SubObject* pre;
	SubObject* next;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon6 hobj;
};

union _anon6
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct shPlayerWork
{
	SubCharacter* player;
	_anon7 dist_rot;
	_anon7 dist_pos;
	_anon7 pos;
	_anon7 rot;
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
	_anon7 tgt_body_angle;
	_anon7 tgt_neck_angle;
	_anon7 tgt_arms_angle;
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

struct _anon7
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

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
shPlayerWork sh2jms;
_anon2* stage;

int RoomNameJms();
int RoomName(int glb_crd, float pos_x, float pos_z);
int RoomNameTownEast(int tpwoin);
int RoomNameBowling(int tpwoin);
int RoomNameHeaven(int tpwoin);
int RoomNameApart(int tpwoin);
int RoomNameHospital(int tpwoin);
int RoomNameDelusion(int tpwoin);
int RoomNameHotelFace(int tpwoin);
int RoomNameHotelBack(int tpwoin);
int BlockNumber(int* ret, int glb_crd, float pos_x, float pos_z);
int BlockNumberA(int tpwoin);
int BlockNumberB(int tpwoin);
int BlockNumberC(int tpwoin);
int BlockNumberD(int tpwoin);
int BgIsOut(int glb_crd);

// 
// Start address: 0x1b38b0
int RoomNameJms()
{
	// Line 57, Address: 0x1b38b0, Func Offset: 0
	// Line 58, Address: 0x1b38b8, Func Offset: 0x8
	// Line 59, Address: 0x1b38dc, Func Offset: 0x2c
	// Func End, Address: 0x1b38ec, Func Offset: 0x3c
}

// 
// Start address: 0x1b38f0
int RoomName(int glb_crd, float pos_x, float pos_z)
{
	int z;
	int x;
	int tpwoin;
	// Line 71, Address: 0x1b38f0, Func Offset: 0
	// Line 76, Address: 0x1b38f8, Func Offset: 0x8
	// Line 77, Address: 0x1b3924, Func Offset: 0x34
	// Line 78, Address: 0x1b3950, Func Offset: 0x60
	// Line 81, Address: 0x1b3958, Func Offset: 0x68
	// Line 83, Address: 0x1b3970, Func Offset: 0x80
	// Line 85, Address: 0x1b3998, Func Offset: 0xa8
	// Line 86, Address: 0x1b39a4, Func Offset: 0xb4
	// Line 87, Address: 0x1b39b8, Func Offset: 0xc8
	// Line 88, Address: 0x1b39c4, Func Offset: 0xd4
	// Line 89, Address: 0x1b39d0, Func Offset: 0xe0
	// Line 90, Address: 0x1b39dc, Func Offset: 0xec
	// Line 91, Address: 0x1b39e8, Func Offset: 0xf8
	// Line 92, Address: 0x1b39fc, Func Offset: 0x10c
	// Line 93, Address: 0x1b3a10, Func Offset: 0x120
	// Line 94, Address: 0x1b3a24, Func Offset: 0x134
	// Line 95, Address: 0x1b3a38, Func Offset: 0x148
	// Line 96, Address: 0x1b3a4c, Func Offset: 0x15c
	// Line 97, Address: 0x1b3a60, Func Offset: 0x170
	// Line 101, Address: 0x1b3a74, Func Offset: 0x184
	// Line 102, Address: 0x1b3a78, Func Offset: 0x188
	// Func End, Address: 0x1b3a88, Func Offset: 0x198
}

// 
// Start address: 0x1b3a90
int RoomNameTownEast(int tpwoin)
{
	// Line 107, Address: 0x1b3a90, Func Offset: 0
	// Line 108, Address: 0x1b3a98, Func Offset: 0x8
	// Line 114, Address: 0x1b3aec, Func Offset: 0x5c
	// Line 116, Address: 0x1b3af8, Func Offset: 0x68
	// Line 117, Address: 0x1b3afc, Func Offset: 0x6c
	// Func End, Address: 0x1b3b08, Func Offset: 0x78
}

// 
// Start address: 0x1b3b10
int RoomNameBowling(int tpwoin)
{
	// Line 122, Address: 0x1b3b10, Func Offset: 0
	// Line 123, Address: 0x1b3b18, Func Offset: 0x8
	// Line 124, Address: 0x1b3b48, Func Offset: 0x38
	// Line 125, Address: 0x1b3b54, Func Offset: 0x44
	// Line 126, Address: 0x1b3b60, Func Offset: 0x50
	// Line 128, Address: 0x1b3b6c, Func Offset: 0x5c
	// Line 129, Address: 0x1b3b70, Func Offset: 0x60
	// Func End, Address: 0x1b3b7c, Func Offset: 0x6c
}

// 
// Start address: 0x1b3b80
int RoomNameHeaven(int tpwoin)
{
	// Line 134, Address: 0x1b3b80, Func Offset: 0
	// Line 135, Address: 0x1b3b88, Func Offset: 0x8
	// Line 136, Address: 0x1b3ba4, Func Offset: 0x24
	// Line 137, Address: 0x1b3ba8, Func Offset: 0x28
	// Func End, Address: 0x1b3bb4, Func Offset: 0x34
}

// 
// Start address: 0x1b3bc0
int RoomNameApart(int tpwoin)
{
	// Line 142, Address: 0x1b3bc0, Func Offset: 0
	// Line 143, Address: 0x1b3bd0, Func Offset: 0x10
	// Line 147, Address: 0x1b3c3c, Func Offset: 0x7c
	// Line 151, Address: 0x1b3c48, Func Offset: 0x88
	// Line 153, Address: 0x1b3c54, Func Offset: 0x94
	// Line 154, Address: 0x1b3dc8, Func Offset: 0x208
	// Line 155, Address: 0x1b3dd4, Func Offset: 0x214
	// Line 156, Address: 0x1b3de0, Func Offset: 0x220
	// Line 157, Address: 0x1b3dec, Func Offset: 0x22c
	// Line 158, Address: 0x1b3df8, Func Offset: 0x238
	// Line 159, Address: 0x1b3e04, Func Offset: 0x244
	// Line 160, Address: 0x1b3e10, Func Offset: 0x250
	// Line 161, Address: 0x1b3e1c, Func Offset: 0x25c
	// Line 162, Address: 0x1b3e28, Func Offset: 0x268
	// Line 163, Address: 0x1b3e34, Func Offset: 0x274
	// Line 164, Address: 0x1b3e40, Func Offset: 0x280
	// Line 165, Address: 0x1b3e4c, Func Offset: 0x28c
	// Line 166, Address: 0x1b3e58, Func Offset: 0x298
	// Line 167, Address: 0x1b3e64, Func Offset: 0x2a4
	// Line 168, Address: 0x1b3e70, Func Offset: 0x2b0
	// Line 169, Address: 0x1b3e7c, Func Offset: 0x2bc
	// Line 170, Address: 0x1b3e88, Func Offset: 0x2c8
	// Line 171, Address: 0x1b3e94, Func Offset: 0x2d4
	// Line 172, Address: 0x1b3ea0, Func Offset: 0x2e0
	// Line 173, Address: 0x1b3eac, Func Offset: 0x2ec
	// Line 174, Address: 0x1b3eb8, Func Offset: 0x2f8
	// Line 175, Address: 0x1b3ec4, Func Offset: 0x304
	// Line 176, Address: 0x1b3ed0, Func Offset: 0x310
	// Line 177, Address: 0x1b3edc, Func Offset: 0x31c
	// Line 179, Address: 0x1b3ee8, Func Offset: 0x328
	// Line 180, Address: 0x1b3eec, Func Offset: 0x32c
	// Func End, Address: 0x1b3f00, Func Offset: 0x340
}

// 
// Start address: 0x1b3f00
int RoomNameHospital(int tpwoin)
{
	// Line 185, Address: 0x1b3f00, Func Offset: 0
	// Line 186, Address: 0x1b3f10, Func Offset: 0x10
	// Line 187, Address: 0x1b41c8, Func Offset: 0x2c8
	// Line 188, Address: 0x1b41d4, Func Offset: 0x2d4
	// Line 189, Address: 0x1b41e0, Func Offset: 0x2e0
	// Line 190, Address: 0x1b41ec, Func Offset: 0x2ec
	// Line 191, Address: 0x1b41f8, Func Offset: 0x2f8
	// Line 192, Address: 0x1b4204, Func Offset: 0x304
	// Line 193, Address: 0x1b4210, Func Offset: 0x310
	// Line 194, Address: 0x1b421c, Func Offset: 0x31c
	// Line 195, Address: 0x1b4228, Func Offset: 0x328
	// Line 196, Address: 0x1b4234, Func Offset: 0x334
	// Line 197, Address: 0x1b4240, Func Offset: 0x340
	// Line 198, Address: 0x1b424c, Func Offset: 0x34c
	// Line 199, Address: 0x1b4258, Func Offset: 0x358
	// Line 200, Address: 0x1b4264, Func Offset: 0x364
	// Line 201, Address: 0x1b4270, Func Offset: 0x370
	// Line 202, Address: 0x1b427c, Func Offset: 0x37c
	// Line 203, Address: 0x1b4288, Func Offset: 0x388
	// Line 204, Address: 0x1b4294, Func Offset: 0x394
	// Line 205, Address: 0x1b42a0, Func Offset: 0x3a0
	// Line 206, Address: 0x1b42ac, Func Offset: 0x3ac
	// Line 207, Address: 0x1b42b8, Func Offset: 0x3b8
	// Line 208, Address: 0x1b42c4, Func Offset: 0x3c4
	// Line 209, Address: 0x1b42d0, Func Offset: 0x3d0
	// Line 210, Address: 0x1b42dc, Func Offset: 0x3dc
	// Line 211, Address: 0x1b42e8, Func Offset: 0x3e8
	// Line 212, Address: 0x1b42f4, Func Offset: 0x3f4
	// Line 213, Address: 0x1b4300, Func Offset: 0x400
	// Line 214, Address: 0x1b430c, Func Offset: 0x40c
	// Line 215, Address: 0x1b4318, Func Offset: 0x418
	// Line 216, Address: 0x1b4324, Func Offset: 0x424
	// Line 217, Address: 0x1b4330, Func Offset: 0x430
	// Line 218, Address: 0x1b433c, Func Offset: 0x43c
	// Line 219, Address: 0x1b4348, Func Offset: 0x448
	// Line 220, Address: 0x1b4354, Func Offset: 0x454
	// Line 221, Address: 0x1b4360, Func Offset: 0x460
	// Line 222, Address: 0x1b436c, Func Offset: 0x46c
	// Line 223, Address: 0x1b4378, Func Offset: 0x478
	// Line 224, Address: 0x1b4384, Func Offset: 0x484
	// Line 225, Address: 0x1b4390, Func Offset: 0x490
	// Line 226, Address: 0x1b439c, Func Offset: 0x49c
	// Line 227, Address: 0x1b43a8, Func Offset: 0x4a8
	// Line 228, Address: 0x1b43b4, Func Offset: 0x4b4
	// Line 229, Address: 0x1b43c0, Func Offset: 0x4c0
	// Line 230, Address: 0x1b43cc, Func Offset: 0x4cc
	// Line 231, Address: 0x1b43d8, Func Offset: 0x4d8
	// Line 232, Address: 0x1b43e4, Func Offset: 0x4e4
	// Line 233, Address: 0x1b43f0, Func Offset: 0x4f0
	// Line 234, Address: 0x1b43fc, Func Offset: 0x4fc
	// Line 235, Address: 0x1b4408, Func Offset: 0x508
	// Line 236, Address: 0x1b4414, Func Offset: 0x514
	// Line 237, Address: 0x1b4420, Func Offset: 0x520
	// Line 239, Address: 0x1b442c, Func Offset: 0x52c
	// Line 240, Address: 0x1b4430, Func Offset: 0x530
	// Func End, Address: 0x1b4444, Func Offset: 0x544
}

// 
// Start address: 0x1b4450
int RoomNameDelusion(int tpwoin)
{
	// Line 245, Address: 0x1b4450, Func Offset: 0
	// Line 246, Address: 0x1b4460, Func Offset: 0x10
	// Line 250, Address: 0x1b4670, Func Offset: 0x220
	// Line 252, Address: 0x1b467c, Func Offset: 0x22c
	// Line 254, Address: 0x1b4688, Func Offset: 0x238
	// Line 256, Address: 0x1b4694, Func Offset: 0x244
	// Line 257, Address: 0x1b46a0, Func Offset: 0x250
	// Line 259, Address: 0x1b46ac, Func Offset: 0x25c
	// Line 261, Address: 0x1b46b8, Func Offset: 0x268
	// Line 262, Address: 0x1b46c4, Func Offset: 0x274
	// Line 264, Address: 0x1b46d0, Func Offset: 0x280
	// Line 266, Address: 0x1b46dc, Func Offset: 0x28c
	// Line 269, Address: 0x1b46e8, Func Offset: 0x298
	// Line 271, Address: 0x1b46f4, Func Offset: 0x2a4
	// Line 274, Address: 0x1b4700, Func Offset: 0x2b0
	// Line 276, Address: 0x1b470c, Func Offset: 0x2bc
	// Line 278, Address: 0x1b4718, Func Offset: 0x2c8
	// Line 280, Address: 0x1b4724, Func Offset: 0x2d4
	// Line 281, Address: 0x1b4730, Func Offset: 0x2e0
	// Line 283, Address: 0x1b473c, Func Offset: 0x2ec
	// Line 285, Address: 0x1b4748, Func Offset: 0x2f8
	// Line 287, Address: 0x1b4754, Func Offset: 0x304
	// Line 289, Address: 0x1b4760, Func Offset: 0x310
	// Line 291, Address: 0x1b476c, Func Offset: 0x31c
	// Line 292, Address: 0x1b4928, Func Offset: 0x4d8
	// Line 293, Address: 0x1b4934, Func Offset: 0x4e4
	// Line 294, Address: 0x1b4940, Func Offset: 0x4f0
	// Line 295, Address: 0x1b494c, Func Offset: 0x4fc
	// Line 296, Address: 0x1b4958, Func Offset: 0x508
	// Line 297, Address: 0x1b4964, Func Offset: 0x514
	// Line 298, Address: 0x1b4970, Func Offset: 0x520
	// Line 299, Address: 0x1b497c, Func Offset: 0x52c
	// Line 300, Address: 0x1b4988, Func Offset: 0x538
	// Line 301, Address: 0x1b4994, Func Offset: 0x544
	// Line 302, Address: 0x1b49a0, Func Offset: 0x550
	// Line 303, Address: 0x1b49ac, Func Offset: 0x55c
	// Line 304, Address: 0x1b49b8, Func Offset: 0x568
	// Line 305, Address: 0x1b49c4, Func Offset: 0x574
	// Line 306, Address: 0x1b49d0, Func Offset: 0x580
	// Line 307, Address: 0x1b49dc, Func Offset: 0x58c
	// Line 308, Address: 0x1b49e8, Func Offset: 0x598
	// Line 309, Address: 0x1b49f4, Func Offset: 0x5a4
	// Line 310, Address: 0x1b4a00, Func Offset: 0x5b0
	// Line 311, Address: 0x1b4a0c, Func Offset: 0x5bc
	// Line 312, Address: 0x1b4a18, Func Offset: 0x5c8
	// Line 313, Address: 0x1b4a24, Func Offset: 0x5d4
	// Line 314, Address: 0x1b4a30, Func Offset: 0x5e0
	// Line 315, Address: 0x1b4a3c, Func Offset: 0x5ec
	// Line 316, Address: 0x1b4a48, Func Offset: 0x5f8
	// Line 317, Address: 0x1b4a54, Func Offset: 0x604
	// Line 318, Address: 0x1b4a60, Func Offset: 0x610
	// Line 319, Address: 0x1b4a6c, Func Offset: 0x61c
	// Line 320, Address: 0x1b4a78, Func Offset: 0x628
	// Line 321, Address: 0x1b4a84, Func Offset: 0x634
	// Line 323, Address: 0x1b4a90, Func Offset: 0x640
	// Line 324, Address: 0x1b4a94, Func Offset: 0x644
	// Func End, Address: 0x1b4aa8, Func Offset: 0x658
}

// 
// Start address: 0x1b4ab0
int RoomNameHotelFace(int tpwoin)
{
	// Line 329, Address: 0x1b4ab0, Func Offset: 0
	// Line 330, Address: 0x1b4ac0, Func Offset: 0x10
	// Line 332, Address: 0x1b4ae4, Func Offset: 0x34
	// Line 334, Address: 0x1b4af0, Func Offset: 0x40
	// Line 335, Address: 0x1b4c58, Func Offset: 0x1a8
	// Line 336, Address: 0x1b4c64, Func Offset: 0x1b4
	// Line 337, Address: 0x1b4c70, Func Offset: 0x1c0
	// Line 338, Address: 0x1b4c7c, Func Offset: 0x1cc
	// Line 339, Address: 0x1b4c88, Func Offset: 0x1d8
	// Line 340, Address: 0x1b4c94, Func Offset: 0x1e4
	// Line 341, Address: 0x1b4ca0, Func Offset: 0x1f0
	// Line 342, Address: 0x1b4cac, Func Offset: 0x1fc
	// Line 343, Address: 0x1b4cb8, Func Offset: 0x208
	// Line 344, Address: 0x1b4cc4, Func Offset: 0x214
	// Line 345, Address: 0x1b4cd0, Func Offset: 0x220
	// Line 346, Address: 0x1b4cdc, Func Offset: 0x22c
	// Line 347, Address: 0x1b4ce8, Func Offset: 0x238
	// Line 348, Address: 0x1b4cf4, Func Offset: 0x244
	// Line 349, Address: 0x1b4d00, Func Offset: 0x250
	// Line 350, Address: 0x1b4d0c, Func Offset: 0x25c
	// Line 351, Address: 0x1b4d18, Func Offset: 0x268
	// Line 352, Address: 0x1b4d24, Func Offset: 0x274
	// Line 353, Address: 0x1b4d30, Func Offset: 0x280
	// Line 354, Address: 0x1b4d3c, Func Offset: 0x28c
	// Line 355, Address: 0x1b4d48, Func Offset: 0x298
	// Line 356, Address: 0x1b4d54, Func Offset: 0x2a4
	// Line 357, Address: 0x1b4d60, Func Offset: 0x2b0
	// Line 359, Address: 0x1b4d6c, Func Offset: 0x2bc
	// Line 360, Address: 0x1b4d70, Func Offset: 0x2c0
	// Func End, Address: 0x1b4d84, Func Offset: 0x2d4
}

// 
// Start address: 0x1b4d90
int RoomNameHotelBack(int tpwoin)
{
	// Line 365, Address: 0x1b4d90, Func Offset: 0
	// Line 366, Address: 0x1b4da0, Func Offset: 0x10
	// Line 367, Address: 0x1b4ecc, Func Offset: 0x13c
	// Line 368, Address: 0x1b4ed8, Func Offset: 0x148
	// Line 369, Address: 0x1b4ee4, Func Offset: 0x154
	// Line 370, Address: 0x1b4ef0, Func Offset: 0x160
	// Line 371, Address: 0x1b4efc, Func Offset: 0x16c
	// Line 372, Address: 0x1b4f08, Func Offset: 0x178
	// Line 373, Address: 0x1b4f14, Func Offset: 0x184
	// Line 374, Address: 0x1b4f20, Func Offset: 0x190
	// Line 375, Address: 0x1b4f2c, Func Offset: 0x19c
	// Line 376, Address: 0x1b4f38, Func Offset: 0x1a8
	// Line 377, Address: 0x1b4f44, Func Offset: 0x1b4
	// Line 378, Address: 0x1b4f50, Func Offset: 0x1c0
	// Line 379, Address: 0x1b4f5c, Func Offset: 0x1cc
	// Line 380, Address: 0x1b4f68, Func Offset: 0x1d8
	// Line 381, Address: 0x1b4f74, Func Offset: 0x1e4
	// Line 382, Address: 0x1b4f80, Func Offset: 0x1f0
	// Line 383, Address: 0x1b4f8c, Func Offset: 0x1fc
	// Line 384, Address: 0x1b4f98, Func Offset: 0x208
	// Line 386, Address: 0x1b4fa4, Func Offset: 0x214
	// Line 387, Address: 0x1b4fa8, Func Offset: 0x218
	// Func End, Address: 0x1b4fbc, Func Offset: 0x22c
}

// 
// Start address: 0x1b4fc0
int BlockNumber(int* ret, int glb_crd, float pos_x, float pos_z)
{
	int i;
	int room;
	int z;
	int x;
	int tpwoin;
	unsigned char room_to_block[4][183];
	// Line 400, Address: 0x1b4fc0, Func Offset: 0
	// Line 592, Address: 0x1b4fe8, Func Offset: 0x28
	// Line 594, Address: 0x1b5000, Func Offset: 0x40
	// Line 595, Address: 0x1b502c, Func Offset: 0x6c
	// Line 597, Address: 0x1b5040, Func Offset: 0x80
	// Line 598, Address: 0x1b506c, Func Offset: 0xac
	// Line 599, Address: 0x1b5098, Func Offset: 0xd8
	// Line 601, Address: 0x1b50a0, Func Offset: 0xe0
	// Line 603, Address: 0x1b50d8, Func Offset: 0x118
	// Line 605, Address: 0x1b50f4, Func Offset: 0x134
	// Line 607, Address: 0x1b5110, Func Offset: 0x150
	// Line 609, Address: 0x1b512c, Func Offset: 0x16c
	// Line 611, Address: 0x1b5148, Func Offset: 0x188
	// Line 612, Address: 0x1b5154, Func Offset: 0x194
	// Line 613, Address: 0x1b5194, Func Offset: 0x1d4
	// Line 615, Address: 0x1b51a0, Func Offset: 0x1e0
	// Line 616, Address: 0x1b51a4, Func Offset: 0x1e4
	// Func End, Address: 0x1b51c4, Func Offset: 0x204
}

// 
// Start address: 0x1b51d0
int BlockNumberA(int tpwoin)
{
	// Line 621, Address: 0x1b51d0, Func Offset: 0
	// Line 622, Address: 0x1b51d8, Func Offset: 0x8
	// Line 623, Address: 0x1b52f8, Func Offset: 0x128
	// Line 624, Address: 0x1b5304, Func Offset: 0x134
	// Line 625, Address: 0x1b5310, Func Offset: 0x140
	// Line 626, Address: 0x1b531c, Func Offset: 0x14c
	// Line 627, Address: 0x1b5328, Func Offset: 0x158
	// Line 628, Address: 0x1b5334, Func Offset: 0x164
	// Line 629, Address: 0x1b5340, Func Offset: 0x170
	// Line 630, Address: 0x1b534c, Func Offset: 0x17c
	// Line 631, Address: 0x1b5358, Func Offset: 0x188
	// Line 632, Address: 0x1b5364, Func Offset: 0x194
	// Line 633, Address: 0x1b5370, Func Offset: 0x1a0
	// Line 634, Address: 0x1b537c, Func Offset: 0x1ac
	// Line 635, Address: 0x1b5388, Func Offset: 0x1b8
	// Line 636, Address: 0x1b5394, Func Offset: 0x1c4
	// Line 637, Address: 0x1b53a0, Func Offset: 0x1d0
	// Line 638, Address: 0x1b53ac, Func Offset: 0x1dc
	// Line 639, Address: 0x1b53b8, Func Offset: 0x1e8
	// Line 640, Address: 0x1b53c4, Func Offset: 0x1f4
	// Line 641, Address: 0x1b53d0, Func Offset: 0x200
	// Line 642, Address: 0x1b53dc, Func Offset: 0x20c
	// Line 643, Address: 0x1b53e8, Func Offset: 0x218
	// Line 644, Address: 0x1b53f4, Func Offset: 0x224
	// Line 645, Address: 0x1b5400, Func Offset: 0x230
	// Line 647, Address: 0x1b540c, Func Offset: 0x23c
	// Line 648, Address: 0x1b5410, Func Offset: 0x240
	// Func End, Address: 0x1b541c, Func Offset: 0x24c
}

// 
// Start address: 0x1b5420
int BlockNumberB(int tpwoin)
{
	// Line 653, Address: 0x1b5420, Func Offset: 0
	// Line 654, Address: 0x1b5428, Func Offset: 0x8
	// Line 655, Address: 0x1b56c8, Func Offset: 0x2a8
	// Line 656, Address: 0x1b56d4, Func Offset: 0x2b4
	// Line 657, Address: 0x1b56e0, Func Offset: 0x2c0
	// Line 658, Address: 0x1b56ec, Func Offset: 0x2cc
	// Line 659, Address: 0x1b56f8, Func Offset: 0x2d8
	// Line 660, Address: 0x1b5704, Func Offset: 0x2e4
	// Line 661, Address: 0x1b5710, Func Offset: 0x2f0
	// Line 662, Address: 0x1b571c, Func Offset: 0x2fc
	// Line 663, Address: 0x1b5728, Func Offset: 0x308
	// Line 664, Address: 0x1b5734, Func Offset: 0x314
	// Line 665, Address: 0x1b5740, Func Offset: 0x320
	// Line 666, Address: 0x1b574c, Func Offset: 0x32c
	// Line 667, Address: 0x1b5758, Func Offset: 0x338
	// Line 668, Address: 0x1b5764, Func Offset: 0x344
	// Line 669, Address: 0x1b5770, Func Offset: 0x350
	// Line 670, Address: 0x1b577c, Func Offset: 0x35c
	// Line 671, Address: 0x1b5788, Func Offset: 0x368
	// Line 672, Address: 0x1b5794, Func Offset: 0x374
	// Line 673, Address: 0x1b57a0, Func Offset: 0x380
	// Line 674, Address: 0x1b57ac, Func Offset: 0x38c
	// Line 675, Address: 0x1b57b8, Func Offset: 0x398
	// Line 676, Address: 0x1b57c4, Func Offset: 0x3a4
	// Line 677, Address: 0x1b57d0, Func Offset: 0x3b0
	// Line 678, Address: 0x1b57dc, Func Offset: 0x3bc
	// Line 679, Address: 0x1b57e8, Func Offset: 0x3c8
	// Line 680, Address: 0x1b57f4, Func Offset: 0x3d4
	// Line 681, Address: 0x1b5800, Func Offset: 0x3e0
	// Line 682, Address: 0x1b580c, Func Offset: 0x3ec
	// Line 683, Address: 0x1b5818, Func Offset: 0x3f8
	// Line 684, Address: 0x1b5824, Func Offset: 0x404
	// Line 685, Address: 0x1b5830, Func Offset: 0x410
	// Line 686, Address: 0x1b583c, Func Offset: 0x41c
	// Line 687, Address: 0x1b5848, Func Offset: 0x428
	// Line 688, Address: 0x1b5854, Func Offset: 0x434
	// Line 689, Address: 0x1b5860, Func Offset: 0x440
	// Line 690, Address: 0x1b586c, Func Offset: 0x44c
	// Line 691, Address: 0x1b5878, Func Offset: 0x458
	// Line 692, Address: 0x1b5884, Func Offset: 0x464
	// Line 693, Address: 0x1b5890, Func Offset: 0x470
	// Line 694, Address: 0x1b589c, Func Offset: 0x47c
	// Line 695, Address: 0x1b58a8, Func Offset: 0x488
	// Line 696, Address: 0x1b58b4, Func Offset: 0x494
	// Line 697, Address: 0x1b58c0, Func Offset: 0x4a0
	// Line 698, Address: 0x1b58cc, Func Offset: 0x4ac
	// Line 699, Address: 0x1b58d8, Func Offset: 0x4b8
	// Line 700, Address: 0x1b58e4, Func Offset: 0x4c4
	// Line 701, Address: 0x1b58f0, Func Offset: 0x4d0
	// Line 702, Address: 0x1b58fc, Func Offset: 0x4dc
	// Line 703, Address: 0x1b5908, Func Offset: 0x4e8
	// Line 704, Address: 0x1b5914, Func Offset: 0x4f4
	// Line 705, Address: 0x1b5920, Func Offset: 0x500
	// Line 706, Address: 0x1b592c, Func Offset: 0x50c
	// Line 707, Address: 0x1b5938, Func Offset: 0x518
	// Line 708, Address: 0x1b5944, Func Offset: 0x524
	// Line 709, Address: 0x1b5950, Func Offset: 0x530
	// Line 711, Address: 0x1b595c, Func Offset: 0x53c
	// Line 712, Address: 0x1b5960, Func Offset: 0x540
	// Func End, Address: 0x1b596c, Func Offset: 0x54c
}

// 
// Start address: 0x1b5970
int BlockNumberC(int tpwoin)
{
	// Line 717, Address: 0x1b5970, Func Offset: 0
	// Line 718, Address: 0x1b5978, Func Offset: 0x8
	// Line 719, Address: 0x1b5cd8, Func Offset: 0x368
	// Line 720, Address: 0x1b5ce4, Func Offset: 0x374
	// Line 721, Address: 0x1b5cf0, Func Offset: 0x380
	// Line 722, Address: 0x1b5cfc, Func Offset: 0x38c
	// Line 723, Address: 0x1b5d08, Func Offset: 0x398
	// Line 724, Address: 0x1b5d14, Func Offset: 0x3a4
	// Line 725, Address: 0x1b5d20, Func Offset: 0x3b0
	// Line 726, Address: 0x1b5d2c, Func Offset: 0x3bc
	// Line 727, Address: 0x1b5d38, Func Offset: 0x3c8
	// Line 728, Address: 0x1b5d44, Func Offset: 0x3d4
	// Line 729, Address: 0x1b5d50, Func Offset: 0x3e0
	// Line 730, Address: 0x1b5d5c, Func Offset: 0x3ec
	// Line 731, Address: 0x1b5d68, Func Offset: 0x3f8
	// Line 732, Address: 0x1b5d74, Func Offset: 0x404
	// Line 733, Address: 0x1b5d80, Func Offset: 0x410
	// Line 734, Address: 0x1b5d8c, Func Offset: 0x41c
	// Line 735, Address: 0x1b5d98, Func Offset: 0x428
	// Line 736, Address: 0x1b5da4, Func Offset: 0x434
	// Line 737, Address: 0x1b5db0, Func Offset: 0x440
	// Line 738, Address: 0x1b5dbc, Func Offset: 0x44c
	// Line 739, Address: 0x1b5dc8, Func Offset: 0x458
	// Line 740, Address: 0x1b5dd4, Func Offset: 0x464
	// Line 741, Address: 0x1b5de0, Func Offset: 0x470
	// Line 742, Address: 0x1b5dec, Func Offset: 0x47c
	// Line 743, Address: 0x1b5df8, Func Offset: 0x488
	// Line 744, Address: 0x1b5e04, Func Offset: 0x494
	// Line 745, Address: 0x1b5e10, Func Offset: 0x4a0
	// Line 746, Address: 0x1b5e1c, Func Offset: 0x4ac
	// Line 747, Address: 0x1b5e28, Func Offset: 0x4b8
	// Line 748, Address: 0x1b5e34, Func Offset: 0x4c4
	// Line 749, Address: 0x1b5e40, Func Offset: 0x4d0
	// Line 750, Address: 0x1b5e4c, Func Offset: 0x4dc
	// Line 751, Address: 0x1b5e58, Func Offset: 0x4e8
	// Line 752, Address: 0x1b5e64, Func Offset: 0x4f4
	// Line 753, Address: 0x1b5e70, Func Offset: 0x500
	// Line 754, Address: 0x1b5e7c, Func Offset: 0x50c
	// Line 755, Address: 0x1b5e88, Func Offset: 0x518
	// Line 756, Address: 0x1b5e94, Func Offset: 0x524
	// Line 757, Address: 0x1b5ea0, Func Offset: 0x530
	// Line 758, Address: 0x1b5eac, Func Offset: 0x53c
	// Line 759, Address: 0x1b5eb8, Func Offset: 0x548
	// Line 760, Address: 0x1b5ec4, Func Offset: 0x554
	// Line 761, Address: 0x1b5ed0, Func Offset: 0x560
	// Line 762, Address: 0x1b5edc, Func Offset: 0x56c
	// Line 763, Address: 0x1b5ee8, Func Offset: 0x578
	// Line 764, Address: 0x1b5ef4, Func Offset: 0x584
	// Line 765, Address: 0x1b5f00, Func Offset: 0x590
	// Line 766, Address: 0x1b5f0c, Func Offset: 0x59c
	// Line 767, Address: 0x1b5f18, Func Offset: 0x5a8
	// Line 768, Address: 0x1b5f24, Func Offset: 0x5b4
	// Line 769, Address: 0x1b5f30, Func Offset: 0x5c0
	// Line 770, Address: 0x1b5f3c, Func Offset: 0x5cc
	// Line 771, Address: 0x1b5f48, Func Offset: 0x5d8
	// Line 772, Address: 0x1b5f54, Func Offset: 0x5e4
	// Line 773, Address: 0x1b5f60, Func Offset: 0x5f0
	// Line 774, Address: 0x1b5f6c, Func Offset: 0x5fc
	// Line 775, Address: 0x1b5f78, Func Offset: 0x608
	// Line 776, Address: 0x1b5f84, Func Offset: 0x614
	// Line 777, Address: 0x1b5f90, Func Offset: 0x620
	// Line 778, Address: 0x1b5f9c, Func Offset: 0x62c
	// Line 779, Address: 0x1b5fa8, Func Offset: 0x638
	// Line 780, Address: 0x1b5fb4, Func Offset: 0x644
	// Line 781, Address: 0x1b5fc0, Func Offset: 0x650
	// Line 782, Address: 0x1b5fcc, Func Offset: 0x65c
	// Line 783, Address: 0x1b5fd8, Func Offset: 0x668
	// Line 784, Address: 0x1b5fe4, Func Offset: 0x674
	// Line 785, Address: 0x1b5ff0, Func Offset: 0x680
	// Line 786, Address: 0x1b5ffc, Func Offset: 0x68c
	// Line 787, Address: 0x1b6008, Func Offset: 0x698
	// Line 788, Address: 0x1b6014, Func Offset: 0x6a4
	// Line 789, Address: 0x1b6020, Func Offset: 0x6b0
	// Line 791, Address: 0x1b602c, Func Offset: 0x6bc
	// Line 792, Address: 0x1b6030, Func Offset: 0x6c0
	// Func End, Address: 0x1b603c, Func Offset: 0x6cc
}

// 
// Start address: 0x1b6040
int BlockNumberD(int tpwoin)
{
	// Line 797, Address: 0x1b6040, Func Offset: 0
	// Line 798, Address: 0x1b6048, Func Offset: 0x8
	// Line 799, Address: 0x1b60a8, Func Offset: 0x68
	// Line 800, Address: 0x1b60b4, Func Offset: 0x74
	// Line 801, Address: 0x1b60c0, Func Offset: 0x80
	// Line 802, Address: 0x1b60cc, Func Offset: 0x8c
	// Line 803, Address: 0x1b60d8, Func Offset: 0x98
	// Line 804, Address: 0x1b60e4, Func Offset: 0xa4
	// Line 805, Address: 0x1b60f0, Func Offset: 0xb0
	// Line 807, Address: 0x1b60fc, Func Offset: 0xbc
	// Line 808, Address: 0x1b6100, Func Offset: 0xc0
	// Func End, Address: 0x1b610c, Func Offset: 0xcc
}

// 
// Start address: 0x1b6110
int BgIsOut(int glb_crd)
{
	// Line 818, Address: 0x1b6110, Func Offset: 0
	// Line 819, Address: 0x1b6124, Func Offset: 0x14
	// Line 821, Address: 0x1b6140, Func Offset: 0x30
	// Line 823, Address: 0x1b6190, Func Offset: 0x80
	// Line 824, Address: 0x1b61b8, Func Offset: 0xa8
	// Func End, Address: 0x1b61d0, Func Offset: 0xc0
}

