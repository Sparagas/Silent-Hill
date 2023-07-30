typedef struct _CL_HITPOLY_HEAD;
typedef struct _CL_VHIT_CHARA;
typedef struct PAD_2D;
typedef struct SubCharacter;
typedef struct fsMgpFile;
typedef struct SubObject;
typedef struct PAD_INFO;
typedef struct _CL_VHIT_RESULT;
typedef union fsFile;
typedef struct fsMgcFile;
typedef union _anon0;
typedef struct _anon1;
typedef union fsFileIndex;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _SH2_SYS;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct shPlayerWork;
typedef struct _anon4;
typedef struct sh2gfw_AREA_HEAD;
typedef struct Pad_KeyConfig;
typedef struct shSkelton;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct fsCdFile;
typedef struct PicDraw_Data;
typedef struct fsMgfFile;
typedef struct shAttackInfo;
typedef struct PAD_3D;
typedef struct _CL_VHIT_WALL;
typedef union _anon5;
typedef struct fsHdFile;

typedef void(*type_4)(SubCharacter*);
typedef void(*type_7)(SubCharacter*);
typedef void(*type_20)(SubCharacter*);
typedef void(*type_23)(SubCharacter*);

typedef unsigned char type_0[4];
typedef PAD_INFO type_1[10];
typedef unsigned char type_2[3];
typedef unsigned char type_3[2];
typedef unsigned char type_5[10];
typedef unsigned char type_6[2];
typedef short type_8[72];
typedef unsigned int type_9[8];
typedef unsigned char type_10[13];
typedef float type_11[4][2];
typedef float type_12[4];
typedef float type_13[4][4];
typedef float type_14[4];
typedef unsigned char type_15[2];
typedef unsigned char type_16[34];
typedef unsigned short type_17[0];
typedef char type_18[0];
typedef char type_19[0];
typedef char type_21[0];
typedef shAttackInfo type_22[46];
typedef unsigned char type_24[4];
typedef unsigned char type_25[10];
typedef float type_26[4];
typedef unsigned char type_27[4];

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
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

struct SubCharacter
{
	int index;
	unsigned int status;
	unsigned int sub_status;
	unsigned int sub_st;
	short kind;
	short id;
	unsigned int step;
	_anon2 pos;
	_anon2 rot;
	_anon2 pos_spd;
	_anon2 rot_spd;
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
	_anon2 b_pos;
	_anon2 b_rot;
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

struct SubObject
{
	unsigned int status;
	unsigned int sub_status;
	unsigned int sub_st;
	short kind;
	short id;
	unsigned int step;
	_anon2 pos;
	_anon2 rot;
	_anon2 pos_spd;
	_anon2 rot_spd;
	_anon4 mat;
	void(*function)(SubCharacter*);
	void(*effecter_function)(SubCharacter*);
	SubObject* pre;
	SubObject* next;
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
	_anon0 hobj;
};

union fsFile
{
	_anon1 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
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

union _anon0
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct _anon1
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

union fsFileIndex
{
	_anon3 index;
	unsigned long pack;
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

struct _anon2
{
	float x;
	float y;
	float z;
	float w;
};

struct _anon3
{
	fsFile* fp;
	char* name;
};

struct _SH2_SYS
{
	unsigned int step[8];
	int main_status;
	unsigned int boot_first;
	unsigned int soft_reset;
	unsigned int frame_cnt;
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
	_anon2 dist_rot;
	_anon2 dist_pos;
	_anon2 pos;
	_anon2 rot;
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
	_anon2 tgt_body_angle;
	_anon2 tgt_neck_angle;
	_anon2 tgt_arms_angle;
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

struct _anon4
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

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon4 src_m;
	_anon2 src_t;
	_anon4 des_m;
	_anon2 des_t;
	_anon2 axis;
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

union _anon5
{
	shBattleFight fight;
	shBattleShot shot;
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

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
int ev_filter_on;
short item_to_chara[72];
int ev_cancel;
int ev_s_step;
unsigned short msg_buffer[0];
shPlayerWork sh2jms;
char pic_buf_2[0];
char pic_buf_1[0];
char pic_buf_0[0];
Pad_KeyConfig key_config;
float ev_filter;
_SH2_SYS Sh2sys;
float dtf;
float ev_cursor_y;
float ev_cursor_x;

int EvSubMessage(int msg);
int EvSubQuestion(int msg);
int EvSubItemUse(int kind, int message);
int EvSubItemGet(int kind, int message);
int EvSubItemGetAndAnim(int kind, int message);
int EvSubFileLoadAndFadeOut(fsFileIndex* file_0, fsFileIndex* file_1, fsFileIndex* file_2);
int EvSubPictureDisplayAndFadeIn(float fade);
int EvSubPictureDisplayOnly();
int EvSubPictureDisplayAndFadeOut(float fade);
int EvSubPictureDisplay(fsFileIndex* file, int msg);
int EvSubMapGet(fsFileIndex* file, int msg);
void EvSubPictureLayer(int x0, int y0, int x1, int y1, int alpha);
void EvSubPictureFilter();
void EvSubPictureInit();
void EvSubPictureStart();
void EvSubPictureEnd();
void EvSubPictureCursor(int color);

// 
// Start address: 0x1b09f0
int EvSubMessage(int msg)
{
	// Line 96, Address: 0x1b09f0, Func Offset: 0
	// Line 97, Address: 0x1b09fc, Func Offset: 0xc
	// Line 98, Address: 0x1b0a0c, Func Offset: 0x1c
	// Line 99, Address: 0x1b0a24, Func Offset: 0x34
	// Line 102, Address: 0x1b0a30, Func Offset: 0x40
	// Line 103, Address: 0x1b0a54, Func Offset: 0x64
	// Line 104, Address: 0x1b0a5c, Func Offset: 0x6c
	// Line 106, Address: 0x1b0a68, Func Offset: 0x78
	// Line 107, Address: 0x1b0a6c, Func Offset: 0x7c
	// Func End, Address: 0x1b0a7c, Func Offset: 0x8c
}

// 
// Start address: 0x1b0a80
int EvSubQuestion(int msg)
{
	// Line 116, Address: 0x1b0a80, Func Offset: 0
	// Line 117, Address: 0x1b0a8c, Func Offset: 0xc
	// Line 118, Address: 0x1b0a9c, Func Offset: 0x1c
	// Line 119, Address: 0x1b0ab4, Func Offset: 0x34
	// Line 122, Address: 0x1b0ac0, Func Offset: 0x40
	// Line 123, Address: 0x1b0ad4, Func Offset: 0x54
	// Line 124, Address: 0x1b0adc, Func Offset: 0x5c
	// Line 126, Address: 0x1b0ae8, Func Offset: 0x68
	// Line 127, Address: 0x1b0aec, Func Offset: 0x6c
	// Func End, Address: 0x1b0afc, Func Offset: 0x7c
}

// 
// Start address: 0x1b0b00
int EvSubItemUse(int kind, int message)
{
	// Line 137, Address: 0x1b0b00, Func Offset: 0
	// Line 138, Address: 0x1b0b10, Func Offset: 0x10
	// Line 139, Address: 0x1b0b20, Func Offset: 0x20
	// Line 140, Address: 0x1b0b2c, Func Offset: 0x2c
	// Line 141, Address: 0x1b0b44, Func Offset: 0x44
	// Line 145, Address: 0x1b0b50, Func Offset: 0x50
	// Line 146, Address: 0x1b0b74, Func Offset: 0x74
	// Line 147, Address: 0x1b0b7c, Func Offset: 0x7c
	// Line 149, Address: 0x1b0b88, Func Offset: 0x88
	// Line 150, Address: 0x1b0b8c, Func Offset: 0x8c
	// Func End, Address: 0x1b0b9c, Func Offset: 0x9c
}

// 
// Start address: 0x1b0ba0
int EvSubItemGet(int kind, int message)
{
	SubCharacter* scp;
	// Line 160, Address: 0x1b0ba0, Func Offset: 0
	// Line 163, Address: 0x1b0bb4, Func Offset: 0x14
	// Line 164, Address: 0x1b0bc4, Func Offset: 0x24
	// Line 165, Address: 0x1b0bd0, Func Offset: 0x30
	// Line 166, Address: 0x1b0be8, Func Offset: 0x48
	// Line 170, Address: 0x1b0bf4, Func Offset: 0x54
	// Line 171, Address: 0x1b0c18, Func Offset: 0x78
	// Line 172, Address: 0x1b0c44, Func Offset: 0xa4
	// Line 173, Address: 0x1b0c60, Func Offset: 0xc0
	// Line 174, Address: 0x1b0c68, Func Offset: 0xc8
	// Line 176, Address: 0x1b0c74, Func Offset: 0xd4
	// Line 177, Address: 0x1b0c78, Func Offset: 0xd8
	// Func End, Address: 0x1b0c8c, Func Offset: 0xec
}

// 
// Start address: 0x1b0c90
int EvSubItemGetAndAnim(int kind, int message)
{
	SubCharacter* scp;
	// Line 187, Address: 0x1b0c90, Func Offset: 0
	// Line 190, Address: 0x1b0ca4, Func Offset: 0x14
	// Line 192, Address: 0x1b0cf8, Func Offset: 0x68
	// Line 193, Address: 0x1b0d0c, Func Offset: 0x7c
	// Line 194, Address: 0x1b0d38, Func Offset: 0xa8
	// Line 195, Address: 0x1b0d70, Func Offset: 0xe0
	// Line 196, Address: 0x1b0d7c, Func Offset: 0xec
	// Line 197, Address: 0x1b0d88, Func Offset: 0xf8
	// Line 198, Address: 0x1b0d90, Func Offset: 0x100
	// Line 199, Address: 0x1b0d9c, Func Offset: 0x10c
	// Line 201, Address: 0x1b0da8, Func Offset: 0x118
	// Line 204, Address: 0x1b0db0, Func Offset: 0x120
	// Line 205, Address: 0x1b0dc0, Func Offset: 0x130
	// Line 206, Address: 0x1b0dcc, Func Offset: 0x13c
	// Line 207, Address: 0x1b0de4, Func Offset: 0x154
	// Line 208, Address: 0x1b0df4, Func Offset: 0x164
	// Line 210, Address: 0x1b0e00, Func Offset: 0x170
	// Line 213, Address: 0x1b0e08, Func Offset: 0x178
	// Line 214, Address: 0x1b0e14, Func Offset: 0x184
	// Line 215, Address: 0x1b0e2c, Func Offset: 0x19c
	// Line 216, Address: 0x1b0e38, Func Offset: 0x1a8
	// Line 219, Address: 0x1b0e40, Func Offset: 0x1b0
	// Line 220, Address: 0x1b0e64, Func Offset: 0x1d4
	// Line 221, Address: 0x1b0e6c, Func Offset: 0x1dc
	// Line 222, Address: 0x1b0e98, Func Offset: 0x208
	// Line 223, Address: 0x1b0ed0, Func Offset: 0x240
	// Line 224, Address: 0x1b0ee0, Func Offset: 0x250
	// Line 225, Address: 0x1b0eec, Func Offset: 0x25c
	// Line 226, Address: 0x1b0ef4, Func Offset: 0x264
	// Line 228, Address: 0x1b0f00, Func Offset: 0x270
	// Line 229, Address: 0x1b0f1c, Func Offset: 0x28c
	// Line 232, Address: 0x1b0f24, Func Offset: 0x294
	// Line 233, Address: 0x1b0f4c, Func Offset: 0x2bc
	// Line 234, Address: 0x1b0f58, Func Offset: 0x2c8
	// Line 237, Address: 0x1b0f60, Func Offset: 0x2d0
	// Line 238, Address: 0x1b0f74, Func Offset: 0x2e4
	// Line 240, Address: 0x1b0f80, Func Offset: 0x2f0
	// Line 241, Address: 0x1b0f84, Func Offset: 0x2f4
	// Func End, Address: 0x1b0f98, Func Offset: 0x308
}

// 
// Start address: 0x1b0fa0
int EvSubFileLoadAndFadeOut(fsFileIndex* file_0, fsFileIndex* file_1, fsFileIndex* file_2)
{
	// Line 254, Address: 0x1b0fa0, Func Offset: 0
	// Line 255, Address: 0x1b0fb4, Func Offset: 0x14
	// Line 256, Address: 0x1b0fc4, Func Offset: 0x24
	// Line 257, Address: 0x1b0fe4, Func Offset: 0x44
	// Line 258, Address: 0x1b1004, Func Offset: 0x64
	// Line 259, Address: 0x1b1024, Func Offset: 0x84
	// Line 260, Address: 0x1b1034, Func Offset: 0x94
	// Line 264, Address: 0x1b1040, Func Offset: 0xa0
	// Line 265, Address: 0x1b1074, Func Offset: 0xd4
	// Line 266, Address: 0x1b1078, Func Offset: 0xd8
	// Func End, Address: 0x1b1088, Func Offset: 0xe8
}

// 
// Start address: 0x1b1090
int EvSubPictureDisplayAndFadeIn(float fade)
{
	// Line 275, Address: 0x1b1090, Func Offset: 0
	// Line 276, Address: 0x1b109c, Func Offset: 0xc
	// Line 277, Address: 0x1b10ac, Func Offset: 0x1c
	// Line 278, Address: 0x1b10bc, Func Offset: 0x2c
	// Line 280, Address: 0x1b10c8, Func Offset: 0x38
	// Line 281, Address: 0x1b10d0, Func Offset: 0x40
	// Line 282, Address: 0x1b10d8, Func Offset: 0x48
	// Line 284, Address: 0x1b10e0, Func Offset: 0x50
	// Line 285, Address: 0x1b10e8, Func Offset: 0x58
	// Func End, Address: 0x1b10f8, Func Offset: 0x68
}

// 
// Start address: 0x1b1100
int EvSubPictureDisplayOnly()
{
	PicDraw_Data pic;
	// Line 294, Address: 0x1b1100, Func Offset: 0
	// Line 297, Address: 0x1b1108, Func Offset: 0x8
	// Line 299, Address: 0x1b1124, Func Offset: 0x24
	// Line 301, Address: 0x1b1134, Func Offset: 0x34
	// Line 302, Address: 0x1b115c, Func Offset: 0x5c
	// Line 303, Address: 0x1b1164, Func Offset: 0x64
	// Line 305, Address: 0x1b1170, Func Offset: 0x70
	// Line 306, Address: 0x1b1174, Func Offset: 0x74
	// Func End, Address: 0x1b1184, Func Offset: 0x84
}

// 
// Start address: 0x1b1190
int EvSubPictureDisplayAndFadeOut(float fade)
{
	// Line 315, Address: 0x1b1190, Func Offset: 0
	// Line 316, Address: 0x1b119c, Func Offset: 0xc
	// Line 317, Address: 0x1b11ac, Func Offset: 0x1c
	// Line 318, Address: 0x1b11bc, Func Offset: 0x2c
	// Line 320, Address: 0x1b11c8, Func Offset: 0x38
	// Line 321, Address: 0x1b11d0, Func Offset: 0x40
	// Line 322, Address: 0x1b11d8, Func Offset: 0x48
	// Line 324, Address: 0x1b11e0, Func Offset: 0x50
	// Line 325, Address: 0x1b11e8, Func Offset: 0x58
	// Func End, Address: 0x1b11f8, Func Offset: 0x68
}

// 
// Start address: 0x1b1200
int EvSubPictureDisplay(fsFileIndex* file, int msg)
{
	// Line 335, Address: 0x1b1200, Func Offset: 0
	// Line 336, Address: 0x1b1210, Func Offset: 0x10
	// Line 338, Address: 0x1b1270, Func Offset: 0x70
	// Line 339, Address: 0x1b1284, Func Offset: 0x84
	// Line 340, Address: 0x1b1294, Func Offset: 0x94
	// Line 341, Address: 0x1b129c, Func Offset: 0x9c
	// Line 342, Address: 0x1b12b0, Func Offset: 0xb0
	// Line 343, Address: 0x1b12bc, Func Offset: 0xbc
	// Line 346, Address: 0x1b12c4, Func Offset: 0xc4
	// Line 347, Address: 0x1b12ec, Func Offset: 0xec
	// Line 348, Address: 0x1b12fc, Func Offset: 0xfc
	// Line 350, Address: 0x1b1308, Func Offset: 0x108
	// Line 353, Address: 0x1b1310, Func Offset: 0x110
	// Line 354, Address: 0x1b1318, Func Offset: 0x118
	// Line 355, Address: 0x1b1320, Func Offset: 0x120
	// Line 356, Address: 0x1b1328, Func Offset: 0x128
	// Line 357, Address: 0x1b1344, Func Offset: 0x144
	// Line 360, Address: 0x1b134c, Func Offset: 0x14c
	// Line 361, Address: 0x1b1354, Func Offset: 0x154
	// Line 362, Address: 0x1b135c, Func Offset: 0x15c
	// Line 363, Address: 0x1b1364, Func Offset: 0x164
	// Line 365, Address: 0x1b139c, Func Offset: 0x19c
	// Line 366, Address: 0x1b13a8, Func Offset: 0x1a8
	// Line 367, Address: 0x1b13c0, Func Offset: 0x1c0
	// Line 368, Address: 0x1b13cc, Func Offset: 0x1cc
	// Line 369, Address: 0x1b13d4, Func Offset: 0x1d4
	// Line 370, Address: 0x1b13e4, Func Offset: 0x1e4
	// Line 373, Address: 0x1b13f0, Func Offset: 0x1f0
	// Line 376, Address: 0x1b13f8, Func Offset: 0x1f8
	// Line 377, Address: 0x1b1400, Func Offset: 0x200
	// Line 378, Address: 0x1b1408, Func Offset: 0x208
	// Line 379, Address: 0x1b1410, Func Offset: 0x210
	// Line 380, Address: 0x1b1418, Func Offset: 0x218
	// Line 381, Address: 0x1b142c, Func Offset: 0x22c
	// Line 382, Address: 0x1b1434, Func Offset: 0x234
	// Line 383, Address: 0x1b1444, Func Offset: 0x244
	// Line 385, Address: 0x1b1450, Func Offset: 0x250
	// Line 388, Address: 0x1b1458, Func Offset: 0x258
	// Line 389, Address: 0x1b1460, Func Offset: 0x260
	// Line 390, Address: 0x1b1468, Func Offset: 0x268
	// Line 391, Address: 0x1b1470, Func Offset: 0x270
	// Line 392, Address: 0x1b148c, Func Offset: 0x28c
	// Line 395, Address: 0x1b1494, Func Offset: 0x294
	// Line 396, Address: 0x1b14a8, Func Offset: 0x2a8
	// Line 397, Address: 0x1b14b8, Func Offset: 0x2b8
	// Line 399, Address: 0x1b14c4, Func Offset: 0x2c4
	// Line 400, Address: 0x1b14c8, Func Offset: 0x2c8
	// Func End, Address: 0x1b14d8, Func Offset: 0x2d8
}

// 
// Start address: 0x1b14e0
int EvSubMapGet(fsFileIndex* file, int msg)
{
	// Line 410, Address: 0x1b14e0, Func Offset: 0
	// Line 411, Address: 0x1b14f0, Func Offset: 0x10
	// Line 412, Address: 0x1b1500, Func Offset: 0x20
	// Func End, Address: 0x1b1510, Func Offset: 0x30
}

// 
// Start address: 0x1b1510
void EvSubPictureLayer(int x0, int y0, int x1, int y1, int alpha)
{
	PicDraw_Data pic;
	// Line 422, Address: 0x1b1510, Func Offset: 0
	// Line 425, Address: 0x1b152c, Func Offset: 0x1c
	// Line 427, Address: 0x1b1548, Func Offset: 0x38
	// Line 429, Address: 0x1b1558, Func Offset: 0x48
	// Line 430, Address: 0x1b1580, Func Offset: 0x70
	// Line 431, Address: 0x1b1588, Func Offset: 0x78
	// Line 432, Address: 0x1b15b4, Func Offset: 0xa4
	// Line 433, Address: 0x1b15ec, Func Offset: 0xdc
	// Line 434, Address: 0x1b15f8, Func Offset: 0xe8
	// Func End, Address: 0x1b1608, Func Offset: 0xf8
}

// 
// Start address: 0x1b1610
void EvSubPictureFilter()
{
	// Line 442, Address: 0x1b1610, Func Offset: 0
	// Line 443, Address: 0x1b161c, Func Offset: 0xc
	// Func End, Address: 0x1b1624, Func Offset: 0x14
}

// 
// Start address: 0x1b1630
void EvSubPictureInit()
{
	// Line 451, Address: 0x1b1630, Func Offset: 0
	// Line 452, Address: 0x1b1638, Func Offset: 0x8
	// Line 453, Address: 0x1b1644, Func Offset: 0x14
	// Func End, Address: 0x1b164c, Func Offset: 0x1c
}

// 
// Start address: 0x1b1650
void EvSubPictureStart()
{
	// Line 461, Address: 0x1b1650, Func Offset: 0
	// Line 462, Address: 0x1b1664, Func Offset: 0x14
	// Func End, Address: 0x1b166c, Func Offset: 0x1c
}

// 
// Start address: 0x1b1670
void EvSubPictureEnd()
{
	PicDraw_Data pic;
	// Line 469, Address: 0x1b1670, Func Offset: 0
	// Line 472, Address: 0x1b1678, Func Offset: 0x8
	// Line 473, Address: 0x1b1688, Func Offset: 0x18
	// Line 474, Address: 0x1b16b0, Func Offset: 0x40
	// Line 475, Address: 0x1b16e4, Func Offset: 0x74
	// Line 476, Address: 0x1b16ec, Func Offset: 0x7c
	// Line 477, Address: 0x1b1714, Func Offset: 0xa4
	// Line 479, Address: 0x1b1740, Func Offset: 0xd0
	// Line 481, Address: 0x1b1748, Func Offset: 0xd8
	// Line 482, Address: 0x1b1768, Func Offset: 0xf8
	// Line 483, Address: 0x1b1778, Func Offset: 0x108
	// Line 485, Address: 0x1b1790, Func Offset: 0x120
	// Line 486, Address: 0x1b17ec, Func Offset: 0x17c
	// Line 487, Address: 0x1b17f4, Func Offset: 0x184
	// Line 490, Address: 0x1b1800, Func Offset: 0x190
	// Line 491, Address: 0x1b1814, Func Offset: 0x1a4
	// Func End, Address: 0x1b1824, Func Offset: 0x1b4
}

// 
// Start address: 0x1b1830
void EvSubPictureCursor(int color)
{
	unsigned char lsy;
	unsigned char lsx;
	float any;
	float anx;
	int py;
	int px;
	PicDraw_Data pic;
	// Line 498, Address: 0x1b1830, Func Offset: 0
	// Line 504, Address: 0x1b1844, Func Offset: 0x14
	// Line 505, Address: 0x1b185c, Func Offset: 0x2c
	// Line 506, Address: 0x1b186c, Func Offset: 0x3c
	// Line 507, Address: 0x1b18a4, Func Offset: 0x74
	// Line 508, Address: 0x1b18b4, Func Offset: 0x84
	// Line 509, Address: 0x1b18ec, Func Offset: 0xbc
	// Line 510, Address: 0x1b18f0, Func Offset: 0xc0
	// Line 511, Address: 0x1b1908, Func Offset: 0xd8
	// Line 512, Address: 0x1b1918, Func Offset: 0xe8
	// Line 513, Address: 0x1b1950, Func Offset: 0x120
	// Line 514, Address: 0x1b1960, Func Offset: 0x130
	// Line 515, Address: 0x1b1998, Func Offset: 0x168
	// Line 516, Address: 0x1b199c, Func Offset: 0x16c
	// Line 517, Address: 0x1b19cc, Func Offset: 0x19c
	// Line 518, Address: 0x1b19fc, Func Offset: 0x1cc
	// Line 519, Address: 0x1b1a28, Func Offset: 0x1f8
	// Line 520, Address: 0x1b1a30, Func Offset: 0x200
	// Line 521, Address: 0x1b1a74, Func Offset: 0x244
	// Line 522, Address: 0x1b1ab8, Func Offset: 0x288
	// Line 523, Address: 0x1b1af8, Func Offset: 0x2c8
	// Line 526, Address: 0x1b1b38, Func Offset: 0x308
	// Line 527, Address: 0x1b1b68, Func Offset: 0x338
	// Line 529, Address: 0x1b1b98, Func Offset: 0x368
	// Line 531, Address: 0x1b1bb4, Func Offset: 0x384
	// Line 533, Address: 0x1b1bc4, Func Offset: 0x394
	// Line 534, Address: 0x1b1bec, Func Offset: 0x3bc
	// Line 535, Address: 0x1b1bf4, Func Offset: 0x3c4
	// Line 536, Address: 0x1b1c20, Func Offset: 0x3f0
	// Line 537, Address: 0x1b1c4c, Func Offset: 0x41c
	// Line 539, Address: 0x1b1c70, Func Offset: 0x440
	// Line 540, Address: 0x1b1c9c, Func Offset: 0x46c
	// Line 541, Address: 0x1b1cc8, Func Offset: 0x498
	// Line 542, Address: 0x1b1cf4, Func Offset: 0x4c4
	// Line 543, Address: 0x1b1d20, Func Offset: 0x4f0
	// Line 544, Address: 0x1b1d44, Func Offset: 0x514
	// Line 545, Address: 0x1b1d48, Func Offset: 0x518
	// Line 546, Address: 0x1b1d54, Func Offset: 0x524
	// Func End, Address: 0x1b1d6c, Func Offset: 0x53c
}

