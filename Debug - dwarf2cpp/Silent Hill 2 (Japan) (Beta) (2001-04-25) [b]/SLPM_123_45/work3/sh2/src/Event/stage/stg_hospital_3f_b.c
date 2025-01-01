typedef struct SubCharacter;
typedef struct shAttackInfo;
typedef struct Pad_KeyConfig;
typedef struct _anon0;
typedef struct _CL_VHIT_WALL;
typedef union _anon1;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shPlayerWork;
typedef struct _anon2;
typedef struct _anon3;
typedef union fsFile;
typedef struct _CL_VHIT_CHARA;
typedef struct fsCdFile;
typedef struct _CL_VHIT_RESULT;
typedef union _anon4;
typedef struct SubObject;
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
typedef struct sh2gfw_AREA_HEAD;
typedef struct PAD_3D;
typedef struct _anon9;
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
typedef int(*type_10)();
typedef void(*type_12)(SubCharacter*);
typedef void(*type_15)(SubCharacter*);
typedef void(*type_28)(SubCharacter*);
typedef void(*type_30)(SubCharacter*);

typedef fsFileIndex type_0[1];
typedef unsigned char type_1[3];
typedef _anon0 type_2[40];
typedef unsigned char type_3[10];
typedef unsigned int type_4[256];
typedef unsigned int type_5[32];
typedef unsigned char type_6[4];
typedef char type_7[4];
typedef char type_9[4];
typedef unsigned char type_11[2];
typedef unsigned char type_13[4];
typedef char type_14[0];
typedef float type_16[4];
typedef unsigned char type_17[13];
typedef Model_List type_18[3];
typedef unsigned char type_19[34];
typedef float type_20[4][2];
typedef float type_21[4];
typedef float type_22[4][4];
typedef unsigned char type_23[4];
typedef unsigned char type_24[442];
typedef unsigned char type_25[4];
typedef PAD_INFO type_26[10];
typedef unsigned char type_27[10];
typedef shAttackInfo type_29[46];
typedef unsigned char type_31[4];
typedef unsigned char type_32[2];
typedef unsigned char type_33[2];
typedef fsFileIndex type_34[1];
typedef int(*type_35)()[4];
typedef unsigned short type_36[0];
typedef float type_37[4];

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

struct _anon9
{
	float d[4][4];
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
unsigned char ev_pos[442];
_anon0 ev_list[40];
int(*ev_prog)()[4];
Model_List mdl_list[3];
_anon7 stage_hospital_3f_b;
float copper_alpha;
float lead_alpha;
_anon2 game_flag;
shPlayerWork sh2jms;
int ev_s_step;
int ev_p_step;
Pad_KeyConfig key_config;
float dtf;
fsFileIndex data_pic_hsp_p_female_ring_tex[1];
fsFileIndex data_pic_hsp_p_female_tex[1];
int ev_cancel;
unsigned short msg_station[0];
char pic_buf_1[0];

int EvProgPictureOfAngel();
void EvSubAngelRingDraw();
int EvProgAngelNoOneKnows();
int EvProgTryQuizAnswer();

// 
// Start address: 0x226b80
int EvProgPictureOfAngel()
{
	float door_pos[4];
	// Line 91, Address: 0x226b80, Func Offset: 0
	// Line 94, Address: 0x226b88, Func Offset: 0x8
	// Line 100, Address: 0x226bf8, Func Offset: 0x78
	// Line 101, Address: 0x226c00, Func Offset: 0x80
	// Line 102, Address: 0x226c08, Func Offset: 0x88
	// Line 103, Address: 0x226c10, Func Offset: 0x90
	// Line 104, Address: 0x226c18, Func Offset: 0x98
	// Line 109, Address: 0x226c20, Func Offset: 0xa0
	// Line 110, Address: 0x226c28, Func Offset: 0xa8
	// Line 111, Address: 0x226c30, Func Offset: 0xb0
	// Line 112, Address: 0x226c38, Func Offset: 0xb8
	// Line 113, Address: 0x226c40, Func Offset: 0xc0
	// Line 117, Address: 0x226c48, Func Offset: 0xc8
	// Line 119, Address: 0x226ce4, Func Offset: 0x164
	// Line 120, Address: 0x226cf8, Func Offset: 0x178
	// Line 121, Address: 0x226d28, Func Offset: 0x1a8
	// Line 122, Address: 0x226d34, Func Offset: 0x1b4
	// Line 123, Address: 0x226d64, Func Offset: 0x1e4
	// Line 124, Address: 0x226d70, Func Offset: 0x1f0
	// Line 126, Address: 0x226da0, Func Offset: 0x220
	// Line 127, Address: 0x226db4, Func Offset: 0x234
	// Line 128, Address: 0x226dbc, Func Offset: 0x23c
	// Line 129, Address: 0x226dd0, Func Offset: 0x250
	// Line 130, Address: 0x226de4, Func Offset: 0x264
	// Line 131, Address: 0x226e04, Func Offset: 0x284
	// Line 133, Address: 0x226e18, Func Offset: 0x298
	// Line 136, Address: 0x226e20, Func Offset: 0x2a0
	// Line 137, Address: 0x226e44, Func Offset: 0x2c4
	// Line 138, Address: 0x226e4c, Func Offset: 0x2cc
	// Line 139, Address: 0x226e78, Func Offset: 0x2f8
	// Line 140, Address: 0x226e8c, Func Offset: 0x30c
	// Line 143, Address: 0x226e94, Func Offset: 0x314
	// Line 146, Address: 0x226ebc, Func Offset: 0x33c
	// Line 147, Address: 0x226ecc, Func Offset: 0x34c
	// Line 148, Address: 0x226ee0, Func Offset: 0x360
	// Line 151, Address: 0x226ee8, Func Offset: 0x368
	// Line 152, Address: 0x226ef8, Func Offset: 0x378
	// Line 153, Address: 0x226f2c, Func Offset: 0x3ac
	// Line 154, Address: 0x226f44, Func Offset: 0x3c4
	// Line 155, Address: 0x226f60, Func Offset: 0x3e0
	// Line 156, Address: 0x226f74, Func Offset: 0x3f4
	// Line 159, Address: 0x226f7c, Func Offset: 0x3fc
	// Line 160, Address: 0x226f94, Func Offset: 0x414
	// Line 161, Address: 0x226fa8, Func Offset: 0x428
	// Line 163, Address: 0x226fbc, Func Offset: 0x43c
	// Line 166, Address: 0x226fc4, Func Offset: 0x444
	// Line 167, Address: 0x226fe0, Func Offset: 0x460
	// Line 168, Address: 0x227004, Func Offset: 0x484
	// Line 169, Address: 0x227014, Func Offset: 0x494
	// Line 170, Address: 0x227048, Func Offset: 0x4c8
	// Line 171, Address: 0x22705c, Func Offset: 0x4dc
	// Line 174, Address: 0x227064, Func Offset: 0x4e4
	// Line 175, Address: 0x22707c, Func Offset: 0x4fc
	// Line 176, Address: 0x227094, Func Offset: 0x514
	// Line 178, Address: 0x2270a8, Func Offset: 0x528
	// Line 181, Address: 0x2270b0, Func Offset: 0x530
	// Line 182, Address: 0x2270cc, Func Offset: 0x54c
	// Line 183, Address: 0x2270f0, Func Offset: 0x570
	// Line 184, Address: 0x227100, Func Offset: 0x580
	// Line 185, Address: 0x227114, Func Offset: 0x594
	// Line 188, Address: 0x22711c, Func Offset: 0x59c
	// Line 190, Address: 0x227154, Func Offset: 0x5d4
	// Line 192, Address: 0x227184, Func Offset: 0x604
	// Line 193, Address: 0x227194, Func Offset: 0x614
	// Line 194, Address: 0x2271a8, Func Offset: 0x628
	// Line 195, Address: 0x2271c4, Func Offset: 0x644
	// Line 198, Address: 0x2271cc, Func Offset: 0x64c
	// Line 199, Address: 0x2271e0, Func Offset: 0x660
	// Line 200, Address: 0x2271f0, Func Offset: 0x670
	// Line 201, Address: 0x227204, Func Offset: 0x684
	// Line 204, Address: 0x22720c, Func Offset: 0x68c
	// Line 205, Address: 0x227230, Func Offset: 0x6b0
	// Line 208, Address: 0x227238, Func Offset: 0x6b8
	// Line 209, Address: 0x22724c, Func Offset: 0x6cc
	// Line 210, Address: 0x227268, Func Offset: 0x6e8
	// Line 211, Address: 0x227284, Func Offset: 0x704
	// Line 214, Address: 0x227290, Func Offset: 0x710
	// Line 215, Address: 0x227294, Func Offset: 0x714
	// Func End, Address: 0x2272a4, Func Offset: 0x724
}

// 
// Start address: 0x2272b0
void EvSubAngelRingDraw()
{
	PicDraw_Data pic;
	// Line 220, Address: 0x2272b0, Func Offset: 0
	// Line 223, Address: 0x2272b8, Func Offset: 0x8
	// Line 225, Address: 0x2272d4, Func Offset: 0x24
	// Line 227, Address: 0x2272e4, Func Offset: 0x34
	// Line 229, Address: 0x22730c, Func Offset: 0x5c
	// Line 230, Address: 0x22732c, Func Offset: 0x7c
	// Line 231, Address: 0x227358, Func Offset: 0xa8
	// Line 232, Address: 0x22737c, Func Offset: 0xcc
	// Line 234, Address: 0x227384, Func Offset: 0xd4
	// Line 235, Address: 0x2273d8, Func Offset: 0x128
	// Line 238, Address: 0x2273e4, Func Offset: 0x134
	// Line 239, Address: 0x227404, Func Offset: 0x154
	// Line 240, Address: 0x227430, Func Offset: 0x180
	// Line 241, Address: 0x227458, Func Offset: 0x1a8
	// Line 243, Address: 0x227460, Func Offset: 0x1b0
	// Line 244, Address: 0x2274b4, Func Offset: 0x204
	// Line 246, Address: 0x2274c0, Func Offset: 0x210
	// Func End, Address: 0x2274d0, Func Offset: 0x220
}

// 
// Start address: 0x2274d0
int EvProgAngelNoOneKnows()
{
	// Line 252, Address: 0x2274d0, Func Offset: 0
	// Line 253, Address: 0x2274d8, Func Offset: 0x8
	// Line 255, Address: 0x227520, Func Offset: 0x50
	// Line 256, Address: 0x227534, Func Offset: 0x64
	// Line 257, Address: 0x227540, Func Offset: 0x70
	// Line 261, Address: 0x227554, Func Offset: 0x84
	// Line 262, Address: 0x227564, Func Offset: 0x94
	// Line 263, Address: 0x227574, Func Offset: 0xa4
	// Line 267, Address: 0x227588, Func Offset: 0xb8
	// Line 268, Address: 0x2275a0, Func Offset: 0xd0
	// Line 269, Address: 0x2275b4, Func Offset: 0xe4
	// Line 270, Address: 0x2275bc, Func Offset: 0xec
	// Line 272, Address: 0x2275d0, Func Offset: 0x100
	// Line 273, Address: 0x2275e0, Func Offset: 0x110
	// Line 277, Address: 0x2275f4, Func Offset: 0x124
	// Line 278, Address: 0x22760c, Func Offset: 0x13c
	// Line 282, Address: 0x227620, Func Offset: 0x150
	// Line 283, Address: 0x227634, Func Offset: 0x164
	// Line 285, Address: 0x227640, Func Offset: 0x170
	// Line 286, Address: 0x227644, Func Offset: 0x174
	// Func End, Address: 0x227654, Func Offset: 0x184
}

// 
// Start address: 0x227660
int EvProgTryQuizAnswer()
{
	// Line 293, Address: 0x227660, Func Offset: 0
	// Line 294, Address: 0x227664, Func Offset: 0x4
	// Func End, Address: 0x22766c, Func Offset: 0xc
}

