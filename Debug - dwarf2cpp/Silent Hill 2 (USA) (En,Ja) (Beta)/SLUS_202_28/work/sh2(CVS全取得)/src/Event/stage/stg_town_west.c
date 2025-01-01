typedef struct SubCharacter;
typedef union fsFile;
typedef struct fsMgcFile;
typedef struct Event_CamSetData;
typedef struct _anon0;
typedef struct _AnimeInfo;
typedef struct shSkelton;
typedef struct Event_List;
typedef struct shPlayerWork;
typedef struct Item_List;
typedef union fsFileIndex;
typedef struct _anon1;
typedef struct shBattleFight;
typedef struct PicDraw_Data;
typedef struct sh2gfw_AREA_HEAD;
typedef struct Model_List;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct Enemy_List;
typedef struct shBattleInfo;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct _anon2;
typedef struct Pad_KeyConfig;
typedef struct _CL_VHIT_WALL;
typedef struct _anon3;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct Stage_Data;
typedef struct _anon4;
typedef struct PAD_3D;
typedef union _anon5;
typedef struct fsCdFile;
typedef struct _CL_VHIT_RESULT;
typedef struct sh2gfw_POINTL_MATRIX;
typedef union _anon6;
typedef struct CharaData_DemoList;
typedef struct PAD_2D;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct PAD_INFO;
typedef struct _anon7;
typedef union Q_WORDDATA;
typedef struct DramaDemo_MessageTime;
typedef struct fsMgfFile;
typedef struct sh2gfw_Env_ctl;
typedef struct Playing_Info;
typedef struct fsHdFile;
typedef struct DramaDemo_PlayInfo;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct fsMgpFile;

typedef void(*type_0)(SubCharacter*);
typedef void(*type_30)();
typedef int(*type_34)();
typedef void(*type_95)(SubCharacter*);

typedef unsigned char type_1[4];
typedef Enemy_List type_2[73];
typedef float type_3[4][2];
typedef char type_4[0];
typedef unsigned char type_5[4];
typedef unsigned char type_6[4];
typedef fsFileIndex type_7[1];
typedef CharaData_DemoList type_8[4];
typedef _AnimeInfo type_9[24];
typedef fsFileIndex type_10[1];
typedef CharaData_DemoList type_11[5];
typedef fsFileIndex type_12[1];
typedef fsFileIndex type_13[1];
typedef fsFileIndex type_14[1];
typedef unsigned char type_15[2];
typedef unsigned char type_16[2];
typedef fsFileIndex type_17[1];
typedef float type_18[7];
typedef unsigned int type_19[7];
typedef _AnimeInfo type_20[5];
typedef float type_21[4][2];
typedef fsFileIndex type_22[1];
typedef unsigned char type_23[14];
typedef unsigned short type_24[4];
typedef float type_25[4];
typedef fsFileIndex type_26[1];
typedef float type_27[4];
typedef float type_28[4][4];
typedef DramaDemo_MessageTime type_29[11];
typedef float type_31[4][2];
typedef fsFileIndex type_32[1];
typedef fsFileIndex type_33[1];
typedef _AnimeInfo type_35[33];
typedef _AnimeInfo type_36[25];
typedef int(*type_37)()[21];
typedef Event_List type_38[54];
typedef unsigned char type_39[97];
typedef int type_40[129];
typedef fsFileIndex type_41[1];
typedef fsFileIndex type_42[1];
typedef _AnimeInfo type_43[11];
typedef _AnimeInfo type_44[30];
typedef DramaDemo_MessageTime type_45[10];
typedef fsFileIndex type_46[1];
typedef CharaData_DemoList type_47[3];
typedef fsFileIndex type_48[1];
typedef unsigned int type_49[255];
typedef unsigned char type_50[3];
typedef fsFileIndex type_51[1];
typedef fsFileIndex type_52[1];
typedef unsigned int type_53[32];
typedef CharaData_DemoList type_54[4];
typedef fsFileIndex type_55[1];
typedef _AnimeInfo type_56[17];
typedef unsigned char type_57[2];
typedef CharaData_DemoList type_58[4];
typedef unsigned char type_59[4];
typedef char type_60[4];
typedef unsigned char type_61[20];
typedef char type_62[4];
typedef fsFileIndex type_63[1];
typedef CharaData_DemoList type_64[4];
typedef Model_List type_65[58];
typedef char type_66[4];
typedef fsFileIndex type_67[1];
typedef fsFileIndex type_68[1];
typedef int type_69[6];
typedef _AnimeInfo type_70[34];
typedef char type_71[4];
typedef char type_72[4];
typedef _AnimeInfo type_73[17];
typedef fsFileIndex type_74[1];
typedef CharaData_DemoList type_75[4];
typedef Item_List type_76[33];
typedef float type_77[4];
typedef float type_78[4][4];
typedef _AnimeInfo type_79[17];
typedef unsigned char type_80[14];
typedef unsigned int type_81[4];
typedef shAttackInfo type_82[66];
typedef unsigned short type_83[8];
typedef PAD_INFO type_84[10];
typedef float type_85[4];
typedef unsigned char type_86[16];
typedef int type_87[4];
typedef short type_88[8];
typedef float type_89[4][2];
typedef char type_90[16];
typedef float type_91[2];
typedef float type_92[4];
typedef unsigned long type_93[2];
typedef _AnimeInfo type_94[33];
typedef unsigned char type_96[680];
typedef fsFileIndex type_97[1];
typedef unsigned char type_98[69];
typedef float type_99[4][2];

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
	_anon4 pos;
	_anon4 rot;
	_anon4 pos_spd;
	_anon4 rot_spd;
	_anon7 mat;
	shSkelton* sk_top;
	float eye_y;
	float center_y;
	float spd;
	float spd_org;
	float spd_y;
	float spd_roty;
	float grnd_normal[4];
	float grnd_height;
	_anon4 b_pos;
	_anon4 b_rot;
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

union fsFile
{
	_anon0 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
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

struct Event_CamSetData
{
	float pos[4];
	float itr[4];
	float rot[4];
	float roll;
};

struct _anon0
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

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon7 src_m;
	_anon4 src_t;
	_anon7 des_m;
	_anon4 des_t;
	_anon4 axis;
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

struct Event_List
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
};

struct shPlayerWork
{
	SubCharacter* player;
	_anon4 dist_rot;
	_anon4 dist_pos;
	_anon4 pos;
	_anon4 rot;
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
	_anon4 tgt_body_angle;
	_anon4 tgt_neck_angle;
	_anon4 tgt_arms_angle;
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
	_anon1 index;
	unsigned long pack;
};

struct _anon1
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

struct Model_List
{
	short kind;
	short id;
	short flag_off;
	short flag_on;
	float pos[4];
	float rot[4];
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

struct _anon2
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

struct _anon3
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
	_anon5 hit_check;
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

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA dirvec;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
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

struct _anon4
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

union _anon5
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
	_anon6 hobj;
};

struct sh2gfw_POINTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

union _anon6
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct CharaData_DemoList
{
	int kind;
	fsFileIndex* model;
	fsFileIndex* animation;
	fsFileIndex* shadow;
	fsFileIndex* cluster;
};

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
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

struct _anon7
{
	float d[4][4];
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

struct DramaDemo_MessageTime
{
	unsigned short start;
	unsigned short end;
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
_AnimeInfo pjames_stage_anim[25];
unsigned char ev_pos[680];
Event_List ev_list[54];
Item_List gi_list[33];
int(*ev_prog)()[21];
_anon2 SpecialDrawFunctions;
Model_List mdl_list[58];
Enemy_List en_list[73];
Stage_Data stage_town_west;
int sig_timer_b;
int sig_timer_b2;
int sig_num_a;
int sig_num_b;
CharaData_DemoList meeting_chara[4];
CharaData_DemoList bowl_chara[4];
float mar_pos[4][2];
unsigned char cam_change;
shPlayerWork sh2jms;
int ev_s_step;
int ev_p_step;
Pad_KeyConfig key_config;
int demo_status;
fsFileIndex data_movie_hei_pss[1];
char* dds_adr_1;
char* dds_adr_0;
_anon3 game_flag;
Playing_Info playing;
fsFileIndex data_movie_deai_pss[1];
<unknown fundamental type (0xa510)>* anim_adr_1;
<unknown fundamental type (0xa510)>* anim_adr_0;
fsFileIndex data_demo_bp_mar1_bowl_mae_1_dds[1];
<unknown fundamental type (0xa510)>* anim_adr;
float total_demo_frame;
float demo_frame;
fsFileIndex data_demo_anahori_lll_jms_anm[1];
char MemShare_gp_data_buf[0];
fsFileIndex data_demo_anahori_anahori_dds[1];
float ev_timer;
char* key_adr;
fsFileIndex data_pic_out_statuekey2_tex[1];
char* layer_adr;
fsFileIndex data_pic_out_statuekey_tex[1];
fsFileIndex data_pic_out_statuebox_tex[1];
fsFileIndex data_pic_out_p_lostmemory_tex[1];
fsFileIndex data_demo_mar_isho_e_end_maria_e_dds[1];
fsFileIndex data_demo_hp_lau_hp_lau_dds[1];
fsFileIndex data_demo_bp_mar2_00_bp_mar2_00_dds[1];
fsFileIndex data_demo_bp_mar2_00_lll_mar_anm[1];
fsFileIndex data_demo_bp_mar2_00_lll_jms_anm[1];
fsFileIndex data_demo_bp_mar2_lll_jms_anm[1];
fsFileIndex data_demo_bp_mar2_bowl_mae_2_dds[1];
fsFileIndex data_demo_hei_lau_hei_lau_b_dds[1];
fsFileIndex data_demo_hei_lau_hei_lau_a_dds[1];
fsFileIndex data_demo_mar_deai_00_lll_mar_anm[1];
fsFileIndex data_demo_mar_deai_00_lll_jms_anm[1];
fsFileIndex data_demo_mar_deai_00_mar_deai_00_dds[1];
fsFileIndex data_demo_mar_deai_mar_deai_dds[1];
float FogParameters[4];
float para_dir[4];
float para_col[4];
float para_mae1_dir[4];
float para_mae2_dir[4];
float para_mae2_col[4];
float para_nochase_dir[4];
float para_nochase_col[4];
float FogColor_Yu[4];
float DepthColor_Yu[4];
float Ambient_Yu[4];
float Para_Base0[4];
sh2gfw_Env_ctl Env_ctl;

int EvProgLauraOnWall();
int EvProgMariaMeetingStandby();
int EvProgMariaMeeting();
int EvProgMariaNotHotel();
int EvProgBowlDemoDataLoad();
int EvProgMariaFrontBowling1st();
int EvProgMariaFrontBowling2nd();
int EvProgLauraCantGo();
int EvProgEnemyLoadWestTownStart();
int EvProgEnemyLoadWestTownInit();
int EvProgLadyHoleMake();
int EvProgUseOldBronzeKey();
int EvProgGetWrench();
int EvProgUseWrench();
void EvProgSubCaseDraw(float base, float key);
int EvProgLookMetalBox();
int EvProgLauraGoHospital();
int EvProgGetSteelPipe();
int EvProgGetLostMemory();
int EvProgGetDogKey();
int EvProgEndMaria();
void EvStageInit();
int EvCharaDataClear();
void EvRoomInit();
void EvAllTimeFunc();
int EvBgmControl();
void EvMariaInParkSet();
void EvLadyBackDisplay(int* list);
void EvSignalControlCc10(int* list);
void EvSignalControlCc20(int* list);
void EvCharaDataLoadAfterWall();
void EvCamaraLostMemory();
float LinearTrim2(float Yen, float Yst, float Xen, float Xst, float Parm);
void CC_Demo_Fog_Hosei();

// 
// Start address: 0x1f01e80
int EvProgLauraOnWall()
{
	int ret;
	float jms_rot;
	float jms_pos[4];
	DramaDemo_PlayInfo wall_b;
	DramaDemo_MessageTime wall_msg[11];
	DramaDemo_PlayInfo wall_a;
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
// Start address: 0x1f02170
int EvProgMariaMeetingStandby()
{
	float vec0[4];
	SubCharacter* scp;
	// Line 611, Address: 0x1f02170, Func Offset: 0
	// Line 615, Address: 0x1f02178, Func Offset: 0x8
	// Line 616, Address: 0x1f02180, Func Offset: 0x10
	// Line 617, Address: 0x1f0219c, Func Offset: 0x2c
	// Line 618, Address: 0x1f021a4, Func Offset: 0x34
	// Line 619, Address: 0x1f021ac, Func Offset: 0x3c
	// Line 620, Address: 0x1f021bc, Func Offset: 0x4c
	// Line 621, Address: 0x1f021c4, Func Offset: 0x54
	// Line 622, Address: 0x1f021e0, Func Offset: 0x70
	// Line 623, Address: 0x1f021f0, Func Offset: 0x80
	// Line 624, Address: 0x1f021fc, Func Offset: 0x8c
	// Line 625, Address: 0x1f02210, Func Offset: 0xa0
	// Line 626, Address: 0x1f02214, Func Offset: 0xa4
	// Func End, Address: 0x1f02224, Func Offset: 0xb4
	// Line 211, Address: 0x1f02170, Func Offset: 0
	// Line 221, Address: 0x1f02178, Func Offset: 0x8
	// Line 223, Address: 0x1f021d8, Func Offset: 0x68
	// Line 224, Address: 0x1f021ec, Func Offset: 0x7c
	// Line 225, Address: 0x1f021f8, Func Offset: 0x88
	// Line 226, Address: 0x1f02210, Func Offset: 0xa0
	// Line 227, Address: 0x1f02228, Func Offset: 0xb8
	// Line 231, Address: 0x1f0223c, Func Offset: 0xcc
	// Line 232, Address: 0x1f02264, Func Offset: 0xf4
	// Line 235, Address: 0x1f0226c, Func Offset: 0xfc
	// Line 236, Address: 0x1f0227c, Func Offset: 0x10c
	// Line 237, Address: 0x1f022a8, Func Offset: 0x138
	// Line 238, Address: 0x1f022bc, Func Offset: 0x14c
	// Line 241, Address: 0x1f022c4, Func Offset: 0x154
	// Line 242, Address: 0x1f022dc, Func Offset: 0x16c
	// Line 243, Address: 0x1f022e8, Func Offset: 0x178
	// Line 244, Address: 0x1f022fc, Func Offset: 0x18c
	// Line 248, Address: 0x1f02310, Func Offset: 0x1a0
	// Line 249, Address: 0x1f0233c, Func Offset: 0x1cc
	// Line 252, Address: 0x1f02344, Func Offset: 0x1d4
	// Line 253, Address: 0x1f02358, Func Offset: 0x1e8
	// Line 254, Address: 0x1f02364, Func Offset: 0x1f4
	// Line 255, Address: 0x1f02370, Func Offset: 0x200
	// Line 256, Address: 0x1f02384, Func Offset: 0x214
	// Line 257, Address: 0x1f0238c, Func Offset: 0x21c
	// Line 258, Address: 0x1f023a0, Func Offset: 0x230
	// Line 259, Address: 0x1f023b4, Func Offset: 0x244
	// Line 261, Address: 0x1f023dc, Func Offset: 0x26c
	// Line 262, Address: 0x1f023f4, Func Offset: 0x284
	// Line 265, Address: 0x1f02408, Func Offset: 0x298
	// Line 266, Address: 0x1f0241c, Func Offset: 0x2ac
	// Line 268, Address: 0x1f02428, Func Offset: 0x2b8
	// Line 269, Address: 0x1f0242c, Func Offset: 0x2bc
	// Func End, Address: 0x1f0243c, Func Offset: 0x2cc
}

// 
// Start address: 0x1f02230
int EvProgMariaMeeting()
{
	float jms_pos[4];
	DramaDemo_PlayInfo info;
	DramaDemo_MessageTime msg_mov[10];
	// Line 276, Address: 0x1f02230, Func Offset: 0
	// Line 277, Address: 0x1f02254, Func Offset: 0x24
	// Line 278, Address: 0x1f02260, Func Offset: 0x30
	// Line 279, Address: 0x1f02264, Func Offset: 0x34
	// Func End, Address: 0x1f0226c, Func Offset: 0x3c
	// Line 631, Address: 0x1f02230, Func Offset: 0
	// Line 667, Address: 0x1f02238, Func Offset: 0x8
	// Line 669, Address: 0x1f02298, Func Offset: 0x68
	// Line 670, Address: 0x1f022ac, Func Offset: 0x7c
	// Line 671, Address: 0x1f022bc, Func Offset: 0x8c
	// Line 672, Address: 0x1f022d0, Func Offset: 0xa0
	// Line 673, Address: 0x1f022dc, Func Offset: 0xac
	// Line 677, Address: 0x1f022f0, Func Offset: 0xc0
	// Line 679, Address: 0x1f0230c, Func Offset: 0xdc
	// Line 680, Address: 0x1f02334, Func Offset: 0x104
	// Line 683, Address: 0x1f0233c, Func Offset: 0x10c
	// Line 684, Address: 0x1f02368, Func Offset: 0x138
	// Line 685, Address: 0x1f02380, Func Offset: 0x150
	// Line 686, Address: 0x1f023a4, Func Offset: 0x174
	// Line 689, Address: 0x1f023ac, Func Offset: 0x17c
	// Line 690, Address: 0x1f023b4, Func Offset: 0x184
	// Line 691, Address: 0x1f023c8, Func Offset: 0x198
	// Line 692, Address: 0x1f023d4, Func Offset: 0x1a4
	// Line 693, Address: 0x1f023e8, Func Offset: 0x1b8
	// Line 697, Address: 0x1f023fc, Func Offset: 0x1cc
	// Line 698, Address: 0x1f02428, Func Offset: 0x1f8
	// Line 701, Address: 0x1f02430, Func Offset: 0x200
	// Line 702, Address: 0x1f02438, Func Offset: 0x208
	// Line 706, Address: 0x1f0244c, Func Offset: 0x21c
	// Line 707, Address: 0x1f02458, Func Offset: 0x228
	// Line 708, Address: 0x1f02464, Func Offset: 0x234
	// Line 709, Address: 0x1f02470, Func Offset: 0x240
	// Line 710, Address: 0x1f02484, Func Offset: 0x254
	// Line 711, Address: 0x1f02498, Func Offset: 0x268
	// Line 712, Address: 0x1f024a0, Func Offset: 0x270
	// Line 713, Address: 0x1f024ac, Func Offset: 0x27c
	// Line 714, Address: 0x1f024c0, Func Offset: 0x290
	// Line 715, Address: 0x1f024e4, Func Offset: 0x2b4
	// Line 718, Address: 0x1f02520, Func Offset: 0x2f0
	// Line 719, Address: 0x1f0252c, Func Offset: 0x2fc
	// Line 720, Address: 0x1f02540, Func Offset: 0x310
	// Line 721, Address: 0x1f02558, Func Offset: 0x328
	// Line 722, Address: 0x1f0256c, Func Offset: 0x33c
	// Line 723, Address: 0x1f0257c, Func Offset: 0x34c
	// Line 725, Address: 0x1f02588, Func Offset: 0x358
	// Line 726, Address: 0x1f0258c, Func Offset: 0x35c
	// Func End, Address: 0x1f0259c, Func Offset: 0x36c
	// Line 284, Address: 0x1f02230, Func Offset: 0
	// Line 291, Address: 0x1f02238, Func Offset: 0x8
	// Line 293, Address: 0x1f02268, Func Offset: 0x38
	// Line 294, Address: 0x1f02278, Func Offset: 0x48
	// Line 295, Address: 0x1f0228c, Func Offset: 0x5c
	// Line 296, Address: 0x1f02294, Func Offset: 0x64
	// Line 297, Address: 0x1f022a0, Func Offset: 0x70
	// Line 298, Address: 0x1f022a8, Func Offset: 0x78
	// Line 299, Address: 0x1f022b0, Func Offset: 0x80
	// Line 303, Address: 0x1f022c4, Func Offset: 0x94
	// Line 304, Address: 0x1f022f0, Func Offset: 0xc0
	// Line 305, Address: 0x1f02314, Func Offset: 0xe4
	// Line 306, Address: 0x1f0232c, Func Offset: 0xfc
	// Line 307, Address: 0x1f02350, Func Offset: 0x120
	// Line 308, Address: 0x1f02360, Func Offset: 0x130
	// Line 318, Address: 0x1f02378, Func Offset: 0x148
	// Line 319, Address: 0x1f023a4, Func Offset: 0x174
	// Line 322, Address: 0x1f023ac, Func Offset: 0x17c
	// Line 323, Address: 0x1f023c4, Func Offset: 0x194
	// Line 324, Address: 0x1f023dc, Func Offset: 0x1ac
	// Line 326, Address: 0x1f023e8, Func Offset: 0x1b8
	// Line 327, Address: 0x1f023ec, Func Offset: 0x1bc
	// Func End, Address: 0x1f023fc, Func Offset: 0x1cc
}

// 
// Start address: 0x1f025a0
int EvProgMariaNotHotel()
{
	SubCharacter* scp;
	float mar_rot;
	float mar_pos[4];
	float jms_rot;
	float jms_pos[4];
	DramaDemo_PlayInfo info;
	// Line 270, Address: 0x1f025a0, Func Offset: 0
	// Line 283, Address: 0x1f025ac, Func Offset: 0xc
	// Line 285, Address: 0x1f025dc, Func Offset: 0x3c
	// Line 286, Address: 0x1f025f4, Func Offset: 0x54
	// Line 287, Address: 0x1f02604, Func Offset: 0x64
	// Line 288, Address: 0x1f02618, Func Offset: 0x78
	// Line 289, Address: 0x1f02624, Func Offset: 0x84
	// Line 290, Address: 0x1f02638, Func Offset: 0x98
	// Line 293, Address: 0x1f0264c, Func Offset: 0xac
	// Line 294, Address: 0x1f02660, Func Offset: 0xc0
	// Line 295, Address: 0x1f02690, Func Offset: 0xf0
	// Line 296, Address: 0x1f026a4, Func Offset: 0x104
	// Line 297, Address: 0x1f026c0, Func Offset: 0x120
	// Line 300, Address: 0x1f026c8, Func Offset: 0x128
	// Line 301, Address: 0x1f026d8, Func Offset: 0x138
	// Line 302, Address: 0x1f026e4, Func Offset: 0x144
	// Line 303, Address: 0x1f026f0, Func Offset: 0x150
	// Line 304, Address: 0x1f026fc, Func Offset: 0x15c
	// Line 305, Address: 0x1f02710, Func Offset: 0x170
	// Line 306, Address: 0x1f02718, Func Offset: 0x178
	// Line 308, Address: 0x1f02724, Func Offset: 0x184
	// Line 309, Address: 0x1f02728, Func Offset: 0x188
	// Func End, Address: 0x1f0273c, Func Offset: 0x19c
	// Line 731, Address: 0x1f025a0, Func Offset: 0
	// Line 750, Address: 0x1f025ac, Func Offset: 0xc
	// Line 752, Address: 0x1f025dc, Func Offset: 0x3c
	// Line 753, Address: 0x1f025ec, Func Offset: 0x4c
	// Line 754, Address: 0x1f02600, Func Offset: 0x60
	// Line 755, Address: 0x1f02620, Func Offset: 0x80
	// Line 756, Address: 0x1f02628, Func Offset: 0x88
	// Line 757, Address: 0x1f0263c, Func Offset: 0x9c
	// Line 758, Address: 0x1f0264c, Func Offset: 0xac
	// Line 759, Address: 0x1f02668, Func Offset: 0xc8
	// Line 760, Address: 0x1f02670, Func Offset: 0xd0
	// Line 763, Address: 0x1f02684, Func Offset: 0xe4
	// Line 764, Address: 0x1f026b0, Func Offset: 0x110
	// Line 767, Address: 0x1f026b8, Func Offset: 0x118
	// Line 768, Address: 0x1f026cc, Func Offset: 0x12c
	// Line 769, Address: 0x1f026d4, Func Offset: 0x134
	// Line 770, Address: 0x1f026f4, Func Offset: 0x154
	// Line 771, Address: 0x1f02714, Func Offset: 0x174
	// Line 772, Address: 0x1f02728, Func Offset: 0x188
	// Line 773, Address: 0x1f02738, Func Offset: 0x198
	// Line 774, Address: 0x1f02754, Func Offset: 0x1b4
	// Line 775, Address: 0x1f0275c, Func Offset: 0x1bc
	// Line 776, Address: 0x1f02778, Func Offset: 0x1d8
	// Line 777, Address: 0x1f02784, Func Offset: 0x1e4
	// Line 779, Address: 0x1f02790, Func Offset: 0x1f0
	// Line 780, Address: 0x1f02794, Func Offset: 0x1f4
	// Func End, Address: 0x1f027a8, Func Offset: 0x208
}

// 
// Start address: 0x1f027b0
int EvProgBowlDemoDataLoad()
{
	// Line 785, Address: 0x1f027b0, Func Offset: 0
	// Line 786, Address: 0x1f027b8, Func Offset: 0x8
	// Line 787, Address: 0x1f027c4, Func Offset: 0x14
	// Line 788, Address: 0x1f027cc, Func Offset: 0x1c
	// Line 789, Address: 0x1f027e0, Func Offset: 0x30
	// Line 791, Address: 0x1f027fc, Func Offset: 0x4c
	// Line 792, Address: 0x1f02800, Func Offset: 0x50
	// Func End, Address: 0x1f02810, Func Offset: 0x60
}

// 
// Start address: 0x1f02810
int EvProgMariaFrontBowling1st()
{
	SubCharacter* scp;
	DramaDemo_PlayInfo bowl_1;
	// Line 797, Address: 0x1f02810, Func Offset: 0
	// Line 815, Address: 0x1f02818, Func Offset: 0x8
	// Line 817, Address: 0x1f02854, Func Offset: 0x44
	// Line 818, Address: 0x1f0285c, Func Offset: 0x4c
	// Line 819, Address: 0x1f0286c, Func Offset: 0x5c
	// Line 822, Address: 0x1f02880, Func Offset: 0x70
	// Line 823, Address: 0x1f02888, Func Offset: 0x78
	// Line 824, Address: 0x1f02890, Func Offset: 0x80
	// Line 825, Address: 0x1f028a0, Func Offset: 0x90
	// Line 826, Address: 0x1f028b4, Func Offset: 0xa4
	// Line 827, Address: 0x1f028c4, Func Offset: 0xb4
	// Line 828, Address: 0x1f028d4, Func Offset: 0xc4
	// Line 829, Address: 0x1f028e0, Func Offset: 0xd0
	// Line 830, Address: 0x1f028f0, Func Offset: 0xe0
	// Line 831, Address: 0x1f02904, Func Offset: 0xf4
	// Line 834, Address: 0x1f02918, Func Offset: 0x108
	// Line 835, Address: 0x1f02944, Func Offset: 0x134
	// Line 838, Address: 0x1f0294c, Func Offset: 0x13c
	// Line 839, Address: 0x1f02958, Func Offset: 0x148
	// Line 840, Address: 0x1f02964, Func Offset: 0x154
	// Line 841, Address: 0x1f02978, Func Offset: 0x168
	// Line 842, Address: 0x1f02980, Func Offset: 0x170
	// Line 843, Address: 0x1f02990, Func Offset: 0x180
	// Line 844, Address: 0x1f029a0, Func Offset: 0x190
	// Line 845, Address: 0x1f029a8, Func Offset: 0x198
	// Line 846, Address: 0x1f029b4, Func Offset: 0x1a4
	// Line 847, Address: 0x1f029c0, Func Offset: 0x1b0
	// Line 848, Address: 0x1f029dc, Func Offset: 0x1cc
	// Line 850, Address: 0x1f029e8, Func Offset: 0x1d8
	// Line 851, Address: 0x1f029ec, Func Offset: 0x1dc
	// Func End, Address: 0x1f029fc, Func Offset: 0x1ec
	// Line 375, Address: 0x1f02810, Func Offset: 0
	// Line 387, Address: 0x1f0281c, Func Offset: 0xc
	// Line 389, Address: 0x1f02844, Func Offset: 0x34
	// Line 390, Address: 0x1f02850, Func Offset: 0x40
	// Line 391, Address: 0x1f02874, Func Offset: 0x64
	// Line 392, Address: 0x1f02894, Func Offset: 0x84
	// Line 393, Address: 0x1f028b8, Func Offset: 0xa8
	// Line 394, Address: 0x1f028d0, Func Offset: 0xc0
	// Line 395, Address: 0x1f028e8, Func Offset: 0xd8
	// Line 396, Address: 0x1f02900, Func Offset: 0xf0
	// Line 397, Address: 0x1f02930, Func Offset: 0x120
	// Line 398, Address: 0x1f02934, Func Offset: 0x124
	// Func End, Address: 0x1f02948, Func Offset: 0x138
}

// 
// Start address: 0x1f02a00
int EvProgMariaFrontBowling2nd()
{
	DramaDemo_PlayInfo bowl_2;
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
// Start address: 0x1f02bd0
int EvProgLauraCantGo()
{
	float pos_add[4];
	SubCharacter* scp;
	float mar_rot;
	float pos_z;
	float mar_pos[4];
	float pos_x;
	float jms_rot;
	float jms_pos[4];
	DramaDemo_PlayInfo info;
	// Line 906, Address: 0x1f02bd0, Func Offset: 0
	// Line 928, Address: 0x1f02be4, Func Offset: 0x14
	// Line 930, Address: 0x1f02c14, Func Offset: 0x44
	// Line 931, Address: 0x1f02c24, Func Offset: 0x54
	// Line 932, Address: 0x1f02c4c, Func Offset: 0x7c
	// Line 933, Address: 0x1f02c6c, Func Offset: 0x9c
	// Line 934, Address: 0x1f02c78, Func Offset: 0xa8
	// Line 935, Address: 0x1f02c98, Func Offset: 0xc8
	// Line 936, Address: 0x1f02ca0, Func Offset: 0xd0
	// Line 937, Address: 0x1f02cb4, Func Offset: 0xe4
	// Line 938, Address: 0x1f02cc4, Func Offset: 0xf4
	// Line 939, Address: 0x1f02ce0, Func Offset: 0x110
	// Line 940, Address: 0x1f02ce8, Func Offset: 0x118
	// Line 943, Address: 0x1f02cfc, Func Offset: 0x12c
	// Line 944, Address: 0x1f02d0c, Func Offset: 0x13c
	// Line 945, Address: 0x1f02d1c, Func Offset: 0x14c
	// Line 946, Address: 0x1f02d48, Func Offset: 0x178
	// Line 949, Address: 0x1f02d50, Func Offset: 0x180
	// Line 950, Address: 0x1f02d64, Func Offset: 0x194
	// Line 951, Address: 0x1f02d6c, Func Offset: 0x19c
	// Line 952, Address: 0x1f02d84, Func Offset: 0x1b4
	// Line 953, Address: 0x1f02d94, Func Offset: 0x1c4
	// Line 954, Address: 0x1f02db0, Func Offset: 0x1e0
	// Line 955, Address: 0x1f02dd0, Func Offset: 0x200
	// Line 956, Address: 0x1f02dec, Func Offset: 0x21c
	// Line 957, Address: 0x1f02e00, Func Offset: 0x230
	// Line 958, Address: 0x1f02e10, Func Offset: 0x240
	// Line 959, Address: 0x1f02e2c, Func Offset: 0x25c
	// Line 960, Address: 0x1f02e34, Func Offset: 0x264
	// Line 961, Address: 0x1f02e4c, Func Offset: 0x27c
	// Line 962, Address: 0x1f02e58, Func Offset: 0x288
	// Line 963, Address: 0x1f02e70, Func Offset: 0x2a0
	// Line 964, Address: 0x1f02e88, Func Offset: 0x2b8
	// Line 965, Address: 0x1f02e94, Func Offset: 0x2c4
	// Line 967, Address: 0x1f02ea0, Func Offset: 0x2d0
	// Line 968, Address: 0x1f02ea4, Func Offset: 0x2d4
	// Func End, Address: 0x1f02ec0, Func Offset: 0x2f0
}

// 
// Start address: 0x1f02ec0
int EvProgEnemyLoadWestTownStart()
{
	CharaData_DemoList enemy_list[4];
	// Line 973, Address: 0x1f02ec0, Func Offset: 0
	// Line 984, Address: 0x1f02ec8, Func Offset: 0x8
	// Line 985, Address: 0x1f02ee0, Func Offset: 0x20
	// Line 986, Address: 0x1f02ee8, Func Offset: 0x28
	// Line 987, Address: 0x1f02ef8, Func Offset: 0x38
	// Line 989, Address: 0x1f02efc, Func Offset: 0x3c
	// Func End, Address: 0x1f02f0c, Func Offset: 0x4c
}

// 
// Start address: 0x1f02f10
int EvProgEnemyLoadWestTownInit()
{
	// Line 995, Address: 0x1f02f10, Func Offset: 0
	// Line 996, Address: 0x1f02f14, Func Offset: 0x4
	// Func End, Address: 0x1f02f1c, Func Offset: 0xc
}

// 
// Start address: 0x1f02f20
int EvProgLadyHoleMake()
{
	int ret;
	DramaDemo_PlayInfo info;
	// Line 1001, Address: 0x1f02f20, Func Offset: 0
	// Line 1008, Address: 0x1f02f2c, Func Offset: 0xc
	// Line 1010, Address: 0x1f02f80, Func Offset: 0x60
	// Line 1011, Address: 0x1f02f98, Func Offset: 0x78
	// Line 1013, Address: 0x1f02fc8, Func Offset: 0xa8
	// Line 1014, Address: 0x1f02fe0, Func Offset: 0xc0
	// Line 1015, Address: 0x1f02ff4, Func Offset: 0xd4
	// Line 1016, Address: 0x1f03000, Func Offset: 0xe0
	// Line 1020, Address: 0x1f03014, Func Offset: 0xf4
	// Line 1021, Address: 0x1f03028, Func Offset: 0x108
	// Line 1022, Address: 0x1f03054, Func Offset: 0x134
	// Line 1023, Address: 0x1f03068, Func Offset: 0x148
	// Line 1026, Address: 0x1f03070, Func Offset: 0x150
	// Line 1027, Address: 0x1f03088, Func Offset: 0x168
	// Line 1028, Address: 0x1f030a8, Func Offset: 0x188
	// Line 1029, Address: 0x1f030bc, Func Offset: 0x19c
	// Line 1030, Address: 0x1f030c4, Func Offset: 0x1a4
	// Line 1033, Address: 0x1f030d8, Func Offset: 0x1b8
	// Line 1034, Address: 0x1f030ec, Func Offset: 0x1cc
	// Line 1035, Address: 0x1f0311c, Func Offset: 0x1fc
	// Line 1036, Address: 0x1f03130, Func Offset: 0x210
	// Line 1037, Address: 0x1f0314c, Func Offset: 0x22c
	// Line 1040, Address: 0x1f03154, Func Offset: 0x234
	// Line 1041, Address: 0x1f03164, Func Offset: 0x244
	// Line 1042, Address: 0x1f03174, Func Offset: 0x254
	// Line 1043, Address: 0x1f03194, Func Offset: 0x274
	// Line 1044, Address: 0x1f031a8, Func Offset: 0x288
	// Line 1046, Address: 0x1f031d0, Func Offset: 0x2b0
	// Line 1047, Address: 0x1f031d8, Func Offset: 0x2b8
	// Line 1048, Address: 0x1f031e4, Func Offset: 0x2c4
	// Line 1049, Address: 0x1f031fc, Func Offset: 0x2dc
	// Line 1053, Address: 0x1f03210, Func Offset: 0x2f0
	// Line 1054, Address: 0x1f03224, Func Offset: 0x304
	// Line 1056, Address: 0x1f03230, Func Offset: 0x310
	// Line 1057, Address: 0x1f03234, Func Offset: 0x314
	// Func End, Address: 0x1f03248, Func Offset: 0x328
}

// 
// Start address: 0x1f03250
int EvProgUseOldBronzeKey()
{
	// Line 1062, Address: 0x1f03250, Func Offset: 0
	// Line 1063, Address: 0x1f03258, Func Offset: 0x8
	// Line 1065, Address: 0x1f03278, Func Offset: 0x28
	// Func End, Address: 0x1f03288, Func Offset: 0x38
}

// 
// Start address: 0x1f03290
int EvProgGetWrench()
{
	// Line 1070, Address: 0x1f03290, Func Offset: 0
	// Line 1071, Address: 0x1f03298, Func Offset: 0x8
	// Line 1072, Address: 0x1f032a8, Func Offset: 0x18
	// Func End, Address: 0x1f032b8, Func Offset: 0x28
	// Line 558, Address: 0x1f03290, Func Offset: 0
	// Line 568, Address: 0x1f032a0, Func Offset: 0x10
	// Line 569, Address: 0x1f032b8, Func Offset: 0x28
	// Line 572, Address: 0x1f032c8, Func Offset: 0x38
	// Line 573, Address: 0x1f032e0, Func Offset: 0x50
	// Line 574, Address: 0x1f032fc, Func Offset: 0x6c
	// Line 576, Address: 0x1f03300, Func Offset: 0x70
	// Line 577, Address: 0x1f03318, Func Offset: 0x88
	// Line 578, Address: 0x1f03334, Func Offset: 0xa4
	// Line 581, Address: 0x1f03338, Func Offset: 0xa8
	// Line 582, Address: 0x1f03364, Func Offset: 0xd4
	// Line 584, Address: 0x1f03380, Func Offset: 0xf0
	// Line 586, Address: 0x1f0339c, Func Offset: 0x10c
	// Line 588, Address: 0x1f033ac, Func Offset: 0x11c
	// Line 592, Address: 0x1f033d0, Func Offset: 0x140
	// Line 595, Address: 0x1f0348c, Func Offset: 0x1fc
	// Line 596, Address: 0x1f03500, Func Offset: 0x270
	// Line 597, Address: 0x1f03508, Func Offset: 0x278
	// Line 598, Address: 0x1f03534, Func Offset: 0x2a4
	// Line 600, Address: 0x1f03540, Func Offset: 0x2b0
	// Line 601, Address: 0x1f03544, Func Offset: 0x2b4
	// Func End, Address: 0x1f0355c, Func Offset: 0x2cc
	// Line 519, Address: 0x1f03290, Func Offset: 0
	// Line 520, Address: 0x1f03298, Func Offset: 0x8
	// Line 522, Address: 0x1f032f8, Func Offset: 0x68
	// Line 523, Address: 0x1f0330c, Func Offset: 0x7c
	// Line 524, Address: 0x1f03318, Func Offset: 0x88
	// Line 527, Address: 0x1f0332c, Func Offset: 0x9c
	// Line 528, Address: 0x1f0333c, Func Offset: 0xac
	// Line 529, Address: 0x1f0334c, Func Offset: 0xbc
	// Line 533, Address: 0x1f03360, Func Offset: 0xd0
	// Line 537, Address: 0x1f03398, Func Offset: 0x108
	// Line 541, Address: 0x1f033a8, Func Offset: 0x118
	// Line 542, Address: 0x1f033cc, Func Offset: 0x13c
	// Line 545, Address: 0x1f033d4, Func Offset: 0x144
	// Line 547, Address: 0x1f03400, Func Offset: 0x170
	// Line 548, Address: 0x1f03410, Func Offset: 0x180
	// Line 549, Address: 0x1f03420, Func Offset: 0x190
	// Line 550, Address: 0x1f0342c, Func Offset: 0x19c
	// Line 551, Address: 0x1f03440, Func Offset: 0x1b0
	// Line 552, Address: 0x1f03454, Func Offset: 0x1c4
	// Line 558, Address: 0x1f03484, Func Offset: 0x1f4
	// Line 559, Address: 0x1f034a8, Func Offset: 0x218
	// Line 562, Address: 0x1f034b0, Func Offset: 0x220
	// Line 563, Address: 0x1f034c4, Func Offset: 0x234
	// Line 565, Address: 0x1f034d0, Func Offset: 0x240
	// Line 566, Address: 0x1f034d4, Func Offset: 0x244
	// Func End, Address: 0x1f034e4, Func Offset: 0x254
}

// 
// Start address: 0x1f032c0
int EvProgUseWrench()
{
	// Line 1079, Address: 0x1f032c0, Func Offset: 0
	// Line 1080, Address: 0x1f032cc, Func Offset: 0xc
	// Line 1082, Address: 0x1f03350, Func Offset: 0x90
	// Line 1083, Address: 0x1f03364, Func Offset: 0xa4
	// Line 1084, Address: 0x1f03370, Func Offset: 0xb0
	// Line 1088, Address: 0x1f03384, Func Offset: 0xc4
	// Line 1089, Address: 0x1f03394, Func Offset: 0xd4
	// Line 1090, Address: 0x1f033a4, Func Offset: 0xe4
	// Line 1091, Address: 0x1f033b4, Func Offset: 0xf4
	// Line 1092, Address: 0x1f033d0, Func Offset: 0x110
	// Line 1094, Address: 0x1f03400, Func Offset: 0x140
	// Line 1095, Address: 0x1f03418, Func Offset: 0x158
	// Line 1097, Address: 0x1f03448, Func Offset: 0x188
	// Line 1098, Address: 0x1f03460, Func Offset: 0x1a0
	// Line 1099, Address: 0x1f03468, Func Offset: 0x1a8
	// Line 1103, Address: 0x1f0347c, Func Offset: 0x1bc
	// Line 1104, Address: 0x1f0348c, Func Offset: 0x1cc
	// Line 1105, Address: 0x1f0349c, Func Offset: 0x1dc
	// Line 1106, Address: 0x1f034ac, Func Offset: 0x1ec
	// Line 1109, Address: 0x1f034c0, Func Offset: 0x200
	// Line 1110, Address: 0x1f034d4, Func Offset: 0x214
	// Line 1111, Address: 0x1f034f8, Func Offset: 0x238
	// Line 1114, Address: 0x1f03500, Func Offset: 0x240
	// Line 1115, Address: 0x1f03514, Func Offset: 0x254
	// Line 1119, Address: 0x1f0353c, Func Offset: 0x27c
	// Line 1120, Address: 0x1f03550, Func Offset: 0x290
	// Line 1123, Address: 0x1f03558, Func Offset: 0x298
	// Line 1124, Address: 0x1f03584, Func Offset: 0x2c4
	// Line 1125, Address: 0x1f035a0, Func Offset: 0x2e0
	// Line 1126, Address: 0x1f035a8, Func Offset: 0x2e8
	// Line 1128, Address: 0x1f035bc, Func Offset: 0x2fc
	// Line 1129, Address: 0x1f035d4, Func Offset: 0x314
	// Line 1132, Address: 0x1f035dc, Func Offset: 0x31c
	// Line 1133, Address: 0x1f035f4, Func Offset: 0x334
	// Line 1135, Address: 0x1f0360c, Func Offset: 0x34c
	// Line 1136, Address: 0x1f03618, Func Offset: 0x358
	// Line 1137, Address: 0x1f0362c, Func Offset: 0x36c
	// Line 1140, Address: 0x1f03634, Func Offset: 0x374
	// Line 1141, Address: 0x1f03660, Func Offset: 0x3a0
	// Line 1142, Address: 0x1f03678, Func Offset: 0x3b8
	// Line 1143, Address: 0x1f03680, Func Offset: 0x3c0
	// Line 1144, Address: 0x1f0368c, Func Offset: 0x3cc
	// Line 1146, Address: 0x1f036a0, Func Offset: 0x3e0
	// Line 1147, Address: 0x1f036b8, Func Offset: 0x3f8
	// Line 1150, Address: 0x1f036c0, Func Offset: 0x400
	// Line 1151, Address: 0x1f036e4, Func Offset: 0x424
	// Line 1154, Address: 0x1f036ec, Func Offset: 0x42c
	// Line 1155, Address: 0x1f03700, Func Offset: 0x440
	// Line 1156, Address: 0x1f03714, Func Offset: 0x454
	// Line 1157, Address: 0x1f03724, Func Offset: 0x464
	// Line 1159, Address: 0x1f03730, Func Offset: 0x470
	// Line 1160, Address: 0x1f03734, Func Offset: 0x474
	// Func End, Address: 0x1f03748, Func Offset: 0x488
}

// 
// Start address: 0x1f03750
void EvProgSubCaseDraw(float base, float key)
{
	PicDraw_Data pic;
	int yy;
	int xx;
	// Line 1165, Address: 0x1f03750, Func Offset: 0
	// Line 1171, Address: 0x1f03768, Func Offset: 0x18
	// Line 1172, Address: 0x1f03780, Func Offset: 0x30
	// Line 1173, Address: 0x1f037ac, Func Offset: 0x5c
	// Line 1174, Address: 0x1f037d8, Func Offset: 0x88
	// Line 1175, Address: 0x1f03804, Func Offset: 0xb4
	// Line 1176, Address: 0x1f03830, Func Offset: 0xe0
	// Line 1177, Address: 0x1f03850, Func Offset: 0x100
	// Line 1178, Address: 0x1f0387c, Func Offset: 0x12c
	// Line 1179, Address: 0x1f038a8, Func Offset: 0x158
	// Line 1180, Address: 0x1f038d4, Func Offset: 0x184
	// Line 1184, Address: 0x1f03900, Func Offset: 0x1b0
	// Line 1186, Address: 0x1f03908, Func Offset: 0x1b8
	// Line 1188, Address: 0x1f03928, Func Offset: 0x1d8
	// Line 1190, Address: 0x1f03938, Func Offset: 0x1e8
	// Line 1191, Address: 0x1f0395c, Func Offset: 0x20c
	// Line 1192, Address: 0x1f03964, Func Offset: 0x214
	// Line 1194, Address: 0x1f03970, Func Offset: 0x220
	// Line 1197, Address: 0x1f0398c, Func Offset: 0x23c
	// Line 1199, Address: 0x1f039b0, Func Offset: 0x260
	// Line 1200, Address: 0x1f039f8, Func Offset: 0x2a8
	// Line 1201, Address: 0x1f03a00, Func Offset: 0x2b0
	// Line 1203, Address: 0x1f03a0c, Func Offset: 0x2bc
	// Line 1206, Address: 0x1f03a28, Func Offset: 0x2d8
	// Line 1208, Address: 0x1f03a4c, Func Offset: 0x2fc
	// Line 1210, Address: 0x1f03a98, Func Offset: 0x348
	// Line 1211, Address: 0x1f03acc, Func Offset: 0x37c
	// Line 1212, Address: 0x1f03ad4, Func Offset: 0x384
	// Line 1214, Address: 0x1f03ae0, Func Offset: 0x390
	// Line 1215, Address: 0x1f03ae8, Func Offset: 0x398
	// Func End, Address: 0x1f03b00, Func Offset: 0x3b0
}

// 
// Start address: 0x1f03b00
int EvProgLookMetalBox()
{
	// Line 1220, Address: 0x1f03b00, Func Offset: 0
	// Line 1221, Address: 0x1f03b08, Func Offset: 0x8
	// Line 1222, Address: 0x1f03b20, Func Offset: 0x20
	// Line 1225, Address: 0x1f03b3c, Func Offset: 0x3c
	// Line 1231, Address: 0x1f03b7c, Func Offset: 0x7c
	// Func End, Address: 0x1f03b8c, Func Offset: 0x8c
}

// 
// Start address: 0x1f03b90
int EvProgLauraGoHospital()
{
	DramaDemo_PlayInfo info;
	// Line 924, Address: 0x1f03b90, Func Offset: 0
	// Line 927, Address: 0x1f03bc0, Func Offset: 0x30
	// Line 930, Address: 0x1f03bc8, Func Offset: 0x38
	// Line 933, Address: 0x1f03bd0, Func Offset: 0x40
	// Line 937, Address: 0x1f03bd8, Func Offset: 0x48
	// Line 940, Address: 0x1f03be0, Func Offset: 0x50
	// Line 943, Address: 0x1f03be8, Func Offset: 0x58
	// Line 970, Address: 0x1f03bf0, Func Offset: 0x60
	// Func End, Address: 0x1f03bf8, Func Offset: 0x68
	// Line 1236, Address: 0x1f03b90, Func Offset: 0
	// Line 1258, Address: 0x1f03b98, Func Offset: 0x8
	// Line 1260, Address: 0x1f03bc8, Func Offset: 0x38
	// Line 1261, Address: 0x1f03bd8, Func Offset: 0x48
	// Line 1262, Address: 0x1f03be4, Func Offset: 0x54
	// Line 1263, Address: 0x1f03bf8, Func Offset: 0x68
	// Line 1266, Address: 0x1f03c0c, Func Offset: 0x7c
	// Line 1267, Address: 0x1f03c38, Func Offset: 0xa8
	// Line 1270, Address: 0x1f03c40, Func Offset: 0xb0
	// Line 1271, Address: 0x1f03c4c, Func Offset: 0xbc
	// Line 1272, Address: 0x1f03c58, Func Offset: 0xc8
	// Line 1273, Address: 0x1f03c64, Func Offset: 0xd4
	// Line 1274, Address: 0x1f03c70, Func Offset: 0xe0
	// Line 1275, Address: 0x1f03c84, Func Offset: 0xf4
	// Line 1276, Address: 0x1f03c8c, Func Offset: 0xfc
	// Line 1277, Address: 0x1f03c94, Func Offset: 0x104
	// Line 1278, Address: 0x1f03ca0, Func Offset: 0x110
	// Line 1279, Address: 0x1f03cb8, Func Offset: 0x128
	// Line 1281, Address: 0x1f03cc4, Func Offset: 0x134
	// Line 1282, Address: 0x1f03cc8, Func Offset: 0x138
	// Func End, Address: 0x1f03cd8, Func Offset: 0x148
}

// 
// Start address: 0x1f03ce0
int EvProgGetSteelPipe()
{
	// Line 1287, Address: 0x1f03ce0, Func Offset: 0
	// Line 1288, Address: 0x1f03ce8, Func Offset: 0x8
	// Line 1289, Address: 0x1f03cf8, Func Offset: 0x18
	// Func End, Address: 0x1f03d08, Func Offset: 0x28
}

// 
// Start address: 0x1f03d10
int EvProgGetLostMemory()
{
	SubCharacter* scp;
	// Line 1294, Address: 0x1f03d10, Func Offset: 0
	// Line 1297, Address: 0x1f03d18, Func Offset: 0x8
	// Line 1299, Address: 0x1f03d84, Func Offset: 0x74
	// Line 1300, Address: 0x1f03d98, Func Offset: 0x88
	// Line 1301, Address: 0x1f03da8, Func Offset: 0x98
	// Line 1302, Address: 0x1f03db4, Func Offset: 0xa4
	// Line 1305, Address: 0x1f03dc8, Func Offset: 0xb8
	// Line 1306, Address: 0x1f03ddc, Func Offset: 0xcc
	// Line 1307, Address: 0x1f03dec, Func Offset: 0xdc
	// Line 1308, Address: 0x1f03e08, Func Offset: 0xf8
	// Line 1309, Address: 0x1f03e14, Func Offset: 0x104
	// Line 1313, Address: 0x1f03e28, Func Offset: 0x118
	// Line 1315, Address: 0x1f03e48, Func Offset: 0x138
	// Line 1316, Address: 0x1f03e58, Func Offset: 0x148
	// Line 1320, Address: 0x1f03e6c, Func Offset: 0x15c
	// Line 1321, Address: 0x1f03e74, Func Offset: 0x164
	// Line 1322, Address: 0x1f03e7c, Func Offset: 0x16c
	// Line 1323, Address: 0x1f03e84, Func Offset: 0x174
	// Line 1324, Address: 0x1f03ea8, Func Offset: 0x198
	// Line 1327, Address: 0x1f03eb0, Func Offset: 0x1a0
	// Line 1328, Address: 0x1f03eb8, Func Offset: 0x1a8
	// Line 1329, Address: 0x1f03ec0, Func Offset: 0x1b0
	// Line 1330, Address: 0x1f03ec8, Func Offset: 0x1b8
	// Line 1331, Address: 0x1f03ef0, Func Offset: 0x1e0
	// Line 1332, Address: 0x1f03f04, Func Offset: 0x1f4
	// Line 1335, Address: 0x1f03f0c, Func Offset: 0x1fc
	// Line 1336, Address: 0x1f03f14, Func Offset: 0x204
	// Line 1337, Address: 0x1f03f1c, Func Offset: 0x20c
	// Line 1338, Address: 0x1f03f24, Func Offset: 0x214
	// Line 1339, Address: 0x1f03f2c, Func Offset: 0x21c
	// Line 1340, Address: 0x1f03f40, Func Offset: 0x230
	// Line 1341, Address: 0x1f03f50, Func Offset: 0x240
	// Line 1342, Address: 0x1f03f64, Func Offset: 0x254
	// Line 1345, Address: 0x1f03f6c, Func Offset: 0x25c
	// Line 1346, Address: 0x1f03f90, Func Offset: 0x280
	// Line 1349, Address: 0x1f03f98, Func Offset: 0x288
	// Line 1350, Address: 0x1f03fa8, Func Offset: 0x298
	// Line 1351, Address: 0x1f03fbc, Func Offset: 0x2ac
	// Line 1353, Address: 0x1f03fc8, Func Offset: 0x2b8
	// Line 1354, Address: 0x1f03fcc, Func Offset: 0x2bc
	// Func End, Address: 0x1f03fdc, Func Offset: 0x2cc
}

// 
// Start address: 0x1f03fe0
int EvProgGetDogKey()
{
	// Line 1359, Address: 0x1f03fe0, Func Offset: 0
	// Line 1360, Address: 0x1f03fe8, Func Offset: 0x8
	// Line 1361, Address: 0x1f03ff8, Func Offset: 0x18
	// Func End, Address: 0x1f04008, Func Offset: 0x28
}

// 
// Start address: 0x1f04010
int EvProgEndMaria()
{
	DramaDemo_PlayInfo info;
	CharaData_DemoList chara_data[4];
	// Line 1366, Address: 0x1f04010, Func Offset: 0
	// Line 1406, Address: 0x1f04018, Func Offset: 0x8
	// Line 1408, Address: 0x1f04048, Func Offset: 0x38
	// Line 1409, Address: 0x1f04060, Func Offset: 0x50
	// Line 1410, Address: 0x1f04074, Func Offset: 0x64
	// Line 1411, Address: 0x1f04084, Func Offset: 0x74
	// Line 1412, Address: 0x1f04090, Func Offset: 0x80
	// Line 1413, Address: 0x1f040a4, Func Offset: 0x94
	// Line 1417, Address: 0x1f040b8, Func Offset: 0xa8
	// Line 1418, Address: 0x1f040e4, Func Offset: 0xd4
	// Line 1421, Address: 0x1f040ec, Func Offset: 0xdc
	// Line 1422, Address: 0x1f040f8, Func Offset: 0xe8
	// Line 1423, Address: 0x1f04104, Func Offset: 0xf4
	// Line 1424, Address: 0x1f04110, Func Offset: 0x100
	// Line 1425, Address: 0x1f0411c, Func Offset: 0x10c
	// Line 1427, Address: 0x1f04128, Func Offset: 0x118
	// Line 1428, Address: 0x1f0412c, Func Offset: 0x11c
	// Func End, Address: 0x1f0413c, Func Offset: 0x12c
}

// 
// Start address: 0x1f04140
void EvStageInit()
{
	// Line 1434, Address: 0x1f04140, Func Offset: 0
	// Line 1435, Address: 0x1f04158, Func Offset: 0x18
	// Line 1436, Address: 0x1f04170, Func Offset: 0x30
	// Line 1437, Address: 0x1f04188, Func Offset: 0x48
	// Line 1438, Address: 0x1f041a0, Func Offset: 0x60
	// Line 1439, Address: 0x1f041b8, Func Offset: 0x78
	// Line 1441, Address: 0x1f041d0, Func Offset: 0x90
	// Line 1445, Address: 0x1f04228, Func Offset: 0xe8
	// Line 1446, Address: 0x1f0423c, Func Offset: 0xfc
	// Func End, Address: 0x1f04244, Func Offset: 0x104
}

// 
// Start address: 0x1f04250
int EvCharaDataClear()
{
	// Line 1452, Address: 0x1f04250, Func Offset: 0
	// Line 1456, Address: 0x1f042b0, Func Offset: 0x60
	// Line 1457, Address: 0x1f042bc, Func Offset: 0x6c
	// Line 1458, Address: 0x1f042c0, Func Offset: 0x70
	// Func End, Address: 0x1f042c8, Func Offset: 0x78
}

// 
// Start address: 0x1f042d0
void EvRoomInit()
{
	float vec0[4];
	SubCharacter* scp;
	CharaData_DemoList go_hsp_chara[5];
	CharaData_DemoList bowl2_chara[3];
	float lau_vec[4][2];
	float letter_vec[4][2];
	CharaData_DemoList wall_chara[4];
	// Line 1463, Address: 0x1f042d0, Func Offset: 0
	// Line 1502, Address: 0x1f042d8, Func Offset: 0x8
	// Line 1504, Address: 0x1f042e0, Func Offset: 0x10
	// Line 1505, Address: 0x1f042f8, Func Offset: 0x28
	// Line 1506, Address: 0x1f0430c, Func Offset: 0x3c
	// Line 1508, Address: 0x1f04328, Func Offset: 0x58
	// Line 1510, Address: 0x1f04344, Func Offset: 0x74
	// Line 1511, Address: 0x1f04354, Func Offset: 0x84
	// Line 1512, Address: 0x1f0435c, Func Offset: 0x8c
	// Line 1513, Address: 0x1f0436c, Func Offset: 0x9c
	// Line 1515, Address: 0x1f04398, Func Offset: 0xc8
	// Line 1516, Address: 0x1f043a8, Func Offset: 0xd8
	// Line 1517, Address: 0x1f043c4, Func Offset: 0xf4
	// Line 1518, Address: 0x1f043d4, Func Offset: 0x104
	// Line 1519, Address: 0x1f043dc, Func Offset: 0x10c
	// Line 1520, Address: 0x1f043fc, Func Offset: 0x12c
	// Line 1521, Address: 0x1f0440c, Func Offset: 0x13c
	// Line 1523, Address: 0x1f04434, Func Offset: 0x164
	// Line 1524, Address: 0x1f04448, Func Offset: 0x178
	// Line 1526, Address: 0x1f04464, Func Offset: 0x194
	// Line 1527, Address: 0x1f04474, Func Offset: 0x1a4
	// Line 1529, Address: 0x1f044a4, Func Offset: 0x1d4
	// Line 1530, Address: 0x1f044b4, Func Offset: 0x1e4
	// Line 1531, Address: 0x1f044c8, Func Offset: 0x1f8
	// Line 1533, Address: 0x1f044e4, Func Offset: 0x214
	// Line 1536, Address: 0x1f04500, Func Offset: 0x230
	// Line 1538, Address: 0x1f0451c, Func Offset: 0x24c
	// Line 1540, Address: 0x1f04538, Func Offset: 0x268
	// Line 1542, Address: 0x1f04554, Func Offset: 0x284
	// Line 1543, Address: 0x1f04564, Func Offset: 0x294
	// Line 1545, Address: 0x1f04594, Func Offset: 0x2c4
	// Line 1546, Address: 0x1f045a8, Func Offset: 0x2d8
	// Line 1548, Address: 0x1f045c4, Func Offset: 0x2f4
	// Line 1550, Address: 0x1f045d4, Func Offset: 0x304
	// Func End, Address: 0x1f045e4, Func Offset: 0x314
}

// 
// Start address: 0x1f045f0
void EvAllTimeFunc()
{
	int j;
	int i;
	int pos;
	int pos_z;
	int pos_x;
	int disp_ctrl_list[129];
	// Line 1558, Address: 0x1f045f0, Func Offset: 0
	// Line 1563, Address: 0x1f04608, Func Offset: 0x18
	// Line 1564, Address: 0x1f0460c, Func Offset: 0x1c
	// Line 1565, Address: 0x1f04640, Func Offset: 0x50
	// Line 1567, Address: 0x1f04654, Func Offset: 0x64
	// Line 1569, Address: 0x1f04670, Func Offset: 0x80
	// Line 1570, Address: 0x1f0467c, Func Offset: 0x8c
	// Line 1571, Address: 0x1f04688, Func Offset: 0x98
	// Line 1572, Address: 0x1f04698, Func Offset: 0xa8
	// Line 1575, Address: 0x1f046e8, Func Offset: 0xf8
	// Line 1576, Address: 0x1f046f0, Func Offset: 0x100
	// Line 1578, Address: 0x1f046f8, Func Offset: 0x108
	// Line 1579, Address: 0x1f04704, Func Offset: 0x114
	// Line 1581, Address: 0x1f0470c, Func Offset: 0x11c
	// Line 1582, Address: 0x1f04718, Func Offset: 0x128
	// Line 1584, Address: 0x1f04720, Func Offset: 0x130
	// Line 1585, Address: 0x1f0472c, Func Offset: 0x13c
	// Line 1587, Address: 0x1f04734, Func Offset: 0x144
	// Line 1588, Address: 0x1f0473c, Func Offset: 0x14c
	// Line 1589, Address: 0x1f04740, Func Offset: 0x150
	// Line 1590, Address: 0x1f04754, Func Offset: 0x164
	// Line 1591, Address: 0x1f04764, Func Offset: 0x174
	// Line 1592, Address: 0x1f04770, Func Offset: 0x180
	// Func End, Address: 0x1f04790, Func Offset: 0x1a0
}

// 
// Start address: 0x1f04790
int EvBgmControl()
{
	// Line 1598, Address: 0x1f04790, Func Offset: 0
	// Line 1599, Address: 0x1f047b4, Func Offset: 0x24
	// Line 1601, Address: 0x1f047c0, Func Offset: 0x30
	// Func End, Address: 0x1f047c8, Func Offset: 0x38
}

// 
// Start address: 0x1f047d0
void EvMariaInParkSet()
{
	float vec0[4];
	SubCharacter* scp;
	float mar_pos[4][2];
	// Line 1606, Address: 0x1f047d0, Func Offset: 0
	// Line 1613, Address: 0x1f047d8, Func Offset: 0x8
	// Line 1614, Address: 0x1f047f0, Func Offset: 0x20
	// Line 1615, Address: 0x1f04804, Func Offset: 0x34
	// Line 1616, Address: 0x1f0480c, Func Offset: 0x3c
	// Line 1617, Address: 0x1f04814, Func Offset: 0x44
	// Line 1618, Address: 0x1f04820, Func Offset: 0x50
	// Line 1619, Address: 0x1f04840, Func Offset: 0x70
	// Line 1620, Address: 0x1f04848, Func Offset: 0x78
	// Line 1621, Address: 0x1f04854, Func Offset: 0x84
	// Func End, Address: 0x1f04864, Func Offset: 0x94
}

// 
// Start address: 0x1f04870
void EvLadyBackDisplay(int* list)
{
	// Line 1626, Address: 0x1f04870, Func Offset: 0
	// Line 1627, Address: 0x1f04880, Func Offset: 0x10
	// Line 1628, Address: 0x1f04898, Func Offset: 0x28
	// Line 1629, Address: 0x1f048a8, Func Offset: 0x38
	// Line 1630, Address: 0x1f048bc, Func Offset: 0x4c
	// Line 1631, Address: 0x1f048dc, Func Offset: 0x6c
	// Line 1632, Address: 0x1f048ec, Func Offset: 0x7c
	// Line 1633, Address: 0x1f04900, Func Offset: 0x90
	// Line 1634, Address: 0x1f04908, Func Offset: 0x98
	// Line 1636, Address: 0x1f04918, Func Offset: 0xa8
	// Func End, Address: 0x1f0492c, Func Offset: 0xbc
}

// 
// Start address: 0x1f04930
void EvSignalControlCc10(int* list)
{
	// Line 1640, Address: 0x1f04930, Func Offset: 0
	// Line 1643, Address: 0x1f04940, Func Offset: 0x10
	// Line 1644, Address: 0x1f0497c, Func Offset: 0x4c
	// Line 1645, Address: 0x1f0499c, Func Offset: 0x6c
	// Line 1652, Address: 0x1f049a8, Func Offset: 0x78
	// Line 1653, Address: 0x1f049bc, Func Offset: 0x8c
	// Line 1654, Address: 0x1f049d8, Func Offset: 0xa8
	// Line 1655, Address: 0x1f049e4, Func Offset: 0xb4
	// Line 1656, Address: 0x1f049fc, Func Offset: 0xcc
	// Line 1657, Address: 0x1f04a08, Func Offset: 0xd8
	// Line 1659, Address: 0x1f04a24, Func Offset: 0xf4
	// Line 1664, Address: 0x1f04a38, Func Offset: 0x108
	// Line 1665, Address: 0x1f04a74, Func Offset: 0x144
	// Line 1666, Address: 0x1f04a90, Func Offset: 0x160
	// Line 1668, Address: 0x1f04a9c, Func Offset: 0x16c
	// Line 1669, Address: 0x1f04ab0, Func Offset: 0x180
	// Line 1671, Address: 0x1f04acc, Func Offset: 0x19c
	// Line 1672, Address: 0x1f04ae0, Func Offset: 0x1b0
	// Func End, Address: 0x1f04af4, Func Offset: 0x1c4
}

// 
// Start address: 0x1f04b00
void EvSignalControlCc20(int* list)
{
	// Line 1674, Address: 0x1f04b00, Func Offset: 0
	// Line 1677, Address: 0x1f04b10, Func Offset: 0x10
	// Line 1678, Address: 0x1f04b4c, Func Offset: 0x4c
	// Line 1679, Address: 0x1f04b6c, Func Offset: 0x6c
	// Line 1686, Address: 0x1f04b78, Func Offset: 0x78
	// Line 1687, Address: 0x1f04b8c, Func Offset: 0x8c
	// Line 1688, Address: 0x1f04ba8, Func Offset: 0xa8
	// Line 1689, Address: 0x1f04bb4, Func Offset: 0xb4
	// Line 1690, Address: 0x1f04bd0, Func Offset: 0xd0
	// Line 1691, Address: 0x1f04bdc, Func Offset: 0xdc
	// Line 1693, Address: 0x1f04bf4, Func Offset: 0xf4
	// Line 1698, Address: 0x1f04c08, Func Offset: 0x108
	// Line 1699, Address: 0x1f04c44, Func Offset: 0x144
	// Line 1700, Address: 0x1f04c60, Func Offset: 0x160
	// Line 1702, Address: 0x1f04c6c, Func Offset: 0x16c
	// Line 1703, Address: 0x1f04c80, Func Offset: 0x180
	// Line 1705, Address: 0x1f04c9c, Func Offset: 0x19c
	// Line 1706, Address: 0x1f04cac, Func Offset: 0x1ac
	// Func End, Address: 0x1f04cc0, Func Offset: 0x1c0
}

// 
// Start address: 0x1f04cc0
void EvCharaDataLoadAfterWall()
{
	// Line 1644, Address: 0x1f04cc0, Func Offset: 0
	// Line 1647, Address: 0x1f04cdc, Func Offset: 0x1c
	// Line 1653, Address: 0x1f04d04, Func Offset: 0x44
	// Line 1654, Address: 0x1f04d28, Func Offset: 0x68
	// Line 1655, Address: 0x1f04d50, Func Offset: 0x90
	// Line 1656, Address: 0x1f04d54, Func Offset: 0x94
	// Line 1657, Address: 0x1f04d68, Func Offset: 0xa8
	// Line 1686, Address: 0x1f04d6c, Func Offset: 0xac
	// Func End, Address: 0x1f04d88, Func Offset: 0xc8
	// Line 1713, Address: 0x1f04cc0, Func Offset: 0
	// Line 1714, Address: 0x1f04cc8, Func Offset: 0x8
	// Line 1715, Address: 0x1f04cd0, Func Offset: 0x10
	// Line 1716, Address: 0x1f04ce4, Func Offset: 0x24
	// Line 1718, Address: 0x1f04d00, Func Offset: 0x40
	// Line 1721, Address: 0x1f04d1c, Func Offset: 0x5c
	// Line 1723, Address: 0x1f04d38, Func Offset: 0x78
	// Line 1725, Address: 0x1f04d54, Func Offset: 0x94
	// Func End, Address: 0x1f04d64, Func Offset: 0xa4
}

// 
// Start address: 0x1f04d70
void EvCamaraLostMemory()
{
	SubCharacter* scp;
	Event_CamSetData cam_data;
	// Line 1744, Address: 0x1f04d70, Func Offset: 0
	// Line 1752, Address: 0x1f04d78, Func Offset: 0x8
	// Line 1753, Address: 0x1f04d88, Func Offset: 0x18
	// Line 1754, Address: 0x1f04d90, Func Offset: 0x20
	// Line 1755, Address: 0x1f04dac, Func Offset: 0x3c
	// Line 1756, Address: 0x1f04db4, Func Offset: 0x44
	// Line 1760, Address: 0x1f04dbc, Func Offset: 0x4c
	// Line 1761, Address: 0x1f04dcc, Func Offset: 0x5c
	// Line 1764, Address: 0x1f04e1c, Func Offset: 0xac
	// Line 1765, Address: 0x1f04e28, Func Offset: 0xb8
	// Line 1767, Address: 0x1f04e30, Func Offset: 0xc0
	// Line 1768, Address: 0x1f04e38, Func Offset: 0xc8
	// Line 1771, Address: 0x1f04e84, Func Offset: 0x114
	// Line 1773, Address: 0x1f04eb0, Func Offset: 0x140
	// Line 1774, Address: 0x1f04ed8, Func Offset: 0x168
	// Line 1777, Address: 0x1f04ee4, Func Offset: 0x174
	// Func End, Address: 0x1f04ef4, Func Offset: 0x184
}

// 
// Start address: 0x1f04f00
float LinearTrim2(float Yen, float Yst, float Xen, float Xst, float Parm)
{
	// Line 1828, Address: 0x1f04f00, Func Offset: 0
	// Line 1829, Address: 0x1f04f20, Func Offset: 0x20
	// Func End, Address: 0x1f04f28, Func Offset: 0x28
}

// 
// Start address: 0x1f04f30
void CC_Demo_Fog_Hosei()
{
	float svt[4];
	float factor;
	int i;
	float svt[4];
	float factor;
	int i;
	int ev_check;
	float yuyami_time;
	float fnear;
	float ffar;
	// Line 1831, Address: 0x1f04f30, Func Offset: 0
	// Line 1837, Address: 0x1f04f44, Func Offset: 0x14
	// Line 1838, Address: 0x1f04f50, Func Offset: 0x20
	// Line 1840, Address: 0x1f04f64, Func Offset: 0x34
	// Line 1841, Address: 0x1f04f84, Func Offset: 0x54
	// Line 1842, Address: 0x1f04f88, Func Offset: 0x58
	// Line 1843, Address: 0x1f04fb8, Func Offset: 0x88
	// Line 1844, Address: 0x1f04fc0, Func Offset: 0x90
	// Line 1845, Address: 0x1f04fd4, Func Offset: 0xa4
	// Line 1850, Address: 0x1f04fd8, Func Offset: 0xa8
	// Line 1853, Address: 0x1f04fe8, Func Offset: 0xb8
	// Line 1856, Address: 0x1f05040, Func Offset: 0x110
	// Line 1858, Address: 0x1f05084, Func Offset: 0x154
	// Line 1859, Address: 0x1f050a4, Func Offset: 0x174
	// Line 1861, Address: 0x1f050e8, Func Offset: 0x1b8
	// Line 1862, Address: 0x1f050f4, Func Offset: 0x1c4
	// Line 1865, Address: 0x1f05100, Func Offset: 0x1d0
	// Line 1882, Address: 0x1f05120, Func Offset: 0x1f0
	// Line 1883, Address: 0x1f05130, Func Offset: 0x200
	// Line 1884, Address: 0x1f05140, Func Offset: 0x210
	// Line 1885, Address: 0x1f05150, Func Offset: 0x220
	// Line 1888, Address: 0x1f0516c, Func Offset: 0x23c
	// Line 1889, Address: 0x1f05194, Func Offset: 0x264
	// Line 1890, Address: 0x1f051a4, Func Offset: 0x274
	// Line 1891, Address: 0x1f051e0, Func Offset: 0x2b0
	// Line 1892, Address: 0x1f051f4, Func Offset: 0x2c4
	// Line 1893, Address: 0x1f05200, Func Offset: 0x2d0
	// Line 1895, Address: 0x1f05214, Func Offset: 0x2e4
	// Line 1896, Address: 0x1f05224, Func Offset: 0x2f4
	// Line 1897, Address: 0x1f05260, Func Offset: 0x330
	// Line 1898, Address: 0x1f05274, Func Offset: 0x344
	// Line 1899, Address: 0x1f05278, Func Offset: 0x348
	// Line 1901, Address: 0x1f05290, Func Offset: 0x360
	// Line 1902, Address: 0x1f052a0, Func Offset: 0x370
	// Line 1903, Address: 0x1f052d8, Func Offset: 0x3a8
	// Line 1906, Address: 0x1f052ec, Func Offset: 0x3bc
	// Line 1908, Address: 0x1f052f8, Func Offset: 0x3c8
	// Line 1911, Address: 0x1f05358, Func Offset: 0x428
	// Line 1913, Address: 0x1f0536c, Func Offset: 0x43c
	// Line 1920, Address: 0x1f05394, Func Offset: 0x464
	// Line 1943, Address: 0x1f053b4, Func Offset: 0x484
	// Line 1945, Address: 0x1f053bc, Func Offset: 0x48c
	// Line 1954, Address: 0x1f05408, Func Offset: 0x4d8
	// Line 1955, Address: 0x1f05430, Func Offset: 0x500
	// Line 1956, Address: 0x1f05440, Func Offset: 0x510
	// Line 1957, Address: 0x1f05478, Func Offset: 0x548
	// Line 1958, Address: 0x1f0548c, Func Offset: 0x55c
	// Line 1959, Address: 0x1f05494, Func Offset: 0x564
	// Line 1960, Address: 0x1f054ac, Func Offset: 0x57c
	// Line 1961, Address: 0x1f054d8, Func Offset: 0x5a8
	// Line 1962, Address: 0x1f054ec, Func Offset: 0x5bc
	// Line 1963, Address: 0x1f054f0, Func Offset: 0x5c0
	// Line 1965, Address: 0x1f05508, Func Offset: 0x5d8
	// Line 1967, Address: 0x1f05510, Func Offset: 0x5e0
	// Line 1968, Address: 0x1f05520, Func Offset: 0x5f0
	// Line 1969, Address: 0x1f05534, Func Offset: 0x604
	// Line 1970, Address: 0x1f05550, Func Offset: 0x620
	// Line 1973, Address: 0x1f05558, Func Offset: 0x628
	// Line 1975, Address: 0x1f05574, Func Offset: 0x644
	// Line 1978, Address: 0x1f05590, Func Offset: 0x660
	// Line 1983, Address: 0x1f055ac, Func Offset: 0x67c
	// Func End, Address: 0x1f055c8, Func Offset: 0x698
}

