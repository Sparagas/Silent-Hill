typedef struct _anon0;
typedef struct _anon1;
typedef struct shPlayerWork;
typedef struct _CL_VHIT_WALL;
typedef union _anon2;
typedef struct SubCharacter;
typedef union fsFile;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _anon3;
typedef struct fsCdFile;
typedef struct _CL_VHIT_CHARA;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct _CL_VHIT_RESULT;
typedef struct fsMgcFile;
typedef union _anon4;
typedef struct Model_List;
typedef struct SubObject;
typedef struct fsMgfFile;
typedef struct _CL_HITPOLY_PLANE;
typedef struct _anon5;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon6;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct _anon7;
typedef struct _anon8;
typedef struct shSkelton;
typedef struct PAD_3D;
typedef union fsFileIndex;
typedef struct _anon9;
typedef struct _anon10;
typedef struct PAD_2D;
typedef struct shBattleFight;
typedef struct PAD_INFO;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct Pad_KeyConfig;
typedef struct shAttackInfo;

typedef int(*type_7)();
typedef void(*type_9)();
typedef void(*type_12)(SubCharacter*);
typedef void(*type_13)(SubCharacter*);
typedef void(*type_30)(SubCharacter*);
typedef void(*type_32)(SubCharacter*);

typedef float type_0[4];
typedef unsigned int type_1[256];
typedef unsigned char type_2[10];
typedef unsigned int type_3[32];
typedef unsigned char type_4[4];
typedef char type_5[4];
typedef char type_6[4];
typedef int(*type_8)()[6];
typedef unsigned char type_10[2];
typedef unsigned char type_11[4];
typedef _CL_HITPOLY_PLANE type_14[2];
typedef unsigned char type_15[342];
typedef unsigned char type_16[13];
typedef unsigned char type_17[3];
typedef float type_18[4][4];
typedef unsigned char type_19[34];
typedef fsFileIndex type_20[1];
typedef float type_21[4];
typedef float type_22[4][2];
typedef unsigned char type_23[4];
typedef unsigned char type_24[4];
typedef float type_25[4];
typedef float type_26[4][4];
typedef PAD_INFO type_27[10];
typedef _anon0 type_28[25];
typedef unsigned char type_29[10];
typedef shAttackInfo type_31[46];
typedef _CL_HITPOLY_PLANE type_33[13];
typedef unsigned char type_34[2];
typedef unsigned char type_35[4];
typedef unsigned char type_36[2];
typedef fsFileIndex type_37[1];

struct _anon0
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
};

struct _anon1
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

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
};

struct _anon3
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
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

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
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

struct _CL_VHIT_RESULT
{
	int kind;
	_anon4 hobj;
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

union _anon4
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
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

struct PAD_3D
{
	char round_way;
	unsigned char reserved1;
	unsigned char lslide;
	unsigned char rslide;
	unsigned char lturn180;
	unsigned char rturn180;
};

union fsFileIndex
{
	_anon10 index;
	unsigned long pack;
};

struct _anon9
{
	float d[4][4];
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

struct shBattleFight
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
	_anon2 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
unsigned char ev_pos[342];
_anon0 ev_list[25];
_CL_HITPOLY_PLANE clActWallList_ps53[2];
_CL_HITPOLY_PLANE clActWallList_ps55[13];
int(*ev_prog)()[6];
_anon7 stage_delusion_3;
_anon1 game_flag;
shPlayerWork sh2jms;
int ev_s_step;
int ev_p_step;
Pad_KeyConfig key_config;
fsFileIndex data_pic_etc_carsol_tex[1];
fsFileIndex data_pic_hsp_p_panel_tex[1];
float ev_cursor_x;
float ev_cursor_y;
unsigned char coc_lock[3];

int EvProgBreakWellWall();
int EvProgGetSpiralKey();
int EvProgCocRoomLock();
int EvProgUseSpiralKey();
int EvProgHoleTo4thLayer();
void EvAllTimeFunc();

// 
// Start address: 0x22c390
int EvProgBreakWellWall()
{
	// Line 84, Address: 0x22c390, Func Offset: 0
	// Line 85, Address: 0x22c394, Func Offset: 0x4
	// Func End, Address: 0x22c39c, Func Offset: 0xc
}

// 
// Start address: 0x22c3a0
int EvProgGetSpiralKey()
{
	// Line 91, Address: 0x22c3a0, Func Offset: 0
	// Line 92, Address: 0x22c3a8, Func Offset: 0x8
	// Line 94, Address: 0x22c3f0, Func Offset: 0x50
	// Line 95, Address: 0x22c404, Func Offset: 0x64
	// Line 96, Address: 0x22c410, Func Offset: 0x70
	// Line 100, Address: 0x22c424, Func Offset: 0x84
	// Line 101, Address: 0x22c434, Func Offset: 0x94
	// Line 102, Address: 0x22c444, Func Offset: 0xa4
	// Line 106, Address: 0x22c458, Func Offset: 0xb8
	// Line 108, Address: 0x22c470, Func Offset: 0xd0
	// Line 109, Address: 0x22c480, Func Offset: 0xe0
	// Line 113, Address: 0x22c494, Func Offset: 0xf4
	// Line 114, Address: 0x22c4ac, Func Offset: 0x10c
	// Line 118, Address: 0x22c4c0, Func Offset: 0x120
	// Line 119, Address: 0x22c4d4, Func Offset: 0x134
	// Line 120, Address: 0x22c4ec, Func Offset: 0x14c
	// Line 122, Address: 0x22c500, Func Offset: 0x160
	// Line 124, Address: 0x22c50c, Func Offset: 0x16c
	// Line 125, Address: 0x22c510, Func Offset: 0x170
	// Func End, Address: 0x22c520, Func Offset: 0x180
}

// 
// Start address: 0x22c520
int EvProgCocRoomLock()
{
	int i;
	// Line 133, Address: 0x22c520, Func Offset: 0
	// Line 136, Address: 0x22c52c, Func Offset: 0xc
	// Line 138, Address: 0x22c580, Func Offset: 0x60
	// Line 139, Address: 0x22c594, Func Offset: 0x74
	// Line 140, Address: 0x22c5a0, Func Offset: 0x80
	// Line 141, Address: 0x22c5cc, Func Offset: 0xac
	// Line 142, Address: 0x22c5e0, Func Offset: 0xc0
	// Line 146, Address: 0x22c5f4, Func Offset: 0xd4
	// Line 149, Address: 0x22c61c, Func Offset: 0xfc
	// Line 150, Address: 0x22c62c, Func Offset: 0x10c
	// Line 154, Address: 0x22c640, Func Offset: 0x120
	// Line 155, Address: 0x22c648, Func Offset: 0x128
	// Line 156, Address: 0x22c650, Func Offset: 0x130
	// Line 157, Address: 0x22c658, Func Offset: 0x138
	// Line 158, Address: 0x22c67c, Func Offset: 0x15c
	// Line 161, Address: 0x22c684, Func Offset: 0x164
	// Line 162, Address: 0x22c68c, Func Offset: 0x16c
	// Line 163, Address: 0x22c694, Func Offset: 0x174
	// Line 164, Address: 0x22c6a0, Func Offset: 0x180
	// Line 165, Address: 0x22c6a8, Func Offset: 0x188
	// Line 166, Address: 0x22c6c4, Func Offset: 0x1a4
	// Line 167, Address: 0x22c6d8, Func Offset: 0x1b8
	// Line 168, Address: 0x22c6e8, Func Offset: 0x1c8
	// Line 171, Address: 0x22c6f0, Func Offset: 0x1d0
	// Line 172, Address: 0x22c6f8, Func Offset: 0x1d8
	// Line 173, Address: 0x22c700, Func Offset: 0x1e0
	// Line 174, Address: 0x22c708, Func Offset: 0x1e8
	// Line 175, Address: 0x22c72c, Func Offset: 0x20c
	// Line 178, Address: 0x22c734, Func Offset: 0x214
	// Line 179, Address: 0x22c748, Func Offset: 0x228
	// Line 180, Address: 0x22c758, Func Offset: 0x238
	// Line 182, Address: 0x22c764, Func Offset: 0x244
	// Line 184, Address: 0x22c768, Func Offset: 0x248
	// Func End, Address: 0x22c77c, Func Offset: 0x25c
}

// 
// Start address: 0x22c780
int EvProgUseSpiralKey()
{
	// Line 191, Address: 0x22c780, Func Offset: 0
	// Line 192, Address: 0x22c784, Func Offset: 0x4
	// Func End, Address: 0x22c78c, Func Offset: 0xc
}

// 
// Start address: 0x22c790
int EvProgHoleTo4thLayer()
{
	// Line 199, Address: 0x22c790, Func Offset: 0
	// Line 200, Address: 0x22c794, Func Offset: 0x4
	// Func End, Address: 0x22c79c, Func Offset: 0xc
}

// 
// Start address: 0x22c7a0
void EvAllTimeFunc()
{
	// Line 205, Address: 0x22c7a0, Func Offset: 0
	// Line 206, Address: 0x22c7a8, Func Offset: 0x8
	// Line 210, Address: 0x22c7d0, Func Offset: 0x30
	// Line 211, Address: 0x22c7e8, Func Offset: 0x48
	// Line 212, Address: 0x22c800, Func Offset: 0x60
	// Line 213, Address: 0x22c810, Func Offset: 0x70
	// Line 217, Address: 0x22c818, Func Offset: 0x78
	// Line 218, Address: 0x22c82c, Func Offset: 0x8c
	// Line 221, Address: 0x22c83c, Func Offset: 0x9c
	// Func End, Address: 0x22c84c, Func Offset: 0xac
}

