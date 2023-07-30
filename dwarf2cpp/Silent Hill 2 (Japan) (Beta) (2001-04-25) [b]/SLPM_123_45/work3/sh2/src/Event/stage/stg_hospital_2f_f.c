typedef struct shAttackInfo;
typedef struct SubCharacter;
typedef struct _CL_VHIT_WALL;
typedef struct Pad_KeyConfig;
typedef struct _anon0;
typedef union _anon1;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _anon2;
typedef struct shPlayerWork;
typedef struct _CL_VHIT_CHARA;
typedef struct _anon3;
typedef union fsFile;
typedef struct fsCdFile;
typedef struct _CL_VHIT_RESULT;
typedef union _anon4;
typedef struct SubObject;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct Model_List;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct _anon5;
typedef struct fsHdFile;
typedef struct _anon6;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct fsMgpFile;
typedef struct _anon7;
typedef struct _anon8;
typedef struct shSkelton;
typedef struct _anon9;
typedef struct PAD_3D;
typedef struct shBattleFight;
typedef union fsFileIndex;
typedef struct _anon10;
typedef struct PAD_2D;
typedef struct shBattleShot;
typedef struct PAD_INFO;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef enum _JAMES_LOWER_STATUS : unsigned char;

typedef void(*type_7)();
typedef int(*type_9)();
typedef void(*type_12)(SubCharacter*);
typedef void(*type_13)(SubCharacter*);
typedef void(*type_27)(SubCharacter*);
typedef void(*type_29)(SubCharacter*);

typedef unsigned char type_0[460];
typedef float type_1[4];
typedef unsigned char type_2[10];
typedef unsigned int type_3[256];
typedef unsigned int type_4[32];
typedef unsigned char type_5[4];
typedef char type_6[4];
typedef char type_8[4];
typedef unsigned char type_10[2];
typedef unsigned char type_11[4];
typedef unsigned char type_14[13];
typedef fsFileIndex type_15[1];
typedef int(*type_16)()[7];
typedef _anon0 type_17[43];
typedef float type_18[4];
typedef unsigned char type_19[34];
typedef float type_20[4][2];
typedef float type_21[4];
typedef float type_22[4][4];
typedef unsigned char type_23[4];
typedef unsigned char type_24[4];
typedef PAD_INFO type_25[10];
typedef unsigned char type_26[10];
typedef shAttackInfo type_28[46];
typedef unsigned char type_30[4];
typedef unsigned char type_31[2];
typedef unsigned char type_32[2];
typedef char type_33[5];
typedef Model_List type_34[4];

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon1 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
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
	_anon9 mat;
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

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
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

struct _anon0
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
};

union _anon1
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

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

struct _anon3
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
};

union fsFile
{
	_anon8 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
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
	_anon4 hobj;
};

union _anon4
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
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
	_anon9 mat;
	void(*function)(SubCharacter*);
	void(*effecter_function)(SubCharacter*);
	SubObject* pre;
	SubObject* next;
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

struct Model_List
{
	short kind;
	short id;
	short flag_off;
	short flag_on;
	float pos[4];
	float rot[4];
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

struct _anon5
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

struct _anon7
{
	_anon0* ev_list;
	unsigned char* ev_pos;
	int(*ev_prog)();
	_anon3* gi_list;
	Model_List* mdl_list;
	_anon5* en_list;
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

struct _anon8
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

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon9 src_m;
	_anon6 src_t;
	_anon9 des_m;
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

struct _anon9
{
	float d[4][4];
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

union fsFileIndex
{
	_anon10 index;
	unsigned long pack;
};

struct _anon10
{
	fsFile* fp;
	char* name;
};

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
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

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
unsigned char ev_pos[460];
_anon0 ev_list[43];
int(*ev_prog)()[7];
Model_List mdl_list[4];
_anon7 stage_hospital_2f_f;
shPlayerWork sh2jms;
int ev_s_step;
int ev_p_step;
_anon2 game_flag;
Pad_KeyConfig key_config;
fsFileIndex data_pic_hsp_carbon_tex[1];

int EvProgGetLapisEyeKey();
int EvProgReadCarbonNumber();
int EvProgGetExamKey();
int EvProgNeedleInAnimal();
int EvProgUseElevatorKey();
int EvProgGetShotgun();
void StageInit();

// 
// Start address: 0x22cab0
int EvProgGetLapisEyeKey()
{
	// Line 95, Address: 0x22cab0, Func Offset: 0
	// Line 96, Address: 0x22cab4, Func Offset: 0x4
	// Func End, Address: 0x22cabc, Func Offset: 0xc
}

// 
// Start address: 0x22cac0
int EvProgReadCarbonNumber()
{
	char c_work[5];
	// Line 102, Address: 0x22cac0, Func Offset: 0
	// Line 105, Address: 0x22cac8, Func Offset: 0x8
	// Line 107, Address: 0x22cb34, Func Offset: 0x74
	// Line 108, Address: 0x22cb48, Func Offset: 0x88
	// Line 109, Address: 0x22cb54, Func Offset: 0x94
	// Line 113, Address: 0x22cb68, Func Offset: 0xa8
	// Line 115, Address: 0x22cb8c, Func Offset: 0xcc
	// Line 119, Address: 0x22cba0, Func Offset: 0xe0
	// Line 120, Address: 0x22cbc8, Func Offset: 0x108
	// Line 123, Address: 0x22cbd0, Func Offset: 0x110
	// Line 124, Address: 0x22cbd8, Func Offset: 0x118
	// Line 125, Address: 0x22cbe0, Func Offset: 0x120
	// Line 126, Address: 0x22cbe8, Func Offset: 0x128
	// Line 128, Address: 0x22cc20, Func Offset: 0x160
	// Line 129, Address: 0x22cc38, Func Offset: 0x178
	// Line 130, Address: 0x22cc54, Func Offset: 0x194
	// Line 132, Address: 0x22cc68, Func Offset: 0x1a8
	// Line 135, Address: 0x22cc70, Func Offset: 0x1b0
	// Line 136, Address: 0x22cc78, Func Offset: 0x1b8
	// Line 137, Address: 0x22cc80, Func Offset: 0x1c0
	// Line 138, Address: 0x22cc88, Func Offset: 0x1c8
	// Line 139, Address: 0x22cc90, Func Offset: 0x1d0
	// Line 140, Address: 0x22cca4, Func Offset: 0x1e4
	// Line 141, Address: 0x22ccb8, Func Offset: 0x1f8
	// Line 144, Address: 0x22ccc0, Func Offset: 0x200
	// Line 145, Address: 0x22ccc8, Func Offset: 0x208
	// Line 146, Address: 0x22ccd0, Func Offset: 0x210
	// Line 147, Address: 0x22ccd8, Func Offset: 0x218
	// Line 148, Address: 0x22cce0, Func Offset: 0x220
	// Line 149, Address: 0x22cd04, Func Offset: 0x244
	// Line 150, Address: 0x22cd28, Func Offset: 0x268
	// Line 151, Address: 0x22cd4c, Func Offset: 0x28c
	// Line 152, Address: 0x22cd68, Func Offset: 0x2a8
	// Line 153, Address: 0x22cd6c, Func Offset: 0x2ac
	// Line 154, Address: 0x22cd88, Func Offset: 0x2c8
	// Line 155, Address: 0x22cd9c, Func Offset: 0x2dc
	// Line 156, Address: 0x22cdb0, Func Offset: 0x2f0
	// Line 159, Address: 0x22cdb8, Func Offset: 0x2f8
	// Line 160, Address: 0x22cde0, Func Offset: 0x320
	// Line 163, Address: 0x22cde8, Func Offset: 0x328
	// Line 164, Address: 0x22cdfc, Func Offset: 0x33c
	// Line 165, Address: 0x22ce0c, Func Offset: 0x34c
	// Line 167, Address: 0x22ce18, Func Offset: 0x358
	// Line 168, Address: 0x22ce1c, Func Offset: 0x35c
	// Func End, Address: 0x22ce2c, Func Offset: 0x36c
}

// 
// Start address: 0x22ce30
int EvProgGetExamKey()
{
	// Line 174, Address: 0x22ce30, Func Offset: 0
	// Line 175, Address: 0x22ce38, Func Offset: 0x8
	// Line 177, Address: 0x22ce74, Func Offset: 0x44
	// Line 178, Address: 0x22ce88, Func Offset: 0x58
	// Line 179, Address: 0x22ce94, Func Offset: 0x64
	// Line 183, Address: 0x22cea8, Func Offset: 0x78
	// Line 184, Address: 0x22cebc, Func Offset: 0x8c
	// Line 188, Address: 0x22ced0, Func Offset: 0xa0
	// Line 190, Address: 0x22cee8, Func Offset: 0xb8
	// Line 193, Address: 0x22cefc, Func Offset: 0xcc
	// Line 194, Address: 0x22cf00, Func Offset: 0xd0
	// Line 195, Address: 0x22cf14, Func Offset: 0xe4
	// Line 197, Address: 0x22cf20, Func Offset: 0xf0
	// Line 198, Address: 0x22cf24, Func Offset: 0xf4
	// Func End, Address: 0x22cf34, Func Offset: 0x104
}

// 
// Start address: 0x22cf40
int EvProgNeedleInAnimal()
{
	// Line 221, Address: 0x22cf40, Func Offset: 0
	// Line 222, Address: 0x22cf44, Func Offset: 0x4
	// Func End, Address: 0x22cf4c, Func Offset: 0xc
}

// 
// Start address: 0x22cf50
int EvProgUseElevatorKey()
{
	// Line 228, Address: 0x22cf50, Func Offset: 0
	// Line 229, Address: 0x22cf58, Func Offset: 0x8
	// Line 230, Address: 0x22cf68, Func Offset: 0x18
	// Func End, Address: 0x22cf78, Func Offset: 0x28
}

// 
// Start address: 0x22cf80
int EvProgGetShotgun()
{
	// Line 236, Address: 0x22cf80, Func Offset: 0
	// Line 237, Address: 0x22cf88, Func Offset: 0x8
	// Line 238, Address: 0x22cf98, Func Offset: 0x18
	// Func End, Address: 0x22cfa8, Func Offset: 0x28
}

// 
// Start address: 0x22cfb0
void StageInit()
{
	// Line 244, Address: 0x22cfb0, Func Offset: 0
	// Func End, Address: 0x22cfb8, Func Offset: 0x8
}

