typedef struct shAttackInfo;
typedef struct PAD_3D;
typedef struct SubCharacter;
typedef union _anon0;
typedef struct _CL_VHIT_WALL;
typedef struct _CL_HITPOLY_HEAD;
typedef struct PAD_2D;
typedef struct SubObject;
typedef struct _CL_VHIT_CHARA;
typedef union fsFileIndex;
typedef struct PAD_INFO;
typedef struct _CL_VHIT_RESULT;
typedef union _anon1;
typedef struct _anon2;
typedef struct Chizu_ConnectInfo;
typedef struct Chizu_MarkerList;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct sh2gfw_AREA_HEAD;
typedef struct Chizu_MarkerTex;
typedef struct _anon3;
typedef union fsFile;
typedef struct _SH2_SYS;
typedef struct fsCdFile;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct _anon4;
typedef struct shPlayerWork;
typedef struct fsMgcFile;
typedef struct shSkelton;
typedef struct PicDraw_Data;
typedef struct fsMgfFile;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct shBattleFight;
typedef struct fsHdFile;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct fsMgpFile;
typedef struct Chizu_CurrentBlock;
typedef struct shBattleInfo;
typedef struct _anon5;
typedef struct Pad_KeyConfig;
typedef struct _anon6;

typedef void(*type_12)(SubCharacter*);
typedef void(*type_16)(SubCharacter*);
typedef void(*type_39)(SubCharacter*);
typedef void(*type_43)(SubCharacter*);

typedef short type_0[4];
typedef short type_1[4][2];
typedef Chizu_MarkerTex type_2[10];
typedef unsigned char type_3[4];
typedef unsigned char type_4[4];
typedef PAD_INFO type_5[10];
typedef fsFileIndex* type_6[36];
typedef float type_7[2];
typedef float type_8[2][4];
typedef float type_9[2][4][2];
typedef float type_10[4];
typedef unsigned int type_11[256];
typedef unsigned int type_13[32];
typedef unsigned char type_14[2];
typedef unsigned char type_15[4];
typedef unsigned char type_17[2];
typedef char type_18[4];
typedef unsigned char type_19[10];
typedef char type_20[4];
typedef unsigned char type_21[4];
typedef fsFileIndex* type_22[36];
typedef Chizu_MarkerList type_23[36];
typedef Chizu_ConnectInfo type_24[36];
typedef unsigned int type_25[8];
typedef unsigned char type_26[13];
typedef float type_27[4];
typedef float type_28[4][4];
typedef float type_29[4][2];
typedef unsigned int type_30[44];
typedef unsigned char type_31[4];
typedef unsigned char type_32[4][4];
typedef Chizu_MarkerList* type_33[2];
typedef unsigned char type_34[2];
typedef float type_35[2];
typedef fsFileIndex* type_36[1];
typedef float type_37[2][4];
typedef unsigned char type_38[34];
typedef float type_40[4];
typedef shAttackInfo type_41[46];
typedef char type_42[0];
typedef char type_44[0];
typedef unsigned char type_45[4];
typedef char type_46[0];
typedef Chizu_CurrentBlock type_47[182];
typedef unsigned char type_48[3];
typedef unsigned char type_49[10];
typedef unsigned int type_50[70];
typedef unsigned short type_51[0];

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

struct PAD_3D
{
	char round_way;
	unsigned char reserved1;
	unsigned char lslide;
	unsigned char rslide;
	unsigned char lturn180;
	unsigned char rturn180;
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
	_anon3 pos;
	_anon3 rot;
	_anon3 pos_spd;
	_anon3 rot_spd;
	_anon4 mat;
	shSkelton* sk_top;
	float eye_y;
	float center_y;
	float spd;
	float spd_org;
	float spd_y;
	float spd_roty;
	float grnd_normal[4];
	float grnd_height;
	_anon3 b_pos;
	_anon3 b_rot;
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

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
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
	_anon3 pos;
	_anon3 rot;
	_anon3 pos_spd;
	_anon3 rot_spd;
	_anon4 mat;
	void(*function)(SubCharacter*);
	void(*effecter_function)(SubCharacter*);
	SubObject* pre;
	SubObject* next;
};

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

union fsFileIndex
{
	_anon6 index;
	unsigned long pack;
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

struct Chizu_ConnectInfo
{
	char up;
	char down;
	char right;
	char left;
};

struct Chizu_MarkerList
{
	Chizu_MarkerTex* tex;
	int* data;
	int head;
	int tail;
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

struct sh2gfw_AREA_HEAD
{
	unsigned int area_id;
	unsigned int toGlobalTexHead;
	unsigned int toGlobalClutsHead;
	unsigned int date;
};

struct Chizu_MarkerTex
{
	short u0;
	short v0;
	short u1;
	short v1;
};

struct _anon3
{
	float x;
	float y;
	float z;
	float w;
};

union fsFile
{
	_anon5 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
};

struct _SH2_SYS
{
	unsigned int step[8];
	int main_status;
	unsigned int boot_first;
	unsigned int soft_reset;
	unsigned int frame_cnt;
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

struct _anon4
{
	float d[4][4];
};

struct shPlayerWork
{
	SubCharacter* player;
	_anon3 dist_rot;
	_anon3 dist_pos;
	_anon3 pos;
	_anon3 rot;
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
	_anon3 tgt_body_angle;
	_anon3 tgt_neck_angle;
	_anon3 tgt_arms_angle;
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

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon4 src_m;
	_anon3 src_t;
	_anon4 des_m;
	_anon3 des_t;
	_anon3 axis;
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
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

struct Chizu_CurrentBlock
{
	int chizu;
	float cp_x;
	float cp_y;
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

struct _anon5
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

struct _anon6
{
	fsFile* fp;
	char* name;
};

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
Chizu_CurrentBlock chz_crt_block[182];
Chizu_ConnectInfo chz_connect[36];
Chizu_MarkerTex chz_mrk_tex_hsp[10];
unsigned int chz_mrk_dat_hospitalb1f[44];
unsigned int chz_mrk_dat_hospital23rf[70];
Chizu_MarkerList chizu_marker_list[36];
int chizu_from;
int chizu_crnt;
int chizu_next;
float disp_rate;
_SH2_SYS Sh2sys;
float chizu_center_y;
float chizu_center_x;
_anon2 game_flag;
unsigned short msg_station[0];
fsFileIndex* cursor_file;
fsFileIndex* marker_file;
fsFileIndex* base_file;
int chizu_disp_step;
shPlayerWork sh2jms;
char pic_buf_2[0];
char pic_buf_1[0];
char pic_buf_0[0];
float dtf;
Pad_KeyConfig key_config;
float jms_z;
float jms_x;

void ChizuMain();
int ChizuSelect();
int ChizuPossessionCheck(int chizu);
void ChizuFileLoad(int load_chizu);
void ChizuDisplay();
void ChizuMarkerDraw();
void ChizuControl();
void ChizuConnectArrowDraw();
int ChizuConnectCheck(int chizu, int connect);
void ChizuCurrentPositionDraw();
void ChizuCurrentPositionCheck(float* px, float* py);

// 
// Start address: 0x1ccd70
void ChizuMain()
{
	// Line 102, Address: 0x1ccd70, Func Offset: 0
	// Line 103, Address: 0x1ccd7c, Func Offset: 0xc
	// Line 106, Address: 0x1ccdac, Func Offset: 0x3c
	// Line 107, Address: 0x1ccdb8, Func Offset: 0x48
	// Line 108, Address: 0x1ccdc4, Func Offset: 0x54
	// Line 111, Address: 0x1ccdcc, Func Offset: 0x5c
	// Line 112, Address: 0x1ccdd8, Func Offset: 0x68
	// Line 113, Address: 0x1ccde0, Func Offset: 0x70
	// Line 114, Address: 0x1ccdf0, Func Offset: 0x80
	// Line 115, Address: 0x1ccdf8, Func Offset: 0x88
	// Line 116, Address: 0x1cce00, Func Offset: 0x90
	// Line 117, Address: 0x1cce08, Func Offset: 0x98
	// Line 118, Address: 0x1cce10, Func Offset: 0xa0
	// Line 119, Address: 0x1cce28, Func Offset: 0xb8
	// Line 120, Address: 0x1cce38, Func Offset: 0xc8
	// Line 121, Address: 0x1cce40, Func Offset: 0xd0
	// Line 122, Address: 0x1cce48, Func Offset: 0xd8
	// Line 123, Address: 0x1cce60, Func Offset: 0xf0
	// Line 125, Address: 0x1cce6c, Func Offset: 0xfc
	// Line 126, Address: 0x1cce7c, Func Offset: 0x10c
	// Line 127, Address: 0x1cce88, Func Offset: 0x118
	// Line 130, Address: 0x1cce90, Func Offset: 0x120
	// Line 131, Address: 0x1ccea0, Func Offset: 0x130
	// Line 132, Address: 0x1cceb0, Func Offset: 0x140
	// Line 133, Address: 0x1cceb8, Func Offset: 0x148
	// Line 134, Address: 0x1ccecc, Func Offset: 0x15c
	// Line 135, Address: 0x1cced8, Func Offset: 0x168
	// Line 136, Address: 0x1cceec, Func Offset: 0x17c
	// Line 139, Address: 0x1ccef4, Func Offset: 0x184
	// Line 140, Address: 0x1ccf08, Func Offset: 0x198
	// Line 141, Address: 0x1ccf10, Func Offset: 0x1a0
	// Line 142, Address: 0x1ccf18, Func Offset: 0x1a8
	// Line 143, Address: 0x1ccf28, Func Offset: 0x1b8
	// Line 144, Address: 0x1ccf40, Func Offset: 0x1d0
	// Line 145, Address: 0x1ccf4c, Func Offset: 0x1dc
	// Line 146, Address: 0x1ccf54, Func Offset: 0x1e4
	// Line 147, Address: 0x1ccf60, Func Offset: 0x1f0
	// Line 149, Address: 0x1ccf6c, Func Offset: 0x1fc
	// Line 150, Address: 0x1ccf74, Func Offset: 0x204
	// Line 152, Address: 0x1ccf80, Func Offset: 0x210
	// Line 155, Address: 0x1ccf88, Func Offset: 0x218
	// Line 156, Address: 0x1ccfa0, Func Offset: 0x230
	// Line 157, Address: 0x1ccfb0, Func Offset: 0x240
	// Line 158, Address: 0x1ccfb8, Func Offset: 0x248
	// Line 159, Address: 0x1ccfd0, Func Offset: 0x260
	// Line 160, Address: 0x1ccfe0, Func Offset: 0x270
	// Line 161, Address: 0x1ccff8, Func Offset: 0x288
	// Line 163, Address: 0x1cd010, Func Offset: 0x2a0
	// Line 164, Address: 0x1cd02c, Func Offset: 0x2bc
	// Line 165, Address: 0x1cd048, Func Offset: 0x2d8
	// Line 166, Address: 0x1cd050, Func Offset: 0x2e0
	// Line 167, Address: 0x1cd05c, Func Offset: 0x2ec
	// Line 169, Address: 0x1cd068, Func Offset: 0x2f8
	// Line 170, Address: 0x1cd074, Func Offset: 0x304
	// Line 173, Address: 0x1cd07c, Func Offset: 0x30c
	// Line 174, Address: 0x1cd084, Func Offset: 0x314
	// Line 175, Address: 0x1cd094, Func Offset: 0x324
	// Line 176, Address: 0x1cd0a0, Func Offset: 0x330
	// Line 179, Address: 0x1cd0a8, Func Offset: 0x338
	// Line 180, Address: 0x1cd0b0, Func Offset: 0x340
	// Line 181, Address: 0x1cd0b8, Func Offset: 0x348
	// Line 182, Address: 0x1cd0c8, Func Offset: 0x358
	// Line 183, Address: 0x1cd0d8, Func Offset: 0x368
	// Line 185, Address: 0x1cd0e4, Func Offset: 0x374
	// Line 188, Address: 0x1cd0ec, Func Offset: 0x37c
	// Line 189, Address: 0x1cd0f4, Func Offset: 0x384
	// Line 190, Address: 0x1cd104, Func Offset: 0x394
	// Line 192, Address: 0x1cd12c, Func Offset: 0x3bc
	// Line 193, Address: 0x1cd13c, Func Offset: 0x3cc
	// Line 195, Address: 0x1cd148, Func Offset: 0x3d8
	// Line 198, Address: 0x1cd150, Func Offset: 0x3e0
	// Line 199, Address: 0x1cd19c, Func Offset: 0x42c
	// Line 200, Address: 0x1cd1d0, Func Offset: 0x460
	// Line 203, Address: 0x1cd1d8, Func Offset: 0x468
	// Line 204, Address: 0x1cd1e0, Func Offset: 0x470
	// Func End, Address: 0x1cd1f4, Func Offset: 0x484
}

// 
// Start address: 0x1cd200
int ChizuSelect()
{
	int work;
	int room;
	SubCharacter* jms;
	// Line 210, Address: 0x1cd200, Func Offset: 0
	// Line 215, Address: 0x1cd214, Func Offset: 0x14
	// Line 216, Address: 0x1cd21c, Func Offset: 0x1c
	// Line 217, Address: 0x1cd234, Func Offset: 0x34
	// Line 220, Address: 0x1cd250, Func Offset: 0x50
	// Line 222, Address: 0x1cd2e8, Func Offset: 0xe8
	// Line 224, Address: 0x1cd358, Func Offset: 0x158
	// Line 225, Address: 0x1cd35c, Func Offset: 0x15c
	// Line 227, Address: 0x1cd3d8, Func Offset: 0x1d8
	// Line 228, Address: 0x1cd3dc, Func Offset: 0x1dc
	// Line 229, Address: 0x1cd3e4, Func Offset: 0x1e4
	// Line 231, Address: 0x1cd3e8, Func Offset: 0x1e8
	// Line 234, Address: 0x1cd3f0, Func Offset: 0x1f0
	// Line 236, Address: 0x1cd464, Func Offset: 0x264
	// Line 237, Address: 0x1cd468, Func Offset: 0x268
	// Line 239, Address: 0x1cd4e4, Func Offset: 0x2e4
	// Line 240, Address: 0x1cd4e8, Func Offset: 0x2e8
	// Line 241, Address: 0x1cd4f0, Func Offset: 0x2f0
	// Line 243, Address: 0x1cd4f4, Func Offset: 0x2f4
	// Line 246, Address: 0x1cd4fc, Func Offset: 0x2fc
	// Line 248, Address: 0x1cd570, Func Offset: 0x370
	// Line 249, Address: 0x1cd574, Func Offset: 0x374
	// Line 251, Address: 0x1cd5f0, Func Offset: 0x3f0
	// Line 252, Address: 0x1cd5f4, Func Offset: 0x3f4
	// Line 253, Address: 0x1cd5fc, Func Offset: 0x3fc
	// Line 255, Address: 0x1cd600, Func Offset: 0x400
	// Line 258, Address: 0x1cd608, Func Offset: 0x408
	// Line 259, Address: 0x1cd64c, Func Offset: 0x44c
	// Line 260, Address: 0x1cd650, Func Offset: 0x450
	// Line 261, Address: 0x1cd658, Func Offset: 0x458
	// Line 263, Address: 0x1cd65c, Func Offset: 0x45c
	// Line 270, Address: 0x1cd664, Func Offset: 0x464
	// Line 272, Address: 0x1cd6cc, Func Offset: 0x4cc
	// Line 273, Address: 0x1cd6d0, Func Offset: 0x4d0
	// Line 274, Address: 0x1cd6d8, Func Offset: 0x4d8
	// Line 276, Address: 0x1cd6dc, Func Offset: 0x4dc
	// Line 279, Address: 0x1cd6e4, Func Offset: 0x4e4
	// Line 280, Address: 0x1cd700, Func Offset: 0x500
	// Line 281, Address: 0x1cd730, Func Offset: 0x530
	// Line 282, Address: 0x1cd734, Func Offset: 0x534
	// Line 285, Address: 0x1cd73c, Func Offset: 0x53c
	// Line 286, Address: 0x1cd758, Func Offset: 0x558
	// Line 287, Address: 0x1cd788, Func Offset: 0x588
	// Line 299, Address: 0x1cd78c, Func Offset: 0x58c
	// Line 301, Address: 0x1cd7bc, Func Offset: 0x5bc
	// Line 302, Address: 0x1cd7d4, Func Offset: 0x5d4
	// Line 303, Address: 0x1cd7d8, Func Offset: 0x5d8
	// Line 304, Address: 0x1cd7f8, Func Offset: 0x5f8
	// Line 308, Address: 0x1cd7fc, Func Offset: 0x5fc
	// Line 309, Address: 0x1cd814, Func Offset: 0x614
	// Line 310, Address: 0x1cd82c, Func Offset: 0x62c
	// Line 313, Address: 0x1cd830, Func Offset: 0x630
	// Line 314, Address: 0x1cd834, Func Offset: 0x634
	// Func End, Address: 0x1cd850, Func Offset: 0x650
}

// 
// Start address: 0x1cd850
int ChizuPossessionCheck(int chizu)
{
	// Line 320, Address: 0x1cd850, Func Offset: 0
	// Line 321, Address: 0x1cd858, Func Offset: 0x8
	// Line 323, Address: 0x1cd884, Func Offset: 0x34
	// Line 326, Address: 0x1cd890, Func Offset: 0x40
	// Line 332, Address: 0x1cd8b4, Func Offset: 0x64
	// Line 338, Address: 0x1cd8d8, Func Offset: 0x88
	// Line 341, Address: 0x1cd8f0, Func Offset: 0xa0
	// Line 346, Address: 0x1cd914, Func Offset: 0xc4
	// Line 349, Address: 0x1cd92c, Func Offset: 0xdc
	// Line 354, Address: 0x1cd950, Func Offset: 0x100
	// Line 359, Address: 0x1cd974, Func Offset: 0x124
	// Line 366, Address: 0x1cd998, Func Offset: 0x148
	// Line 371, Address: 0x1cd9ac, Func Offset: 0x15c
	// Line 376, Address: 0x1cd9d0, Func Offset: 0x180
	// Line 383, Address: 0x1cd9f4, Func Offset: 0x1a4
	// Line 384, Address: 0x1cda08, Func Offset: 0x1b8
	// Line 387, Address: 0x1cda2c, Func Offset: 0x1dc
	// Line 388, Address: 0x1cda30, Func Offset: 0x1e0
	// Func End, Address: 0x1cda3c, Func Offset: 0x1ec
}

// 
// Start address: 0x1cda40
void ChizuFileLoad(int load_chizu)
{
	fsFileIndex* cursor_file_list[1];
	fsFileIndex* marker_file_list[36];
	fsFileIndex* base_file_list[36];
	// Line 394, Address: 0x1cda40, Func Offset: 0
	// Line 474, Address: 0x1cda4c, Func Offset: 0xc
	// Line 476, Address: 0x1cda94, Func Offset: 0x54
	// Line 477, Address: 0x1cdabc, Func Offset: 0x7c
	// Line 481, Address: 0x1cdadc, Func Offset: 0x9c
	// Line 483, Address: 0x1cdb24, Func Offset: 0xe4
	// Line 484, Address: 0x1cdb4c, Func Offset: 0x10c
	// Line 488, Address: 0x1cdb6c, Func Offset: 0x12c
	// Line 490, Address: 0x1cdb94, Func Offset: 0x154
	// Line 491, Address: 0x1cdbac, Func Offset: 0x16c
	// Line 493, Address: 0x1cdbbc, Func Offset: 0x17c
	// Func End, Address: 0x1cdbcc, Func Offset: 0x18c
}

// 
// Start address: 0x1cdbd0
void ChizuDisplay()
{
	float v1;
	float u1;
	float v0;
	float u0;
	PicDraw_Data pic0;
	// Line 499, Address: 0x1cdbd0, Func Offset: 0
	// Line 506, Address: 0x1cdbec, Func Offset: 0x1c
	// Line 507, Address: 0x1cdc00, Func Offset: 0x30
	// Line 508, Address: 0x1cdc1c, Func Offset: 0x4c
	// Line 509, Address: 0x1cdc40, Func Offset: 0x70
	// Line 510, Address: 0x1cdc50, Func Offset: 0x80
	// Line 512, Address: 0x1cdc5c, Func Offset: 0x8c
	// Line 513, Address: 0x1cdc78, Func Offset: 0xa8
	// Line 514, Address: 0x1cdc94, Func Offset: 0xc4
	// Line 515, Address: 0x1cdcb4, Func Offset: 0xe4
	// Line 516, Address: 0x1cdcc0, Func Offset: 0xf0
	// Line 520, Address: 0x1cdcc8, Func Offset: 0xf8
	// Line 521, Address: 0x1cdce8, Func Offset: 0x118
	// Line 522, Address: 0x1cdd08, Func Offset: 0x138
	// Line 523, Address: 0x1cdd2c, Func Offset: 0x15c
	// Line 524, Address: 0x1cdd50, Func Offset: 0x180
	// Line 525, Address: 0x1cdd6c, Func Offset: 0x19c
	// Line 526, Address: 0x1cdd88, Func Offset: 0x1b8
	// Line 527, Address: 0x1cddb4, Func Offset: 0x1e4
	// Line 530, Address: 0x1cdde0, Func Offset: 0x210
	// Line 532, Address: 0x1cdde8, Func Offset: 0x218
	// Line 534, Address: 0x1cde04, Func Offset: 0x234
	// Line 536, Address: 0x1cde14, Func Offset: 0x244
	// Line 537, Address: 0x1cde3c, Func Offset: 0x26c
	// Line 539, Address: 0x1cde44, Func Offset: 0x274
	// Line 540, Address: 0x1cdeb0, Func Offset: 0x2e0
	// Line 542, Address: 0x1cdebc, Func Offset: 0x2ec
	// Line 543, Address: 0x1cdec4, Func Offset: 0x2f4
	// Line 545, Address: 0x1cdecc, Func Offset: 0x2fc
	// Line 547, Address: 0x1cdeec, Func Offset: 0x31c
	// Line 548, Address: 0x1cdf00, Func Offset: 0x330
	// Func End, Address: 0x1cdf24, Func Offset: 0x354
}

// 
// Start address: 0x1cdf30
void ChizuMarkerDraw()
{
	int j;
	int i;
	float rate;
	float y1;
	float x1;
	float y0;
	float x0;
	PicDraw_Data pic1;
	int* dp;
	Chizu_MarkerTex* tp;
	Chizu_MarkerList* lp;
	Chizu_MarkerList* list[2];
	// Line 556, Address: 0x1cdf30, Func Offset: 0
	// Line 571, Address: 0x1cdf44, Func Offset: 0x14
	// Line 573, Address: 0x1cdf60, Func Offset: 0x30
	// Line 575, Address: 0x1cdf70, Func Offset: 0x40
	// Line 576, Address: 0x1cdf98, Func Offset: 0x68
	// Line 577, Address: 0x1cdfa0, Func Offset: 0x70
	// Line 581, Address: 0x1cdfd4, Func Offset: 0xa4
	// Line 582, Address: 0x1cdff0, Func Offset: 0xc0
	// Line 586, Address: 0x1cdff4, Func Offset: 0xc4
	// Line 587, Address: 0x1ce000, Func Offset: 0xd0
	// Line 588, Address: 0x1ce00c, Func Offset: 0xdc
	// Line 599, Address: 0x1ce020, Func Offset: 0xf0
	// Line 604, Address: 0x1ce02c, Func Offset: 0xfc
	// Line 605, Address: 0x1ce068, Func Offset: 0x138
	// Line 606, Address: 0x1ce078, Func Offset: 0x148
	// Line 633, Address: 0x1ce08c, Func Offset: 0x15c
	// Line 634, Address: 0x1ce0ac, Func Offset: 0x17c
	// Line 635, Address: 0x1ce0cc, Func Offset: 0x19c
	// Line 636, Address: 0x1ce0ec, Func Offset: 0x1bc
	// Line 637, Address: 0x1ce100, Func Offset: 0x1d0
	// Line 638, Address: 0x1ce114, Func Offset: 0x1e4
	// Line 639, Address: 0x1ce164, Func Offset: 0x234
	// Line 641, Address: 0x1ce1b4, Func Offset: 0x284
	// Line 644, Address: 0x1ce220, Func Offset: 0x2f0
	// Line 645, Address: 0x1ce27c, Func Offset: 0x34c
	// Line 646, Address: 0x1ce288, Func Offset: 0x358
	// Line 647, Address: 0x1ce2a8, Func Offset: 0x378
	// Line 648, Address: 0x1ce2bc, Func Offset: 0x38c
	// Func End, Address: 0x1ce2d8, Func Offset: 0x3a8
}

// 
// Start address: 0x1ce2e0
void ChizuControl()
{
	unsigned char lsy;
	unsigned char lsx;
	float any;
	float anx;
	// Line 654, Address: 0x1ce2e0, Func Offset: 0
	// Line 662, Address: 0x1ce2f0, Func Offset: 0x10
	// Line 663, Address: 0x1ce300, Func Offset: 0x20
	// Line 664, Address: 0x1ce330, Func Offset: 0x50
	// Line 665, Address: 0x1ce348, Func Offset: 0x68
	// Line 666, Address: 0x1ce364, Func Offset: 0x84
	// Line 667, Address: 0x1ce384, Func Offset: 0xa4
	// Line 668, Address: 0x1ce3a0, Func Offset: 0xc0
	// Line 669, Address: 0x1ce3c0, Func Offset: 0xe0
	// Line 670, Address: 0x1ce3dc, Func Offset: 0xfc
	// Line 671, Address: 0x1ce3fc, Func Offset: 0x11c
	// Line 673, Address: 0x1ce418, Func Offset: 0x138
	// Line 674, Address: 0x1ce420, Func Offset: 0x140
	// Line 675, Address: 0x1ce43c, Func Offset: 0x15c
	// Line 676, Address: 0x1ce464, Func Offset: 0x184
	// Line 677, Address: 0x1ce470, Func Offset: 0x190
	// Line 678, Address: 0x1ce478, Func Offset: 0x198
	// Line 679, Address: 0x1ce490, Func Offset: 0x1b0
	// Line 680, Address: 0x1ce4a0, Func Offset: 0x1c0
	// Line 681, Address: 0x1ce4d8, Func Offset: 0x1f8
	// Line 682, Address: 0x1ce4e8, Func Offset: 0x208
	// Line 683, Address: 0x1ce520, Func Offset: 0x240
	// Line 684, Address: 0x1ce52c, Func Offset: 0x24c
	// Line 685, Address: 0x1ce544, Func Offset: 0x264
	// Line 686, Address: 0x1ce554, Func Offset: 0x274
	// Line 687, Address: 0x1ce58c, Func Offset: 0x2ac
	// Line 688, Address: 0x1ce59c, Func Offset: 0x2bc
	// Line 689, Address: 0x1ce5d4, Func Offset: 0x2f4
	// Line 690, Address: 0x1ce5e0, Func Offset: 0x300
	// Line 691, Address: 0x1ce610, Func Offset: 0x330
	// Line 692, Address: 0x1ce644, Func Offset: 0x364
	// Line 693, Address: 0x1ce674, Func Offset: 0x394
	// Line 694, Address: 0x1ce67c, Func Offset: 0x39c
	// Line 695, Address: 0x1ce694, Func Offset: 0x3b4
	// Line 696, Address: 0x1ce6c0, Func Offset: 0x3e0
	// Line 697, Address: 0x1ce6e0, Func Offset: 0x400
	// Line 699, Address: 0x1ce70c, Func Offset: 0x42c
	// Line 700, Address: 0x1ce724, Func Offset: 0x444
	// Line 701, Address: 0x1ce74c, Func Offset: 0x46c
	// Line 702, Address: 0x1ce76c, Func Offset: 0x48c
	// Line 705, Address: 0x1ce794, Func Offset: 0x4b4
	// Line 706, Address: 0x1ce7c8, Func Offset: 0x4e8
	// Line 707, Address: 0x1ce7fc, Func Offset: 0x51c
	// Line 708, Address: 0x1ce830, Func Offset: 0x550
	// Line 713, Address: 0x1ce864, Func Offset: 0x584
	// Line 714, Address: 0x1ce89c, Func Offset: 0x5bc
	// Line 715, Address: 0x1ce8a8, Func Offset: 0x5c8
	// Func End, Address: 0x1ce8c0, Func Offset: 0x5e0
}

// 
// Start address: 0x1ce8c0
void ChizuConnectArrowDraw()
{
	int i;
	int work;
	unsigned char alpha;
	float y1;
	float x1;
	float y0;
	float x0;
	float rate;
	PicDraw_Data pic2;
	unsigned char tex[4][4];
	float def_pos[2][4];
	// Line 723, Address: 0x1ce8c0, Func Offset: 0
	// Line 744, Address: 0x1ce8cc, Func Offset: 0xc
	// Line 746, Address: 0x1ce8e8, Func Offset: 0x28
	// Line 748, Address: 0x1ce8f8, Func Offset: 0x38
	// Line 749, Address: 0x1ce920, Func Offset: 0x60
	// Line 750, Address: 0x1ce928, Func Offset: 0x68
	// Line 751, Address: 0x1ce958, Func Offset: 0x98
	// Line 752, Address: 0x1ce984, Func Offset: 0xc4
	// Line 754, Address: 0x1ce9b4, Func Offset: 0xf4
	// Line 755, Address: 0x1ce9c0, Func Offset: 0x100
	// Line 758, Address: 0x1ce9ec, Func Offset: 0x12c
	// Line 759, Address: 0x1cea00, Func Offset: 0x140
	// Line 761, Address: 0x1cea08, Func Offset: 0x148
	// Line 762, Address: 0x1cea1c, Func Offset: 0x15c
	// Line 764, Address: 0x1cea24, Func Offset: 0x164
	// Line 765, Address: 0x1cea38, Func Offset: 0x178
	// Line 767, Address: 0x1cea40, Func Offset: 0x180
	// Line 769, Address: 0x1cea54, Func Offset: 0x194
	// Line 770, Address: 0x1cea58, Func Offset: 0x198
	// Line 771, Address: 0x1cea60, Func Offset: 0x1a0
	// Line 773, Address: 0x1cea84, Func Offset: 0x1c4
	// Line 774, Address: 0x1cea8c, Func Offset: 0x1cc
	// Line 775, Address: 0x1cea94, Func Offset: 0x1d4
	// Line 777, Address: 0x1cea9c, Func Offset: 0x1dc
	// Line 778, Address: 0x1ceab0, Func Offset: 0x1f0
	// Line 781, Address: 0x1ceac8, Func Offset: 0x208
	// Line 782, Address: 0x1ceae8, Func Offset: 0x228
	// Line 783, Address: 0x1ceafc, Func Offset: 0x23c
	// Line 784, Address: 0x1ceb10, Func Offset: 0x250
	// Line 785, Address: 0x1ceb68, Func Offset: 0x2a8
	// Line 787, Address: 0x1cebc0, Func Offset: 0x300
	// Line 790, Address: 0x1cec2c, Func Offset: 0x36c
	// Line 791, Address: 0x1cecb8, Func Offset: 0x3f8
	// Line 792, Address: 0x1cecc4, Func Offset: 0x404
	// Line 825, Address: 0x1cecdc, Func Offset: 0x41c
	// Func End, Address: 0x1cecf0, Func Offset: 0x430
}

// 
// Start address: 0x1cecf0
int ChizuConnectCheck(int chizu, int connect)
{
	int work;
	// Line 830, Address: 0x1cecf0, Func Offset: 0
	// Line 833, Address: 0x1ced04, Func Offset: 0x14
	// Line 835, Address: 0x1ced34, Func Offset: 0x44
	// Line 836, Address: 0x1ced5c, Func Offset: 0x6c
	// Line 837, Address: 0x1ced84, Func Offset: 0x94
	// Line 838, Address: 0x1cedac, Func Offset: 0xbc
	// Line 842, Address: 0x1cedcc, Func Offset: 0xdc
	// Line 844, Address: 0x1cede0, Func Offset: 0xf0
	// Line 846, Address: 0x1cee00, Func Offset: 0x110
	// Line 848, Address: 0x1cee50, Func Offset: 0x160
	// Line 849, Address: 0x1cee74, Func Offset: 0x184
	// Line 852, Address: 0x1cee80, Func Offset: 0x190
	// Line 853, Address: 0x1ceea8, Func Offset: 0x1b8
	// Line 856, Address: 0x1ceeb4, Func Offset: 0x1c4
	// Line 857, Address: 0x1ceedc, Func Offset: 0x1ec
	// Line 860, Address: 0x1ceee8, Func Offset: 0x1f8
	// Line 861, Address: 0x1cef10, Func Offset: 0x220
	// Line 864, Address: 0x1cef1c, Func Offset: 0x22c
	// Line 865, Address: 0x1cef44, Func Offset: 0x254
	// Line 868, Address: 0x1cef50, Func Offset: 0x260
	// Line 869, Address: 0x1cef78, Func Offset: 0x288
	// Line 873, Address: 0x1cef84, Func Offset: 0x294
	// Line 875, Address: 0x1cefa4, Func Offset: 0x2b4
	// Line 876, Address: 0x1cefb0, Func Offset: 0x2c0
	// Line 877, Address: 0x1cefc4, Func Offset: 0x2d4
	// Line 878, Address: 0x1cefd0, Func Offset: 0x2e0
	// Line 879, Address: 0x1cefe4, Func Offset: 0x2f4
	// Line 880, Address: 0x1ceff0, Func Offset: 0x300
	// Line 881, Address: 0x1ceffc, Func Offset: 0x30c
	// Line 882, Address: 0x1cf010, Func Offset: 0x320
	// Line 883, Address: 0x1cf01c, Func Offset: 0x32c
	// Line 884, Address: 0x1cf028, Func Offset: 0x338
	// Line 885, Address: 0x1cf03c, Func Offset: 0x34c
	// Line 888, Address: 0x1cf048, Func Offset: 0x358
	// Line 890, Address: 0x1cf060, Func Offset: 0x370
	// Line 891, Address: 0x1cf080, Func Offset: 0x390
	// Line 893, Address: 0x1cf084, Func Offset: 0x394
	// Func End, Address: 0x1cf098, Func Offset: 0x3a8
}

// 
// Start address: 0x1cf0a0
void ChizuCurrentPositionDraw()
{
	int j;
	int i;
	float py;
	float px;
	float rate;
	float pos[2][4][2];
	float sinrot;
	float cosrot;
	PicDraw_Data pic3;
	short uv[4][2];
	// Line 899, Address: 0x1cf0a0, Func Offset: 0
	// Line 911, Address: 0x1cf0b0, Func Offset: 0x10
	// Line 913, Address: 0x1cf0c0, Func Offset: 0x20
	// Line 914, Address: 0x1cf0d8, Func Offset: 0x38
	// Line 916, Address: 0x1cf0ec, Func Offset: 0x4c
	// Line 917, Address: 0x1cf114, Func Offset: 0x74
	// Line 918, Address: 0x1cf13c, Func Offset: 0x9c
	// Line 919, Address: 0x1cf164, Func Offset: 0xc4
	// Line 920, Address: 0x1cf18c, Func Offset: 0xec
	// Line 921, Address: 0x1cf1b4, Func Offset: 0x114
	// Line 922, Address: 0x1cf1dc, Func Offset: 0x13c
	// Line 923, Address: 0x1cf204, Func Offset: 0x164
	// Line 925, Address: 0x1cf22c, Func Offset: 0x18c
	// Line 926, Address: 0x1cf238, Func Offset: 0x198
	// Line 927, Address: 0x1cf260, Func Offset: 0x1c0
	// Line 928, Address: 0x1cf288, Func Offset: 0x1e8
	// Line 930, Address: 0x1cf29c, Func Offset: 0x1fc
	// Line 932, Address: 0x1cf2c4, Func Offset: 0x224
	// Line 933, Address: 0x1cf2d0, Func Offset: 0x230
	// Line 934, Address: 0x1cf2dc, Func Offset: 0x23c
	// Line 935, Address: 0x1cf304, Func Offset: 0x264
	// Line 936, Address: 0x1cf324, Func Offset: 0x284
	// Line 937, Address: 0x1cf344, Func Offset: 0x2a4
	// Line 938, Address: 0x1cf384, Func Offset: 0x2e4
	// Line 939, Address: 0x1cf3c4, Func Offset: 0x324
	// Line 940, Address: 0x1cf3d4, Func Offset: 0x334
	// Line 942, Address: 0x1cf3e4, Func Offset: 0x344
	// Line 944, Address: 0x1cf400, Func Offset: 0x360
	// Line 946, Address: 0x1cf410, Func Offset: 0x370
	// Line 947, Address: 0x1cf438, Func Offset: 0x398
	// Line 949, Address: 0x1cf46c, Func Offset: 0x3cc
	// Line 950, Address: 0x1cf478, Func Offset: 0x3d8
	// Line 953, Address: 0x1cf484, Func Offset: 0x3e4
	// Line 956, Address: 0x1cf520, Func Offset: 0x480
	// Line 958, Address: 0x1cf5bc, Func Offset: 0x51c
	// Line 959, Address: 0x1cf648, Func Offset: 0x5a8
	// Line 960, Address: 0x1cf654, Func Offset: 0x5b4
	// Line 961, Address: 0x1cf664, Func Offset: 0x5c4
	// Func End, Address: 0x1cf67c, Func Offset: 0x5dc
}

// 
// Start address: 0x1cf680
void ChizuCurrentPositionCheck(float* px, float* py)
{
	int room;
	SubCharacter* jms;
	// Line 969, Address: 0x1cf680, Func Offset: 0
	// Line 1004, Address: 0x1cf698, Func Offset: 0x18
	// Line 1005, Address: 0x1cf6a4, Func Offset: 0x24
	// Line 1007, Address: 0x1cf6ac, Func Offset: 0x2c
	// Line 1030, Address: 0x1cf780, Func Offset: 0x100
	// Line 1031, Address: 0x1cf7bc, Func Offset: 0x13c
	// Line 1032, Address: 0x1cf7f8, Func Offset: 0x178
	// Line 1035, Address: 0x1cf800, Func Offset: 0x180
	// Line 1036, Address: 0x1cf83c, Func Offset: 0x1bc
	// Line 1037, Address: 0x1cf878, Func Offset: 0x1f8
	// Line 1040, Address: 0x1cf880, Func Offset: 0x200
	// Line 1042, Address: 0x1cf8e8, Func Offset: 0x268
	// Line 1043, Address: 0x1cf918, Func Offset: 0x298
	// Line 1044, Address: 0x1cf948, Func Offset: 0x2c8
	// Line 1046, Address: 0x1cf9b8, Func Offset: 0x338
	// Line 1047, Address: 0x1cf9e8, Func Offset: 0x368
	// Line 1048, Address: 0x1cfa18, Func Offset: 0x398
	// Line 1050, Address: 0x1cfa8c, Func Offset: 0x40c
	// Line 1051, Address: 0x1cfabc, Func Offset: 0x43c
	// Line 1052, Address: 0x1cfaec, Func Offset: 0x46c
	// Line 1053, Address: 0x1cfaf4, Func Offset: 0x474
	// Line 1054, Address: 0x1cfb24, Func Offset: 0x4a4
	// Line 1056, Address: 0x1cfb54, Func Offset: 0x4d4
	// Line 1059, Address: 0x1cfb5c, Func Offset: 0x4dc
	// Line 1060, Address: 0x1cfb74, Func Offset: 0x4f4
	// Line 1061, Address: 0x1cfbac, Func Offset: 0x52c
	// Line 1062, Address: 0x1cfbec, Func Offset: 0x56c
	// Line 1063, Address: 0x1cfbf4, Func Offset: 0x574
	// Line 1064, Address: 0x1cfc2c, Func Offset: 0x5ac
	// Line 1075, Address: 0x1cfc6c, Func Offset: 0x5ec
	// Func End, Address: 0x1cfc84, Func Offset: 0x604
}

