typedef union fsFile;
typedef struct Enemy_List;
typedef struct SubCharacter;
typedef struct fsMgcFile;
typedef struct _anon0;
typedef struct _AnimeInfo;
typedef struct _anon1;
typedef struct Pad_KeyConfig;
typedef struct shSkelton;
typedef struct shPlayerWork;
typedef struct _anon2;
typedef union fsFileIndex;
typedef struct DrawEnvData;
typedef struct _anon3;
typedef struct shBattleFight;
typedef struct Stage_Data;
typedef struct Event_List;
typedef struct shBattleShot;
typedef struct CharaData_DemoList;
typedef struct Item_List;
typedef struct shBattleArea;
typedef struct Model_List;
typedef struct shBattleInfo;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct DramaDemo_MessageTime;
typedef struct Playing_Info;
typedef struct DramaDemo_PlayInfo;
typedef struct _CL_VHIT_WALL;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef struct PAD_3D;
typedef struct _anon4;
typedef union _anon5;
typedef struct fsCdFile;
typedef struct _CL_VHIT_RESULT;
typedef union _anon6;
typedef struct PAD_2D;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct _CL_HITPOLY_PLANE;
typedef struct PAD_INFO;
typedef struct sh2gfw_AREA_HEAD;
typedef struct fsMgfFile;
typedef struct _anon7;
typedef struct PicDraw_Data;
typedef struct fsHdFile;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct Item;
typedef struct fsMgpFile;

typedef void(*type_1)(SubCharacter*);
typedef void(*type_10)();
typedef int(*type_34)();
typedef void(*type_88)(SubCharacter*);

typedef unsigned char type_0[4];
typedef unsigned char type_2[4];
typedef unsigned char type_3[2];
typedef unsigned char type_4[2][5];
typedef float type_5[4][2];
typedef unsigned char type_6[4];
typedef fsFileIndex type_7[1];
typedef fsFileIndex type_8[1];
typedef unsigned short type_9[3];
typedef Event_List type_11[73];
typedef _AnimeInfo type_12[24];
typedef CharaData_DemoList type_13[2];
typedef fsFileIndex type_14[1];
typedef Enemy_List type_15[15];
typedef unsigned char type_16[2];
typedef unsigned char type_17[2];
typedef unsigned char type_18[3];
typedef CharaData_DemoList type_19[3];
typedef unsigned int type_20[255];
typedef unsigned int type_21[32];
typedef int type_22[7];
typedef _AnimeInfo type_23[5];
typedef unsigned char type_24[14];
typedef unsigned char type_25[4];
typedef float type_26[4];
typedef fsFileIndex type_27[1];
typedef char type_28[4];
typedef char type_29[4];
typedef CharaData_DemoList type_30[3];
typedef fsFileIndex type_31[1];
typedef char type_32[4];
typedef int type_33[6];
typedef char type_35[4];
typedef fsFileIndex type_36[1];
typedef char type_37[4];
typedef _AnimeInfo type_38[33];
typedef unsigned char type_39[97];
typedef unsigned short type_40[4];
typedef unsigned short type_41[4][8];
typedef float type_42[4][2];
typedef fsFileIndex type_43[1];
typedef char type_44[6];
typedef fsFileIndex type_45[1];
typedef fsFileIndex type_46[1];
typedef _AnimeInfo type_47[11];
typedef Item_List type_48[7];
typedef _AnimeInfo type_49[30];
typedef fsFileIndex type_50[1];
typedef float type_51[2];
typedef float type_52[2][4];
typedef fsFileIndex type_53[1];
typedef _CL_HITPOLY_PLANE type_54[8];
typedef fsFileIndex type_55[1];
typedef CharaData_DemoList type_56[2];
typedef unsigned char type_57[2];
typedef fsFileIndex type_58[1];
typedef _AnimeInfo type_59[17];
typedef unsigned char type_60[20];
typedef fsFileIndex type_61[1];
typedef char type_62[0];
typedef fsFileIndex type_63[1];
typedef _AnimeInfo type_64[34];
typedef CharaData_DemoList type_65[2];
typedef fsFileIndex type_66[1];
typedef unsigned char type_67[778];
typedef fsFileIndex type_68[1];
typedef _AnimeInfo type_69[17];
typedef fsFileIndex type_70[1];
typedef Model_List type_71[9];
typedef float type_72[7];
typedef unsigned int type_73[7];
typedef unsigned char type_74[14];
typedef float type_75[4][4];
typedef float type_76[4];
typedef float type_77[4][4];
typedef _AnimeInfo type_78[17];
typedef shAttackInfo type_79[66];
typedef PAD_INFO type_80[10];
typedef CharaData_DemoList type_81[3];
typedef CharaData_DemoList type_82[4];
typedef unsigned char type_83[2];
typedef float type_84[2];
typedef unsigned char type_85[2][8];
typedef unsigned char type_86[0];
typedef int(*type_87)()[21];
typedef unsigned int type_89[2];
typedef float type_90[4];
typedef _AnimeInfo type_91[22];
typedef _AnimeInfo type_92[33];
typedef unsigned char type_93[69];
typedef unsigned short type_94[11];
typedef unsigned char type_95[0];
typedef _CL_HITPOLY_PLANE type_96[24];
typedef CharaData_DemoList type_97[4];
typedef float type_98[4][2];

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

struct _anon1
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

struct _anon2
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

union fsFileIndex
{
	_anon3 index;
	unsigned long pack;
};

struct DrawEnvData
{
	int map_id_name;
	char parallelLNum;
	char FakeSpotNum;
	char FakePointNum;
	char pointLNum;
	char spotLNum;
	char NightOrDay;
	short ShadowColor;
	short ShadowForceLightNo;
	short ShadowDarkNess;
	float pLight_Dir0[4];
	float pLight_Col0[4];
	float pLight_Dir1[4];
	float pLight_Col1[4];
	float pLight_Dir2[4];
	float pLight_Col2[4];
	float SpotCol0[4];
	float SpotDecayParm0[4];
	float SpotParm[4];
	float FogParm[4];
	float Ld_0[4];
	float Ld_1[4];
	float Ld_2[4];
	float Ld_3[4];
	float Ld_4[4];
	float Ld_5[4];
	float Ld_6[4];
	float Ld_7[4];
	float Ld_8[4];
	float Ld_9[4];
	float Ld_A[4];
	float Ld_B[4];
	float Ld_C[4];
	float Ld_D[4];
	float Ld_E[4];
	float MoveFogCol[4];
	float Ambient[4];
	float BaseAmbient[4];
	float BaseColor[4];
	float VertexAmbient[4];
};

struct _anon3
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
	_anon1* gfw_func;
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

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
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

struct PAD_3D
{
	char round_way;
	unsigned char reserved1;
	unsigned char lslide;
	unsigned char rslide;
	unsigned char lturn180;
	unsigned char rturn180;
};

struct _anon4
{
	float x;
	float y;
	float z;
	float w;
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

union _anon6
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
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

struct sh2gfw_AREA_HEAD
{
	unsigned int area_id;
	unsigned int toGlobalTexHead;
	unsigned int toGlobalClutsHead;
	unsigned int date;
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

struct _anon7
{
	float d[4][4];
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
_AnimeInfo pjames_stage_anim[22];
unsigned char ev_pos[778];
Event_List ev_list[73];
Item_List gi_list[7];
_CL_HITPOLY_PLANE clActWallList_ap42[24];
_CL_HITPOLY_PLANE clActFloorList_ap42[8];
int(*ev_prog)()[21];
Model_List mdl_list[9];
Enemy_List en_list[15];
_anon1 gfw_func;
Stage_Data stage_apart_e2f;
float tv_pos[4];
float clock_vec_0[4][2];
float clock_vec_1[4][2];
shPlayerWork sh2jms;
int ev_s_step;
int ev_p_step;
Pad_KeyConfig key_config;
fsFileIndex data_pic_apt_clock_name_tex[1];
int ev_prog_flag_set;
int ev_cancel;
Playing_Info playing;
fsFileIndex data_pic_apt_clock_memo_2_tex[1];
fsFileIndex data_pic_apt_clock_memo_tex[1];
_anon2 game_flag;
fsFileIndex data_pic_apt_clock_hari_tex[1];
fsFileIndex data_pic_apt_clock_close_tex[1];
float demo_frame;
char MemShare_gp_data_buf[0];
fsFileIndex data_demo_tokei_0a2_clock_close_dds[1];
fsFileIndex data_pic_apt_clock_open_tex[1];
float total_demo_frame;
fsFileIndex data_demo_tokei_0a1_clock_open_dds[1];
char* layer_adr;
fsFileIndex data_demo_tokei_0c_b_clo_anm[1];
fsFileIndex data_demo_tokei_0b_b_clo_anm[1];
fsFileIndex data_demo_tokei_0c_clock_fail_dds[1];
fsFileIndex data_demo_tokei_0b_clock_push_dds[1];
unsigned char __otn_ana_01[0];
unsigned char __otn_ana_00[0];
Item item;
fsFileIndex data_demo_ana_ana_dds[1];
fsFileIndex data_demo_ana_c_ana_c_dds[1];
fsFileIndex data_pic_apt_p_dust_in_tex[1];
fsFileIndex data_demo_dust_dust_dds[1];
unsigned char* kao_dds;
float ev_timer;
fsFileIndex data_pic_apt_p_endhint_tex[1];
fsFileIndex data_demo_kao_kao_dds[1];

int EvProgThreeNameOnWall();
int EvProgHintOfClockSet();
int EvProgClockTime();
int EvProgClockNeedleMove();
void EvProgSubClockNeedleDraw(int open_or_close);
int EvProgUseClockKey();
int EvProgTryMoveClock();
int EvProgUseEmergencyKey();
int EvProgAnyoneInHole();
int EvProgNooneInHole();
int EvProgLookDustChute();
int EvProgUseCannedJuice();
int EvProgNoFaceCorpse();
int EvProgAnyoneCry();
int EvProgGetLight();
int EvProgGetApart202Key();
int EvProgEndHintRecoveryRead();
int EvProgEndHintMariaRead();
int EvProgEndHintSuicideRead();
int EvProgUseApart202Key();
int EvProgMonkeyKick206();
int EvCharaDataClear(int room);
void EvRoomInit();
void EvSoundCallAfterLoad();
void EvAllTimeFunc();
void Delete_RedPointLight();

// 
// Start address: 0x1f01e80
int EvProgThreeNameOnWall()
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
// Start address: 0x1f02150
int EvProgHintOfClockSet()
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
// Start address: 0x1f02480
int EvProgClockTime()
{
	int j;
	int i;
	int work;
	char c_work[6];
	// Line 387, Address: 0x1f02480, Func Offset: 0
	// Line 392, Address: 0x1f02490, Func Offset: 0x10
	// Line 394, Address: 0x1f024f0, Func Offset: 0x70
	// Line 395, Address: 0x1f02504, Func Offset: 0x84
	// Line 396, Address: 0x1f02518, Func Offset: 0x98
	// Line 400, Address: 0x1f0252c, Func Offset: 0xac
	// Line 403, Address: 0x1f02550, Func Offset: 0xd0
	// Line 404, Address: 0x1f02560, Func Offset: 0xe0
	// Line 405, Address: 0x1f02574, Func Offset: 0xf4
	// Line 408, Address: 0x1f0257c, Func Offset: 0xfc
	// Line 409, Address: 0x1f02584, Func Offset: 0x104
	// Line 410, Address: 0x1f0258c, Func Offset: 0x10c
	// Line 411, Address: 0x1f02598, Func Offset: 0x118
	// Line 412, Address: 0x1f025a0, Func Offset: 0x120
	// Line 413, Address: 0x1f025c4, Func Offset: 0x144
	// Line 416, Address: 0x1f025cc, Func Offset: 0x14c
	// Line 417, Address: 0x1f025d4, Func Offset: 0x154
	// Line 418, Address: 0x1f025dc, Func Offset: 0x15c
	// Line 419, Address: 0x1f025e8, Func Offset: 0x168
	// Line 420, Address: 0x1f025f0, Func Offset: 0x170
	// Line 421, Address: 0x1f02618, Func Offset: 0x198
	// Line 422, Address: 0x1f0262c, Func Offset: 0x1ac
	// Line 425, Address: 0x1f02634, Func Offset: 0x1b4
	// Line 426, Address: 0x1f0263c, Func Offset: 0x1bc
	// Line 427, Address: 0x1f02644, Func Offset: 0x1c4
	// Line 428, Address: 0x1f02650, Func Offset: 0x1d0
	// Line 429, Address: 0x1f02658, Func Offset: 0x1d8
	// Line 430, Address: 0x1f02660, Func Offset: 0x1e0
	// Line 432, Address: 0x1f0267c, Func Offset: 0x1fc
	// Line 433, Address: 0x1f02684, Func Offset: 0x204
	// Line 434, Address: 0x1f0268c, Func Offset: 0x20c
	// Line 436, Address: 0x1f02690, Func Offset: 0x210
	// Line 438, Address: 0x1f0269c, Func Offset: 0x21c
	// Line 439, Address: 0x1f02704, Func Offset: 0x284
	// Line 440, Address: 0x1f0272c, Func Offset: 0x2ac
	// Line 441, Address: 0x1f02738, Func Offset: 0x2b8
	// Line 442, Address: 0x1f02754, Func Offset: 0x2d4
	// Line 443, Address: 0x1f02758, Func Offset: 0x2d8
	// Line 444, Address: 0x1f02760, Func Offset: 0x2e0
	// Line 445, Address: 0x1f02780, Func Offset: 0x300
	// Line 446, Address: 0x1f02784, Func Offset: 0x304
	// Line 447, Address: 0x1f02788, Func Offset: 0x308
	// Line 448, Address: 0x1f027a4, Func Offset: 0x324
	// Line 449, Address: 0x1f027b4, Func Offset: 0x334
	// Line 450, Address: 0x1f027cc, Func Offset: 0x34c
	// Line 451, Address: 0x1f027e0, Func Offset: 0x360
	// Line 452, Address: 0x1f027e8, Func Offset: 0x368
	// Line 454, Address: 0x1f027fc, Func Offset: 0x37c
	// Line 455, Address: 0x1f0280c, Func Offset: 0x38c
	// Line 456, Address: 0x1f02820, Func Offset: 0x3a0
	// Line 459, Address: 0x1f02828, Func Offset: 0x3a8
	// Line 460, Address: 0x1f0284c, Func Offset: 0x3cc
	// Line 463, Address: 0x1f02854, Func Offset: 0x3d4
	// Line 464, Address: 0x1f02868, Func Offset: 0x3e8
	// Line 465, Address: 0x1f02878, Func Offset: 0x3f8
	// Line 467, Address: 0x1f02884, Func Offset: 0x404
	// Line 468, Address: 0x1f02888, Func Offset: 0x408
	// Func End, Address: 0x1f028a0, Func Offset: 0x420
	// Line 271, Address: 0x1f02480, Func Offset: 0
	// Line 272, Address: 0x1f02488, Func Offset: 0x8
	// Line 276, Address: 0x1f024b8, Func Offset: 0x38
	// Func End, Address: 0x1f024c8, Func Offset: 0x48
	// Line 349, Address: 0x1f02480, Func Offset: 0
	// Line 350, Address: 0x1f02488, Func Offset: 0x8
	// Line 351, Address: 0x1f02498, Func Offset: 0x18
	// Func End, Address: 0x1f024a8, Func Offset: 0x28
}

// 
// Start address: 0x1f028a0
int EvProgClockNeedleMove()
{
	int work;
	int mv_se;
	DramaDemo_PlayInfo info_2;
	CharaData_DemoList chara_2[3];
	DramaDemo_PlayInfo info_1;
	CharaData_DemoList chara_1[3];
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
// Start address: 0x1f03130
void EvProgSubClockNeedleDraw(int open_or_close)
{
	int i;
	int no;
	int otp;
	float y1;
	float y0;
	float x;
	float rot;
	float pos[2][4];
	float sinrot;
	float cosrot;
	PicDraw_Data pic;
	unsigned short tex[4][8];
	// Line 655, Address: 0x1f03130, Func Offset: 0
	// Line 675, Address: 0x1f0315c, Func Offset: 0x2c
	// Line 677, Address: 0x1f03178, Func Offset: 0x48
	// Line 679, Address: 0x1f03188, Func Offset: 0x58
	// Line 680, Address: 0x1f031ac, Func Offset: 0x7c
	// Line 682, Address: 0x1f031d8, Func Offset: 0xa8
	// Line 683, Address: 0x1f031e4, Func Offset: 0xb4
	// Line 686, Address: 0x1f03210, Func Offset: 0xe0
	// Line 687, Address: 0x1f03218, Func Offset: 0xe8
	// Line 688, Address: 0x1f03220, Func Offset: 0xf0
	// Line 689, Address: 0x1f03228, Func Offset: 0xf8
	// Line 690, Address: 0x1f03234, Func Offset: 0x104
	// Line 691, Address: 0x1f03238, Func Offset: 0x108
	// Line 694, Address: 0x1f03240, Func Offset: 0x110
	// Line 695, Address: 0x1f03248, Func Offset: 0x118
	// Line 696, Address: 0x1f03250, Func Offset: 0x120
	// Line 697, Address: 0x1f03254, Func Offset: 0x124
	// Line 699, Address: 0x1f032b4, Func Offset: 0x184
	// Line 700, Address: 0x1f032b8, Func Offset: 0x188
	// Line 703, Address: 0x1f032c0, Func Offset: 0x190
	// Line 704, Address: 0x1f032c8, Func Offset: 0x198
	// Line 705, Address: 0x1f032d0, Func Offset: 0x1a0
	// Line 706, Address: 0x1f032d4, Func Offset: 0x1a4
	// Line 709, Address: 0x1f03328, Func Offset: 0x1f8
	// Line 712, Address: 0x1f03330, Func Offset: 0x200
	// Line 713, Address: 0x1f0333c, Func Offset: 0x20c
	// Line 714, Address: 0x1f03340, Func Offset: 0x210
	// Line 715, Address: 0x1f03344, Func Offset: 0x214
	// Line 716, Address: 0x1f03348, Func Offset: 0x218
	// Line 718, Address: 0x1f0334c, Func Offset: 0x21c
	// Line 720, Address: 0x1f03350, Func Offset: 0x220
	// Line 721, Address: 0x1f03360, Func Offset: 0x230
	// Line 722, Address: 0x1f0336c, Func Offset: 0x23c
	// Line 723, Address: 0x1f03394, Func Offset: 0x264
	// Line 724, Address: 0x1f033a0, Func Offset: 0x270
	// Line 725, Address: 0x1f033b0, Func Offset: 0x280
	// Line 726, Address: 0x1f033bc, Func Offset: 0x28c
	// Line 727, Address: 0x1f033cc, Func Offset: 0x29c
	// Line 728, Address: 0x1f033d8, Func Offset: 0x2a8
	// Line 729, Address: 0x1f033e8, Func Offset: 0x2b8
	// Line 733, Address: 0x1f033f4, Func Offset: 0x2c4
	// Line 736, Address: 0x1f0347c, Func Offset: 0x34c
	// Line 737, Address: 0x1f034f8, Func Offset: 0x3c8
	// Line 740, Address: 0x1f03514, Func Offset: 0x3e4
	// Line 741, Address: 0x1f03574, Func Offset: 0x444
	// Line 742, Address: 0x1f03578, Func Offset: 0x448
	// Line 743, Address: 0x1f03584, Func Offset: 0x454
	// Line 744, Address: 0x1f03594, Func Offset: 0x464
	// Func End, Address: 0x1f035c4, Func Offset: 0x494
	// Line 495, Address: 0x1f03130, Func Offset: 0
	// Line 497, Address: 0x1f03138, Func Offset: 0x8
	// Line 499, Address: 0x1f0314c, Func Offset: 0x1c
	// Line 503, Address: 0x1f03194, Func Offset: 0x64
	// Line 505, Address: 0x1f031ac, Func Offset: 0x7c
	// Line 506, Address: 0x1f031f0, Func Offset: 0xc0
	// Line 507, Address: 0x1f03200, Func Offset: 0xd0
	// Line 508, Address: 0x1f03238, Func Offset: 0x108
	// Line 509, Address: 0x1f03250, Func Offset: 0x120
	// Line 510, Address: 0x1f03264, Func Offset: 0x134
	// Line 513, Address: 0x1f03274, Func Offset: 0x144
	// Func End, Address: 0x1f03284, Func Offset: 0x154
}

// 
// Start address: 0x1f035d0
int EvProgUseClockKey()
{
	// Line 751, Address: 0x1f035d0, Func Offset: 0
	// Line 758, Address: 0x1f035d4, Func Offset: 0x4
	// Func End, Address: 0x1f035dc, Func Offset: 0xc
}

// 
// Start address: 0x1f035e0
int EvProgTryMoveClock()
{
	int ret;
	int ox;
	DramaDemo_PlayInfo clock_x;
	int se;
	DramaDemo_PlayInfo clock_o;
	<unknown fundamental type (0xa510)>* anim_adr;
	CharaData_DemoList clock_x_chara[2];
	CharaData_DemoList clock_o_chara[2];
	// Line 764, Address: 0x1f035e0, Func Offset: 0
	// Line 799, Address: 0x1f035ec, Func Offset: 0xc
	// Line 800, Address: 0x1f03620, Func Offset: 0x40
	// Line 802, Address: 0x1f03624, Func Offset: 0x44
	// Line 804, Address: 0x1f03690, Func Offset: 0xb0
	// Line 805, Address: 0x1f036a4, Func Offset: 0xc4
	// Line 806, Address: 0x1f036b8, Func Offset: 0xd8
	// Line 807, Address: 0x1f036c4, Func Offset: 0xe4
	// Line 808, Address: 0x1f036cc, Func Offset: 0xec
	// Line 809, Address: 0x1f036e4, Func Offset: 0x104
	// Line 810, Address: 0x1f036f8, Func Offset: 0x118
	// Line 812, Address: 0x1f03714, Func Offset: 0x134
	// Line 813, Address: 0x1f0371c, Func Offset: 0x13c
	// Line 814, Address: 0x1f03734, Func Offset: 0x154
	// Line 815, Address: 0x1f03748, Func Offset: 0x168
	// Line 818, Address: 0x1f03764, Func Offset: 0x184
	// Line 821, Address: 0x1f03778, Func Offset: 0x198
	// Line 822, Address: 0x1f037a0, Func Offset: 0x1c0
	// Line 825, Address: 0x1f037a8, Func Offset: 0x1c8
	// Line 826, Address: 0x1f037b8, Func Offset: 0x1d8
	// Line 828, Address: 0x1f037e4, Func Offset: 0x204
	// Line 829, Address: 0x1f0380c, Func Offset: 0x22c
	// Line 831, Address: 0x1f03820, Func Offset: 0x240
	// Line 834, Address: 0x1f03828, Func Offset: 0x248
	// Line 835, Address: 0x1f03840, Func Offset: 0x260
	// Line 836, Address: 0x1f03848, Func Offset: 0x268
	// Line 837, Address: 0x1f0385c, Func Offset: 0x27c
	// Line 839, Address: 0x1f0387c, Func Offset: 0x29c
	// Line 840, Address: 0x1f03884, Func Offset: 0x2a4
	// Line 841, Address: 0x1f03898, Func Offset: 0x2b8
	// Line 844, Address: 0x1f038b8, Func Offset: 0x2d8
	// Line 845, Address: 0x1f038c4, Func Offset: 0x2e4
	// Line 846, Address: 0x1f038d8, Func Offset: 0x2f8
	// Line 847, Address: 0x1f038e0, Func Offset: 0x300
	// Line 848, Address: 0x1f038f4, Func Offset: 0x314
	// Line 852, Address: 0x1f03908, Func Offset: 0x328
	// Line 853, Address: 0x1f03910, Func Offset: 0x330
	// Line 854, Address: 0x1f03924, Func Offset: 0x344
	// Line 855, Address: 0x1f03958, Func Offset: 0x378
	// Line 857, Address: 0x1f03984, Func Offset: 0x3a4
	// Line 859, Address: 0x1f03990, Func Offset: 0x3b0
	// Line 860, Address: 0x1f03998, Func Offset: 0x3b8
	// Line 861, Address: 0x1f039b0, Func Offset: 0x3d0
	// Line 863, Address: 0x1f039c4, Func Offset: 0x3e4
	// Line 864, Address: 0x1f039cc, Func Offset: 0x3ec
	// Line 866, Address: 0x1f039f8, Func Offset: 0x418
	// Line 869, Address: 0x1f03a00, Func Offset: 0x420
	// Line 870, Address: 0x1f03a10, Func Offset: 0x430
	// Line 871, Address: 0x1f03a38, Func Offset: 0x458
	// Line 874, Address: 0x1f03a40, Func Offset: 0x460
	// Line 875, Address: 0x1f03a4c, Func Offset: 0x46c
	// Line 876, Address: 0x1f03a58, Func Offset: 0x478
	// Line 877, Address: 0x1f03a64, Func Offset: 0x484
	// Line 878, Address: 0x1f03a78, Func Offset: 0x498
	// Line 879, Address: 0x1f03a80, Func Offset: 0x4a0
	// Line 880, Address: 0x1f03a88, Func Offset: 0x4a8
	// Line 882, Address: 0x1f03ab0, Func Offset: 0x4d0
	// Line 883, Address: 0x1f03ab8, Func Offset: 0x4d8
	// Line 886, Address: 0x1f03ae0, Func Offset: 0x500
	// Line 888, Address: 0x1f03af4, Func Offset: 0x514
	// Line 889, Address: 0x1f03af8, Func Offset: 0x518
	// Line 890, Address: 0x1f03b0c, Func Offset: 0x52c
	// Line 892, Address: 0x1f03b18, Func Offset: 0x538
	// Line 893, Address: 0x1f03b1c, Func Offset: 0x53c
	// Func End, Address: 0x1f03b30, Func Offset: 0x550
}

// 
// Start address: 0x1f03b30
int EvProgUseEmergencyKey()
{
	// Line 899, Address: 0x1f03b30, Func Offset: 0
	// Line 900, Address: 0x1f03b38, Func Offset: 0x8
	// Line 902, Address: 0x1f03b58, Func Offset: 0x28
	// Func End, Address: 0x1f03b68, Func Offset: 0x38
	// Line 892, Address: 0x1f03b30, Func Offset: 0
	// Line 893, Address: 0x1f03b38, Func Offset: 0x8
	// Line 894, Address: 0x1f03b64, Func Offset: 0x34
	// Line 895, Address: 0x1f03b70, Func Offset: 0x40
	// Line 896, Address: 0x1f03b74, Func Offset: 0x44
	// Func End, Address: 0x1f03b84, Func Offset: 0x54
}

// 
// Start address: 0x1f03b70
int EvProgAnyoneInHole()
{
	int ret;
	DramaDemo_PlayInfo hole;
	CharaData_DemoList chara_data[4];
	// Line 908, Address: 0x1f03b70, Func Offset: 0
	// Line 931, Address: 0x1f03b7c, Func Offset: 0xc
	// Line 933, Address: 0x1f03be8, Func Offset: 0x78
	// Line 934, Address: 0x1f03bfc, Func Offset: 0x8c
	// Line 935, Address: 0x1f03c08, Func Offset: 0x98
	// Line 936, Address: 0x1f03c20, Func Offset: 0xb0
	// Line 937, Address: 0x1f03c34, Func Offset: 0xc4
	// Line 940, Address: 0x1f03c48, Func Offset: 0xd8
	// Line 941, Address: 0x1f03c5c, Func Offset: 0xec
	// Line 943, Address: 0x1f03c88, Func Offset: 0x118
	// Line 944, Address: 0x1f03c98, Func Offset: 0x128
	// Line 946, Address: 0x1f03cac, Func Offset: 0x13c
	// Line 949, Address: 0x1f03cb4, Func Offset: 0x144
	// Line 950, Address: 0x1f03ccc, Func Offset: 0x15c
	// Line 951, Address: 0x1f03ce0, Func Offset: 0x170
	// Line 952, Address: 0x1f03cec, Func Offset: 0x17c
	// Line 953, Address: 0x1f03d00, Func Offset: 0x190
	// Line 954, Address: 0x1f03d14, Func Offset: 0x1a4
	// Line 955, Address: 0x1f03d24, Func Offset: 0x1b4
	// Line 956, Address: 0x1f03d30, Func Offset: 0x1c0
	// Line 958, Address: 0x1f03d38, Func Offset: 0x1c8
	// Line 961, Address: 0x1f03d4c, Func Offset: 0x1dc
	// Line 962, Address: 0x1f03d50, Func Offset: 0x1e0
	// Line 963, Address: 0x1f03d60, Func Offset: 0x1f0
	// Line 964, Address: 0x1f03d90, Func Offset: 0x220
	// Line 965, Address: 0x1f03dd8, Func Offset: 0x268
	// Line 966, Address: 0x1f03e14, Func Offset: 0x2a4
	// Line 967, Address: 0x1f03e30, Func Offset: 0x2c0
	// Line 968, Address: 0x1f03e74, Func Offset: 0x304
	// Line 970, Address: 0x1f03e90, Func Offset: 0x320
	// Line 973, Address: 0x1f03e98, Func Offset: 0x328
	// Line 974, Address: 0x1f03eac, Func Offset: 0x33c
	// Line 975, Address: 0x1f03ee0, Func Offset: 0x370
	// Line 978, Address: 0x1f03ee8, Func Offset: 0x378
	// Line 979, Address: 0x1f03ef8, Func Offset: 0x388
	// Line 980, Address: 0x1f03f10, Func Offset: 0x3a0
	// Line 981, Address: 0x1f03f24, Func Offset: 0x3b4
	// Line 984, Address: 0x1f03f2c, Func Offset: 0x3bc
	// Line 985, Address: 0x1f03f38, Func Offset: 0x3c8
	// Line 986, Address: 0x1f03f44, Func Offset: 0x3d4
	// Line 987, Address: 0x1f03f50, Func Offset: 0x3e0
	// Line 988, Address: 0x1f03f5c, Func Offset: 0x3ec
	// Line 989, Address: 0x1f03f78, Func Offset: 0x408
	// Line 990, Address: 0x1f03f84, Func Offset: 0x414
	// Line 991, Address: 0x1f03f98, Func Offset: 0x428
	// Line 992, Address: 0x1f03fa0, Func Offset: 0x430
	// Line 993, Address: 0x1f03fb4, Func Offset: 0x444
	// Line 996, Address: 0x1f03fc8, Func Offset: 0x458
	// Line 997, Address: 0x1f03fdc, Func Offset: 0x46c
	// Line 999, Address: 0x1f03fe8, Func Offset: 0x478
	// Line 1000, Address: 0x1f03fec, Func Offset: 0x47c
	// Func End, Address: 0x1f04000, Func Offset: 0x490
}

// 
// Start address: 0x1f04000
int EvProgNooneInHole()
{
	int ret;
	DramaDemo_PlayInfo hole;
	CharaData_DemoList chara_data[4];
	// Line 1006, Address: 0x1f04000, Func Offset: 0
	// Line 1027, Address: 0x1f0400c, Func Offset: 0xc
	// Line 1029, Address: 0x1f04060, Func Offset: 0x60
	// Line 1030, Address: 0x1f04074, Func Offset: 0x74
	// Line 1031, Address: 0x1f04080, Func Offset: 0x80
	// Line 1032, Address: 0x1f04098, Func Offset: 0x98
	// Line 1033, Address: 0x1f040ac, Func Offset: 0xac
	// Line 1037, Address: 0x1f040c0, Func Offset: 0xc0
	// Line 1038, Address: 0x1f040d8, Func Offset: 0xd8
	// Line 1039, Address: 0x1f040ec, Func Offset: 0xec
	// Line 1040, Address: 0x1f040f8, Func Offset: 0xf8
	// Line 1041, Address: 0x1f0410c, Func Offset: 0x10c
	// Line 1042, Address: 0x1f04120, Func Offset: 0x120
	// Line 1043, Address: 0x1f04130, Func Offset: 0x130
	// Line 1044, Address: 0x1f0413c, Func Offset: 0x13c
	// Line 1046, Address: 0x1f04144, Func Offset: 0x144
	// Line 1050, Address: 0x1f04158, Func Offset: 0x158
	// Line 1051, Address: 0x1f04168, Func Offset: 0x168
	// Line 1052, Address: 0x1f04198, Func Offset: 0x198
	// Line 1053, Address: 0x1f041dc, Func Offset: 0x1dc
	// Line 1056, Address: 0x1f041e4, Func Offset: 0x1e4
	// Line 1057, Address: 0x1f041f4, Func Offset: 0x1f4
	// Line 1058, Address: 0x1f04228, Func Offset: 0x228
	// Line 1061, Address: 0x1f04230, Func Offset: 0x230
	// Line 1062, Address: 0x1f04240, Func Offset: 0x240
	// Line 1063, Address: 0x1f04254, Func Offset: 0x254
	// Line 1064, Address: 0x1f04268, Func Offset: 0x268
	// Line 1067, Address: 0x1f04270, Func Offset: 0x270
	// Line 1068, Address: 0x1f0427c, Func Offset: 0x27c
	// Line 1069, Address: 0x1f04288, Func Offset: 0x288
	// Line 1070, Address: 0x1f04294, Func Offset: 0x294
	// Line 1071, Address: 0x1f042a0, Func Offset: 0x2a0
	// Line 1072, Address: 0x1f042bc, Func Offset: 0x2bc
	// Line 1073, Address: 0x1f042c8, Func Offset: 0x2c8
	// Line 1074, Address: 0x1f042dc, Func Offset: 0x2dc
	// Line 1075, Address: 0x1f042f0, Func Offset: 0x2f0
	// Line 1076, Address: 0x1f042f8, Func Offset: 0x2f8
	// Line 1078, Address: 0x1f04304, Func Offset: 0x304
	// Line 1079, Address: 0x1f04308, Func Offset: 0x308
	// Func End, Address: 0x1f0431c, Func Offset: 0x31c
}

// 
// Start address: 0x1f04320
int EvProgLookDustChute()
{
	// Line 1085, Address: 0x1f04320, Func Offset: 0
	// Line 1086, Address: 0x1f04328, Func Offset: 0x8
	// Line 1088, Address: 0x1f04394, Func Offset: 0x74
	// Line 1089, Address: 0x1f043a8, Func Offset: 0x88
	// Line 1093, Address: 0x1f043bc, Func Offset: 0x9c
	// Line 1095, Address: 0x1f043dc, Func Offset: 0xbc
	// Line 1096, Address: 0x1f043ec, Func Offset: 0xcc
	// Line 1097, Address: 0x1f04400, Func Offset: 0xe0
	// Line 1100, Address: 0x1f04408, Func Offset: 0xe8
	// Line 1101, Address: 0x1f04410, Func Offset: 0xf0
	// Line 1102, Address: 0x1f04418, Func Offset: 0xf8
	// Line 1103, Address: 0x1f04420, Func Offset: 0x100
	// Line 1104, Address: 0x1f04444, Func Offset: 0x124
	// Line 1107, Address: 0x1f0444c, Func Offset: 0x12c
	// Line 1108, Address: 0x1f04454, Func Offset: 0x134
	// Line 1109, Address: 0x1f0445c, Func Offset: 0x13c
	// Line 1110, Address: 0x1f04464, Func Offset: 0x144
	// Line 1111, Address: 0x1f0449c, Func Offset: 0x17c
	// Line 1112, Address: 0x1f044b0, Func Offset: 0x190
	// Line 1115, Address: 0x1f044b8, Func Offset: 0x198
	// Line 1116, Address: 0x1f044c0, Func Offset: 0x1a0
	// Line 1117, Address: 0x1f044c8, Func Offset: 0x1a8
	// Line 1118, Address: 0x1f044d0, Func Offset: 0x1b0
	// Line 1119, Address: 0x1f044d8, Func Offset: 0x1b8
	// Line 1120, Address: 0x1f044ec, Func Offset: 0x1cc
	// Line 1121, Address: 0x1f044fc, Func Offset: 0x1dc
	// Line 1122, Address: 0x1f0450c, Func Offset: 0x1ec
	// Line 1123, Address: 0x1f04520, Func Offset: 0x200
	// Line 1124, Address: 0x1f0453c, Func Offset: 0x21c
	// Line 1127, Address: 0x1f04544, Func Offset: 0x224
	// Line 1128, Address: 0x1f0454c, Func Offset: 0x22c
	// Line 1129, Address: 0x1f04554, Func Offset: 0x234
	// Line 1130, Address: 0x1f0455c, Func Offset: 0x23c
	// Line 1131, Address: 0x1f04564, Func Offset: 0x244
	// Line 1132, Address: 0x1f04578, Func Offset: 0x258
	// Line 1133, Address: 0x1f04588, Func Offset: 0x268
	// Line 1134, Address: 0x1f0459c, Func Offset: 0x27c
	// Line 1137, Address: 0x1f045a4, Func Offset: 0x284
	// Line 1138, Address: 0x1f045ac, Func Offset: 0x28c
	// Line 1139, Address: 0x1f045b4, Func Offset: 0x294
	// Line 1140, Address: 0x1f045bc, Func Offset: 0x29c
	// Line 1141, Address: 0x1f045cc, Func Offset: 0x2ac
	// Line 1142, Address: 0x1f045e0, Func Offset: 0x2c0
	// Line 1145, Address: 0x1f045e8, Func Offset: 0x2c8
	// Line 1146, Address: 0x1f045fc, Func Offset: 0x2dc
	// Line 1147, Address: 0x1f0460c, Func Offset: 0x2ec
	// Line 1149, Address: 0x1f04618, Func Offset: 0x2f8
	// Line 1150, Address: 0x1f0461c, Func Offset: 0x2fc
	// Func End, Address: 0x1f0462c, Func Offset: 0x30c
}

// 
// Start address: 0x1f04630
int EvProgUseCannedJuice()
{
	int ret;
	int se_check;
	DramaDemo_PlayInfo juice;
	CharaData_DemoList chara_data[3];
	// Line 1156, Address: 0x1f04630, Func Offset: 0
	// Line 1176, Address: 0x1f0463c, Func Offset: 0xc
	// Line 1178, Address: 0x1f0466c, Func Offset: 0x3c
	// Line 1179, Address: 0x1f04684, Func Offset: 0x54
	// Line 1180, Address: 0x1f04698, Func Offset: 0x68
	// Line 1181, Address: 0x1f046a4, Func Offset: 0x74
	// Line 1182, Address: 0x1f046b8, Func Offset: 0x88
	// Line 1183, Address: 0x1f046c0, Func Offset: 0x90
	// Line 1187, Address: 0x1f046d4, Func Offset: 0xa4
	// Line 1188, Address: 0x1f046e8, Func Offset: 0xb8
	// Line 1189, Address: 0x1f0471c, Func Offset: 0xec
	// Line 1191, Address: 0x1f04748, Func Offset: 0x118
	// Line 1193, Address: 0x1f04754, Func Offset: 0x124
	// Line 1194, Address: 0x1f04770, Func Offset: 0x140
	// Line 1197, Address: 0x1f04778, Func Offset: 0x148
	// Line 1198, Address: 0x1f04784, Func Offset: 0x154
	// Line 1199, Address: 0x1f04790, Func Offset: 0x160
	// Line 1200, Address: 0x1f0479c, Func Offset: 0x16c
	// Line 1201, Address: 0x1f047a8, Func Offset: 0x178
	// Line 1202, Address: 0x1f047bc, Func Offset: 0x18c
	// Line 1203, Address: 0x1f047c4, Func Offset: 0x194
	// Line 1205, Address: 0x1f047d0, Func Offset: 0x1a0
	// Line 1206, Address: 0x1f047d4, Func Offset: 0x1a4
	// Func End, Address: 0x1f047e8, Func Offset: 0x1b8
}

// 
// Start address: 0x1f047f0
int EvProgNoFaceCorpse()
{
	DramaDemo_PlayInfo face;
	// Line 1212, Address: 0x1f047f0, Func Offset: 0
	// Line 1229, Address: 0x1f047f8, Func Offset: 0x8
	// Line 1231, Address: 0x1f04828, Func Offset: 0x38
	// Line 1232, Address: 0x1f04834, Func Offset: 0x44
	// Line 1233, Address: 0x1f04848, Func Offset: 0x58
	// Line 1234, Address: 0x1f04858, Func Offset: 0x68
	// Line 1238, Address: 0x1f0486c, Func Offset: 0x7c
	// Line 1239, Address: 0x1f04898, Func Offset: 0xa8
	// Line 1242, Address: 0x1f048a0, Func Offset: 0xb0
	// Line 1243, Address: 0x1f048ac, Func Offset: 0xbc
	// Line 1244, Address: 0x1f048c0, Func Offset: 0xd0
	// Line 1245, Address: 0x1f048cc, Func Offset: 0xdc
	// Line 1246, Address: 0x1f048d8, Func Offset: 0xe8
	// Line 1247, Address: 0x1f048ec, Func Offset: 0xfc
	// Line 1248, Address: 0x1f048f4, Func Offset: 0x104
	// Line 1250, Address: 0x1f04900, Func Offset: 0x110
	// Line 1251, Address: 0x1f04904, Func Offset: 0x114
	// Func End, Address: 0x1f04914, Func Offset: 0x124
}

// 
// Start address: 0x1f04920
int EvProgAnyoneCry()
{
	int anm;
	float cry_pos[4];
	// Line 1256, Address: 0x1f04920, Func Offset: 0
	// Line 1260, Address: 0x1f04928, Func Offset: 0x8
	// Line 1262, Address: 0x1f04958, Func Offset: 0x38
	// Line 1263, Address: 0x1f0496c, Func Offset: 0x4c
	// Line 1264, Address: 0x1f04978, Func Offset: 0x58
	// Line 1265, Address: 0x1f04980, Func Offset: 0x60
	// Line 1267, Address: 0x1f049a0, Func Offset: 0x80
	// Line 1270, Address: 0x1f049b4, Func Offset: 0x94
	// Line 1271, Address: 0x1f049d0, Func Offset: 0xb0
	// Line 1272, Address: 0x1f049ec, Func Offset: 0xcc
	// Line 1275, Address: 0x1f049fc, Func Offset: 0xdc
	// Line 1276, Address: 0x1f04a5c, Func Offset: 0x13c
	// Line 1279, Address: 0x1f04a64, Func Offset: 0x144
	// Line 1280, Address: 0x1f04a78, Func Offset: 0x158
	// Line 1282, Address: 0x1f04a84, Func Offset: 0x164
	// Line 1283, Address: 0x1f04a88, Func Offset: 0x168
	// Func End, Address: 0x1f04a98, Func Offset: 0x178
}

// 
// Start address: 0x1f04aa0
int EvProgGetLight()
{
	int ret;
	// Line 1288, Address: 0x1f04aa0, Func Offset: 0
	// Line 1291, Address: 0x1f04aac, Func Offset: 0xc
	// Line 1293, Address: 0x1f04ac0, Func Offset: 0x20
	// Line 1294, Address: 0x1f04ac8, Func Offset: 0x28
	// Line 1295, Address: 0x1f04ad4, Func Offset: 0x34
	// Line 1296, Address: 0x1f04adc, Func Offset: 0x3c
	// Line 1298, Address: 0x1f04b04, Func Offset: 0x64
	// Line 1299, Address: 0x1f04b10, Func Offset: 0x70
	// Line 1301, Address: 0x1f04b20, Func Offset: 0x80
	// Line 1302, Address: 0x1f04b24, Func Offset: 0x84
	// Func End, Address: 0x1f04b38, Func Offset: 0x98
}

// 
// Start address: 0x1f04b40
int EvProgGetApart202Key()
{
	// Line 1307, Address: 0x1f04b40, Func Offset: 0
	// Line 1308, Address: 0x1f04b48, Func Offset: 0x8
	// Line 1310, Address: 0x1f04b58, Func Offset: 0x18
	// Func End, Address: 0x1f04b68, Func Offset: 0x28
}

// 
// Start address: 0x1f04b70
int EvProgEndHintRecoveryRead()
{
	// Line 1315, Address: 0x1f04b70, Func Offset: 0
	// Line 1316, Address: 0x1f04b78, Func Offset: 0x8
	// Line 1318, Address: 0x1f04be4, Func Offset: 0x74
	// Line 1319, Address: 0x1f04bf8, Func Offset: 0x88
	// Line 1320, Address: 0x1f04c04, Func Offset: 0x94
	// Line 1321, Address: 0x1f04c20, Func Offset: 0xb0
	// Line 1325, Address: 0x1f04c34, Func Offset: 0xc4
	// Line 1326, Address: 0x1f04c48, Func Offset: 0xd8
	// Line 1327, Address: 0x1f04c58, Func Offset: 0xe8
	// Line 1331, Address: 0x1f04c6c, Func Offset: 0xfc
	// Line 1332, Address: 0x1f04c94, Func Offset: 0x124
	// Line 1333, Address: 0x1f04ca4, Func Offset: 0x134
	// Line 1337, Address: 0x1f04cb8, Func Offset: 0x148
	// Line 1338, Address: 0x1f04cc0, Func Offset: 0x150
	// Line 1339, Address: 0x1f04cc8, Func Offset: 0x158
	// Line 1340, Address: 0x1f04cd0, Func Offset: 0x160
	// Line 1341, Address: 0x1f04cf4, Func Offset: 0x184
	// Line 1344, Address: 0x1f04cfc, Func Offset: 0x18c
	// Line 1345, Address: 0x1f04d04, Func Offset: 0x194
	// Line 1346, Address: 0x1f04d0c, Func Offset: 0x19c
	// Line 1347, Address: 0x1f04d14, Func Offset: 0x1a4
	// Line 1348, Address: 0x1f04d4c, Func Offset: 0x1dc
	// Line 1349, Address: 0x1f04d60, Func Offset: 0x1f0
	// Line 1352, Address: 0x1f04d68, Func Offset: 0x1f8
	// Line 1353, Address: 0x1f04d70, Func Offset: 0x200
	// Line 1354, Address: 0x1f04d78, Func Offset: 0x208
	// Line 1355, Address: 0x1f04d80, Func Offset: 0x210
	// Line 1356, Address: 0x1f04d88, Func Offset: 0x218
	// Line 1357, Address: 0x1f04d9c, Func Offset: 0x22c
	// Line 1358, Address: 0x1f04dac, Func Offset: 0x23c
	// Line 1359, Address: 0x1f04dc0, Func Offset: 0x250
	// Line 1362, Address: 0x1f04dc8, Func Offset: 0x258
	// Line 1363, Address: 0x1f04dd8, Func Offset: 0x268
	// Line 1364, Address: 0x1f04dec, Func Offset: 0x27c
	// Line 1367, Address: 0x1f04dfc, Func Offset: 0x28c
	// Line 1368, Address: 0x1f04e10, Func Offset: 0x2a0
	// Line 1371, Address: 0x1f04e1c, Func Offset: 0x2ac
	// Line 1372, Address: 0x1f04e20, Func Offset: 0x2b0
	// Func End, Address: 0x1f04e30, Func Offset: 0x2c0
}

// 
// Start address: 0x1f04e30
int EvProgEndHintMariaRead()
{
	// Line 1377, Address: 0x1f04e30, Func Offset: 0
	// Line 1378, Address: 0x1f04e38, Func Offset: 0x8
	// Line 1380, Address: 0x1f04ea4, Func Offset: 0x74
	// Line 1381, Address: 0x1f04eb8, Func Offset: 0x88
	// Line 1382, Address: 0x1f04ec4, Func Offset: 0x94
	// Line 1383, Address: 0x1f04ee0, Func Offset: 0xb0
	// Line 1387, Address: 0x1f04ef4, Func Offset: 0xc4
	// Line 1388, Address: 0x1f04f08, Func Offset: 0xd8
	// Line 1389, Address: 0x1f04f18, Func Offset: 0xe8
	// Line 1393, Address: 0x1f04f2c, Func Offset: 0xfc
	// Line 1394, Address: 0x1f04f54, Func Offset: 0x124
	// Line 1395, Address: 0x1f04f64, Func Offset: 0x134
	// Line 1399, Address: 0x1f04f78, Func Offset: 0x148
	// Line 1400, Address: 0x1f04f80, Func Offset: 0x150
	// Line 1401, Address: 0x1f04f88, Func Offset: 0x158
	// Line 1402, Address: 0x1f04f90, Func Offset: 0x160
	// Line 1403, Address: 0x1f04fb4, Func Offset: 0x184
	// Line 1406, Address: 0x1f04fbc, Func Offset: 0x18c
	// Line 1407, Address: 0x1f04fc4, Func Offset: 0x194
	// Line 1408, Address: 0x1f04fcc, Func Offset: 0x19c
	// Line 1409, Address: 0x1f04fd4, Func Offset: 0x1a4
	// Line 1410, Address: 0x1f0500c, Func Offset: 0x1dc
	// Line 1411, Address: 0x1f05020, Func Offset: 0x1f0
	// Line 1414, Address: 0x1f05028, Func Offset: 0x1f8
	// Line 1415, Address: 0x1f05030, Func Offset: 0x200
	// Line 1416, Address: 0x1f05038, Func Offset: 0x208
	// Line 1417, Address: 0x1f05040, Func Offset: 0x210
	// Line 1418, Address: 0x1f05048, Func Offset: 0x218
	// Line 1419, Address: 0x1f0505c, Func Offset: 0x22c
	// Line 1420, Address: 0x1f0506c, Func Offset: 0x23c
	// Line 1421, Address: 0x1f05080, Func Offset: 0x250
	// Line 1424, Address: 0x1f05088, Func Offset: 0x258
	// Line 1425, Address: 0x1f05098, Func Offset: 0x268
	// Line 1426, Address: 0x1f050ac, Func Offset: 0x27c
	// Line 1429, Address: 0x1f050bc, Func Offset: 0x28c
	// Line 1430, Address: 0x1f050d0, Func Offset: 0x2a0
	// Line 1433, Address: 0x1f050dc, Func Offset: 0x2ac
	// Line 1434, Address: 0x1f050e0, Func Offset: 0x2b0
	// Func End, Address: 0x1f050f0, Func Offset: 0x2c0
}

// 
// Start address: 0x1f050f0
int EvProgEndHintSuicideRead()
{
	// Line 1439, Address: 0x1f050f0, Func Offset: 0
	// Line 1440, Address: 0x1f050f8, Func Offset: 0x8
	// Line 1442, Address: 0x1f05164, Func Offset: 0x74
	// Line 1443, Address: 0x1f05178, Func Offset: 0x88
	// Line 1444, Address: 0x1f05184, Func Offset: 0x94
	// Line 1445, Address: 0x1f051a0, Func Offset: 0xb0
	// Line 1449, Address: 0x1f051b4, Func Offset: 0xc4
	// Line 1450, Address: 0x1f051c8, Func Offset: 0xd8
	// Line 1451, Address: 0x1f051d8, Func Offset: 0xe8
	// Line 1455, Address: 0x1f051ec, Func Offset: 0xfc
	// Line 1456, Address: 0x1f05214, Func Offset: 0x124
	// Line 1457, Address: 0x1f05224, Func Offset: 0x134
	// Line 1461, Address: 0x1f05238, Func Offset: 0x148
	// Line 1462, Address: 0x1f05240, Func Offset: 0x150
	// Line 1463, Address: 0x1f05248, Func Offset: 0x158
	// Line 1464, Address: 0x1f05250, Func Offset: 0x160
	// Line 1465, Address: 0x1f05274, Func Offset: 0x184
	// Line 1468, Address: 0x1f0527c, Func Offset: 0x18c
	// Line 1469, Address: 0x1f05284, Func Offset: 0x194
	// Line 1470, Address: 0x1f0528c, Func Offset: 0x19c
	// Line 1471, Address: 0x1f05294, Func Offset: 0x1a4
	// Line 1472, Address: 0x1f052cc, Func Offset: 0x1dc
	// Line 1473, Address: 0x1f052e0, Func Offset: 0x1f0
	// Line 1476, Address: 0x1f052e8, Func Offset: 0x1f8
	// Line 1477, Address: 0x1f052f0, Func Offset: 0x200
	// Line 1478, Address: 0x1f052f8, Func Offset: 0x208
	// Line 1479, Address: 0x1f05300, Func Offset: 0x210
	// Line 1480, Address: 0x1f05308, Func Offset: 0x218
	// Line 1481, Address: 0x1f0531c, Func Offset: 0x22c
	// Line 1482, Address: 0x1f0532c, Func Offset: 0x23c
	// Line 1483, Address: 0x1f05340, Func Offset: 0x250
	// Line 1486, Address: 0x1f05348, Func Offset: 0x258
	// Line 1487, Address: 0x1f05358, Func Offset: 0x268
	// Line 1488, Address: 0x1f0536c, Func Offset: 0x27c
	// Line 1491, Address: 0x1f0537c, Func Offset: 0x28c
	// Line 1492, Address: 0x1f05390, Func Offset: 0x2a0
	// Line 1495, Address: 0x1f0539c, Func Offset: 0x2ac
	// Line 1496, Address: 0x1f053a0, Func Offset: 0x2b0
	// Func End, Address: 0x1f053b0, Func Offset: 0x2c0
}

// 
// Start address: 0x1f053b0
int EvProgUseApart202Key()
{
	// Line 1500, Address: 0x1f053b0, Func Offset: 0
	// Line 1501, Address: 0x1f053b8, Func Offset: 0x8
	// Line 1505, Address: 0x1f053e8, Func Offset: 0x38
	// Func End, Address: 0x1f053f8, Func Offset: 0x48
}

// 
// Start address: 0x1f05400
int EvProgMonkeyKick206()
{
	// Line 1510, Address: 0x1f05400, Func Offset: 0
	// Line 1511, Address: 0x1f05408, Func Offset: 0x8
	// Line 1512, Address: 0x1f05420, Func Offset: 0x20
	// Line 1515, Address: 0x1f0544c, Func Offset: 0x4c
	// Line 1516, Address: 0x1f05450, Func Offset: 0x50
	// Func End, Address: 0x1f05460, Func Offset: 0x60
}

// 
// Start address: 0x1f05460
int EvCharaDataClear(int room)
{
	// Line 1522, Address: 0x1f05460, Func Offset: 0
	// Line 1524, Address: 0x1f05494, Func Offset: 0x34
	// Line 1525, Address: 0x1f054a0, Func Offset: 0x40
	// Line 1526, Address: 0x1f054a4, Func Offset: 0x44
	// Func End, Address: 0x1f054ac, Func Offset: 0x4c
}

// 
// Start address: 0x1f054b0
void EvRoomInit()
{
	int room;
	CharaData_DemoList chara_data[2];
	// Line 1531, Address: 0x1f054b0, Func Offset: 0
	// Line 1540, Address: 0x1f054bc, Func Offset: 0xc
	// Line 1542, Address: 0x1f054c8, Func Offset: 0x18
	// Line 1545, Address: 0x1f054fc, Func Offset: 0x4c
	// Line 1546, Address: 0x1f05510, Func Offset: 0x60
	// Line 1547, Address: 0x1f0552c, Func Offset: 0x7c
	// Line 1549, Address: 0x1f0553c, Func Offset: 0x8c
	// Line 1550, Address: 0x1f05548, Func Offset: 0x98
	// Line 1551, Address: 0x1f05568, Func Offset: 0xb8
	// Line 1552, Address: 0x1f05570, Func Offset: 0xc0
	// Line 1554, Address: 0x1f05578, Func Offset: 0xc8
	// Func End, Address: 0x1f0558c, Func Offset: 0xdc
}

// 
// Start address: 0x1f05590
void EvSoundCallAfterLoad()
{
	int room;
	// Line 1559, Address: 0x1f05590, Func Offset: 0
	// Line 1562, Address: 0x1f05598, Func Offset: 0x8
	// Line 1564, Address: 0x1f055a0, Func Offset: 0x10
	// Line 1565, Address: 0x1f055ac, Func Offset: 0x1c
	// Line 1566, Address: 0x1f055c4, Func Offset: 0x34
	// Line 1568, Address: 0x1f055e8, Func Offset: 0x58
	// Line 1569, Address: 0x1f055f4, Func Offset: 0x64
	// Line 1570, Address: 0x1f05608, Func Offset: 0x78
	// Line 1572, Address: 0x1f0561c, Func Offset: 0x8c
	// Func End, Address: 0x1f0562c, Func Offset: 0x9c
}

// 
// Start address: 0x1f05630
void EvAllTimeFunc()
{
	int i;
	int room;
	int disp_ctrl_list[7];
	float volume;
	float rot[4];
	float pos[4];
	SubCharacter* scp;
	unsigned char corpse_off[2][5];
	unsigned char corpse_on[2][8];
	// Line 1577, Address: 0x1f05630, Func Offset: 0
	// Line 1603, Address: 0x1f0563c, Func Offset: 0xc
	// Line 1604, Address: 0x1f05640, Func Offset: 0x10
	// Line 1606, Address: 0x1f05648, Func Offset: 0x18
	// Line 1607, Address: 0x1f05654, Func Offset: 0x24
	// Line 1608, Address: 0x1f05678, Func Offset: 0x48
	// Line 1611, Address: 0x1f056b0, Func Offset: 0x80
	// Line 1613, Address: 0x1f056cc, Func Offset: 0x9c
	// Line 1614, Address: 0x1f056e0, Func Offset: 0xb0
	// Line 1615, Address: 0x1f056f4, Func Offset: 0xc4
	// Line 1616, Address: 0x1f05700, Func Offset: 0xd0
	// Line 1617, Address: 0x1f05718, Func Offset: 0xe8
	// Line 1619, Address: 0x1f05764, Func Offset: 0x134
	// Line 1620, Address: 0x1f05774, Func Offset: 0x144
	// Line 1621, Address: 0x1f05784, Func Offset: 0x154
	// Line 1622, Address: 0x1f05794, Func Offset: 0x164
	// Line 1623, Address: 0x1f0579c, Func Offset: 0x16c
	// Line 1625, Address: 0x1f057ec, Func Offset: 0x1bc
	// Line 1626, Address: 0x1f057fc, Func Offset: 0x1cc
	// Line 1627, Address: 0x1f0580c, Func Offset: 0x1dc
	// Line 1628, Address: 0x1f0581c, Func Offset: 0x1ec
	// Line 1629, Address: 0x1f0582c, Func Offset: 0x1fc
	// Line 1631, Address: 0x1f0583c, Func Offset: 0x20c
	// Line 1632, Address: 0x1f05854, Func Offset: 0x224
	// Line 1633, Address: 0x1f0586c, Func Offset: 0x23c
	// Line 1634, Address: 0x1f0587c, Func Offset: 0x24c
	// Line 1635, Address: 0x1f05890, Func Offset: 0x260
	// Line 1636, Address: 0x1f058a8, Func Offset: 0x278
	// Line 1638, Address: 0x1f05914, Func Offset: 0x2e4
	// Line 1639, Address: 0x1f0592c, Func Offset: 0x2fc
	// Line 1640, Address: 0x1f05944, Func Offset: 0x314
	// Line 1642, Address: 0x1f059a4, Func Offset: 0x374
	// Line 1644, Address: 0x1f059bc, Func Offset: 0x38c
	// Line 1645, Address: 0x1f059cc, Func Offset: 0x39c
	// Line 1646, Address: 0x1f05a1c, Func Offset: 0x3ec
	// Line 1649, Address: 0x1f05a54, Func Offset: 0x424
	// Line 1651, Address: 0x1f05a74, Func Offset: 0x444
	// Line 1652, Address: 0x1f05a80, Func Offset: 0x450
	// Func End, Address: 0x1f05a94, Func Offset: 0x464
}

// 
// Start address: 0x1f05aa0
void Delete_RedPointLight()
{
	DrawEnvData* ded;
	int* mp;
	// Line 1674, Address: 0x1f05aa0, Func Offset: 0
	// Line 1678, Address: 0x1f05ab0, Func Offset: 0x10
	// Line 1679, Address: 0x1f05abc, Func Offset: 0x1c
	// Line 1680, Address: 0x1f05ac8, Func Offset: 0x28
	// Line 1681, Address: 0x1f05adc, Func Offset: 0x3c
	// Line 1683, Address: 0x1f05af0, Func Offset: 0x50
	// Line 1684, Address: 0x1f05b08, Func Offset: 0x68
	// Line 1686, Address: 0x1f05b10, Func Offset: 0x70
	// Line 1691, Address: 0x1f05b24, Func Offset: 0x84
	// Func End, Address: 0x1f05b3c, Func Offset: 0x9c
}

