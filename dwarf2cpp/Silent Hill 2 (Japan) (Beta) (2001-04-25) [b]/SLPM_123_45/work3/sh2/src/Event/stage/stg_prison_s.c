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
typedef struct _anon9;
typedef struct PAD_3D;
typedef union fsFileIndex;
typedef struct _anon10;
typedef struct shBattleFight;
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
typedef void(*type_27)(SubCharacter*);
typedef void(*type_32)(SubCharacter*);

typedef unsigned char type_0[10];
typedef unsigned int type_1[256];
typedef unsigned int type_2[32];
typedef _anon0 type_3[46];
typedef unsigned char type_4[4];
typedef char type_5[4];
typedef char type_6[4];
typedef unsigned char type_9[2];
typedef unsigned char type_10[4];
typedef unsigned char type_13[13];
typedef float type_14[4];
typedef float type_15[3];
typedef unsigned char type_16[34];
typedef float type_17[4][2];
typedef fsFileIndex type_18[1];
typedef float type_19[4];
typedef float type_20[4][4];
typedef int(*type_21)()[5];
typedef unsigned char type_22[4];
typedef short type_23[4];
typedef unsigned char type_24[4];
typedef PAD_INFO type_25[10];
typedef unsigned char type_26[10];
typedef unsigned char type_28[464];
typedef short type_29[4];
typedef short type_30[4][4];
typedef shAttackInfo type_31[46];
typedef unsigned char type_33[4];
typedef unsigned char type_34[2];
typedef unsigned char type_35[2];
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
unsigned char ev_pos[464];
_anon0 ev_list[46];
int(*ev_prog)()[5];
_anon7 stage_prison_s;
shPlayerWork sh2jms;
int ev_s_step;
int ev_p_step;
_anon2 game_flag;
Pad_KeyConfig key_config;
float tablet_alpha[3];
float dtf;
fsFileIndex data_pic_hsp_p_female_tex[1];

int EvProgGetTabletOppressor();
int EvProgGetWaxDoll();
int EvProgGetHorseshoe();
int EvProgTabletSetScaffold();
void EvProgSubDrawTabletAndScaffold();

// 
// Start address: 0x2319b0
int EvProgGetTabletOppressor()
{
	// Line 70, Address: 0x2319b0, Func Offset: 0
	// Line 71, Address: 0x2319b8, Func Offset: 0x8
	// Line 73, Address: 0x2319c8, Func Offset: 0x18
	// Func End, Address: 0x2319d8, Func Offset: 0x28
}

// 
// Start address: 0x2319e0
int EvProgGetWaxDoll()
{
	// Line 79, Address: 0x2319e0, Func Offset: 0
	// Line 80, Address: 0x2319e8, Func Offset: 0x8
	// Line 81, Address: 0x2319f8, Func Offset: 0x18
	// Func End, Address: 0x231a08, Func Offset: 0x28
}

// 
// Start address: 0x231a10
int EvProgGetHorseshoe()
{
	// Line 87, Address: 0x231a10, Func Offset: 0
	// Line 88, Address: 0x231a18, Func Offset: 0x8
	// Line 89, Address: 0x231a28, Func Offset: 0x18
	// Func End, Address: 0x231a38, Func Offset: 0x28
}

// 
// Start address: 0x231a40
int EvProgTabletSetScaffold()
{
	int j;
	int i;
	short comb_use_flag[4][4];
	short alpha_set_flag[4];
	// Line 96, Address: 0x231a40, Func Offset: 0
	// Line 113, Address: 0x231a50, Func Offset: 0x10
	// Line 115, Address: 0x231b04, Func Offset: 0xc4
	// Line 116, Address: 0x231b18, Func Offset: 0xd8
	// Line 117, Address: 0x231b24, Func Offset: 0xe4
	// Line 118, Address: 0x231bac, Func Offset: 0x16c
	// Line 119, Address: 0x231bc8, Func Offset: 0x188
	// Line 120, Address: 0x231bdc, Func Offset: 0x19c
	// Line 121, Address: 0x231be8, Func Offset: 0x1a8
	// Line 122, Address: 0x231c4c, Func Offset: 0x20c
	// Line 123, Address: 0x231c58, Func Offset: 0x218
	// Line 124, Address: 0x231c7c, Func Offset: 0x23c
	// Line 125, Address: 0x231cf0, Func Offset: 0x2b0
	// Line 126, Address: 0x231d04, Func Offset: 0x2c4
	// Line 127, Address: 0x231d6c, Func Offset: 0x32c
	// Line 128, Address: 0x231d70, Func Offset: 0x330
	// Line 129, Address: 0x231d84, Func Offset: 0x344
	// Line 133, Address: 0x231d98, Func Offset: 0x358
	// Line 135, Address: 0x231dbc, Func Offset: 0x37c
	// Line 136, Address: 0x231dcc, Func Offset: 0x38c
	// Line 140, Address: 0x231de0, Func Offset: 0x3a0
	// Line 141, Address: 0x231de8, Func Offset: 0x3a8
	// Line 142, Address: 0x231df8, Func Offset: 0x3b8
	// Line 143, Address: 0x231e10, Func Offset: 0x3d0
	// Line 144, Address: 0x231e2c, Func Offset: 0x3ec
	// Line 145, Address: 0x231e44, Func Offset: 0x404
	// Line 146, Address: 0x231e60, Func Offset: 0x420
	// Line 147, Address: 0x231e78, Func Offset: 0x438
	// Line 148, Address: 0x231e94, Func Offset: 0x454
	// Line 149, Address: 0x231ea8, Func Offset: 0x468
	// Line 152, Address: 0x231eb0, Func Offset: 0x470
	// Line 153, Address: 0x231eb8, Func Offset: 0x478
	// Line 154, Address: 0x231ef0, Func Offset: 0x4b0
	// Line 155, Address: 0x231f04, Func Offset: 0x4c4
	// Line 158, Address: 0x231f0c, Func Offset: 0x4cc
	// Line 159, Address: 0x231f14, Func Offset: 0x4d4
	// Line 162, Address: 0x231f5c, Func Offset: 0x51c
	// Line 163, Address: 0x231f70, Func Offset: 0x530
	// Line 164, Address: 0x231f78, Func Offset: 0x538
	// Line 167, Address: 0x231f8c, Func Offset: 0x54c
	// Line 168, Address: 0x231f9c, Func Offset: 0x55c
	// Line 169, Address: 0x231fb0, Func Offset: 0x570
	// Line 172, Address: 0x231fb8, Func Offset: 0x578
	// Line 173, Address: 0x231fc0, Func Offset: 0x580
	// Line 174, Address: 0x231fd8, Func Offset: 0x598
	// Line 175, Address: 0x231fec, Func Offset: 0x5ac
	// Line 178, Address: 0x231ff4, Func Offset: 0x5b4
	// Line 179, Address: 0x231ffc, Func Offset: 0x5bc
	// Line 180, Address: 0x232018, Func Offset: 0x5d8
	// Line 181, Address: 0x23203c, Func Offset: 0x5fc
	// Line 182, Address: 0x23204c, Func Offset: 0x60c
	// Line 183, Address: 0x232068, Func Offset: 0x628
	// Line 184, Address: 0x232080, Func Offset: 0x640
	// Line 185, Address: 0x232098, Func Offset: 0x658
	// Line 186, Address: 0x2320b4, Func Offset: 0x674
	// Line 187, Address: 0x2320cc, Func Offset: 0x68c
	// Line 188, Address: 0x2320e8, Func Offset: 0x6a8
	// Line 189, Address: 0x2320fc, Func Offset: 0x6bc
	// Line 192, Address: 0x232104, Func Offset: 0x6c4
	// Line 193, Address: 0x23210c, Func Offset: 0x6cc
	// Line 194, Address: 0x232124, Func Offset: 0x6e4
	// Line 195, Address: 0x232138, Func Offset: 0x6f8
	// Line 198, Address: 0x232140, Func Offset: 0x700
	// Line 199, Address: 0x232148, Func Offset: 0x708
	// Line 200, Address: 0x232164, Func Offset: 0x724
	// Line 201, Address: 0x232188, Func Offset: 0x748
	// Line 202, Address: 0x232198, Func Offset: 0x758
	// Line 203, Address: 0x2321b4, Func Offset: 0x774
	// Line 204, Address: 0x2321cc, Func Offset: 0x78c
	// Line 205, Address: 0x232200, Func Offset: 0x7c0
	// Line 206, Address: 0x232214, Func Offset: 0x7d4
	// Line 209, Address: 0x23221c, Func Offset: 0x7dc
	// Line 210, Address: 0x232224, Func Offset: 0x7e4
	// Line 211, Address: 0x23223c, Func Offset: 0x7fc
	// Line 212, Address: 0x232250, Func Offset: 0x810
	// Line 215, Address: 0x232258, Func Offset: 0x818
	// Line 216, Address: 0x232260, Func Offset: 0x820
	// Line 217, Address: 0x23227c, Func Offset: 0x83c
	// Line 218, Address: 0x2322a0, Func Offset: 0x860
	// Line 219, Address: 0x2322b0, Func Offset: 0x870
	// Line 220, Address: 0x2322cc, Func Offset: 0x88c
	// Line 221, Address: 0x2322e4, Func Offset: 0x8a4
	// Line 222, Address: 0x2322f8, Func Offset: 0x8b8
	// Line 225, Address: 0x232300, Func Offset: 0x8c0
	// Line 226, Address: 0x232308, Func Offset: 0x8c8
	// Line 228, Address: 0x232340, Func Offset: 0x900
	// Line 231, Address: 0x232388, Func Offset: 0x948
	// Line 232, Address: 0x2323a0, Func Offset: 0x960
	// Line 233, Address: 0x2323b0, Func Offset: 0x970
	// Line 235, Address: 0x2323c4, Func Offset: 0x984
	// Line 238, Address: 0x2323cc, Func Offset: 0x98c
	// Line 239, Address: 0x2323d4, Func Offset: 0x994
	// Line 240, Address: 0x2323fc, Func Offset: 0x9bc
	// Line 243, Address: 0x232404, Func Offset: 0x9c4
	// Line 244, Address: 0x23241c, Func Offset: 0x9dc
	// Line 245, Address: 0x232430, Func Offset: 0x9f0
	// Line 247, Address: 0x232440, Func Offset: 0xa00
	// Line 267, Address: 0x232444, Func Offset: 0xa04
	// Func End, Address: 0x23245c, Func Offset: 0xa1c
}

// 
// Start address: 0x232460
void EvProgSubDrawTabletAndScaffold()
{
	// Line 272, Address: 0x232460, Func Offset: 0
	// Line 276, Address: 0x232468, Func Offset: 0x8
	// Line 277, Address: 0x232470, Func Offset: 0x10
	// Line 278, Address: 0x232478, Func Offset: 0x18
	// Line 283, Address: 0x2324b8, Func Offset: 0x58
	// Line 302, Address: 0x2324c0, Func Offset: 0x60
	// Line 303, Address: 0x2324c8, Func Offset: 0x68
	// Func End, Address: 0x2324d8, Func Offset: 0x78
}

