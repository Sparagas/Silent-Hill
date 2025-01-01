typedef union fsFileIndex;
typedef struct _anon0;
typedef union fsFile;
typedef struct shBattleFight;
typedef struct PAD_2D;
typedef struct SubCharacter;
typedef struct PAD_INFO;
typedef struct shBattleShot;
typedef struct shSkelton;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct SubObject;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct Pad_KeyConfig;
typedef struct shAttackInfo;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _CL_VHIT_WALL;
typedef union _anon3;
typedef struct shPlayerWork;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _anon4;
typedef struct _CL_VHIT_CHARA;
typedef struct fsCdFile;
typedef struct _CL_VHIT_RESULT;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef union _anon5;
typedef struct fsMgcFile;
typedef struct Model_List;
typedef struct _anon6;
typedef struct fsMgfFile;
typedef struct _CL_HITPOLY_PLANE;
typedef struct _anon7;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon8;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct _anon9;
typedef struct _anon10;
typedef struct PAD_3D;

typedef void(*type_4)(SubCharacter*);
typedef void(*type_7)(SubCharacter*);
typedef void(*type_18)();
typedef int(*type_22)();
typedef void(*type_24)(SubCharacter*);
typedef void(*type_25)(SubCharacter*);

typedef unsigned char type_0[4];
typedef PAD_INFO type_1[10];
typedef unsigned char type_2[742];
typedef unsigned char type_3[10];
typedef float type_5[4];
typedef shAttackInfo type_6[46];
typedef unsigned char type_8[2];
typedef unsigned char type_9[4];
typedef unsigned char type_10[2];
typedef unsigned int type_11[256];
typedef _anon1 type_12[72];
typedef unsigned int type_13[32];
typedef unsigned char type_14[4];
typedef unsigned char type_15[10];
typedef char type_16[4];
typedef char type_17[4];
typedef unsigned char type_19[4];
typedef float type_20[4];
typedef unsigned char type_21[2];
typedef fsFileIndex type_23[1];
typedef unsigned char type_26[13];
typedef float type_27[4][4];
typedef float type_28[4];
typedef unsigned char type_29[34];
typedef float type_30[4][4];
typedef int(*type_31)()[10];
typedef float type_32[4][2];
typedef unsigned char type_33[4];
typedef _CL_HITPOLY_PLANE type_34[2];

union fsFileIndex
{
	_anon0 index;
	unsigned long pack;
};

struct _anon0
{
	fsFile* fp;
	char* name;
};

union fsFile
{
	_anon10 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
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
	_anon6 pos;
	_anon6 rot;
	_anon6 pos_spd;
	_anon6 rot_spd;
	_anon8 mat;
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

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon8 src_m;
	_anon6 src_t;
	_anon8 des_m;
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
	_anon8 mat;
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

struct Pad_KeyConfig
{
	int enter;
	int cancel;
	int skip;
	int front_move;
	int back_move;
	int right_turn;
	int left_turn;
	int right_move;
	int left_move;
	int action;
	int attack;
	int dash;
	int light;
	int item;
	int search_view;
	int ready;
	int pause;
	int map;
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

struct _anon1
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
};

struct _anon2
{
	unsigned int flag[256];
	unsigned int enemy[32];
	unsigned char safe[4];
	char guruguru[4];
	char cylinder[4];
	unsigned short clock;
	unsigned short carbon;
	unsigned short hanging;
	unsigned char trunk[4];
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
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
};

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

struct fsCdFile
{
	struct
	{
		int type : 8;
		int number : 24;
	};
	char* name;
	int lsn;
	int size;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon5 hobj;
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

union _anon5
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct fsMgcFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	fsFile* parent;
	char* start;
	char* end;
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

struct _anon6
{
	float x;
	float y;
	float z;
	float w;
};

struct fsMgfFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	fsFile* parent;
	int offset;
	int size;
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

struct _anon7
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

struct fsHdFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	char* name;
	int offset;
	int size;
};

struct fsMgpFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	fsFile* file;
	fsMgcFile* start;
	fsMgcFile* end;
};

struct _anon8
{
	float d[4][4];
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

struct _anon9
{
	_anon1* ev_list;
	unsigned char* ev_pos;
	int(*ev_prog)();
	_anon4* gi_list;
	Model_List* mdl_list;
	_anon7* en_list;
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

struct _anon10
{
	struct
	{
		int type : 8;
		int number : 24;
	};
	int pad0;
	int pad1;
	int pad2;
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

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
unsigned char ev_pos[742];
_anon1 ev_list[72];
_CL_HITPOLY_PLANE clActWallList_ps45[2];
int(*ev_prog)()[10];
_anon9 stage_prison_n;
shPlayerWork sh2jms;
int ev_s_step;
int ev_p_step;
Pad_KeyConfig key_config;
fsFileIndex data_pic_hsp_p_female_tex[1];
_anon2 game_flag;

int EvProgEddieKillHuman();
int EvProgGetPrisonMap();
int EvProgGetTabletPig();
int EvProgGetTabletSeduct();
int EvProgGetRifle();
int EvProgGetLighter();
int EvProgReadLakeMagazine();
int EvProgTryOpenFloor();
int EvProgHoleTo5thLayer();
void EvAllTimeFunc();

// 
// Start address: 0x2314e0
int EvProgEddieKillHuman()
{
	// Line 86, Address: 0x2314e0, Func Offset: 0
	// Line 87, Address: 0x2314e4, Func Offset: 0x4
	// Func End, Address: 0x2314ec, Func Offset: 0xc
}

// 
// Start address: 0x2314f0
int EvProgGetPrisonMap()
{
	// Line 94, Address: 0x2314f0, Func Offset: 0
	// Line 95, Address: 0x2314f4, Func Offset: 0x4
	// Func End, Address: 0x2314fc, Func Offset: 0xc
}

// 
// Start address: 0x231500
int EvProgGetTabletPig()
{
	// Line 101, Address: 0x231500, Func Offset: 0
	// Line 102, Address: 0x231508, Func Offset: 0x8
	// Line 103, Address: 0x231518, Func Offset: 0x18
	// Func End, Address: 0x231528, Func Offset: 0x28
}

// 
// Start address: 0x231530
int EvProgGetTabletSeduct()
{
	// Line 109, Address: 0x231530, Func Offset: 0
	// Line 110, Address: 0x231538, Func Offset: 0x8
	// Line 111, Address: 0x231548, Func Offset: 0x18
	// Func End, Address: 0x231558, Func Offset: 0x28
}

// 
// Start address: 0x231560
int EvProgGetRifle()
{
	// Line 117, Address: 0x231560, Func Offset: 0
	// Line 118, Address: 0x231568, Func Offset: 0x8
	// Line 119, Address: 0x231578, Func Offset: 0x18
	// Func End, Address: 0x231588, Func Offset: 0x28
}

// 
// Start address: 0x231590
int EvProgGetLighter()
{
	// Line 125, Address: 0x231590, Func Offset: 0
	// Line 126, Address: 0x231598, Func Offset: 0x8
	// Line 127, Address: 0x2315a8, Func Offset: 0x18
	// Func End, Address: 0x2315b8, Func Offset: 0x28
}

// 
// Start address: 0x2315c0
int EvProgReadLakeMagazine()
{
	// Line 133, Address: 0x2315c0, Func Offset: 0
	// Line 134, Address: 0x2315c8, Func Offset: 0x8
	// Line 136, Address: 0x231634, Func Offset: 0x74
	// Line 137, Address: 0x231648, Func Offset: 0x88
	// Line 138, Address: 0x23167c, Func Offset: 0xbc
	// Line 139, Address: 0x231690, Func Offset: 0xd0
	// Line 142, Address: 0x231698, Func Offset: 0xd8
	// Line 143, Address: 0x2316ac, Func Offset: 0xec
	// Line 144, Address: 0x2316c0, Func Offset: 0x100
	// Line 147, Address: 0x2316c8, Func Offset: 0x108
	// Line 149, Address: 0x2316ec, Func Offset: 0x12c
	// Line 150, Address: 0x2316fc, Func Offset: 0x13c
	// Line 151, Address: 0x231710, Func Offset: 0x150
	// Line 154, Address: 0x231718, Func Offset: 0x158
	// Line 155, Address: 0x231720, Func Offset: 0x160
	// Line 156, Address: 0x231728, Func Offset: 0x168
	// Line 157, Address: 0x231730, Func Offset: 0x170
	// Line 158, Address: 0x231754, Func Offset: 0x194
	// Line 161, Address: 0x23175c, Func Offset: 0x19c
	// Line 162, Address: 0x231764, Func Offset: 0x1a4
	// Line 163, Address: 0x23176c, Func Offset: 0x1ac
	// Line 164, Address: 0x231774, Func Offset: 0x1b4
	// Line 165, Address: 0x2317ac, Func Offset: 0x1ec
	// Line 166, Address: 0x2317c0, Func Offset: 0x200
	// Line 169, Address: 0x2317c8, Func Offset: 0x208
	// Line 170, Address: 0x2317d0, Func Offset: 0x210
	// Line 171, Address: 0x2317d8, Func Offset: 0x218
	// Line 172, Address: 0x2317e0, Func Offset: 0x220
	// Line 173, Address: 0x2317e8, Func Offset: 0x228
	// Line 174, Address: 0x2317fc, Func Offset: 0x23c
	// Line 175, Address: 0x23180c, Func Offset: 0x24c
	// Line 176, Address: 0x231820, Func Offset: 0x260
	// Line 179, Address: 0x231828, Func Offset: 0x268
	// Line 180, Address: 0x231830, Func Offset: 0x270
	// Line 181, Address: 0x231838, Func Offset: 0x278
	// Line 182, Address: 0x231840, Func Offset: 0x280
	// Line 183, Address: 0x231864, Func Offset: 0x2a4
	// Line 186, Address: 0x23186c, Func Offset: 0x2ac
	// Line 187, Address: 0x231880, Func Offset: 0x2c0
	// Line 189, Address: 0x23188c, Func Offset: 0x2cc
	// Line 190, Address: 0x231890, Func Offset: 0x2d0
	// Func End, Address: 0x2318a0, Func Offset: 0x2e0
}

// 
// Start address: 0x2318a0
int EvProgTryOpenFloor()
{
	// Line 197, Address: 0x2318a0, Func Offset: 0
	// Line 198, Address: 0x2318a4, Func Offset: 0x4
	// Func End, Address: 0x2318ac, Func Offset: 0xc
}

// 
// Start address: 0x2318b0
int EvProgHoleTo5thLayer()
{
	// Line 205, Address: 0x2318b0, Func Offset: 0
	// Line 206, Address: 0x2318b4, Func Offset: 0x4
	// Func End, Address: 0x2318bc, Func Offset: 0xc
}

// 
// Start address: 0x2318c0
void EvAllTimeFunc()
{
	// Line 211, Address: 0x2318c0, Func Offset: 0
	// Line 213, Address: 0x2318c8, Func Offset: 0x8
	// Line 214, Address: 0x2318dc, Func Offset: 0x1c
	// Line 215, Address: 0x2318f4, Func Offset: 0x34
	// Line 217, Address: 0x231904, Func Offset: 0x44
	// Func End, Address: 0x231914, Func Offset: 0x54
}

