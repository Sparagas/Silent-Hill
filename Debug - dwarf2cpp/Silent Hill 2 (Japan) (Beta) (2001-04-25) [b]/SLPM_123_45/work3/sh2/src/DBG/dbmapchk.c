typedef struct shBattleInfo;
typedef struct sh2gfw_BLOCK_HEAD;
typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct _anon4;
typedef struct SubCharacter;
typedef struct shAttackInfo;
typedef struct Model_List;
typedef struct _CL_VHIT_WALL;
typedef union _anon5;
typedef struct _CL_HITPOLY_HEAD;
typedef struct SubObject;
typedef struct map_global_t;
typedef struct _CL_VHIT_CHARA;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _CL_VHIT_RESULT;
typedef union _anon8;
typedef struct PAD_3D;
typedef struct PAD_2D;
typedef enum STAGE_ID : unsigned char;
typedef struct PAD_INFO;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct _SH2_SYS;
typedef struct shSkelton;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct _KANRI;
typedef struct _anon9;
typedef struct shBattleFight;
typedef struct _SYS_W;
typedef struct _VbCOORDINATE;
typedef struct shBattleShot;
typedef struct shPlayerWork;
typedef struct shBattleArea;

typedef void(*type_3)();
typedef int(*type_4)();
typedef void(*type_6)(SubCharacter*);
typedef void(*type_8)(SubCharacter*);
typedef void(*type_26)(SubCharacter*);
typedef void(*type_29)(SubCharacter*);

typedef unsigned char type_0[2];
typedef map_global_t type_1[189];
typedef int type_2[4];
typedef float type_5[4];
typedef char* type_7[15];
typedef unsigned char type_9[4];
typedef unsigned char type_10[4];
typedef PAD_INFO type_11[10];
typedef float type_12[4];
typedef unsigned int type_13[3];
typedef float type_14[4][4];
typedef unsigned int type_15[3];
typedef unsigned char type_16[2];
typedef unsigned char type_17[2];
typedef map_global_t type_18[226];
typedef unsigned int type_19[8];
typedef float type_20[4][2];
typedef float type_21[4];
typedef float type_22[4];
typedef float type_23[4][4];
typedef char type_24[128];
typedef int type_25[4];
typedef _VbCOORDINATE type_27[18];
typedef shAttackInfo type_28[46];
typedef int type_30[4];
typedef char type_31[256];
typedef SubCharacter type_32[6];
typedef unsigned char type_33[4];

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

struct sh2gfw_BLOCK_HEAD
{
	unsigned int block_id;
	unsigned int toGlobaldef;
	unsigned int toLocaldef;
	unsigned int toRawblockdataParms;
	unsigned int toLocalTex[3];
	unsigned int toLocalcluts[3];
	unsigned int texnum;
	unsigned char globaltexnum;
	unsigned char transtexnum;
	unsigned char divflg;
	unsigned char padc;
};

struct _anon0
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
};

struct _anon1
{
	_anon0* ev_list;
	unsigned char* ev_pos;
	int(*ev_prog)();
	_anon4* gi_list;
	Model_List* mdl_list;
	_anon6* en_list;
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

struct _anon2
{
	float d[4][4];
};

struct _anon3
{
	int st;
	int glb_disp;
	int glb_tmp;
	int glbchg;
	_anon7 pos;
	int sst;
	int glb_chgflg;
	int act;
	int menu;
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

struct _anon4
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
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
	_anon7 pos;
	_anon7 rot;
	_anon7 pos_spd;
	_anon7 rot_spd;
	_anon2 mat;
	shSkelton* sk_top;
	float eye_y;
	float center_y;
	float spd;
	float spd_org;
	float spd_y;
	float spd_roty;
	float grnd_normal[4];
	float grnd_height;
	_anon7 b_pos;
	_anon7 b_rot;
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
	_anon5 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
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

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
};

struct SubObject
{
	unsigned int status;
	unsigned int sub_status;
	unsigned int sub_st;
	short kind;
	short id;
	unsigned int step;
	_anon7 pos;
	_anon7 rot;
	_anon7 pos_spd;
	_anon7 rot_spd;
	_anon2 mat;
	void(*function)(SubCharacter*);
	void(*effecter_function)(SubCharacter*);
	SubObject* pre;
	SubObject* next;
};

struct map_global_t
{
	int existence;
	float x;
	float z;
};

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

struct _anon6
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

struct _anon7
{
	float x;
	float y;
	float z;
	float w;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon8 hobj;
};

union _anon8
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
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

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
};

enum STAGE_ID : unsigned char
{
	BG_ID_null,
	BG_ID_ap = 0x9,
	BG_ID_bw = 0x7,
	BG_ID_ca = 0x1,
	BG_ID_cb,
	BG_ID_cc,
	BG_ID_cd,
	BG_ID_er = 0x6,
	BG_ID_hp = 0xa,
	BG_ID_ps,
	BG_ID_ob = 0x5,
	BG_ID_rr = 0xc,
	BG_ID_ru,
	BG_ID_th = 0x8,
	BG_ID_qp = 0xe,
	BG_ID_num
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

struct _SH2_SYS
{
	unsigned int step[8];
	int main_status;
	unsigned int boot_first;
	unsigned int soft_reset;
	unsigned int frame_cnt;
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon2 src_m;
	_anon7 src_t;
	_anon2 des_m;
	_anon7 des_t;
	_anon7 axis;
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

struct _KANRI
{
	float pos[4];
	float ang[4];
	float rot_spd[4];
	float velo_y;
	float velo_xz;
	float velo_houi;
};

struct _anon9
{
	short vx;
	short vy;
	short vz;
	short pad;
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct _SYS_W
{
	float cam_ang_y;
	float cam_ang_z;
	float cam_r_xz;
	float cam_y;
	_VbCOORDINATE hero_crd[18];
	float head_ang_y;
	float head_ang_x;
	_KANRI hero;
	float eye_y;
	SubCharacter npc[6];
};

struct _VbCOORDINATE
{
	unsigned int flg;
	float coord[4][4];
	float workm[4][4];
	unsigned int* param;
	_VbCOORDINATE* super;
	_VbCOORDINATE* sub;
	_anon9 r;
	float lw[4][4];
	float ls[4][4];
	float rot[4];
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct shPlayerWork
{
	SubCharacter* player;
	_anon7 dist_rot;
	_anon7 dist_pos;
	_anon7 pos;
	_anon7 rot;
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
	_anon7 tgt_body_angle;
	_anon7 tgt_neck_angle;
	_anon7 tgt_arms_angle;
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

struct shBattleArea
{
	float center;
	float radius;
};

shAttackInfo sh2_attack_list[46];
_anon3 d;
map_global_t map_global_hp[226];
map_global_t map_global_ps[189];
_anon1* stage;
float connect_pos[4];
int map_id[4];
shPlayerWork sh2jms;
_SH2_SYS Sh2sys;
_SYS_W sys;

void getNowMapId(int* id);
int chgmapid();
int move();
char* getglbname(int clb);
int chgglb();
int menu_disp();
void pos_normal();
void dbmapposnoraml();
void menu();
void* dbGetPssWork();
void movie();
void menu_main();
void dbCheckMapMove();
void get_map_global(map_global_t* map_global, STAGE_ID _stage_id, int _map_id);

// 
// Start address: 0x2104f0
void getNowMapId(int* id)
{
	float z;
	float x;
	// Line 501, Address: 0x2104f0, Func Offset: 0
	// Line 505, Address: 0x2104fc, Func Offset: 0xc
	// Line 506, Address: 0x210508, Func Offset: 0x18
	// Line 507, Address: 0x210514, Func Offset: 0x24
	// Line 508, Address: 0x210534, Func Offset: 0x44
	// Func End, Address: 0x210544, Func Offset: 0x54
}

// 
// Start address: 0x210550
int chgmapid()
{
	int id[4];
	// Line 511, Address: 0x210550, Func Offset: 0
	// Line 514, Address: 0x210558, Func Offset: 0x8
	// Line 515, Address: 0x210564, Func Offset: 0x14
	// Line 516, Address: 0x21057c, Func Offset: 0x2c
	// Func End, Address: 0x21058c, Func Offset: 0x3c
}

// 
// Start address: 0x210590
int move()
{
	_anon2* m;
	sh2gfw_BLOCK_HEAD* p;
	float z;
	float x;
	int id;
	// Line 519, Address: 0x210590, Func Offset: 0
	// Line 529, Address: 0x2105a4, Func Offset: 0x14
	// Line 538, Address: 0x2105e0, Func Offset: 0x50
	// Line 539, Address: 0x2105f4, Func Offset: 0x64
	// Line 540, Address: 0x210628, Func Offset: 0x98
	// Line 541, Address: 0x210668, Func Offset: 0xd8
	// Line 542, Address: 0x210694, Func Offset: 0x104
	// Line 543, Address: 0x2106a8, Func Offset: 0x118
	// Line 544, Address: 0x2106bc, Func Offset: 0x12c
	// Line 545, Address: 0x2106c8, Func Offset: 0x138
	// Line 547, Address: 0x2106d0, Func Offset: 0x140
	// Line 548, Address: 0x2106e0, Func Offset: 0x150
	// Line 549, Address: 0x2106f4, Func Offset: 0x164
	// Line 550, Address: 0x2106fc, Func Offset: 0x16c
	// Line 553, Address: 0x210710, Func Offset: 0x180
	// Line 561, Address: 0x210718, Func Offset: 0x188
	// Line 562, Address: 0x21072c, Func Offset: 0x19c
	// Line 563, Address: 0x210738, Func Offset: 0x1a8
	// Line 564, Address: 0x210748, Func Offset: 0x1b8
	// Line 565, Address: 0x210750, Func Offset: 0x1c0
	// Line 566, Address: 0x210780, Func Offset: 0x1f0
	// Line 567, Address: 0x2107b0, Func Offset: 0x220
	// Line 568, Address: 0x2107c0, Func Offset: 0x230
	// Line 571, Address: 0x2107d0, Func Offset: 0x240
	// Line 573, Address: 0x2107e4, Func Offset: 0x254
	// Line 576, Address: 0x2107ec, Func Offset: 0x25c
	// Line 577, Address: 0x210800, Func Offset: 0x270
	// Line 578, Address: 0x210808, Func Offset: 0x278
	// Line 580, Address: 0x210814, Func Offset: 0x284
	// Line 581, Address: 0x21081c, Func Offset: 0x28c
	// Line 582, Address: 0x210820, Func Offset: 0x290
	// Func End, Address: 0x21083c, Func Offset: 0x2ac
}

// 
// Start address: 0x210840
char* getglbname(int clb)
{
	char* tbl[15];
	// Line 601, Address: 0x210840, Func Offset: 0
	// Line 619, Address: 0x210848, Func Offset: 0x8
	// Line 620, Address: 0x210860, Func Offset: 0x20
	// Func End, Address: 0x21086c, Func Offset: 0x2c
}

// 
// Start address: 0x210870
int chgglb()
{
	// Line 628, Address: 0x210870, Func Offset: 0
	// Line 629, Address: 0x210878, Func Offset: 0x8
	// Line 630, Address: 0x2108bc, Func Offset: 0x4c
	// Line 631, Address: 0x2108c4, Func Offset: 0x54
	// Line 632, Address: 0x2108d0, Func Offset: 0x60
	// Line 633, Address: 0x2108e4, Func Offset: 0x74
	// Line 635, Address: 0x2108f0, Func Offset: 0x80
	// Line 636, Address: 0x2108f4, Func Offset: 0x84
	// Func End, Address: 0x210904, Func Offset: 0x94
}

// 
// Start address: 0x210910
int menu_disp()
{
	float z;
	float x;
	int id[4];
	char* p;
	char buf[128];
	// Line 639, Address: 0x210910, Func Offset: 0
	// Line 645, Address: 0x210920, Func Offset: 0x10
	// Line 646, Address: 0x210930, Func Offset: 0x20
	// Line 647, Address: 0x210944, Func Offset: 0x34
	// Line 648, Address: 0x210954, Func Offset: 0x44
	// Line 649, Address: 0x210984, Func Offset: 0x74
	// Line 650, Address: 0x210990, Func Offset: 0x80
	// Line 651, Address: 0x2109d4, Func Offset: 0xc4
	// Line 652, Address: 0x2109f0, Func Offset: 0xe0
	// Line 653, Address: 0x210a0c, Func Offset: 0xfc
	// Line 654, Address: 0x210a6c, Func Offset: 0x15c
	// Line 655, Address: 0x210a78, Func Offset: 0x168
	// Line 656, Address: 0x210ae8, Func Offset: 0x1d8
	// Line 657, Address: 0x210af4, Func Offset: 0x1e4
	// Line 659, Address: 0x210b60, Func Offset: 0x250
	// Line 662, Address: 0x210b6c, Func Offset: 0x25c
	// Line 663, Address: 0x210b74, Func Offset: 0x264
	// Func End, Address: 0x210b8c, Func Offset: 0x27c
}

// 
// Start address: 0x210b90
void pos_normal()
{
	_anon2* m;
	sh2gfw_BLOCK_HEAD* p;
	float z;
	float x;
	int id;
	// Line 666, Address: 0x210b90, Func Offset: 0
	// Line 671, Address: 0x210ba4, Func Offset: 0x14
	// Line 672, Address: 0x210bb0, Func Offset: 0x20
	// Line 673, Address: 0x210bbc, Func Offset: 0x2c
	// Line 674, Address: 0x210bd0, Func Offset: 0x40
	// Line 675, Address: 0x210be4, Func Offset: 0x54
	// Line 676, Address: 0x210bf0, Func Offset: 0x60
	// Line 677, Address: 0x210c00, Func Offset: 0x70
	// Line 678, Address: 0x210c08, Func Offset: 0x78
	// Line 679, Address: 0x210c38, Func Offset: 0xa8
	// Line 680, Address: 0x210c68, Func Offset: 0xd8
	// Line 681, Address: 0x210c78, Func Offset: 0xe8
	// Line 682, Address: 0x210c88, Func Offset: 0xf8
	// Line 683, Address: 0x210c94, Func Offset: 0x104
	// Line 684, Address: 0x210ca0, Func Offset: 0x110
	// Line 686, Address: 0x210cb8, Func Offset: 0x128
	// Func End, Address: 0x210cd4, Func Offset: 0x144
}

// 
// Start address: 0x210ce0
void dbmapposnoraml()
{
	// Line 689, Address: 0x210ce0, Func Offset: 0
	// Line 690, Address: 0x210ce8, Func Offset: 0x8
	// Line 691, Address: 0x210cf0, Func Offset: 0x10
	// Func End, Address: 0x210d00, Func Offset: 0x20
}

// 
// Start address: 0x210d00
void menu()
{
	map_global_t _map_global;
	int _map_id;
	// Line 694, Address: 0x210d00, Func Offset: 0
	// Line 698, Address: 0x210d0c, Func Offset: 0xc
	// Line 699, Address: 0x210d24, Func Offset: 0x24
	// Line 700, Address: 0x210d38, Func Offset: 0x38
	// Line 701, Address: 0x210d58, Func Offset: 0x58
	// Line 702, Address: 0x210d6c, Func Offset: 0x6c
	// Line 703, Address: 0x210d8c, Func Offset: 0x8c
	// Line 704, Address: 0x210db0, Func Offset: 0xb0
	// Line 705, Address: 0x210dd0, Func Offset: 0xd0
	// Line 706, Address: 0x210df4, Func Offset: 0xf4
	// Line 707, Address: 0x210e14, Func Offset: 0x114
	// Line 708, Address: 0x210e38, Func Offset: 0x138
	// Line 709, Address: 0x210e58, Func Offset: 0x158
	// Line 711, Address: 0x210e7c, Func Offset: 0x17c
	// Line 712, Address: 0x210e94, Func Offset: 0x194
	// Line 713, Address: 0x210ea8, Func Offset: 0x1a8
	// Line 715, Address: 0x210eb4, Func Offset: 0x1b4
	// Line 717, Address: 0x210ec0, Func Offset: 0x1c0
	// Line 718, Address: 0x210ee0, Func Offset: 0x1e0
	// Line 720, Address: 0x210efc, Func Offset: 0x1fc
	// Line 721, Address: 0x210f08, Func Offset: 0x208
	// Line 723, Address: 0x210f24, Func Offset: 0x224
	// Line 724, Address: 0x210f3c, Func Offset: 0x23c
	// Line 725, Address: 0x210f48, Func Offset: 0x248
	// Line 726, Address: 0x210f58, Func Offset: 0x258
	// Line 728, Address: 0x210f68, Func Offset: 0x268
	// Line 729, Address: 0x210f74, Func Offset: 0x274
	// Line 730, Address: 0x210f80, Func Offset: 0x280
	// Line 733, Address: 0x210f88, Func Offset: 0x288
	// Line 734, Address: 0x210fa8, Func Offset: 0x2a8
	// Line 736, Address: 0x210fc8, Func Offset: 0x2c8
	// Line 737, Address: 0x210fd4, Func Offset: 0x2d4
	// Line 738, Address: 0x210fe0, Func Offset: 0x2e0
	// Line 739, Address: 0x210fec, Func Offset: 0x2ec
	// Line 740, Address: 0x210ff4, Func Offset: 0x2f4
	// Line 742, Address: 0x210ffc, Func Offset: 0x2fc
	// Line 743, Address: 0x211014, Func Offset: 0x314
	// Line 746, Address: 0x21101c, Func Offset: 0x31c
	// Func End, Address: 0x211030, Func Offset: 0x330
}

// 
// Start address: 0x211030
void* dbGetPssWork()
{
	// Line 751, Address: 0x211030, Func Offset: 0
	// Line 752, Address: 0x211034, Func Offset: 0x4
	// Func End, Address: 0x21103c, Func Offset: 0xc
}

// 
// Start address: 0x211040
void movie()
{
	// Line 755, Address: 0x211040, Func Offset: 0
	// Line 756, Address: 0x211048, Func Offset: 0x8
	// Line 757, Address: 0x211060, Func Offset: 0x20
	// Line 759, Address: 0x211094, Func Offset: 0x54
	// Line 760, Address: 0x2110a8, Func Offset: 0x68
	// Func End, Address: 0x2110b8, Func Offset: 0x78
}

// 
// Start address: 0x2110c0
void menu_main()
{
	// Line 763, Address: 0x2110c0, Func Offset: 0
	// Line 764, Address: 0x2110c8, Func Offset: 0x8
	// Line 765, Address: 0x2110e0, Func Offset: 0x20
	// Line 766, Address: 0x2110f4, Func Offset: 0x34
	// Line 767, Address: 0x211108, Func Offset: 0x48
	// Line 771, Address: 0x211110, Func Offset: 0x50
	// Line 772, Address: 0x211120, Func Offset: 0x60
	// Line 773, Address: 0x211128, Func Offset: 0x68
	// Line 774, Address: 0x211144, Func Offset: 0x84
	// Line 776, Address: 0x21114c, Func Offset: 0x8c
	// Func End, Address: 0x21115c, Func Offset: 0x9c
}

// 
// Start address: 0x211160
void dbCheckMapMove()
{
	// Line 779, Address: 0x211160, Func Offset: 0
	// Line 780, Address: 0x211168, Func Offset: 0x8
	// Line 781, Address: 0x21117c, Func Offset: 0x1c
	// Line 782, Address: 0x211184, Func Offset: 0x24
	// Line 783, Address: 0x211194, Func Offset: 0x34
	// Line 784, Address: 0x2111d4, Func Offset: 0x74
	// Line 788, Address: 0x2111dc, Func Offset: 0x7c
	// Func End, Address: 0x2111ec, Func Offset: 0x8c
}

// 
// Start address: 0x2111f0
void get_map_global(map_global_t* map_global, STAGE_ID _stage_id, int _map_id)
{
	// Line 800, Address: 0x2111f0, Func Offset: 0
	// Line 801, Address: 0x211200, Func Offset: 0x10
	// Line 804, Address: 0x211230, Func Offset: 0x40
	// Line 805, Address: 0x211238, Func Offset: 0x48
	// Line 806, Address: 0x211244, Func Offset: 0x54
	// Line 807, Address: 0x211250, Func Offset: 0x60
	// Line 809, Address: 0x211258, Func Offset: 0x68
	// Line 810, Address: 0x211260, Func Offset: 0x70
	// Line 811, Address: 0x21126c, Func Offset: 0x7c
	// Line 812, Address: 0x211278, Func Offset: 0x88
	// Line 814, Address: 0x211280, Func Offset: 0x90
	// Line 815, Address: 0x211288, Func Offset: 0x98
	// Line 816, Address: 0x211294, Func Offset: 0xa4
	// Line 817, Address: 0x2112a0, Func Offset: 0xb0
	// Line 819, Address: 0x2112a8, Func Offset: 0xb8
	// Line 820, Address: 0x2112b0, Func Offset: 0xc0
	// Line 821, Address: 0x2112bc, Func Offset: 0xcc
	// Line 822, Address: 0x2112c8, Func Offset: 0xd8
	// Line 824, Address: 0x2112d0, Func Offset: 0xe0
	// Line 825, Address: 0x2112d8, Func Offset: 0xe8
	// Line 826, Address: 0x2112e4, Func Offset: 0xf4
	// Line 827, Address: 0x2112f0, Func Offset: 0x100
	// Line 829, Address: 0x2112f8, Func Offset: 0x108
	// Line 830, Address: 0x211300, Func Offset: 0x110
	// Line 831, Address: 0x21130c, Func Offset: 0x11c
	// Line 832, Address: 0x211318, Func Offset: 0x128
	// Line 834, Address: 0x211320, Func Offset: 0x130
	// Line 835, Address: 0x211328, Func Offset: 0x138
	// Line 836, Address: 0x211334, Func Offset: 0x144
	// Line 837, Address: 0x211340, Func Offset: 0x150
	// Line 839, Address: 0x211348, Func Offset: 0x158
	// Line 840, Address: 0x211370, Func Offset: 0x180
	// Line 841, Address: 0x211398, Func Offset: 0x1a8
	// Line 842, Address: 0x2113c0, Func Offset: 0x1d0
	// Line 844, Address: 0x2113c8, Func Offset: 0x1d8
	// Line 845, Address: 0x2113f0, Func Offset: 0x200
	// Line 846, Address: 0x211418, Func Offset: 0x228
	// Line 847, Address: 0x211440, Func Offset: 0x250
	// Line 849, Address: 0x211448, Func Offset: 0x258
	// Line 850, Address: 0x211450, Func Offset: 0x260
	// Line 851, Address: 0x21145c, Func Offset: 0x26c
	// Line 852, Address: 0x211468, Func Offset: 0x278
	// Line 854, Address: 0x211470, Func Offset: 0x280
	// Line 855, Address: 0x211478, Func Offset: 0x288
	// Line 856, Address: 0x211484, Func Offset: 0x294
	// Line 857, Address: 0x211490, Func Offset: 0x2a0
	// Line 859, Address: 0x211498, Func Offset: 0x2a8
	// Line 860, Address: 0x2114a0, Func Offset: 0x2b0
	// Line 861, Address: 0x2114ac, Func Offset: 0x2bc
	// Line 862, Address: 0x2114b8, Func Offset: 0x2c8
	// Line 864, Address: 0x2114c0, Func Offset: 0x2d0
	// Line 865, Address: 0x2114c8, Func Offset: 0x2d8
	// Line 866, Address: 0x2114d4, Func Offset: 0x2e4
	// Line 869, Address: 0x2114e0, Func Offset: 0x2f0
	// Func End, Address: 0x2114ec, Func Offset: 0x2fc
}

