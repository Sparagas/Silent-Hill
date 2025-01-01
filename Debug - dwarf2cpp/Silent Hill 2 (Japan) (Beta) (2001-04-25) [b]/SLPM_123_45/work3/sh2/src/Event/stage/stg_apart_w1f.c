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
typedef struct Playing_Info;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct Pad_KeyConfig;
typedef struct shAttackInfo;

typedef void(*type_9)();
typedef void(*type_12)(SubCharacter*);
typedef int(*type_13)();
typedef void(*type_15)(SubCharacter*);
typedef void(*type_41)(SubCharacter*);
typedef void(*type_43)(SubCharacter*);

typedef float type_0[4];
typedef _anon0 type_1[28];
typedef unsigned int type_2[256];
typedef unsigned char type_3[10];
typedef unsigned int type_4[32];
typedef unsigned char type_5[4];
typedef char type_6[4];
typedef char type_7[4];
typedef fsFileIndex type_8[1];
typedef unsigned char type_10[2];
typedef unsigned char type_11[4];
typedef char type_14[0];
typedef float type_16[3];
typedef unsigned char type_17[13];
typedef _anon5 type_18[5];
typedef short type_19[2];
typedef short type_20[2][5];
typedef short type_21[4];
typedef fsFileIndex type_22[1];
typedef unsigned char type_23[2];
typedef float type_24[4][2];
typedef int(*type_25)()[6];
typedef unsigned char type_26[2][3];
typedef float type_27[4][2][5];
typedef unsigned char type_28[34];
typedef short type_29[2];
typedef short type_30[2][5];
typedef float type_31[4];
typedef fsFileIndex type_32[1];
typedef float type_33[4][2];
typedef unsigned char type_34[4];
typedef unsigned char type_35[4];
typedef float type_36[4];
typedef float type_37[4][4];
typedef PAD_INFO type_38[10];
typedef unsigned char type_39[268];
typedef unsigned char type_40[10];
typedef shAttackInfo type_42[46];
typedef unsigned char type_44[2];
typedef unsigned char type_45[4];
typedef unsigned char type_46[2];
typedef Model_List type_47[20];
typedef unsigned char type_48[3];
typedef fsFileIndex type_49[1];

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
unsigned char ev_pos[268];
_anon0 ev_list[28];
int(*ev_prog)()[6];
Model_List mdl_list[20];
_anon5 en_list[5];
_anon7 stage_apart_w1f;
shPlayerWork sh2jms;
int ev_s_step;
int ev_p_step;
Pad_KeyConfig key_config;
fsFileIndex data_pic_apt_clock_name_tex[1];
Playing_Info playing;
fsFileIndex data_pic_apt_clock_open_tex[1];
float coin_alpha[3];
_anon1 game_flag;
unsigned char coin_kind;
unsigned char coin_hole;
float dtf;
unsigned char coin_onoff;
fsFileIndex data_pic_etc_carsol_tex[1];
fsFileIndex data_pic_apt_clock_close_tex[1];
float ev_cursor_x;
float ev_cursor_y;
char pic_buf_1[0];
unsigned char coin_pad;

int EvProgLookThreeCoin();
int EvProgSetThreeCoin();
void EvProgSubDrawCoin();
int EvProgSubCoinCursor();
int EvProgAngelaWithKnife();
int EvProgGetCoinOfPrisoner();
int EvProgGetWhiteChrism();

// 
// Start address: 0x22ae70
int EvProgLookThreeCoin()
{
	int i;
	// Line 177, Address: 0x22ae70, Func Offset: 0
	// Line 180, Address: 0x22ae7c, Func Offset: 0xc
	// Line 190, Address: 0x22aef8, Func Offset: 0x88
	// Line 191, Address: 0x22af00, Func Offset: 0x90
	// Line 192, Address: 0x22af08, Func Offset: 0x98
	// Line 194, Address: 0x22af58, Func Offset: 0xe8
	// Line 195, Address: 0x22af60, Func Offset: 0xf0
	// Line 197, Address: 0x22af9c, Func Offset: 0x12c
	// Line 198, Address: 0x22afa4, Func Offset: 0x134
	// Line 202, Address: 0x22afac, Func Offset: 0x13c
	// Line 204, Address: 0x22b048, Func Offset: 0x1d8
	// Line 205, Address: 0x22b05c, Func Offset: 0x1ec
	// Line 206, Address: 0x22b094, Func Offset: 0x224
	// Line 210, Address: 0x22b0a8, Func Offset: 0x238
	// Line 212, Address: 0x22b0cc, Func Offset: 0x25c
	// Line 213, Address: 0x22b0dc, Func Offset: 0x26c
	// Line 217, Address: 0x22b0f0, Func Offset: 0x280
	// Line 218, Address: 0x22b100, Func Offset: 0x290
	// Line 219, Address: 0x22b114, Func Offset: 0x2a4
	// Line 222, Address: 0x22b11c, Func Offset: 0x2ac
	// Line 223, Address: 0x22b154, Func Offset: 0x2e4
	// Line 224, Address: 0x22b168, Func Offset: 0x2f8
	// Line 227, Address: 0x22b170, Func Offset: 0x300
	// Line 228, Address: 0x22b184, Func Offset: 0x314
	// Line 229, Address: 0x22b198, Func Offset: 0x328
	// Line 232, Address: 0x22b1a0, Func Offset: 0x330
	// Line 233, Address: 0x22b1b4, Func Offset: 0x344
	// Line 234, Address: 0x22b1c8, Func Offset: 0x358
	// Line 235, Address: 0x22b1e8, Func Offset: 0x378
	// Line 236, Address: 0x22b1fc, Func Offset: 0x38c
	// Line 237, Address: 0x22b204, Func Offset: 0x394
	// Line 239, Address: 0x22b218, Func Offset: 0x3a8
	// Line 240, Address: 0x22b22c, Func Offset: 0x3bc
	// Line 243, Address: 0x22b234, Func Offset: 0x3c4
	// Line 245, Address: 0x22b258, Func Offset: 0x3e8
	// Line 246, Address: 0x22b268, Func Offset: 0x3f8
	// Line 247, Address: 0x22b27c, Func Offset: 0x40c
	// Line 250, Address: 0x22b284, Func Offset: 0x414
	// Line 251, Address: 0x22b294, Func Offset: 0x424
	// Line 252, Address: 0x22b2a8, Func Offset: 0x438
	// Line 255, Address: 0x22b2b0, Func Offset: 0x440
	// Line 256, Address: 0x22b2e8, Func Offset: 0x478
	// Line 257, Address: 0x22b2fc, Func Offset: 0x48c
	// Line 260, Address: 0x22b304, Func Offset: 0x494
	// Line 261, Address: 0x22b318, Func Offset: 0x4a8
	// Line 262, Address: 0x22b32c, Func Offset: 0x4bc
	// Line 263, Address: 0x22b33c, Func Offset: 0x4cc
	// Line 266, Address: 0x22b344, Func Offset: 0x4d4
	// Line 267, Address: 0x22b368, Func Offset: 0x4f8
	// Line 270, Address: 0x22b370, Func Offset: 0x500
	// Line 271, Address: 0x22b384, Func Offset: 0x514
	// Line 273, Address: 0x22b390, Func Offset: 0x520
	// Line 274, Address: 0x22b394, Func Offset: 0x524
	// Func End, Address: 0x22b3a8, Func Offset: 0x538
}

// 
// Start address: 0x22b3b0
int EvProgSetThreeCoin()
{
	int j;
	int i;
	float chara_vec[4][2][5];
	short chara_kind[4];
	// Line 280, Address: 0x22b3b0, Func Offset: 0
	// Line 294, Address: 0x22b3c0, Func Offset: 0x10
	// Line 301, Address: 0x22b418, Func Offset: 0x68
	// Line 302, Address: 0x22b420, Func Offset: 0x70
	// Line 303, Address: 0x22b42c, Func Offset: 0x7c
	// Line 304, Address: 0x22b438, Func Offset: 0x88
	// Line 305, Address: 0x22b45c, Func Offset: 0xac
	// Line 309, Address: 0x22b464, Func Offset: 0xb4
	// Line 311, Address: 0x22b4dc, Func Offset: 0x12c
	// Line 312, Address: 0x22b4f0, Func Offset: 0x140
	// Line 313, Address: 0x22b52c, Func Offset: 0x17c
	// Line 315, Address: 0x22b574, Func Offset: 0x1c4
	// Line 316, Address: 0x22b588, Func Offset: 0x1d8
	// Line 317, Address: 0x22b590, Func Offset: 0x1e0
	// Line 318, Address: 0x22b5a4, Func Offset: 0x1f4
	// Line 322, Address: 0x22b5b8, Func Offset: 0x208
	// Line 325, Address: 0x22b5e0, Func Offset: 0x230
	// Line 326, Address: 0x22b5f0, Func Offset: 0x240
	// Line 330, Address: 0x22b604, Func Offset: 0x254
	// Line 331, Address: 0x22b614, Func Offset: 0x264
	// Line 332, Address: 0x22b628, Func Offset: 0x278
	// Line 335, Address: 0x22b630, Func Offset: 0x280
	// Line 336, Address: 0x22b640, Func Offset: 0x290
	// Line 337, Address: 0x22b654, Func Offset: 0x2a4
	// Line 338, Address: 0x22b65c, Func Offset: 0x2ac
	// Line 340, Address: 0x22b670, Func Offset: 0x2c0
	// Line 341, Address: 0x22b684, Func Offset: 0x2d4
	// Line 344, Address: 0x22b68c, Func Offset: 0x2dc
	// Line 345, Address: 0x22b69c, Func Offset: 0x2ec
	// Line 346, Address: 0x22b6b0, Func Offset: 0x300
	// Line 347, Address: 0x22b6d4, Func Offset: 0x324
	// Line 348, Address: 0x22b6e4, Func Offset: 0x334
	// Line 350, Address: 0x22b6f8, Func Offset: 0x348
	// Line 353, Address: 0x22b700, Func Offset: 0x350
	// Line 354, Address: 0x22b710, Func Offset: 0x360
	// Line 355, Address: 0x22b740, Func Offset: 0x390
	// Line 356, Address: 0x22b77c, Func Offset: 0x3cc
	// Line 357, Address: 0x22b7a4, Func Offset: 0x3f4
	// Line 358, Address: 0x22b7bc, Func Offset: 0x40c
	// Line 360, Address: 0x22b7d0, Func Offset: 0x420
	// Line 361, Address: 0x22b7d8, Func Offset: 0x428
	// Line 362, Address: 0x22b808, Func Offset: 0x458
	// Line 363, Address: 0x22b840, Func Offset: 0x490
	// Line 365, Address: 0x22b864, Func Offset: 0x4b4
	// Line 366, Address: 0x22b8e4, Func Offset: 0x534
	// Line 367, Address: 0x22b8fc, Func Offset: 0x54c
	// Line 370, Address: 0x22b910, Func Offset: 0x560
	// Line 373, Address: 0x22b918, Func Offset: 0x568
	// Line 375, Address: 0x22b950, Func Offset: 0x5a0
	// Line 376, Address: 0x22b960, Func Offset: 0x5b0
	// Line 377, Address: 0x22b974, Func Offset: 0x5c4
	// Line 380, Address: 0x22b97c, Func Offset: 0x5cc
	// Line 381, Address: 0x22b98c, Func Offset: 0x5dc
	// Line 382, Address: 0x22b998, Func Offset: 0x5e8
	// Line 383, Address: 0x22b9e0, Func Offset: 0x630
	// Line 385, Address: 0x22ba04, Func Offset: 0x654
	// Line 386, Address: 0x22ba18, Func Offset: 0x668
	// Line 398, Address: 0x22bb34, Func Offset: 0x784
	// Line 399, Address: 0x22bb4c, Func Offset: 0x79c
	// Line 400, Address: 0x22bb60, Func Offset: 0x7b0
	// Line 402, Address: 0x22bb80, Func Offset: 0x7d0
	// Line 403, Address: 0x22bb8c, Func Offset: 0x7dc
	// Line 404, Address: 0x22bbc4, Func Offset: 0x814
	// Line 405, Address: 0x22bbd0, Func Offset: 0x820
	// Line 406, Address: 0x22bbdc, Func Offset: 0x82c
	// Line 407, Address: 0x22bc28, Func Offset: 0x878
	// Line 410, Address: 0x22bc78, Func Offset: 0x8c8
	// Line 411, Address: 0x22bc8c, Func Offset: 0x8dc
	// Line 412, Address: 0x22bc9c, Func Offset: 0x8ec
	// Line 415, Address: 0x22bca4, Func Offset: 0x8f4
	// Line 416, Address: 0x22bcbc, Func Offset: 0x90c
	// Line 417, Address: 0x22bcd4, Func Offset: 0x924
	// Line 418, Address: 0x22bcec, Func Offset: 0x93c
	// Line 419, Address: 0x22bd04, Func Offset: 0x954
	// Line 421, Address: 0x22bd10, Func Offset: 0x960
	// Line 422, Address: 0x22bd14, Func Offset: 0x964
	// Func End, Address: 0x22bd2c, Func Offset: 0x97c
}

// 
// Start address: 0x22bd30
void EvProgSubDrawCoin()
{
	int j;
	int i;
	PicDraw_Data pic;
	unsigned char coin_vh;
	unsigned char coin_uv[2][3];
	unsigned char coin_uw;
	short coin_xy[2][5];
	// Line 427, Address: 0x22bd30, Func Offset: 0
	// Line 437, Address: 0x22bd3c, Func Offset: 0xc
	// Line 440, Address: 0x22bd58, Func Offset: 0x28
	// Line 442, Address: 0x22bd68, Func Offset: 0x38
	// Line 443, Address: 0x22bd90, Func Offset: 0x60
	// Line 444, Address: 0x22bd9c, Func Offset: 0x6c
	// Line 445, Address: 0x22bddc, Func Offset: 0xac
	// Line 446, Address: 0x22be1c, Func Offset: 0xec
	// Line 447, Address: 0x22be54, Func Offset: 0x124
	// Line 451, Address: 0x22be58, Func Offset: 0x128
	// Line 455, Address: 0x22beec, Func Offset: 0x1bc
	// Line 456, Address: 0x22bfa0, Func Offset: 0x270
	// Line 458, Address: 0x22bfa8, Func Offset: 0x278
	// Line 459, Address: 0x22c008, Func Offset: 0x2d8
	// Line 460, Address: 0x22c014, Func Offset: 0x2e4
	// Line 461, Address: 0x22c02c, Func Offset: 0x2fc
	// Func End, Address: 0x22c040, Func Offset: 0x310
}

// 
// Start address: 0x22c040
int EvProgSubCoinCursor()
{
	int j;
	int i;
	float py;
	float px;
	short hole_pos[2][5];
	// Line 468, Address: 0x22c040, Func Offset: 0
	// Line 473, Address: 0x22c048, Func Offset: 0x8
	// Line 475, Address: 0x22c070, Func Offset: 0x30
	// Line 476, Address: 0x22c07c, Func Offset: 0x3c
	// Line 477, Address: 0x22c0c0, Func Offset: 0x80
	// Line 478, Address: 0x22c0f4, Func Offset: 0xb4
	// Line 479, Address: 0x22c11c, Func Offset: 0xdc
	// Line 480, Address: 0x22c130, Func Offset: 0xf0
	// Line 481, Address: 0x22c148, Func Offset: 0x108
	// Line 482, Address: 0x22c158, Func Offset: 0x118
	// Line 484, Address: 0x22c1f4, Func Offset: 0x1b4
	// Line 485, Address: 0x22c200, Func Offset: 0x1c0
	// Line 486, Address: 0x22c220, Func Offset: 0x1e0
	// Line 487, Address: 0x22c244, Func Offset: 0x204
	// Line 488, Address: 0x22c268, Func Offset: 0x228
	// Line 489, Address: 0x22c270, Func Offset: 0x230
	// Line 490, Address: 0x22c27c, Func Offset: 0x23c
	// Line 491, Address: 0x22c2e0, Func Offset: 0x2a0
	// Line 492, Address: 0x22c2f8, Func Offset: 0x2b8
	// Line 496, Address: 0x22c304, Func Offset: 0x2c4
	// Line 497, Address: 0x22c310, Func Offset: 0x2d0
	// Func End, Address: 0x22c320, Func Offset: 0x2e0
}

// 
// Start address: 0x22c320
int EvProgAngelaWithKnife()
{
	// Line 538, Address: 0x22c320, Func Offset: 0
	// Line 539, Address: 0x22c324, Func Offset: 0x4
	// Func End, Address: 0x22c32c, Func Offset: 0xc
}

// 
// Start address: 0x22c330
int EvProgGetCoinOfPrisoner()
{
	// Line 545, Address: 0x22c330, Func Offset: 0
	// Line 546, Address: 0x22c338, Func Offset: 0x8
	// Line 548, Address: 0x22c348, Func Offset: 0x18
	// Func End, Address: 0x22c358, Func Offset: 0x28
}

// 
// Start address: 0x22c360
int EvProgGetWhiteChrism()
{
	// Line 554, Address: 0x22c360, Func Offset: 0
	// Line 555, Address: 0x22c368, Func Offset: 0x8
	// Line 556, Address: 0x22c378, Func Offset: 0x18
	// Func End, Address: 0x22c388, Func Offset: 0x28
}

