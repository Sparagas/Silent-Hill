typedef union fsFileIndex;
typedef struct shAttackInfo;
typedef struct PAD_2D;
typedef struct Enemy_List;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct _CL_VHIT_CHARA;
typedef struct SubCharacter;
typedef union Q_WORDDATA;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct PAD_INFO;
typedef union _anon0;
typedef struct shSkelton;
typedef struct _CL_VHIT_RESULT;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct _CL_HITPOLY_HEAD;
typedef union _anon1;
typedef struct _AnimeInfo;
typedef struct DramaDemo_MessageTime;
typedef struct _anon2;
typedef union fsFile;
typedef struct fsCdFile;
typedef struct sh2gfw_Env_ctl;
typedef struct DramaDemo_PlayInfo;
typedef struct _anon3;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct Event_List;
typedef struct _anon4;
typedef struct shPlayerWork;
typedef struct fsHdFile;
typedef struct Item_List;
typedef struct fsMgpFile;
typedef struct Model_List;
typedef struct _anon5;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct _anon6;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct Stage_Data;
typedef struct PAD_3D;
typedef struct _CL_VHIT_WALL;
typedef struct CharaData_DemoList;

typedef void(*type_0)();
typedef int(*type_7)();
typedef void(*type_17)(SubCharacter*);
typedef void(*type_21)(SubCharacter*);

typedef unsigned char type_1[38];
typedef _AnimeInfo type_2[34];
typedef unsigned int type_3[4];
typedef unsigned short type_4[8];
typedef float type_5[4];
typedef _AnimeInfo type_6[17];
typedef unsigned char type_8[16];
typedef unsigned char type_9[14];
typedef int type_10[4];
typedef PAD_INFO type_11[10];
typedef short type_12[8];
typedef char type_13[16];
typedef unsigned long type_14[2];
typedef float type_15[2];
typedef _AnimeInfo type_16[17];
typedef shAttackInfo type_18[66];
typedef char type_19[0];
typedef unsigned char type_20[69];
typedef unsigned char type_22[4];
typedef unsigned char type_23[4];
typedef unsigned char type_24[4];
typedef _AnimeInfo type_25[33];
typedef float type_26[4][2];
typedef CharaData_DemoList type_27[3];
typedef float type_28[4];
typedef float type_29[4][4];
typedef unsigned char type_30[2];
typedef Event_List type_31[4];
typedef Model_List type_32[2];
typedef unsigned char type_33[2];
typedef fsFileIndex type_34[1];
typedef _AnimeInfo type_35[24];
typedef unsigned char type_36[14];
typedef float type_37[4];
typedef unsigned short type_38[4];
typedef _AnimeInfo type_39[5];
typedef _AnimeInfo type_40[6];
typedef unsigned char type_41[97];
typedef float type_42[4][2];
typedef _AnimeInfo type_43[33];
typedef int type_44[4];
typedef float type_45[4];
typedef float type_46[4];
typedef float type_47[4][4];
typedef _AnimeInfo type_48[11];
typedef unsigned char type_49[2];
typedef _AnimeInfo type_50[30];
typedef unsigned char type_51[20];
typedef _AnimeInfo type_52[17];
typedef int(*type_53)()[3];

union fsFileIndex
{
	_anon6 index;
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
	_anon0 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
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

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA dirvec;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
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
	_anon3 src_t;
	_anon4 des_m;
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

struct _CL_VHIT_RESULT
{
	int kind;
	_anon1 hobj;
};

struct sh2gfw_POINTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
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

union _anon1
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
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

struct _anon2
{
	void(*SpecDraw)();
	void(*PreDraw)();
	void(*PostDraw)();
	void(*CharaDraw_Hook)();
};

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

struct _anon3
{
	float x;
	float y;
	float z;
	float w;
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

struct Event_List
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
};

struct _anon4
{
	float d[4][4];
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

struct Item_List
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
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

struct Model_List
{
	short kind;
	short id;
	short flag_off;
	short flag_on;
	float pos[4];
	float rot[4];
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

struct _anon6
{
	fsFile* fp;
	char* name;
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
	_anon2* gfw_func;
	int(*chara_data_clear)();
	void(*sound_call_after_load)();
	int reserve_11;
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
_AnimeInfo pjames_stage_anim[6];
unsigned char ev_pos[38];
Event_List ev_list[4];
float flame_min[4];
float flame_max[4];
sh2gfw_Env_ctl Env_ctl;
int(*ev_prog)()[3];
Model_List mdl_list[2];
_anon2 SpecialDrawFunctions;
Stage_Data stage_hotel_fire;
shPlayerWork sh2jms;
int ev_s_step;
int ev_p_step;
char MemShare_gp_data_buf[0];
fsFileIndex data_demo_fire_agl_fire_agl_dds[1];

int EvProgAngelaInFire();
int EvProgFireDamage();

// 
// Start address: 0x1f021d0
int EvProgAngelaInFire()
{
	float vec0[4];
	SubCharacter* scp;
	float agl_vec[4][2];
	DramaDemo_PlayInfo fire;
	CharaData_DemoList chara_data[3];
	// Line 82, Address: 0x1f021d0, Func Offset: 0
	// Line 131, Address: 0x1f021d8, Func Offset: 0x8
	// Line 133, Address: 0x1f02208, Func Offset: 0x38
	// Line 134, Address: 0x1f02220, Func Offset: 0x50
	// Line 135, Address: 0x1f0222c, Func Offset: 0x5c
	// Line 136, Address: 0x1f02240, Func Offset: 0x70
	// Line 137, Address: 0x1f02254, Func Offset: 0x84
	// Line 138, Address: 0x1f02268, Func Offset: 0x98
	// Line 141, Address: 0x1f02270, Func Offset: 0xa0
	// Line 142, Address: 0x1f0229c, Func Offset: 0xcc
	// Line 145, Address: 0x1f022a4, Func Offset: 0xd4
	// Line 146, Address: 0x1f022b0, Func Offset: 0xe0
	// Line 147, Address: 0x1f022c4, Func Offset: 0xf4
	// Line 148, Address: 0x1f022cc, Func Offset: 0xfc
	// Line 149, Address: 0x1f022d8, Func Offset: 0x108
	// Line 150, Address: 0x1f022e4, Func Offset: 0x114
	// Line 151, Address: 0x1f022ec, Func Offset: 0x11c
	// Line 152, Address: 0x1f02308, Func Offset: 0x138
	// Line 154, Address: 0x1f02328, Func Offset: 0x158
	// Line 155, Address: 0x1f02338, Func Offset: 0x168
	// Line 157, Address: 0x1f02344, Func Offset: 0x174
	// Line 158, Address: 0x1f02348, Func Offset: 0x178
	// Func End, Address: 0x1f02358, Func Offset: 0x188
	// Line 208, Address: 0x1f021d0, Func Offset: 0
	// Line 217, Address: 0x1f021d8, Func Offset: 0x8
	// Line 219, Address: 0x1f02208, Func Offset: 0x38
	// Line 220, Address: 0x1f02218, Func Offset: 0x48
	// Line 221, Address: 0x1f0222c, Func Offset: 0x5c
	// Line 223, Address: 0x1f02254, Func Offset: 0x84
	// Line 224, Address: 0x1f02260, Func Offset: 0x90
	// Line 225, Address: 0x1f02274, Func Offset: 0xa4
	// Line 229, Address: 0x1f02288, Func Offset: 0xb8
	// Line 230, Address: 0x1f022b4, Func Offset: 0xe4
	// Line 233, Address: 0x1f022bc, Func Offset: 0xec
	// Line 234, Address: 0x1f022d0, Func Offset: 0x100
	// Line 235, Address: 0x1f022d8, Func Offset: 0x108
	// Line 236, Address: 0x1f022e4, Func Offset: 0x114
	// Line 237, Address: 0x1f022f0, Func Offset: 0x120
	// Line 239, Address: 0x1f02318, Func Offset: 0x148
	// Line 246, Address: 0x1f02340, Func Offset: 0x170
	// Line 248, Address: 0x1f0234c, Func Offset: 0x17c
	// Line 249, Address: 0x1f02350, Func Offset: 0x180
	// Func End, Address: 0x1f02360, Func Offset: 0x190
}

// 
// Start address: 0x1f02360
int EvProgFireDamage()
{
	// Line 164, Address: 0x1f02360, Func Offset: 0
	// Line 165, Address: 0x1f02364, Func Offset: 0x4
	// Func End, Address: 0x1f0236c, Func Offset: 0xc
	// Line 255, Address: 0x1f02360, Func Offset: 0
	// Line 256, Address: 0x1f0236c, Func Offset: 0xc
	// Line 257, Address: 0x1f02370, Func Offset: 0x10
	// Func End, Address: 0x1f02378, Func Offset: 0x18
}

