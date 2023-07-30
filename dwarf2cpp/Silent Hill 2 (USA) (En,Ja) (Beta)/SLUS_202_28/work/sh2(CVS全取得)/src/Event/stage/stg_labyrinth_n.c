typedef struct SubCharacter;
typedef struct shBattleShot;
typedef struct PicDraw_Data;
typedef struct sh2gfw_AREA_HEAD;
typedef struct shBattleArea;
typedef struct Model_List;
typedef struct shBattleInfo;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct Enemy_List;
typedef struct _anon0;
typedef struct Pad_KeyConfig;
typedef struct _CL_VHIT_WALL;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef struct _anon1;
typedef union fsFile;
typedef struct PAD_3D;
typedef union _anon2;
typedef struct fsCdFile;
typedef struct _CL_VHIT_RESULT;
typedef struct _anon3;
typedef union _anon4;
typedef struct Stage_Data;
typedef struct Event_List;
typedef struct fsMgcFile;
typedef struct PAD_2D;
typedef struct CharaData_DemoList;
typedef struct Item_List;
typedef union fsFileIndex;
typedef struct _CL_HITPOLY_PLANE;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct PAD_INFO;
typedef struct shSkelton;
typedef struct fsMgfFile;
typedef struct _anon5;
typedef struct _AnimeInfo;
typedef struct DramaDemo_MessageTime;
typedef struct fsHdFile;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct Playing_Info;
typedef struct fsMgpFile;
typedef struct DramaDemo_PlayInfo;
typedef struct _anon6;
typedef struct DynamicLight;
typedef struct shPlayerWork;
typedef struct _anon7;
typedef struct shBattleFight;

typedef void(*type_4)();
typedef int(*type_6)();
typedef void(*type_52)(SubCharacter*);
typedef void(*type_58)(SubCharacter*);

typedef unsigned int type_0[7];
typedef unsigned char type_1[14];
typedef fsFileIndex type_2[1];
typedef fsFileIndex type_3[1];
typedef _AnimeInfo type_5[5];
typedef _AnimeInfo type_7[12];
typedef unsigned char type_8[97];
typedef int(*type_9)()[10];
typedef fsFileIndex type_10[1];
typedef Model_List type_11[22];
typedef CharaData_DemoList type_12[2];
typedef _AnimeInfo type_13[33];
typedef Item_List type_14[5];
typedef _CL_HITPOLY_PLANE type_15[50];
typedef fsFileIndex type_16[1];
typedef unsigned char type_17[2];
typedef _AnimeInfo type_18[11];
typedef unsigned int type_19[255];
typedef unsigned char type_20[3];
typedef _AnimeInfo type_21[30];
typedef unsigned int type_22[32];
typedef unsigned char type_23[20];
typedef unsigned char type_24[4];
typedef char type_25[4];
typedef char type_26[4];
typedef fsFileIndex type_27[1];
typedef fsFileIndex type_28[1];
typedef char type_29[4];
typedef float type_30[2];
typedef float type_31[2][6];
typedef int type_32[6];
typedef unsigned char type_33[640];
typedef _AnimeInfo type_34[17];
typedef char type_35[4];
typedef char type_36[4];
typedef fsFileIndex type_37[1];
typedef _AnimeInfo type_38[34];
typedef float type_39[4][4];
typedef Enemy_List type_40[5];
typedef shAttackInfo type_41[66];
typedef float type_42[4];
typedef _AnimeInfo type_43[17];
typedef float type_44[4][4];
typedef PAD_INFO type_45[10];
typedef unsigned char type_46[14];
typedef fsFileIndex type_47[1];
typedef float type_48[2];
typedef float type_49[4];
typedef _AnimeInfo type_50[17];
typedef float type_51[4][2];
typedef _CL_HITPOLY_PLANE type_53[2];
typedef unsigned char type_54[4];
typedef fsFileIndex type_55[1];
typedef unsigned char type_56[4];
typedef unsigned char type_57[69];
typedef char type_59[0];
typedef unsigned char type_60[4];
typedef _AnimeInfo type_61[33];
typedef Event_List type_62[57];
typedef CharaData_DemoList type_63[3];
typedef _CL_HITPOLY_PLANE type_64[2];
typedef int type_65[3];
typedef unsigned char type_66[2];
typedef unsigned char type_67[2];
typedef fsFileIndex type_68[1];
typedef float type_69[4];
typedef _AnimeInfo type_70[24];
typedef float type_71[7];

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

struct shBattleShot
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

struct sh2gfw_AREA_HEAD
{
	unsigned int area_id;
	unsigned int toGlobalTexHead;
	unsigned int toGlobalClutsHead;
	unsigned int date;
};

struct shBattleArea
{
	float center;
	float radius;
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

struct _anon0
{
	void(*SpecDraw)();
	void(*PreDraw)();
	void(*PostDraw)();
	void(*CharaDraw_Hook)();
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

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
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

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
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

struct PAD_3D
{
	char round_way;
	unsigned char reserved1;
	unsigned char lslide;
	unsigned char rslide;
	unsigned char lturn180;
	unsigned char rturn180;
};

union _anon2
{
	shBattleFight fight;
	shBattleShot shot;
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

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
};

struct CharaData_DemoList
{
	int kind;
	fsFileIndex* model;
	fsFileIndex* animation;
	fsFileIndex* shadow;
	fsFileIndex* cluster;
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
	float d[4][4];
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

struct DramaDemo_MessageTime
{
	unsigned short start;
	unsigned short end;
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

struct DynamicLight
{
	float NowCamDir[4];
	float BeforeCamDir[4];
	float NowDir[4];
	float BeforeDir[4];
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

struct _anon7
{
	fsFile* fp;
	char* name;
};

struct shBattleFight
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
_AnimeInfo pjames_stage_anim[12];
unsigned char ev_pos[640];
Event_List ev_list[57];
Item_List gi_list[5];
_CL_HITPOLY_PLANE clActWallList_ps105[2];
_CL_HITPOLY_PLANE clActWallList_ps109[50];
_CL_HITPOLY_PLANE clActWallList_ps137[2];
float colvec[4];
float colref[4];
DynamicLight DynamicLW;
int(*ev_prog)()[10];
_anon0 gfw_func;
Model_List mdl_list[22];
Enemy_List en_list[5];
Stage_Data stage_labyrinth_n;
_anon1 game_flag;
shPlayerWork sh2jms;
int ev_s_step;
int ev_p_step;
Playing_Info playing;
char MemShare_gp_data_buf[0];
fsFileIndex data_demo_kubitsuri_kubitsuri_dds[1];
fsFileIndex data_pic_dls_p_hanging_hard_tex[1];
fsFileIndex data_pic_dls_p_hanging_normal_tex[1];
fsFileIndex data_pic_dls_p_hanging_easy_tex[1];
char* layer_adr;
fsFileIndex data_pic_dls_p_hanging_2_tex[1];
fsFileIndex data_pic_dls_p_manacles_on_tex[1];
fsFileIndex data_demo_kaiten_hll_jms_anm[1];
fsFileIndex data_demo_kaiten_kaiten_dds[1];
Pad_KeyConfig key_config;
float ev_timer;
fsFileIndex data_pic_dls_p_manacles_off_tex[1];
fsFileIndex data_demo_mar_2dead_mar_2dead_dds[1];
char* hanging_dds_adr;

int EvProgHangingCorpse();
int EvProgHangRope();
int EvProgReadHangHint();
int EvProgReadPullOnce();
int EvProgGetFalseChargeKey();
int EvProgCanNotRotate();
int EvProgUseFalseChargeKey();
int EvProgMariaRedeath();
int EvProgHoleTo9thLayer();
void EvRoomInit();
void EvAllTimeFunc();
int EvBgmControl();

// 
// Start address: 0x1f02090
int EvProgHangingCorpse()
{
	int i;
	int work;
	// Line 173, Address: 0x1f02090, Func Offset: 0
	// Line 182, Address: 0x1f02098, Func Offset: 0x8
	// Line 185, Address: 0x1f020c8, Func Offset: 0x38
	// Line 186, Address: 0x1f020e0, Func Offset: 0x50
	// Line 188, Address: 0x1f02110, Func Offset: 0x80
	// Line 189, Address: 0x1f02128, Func Offset: 0x98
	// Line 190, Address: 0x1f02138, Func Offset: 0xa8
	// Line 191, Address: 0x1f02158, Func Offset: 0xc8
	// Line 192, Address: 0x1f0216c, Func Offset: 0xdc
	// Line 193, Address: 0x1f02174, Func Offset: 0xe4
	// Line 197, Address: 0x1f02188, Func Offset: 0xf8
	// Line 198, Address: 0x1f021b4, Func Offset: 0x124
	// Line 201, Address: 0x1f021bc, Func Offset: 0x12c
	// Line 202, Address: 0x1f021dc, Func Offset: 0x14c
	// Line 203, Address: 0x1f021f0, Func Offset: 0x160
	// Line 204, Address: 0x1f021f8, Func Offset: 0x168
	// Line 205, Address: 0x1f02204, Func Offset: 0x174
	// Line 206, Address: 0x1f02218, Func Offset: 0x188
	// Line 207, Address: 0x1f02224, Func Offset: 0x194
	// Line 208, Address: 0x1f02238, Func Offset: 0x1a8
	// Line 209, Address: 0x1f02244, Func Offset: 0x1b4
	// Line 210, Address: 0x1f02258, Func Offset: 0x1c8
	// Line 211, Address: 0x1f02264, Func Offset: 0x1d4
	// Line 213, Address: 0x1f02270, Func Offset: 0x1e0
	// Line 214, Address: 0x1f02274, Func Offset: 0x1e4
	// Func End, Address: 0x1f02284, Func Offset: 0x1f4
	// Line 169, Address: 0x1f02090, Func Offset: 0
	// Line 173, Address: 0x1f02098, Func Offset: 0x8
	// Line 175, Address: 0x1f020d4, Func Offset: 0x44
	// Line 176, Address: 0x1f020e8, Func Offset: 0x58
	// Line 177, Address: 0x1f020f4, Func Offset: 0x64
	// Line 178, Address: 0x1f02128, Func Offset: 0x98
	// Line 179, Address: 0x1f0213c, Func Offset: 0xac
	// Line 182, Address: 0x1f02144, Func Offset: 0xb4
	// Line 183, Address: 0x1f0216c, Func Offset: 0xdc
	// Line 186, Address: 0x1f02174, Func Offset: 0xe4
	// Line 187, Address: 0x1f0217c, Func Offset: 0xec
	// Line 188, Address: 0x1f02188, Func Offset: 0xf8
	// Line 189, Address: 0x1f021b8, Func Offset: 0x128
	// Line 190, Address: 0x1f021d4, Func Offset: 0x144
	// Line 191, Address: 0x1f021e8, Func Offset: 0x158
	// Line 194, Address: 0x1f021fc, Func Offset: 0x16c
	// Line 195, Address: 0x1f0220c, Func Offset: 0x17c
	// Line 196, Address: 0x1f02234, Func Offset: 0x1a4
	// Line 197, Address: 0x1f02240, Func Offset: 0x1b0
	// Line 198, Address: 0x1f0224c, Func Offset: 0x1bc
	// Line 199, Address: 0x1f02258, Func Offset: 0x1c8
	// Line 200, Address: 0x1f02264, Func Offset: 0x1d4
	// Line 201, Address: 0x1f02270, Func Offset: 0x1e0
	// Line 203, Address: 0x1f02274, Func Offset: 0x1e4
	// Line 204, Address: 0x1f02288, Func Offset: 0x1f8
	// Line 205, Address: 0x1f022b0, Func Offset: 0x220
	// Line 206, Address: 0x1f022bc, Func Offset: 0x22c
	// Line 207, Address: 0x1f022c8, Func Offset: 0x238
	// Line 208, Address: 0x1f022d4, Func Offset: 0x244
	// Line 209, Address: 0x1f022e0, Func Offset: 0x250
	// Line 210, Address: 0x1f022ec, Func Offset: 0x25c
	// Line 212, Address: 0x1f022f0, Func Offset: 0x260
	// Line 213, Address: 0x1f022f8, Func Offset: 0x268
	// Line 214, Address: 0x1f02320, Func Offset: 0x290
	// Line 215, Address: 0x1f0232c, Func Offset: 0x29c
	// Line 216, Address: 0x1f02338, Func Offset: 0x2a8
	// Line 217, Address: 0x1f02344, Func Offset: 0x2b4
	// Line 218, Address: 0x1f02350, Func Offset: 0x2c0
	// Line 219, Address: 0x1f0235c, Func Offset: 0x2cc
	// Line 222, Address: 0x1f02360, Func Offset: 0x2d0
	// Line 223, Address: 0x1f02384, Func Offset: 0x2f4
	// Line 226, Address: 0x1f0238c, Func Offset: 0x2fc
	// Line 227, Address: 0x1f023a0, Func Offset: 0x310
	// Line 228, Address: 0x1f023ac, Func Offset: 0x31c
	// Line 229, Address: 0x1f023f4, Func Offset: 0x364
	// Line 231, Address: 0x1f02400, Func Offset: 0x370
	// Line 232, Address: 0x1f02404, Func Offset: 0x374
	// Func End, Address: 0x1f02414, Func Offset: 0x384
}

// 
// Start address: 0x1f02420
int EvProgHangRope()
{
	int i;
	int work;
	SubCharacter* scp;
	DramaDemo_PlayInfo hang;
	float pos[2][6];
	CharaData_DemoList kubitsuri_data[2];
	// Line 237, Address: 0x1f02420, Func Offset: 0
	// Line 238, Address: 0x1f02428, Func Offset: 0x8
	// Line 240, Address: 0x1f0243c, Func Offset: 0x1c
	// Func End, Address: 0x1f0244c, Func Offset: 0x2c
	// Line 333, Address: 0x1f02420, Func Offset: 0
	// Line 334, Address: 0x1f02428, Func Offset: 0x8
	// Line 335, Address: 0x1f02438, Func Offset: 0x18
	// Func End, Address: 0x1f02448, Func Offset: 0x28
	// Line 238, Address: 0x1f02420, Func Offset: 0
	// Line 260, Address: 0x1f02430, Func Offset: 0x10
	// Line 262, Address: 0x1f02484, Func Offset: 0x64
	// Line 263, Address: 0x1f02498, Func Offset: 0x78
	// Line 264, Address: 0x1f024a4, Func Offset: 0x84
	// Line 265, Address: 0x1f024bc, Func Offset: 0x9c
	// Line 266, Address: 0x1f024d0, Func Offset: 0xb0
	// Line 270, Address: 0x1f024e4, Func Offset: 0xc4
	// Line 271, Address: 0x1f024f8, Func Offset: 0xd8
	// Line 273, Address: 0x1f02524, Func Offset: 0x104
	// Line 274, Address: 0x1f02534, Func Offset: 0x114
	// Line 276, Address: 0x1f02548, Func Offset: 0x128
	// Line 279, Address: 0x1f02550, Func Offset: 0x130
	// Line 280, Address: 0x1f02568, Func Offset: 0x148
	// Line 281, Address: 0x1f0257c, Func Offset: 0x15c
	// Line 282, Address: 0x1f02588, Func Offset: 0x168
	// Line 283, Address: 0x1f0259c, Func Offset: 0x17c
	// Line 284, Address: 0x1f025a8, Func Offset: 0x188
	// Line 285, Address: 0x1f025f0, Func Offset: 0x1d0
	// Line 286, Address: 0x1f02604, Func Offset: 0x1e4
	// Line 287, Address: 0x1f02614, Func Offset: 0x1f4
	// Line 288, Address: 0x1f02630, Func Offset: 0x210
	// Line 289, Address: 0x1f02648, Func Offset: 0x228
	// Line 293, Address: 0x1f0265c, Func Offset: 0x23c
	// Line 294, Address: 0x1f02688, Func Offset: 0x268
	// Line 297, Address: 0x1f02690, Func Offset: 0x270
	// Line 298, Address: 0x1f0269c, Func Offset: 0x27c
	// Line 299, Address: 0x1f026b0, Func Offset: 0x290
	// Line 300, Address: 0x1f026bc, Func Offset: 0x29c
	// Line 301, Address: 0x1f026c8, Func Offset: 0x2a8
	// Line 302, Address: 0x1f026dc, Func Offset: 0x2bc
	// Line 303, Address: 0x1f026e4, Func Offset: 0x2c4
	// Line 304, Address: 0x1f026ec, Func Offset: 0x2cc
	// Line 305, Address: 0x1f026f8, Func Offset: 0x2d8
	// Line 306, Address: 0x1f0270c, Func Offset: 0x2ec
	// Line 307, Address: 0x1f02710, Func Offset: 0x2f0
	// Line 308, Address: 0x1f02744, Func Offset: 0x324
	// Line 309, Address: 0x1f02774, Func Offset: 0x354
	// Line 310, Address: 0x1f027a0, Func Offset: 0x380
	// Line 311, Address: 0x1f027ac, Func Offset: 0x38c
	// Line 312, Address: 0x1f027c8, Func Offset: 0x3a8
	// Line 313, Address: 0x1f027e8, Func Offset: 0x3c8
	// Line 314, Address: 0x1f027f4, Func Offset: 0x3d4
	// Line 315, Address: 0x1f027f8, Func Offset: 0x3d8
	// Line 316, Address: 0x1f02814, Func Offset: 0x3f4
	// Line 317, Address: 0x1f02824, Func Offset: 0x404
	// Line 320, Address: 0x1f02838, Func Offset: 0x418
	// Line 321, Address: 0x1f0284c, Func Offset: 0x42c
	// Line 322, Address: 0x1f0289c, Func Offset: 0x47c
	// Line 324, Address: 0x1f028a8, Func Offset: 0x488
	// Line 325, Address: 0x1f028ac, Func Offset: 0x48c
	// Func End, Address: 0x1f028c4, Func Offset: 0x4a4
}

// 
// Start address: 0x1f028d0
int EvProgReadHangHint()
{
	int msg;
	// Line 331, Address: 0x1f028d0, Func Offset: 0
	// Line 334, Address: 0x1f028d8, Func Offset: 0x8
	// Line 337, Address: 0x1f02900, Func Offset: 0x30
	// Line 338, Address: 0x1f02904, Func Offset: 0x34
	// Line 339, Address: 0x1f02918, Func Offset: 0x48
	// Line 341, Address: 0x1f02920, Func Offset: 0x50
	// Line 342, Address: 0x1f02924, Func Offset: 0x54
	// Line 343, Address: 0x1f02938, Func Offset: 0x68
	// Line 345, Address: 0x1f02940, Func Offset: 0x70
	// Line 346, Address: 0x1f02944, Func Offset: 0x74
	// Line 350, Address: 0x1f02958, Func Offset: 0x88
	// Line 353, Address: 0x1f02978, Func Offset: 0xa8
	// Line 354, Address: 0x1f02990, Func Offset: 0xc0
	// Line 357, Address: 0x1f0299c, Func Offset: 0xcc
	// Line 358, Address: 0x1f029b4, Func Offset: 0xe4
	// Line 361, Address: 0x1f029c0, Func Offset: 0xf0
	// Line 362, Address: 0x1f029d8, Func Offset: 0x108
	// Line 365, Address: 0x1f029e4, Func Offset: 0x114
	// Line 366, Address: 0x1f029e8, Func Offset: 0x118
	// Func End, Address: 0x1f029f8, Func Offset: 0x128
}

// 
// Start address: 0x1f02a00
int EvProgReadPullOnce()
{
	// Line 418, Address: 0x1f02a00, Func Offset: 0
	// Line 420, Address: 0x1f02a08, Func Offset: 0x8
	// Line 423, Address: 0x1f02a18, Func Offset: 0x18
	// Line 425, Address: 0x1f02a20, Func Offset: 0x20
	// Line 427, Address: 0x1f02a40, Func Offset: 0x40
	// Line 428, Address: 0x1f02a48, Func Offset: 0x48
	// Line 429, Address: 0x1f02a50, Func Offset: 0x50
	// Line 431, Address: 0x1f02a6c, Func Offset: 0x6c
	// Line 432, Address: 0x1f02a90, Func Offset: 0x90
	// Line 436, Address: 0x1f02aa8, Func Offset: 0xa8
	// Func End, Address: 0x1f02ab8, Func Offset: 0xb8
	// Line 856, Address: 0x1f02a00, Func Offset: 0
	// Line 873, Address: 0x1f02a08, Func Offset: 0x8
	// Line 875, Address: 0x1f02a38, Func Offset: 0x38
	// Line 876, Address: 0x1f02a48, Func Offset: 0x48
	// Line 877, Address: 0x1f02a68, Func Offset: 0x68
	// Line 878, Address: 0x1f02a7c, Func Offset: 0x7c
	// Line 879, Address: 0x1f02a84, Func Offset: 0x84
	// Line 882, Address: 0x1f02a98, Func Offset: 0x98
	// Line 883, Address: 0x1f02ac4, Func Offset: 0xc4
	// Line 886, Address: 0x1f02acc, Func Offset: 0xcc
	// Line 887, Address: 0x1f02ae0, Func Offset: 0xe0
	// Line 888, Address: 0x1f02b00, Func Offset: 0x100
	// Line 889, Address: 0x1f02b14, Func Offset: 0x114
	// Line 890, Address: 0x1f02b1c, Func Offset: 0x11c
	// Line 892, Address: 0x1f02b4c, Func Offset: 0x14c
	// Line 893, Address: 0x1f02b58, Func Offset: 0x158
	// Line 896, Address: 0x1f02b94, Func Offset: 0x194
	// Line 897, Address: 0x1f02ba8, Func Offset: 0x1a8
	// Line 899, Address: 0x1f02bb4, Func Offset: 0x1b4
	// Line 900, Address: 0x1f02bb8, Func Offset: 0x1b8
	// Func End, Address: 0x1f02bc8, Func Offset: 0x1c8
	// Line 406, Address: 0x1f02a00, Func Offset: 0
	// Line 407, Address: 0x1f02a08, Func Offset: 0x8
	// Line 409, Address: 0x1f02a1c, Func Offset: 0x1c
	// Func End, Address: 0x1f02a2c, Func Offset: 0x2c
}

// 
// Start address: 0x1f02a30
int EvProgGetFalseChargeKey()
{
	// Line 415, Address: 0x1f02a30, Func Offset: 0
	// Line 416, Address: 0x1f02a38, Func Offset: 0x8
	// Line 418, Address: 0x1f02a48, Func Offset: 0x18
	// Func End, Address: 0x1f02a58, Func Offset: 0x28
}

// 
// Start address: 0x1f02a60
int EvProgCanNotRotate()
{
	// Line 423, Address: 0x1f02a60, Func Offset: 0
	// Line 424, Address: 0x1f02a68, Func Offset: 0x8
	// Line 426, Address: 0x1f02a7c, Func Offset: 0x1c
	// Func End, Address: 0x1f02a8c, Func Offset: 0x2c
}

// 
// Start address: 0x1f02a90
int EvProgUseFalseChargeKey()
{
	float backup[4];
	<unknown fundamental type (0xa510)>* anim_adr;
	DramaDemo_PlayInfo info;
	// Line 432, Address: 0x1f02a90, Func Offset: 0
	// Line 442, Address: 0x1f02a98, Func Offset: 0x8
	// Line 444, Address: 0x1f02b1c, Func Offset: 0x8c
	// Line 445, Address: 0x1f02b30, Func Offset: 0xa0
	// Line 446, Address: 0x1f02b3c, Func Offset: 0xac
	// Line 447, Address: 0x1f02b44, Func Offset: 0xb4
	// Line 448, Address: 0x1f02b58, Func Offset: 0xc8
	// Line 449, Address: 0x1f02b64, Func Offset: 0xd4
	// Line 450, Address: 0x1f02b70, Func Offset: 0xe0
	// Line 451, Address: 0x1f02b7c, Func Offset: 0xec
	// Line 455, Address: 0x1f02b90, Func Offset: 0x100
	// Line 458, Address: 0x1f02bb4, Func Offset: 0x124
	// Line 459, Address: 0x1f02bc4, Func Offset: 0x134
	// Line 463, Address: 0x1f02bd8, Func Offset: 0x148
	// Line 464, Address: 0x1f02be0, Func Offset: 0x150
	// Line 465, Address: 0x1f02be8, Func Offset: 0x158
	// Line 466, Address: 0x1f02c04, Func Offset: 0x174
	// Line 467, Address: 0x1f02c0c, Func Offset: 0x17c
	// Line 468, Address: 0x1f02c30, Func Offset: 0x1a0
	// Line 471, Address: 0x1f02c38, Func Offset: 0x1a8
	// Line 472, Address: 0x1f02c40, Func Offset: 0x1b0
	// Line 473, Address: 0x1f02c48, Func Offset: 0x1b8
	// Line 474, Address: 0x1f02c64, Func Offset: 0x1d4
	// Line 475, Address: 0x1f02c6c, Func Offset: 0x1dc
	// Line 476, Address: 0x1f02c74, Func Offset: 0x1e4
	// Line 479, Address: 0x1f02cac, Func Offset: 0x21c
	// Line 480, Address: 0x1f02cc0, Func Offset: 0x230
	// Line 483, Address: 0x1f02cc8, Func Offset: 0x238
	// Line 484, Address: 0x1f02cf4, Func Offset: 0x264
	// Line 485, Address: 0x1f02d10, Func Offset: 0x280
	// Line 486, Address: 0x1f02d18, Func Offset: 0x288
	// Line 488, Address: 0x1f02d2c, Func Offset: 0x29c
	// Line 489, Address: 0x1f02d34, Func Offset: 0x2a4
	// Line 490, Address: 0x1f02d3c, Func Offset: 0x2ac
	// Line 492, Address: 0x1f02d70, Func Offset: 0x2e0
	// Line 493, Address: 0x1f02d78, Func Offset: 0x2e8
	// Line 496, Address: 0x1f02d80, Func Offset: 0x2f0
	// Line 497, Address: 0x1f02d88, Func Offset: 0x2f8
	// Line 498, Address: 0x1f02d90, Func Offset: 0x300
	// Line 499, Address: 0x1f02dac, Func Offset: 0x31c
	// Line 500, Address: 0x1f02db4, Func Offset: 0x324
	// Line 501, Address: 0x1f02ddc, Func Offset: 0x34c
	// Line 502, Address: 0x1f02df0, Func Offset: 0x360
	// Line 503, Address: 0x1f02e00, Func Offset: 0x370
	// Line 505, Address: 0x1f02e14, Func Offset: 0x384
	// Line 508, Address: 0x1f02e1c, Func Offset: 0x38c
	// Line 509, Address: 0x1f02e40, Func Offset: 0x3b0
	// Line 512, Address: 0x1f02e48, Func Offset: 0x3b8
	// Line 513, Address: 0x1f02e5c, Func Offset: 0x3cc
	// Line 514, Address: 0x1f02e74, Func Offset: 0x3e4
	// Line 516, Address: 0x1f02ea4, Func Offset: 0x414
	// Line 517, Address: 0x1f02ebc, Func Offset: 0x42c
	// Line 518, Address: 0x1f02ecc, Func Offset: 0x43c
	// Line 519, Address: 0x1f02eec, Func Offset: 0x45c
	// Line 520, Address: 0x1f02ef4, Func Offset: 0x464
	// Line 521, Address: 0x1f02f08, Func Offset: 0x478
	// Line 526, Address: 0x1f02f1c, Func Offset: 0x48c
	// Line 527, Address: 0x1f02f48, Func Offset: 0x4b8
	// Line 530, Address: 0x1f02f50, Func Offset: 0x4c0
	// Line 531, Address: 0x1f02f64, Func Offset: 0x4d4
	// Line 532, Address: 0x1f02f7c, Func Offset: 0x4ec
	// Line 533, Address: 0x1f02f84, Func Offset: 0x4f4
	// Line 534, Address: 0x1f02f90, Func Offset: 0x500
	// Line 535, Address: 0x1f02fa4, Func Offset: 0x514
	// Line 536, Address: 0x1f02fb8, Func Offset: 0x528
	// Line 537, Address: 0x1f02fcc, Func Offset: 0x53c
	// Line 538, Address: 0x1f02fe0, Func Offset: 0x550
	// Line 539, Address: 0x1f02ff4, Func Offset: 0x564
	// Line 540, Address: 0x1f0300c, Func Offset: 0x57c
	// Line 542, Address: 0x1f03018, Func Offset: 0x588
	// Line 543, Address: 0x1f0301c, Func Offset: 0x58c
	// Func End, Address: 0x1f0302c, Func Offset: 0x59c
}

// 
// Start address: 0x1f03030
int EvProgMariaRedeath()
{
	DramaDemo_PlayInfo redeath;
	CharaData_DemoList chara_data[3];
	// Line 549, Address: 0x1f03030, Func Offset: 0
	// Line 577, Address: 0x1f03038, Func Offset: 0x8
	// Line 579, Address: 0x1f03068, Func Offset: 0x38
	// Line 580, Address: 0x1f03080, Func Offset: 0x50
	// Line 581, Address: 0x1f0308c, Func Offset: 0x5c
	// Line 582, Address: 0x1f030a0, Func Offset: 0x70
	// Line 583, Address: 0x1f030b4, Func Offset: 0x84
	// Line 584, Address: 0x1f030c8, Func Offset: 0x98
	// Line 588, Address: 0x1f030dc, Func Offset: 0xac
	// Line 589, Address: 0x1f03108, Func Offset: 0xd8
	// Line 592, Address: 0x1f03110, Func Offset: 0xe0
	// Line 593, Address: 0x1f03120, Func Offset: 0xf0
	// Line 594, Address: 0x1f0312c, Func Offset: 0xfc
	// Line 595, Address: 0x1f03138, Func Offset: 0x108
	// Line 596, Address: 0x1f0314c, Func Offset: 0x11c
	// Line 597, Address: 0x1f03154, Func Offset: 0x124
	// Line 598, Address: 0x1f03160, Func Offset: 0x130
	// Line 599, Address: 0x1f0316c, Func Offset: 0x13c
	// Line 601, Address: 0x1f03178, Func Offset: 0x148
	// Line 602, Address: 0x1f0317c, Func Offset: 0x14c
	// Func End, Address: 0x1f0318c, Func Offset: 0x15c
}

// 
// Start address: 0x1f03190
int EvProgHoleTo9thLayer()
{
	// Line 481, Address: 0x1f03190, Func Offset: 0
	// Line 485, Address: 0x1f03198, Func Offset: 0x8
	// Line 486, Address: 0x1f0319c, Func Offset: 0xc
	// Line 488, Address: 0x1f031a4, Func Offset: 0x14
	// Line 489, Address: 0x1f031b0, Func Offset: 0x20
	// Line 490, Address: 0x1f031c8, Func Offset: 0x38
	// Line 492, Address: 0x1f031dc, Func Offset: 0x4c
	// Line 493, Address: 0x1f031e4, Func Offset: 0x54
	// Line 496, Address: 0x1f031f8, Func Offset: 0x68
	// Line 497, Address: 0x1f03210, Func Offset: 0x80
	// Line 499, Address: 0x1f03224, Func Offset: 0x94
	// Line 500, Address: 0x1f0322c, Func Offset: 0x9c
	// Line 503, Address: 0x1f03240, Func Offset: 0xb0
	// Line 504, Address: 0x1f03258, Func Offset: 0xc8
	// Line 506, Address: 0x1f0326c, Func Offset: 0xdc
	// Line 507, Address: 0x1f03274, Func Offset: 0xe4
	// Line 511, Address: 0x1f03288, Func Offset: 0xf8
	// Line 512, Address: 0x1f03294, Func Offset: 0x104
	// Func End, Address: 0x1f032a4, Func Offset: 0x114
	// Line 609, Address: 0x1f03190, Func Offset: 0
	// Line 610, Address: 0x1f03194, Func Offset: 0x4
	// Func End, Address: 0x1f0319c, Func Offset: 0xc
}

// 
// Start address: 0x1f031a0
void EvRoomInit()
{
	int i;
	int room;
	SubCharacter* scp;
	// Line 623, Address: 0x1f031a0, Func Offset: 0
	// Line 633, Address: 0x1f031a8, Func Offset: 0x8
	// Line 636, Address: 0x1f031fc, Func Offset: 0x5c
	// Line 637, Address: 0x1f03214, Func Offset: 0x74
	// Line 639, Address: 0x1f03244, Func Offset: 0xa4
	// Line 640, Address: 0x1f0325c, Func Offset: 0xbc
	// Line 641, Address: 0x1f03270, Func Offset: 0xd0
	// Line 642, Address: 0x1f0327c, Func Offset: 0xdc
	// Line 646, Address: 0x1f03290, Func Offset: 0xf0
	// Line 647, Address: 0x1f032a4, Func Offset: 0x104
	// Line 648, Address: 0x1f032d0, Func Offset: 0x130
	// Line 649, Address: 0x1f032e4, Func Offset: 0x144
	// Line 652, Address: 0x1f032ec, Func Offset: 0x14c
	// Line 653, Address: 0x1f032fc, Func Offset: 0x15c
	// Line 654, Address: 0x1f0331c, Func Offset: 0x17c
	// Line 655, Address: 0x1f03330, Func Offset: 0x190
	// Line 656, Address: 0x1f03338, Func Offset: 0x198
	// Line 657, Address: 0x1f03340, Func Offset: 0x1a0
	// Line 659, Address: 0x1f03354, Func Offset: 0x1b4
	// Line 660, Address: 0x1f03378, Func Offset: 0x1d8
	// Line 661, Address: 0x1f0338c, Func Offset: 0x1ec
	// Line 662, Address: 0x1f033b8, Func Offset: 0x218
	// Line 665, Address: 0x1f033c0, Func Offset: 0x220
	// Line 666, Address: 0x1f033d0, Func Offset: 0x230
	// Line 667, Address: 0x1f033f0, Func Offset: 0x250
	// Line 668, Address: 0x1f03404, Func Offset: 0x264
	// Line 669, Address: 0x1f0340c, Func Offset: 0x26c
	// Line 670, Address: 0x1f03418, Func Offset: 0x278
	// Line 671, Address: 0x1f03430, Func Offset: 0x290
	// Line 673, Address: 0x1f03444, Func Offset: 0x2a4
	// Line 674, Address: 0x1f03458, Func Offset: 0x2b8
	// Line 676, Address: 0x1f03464, Func Offset: 0x2c4
	// Line 677, Address: 0x1f03468, Func Offset: 0x2c8
	// Func End, Address: 0x1f03478, Func Offset: 0x2d8
	// Line 615, Address: 0x1f031a0, Func Offset: 0
	// Line 620, Address: 0x1f031ac, Func Offset: 0xc
	// Line 622, Address: 0x1f031b4, Func Offset: 0x14
	// Line 623, Address: 0x1f031c0, Func Offset: 0x20
	// Line 624, Address: 0x1f031cc, Func Offset: 0x2c
	// Line 625, Address: 0x1f031e0, Func Offset: 0x40
	// Line 626, Address: 0x1f03224, Func Offset: 0x84
	// Line 627, Address: 0x1f03228, Func Offset: 0x88
	// Line 628, Address: 0x1f0323c, Func Offset: 0x9c
	// Line 630, Address: 0x1f03250, Func Offset: 0xb0
	// Line 631, Address: 0x1f0325c, Func Offset: 0xbc
	// Line 632, Address: 0x1f032a0, Func Offset: 0x100
	// Line 633, Address: 0x1f032ac, Func Offset: 0x10c
	// Line 634, Address: 0x1f032b8, Func Offset: 0x118
	// Line 635, Address: 0x1f032e8, Func Offset: 0x148
	// Line 636, Address: 0x1f032fc, Func Offset: 0x15c
	// Line 638, Address: 0x1f03310, Func Offset: 0x170
	// Line 639, Address: 0x1f0332c, Func Offset: 0x18c
	// Line 640, Address: 0x1f03348, Func Offset: 0x1a8
	// Line 641, Address: 0x1f03364, Func Offset: 0x1c4
	// Line 643, Address: 0x1f03380, Func Offset: 0x1e0
	// Line 645, Address: 0x1f03394, Func Offset: 0x1f4
	// Line 647, Address: 0x1f033a8, Func Offset: 0x208
	// Line 649, Address: 0x1f033bc, Func Offset: 0x21c
	// Line 652, Address: 0x1f033d0, Func Offset: 0x230
	// Line 654, Address: 0x1f033e4, Func Offset: 0x244
	// Line 655, Address: 0x1f033f8, Func Offset: 0x258
	// Line 656, Address: 0x1f03410, Func Offset: 0x270
	// Line 657, Address: 0x1f03420, Func Offset: 0x280
	// Line 660, Address: 0x1f03438, Func Offset: 0x298
	// Func End, Address: 0x1f0344c, Func Offset: 0x2ac
}

// 
// Start address: 0x1f03450
void EvAllTimeFunc()
{
	int room;
	int disp_ctrl_list[3];
	// Line 1040, Address: 0x1f03450, Func Offset: 0
	// Line 1041, Address: 0x1f03458, Func Offset: 0x8
	// Line 1042, Address: 0x1f03470, Func Offset: 0x20
	// Line 1043, Address: 0x1f03488, Func Offset: 0x38
	// Line 1044, Address: 0x1f03498, Func Offset: 0x48
	// Func End, Address: 0x1f034a8, Func Offset: 0x58
	// Line 533, Address: 0x1f03450, Func Offset: 0
	// Line 534, Address: 0x1f03454, Func Offset: 0x4
	// Func End, Address: 0x1f0345c, Func Offset: 0xc
	// Line 665, Address: 0x1f03450, Func Offset: 0
	// Line 670, Address: 0x1f03458, Func Offset: 0x8
	// Line 671, Address: 0x1f0345c, Func Offset: 0xc
	// Line 673, Address: 0x1f03464, Func Offset: 0x14
	// Line 674, Address: 0x1f03470, Func Offset: 0x20
	// Line 675, Address: 0x1f03488, Func Offset: 0x38
	// Line 676, Address: 0x1f03498, Func Offset: 0x48
	// Line 677, Address: 0x1f034b0, Func Offset: 0x60
	// Line 678, Address: 0x1f034c0, Func Offset: 0x70
	// Line 679, Address: 0x1f034d8, Func Offset: 0x88
	// Line 680, Address: 0x1f034e8, Func Offset: 0x98
	// Line 681, Address: 0x1f03500, Func Offset: 0xb0
	// Line 682, Address: 0x1f03510, Func Offset: 0xc0
	// Line 683, Address: 0x1f03528, Func Offset: 0xd8
	// Line 684, Address: 0x1f03538, Func Offset: 0xe8
	// Line 685, Address: 0x1f03550, Func Offset: 0x100
	// Line 686, Address: 0x1f03560, Func Offset: 0x110
	// Line 688, Address: 0x1f03588, Func Offset: 0x138
	// Line 689, Address: 0x1f03598, Func Offset: 0x148
	// Line 691, Address: 0x1f035c0, Func Offset: 0x170
	// Line 692, Address: 0x1f035d0, Func Offset: 0x180
	// Line 694, Address: 0x1f035f8, Func Offset: 0x1a8
	// Line 695, Address: 0x1f03608, Func Offset: 0x1b8
	// Line 697, Address: 0x1f03630, Func Offset: 0x1e0
	// Line 698, Address: 0x1f03640, Func Offset: 0x1f0
	// Line 699, Address: 0x1f03654, Func Offset: 0x204
	// Line 700, Address: 0x1f0366c, Func Offset: 0x21c
	// Line 702, Address: 0x1f03680, Func Offset: 0x230
	// Line 703, Address: 0x1f03698, Func Offset: 0x248
	// Line 705, Address: 0x1f036ac, Func Offset: 0x25c
	// Line 706, Address: 0x1f036c4, Func Offset: 0x274
	// Line 708, Address: 0x1f036d8, Func Offset: 0x288
	// Line 709, Address: 0x1f036f0, Func Offset: 0x2a0
	// Line 711, Address: 0x1f03704, Func Offset: 0x2b4
	// Line 712, Address: 0x1f0371c, Func Offset: 0x2cc
	// Line 714, Address: 0x1f03730, Func Offset: 0x2e0
	// Line 715, Address: 0x1f03748, Func Offset: 0x2f8
	// Line 717, Address: 0x1f0375c, Func Offset: 0x30c
	// Line 718, Address: 0x1f03770, Func Offset: 0x320
	// Line 719, Address: 0x1f03788, Func Offset: 0x338
	// Line 720, Address: 0x1f03798, Func Offset: 0x348
	// Line 722, Address: 0x1f037ac, Func Offset: 0x35c
	// Line 723, Address: 0x1f037b4, Func Offset: 0x364
	// Line 726, Address: 0x1f037c8, Func Offset: 0x378
	// Line 727, Address: 0x1f037dc, Func Offset: 0x38c
	// Line 728, Address: 0x1f037f4, Func Offset: 0x3a4
	// Line 730, Address: 0x1f03804, Func Offset: 0x3b4
	// Line 731, Address: 0x1f03810, Func Offset: 0x3c0
	// Func End, Address: 0x1f03820, Func Offset: 0x3d0
}

// 
// Start address: 0x1f03820
int EvBgmControl()
{
	// Line 737, Address: 0x1f03820, Func Offset: 0
	// Line 739, Address: 0x1f03838, Func Offset: 0x18
	// Func End, Address: 0x1f03840, Func Offset: 0x20
}

