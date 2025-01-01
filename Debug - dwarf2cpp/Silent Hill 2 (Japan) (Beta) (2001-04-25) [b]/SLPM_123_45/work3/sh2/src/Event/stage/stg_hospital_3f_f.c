typedef struct PicDraw_Data;
typedef struct PAD_3D;
typedef struct sh2gfw_AREA_HEAD;
typedef union fsFileIndex;
typedef struct shBattleFight;
typedef struct _anon0;
typedef union fsFile;
typedef struct PAD_2D;
typedef struct shSkelton;
typedef struct Playing_Info;
typedef struct SubCharacter;
typedef struct shBattleShot;
typedef struct PAD_INFO;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct SubObject;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct Pad_KeyConfig;
typedef struct _anon1;
typedef struct _anon2;
typedef struct shAttackInfo;
typedef struct _anon3;
typedef struct _CL_VHIT_WALL;
typedef union _anon4;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shPlayerWork;
typedef struct _CL_VHIT_CHARA;
typedef struct Model_List;
typedef struct fsCdFile;
typedef struct _CL_VHIT_RESULT;
typedef union _anon5;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct _anon6;
typedef struct fsMgcFile;
typedef struct _anon7;
typedef struct fsMgfFile;
typedef struct _anon8;
typedef struct fsHdFile;
typedef struct _anon9;
typedef struct fsMgpFile;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct _anon10;

typedef void(*type_13)(SubCharacter*);
typedef void(*type_17)(SubCharacter*);
typedef void(*type_33)();
typedef int(*type_37)();
typedef void(*type_47)(SubCharacter*);
typedef void(*type_52)(SubCharacter*);

typedef short type_0[2];
typedef short type_1[2][4];
typedef short type_2[2][4][9];
typedef _anon1 type_3[61];
typedef unsigned char type_4[4];
typedef int type_5[2];
typedef int type_6[2][9];
typedef unsigned char type_7[4];
typedef short type_8[4];
typedef short type_9[4][10];
typedef PAD_INFO type_10[10];
typedef fsFileIndex type_11[1];
typedef unsigned char type_12[10];
typedef float type_14[4];
typedef fsFileIndex type_15[1];
typedef shAttackInfo type_16[46];
typedef short type_18[3];
typedef short type_19[3][10];
typedef unsigned char type_20[4];
typedef unsigned char type_21[2];
typedef char type_22[0];
typedef fsFileIndex type_23[1];
typedef unsigned char type_24[2];
typedef unsigned char type_25[3];
typedef Model_List type_26[4];
typedef unsigned int type_27[256];
typedef unsigned int type_28[32];
typedef char type_29[4];
typedef unsigned char type_30[4];
typedef char type_31[4];
typedef char type_32[4];
typedef short type_34[4];
typedef short type_35[4][4];
typedef short type_36[4][4][9];
typedef fsFileIndex type_38[1];
typedef unsigned char type_39[4];
typedef unsigned char type_40[10];
typedef short type_41[2];
typedef short type_42[2][4];
typedef short type_43[2][4][9];
typedef float type_44[4];
typedef unsigned char type_45[2];
typedef char type_46[24091];
typedef fsFileIndex type_48[1];
typedef unsigned char type_49[2];
typedef unsigned char type_50[2][2];
typedef unsigned char type_51[2][2][5];
typedef unsigned char type_53[554];
typedef char type_54[4];
typedef fsFileIndex type_55[1];
typedef int(*type_56)()[13];
typedef fsFileIndex type_57[1];
typedef unsigned char type_58[13];
typedef short type_59[2];
typedef short type_60[2][9];
typedef fsFileIndex type_61[1];
typedef fsFileIndex type_62[1];
typedef float type_63[2];
typedef float type_64[2][3];
typedef float type_65[2][3][5];
typedef fsFileIndex type_66[1];
typedef float type_67[4];
typedef float type_68[4][4];
typedef unsigned char type_69[34];
typedef unsigned char type_70[4];
typedef unsigned char type_71[4][9];
typedef float type_72[4][2];
typedef fsFileIndex type_73[1];

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

struct PAD_3D
{
	char round_way;
	unsigned char reserved1;
	unsigned char lslide;
	unsigned char rslide;
	unsigned char lturn180;
	unsigned char rturn180;
};

struct sh2gfw_AREA_HEAD
{
	unsigned int area_id;
	unsigned int toGlobalTexHead;
	unsigned int toGlobalClutsHead;
	unsigned int date;
};

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

struct _anon3
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
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

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
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

struct _anon9
{
	float d[4][4];
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

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
unsigned char ev_pos[554];
_anon1 ev_list[61];
char dds_tsuri[24091];
int(*ev_prog)()[13];
Model_List mdl_list[4];
_anon8 stage_hospital_3f_f;
shPlayerWork sh2jms;
int ev_s_step;
int ev_p_step;
Pad_KeyConfig key_config;
fsFileIndex data_pic_hsp_p_boxnumber_2_tex[1];
fsFileIndex data_pic_hsp_p_boxnumber_tex[1];
_anon2 game_flag;
char pic_buf_1[0];
fsFileIndex data_pic_hsp_p_drainage_key_tex[1];
fsFileIndex data_pic_hsp_p_drainage_tex[1];
float ev_timer;
float dtf;
fsFileIndex data_pic_hsp_p_hair_hair_tex[1];
fsFileIndex data_pic_hsp_p_hair_tex[1];
float guruguru_alpha;
float carbon_alpha;
float chain_alpha;
char push_number[4];
fsFileIndex data_pic_etc_carsol_tex[1];
fsFileIndex data_pic_hsp_pboxkey01_tex[1];
fsFileIndex data_pic_hsp_p_box_tex[1];
float ev_cursor_x;
float ev_cursor_y;
fsFileIndex data_pic_hsp_p_panel02_tex[1];
fsFileIndex data_pic_hsp_p_panel_tex[1];
char set_pass_number_answer[4];
Playing_Info playing;
int ev_prog_flag_set;
int ev_cancel;

int EvProgLostMaria();
int EvProgGetRoofKey();
int EvProgGuruguruNumber();
void EvProgSubGuruguruDraw();
int EvProgOnlyNeedle();
int EvProgOnlyHair();
int EvProgInShowerDrain();
int EvProgFishKey();
int EvProgBoxWithKey();
void EvProgSubKeyLayer();
void EvProgSubKeyCursor();
void EvProgSubHairInBox(int alpha);
int EvProgEmptyBox();
int EvProgSetPassNumberT();
void EvProgSubSetNumberPicDisp();
void EvProgSubSetNumberButton();
int EvProgLouiseTakecare();
int EvProgUseElevatorKey();

// 
// Start address: 0x227670
int EvProgLostMaria()
{
	// Line 148, Address: 0x227670, Func Offset: 0
	// Line 149, Address: 0x227674, Func Offset: 0x4
	// Func End, Address: 0x22767c, Func Offset: 0xc
}

// 
// Start address: 0x227680
int EvProgGetRoofKey()
{
	// Line 155, Address: 0x227680, Func Offset: 0
	// Line 156, Address: 0x227688, Func Offset: 0x8
	// Line 157, Address: 0x227698, Func Offset: 0x18
	// Func End, Address: 0x2276a8, Func Offset: 0x28
}

// 
// Start address: 0x2276b0
int EvProgGuruguruNumber()
{
	// Line 163, Address: 0x2276b0, Func Offset: 0
	// Line 164, Address: 0x2276b8, Func Offset: 0x8
	// Line 166, Address: 0x227724, Func Offset: 0x74
	// Line 167, Address: 0x227738, Func Offset: 0x88
	// Line 168, Address: 0x22776c, Func Offset: 0xbc
	// Line 169, Address: 0x227780, Func Offset: 0xd0
	// Line 172, Address: 0x227788, Func Offset: 0xd8
	// Line 173, Address: 0x22779c, Func Offset: 0xec
	// Line 174, Address: 0x2277b0, Func Offset: 0x100
	// Line 177, Address: 0x2277b8, Func Offset: 0x108
	// Line 180, Address: 0x2277e0, Func Offset: 0x130
	// Line 181, Address: 0x2277f0, Func Offset: 0x140
	// Line 182, Address: 0x227804, Func Offset: 0x154
	// Line 185, Address: 0x22780c, Func Offset: 0x15c
	// Line 186, Address: 0x227814, Func Offset: 0x164
	// Line 187, Address: 0x22781c, Func Offset: 0x16c
	// Line 188, Address: 0x227824, Func Offset: 0x174
	// Line 189, Address: 0x22782c, Func Offset: 0x17c
	// Line 190, Address: 0x227850, Func Offset: 0x1a0
	// Line 193, Address: 0x227858, Func Offset: 0x1a8
	// Line 194, Address: 0x227860, Func Offset: 0x1b0
	// Line 195, Address: 0x227868, Func Offset: 0x1b8
	// Line 196, Address: 0x227870, Func Offset: 0x1c0
	// Line 197, Address: 0x227878, Func Offset: 0x1c8
	// Line 198, Address: 0x2278a0, Func Offset: 0x1f0
	// Line 199, Address: 0x2278b4, Func Offset: 0x204
	// Line 202, Address: 0x2278bc, Func Offset: 0x20c
	// Line 203, Address: 0x2278c4, Func Offset: 0x214
	// Line 204, Address: 0x2278cc, Func Offset: 0x21c
	// Line 205, Address: 0x2278d4, Func Offset: 0x224
	// Line 206, Address: 0x2278dc, Func Offset: 0x22c
	// Line 207, Address: 0x2278e4, Func Offset: 0x234
	// Line 208, Address: 0x2278f8, Func Offset: 0x248
	// Line 209, Address: 0x227908, Func Offset: 0x258
	// Line 210, Address: 0x22791c, Func Offset: 0x26c
	// Line 213, Address: 0x227924, Func Offset: 0x274
	// Line 214, Address: 0x22792c, Func Offset: 0x27c
	// Line 215, Address: 0x227934, Func Offset: 0x284
	// Line 216, Address: 0x22793c, Func Offset: 0x28c
	// Line 217, Address: 0x227944, Func Offset: 0x294
	// Line 218, Address: 0x22794c, Func Offset: 0x29c
	// Line 219, Address: 0x227970, Func Offset: 0x2c0
	// Line 222, Address: 0x227978, Func Offset: 0x2c8
	// Line 223, Address: 0x22798c, Func Offset: 0x2dc
	// Line 225, Address: 0x227998, Func Offset: 0x2e8
	// Line 226, Address: 0x22799c, Func Offset: 0x2ec
	// Func End, Address: 0x2279ac, Func Offset: 0x2fc
}

// 
// Start address: 0x2279b0
void EvProgSubGuruguruDraw()
{
	int i;
	int no;
	PicDraw_Data pic;
	short tex[4][4][9];
	short pos[2][4][9];
	// Line 231, Address: 0x2279b0, Func Offset: 0
	// Line 265, Address: 0x2279c0, Func Offset: 0x10
	// Line 267, Address: 0x2279dc, Func Offset: 0x2c
	// Line 269, Address: 0x2279ec, Func Offset: 0x3c
	// Line 270, Address: 0x227a14, Func Offset: 0x64
	// Line 271, Address: 0x227a1c, Func Offset: 0x6c
	// Line 272, Address: 0x227a50, Func Offset: 0xa0
	// Line 273, Address: 0x227a5c, Func Offset: 0xac
	// Line 277, Address: 0x227a74, Func Offset: 0xc4
	// Line 280, Address: 0x227b88, Func Offset: 0x1d8
	// Line 281, Address: 0x227c4c, Func Offset: 0x29c
	// Line 282, Address: 0x227c58, Func Offset: 0x2a8
	// Line 283, Address: 0x227c6c, Func Offset: 0x2bc
	// Func End, Address: 0x227c84, Func Offset: 0x2d4
}

// 
// Start address: 0x227c90
int EvProgOnlyNeedle()
{
	// Line 288, Address: 0x227c90, Func Offset: 0
	// Line 289, Address: 0x227c98, Func Offset: 0x8
	// Line 291, Address: 0x227ce0, Func Offset: 0x50
	// Line 292, Address: 0x227cf4, Func Offset: 0x64
	// Line 293, Address: 0x227d00, Func Offset: 0x70
	// Line 297, Address: 0x227d14, Func Offset: 0x84
	// Line 298, Address: 0x227d24, Func Offset: 0x94
	// Line 299, Address: 0x227d34, Func Offset: 0xa4
	// Line 303, Address: 0x227d48, Func Offset: 0xb8
	// Line 304, Address: 0x227d5c, Func Offset: 0xcc
	// Line 305, Address: 0x227d6c, Func Offset: 0xdc
	// Line 309, Address: 0x227d80, Func Offset: 0xf0
	// Line 310, Address: 0x227d98, Func Offset: 0x108
	// Line 313, Address: 0x227dac, Func Offset: 0x11c
	// Line 314, Address: 0x227db0, Func Offset: 0x120
	// Line 315, Address: 0x227dc4, Func Offset: 0x134
	// Line 317, Address: 0x227dd0, Func Offset: 0x140
	// Line 318, Address: 0x227dd4, Func Offset: 0x144
	// Func End, Address: 0x227de4, Func Offset: 0x154
}

// 
// Start address: 0x227df0
int EvProgOnlyHair()
{
	// Line 323, Address: 0x227df0, Func Offset: 0
	// Line 324, Address: 0x227df8, Func Offset: 0x8
	// Line 326, Address: 0x227e40, Func Offset: 0x50
	// Line 327, Address: 0x227e54, Func Offset: 0x64
	// Line 328, Address: 0x227e60, Func Offset: 0x70
	// Line 332, Address: 0x227e74, Func Offset: 0x84
	// Line 333, Address: 0x227e84, Func Offset: 0x94
	// Line 334, Address: 0x227e94, Func Offset: 0xa4
	// Line 338, Address: 0x227ea8, Func Offset: 0xb8
	// Line 339, Address: 0x227ebc, Func Offset: 0xcc
	// Line 340, Address: 0x227ecc, Func Offset: 0xdc
	// Line 344, Address: 0x227ee0, Func Offset: 0xf0
	// Line 345, Address: 0x227ef8, Func Offset: 0x108
	// Line 348, Address: 0x227f0c, Func Offset: 0x11c
	// Line 349, Address: 0x227f10, Func Offset: 0x120
	// Line 350, Address: 0x227f24, Func Offset: 0x134
	// Line 352, Address: 0x227f30, Func Offset: 0x140
	// Line 353, Address: 0x227f34, Func Offset: 0x144
	// Func End, Address: 0x227f44, Func Offset: 0x154
}

// 
// Start address: 0x227f50
int EvProgInShowerDrain()
{
	int msg;
	// Line 359, Address: 0x227f50, Func Offset: 0
	// Line 362, Address: 0x227f5c, Func Offset: 0xc
	// Line 364, Address: 0x227fc8, Func Offset: 0x78
	// Line 365, Address: 0x227fdc, Func Offset: 0x8c
	// Line 366, Address: 0x227fe8, Func Offset: 0x98
	// Line 370, Address: 0x227ffc, Func Offset: 0xac
	// Line 371, Address: 0x22800c, Func Offset: 0xbc
	// Line 372, Address: 0x22801c, Func Offset: 0xcc
	// Line 376, Address: 0x228030, Func Offset: 0xe0
	// Line 379, Address: 0x228058, Func Offset: 0x108
	// Line 380, Address: 0x228068, Func Offset: 0x118
	// Line 384, Address: 0x22807c, Func Offset: 0x12c
	// Line 385, Address: 0x228084, Func Offset: 0x134
	// Line 386, Address: 0x22808c, Func Offset: 0x13c
	// Line 387, Address: 0x2280a4, Func Offset: 0x154
	// Line 388, Address: 0x2280c0, Func Offset: 0x170
	// Line 389, Address: 0x2280c8, Func Offset: 0x178
	// Line 390, Address: 0x2280ec, Func Offset: 0x19c
	// Line 393, Address: 0x2280f4, Func Offset: 0x1a4
	// Line 394, Address: 0x2280fc, Func Offset: 0x1ac
	// Line 395, Address: 0x228104, Func Offset: 0x1b4
	// Line 396, Address: 0x22811c, Func Offset: 0x1cc
	// Line 397, Address: 0x228138, Func Offset: 0x1e8
	// Line 398, Address: 0x22813c, Func Offset: 0x1ec
	// Line 399, Address: 0x228148, Func Offset: 0x1f8
	// Line 400, Address: 0x228150, Func Offset: 0x200
	// Line 401, Address: 0x228164, Func Offset: 0x214
	// Line 402, Address: 0x228174, Func Offset: 0x224
	// Line 403, Address: 0x228188, Func Offset: 0x238
	// Line 406, Address: 0x228190, Func Offset: 0x240
	// Line 407, Address: 0x228198, Func Offset: 0x248
	// Line 408, Address: 0x2281a0, Func Offset: 0x250
	// Line 409, Address: 0x2281b8, Func Offset: 0x268
	// Line 410, Address: 0x2281d4, Func Offset: 0x284
	// Line 411, Address: 0x2281dc, Func Offset: 0x28c
	// Line 412, Address: 0x2281ec, Func Offset: 0x29c
	// Line 413, Address: 0x2281fc, Func Offset: 0x2ac
	// Line 417, Address: 0x228210, Func Offset: 0x2c0
	// Line 418, Address: 0x228228, Func Offset: 0x2d8
	// Line 421, Address: 0x22823c, Func Offset: 0x2ec
	// Line 422, Address: 0x228240, Func Offset: 0x2f0
	// Line 423, Address: 0x228254, Func Offset: 0x304
	// Line 425, Address: 0x228260, Func Offset: 0x310
	// Line 426, Address: 0x228264, Func Offset: 0x314
	// Func End, Address: 0x228278, Func Offset: 0x328
}

// 
// Start address: 0x228280
int EvProgFishKey()
{
	// Line 441, Address: 0x228280, Func Offset: 0
	// Line 442, Address: 0x228284, Func Offset: 0x4
	// Func End, Address: 0x22828c, Func Offset: 0xc
}

// 
// Start address: 0x228290
int EvProgBoxWithKey()
{
	int i;
	// Line 454, Address: 0x228290, Func Offset: 0
	// Line 457, Address: 0x228298, Func Offset: 0x8
	// Line 459, Address: 0x228340, Func Offset: 0xb0
	// Line 460, Address: 0x228354, Func Offset: 0xc4
	// Line 461, Address: 0x228384, Func Offset: 0xf4
	// Line 462, Address: 0x2283b0, Func Offset: 0x120
	// Line 463, Address: 0x2283c0, Func Offset: 0x130
	// Line 464, Address: 0x2283ec, Func Offset: 0x15c
	// Line 465, Address: 0x2283fc, Func Offset: 0x16c
	// Line 466, Address: 0x228428, Func Offset: 0x198
	// Line 467, Address: 0x228438, Func Offset: 0x1a8
	// Line 468, Address: 0x22844c, Func Offset: 0x1bc
	// Line 472, Address: 0x228460, Func Offset: 0x1d0
	// Line 476, Address: 0x22848c, Func Offset: 0x1fc
	// Line 477, Address: 0x22849c, Func Offset: 0x20c
	// Line 478, Address: 0x2284cc, Func Offset: 0x23c
	// Line 479, Address: 0x2284e8, Func Offset: 0x258
	// Line 480, Address: 0x2284fc, Func Offset: 0x26c
	// Line 483, Address: 0x228504, Func Offset: 0x274
	// Line 484, Address: 0x22850c, Func Offset: 0x27c
	// Line 485, Address: 0x228514, Func Offset: 0x284
	// Line 486, Address: 0x22851c, Func Offset: 0x28c
	// Line 487, Address: 0x228524, Func Offset: 0x294
	// Line 488, Address: 0x22852c, Func Offset: 0x29c
	// Line 489, Address: 0x228544, Func Offset: 0x2b4
	// Line 491, Address: 0x22855c, Func Offset: 0x2cc
	// Line 492, Address: 0x228574, Func Offset: 0x2e4
	// Line 493, Address: 0x228590, Func Offset: 0x300
	// Line 494, Address: 0x2285a8, Func Offset: 0x318
	// Line 495, Address: 0x2285bc, Func Offset: 0x32c
	// Line 497, Address: 0x2285c4, Func Offset: 0x334
	// Line 500, Address: 0x22860c, Func Offset: 0x37c
	// Line 501, Address: 0x228628, Func Offset: 0x398
	// Line 502, Address: 0x22863c, Func Offset: 0x3ac
	// Line 503, Address: 0x228644, Func Offset: 0x3b4
	// Line 505, Address: 0x22865c, Func Offset: 0x3cc
	// Line 506, Address: 0x228674, Func Offset: 0x3e4
	// Line 507, Address: 0x228690, Func Offset: 0x400
	// Line 509, Address: 0x2286a4, Func Offset: 0x414
	// Line 512, Address: 0x2286ac, Func Offset: 0x41c
	// Line 513, Address: 0x2286b4, Func Offset: 0x424
	// Line 514, Address: 0x2286bc, Func Offset: 0x42c
	// Line 515, Address: 0x2286c4, Func Offset: 0x434
	// Line 516, Address: 0x2286d0, Func Offset: 0x440
	// Line 517, Address: 0x2286d8, Func Offset: 0x448
	// Line 518, Address: 0x2286e0, Func Offset: 0x450
	// Line 523, Address: 0x2287b4, Func Offset: 0x524
	// Line 525, Address: 0x2287cc, Func Offset: 0x53c
	// Line 526, Address: 0x2287e0, Func Offset: 0x550
	// Line 531, Address: 0x2288a0, Func Offset: 0x610
	// Line 532, Address: 0x2288b8, Func Offset: 0x628
	// Line 533, Address: 0x2288d0, Func Offset: 0x640
	// Line 534, Address: 0x2288e4, Func Offset: 0x654
	// Line 535, Address: 0x228908, Func Offset: 0x678
	// Line 537, Address: 0x22891c, Func Offset: 0x68c
	// Line 540, Address: 0x228924, Func Offset: 0x694
	// Line 541, Address: 0x228940, Func Offset: 0x6b0
	// Line 542, Address: 0x228960, Func Offset: 0x6d0
	// Line 543, Address: 0x22896c, Func Offset: 0x6dc
	// Line 546, Address: 0x2289b4, Func Offset: 0x724
	// Line 547, Address: 0x2289d0, Func Offset: 0x740
	// Line 549, Address: 0x2289e8, Func Offset: 0x758
	// Line 550, Address: 0x2289f0, Func Offset: 0x760
	// Line 551, Address: 0x2289f8, Func Offset: 0x768
	// Line 552, Address: 0x228a00, Func Offset: 0x770
	// Line 553, Address: 0x228a08, Func Offset: 0x778
	// Line 556, Address: 0x228a10, Func Offset: 0x780
	// Line 557, Address: 0x228a2c, Func Offset: 0x79c
	// Line 558, Address: 0x228a4c, Func Offset: 0x7bc
	// Line 559, Address: 0x228a58, Func Offset: 0x7c8
	// Line 562, Address: 0x228aa0, Func Offset: 0x810
	// Line 563, Address: 0x228abc, Func Offset: 0x82c
	// Line 565, Address: 0x228ad0, Func Offset: 0x840
	// Line 566, Address: 0x228ad8, Func Offset: 0x848
	// Line 567, Address: 0x228ae0, Func Offset: 0x850
	// Line 568, Address: 0x228ae8, Func Offset: 0x858
	// Line 569, Address: 0x228af0, Func Offset: 0x860
	// Line 572, Address: 0x228af8, Func Offset: 0x868
	// Line 573, Address: 0x228b14, Func Offset: 0x884
	// Line 574, Address: 0x228b34, Func Offset: 0x8a4
	// Line 575, Address: 0x228b40, Func Offset: 0x8b0
	// Line 578, Address: 0x228b88, Func Offset: 0x8f8
	// Line 579, Address: 0x228ba4, Func Offset: 0x914
	// Line 581, Address: 0x228bb8, Func Offset: 0x928
	// Line 582, Address: 0x228bc0, Func Offset: 0x930
	// Line 583, Address: 0x228bc8, Func Offset: 0x938
	// Line 584, Address: 0x228bd0, Func Offset: 0x940
	// Line 585, Address: 0x228bd8, Func Offset: 0x948
	// Line 588, Address: 0x228be0, Func Offset: 0x950
	// Line 589, Address: 0x228be8, Func Offset: 0x958
	// Line 590, Address: 0x228bf0, Func Offset: 0x960
	// Line 591, Address: 0x228bf8, Func Offset: 0x968
	// Line 593, Address: 0x228c20, Func Offset: 0x990
	// Line 594, Address: 0x228c2c, Func Offset: 0x99c
	// Line 596, Address: 0x228c40, Func Offset: 0x9b0
	// Line 599, Address: 0x228c48, Func Offset: 0x9b8
	// Line 600, Address: 0x228c50, Func Offset: 0x9c0
	// Line 601, Address: 0x228c58, Func Offset: 0x9c8
	// Line 602, Address: 0x228c64, Func Offset: 0x9d4
	// Line 603, Address: 0x228c6c, Func Offset: 0x9dc
	// Line 604, Address: 0x228ca4, Func Offset: 0xa14
	// Line 605, Address: 0x228cb8, Func Offset: 0xa28
	// Line 608, Address: 0x228cc0, Func Offset: 0xa30
	// Line 609, Address: 0x228cc8, Func Offset: 0xa38
	// Line 610, Address: 0x228cd0, Func Offset: 0xa40
	// Line 611, Address: 0x228cdc, Func Offset: 0xa4c
	// Line 612, Address: 0x228ce4, Func Offset: 0xa54
	// Line 613, Address: 0x228cec, Func Offset: 0xa5c
	// Line 614, Address: 0x228d14, Func Offset: 0xa84
	// Line 617, Address: 0x228d1c, Func Offset: 0xa8c
	// Line 618, Address: 0x228d38, Func Offset: 0xaa8
	// Line 619, Address: 0x228d5c, Func Offset: 0xacc
	// Line 620, Address: 0x228d6c, Func Offset: 0xadc
	// Line 622, Address: 0x228d80, Func Offset: 0xaf0
	// Line 623, Address: 0x228d88, Func Offset: 0xaf8
	// Line 624, Address: 0x228d90, Func Offset: 0xb00
	// Line 626, Address: 0x228dcc, Func Offset: 0xb3c
	// Line 627, Address: 0x228dd4, Func Offset: 0xb44
	// Line 630, Address: 0x228ddc, Func Offset: 0xb4c
	// Line 631, Address: 0x228de4, Func Offset: 0xb54
	// Line 632, Address: 0x228dec, Func Offset: 0xb5c
	// Line 633, Address: 0x228df4, Func Offset: 0xb64
	// Line 634, Address: 0x228dfc, Func Offset: 0xb6c
	// Line 635, Address: 0x228e14, Func Offset: 0xb84
	// Line 636, Address: 0x228e28, Func Offset: 0xb98
	// Line 638, Address: 0x228e3c, Func Offset: 0xbac
	// Line 641, Address: 0x228e44, Func Offset: 0xbb4
	// Line 642, Address: 0x228e58, Func Offset: 0xbc8
	// Line 644, Address: 0x228e64, Func Offset: 0xbd4
	// Line 645, Address: 0x228e68, Func Offset: 0xbd8
	// Func End, Address: 0x228e78, Func Offset: 0xbe8
}

// 
// Start address: 0x228e80
void EvProgSubKeyLayer()
{
	int i;
	int no;
	PicDraw_Data pic;
	short chn_tex[4][10];
	short chn_pos[3][10];
	unsigned char cyl_tex[4][9];
	short cyl_pos[2][4][9];
	// Line 650, Address: 0x228e80, Func Offset: 0
	// Line 687, Address: 0x228e8c, Func Offset: 0xc
	// Line 689, Address: 0x228ea8, Func Offset: 0x28
	// Line 691, Address: 0x228eb8, Func Offset: 0x38
	// Line 693, Address: 0x228ee0, Func Offset: 0x60
	// Line 696, Address: 0x228f00, Func Offset: 0x80
	// Line 697, Address: 0x228f2c, Func Offset: 0xac
	// Line 698, Address: 0x228f50, Func Offset: 0xd0
	// Line 700, Address: 0x228f58, Func Offset: 0xd8
	// Line 701, Address: 0x228fac, Func Offset: 0x12c
	// Line 704, Address: 0x228fb8, Func Offset: 0x138
	// Line 705, Address: 0x228fc4, Func Offset: 0x144
	// Line 711, Address: 0x228fdc, Func Offset: 0x15c
	// Line 714, Address: 0x2290e0, Func Offset: 0x260
	// Line 715, Address: 0x229174, Func Offset: 0x2f4
	// Line 717, Address: 0x22917c, Func Offset: 0x2fc
	// Line 718, Address: 0x2291d0, Func Offset: 0x350
	// Line 719, Address: 0x2291dc, Func Offset: 0x35c
	// Line 720, Address: 0x2291ec, Func Offset: 0x36c
	// Line 722, Address: 0x2291f0, Func Offset: 0x370
	// Line 725, Address: 0x229210, Func Offset: 0x390
	// Line 726, Address: 0x22923c, Func Offset: 0x3bc
	// Line 727, Address: 0x229264, Func Offset: 0x3e4
	// Line 729, Address: 0x22926c, Func Offset: 0x3ec
	// Line 730, Address: 0x2292c0, Func Offset: 0x440
	// Line 733, Address: 0x2292cc, Func Offset: 0x44c
	// Line 735, Address: 0x2292ec, Func Offset: 0x46c
	// Line 739, Address: 0x2292f8, Func Offset: 0x478
	// Line 742, Address: 0x2293ec, Func Offset: 0x56c
	// Line 743, Address: 0x229490, Func Offset: 0x610
	// Line 745, Address: 0x2294b4, Func Offset: 0x634
	// Line 746, Address: 0x229508, Func Offset: 0x688
	// Line 747, Address: 0x229514, Func Offset: 0x694
	// Line 748, Address: 0x229524, Func Offset: 0x6a4
	// Line 749, Address: 0x229528, Func Offset: 0x6a8
	// Func End, Address: 0x22953c, Func Offset: 0x6bc
}

// 
// Start address: 0x229540
void EvProgSubKeyCursor()
{
	int j;
	int i;
	float work_y;
	float work_x;
	float cyl_touch[2][3][5];
	short btn_center_s[2][9];
	unsigned char cyl_touch_c[2][2][5];
	// Line 760, Address: 0x229540, Func Offset: 0
	// Line 777, Address: 0x22954c, Func Offset: 0xc
	// Line 779, Address: 0x229568, Func Offset: 0x28
	// Line 780, Address: 0x229574, Func Offset: 0x34
	// Line 781, Address: 0x2295b0, Func Offset: 0x70
	// Line 783, Address: 0x22960c, Func Offset: 0xcc
	// Line 784, Address: 0x229648, Func Offset: 0x108
	// Line 785, Address: 0x229680, Func Offset: 0x140
	// Line 787, Address: 0x2296d8, Func Offset: 0x198
	// Line 788, Address: 0x229710, Func Offset: 0x1d0
	// Line 790, Address: 0x229724, Func Offset: 0x1e4
	// Line 791, Address: 0x22973c, Func Offset: 0x1fc
	// Line 792, Address: 0x229748, Func Offset: 0x208
	// Line 796, Address: 0x229a68, Func Offset: 0x528
	// Line 797, Address: 0x229a80, Func Offset: 0x540
	// Line 798, Address: 0x229ab8, Func Offset: 0x578
	// Line 800, Address: 0x229ad0, Func Offset: 0x590
	// Line 804, Address: 0x229df0, Func Offset: 0x8b0
	// Line 805, Address: 0x229e08, Func Offset: 0x8c8
	// Line 806, Address: 0x229e40, Func Offset: 0x900
	// Line 808, Address: 0x229e58, Func Offset: 0x918
	// Line 809, Address: 0x229e6c, Func Offset: 0x92c
	// Line 811, Address: 0x229e70, Func Offset: 0x930
	// Line 812, Address: 0x229e7c, Func Offset: 0x93c
	// Line 813, Address: 0x229ec4, Func Offset: 0x984
	// Line 814, Address: 0x229efc, Func Offset: 0x9bc
	// Line 815, Address: 0x229f24, Func Offset: 0x9e4
	// Line 816, Address: 0x229f64, Func Offset: 0xa24
	// Line 817, Address: 0x229f6c, Func Offset: 0xa2c
	// Line 818, Address: 0x229f70, Func Offset: 0xa30
	// Line 819, Address: 0x229f84, Func Offset: 0xa44
	// Func End, Address: 0x229f98, Func Offset: 0xa58
}

// 
// Start address: 0x229fa0
void EvProgSubHairInBox(int alpha)
{
	PicDraw_Data pic;
	// Line 824, Address: 0x229fa0, Func Offset: 0
	// Line 827, Address: 0x229fac, Func Offset: 0xc
	// Line 829, Address: 0x229fc8, Func Offset: 0x28
	// Line 831, Address: 0x229fd8, Func Offset: 0x38
	// Line 832, Address: 0x22a000, Func Offset: 0x60
	// Line 833, Address: 0x22a008, Func Offset: 0x68
	// Line 834, Address: 0x22a040, Func Offset: 0xa0
	// Line 835, Address: 0x22a06c, Func Offset: 0xcc
	// Line 836, Address: 0x22a078, Func Offset: 0xd8
	// Func End, Address: 0x22a088, Func Offset: 0xe8
}

// 
// Start address: 0x22a090
int EvProgEmptyBox()
{
	// Line 842, Address: 0x22a090, Func Offset: 0
	// Line 843, Address: 0x22a098, Func Offset: 0x8
	// Line 845, Address: 0x22a0ac, Func Offset: 0x1c
	// Func End, Address: 0x22a0bc, Func Offset: 0x2c
}

// 
// Start address: 0x22a0c0
int EvProgSetPassNumberT()
{
	int i;
	// Line 852, Address: 0x22a0c0, Func Offset: 0
	// Line 855, Address: 0x22a0cc, Func Offset: 0xc
	// Line 857, Address: 0x22a120, Func Offset: 0x60
	// Line 858, Address: 0x22a134, Func Offset: 0x74
	// Line 859, Address: 0x22a140, Func Offset: 0x80
	// Line 860, Address: 0x22a16c, Func Offset: 0xac
	// Line 861, Address: 0x22a180, Func Offset: 0xc0
	// Line 865, Address: 0x22a194, Func Offset: 0xd4
	// Line 869, Address: 0x22a1c0, Func Offset: 0x100
	// Line 870, Address: 0x22a1d0, Func Offset: 0x110
	// Line 874, Address: 0x22a1e4, Func Offset: 0x124
	// Line 875, Address: 0x22a1ec, Func Offset: 0x12c
	// Line 876, Address: 0x22a210, Func Offset: 0x150
	// Line 879, Address: 0x22a218, Func Offset: 0x158
	// Line 880, Address: 0x22a220, Func Offset: 0x160
	// Line 881, Address: 0x22a228, Func Offset: 0x168
	// Line 883, Address: 0x22a25c, Func Offset: 0x19c
	// Line 884, Address: 0x22a270, Func Offset: 0x1b0
	// Line 885, Address: 0x22a280, Func Offset: 0x1c0
	// Line 888, Address: 0x22a288, Func Offset: 0x1c8
	// Line 889, Address: 0x22a290, Func Offset: 0x1d0
	// Line 890, Address: 0x22a2b4, Func Offset: 0x1f4
	// Line 893, Address: 0x22a2bc, Func Offset: 0x1fc
	// Line 894, Address: 0x22a2d0, Func Offset: 0x210
	// Line 895, Address: 0x22a2e0, Func Offset: 0x220
	// Line 897, Address: 0x22a2ec, Func Offset: 0x22c
	// Line 898, Address: 0x22a2f0, Func Offset: 0x230
	// Func End, Address: 0x22a304, Func Offset: 0x244
}

// 
// Start address: 0x22a310
void EvProgSubSetNumberPicDisp()
{
	PicDraw_Data pic;
	// Line 903, Address: 0x22a310, Func Offset: 0
	// Line 906, Address: 0x22a318, Func Offset: 0x8
	// Line 907, Address: 0x22a320, Func Offset: 0x10
	// Line 908, Address: 0x22a328, Func Offset: 0x18
	// Line 909, Address: 0x22a340, Func Offset: 0x30
	// Line 911, Address: 0x22a35c, Func Offset: 0x4c
	// Line 913, Address: 0x22a36c, Func Offset: 0x5c
	// Line 914, Address: 0x22a394, Func Offset: 0x84
	// Line 915, Address: 0x22a3c8, Func Offset: 0xb8
	// Line 916, Address: 0x22a3d0, Func Offset: 0xc0
	// Line 917, Address: 0x22a3fc, Func Offset: 0xec
	// Line 918, Address: 0x22a420, Func Offset: 0x110
	// Line 919, Address: 0x22a42c, Func Offset: 0x11c
	// Line 920, Address: 0x22a440, Func Offset: 0x130
	// Line 922, Address: 0x22a448, Func Offset: 0x138
	// Line 923, Address: 0x22a474, Func Offset: 0x164
	// Line 924, Address: 0x22a49c, Func Offset: 0x18c
	// Line 927, Address: 0x22a4a8, Func Offset: 0x198
	// Line 928, Address: 0x22a4c8, Func Offset: 0x1b8
	// Line 929, Address: 0x22a4d0, Func Offset: 0x1c0
	// Func End, Address: 0x22a4e0, Func Offset: 0x1d0
}

// 
// Start address: 0x22a4e0
void EvProgSubSetNumberButton()
{
	int j;
	int i;
	float r;
	float y;
	float x;
	int button[2][9];
	// Line 932, Address: 0x22a4e0, Func Offset: 0
	// Line 943, Address: 0x22a4e8, Func Offset: 0x8
	// Line 945, Address: 0x22a504, Func Offset: 0x24
	// Line 946, Address: 0x22a518, Func Offset: 0x38
	// Line 947, Address: 0x22a524, Func Offset: 0x44
	// Line 948, Address: 0x22a560, Func Offset: 0x80
	// Line 950, Address: 0x22a58c, Func Offset: 0xac
	// Line 951, Address: 0x22a5a8, Func Offset: 0xc8
	// Line 952, Address: 0x22a5b4, Func Offset: 0xd4
	// Line 953, Address: 0x22a5ec, Func Offset: 0x10c
	// Line 955, Address: 0x22a5f8, Func Offset: 0x118
	// Line 957, Address: 0x22a600, Func Offset: 0x120
	// Line 960, Address: 0x22a618, Func Offset: 0x138
	// Line 962, Address: 0x22a688, Func Offset: 0x1a8
	// Line 965, Address: 0x22a69c, Func Offset: 0x1bc
	// Func End, Address: 0x22a6ac, Func Offset: 0x1cc
}

// 
// Start address: 0x22a6b0
int EvProgLouiseTakecare()
{
	// Line 970, Address: 0x22a6b0, Func Offset: 0
	// Line 971, Address: 0x22a6b8, Func Offset: 0x8
	// Line 973, Address: 0x22a6f4, Func Offset: 0x44
	// Line 974, Address: 0x22a728, Func Offset: 0x78
	// Line 975, Address: 0x22a740, Func Offset: 0x90
	// Line 976, Address: 0x22a754, Func Offset: 0xa4
	// Line 979, Address: 0x22a75c, Func Offset: 0xac
	// Line 980, Address: 0x22a770, Func Offset: 0xc0
	// Line 981, Address: 0x22a780, Func Offset: 0xd0
	// Line 982, Address: 0x22a788, Func Offset: 0xd8
	// Line 983, Address: 0x22a79c, Func Offset: 0xec
	// Line 985, Address: 0x22a7b8, Func Offset: 0x108
	// Line 988, Address: 0x22a7c0, Func Offset: 0x110
	// Line 989, Address: 0x22a7d4, Func Offset: 0x124
	// Line 990, Address: 0x22a7e8, Func Offset: 0x138
	// Line 993, Address: 0x22a7f0, Func Offset: 0x140
	// Line 994, Address: 0x22a804, Func Offset: 0x154
	// Line 996, Address: 0x22a810, Func Offset: 0x160
	// Line 997, Address: 0x22a814, Func Offset: 0x164
	// Func End, Address: 0x22a824, Func Offset: 0x174
}

// 
// Start address: 0x22a830
int EvProgUseElevatorKey()
{
	// Line 1002, Address: 0x22a830, Func Offset: 0
	// Line 1003, Address: 0x22a838, Func Offset: 0x8
	// Line 1004, Address: 0x22a848, Func Offset: 0x18
	// Func End, Address: 0x22a858, Func Offset: 0x28
}

