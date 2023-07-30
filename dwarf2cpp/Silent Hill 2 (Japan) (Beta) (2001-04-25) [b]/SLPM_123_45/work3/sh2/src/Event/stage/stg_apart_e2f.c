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
typedef struct _anon5;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon6;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct _anon7;
typedef struct _anon8;
typedef struct shSkelton;
typedef struct sh2gfw_AREA_HEAD;
typedef struct PAD_3D;
typedef union fsFileIndex;
typedef struct _anon9;
typedef struct _anon10;
typedef struct PicDraw_Data;
typedef struct PAD_2D;
typedef struct shBattleFight;
typedef struct PAD_INFO;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct Pad_KeyConfig;
typedef struct shAttackInfo;

typedef void(*type_10)();
typedef int(*type_15)();
typedef void(*type_16)(SubCharacter*);
typedef void(*type_17)(SubCharacter*);
typedef void(*type_32)(SubCharacter*);
typedef void(*type_34)(SubCharacter*);

typedef unsigned int type_0[256];
typedef unsigned char type_1[10];
typedef fsFileIndex type_2[1];
typedef unsigned int type_3[32];
typedef float type_4[4];
typedef float type_5[2];
typedef unsigned char type_6[4];
typedef float type_7[2][4];
typedef char type_8[4];
typedef char type_9[4];
typedef char type_11[0];
typedef unsigned char type_12[2];
typedef unsigned char type_13[4];
typedef char type_14[4];
typedef unsigned char type_18[664];
typedef _anon5 type_19[11];
typedef unsigned char type_20[13];
typedef int(*type_21)()[8];
typedef unsigned char type_22[34];
typedef float type_23[4][2];
typedef float type_24[4];
typedef unsigned char type_25[4];
typedef unsigned char type_26[4];
typedef float type_27[4];
typedef float type_28[4][4];
typedef _anon0 type_29[57];
typedef PAD_INFO type_30[10];
typedef unsigned char type_31[10];
typedef shAttackInfo type_33[46];
typedef fsFileIndex type_35[1];
typedef unsigned char type_36[2];
typedef unsigned char type_37[4];
typedef unsigned char type_38[2];
typedef fsFileIndex type_39[1];
typedef Model_List type_40[7];
typedef fsFileIndex type_41[1];
typedef unsigned short type_42[4];
typedef unsigned short type_43[4][8];
typedef unsigned char type_44[3];
typedef fsFileIndex type_45[1];

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

struct _anon9
{
	float d[4][4];
};

struct _anon10
{
	fsFile* fp;
	char* name;
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
unsigned char ev_pos[664];
_anon0 ev_list[57];
int(*ev_prog)()[8];
Model_List mdl_list[7];
_anon5 en_list[11];
_anon7 stage_apart_e2f;
shPlayerWork sh2jms;
int ev_s_step;
int ev_p_step;
Pad_KeyConfig key_config;
fsFileIndex data_pic_apt_clock_name_tex[1];
int ev_prog_flag_set;
int ev_cancel;
fsFileIndex data_pic_apt_clock_memo_tex[1];
_anon1 game_flag;
fsFileIndex data_pic_apt_clock_hari_tex[1];
fsFileIndex data_pic_apt_clock_close_tex[1];
float dtf;
fsFileIndex data_pic_apt_clock_open_tex[1];
char pic_buf_1[0];

int EvProgThreeNameOnWall();
int EvProgHintOfClockSet();
int EvProgClockTime();
int EvProgClockNeedleMove();
void EvProgSubClockNeedleDraw(int open_or_close);
int EvProgUseClockKey();
int EvProgTryMoveClock();
int EvProgUseEmergencyKey();

// 
// Start address: 0x224bd0
int EvProgThreeNameOnWall()
{
	// Line 130, Address: 0x224bd0, Func Offset: 0
	// Line 131, Address: 0x224bd8, Func Offset: 0x8
	// Line 133, Address: 0x224c44, Func Offset: 0x74
	// Line 134, Address: 0x224c58, Func Offset: 0x88
	// Line 135, Address: 0x224c64, Func Offset: 0x94
	// Line 139, Address: 0x224c78, Func Offset: 0xa8
	// Line 140, Address: 0x224c8c, Func Offset: 0xbc
	// Line 142, Address: 0x224cb8, Func Offset: 0xe8
	// Line 143, Address: 0x224cc0, Func Offset: 0xf0
	// Line 145, Address: 0x224cd4, Func Offset: 0x104
	// Line 148, Address: 0x224cdc, Func Offset: 0x10c
	// Line 150, Address: 0x224d00, Func Offset: 0x130
	// Line 151, Address: 0x224d10, Func Offset: 0x140
	// Line 155, Address: 0x224d24, Func Offset: 0x154
	// Line 156, Address: 0x224d2c, Func Offset: 0x15c
	// Line 157, Address: 0x224d34, Func Offset: 0x164
	// Line 158, Address: 0x224d3c, Func Offset: 0x16c
	// Line 159, Address: 0x224d60, Func Offset: 0x190
	// Line 162, Address: 0x224d68, Func Offset: 0x198
	// Line 163, Address: 0x224d70, Func Offset: 0x1a0
	// Line 164, Address: 0x224d78, Func Offset: 0x1a8
	// Line 165, Address: 0x224d80, Func Offset: 0x1b0
	// Line 166, Address: 0x224db8, Func Offset: 0x1e8
	// Line 167, Address: 0x224dcc, Func Offset: 0x1fc
	// Line 170, Address: 0x224dd4, Func Offset: 0x204
	// Line 171, Address: 0x224ddc, Func Offset: 0x20c
	// Line 172, Address: 0x224de4, Func Offset: 0x214
	// Line 173, Address: 0x224dec, Func Offset: 0x21c
	// Line 174, Address: 0x224df4, Func Offset: 0x224
	// Line 175, Address: 0x224e08, Func Offset: 0x238
	// Line 176, Address: 0x224e1c, Func Offset: 0x24c
	// Line 177, Address: 0x224e2c, Func Offset: 0x25c
	// Line 180, Address: 0x224e34, Func Offset: 0x264
	// Line 181, Address: 0x224e3c, Func Offset: 0x26c
	// Line 182, Address: 0x224e44, Func Offset: 0x274
	// Line 183, Address: 0x224e4c, Func Offset: 0x27c
	// Line 184, Address: 0x224e5c, Func Offset: 0x28c
	// Line 185, Address: 0x224e70, Func Offset: 0x2a0
	// Line 186, Address: 0x224e80, Func Offset: 0x2b0
	// Line 189, Address: 0x224e88, Func Offset: 0x2b8
	// Line 190, Address: 0x224e9c, Func Offset: 0x2cc
	// Line 192, Address: 0x224ea8, Func Offset: 0x2d8
	// Line 193, Address: 0x224eac, Func Offset: 0x2dc
	// Func End, Address: 0x224ebc, Func Offset: 0x2ec
}

// 
// Start address: 0x224ec0
int EvProgHintOfClockSet()
{
	// Line 199, Address: 0x224ec0, Func Offset: 0
	// Line 200, Address: 0x224ec8, Func Offset: 0x8
	// Line 202, Address: 0x224f34, Func Offset: 0x74
	// Line 203, Address: 0x224f48, Func Offset: 0x88
	// Line 204, Address: 0x224f54, Func Offset: 0x94
	// Line 208, Address: 0x224f68, Func Offset: 0xa8
	// Line 209, Address: 0x224f7c, Func Offset: 0xbc
	// Line 211, Address: 0x224fa8, Func Offset: 0xe8
	// Line 212, Address: 0x224fb0, Func Offset: 0xf0
	// Line 214, Address: 0x224fc4, Func Offset: 0x104
	// Line 217, Address: 0x224fcc, Func Offset: 0x10c
	// Line 219, Address: 0x224ff0, Func Offset: 0x130
	// Line 220, Address: 0x225000, Func Offset: 0x140
	// Line 224, Address: 0x225014, Func Offset: 0x154
	// Line 225, Address: 0x22501c, Func Offset: 0x15c
	// Line 226, Address: 0x225024, Func Offset: 0x164
	// Line 227, Address: 0x22502c, Func Offset: 0x16c
	// Line 228, Address: 0x225050, Func Offset: 0x190
	// Line 231, Address: 0x225058, Func Offset: 0x198
	// Line 232, Address: 0x225060, Func Offset: 0x1a0
	// Line 233, Address: 0x225068, Func Offset: 0x1a8
	// Line 234, Address: 0x225070, Func Offset: 0x1b0
	// Line 235, Address: 0x2250a8, Func Offset: 0x1e8
	// Line 236, Address: 0x2250bc, Func Offset: 0x1fc
	// Line 239, Address: 0x2250c4, Func Offset: 0x204
	// Line 240, Address: 0x2250cc, Func Offset: 0x20c
	// Line 241, Address: 0x2250d4, Func Offset: 0x214
	// Line 242, Address: 0x2250dc, Func Offset: 0x21c
	// Line 243, Address: 0x2250e4, Func Offset: 0x224
	// Line 244, Address: 0x2250f8, Func Offset: 0x238
	// Line 245, Address: 0x22510c, Func Offset: 0x24c
	// Line 246, Address: 0x22511c, Func Offset: 0x25c
	// Line 249, Address: 0x225124, Func Offset: 0x264
	// Line 250, Address: 0x22512c, Func Offset: 0x26c
	// Line 251, Address: 0x225134, Func Offset: 0x274
	// Line 252, Address: 0x22513c, Func Offset: 0x27c
	// Line 253, Address: 0x22514c, Func Offset: 0x28c
	// Line 254, Address: 0x225160, Func Offset: 0x2a0
	// Line 255, Address: 0x225170, Func Offset: 0x2b0
	// Line 258, Address: 0x225178, Func Offset: 0x2b8
	// Line 259, Address: 0x22518c, Func Offset: 0x2cc
	// Line 261, Address: 0x225198, Func Offset: 0x2d8
	// Line 262, Address: 0x22519c, Func Offset: 0x2dc
	// Func End, Address: 0x2251ac, Func Offset: 0x2ec
}

// 
// Start address: 0x2251b0
int EvProgClockTime()
{
	int i;
	int work;
	char c_work[4];
	// Line 268, Address: 0x2251b0, Func Offset: 0
	// Line 273, Address: 0x2251c0, Func Offset: 0x10
	// Line 275, Address: 0x225220, Func Offset: 0x70
	// Line 276, Address: 0x225234, Func Offset: 0x84
	// Line 280, Address: 0x225248, Func Offset: 0x98
	// Line 283, Address: 0x225270, Func Offset: 0xc0
	// Line 284, Address: 0x225280, Func Offset: 0xd0
	// Line 285, Address: 0x225294, Func Offset: 0xe4
	// Line 288, Address: 0x22529c, Func Offset: 0xec
	// Line 289, Address: 0x2252a4, Func Offset: 0xf4
	// Line 290, Address: 0x2252ac, Func Offset: 0xfc
	// Line 291, Address: 0x2252b8, Func Offset: 0x108
	// Line 292, Address: 0x2252c0, Func Offset: 0x110
	// Line 293, Address: 0x2252e4, Func Offset: 0x134
	// Line 296, Address: 0x2252ec, Func Offset: 0x13c
	// Line 297, Address: 0x2252f4, Func Offset: 0x144
	// Line 298, Address: 0x2252fc, Func Offset: 0x14c
	// Line 299, Address: 0x225308, Func Offset: 0x158
	// Line 300, Address: 0x225310, Func Offset: 0x160
	// Line 301, Address: 0x225338, Func Offset: 0x188
	// Line 302, Address: 0x22534c, Func Offset: 0x19c
	// Line 305, Address: 0x225354, Func Offset: 0x1a4
	// Line 306, Address: 0x22535c, Func Offset: 0x1ac
	// Line 307, Address: 0x225364, Func Offset: 0x1b4
	// Line 308, Address: 0x225370, Func Offset: 0x1c0
	// Line 309, Address: 0x225378, Func Offset: 0x1c8
	// Line 310, Address: 0x225380, Func Offset: 0x1d0
	// Line 311, Address: 0x22538c, Func Offset: 0x1dc
	// Line 312, Address: 0x2253c4, Func Offset: 0x214
	// Line 313, Address: 0x225400, Func Offset: 0x250
	// Line 314, Address: 0x22542c, Func Offset: 0x27c
	// Line 315, Address: 0x225460, Func Offset: 0x2b0
	// Line 316, Address: 0x225484, Func Offset: 0x2d4
	// Line 317, Address: 0x225488, Func Offset: 0x2d8
	// Line 318, Address: 0x225490, Func Offset: 0x2e0
	// Line 319, Address: 0x2254b4, Func Offset: 0x304
	// Line 321, Address: 0x2254b8, Func Offset: 0x308
	// Line 322, Address: 0x2254d4, Func Offset: 0x324
	// Line 323, Address: 0x2254e4, Func Offset: 0x334
	// Line 324, Address: 0x2254fc, Func Offset: 0x34c
	// Line 325, Address: 0x225510, Func Offset: 0x360
	// Line 326, Address: 0x225518, Func Offset: 0x368
	// Line 328, Address: 0x22552c, Func Offset: 0x37c
	// Line 329, Address: 0x22553c, Func Offset: 0x38c
	// Line 330, Address: 0x225550, Func Offset: 0x3a0
	// Line 333, Address: 0x225558, Func Offset: 0x3a8
	// Line 334, Address: 0x225560, Func Offset: 0x3b0
	// Line 335, Address: 0x225568, Func Offset: 0x3b8
	// Line 336, Address: 0x225574, Func Offset: 0x3c4
	// Line 337, Address: 0x22557c, Func Offset: 0x3cc
	// Line 338, Address: 0x2255a0, Func Offset: 0x3f0
	// Line 341, Address: 0x2255a8, Func Offset: 0x3f8
	// Line 342, Address: 0x2255bc, Func Offset: 0x40c
	// Line 343, Address: 0x2255cc, Func Offset: 0x41c
	// Line 345, Address: 0x2255d8, Func Offset: 0x428
	// Line 346, Address: 0x2255dc, Func Offset: 0x42c
	// Func End, Address: 0x2255f4, Func Offset: 0x444
}

// 
// Start address: 0x225600
int EvProgClockNeedleMove()
{
	int work;
	// Line 352, Address: 0x225600, Func Offset: 0
	// Line 355, Address: 0x225608, Func Offset: 0x8
	// Line 357, Address: 0x22565c, Func Offset: 0x5c
	// Line 358, Address: 0x225670, Func Offset: 0x70
	// Line 362, Address: 0x225684, Func Offset: 0x84
	// Line 365, Address: 0x2256ac, Func Offset: 0xac
	// Line 366, Address: 0x2256bc, Func Offset: 0xbc
	// Line 367, Address: 0x2256d0, Func Offset: 0xd0
	// Line 370, Address: 0x2256d8, Func Offset: 0xd8
	// Line 371, Address: 0x2256e0, Func Offset: 0xe0
	// Line 372, Address: 0x2256e8, Func Offset: 0xe8
	// Line 373, Address: 0x2256f4, Func Offset: 0xf4
	// Line 374, Address: 0x2256fc, Func Offset: 0xfc
	// Line 375, Address: 0x225720, Func Offset: 0x120
	// Line 378, Address: 0x225728, Func Offset: 0x128
	// Line 379, Address: 0x225730, Func Offset: 0x130
	// Line 380, Address: 0x225738, Func Offset: 0x138
	// Line 381, Address: 0x225744, Func Offset: 0x144
	// Line 382, Address: 0x22574c, Func Offset: 0x14c
	// Line 383, Address: 0x22576c, Func Offset: 0x16c
	// Line 384, Address: 0x2257ac, Func Offset: 0x1ac
	// Line 385, Address: 0x2257c8, Func Offset: 0x1c8
	// Line 386, Address: 0x2257e0, Func Offset: 0x1e0
	// Line 387, Address: 0x225800, Func Offset: 0x200
	// Line 388, Address: 0x22580c, Func Offset: 0x20c
	// Line 389, Address: 0x225838, Func Offset: 0x238
	// Line 390, Address: 0x225848, Func Offset: 0x248
	// Line 392, Address: 0x225854, Func Offset: 0x254
	// Line 393, Address: 0x225870, Func Offset: 0x270
	// Line 394, Address: 0x225880, Func Offset: 0x280
	// Line 396, Address: 0x225894, Func Offset: 0x294
	// Line 399, Address: 0x22589c, Func Offset: 0x29c
	// Line 400, Address: 0x2258a4, Func Offset: 0x2a4
	// Line 401, Address: 0x2258ac, Func Offset: 0x2ac
	// Line 402, Address: 0x2258b8, Func Offset: 0x2b8
	// Line 403, Address: 0x2258c0, Func Offset: 0x2c0
	// Line 404, Address: 0x2258e4, Func Offset: 0x2e4
	// Line 407, Address: 0x2258ec, Func Offset: 0x2ec
	// Line 408, Address: 0x225900, Func Offset: 0x300
	// Line 409, Address: 0x225910, Func Offset: 0x310
	// Line 411, Address: 0x22591c, Func Offset: 0x31c
	// Line 412, Address: 0x225920, Func Offset: 0x320
	// Func End, Address: 0x225930, Func Offset: 0x330
}

// 
// Start address: 0x225930
void EvProgSubClockNeedleDraw(int open_or_close)
{
	int i;
	int no;
	int otp;
	float y1;
	float y0;
	float x;
	float rot;
	float pos[2][4];
	float sinrot;
	float cosrot;
	PicDraw_Data pic;
	unsigned short tex[4][8];
	// Line 417, Address: 0x225930, Func Offset: 0
	// Line 437, Address: 0x22595c, Func Offset: 0x2c
	// Line 439, Address: 0x225978, Func Offset: 0x48
	// Line 441, Address: 0x225988, Func Offset: 0x58
	// Line 442, Address: 0x2259b0, Func Offset: 0x80
	// Line 444, Address: 0x2259e4, Func Offset: 0xb4
	// Line 445, Address: 0x2259f0, Func Offset: 0xc0
	// Line 448, Address: 0x225a1c, Func Offset: 0xec
	// Line 449, Address: 0x225a24, Func Offset: 0xf4
	// Line 450, Address: 0x225a2c, Func Offset: 0xfc
	// Line 451, Address: 0x225a34, Func Offset: 0x104
	// Line 452, Address: 0x225a40, Func Offset: 0x110
	// Line 453, Address: 0x225a44, Func Offset: 0x114
	// Line 456, Address: 0x225a4c, Func Offset: 0x11c
	// Line 457, Address: 0x225a54, Func Offset: 0x124
	// Line 458, Address: 0x225a5c, Func Offset: 0x12c
	// Line 459, Address: 0x225a64, Func Offset: 0x134
	// Line 461, Address: 0x225acc, Func Offset: 0x19c
	// Line 462, Address: 0x225ad0, Func Offset: 0x1a0
	// Line 465, Address: 0x225ad8, Func Offset: 0x1a8
	// Line 466, Address: 0x225ae0, Func Offset: 0x1b0
	// Line 467, Address: 0x225ae8, Func Offset: 0x1b8
	// Line 468, Address: 0x225af0, Func Offset: 0x1c0
	// Line 470, Address: 0x225b44, Func Offset: 0x214
	// Line 471, Address: 0x225b48, Func Offset: 0x218
	// Line 474, Address: 0x225b50, Func Offset: 0x220
	// Line 475, Address: 0x225b58, Func Offset: 0x228
	// Line 476, Address: 0x225b60, Func Offset: 0x230
	// Line 477, Address: 0x225b68, Func Offset: 0x238
	// Line 478, Address: 0x225b6c, Func Offset: 0x23c
	// Line 482, Address: 0x225b70, Func Offset: 0x240
	// Line 483, Address: 0x225b80, Func Offset: 0x250
	// Line 484, Address: 0x225b8c, Func Offset: 0x25c
	// Line 485, Address: 0x225bb8, Func Offset: 0x288
	// Line 486, Address: 0x225bd0, Func Offset: 0x2a0
	// Line 487, Address: 0x225bf8, Func Offset: 0x2c8
	// Line 488, Address: 0x225c0c, Func Offset: 0x2dc
	// Line 489, Address: 0x225c34, Func Offset: 0x304
	// Line 490, Address: 0x225c48, Func Offset: 0x318
	// Line 491, Address: 0x225c6c, Func Offset: 0x33c
	// Line 495, Address: 0x225c7c, Func Offset: 0x34c
	// Line 498, Address: 0x225d18, Func Offset: 0x3e8
	// Line 499, Address: 0x225db4, Func Offset: 0x484
	// Line 502, Address: 0x225dd4, Func Offset: 0x4a4
	// Line 503, Address: 0x225e50, Func Offset: 0x520
	// Line 504, Address: 0x225e54, Func Offset: 0x524
	// Line 505, Address: 0x225e60, Func Offset: 0x530
	// Line 506, Address: 0x225e74, Func Offset: 0x544
	// Func End, Address: 0x225ea4, Func Offset: 0x574
}

// 
// Start address: 0x225eb0
int EvProgUseClockKey()
{
	// Line 512, Address: 0x225eb0, Func Offset: 0
	// Line 513, Address: 0x225eb8, Func Offset: 0x8
	// Line 514, Address: 0x225ec8, Func Offset: 0x18
	// Func End, Address: 0x225ed8, Func Offset: 0x28
}

// 
// Start address: 0x225ee0
int EvProgTryMoveClock()
{
	// Line 522, Address: 0x225ee0, Func Offset: 0
	// Line 524, Address: 0x225f10, Func Offset: 0x30
	// Func End, Address: 0x225f18, Func Offset: 0x38
}

// 
// Start address: 0x225f20
int EvProgUseEmergencyKey()
{
	// Line 531, Address: 0x225f20, Func Offset: 0
	// Func End, Address: 0x225f28, Func Offset: 0x8
}

