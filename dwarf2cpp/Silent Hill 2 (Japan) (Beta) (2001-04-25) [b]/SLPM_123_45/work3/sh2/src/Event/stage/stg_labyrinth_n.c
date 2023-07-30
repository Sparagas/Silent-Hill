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
typedef struct Playing_Info;
typedef struct shBattleInfo;
typedef struct SubObject;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct shAttackInfo;
typedef struct _anon1;
typedef struct _CL_VHIT_WALL;
typedef union _anon2;
typedef struct shPlayerWork;
typedef struct _anon3;
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
typedef struct _anon7;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon8;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct _anon9;
typedef struct _anon10;
typedef struct PAD_3D;

typedef void(*type_3)(SubCharacter*);
typedef void(*type_6)(SubCharacter*);
typedef int(*type_17)();
typedef void(*type_20)();
typedef void(*type_24)(SubCharacter*);
typedef void(*type_26)(SubCharacter*);

typedef unsigned char type_0[4];
typedef PAD_INFO type_1[10];
typedef unsigned char type_2[10];
typedef shAttackInfo type_4[46];
typedef float type_5[4];
typedef unsigned char type_7[2];
typedef unsigned char type_8[4];
typedef unsigned char type_9[2];
typedef fsFileIndex type_10[1];
typedef unsigned char type_11[410];
typedef unsigned int type_12[256];
typedef unsigned char type_13[10];
typedef unsigned int type_14[32];
typedef unsigned char type_15[4];
typedef char type_16[4];
typedef int(*type_18)()[9];
typedef char type_19[4];
typedef unsigned char type_21[2];
typedef float type_22[4];
typedef unsigned char type_23[4];
typedef fsFileIndex type_25[1];
typedef unsigned char type_27[13];
typedef _anon1 type_28[37];
typedef float type_29[4];
typedef unsigned char type_30[34];
typedef float type_31[4][4];
typedef float type_32[4][2];
typedef unsigned char type_33[4];

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

struct _anon1
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

union _anon2
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

struct _anon3
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
unsigned char ev_pos[410];
_anon1 ev_list[37];
int(*ev_prog)()[9];
_anon9 stage_labyrinth_n;
_anon3 game_flag;
shPlayerWork sh2jms;
int ev_s_step;
int ev_p_step;
Playing_Info playing;
fsFileIndex data_pic_hsp_p_female_tex[1];
fsFileIndex data_pic_apt_clock_close_tex[1];

int EvProgHangingCorpse();
int EvProgHangRope();
int EvProgReadHangHint();
int EvProgReadPullOnce();
int EvProgGetFalseChargeKey();
int EvProgUseFalseChargeKey();
int EvProgMariaRedeath();
int EvProgHoleTo9thLayer();
void EvRoomInit();

// 
// Start address: 0x230db0
int EvProgHangingCorpse()
{
	int i;
	int work;
	// Line 85, Address: 0x230db0, Func Offset: 0
	// Line 89, Address: 0x230dc0, Func Offset: 0x10
	// Line 91, Address: 0x230dfc, Func Offset: 0x4c
	// Line 92, Address: 0x230e10, Func Offset: 0x60
	// Line 93, Address: 0x230e1c, Func Offset: 0x6c
	// Line 94, Address: 0x230e50, Func Offset: 0xa0
	// Line 95, Address: 0x230e64, Func Offset: 0xb4
	// Line 98, Address: 0x230e6c, Func Offset: 0xbc
	// Line 99, Address: 0x230e94, Func Offset: 0xe4
	// Line 102, Address: 0x230e9c, Func Offset: 0xec
	// Line 103, Address: 0x230ea8, Func Offset: 0xf8
	// Line 104, Address: 0x230eb4, Func Offset: 0x104
	// Line 105, Address: 0x230ee8, Func Offset: 0x138
	// Line 106, Address: 0x230f08, Func Offset: 0x158
	// Line 107, Address: 0x230f20, Func Offset: 0x170
	// Line 108, Address: 0x230f34, Func Offset: 0x184
	// Line 109, Address: 0x230f48, Func Offset: 0x198
	// Line 110, Address: 0x230f70, Func Offset: 0x1c0
	// Line 111, Address: 0x230f7c, Func Offset: 0x1cc
	// Line 112, Address: 0x230f88, Func Offset: 0x1d8
	// Line 113, Address: 0x230f94, Func Offset: 0x1e4
	// Line 114, Address: 0x230fa0, Func Offset: 0x1f0
	// Line 115, Address: 0x230fac, Func Offset: 0x1fc
	// Line 117, Address: 0x230fb0, Func Offset: 0x200
	// Line 118, Address: 0x230fd0, Func Offset: 0x220
	// Line 119, Address: 0x230ff8, Func Offset: 0x248
	// Line 120, Address: 0x231004, Func Offset: 0x254
	// Line 121, Address: 0x231010, Func Offset: 0x260
	// Line 122, Address: 0x23101c, Func Offset: 0x26c
	// Line 123, Address: 0x231028, Func Offset: 0x278
	// Line 124, Address: 0x231034, Func Offset: 0x284
	// Line 126, Address: 0x231038, Func Offset: 0x288
	// Line 127, Address: 0x231040, Func Offset: 0x290
	// Line 128, Address: 0x231068, Func Offset: 0x2b8
	// Line 129, Address: 0x231074, Func Offset: 0x2c4
	// Line 130, Address: 0x231080, Func Offset: 0x2d0
	// Line 131, Address: 0x23108c, Func Offset: 0x2dc
	// Line 132, Address: 0x231098, Func Offset: 0x2e8
	// Line 133, Address: 0x2310a4, Func Offset: 0x2f4
	// Line 136, Address: 0x2310a8, Func Offset: 0x2f8
	// Line 137, Address: 0x2310d0, Func Offset: 0x320
	// Line 140, Address: 0x2310d8, Func Offset: 0x328
	// Line 141, Address: 0x2310ec, Func Offset: 0x33c
	// Line 142, Address: 0x2310f8, Func Offset: 0x348
	// Line 143, Address: 0x231144, Func Offset: 0x394
	// Line 145, Address: 0x231150, Func Offset: 0x3a0
	// Line 146, Address: 0x231154, Func Offset: 0x3a4
	// Func End, Address: 0x23116c, Func Offset: 0x3bc
}

// 
// Start address: 0x231170
int EvProgHangRope()
{
	// Line 153, Address: 0x231170, Func Offset: 0
	// Line 154, Address: 0x231174, Func Offset: 0x4
	// Func End, Address: 0x23117c, Func Offset: 0xc
}

// 
// Start address: 0x231180
int EvProgReadHangHint()
{
	int msg;
	// Line 160, Address: 0x231180, Func Offset: 0
	// Line 163, Address: 0x23118c, Func Offset: 0xc
	// Line 166, Address: 0x2311b8, Func Offset: 0x38
	// Line 167, Address: 0x2311bc, Func Offset: 0x3c
	// Line 168, Address: 0x2311d0, Func Offset: 0x50
	// Line 170, Address: 0x2311d8, Func Offset: 0x58
	// Line 171, Address: 0x2311dc, Func Offset: 0x5c
	// Line 172, Address: 0x2311f0, Func Offset: 0x70
	// Line 174, Address: 0x2311f8, Func Offset: 0x78
	// Line 175, Address: 0x2311fc, Func Offset: 0x7c
	// Line 178, Address: 0x231210, Func Offset: 0x90
	// Line 179, Address: 0x231224, Func Offset: 0xa4
	// Func End, Address: 0x231238, Func Offset: 0xb8
}

// 
// Start address: 0x231240
int EvProgReadPullOnce()
{
	// Line 185, Address: 0x231240, Func Offset: 0
	// Line 186, Address: 0x231248, Func Offset: 0x8
	// Line 188, Address: 0x23125c, Func Offset: 0x1c
	// Func End, Address: 0x23126c, Func Offset: 0x2c
}

// 
// Start address: 0x231270
int EvProgGetFalseChargeKey()
{
	// Line 194, Address: 0x231270, Func Offset: 0
	// Line 195, Address: 0x231278, Func Offset: 0x8
	// Line 197, Address: 0x231288, Func Offset: 0x18
	// Func End, Address: 0x231298, Func Offset: 0x28
}

// 
// Start address: 0x2312a0
int EvProgUseFalseChargeKey()
{
	// Line 204, Address: 0x2312a0, Func Offset: 0
	// Line 205, Address: 0x2312a4, Func Offset: 0x4
	// Func End, Address: 0x2312ac, Func Offset: 0xc
}

// 
// Start address: 0x2312b0
int EvProgMariaRedeath()
{
	// Line 228, Address: 0x2312b0, Func Offset: 0
	// Line 229, Address: 0x2312b4, Func Offset: 0x4
	// Func End, Address: 0x2312bc, Func Offset: 0xc
}

// 
// Start address: 0x2312c0
int EvProgHoleTo9thLayer()
{
	// Line 236, Address: 0x2312c0, Func Offset: 0
	// Line 237, Address: 0x2312c4, Func Offset: 0x4
	// Func End, Address: 0x2312cc, Func Offset: 0xc
}

// 
// Start address: 0x2312d0
void EvRoomInit()
{
	int i;
	int work;
	int room;
	// Line 242, Address: 0x2312d0, Func Offset: 0
	// Line 248, Address: 0x2312e4, Func Offset: 0x14
	// Line 250, Address: 0x2312f0, Func Offset: 0x20
	// Line 251, Address: 0x2312fc, Func Offset: 0x2c
	// Line 252, Address: 0x231308, Func Offset: 0x38
	// Line 253, Address: 0x231314, Func Offset: 0x44
	// Line 254, Address: 0x231334, Func Offset: 0x64
	// Line 255, Address: 0x231354, Func Offset: 0x84
	// Line 256, Address: 0x231368, Func Offset: 0x98
	// Line 257, Address: 0x23139c, Func Offset: 0xcc
	// Line 258, Address: 0x2313d0, Func Offset: 0x100
	// Line 259, Address: 0x2313e4, Func Offset: 0x114
	// Line 260, Address: 0x2313ec, Func Offset: 0x11c
	// Line 261, Address: 0x231444, Func Offset: 0x174
	// Line 263, Address: 0x231448, Func Offset: 0x178
	// Func End, Address: 0x231464, Func Offset: 0x194
}

