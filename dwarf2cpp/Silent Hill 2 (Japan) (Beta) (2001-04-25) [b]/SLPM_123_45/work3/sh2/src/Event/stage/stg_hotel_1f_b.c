typedef struct SubCharacter;
typedef struct shAttackInfo;
typedef struct Pad_KeyConfig;
typedef struct _anon0;
typedef struct _CL_VHIT_WALL;
typedef union _anon1;
typedef struct _anon2;
typedef struct shPlayerWork;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _anon3;
typedef union fsFile;
typedef struct _CL_VHIT_CHARA;
typedef struct fsCdFile;
typedef struct SubObject;
typedef struct _CL_VHIT_RESULT;
typedef union _anon4;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct fsMgcFile;
typedef struct Model_List;
typedef struct fsMgfFile;
typedef struct _anon5;
typedef struct fsHdFile;
typedef struct _anon6;
typedef struct fsMgpFile;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct _anon7;
typedef struct _anon8;
typedef struct shSkelton;
typedef struct sh2gfw_AREA_HEAD;
typedef struct _anon9;
typedef struct PAD_3D;
typedef union fsFileIndex;
typedef struct _anon10;
typedef struct shBattleFight;
typedef struct PicDraw_Data;
typedef struct PAD_2D;
typedef struct shBattleShot;
typedef struct PAD_INFO;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef enum _JAMES_LOWER_STATUS : unsigned char;

typedef void(*type_7)();
typedef int(*type_8)();
typedef void(*type_11)(SubCharacter*);
typedef void(*type_12)(SubCharacter*);
typedef void(*type_26)(SubCharacter*);
typedef void(*type_28)(SubCharacter*);

typedef unsigned char type_0[3];
typedef unsigned char type_1[10];
typedef unsigned int type_2[256];
typedef unsigned int type_3[32];
typedef unsigned char type_4[4];
typedef char type_5[4];
typedef char type_6[4];
typedef unsigned char type_9[2];
typedef unsigned char type_10[4];
typedef unsigned char type_13[13];
typedef unsigned char type_14[362];
typedef float type_15[4];
typedef unsigned char type_16[34];
typedef int(*type_17)()[5];
typedef char type_18[0];
typedef float type_19[4][2];
typedef float type_20[4];
typedef float type_21[4][4];
typedef unsigned char type_22[4];
typedef unsigned char type_23[4];
typedef PAD_INFO type_24[10];
typedef unsigned char type_25[10];
typedef shAttackInfo type_27[46];
typedef _anon0 type_29[44];
typedef fsFileIndex type_30[1];
typedef unsigned char type_31[4];
typedef unsigned char type_32[2];
typedef unsigned char type_33[2];
typedef fsFileIndex type_34[1];
typedef unsigned short type_35[0];
typedef float type_36[4];

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

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

union _anon1
{
	shBattleFight fight;
	shBattleShot shot;
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

struct sh2gfw_AREA_HEAD
{
	unsigned int area_id;
	unsigned int toGlobalTexHead;
	unsigned int toGlobalClutsHead;
	unsigned int date;
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct PicDraw_Data
{
	sh2gfw_AREA_HEAD* ap;
	int tex;
	int clut;
	short x0;
	short y0;
	short x1;
	short y1;
	short x2;
	short y2;
	short x3;
	short y3;
	int us0;
	int vt0;
	int us1;
	int vt1;
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
	unsigned char alpha_a;
	unsigned char alpha_b;
	unsigned char alpha_c;
	unsigned char alpha_d;
	unsigned char alpha_fix;
	unsigned char test_ate;
	unsigned char test_atst;
	unsigned char test_aref;
	unsigned char test_afail;
	unsigned char test_date;
	unsigned char test_datm;
	unsigned char test_zte;
	unsigned char test_ztst;
	unsigned char pad[3];
	short otp;
	short status;
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
unsigned char ev_pos[362];
_anon0 ev_list[44];
int(*ev_prog)()[5];
_anon7 stage_hotel_1f_b;
_anon2 game_flag;
shPlayerWork sh2jms;
int ev_s_step;
int ev_p_step;
Pad_KeyConfig key_config;
float egg_alpha;
float dtf;
fsFileIndex data_pic_hsp_p_boxnumber_2_tex[1];
fsFileIndex data_pic_hsp_p_boxnumber_tex[1];
int ev_prog_flag_set;
int ev_cancel;
unsigned short msg_station[0];
char pic_buf_1[0];

int EvProgTriheadBattle();
int EvProgGetEggRustColored();
int EvProgGetEggScarlet();
int EvProgEggHoleOnDoor();
void EvProgSubDrawEgg();

// 
// Start address: 0x22ee60
int EvProgTriheadBattle()
{
	// Line 90, Address: 0x22ee60, Func Offset: 0
	// Line 91, Address: 0x22ee64, Func Offset: 0x4
	// Func End, Address: 0x22ee6c, Func Offset: 0xc
}

// 
// Start address: 0x22ee70
int EvProgGetEggRustColored()
{
	// Line 96, Address: 0x22ee70, Func Offset: 0
	// Line 97, Address: 0x22ee78, Func Offset: 0x8
	// Line 98, Address: 0x22ee88, Func Offset: 0x18
	// Func End, Address: 0x22ee98, Func Offset: 0x28
}

// 
// Start address: 0x22eea0
int EvProgGetEggScarlet()
{
	// Line 103, Address: 0x22eea0, Func Offset: 0
	// Line 104, Address: 0x22eea8, Func Offset: 0x8
	// Line 105, Address: 0x22eeb8, Func Offset: 0x18
	// Func End, Address: 0x22eec8, Func Offset: 0x28
}

// 
// Start address: 0x22eed0
int EvProgEggHoleOnDoor()
{
	float door_pos_w[4];
	float door_pos_e[4];
	// Line 113, Address: 0x22eed0, Func Offset: 0
	// Line 117, Address: 0x22eed8, Func Offset: 0x8
	// Line 123, Address: 0x22ef0c, Func Offset: 0x3c
	// Line 124, Address: 0x22ef14, Func Offset: 0x44
	// Line 125, Address: 0x22ef1c, Func Offset: 0x4c
	// Line 126, Address: 0x22ef24, Func Offset: 0x54
	// Line 127, Address: 0x22ef2c, Func Offset: 0x5c
	// Line 131, Address: 0x22ef34, Func Offset: 0x64
	// Line 132, Address: 0x22ef3c, Func Offset: 0x6c
	// Line 133, Address: 0x22ef44, Func Offset: 0x74
	// Line 134, Address: 0x22ef4c, Func Offset: 0x7c
	// Line 135, Address: 0x22ef54, Func Offset: 0x84
	// Line 139, Address: 0x22ef5c, Func Offset: 0x8c
	// Line 141, Address: 0x22ef8c, Func Offset: 0xbc
	// Line 142, Address: 0x22efa0, Func Offset: 0xd0
	// Line 143, Address: 0x22efac, Func Offset: 0xdc
	// Line 144, Address: 0x22efc4, Func Offset: 0xf4
	// Line 146, Address: 0x22eff4, Func Offset: 0x124
	// Line 147, Address: 0x22f00c, Func Offset: 0x13c
	// Line 148, Address: 0x22f018, Func Offset: 0x148
	// Line 149, Address: 0x22f038, Func Offset: 0x168
	// Line 151, Address: 0x22f068, Func Offset: 0x198
	// Line 152, Address: 0x22f080, Func Offset: 0x1b0
	// Line 153, Address: 0x22f08c, Func Offset: 0x1bc
	// Line 154, Address: 0x22f0a0, Func Offset: 0x1d0
	// Line 155, Address: 0x22f0a8, Func Offset: 0x1d8
	// Line 156, Address: 0x22f0b4, Func Offset: 0x1e4
	// Line 158, Address: 0x22f0c8, Func Offset: 0x1f8
	// Line 161, Address: 0x22f0d0, Func Offset: 0x200
	// Line 162, Address: 0x22f0e8, Func Offset: 0x218
	// Line 163, Address: 0x22f100, Func Offset: 0x230
	// Line 164, Address: 0x22f120, Func Offset: 0x250
	// Line 165, Address: 0x22f128, Func Offset: 0x258
	// Line 166, Address: 0x22f140, Func Offset: 0x270
	// Line 168, Address: 0x22f160, Func Offset: 0x290
	// Line 169, Address: 0x22f174, Func Offset: 0x2a4
	// Line 173, Address: 0x22f188, Func Offset: 0x2b8
	// Line 174, Address: 0x22f1ac, Func Offset: 0x2dc
	// Line 175, Address: 0x22f1b4, Func Offset: 0x2e4
	// Line 176, Address: 0x22f1c4, Func Offset: 0x2f4
	// Line 177, Address: 0x22f1cc, Func Offset: 0x2fc
	// Line 178, Address: 0x22f1e0, Func Offset: 0x310
	// Line 179, Address: 0x22f1fc, Func Offset: 0x32c
	// Line 182, Address: 0x22f204, Func Offset: 0x334
	// Line 185, Address: 0x22f22c, Func Offset: 0x35c
	// Line 186, Address: 0x22f23c, Func Offset: 0x36c
	// Line 187, Address: 0x22f250, Func Offset: 0x380
	// Line 190, Address: 0x22f258, Func Offset: 0x388
	// Line 191, Address: 0x22f268, Func Offset: 0x398
	// Line 193, Address: 0x22f298, Func Offset: 0x3c8
	// Line 194, Address: 0x22f2b4, Func Offset: 0x3e4
	// Line 195, Address: 0x22f2c8, Func Offset: 0x3f8
	// Line 198, Address: 0x22f2d0, Func Offset: 0x400
	// Line 199, Address: 0x22f2f8, Func Offset: 0x428
	// Line 200, Address: 0x22f30c, Func Offset: 0x43c
	// Line 203, Address: 0x22f314, Func Offset: 0x444
	// Line 204, Address: 0x22f328, Func Offset: 0x458
	// Line 205, Address: 0x22f338, Func Offset: 0x468
	// Line 206, Address: 0x22f34c, Func Offset: 0x47c
	// Line 209, Address: 0x22f354, Func Offset: 0x484
	// Line 211, Address: 0x22f384, Func Offset: 0x4b4
	// Line 212, Address: 0x22f39c, Func Offset: 0x4cc
	// Line 213, Address: 0x22f3b0, Func Offset: 0x4e0
	// Line 214, Address: 0x22f3b8, Func Offset: 0x4e8
	// Line 215, Address: 0x22f3d0, Func Offset: 0x500
	// Line 217, Address: 0x22f3e4, Func Offset: 0x514
	// Line 220, Address: 0x22f3ec, Func Offset: 0x51c
	// Line 221, Address: 0x22f408, Func Offset: 0x538
	// Line 222, Address: 0x22f42c, Func Offset: 0x55c
	// Line 223, Address: 0x22f43c, Func Offset: 0x56c
	// Line 224, Address: 0x22f454, Func Offset: 0x584
	// Line 225, Address: 0x22f46c, Func Offset: 0x59c
	// Line 227, Address: 0x22f480, Func Offset: 0x5b0
	// Line 228, Address: 0x22f498, Func Offset: 0x5c8
	// Line 229, Address: 0x22f4b0, Func Offset: 0x5e0
	// Line 231, Address: 0x22f4c8, Func Offset: 0x5f8
	// Line 232, Address: 0x22f4e0, Func Offset: 0x610
	// Line 233, Address: 0x22f4f8, Func Offset: 0x628
	// Line 235, Address: 0x22f510, Func Offset: 0x640
	// Line 236, Address: 0x22f528, Func Offset: 0x658
	// Line 237, Address: 0x22f540, Func Offset: 0x670
	// Line 239, Address: 0x22f558, Func Offset: 0x688
	// Line 240, Address: 0x22f56c, Func Offset: 0x69c
	// Line 243, Address: 0x22f574, Func Offset: 0x6a4
	// Line 244, Address: 0x22f59c, Func Offset: 0x6cc
	// Line 245, Address: 0x22f5b0, Func Offset: 0x6e0
	// Line 248, Address: 0x22f5b8, Func Offset: 0x6e8
	// Line 249, Address: 0x22f5dc, Func Offset: 0x70c
	// Line 252, Address: 0x22f5e4, Func Offset: 0x714
	// Line 253, Address: 0x22f5f8, Func Offset: 0x728
	// Line 254, Address: 0x22f608, Func Offset: 0x738
	// Line 255, Address: 0x22f620, Func Offset: 0x750
	// Line 256, Address: 0x22f638, Func Offset: 0x768
	// Line 258, Address: 0x22f644, Func Offset: 0x774
	// Line 259, Address: 0x22f648, Func Offset: 0x778
	// Func End, Address: 0x22f658, Func Offset: 0x788
}

// 
// Start address: 0x22f660
void EvProgSubDrawEgg()
{
	int work;
	PicDraw_Data pic;
	// Line 264, Address: 0x22f660, Func Offset: 0
	// Line 268, Address: 0x22f668, Func Offset: 0x8
	// Line 270, Address: 0x22f684, Func Offset: 0x24
	// Line 272, Address: 0x22f694, Func Offset: 0x34
	// Line 273, Address: 0x22f6bc, Func Offset: 0x5c
	// Line 276, Address: 0x22f6c4, Func Offset: 0x64
	// Line 280, Address: 0x22f718, Func Offset: 0xb8
	// Line 281, Address: 0x22f71c, Func Offset: 0xbc
	// Line 282, Address: 0x22f734, Func Offset: 0xd4
	// Line 283, Address: 0x22f750, Func Offset: 0xf0
	// Line 284, Address: 0x22f770, Func Offset: 0x110
	// Line 285, Address: 0x22f78c, Func Offset: 0x12c
	// Line 286, Address: 0x22f794, Func Offset: 0x134
	// Line 287, Address: 0x22f7c4, Func Offset: 0x164
	// Line 295, Address: 0x22f7c8, Func Offset: 0x168
	// Line 296, Address: 0x22f7d4, Func Offset: 0x174
	// Func End, Address: 0x22f7e4, Func Offset: 0x184
}

