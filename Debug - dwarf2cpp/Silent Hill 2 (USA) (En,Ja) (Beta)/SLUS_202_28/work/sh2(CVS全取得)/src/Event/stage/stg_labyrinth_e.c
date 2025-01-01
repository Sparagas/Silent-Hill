typedef struct shBattleInfo;
typedef struct Enemy_List;
typedef struct SubCharacter;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct _anon0;
typedef struct DynamicLight;
typedef struct Pad_KeyConfig;
typedef struct _CL_VHIT_WALL;
typedef struct _CL_HITPOLY_HEAD;
typedef union fsFile;
typedef struct shAttackInfo;
typedef struct _anon1;
typedef struct _CL_VHIT_CHARA;
typedef struct fsCdFile;
typedef union _anon2;
typedef struct _CL_VHIT_RESULT;
typedef struct _anon3;
typedef struct PAD_3D;
typedef union _anon4;
typedef struct Stage_Data;
typedef struct fsMgcFile;
typedef struct Event_List;
typedef struct CharaData_DemoList;
typedef struct Item_List;
typedef union fsFileIndex;
typedef struct Model_List;
typedef struct PAD_2D;
typedef struct fsMgfFile;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct shSkelton;
typedef struct PAD_INFO;
typedef struct _anon5;
typedef struct fsHdFile;
typedef struct DramaDemo_MessageTime;
typedef struct _AnimeInfo;
typedef struct fsMgpFile;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct DramaDemo_PlayInfo;
typedef struct _anon6;
typedef struct _anon7;
typedef struct shPlayerWork;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct shBattleArea;

typedef int(*type_1)();
typedef void(*type_8)();
typedef void(*type_45)(SubCharacter*);
typedef void(*type_47)(SubCharacter*);

typedef _AnimeInfo type_0[5];
typedef _AnimeInfo type_2[21];
typedef unsigned char type_3[97];
typedef float type_4[4][2];
typedef float type_5[4][2][4];
typedef fsFileIndex type_6[1];
typedef _AnimeInfo type_7[33];
typedef fsFileIndex type_9[1];
typedef fsFileIndex type_10[1];
typedef fsFileIndex type_11[1];
typedef fsFileIndex type_12[1];
typedef unsigned int type_13[255];
typedef _AnimeInfo type_14[11];
typedef unsigned char type_15[2];
typedef fsFileIndex type_16[1];
typedef _AnimeInfo type_17[30];
typedef unsigned int type_18[32];
typedef Item_List type_19[4];
typedef unsigned char type_20[4];
typedef unsigned char type_21[20];
typedef char type_22[4];
typedef char type_23[4];
typedef char type_24[4];
typedef int type_25[6];
typedef char type_26[4];
typedef _AnimeInfo type_27[17];
typedef char type_28[4];
typedef Model_List type_29[4];
typedef _AnimeInfo type_30[34];
typedef CharaData_DemoList type_31[6];
typedef float type_32[4];
typedef shAttackInfo type_33[66];
typedef float type_34[4][4];
typedef unsigned char type_35[882];
typedef _AnimeInfo type_36[17];
typedef int(*type_37)()[5];
typedef unsigned char type_38[14];
typedef PAD_INFO type_39[10];
typedef float type_40[4];
typedef float type_41[24];
typedef float type_42[2];
typedef _AnimeInfo type_43[17];
typedef float type_44[4][2];
typedef unsigned char type_46[69];
typedef unsigned char type_48[4];
typedef fsFileIndex type_49[1];
typedef unsigned char type_50[4];
typedef float type_51[24];
typedef char type_52[0];
typedef unsigned char type_53[4];
typedef _AnimeInfo type_54[33];
typedef float type_55[4][2];
typedef float type_56[4][2][3];
typedef Enemy_List type_57[17];
typedef unsigned char type_58[24];
typedef unsigned char type_59[2];
typedef unsigned char type_60[2];
typedef float type_61[4];
typedef _AnimeInfo type_62[24];
typedef Event_List type_63[54];
typedef unsigned char type_64[14];
typedef char type_65[1024];

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

struct _anon0
{
	void(*SpecDraw)();
	void(*PreDraw)();
	void(*PostDraw)();
	void(*CharaDraw_Hook)();
};

struct DynamicLight
{
	float NowCamDir[4];
	float BeforeCamDir[4];
	float NowDir[4];
	float BeforeDir[4];
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

struct PAD_3D
{
	char round_way;
	unsigned char reserved1;
	unsigned char lslide;
	unsigned char rslide;
	unsigned char lturn180;
	unsigned char rturn180;
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

struct Event_List
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
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

struct Model_List
{
	short kind;
	short id;
	short flag_off;
	short flag_on;
	float pos[4];
	float rot[4];
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

struct DramaDemo_MessageTime
{
	unsigned short start;
	unsigned short end;
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

struct _anon7
{
	fsFile* fp;
	char* name;
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

struct shBattleArea
{
	float center;
	float radius;
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
unsigned char ev_pos[882];
Event_List ev_list[54];
Item_List gi_list[4];
float colvec[4];
float colref[4];
DynamicLight DynamicLW;
int(*ev_prog)()[5];
_anon0 gfw_func;
Model_List mdl_list[4];
Enemy_List en_list[17];
Stage_Data stage_labyrinth_e;
<unknown fundamental type (0xa510)>* anim_adr;
char* dds_adr;
shPlayerWork sh2jms;
int ev_s_step;
int ev_p_step;
float ev_timer;
_anon1 game_flag;
fsFileIndex data_chr_pap_pap_anm[1];
fsFileIndex data_demo_papa_agl_papa_agl_dds[1];
char MemShare_gp_data_buf[0];
fsFileIndex data_demo_papa_agl_papa_agl_a_dds[1];
float demo_frame;
fsFileIndex data_demo_papa_agl_pap_anm[1];
Pad_KeyConfig key_config;
fsFileIndex data_pic_dls_p_newspaper_tex[1];
fsFileIndex data_demo_agl_himei_agl_himei_dds[1];
fsFileIndex data_demo_agl_himei_hll_jms_anm[1];
float cda_rot[24];

int EvProgScreamOfAngela();
int EvProgPapaAttackAngela();
int EvProgAngelaAttackPapa();
int EvProgNewsOfPapa();
int EvCharaDataClear(int room);
void EvRoomInit();
void EvAllTimeFunc();
int EvBgmControl();

// 
// Start address: 0x1f020b0
int EvProgScreamOfAngela()
{
	DramaDemo_PlayInfo info;
	// Line 167, Address: 0x1f020b0, Func Offset: 0
	// Line 173, Address: 0x1f020b8, Func Offset: 0x8
	// Line 175, Address: 0x1f02100, Func Offset: 0x50
	// Line 176, Address: 0x1f02114, Func Offset: 0x64
	// Line 177, Address: 0x1f02120, Func Offset: 0x70
	// Line 178, Address: 0x1f02128, Func Offset: 0x78
	// Line 181, Address: 0x1f0213c, Func Offset: 0x8c
	// Line 182, Address: 0x1f02158, Func Offset: 0xa8
	// Line 184, Address: 0x1f02188, Func Offset: 0xd8
	// Line 187, Address: 0x1f02190, Func Offset: 0xe0
	// Line 188, Address: 0x1f021a0, Func Offset: 0xf0
	// Line 189, Address: 0x1f021b4, Func Offset: 0x104
	// Line 190, Address: 0x1f021d4, Func Offset: 0x124
	// Line 191, Address: 0x1f021dc, Func Offset: 0x12c
	// Line 195, Address: 0x1f021f0, Func Offset: 0x140
	// Line 196, Address: 0x1f0221c, Func Offset: 0x16c
	// Line 199, Address: 0x1f02224, Func Offset: 0x174
	// Line 200, Address: 0x1f02230, Func Offset: 0x180
	// Line 201, Address: 0x1f02250, Func Offset: 0x1a0
	// Line 202, Address: 0x1f02264, Func Offset: 0x1b4
	// Line 203, Address: 0x1f02278, Func Offset: 0x1c8
	// Line 204, Address: 0x1f02280, Func Offset: 0x1d0
	// Line 206, Address: 0x1f0228c, Func Offset: 0x1dc
	// Line 207, Address: 0x1f02290, Func Offset: 0x1e0
	// Func End, Address: 0x1f022a0, Func Offset: 0x1f0
}

// 
// Start address: 0x1f022a0
int EvProgPapaAttackAngela()
{
	SubCharacter* scp;
	float vec[4][2][4];
	DramaDemo_PlayInfo info;
	CharaData_DemoList chara[6];
	// Line 213, Address: 0x1f022a0, Func Offset: 0
	// Line 255, Address: 0x1f022a8, Func Offset: 0x8
	// Line 257, Address: 0x1f022d8, Func Offset: 0x38
	// Line 258, Address: 0x1f022f0, Func Offset: 0x50
	// Line 259, Address: 0x1f02304, Func Offset: 0x64
	// Line 261, Address: 0x1f02320, Func Offset: 0x80
	// Line 263, Address: 0x1f0233c, Func Offset: 0x9c
	// Line 264, Address: 0x1f0234c, Func Offset: 0xac
	// Line 265, Address: 0x1f02358, Func Offset: 0xb8
	// Line 266, Address: 0x1f0236c, Func Offset: 0xcc
	// Line 269, Address: 0x1f02380, Func Offset: 0xe0
	// Line 270, Address: 0x1f023ac, Func Offset: 0x10c
	// Line 273, Address: 0x1f023b4, Func Offset: 0x114
	// Line 274, Address: 0x1f023c0, Func Offset: 0x120
	// Line 275, Address: 0x1f023d4, Func Offset: 0x134
	// Line 276, Address: 0x1f023dc, Func Offset: 0x13c
	// Line 277, Address: 0x1f023f0, Func Offset: 0x150
	// Line 278, Address: 0x1f02404, Func Offset: 0x164
	// Line 279, Address: 0x1f02410, Func Offset: 0x170
	// Line 280, Address: 0x1f02424, Func Offset: 0x184
	// Line 281, Address: 0x1f0243c, Func Offset: 0x19c
	// Line 282, Address: 0x1f02450, Func Offset: 0x1b0
	// Line 284, Address: 0x1f02484, Func Offset: 0x1e4
	// Line 285, Address: 0x1f02494, Func Offset: 0x1f4
	// Line 287, Address: 0x1f024bc, Func Offset: 0x21c
	// Line 289, Address: 0x1f024e4, Func Offset: 0x244
	// Line 290, Address: 0x1f0250c, Func Offset: 0x26c
	// Line 291, Address: 0x1f02534, Func Offset: 0x294
	// Line 292, Address: 0x1f02540, Func Offset: 0x2a0
	// Line 293, Address: 0x1f0254c, Func Offset: 0x2ac
	// Line 294, Address: 0x1f02560, Func Offset: 0x2c0
	// Line 296, Address: 0x1f0256c, Func Offset: 0x2cc
	// Line 297, Address: 0x1f02570, Func Offset: 0x2d0
	// Func End, Address: 0x1f02580, Func Offset: 0x2e0
	// Line 156, Address: 0x1f022a0, Func Offset: 0
	// Line 244, Address: 0x1f022a8, Func Offset: 0x8
	// Line 247, Address: 0x1f02338, Func Offset: 0x98
	// Line 248, Address: 0x1f02350, Func Offset: 0xb0
	// Line 249, Address: 0x1f02368, Func Offset: 0xc8
	// Line 250, Address: 0x1f02374, Func Offset: 0xd4
	// Line 251, Address: 0x1f02388, Func Offset: 0xe8
	// Line 252, Address: 0x1f0239c, Func Offset: 0xfc
	// Line 253, Address: 0x1f023a8, Func Offset: 0x108
	// Line 256, Address: 0x1f023bc, Func Offset: 0x11c
	// Line 257, Address: 0x1f023cc, Func Offset: 0x12c
	// Line 258, Address: 0x1f023d4, Func Offset: 0x134
	// Line 259, Address: 0x1f023e8, Func Offset: 0x148
	// Line 261, Address: 0x1f023fc, Func Offset: 0x15c
	// Line 263, Address: 0x1f0242c, Func Offset: 0x18c
	// Line 266, Address: 0x1f02434, Func Offset: 0x194
	// Line 267, Address: 0x1f02458, Func Offset: 0x1b8
	// Line 270, Address: 0x1f02460, Func Offset: 0x1c0
	// Line 271, Address: 0x1f02478, Func Offset: 0x1d8
	// Line 272, Address: 0x1f024a0, Func Offset: 0x200
	// Line 275, Address: 0x1f024a8, Func Offset: 0x208
	// Line 276, Address: 0x1f024d4, Func Offset: 0x234
	// Line 277, Address: 0x1f024e8, Func Offset: 0x248
	// Line 280, Address: 0x1f024f0, Func Offset: 0x250
	// Line 281, Address: 0x1f024f8, Func Offset: 0x258
	// Line 285, Address: 0x1f0250c, Func Offset: 0x26c
	// Line 286, Address: 0x1f0251c, Func Offset: 0x27c
	// Line 287, Address: 0x1f02528, Func Offset: 0x288
	// Line 288, Address: 0x1f02540, Func Offset: 0x2a0
	// Line 289, Address: 0x1f02554, Func Offset: 0x2b4
	// Line 290, Address: 0x1f02578, Func Offset: 0x2d8
	// Line 291, Address: 0x1f02584, Func Offset: 0x2e4
	// Line 292, Address: 0x1f02598, Func Offset: 0x2f8
	// Line 293, Address: 0x1f025a4, Func Offset: 0x304
	// Line 296, Address: 0x1f025b8, Func Offset: 0x318
	// Line 297, Address: 0x1f025e4, Func Offset: 0x344
	// Line 300, Address: 0x1f025ec, Func Offset: 0x34c
	// Line 301, Address: 0x1f025f4, Func Offset: 0x354
	// Line 305, Address: 0x1f02608, Func Offset: 0x368
	// Line 306, Address: 0x1f02614, Func Offset: 0x374
	// Line 307, Address: 0x1f0262c, Func Offset: 0x38c
	// Line 308, Address: 0x1f02650, Func Offset: 0x3b0
	// Line 309, Address: 0x1f0265c, Func Offset: 0x3bc
	// Line 310, Address: 0x1f02668, Func Offset: 0x3c8
	// Line 313, Address: 0x1f0267c, Func Offset: 0x3dc
	// Line 314, Address: 0x1f02688, Func Offset: 0x3e8
	// Line 315, Address: 0x1f02694, Func Offset: 0x3f4
	// Line 316, Address: 0x1f026a0, Func Offset: 0x400
	// Line 317, Address: 0x1f026b4, Func Offset: 0x414
	// Line 318, Address: 0x1f026bc, Func Offset: 0x41c
	// Line 319, Address: 0x1f026c8, Func Offset: 0x428
	// Line 320, Address: 0x1f026d4, Func Offset: 0x434
	// Line 322, Address: 0x1f026fc, Func Offset: 0x45c
	// Line 324, Address: 0x1f0271c, Func Offset: 0x47c
	// Line 326, Address: 0x1f02728, Func Offset: 0x488
	// Line 327, Address: 0x1f0272c, Func Offset: 0x48c
	// Func End, Address: 0x1f0273c, Func Offset: 0x49c
	// Line 272, Address: 0x1f022a0, Func Offset: 0
	// Line 273, Address: 0x1f022a8, Func Offset: 0x8
	// Line 274, Address: 0x1f022b8, Func Offset: 0x18
	// Func End, Address: 0x1f022c8, Func Offset: 0x28
}

// 
// Start address: 0x1f02580
int EvProgAngelaAttackPapa()
{
	int ret;
	float vec[4][2][3];
	int glass_on;
	DramaDemo_PlayInfo info;
	// Line 303, Address: 0x1f02580, Func Offset: 0
	// Line 349, Address: 0x1f0258c, Func Offset: 0xc
	// Line 351, Address: 0x1f025bc, Func Offset: 0x3c
	// Line 352, Address: 0x1f025cc, Func Offset: 0x4c
	// Line 353, Address: 0x1f025d8, Func Offset: 0x58
	// Line 354, Address: 0x1f025ec, Func Offset: 0x6c
	// Line 356, Address: 0x1f02614, Func Offset: 0x94
	// Line 357, Address: 0x1f02628, Func Offset: 0xa8
	// Line 358, Address: 0x1f02630, Func Offset: 0xb0
	// Line 361, Address: 0x1f02644, Func Offset: 0xc4
	// Line 362, Address: 0x1f02658, Func Offset: 0xd8
	// Line 363, Address: 0x1f02690, Func Offset: 0x110
	// Line 364, Address: 0x1f02698, Func Offset: 0x118
	// Line 366, Address: 0x1f026a4, Func Offset: 0x124
	// Line 367, Address: 0x1f026c0, Func Offset: 0x140
	// Line 370, Address: 0x1f026c8, Func Offset: 0x148
	// Line 371, Address: 0x1f026d4, Func Offset: 0x154
	// Line 372, Address: 0x1f026e0, Func Offset: 0x160
	// Line 373, Address: 0x1f026ec, Func Offset: 0x16c
	// Line 374, Address: 0x1f02700, Func Offset: 0x180
	// Line 375, Address: 0x1f02708, Func Offset: 0x188
	// Line 378, Address: 0x1f02738, Func Offset: 0x1b8
	// Line 380, Address: 0x1f02760, Func Offset: 0x1e0
	// Line 382, Address: 0x1f02788, Func Offset: 0x208
	// Line 383, Address: 0x1f027b0, Func Offset: 0x230
	// Line 384, Address: 0x1f027d8, Func Offset: 0x258
	// Line 385, Address: 0x1f027e4, Func Offset: 0x264
	// Line 386, Address: 0x1f027f0, Func Offset: 0x270
	// Line 388, Address: 0x1f027fc, Func Offset: 0x27c
	// Line 389, Address: 0x1f02800, Func Offset: 0x280
	// Func End, Address: 0x1f02814, Func Offset: 0x294
}

// 
// Start address: 0x1f02820
int EvProgNewsOfPapa()
{
	// Line 394, Address: 0x1f02820, Func Offset: 0
	// Line 395, Address: 0x1f02828, Func Offset: 0x8
	// Line 397, Address: 0x1f028ac, Func Offset: 0x8c
	// Line 398, Address: 0x1f028c0, Func Offset: 0xa0
	// Line 399, Address: 0x1f028cc, Func Offset: 0xac
	// Line 403, Address: 0x1f028e0, Func Offset: 0xc0
	// Line 404, Address: 0x1f028f0, Func Offset: 0xd0
	// Line 405, Address: 0x1f02900, Func Offset: 0xe0
	// Line 406, Address: 0x1f02934, Func Offset: 0x114
	// Line 407, Address: 0x1f02948, Func Offset: 0x128
	// Line 410, Address: 0x1f02950, Func Offset: 0x130
	// Line 411, Address: 0x1f02978, Func Offset: 0x158
	// Line 414, Address: 0x1f02980, Func Offset: 0x160
	// Line 416, Address: 0x1f029a0, Func Offset: 0x180
	// Line 417, Address: 0x1f029b0, Func Offset: 0x190
	// Line 420, Address: 0x1f029c4, Func Offset: 0x1a4
	// Line 421, Address: 0x1f029cc, Func Offset: 0x1ac
	// Line 422, Address: 0x1f029d4, Func Offset: 0x1b4
	// Line 423, Address: 0x1f029dc, Func Offset: 0x1bc
	// Line 424, Address: 0x1f02a00, Func Offset: 0x1e0
	// Line 427, Address: 0x1f02a08, Func Offset: 0x1e8
	// Line 428, Address: 0x1f02a10, Func Offset: 0x1f0
	// Line 429, Address: 0x1f02a18, Func Offset: 0x1f8
	// Line 430, Address: 0x1f02a20, Func Offset: 0x200
	// Line 431, Address: 0x1f02a58, Func Offset: 0x238
	// Line 432, Address: 0x1f02a6c, Func Offset: 0x24c
	// Line 435, Address: 0x1f02a74, Func Offset: 0x254
	// Line 436, Address: 0x1f02a7c, Func Offset: 0x25c
	// Line 437, Address: 0x1f02a84, Func Offset: 0x264
	// Line 438, Address: 0x1f02a8c, Func Offset: 0x26c
	// Line 439, Address: 0x1f02a94, Func Offset: 0x274
	// Line 440, Address: 0x1f02aa8, Func Offset: 0x288
	// Line 441, Address: 0x1f02abc, Func Offset: 0x29c
	// Line 442, Address: 0x1f02acc, Func Offset: 0x2ac
	// Line 445, Address: 0x1f02ad4, Func Offset: 0x2b4
	// Line 446, Address: 0x1f02ae4, Func Offset: 0x2c4
	// Line 447, Address: 0x1f02af8, Func Offset: 0x2d8
	// Line 448, Address: 0x1f02b08, Func Offset: 0x2e8
	// Line 452, Address: 0x1f02b18, Func Offset: 0x2f8
	// Line 453, Address: 0x1f02b44, Func Offset: 0x324
	// Line 456, Address: 0x1f02b4c, Func Offset: 0x32c
	// Line 457, Address: 0x1f02b60, Func Offset: 0x340
	// Line 459, Address: 0x1f02b6c, Func Offset: 0x34c
	// Line 460, Address: 0x1f02b70, Func Offset: 0x350
	// Func End, Address: 0x1f02b80, Func Offset: 0x360
}

// 
// Start address: 0x1f02b80
int EvCharaDataClear(int room)
{
	// Line 466, Address: 0x1f02b80, Func Offset: 0
	// Line 467, Address: 0x1f02ba4, Func Offset: 0x24
	// Line 468, Address: 0x1f02bb0, Func Offset: 0x30
	// Line 469, Address: 0x1f02bb4, Func Offset: 0x34
	// Func End, Address: 0x1f02bbc, Func Offset: 0x3c
}

// 
// Start address: 0x1f02bc0
void EvRoomInit()
{
	int i;
	int room;
	// Line 474, Address: 0x1f02bc0, Func Offset: 0
	// Line 478, Address: 0x1f02bcc, Func Offset: 0xc
	// Line 480, Address: 0x1f02bd4, Func Offset: 0x14
	// Line 481, Address: 0x1f02be0, Func Offset: 0x20
	// Line 482, Address: 0x1f02bec, Func Offset: 0x2c
	// Line 483, Address: 0x1f02c44, Func Offset: 0x84
	// Line 484, Address: 0x1f02c70, Func Offset: 0xb0
	// Line 486, Address: 0x1f02c8c, Func Offset: 0xcc
	// Line 488, Address: 0x1f02ca8, Func Offset: 0xe8
	// Line 490, Address: 0x1f02cb8, Func Offset: 0xf8
	// Func End, Address: 0x1f02ccc, Func Offset: 0x10c
	// Line 462, Address: 0x1f02bc0, Func Offset: 0
	// Line 465, Address: 0x1f02bc8, Func Offset: 0x8
	// Line 467, Address: 0x1f02be4, Func Offset: 0x24
	// Line 469, Address: 0x1f02bf4, Func Offset: 0x34
	// Line 470, Address: 0x1f02c18, Func Offset: 0x58
	// Line 473, Address: 0x1f02c20, Func Offset: 0x60
	// Line 475, Address: 0x1f02c6c, Func Offset: 0xac
	// Line 479, Address: 0x1f02cd0, Func Offset: 0x110
	// Line 480, Address: 0x1f02cfc, Func Offset: 0x13c
	// Line 481, Address: 0x1f02d20, Func Offset: 0x160
	// Line 482, Address: 0x1f02d2c, Func Offset: 0x16c
	// Line 483, Address: 0x1f02d34, Func Offset: 0x174
	// Line 487, Address: 0x1f02d98, Func Offset: 0x1d8
	// Line 488, Address: 0x1f02dc4, Func Offset: 0x204
	// Line 489, Address: 0x1f02de8, Func Offset: 0x228
	// Line 491, Address: 0x1f02df4, Func Offset: 0x234
	// Func End, Address: 0x1f02e04, Func Offset: 0x244
}

// 
// Start address: 0x1f02cd0
void EvAllTimeFunc()
{
	char buf[1024];
	int i;
	int room;
	float work;
	float rot[4];
	float pos[4];
	SubCharacter* scp;
	unsigned char cda_mv_dir[24];
	float cda_mv_spd[24];
	// Line 497, Address: 0x1f02cd0, Func Offset: 0
	// Line 516, Address: 0x1f02cf0, Func Offset: 0x20
	// Line 525, Address: 0x1f02d50, Func Offset: 0x80
	// Line 526, Address: 0x1f02d64, Func Offset: 0x94
	// Line 531, Address: 0x1f02d70, Func Offset: 0xa0
	// Line 533, Address: 0x1f02d78, Func Offset: 0xa8
	// Line 534, Address: 0x1f02d84, Func Offset: 0xb4
	// Line 535, Address: 0x1f02d98, Func Offset: 0xc8
	// Line 536, Address: 0x1f02da4, Func Offset: 0xd4
	// Line 537, Address: 0x1f02dc0, Func Offset: 0xf0
	// Line 538, Address: 0x1f02e04, Func Offset: 0x134
	// Line 539, Address: 0x1f02e10, Func Offset: 0x140
	// Line 540, Address: 0x1f02e30, Func Offset: 0x160
	// Line 541, Address: 0x1f02e5c, Func Offset: 0x18c
	// Line 542, Address: 0x1f02e7c, Func Offset: 0x1ac
	// Line 543, Address: 0x1f02e9c, Func Offset: 0x1cc
	// Line 544, Address: 0x1f02ea8, Func Offset: 0x1d8
	// Line 545, Address: 0x1f02ec0, Func Offset: 0x1f0
	// Line 546, Address: 0x1f02ed4, Func Offset: 0x204
	// Line 547, Address: 0x1f02ed8, Func Offset: 0x208
	// Func End, Address: 0x1f02ef8, Func Offset: 0x228
}

// 
// Start address: 0x1f02f00
int EvBgmControl()
{
	// Line 553, Address: 0x1f02f00, Func Offset: 0
	// Line 555, Address: 0x1f02f18, Func Offset: 0x18
	// Func End, Address: 0x1f02f20, Func Offset: 0x20
}

