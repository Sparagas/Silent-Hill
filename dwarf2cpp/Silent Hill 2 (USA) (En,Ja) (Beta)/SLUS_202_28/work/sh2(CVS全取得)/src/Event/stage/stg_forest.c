typedef struct SubCharacter;
typedef struct Enemy_List;
typedef struct shBattleArea;
typedef struct _anon0;
typedef struct shBattleInfo;
typedef struct Pad_KeyConfig;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct _anon1;
typedef struct _CL_VHIT_WALL;
typedef struct Stage_Data;
typedef struct _CL_HITPOLY_HEAD;
typedef struct Event_List;
typedef struct shAttackInfo;
typedef union fsFile;
typedef struct _CL_VHIT_CHARA;
typedef struct CharaData_DemoList;
typedef struct fsCdFile;
typedef struct Item_List;
typedef union fsFileIndex;
typedef struct Model_List;
typedef union _anon2;
typedef struct _CL_VHIT_RESULT;
typedef struct _anon3;
typedef union _anon4;
typedef struct PAD_3D;
typedef struct fsMgcFile;
typedef struct DramaDemo_MessageTime;
typedef struct _AnimeInfo;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct _CL_HITPOLY_PLANE;
typedef struct PAD_2D;
typedef struct fsMgfFile;
typedef struct Playing_Info;
typedef union Q_WORDDATA;
typedef struct DramaDemo_PlayInfo;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct shSkelton;
typedef struct PAD_INFO;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct _anon5;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct sh2gfw_Env_ctl;
typedef struct _anon6;
typedef struct _SH2_SYS;
typedef struct _anon7;
typedef struct shPlayerWork;
typedef struct shBattleFight;
typedef struct shBattleShot;

typedef void(*type_4)();
typedef int(*type_21)();
typedef void(*type_54)(SubCharacter*);
typedef void(*type_58)(SubCharacter*);

typedef fsFileIndex type_0[1];
typedef fsFileIndex type_1[1];
typedef fsFileIndex type_2[1];
typedef unsigned short type_3[4];
typedef _AnimeInfo type_5[5];
typedef unsigned char type_6[97];
typedef float type_7[4][2];
typedef fsFileIndex type_8[1];
typedef unsigned int type_9[255];
typedef _CL_HITPOLY_PLANE type_10[3];
typedef fsFileIndex type_11[1];
typedef unsigned int type_12[32];
typedef unsigned char type_13[4];
typedef _AnimeInfo type_14[33];
typedef char type_15[4];
typedef char type_16[4];
typedef char type_17[4];
typedef int type_18[6];
typedef fsFileIndex type_19[1];
typedef unsigned char type_20[354];
typedef char type_22[4];
typedef unsigned char type_23[2];
typedef char type_24[4];
typedef _AnimeInfo type_25[11];
typedef unsigned char type_26[20];
typedef _AnimeInfo type_27[30];
typedef _AnimeInfo type_28[17];
typedef float type_29[4][2];
typedef float type_30[4][4];
typedef CharaData_DemoList type_31[3];
typedef unsigned int type_32[4];
typedef unsigned short type_33[8];
typedef _AnimeInfo type_34[34];
typedef shAttackInfo type_35[66];
typedef float type_36[4];
typedef float type_37[4];
typedef float type_38[4][4];
typedef unsigned char type_39[16];
typedef unsigned char type_40[14];
typedef int type_41[4];
typedef _AnimeInfo type_42[17];
typedef short type_43[8];
typedef DramaDemo_MessageTime type_44[6];
typedef PAD_INFO type_45[10];
typedef char type_46[16];
typedef unsigned long type_47[2];
typedef float type_48[4];
typedef char type_49[0];
typedef CharaData_DemoList type_50[2];
typedef Event_List type_51[20];
typedef float type_52[2];
typedef float type_53[4][2];
typedef _CL_HITPOLY_PLANE type_55[6];
typedef _AnimeInfo type_56[17];
typedef unsigned char type_57[69];
typedef unsigned char type_59[4];
typedef unsigned char type_60[4];
typedef unsigned char type_61[4];
typedef float type_62[7];
typedef fsFileIndex type_63[1];
typedef unsigned int type_64[7];
typedef int type_65[5];
typedef _AnimeInfo type_66[33];
typedef unsigned int type_67[8];
typedef float type_68[4];
typedef unsigned char type_69[2];
typedef unsigned char type_70[2];
typedef float type_71[4];
typedef float type_72[4][4];
typedef int(*type_73)()[7];
typedef Model_List type_74[5];
typedef _AnimeInfo type_75[2];
typedef unsigned char type_76[14];
typedef _AnimeInfo type_77[24];
typedef fsFileIndex type_78[1];

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

struct shBattleArea
{
	float center;
	float radius;
};

struct _anon0
{
	void(*SpecDraw)();
	void(*PreDraw)();
	void(*PostDraw)();
	void(*CharaDraw_Hook)();
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

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
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

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
};

struct Event_List
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
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

struct CharaData_DemoList
{
	int kind;
	fsFileIndex* model;
	fsFileIndex* animation;
	fsFileIndex* shadow;
	fsFileIndex* cluster;
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
_AnimeInfo pjames_stage_anim[2];
unsigned char ev_pos[354];
Event_List ev_list[20];
_CL_HITPOLY_PLANE clActWallList_ca19[3];
_CL_HITPOLY_PLANE clActWallList_ca20[6];
int(*ev_prog)()[7];
_anon0 SpecialDrawFunctions;
Model_List mdl_list[5];
Stage_Data stage_forest;
char* dds_adr;
char* dds_adr_h;
char* dds_adr_i;
float agl_pos_0[4][2];
float agl_pos_1[4][2];
float forest_se_x;
float forest_se_y;
float forest_se_r;
int forest_call;
shPlayerWork sh2jms;
_SH2_SYS Sh2sys;
_anon1 game_flag;
int ev_s_step;
int ev_p_step;
Pad_KeyConfig key_config;
fsFileIndex data_pic_out_p_redpaper_tex[1];
fsFileIndex data_movie_hakaba_pss[1];
Playing_Info playing;
fsFileIndex data_movie_ending_pss[1];
fsFileIndex data_demo_mry_yarinaoshi_i_lll_jms_anm[1];
char MemShare_gp_data_buf[0];
fsFileIndex data_demo_mry_yarinaoshi_i_mry_yarinaoshi_i_dds[1];
fsFileIndex data_demo_haka_agl_haka_agl_i_dds[1];
fsFileIndex data_demo_haka_agl_haka_agl_h_dds[1];
fsFileIndex data_demo_haka_agl_haka_agl_dds[1];
float FogParameters[4];
float FarNear[4];
float MoveFog[4];
float Asahi_dir[4];
float Asahi_col[4];
sh2gfw_Env_ctl Env_ctl;

int EvProgFirstSaveWell();
int EvProgAngelaInGrave();
int EvProgGraveSureQuiet();
int EvProgGraveLookingFor();
int EvProgLastScene();
int EvProgGetChainsaw();
void EvStageInit();
void EvRoomInit();
void EvSoundCallAfterLoad();
void EvAllTimeFunc();
float LinearTrim(float Yen, float Yst, float Xen, float Xst, float Parm);
void Ca10_Hakaba_Angela_SetDrawEnv();

// 
// Start address: 0x1f01e80
int EvProgFirstSaveWell()
{
	// Line 81, Address: 0x1f01e80, Func Offset: 0
	// Line 105, Address: 0x1f01e8c, Func Offset: 0xc
	// Line 107, Address: 0x1f01ea0, Func Offset: 0x20
	// Line 109, Address: 0x1f01f00, Func Offset: 0x80
	// Line 110, Address: 0x1f01f18, Func Offset: 0x98
	// Line 111, Address: 0x1f01f2c, Func Offset: 0xac
	// Line 112, Address: 0x1f01f38, Func Offset: 0xb8
	// Line 113, Address: 0x1f01f4c, Func Offset: 0xcc
	// Line 114, Address: 0x1f01f5c, Func Offset: 0xdc
	// Line 118, Address: 0x1f01f70, Func Offset: 0xf0
	// Line 119, Address: 0x1f01f88, Func Offset: 0x108
	// Line 120, Address: 0x1f01fb0, Func Offset: 0x130
	// Line 123, Address: 0x1f01fb8, Func Offset: 0x138
	// Line 124, Address: 0x1f01fe4, Func Offset: 0x164
	// Line 125, Address: 0x1f01ff8, Func Offset: 0x178
	// Line 128, Address: 0x1f02000, Func Offset: 0x180
	// Line 129, Address: 0x1f02008, Func Offset: 0x188
	// Line 130, Address: 0x1f0201c, Func Offset: 0x19c
	// Line 134, Address: 0x1f02030, Func Offset: 0x1b0
	// Line 135, Address: 0x1f02044, Func Offset: 0x1c4
	// Line 136, Address: 0x1f0205c, Func Offset: 0x1dc
	// Line 137, Address: 0x1f02064, Func Offset: 0x1e4
	// Line 139, Address: 0x1f0207c, Func Offset: 0x1fc
	// Line 140, Address: 0x1f02098, Func Offset: 0x218
	// Line 143, Address: 0x1f020a0, Func Offset: 0x220
	// Line 144, Address: 0x1f020a8, Func Offset: 0x228
	// Line 145, Address: 0x1f020b8, Func Offset: 0x238
	// Line 149, Address: 0x1f020cc, Func Offset: 0x24c
	// Line 150, Address: 0x1f020e0, Func Offset: 0x260
	// Line 151, Address: 0x1f020ec, Func Offset: 0x26c
	// Line 152, Address: 0x1f020f8, Func Offset: 0x278
	// Line 153, Address: 0x1f02104, Func Offset: 0x284
	// Line 154, Address: 0x1f02118, Func Offset: 0x298
	// Line 156, Address: 0x1f02148, Func Offset: 0x2c8
	// Line 157, Address: 0x1f02150, Func Offset: 0x2d0
	// Line 158, Address: 0x1f02168, Func Offset: 0x2e8
	// Line 160, Address: 0x1f02174, Func Offset: 0x2f4
	// Line 161, Address: 0x1f02178, Func Offset: 0x2f8
	// Func End, Address: 0x1f0218c, Func Offset: 0x30c
	// Line 97, Address: 0x1f01e80, Func Offset: 0
	// Line 129, Address: 0x1f01e8c, Func Offset: 0xc
	// Line 131, Address: 0x1f01ebc, Func Offset: 0x3c
	// Line 132, Address: 0x1f01ed4, Func Offset: 0x54
	// Line 133, Address: 0x1f01ee8, Func Offset: 0x68
	// Line 134, Address: 0x1f01ef4, Func Offset: 0x74
	// Line 135, Address: 0x1f01f08, Func Offset: 0x88
	// Line 138, Address: 0x1f01f1c, Func Offset: 0x9c
	// Line 139, Address: 0x1f01f30, Func Offset: 0xb0
	// Line 140, Address: 0x1f01f68, Func Offset: 0xe8
	// Line 141, Address: 0x1f01fa0, Func Offset: 0x120
	// Line 142, Address: 0x1f01fb4, Func Offset: 0x134
	// Line 145, Address: 0x1f01fbc, Func Offset: 0x13c
	// Line 146, Address: 0x1f01fc8, Func Offset: 0x148
	// Line 147, Address: 0x1f01fd4, Func Offset: 0x154
	// Line 148, Address: 0x1f01fe0, Func Offset: 0x160
	// Line 149, Address: 0x1f01ff4, Func Offset: 0x174
	// Line 150, Address: 0x1f01ffc, Func Offset: 0x17c
	// Line 152, Address: 0x1f02024, Func Offset: 0x1a4
	// Line 153, Address: 0x1f02038, Func Offset: 0x1b8
	// Line 154, Address: 0x1f02050, Func Offset: 0x1d0
	// Line 156, Address: 0x1f0205c, Func Offset: 0x1dc
	// Line 157, Address: 0x1f02060, Func Offset: 0x1e0
	// Func End, Address: 0x1f02074, Func Offset: 0x1f4
	// Line 131, Address: 0x1f01e80, Func Offset: 0
	// Line 132, Address: 0x1f01e88, Func Offset: 0x8
	// Line 134, Address: 0x1f01ee8, Func Offset: 0x68
	// Line 135, Address: 0x1f01efc, Func Offset: 0x7c
	// Line 136, Address: 0x1f01f08, Func Offset: 0x88
	// Line 139, Address: 0x1f01f1c, Func Offset: 0x9c
	// Line 141, Address: 0x1f01f3c, Func Offset: 0xbc
	// Line 142, Address: 0x1f01f4c, Func Offset: 0xcc
	// Line 146, Address: 0x1f01f60, Func Offset: 0xe0
	// Line 147, Address: 0x1f01f68, Func Offset: 0xe8
	// Line 148, Address: 0x1f01f70, Func Offset: 0xf0
	// Line 149, Address: 0x1f01f78, Func Offset: 0xf8
	// Line 150, Address: 0x1f01f9c, Func Offset: 0x11c
	// Line 153, Address: 0x1f01fa4, Func Offset: 0x124
	// Line 154, Address: 0x1f01fac, Func Offset: 0x12c
	// Line 155, Address: 0x1f01fb4, Func Offset: 0x134
	// Line 156, Address: 0x1f01fbc, Func Offset: 0x13c
	// Line 157, Address: 0x1f01ff4, Func Offset: 0x174
	// Line 158, Address: 0x1f02008, Func Offset: 0x188
	// Line 161, Address: 0x1f02010, Func Offset: 0x190
	// Line 162, Address: 0x1f02018, Func Offset: 0x198
	// Line 163, Address: 0x1f02020, Func Offset: 0x1a0
	// Line 164, Address: 0x1f02028, Func Offset: 0x1a8
	// Line 165, Address: 0x1f02030, Func Offset: 0x1b0
	// Line 166, Address: 0x1f02044, Func Offset: 0x1c4
	// Line 167, Address: 0x1f02054, Func Offset: 0x1d4
	// Line 168, Address: 0x1f02068, Func Offset: 0x1e8
	// Line 171, Address: 0x1f02070, Func Offset: 0x1f0
	// Line 172, Address: 0x1f02080, Func Offset: 0x200
	// Line 174, Address: 0x1f02094, Func Offset: 0x214
	// Line 175, Address: 0x1f02098, Func Offset: 0x218
	// Line 176, Address: 0x1f020ac, Func Offset: 0x22c
	// Line 177, Address: 0x1f020b8, Func Offset: 0x238
	// Line 178, Address: 0x1f020d0, Func Offset: 0x250
	// Line 179, Address: 0x1f02104, Func Offset: 0x284
	// Line 180, Address: 0x1f02118, Func Offset: 0x298
	// Line 183, Address: 0x1f02124, Func Offset: 0x2a4
	// Line 184, Address: 0x1f02128, Func Offset: 0x2a8
	// Func End, Address: 0x1f02138, Func Offset: 0x2b8
	// Line 467, Address: 0x1f01e80, Func Offset: 0
	// Line 484, Address: 0x1f01e88, Func Offset: 0x8
	// Line 486, Address: 0x1f01e94, Func Offset: 0x14
	// Line 488, Address: 0x1f01f00, Func Offset: 0x80
	// Line 489, Address: 0x1f01f14, Func Offset: 0x94
	// Line 490, Address: 0x1f01f20, Func Offset: 0xa0
	// Line 491, Address: 0x1f01f44, Func Offset: 0xc4
	// Line 494, Address: 0x1f01f58, Func Offset: 0xd8
	// Line 495, Address: 0x1f01f60, Func Offset: 0xe0
	// Line 497, Address: 0x1f01f8c, Func Offset: 0x10c
	// Line 498, Address: 0x1f01fb4, Func Offset: 0x134
	// Line 499, Address: 0x1f01fc4, Func Offset: 0x144
	// Line 500, Address: 0x1f01fe8, Func Offset: 0x168
	// Line 501, Address: 0x1f02018, Func Offset: 0x198
	// Line 504, Address: 0x1f02020, Func Offset: 0x1a0
	// Line 505, Address: 0x1f02028, Func Offset: 0x1a8
	// Line 506, Address: 0x1f0203c, Func Offset: 0x1bc
	// Line 507, Address: 0x1f0204c, Func Offset: 0x1cc
	// Line 508, Address: 0x1f02054, Func Offset: 0x1d4
	// Line 509, Address: 0x1f02070, Func Offset: 0x1f0
	// Line 510, Address: 0x1f02078, Func Offset: 0x1f8
	// Line 513, Address: 0x1f0208c, Func Offset: 0x20c
	// Line 514, Address: 0x1f020a4, Func Offset: 0x224
	// Line 515, Address: 0x1f020dc, Func Offset: 0x25c
	// Line 517, Address: 0x1f020f0, Func Offset: 0x270
	// Line 520, Address: 0x1f020f8, Func Offset: 0x278
	// Line 521, Address: 0x1f02114, Func Offset: 0x294
	// Line 522, Address: 0x1f02148, Func Offset: 0x2c8
	// Line 523, Address: 0x1f02178, Func Offset: 0x2f8
	// Line 524, Address: 0x1f02188, Func Offset: 0x308
	// Line 527, Address: 0x1f02190, Func Offset: 0x310
	// Line 528, Address: 0x1f021ac, Func Offset: 0x32c
	// Line 531, Address: 0x1f021b8, Func Offset: 0x338
	// Line 532, Address: 0x1f021c0, Func Offset: 0x340
	// Line 533, Address: 0x1f021d4, Func Offset: 0x354
	// Line 536, Address: 0x1f021e8, Func Offset: 0x368
	// Line 537, Address: 0x1f021fc, Func Offset: 0x37c
	// Line 538, Address: 0x1f02218, Func Offset: 0x398
	// Line 539, Address: 0x1f02224, Func Offset: 0x3a4
	// Line 540, Address: 0x1f02238, Func Offset: 0x3b8
	// Line 541, Address: 0x1f02240, Func Offset: 0x3c0
	// Line 543, Address: 0x1f0224c, Func Offset: 0x3cc
	// Line 544, Address: 0x1f02250, Func Offset: 0x3d0
	// Func End, Address: 0x1f02260, Func Offset: 0x3e0
	// Line 110, Address: 0x1f01e80, Func Offset: 0
	// Line 144, Address: 0x1f01e88, Func Offset: 0x8
	// Line 146, Address: 0x1f01ee8, Func Offset: 0x68
	// Line 147, Address: 0x1f01f00, Func Offset: 0x80
	// Line 148, Address: 0x1f01f10, Func Offset: 0x90
	// Line 149, Address: 0x1f01f1c, Func Offset: 0x9c
	// Line 150, Address: 0x1f01f30, Func Offset: 0xb0
	// Line 151, Address: 0x1f01f40, Func Offset: 0xc0
	// Line 155, Address: 0x1f01f54, Func Offset: 0xd4
	// Line 156, Address: 0x1f01f6c, Func Offset: 0xec
	// Line 157, Address: 0x1f01f94, Func Offset: 0x114
	// Line 160, Address: 0x1f01f9c, Func Offset: 0x11c
	// Line 161, Address: 0x1f01fc8, Func Offset: 0x148
	// Line 162, Address: 0x1f01fdc, Func Offset: 0x15c
	// Line 165, Address: 0x1f01fe4, Func Offset: 0x164
	// Line 166, Address: 0x1f01fec, Func Offset: 0x16c
	// Line 167, Address: 0x1f01ffc, Func Offset: 0x17c
	// Line 171, Address: 0x1f02010, Func Offset: 0x190
	// Line 172, Address: 0x1f0203c, Func Offset: 0x1bc
	// Line 175, Address: 0x1f02044, Func Offset: 0x1c4
	// Line 176, Address: 0x1f0204c, Func Offset: 0x1cc
	// Line 180, Address: 0x1f02060, Func Offset: 0x1e0
	// Line 181, Address: 0x1f02074, Func Offset: 0x1f4
	// Line 182, Address: 0x1f02088, Func Offset: 0x208
	// Line 183, Address: 0x1f0209c, Func Offset: 0x21c
	// Line 184, Address: 0x1f020a4, Func Offset: 0x224
	// Line 185, Address: 0x1f020b0, Func Offset: 0x230
	// Line 186, Address: 0x1f020bc, Func Offset: 0x23c
	// Line 187, Address: 0x1f020d4, Func Offset: 0x254
	// Line 189, Address: 0x1f020e0, Func Offset: 0x260
	// Line 190, Address: 0x1f020e4, Func Offset: 0x264
	// Func End, Address: 0x1f020f4, Func Offset: 0x274
	// Line 246, Address: 0x1f01e80, Func Offset: 0
	// Line 247, Address: 0x1f01e88, Func Offset: 0x8
	// Line 249, Address: 0x1f01ef4, Func Offset: 0x74
	// Line 250, Address: 0x1f01f08, Func Offset: 0x88
	// Line 251, Address: 0x1f01f14, Func Offset: 0x94
	// Line 255, Address: 0x1f01f28, Func Offset: 0xa8
	// Line 256, Address: 0x1f01f3c, Func Offset: 0xbc
	// Line 258, Address: 0x1f01f68, Func Offset: 0xe8
	// Line 259, Address: 0x1f01f70, Func Offset: 0xf0
	// Line 261, Address: 0x1f01f84, Func Offset: 0x104
	// Line 264, Address: 0x1f01f8c, Func Offset: 0x10c
	// Line 266, Address: 0x1f01fac, Func Offset: 0x12c
	// Line 267, Address: 0x1f01fbc, Func Offset: 0x13c
	// Line 271, Address: 0x1f01fd0, Func Offset: 0x150
	// Line 272, Address: 0x1f01fd8, Func Offset: 0x158
	// Line 273, Address: 0x1f01fe0, Func Offset: 0x160
	// Line 274, Address: 0x1f01fe8, Func Offset: 0x168
	// Line 275, Address: 0x1f0200c, Func Offset: 0x18c
	// Line 278, Address: 0x1f02014, Func Offset: 0x194
	// Line 279, Address: 0x1f0201c, Func Offset: 0x19c
	// Line 280, Address: 0x1f02024, Func Offset: 0x1a4
	// Line 281, Address: 0x1f0202c, Func Offset: 0x1ac
	// Line 282, Address: 0x1f02064, Func Offset: 0x1e4
	// Line 283, Address: 0x1f02078, Func Offset: 0x1f8
	// Line 286, Address: 0x1f02080, Func Offset: 0x200
	// Line 287, Address: 0x1f02088, Func Offset: 0x208
	// Line 288, Address: 0x1f02090, Func Offset: 0x210
	// Line 289, Address: 0x1f02098, Func Offset: 0x218
	// Line 290, Address: 0x1f020a0, Func Offset: 0x220
	// Line 291, Address: 0x1f020b4, Func Offset: 0x234
	// Line 292, Address: 0x1f020c8, Func Offset: 0x248
	// Line 293, Address: 0x1f020d8, Func Offset: 0x258
	// Line 296, Address: 0x1f020e0, Func Offset: 0x260
	// Line 297, Address: 0x1f020f0, Func Offset: 0x270
	// Line 298, Address: 0x1f02104, Func Offset: 0x284
	// Line 299, Address: 0x1f02114, Func Offset: 0x294
	// Line 302, Address: 0x1f0211c, Func Offset: 0x29c
	// Line 303, Address: 0x1f02130, Func Offset: 0x2b0
	// Line 305, Address: 0x1f0213c, Func Offset: 0x2bc
	// Line 306, Address: 0x1f02140, Func Offset: 0x2c0
	// Func End, Address: 0x1f02150, Func Offset: 0x2d0
	// Line 108, Address: 0x1f01e80, Func Offset: 0
	// Line 141, Address: 0x1f01e88, Func Offset: 0x8
	// Line 142, Address: 0x1f01ed0, Func Offset: 0x50
	// Line 144, Address: 0x1f01eec, Func Offset: 0x6c
	// Line 146, Address: 0x1f01f40, Func Offset: 0xc0
	// Line 147, Address: 0x1f01f54, Func Offset: 0xd4
	// Line 148, Address: 0x1f01f60, Func Offset: 0xe0
	// Line 149, Address: 0x1f01f78, Func Offset: 0xf8
	// Line 150, Address: 0x1f01f8c, Func Offset: 0x10c
	// Line 154, Address: 0x1f01fa0, Func Offset: 0x120
	// Line 155, Address: 0x1f01fb4, Func Offset: 0x134
	// Line 157, Address: 0x1f01fe0, Func Offset: 0x160
	// Line 158, Address: 0x1f01ff0, Func Offset: 0x170
	// Line 160, Address: 0x1f02004, Func Offset: 0x184
	// Line 163, Address: 0x1f0200c, Func Offset: 0x18c
	// Line 164, Address: 0x1f02024, Func Offset: 0x1a4
	// Line 165, Address: 0x1f02038, Func Offset: 0x1b8
	// Line 166, Address: 0x1f02044, Func Offset: 0x1c4
	// Line 167, Address: 0x1f02058, Func Offset: 0x1d8
	// Line 168, Address: 0x1f0206c, Func Offset: 0x1ec
	// Line 172, Address: 0x1f02080, Func Offset: 0x200
	// Line 173, Address: 0x1f020ac, Func Offset: 0x22c
	// Line 176, Address: 0x1f020b4, Func Offset: 0x234
	// Line 177, Address: 0x1f020c0, Func Offset: 0x240
	// Line 178, Address: 0x1f020cc, Func Offset: 0x24c
	// Line 179, Address: 0x1f020d8, Func Offset: 0x258
	// Line 181, Address: 0x1f020fc, Func Offset: 0x27c
	// Line 182, Address: 0x1f02108, Func Offset: 0x288
	// Line 183, Address: 0x1f0211c, Func Offset: 0x29c
	// Line 184, Address: 0x1f02128, Func Offset: 0x2a8
	// Line 185, Address: 0x1f0213c, Func Offset: 0x2bc
	// Line 188, Address: 0x1f02150, Func Offset: 0x2d0
	// Line 189, Address: 0x1f02170, Func Offset: 0x2f0
	// Line 190, Address: 0x1f02184, Func Offset: 0x304
	// Line 192, Address: 0x1f02190, Func Offset: 0x310
	// Line 193, Address: 0x1f02194, Func Offset: 0x314
	// Func End, Address: 0x1f021a4, Func Offset: 0x324
	// Line 145, Address: 0x1f01e80, Func Offset: 0
	// Line 193, Address: 0x1f01e8c, Func Offset: 0xc
	// Line 195, Address: 0x1f01ec8, Func Offset: 0x48
	// Line 196, Address: 0x1f01ee0, Func Offset: 0x60
	// Line 197, Address: 0x1f01ef4, Func Offset: 0x74
	// Line 198, Address: 0x1f01f00, Func Offset: 0x80
	// Line 199, Address: 0x1f01f14, Func Offset: 0x94
	// Line 201, Address: 0x1f01f50, Func Offset: 0xd0
	// Line 203, Address: 0x1f01f70, Func Offset: 0xf0
	// Line 206, Address: 0x1f01f84, Func Offset: 0x104
	// Line 207, Address: 0x1f01f9c, Func Offset: 0x11c
	// Line 208, Address: 0x1f01fac, Func Offset: 0x12c
	// Line 210, Address: 0x1f01fc0, Func Offset: 0x140
	// Line 213, Address: 0x1f01fc8, Func Offset: 0x148
	// Line 214, Address: 0x1f01fd8, Func Offset: 0x158
	// Line 215, Address: 0x1f01ffc, Func Offset: 0x17c
	// Line 218, Address: 0x1f02004, Func Offset: 0x184
	// Line 220, Address: 0x1f02030, Func Offset: 0x1b0
	// Line 221, Address: 0x1f0203c, Func Offset: 0x1bc
	// Line 222, Address: 0x1f02048, Func Offset: 0x1c8
	// Line 223, Address: 0x1f02054, Func Offset: 0x1d4
	// Line 224, Address: 0x1f02060, Func Offset: 0x1e0
	// Line 225, Address: 0x1f0206c, Func Offset: 0x1ec
	// Line 226, Address: 0x1f02078, Func Offset: 0x1f8
	// Line 227, Address: 0x1f0208c, Func Offset: 0x20c
	// Line 228, Address: 0x1f02094, Func Offset: 0x214
	// Line 229, Address: 0x1f020ac, Func Offset: 0x22c
	// Line 230, Address: 0x1f020bc, Func Offset: 0x23c
	// Line 232, Address: 0x1f020d8, Func Offset: 0x258
	// Line 234, Address: 0x1f02100, Func Offset: 0x280
	// Line 236, Address: 0x1f02128, Func Offset: 0x2a8
	// Line 237, Address: 0x1f0213c, Func Offset: 0x2bc
	// Line 238, Address: 0x1f02150, Func Offset: 0x2d0
	// Line 239, Address: 0x1f0215c, Func Offset: 0x2dc
	// Line 240, Address: 0x1f02168, Func Offset: 0x2e8
	// Line 241, Address: 0x1f02178, Func Offset: 0x2f8
	// Line 242, Address: 0x1f02190, Func Offset: 0x310
	// Line 244, Address: 0x1f0219c, Func Offset: 0x31c
	// Line 245, Address: 0x1f021a0, Func Offset: 0x320
	// Func End, Address: 0x1f021b4, Func Offset: 0x334
	// Line 219, Address: 0x1f01e80, Func Offset: 0
	// Line 222, Address: 0x1f01e88, Func Offset: 0x8
	// Line 232, Address: 0x1f01f04, Func Offset: 0x84
	// Line 233, Address: 0x1f01f0c, Func Offset: 0x8c
	// Line 234, Address: 0x1f01f14, Func Offset: 0x94
	// Line 236, Address: 0x1f01f44, Func Offset: 0xc4
	// Line 237, Address: 0x1f01f4c, Func Offset: 0xcc
	// Line 239, Address: 0x1f01f64, Func Offset: 0xe4
	// Line 240, Address: 0x1f01f6c, Func Offset: 0xec
	// Line 244, Address: 0x1f01f74, Func Offset: 0xf4
	// Line 246, Address: 0x1f02010, Func Offset: 0x190
	// Line 247, Address: 0x1f02024, Func Offset: 0x1a4
	// Line 248, Address: 0x1f0205c, Func Offset: 0x1dc
	// Line 252, Address: 0x1f02070, Func Offset: 0x1f0
	// Line 254, Address: 0x1f02090, Func Offset: 0x210
	// Line 255, Address: 0x1f020a0, Func Offset: 0x220
	// Line 259, Address: 0x1f020b4, Func Offset: 0x234
	// Line 260, Address: 0x1f020c4, Func Offset: 0x244
	// Line 261, Address: 0x1f020d8, Func Offset: 0x258
	// Line 264, Address: 0x1f020e0, Func Offset: 0x260
	// Line 265, Address: 0x1f02118, Func Offset: 0x298
	// Line 266, Address: 0x1f0212c, Func Offset: 0x2ac
	// Line 269, Address: 0x1f02134, Func Offset: 0x2b4
	// Line 270, Address: 0x1f02144, Func Offset: 0x2c4
	// Line 271, Address: 0x1f02158, Func Offset: 0x2d8
	// Line 274, Address: 0x1f02160, Func Offset: 0x2e0
	// Line 275, Address: 0x1f02170, Func Offset: 0x2f0
	// Line 276, Address: 0x1f02184, Func Offset: 0x304
	// Line 277, Address: 0x1f02198, Func Offset: 0x318
	// Line 278, Address: 0x1f021ac, Func Offset: 0x32c
	// Line 279, Address: 0x1f021c4, Func Offset: 0x344
	// Line 280, Address: 0x1f021d4, Func Offset: 0x354
	// Line 281, Address: 0x1f021e8, Func Offset: 0x368
	// Line 282, Address: 0x1f02200, Func Offset: 0x380
	// Line 283, Address: 0x1f02210, Func Offset: 0x390
	// Line 284, Address: 0x1f02218, Func Offset: 0x398
	// Line 285, Address: 0x1f02230, Func Offset: 0x3b0
	// Line 287, Address: 0x1f02244, Func Offset: 0x3c4
	// Line 288, Address: 0x1f02258, Func Offset: 0x3d8
	// Line 291, Address: 0x1f02260, Func Offset: 0x3e0
	// Line 294, Address: 0x1f02284, Func Offset: 0x404
	// Line 295, Address: 0x1f02294, Func Offset: 0x414
	// Line 296, Address: 0x1f022a8, Func Offset: 0x428
	// Line 299, Address: 0x1f022b0, Func Offset: 0x430
	// Line 300, Address: 0x1f022c0, Func Offset: 0x440
	// Line 301, Address: 0x1f022d4, Func Offset: 0x454
	// Line 304, Address: 0x1f022dc, Func Offset: 0x45c
	// Line 305, Address: 0x1f02314, Func Offset: 0x494
	// Line 306, Address: 0x1f02328, Func Offset: 0x4a8
	// Line 309, Address: 0x1f02330, Func Offset: 0x4b0
	// Line 310, Address: 0x1f02344, Func Offset: 0x4c4
	// Line 311, Address: 0x1f02358, Func Offset: 0x4d8
	// Line 312, Address: 0x1f02368, Func Offset: 0x4e8
	// Line 315, Address: 0x1f02370, Func Offset: 0x4f0
	// Line 316, Address: 0x1f02394, Func Offset: 0x514
	// Line 319, Address: 0x1f0239c, Func Offset: 0x51c
	// Line 320, Address: 0x1f023b0, Func Offset: 0x530
	// Line 321, Address: 0x1f023c0, Func Offset: 0x540
	// Line 323, Address: 0x1f023cc, Func Offset: 0x54c
	// Line 324, Address: 0x1f023d0, Func Offset: 0x550
	// Func End, Address: 0x1f023e0, Func Offset: 0x560
	// Line 83, Address: 0x1f01e80, Func Offset: 0
	// Line 84, Address: 0x1f01ea0, Func Offset: 0x20
	// Func End, Address: 0x1f01ea8, Func Offset: 0x28
	// Line 232, Address: 0x1f01e80, Func Offset: 0
	// Line 236, Address: 0x1f01e88, Func Offset: 0x8
	// Line 238, Address: 0x1f01e90, Func Offset: 0x10
	// Line 242, Address: 0x1f01eb8, Func Offset: 0x38
	// Line 243, Address: 0x1f01ecc, Func Offset: 0x4c
	// Line 244, Address: 0x1f01ed4, Func Offset: 0x54
	// Line 249, Address: 0x1f01ef0, Func Offset: 0x70
	// Line 251, Address: 0x1f01efc, Func Offset: 0x7c
	// Line 254, Address: 0x1f01f04, Func Offset: 0x84
	// Line 255, Address: 0x1f01f18, Func Offset: 0x98
	// Line 256, Address: 0x1f01f30, Func Offset: 0xb0
	// Line 260, Address: 0x1f01f38, Func Offset: 0xb8
	// Line 261, Address: 0x1f01f50, Func Offset: 0xd0
	// Line 262, Address: 0x1f01f68, Func Offset: 0xe8
	// Line 263, Address: 0x1f01f78, Func Offset: 0xf8
	// Line 264, Address: 0x1f01fac, Func Offset: 0x12c
	// Line 265, Address: 0x1f01fd8, Func Offset: 0x158
	// Line 266, Address: 0x1f01ff8, Func Offset: 0x178
	// Line 267, Address: 0x1f0201c, Func Offset: 0x19c
	// Line 268, Address: 0x1f0203c, Func Offset: 0x1bc
	// Line 269, Address: 0x1f02060, Func Offset: 0x1e0
	// Line 270, Address: 0x1f02078, Func Offset: 0x1f8
	// Line 271, Address: 0x1f02094, Func Offset: 0x214
	// Line 272, Address: 0x1f020bc, Func Offset: 0x23c
	// Line 273, Address: 0x1f020d4, Func Offset: 0x254
	// Line 279, Address: 0x1f020f0, Func Offset: 0x270
	// Func End, Address: 0x1f02100, Func Offset: 0x280
	// Line 103, Address: 0x1f01e80, Func Offset: 0
	// Line 104, Address: 0x1f01e88, Func Offset: 0x8
	// Line 105, Address: 0x1f01e98, Func Offset: 0x18
	// Func End, Address: 0x1f01ea8, Func Offset: 0x28
	// Line 516, Address: 0x1f01e80, Func Offset: 0
	// Line 554, Address: 0x1f01e8c, Func Offset: 0xc
	// Line 556, Address: 0x1f01eec, Func Offset: 0x6c
	// Line 557, Address: 0x1f01ef8, Func Offset: 0x78
	// Line 558, Address: 0x1f01f0c, Func Offset: 0x8c
	// Line 559, Address: 0x1f01f1c, Func Offset: 0x9c
	// Line 560, Address: 0x1f01f2c, Func Offset: 0xac
	// Line 561, Address: 0x1f01f48, Func Offset: 0xc8
	// Line 564, Address: 0x1f01f5c, Func Offset: 0xdc
	// Line 565, Address: 0x1f01f70, Func Offset: 0xf0
	// Line 567, Address: 0x1f01f8c, Func Offset: 0x10c
	// Line 568, Address: 0x1f01fc0, Func Offset: 0x140
	// Line 569, Address: 0x1f01fd8, Func Offset: 0x158
	// Line 570, Address: 0x1f02000, Func Offset: 0x180
	// Line 573, Address: 0x1f02008, Func Offset: 0x188
	// Line 574, Address: 0x1f02034, Func Offset: 0x1b4
	// Line 575, Address: 0x1f02048, Func Offset: 0x1c8
	// Line 578, Address: 0x1f02050, Func Offset: 0x1d0
	// Line 579, Address: 0x1f02058, Func Offset: 0x1d8
	// Line 583, Address: 0x1f0206c, Func Offset: 0x1ec
	// Line 584, Address: 0x1f02098, Func Offset: 0x218
	// Line 587, Address: 0x1f020a0, Func Offset: 0x220
	// Line 588, Address: 0x1f020a8, Func Offset: 0x228
	// Line 592, Address: 0x1f020bc, Func Offset: 0x23c
	// Line 593, Address: 0x1f020c4, Func Offset: 0x244
	// Line 594, Address: 0x1f020d0, Func Offset: 0x250
	// Line 595, Address: 0x1f020dc, Func Offset: 0x25c
	// Line 596, Address: 0x1f020e8, Func Offset: 0x268
	// Line 597, Address: 0x1f020f0, Func Offset: 0x270
	// Line 598, Address: 0x1f020fc, Func Offset: 0x27c
	// Line 599, Address: 0x1f02110, Func Offset: 0x290
	// Line 600, Address: 0x1f02130, Func Offset: 0x2b0
	// Line 601, Address: 0x1f02138, Func Offset: 0x2b8
	// Line 602, Address: 0x1f02144, Func Offset: 0x2c4
	// Line 603, Address: 0x1f0214c, Func Offset: 0x2cc
	// Line 605, Address: 0x1f02158, Func Offset: 0x2d8
	// Line 606, Address: 0x1f0215c, Func Offset: 0x2dc
	// Func End, Address: 0x1f02170, Func Offset: 0x2f0
	// Line 112, Address: 0x1f01e80, Func Offset: 0
	// Line 154, Address: 0x1f01e8c, Func Offset: 0xc
	// Line 156, Address: 0x1f01ebc, Func Offset: 0x3c
	// Line 157, Address: 0x1f01ed4, Func Offset: 0x54
	// Line 158, Address: 0x1f01ee8, Func Offset: 0x68
	// Line 159, Address: 0x1f01ef4, Func Offset: 0x74
	// Line 160, Address: 0x1f01f08, Func Offset: 0x88
	// Line 163, Address: 0x1f01f1c, Func Offset: 0x9c
	// Line 164, Address: 0x1f01f30, Func Offset: 0xb0
	// Line 166, Address: 0x1f01f68, Func Offset: 0xe8
	// Line 167, Address: 0x1f01f78, Func Offset: 0xf8
	// Line 169, Address: 0x1f01f8c, Func Offset: 0x10c
	// Line 172, Address: 0x1f01f94, Func Offset: 0x114
	// Line 173, Address: 0x1f01fa4, Func Offset: 0x124
	// Line 174, Address: 0x1f01fac, Func Offset: 0x12c
	// Line 175, Address: 0x1f01fc0, Func Offset: 0x140
	// Line 176, Address: 0x1f01fd4, Func Offset: 0x154
	// Line 177, Address: 0x1f01fe0, Func Offset: 0x160
	// Line 178, Address: 0x1f01ff4, Func Offset: 0x174
	// Line 179, Address: 0x1f01ffc, Func Offset: 0x17c
	// Line 180, Address: 0x1f02008, Func Offset: 0x188
	// Line 182, Address: 0x1f02014, Func Offset: 0x194
	// Line 183, Address: 0x1f02018, Func Offset: 0x198
	// Func End, Address: 0x1f0202c, Func Offset: 0x1ac
	// Line 79, Address: 0x1f01e80, Func Offset: 0
	// Line 103, Address: 0x1f01e88, Func Offset: 0x8
	// Line 105, Address: 0x1f01eb8, Func Offset: 0x38
	// Line 106, Address: 0x1f01ec8, Func Offset: 0x48
	// Line 107, Address: 0x1f01ed4, Func Offset: 0x54
	// Line 108, Address: 0x1f01ee8, Func Offset: 0x68
	// Line 111, Address: 0x1f01efc, Func Offset: 0x7c
	// Line 112, Address: 0x1f01f28, Func Offset: 0xa8
	// Line 115, Address: 0x1f01f30, Func Offset: 0xb0
	// Line 116, Address: 0x1f01f44, Func Offset: 0xc4
	// Line 117, Address: 0x1f01f58, Func Offset: 0xd8
	// Line 118, Address: 0x1f01f6c, Func Offset: 0xec
	// Line 119, Address: 0x1f01f80, Func Offset: 0x100
	// Line 120, Address: 0x1f01f94, Func Offset: 0x114
	// Line 121, Address: 0x1f01fa0, Func Offset: 0x120
	// Line 122, Address: 0x1f01fb4, Func Offset: 0x134
	// Line 123, Address: 0x1f01fc0, Func Offset: 0x140
	// Line 124, Address: 0x1f01fd0, Func Offset: 0x150
	// Line 125, Address: 0x1f01fdc, Func Offset: 0x15c
	// Line 126, Address: 0x1f01fe8, Func Offset: 0x168
	// Line 127, Address: 0x1f01ff4, Func Offset: 0x174
	// Line 128, Address: 0x1f01ff8, Func Offset: 0x178
	// Line 129, Address: 0x1f02004, Func Offset: 0x184
	// Line 130, Address: 0x1f02008, Func Offset: 0x188
	// Line 131, Address: 0x1f02014, Func Offset: 0x194
	// Line 132, Address: 0x1f02028, Func Offset: 0x1a8
	// Line 133, Address: 0x1f02030, Func Offset: 0x1b0
	// Line 134, Address: 0x1f02038, Func Offset: 0x1b8
	// Line 135, Address: 0x1f02044, Func Offset: 0x1c4
	// Line 137, Address: 0x1f02050, Func Offset: 0x1d0
	// Line 138, Address: 0x1f02054, Func Offset: 0x1d4
	// Func End, Address: 0x1f02064, Func Offset: 0x1e4
	// Line 128, Address: 0x1f01e80, Func Offset: 0
	// Line 129, Address: 0x1f01e88, Func Offset: 0x8
	// Line 131, Address: 0x1f01e9c, Func Offset: 0x1c
	// Func End, Address: 0x1f01eac, Func Offset: 0x2c
	// Line 122, Address: 0x1f01e80, Func Offset: 0
	// Line 123, Address: 0x1f01e88, Func Offset: 0x8
	// Line 124, Address: 0x1f01e98, Func Offset: 0x18
	// Func End, Address: 0x1f01ea8, Func Offset: 0x28
	// Line 162, Address: 0x1f01e80, Func Offset: 0
	// Line 203, Address: 0x1f01e8c, Func Offset: 0xc
	// Line 205, Address: 0x1f01ebc, Func Offset: 0x3c
	// Line 206, Address: 0x1f01ed4, Func Offset: 0x54
	// Line 207, Address: 0x1f01ee8, Func Offset: 0x68
	// Line 208, Address: 0x1f01ef4, Func Offset: 0x74
	// Line 209, Address: 0x1f01f08, Func Offset: 0x88
	// Line 210, Address: 0x1f01f1c, Func Offset: 0x9c
	// Line 213, Address: 0x1f01f30, Func Offset: 0xb0
	// Line 214, Address: 0x1f01f40, Func Offset: 0xc0
	// Line 215, Address: 0x1f01f68, Func Offset: 0xe8
	// Line 216, Address: 0x1f01f84, Func Offset: 0x104
	// Line 217, Address: 0x1f01fa0, Func Offset: 0x120
	// Line 220, Address: 0x1f01fa8, Func Offset: 0x128
	// Line 221, Address: 0x1f01fb0, Func Offset: 0x130
	// Line 222, Address: 0x1f01fbc, Func Offset: 0x13c
	// Line 223, Address: 0x1f01fc8, Func Offset: 0x148
	// Line 224, Address: 0x1f01fd4, Func Offset: 0x154
	// Line 225, Address: 0x1f01fe0, Func Offset: 0x160
	// Line 226, Address: 0x1f01ff4, Func Offset: 0x174
	// Line 227, Address: 0x1f02014, Func Offset: 0x194
	// Line 228, Address: 0x1f02024, Func Offset: 0x1a4
	// Line 229, Address: 0x1f02030, Func Offset: 0x1b0
	// Line 230, Address: 0x1f0204c, Func Offset: 0x1cc
	// Line 231, Address: 0x1f02060, Func Offset: 0x1e0
	// Line 232, Address: 0x1f02080, Func Offset: 0x200
	// Line 233, Address: 0x1f02088, Func Offset: 0x208
	// Line 234, Address: 0x1f02090, Func Offset: 0x210
	// Line 235, Address: 0x1f0209c, Func Offset: 0x21c
	// Line 236, Address: 0x1f020b4, Func Offset: 0x234
	// Line 237, Address: 0x1f020e0, Func Offset: 0x260
	// Line 239, Address: 0x1f020ec, Func Offset: 0x26c
	// Line 240, Address: 0x1f020f0, Func Offset: 0x270
	// Func End, Address: 0x1f02104, Func Offset: 0x284
	// Line 102, Address: 0x1f01e80, Func Offset: 0
	// Line 103, Address: 0x1f01e88, Func Offset: 0x8
	// Line 106, Address: 0x1f01ee8, Func Offset: 0x68
	// Line 107, Address: 0x1f01efc, Func Offset: 0x7c
	// Line 108, Address: 0x1f01f08, Func Offset: 0x88
	// Line 109, Address: 0x1f01f18, Func Offset: 0x98
	// Line 110, Address: 0x1f01f20, Func Offset: 0xa0
	// Line 114, Address: 0x1f01f34, Func Offset: 0xb4
	// Line 117, Address: 0x1f01f58, Func Offset: 0xd8
	// Line 118, Address: 0x1f01f68, Func Offset: 0xe8
	// Line 122, Address: 0x1f01f7c, Func Offset: 0xfc
	// Line 123, Address: 0x1f01f84, Func Offset: 0x104
	// Line 124, Address: 0x1f01f8c, Func Offset: 0x10c
	// Line 125, Address: 0x1f01f98, Func Offset: 0x118
	// Line 126, Address: 0x1f01fa0, Func Offset: 0x120
	// Line 127, Address: 0x1f01fa8, Func Offset: 0x128
	// Line 129, Address: 0x1f01fe0, Func Offset: 0x160
	// Line 130, Address: 0x1f01ffc, Func Offset: 0x17c
	// Line 131, Address: 0x1f0202c, Func Offset: 0x1ac
	// Line 134, Address: 0x1f02034, Func Offset: 0x1b4
	// Line 135, Address: 0x1f02050, Func Offset: 0x1d0
	// Line 136, Address: 0x1f02058, Func Offset: 0x1d8
	// Line 137, Address: 0x1f02060, Func Offset: 0x1e0
	// Line 138, Address: 0x1f02068, Func Offset: 0x1e8
	// Line 139, Address: 0x1f02070, Func Offset: 0x1f0
	// Line 140, Address: 0x1f02094, Func Offset: 0x214
	// Line 141, Address: 0x1f020a8, Func Offset: 0x228
	// Line 142, Address: 0x1f020b8, Func Offset: 0x238
	// Line 145, Address: 0x1f02120, Func Offset: 0x2a0
	// Line 146, Address: 0x1f02138, Func Offset: 0x2b8
	// Line 149, Address: 0x1f02140, Func Offset: 0x2c0
	// Line 150, Address: 0x1f02150, Func Offset: 0x2d0
	// Line 151, Address: 0x1f02164, Func Offset: 0x2e4
	// Line 154, Address: 0x1f021cc, Func Offset: 0x34c
	// Line 155, Address: 0x1f021e0, Func Offset: 0x360
	// Line 156, Address: 0x1f021e8, Func Offset: 0x368
	// Line 157, Address: 0x1f02218, Func Offset: 0x398
	// Line 158, Address: 0x1f0222c, Func Offset: 0x3ac
	// Line 159, Address: 0x1f02238, Func Offset: 0x3b8
	// Line 160, Address: 0x1f02244, Func Offset: 0x3c4
	// Line 162, Address: 0x1f02258, Func Offset: 0x3d8
	// Line 165, Address: 0x1f02260, Func Offset: 0x3e0
	// Line 166, Address: 0x1f0227c, Func Offset: 0x3fc
	// Line 167, Address: 0x1f02294, Func Offset: 0x414
	// Line 168, Address: 0x1f022a0, Func Offset: 0x420
	// Line 169, Address: 0x1f022b8, Func Offset: 0x438
	// Line 171, Address: 0x1f022cc, Func Offset: 0x44c
	// Line 174, Address: 0x1f022d4, Func Offset: 0x454
	// Line 175, Address: 0x1f022e4, Func Offset: 0x464
	// Line 176, Address: 0x1f022f8, Func Offset: 0x478
	// Line 177, Address: 0x1f02314, Func Offset: 0x494
	// Line 178, Address: 0x1f02330, Func Offset: 0x4b0
	// Line 179, Address: 0x1f0234c, Func Offset: 0x4cc
	// Line 182, Address: 0x1f02358, Func Offset: 0x4d8
	// Line 183, Address: 0x1f0235c, Func Offset: 0x4dc
	// Func End, Address: 0x1f0236c, Func Offset: 0x4ec
	// Line 96, Address: 0x1f01e80, Func Offset: 0
	// Line 141, Address: 0x1f01e88, Func Offset: 0x8
	// Line 143, Address: 0x1f01eb8, Func Offset: 0x38
	// Line 144, Address: 0x1f01ed0, Func Offset: 0x50
	// Line 145, Address: 0x1f01ee4, Func Offset: 0x64
	// Line 146, Address: 0x1f01ef4, Func Offset: 0x74
	// Line 147, Address: 0x1f01efc, Func Offset: 0x7c
	// Line 148, Address: 0x1f01f08, Func Offset: 0x88
	// Line 152, Address: 0x1f01f1c, Func Offset: 0x9c
	// Line 153, Address: 0x1f01f48, Func Offset: 0xc8
	// Line 156, Address: 0x1f01f50, Func Offset: 0xd0
	// Line 157, Address: 0x1f01f64, Func Offset: 0xe4
	// Line 158, Address: 0x1f01f70, Func Offset: 0xf0
	// Line 159, Address: 0x1f01f7c, Func Offset: 0xfc
	// Line 160, Address: 0x1f01f88, Func Offset: 0x108
	// Line 161, Address: 0x1f01f94, Func Offset: 0x114
	// Line 163, Address: 0x1f01fa0, Func Offset: 0x120
	// Line 164, Address: 0x1f01fa4, Func Offset: 0x124
	// Func End, Address: 0x1f01fb4, Func Offset: 0x134
	// Line 82, Address: 0x1f01e80, Func Offset: 0
	// Line 99, Address: 0x1f01e88, Func Offset: 0x8
	// Line 101, Address: 0x1f01eb8, Func Offset: 0x38
	// Line 102, Address: 0x1f01ed0, Func Offset: 0x50
	// Line 103, Address: 0x1f01ee4, Func Offset: 0x64
	// Line 104, Address: 0x1f01ef0, Func Offset: 0x70
	// Line 105, Address: 0x1f01f04, Func Offset: 0x84
	// Line 108, Address: 0x1f01f18, Func Offset: 0x98
	// Line 109, Address: 0x1f01f44, Func Offset: 0xc4
	// Line 112, Address: 0x1f01f4c, Func Offset: 0xcc
	// Line 113, Address: 0x1f01f58, Func Offset: 0xd8
	// Line 114, Address: 0x1f01f64, Func Offset: 0xe4
	// Line 115, Address: 0x1f01f78, Func Offset: 0xf8
	// Line 116, Address: 0x1f01f80, Func Offset: 0x100
	// Line 117, Address: 0x1f01f8c, Func Offset: 0x10c
	// Line 118, Address: 0x1f01fa0, Func Offset: 0x120
	// Line 119, Address: 0x1f01fac, Func Offset: 0x12c
	// Line 120, Address: 0x1f01fc0, Func Offset: 0x140
	// Line 121, Address: 0x1f01fd8, Func Offset: 0x158
	// Line 122, Address: 0x1f01fec, Func Offset: 0x16c
	// Line 124, Address: 0x1f01ff8, Func Offset: 0x178
	// Line 125, Address: 0x1f01ffc, Func Offset: 0x17c
	// Func End, Address: 0x1f0200c, Func Offset: 0x18c
	// Line 100, Address: 0x1f01e80, Func Offset: 0
	// Line 143, Address: 0x1f01e8c, Func Offset: 0xc
	// Line 145, Address: 0x1f01ef8, Func Offset: 0x78
	// Line 146, Address: 0x1f01f10, Func Offset: 0x90
	// Line 147, Address: 0x1f01f24, Func Offset: 0xa4
	// Line 148, Address: 0x1f01f38, Func Offset: 0xb8
	// Line 149, Address: 0x1f01f44, Func Offset: 0xc4
	// Line 153, Address: 0x1f01f58, Func Offset: 0xd8
	// Line 154, Address: 0x1f01f6c, Func Offset: 0xec
	// Line 156, Address: 0x1f01f98, Func Offset: 0x118
	// Line 157, Address: 0x1f01fa8, Func Offset: 0x128
	// Line 159, Address: 0x1f01fbc, Func Offset: 0x13c
	// Line 162, Address: 0x1f01fc4, Func Offset: 0x144
	// Line 163, Address: 0x1f01fd8, Func Offset: 0x158
	// Line 164, Address: 0x1f01fec, Func Offset: 0x16c
	// Line 165, Address: 0x1f01ff8, Func Offset: 0x178
	// Line 169, Address: 0x1f0200c, Func Offset: 0x18c
	// Line 170, Address: 0x1f0201c, Func Offset: 0x19c
	// Line 171, Address: 0x1f02050, Func Offset: 0x1d0
	// Line 172, Address: 0x1f02080, Func Offset: 0x200
	// Line 173, Address: 0x1f02094, Func Offset: 0x214
	// Line 176, Address: 0x1f0209c, Func Offset: 0x21c
	// Line 177, Address: 0x1f020ac, Func Offset: 0x22c
	// Line 178, Address: 0x1f020d4, Func Offset: 0x254
	// Line 181, Address: 0x1f020dc, Func Offset: 0x25c
	// Line 182, Address: 0x1f020ec, Func Offset: 0x26c
	// Line 183, Address: 0x1f020fc, Func Offset: 0x27c
	// Line 184, Address: 0x1f02118, Func Offset: 0x298
	// Line 187, Address: 0x1f02120, Func Offset: 0x2a0
	// Line 188, Address: 0x1f0212c, Func Offset: 0x2ac
	// Line 189, Address: 0x1f02138, Func Offset: 0x2b8
	// Line 190, Address: 0x1f02144, Func Offset: 0x2c4
	// Line 191, Address: 0x1f02150, Func Offset: 0x2d0
	// Line 192, Address: 0x1f02164, Func Offset: 0x2e4
	// Line 193, Address: 0x1f0216c, Func Offset: 0x2ec
	// Line 194, Address: 0x1f02174, Func Offset: 0x2f4
	// Line 195, Address: 0x1f02188, Func Offset: 0x308
	// Line 196, Address: 0x1f0219c, Func Offset: 0x31c
	// Line 197, Address: 0x1f021b0, Func Offset: 0x330
	// Line 198, Address: 0x1f021c0, Func Offset: 0x340
	// Line 199, Address: 0x1f021cc, Func Offset: 0x34c
	// Line 200, Address: 0x1f021d8, Func Offset: 0x358
	// Line 201, Address: 0x1f021e4, Func Offset: 0x364
	// Line 202, Address: 0x1f021f0, Func Offset: 0x370
	// Line 204, Address: 0x1f02210, Func Offset: 0x390
	// Line 205, Address: 0x1f0221c, Func Offset: 0x39c
	// Line 208, Address: 0x1f02234, Func Offset: 0x3b4
	// Line 209, Address: 0x1f02248, Func Offset: 0x3c8
	// Line 211, Address: 0x1f02254, Func Offset: 0x3d4
	// Line 212, Address: 0x1f02258, Func Offset: 0x3d8
	// Func End, Address: 0x1f0226c, Func Offset: 0x3ec
	// Line 117, Address: 0x1f01e80, Func Offset: 0
	// Line 120, Address: 0x1f01e88, Func Offset: 0x8
	// Line 126, Address: 0x1f01ef8, Func Offset: 0x78
	// Line 127, Address: 0x1f01f00, Func Offset: 0x80
	// Line 128, Address: 0x1f01f08, Func Offset: 0x88
	// Line 129, Address: 0x1f01f10, Func Offset: 0x90
	// Line 130, Address: 0x1f01f18, Func Offset: 0x98
	// Line 135, Address: 0x1f01f20, Func Offset: 0xa0
	// Line 136, Address: 0x1f01f28, Func Offset: 0xa8
	// Line 137, Address: 0x1f01f30, Func Offset: 0xb0
	// Line 138, Address: 0x1f01f38, Func Offset: 0xb8
	// Line 139, Address: 0x1f01f40, Func Offset: 0xc0
	// Line 143, Address: 0x1f01f48, Func Offset: 0xc8
	// Line 145, Address: 0x1f01fe4, Func Offset: 0x164
	// Line 146, Address: 0x1f01ff8, Func Offset: 0x178
	// Line 147, Address: 0x1f02024, Func Offset: 0x1a4
	// Line 148, Address: 0x1f0202c, Func Offset: 0x1ac
	// Line 149, Address: 0x1f02050, Func Offset: 0x1d0
	// Line 150, Address: 0x1f02058, Func Offset: 0x1d8
	// Line 152, Address: 0x1f02078, Func Offset: 0x1f8
	// Line 153, Address: 0x1f0208c, Func Offset: 0x20c
	// Line 154, Address: 0x1f02094, Func Offset: 0x214
	// Line 155, Address: 0x1f020a8, Func Offset: 0x228
	// Line 156, Address: 0x1f020bc, Func Offset: 0x23c
	// Line 157, Address: 0x1f020dc, Func Offset: 0x25c
	// Line 159, Address: 0x1f020f0, Func Offset: 0x270
	// Line 162, Address: 0x1f020f8, Func Offset: 0x278
	// Line 163, Address: 0x1f0211c, Func Offset: 0x29c
	// Line 164, Address: 0x1f02124, Func Offset: 0x2a4
	// Line 165, Address: 0x1f02150, Func Offset: 0x2d0
	// Line 166, Address: 0x1f02164, Func Offset: 0x2e4
	// Line 169, Address: 0x1f0216c, Func Offset: 0x2ec
	// Line 172, Address: 0x1f02190, Func Offset: 0x310
	// Line 173, Address: 0x1f021a0, Func Offset: 0x320
	// Line 174, Address: 0x1f021b4, Func Offset: 0x334
	// Line 177, Address: 0x1f021bc, Func Offset: 0x33c
	// Line 178, Address: 0x1f021cc, Func Offset: 0x34c
	// Line 179, Address: 0x1f02200, Func Offset: 0x380
	// Line 180, Address: 0x1f02210, Func Offset: 0x390
	// Line 181, Address: 0x1f0222c, Func Offset: 0x3ac
	// Line 182, Address: 0x1f02240, Func Offset: 0x3c0
	// Line 185, Address: 0x1f02248, Func Offset: 0x3c8
	// Line 187, Address: 0x1f02270, Func Offset: 0x3f0
	// Line 188, Address: 0x1f02284, Func Offset: 0x404
	// Line 190, Address: 0x1f02298, Func Offset: 0x418
	// Line 193, Address: 0x1f022a0, Func Offset: 0x420
	// Line 194, Address: 0x1f022bc, Func Offset: 0x43c
	// Line 195, Address: 0x1f022d8, Func Offset: 0x458
	// Line 196, Address: 0x1f022e0, Func Offset: 0x460
	// Line 200, Address: 0x1f02314, Func Offset: 0x494
	// Line 202, Address: 0x1f02328, Func Offset: 0x4a8
	// Line 205, Address: 0x1f02330, Func Offset: 0x4b0
	// Line 207, Address: 0x1f02358, Func Offset: 0x4d8
	// Line 208, Address: 0x1f0236c, Func Offset: 0x4ec
	// Line 210, Address: 0x1f02380, Func Offset: 0x500
	// Line 213, Address: 0x1f02388, Func Offset: 0x508
	// Line 214, Address: 0x1f023a4, Func Offset: 0x524
	// Line 215, Address: 0x1f023c0, Func Offset: 0x540
	// Line 218, Address: 0x1f023c8, Func Offset: 0x548
	// Line 219, Address: 0x1f023dc, Func Offset: 0x55c
	// Line 222, Address: 0x1f023e4, Func Offset: 0x564
	// Line 224, Address: 0x1f0241c, Func Offset: 0x59c
	// Line 226, Address: 0x1f02444, Func Offset: 0x5c4
	// Line 227, Address: 0x1f02454, Func Offset: 0x5d4
	// Line 228, Address: 0x1f02468, Func Offset: 0x5e8
	// Line 229, Address: 0x1f02484, Func Offset: 0x604
	// Line 232, Address: 0x1f0248c, Func Offset: 0x60c
	// Line 233, Address: 0x1f024a0, Func Offset: 0x620
	// Line 234, Address: 0x1f024b0, Func Offset: 0x630
	// Line 235, Address: 0x1f024c4, Func Offset: 0x644
	// Line 238, Address: 0x1f024cc, Func Offset: 0x64c
	// Line 239, Address: 0x1f024f0, Func Offset: 0x670
	// Line 242, Address: 0x1f024f8, Func Offset: 0x678
	// Line 243, Address: 0x1f0250c, Func Offset: 0x68c
	// Line 244, Address: 0x1f0251c, Func Offset: 0x69c
	// Line 245, Address: 0x1f02534, Func Offset: 0x6b4
	// Line 246, Address: 0x1f0254c, Func Offset: 0x6cc
	// Line 249, Address: 0x1f02558, Func Offset: 0x6d8
	// Line 250, Address: 0x1f0255c, Func Offset: 0x6dc
	// Func End, Address: 0x1f0256c, Func Offset: 0x6ec
	// Line 113, Address: 0x1f01e80, Func Offset: 0
	// Line 150, Address: 0x1f01e88, Func Offset: 0x8
	// Line 152, Address: 0x1f01ee8, Func Offset: 0x68
	// Line 153, Address: 0x1f01ef8, Func Offset: 0x78
	// Line 154, Address: 0x1f01f0c, Func Offset: 0x8c
	// Line 155, Address: 0x1f01f18, Func Offset: 0x98
	// Line 159, Address: 0x1f01f2c, Func Offset: 0xac
	// Line 160, Address: 0x1f01f48, Func Offset: 0xc8
	// Line 161, Address: 0x1f01f70, Func Offset: 0xf0
	// Line 164, Address: 0x1f01f78, Func Offset: 0xf8
	// Line 166, Address: 0x1f01fa4, Func Offset: 0x124
	// Line 167, Address: 0x1f01fb8, Func Offset: 0x138
	// Line 170, Address: 0x1f01fc0, Func Offset: 0x140
	// Line 171, Address: 0x1f01fc8, Func Offset: 0x148
	// Line 172, Address: 0x1f01fdc, Func Offset: 0x15c
	// Line 173, Address: 0x1f01fe8, Func Offset: 0x168
	// Line 177, Address: 0x1f01ffc, Func Offset: 0x17c
	// Line 178, Address: 0x1f02028, Func Offset: 0x1a8
	// Line 181, Address: 0x1f02030, Func Offset: 0x1b0
	// Line 182, Address: 0x1f02038, Func Offset: 0x1b8
	// Line 186, Address: 0x1f0204c, Func Offset: 0x1cc
	// Line 187, Address: 0x1f02058, Func Offset: 0x1d8
	// Line 188, Address: 0x1f02064, Func Offset: 0x1e4
	// Line 189, Address: 0x1f02070, Func Offset: 0x1f0
	// Line 190, Address: 0x1f02084, Func Offset: 0x204
	// Line 191, Address: 0x1f02098, Func Offset: 0x218
	// Line 192, Address: 0x1f020a0, Func Offset: 0x220
	// Line 195, Address: 0x1f020d0, Func Offset: 0x250
	// Line 196, Address: 0x1f020f4, Func Offset: 0x274
	// Line 197, Address: 0x1f020fc, Func Offset: 0x27c
	// Line 199, Address: 0x1f02124, Func Offset: 0x2a4
	// Line 200, Address: 0x1f02130, Func Offset: 0x2b0
	// Line 201, Address: 0x1f0213c, Func Offset: 0x2bc
	// Line 202, Address: 0x1f02150, Func Offset: 0x2d0
	// Line 204, Address: 0x1f0215c, Func Offset: 0x2dc
	// Line 205, Address: 0x1f02160, Func Offset: 0x2e0
	// Func End, Address: 0x1f02170, Func Offset: 0x2f0
	// Line 120, Address: 0x1f01e80, Func Offset: 0
	// Line 121, Address: 0x1f01e88, Func Offset: 0x8
	// Line 124, Address: 0x1f01ec4, Func Offset: 0x44
	// Line 125, Address: 0x1f01ec8, Func Offset: 0x48
	// Func End, Address: 0x1f01ed8, Func Offset: 0x58
	// Line 72, Address: 0x1f01e80, Func Offset: 0
	// Line 73, Address: 0x1f01e88, Func Offset: 0x8
	// Line 75, Address: 0x1f01e9c, Func Offset: 0x1c
	// Func End, Address: 0x1f01eac, Func Offset: 0x2c
	// Line 71, Address: 0x1f01e80, Func Offset: 0
	// Line 78, Address: 0x1f01e88, Func Offset: 0x8
	// Line 81, Address: 0x1f01edc, Func Offset: 0x5c
	// Line 82, Address: 0x1f01ef4, Func Offset: 0x74
	// Line 84, Address: 0x1f01f24, Func Offset: 0xa4
	// Line 85, Address: 0x1f01f3c, Func Offset: 0xbc
	// Line 86, Address: 0x1f01f50, Func Offset: 0xd0
	// Line 87, Address: 0x1f01f5c, Func Offset: 0xdc
	// Line 91, Address: 0x1f01f70, Func Offset: 0xf0
	// Line 92, Address: 0x1f01f84, Func Offset: 0x104
	// Line 93, Address: 0x1f01fb0, Func Offset: 0x130
	// Line 94, Address: 0x1f01fc4, Func Offset: 0x144
	// Line 97, Address: 0x1f01fcc, Func Offset: 0x14c
	// Line 98, Address: 0x1f01fdc, Func Offset: 0x15c
	// Line 99, Address: 0x1f01ffc, Func Offset: 0x17c
	// Line 100, Address: 0x1f02010, Func Offset: 0x190
	// Line 101, Address: 0x1f02018, Func Offset: 0x198
	// Line 102, Address: 0x1f02020, Func Offset: 0x1a0
	// Line 104, Address: 0x1f02034, Func Offset: 0x1b4
	// Line 105, Address: 0x1f02058, Func Offset: 0x1d8
	// Line 106, Address: 0x1f0206c, Func Offset: 0x1ec
	// Line 107, Address: 0x1f02098, Func Offset: 0x218
	// Line 110, Address: 0x1f020a0, Func Offset: 0x220
	// Line 111, Address: 0x1f020b0, Func Offset: 0x230
	// Line 115, Address: 0x1f020d0, Func Offset: 0x250
	// Line 116, Address: 0x1f020e4, Func Offset: 0x264
	// Line 118, Address: 0x1f020f8, Func Offset: 0x278
	// Line 119, Address: 0x1f0210c, Func Offset: 0x28c
	// Line 121, Address: 0x1f02118, Func Offset: 0x298
	// Line 122, Address: 0x1f0211c, Func Offset: 0x29c
	// Func End, Address: 0x1f0212c, Func Offset: 0x2ac
	// Line 184, Address: 0x1f01e80, Func Offset: 0
	// Line 191, Address: 0x1f01e88, Func Offset: 0x8
	// Line 193, Address: 0x1f01eb8, Func Offset: 0x38
	// Line 194, Address: 0x1f01ed0, Func Offset: 0x50
	// Line 196, Address: 0x1f01f00, Func Offset: 0x80
	// Line 197, Address: 0x1f01f18, Func Offset: 0x98
	// Line 198, Address: 0x1f01f28, Func Offset: 0xa8
	// Line 199, Address: 0x1f01f48, Func Offset: 0xc8
	// Line 200, Address: 0x1f01f5c, Func Offset: 0xdc
	// Line 201, Address: 0x1f01f64, Func Offset: 0xe4
	// Line 205, Address: 0x1f01f78, Func Offset: 0xf8
	// Line 206, Address: 0x1f01fa4, Func Offset: 0x124
	// Line 209, Address: 0x1f01fac, Func Offset: 0x12c
	// Line 210, Address: 0x1f01fcc, Func Offset: 0x14c
	// Line 211, Address: 0x1f01fe0, Func Offset: 0x160
	// Line 212, Address: 0x1f01fe8, Func Offset: 0x168
	// Line 213, Address: 0x1f01ff4, Func Offset: 0x174
	// Line 215, Address: 0x1f02000, Func Offset: 0x180
	// Line 216, Address: 0x1f02004, Func Offset: 0x184
	// Func End, Address: 0x1f02014, Func Offset: 0x194
	// Line 141, Address: 0x1f01e80, Func Offset: 0
	// Line 227, Address: 0x1f01e8c, Func Offset: 0xc
	// Line 229, Address: 0x1f01f10, Func Offset: 0x90
	// Line 230, Address: 0x1f01f28, Func Offset: 0xa8
	// Line 232, Address: 0x1f01f40, Func Offset: 0xc0
	// Line 234, Address: 0x1f01f58, Func Offset: 0xd8
	// Line 235, Address: 0x1f01f64, Func Offset: 0xe4
	// Line 236, Address: 0x1f01f78, Func Offset: 0xf8
	// Line 237, Address: 0x1f01f8c, Func Offset: 0x10c
	// Line 238, Address: 0x1f01fa0, Func Offset: 0x120
	// Line 242, Address: 0x1f01fb4, Func Offset: 0x134
	// Line 243, Address: 0x1f01fc8, Func Offset: 0x148
	// Line 244, Address: 0x1f01ff8, Func Offset: 0x178
	// Line 245, Address: 0x1f0200c, Func Offset: 0x18c
	// Line 246, Address: 0x1f02040, Func Offset: 0x1c0
	// Line 248, Address: 0x1f0205c, Func Offset: 0x1dc
	// Line 250, Address: 0x1f02078, Func Offset: 0x1f8
	// Line 252, Address: 0x1f020a0, Func Offset: 0x220
	// Line 255, Address: 0x1f020a8, Func Offset: 0x228
	// Line 256, Address: 0x1f020d4, Func Offset: 0x254
	// Line 257, Address: 0x1f020e8, Func Offset: 0x268
	// Line 260, Address: 0x1f020f0, Func Offset: 0x270
	// Line 261, Address: 0x1f020f8, Func Offset: 0x278
	// Line 265, Address: 0x1f0210c, Func Offset: 0x28c
	// Line 266, Address: 0x1f02128, Func Offset: 0x2a8
	// Line 267, Address: 0x1f0213c, Func Offset: 0x2bc
	// Line 268, Address: 0x1f02170, Func Offset: 0x2f0
	// Line 269, Address: 0x1f02188, Func Offset: 0x308
	// Line 271, Address: 0x1f021a4, Func Offset: 0x324
	// Line 272, Address: 0x1f021cc, Func Offset: 0x34c
	// Line 275, Address: 0x1f021d4, Func Offset: 0x354
	// Line 276, Address: 0x1f02200, Func Offset: 0x380
	// Line 277, Address: 0x1f02214, Func Offset: 0x394
	// Line 280, Address: 0x1f0221c, Func Offset: 0x39c
	// Line 281, Address: 0x1f02224, Func Offset: 0x3a4
	// Line 285, Address: 0x1f02238, Func Offset: 0x3b8
	// Line 286, Address: 0x1f02264, Func Offset: 0x3e4
	// Line 289, Address: 0x1f0226c, Func Offset: 0x3ec
	// Line 290, Address: 0x1f02274, Func Offset: 0x3f4
	// Line 294, Address: 0x1f02288, Func Offset: 0x408
	// Line 295, Address: 0x1f02294, Func Offset: 0x414
	// Line 296, Address: 0x1f022a0, Func Offset: 0x420
	// Line 297, Address: 0x1f022ac, Func Offset: 0x42c
	// Line 298, Address: 0x1f022b8, Func Offset: 0x438
	// Line 299, Address: 0x1f022cc, Func Offset: 0x44c
	// Line 300, Address: 0x1f022d4, Func Offset: 0x454
	// Line 301, Address: 0x1f022f0, Func Offset: 0x470
	// Line 302, Address: 0x1f02318, Func Offset: 0x498
	// Line 304, Address: 0x1f02348, Func Offset: 0x4c8
	// Line 305, Address: 0x1f02354, Func Offset: 0x4d4
	// Line 306, Address: 0x1f02360, Func Offset: 0x4e0
	// Line 307, Address: 0x1f02370, Func Offset: 0x4f0
	// Line 309, Address: 0x1f0237c, Func Offset: 0x4fc
	// Line 310, Address: 0x1f02380, Func Offset: 0x500
	// Func End, Address: 0x1f02394, Func Offset: 0x514
	// Line 136, Address: 0x1f01e80, Func Offset: 0
	// Line 137, Address: 0x1f01e88, Func Offset: 0x8
	// Line 138, Address: 0x1f01e9c, Func Offset: 0x1c
	// Line 139, Address: 0x1f01ea4, Func Offset: 0x24
	// Line 141, Address: 0x1f01eb4, Func Offset: 0x34
	// Func End, Address: 0x1f01ec4, Func Offset: 0x44
	// Line 85, Address: 0x1f01e80, Func Offset: 0
	// Line 94, Address: 0x1f01e88, Func Offset: 0x8
	// Line 97, Address: 0x1f01eb8, Func Offset: 0x38
	// Line 98, Address: 0x1f01ed0, Func Offset: 0x50
	// Line 100, Address: 0x1f01f00, Func Offset: 0x80
	// Line 101, Address: 0x1f01f18, Func Offset: 0x98
	// Line 102, Address: 0x1f01f28, Func Offset: 0xa8
	// Line 103, Address: 0x1f01f48, Func Offset: 0xc8
	// Line 104, Address: 0x1f01f5c, Func Offset: 0xdc
	// Line 105, Address: 0x1f01f64, Func Offset: 0xe4
	// Line 109, Address: 0x1f01f78, Func Offset: 0xf8
	// Line 110, Address: 0x1f01fa4, Func Offset: 0x124
	// Line 113, Address: 0x1f01fac, Func Offset: 0x12c
	// Line 114, Address: 0x1f01fcc, Func Offset: 0x14c
	// Line 115, Address: 0x1f01fe0, Func Offset: 0x160
	// Line 116, Address: 0x1f01fe8, Func Offset: 0x168
	// Line 117, Address: 0x1f01ffc, Func Offset: 0x17c
	// Line 118, Address: 0x1f02008, Func Offset: 0x188
	// Line 119, Address: 0x1f0201c, Func Offset: 0x19c
	// Line 120, Address: 0x1f02028, Func Offset: 0x1a8
	// Line 121, Address: 0x1f0203c, Func Offset: 0x1bc
	// Line 122, Address: 0x1f02048, Func Offset: 0x1c8
	// Line 123, Address: 0x1f02054, Func Offset: 0x1d4
	// Line 125, Address: 0x1f02060, Func Offset: 0x1e0
	// Line 126, Address: 0x1f02064, Func Offset: 0x1e4
	// Func End, Address: 0x1f02074, Func Offset: 0x1f4
	// Line 411, Address: 0x1f01e80, Func Offset: 0
	// Line 417, Address: 0x1f01e8c, Func Offset: 0xc
	// Line 418, Address: 0x1f01e9c, Func Offset: 0x1c
	// Line 420, Address: 0x1f01ea4, Func Offset: 0x24
	// Line 422, Address: 0x1f01eb8, Func Offset: 0x38
	// Line 423, Address: 0x1f01ed0, Func Offset: 0x50
	// Line 425, Address: 0x1f01ee8, Func Offset: 0x68
	// Line 427, Address: 0x1f01ef8, Func Offset: 0x78
	// Line 429, Address: 0x1f01f2c, Func Offset: 0xac
	// Line 430, Address: 0x1f01f58, Func Offset: 0xd8
	// Line 431, Address: 0x1f01f78, Func Offset: 0xf8
	// Line 433, Address: 0x1f01f9c, Func Offset: 0x11c
	// Line 434, Address: 0x1f01fbc, Func Offset: 0x13c
	// Line 435, Address: 0x1f01fe0, Func Offset: 0x160
	// Line 436, Address: 0x1f01ff8, Func Offset: 0x178
	// Line 439, Address: 0x1f02014, Func Offset: 0x194
	// Line 440, Address: 0x1f02028, Func Offset: 0x1a8
	// Line 442, Address: 0x1f02050, Func Offset: 0x1d0
	// Line 444, Address: 0x1f02074, Func Offset: 0x1f4
	// Func End, Address: 0x1f02088, Func Offset: 0x208
	// Line 467, Address: 0x1f01e80, Func Offset: 0
	// Line 473, Address: 0x1f01e8c, Func Offset: 0xc
	// Line 474, Address: 0x1f01e9c, Func Offset: 0x1c
	// Line 476, Address: 0x1f01ea4, Func Offset: 0x24
	// Line 480, Address: 0x1f01edc, Func Offset: 0x5c
	// Line 481, Address: 0x1f01ef4, Func Offset: 0x74
	// Line 483, Address: 0x1f01f0c, Func Offset: 0x8c
	// Line 485, Address: 0x1f01f1c, Func Offset: 0x9c
	// Line 487, Address: 0x1f01f50, Func Offset: 0xd0
	// Line 488, Address: 0x1f01f7c, Func Offset: 0xfc
	// Line 489, Address: 0x1f01f9c, Func Offset: 0x11c
	// Line 491, Address: 0x1f01fc0, Func Offset: 0x140
	// Line 492, Address: 0x1f01fe0, Func Offset: 0x160
	// Line 493, Address: 0x1f02004, Func Offset: 0x184
	// Line 494, Address: 0x1f0201c, Func Offset: 0x19c
	// Line 497, Address: 0x1f02038, Func Offset: 0x1b8
	// Line 498, Address: 0x1f0204c, Func Offset: 0x1cc
	// Line 500, Address: 0x1f02074, Func Offset: 0x1f4
	// Line 503, Address: 0x1f02098, Func Offset: 0x218
	// Func End, Address: 0x1f020ac, Func Offset: 0x22c
	// Line 530, Address: 0x1f01e80, Func Offset: 0
	// Line 536, Address: 0x1f01e8c, Func Offset: 0xc
	// Line 537, Address: 0x1f01e9c, Func Offset: 0x1c
	// Line 538, Address: 0x1f01ea4, Func Offset: 0x24
	// Line 540, Address: 0x1f01eb8, Func Offset: 0x38
	// Line 541, Address: 0x1f01ed0, Func Offset: 0x50
	// Line 543, Address: 0x1f01ee8, Func Offset: 0x68
	// Line 545, Address: 0x1f01ef8, Func Offset: 0x78
	// Line 547, Address: 0x1f01f2c, Func Offset: 0xac
	// Line 548, Address: 0x1f01f58, Func Offset: 0xd8
	// Line 549, Address: 0x1f01f78, Func Offset: 0xf8
	// Line 551, Address: 0x1f01f9c, Func Offset: 0x11c
	// Line 552, Address: 0x1f01fbc, Func Offset: 0x13c
	// Line 553, Address: 0x1f01fe0, Func Offset: 0x160
	// Line 554, Address: 0x1f01ff8, Func Offset: 0x178
	// Line 557, Address: 0x1f02014, Func Offset: 0x194
	// Line 558, Address: 0x1f02028, Func Offset: 0x1a8
	// Line 560, Address: 0x1f02050, Func Offset: 0x1d0
	// Line 563, Address: 0x1f02074, Func Offset: 0x1f4
	// Func End, Address: 0x1f02088, Func Offset: 0x208
	// Line 111, Address: 0x1f01e80, Func Offset: 0
	// Line 168, Address: 0x1f01e88, Func Offset: 0x8
	// Line 170, Address: 0x1f01eb8, Func Offset: 0x38
	// Line 171, Address: 0x1f01ed0, Func Offset: 0x50
	// Line 172, Address: 0x1f01ee4, Func Offset: 0x64
	// Line 174, Address: 0x1f01f00, Func Offset: 0x80
	// Line 175, Address: 0x1f01f10, Func Offset: 0x90
	// Line 176, Address: 0x1f01f1c, Func Offset: 0x9c
	// Line 177, Address: 0x1f01f30, Func Offset: 0xb0
	// Line 180, Address: 0x1f01f44, Func Offset: 0xc4
	// Line 181, Address: 0x1f01f70, Func Offset: 0xf0
	// Line 184, Address: 0x1f01f78, Func Offset: 0xf8
	// Line 185, Address: 0x1f01f84, Func Offset: 0x104
	// Line 186, Address: 0x1f01f98, Func Offset: 0x118
	// Line 187, Address: 0x1f01fa0, Func Offset: 0x120
	// Line 188, Address: 0x1f01fb4, Func Offset: 0x134
	// Line 189, Address: 0x1f01fc8, Func Offset: 0x148
	// Line 190, Address: 0x1f01fdc, Func Offset: 0x15c
	// Line 191, Address: 0x1f01ffc, Func Offset: 0x17c
	// Line 193, Address: 0x1f02020, Func Offset: 0x1a0
	// Line 194, Address: 0x1f02048, Func Offset: 0x1c8
	// Line 198, Address: 0x1f02054, Func Offset: 0x1d4
	// Line 200, Address: 0x1f02060, Func Offset: 0x1e0
	// Line 201, Address: 0x1f02064, Func Offset: 0x1e4
	// Func End, Address: 0x1f02074, Func Offset: 0x1f4
	// Line 91, Address: 0x1f01e80, Func Offset: 0
	// Line 100, Address: 0x1f01e88, Func Offset: 0x8
	// Line 102, Address: 0x1f01eb8, Func Offset: 0x38
	// Line 103, Address: 0x1f01ec8, Func Offset: 0x48
	// Line 104, Address: 0x1f01ed4, Func Offset: 0x54
	// Line 105, Address: 0x1f01ee8, Func Offset: 0x68
	// Line 106, Address: 0x1f01ef0, Func Offset: 0x70
	// Line 110, Address: 0x1f01f04, Func Offset: 0x84
	// Line 111, Address: 0x1f01f30, Func Offset: 0xb0
	// Line 114, Address: 0x1f01f38, Func Offset: 0xb8
	// Line 115, Address: 0x1f01f4c, Func Offset: 0xcc
	// Line 116, Address: 0x1f01f58, Func Offset: 0xd8
	// Line 117, Address: 0x1f01f60, Func Offset: 0xe0
	// Line 118, Address: 0x1f01f74, Func Offset: 0xf4
	// Line 119, Address: 0x1f01f8c, Func Offset: 0x10c
	// Line 123, Address: 0x1f01f98, Func Offset: 0x118
	// Line 125, Address: 0x1f01fa4, Func Offset: 0x124
	// Line 126, Address: 0x1f01fa8, Func Offset: 0x128
	// Func End, Address: 0x1f01fb8, Func Offset: 0x138
	// Line 109, Address: 0x1f01e80, Func Offset: 0
	// Line 110, Address: 0x1f01e88, Func Offset: 0x8
	// Line 111, Address: 0x1f01e98, Func Offset: 0x18
	// Func End, Address: 0x1f01ea8, Func Offset: 0x28
	// Line 97, Address: 0x1f01e80, Func Offset: 0
	// Line 98, Address: 0x1f01e8c, Func Offset: 0xc
	// Line 99, Address: 0x1f01e98, Func Offset: 0x18
	// Line 103, Address: 0x1f01ea4, Func Offset: 0x24
	// Line 104, Address: 0x1f01ed8, Func Offset: 0x58
	// Line 106, Address: 0x1f01f00, Func Offset: 0x80
	// Line 116, Address: 0x1f01f44, Func Offset: 0xc4
	// Line 122, Address: 0x1f01f60, Func Offset: 0xe0
	// Line 123, Address: 0x1f01f88, Func Offset: 0x108
	// Line 125, Address: 0x1f01fa4, Func Offset: 0x124
	// Line 126, Address: 0x1f01fb0, Func Offset: 0x130
	// Line 128, Address: 0x1f01fdc, Func Offset: 0x15c
	// Line 130, Address: 0x1f01fec, Func Offset: 0x16c
	// Line 131, Address: 0x1f01ff4, Func Offset: 0x174
	// Line 134, Address: 0x1f02000, Func Offset: 0x180
	// Line 135, Address: 0x1f02008, Func Offset: 0x188
	// Line 136, Address: 0x1f02014, Func Offset: 0x194
	// Line 137, Address: 0x1f02030, Func Offset: 0x1b0
	// Line 139, Address: 0x1f02068, Func Offset: 0x1e8
	// Line 142, Address: 0x1f020a8, Func Offset: 0x228
	// Line 143, Address: 0x1f020b8, Func Offset: 0x238
	// Line 144, Address: 0x1f020c8, Func Offset: 0x248
	// Line 145, Address: 0x1f020d8, Func Offset: 0x258
	// Func End, Address: 0x1f020ec, Func Offset: 0x26c
	// Line 200, Address: 0x1f01e80, Func Offset: 0
	// Line 201, Address: 0x1f01e8c, Func Offset: 0xc
	// Line 202, Address: 0x1f01ec8, Func Offset: 0x48
	// Line 203, Address: 0x1f01eec, Func Offset: 0x6c
	// Line 204, Address: 0x1f01f18, Func Offset: 0x98
	// Line 205, Address: 0x1f01f38, Func Offset: 0xb8
	// Line 206, Address: 0x1f01f64, Func Offset: 0xe4
	// Line 207, Address: 0x1f01f6c, Func Offset: 0xec
	// Line 208, Address: 0x1f01f78, Func Offset: 0xf8
	// Line 209, Address: 0x1f01fd0, Func Offset: 0x150
	// Line 211, Address: 0x1f01ff0, Func Offset: 0x170
	// Line 212, Address: 0x1f01ff4, Func Offset: 0x174
	// Func End, Address: 0x1f01ffc, Func Offset: 0x17c
	// Line 286, Address: 0x1f01e80, Func Offset: 0
	// Line 287, Address: 0x1f01e8c, Func Offset: 0xc
	// Line 288, Address: 0x1f01e98, Func Offset: 0x18
	// Line 292, Address: 0x1f01ea4, Func Offset: 0x24
	// Line 293, Address: 0x1f01ed8, Func Offset: 0x58
	// Line 295, Address: 0x1f01f00, Func Offset: 0x80
	// Line 305, Address: 0x1f01f44, Func Offset: 0xc4
	// Line 311, Address: 0x1f01f60, Func Offset: 0xe0
	// Line 312, Address: 0x1f01f88, Func Offset: 0x108
	// Line 314, Address: 0x1f01fa4, Func Offset: 0x124
	// Line 315, Address: 0x1f01fb0, Func Offset: 0x130
	// Line 317, Address: 0x1f01fdc, Func Offset: 0x15c
	// Line 319, Address: 0x1f01fe8, Func Offset: 0x168
	// Line 320, Address: 0x1f01ff0, Func Offset: 0x170
	// Line 323, Address: 0x1f01ffc, Func Offset: 0x17c
	// Line 324, Address: 0x1f02004, Func Offset: 0x184
	// Line 325, Address: 0x1f02010, Func Offset: 0x190
	// Line 326, Address: 0x1f0202c, Func Offset: 0x1ac
	// Line 328, Address: 0x1f02064, Func Offset: 0x1e4
	// Line 330, Address: 0x1f020a4, Func Offset: 0x224
	// Line 331, Address: 0x1f020b4, Func Offset: 0x234
	// Line 332, Address: 0x1f020c4, Func Offset: 0x244
	// Line 333, Address: 0x1f020d4, Func Offset: 0x254
	// Func End, Address: 0x1f020e8, Func Offset: 0x268
	// Line 106, Address: 0x1f01e80, Func Offset: 0
	// Line 109, Address: 0x1f01e88, Func Offset: 0x8
	// Line 111, Address: 0x1f01f0c, Func Offset: 0x8c
	// Line 112, Address: 0x1f01f20, Func Offset: 0xa0
	// Line 113, Address: 0x1f01f2c, Func Offset: 0xac
	// Line 117, Address: 0x1f01f40, Func Offset: 0xc0
	// Line 119, Address: 0x1f01f60, Func Offset: 0xe0
	// Line 120, Address: 0x1f01f70, Func Offset: 0xf0
	// Line 121, Address: 0x1f01f84, Func Offset: 0x104
	// Line 124, Address: 0x1f01f8c, Func Offset: 0x10c
	// Line 125, Address: 0x1f01f94, Func Offset: 0x114
	// Line 126, Address: 0x1f01f9c, Func Offset: 0x11c
	// Line 127, Address: 0x1f01fa4, Func Offset: 0x124
	// Line 128, Address: 0x1f01fc8, Func Offset: 0x148
	// Line 131, Address: 0x1f01fd0, Func Offset: 0x150
	// Line 132, Address: 0x1f01fd8, Func Offset: 0x158
	// Line 133, Address: 0x1f01fe0, Func Offset: 0x160
	// Line 134, Address: 0x1f01fec, Func Offset: 0x16c
	// Line 135, Address: 0x1f01ff4, Func Offset: 0x174
	// Line 136, Address: 0x1f02004, Func Offset: 0x184
	// Line 137, Address: 0x1f02014, Func Offset: 0x194
	// Line 138, Address: 0x1f0201c, Func Offset: 0x19c
	// Line 139, Address: 0x1f02034, Func Offset: 0x1b4
	// Line 140, Address: 0x1f02050, Func Offset: 0x1d0
	// Line 141, Address: 0x1f02064, Func Offset: 0x1e4
	// Line 142, Address: 0x1f02088, Func Offset: 0x208
	// Line 143, Address: 0x1f02098, Func Offset: 0x218
	// Line 145, Address: 0x1f020ac, Func Offset: 0x22c
	// Line 148, Address: 0x1f020b4, Func Offset: 0x234
	// Line 149, Address: 0x1f020c4, Func Offset: 0x244
	// Line 150, Address: 0x1f020d8, Func Offset: 0x258
	// Line 152, Address: 0x1f020ec, Func Offset: 0x26c
	// Line 155, Address: 0x1f020f4, Func Offset: 0x274
	// Line 156, Address: 0x1f02104, Func Offset: 0x284
	// Line 157, Address: 0x1f02118, Func Offset: 0x298
	// Line 158, Address: 0x1f02120, Func Offset: 0x2a0
	// Line 159, Address: 0x1f02128, Func Offset: 0x2a8
	// Line 160, Address: 0x1f0213c, Func Offset: 0x2bc
	// Line 161, Address: 0x1f02150, Func Offset: 0x2d0
	// Line 162, Address: 0x1f02164, Func Offset: 0x2e4
	// Line 164, Address: 0x1f02190, Func Offset: 0x310
	// Line 165, Address: 0x1f021b8, Func Offset: 0x338
	// Line 168, Address: 0x1f021cc, Func Offset: 0x34c
	// Line 169, Address: 0x1f021e4, Func Offset: 0x364
	// Line 170, Address: 0x1f02200, Func Offset: 0x380
	// Line 171, Address: 0x1f0221c, Func Offset: 0x39c
	// Line 172, Address: 0x1f02248, Func Offset: 0x3c8
	// Line 173, Address: 0x1f0226c, Func Offset: 0x3ec
	// Line 174, Address: 0x1f02294, Func Offset: 0x414
	// Line 175, Address: 0x1f022b4, Func Offset: 0x434
	// Line 177, Address: 0x1f022ec, Func Offset: 0x46c
	// Line 180, Address: 0x1f022f4, Func Offset: 0x474
	// Line 181, Address: 0x1f0230c, Func Offset: 0x48c
	// Line 182, Address: 0x1f02320, Func Offset: 0x4a0
	// Line 183, Address: 0x1f02334, Func Offset: 0x4b4
	// Line 184, Address: 0x1f02348, Func Offset: 0x4c8
	// Line 186, Address: 0x1f02374, Func Offset: 0x4f4
	// Line 187, Address: 0x1f0239c, Func Offset: 0x51c
	// Line 188, Address: 0x1f023c8, Func Offset: 0x548
	// Line 189, Address: 0x1f023ec, Func Offset: 0x56c
	// Line 190, Address: 0x1f02414, Func Offset: 0x594
	// Line 191, Address: 0x1f02434, Func Offset: 0x5b4
	// Line 192, Address: 0x1f02468, Func Offset: 0x5e8
	// Line 193, Address: 0x1f0247c, Func Offset: 0x5fc
	// Line 196, Address: 0x1f02484, Func Offset: 0x604
	// Line 197, Address: 0x1f0249c, Func Offset: 0x61c
	// Line 198, Address: 0x1f024a4, Func Offset: 0x624
	// Line 199, Address: 0x1f024ac, Func Offset: 0x62c
	// Line 201, Address: 0x1f024d4, Func Offset: 0x654
	// Line 202, Address: 0x1f024e0, Func Offset: 0x660
	// Line 203, Address: 0x1f024f0, Func Offset: 0x670
	// Line 205, Address: 0x1f02504, Func Offset: 0x684
	// Line 206, Address: 0x1f02508, Func Offset: 0x688
	// Line 207, Address: 0x1f0251c, Func Offset: 0x69c
	// Line 208, Address: 0x1f02528, Func Offset: 0x6a8
	// Line 211, Address: 0x1f02534, Func Offset: 0x6b4
	// Line 212, Address: 0x1f02538, Func Offset: 0x6b8
	// Func End, Address: 0x1f02548, Func Offset: 0x6c8
	// Line 139, Address: 0x1f01e80, Func Offset: 0
	// Line 177, Address: 0x1f01e88, Func Offset: 0x8
	// Line 179, Address: 0x1f01eb8, Func Offset: 0x38
	// Line 180, Address: 0x1f01ed0, Func Offset: 0x50
	// Line 181, Address: 0x1f01ee4, Func Offset: 0x64
	// Line 183, Address: 0x1f01f00, Func Offset: 0x80
	// Line 185, Address: 0x1f01f1c, Func Offset: 0x9c
	// Line 187, Address: 0x1f01f38, Func Offset: 0xb8
	// Line 188, Address: 0x1f01f48, Func Offset: 0xc8
	// Line 189, Address: 0x1f01f54, Func Offset: 0xd4
	// Line 190, Address: 0x1f01f68, Func Offset: 0xe8
	// Line 193, Address: 0x1f01f7c, Func Offset: 0xfc
	// Line 194, Address: 0x1f01fa8, Func Offset: 0x128
	// Line 197, Address: 0x1f01fb0, Func Offset: 0x130
	// Line 198, Address: 0x1f01fbc, Func Offset: 0x13c
	// Line 199, Address: 0x1f01fc8, Func Offset: 0x148
	// Line 200, Address: 0x1f01fdc, Func Offset: 0x15c
	// Line 201, Address: 0x1f01fe4, Func Offset: 0x164
	// Line 203, Address: 0x1f02004, Func Offset: 0x184
	// Line 204, Address: 0x1f02018, Func Offset: 0x198
	// Line 205, Address: 0x1f0202c, Func Offset: 0x1ac
	// Line 206, Address: 0x1f02040, Func Offset: 0x1c0
	// Line 207, Address: 0x1f02054, Func Offset: 0x1d4
	// Line 209, Address: 0x1f0207c, Func Offset: 0x1fc
	// Line 211, Address: 0x1f020a4, Func Offset: 0x224
	// Line 212, Address: 0x1f020b0, Func Offset: 0x230
	// Line 213, Address: 0x1f020bc, Func Offset: 0x23c
	// Line 215, Address: 0x1f020c8, Func Offset: 0x248
	// Line 216, Address: 0x1f020cc, Func Offset: 0x24c
	// Func End, Address: 0x1f020dc, Func Offset: 0x25c
	// Line 103, Address: 0x1f01e80, Func Offset: 0
	// Line 119, Address: 0x1f01e88, Func Offset: 0x8
	// Line 121, Address: 0x1f01eb8, Func Offset: 0x38
	// Line 122, Address: 0x1f01ec8, Func Offset: 0x48
	// Line 123, Address: 0x1f01ed4, Func Offset: 0x54
	// Line 124, Address: 0x1f01ee8, Func Offset: 0x68
	// Line 128, Address: 0x1f01efc, Func Offset: 0x7c
	// Line 129, Address: 0x1f01f28, Func Offset: 0xa8
	// Line 132, Address: 0x1f01f30, Func Offset: 0xb0
	// Line 133, Address: 0x1f01f3c, Func Offset: 0xbc
	// Line 134, Address: 0x1f01f50, Func Offset: 0xd0
	// Line 135, Address: 0x1f01f58, Func Offset: 0xd8
	// Line 136, Address: 0x1f01f64, Func Offset: 0xe4
	// Line 137, Address: 0x1f01f70, Func Offset: 0xf0
	// Line 139, Address: 0x1f01f7c, Func Offset: 0xfc
	// Line 140, Address: 0x1f01f80, Func Offset: 0x100
	// Func End, Address: 0x1f01f90, Func Offset: 0x110
	// Line 73, Address: 0x1f01e80, Func Offset: 0
	// Line 74, Address: 0x1f01e88, Func Offset: 0x8
	// Line 76, Address: 0x1f01eb8, Func Offset: 0x38
	// Func End, Address: 0x1f01ec8, Func Offset: 0x48
	// Line 33, Address: 0x1f01e80, Func Offset: 0
	// Line 46, Address: 0x1f01ea4, Func Offset: 0x24
	// Line 54, Address: 0x1f01eac, Func Offset: 0x2c
	// Line 57, Address: 0x1f01eb8, Func Offset: 0x38
	// Line 61, Address: 0x1f01ed0, Func Offset: 0x50
	// Line 62, Address: 0x1f01ee8, Func Offset: 0x68
	// Line 63, Address: 0x1f01ef0, Func Offset: 0x70
	// Line 64, Address: 0x1f01ef8, Func Offset: 0x78
	// Line 65, Address: 0x1f01f04, Func Offset: 0x84
	// Line 66, Address: 0x1f01f0c, Func Offset: 0x8c
	// Line 67, Address: 0x1f01f18, Func Offset: 0x98
	// Line 68, Address: 0x1f01f20, Func Offset: 0xa0
	// Line 70, Address: 0x1f01f2c, Func Offset: 0xac
	// Line 71, Address: 0x1f01f3c, Func Offset: 0xbc
	// Line 73, Address: 0x1f01f4c, Func Offset: 0xcc
	// Line 74, Address: 0x1f01f58, Func Offset: 0xd8
	// Line 75, Address: 0x1f01f88, Func Offset: 0x108
	// Line 76, Address: 0x1f01fd8, Func Offset: 0x158
	// Line 78, Address: 0x1f02010, Func Offset: 0x190
	// Line 79, Address: 0x1f02028, Func Offset: 0x1a8
	// Line 80, Address: 0x1f02030, Func Offset: 0x1b0
	// Line 81, Address: 0x1f02038, Func Offset: 0x1b8
	// Line 82, Address: 0x1f02040, Func Offset: 0x1c0
	// Line 83, Address: 0x1f02048, Func Offset: 0x1c8
	// Line 84, Address: 0x1f02050, Func Offset: 0x1d0
	// Line 85, Address: 0x1f02058, Func Offset: 0x1d8
	// Line 87, Address: 0x1f0205c, Func Offset: 0x1dc
	// Line 89, Address: 0x1f02064, Func Offset: 0x1e4
	// Line 93, Address: 0x1f02074, Func Offset: 0x1f4
	// Line 95, Address: 0x1f02090, Func Offset: 0x210
	// Line 96, Address: 0x1f020a4, Func Offset: 0x224
	// Line 97, Address: 0x1f020b8, Func Offset: 0x238
	// Line 100, Address: 0x1f020c0, Func Offset: 0x240
	// Line 101, Address: 0x1f020cc, Func Offset: 0x24c
	// Line 105, Address: 0x1f020e0, Func Offset: 0x260
	// Line 107, Address: 0x1f02110, Func Offset: 0x290
	// Line 108, Address: 0x1f02124, Func Offset: 0x2a4
	// Line 110, Address: 0x1f0212c, Func Offset: 0x2ac
	// Line 111, Address: 0x1f02140, Func Offset: 0x2c0
	// Line 114, Address: 0x1f02148, Func Offset: 0x2c8
	// Line 115, Address: 0x1f0215c, Func Offset: 0x2dc
	// Line 117, Address: 0x1f02164, Func Offset: 0x2e4
	// Line 122, Address: 0x1f02178, Func Offset: 0x2f8
	// Line 123, Address: 0x1f0218c, Func Offset: 0x30c
	// Line 124, Address: 0x1f021a0, Func Offset: 0x320
	// Func End, Address: 0x1f021cc, Func Offset: 0x34c
	// Line 96, Address: 0x1f01e80, Func Offset: 0
	// Line 143, Address: 0x1f01e9c, Func Offset: 0x1c
	// Line 145, Address: 0x1f01ecc, Func Offset: 0x4c
	// Line 146, Address: 0x1f01edc, Func Offset: 0x5c
	// Line 147, Address: 0x1f01ee8, Func Offset: 0x68
	// Line 148, Address: 0x1f01efc, Func Offset: 0x7c
	// Line 149, Address: 0x1f01f04, Func Offset: 0x84
	// Line 153, Address: 0x1f01f18, Func Offset: 0x98
	// Line 154, Address: 0x1f01f2c, Func Offset: 0xac
	// Line 155, Address: 0x1f01f30, Func Offset: 0xb0
	// Line 156, Address: 0x1f01f44, Func Offset: 0xc4
	// Line 157, Address: 0x1f01f48, Func Offset: 0xc8
	// Line 158, Address: 0x1f01f4c, Func Offset: 0xcc
	// Line 159, Address: 0x1f01f84, Func Offset: 0x104
	// Line 160, Address: 0x1f01f90, Func Offset: 0x110
	// Line 162, Address: 0x1f0200c, Func Offset: 0x18c
	// Line 163, Address: 0x1f02010, Func Offset: 0x190
	// Line 173, Address: 0x1f02030, Func Offset: 0x1b0
	// Line 174, Address: 0x1f02038, Func Offset: 0x1b8
	// Line 176, Address: 0x1f02040, Func Offset: 0x1c0
	// Line 177, Address: 0x1f02050, Func Offset: 0x1d0
	// Line 178, Address: 0x1f02074, Func Offset: 0x1f4
	// Line 179, Address: 0x1f02098, Func Offset: 0x218
	// Line 180, Address: 0x1f020bc, Func Offset: 0x23c
	// Line 181, Address: 0x1f020d8, Func Offset: 0x258
	// Line 184, Address: 0x1f020e0, Func Offset: 0x260
	// Line 185, Address: 0x1f020f4, Func Offset: 0x274
	// Line 186, Address: 0x1f02100, Func Offset: 0x280
	// Line 187, Address: 0x1f02114, Func Offset: 0x294
	// Line 188, Address: 0x1f0211c, Func Offset: 0x29c
	// Line 189, Address: 0x1f02128, Func Offset: 0x2a8
	// Line 190, Address: 0x1f02134, Func Offset: 0x2b4
	// Line 192, Address: 0x1f0215c, Func Offset: 0x2dc
	// Line 194, Address: 0x1f02184, Func Offset: 0x304
	// Line 200, Address: 0x1f02190, Func Offset: 0x310
	// Line 202, Address: 0x1f0219c, Func Offset: 0x31c
	// Line 203, Address: 0x1f021a0, Func Offset: 0x320
	// Func End, Address: 0x1f021c4, Func Offset: 0x344
	// Line 87, Address: 0x1f01e80, Func Offset: 0
	// Line 134, Address: 0x1f01e98, Func Offset: 0x18
	// Line 136, Address: 0x1f01ec8, Func Offset: 0x48
	// Line 137, Address: 0x1f01ed8, Func Offset: 0x58
	// Line 138, Address: 0x1f01ee4, Func Offset: 0x64
	// Line 139, Address: 0x1f01ef8, Func Offset: 0x78
	// Line 140, Address: 0x1f01f00, Func Offset: 0x80
	// Line 144, Address: 0x1f01f14, Func Offset: 0x94
	// Line 145, Address: 0x1f01f28, Func Offset: 0xa8
	// Line 146, Address: 0x1f01f2c, Func Offset: 0xac
	// Line 147, Address: 0x1f01f40, Func Offset: 0xc0
	// Line 148, Address: 0x1f01f44, Func Offset: 0xc4
	// Line 149, Address: 0x1f01f7c, Func Offset: 0xfc
	// Line 150, Address: 0x1f01f88, Func Offset: 0x108
	// Line 152, Address: 0x1f02004, Func Offset: 0x184
	// Line 153, Address: 0x1f02008, Func Offset: 0x188
	// Line 154, Address: 0x1f02028, Func Offset: 0x1a8
	// Line 155, Address: 0x1f02054, Func Offset: 0x1d4
	// Line 157, Address: 0x1f02060, Func Offset: 0x1e0
	// Line 158, Address: 0x1f02070, Func Offset: 0x1f0
	// Line 159, Address: 0x1f02094, Func Offset: 0x214
	// Line 160, Address: 0x1f020b8, Func Offset: 0x238
	// Line 161, Address: 0x1f020d4, Func Offset: 0x254
	// Line 164, Address: 0x1f020dc, Func Offset: 0x25c
	// Line 165, Address: 0x1f020f0, Func Offset: 0x270
	// Line 166, Address: 0x1f020fc, Func Offset: 0x27c
	// Line 167, Address: 0x1f02110, Func Offset: 0x290
	// Line 168, Address: 0x1f02118, Func Offset: 0x298
	// Line 169, Address: 0x1f02124, Func Offset: 0x2a4
	// Line 170, Address: 0x1f02130, Func Offset: 0x2b0
	// Line 172, Address: 0x1f02158, Func Offset: 0x2d8
	// Line 174, Address: 0x1f02180, Func Offset: 0x300
	// Line 176, Address: 0x1f0218c, Func Offset: 0x30c
	// Line 178, Address: 0x1f021a4, Func Offset: 0x324
	// Line 180, Address: 0x1f021b0, Func Offset: 0x330
	// Line 181, Address: 0x1f021b4, Func Offset: 0x334
	// Func End, Address: 0x1f021d4, Func Offset: 0x354
	// Line 96, Address: 0x1f01e80, Func Offset: 0
	// Line 142, Address: 0x1f01e98, Func Offset: 0x18
	// Line 144, Address: 0x1f01ec8, Func Offset: 0x48
	// Line 145, Address: 0x1f01ed8, Func Offset: 0x58
	// Line 146, Address: 0x1f01ee4, Func Offset: 0x64
	// Line 147, Address: 0x1f01ef8, Func Offset: 0x78
	// Line 148, Address: 0x1f01f00, Func Offset: 0x80
	// Line 152, Address: 0x1f01f14, Func Offset: 0x94
	// Line 153, Address: 0x1f01f28, Func Offset: 0xa8
	// Line 154, Address: 0x1f01f2c, Func Offset: 0xac
	// Line 155, Address: 0x1f01f40, Func Offset: 0xc0
	// Line 156, Address: 0x1f01f44, Func Offset: 0xc4
	// Line 157, Address: 0x1f01f7c, Func Offset: 0xfc
	// Line 158, Address: 0x1f01f88, Func Offset: 0x108
	// Line 160, Address: 0x1f02004, Func Offset: 0x184
	// Line 161, Address: 0x1f02008, Func Offset: 0x188
	// Line 162, Address: 0x1f02028, Func Offset: 0x1a8
	// Line 163, Address: 0x1f02054, Func Offset: 0x1d4
	// Line 165, Address: 0x1f02060, Func Offset: 0x1e0
	// Line 166, Address: 0x1f02070, Func Offset: 0x1f0
	// Line 167, Address: 0x1f02094, Func Offset: 0x214
	// Line 168, Address: 0x1f020b8, Func Offset: 0x238
	// Line 169, Address: 0x1f020d4, Func Offset: 0x254
	// Line 172, Address: 0x1f020dc, Func Offset: 0x25c
	// Line 173, Address: 0x1f020f0, Func Offset: 0x270
	// Line 174, Address: 0x1f020fc, Func Offset: 0x27c
	// Line 175, Address: 0x1f02110, Func Offset: 0x290
	// Line 176, Address: 0x1f02118, Func Offset: 0x298
	// Line 177, Address: 0x1f02124, Func Offset: 0x2a4
	// Line 178, Address: 0x1f02130, Func Offset: 0x2b0
	// Line 180, Address: 0x1f02158, Func Offset: 0x2d8
	// Line 182, Address: 0x1f02180, Func Offset: 0x300
	// Line 184, Address: 0x1f0218c, Func Offset: 0x30c
	// Line 186, Address: 0x1f021a4, Func Offset: 0x324
	// Line 188, Address: 0x1f021b0, Func Offset: 0x330
	// Line 189, Address: 0x1f021b4, Func Offset: 0x334
	// Func End, Address: 0x1f021d4, Func Offset: 0x354
	// Line 87, Address: 0x1f01e80, Func Offset: 0
	// Line 130, Address: 0x1f01e98, Func Offset: 0x18
	// Line 132, Address: 0x1f01ec8, Func Offset: 0x48
	// Line 133, Address: 0x1f01ed8, Func Offset: 0x58
	// Line 134, Address: 0x1f01ee4, Func Offset: 0x64
	// Line 135, Address: 0x1f01ef8, Func Offset: 0x78
	// Line 136, Address: 0x1f01f00, Func Offset: 0x80
	// Line 140, Address: 0x1f01f14, Func Offset: 0x94
	// Line 141, Address: 0x1f01f28, Func Offset: 0xa8
	// Line 142, Address: 0x1f01f2c, Func Offset: 0xac
	// Line 143, Address: 0x1f01f40, Func Offset: 0xc0
	// Line 144, Address: 0x1f01f44, Func Offset: 0xc4
	// Line 145, Address: 0x1f01f7c, Func Offset: 0xfc
	// Line 146, Address: 0x1f01f88, Func Offset: 0x108
	// Line 148, Address: 0x1f02004, Func Offset: 0x184
	// Line 149, Address: 0x1f02008, Func Offset: 0x188
	// Line 150, Address: 0x1f02028, Func Offset: 0x1a8
	// Line 151, Address: 0x1f02054, Func Offset: 0x1d4
	// Line 153, Address: 0x1f02060, Func Offset: 0x1e0
	// Line 154, Address: 0x1f02070, Func Offset: 0x1f0
	// Line 155, Address: 0x1f02094, Func Offset: 0x214
	// Line 156, Address: 0x1f020b8, Func Offset: 0x238
	// Line 157, Address: 0x1f020d4, Func Offset: 0x254
	// Line 160, Address: 0x1f020dc, Func Offset: 0x25c
	// Line 161, Address: 0x1f020f0, Func Offset: 0x270
	// Line 162, Address: 0x1f020fc, Func Offset: 0x27c
	// Line 163, Address: 0x1f02110, Func Offset: 0x290
	// Line 164, Address: 0x1f02118, Func Offset: 0x298
	// Line 165, Address: 0x1f02124, Func Offset: 0x2a4
	// Line 166, Address: 0x1f02130, Func Offset: 0x2b0
	// Line 168, Address: 0x1f02158, Func Offset: 0x2d8
	// Line 170, Address: 0x1f02180, Func Offset: 0x300
	// Line 172, Address: 0x1f0218c, Func Offset: 0x30c
	// Line 174, Address: 0x1f021a4, Func Offset: 0x324
	// Line 176, Address: 0x1f021b0, Func Offset: 0x330
	// Line 177, Address: 0x1f021b4, Func Offset: 0x334
	// Func End, Address: 0x1f021d4, Func Offset: 0x354
	// Line 60, Address: 0x1f01e80, Func Offset: 0
	// Line 89, Address: 0x1f01e88, Func Offset: 0x8
	// Line 91, Address: 0x1f01eb8, Func Offset: 0x38
	// Line 92, Address: 0x1f01ed0, Func Offset: 0x50
	// Line 93, Address: 0x1f01ee4, Func Offset: 0x64
	// Line 94, Address: 0x1f01ef0, Func Offset: 0x70
	// Line 95, Address: 0x1f01f04, Func Offset: 0x84
	// Line 99, Address: 0x1f01f18, Func Offset: 0x98
	// Line 100, Address: 0x1f01f44, Func Offset: 0xc4
	// Line 103, Address: 0x1f01f4c, Func Offset: 0xcc
	// Line 104, Address: 0x1f01f60, Func Offset: 0xe0
	// Line 105, Address: 0x1f01f68, Func Offset: 0xe8
	// Line 106, Address: 0x1f01f74, Func Offset: 0xf4
	// Line 107, Address: 0x1f01f80, Func Offset: 0x100
	// Line 109, Address: 0x1f01f8c, Func Offset: 0x10c
	// Line 110, Address: 0x1f01f90, Func Offset: 0x110
	// Func End, Address: 0x1f01fa0, Func Offset: 0x120
}

// 
// Start address: 0x1f02140
int EvProgAngelaInGrave()
{
	int hide_ca11;
	SubCharacter* scp;
	DramaDemo_PlayInfo grave;
	DramaDemo_MessageTime movie_msg[6];
	// Line 190, Address: 0x1f02140, Func Offset: 0
	// Line 235, Address: 0x1f0214c, Func Offset: 0xc
	// Line 238, Address: 0x1f02150, Func Offset: 0x10
	// Line 240, Address: 0x1f021bc, Func Offset: 0x7c
	// Line 241, Address: 0x1f021d0, Func Offset: 0x90
	// Line 242, Address: 0x1f021dc, Func Offset: 0x9c
	// Line 243, Address: 0x1f021f0, Func Offset: 0xb0
	// Line 244, Address: 0x1f021fc, Func Offset: 0xbc
	// Line 247, Address: 0x1f02210, Func Offset: 0xd0
	// Line 248, Address: 0x1f02234, Func Offset: 0xf4
	// Line 249, Address: 0x1f02238, Func Offset: 0xf8
	// Line 251, Address: 0x1f02268, Func Offset: 0x128
	// Line 253, Address: 0x1f0227c, Func Offset: 0x13c
	// Line 256, Address: 0x1f02284, Func Offset: 0x144
	// Line 257, Address: 0x1f02288, Func Offset: 0x148
	// Line 259, Address: 0x1f022a4, Func Offset: 0x164
	// Line 260, Address: 0x1f022cc, Func Offset: 0x18c
	// Line 263, Address: 0x1f022d4, Func Offset: 0x194
	// Line 264, Address: 0x1f022e4, Func Offset: 0x1a4
	// Line 265, Address: 0x1f022e8, Func Offset: 0x1a8
	// Line 266, Address: 0x1f022fc, Func Offset: 0x1bc
	// Line 267, Address: 0x1f02304, Func Offset: 0x1c4
	// Line 268, Address: 0x1f02318, Func Offset: 0x1d8
	// Line 271, Address: 0x1f02320, Func Offset: 0x1e0
	// Line 272, Address: 0x1f02324, Func Offset: 0x1e4
	// Line 273, Address: 0x1f0232c, Func Offset: 0x1ec
	// Line 274, Address: 0x1f0233c, Func Offset: 0x1fc
	// Line 275, Address: 0x1f02348, Func Offset: 0x208
	// Line 276, Address: 0x1f0235c, Func Offset: 0x21c
	// Line 277, Address: 0x1f0236c, Func Offset: 0x22c
	// Line 281, Address: 0x1f02380, Func Offset: 0x240
	// Line 282, Address: 0x1f023b4, Func Offset: 0x274
	// Line 283, Address: 0x1f023b8, Func Offset: 0x278
	// Line 286, Address: 0x1f023c0, Func Offset: 0x280
	// Line 287, Address: 0x1f023c8, Func Offset: 0x288
	// Line 288, Address: 0x1f023dc, Func Offset: 0x29c
	// Line 292, Address: 0x1f023e4, Func Offset: 0x2a4
	// Line 293, Address: 0x1f023f4, Func Offset: 0x2b4
	// Line 294, Address: 0x1f02408, Func Offset: 0x2c8
	// Line 295, Address: 0x1f0241c, Func Offset: 0x2dc
	// Line 296, Address: 0x1f02430, Func Offset: 0x2f0
	// Line 297, Address: 0x1f02438, Func Offset: 0x2f8
	// Line 298, Address: 0x1f02444, Func Offset: 0x304
	// Line 299, Address: 0x1f02450, Func Offset: 0x310
	// Line 300, Address: 0x1f02478, Func Offset: 0x338
	// Line 302, Address: 0x1f024a8, Func Offset: 0x368
	// Line 303, Address: 0x1f024bc, Func Offset: 0x37c
	// Line 304, Address: 0x1f024cc, Func Offset: 0x38c
	// Line 305, Address: 0x1f024ec, Func Offset: 0x3ac
	// Line 306, Address: 0x1f024f8, Func Offset: 0x3b8
	// Line 309, Address: 0x1f02504, Func Offset: 0x3c4
	// Line 315, Address: 0x1f0250c, Func Offset: 0x3cc
	// Line 318, Address: 0x1f0251c, Func Offset: 0x3dc
	// Line 319, Address: 0x1f02520, Func Offset: 0x3e0
	// Func End, Address: 0x1f02534, Func Offset: 0x3f4
}

// 
// Start address: 0x1f02540
int EvProgGraveSureQuiet()
{
	SubCharacter* scp;
	DramaDemo_PlayInfo grave;
	// Line 325, Address: 0x1f02540, Func Offset: 0
	// Line 348, Address: 0x1f0254c, Func Offset: 0xc
	// Line 350, Address: 0x1f0257c, Func Offset: 0x3c
	// Line 351, Address: 0x1f0258c, Func Offset: 0x4c
	// Line 352, Address: 0x1f02598, Func Offset: 0x58
	// Line 353, Address: 0x1f025ac, Func Offset: 0x6c
	// Line 357, Address: 0x1f025c0, Func Offset: 0x80
	// Line 358, Address: 0x1f025ec, Func Offset: 0xac
	// Line 361, Address: 0x1f025f4, Func Offset: 0xb4
	// Line 362, Address: 0x1f02608, Func Offset: 0xc8
	// Line 363, Address: 0x1f0261c, Func Offset: 0xdc
	// Line 364, Address: 0x1f02624, Func Offset: 0xe4
	// Line 365, Address: 0x1f02630, Func Offset: 0xf0
	// Line 366, Address: 0x1f0263c, Func Offset: 0xfc
	// Line 368, Address: 0x1f0266c, Func Offset: 0x12c
	// Line 369, Address: 0x1f02680, Func Offset: 0x140
	// Line 370, Address: 0x1f02690, Func Offset: 0x150
	// Line 371, Address: 0x1f026b0, Func Offset: 0x170
	// Line 372, Address: 0x1f026e0, Func Offset: 0x1a0
	// Line 373, Address: 0x1f026f8, Func Offset: 0x1b8
	// Line 375, Address: 0x1f02704, Func Offset: 0x1c4
	// Line 376, Address: 0x1f02708, Func Offset: 0x1c8
	// Func End, Address: 0x1f0271c, Func Offset: 0x1dc
}

// 
// Start address: 0x1f02720
int EvProgGraveLookingFor()
{
	SubCharacter* scp;
	DramaDemo_PlayInfo grave;
	// Line 381, Address: 0x1f02720, Func Offset: 0
	// Line 403, Address: 0x1f0272c, Func Offset: 0xc
	// Line 405, Address: 0x1f0275c, Func Offset: 0x3c
	// Line 406, Address: 0x1f0276c, Func Offset: 0x4c
	// Line 407, Address: 0x1f02778, Func Offset: 0x58
	// Line 408, Address: 0x1f0278c, Func Offset: 0x6c
	// Line 412, Address: 0x1f027a0, Func Offset: 0x80
	// Line 413, Address: 0x1f027cc, Func Offset: 0xac
	// Line 416, Address: 0x1f027d4, Func Offset: 0xb4
	// Line 417, Address: 0x1f027e8, Func Offset: 0xc8
	// Line 418, Address: 0x1f027fc, Func Offset: 0xdc
	// Line 419, Address: 0x1f02804, Func Offset: 0xe4
	// Line 420, Address: 0x1f02810, Func Offset: 0xf0
	// Line 421, Address: 0x1f0281c, Func Offset: 0xfc
	// Line 423, Address: 0x1f0284c, Func Offset: 0x12c
	// Line 424, Address: 0x1f02860, Func Offset: 0x140
	// Line 425, Address: 0x1f02870, Func Offset: 0x150
	// Line 426, Address: 0x1f02890, Func Offset: 0x170
	// Line 427, Address: 0x1f028c0, Func Offset: 0x1a0
	// Line 428, Address: 0x1f028d8, Func Offset: 0x1b8
	// Line 430, Address: 0x1f028e4, Func Offset: 0x1c4
	// Line 431, Address: 0x1f028e8, Func Offset: 0x1c8
	// Func End, Address: 0x1f028fc, Func Offset: 0x1dc
}

// 
// Start address: 0x1f02900
int EvProgLastScene()
{
	<unknown fundamental type (0xa510)>* anim_adr;
	DramaDemo_PlayInfo info;
	CharaData_DemoList chara_data[2];
	// Line 436, Address: 0x1f02900, Func Offset: 0
	// Line 452, Address: 0x1f02908, Func Offset: 0x8
	// Line 454, Address: 0x1f0295c, Func Offset: 0x5c
	// Line 457, Address: 0x1f02974, Func Offset: 0x74
	// Line 458, Address: 0x1f02988, Func Offset: 0x88
	// Line 460, Address: 0x1f029a4, Func Offset: 0xa4
	// Line 461, Address: 0x1f029b4, Func Offset: 0xb4
	// Line 462, Address: 0x1f029d4, Func Offset: 0xd4
	// Line 463, Address: 0x1f029e0, Func Offset: 0xe0
	// Line 464, Address: 0x1f029f4, Func Offset: 0xf4
	// Line 468, Address: 0x1f02a08, Func Offset: 0x108
	// Line 469, Address: 0x1f02a20, Func Offset: 0x120
	// Line 470, Address: 0x1f02a30, Func Offset: 0x130
	// Line 472, Address: 0x1f02a44, Func Offset: 0x144
	// Line 475, Address: 0x1f02a4c, Func Offset: 0x14c
	// Line 476, Address: 0x1f02a70, Func Offset: 0x170
	// Line 479, Address: 0x1f02a78, Func Offset: 0x178
	// Line 480, Address: 0x1f02a90, Func Offset: 0x190
	// Line 481, Address: 0x1f02ab8, Func Offset: 0x1b8
	// Line 484, Address: 0x1f02ac0, Func Offset: 0x1c0
	// Line 485, Address: 0x1f02ae4, Func Offset: 0x1e4
	// Line 488, Address: 0x1f02aec, Func Offset: 0x1ec
	// Line 489, Address: 0x1f02af4, Func Offset: 0x1f4
	// Line 490, Address: 0x1f02b14, Func Offset: 0x214
	// Line 491, Address: 0x1f02b28, Func Offset: 0x228
	// Line 493, Address: 0x1f02b58, Func Offset: 0x258
	// Line 494, Address: 0x1f02b6c, Func Offset: 0x26c
	// Line 496, Address: 0x1f02b74, Func Offset: 0x274
	// Line 497, Address: 0x1f02b88, Func Offset: 0x288
	// Line 499, Address: 0x1f02b90, Func Offset: 0x290
	// Line 500, Address: 0x1f02ba4, Func Offset: 0x2a4
	// Line 502, Address: 0x1f02bac, Func Offset: 0x2ac
	// Line 505, Address: 0x1f02bc0, Func Offset: 0x2c0
	// Line 506, Address: 0x1f02bd4, Func Offset: 0x2d4
	// Line 507, Address: 0x1f02c08, Func Offset: 0x308
	// Line 509, Address: 0x1f02c14, Func Offset: 0x314
	// Line 510, Address: 0x1f02c18, Func Offset: 0x318
	// Func End, Address: 0x1f02c28, Func Offset: 0x328
	// Line 330, Address: 0x1f02900, Func Offset: 0
	// Line 331, Address: 0x1f02908, Func Offset: 0x8
	// Line 334, Address: 0x1f0295c, Func Offset: 0x5c
	// Line 335, Address: 0x1f02970, Func Offset: 0x70
	// Line 336, Address: 0x1f0297c, Func Offset: 0x7c
	// Line 337, Address: 0x1f02984, Func Offset: 0x84
	// Line 338, Address: 0x1f0298c, Func Offset: 0x8c
	// Line 341, Address: 0x1f029a0, Func Offset: 0xa0
	// Line 343, Address: 0x1f029c4, Func Offset: 0xc4
	// Line 346, Address: 0x1f029d8, Func Offset: 0xd8
	// Line 347, Address: 0x1f029e0, Func Offset: 0xe0
	// Line 348, Address: 0x1f029e8, Func Offset: 0xe8
	// Line 349, Address: 0x1f029f0, Func Offset: 0xf0
	// Line 350, Address: 0x1f029f8, Func Offset: 0xf8
	// Line 351, Address: 0x1f02a20, Func Offset: 0x120
	// Line 354, Address: 0x1f02a28, Func Offset: 0x128
	// Line 355, Address: 0x1f02a30, Func Offset: 0x130
	// Line 356, Address: 0x1f02a38, Func Offset: 0x138
	// Line 357, Address: 0x1f02a44, Func Offset: 0x144
	// Line 358, Address: 0x1f02a4c, Func Offset: 0x14c
	// Line 359, Address: 0x1f02a54, Func Offset: 0x154
	// Line 360, Address: 0x1f02a70, Func Offset: 0x170
	// Line 361, Address: 0x1f02a84, Func Offset: 0x184
	// Line 363, Address: 0x1f02a94, Func Offset: 0x194
	// Line 366, Address: 0x1f02a9c, Func Offset: 0x19c
	// Line 367, Address: 0x1f02ac0, Func Offset: 0x1c0
	// Line 370, Address: 0x1f02ac8, Func Offset: 0x1c8
	// Line 371, Address: 0x1f02adc, Func Offset: 0x1dc
	// Line 372, Address: 0x1f02af0, Func Offset: 0x1f0
	// Line 375, Address: 0x1f02b00, Func Offset: 0x200
	// Line 376, Address: 0x1f02b20, Func Offset: 0x220
	// Line 380, Address: 0x1f02b2c, Func Offset: 0x22c
	// Line 381, Address: 0x1f02b30, Func Offset: 0x230
	// Func End, Address: 0x1f02b40, Func Offset: 0x240
}

// 
// Start address: 0x1f02c30
int EvProgGetChainsaw()
{
	// Line 515, Address: 0x1f02c30, Func Offset: 0
	// Line 516, Address: 0x1f02c38, Func Offset: 0x8
	// Line 517, Address: 0x1f02c48, Func Offset: 0x18
	// Func End, Address: 0x1f02c58, Func Offset: 0x28
}

// 
// Start address: 0x1f02c60
void EvStageInit()
{
	// Line 522, Address: 0x1f02c60, Func Offset: 0
	// Line 523, Address: 0x1f02c68, Func Offset: 0x8
	// Line 524, Address: 0x1f02c70, Func Offset: 0x10
	// Func End, Address: 0x1f02c80, Func Offset: 0x20
}

// 
// Start address: 0x1f02c80
void EvRoomInit()
{
	float vec0[4];
	SubCharacter* scp;
	CharaData_DemoList chara_data[3];
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
// Start address: 0x1f02db0
void EvSoundCallAfterLoad()
{
	// Line 565, Address: 0x1f02db0, Func Offset: 0
	// Line 566, Address: 0x1f02db8, Func Offset: 0x8
	// Line 567, Address: 0x1f02dd4, Func Offset: 0x24
	// Line 568, Address: 0x1f02de4, Func Offset: 0x34
	// Line 569, Address: 0x1f02df4, Func Offset: 0x44
	// Line 570, Address: 0x1f02dfc, Func Offset: 0x4c
	// Func End, Address: 0x1f02e0c, Func Offset: 0x5c
	// Line 490, Address: 0x1f02db0, Func Offset: 0
	// Line 491, Address: 0x1f02dbc, Func Offset: 0xc
	// Line 493, Address: 0x1f02e34, Func Offset: 0x84
	// Line 494, Address: 0x1f02e48, Func Offset: 0x98
	// Line 495, Address: 0x1f02e64, Func Offset: 0xb4
	// Line 497, Address: 0x1f02e94, Func Offset: 0xe4
	// Line 498, Address: 0x1f02eac, Func Offset: 0xfc
	// Line 500, Address: 0x1f02edc, Func Offset: 0x12c
	// Line 501, Address: 0x1f02ef4, Func Offset: 0x144
	// Line 502, Address: 0x1f02f04, Func Offset: 0x154
	// Line 503, Address: 0x1f02f0c, Func Offset: 0x15c
	// Line 506, Address: 0x1f02f20, Func Offset: 0x170
	// Line 507, Address: 0x1f02f38, Func Offset: 0x188
	// Line 508, Address: 0x1f02f48, Func Offset: 0x198
	// Line 511, Address: 0x1f02f5c, Func Offset: 0x1ac
	// Line 512, Address: 0x1f02f70, Func Offset: 0x1c0
	// Line 513, Address: 0x1f02f94, Func Offset: 0x1e4
	// Line 516, Address: 0x1f02f9c, Func Offset: 0x1ec
	// Line 517, Address: 0x1f02fb0, Func Offset: 0x200
	// Line 520, Address: 0x1f02fd8, Func Offset: 0x228
	// Line 521, Address: 0x1f02ff0, Func Offset: 0x240
	// Line 522, Address: 0x1f03004, Func Offset: 0x254
	// Line 525, Address: 0x1f0300c, Func Offset: 0x25c
	// Line 526, Address: 0x1f03038, Func Offset: 0x288
	// Line 527, Address: 0x1f03054, Func Offset: 0x2a4
	// Line 528, Address: 0x1f0305c, Func Offset: 0x2ac
	// Line 530, Address: 0x1f03070, Func Offset: 0x2c0
	// Line 531, Address: 0x1f03088, Func Offset: 0x2d8
	// Line 534, Address: 0x1f03090, Func Offset: 0x2e0
	// Line 535, Address: 0x1f030a8, Func Offset: 0x2f8
	// Line 537, Address: 0x1f030c0, Func Offset: 0x310
	// Line 538, Address: 0x1f030cc, Func Offset: 0x31c
	// Line 539, Address: 0x1f030e0, Func Offset: 0x330
	// Line 542, Address: 0x1f030e8, Func Offset: 0x338
	// Line 543, Address: 0x1f03114, Func Offset: 0x364
	// Line 544, Address: 0x1f0312c, Func Offset: 0x37c
	// Line 545, Address: 0x1f03134, Func Offset: 0x384
	// Line 546, Address: 0x1f03140, Func Offset: 0x390
	// Line 548, Address: 0x1f03154, Func Offset: 0x3a4
	// Line 549, Address: 0x1f0316c, Func Offset: 0x3bc
	// Line 552, Address: 0x1f03174, Func Offset: 0x3c4
	// Line 553, Address: 0x1f03198, Func Offset: 0x3e8
	// Line 556, Address: 0x1f031a0, Func Offset: 0x3f0
	// Line 557, Address: 0x1f031b4, Func Offset: 0x404
	// Line 558, Address: 0x1f031c4, Func Offset: 0x414
	// Line 560, Address: 0x1f031d0, Func Offset: 0x420
	// Line 561, Address: 0x1f031d4, Func Offset: 0x424
	// Func End, Address: 0x1f031e8, Func Offset: 0x438
}

// 
// Start address: 0x1f02e10
void EvAllTimeFunc()
{
	float se_vol;
	int disp_ctrl_list[5];
	// Line 575, Address: 0x1f02e10, Func Offset: 0
	// Line 576, Address: 0x1f02e18, Func Offset: 0x8
	// Line 580, Address: 0x1f02e34, Func Offset: 0x24
	// Line 581, Address: 0x1f02e38, Func Offset: 0x28
	// Line 582, Address: 0x1f02e50, Func Offset: 0x40
	// Line 583, Address: 0x1f02e60, Func Offset: 0x50
	// Line 584, Address: 0x1f02e70, Func Offset: 0x60
	// Line 586, Address: 0x1f02e84, Func Offset: 0x74
	// Line 590, Address: 0x1f02e9c, Func Offset: 0x8c
	// Line 592, Address: 0x1f02ed0, Func Offset: 0xc0
	// Line 595, Address: 0x1f02ee4, Func Offset: 0xd4
	// Line 597, Address: 0x1f02ef0, Func Offset: 0xe0
	// Line 599, Address: 0x1f02f64, Func Offset: 0x154
	// Line 600, Address: 0x1f02f84, Func Offset: 0x174
	// Line 601, Address: 0x1f02f98, Func Offset: 0x188
	// Line 602, Address: 0x1f02fa8, Func Offset: 0x198
	// Line 604, Address: 0x1f02fb8, Func Offset: 0x1a8
	// Line 605, Address: 0x1f02ff8, Func Offset: 0x1e8
	// Line 606, Address: 0x1f03038, Func Offset: 0x228
	// Line 608, Address: 0x1f03068, Func Offset: 0x258
	// Line 610, Address: 0x1f0308c, Func Offset: 0x27c
	// Line 611, Address: 0x1f03098, Func Offset: 0x288
	// Func End, Address: 0x1f030a8, Func Offset: 0x298
	// Line 497, Address: 0x1f02e10, Func Offset: 0
	// Line 498, Address: 0x1f02e34, Func Offset: 0x24
	// Line 499, Address: 0x1f02e40, Func Offset: 0x30
	// Line 500, Address: 0x1f02e44, Func Offset: 0x34
	// Func End, Address: 0x1f02e4c, Func Offset: 0x3c
}

// 
// Start address: 0x1f030b0
float LinearTrim(float Yen, float Yst, float Xen, float Xst, float Parm)
{
	// Line 659, Address: 0x1f030b0, Func Offset: 0
	// Line 660, Address: 0x1f030d0, Func Offset: 0x20
	// Func End, Address: 0x1f030d8, Func Offset: 0x28
}

// 
// Start address: 0x1f030e0
void Ca10_Hakaba_Angela_SetDrawEnv()
{
	float farcliptrim;
	float ffpow;
	float fnpow;
	float az;
	float fognear;
	float fogfar;
	float dist;
	float nowpos[4];
	float origin[4];
	// Line 664, Address: 0x1f030e0, Func Offset: 0
	// Line 666, Address: 0x1f030f4, Func Offset: 0x14
	// Line 673, Address: 0x1f03108, Func Offset: 0x28
	// Line 686, Address: 0x1f03114, Func Offset: 0x34
	// Line 687, Address: 0x1f03124, Func Offset: 0x44
	// Line 688, Address: 0x1f0312c, Func Offset: 0x4c
	// Line 689, Address: 0x1f03130, Func Offset: 0x50
	// Line 690, Address: 0x1f0314c, Func Offset: 0x6c
	// Line 691, Address: 0x1f0317c, Func Offset: 0x9c
	// Line 692, Address: 0x1f03184, Func Offset: 0xa4
	// Line 693, Address: 0x1f0318c, Func Offset: 0xac
	// Line 694, Address: 0x1f03198, Func Offset: 0xb8
	// Line 697, Address: 0x1f031a0, Func Offset: 0xc0
	// Line 698, Address: 0x1f031c0, Func Offset: 0xe0
	// Line 701, Address: 0x1f031c4, Func Offset: 0xe4
	// Line 702, Address: 0x1f031f4, Func Offset: 0x114
	// Line 703, Address: 0x1f03220, Func Offset: 0x140
	// Line 704, Address: 0x1f0324c, Func Offset: 0x16c
	// Line 705, Address: 0x1f03274, Func Offset: 0x194
	// Line 707, Address: 0x1f0329c, Func Offset: 0x1bc
	// Line 708, Address: 0x1f032a8, Func Offset: 0x1c8
	// Line 709, Address: 0x1f032b4, Func Offset: 0x1d4
	// Line 710, Address: 0x1f032c0, Func Offset: 0x1e0
	// Line 711, Address: 0x1f032cc, Func Offset: 0x1ec
	// Line 713, Address: 0x1f032e4, Func Offset: 0x204
	// Line 714, Address: 0x1f032f8, Func Offset: 0x218
	// Line 717, Address: 0x1f03314, Func Offset: 0x234
	// Func End, Address: 0x1f03330, Func Offset: 0x250
}

