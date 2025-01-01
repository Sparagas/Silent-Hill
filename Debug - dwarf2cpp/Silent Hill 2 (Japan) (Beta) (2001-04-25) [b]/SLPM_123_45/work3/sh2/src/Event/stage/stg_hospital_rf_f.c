typedef struct SubCharacter;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_WALL;
typedef union _anon0;
typedef struct Pad_KeyConfig;
typedef struct _anon1;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shPlayerWork;
typedef struct _CL_VHIT_CHARA;
typedef struct _anon2;
typedef union fsFile;
typedef struct _anon3;
typedef struct SubObject;
typedef struct fsCdFile;
typedef struct _CL_VHIT_RESULT;
typedef union _anon4;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct fsMgcFile;
typedef struct Model_List;
typedef struct fsMgfFile;
typedef struct _anon5;
typedef struct _anon6;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct _anon7;
typedef struct _anon8;
typedef struct shSkelton;
typedef struct _anon9;
typedef struct sh2gfw_AREA_HEAD;
typedef struct PAD_3D;
typedef union fsFileIndex;
typedef struct shBattleFight;
typedef struct _anon10;
typedef struct PAD_2D;
typedef struct PicDraw_Data;
typedef struct shBattleShot;
typedef struct PAD_INFO;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef enum _JAMES_LOWER_STATUS : unsigned char;

typedef void(*type_8)();
typedef void(*type_11)(SubCharacter*);
typedef int(*type_12)();
typedef void(*type_13)(SubCharacter*);
typedef void(*type_33)(SubCharacter*);
typedef void(*type_37)(SubCharacter*);

typedef Model_List type_0[1];
typedef unsigned char type_1[3];
typedef unsigned char type_2[10];
typedef unsigned int type_3[256];
typedef fsFileIndex type_4[1];
typedef unsigned int type_5[32];
typedef unsigned char type_6[4];
typedef char type_7[4];
typedef char type_9[4];
typedef unsigned char type_10[2];
typedef unsigned char type_14[4];
typedef unsigned char type_15[13];
typedef unsigned char type_16[234];
typedef float type_17[4];
typedef int(*type_18)()[5];
typedef int type_19[4];
typedef int type_20[4][4];
typedef unsigned char type_21[34];
typedef float type_22[4][2];
typedef float type_23[4];
typedef float type_24[4][4];
typedef int type_25[2];
typedef int type_26[2][4];
typedef short type_27[2];
typedef short type_28[2][5];
typedef unsigned char type_29[4];
typedef unsigned char type_30[4];
typedef PAD_INFO type_31[10];
typedef unsigned char type_32[10];
typedef fsFileIndex type_34[1];
typedef fsFileIndex type_35[1];
typedef shAttackInfo type_36[46];
typedef _anon1 type_38[20];
typedef unsigned char type_39[4];
typedef unsigned char type_40[2];
typedef fsFileIndex type_41[1];
typedef unsigned char type_42[2];
typedef char type_43[0];
typedef char type_44[0];
typedef float type_45[4];

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
	_anon0 hit_check;
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

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
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

struct _anon1
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
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

struct _anon3
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
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

struct _anon6
{
	float x;
	float y;
	float z;
	float w;
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
	_anon1* ev_list;
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

struct sh2gfw_AREA_HEAD
{
	unsigned int area_id;
	unsigned int toGlobalTexHead;
	unsigned int toGlobalClutsHead;
	unsigned int date;
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
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
unsigned char ev_pos[234];
_anon1 ev_list[20];
int(*ev_prog)()[5];
Model_List mdl_list[1];
_anon7 stage_hospital_rf_f;
_anon2 game_flag;
shPlayerWork sh2jms;
int ev_s_step;
int ev_p_step;
float ev_timer;
float dtf;
Pad_KeyConfig key_config;
fsFileIndex data_pic_etc_carsol_tex[1];
fsFileIndex data_pic_hsp_p_h_elevator_botan_tex[1];
fsFileIndex data_pic_hsp_p_h_elevator_tex[1];
float ev_cursor_x;
float ev_cursor_y;
char pic_buf_1[0];
char pic_buf_0[0];
fsFileIndex data_pic_hsp_p_diary_tex[1];

int EvProgElevatorButton();
int EvProgElevatorButtonCheck();
int EvProgElevatorButtonLight();
int EvProgUseRoofKey();
int EvProgTriheadOnRoof();
int EvProgReadDiary();
void StageInit();

// 
// Start address: 0x22cfc0
int EvProgElevatorButton()
{
	// Line 86, Address: 0x22cfc0, Func Offset: 0
	// Line 87, Address: 0x22cfc8, Func Offset: 0x8
	// Line 90, Address: 0x22d028, Func Offset: 0x68
	// Line 91, Address: 0x22d03c, Func Offset: 0x7c
	// Line 92, Address: 0x22d048, Func Offset: 0x88
	// Line 93, Address: 0x22d05c, Func Offset: 0x9c
	// Line 94, Address: 0x22d068, Func Offset: 0xa8
	// Line 98, Address: 0x22d07c, Func Offset: 0xbc
	// Line 102, Address: 0x22d0a8, Func Offset: 0xe8
	// Line 105, Address: 0x22d0bc, Func Offset: 0xfc
	// Line 106, Address: 0x22d0c0, Func Offset: 0x100
	// Line 107, Address: 0x22d0c8, Func Offset: 0x108
	// Line 108, Address: 0x22d0d0, Func Offset: 0x110
	// Line 109, Address: 0x22d0dc, Func Offset: 0x11c
	// Line 110, Address: 0x22d0e4, Func Offset: 0x124
	// Line 111, Address: 0x22d0ec, Func Offset: 0x12c
	// Line 113, Address: 0x22d134, Func Offset: 0x174
	// Line 114, Address: 0x22d150, Func Offset: 0x190
	// Line 115, Address: 0x22d180, Func Offset: 0x1c0
	// Line 118, Address: 0x22d188, Func Offset: 0x1c8
	// Line 119, Address: 0x22d1a4, Func Offset: 0x1e4
	// Line 120, Address: 0x22d1ac, Func Offset: 0x1ec
	// Line 121, Address: 0x22d1b4, Func Offset: 0x1f4
	// Line 122, Address: 0x22d1bc, Func Offset: 0x1fc
	// Line 123, Address: 0x22d1c4, Func Offset: 0x204
	// Line 124, Address: 0x22d1e8, Func Offset: 0x228
	// Line 125, Address: 0x22d1fc, Func Offset: 0x23c
	// Line 128, Address: 0x22d28c, Func Offset: 0x2cc
	// Line 129, Address: 0x22d2a4, Func Offset: 0x2e4
	// Line 132, Address: 0x22d2ac, Func Offset: 0x2ec
	// Line 133, Address: 0x22d2c0, Func Offset: 0x300
	// Line 134, Address: 0x22d2d4, Func Offset: 0x314
	// Line 137, Address: 0x22d364, Func Offset: 0x3a4
	// Line 138, Address: 0x22d378, Func Offset: 0x3b8
	// Line 139, Address: 0x22d380, Func Offset: 0x3c0
	// Line 140, Address: 0x22d3e0, Func Offset: 0x420
	// Line 141, Address: 0x22d3f8, Func Offset: 0x438
	// Line 142, Address: 0x22d408, Func Offset: 0x448
	// Line 143, Address: 0x22d414, Func Offset: 0x454
	// Line 145, Address: 0x22d428, Func Offset: 0x468
	// Line 148, Address: 0x22d430, Func Offset: 0x470
	// Line 149, Address: 0x22d44c, Func Offset: 0x48c
	// Line 150, Address: 0x22d46c, Func Offset: 0x4ac
	// Line 151, Address: 0x22d478, Func Offset: 0x4b8
	// Line 152, Address: 0x22d490, Func Offset: 0x4d0
	// Line 154, Address: 0x22d4a4, Func Offset: 0x4e4
	// Line 157, Address: 0x22d4ac, Func Offset: 0x4ec
	// Line 158, Address: 0x22d4bc, Func Offset: 0x4fc
	// Line 159, Address: 0x22d4d0, Func Offset: 0x510
	// Line 160, Address: 0x22d4e8, Func Offset: 0x528
	// Line 161, Address: 0x22d500, Func Offset: 0x540
	// Line 162, Address: 0x22d518, Func Offset: 0x558
	// Line 165, Address: 0x22d524, Func Offset: 0x564
	// Line 166, Address: 0x22d528, Func Offset: 0x568
	// Func End, Address: 0x22d538, Func Offset: 0x578
}

// 
// Start address: 0x22d540
int EvProgElevatorButtonCheck()
{
	int i;
	float py;
	float px;
	short btn_ctr[2][5];
	// Line 174, Address: 0x22d540, Func Offset: 0
	// Line 180, Address: 0x22d54c, Func Offset: 0xc
	// Line 182, Address: 0x22d574, Func Offset: 0x34
	// Line 183, Address: 0x22d580, Func Offset: 0x40
	// Line 184, Address: 0x22d5c4, Func Offset: 0x84
	// Line 185, Address: 0x22d5f8, Func Offset: 0xb8
	// Line 186, Address: 0x22d620, Func Offset: 0xe0
	// Line 187, Address: 0x22d638, Func Offset: 0xf8
	// Line 189, Address: 0x22d650, Func Offset: 0x110
	// Line 191, Address: 0x22d668, Func Offset: 0x128
	// Line 192, Address: 0x22d680, Func Offset: 0x140
	// Line 193, Address: 0x22d6a4, Func Offset: 0x164
	// Line 194, Address: 0x22d6c8, Func Offset: 0x188
	// Line 196, Address: 0x22d6ec, Func Offset: 0x1ac
	// Line 197, Address: 0x22d704, Func Offset: 0x1c4
	// Line 198, Address: 0x22d724, Func Offset: 0x1e4
	// Line 199, Address: 0x22d748, Func Offset: 0x208
	// Line 201, Address: 0x22d76c, Func Offset: 0x22c
	// Line 202, Address: 0x22d784, Func Offset: 0x244
	// Line 203, Address: 0x22d7a4, Func Offset: 0x264
	// Line 204, Address: 0x22d7c8, Func Offset: 0x288
	// Line 207, Address: 0x22d7ec, Func Offset: 0x2ac
	// Line 208, Address: 0x22d7f0, Func Offset: 0x2b0
	// Func End, Address: 0x22d804, Func Offset: 0x2c4
}

// 
// Start address: 0x22d810
int EvProgElevatorButtonLight()
{
	int alp;
	int no;
	PicDraw_Data pic;
	int btn_tex[4][4];
	int btn_pos[2][4];
	// Line 213, Address: 0x22d810, Func Offset: 0
	// Line 223, Address: 0x22d820, Func Offset: 0x10
	// Line 224, Address: 0x22d838, Func Offset: 0x28
	// Line 225, Address: 0x22d85c, Func Offset: 0x4c
	// Line 227, Address: 0x22d860, Func Offset: 0x50
	// Line 228, Address: 0x22d878, Func Offset: 0x68
	// Line 229, Address: 0x22d89c, Func Offset: 0x8c
	// Line 231, Address: 0x22d8a0, Func Offset: 0x90
	// Line 232, Address: 0x22d8b8, Func Offset: 0xa8
	// Line 233, Address: 0x22d8dc, Func Offset: 0xcc
	// Line 236, Address: 0x22d8e0, Func Offset: 0xd0
	// Line 237, Address: 0x22d914, Func Offset: 0x104
	// Line 239, Address: 0x22d930, Func Offset: 0x120
	// Line 241, Address: 0x22d94c, Func Offset: 0x13c
	// Line 243, Address: 0x22d95c, Func Offset: 0x14c
	// Line 247, Address: 0x22d984, Func Offset: 0x174
	// Line 250, Address: 0x22da58, Func Offset: 0x248
	// Line 251, Address: 0x22dadc, Func Offset: 0x2cc
	// Line 252, Address: 0x22dae4, Func Offset: 0x2d4
	// Line 253, Address: 0x22db18, Func Offset: 0x308
	// Line 255, Address: 0x22db24, Func Offset: 0x314
	// Line 256, Address: 0x22db28, Func Offset: 0x318
	// Func End, Address: 0x22db40, Func Offset: 0x330
}

// 
// Start address: 0x22db40
int EvProgUseRoofKey()
{
	// Line 262, Address: 0x22db40, Func Offset: 0
	// Line 263, Address: 0x22db48, Func Offset: 0x8
	// Line 264, Address: 0x22db58, Func Offset: 0x18
	// Func End, Address: 0x22db68, Func Offset: 0x28
}

// 
// Start address: 0x22db70
int EvProgTriheadOnRoof()
{
	// Line 282, Address: 0x22db70, Func Offset: 0
	// Line 283, Address: 0x22db74, Func Offset: 0x4
	// Func End, Address: 0x22db7c, Func Offset: 0xc
}

// 
// Start address: 0x22db80
int EvProgReadDiary()
{
	// Line 289, Address: 0x22db80, Func Offset: 0
	// Line 291, Address: 0x22db88, Func Offset: 0x8
	// Line 293, Address: 0x22dc18, Func Offset: 0x98
	// Line 294, Address: 0x22dc2c, Func Offset: 0xac
	// Line 295, Address: 0x22dc38, Func Offset: 0xb8
	// Line 296, Address: 0x22dc50, Func Offset: 0xd0
	// Line 300, Address: 0x22dc64, Func Offset: 0xe4
	// Line 301, Address: 0x22dc74, Func Offset: 0xf4
	// Line 302, Address: 0x22dc84, Func Offset: 0x104
	// Line 306, Address: 0x22dc98, Func Offset: 0x118
	// Line 307, Address: 0x22dcac, Func Offset: 0x12c
	// Line 308, Address: 0x22dcbc, Func Offset: 0x13c
	// Line 312, Address: 0x22dcd0, Func Offset: 0x150
	// Line 313, Address: 0x22dcf8, Func Offset: 0x178
	// Line 314, Address: 0x22dd08, Func Offset: 0x188
	// Line 318, Address: 0x22dd1c, Func Offset: 0x19c
	// Line 319, Address: 0x22dd24, Func Offset: 0x1a4
	// Line 320, Address: 0x22dd2c, Func Offset: 0x1ac
	// Line 321, Address: 0x22dd34, Func Offset: 0x1b4
	// Line 322, Address: 0x22dd6c, Func Offset: 0x1ec
	// Line 323, Address: 0x22dd80, Func Offset: 0x200
	// Line 326, Address: 0x22dd88, Func Offset: 0x208
	// Line 327, Address: 0x22dd90, Func Offset: 0x210
	// Line 328, Address: 0x22dd98, Func Offset: 0x218
	// Line 329, Address: 0x22dda0, Func Offset: 0x220
	// Line 330, Address: 0x22dda8, Func Offset: 0x228
	// Line 331, Address: 0x22ddbc, Func Offset: 0x23c
	// Line 332, Address: 0x22ddd0, Func Offset: 0x250
	// Line 335, Address: 0x22ddd8, Func Offset: 0x258
	// Line 336, Address: 0x22ddec, Func Offset: 0x26c
	// Line 337, Address: 0x22ddfc, Func Offset: 0x27c
	// Line 338, Address: 0x22de10, Func Offset: 0x290
	// Line 341, Address: 0x22de18, Func Offset: 0x298
	// Line 342, Address: 0x22de28, Func Offset: 0x2a8
	// Line 345, Address: 0x22de3c, Func Offset: 0x2bc
	// Line 346, Address: 0x22de40, Func Offset: 0x2c0
	// Line 347, Address: 0x22de54, Func Offset: 0x2d4
	// Line 348, Address: 0x22de64, Func Offset: 0x2e4
	// Line 352, Address: 0x22de78, Func Offset: 0x2f8
	// Line 353, Address: 0x22de90, Func Offset: 0x310
	// Line 355, Address: 0x22dea4, Func Offset: 0x324
	// Line 356, Address: 0x22dea8, Func Offset: 0x328
	// Line 357, Address: 0x22debc, Func Offset: 0x33c
	// Line 360, Address: 0x22dec8, Func Offset: 0x348
	// Line 361, Address: 0x22decc, Func Offset: 0x34c
	// Func End, Address: 0x22dedc, Func Offset: 0x35c
}

// 
// Start address: 0x22dee0
void StageInit()
{
	// Line 367, Address: 0x22dee0, Func Offset: 0
	// Func End, Address: 0x22dee8, Func Offset: 0x8
}

