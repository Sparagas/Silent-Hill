typedef struct SubCharacter;
typedef struct _anon0;
typedef struct Item;
typedef struct shSkelton;
typedef struct shBattleInfo;
typedef struct _anon1;
typedef struct _anon2;
typedef struct Model_List;
typedef struct shAttackInfo;
typedef struct PAD_3D;
typedef struct _CL_VHIT_WALL;
typedef union _anon3;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _anon4;
typedef struct _CL_VHIT_CHARA;
typedef struct PAD_2D;
typedef struct SubObject;
typedef struct _CL_VHIT_RESULT;
typedef struct PAD_INFO;
typedef union _anon5;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct _anon6;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct shPlayerWork;
typedef struct _anon7;
typedef struct shBattleFight;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct shBattleShot;
typedef struct Playing_Info;
typedef struct shBattleArea;

typedef void(*type_0)(SubCharacter*);
typedef void(*type_10)(SubCharacter*);
typedef void(*type_12)(SubCharacter*);
typedef int(*type_15)();
typedef void(*type_16)();
typedef void(*type_26)(SubCharacter*);

typedef unsigned char type_1[4];
typedef unsigned int type_2[2];
typedef unsigned short type_3[11];
typedef unsigned char type_4[10];
typedef unsigned short type_5[3];
typedef float type_6[4];
typedef unsigned char type_7[4];
typedef unsigned char type_8[4];
typedef PAD_INFO type_9[10];
typedef unsigned char type_11[2];
typedef unsigned char type_13[2];
typedef unsigned char type_14[10];
typedef int type_17[4];
typedef int type_18[4][11];
typedef unsigned char type_19[13];
typedef float type_20[4][2];
typedef float type_21[4];
typedef float type_22[4][4];
typedef float type_23[4];
typedef unsigned char type_24[2];
typedef unsigned char type_25[34];
typedef shAttackInfo type_27[46];

struct SubCharacter
{
	int index;
	unsigned int status;
	unsigned int sub_status;
	unsigned int sub_st;
	short kind;
	short id;
	unsigned int step;
	_anon6 pos;
	_anon6 rot;
	_anon6 pos_spd;
	_anon6 rot_spd;
	_anon7 mat;
	shSkelton* sk_top;
	float eye_y;
	float center_y;
	float spd;
	float spd_org;
	float spd_y;
	float spd_roty;
	float grnd_normal[4];
	float grnd_height;
	_anon6 b_pos;
	_anon6 b_rot;
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
	int flag;
	int cond;
	int rslt0;
	int rslt1;
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

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon7 src_m;
	_anon6 src_t;
	_anon7 des_m;
	_anon6 des_t;
	_anon6 axis;
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

struct _anon1
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
};

struct _anon2
{
	_anon0* ev_list;
	unsigned char* ev_pos;
	int(*ev_prog)();
	_anon1* gi_list;
	Model_List* mdl_list;
	_anon4* en_list;
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

struct Model_List
{
	short kind;
	short id;
	short flag_off;
	short flag_on;
	float pos[4];
	float rot[4];
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

struct PAD_3D
{
	char round_way;
	unsigned char reserved1;
	unsigned char lslide;
	unsigned char rslide;
	unsigned char lturn180;
	unsigned char rturn180;
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

struct _anon4
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

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
};

struct SubObject
{
	unsigned int status;
	unsigned int sub_status;
	unsigned int sub_st;
	short kind;
	short id;
	unsigned int step;
	_anon6 pos;
	_anon6 rot;
	_anon6 pos_spd;
	_anon6 rot_spd;
	_anon7 mat;
	void(*function)(SubCharacter*);
	void(*effecter_function)(SubCharacter*);
	SubObject* pre;
	SubObject* next;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon5 hobj;
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

union _anon5
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

struct _anon6
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

struct shPlayerWork
{
	SubCharacter* player;
	_anon6 dist_rot;
	_anon6 dist_pos;
	_anon6 pos;
	_anon6 rot;
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
	_anon6 tgt_body_angle;
	_anon6 tgt_neck_angle;
	_anon6 tgt_arms_angle;
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
	float d[4][4];
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
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

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct Playing_Info
{
	unsigned char stage;
	unsigned char enemy_off;
	unsigned char memo_select;
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
};

struct shBattleArea
{
	float center;
	float radius;
};

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
Item item;
Playing_Info playing;
shPlayerWork sh2jms;
_anon2* stage;

void ItemDataInit();
void ItemGet(int kind);
int ItemUse(int kind);
int ItemWeaponShoot(int kind, int use);
int ItemWeaponReload(int kind, int use);
int ItemMedicineUse(int kind);
int ItemEventCheck(int kind_0, int kind_1, int kind_2);
int ItemCombinationUseCheck(int kind_0, int kind_1, int kind_2);
void ItemPutForShelf();

// 
// Start address: 0x1b1d70
void ItemDataInit()
{
	// Line 41, Address: 0x1b1d70, Func Offset: 0
	// Line 43, Address: 0x1b1d78, Func Offset: 0x8
	// Line 51, Address: 0x1b1d8c, Func Offset: 0x1c
	// Func End, Address: 0x1b1d9c, Func Offset: 0x2c
}

// 
// Start address: 0x1b1da0
void ItemGet(int kind)
{
	int work;
	// Line 63, Address: 0x1b1da0, Func Offset: 0
	// Line 66, Address: 0x1b1dcc, Func Offset: 0x2c
	// Line 68, Address: 0x1b1df4, Func Offset: 0x54
	// Line 70, Address: 0x1b1e00, Func Offset: 0x60
	// Line 72, Address: 0x1b1e0c, Func Offset: 0x6c
	// Line 73, Address: 0x1b1e18, Func Offset: 0x78
	// Line 76, Address: 0x1b1e24, Func Offset: 0x84
	// Line 77, Address: 0x1b1e30, Func Offset: 0x90
	// Line 81, Address: 0x1b1e38, Func Offset: 0x98
	// Line 85, Address: 0x1b1e64, Func Offset: 0xc4
	// Line 90, Address: 0x1b1e74, Func Offset: 0xd4
	// Line 92, Address: 0x1b1eb4, Func Offset: 0x114
	// Func End, Address: 0x1b1ebc, Func Offset: 0x11c
}

// 
// Start address: 0x1b1ec0
int ItemUse(int kind)
{
	// Line 101, Address: 0x1b1ec0, Func Offset: 0
	// Line 103, Address: 0x1b1ec8, Func Offset: 0x8
	// Line 104, Address: 0x1b1f0c, Func Offset: 0x4c
	// Line 105, Address: 0x1b1f2c, Func Offset: 0x6c
	// Line 108, Address: 0x1b1f58, Func Offset: 0x98
	// Line 109, Address: 0x1b1f68, Func Offset: 0xa8
	// Line 111, Address: 0x1b1f98, Func Offset: 0xd8
	// Line 112, Address: 0x1b1fd0, Func Offset: 0x110
	// Line 113, Address: 0x1b1fd8, Func Offset: 0x118
	// Line 115, Address: 0x1b2008, Func Offset: 0x148
	// Line 116, Address: 0x1b2020, Func Offset: 0x160
	// Line 117, Address: 0x1b2038, Func Offset: 0x178
	// Line 119, Address: 0x1b2040, Func Offset: 0x180
	// Line 120, Address: 0x1b205c, Func Offset: 0x19c
	// Line 121, Address: 0x1b2078, Func Offset: 0x1b8
	// Line 123, Address: 0x1b2080, Func Offset: 0x1c0
	// Line 124, Address: 0x1b209c, Func Offset: 0x1dc
	// Line 125, Address: 0x1b20b8, Func Offset: 0x1f8
	// Line 127, Address: 0x1b20c0, Func Offset: 0x200
	// Line 128, Address: 0x1b20dc, Func Offset: 0x21c
	// Line 129, Address: 0x1b20f8, Func Offset: 0x238
	// Line 131, Address: 0x1b2100, Func Offset: 0x240
	// Line 132, Address: 0x1b211c, Func Offset: 0x25c
	// Line 133, Address: 0x1b2138, Func Offset: 0x278
	// Line 135, Address: 0x1b2140, Func Offset: 0x280
	// Line 136, Address: 0x1b215c, Func Offset: 0x29c
	// Line 137, Address: 0x1b2178, Func Offset: 0x2b8
	// Line 139, Address: 0x1b2180, Func Offset: 0x2c0
	// Line 140, Address: 0x1b219c, Func Offset: 0x2dc
	// Line 141, Address: 0x1b21b8, Func Offset: 0x2f8
	// Line 142, Address: 0x1b21d4, Func Offset: 0x314
	// Line 144, Address: 0x1b21dc, Func Offset: 0x31c
	// Line 145, Address: 0x1b21f8, Func Offset: 0x338
	// Line 146, Address: 0x1b2214, Func Offset: 0x354
	// Line 150, Address: 0x1b2230, Func Offset: 0x370
	// Line 151, Address: 0x1b2234, Func Offset: 0x374
	// Func End, Address: 0x1b2240, Func Offset: 0x380
}

// 
// Start address: 0x1b2240
int ItemWeaponShoot(int kind, int use)
{
	// Line 163, Address: 0x1b2240, Func Offset: 0
	// Line 164, Address: 0x1b2250, Func Offset: 0x10
	// Line 166, Address: 0x1b226c, Func Offset: 0x2c
	// Line 173, Address: 0x1b22a0, Func Offset: 0x60
	// Line 177, Address: 0x1b22ac, Func Offset: 0x6c
	// Line 178, Address: 0x1b22ec, Func Offset: 0xac
	// Line 179, Address: 0x1b2304, Func Offset: 0xc4
	// Line 180, Address: 0x1b2320, Func Offset: 0xe0
	// Func End, Address: 0x1b2330, Func Offset: 0xf0
}

// 
// Start address: 0x1b2330
int ItemWeaponReload(int kind, int use)
{
	int work;
	int bullet;
	int weapon;
	// Line 193, Address: 0x1b2330, Func Offset: 0
	// Line 198, Address: 0x1b234c, Func Offset: 0x1c
	// Line 200, Address: 0x1b2368, Func Offset: 0x38
	// Line 204, Address: 0x1b2398, Func Offset: 0x68
	// Line 205, Address: 0x1b239c, Func Offset: 0x6c
	// Line 206, Address: 0x1b23a4, Func Offset: 0x74
	// Line 210, Address: 0x1b23ac, Func Offset: 0x7c
	// Line 211, Address: 0x1b23b4, Func Offset: 0x84
	// Line 212, Address: 0x1b23b8, Func Offset: 0x88
	// Line 214, Address: 0x1b23c0, Func Offset: 0x90
	// Line 215, Address: 0x1b23d8, Func Offset: 0xa8
	// Line 216, Address: 0x1b23e4, Func Offset: 0xb4
	// Line 218, Address: 0x1b23f0, Func Offset: 0xc0
	// Line 222, Address: 0x1b23fc, Func Offset: 0xcc
	// Line 225, Address: 0x1b2428, Func Offset: 0xf8
	// Line 228, Address: 0x1b247c, Func Offset: 0x14c
	// Line 229, Address: 0x1b24ac, Func Offset: 0x17c
	// Line 231, Address: 0x1b24c0, Func Offset: 0x190
	// Line 233, Address: 0x1b24e4, Func Offset: 0x1b4
	// Line 234, Address: 0x1b24f0, Func Offset: 0x1c0
	// Line 235, Address: 0x1b24fc, Func Offset: 0x1cc
	// Line 239, Address: 0x1b2500, Func Offset: 0x1d0
	// Line 240, Address: 0x1b2524, Func Offset: 0x1f4
	// Line 241, Address: 0x1b253c, Func Offset: 0x20c
	// Line 244, Address: 0x1b256c, Func Offset: 0x23c
	// Line 245, Address: 0x1b258c, Func Offset: 0x25c
	// Line 247, Address: 0x1b25ac, Func Offset: 0x27c
	// Line 248, Address: 0x1b25c4, Func Offset: 0x294
	// Func End, Address: 0x1b25e0, Func Offset: 0x2b0
}

// 
// Start address: 0x1b25e0
int ItemMedicineUse(int kind)
{
	// Line 257, Address: 0x1b25e0, Func Offset: 0
	// Line 258, Address: 0x1b25ec, Func Offset: 0xc
	// Line 260, Address: 0x1b261c, Func Offset: 0x3c
	// Line 262, Address: 0x1b2628, Func Offset: 0x48
	// Line 263, Address: 0x1b2654, Func Offset: 0x74
	// Line 275, Address: 0x1b2660, Func Offset: 0x80
	// Line 276, Address: 0x1b2670, Func Offset: 0x90
	// Line 277, Address: 0x1b269c, Func Offset: 0xbc
	// Line 278, Address: 0x1b26b4, Func Offset: 0xd4
	// Line 280, Address: 0x1b26e0, Func Offset: 0x100
	// Line 281, Address: 0x1b2708, Func Offset: 0x128
	// Line 284, Address: 0x1b2720, Func Offset: 0x140
	// Line 285, Address: 0x1b2724, Func Offset: 0x144
	// Func End, Address: 0x1b2734, Func Offset: 0x154
}

// 
// Start address: 0x1b2740
int ItemEventCheck(int kind_0, int kind_1, int kind_2)
{
	int use_item;
	// Line 315, Address: 0x1b2740, Func Offset: 0
	// Line 318, Address: 0x1b2758, Func Offset: 0x18
	// Line 319, Address: 0x1b2770, Func Offset: 0x30
	// Line 320, Address: 0x1b2784, Func Offset: 0x44
	// Line 321, Address: 0x1b2798, Func Offset: 0x58
	// Func End, Address: 0x1b27ac, Func Offset: 0x6c
}

// 
// Start address: 0x1b27b0
int ItemCombinationUseCheck(int kind_0, int kind_1, int kind_2)
{
	int i;
	int kind_x;
	int cmb_check[4][11];
	// Line 335, Address: 0x1b27b0, Func Offset: 0
	// Line 365, Address: 0x1b27c8, Func Offset: 0x18
	// Line 366, Address: 0x1b27ec, Func Offset: 0x3c
	// Line 367, Address: 0x1b2810, Func Offset: 0x60
	// Line 370, Address: 0x1b2834, Func Offset: 0x84
	// Line 371, Address: 0x1b2840, Func Offset: 0x90
	// Line 372, Address: 0x1b2844, Func Offset: 0x94
	// Line 373, Address: 0x1b284c, Func Offset: 0x9c
	// Line 374, Address: 0x1b2850, Func Offset: 0xa0
	// Line 375, Address: 0x1b285c, Func Offset: 0xac
	// Line 378, Address: 0x1b28bc, Func Offset: 0x10c
	// Line 379, Address: 0x1b28d0, Func Offset: 0x120
	// Line 381, Address: 0x1b28d8, Func Offset: 0x128
	// Line 383, Address: 0x1b28f0, Func Offset: 0x140
	// Line 384, Address: 0x1b28f4, Func Offset: 0x144
	// Func End, Address: 0x1b2908, Func Offset: 0x158
}

// 
// Start address: 0x1b2910
void ItemPutForShelf()
{
	// Line 393, Address: 0x1b2910, Func Offset: 0
	// Line 394, Address: 0x1b2918, Func Offset: 0x8
	// Line 395, Address: 0x1b2930, Func Offset: 0x20
	// Func End, Address: 0x1b2940, Func Offset: 0x30
}

