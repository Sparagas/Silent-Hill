typedef struct shAttackInfo;
typedef struct SubCharacter;
typedef struct _CL_VHIT_WALL;
typedef struct Pad_KeyConfig;
typedef struct _anon0;
typedef union _anon1;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shPlayerWork;
typedef struct _CL_VHIT_CHARA;
typedef struct _anon2;
typedef union fsFile;
typedef struct fsCdFile;
typedef struct _CL_VHIT_RESULT;
typedef union _anon3;
typedef struct SubObject;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct fsMgcFile;
typedef struct Model_List;
typedef struct fsMgfFile;
typedef struct _anon4;
typedef struct fsHdFile;
typedef struct _anon5;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct fsMgpFile;
typedef struct _anon6;
typedef struct _anon7;
typedef struct shSkelton;
typedef struct _anon8;
typedef struct PAD_3D;
typedef struct shBattleFight;
typedef union fsFileIndex;
typedef struct _anon9;
typedef struct PAD_2D;
typedef struct shBattleShot;
typedef struct PAD_INFO;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef enum _JAMES_LOWER_STATUS : unsigned char;

typedef void(*type_5)();
typedef int(*type_6)();
typedef void(*type_8)(SubCharacter*);
typedef void(*type_9)(SubCharacter*);
typedef void(*type_22)(SubCharacter*);
typedef void(*type_24)(SubCharacter*);

typedef float type_0[4];
typedef fsFileIndex type_1[1];
typedef unsigned char type_2[600];
typedef fsFileIndex type_3[1];
typedef unsigned char type_4[10];
typedef unsigned char type_7[2];
typedef int(*type_10)()[7];
typedef unsigned char type_11[13];
typedef _anon0 type_12[55];
typedef float type_13[4];
typedef unsigned char type_14[34];
typedef float type_15[4][2];
typedef float type_16[4];
typedef float type_17[4][4];
typedef unsigned char type_18[4];
typedef unsigned char type_19[4];
typedef PAD_INFO type_20[10];
typedef unsigned char type_21[10];
typedef shAttackInfo type_23[46];
typedef unsigned char type_25[4];
typedef unsigned char type_26[2];
typedef Model_List type_27[3];
typedef unsigned char type_28[2];
typedef fsFileIndex type_29[1];
typedef fsFileIndex type_30[1];
typedef fsFileIndex type_31[1];

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
	_anon5 pos;
	_anon5 rot;
	_anon5 pos_spd;
	_anon5 rot_spd;
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
	_anon5 b_pos;
	_anon5 b_rot;
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

struct shPlayerWork
{
	SubCharacter* player;
	_anon5 dist_rot;
	_anon5 dist_pos;
	_anon5 pos;
	_anon5 rot;
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
	_anon5 tgt_body_angle;
	_anon5 tgt_neck_angle;
	_anon5 tgt_arms_angle;
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
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
};

union fsFile
{
	_anon7 check;
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
	_anon3 hobj;
};

union _anon3
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
	_anon5 pos;
	_anon5 rot;
	_anon5 pos_spd;
	_anon5 rot_spd;
	_anon8 mat;
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

struct _anon4
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

struct _anon5
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

struct _anon6
{
	_anon0* ev_list;
	unsigned char* ev_pos;
	int(*ev_prog)();
	_anon2* gi_list;
	Model_List* mdl_list;
	_anon4* en_list;
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

struct _anon7
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
	_anon8 src_m;
	_anon5 src_t;
	_anon8 des_m;
	_anon5 des_t;
	_anon5 axis;
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

struct _anon8
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
	_anon9 index;
	unsigned long pack;
};

struct _anon9
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
unsigned char ev_pos[600];
_anon0 ev_list[55];
int(*ev_prog)()[7];
Model_List mdl_list[3];
_anon6 stage_hospital_1f_f;
fsFileIndex data_pic_map_hospitalmap01_tex[1];
shPlayerWork sh2jms;
int ev_s_step;
int ev_p_step;
float ev_timer;
float dtf;
Pad_KeyConfig key_config;
fsFileIndex data_pic_hsp_p_doctormemo_key_tex[1];
fsFileIndex data_pic_hsp_p_doctormemo_tex[1];
fsFileIndex data_pic_hsp_whiteboard_tex[1];
fsFileIndex data_pic_hsp_p_patient_tex[1];

int EvProgGetHospitalMap();
int EvProgDoctorMemo1st();
int EvProgDoctorMemo2nd();
int EvProgUseExamKey();
int EvProgReadWhiteBoard();
int EvProgCardsOfPatient();

// 
// Start address: 0x226250
int EvProgGetHospitalMap()
{
	// Line 90, Address: 0x226250, Func Offset: 0
	// Line 91, Address: 0x226258, Func Offset: 0x8
	// Line 93, Address: 0x22626c, Func Offset: 0x1c
	// Func End, Address: 0x22627c, Func Offset: 0x2c
}

// 
// Start address: 0x226280
int EvProgDoctorMemo1st()
{
	// Line 100, Address: 0x226280, Func Offset: 0
	// Line 101, Address: 0x226288, Func Offset: 0x8
	// Line 104, Address: 0x226300, Func Offset: 0x80
	// Line 105, Address: 0x226314, Func Offset: 0x94
	// Line 106, Address: 0x226320, Func Offset: 0xa0
	// Line 107, Address: 0x22632c, Func Offset: 0xac
	// Line 111, Address: 0x226340, Func Offset: 0xc0
	// Line 112, Address: 0x226354, Func Offset: 0xd4
	// Line 116, Address: 0x226368, Func Offset: 0xe8
	// Line 119, Address: 0x226390, Func Offset: 0x110
	// Line 120, Address: 0x2263a4, Func Offset: 0x124
	// Line 124, Address: 0x2263b4, Func Offset: 0x134
	// Line 125, Address: 0x2263bc, Func Offset: 0x13c
	// Line 126, Address: 0x2263c4, Func Offset: 0x144
	// Line 127, Address: 0x2263e0, Func Offset: 0x160
	// Line 128, Address: 0x2263e8, Func Offset: 0x168
	// Line 129, Address: 0x22640c, Func Offset: 0x18c
	// Line 132, Address: 0x226414, Func Offset: 0x194
	// Line 133, Address: 0x22641c, Func Offset: 0x19c
	// Line 134, Address: 0x226424, Func Offset: 0x1a4
	// Line 135, Address: 0x226440, Func Offset: 0x1c0
	// Line 136, Address: 0x226448, Func Offset: 0x1c8
	// Line 137, Address: 0x226478, Func Offset: 0x1f8
	// Line 140, Address: 0x226480, Func Offset: 0x200
	// Line 141, Address: 0x226488, Func Offset: 0x208
	// Line 142, Address: 0x226490, Func Offset: 0x210
	// Line 143, Address: 0x2264ac, Func Offset: 0x22c
	// Line 144, Address: 0x2264b4, Func Offset: 0x234
	// Line 145, Address: 0x2264bc, Func Offset: 0x23c
	// Line 146, Address: 0x2264e4, Func Offset: 0x264
	// Line 149, Address: 0x2264ec, Func Offset: 0x26c
	// Line 150, Address: 0x2264f4, Func Offset: 0x274
	// Line 151, Address: 0x2264fc, Func Offset: 0x27c
	// Line 153, Address: 0x226548, Func Offset: 0x2c8
	// Line 154, Address: 0x226550, Func Offset: 0x2d0
	// Line 155, Address: 0x22656c, Func Offset: 0x2ec
	// Line 156, Address: 0x2265a4, Func Offset: 0x324
	// Line 159, Address: 0x2265ac, Func Offset: 0x32c
	// Line 160, Address: 0x2265b4, Func Offset: 0x334
	// Line 161, Address: 0x2265bc, Func Offset: 0x33c
	// Line 162, Address: 0x2265c4, Func Offset: 0x344
	// Line 163, Address: 0x2265cc, Func Offset: 0x34c
	// Line 165, Address: 0x2265e4, Func Offset: 0x364
	// Line 166, Address: 0x2265f8, Func Offset: 0x378
	// Line 169, Address: 0x226600, Func Offset: 0x380
	// Line 170, Address: 0x226614, Func Offset: 0x394
	// Line 171, Address: 0x226628, Func Offset: 0x3a8
	// Line 172, Address: 0x226638, Func Offset: 0x3b8
	// Line 176, Address: 0x226644, Func Offset: 0x3c4
	// Line 177, Address: 0x226648, Func Offset: 0x3c8
	// Func End, Address: 0x226658, Func Offset: 0x3d8
}

// 
// Start address: 0x226660
int EvProgDoctorMemo2nd()
{
	// Line 183, Address: 0x226660, Func Offset: 0
	// Line 184, Address: 0x226668, Func Offset: 0x8
	// Line 187, Address: 0x2266bc, Func Offset: 0x5c
	// Line 188, Address: 0x2266d0, Func Offset: 0x70
	// Line 189, Address: 0x2266dc, Func Offset: 0x7c
	// Line 190, Address: 0x2266e8, Func Offset: 0x88
	// Line 194, Address: 0x2266fc, Func Offset: 0x9c
	// Line 196, Address: 0x226720, Func Offset: 0xc0
	// Line 199, Address: 0x226734, Func Offset: 0xd4
	// Line 200, Address: 0x226738, Func Offset: 0xd8
	// Line 201, Address: 0x226760, Func Offset: 0x100
	// Line 204, Address: 0x226768, Func Offset: 0x108
	// Line 205, Address: 0x226770, Func Offset: 0x110
	// Line 206, Address: 0x226778, Func Offset: 0x118
	// Line 207, Address: 0x226780, Func Offset: 0x120
	// Line 208, Address: 0x2267b0, Func Offset: 0x150
	// Line 211, Address: 0x2267b8, Func Offset: 0x158
	// Line 212, Address: 0x2267c0, Func Offset: 0x160
	// Line 213, Address: 0x2267c8, Func Offset: 0x168
	// Line 214, Address: 0x2267d0, Func Offset: 0x170
	// Line 215, Address: 0x2267d8, Func Offset: 0x178
	// Line 216, Address: 0x226800, Func Offset: 0x1a0
	// Line 219, Address: 0x226808, Func Offset: 0x1a8
	// Line 220, Address: 0x22681c, Func Offset: 0x1bc
	// Line 221, Address: 0x226830, Func Offset: 0x1d0
	// Line 222, Address: 0x226840, Func Offset: 0x1e0
	// Line 226, Address: 0x22684c, Func Offset: 0x1ec
	// Line 227, Address: 0x226850, Func Offset: 0x1f0
	// Func End, Address: 0x226860, Func Offset: 0x200
}

// 
// Start address: 0x226860
int EvProgUseExamKey()
{
	// Line 233, Address: 0x226860, Func Offset: 0
	// Line 234, Address: 0x226868, Func Offset: 0x8
	// Line 235, Address: 0x226878, Func Offset: 0x18
	// Func End, Address: 0x226888, Func Offset: 0x28
}

// 
// Start address: 0x226890
int EvProgReadWhiteBoard()
{
	// Line 241, Address: 0x226890, Func Offset: 0
	// Line 242, Address: 0x226898, Func Offset: 0x8
	// Line 244, Address: 0x2268ac, Func Offset: 0x1c
	// Func End, Address: 0x2268bc, Func Offset: 0x2c
}

// 
// Start address: 0x2268c0
int EvProgCardsOfPatient()
{
	// Line 250, Address: 0x2268c0, Func Offset: 0
	// Line 251, Address: 0x2268c8, Func Offset: 0x8
	// Line 253, Address: 0x22694c, Func Offset: 0x8c
	// Line 254, Address: 0x226960, Func Offset: 0xa0
	// Line 255, Address: 0x22696c, Func Offset: 0xac
	// Line 259, Address: 0x226980, Func Offset: 0xc0
	// Line 260, Address: 0x226994, Func Offset: 0xd4
	// Line 264, Address: 0x2269a8, Func Offset: 0xe8
	// Line 266, Address: 0x2269cc, Func Offset: 0x10c
	// Line 270, Address: 0x2269e0, Func Offset: 0x120
	// Line 271, Address: 0x226a08, Func Offset: 0x148
	// Line 274, Address: 0x226a10, Func Offset: 0x150
	// Line 275, Address: 0x226a18, Func Offset: 0x158
	// Line 276, Address: 0x226a20, Func Offset: 0x160
	// Line 277, Address: 0x226a28, Func Offset: 0x168
	// Line 278, Address: 0x226a58, Func Offset: 0x198
	// Line 281, Address: 0x226a60, Func Offset: 0x1a0
	// Line 282, Address: 0x226a68, Func Offset: 0x1a8
	// Line 283, Address: 0x226a70, Func Offset: 0x1b0
	// Line 284, Address: 0x226a78, Func Offset: 0x1b8
	// Line 285, Address: 0x226a80, Func Offset: 0x1c0
	// Line 286, Address: 0x226a94, Func Offset: 0x1d4
	// Line 287, Address: 0x226aa8, Func Offset: 0x1e8
	// Line 290, Address: 0x226ab0, Func Offset: 0x1f0
	// Line 291, Address: 0x226ac4, Func Offset: 0x204
	// Line 292, Address: 0x226ad8, Func Offset: 0x218
	// Line 293, Address: 0x226ae8, Func Offset: 0x228
	// Line 296, Address: 0x226af0, Func Offset: 0x230
	// Line 297, Address: 0x226b00, Func Offset: 0x240
	// Line 300, Address: 0x226b14, Func Offset: 0x254
	// Line 301, Address: 0x226b18, Func Offset: 0x258
	// Line 302, Address: 0x226b2c, Func Offset: 0x26c
	// Line 306, Address: 0x226b40, Func Offset: 0x280
	// Line 307, Address: 0x226b54, Func Offset: 0x294
	// Line 309, Address: 0x226b60, Func Offset: 0x2a0
	// Line 310, Address: 0x226b64, Func Offset: 0x2a4
	// Func End, Address: 0x226b74, Func Offset: 0x2b4
}

