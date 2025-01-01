typedef struct _CL_HITPOLY_HEAD;
typedef struct _anon0;
typedef struct SPACK_ENV_DATA;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct SubCharacter;
typedef struct SubObject;
typedef struct SPACK_STATIC_DATA;
typedef struct SPACK_DATA;
typedef struct SPACK_OT_DATA;
typedef struct _anon1;
typedef struct shPlayerWork;
typedef struct Pad_KeyConfig;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct Item;
typedef struct _anon2;
typedef struct shSkelton;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct _USXY;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _SXY;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct shAnime3d;
typedef struct shClusterAnime;
typedef struct shBattleArea;
typedef struct SubCharacterDisp;
typedef struct _SH2_SYS;
typedef struct shBattleInfo;
typedef struct _AnimeInfo;
typedef struct PAD_3D;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_WALL;
typedef struct PAD_2D;
typedef union _anon5;
typedef struct _CL_VHIT_CHARA;
typedef struct PAD_INFO;
typedef struct shItemScreenObjectSettingData;
typedef struct _CL_VHIT_RESULT;
typedef union _anon6;

typedef void(*type_0)(SubCharacter*);
typedef void(*type_1)(SubCharacter*);
typedef void(*type_28)(SubCharacter*);
typedef void(*type_30)(SubCharacter*);

typedef unsigned char type_2[13];
typedef float type_3[4][4];
typedef float type_4[4][4];
typedef float type_5[4][4][7];
typedef shItemScreenObjectSettingData type_6[58];
typedef float type_7[4];
typedef float type_8[4][2];
typedef unsigned char type_9[2];
typedef unsigned short type_10[0];
typedef float type_11[8];
typedef unsigned char type_12[34];
typedef int type_13[3];
typedef unsigned int type_14[2];
typedef unsigned int type_15[256];
typedef unsigned short type_16[11];
typedef unsigned int type_17[32];
typedef unsigned char type_18[4];
typedef int type_19[4];
typedef float type_20[4];
typedef float type_21[4][4];
typedef char type_22[4];
typedef char type_23[4];
typedef unsigned short type_24[3];
typedef unsigned char type_25[4];
typedef _anon4 type_26[75];
typedef unsigned char type_27[10];
typedef shAttackInfo type_29[46];
typedef float type_31[4];
typedef unsigned int type_32[8];
typedef unsigned char type_33[4];
typedef void* type_34[3];
typedef unsigned char type_35[4];
typedef unsigned char type_36[4];
typedef PAD_INFO type_37[10];
typedef unsigned char type_38[10];
typedef unsigned char type_39[2];
typedef unsigned char type_40[2];

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
};

struct _anon0
{
	unsigned char main_step;
	unsigned char step;
	int turn_speed;
	int command_cur;
	int command_abe;
	float command_move;
	int gosa;
	int cur_max;
	unsigned char command_volume;
	unsigned char command_light;
	unsigned char prs_btn;
	unsigned char prs_btn2;
	float box[4][4];
	float boxblur[4][4][7];
	int item_no;
	int item_kind;
	int item_count;
	float turnf;
	int volume_time;
	float hp_time1;
	float hp_time2;
	float hp_abe;
	int allay_time;
	float allay_abe;
	float sprite_time;
	unsigned char use_item;
	float weapon_scale[8];
	int combine[3];
	unsigned char shelf;
	int use_item_kind;
	int analog[4];
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

struct SubCharacter
{
	int index;
	unsigned int status;
	unsigned int sub_status;
	unsigned int sub_st;
	short kind;
	short id;
	unsigned int step;
	_anon1 pos;
	_anon1 rot;
	_anon1 pos_spd;
	_anon1 rot_spd;
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
	_anon1 b_pos;
	_anon1 b_rot;
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

struct SubObject
{
	unsigned int status;
	unsigned int sub_status;
	unsigned int sub_st;
	short kind;
	short id;
	unsigned int step;
	_anon1 pos;
	_anon1 rot;
	_anon1 pos_spd;
	_anon1 rot_spd;
	_anon3 mat;
	void(*function)(SubCharacter*);
	void(*effecter_function)(SubCharacter*);
	SubObject* pre;
	SubObject* next;
};

struct SPACK_STATIC_DATA
{
	unsigned short GifNLOOP;
	unsigned short DmaQwc;
	unsigned int PRE_PRIM_FLG_NREG;
	unsigned long REGS;
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

struct _anon1
{
	float x;
	float y;
	float z;
	float w;
};

struct shPlayerWork
{
	SubCharacter* player;
	_anon1 dist_rot;
	_anon1 dist_pos;
	_anon1 pos;
	_anon1 rot;
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
	_anon1 tgt_body_angle;
	_anon1 tgt_neck_angle;
	_anon1 tgt_arms_angle;
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

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon3 src_m;
	_anon1 src_t;
	_anon3 des_m;
	_anon1 des_t;
	_anon1 axis;
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

struct _USXY
{
	unsigned short x;
	unsigned short y;
};

struct _anon3
{
	float d[4][4];
};

struct _anon4
{
	int kind;
	int count;
	int del;
	float pos[4];
	float rot;
	float tgs_scale;
};

struct _SXY
{
	short x;
	short y;
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

struct shAnime3d
{
	shSkelton* top;
	void* anime;
	void* frame_top;
	void* p_anime;
	void* p_frame_top;
	unsigned int frame_size;
	int total_count;
	_SXY c_count;
	_SXY c_speed;
	_SXY total_speed;
	_USXY cur_frame;
	char first_bone_type;
	char comp_type;
	_AnimeInfo* anim_a;
	_AnimeInfo* anim_b;
	_anon1 rot_neck;
	_anon1 rot_arms;
	_anon1 rot_body_neck;
	_anon1 rot_body;
	float scale;
};

struct shClusterAnime
{
	void* data;
	unsigned char used;
	unsigned char n_clusters;
	unsigned char is_repeat;
	unsigned char frame_updated;
	int frame_no;
	float* weights;
};

struct shBattleArea
{
	float center;
	float radius;
};

struct SubCharacterDisp
{
	SubCharacter sc;
	shAnime3d anime2;
	shAnime3d anime;
	shClusterAnime* cluster_anime;
	void* models[3];
	void* work;
	void* data;
	unsigned int model_adr;
	unsigned int anime_adr;
	unsigned int clani_adr;
	void* anime_list;
	void* clani_list;
};

struct _SH2_SYS
{
	unsigned int step[8];
	int main_status;
	unsigned int boot_first;
	unsigned int soft_reset;
	unsigned int frame_cnt;
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

struct _AnimeInfo
{
	unsigned short name;
	unsigned short frame;
	short speed;
	unsigned short start;
	unsigned short end;
	unsigned char loop;
	unsigned char pad;
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

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
};

union _anon5
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
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

struct shItemScreenObjectSettingData
{
	int chara_id;
	float scale;
	_anon1 rot;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon6 hobj;
};

union _anon6
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
shItemScreenObjectSettingData item_screen_obj_data[58];
_SH2_SYS Sh2sys;
_anon0 t;
Item item;
_anon4 item_select[75];
_anon2 game_flag;
Pad_KeyConfig key_config;
unsigned short msg_buffer[0];
SPACK_DATA spack;
shPlayerWork sh2jms;
int se_num;

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
void item_set();
int command_kind(int kind);
void del_check();
int kind_no(int kind);
void event_item_use(int kind);
void combine_item_use(int kind);
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
void test();

// 
// Start address: 0x1d33c0
int itemmain()
{
	// Line 235, Address: 0x1d33c0, Func Offset: 0
	// Line 237, Address: 0x1d33c8, Func Offset: 0x8
	// Line 239, Address: 0x1d33d8, Func Offset: 0x18
	// Line 240, Address: 0x1d33e0, Func Offset: 0x20
	// Line 243, Address: 0x1d3414, Func Offset: 0x54
	// Line 246, Address: 0x1d3454, Func Offset: 0x94
	// Line 247, Address: 0x1d345c, Func Offset: 0x9c
	// Line 248, Address: 0x1d3464, Func Offset: 0xa4
	// Line 249, Address: 0x1d3470, Func Offset: 0xb0
	// Line 250, Address: 0x1d3484, Func Offset: 0xc4
	// Line 253, Address: 0x1d348c, Func Offset: 0xcc
	// Line 254, Address: 0x1d34b8, Func Offset: 0xf8
	// Line 263, Address: 0x1d34c0, Func Offset: 0x100
	// Line 264, Address: 0x1d34c8, Func Offset: 0x108
	// Line 265, Address: 0x1d34d0, Func Offset: 0x110
	// Line 267, Address: 0x1d34d8, Func Offset: 0x118
	// Line 270, Address: 0x1d34e0, Func Offset: 0x120
	// Line 271, Address: 0x1d34e8, Func Offset: 0x128
	// Line 272, Address: 0x1d34fc, Func Offset: 0x13c
	// Line 273, Address: 0x1d3504, Func Offset: 0x144
	// Line 274, Address: 0x1d3538, Func Offset: 0x178
	// Line 275, Address: 0x1d3564, Func Offset: 0x1a4
	// Line 277, Address: 0x1d3570, Func Offset: 0x1b0
	// Line 278, Address: 0x1d3574, Func Offset: 0x1b4
	// Func End, Address: 0x1d3584, Func Offset: 0x1c4
}

// 
// Start address: 0x1d3590
void itemmainmain()
{
	int fog;
	int i;
	// Line 286, Address: 0x1d3590, Func Offset: 0
	// Line 293, Address: 0x1d35a4, Func Offset: 0x14
	// Line 294, Address: 0x1d35c0, Func Offset: 0x30
	// Line 295, Address: 0x1d35e8, Func Offset: 0x58
	// Line 296, Address: 0x1d35f0, Func Offset: 0x60
	// Line 297, Address: 0x1d35f8, Func Offset: 0x68
	// Line 298, Address: 0x1d3614, Func Offset: 0x84
	// Line 299, Address: 0x1d363c, Func Offset: 0xac
	// Line 300, Address: 0x1d3644, Func Offset: 0xb4
	// Line 301, Address: 0x1d364c, Func Offset: 0xbc
	// Line 302, Address: 0x1d3668, Func Offset: 0xd8
	// Line 303, Address: 0x1d3690, Func Offset: 0x100
	// Line 304, Address: 0x1d3698, Func Offset: 0x108
	// Line 305, Address: 0x1d36a0, Func Offset: 0x110
	// Line 306, Address: 0x1d36bc, Func Offset: 0x12c
	// Line 307, Address: 0x1d36e4, Func Offset: 0x154
	// Line 308, Address: 0x1d36ec, Func Offset: 0x15c
	// Line 311, Address: 0x1d36f4, Func Offset: 0x164
	// Line 314, Address: 0x1d3710, Func Offset: 0x180
	// Line 317, Address: 0x1d3718, Func Offset: 0x188
	// Line 318, Address: 0x1d3724, Func Offset: 0x194
	// Line 319, Address: 0x1d3748, Func Offset: 0x1b8
	// Line 321, Address: 0x1d37dc, Func Offset: 0x24c
	// Line 322, Address: 0x1d3800, Func Offset: 0x270
	// Line 327, Address: 0x1d3824, Func Offset: 0x294
	// Line 332, Address: 0x1d3830, Func Offset: 0x2a0
	// Line 336, Address: 0x1d3854, Func Offset: 0x2c4
	// Line 337, Address: 0x1d38b0, Func Offset: 0x320
	// Line 338, Address: 0x1d38c0, Func Offset: 0x330
	// Line 349, Address: 0x1d3a00, Func Offset: 0x470
	// Line 350, Address: 0x1d3a7c, Func Offset: 0x4ec
	// Line 351, Address: 0x1d3af0, Func Offset: 0x560
	// Line 353, Address: 0x1d3b28, Func Offset: 0x598
	// Line 362, Address: 0x1d3b80, Func Offset: 0x5f0
	// Line 365, Address: 0x1d3ba8, Func Offset: 0x618
	// Line 366, Address: 0x1d3bcc, Func Offset: 0x63c
	// Line 367, Address: 0x1d3bd0, Func Offset: 0x640
	// Line 369, Address: 0x1d3bf4, Func Offset: 0x664
	// Line 371, Address: 0x1d3c28, Func Offset: 0x698
	// Line 373, Address: 0x1d3c5c, Func Offset: 0x6cc
	// Line 374, Address: 0x1d3c7c, Func Offset: 0x6ec
	// Line 375, Address: 0x1d3c98, Func Offset: 0x708
	// Line 376, Address: 0x1d3cb4, Func Offset: 0x724
	// Line 391, Address: 0x1d3cb8, Func Offset: 0x728
	// Line 395, Address: 0x1d3cd4, Func Offset: 0x744
	// Line 396, Address: 0x1d3d18, Func Offset: 0x788
	// Line 397, Address: 0x1d3d5c, Func Offset: 0x7cc
	// Line 398, Address: 0x1d3da0, Func Offset: 0x810
	// Line 399, Address: 0x1d3de4, Func Offset: 0x854
	// Line 400, Address: 0x1d3e28, Func Offset: 0x898
	// Line 401, Address: 0x1d3e6c, Func Offset: 0x8dc
	// Line 402, Address: 0x1d3eb0, Func Offset: 0x920
	// Line 404, Address: 0x1d3eec, Func Offset: 0x95c
	// Line 406, Address: 0x1d3ef8, Func Offset: 0x968
	// Line 407, Address: 0x1d3f24, Func Offset: 0x994
	// Line 408, Address: 0x1d3f78, Func Offset: 0x9e8
	// Line 409, Address: 0x1d3fc0, Func Offset: 0xa30
	// Line 411, Address: 0x1d3fd4, Func Offset: 0xa44
	// Line 412, Address: 0x1d4004, Func Offset: 0xa74
	// Line 413, Address: 0x1d402c, Func Offset: 0xa9c
	// Line 414, Address: 0x1d4054, Func Offset: 0xac4
	// Line 415, Address: 0x1d407c, Func Offset: 0xaec
	// Line 416, Address: 0x1d40a4, Func Offset: 0xb14
	// Line 417, Address: 0x1d40d0, Func Offset: 0xb40
	// Line 418, Address: 0x1d40fc, Func Offset: 0xb6c
	// Line 449, Address: 0x1d4128, Func Offset: 0xb98
	// Line 450, Address: 0x1d414c, Func Offset: 0xbbc
	// Line 453, Address: 0x1d4158, Func Offset: 0xbc8
	// Line 456, Address: 0x1d416c, Func Offset: 0xbdc
	// Line 457, Address: 0x1d41bc, Func Offset: 0xc2c
	// Line 460, Address: 0x1d41c8, Func Offset: 0xc38
	// Line 461, Address: 0x1d41f8, Func Offset: 0xc68
	// Line 462, Address: 0x1d4214, Func Offset: 0xc84
	// Line 465, Address: 0x1d4238, Func Offset: 0xca8
	// Line 468, Address: 0x1d4240, Func Offset: 0xcb0
	// Line 471, Address: 0x1d4248, Func Offset: 0xcb8
	// Line 474, Address: 0x1d4250, Func Offset: 0xcc0
	// Line 477, Address: 0x1d4258, Func Offset: 0xcc8
	// Line 480, Address: 0x1d4264, Func Offset: 0xcd4
	// Line 481, Address: 0x1d428c, Func Offset: 0xcfc
	// Line 484, Address: 0x1d42b0, Func Offset: 0xd20
	// Line 487, Address: 0x1d42c0, Func Offset: 0xd30
	// Line 488, Address: 0x1d42f0, Func Offset: 0xd60
	// Line 489, Address: 0x1d430c, Func Offset: 0xd7c
	// Line 490, Address: 0x1d4320, Func Offset: 0xd90
	// Line 491, Address: 0x1d4340, Func Offset: 0xdb0
	// Line 492, Address: 0x1d4358, Func Offset: 0xdc8
	// Line 495, Address: 0x1d4378, Func Offset: 0xde8
	// Line 498, Address: 0x1d439c, Func Offset: 0xe0c
	// Line 499, Address: 0x1d43b4, Func Offset: 0xe24
	// Line 500, Address: 0x1d43dc, Func Offset: 0xe4c
	// Line 501, Address: 0x1d43fc, Func Offset: 0xe6c
	// Line 502, Address: 0x1d4430, Func Offset: 0xea0
	// Line 505, Address: 0x1d445c, Func Offset: 0xecc
	// Line 506, Address: 0x1d44d8, Func Offset: 0xf48
	// Line 509, Address: 0x1d4510, Func Offset: 0xf80
	// Line 511, Address: 0x1d451c, Func Offset: 0xf8c
	// Line 512, Address: 0x1d4580, Func Offset: 0xff0
	// Line 514, Address: 0x1d45d0, Func Offset: 0x1040
	// Line 515, Address: 0x1d4630, Func Offset: 0x10a0
	// Line 516, Address: 0x1d4690, Func Offset: 0x1100
	// Line 517, Address: 0x1d46f0, Func Offset: 0x1160
	// Line 523, Address: 0x1d4758, Func Offset: 0x11c8
	// Line 526, Address: 0x1d476c, Func Offset: 0x11dc
	// Line 529, Address: 0x1d4784, Func Offset: 0x11f4
	// Line 530, Address: 0x1d47cc, Func Offset: 0x123c
	// Line 533, Address: 0x1d47f8, Func Offset: 0x1268
	// Line 540, Address: 0x1d480c, Func Offset: 0x127c
	// Line 542, Address: 0x1d4818, Func Offset: 0x1288
	// Func End, Address: 0x1d4834, Func Offset: 0x12a4
}

// 
// Start address: 0x1d4840
void cur_step()
{
	int i;
	// Line 551, Address: 0x1d4840, Func Offset: 0
	// Line 554, Address: 0x1d484c, Func Offset: 0xc
	// Line 556, Address: 0x1d4880, Func Offset: 0x40
	// Line 557, Address: 0x1d4894, Func Offset: 0x54
	// Line 560, Address: 0x1d489c, Func Offset: 0x5c
	// Line 561, Address: 0x1d48ac, Func Offset: 0x6c
	// Line 562, Address: 0x1d48d4, Func Offset: 0x94
	// Line 563, Address: 0x1d48e0, Func Offset: 0xa0
	// Line 565, Address: 0x1d48f8, Func Offset: 0xb8
	// Line 566, Address: 0x1d4920, Func Offset: 0xe0
	// Line 567, Address: 0x1d4930, Func Offset: 0xf0
	// Line 568, Address: 0x1d493c, Func Offset: 0xfc
	// Line 570, Address: 0x1d4954, Func Offset: 0x114
	// Line 571, Address: 0x1d4970, Func Offset: 0x130
	// Line 572, Address: 0x1d49d0, Func Offset: 0x190
	// Line 573, Address: 0x1d49e0, Func Offset: 0x1a0
	// Line 574, Address: 0x1d49ec, Func Offset: 0x1ac
	// Line 577, Address: 0x1d4a04, Func Offset: 0x1c4
	// Line 578, Address: 0x1d4a14, Func Offset: 0x1d4
	// Line 579, Address: 0x1d4a3c, Func Offset: 0x1fc
	// Line 580, Address: 0x1d4a54, Func Offset: 0x214
	// Line 581, Address: 0x1d4a68, Func Offset: 0x228
	// Line 582, Address: 0x1d4a74, Func Offset: 0x234
	// Line 584, Address: 0x1d4a94, Func Offset: 0x254
	// Line 585, Address: 0x1d4abc, Func Offset: 0x27c
	// Line 586, Address: 0x1d4ad4, Func Offset: 0x294
	// Line 587, Address: 0x1d4ae8, Func Offset: 0x2a8
	// Line 588, Address: 0x1d4af4, Func Offset: 0x2b4
	// Line 592, Address: 0x1d4b1c, Func Offset: 0x2dc
	// Line 593, Address: 0x1d4b7c, Func Offset: 0x33c
	// Line 594, Address: 0x1d4b98, Func Offset: 0x358
	// Line 598, Address: 0x1d4bb0, Func Offset: 0x370
	// Line 601, Address: 0x1d4bb8, Func Offset: 0x378
	// Line 602, Address: 0x1d4bc8, Func Offset: 0x388
	// Line 603, Address: 0x1d4bf0, Func Offset: 0x3b0
	// Line 604, Address: 0x1d4bfc, Func Offset: 0x3bc
	// Line 606, Address: 0x1d4c14, Func Offset: 0x3d4
	// Line 607, Address: 0x1d4c3c, Func Offset: 0x3fc
	// Line 608, Address: 0x1d4c48, Func Offset: 0x408
	// Line 611, Address: 0x1d4c60, Func Offset: 0x420
	// Line 612, Address: 0x1d4c7c, Func Offset: 0x43c
	// Line 613, Address: 0x1d4cb0, Func Offset: 0x470
	// Line 615, Address: 0x1d4cdc, Func Offset: 0x49c
	// Line 616, Address: 0x1d4d2c, Func Offset: 0x4ec
	// Line 619, Address: 0x1d4d34, Func Offset: 0x4f4
	// Line 620, Address: 0x1d4d44, Func Offset: 0x504
	// Line 621, Address: 0x1d4d6c, Func Offset: 0x52c
	// Line 622, Address: 0x1d4d78, Func Offset: 0x538
	// Line 624, Address: 0x1d4d90, Func Offset: 0x550
	// Line 625, Address: 0x1d4db8, Func Offset: 0x578
	// Line 626, Address: 0x1d4dc4, Func Offset: 0x584
	// Line 629, Address: 0x1d4ddc, Func Offset: 0x59c
	// Line 630, Address: 0x1d4df8, Func Offset: 0x5b8
	// Line 631, Address: 0x1d4e08, Func Offset: 0x5c8
	// Line 635, Address: 0x1d4e3c, Func Offset: 0x5fc
	// Line 636, Address: 0x1d4e8c, Func Offset: 0x64c
	// Line 639, Address: 0x1d4e94, Func Offset: 0x654
	// Line 651, Address: 0x1d4ea4, Func Offset: 0x664
	// Line 652, Address: 0x1d4ecc, Func Offset: 0x68c
	// Line 653, Address: 0x1d4ed8, Func Offset: 0x698
	// Line 655, Address: 0x1d4ef0, Func Offset: 0x6b0
	// Line 656, Address: 0x1d4f0c, Func Offset: 0x6cc
	// Line 657, Address: 0x1d4f14, Func Offset: 0x6d4
	// Line 658, Address: 0x1d4f20, Func Offset: 0x6e0
	// Line 659, Address: 0x1d4f54, Func Offset: 0x714
	// Line 662, Address: 0x1d4f80, Func Offset: 0x740
	// Line 663, Address: 0x1d4fd0, Func Offset: 0x790
	// Line 666, Address: 0x1d4fd8, Func Offset: 0x798
	// Line 667, Address: 0x1d4fe8, Func Offset: 0x7a8
	// Line 668, Address: 0x1d5010, Func Offset: 0x7d0
	// Line 669, Address: 0x1d501c, Func Offset: 0x7dc
	// Line 671, Address: 0x1d5034, Func Offset: 0x7f4
	// Line 672, Address: 0x1d5050, Func Offset: 0x810
	// Line 673, Address: 0x1d505c, Func Offset: 0x81c
	// Line 676, Address: 0x1d5074, Func Offset: 0x834
	// Line 677, Address: 0x1d50c4, Func Offset: 0x884
	// Line 680, Address: 0x1d50cc, Func Offset: 0x88c
	// Line 681, Address: 0x1d50e0, Func Offset: 0x8a0
	// Line 682, Address: 0x1d50ec, Func Offset: 0x8ac
	// Line 683, Address: 0x1d50fc, Func Offset: 0x8bc
	// Line 684, Address: 0x1d5118, Func Offset: 0x8d8
	// Line 685, Address: 0x1d5120, Func Offset: 0x8e0
	// Line 686, Address: 0x1d512c, Func Offset: 0x8ec
	// Line 689, Address: 0x1d5144, Func Offset: 0x904
	// Line 692, Address: 0x1d514c, Func Offset: 0x90c
	// Line 693, Address: 0x1d5164, Func Offset: 0x924
	// Line 694, Address: 0x1d5170, Func Offset: 0x930
	// Line 695, Address: 0x1d5180, Func Offset: 0x940
	// Line 696, Address: 0x1d519c, Func Offset: 0x95c
	// Line 697, Address: 0x1d51a4, Func Offset: 0x964
	// Line 698, Address: 0x1d51b0, Func Offset: 0x970
	// Line 701, Address: 0x1d51c8, Func Offset: 0x988
	// Line 704, Address: 0x1d51d0, Func Offset: 0x990
	// Line 705, Address: 0x1d51e0, Func Offset: 0x9a0
	// Line 706, Address: 0x1d51ec, Func Offset: 0x9ac
	// Line 708, Address: 0x1d5204, Func Offset: 0x9c4
	// Line 711, Address: 0x1d520c, Func Offset: 0x9cc
	// Line 712, Address: 0x1d521c, Func Offset: 0x9dc
	// Line 714, Address: 0x1d5228, Func Offset: 0x9e8
	// Line 717, Address: 0x1d5230, Func Offset: 0x9f0
	// Line 718, Address: 0x1d525c, Func Offset: 0xa1c
	// Line 725, Address: 0x1d5268, Func Offset: 0xa28
	// Func End, Address: 0x1d527c, Func Offset: 0xa3c
}

// 
// Start address: 0x1d5280
void command_main(int command_step)
{
	// Line 734, Address: 0x1d5280, Func Offset: 0
	// Line 737, Address: 0x1d5294, Func Offset: 0x14
	// Line 740, Address: 0x1d52c0, Func Offset: 0x40
	// Line 741, Address: 0x1d52cc, Func Offset: 0x4c
	// Line 742, Address: 0x1d52d8, Func Offset: 0x58
	// Line 743, Address: 0x1d5308, Func Offset: 0x88
	// Line 744, Address: 0x1d5328, Func Offset: 0xa8
	// Line 745, Address: 0x1d5344, Func Offset: 0xc4
	// Line 746, Address: 0x1d5358, Func Offset: 0xd8
	// Line 747, Address: 0x1d5360, Func Offset: 0xe0
	// Line 748, Address: 0x1d5390, Func Offset: 0x110
	// Line 749, Address: 0x1d539c, Func Offset: 0x11c
	// Line 750, Address: 0x1d53b4, Func Offset: 0x134
	// Line 751, Address: 0x1d53bc, Func Offset: 0x13c
	// Line 752, Address: 0x1d53d8, Func Offset: 0x158
	// Line 753, Address: 0x1d5404, Func Offset: 0x184
	// Line 754, Address: 0x1d5448, Func Offset: 0x1c8
	// Line 755, Address: 0x1d548c, Func Offset: 0x20c
	// Line 757, Address: 0x1d549c, Func Offset: 0x21c
	// Line 758, Address: 0x1d54b8, Func Offset: 0x238
	// Line 759, Address: 0x1d54d4, Func Offset: 0x254
	// Line 761, Address: 0x1d54dc, Func Offset: 0x25c
	// Line 762, Address: 0x1d5504, Func Offset: 0x284
	// Line 763, Address: 0x1d5544, Func Offset: 0x2c4
	// Line 764, Address: 0x1d559c, Func Offset: 0x31c
	// Line 765, Address: 0x1d55b8, Func Offset: 0x338
	// Line 766, Address: 0x1d55d4, Func Offset: 0x354
	// Line 769, Address: 0x1d55ec, Func Offset: 0x36c
	// Line 771, Address: 0x1d55f4, Func Offset: 0x374
	// Line 772, Address: 0x1d561c, Func Offset: 0x39c
	// Line 773, Address: 0x1d5630, Func Offset: 0x3b0
	// Line 774, Address: 0x1d565c, Func Offset: 0x3dc
	// Line 775, Address: 0x1d567c, Func Offset: 0x3fc
	// Line 776, Address: 0x1d5698, Func Offset: 0x418
	// Line 777, Address: 0x1d56ac, Func Offset: 0x42c
	// Line 778, Address: 0x1d56b4, Func Offset: 0x434
	// Line 779, Address: 0x1d56e4, Func Offset: 0x464
	// Line 780, Address: 0x1d56f0, Func Offset: 0x470
	// Line 781, Address: 0x1d570c, Func Offset: 0x48c
	// Line 783, Address: 0x1d5714, Func Offset: 0x494
	// Line 784, Address: 0x1d5724, Func Offset: 0x4a4
	// Line 785, Address: 0x1d5730, Func Offset: 0x4b0
	// Line 788, Address: 0x1d5748, Func Offset: 0x4c8
	// Line 790, Address: 0x1d5750, Func Offset: 0x4d0
	// Line 791, Address: 0x1d577c, Func Offset: 0x4fc
	// Line 792, Address: 0x1d579c, Func Offset: 0x51c
	// Line 793, Address: 0x1d57c0, Func Offset: 0x540
	// Line 794, Address: 0x1d57dc, Func Offset: 0x55c
	// Line 795, Address: 0x1d57f0, Func Offset: 0x570
	// Line 796, Address: 0x1d57f8, Func Offset: 0x578
	// Line 797, Address: 0x1d582c, Func Offset: 0x5ac
	// Line 798, Address: 0x1d5838, Func Offset: 0x5b8
	// Line 799, Address: 0x1d5850, Func Offset: 0x5d0
	// Line 801, Address: 0x1d5858, Func Offset: 0x5d8
	// Line 802, Address: 0x1d5874, Func Offset: 0x5f4
	// Line 804, Address: 0x1d5890, Func Offset: 0x610
	// Line 805, Address: 0x1d5898, Func Offset: 0x618
	// Line 806, Address: 0x1d58a4, Func Offset: 0x624
	// Line 809, Address: 0x1d58c0, Func Offset: 0x640
	// Line 810, Address: 0x1d58e8, Func Offset: 0x668
	// Line 811, Address: 0x1d58fc, Func Offset: 0x67c
	// Line 813, Address: 0x1d5904, Func Offset: 0x684
	// Line 814, Address: 0x1d5928, Func Offset: 0x6a8
	// Line 815, Address: 0x1d5940, Func Offset: 0x6c0
	// Line 816, Address: 0x1d596c, Func Offset: 0x6ec
	// Line 817, Address: 0x1d598c, Func Offset: 0x70c
	// Line 818, Address: 0x1d59b0, Func Offset: 0x730
	// Line 819, Address: 0x1d59cc, Func Offset: 0x74c
	// Line 820, Address: 0x1d59e0, Func Offset: 0x760
	// Line 821, Address: 0x1d59e8, Func Offset: 0x768
	// Line 822, Address: 0x1d5a1c, Func Offset: 0x79c
	// Line 823, Address: 0x1d5a28, Func Offset: 0x7a8
	// Line 824, Address: 0x1d5a40, Func Offset: 0x7c0
	// Line 825, Address: 0x1d5a48, Func Offset: 0x7c8
	// Line 826, Address: 0x1d5a64, Func Offset: 0x7e4
	// Line 827, Address: 0x1d5a80, Func Offset: 0x800
	// Line 829, Address: 0x1d5a9c, Func Offset: 0x81c
	// Line 830, Address: 0x1d5aa4, Func Offset: 0x824
	// Line 831, Address: 0x1d5ab0, Func Offset: 0x830
	// Line 833, Address: 0x1d5ab8, Func Offset: 0x838
	// Line 834, Address: 0x1d5acc, Func Offset: 0x84c
	// Line 836, Address: 0x1d5ad8, Func Offset: 0x858
	// Line 838, Address: 0x1d5af4, Func Offset: 0x874
	// Line 840, Address: 0x1d5afc, Func Offset: 0x87c
	// Line 841, Address: 0x1d5b24, Func Offset: 0x8a4
	// Line 842, Address: 0x1d5b38, Func Offset: 0x8b8
	// Line 843, Address: 0x1d5b64, Func Offset: 0x8e4
	// Line 844, Address: 0x1d5b84, Func Offset: 0x904
	// Line 845, Address: 0x1d5ba0, Func Offset: 0x920
	// Line 846, Address: 0x1d5bb4, Func Offset: 0x934
	// Line 847, Address: 0x1d5bbc, Func Offset: 0x93c
	// Line 848, Address: 0x1d5bf0, Func Offset: 0x970
	// Line 849, Address: 0x1d5bfc, Func Offset: 0x97c
	// Line 850, Address: 0x1d5c1c, Func Offset: 0x99c
	// Line 852, Address: 0x1d5c24, Func Offset: 0x9a4
	// Line 853, Address: 0x1d5c80, Func Offset: 0xa00
	// Line 854, Address: 0x1d5c8c, Func Offset: 0xa0c
	// Line 857, Address: 0x1d5ca4, Func Offset: 0xa24
	// Line 859, Address: 0x1d5cac, Func Offset: 0xa2c
	// Line 861, Address: 0x1d5cc0, Func Offset: 0xa40
	// Line 862, Address: 0x1d5cec, Func Offset: 0xa6c
	// Line 863, Address: 0x1d5d0c, Func Offset: 0xa8c
	// Line 864, Address: 0x1d5d28, Func Offset: 0xaa8
	// Line 865, Address: 0x1d5d3c, Func Offset: 0xabc
	// Line 866, Address: 0x1d5d48, Func Offset: 0xac8
	// Line 867, Address: 0x1d5d78, Func Offset: 0xaf8
	// Line 868, Address: 0x1d5d84, Func Offset: 0xb04
	// Line 869, Address: 0x1d5d9c, Func Offset: 0xb1c
	// Line 871, Address: 0x1d5da4, Func Offset: 0xb24
	// Line 872, Address: 0x1d5dac, Func Offset: 0xb2c
	// Line 873, Address: 0x1d5db8, Func Offset: 0xb38
	// Line 876, Address: 0x1d5dd4, Func Offset: 0xb54
	// Line 877, Address: 0x1d5dfc, Func Offset: 0xb7c
	// Line 878, Address: 0x1d5e10, Func Offset: 0xb90
	// Line 881, Address: 0x1d5e18, Func Offset: 0xb98
	// Line 882, Address: 0x1d5e44, Func Offset: 0xbc4
	// Line 883, Address: 0x1d5e68, Func Offset: 0xbe8
	// Line 884, Address: 0x1d5e70, Func Offset: 0xbf0
	// Line 885, Address: 0x1d5e78, Func Offset: 0xbf8
	// Line 886, Address: 0x1d5e84, Func Offset: 0xc04
	// Line 888, Address: 0x1d5e9c, Func Offset: 0xc1c
	// Line 889, Address: 0x1d5ea8, Func Offset: 0xc28
	// Line 891, Address: 0x1d5eb4, Func Offset: 0xc34
	// Line 893, Address: 0x1d5ebc, Func Offset: 0xc3c
	// Line 894, Address: 0x1d5ed0, Func Offset: 0xc50
	// Line 895, Address: 0x1d5f04, Func Offset: 0xc84
	// Line 896, Address: 0x1d5f24, Func Offset: 0xca4
	// Line 897, Address: 0x1d5f40, Func Offset: 0xcc0
	// Line 898, Address: 0x1d5f54, Func Offset: 0xcd4
	// Line 899, Address: 0x1d5f60, Func Offset: 0xce0
	// Line 900, Address: 0x1d5f98, Func Offset: 0xd18
	// Line 901, Address: 0x1d5fa4, Func Offset: 0xd24
	// Line 902, Address: 0x1d5fc0, Func Offset: 0xd40
	// Line 903, Address: 0x1d5fc8, Func Offset: 0xd48
	// Line 904, Address: 0x1d5fe4, Func Offset: 0xd64
	// Line 905, Address: 0x1d5fec, Func Offset: 0xd6c
	// Line 906, Address: 0x1d5ff8, Func Offset: 0xd78
	// Line 907, Address: 0x1d6010, Func Offset: 0xd90
	// Line 909, Address: 0x1d6018, Func Offset: 0xd98
	// Line 910, Address: 0x1d6020, Func Offset: 0xda0
	// Line 911, Address: 0x1d602c, Func Offset: 0xdac
	// Line 914, Address: 0x1d6048, Func Offset: 0xdc8
	// Line 915, Address: 0x1d6050, Func Offset: 0xdd0
	// Line 916, Address: 0x1d6068, Func Offset: 0xde8
	// Line 917, Address: 0x1d6094, Func Offset: 0xe14
	// Line 918, Address: 0x1d60a4, Func Offset: 0xe24
	// Line 919, Address: 0x1d60b0, Func Offset: 0xe30
	// Line 920, Address: 0x1d60b8, Func Offset: 0xe38
	// Line 921, Address: 0x1d60c4, Func Offset: 0xe44
	// Line 922, Address: 0x1d60dc, Func Offset: 0xe5c
	// Line 924, Address: 0x1d60e4, Func Offset: 0xe64
	// Line 925, Address: 0x1d60ec, Func Offset: 0xe6c
	// Line 926, Address: 0x1d60f4, Func Offset: 0xe74
	// Line 927, Address: 0x1d6100, Func Offset: 0xe80
	// Line 930, Address: 0x1d611c, Func Offset: 0xe9c
	// Line 932, Address: 0x1d6124, Func Offset: 0xea4
	// Line 933, Address: 0x1d6194, Func Offset: 0xf14
	// Line 934, Address: 0x1d619c, Func Offset: 0xf1c
	// Line 935, Address: 0x1d61c4, Func Offset: 0xf44
	// Line 937, Address: 0x1d623c, Func Offset: 0xfbc
	// Line 938, Address: 0x1d6254, Func Offset: 0xfd4
	// Line 939, Address: 0x1d6268, Func Offset: 0xfe8
	// Line 941, Address: 0x1d62d8, Func Offset: 0x1058
	// Line 942, Address: 0x1d6300, Func Offset: 0x1080
	// Line 944, Address: 0x1d6378, Func Offset: 0x10f8
	// Line 945, Address: 0x1d638c, Func Offset: 0x110c
	// Line 946, Address: 0x1d63a0, Func Offset: 0x1120
	// Line 948, Address: 0x1d6414, Func Offset: 0x1194
	// Line 949, Address: 0x1d6444, Func Offset: 0x11c4
	// Line 950, Address: 0x1d644c, Func Offset: 0x11cc
	// Line 951, Address: 0x1d6458, Func Offset: 0x11d8
	// Line 953, Address: 0x1d6470, Func Offset: 0x11f0
	// Line 955, Address: 0x1d6478, Func Offset: 0x11f8
	// Line 956, Address: 0x1d648c, Func Offset: 0x120c
	// Line 957, Address: 0x1d64d0, Func Offset: 0x1250
	// Line 958, Address: 0x1d6504, Func Offset: 0x1284
	// Line 959, Address: 0x1d651c, Func Offset: 0x129c
	// Line 962, Address: 0x1d6524, Func Offset: 0x12a4
	// Line 963, Address: 0x1d6548, Func Offset: 0x12c8
	// Line 964, Address: 0x1d6560, Func Offset: 0x12e0
	// Line 965, Address: 0x1d659c, Func Offset: 0x131c
	// Line 966, Address: 0x1d65bc, Func Offset: 0x133c
	// Line 967, Address: 0x1d65d8, Func Offset: 0x1358
	// Line 968, Address: 0x1d65ec, Func Offset: 0x136c
	// Line 969, Address: 0x1d65f4, Func Offset: 0x1374
	// Line 970, Address: 0x1d6628, Func Offset: 0x13a8
	// Line 971, Address: 0x1d6634, Func Offset: 0x13b4
	// Line 972, Address: 0x1d6658, Func Offset: 0x13d8
	// Line 973, Address: 0x1d6660, Func Offset: 0x13e0
	// Line 974, Address: 0x1d667c, Func Offset: 0x13fc
	// Line 975, Address: 0x1d66a8, Func Offset: 0x1428
	// Line 976, Address: 0x1d66c0, Func Offset: 0x1440
	// Line 977, Address: 0x1d66d8, Func Offset: 0x1458
	// Line 979, Address: 0x1d66e0, Func Offset: 0x1460
	// Line 980, Address: 0x1d66ec, Func Offset: 0x146c
	// Line 982, Address: 0x1d6704, Func Offset: 0x1484
	// Line 984, Address: 0x1d6720, Func Offset: 0x14a0
	// Line 986, Address: 0x1d6728, Func Offset: 0x14a8
	// Line 987, Address: 0x1d674c, Func Offset: 0x14cc
	// Line 988, Address: 0x1d6764, Func Offset: 0x14e4
	// Line 989, Address: 0x1d67a0, Func Offset: 0x1520
	// Line 990, Address: 0x1d67c0, Func Offset: 0x1540
	// Line 991, Address: 0x1d67dc, Func Offset: 0x155c
	// Line 992, Address: 0x1d67f0, Func Offset: 0x1570
	// Line 993, Address: 0x1d67f8, Func Offset: 0x1578
	// Line 994, Address: 0x1d682c, Func Offset: 0x15ac
	// Line 995, Address: 0x1d6838, Func Offset: 0x15b8
	// Line 996, Address: 0x1d6850, Func Offset: 0x15d0
	// Line 997, Address: 0x1d6858, Func Offset: 0x15d8
	// Line 998, Address: 0x1d6874, Func Offset: 0x15f4
	// Line 999, Address: 0x1d68a0, Func Offset: 0x1620
	// Line 1000, Address: 0x1d68b8, Func Offset: 0x1638
	// Line 1001, Address: 0x1d68d8, Func Offset: 0x1658
	// Line 1003, Address: 0x1d68e0, Func Offset: 0x1660
	// Line 1004, Address: 0x1d68ec, Func Offset: 0x166c
	// Line 1005, Address: 0x1d68f8, Func Offset: 0x1678
	// Line 1014, Address: 0x1d6918, Func Offset: 0x1698
	// Line 1015, Address: 0x1d6948, Func Offset: 0x16c8
	// Line 1016, Address: 0x1d6964, Func Offset: 0x16e4
	// Line 1017, Address: 0x1d6978, Func Offset: 0x16f8
	// Line 1019, Address: 0x1d6994, Func Offset: 0x1714
	// Line 1020, Address: 0x1d69c0, Func Offset: 0x1740
	// Line 1021, Address: 0x1d69d0, Func Offset: 0x1750
	// Line 1022, Address: 0x1d69e4, Func Offset: 0x1764
	// Line 1026, Address: 0x1d69fc, Func Offset: 0x177c
	// Func End, Address: 0x1d6a14, Func Offset: 0x1794
}

// 
// Start address: 0x1d6a20
void weapon_command_main(int command_step)
{
	// Line 1035, Address: 0x1d6a20, Func Offset: 0
	// Line 1037, Address: 0x1d6a30, Func Offset: 0x10
	// Line 1040, Address: 0x1d6a54, Func Offset: 0x34
	// Line 1041, Address: 0x1d6a80, Func Offset: 0x60
	// Line 1042, Address: 0x1d6aa0, Func Offset: 0x80
	// Line 1043, Address: 0x1d6abc, Func Offset: 0x9c
	// Line 1044, Address: 0x1d6ad0, Func Offset: 0xb0
	// Line 1045, Address: 0x1d6ad8, Func Offset: 0xb8
	// Line 1046, Address: 0x1d6b0c, Func Offset: 0xec
	// Line 1047, Address: 0x1d6b14, Func Offset: 0xf4
	// Line 1048, Address: 0x1d6b20, Func Offset: 0x100
	// Line 1049, Address: 0x1d6b38, Func Offset: 0x118
	// Line 1051, Address: 0x1d6b40, Func Offset: 0x120
	// Line 1052, Address: 0x1d6b48, Func Offset: 0x128
	// Line 1053, Address: 0x1d6b54, Func Offset: 0x134
	// Line 1056, Address: 0x1d6b6c, Func Offset: 0x14c
	// Line 1057, Address: 0x1d6b94, Func Offset: 0x174
	// Line 1058, Address: 0x1d6ba8, Func Offset: 0x188
	// Line 1060, Address: 0x1d6bb0, Func Offset: 0x190
	// Line 1061, Address: 0x1d6bd4, Func Offset: 0x1b4
	// Line 1062, Address: 0x1d6bec, Func Offset: 0x1cc
	// Line 1063, Address: 0x1d6c18, Func Offset: 0x1f8
	// Line 1064, Address: 0x1d6c38, Func Offset: 0x218
	// Line 1065, Address: 0x1d6c54, Func Offset: 0x234
	// Line 1066, Address: 0x1d6c68, Func Offset: 0x248
	// Line 1067, Address: 0x1d6c70, Func Offset: 0x250
	// Line 1068, Address: 0x1d6ca4, Func Offset: 0x284
	// Line 1069, Address: 0x1d6cac, Func Offset: 0x28c
	// Line 1070, Address: 0x1d6cb8, Func Offset: 0x298
	// Line 1071, Address: 0x1d6cd0, Func Offset: 0x2b0
	// Line 1072, Address: 0x1d6cd8, Func Offset: 0x2b8
	// Line 1073, Address: 0x1d6cf4, Func Offset: 0x2d4
	// Line 1074, Address: 0x1d6cfc, Func Offset: 0x2dc
	// Line 1075, Address: 0x1d6d08, Func Offset: 0x2e8
	// Line 1076, Address: 0x1d6d20, Func Offset: 0x300
	// Line 1078, Address: 0x1d6d28, Func Offset: 0x308
	// Line 1079, Address: 0x1d6d40, Func Offset: 0x320
	// Line 1080, Address: 0x1d6d4c, Func Offset: 0x32c
	// Line 1087, Address: 0x1d6d64, Func Offset: 0x344
	// Line 1088, Address: 0x1d6d90, Func Offset: 0x370
	// Line 1089, Address: 0x1d6dac, Func Offset: 0x38c
	// Line 1090, Address: 0x1d6dc0, Func Offset: 0x3a0
	// Line 1092, Address: 0x1d6dd8, Func Offset: 0x3b8
	// Line 1093, Address: 0x1d6e04, Func Offset: 0x3e4
	// Line 1094, Address: 0x1d6e14, Func Offset: 0x3f4
	// Line 1095, Address: 0x1d6e28, Func Offset: 0x408
	// Line 1097, Address: 0x1d6e40, Func Offset: 0x420
	// Func End, Address: 0x1d6e54, Func Offset: 0x434
}

// 
// Start address: 0x1d6e60
void item_main_setup()
{
	float CHU[4];
	float CAM[4];
	int j;
	int i;
	// Line 1106, Address: 0x1d6e60, Func Offset: 0
	// Line 1111, Address: 0x1d6e70, Func Offset: 0x10
	// Line 1112, Address: 0x1d6e78, Func Offset: 0x18
	// Line 1113, Address: 0x1d6e80, Func Offset: 0x20
	// Line 1114, Address: 0x1d6e88, Func Offset: 0x28
	// Line 1115, Address: 0x1d6e90, Func Offset: 0x30
	// Line 1116, Address: 0x1d6e98, Func Offset: 0x38
	// Line 1117, Address: 0x1d6ea4, Func Offset: 0x44
	// Line 1118, Address: 0x1d6eb8, Func Offset: 0x58
	// Line 1119, Address: 0x1d6ec0, Func Offset: 0x60
	// Line 1120, Address: 0x1d6ec8, Func Offset: 0x68
	// Line 1121, Address: 0x1d6ed0, Func Offset: 0x70
	// Line 1122, Address: 0x1d6ed8, Func Offset: 0x78
	// Line 1123, Address: 0x1d6ee0, Func Offset: 0x80
	// Line 1124, Address: 0x1d6eec, Func Offset: 0x8c
	// Line 1125, Address: 0x1d6ef4, Func Offset: 0x94
	// Line 1126, Address: 0x1d6f04, Func Offset: 0xa4
	// Line 1127, Address: 0x1d6f10, Func Offset: 0xb0
	// Line 1128, Address: 0x1d6f1c, Func Offset: 0xbc
	// Line 1129, Address: 0x1d6f24, Func Offset: 0xc4
	// Line 1130, Address: 0x1d6f30, Func Offset: 0xd0
	// Line 1131, Address: 0x1d6f3c, Func Offset: 0xdc
	// Line 1132, Address: 0x1d6f44, Func Offset: 0xe4
	// Line 1133, Address: 0x1d6f58, Func Offset: 0xf8
	// Line 1135, Address: 0x1d6f70, Func Offset: 0x110
	// Line 1136, Address: 0x1d6f7c, Func Offset: 0x11c
	// Line 1137, Address: 0x1d6f98, Func Offset: 0x138
	// Line 1138, Address: 0x1d6fb4, Func Offset: 0x154
	// Line 1139, Address: 0x1d6fd0, Func Offset: 0x170
	// Line 1140, Address: 0x1d6ff0, Func Offset: 0x190
	// Line 1141, Address: 0x1d7010, Func Offset: 0x1b0
	// Line 1144, Address: 0x1d7024, Func Offset: 0x1c4
	// Line 1145, Address: 0x1d702c, Func Offset: 0x1cc
	// Line 1146, Address: 0x1d7030, Func Offset: 0x1d0
	// Line 1147, Address: 0x1d7038, Func Offset: 0x1d8
	// Line 1148, Address: 0x1d7044, Func Offset: 0x1e4
	// Line 1150, Address: 0x1d7070, Func Offset: 0x210
	// Line 1151, Address: 0x1d7094, Func Offset: 0x234
	// Line 1152, Address: 0x1d70a8, Func Offset: 0x248
	// Line 1153, Address: 0x1d70bc, Func Offset: 0x25c
	// Line 1154, Address: 0x1d70dc, Func Offset: 0x27c
	// Line 1157, Address: 0x1d70f0, Func Offset: 0x290
	// Line 1159, Address: 0x1d70fc, Func Offset: 0x29c
	// Line 1160, Address: 0x1d710c, Func Offset: 0x2ac
	// Line 1161, Address: 0x1d713c, Func Offset: 0x2dc
	// Line 1162, Address: 0x1d7148, Func Offset: 0x2e8
	// Line 1163, Address: 0x1d7174, Func Offset: 0x314
	// Line 1165, Address: 0x1d717c, Func Offset: 0x31c
	// Line 1166, Address: 0x1d7198, Func Offset: 0x338
	// Line 1169, Address: 0x1d71a0, Func Offset: 0x340
	// Line 1170, Address: 0x1d71d4, Func Offset: 0x374
	// Line 1177, Address: 0x1d7200, Func Offset: 0x3a0
	// Line 1178, Address: 0x1d7210, Func Offset: 0x3b0
	// Line 1180, Address: 0x1d7220, Func Offset: 0x3c0
	// Line 1199, Address: 0x1d7234, Func Offset: 0x3d4
	// Func End, Address: 0x1d724c, Func Offset: 0x3ec
}

// 
// Start address: 0x1d7250
void set_position(int step)
{
	// Line 1207, Address: 0x1d7250, Func Offset: 0
	// Line 1209, Address: 0x1d725c, Func Offset: 0xc
	// Line 1211, Address: 0x1d7288, Func Offset: 0x38
	// Line 1212, Address: 0x1d72b8, Func Offset: 0x68
	// Line 1213, Address: 0x1d72e8, Func Offset: 0x98
	// Line 1214, Address: 0x1d7318, Func Offset: 0xc8
	// Line 1215, Address: 0x1d7348, Func Offset: 0xf8
	// Line 1218, Address: 0x1d7350, Func Offset: 0x100
	// Line 1219, Address: 0x1d73d0, Func Offset: 0x180
	// Line 1220, Address: 0x1d7454, Func Offset: 0x204
	// Line 1221, Address: 0x1d74d4, Func Offset: 0x284
	// Line 1222, Address: 0x1d755c, Func Offset: 0x30c
	// Line 1225, Address: 0x1d7564, Func Offset: 0x314
	// Line 1226, Address: 0x1d75e0, Func Offset: 0x390
	// Line 1227, Address: 0x1d7668, Func Offset: 0x418
	// Line 1228, Address: 0x1d76e4, Func Offset: 0x494
	// Line 1229, Address: 0x1d7764, Func Offset: 0x514
	// Line 1232, Address: 0x1d776c, Func Offset: 0x51c
	// Line 1233, Address: 0x1d77f0, Func Offset: 0x5a0
	// Line 1234, Address: 0x1d786c, Func Offset: 0x61c
	// Line 1235, Address: 0x1d78e8, Func Offset: 0x698
	// Line 1236, Address: 0x1d7964, Func Offset: 0x714
	// Line 1239, Address: 0x1d796c, Func Offset: 0x71c
	// Line 1240, Address: 0x1d79e8, Func Offset: 0x798
	// Line 1241, Address: 0x1d7a60, Func Offset: 0x810
	// Line 1242, Address: 0x1d7ad8, Func Offset: 0x888
	// Line 1243, Address: 0x1d7b50, Func Offset: 0x900
	// Line 1247, Address: 0x1d7b58, Func Offset: 0x908
	// Line 1248, Address: 0x1d7bd0, Func Offset: 0x980
	// Line 1249, Address: 0x1d7c48, Func Offset: 0x9f8
	// Line 1250, Address: 0x1d7cc0, Func Offset: 0xa70
	// Line 1251, Address: 0x1d7d40, Func Offset: 0xaf0
	// Line 1255, Address: 0x1d7d48, Func Offset: 0xaf8
	// Line 1256, Address: 0x1d7dd4, Func Offset: 0xb84
	// Line 1257, Address: 0x1d7e54, Func Offset: 0xc04
	// Line 1258, Address: 0x1d7ee0, Func Offset: 0xc90
	// Line 1259, Address: 0x1d7f60, Func Offset: 0xd10
	// Line 1262, Address: 0x1d7f68, Func Offset: 0xd18
	// Line 1263, Address: 0x1d7ff4, Func Offset: 0xda4
	// Line 1264, Address: 0x1d8078, Func Offset: 0xe28
	// Line 1265, Address: 0x1d8108, Func Offset: 0xeb8
	// Line 1266, Address: 0x1d819c, Func Offset: 0xf4c
	// Line 1269, Address: 0x1d81a4, Func Offset: 0xf54
	// Line 1270, Address: 0x1d8228, Func Offset: 0xfd8
	// Line 1271, Address: 0x1d82ac, Func Offset: 0x105c
	// Line 1272, Address: 0x1d832c, Func Offset: 0x10dc
	// Line 1276, Address: 0x1d83ac, Func Offset: 0x115c
	// Func End, Address: 0x1d83bc, Func Offset: 0x116c
}

// 
// Start address: 0x1d83c0
void item_turn()
{
	int j;
	int i;
	// Line 1285, Address: 0x1d83c0, Func Offset: 0
	// Line 1288, Address: 0x1d83cc, Func Offset: 0xc
	// Line 1289, Address: 0x1d83d8, Func Offset: 0x18
	// Line 1291, Address: 0x1d840c, Func Offset: 0x4c
	// Line 1293, Address: 0x1d8420, Func Offset: 0x60
	// Line 1294, Address: 0x1d8434, Func Offset: 0x74
	// Line 1296, Address: 0x1d8458, Func Offset: 0x98
	// Line 1297, Address: 0x1d8480, Func Offset: 0xc0
	// Line 1298, Address: 0x1d84a0, Func Offset: 0xe0
	// Func End, Address: 0x1d84b4, Func Offset: 0xf4
}

// 
// Start address: 0x1d84c0
void item_position(float* f0, float* f1, int count, float* r0)
{
	// Line 1306, Address: 0x1d84c0, Func Offset: 0
	// Line 1307, Address: 0x1d84d8, Func Offset: 0x18
	// Line 1308, Address: 0x1d8554, Func Offset: 0x94
	// Line 1310, Address: 0x1d8570, Func Offset: 0xb0
	// Line 1312, Address: 0x1d85f8, Func Offset: 0x138
	// Line 1313, Address: 0x1d8694, Func Offset: 0x1d4
	// Line 1315, Address: 0x1d8738, Func Offset: 0x278
	// Line 1316, Address: 0x1d8778, Func Offset: 0x2b8
	// Func End, Address: 0x1d8788, Func Offset: 0x2c8
}

// 
// Start address: 0x1d8790
int move_near(float f0, float f1, float f2, float f3)
{
	// Line 1331, Address: 0x1d8790, Func Offset: 0
	// Line 1332, Address: 0x1d87a8, Func Offset: 0x18
	// Line 1333, Address: 0x1d87c0, Func Offset: 0x30
	// Line 1334, Address: 0x1d87e0, Func Offset: 0x50
	// Line 1335, Address: 0x1d87f0, Func Offset: 0x60
	// Line 1336, Address: 0x1d8810, Func Offset: 0x80
	// Line 1338, Address: 0x1d8818, Func Offset: 0x88
	// Line 1339, Address: 0x1d8838, Func Offset: 0xa8
	// Line 1340, Address: 0x1d8848, Func Offset: 0xb8
	// Line 1342, Address: 0x1d8868, Func Offset: 0xd8
	// Line 1343, Address: 0x1d8874, Func Offset: 0xe4
	// Func End, Address: 0x1d8884, Func Offset: 0xf4
}

// 
// Start address: 0x1d8890
void item_set()
{
	// Line 1381, Address: 0x1d8890, Func Offset: 0
	// Func End, Address: 0x1d8898, Func Offset: 0x8
}

// 
// Start address: 0x1d88a0
int command_kind(int kind)
{
	// Line 1400, Address: 0x1d88a0, Func Offset: 0
	// Line 1401, Address: 0x1d88a8, Func Offset: 0x8
	// Line 1442, Address: 0x1d88d4, Func Offset: 0x34
	// Line 1446, Address: 0x1d88e0, Func Offset: 0x40
	// Line 1452, Address: 0x1d88ec, Func Offset: 0x4c
	// Line 1456, Address: 0x1d88f8, Func Offset: 0x58
	// Line 1460, Address: 0x1d8904, Func Offset: 0x64
	// Line 1462, Address: 0x1d8910, Func Offset: 0x70
	// Line 1464, Address: 0x1d891c, Func Offset: 0x7c
	// Line 1478, Address: 0x1d8928, Func Offset: 0x88
	// Line 1485, Address: 0x1d8934, Func Offset: 0x94
	// Line 1487, Address: 0x1d8940, Func Offset: 0xa0
	// Line 1488, Address: 0x1d8944, Func Offset: 0xa4
	// Func End, Address: 0x1d8950, Func Offset: 0xb0
}

// 
// Start address: 0x1d8950
void del_check()
{
	int i;
	// Line 1534, Address: 0x1d8950, Func Offset: 0
	// Line 1536, Address: 0x1d8960, Func Offset: 0x10
	// Line 1538, Address: 0x1d896c, Func Offset: 0x1c
	// Line 1546, Address: 0x1d89d8, Func Offset: 0x88
	// Line 1547, Address: 0x1d8a14, Func Offset: 0xc4
	// Line 1550, Address: 0x1d8a58, Func Offset: 0x108
	// Line 1551, Address: 0x1d8a74, Func Offset: 0x124
	// Func End, Address: 0x1d8a8c, Func Offset: 0x13c
}

// 
// Start address: 0x1d8a90
int kind_no(int kind)
{
	int i;
	// Line 1559, Address: 0x1d8a90, Func Offset: 0
	// Line 1561, Address: 0x1d8a9c, Func Offset: 0xc
	// Line 1562, Address: 0x1d8aa8, Func Offset: 0x18
	// Line 1563, Address: 0x1d8ad0, Func Offset: 0x40
	// Line 1565, Address: 0x1d8af4, Func Offset: 0x64
	// Line 1566, Address: 0x1d8af8, Func Offset: 0x68
	// Func End, Address: 0x1d8b08, Func Offset: 0x78
}

// 
// Start address: 0x1d8b10
void event_item_use(int kind)
{
	// Line 1587, Address: 0x1d8b10, Func Offset: 0
	// Line 1588, Address: 0x1d8b1c, Func Offset: 0xc
	// Line 1590, Address: 0x1d8b3c, Func Offset: 0x2c
	// Line 1591, Address: 0x1d8b5c, Func Offset: 0x4c
	// Line 1592, Address: 0x1d8b68, Func Offset: 0x58
	// Line 1593, Address: 0x1d8b70, Func Offset: 0x60
	// Line 1594, Address: 0x1d8b7c, Func Offset: 0x6c
	// Func End, Address: 0x1d8b8c, Func Offset: 0x7c
}

// 
// Start address: 0x1d8b90
void combine_item_use(int kind)
{
	// Line 1600, Address: 0x1d8b90, Func Offset: 0
	// Line 1601, Address: 0x1d8b9c, Func Offset: 0xc
	// Line 1604, Address: 0x1d8bec, Func Offset: 0x5c
	// Line 1605, Address: 0x1d8c24, Func Offset: 0x94
	// Line 1606, Address: 0x1d8c30, Func Offset: 0xa0
	// Line 1607, Address: 0x1d8c38, Func Offset: 0xa8
	// Line 1609, Address: 0x1d8c60, Func Offset: 0xd0
	// Line 1610, Address: 0x1d8c6c, Func Offset: 0xdc
	// Line 1613, Address: 0x1d8c74, Func Offset: 0xe4
	// Line 1615, Address: 0x1d8c80, Func Offset: 0xf0
	// Line 1616, Address: 0x1d8ca4, Func Offset: 0x114
	// Line 1617, Address: 0x1d8cb0, Func Offset: 0x120
	// Func End, Address: 0x1d8cc0, Func Offset: 0x130
}

// 
// Start address: 0x1d8cc0
void font_print()
{
	int i;
	// Line 1627, Address: 0x1d8cc0, Func Offset: 0
	// Line 1634, Address: 0x1d8ccc, Func Offset: 0xc
	// Line 1636, Address: 0x1d8cd4, Func Offset: 0x14
	// Line 1638, Address: 0x1d8cd8, Func Offset: 0x18
	// Line 1640, Address: 0x1d8d78, Func Offset: 0xb8
	// Line 1641, Address: 0x1d8dcc, Func Offset: 0x10c
	// Line 1642, Address: 0x1d8ddc, Func Offset: 0x11c
	// Line 1643, Address: 0x1d8e10, Func Offset: 0x150
	// Line 1644, Address: 0x1d8e18, Func Offset: 0x158
	// Line 1645, Address: 0x1d8e30, Func Offset: 0x170
	// Line 1646, Address: 0x1d8e58, Func Offset: 0x198
	// Line 1647, Address: 0x1d8e74, Func Offset: 0x1b4
	// Line 1648, Address: 0x1d8e80, Func Offset: 0x1c0
	// Line 1649, Address: 0x1d8e8c, Func Offset: 0x1cc
	// Line 1650, Address: 0x1d8e94, Func Offset: 0x1d4
	// Line 1652, Address: 0x1d8eac, Func Offset: 0x1ec
	// Line 1653, Address: 0x1d8eb4, Func Offset: 0x1f4
	// Line 1654, Address: 0x1d8ecc, Func Offset: 0x20c
	// Line 1655, Address: 0x1d8ef4, Func Offset: 0x234
	// Line 1656, Address: 0x1d8f14, Func Offset: 0x254
	// Line 1657, Address: 0x1d8f20, Func Offset: 0x260
	// Line 1658, Address: 0x1d8f2c, Func Offset: 0x26c
	// Line 1659, Address: 0x1d8f34, Func Offset: 0x274
	// Line 1661, Address: 0x1d8f4c, Func Offset: 0x28c
	// Line 1662, Address: 0x1d8f54, Func Offset: 0x294
	// Line 1663, Address: 0x1d8f6c, Func Offset: 0x2ac
	// Line 1664, Address: 0x1d8f94, Func Offset: 0x2d4
	// Line 1665, Address: 0x1d8fb4, Func Offset: 0x2f4
	// Line 1666, Address: 0x1d8fc0, Func Offset: 0x300
	// Line 1667, Address: 0x1d8fcc, Func Offset: 0x30c
	// Line 1668, Address: 0x1d8fd4, Func Offset: 0x314
	// Line 1670, Address: 0x1d8fec, Func Offset: 0x32c
	// Line 1671, Address: 0x1d8ff4, Func Offset: 0x334
	// Line 1672, Address: 0x1d900c, Func Offset: 0x34c
	// Line 1673, Address: 0x1d9020, Func Offset: 0x360
	// Line 1674, Address: 0x1d902c, Func Offset: 0x36c
	// Line 1675, Address: 0x1d9034, Func Offset: 0x374
	// Line 1676, Address: 0x1d904c, Func Offset: 0x38c
	// Line 1677, Address: 0x1d907c, Func Offset: 0x3bc
	// Line 1678, Address: 0x1d90ac, Func Offset: 0x3ec
	// Line 1679, Address: 0x1d90dc, Func Offset: 0x41c
	// Line 1680, Address: 0x1d910c, Func Offset: 0x44c
	// Line 1681, Address: 0x1d913c, Func Offset: 0x47c
	// Line 1682, Address: 0x1d916c, Func Offset: 0x4ac
	// Line 1683, Address: 0x1d919c, Func Offset: 0x4dc
	// Line 1684, Address: 0x1d91cc, Func Offset: 0x50c
	// Line 1685, Address: 0x1d91fc, Func Offset: 0x53c
	// Line 1686, Address: 0x1d922c, Func Offset: 0x56c
	// Line 1687, Address: 0x1d925c, Func Offset: 0x59c
	// Line 1688, Address: 0x1d92e0, Func Offset: 0x620
	// Line 1689, Address: 0x1d9360, Func Offset: 0x6a0
	// Line 1690, Address: 0x1d93dc, Func Offset: 0x71c
	// Line 1691, Address: 0x1d93f0, Func Offset: 0x730
	// Line 1692, Address: 0x1d93f8, Func Offset: 0x738
	// Line 1693, Address: 0x1d9410, Func Offset: 0x750
	// Line 1694, Address: 0x1d9454, Func Offset: 0x794
	// Line 1695, Address: 0x1d9498, Func Offset: 0x7d8
	// Line 1696, Address: 0x1d94d0, Func Offset: 0x810
	// Line 1697, Address: 0x1d9514, Func Offset: 0x854
	// Line 1698, Address: 0x1d9550, Func Offset: 0x890
	// Line 1699, Address: 0x1d9588, Func Offset: 0x8c8
	// Line 1700, Address: 0x1d95c8, Func Offset: 0x908
	// Line 1701, Address: 0x1d960c, Func Offset: 0x94c
	// Line 1702, Address: 0x1d9644, Func Offset: 0x984
	// Line 1703, Address: 0x1d9680, Func Offset: 0x9c0
	// Line 1704, Address: 0x1d96c8, Func Offset: 0xa08
	// Line 1705, Address: 0x1d9704, Func Offset: 0xa44
	// Line 1706, Address: 0x1d9744, Func Offset: 0xa84
	// Line 1708, Address: 0x1d9780, Func Offset: 0xac0
	// Line 1709, Address: 0x1d978c, Func Offset: 0xacc
	// Line 1711, Address: 0x1d9794, Func Offset: 0xad4
	// Line 1712, Address: 0x1d97c4, Func Offset: 0xb04
	// Line 1713, Address: 0x1d97d0, Func Offset: 0xb10
	// Line 1714, Address: 0x1d97d8, Func Offset: 0xb18
	// Line 1716, Address: 0x1d97e4, Func Offset: 0xb24
	// Line 1717, Address: 0x1d97ec, Func Offset: 0xb2c
	// Line 1718, Address: 0x1d9804, Func Offset: 0xb44
	// Line 1719, Address: 0x1d9824, Func Offset: 0xb64
	// Line 1721, Address: 0x1d984c, Func Offset: 0xb8c
	// Line 1722, Address: 0x1d9888, Func Offset: 0xbc8
	// Line 1723, Address: 0x1d98b8, Func Offset: 0xbf8
	// Line 1724, Address: 0x1d98f0, Func Offset: 0xc30
	// Line 1725, Address: 0x1d992c, Func Offset: 0xc6c
	// Line 1726, Address: 0x1d9960, Func Offset: 0xca0
	// Line 1727, Address: 0x1d9998, Func Offset: 0xcd8
	// Line 1728, Address: 0x1d99cc, Func Offset: 0xd0c
	// Line 1729, Address: 0x1d9a04, Func Offset: 0xd44
	// Line 1730, Address: 0x1d9a38, Func Offset: 0xd78
	// Line 1731, Address: 0x1d9a74, Func Offset: 0xdb4
	// Line 1732, Address: 0x1d9ab0, Func Offset: 0xdf0
	// Line 1733, Address: 0x1d9aec, Func Offset: 0xe2c
	// Line 1734, Address: 0x1d9b24, Func Offset: 0xe64
	// Line 1735, Address: 0x1d9b5c, Func Offset: 0xe9c
	// Line 1736, Address: 0x1d9b94, Func Offset: 0xed4
	// Line 1737, Address: 0x1d9bd0, Func Offset: 0xf10
	// Line 1738, Address: 0x1d9c08, Func Offset: 0xf48
	// Line 1739, Address: 0x1d9c40, Func Offset: 0xf80
	// Line 1740, Address: 0x1d9c78, Func Offset: 0xfb8
	// Line 1741, Address: 0x1d9cb0, Func Offset: 0xff0
	// Line 1742, Address: 0x1d9cec, Func Offset: 0x102c
	// Line 1743, Address: 0x1d9d1c, Func Offset: 0x105c
	// Line 1744, Address: 0x1d9d50, Func Offset: 0x1090
	// Line 1745, Address: 0x1d9d90, Func Offset: 0x10d0
	// Line 1746, Address: 0x1d9dc4, Func Offset: 0x1104
	// Line 1747, Address: 0x1d9dfc, Func Offset: 0x113c
	// Line 1748, Address: 0x1d9e30, Func Offset: 0x1170
	// Line 1749, Address: 0x1d9e6c, Func Offset: 0x11ac
	// Line 1751, Address: 0x1d9ea8, Func Offset: 0x11e8
	// Line 1752, Address: 0x1d9f60, Func Offset: 0x12a0
	// Line 1754, Address: 0x1d9f68, Func Offset: 0x12a8
	// Line 1755, Address: 0x1d9f70, Func Offset: 0x12b0
	// Line 1758, Address: 0x1d9f78, Func Offset: 0x12b8
	// Line 1760, Address: 0x1d9fb8, Func Offset: 0x12f8
	// Line 1761, Address: 0x1d9ffc, Func Offset: 0x133c
	// Line 1765, Address: 0x1da034, Func Offset: 0x1374
	// Line 1771, Address: 0x1da03c, Func Offset: 0x137c
	// Line 1772, Address: 0x1da050, Func Offset: 0x1390
	// Line 1773, Address: 0x1da07c, Func Offset: 0x13bc
	// Line 1774, Address: 0x1da0a4, Func Offset: 0x13e4
	// Line 1775, Address: 0x1da0b4, Func Offset: 0x13f4
	// Line 1785, Address: 0x1da0e4, Func Offset: 0x1424
	// Line 1786, Address: 0x1da104, Func Offset: 0x1444
	// Line 1787, Address: 0x1da124, Func Offset: 0x1464
	// Line 1792, Address: 0x1da144, Func Offset: 0x1484
	// Line 1793, Address: 0x1da174, Func Offset: 0x14b4
	// Line 1794, Address: 0x1da188, Func Offset: 0x14c8
	// Line 1797, Address: 0x1da198, Func Offset: 0x14d8
	// Line 1798, Address: 0x1da1c8, Func Offset: 0x1508
	// Line 1800, Address: 0x1da1e8, Func Offset: 0x1528
	// Line 1802, Address: 0x1da204, Func Offset: 0x1544
	// Line 1803, Address: 0x1da214, Func Offset: 0x1554
	// Line 1805, Address: 0x1da23c, Func Offset: 0x157c
	// Line 1806, Address: 0x1da264, Func Offset: 0x15a4
	// Line 1808, Address: 0x1da290, Func Offset: 0x15d0
	// Line 1809, Address: 0x1da298, Func Offset: 0x15d8
	// Line 1810, Address: 0x1da2c8, Func Offset: 0x1608
	// Line 1811, Address: 0x1da2ec, Func Offset: 0x162c
	// Line 1812, Address: 0x1da2f4, Func Offset: 0x1634
	// Line 1813, Address: 0x1da320, Func Offset: 0x1660
	// Line 1815, Address: 0x1da36c, Func Offset: 0x16ac
	// Line 1817, Address: 0x1da398, Func Offset: 0x16d8
	// Line 1818, Address: 0x1da3b8, Func Offset: 0x16f8
	// Line 1819, Address: 0x1da3c0, Func Offset: 0x1700
	// Line 1820, Address: 0x1da3e8, Func Offset: 0x1728
	// Line 1822, Address: 0x1da434, Func Offset: 0x1774
	// Line 1824, Address: 0x1da468, Func Offset: 0x17a8
	// Line 1825, Address: 0x1da498, Func Offset: 0x17d8
	// Line 1826, Address: 0x1da4c4, Func Offset: 0x1804
	// Line 1827, Address: 0x1da4cc, Func Offset: 0x180c
	// Line 1828, Address: 0x1da4f4, Func Offset: 0x1834
	// Line 1829, Address: 0x1da520, Func Offset: 0x1860
	// Line 1831, Address: 0x1da528, Func Offset: 0x1868
	// Line 1832, Address: 0x1da53c, Func Offset: 0x187c
	// Line 1833, Address: 0x1da564, Func Offset: 0x18a4
	// Line 1834, Address: 0x1da588, Func Offset: 0x18c8
	// Line 1836, Address: 0x1da590, Func Offset: 0x18d0
	// Line 1837, Address: 0x1da5b4, Func Offset: 0x18f4
	// Line 1838, Address: 0x1da5dc, Func Offset: 0x191c
	// Line 1840, Address: 0x1da604, Func Offset: 0x1944
	// Line 1842, Address: 0x1da60c, Func Offset: 0x194c
	// Line 1843, Address: 0x1da620, Func Offset: 0x1960
	// Line 1844, Address: 0x1da648, Func Offset: 0x1988
	// Line 1845, Address: 0x1da674, Func Offset: 0x19b4
	// Line 1846, Address: 0x1da6a0, Func Offset: 0x19e0
	// Line 1847, Address: 0x1da6a8, Func Offset: 0x19e8
	// Line 1848, Address: 0x1da6c0, Func Offset: 0x1a00
	// Line 1849, Address: 0x1da6e0, Func Offset: 0x1a20
	// Line 1850, Address: 0x1da710, Func Offset: 0x1a50
	// Line 1851, Address: 0x1da734, Func Offset: 0x1a74
	// Line 1853, Address: 0x1da73c, Func Offset: 0x1a7c
	// Line 1854, Address: 0x1da76c, Func Offset: 0x1aac
	// Line 1855, Address: 0x1da774, Func Offset: 0x1ab4
	// Line 1856, Address: 0x1da798, Func Offset: 0x1ad8
	// Line 1857, Address: 0x1da7c0, Func Offset: 0x1b00
	// Line 1858, Address: 0x1da7e8, Func Offset: 0x1b28
	// Line 1859, Address: 0x1da7f0, Func Offset: 0x1b30
	// Line 1860, Address: 0x1da820, Func Offset: 0x1b60
	// Line 1861, Address: 0x1da84c, Func Offset: 0x1b8c
	// Line 1863, Address: 0x1da87c, Func Offset: 0x1bbc
	// Line 1865, Address: 0x1da884, Func Offset: 0x1bc4
	// Line 1867, Address: 0x1da8ac, Func Offset: 0x1bec
	// Line 1868, Address: 0x1da8d0, Func Offset: 0x1c10
	// Line 1869, Address: 0x1da8f8, Func Offset: 0x1c38
	// Line 1870, Address: 0x1da900, Func Offset: 0x1c40
	// Line 1871, Address: 0x1da92c, Func Offset: 0x1c6c
	// Line 1872, Address: 0x1da934, Func Offset: 0x1c74
	// Line 1874, Address: 0x1da980, Func Offset: 0x1cc0
	// Line 1876, Address: 0x1da9b0, Func Offset: 0x1cf0
	// Line 1877, Address: 0x1da9dc, Func Offset: 0x1d1c
	// Line 1878, Address: 0x1da9e4, Func Offset: 0x1d24
	// Line 1880, Address: 0x1daa30, Func Offset: 0x1d70
	// Line 1882, Address: 0x1daa54, Func Offset: 0x1d94
	// Line 1883, Address: 0x1daa78, Func Offset: 0x1db8
	// Line 1884, Address: 0x1daa98, Func Offset: 0x1dd8
	// Line 1885, Address: 0x1daaa0, Func Offset: 0x1de0
	// Line 1886, Address: 0x1daac8, Func Offset: 0x1e08
	// Line 1888, Address: 0x1daad0, Func Offset: 0x1e10
	// Line 1889, Address: 0x1daae4, Func Offset: 0x1e24
	// Line 1890, Address: 0x1dab0c, Func Offset: 0x1e4c
	// Line 1892, Address: 0x1dab14, Func Offset: 0x1e54
	// Line 1893, Address: 0x1dab34, Func Offset: 0x1e74
	// Line 1894, Address: 0x1dab50, Func Offset: 0x1e90
	// Line 1896, Address: 0x1dab7c, Func Offset: 0x1ebc
	// Line 1898, Address: 0x1dab84, Func Offset: 0x1ec4
	// Line 1899, Address: 0x1dab98, Func Offset: 0x1ed8
	// Line 1900, Address: 0x1dabc0, Func Offset: 0x1f00
	// Line 1901, Address: 0x1dabf0, Func Offset: 0x1f30
	// Line 1902, Address: 0x1dabf8, Func Offset: 0x1f38
	// Line 1903, Address: 0x1dac10, Func Offset: 0x1f50
	// Line 1904, Address: 0x1dac38, Func Offset: 0x1f78
	// Line 1905, Address: 0x1dac68, Func Offset: 0x1fa8
	// Line 1906, Address: 0x1dac98, Func Offset: 0x1fd8
	// Line 1908, Address: 0x1daca0, Func Offset: 0x1fe0
	// Line 1909, Address: 0x1dacd0, Func Offset: 0x2010
	// Line 1910, Address: 0x1dacd8, Func Offset: 0x2018
	// Line 1911, Address: 0x1dad04, Func Offset: 0x2044
	// Line 1912, Address: 0x1dad34, Func Offset: 0x2074
	// Line 1913, Address: 0x1dad3c, Func Offset: 0x207c
	// Line 1914, Address: 0x1dad60, Func Offset: 0x20a0
	// Line 1920, Address: 0x1dad84, Func Offset: 0x20c4
	// Line 1923, Address: 0x1dad90, Func Offset: 0x20d0
	// Line 1924, Address: 0x1dae04, Func Offset: 0x2144
	// Line 1926, Address: 0x1dae14, Func Offset: 0x2154
	// Line 1927, Address: 0x1dae40, Func Offset: 0x2180
	// Line 1928, Address: 0x1dae84, Func Offset: 0x21c4
	// Line 1929, Address: 0x1dae98, Func Offset: 0x21d8
	// Line 1930, Address: 0x1daea0, Func Offset: 0x21e0
	// Line 1931, Address: 0x1daecc, Func Offset: 0x220c
	// Line 1932, Address: 0x1daf18, Func Offset: 0x2258
	// Line 1933, Address: 0x1daf30, Func Offset: 0x2270
	// Line 1935, Address: 0x1daf38, Func Offset: 0x2278
	// Line 1936, Address: 0x1daf84, Func Offset: 0x22c4
	// Line 1941, Address: 0x1daf9c, Func Offset: 0x22dc
	// Line 1943, Address: 0x1dafac, Func Offset: 0x22ec
	// Line 1945, Address: 0x1dafc0, Func Offset: 0x2300
	// Line 1946, Address: 0x1daffc, Func Offset: 0x233c
	// Line 1947, Address: 0x1db02c, Func Offset: 0x236c
	// Line 1948, Address: 0x1db040, Func Offset: 0x2380
	// Line 1949, Address: 0x1db048, Func Offset: 0x2388
	// Line 1951, Address: 0x1db05c, Func Offset: 0x239c
	// Line 1952, Address: 0x1db0a4, Func Offset: 0x23e4
	// Line 1953, Address: 0x1db0d4, Func Offset: 0x2414
	// Line 1959, Address: 0x1db0ec, Func Offset: 0x242c
	// Line 1964, Address: 0x1db124, Func Offset: 0x2464
	// Line 1965, Address: 0x1db154, Func Offset: 0x2494
	// Line 1966, Address: 0x1db19c, Func Offset: 0x24dc
	// Line 1967, Address: 0x1db1b4, Func Offset: 0x24f4
	// Line 1969, Address: 0x1db1bc, Func Offset: 0x24fc
	// Line 1970, Address: 0x1db204, Func Offset: 0x2544
	// Line 1977, Address: 0x1db21c, Func Offset: 0x255c
	// Func End, Address: 0x1db230, Func Offset: 0x2570
}

// 
// Start address: 0x1db230
void kage_font(unsigned short* str, unsigned short num, int x, int y)
{
	// Line 1985, Address: 0x1db230, Func Offset: 0
	// Line 1987, Address: 0x1db248, Func Offset: 0x18
	// Line 1988, Address: 0x1db254, Func Offset: 0x24
	// Line 1989, Address: 0x1db274, Func Offset: 0x44
	// Line 1991, Address: 0x1db280, Func Offset: 0x50
	// Line 1992, Address: 0x1db298, Func Offset: 0x68
	// Func End, Address: 0x1db2a8, Func Offset: 0x78
}

// 
// Start address: 0x1db2b0
void lookline(float box[4])
{
	// Line 1999, Address: 0x1db2b0, Func Offset: 0
	// Line 2000, Address: 0x1db2e0, Func Offset: 0x30
	// Line 2001, Address: 0x1db304, Func Offset: 0x54
	// Line 2002, Address: 0x1db338, Func Offset: 0x88
	// Line 2003, Address: 0x1db35c, Func Offset: 0xac
	// Line 2004, Address: 0x1db378, Func Offset: 0xc8
	// Line 2006, Address: 0x1db39c, Func Offset: 0xec
	// Line 2007, Address: 0x1db3b8, Func Offset: 0x108
	// Line 2008, Address: 0x1db400, Func Offset: 0x150
	// Line 2009, Address: 0x1db4b0, Func Offset: 0x200
	// Line 2010, Address: 0x1db558, Func Offset: 0x2a8
	// Line 2011, Address: 0x1db604, Func Offset: 0x354
	// Line 2012, Address: 0x1db6a8, Func Offset: 0x3f8
	// Line 2013, Address: 0x1db748, Func Offset: 0x498
	// Line 2019, Address: 0x1db750, Func Offset: 0x4a0
	// Line 2020, Address: 0x1db78c, Func Offset: 0x4dc
	// Line 2021, Address: 0x1db7b0, Func Offset: 0x500
	// Line 2022, Address: 0x1db7e4, Func Offset: 0x534
	// Line 2023, Address: 0x1db800, Func Offset: 0x550
	// Line 2024, Address: 0x1db81c, Func Offset: 0x56c
	// Line 2025, Address: 0x1db85c, Func Offset: 0x5ac
	// Line 2026, Address: 0x1db934, Func Offset: 0x684
	// Line 2027, Address: 0x1db9f4, Func Offset: 0x744
	// Line 2028, Address: 0x1dbad4, Func Offset: 0x824
	// Line 2031, Address: 0x1dbadc, Func Offset: 0x82c
	// Line 2032, Address: 0x1dbb00, Func Offset: 0x850
	// Line 2033, Address: 0x1dbb34, Func Offset: 0x884
	// Line 2034, Address: 0x1dbb50, Func Offset: 0x8a0
	// Line 2035, Address: 0x1dbb6c, Func Offset: 0x8bc
	// Line 2036, Address: 0x1dbbb4, Func Offset: 0x904
	// Line 2037, Address: 0x1dbca8, Func Offset: 0x9f8
	// Line 2038, Address: 0x1dbd84, Func Offset: 0xad4
	// Line 2039, Address: 0x1dbe74, Func Offset: 0xbc4
	// Line 2042, Address: 0x1dbe80, Func Offset: 0xbd0
	// Func End, Address: 0x1dbeb4, Func Offset: 0xc04
}

// 
// Start address: 0x1dbec0
void item_allay()
{
	int rgb;
	// Line 2050, Address: 0x1dbec0, Func Offset: 0
	// Line 2053, Address: 0x1dbeec, Func Offset: 0x2c
	// Line 2054, Address: 0x1dbf0c, Func Offset: 0x4c
	// Line 2055, Address: 0x1dbf30, Func Offset: 0x70
	// Line 2056, Address: 0x1dbf48, Func Offset: 0x88
	// Line 2058, Address: 0x1dbf7c, Func Offset: 0xbc
	// Line 2059, Address: 0x1dbfb8, Func Offset: 0xf8
	// Line 2060, Address: 0x1dbfec, Func Offset: 0x12c
	// Line 2061, Address: 0x1dc014, Func Offset: 0x154
	// Line 2062, Address: 0x1dc038, Func Offset: 0x178
	// Line 2063, Address: 0x1dc0b0, Func Offset: 0x1f0
	// Line 2064, Address: 0x1dc13c, Func Offset: 0x27c
	// Line 2065, Address: 0x1dc1dc, Func Offset: 0x31c
	// Line 2066, Address: 0x1dc264, Func Offset: 0x3a4
	// Line 2067, Address: 0x1dc2f0, Func Offset: 0x430
	// Line 2068, Address: 0x1dc380, Func Offset: 0x4c0
	// Line 2069, Address: 0x1dc418, Func Offset: 0x558
	// Line 2071, Address: 0x1dc420, Func Offset: 0x560
	// Line 2072, Address: 0x1dc460, Func Offset: 0x5a0
	// Line 2073, Address: 0x1dc494, Func Offset: 0x5d4
	// Line 2074, Address: 0x1dc4c0, Func Offset: 0x600
	// Line 2075, Address: 0x1dc4dc, Func Offset: 0x61c
	// Line 2076, Address: 0x1dc560, Func Offset: 0x6a0
	// Line 2077, Address: 0x1dc5fc, Func Offset: 0x73c
	// Line 2078, Address: 0x1dc698, Func Offset: 0x7d8
	// Line 2079, Address: 0x1dc72c, Func Offset: 0x86c
	// Line 2080, Address: 0x1dc7bc, Func Offset: 0x8fc
	// Line 2081, Address: 0x1dc850, Func Offset: 0x990
	// Line 2082, Address: 0x1dc8f4, Func Offset: 0xa34
	// Line 2087, Address: 0x1dc8fc, Func Offset: 0xa3c
	// Line 2088, Address: 0x1dc92c, Func Offset: 0xa6c
	// Line 2089, Address: 0x1dc96c, Func Offset: 0xaac
	// Line 2090, Address: 0x1dc9a4, Func Offset: 0xae4
	// Line 2091, Address: 0x1dc9c8, Func Offset: 0xb08
	// Line 2092, Address: 0x1dca34, Func Offset: 0xb74
	// Line 2093, Address: 0x1dcad8, Func Offset: 0xc18
	// Line 2094, Address: 0x1dcb6c, Func Offset: 0xcac
	// Line 2095, Address: 0x1dcc0c, Func Offset: 0xd4c
	// Line 2096, Address: 0x1dccbc, Func Offset: 0xdfc
	// Line 2098, Address: 0x1dccc4, Func Offset: 0xe04
	// Line 2099, Address: 0x1dccf8, Func Offset: 0xe38
	// Line 2100, Address: 0x1dcd2c, Func Offset: 0xe6c
	// Line 2101, Address: 0x1dcd48, Func Offset: 0xe88
	// Line 2102, Address: 0x1dcd6c, Func Offset: 0xeac
	// Line 2103, Address: 0x1dcdcc, Func Offset: 0xf0c
	// Line 2104, Address: 0x1dce74, Func Offset: 0xfb4
	// Line 2105, Address: 0x1dcf10, Func Offset: 0x1050
	// Line 2106, Address: 0x1dcfa4, Func Offset: 0x10e4
	// Line 2107, Address: 0x1dd040, Func Offset: 0x1180
	// Line 2109, Address: 0x1dd04c, Func Offset: 0x118c
	// Line 2110, Address: 0x1dd080, Func Offset: 0x11c0
	// Line 2111, Address: 0x1dd0bc, Func Offset: 0x11fc
	// Line 2112, Address: 0x1dd0dc, Func Offset: 0x121c
	// Line 2113, Address: 0x1dd0f8, Func Offset: 0x1238
	// Line 2114, Address: 0x1dd15c, Func Offset: 0x129c
	// Line 2115, Address: 0x1dd204, Func Offset: 0x1344
	// Line 2116, Address: 0x1dd2a8, Func Offset: 0x13e8
	// Line 2117, Address: 0x1dd350, Func Offset: 0x1490
	// Line 2118, Address: 0x1dd3e4, Func Offset: 0x1524
	// Line 2120, Address: 0x1dd3f0, Func Offset: 0x1530
	// Line 2121, Address: 0x1dd424, Func Offset: 0x1564
	// Line 2122, Address: 0x1dd464, Func Offset: 0x15a4
	// Line 2123, Address: 0x1dd49c, Func Offset: 0x15dc
	// Line 2124, Address: 0x1dd4b8, Func Offset: 0x15f8
	// Line 2125, Address: 0x1dd52c, Func Offset: 0x166c
	// Line 2126, Address: 0x1dd5b8, Func Offset: 0x16f8
	// Line 2127, Address: 0x1dd654, Func Offset: 0x1794
	// Line 2128, Address: 0x1dd6fc, Func Offset: 0x183c
	// Line 2129, Address: 0x1dd798, Func Offset: 0x18d8
	// Line 2131, Address: 0x1dd7a4, Func Offset: 0x18e4
	// Func End, Address: 0x1dd7d8, Func Offset: 0x1918
}

// 
// Start address: 0x1dd7e0
void sprite()
{
	int rgb;
	int k;
	int j;
	int i;
	// Line 2139, Address: 0x1dd7e0, Func Offset: 0
	// Line 2141, Address: 0x1dd80c, Func Offset: 0x2c
	// Line 2142, Address: 0x1dd834, Func Offset: 0x54
	// Line 2143, Address: 0x1dd844, Func Offset: 0x64
	// Line 2144, Address: 0x1dd86c, Func Offset: 0x8c
	// Line 2145, Address: 0x1dd8a0, Func Offset: 0xc0
	// Line 2146, Address: 0x1dd8bc, Func Offset: 0xdc
	// Line 2147, Address: 0x1dd8d8, Func Offset: 0xf8
	// Line 2149, Address: 0x1dd9f8, Func Offset: 0x218
	// Line 2150, Address: 0x1ddaf8, Func Offset: 0x318
	// Line 2151, Address: 0x1ddbf0, Func Offset: 0x410
	// Line 2153, Address: 0x1ddbf8, Func Offset: 0x418
	// Line 2154, Address: 0x1ddc40, Func Offset: 0x460
	// Line 2155, Address: 0x1ddd2c, Func Offset: 0x54c
	// Line 2156, Address: 0x1dde1c, Func Offset: 0x63c
	// Line 2157, Address: 0x1ddf08, Func Offset: 0x728
	// Line 2158, Address: 0x1de000, Func Offset: 0x820
	// Line 2159, Address: 0x1de008, Func Offset: 0x828
	// Line 2160, Address: 0x1de04c, Func Offset: 0x86c
	// Func End, Address: 0x1de080, Func Offset: 0x8a0
}

// 
// Start address: 0x1de080
void look_command(int gosa)
{
	int k;
	// Line 2168, Address: 0x1de080, Func Offset: 0
	// Line 2170, Address: 0x1de0a8, Func Offset: 0x28
	// Line 2171, Address: 0x1de10c, Func Offset: 0x8c
	// Line 2173, Address: 0x1de128, Func Offset: 0xa8
	// Line 2174, Address: 0x1de134, Func Offset: 0xb4
	// Line 2175, Address: 0x1de158, Func Offset: 0xd8
	// Line 2176, Address: 0x1de18c, Func Offset: 0x10c
	// Line 2177, Address: 0x1de1a8, Func Offset: 0x128
	// Line 2178, Address: 0x1de1c4, Func Offset: 0x144
	// Line 2179, Address: 0x1de258, Func Offset: 0x1d8
	// Line 2180, Address: 0x1de354, Func Offset: 0x2d4
	// Line 2181, Address: 0x1de460, Func Offset: 0x3e0
	// Line 2182, Address: 0x1de55c, Func Offset: 0x4dc
	// Line 2183, Address: 0x1de668, Func Offset: 0x5e8
	// Line 2184, Address: 0x1de670, Func Offset: 0x5f0
	// Line 2185, Address: 0x1de684, Func Offset: 0x604
	// Func End, Address: 0x1de6b0, Func Offset: 0x630
}

// 
// Start address: 0x1de6b0
void look_volume()
{
	int i;
	// Line 2193, Address: 0x1de6b0, Func Offset: 0
	// Line 2196, Address: 0x1de6c8, Func Offset: 0x18
	// Line 2198, Address: 0x1de6d4, Func Offset: 0x24
	// Line 2199, Address: 0x1de6f8, Func Offset: 0x48
	// Line 2200, Address: 0x1de714, Func Offset: 0x64
	// Line 2201, Address: 0x1de72c, Func Offset: 0x7c
	// Line 2203, Address: 0x1de754, Func Offset: 0xa4
	// Line 2204, Address: 0x1de778, Func Offset: 0xc8
	// Line 2205, Address: 0x1de7f0, Func Offset: 0x140
	// Line 2206, Address: 0x1de868, Func Offset: 0x1b8
	// Line 2207, Address: 0x1de870, Func Offset: 0x1c0
	// Line 2209, Address: 0x1de884, Func Offset: 0x1d4
	// Func End, Address: 0x1de8a4, Func Offset: 0x1f4
}

// 
// Start address: 0x1de8b0
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
	int y;
	int x;
	// Line 2217, Address: 0x1de8b0, Func Offset: 0
	// Line 2220, Address: 0x1de8dc, Func Offset: 0x2c
	// Line 2221, Address: 0x1de8ec, Func Offset: 0x3c
	// Line 2222, Address: 0x1de8fc, Func Offset: 0x4c
	// Line 2223, Address: 0x1de904, Func Offset: 0x54
	// Line 2224, Address: 0x1de90c, Func Offset: 0x5c
	// Line 2226, Address: 0x1de914, Func Offset: 0x64
	// Line 2227, Address: 0x1de934, Func Offset: 0x84
	// Line 2228, Address: 0x1de98c, Func Offset: 0xdc
	// Line 2229, Address: 0x1de9c0, Func Offset: 0x110
	// Line 2230, Address: 0x1dea14, Func Offset: 0x164
	// Line 2231, Address: 0x1dea34, Func Offset: 0x184
	// Line 2232, Address: 0x1dea44, Func Offset: 0x194
	// Line 2234, Address: 0x1dea54, Func Offset: 0x1a4
	// Line 2237, Address: 0x1dea78, Func Offset: 0x1c8
	// Line 2239, Address: 0x1dea84, Func Offset: 0x1d4
	// Line 2241, Address: 0x1deab0, Func Offset: 0x200
	// Line 2242, Address: 0x1deb44, Func Offset: 0x294
	// Line 2243, Address: 0x1deb94, Func Offset: 0x2e4
	// Line 2244, Address: 0x1deb98, Func Offset: 0x2e8
	// Line 2247, Address: 0x1deba0, Func Offset: 0x2f0
	// Line 2248, Address: 0x1debf0, Func Offset: 0x340
	// Line 2249, Address: 0x1dec60, Func Offset: 0x3b0
	// Line 2250, Address: 0x1dec64, Func Offset: 0x3b4
	// Line 2251, Address: 0x1dec68, Func Offset: 0x3b8
	// Line 2252, Address: 0x1dec90, Func Offset: 0x3e0
	// Line 2253, Address: 0x1decac, Func Offset: 0x3fc
	// Line 2254, Address: 0x1decf8, Func Offset: 0x448
	// Line 2255, Address: 0x1ded28, Func Offset: 0x478
	// Line 2256, Address: 0x1ded68, Func Offset: 0x4b8
	// Line 2257, Address: 0x1dedb4, Func Offset: 0x504
	// Line 2258, Address: 0x1dede4, Func Offset: 0x534
	// Line 2259, Address: 0x1dee28, Func Offset: 0x578
	// Line 2260, Address: 0x1dee74, Func Offset: 0x5c4
	// Line 2261, Address: 0x1deea4, Func Offset: 0x5f4
	// Line 2262, Address: 0x1deec8, Func Offset: 0x618
	// Line 2263, Address: 0x1def14, Func Offset: 0x664
	// Line 2264, Address: 0x1def44, Func Offset: 0x694
	// Line 2265, Address: 0x1def68, Func Offset: 0x6b8
	// Line 2266, Address: 0x1defb4, Func Offset: 0x704
	// Line 2267, Address: 0x1defbc, Func Offset: 0x70c
	// Line 2270, Address: 0x1defcc, Func Offset: 0x71c
	// Line 2272, Address: 0x1defd8, Func Offset: 0x728
	// Line 2273, Address: 0x1deffc, Func Offset: 0x74c
	// Line 2274, Address: 0x1df030, Func Offset: 0x780
	// Line 2275, Address: 0x1df048, Func Offset: 0x798
	// Line 2276, Address: 0x1df064, Func Offset: 0x7b4
	// Line 2277, Address: 0x1df094, Func Offset: 0x7e4
	// Line 2278, Address: 0x1df0b8, Func Offset: 0x808
	// Line 2279, Address: 0x1df0d8, Func Offset: 0x828
	// Line 2280, Address: 0x1df124, Func Offset: 0x874
	// Line 2281, Address: 0x1df148, Func Offset: 0x898
	// Line 2282, Address: 0x1df168, Func Offset: 0x8b8
	// Line 2283, Address: 0x1df1b4, Func Offset: 0x904
	// Line 2284, Address: 0x1df1bc, Func Offset: 0x90c
	// Line 2285, Address: 0x1df1cc, Func Offset: 0x91c
	// Func End, Address: 0x1df200, Func Offset: 0x950
}

// 
// Start address: 0x1df200
void stock_line(int leftx, int hoge)
{
	int i;
	// Line 2293, Address: 0x1df200, Func Offset: 0
	// Line 2296, Address: 0x1df228, Func Offset: 0x28
	// Line 2298, Address: 0x1df234, Func Offset: 0x34
	// Line 2299, Address: 0x1df258, Func Offset: 0x58
	// Line 2300, Address: 0x1df28c, Func Offset: 0x8c
	// Line 2301, Address: 0x1df2a4, Func Offset: 0xa4
	// Line 2302, Address: 0x1df2c0, Func Offset: 0xc0
	// Line 2303, Address: 0x1df2e4, Func Offset: 0xe4
	// Line 2304, Address: 0x1df374, Func Offset: 0x174
	// Line 2305, Address: 0x1df3f0, Func Offset: 0x1f0
	// Line 2306, Address: 0x1df480, Func Offset: 0x280
	// Line 2307, Address: 0x1df500, Func Offset: 0x300
	// Line 2308, Address: 0x1df508, Func Offset: 0x308
	// Line 2309, Address: 0x1df51c, Func Offset: 0x31c
	// Func End, Address: 0x1df544, Func Offset: 0x344
}

// 
// Start address: 0x1df550
void look_combine()
{
	int i;
	// Line 2318, Address: 0x1df550, Func Offset: 0
	// Line 2320, Address: 0x1df57c, Func Offset: 0x2c
	// Line 2321, Address: 0x1df5b8, Func Offset: 0x68
	// Line 2322, Address: 0x1df5f4, Func Offset: 0xa4
	// Line 2324, Address: 0x1df630, Func Offset: 0xe0
	// Line 2326, Address: 0x1df63c, Func Offset: 0xec
	// Line 2327, Address: 0x1df660, Func Offset: 0x110
	// Line 2328, Address: 0x1df67c, Func Offset: 0x12c
	// Line 2329, Address: 0x1df69c, Func Offset: 0x14c
	// Line 2330, Address: 0x1df720, Func Offset: 0x1d0
	// Line 2331, Address: 0x1df7a4, Func Offset: 0x254
	// Line 2333, Address: 0x1df7ac, Func Offset: 0x25c
	// Line 2334, Address: 0x1df7d4, Func Offset: 0x284
	// Line 2335, Address: 0x1df7f0, Func Offset: 0x2a0
	// Line 2336, Address: 0x1df810, Func Offset: 0x2c0
	// Line 2337, Address: 0x1df894, Func Offset: 0x344
	// Line 2338, Address: 0x1df918, Func Offset: 0x3c8
	// Line 2339, Address: 0x1df99c, Func Offset: 0x44c
	// Line 2340, Address: 0x1dfa20, Func Offset: 0x4d0
	// Line 2341, Address: 0x1dfaa4, Func Offset: 0x554
	// Line 2342, Address: 0x1dfaac, Func Offset: 0x55c
	// Line 2344, Address: 0x1dfabc, Func Offset: 0x56c
	// Func End, Address: 0x1dfaf0, Func Offset: 0x5a0
}

// 
// Start address: 0x1dfaf0
void look_zanzo(float* za0, float* za1, float* za2, float* za3)
{
	// Line 2352, Address: 0x1dfaf0, Func Offset: 0
	// Line 2353, Address: 0x1dfb20, Func Offset: 0x30
	// Line 2354, Address: 0x1dfb44, Func Offset: 0x54
	// Line 2355, Address: 0x1dfb7c, Func Offset: 0x8c
	// Line 2356, Address: 0x1dfb98, Func Offset: 0xa8
	// Line 2357, Address: 0x1dfbb4, Func Offset: 0xc4
	// Line 2358, Address: 0x1dfbf4, Func Offset: 0x104
	// Line 2359, Address: 0x1dfc84, Func Offset: 0x194
	// Line 2360, Address: 0x1dfd14, Func Offset: 0x224
	// Line 2361, Address: 0x1dfda4, Func Offset: 0x2b4
	// Line 2362, Address: 0x1dfe34, Func Offset: 0x344
	// Line 2363, Address: 0x1dfe3c, Func Offset: 0x34c
	// Func End, Address: 0x1dfe64, Func Offset: 0x374
}

// 
// Start address: 0x1dfe70
void look_blackscr(int num)
{
	int j;
	int i;
	// Line 2367, Address: 0x1dfe70, Func Offset: 0
	// Line 2369, Address: 0x1dfe90, Func Offset: 0x20
	// Line 2371, Address: 0x1dfea8, Func Offset: 0x38
	// Line 2372, Address: 0x1dfeb4, Func Offset: 0x44
	// Line 2373, Address: 0x1dfed8, Func Offset: 0x68
	// Line 2374, Address: 0x1dff10, Func Offset: 0xa0
	// Line 2375, Address: 0x1dff28, Func Offset: 0xb8
	// Line 2377, Address: 0x1dff30, Func Offset: 0xc0
	// Line 2379, Address: 0x1dff50, Func Offset: 0xe0
	// Line 2380, Address: 0x1dff6c, Func Offset: 0xfc
	// Line 2381, Address: 0x1dff8c, Func Offset: 0x11c
	// Line 2382, Address: 0x1e0004, Func Offset: 0x194
	// Line 2383, Address: 0x1e007c, Func Offset: 0x20c
	// Line 2384, Address: 0x1e0084, Func Offset: 0x214
	// Line 2385, Address: 0x1e00a4, Func Offset: 0x234
	// Func End, Address: 0x1e00c8, Func Offset: 0x258
}

// 
// Start address: 0x1e00d0
void test()
{
	// Line 2412, Address: 0x1e00d0, Func Offset: 0
	// Func End, Address: 0x1e00d8, Func Offset: 0x8
}

