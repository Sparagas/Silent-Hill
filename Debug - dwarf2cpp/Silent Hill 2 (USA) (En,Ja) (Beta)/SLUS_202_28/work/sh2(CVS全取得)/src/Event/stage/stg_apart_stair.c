typedef struct SubCharacter;
typedef struct _anon0;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct _anon1;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct DynamicLight;
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
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct _CL_HITPOLY_PLANE;
typedef struct PAD_2D;
typedef struct fsMgfFile;
typedef union Q_WORDDATA;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct shSkelton;
typedef struct PAD_INFO;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct _anon5;
typedef struct fsHdFile;
typedef struct Event_CamSetData;
typedef struct fsMgpFile;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct sh2gfw_Env_ctl;
typedef struct _anon6;
typedef struct DramaDemo_MessageTime;
typedef struct _SH2_SYS;
typedef struct _anon7;
typedef struct DramaDemo_PlayInfo;
typedef struct shPlayerWork;
typedef struct shBattleFight;
typedef struct shBattleShot;

typedef void(*type_1)();
typedef int(*type_17)();
typedef void(*type_48)(SubCharacter*);
typedef void(*type_51)(SubCharacter*);

typedef Model_List type_0[2];
typedef unsigned short type_2[4];
typedef _AnimeInfo type_3[5];
typedef unsigned char type_4[97];
typedef unsigned char type_5[482];
typedef unsigned int type_6[255];
typedef fsFileIndex type_7[1];
typedef fsFileIndex type_8[1];
typedef unsigned int type_9[32];
typedef unsigned char type_10[4];
typedef float type_11[4][4];
typedef char type_12[4];
typedef char type_13[4];
typedef char type_14[4];
typedef fsFileIndex type_15[1];
typedef _AnimeInfo type_16[33];
typedef char type_18[4];
typedef char type_19[4];
typedef unsigned char type_20[2];
typedef _AnimeInfo type_21[11];
typedef unsigned char type_22[20];
typedef _AnimeInfo type_23[30];
typedef fsFileIndex type_24[1];
typedef _CL_HITPOLY_PLANE type_25[2];
typedef int(*type_26)()[8];
typedef _AnimeInfo type_27[17];
typedef Event_List type_28[36];
typedef float type_29[4][4];
typedef unsigned int type_30[4];
typedef unsigned short type_31[8];
typedef _AnimeInfo type_32[34];
typedef shAttackInfo type_33[66];
typedef float type_34[4];
typedef float type_35[4];
typedef float type_36[4][4];
typedef unsigned char type_37[16];
typedef unsigned char type_38[14];
typedef int type_39[4];
typedef _AnimeInfo type_40[17];
typedef short type_41[8];
typedef PAD_INFO type_42[10];
typedef char type_43[16];
typedef unsigned long type_44[2];
typedef float type_45[4];
typedef float type_46[2];
typedef float type_47[4][2];
typedef _AnimeInfo type_49[17];
typedef unsigned char type_50[69];
typedef unsigned char type_52[4];
typedef fsFileIndex type_53[1];
typedef unsigned char type_54[4];
typedef CharaData_DemoList type_55[4];
typedef unsigned char type_56[4];
typedef fsFileIndex type_57[1];
typedef Enemy_List type_58[2];
typedef _AnimeInfo type_59[33];
typedef int type_60[3];
typedef unsigned int type_61[8];
typedef _AnimeInfo type_62[24];
typedef fsFileIndex type_63[1];
typedef Item_List type_64[6];
typedef unsigned char type_65[2];
typedef unsigned char type_66[2];
typedef float type_67[4];
typedef char type_68[0];
typedef float type_69[4];
typedef float type_70[4][4];
typedef unsigned char type_71[14];
typedef _AnimeInfo type_72[24];

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

struct DynamicLight
{
	float NowCamDir[4];
	float BeforeCamDir[4];
	float NowDir[4];
	float BeforeDir[4];
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

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA dirvec;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
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

union Q_WORDDATA
{
	unsigned int ui32[4];
	unsigned short us16[8];
	float fl32[4];
	unsigned char uc8[16];
	int si32[4];
	short ss16[8];
	char sc8[16];
	unsigned long ul64[2];
	<unknown fundamental type (0xa510)> ul128;
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

struct sh2gfw_POINTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
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

struct Event_CamSetData
{
	float pos[4];
	float itr[4];
	float rot[4];
	float roll;
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

struct sh2gfw_Env_ctl
{
	float camera_p[4];
	float camera_zd[4];
	float camera_yd[4];
	float camera_rot[4];
	float camera_ido[4];
	float camera_parms[4];
	float camera_parms2[4];
	float camera_mat[4][4];
	float objclip_mat[4][4];
	Q_WORDDATA block_index;
	float p_light0[4];
	float p_light1[4];
	float p_light2[4];
	float p_color0[4];
	float p_color1[4];
	float p_color2[4];
	float ambient[4];
	float VertexAmbient[4];
	float BaseAmbient[4];
	float BaseVertexColor[4];
	float spot0_Wpos[4];
	float spot0_Wdir[4];
	sh2gfw_SPOTL_MATRIX SpotL0;
	float spot1_Wpos[4];
	float spot1_Wdir[4];
	sh2gfw_SPOTL_MATRIX SpotL1;
	float CharacterLightFactor[4];
	float CharacterLightFactor_Other[4];
	sh2gfw_SPOTL_MATRIX SpotL2;
	float point0_localpos[4];
	sh2gfw_POINTL_MATRIX PointL0;
	unsigned short light_mode;
	unsigned short weather_mode;
	unsigned short time_mode;
	unsigned short now_block;
	unsigned short mode_buf[4];
	Q_WORDDATA stat_ctl_1;
	Q_WORDDATA stat_ctl_2;
	Q_WORDDATA fogcolor;
	Q_WORDDATA fogparm;
	Q_WORDDATA MoveFogColor;
	Q_WORDDATA clearcolor;
	Q_WORDDATA random_seeds;
	Q_WORDDATA compo_shadow_env;
	Q_WORDDATA compo_shadow_test;
	Q_WORDDATA compo_shadow_alp;
	Q_WORDDATA compo_shadow_col;
	Q_WORDDATA compo_Fill_col;
	Q_WORDDATA NoiseCondition;
	Q_WORDDATA CopyFilterColor;
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

struct _SH2_SYS
{
	unsigned int step[8];
	unsigned int pre_playable;
	int main_status;
	unsigned int soft_reset;
	unsigned int frame_cnt;
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
_AnimeInfo pjames_stage_anim[24];
unsigned char ev_pos[482];
Event_List ev_list[36];
Item_List gi_list[6];
_CL_HITPOLY_PLANE clActWallList_ap88[2];
float colvec[4];
float colref[4];
float ldir[4];
DynamicLight DynamicLW;
sh2gfw_Env_ctl Env_ctl;
int(*ev_prog)()[8];
Model_List mdl_list[2];
_anon0 SpecialDrawFunctions;
Enemy_List en_list[2];
Stage_Data stage_apart_stair;
float siren_vlm;
float water_se;
fsFileIndex data_pic_map_apartmape1f_tex[1];
fsFileIndex data_pic_map_apartmapw_tex[1];
_SH2_SYS Sh2sys;
fsFileIndex data_chr_scu_scu_anm[1];
fsFileIndex data_chr_red_red_anm[1];
shPlayerWork sh2jms;
int ev_s_step;
int ev_p_step;
fsFileIndex data_demo_ap_boss_scu_anm[1];
fsFileIndex data_demo_ap_boss_red_anm[1];
char MemShare_gp_data_buf[0];
fsFileIndex data_demo_ap_boss_ap_boss_dds[1];
_anon1 game_flag;
float ev_timer;

int EvProgUseYardKey();
int EvProgGetApartMap();
int EvProgGetApartWestMap();
int EvProgGetCannedJuice();
int EvProgApartBoss();
int EvProgApartBossSiren();
int EvProgApartBossEnd();
void EvRoomInit();
void EvAllTimeFunc();

// 
// Start address: 0x1f02100
int EvProgUseYardKey()
{
	// Line 196, Address: 0x1f02100, Func Offset: 0
	// Line 231, Address: 0x1f02108, Func Offset: 0x8
	// Line 233, Address: 0x1f02138, Func Offset: 0x38
	// Line 234, Address: 0x1f02148, Func Offset: 0x48
	// Line 235, Address: 0x1f02158, Func Offset: 0x58
	// Line 236, Address: 0x1f02164, Func Offset: 0x64
	// Line 237, Address: 0x1f02178, Func Offset: 0x78
	// Line 241, Address: 0x1f0218c, Func Offset: 0x8c
	// Line 243, Address: 0x1f021c4, Func Offset: 0xc4
	// Line 244, Address: 0x1f021e0, Func Offset: 0xe0
	// Line 247, Address: 0x1f021e8, Func Offset: 0xe8
	// Line 248, Address: 0x1f021fc, Func Offset: 0xfc
	// Line 249, Address: 0x1f02210, Func Offset: 0x110
	// Line 250, Address: 0x1f02218, Func Offset: 0x118
	// Line 251, Address: 0x1f02230, Func Offset: 0x130
	// Line 252, Address: 0x1f02244, Func Offset: 0x144
	// Line 253, Address: 0x1f02254, Func Offset: 0x154
	// Line 254, Address: 0x1f02260, Func Offset: 0x160
	// Line 255, Address: 0x1f0226c, Func Offset: 0x16c
	// Line 256, Address: 0x1f02278, Func Offset: 0x178
	// Line 257, Address: 0x1f02280, Func Offset: 0x180
	// Line 258, Address: 0x1f0228c, Func Offset: 0x18c
	// Line 259, Address: 0x1f0229c, Func Offset: 0x19c
	// Line 260, Address: 0x1f022a8, Func Offset: 0x1a8
	// Line 261, Address: 0x1f022b4, Func Offset: 0x1b4
	// Line 263, Address: 0x1f022c0, Func Offset: 0x1c0
	// Line 264, Address: 0x1f022c4, Func Offset: 0x1c4
	// Func End, Address: 0x1f022d4, Func Offset: 0x1d4
	// Line 122, Address: 0x1f02100, Func Offset: 0
	// Line 123, Address: 0x1f02108, Func Offset: 0x8
	// Line 126, Address: 0x1f02138, Func Offset: 0x38
	// Func End, Address: 0x1f02148, Func Offset: 0x48
}

// 
// Start address: 0x1f02150
int EvProgGetApartMap()
{
	// Line 312, Address: 0x1f02150, Func Offset: 0
	// Line 313, Address: 0x1f02158, Func Offset: 0x8
	// Line 315, Address: 0x1f021c4, Func Offset: 0x74
	// Line 316, Address: 0x1f021d8, Func Offset: 0x88
	// Line 317, Address: 0x1f021e4, Func Offset: 0x94
	// Line 321, Address: 0x1f021f8, Func Offset: 0xa8
	// Line 322, Address: 0x1f0220c, Func Offset: 0xbc
	// Line 324, Address: 0x1f02238, Func Offset: 0xe8
	// Line 325, Address: 0x1f02240, Func Offset: 0xf0
	// Line 327, Address: 0x1f02254, Func Offset: 0x104
	// Line 330, Address: 0x1f0225c, Func Offset: 0x10c
	// Line 331, Address: 0x1f0226c, Func Offset: 0x11c
	// Line 333, Address: 0x1f0228c, Func Offset: 0x13c
	// Line 334, Address: 0x1f02294, Func Offset: 0x144
	// Line 337, Address: 0x1f022b4, Func Offset: 0x164
	// Line 338, Address: 0x1f022c4, Func Offset: 0x174
	// Line 342, Address: 0x1f022d8, Func Offset: 0x188
	// Line 343, Address: 0x1f022e0, Func Offset: 0x190
	// Line 344, Address: 0x1f022e8, Func Offset: 0x198
	// Line 345, Address: 0x1f022f0, Func Offset: 0x1a0
	// Line 346, Address: 0x1f02314, Func Offset: 0x1c4
	// Line 349, Address: 0x1f0231c, Func Offset: 0x1cc
	// Line 350, Address: 0x1f02324, Func Offset: 0x1d4
	// Line 351, Address: 0x1f0232c, Func Offset: 0x1dc
	// Line 352, Address: 0x1f02334, Func Offset: 0x1e4
	// Line 353, Address: 0x1f0236c, Func Offset: 0x21c
	// Line 354, Address: 0x1f02380, Func Offset: 0x230
	// Line 357, Address: 0x1f02388, Func Offset: 0x238
	// Line 358, Address: 0x1f02390, Func Offset: 0x240
	// Line 359, Address: 0x1f02398, Func Offset: 0x248
	// Line 360, Address: 0x1f023a0, Func Offset: 0x250
	// Line 361, Address: 0x1f023a8, Func Offset: 0x258
	// Line 362, Address: 0x1f023b8, Func Offset: 0x268
	// Line 363, Address: 0x1f023cc, Func Offset: 0x27c
	// Line 364, Address: 0x1f023d4, Func Offset: 0x284
	// Line 366, Address: 0x1f023e8, Func Offset: 0x298
	// Line 367, Address: 0x1f023fc, Func Offset: 0x2ac
	// Line 368, Address: 0x1f0240c, Func Offset: 0x2bc
	// Line 371, Address: 0x1f02414, Func Offset: 0x2c4
	// Line 372, Address: 0x1f02424, Func Offset: 0x2d4
	// Line 373, Address: 0x1f02438, Func Offset: 0x2e8
	// Line 377, Address: 0x1f02448, Func Offset: 0x2f8
	// Line 378, Address: 0x1f0245c, Func Offset: 0x30c
	// Line 380, Address: 0x1f02468, Func Offset: 0x318
	// Line 381, Address: 0x1f0246c, Func Offset: 0x31c
	// Func End, Address: 0x1f0247c, Func Offset: 0x32c
	// Line 132, Address: 0x1f02150, Func Offset: 0
	// Line 133, Address: 0x1f02158, Func Offset: 0x8
	// Line 135, Address: 0x1f0216c, Func Offset: 0x1c
	// Func End, Address: 0x1f0217c, Func Offset: 0x2c
	// Line 236, Address: 0x1f02150, Func Offset: 0
	// Line 237, Address: 0x1f02158, Func Offset: 0x8
	// Line 239, Address: 0x1f02168, Func Offset: 0x18
	// Func End, Address: 0x1f02178, Func Offset: 0x28
}

// 
// Start address: 0x1f02180
int EvProgGetApartWestMap()
{
	// Line 141, Address: 0x1f02180, Func Offset: 0
	// Line 142, Address: 0x1f02188, Func Offset: 0x8
	// Line 144, Address: 0x1f0219c, Func Offset: 0x1c
	// Func End, Address: 0x1f021ac, Func Offset: 0x2c
	// Line 245, Address: 0x1f02180, Func Offset: 0
	// Line 246, Address: 0x1f02188, Func Offset: 0x8
	// Line 248, Address: 0x1f0219c, Func Offset: 0x1c
	// Func End, Address: 0x1f021ac, Func Offset: 0x2c
}

// 
// Start address: 0x1f021b0
int EvProgGetCannedJuice()
{
	// Line 198, Address: 0x1f021b0, Func Offset: 0
	// Line 201, Address: 0x1f021bc, Func Offset: 0xc
	// Line 202, Address: 0x1f021d0, Func Offset: 0x20
	// Line 203, Address: 0x1f021f8, Func Offset: 0x48
	// Line 204, Address: 0x1f021fc, Func Offset: 0x4c
	// Func End, Address: 0x1f02210, Func Offset: 0x60
	// Line 149, Address: 0x1f021b0, Func Offset: 0
	// Line 150, Address: 0x1f021b8, Func Offset: 0x8
	// Line 152, Address: 0x1f021c8, Func Offset: 0x18
	// Func End, Address: 0x1f021d8, Func Offset: 0x28
	// Line 263, Address: 0x1f021b0, Func Offset: 0
	// Line 271, Address: 0x1f021b8, Func Offset: 0x8
	// Line 273, Address: 0x1f02284, Func Offset: 0xd4
	// Line 274, Address: 0x1f0229c, Func Offset: 0xec
	// Line 275, Address: 0x1f022b0, Func Offset: 0x100
	// Line 276, Address: 0x1f022bc, Func Offset: 0x10c
	// Line 277, Address: 0x1f022d0, Func Offset: 0x120
	// Line 278, Address: 0x1f022e0, Func Offset: 0x130
	// Line 279, Address: 0x1f022fc, Func Offset: 0x14c
	// Line 280, Address: 0x1f0230c, Func Offset: 0x15c
	// Line 281, Address: 0x1f02328, Func Offset: 0x178
	// Line 282, Address: 0x1f02338, Func Offset: 0x188
	// Line 283, Address: 0x1f02354, Func Offset: 0x1a4
	// Line 284, Address: 0x1f02368, Func Offset: 0x1b8
	// Line 285, Address: 0x1f02380, Func Offset: 0x1d0
	// Line 286, Address: 0x1f02390, Func Offset: 0x1e0
	// Line 287, Address: 0x1f023ac, Func Offset: 0x1fc
	// Line 288, Address: 0x1f023bc, Func Offset: 0x20c
	// Line 289, Address: 0x1f023d8, Func Offset: 0x228
	// Line 290, Address: 0x1f023e8, Func Offset: 0x238
	// Line 291, Address: 0x1f02404, Func Offset: 0x254
	// Line 292, Address: 0x1f02418, Func Offset: 0x268
	// Line 293, Address: 0x1f02430, Func Offset: 0x280
	// Line 294, Address: 0x1f02440, Func Offset: 0x290
	// Line 295, Address: 0x1f0245c, Func Offset: 0x2ac
	// Line 296, Address: 0x1f0246c, Func Offset: 0x2bc
	// Line 297, Address: 0x1f02488, Func Offset: 0x2d8
	// Line 298, Address: 0x1f02498, Func Offset: 0x2e8
	// Line 299, Address: 0x1f024b4, Func Offset: 0x304
	// Line 300, Address: 0x1f024c8, Func Offset: 0x318
	// Line 301, Address: 0x1f024d0, Func Offset: 0x320
	// Line 304, Address: 0x1f02500, Func Offset: 0x350
	// Line 305, Address: 0x1f02518, Func Offset: 0x368
	// Line 308, Address: 0x1f02548, Func Offset: 0x398
	// Line 309, Address: 0x1f02560, Func Offset: 0x3b0
	// Line 312, Address: 0x1f02590, Func Offset: 0x3e0
	// Line 314, Address: 0x1f025a4, Func Offset: 0x3f4
	// Line 317, Address: 0x1f025ac, Func Offset: 0x3fc
	// Line 318, Address: 0x1f025d4, Func Offset: 0x424
	// Line 321, Address: 0x1f025dc, Func Offset: 0x42c
	// Line 322, Address: 0x1f02600, Func Offset: 0x450
	// Line 325, Address: 0x1f02608, Func Offset: 0x458
	// Line 326, Address: 0x1f02630, Func Offset: 0x480
	// Line 329, Address: 0x1f02638, Func Offset: 0x488
	// Line 330, Address: 0x1f0264c, Func Offset: 0x49c
	// Line 331, Address: 0x1f0265c, Func Offset: 0x4ac
	// Line 332, Address: 0x1f02674, Func Offset: 0x4c4
	// Line 333, Address: 0x1f02684, Func Offset: 0x4d4
	// Line 335, Address: 0x1f0269c, Func Offset: 0x4ec
	// Line 336, Address: 0x1f026b4, Func Offset: 0x504
	// Line 337, Address: 0x1f026c8, Func Offset: 0x518
	// Line 339, Address: 0x1f026e4, Func Offset: 0x534
	// Line 340, Address: 0x1f026fc, Func Offset: 0x54c
	// Line 341, Address: 0x1f02710, Func Offset: 0x560
	// Line 343, Address: 0x1f0272c, Func Offset: 0x57c
	// Line 344, Address: 0x1f02740, Func Offset: 0x590
	// Line 345, Address: 0x1f0274c, Func Offset: 0x59c
	// Line 346, Address: 0x1f02760, Func Offset: 0x5b0
	// Line 347, Address: 0x1f0277c, Func Offset: 0x5cc
	// Line 350, Address: 0x1f02784, Func Offset: 0x5d4
	// Line 351, Address: 0x1f02798, Func Offset: 0x5e8
	// Line 352, Address: 0x1f027a8, Func Offset: 0x5f8
	// Line 353, Address: 0x1f027c0, Func Offset: 0x610
	// Line 354, Address: 0x1f027d0, Func Offset: 0x620
	// Line 356, Address: 0x1f027e8, Func Offset: 0x638
	// Line 357, Address: 0x1f02800, Func Offset: 0x650
	// Line 358, Address: 0x1f02814, Func Offset: 0x664
	// Line 360, Address: 0x1f02830, Func Offset: 0x680
	// Line 361, Address: 0x1f02848, Func Offset: 0x698
	// Line 362, Address: 0x1f0285c, Func Offset: 0x6ac
	// Line 364, Address: 0x1f02878, Func Offset: 0x6c8
	// Line 365, Address: 0x1f0288c, Func Offset: 0x6dc
	// Line 366, Address: 0x1f02898, Func Offset: 0x6e8
	// Line 367, Address: 0x1f028ac, Func Offset: 0x6fc
	// Line 368, Address: 0x1f028c8, Func Offset: 0x718
	// Line 371, Address: 0x1f028d0, Func Offset: 0x720
	// Line 372, Address: 0x1f028e4, Func Offset: 0x734
	// Line 373, Address: 0x1f028f4, Func Offset: 0x744
	// Line 374, Address: 0x1f0290c, Func Offset: 0x75c
	// Line 375, Address: 0x1f02920, Func Offset: 0x770
	// Line 377, Address: 0x1f02938, Func Offset: 0x788
	// Line 378, Address: 0x1f02950, Func Offset: 0x7a0
	// Line 379, Address: 0x1f02964, Func Offset: 0x7b4
	// Line 381, Address: 0x1f02980, Func Offset: 0x7d0
	// Line 382, Address: 0x1f02998, Func Offset: 0x7e8
	// Line 383, Address: 0x1f029ac, Func Offset: 0x7fc
	// Line 385, Address: 0x1f029c8, Func Offset: 0x818
	// Line 386, Address: 0x1f029dc, Func Offset: 0x82c
	// Line 387, Address: 0x1f029e8, Func Offset: 0x838
	// Line 388, Address: 0x1f029fc, Func Offset: 0x84c
	// Line 389, Address: 0x1f02a18, Func Offset: 0x868
	// Line 392, Address: 0x1f02a20, Func Offset: 0x870
	// Line 394, Address: 0x1f02a48, Func Offset: 0x898
	// Line 395, Address: 0x1f02a60, Func Offset: 0x8b0
	// Line 396, Address: 0x1f02a70, Func Offset: 0x8c0
	// Line 397, Address: 0x1f02a84, Func Offset: 0x8d4
	// Line 398, Address: 0x1f02a98, Func Offset: 0x8e8
	// Line 399, Address: 0x1f02abc, Func Offset: 0x90c
	// Line 401, Address: 0x1f02adc, Func Offset: 0x92c
	// Line 402, Address: 0x1f02af4, Func Offset: 0x944
	// Line 403, Address: 0x1f02b04, Func Offset: 0x954
	// Line 404, Address: 0x1f02b1c, Func Offset: 0x96c
	// Line 405, Address: 0x1f02b34, Func Offset: 0x984
	// Line 406, Address: 0x1f02b58, Func Offset: 0x9a8
	// Line 408, Address: 0x1f02b78, Func Offset: 0x9c8
	// Line 409, Address: 0x1f02b90, Func Offset: 0x9e0
	// Line 410, Address: 0x1f02ba0, Func Offset: 0x9f0
	// Line 411, Address: 0x1f02bb8, Func Offset: 0xa08
	// Line 412, Address: 0x1f02bd0, Func Offset: 0xa20
	// Line 413, Address: 0x1f02bf4, Func Offset: 0xa44
	// Line 415, Address: 0x1f02c14, Func Offset: 0xa64
	// Line 416, Address: 0x1f02c28, Func Offset: 0xa78
	// Line 419, Address: 0x1f02c30, Func Offset: 0xa80
	// Line 421, Address: 0x1f02c58, Func Offset: 0xaa8
	// Line 422, Address: 0x1f02c70, Func Offset: 0xac0
	// Line 423, Address: 0x1f02c80, Func Offset: 0xad0
	// Line 424, Address: 0x1f02c94, Func Offset: 0xae4
	// Line 425, Address: 0x1f02ca8, Func Offset: 0xaf8
	// Line 426, Address: 0x1f02ccc, Func Offset: 0xb1c
	// Line 428, Address: 0x1f02cec, Func Offset: 0xb3c
	// Line 429, Address: 0x1f02d04, Func Offset: 0xb54
	// Line 430, Address: 0x1f02d14, Func Offset: 0xb64
	// Line 431, Address: 0x1f02d2c, Func Offset: 0xb7c
	// Line 432, Address: 0x1f02d44, Func Offset: 0xb94
	// Line 433, Address: 0x1f02d68, Func Offset: 0xbb8
	// Line 435, Address: 0x1f02d88, Func Offset: 0xbd8
	// Line 436, Address: 0x1f02da0, Func Offset: 0xbf0
	// Line 437, Address: 0x1f02db0, Func Offset: 0xc00
	// Line 438, Address: 0x1f02dc8, Func Offset: 0xc18
	// Line 439, Address: 0x1f02de0, Func Offset: 0xc30
	// Line 440, Address: 0x1f02e04, Func Offset: 0xc54
	// Line 442, Address: 0x1f02e24, Func Offset: 0xc74
	// Line 443, Address: 0x1f02e38, Func Offset: 0xc88
	// Line 446, Address: 0x1f02e40, Func Offset: 0xc90
	// Line 448, Address: 0x1f02e68, Func Offset: 0xcb8
	// Line 449, Address: 0x1f02e80, Func Offset: 0xcd0
	// Line 450, Address: 0x1f02e90, Func Offset: 0xce0
	// Line 451, Address: 0x1f02ea4, Func Offset: 0xcf4
	// Line 452, Address: 0x1f02eb8, Func Offset: 0xd08
	// Line 453, Address: 0x1f02edc, Func Offset: 0xd2c
	// Line 455, Address: 0x1f02efc, Func Offset: 0xd4c
	// Line 456, Address: 0x1f02f14, Func Offset: 0xd64
	// Line 457, Address: 0x1f02f24, Func Offset: 0xd74
	// Line 458, Address: 0x1f02f3c, Func Offset: 0xd8c
	// Line 459, Address: 0x1f02f54, Func Offset: 0xda4
	// Line 460, Address: 0x1f02f78, Func Offset: 0xdc8
	// Line 462, Address: 0x1f02f98, Func Offset: 0xde8
	// Line 463, Address: 0x1f02fb0, Func Offset: 0xe00
	// Line 464, Address: 0x1f02fc0, Func Offset: 0xe10
	// Line 465, Address: 0x1f02fd8, Func Offset: 0xe28
	// Line 466, Address: 0x1f02ff0, Func Offset: 0xe40
	// Line 467, Address: 0x1f03014, Func Offset: 0xe64
	// Line 469, Address: 0x1f03034, Func Offset: 0xe84
	// Line 470, Address: 0x1f03048, Func Offset: 0xe98
	// Line 473, Address: 0x1f03050, Func Offset: 0xea0
	// Line 476, Address: 0x1f03088, Func Offset: 0xed8
	// Line 477, Address: 0x1f030a0, Func Offset: 0xef0
	// Line 478, Address: 0x1f030c0, Func Offset: 0xf10
	// Line 480, Address: 0x1f030d4, Func Offset: 0xf24
	// Line 481, Address: 0x1f030d8, Func Offset: 0xf28
	// Line 482, Address: 0x1f030ec, Func Offset: 0xf3c
	// Line 483, Address: 0x1f03118, Func Offset: 0xf68
	// Line 484, Address: 0x1f0312c, Func Offset: 0xf7c
	// Line 487, Address: 0x1f03134, Func Offset: 0xf84
	// Line 488, Address: 0x1f0314c, Func Offset: 0xf9c
	// Line 489, Address: 0x1f03154, Func Offset: 0xfa4
	// Line 490, Address: 0x1f031a4, Func Offset: 0xff4
	// Line 491, Address: 0x1f031f4, Func Offset: 0x1044
	// Line 494, Address: 0x1f0322c, Func Offset: 0x107c
	// Line 495, Address: 0x1f0323c, Func Offset: 0x108c
	// Line 496, Address: 0x1f03248, Func Offset: 0x1098
	// Line 497, Address: 0x1f03254, Func Offset: 0x10a4
	// Line 498, Address: 0x1f03268, Func Offset: 0x10b8
	// Line 499, Address: 0x1f03270, Func Offset: 0x10c0
	// Line 500, Address: 0x1f0327c, Func Offset: 0x10cc
	// Line 501, Address: 0x1f03288, Func Offset: 0x10d8
	// Line 503, Address: 0x1f03298, Func Offset: 0x10e8
	// Line 504, Address: 0x1f032ac, Func Offset: 0x10fc
	// Line 505, Address: 0x1f032b8, Func Offset: 0x1108
	// Line 506, Address: 0x1f032cc, Func Offset: 0x111c
	// Line 510, Address: 0x1f032d8, Func Offset: 0x1128
	// Line 513, Address: 0x1f03310, Func Offset: 0x1160
	// Line 514, Address: 0x1f03324, Func Offset: 0x1174
	// Line 515, Address: 0x1f0332c, Func Offset: 0x117c
	// Line 517, Address: 0x1f03340, Func Offset: 0x1190
	// Line 518, Address: 0x1f0335c, Func Offset: 0x11ac
	// Line 519, Address: 0x1f03378, Func Offset: 0x11c8
	// Line 520, Address: 0x1f03384, Func Offset: 0x11d4
	// Line 521, Address: 0x1f033ac, Func Offset: 0x11fc
	// Line 522, Address: 0x1f033c4, Func Offset: 0x1214
	// Line 523, Address: 0x1f033f8, Func Offset: 0x1248
	// Line 524, Address: 0x1f03410, Func Offset: 0x1260
	// Line 525, Address: 0x1f03424, Func Offset: 0x1274
	// Line 526, Address: 0x1f03438, Func Offset: 0x1288
	// Line 527, Address: 0x1f03444, Func Offset: 0x1294
	// Line 528, Address: 0x1f03450, Func Offset: 0x12a0
	// Line 529, Address: 0x1f0345c, Func Offset: 0x12ac
	// Line 532, Address: 0x1f03464, Func Offset: 0x12b4
	// Line 533, Address: 0x1f03480, Func Offset: 0x12d0
	// Line 534, Address: 0x1f0348c, Func Offset: 0x12dc
	// Line 535, Address: 0x1f034b4, Func Offset: 0x1304
	// Line 536, Address: 0x1f034e4, Func Offset: 0x1334
	// Line 537, Address: 0x1f034ec, Func Offset: 0x133c
	// Line 539, Address: 0x1f03500, Func Offset: 0x1350
	// Line 542, Address: 0x1f03508, Func Offset: 0x1358
	// Line 543, Address: 0x1f03510, Func Offset: 0x1360
	// Line 544, Address: 0x1f03524, Func Offset: 0x1374
	// Line 545, Address: 0x1f0353c, Func Offset: 0x138c
	// Line 546, Address: 0x1f03554, Func Offset: 0x13a4
	// Line 547, Address: 0x1f0356c, Func Offset: 0x13bc
	// Line 549, Address: 0x1f03578, Func Offset: 0x13c8
	// Line 550, Address: 0x1f0357c, Func Offset: 0x13cc
	// Func End, Address: 0x1f0358c, Func Offset: 0x13dc
}

// 
// Start address: 0x1f021e0
int EvProgApartBoss()
{
	int ret;
	float vec[4][4];
	<unknown fundamental type (0xa510)>* scu_play_anim_adr;
	<unknown fundamental type (0xa510)>* red_play_anim_adr;
	DramaDemo_PlayInfo boss;
	CharaData_DemoList chara_data[4];
	// Line 207, Address: 0x1f021e0, Func Offset: 0
	// Line 215, Address: 0x1f021f4, Func Offset: 0x14
	// Line 216, Address: 0x1f02208, Func Offset: 0x28
	// Line 218, Address: 0x1f02224, Func Offset: 0x44
	// Line 220, Address: 0x1f02254, Func Offset: 0x74
	// Line 222, Address: 0x1f0227c, Func Offset: 0x9c
	// Line 233, Address: 0x1f02294, Func Offset: 0xb4
	// Line 239, Address: 0x1f022b0, Func Offset: 0xd0
	// Line 244, Address: 0x1f022cc, Func Offset: 0xec
	// Line 248, Address: 0x1f022e4, Func Offset: 0x104
	// Line 252, Address: 0x1f022fc, Func Offset: 0x11c
	// Line 255, Address: 0x1f0231c, Func Offset: 0x13c
	// Line 256, Address: 0x1f02344, Func Offset: 0x164
	// Line 258, Address: 0x1f0235c, Func Offset: 0x17c
	// Line 261, Address: 0x1f02368, Func Offset: 0x188
	// Line 263, Address: 0x1f02388, Func Offset: 0x1a8
	// Line 265, Address: 0x1f023ac, Func Offset: 0x1cc
	// Line 267, Address: 0x1f023cc, Func Offset: 0x1ec
	// Line 269, Address: 0x1f023e8, Func Offset: 0x208
	// Line 270, Address: 0x1f023f0, Func Offset: 0x210
	// Line 272, Address: 0x1f023fc, Func Offset: 0x21c
	// Line 274, Address: 0x1f0240c, Func Offset: 0x22c
	// Line 276, Address: 0x1f02414, Func Offset: 0x234
	// Func End, Address: 0x1f0242c, Func Offset: 0x24c
	// Line 157, Address: 0x1f021e0, Func Offset: 0
	// Line 187, Address: 0x1f021ec, Func Offset: 0xc
	// Line 189, Address: 0x1f0221c, Func Offset: 0x3c
	// Line 190, Address: 0x1f02234, Func Offset: 0x54
	// Line 191, Address: 0x1f02248, Func Offset: 0x68
	// Line 193, Address: 0x1f02278, Func Offset: 0x98
	// Line 195, Address: 0x1f022ac, Func Offset: 0xcc
	// Line 196, Address: 0x1f022bc, Func Offset: 0xdc
	// Line 197, Address: 0x1f022d4, Func Offset: 0xf4
	// Line 198, Address: 0x1f022e4, Func Offset: 0x104
	// Line 200, Address: 0x1f0230c, Func Offset: 0x12c
	// Line 202, Address: 0x1f02334, Func Offset: 0x154
	// Line 203, Address: 0x1f02348, Func Offset: 0x168
	// Line 204, Address: 0x1f02354, Func Offset: 0x174
	// Line 205, Address: 0x1f02368, Func Offset: 0x188
	// Line 208, Address: 0x1f02370, Func Offset: 0x190
	// Line 209, Address: 0x1f02384, Func Offset: 0x1a4
	// Line 211, Address: 0x1f023a4, Func Offset: 0x1c4
	// Line 212, Address: 0x1f023c0, Func Offset: 0x1e0
	// Line 215, Address: 0x1f023c8, Func Offset: 0x1e8
	// Line 216, Address: 0x1f023d4, Func Offset: 0x1f4
	// Line 217, Address: 0x1f023e8, Func Offset: 0x208
	// Line 218, Address: 0x1f023f0, Func Offset: 0x210
	// Line 219, Address: 0x1f023fc, Func Offset: 0x21c
	// Line 220, Address: 0x1f02408, Func Offset: 0x228
	// Line 222, Address: 0x1f02428, Func Offset: 0x248
	// Line 224, Address: 0x1f02450, Func Offset: 0x270
	// Line 226, Address: 0x1f02470, Func Offset: 0x290
	// Line 229, Address: 0x1f02498, Func Offset: 0x2b8
	// Line 230, Address: 0x1f024cc, Func Offset: 0x2ec
	// Line 232, Address: 0x1f024e0, Func Offset: 0x300
	// Line 234, Address: 0x1f024ec, Func Offset: 0x30c
	// Line 235, Address: 0x1f024f0, Func Offset: 0x310
	// Func End, Address: 0x1f02504, Func Offset: 0x324
	// Line 186, Address: 0x1f021e0, Func Offset: 0
	// Line 195, Address: 0x1f021e8, Func Offset: 0x8
	// Line 197, Address: 0x1f02218, Func Offset: 0x38
	// Line 198, Address: 0x1f02228, Func Offset: 0x48
	// Line 199, Address: 0x1f0223c, Func Offset: 0x5c
	// Line 201, Address: 0x1f02264, Func Offset: 0x84
	// Line 202, Address: 0x1f02270, Func Offset: 0x90
	// Line 203, Address: 0x1f02284, Func Offset: 0xa4
	// Line 207, Address: 0x1f02298, Func Offset: 0xb8
	// Line 208, Address: 0x1f022c4, Func Offset: 0xe4
	// Line 211, Address: 0x1f022cc, Func Offset: 0xec
	// Line 212, Address: 0x1f022e0, Func Offset: 0x100
	// Line 213, Address: 0x1f022e8, Func Offset: 0x108
	// Line 214, Address: 0x1f022f4, Func Offset: 0x114
	// Line 215, Address: 0x1f02300, Func Offset: 0x120
	// Line 217, Address: 0x1f02328, Func Offset: 0x148
	// Line 220, Address: 0x1f02350, Func Offset: 0x170
	// Line 222, Address: 0x1f02368, Func Offset: 0x188
	// Line 224, Address: 0x1f02374, Func Offset: 0x194
	// Line 225, Address: 0x1f02378, Func Offset: 0x198
	// Func End, Address: 0x1f02388, Func Offset: 0x1a8
	// Line 194, Address: 0x1f021e0, Func Offset: 0
	// Line 203, Address: 0x1f021e8, Func Offset: 0x8
	// Line 205, Address: 0x1f02218, Func Offset: 0x38
	// Line 206, Address: 0x1f02228, Func Offset: 0x48
	// Line 207, Address: 0x1f0223c, Func Offset: 0x5c
	// Line 209, Address: 0x1f02264, Func Offset: 0x84
	// Line 210, Address: 0x1f02270, Func Offset: 0x90
	// Line 211, Address: 0x1f02284, Func Offset: 0xa4
	// Line 215, Address: 0x1f02298, Func Offset: 0xb8
	// Line 216, Address: 0x1f022c4, Func Offset: 0xe4
	// Line 219, Address: 0x1f022cc, Func Offset: 0xec
	// Line 220, Address: 0x1f022e0, Func Offset: 0x100
	// Line 221, Address: 0x1f022e8, Func Offset: 0x108
	// Line 222, Address: 0x1f022f4, Func Offset: 0x114
	// Line 223, Address: 0x1f02300, Func Offset: 0x120
	// Line 225, Address: 0x1f02328, Func Offset: 0x148
	// Line 228, Address: 0x1f02350, Func Offset: 0x170
	// Line 230, Address: 0x1f02368, Func Offset: 0x188
	// Line 232, Address: 0x1f02374, Func Offset: 0x194
	// Line 233, Address: 0x1f02378, Func Offset: 0x198
	// Func End, Address: 0x1f02388, Func Offset: 0x1a8
	// Line 182, Address: 0x1f021e0, Func Offset: 0
	// Line 191, Address: 0x1f021e8, Func Offset: 0x8
	// Line 193, Address: 0x1f02218, Func Offset: 0x38
	// Line 194, Address: 0x1f02228, Func Offset: 0x48
	// Line 195, Address: 0x1f0223c, Func Offset: 0x5c
	// Line 197, Address: 0x1f02264, Func Offset: 0x84
	// Line 198, Address: 0x1f02270, Func Offset: 0x90
	// Line 199, Address: 0x1f02284, Func Offset: 0xa4
	// Line 203, Address: 0x1f02298, Func Offset: 0xb8
	// Line 204, Address: 0x1f022c4, Func Offset: 0xe4
	// Line 207, Address: 0x1f022cc, Func Offset: 0xec
	// Line 208, Address: 0x1f022e0, Func Offset: 0x100
	// Line 209, Address: 0x1f022e8, Func Offset: 0x108
	// Line 210, Address: 0x1f022f4, Func Offset: 0x114
	// Line 211, Address: 0x1f02300, Func Offset: 0x120
	// Line 213, Address: 0x1f02328, Func Offset: 0x148
	// Line 216, Address: 0x1f02350, Func Offset: 0x170
	// Line 218, Address: 0x1f02368, Func Offset: 0x188
	// Line 220, Address: 0x1f02374, Func Offset: 0x194
	// Line 221, Address: 0x1f02378, Func Offset: 0x198
	// Func End, Address: 0x1f02388, Func Offset: 0x1a8
}

// 
// Start address: 0x1f02510
int EvProgApartBossSiren()
{
	// Line 240, Address: 0x1f02510, Func Offset: 0
	// Line 241, Address: 0x1f02518, Func Offset: 0x8
	// Line 242, Address: 0x1f02530, Func Offset: 0x20
	// Line 243, Address: 0x1f02534, Func Offset: 0x24
	// Func End, Address: 0x1f02544, Func Offset: 0x34
	// Line 335, Address: 0x1f02510, Func Offset: 0
	// Line 336, Address: 0x1f02534, Func Offset: 0x24
	// Line 337, Address: 0x1f02540, Func Offset: 0x30
	// Line 338, Address: 0x1f02544, Func Offset: 0x34
	// Func End, Address: 0x1f0254c, Func Offset: 0x3c
	// Line 331, Address: 0x1f02510, Func Offset: 0
	// Line 349, Address: 0x1f02518, Func Offset: 0x8
	// Line 350, Address: 0x1f02530, Func Offset: 0x20
	// Line 351, Address: 0x1f02544, Func Offset: 0x34
	// Line 353, Address: 0x1f02560, Func Offset: 0x50
	// Line 355, Address: 0x1f0257c, Func Offset: 0x6c
	// Line 357, Address: 0x1f02598, Func Offset: 0x88
	// Line 358, Address: 0x1f025a8, Func Offset: 0x98
	// Line 359, Address: 0x1f025cc, Func Offset: 0xbc
	// Line 360, Address: 0x1f025d8, Func Offset: 0xc8
	// Line 361, Address: 0x1f025e8, Func Offset: 0xd8
	// Line 363, Address: 0x1f0260c, Func Offset: 0xfc
	// Func End, Address: 0x1f0261c, Func Offset: 0x10c
}

// 
// Start address: 0x1f02550
int EvProgApartBossEnd()
{
	float clr[4];
	float light[4];
	Event_CamSetData cam_data;
	// Line 249, Address: 0x1f02550, Func Offset: 0
	// Line 258, Address: 0x1f02558, Func Offset: 0x8
	// Line 260, Address: 0x1f02588, Func Offset: 0x38
	// Line 261, Address: 0x1f0259c, Func Offset: 0x4c
	// Line 262, Address: 0x1f025a8, Func Offset: 0x58
	// Line 263, Address: 0x1f025bc, Func Offset: 0x6c
	// Line 266, Address: 0x1f025e8, Func Offset: 0x98
	// Line 269, Address: 0x1f02610, Func Offset: 0xc0
	// Line 270, Address: 0x1f02618, Func Offset: 0xc8
	// Line 271, Address: 0x1f02630, Func Offset: 0xe0
	// Line 275, Address: 0x1f02644, Func Offset: 0xf4
	// Line 277, Address: 0x1f0264c, Func Offset: 0xfc
	// Line 279, Address: 0x1f02678, Func Offset: 0x128
	// Line 280, Address: 0x1f026a0, Func Offset: 0x150
	// Line 281, Address: 0x1f026bc, Func Offset: 0x16c
	// Line 282, Address: 0x1f026d8, Func Offset: 0x188
	// Line 283, Address: 0x1f02708, Func Offset: 0x1b8
	// Line 286, Address: 0x1f02710, Func Offset: 0x1c0
	// Line 287, Address: 0x1f02724, Func Offset: 0x1d4
	// Line 288, Address: 0x1f02730, Func Offset: 0x1e0
	// Line 289, Address: 0x1f0273c, Func Offset: 0x1ec
	// Line 290, Address: 0x1f02754, Func Offset: 0x204
	// Line 291, Address: 0x1f02764, Func Offset: 0x214
	// Line 293, Address: 0x1f02770, Func Offset: 0x220
	// Line 294, Address: 0x1f02774, Func Offset: 0x224
	// Func End, Address: 0x1f02784, Func Offset: 0x234
	// Line 343, Address: 0x1f02550, Func Offset: 0
	// Line 361, Address: 0x1f02558, Func Offset: 0x8
	// Line 363, Address: 0x1f02560, Func Offset: 0x10
	// Line 364, Address: 0x1f02584, Func Offset: 0x34
	// Line 365, Address: 0x1f02598, Func Offset: 0x48
	// Line 367, Address: 0x1f025b4, Func Offset: 0x64
	// Line 369, Address: 0x1f025d0, Func Offset: 0x80
	// Line 370, Address: 0x1f025e0, Func Offset: 0x90
	// Line 371, Address: 0x1f025f0, Func Offset: 0xa0
	// Line 372, Address: 0x1f025f8, Func Offset: 0xa8
	// Line 373, Address: 0x1f02614, Func Offset: 0xc4
	// Line 375, Address: 0x1f02638, Func Offset: 0xe8
	// Line 376, Address: 0x1f02648, Func Offset: 0xf8
	// Line 377, Address: 0x1f02658, Func Offset: 0x108
	// Line 378, Address: 0x1f02680, Func Offset: 0x130
	// Line 380, Address: 0x1f02690, Func Offset: 0x140
	// Func End, Address: 0x1f026a0, Func Offset: 0x150
	// Line 219, Address: 0x1f02550, Func Offset: 0
	// Line 231, Address: 0x1f0255c, Func Offset: 0xc
	// Line 233, Address: 0x1f02584, Func Offset: 0x34
	// Line 234, Address: 0x1f02590, Func Offset: 0x40
	// Line 235, Address: 0x1f025b4, Func Offset: 0x64
	// Line 236, Address: 0x1f025d4, Func Offset: 0x84
	// Line 237, Address: 0x1f025f8, Func Offset: 0xa8
	// Line 238, Address: 0x1f02610, Func Offset: 0xc0
	// Line 239, Address: 0x1f02628, Func Offset: 0xd8
	// Line 240, Address: 0x1f02640, Func Offset: 0xf0
	// Line 241, Address: 0x1f02658, Func Offset: 0x108
	// Line 242, Address: 0x1f02664, Func Offset: 0x114
	// Line 243, Address: 0x1f0267c, Func Offset: 0x12c
	// Line 245, Address: 0x1f02688, Func Offset: 0x138
	// Line 246, Address: 0x1f0268c, Func Offset: 0x13c
	// Func End, Address: 0x1f026a0, Func Offset: 0x150
}

// 
// Start address: 0x1f02790
void EvRoomInit()
{
	// Line 300, Address: 0x1f02790, Func Offset: 0
	// Line 301, Address: 0x1f027ac, Func Offset: 0x1c
	// Func End, Address: 0x1f027b4, Func Offset: 0x24
}

// 
// Start address: 0x1f027c0
void EvAllTimeFunc()
{
	int work;
	int disp_ctrl_list[3];
	float time;
	float vol;
	// Line 306, Address: 0x1f027c0, Func Offset: 0
	// Line 312, Address: 0x1f027c8, Func Offset: 0x8
	// Line 314, Address: 0x1f027cc, Func Offset: 0xc
	// Line 316, Address: 0x1f02800, Func Offset: 0x40
	// Line 318, Address: 0x1f02818, Func Offset: 0x58
	// Line 319, Address: 0x1f02828, Func Offset: 0x68
	// Line 321, Address: 0x1f02830, Func Offset: 0x70
	// Line 323, Address: 0x1f02848, Func Offset: 0x88
	// Line 324, Address: 0x1f02858, Func Offset: 0x98
	// Line 326, Address: 0x1f02860, Func Offset: 0xa0
	// Line 327, Address: 0x1f02878, Func Offset: 0xb8
	// Line 328, Address: 0x1f02888, Func Offset: 0xc8
	// Line 330, Address: 0x1f028b0, Func Offset: 0xf0
	// Line 331, Address: 0x1f028c0, Func Offset: 0x100
	// Line 333, Address: 0x1f028cc, Func Offset: 0x10c
	// Line 334, Address: 0x1f028dc, Func Offset: 0x11c
	// Line 338, Address: 0x1f028f4, Func Offset: 0x134
	// Line 340, Address: 0x1f02958, Func Offset: 0x198
	// Line 341, Address: 0x1f02968, Func Offset: 0x1a8
	// Line 343, Address: 0x1f02980, Func Offset: 0x1c0
	// Line 344, Address: 0x1f029a0, Func Offset: 0x1e0
	// Line 348, Address: 0x1f029fc, Func Offset: 0x23c
	// Line 349, Address: 0x1f02a08, Func Offset: 0x248
	// Func End, Address: 0x1f02a18, Func Offset: 0x258
	// Line 355, Address: 0x1f027c0, Func Offset: 0
	// Line 359, Address: 0x1f027c8, Func Offset: 0x8
	// Line 360, Address: 0x1f027d0, Func Offset: 0x10
	// Line 362, Address: 0x1f027d4, Func Offset: 0x14
	// Line 363, Address: 0x1f027e0, Func Offset: 0x20
	// Line 364, Address: 0x1f027ec, Func Offset: 0x2c
	// Line 365, Address: 0x1f02804, Func Offset: 0x44
	// Line 367, Address: 0x1f02818, Func Offset: 0x58
	// Line 369, Address: 0x1f0282c, Func Offset: 0x6c
	// Line 370, Address: 0x1f0283c, Func Offset: 0x7c
	// Line 371, Address: 0x1f02844, Func Offset: 0x84
	// Line 373, Address: 0x1f02858, Func Offset: 0x98
	// Line 375, Address: 0x1f0286c, Func Offset: 0xac
	// Line 377, Address: 0x1f0287c, Func Offset: 0xbc
	// Line 378, Address: 0x1f02884, Func Offset: 0xc4
	// Line 380, Address: 0x1f02898, Func Offset: 0xd8
	// Line 381, Address: 0x1f028b0, Func Offset: 0xf0
	// Line 384, Address: 0x1f028c4, Func Offset: 0x104
	// Line 385, Address: 0x1f028cc, Func Offset: 0x10c
	// Line 386, Address: 0x1f028dc, Func Offset: 0x11c
	// Line 390, Address: 0x1f028f0, Func Offset: 0x130
	// Line 391, Address: 0x1f028fc, Func Offset: 0x13c
	// Func End, Address: 0x1f0290c, Func Offset: 0x14c
}

