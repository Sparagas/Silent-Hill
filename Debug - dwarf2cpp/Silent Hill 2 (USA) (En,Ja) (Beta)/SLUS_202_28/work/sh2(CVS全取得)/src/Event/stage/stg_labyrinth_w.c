typedef struct SubCharacter;
typedef struct shBattleArea;
typedef struct Model_List;
typedef struct shBattleInfo;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct Enemy_List;
typedef struct _VbSCREENINFO;
typedef struct _CL_VHIT_WALL;
typedef struct _anon0;
typedef struct _CL_HITPOLY_HEAD;
typedef struct Pad_KeyConfig;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef union fsFile;
typedef struct _anon1;
typedef struct fsCdFile;
typedef union _anon2;
typedef struct _CL_VHIT_RESULT;
typedef struct _anon3;
typedef union _anon4;
typedef struct PAD_3D;
typedef struct fsMgcFile;
typedef struct Stage_Data;
typedef struct Event_List;
typedef struct _CL_HITPOLY_PLANE;
typedef struct PAD_2D;
typedef struct CharaData_DemoList;
typedef struct Item_List;
typedef union fsFileIndex;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct shSkelton;
typedef struct fsMgfFile;
typedef struct PAD_INFO;
typedef struct _anon5;
typedef struct fsHdFile;
typedef struct _AnimeInfo;
typedef struct DramaDemo_MessageTime;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct fsMgpFile;
typedef struct DramaDemo_PlayInfo;
typedef struct _anon6;
typedef struct DynamicLight;
typedef struct shPlayerWork;
typedef struct _anon7;
typedef struct shBattleFight;
typedef struct shBattleShot;

typedef void(*type_4)();
typedef int(*type_7)();
typedef void(*type_55)(SubCharacter*);
typedef void(*type_59)(SubCharacter*);

typedef fsFileIndex type_0[1];
typedef unsigned char type_1[0];
typedef Event_List type_2[42];
typedef fsFileIndex type_3[1];
typedef _AnimeInfo type_5[5];
typedef unsigned char type_6[97];
typedef _AnimeInfo type_8[12];
typedef CharaData_DemoList type_9[3];
typedef Model_List type_10[9];
typedef _AnimeInfo type_11[33];
typedef unsigned char type_12[4];
typedef unsigned char type_13[4][4];
typedef fsFileIndex type_14[1];
typedef unsigned char type_15[2];
typedef _AnimeInfo type_16[11];
typedef unsigned char type_17[20];
typedef _AnimeInfo type_18[30];
typedef unsigned int type_19[255];
typedef unsigned int type_20[32];
typedef unsigned char type_21[4];
typedef Item_List type_22[7];
typedef fsFileIndex type_23[1];
typedef char type_24[4];
typedef _CL_HITPOLY_PLANE type_25[4];
typedef char type_26[4];
typedef char type_27[4];
typedef int type_28[6];
typedef _AnimeInfo type_29[17];
typedef char type_30[4];
typedef _CL_HITPOLY_PLANE type_31[2];
typedef DramaDemo_MessageTime type_32[19];
typedef fsFileIndex type_33[1];
typedef char type_34[4];
typedef CharaData_DemoList type_35[2];
typedef float type_36[4][4];
typedef _AnimeInfo type_37[34];
typedef shAttackInfo type_38[66];
typedef Enemy_List type_39[9];
typedef float type_40[4];
typedef float type_41[4][4];
typedef unsigned char type_42[14];
typedef unsigned char type_43[0];
typedef fsFileIndex type_44[1];
typedef float type_45[4][2];
typedef _AnimeInfo type_46[17];
typedef PAD_INFO type_47[10];
typedef int(*type_48)()[8];
typedef unsigned char type_49[620];
typedef float type_50[4];
typedef unsigned char type_51[0];
typedef float type_52[2];
typedef float type_53[4][2];
typedef float type_54[4][2];
typedef _AnimeInfo type_56[17];
typedef unsigned char type_57[0];
typedef unsigned char type_58[69];
typedef float type_60[4][2];
typedef unsigned char type_61[4];
typedef unsigned char type_62[4];
typedef unsigned char type_63[4];
typedef char type_64[0];
typedef _AnimeInfo type_65[33];
typedef int type_66[7];
typedef unsigned char type_67[2];
typedef fsFileIndex type_68[1];
typedef unsigned char type_69[2];
typedef _CL_HITPOLY_PLANE type_70[3];
typedef float type_71[4];
typedef _CL_HITPOLY_PLANE type_72[8];
typedef unsigned char type_73[14];
typedef _AnimeInfo type_74[24];

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

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

struct _anon0
{
	void(*SpecDraw)();
	void(*PreDraw)();
	void(*PostDraw)();
	void(*CharaDraw_Hook)();
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
_AnimeInfo pjames_stage_anim[12];
unsigned char ev_pos[620];
Event_List ev_list[42];
Item_List gi_list[7];
_CL_HITPOLY_PLANE clActWallList_ps66[3];
_CL_HITPOLY_PLANE clActWallList_ps121[4];
_CL_HITPOLY_PLANE clActFloorList_ps121[8];
_CL_HITPOLY_PLANE clActWallList_ps125[2];
float colvec[4];
float colref[4];
DynamicLight DynamicLW;
_anon0 gfw_func;
int(*ev_prog)()[8];
Model_List mdl_list[9];
Enemy_List en_list[9];
Stage_Data stage_labyrinth_w;
float mar_pos_0[4][2];
unsigned char cube_check[4][4];
float elv_door_pos;
float elv_door_spd;
float close_timer;
float open_timer;
shPlayerWork sh2jms;
int ev_s_step;
int ev_p_step;
fsFileIndex data_demo_7f_start_hll_jms_anm[1];
char MemShare_gp_data_buf[0];
fsFileIndex data_demo_7f_start_7f_start_dds[1];
_anon1 game_flag;
float cube_x;
float jms_cube_rot_y;
float jms_cube_pos_z;
float jms_cube_pos_x;
_VbSCREENINFO VbScreenInfo;
float cube_b_y;
Pad_KeyConfig key_config;
float cube_a_y;
int demo_status;
fsFileIndex data_movie_rouya_pss[1];
fsFileIndex data_demo_mar_ikiteruka_ikiteruka_2_dds[1];
fsFileIndex data_demo_mar_ikiteruka_ikiteruka_1_dds[1];
float total_demo_frame;
float demo_frame;
fsFileIndex data_demo_harigane_hll_jms_anm[1];
fsFileIndex data_demo_harigane_harigane_dds[1];
float elv_pos[4];
float elv_max;
float elv_speed;
unsigned char __otn_elv_01[0];
unsigned char __otn_elv_00[0];
unsigned char __show_weapon_l_01[0];
unsigned char __otn_elv_normal_01[0];

int EvProg7thLayerStart();
int EvProgGetGreatKnife();
int EvProgControlCube();
int EvProgMariaIsAlive();
int EvProgAfterMariaIsAlive();
int EvProgGetWireCutter();
int EvProgUseWireCutter();
void EvRoomInit();
void EvSoundCallAfterLoad();
void EvAllTimeFunc();
void EvElevatorModelMove();

// 
// Start address: 0x1f02090
int EvProg7thLayerStart()
{
	<unknown fundamental type (0xa510)>* anim_adr;
	DramaDemo_PlayInfo start;
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
// Start address: 0x1f02290
int EvProgGetGreatKnife()
{
	// Line 220, Address: 0x1f02290, Func Offset: 0
	// Line 221, Address: 0x1f02298, Func Offset: 0x8
	// Line 222, Address: 0x1f022a8, Func Offset: 0x18
	// Func End, Address: 0x1f022b8, Func Offset: 0x28
}

// 
// Start address: 0x1f022c0
int EvProgControlCube()
{
	int st_y;
	int st_x_b;
	int st_x;
	float rot[4];
	float pos[4];
	SubCharacter* scp_b;
	SubCharacter* scp_a;
	float cube_plane;
	float cube_roll;
	float cube_itr[4];
	float cube_pos[4];
	// Line 196, Address: 0x1f022c0, Func Offset: 0
	// Line 197, Address: 0x1f022c8, Func Offset: 0x8
	// Line 199, Address: 0x1f022dc, Func Offset: 0x1c
	// Func End, Address: 0x1f022ec, Func Offset: 0x2c
	// Line 260, Address: 0x1f022c0, Func Offset: 0
	// Line 273, Address: 0x1f022c8, Func Offset: 0x8
	// Line 274, Address: 0x1f022dc, Func Offset: 0x1c
	// Line 276, Address: 0x1f022f8, Func Offset: 0x38
	// Line 278, Address: 0x1f02314, Func Offset: 0x54
	// Line 280, Address: 0x1f02330, Func Offset: 0x70
	// Line 281, Address: 0x1f02340, Func Offset: 0x80
	// Func End, Address: 0x1f02350, Func Offset: 0x90
	// Line 230, Address: 0x1f022c0, Func Offset: 0
	// Line 241, Address: 0x1f022dc, Func Offset: 0x1c
	// Line 242, Address: 0x1f022e4, Func Offset: 0x24
	// Line 243, Address: 0x1f022f8, Func Offset: 0x38
	// Line 245, Address: 0x1f0230c, Func Offset: 0x4c
	// Line 247, Address: 0x1f02350, Func Offset: 0x90
	// Line 249, Address: 0x1f02394, Func Offset: 0xd4
	// Line 252, Address: 0x1f023d4, Func Offset: 0x114
	// Line 254, Address: 0x1f02404, Func Offset: 0x144
	// Line 256, Address: 0x1f02418, Func Offset: 0x158
	// Line 257, Address: 0x1f02424, Func Offset: 0x164
	// Line 258, Address: 0x1f02430, Func Offset: 0x170
	// Line 259, Address: 0x1f0243c, Func Offset: 0x17c
	// Line 260, Address: 0x1f02450, Func Offset: 0x190
	// Line 261, Address: 0x1f02464, Func Offset: 0x1a4
	// Line 262, Address: 0x1f02470, Func Offset: 0x1b0
	// Line 263, Address: 0x1f0247c, Func Offset: 0x1bc
	// Line 264, Address: 0x1f02488, Func Offset: 0x1c8
	// Line 265, Address: 0x1f0249c, Func Offset: 0x1dc
	// Line 266, Address: 0x1f024b0, Func Offset: 0x1f0
	// Line 267, Address: 0x1f024c4, Func Offset: 0x204
	// Line 272, Address: 0x1f024cc, Func Offset: 0x20c
	// Line 273, Address: 0x1f02500, Func Offset: 0x240
	// Line 274, Address: 0x1f02504, Func Offset: 0x244
	// Line 275, Address: 0x1f0252c, Func Offset: 0x26c
	// Line 276, Address: 0x1f02554, Func Offset: 0x294
	// Line 278, Address: 0x1f0256c, Func Offset: 0x2ac
	// Line 279, Address: 0x1f025a0, Func Offset: 0x2e0
	// Line 280, Address: 0x1f025a4, Func Offset: 0x2e4
	// Line 281, Address: 0x1f025cc, Func Offset: 0x30c
	// Line 282, Address: 0x1f025f4, Func Offset: 0x334
	// Line 284, Address: 0x1f0260c, Func Offset: 0x34c
	// Line 285, Address: 0x1f02648, Func Offset: 0x388
	// Line 286, Address: 0x1f0264c, Func Offset: 0x38c
	// Line 287, Address: 0x1f02670, Func Offset: 0x3b0
	// Line 289, Address: 0x1f02688, Func Offset: 0x3c8
	// Line 290, Address: 0x1f026c4, Func Offset: 0x404
	// Line 291, Address: 0x1f026c8, Func Offset: 0x408
	// Line 292, Address: 0x1f026ec, Func Offset: 0x42c
	// Line 295, Address: 0x1f02704, Func Offset: 0x444
	// Line 296, Address: 0x1f02708, Func Offset: 0x448
	// Line 299, Address: 0x1f0270c, Func Offset: 0x44c
	// Line 300, Address: 0x1f0274c, Func Offset: 0x48c
	// Line 301, Address: 0x1f02770, Func Offset: 0x4b0
	// Line 302, Address: 0x1f0278c, Func Offset: 0x4cc
	// Line 303, Address: 0x1f02794, Func Offset: 0x4d4
	// Line 304, Address: 0x1f027d4, Func Offset: 0x514
	// Line 305, Address: 0x1f027f8, Func Offset: 0x538
	// Line 306, Address: 0x1f02814, Func Offset: 0x554
	// Line 307, Address: 0x1f0281c, Func Offset: 0x55c
	// Line 308, Address: 0x1f02838, Func Offset: 0x578
	// Line 309, Address: 0x1f0285c, Func Offset: 0x59c
	// Line 310, Address: 0x1f02898, Func Offset: 0x5d8
	// Line 311, Address: 0x1f028a0, Func Offset: 0x5e0
	// Line 312, Address: 0x1f028b0, Func Offset: 0x5f0
	// Line 313, Address: 0x1f028d4, Func Offset: 0x614
	// Line 318, Address: 0x1f02910, Func Offset: 0x650
	// Line 319, Address: 0x1f02950, Func Offset: 0x690
	// Line 320, Address: 0x1f02974, Func Offset: 0x6b4
	// Line 321, Address: 0x1f02990, Func Offset: 0x6d0
	// Line 322, Address: 0x1f02998, Func Offset: 0x6d8
	// Line 323, Address: 0x1f029d8, Func Offset: 0x718
	// Line 324, Address: 0x1f029fc, Func Offset: 0x73c
	// Line 325, Address: 0x1f02a18, Func Offset: 0x758
	// Line 326, Address: 0x1f02a20, Func Offset: 0x760
	// Line 327, Address: 0x1f02a3c, Func Offset: 0x77c
	// Line 328, Address: 0x1f02a60, Func Offset: 0x7a0
	// Line 329, Address: 0x1f02a9c, Func Offset: 0x7dc
	// Line 330, Address: 0x1f02aa4, Func Offset: 0x7e4
	// Line 331, Address: 0x1f02ab4, Func Offset: 0x7f4
	// Line 332, Address: 0x1f02ad8, Func Offset: 0x818
	// Line 336, Address: 0x1f02b14, Func Offset: 0x854
	// Line 337, Address: 0x1f02b58, Func Offset: 0x898
	// Line 338, Address: 0x1f02b94, Func Offset: 0x8d4
	// Line 339, Address: 0x1f02bb8, Func Offset: 0x8f8
	// Line 340, Address: 0x1f02bc0, Func Offset: 0x900
	// Line 341, Address: 0x1f02c04, Func Offset: 0x944
	// Line 342, Address: 0x1f02c40, Func Offset: 0x980
	// Line 343, Address: 0x1f02c64, Func Offset: 0x9a4
	// Line 344, Address: 0x1f02c6c, Func Offset: 0x9ac
	// Line 345, Address: 0x1f02c90, Func Offset: 0x9d0
	// Line 346, Address: 0x1f02ccc, Func Offset: 0xa0c
	// Line 347, Address: 0x1f02cf0, Func Offset: 0xa30
	// Line 348, Address: 0x1f02cf8, Func Offset: 0xa38
	// Line 349, Address: 0x1f02d08, Func Offset: 0xa48
	// Line 350, Address: 0x1f02d44, Func Offset: 0xa84
	// Line 354, Address: 0x1f02d68, Func Offset: 0xaa8
	// Line 356, Address: 0x1f02dc4, Func Offset: 0xb04
	// Line 359, Address: 0x1f02dd8, Func Offset: 0xb18
	// Line 360, Address: 0x1f02e04, Func Offset: 0xb44
	// Line 361, Address: 0x1f02e14, Func Offset: 0xb54
	// Line 362, Address: 0x1f02e1c, Func Offset: 0xb5c
	// Line 363, Address: 0x1f02e44, Func Offset: 0xb84
	// Line 366, Address: 0x1f02e4c, Func Offset: 0xb8c
	// Line 367, Address: 0x1f02e60, Func Offset: 0xba0
	// Line 368, Address: 0x1f02e74, Func Offset: 0xbb4
	// Line 369, Address: 0x1f02e88, Func Offset: 0xbc8
	// Line 371, Address: 0x1f02e9c, Func Offset: 0xbdc
	// Line 372, Address: 0x1f02ea8, Func Offset: 0xbe8
	// Line 377, Address: 0x1f02eb4, Func Offset: 0xbf4
	// Line 378, Address: 0x1f02ee0, Func Offset: 0xc20
	// Line 379, Address: 0x1f02efc, Func Offset: 0xc3c
	// Line 380, Address: 0x1f02f28, Func Offset: 0xc68
	// Line 381, Address: 0x1f02f44, Func Offset: 0xc84
	// Line 382, Address: 0x1f02f70, Func Offset: 0xcb0
	// Line 383, Address: 0x1f02f88, Func Offset: 0xcc8
	// Line 384, Address: 0x1f02fb0, Func Offset: 0xcf0
	// Line 387, Address: 0x1f02fc8, Func Offset: 0xd08
	// Line 389, Address: 0x1f02fe0, Func Offset: 0xd20
	// Line 391, Address: 0x1f03034, Func Offset: 0xd74
	// Line 394, Address: 0x1f0304c, Func Offset: 0xd8c
	// Line 395, Address: 0x1f03088, Func Offset: 0xdc8
	// Line 396, Address: 0x1f030a0, Func Offset: 0xde0
	// Line 397, Address: 0x1f030e0, Func Offset: 0xe20
	// Line 399, Address: 0x1f030f8, Func Offset: 0xe38
	// Line 400, Address: 0x1f030fc, Func Offset: 0xe3c
	// Func End, Address: 0x1f03120, Func Offset: 0xe60
}

// 
// Start address: 0x1f03120
int EvProgMariaIsAlive()
{
	int ret;
	SubCharacter* scp;
	float vec0[4];
	DramaDemo_PlayInfo alive_2;
	DramaDemo_MessageTime msg_b[19];
	DramaDemo_PlayInfo alive_1;
	CharaData_DemoList chara_data[3];
	// Line 406, Address: 0x1f03120, Func Offset: 0
	// Line 471, Address: 0x1f0312c, Func Offset: 0xc
	// Line 473, Address: 0x1f0318c, Func Offset: 0x6c
	// Line 474, Address: 0x1f031a4, Func Offset: 0x84
	// Line 476, Address: 0x1f031bc, Func Offset: 0x9c
	// Line 477, Address: 0x1f031d0, Func Offset: 0xb0
	// Line 478, Address: 0x1f031dc, Func Offset: 0xbc
	// Line 479, Address: 0x1f031f0, Func Offset: 0xd0
	// Line 482, Address: 0x1f03204, Func Offset: 0xe4
	// Line 483, Address: 0x1f03218, Func Offset: 0xf8
	// Line 485, Address: 0x1f03234, Func Offset: 0x114
	// Line 486, Address: 0x1f03268, Func Offset: 0x148
	// Line 487, Address: 0x1f03280, Func Offset: 0x160
	// Line 488, Address: 0x1f032a8, Func Offset: 0x188
	// Line 491, Address: 0x1f032b0, Func Offset: 0x190
	// Line 492, Address: 0x1f032dc, Func Offset: 0x1bc
	// Line 493, Address: 0x1f032f0, Func Offset: 0x1d0
	// Line 496, Address: 0x1f032f8, Func Offset: 0x1d8
	// Line 497, Address: 0x1f03300, Func Offset: 0x1e0
	// Line 501, Address: 0x1f03314, Func Offset: 0x1f4
	// Line 502, Address: 0x1f03340, Func Offset: 0x220
	// Line 505, Address: 0x1f03348, Func Offset: 0x228
	// Line 506, Address: 0x1f03350, Func Offset: 0x230
	// Line 510, Address: 0x1f03364, Func Offset: 0x244
	// Line 511, Address: 0x1f03370, Func Offset: 0x250
	// Line 512, Address: 0x1f0337c, Func Offset: 0x25c
	// Line 513, Address: 0x1f03390, Func Offset: 0x270
	// Line 514, Address: 0x1f03398, Func Offset: 0x278
	// Line 515, Address: 0x1f033a4, Func Offset: 0x284
	// Line 517, Address: 0x1f033d4, Func Offset: 0x2b4
	// Line 518, Address: 0x1f033dc, Func Offset: 0x2bc
	// Line 519, Address: 0x1f033e8, Func Offset: 0x2c8
	// Line 521, Address: 0x1f0340c, Func Offset: 0x2ec
	// Line 522, Address: 0x1f03414, Func Offset: 0x2f4
	// Line 523, Address: 0x1f03424, Func Offset: 0x304
	// Line 525, Address: 0x1f03430, Func Offset: 0x310
	// Line 526, Address: 0x1f03434, Func Offset: 0x314
	// Func End, Address: 0x1f03448, Func Offset: 0x328
}

// 
// Start address: 0x1f03450
int EvProgAfterMariaIsAlive()
{
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
// Start address: 0x1f03460
int EvProgGetWireCutter()
{
	// Line 540, Address: 0x1f03460, Func Offset: 0
	// Line 541, Address: 0x1f03468, Func Offset: 0x8
	// Line 542, Address: 0x1f03478, Func Offset: 0x18
	// Func End, Address: 0x1f03488, Func Offset: 0x28
	// Line 623, Address: 0x1f03460, Func Offset: 0
	// Line 626, Address: 0x1f03468, Func Offset: 0x8
	// Line 628, Address: 0x1f034bc, Func Offset: 0x5c
	// Line 629, Address: 0x1f034d4, Func Offset: 0x74
	// Line 630, Address: 0x1f034e8, Func Offset: 0x88
	// Line 631, Address: 0x1f034f4, Func Offset: 0x94
	// Line 632, Address: 0x1f03504, Func Offset: 0xa4
	// Line 633, Address: 0x1f03518, Func Offset: 0xb8
	// Line 636, Address: 0x1f03520, Func Offset: 0xc0
	// Line 638, Address: 0x1f03544, Func Offset: 0xe4
	// Line 639, Address: 0x1f03554, Func Offset: 0xf4
	// Line 640, Address: 0x1f03568, Func Offset: 0x108
	// Line 643, Address: 0x1f03570, Func Offset: 0x110
	// Line 644, Address: 0x1f03578, Func Offset: 0x118
	// Line 645, Address: 0x1f03580, Func Offset: 0x120
	// Line 646, Address: 0x1f03588, Func Offset: 0x128
	// Line 647, Address: 0x1f03590, Func Offset: 0x130
	// Line 648, Address: 0x1f035b4, Func Offset: 0x154
	// Line 651, Address: 0x1f035bc, Func Offset: 0x15c
	// Line 652, Address: 0x1f035c4, Func Offset: 0x164
	// Line 653, Address: 0x1f035cc, Func Offset: 0x16c
	// Line 654, Address: 0x1f035d4, Func Offset: 0x174
	// Line 655, Address: 0x1f035e0, Func Offset: 0x180
	// Line 656, Address: 0x1f035e8, Func Offset: 0x188
	// Line 657, Address: 0x1f035f0, Func Offset: 0x190
	// Line 659, Address: 0x1f03624, Func Offset: 0x1c4
	// Line 660, Address: 0x1f03634, Func Offset: 0x1d4
	// Line 661, Address: 0x1f03648, Func Offset: 0x1e8
	// Line 664, Address: 0x1f03650, Func Offset: 0x1f0
	// Line 665, Address: 0x1f03658, Func Offset: 0x1f8
	// Line 666, Address: 0x1f03660, Func Offset: 0x200
	// Line 667, Address: 0x1f03668, Func Offset: 0x208
	// Line 668, Address: 0x1f03670, Func Offset: 0x210
	// Line 669, Address: 0x1f03680, Func Offset: 0x220
	// Line 671, Address: 0x1f03694, Func Offset: 0x234
	// Line 672, Address: 0x1f03698, Func Offset: 0x238
	// Line 674, Address: 0x1f036d4, Func Offset: 0x274
	// Line 675, Address: 0x1f036e4, Func Offset: 0x284
	// Line 676, Address: 0x1f036f8, Func Offset: 0x298
	// Line 678, Address: 0x1f03704, Func Offset: 0x2a4
	// Line 679, Address: 0x1f03708, Func Offset: 0x2a8
	// Func End, Address: 0x1f03718, Func Offset: 0x2b8
}

// 
// Start address: 0x1f03490
int EvProgUseWireCutter()
{
	int ret;
	<unknown fundamental type (0xa510)>* anim_adr;
	DramaDemo_PlayInfo cut;
	// Line 548, Address: 0x1f03490, Func Offset: 0
	// Line 558, Address: 0x1f0349c, Func Offset: 0xc
	// Line 561, Address: 0x1f034d8, Func Offset: 0x48
	// Line 562, Address: 0x1f034f0, Func Offset: 0x60
	// Line 564, Address: 0x1f03520, Func Offset: 0x90
	// Line 565, Address: 0x1f03538, Func Offset: 0xa8
	// Line 566, Address: 0x1f03548, Func Offset: 0xb8
	// Line 567, Address: 0x1f03568, Func Offset: 0xd8
	// Line 568, Address: 0x1f0357c, Func Offset: 0xec
	// Line 569, Address: 0x1f03584, Func Offset: 0xf4
	// Line 570, Address: 0x1f0358c, Func Offset: 0xfc
	// Line 571, Address: 0x1f0359c, Func Offset: 0x10c
	// Line 572, Address: 0x1f035b4, Func Offset: 0x124
	// Line 576, Address: 0x1f035c8, Func Offset: 0x138
	// Line 577, Address: 0x1f035dc, Func Offset: 0x14c
	// Line 578, Address: 0x1f0360c, Func Offset: 0x17c
	// Line 579, Address: 0x1f03624, Func Offset: 0x194
	// Line 580, Address: 0x1f03640, Func Offset: 0x1b0
	// Line 583, Address: 0x1f03648, Func Offset: 0x1b8
	// Line 584, Address: 0x1f03658, Func Offset: 0x1c8
	// Line 587, Address: 0x1f0366c, Func Offset: 0x1dc
	// Line 588, Address: 0x1f03670, Func Offset: 0x1e0
	// Line 589, Address: 0x1f03690, Func Offset: 0x200
	// Line 590, Address: 0x1f036a4, Func Offset: 0x214
	// Line 591, Address: 0x1f036ac, Func Offset: 0x21c
	// Line 592, Address: 0x1f036b8, Func Offset: 0x228
	// Line 595, Address: 0x1f036e8, Func Offset: 0x258
	// Line 596, Address: 0x1f036f8, Func Offset: 0x268
	// Line 598, Address: 0x1f03704, Func Offset: 0x274
	// Line 599, Address: 0x1f03708, Func Offset: 0x278
	// Func End, Address: 0x1f0371c, Func Offset: 0x28c
}

// 
// Start address: 0x1f03720
void EvRoomInit()
{
	int st_y_b;
	int st_y;
	int st_x_b;
	int st_x;
	int room;
	float rot[4];
	float pos[4];
	SubCharacter* scp;
	float mar_pos[4][2];
	CharaData_DemoList chara_data[2];
	// Line 604, Address: 0x1f03720, Func Offset: 0
	// Line 619, Address: 0x1f0373c, Func Offset: 0x1c
	// Line 620, Address: 0x1f03744, Func Offset: 0x24
	// Line 621, Address: 0x1f03750, Func Offset: 0x30
	// Line 623, Address: 0x1f03780, Func Offset: 0x60
	// Line 624, Address: 0x1f0378c, Func Offset: 0x6c
	// Line 625, Address: 0x1f037a0, Func Offset: 0x80
	// Line 626, Address: 0x1f037a8, Func Offset: 0x88
	// Line 627, Address: 0x1f037b4, Func Offset: 0x94
	// Line 628, Address: 0x1f037d4, Func Offset: 0xb4
	// Line 630, Address: 0x1f037e4, Func Offset: 0xc4
	// Line 631, Address: 0x1f037f8, Func Offset: 0xd8
	// Line 632, Address: 0x1f03800, Func Offset: 0xe0
	// Line 633, Address: 0x1f03808, Func Offset: 0xe8
	// Line 634, Address: 0x1f03818, Func Offset: 0xf8
	// Line 635, Address: 0x1f03828, Func Offset: 0x108
	// Line 636, Address: 0x1f03838, Func Offset: 0x118
	// Line 637, Address: 0x1f03844, Func Offset: 0x124
	// Line 638, Address: 0x1f0384c, Func Offset: 0x12c
	// Line 639, Address: 0x1f03854, Func Offset: 0x134
	// Line 640, Address: 0x1f0385c, Func Offset: 0x13c
	// Line 641, Address: 0x1f03864, Func Offset: 0x144
	// Line 642, Address: 0x1f0387c, Func Offset: 0x15c
	// Line 643, Address: 0x1f03888, Func Offset: 0x168
	// Line 645, Address: 0x1f03898, Func Offset: 0x178
	// Line 646, Address: 0x1f038ac, Func Offset: 0x18c
	// Line 647, Address: 0x1f038b4, Func Offset: 0x194
	// Line 649, Address: 0x1f038bc, Func Offset: 0x19c
	// Line 651, Address: 0x1f03900, Func Offset: 0x1e0
	// Line 653, Address: 0x1f03940, Func Offset: 0x220
	// Line 655, Address: 0x1f03984, Func Offset: 0x264
	// Line 658, Address: 0x1f039c8, Func Offset: 0x2a8
	// Line 659, Address: 0x1f039dc, Func Offset: 0x2bc
	// Line 660, Address: 0x1f03a24, Func Offset: 0x304
	// Line 662, Address: 0x1f03a6c, Func Offset: 0x34c
	// Line 663, Address: 0x1f03a80, Func Offset: 0x360
	// Line 665, Address: 0x1f03acc, Func Offset: 0x3ac
	// Line 666, Address: 0x1f03ae4, Func Offset: 0x3c4
	// Line 667, Address: 0x1f03b38, Func Offset: 0x418
	// Line 669, Address: 0x1f03b50, Func Offset: 0x430
	// Line 670, Address: 0x1f03b8c, Func Offset: 0x46c
	// Line 671, Address: 0x1f03ba4, Func Offset: 0x484
	// Line 672, Address: 0x1f03be4, Func Offset: 0x4c4
	// Line 674, Address: 0x1f03bfc, Func Offset: 0x4dc
	// Func End, Address: 0x1f03c20, Func Offset: 0x500
	// Line 684, Address: 0x1f03720, Func Offset: 0
	// Line 825, Address: 0x1f0374c, Func Offset: 0x2c
	// Line 827, Address: 0x1f03768, Func Offset: 0x48
	// Line 829, Address: 0x1f03778, Func Offset: 0x58
	// Line 830, Address: 0x1f037a0, Func Offset: 0x80
	// Line 832, Address: 0x1f037a8, Func Offset: 0x88
	// Line 833, Address: 0x1f037b4, Func Offset: 0x94
	// Line 834, Address: 0x1f037c8, Func Offset: 0xa8
	// Line 835, Address: 0x1f037d8, Func Offset: 0xb8
	// Line 836, Address: 0x1f037f8, Func Offset: 0xd8
	// Line 837, Address: 0x1f03800, Func Offset: 0xe0
	// Line 841, Address: 0x1f03808, Func Offset: 0xe8
	// Line 842, Address: 0x1f0387c, Func Offset: 0x15c
	// Line 843, Address: 0x1f038b0, Func Offset: 0x190
	// Line 845, Address: 0x1f038bc, Func Offset: 0x19c
	// Line 846, Address: 0x1f038c0, Func Offset: 0x1a0
	// Line 847, Address: 0x1f038d0, Func Offset: 0x1b0
	// Line 848, Address: 0x1f038d8, Func Offset: 0x1b8
	// Line 852, Address: 0x1f038e8, Func Offset: 0x1c8
	// Line 853, Address: 0x1f03950, Func Offset: 0x230
	// Line 854, Address: 0x1f03974, Func Offset: 0x254
	// Line 856, Address: 0x1f03980, Func Offset: 0x260
	// Line 857, Address: 0x1f03988, Func Offset: 0x268
	// Line 858, Address: 0x1f03998, Func Offset: 0x278
	// Line 859, Address: 0x1f039a8, Func Offset: 0x288
	// Line 860, Address: 0x1f039b0, Func Offset: 0x290
	// Line 864, Address: 0x1f039c0, Func Offset: 0x2a0
	// Line 865, Address: 0x1f03a28, Func Offset: 0x308
	// Line 866, Address: 0x1f03a4c, Func Offset: 0x32c
	// Line 867, Address: 0x1f03a58, Func Offset: 0x338
	// Line 868, Address: 0x1f03a6c, Func Offset: 0x34c
	// Func End, Address: 0x1f03aa0, Func Offset: 0x380
}

// 
// Start address: 0x1f03c20
void EvSoundCallAfterLoad()
{
	int room;
	// Line 679, Address: 0x1f03c20, Func Offset: 0
	// Line 682, Address: 0x1f03c28, Func Offset: 0x8
	// Line 684, Address: 0x1f03c30, Func Offset: 0x10
	// Line 685, Address: 0x1f03c3c, Func Offset: 0x1c
	// Line 688, Address: 0x1f03c68, Func Offset: 0x48
	// Func End, Address: 0x1f03c78, Func Offset: 0x58
}

// 
// Start address: 0x1f03c80
void EvAllTimeFunc()
{
	int st_y;
	int st_x;
	int room;
	int disp_ctrl_list[7];
	SubCharacter* scp;
	float mar_pos[4][2];
	// Line 695, Address: 0x1f03c80, Func Offset: 0
	// Line 702, Address: 0x1f03c90, Func Offset: 0x10
	// Line 704, Address: 0x1f03c94, Func Offset: 0x14
	// Line 705, Address: 0x1f03c9c, Func Offset: 0x1c
	// Line 707, Address: 0x1f03ce0, Func Offset: 0x60
	// Line 709, Address: 0x1f03d08, Func Offset: 0x88
	// Line 710, Address: 0x1f03d1c, Func Offset: 0x9c
	// Line 711, Address: 0x1f03d30, Func Offset: 0xb0
	// Line 712, Address: 0x1f03d3c, Func Offset: 0xbc
	// Line 713, Address: 0x1f03d48, Func Offset: 0xc8
	// Line 714, Address: 0x1f03d54, Func Offset: 0xd4
	// Line 715, Address: 0x1f03d64, Func Offset: 0xe4
	// Line 718, Address: 0x1f03d78, Func Offset: 0xf8
	// Line 721, Address: 0x1f03d80, Func Offset: 0x100
	// Line 722, Address: 0x1f03d94, Func Offset: 0x114
	// Line 724, Address: 0x1f03dc4, Func Offset: 0x144
	// Line 727, Address: 0x1f03dcc, Func Offset: 0x14c
	// Line 728, Address: 0x1f03de4, Func Offset: 0x164
	// Line 730, Address: 0x1f03df8, Func Offset: 0x178
	// Line 731, Address: 0x1f03e00, Func Offset: 0x180
	// Line 732, Address: 0x1f03e10, Func Offset: 0x190
	// Line 735, Address: 0x1f03e24, Func Offset: 0x1a4
	// Line 738, Address: 0x1f03e2c, Func Offset: 0x1ac
	// Line 740, Address: 0x1f03e54, Func Offset: 0x1d4
	// Line 742, Address: 0x1f03e64, Func Offset: 0x1e4
	// Line 743, Address: 0x1f03e6c, Func Offset: 0x1ec
	// Line 746, Address: 0x1f03e74, Func Offset: 0x1f4
	// Line 747, Address: 0x1f03e88, Func Offset: 0x208
	// Line 748, Address: 0x1f03e9c, Func Offset: 0x21c
	// Line 749, Address: 0x1f03eb4, Func Offset: 0x234
	// Line 750, Address: 0x1f03ec4, Func Offset: 0x244
	// Line 752, Address: 0x1f03ed8, Func Offset: 0x258
	// Line 754, Address: 0x1f03eec, Func Offset: 0x26c
	// Line 755, Address: 0x1f03ef4, Func Offset: 0x274
	// Line 758, Address: 0x1f03f08, Func Offset: 0x288
	// Line 759, Address: 0x1f03f20, Func Offset: 0x2a0
	// Line 760, Address: 0x1f03f30, Func Offset: 0x2b0
	// Line 761, Address: 0x1f03f48, Func Offset: 0x2c8
	// Line 763, Address: 0x1f03f5c, Func Offset: 0x2dc
	// Line 764, Address: 0x1f03f64, Func Offset: 0x2e4
	// Line 765, Address: 0x1f03f70, Func Offset: 0x2f0
	// Line 766, Address: 0x1f03f80, Func Offset: 0x300
	// Line 770, Address: 0x1f03f94, Func Offset: 0x314
	// Line 772, Address: 0x1f03fc0, Func Offset: 0x340
	// Line 774, Address: 0x1f03fe8, Func Offset: 0x368
	// Line 775, Address: 0x1f04008, Func Offset: 0x388
	// Line 776, Address: 0x1f04018, Func Offset: 0x398
	// Line 777, Address: 0x1f04030, Func Offset: 0x3b0
	// Line 778, Address: 0x1f04040, Func Offset: 0x3c0
	// Line 779, Address: 0x1f04054, Func Offset: 0x3d4
	// Line 780, Address: 0x1f04064, Func Offset: 0x3e4
	// Line 781, Address: 0x1f0407c, Func Offset: 0x3fc
	// Line 784, Address: 0x1f0408c, Func Offset: 0x40c
	// Line 785, Address: 0x1f04098, Func Offset: 0x418
	// Func End, Address: 0x1f040b0, Func Offset: 0x430
}

// 
// Start address: 0x1f040b0
void EvElevatorModelMove()
{
	int i;
	float work;
	float rot[4];
	float pos[4];
	SubCharacter* scp;
	float door_pos[4];
	float floor_pos[4];
	// Line 798, Address: 0x1f040b0, Func Offset: 0
	// Line 809, Address: 0x1f040c0, Func Offset: 0x10
	// Line 810, Address: 0x1f040d8, Func Offset: 0x28
	// Line 811, Address: 0x1f040f4, Func Offset: 0x44
	// Line 812, Address: 0x1f04114, Func Offset: 0x64
	// Line 813, Address: 0x1f04130, Func Offset: 0x80
	// Line 814, Address: 0x1f0414c, Func Offset: 0x9c
	// Line 815, Address: 0x1f04168, Func Offset: 0xb8
	// Line 816, Address: 0x1f04188, Func Offset: 0xd8
	// Line 818, Address: 0x1f041c4, Func Offset: 0x114
	// Line 819, Address: 0x1f041ec, Func Offset: 0x13c
	// Line 820, Address: 0x1f0420c, Func Offset: 0x15c
	// Line 821, Address: 0x1f04224, Func Offset: 0x174
	// Line 822, Address: 0x1f04248, Func Offset: 0x198
	// Line 823, Address: 0x1f04250, Func Offset: 0x1a0
	// Line 824, Address: 0x1f04268, Func Offset: 0x1b8
	// Line 825, Address: 0x1f04270, Func Offset: 0x1c0
	// Line 828, Address: 0x1f0428c, Func Offset: 0x1dc
	// Line 829, Address: 0x1f042a4, Func Offset: 0x1f4
	// Line 830, Address: 0x1f042c4, Func Offset: 0x214
	// Line 831, Address: 0x1f042e4, Func Offset: 0x234
	// Line 834, Address: 0x1f04320, Func Offset: 0x270
	// Line 838, Address: 0x1f04358, Func Offset: 0x2a8
	// Line 840, Address: 0x1f0436c, Func Offset: 0x2bc
	// Line 842, Address: 0x1f043b8, Func Offset: 0x308
	// Line 843, Address: 0x1f043e0, Func Offset: 0x330
	// Line 844, Address: 0x1f043f8, Func Offset: 0x348
	// Line 845, Address: 0x1f04400, Func Offset: 0x350
	// Line 846, Address: 0x1f0441c, Func Offset: 0x36c
	// Line 847, Address: 0x1f04438, Func Offset: 0x388
	// Line 849, Address: 0x1f04450, Func Offset: 0x3a0
	// Line 850, Address: 0x1f04458, Func Offset: 0x3a8
	// Line 852, Address: 0x1f04474, Func Offset: 0x3c4
	// Line 853, Address: 0x1f0447c, Func Offset: 0x3cc
	// Line 855, Address: 0x1f04488, Func Offset: 0x3d8
	// Line 856, Address: 0x1f0449c, Func Offset: 0x3ec
	// Line 857, Address: 0x1f044d0, Func Offset: 0x420
	// Line 858, Address: 0x1f044e8, Func Offset: 0x438
	// Line 859, Address: 0x1f044fc, Func Offset: 0x44c
	// Line 860, Address: 0x1f04518, Func Offset: 0x468
	// Line 861, Address: 0x1f04540, Func Offset: 0x490
	// Line 862, Address: 0x1f04568, Func Offset: 0x4b8
	// Line 864, Address: 0x1f04590, Func Offset: 0x4e0
	// Line 865, Address: 0x1f045a8, Func Offset: 0x4f8
	// Line 866, Address: 0x1f045c0, Func Offset: 0x510
	// Line 867, Address: 0x1f045d4, Func Offset: 0x524
	// Line 868, Address: 0x1f045f0, Func Offset: 0x540
	// Line 869, Address: 0x1f04618, Func Offset: 0x568
	// Line 870, Address: 0x1f04640, Func Offset: 0x590
	// Line 872, Address: 0x1f04668, Func Offset: 0x5b8
	// Line 875, Address: 0x1f04680, Func Offset: 0x5d0
	// Line 876, Address: 0x1f04698, Func Offset: 0x5e8
	// Line 877, Address: 0x1f046a8, Func Offset: 0x5f8
	// Line 878, Address: 0x1f046c0, Func Offset: 0x610
	// Line 879, Address: 0x1f046e8, Func Offset: 0x638
	// Line 880, Address: 0x1f046f0, Func Offset: 0x640
	// Line 881, Address: 0x1f04700, Func Offset: 0x650
	// Line 884, Address: 0x1f0471c, Func Offset: 0x66c
	// Line 885, Address: 0x1f04728, Func Offset: 0x678
	// Line 887, Address: 0x1f04730, Func Offset: 0x680
	// Line 889, Address: 0x1f04770, Func Offset: 0x6c0
	// Line 890, Address: 0x1f04790, Func Offset: 0x6e0
	// Line 891, Address: 0x1f04814, Func Offset: 0x764
	// Line 892, Address: 0x1f0489c, Func Offset: 0x7ec
	// Line 894, Address: 0x1f04914, Func Offset: 0x864
	// Line 895, Address: 0x1f049a0, Func Offset: 0x8f0
	// Line 896, Address: 0x1f049f4, Func Offset: 0x944
	// Line 897, Address: 0x1f04a28, Func Offset: 0x978
	// Line 898, Address: 0x1f04a5c, Func Offset: 0x9ac
	// Line 899, Address: 0x1f04ac0, Func Offset: 0xa10
	// Line 900, Address: 0x1f04aec, Func Offset: 0xa3c
	// Line 902, Address: 0x1f04b1c, Func Offset: 0xa6c
	// Line 903, Address: 0x1f04b3c, Func Offset: 0xa8c
	// Line 905, Address: 0x1f04b68, Func Offset: 0xab8
	// Line 908, Address: 0x1f04b9c, Func Offset: 0xaec
	// Line 909, Address: 0x1f04bb4, Func Offset: 0xb04
	// Line 910, Address: 0x1f04bcc, Func Offset: 0xb1c
	// Line 911, Address: 0x1f04be4, Func Offset: 0xb34
	// Func End, Address: 0x1f04bfc, Func Offset: 0xb4c
}

