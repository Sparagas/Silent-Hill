typedef union fsFile;
typedef struct SPACK_OT_DATA;
typedef struct shBattleArea;
typedef struct SubCharacter;
typedef struct fsCdFile;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct shBattleInfo;
typedef struct shItemScreenObjectSettingData;
typedef struct fsMgcFile;
typedef struct Pad_KeyConfig;
typedef struct _anon0;
typedef struct fsMgfFile;
typedef struct SPACK_ENV_DATA;
typedef struct Item;
typedef struct _anon1;
typedef struct _CL_VHIT_WALL;
typedef struct fsHdFile;
typedef struct _CL_HITPOLY_HEAD;
typedef struct SPACK_STATIC_DATA;
typedef struct PicDraw_Data;
typedef struct shAttackInfo;
typedef struct PAD_3D;
typedef struct sh2gfw_AREA_HEAD;
typedef struct _CL_VHIT_CHARA;
typedef struct fsMgpFile;
typedef struct SPACK_DATA;
typedef union _anon2;
typedef struct _CL_VHIT_RESULT;
typedef struct _anon3;
typedef union _anon4;
typedef struct PAD_2D;
typedef struct _anon5;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct PAD_INFO;
typedef struct shSkelton;
typedef union fsFileIndex;
typedef struct _anon6;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct _anon7;
typedef struct _anon8;
typedef struct shPlayerWork;
typedef struct shBattleFight;
typedef struct _SH2_SYS;
typedef struct shBattleShot;

typedef void(*type_42)(SubCharacter*);
typedef void(*type_46)(SubCharacter*);

typedef fsFileIndex type_0[1];
typedef float type_1[8];
typedef short type_2[3];
typedef unsigned char type_3[97];
typedef fsFileIndex type_4[1];
typedef float type_5[4];
typedef fsFileIndex type_6[1];
typedef unsigned char type_7[4];
typedef float type_8[4];
typedef fsFileIndex type_9[1];
typedef fsFileIndex type_10[1];
typedef unsigned char type_11[2];
typedef unsigned int type_12[2];
typedef unsigned short type_13[11];
typedef float type_14[2];
typedef _anon1 type_15[75];
typedef fsFileIndex type_16[1];
typedef float type_17[80];
typedef unsigned short type_18[3];
typedef unsigned char type_19[20];
typedef fsFileIndex type_20[1];
typedef fsFileIndex type_21[1];
typedef int type_22[6];
typedef unsigned short type_23[0];
typedef float type_24[4];
typedef float type_25[4][4];
typedef fsFileIndex type_26[1];
typedef PAD_INFO type_27[10];
typedef fsFileIndex type_28[1];
typedef unsigned char type_29[14];
typedef shAttackInfo type_30[66];
typedef fsFileIndex type_31[1];
typedef float type_32[2];
typedef unsigned char type_33[3];
typedef fsFileIndex type_34[1];
typedef unsigned char type_35[4];
typedef unsigned char type_36[4];
typedef fsFileIndex type_37[1];
typedef float type_38[4][2];
typedef unsigned int type_39[255];
typedef fsFileIndex type_40[1];
typedef unsigned char type_41[69];
typedef unsigned int type_43[32];
typedef unsigned char type_44[4];
typedef fsFileIndex type_45[1];
typedef char type_47[4];
typedef fsFileIndex type_48[1];
typedef char type_49[4];
typedef unsigned char type_50[2];
typedef char type_51[4];
typedef unsigned char type_52[2];
typedef fsFileIndex type_53[1];
typedef unsigned char type_54[4];
typedef char type_55[4];
typedef fsFileIndex type_56[1];
typedef fsFileIndex type_57[1];
typedef char type_58[4];
typedef float type_59[4][4];
typedef fsFileIndex type_60[1];
typedef float type_61[4][4];
typedef float type_62[4][4][7];
typedef fsFileIndex type_63[1];
typedef shItemScreenObjectSettingData type_64[58];
typedef unsigned int type_65[8];
typedef unsigned char type_66[14];
typedef fsFileIndex type_67[1];

union fsFile
{
	_anon5 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
};

struct SPACK_OT_DATA
{
	unsigned short DmaQwc;
	unsigned short DmaId;
	void* Addr;
	unsigned int W;
	unsigned short VifQwc;
	unsigned char EnvID;
	unsigned char VifDirect;
};

struct shBattleArea
{
	float center;
	float radius;
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
	_anon0 pos;
	_anon0 rot;
	_anon0 pos_spd;
	_anon0 rot_spd;
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
	_anon0 b_pos;
	_anon0 b_rot;
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

struct shItemScreenObjectSettingData
{
	int chara_id;
	float scale;
	_anon0 rot;
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

struct _anon0
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

struct SPACK_ENV_DATA
{
	unsigned short DmaQwc;
	unsigned short DmaId;
	void* Addr;
	unsigned int pad1;
	unsigned short VifQwc;
	unsigned char pad2;
	unsigned char VifDirect;
};

struct Item
{
	unsigned int flag[2];
	unsigned short number[11];
	unsigned char light_switch;
	unsigned char radio_switch;
	unsigned char radio_volume;
	unsigned char equip;
	float ampoule_efficacy;
	unsigned short event_use[3];
	unsigned short short_pad;
	unsigned char last_cursor;
};

struct _anon1
{
	unsigned char kind;
	unsigned char count;
	unsigned char del;
	float pos[2];
	float rot;
	float item_scale;
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
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

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
};

struct SPACK_STATIC_DATA
{
	unsigned short GifNLOOP;
	unsigned short DmaQwc;
	unsigned int PRE_PRIM_FLG_NREG;
	unsigned long REGS;
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
	_anon2 hit_check;
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

struct sh2gfw_AREA_HEAD
{
	unsigned int area_id;
	unsigned int toGlobalTexHead;
	unsigned int toGlobalClutsHead;
	unsigned int date;
};

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
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

struct SPACK_DATA
{
	SPACK_OT_DATA** ot_top;
	SPACK_OT_DATA** ot_last;
	unsigned int ot_size;
	unsigned int ot_width;
	unsigned int w_ofs;
	unsigned int w_mini;
	unsigned int w_max;
	unsigned int envid;
	SPACK_OT_DATA* dma_top;
	SPACK_OT_DATA* dmabuf_pos;
	SPACK_ENV_DATA* env_top;
	unsigned long* pk_last;
	unsigned long* pos;
	short* ot_max;
	<unknown fundamental type (0xa510)>* packet;
	SPACK_STATIC_DATA* ps_top;
	unsigned long* pgiftag;
	unsigned long giftag_b;
	unsigned int flag;
	void* kick_top;
	void* old_lastpos;
};

union _anon2
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon4 hobj;
};

struct _anon3
{
	float d[4][4];
};

union _anon4
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
};

struct _anon5
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

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon3 src_m;
	_anon0 src_t;
	_anon3 des_m;
	_anon0 des_t;
	_anon0 axis;
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

union fsFileIndex
{
	_anon6 index;
	unsigned long pack;
};

struct _anon6
{
	fsFile* fp;
	char* name;
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

struct _anon8
{
	unsigned char main_step;
	unsigned char step;
	unsigned char examine_step;
	short turn_speed;
	short command_cur;
	short command_abe;
	float command_move;
	short gosa;
	short cur_max;
	unsigned char command_volume;
	unsigned char command_light;
	unsigned char prs_btn;
	unsigned char prs_btn2;
	float box[4][4];
	float boxblur[4][4][7];
	short item_no;
	short item_kind;
	short item_count;
	float turnf;
	int volume_time;
	float hp_time1;
	float hp_time2;
	float hp_abe;
	float hp_kodo;
	float hp_abe2;
	short allay_time;
	float allay_abe;
	float sprite_time;
	unsigned char use_item;
	float weapon_scale[8];
	short combine[3];
	float combine_abe;
	unsigned char shelf;
	short use_item_kind;
	unsigned char analog[4];
	float fade;
	unsigned char fade_flag;
	unsigned char fade_step0;
	unsigned char fade_step1;
	short examine_msg;
	int seed;
};

struct shPlayerWork
{
	SubCharacter* player;
	_anon0 dist_rot;
	_anon0 dist_pos;
	_anon0 pos;
	_anon0 rot;
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
	_anon0 tgt_body_angle;
	_anon0 tgt_neck_angle;
	_anon0 tgt_arms_angle;
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct _SH2_SYS
{
	unsigned int step[8];
	unsigned int pre_playable;
	int main_status;
	unsigned int soft_reset;
	unsigned int frame_cnt;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
float item_size[80];
shItemScreenObjectSettingData item_screen_obj_data[58];
_SH2_SYS Sh2sys;
_anon8 t;
Item item;
_anon1 item_select[75];
_anon7 game_flag;
char* layer_adr;
fsFileIndex data_pic_item_x_coinsnake_ura_tex[1];
fsFileIndex data_pic_item_x_coinprisoner_ura_tex[1];
fsFileIndex data_pic_item_x_coinelder_ura_tex[1];
Pad_KeyConfig key_config;
fsFileIndex data_pic_htl_p_redreling_tex[1];
fsFileIndex data_pic_out_p_lostmemory_tex[1];
fsFileIndex data_pic_etc_p_laura_letter_tex[1];
fsFileIndex data_pic_etc_p_letterm_tex[1];
int examine_rgb;
fsFileIndex data_pic_item_x_mary_p_tex[1];
fsFileIndex data_pic_item_x_ringopper_tex[1];
fsFileIndex data_pic_item_x_ringlead_tex[1];
fsFileIndex data_pic_item_x_keyspiral_tex[1];
fsFileIndex data_pic_item_x_keyrapis_tex[1];
fsFileIndex data_pic_item_x_keynorth_tex[1];
fsFileIndex data_pic_item_x_keygate_tex[1];
fsFileIndex data_pic_item_x_plate_female_tex[1];
fsFileIndex data_pic_item_x_plate_pig_tex[1];
fsFileIndex data_pic_item_x_plate_kick_tex[1];
fsFileIndex data_pic_item_x_keyclock_tex[1];
fsFileIndex data_pic_item_x_coinprisoner_tex[1];
fsFileIndex data_pic_item_x_coinelder_tex[1];
fsFileIndex data_pic_item_x_coinsnake_tex[1];
fsFileIndex data_pic_etc_itemmenu2_tex[1];
int lcolor;
SPACK_DATA spack;
unsigned short msg_buffer[0];
int scolor;
shPlayerWork sh2jms;
int ev_s_step;

int itemmain();
void itemmainmain();
void cur_step();
void command_main(int command_step);
void weapon_command_main(int command_step);
void item_main_setup();
void set_position(int step);
void item_turn();
void item_position(float* f0, float* f1, int count, float* r0);
int move_near(float f0, float f1, float f2, float f3);
int command_kind(int kind);
void del_check();
int kind_no(int kind);
void event_item_use(int kind);
void combine_item_use(int kind);
void examine_main();
void examine_file_load();
void examine2_main();
void font_print();
void kage_font(unsigned short* str, unsigned short num, int x, int y);
void lookline(float box[4]);
void item_allay();
void sprite();
void look_command(int gosa);
void look_volume();
void look_hp();
void stock_line(int leftx, int hoge);
void look_combine();
void look_zanzo(float* za0, float* za1, float* za2, float* za3);
void look_blackscr(int num);
void item_fade_in();
void item_fade_out();
void item_examine_fade_out();

// 
// Start address: 0x1cdb40
int itemmain()
{
	// Line 261, Address: 0x1cdb40, Func Offset: 0
	// Line 262, Address: 0x1cdb48, Func Offset: 0x8
	// Line 264, Address: 0x1cdb58, Func Offset: 0x18
	// Line 265, Address: 0x1cdb60, Func Offset: 0x20
	// Line 268, Address: 0x1cdb8c, Func Offset: 0x4c
	// Line 273, Address: 0x1cdbd4, Func Offset: 0x94
	// Line 274, Address: 0x1cdc04, Func Offset: 0xc4
	// Line 275, Address: 0x1cdc0c, Func Offset: 0xcc
	// Line 276, Address: 0x1cdc18, Func Offset: 0xd8
	// Line 277, Address: 0x1cdc4c, Func Offset: 0x10c
	// Line 281, Address: 0x1cdc58, Func Offset: 0x118
	// Line 282, Address: 0x1cdc60, Func Offset: 0x120
	// Line 283, Address: 0x1cdc68, Func Offset: 0x128
	// Line 284, Address: 0x1cdc74, Func Offset: 0x134
	// Line 285, Address: 0x1cdc80, Func Offset: 0x140
	// Line 286, Address: 0x1cdc94, Func Offset: 0x154
	// Line 289, Address: 0x1cdc9c, Func Offset: 0x15c
	// Line 290, Address: 0x1cdcb0, Func Offset: 0x170
	// Line 291, Address: 0x1cdcc0, Func Offset: 0x180
	// Line 292, Address: 0x1cdcd4, Func Offset: 0x194
	// Line 294, Address: 0x1cdce8, Func Offset: 0x1a8
	// Line 297, Address: 0x1cdcf0, Func Offset: 0x1b0
	// Line 298, Address: 0x1cdcf8, Func Offset: 0x1b8
	// Line 299, Address: 0x1cdd00, Func Offset: 0x1c0
	// Line 300, Address: 0x1cdd08, Func Offset: 0x1c8
	// Line 303, Address: 0x1cdd10, Func Offset: 0x1d0
	// Line 304, Address: 0x1cdd18, Func Offset: 0x1d8
	// Line 307, Address: 0x1cdd20, Func Offset: 0x1e0
	// Line 308, Address: 0x1cdd28, Func Offset: 0x1e8
	// Line 309, Address: 0x1cdd38, Func Offset: 0x1f8
	// Line 310, Address: 0x1cdd40, Func Offset: 0x200
	// Line 311, Address: 0x1cdd78, Func Offset: 0x238
	// Line 312, Address: 0x1cdda8, Func Offset: 0x268
	// Line 314, Address: 0x1cddb4, Func Offset: 0x274
	// Line 315, Address: 0x1cddb8, Func Offset: 0x278
	// Func End, Address: 0x1cddc8, Func Offset: 0x288
}

// 
// Start address: 0x1cddd0
void itemmainmain()
{
	int fog;
	int i;
	// Line 321, Address: 0x1cddd0, Func Offset: 0
	// Line 326, Address: 0x1cde00, Func Offset: 0x30
	// Line 327, Address: 0x1cde08, Func Offset: 0x38
	// Line 328, Address: 0x1cde10, Func Offset: 0x40
	// Line 329, Address: 0x1cde24, Func Offset: 0x54
	// Line 332, Address: 0x1cde2c, Func Offset: 0x5c
	// Line 333, Address: 0x1cde48, Func Offset: 0x78
	// Line 334, Address: 0x1cde68, Func Offset: 0x98
	// Line 335, Address: 0x1cde70, Func Offset: 0xa0
	// Line 336, Address: 0x1cde78, Func Offset: 0xa8
	// Line 337, Address: 0x1cde94, Func Offset: 0xc4
	// Line 338, Address: 0x1cdeb4, Func Offset: 0xe4
	// Line 339, Address: 0x1cdebc, Func Offset: 0xec
	// Line 340, Address: 0x1cdec4, Func Offset: 0xf4
	// Line 341, Address: 0x1cdee0, Func Offset: 0x110
	// Line 342, Address: 0x1cdf00, Func Offset: 0x130
	// Line 343, Address: 0x1cdf08, Func Offset: 0x138
	// Line 344, Address: 0x1cdf10, Func Offset: 0x140
	// Line 345, Address: 0x1cdf2c, Func Offset: 0x15c
	// Line 346, Address: 0x1cdf4c, Func Offset: 0x17c
	// Line 347, Address: 0x1cdf54, Func Offset: 0x184
	// Line 350, Address: 0x1cdf5c, Func Offset: 0x18c
	// Line 353, Address: 0x1cdf70, Func Offset: 0x1a0
	// Line 356, Address: 0x1cdf78, Func Offset: 0x1a8
	// Line 357, Address: 0x1cdf84, Func Offset: 0x1b4
	// Line 358, Address: 0x1cdfb4, Func Offset: 0x1e4
	// Line 360, Address: 0x1cdfec, Func Offset: 0x21c
	// Line 361, Address: 0x1ce00c, Func Offset: 0x23c
	// Line 365, Address: 0x1ce030, Func Offset: 0x260
	// Line 367, Address: 0x1ce03c, Func Offset: 0x26c
	// Line 370, Address: 0x1ce060, Func Offset: 0x290
	// Line 371, Address: 0x1ce0b0, Func Offset: 0x2e0
	// Line 372, Address: 0x1ce0c0, Func Offset: 0x2f0
	// Line 381, Address: 0x1ce15c, Func Offset: 0x38c
	// Line 383, Address: 0x1ce174, Func Offset: 0x3a4
	// Line 384, Address: 0x1ce1a4, Func Offset: 0x3d4
	// Line 385, Address: 0x1ce1c4, Func Offset: 0x3f4
	// Line 386, Address: 0x1ce1f4, Func Offset: 0x424
	// Line 387, Address: 0x1ce210, Func Offset: 0x440
	// Line 388, Address: 0x1ce240, Func Offset: 0x470
	// Line 389, Address: 0x1ce248, Func Offset: 0x478
	// Line 390, Address: 0x1ce26c, Func Offset: 0x49c
	// Line 391, Address: 0x1ce270, Func Offset: 0x4a0
	// Line 392, Address: 0x1ce278, Func Offset: 0x4a8
	// Line 393, Address: 0x1ce298, Func Offset: 0x4c8
	// Line 395, Address: 0x1ce2b8, Func Offset: 0x4e8
	// Line 397, Address: 0x1ce2c8, Func Offset: 0x4f8
	// Line 398, Address: 0x1ce2d4, Func Offset: 0x504
	// Line 399, Address: 0x1ce2d8, Func Offset: 0x508
	// Line 401, Address: 0x1ce2e4, Func Offset: 0x514
	// Line 402, Address: 0x1ce300, Func Offset: 0x530
	// Line 404, Address: 0x1ce318, Func Offset: 0x548
	// Line 405, Address: 0x1ce31c, Func Offset: 0x54c
	// Line 406, Address: 0x1ce320, Func Offset: 0x550
	// Line 409, Address: 0x1ce324, Func Offset: 0x554
	// Line 410, Address: 0x1ce328, Func Offset: 0x558
	// Line 414, Address: 0x1ce344, Func Offset: 0x574
	// Line 415, Address: 0x1ce384, Func Offset: 0x5b4
	// Line 416, Address: 0x1ce3bc, Func Offset: 0x5ec
	// Line 417, Address: 0x1ce3f4, Func Offset: 0x624
	// Line 418, Address: 0x1ce42c, Func Offset: 0x65c
	// Line 419, Address: 0x1ce464, Func Offset: 0x694
	// Line 420, Address: 0x1ce49c, Func Offset: 0x6cc
	// Line 421, Address: 0x1ce4d4, Func Offset: 0x704
	// Line 423, Address: 0x1ce504, Func Offset: 0x734
	// Line 425, Address: 0x1ce510, Func Offset: 0x740
	// Line 426, Address: 0x1ce53c, Func Offset: 0x76c
	// Line 427, Address: 0x1ce560, Func Offset: 0x790
	// Line 428, Address: 0x1ce580, Func Offset: 0x7b0
	// Line 430, Address: 0x1ce594, Func Offset: 0x7c4
	// Line 431, Address: 0x1ce5b8, Func Offset: 0x7e8
	// Line 432, Address: 0x1ce5dc, Func Offset: 0x80c
	// Line 433, Address: 0x1ce600, Func Offset: 0x830
	// Line 434, Address: 0x1ce624, Func Offset: 0x854
	// Line 435, Address: 0x1ce648, Func Offset: 0x878
	// Line 436, Address: 0x1ce66c, Func Offset: 0x89c
	// Line 437, Address: 0x1ce690, Func Offset: 0x8c0
	// Line 440, Address: 0x1ce6b4, Func Offset: 0x8e4
	// Line 443, Address: 0x1ce6bc, Func Offset: 0x8ec
	// Line 446, Address: 0x1ce6dc, Func Offset: 0x90c
	// Line 447, Address: 0x1ce72c, Func Offset: 0x95c
	// Line 450, Address: 0x1ce738, Func Offset: 0x968
	// Line 451, Address: 0x1ce764, Func Offset: 0x994
	// Line 452, Address: 0x1ce77c, Func Offset: 0x9ac
	// Line 455, Address: 0x1ce7a0, Func Offset: 0x9d0
	// Line 458, Address: 0x1ce7a8, Func Offset: 0x9d8
	// Line 461, Address: 0x1ce7c4, Func Offset: 0x9f4
	// Line 464, Address: 0x1ce7dc, Func Offset: 0xa0c
	// Line 467, Address: 0x1ce7e4, Func Offset: 0xa14
	// Line 470, Address: 0x1ce7ec, Func Offset: 0xa1c
	// Line 472, Address: 0x1ce82c, Func Offset: 0xa5c
	// Line 475, Address: 0x1ce848, Func Offset: 0xa78
	// Line 478, Address: 0x1ce858, Func Offset: 0xa88
	// Line 479, Address: 0x1ce878, Func Offset: 0xaa8
	// Line 480, Address: 0x1ce894, Func Offset: 0xac4
	// Line 481, Address: 0x1ce8a8, Func Offset: 0xad8
	// Line 482, Address: 0x1ce8c8, Func Offset: 0xaf8
	// Line 483, Address: 0x1ce8e0, Func Offset: 0xb10
	// Line 486, Address: 0x1ce8fc, Func Offset: 0xb2c
	// Line 489, Address: 0x1ce91c, Func Offset: 0xb4c
	// Line 490, Address: 0x1ce930, Func Offset: 0xb60
	// Line 491, Address: 0x1ce958, Func Offset: 0xb88
	// Line 492, Address: 0x1ce978, Func Offset: 0xba8
	// Line 493, Address: 0x1ce9a4, Func Offset: 0xbd4
	// Line 496, Address: 0x1ce9cc, Func Offset: 0xbfc
	// Line 497, Address: 0x1cea28, Func Offset: 0xc58
	// Line 500, Address: 0x1cea60, Func Offset: 0xc90
	// Line 502, Address: 0x1cea6c, Func Offset: 0xc9c
	// Line 503, Address: 0x1cead0, Func Offset: 0xd00
	// Line 505, Address: 0x1ceb20, Func Offset: 0xd50
	// Line 506, Address: 0x1ceb48, Func Offset: 0xd78
	// Line 507, Address: 0x1ceb68, Func Offset: 0xd98
	// Line 508, Address: 0x1ceb88, Func Offset: 0xdb8
	// Line 514, Address: 0x1ceba0, Func Offset: 0xdd0
	// Line 517, Address: 0x1cebb4, Func Offset: 0xde4
	// Line 518, Address: 0x1cebd4, Func Offset: 0xe04
	// Line 522, Address: 0x1cebe4, Func Offset: 0xe14
	// Line 525, Address: 0x1cebf0, Func Offset: 0xe20
	// Func End, Address: 0x1cec28, Func Offset: 0xe58
}

// 
// Start address: 0x1cec30
void cur_step()
{
	int i;
	// Line 534, Address: 0x1cec30, Func Offset: 0
	// Line 537, Address: 0x1cec38, Func Offset: 0x8
	// Line 539, Address: 0x1cec68, Func Offset: 0x38
	// Line 540, Address: 0x1cec7c, Func Offset: 0x4c
	// Line 543, Address: 0x1cec84, Func Offset: 0x54
	// Line 544, Address: 0x1cec94, Func Offset: 0x64
	// Line 545, Address: 0x1cecbc, Func Offset: 0x8c
	// Line 546, Address: 0x1cecc8, Func Offset: 0x98
	// Line 548, Address: 0x1cece0, Func Offset: 0xb0
	// Line 549, Address: 0x1ced08, Func Offset: 0xd8
	// Line 550, Address: 0x1ced18, Func Offset: 0xe8
	// Line 551, Address: 0x1ced24, Func Offset: 0xf4
	// Line 553, Address: 0x1ced3c, Func Offset: 0x10c
	// Line 554, Address: 0x1ced58, Func Offset: 0x128
	// Line 555, Address: 0x1cedb8, Func Offset: 0x188
	// Line 556, Address: 0x1cedf0, Func Offset: 0x1c0
	// Line 557, Address: 0x1cedfc, Func Offset: 0x1cc
	// Line 558, Address: 0x1cee04, Func Offset: 0x1d4
	// Line 561, Address: 0x1cee1c, Func Offset: 0x1ec
	// Line 562, Address: 0x1cee2c, Func Offset: 0x1fc
	// Line 563, Address: 0x1cee54, Func Offset: 0x224
	// Line 564, Address: 0x1cee6c, Func Offset: 0x23c
	// Line 565, Address: 0x1cee80, Func Offset: 0x250
	// Line 566, Address: 0x1cee8c, Func Offset: 0x25c
	// Line 567, Address: 0x1ceeac, Func Offset: 0x27c
	// Line 568, Address: 0x1ceed8, Func Offset: 0x2a8
	// Line 570, Address: 0x1ceef4, Func Offset: 0x2c4
	// Line 571, Address: 0x1cef1c, Func Offset: 0x2ec
	// Line 572, Address: 0x1cef34, Func Offset: 0x304
	// Line 573, Address: 0x1cef48, Func Offset: 0x318
	// Line 574, Address: 0x1cef54, Func Offset: 0x324
	// Line 575, Address: 0x1cef7c, Func Offset: 0x34c
	// Line 576, Address: 0x1cefa8, Func Offset: 0x378
	// Line 580, Address: 0x1cefc8, Func Offset: 0x398
	// Line 581, Address: 0x1cf014, Func Offset: 0x3e4
	// Line 582, Address: 0x1cf020, Func Offset: 0x3f0
	// Line 583, Address: 0x1cf028, Func Offset: 0x3f8
	// Line 585, Address: 0x1cf034, Func Offset: 0x404
	// Line 586, Address: 0x1cf050, Func Offset: 0x420
	// Line 590, Address: 0x1cf068, Func Offset: 0x438
	// Line 593, Address: 0x1cf070, Func Offset: 0x440
	// Line 594, Address: 0x1cf080, Func Offset: 0x450
	// Line 595, Address: 0x1cf0a8, Func Offset: 0x478
	// Line 596, Address: 0x1cf0b4, Func Offset: 0x484
	// Line 598, Address: 0x1cf0cc, Func Offset: 0x49c
	// Line 599, Address: 0x1cf0f4, Func Offset: 0x4c4
	// Line 600, Address: 0x1cf100, Func Offset: 0x4d0
	// Line 603, Address: 0x1cf118, Func Offset: 0x4e8
	// Line 604, Address: 0x1cf134, Func Offset: 0x504
	// Line 605, Address: 0x1cf140, Func Offset: 0x510
	// Line 606, Address: 0x1cf14c, Func Offset: 0x51c
	// Line 611, Address: 0x1cf158, Func Offset: 0x528
	// Line 612, Address: 0x1cf1a4, Func Offset: 0x574
	// Line 613, Address: 0x1cf1b0, Func Offset: 0x580
	// Line 614, Address: 0x1cf1b8, Func Offset: 0x588
	// Line 616, Address: 0x1cf1c4, Func Offset: 0x594
	// Line 617, Address: 0x1cf1e0, Func Offset: 0x5b0
	// Line 619, Address: 0x1cf1f8, Func Offset: 0x5c8
	// Line 622, Address: 0x1cf200, Func Offset: 0x5d0
	// Line 623, Address: 0x1cf210, Func Offset: 0x5e0
	// Line 624, Address: 0x1cf238, Func Offset: 0x608
	// Line 625, Address: 0x1cf244, Func Offset: 0x614
	// Line 627, Address: 0x1cf25c, Func Offset: 0x62c
	// Line 628, Address: 0x1cf284, Func Offset: 0x654
	// Line 629, Address: 0x1cf290, Func Offset: 0x660
	// Line 632, Address: 0x1cf2a8, Func Offset: 0x678
	// Line 633, Address: 0x1cf2c4, Func Offset: 0x694
	// Line 634, Address: 0x1cf2d4, Func Offset: 0x6a4
	// Line 635, Address: 0x1cf2e0, Func Offset: 0x6b0
	// Line 636, Address: 0x1cf2ec, Func Offset: 0x6bc
	// Line 641, Address: 0x1cf2f4, Func Offset: 0x6c4
	// Line 642, Address: 0x1cf340, Func Offset: 0x710
	// Line 643, Address: 0x1cf34c, Func Offset: 0x71c
	// Line 644, Address: 0x1cf354, Func Offset: 0x724
	// Line 646, Address: 0x1cf360, Func Offset: 0x730
	// Line 647, Address: 0x1cf37c, Func Offset: 0x74c
	// Line 649, Address: 0x1cf394, Func Offset: 0x764
	// Line 652, Address: 0x1cf39c, Func Offset: 0x76c
	// Line 654, Address: 0x1cf3ac, Func Offset: 0x77c
	// Line 655, Address: 0x1cf3d4, Func Offset: 0x7a4
	// Line 656, Address: 0x1cf3e0, Func Offset: 0x7b0
	// Line 658, Address: 0x1cf3f8, Func Offset: 0x7c8
	// Line 659, Address: 0x1cf420, Func Offset: 0x7f0
	// Line 660, Address: 0x1cf430, Func Offset: 0x800
	// Line 661, Address: 0x1cf43c, Func Offset: 0x80c
	// Line 664, Address: 0x1cf454, Func Offset: 0x824
	// Line 665, Address: 0x1cf47c, Func Offset: 0x84c
	// Line 666, Address: 0x1cf488, Func Offset: 0x858
	// Line 668, Address: 0x1cf4a0, Func Offset: 0x870
	// Line 669, Address: 0x1cf4bc, Func Offset: 0x88c
	// Line 670, Address: 0x1cf4c8, Func Offset: 0x898
	// Line 671, Address: 0x1cf4d4, Func Offset: 0x8a4
	// Line 680, Address: 0x1cf4dc, Func Offset: 0x8ac
	// Line 681, Address: 0x1cf528, Func Offset: 0x8f8
	// Line 682, Address: 0x1cf534, Func Offset: 0x904
	// Line 683, Address: 0x1cf53c, Func Offset: 0x90c
	// Line 685, Address: 0x1cf548, Func Offset: 0x918
	// Line 686, Address: 0x1cf564, Func Offset: 0x934
	// Line 688, Address: 0x1cf57c, Func Offset: 0x94c
	// Line 691, Address: 0x1cf584, Func Offset: 0x954
	// Line 692, Address: 0x1cf594, Func Offset: 0x964
	// Line 693, Address: 0x1cf5bc, Func Offset: 0x98c
	// Line 694, Address: 0x1cf5c8, Func Offset: 0x998
	// Line 696, Address: 0x1cf5e0, Func Offset: 0x9b0
	// Line 697, Address: 0x1cf5fc, Func Offset: 0x9cc
	// Line 698, Address: 0x1cf608, Func Offset: 0x9d8
	// Line 701, Address: 0x1cf620, Func Offset: 0x9f0
	// Line 702, Address: 0x1cf65c, Func Offset: 0xa2c
	// Line 703, Address: 0x1cf668, Func Offset: 0xa38
	// Line 705, Address: 0x1cf680, Func Offset: 0xa50
	// Line 708, Address: 0x1cf688, Func Offset: 0xa58
	// Line 709, Address: 0x1cf698, Func Offset: 0xa68
	// Line 710, Address: 0x1cf6a4, Func Offset: 0xa74
	// Line 711, Address: 0x1cf6b4, Func Offset: 0xa84
	// Line 712, Address: 0x1cf6e0, Func Offset: 0xab0
	// Line 713, Address: 0x1cf6e8, Func Offset: 0xab8
	// Line 714, Address: 0x1cf6f4, Func Offset: 0xac4
	// Line 717, Address: 0x1cf70c, Func Offset: 0xadc
	// Line 720, Address: 0x1cf714, Func Offset: 0xae4
	// Line 721, Address: 0x1cf724, Func Offset: 0xaf4
	// Line 722, Address: 0x1cf730, Func Offset: 0xb00
	// Line 723, Address: 0x1cf740, Func Offset: 0xb10
	// Line 724, Address: 0x1cf75c, Func Offset: 0xb2c
	// Line 725, Address: 0x1cf764, Func Offset: 0xb34
	// Line 726, Address: 0x1cf770, Func Offset: 0xb40
	// Line 729, Address: 0x1cf788, Func Offset: 0xb58
	// Line 732, Address: 0x1cf790, Func Offset: 0xb60
	// Line 733, Address: 0x1cf7a0, Func Offset: 0xb70
	// Line 734, Address: 0x1cf7ac, Func Offset: 0xb7c
	// Line 736, Address: 0x1cf7c4, Func Offset: 0xb94
	// Line 739, Address: 0x1cf7cc, Func Offset: 0xb9c
	// Line 740, Address: 0x1cf7dc, Func Offset: 0xbac
	// Line 742, Address: 0x1cf7e8, Func Offset: 0xbb8
	// Line 745, Address: 0x1cf7f0, Func Offset: 0xbc0
	// Line 746, Address: 0x1cf81c, Func Offset: 0xbec
	// Line 748, Address: 0x1cf828, Func Offset: 0xbf8
	// Line 751, Address: 0x1cf830, Func Offset: 0xc00
	// Line 752, Address: 0x1cf838, Func Offset: 0xc08
	// Line 753, Address: 0x1cf870, Func Offset: 0xc40
	// Line 754, Address: 0x1cf87c, Func Offset: 0xc4c
	// Line 755, Address: 0x1cf890, Func Offset: 0xc60
	// Line 756, Address: 0x1cf8b0, Func Offset: 0xc80
	// Line 757, Address: 0x1cf8bc, Func Offset: 0xc8c
	// Line 758, Address: 0x1cf8dc, Func Offset: 0xcac
	// Line 759, Address: 0x1cf8e8, Func Offset: 0xcb8
	// Line 761, Address: 0x1cf900, Func Offset: 0xcd0
	// Line 764, Address: 0x1cf908, Func Offset: 0xcd8
	// Line 765, Address: 0x1cf910, Func Offset: 0xce0
	// Line 766, Address: 0x1cf920, Func Offset: 0xcf0
	// Line 770, Address: 0x1cf960, Func Offset: 0xd30
	// Line 772, Address: 0x1cf974, Func Offset: 0xd44
	// Line 773, Address: 0x1cf980, Func Offset: 0xd50
	// Line 775, Address: 0x1cf994, Func Offset: 0xd64
	// Line 777, Address: 0x1cf99c, Func Offset: 0xd6c
	// Line 778, Address: 0x1cf9a8, Func Offset: 0xd78
	// Line 780, Address: 0x1cf9b0, Func Offset: 0xd80
	// Line 787, Address: 0x1cf9c8, Func Offset: 0xd98
	// Func End, Address: 0x1cf9d8, Func Offset: 0xda8
}

// 
// Start address: 0x1cf9e0
void command_main(int command_step)
{
	// Line 796, Address: 0x1cf9e0, Func Offset: 0
	// Line 799, Address: 0x1cf9ec, Func Offset: 0xc
	// Line 802, Address: 0x1cfa14, Func Offset: 0x34
	// Line 803, Address: 0x1cfa20, Func Offset: 0x40
	// Line 804, Address: 0x1cfa2c, Func Offset: 0x4c
	// Line 805, Address: 0x1cfa58, Func Offset: 0x78
	// Line 806, Address: 0x1cfa78, Func Offset: 0x98
	// Line 807, Address: 0x1cfa94, Func Offset: 0xb4
	// Line 808, Address: 0x1cfaa4, Func Offset: 0xc4
	// Line 809, Address: 0x1cfaac, Func Offset: 0xcc
	// Line 810, Address: 0x1cfadc, Func Offset: 0xfc
	// Line 811, Address: 0x1cfae8, Func Offset: 0x108
	// Line 812, Address: 0x1cfb00, Func Offset: 0x120
	// Line 813, Address: 0x1cfb08, Func Offset: 0x128
	// Line 814, Address: 0x1cfb1c, Func Offset: 0x13c
	// Line 815, Address: 0x1cfb44, Func Offset: 0x164
	// Line 816, Address: 0x1cfb7c, Func Offset: 0x19c
	// Line 817, Address: 0x1cfba8, Func Offset: 0x1c8
	// Line 819, Address: 0x1cfbb0, Func Offset: 0x1d0
	// Line 820, Address: 0x1cfbcc, Func Offset: 0x1ec
	// Line 821, Address: 0x1cfbe4, Func Offset: 0x204
	// Line 823, Address: 0x1cfbec, Func Offset: 0x20c
	// Line 824, Address: 0x1cfc14, Func Offset: 0x234
	// Line 825, Address: 0x1cfc4c, Func Offset: 0x26c
	// Line 826, Address: 0x1cfc8c, Func Offset: 0x2ac
	// Line 827, Address: 0x1cfca0, Func Offset: 0x2c0
	// Line 828, Address: 0x1cfcbc, Func Offset: 0x2dc
	// Line 831, Address: 0x1cfcd4, Func Offset: 0x2f4
	// Line 833, Address: 0x1cfcdc, Func Offset: 0x2fc
	// Line 834, Address: 0x1cfd00, Func Offset: 0x320
	// Line 835, Address: 0x1cfd10, Func Offset: 0x330
	// Line 836, Address: 0x1cfd3c, Func Offset: 0x35c
	// Line 837, Address: 0x1cfd5c, Func Offset: 0x37c
	// Line 838, Address: 0x1cfd78, Func Offset: 0x398
	// Line 839, Address: 0x1cfd88, Func Offset: 0x3a8
	// Line 840, Address: 0x1cfd90, Func Offset: 0x3b0
	// Line 841, Address: 0x1cfdc0, Func Offset: 0x3e0
	// Line 842, Address: 0x1cfdcc, Func Offset: 0x3ec
	// Line 843, Address: 0x1cfde4, Func Offset: 0x404
	// Line 845, Address: 0x1cfdec, Func Offset: 0x40c
	// Line 846, Address: 0x1cfdfc, Func Offset: 0x41c
	// Line 847, Address: 0x1cfe08, Func Offset: 0x428
	// Line 850, Address: 0x1cfe20, Func Offset: 0x440
	// Line 852, Address: 0x1cfe28, Func Offset: 0x448
	// Line 853, Address: 0x1cfe54, Func Offset: 0x474
	// Line 854, Address: 0x1cfe74, Func Offset: 0x494
	// Line 855, Address: 0x1cfe94, Func Offset: 0x4b4
	// Line 856, Address: 0x1cfeb0, Func Offset: 0x4d0
	// Line 857, Address: 0x1cfec0, Func Offset: 0x4e0
	// Line 858, Address: 0x1cfec8, Func Offset: 0x4e8
	// Line 859, Address: 0x1cfef8, Func Offset: 0x518
	// Line 860, Address: 0x1cff04, Func Offset: 0x524
	// Line 861, Address: 0x1cff1c, Func Offset: 0x53c
	// Line 863, Address: 0x1cff24, Func Offset: 0x544
	// Line 864, Address: 0x1cff3c, Func Offset: 0x55c
	// Line 866, Address: 0x1cff4c, Func Offset: 0x56c
	// Line 867, Address: 0x1cff54, Func Offset: 0x574
	// Line 868, Address: 0x1cff60, Func Offset: 0x580
	// Line 871, Address: 0x1cff78, Func Offset: 0x598
	// Line 872, Address: 0x1cff9c, Func Offset: 0x5bc
	// Line 873, Address: 0x1cffac, Func Offset: 0x5cc
	// Line 875, Address: 0x1cffb4, Func Offset: 0x5d4
	// Line 876, Address: 0x1cffd4, Func Offset: 0x5f4
	// Line 877, Address: 0x1cffe8, Func Offset: 0x608
	// Line 878, Address: 0x1d0014, Func Offset: 0x634
	// Line 879, Address: 0x1d0034, Func Offset: 0x654
	// Line 880, Address: 0x1d0054, Func Offset: 0x674
	// Line 881, Address: 0x1d0070, Func Offset: 0x690
	// Line 882, Address: 0x1d0080, Func Offset: 0x6a0
	// Line 883, Address: 0x1d0088, Func Offset: 0x6a8
	// Line 884, Address: 0x1d00b8, Func Offset: 0x6d8
	// Line 885, Address: 0x1d00c4, Func Offset: 0x6e4
	// Line 886, Address: 0x1d00dc, Func Offset: 0x6fc
	// Line 887, Address: 0x1d00e4, Func Offset: 0x704
	// Line 888, Address: 0x1d00f8, Func Offset: 0x718
	// Line 889, Address: 0x1d0110, Func Offset: 0x730
	// Line 891, Address: 0x1d0120, Func Offset: 0x740
	// Line 892, Address: 0x1d0128, Func Offset: 0x748
	// Line 893, Address: 0x1d0134, Func Offset: 0x754
	// Line 895, Address: 0x1d013c, Func Offset: 0x75c
	// Line 896, Address: 0x1d0150, Func Offset: 0x770
	// Line 898, Address: 0x1d015c, Func Offset: 0x77c
	// Line 900, Address: 0x1d0174, Func Offset: 0x794
	// Line 902, Address: 0x1d017c, Func Offset: 0x79c
	// Line 903, Address: 0x1d01a0, Func Offset: 0x7c0
	// Line 904, Address: 0x1d01b0, Func Offset: 0x7d0
	// Line 905, Address: 0x1d01dc, Func Offset: 0x7fc
	// Line 906, Address: 0x1d01fc, Func Offset: 0x81c
	// Line 907, Address: 0x1d0218, Func Offset: 0x838
	// Line 908, Address: 0x1d0228, Func Offset: 0x848
	// Line 909, Address: 0x1d0230, Func Offset: 0x850
	// Line 910, Address: 0x1d0260, Func Offset: 0x880
	// Line 911, Address: 0x1d026c, Func Offset: 0x88c
	// Line 912, Address: 0x1d0284, Func Offset: 0x8a4
	// Line 914, Address: 0x1d028c, Func Offset: 0x8ac
	// Line 915, Address: 0x1d02d0, Func Offset: 0x8f0
	// Line 916, Address: 0x1d02dc, Func Offset: 0x8fc
	// Line 919, Address: 0x1d02f4, Func Offset: 0x914
	// Line 921, Address: 0x1d02fc, Func Offset: 0x91c
	// Line 923, Address: 0x1d030c, Func Offset: 0x92c
	// Line 924, Address: 0x1d0338, Func Offset: 0x958
	// Line 925, Address: 0x1d0358, Func Offset: 0x978
	// Line 926, Address: 0x1d0374, Func Offset: 0x994
	// Line 927, Address: 0x1d0384, Func Offset: 0x9a4
	// Line 928, Address: 0x1d038c, Func Offset: 0x9ac
	// Line 929, Address: 0x1d03bc, Func Offset: 0x9dc
	// Line 930, Address: 0x1d03c8, Func Offset: 0x9e8
	// Line 931, Address: 0x1d03e0, Func Offset: 0xa00
	// Line 933, Address: 0x1d03e8, Func Offset: 0xa08
	// Line 934, Address: 0x1d03f0, Func Offset: 0xa10
	// Line 935, Address: 0x1d03fc, Func Offset: 0xa1c
	// Line 938, Address: 0x1d0414, Func Offset: 0xa34
	// Line 939, Address: 0x1d0438, Func Offset: 0xa58
	// Line 940, Address: 0x1d0448, Func Offset: 0xa68
	// Line 943, Address: 0x1d0450, Func Offset: 0xa70
	// Line 944, Address: 0x1d047c, Func Offset: 0xa9c
	// Line 945, Address: 0x1d04a0, Func Offset: 0xac0
	// Line 946, Address: 0x1d04a8, Func Offset: 0xac8
	// Line 947, Address: 0x1d04b0, Func Offset: 0xad0
	// Line 948, Address: 0x1d04bc, Func Offset: 0xadc
	// Line 950, Address: 0x1d04d4, Func Offset: 0xaf4
	// Line 951, Address: 0x1d04e0, Func Offset: 0xb00
	// Line 953, Address: 0x1d04ec, Func Offset: 0xb0c
	// Line 955, Address: 0x1d04f4, Func Offset: 0xb14
	// Line 956, Address: 0x1d0504, Func Offset: 0xb24
	// Line 957, Address: 0x1d0530, Func Offset: 0xb50
	// Line 958, Address: 0x1d0550, Func Offset: 0xb70
	// Line 959, Address: 0x1d056c, Func Offset: 0xb8c
	// Line 960, Address: 0x1d057c, Func Offset: 0xb9c
	// Line 961, Address: 0x1d0584, Func Offset: 0xba4
	// Line 962, Address: 0x1d05b4, Func Offset: 0xbd4
	// Line 963, Address: 0x1d05c0, Func Offset: 0xbe0
	// Line 964, Address: 0x1d05d8, Func Offset: 0xbf8
	// Line 965, Address: 0x1d05e0, Func Offset: 0xc00
	// Line 966, Address: 0x1d05f4, Func Offset: 0xc14
	// Line 967, Address: 0x1d05fc, Func Offset: 0xc1c
	// Line 968, Address: 0x1d0608, Func Offset: 0xc28
	// Line 969, Address: 0x1d0620, Func Offset: 0xc40
	// Line 971, Address: 0x1d0628, Func Offset: 0xc48
	// Line 972, Address: 0x1d0630, Func Offset: 0xc50
	// Line 973, Address: 0x1d063c, Func Offset: 0xc5c
	// Line 976, Address: 0x1d0654, Func Offset: 0xc74
	// Line 977, Address: 0x1d065c, Func Offset: 0xc7c
	// Line 978, Address: 0x1d0668, Func Offset: 0xc88
	// Line 979, Address: 0x1d0694, Func Offset: 0xcb4
	// Line 980, Address: 0x1d06a4, Func Offset: 0xcc4
	// Line 981, Address: 0x1d06b0, Func Offset: 0xcd0
	// Line 982, Address: 0x1d06b8, Func Offset: 0xcd8
	// Line 983, Address: 0x1d06c0, Func Offset: 0xce0
	// Line 984, Address: 0x1d06d8, Func Offset: 0xcf8
	// Line 986, Address: 0x1d06e0, Func Offset: 0xd00
	// Line 987, Address: 0x1d06e8, Func Offset: 0xd08
	// Line 988, Address: 0x1d06f0, Func Offset: 0xd10
	// Line 989, Address: 0x1d06fc, Func Offset: 0xd1c
	// Line 992, Address: 0x1d0714, Func Offset: 0xd34
	// Line 994, Address: 0x1d071c, Func Offset: 0xd3c
	// Line 995, Address: 0x1d0788, Func Offset: 0xda8
	// Line 996, Address: 0x1d0790, Func Offset: 0xdb0
	// Line 997, Address: 0x1d07b8, Func Offset: 0xdd8
	// Line 999, Address: 0x1d0818, Func Offset: 0xe38
	// Line 1000, Address: 0x1d082c, Func Offset: 0xe4c
	// Line 1001, Address: 0x1d0838, Func Offset: 0xe58
	// Line 1003, Address: 0x1d08a8, Func Offset: 0xec8
	// Line 1004, Address: 0x1d08d0, Func Offset: 0xef0
	// Line 1006, Address: 0x1d0930, Func Offset: 0xf50
	// Line 1007, Address: 0x1d0940, Func Offset: 0xf60
	// Line 1008, Address: 0x1d094c, Func Offset: 0xf6c
	// Line 1010, Address: 0x1d09bc, Func Offset: 0xfdc
	// Line 1011, Address: 0x1d09e8, Func Offset: 0x1008
	// Line 1012, Address: 0x1d09f0, Func Offset: 0x1010
	// Line 1013, Address: 0x1d09fc, Func Offset: 0x101c
	// Line 1015, Address: 0x1d0a14, Func Offset: 0x1034
	// Line 1017, Address: 0x1d0a1c, Func Offset: 0x103c
	// Line 1018, Address: 0x1d0a2c, Func Offset: 0x104c
	// Line 1019, Address: 0x1d0a68, Func Offset: 0x1088
	// Line 1020, Address: 0x1d0a90, Func Offset: 0x10b0
	// Line 1021, Address: 0x1d0aa4, Func Offset: 0x10c4
	// Line 1024, Address: 0x1d0aac, Func Offset: 0x10cc
	// Line 1025, Address: 0x1d0acc, Func Offset: 0x10ec
	// Line 1026, Address: 0x1d0ae0, Func Offset: 0x1100
	// Line 1027, Address: 0x1d0b1c, Func Offset: 0x113c
	// Line 1028, Address: 0x1d0b3c, Func Offset: 0x115c
	// Line 1029, Address: 0x1d0b50, Func Offset: 0x1170
	// Line 1030, Address: 0x1d0b60, Func Offset: 0x1180
	// Line 1031, Address: 0x1d0b68, Func Offset: 0x1188
	// Line 1032, Address: 0x1d0b98, Func Offset: 0x11b8
	// Line 1033, Address: 0x1d0ba4, Func Offset: 0x11c4
	// Line 1034, Address: 0x1d0bbc, Func Offset: 0x11dc
	// Line 1035, Address: 0x1d0bc4, Func Offset: 0x11e4
	// Line 1038, Address: 0x1d0bd8, Func Offset: 0x11f8
	// Line 1039, Address: 0x1d0be8, Func Offset: 0x1208
	// Line 1040, Address: 0x1d0c04, Func Offset: 0x1224
	// Line 1041, Address: 0x1d0c1c, Func Offset: 0x123c
	// Line 1043, Address: 0x1d0c24, Func Offset: 0x1244
	// Line 1044, Address: 0x1d0c30, Func Offset: 0x1250
	// Line 1045, Address: 0x1d0c3c, Func Offset: 0x125c
	// Line 1048, Address: 0x1d0c54, Func Offset: 0x1274
	// Line 1050, Address: 0x1d0c5c, Func Offset: 0x127c
	// Line 1051, Address: 0x1d0c7c, Func Offset: 0x129c
	// Line 1052, Address: 0x1d0c90, Func Offset: 0x12b0
	// Line 1053, Address: 0x1d0ccc, Func Offset: 0x12ec
	// Line 1054, Address: 0x1d0cec, Func Offset: 0x130c
	// Line 1055, Address: 0x1d0d00, Func Offset: 0x1320
	// Line 1056, Address: 0x1d0d10, Func Offset: 0x1330
	// Line 1057, Address: 0x1d0d18, Func Offset: 0x1338
	// Line 1058, Address: 0x1d0d48, Func Offset: 0x1368
	// Line 1059, Address: 0x1d0d54, Func Offset: 0x1374
	// Line 1060, Address: 0x1d0d6c, Func Offset: 0x138c
	// Line 1061, Address: 0x1d0d74, Func Offset: 0x1394
	// Line 1064, Address: 0x1d0d88, Func Offset: 0x13a8
	// Line 1065, Address: 0x1d0d98, Func Offset: 0x13b8
	// Line 1066, Address: 0x1d0db0, Func Offset: 0x13d0
	// Line 1068, Address: 0x1d0db8, Func Offset: 0x13d8
	// Line 1069, Address: 0x1d0dc4, Func Offset: 0x13e4
	// Line 1070, Address: 0x1d0dd8, Func Offset: 0x13f8
	// Line 1071, Address: 0x1d0dec, Func Offset: 0x140c
	// Line 1072, Address: 0x1d0df8, Func Offset: 0x1418
	// Line 1073, Address: 0x1d0e14, Func Offset: 0x1434
	// Line 1074, Address: 0x1d0e1c, Func Offset: 0x143c
	// Line 1075, Address: 0x1d0e28, Func Offset: 0x1448
	// Line 1076, Address: 0x1d0e34, Func Offset: 0x1454
	// Line 1077, Address: 0x1d0e50, Func Offset: 0x1470
	// Line 1078, Address: 0x1d0e58, Func Offset: 0x1478
	// Line 1079, Address: 0x1d0e64, Func Offset: 0x1484
	// Line 1080, Address: 0x1d0e70, Func Offset: 0x1490
	// Line 1081, Address: 0x1d0e8c, Func Offset: 0x14ac
	// Line 1082, Address: 0x1d0e94, Func Offset: 0x14b4
	// Line 1083, Address: 0x1d0ea0, Func Offset: 0x14c0
	// Line 1084, Address: 0x1d0eac, Func Offset: 0x14cc
	// Line 1086, Address: 0x1d0ec8, Func Offset: 0x14e8
	// Line 1089, Address: 0x1d0ee0, Func Offset: 0x1500
	// Line 1092, Address: 0x1d0ee8, Func Offset: 0x1508
	// Line 1093, Address: 0x1d0ef4, Func Offset: 0x1514
	// Line 1094, Address: 0x1d0f00, Func Offset: 0x1520
	// Line 1095, Address: 0x1d0f3c, Func Offset: 0x155c
	// Line 1096, Address: 0x1d0f5c, Func Offset: 0x157c
	// Line 1097, Address: 0x1d0f70, Func Offset: 0x1590
	// Line 1098, Address: 0x1d0f80, Func Offset: 0x15a0
	// Line 1099, Address: 0x1d0f88, Func Offset: 0x15a8
	// Line 1100, Address: 0x1d0fb8, Func Offset: 0x15d8
	// Line 1101, Address: 0x1d0fc4, Func Offset: 0x15e4
	// Line 1102, Address: 0x1d0fdc, Func Offset: 0x15fc
	// Line 1103, Address: 0x1d0fe4, Func Offset: 0x1604
	// Line 1104, Address: 0x1d0ff8, Func Offset: 0x1618
	// Line 1105, Address: 0x1d1020, Func Offset: 0x1640
	// Line 1106, Address: 0x1d1058, Func Offset: 0x1678
	// Line 1107, Address: 0x1d1084, Func Offset: 0x16a4
	// Line 1108, Address: 0x1d108c, Func Offset: 0x16ac
	// Line 1109, Address: 0x1d10a4, Func Offset: 0x16c4
	// Line 1110, Address: 0x1d10ac, Func Offset: 0x16cc
	// Line 1111, Address: 0x1d10c0, Func Offset: 0x16e0
	// Line 1112, Address: 0x1d10e8, Func Offset: 0x1708
	// Line 1113, Address: 0x1d1120, Func Offset: 0x1740
	// Line 1114, Address: 0x1d1160, Func Offset: 0x1780
	// Line 1115, Address: 0x1d1174, Func Offset: 0x1794
	// Line 1116, Address: 0x1d1190, Func Offset: 0x17b0
	// Line 1117, Address: 0x1d11a8, Func Offset: 0x17c8
	// Line 1119, Address: 0x1d11b0, Func Offset: 0x17d0
	// Line 1120, Address: 0x1d11bc, Func Offset: 0x17dc
	// Line 1123, Address: 0x1d11d4, Func Offset: 0x17f4
	// Line 1125, Address: 0x1d11dc, Func Offset: 0x17fc
	// Line 1126, Address: 0x1d11fc, Func Offset: 0x181c
	// Line 1127, Address: 0x1d1210, Func Offset: 0x1830
	// Line 1128, Address: 0x1d124c, Func Offset: 0x186c
	// Line 1129, Address: 0x1d126c, Func Offset: 0x188c
	// Line 1130, Address: 0x1d1280, Func Offset: 0x18a0
	// Line 1131, Address: 0x1d1290, Func Offset: 0x18b0
	// Line 1132, Address: 0x1d1298, Func Offset: 0x18b8
	// Line 1133, Address: 0x1d12c8, Func Offset: 0x18e8
	// Line 1134, Address: 0x1d12d4, Func Offset: 0x18f4
	// Line 1135, Address: 0x1d12ec, Func Offset: 0x190c
	// Line 1136, Address: 0x1d12f4, Func Offset: 0x1914
	// Line 1137, Address: 0x1d1308, Func Offset: 0x1928
	// Line 1138, Address: 0x1d1330, Func Offset: 0x1950
	// Line 1139, Address: 0x1d1368, Func Offset: 0x1988
	// Line 1140, Address: 0x1d1394, Func Offset: 0x19b4
	// Line 1141, Address: 0x1d139c, Func Offset: 0x19bc
	// Line 1142, Address: 0x1d13b4, Func Offset: 0x19d4
	// Line 1144, Address: 0x1d13bc, Func Offset: 0x19dc
	// Line 1145, Address: 0x1d13c8, Func Offset: 0x19e8
	// Line 1148, Address: 0x1d13e0, Func Offset: 0x1a00
	// Line 1153, Address: 0x1d13e8, Func Offset: 0x1a08
	// Line 1154, Address: 0x1d13f4, Func Offset: 0x1a14
	// Line 1155, Address: 0x1d13fc, Func Offset: 0x1a1c
	// Line 1156, Address: 0x1d1438, Func Offset: 0x1a58
	// Line 1157, Address: 0x1d1458, Func Offset: 0x1a78
	// Line 1158, Address: 0x1d146c, Func Offset: 0x1a8c
	// Line 1159, Address: 0x1d147c, Func Offset: 0x1a9c
	// Line 1160, Address: 0x1d1484, Func Offset: 0x1aa4
	// Line 1161, Address: 0x1d14b4, Func Offset: 0x1ad4
	// Line 1162, Address: 0x1d14c0, Func Offset: 0x1ae0
	// Line 1169, Address: 0x1d14d8, Func Offset: 0x1af8
	// Line 1170, Address: 0x1d1514, Func Offset: 0x1b34
	// Line 1171, Address: 0x1d1530, Func Offset: 0x1b50
	// Line 1172, Address: 0x1d153c, Func Offset: 0x1b5c
	// Line 1174, Address: 0x1d1554, Func Offset: 0x1b74
	// Line 1175, Address: 0x1d1590, Func Offset: 0x1bb0
	// Line 1176, Address: 0x1d15a0, Func Offset: 0x1bc0
	// Line 1177, Address: 0x1d15ac, Func Offset: 0x1bcc
	// Line 1181, Address: 0x1d15c4, Func Offset: 0x1be4
	// Func End, Address: 0x1d15d8, Func Offset: 0x1bf8
}

// 
// Start address: 0x1d15e0
void weapon_command_main(int command_step)
{
	// Line 1190, Address: 0x1d15e0, Func Offset: 0
	// Line 1192, Address: 0x1d15ec, Func Offset: 0xc
	// Line 1195, Address: 0x1d160c, Func Offset: 0x2c
	// Line 1196, Address: 0x1d1638, Func Offset: 0x58
	// Line 1197, Address: 0x1d1658, Func Offset: 0x78
	// Line 1198, Address: 0x1d1674, Func Offset: 0x94
	// Line 1199, Address: 0x1d1684, Func Offset: 0xa4
	// Line 1200, Address: 0x1d168c, Func Offset: 0xac
	// Line 1201, Address: 0x1d16bc, Func Offset: 0xdc
	// Line 1202, Address: 0x1d16c4, Func Offset: 0xe4
	// Line 1203, Address: 0x1d16d0, Func Offset: 0xf0
	// Line 1204, Address: 0x1d16e8, Func Offset: 0x108
	// Line 1206, Address: 0x1d16f0, Func Offset: 0x110
	// Line 1207, Address: 0x1d16f8, Func Offset: 0x118
	// Line 1208, Address: 0x1d1704, Func Offset: 0x124
	// Line 1211, Address: 0x1d171c, Func Offset: 0x13c
	// Line 1212, Address: 0x1d1740, Func Offset: 0x160
	// Line 1213, Address: 0x1d1750, Func Offset: 0x170
	// Line 1215, Address: 0x1d1758, Func Offset: 0x178
	// Line 1216, Address: 0x1d1778, Func Offset: 0x198
	// Line 1217, Address: 0x1d178c, Func Offset: 0x1ac
	// Line 1218, Address: 0x1d17b8, Func Offset: 0x1d8
	// Line 1219, Address: 0x1d17d8, Func Offset: 0x1f8
	// Line 1220, Address: 0x1d17f4, Func Offset: 0x214
	// Line 1221, Address: 0x1d1804, Func Offset: 0x224
	// Line 1222, Address: 0x1d180c, Func Offset: 0x22c
	// Line 1223, Address: 0x1d183c, Func Offset: 0x25c
	// Line 1224, Address: 0x1d1844, Func Offset: 0x264
	// Line 1225, Address: 0x1d1850, Func Offset: 0x270
	// Line 1226, Address: 0x1d1868, Func Offset: 0x288
	// Line 1227, Address: 0x1d1870, Func Offset: 0x290
	// Line 1228, Address: 0x1d1884, Func Offset: 0x2a4
	// Line 1229, Address: 0x1d188c, Func Offset: 0x2ac
	// Line 1230, Address: 0x1d1898, Func Offset: 0x2b8
	// Line 1231, Address: 0x1d18b0, Func Offset: 0x2d0
	// Line 1233, Address: 0x1d18b8, Func Offset: 0x2d8
	// Line 1234, Address: 0x1d18cc, Func Offset: 0x2ec
	// Line 1235, Address: 0x1d18d8, Func Offset: 0x2f8
	// Line 1242, Address: 0x1d18f0, Func Offset: 0x310
	// Line 1243, Address: 0x1d191c, Func Offset: 0x33c
	// Line 1244, Address: 0x1d1938, Func Offset: 0x358
	// Line 1245, Address: 0x1d1944, Func Offset: 0x364
	// Line 1247, Address: 0x1d195c, Func Offset: 0x37c
	// Line 1248, Address: 0x1d1988, Func Offset: 0x3a8
	// Line 1249, Address: 0x1d1998, Func Offset: 0x3b8
	// Line 1250, Address: 0x1d19a4, Func Offset: 0x3c4
	// Line 1252, Address: 0x1d19bc, Func Offset: 0x3dc
	// Func End, Address: 0x1d19d0, Func Offset: 0x3f0
}

// 
// Start address: 0x1d19d0
void item_main_setup()
{
	int j;
	int i;
	// Line 1261, Address: 0x1d19d0, Func Offset: 0
	// Line 1265, Address: 0x1d19d8, Func Offset: 0x8
	// Line 1266, Address: 0x1d19e0, Func Offset: 0x10
	// Line 1267, Address: 0x1d19e8, Func Offset: 0x18
	// Line 1268, Address: 0x1d19f0, Func Offset: 0x20
	// Line 1269, Address: 0x1d19f8, Func Offset: 0x28
	// Line 1270, Address: 0x1d1a00, Func Offset: 0x30
	// Line 1271, Address: 0x1d1a08, Func Offset: 0x38
	// Line 1272, Address: 0x1d1a10, Func Offset: 0x40
	// Line 1273, Address: 0x1d1a24, Func Offset: 0x54
	// Line 1274, Address: 0x1d1a2c, Func Offset: 0x5c
	// Line 1275, Address: 0x1d1a34, Func Offset: 0x64
	// Line 1276, Address: 0x1d1a3c, Func Offset: 0x6c
	// Line 1277, Address: 0x1d1a44, Func Offset: 0x74
	// Line 1278, Address: 0x1d1a4c, Func Offset: 0x7c
	// Line 1279, Address: 0x1d1a54, Func Offset: 0x84
	// Line 1280, Address: 0x1d1a5c, Func Offset: 0x8c
	// Line 1281, Address: 0x1d1a68, Func Offset: 0x98
	// Line 1282, Address: 0x1d1a70, Func Offset: 0xa0
	// Line 1283, Address: 0x1d1a78, Func Offset: 0xa8
	// Line 1284, Address: 0x1d1a80, Func Offset: 0xb0
	// Line 1285, Address: 0x1d1a88, Func Offset: 0xb8
	// Line 1286, Address: 0x1d1a90, Func Offset: 0xc0
	// Line 1287, Address: 0x1d1a98, Func Offset: 0xc8
	// Line 1288, Address: 0x1d1aa8, Func Offset: 0xd8
	// Line 1289, Address: 0x1d1ac0, Func Offset: 0xf0
	// Line 1290, Address: 0x1d1acc, Func Offset: 0xfc
	// Line 1291, Address: 0x1d1ad4, Func Offset: 0x104
	// Line 1293, Address: 0x1d1adc, Func Offset: 0x10c
	// Line 1294, Address: 0x1d1ae8, Func Offset: 0x118
	// Line 1295, Address: 0x1d1b04, Func Offset: 0x134
	// Line 1296, Address: 0x1d1b14, Func Offset: 0x144
	// Line 1297, Address: 0x1d1b24, Func Offset: 0x154
	// Line 1298, Address: 0x1d1b34, Func Offset: 0x164
	// Line 1299, Address: 0x1d1b44, Func Offset: 0x174
	// Line 1302, Address: 0x1d1b54, Func Offset: 0x184
	// Line 1303, Address: 0x1d1b64, Func Offset: 0x194
	// Line 1305, Address: 0x1d1b70, Func Offset: 0x1a0
	// Line 1306, Address: 0x1d1bd0, Func Offset: 0x200
	// Line 1307, Address: 0x1d1c0c, Func Offset: 0x23c
	// Line 1309, Address: 0x1d1c1c, Func Offset: 0x24c
	// Line 1310, Address: 0x1d1c20, Func Offset: 0x250
	// Line 1311, Address: 0x1d1c28, Func Offset: 0x258
	// Line 1312, Address: 0x1d1c34, Func Offset: 0x264
	// Line 1314, Address: 0x1d1c60, Func Offset: 0x290
	// Line 1315, Address: 0x1d1c80, Func Offset: 0x2b0
	// Line 1316, Address: 0x1d1c94, Func Offset: 0x2c4
	// Line 1317, Address: 0x1d1cac, Func Offset: 0x2dc
	// Line 1318, Address: 0x1d1ccc, Func Offset: 0x2fc
	// Line 1320, Address: 0x1d1ce0, Func Offset: 0x310
	// Line 1322, Address: 0x1d1cec, Func Offset: 0x31c
	// Line 1323, Address: 0x1d1cfc, Func Offset: 0x32c
	// Line 1324, Address: 0x1d1d24, Func Offset: 0x354
	// Line 1325, Address: 0x1d1d30, Func Offset: 0x360
	// Line 1326, Address: 0x1d1d54, Func Offset: 0x384
	// Line 1328, Address: 0x1d1d5c, Func Offset: 0x38c
	// Line 1330, Address: 0x1d1d78, Func Offset: 0x3a8
	// Line 1333, Address: 0x1d1d80, Func Offset: 0x3b0
	// Line 1334, Address: 0x1d1dac, Func Offset: 0x3dc
	// Line 1336, Address: 0x1d1dc8, Func Offset: 0x3f8
	// Line 1338, Address: 0x1d1dd0, Func Offset: 0x400
	// Func End, Address: 0x1d1de0, Func Offset: 0x410
}

// 
// Start address: 0x1d1de0
void set_position(int step)
{
	// Line 1346, Address: 0x1d1de0, Func Offset: 0
	// Line 1348, Address: 0x1d1de8, Func Offset: 0x8
	// Line 1350, Address: 0x1d1e10, Func Offset: 0x30
	// Line 1351, Address: 0x1d1e30, Func Offset: 0x50
	// Line 1352, Address: 0x1d1e4c, Func Offset: 0x6c
	// Line 1353, Address: 0x1d1e64, Func Offset: 0x84
	// Line 1354, Address: 0x1d1e7c, Func Offset: 0x9c
	// Line 1357, Address: 0x1d1e84, Func Offset: 0xa4
	// Line 1358, Address: 0x1d1efc, Func Offset: 0x11c
	// Line 1359, Address: 0x1d1f74, Func Offset: 0x194
	// Line 1360, Address: 0x1d1fec, Func Offset: 0x20c
	// Line 1361, Address: 0x1d2064, Func Offset: 0x284
	// Line 1364, Address: 0x1d206c, Func Offset: 0x28c
	// Line 1365, Address: 0x1d20e4, Func Offset: 0x304
	// Line 1366, Address: 0x1d215c, Func Offset: 0x37c
	// Line 1367, Address: 0x1d21d4, Func Offset: 0x3f4
	// Line 1368, Address: 0x1d224c, Func Offset: 0x46c
	// Line 1371, Address: 0x1d2254, Func Offset: 0x474
	// Line 1372, Address: 0x1d22cc, Func Offset: 0x4ec
	// Line 1373, Address: 0x1d2344, Func Offset: 0x564
	// Line 1374, Address: 0x1d23bc, Func Offset: 0x5dc
	// Line 1375, Address: 0x1d2434, Func Offset: 0x654
	// Line 1378, Address: 0x1d243c, Func Offset: 0x65c
	// Line 1379, Address: 0x1d24b4, Func Offset: 0x6d4
	// Line 1380, Address: 0x1d252c, Func Offset: 0x74c
	// Line 1381, Address: 0x1d25a4, Func Offset: 0x7c4
	// Line 1382, Address: 0x1d261c, Func Offset: 0x83c
	// Line 1386, Address: 0x1d2624, Func Offset: 0x844
	// Line 1387, Address: 0x1d269c, Func Offset: 0x8bc
	// Line 1388, Address: 0x1d2714, Func Offset: 0x934
	// Line 1389, Address: 0x1d278c, Func Offset: 0x9ac
	// Line 1390, Address: 0x1d2804, Func Offset: 0xa24
	// Line 1394, Address: 0x1d280c, Func Offset: 0xa2c
	// Line 1395, Address: 0x1d2884, Func Offset: 0xaa4
	// Line 1396, Address: 0x1d28fc, Func Offset: 0xb1c
	// Line 1397, Address: 0x1d2974, Func Offset: 0xb94
	// Line 1398, Address: 0x1d29ec, Func Offset: 0xc0c
	// Line 1401, Address: 0x1d29f4, Func Offset: 0xc14
	// Line 1402, Address: 0x1d2a6c, Func Offset: 0xc8c
	// Line 1403, Address: 0x1d2ae4, Func Offset: 0xd04
	// Line 1404, Address: 0x1d2b5c, Func Offset: 0xd7c
	// Line 1405, Address: 0x1d2bd4, Func Offset: 0xdf4
	// Line 1408, Address: 0x1d2bdc, Func Offset: 0xdfc
	// Line 1409, Address: 0x1d2c54, Func Offset: 0xe74
	// Line 1410, Address: 0x1d2ccc, Func Offset: 0xeec
	// Line 1411, Address: 0x1d2d44, Func Offset: 0xf64
	// Line 1412, Address: 0x1d2dbc, Func Offset: 0xfdc
	// Line 1415, Address: 0x1d2dc4, Func Offset: 0xfe4
	// Line 1416, Address: 0x1d2e3c, Func Offset: 0x105c
	// Line 1417, Address: 0x1d2eb4, Func Offset: 0x10d4
	// Line 1418, Address: 0x1d2f2c, Func Offset: 0x114c
	// Line 1419, Address: 0x1d2fa4, Func Offset: 0x11c4
	// Line 1422, Address: 0x1d2fac, Func Offset: 0x11cc
	// Line 1423, Address: 0x1d3024, Func Offset: 0x1244
	// Line 1424, Address: 0x1d309c, Func Offset: 0x12bc
	// Line 1425, Address: 0x1d3114, Func Offset: 0x1334
	// Line 1429, Address: 0x1d318c, Func Offset: 0x13ac
	// Func End, Address: 0x1d319c, Func Offset: 0x13bc
}

// 
// Start address: 0x1d31a0
void item_turn()
{
	int j;
	int i;
	// Line 1441, Address: 0x1d31a0, Func Offset: 0
	// Line 1442, Address: 0x1d31ac, Func Offset: 0xc
	// Line 1444, Address: 0x1d31e4, Func Offset: 0x44
	// Line 1446, Address: 0x1d31fc, Func Offset: 0x5c
	// Line 1447, Address: 0x1d3208, Func Offset: 0x68
	// Line 1449, Address: 0x1d322c, Func Offset: 0x8c
	// Line 1450, Address: 0x1d3250, Func Offset: 0xb0
	// Line 1451, Address: 0x1d3268, Func Offset: 0xc8
	// Func End, Address: 0x1d3270, Func Offset: 0xd0
}

// 
// Start address: 0x1d3270
void item_position(float* f0, float* f1, int count, float* r0)
{
	// Line 1459, Address: 0x1d3270, Func Offset: 0
	// Line 1460, Address: 0x1d3298, Func Offset: 0x28
	// Line 1461, Address: 0x1d3308, Func Offset: 0x98
	// Line 1463, Address: 0x1d331c, Func Offset: 0xac
	// Line 1465, Address: 0x1d3378, Func Offset: 0x108
	// Line 1466, Address: 0x1d33fc, Func Offset: 0x18c
	// Line 1468, Address: 0x1d348c, Func Offset: 0x21c
	// Line 1469, Address: 0x1d34c0, Func Offset: 0x250
	// Func End, Address: 0x1d34e0, Func Offset: 0x270
}

// 
// Start address: 0x1d34e0
int move_near(float f0, float f1, float f2, float f3)
{
	float f;
	// Line 1485, Address: 0x1d34e0, Func Offset: 0
	// Line 1487, Address: 0x1d3508, Func Offset: 0x28
	// Line 1488, Address: 0x1d3518, Func Offset: 0x38
	// Line 1489, Address: 0x1d3544, Func Offset: 0x64
	// Line 1490, Address: 0x1d3564, Func Offset: 0x84
	// Line 1491, Address: 0x1d3578, Func Offset: 0x98
	// Line 1493, Address: 0x1d3580, Func Offset: 0xa0
	// Line 1494, Address: 0x1d35ac, Func Offset: 0xcc
	// Line 1495, Address: 0x1d35cc, Func Offset: 0xec
	// Line 1497, Address: 0x1d35e0, Func Offset: 0x100
	// Line 1498, Address: 0x1d35ec, Func Offset: 0x10c
	// Func End, Address: 0x1d360c, Func Offset: 0x12c
}

// 
// Start address: 0x1d3610
int command_kind(int kind)
{
	// Line 1520, Address: 0x1d3610, Func Offset: 0
	// Line 1555, Address: 0x1d3638, Func Offset: 0x28
	// Line 1559, Address: 0x1d3644, Func Offset: 0x34
	// Line 1565, Address: 0x1d3650, Func Offset: 0x40
	// Line 1569, Address: 0x1d365c, Func Offset: 0x4c
	// Line 1573, Address: 0x1d3668, Func Offset: 0x58
	// Line 1575, Address: 0x1d3674, Func Offset: 0x64
	// Line 1577, Address: 0x1d3680, Func Offset: 0x70
	// Line 1585, Address: 0x1d368c, Func Offset: 0x7c
	// Line 1590, Address: 0x1d3698, Func Offset: 0x88
	// Line 1604, Address: 0x1d36a4, Func Offset: 0x94
	// Line 1606, Address: 0x1d36b0, Func Offset: 0xa0
	// Line 1608, Address: 0x1d36bc, Func Offset: 0xac
	// Line 1609, Address: 0x1d36c0, Func Offset: 0xb0
	// Func End, Address: 0x1d36c8, Func Offset: 0xb8
}

// 
// Start address: 0x1d36d0
void del_check()
{
	int i;
	// Line 1617, Address: 0x1d36d0, Func Offset: 0
	// Line 1619, Address: 0x1d36e0, Func Offset: 0x10
	// Line 1621, Address: 0x1d36ec, Func Offset: 0x1c
	// Line 1629, Address: 0x1d3758, Func Offset: 0x88
	// Line 1630, Address: 0x1d3778, Func Offset: 0xa8
	// Line 1633, Address: 0x1d37a0, Func Offset: 0xd0
	// Line 1634, Address: 0x1d37bc, Func Offset: 0xec
	// Func End, Address: 0x1d37d4, Func Offset: 0x104
}

// 
// Start address: 0x1d37e0
int kind_no(int kind)
{
	int i;
	// Line 1644, Address: 0x1d37e0, Func Offset: 0
	// Line 1645, Address: 0x1d37ec, Func Offset: 0xc
	// Line 1646, Address: 0x1d3810, Func Offset: 0x30
	// Line 1648, Address: 0x1d3834, Func Offset: 0x54
	// Line 1649, Address: 0x1d3838, Func Offset: 0x58
	// Func End, Address: 0x1d3840, Func Offset: 0x60
}

// 
// Start address: 0x1d3840
void event_item_use(int kind)
{
	// Line 1670, Address: 0x1d3840, Func Offset: 0
	// Line 1671, Address: 0x1d3850, Func Offset: 0x10
	// Line 1673, Address: 0x1d386c, Func Offset: 0x2c
	// Line 1674, Address: 0x1d3884, Func Offset: 0x44
	// Line 1675, Address: 0x1d3890, Func Offset: 0x50
	// Line 1676, Address: 0x1d3898, Func Offset: 0x58
	// Line 1678, Address: 0x1d38a4, Func Offset: 0x64
	// Line 1679, Address: 0x1d38ac, Func Offset: 0x6c
	// Line 1680, Address: 0x1d38b8, Func Offset: 0x78
	// Func End, Address: 0x1d38cc, Func Offset: 0x8c
}

// 
// Start address: 0x1d38d0
void combine_item_use(int kind)
{
	// Line 1686, Address: 0x1d38d0, Func Offset: 0
	// Line 1687, Address: 0x1d38e0, Func Offset: 0x10
	// Line 1690, Address: 0x1d392c, Func Offset: 0x5c
	// Line 1691, Address: 0x1d3954, Func Offset: 0x84
	// Line 1692, Address: 0x1d3960, Func Offset: 0x90
	// Line 1693, Address: 0x1d3968, Func Offset: 0x98
	// Line 1695, Address: 0x1d3974, Func Offset: 0xa4
	// Line 1696, Address: 0x1d397c, Func Offset: 0xac
	// Line 1698, Address: 0x1d39a4, Func Offset: 0xd4
	// Line 1699, Address: 0x1d39b0, Func Offset: 0xe0
	// Line 1702, Address: 0x1d39b8, Func Offset: 0xe8
	// Line 1704, Address: 0x1d39c4, Func Offset: 0xf4
	// Line 1705, Address: 0x1d39e4, Func Offset: 0x114
	// Line 1706, Address: 0x1d39ec, Func Offset: 0x11c
	// Func End, Address: 0x1d3a00, Func Offset: 0x130
}

// 
// Start address: 0x1d3a00
void examine_main()
{
	PicDraw_Data i_pic;
	// Line 1715, Address: 0x1d3a00, Func Offset: 0
	// Line 1719, Address: 0x1d3a08, Func Offset: 0x8
	// Line 1723, Address: 0x1d3a38, Func Offset: 0x38
	// Line 1724, Address: 0x1d3a40, Func Offset: 0x40
	// Line 1725, Address: 0x1d3a4c, Func Offset: 0x4c
	// Line 1727, Address: 0x1d3a6c, Func Offset: 0x6c
	// Line 1729, Address: 0x1d3a80, Func Offset: 0x80
	// Line 1730, Address: 0x1d3ab8, Func Offset: 0xb8
	// Line 1732, Address: 0x1d3b04, Func Offset: 0x104
	// Line 1733, Address: 0x1d3b30, Func Offset: 0x130
	// Line 1734, Address: 0x1d3b38, Func Offset: 0x138
	// Line 1736, Address: 0x1d3b48, Func Offset: 0x148
	// Line 1737, Address: 0x1d3b54, Func Offset: 0x154
	// Line 1738, Address: 0x1d3b8c, Func Offset: 0x18c
	// Line 1739, Address: 0x1d3b98, Func Offset: 0x198
	// Line 1742, Address: 0x1d3ba0, Func Offset: 0x1a0
	// Line 1743, Address: 0x1d3bec, Func Offset: 0x1ec
	// Line 1745, Address: 0x1d3c0c, Func Offset: 0x20c
	// Line 1747, Address: 0x1d3c20, Func Offset: 0x220
	// Line 1748, Address: 0x1d3c58, Func Offset: 0x258
	// Line 1749, Address: 0x1d3ca4, Func Offset: 0x2a4
	// Line 1750, Address: 0x1d3cd8, Func Offset: 0x2d8
	// Line 1751, Address: 0x1d3ce0, Func Offset: 0x2e0
	// Line 1753, Address: 0x1d3cf0, Func Offset: 0x2f0
	// Line 1754, Address: 0x1d3cfc, Func Offset: 0x2fc
	// Line 1756, Address: 0x1d3d14, Func Offset: 0x314
	// Line 1757, Address: 0x1d3d20, Func Offset: 0x320
	// Line 1758, Address: 0x1d3d30, Func Offset: 0x330
	// Line 1759, Address: 0x1d3d38, Func Offset: 0x338
	// Line 1761, Address: 0x1d3d40, Func Offset: 0x340
	// Line 1764, Address: 0x1d3d48, Func Offset: 0x348
	// Line 1766, Address: 0x1d3d58, Func Offset: 0x358
	// Line 1767, Address: 0x1d3d60, Func Offset: 0x360
	// Line 1771, Address: 0x1d3d6c, Func Offset: 0x36c
	// Func End, Address: 0x1d3d7c, Func Offset: 0x37c
}

// 
// Start address: 0x1d3d80
void examine_file_load()
{
	// Line 1778, Address: 0x1d3d80, Func Offset: 0
	// Line 1779, Address: 0x1d3d8c, Func Offset: 0xc
	// Line 1782, Address: 0x1d3dbc, Func Offset: 0x3c
	// Line 1786, Address: 0x1d3e74, Func Offset: 0xf4
	// Line 1787, Address: 0x1d3e8c, Func Offset: 0x10c
	// Line 1789, Address: 0x1d3e94, Func Offset: 0x114
	// Line 1790, Address: 0x1d3eac, Func Offset: 0x12c
	// Line 1792, Address: 0x1d3eb4, Func Offset: 0x134
	// Line 1793, Address: 0x1d3ecc, Func Offset: 0x14c
	// Line 1795, Address: 0x1d3ed4, Func Offset: 0x154
	// Line 1796, Address: 0x1d3eec, Func Offset: 0x16c
	// Line 1798, Address: 0x1d3ef4, Func Offset: 0x174
	// Line 1799, Address: 0x1d3f0c, Func Offset: 0x18c
	// Line 1801, Address: 0x1d3f14, Func Offset: 0x194
	// Line 1802, Address: 0x1d3f2c, Func Offset: 0x1ac
	// Line 1804, Address: 0x1d3f34, Func Offset: 0x1b4
	// Line 1805, Address: 0x1d3f4c, Func Offset: 0x1cc
	// Line 1807, Address: 0x1d3f54, Func Offset: 0x1d4
	// Line 1808, Address: 0x1d3f6c, Func Offset: 0x1ec
	// Line 1810, Address: 0x1d3f74, Func Offset: 0x1f4
	// Line 1811, Address: 0x1d3f8c, Func Offset: 0x20c
	// Line 1813, Address: 0x1d3f94, Func Offset: 0x214
	// Line 1814, Address: 0x1d3fac, Func Offset: 0x22c
	// Line 1816, Address: 0x1d3fb4, Func Offset: 0x234
	// Line 1817, Address: 0x1d3fcc, Func Offset: 0x24c
	// Line 1819, Address: 0x1d3fd4, Func Offset: 0x254
	// Line 1820, Address: 0x1d3fec, Func Offset: 0x26c
	// Line 1822, Address: 0x1d3ff4, Func Offset: 0x274
	// Line 1823, Address: 0x1d400c, Func Offset: 0x28c
	// Line 1826, Address: 0x1d4014, Func Offset: 0x294
	// Line 1829, Address: 0x1d402c, Func Offset: 0x2ac
	// Func End, Address: 0x1d4040, Func Offset: 0x2c0
}

// 
// Start address: 0x1d4040
void examine2_main()
{
	int i;
	PicDraw_Data i_pic;
	// Line 1836, Address: 0x1d4040, Func Offset: 0
	// Line 1840, Address: 0x1d404c, Func Offset: 0xc
	// Line 1843, Address: 0x1d407c, Func Offset: 0x3c
	// Line 1844, Address: 0x1d4090, Func Offset: 0x50
	// Line 1845, Address: 0x1d40a4, Func Offset: 0x64
	// Line 1851, Address: 0x1d40f4, Func Offset: 0xb4
	// Line 1852, Address: 0x1d4100, Func Offset: 0xc0
	// Line 1854, Address: 0x1d412c, Func Offset: 0xec
	// Line 1856, Address: 0x1d4134, Func Offset: 0xf4
	// Line 1857, Address: 0x1d4148, Func Offset: 0x108
	// Line 1858, Address: 0x1d4160, Func Offset: 0x120
	// Line 1862, Address: 0x1d4168, Func Offset: 0x128
	// Line 1864, Address: 0x1d4184, Func Offset: 0x144
	// Line 1866, Address: 0x1d4198, Func Offset: 0x158
	// Line 1867, Address: 0x1d41d0, Func Offset: 0x190
	// Line 1869, Address: 0x1d421c, Func Offset: 0x1dc
	// Line 1870, Address: 0x1d42a0, Func Offset: 0x260
	// Line 1871, Address: 0x1d42d0, Func Offset: 0x290
	// Line 1872, Address: 0x1d42dc, Func Offset: 0x29c
	// Line 1876, Address: 0x1d42ec, Func Offset: 0x2ac
	// Line 1877, Address: 0x1d42fc, Func Offset: 0x2bc
	// Line 1878, Address: 0x1d4320, Func Offset: 0x2e0
	// Line 1879, Address: 0x1d4358, Func Offset: 0x318
	// Line 1880, Address: 0x1d4374, Func Offset: 0x334
	// Line 1881, Address: 0x1d4390, Func Offset: 0x350
	// Line 1882, Address: 0x1d43e8, Func Offset: 0x3a8
	// Line 1883, Address: 0x1d4498, Func Offset: 0x458
	// Line 1884, Address: 0x1d4548, Func Offset: 0x508
	// Line 1885, Address: 0x1d45f8, Func Offset: 0x5b8
	// Line 1886, Address: 0x1d46a8, Func Offset: 0x668
	// Line 1887, Address: 0x1d4758, Func Offset: 0x718
	// Line 1889, Address: 0x1d4760, Func Offset: 0x720
	// Line 1890, Address: 0x1d4784, Func Offset: 0x744
	// Line 1891, Address: 0x1d47bc, Func Offset: 0x77c
	// Line 1892, Address: 0x1d47d8, Func Offset: 0x798
	// Line 1893, Address: 0x1d47f4, Func Offset: 0x7b4
	// Line 1894, Address: 0x1d484c, Func Offset: 0x80c
	// Line 1895, Address: 0x1d48fc, Func Offset: 0x8bc
	// Line 1896, Address: 0x1d49ac, Func Offset: 0x96c
	// Line 1897, Address: 0x1d4a5c, Func Offset: 0xa1c
	// Line 1898, Address: 0x1d4b0c, Func Offset: 0xacc
	// Line 1899, Address: 0x1d4bbc, Func Offset: 0xb7c
	// Line 1900, Address: 0x1d4bc4, Func Offset: 0xb84
	// Line 1901, Address: 0x1d4bec, Func Offset: 0xbac
	// Func End, Address: 0x1d4c00, Func Offset: 0xbc0
}

// 
// Start address: 0x1d4c00
void font_print()
{
	float f;
	int i;
	// Line 1909, Address: 0x1d4c00, Func Offset: 0
	// Line 1913, Address: 0x1d4c18, Func Offset: 0x18
	// Line 1914, Address: 0x1d4c78, Func Offset: 0x78
	// Line 1917, Address: 0x1d4cbc, Func Offset: 0xbc
	// Line 1921, Address: 0x1d4cc4, Func Offset: 0xc4
	// Line 1926, Address: 0x1d4d44, Func Offset: 0x144
	// Line 1927, Address: 0x1d4d8c, Func Offset: 0x18c
	// Line 1928, Address: 0x1d4d9c, Func Offset: 0x19c
	// Line 1929, Address: 0x1d4dcc, Func Offset: 0x1cc
	// Line 1930, Address: 0x1d4dd4, Func Offset: 0x1d4
	// Line 1931, Address: 0x1d4de4, Func Offset: 0x1e4
	// Line 1932, Address: 0x1d4e00, Func Offset: 0x200
	// Line 1933, Address: 0x1d4e38, Func Offset: 0x238
	// Line 1934, Address: 0x1d4e44, Func Offset: 0x244
	// Line 1935, Address: 0x1d4e4c, Func Offset: 0x24c
	// Line 1936, Address: 0x1d4e54, Func Offset: 0x254
	// Line 1938, Address: 0x1d4e6c, Func Offset: 0x26c
	// Line 1939, Address: 0x1d4e74, Func Offset: 0x274
	// Line 1940, Address: 0x1d4e80, Func Offset: 0x280
	// Line 1941, Address: 0x1d4e9c, Func Offset: 0x29c
	// Line 1942, Address: 0x1d4ed4, Func Offset: 0x2d4
	// Line 1943, Address: 0x1d4ee0, Func Offset: 0x2e0
	// Line 1944, Address: 0x1d4ee8, Func Offset: 0x2e8
	// Line 1945, Address: 0x1d4ef0, Func Offset: 0x2f0
	// Line 1947, Address: 0x1d4f08, Func Offset: 0x308
	// Line 1948, Address: 0x1d4f10, Func Offset: 0x310
	// Line 1949, Address: 0x1d4f1c, Func Offset: 0x31c
	// Line 1950, Address: 0x1d4f38, Func Offset: 0x338
	// Line 1951, Address: 0x1d4f70, Func Offset: 0x370
	// Line 1952, Address: 0x1d4f7c, Func Offset: 0x37c
	// Line 1953, Address: 0x1d4f84, Func Offset: 0x384
	// Line 1954, Address: 0x1d4f8c, Func Offset: 0x38c
	// Line 1956, Address: 0x1d4fa4, Func Offset: 0x3a4
	// Line 1957, Address: 0x1d4fac, Func Offset: 0x3ac
	// Line 1958, Address: 0x1d4fb8, Func Offset: 0x3b8
	// Line 1959, Address: 0x1d4fc4, Func Offset: 0x3c4
	// Line 1960, Address: 0x1d4fcc, Func Offset: 0x3cc
	// Line 1961, Address: 0x1d4fd8, Func Offset: 0x3d8
	// Line 1962, Address: 0x1d5000, Func Offset: 0x400
	// Line 1963, Address: 0x1d5020, Func Offset: 0x420
	// Line 1964, Address: 0x1d5040, Func Offset: 0x440
	// Line 1965, Address: 0x1d5060, Func Offset: 0x460
	// Line 1967, Address: 0x1d5080, Func Offset: 0x480
	// Line 1968, Address: 0x1d50f0, Func Offset: 0x4f0
	// Line 1969, Address: 0x1d5160, Func Offset: 0x560
	// Line 1970, Address: 0x1d516c, Func Offset: 0x56c
	// Line 1971, Address: 0x1d5174, Func Offset: 0x574
	// Line 1972, Address: 0x1d5180, Func Offset: 0x580
	// Line 1973, Address: 0x1d51b8, Func Offset: 0x5b8
	// Line 1974, Address: 0x1d51e8, Func Offset: 0x5e8
	// Line 1975, Address: 0x1d5218, Func Offset: 0x618
	// Line 1976, Address: 0x1d5248, Func Offset: 0x648
	// Line 1978, Address: 0x1d5278, Func Offset: 0x678
	// Line 1979, Address: 0x1d52a8, Func Offset: 0x6a8
	// Line 1982, Address: 0x1d52d8, Func Offset: 0x6d8
	// Line 1983, Address: 0x1d52e0, Func Offset: 0x6e0
	// Line 1985, Address: 0x1d52e8, Func Offset: 0x6e8
	// Line 1986, Address: 0x1d5330, Func Offset: 0x730
	// Line 1987, Address: 0x1d533c, Func Offset: 0x73c
	// Line 1988, Address: 0x1d5344, Func Offset: 0x744
	// Line 1990, Address: 0x1d534c, Func Offset: 0x74c
	// Line 1991, Address: 0x1d5354, Func Offset: 0x754
	// Line 1992, Address: 0x1d5360, Func Offset: 0x760
	// Line 1993, Address: 0x1d5398, Func Offset: 0x798
	// Line 1994, Address: 0x1d53c8, Func Offset: 0x7c8
	// Line 1995, Address: 0x1d53f8, Func Offset: 0x7f8
	// Line 1996, Address: 0x1d5428, Func Offset: 0x828
	// Line 1997, Address: 0x1d5458, Func Offset: 0x858
	// Line 1998, Address: 0x1d5480, Func Offset: 0x880
	// Line 1999, Address: 0x1d549c, Func Offset: 0x89c
	// Line 2000, Address: 0x1d54a4, Func Offset: 0x8a4
	// Line 2001, Address: 0x1d54b0, Func Offset: 0x8b0
	// Line 2002, Address: 0x1d54c8, Func Offset: 0x8c8
	// Line 2004, Address: 0x1d54e8, Func Offset: 0x8e8
	// Line 2005, Address: 0x1d5510, Func Offset: 0x910
	// Line 2006, Address: 0x1d5540, Func Offset: 0x940
	// Line 2007, Address: 0x1d5570, Func Offset: 0x970
	// Line 2008, Address: 0x1d55a0, Func Offset: 0x9a0
	// Line 2009, Address: 0x1d55d0, Func Offset: 0x9d0
	// Line 2010, Address: 0x1d5600, Func Offset: 0xa00
	// Line 2011, Address: 0x1d5630, Func Offset: 0xa30
	// Line 2012, Address: 0x1d5660, Func Offset: 0xa60
	// Line 2013, Address: 0x1d5690, Func Offset: 0xa90
	// Line 2014, Address: 0x1d56c0, Func Offset: 0xac0
	// Line 2015, Address: 0x1d56f0, Func Offset: 0xaf0
	// Line 2016, Address: 0x1d5720, Func Offset: 0xb20
	// Line 2017, Address: 0x1d5750, Func Offset: 0xb50
	// Line 2018, Address: 0x1d5780, Func Offset: 0xb80
	// Line 2019, Address: 0x1d57b0, Func Offset: 0xbb0
	// Line 2020, Address: 0x1d57e0, Func Offset: 0xbe0
	// Line 2021, Address: 0x1d5810, Func Offset: 0xc10
	// Line 2022, Address: 0x1d5840, Func Offset: 0xc40
	// Line 2023, Address: 0x1d5870, Func Offset: 0xc70
	// Line 2024, Address: 0x1d58a0, Func Offset: 0xca0
	// Line 2025, Address: 0x1d58d0, Func Offset: 0xcd0
	// Line 2026, Address: 0x1d5900, Func Offset: 0xd00
	// Line 2027, Address: 0x1d5930, Func Offset: 0xd30
	// Line 2028, Address: 0x1d5960, Func Offset: 0xd60
	// Line 2029, Address: 0x1d5990, Func Offset: 0xd90
	// Line 2030, Address: 0x1d59c0, Func Offset: 0xdc0
	// Line 2031, Address: 0x1d59f0, Func Offset: 0xdf0
	// Line 2032, Address: 0x1d5a20, Func Offset: 0xe20
	// Line 2034, Address: 0x1d5a50, Func Offset: 0xe50
	// Line 2035, Address: 0x1d5af4, Func Offset: 0xef4
	// Line 2037, Address: 0x1d5afc, Func Offset: 0xefc
	// Line 2038, Address: 0x1d5b04, Func Offset: 0xf04
	// Line 2041, Address: 0x1d5b0c, Func Offset: 0xf0c
	// Line 2043, Address: 0x1d5b3c, Func Offset: 0xf3c
	// Line 2044, Address: 0x1d5b68, Func Offset: 0xf68
	// Line 2048, Address: 0x1d5b98, Func Offset: 0xf98
	// Line 2061, Address: 0x1d5bc4, Func Offset: 0xfc4
	// Line 2062, Address: 0x1d5bdc, Func Offset: 0xfdc
	// Line 2063, Address: 0x1d5c08, Func Offset: 0x1008
	// Line 2064, Address: 0x1d5c4c, Func Offset: 0x104c
	// Line 2065, Address: 0x1d5c68, Func Offset: 0x1068
	// Line 2066, Address: 0x1d5c84, Func Offset: 0x1084
	// Line 2068, Address: 0x1d5cb0, Func Offset: 0x10b0
	// Line 2069, Address: 0x1d5ccc, Func Offset: 0x10cc
	// Line 2070, Address: 0x1d5ce8, Func Offset: 0x10e8
	// Line 2075, Address: 0x1d5d04, Func Offset: 0x1104
	// Line 2076, Address: 0x1d5d24, Func Offset: 0x1124
	// Line 2077, Address: 0x1d5d70, Func Offset: 0x1170
	// Line 2080, Address: 0x1d5d88, Func Offset: 0x1188
	// Line 2081, Address: 0x1d5da8, Func Offset: 0x11a8
	// Line 2083, Address: 0x1d5dc0, Func Offset: 0x11c0
	// Line 2085, Address: 0x1d5dd0, Func Offset: 0x11d0
	// Line 2086, Address: 0x1d5de0, Func Offset: 0x11e0
	// Line 2088, Address: 0x1d5e08, Func Offset: 0x1208
	// Line 2089, Address: 0x1d5e24, Func Offset: 0x1224
	// Line 2091, Address: 0x1d5e40, Func Offset: 0x1240
	// Line 2092, Address: 0x1d5e48, Func Offset: 0x1248
	// Line 2093, Address: 0x1d5e64, Func Offset: 0x1264
	// Line 2094, Address: 0x1d5e80, Func Offset: 0x1280
	// Line 2095, Address: 0x1d5e88, Func Offset: 0x1288
	// Line 2096, Address: 0x1d5ea4, Func Offset: 0x12a4
	// Line 2098, Address: 0x1d5edc, Func Offset: 0x12dc
	// Line 2100, Address: 0x1d5efc, Func Offset: 0x12fc
	// Line 2101, Address: 0x1d5f18, Func Offset: 0x1318
	// Line 2102, Address: 0x1d5f20, Func Offset: 0x1320
	// Line 2103, Address: 0x1d5f3c, Func Offset: 0x133c
	// Line 2105, Address: 0x1d5f74, Func Offset: 0x1374
	// Line 2107, Address: 0x1d5f94, Func Offset: 0x1394
	// Line 2108, Address: 0x1d5fb0, Func Offset: 0x13b0
	// Line 2109, Address: 0x1d5fcc, Func Offset: 0x13cc
	// Line 2110, Address: 0x1d5fd4, Func Offset: 0x13d4
	// Line 2111, Address: 0x1d5ff0, Func Offset: 0x13f0
	// Line 2112, Address: 0x1d600c, Func Offset: 0x140c
	// Line 2114, Address: 0x1d6014, Func Offset: 0x1414
	// Line 2115, Address: 0x1d6024, Func Offset: 0x1424
	// Line 2116, Address: 0x1d6040, Func Offset: 0x1440
	// Line 2117, Address: 0x1d605c, Func Offset: 0x145c
	// Line 2119, Address: 0x1d6064, Func Offset: 0x1464
	// Line 2120, Address: 0x1d6080, Func Offset: 0x1480
	// Line 2121, Address: 0x1d609c, Func Offset: 0x149c
	// Line 2123, Address: 0x1d60b8, Func Offset: 0x14b8
	// Line 2125, Address: 0x1d60c0, Func Offset: 0x14c0
	// Line 2126, Address: 0x1d60d0, Func Offset: 0x14d0
	// Line 2127, Address: 0x1d60ec, Func Offset: 0x14ec
	// Line 2128, Address: 0x1d6108, Func Offset: 0x1508
	// Line 2129, Address: 0x1d6124, Func Offset: 0x1524
	// Line 2130, Address: 0x1d612c, Func Offset: 0x152c
	// Line 2131, Address: 0x1d6138, Func Offset: 0x1538
	// Line 2132, Address: 0x1d6154, Func Offset: 0x1554
	// Line 2133, Address: 0x1d6170, Func Offset: 0x1570
	// Line 2134, Address: 0x1d618c, Func Offset: 0x158c
	// Line 2136, Address: 0x1d6194, Func Offset: 0x1594
	// Line 2137, Address: 0x1d61ac, Func Offset: 0x15ac
	// Line 2138, Address: 0x1d61b4, Func Offset: 0x15b4
	// Line 2139, Address: 0x1d61d0, Func Offset: 0x15d0
	// Line 2140, Address: 0x1d61ec, Func Offset: 0x15ec
	// Line 2141, Address: 0x1d6208, Func Offset: 0x1608
	// Line 2142, Address: 0x1d6210, Func Offset: 0x1610
	// Line 2143, Address: 0x1d622c, Func Offset: 0x162c
	// Line 2144, Address: 0x1d6248, Func Offset: 0x1648
	// Line 2145, Address: 0x1d6264, Func Offset: 0x1664
	// Line 2146, Address: 0x1d626c, Func Offset: 0x166c
	// Line 2147, Address: 0x1d6288, Func Offset: 0x1688
	// Line 2148, Address: 0x1d62a4, Func Offset: 0x16a4
	// Line 2149, Address: 0x1d62c0, Func Offset: 0x16c0
	// Line 2150, Address: 0x1d62c8, Func Offset: 0x16c8
	// Line 2151, Address: 0x1d62e4, Func Offset: 0x16e4
	// Line 2152, Address: 0x1d6300, Func Offset: 0x1700
	// Line 2157, Address: 0x1d631c, Func Offset: 0x171c
	// Line 2159, Address: 0x1d6324, Func Offset: 0x1724
	// Line 2161, Address: 0x1d634c, Func Offset: 0x174c
	// Line 2162, Address: 0x1d6368, Func Offset: 0x1768
	// Line 2163, Address: 0x1d6384, Func Offset: 0x1784
	// Line 2164, Address: 0x1d638c, Func Offset: 0x178c
	// Line 2165, Address: 0x1d63a8, Func Offset: 0x17a8
	// Line 2166, Address: 0x1d63b0, Func Offset: 0x17b0
	// Line 2168, Address: 0x1d63e8, Func Offset: 0x17e8
	// Line 2170, Address: 0x1d6408, Func Offset: 0x1808
	// Line 2171, Address: 0x1d6424, Func Offset: 0x1824
	// Line 2172, Address: 0x1d642c, Func Offset: 0x182c
	// Line 2174, Address: 0x1d6464, Func Offset: 0x1864
	// Line 2176, Address: 0x1d6484, Func Offset: 0x1884
	// Line 2177, Address: 0x1d64a0, Func Offset: 0x18a0
	// Line 2178, Address: 0x1d64bc, Func Offset: 0x18bc
	// Line 2179, Address: 0x1d64c4, Func Offset: 0x18c4
	// Line 2180, Address: 0x1d64e0, Func Offset: 0x18e0
	// Line 2182, Address: 0x1d64e8, Func Offset: 0x18e8
	// Line 2183, Address: 0x1d64f8, Func Offset: 0x18f8
	// Line 2184, Address: 0x1d6514, Func Offset: 0x1914
	// Line 2186, Address: 0x1d651c, Func Offset: 0x191c
	// Line 2187, Address: 0x1d6538, Func Offset: 0x1938
	// Line 2188, Address: 0x1d6554, Func Offset: 0x1954
	// Line 2190, Address: 0x1d6570, Func Offset: 0x1970
	// Line 2192, Address: 0x1d6578, Func Offset: 0x1978
	// Line 2193, Address: 0x1d6588, Func Offset: 0x1988
	// Line 2194, Address: 0x1d65a4, Func Offset: 0x19a4
	// Line 2195, Address: 0x1d65c0, Func Offset: 0x19c0
	// Line 2196, Address: 0x1d65c8, Func Offset: 0x19c8
	// Line 2197, Address: 0x1d65d4, Func Offset: 0x19d4
	// Line 2198, Address: 0x1d65f0, Func Offset: 0x19f0
	// Line 2199, Address: 0x1d660c, Func Offset: 0x1a0c
	// Line 2200, Address: 0x1d6628, Func Offset: 0x1a28
	// Line 2202, Address: 0x1d6630, Func Offset: 0x1a30
	// Line 2203, Address: 0x1d6648, Func Offset: 0x1a48
	// Line 2204, Address: 0x1d6650, Func Offset: 0x1a50
	// Line 2205, Address: 0x1d666c, Func Offset: 0x1a6c
	// Line 2206, Address: 0x1d6688, Func Offset: 0x1a88
	// Line 2207, Address: 0x1d6690, Func Offset: 0x1a90
	// Line 2208, Address: 0x1d66ac, Func Offset: 0x1aac
	// Line 2209, Address: 0x1d66c8, Func Offset: 0x1ac8
	// Line 2210, Address: 0x1d66d0, Func Offset: 0x1ad0
	// Line 2211, Address: 0x1d66ec, Func Offset: 0x1aec
	// Line 2212, Address: 0x1d6708, Func Offset: 0x1b08
	// Line 2213, Address: 0x1d6724, Func Offset: 0x1b24
	// Line 2214, Address: 0x1d672c, Func Offset: 0x1b2c
	// Line 2215, Address: 0x1d6748, Func Offset: 0x1b48
	// Line 2221, Address: 0x1d6764, Func Offset: 0x1b64
	// Line 2224, Address: 0x1d67a8, Func Offset: 0x1ba8
	// Line 2225, Address: 0x1d680c, Func Offset: 0x1c0c
	// Line 2227, Address: 0x1d681c, Func Offset: 0x1c1c
	// Line 2228, Address: 0x1d6844, Func Offset: 0x1c44
	// Line 2229, Address: 0x1d685c, Func Offset: 0x1c5c
	// Line 2230, Address: 0x1d686c, Func Offset: 0x1c6c
	// Line 2231, Address: 0x1d6874, Func Offset: 0x1c74
	// Line 2232, Address: 0x1d6880, Func Offset: 0x1c80
	// Line 2233, Address: 0x1d6898, Func Offset: 0x1c98
	// Line 2234, Address: 0x1d68a8, Func Offset: 0x1ca8
	// Line 2236, Address: 0x1d68b0, Func Offset: 0x1cb0
	// Line 2237, Address: 0x1d68c8, Func Offset: 0x1cc8
	// Line 2242, Address: 0x1d68d8, Func Offset: 0x1cd8
	// Line 2244, Address: 0x1d68e8, Func Offset: 0x1ce8
	// Line 2246, Address: 0x1d68fc, Func Offset: 0x1cfc
	// Line 2247, Address: 0x1d6930, Func Offset: 0x1d30
	// Line 2248, Address: 0x1d694c, Func Offset: 0x1d4c
	// Line 2249, Address: 0x1d695c, Func Offset: 0x1d5c
	// Line 2250, Address: 0x1d6964, Func Offset: 0x1d64
	// Line 2252, Address: 0x1d6970, Func Offset: 0x1d70
	// Line 2253, Address: 0x1d69a4, Func Offset: 0x1da4
	// Line 2254, Address: 0x1d69c0, Func Offset: 0x1dc0
	// Line 2259, Address: 0x1d69d0, Func Offset: 0x1dd0
	// Line 2261, Address: 0x1d69e4, Func Offset: 0x1de4
	// Line 2266, Address: 0x1d6a18, Func Offset: 0x1e18
	// Line 2267, Address: 0x1d6a3c, Func Offset: 0x1e3c
	// Line 2268, Address: 0x1d6a54, Func Offset: 0x1e54
	// Line 2269, Address: 0x1d6a64, Func Offset: 0x1e64
	// Line 2271, Address: 0x1d6a6c, Func Offset: 0x1e6c
	// Line 2272, Address: 0x1d6a84, Func Offset: 0x1e84
	// Line 2278, Address: 0x1d6a94, Func Offset: 0x1e94
	// Func End, Address: 0x1d6ab4, Func Offset: 0x1eb4
}

// 
// Start address: 0x1d6ac0
void kage_font(unsigned short* str, unsigned short num, int x, int y)
{
	float f;
	// Line 2286, Address: 0x1d6ac0, Func Offset: 0
	// Line 2288, Address: 0x1d6af4, Func Offset: 0x34
	// Line 2290, Address: 0x1d6b78, Func Offset: 0xb8
	// Line 2291, Address: 0x1d6b90, Func Offset: 0xd0
	// Line 2293, Address: 0x1d6ba8, Func Offset: 0xe8
	// Line 2294, Address: 0x1d6bec, Func Offset: 0x12c
	// Line 2295, Address: 0x1d6c04, Func Offset: 0x144
	// Func End, Address: 0x1d6c30, Func Offset: 0x170
}

// 
// Start address: 0x1d6c30
void lookline(float box[4])
{
	// Line 2302, Address: 0x1d6c30, Func Offset: 0
	// Line 2303, Address: 0x1d6c44, Func Offset: 0x14
	// Line 2304, Address: 0x1d6c68, Func Offset: 0x38
	// Line 2305, Address: 0x1d6ca0, Func Offset: 0x70
	// Line 2306, Address: 0x1d6cbc, Func Offset: 0x8c
	// Line 2307, Address: 0x1d6cd4, Func Offset: 0xa4
	// Line 2309, Address: 0x1d6cf8, Func Offset: 0xc8
	// Line 2310, Address: 0x1d6d14, Func Offset: 0xe4
	// Line 2311, Address: 0x1d6d50, Func Offset: 0x120
	// Line 2312, Address: 0x1d6dd8, Func Offset: 0x1a8
	// Line 2313, Address: 0x1d6e60, Func Offset: 0x230
	// Line 2314, Address: 0x1d6ee8, Func Offset: 0x2b8
	// Line 2315, Address: 0x1d6f70, Func Offset: 0x340
	// Line 2316, Address: 0x1d6ff8, Func Offset: 0x3c8
	// Line 2322, Address: 0x1d7000, Func Offset: 0x3d0
	// Line 2323, Address: 0x1d7038, Func Offset: 0x408
	// Line 2324, Address: 0x1d705c, Func Offset: 0x42c
	// Line 2325, Address: 0x1d7094, Func Offset: 0x464
	// Line 2326, Address: 0x1d70b0, Func Offset: 0x480
	// Line 2327, Address: 0x1d70cc, Func Offset: 0x49c
	// Line 2328, Address: 0x1d7108, Func Offset: 0x4d8
	// Line 2329, Address: 0x1d71c4, Func Offset: 0x594
	// Line 2330, Address: 0x1d726c, Func Offset: 0x63c
	// Line 2331, Address: 0x1d7328, Func Offset: 0x6f8
	// Line 2334, Address: 0x1d7330, Func Offset: 0x700
	// Line 2335, Address: 0x1d7354, Func Offset: 0x724
	// Line 2336, Address: 0x1d738c, Func Offset: 0x75c
	// Line 2337, Address: 0x1d73a8, Func Offset: 0x778
	// Line 2338, Address: 0x1d73c4, Func Offset: 0x794
	// Line 2339, Address: 0x1d7400, Func Offset: 0x7d0
	// Line 2340, Address: 0x1d74bc, Func Offset: 0x88c
	// Line 2341, Address: 0x1d7564, Func Offset: 0x934
	// Line 2342, Address: 0x1d7620, Func Offset: 0x9f0
	// Line 2345, Address: 0x1d7628, Func Offset: 0x9f8
	// Func End, Address: 0x1d7640, Func Offset: 0xa10
}

// 
// Start address: 0x1d7640
void item_allay()
{
	int rgb;
	// Line 2353, Address: 0x1d7640, Func Offset: 0
	// Line 2356, Address: 0x1d7650, Func Offset: 0x10
	// Line 2358, Address: 0x1d7670, Func Offset: 0x30
	// Line 2359, Address: 0x1d7694, Func Offset: 0x54
	// Line 2361, Address: 0x1d76e4, Func Offset: 0xa4
	// Line 2362, Address: 0x1d7708, Func Offset: 0xc8
	// Line 2363, Address: 0x1d7740, Func Offset: 0x100
	// Line 2364, Address: 0x1d775c, Func Offset: 0x11c
	// Line 2365, Address: 0x1d7778, Func Offset: 0x138
	// Line 2366, Address: 0x1d77c8, Func Offset: 0x188
	// Line 2367, Address: 0x1d7838, Func Offset: 0x1f8
	// Line 2368, Address: 0x1d78a8, Func Offset: 0x268
	// Line 2369, Address: 0x1d7918, Func Offset: 0x2d8
	// Line 2370, Address: 0x1d7988, Func Offset: 0x348
	// Line 2371, Address: 0x1d79f8, Func Offset: 0x3b8
	// Line 2372, Address: 0x1d7a68, Func Offset: 0x428
	// Line 2374, Address: 0x1d7a70, Func Offset: 0x430
	// Line 2375, Address: 0x1d7a94, Func Offset: 0x454
	// Line 2376, Address: 0x1d7acc, Func Offset: 0x48c
	// Line 2377, Address: 0x1d7ae8, Func Offset: 0x4a8
	// Line 2378, Address: 0x1d7b04, Func Offset: 0x4c4
	// Line 2379, Address: 0x1d7b3c, Func Offset: 0x4fc
	// Line 2380, Address: 0x1d7bac, Func Offset: 0x56c
	// Line 2381, Address: 0x1d7c1c, Func Offset: 0x5dc
	// Line 2382, Address: 0x1d7c8c, Func Offset: 0x64c
	// Line 2383, Address: 0x1d7cfc, Func Offset: 0x6bc
	// Line 2384, Address: 0x1d7d6c, Func Offset: 0x72c
	// Line 2385, Address: 0x1d7ddc, Func Offset: 0x79c
	// Line 2390, Address: 0x1d7de4, Func Offset: 0x7a4
	// Line 2391, Address: 0x1d7e08, Func Offset: 0x7c8
	// Line 2392, Address: 0x1d7e40, Func Offset: 0x800
	// Line 2393, Address: 0x1d7e5c, Func Offset: 0x81c
	// Line 2394, Address: 0x1d7e78, Func Offset: 0x838
	// Line 2395, Address: 0x1d7ec0, Func Offset: 0x880
	// Line 2396, Address: 0x1d7f30, Func Offset: 0x8f0
	// Line 2397, Address: 0x1d7fa0, Func Offset: 0x960
	// Line 2398, Address: 0x1d8010, Func Offset: 0x9d0
	// Line 2399, Address: 0x1d8080, Func Offset: 0xa40
	// Line 2401, Address: 0x1d8088, Func Offset: 0xa48
	// Line 2402, Address: 0x1d80ac, Func Offset: 0xa6c
	// Line 2403, Address: 0x1d80e4, Func Offset: 0xaa4
	// Line 2404, Address: 0x1d8100, Func Offset: 0xac0
	// Line 2405, Address: 0x1d811c, Func Offset: 0xadc
	// Line 2406, Address: 0x1d8164, Func Offset: 0xb24
	// Line 2407, Address: 0x1d81d4, Func Offset: 0xb94
	// Line 2408, Address: 0x1d8244, Func Offset: 0xc04
	// Line 2409, Address: 0x1d82b4, Func Offset: 0xc74
	// Line 2410, Address: 0x1d8324, Func Offset: 0xce4
	// Line 2412, Address: 0x1d832c, Func Offset: 0xcec
	// Line 2413, Address: 0x1d8350, Func Offset: 0xd10
	// Line 2414, Address: 0x1d8388, Func Offset: 0xd48
	// Line 2415, Address: 0x1d83a4, Func Offset: 0xd64
	// Line 2416, Address: 0x1d83c0, Func Offset: 0xd80
	// Line 2417, Address: 0x1d8408, Func Offset: 0xdc8
	// Line 2418, Address: 0x1d8478, Func Offset: 0xe38
	// Line 2419, Address: 0x1d84e8, Func Offset: 0xea8
	// Line 2420, Address: 0x1d8558, Func Offset: 0xf18
	// Line 2421, Address: 0x1d85c8, Func Offset: 0xf88
	// Line 2423, Address: 0x1d85d0, Func Offset: 0xf90
	// Line 2424, Address: 0x1d85f4, Func Offset: 0xfb4
	// Line 2425, Address: 0x1d862c, Func Offset: 0xfec
	// Line 2426, Address: 0x1d8648, Func Offset: 0x1008
	// Line 2427, Address: 0x1d8664, Func Offset: 0x1024
	// Line 2428, Address: 0x1d86ac, Func Offset: 0x106c
	// Line 2429, Address: 0x1d871c, Func Offset: 0x10dc
	// Line 2430, Address: 0x1d878c, Func Offset: 0x114c
	// Line 2431, Address: 0x1d87fc, Func Offset: 0x11bc
	// Line 2432, Address: 0x1d886c, Func Offset: 0x122c
	// Line 2434, Address: 0x1d8874, Func Offset: 0x1234
	// Func End, Address: 0x1d888c, Func Offset: 0x124c
}

// 
// Start address: 0x1d8890
void sprite()
{
	int rgb;
	int k;
	int j;
	int i;
	// Line 2443, Address: 0x1d8890, Func Offset: 0
	// Line 2445, Address: 0x1d88c0, Func Offset: 0x30
	// Line 2446, Address: 0x1d88e4, Func Offset: 0x54
	// Line 2447, Address: 0x1d892c, Func Offset: 0x9c
	// Line 2448, Address: 0x1d8950, Func Offset: 0xc0
	// Line 2449, Address: 0x1d8988, Func Offset: 0xf8
	// Line 2450, Address: 0x1d89a4, Func Offset: 0x114
	// Line 2451, Address: 0x1d89c0, Func Offset: 0x130
	// Line 2453, Address: 0x1d8aa8, Func Offset: 0x218
	// Line 2454, Address: 0x1d8b78, Func Offset: 0x2e8
	// Line 2455, Address: 0x1d8c2c, Func Offset: 0x39c
	// Line 2457, Address: 0x1d8c34, Func Offset: 0x3a4
	// Line 2458, Address: 0x1d8c78, Func Offset: 0x3e8
	// Line 2459, Address: 0x1d8d58, Func Offset: 0x4c8
	// Line 2460, Address: 0x1d8df4, Func Offset: 0x564
	// Line 2461, Address: 0x1d8e68, Func Offset: 0x5d8
	// Line 2462, Address: 0x1d8ed8, Func Offset: 0x648
	// Line 2463, Address: 0x1d8ee0, Func Offset: 0x650
	// Line 2464, Address: 0x1d8f14, Func Offset: 0x684
	// Func End, Address: 0x1d8f4c, Func Offset: 0x6bc
}

// 
// Start address: 0x1d8f50
void look_command(int gosa)
{
	int k;
	// Line 2472, Address: 0x1d8f50, Func Offset: 0
	// Line 2474, Address: 0x1d8f70, Func Offset: 0x20
	// Line 2475, Address: 0x1d8fcc, Func Offset: 0x7c
	// Line 2477, Address: 0x1d8fe8, Func Offset: 0x98
	// Line 2478, Address: 0x1d8ff4, Func Offset: 0xa4
	// Line 2479, Address: 0x1d9018, Func Offset: 0xc8
	// Line 2480, Address: 0x1d9050, Func Offset: 0x100
	// Line 2481, Address: 0x1d906c, Func Offset: 0x11c
	// Line 2482, Address: 0x1d9088, Func Offset: 0x138
	// Line 2483, Address: 0x1d9100, Func Offset: 0x1b0
	// Line 2484, Address: 0x1d91f8, Func Offset: 0x2a8
	// Line 2485, Address: 0x1d92d8, Func Offset: 0x388
	// Line 2486, Address: 0x1d9384, Func Offset: 0x434
	// Line 2487, Address: 0x1d9440, Func Offset: 0x4f0
	// Line 2488, Address: 0x1d9448, Func Offset: 0x4f8
	// Line 2489, Address: 0x1d945c, Func Offset: 0x50c
	// Func End, Address: 0x1d9480, Func Offset: 0x530
}

// 
// Start address: 0x1d9480
void look_volume()
{
	int i;
	// Line 2497, Address: 0x1d9480, Func Offset: 0
	// Line 2500, Address: 0x1d9494, Func Offset: 0x14
	// Line 2502, Address: 0x1d94a0, Func Offset: 0x20
	// Line 2503, Address: 0x1d94c4, Func Offset: 0x44
	// Line 2504, Address: 0x1d94e0, Func Offset: 0x60
	// Line 2505, Address: 0x1d94f4, Func Offset: 0x74
	// Line 2507, Address: 0x1d951c, Func Offset: 0x9c
	// Line 2508, Address: 0x1d9540, Func Offset: 0xc0
	// Line 2509, Address: 0x1d95b8, Func Offset: 0x138
	// Line 2510, Address: 0x1d9628, Func Offset: 0x1a8
	// Line 2511, Address: 0x1d9630, Func Offset: 0x1b0
	// Line 2513, Address: 0x1d9644, Func Offset: 0x1c4
	// Func End, Address: 0x1d9660, Func Offset: 0x1e0
}

// 
// Start address: 0x1d9660
void look_hp()
{
	float j_max;
	float j_hp;
	int b;
	int g;
	int r;
	int j1;
	int j0;
	int j;
	int i;
	int z;
	// Line 2523, Address: 0x1d9660, Func Offset: 0
	// Line 2526, Address: 0x1d9694, Func Offset: 0x34
	// Line 2527, Address: 0x1d96a0, Func Offset: 0x40
	// Line 2534, Address: 0x1d96a4, Func Offset: 0x44
	// Line 2535, Address: 0x1d96d0, Func Offset: 0x70
	// Line 2536, Address: 0x1d973c, Func Offset: 0xdc
	// Line 2537, Address: 0x1d9764, Func Offset: 0x104
	// Line 2538, Address: 0x1d979c, Func Offset: 0x13c
	// Line 2539, Address: 0x1d97b4, Func Offset: 0x154
	// Line 2541, Address: 0x1d97c0, Func Offset: 0x160
	// Line 2543, Address: 0x1d97d0, Func Offset: 0x170
	// Line 2545, Address: 0x1d97ec, Func Offset: 0x18c
	// Line 2546, Address: 0x1d9818, Func Offset: 0x1b8
	// Line 2547, Address: 0x1d983c, Func Offset: 0x1dc
	// Line 2549, Address: 0x1d9844, Func Offset: 0x1e4
	// Line 2550, Address: 0x1d9890, Func Offset: 0x230
	// Line 2551, Address: 0x1d98bc, Func Offset: 0x25c
	// Line 2552, Address: 0x1d9900, Func Offset: 0x2a0
	// Line 2553, Address: 0x1d9924, Func Offset: 0x2c4
	// Line 2561, Address: 0x1d9930, Func Offset: 0x2d0
	// Line 2563, Address: 0x1d9954, Func Offset: 0x2f4
	// Line 2564, Address: 0x1d9988, Func Offset: 0x328
	// Line 2565, Address: 0x1d99a0, Func Offset: 0x340
	// Line 2566, Address: 0x1d99d8, Func Offset: 0x378
	// Line 2567, Address: 0x1d99f4, Func Offset: 0x394
	// Line 2568, Address: 0x1d9a10, Func Offset: 0x3b0
	// Line 2570, Address: 0x1d9a3c, Func Offset: 0x3dc
	// Line 2571, Address: 0x1d9a64, Func Offset: 0x404
	// Line 2573, Address: 0x1d9afc, Func Offset: 0x49c
	// Line 2574, Address: 0x1d9b54, Func Offset: 0x4f4
	// Line 2575, Address: 0x1d9b6c, Func Offset: 0x50c
	// Line 2576, Address: 0x1d9bc0, Func Offset: 0x560
	// Line 2577, Address: 0x1d9be8, Func Offset: 0x588
	// Line 2578, Address: 0x1d9c3c, Func Offset: 0x5dc
	// Line 2582, Address: 0x1d9c44, Func Offset: 0x5e4
	// Line 2584, Address: 0x1d9c50, Func Offset: 0x5f0
	// Line 2585, Address: 0x1d9c6c, Func Offset: 0x60c
	// Line 2586, Address: 0x1d9c8c, Func Offset: 0x62c
	// Line 2587, Address: 0x1d9cac, Func Offset: 0x64c
	// Line 2588, Address: 0x1d9cc8, Func Offset: 0x668
	// Line 2590, Address: 0x1d9ce4, Func Offset: 0x684
	// Line 2592, Address: 0x1d9cec, Func Offset: 0x68c
	// Line 2593, Address: 0x1d9d08, Func Offset: 0x6a8
	// Line 2595, Address: 0x1d9d2c, Func Offset: 0x6cc
	// Line 2596, Address: 0x1d9d60, Func Offset: 0x700
	// Line 2597, Address: 0x1d9d78, Func Offset: 0x718
	// Line 2598, Address: 0x1d9db0, Func Offset: 0x750
	// Line 2599, Address: 0x1d9dcc, Func Offset: 0x76c
	// Line 2600, Address: 0x1d9de8, Func Offset: 0x788
	// Line 2603, Address: 0x1d9e14, Func Offset: 0x7b4
	// Line 2604, Address: 0x1d9e24, Func Offset: 0x7c4
	// Line 2606, Address: 0x1d9ec8, Func Offset: 0x868
	// Line 2607, Address: 0x1d9f20, Func Offset: 0x8c0
	// Line 2610, Address: 0x1d9fbc, Func Offset: 0x95c
	// Line 2611, Address: 0x1da010, Func Offset: 0x9b0
	// Line 2613, Address: 0x1da09c, Func Offset: 0xa3c
	// Line 2614, Address: 0x1da0f0, Func Offset: 0xa90
	// Line 2616, Address: 0x1da0f8, Func Offset: 0xa98
	// Line 2619, Address: 0x1da130, Func Offset: 0xad0
	// Func End, Address: 0x1da16c, Func Offset: 0xb0c
}

// 
// Start address: 0x1da170
void stock_line(int leftx, int hoge)
{
	int i;
	// Line 2627, Address: 0x1da170, Func Offset: 0
	// Line 2630, Address: 0x1da190, Func Offset: 0x20
	// Line 2632, Address: 0x1da19c, Func Offset: 0x2c
	// Line 2633, Address: 0x1da1c0, Func Offset: 0x50
	// Line 2634, Address: 0x1da1f8, Func Offset: 0x88
	// Line 2635, Address: 0x1da210, Func Offset: 0xa0
	// Line 2636, Address: 0x1da22c, Func Offset: 0xbc
	// Line 2637, Address: 0x1da250, Func Offset: 0xe0
	// Line 2638, Address: 0x1da2d8, Func Offset: 0x168
	// Line 2639, Address: 0x1da350, Func Offset: 0x1e0
	// Line 2640, Address: 0x1da3d8, Func Offset: 0x268
	// Line 2641, Address: 0x1da450, Func Offset: 0x2e0
	// Line 2642, Address: 0x1da458, Func Offset: 0x2e8
	// Line 2643, Address: 0x1da46c, Func Offset: 0x2fc
	// Func End, Address: 0x1da48c, Func Offset: 0x31c
}

// 
// Start address: 0x1da490
void look_combine()
{
	int i;
	// Line 2652, Address: 0x1da490, Func Offset: 0
	// Line 2654, Address: 0x1da4a8, Func Offset: 0x18
	// Line 2655, Address: 0x1da4e4, Func Offset: 0x54
	// Line 2656, Address: 0x1da520, Func Offset: 0x90
	// Line 2658, Address: 0x1da55c, Func Offset: 0xcc
	// Line 2659, Address: 0x1da5a0, Func Offset: 0x110
	// Line 2660, Address: 0x1da5cc, Func Offset: 0x13c
	// Line 2661, Address: 0x1da600, Func Offset: 0x170
	// Line 2663, Address: 0x1da620, Func Offset: 0x190
	// Line 2665, Address: 0x1da62c, Func Offset: 0x19c
	// Line 2666, Address: 0x1da650, Func Offset: 0x1c0
	// Line 2667, Address: 0x1da66c, Func Offset: 0x1dc
	// Line 2668, Address: 0x1da6b0, Func Offset: 0x220
	// Line 2669, Address: 0x1da738, Func Offset: 0x2a8
	// Line 2670, Address: 0x1da7ac, Func Offset: 0x31c
	// Line 2672, Address: 0x1da7b4, Func Offset: 0x324
	// Line 2673, Address: 0x1da7dc, Func Offset: 0x34c
	// Line 2674, Address: 0x1da7f8, Func Offset: 0x368
	// Line 2675, Address: 0x1da83c, Func Offset: 0x3ac
	// Line 2676, Address: 0x1da8ac, Func Offset: 0x41c
	// Line 2677, Address: 0x1da91c, Func Offset: 0x48c
	// Line 2678, Address: 0x1da98c, Func Offset: 0x4fc
	// Line 2679, Address: 0x1da9fc, Func Offset: 0x56c
	// Line 2680, Address: 0x1daa6c, Func Offset: 0x5dc
	// Line 2681, Address: 0x1daa74, Func Offset: 0x5e4
	// Line 2683, Address: 0x1daa84, Func Offset: 0x5f4
	// Func End, Address: 0x1daaa4, Func Offset: 0x614
}

// 
// Start address: 0x1daab0
void look_zanzo(float* za0, float* za1, float* za2, float* za3)
{
	// Line 2691, Address: 0x1daab0, Func Offset: 0
	// Line 2692, Address: 0x1daadc, Func Offset: 0x2c
	// Line 2693, Address: 0x1dab00, Func Offset: 0x50
	// Line 2694, Address: 0x1dab38, Func Offset: 0x88
	// Line 2695, Address: 0x1dab54, Func Offset: 0xa4
	// Line 2696, Address: 0x1dab70, Func Offset: 0xc0
	// Line 2697, Address: 0x1dab90, Func Offset: 0xe0
	// Line 2698, Address: 0x1dabcc, Func Offset: 0x11c
	// Line 2700, Address: 0x1dabd4, Func Offset: 0x124
	// Line 2702, Address: 0x1dac0c, Func Offset: 0x15c
	// Line 2703, Address: 0x1dac94, Func Offset: 0x1e4
	// Line 2704, Address: 0x1dad1c, Func Offset: 0x26c
	// Line 2705, Address: 0x1dada4, Func Offset: 0x2f4
	// Line 2706, Address: 0x1dae2c, Func Offset: 0x37c
	// Line 2707, Address: 0x1dae34, Func Offset: 0x384
	// Func End, Address: 0x1dae58, Func Offset: 0x3a8
}

// 
// Start address: 0x1dae60
void look_blackscr(int num)
{
	int j;
	int i;
	// Line 2711, Address: 0x1dae60, Func Offset: 0
	// Line 2713, Address: 0x1dae84, Func Offset: 0x24
	// Line 2715, Address: 0x1dae9c, Func Offset: 0x3c
	// Line 2716, Address: 0x1daea4, Func Offset: 0x44
	// Line 2717, Address: 0x1daec8, Func Offset: 0x68
	// Line 2718, Address: 0x1daf00, Func Offset: 0xa0
	// Line 2719, Address: 0x1daf18, Func Offset: 0xb8
	// Line 2721, Address: 0x1daf20, Func Offset: 0xc0
	// Line 2722, Address: 0x1daf44, Func Offset: 0xe4
	// Line 2723, Address: 0x1daf48, Func Offset: 0xe8
	// Line 2724, Address: 0x1daf64, Func Offset: 0x104
	// Line 2725, Address: 0x1daf84, Func Offset: 0x124
	// Line 2726, Address: 0x1daffc, Func Offset: 0x19c
	// Line 2727, Address: 0x1db06c, Func Offset: 0x20c
	// Line 2728, Address: 0x1db074, Func Offset: 0x214
	// Line 2729, Address: 0x1db094, Func Offset: 0x234
	// Func End, Address: 0x1db0bc, Func Offset: 0x25c
}

// 
// Start address: 0x1db0c0
void item_fade_in()
{
	// Line 2735, Address: 0x1db0c0, Func Offset: 0
	// Line 2739, Address: 0x1db0d0, Func Offset: 0x10
	// Line 2741, Address: 0x1db0d8, Func Offset: 0x18
	// Func End, Address: 0x1db0e0, Func Offset: 0x20
}

// 
// Start address: 0x1db0e0
void item_fade_out()
{
	// Line 2744, Address: 0x1db0e0, Func Offset: 0
	// Line 2745, Address: 0x1db0e8, Func Offset: 0x8
	// Line 2749, Address: 0x1db0fc, Func Offset: 0x1c
	// Line 2750, Address: 0x1db10c, Func Offset: 0x2c
	// Line 2752, Address: 0x1db11c, Func Offset: 0x3c
	// Line 2753, Address: 0x1db128, Func Offset: 0x48
	// Line 2754, Address: 0x1db130, Func Offset: 0x50
	// Line 2755, Address: 0x1db138, Func Offset: 0x58
	// Line 2756, Address: 0x1db148, Func Offset: 0x68
	// Line 2759, Address: 0x1db154, Func Offset: 0x74
	// Func End, Address: 0x1db164, Func Offset: 0x84
}

// 
// Start address: 0x1db170
void item_examine_fade_out()
{
	// Line 2763, Address: 0x1db170, Func Offset: 0
	// Line 2764, Address: 0x1db178, Func Offset: 0x8
	// Line 2766, Address: 0x1db18c, Func Offset: 0x1c
	// Line 2768, Address: 0x1db1b4, Func Offset: 0x44
	// Line 2769, Address: 0x1db1c0, Func Offset: 0x50
	// Line 2770, Address: 0x1db1c8, Func Offset: 0x58
	// Line 2771, Address: 0x1db1d8, Func Offset: 0x68
	// Line 2772, Address: 0x1db1e4, Func Offset: 0x74
	// Line 2773, Address: 0x1db1f8, Func Offset: 0x88
	// Line 2777, Address: 0x1db200, Func Offset: 0x90
	// Func End, Address: 0x1db210, Func Offset: 0xa0
}

