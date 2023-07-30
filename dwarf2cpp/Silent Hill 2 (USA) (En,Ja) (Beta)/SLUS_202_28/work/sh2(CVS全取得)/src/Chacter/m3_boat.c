typedef struct shCharaInfo;
typedef struct _CL_HITPOLY_HEAD;
typedef struct SubCharacter;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef union _anon0;
typedef struct shSkelton;
typedef struct shPlayerWork;
typedef struct _CL_VHIT_RESULT;
typedef union _anon1;
typedef struct shBoatWork;
typedef struct _AnimeInfo;
typedef struct _CL_HITPOLY_PLANE;
typedef struct _anon2;
typedef struct _shLakeWaveInfo;
typedef struct _CL_HITPOLY_COLUMN;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct _USXY;
typedef union shGameKeyData;
typedef struct shClusterAnime;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _SXY;
typedef struct _IXY;
typedef struct SubCharacterDisp;
typedef enum _BOAT_STATUS : unsigned char;
typedef struct shAnime3d;
typedef struct PAD_3D;
typedef struct Playing_Info;
typedef struct shBattleFight;
typedef struct PAD_2D;
typedef struct shBattleShot;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct shBattleArea;
typedef struct PAD_INFO;
typedef struct shBattleInfo;
typedef struct _CL_VHIT_WALL;

typedef void(*type_12)(SubCharacter*);
typedef void(*type_15)(SubCharacter*);
typedef void(*type_18)(SubCharacter*);
typedef void(*type_21)(SubCharacter*);
typedef void(*type_24)(SubCharacter*);
typedef void(*type_37)(SubCharacter*);

typedef _AnimeInfo type_0[5];
typedef unsigned char type_1[20];
typedef unsigned char type_2[2];
typedef unsigned char type_3[2];
typedef int type_4[2];
typedef _CL_HITPOLY_PLANE type_5[12];
typedef int type_6[2];
typedef unsigned char type_7[32];
typedef shAttackInfo type_8[66];
typedef float type_9[4][4];
typedef _AnimeInfo type_10[4];
typedef unsigned char type_11[14];
typedef int type_13[3];
typedef int type_14[3][3];
typedef float type_16[4][2];
typedef unsigned char type_17[69];
typedef float type_19[4];
typedef float type_20[4][4];
typedef unsigned char type_22[4];
typedef unsigned char type_23[2];
typedef float type_25[20];
typedef void* type_26[3];
typedef float type_27[20];
typedef int type_28[4];
typedef unsigned char type_29[14];
typedef float type_30[4];
typedef float type_31[4];
typedef float type_32[2];
typedef PAD_INFO type_33[10];
typedef unsigned char type_34[97];
typedef _AnimeInfo type_35[5];
typedef float type_36[2];
typedef void(*type_38)(SubCharacter*)[3];
typedef unsigned char type_39[4];
typedef float type_40[7];
typedef unsigned char type_41[4];
typedef unsigned int type_42[7];

struct shCharaInfo
{
	_anon2 pos;
	_anon2 rot;
	_anon2 pos_spd;
	_anon2 rot_spd;
	_anon4 mat;
	shSkelton* sk_top;
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
	_anon4 mat;
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

	void BoatSetHeight();
	void BoatCheckSetParameter();
	void BoatCheckStatus();
	void BoatCheckControl();
	void BoatCheckSetFirst();
	void HumanBOTFunction();
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

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon4 src_m;
	_anon2 src_t;
	_anon4 des_m;
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

struct shBoatWork
{
	SubCharacter* boat_p;
	_BOAT_STATUS status_now;
	_BOAT_STATUS status_prev;
	unsigned int sub_st_flg;
	unsigned int anime_st_flg;
	unsigned int anime_pause;
	unsigned char anim_change;
	unsigned char anime_change_now;
	unsigned char anime_change_prev;
	float anime_change_timer;
	short anime_speed;
};

struct _AnimeInfo
{
	unsigned short name;
	unsigned short frame;
	short speed;
	unsigned short start;
	unsigned short end;
	unsigned char loop;
	char pad;
};

struct _CL_HITPOLY_PLANE
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
	float p[4][4];
};

struct _anon2
{
	float x;
	float y;
	float z;
	float w;
};

struct _shLakeWaveInfo
{
	float distance[2];
	float energy;
	float timer;
	char prev;
	char next;
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

struct _USXY
{
	unsigned short x;
	unsigned short y;
};

union shGameKeyData
{
	unsigned long bit;
	_anon3 f;
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

struct _anon3
{
	struct
	{
		unsigned long type : 1;
		unsigned long DRINK : 1;
		unsigned long RADIO : 1;
		unsigned long LIGHT : 1;
		unsigned long ITEM : 1;
		unsigned long MAP : 1;
		unsigned long DECIDE : 1;
		unsigned long CANCEL : 1;
		unsigned long SKIP : 1;
		unsigned long PAUSE : 1;
		unsigned long ACTION : 2;
		unsigned long DASH : 2;
		unsigned long LSLIDE : 2;
		unsigned long RSLIDE : 2;
		unsigned long READY : 2;
		unsigned long VIEW : 2;
		unsigned long frame_m1 : 2;
		long AX : 4;
		long AY : 4;
		long BX : 2;
		long BY : 2;
		long CX : 4;
		long CY : 4;
		unsigned long reserve : 2;
		unsigned long trg : 1;
		unsigned long rpt : 1;
		unsigned long len : 16;
	};
};

struct _anon4
{
	float d[4][4];
};

struct _SXY
{
	short x;
	short y;
};

struct _IXY
{
	int x;
	int y;
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

enum _BOAT_STATUS : unsigned char
{
	BOAT_ST_BOTH,
	BOAT_ST_RIGHT,
	BOAT_ST_LEFT
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
	_IXY c_count;
	_SXY c_speed;
	_SXY total_speed;
	_USXY cur_frame;
	char first_bone_type;
	char comp_type;
	_AnimeInfo* anim_a;
	_AnimeInfo* anim_b;
	_anon2 rot_neck;
	_anon2 rot_arms;
	_anon2 rot_body_neck;
	_anon2 rot_body;
	float scale;
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

struct Playing_Info
{
	unsigned char stage;
	unsigned char enemy_off;
	unsigned char voice_off;
	unsigned char memo_select;
	unsigned char clear_end_kind;
	unsigned char clear_end_number;
	unsigned char rank;
	unsigned char game_stage;
	unsigned char hidden_item_get;
	char spray_pow;
	unsigned short savecount;
	unsigned short clearcount;
	unsigned short item_get;
	unsigned short kill_by_shot;
	unsigned short kill_by_fight;
	float time;
	float walk_distance;
	float run_distance;
	float boat_clear_time;
	float boat_max_speed;
	float jms_damage_total;
	float mar_damage_by_enemy;
	float mar_damage_by_jms;
	float stage_check_point[7];
	unsigned int stage_score[7];
	unsigned int total_score;
	float total_time;
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
	unsigned char radar;
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

struct shBattleArea
{
	float center;
	float radius;
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
_AnimeInfo boat_anim[5];
_AnimeInfo d_boat_anim[4];
_AnimeInfo b_james_anim[5];
_CL_HITPOLY_PLANE lake_active_wall_list[12];
shBoatWork sh2bot;
float rstick_buf[20];
float lstick_buf[20];
short anm_speed_right;
short anm_speed_left;
int wv_type_z;
int wv_type_x;
int wv_status_z;
int wv_status_x;
float wv_height_y;
float wv_height_z;
float wv_height_x;
float wv_shinpuku_z;
float wv_shinpuku_x;
float wv_timer_z;
float wv_timer_x;
float wv_energy_z;
float wv_energy_x;
int oar_status_right[2];
int oar_status_left[2];
float rstick_total_power;
float lstick_total_power;
float straight_power;
float round_power;
unsigned short rstick_status;
unsigned short lstick_status;
float rstick_power;
float lstick_power;
float key_rstick_dir;
float key_lstick_dir;
float key_lstick_power;
Playing_Info playing;
float key_rstick_power;
shPlayerWork sh2jms;
void(*BoatSetHeightDummy)(SubCharacter*);
float dtf;
void(*func_list_main)(SubCharacter*)[3];
float wv_timer_y;
float wv_energy_y;
_anon2 pos;
_anon2 rot;
float rot_aspd;
float pos_aspd;
float oar_pos_right[4];
float oar_pos_left[4];
_anon4 boat_localworld_matrix;
_anon4 kt_unit_matrix;
int dt;
void(*HumanBOTFunction)(SubCharacter*);
int dboat_anime_adr_list[4];
int key_analog_mode;

void bot_flg_on(unsigned int* type, unsigned int status);
void bot_flg_off(unsigned int* type, unsigned int status);
int bot_anime_flg_on(unsigned int status);
void bot_st_set(int status, shBoatWork* w);
void close_to_value(short* now, short tgt, short mov);
int HumanBOTInit();
float BoatCheckKeyInputStickDir(float x, float y);
float BoatCheckKeyInputStickPow(float x, float y, float dir);
int check_value(float key, float* buf);
void BoatCheckKeyInput();
void BoatSetHeightDummy();
void BoatSetHeight();
void BoatCheckSetParameter();
void boat_both();
void boat_right();
void boat_left();
void BoatCheckStatus();
void BoatCheckControl();
void BoatCheckAnimeSpeed(SubCharacter* scp);
void boat_anim_set_all(_AnimeInfo* aip, int comp_type);
void BoatCheckAnime(SubCharacter* scp);
void BoatCheckOarStatus(SubCharacter* scp);
void BoatCheckEffect();
void BoatCheckSound();
void BoatCheckRollEnergy(SubCharacter* scp);
void BoatCheckSetFirst();
void HumanBOTFunction();
void shCharacterSetHumanBOTLow(SubCharacter* scp);
void shCharacterBoatWorkInit();
int shCharacterHumanBOTAnimeSet(SubCharacter* scp, int anime_id);
void shUpdateBoatJamesPosAfterAnime();

// 
// Start address: 0x26c080
void bot_flg_on(unsigned int* type, unsigned int status)
{
	// Line 276, Address: 0x26c080, Func Offset: 0
	// Line 277, Address: 0x26c08c, Func Offset: 0xc
	// Func End, Address: 0x26c094, Func Offset: 0x14
}

// 
// Start address: 0x26c0a0
void bot_flg_off(unsigned int* type, unsigned int status)
{
	// Line 280, Address: 0x26c0a0, Func Offset: 0
	// Line 281, Address: 0x26c0b0, Func Offset: 0x10
	// Func End, Address: 0x26c0b8, Func Offset: 0x18
}

// 
// Start address: 0x26c0c0
int bot_anime_flg_on(unsigned int status)
{
	// Line 292, Address: 0x26c0c0, Func Offset: 0
	// Line 293, Address: 0x26c0cc, Func Offset: 0xc
	// Func End, Address: 0x26c0d4, Func Offset: 0x14
}

// 
// Start address: 0x26c0e0
void bot_st_set(int status, shBoatWork* w)
{
	// Line 303, Address: 0x26c0e0, Func Offset: 0
	// Line 304, Address: 0x26c0e8, Func Offset: 0x8
	// Line 305, Address: 0x26c0ec, Func Offset: 0xc
	// Func End, Address: 0x26c0f4, Func Offset: 0x14
}

// 
// Start address: 0x26c100
void close_to_value(short* now, short tgt, short mov)
{
	// Line 401, Address: 0x26c100, Func Offset: 0
	// Line 402, Address: 0x26c114, Func Offset: 0x14
	// Line 403, Address: 0x26c120, Func Offset: 0x20
	// Line 404, Address: 0x26c128, Func Offset: 0x28
	// Line 405, Address: 0x26c138, Func Offset: 0x38
	// Line 406, Address: 0x26c13c, Func Offset: 0x3c
	// Line 407, Address: 0x26c144, Func Offset: 0x44
	// Line 408, Address: 0x26c14c, Func Offset: 0x4c
	// Line 409, Address: 0x26c15c, Func Offset: 0x5c
	// Line 412, Address: 0x26c160, Func Offset: 0x60
	// Func End, Address: 0x26c168, Func Offset: 0x68
}

// 
// Start address: 0x26c170
int HumanBOTInit()
{
	int i1;
	// Line 422, Address: 0x26c170, Func Offset: 0
	// Line 425, Address: 0x26c178, Func Offset: 0x8
	// Line 426, Address: 0x26c180, Func Offset: 0x10
	// Line 427, Address: 0x26c188, Func Offset: 0x18
	// Line 428, Address: 0x26c190, Func Offset: 0x20
	// Line 429, Address: 0x26c198, Func Offset: 0x28
	// Line 430, Address: 0x26c1a0, Func Offset: 0x30
	// Line 432, Address: 0x26c1a8, Func Offset: 0x38
	// Line 433, Address: 0x26c1b4, Func Offset: 0x44
	// Line 434, Address: 0x26c1c8, Func Offset: 0x58
	// Line 435, Address: 0x26c1d8, Func Offset: 0x68
	// Line 436, Address: 0x26c1ec, Func Offset: 0x7c
	// Line 437, Address: 0x26c1f4, Func Offset: 0x84
	// Line 438, Address: 0x26c1fc, Func Offset: 0x8c
	// Line 439, Address: 0x26c204, Func Offset: 0x94
	// Line 440, Address: 0x26c20c, Func Offset: 0x9c
	// Line 441, Address: 0x26c214, Func Offset: 0xa4
	// Line 442, Address: 0x26c21c, Func Offset: 0xac
	// Line 443, Address: 0x26c224, Func Offset: 0xb4
	// Line 445, Address: 0x26c22c, Func Offset: 0xbc
	// Line 447, Address: 0x26c234, Func Offset: 0xc4
	// Line 448, Address: 0x26c23c, Func Offset: 0xcc
	// Line 449, Address: 0x26c244, Func Offset: 0xd4
	// Line 450, Address: 0x26c24c, Func Offset: 0xdc
	// Line 452, Address: 0x26c254, Func Offset: 0xe4
	// Line 453, Address: 0x26c25c, Func Offset: 0xec
	// Line 455, Address: 0x26c264, Func Offset: 0xf4
	// Line 456, Address: 0x26c270, Func Offset: 0x100
	// Line 457, Address: 0x26c284, Func Offset: 0x114
	// Line 458, Address: 0x26c294, Func Offset: 0x124
	// Line 460, Address: 0x26c2a4, Func Offset: 0x134
	// Line 467, Address: 0x26c2ac, Func Offset: 0x13c
	// Line 468, Address: 0x26c2b4, Func Offset: 0x144
	// Line 469, Address: 0x26c2bc, Func Offset: 0x14c
	// Line 471, Address: 0x26c2c4, Func Offset: 0x154
	// Line 472, Address: 0x26c2c8, Func Offset: 0x158
	// Func End, Address: 0x26c2d8, Func Offset: 0x168
}

// 
// Start address: 0x26c2e0
float BoatCheckKeyInputStickDir(float x, float y)
{
	// Line 479, Address: 0x26c2e0, Func Offset: 0
	// Line 480, Address: 0x26c2ec, Func Offset: 0xc
	// Line 481, Address: 0x26c2fc, Func Offset: 0x1c
	// Func End, Address: 0x26c30c, Func Offset: 0x2c
}

// 
// Start address: 0x26c310
float BoatCheckKeyInputStickPow(float x, float y, float dir)
{
	float pow;
	float pow_y;
	float pow_x;
	// Line 490, Address: 0x26c310, Func Offset: 0
	// Line 493, Address: 0x26c330, Func Offset: 0x20
	// Line 494, Address: 0x26c340, Func Offset: 0x30
	// Line 496, Address: 0x26c354, Func Offset: 0x44
	// Line 497, Address: 0x26c364, Func Offset: 0x54
	// Line 500, Address: 0x26c3b0, Func Offset: 0xa0
	// Func End, Address: 0x26c3cc, Func Offset: 0xbc
}

// 
// Start address: 0x26c3d0
int check_value(float key, float* buf)
{
	int i;
	// Line 506, Address: 0x26c3d0, Func Offset: 0
	// Line 507, Address: 0x26c3dc, Func Offset: 0xc
	// Line 508, Address: 0x26c3f0, Func Offset: 0x20
	// Line 509, Address: 0x26c3fc, Func Offset: 0x2c
	// Line 510, Address: 0x26c414, Func Offset: 0x44
	// Line 511, Address: 0x26c418, Func Offset: 0x48
	// Func End, Address: 0x26c420, Func Offset: 0x50
}

// 
// Start address: 0x26c420
void BoatCheckKeyInput()
{
	int anime_type[3][3];
	float rstick_real_power;
	float lstick_real_power;
	float rot_right;
	float rot_left;
	int i;
	shGameKeyData key;
	int right;
	int left;
	unsigned char pad_local[32];
	// Line 523, Address: 0x26c420, Func Offset: 0
	// Line 530, Address: 0x26c440, Func Offset: 0x20
	// Line 550, Address: 0x26c464, Func Offset: 0x44
	// Line 551, Address: 0x26c47c, Func Offset: 0x5c
	// Line 552, Address: 0x26c48c, Func Offset: 0x6c
	// Line 553, Address: 0x26c49c, Func Offset: 0x7c
	// Line 555, Address: 0x26c4b0, Func Offset: 0x90
	// Line 556, Address: 0x26c4bc, Func Offset: 0x9c
	// Line 557, Address: 0x26c4d0, Func Offset: 0xb0
	// Line 558, Address: 0x26c4e8, Func Offset: 0xc8
	// Line 568, Address: 0x26c4f0, Func Offset: 0xd0
	// Line 569, Address: 0x26c518, Func Offset: 0xf8
	// Line 570, Address: 0x26c540, Func Offset: 0x120
	// Line 571, Address: 0x26c570, Func Offset: 0x150
	// Line 587, Address: 0x26c5a0, Func Offset: 0x180
	// Line 589, Address: 0x26c5b0, Func Offset: 0x190
	// Line 591, Address: 0x26c608, Func Offset: 0x1e8
	// Line 594, Address: 0x26c668, Func Offset: 0x248
	// Line 595, Address: 0x26c6a0, Func Offset: 0x280
	// Line 596, Address: 0x26c6c0, Func Offset: 0x2a0
	// Line 597, Address: 0x26c6f0, Func Offset: 0x2d0
	// Line 599, Address: 0x26c710, Func Offset: 0x2f0
	// Line 601, Address: 0x26c724, Func Offset: 0x304
	// Line 603, Address: 0x26c72c, Func Offset: 0x30c
	// Line 604, Address: 0x26c74c, Func Offset: 0x32c
	// Line 608, Address: 0x26c76c, Func Offset: 0x34c
	// Line 610, Address: 0x26c774, Func Offset: 0x354
	// Line 612, Address: 0x26c788, Func Offset: 0x368
	// Line 614, Address: 0x26c7a8, Func Offset: 0x388
	// Line 615, Address: 0x26c7b0, Func Offset: 0x390
	// Line 616, Address: 0x26c7c4, Func Offset: 0x3a4
	// Line 617, Address: 0x26c7cc, Func Offset: 0x3ac
	// Line 618, Address: 0x26c7d4, Func Offset: 0x3b4
	// Line 619, Address: 0x26c7e0, Func Offset: 0x3c0
	// Line 621, Address: 0x26c7f8, Func Offset: 0x3d8
	// Line 622, Address: 0x26c80c, Func Offset: 0x3ec
	// Line 623, Address: 0x26c818, Func Offset: 0x3f8
	// Line 625, Address: 0x26c830, Func Offset: 0x410
	// Line 626, Address: 0x26c844, Func Offset: 0x424
	// Line 627, Address: 0x26c850, Func Offset: 0x430
	// Line 628, Address: 0x26c858, Func Offset: 0x438
	// Line 630, Address: 0x26c888, Func Offset: 0x468
	// Line 631, Address: 0x26c89c, Func Offset: 0x47c
	// Line 633, Address: 0x26c8a4, Func Offset: 0x484
	// Line 634, Address: 0x26c8b8, Func Offset: 0x498
	// Line 636, Address: 0x26c8c0, Func Offset: 0x4a0
	// Line 643, Address: 0x26c8d4, Func Offset: 0x4b4
	// Line 644, Address: 0x26c8e4, Func Offset: 0x4c4
	// Line 646, Address: 0x26c910, Func Offset: 0x4f0
	// Line 648, Address: 0x26c920, Func Offset: 0x500
	// Line 655, Address: 0x26c980, Func Offset: 0x560
	// Line 657, Address: 0x26c988, Func Offset: 0x568
	// Line 659, Address: 0x26c99c, Func Offset: 0x57c
	// Line 661, Address: 0x26c9bc, Func Offset: 0x59c
	// Line 662, Address: 0x26c9c4, Func Offset: 0x5a4
	// Line 663, Address: 0x26c9d8, Func Offset: 0x5b8
	// Line 664, Address: 0x26c9e0, Func Offset: 0x5c0
	// Line 665, Address: 0x26c9e8, Func Offset: 0x5c8
	// Line 666, Address: 0x26c9f0, Func Offset: 0x5d0
	// Line 668, Address: 0x26ca08, Func Offset: 0x5e8
	// Line 669, Address: 0x26ca1c, Func Offset: 0x5fc
	// Line 670, Address: 0x26ca28, Func Offset: 0x608
	// Line 672, Address: 0x26ca40, Func Offset: 0x620
	// Line 673, Address: 0x26ca54, Func Offset: 0x634
	// Line 674, Address: 0x26ca60, Func Offset: 0x640
	// Line 675, Address: 0x26ca68, Func Offset: 0x648
	// Line 677, Address: 0x26ca98, Func Offset: 0x678
	// Line 678, Address: 0x26caac, Func Offset: 0x68c
	// Line 680, Address: 0x26cab4, Func Offset: 0x694
	// Line 681, Address: 0x26cac8, Func Offset: 0x6a8
	// Line 683, Address: 0x26cad0, Func Offset: 0x6b0
	// Line 690, Address: 0x26cae4, Func Offset: 0x6c4
	// Line 691, Address: 0x26caf4, Func Offset: 0x6d4
	// Line 693, Address: 0x26cb20, Func Offset: 0x700
	// Line 695, Address: 0x26cb30, Func Offset: 0x710
	// Line 722, Address: 0x26cb90, Func Offset: 0x770
	// Line 723, Address: 0x26cb98, Func Offset: 0x778
	// Line 732, Address: 0x26cba0, Func Offset: 0x780
	// Line 736, Address: 0x26cbbc, Func Offset: 0x79c
	// Line 741, Address: 0x26cbd8, Func Offset: 0x7b8
	// Line 743, Address: 0x26cbf4, Func Offset: 0x7d4
	// Line 744, Address: 0x26cc04, Func Offset: 0x7e4
	// Line 746, Address: 0x26cc38, Func Offset: 0x818
	// Line 747, Address: 0x26cc54, Func Offset: 0x834
	// Line 749, Address: 0x26cc5c, Func Offset: 0x83c
	// Line 750, Address: 0x26cc74, Func Offset: 0x854
	// Line 777, Address: 0x26cc80, Func Offset: 0x860
	// Func End, Address: 0x26cca8, Func Offset: 0x888
}

// 
// Start address: 0x26ccb0
void BoatSetHeightDummy()
{
	// Line 784, Address: 0x26ccb0, Func Offset: 0
	// Func End, Address: 0x26ccb8, Func Offset: 0x8
}

// 
// Start address: 0x26ccc0
void SubCharacter::BoatSetHeight()
{
	// Line 787, Address: 0x26ccc0, Func Offset: 0
	// Line 788, Address: 0x26cce8, Func Offset: 0x28
	// Line 789, Address: 0x26cd04, Func Offset: 0x44
	// Line 790, Address: 0x26cd14, Func Offset: 0x54
	// Line 792, Address: 0x26cd1c, Func Offset: 0x5c
	// Line 794, Address: 0x26cd2c, Func Offset: 0x6c
	// Func End, Address: 0x26cd34, Func Offset: 0x74
}

// 
// Start address: 0x26cd40
void SubCharacter::BoatCheckSetParameter()
{
	_CL_HITPOLY_COLUMN column;
	// Line 796, Address: 0x26cd40, Func Offset: 0
	// Line 800, Address: 0x26cd50, Func Offset: 0x10
	// Line 801, Address: 0x26cd58, Func Offset: 0x18
	// Line 804, Address: 0x26cd64, Func Offset: 0x24
	// Line 805, Address: 0x26cd6c, Func Offset: 0x2c
	// Line 806, Address: 0x26cd80, Func Offset: 0x40
	// Line 807, Address: 0x26cd9c, Func Offset: 0x5c
	// Line 808, Address: 0x26cdb4, Func Offset: 0x74
	// Line 814, Address: 0x26cdbc, Func Offset: 0x7c
	// Line 815, Address: 0x26cdc4, Func Offset: 0x84
	// Line 816, Address: 0x26cdcc, Func Offset: 0x8c
	// Line 817, Address: 0x26cdd4, Func Offset: 0x94
	// Line 819, Address: 0x26cddc, Func Offset: 0x9c
	// Line 820, Address: 0x26cdec, Func Offset: 0xac
	// Line 821, Address: 0x26cdf8, Func Offset: 0xb8
	// Line 824, Address: 0x26ce04, Func Offset: 0xc4
	// Line 825, Address: 0x26ce14, Func Offset: 0xd4
	// Line 826, Address: 0x26ce2c, Func Offset: 0xec
	// Line 827, Address: 0x26ce34, Func Offset: 0xf4
	// Line 828, Address: 0x26ce48, Func Offset: 0x108
	// Line 831, Address: 0x26ce54, Func Offset: 0x114
	// Line 833, Address: 0x26ce60, Func Offset: 0x120
	// Line 834, Address: 0x26ce7c, Func Offset: 0x13c
	// Func End, Address: 0x26ce90, Func Offset: 0x150
}

// 
// Start address: 0x26ce90
void boat_both()
{
	// Line 840, Address: 0x26ce90, Func Offset: 0
	// Line 841, Address: 0x26ce98, Func Offset: 0x8
	// Line 845, Address: 0x26cec8, Func Offset: 0x38
	// Line 846, Address: 0x26ced8, Func Offset: 0x48
	// Line 848, Address: 0x26cee0, Func Offset: 0x50
	// Line 851, Address: 0x26cef0, Func Offset: 0x60
	// Func End, Address: 0x26cf00, Func Offset: 0x70
}

// 
// Start address: 0x26cf00
void boat_right()
{
	// Line 853, Address: 0x26cf00, Func Offset: 0
	// Line 854, Address: 0x26cf08, Func Offset: 0x8
	// Line 856, Address: 0x26cf38, Func Offset: 0x38
	// Line 857, Address: 0x26cf4c, Func Offset: 0x4c
	// Line 861, Address: 0x26cf54, Func Offset: 0x54
	// Line 864, Address: 0x26cf64, Func Offset: 0x64
	// Func End, Address: 0x26cf74, Func Offset: 0x74
}

// 
// Start address: 0x26cf80
void boat_left()
{
	// Line 866, Address: 0x26cf80, Func Offset: 0
	// Line 867, Address: 0x26cf88, Func Offset: 0x8
	// Line 869, Address: 0x26cfb8, Func Offset: 0x38
	// Line 870, Address: 0x26cfcc, Func Offset: 0x4c
	// Line 872, Address: 0x26cfd4, Func Offset: 0x54
	// Line 877, Address: 0x26cfe4, Func Offset: 0x64
	// Func End, Address: 0x26cff4, Func Offset: 0x74
}

// 
// Start address: 0x26d000
void SubCharacter::BoatCheckStatus()
{
	void(*boat_main_func)(SubCharacter*);
	// Line 891, Address: 0x26d000, Func Offset: 0
	// Line 894, Address: 0x26d008, Func Offset: 0x8
	// Line 895, Address: 0x26d024, Func Offset: 0x24
	// Line 896, Address: 0x26d02c, Func Offset: 0x2c
	// Func End, Address: 0x26d03c, Func Offset: 0x3c
}

// 
// Start address: 0x26d040
void SubCharacter::BoatCheckControl()
{
	// Line 909, Address: 0x26d040, Func Offset: 0
	// Line 916, Address: 0x26d050, Func Offset: 0x10
	// Line 917, Address: 0x26d078, Func Offset: 0x38
	// Line 918, Address: 0x26d0a0, Func Offset: 0x60
	// Line 919, Address: 0x26d124, Func Offset: 0xe4
	// Line 920, Address: 0x26d128, Func Offset: 0xe8
	// Line 921, Address: 0x26d1ac, Func Offset: 0x16c
	// Line 932, Address: 0x26d1b0, Func Offset: 0x170
	// Line 933, Address: 0x26d1cc, Func Offset: 0x18c
	// Line 934, Address: 0x26d1ec, Func Offset: 0x1ac
	// Line 939, Address: 0x26d240, Func Offset: 0x200
	// Line 940, Address: 0x26d278, Func Offset: 0x238
	// Line 941, Address: 0x26d298, Func Offset: 0x258
	// Line 949, Address: 0x26d2ec, Func Offset: 0x2ac
	// Line 951, Address: 0x26d39c, Func Offset: 0x35c
	// Line 953, Address: 0x26d44c, Func Offset: 0x40c
	// Line 955, Address: 0x26d460, Func Offset: 0x420
	// Line 961, Address: 0x26d478, Func Offset: 0x438
	// Line 962, Address: 0x26d484, Func Offset: 0x444
	// Line 963, Address: 0x26d490, Func Offset: 0x450
	// Line 968, Address: 0x26d49c, Func Offset: 0x45c
	// Line 969, Address: 0x26d4b8, Func Offset: 0x478
	// Line 970, Address: 0x26d4cc, Func Offset: 0x48c
	// Line 987, Address: 0x26d4e0, Func Offset: 0x4a0
	// Line 988, Address: 0x26d4fc, Func Offset: 0x4bc
	// Line 989, Address: 0x26d510, Func Offset: 0x4d0
	// Line 990, Address: 0x26d52c, Func Offset: 0x4ec
	// Line 992, Address: 0x26d540, Func Offset: 0x500
	// Line 993, Address: 0x26d578, Func Offset: 0x538
	// Line 994, Address: 0x26d598, Func Offset: 0x558
	// Line 995, Address: 0x26d5f8, Func Offset: 0x5b8
	// Line 996, Address: 0x26d600, Func Offset: 0x5c0
	// Line 997, Address: 0x26d608, Func Offset: 0x5c8
	// Line 1005, Address: 0x26d610, Func Offset: 0x5d0
	// Line 1006, Address: 0x26d62c, Func Offset: 0x5ec
	// Line 1007, Address: 0x26d648, Func Offset: 0x608
	// Line 1008, Address: 0x26d664, Func Offset: 0x624
	// Line 1010, Address: 0x26d678, Func Offset: 0x638
	// Line 1011, Address: 0x26d6b8, Func Offset: 0x678
	// Line 1013, Address: 0x26d6cc, Func Offset: 0x68c
	// Line 1017, Address: 0x26d6d8, Func Offset: 0x698
	// Line 1018, Address: 0x26d718, Func Offset: 0x6d8
	// Line 1020, Address: 0x26d74c, Func Offset: 0x70c
	// Line 1021, Address: 0x26d774, Func Offset: 0x734
	// Line 1022, Address: 0x26d7d4, Func Offset: 0x794
	// Line 1023, Address: 0x26d7dc, Func Offset: 0x79c
	// Line 1024, Address: 0x26d7e4, Func Offset: 0x7a4
	// Line 1029, Address: 0x26d7ec, Func Offset: 0x7ac
	// Line 1035, Address: 0x26d808, Func Offset: 0x7c8
	// Line 1036, Address: 0x26d824, Func Offset: 0x7e4
	// Line 1037, Address: 0x26d840, Func Offset: 0x800
	// Line 1038, Address: 0x26d85c, Func Offset: 0x81c
	// Line 1040, Address: 0x26d870, Func Offset: 0x830
	// Line 1041, Address: 0x26d8b0, Func Offset: 0x870
	// Line 1043, Address: 0x26d8c4, Func Offset: 0x884
	// Line 1047, Address: 0x26d8d0, Func Offset: 0x890
	// Line 1048, Address: 0x26d910, Func Offset: 0x8d0
	// Line 1050, Address: 0x26d944, Func Offset: 0x904
	// Line 1051, Address: 0x26d96c, Func Offset: 0x92c
	// Line 1052, Address: 0x26d9cc, Func Offset: 0x98c
	// Line 1053, Address: 0x26d9d4, Func Offset: 0x994
	// Line 1054, Address: 0x26d9dc, Func Offset: 0x99c
	// Line 1059, Address: 0x26d9e4, Func Offset: 0x9a4
	// Line 1065, Address: 0x26da00, Func Offset: 0x9c0
	// Func End, Address: 0x26da14, Func Offset: 0x9d4
}

// 
// Start address: 0x26da20
void BoatCheckAnimeSpeed(SubCharacter* scp)
{
	SubCharacterDisp* scp_d;
	SubCharacter* boat_jms;
	short purpose_speed_right;
	short purpose_speed_left;
	// Line 1097, Address: 0x26da20, Func Offset: 0
	// Line 1123, Address: 0x26da34, Func Offset: 0x14
	// Line 1124, Address: 0x26da64, Func Offset: 0x44
	// Line 1129, Address: 0x26da94, Func Offset: 0x74
	// Line 1130, Address: 0x26dac8, Func Offset: 0xa8
	// Line 1131, Address: 0x26dae0, Func Offset: 0xc0
	// Line 1132, Address: 0x26dae8, Func Offset: 0xc8
	// Line 1134, Address: 0x26db00, Func Offset: 0xe0
	// Line 1135, Address: 0x26db34, Func Offset: 0x114
	// Line 1136, Address: 0x26db4c, Func Offset: 0x12c
	// Line 1137, Address: 0x26db54, Func Offset: 0x134
	// Line 1139, Address: 0x26db6c, Func Offset: 0x14c
	// Line 1140, Address: 0x26dbac, Func Offset: 0x18c
	// Line 1161, Address: 0x26dbec, Func Offset: 0x1cc
	// Line 1163, Address: 0x26dc1c, Func Offset: 0x1fc
	// Line 1165, Address: 0x26dc4c, Func Offset: 0x22c
	// Line 1167, Address: 0x26dc54, Func Offset: 0x234
	// Line 1169, Address: 0x26dc7c, Func Offset: 0x25c
	// Line 1171, Address: 0x26dc84, Func Offset: 0x264
	// Line 1196, Address: 0x26dcac, Func Offset: 0x28c
	// Func End, Address: 0x26dcc4, Func Offset: 0x2a4
}

// 
// Start address: 0x26dcd0
void boat_anim_set_all(_AnimeInfo* aip, int comp_type)
{
	// Line 1205, Address: 0x26dcd0, Func Offset: 0
	// Line 1206, Address: 0x26dce8, Func Offset: 0x18
	// Line 1208, Address: 0x26dd18, Func Offset: 0x48
	// Func End, Address: 0x26dd30, Func Offset: 0x60
}

// 
// Start address: 0x26dd30
void BoatCheckAnime(SubCharacter* scp)
{
	_AnimeInfo* aip;
	SubCharacterDisp* scp_d;
	shBoatWork* w;
	int anime_change_check;
	// Line 1210, Address: 0x26dd30, Func Offset: 0
	// Line 1212, Address: 0x26dd4c, Func Offset: 0x1c
	// Line 1213, Address: 0x26dd54, Func Offset: 0x24
	// Line 1216, Address: 0x26dd5c, Func Offset: 0x2c
	// Line 1217, Address: 0x26dd64, Func Offset: 0x34
	// Line 1218, Address: 0x26dd78, Func Offset: 0x48
	// Line 1219, Address: 0x26dda0, Func Offset: 0x70
	// Line 1221, Address: 0x26ddcc, Func Offset: 0x9c
	// Line 1222, Address: 0x26ddd4, Func Offset: 0xa4
	// Line 1224, Address: 0x26dddc, Func Offset: 0xac
	// Line 1225, Address: 0x26dde4, Func Offset: 0xb4
	// Line 1227, Address: 0x26ddec, Func Offset: 0xbc
	// Line 1230, Address: 0x26ddf4, Func Offset: 0xc4
	// Line 1231, Address: 0x26de04, Func Offset: 0xd4
	// Line 1232, Address: 0x26de14, Func Offset: 0xe4
	// Line 1233, Address: 0x26de20, Func Offset: 0xf0
	// Line 1234, Address: 0x26de30, Func Offset: 0x100
	// Line 1238, Address: 0x26de3c, Func Offset: 0x10c
	// Line 1239, Address: 0x26de4c, Func Offset: 0x11c
	// Line 1241, Address: 0x26de5c, Func Offset: 0x12c
	// Line 1242, Address: 0x26de6c, Func Offset: 0x13c
	// Line 1243, Address: 0x26de7c, Func Offset: 0x14c
	// Line 1245, Address: 0x26de84, Func Offset: 0x154
	// Line 1248, Address: 0x26de94, Func Offset: 0x164
	// Line 1249, Address: 0x26dea4, Func Offset: 0x174
	// Line 1250, Address: 0x26deb4, Func Offset: 0x184
	// Line 1251, Address: 0x26debc, Func Offset: 0x18c
	// Line 1262, Address: 0x26decc, Func Offset: 0x19c
	// Func End, Address: 0x26deec, Func Offset: 0x1bc
}

// 
// Start address: 0x26def0
void BoatCheckOarStatus(SubCharacter* scp)
{
	shSkelton* top;
	int i;
	// Line 1270, Address: 0x26def0, Func Offset: 0
	// Line 1284, Address: 0x26def8, Func Offset: 0x8
	// Line 1288, Address: 0x26defc, Func Offset: 0xc
	// Line 1289, Address: 0x26df08, Func Offset: 0x18
	// Line 1290, Address: 0x26df0c, Func Offset: 0x1c
	// Line 1305, Address: 0x26df24, Func Offset: 0x34
	// Line 1306, Address: 0x26df34, Func Offset: 0x44
	// Line 1321, Address: 0x26df38, Func Offset: 0x48
	// Line 1324, Address: 0x26df48, Func Offset: 0x58
	// Line 1325, Address: 0x26df68, Func Offset: 0x78
	// Line 1332, Address: 0x26df88, Func Offset: 0x98
	// Line 1333, Address: 0x26df98, Func Offset: 0xa8
	// Line 1337, Address: 0x26dfa8, Func Offset: 0xb8
	// Line 1341, Address: 0x26dfd0, Func Offset: 0xe0
	// Line 1342, Address: 0x26dfdc, Func Offset: 0xec
	// Line 1343, Address: 0x26dfe4, Func Offset: 0xf4
	// Line 1346, Address: 0x26dfec, Func Offset: 0xfc
	// Line 1350, Address: 0x26e014, Func Offset: 0x124
	// Line 1351, Address: 0x26e020, Func Offset: 0x130
	// Line 1352, Address: 0x26e028, Func Offset: 0x138
	// Line 1400, Address: 0x26e030, Func Offset: 0x140
	// Func End, Address: 0x26e040, Func Offset: 0x150
}

// 
// Start address: 0x26e040
void BoatCheckEffect()
{
	int kind_r;
	int kind_l;
	// Line 1407, Address: 0x26e040, Func Offset: 0
	// Line 1409, Address: 0x26e04c, Func Offset: 0xc
	// Line 1411, Address: 0x26e054, Func Offset: 0x14
	// Line 1412, Address: 0x26e078, Func Offset: 0x38
	// Line 1413, Address: 0x26e07c, Func Offset: 0x3c
	// Line 1414, Address: 0x26e098, Func Offset: 0x58
	// Line 1415, Address: 0x26e09c, Func Offset: 0x5c
	// Line 1416, Address: 0x26e0c0, Func Offset: 0x80
	// Line 1417, Address: 0x26e0c4, Func Offset: 0x84
	// Line 1418, Address: 0x26e0e0, Func Offset: 0xa0
	// Line 1420, Address: 0x26e0e4, Func Offset: 0xa4
	// Line 1421, Address: 0x26e0f0, Func Offset: 0xb0
	// Line 1422, Address: 0x26e100, Func Offset: 0xc0
	// Line 1423, Address: 0x26e10c, Func Offset: 0xcc
	// Line 1426, Address: 0x26e120, Func Offset: 0xe0
	// Func End, Address: 0x26e134, Func Offset: 0xf4
}

// 
// Start address: 0x26e140
void BoatCheckSound()
{
	// Line 1432, Address: 0x26e140, Func Offset: 0
	// Func End, Address: 0x26e148, Func Offset: 0x8
}

// 
// Start address: 0x26e150
void BoatCheckRollEnergy(SubCharacter* scp)
{
	float angle;
	_shLakeWaveInfo* wip;
	float energy_z;
	float energy_y;
	float energy_x;
	int init_check_z;
	int init_check_y;
	int init_check_x;
	// Line 1741, Address: 0x26e150, Func Offset: 0
	// Line 1756, Address: 0x26e180, Func Offset: 0x30
	// Line 1757, Address: 0x26e1c0, Func Offset: 0x70
	// Line 1758, Address: 0x26e1c4, Func Offset: 0x74
	// Line 1759, Address: 0x26e204, Func Offset: 0xb4
	// Line 1760, Address: 0x26e208, Func Offset: 0xb8
	// Line 1765, Address: 0x26e20c, Func Offset: 0xbc
	// Line 1766, Address: 0x26e224, Func Offset: 0xd4
	// Line 1767, Address: 0x26e230, Func Offset: 0xe0
	// Line 1773, Address: 0x26e234, Func Offset: 0xe4
	// Line 1774, Address: 0x26e244, Func Offset: 0xf4
	// Line 1781, Address: 0x26e24c, Func Offset: 0xfc
	// Line 1793, Address: 0x26e2d0, Func Offset: 0x180
	// Line 1794, Address: 0x26e304, Func Offset: 0x1b4
	// Line 1795, Address: 0x26e338, Func Offset: 0x1e8
	// Line 1800, Address: 0x26e378, Func Offset: 0x228
	// Line 1801, Address: 0x26e3a0, Func Offset: 0x250
	// Line 1802, Address: 0x26e3a4, Func Offset: 0x254
	// Line 1803, Address: 0x26e3cc, Func Offset: 0x27c
	// Line 1804, Address: 0x26e3d0, Func Offset: 0x280
	// Line 1805, Address: 0x26e3f8, Func Offset: 0x2a8
	// Line 1819, Address: 0x26e3fc, Func Offset: 0x2ac
	// Line 1820, Address: 0x26e404, Func Offset: 0x2b4
	// Line 1822, Address: 0x26e40c, Func Offset: 0x2bc
	// Line 1824, Address: 0x26e420, Func Offset: 0x2d0
	// Line 1825, Address: 0x26e428, Func Offset: 0x2d8
	// Line 1826, Address: 0x26e440, Func Offset: 0x2f0
	// Line 1827, Address: 0x26e448, Func Offset: 0x2f8
	// Line 1828, Address: 0x26e454, Func Offset: 0x304
	// Line 1829, Address: 0x26e45c, Func Offset: 0x30c
	// Line 1830, Address: 0x26e468, Func Offset: 0x318
	// Line 1833, Address: 0x26e474, Func Offset: 0x324
	// Line 1835, Address: 0x26e49c, Func Offset: 0x34c
	// Line 1837, Address: 0x26e4cc, Func Offset: 0x37c
	// Line 1839, Address: 0x26e4d4, Func Offset: 0x384
	// Line 1845, Address: 0x26e510, Func Offset: 0x3c0
	// Line 1846, Address: 0x26e518, Func Offset: 0x3c8
	// Line 1847, Address: 0x26e530, Func Offset: 0x3e0
	// Line 1848, Address: 0x26e538, Func Offset: 0x3e8
	// Line 1849, Address: 0x26e544, Func Offset: 0x3f4
	// Line 1850, Address: 0x26e54c, Func Offset: 0x3fc
	// Line 1851, Address: 0x26e558, Func Offset: 0x408
	// Line 1854, Address: 0x26e564, Func Offset: 0x414
	// Line 1856, Address: 0x26e58c, Func Offset: 0x43c
	// Line 1858, Address: 0x26e5bc, Func Offset: 0x46c
	// Line 1860, Address: 0x26e5c4, Func Offset: 0x474
	// Line 1871, Address: 0x26e600, Func Offset: 0x4b0
	// Line 1876, Address: 0x26e63c, Func Offset: 0x4ec
	// Line 1877, Address: 0x26e650, Func Offset: 0x500
	// Line 1878, Address: 0x26e668, Func Offset: 0x518
	// Line 1879, Address: 0x26e674, Func Offset: 0x524
	// Line 1880, Address: 0x26e680, Func Offset: 0x530
	// Line 1882, Address: 0x26e688, Func Offset: 0x538
	// Line 1887, Address: 0x26e690, Func Offset: 0x540
	// Line 1888, Address: 0x26e6a4, Func Offset: 0x554
	// Line 1889, Address: 0x26e6bc, Func Offset: 0x56c
	// Line 1890, Address: 0x26e6c8, Func Offset: 0x578
	// Line 1891, Address: 0x26e6d4, Func Offset: 0x584
	// Line 1893, Address: 0x26e6dc, Func Offset: 0x58c
	// Line 1898, Address: 0x26e6e4, Func Offset: 0x594
	// Line 1899, Address: 0x26e6f8, Func Offset: 0x5a8
	// Line 1900, Address: 0x26e710, Func Offset: 0x5c0
	// Line 1901, Address: 0x26e71c, Func Offset: 0x5cc
	// Line 1902, Address: 0x26e724, Func Offset: 0x5d4
	// Line 1904, Address: 0x26e72c, Func Offset: 0x5dc
	// Line 1909, Address: 0x26e734, Func Offset: 0x5e4
	// Line 1910, Address: 0x26e748, Func Offset: 0x5f8
	// Line 1911, Address: 0x26e760, Func Offset: 0x610
	// Line 1912, Address: 0x26e76c, Func Offset: 0x61c
	// Line 1913, Address: 0x26e778, Func Offset: 0x628
	// Line 1917, Address: 0x26e784, Func Offset: 0x634
	// Line 1922, Address: 0x26e7c0, Func Offset: 0x670
	// Line 1923, Address: 0x26e7d4, Func Offset: 0x684
	// Line 1924, Address: 0x26e7ec, Func Offset: 0x69c
	// Line 1925, Address: 0x26e7f8, Func Offset: 0x6a8
	// Line 1926, Address: 0x26e804, Func Offset: 0x6b4
	// Line 1928, Address: 0x26e80c, Func Offset: 0x6bc
	// Line 1933, Address: 0x26e814, Func Offset: 0x6c4
	// Line 1934, Address: 0x26e828, Func Offset: 0x6d8
	// Line 1935, Address: 0x26e840, Func Offset: 0x6f0
	// Line 1936, Address: 0x26e84c, Func Offset: 0x6fc
	// Line 1937, Address: 0x26e858, Func Offset: 0x708
	// Line 1939, Address: 0x26e860, Func Offset: 0x710
	// Line 1944, Address: 0x26e868, Func Offset: 0x718
	// Line 1945, Address: 0x26e87c, Func Offset: 0x72c
	// Line 1946, Address: 0x26e894, Func Offset: 0x744
	// Line 1947, Address: 0x26e8a0, Func Offset: 0x750
	// Line 1948, Address: 0x26e8a8, Func Offset: 0x758
	// Line 1950, Address: 0x26e8b0, Func Offset: 0x760
	// Line 1955, Address: 0x26e8b8, Func Offset: 0x768
	// Line 1956, Address: 0x26e8cc, Func Offset: 0x77c
	// Line 1957, Address: 0x26e8e4, Func Offset: 0x794
	// Line 1958, Address: 0x26e8f0, Func Offset: 0x7a0
	// Line 1959, Address: 0x26e8fc, Func Offset: 0x7ac
	// Line 1967, Address: 0x26e908, Func Offset: 0x7b8
	// Func End, Address: 0x26e93c, Func Offset: 0x7ec
}

// 
// Start address: 0x26e940
void SubCharacter::BoatCheckSetFirst()
{
	// Line 1973, Address: 0x26e940, Func Offset: 0
	// Line 1974, Address: 0x26e948, Func Offset: 0x8
	// Line 1975, Address: 0x26e954, Func Offset: 0x14
	// Func End, Address: 0x26e964, Func Offset: 0x24
}

// 
// Start address: 0x26e970
void SubCharacter::HumanBOTFunction()
{
	float rot[4];
	float pos[4];
	int count;
	_AnimeInfo* aip;
	// Line 1987, Address: 0x26e970, Func Offset: 0
	// Line 1992, Address: 0x26e984, Func Offset: 0x14
	// Line 1994, Address: 0x26e98c, Func Offset: 0x1c
	// Line 1995, Address: 0x26e9a4, Func Offset: 0x34
	// Line 1996, Address: 0x26e9bc, Func Offset: 0x4c
	// Line 1997, Address: 0x26e9c4, Func Offset: 0x54
	// Line 1999, Address: 0x26e9cc, Func Offset: 0x5c
	// Line 2005, Address: 0x26e9ec, Func Offset: 0x7c
	// Line 2006, Address: 0x26e9f8, Func Offset: 0x88
	// Line 2008, Address: 0x26ea04, Func Offset: 0x94
	// Line 2010, Address: 0x26ea0c, Func Offset: 0x9c
	// Line 2011, Address: 0x26ea1c, Func Offset: 0xac
	// Line 2013, Address: 0x26ea2c, Func Offset: 0xbc
	// Line 2014, Address: 0x26ea34, Func Offset: 0xc4
	// Line 2017, Address: 0x26ea5c, Func Offset: 0xec
	// Line 2021, Address: 0x26ea6c, Func Offset: 0xfc
	// Line 2022, Address: 0x26ea78, Func Offset: 0x108
	// Line 2024, Address: 0x26ea84, Func Offset: 0x114
	// Line 2025, Address: 0x26ea90, Func Offset: 0x120
	// Line 2027, Address: 0x26eaa0, Func Offset: 0x130
	// Line 2029, Address: 0x26eaac, Func Offset: 0x13c
	// Line 2042, Address: 0x26eab4, Func Offset: 0x144
	// Line 2047, Address: 0x26eacc, Func Offset: 0x15c
	// Line 2048, Address: 0x26eadc, Func Offset: 0x16c
	// Line 2049, Address: 0x26eae0, Func Offset: 0x170
	// Line 2055, Address: 0x26eae8, Func Offset: 0x178
	// Line 2056, Address: 0x26eaf8, Func Offset: 0x188
	// Line 2060, Address: 0x26eb08, Func Offset: 0x198
	// Line 2074, Address: 0x26eb18, Func Offset: 0x1a8
	// Line 2075, Address: 0x26eb34, Func Offset: 0x1c4
	// Line 2076, Address: 0x26eb3c, Func Offset: 0x1cc
	// Line 2077, Address: 0x26eb48, Func Offset: 0x1d8
	// Line 2078, Address: 0x26eb54, Func Offset: 0x1e4
	// Line 2079, Address: 0x26eb60, Func Offset: 0x1f0
	// Line 2080, Address: 0x26eb6c, Func Offset: 0x1fc
	// Line 2081, Address: 0x26eb78, Func Offset: 0x208
	// Line 2083, Address: 0x26eb80, Func Offset: 0x210
	// Line 2089, Address: 0x26eb8c, Func Offset: 0x21c
	// Line 2090, Address: 0x26ebe0, Func Offset: 0x270
	// Line 2097, Address: 0x26ec10, Func Offset: 0x2a0
	// Line 2100, Address: 0x26ec1c, Func Offset: 0x2ac
	// Line 2101, Address: 0x26ec24, Func Offset: 0x2b4
	// Line 2114, Address: 0x26ec2c, Func Offset: 0x2bc
	// Line 2118, Address: 0x26ec3c, Func Offset: 0x2cc
	// Line 2120, Address: 0x26ec48, Func Offset: 0x2d8
	// Line 2121, Address: 0x26ec5c, Func Offset: 0x2ec
	// Line 2122, Address: 0x26ec70, Func Offset: 0x300
	// Line 2133, Address: 0x26ec80, Func Offset: 0x310
	// Line 2134, Address: 0x26ec9c, Func Offset: 0x32c
	// Line 2177, Address: 0x26eca4, Func Offset: 0x334
	// Func End, Address: 0x26ecbc, Func Offset: 0x34c
}

// 
// Start address: 0x26ecc0
void shCharacterSetHumanBOTLow(SubCharacter* scp)
{
	// Line 2195, Address: 0x26ecc0, Func Offset: 0
	// Line 2196, Address: 0x26ecd0, Func Offset: 0x10
	// Line 2198, Address: 0x26ece0, Func Offset: 0x20
	// Line 2199, Address: 0x26ece8, Func Offset: 0x28
	// Line 2201, Address: 0x26ecf0, Func Offset: 0x30
	// Func End, Address: 0x26ed04, Func Offset: 0x44
}

// 
// Start address: 0x26ed10
void shCharacterBoatWorkInit()
{
	// Line 2211, Address: 0x26ed10, Func Offset: 0
	// Line 2212, Address: 0x26ed18, Func Offset: 0x8
	// Line 2213, Address: 0x26ed2c, Func Offset: 0x1c
	// Func End, Address: 0x26ed3c, Func Offset: 0x2c
}

// 
// Start address: 0x26ed40
int shCharacterHumanBOTAnimeSet(SubCharacter* scp, int anime_id)
{
	_AnimeInfo* aip;
	// Line 2238, Address: 0x26ed40, Func Offset: 0
	// Line 2242, Address: 0x26ed5c, Func Offset: 0x1c
	// Line 2243, Address: 0x26ed78, Func Offset: 0x38
	// Line 2244, Address: 0x26ed88, Func Offset: 0x48
	// Line 2245, Address: 0x26eda4, Func Offset: 0x64
	// Line 2252, Address: 0x26ede0, Func Offset: 0xa0
	// Line 2254, Address: 0x26edec, Func Offset: 0xac
	// Line 2256, Address: 0x26edf0, Func Offset: 0xb0
	// Func End, Address: 0x26ee0c, Func Offset: 0xcc
}

// 
// Start address: 0x26ee10
void shUpdateBoatJamesPosAfterAnime()
{
	shCharaInfo* cip;
	// Line 2298, Address: 0x26ee10, Func Offset: 0
	// Line 2301, Address: 0x26ee18, Func Offset: 0x8
	// Line 2307, Address: 0x26ee34, Func Offset: 0x24
	// Line 2308, Address: 0x26ee3c, Func Offset: 0x2c
	// Line 2309, Address: 0x26ee64, Func Offset: 0x54
	// Line 2310, Address: 0x26ee8c, Func Offset: 0x7c
	// Line 2311, Address: 0x26eeb4, Func Offset: 0xa4
	// Line 2313, Address: 0x26eedc, Func Offset: 0xcc
	// Line 2315, Address: 0x26ef14, Func Offset: 0x104
	// Func End, Address: 0x26ef24, Func Offset: 0x114
}

