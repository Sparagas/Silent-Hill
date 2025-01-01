typedef union fsFileIndex;
typedef struct shBattleFight;
typedef struct _anon0;
typedef union fsFile;
typedef struct PAD_2D;
typedef struct shBattleShot;
typedef struct shSkelton;
typedef struct SubCharacter;
typedef struct PAD_INFO;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct SubObject;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_WALL;
typedef union _anon4;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shPlayerWork;
typedef struct Model_List;
typedef struct _CL_VHIT_CHARA;
typedef struct fsCdFile;
typedef struct _CL_VHIT_RESULT;
typedef union _anon5;
typedef struct _anon6;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct fsMgcFile;
typedef struct _anon7;
typedef struct fsMgfFile;
typedef struct _anon8;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon9;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct _anon10;
typedef struct PAD_3D;

typedef void(*type_6)(SubCharacter*);
typedef void(*type_9)(SubCharacter*);
typedef void(*type_18)();
typedef int(*type_20)();
typedef void(*type_27)(SubCharacter*);
typedef void(*type_28)(SubCharacter*);

typedef unsigned char type_0[4];
typedef _anon1 type_1[80];
typedef fsFileIndex type_2[1];
typedef unsigned char type_3[4];
typedef PAD_INFO type_4[10];
typedef unsigned char type_5[10];
typedef shAttackInfo type_7[46];
typedef float type_8[4];
typedef unsigned char type_10[2];
typedef unsigned char type_11[4];
typedef unsigned char type_12[2];
typedef unsigned int type_13[256];
typedef unsigned int type_14[32];
typedef unsigned char type_15[4];
typedef char type_16[4];
typedef char type_17[4];
typedef unsigned char type_19[4];
typedef fsFileIndex type_21[1];
typedef unsigned char type_22[10];
typedef fsFileIndex type_23[1];
typedef unsigned char type_24[2];
typedef float type_25[4];
typedef int(*type_26)()[11];
typedef unsigned char type_29[888];
typedef unsigned char type_30[13];
typedef float type_31[4];
typedef float type_32[4][4];
typedef unsigned char type_33[34];
typedef float type_34[4][2];

union fsFileIndex
{
	_anon0 index;
	unsigned long pack;
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
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

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon9 src_m;
	_anon7 src_t;
	_anon9 des_m;
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
	_anon9 mat;
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

struct _anon1
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
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

struct _anon3
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
};

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon4 hit_check;
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

union _anon4
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

struct Model_List
{
	short kind;
	short id;
	short flag_off;
	short flag_on;
	float pos[4];
	float rot[4];
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

union _anon5
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
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

struct _anon7
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

struct _anon8
{
	_anon1* ev_list;
	unsigned char* ev_pos;
	int(*ev_prog)();
	_anon3* gi_list;
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

struct _anon9
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
unsigned char ev_pos[888];
_anon1 ev_list[80];
int(*ev_prog)()[11];
_anon8 stage_hotel_1f_f;
fsFileIndex data_pic_map_hotelmap1f01_tex[1];
fsFileIndex data_pic_map_hotelmap1f02_tex[1];
fsFileIndex data_pic_hsp_p_boxnumber_tex[1];
_anon2 game_flag;
shPlayerWork sh2jms;
int ev_s_step;
int ev_p_step;

int EvProgGetHotelGuestMap();
int EvProgGetHotelEmployeeMap();
int EvProgGetHotel312Key();
int EvProgReadReceptionMemo();
int EvProgOrgel();
int EvProgGetHotelStairKey();
int EvProgGetVideoTape();
int EvProgGetSnowWhite();
int EvProgGetFishKey();
int EvProgLauraPlayPiano();

// 
// Start address: 0x22df00
int EvProgGetHotelGuestMap()
{
	// Line 87, Address: 0x22df00, Func Offset: 0
	// Line 89, Address: 0x22df08, Func Offset: 0x8
	// Line 91, Address: 0x22df1c, Func Offset: 0x1c
	// Func End, Address: 0x22df2c, Func Offset: 0x2c
}

// 
// Start address: 0x22df30
int EvProgGetHotelEmployeeMap()
{
	// Line 97, Address: 0x22df30, Func Offset: 0
	// Line 98, Address: 0x22df38, Func Offset: 0x8
	// Line 100, Address: 0x22df4c, Func Offset: 0x1c
	// Func End, Address: 0x22df5c, Func Offset: 0x2c
}

// 
// Start address: 0x22df60
int EvProgGetHotel312Key()
{
	// Line 106, Address: 0x22df60, Func Offset: 0
	// Line 107, Address: 0x22df68, Func Offset: 0x8
	// Line 109, Address: 0x22df78, Func Offset: 0x18
	// Func End, Address: 0x22df88, Func Offset: 0x28
}

// 
// Start address: 0x22df90
int EvProgReadReceptionMemo()
{
	// Line 115, Address: 0x22df90, Func Offset: 0
	// Line 116, Address: 0x22df98, Func Offset: 0x8
	// Line 118, Address: 0x22dfac, Func Offset: 0x1c
	// Func End, Address: 0x22dfbc, Func Offset: 0x2c
}

// 
// Start address: 0x22dfc0
int EvProgOrgel()
{
	// Line 128, Address: 0x22dfc0, Func Offset: 0
	// Line 129, Address: 0x22dfc8, Func Offset: 0x8
	// Line 131, Address: 0x22e064, Func Offset: 0xa4
	// Line 132, Address: 0x22e078, Func Offset: 0xb8
	// Line 133, Address: 0x22e084, Func Offset: 0xc4
	// Line 134, Address: 0x22e09c, Func Offset: 0xdc
	// Line 135, Address: 0x22e0b4, Func Offset: 0xf4
	// Line 136, Address: 0x22e0d0, Func Offset: 0x110
	// Line 137, Address: 0x22e0e8, Func Offset: 0x128
	// Line 138, Address: 0x22e104, Func Offset: 0x144
	// Line 139, Address: 0x22e11c, Func Offset: 0x15c
	// Line 140, Address: 0x22e138, Func Offset: 0x178
	// Line 141, Address: 0x22e14c, Func Offset: 0x18c
	// Line 142, Address: 0x22e16c, Func Offset: 0x1ac
	// Line 143, Address: 0x22e184, Func Offset: 0x1c4
	// Line 144, Address: 0x22e1a0, Func Offset: 0x1e0
	// Line 145, Address: 0x22e1b8, Func Offset: 0x1f8
	// Line 146, Address: 0x22e1d4, Func Offset: 0x214
	// Line 147, Address: 0x22e1ec, Func Offset: 0x22c
	// Line 148, Address: 0x22e208, Func Offset: 0x248
	// Line 149, Address: 0x22e21c, Func Offset: 0x25c
	// Line 150, Address: 0x22e23c, Func Offset: 0x27c
	// Line 151, Address: 0x22e254, Func Offset: 0x294
	// Line 152, Address: 0x22e270, Func Offset: 0x2b0
	// Line 153, Address: 0x22e288, Func Offset: 0x2c8
	// Line 154, Address: 0x22e2a4, Func Offset: 0x2e4
	// Line 155, Address: 0x22e2bc, Func Offset: 0x2fc
	// Line 156, Address: 0x22e2d8, Func Offset: 0x318
	// Line 157, Address: 0x22e2ec, Func Offset: 0x32c
	// Line 158, Address: 0x22e2f4, Func Offset: 0x334
	// Line 161, Address: 0x22e33c, Func Offset: 0x37c
	// Line 162, Address: 0x22e350, Func Offset: 0x390
	// Line 165, Address: 0x22e398, Func Offset: 0x3d8
	// Line 166, Address: 0x22e3b0, Func Offset: 0x3f0
	// Line 169, Address: 0x22e3f8, Func Offset: 0x438
	// Line 171, Address: 0x22e40c, Func Offset: 0x44c
	// Line 174, Address: 0x22e414, Func Offset: 0x454
	// Line 175, Address: 0x22e43c, Func Offset: 0x47c
	// Line 178, Address: 0x22e444, Func Offset: 0x484
	// Line 179, Address: 0x22e46c, Func Offset: 0x4ac
	// Line 182, Address: 0x22e474, Func Offset: 0x4b4
	// Line 183, Address: 0x22e49c, Func Offset: 0x4dc
	// Line 186, Address: 0x22e4a4, Func Offset: 0x4e4
	// Line 187, Address: 0x22e4b8, Func Offset: 0x4f8
	// Line 188, Address: 0x22e4c8, Func Offset: 0x508
	// Line 189, Address: 0x22e4e0, Func Offset: 0x520
	// Line 190, Address: 0x22e4fc, Func Offset: 0x53c
	// Line 192, Address: 0x22e518, Func Offset: 0x558
	// Line 193, Address: 0x22e530, Func Offset: 0x570
	// Line 194, Address: 0x22e54c, Func Offset: 0x58c
	// Line 196, Address: 0x22e568, Func Offset: 0x5a8
	// Line 197, Address: 0x22e580, Func Offset: 0x5c0
	// Line 198, Address: 0x22e59c, Func Offset: 0x5dc
	// Line 200, Address: 0x22e5b8, Func Offset: 0x5f8
	// Line 201, Address: 0x22e5c4, Func Offset: 0x604
	// Line 202, Address: 0x22e5d8, Func Offset: 0x618
	// Line 203, Address: 0x22e5f4, Func Offset: 0x634
	// Line 206, Address: 0x22e5fc, Func Offset: 0x63c
	// Line 207, Address: 0x22e610, Func Offset: 0x650
	// Line 208, Address: 0x22e620, Func Offset: 0x660
	// Line 209, Address: 0x22e638, Func Offset: 0x678
	// Line 210, Address: 0x22e654, Func Offset: 0x694
	// Line 212, Address: 0x22e670, Func Offset: 0x6b0
	// Line 213, Address: 0x22e688, Func Offset: 0x6c8
	// Line 214, Address: 0x22e6a4, Func Offset: 0x6e4
	// Line 216, Address: 0x22e6c0, Func Offset: 0x700
	// Line 217, Address: 0x22e6d8, Func Offset: 0x718
	// Line 218, Address: 0x22e6f4, Func Offset: 0x734
	// Line 220, Address: 0x22e710, Func Offset: 0x750
	// Line 221, Address: 0x22e71c, Func Offset: 0x75c
	// Line 222, Address: 0x22e730, Func Offset: 0x770
	// Line 223, Address: 0x22e74c, Func Offset: 0x78c
	// Line 226, Address: 0x22e754, Func Offset: 0x794
	// Line 227, Address: 0x22e768, Func Offset: 0x7a8
	// Line 228, Address: 0x22e778, Func Offset: 0x7b8
	// Line 229, Address: 0x22e790, Func Offset: 0x7d0
	// Line 230, Address: 0x22e7ac, Func Offset: 0x7ec
	// Line 232, Address: 0x22e7c8, Func Offset: 0x808
	// Line 233, Address: 0x22e7e0, Func Offset: 0x820
	// Line 234, Address: 0x22e7fc, Func Offset: 0x83c
	// Line 236, Address: 0x22e818, Func Offset: 0x858
	// Line 237, Address: 0x22e830, Func Offset: 0x870
	// Line 238, Address: 0x22e84c, Func Offset: 0x88c
	// Line 240, Address: 0x22e868, Func Offset: 0x8a8
	// Line 241, Address: 0x22e874, Func Offset: 0x8b4
	// Line 242, Address: 0x22e888, Func Offset: 0x8c8
	// Line 243, Address: 0x22e8a4, Func Offset: 0x8e4
	// Line 246, Address: 0x22e8ac, Func Offset: 0x8ec
	// Line 247, Address: 0x22e8c4, Func Offset: 0x904
	// Line 248, Address: 0x22e8dc, Func Offset: 0x91c
	// Line 249, Address: 0x22e8f4, Func Offset: 0x934
	// Line 250, Address: 0x22e90c, Func Offset: 0x94c
	// Line 252, Address: 0x22e924, Func Offset: 0x964
	// Line 253, Address: 0x22e93c, Func Offset: 0x97c
	// Line 254, Address: 0x22e954, Func Offset: 0x994
	// Line 255, Address: 0x22e96c, Func Offset: 0x9ac
	// Line 257, Address: 0x22e984, Func Offset: 0x9c4
	// Line 258, Address: 0x22e99c, Func Offset: 0x9dc
	// Line 259, Address: 0x22e9b4, Func Offset: 0x9f4
	// Line 260, Address: 0x22e9cc, Func Offset: 0xa0c
	// Line 262, Address: 0x22e9e4, Func Offset: 0xa24
	// Line 263, Address: 0x22e9f8, Func Offset: 0xa38
	// Line 266, Address: 0x22ea00, Func Offset: 0xa40
	// Line 268, Address: 0x22ea18, Func Offset: 0xa58
	// Line 269, Address: 0x22ea30, Func Offset: 0xa70
	// Line 270, Address: 0x22ea48, Func Offset: 0xa88
	// Line 271, Address: 0x22ea60, Func Offset: 0xaa0
	// Line 273, Address: 0x22ea78, Func Offset: 0xab8
	// Line 274, Address: 0x22ea90, Func Offset: 0xad0
	// Line 275, Address: 0x22eaa8, Func Offset: 0xae8
	// Line 276, Address: 0x22eac0, Func Offset: 0xb00
	// Line 278, Address: 0x22ead8, Func Offset: 0xb18
	// Line 279, Address: 0x22eaf0, Func Offset: 0xb30
	// Line 280, Address: 0x22eb0c, Func Offset: 0xb4c
	// Line 281, Address: 0x22eb24, Func Offset: 0xb64
	// Line 283, Address: 0x22eb3c, Func Offset: 0xb7c
	// Line 284, Address: 0x22eb50, Func Offset: 0xb90
	// Line 287, Address: 0x22eb58, Func Offset: 0xb98
	// Line 288, Address: 0x22eb70, Func Offset: 0xbb0
	// Line 289, Address: 0x22eb88, Func Offset: 0xbc8
	// Line 290, Address: 0x22eba0, Func Offset: 0xbe0
	// Line 291, Address: 0x22ebb8, Func Offset: 0xbf8
	// Line 293, Address: 0x22ebd0, Func Offset: 0xc10
	// Line 294, Address: 0x22ebe8, Func Offset: 0xc28
	// Line 295, Address: 0x22ec00, Func Offset: 0xc40
	// Line 296, Address: 0x22ec18, Func Offset: 0xc58
	// Line 298, Address: 0x22ec30, Func Offset: 0xc70
	// Line 299, Address: 0x22ec48, Func Offset: 0xc88
	// Line 300, Address: 0x22ec64, Func Offset: 0xca4
	// Line 301, Address: 0x22ec7c, Func Offset: 0xcbc
	// Line 303, Address: 0x22ec94, Func Offset: 0xcd4
	// Line 304, Address: 0x22eca8, Func Offset: 0xce8
	// Line 307, Address: 0x22ecb0, Func Offset: 0xcf0
	// Line 308, Address: 0x22ecc4, Func Offset: 0xd04
	// Line 309, Address: 0x22ecd4, Func Offset: 0xd14
	// Line 310, Address: 0x22ece8, Func Offset: 0xd28
	// Line 313, Address: 0x22ecf0, Func Offset: 0xd30
	// Line 314, Address: 0x22ed04, Func Offset: 0xd44
	// Line 315, Address: 0x22ed1c, Func Offset: 0xd5c
	// Line 316, Address: 0x22ed34, Func Offset: 0xd74
	// Line 317, Address: 0x22ed4c, Func Offset: 0xd8c
	// Line 319, Address: 0x22ed58, Func Offset: 0xd98
	// Line 320, Address: 0x22ed5c, Func Offset: 0xd9c
	// Func End, Address: 0x22ed6c, Func Offset: 0xdac
}

// 
// Start address: 0x22ed70
int EvProgGetHotelStairKey()
{
	// Line 326, Address: 0x22ed70, Func Offset: 0
	// Line 327, Address: 0x22ed78, Func Offset: 0x8
	// Line 329, Address: 0x22ed88, Func Offset: 0x18
	// Func End, Address: 0x22ed98, Func Offset: 0x28
}

// 
// Start address: 0x22eda0
int EvProgGetVideoTape()
{
	// Line 335, Address: 0x22eda0, Func Offset: 0
	// Line 336, Address: 0x22eda8, Func Offset: 0x8
	// Line 337, Address: 0x22edc0, Func Offset: 0x20
	// Line 338, Address: 0x22edcc, Func Offset: 0x2c
	// Line 339, Address: 0x22edd8, Func Offset: 0x38
	// Line 340, Address: 0x22eddc, Func Offset: 0x3c
	// Func End, Address: 0x22edec, Func Offset: 0x4c
}

// 
// Start address: 0x22edf0
int EvProgGetSnowWhite()
{
	// Line 346, Address: 0x22edf0, Func Offset: 0
	// Line 347, Address: 0x22edf8, Func Offset: 0x8
	// Line 348, Address: 0x22ee08, Func Offset: 0x18
	// Func End, Address: 0x22ee18, Func Offset: 0x28
}

// 
// Start address: 0x22ee20
int EvProgGetFishKey()
{
	// Line 354, Address: 0x22ee20, Func Offset: 0
	// Line 355, Address: 0x22ee28, Func Offset: 0x8
	// Line 356, Address: 0x22ee38, Func Offset: 0x18
	// Func End, Address: 0x22ee48, Func Offset: 0x28
}

// 
// Start address: 0x22ee50
int EvProgLauraPlayPiano()
{
	// Line 363, Address: 0x22ee50, Func Offset: 0
	// Line 364, Address: 0x22ee54, Func Offset: 0x4
	// Func End, Address: 0x22ee5c, Func Offset: 0xc
}

