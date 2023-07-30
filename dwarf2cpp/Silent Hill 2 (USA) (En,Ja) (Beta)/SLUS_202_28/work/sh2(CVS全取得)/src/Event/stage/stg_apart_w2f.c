typedef struct SubCharacter;
typedef struct _anon0;
typedef struct shBattleArea;
typedef struct Light;
typedef struct shBattleInfo;
typedef struct _anon1;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct PicDraw_Data;
typedef struct sh2gfw_AREA_HEAD;
typedef struct Stage_Data;
typedef struct Event_List;
typedef struct _CL_VHIT_WALL;
typedef struct CharaData_DemoList;
typedef struct _CL_HITPOLY_HEAD;
typedef struct Item_List;
typedef union fsFileIndex;
typedef struct shAttackInfo;
typedef struct Model_List;
typedef union fsFile;
typedef struct _CL_VHIT_CHARA;
typedef struct Enemy_List;
typedef struct fsCdFile;
typedef union _anon2;
typedef struct _CL_VHIT_RESULT;
typedef struct _anon3;
typedef union _anon4;
typedef struct PAD_3D;
typedef struct _AnimeInfo;
typedef struct fsMgcFile;
typedef struct Pad_KeyConfig;
typedef struct PAD_2D;
typedef struct fsMgfFile;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct shSkelton;
typedef struct PAD_INFO;
typedef struct _anon5;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct _anon6;
typedef struct DramaDemo_MessageTime;
typedef struct Playing_Info;
typedef struct _anon7;
typedef struct DramaDemo_PlayInfo;
typedef struct shPlayerWork;
typedef struct LightWork;
typedef struct shBattleFight;
typedef struct shBattleShot;

typedef void(*type_8)();
typedef int(*type_28)();
typedef void(*type_51)(SubCharacter*);
typedef void(*type_54)(SubCharacter*);

typedef float type_0[4];
typedef float type_1[4][4];
typedef float type_2[2];
typedef float type_3[2][4];
typedef float type_4[4][4][2];
typedef float type_5[4][4][2];
typedef int type_6[5];
typedef float type_7[4];
typedef float type_9[4][4][2];
typedef Light* type_10[6];
typedef unsigned short type_11[0];
typedef unsigned char type_12[374];
typedef Light* type_13[8];
typedef _AnimeInfo type_14[5];
typedef unsigned short type_15[0];
typedef unsigned char type_16[97];
typedef float type_17[7];
typedef unsigned int type_18[255];
typedef unsigned int type_19[7];
typedef unsigned int type_20[32];
typedef unsigned char type_21[4];
typedef CharaData_DemoList type_22[3];
typedef char type_23[4];
typedef fsFileIndex type_24[1];
typedef char type_25[4];
typedef char type_26[4];
typedef _AnimeInfo type_27[33];
typedef char type_29[4];
typedef char type_30[4];
typedef Enemy_List type_31[5];
typedef unsigned char type_32[2];
typedef _AnimeInfo type_33[11];
typedef unsigned char type_34[20];
typedef _AnimeInfo type_35[30];
typedef int(*type_36)()[8];
typedef Event_List type_37[33];
typedef _AnimeInfo type_38[17];
typedef unsigned char type_39[3];
typedef _AnimeInfo type_40[34];
typedef shAttackInfo type_41[66];
typedef float type_42[4];
typedef float type_43[4][4];
typedef unsigned char type_44[14];
typedef _AnimeInfo type_45[17];
typedef int type_46[6];
typedef PAD_INFO type_47[10];
typedef float type_48[4];
typedef float type_49[2];
typedef float type_50[4][2];
typedef _AnimeInfo type_52[17];
typedef unsigned char type_53[69];
typedef unsigned char type_55[4];
typedef unsigned char type_56[4];
typedef unsigned char type_57[4];
typedef Item_List type_58[7];
typedef _AnimeInfo type_59[33];
typedef fsFileIndex type_60[1];
typedef _AnimeInfo type_61[21];
typedef unsigned char type_62[2];
typedef unsigned char type_63[2];
typedef float type_64[4];
typedef unsigned char type_65[4];
typedef Model_List type_66[2];
typedef Light type_67[12];
typedef char type_68[0];
typedef float type_69[4];
typedef unsigned char type_70[14];
typedef _AnimeInfo type_71[24];
typedef fsFileIndex type_72[1];

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
	_anon3 pos;
	_anon3 rot;
	_anon3 pos_spd;
	_anon3 rot_spd;
	_anon5 mat;
	shSkelton* sk_top;
	float eye_y;
	float center_y;
	float spd;
	float spd_org;
	float spd_y;
	float spd_roty;
	float grnd_normal[4];
	float grnd_height;
	_anon3 b_pos;
	_anon3 b_rot;
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

struct _anon0
{
	void(*SpecDraw)();
	void(*PreDraw)();
	void(*PostDraw)();
	void(*CharaDraw_Hook)();
};

struct shBattleArea
{
	float center;
	float radius;
};

struct Light
{
	int kind;
	float intensity;
	float influence;
	float intensity2;
	float influence2;
	short cid;
	short fakekind;
	float inf_fac;
	void* DrawEnv_LightData;
	float pos[4];
	float vpos[4];
	float dir[4];
	float vdir[4];
	float color[4];
	float f_start;
	float f_end;
	float s_start;
	float s_end;
	float f_a;
	float f_b;
	float s_a;
	float s_b;
	float f_ra;
	float f_rb;
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

struct _anon1
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

struct sh2gfw_AREA_HEAD
{
	unsigned int area_id;
	unsigned int toGlobalTexHead;
	unsigned int toGlobalClutsHead;
	unsigned int date;
};

struct Stage_Data
{
	Event_List* ev_list;
	unsigned char* ev_pos;
	int(*ev_prog)();
	Item_List* gi_list;
	Model_List* mdl_list;
	Enemy_List* en_list;
	void(*stage_init)();
	void(*room_init)();
	void(*alltime_func)();
	int glb_crd;
	int pc_model;
	_AnimeInfo* stg_anim_info;
	int(*bgm_control)();
	_anon0* gfw_func;
	int(*chara_data_clear)();
	void(*sound_call_after_load)();
	int reserve_11;
};

struct Event_List
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

struct CharaData_DemoList
{
	int kind;
	fsFileIndex* model;
	fsFileIndex* animation;
	fsFileIndex* shadow;
	fsFileIndex* cluster;
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

struct Item_List
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
};

union fsFileIndex
{
	_anon7 index;
	unsigned long pack;
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

struct Model_List
{
	short kind;
	short id;
	short flag_off;
	short flag_on;
	float pos[4];
	float rot[4];
};

union fsFile
{
	_anon6 check;
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

struct Enemy_List
{
	short kind;
	short id;
	int pos_x;
	int pos_z;
	short pos_y;
	short rot_y;
	short status;
	unsigned short condition;
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
	float x;
	float y;
	float z;
	float w;
};

union _anon4
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
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

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
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

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon5 src_m;
	_anon3 src_t;
	_anon5 des_m;
	_anon3 des_t;
	_anon3 axis;
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

struct _anon5
{
	float d[4][4];
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

struct _anon6
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

struct DramaDemo_MessageTime
{
	unsigned short start;
	unsigned short end;
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

struct _anon7
{
	fsFile* fp;
	char* name;
};

struct DramaDemo_PlayInfo
{
	int demo_no;
	char* adr_dds_top;
	short* adr_anim;
	DramaDemo_MessageTime* adr_msg_time;
	short msg_start;
	short voice_sd_no;
	int* adr_voice;
	int stream_no;
	float stream_start;
	float add_pos_x;
	float add_pos_z;
};

struct shPlayerWork
{
	SubCharacter* player;
	_anon3 dist_rot;
	_anon3 dist_pos;
	_anon3 pos;
	_anon3 rot;
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
	_anon3 tgt_body_angle;
	_anon3 tgt_neck_angle;
	_anon3 tgt_arms_angle;
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

struct LightWork
{
	Light lights[12];
	int n_valid_parallels;
	int n_valid_parallel_matrices;
	int n_valid_extras;
	int n_valid_shadows;
	float nlms[4][4][2];
	float vnlms[4][4][2];
	float lcms[4][4][2];
	Light* valid_extras[6];
	Light* valid_shadows[8];
	float reflection_brightness;
	float reflection_color[4];
	float nhm[4][4];
	float vnhm[4][4];
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

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
_AnimeInfo pjames_anim[34];
_AnimeInfo pjames_hg_anim[11];
_AnimeInfo pjames_sg_anim[17];
_AnimeInfo pjames_rg_anim[5];
_AnimeInfo pjames_sp_anim[17];
_AnimeInfo pjames_ka_anim[33];
_AnimeInfo pjames_pi_anim[33];
_AnimeInfo pjames_na_anim[17];
_AnimeInfo pjames_cs_anim[24];
_AnimeInfo pjames_demo_anim[30];
_AnimeInfo pjames_stage_anim[21];
unsigned char ev_pos[374];
Event_List ev_list[33];
Item_List gi_list[7];
LightWork light_work;
int(*ev_prog)()[8];
Model_List mdl_list[2];
Enemy_List en_list[5];
_anon0 SpecialDrawFunctions;
Stage_Data stage_apart_w2f;
shPlayerWork sh2jms;
int ev_s_step;
int ev_p_step;
int ev_prog_flag_set;
int ev_cancel;
unsigned short msg_station[0];
_anon1 game_flag;
Pad_KeyConfig key_config;
float total_demo_frame;
float demo_frame;
char MemShare_gp_data_buf[0];
fsFileIndex data_demo_kitanai_kitanai_dds[1];
unsigned short msg_buffer[0];
Playing_Info playing;
float ev_timer;
fsFileIndex data_pic_apt_p_safe_close2_tex[1];
fsFileIndex data_pic_apt_p_safe_close_tex[1];
char* layer_adr;

int EvProgReadDearTim();
int EvProgUseLyneKey();
int EvProgGetApartStairKey();
int EvProgUseApartStairKey();
int EvProgWalletInToilet();
int EvProgWalletOutToilet();
void EvProgSubWalletMemo(int x);
int EvProgOpenSafe();
void EvProgSubSafaLockDraw();
void EvProgSubSafeLockRotate();
void EvAllTimeFunc();

// 
// Start address: 0x1f020a0
int EvProgReadDearTim()
{
	float door_pos[4];
	// Line 127, Address: 0x1f020a0, Func Offset: 0
	// Line 130, Address: 0x1f020a8, Func Offset: 0x8
	// Line 132, Address: 0x1f020f0, Func Offset: 0x50
	// Line 133, Address: 0x1f02104, Func Offset: 0x64
	// Line 134, Address: 0x1f0211c, Func Offset: 0x7c
	// Line 135, Address: 0x1f0213c, Func Offset: 0x9c
	// Line 136, Address: 0x1f02150, Func Offset: 0xb0
	// Line 137, Address: 0x1f02164, Func Offset: 0xc4
	// Line 140, Address: 0x1f0216c, Func Offset: 0xcc
	// Line 141, Address: 0x1f02190, Func Offset: 0xf0
	// Line 142, Address: 0x1f02198, Func Offset: 0xf8
	// Line 144, Address: 0x1f021c4, Func Offset: 0x124
	// Line 145, Address: 0x1f021cc, Func Offset: 0x12c
	// Line 147, Address: 0x1f021e0, Func Offset: 0x140
	// Line 150, Address: 0x1f021e8, Func Offset: 0x148
	// Line 151, Address: 0x1f021fc, Func Offset: 0x15c
	// Line 152, Address: 0x1f02210, Func Offset: 0x170
	// Line 155, Address: 0x1f02218, Func Offset: 0x178
	// Line 156, Address: 0x1f0222c, Func Offset: 0x18c
	// Line 157, Address: 0x1f02240, Func Offset: 0x1a0
	// Line 160, Address: 0x1f02248, Func Offset: 0x1a8
	// Line 161, Address: 0x1f0225c, Func Offset: 0x1bc
	// Line 163, Address: 0x1f02268, Func Offset: 0x1c8
	// Line 164, Address: 0x1f0226c, Func Offset: 0x1cc
	// Func End, Address: 0x1f0227c, Func Offset: 0x1dc
	// Line 241, Address: 0x1f020a0, Func Offset: 0
	// Line 245, Address: 0x1f020a8, Func Offset: 0x8
	// Line 247, Address: 0x1f0215c, Func Offset: 0xbc
	// Line 248, Address: 0x1f02170, Func Offset: 0xd0
	// Line 249, Address: 0x1f0217c, Func Offset: 0xdc
	// Line 253, Address: 0x1f02190, Func Offset: 0xf0
	// Line 255, Address: 0x1f021b0, Func Offset: 0x110
	// Line 256, Address: 0x1f021c0, Func Offset: 0x120
	// Line 257, Address: 0x1f021d4, Func Offset: 0x134
	// Line 260, Address: 0x1f021dc, Func Offset: 0x13c
	// Line 261, Address: 0x1f021e4, Func Offset: 0x144
	// Line 262, Address: 0x1f021ec, Func Offset: 0x14c
	// Line 263, Address: 0x1f021f4, Func Offset: 0x154
	// Line 264, Address: 0x1f02218, Func Offset: 0x178
	// Line 267, Address: 0x1f02220, Func Offset: 0x180
	// Line 268, Address: 0x1f02228, Func Offset: 0x188
	// Line 269, Address: 0x1f02230, Func Offset: 0x190
	// Line 270, Address: 0x1f0223c, Func Offset: 0x19c
	// Line 271, Address: 0x1f02244, Func Offset: 0x1a4
	// Line 272, Address: 0x1f02254, Func Offset: 0x1b4
	// Line 273, Address: 0x1f02264, Func Offset: 0x1c4
	// Line 274, Address: 0x1f02278, Func Offset: 0x1d8
	// Line 275, Address: 0x1f0229c, Func Offset: 0x1fc
	// Line 277, Address: 0x1f022d0, Func Offset: 0x230
	// Line 278, Address: 0x1f022e0, Func Offset: 0x240
	// Line 281, Address: 0x1f022f4, Func Offset: 0x254
	// Line 284, Address: 0x1f022fc, Func Offset: 0x25c
	// Line 285, Address: 0x1f02304, Func Offset: 0x264
	// Line 286, Address: 0x1f0230c, Func Offset: 0x26c
	// Line 287, Address: 0x1f02314, Func Offset: 0x274
	// Line 288, Address: 0x1f0231c, Func Offset: 0x27c
	// Line 289, Address: 0x1f02330, Func Offset: 0x290
	// Line 290, Address: 0x1f02340, Func Offset: 0x2a0
	// Line 292, Address: 0x1f02354, Func Offset: 0x2b4
	// Line 295, Address: 0x1f0235c, Func Offset: 0x2bc
	// Line 296, Address: 0x1f0236c, Func Offset: 0x2cc
	// Line 297, Address: 0x1f0237c, Func Offset: 0x2dc
	// Line 299, Address: 0x1f02390, Func Offset: 0x2f0
	// Line 302, Address: 0x1f02398, Func Offset: 0x2f8
	// Line 303, Address: 0x1f023a8, Func Offset: 0x308
	// Line 304, Address: 0x1f023bc, Func Offset: 0x31c
	// Line 305, Address: 0x1f023d0, Func Offset: 0x330
	// Line 306, Address: 0x1f023e4, Func Offset: 0x344
	// Line 309, Address: 0x1f023ec, Func Offset: 0x34c
	// Line 310, Address: 0x1f023fc, Func Offset: 0x35c
	// Line 311, Address: 0x1f0241c, Func Offset: 0x37c
	// Line 312, Address: 0x1f0242c, Func Offset: 0x38c
	// Line 314, Address: 0x1f02440, Func Offset: 0x3a0
	// Line 317, Address: 0x1f02448, Func Offset: 0x3a8
	// Line 318, Address: 0x1f02474, Func Offset: 0x3d4
	// Line 319, Address: 0x1f02498, Func Offset: 0x3f8
	// Line 320, Address: 0x1f024c0, Func Offset: 0x420
	// Line 321, Address: 0x1f024e4, Func Offset: 0x444
	// Line 322, Address: 0x1f02510, Func Offset: 0x470
	// Line 323, Address: 0x1f02528, Func Offset: 0x488
	// Line 324, Address: 0x1f02548, Func Offset: 0x4a8
	// Line 325, Address: 0x1f02568, Func Offset: 0x4c8
	// Line 327, Address: 0x1f0257c, Func Offset: 0x4dc
	// Line 330, Address: 0x1f02584, Func Offset: 0x4e4
	// Line 331, Address: 0x1f025a0, Func Offset: 0x500
	// Line 332, Address: 0x1f025bc, Func Offset: 0x51c
	// Line 333, Address: 0x1f025dc, Func Offset: 0x53c
	// Line 334, Address: 0x1f025e4, Func Offset: 0x544
	// Line 336, Address: 0x1f025f8, Func Offset: 0x558
	// Line 339, Address: 0x1f02600, Func Offset: 0x560
	// Line 340, Address: 0x1f0261c, Func Offset: 0x57c
	// Line 341, Address: 0x1f02638, Func Offset: 0x598
	// Line 342, Address: 0x1f02650, Func Offset: 0x5b0
	// Line 343, Address: 0x1f02658, Func Offset: 0x5b8
	// Line 345, Address: 0x1f0266c, Func Offset: 0x5cc
	// Line 348, Address: 0x1f02674, Func Offset: 0x5d4
	// Line 349, Address: 0x1f026a0, Func Offset: 0x600
	// Line 350, Address: 0x1f026c4, Func Offset: 0x624
	// Line 351, Address: 0x1f026ec, Func Offset: 0x64c
	// Line 352, Address: 0x1f02710, Func Offset: 0x670
	// Line 353, Address: 0x1f0273c, Func Offset: 0x69c
	// Line 354, Address: 0x1f02758, Func Offset: 0x6b8
	// Line 355, Address: 0x1f02768, Func Offset: 0x6c8
	// Line 356, Address: 0x1f027a0, Func Offset: 0x700
	// Line 359, Address: 0x1f027a8, Func Offset: 0x708
	// Line 360, Address: 0x1f027c0, Func Offset: 0x720
	// Line 364, Address: 0x1f027d0, Func Offset: 0x730
	// Line 365, Address: 0x1f027e4, Func Offset: 0x744
	// Line 367, Address: 0x1f027f0, Func Offset: 0x750
	// Line 368, Address: 0x1f027f4, Func Offset: 0x754
	// Func End, Address: 0x1f02804, Func Offset: 0x764
}

// 
// Start address: 0x1f02280
int EvProgUseLyneKey()
{
	// Line 170, Address: 0x1f02280, Func Offset: 0
	// Line 171, Address: 0x1f02288, Func Offset: 0x8
	// Line 175, Address: 0x1f022b8, Func Offset: 0x38
	// Func End, Address: 0x1f022c8, Func Offset: 0x48
	// Line 221, Address: 0x1f02280, Func Offset: 0
	// Line 222, Address: 0x1f02288, Func Offset: 0x8
	// Line 225, Address: 0x1f022dc, Func Offset: 0x5c
	// Line 226, Address: 0x1f022f0, Func Offset: 0x70
	// Line 227, Address: 0x1f022fc, Func Offset: 0x7c
	// Line 228, Address: 0x1f02304, Func Offset: 0x84
	// Line 232, Address: 0x1f02318, Func Offset: 0x98
	// Line 234, Address: 0x1f02338, Func Offset: 0xb8
	// Line 237, Address: 0x1f0234c, Func Offset: 0xcc
	// Line 238, Address: 0x1f02350, Func Offset: 0xd0
	// Line 239, Address: 0x1f02378, Func Offset: 0xf8
	// Line 242, Address: 0x1f02380, Func Offset: 0x100
	// Line 243, Address: 0x1f02388, Func Offset: 0x108
	// Line 244, Address: 0x1f02390, Func Offset: 0x110
	// Line 245, Address: 0x1f02398, Func Offset: 0x118
	// Line 246, Address: 0x1f023c8, Func Offset: 0x148
	// Line 249, Address: 0x1f023d0, Func Offset: 0x150
	// Line 250, Address: 0x1f023d8, Func Offset: 0x158
	// Line 251, Address: 0x1f023e0, Func Offset: 0x160
	// Line 252, Address: 0x1f023e8, Func Offset: 0x168
	// Line 253, Address: 0x1f023f0, Func Offset: 0x170
	// Line 254, Address: 0x1f02418, Func Offset: 0x198
	// Line 257, Address: 0x1f02420, Func Offset: 0x1a0
	// Line 258, Address: 0x1f02434, Func Offset: 0x1b4
	// Line 259, Address: 0x1f02448, Func Offset: 0x1c8
	// Line 260, Address: 0x1f02458, Func Offset: 0x1d8
	// Line 264, Address: 0x1f02464, Func Offset: 0x1e4
	// Line 265, Address: 0x1f02468, Func Offset: 0x1e8
	// Func End, Address: 0x1f02478, Func Offset: 0x1f8
	// Line 213, Address: 0x1f02280, Func Offset: 0
	// Line 214, Address: 0x1f02288, Func Offset: 0x8
	// Line 216, Address: 0x1f022c4, Func Offset: 0x44
	// Line 217, Address: 0x1f022d8, Func Offset: 0x58
	// Line 218, Address: 0x1f022e4, Func Offset: 0x64
	// Line 222, Address: 0x1f022f8, Func Offset: 0x78
	// Line 223, Address: 0x1f0230c, Func Offset: 0x8c
	// Line 225, Address: 0x1f02338, Func Offset: 0xb8
	// Line 229, Address: 0x1f0234c, Func Offset: 0xcc
	// Line 231, Address: 0x1f02364, Func Offset: 0xe4
	// Line 235, Address: 0x1f02378, Func Offset: 0xf8
	// Line 236, Address: 0x1f0238c, Func Offset: 0x10c
	// Line 238, Address: 0x1f02398, Func Offset: 0x118
	// Line 239, Address: 0x1f0239c, Func Offset: 0x11c
	// Func End, Address: 0x1f023ac, Func Offset: 0x12c
	// Line 243, Address: 0x1f02280, Func Offset: 0
	// Line 253, Address: 0x1f02288, Func Offset: 0x8
	// Line 255, Address: 0x1f022a0, Func Offset: 0x20
	// Line 256, Address: 0x1f022b4, Func Offset: 0x34
	// Line 258, Address: 0x1f022d0, Func Offset: 0x50
	// Line 260, Address: 0x1f022ec, Func Offset: 0x6c
	// Line 261, Address: 0x1f022fc, Func Offset: 0x7c
	// Line 265, Address: 0x1f02338, Func Offset: 0xb8
	// Func End, Address: 0x1f02348, Func Offset: 0xc8
}

// 
// Start address: 0x1f022d0
int EvProgGetApartStairKey()
{
	// Line 181, Address: 0x1f022d0, Func Offset: 0
	// Line 182, Address: 0x1f022d8, Func Offset: 0x8
	// Line 184, Address: 0x1f022e8, Func Offset: 0x18
	// Func End, Address: 0x1f022f8, Func Offset: 0x28
	// Line 279, Address: 0x1f022d0, Func Offset: 0
	// Line 280, Address: 0x1f022d8, Func Offset: 0x8
	// Line 281, Address: 0x1f022e8, Func Offset: 0x18
	// Func End, Address: 0x1f022f8, Func Offset: 0x28
}

// 
// Start address: 0x1f02300
int EvProgUseApartStairKey()
{
	// Line 190, Address: 0x1f02300, Func Offset: 0
	// Line 191, Address: 0x1f02308, Func Offset: 0x8
	// Line 194, Address: 0x1f02338, Func Offset: 0x38
	// Func End, Address: 0x1f02348, Func Offset: 0x48
	// Line 290, Address: 0x1f02300, Func Offset: 0
	// Line 294, Address: 0x1f02308, Func Offset: 0x8
	// Line 300, Address: 0x1f0233c, Func Offset: 0x3c
	// Line 301, Address: 0x1f02344, Func Offset: 0x44
	// Line 302, Address: 0x1f0234c, Func Offset: 0x4c
	// Line 303, Address: 0x1f02354, Func Offset: 0x54
	// Line 304, Address: 0x1f0235c, Func Offset: 0x5c
	// Line 308, Address: 0x1f02364, Func Offset: 0x64
	// Line 309, Address: 0x1f0236c, Func Offset: 0x6c
	// Line 310, Address: 0x1f02374, Func Offset: 0x74
	// Line 311, Address: 0x1f0237c, Func Offset: 0x7c
	// Line 312, Address: 0x1f02384, Func Offset: 0x84
	// Line 316, Address: 0x1f0238c, Func Offset: 0x8c
	// Line 318, Address: 0x1f023bc, Func Offset: 0xbc
	// Line 319, Address: 0x1f023d0, Func Offset: 0xd0
	// Line 320, Address: 0x1f023dc, Func Offset: 0xdc
	// Line 321, Address: 0x1f023f4, Func Offset: 0xf4
	// Line 323, Address: 0x1f02414, Func Offset: 0x114
	// Line 324, Address: 0x1f02428, Func Offset: 0x128
	// Line 325, Address: 0x1f02430, Func Offset: 0x130
	// Line 326, Address: 0x1f02438, Func Offset: 0x138
	// Line 327, Address: 0x1f0244c, Func Offset: 0x14c
	// Line 328, Address: 0x1f02464, Func Offset: 0x164
	// Line 330, Address: 0x1f02484, Func Offset: 0x184
	// Line 331, Address: 0x1f02498, Func Offset: 0x198
	// Line 332, Address: 0x1f024a0, Func Offset: 0x1a0
	// Line 333, Address: 0x1f024a8, Func Offset: 0x1a8
	// Line 334, Address: 0x1f024bc, Func Offset: 0x1bc
	// Line 335, Address: 0x1f024c4, Func Offset: 0x1c4
	// Line 337, Address: 0x1f024e4, Func Offset: 0x1e4
	// Line 338, Address: 0x1f024f8, Func Offset: 0x1f8
	// Line 339, Address: 0x1f02504, Func Offset: 0x204
	// Line 340, Address: 0x1f0250c, Func Offset: 0x20c
	// Line 342, Address: 0x1f02520, Func Offset: 0x220
	// Line 345, Address: 0x1f02528, Func Offset: 0x228
	// Line 346, Address: 0x1f02540, Func Offset: 0x240
	// Line 347, Address: 0x1f02554, Func Offset: 0x254
	// Line 348, Address: 0x1f02574, Func Offset: 0x274
	// Line 349, Address: 0x1f0257c, Func Offset: 0x27c
	// Line 350, Address: 0x1f02590, Func Offset: 0x290
	// Line 352, Address: 0x1f025b0, Func Offset: 0x2b0
	// Line 353, Address: 0x1f025c4, Func Offset: 0x2c4
	// Line 357, Address: 0x1f025d8, Func Offset: 0x2d8
	// Line 358, Address: 0x1f025fc, Func Offset: 0x2fc
	// Line 359, Address: 0x1f02604, Func Offset: 0x304
	// Line 360, Address: 0x1f02614, Func Offset: 0x314
	// Line 361, Address: 0x1f0261c, Func Offset: 0x31c
	// Line 362, Address: 0x1f02630, Func Offset: 0x330
	// Line 363, Address: 0x1f0264c, Func Offset: 0x34c
	// Line 366, Address: 0x1f02654, Func Offset: 0x354
	// Line 369, Address: 0x1f02678, Func Offset: 0x378
	// Line 370, Address: 0x1f02688, Func Offset: 0x388
	// Line 371, Address: 0x1f0269c, Func Offset: 0x39c
	// Line 374, Address: 0x1f026a4, Func Offset: 0x3a4
	// Line 375, Address: 0x1f026b4, Func Offset: 0x3b4
	// Line 377, Address: 0x1f026dc, Func Offset: 0x3dc
	// Line 378, Address: 0x1f026f8, Func Offset: 0x3f8
	// Line 379, Address: 0x1f0270c, Func Offset: 0x40c
	// Line 382, Address: 0x1f02714, Func Offset: 0x414
	// Line 383, Address: 0x1f0273c, Func Offset: 0x43c
	// Line 388, Address: 0x1f027b4, Func Offset: 0x4b4
	// Line 389, Address: 0x1f027c4, Func Offset: 0x4c4
	// Line 390, Address: 0x1f027d8, Func Offset: 0x4d8
	// Line 391, Address: 0x1f027e0, Func Offset: 0x4e0
	// Line 392, Address: 0x1f027f4, Func Offset: 0x4f4
	// Line 395, Address: 0x1f027fc, Func Offset: 0x4fc
	// Line 396, Address: 0x1f02810, Func Offset: 0x510
	// Line 397, Address: 0x1f02820, Func Offset: 0x520
	// Line 398, Address: 0x1f02834, Func Offset: 0x534
	// Line 401, Address: 0x1f0283c, Func Offset: 0x53c
	// Line 403, Address: 0x1f02864, Func Offset: 0x564
	// Line 405, Address: 0x1f0288c, Func Offset: 0x58c
	// Line 406, Address: 0x1f028a0, Func Offset: 0x5a0
	// Line 407, Address: 0x1f028a8, Func Offset: 0x5a8
	// Line 409, Address: 0x1f028d0, Func Offset: 0x5d0
	// Line 411, Address: 0x1f028e4, Func Offset: 0x5e4
	// Line 414, Address: 0x1f028ec, Func Offset: 0x5ec
	// Line 415, Address: 0x1f02908, Func Offset: 0x608
	// Line 416, Address: 0x1f02924, Func Offset: 0x624
	// Line 417, Address: 0x1f0292c, Func Offset: 0x62c
	// Line 418, Address: 0x1f02944, Func Offset: 0x644
	// Line 419, Address: 0x1f02954, Func Offset: 0x654
	// Line 420, Address: 0x1f02968, Func Offset: 0x668
	// Line 422, Address: 0x1f0298c, Func Offset: 0x68c
	// Line 423, Address: 0x1f029a4, Func Offset: 0x6a4
	// Line 424, Address: 0x1f029b4, Func Offset: 0x6b4
	// Line 425, Address: 0x1f029c8, Func Offset: 0x6c8
	// Line 427, Address: 0x1f029ec, Func Offset: 0x6ec
	// Line 428, Address: 0x1f02a04, Func Offset: 0x704
	// Line 429, Address: 0x1f02a14, Func Offset: 0x714
	// Line 430, Address: 0x1f02a28, Func Offset: 0x728
	// Line 432, Address: 0x1f02a4c, Func Offset: 0x74c
	// Line 433, Address: 0x1f02a64, Func Offset: 0x764
	// Line 434, Address: 0x1f02a74, Func Offset: 0x774
	// Line 435, Address: 0x1f02a88, Func Offset: 0x788
	// Line 437, Address: 0x1f02aac, Func Offset: 0x7ac
	// Line 438, Address: 0x1f02ac0, Func Offset: 0x7c0
	// Line 441, Address: 0x1f02ac8, Func Offset: 0x7c8
	// Line 442, Address: 0x1f02af0, Func Offset: 0x7f0
	// Line 443, Address: 0x1f02b04, Func Offset: 0x804
	// Line 444, Address: 0x1f02b14, Func Offset: 0x814
	// Line 447, Address: 0x1f02b1c, Func Offset: 0x81c
	// Line 448, Address: 0x1f02b40, Func Offset: 0x840
	// Line 451, Address: 0x1f02b48, Func Offset: 0x848
	// Line 452, Address: 0x1f02b5c, Func Offset: 0x85c
	// Line 453, Address: 0x1f02b6c, Func Offset: 0x86c
	// Line 454, Address: 0x1f02b84, Func Offset: 0x884
	// Line 455, Address: 0x1f02b9c, Func Offset: 0x89c
	// Line 457, Address: 0x1f02ba8, Func Offset: 0x8a8
	// Line 458, Address: 0x1f02bac, Func Offset: 0x8ac
	// Func End, Address: 0x1f02bbc, Func Offset: 0x8bc
}

// 
// Start address: 0x1f02350
int EvProgWalletInToilet()
{
	DramaDemo_PlayInfo dirty;
	CharaData_DemoList chara_data[3];
	// Line 200, Address: 0x1f02350, Func Offset: 0
	// Line 219, Address: 0x1f02358, Func Offset: 0x8
	// Line 221, Address: 0x1f023b8, Func Offset: 0x68
	// Line 222, Address: 0x1f023cc, Func Offset: 0x7c
	// Line 223, Address: 0x1f023d8, Func Offset: 0x88
	// Line 224, Address: 0x1f023f0, Func Offset: 0xa0
	// Line 225, Address: 0x1f02404, Func Offset: 0xb4
	// Line 228, Address: 0x1f02418, Func Offset: 0xc8
	// Line 229, Address: 0x1f0242c, Func Offset: 0xdc
	// Line 231, Address: 0x1f02458, Func Offset: 0x108
	// Line 232, Address: 0x1f02468, Func Offset: 0x118
	// Line 234, Address: 0x1f0247c, Func Offset: 0x12c
	// Line 237, Address: 0x1f02484, Func Offset: 0x134
	// Line 238, Address: 0x1f0249c, Func Offset: 0x14c
	// Line 239, Address: 0x1f024b0, Func Offset: 0x160
	// Line 240, Address: 0x1f024bc, Func Offset: 0x16c
	// Line 241, Address: 0x1f024d0, Func Offset: 0x180
	// Line 244, Address: 0x1f024e4, Func Offset: 0x194
	// Line 245, Address: 0x1f024f4, Func Offset: 0x1a4
	// Line 246, Address: 0x1f02524, Func Offset: 0x1d4
	// Line 247, Address: 0x1f02538, Func Offset: 0x1e8
	// Line 248, Address: 0x1f0255c, Func Offset: 0x20c
	// Line 249, Address: 0x1f02560, Func Offset: 0x210
	// Line 250, Address: 0x1f0257c, Func Offset: 0x22c
	// Line 251, Address: 0x1f02590, Func Offset: 0x240
	// Line 253, Address: 0x1f025a4, Func Offset: 0x254
	// Line 256, Address: 0x1f025ac, Func Offset: 0x25c
	// Line 257, Address: 0x1f025b8, Func Offset: 0x268
	// Line 258, Address: 0x1f025c4, Func Offset: 0x274
	// Line 259, Address: 0x1f025d0, Func Offset: 0x280
	// Line 260, Address: 0x1f025e4, Func Offset: 0x294
	// Line 261, Address: 0x1f025ec, Func Offset: 0x29c
	// Line 262, Address: 0x1f025f8, Func Offset: 0x2a8
	// Line 263, Address: 0x1f02608, Func Offset: 0x2b8
	// Line 267, Address: 0x1f0261c, Func Offset: 0x2cc
	// Line 268, Address: 0x1f02624, Func Offset: 0x2d4
	// Line 269, Address: 0x1f02638, Func Offset: 0x2e8
	// Line 270, Address: 0x1f02640, Func Offset: 0x2f0
	// Line 271, Address: 0x1f02654, Func Offset: 0x304
	// Line 272, Address: 0x1f02660, Func Offset: 0x310
	// Line 273, Address: 0x1f02670, Func Offset: 0x320
	// Line 274, Address: 0x1f02680, Func Offset: 0x330
	// Line 276, Address: 0x1f02694, Func Offset: 0x344
	// Line 279, Address: 0x1f0269c, Func Offset: 0x34c
	// Line 280, Address: 0x1f026b0, Func Offset: 0x360
	// Line 282, Address: 0x1f026bc, Func Offset: 0x36c
	// Line 283, Address: 0x1f026c0, Func Offset: 0x370
	// Func End, Address: 0x1f026d0, Func Offset: 0x380
	// Line 315, Address: 0x1f02350, Func Offset: 0
	// Line 316, Address: 0x1f02358, Func Offset: 0x8
	// Line 317, Address: 0x1f02368, Func Offset: 0x18
	// Func End, Address: 0x1f02378, Func Offset: 0x28
	// Line 287, Address: 0x1f02350, Func Offset: 0
	// Line 289, Address: 0x1f02368, Func Offset: 0x18
	// Func End, Address: 0x1f02370, Func Offset: 0x20
	// Line 272, Address: 0x1f02350, Func Offset: 0
	// Func End, Address: 0x1f02358, Func Offset: 0x8
}

// 
// Start address: 0x1f026d0
int EvProgWalletOutToilet()
{
	// Line 289, Address: 0x1f026d0, Func Offset: 0
	// Line 290, Address: 0x1f026d8, Func Offset: 0x8
	// Line 292, Address: 0x1f0272c, Func Offset: 0x5c
	// Line 293, Address: 0x1f02740, Func Offset: 0x70
	// Line 294, Address: 0x1f0274c, Func Offset: 0x7c
	// Line 295, Address: 0x1f02760, Func Offset: 0x90
	// Line 298, Address: 0x1f02768, Func Offset: 0x98
	// Line 299, Address: 0x1f02778, Func Offset: 0xa8
	// Line 300, Address: 0x1f02788, Func Offset: 0xb8
	// Line 302, Address: 0x1f0279c, Func Offset: 0xcc
	// Line 305, Address: 0x1f027a4, Func Offset: 0xd4
	// Line 306, Address: 0x1f027b0, Func Offset: 0xe0
	// Line 309, Address: 0x1f027c4, Func Offset: 0xf4
	// Line 310, Address: 0x1f027e8, Func Offset: 0x118
	// Line 311, Address: 0x1f027f0, Func Offset: 0x120
	// Line 312, Address: 0x1f02800, Func Offset: 0x130
	// Line 313, Address: 0x1f02814, Func Offset: 0x144
	// Line 316, Address: 0x1f0281c, Func Offset: 0x14c
	// Line 317, Address: 0x1f02844, Func Offset: 0x174
	// Line 318, Address: 0x1f02858, Func Offset: 0x188
	// Line 321, Address: 0x1f02860, Func Offset: 0x190
	// Line 322, Address: 0x1f02874, Func Offset: 0x1a4
	// Line 324, Address: 0x1f02880, Func Offset: 0x1b0
	// Line 325, Address: 0x1f02884, Func Offset: 0x1b4
	// Func End, Address: 0x1f02894, Func Offset: 0x1c4
	// Line 259, Address: 0x1f026d0, Func Offset: 0
	// Line 263, Address: 0x1f026d8, Func Offset: 0x8
	// Line 264, Address: 0x1f026e0, Func Offset: 0x10
	// Line 265, Address: 0x1f026ec, Func Offset: 0x1c
	// Line 266, Address: 0x1f02704, Func Offset: 0x34
	// Line 267, Address: 0x1f02710, Func Offset: 0x40
	// Line 268, Address: 0x1f02718, Func Offset: 0x48
	// Line 269, Address: 0x1f0272c, Func Offset: 0x5c
	// Line 270, Address: 0x1f02740, Func Offset: 0x70
	// Line 271, Address: 0x1f02750, Func Offset: 0x80
	// Line 272, Address: 0x1f0275c, Func Offset: 0x8c
	// Line 274, Address: 0x1f0276c, Func Offset: 0x9c
	// Func End, Address: 0x1f0277c, Func Offset: 0xac
}

// 
// Start address: 0x1f028a0
void EvProgSubWalletMemo(int x)
{
	int i;
	int work;
	unsigned char c_work[4];
	// Line 474, Address: 0x1f028a0, Func Offset: 0
	// Line 504, Address: 0x1f028b0, Func Offset: 0x10
	// Line 506, Address: 0x1f02934, Func Offset: 0x94
	// Line 507, Address: 0x1f02948, Func Offset: 0xa8
	// Line 508, Address: 0x1f0295c, Func Offset: 0xbc
	// Line 509, Address: 0x1f02974, Func Offset: 0xd4
	// Line 510, Address: 0x1f02988, Func Offset: 0xe8
	// Line 511, Address: 0x1f029a0, Func Offset: 0x100
	// Line 512, Address: 0x1f029b0, Func Offset: 0x110
	// Line 513, Address: 0x1f029b8, Func Offset: 0x118
	// Line 514, Address: 0x1f029cc, Func Offset: 0x12c
	// Line 515, Address: 0x1f029d4, Func Offset: 0x134
	// Line 517, Address: 0x1f02a00, Func Offset: 0x160
	// Line 519, Address: 0x1f02a14, Func Offset: 0x174
	// Line 522, Address: 0x1f02a1c, Func Offset: 0x17c
	// Line 525, Address: 0x1f02a50, Func Offset: 0x1b0
	// Line 526, Address: 0x1f02a5c, Func Offset: 0x1bc
	// Line 527, Address: 0x1f02a70, Func Offset: 0x1d0
	// Line 531, Address: 0x1f02a84, Func Offset: 0x1e4
	// Line 532, Address: 0x1f02a98, Func Offset: 0x1f8
	// Line 533, Address: 0x1f02ac8, Func Offset: 0x228
	// Line 534, Address: 0x1f02adc, Func Offset: 0x23c
	// Line 535, Address: 0x1f02b10, Func Offset: 0x270
	// Line 537, Address: 0x1f02b3c, Func Offset: 0x29c
	// Line 539, Address: 0x1f02b48, Func Offset: 0x2a8
	// Line 540, Address: 0x1f02b50, Func Offset: 0x2b0
	// Line 541, Address: 0x1f02b64, Func Offset: 0x2c4
	// Line 542, Address: 0x1f02b74, Func Offset: 0x2d4
	// Line 545, Address: 0x1f02b9c, Func Offset: 0x2fc
	// Line 548, Address: 0x1f02ba4, Func Offset: 0x304
	// Line 551, Address: 0x1f02bc8, Func Offset: 0x328
	// Line 552, Address: 0x1f02bd8, Func Offset: 0x338
	// Line 553, Address: 0x1f02be0, Func Offset: 0x340
	// Line 554, Address: 0x1f02bf4, Func Offset: 0x354
	// Line 557, Address: 0x1f02bfc, Func Offset: 0x35c
	// Line 558, Address: 0x1f02c04, Func Offset: 0x364
	// Line 559, Address: 0x1f02c0c, Func Offset: 0x36c
	// Line 560, Address: 0x1f02c18, Func Offset: 0x378
	// Line 561, Address: 0x1f02c20, Func Offset: 0x380
	// Line 562, Address: 0x1f02c44, Func Offset: 0x3a4
	// Line 565, Address: 0x1f02c4c, Func Offset: 0x3ac
	// Line 566, Address: 0x1f02c54, Func Offset: 0x3b4
	// Line 567, Address: 0x1f02c5c, Func Offset: 0x3bc
	// Line 568, Address: 0x1f02c68, Func Offset: 0x3c8
	// Line 569, Address: 0x1f02c70, Func Offset: 0x3d0
	// Line 570, Address: 0x1f02c88, Func Offset: 0x3e8
	// Line 571, Address: 0x1f02ca0, Func Offset: 0x400
	// Line 573, Address: 0x1f02ce0, Func Offset: 0x440
	// Line 574, Address: 0x1f02cf8, Func Offset: 0x458
	// Line 575, Address: 0x1f02d08, Func Offset: 0x468
	// Line 576, Address: 0x1f02d28, Func Offset: 0x488
	// Line 577, Address: 0x1f02d30, Func Offset: 0x490
	// Line 578, Address: 0x1f02d5c, Func Offset: 0x4bc
	// Line 579, Address: 0x1f02d6c, Func Offset: 0x4cc
	// Line 582, Address: 0x1f02d74, Func Offset: 0x4d4
	// Line 583, Address: 0x1f02d8c, Func Offset: 0x4ec
	// Line 584, Address: 0x1f02db4, Func Offset: 0x514
	// Line 585, Address: 0x1f02dc0, Func Offset: 0x520
	// Line 586, Address: 0x1f02dc8, Func Offset: 0x528
	// Line 587, Address: 0x1f02dd8, Func Offset: 0x538
	// Line 588, Address: 0x1f02de4, Func Offset: 0x544
	// Line 590, Address: 0x1f02e0c, Func Offset: 0x56c
	// Line 591, Address: 0x1f02e24, Func Offset: 0x584
	// Line 592, Address: 0x1f02e34, Func Offset: 0x594
	// Line 595, Address: 0x1f02e4c, Func Offset: 0x5ac
	// Line 597, Address: 0x1f02e54, Func Offset: 0x5b4
	// Line 598, Address: 0x1f02e70, Func Offset: 0x5d0
	// Line 599, Address: 0x1f02e80, Func Offset: 0x5e0
	// Line 600, Address: 0x1f02e8c, Func Offset: 0x5ec
	// Line 601, Address: 0x1f02ea4, Func Offset: 0x604
	// Line 602, Address: 0x1f02eb8, Func Offset: 0x618
	// Line 605, Address: 0x1f02ed0, Func Offset: 0x630
	// Line 607, Address: 0x1f02ee4, Func Offset: 0x644
	// Line 610, Address: 0x1f02eec, Func Offset: 0x64c
	// Line 611, Address: 0x1f02efc, Func Offset: 0x65c
	// Line 612, Address: 0x1f02f14, Func Offset: 0x674
	// Line 613, Address: 0x1f02f28, Func Offset: 0x688
	// Line 614, Address: 0x1f02f3c, Func Offset: 0x69c
	// Line 615, Address: 0x1f02f44, Func Offset: 0x6a4
	// Line 616, Address: 0x1f02f58, Func Offset: 0x6b8
	// Line 617, Address: 0x1f02f60, Func Offset: 0x6c0
	// Line 619, Address: 0x1f02f8c, Func Offset: 0x6ec
	// Line 620, Address: 0x1f02f9c, Func Offset: 0x6fc
	// Line 621, Address: 0x1f02fb0, Func Offset: 0x710
	// Line 626, Address: 0x1f02fb8, Func Offset: 0x718
	// Line 627, Address: 0x1f02fcc, Func Offset: 0x72c
	// Line 628, Address: 0x1f03000, Func Offset: 0x760
	// Line 630, Address: 0x1f0302c, Func Offset: 0x78c
	// Line 632, Address: 0x1f03038, Func Offset: 0x798
	// Line 633, Address: 0x1f03054, Func Offset: 0x7b4
	// Line 636, Address: 0x1f0305c, Func Offset: 0x7bc
	// Line 637, Address: 0x1f03068, Func Offset: 0x7c8
	// Line 638, Address: 0x1f03074, Func Offset: 0x7d4
	// Line 639, Address: 0x1f03088, Func Offset: 0x7e8
	// Line 641, Address: 0x1f030b0, Func Offset: 0x810
	// Line 642, Address: 0x1f030bc, Func Offset: 0x81c
	// Line 645, Address: 0x1f030d0, Func Offset: 0x830
	// Line 646, Address: 0x1f030e4, Func Offset: 0x844
	// Line 647, Address: 0x1f03100, Func Offset: 0x860
	// Line 649, Address: 0x1f0310c, Func Offset: 0x86c
	// Line 650, Address: 0x1f03110, Func Offset: 0x870
	// Func End, Address: 0x1f03128, Func Offset: 0x888
	// Line 330, Address: 0x1f028a0, Func Offset: 0
	// Line 335, Address: 0x1f028b4, Func Offset: 0x14
	// Line 337, Address: 0x1f028e4, Func Offset: 0x44
	// Line 338, Address: 0x1f028f0, Func Offset: 0x50
	// Line 339, Address: 0x1f0290c, Func Offset: 0x6c
	// Line 341, Address: 0x1f0295c, Func Offset: 0xbc
	// Line 343, Address: 0x1f02998, Func Offset: 0xf8
	// Line 344, Address: 0x1f029c0, Func Offset: 0x120
	// Line 345, Address: 0x1f029dc, Func Offset: 0x13c
	// Line 346, Address: 0x1f029e0, Func Offset: 0x140
	// Line 347, Address: 0x1f029fc, Func Offset: 0x15c
	// Line 348, Address: 0x1f02a0c, Func Offset: 0x16c
	// Line 351, Address: 0x1f02a14, Func Offset: 0x174
	// Line 352, Address: 0x1f02a20, Func Offset: 0x180
	// Line 353, Address: 0x1f02a5c, Func Offset: 0x1bc
	// Line 354, Address: 0x1f02a78, Func Offset: 0x1d8
	// Line 355, Address: 0x1f02a7c, Func Offset: 0x1dc
	// Line 356, Address: 0x1f02a98, Func Offset: 0x1f8
	// Line 357, Address: 0x1f02aac, Func Offset: 0x20c
	// Line 360, Address: 0x1f02ab4, Func Offset: 0x214
	// Line 361, Address: 0x1f02ac0, Func Offset: 0x220
	// Line 362, Address: 0x1f02ae0, Func Offset: 0x240
	// Line 363, Address: 0x1f02ae8, Func Offset: 0x248
	// Line 364, Address: 0x1f02aec, Func Offset: 0x24c
	// Line 365, Address: 0x1f02af0, Func Offset: 0x250
	// Line 366, Address: 0x1f02b04, Func Offset: 0x264
	// Line 367, Address: 0x1f02b10, Func Offset: 0x270
	// Line 368, Address: 0x1f02b18, Func Offset: 0x278
	// Line 369, Address: 0x1f02b34, Func Offset: 0x294
	// Line 370, Address: 0x1f02b38, Func Offset: 0x298
	// Line 371, Address: 0x1f02b40, Func Offset: 0x2a0
	// Line 372, Address: 0x1f02b48, Func Offset: 0x2a8
	// Line 373, Address: 0x1f02b4c, Func Offset: 0x2ac
	// Line 374, Address: 0x1f02b68, Func Offset: 0x2c8
	// Line 376, Address: 0x1f02b6c, Func Offset: 0x2cc
	// Line 377, Address: 0x1f02b74, Func Offset: 0x2d4
	// Line 378, Address: 0x1f02b7c, Func Offset: 0x2dc
	// Line 380, Address: 0x1f02b80, Func Offset: 0x2e0
	// Line 381, Address: 0x1f02b9c, Func Offset: 0x2fc
	// Line 382, Address: 0x1f02bac, Func Offset: 0x30c
	// Line 385, Address: 0x1f02bb4, Func Offset: 0x314
	// Line 386, Address: 0x1f02bc0, Func Offset: 0x320
	// Line 387, Address: 0x1f02be0, Func Offset: 0x340
	// Line 388, Address: 0x1f02be8, Func Offset: 0x348
	// Line 389, Address: 0x1f02bec, Func Offset: 0x34c
	// Line 390, Address: 0x1f02bf4, Func Offset: 0x354
	// Line 391, Address: 0x1f02bfc, Func Offset: 0x35c
	// Line 393, Address: 0x1f02c00, Func Offset: 0x360
	// Line 394, Address: 0x1f02c1c, Func Offset: 0x37c
	// Line 396, Address: 0x1f02c2c, Func Offset: 0x38c
	// Line 398, Address: 0x1f02c30, Func Offset: 0x390
	// Line 399, Address: 0x1f02c54, Func Offset: 0x3b4
	// Line 400, Address: 0x1f02c68, Func Offset: 0x3c8
	// Func End, Address: 0x1f02c80, Func Offset: 0x3e0
}

// 
// Start address: 0x1f02c80
int EvProgOpenSafe()
{
	// Line 529, Address: 0x1f02c80, Func Offset: 0
	// Line 542, Address: 0x1f02c88, Func Offset: 0x8
	// Line 543, Address: 0x1f02c9c, Func Offset: 0x1c
	// Line 544, Address: 0x1f02cb0, Func Offset: 0x30
	// Line 546, Address: 0x1f02ccc, Func Offset: 0x4c
	// Line 548, Address: 0x1f02ce8, Func Offset: 0x68
	// Line 550, Address: 0x1f02d04, Func Offset: 0x84
	// Line 551, Address: 0x1f02d14, Func Offset: 0x94
	// Line 552, Address: 0x1f02d1c, Func Offset: 0x9c
	// Line 553, Address: 0x1f02d28, Func Offset: 0xa8
	// Line 554, Address: 0x1f02d40, Func Offset: 0xc0
	// Line 555, Address: 0x1f02d5c, Func Offset: 0xdc
	// Line 556, Address: 0x1f02d6c, Func Offset: 0xec
	// Line 557, Address: 0x1f02d74, Func Offset: 0xf4
	// Line 558, Address: 0x1f02d90, Func Offset: 0x110
	// Line 560, Address: 0x1f02da0, Func Offset: 0x120
	// Func End, Address: 0x1f02db0, Func Offset: 0x130
	// Line 406, Address: 0x1f02c80, Func Offset: 0
	// Line 409, Address: 0x1f02c88, Func Offset: 0x8
	// Line 411, Address: 0x1f02cdc, Func Offset: 0x5c
	// Line 412, Address: 0x1f02cf0, Func Offset: 0x70
	// Line 413, Address: 0x1f02cfc, Func Offset: 0x7c
	// Line 417, Address: 0x1f02d10, Func Offset: 0x90
	// Line 420, Address: 0x1f02d34, Func Offset: 0xb4
	// Line 421, Address: 0x1f02d44, Func Offset: 0xc4
	// Line 422, Address: 0x1f02d4c, Func Offset: 0xcc
	// Line 426, Address: 0x1f02d60, Func Offset: 0xe0
	// Line 427, Address: 0x1f02d68, Func Offset: 0xe8
	// Line 428, Address: 0x1f02d70, Func Offset: 0xf0
	// Line 429, Address: 0x1f02d78, Func Offset: 0xf8
	// Line 430, Address: 0x1f02d80, Func Offset: 0x100
	// Line 431, Address: 0x1f02da4, Func Offset: 0x124
	// Line 434, Address: 0x1f02dac, Func Offset: 0x12c
	// Line 435, Address: 0x1f02db4, Func Offset: 0x134
	// Line 436, Address: 0x1f02dbc, Func Offset: 0x13c
	// Line 437, Address: 0x1f02dc4, Func Offset: 0x144
	// Line 438, Address: 0x1f02dcc, Func Offset: 0x14c
	// Line 439, Address: 0x1f02dd4, Func Offset: 0x154
	// Line 440, Address: 0x1f02dec, Func Offset: 0x16c
	// Line 441, Address: 0x1f02e08, Func Offset: 0x188
	// Line 442, Address: 0x1f02e28, Func Offset: 0x1a8
	// Line 443, Address: 0x1f02e38, Func Offset: 0x1b8
	// Line 445, Address: 0x1f02e4c, Func Offset: 0x1cc
	// Line 446, Address: 0x1f02e54, Func Offset: 0x1d4
	// Line 447, Address: 0x1f02e70, Func Offset: 0x1f0
	// Line 448, Address: 0x1f02e80, Func Offset: 0x200
	// Line 451, Address: 0x1f02e94, Func Offset: 0x214
	// Line 454, Address: 0x1f02e9c, Func Offset: 0x21c
	// Line 455, Address: 0x1f02ec0, Func Offset: 0x240
	// Line 458, Address: 0x1f02ec8, Func Offset: 0x248
	// Line 459, Address: 0x1f02ee0, Func Offset: 0x260
	// Line 462, Address: 0x1f02f0c, Func Offset: 0x28c
	// Line 463, Address: 0x1f02f20, Func Offset: 0x2a0
	// Line 464, Address: 0x1f02f30, Func Offset: 0x2b0
	// Line 466, Address: 0x1f02f3c, Func Offset: 0x2bc
	// Line 467, Address: 0x1f02f40, Func Offset: 0x2c0
	// Func End, Address: 0x1f02f50, Func Offset: 0x2d0
	// Line 544, Address: 0x1f02c80, Func Offset: 0
	// Line 549, Address: 0x1f02c88, Func Offset: 0x8
	// Line 550, Address: 0x1f02c8c, Func Offset: 0xc
	// Line 552, Address: 0x1f02c94, Func Offset: 0x14
	// Line 556, Address: 0x1f02ca0, Func Offset: 0x20
	// Line 557, Address: 0x1f02cc8, Func Offset: 0x48
	// Line 559, Address: 0x1f02cf4, Func Offset: 0x74
	// Line 560, Address: 0x1f02d00, Func Offset: 0x80
	// Line 561, Address: 0x1f02d10, Func Offset: 0x90
	// Line 562, Address: 0x1f02d20, Func Offset: 0xa0
	// Line 563, Address: 0x1f02d30, Func Offset: 0xb0
	// Line 564, Address: 0x1f02d40, Func Offset: 0xc0
	// Line 565, Address: 0x1f02d50, Func Offset: 0xd0
	// Line 566, Address: 0x1f02d60, Func Offset: 0xe0
	// Line 568, Address: 0x1f02d70, Func Offset: 0xf0
	// Line 569, Address: 0x1f02d7c, Func Offset: 0xfc
	// Func End, Address: 0x1f02d8c, Func Offset: 0x10c
}

// 
// Start address: 0x1f02f50
void EvProgSubSafaLockDraw()
{
	int i;
	int lock;
	float rot;
	float pos[2][4];
	float sinrot;
	float cosrot;
	PicDraw_Data pic;
	// Line 472, Address: 0x1f02f50, Func Offset: 0
	// Line 483, Address: 0x1f02f60, Func Offset: 0x10
	// Line 485, Address: 0x1f02f7c, Func Offset: 0x2c
	// Line 487, Address: 0x1f02f8c, Func Offset: 0x3c
	// Line 488, Address: 0x1f02fb0, Func Offset: 0x60
	// Line 490, Address: 0x1f02fdc, Func Offset: 0x8c
	// Line 491, Address: 0x1f02fe0, Func Offset: 0x90
	// Line 492, Address: 0x1f02fec, Func Offset: 0x9c
	// Line 493, Address: 0x1f03028, Func Offset: 0xd8
	// Line 494, Address: 0x1f0303c, Func Offset: 0xec
	// Line 496, Address: 0x1f030a0, Func Offset: 0x150
	// Line 497, Address: 0x1f030b0, Func Offset: 0x160
	// Line 499, Address: 0x1f030bc, Func Offset: 0x16c
	// Line 500, Address: 0x1f030f4, Func Offset: 0x1a4
	// Line 501, Address: 0x1f03100, Func Offset: 0x1b0
	// Line 502, Address: 0x1f0311c, Func Offset: 0x1cc
	// Line 503, Address: 0x1f03128, Func Offset: 0x1d8
	// Line 504, Address: 0x1f03144, Func Offset: 0x1f4
	// Line 505, Address: 0x1f03150, Func Offset: 0x200
	// Line 506, Address: 0x1f03160, Func Offset: 0x210
	// Line 510, Address: 0x1f0316c, Func Offset: 0x21c
	// Line 513, Address: 0x1f03210, Func Offset: 0x2c0
	// Line 515, Address: 0x1f0329c, Func Offset: 0x34c
	// Line 516, Address: 0x1f032bc, Func Offset: 0x36c
	// Line 517, Address: 0x1f032c4, Func Offset: 0x374
	// Line 518, Address: 0x1f032d0, Func Offset: 0x380
	// Func End, Address: 0x1f032e8, Func Offset: 0x398
}

// 
// Start address: 0x1f032f0
void EvProgSubSafeLockRotate()
{
	int i;
	int lock;
	// Line 523, Address: 0x1f032f0, Func Offset: 0
	// Line 527, Address: 0x1f032fc, Func Offset: 0xc
	// Line 529, Address: 0x1f03314, Func Offset: 0x24
	// Line 530, Address: 0x1f03318, Func Offset: 0x28
	// Line 531, Address: 0x1f03324, Func Offset: 0x34
	// Line 532, Address: 0x1f03360, Func Offset: 0x70
	// Line 534, Address: 0x1f03374, Func Offset: 0x84
	// Line 535, Address: 0x1f0338c, Func Offset: 0x9c
	// Line 536, Address: 0x1f033a4, Func Offset: 0xb4
	// Line 537, Address: 0x1f033a8, Func Offset: 0xb8
	// Line 538, Address: 0x1f033b4, Func Offset: 0xc4
	// Line 539, Address: 0x1f033c4, Func Offset: 0xd4
	// Line 541, Address: 0x1f033d4, Func Offset: 0xe4
	// Line 543, Address: 0x1f033e8, Func Offset: 0xf8
	// Line 544, Address: 0x1f03400, Func Offset: 0x110
	// Line 545, Address: 0x1f03434, Func Offset: 0x144
	// Line 546, Address: 0x1f0344c, Func Offset: 0x15c
	// Line 547, Address: 0x1f03464, Func Offset: 0x174
	// Line 548, Address: 0x1f0346c, Func Offset: 0x17c
	// Line 551, Address: 0x1f03484, Func Offset: 0x194
	// Line 552, Address: 0x1f034a4, Func Offset: 0x1b4
	// Line 553, Address: 0x1f034bc, Func Offset: 0x1cc
	// Line 554, Address: 0x1f034c0, Func Offset: 0x1d0
	// Line 555, Address: 0x1f034d0, Func Offset: 0x1e0
	// Line 556, Address: 0x1f034e0, Func Offset: 0x1f0
	// Line 557, Address: 0x1f03514, Func Offset: 0x224
	// Line 558, Address: 0x1f0352c, Func Offset: 0x23c
	// Line 559, Address: 0x1f03544, Func Offset: 0x254
	// Line 560, Address: 0x1f0355c, Func Offset: 0x26c
	// Line 561, Address: 0x1f0358c, Func Offset: 0x29c
	// Line 562, Address: 0x1f03594, Func Offset: 0x2a4
	// Line 566, Address: 0x1f035ac, Func Offset: 0x2bc
	// Line 567, Address: 0x1f035b8, Func Offset: 0x2c8
	// Line 568, Address: 0x1f03600, Func Offset: 0x310
	// Line 569, Address: 0x1f03630, Func Offset: 0x340
	// Line 570, Address: 0x1f03644, Func Offset: 0x354
	// Func End, Address: 0x1f03658, Func Offset: 0x368
}

// 
// Start address: 0x1f03660
void EvAllTimeFunc()
{
	int room;
	int disp_ctrl_list[5];
	// Line 575, Address: 0x1f03660, Func Offset: 0
	// Line 579, Address: 0x1f03668, Func Offset: 0x8
	// Line 580, Address: 0x1f0366c, Func Offset: 0xc
	// Line 582, Address: 0x1f03674, Func Offset: 0x14
	// Line 583, Address: 0x1f03680, Func Offset: 0x20
	// Line 584, Address: 0x1f03694, Func Offset: 0x34
	// Line 585, Address: 0x1f036ac, Func Offset: 0x4c
	// Line 587, Address: 0x1f036c0, Func Offset: 0x60
	// Line 588, Address: 0x1f036d8, Func Offset: 0x78
	// Line 590, Address: 0x1f036f4, Func Offset: 0x94
	// Line 593, Address: 0x1f03708, Func Offset: 0xa8
	// Line 594, Address: 0x1f03714, Func Offset: 0xb4
	// Func End, Address: 0x1f03724, Func Offset: 0xc4
}

