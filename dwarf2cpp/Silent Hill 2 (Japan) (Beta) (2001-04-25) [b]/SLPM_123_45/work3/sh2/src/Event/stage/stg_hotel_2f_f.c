typedef union fsFileIndex;
typedef struct _anon0;
typedef union fsFile;
typedef struct shBattleFight;
typedef struct PicDraw_Data;
typedef struct PAD_2D;
typedef struct sh2gfw_AREA_HEAD;
typedef struct SubCharacter;
typedef struct PAD_INFO;
typedef struct shBattleShot;
typedef struct shSkelton;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct SubObject;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct shAttackInfo;
typedef struct Pad_KeyConfig;
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
typedef struct Item;
typedef struct _anon7;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon8;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct _anon9;
typedef struct _anon10;
typedef struct _SH2_SYS;
typedef struct PAD_3D;

typedef void(*type_4)(SubCharacter*);
typedef void(*type_6)(SubCharacter*);
typedef void(*type_22)();
typedef int(*type_24)();
typedef void(*type_26)(SubCharacter*);
typedef void(*type_28)(SubCharacter*);

typedef unsigned char type_0[4];
typedef fsFileIndex type_1[1];
typedef PAD_INFO type_2[10];
typedef unsigned char type_3[10];
typedef shAttackInfo type_5[46];
typedef float type_7[4];
typedef unsigned char type_8[2];
typedef unsigned char type_9[4];
typedef unsigned char type_10[2];
typedef char type_11[4];
typedef char type_12[4][19];
typedef unsigned char type_13[522];
typedef char type_14[0];
typedef unsigned char type_15[3];
typedef unsigned int type_16[256];
typedef unsigned char type_17[10];
typedef unsigned int type_18[32];
typedef unsigned char type_19[4];
typedef char type_20[4];
typedef char type_21[4];
typedef unsigned char type_23[2];
typedef unsigned char type_25[4];
typedef float type_27[4];
typedef _anon1 type_29[52];
typedef unsigned char type_30[13];
typedef int(*type_31)()[10];
typedef unsigned int type_32[2];
typedef unsigned short type_33[11];
typedef unsigned short type_34[3];
typedef char type_35[8];
typedef char type_36[8][4];
typedef float type_37[4];
typedef unsigned char type_38[34];
typedef float type_39[4][4];
typedef float type_40[4][2];
typedef short type_41[2];
typedef short type_42[2][30];
typedef unsigned int type_43[8];
typedef fsFileIndex type_44[1];
typedef unsigned char type_45[4];

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

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
};

struct sh2gfw_AREA_HEAD
{
	unsigned int area_id;
	unsigned int toGlobalTexHead;
	unsigned int toGlobalClutsHead;
	unsigned int date;
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

struct _SH2_SYS
{
	unsigned int step[8];
	int main_status;
	unsigned int boot_first;
	unsigned int soft_reset;
	unsigned int frame_cnt;
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
unsigned char ev_pos[522];
_anon1 ev_list[52];
int(*ev_prog)()[10];
_anon9 stage_hotel_2f_f;
char trunk_drum[8][4];
char trunk_key[4][19];
short for_shelf[2][30];
_anon3 game_flag;
Item item;
shPlayerWork sh2jms;
int ev_s_step;
int ev_p_step;
_SH2_SYS Sh2sys;
Pad_KeyConfig key_config;
fsFileIndex data_pic_hsp_p_doctormemo_key_tex[1];
fsFileIndex data_pic_hsp_p_doctormemo_tex[1];
float ev_cursor_x;
float ev_cursor_y;
char pic_buf_1[0];
float marker_alpha;
float dtf;
float ev_timer;

int EvProgItemPutForShelf();
int EvProgUseHotel204Key();
int EvProgUseHotelElevatorKey();
int EvProgElvatorButton();
int EvProgGetBaggageInShelf();
int EvProgPutBaggageForShelf();
int EvProgUseFishKey();
int EvProgTrunkUnlockChallenge();
void EvProgSubTrunkDrumDraw();
void EvProgSubTrunkDrumCheck();
int EvProgPictureWithMarker();
void EvProgSubDrawMarkerAndWork();
void EvStageInit();

// 
// Start address: 0x22f7f0
int EvProgItemPutForShelf()
{
	int i;
	// Line 137, Address: 0x22f7f0, Func Offset: 0
	// Line 140, Address: 0x22f7f8, Func Offset: 0x8
	// Line 141, Address: 0x22f804, Func Offset: 0x14
	// Line 142, Address: 0x22f858, Func Offset: 0x68
	// Line 143, Address: 0x22f880, Func Offset: 0x90
	// Line 144, Address: 0x22f8e4, Func Offset: 0xf4
	// Line 145, Address: 0x22f8f8, Func Offset: 0x108
	// Line 146, Address: 0x22f940, Func Offset: 0x150
	// Line 147, Address: 0x22f948, Func Offset: 0x158
	// Line 148, Address: 0x22f954, Func Offset: 0x164
	// Line 149, Address: 0x22f9e0, Func Offset: 0x1f0
	// Line 151, Address: 0x22fa14, Func Offset: 0x224
	// Line 152, Address: 0x22fa18, Func Offset: 0x228
	// Func End, Address: 0x22fa28, Func Offset: 0x238
}

// 
// Start address: 0x22fa30
int EvProgUseHotel204Key()
{
	// Line 158, Address: 0x22fa30, Func Offset: 0
	// Line 159, Address: 0x22fa38, Func Offset: 0x8
	// Line 160, Address: 0x22fa48, Func Offset: 0x18
	// Func End, Address: 0x22fa58, Func Offset: 0x28
}

// 
// Start address: 0x22fa60
int EvProgUseHotelElevatorKey()
{
	// Line 166, Address: 0x22fa60, Func Offset: 0
	// Line 167, Address: 0x22fa68, Func Offset: 0x8
	// Line 168, Address: 0x22fa78, Func Offset: 0x18
	// Func End, Address: 0x22fa88, Func Offset: 0x28
}

// 
// Start address: 0x22fa90
int EvProgElvatorButton()
{
	// Line 175, Address: 0x22fa90, Func Offset: 0
	// Line 176, Address: 0x22fa94, Func Offset: 0x4
	// Func End, Address: 0x22fa9c, Func Offset: 0xc
}

// 
// Start address: 0x22faa0
int EvProgGetBaggageInShelf()
{
	int i;
	// Line 182, Address: 0x22faa0, Func Offset: 0
	// Line 185, Address: 0x22faac, Func Offset: 0xc
	// Line 187, Address: 0x22fadc, Func Offset: 0x3c
	// Line 188, Address: 0x22faf0, Func Offset: 0x50
	// Line 189, Address: 0x22fafc, Func Offset: 0x5c
	// Line 190, Address: 0x22fb10, Func Offset: 0x70
	// Line 193, Address: 0x22fb18, Func Offset: 0x78
	// Line 194, Address: 0x22fb2c, Func Offset: 0x8c
	// Line 195, Address: 0x22fb3c, Func Offset: 0x9c
	// Line 196, Address: 0x22fb48, Func Offset: 0xa8
	// Line 197, Address: 0x22fbac, Func Offset: 0x10c
	// Line 198, Address: 0x22fc10, Func Offset: 0x170
	// Line 200, Address: 0x22fc78, Func Offset: 0x1d8
	// Line 201, Address: 0x22fc9c, Func Offset: 0x1fc
	// Line 203, Address: 0x22fcb4, Func Offset: 0x214
	// Line 204, Address: 0x22fcc8, Func Offset: 0x228
	// Line 207, Address: 0x22fcd0, Func Offset: 0x230
	// Line 208, Address: 0x22fce4, Func Offset: 0x244
	// Line 210, Address: 0x22fcf0, Func Offset: 0x250
	// Line 211, Address: 0x22fcf4, Func Offset: 0x254
	// Func End, Address: 0x22fd08, Func Offset: 0x268
}

// 
// Start address: 0x22fd10
int EvProgPutBaggageForShelf()
{
	int i;
	// Line 217, Address: 0x22fd10, Func Offset: 0
	// Line 220, Address: 0x22fd1c, Func Offset: 0xc
	// Line 222, Address: 0x22fd58, Func Offset: 0x48
	// Line 223, Address: 0x22fd6c, Func Offset: 0x5c
	// Line 224, Address: 0x22fd78, Func Offset: 0x68
	// Line 225, Address: 0x22fd8c, Func Offset: 0x7c
	// Line 228, Address: 0x22fd94, Func Offset: 0x84
	// Line 229, Address: 0x22fda8, Func Offset: 0x98
	// Line 230, Address: 0x22fdb8, Func Offset: 0xa8
	// Line 231, Address: 0x22fdcc, Func Offset: 0xbc
	// Line 232, Address: 0x22fe00, Func Offset: 0xf0
	// Line 233, Address: 0x22fe14, Func Offset: 0x104
	// Line 234, Address: 0x22fe1c, Func Offset: 0x10c
	// Line 235, Address: 0x22fe34, Func Offset: 0x124
	// Line 236, Address: 0x22fe50, Func Offset: 0x140
	// Line 238, Address: 0x22fe64, Func Offset: 0x154
	// Line 241, Address: 0x22fe6c, Func Offset: 0x15c
	// Line 242, Address: 0x22fe80, Func Offset: 0x170
	// Line 243, Address: 0x22fe90, Func Offset: 0x180
	// Line 244, Address: 0x22fe9c, Func Offset: 0x18c
	// Line 245, Address: 0x22ff00, Func Offset: 0x1f0
	// Line 246, Address: 0x22ff64, Func Offset: 0x254
	// Line 247, Address: 0x22ffcc, Func Offset: 0x2bc
	// Line 248, Address: 0x22ffd0, Func Offset: 0x2c0
	// Line 249, Address: 0x22fff4, Func Offset: 0x2e4
	// Line 251, Address: 0x23000c, Func Offset: 0x2fc
	// Line 252, Address: 0x230020, Func Offset: 0x310
	// Line 255, Address: 0x230028, Func Offset: 0x318
	// Line 256, Address: 0x23003c, Func Offset: 0x32c
	// Line 257, Address: 0x230054, Func Offset: 0x344
	// Line 259, Address: 0x230060, Func Offset: 0x350
	// Line 260, Address: 0x230064, Func Offset: 0x354
	// Func End, Address: 0x230078, Func Offset: 0x368
}

// 
// Start address: 0x230080
int EvProgUseFishKey()
{
	// Line 266, Address: 0x230080, Func Offset: 0
	// Line 267, Address: 0x230088, Func Offset: 0x8
	// Line 268, Address: 0x230098, Func Offset: 0x18
	// Func End, Address: 0x2300a8, Func Offset: 0x28
}

// 
// Start address: 0x2300b0
int EvProgTrunkUnlockChallenge()
{
	// Line 274, Address: 0x2300b0, Func Offset: 0
	// Line 275, Address: 0x2300b8, Func Offset: 0x8
	// Line 277, Address: 0x23010c, Func Offset: 0x5c
	// Line 278, Address: 0x230120, Func Offset: 0x70
	// Line 279, Address: 0x230134, Func Offset: 0x84
	// Line 280, Address: 0x230148, Func Offset: 0x98
	// Line 283, Address: 0x230150, Func Offset: 0xa0
	// Line 286, Address: 0x230178, Func Offset: 0xc8
	// Line 287, Address: 0x230188, Func Offset: 0xd8
	// Line 288, Address: 0x23019c, Func Offset: 0xec
	// Line 291, Address: 0x2301a4, Func Offset: 0xf4
	// Line 292, Address: 0x2301ac, Func Offset: 0xfc
	// Line 293, Address: 0x2301b4, Func Offset: 0x104
	// Line 294, Address: 0x2301bc, Func Offset: 0x10c
	// Line 295, Address: 0x2301c4, Func Offset: 0x114
	// Line 296, Address: 0x2301e8, Func Offset: 0x138
	// Line 299, Address: 0x2301f0, Func Offset: 0x140
	// Line 300, Address: 0x2301f8, Func Offset: 0x148
	// Line 301, Address: 0x230200, Func Offset: 0x150
	// Line 302, Address: 0x230208, Func Offset: 0x158
	// Line 303, Address: 0x230214, Func Offset: 0x164
	// Line 304, Address: 0x23021c, Func Offset: 0x16c
	// Line 305, Address: 0x230224, Func Offset: 0x174
	// Line 307, Address: 0x230258, Func Offset: 0x1a8
	// Line 308, Address: 0x230268, Func Offset: 0x1b8
	// Line 309, Address: 0x23027c, Func Offset: 0x1cc
	// Line 312, Address: 0x230284, Func Offset: 0x1d4
	// Line 313, Address: 0x23028c, Func Offset: 0x1dc
	// Line 314, Address: 0x230294, Func Offset: 0x1e4
	// Line 315, Address: 0x23029c, Func Offset: 0x1ec
	// Line 316, Address: 0x2302a4, Func Offset: 0x1f4
	// Line 317, Address: 0x2302c8, Func Offset: 0x218
	// Line 320, Address: 0x2302d0, Func Offset: 0x220
	// Line 321, Address: 0x2302e4, Func Offset: 0x234
	// Line 323, Address: 0x2302f0, Func Offset: 0x240
	// Line 324, Address: 0x2302f4, Func Offset: 0x244
	// Func End, Address: 0x230304, Func Offset: 0x254
}

// 
// Start address: 0x230310
void EvProgSubTrunkDrumDraw()
{
	int i;
	PicDraw_Data pic;
	// Line 329, Address: 0x230310, Func Offset: 0
	// Line 333, Address: 0x23031c, Func Offset: 0xc
	// Line 335, Address: 0x230338, Func Offset: 0x28
	// Line 337, Address: 0x230348, Func Offset: 0x38
	// Line 338, Address: 0x230370, Func Offset: 0x60
	// Line 340, Address: 0x230378, Func Offset: 0x68
	// Line 343, Address: 0x230384, Func Offset: 0x74
	// Line 344, Address: 0x230390, Func Offset: 0x80
	// Line 345, Address: 0x2303a8, Func Offset: 0x98
	// Func End, Address: 0x2303bc, Func Offset: 0xac
}

// 
// Start address: 0x2303c0
void EvProgSubTrunkDrumCheck()
{
	int i;
	int work;
	// Line 350, Address: 0x2303c0, Func Offset: 0
	// Line 354, Address: 0x2303d0, Func Offset: 0x10
	// Line 358, Address: 0x2303ec, Func Offset: 0x2c
	// Line 359, Address: 0x2303f0, Func Offset: 0x30
	// Line 360, Address: 0x2303fc, Func Offset: 0x3c
	// Line 361, Address: 0x230454, Func Offset: 0x94
	// Line 362, Address: 0x230460, Func Offset: 0xa0
	// Line 363, Address: 0x2304c8, Func Offset: 0x108
	// Line 365, Address: 0x2304d4, Func Offset: 0x114
	// Line 366, Address: 0x2304e8, Func Offset: 0x128
	// Func End, Address: 0x230500, Func Offset: 0x140
}

// 
// Start address: 0x230500
int EvProgPictureWithMarker()
{
	// Line 374, Address: 0x230500, Func Offset: 0
	// Line 375, Address: 0x23050c, Func Offset: 0xc
	// Line 381, Address: 0x230558, Func Offset: 0x58
	// Line 382, Address: 0x230560, Func Offset: 0x60
	// Line 383, Address: 0x230568, Func Offset: 0x68
	// Line 384, Address: 0x230570, Func Offset: 0x70
	// Line 385, Address: 0x23058c, Func Offset: 0x8c
	// Line 389, Address: 0x230594, Func Offset: 0x94
	// Line 391, Address: 0x230600, Func Offset: 0x100
	// Line 392, Address: 0x230614, Func Offset: 0x114
	// Line 393, Address: 0x230640, Func Offset: 0x140
	// Line 394, Address: 0x230650, Func Offset: 0x150
	// Line 397, Address: 0x230664, Func Offset: 0x164
	// Line 398, Address: 0x230668, Func Offset: 0x168
	// Line 401, Address: 0x230690, Func Offset: 0x190
	// Line 402, Address: 0x2306a4, Func Offset: 0x1a4
	// Line 403, Address: 0x2306b4, Func Offset: 0x1b4
	// Line 406, Address: 0x2306bc, Func Offset: 0x1bc
	// Line 407, Address: 0x2306cc, Func Offset: 0x1cc
	// Line 408, Address: 0x230700, Func Offset: 0x200
	// Line 409, Address: 0x230714, Func Offset: 0x214
	// Line 412, Address: 0x23071c, Func Offset: 0x21c
	// Line 413, Address: 0x230734, Func Offset: 0x234
	// Line 414, Address: 0x230740, Func Offset: 0x240
	// Line 415, Address: 0x230754, Func Offset: 0x254
	// Line 418, Address: 0x23075c, Func Offset: 0x25c
	// Line 419, Address: 0x230778, Func Offset: 0x278
	// Line 421, Address: 0x230810, Func Offset: 0x310
	// Line 422, Address: 0x230830, Func Offset: 0x330
	// Line 423, Address: 0x23083c, Func Offset: 0x33c
	// Line 424, Address: 0x230854, Func Offset: 0x354
	// Line 426, Address: 0x230868, Func Offset: 0x368
	// Line 429, Address: 0x230870, Func Offset: 0x370
	// Line 430, Address: 0x230898, Func Offset: 0x398
	// Line 431, Address: 0x2308a8, Func Offset: 0x3a8
	// Line 432, Address: 0x2308bc, Func Offset: 0x3bc
	// Line 435, Address: 0x2308c4, Func Offset: 0x3c4
	// Line 436, Address: 0x2308e8, Func Offset: 0x3e8
	// Line 439, Address: 0x2308f0, Func Offset: 0x3f0
	// Line 440, Address: 0x230904, Func Offset: 0x404
	// Line 442, Address: 0x230910, Func Offset: 0x410
	// Line 443, Address: 0x230914, Func Offset: 0x414
	// Func End, Address: 0x230928, Func Offset: 0x428
}

// 
// Start address: 0x230930
void EvProgSubDrawMarkerAndWork()
{
	int i;
	int work;
	PicDraw_Data pic;
	// Line 448, Address: 0x230930, Func Offset: 0
	// Line 453, Address: 0x23093c, Func Offset: 0xc
	// Line 455, Address: 0x230958, Func Offset: 0x28
	// Line 457, Address: 0x230968, Func Offset: 0x38
	// Line 459, Address: 0x230990, Func Offset: 0x60
	// Line 460, Address: 0x230994, Func Offset: 0x64
	// Line 461, Address: 0x2309a0, Func Offset: 0x70
	// Line 464, Address: 0x2309f4, Func Offset: 0xc4
	// Line 465, Address: 0x2309fc, Func Offset: 0xcc
	// Line 468, Address: 0x230a08, Func Offset: 0xd8
	// Line 469, Address: 0x230a14, Func Offset: 0xe4
	// Line 472, Address: 0x230a28, Func Offset: 0xf8
	// Line 474, Address: 0x230a48, Func Offset: 0x118
	// Line 475, Address: 0x230a9c, Func Offset: 0x16c
	// Line 478, Address: 0x230aa4, Func Offset: 0x174
	// Line 480, Address: 0x230ab0, Func Offset: 0x180
	// Func End, Address: 0x230ac4, Func Offset: 0x194
}

// 
// Start address: 0x230ad0
void EvStageInit()
{
	int j;
	int i;
	int work;
	// Line 485, Address: 0x230ad0, Func Offset: 0
	// Line 490, Address: 0x230ae4, Func Offset: 0x14
	// Line 491, Address: 0x230afc, Func Offset: 0x2c
	// Line 492, Address: 0x230b00, Func Offset: 0x30
	// Line 493, Address: 0x230b0c, Func Offset: 0x3c
	// Line 494, Address: 0x230b64, Func Offset: 0x94
	// Line 495, Address: 0x230b70, Func Offset: 0xa0
	// Line 496, Address: 0x230b7c, Func Offset: 0xac
	// Line 497, Address: 0x230bd8, Func Offset: 0x108
	// Line 498, Address: 0x230c0c, Func Offset: 0x13c
	// Line 499, Address: 0x230c44, Func Offset: 0x174
	// Line 500, Address: 0x230c80, Func Offset: 0x1b0
	// Line 501, Address: 0x230c94, Func Offset: 0x1c4
	// Line 503, Address: 0x230cac, Func Offset: 0x1dc
	// Func End, Address: 0x230cc8, Func Offset: 0x1f8
}

