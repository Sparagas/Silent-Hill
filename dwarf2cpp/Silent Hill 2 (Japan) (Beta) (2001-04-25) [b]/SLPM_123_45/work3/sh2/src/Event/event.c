typedef struct shAttackInfo;
typedef struct _anon0;
typedef struct SPACK_STATIC_DATA;
typedef struct PAD_3D;
typedef struct SPACK_DATA;
typedef struct SPACK_OT_DATA;
typedef union _anon1;
typedef struct _CL_VHIT_WALL;
typedef struct SubCharacter;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _anon2;
typedef struct PAD_2D;
typedef struct _anon3;
typedef struct SubObject;
typedef struct _CL_VHIT_CHARA;
typedef struct PAD_INFO;
typedef struct _CL_VHIT_RESULT;
typedef struct SPACK_ENV_DATA;
typedef union _anon4;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct _anon5;
typedef struct Playing_Info;
typedef struct _SH2_SYS;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct Model_List;
typedef struct _anon6;
typedef struct _anon7;
typedef struct shPlayerWork;
typedef struct shSkelton;
typedef struct _anon8;
typedef struct Event_DoorSound;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct shBattleFight;
typedef struct _anon9;
typedef struct shBattleShot;
typedef struct Item;
typedef struct _VbWVSMATRIX;
typedef struct _anon10;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct _VbSCREENINFO;

typedef void(*type_8)(SubCharacter*);
typedef void(*type_12)(SubCharacter*);
typedef void(*type_27)();
typedef int(*type_30)();
typedef void(*type_37)(SubCharacter*);
typedef void(*type_45)(SubCharacter*);

typedef _anon0 type_0[7];
typedef unsigned char type_1[4];
typedef unsigned char type_2[4];
typedef Event_DoorSound type_3[4];
typedef PAD_INFO type_4[10];
typedef int type_5[4];
typedef float type_6[4];
typedef unsigned char type_7[4];
typedef float type_9[4];
typedef float type_10[4][4];
typedef unsigned char type_11[2];
typedef unsigned char type_13[2];
typedef unsigned char type_14[10];
typedef unsigned short type_15[0];
typedef unsigned short type_16[0];
typedef unsigned int type_17[8];
typedef unsigned char type_18[13];
typedef float type_19[4];
typedef float type_20[4][4];
typedef float type_21[4][2];
typedef float type_22[4][6];
typedef float type_23[2];
typedef float type_24[2][4];
typedef char type_25[4];
typedef unsigned char type_26[2];
typedef int type_28[6];
typedef unsigned char type_29[34];
typedef unsigned int type_31[256];
typedef float type_32[4][2];
typedef unsigned int type_33[32];
typedef unsigned char type_34[4];
typedef int type_35[4][2];
typedef char type_36[4];
typedef unsigned int type_38[2];
typedef char type_39[4];
typedef unsigned short type_40[11];
typedef float type_41[4];
typedef shAttackInfo type_42[46];
typedef float type_43[2];
typedef float type_44[2][6];
typedef unsigned char type_46[4];
typedef unsigned char type_47[4];
typedef unsigned short type_48[3];
typedef unsigned char type_49[10];

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

struct _anon0
{
	short item;
	short msg;
	int chara_id;
};

struct SPACK_STATIC_DATA
{
	unsigned short GifNLOOP;
	unsigned short DmaQwc;
	unsigned int PRE_PRIM_FLG_NREG;
	unsigned long REGS;
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

union _anon1
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
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
	_anon6 mat;
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

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
};

struct _anon2
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
};

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
};

struct _anon3
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
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
	_anon6 mat;
	void(*function)(SubCharacter*);
	void(*effecter_function)(SubCharacter*);
	SubObject* pre;
	SubObject* next;
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

struct _CL_VHIT_RESULT
{
	int kind;
	_anon4 hobj;
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

union _anon4
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
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

struct _anon5
{
	float x;
	float y;
	float z;
	float w;
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

struct _SH2_SYS
{
	unsigned int step[8];
	int main_status;
	unsigned int boot_first;
	unsigned int soft_reset;
	unsigned int frame_cnt;
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
	float d[4][4];
};

struct _anon7
{
	float pos_x;
	float pos_y;
	float pos_z;
	float rot_y;
	float view_x;
	float view_z;
	float rear_x;
	float rear_z;
	float pad;
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

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon6 src_m;
	_anon5 src_t;
	_anon6 des_m;
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
	short kind;
	short id;
	int pos_x;
	int pos_z;
	short pos_y;
	short rot_y;
	short status;
	short condition;
};

struct Event_DoorSound
{
	short open;
	short close;
	short unlock;
	short jam;
	short lock;
	short pad;
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct _anon9
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

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
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

struct _VbWVSMATRIX
{
	float wvm[4][4];
	float vsm[4][4];
	float wsm[4][4];
};

struct _anon10
{
	_anon3* ev_list;
	unsigned char* ev_pos;
	int(*ev_prog)();
	_anon2* gi_list;
	Model_List* mdl_list;
	_anon8* en_list;
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

struct _VbSCREENINFO
{
	float scr_z;
	float sx;
	float sy;
	float cx;
	float cy;
	float zmin;
	float zmax;
	float nearz;
	float farz;
};

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
Event_DoorSound door_se[4];
_anon9 game_flag;
int ev_cancel;
int ev_active;
int ev_s_step;
int ev_p_step;
int ev_e_step;
int ev_m_step;
_anon10* stage;
Item item;
_SH2_SYS Sh2sys;
float dtf;
shPlayerWork sh2jms;
SPACK_DATA spack;
_VbSCREENINFO VbScreenInfo;
_VbWVSMATRIX VbWvsMatrix;
float connect_pos[4];
unsigned short msg_buffer[0];
int ev_prog_flag_set;
unsigned short msg_station[0];
Playing_Info playing;
float ev_cursor_y;
float ev_cursor_x;
float ev_filter;
float ev_timer;

void FlagInit();
void EventProgInit();
void EventMain();
int EventMainStepIsNull();
void EventMainStandard(int ev_act_on);
int EventCheck(int act_on, int use_item, int check_only);
int EventCheckLook(_anon3* el);
int EventCheckLookPoint(float x, float z);
int EventCheckLookLine(float x0, float z0, float x1, float z1);
int EventCheckIn(_anon3* el);
int EventListElement(_anon3* el, int en);
void EventBugCheck(_anon3* el);
void DrawLine(float* p0, float* p1, unsigned char* clr);
float CharToFloat2(char* cp);
float CharToFloat4(char* cp);
int ItemListElement(_anon2* il, int en);
int ItemCheckLookPoint(_anon2* il);
void EventPositionSet(float* pos_v, char* pos_p, int pos_t);
void EventResultMovePosition(int ev_no);
void EventCancel();
void EventExecSubFlagSet(_anon3* el);
int EventExecFlag();
int EventExecMessage();
int EventExecProgram();
int EventExecDoor();
int EventExecItem();
int EventExecMove();
int EventExecSave();

// 
// Start address: 0x1ac720
void FlagInit()
{
	int i;
	int work;
	int shuffle[6];
	// Line 132, Address: 0x1ac720, Func Offset: 0
	// Line 139, Address: 0x1ac730, Func Offset: 0x10
	// Line 146, Address: 0x1ac744, Func Offset: 0x24
	// Line 147, Address: 0x1ac76c, Func Offset: 0x4c
	// Line 148, Address: 0x1ac798, Func Offset: 0x78
	// Line 151, Address: 0x1ac7ac, Func Offset: 0x8c
	// Line 152, Address: 0x1ac7b8, Func Offset: 0x98
	// Line 153, Address: 0x1ac7e8, Func Offset: 0xc8
	// Line 154, Address: 0x1ac824, Func Offset: 0x104
	// Line 155, Address: 0x1ac868, Func Offset: 0x148
	// Line 158, Address: 0x1ac87c, Func Offset: 0x15c
	// Line 159, Address: 0x1ac888, Func Offset: 0x168
	// Line 160, Address: 0x1ac8c8, Func Offset: 0x1a8
	// Line 161, Address: 0x1ac8fc, Func Offset: 0x1dc
	// Line 163, Address: 0x1ac96c, Func Offset: 0x24c
	// Line 166, Address: 0x1ac97c, Func Offset: 0x25c
	// Line 167, Address: 0x1ac9a4, Func Offset: 0x284
	// Line 168, Address: 0x1ac9b8, Func Offset: 0x298
	// Line 170, Address: 0x1ac9dc, Func Offset: 0x2bc
	// Line 171, Address: 0x1ac9ec, Func Offset: 0x2cc
	// Line 175, Address: 0x1ac9fc, Func Offset: 0x2dc
	// Line 176, Address: 0x1aca24, Func Offset: 0x304
	// Line 177, Address: 0x1aca30, Func Offset: 0x310
	// Line 178, Address: 0x1aca50, Func Offset: 0x330
	// Line 179, Address: 0x1aca8c, Func Offset: 0x36c
	// Line 180, Address: 0x1acaa8, Func Offset: 0x388
	// Line 184, Address: 0x1acabc, Func Offset: 0x39c
	// Line 185, Address: 0x1acad8, Func Offset: 0x3b8
	// Line 186, Address: 0x1acae4, Func Offset: 0x3c4
	// Line 187, Address: 0x1acb44, Func Offset: 0x424
	// Func End, Address: 0x1acb5c, Func Offset: 0x43c
}

// 
// Start address: 0x1acb60
void EventProgInit()
{
	// Line 197, Address: 0x1acb60, Func Offset: 0
	// Line 198, Address: 0x1acb80, Func Offset: 0x20
	// Line 199, Address: 0x1acb8c, Func Offset: 0x2c
	// Line 200, Address: 0x1acb94, Func Offset: 0x34
	// Func End, Address: 0x1acb9c, Func Offset: 0x3c
}

// 
// Start address: 0x1acba0
void EventMain()
{
	// Line 205, Address: 0x1acba0, Func Offset: 0
	// Line 207, Address: 0x1acba8, Func Offset: 0x8
	// Line 209, Address: 0x1acbd0, Func Offset: 0x30
	// Line 210, Address: 0x1acbe0, Func Offset: 0x40
	// Line 211, Address: 0x1acc14, Func Offset: 0x74
	// Line 212, Address: 0x1acc30, Func Offset: 0x90
	// Line 213, Address: 0x1acc64, Func Offset: 0xc4
	// Line 214, Address: 0x1acc80, Func Offset: 0xe0
	// Line 215, Address: 0x1accb4, Func Offset: 0x114
	// Line 216, Address: 0x1accdc, Func Offset: 0x13c
	// Line 218, Address: 0x1acce4, Func Offset: 0x144
	// Line 221, Address: 0x1accf0, Func Offset: 0x150
	// Line 222, Address: 0x1acd04, Func Offset: 0x164
	// Line 223, Address: 0x1acd18, Func Offset: 0x178
	// Line 224, Address: 0x1acd38, Func Offset: 0x198
	// Line 228, Address: 0x1acd40, Func Offset: 0x1a0
	// Line 231, Address: 0x1acd48, Func Offset: 0x1a8
	// Line 232, Address: 0x1acd70, Func Offset: 0x1d0
	// Func End, Address: 0x1acd80, Func Offset: 0x1e0
}

// 
// Start address: 0x1acd80
int EventMainStepIsNull()
{
	// Line 236, Address: 0x1acd80, Func Offset: 0
	// Line 237, Address: 0x1acd90, Func Offset: 0x10
	// Func End, Address: 0x1acd98, Func Offset: 0x18
}

// 
// Start address: 0x1acda0
void EventMainStandard(int ev_act_on)
{
	int ret;
	int use_item;
	int st;
	_anon3* el;
	// Line 242, Address: 0x1acda0, Func Offset: 0
	// Line 250, Address: 0x1acdc0, Func Offset: 0x20
	// Line 254, Address: 0x1acdc8, Func Offset: 0x28
	// Line 257, Address: 0x1acdd8, Func Offset: 0x38
	// Line 259, Address: 0x1ace08, Func Offset: 0x68
	// Line 261, Address: 0x1ace28, Func Offset: 0x88
	// Line 263, Address: 0x1ace38, Func Offset: 0x98
	// Line 268, Address: 0x1ace80, Func Offset: 0xe0
	// Line 271, Address: 0x1ace94, Func Offset: 0xf4
	// Line 272, Address: 0x1acea8, Func Offset: 0x108
	// Line 273, Address: 0x1acec4, Func Offset: 0x124
	// Line 274, Address: 0x1aced8, Func Offset: 0x138
	// Line 276, Address: 0x1acf00, Func Offset: 0x160
	// Line 277, Address: 0x1acf2c, Func Offset: 0x18c
	// Line 279, Address: 0x1acf58, Func Offset: 0x1b8
	// Line 280, Address: 0x1acf84, Func Offset: 0x1e4
	// Line 283, Address: 0x1acfb0, Func Offset: 0x210
	// Line 284, Address: 0x1acfdc, Func Offset: 0x23c
	// Line 286, Address: 0x1ad000, Func Offset: 0x260
	// Line 287, Address: 0x1ad008, Func Offset: 0x268
	// Line 288, Address: 0x1ad02c, Func Offset: 0x28c
	// Line 291, Address: 0x1ad030, Func Offset: 0x290
	// Line 292, Address: 0x1ad060, Func Offset: 0x2c0
	// Line 293, Address: 0x1ad074, Func Offset: 0x2d4
	// Line 294, Address: 0x1ad088, Func Offset: 0x2e8
	// Line 295, Address: 0x1ad09c, Func Offset: 0x2fc
	// Line 296, Address: 0x1ad0b0, Func Offset: 0x310
	// Line 297, Address: 0x1ad0c4, Func Offset: 0x324
	// Line 298, Address: 0x1ad0d8, Func Offset: 0x338
	// Line 300, Address: 0x1ad0ec, Func Offset: 0x34c
	// Line 303, Address: 0x1ad0f0, Func Offset: 0x350
	// Line 304, Address: 0x1ad0f8, Func Offset: 0x358
	// Line 305, Address: 0x1ad118, Func Offset: 0x378
	// Line 307, Address: 0x1ad124, Func Offset: 0x384
	// Func End, Address: 0x1ad148, Func Offset: 0x3a8
}

// 
// Start address: 0x1ad150
int EventCheck(int act_on, int use_item, int check_only)
{
	int i;
	int work;
	int kind;
	int cond_st;
	int light_on;
	_anon2* il;
	_anon3* el;
	_anon7 jms;
	// Line 326, Address: 0x1ad150, Func Offset: 0
	// Line 337, Address: 0x1ad188, Func Offset: 0x38
	// Line 338, Address: 0x1ad198, Func Offset: 0x48
	// Line 339, Address: 0x1ad1a8, Func Offset: 0x58
	// Line 340, Address: 0x1ad1b8, Func Offset: 0x68
	// Line 341, Address: 0x1ad1c8, Func Offset: 0x78
	// Line 342, Address: 0x1ad1e8, Func Offset: 0x98
	// Line 343, Address: 0x1ad208, Func Offset: 0xb8
	// Line 344, Address: 0x1ad240, Func Offset: 0xf0
	// Line 346, Address: 0x1ad278, Func Offset: 0x128
	// Line 347, Address: 0x1ad2a4, Func Offset: 0x154
	// Line 350, Address: 0x1ad2b0, Func Offset: 0x160
	// Line 351, Address: 0x1ad2b4, Func Offset: 0x164
	// Line 353, Address: 0x1ad2c8, Func Offset: 0x178
	// Line 354, Address: 0x1ad2e0, Func Offset: 0x190
	// Line 357, Address: 0x1ad308, Func Offset: 0x1b8
	// Line 360, Address: 0x1ad328, Func Offset: 0x1d8
	// Line 363, Address: 0x1ad33c, Func Offset: 0x1ec
	// Line 364, Address: 0x1ad348, Func Offset: 0x1f8
	// Line 368, Address: 0x1ad374, Func Offset: 0x224
	// Line 371, Address: 0x1ad390, Func Offset: 0x240
	// Line 374, Address: 0x1ad398, Func Offset: 0x248
	// Line 376, Address: 0x1ad3c0, Func Offset: 0x270
	// Line 377, Address: 0x1ad3cc, Func Offset: 0x27c
	// Line 381, Address: 0x1ad3d4, Func Offset: 0x284
	// Line 384, Address: 0x1ad3e0, Func Offset: 0x290
	// Line 389, Address: 0x1ad42c, Func Offset: 0x2dc
	// Line 396, Address: 0x1ad430, Func Offset: 0x2e0
	// Line 404, Address: 0x1ad540, Func Offset: 0x3f0
	// Line 411, Address: 0x1ad568, Func Offset: 0x418
	// Line 415, Address: 0x1ad5a4, Func Offset: 0x454
	// Line 416, Address: 0x1ad5bc, Func Offset: 0x46c
	// Line 419, Address: 0x1ad5c4, Func Offset: 0x474
	// Line 422, Address: 0x1ad5dc, Func Offset: 0x48c
	// Line 427, Address: 0x1ad5e4, Func Offset: 0x494
	// Line 431, Address: 0x1ad620, Func Offset: 0x4d0
	// Line 435, Address: 0x1ad64c, Func Offset: 0x4fc
	// Line 436, Address: 0x1ad664, Func Offset: 0x514
	// Line 441, Address: 0x1ad66c, Func Offset: 0x51c
	// Line 443, Address: 0x1ad6a0, Func Offset: 0x550
	// Line 449, Address: 0x1ad6cc, Func Offset: 0x57c
	// Line 451, Address: 0x1ad6e4, Func Offset: 0x594
	// Line 454, Address: 0x1ad6e8, Func Offset: 0x598
	// Line 455, Address: 0x1ad714, Func Offset: 0x5c4
	// Line 461, Address: 0x1ad718, Func Offset: 0x5c8
	// Line 462, Address: 0x1ad73c, Func Offset: 0x5ec
	// Line 465, Address: 0x1ad758, Func Offset: 0x608
	// Line 466, Address: 0x1ad764, Func Offset: 0x614
	// Line 468, Address: 0x1ad770, Func Offset: 0x620
	// Line 473, Address: 0x1ad788, Func Offset: 0x638
	// Line 475, Address: 0x1ad7a8, Func Offset: 0x658
	// Line 477, Address: 0x1ad7c8, Func Offset: 0x678
	// Line 478, Address: 0x1ad7cc, Func Offset: 0x67c
	// Line 480, Address: 0x1ad7e0, Func Offset: 0x690
	// Line 481, Address: 0x1ad7f4, Func Offset: 0x6a4
	// Line 484, Address: 0x1ad800, Func Offset: 0x6b0
	// Line 485, Address: 0x1ad814, Func Offset: 0x6c4
	// Line 489, Address: 0x1ad874, Func Offset: 0x724
	// Line 491, Address: 0x1ad888, Func Offset: 0x738
	// Line 494, Address: 0x1ad89c, Func Offset: 0x74c
	// Line 495, Address: 0x1ad8b4, Func Offset: 0x764
	// Line 496, Address: 0x1ad8c0, Func Offset: 0x770
	// Line 497, Address: 0x1ad8cc, Func Offset: 0x77c
	// Line 498, Address: 0x1ad8d0, Func Offset: 0x780
	// Func End, Address: 0x1ad904, Func Offset: 0x7b4
}

// 
// Start address: 0x1ad910
int EventCheckLook(_anon3* el)
{
	int i;
	int work;
	int pos_type;
	float f_work;
	char* pos_p;
	float p[2][6];
	_anon7 jms;
	// Line 507, Address: 0x1ad910, Func Offset: 0
	// Line 516, Address: 0x1ad984, Func Offset: 0x74
	// Line 517, Address: 0x1ad998, Func Offset: 0x88
	// Line 520, Address: 0x1ad9a8, Func Offset: 0x98
	// Line 521, Address: 0x1ad9b8, Func Offset: 0xa8
	// Line 522, Address: 0x1ada00, Func Offset: 0xf0
	// Line 524, Address: 0x1ada0c, Func Offset: 0xfc
	// Line 526, Address: 0x1ada20, Func Offset: 0x110
	// Line 527, Address: 0x1ada28, Func Offset: 0x118
	// Line 531, Address: 0x1ada60, Func Offset: 0x150
	// Line 532, Address: 0x1ada70, Func Offset: 0x160
	// Line 534, Address: 0x1ada80, Func Offset: 0x170
	// Line 539, Address: 0x1adab8, Func Offset: 0x1a8
	// Line 540, Address: 0x1adabc, Func Offset: 0x1ac
	// Line 541, Address: 0x1adac4, Func Offset: 0x1b4
	// Line 542, Address: 0x1adacc, Func Offset: 0x1bc
	// Line 544, Address: 0x1adb04, Func Offset: 0x1f4
	// Line 545, Address: 0x1adb1c, Func Offset: 0x20c
	// Line 547, Address: 0x1adb24, Func Offset: 0x214
	// Line 548, Address: 0x1adb3c, Func Offset: 0x22c
	// Line 550, Address: 0x1adb44, Func Offset: 0x234
	// Line 551, Address: 0x1adb5c, Func Offset: 0x24c
	// Line 553, Address: 0x1adb64, Func Offset: 0x254
	// Line 556, Address: 0x1adb7c, Func Offset: 0x26c
	// Line 559, Address: 0x1adb84, Func Offset: 0x274
	// Line 560, Address: 0x1adb88, Func Offset: 0x278
	// Line 561, Address: 0x1adb94, Func Offset: 0x284
	// Line 562, Address: 0x1adbbc, Func Offset: 0x2ac
	// Line 563, Address: 0x1adbe4, Func Offset: 0x2d4
	// Line 565, Address: 0x1adbf4, Func Offset: 0x2e4
	// Line 566, Address: 0x1adbf8, Func Offset: 0x2e8
	// Line 567, Address: 0x1adc04, Func Offset: 0x2f4
	// Line 568, Address: 0x1adc50, Func Offset: 0x340
	// Line 569, Address: 0x1adc5c, Func Offset: 0x34c
	// Line 570, Address: 0x1adc70, Func Offset: 0x360
	// Line 571, Address: 0x1adc74, Func Offset: 0x364
	// Func End, Address: 0x1adc98, Func Offset: 0x388
}

// 
// Start address: 0x1adca0
int EventCheckLookPoint(float x, float z)
{
	float ang;
	float pos_z;
	float pos_x;
	_anon7 jms;
	// Line 576, Address: 0x1adca0, Func Offset: 0
	// Line 581, Address: 0x1adcf4, Func Offset: 0x54
	// Line 582, Address: 0x1adcfc, Func Offset: 0x5c
	// Line 585, Address: 0x1add04, Func Offset: 0x64
	// Line 586, Address: 0x1add4c, Func Offset: 0xac
	// Line 589, Address: 0x1add58, Func Offset: 0xb8
	// Line 590, Address: 0x1add84, Func Offset: 0xe4
	// Line 593, Address: 0x1add90, Func Offset: 0xf0
	// Line 595, Address: 0x1addbc, Func Offset: 0x11c
	// Line 597, Address: 0x1addec, Func Offset: 0x14c
	// Line 598, Address: 0x1addf0, Func Offset: 0x150
	// Func End, Address: 0x1ade00, Func Offset: 0x160
}

// 
// Start address: 0x1ade00
int EventCheckLookLine(float x0, float z0, float x1, float z1)
{
	int ret;
	_anon7 jms;
	// Line 604, Address: 0x1ade00, Func Offset: 0
	// Line 605, Address: 0x1ade50, Func Offset: 0x50
	// Line 607, Address: 0x1ade54, Func Offset: 0x54
	// Line 610, Address: 0x1ade68, Func Offset: 0x68
	// Line 611, Address: 0x1ade6c, Func Offset: 0x6c
	// Line 612, Address: 0x1ade70, Func Offset: 0x70
	// Line 613, Address: 0x1ade74, Func Offset: 0x74
	// Line 614, Address: 0x1ade78, Func Offset: 0x78
	// Line 621, Address: 0x1ade7c, Func Offset: 0x7c
	// Line 622, Address: 0x1ade80, Func Offset: 0x80
	// Line 623, Address: 0x1ade84, Func Offset: 0x84
	// Line 624, Address: 0x1ade88, Func Offset: 0x88
	// Line 625, Address: 0x1ade8c, Func Offset: 0x8c
	// Line 626, Address: 0x1ade90, Func Offset: 0x90
	// Line 627, Address: 0x1ade94, Func Offset: 0x94
	// Line 628, Address: 0x1ade98, Func Offset: 0x98
	// Line 629, Address: 0x1ade9c, Func Offset: 0x9c
	// Line 630, Address: 0x1adea0, Func Offset: 0xa0
	// Line 632, Address: 0x1adea8, Func Offset: 0xa8
	// Line 634, Address: 0x1adeb0, Func Offset: 0xb0
	// Line 635, Address: 0x1adeb4, Func Offset: 0xb4
	// Line 636, Address: 0x1adeb8, Func Offset: 0xb8
	// Line 638, Address: 0x1adebc, Func Offset: 0xbc
	// Line 639, Address: 0x1adec0, Func Offset: 0xc0
	// Line 640, Address: 0x1adec4, Func Offset: 0xc4
	// Line 642, Address: 0x1adec8, Func Offset: 0xc8
	// Line 643, Address: 0x1adecc, Func Offset: 0xcc
	// Line 648, Address: 0x1aded4, Func Offset: 0xd4
	// Line 649, Address: 0x1aded8, Func Offset: 0xd8
	// Line 651, Address: 0x1adee0, Func Offset: 0xe0
	// Line 688, Address: 0x1adee4, Func Offset: 0xe4
	// Func End, Address: 0x1adef0, Func Offset: 0xf0
}

// 
// Start address: 0x1adef0
int EventCheckIn(_anon3* el)
{
	int i;
	int work;
	int pos_type;
	char* pos_p;
	float f_work;
	float h;
	float w;
	float p[2][4];
	_anon7 jms;
	// Line 700, Address: 0x1adef0, Func Offset: 0
	// Line 709, Address: 0x1adf60, Func Offset: 0x70
	// Line 710, Address: 0x1adf74, Func Offset: 0x84
	// Line 713, Address: 0x1adf84, Func Offset: 0x94
	// Line 714, Address: 0x1adf94, Func Offset: 0xa4
	// Line 715, Address: 0x1adfdc, Func Offset: 0xec
	// Line 717, Address: 0x1adfe8, Func Offset: 0xf8
	// Line 718, Address: 0x1adffc, Func Offset: 0x10c
	// Line 719, Address: 0x1ae00c, Func Offset: 0x11c
	// Line 721, Address: 0x1ae01c, Func Offset: 0x12c
	// Line 722, Address: 0x1ae028, Func Offset: 0x138
	// Line 723, Address: 0x1ae038, Func Offset: 0x148
	// Line 724, Address: 0x1ae048, Func Offset: 0x158
	// Line 725, Address: 0x1ae0b8, Func Offset: 0x1c8
	// Line 726, Address: 0x1ae0c4, Func Offset: 0x1d4
	// Line 729, Address: 0x1ae0d0, Func Offset: 0x1e0
	// Line 730, Address: 0x1ae0e8, Func Offset: 0x1f8
	// Line 732, Address: 0x1ae0ec, Func Offset: 0x1fc
	// Line 733, Address: 0x1ae0f8, Func Offset: 0x208
	// Line 734, Address: 0x1ae120, Func Offset: 0x230
	// Line 735, Address: 0x1ae148, Func Offset: 0x258
	// Line 736, Address: 0x1ae1a8, Func Offset: 0x2b8
	// Line 737, Address: 0x1ae1b4, Func Offset: 0x2c4
	// Line 738, Address: 0x1ae1c4, Func Offset: 0x2d4
	// Line 739, Address: 0x1ae214, Func Offset: 0x324
	// Line 741, Address: 0x1ae220, Func Offset: 0x330
	// Line 742, Address: 0x1ae224, Func Offset: 0x334
	// Func End, Address: 0x1ae244, Func Offset: 0x354
}

// 
// Start address: 0x1ae250
int EventListElement(_anon3* el, int en)
{
	// Line 752, Address: 0x1ae250, Func Offset: 0
	// Line 753, Address: 0x1ae25c, Func Offset: 0xc
	// Line 755, Address: 0x1ae288, Func Offset: 0x38
	// Line 757, Address: 0x1ae2a0, Func Offset: 0x50
	// Line 759, Address: 0x1ae2b8, Func Offset: 0x68
	// Line 761, Address: 0x1ae2d0, Func Offset: 0x80
	// Line 763, Address: 0x1ae2e8, Func Offset: 0x98
	// Line 765, Address: 0x1ae300, Func Offset: 0xb0
	// Line 767, Address: 0x1ae314, Func Offset: 0xc4
	// Line 769, Address: 0x1ae32c, Func Offset: 0xdc
	// Line 771, Address: 0x1ae344, Func Offset: 0xf4
	// Line 773, Address: 0x1ae35c, Func Offset: 0x10c
	// Line 775, Address: 0x1ae374, Func Offset: 0x124
	// Line 777, Address: 0x1ae38c, Func Offset: 0x13c
	// Line 779, Address: 0x1ae3a4, Func Offset: 0x154
	// Line 781, Address: 0x1ae3bc, Func Offset: 0x16c
	// Line 783, Address: 0x1ae3d4, Func Offset: 0x184
	// Line 785, Address: 0x1ae3ec, Func Offset: 0x19c
	// Line 787, Address: 0x1ae404, Func Offset: 0x1b4
	// Line 789, Address: 0x1ae41c, Func Offset: 0x1cc
	// Line 791, Address: 0x1ae434, Func Offset: 0x1e4
	// Line 793, Address: 0x1ae44c, Func Offset: 0x1fc
	// Line 795, Address: 0x1ae464, Func Offset: 0x214
	// Line 797, Address: 0x1ae47c, Func Offset: 0x22c
	// Line 800, Address: 0x1ae490, Func Offset: 0x240
	// Line 801, Address: 0x1ae494, Func Offset: 0x244
	// Func End, Address: 0x1ae4a0, Func Offset: 0x250
}

// 
// Start address: 0x1ae4a0
void EventBugCheck(_anon3* el)
{
	int i;
	int work;
	int pos_type;
	char* position;
	float len;
	float h;
	float w;
	float p[4][6];
	unsigned char c[4];
	_anon7 jms;
	// Line 810, Address: 0x1ae4a0, Func Offset: 0
	// Line 819, Address: 0x1ae50c, Func Offset: 0x6c
	// Line 820, Address: 0x1ae53c, Func Offset: 0x9c
	// Line 821, Address: 0x1ae550, Func Offset: 0xb0
	// Line 822, Address: 0x1ae564, Func Offset: 0xc4
	// Line 824, Address: 0x1ae574, Func Offset: 0xd4
	// Line 825, Address: 0x1ae57c, Func Offset: 0xdc
	// Line 826, Address: 0x1ae580, Func Offset: 0xe0
	// Line 827, Address: 0x1ae588, Func Offset: 0xe8
	// Line 828, Address: 0x1ae590, Func Offset: 0xf0
	// Line 829, Address: 0x1ae5a0, Func Offset: 0x100
	// Line 830, Address: 0x1ae5b0, Func Offset: 0x110
	// Line 832, Address: 0x1ae5c0, Func Offset: 0x120
	// Line 837, Address: 0x1ae61c, Func Offset: 0x17c
	// Line 838, Address: 0x1ae62c, Func Offset: 0x18c
	// Line 839, Address: 0x1ae664, Func Offset: 0x1c4
	// Line 840, Address: 0x1ae668, Func Offset: 0x1c8
	// Line 843, Address: 0x1ae670, Func Offset: 0x1d0
	// Line 844, Address: 0x1ae674, Func Offset: 0x1d4
	// Line 848, Address: 0x1ae67c, Func Offset: 0x1dc
	// Line 855, Address: 0x1ae680, Func Offset: 0x1e0
	// Line 857, Address: 0x1ae6e4, Func Offset: 0x244
	// Line 858, Address: 0x1ae6f8, Func Offset: 0x258
	// Line 859, Address: 0x1ae70c, Func Offset: 0x26c
	// Line 860, Address: 0x1ae720, Func Offset: 0x280
	// Line 863, Address: 0x1ae734, Func Offset: 0x294
	// Line 864, Address: 0x1ae738, Func Offset: 0x298
	// Line 865, Address: 0x1ae744, Func Offset: 0x2a4
	// Line 866, Address: 0x1ae76c, Func Offset: 0x2cc
	// Line 867, Address: 0x1ae77c, Func Offset: 0x2dc
	// Line 868, Address: 0x1ae7a4, Func Offset: 0x304
	// Line 869, Address: 0x1ae7b8, Func Offset: 0x318
	// Line 872, Address: 0x1ae7c0, Func Offset: 0x320
	// Line 873, Address: 0x1ae7d0, Func Offset: 0x330
	// Line 874, Address: 0x1ae7dc, Func Offset: 0x33c
	// Line 875, Address: 0x1ae7ec, Func Offset: 0x34c
	// Line 876, Address: 0x1ae7f4, Func Offset: 0x354
	// Line 877, Address: 0x1ae804, Func Offset: 0x364
	// Line 878, Address: 0x1ae814, Func Offset: 0x374
	// Line 879, Address: 0x1ae81c, Func Offset: 0x37c
	// Line 883, Address: 0x1ae824, Func Offset: 0x384
	// Line 884, Address: 0x1ae830, Func Offset: 0x390
	// Line 885, Address: 0x1ae858, Func Offset: 0x3b8
	// Line 886, Address: 0x1ae880, Func Offset: 0x3e0
	// Line 888, Address: 0x1ae894, Func Offset: 0x3f4
	// Line 890, Address: 0x1ae898, Func Offset: 0x3f8
	// Line 892, Address: 0x1ae8cc, Func Offset: 0x42c
	// Line 893, Address: 0x1ae8dc, Func Offset: 0x43c
	// Line 894, Address: 0x1ae8f4, Func Offset: 0x454
	// Line 895, Address: 0x1ae910, Func Offset: 0x470
	// Line 896, Address: 0x1ae92c, Func Offset: 0x48c
	// Line 897, Address: 0x1ae944, Func Offset: 0x4a4
	// Line 898, Address: 0x1ae958, Func Offset: 0x4b8
	// Line 899, Address: 0x1ae96c, Func Offset: 0x4cc
	// Line 902, Address: 0x1ae974, Func Offset: 0x4d4
	// Line 903, Address: 0x1ae9bc, Func Offset: 0x51c
	// Line 908, Address: 0x1ae9c4, Func Offset: 0x524
	// Line 909, Address: 0x1ae9d0, Func Offset: 0x530
	// Line 910, Address: 0x1ae9e0, Func Offset: 0x540
	// Line 911, Address: 0x1aea18, Func Offset: 0x578
	// Line 913, Address: 0x1aea2c, Func Offset: 0x58c
	// Line 915, Address: 0x1aea30, Func Offset: 0x590
	// Line 916, Address: 0x1aea38, Func Offset: 0x598
	// Line 917, Address: 0x1aea40, Func Offset: 0x5a0
	// Line 918, Address: 0x1aea48, Func Offset: 0x5a8
	// Line 919, Address: 0x1aea50, Func Offset: 0x5b0
	// Line 920, Address: 0x1aea58, Func Offset: 0x5b8
	// Line 921, Address: 0x1aea68, Func Offset: 0x5c8
	// Line 922, Address: 0x1aea70, Func Offset: 0x5d0
	// Line 923, Address: 0x1aea80, Func Offset: 0x5e0
	// Line 924, Address: 0x1aea84, Func Offset: 0x5e4
	// Line 925, Address: 0x1aea8c, Func Offset: 0x5ec
	// Line 926, Address: 0x1aea94, Func Offset: 0x5f4
	// Line 927, Address: 0x1aeaa8, Func Offset: 0x608
	// Func End, Address: 0x1aeacc, Func Offset: 0x62c
}

// 
// Start address: 0x1aead0
void DrawLine(float* p0, float* p1, unsigned char* clr)
{
	int i;
	unsigned char fog;
	unsigned int work;
	float zn;
	int iv[4][2];
	float fv[4][2];
	// Line 934, Address: 0x1aead0, Func Offset: 0
	// Line 942, Address: 0x1aeae4, Func Offset: 0x14
	// Line 943, Address: 0x1aeafc, Func Offset: 0x2c
	// Line 945, Address: 0x1aeb14, Func Offset: 0x44
	// Line 946, Address: 0x1aeb48, Func Offset: 0x78
	// Line 947, Address: 0x1aeb7c, Func Offset: 0xac
	// Line 948, Address: 0x1aeb88, Func Offset: 0xb8
	// Line 949, Address: 0x1aebb4, Func Offset: 0xe4
	// Line 951, Address: 0x1aec40, Func Offset: 0x170
	// Line 952, Address: 0x1aec48, Func Offset: 0x178
	// Line 954, Address: 0x1aec5c, Func Offset: 0x18c
	// Line 955, Address: 0x1aec70, Func Offset: 0x1a0
	// Line 956, Address: 0x1aec8c, Func Offset: 0x1bc
	// Line 958, Address: 0x1aeca0, Func Offset: 0x1d0
	// Line 960, Address: 0x1aecc0, Func Offset: 0x1f0
	// Line 961, Address: 0x1aecdc, Func Offset: 0x20c
	// Line 963, Address: 0x1aed4c, Func Offset: 0x27c
	// Line 964, Address: 0x1aeda4, Func Offset: 0x2d4
	// Line 965, Address: 0x1aedfc, Func Offset: 0x32c
	// Line 966, Address: 0x1aee04, Func Offset: 0x334
	// Func End, Address: 0x1aee1c, Func Offset: 0x34c
}

// 
// Start address: 0x1aee20
float CharToFloat2(char* cp)
{
	int work;
	int coe;
	int exp;
	int sig;
	// Line 971, Address: 0x1aee20, Func Offset: 0
	// Line 977, Address: 0x1aee34, Func Offset: 0x14
	// Line 978, Address: 0x1aee38, Func Offset: 0x18
	// Line 979, Address: 0x1aee48, Func Offset: 0x28
	// Line 981, Address: 0x1aee58, Func Offset: 0x38
	// Line 982, Address: 0x1aee64, Func Offset: 0x44
	// Line 983, Address: 0x1aee70, Func Offset: 0x50
	// Line 986, Address: 0x1aee78, Func Offset: 0x58
	// Line 987, Address: 0x1aee7c, Func Offset: 0x5c
	// Line 988, Address: 0x1aee80, Func Offset: 0x60
	// Line 990, Address: 0x1aee94, Func Offset: 0x74
	// Line 991, Address: 0x1aee9c, Func Offset: 0x7c
	// Func End, Address: 0x1aeeb4, Func Offset: 0x94
}

// 
// Start address: 0x1aeec0
float CharToFloat4(char* cp)
{
	char c_work[4];
	// Line 996, Address: 0x1aeec0, Func Offset: 0
	// Line 999, Address: 0x1aeec8, Func Offset: 0x8
	// Line 1000, Address: 0x1aeed4, Func Offset: 0x14
	// Line 1001, Address: 0x1aeee0, Func Offset: 0x20
	// Line 1002, Address: 0x1aeeec, Func Offset: 0x2c
	// Line 1004, Address: 0x1aeef8, Func Offset: 0x38
	// Line 1005, Address: 0x1aef00, Func Offset: 0x40
	// Func End, Address: 0x1aef0c, Func Offset: 0x4c
}

// 
// Start address: 0x1aef10
int ItemListElement(_anon2* il, int en)
{
	// Line 1015, Address: 0x1aef10, Func Offset: 0
	// Line 1016, Address: 0x1aef1c, Func Offset: 0xc
	// Line 1017, Address: 0x1aef54, Func Offset: 0x44
	// Line 1018, Address: 0x1aef6c, Func Offset: 0x5c
	// Line 1019, Address: 0x1aef84, Func Offset: 0x74
	// Line 1020, Address: 0x1aef9c, Func Offset: 0x8c
	// Line 1022, Address: 0x1aefb0, Func Offset: 0xa0
	// Line 1023, Address: 0x1aefb4, Func Offset: 0xa4
	// Func End, Address: 0x1aefc0, Func Offset: 0xb0
}

// 
// Start address: 0x1aefc0
int ItemCheckLookPoint(_anon2* il)
{
	float ang;
	float pos_z;
	float pos_y;
	float pos_x;
	_anon7 jms;
	// Line 1030, Address: 0x1aefc0, Func Offset: 0
	// Line 1037, Address: 0x1af01c, Func Offset: 0x5c
	// Line 1038, Address: 0x1af028, Func Offset: 0x68
	// Line 1039, Address: 0x1af068, Func Offset: 0xa8
	// Line 1041, Address: 0x1af074, Func Offset: 0xb4
	// Line 1042, Address: 0x1af080, Func Offset: 0xc0
	// Line 1045, Address: 0x1af08c, Func Offset: 0xcc
	// Line 1046, Address: 0x1af0d4, Func Offset: 0x114
	// Line 1049, Address: 0x1af0e0, Func Offset: 0x120
	// Line 1050, Address: 0x1af10c, Func Offset: 0x14c
	// Line 1053, Address: 0x1af118, Func Offset: 0x158
	// Line 1055, Address: 0x1af148, Func Offset: 0x188
	// Line 1057, Address: 0x1af178, Func Offset: 0x1b8
	// Line 1058, Address: 0x1af17c, Func Offset: 0x1bc
	// Func End, Address: 0x1af190, Func Offset: 0x1d0
}

// 
// Start address: 0x1af190
void EventPositionSet(float* pos_v, char* pos_p, int pos_t)
{
	// Line 1065, Address: 0x1af190, Func Offset: 0
	// Line 1066, Address: 0x1af1a4, Func Offset: 0x14
	// Line 1067, Address: 0x1af1b8, Func Offset: 0x28
	// Line 1068, Address: 0x1af1d0, Func Offset: 0x40
	// Line 1069, Address: 0x1af1e8, Func Offset: 0x58
	// Line 1071, Address: 0x1af230, Func Offset: 0xa0
	// Line 1072, Address: 0x1af264, Func Offset: 0xd4
	// Line 1074, Address: 0x1af26c, Func Offset: 0xdc
	// Line 1075, Address: 0x1af2a0, Func Offset: 0x110
	// Line 1077, Address: 0x1af2a8, Func Offset: 0x118
	// Line 1078, Address: 0x1af2d8, Func Offset: 0x148
	// Line 1080, Address: 0x1af2e0, Func Offset: 0x150
	// Line 1081, Address: 0x1af310, Func Offset: 0x180
	// Line 1083, Address: 0x1af318, Func Offset: 0x188
	// Line 1084, Address: 0x1af34c, Func Offset: 0x1bc
	// Line 1087, Address: 0x1af37c, Func Offset: 0x1ec
	// Func End, Address: 0x1af38c, Func Offset: 0x1fc
}

// 
// Start address: 0x1af390
void EventResultMovePosition(int ev_no)
{
	float rot;
	float f_work;
	int pos_type;
	char* pos;
	_anon3* el;
	float mv_pos[4];
	// Line 1098, Address: 0x1af390, Func Offset: 0
	// Line 1106, Address: 0x1af3a8, Func Offset: 0x18
	// Line 1107, Address: 0x1af3bc, Func Offset: 0x2c
	// Line 1108, Address: 0x1af3dc, Func Offset: 0x4c
	// Line 1110, Address: 0x1af3f0, Func Offset: 0x60
	// Line 1111, Address: 0x1af3f8, Func Offset: 0x68
	// Line 1112, Address: 0x1af408, Func Offset: 0x78
	// Line 1113, Address: 0x1af418, Func Offset: 0x88
	// Line 1114, Address: 0x1af428, Func Offset: 0x98
	// Line 1115, Address: 0x1af434, Func Offset: 0xa4
	// Line 1120, Address: 0x1af45c, Func Offset: 0xcc
	// Line 1121, Address: 0x1af484, Func Offset: 0xf4
	// Line 1122, Address: 0x1af49c, Func Offset: 0x10c
	// Line 1123, Address: 0x1af4a0, Func Offset: 0x110
	// Line 1126, Address: 0x1af4a8, Func Offset: 0x118
	// Line 1127, Address: 0x1af4d0, Func Offset: 0x140
	// Line 1128, Address: 0x1af4e8, Func Offset: 0x158
	// Line 1129, Address: 0x1af4f4, Func Offset: 0x164
	// Line 1132, Address: 0x1af4fc, Func Offset: 0x16c
	// Line 1133, Address: 0x1af514, Func Offset: 0x184
	// Line 1134, Address: 0x1af53c, Func Offset: 0x1ac
	// Line 1135, Address: 0x1af548, Func Offset: 0x1b8
	// Line 1138, Address: 0x1af550, Func Offset: 0x1c0
	// Line 1139, Address: 0x1af568, Func Offset: 0x1d8
	// Line 1140, Address: 0x1af590, Func Offset: 0x200
	// Line 1141, Address: 0x1af59c, Func Offset: 0x20c
	// Line 1144, Address: 0x1af5a4, Func Offset: 0x214
	// Line 1145, Address: 0x1af5cc, Func Offset: 0x23c
	// Line 1146, Address: 0x1af5f4, Func Offset: 0x264
	// Line 1149, Address: 0x1af644, Func Offset: 0x2b4
	// Line 1150, Address: 0x1af66c, Func Offset: 0x2dc
	// Line 1151, Address: 0x1af694, Func Offset: 0x304
	// Line 1160, Address: 0x1af6a8, Func Offset: 0x318
	// Line 1161, Address: 0x1af6b4, Func Offset: 0x324
	// Line 1162, Address: 0x1af6c0, Func Offset: 0x330
	// Line 1163, Address: 0x1af6cc, Func Offset: 0x33c
	// Line 1164, Address: 0x1af6d4, Func Offset: 0x344
	// Func End, Address: 0x1af6f4, Func Offset: 0x364
}

// 
// Start address: 0x1af700
void EventCancel()
{
	// Line 1177, Address: 0x1af700, Func Offset: 0
	// Line 1178, Address: 0x1af70c, Func Offset: 0xc
	// Func End, Address: 0x1af714, Func Offset: 0x14
}

// 
// Start address: 0x1af720
void EventExecSubFlagSet(_anon3* el)
{
	int flg;
	// Line 1187, Address: 0x1af720, Func Offset: 0
	// Line 1190, Address: 0x1af730, Func Offset: 0x10
	// Line 1191, Address: 0x1af744, Func Offset: 0x24
	// Line 1192, Address: 0x1af74c, Func Offset: 0x2c
	// Line 1193, Address: 0x1af764, Func Offset: 0x44
	// Line 1194, Address: 0x1af7b4, Func Offset: 0x94
	// Line 1197, Address: 0x1af7e0, Func Offset: 0xc0
	// Line 1198, Address: 0x1af7f4, Func Offset: 0xd4
	// Line 1199, Address: 0x1af7fc, Func Offset: 0xdc
	// Line 1200, Address: 0x1af814, Func Offset: 0xf4
	// Line 1201, Address: 0x1af864, Func Offset: 0x144
	// Line 1203, Address: 0x1af890, Func Offset: 0x170
	// Func End, Address: 0x1af8a4, Func Offset: 0x184
}

// 
// Start address: 0x1af8b0
int EventExecFlag()
{
	int fl;
	int st;
	_anon3* el;
	// Line 1212, Address: 0x1af8b0, Func Offset: 0
	// Line 1217, Address: 0x1af8c4, Func Offset: 0x14
	// Line 1218, Address: 0x1af8e0, Func Offset: 0x30
	// Line 1219, Address: 0x1af8f4, Func Offset: 0x44
	// Line 1220, Address: 0x1af908, Func Offset: 0x58
	// Line 1221, Address: 0x1af944, Func Offset: 0x94
	// Line 1222, Address: 0x1af974, Func Offset: 0xc4
	// Line 1224, Address: 0x1af980, Func Offset: 0xd0
	// Line 1225, Address: 0x1af984, Func Offset: 0xd4
	// Func End, Address: 0x1af9a0, Func Offset: 0xf0
}

// 
// Start address: 0x1af9a0
int EventExecMessage()
{
	int flg;
	int msg;
	_anon3* el;
	// Line 1235, Address: 0x1af9a0, Func Offset: 0
	// Line 1240, Address: 0x1af9b4, Func Offset: 0x14
	// Line 1241, Address: 0x1af9c4, Func Offset: 0x24
	// Line 1242, Address: 0x1af9e0, Func Offset: 0x40
	// Line 1244, Address: 0x1af9f4, Func Offset: 0x54
	// Line 1245, Address: 0x1afa08, Func Offset: 0x68
	// Line 1246, Address: 0x1afa1c, Func Offset: 0x7c
	// Line 1247, Address: 0x1afa50, Func Offset: 0xb0
	// Line 1248, Address: 0x1afa5c, Func Offset: 0xbc
	// Line 1249, Address: 0x1afa70, Func Offset: 0xd0
	// Line 1255, Address: 0x1afa8c, Func Offset: 0xec
	// Line 1256, Address: 0x1afab0, Func Offset: 0x110
	// Line 1257, Address: 0x1afab8, Func Offset: 0x118
	// Line 1258, Address: 0x1afacc, Func Offset: 0x12c
	// Line 1260, Address: 0x1afad8, Func Offset: 0x138
	// Line 1261, Address: 0x1afadc, Func Offset: 0x13c
	// Func End, Address: 0x1afaf8, Func Offset: 0x158
}

// 
// Start address: 0x1afb00
int EventExecProgram()
{
	int prog;
	int flg;
	_anon3* el;
	// Line 1270, Address: 0x1afb00, Func Offset: 0
	// Line 1275, Address: 0x1afb14, Func Offset: 0x14
	// Line 1276, Address: 0x1afb30, Func Offset: 0x30
	// Line 1277, Address: 0x1afb40, Func Offset: 0x40
	// Line 1278, Address: 0x1afb4c, Func Offset: 0x4c
	// Line 1279, Address: 0x1afb58, Func Offset: 0x58
	// Line 1282, Address: 0x1afb74, Func Offset: 0x74
	// Line 1283, Address: 0x1afb88, Func Offset: 0x88
	// Line 1284, Address: 0x1afbb0, Func Offset: 0xb0
	// Line 1285, Address: 0x1afbc0, Func Offset: 0xc0
	// Line 1286, Address: 0x1afbd4, Func Offset: 0xd4
	// Line 1288, Address: 0x1afc08, Func Offset: 0x108
	// Line 1290, Address: 0x1afc14, Func Offset: 0x114
	// Line 1291, Address: 0x1afc18, Func Offset: 0x118
	// Func End, Address: 0x1afc34, Func Offset: 0x134
}

// 
// Start address: 0x1afc40
int EventExecDoor()
{
	int fl;
	int se;
	int msg;
	int st;
	int pos_t;
	char* pos_p;
	float pos_v[4];
	_anon3* el;
	// Line 1301, Address: 0x1afc40, Func Offset: 0
	// Line 1311, Address: 0x1afc64, Func Offset: 0x24
	// Line 1312, Address: 0x1afc74, Func Offset: 0x34
	// Line 1313, Address: 0x1afc90, Func Offset: 0x50
	// Line 1314, Address: 0x1afca4, Func Offset: 0x64
	// Line 1315, Address: 0x1afcb8, Func Offset: 0x78
	// Line 1316, Address: 0x1afcd8, Func Offset: 0x98
	// Line 1317, Address: 0x1afcec, Func Offset: 0xac
	// Line 1318, Address: 0x1afd00, Func Offset: 0xc0
	// Line 1320, Address: 0x1afd18, Func Offset: 0xd8
	// Line 1322, Address: 0x1afd24, Func Offset: 0xe4
	// Line 1323, Address: 0x1afd38, Func Offset: 0xf8
	// Line 1324, Address: 0x1afd60, Func Offset: 0x120
	// Line 1325, Address: 0x1afd74, Func Offset: 0x134
	// Line 1326, Address: 0x1afdb0, Func Offset: 0x170
	// Line 1327, Address: 0x1afdc4, Func Offset: 0x184
	// Line 1328, Address: 0x1afdd8, Func Offset: 0x198
	// Line 1329, Address: 0x1afe00, Func Offset: 0x1c0
	// Line 1330, Address: 0x1afe0c, Func Offset: 0x1cc
	// Line 1331, Address: 0x1afe28, Func Offset: 0x1e8
	// Line 1332, Address: 0x1afe3c, Func Offset: 0x1fc
	// Line 1333, Address: 0x1afe78, Func Offset: 0x238
	// Line 1334, Address: 0x1afe80, Func Offset: 0x240
	// Line 1335, Address: 0x1afe94, Func Offset: 0x254
	// Line 1337, Address: 0x1afed0, Func Offset: 0x290
	// Line 1338, Address: 0x1afee4, Func Offset: 0x2a4
	// Line 1339, Address: 0x1aff18, Func Offset: 0x2d8
	// Line 1340, Address: 0x1aff24, Func Offset: 0x2e4
	// Line 1341, Address: 0x1aff38, Func Offset: 0x2f8
	// Line 1345, Address: 0x1aff54, Func Offset: 0x314
	// Line 1346, Address: 0x1aff78, Func Offset: 0x338
	// Line 1347, Address: 0x1aff80, Func Offset: 0x340
	// Line 1348, Address: 0x1aff94, Func Offset: 0x354
	// Line 1350, Address: 0x1affa0, Func Offset: 0x360
	// Line 1351, Address: 0x1affa4, Func Offset: 0x364
	// Func End, Address: 0x1affd0, Func Offset: 0x390
}

// 
// Start address: 0x1affd0
int EventExecItem()
{
	int kind;
	_anon2* il;
	_anon0 eei_data[7];
	// Line 1361, Address: 0x1affd0, Func Offset: 0
	// Line 1379, Address: 0x1affe0, Func Offset: 0x10
	// Line 1381, Address: 0x1b0010, Func Offset: 0x40
	// Line 1382, Address: 0x1b0030, Func Offset: 0x60
	// Line 1383, Address: 0x1b0044, Func Offset: 0x74
	// Line 1385, Address: 0x1b007c, Func Offset: 0xac
	// Line 1386, Address: 0x1b0088, Func Offset: 0xb8
	// Line 1387, Address: 0x1b00a4, Func Offset: 0xd4
	// Line 1388, Address: 0x1b00ac, Func Offset: 0xdc
	// Line 1389, Address: 0x1b00b8, Func Offset: 0xe8
	// Line 1391, Address: 0x1b00d4, Func Offset: 0x104
	// Line 1394, Address: 0x1b00dc, Func Offset: 0x10c
	// Line 1395, Address: 0x1b00ec, Func Offset: 0x11c
	// Line 1396, Address: 0x1b0108, Func Offset: 0x138
	// Line 1397, Address: 0x1b0120, Func Offset: 0x150
	// Line 1398, Address: 0x1b0130, Func Offset: 0x160
	// Line 1400, Address: 0x1b014c, Func Offset: 0x17c
	// Line 1403, Address: 0x1b0154, Func Offset: 0x184
	// Line 1404, Address: 0x1b0174, Func Offset: 0x1a4
	// Line 1405, Address: 0x1b0188, Func Offset: 0x1b8
	// Line 1406, Address: 0x1b01dc, Func Offset: 0x20c
	// Line 1407, Address: 0x1b0200, Func Offset: 0x230
	// Line 1408, Address: 0x1b0228, Func Offset: 0x258
	// Line 1409, Address: 0x1b0244, Func Offset: 0x274
	// Line 1412, Address: 0x1b024c, Func Offset: 0x27c
	// Line 1414, Address: 0x1b026c, Func Offset: 0x29c
	// Line 1415, Address: 0x1b0290, Func Offset: 0x2c0
	// Line 1416, Address: 0x1b0298, Func Offset: 0x2c8
	// Line 1418, Address: 0x1b02dc, Func Offset: 0x30c
	// Line 1419, Address: 0x1b02f8, Func Offset: 0x328
	// Line 1421, Address: 0x1b0330, Func Offset: 0x360
	// Line 1422, Address: 0x1b0340, Func Offset: 0x370
	// Line 1424, Address: 0x1b035c, Func Offset: 0x38c
	// Line 1427, Address: 0x1b0364, Func Offset: 0x394
	// Line 1428, Address: 0x1b038c, Func Offset: 0x3bc
	// Line 1429, Address: 0x1b03a0, Func Offset: 0x3d0
	// Line 1432, Address: 0x1b03a8, Func Offset: 0x3d8
	// Line 1433, Address: 0x1b03bc, Func Offset: 0x3ec
	// Line 1435, Address: 0x1b03c8, Func Offset: 0x3f8
	// Line 1436, Address: 0x1b03cc, Func Offset: 0x3fc
	// Func End, Address: 0x1b03e4, Func Offset: 0x414
}

// 
// Start address: 0x1b03f0
int EventExecMove()
{
	int flg;
	int se;
	int pos_t;
	char* pos_p;
	_anon3* el;
	float pos_v[4];
	short close_se;
	// Line 1446, Address: 0x1b03f0, Func Offset: 0
	// Line 1455, Address: 0x1b040c, Func Offset: 0x1c
	// Line 1457, Address: 0x1b0430, Func Offset: 0x40
	// Line 1458, Address: 0x1b044c, Func Offset: 0x5c
	// Line 1459, Address: 0x1b0458, Func Offset: 0x68
	// Line 1460, Address: 0x1b046c, Func Offset: 0x7c
	// Line 1462, Address: 0x1b04a0, Func Offset: 0xb0
	// Line 1463, Address: 0x1b04b0, Func Offset: 0xc0
	// Line 1464, Address: 0x1b04d0, Func Offset: 0xe0
	// Line 1467, Address: 0x1b04e4, Func Offset: 0xf4
	// Line 1468, Address: 0x1b04fc, Func Offset: 0x10c
	// Line 1469, Address: 0x1b051c, Func Offset: 0x12c
	// Line 1470, Address: 0x1b0530, Func Offset: 0x140
	// Line 1471, Address: 0x1b0570, Func Offset: 0x180
	// Line 1472, Address: 0x1b0594, Func Offset: 0x1a4
	// Line 1473, Address: 0x1b05b4, Func Offset: 0x1c4
	// Line 1474, Address: 0x1b05c8, Func Offset: 0x1d8
	// Line 1475, Address: 0x1b05e0, Func Offset: 0x1f0
	// Line 1476, Address: 0x1b0600, Func Offset: 0x210
	// Line 1477, Address: 0x1b0614, Func Offset: 0x224
	// Line 1478, Address: 0x1b0648, Func Offset: 0x258
	// Line 1479, Address: 0x1b0660, Func Offset: 0x270
	// Line 1480, Address: 0x1b067c, Func Offset: 0x28c
	// Line 1481, Address: 0x1b06a4, Func Offset: 0x2b4
	// Line 1482, Address: 0x1b06d8, Func Offset: 0x2e8
	// Line 1483, Address: 0x1b070c, Func Offset: 0x31c
	// Line 1484, Address: 0x1b0724, Func Offset: 0x334
	// Line 1485, Address: 0x1b0738, Func Offset: 0x348
	// Line 1486, Address: 0x1b0754, Func Offset: 0x364
	// Line 1487, Address: 0x1b0764, Func Offset: 0x374
	// Line 1489, Address: 0x1b076c, Func Offset: 0x37c
	// Line 1490, Address: 0x1b0798, Func Offset: 0x3a8
	// Line 1491, Address: 0x1b07ac, Func Offset: 0x3bc
	// Line 1492, Address: 0x1b07bc, Func Offset: 0x3cc
	// Line 1494, Address: 0x1b07c8, Func Offset: 0x3d8
	// Line 1495, Address: 0x1b07cc, Func Offset: 0x3dc
	// Func End, Address: 0x1b07f0, Func Offset: 0x400
}

// 
// Start address: 0x1b07f0
int EventExecSave()
{
	// Line 1505, Address: 0x1b07f0, Func Offset: 0
	// Line 1506, Address: 0x1b07f8, Func Offset: 0x8
	// Line 1508, Address: 0x1b0834, Func Offset: 0x44
	// Line 1509, Address: 0x1b0848, Func Offset: 0x58
	// Line 1511, Address: 0x1b0884, Func Offset: 0x94
	// Line 1512, Address: 0x1b0898, Func Offset: 0xa8
	// Line 1514, Address: 0x1b08b4, Func Offset: 0xc4
	// Line 1517, Address: 0x1b08bc, Func Offset: 0xcc
	// Line 1518, Address: 0x1b08e0, Func Offset: 0xf0
	// Line 1519, Address: 0x1b08e8, Func Offset: 0xf8
	// Line 1521, Address: 0x1b091c, Func Offset: 0x12c
	// Line 1522, Address: 0x1b0930, Func Offset: 0x140
	// Line 1524, Address: 0x1b094c, Func Offset: 0x15c
	// Line 1527, Address: 0x1b0954, Func Offset: 0x164
	// Line 1528, Address: 0x1b0964, Func Offset: 0x174
	// Line 1529, Address: 0x1b0998, Func Offset: 0x1a8
	// Line 1530, Address: 0x1b09b4, Func Offset: 0x1c4
	// Line 1533, Address: 0x1b09bc, Func Offset: 0x1cc
	// Line 1534, Address: 0x1b09d0, Func Offset: 0x1e0
	// Line 1536, Address: 0x1b09dc, Func Offset: 0x1ec
	// Line 1537, Address: 0x1b09e0, Func Offset: 0x1f0
	// Func End, Address: 0x1b09f0, Func Offset: 0x200
}

