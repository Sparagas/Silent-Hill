typedef struct shPlayerWork;
typedef struct _CL_HITPOLY_HEAD;
typedef struct SubCharacter;
typedef struct PicDraw_Data;
typedef struct shAttackInfo;
typedef struct sh2gfw_AREA_HEAD;
typedef struct Chizu_MarkerList;
typedef struct _CL_VHIT_CHARA;
typedef struct Chizu_MarkerTex;
typedef union _anon0;
typedef struct _CL_VHIT_RESULT;
typedef union _anon1;
typedef struct Pad_KeyConfig;
typedef struct _anon2;
typedef union fsFileIndex;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct shSkelton;
typedef struct Chizu_ConnectInfo;
typedef union fsFile;
typedef struct fsCdFile;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct fsMgcFile;
typedef struct _anon3;
typedef struct fsMgfFile;
typedef struct PAD_3D;
typedef struct fsHdFile;
typedef struct _SH2_SYS;
typedef struct PAD_2D;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct fsMgpFile;
typedef struct PAD_INFO;
typedef struct shBattleFight;
typedef struct _anon4;
typedef struct _anon5;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct Chizu_CurrentBlock;
typedef struct shBattleInfo;
typedef struct _anon6;
typedef struct _CL_VHIT_WALL;

typedef void(*type_36)(SubCharacter*);
typedef void(*type_41)(SubCharacter*);

typedef unsigned char type_0[2];
typedef unsigned int type_1[71];
typedef Chizu_MarkerTex type_2[23];
typedef unsigned char type_3[2];
typedef unsigned int type_4[27];
typedef Chizu_MarkerList* type_5[2];
typedef Chizu_MarkerTex type_6[39];
typedef unsigned int type_7[7];
typedef unsigned int type_8[21];
typedef Chizu_MarkerTex type_9[13];
typedef unsigned int type_10[2];
typedef unsigned int type_11[20];
typedef unsigned int type_12[7];
typedef unsigned char type_13[4];
typedef unsigned char type_14[4][4];
typedef unsigned char type_15[20];
typedef fsFileIndex* type_16[36];
typedef unsigned int type_17[11];
typedef fsFileIndex* type_18[36];
typedef shAttackInfo type_19[66];
typedef unsigned int type_20[3];
typedef unsigned int type_21[16];
typedef float type_22[2];
typedef float type_23[2][4];
typedef unsigned char type_24[3];
typedef Chizu_MarkerTex type_25[23];
typedef unsigned int type_26[17];
typedef float type_27[4];
typedef unsigned int type_28[46];
typedef unsigned int type_29[24];
typedef Chizu_ConnectInfo type_30[36];
typedef unsigned int type_31[31];
typedef unsigned int type_32[22];
typedef float type_33[4][2];
typedef unsigned char type_34[2];
typedef int type_35[6];
typedef float type_37[4];
typedef Chizu_MarkerTex type_38[15];
typedef float type_39[4][4];
typedef unsigned char type_40[14];
typedef Chizu_MarkerTex type_42[17];
typedef Chizu_MarkerList type_43[36];
typedef unsigned char type_44[4];
typedef unsigned int type_45[9];
typedef unsigned int type_46[17];
typedef unsigned int type_47[8];
typedef unsigned char type_48[69];
typedef float type_49[4];
typedef unsigned int type_50[45];
typedef unsigned int type_51[20];
typedef unsigned int type_52[32];
typedef char type_53[0];
typedef unsigned int type_54[24];
typedef unsigned int type_55[23];
typedef unsigned int type_56[255];
typedef PAD_INFO type_57[10];
typedef short type_58[4];
typedef short type_59[4][2];
typedef unsigned short type_60[0];
typedef unsigned int type_61[20];
typedef unsigned int type_62[32];
typedef unsigned char type_63[4];
typedef unsigned int type_64[50];
typedef char type_65[4];
typedef unsigned int type_66[10];
typedef char type_67[4];
typedef float type_68[2];
typedef char type_69[4];
typedef unsigned int type_70[35];
typedef unsigned int type_71[72];
typedef char type_72[4];
typedef unsigned char type_73[14];
typedef unsigned char type_74[4];
typedef char type_75[4];
typedef unsigned char type_76[4];
typedef float type_77[2];
typedef float type_78[2][4];
typedef float type_79[2][4][2];
typedef Chizu_CurrentBlock type_80[190];
typedef unsigned int type_81[4];
typedef Chizu_MarkerTex type_82[13];
typedef unsigned int type_83[9];
typedef unsigned int type_84[20];
typedef unsigned char type_85[97];

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
	unsigned char reserve0;
	unsigned char step;
	unsigned char sub_step;
	unsigned short timer;
	unsigned short timer2;
	unsigned int allbody_now;
	_JAMES_UPPER_STATUS upper_now;
	_JAMES_LOWER_STATUS lower_now;
	unsigned int allbody_prev;
	_JAMES_UPPER_STATUS upper_prev;
	_JAMES_LOWER_STATUS lower_prev;
	unsigned char event_status_now;
	unsigned char event_status_prev;
	unsigned char event_move_mode;
	unsigned char reserve1;
	unsigned int upper_st_flg;
	unsigned int lower_st_flg;
	unsigned int u_anime_st_flg;
	unsigned int l_anime_st_flg;
	unsigned int anime_pause;
	unsigned int act_with_wep;
	float light_vec_inner_rate;
	float light_pos_revise[4];
	float light_vec_revise[4];
	float light_pos[4];
	float light_vec[4];
	float light_pos_revise_reverse[4];
	float light_vec_revise_reverse[4];
	float light_pos_reverse[4];
	float light_vec_reverse[4];
	float light_vec_neck[4];
	int room_name_prev;
	int room_name_now;
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
	unsigned char wep_no_hit_floor;
	unsigned char efct_upper;
	unsigned char light_reverse;
	unsigned char water_road;
	PAD_INFO pad[10];
	float rstick_x;
	float rstick_y;
	float lstick_x;
	float lstick_y;
	float lstick_p;
	float cam_rot_y[2];
	unsigned char now_cam_no;
	unsigned char cam_chg_flg;
	unsigned char ctrl_unit;
	unsigned char ctrl_inputing;
	unsigned char se_upper[4];
	unsigned char se_foot[4];
	float csaw_se_vol;
	unsigned char csaw_se_flg;
	unsigned char d_shock;
	unsigned char reserve2;
	unsigned char strike_splash_flg;
	int event_anime;
	_anon2 tgt_body_angle;
	_anon2 tgt_neck_angle;
	_anon2 tgt_arms_angle;
	unsigned char hold_chg[2];
	unsigned char hold_loop[2];
	unsigned char motion_no;
	unsigned char shotgun_dir;
	unsigned char shotgun_prev;
	unsigned char guard_check;
	int parts_light;
	int parts_rhand;
	int parts_lhand;
	SubCharacter* target;
	SubCharacter* look_tgt;
	float non_input;
	float hugging_gauge;
	float running_time;
	float muteki_time;
	float hp;
	float hp_max;
	float hp_recover;
	float shock;
	float spray_time;
	int tired;
	int tired_max;
	int spirit;
	SubCharacter* enemy_liedown;
	unsigned char enemy_around;
	unsigned char enemy_atk_area;
	unsigned char enemy_near;
	unsigned char lock_on;
	unsigned char running;
	unsigned char cannot_run;
	unsigned char fall_type;
	unsigned char reload;
	unsigned char weapon;
	unsigned char shoot_val;
	unsigned char reload_val;
	unsigned char atk_type;
	unsigned char atk_reserve[2];
	unsigned char attack_ok;
	char hold_type;
	unsigned char dead;
	unsigned char no_damage;
	unsigned char atk_count;
	unsigned char hug_status;
	unsigned char hug_dir;
	unsigned char se_on;
	unsigned char spray_set;
	char spray_pow;
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

struct SubCharacter
{
	int index;
	unsigned int status;
	unsigned int sub_status;
	unsigned int sub_st;
	short kind;
	short id;
	unsigned int step;
	unsigned int model_type;
	_anon2 pos;
	_anon2 rot;
	_anon2 pos_spd;
	_anon2 rot_spd;
	_anon3 mat;
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

struct sh2gfw_AREA_HEAD
{
	unsigned int area_id;
	unsigned int toGlobalTexHead;
	unsigned int toGlobalClutsHead;
	unsigned int date;
};

struct Chizu_MarkerList
{
	Chizu_MarkerTex* tex;
	int* data;
	int head;
	int tail;
};

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

struct Chizu_MarkerTex
{
	short u0;
	short v0;
	short u1;
	short v1;
};

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
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
	int padding[6];
};

struct _anon2
{
	float x;
	float y;
	float z;
	float w;
};

union fsFileIndex
{
	_anon6 index;
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
	JMS_ST_L_GUARD,
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

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon3 src_m;
	_anon2 src_t;
	_anon3 des_m;
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

struct Chizu_ConnectInfo
{
	char up;
	char down;
	char right;
	char left;
};

union fsFile
{
	_anon4 check;
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

struct _anon3
{
	float d[4][4];
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

struct PAD_3D
{
	char round_way;
	unsigned char reserved1;
	unsigned char lslide;
	unsigned char rslide;
	unsigned char lturn180;
	unsigned char rturn180;
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

struct _SH2_SYS
{
	unsigned int step[8];
	unsigned int pre_playable;
	int main_status;
	unsigned int soft_reset;
	unsigned int frame_cnt;
};

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
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
	JMS_ST_U_GUARD,
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct _anon4
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

struct _anon5
{
	unsigned int flag[255];
	float time_deai;
	unsigned int enemy[32];
	unsigned char safe[4];
	char rotate[4];
	char guruguru[4];
	char cylinder[4];
	unsigned short clock;
	unsigned short carbon;
	char runaway[4];
	unsigned short hanging;
	short pad;
	char trunk[4];
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
	float dead_timer;
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
	unsigned char se;
};

struct _anon6
{
	fsFile* fp;
	char* name;
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
Chizu_CurrentBlock chz_crt_block[190];
Chizu_ConnectInfo chz_connect[36];
Chizu_MarkerTex chz_mrk_tex_hsp[13];
unsigned int chz_mrk_dat_hospitalb1f[45];
unsigned int chz_mrk_dat_hospital23rf[71];
unsigned int chz_mrk_dat_hospitalb1b[46];
unsigned int chz_mrk_dat_hospital23rb[50];
Chizu_MarkerTex chz_mrk_tex_apt[39];
unsigned int chz_mrk_dat_apart_e1[22];
unsigned int chz_mrk_dat_apart_e2[35];
unsigned int chz_mrk_dat_apart_e3[20];
unsigned int chz_mrk_dat_apart_w1[17];
unsigned int chz_mrk_dat_apart_w2[20];
unsigned int chz_mrk_dat_apart_w1_offsetx[17];
unsigned int chz_mrk_dat_apart_w2_offsetx[20];
Chizu_MarkerTex chz_mrk_tex_htl[17];
unsigned int chz_mrk_dat_hotel_gbf[4];
unsigned int chz_mrk_dat_hotel_ebf[11];
unsigned int chz_mrk_dat_hotel_g1f[20];
unsigned int chz_mrk_dat_hotel_e1f[27];
unsigned int chz_mrk_dat_hotel_g2f[31];
unsigned int chz_mrk_dat_hotel_g3f[10];
unsigned int chz_mrk_dat_hotel_gbb[2];
unsigned int chz_mrk_dat_hotel_ebb[9];
unsigned int chz_mrk_dat_hotel_g1b[9];
unsigned int chz_mrk_dat_hotel_e1b[16];
unsigned int chz_mrk_dat_hotel_g2b[32];
unsigned int chz_mrk_dat_hotel_g3b[7];
Chizu_MarkerTex chz_mrk_tex_lab_up[23];
unsigned int chz_mrk_dat_lab_up[24];
Chizu_MarkerTex chz_mrk_tex_lab_down[23];
unsigned int chz_mrk_dat_lab_down[23];
Chizu_MarkerTex chz_mrk_tex_dl[15];
unsigned int chz_mrk_dat_dl[72];
unsigned int chz_mrk_dat_dl_b[7];
Chizu_MarkerTex chz_mrk_tex_outdoor[13];
unsigned int chz_mrk_dat_town_silent[3];
unsigned int chz_mrk_dat_town_e[24];
unsigned int chz_mrk_dat_town_w[21];
Chizu_MarkerList chizu_marker_list[36];
int chizu_from;
int chizu_crnt;
int chizu_next;
float disp_rate;
_SH2_SYS Sh2sys;
float chizu_center_y;
float chizu_center_x;
_anon5 game_flag;
unsigned short msg_station[0];
fsFileIndex* cursor_file;
fsFileIndex* marker_file;
fsFileIndex* base_file;
int chizu_disp_step;
shPlayerWork sh2jms;
char* layer_adr;
Pad_KeyConfig key_config;
char cursor_adr[0];
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
// Start address: 0x1c6b90
void ChizuMain()
{
	// Line 109, Address: 0x1c6b90, Func Offset: 0
	// Line 113, Address: 0x1c6b9c, Func Offset: 0xc
	// Line 115, Address: 0x1c6bcc, Func Offset: 0x3c
	// Line 116, Address: 0x1c6bd0, Func Offset: 0x40
	// Line 117, Address: 0x1c6bdc, Func Offset: 0x4c
	// Line 121, Address: 0x1c6be8, Func Offset: 0x58
	// Line 123, Address: 0x1c6bf0, Func Offset: 0x60
	// Line 124, Address: 0x1c6bf8, Func Offset: 0x68
	// Line 128, Address: 0x1c6c04, Func Offset: 0x74
	// Line 130, Address: 0x1c6c0c, Func Offset: 0x7c
	// Line 131, Address: 0x1c6c14, Func Offset: 0x84
	// Line 132, Address: 0x1c6c1c, Func Offset: 0x8c
	// Line 134, Address: 0x1c6c2c, Func Offset: 0x9c
	// Line 135, Address: 0x1c6c34, Func Offset: 0xa4
	// Line 136, Address: 0x1c6c3c, Func Offset: 0xac
	// Line 137, Address: 0x1c6c44, Func Offset: 0xb4
	// Line 140, Address: 0x1c6c4c, Func Offset: 0xbc
	// Line 141, Address: 0x1c6c64, Func Offset: 0xd4
	// Line 142, Address: 0x1c6c74, Func Offset: 0xe4
	// Line 146, Address: 0x1c6c7c, Func Offset: 0xec
	// Line 147, Address: 0x1c6c84, Func Offset: 0xf4
	// Line 148, Address: 0x1c6c9c, Func Offset: 0x10c
	// Line 152, Address: 0x1c6ca8, Func Offset: 0x118
	// Line 153, Address: 0x1c6cb8, Func Offset: 0x128
	// Line 154, Address: 0x1c6cc4, Func Offset: 0x134
	// Line 157, Address: 0x1c6ccc, Func Offset: 0x13c
	// Line 159, Address: 0x1c6cdc, Func Offset: 0x14c
	// Line 160, Address: 0x1c6cec, Func Offset: 0x15c
	// Line 161, Address: 0x1c6cfc, Func Offset: 0x16c
	// Line 162, Address: 0x1c6d10, Func Offset: 0x180
	// Line 163, Address: 0x1c6d1c, Func Offset: 0x18c
	// Line 164, Address: 0x1c6d30, Func Offset: 0x1a0
	// Line 168, Address: 0x1c6d38, Func Offset: 0x1a8
	// Line 169, Address: 0x1c6d4c, Func Offset: 0x1bc
	// Line 170, Address: 0x1c6d54, Func Offset: 0x1c4
	// Line 172, Address: 0x1c6d64, Func Offset: 0x1d4
	// Line 173, Address: 0x1c6d74, Func Offset: 0x1e4
	// Line 174, Address: 0x1c6d8c, Func Offset: 0x1fc
	// Line 176, Address: 0x1c6d98, Func Offset: 0x208
	// Line 177, Address: 0x1c6da0, Func Offset: 0x210
	// Line 178, Address: 0x1c6dac, Func Offset: 0x21c
	// Line 181, Address: 0x1c6db8, Func Offset: 0x228
	// Line 182, Address: 0x1c6dc0, Func Offset: 0x230
	// Line 184, Address: 0x1c6dcc, Func Offset: 0x23c
	// Line 187, Address: 0x1c6dd4, Func Offset: 0x244
	// Line 188, Address: 0x1c6dec, Func Offset: 0x25c
	// Line 189, Address: 0x1c6dfc, Func Offset: 0x26c
	// Line 190, Address: 0x1c6e0c, Func Offset: 0x27c
	// Line 191, Address: 0x1c6e14, Func Offset: 0x284
	// Line 192, Address: 0x1c6e2c, Func Offset: 0x29c
	// Line 193, Address: 0x1c6e3c, Func Offset: 0x2ac
	// Line 195, Address: 0x1c6e54, Func Offset: 0x2c4
	// Line 197, Address: 0x1c6e6c, Func Offset: 0x2dc
	// Line 198, Address: 0x1c6e88, Func Offset: 0x2f8
	// Line 199, Address: 0x1c6e9c, Func Offset: 0x30c
	// Line 200, Address: 0x1c6ea4, Func Offset: 0x314
	// Line 201, Address: 0x1c6eac, Func Offset: 0x31c
	// Line 202, Address: 0x1c6eb4, Func Offset: 0x324
	// Line 203, Address: 0x1c6eb8, Func Offset: 0x328
	// Line 204, Address: 0x1c6ec4, Func Offset: 0x334
	// Line 207, Address: 0x1c6ecc, Func Offset: 0x33c
	// Line 208, Address: 0x1c6ed4, Func Offset: 0x344
	// Line 209, Address: 0x1c6ee4, Func Offset: 0x354
	// Line 210, Address: 0x1c6ef0, Func Offset: 0x360
	// Line 213, Address: 0x1c6ef8, Func Offset: 0x368
	// Line 214, Address: 0x1c6f00, Func Offset: 0x370
	// Line 215, Address: 0x1c6f08, Func Offset: 0x378
	// Line 216, Address: 0x1c6f18, Func Offset: 0x388
	// Line 217, Address: 0x1c6f28, Func Offset: 0x398
	// Line 218, Address: 0x1c6f34, Func Offset: 0x3a4
	// Line 219, Address: 0x1c6f38, Func Offset: 0x3a8
	// Line 224, Address: 0x1c6f40, Func Offset: 0x3b0
	// Line 226, Address: 0x1c6f68, Func Offset: 0x3d8
	// Line 227, Address: 0x1c6f70, Func Offset: 0x3e0
	// Line 228, Address: 0x1c6f7c, Func Offset: 0x3ec
	// Line 229, Address: 0x1c6f80, Func Offset: 0x3f0
	// Line 233, Address: 0x1c6f88, Func Offset: 0x3f8
	// Line 234, Address: 0x1c6f98, Func Offset: 0x408
	// Line 236, Address: 0x1c6fa8, Func Offset: 0x418
	// Line 237, Address: 0x1c6fdc, Func Offset: 0x44c
	// Line 240, Address: 0x1c6fe4, Func Offset: 0x454
	// Line 243, Address: 0x1c7018, Func Offset: 0x488
	// Line 250, Address: 0x1c7028, Func Offset: 0x498
	// Func End, Address: 0x1c703c, Func Offset: 0x4ac
}

// 
// Start address: 0x1c7040
int ChizuSelect()
{
	int work;
	int room;
	SubCharacter* jms;
	// Line 256, Address: 0x1c7040, Func Offset: 0
	// Line 261, Address: 0x1c7054, Func Offset: 0x14
	// Line 262, Address: 0x1c705c, Func Offset: 0x1c
	// Line 263, Address: 0x1c7070, Func Offset: 0x30
	// Line 266, Address: 0x1c708c, Func Offset: 0x4c
	// Line 268, Address: 0x1c7130, Func Offset: 0xf0
	// Line 270, Address: 0x1c71a0, Func Offset: 0x160
	// Line 271, Address: 0x1c71a4, Func Offset: 0x164
	// Line 273, Address: 0x1c7218, Func Offset: 0x1d8
	// Line 274, Address: 0x1c721c, Func Offset: 0x1dc
	// Line 275, Address: 0x1c7224, Func Offset: 0x1e4
	// Line 277, Address: 0x1c7228, Func Offset: 0x1e8
	// Line 280, Address: 0x1c7230, Func Offset: 0x1f0
	// Line 282, Address: 0x1c72a4, Func Offset: 0x264
	// Line 283, Address: 0x1c72a8, Func Offset: 0x268
	// Line 285, Address: 0x1c731c, Func Offset: 0x2dc
	// Line 286, Address: 0x1c7320, Func Offset: 0x2e0
	// Line 287, Address: 0x1c7328, Func Offset: 0x2e8
	// Line 289, Address: 0x1c732c, Func Offset: 0x2ec
	// Line 292, Address: 0x1c7334, Func Offset: 0x2f4
	// Line 294, Address: 0x1c73a8, Func Offset: 0x368
	// Line 295, Address: 0x1c73ac, Func Offset: 0x36c
	// Line 297, Address: 0x1c7420, Func Offset: 0x3e0
	// Line 298, Address: 0x1c7424, Func Offset: 0x3e4
	// Line 299, Address: 0x1c742c, Func Offset: 0x3ec
	// Line 301, Address: 0x1c7430, Func Offset: 0x3f0
	// Line 304, Address: 0x1c7438, Func Offset: 0x3f8
	// Line 305, Address: 0x1c747c, Func Offset: 0x43c
	// Line 306, Address: 0x1c7480, Func Offset: 0x440
	// Line 307, Address: 0x1c7488, Func Offset: 0x448
	// Line 309, Address: 0x1c748c, Func Offset: 0x44c
	// Line 311, Address: 0x1c7494, Func Offset: 0x454
	// Line 313, Address: 0x1c74b4, Func Offset: 0x474
	// Line 314, Address: 0x1c74b8, Func Offset: 0x478
	// Line 317, Address: 0x1c74c0, Func Offset: 0x480
	// Line 319, Address: 0x1c74c4, Func Offset: 0x484
	// Line 322, Address: 0x1c74cc, Func Offset: 0x48c
	// Line 324, Address: 0x1c7530, Func Offset: 0x4f0
	// Line 325, Address: 0x1c7534, Func Offset: 0x4f4
	// Line 328, Address: 0x1c753c, Func Offset: 0x4fc
	// Line 330, Address: 0x1c7540, Func Offset: 0x500
	// Line 333, Address: 0x1c7548, Func Offset: 0x508
	// Line 335, Address: 0x1c75ac, Func Offset: 0x56c
	// Line 336, Address: 0x1c75b0, Func Offset: 0x570
	// Line 337, Address: 0x1c75b8, Func Offset: 0x578
	// Line 339, Address: 0x1c75bc, Func Offset: 0x57c
	// Line 342, Address: 0x1c75c4, Func Offset: 0x584
	// Line 343, Address: 0x1c75e0, Func Offset: 0x5a0
	// Line 344, Address: 0x1c7600, Func Offset: 0x5c0
	// Line 345, Address: 0x1c7604, Func Offset: 0x5c4
	// Line 348, Address: 0x1c760c, Func Offset: 0x5cc
	// Line 349, Address: 0x1c7628, Func Offset: 0x5e8
	// Line 350, Address: 0x1c7648, Func Offset: 0x608
	// Line 351, Address: 0x1c764c, Func Offset: 0x60c
	// Line 354, Address: 0x1c7654, Func Offset: 0x614
	// Line 356, Address: 0x1c76b8, Func Offset: 0x678
	// Line 357, Address: 0x1c76bc, Func Offset: 0x67c
	// Line 358, Address: 0x1c76c4, Func Offset: 0x684
	// Line 361, Address: 0x1c76c8, Func Offset: 0x688
	// Line 365, Address: 0x1c76d0, Func Offset: 0x690
	// Line 368, Address: 0x1c7730, Func Offset: 0x6f0
	// Line 369, Address: 0x1c7734, Func Offset: 0x6f4
	// Line 370, Address: 0x1c773c, Func Offset: 0x6fc
	// Line 372, Address: 0x1c7740, Func Offset: 0x700
	// Line 374, Address: 0x1c7748, Func Offset: 0x708
	// Line 378, Address: 0x1c77b8, Func Offset: 0x778
	// Line 379, Address: 0x1c77bc, Func Offset: 0x77c
	// Line 382, Address: 0x1c77c4, Func Offset: 0x784
	// Line 388, Address: 0x1c77c8, Func Offset: 0x788
	// Line 390, Address: 0x1c77f0, Func Offset: 0x7b0
	// Line 391, Address: 0x1c7808, Func Offset: 0x7c8
	// Line 392, Address: 0x1c780c, Func Offset: 0x7cc
	// Line 393, Address: 0x1c782c, Func Offset: 0x7ec
	// Line 397, Address: 0x1c7830, Func Offset: 0x7f0
	// Line 398, Address: 0x1c7840, Func Offset: 0x800
	// Line 399, Address: 0x1c7858, Func Offset: 0x818
	// Line 404, Address: 0x1c785c, Func Offset: 0x81c
	// Line 406, Address: 0x1c7868, Func Offset: 0x828
	// Line 408, Address: 0x1c786c, Func Offset: 0x82c
	// Line 409, Address: 0x1c7870, Func Offset: 0x830
	// Func End, Address: 0x1c788c, Func Offset: 0x84c
}

// 
// Start address: 0x1c7890
int ChizuPossessionCheck(int chizu)
{
	// Line 416, Address: 0x1c7890, Func Offset: 0
	// Line 418, Address: 0x1c78b8, Func Offset: 0x28
	// Line 423, Address: 0x1c78c4, Func Offset: 0x34
	// Line 429, Address: 0x1c78e8, Func Offset: 0x58
	// Line 436, Address: 0x1c790c, Func Offset: 0x7c
	// Line 438, Address: 0x1c7934, Func Offset: 0xa4
	// Line 442, Address: 0x1c7940, Func Offset: 0xb0
	// Line 447, Address: 0x1c7964, Func Offset: 0xd4
	// Line 451, Address: 0x1c797c, Func Offset: 0xec
	// Line 456, Address: 0x1c79a0, Func Offset: 0x110
	// Line 461, Address: 0x1c79c4, Func Offset: 0x134
	// Line 468, Address: 0x1c79e8, Func Offset: 0x158
	// Line 469, Address: 0x1c7a00, Func Offset: 0x170
	// Line 474, Address: 0x1c7a24, Func Offset: 0x194
	// Line 479, Address: 0x1c7a48, Func Offset: 0x1b8
	// Line 486, Address: 0x1c7a6c, Func Offset: 0x1dc
	// Line 487, Address: 0x1c7a84, Func Offset: 0x1f4
	// Line 490, Address: 0x1c7aa8, Func Offset: 0x218
	// Line 491, Address: 0x1c7aac, Func Offset: 0x21c
	// Func End, Address: 0x1c7ab4, Func Offset: 0x224
}

// 
// Start address: 0x1c7ac0
void ChizuFileLoad(int load_chizu)
{
	fsFileIndex* marker_file_list[36];
	fsFileIndex* base_file_list[36];
	// Line 497, Address: 0x1c7ac0, Func Offset: 0
	// Line 576, Address: 0x1c7ad0, Func Offset: 0x10
	// Line 578, Address: 0x1c7afc, Func Offset: 0x3c
	// Line 579, Address: 0x1c7b14, Func Offset: 0x54
	// Line 583, Address: 0x1c7b20, Func Offset: 0x60
	// Line 585, Address: 0x1c7b48, Func Offset: 0x88
	// Line 587, Address: 0x1c7b64, Func Offset: 0xa4
	// Line 588, Address: 0x1c7b78, Func Offset: 0xb8
	// Line 590, Address: 0x1c7b84, Func Offset: 0xc4
	// Func End, Address: 0x1c7b9c, Func Offset: 0xdc
}

// 
// Start address: 0x1c7ba0
void ChizuDisplay()
{
	float v1;
	float u1;
	float v0;
	float u0;
	PicDraw_Data pic0;
	// Line 596, Address: 0x1c7ba0, Func Offset: 0
	// Line 603, Address: 0x1c7bbc, Func Offset: 0x1c
	// Line 604, Address: 0x1c7bd0, Func Offset: 0x30
	// Line 605, Address: 0x1c7bec, Func Offset: 0x4c
	// Line 606, Address: 0x1c7c08, Func Offset: 0x68
	// Line 607, Address: 0x1c7c10, Func Offset: 0x70
	// Line 609, Address: 0x1c7c1c, Func Offset: 0x7c
	// Line 610, Address: 0x1c7c30, Func Offset: 0x90
	// Line 611, Address: 0x1c7c4c, Func Offset: 0xac
	// Line 612, Address: 0x1c7c64, Func Offset: 0xc4
	// Line 613, Address: 0x1c7c6c, Func Offset: 0xcc
	// Line 617, Address: 0x1c7c74, Func Offset: 0xd4
	// Line 618, Address: 0x1c7c94, Func Offset: 0xf4
	// Line 619, Address: 0x1c7ca4, Func Offset: 0x104
	// Line 620, Address: 0x1c7cc4, Func Offset: 0x124
	// Line 621, Address: 0x1c7cc8, Func Offset: 0x128
	// Line 622, Address: 0x1c7ce4, Func Offset: 0x144
	// Line 623, Address: 0x1c7d00, Func Offset: 0x160
	// Line 624, Address: 0x1c7d24, Func Offset: 0x184
	// Line 627, Address: 0x1c7d48, Func Offset: 0x1a8
	// Line 629, Address: 0x1c7d50, Func Offset: 0x1b0
	// Line 631, Address: 0x1c7d70, Func Offset: 0x1d0
	// Line 633, Address: 0x1c7d80, Func Offset: 0x1e0
	// Line 634, Address: 0x1c7da4, Func Offset: 0x204
	// Line 636, Address: 0x1c7dac, Func Offset: 0x20c
	// Line 637, Address: 0x1c7e18, Func Offset: 0x278
	// Line 639, Address: 0x1c7e24, Func Offset: 0x284
	// Line 640, Address: 0x1c7e2c, Func Offset: 0x28c
	// Line 644, Address: 0x1c7e34, Func Offset: 0x294
	// Line 646, Address: 0x1c7e54, Func Offset: 0x2b4
	// Line 647, Address: 0x1c7e68, Func Offset: 0x2c8
	// Func End, Address: 0x1c7e8c, Func Offset: 0x2ec
}

// 
// Start address: 0x1c7e90
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
	// Line 655, Address: 0x1c7e90, Func Offset: 0
	// Line 671, Address: 0x1c7ea4, Func Offset: 0x14
	// Line 675, Address: 0x1c7eb4, Func Offset: 0x24
	// Line 677, Address: 0x1c7ed0, Func Offset: 0x40
	// Line 679, Address: 0x1c7ee0, Func Offset: 0x50
	// Line 680, Address: 0x1c7f04, Func Offset: 0x74
	// Line 681, Address: 0x1c7f0c, Func Offset: 0x7c
	// Line 683, Address: 0x1c7f38, Func Offset: 0xa8
	// Line 687, Address: 0x1c7fc8, Func Offset: 0x138
	// Line 688, Address: 0x1c7fd4, Func Offset: 0x144
	// Line 689, Address: 0x1c7fe0, Func Offset: 0x150
	// Line 691, Address: 0x1c7fe8, Func Offset: 0x158
	// Line 692, Address: 0x1c7ff4, Func Offset: 0x164
	// Line 693, Address: 0x1c8000, Func Offset: 0x170
	// Line 695, Address: 0x1c8008, Func Offset: 0x178
	// Line 696, Address: 0x1c8014, Func Offset: 0x184
	// Line 697, Address: 0x1c8020, Func Offset: 0x190
	// Line 699, Address: 0x1c8028, Func Offset: 0x198
	// Line 700, Address: 0x1c8034, Func Offset: 0x1a4
	// Line 703, Address: 0x1c8040, Func Offset: 0x1b0
	// Line 705, Address: 0x1c8048, Func Offset: 0x1b8
	// Line 706, Address: 0x1c8054, Func Offset: 0x1c4
	// Line 708, Address: 0x1c8060, Func Offset: 0x1d0
	// Line 710, Address: 0x1c8068, Func Offset: 0x1d8
	// Line 711, Address: 0x1c8074, Func Offset: 0x1e4
	// Line 713, Address: 0x1c8080, Func Offset: 0x1f0
	// Line 715, Address: 0x1c8088, Func Offset: 0x1f8
	// Line 716, Address: 0x1c8094, Func Offset: 0x204
	// Line 717, Address: 0x1c80a0, Func Offset: 0x210
	// Line 720, Address: 0x1c80a8, Func Offset: 0x218
	// Line 721, Address: 0x1c80b4, Func Offset: 0x224
	// Line 722, Address: 0x1c80c0, Func Offset: 0x230
	// Line 724, Address: 0x1c80c8, Func Offset: 0x238
	// Line 725, Address: 0x1c80d4, Func Offset: 0x244
	// Line 727, Address: 0x1c80d8, Func Offset: 0x248
	// Line 728, Address: 0x1c80f4, Func Offset: 0x264
	// Line 732, Address: 0x1c80f8, Func Offset: 0x268
	// Line 733, Address: 0x1c8104, Func Offset: 0x274
	// Line 734, Address: 0x1c8110, Func Offset: 0x280
	// Line 745, Address: 0x1c8124, Func Offset: 0x294
	// Line 750, Address: 0x1c8130, Func Offset: 0x2a0
	// Line 751, Address: 0x1c8164, Func Offset: 0x2d4
	// Line 752, Address: 0x1c8170, Func Offset: 0x2e0
	// Line 781, Address: 0x1c8184, Func Offset: 0x2f4
	// Line 782, Address: 0x1c81a0, Func Offset: 0x310
	// Line 783, Address: 0x1c81bc, Func Offset: 0x32c
	// Line 784, Address: 0x1c81d4, Func Offset: 0x344
	// Line 785, Address: 0x1c81e8, Func Offset: 0x358
	// Line 786, Address: 0x1c81fc, Func Offset: 0x36c
	// Line 787, Address: 0x1c8230, Func Offset: 0x3a0
	// Line 789, Address: 0x1c8254, Func Offset: 0x3c4
	// Line 792, Address: 0x1c82c0, Func Offset: 0x430
	// Line 793, Address: 0x1c82fc, Func Offset: 0x46c
	// Line 794, Address: 0x1c8308, Func Offset: 0x478
	// Line 795, Address: 0x1c8328, Func Offset: 0x498
	// Line 796, Address: 0x1c833c, Func Offset: 0x4ac
	// Func End, Address: 0x1c8358, Func Offset: 0x4c8
}

// 
// Start address: 0x1c8360
void ChizuControl()
{
	unsigned char lsy;
	unsigned char lsx;
	float any;
	float anx;
	// Line 802, Address: 0x1c8360, Func Offset: 0
	// Line 810, Address: 0x1c8370, Func Offset: 0x10
	// Line 811, Address: 0x1c8380, Func Offset: 0x20
	// Line 812, Address: 0x1c83b0, Func Offset: 0x50
	// Line 813, Address: 0x1c83c8, Func Offset: 0x68
	// Line 814, Address: 0x1c83e4, Func Offset: 0x84
	// Line 815, Address: 0x1c8404, Func Offset: 0xa4
	// Line 816, Address: 0x1c8420, Func Offset: 0xc0
	// Line 817, Address: 0x1c8440, Func Offset: 0xe0
	// Line 818, Address: 0x1c845c, Func Offset: 0xfc
	// Line 819, Address: 0x1c847c, Func Offset: 0x11c
	// Line 821, Address: 0x1c8498, Func Offset: 0x138
	// Line 822, Address: 0x1c84a0, Func Offset: 0x140
	// Line 823, Address: 0x1c84bc, Func Offset: 0x15c
	// Line 824, Address: 0x1c84e4, Func Offset: 0x184
	// Line 825, Address: 0x1c84ec, Func Offset: 0x18c
	// Line 826, Address: 0x1c84f4, Func Offset: 0x194
	// Line 827, Address: 0x1c8508, Func Offset: 0x1a8
	// Line 828, Address: 0x1c8514, Func Offset: 0x1b4
	// Line 829, Address: 0x1c8548, Func Offset: 0x1e8
	// Line 830, Address: 0x1c8554, Func Offset: 0x1f4
	// Line 831, Address: 0x1c8588, Func Offset: 0x228
	// Line 832, Address: 0x1c858c, Func Offset: 0x22c
	// Line 833, Address: 0x1c85a0, Func Offset: 0x240
	// Line 834, Address: 0x1c85ac, Func Offset: 0x24c
	// Line 835, Address: 0x1c85e0, Func Offset: 0x280
	// Line 836, Address: 0x1c85ec, Func Offset: 0x28c
	// Line 837, Address: 0x1c8620, Func Offset: 0x2c0
	// Line 838, Address: 0x1c8624, Func Offset: 0x2c4
	// Line 839, Address: 0x1c864c, Func Offset: 0x2ec
	// Line 840, Address: 0x1c8680, Func Offset: 0x320
	// Line 841, Address: 0x1c86b0, Func Offset: 0x350
	// Line 842, Address: 0x1c86b8, Func Offset: 0x358
	// Line 843, Address: 0x1c86d0, Func Offset: 0x370
	// Line 844, Address: 0x1c8700, Func Offset: 0x3a0
	// Line 845, Address: 0x1c8720, Func Offset: 0x3c0
	// Line 847, Address: 0x1c8750, Func Offset: 0x3f0
	// Line 848, Address: 0x1c8768, Func Offset: 0x408
	// Line 849, Address: 0x1c8794, Func Offset: 0x434
	// Line 850, Address: 0x1c87b4, Func Offset: 0x454
	// Line 853, Address: 0x1c87e0, Func Offset: 0x480
	// Line 854, Address: 0x1c880c, Func Offset: 0x4ac
	// Line 855, Address: 0x1c8838, Func Offset: 0x4d8
	// Line 856, Address: 0x1c8864, Func Offset: 0x504
	// Line 861, Address: 0x1c8890, Func Offset: 0x530
	// Line 862, Address: 0x1c88c8, Func Offset: 0x568
	// Line 863, Address: 0x1c88d4, Func Offset: 0x574
	// Func End, Address: 0x1c88ec, Func Offset: 0x58c
}

// 
// Start address: 0x1c88f0
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
	// Line 871, Address: 0x1c88f0, Func Offset: 0
	// Line 892, Address: 0x1c88fc, Func Offset: 0xc
	// Line 894, Address: 0x1c8918, Func Offset: 0x28
	// Line 896, Address: 0x1c8928, Func Offset: 0x38
	// Line 897, Address: 0x1c894c, Func Offset: 0x5c
	// Line 898, Address: 0x1c8954, Func Offset: 0x64
	// Line 899, Address: 0x1c8984, Func Offset: 0x94
	// Line 900, Address: 0x1c89a8, Func Offset: 0xb8
	// Line 902, Address: 0x1c89d4, Func Offset: 0xe4
	// Line 903, Address: 0x1c89e0, Func Offset: 0xf0
	// Line 906, Address: 0x1c8a0c, Func Offset: 0x11c
	// Line 907, Address: 0x1c8a20, Func Offset: 0x130
	// Line 909, Address: 0x1c8a28, Func Offset: 0x138
	// Line 910, Address: 0x1c8a38, Func Offset: 0x148
	// Line 912, Address: 0x1c8a40, Func Offset: 0x150
	// Line 913, Address: 0x1c8a50, Func Offset: 0x160
	// Line 915, Address: 0x1c8a58, Func Offset: 0x168
	// Line 918, Address: 0x1c8a68, Func Offset: 0x178
	// Line 919, Address: 0x1c8a70, Func Offset: 0x180
	// Line 921, Address: 0x1c8aac, Func Offset: 0x1bc
	// Line 922, Address: 0x1c8ab4, Func Offset: 0x1c4
	// Line 923, Address: 0x1c8abc, Func Offset: 0x1cc
	// Line 926, Address: 0x1c8ac4, Func Offset: 0x1d4
	// Line 927, Address: 0x1c8acc, Func Offset: 0x1dc
	// Line 928, Address: 0x1c8ad4, Func Offset: 0x1e4
	// Line 930, Address: 0x1c8adc, Func Offset: 0x1ec
	// Line 931, Address: 0x1c8af0, Func Offset: 0x200
	// Line 933, Address: 0x1c8b04, Func Offset: 0x214
	// Line 934, Address: 0x1c8b08, Func Offset: 0x218
	// Line 935, Address: 0x1c8b20, Func Offset: 0x230
	// Line 936, Address: 0x1c8b34, Func Offset: 0x244
	// Line 937, Address: 0x1c8b48, Func Offset: 0x258
	// Line 938, Address: 0x1c8b94, Func Offset: 0x2a4
	// Line 940, Address: 0x1c8bcc, Func Offset: 0x2dc
	// Line 943, Address: 0x1c8c38, Func Offset: 0x348
	// Line 944, Address: 0x1c8ca4, Func Offset: 0x3b4
	// Line 945, Address: 0x1c8cb0, Func Offset: 0x3c0
	// Line 978, Address: 0x1c8cc4, Func Offset: 0x3d4
	// Func End, Address: 0x1c8cd8, Func Offset: 0x3e8
}

// 
// Start address: 0x1c8ce0
int ChizuConnectCheck(int chizu, int connect)
{
	int work;
	// Line 983, Address: 0x1c8ce0, Func Offset: 0
	// Line 986, Address: 0x1c8ce8, Func Offset: 0x8
	// Line 988, Address: 0x1c8d14, Func Offset: 0x34
	// Line 989, Address: 0x1c8d30, Func Offset: 0x50
	// Line 990, Address: 0x1c8d4c, Func Offset: 0x6c
	// Line 991, Address: 0x1c8d68, Func Offset: 0x88
	// Line 995, Address: 0x1c8d80, Func Offset: 0xa0
	// Line 997, Address: 0x1c8d94, Func Offset: 0xb4
	// Line 999, Address: 0x1c8da4, Func Offset: 0xc4
	// Line 1001, Address: 0x1c8df4, Func Offset: 0x114
	// Line 1002, Address: 0x1c8e10, Func Offset: 0x130
	// Line 1005, Address: 0x1c8e1c, Func Offset: 0x13c
	// Line 1006, Address: 0x1c8e3c, Func Offset: 0x15c
	// Line 1009, Address: 0x1c8e48, Func Offset: 0x168
	// Line 1010, Address: 0x1c8e68, Func Offset: 0x188
	// Line 1013, Address: 0x1c8e74, Func Offset: 0x194
	// Line 1014, Address: 0x1c8e94, Func Offset: 0x1b4
	// Line 1017, Address: 0x1c8ea0, Func Offset: 0x1c0
	// Line 1018, Address: 0x1c8ec0, Func Offset: 0x1e0
	// Line 1021, Address: 0x1c8ecc, Func Offset: 0x1ec
	// Line 1022, Address: 0x1c8eec, Func Offset: 0x20c
	// Line 1026, Address: 0x1c8ef8, Func Offset: 0x218
	// Line 1028, Address: 0x1c8f18, Func Offset: 0x238
	// Line 1029, Address: 0x1c8f24, Func Offset: 0x244
	// Line 1030, Address: 0x1c8f38, Func Offset: 0x258
	// Line 1031, Address: 0x1c8f44, Func Offset: 0x264
	// Line 1032, Address: 0x1c8f58, Func Offset: 0x278
	// Line 1033, Address: 0x1c8f64, Func Offset: 0x284
	// Line 1034, Address: 0x1c8f70, Func Offset: 0x290
	// Line 1035, Address: 0x1c8f84, Func Offset: 0x2a4
	// Line 1036, Address: 0x1c8f90, Func Offset: 0x2b0
	// Line 1037, Address: 0x1c8f9c, Func Offset: 0x2bc
	// Line 1038, Address: 0x1c8fb0, Func Offset: 0x2d0
	// Line 1041, Address: 0x1c8fbc, Func Offset: 0x2dc
	// Line 1043, Address: 0x1c8fd0, Func Offset: 0x2f0
	// Line 1046, Address: 0x1c8fe4, Func Offset: 0x304
	// Func End, Address: 0x1c8ff4, Func Offset: 0x314
}

// 
// Start address: 0x1c9000
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
	// Line 1052, Address: 0x1c9000, Func Offset: 0
	// Line 1068, Address: 0x1c9010, Func Offset: 0x10
	// Line 1070, Address: 0x1c9024, Func Offset: 0x24
	// Line 1077, Address: 0x1c9050, Func Offset: 0x50
	// Line 1082, Address: 0x1c9058, Func Offset: 0x58
	// Line 1085, Address: 0x1c9068, Func Offset: 0x68
	// Line 1087, Address: 0x1c9088, Func Offset: 0x88
	// Line 1088, Address: 0x1c90b4, Func Offset: 0xb4
	// Line 1089, Address: 0x1c90dc, Func Offset: 0xdc
	// Line 1090, Address: 0x1c90e4, Func Offset: 0xe4
	// Line 1093, Address: 0x1c90fc, Func Offset: 0xfc
	// Line 1094, Address: 0x1c9128, Func Offset: 0x128
	// Line 1095, Address: 0x1c9150, Func Offset: 0x150
	// Line 1098, Address: 0x1c9158, Func Offset: 0x158
	// Line 1099, Address: 0x1c9170, Func Offset: 0x170
	// Line 1102, Address: 0x1c9184, Func Offset: 0x184
	// Line 1103, Address: 0x1c91a8, Func Offset: 0x1a8
	// Line 1104, Address: 0x1c91b4, Func Offset: 0x1b4
	// Line 1105, Address: 0x1c91cc, Func Offset: 0x1cc
	// Line 1106, Address: 0x1c91d8, Func Offset: 0x1d8
	// Line 1107, Address: 0x1c91f0, Func Offset: 0x1f0
	// Line 1108, Address: 0x1c91fc, Func Offset: 0x1fc
	// Line 1109, Address: 0x1c9208, Func Offset: 0x208
	// Line 1111, Address: 0x1c9214, Func Offset: 0x214
	// Line 1112, Address: 0x1c9220, Func Offset: 0x220
	// Line 1113, Address: 0x1c9240, Func Offset: 0x240
	// Line 1114, Address: 0x1c9258, Func Offset: 0x258
	// Line 1116, Address: 0x1c926c, Func Offset: 0x26c
	// Line 1118, Address: 0x1c928c, Func Offset: 0x28c
	// Line 1119, Address: 0x1c9298, Func Offset: 0x298
	// Line 1120, Address: 0x1c92a4, Func Offset: 0x2a4
	// Line 1121, Address: 0x1c92cc, Func Offset: 0x2cc
	// Line 1122, Address: 0x1c92dc, Func Offset: 0x2dc
	// Line 1123, Address: 0x1c92ec, Func Offset: 0x2ec
	// Line 1124, Address: 0x1c9308, Func Offset: 0x308
	// Line 1125, Address: 0x1c9324, Func Offset: 0x324
	// Line 1126, Address: 0x1c9334, Func Offset: 0x334
	// Line 1128, Address: 0x1c9344, Func Offset: 0x344
	// Line 1130, Address: 0x1c9360, Func Offset: 0x360
	// Line 1132, Address: 0x1c9370, Func Offset: 0x370
	// Line 1133, Address: 0x1c9394, Func Offset: 0x394
	// Line 1135, Address: 0x1c93c0, Func Offset: 0x3c0
	// Line 1136, Address: 0x1c93cc, Func Offset: 0x3cc
	// Line 1139, Address: 0x1c93d8, Func Offset: 0x3d8
	// Line 1142, Address: 0x1c944c, Func Offset: 0x44c
	// Line 1144, Address: 0x1c94b8, Func Offset: 0x4b8
	// Line 1145, Address: 0x1c9518, Func Offset: 0x518
	// Line 1146, Address: 0x1c9524, Func Offset: 0x524
	// Line 1147, Address: 0x1c9534, Func Offset: 0x534
	// Func End, Address: 0x1c954c, Func Offset: 0x54c
}

// 
// Start address: 0x1c9550
void ChizuCurrentPositionCheck(float* px, float* py)
{
	float tmp;
	int room;
	SubCharacter* jms;
	// Line 1158, Address: 0x1c9550, Func Offset: 0
	// Line 1226, Address: 0x1c957c, Func Offset: 0x2c
	// Line 1227, Address: 0x1c9588, Func Offset: 0x38
	// Line 1229, Address: 0x1c9590, Func Offset: 0x40
	// Line 1263, Address: 0x1c95c0, Func Offset: 0x70
	// Line 1264, Address: 0x1c95f8, Func Offset: 0xa8
	// Line 1266, Address: 0x1c9624, Func Offset: 0xd4
	// Line 1268, Address: 0x1c962c, Func Offset: 0xdc
	// Line 1269, Address: 0x1c96a4, Func Offset: 0x154
	// Line 1270, Address: 0x1c9710, Func Offset: 0x1c0
	// Line 1280, Address: 0x1c9718, Func Offset: 0x1c8
	// Line 1281, Address: 0x1c9738, Func Offset: 0x1e8
	// Line 1282, Address: 0x1c974c, Func Offset: 0x1fc
	// Line 1285, Address: 0x1c9754, Func Offset: 0x204
	// Line 1288, Address: 0x1c980c, Func Offset: 0x2bc
	// Line 1289, Address: 0x1c9818, Func Offset: 0x2c8
	// Line 1290, Address: 0x1c9824, Func Offset: 0x2d4
	// Line 1294, Address: 0x1c982c, Func Offset: 0x2dc
	// Line 1295, Address: 0x1c9864, Func Offset: 0x314
	// Line 1297, Address: 0x1c9890, Func Offset: 0x340
	// Line 1322, Address: 0x1c9898, Func Offset: 0x348
	// Line 1323, Address: 0x1c98d0, Func Offset: 0x380
	// Line 1324, Address: 0x1c98fc, Func Offset: 0x3ac
	// Line 1325, Address: 0x1c9900, Func Offset: 0x3b0
	// Line 1326, Address: 0x1c990c, Func Offset: 0x3bc
	// Line 1327, Address: 0x1c9910, Func Offset: 0x3c0
	// Line 1344, Address: 0x1c9918, Func Offset: 0x3c8
	// Line 1345, Address: 0x1c9950, Func Offset: 0x400
	// Line 1347, Address: 0x1c997c, Func Offset: 0x42c
	// Line 1348, Address: 0x1c9980, Func Offset: 0x430
	// Line 1349, Address: 0x1c9988, Func Offset: 0x438
	// Line 1350, Address: 0x1c9990, Func Offset: 0x440
	// Line 1352, Address: 0x1c9998, Func Offset: 0x448
	// Line 1353, Address: 0x1c99d0, Func Offset: 0x480
	// Line 1355, Address: 0x1c99fc, Func Offset: 0x4ac
	// Line 1356, Address: 0x1c9a00, Func Offset: 0x4b0
	// Line 1357, Address: 0x1c9a08, Func Offset: 0x4b8
	// Line 1358, Address: 0x1c9a10, Func Offset: 0x4c0
	// Line 1367, Address: 0x1c9a18, Func Offset: 0x4c8
	// Line 1368, Address: 0x1c9a50, Func Offset: 0x500
	// Line 1371, Address: 0x1c9a7c, Func Offset: 0x52c
	// Line 1374, Address: 0x1c9aa8, Func Offset: 0x558
	// Line 1376, Address: 0x1c9ad0, Func Offset: 0x580
	// Line 1377, Address: 0x1c9aec, Func Offset: 0x59c
	// Line 1379, Address: 0x1c9af4, Func Offset: 0x5a4
	// Line 1383, Address: 0x1c9b10, Func Offset: 0x5c0
	// Line 1386, Address: 0x1c9b18, Func Offset: 0x5c8
	// Line 1387, Address: 0x1c9b50, Func Offset: 0x600
	// Line 1389, Address: 0x1c9b7c, Func Offset: 0x62c
	// Line 1392, Address: 0x1c9ba8, Func Offset: 0x658
	// Line 1394, Address: 0x1c9bd0, Func Offset: 0x680
	// Line 1395, Address: 0x1c9bec, Func Offset: 0x69c
	// Line 1397, Address: 0x1c9bf4, Func Offset: 0x6a4
	// Line 1401, Address: 0x1c9c10, Func Offset: 0x6c0
	// Line 1417, Address: 0x1c9c18, Func Offset: 0x6c8
	// Line 1418, Address: 0x1c9c50, Func Offset: 0x700
	// Line 1419, Address: 0x1c9c7c, Func Offset: 0x72c
	// Line 1424, Address: 0x1c9c84, Func Offset: 0x734
	// Line 1425, Address: 0x1c9cbc, Func Offset: 0x76c
	// Line 1426, Address: 0x1c9ce8, Func Offset: 0x798
	// Line 1433, Address: 0x1c9cf0, Func Offset: 0x7a0
	// Line 1434, Address: 0x1c9d28, Func Offset: 0x7d8
	// Line 1435, Address: 0x1c9d54, Func Offset: 0x804
	// Line 1452, Address: 0x1c9d5c, Func Offset: 0x80c
	// Line 1453, Address: 0x1c9d94, Func Offset: 0x844
	// Line 1454, Address: 0x1c9dc0, Func Offset: 0x870
	// Line 1473, Address: 0x1c9dc8, Func Offset: 0x878
	// Line 1474, Address: 0x1c9e00, Func Offset: 0x8b0
	// Line 1475, Address: 0x1c9e2c, Func Offset: 0x8dc
	// Line 1521, Address: 0x1c9e34, Func Offset: 0x8e4
	// Line 1522, Address: 0x1c9e6c, Func Offset: 0x91c
	// Line 1523, Address: 0x1c9e98, Func Offset: 0x948
	// Line 1526, Address: 0x1c9ea0, Func Offset: 0x950
	// Line 1527, Address: 0x1c9ed8, Func Offset: 0x988
	// Line 1528, Address: 0x1c9f04, Func Offset: 0x9b4
	// Line 1533, Address: 0x1c9f0c, Func Offset: 0x9bc
	// Line 1535, Address: 0x1c9f70, Func Offset: 0xa20
	// Line 1536, Address: 0x1c9f9c, Func Offset: 0xa4c
	// Line 1537, Address: 0x1c9fc8, Func Offset: 0xa78
	// Line 1539, Address: 0x1ca02c, Func Offset: 0xadc
	// Line 1540, Address: 0x1ca058, Func Offset: 0xb08
	// Line 1541, Address: 0x1ca084, Func Offset: 0xb34
	// Line 1543, Address: 0x1ca0ec, Func Offset: 0xb9c
	// Line 1544, Address: 0x1ca118, Func Offset: 0xbc8
	// Line 1545, Address: 0x1ca144, Func Offset: 0xbf4
	// Line 1546, Address: 0x1ca14c, Func Offset: 0xbfc
	// Line 1547, Address: 0x1ca178, Func Offset: 0xc28
	// Line 1549, Address: 0x1ca1a4, Func Offset: 0xc54
	// Line 1554, Address: 0x1ca1ac, Func Offset: 0xc5c
	// Line 1555, Address: 0x1ca1c4, Func Offset: 0xc74
	// Line 1556, Address: 0x1ca1f8, Func Offset: 0xca8
	// Line 1557, Address: 0x1ca234, Func Offset: 0xce4
	// Line 1558, Address: 0x1ca23c, Func Offset: 0xcec
	// Line 1560, Address: 0x1ca24c, Func Offset: 0xcfc
	// Line 1561, Address: 0x1ca280, Func Offset: 0xd30
	// Line 1562, Address: 0x1ca2bc, Func Offset: 0xd6c
	// Line 1563, Address: 0x1ca2c4, Func Offset: 0xd74
	// Line 1565, Address: 0x1ca2d4, Func Offset: 0xd84
	// Line 1566, Address: 0x1ca308, Func Offset: 0xdb8
	// Line 1568, Address: 0x1ca344, Func Offset: 0xdf4
	// Line 1571, Address: 0x1ca34c, Func Offset: 0xdfc
	// Line 1572, Address: 0x1ca364, Func Offset: 0xe14
	// Line 1573, Address: 0x1ca398, Func Offset: 0xe48
	// Line 1574, Address: 0x1ca3d4, Func Offset: 0xe84
	// Line 1575, Address: 0x1ca3dc, Func Offset: 0xe8c
	// Line 1577, Address: 0x1ca3ec, Func Offset: 0xe9c
	// Line 1578, Address: 0x1ca420, Func Offset: 0xed0
	// Line 1579, Address: 0x1ca45c, Func Offset: 0xf0c
	// Line 1580, Address: 0x1ca464, Func Offset: 0xf14
	// Line 1582, Address: 0x1ca474, Func Offset: 0xf24
	// Line 1583, Address: 0x1ca4a8, Func Offset: 0xf58
	// Line 1585, Address: 0x1ca4e4, Func Offset: 0xf94
	// Line 1587, Address: 0x1ca4ec, Func Offset: 0xf9c
	// Line 1589, Address: 0x1ca510, Func Offset: 0xfc0
	// Line 1590, Address: 0x1ca514, Func Offset: 0xfc4
	// Line 1591, Address: 0x1ca51c, Func Offset: 0xfcc
	// Line 1592, Address: 0x1ca524, Func Offset: 0xfd4
	// Line 1596, Address: 0x1ca590, Func Offset: 0x1040
	// Line 1597, Address: 0x1ca5c4, Func Offset: 0x1074
	// Line 1598, Address: 0x1ca600, Func Offset: 0x10b0
	// Line 1599, Address: 0x1ca608, Func Offset: 0x10b8
	// Line 1603, Address: 0x1ca678, Func Offset: 0x1128
	// Line 1604, Address: 0x1ca6ac, Func Offset: 0x115c
	// Line 1605, Address: 0x1ca6e8, Func Offset: 0x1198
	// Line 1608, Address: 0x1ca6f0, Func Offset: 0x11a0
	// Line 1609, Address: 0x1ca724, Func Offset: 0x11d4
	// Line 1612, Address: 0x1ca770, Func Offset: 0x1220
	// Line 1617, Address: 0x1ca778, Func Offset: 0x1228
	// Line 1620, Address: 0x1ca7d8, Func Offset: 0x1288
	// Line 1621, Address: 0x1ca804, Func Offset: 0x12b4
	// Line 1622, Address: 0x1ca830, Func Offset: 0x12e0
	// Line 1623, Address: 0x1ca838, Func Offset: 0x12e8
	// Line 1626, Address: 0x1ca894, Func Offset: 0x1344
	// Line 1627, Address: 0x1ca8c0, Func Offset: 0x1370
	// Line 1628, Address: 0x1ca8ec, Func Offset: 0x139c
	// Line 1629, Address: 0x1ca8f4, Func Offset: 0x13a4
	// Line 1632, Address: 0x1ca950, Func Offset: 0x1400
	// Line 1633, Address: 0x1ca97c, Func Offset: 0x142c
	// Line 1634, Address: 0x1ca9a8, Func Offset: 0x1458
	// Line 1635, Address: 0x1ca9b0, Func Offset: 0x1460
	// Line 1638, Address: 0x1caa00, Func Offset: 0x14b0
	// Line 1639, Address: 0x1caa2c, Func Offset: 0x14dc
	// Line 1640, Address: 0x1caa58, Func Offset: 0x1508
	// Line 1642, Address: 0x1caa60, Func Offset: 0x1510
	// Line 1643, Address: 0x1caa8c, Func Offset: 0x153c
	// Line 1660, Address: 0x1caab8, Func Offset: 0x1568
	// Func End, Address: 0x1caae4, Func Offset: 0x1594
}

