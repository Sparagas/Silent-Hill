typedef struct EnLOCAL_DATA;
typedef struct EnANIME_DATA;
typedef struct EnSOUND_QUEUE;
typedef struct EnAMBUSH_DATA;
typedef struct shPlayerWork;
typedef struct SubCharacter;
typedef struct Enemy_List;
typedef struct EnCOMMUNICATION;
typedef struct _CL_VHIT_WALL;
typedef struct EnPATH_DATA;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _AnimeInfo;
typedef struct EnSKELETON_DATA;
typedef struct _anon0;
typedef struct EnFORBIDDENAREA;
typedef struct EnIKE_DATA;
typedef struct shAttackInfo;
typedef struct EnINS_DATA;
typedef struct _CL_VHIT_CHARA;
typedef struct _CL_VHIT_RESULT;
typedef struct shBattleInfo;
typedef struct EnLOCAL_WORK;
typedef struct _anon1;
typedef struct EnTYU_DATA;
typedef union _anon2;
typedef struct EnARM_DATA;
typedef union _anon3;
typedef struct EnNSE_DATA;
typedef struct Stage_Data;
typedef struct _anon4;
typedef struct Event_List;
typedef struct FOG_OBJ_DATA;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct Item_List;
typedef struct shSkelton;
typedef struct Model_List;
typedef struct EnMKN_DATA;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct _anon5;
typedef struct EnEDB_DATA;
typedef struct PAD_3D;
typedef struct EnPAP_DATA;
typedef struct Playing_Info;
typedef struct EnNIK_DATA;
typedef struct PAD_2D;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct PAD_INFO;
typedef struct EnSCU_DATA;
typedef struct Item;
typedef struct shBattleFight;
typedef struct EnBOS_DATA;
typedef struct EnONI_DATA;
typedef struct shBattleShot;
typedef struct _VbWVSMATRIX;
typedef struct shBattleArea;
typedef struct EnRED_DATA;

typedef void(*type_8)();
typedef int(*type_11)();
typedef void(*type_34)(EnLOCAL_DATA*);
typedef int(*type_44)(SubCharacter*, int, int);
typedef void(*type_45)(SubCharacter*);
typedef void(*type_47)(SubCharacter*);
typedef void(*type_51)(SubCharacter*);
typedef void(*type_70)(EnLOCAL_DATA*);

typedef float type_0[5];
typedef unsigned char type_1[2];
typedef unsigned char type_2[2];
typedef _AnimeInfo type_3[1];
typedef float type_4[4];
typedef _AnimeInfo type_5[1];
typedef _AnimeInfo type_6[10];
typedef _AnimeInfo type_7[35];
typedef _AnimeInfo type_9[2];
typedef float type_10[16];
typedef _AnimeInfo type_12[10];
typedef unsigned char type_13[20];
typedef _AnimeInfo type_14[36];
typedef EnLOCAL_DATA type_15[32];
typedef unsigned int type_16[255];
typedef EnCOMMUNICATION type_17[8];
typedef unsigned int type_18[32];
typedef EnFORBIDDENAREA type_19[2];
typedef unsigned char type_20[4];
typedef EnSOUND_QUEUE type_21[8];
typedef char type_22[4];
typedef char type_23[4];
typedef char type_24[4];
typedef char type_25[12];
typedef _AnimeInfo type_26[1];
typedef char type_27[4];
typedef char type_28[4];
typedef _AnimeInfo type_29[8];
typedef EnSKELETON_DATA type_30[16];
typedef unsigned char type_31[14];
typedef shAttackInfo type_32[66];
typedef _AnimeInfo type_33[21];
typedef void(*type_35)(EnLOCAL_DATA*)[15];
typedef unsigned char type_36[2];
typedef _AnimeInfo type_37[8];
typedef float type_38[4];
typedef float type_39[4][4];
typedef unsigned char type_40[69];
typedef _AnimeInfo type_41[21];
typedef _AnimeInfo type_42[12];
typedef float type_43[4][2];
typedef int(*type_46)(SubCharacter*, int, int)[12];
typedef float type_48[4];
typedef char type_49[3];
typedef _AnimeInfo type_50[10];
typedef float type_52[4];
typedef float type_53[4][4];
typedef unsigned char type_54[4];
typedef _AnimeInfo type_55[14];
typedef _AnimeInfo type_56[27];
typedef float type_57[4][2];
typedef _AnimeInfo type_58[16];
typedef int type_59[2];
typedef _AnimeInfo type_60[22];
typedef PAD_INFO type_61[10];
typedef char type_62[16];
typedef unsigned int type_63[2];
typedef _AnimeInfo type_64[3];
typedef unsigned short type_65[11];
typedef unsigned char type_66[14];
typedef float type_67[2];
typedef _AnimeInfo type_68[12];
typedef unsigned short type_69[3];
typedef void(*type_71)(EnLOCAL_DATA*)[15];
typedef unsigned char type_72[4];
typedef unsigned char type_73[4];
typedef unsigned char type_74[97];
typedef float type_75[7];
typedef _AnimeInfo type_76[7];
typedef float type_77[32];
typedef unsigned int type_78[7];
typedef int type_79[32];
typedef _AnimeInfo type_80[29];

struct EnLOCAL_DATA
{
	char kind;
	char kind2;
	char mlv;
	char slv;
	char sslv;
	char type;
	unsigned char weight;
	char lie;
	char d_count;
	char last_atk;
	char anim;
	unsigned char anim_loop;
	short anim_s;
	unsigned int flag;
	int anim_n;
	int anim_step;
	SubCharacter* scp;
	EnPATH_DATA path;
	float vec[4];
	float endurance;
	float endurance_max;
	float hb_x;
	float hb_z;
	float hb_s;
	float tx;
	float tz;
	float tx2;
	float tz2;
	float trx;
	float trz;
	float size;
	float new_size;
	float tall;
	float new_tall;
	float center_y;
	float new_center;
	float eye_y;
	float new_eye;
	float p_dist;
	float radio;
	int timer;
	int sound_wait;
	int randseed;
	union
	{
		EnSCU_DATA scu;
		EnMKN_DATA mkn;
		EnTYU_DATA tyu;
		EnRED_DATA red;
		EnONI_DATA oni;
		EnNSE_DATA nse;
		EnIKE_DATA ike;
		EnPAP_DATA pap;
		EnEDB_DATA edb;
		EnARM_DATA arm;
		EnBOS_DATA bos;
		EnNIK_DATA nik;
		EnINS_DATA ins;
	};
};

struct EnANIME_DATA
{
	unsigned short Anime;
	unsigned char Loop;
};

struct EnSOUND_QUEUE
{
	SubCharacter* scp;
	int num;
	float vol;
	float time;
};

struct EnAMBUSH_DATA
{
	float pl_x_min;
	float pl_z_min;
	float pl_x_max;
	float pl_z_max;
	float pos_x;
	float pos_z;
	float dir;
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

struct EnCOMMUNICATION
{
	float pos[4];
	int kind;
	int type;
	int time;
	float dist;
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

struct EnPATH_DATA
{
	float angle;
	float markangle;
	float dist;
	char step;
	char deadend;
	short timer;
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

struct EnSKELETON_DATA
{
	short num1;
	short num2;
	float rate;
};

struct _anon0
{
	void(*SpecDraw)();
	void(*PreDraw)();
	void(*PostDraw)();
	void(*CharaDraw_Hook)();
};

struct EnFORBIDDENAREA
{
	float x0;
	float z0;
	float x1;
	float z1;
};

struct EnIKE_DATA
{
	float handpos[4];
	float swing;
	int near_count;
	float dist;
	char direc;
	char signs;
	char count;
	char pipe_count;
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

struct EnINS_DATA
{
	float view_rot[4];
	float rot_add[4];
	void* leader;
	float def_speed;
	float move_speed;
	float speed_add;
	float rot_speed;
	float y_speed;
	float twin_dist;
	float dist_add;
};

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon3 hobj;
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

struct EnLOCAL_WORK
{
	EnLOCAL_DATA Data[32];
	EnCOMMUNICATION Communication[8];
	EnFORBIDDENAREA ForbiddenArea[2];
	EnSOUND_QUEUE SoundQueue[8];
	int CommunicationNum;
	int ForbiddenNum;
	int SoundQueueNum;
	unsigned int Status;
	EnLOCAL_DATA* This;
	_CL_VHIT_RESULT HitResult;
	int Max3DSounds;
	int ActiveEnemy;
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

struct EnTYU_DATA
{
	float point[4];
	EnCOMMUNICATION* tcomm;
	int near_count;
	float dist;
	short count;
	char moves;
};

union _anon2
{
	shBattleFight fight;
	shBattleShot shot;
};

struct EnARM_DATA
{
	float hand_pos[4];
	float old_pos[4];
	int near_count;
	float dist;
	char arm;
	char attack;
	char scount;
	char signs;
	char count;
	char dir;
};

union _anon3
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct EnNSE_DATA
{
	float speed;
	float tspeed;
	char signs;
	char count;
	char dc;
	char dcm;
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

struct _anon4
{
	float x;
	float y;
	float z;
	float w;
};

struct Event_List
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
};

struct FOG_OBJ_DATA
{
	float pos[4];
	float mv[4];
	int type;
	float rer;
	unsigned long id;
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

struct Item_List
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon5 src_m;
	_anon4 src_t;
	_anon5 des_m;
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

struct Model_List
{
	short kind;
	short id;
	short flag_off;
	short flag_on;
	float pos[4];
	float rot[4];
};

struct EnMKN_DATA
{
	float stpos[4];
	float target[4];
	void* tp;
	float fall;
	short frame;
	char dc;
	char dcm;
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

struct _anon5
{
	float d[4][4];
};

struct EnEDB_DATA
{
	float target[4];
	float rot;
	float arot;
	float speed;
	char bullet;
	char mark[3];
	char mark_n;
	char turn;
	char afford;
	char ccount;
	char pcount;
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

struct EnPAP_DATA
{
	float target[4];
	char dc;
	char dcm;
	char signs;
	char count;
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

struct EnNIK_DATA
{
	float swing[4];
	float acc[4];
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

struct EnSCU_DATA
{
	float stpos[4];
	float target[4];
	EnAMBUSH_DATA* ambush;
	int count;
	char dc;
	char dcm;
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct EnBOS_DATA
{
	float target[4];
	void* insect_dp;
	int near_count;
	float dist;
	float move_speed;
	float rot_speed;
	float rot_add;
	float y_speed;
	int mode;
	int end_count;
	char signs;
	char count;
};

struct EnONI_DATA
{
	char id;
	char check;
	char warp;
	short timer2;
	void* other;
	void* tp;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct _VbWVSMATRIX
{
	float wvm[4][4];
	float vsm[4][4];
	float wsm[4][4];
};

struct shBattleArea
{
	float center;
	float radius;
};

struct EnRED_DATA
{
	int attack_count;
	int boss_timer;
	void* tp;
};

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
_AnimeInfo scu_anim[36];
_AnimeInfo d_scu_anim[10];
_AnimeInfo mkn_anim[35];
_AnimeInfo d_mkn_anim[8];
_AnimeInfo tyu_anim[3];
_AnimeInfo d_tyu_anim[1];
_AnimeInfo red_anim[12];
_AnimeInfo d_red_anim[7];
_AnimeInfo oni_anim[16];
_AnimeInfo d_oni_anim[10];
_AnimeInfo nse_anim[27];
_AnimeInfo d_nse_anim[1];
_AnimeInfo ike_anim[21];
_AnimeInfo d_ike_anim[12];
_AnimeInfo pap_anim[29];
_AnimeInfo d_pap_anim[8];
_AnimeInfo edb_anim[22];
_AnimeInfo d_edb_anim[2];
_AnimeInfo arm_anim[14];
_AnimeInfo d_arm_anim[1];
_AnimeInfo bos_anim[10];
_AnimeInfo d_bos_anim[21];
int(*EnAnimeSetFunc)(SubCharacter*, int, int)[12];
EnSKELETON_DATA EnSkeletonData[16];
char EnSkeletonDataC[16];
float EnBattleCollisionRate[16];
EnLOCAL_WORK enLocalWork;
shPlayerWork sh2jms;
Stage_Data* stage;
Item item;
_anon1 game_flag;
Playing_Info playing;
_VbWVSMATRIX VbWvsMatrix;
void(*enFlyingFunc)(SubCharacter*);

void enInitEnemy();
void enExecTask();
EnLOCAL_DATA* enEntryEnemy(int kind);
void enInitData(EnLOCAL_DATA* dp, SubCharacter* scp);
void enDeleteEnemy(EnLOCAL_DATA* dp);
void enDummyCtrl(EnLOCAL_DATA* dp);
int enTransID(int id);
int enGetWorldCondition();
int enGetPlace();
int enGetStage();
int enGetMode();
int enCheckDarkOrBright(SubCharacter* scp);
int enCheckDarkOrBrightPlayer();
int enCheckWater(EnLOCAL_DATA* dp);
void enSetBattleTarget(EnLOCAL_DATA* dp, unsigned int type);
void enSetHP(EnLOCAL_DATA* dp, float hp, float endurance);
float enReduceHP(EnLOCAL_DATA* dp);
float enAddHP(EnLOCAL_DATA* dp, float n);
float enAddEnduranceDT(EnLOCAL_DATA* dp, float n);
int enCheckDamage(EnLOCAL_DATA* dp);
int enCheckSpray(EnLOCAL_DATA* dp);
void enResetDamage(EnLOCAL_DATA* dp);
int enCheckDeath(EnLOCAL_DATA* dp);
void enSetHitBack(EnLOCAL_DATA* dp);
int enCheckInstantDeath(EnLOCAL_DATA* dp);
void enSetSize(EnLOCAL_DATA* dp, float size, float tall, float center, float eye);
void enSetNewSize(EnLOCAL_DATA* dp, float size, float tall, float center, float eye);
void enSetSeeLightStatus(EnLOCAL_DATA* dp, float center, float radius);
int enCheckSeeLight(EnLOCAL_DATA* dp);
int enCheckAimedByHuman(EnLOCAL_DATA* dp);
int enCheckFinishedByHuman(EnLOCAL_DATA* dp);
int enCheckNoDamageHuman(EnLOCAL_DATA* dp);
void enAttackStart(EnLOCAL_DATA* dp);
int enAttackCheck(EnLOCAL_DATA* dp, int ID);
int enAttackCheckHug(EnLOCAL_DATA* dp, int ID);
int enCheckHuggedPlayer();
int enCheckSleepIn(EnLOCAL_DATA* dp);
int enCheckSleepOut(EnLOCAL_DATA* dp);
void enSleepIn(EnLOCAL_DATA* dp);
void enSleepOut(EnLOCAL_DATA* dp);
void enKillCountUp(EnLOCAL_DATA* dp);
float* enGetPlayerPos(EnLOCAL_DATA* dp);
float enGetPlayerDistance(EnLOCAL_DATA* dp);
float enGetPlayerDirection(EnLOCAL_DATA* dp);
int enGetPlayerWeapon();
int enCheckPlayerWeapon();
float enGetPlayerAngle(EnLOCAL_DATA* dp);
float enGetPlayerSize();
int enCheckPlayerSound(EnLOCAL_DATA* dp);
int enCheckPlayerCondition(EnLOCAL_DATA* dp);
int enCheckPlayerLight();
int enCheckPlayerSprayNow();
int enGetSprayPower();
int enCheckPlayerBulletEmpty();
int enCheckDeadPlayer();
void enSetGameOver();
void enFlagSetMoved(EnLOCAL_DATA* dp);
void enFlagResetMoved(EnLOCAL_DATA* dp);
void enFlagSetLieDown(EnLOCAL_DATA* dp);
void enFlagResetLieDown(EnLOCAL_DATA* dp);
void enFlagSetCritical(EnLOCAL_DATA* dp);
void enFlagResetCritical(EnLOCAL_DATA* dp);
int enCheckCritical(EnLOCAL_DATA* dp);
void enFlagSetNoDamage(EnLOCAL_DATA* dp);
void enFlagResetNoDamage(EnLOCAL_DATA* dp);
void enFlagSetDead(EnLOCAL_DATA* dp);
void enFlagResetDead(EnLOCAL_DATA* dp);
void enFlagSetRotFloor(EnLOCAL_DATA* dp);
void enFlagResetRotFloor(EnLOCAL_DATA* dp);
void enFlagResetRotFloorJust(EnLOCAL_DATA* dp);
void enFlagSetDisplay(EnLOCAL_DATA* dp);
void enFlagResetDisplay(EnLOCAL_DATA* dp);
float enCalcDirection(float* pa, float* pb);
float enCalcAngleDifference(float angle1, float angle2);
float enCalcSpeedRate(float angle, float* mpos, float* tpos);
void enMakeRotVector(float* vec, float* rot, float range);
int enCheckIntoScreen(EnLOCAL_DATA* dp);
SubCharacter* enGetNearCharacter(EnLOCAL_DATA* dp);
int enCalcTimer(int t);
void enSetTimer(EnLOCAL_DATA* dp, int t);
int enReduceTimer(EnLOCAL_DATA* dp);
EnLOCAL_DATA* enGetNearOtherEnemy(EnLOCAL_DATA* dp);
void enCheckNearPlayer(EnLOCAL_DATA* dp, int* count, float* dist, float limit);
void enSetRadioVolume(EnLOCAL_DATA* dp);
void enMoveAngle(EnPATH_DATA* p, float delta);
void enMoveAngleToPlayer(EnLOCAL_DATA* dp, float delta);
void enMoveExec(EnLOCAL_DATA* dp);
void enSetRotFloor(EnLOCAL_DATA* dp);
void enSetHitColumn(EnLOCAL_DATA* dp);
void enIKETrans(EnLOCAL_DATA* dp);
void enARMTrans(EnLOCAL_DATA* dp);
void enDyingExec(EnLOCAL_DATA* dp);
void enWaitRegenerate(EnLOCAL_DATA* dp);
void enFlyingFunc(SubCharacter* scp);
void enDeleteCharacter(EnLOCAL_DATA* dp);
void enInitPath(EnPATH_DATA* p, float angle);
int enSetPath(EnLOCAL_DATA* dp, float* target, float* pos);
float enCheckPath(EnLOCAL_DATA* dp, float* tpos, float* mpos);
float enCheckPath2(EnLOCAL_DATA* dp, float* tpos, float* mpos);
float enCheckForward(EnLOCAL_DATA* dp, float* pos, float* rot, float range);
float enCheckHitEyes(EnLOCAL_DATA* dp, float* sp, float* ep);
float enCheckHitEyes2(EnLOCAL_DATA* dp, float* sp, float* ep);
float enCheckPlayerHitEyes(EnLOCAL_DATA* dp, float* ep);
int enCheckFloor(float* pos);
void enGetSkeletonVector(float* vec, EnLOCAL_DATA* dp, int n);
void enGetSkeletonMatrix(float mat[4], EnLOCAL_DATA* dp, int n);
int enGetDamageMotion(EnLOCAL_DATA* dp);
int enGetDownMotion(EnLOCAL_DATA* dp);
int enGetLieDirection(int dm);
void enAnimeSet(EnLOCAL_DATA* dp, int anim, int id);
void enAnimeSetDirectFrame(EnLOCAL_DATA* dp, int anim, int id, int frame);
void enAnimeExec(EnLOCAL_DATA* dp, EnANIME_DATA* pa, short anm_none);
void enSetTrans(EnLOCAL_DATA* dp);
void enSetTransN(EnLOCAL_DATA* dp, int n);
void enSetTransWalk(EnLOCAL_DATA* dp);
void enSetTransForward(EnLOCAL_DATA* dp, float s);
void enAnimePause(EnLOCAL_DATA* dp);
void enAnimeRestart(EnLOCAL_DATA* dp);
void enAnimeFrameSet(EnLOCAL_DATA* dp, unsigned short frame);
void enAnimeReverse(EnLOCAL_DATA* dp);
void enSetAnimeCount(EnLOCAL_DATA* dp, int count);
void enEfctBloodPool(EnLOCAL_DATA* dp);
void enEfctPoisonFog(float* pos, float* vec);
void enSetBlur();
void enSetFadeOut();
void enResetFilter();
void enSoundCall(int num, float vol, float* pos);
void enSoundCall3D(int num, float vol, float* pos);
void enSoundStop(int num);
void enSoundSetQueue(SubCharacter* scp, int num, float vol, float time);
EnCOMMUNICATION* enSetCommunication(int kind, int type, float* pos, float dist, int time);
EnCOMMUNICATION* enCommunicateTribe(int kind, float* pos);
void enResetForbiddenArea();
void enSetForbiddenArea(float x0, float z0, float x1, float z1);
void enRoomForbiddenArea();
int enCheckForbiddenArea(float* sp, float* ep, float size);
int enCheckForbiddenAreaSub(EnFORBIDDENAREA* fa, float* sp, float* ep, float size);
void enEventDriven(int event, int id);

// 
// Start address: 0x1413b0
void enInitEnemy()
{
	// Line 179, Address: 0x1413b0, Func Offset: 0
	// Line 185, Address: 0x1413b8, Func Offset: 0x8
	// Line 187, Address: 0x1413cc, Func Offset: 0x1c
	// Line 188, Address: 0x1413d8, Func Offset: 0x28
	// Func End, Address: 0x1413e8, Func Offset: 0x38
}

// 
// Start address: 0x1413f0
void enExecTask()
{
	int f;
	EnSOUND_QUEUE* que;
	EnCOMMUNICATION* cp;
	EnFORBIDDENAREA* fa;
	float d;
	int n;
	int max2;
	int max;
	int j;
	int num[32];
	float dist[32];
	void(*enEnemyControlFunc)(EnLOCAL_DATA*)[15];
	float* p_pos;
	EnLOCAL_DATA* dp;
	int i;
	// Line 193, Address: 0x1413f0, Func Offset: 0
	// Line 198, Address: 0x141404, Func Offset: 0x14
	// Line 217, Address: 0x141438, Func Offset: 0x48
	// Line 223, Address: 0x141444, Func Offset: 0x54
	// Line 224, Address: 0x14144c, Func Offset: 0x5c
	// Line 225, Address: 0x141450, Func Offset: 0x60
	// Line 226, Address: 0x14145c, Func Offset: 0x6c
	// Line 227, Address: 0x141474, Func Offset: 0x84
	// Line 228, Address: 0x1414bc, Func Offset: 0xcc
	// Line 229, Address: 0x1414c0, Func Offset: 0xd0
	// Line 230, Address: 0x1414d0, Func Offset: 0xe0
	// Line 231, Address: 0x1414d4, Func Offset: 0xe4
	// Line 232, Address: 0x1414d8, Func Offset: 0xe8
	// Line 233, Address: 0x1414ec, Func Offset: 0xfc
	// Line 234, Address: 0x1414f0, Func Offset: 0x100
	// Line 235, Address: 0x141508, Func Offset: 0x118
	// Line 236, Address: 0x141514, Func Offset: 0x124
	// Line 237, Address: 0x141520, Func Offset: 0x130
	// Line 238, Address: 0x141524, Func Offset: 0x134
	// Line 239, Address: 0x141530, Func Offset: 0x140
	// Line 240, Address: 0x14154c, Func Offset: 0x15c
	// Line 241, Address: 0x141550, Func Offset: 0x160
	// Line 242, Address: 0x141554, Func Offset: 0x164
	// Line 243, Address: 0x141558, Func Offset: 0x168
	// Line 244, Address: 0x14156c, Func Offset: 0x17c
	// Line 245, Address: 0x14159c, Func Offset: 0x1ac
	// Line 246, Address: 0x1415ac, Func Offset: 0x1bc
	// Line 247, Address: 0x1415b0, Func Offset: 0x1c0
	// Line 251, Address: 0x1415c4, Func Offset: 0x1d4
	// Line 253, Address: 0x1415cc, Func Offset: 0x1dc
	// Line 254, Address: 0x1415d4, Func Offset: 0x1e4
	// Line 255, Address: 0x1415ec, Func Offset: 0x1fc
	// Line 256, Address: 0x1415f8, Func Offset: 0x208
	// Line 258, Address: 0x141650, Func Offset: 0x260
	// Line 259, Address: 0x141664, Func Offset: 0x274
	// Line 261, Address: 0x14166c, Func Offset: 0x27c
	// Line 265, Address: 0x141690, Func Offset: 0x2a0
	// Line 266, Address: 0x141698, Func Offset: 0x2a8
	// Line 267, Address: 0x1416a4, Func Offset: 0x2b4
	// Line 268, Address: 0x1416bc, Func Offset: 0x2cc
	// Line 269, Address: 0x1416c4, Func Offset: 0x2d4
	// Line 270, Address: 0x1416d0, Func Offset: 0x2e0
	// Line 271, Address: 0x1416dc, Func Offset: 0x2ec
	// Line 272, Address: 0x1416f8, Func Offset: 0x308
	// Line 273, Address: 0x141704, Func Offset: 0x314
	// Line 274, Address: 0x14170c, Func Offset: 0x31c
	// Line 276, Address: 0x141718, Func Offset: 0x328
	// Line 278, Address: 0x14172c, Func Offset: 0x33c
	// Line 281, Address: 0x141734, Func Offset: 0x344
	// Line 282, Address: 0x141744, Func Offset: 0x354
	// Line 283, Address: 0x14174c, Func Offset: 0x35c
	// Line 284, Address: 0x141758, Func Offset: 0x368
	// Line 285, Address: 0x141780, Func Offset: 0x390
	// Line 286, Address: 0x141784, Func Offset: 0x394
	// Line 288, Address: 0x141798, Func Offset: 0x3a8
	// Line 289, Address: 0x1417ac, Func Offset: 0x3bc
	// Line 292, Address: 0x1417b0, Func Offset: 0x3c0
	// Line 295, Address: 0x1417c0, Func Offset: 0x3d0
	// Line 296, Address: 0x1417cc, Func Offset: 0x3dc
	// Line 297, Address: 0x1417e0, Func Offset: 0x3f0
	// Line 298, Address: 0x1417e4, Func Offset: 0x3f4
	// Line 299, Address: 0x1417f4, Func Offset: 0x404
	// Line 300, Address: 0x1417f8, Func Offset: 0x408
	// Line 301, Address: 0x14182c, Func Offset: 0x43c
	// Line 302, Address: 0x141844, Func Offset: 0x454
	// Line 304, Address: 0x141848, Func Offset: 0x458
	// Line 305, Address: 0x141850, Func Offset: 0x460
	// Line 308, Address: 0x14186c, Func Offset: 0x47c
	// Line 309, Address: 0x1418a4, Func Offset: 0x4b4
	// Line 312, Address: 0x1418a8, Func Offset: 0x4b8
	// Line 315, Address: 0x1418c8, Func Offset: 0x4d8
	// Line 316, Address: 0x1418d0, Func Offset: 0x4e0
	// Func End, Address: 0x1418ec, Func Offset: 0x4fc
}

// 
// Start address: 0x1418f0
EnLOCAL_DATA* enEntryEnemy(int kind)
{
	int i;
	EnLOCAL_DATA* dp;
	// Line 324, Address: 0x1418f0, Func Offset: 0
	// Line 329, Address: 0x1418f8, Func Offset: 0x8
	// Line 330, Address: 0x1418fc, Func Offset: 0xc
	// Line 331, Address: 0x141904, Func Offset: 0x14
	// Line 332, Address: 0x14190c, Func Offset: 0x1c
	// Line 333, Address: 0x14191c, Func Offset: 0x2c
	// Line 334, Address: 0x14192c, Func Offset: 0x3c
	// Line 336, Address: 0x141938, Func Offset: 0x48
	// Line 337, Address: 0x14193c, Func Offset: 0x4c
	// Line 339, Address: 0x14194c, Func Offset: 0x5c
	// Line 340, Address: 0x141950, Func Offset: 0x60
	// Line 343, Address: 0x141954, Func Offset: 0x64
	// Func End, Address: 0x141964, Func Offset: 0x74
}

// 
// Start address: 0x141970
void enInitData(EnLOCAL_DATA* dp, SubCharacter* scp)
{
	void(*enInitDataFunc)(EnLOCAL_DATA*)[15];
	int kind;
	// Line 350, Address: 0x141970, Func Offset: 0
	// Line 352, Address: 0x14198c, Func Offset: 0x1c
	// Line 370, Address: 0x1419c0, Func Offset: 0x50
	// Line 371, Address: 0x1419d8, Func Offset: 0x68
	// Line 372, Address: 0x1419dc, Func Offset: 0x6c
	// Line 374, Address: 0x141a14, Func Offset: 0xa4
	// Line 375, Address: 0x141a1c, Func Offset: 0xac
	// Line 376, Address: 0x141a28, Func Offset: 0xb8
	// Line 377, Address: 0x141a2c, Func Offset: 0xbc
	// Line 378, Address: 0x141a30, Func Offset: 0xc0
	// Line 379, Address: 0x141a40, Func Offset: 0xd0
	// Line 382, Address: 0x141a4c, Func Offset: 0xdc
	// Line 385, Address: 0x141a60, Func Offset: 0xf0
	// Line 388, Address: 0x141a78, Func Offset: 0x108
	// Line 389, Address: 0x141a94, Func Offset: 0x124
	// Func End, Address: 0x141ab0, Func Offset: 0x140
}

// 
// Start address: 0x141ab0
void enDeleteEnemy(EnLOCAL_DATA* dp)
{
	// Line 395, Address: 0x141ab0, Func Offset: 0
	// Line 396, Address: 0x141ab8, Func Offset: 0x8
	// Line 397, Address: 0x141ac0, Func Offset: 0x10
	// Line 398, Address: 0x141ac4, Func Offset: 0x14
	// Line 400, Address: 0x141b08, Func Offset: 0x58
	// Func End, Address: 0x141b18, Func Offset: 0x68
}

// 
// Start address: 0x141b20
void enDummyCtrl(EnLOCAL_DATA* dp)
{
	void* tmp;
	// Line 408, Address: 0x141b20, Func Offset: 0
	// Func End, Address: 0x141b28, Func Offset: 0x8
}

// 
// Start address: 0x141b30
int enTransID(int id)
{
	// Line 416, Address: 0x141b30, Func Offset: 0
	// Line 418, Address: 0x141bec, Func Offset: 0xbc
	// Line 420, Address: 0x141bf8, Func Offset: 0xc8
	// Line 422, Address: 0x141c04, Func Offset: 0xd4
	// Line 424, Address: 0x141c10, Func Offset: 0xe0
	// Line 426, Address: 0x141c1c, Func Offset: 0xec
	// Line 428, Address: 0x141c28, Func Offset: 0xf8
	// Line 430, Address: 0x141c34, Func Offset: 0x104
	// Line 433, Address: 0x141c40, Func Offset: 0x110
	// Line 435, Address: 0x141c4c, Func Offset: 0x11c
	// Line 437, Address: 0x141c58, Func Offset: 0x128
	// Line 439, Address: 0x141c64, Func Offset: 0x134
	// Line 441, Address: 0x141c70, Func Offset: 0x140
	// Line 443, Address: 0x141c7c, Func Offset: 0x14c
	// Line 445, Address: 0x141c88, Func Offset: 0x158
	// Line 447, Address: 0x141c94, Func Offset: 0x164
	// Line 448, Address: 0x141c98, Func Offset: 0x168
	// Func End, Address: 0x141ca0, Func Offset: 0x170
}

// 
// Start address: 0x141ca0
int enGetWorldCondition()
{
	// Line 493, Address: 0x141ca0, Func Offset: 0
	// Line 494, Address: 0x141ca8, Func Offset: 0x8
	// Line 495, Address: 0x141cb8, Func Offset: 0x18
	// Line 497, Address: 0x141cc8, Func Offset: 0x28
	// Line 502, Address: 0x141cf4, Func Offset: 0x54
	// Line 505, Address: 0x141d00, Func Offset: 0x60
	// Line 507, Address: 0x141d04, Func Offset: 0x64
	// Func End, Address: 0x141d14, Func Offset: 0x74
}

// 
// Start address: 0x141d20
int enGetPlace()
{
	int place;
	// Line 514, Address: 0x141d20, Func Offset: 0
	// Line 515, Address: 0x141d24, Func Offset: 0x4
	// Line 517, Address: 0x141d74, Func Offset: 0x54
	// Line 518, Address: 0x141d78, Func Offset: 0x58
	// Line 520, Address: 0x141d80, Func Offset: 0x60
	// Line 521, Address: 0x141d84, Func Offset: 0x64
	// Line 523, Address: 0x141d8c, Func Offset: 0x6c
	// Line 524, Address: 0x141d90, Func Offset: 0x70
	// Line 526, Address: 0x141d98, Func Offset: 0x78
	// Line 527, Address: 0x141d9c, Func Offset: 0x7c
	// Line 529, Address: 0x141da4, Func Offset: 0x84
	// Line 533, Address: 0x141da8, Func Offset: 0x88
	// Func End, Address: 0x141db0, Func Offset: 0x90
}

// 
// Start address: 0x141db0
int enGetStage()
{
	int s;
	// Line 540, Address: 0x141db0, Func Offset: 0
	// Line 541, Address: 0x141db4, Func Offset: 0x4
	// Line 544, Address: 0x141df8, Func Offset: 0x48
	// Line 546, Address: 0x141e00, Func Offset: 0x50
	// Line 547, Address: 0x141e18, Func Offset: 0x68
	// Line 548, Address: 0x141e1c, Func Offset: 0x6c
	// Line 549, Address: 0x141e24, Func Offset: 0x74
	// Line 551, Address: 0x141e28, Func Offset: 0x78
	// Line 553, Address: 0x141e30, Func Offset: 0x80
	// Line 554, Address: 0x141e48, Func Offset: 0x98
	// Line 555, Address: 0x141e4c, Func Offset: 0x9c
	// Line 556, Address: 0x141e54, Func Offset: 0xa4
	// Line 558, Address: 0x141e58, Func Offset: 0xa8
	// Line 560, Address: 0x141e60, Func Offset: 0xb0
	// Line 564, Address: 0x141e64, Func Offset: 0xb4
	// Func End, Address: 0x141e6c, Func Offset: 0xbc
}

// 
// Start address: 0x141e70
int enGetMode()
{
	// Line 571, Address: 0x141e70, Func Offset: 0
	// Line 572, Address: 0x141e78, Func Offset: 0x8
	// Func End, Address: 0x141e80, Func Offset: 0x10
}

// 
// Start address: 0x141e80
int enCheckDarkOrBright(SubCharacter* scp)
{
	// Line 578, Address: 0x141e80, Func Offset: 0
	// Line 579, Address: 0x141e88, Func Offset: 0x8
	// Line 580, Address: 0x141e90, Func Offset: 0x10
	// Func End, Address: 0x141ea0, Func Offset: 0x20
}

// 
// Start address: 0x141ea0
int enCheckDarkOrBrightPlayer()
{
	// Line 586, Address: 0x141ea0, Func Offset: 0
	// Line 587, Address: 0x141ea8, Func Offset: 0x8
	// Line 588, Address: 0x141eb8, Func Offset: 0x18
	// Func End, Address: 0x141ec8, Func Offset: 0x28
}

// 
// Start address: 0x141ed0
int enCheckWater(EnLOCAL_DATA* dp)
{
	float y;
	// Line 594, Address: 0x141ed0, Func Offset: 0
	// Line 595, Address: 0x141ee4, Func Offset: 0x14
	// Line 596, Address: 0x141ef0, Func Offset: 0x20
	// Line 599, Address: 0x141fb8, Func Offset: 0xe8
	// Line 600, Address: 0x141fc0, Func Offset: 0xf0
	// Line 605, Address: 0x141fc8, Func Offset: 0xf8
	// Line 606, Address: 0x141fd0, Func Offset: 0x100
	// Line 609, Address: 0x141fd8, Func Offset: 0x108
	// Line 610, Address: 0x141fe0, Func Offset: 0x110
	// Line 612, Address: 0x141fe8, Func Offset: 0x118
	// Line 613, Address: 0x141ff0, Func Offset: 0x120
	// Line 615, Address: 0x141ff8, Func Offset: 0x128
	// Line 616, Address: 0x142000, Func Offset: 0x130
	// Line 618, Address: 0x142008, Func Offset: 0x138
	// Line 619, Address: 0x142010, Func Offset: 0x140
	// Line 621, Address: 0x142018, Func Offset: 0x148
	// Line 622, Address: 0x142020, Func Offset: 0x150
	// Line 624, Address: 0x142028, Func Offset: 0x158
	// Line 625, Address: 0x142030, Func Offset: 0x160
	// Line 627, Address: 0x142038, Func Offset: 0x168
	// Line 631, Address: 0x142040, Func Offset: 0x170
	// Line 634, Address: 0x14205c, Func Offset: 0x18c
	// Func End, Address: 0x142074, Func Offset: 0x1a4
}

// 
// Start address: 0x142080
void enSetBattleTarget(EnLOCAL_DATA* dp, unsigned int type)
{
	// Line 681, Address: 0x142080, Func Offset: 0
	// Line 682, Address: 0x142090, Func Offset: 0x10
	// Line 683, Address: 0x1420a4, Func Offset: 0x24
	// Func End, Address: 0x1420b8, Func Offset: 0x38
}

// 
// Start address: 0x1420c0
void enSetHP(EnLOCAL_DATA* dp, float hp, float endurance)
{
	shBattleInfo* bi;
	// Line 691, Address: 0x1420c0, Func Offset: 0
	// Line 692, Address: 0x1420e4, Func Offset: 0x24
	// Line 693, Address: 0x1420ec, Func Offset: 0x2c
	// Line 695, Address: 0x142114, Func Offset: 0x54
	// Line 697, Address: 0x142154, Func Offset: 0x94
	// Line 698, Address: 0x142164, Func Offset: 0xa4
	// Line 700, Address: 0x14216c, Func Offset: 0xac
	// Line 701, Address: 0x14217c, Func Offset: 0xbc
	// Line 702, Address: 0x142190, Func Offset: 0xd0
	// Line 705, Address: 0x142198, Func Offset: 0xd8
	// Line 706, Address: 0x1421a8, Func Offset: 0xe8
	// Line 710, Address: 0x1421b8, Func Offset: 0xf8
	// Line 711, Address: 0x1421c0, Func Offset: 0x100
	// Line 712, Address: 0x1421c8, Func Offset: 0x108
	// Line 713, Address: 0x1421d0, Func Offset: 0x110
	// Line 714, Address: 0x1421d4, Func Offset: 0x114
	// Func End, Address: 0x1421f4, Func Offset: 0x134
}

// 
// Start address: 0x142200
float enReduceHP(EnLOCAL_DATA* dp)
{
	shBattleInfo* bi;
	// Line 722, Address: 0x142200, Func Offset: 0
	// Line 723, Address: 0x142208, Func Offset: 0x8
	// Line 724, Address: 0x142234, Func Offset: 0x34
	// Line 725, Address: 0x142260, Func Offset: 0x60
	// Line 726, Address: 0x142264, Func Offset: 0x64
	// Line 727, Address: 0x142284, Func Offset: 0x84
	// Line 728, Address: 0x142288, Func Offset: 0x88
	// Func End, Address: 0x142290, Func Offset: 0x90
}

// 
// Start address: 0x142290
float enAddHP(EnLOCAL_DATA* dp, float n)
{
	shBattleInfo* bi;
	// Line 737, Address: 0x142290, Func Offset: 0
	// Line 738, Address: 0x142298, Func Offset: 0x8
	// Line 739, Address: 0x1422bc, Func Offset: 0x2c
	// Line 740, Address: 0x1422dc, Func Offset: 0x4c
	// Line 741, Address: 0x1422fc, Func Offset: 0x6c
	// Line 742, Address: 0x142300, Func Offset: 0x70
	// Func End, Address: 0x142308, Func Offset: 0x78
}

// 
// Start address: 0x142310
float enAddEnduranceDT(EnLOCAL_DATA* dp, float n)
{
	float en;
	shBattleInfo* bi;
	// Line 764, Address: 0x142310, Func Offset: 0
	// Line 765, Address: 0x14232c, Func Offset: 0x1c
	// Line 766, Address: 0x142334, Func Offset: 0x24
	// Line 767, Address: 0x142348, Func Offset: 0x38
	// Line 768, Address: 0x142360, Func Offset: 0x50
	// Line 769, Address: 0x142378, Func Offset: 0x68
	// Line 770, Address: 0x14237c, Func Offset: 0x6c
	// Func End, Address: 0x142398, Func Offset: 0x88
}

// 
// Start address: 0x1423a0
int enCheckDamage(EnLOCAL_DATA* dp)
{
	shBattleInfo* bi;
	// Line 777, Address: 0x1423a0, Func Offset: 0
	// Line 778, Address: 0x1423b4, Func Offset: 0x14
	// Line 779, Address: 0x1423bc, Func Offset: 0x1c
	// Line 780, Address: 0x1423d8, Func Offset: 0x38
	// Line 781, Address: 0x1423dc, Func Offset: 0x3c
	// Line 783, Address: 0x1423e8, Func Offset: 0x48
	// Line 789, Address: 0x142460, Func Offset: 0xc0
	// Line 790, Address: 0x142464, Func Offset: 0xc4
	// Line 791, Address: 0x142468, Func Offset: 0xc8
	// Line 793, Address: 0x142474, Func Offset: 0xd4
	// Line 794, Address: 0x142490, Func Offset: 0xf0
	// Line 799, Address: 0x142500, Func Offset: 0x160
	// Line 800, Address: 0x142504, Func Offset: 0x164
	// Line 801, Address: 0x142508, Func Offset: 0x168
	// Line 805, Address: 0x142514, Func Offset: 0x174
	// Line 806, Address: 0x142540, Func Offset: 0x1a0
	// Line 809, Address: 0x14254c, Func Offset: 0x1ac
	// Line 810, Address: 0x142578, Func Offset: 0x1d8
	// Line 811, Address: 0x142580, Func Offset: 0x1e0
	// Line 812, Address: 0x142584, Func Offset: 0x1e4
	// Func End, Address: 0x14259c, Func Offset: 0x1fc
}

// 
// Start address: 0x1425a0
int enCheckSpray(EnLOCAL_DATA* dp)
{
	// Line 819, Address: 0x1425a0, Func Offset: 0
	// Line 820, Address: 0x1425bc, Func Offset: 0x1c
	// Line 822, Address: 0x1425c8, Func Offset: 0x28
	// Line 823, Address: 0x1425cc, Func Offset: 0x2c
	// Func End, Address: 0x1425d4, Func Offset: 0x34
}

// 
// Start address: 0x1425e0
void enResetDamage(EnLOCAL_DATA* dp)
{
	// Line 830, Address: 0x1425e0, Func Offset: 0
	// Line 831, Address: 0x1425e8, Func Offset: 0x8
	// Line 832, Address: 0x1425f0, Func Offset: 0x10
	// Line 833, Address: 0x1425f8, Func Offset: 0x18
	// Func End, Address: 0x142600, Func Offset: 0x20
}

// 
// Start address: 0x142600
int enCheckDeath(EnLOCAL_DATA* dp)
{
	// Line 841, Address: 0x142600, Func Offset: 0
	// Line 843, Address: 0x142624, Func Offset: 0x24
	// Func End, Address: 0x14262c, Func Offset: 0x2c
}

// 
// Start address: 0x142630
void enSetHitBack(EnLOCAL_DATA* dp)
{
	shBattleInfo* bi;
	float vec[4];
	// Line 849, Address: 0x142630, Func Offset: 0
	// Line 851, Address: 0x142634, Func Offset: 0x4
	// Line 852, Address: 0x14263c, Func Offset: 0xc
	// Line 853, Address: 0x142664, Func Offset: 0x34
	// Line 854, Address: 0x14266c, Func Offset: 0x3c
	// Line 855, Address: 0x142674, Func Offset: 0x44
	// Line 856, Address: 0x142688, Func Offset: 0x58
	// Line 857, Address: 0x14268c, Func Offset: 0x5c
	// Func End, Address: 0x142698, Func Offset: 0x68
}

// 
// Start address: 0x1426a0
int enCheckInstantDeath(EnLOCAL_DATA* dp)
{
	// Line 866, Address: 0x1426a0, Func Offset: 0
	// Line 867, Address: 0x1426bc, Func Offset: 0x1c
	// Line 869, Address: 0x1426c8, Func Offset: 0x28
	// Line 870, Address: 0x1426cc, Func Offset: 0x2c
	// Func End, Address: 0x1426d4, Func Offset: 0x34
}

// 
// Start address: 0x1426e0
void enSetSize(EnLOCAL_DATA* dp, float size, float tall, float center, float eye)
{
	// Line 882, Address: 0x1426e0, Func Offset: 0
	// Line 883, Address: 0x1426e8, Func Offset: 0x8
	// Line 884, Address: 0x1426f0, Func Offset: 0x10
	// Line 885, Address: 0x1426f8, Func Offset: 0x18
	// Line 886, Address: 0x142700, Func Offset: 0x20
	// Func End, Address: 0x142708, Func Offset: 0x28
}

// 
// Start address: 0x142710
void enSetNewSize(EnLOCAL_DATA* dp, float size, float tall, float center, float eye)
{
	// Line 898, Address: 0x142710, Func Offset: 0
	// Line 899, Address: 0x142714, Func Offset: 0x4
	// Line 900, Address: 0x142718, Func Offset: 0x8
	// Line 901, Address: 0x14271c, Func Offset: 0xc
	// Line 902, Address: 0x142720, Func Offset: 0x10
	// Func End, Address: 0x142728, Func Offset: 0x18
}

// 
// Start address: 0x142730
void enSetSeeLightStatus(EnLOCAL_DATA* dp, float center, float radius)
{
	shBattleInfo* bi;
	// Line 911, Address: 0x142730, Func Offset: 0
	// Line 912, Address: 0x142734, Func Offset: 0x4
	// Line 913, Address: 0x142738, Func Offset: 0x8
	// Line 914, Address: 0x14273c, Func Offset: 0xc
	// Line 915, Address: 0x142744, Func Offset: 0x14
	// Func End, Address: 0x14274c, Func Offset: 0x1c
}

// 
// Start address: 0x142750
int enCheckSeeLight(EnLOCAL_DATA* dp)
{
	// Line 923, Address: 0x142750, Func Offset: 0
	// Line 924, Address: 0x142758, Func Offset: 0x8
	// Line 925, Address: 0x14276c, Func Offset: 0x1c
	// Func End, Address: 0x14277c, Func Offset: 0x2c
}

// 
// Start address: 0x142780
int enCheckAimedByHuman(EnLOCAL_DATA* dp)
{
	// Line 931, Address: 0x142780, Func Offset: 0
	// Line 932, Address: 0x142788, Func Offset: 0x8
	// Line 933, Address: 0x142794, Func Offset: 0x14
	// Func End, Address: 0x1427a4, Func Offset: 0x24
}

// 
// Start address: 0x1427b0
int enCheckFinishedByHuman(EnLOCAL_DATA* dp)
{
	// Line 939, Address: 0x1427b0, Func Offset: 0
	// Line 940, Address: 0x1427b8, Func Offset: 0x8
	// Line 941, Address: 0x1427c4, Func Offset: 0x14
	// Func End, Address: 0x1427d4, Func Offset: 0x24
}

// 
// Start address: 0x1427e0
int enCheckNoDamageHuman(EnLOCAL_DATA* dp)
{
	// Line 947, Address: 0x1427e0, Func Offset: 0
	// Line 949, Address: 0x1427e8, Func Offset: 0x8
	// Line 953, Address: 0x142818, Func Offset: 0x38
	// Func End, Address: 0x142828, Func Offset: 0x48
}

// 
// Start address: 0x142830
void enAttackStart(EnLOCAL_DATA* dp)
{
	// Line 959, Address: 0x142830, Func Offset: 0
	// Line 960, Address: 0x142840, Func Offset: 0x10
	// Line 961, Address: 0x14284c, Func Offset: 0x1c
	// Line 962, Address: 0x142858, Func Offset: 0x28
	// Func End, Address: 0x14286c, Func Offset: 0x3c
}

// 
// Start address: 0x142870
int enAttackCheck(EnLOCAL_DATA* dp, int ID)
{
	int result;
	// Line 970, Address: 0x142870, Func Offset: 0
	// Line 972, Address: 0x14287c, Func Offset: 0xc
	// Line 973, Address: 0x142898, Func Offset: 0x28
	// Line 974, Address: 0x1428a0, Func Offset: 0x30
	// Line 975, Address: 0x1428a8, Func Offset: 0x38
	// Line 976, Address: 0x1428b4, Func Offset: 0x44
	// Line 982, Address: 0x1428c0, Func Offset: 0x50
	// Line 984, Address: 0x1428d0, Func Offset: 0x60
	// Line 985, Address: 0x1428d4, Func Offset: 0x64
	// Func End, Address: 0x1428e8, Func Offset: 0x78
}

// 
// Start address: 0x1428f0
int enAttackCheckHug(EnLOCAL_DATA* dp, int ID)
{
	// Line 993, Address: 0x1428f0, Func Offset: 0
	// Line 994, Address: 0x142900, Func Offset: 0x10
	// Line 995, Address: 0x142910, Func Offset: 0x20
	// Line 996, Address: 0x142918, Func Offset: 0x28
	// Func End, Address: 0x14292c, Func Offset: 0x3c
}

// 
// Start address: 0x142930
int enCheckHuggedPlayer()
{
	// Line 1002, Address: 0x142930, Func Offset: 0
	// Line 1003, Address: 0x142938, Func Offset: 0x8
	// Line 1004, Address: 0x142940, Func Offset: 0x10
	// Func End, Address: 0x142950, Func Offset: 0x20
}

// 
// Start address: 0x142950
int enCheckSleepIn(EnLOCAL_DATA* dp)
{
	// Line 1011, Address: 0x142950, Func Offset: 0
	// Line 1012, Address: 0x142960, Func Offset: 0x10
	// Line 1015, Address: 0x1429c0, Func Offset: 0x70
	// Line 1017, Address: 0x1429cc, Func Offset: 0x7c
	// Line 1018, Address: 0x1429d0, Func Offset: 0x80
	// Func End, Address: 0x1429e4, Func Offset: 0x94
}

// 
// Start address: 0x1429f0
int enCheckSleepOut(EnLOCAL_DATA* dp)
{
	// Line 1025, Address: 0x1429f0, Func Offset: 0
	// Line 1026, Address: 0x142a00, Func Offset: 0x10
	// Line 1028, Address: 0x142a4c, Func Offset: 0x5c
	// Line 1030, Address: 0x142a58, Func Offset: 0x68
	// Line 1031, Address: 0x142a5c, Func Offset: 0x6c
	// Func End, Address: 0x142a70, Func Offset: 0x80
}

// 
// Start address: 0x142a70
void enSleepIn(EnLOCAL_DATA* dp)
{
	// Line 1038, Address: 0x142a70, Func Offset: 0
	// Line 1039, Address: 0x142a78, Func Offset: 0x8
	// Line 1040, Address: 0x142a8c, Func Offset: 0x1c
	// Func End, Address: 0x142a94, Func Offset: 0x24
}

// 
// Start address: 0x142aa0
void enSleepOut(EnLOCAL_DATA* dp)
{
	// Line 1047, Address: 0x142aa0, Func Offset: 0
	// Line 1048, Address: 0x142aa8, Func Offset: 0x8
	// Line 1049, Address: 0x142abc, Func Offset: 0x1c
	// Line 1050, Address: 0x142acc, Func Offset: 0x2c
	// Func End, Address: 0x142ad4, Func Offset: 0x34
}

// 
// Start address: 0x142ae0
void enKillCountUp(EnLOCAL_DATA* dp)
{
	// Line 1055, Address: 0x142ae0, Func Offset: 0
	// Line 1056, Address: 0x142ae8, Func Offset: 0x8
	// Line 1057, Address: 0x142af4, Func Offset: 0x14
	// Func End, Address: 0x142b04, Func Offset: 0x24
}

// 
// Start address: 0x142b10
float* enGetPlayerPos(EnLOCAL_DATA* dp)
{
	// Line 1067, Address: 0x142b10, Func Offset: 0
	// Line 1070, Address: 0x142b3c, Func Offset: 0x2c
	// Func End, Address: 0x142b44, Func Offset: 0x34
}

// 
// Start address: 0x142b50
float enGetPlayerDistance(EnLOCAL_DATA* dp)
{
	// Line 1077, Address: 0x142b50, Func Offset: 0
	// Line 1078, Address: 0x142b5c, Func Offset: 0xc
	// Line 1079, Address: 0x142b90, Func Offset: 0x40
	// Func End, Address: 0x142ba4, Func Offset: 0x54
}

// 
// Start address: 0x142bb0
float enGetPlayerDirection(EnLOCAL_DATA* dp)
{
	float vec[4];
	// Line 1086, Address: 0x142bb0, Func Offset: 0
	// Line 1088, Address: 0x142bbc, Func Offset: 0xc
	// Line 1089, Address: 0x142be0, Func Offset: 0x30
	// Line 1090, Address: 0x142be8, Func Offset: 0x38
	// Func End, Address: 0x142bfc, Func Offset: 0x4c
}

// 
// Start address: 0x142c00
int enGetPlayerWeapon()
{
	// Line 1098, Address: 0x142c00, Func Offset: 0
	// Line 1099, Address: 0x142c08, Func Offset: 0x8
	// Func End, Address: 0x142c10, Func Offset: 0x10
}

// 
// Start address: 0x142c10
int enCheckPlayerWeapon()
{
	// Line 1106, Address: 0x142c10, Func Offset: 0
	// Line 1110, Address: 0x142c44, Func Offset: 0x34
	// Line 1112, Address: 0x142c50, Func Offset: 0x40
	// Line 1113, Address: 0x142c54, Func Offset: 0x44
	// Func End, Address: 0x142c5c, Func Offset: 0x4c
}

// 
// Start address: 0x142c60
float enGetPlayerAngle(EnLOCAL_DATA* dp)
{
	// Line 1121, Address: 0x142c60, Func Offset: 0
	// Line 1122, Address: 0x142c6c, Func Offset: 0xc
	// Func End, Address: 0x142c74, Func Offset: 0x14
}

// 
// Start address: 0x142c80
float enGetPlayerSize()
{
	// Line 1129, Address: 0x142c80, Func Offset: 0
	// Line 1130, Address: 0x142c88, Func Offset: 0x8
	// Func End, Address: 0x142c90, Func Offset: 0x10
}

// 
// Start address: 0x142c90
int enCheckPlayerSound(EnLOCAL_DATA* dp)
{
	// Line 1136, Address: 0x142c90, Func Offset: 0
	// Line 1137, Address: 0x142c98, Func Offset: 0x8
	// Line 1138, Address: 0x142ca8, Func Offset: 0x18
	// Func End, Address: 0x142cb8, Func Offset: 0x28
}

// 
// Start address: 0x142cc0
int enCheckPlayerCondition(EnLOCAL_DATA* dp)
{
	float a;
	int w;
	int r;
	// Line 1147, Address: 0x142cc0, Func Offset: 0
	// Line 1148, Address: 0x142cd4, Func Offset: 0x14
	// Line 1152, Address: 0x142cd8, Func Offset: 0x18
	// Line 1154, Address: 0x142cec, Func Offset: 0x2c
	// Line 1155, Address: 0x142cf4, Func Offset: 0x34
	// Line 1156, Address: 0x142d04, Func Offset: 0x44
	// Line 1159, Address: 0x142d08, Func Offset: 0x48
	// Line 1160, Address: 0x142d38, Func Offset: 0x78
	// Line 1161, Address: 0x142d5c, Func Offset: 0x9c
	// Line 1162, Address: 0x142d60, Func Offset: 0xa0
	// Func End, Address: 0x142d78, Func Offset: 0xb8
}

// 
// Start address: 0x142d80
int enCheckPlayerLight()
{
	// Line 1169, Address: 0x142d80, Func Offset: 0
	// Line 1170, Address: 0x142d88, Func Offset: 0x8
	// Func End, Address: 0x142d90, Func Offset: 0x10
}

// 
// Start address: 0x142d90
int enCheckPlayerSprayNow()
{
	// Line 1177, Address: 0x142d90, Func Offset: 0
	// Line 1181, Address: 0x142ddc, Func Offset: 0x4c
	// Line 1183, Address: 0x142de8, Func Offset: 0x58
	// Line 1184, Address: 0x142dec, Func Offset: 0x5c
	// Func End, Address: 0x142df4, Func Offset: 0x64
}

// 
// Start address: 0x142e00
int enGetSprayPower()
{
	int n;
	// Line 1191, Address: 0x142e00, Func Offset: 0
	// Line 1192, Address: 0x142e08, Func Offset: 0x8
	// Line 1194, Address: 0x142e18, Func Offset: 0x18
	// Func End, Address: 0x142e20, Func Offset: 0x20
}

// 
// Start address: 0x142e20
int enCheckPlayerBulletEmpty()
{
	// Line 1201, Address: 0x142e20, Func Offset: 0
	// Line 1204, Address: 0x142e80, Func Offset: 0x60
	// Line 1206, Address: 0x142e8c, Func Offset: 0x6c
	// Line 1207, Address: 0x142e90, Func Offset: 0x70
	// Func End, Address: 0x142e98, Func Offset: 0x78
}

// 
// Start address: 0x142ea0
int enCheckDeadPlayer()
{
	// Line 1214, Address: 0x142ea0, Func Offset: 0
	// Line 1215, Address: 0x142ea8, Func Offset: 0x8
	// Func End, Address: 0x142eb0, Func Offset: 0x10
}

// 
// Start address: 0x142eb0
void enSetGameOver()
{
	// Line 1221, Address: 0x142eb0, Func Offset: 0
	// Line 1222, Address: 0x142ebc, Func Offset: 0xc
	// Func End, Address: 0x142ec4, Func Offset: 0x14
}

// 
// Start address: 0x142ed0
void enFlagSetMoved(EnLOCAL_DATA* dp)
{
	// Line 1229, Address: 0x142ed0, Func Offset: 0
	// Line 1230, Address: 0x142ee0, Func Offset: 0x10
	// Func End, Address: 0x142ee8, Func Offset: 0x18
}

// 
// Start address: 0x142ef0
void enFlagResetMoved(EnLOCAL_DATA* dp)
{
	// Line 1237, Address: 0x142ef0, Func Offset: 0
	// Line 1238, Address: 0x142f04, Func Offset: 0x14
	// Func End, Address: 0x142f0c, Func Offset: 0x1c
}

// 
// Start address: 0x142f10
void enFlagSetLieDown(EnLOCAL_DATA* dp)
{
	// Line 1245, Address: 0x142f10, Func Offset: 0
	// Line 1246, Address: 0x142f20, Func Offset: 0x10
	// Func End, Address: 0x142f28, Func Offset: 0x18
}

// 
// Start address: 0x142f30
void enFlagResetLieDown(EnLOCAL_DATA* dp)
{
	// Line 1253, Address: 0x142f30, Func Offset: 0
	// Line 1254, Address: 0x142f44, Func Offset: 0x14
	// Func End, Address: 0x142f4c, Func Offset: 0x1c
}

// 
// Start address: 0x142f50
void enFlagSetCritical(EnLOCAL_DATA* dp)
{
	// Line 1261, Address: 0x142f50, Func Offset: 0
	// Line 1262, Address: 0x142f60, Func Offset: 0x10
	// Func End, Address: 0x142f68, Func Offset: 0x18
}

// 
// Start address: 0x142f70
void enFlagResetCritical(EnLOCAL_DATA* dp)
{
	// Line 1269, Address: 0x142f70, Func Offset: 0
	// Line 1270, Address: 0x142f84, Func Offset: 0x14
	// Func End, Address: 0x142f8c, Func Offset: 0x1c
}

// 
// Start address: 0x142f90
int enCheckCritical(EnLOCAL_DATA* dp)
{
	// Line 1277, Address: 0x142f90, Func Offset: 0
	// Line 1278, Address: 0x142fa0, Func Offset: 0x10
	// Func End, Address: 0x142fa8, Func Offset: 0x18
}

// 
// Start address: 0x142fb0
void enFlagSetNoDamage(EnLOCAL_DATA* dp)
{
	// Line 1285, Address: 0x142fb0, Func Offset: 0
	// Line 1286, Address: 0x142fc0, Func Offset: 0x10
	// Func End, Address: 0x142fc8, Func Offset: 0x18
}

// 
// Start address: 0x142fd0
void enFlagResetNoDamage(EnLOCAL_DATA* dp)
{
	// Line 1293, Address: 0x142fd0, Func Offset: 0
	// Line 1294, Address: 0x142fe4, Func Offset: 0x14
	// Func End, Address: 0x142fec, Func Offset: 0x1c
}

// 
// Start address: 0x142ff0
void enFlagSetDead(EnLOCAL_DATA* dp)
{
	// Line 1301, Address: 0x142ff0, Func Offset: 0
	// Line 1302, Address: 0x143000, Func Offset: 0x10
	// Func End, Address: 0x143008, Func Offset: 0x18
}

// 
// Start address: 0x143010
void enFlagResetDead(EnLOCAL_DATA* dp)
{
	// Line 1309, Address: 0x143010, Func Offset: 0
	// Line 1310, Address: 0x143024, Func Offset: 0x14
	// Func End, Address: 0x14302c, Func Offset: 0x1c
}

// 
// Start address: 0x143030
void enFlagSetRotFloor(EnLOCAL_DATA* dp)
{
	// Line 1317, Address: 0x143030, Func Offset: 0
	// Line 1318, Address: 0x14303c, Func Offset: 0xc
	// Line 1319, Address: 0x14304c, Func Offset: 0x1c
	// Func End, Address: 0x143054, Func Offset: 0x24
}

// 
// Start address: 0x143060
void enFlagResetRotFloor(EnLOCAL_DATA* dp)
{
	// Line 1326, Address: 0x143060, Func Offset: 0
	// Line 1327, Address: 0x143070, Func Offset: 0x10
	// Line 1328, Address: 0x143078, Func Offset: 0x18
	// Func End, Address: 0x143080, Func Offset: 0x20
}

// 
// Start address: 0x143080
void enFlagResetRotFloorJust(EnLOCAL_DATA* dp)
{
	// Line 1335, Address: 0x143080, Func Offset: 0
	// Line 1336, Address: 0x143090, Func Offset: 0x10
	// Line 1337, Address: 0x143098, Func Offset: 0x18
	// Line 1338, Address: 0x1430a8, Func Offset: 0x28
	// Line 1339, Address: 0x1430bc, Func Offset: 0x3c
	// Func End, Address: 0x1430c4, Func Offset: 0x44
}

// 
// Start address: 0x1430d0
void enFlagSetDisplay(EnLOCAL_DATA* dp)
{
	// Line 1345, Address: 0x1430d0, Func Offset: 0
	// Line 1346, Address: 0x1430e0, Func Offset: 0x10
	// Func End, Address: 0x1430e8, Func Offset: 0x18
}

// 
// Start address: 0x1430f0
void enFlagResetDisplay(EnLOCAL_DATA* dp)
{
	// Line 1352, Address: 0x1430f0, Func Offset: 0
	// Line 1353, Address: 0x143104, Func Offset: 0x14
	// Func End, Address: 0x14310c, Func Offset: 0x1c
}

// 
// Start address: 0x143110
float enCalcDirection(float* pa, float* pb)
{
	float vec[4];
	// Line 1360, Address: 0x143110, Func Offset: 0
	// Line 1362, Address: 0x143118, Func Offset: 0x8
	// Line 1363, Address: 0x14312c, Func Offset: 0x1c
	// Line 1364, Address: 0x143138, Func Offset: 0x28
	// Func End, Address: 0x143148, Func Offset: 0x38
}

// 
// Start address: 0x143150
float enCalcAngleDifference(float angle1, float angle2)
{
	// Line 1371, Address: 0x143150, Func Offset: 0
	// Line 1372, Address: 0x143158, Func Offset: 0x8
	// Line 1373, Address: 0x143168, Func Offset: 0x18
	// Func End, Address: 0x143178, Func Offset: 0x28
}

// 
// Start address: 0x143180
float enCalcSpeedRate(float angle, float* mpos, float* tpos)
{
	float d;
	// Line 1399, Address: 0x143180, Func Offset: 0
	// Line 1401, Address: 0x143194, Func Offset: 0x14
	// Line 1402, Address: 0x1431b0, Func Offset: 0x30
	// Line 1403, Address: 0x1431cc, Func Offset: 0x4c
	// Line 1404, Address: 0x1431e0, Func Offset: 0x60
	// Func End, Address: 0x1431f4, Func Offset: 0x74
}

// 
// Start address: 0x143200
void enMakeRotVector(float* vec, float* rot, float range)
{
	float rmat[4][4];
	// Line 1412, Address: 0x143200, Func Offset: 0
	// Line 1414, Address: 0x143220, Func Offset: 0x20
	// Line 1415, Address: 0x143248, Func Offset: 0x48
	// Line 1416, Address: 0x143280, Func Offset: 0x80
	// Line 1417, Address: 0x143284, Func Offset: 0x84
	// Line 1418, Address: 0x143288, Func Offset: 0x88
	// Line 1419, Address: 0x1432b4, Func Offset: 0xb4
	// Func End, Address: 0x1432d0, Func Offset: 0xd0
}

// 
// Start address: 0x1432d0
int enCheckIntoScreen(EnLOCAL_DATA* dp)
{
	float vec[4];
	// Line 1445, Address: 0x1432d0, Func Offset: 0
	// Line 1447, Address: 0x1432d8, Func Offset: 0x8
	// Line 1448, Address: 0x1432f0, Func Offset: 0x20
	// Line 1449, Address: 0x143300, Func Offset: 0x30
	// Line 1450, Address: 0x143344, Func Offset: 0x74
	// Line 1451, Address: 0x143358, Func Offset: 0x88
	// Line 1453, Address: 0x143364, Func Offset: 0x94
	// Line 1454, Address: 0x143368, Func Offset: 0x98
	// Func End, Address: 0x143378, Func Offset: 0xa8
}

// 
// Start address: 0x143380
SubCharacter* enGetNearCharacter(EnLOCAL_DATA* dp)
{
	SubCharacter* scp;
	EnLOCAL_DATA* tp;
	int i;
	float d;
	float dist;
	// Line 1461, Address: 0x143380, Func Offset: 0
	// Line 1464, Address: 0x143394, Func Offset: 0x14
	// Line 1465, Address: 0x14339c, Func Offset: 0x1c
	// Line 1466, Address: 0x1433ac, Func Offset: 0x2c
	// Line 1467, Address: 0x1433dc, Func Offset: 0x5c
	// Line 1468, Address: 0x1433e8, Func Offset: 0x68
	// Line 1469, Address: 0x14341c, Func Offset: 0x9c
	// Line 1470, Address: 0x14344c, Func Offset: 0xcc
	// Line 1471, Address: 0x14345c, Func Offset: 0xdc
	// Line 1472, Address: 0x143460, Func Offset: 0xe0
	// Line 1473, Address: 0x143464, Func Offset: 0xe4
	// Line 1474, Address: 0x143468, Func Offset: 0xe8
	// Line 1476, Address: 0x14347c, Func Offset: 0xfc
	// Func End, Address: 0x143494, Func Offset: 0x114
}

// 
// Start address: 0x1434a0
int enCalcTimer(int t)
{
	// Line 1484, Address: 0x1434a0, Func Offset: 0
	// Line 1485, Address: 0x1434d0, Func Offset: 0x30
	// Func End, Address: 0x1434d8, Func Offset: 0x38
}

// 
// Start address: 0x1434e0
void enSetTimer(EnLOCAL_DATA* dp, int t)
{
	// Line 1492, Address: 0x1434e0, Func Offset: 0
	// Line 1493, Address: 0x1434f0, Func Offset: 0x10
	// Line 1494, Address: 0x143510, Func Offset: 0x30
	// Line 1495, Address: 0x143520, Func Offset: 0x40
	// Func End, Address: 0x143534, Func Offset: 0x54
}

// 
// Start address: 0x143540
int enReduceTimer(EnLOCAL_DATA* dp)
{
	int n;
	int t;
	// Line 1502, Address: 0x143540, Func Offset: 0
	// Line 1503, Address: 0x143558, Func Offset: 0x18
	// Line 1504, Address: 0x14355c, Func Offset: 0x1c
	// Line 1505, Address: 0x143580, Func Offset: 0x40
	// Line 1506, Address: 0x143598, Func Offset: 0x58
	// Line 1507, Address: 0x1435c8, Func Offset: 0x88
	// Line 1508, Address: 0x1435d4, Func Offset: 0x94
	// Line 1509, Address: 0x1435dc, Func Offset: 0x9c
	// Line 1511, Address: 0x1435ec, Func Offset: 0xac
	// Line 1512, Address: 0x1435f4, Func Offset: 0xb4
	// Func End, Address: 0x143610, Func Offset: 0xd0
}

// 
// Start address: 0x143610
EnLOCAL_DATA* enGetNearOtherEnemy(EnLOCAL_DATA* dp)
{
	float m;
	float d;
	EnLOCAL_DATA* rp;
	EnLOCAL_DATA* tp;
	int i;
	// Line 1520, Address: 0x143610, Func Offset: 0
	// Line 1521, Address: 0x143618, Func Offset: 0x8
	// Line 1523, Address: 0x14361c, Func Offset: 0xc
	// Line 1524, Address: 0x143628, Func Offset: 0x18
	// Line 1525, Address: 0x143634, Func Offset: 0x24
	// Line 1526, Address: 0x14365c, Func Offset: 0x4c
	// Line 1527, Address: 0x14369c, Func Offset: 0x8c
	// Line 1528, Address: 0x1436ac, Func Offset: 0x9c
	// Line 1529, Address: 0x1436b0, Func Offset: 0xa0
	// Line 1530, Address: 0x1436b4, Func Offset: 0xa4
	// Line 1532, Address: 0x1436b8, Func Offset: 0xa8
	// Line 1534, Address: 0x1436cc, Func Offset: 0xbc
	// Func End, Address: 0x1436d4, Func Offset: 0xc4
}

// 
// Start address: 0x1436e0
void enCheckNearPlayer(EnLOCAL_DATA* dp, int* count, float* dist, float limit)
{
	float vec[4];
	float d;
	// Line 1543, Address: 0x1436e0, Func Offset: 0
	// Line 1546, Address: 0x14370c, Func Offset: 0x2c
	// Line 1548, Address: 0x143768, Func Offset: 0x88
	// Line 1549, Address: 0x14376c, Func Offset: 0x8c
	// Line 1551, Address: 0x143774, Func Offset: 0x94
	// Line 1552, Address: 0x143780, Func Offset: 0xa0
	// Line 1553, Address: 0x143794, Func Offset: 0xb4
	// Line 1554, Address: 0x1437a0, Func Offset: 0xc0
	// Line 1556, Address: 0x1437a4, Func Offset: 0xc4
	// Line 1558, Address: 0x1437ac, Func Offset: 0xcc
	// Line 1559, Address: 0x1437c0, Func Offset: 0xe0
	// Line 1560, Address: 0x1437d0, Func Offset: 0xf0
	// Line 1561, Address: 0x1437d8, Func Offset: 0xf8
	// Line 1563, Address: 0x1437e0, Func Offset: 0x100
	// Line 1564, Address: 0x1437f4, Func Offset: 0x114
	// Line 1565, Address: 0x1437f8, Func Offset: 0x118
	// Line 1566, Address: 0x143800, Func Offset: 0x120
	// Line 1568, Address: 0x143804, Func Offset: 0x124
	// Line 1569, Address: 0x143824, Func Offset: 0x144
	// Line 1570, Address: 0x143844, Func Offset: 0x164
	// Line 1571, Address: 0x143850, Func Offset: 0x170
	// Line 1572, Address: 0x14385c, Func Offset: 0x17c
	// Line 1573, Address: 0x143860, Func Offset: 0x180
	// Func End, Address: 0x143884, Func Offset: 0x1a4
}

// 
// Start address: 0x143890
void enSetRadioVolume(EnLOCAL_DATA* dp)
{
	// Line 1579, Address: 0x143890, Func Offset: 0
	// Line 1580, Address: 0x1438ac, Func Offset: 0x1c
	// Line 1581, Address: 0x1438b4, Func Offset: 0x24
	// Line 1584, Address: 0x14390c, Func Offset: 0x7c
	// Line 1585, Address: 0x143910, Func Offset: 0x80
	// Line 1586, Address: 0x143918, Func Offset: 0x88
	// Line 1587, Address: 0x143928, Func Offset: 0x98
	// Line 1588, Address: 0x143934, Func Offset: 0xa4
	// Line 1589, Address: 0x14393c, Func Offset: 0xac
	// Line 1590, Address: 0x143950, Func Offset: 0xc0
	// Line 1591, Address: 0x14395c, Func Offset: 0xcc
	// Line 1592, Address: 0x143964, Func Offset: 0xd4
	// Line 1594, Address: 0x14396c, Func Offset: 0xdc
	// Line 1595, Address: 0x143974, Func Offset: 0xe4
	// Line 1598, Address: 0x143978, Func Offset: 0xe8
	// Func End, Address: 0x143980, Func Offset: 0xf0
}

// 
// Start address: 0x143980
void enMoveAngle(EnPATH_DATA* p, float delta)
{
	// Line 1605, Address: 0x143980, Func Offset: 0
	// Line 1606, Address: 0x14399c, Func Offset: 0x1c
	// Line 1607, Address: 0x143a18, Func Offset: 0x98
	// Func End, Address: 0x143a34, Func Offset: 0xb4
}

// 
// Start address: 0x143a40
void enMoveAngleToPlayer(EnLOCAL_DATA* dp, float delta)
{
	// Line 1614, Address: 0x143a40, Func Offset: 0
	// Line 1615, Address: 0x143a58, Func Offset: 0x18
	// Line 1616, Address: 0x143a64, Func Offset: 0x24
	// Line 1617, Address: 0x143a74, Func Offset: 0x34
	// Line 1618, Address: 0x143a80, Func Offset: 0x40
	// Func End, Address: 0x143a98, Func Offset: 0x58
}

// 
// Start address: 0x143aa0
void enMoveExec(EnLOCAL_DATA* dp)
{
	float hb;
	float dt;
	float e;
	float c;
	float t;
	float s;
	float vec2[4];
	float vec[4];
	// Line 1624, Address: 0x143aa0, Func Offset: 0
	// Line 1627, Address: 0x143abc, Func Offset: 0x1c
	// Line 1629, Address: 0x143ad4, Func Offset: 0x34
	// Line 1630, Address: 0x143ae4, Func Offset: 0x44
	// Line 1632, Address: 0x143af0, Func Offset: 0x50
	// Line 1633, Address: 0x143b6c, Func Offset: 0xcc
	// Line 1635, Address: 0x143bec, Func Offset: 0x14c
	// Line 1636, Address: 0x143bf0, Func Offset: 0x150
	// Line 1637, Address: 0x143c04, Func Offset: 0x164
	// Line 1638, Address: 0x143c68, Func Offset: 0x1c8
	// Line 1641, Address: 0x143c6c, Func Offset: 0x1cc
	// Line 1642, Address: 0x143c70, Func Offset: 0x1d0
	// Line 1643, Address: 0x143c84, Func Offset: 0x1e4
	// Line 1644, Address: 0x143cd8, Func Offset: 0x238
	// Line 1647, Address: 0x143cdc, Func Offset: 0x23c
	// Line 1648, Address: 0x143ce0, Func Offset: 0x240
	// Line 1649, Address: 0x143cf4, Func Offset: 0x254
	// Line 1650, Address: 0x143d48, Func Offset: 0x2a8
	// Line 1653, Address: 0x143d4c, Func Offset: 0x2ac
	// Line 1654, Address: 0x143d50, Func Offset: 0x2b0
	// Line 1655, Address: 0x143d64, Func Offset: 0x2c4
	// Line 1656, Address: 0x143db8, Func Offset: 0x318
	// Line 1658, Address: 0x143dbc, Func Offset: 0x31c
	// Line 1659, Address: 0x143dd0, Func Offset: 0x330
	// Line 1662, Address: 0x143e14, Func Offset: 0x374
	// Line 1665, Address: 0x143e1c, Func Offset: 0x37c
	// Line 1667, Address: 0x143e44, Func Offset: 0x3a4
	// Line 1669, Address: 0x143e50, Func Offset: 0x3b0
	// Line 1671, Address: 0x143e74, Func Offset: 0x3d4
	// Line 1672, Address: 0x143ea4, Func Offset: 0x404
	// Line 1673, Address: 0x143eac, Func Offset: 0x40c
	// Line 1674, Address: 0x143ebc, Func Offset: 0x41c
	// Line 1675, Address: 0x143ecc, Func Offset: 0x42c
	// Line 1676, Address: 0x143ed4, Func Offset: 0x434
	// Line 1677, Address: 0x143edc, Func Offset: 0x43c
	// Line 1678, Address: 0x143ef0, Func Offset: 0x450
	// Line 1681, Address: 0x143f08, Func Offset: 0x468
	// Line 1682, Address: 0x143f24, Func Offset: 0x484
	// Line 1683, Address: 0x143f38, Func Offset: 0x498
	// Line 1684, Address: 0x143f60, Func Offset: 0x4c0
	// Line 1685, Address: 0x143f68, Func Offset: 0x4c8
	// Line 1686, Address: 0x143f70, Func Offset: 0x4d0
	// Line 1687, Address: 0x143f78, Func Offset: 0x4d8
	// Line 1688, Address: 0x143f8c, Func Offset: 0x4ec
	// Line 1689, Address: 0x143fa0, Func Offset: 0x500
	// Line 1691, Address: 0x143fc4, Func Offset: 0x524
	// Line 1692, Address: 0x143fe0, Func Offset: 0x540
	// Line 1693, Address: 0x143ff4, Func Offset: 0x554
	// Line 1694, Address: 0x14400c, Func Offset: 0x56c
	// Line 1696, Address: 0x144010, Func Offset: 0x570
	// Line 1697, Address: 0x14401c, Func Offset: 0x57c
	// Func End, Address: 0x14403c, Func Offset: 0x59c
}

// 
// Start address: 0x144040
void enSetRotFloor(EnLOCAL_DATA* dp)
{
	float vec[4];
	// Line 1702, Address: 0x144040, Func Offset: 0
	// Line 1704, Address: 0x144058, Func Offset: 0x18
	// Line 1705, Address: 0x144070, Func Offset: 0x30
	// Line 1706, Address: 0x144090, Func Offset: 0x50
	// Line 1707, Address: 0x1440a8, Func Offset: 0x68
	// Func End, Address: 0x1440c0, Func Offset: 0x80
}

// 
// Start address: 0x1440c0
void enSetHitColumn(EnLOCAL_DATA* dp)
{
	FOG_OBJ_DATA* od;
	int ID;
	float* pos;
	float e;
	float c;
	float t;
	float s;
	float vec[4];
	_CL_HITPOLY_COLUMN column2;
	_CL_HITPOLY_COLUMN column;
	// Line 1712, Address: 0x1440c0, Func Offset: 0
	// Line 1717, Address: 0x1440e4, Func Offset: 0x24
	// Line 1720, Address: 0x144118, Func Offset: 0x58
	// Line 1721, Address: 0x14415c, Func Offset: 0x9c
	// Line 1723, Address: 0x144164, Func Offset: 0xa4
	// Line 1724, Address: 0x14416c, Func Offset: 0xac
	// Line 1725, Address: 0x144170, Func Offset: 0xb0
	// Line 1726, Address: 0x144174, Func Offset: 0xb4
	// Line 1727, Address: 0x144178, Func Offset: 0xb8
	// Line 1728, Address: 0x14417c, Func Offset: 0xbc
	// Line 1729, Address: 0x144184, Func Offset: 0xc4
	// Line 1730, Address: 0x14418c, Func Offset: 0xcc
	// Line 1731, Address: 0x144194, Func Offset: 0xd4
	// Line 1732, Address: 0x14419c, Func Offset: 0xdc
	// Line 1733, Address: 0x1441ac, Func Offset: 0xec
	// Line 1734, Address: 0x1441b4, Func Offset: 0xf4
	// Line 1735, Address: 0x1441c4, Func Offset: 0x104
	// Line 1736, Address: 0x1441d0, Func Offset: 0x110
	// Line 1737, Address: 0x1441dc, Func Offset: 0x11c
	// Line 1738, Address: 0x1441e0, Func Offset: 0x120
	// Line 1739, Address: 0x1441ec, Func Offset: 0x12c
	// Line 1740, Address: 0x1441f8, Func Offset: 0x138
	// Line 1741, Address: 0x14420c, Func Offset: 0x14c
	// Line 1743, Address: 0x144218, Func Offset: 0x158
	// Line 1744, Address: 0x144224, Func Offset: 0x164
	// Line 1745, Address: 0x144250, Func Offset: 0x190
	// Line 1746, Address: 0x144258, Func Offset: 0x198
	// Line 1747, Address: 0x144278, Func Offset: 0x1b8
	// Line 1749, Address: 0x144290, Func Offset: 0x1d0
	// Line 1750, Address: 0x1442a0, Func Offset: 0x1e0
	// Line 1752, Address: 0x1442b0, Func Offset: 0x1f0
	// Line 1753, Address: 0x1442c0, Func Offset: 0x200
	// Line 1754, Address: 0x1442d8, Func Offset: 0x218
	// Line 1755, Address: 0x1442e8, Func Offset: 0x228
	// Line 1756, Address: 0x1442f0, Func Offset: 0x230
	// Line 1757, Address: 0x1442f8, Func Offset: 0x238
	// Line 1759, Address: 0x144304, Func Offset: 0x244
	// Line 1760, Address: 0x144308, Func Offset: 0x248
	// Line 1761, Address: 0x144318, Func Offset: 0x258
	// Line 1762, Address: 0x144328, Func Offset: 0x268
	// Line 1763, Address: 0x144330, Func Offset: 0x270
	// Line 1765, Address: 0x14433c, Func Offset: 0x27c
	// Line 1766, Address: 0x144360, Func Offset: 0x2a0
	// Line 1767, Address: 0x144378, Func Offset: 0x2b8
	// Line 1768, Address: 0x144388, Func Offset: 0x2c8
	// Line 1770, Address: 0x144398, Func Offset: 0x2d8
	// Line 1771, Address: 0x1443b8, Func Offset: 0x2f8
	// Line 1772, Address: 0x1443d0, Func Offset: 0x310
	// Line 1773, Address: 0x1443e0, Func Offset: 0x320
	// Line 1774, Address: 0x1443e8, Func Offset: 0x328
	// Line 1776, Address: 0x1443f4, Func Offset: 0x334
	// Line 1777, Address: 0x1443f8, Func Offset: 0x338
	// Line 1778, Address: 0x144408, Func Offset: 0x348
	// Line 1780, Address: 0x144418, Func Offset: 0x358
	// Line 1781, Address: 0x144438, Func Offset: 0x378
	// Line 1782, Address: 0x14445c, Func Offset: 0x39c
	// Line 1783, Address: 0x144470, Func Offset: 0x3b0
	// Line 1785, Address: 0x144484, Func Offset: 0x3c4
	// Line 1786, Address: 0x144498, Func Offset: 0x3d8
	// Line 1787, Address: 0x1444a8, Func Offset: 0x3e8
	// Line 1788, Address: 0x1444c4, Func Offset: 0x404
	// Line 1789, Address: 0x1444cc, Func Offset: 0x40c
	// Line 1791, Address: 0x1444e4, Func Offset: 0x424
	// Line 1792, Address: 0x144518, Func Offset: 0x458
	// Line 1793, Address: 0x144528, Func Offset: 0x468
	// Line 1794, Address: 0x144530, Func Offset: 0x470
	// Line 1795, Address: 0x144538, Func Offset: 0x478
	// Line 1796, Address: 0x14454c, Func Offset: 0x48c
	// Line 1797, Address: 0x144570, Func Offset: 0x4b0
	// Line 1798, Address: 0x144578, Func Offset: 0x4b8
	// Line 1802, Address: 0x1445a0, Func Offset: 0x4e0
	// Func End, Address: 0x1445c8, Func Offset: 0x508
}

// 
// Start address: 0x1445d0
void enIKETrans(EnLOCAL_DATA* dp)
{
	float rot[4][4];
	float vec[4];
	// Line 1806, Address: 0x1445d0, Func Offset: 0
	// Line 1809, Address: 0x1445e4, Func Offset: 0x14
	// Line 1810, Address: 0x1445ec, Func Offset: 0x1c
	// Line 1811, Address: 0x1445f8, Func Offset: 0x28
	// Line 1812, Address: 0x144610, Func Offset: 0x40
	// Line 1813, Address: 0x144624, Func Offset: 0x54
	// Line 1815, Address: 0x14462c, Func Offset: 0x5c
	// Line 1816, Address: 0x144638, Func Offset: 0x68
	// Line 1817, Address: 0x14464c, Func Offset: 0x7c
	// Line 1818, Address: 0x144664, Func Offset: 0x94
	// Line 1819, Address: 0x14468c, Func Offset: 0xbc
	// Line 1820, Address: 0x1446cc, Func Offset: 0xfc
	// Line 1821, Address: 0x1446fc, Func Offset: 0x12c
	// Line 1823, Address: 0x144714, Func Offset: 0x144
	// Func End, Address: 0x14472c, Func Offset: 0x15c
}

// 
// Start address: 0x144730
void enARMTrans(EnLOCAL_DATA* dp)
{
	float vec[4];
	// Line 1827, Address: 0x144730, Func Offset: 0
	// Line 1829, Address: 0x144740, Func Offset: 0x10
	// Line 1830, Address: 0x144764, Func Offset: 0x34
	// Line 1831, Address: 0x14476c, Func Offset: 0x3c
	// Line 1832, Address: 0x14478c, Func Offset: 0x5c
	// Line 1833, Address: 0x1447a0, Func Offset: 0x70
	// Line 1834, Address: 0x1447ac, Func Offset: 0x7c
	// Line 1835, Address: 0x1447b8, Func Offset: 0x88
	// Line 1836, Address: 0x1447d0, Func Offset: 0xa0
	// Line 1837, Address: 0x1447dc, Func Offset: 0xac
	// Line 1840, Address: 0x1447e8, Func Offset: 0xb8
	// Func End, Address: 0x1447fc, Func Offset: 0xcc
}

// 
// Start address: 0x144800
void enDyingExec(EnLOCAL_DATA* dp)
{
	float regenerate_rate[5];
	// Line 1845, Address: 0x144800, Func Offset: 0
	// Line 1846, Address: 0x144814, Func Offset: 0x14
	// Line 1847, Address: 0x144820, Func Offset: 0x20
	// Line 1850, Address: 0x144840, Func Offset: 0x40
	// Line 1852, Address: 0x144848, Func Offset: 0x48
	// Line 1853, Address: 0x144854, Func Offset: 0x54
	// Line 1854, Address: 0x144860, Func Offset: 0x60
	// Line 1855, Address: 0x14486c, Func Offset: 0x6c
	// Line 1856, Address: 0x1448b0, Func Offset: 0xb0
	// Line 1858, Address: 0x1448e4, Func Offset: 0xe4
	// Line 1865, Address: 0x144900, Func Offset: 0x100
	// Line 1866, Address: 0x14492c, Func Offset: 0x12c
	// Line 1867, Address: 0x144934, Func Offset: 0x134
	// Line 1870, Address: 0x14493c, Func Offset: 0x13c
	// Line 1877, Address: 0x144948, Func Offset: 0x148
	// Func End, Address: 0x144960, Func Offset: 0x160
}

// 
// Start address: 0x144960
void enWaitRegenerate(EnLOCAL_DATA* dp)
{
	// Line 1882, Address: 0x144960, Func Offset: 0
	// Line 1889, Address: 0x144970, Func Offset: 0x10
	// Line 1891, Address: 0x144990, Func Offset: 0x30
	// Line 1893, Address: 0x1449dc, Func Offset: 0x7c
	// Line 1895, Address: 0x1449e8, Func Offset: 0x88
	// Line 1897, Address: 0x1449f0, Func Offset: 0x90
	// Line 1899, Address: 0x144a3c, Func Offset: 0xdc
	// Line 1903, Address: 0x144a4c, Func Offset: 0xec
	// Func End, Address: 0x144a60, Func Offset: 0x100
}

// 
// Start address: 0x144a60
void enFlyingFunc(SubCharacter* scp)
{
	void* tmp;
	// Line 1913, Address: 0x144a60, Func Offset: 0
	// Func End, Address: 0x144a68, Func Offset: 0x8
}

// 
// Start address: 0x144a70
void enDeleteCharacter(EnLOCAL_DATA* dp)
{
	// Line 1919, Address: 0x144a70, Func Offset: 0
	// Line 1920, Address: 0x144a7c, Func Offset: 0xc
	// Line 1921, Address: 0x144a8c, Func Offset: 0x1c
	// Func End, Address: 0x144a9c, Func Offset: 0x2c
}

// 
// Start address: 0x144aa0
void enInitPath(EnPATH_DATA* p, float angle)
{
	// Line 1928, Address: 0x144aa0, Func Offset: 0
	// Line 1929, Address: 0x144ab0, Func Offset: 0x10
	// Line 1930, Address: 0x144ac0, Func Offset: 0x20
	// Line 1931, Address: 0x144ac4, Func Offset: 0x24
	// Line 1932, Address: 0x144ac8, Func Offset: 0x28
	// Func End, Address: 0x144adc, Func Offset: 0x3c
}

// 
// Start address: 0x144ae0
int enSetPath(EnLOCAL_DATA* dp, float* target, float* pos)
{
	char timer[12];
	int k;
	float d2;
	float d1;
	float a2;
	float a1;
	float a;
	float ma;
	float dist;
	float vec[4];
	EnPATH_DATA* p;
	// Line 1941, Address: 0x144ae0, Func Offset: 0
	// Line 1942, Address: 0x144b18, Func Offset: 0x38
	// Line 1946, Address: 0x144b1c, Func Offset: 0x3c
	// Line 1964, Address: 0x144b38, Func Offset: 0x58
	// Line 1965, Address: 0x144b44, Func Offset: 0x64
	// Line 1966, Address: 0x144b58, Func Offset: 0x78
	// Line 1967, Address: 0x144b64, Func Offset: 0x84
	// Line 1968, Address: 0x144b7c, Func Offset: 0x9c
	// Line 1969, Address: 0x144b80, Func Offset: 0xa0
	// Line 1970, Address: 0x144b88, Func Offset: 0xa8
	// Line 1971, Address: 0x144b8c, Func Offset: 0xac
	// Line 1972, Address: 0x144b90, Func Offset: 0xb0
	// Line 1973, Address: 0x144b94, Func Offset: 0xb4
	// Line 1975, Address: 0x144ba0, Func Offset: 0xc0
	// Line 1976, Address: 0x144bac, Func Offset: 0xcc
	// Line 1977, Address: 0x144bc8, Func Offset: 0xe8
	// Line 1979, Address: 0x144bd4, Func Offset: 0xf4
	// Line 1980, Address: 0x144bd8, Func Offset: 0xf8
	// Line 1981, Address: 0x144be8, Func Offset: 0x108
	// Line 1983, Address: 0x144c14, Func Offset: 0x134
	// Line 1984, Address: 0x144c18, Func Offset: 0x138
	// Line 1985, Address: 0x144c2c, Func Offset: 0x14c
	// Line 1986, Address: 0x144c40, Func Offset: 0x160
	// Line 1987, Address: 0x144c54, Func Offset: 0x174
	// Line 1988, Address: 0x144c68, Func Offset: 0x188
	// Line 1989, Address: 0x144c7c, Func Offset: 0x19c
	// Line 1990, Address: 0x144c90, Func Offset: 0x1b0
	// Line 1991, Address: 0x144ca4, Func Offset: 0x1c4
	// Line 1992, Address: 0x144cb4, Func Offset: 0x1d4
	// Line 1993, Address: 0x144cdc, Func Offset: 0x1fc
	// Line 1994, Address: 0x144ce0, Func Offset: 0x200
	// Line 1995, Address: 0x144d10, Func Offset: 0x230
	// Line 1996, Address: 0x144d14, Func Offset: 0x234
	// Line 1997, Address: 0x144d1c, Func Offset: 0x23c
	// Line 1998, Address: 0x144d64, Func Offset: 0x284
	// Line 1999, Address: 0x144d78, Func Offset: 0x298
	// Line 2000, Address: 0x144d80, Func Offset: 0x2a0
	// Line 2001, Address: 0x144d88, Func Offset: 0x2a8
	// Line 2002, Address: 0x144d9c, Func Offset: 0x2bc
	// Line 2005, Address: 0x144da4, Func Offset: 0x2c4
	// Line 2007, Address: 0x144dac, Func Offset: 0x2cc
	// Line 2008, Address: 0x144dc0, Func Offset: 0x2e0
	// Line 2009, Address: 0x144de4, Func Offset: 0x304
	// Line 2010, Address: 0x144e14, Func Offset: 0x334
	// Line 2011, Address: 0x144e50, Func Offset: 0x370
	// Line 2012, Address: 0x144e64, Func Offset: 0x384
	// Line 2013, Address: 0x144e78, Func Offset: 0x398
	// Line 2014, Address: 0x144e8c, Func Offset: 0x3ac
	// Line 2015, Address: 0x144ea4, Func Offset: 0x3c4
	// Line 2016, Address: 0x144ea8, Func Offset: 0x3c8
	// Line 2018, Address: 0x144f14, Func Offset: 0x434
	// Line 2020, Address: 0x144f1c, Func Offset: 0x43c
	// Line 2021, Address: 0x144f30, Func Offset: 0x450
	// Line 2022, Address: 0x144f44, Func Offset: 0x464
	// Line 2023, Address: 0x144f54, Func Offset: 0x474
	// Line 2024, Address: 0x144f6c, Func Offset: 0x48c
	// Line 2025, Address: 0x144fb8, Func Offset: 0x4d8
	// Line 2027, Address: 0x144fc0, Func Offset: 0x4e0
	// Line 2028, Address: 0x144fd0, Func Offset: 0x4f0
	// Line 2029, Address: 0x144fd4, Func Offset: 0x4f4
	// Line 2031, Address: 0x144fd8, Func Offset: 0x4f8
	// Line 2032, Address: 0x145018, Func Offset: 0x538
	// Line 2033, Address: 0x14502c, Func Offset: 0x54c
	// Line 2034, Address: 0x145040, Func Offset: 0x560
	// Line 2035, Address: 0x145050, Func Offset: 0x570
	// Line 2036, Address: 0x145068, Func Offset: 0x588
	// Line 2037, Address: 0x14506c, Func Offset: 0x58c
	// Line 2038, Address: 0x1450b8, Func Offset: 0x5d8
	// Line 2039, Address: 0x1450d0, Func Offset: 0x5f0
	// Line 2040, Address: 0x1450d4, Func Offset: 0x5f4
	// Line 2041, Address: 0x145120, Func Offset: 0x640
	// Line 2043, Address: 0x145128, Func Offset: 0x648
	// Line 2044, Address: 0x14512c, Func Offset: 0x64c
	// Line 2046, Address: 0x145134, Func Offset: 0x654
	// Line 2048, Address: 0x14513c, Func Offset: 0x65c
	// Line 2049, Address: 0x145140, Func Offset: 0x660
	// Line 2050, Address: 0x145170, Func Offset: 0x690
	// Line 2051, Address: 0x145174, Func Offset: 0x694
	// Line 2053, Address: 0x14517c, Func Offset: 0x69c
	// Line 2056, Address: 0x145184, Func Offset: 0x6a4
	// Line 2057, Address: 0x1451a4, Func Offset: 0x6c4
	// Line 2058, Address: 0x1451b8, Func Offset: 0x6d8
	// Line 2059, Address: 0x1451cc, Func Offset: 0x6ec
	// Line 2060, Address: 0x1451e0, Func Offset: 0x700
	// Line 2061, Address: 0x145200, Func Offset: 0x720
	// Line 2062, Address: 0x145214, Func Offset: 0x734
	// Line 2063, Address: 0x145228, Func Offset: 0x748
	// Line 2064, Address: 0x145238, Func Offset: 0x758
	// Line 2065, Address: 0x145250, Func Offset: 0x770
	// Line 2066, Address: 0x145260, Func Offset: 0x780
	// Line 2067, Address: 0x145270, Func Offset: 0x790
	// Line 2068, Address: 0x145274, Func Offset: 0x794
	// Line 2070, Address: 0x145278, Func Offset: 0x798
	// Line 2071, Address: 0x145280, Func Offset: 0x7a0
	// Line 2072, Address: 0x145284, Func Offset: 0x7a4
	// Line 2074, Address: 0x145288, Func Offset: 0x7a8
	// Line 2075, Address: 0x1452a0, Func Offset: 0x7c0
	// Line 2076, Address: 0x1452a4, Func Offset: 0x7c4
	// Line 2077, Address: 0x1452a8, Func Offset: 0x7c8
	// Line 2078, Address: 0x1452b0, Func Offset: 0x7d0
	// Line 2079, Address: 0x1452c0, Func Offset: 0x7e0
	// Line 2080, Address: 0x1452c4, Func Offset: 0x7e4
	// Line 2081, Address: 0x1452cc, Func Offset: 0x7ec
	// Line 2083, Address: 0x1452d0, Func Offset: 0x7f0
	// Line 2085, Address: 0x1452e0, Func Offset: 0x800
	// Line 2086, Address: 0x1452f4, Func Offset: 0x814
	// Line 2089, Address: 0x1452f8, Func Offset: 0x818
	// Line 2091, Address: 0x1452fc, Func Offset: 0x81c
	// Line 2092, Address: 0x14530c, Func Offset: 0x82c
	// Line 2093, Address: 0x145310, Func Offset: 0x830
	// Func End, Address: 0x145344, Func Offset: 0x864
}

// 
// Start address: 0x145350
float enCheckPath(EnLOCAL_DATA* dp, float* tpos, float* mpos)
{
	float ep[4];
	float sp[4];
	// Line 2103, Address: 0x145350, Func Offset: 0
	// Line 2105, Address: 0x145358, Func Offset: 0x8
	// Line 2106, Address: 0x145364, Func Offset: 0x14
	// Line 2107, Address: 0x145370, Func Offset: 0x20
	// Line 2108, Address: 0x145380, Func Offset: 0x30
	// Line 2110, Address: 0x14538c, Func Offset: 0x3c
	// Line 2111, Address: 0x1453a4, Func Offset: 0x54
	// Line 2113, Address: 0x1453ac, Func Offset: 0x5c
	// Line 2115, Address: 0x1453cc, Func Offset: 0x7c
	// Line 2116, Address: 0x1453d4, Func Offset: 0x84
	// Line 2118, Address: 0x1453e0, Func Offset: 0x90
	// Line 2119, Address: 0x1453f8, Func Offset: 0xa8
	// Line 2121, Address: 0x145400, Func Offset: 0xb0
	// Line 2124, Address: 0x145420, Func Offset: 0xd0
	// Line 2125, Address: 0x145430, Func Offset: 0xe0
	// Func End, Address: 0x145440, Func Offset: 0xf0
}

// 
// Start address: 0x145440
float enCheckPath2(EnLOCAL_DATA* dp, float* tpos, float* mpos)
{
	float ep[4];
	float sp[4];
	// Line 2135, Address: 0x145440, Func Offset: 0
	// Line 2137, Address: 0x145448, Func Offset: 0x8
	// Line 2138, Address: 0x145454, Func Offset: 0x14
	// Line 2139, Address: 0x145460, Func Offset: 0x20
	// Line 2141, Address: 0x145470, Func Offset: 0x30
	// Line 2142, Address: 0x145488, Func Offset: 0x48
	// Line 2144, Address: 0x145490, Func Offset: 0x50
	// Line 2146, Address: 0x1454a8, Func Offset: 0x68
	// Line 2147, Address: 0x1454b8, Func Offset: 0x78
	// Func End, Address: 0x1454c8, Func Offset: 0x88
}

// 
// Start address: 0x1454d0
float enCheckForward(EnLOCAL_DATA* dp, float* pos, float* rot, float range)
{
	float tp[4];
	// Line 2160, Address: 0x1454d0, Func Offset: 0
	// Line 2162, Address: 0x1454e8, Func Offset: 0x18
	// Line 2163, Address: 0x1454f8, Func Offset: 0x28
	// Line 2164, Address: 0x14550c, Func Offset: 0x3c
	// Line 2165, Address: 0x14551c, Func Offset: 0x4c
	// Func End, Address: 0x145534, Func Offset: 0x64
}

// 
// Start address: 0x145540
float enCheckHitEyes(EnLOCAL_DATA* dp, float* sp, float* ep)
{
	float cp[4];
	int f;
	_CL_VHIT_RESULT* res;
	// Line 2175, Address: 0x145540, Func Offset: 0
	// Line 2176, Address: 0x145560, Func Offset: 0x20
	// Line 2177, Address: 0x145568, Func Offset: 0x28
	// Line 2182, Address: 0x14556c, Func Offset: 0x2c
	// Line 2183, Address: 0x145578, Func Offset: 0x38
	// Line 2184, Address: 0x145594, Func Offset: 0x54
	// Line 2185, Address: 0x1455b0, Func Offset: 0x70
	// Line 2186, Address: 0x1455bc, Func Offset: 0x7c
	// Line 2187, Address: 0x145610, Func Offset: 0xd0
	// Line 2188, Address: 0x14565c, Func Offset: 0x11c
	// Line 2189, Address: 0x145668, Func Offset: 0x128
	// Line 2191, Address: 0x14568c, Func Offset: 0x14c
	// Line 2193, Address: 0x1456d4, Func Offset: 0x194
	// Line 2196, Address: 0x14571c, Func Offset: 0x1dc
	// Line 2197, Address: 0x145750, Func Offset: 0x210
	// Func End, Address: 0x145770, Func Offset: 0x230
}

// 
// Start address: 0x145770
float enCheckHitEyes2(EnLOCAL_DATA* dp, float* sp, float* ep)
{
	_CL_VHIT_RESULT* res;
	// Line 2207, Address: 0x145770, Func Offset: 0
	// Line 2208, Address: 0x145794, Func Offset: 0x24
	// Line 2212, Address: 0x14579c, Func Offset: 0x2c
	// Line 2213, Address: 0x1457b8, Func Offset: 0x48
	// Line 2214, Address: 0x1457c4, Func Offset: 0x54
	// Line 2215, Address: 0x14580c, Func Offset: 0x9c
	// Line 2216, Address: 0x145818, Func Offset: 0xa8
	// Line 2218, Address: 0x14583c, Func Offset: 0xcc
	// Line 2220, Address: 0x145884, Func Offset: 0x114
	// Line 2223, Address: 0x1458cc, Func Offset: 0x15c
	// Line 2224, Address: 0x145900, Func Offset: 0x190
	// Func End, Address: 0x145920, Func Offset: 0x1b0
}

// 
// Start address: 0x145920
float enCheckPlayerHitEyes(EnLOCAL_DATA* dp, float* ep)
{
	float p2[4];
	float p1[4];
	_CL_VHIT_RESULT* res;
	// Line 2233, Address: 0x145920, Func Offset: 0
	// Line 2234, Address: 0x14592c, Func Offset: 0xc
	// Line 2239, Address: 0x145934, Func Offset: 0x14
	// Line 2240, Address: 0x145948, Func Offset: 0x28
	// Line 2241, Address: 0x145954, Func Offset: 0x34
	// Line 2242, Address: 0x145968, Func Offset: 0x48
	// Line 2243, Address: 0x145980, Func Offset: 0x60
	// Line 2244, Address: 0x14598c, Func Offset: 0x6c
	// Line 2245, Address: 0x1459dc, Func Offset: 0xbc
	// Line 2246, Address: 0x1459e8, Func Offset: 0xc8
	// Line 2248, Address: 0x145a34, Func Offset: 0x114
	// Line 2249, Address: 0x145a6c, Func Offset: 0x14c
	// Func End, Address: 0x145a80, Func Offset: 0x160
}

// 
// Start address: 0x145a80
int enCheckFloor(float* pos)
{
	int m;
	float vec2[4];
	float vec1[4];
	_CL_VHIT_RESULT* res;
	// Line 2256, Address: 0x145a80, Func Offset: 0
	// Line 2257, Address: 0x145a8c, Func Offset: 0xc
	// Line 2260, Address: 0x145a94, Func Offset: 0x14
	// Line 2261, Address: 0x145aa0, Func Offset: 0x20
	// Line 2262, Address: 0x145aac, Func Offset: 0x2c
	// Line 2263, Address: 0x145ac4, Func Offset: 0x44
	// Line 2264, Address: 0x145ad0, Func Offset: 0x50
	// Line 2265, Address: 0x145ae0, Func Offset: 0x60
	// Line 2266, Address: 0x145aec, Func Offset: 0x6c
	// Line 2268, Address: 0x145af8, Func Offset: 0x78
	// Line 2269, Address: 0x145b00, Func Offset: 0x80
	// Line 2270, Address: 0x145b18, Func Offset: 0x98
	// Line 2273, Address: 0x145b24, Func Offset: 0xa4
	// Line 2274, Address: 0x145b28, Func Offset: 0xa8
	// Func End, Address: 0x145b3c, Func Offset: 0xbc
}

// 
// Start address: 0x145b40
void enGetSkeletonVector(float* vec, EnLOCAL_DATA* dp, int n)
{
	int i;
	shSkelton* sp;
	// Line 2283, Address: 0x145b40, Func Offset: 0
	// Line 2285, Address: 0x145b48, Func Offset: 0x8
	// Line 2286, Address: 0x145b58, Func Offset: 0x18
	// Line 2287, Address: 0x145b5c, Func Offset: 0x1c
	// Line 2289, Address: 0x145b64, Func Offset: 0x24
	// Line 2290, Address: 0x145b90, Func Offset: 0x50
	// Line 2291, Address: 0x145ba4, Func Offset: 0x64
	// Func End, Address: 0x145bac, Func Offset: 0x6c
}

// 
// Start address: 0x145bb0
void enGetSkeletonMatrix(float mat[4], EnLOCAL_DATA* dp, int n)
{
	int i;
	shSkelton* sp;
	// Line 2300, Address: 0x145bb0, Func Offset: 0
	// Line 2302, Address: 0x145bb8, Func Offset: 0x8
	// Line 2303, Address: 0x145bc8, Func Offset: 0x18
	// Line 2304, Address: 0x145bcc, Func Offset: 0x1c
	// Line 2305, Address: 0x145bd0, Func Offset: 0x20
	// Line 2306, Address: 0x145bd4, Func Offset: 0x24
	// Line 2307, Address: 0x145bd8, Func Offset: 0x28
	// Line 2309, Address: 0x145be0, Func Offset: 0x30
	// Line 2310, Address: 0x145c10, Func Offset: 0x60
	// Line 2311, Address: 0x145c30, Func Offset: 0x80
	// Func End, Address: 0x145c38, Func Offset: 0x88
}

// 
// Start address: 0x145c40
int enGetDamageMotion(EnLOCAL_DATA* dp)
{
	float a;
	int dd;
	int id;
	int m;
	shBattleInfo* bi;
	// Line 2318, Address: 0x145c40, Func Offset: 0
	// Line 2319, Address: 0x145c58, Func Offset: 0x18
	// Line 2323, Address: 0x145c60, Func Offset: 0x20
	// Line 2328, Address: 0x145c80, Func Offset: 0x40
	// Line 2329, Address: 0x145cb4, Func Offset: 0x74
	// Line 2330, Address: 0x145cb8, Func Offset: 0x78
	// Line 2331, Address: 0x145cbc, Func Offset: 0x7c
	// Line 2335, Address: 0x145e08, Func Offset: 0x1c8
	// Line 2336, Address: 0x145e0c, Func Offset: 0x1cc
	// Line 2339, Address: 0x145e14, Func Offset: 0x1d4
	// Line 2340, Address: 0x145e18, Func Offset: 0x1d8
	// Line 2342, Address: 0x145e20, Func Offset: 0x1e0
	// Line 2343, Address: 0x145e24, Func Offset: 0x1e4
	// Line 2354, Address: 0x145e28, Func Offset: 0x1e8
	// Line 2355, Address: 0x145e40, Func Offset: 0x200
	// Line 2356, Address: 0x145e44, Func Offset: 0x204
	// Line 2357, Address: 0x145e4c, Func Offset: 0x20c
	// Line 2359, Address: 0x145e50, Func Offset: 0x210
	// Line 2362, Address: 0x145e58, Func Offset: 0x218
	// Line 2363, Address: 0x145e5c, Func Offset: 0x21c
	// Line 2367, Address: 0x145e64, Func Offset: 0x224
	// Line 2368, Address: 0x145e68, Func Offset: 0x228
	// Line 2369, Address: 0x145e6c, Func Offset: 0x22c
	// Line 2370, Address: 0x145e70, Func Offset: 0x230
	// Line 2373, Address: 0x145e78, Func Offset: 0x238
	// Line 2374, Address: 0x145e90, Func Offset: 0x250
	// Line 2375, Address: 0x145e94, Func Offset: 0x254
	// Line 2376, Address: 0x145e9c, Func Offset: 0x25c
	// Line 2378, Address: 0x145ea0, Func Offset: 0x260
	// Line 2382, Address: 0x145ea8, Func Offset: 0x268
	// Line 2383, Address: 0x145eac, Func Offset: 0x26c
	// Line 2385, Address: 0x145eb4, Func Offset: 0x274
	// Line 2386, Address: 0x145eb8, Func Offset: 0x278
	// Line 2387, Address: 0x145ebc, Func Offset: 0x27c
	// Line 2388, Address: 0x145ec0, Func Offset: 0x280
	// Line 2390, Address: 0x145ec8, Func Offset: 0x288
	// Line 2391, Address: 0x145ecc, Func Offset: 0x28c
	// Line 2393, Address: 0x145edc, Func Offset: 0x29c
	// Line 2394, Address: 0x145ee0, Func Offset: 0x2a0
	// Func End, Address: 0x145efc, Func Offset: 0x2bc
}

// 
// Start address: 0x145f00
int enGetDownMotion(EnLOCAL_DATA* dp)
{
	float a;
	int dd;
	int id;
	int m;
	shBattleInfo* bi;
	// Line 2401, Address: 0x145f00, Func Offset: 0
	// Line 2402, Address: 0x145f18, Func Offset: 0x18
	// Line 2406, Address: 0x145f20, Func Offset: 0x20
	// Line 2411, Address: 0x145f40, Func Offset: 0x40
	// Line 2412, Address: 0x145f74, Func Offset: 0x74
	// Line 2413, Address: 0x145f78, Func Offset: 0x78
	// Line 2414, Address: 0x145f7c, Func Offset: 0x7c
	// Line 2418, Address: 0x1460c8, Func Offset: 0x1c8
	// Line 2419, Address: 0x1460cc, Func Offset: 0x1cc
	// Line 2422, Address: 0x1460d4, Func Offset: 0x1d4
	// Line 2423, Address: 0x1460d8, Func Offset: 0x1d8
	// Line 2437, Address: 0x1460e0, Func Offset: 0x1e0
	// Line 2438, Address: 0x1460f8, Func Offset: 0x1f8
	// Line 2439, Address: 0x1460fc, Func Offset: 0x1fc
	// Line 2440, Address: 0x146104, Func Offset: 0x204
	// Line 2442, Address: 0x146108, Func Offset: 0x208
	// Line 2448, Address: 0x146110, Func Offset: 0x210
	// Line 2449, Address: 0x146114, Func Offset: 0x214
	// Line 2454, Address: 0x14611c, Func Offset: 0x21c
	// Line 2455, Address: 0x146120, Func Offset: 0x220
	// Line 2456, Address: 0x146124, Func Offset: 0x224
	// Line 2457, Address: 0x146128, Func Offset: 0x228
	// Line 2460, Address: 0x146130, Func Offset: 0x230
	// Line 2462, Address: 0x146140, Func Offset: 0x240
	// Line 2463, Address: 0x146144, Func Offset: 0x244
	// Func End, Address: 0x146160, Func Offset: 0x260
}

// 
// Start address: 0x146160
int enGetLieDirection(int dm)
{
	int m;
	// Line 2470, Address: 0x146160, Func Offset: 0
	// Line 2472, Address: 0x146170, Func Offset: 0x10
	// Line 2480, Address: 0x14619c, Func Offset: 0x3c
	// Line 2481, Address: 0x1461a0, Func Offset: 0x40
	// Line 2483, Address: 0x1461a8, Func Offset: 0x48
	// Line 2484, Address: 0x1461ac, Func Offset: 0x4c
	// Line 2486, Address: 0x1461b4, Func Offset: 0x54
	// Line 2487, Address: 0x1461b8, Func Offset: 0x58
	// Line 2489, Address: 0x1461c8, Func Offset: 0x68
	// Line 2490, Address: 0x1461cc, Func Offset: 0x6c
	// Func End, Address: 0x1461e0, Func Offset: 0x80
}

// 
// Start address: 0x1461e0
void enAnimeSet(EnLOCAL_DATA* dp, int anim, int id)
{
	// Line 2498, Address: 0x1461e0, Func Offset: 0
	// Line 2499, Address: 0x146200, Func Offset: 0x20
	// Line 2500, Address: 0x146208, Func Offset: 0x28
	// Line 2501, Address: 0x14620c, Func Offset: 0x2c
	// Line 2502, Address: 0x146214, Func Offset: 0x34
	// Line 2503, Address: 0x146218, Func Offset: 0x38
	// Line 2504, Address: 0x14621c, Func Offset: 0x3c
	// Line 2505, Address: 0x146220, Func Offset: 0x40
	// Line 2506, Address: 0x146230, Func Offset: 0x50
	// Line 2507, Address: 0x146250, Func Offset: 0x70
	// Line 2511, Address: 0x146274, Func Offset: 0x94
	// Line 2512, Address: 0x146280, Func Offset: 0xa0
	// Line 2513, Address: 0x146288, Func Offset: 0xa8
	// Line 2514, Address: 0x146290, Func Offset: 0xb0
	// Func End, Address: 0x1462ac, Func Offset: 0xcc
}

// 
// Start address: 0x1462b0
void enAnimeSetDirectFrame(EnLOCAL_DATA* dp, int anim, int id, int frame)
{
	_AnimeInfo* ai;
	// Line 2524, Address: 0x1462b0, Func Offset: 0
	// Line 2526, Address: 0x1462d8, Func Offset: 0x28
	// Line 2527, Address: 0x1462e0, Func Offset: 0x30
	// Line 2528, Address: 0x1462e4, Func Offset: 0x34
	// Line 2529, Address: 0x1462ec, Func Offset: 0x3c
	// Line 2530, Address: 0x1462f0, Func Offset: 0x40
	// Line 2531, Address: 0x1462f4, Func Offset: 0x44
	// Line 2532, Address: 0x146304, Func Offset: 0x54
	// Line 2533, Address: 0x146330, Func Offset: 0x80
	// Line 2534, Address: 0x14633c, Func Offset: 0x8c
	// Line 2535, Address: 0x146344, Func Offset: 0x94
	// Line 2536, Address: 0x14634c, Func Offset: 0x9c
	// Line 2537, Address: 0x146358, Func Offset: 0xa8
	// Line 2538, Address: 0x146360, Func Offset: 0xb0
	// Line 2540, Address: 0x146374, Func Offset: 0xc4
	// Line 2541, Address: 0x146384, Func Offset: 0xd4
	// Line 2543, Address: 0x14639c, Func Offset: 0xec
	// Line 2544, Address: 0x1463a8, Func Offset: 0xf8
	// Line 2545, Address: 0x1463b0, Func Offset: 0x100
	// Line 2546, Address: 0x1463b8, Func Offset: 0x108
	// Func End, Address: 0x1463d8, Func Offset: 0x128
}

// 
// Start address: 0x1463e0
void enAnimeExec(EnLOCAL_DATA* dp, EnANIME_DATA* pa, short anm_none)
{
	_AnimeInfo* ai;
	int f;
	int loop;
	int speed;
	int limit;
	int n;
	// Line 2554, Address: 0x1463e0, Func Offset: 0
	// Line 2557, Address: 0x146410, Func Offset: 0x30
	// Line 2558, Address: 0x146434, Func Offset: 0x54
	// Line 2559, Address: 0x146440, Func Offset: 0x60
	// Line 2560, Address: 0x14644c, Func Offset: 0x6c
	// Line 2561, Address: 0x146450, Func Offset: 0x70
	// Line 2562, Address: 0x146454, Func Offset: 0x74
	// Line 2567, Address: 0x146468, Func Offset: 0x88
	// Line 2568, Address: 0x146490, Func Offset: 0xb0
	// Line 2569, Address: 0x1464a0, Func Offset: 0xc0
	// Line 2570, Address: 0x1464a4, Func Offset: 0xc4
	// Line 2571, Address: 0x1464b0, Func Offset: 0xd0
	// Line 2572, Address: 0x1464b8, Func Offset: 0xd8
	// Line 2574, Address: 0x1464c0, Func Offset: 0xe0
	// Line 2575, Address: 0x14650c, Func Offset: 0x12c
	// Line 2576, Address: 0x14651c, Func Offset: 0x13c
	// Line 2577, Address: 0x146524, Func Offset: 0x144
	// Line 2578, Address: 0x146534, Func Offset: 0x154
	// Line 2580, Address: 0x146538, Func Offset: 0x158
	// Line 2581, Address: 0x146540, Func Offset: 0x160
	// Line 2582, Address: 0x146554, Func Offset: 0x174
	// Line 2585, Address: 0x146558, Func Offset: 0x178
	// Line 2586, Address: 0x146560, Func Offset: 0x180
	// Line 2587, Address: 0x146580, Func Offset: 0x1a0
	// Line 2588, Address: 0x146588, Func Offset: 0x1a8
	// Line 2589, Address: 0x146590, Func Offset: 0x1b0
	// Line 2591, Address: 0x1465b8, Func Offset: 0x1d8
	// Line 2593, Address: 0x1465bc, Func Offset: 0x1dc
	// Line 2594, Address: 0x1465c4, Func Offset: 0x1e4
	// Line 2595, Address: 0x1465d0, Func Offset: 0x1f0
	// Line 2596, Address: 0x1465f0, Func Offset: 0x210
	// Line 2597, Address: 0x1465fc, Func Offset: 0x21c
	// Line 2598, Address: 0x146600, Func Offset: 0x220
	// Line 2599, Address: 0x14660c, Func Offset: 0x22c
	// Line 2600, Address: 0x146618, Func Offset: 0x238
	// Line 2601, Address: 0x146620, Func Offset: 0x240
	// Line 2603, Address: 0x146624, Func Offset: 0x244
	// Line 2604, Address: 0x146634, Func Offset: 0x254
	// Line 2606, Address: 0x146640, Func Offset: 0x260
	// Line 2607, Address: 0x146648, Func Offset: 0x268
	// Line 2608, Address: 0x146650, Func Offset: 0x270
	// Line 2609, Address: 0x14665c, Func Offset: 0x27c
	// Line 2610, Address: 0x146664, Func Offset: 0x284
	// Line 2611, Address: 0x146678, Func Offset: 0x298
	// Line 2612, Address: 0x146684, Func Offset: 0x2a4
	// Line 2613, Address: 0x14668c, Func Offset: 0x2ac
	// Line 2615, Address: 0x146690, Func Offset: 0x2b0
	// Line 2616, Address: 0x14669c, Func Offset: 0x2bc
	// Line 2617, Address: 0x1466a4, Func Offset: 0x2c4
	// Line 2619, Address: 0x1466a8, Func Offset: 0x2c8
	// Line 2620, Address: 0x1466b8, Func Offset: 0x2d8
	// Line 2624, Address: 0x1466c4, Func Offset: 0x2e4
	// Line 2626, Address: 0x1466c8, Func Offset: 0x2e8
	// Line 2627, Address: 0x1466fc, Func Offset: 0x31c
	// Func End, Address: 0x146728, Func Offset: 0x348
}

// 
// Start address: 0x146730
void enSetTrans(EnLOCAL_DATA* dp)
{
	float vec2[4];
	float vec1[4];
	EnSKELETON_DATA* sd;
	// Line 2633, Address: 0x146730, Func Offset: 0
	// Line 2634, Address: 0x146744, Func Offset: 0x14
	// Line 2636, Address: 0x146758, Func Offset: 0x28
	// Line 2637, Address: 0x146774, Func Offset: 0x44
	// Line 2638, Address: 0x146788, Func Offset: 0x58
	// Line 2639, Address: 0x14679c, Func Offset: 0x6c
	// Line 2640, Address: 0x1467b4, Func Offset: 0x84
	// Line 2641, Address: 0x1467cc, Func Offset: 0x9c
	// Line 2642, Address: 0x1467d4, Func Offset: 0xa4
	// Line 2643, Address: 0x1467dc, Func Offset: 0xac
	// Func End, Address: 0x1467f4, Func Offset: 0xc4
}

// 
// Start address: 0x146800
void enSetTransN(EnLOCAL_DATA* dp, int n)
{
	float vec[4];
	// Line 2650, Address: 0x146800, Func Offset: 0
	// Line 2652, Address: 0x146814, Func Offset: 0x14
	// Line 2653, Address: 0x146824, Func Offset: 0x24
	// Line 2654, Address: 0x14682c, Func Offset: 0x2c
	// Line 2655, Address: 0x146834, Func Offset: 0x34
	// Func End, Address: 0x146848, Func Offset: 0x48
}

// 
// Start address: 0x146850
void enSetTransWalk(EnLOCAL_DATA* dp)
{
	float od;
	int d;
	int sn[2];
	float vec[4][2];
	// Line 2660, Address: 0x146850, Func Offset: 0
	// Line 2664, Address: 0x146868, Func Offset: 0x18
	// Line 2665, Address: 0x146874, Func Offset: 0x24
	// Line 2666, Address: 0x146890, Func Offset: 0x40
	// Line 2667, Address: 0x1468a8, Func Offset: 0x58
	// Line 2668, Address: 0x1468bc, Func Offset: 0x6c
	// Line 2669, Address: 0x1468d0, Func Offset: 0x80
	// Line 2670, Address: 0x1468e0, Func Offset: 0x90
	// Line 2672, Address: 0x1468fc, Func Offset: 0xac
	// Line 2673, Address: 0x14693c, Func Offset: 0xec
	// Line 2674, Address: 0x146954, Func Offset: 0x104
	// Line 2675, Address: 0x14695c, Func Offset: 0x10c
	// Line 2676, Address: 0x14696c, Func Offset: 0x11c
	// Line 2677, Address: 0x146970, Func Offset: 0x120
	// Line 2679, Address: 0x14697c, Func Offset: 0x12c
	// Func End, Address: 0x146998, Func Offset: 0x148
}

// 
// Start address: 0x1469a0
void enSetTransForward(EnLOCAL_DATA* dp, float s)
{
	// Line 2686, Address: 0x1469a0, Func Offset: 0
	// Line 2687, Address: 0x1469b4, Func Offset: 0x14
	// Line 2688, Address: 0x1469c0, Func Offset: 0x20
	// Line 2689, Address: 0x146a04, Func Offset: 0x64
	// Func End, Address: 0x146a1c, Func Offset: 0x7c
}

// 
// Start address: 0x146a20
void enAnimePause(EnLOCAL_DATA* dp)
{
	// Line 2705, Address: 0x146a20, Func Offset: 0
	// Line 2706, Address: 0x146a28, Func Offset: 0x8
	// Line 2707, Address: 0x146a34, Func Offset: 0x14
	// Line 2708, Address: 0x146a40, Func Offset: 0x20
	// Func End, Address: 0x146a50, Func Offset: 0x30
}

// 
// Start address: 0x146a50
void enAnimeRestart(EnLOCAL_DATA* dp)
{
	// Line 2714, Address: 0x146a50, Func Offset: 0
	// Line 2715, Address: 0x146a58, Func Offset: 0x8
	// Line 2716, Address: 0x146a68, Func Offset: 0x18
	// Line 2717, Address: 0x146a74, Func Offset: 0x24
	// Func End, Address: 0x146a84, Func Offset: 0x34
}

// 
// Start address: 0x146a90
void enAnimeFrameSet(EnLOCAL_DATA* dp, unsigned short frame)
{
	// Line 2724, Address: 0x146a90, Func Offset: 0
	// Line 2725, Address: 0x146a98, Func Offset: 0x8
	// Line 2726, Address: 0x146ab4, Func Offset: 0x24
	// Line 2727, Address: 0x146ac0, Func Offset: 0x30
	// Func End, Address: 0x146ad0, Func Offset: 0x40
}

// 
// Start address: 0x146ad0
void enAnimeReverse(EnLOCAL_DATA* dp)
{
	_AnimeInfo* ai;
	// Line 2746, Address: 0x146ad0, Func Offset: 0
	// Line 2747, Address: 0x146ae0, Func Offset: 0x10
	// Line 2748, Address: 0x146aec, Func Offset: 0x1c
	// Line 2749, Address: 0x146af8, Func Offset: 0x28
	// Line 2750, Address: 0x146b00, Func Offset: 0x30
	// Line 2751, Address: 0x146b0c, Func Offset: 0x3c
	// Line 2754, Address: 0x146b28, Func Offset: 0x58
	// Func End, Address: 0x146b3c, Func Offset: 0x6c
}

// 
// Start address: 0x146b40
void enSetAnimeCount(EnLOCAL_DATA* dp, int count)
{
	int limit;
	// Line 2761, Address: 0x146b40, Func Offset: 0
	// Line 2763, Address: 0x146b58, Func Offset: 0x18
	// Line 2764, Address: 0x146b68, Func Offset: 0x28
	// Line 2765, Address: 0x146b74, Func Offset: 0x34
	// Line 2766, Address: 0x146b94, Func Offset: 0x54
	// Func End, Address: 0x146bac, Func Offset: 0x6c
}

// 
// Start address: 0x146bb0
void enEfctBloodPool(EnLOCAL_DATA* dp)
{
	float pos[4];
	// Line 2781, Address: 0x146bb0, Func Offset: 0
	// Line 2784, Address: 0x146bb8, Func Offset: 0x8
	// Line 2785, Address: 0x146bd0, Func Offset: 0x20
	// Line 2793, Address: 0x146be8, Func Offset: 0x38
	// Line 2797, Address: 0x146bf4, Func Offset: 0x44
	// Func End, Address: 0x146c04, Func Offset: 0x54
}

// 
// Start address: 0x146c10
void enEfctPoisonFog(float* pos, float* vec)
{
	// Line 2804, Address: 0x146c10, Func Offset: 0
	// Line 2806, Address: 0x146c18, Func Offset: 0x8
	// Line 2808, Address: 0x146c20, Func Offset: 0x10
	// Func End, Address: 0x146c30, Func Offset: 0x20
}

// 
// Start address: 0x146c30
void enSetBlur()
{
	// Line 2813, Address: 0x146c30, Func Offset: 0
	// Line 2815, Address: 0x146c38, Func Offset: 0x8
	// Line 2817, Address: 0x146c44, Func Offset: 0x14
	// Func End, Address: 0x146c54, Func Offset: 0x24
}

// 
// Start address: 0x146c60
void enSetFadeOut()
{
	// Line 2822, Address: 0x146c60, Func Offset: 0
	// Line 2824, Address: 0x146c68, Func Offset: 0x8
	// Line 2826, Address: 0x146c78, Func Offset: 0x18
	// Func End, Address: 0x146c88, Func Offset: 0x28
}

// 
// Start address: 0x146c90
void enResetFilter()
{
	// Line 2831, Address: 0x146c90, Func Offset: 0
	// Line 2833, Address: 0x146c98, Func Offset: 0x8
	// Line 2835, Address: 0x146ca0, Func Offset: 0x10
	// Func End, Address: 0x146cb0, Func Offset: 0x20
}

// 
// Start address: 0x146cb0
void enSoundCall(int num, float vol, float* pos)
{
	// Line 2851, Address: 0x146cb0, Func Offset: 0
	// Line 2853, Address: 0x146cb8, Func Offset: 0x8
	// Line 2855, Address: 0x146cc4, Func Offset: 0x14
	// Func End, Address: 0x146cd4, Func Offset: 0x24
}

// 
// Start address: 0x146ce0
void enSoundCall3D(int num, float vol, float* pos)
{
	// Line 2863, Address: 0x146ce0, Func Offset: 0
	// Line 2865, Address: 0x146ce8, Func Offset: 0x8
	// Line 2867, Address: 0x146cf4, Func Offset: 0x14
	// Func End, Address: 0x146d04, Func Offset: 0x24
}

// 
// Start address: 0x146d10
void enSoundStop(int num)
{
	// Line 2872, Address: 0x146d10, Func Offset: 0
	// Line 2874, Address: 0x146d18, Func Offset: 0x8
	// Line 2876, Address: 0x146d20, Func Offset: 0x10
	// Func End, Address: 0x146d30, Func Offset: 0x20
}

// 
// Start address: 0x146d30
void enSoundSetQueue(SubCharacter* scp, int num, float vol, float time)
{
	EnSOUND_QUEUE* que;
	// Line 2884, Address: 0x146d30, Func Offset: 0
	// Line 2885, Address: 0x146d44, Func Offset: 0x14
	// Line 2886, Address: 0x146d60, Func Offset: 0x30
	// Line 2887, Address: 0x146d64, Func Offset: 0x34
	// Line 2888, Address: 0x146d68, Func Offset: 0x38
	// Line 2889, Address: 0x146d6c, Func Offset: 0x3c
	// Line 2890, Address: 0x146d70, Func Offset: 0x40
	// Func End, Address: 0x146d78, Func Offset: 0x48
}

// 
// Start address: 0x146d80
EnCOMMUNICATION* enSetCommunication(int kind, int type, float* pos, float dist, int time)
{
	EnCOMMUNICATION* p;
	int i;
	// Line 2902, Address: 0x146d80, Func Offset: 0
	// Line 2903, Address: 0x146d8c, Func Offset: 0xc
	// Line 2904, Address: 0x146d90, Func Offset: 0x10
	// Line 2905, Address: 0x146d98, Func Offset: 0x18
	// Line 2906, Address: 0x146da0, Func Offset: 0x20
	// Line 2907, Address: 0x146dbc, Func Offset: 0x3c
	// Line 2908, Address: 0x146dc0, Func Offset: 0x40
	// Line 2909, Address: 0x146dcc, Func Offset: 0x4c
	// Line 2910, Address: 0x146dd4, Func Offset: 0x54
	// Line 2911, Address: 0x146dd8, Func Offset: 0x58
	// Line 2912, Address: 0x146ddc, Func Offset: 0x5c
	// Line 2913, Address: 0x146de0, Func Offset: 0x60
	// Line 2914, Address: 0x146dec, Func Offset: 0x6c
	// Line 2915, Address: 0x146dfc, Func Offset: 0x7c
	// Line 2916, Address: 0x146e04, Func Offset: 0x84
	// Line 2918, Address: 0x146e08, Func Offset: 0x88
	// Line 2919, Address: 0x146e1c, Func Offset: 0x9c
	// Line 2920, Address: 0x146e20, Func Offset: 0xa0
	// Func End, Address: 0x146e34, Func Offset: 0xb4
}

// 
// Start address: 0x146e40
EnCOMMUNICATION* enCommunicateTribe(int kind, float* pos)
{
	float dist;
	float d;
	int i;
	EnCOMMUNICATION* p;
	EnCOMMUNICATION* mp;
	// Line 2940, Address: 0x146e40, Func Offset: 0
	// Line 2941, Address: 0x146e44, Func Offset: 0x4
	// Line 2944, Address: 0x146e4c, Func Offset: 0xc
	// Line 2945, Address: 0x146e64, Func Offset: 0x24
	// Line 2946, Address: 0x146e70, Func Offset: 0x30
	// Line 2947, Address: 0x146e7c, Func Offset: 0x3c
	// Line 2948, Address: 0x146e88, Func Offset: 0x48
	// Line 2949, Address: 0x146ec0, Func Offset: 0x80
	// Line 2950, Address: 0x146ee4, Func Offset: 0xa4
	// Line 2951, Address: 0x146ee8, Func Offset: 0xa8
	// Line 2952, Address: 0x146eec, Func Offset: 0xac
	// Line 2953, Address: 0x146ef0, Func Offset: 0xb0
	// Line 2955, Address: 0x146f04, Func Offset: 0xc4
	// Func End, Address: 0x146f0c, Func Offset: 0xcc
}

// 
// Start address: 0x146f10
void enResetForbiddenArea()
{
	// Line 2961, Address: 0x146f10, Func Offset: 0
	// Line 2962, Address: 0x146f18, Func Offset: 0x8
	// Func End, Address: 0x146f20, Func Offset: 0x10
}

// 
// Start address: 0x146f20
void enSetForbiddenArea(float x0, float z0, float x1, float z1)
{
	int n;
	// Line 2967, Address: 0x146f20, Func Offset: 0
	// Line 2968, Address: 0x146f4c, Func Offset: 0x2c
	// Line 2969, Address: 0x146f54, Func Offset: 0x34
	// Line 2970, Address: 0x146f84, Func Offset: 0x64
	// Line 2971, Address: 0x146f98, Func Offset: 0x78
	// Line 2972, Address: 0x146fa8, Func Offset: 0x88
	// Line 2973, Address: 0x146fb8, Func Offset: 0x98
	// Line 2974, Address: 0x146fc8, Func Offset: 0xa8
	// Line 2975, Address: 0x146fd4, Func Offset: 0xb4
	// Func End, Address: 0x146ff8, Func Offset: 0xd8
}

// 
// Start address: 0x147000
void enRoomForbiddenArea()
{
	int f;
	// Line 2981, Address: 0x147000, Func Offset: 0
	// Line 2982, Address: 0x14700c, Func Offset: 0xc
	// Line 2983, Address: 0x147010, Func Offset: 0x10
	// Line 2986, Address: 0x147030, Func Offset: 0x30
	// Line 2988, Address: 0x147064, Func Offset: 0x64
	// Line 2989, Address: 0x14709c, Func Offset: 0x9c
	// Line 2991, Address: 0x1470a4, Func Offset: 0xa4
	// Line 2995, Address: 0x147138, Func Offset: 0x138
	// Line 2996, Address: 0x14713c, Func Offset: 0x13c
	// Line 2998, Address: 0x147144, Func Offset: 0x144
	// Line 2999, Address: 0x14717c, Func Offset: 0x17c
	// Line 3001, Address: 0x147184, Func Offset: 0x184
	// Line 3002, Address: 0x1471b8, Func Offset: 0x1b8
	// Line 3004, Address: 0x1471c0, Func Offset: 0x1c0
	// Line 3005, Address: 0x1471f4, Func Offset: 0x1f4
	// Line 3006, Address: 0x147228, Func Offset: 0x228
	// Line 3009, Address: 0x147230, Func Offset: 0x230
	// Line 3010, Address: 0x147268, Func Offset: 0x268
	// Line 3011, Address: 0x1472a0, Func Offset: 0x2a0
	// Line 3014, Address: 0x1472a8, Func Offset: 0x2a8
	// Line 3015, Address: 0x1472dc, Func Offset: 0x2dc
	// Line 3017, Address: 0x1472e4, Func Offset: 0x2e4
	// Line 3021, Address: 0x147318, Func Offset: 0x318
	// Line 3022, Address: 0x147320, Func Offset: 0x320
	// Line 3023, Address: 0x147334, Func Offset: 0x334
	// Line 3024, Address: 0x14733c, Func Offset: 0x33c
	// Line 3025, Address: 0x147354, Func Offset: 0x354
	// Line 3027, Address: 0x14735c, Func Offset: 0x35c
	// Func End, Address: 0x147370, Func Offset: 0x370
}

// 
// Start address: 0x147370
int enCheckForbiddenArea(float* sp, float* ep, float size)
{
	int f;
	int i;
	// Line 3037, Address: 0x147370, Func Offset: 0
	// Line 3039, Address: 0x147398, Func Offset: 0x28
	// Line 3040, Address: 0x14739c, Func Offset: 0x2c
	// Line 3041, Address: 0x1473a8, Func Offset: 0x38
	// Line 3043, Address: 0x1473d4, Func Offset: 0x64
	// Line 3044, Address: 0x1473ec, Func Offset: 0x7c
	// Line 3045, Address: 0x1473f0, Func Offset: 0x80
	// Func End, Address: 0x147414, Func Offset: 0xa4
}

// 
// Start address: 0x147420
int enCheckForbiddenAreaSub(EnFORBIDDENAREA* fa, float* sp, float* ep, float size)
{
	int f;
	float c;
	float vz;
	float vx;
	float sz;
	float sx;
	float z1;
	float x1;
	float z0;
	float x0;
	// Line 3060, Address: 0x147420, Func Offset: 0
	// Line 3061, Address: 0x147428, Func Offset: 0x8
	// Line 3062, Address: 0x147430, Func Offset: 0x10
	// Line 3063, Address: 0x147438, Func Offset: 0x18
	// Line 3064, Address: 0x147440, Func Offset: 0x20
	// Line 3065, Address: 0x147444, Func Offset: 0x24
	// Line 3066, Address: 0x147448, Func Offset: 0x28
	// Line 3069, Address: 0x1474d8, Func Offset: 0xb8
	// Line 3071, Address: 0x1474e4, Func Offset: 0xc4
	// Line 3072, Address: 0x1474e8, Func Offset: 0xc8
	// Line 3073, Address: 0x1474f0, Func Offset: 0xd0
	// Line 3074, Address: 0x1474f8, Func Offset: 0xd8
	// Line 3075, Address: 0x14751c, Func Offset: 0xfc
	// Line 3076, Address: 0x147530, Func Offset: 0x110
	// Line 3077, Address: 0x147550, Func Offset: 0x130
	// Line 3078, Address: 0x147554, Func Offset: 0x134
	// Line 3079, Address: 0x147558, Func Offset: 0x138
	// Line 3080, Address: 0x14755c, Func Offset: 0x13c
	// Line 3081, Address: 0x147560, Func Offset: 0x140
	// Line 3084, Address: 0x147564, Func Offset: 0x144
	// Line 3085, Address: 0x147578, Func Offset: 0x158
	// Line 3086, Address: 0x14758c, Func Offset: 0x16c
	// Line 3087, Address: 0x1475ac, Func Offset: 0x18c
	// Line 3088, Address: 0x1475b0, Func Offset: 0x190
	// Line 3089, Address: 0x1475b4, Func Offset: 0x194
	// Line 3090, Address: 0x1475b8, Func Offset: 0x198
	// Line 3091, Address: 0x1475bc, Func Offset: 0x19c
	// Line 3094, Address: 0x1475c0, Func Offset: 0x1a0
	// Line 3095, Address: 0x1475d4, Func Offset: 0x1b4
	// Line 3096, Address: 0x1475e8, Func Offset: 0x1c8
	// Line 3097, Address: 0x147608, Func Offset: 0x1e8
	// Line 3098, Address: 0x14760c, Func Offset: 0x1ec
	// Line 3099, Address: 0x147610, Func Offset: 0x1f0
	// Line 3100, Address: 0x147614, Func Offset: 0x1f4
	// Line 3101, Address: 0x147618, Func Offset: 0x1f8
	// Line 3104, Address: 0x14761c, Func Offset: 0x1fc
	// Line 3105, Address: 0x147630, Func Offset: 0x210
	// Line 3106, Address: 0x147644, Func Offset: 0x224
	// Line 3107, Address: 0x147664, Func Offset: 0x244
	// Line 3108, Address: 0x147668, Func Offset: 0x248
	// Line 3109, Address: 0x14766c, Func Offset: 0x24c
	// Line 3115, Address: 0x147670, Func Offset: 0x250
	// Func End, Address: 0x147678, Func Offset: 0x258
}

// 
// Start address: 0x147680
void enEventDriven(int event, int id)
{
	EnLOCAL_DATA* dp;
	int i;
	// Line 3124, Address: 0x147680, Func Offset: 0
	// Line 3125, Address: 0x147688, Func Offset: 0x8
	// Line 3127, Address: 0x1476c8, Func Offset: 0x48
	// Line 3128, Address: 0x1476d4, Func Offset: 0x54
	// Line 3129, Address: 0x1476ec, Func Offset: 0x6c
	// Line 3131, Address: 0x1476f0, Func Offset: 0x70
	// Line 3132, Address: 0x147704, Func Offset: 0x84
	// Line 3134, Address: 0x14770c, Func Offset: 0x8c
	// Line 3135, Address: 0x147718, Func Offset: 0x98
	// Line 3136, Address: 0x147734, Func Offset: 0xb4
	// Line 3137, Address: 0x14773c, Func Offset: 0xbc
	// Line 3138, Address: 0x147740, Func Offset: 0xc0
	// Line 3139, Address: 0x147754, Func Offset: 0xd4
	// Line 3141, Address: 0x14775c, Func Offset: 0xdc
	// Line 3142, Address: 0x147768, Func Offset: 0xe8
	// Line 3143, Address: 0x147788, Func Offset: 0x108
	// Line 3145, Address: 0x147790, Func Offset: 0x110
	// Line 3146, Address: 0x1477a4, Func Offset: 0x124
	// Line 3148, Address: 0x1477ac, Func Offset: 0x12c
	// Line 3149, Address: 0x1477b8, Func Offset: 0x138
	// Line 3150, Address: 0x1477c8, Func Offset: 0x148
	// Line 3151, Address: 0x1477cc, Func Offset: 0x14c
	// Line 3152, Address: 0x1477d4, Func Offset: 0x154
	// Line 3153, Address: 0x1477d8, Func Offset: 0x158
	// Line 3154, Address: 0x1477ec, Func Offset: 0x16c
	// Line 3156, Address: 0x1477f4, Func Offset: 0x174
	// Line 3157, Address: 0x147800, Func Offset: 0x180
	// Line 3158, Address: 0x147820, Func Offset: 0x1a0
	// Line 3159, Address: 0x147824, Func Offset: 0x1a4
	// Line 3161, Address: 0x147828, Func Offset: 0x1a8
	// Line 3173, Address: 0x14783c, Func Offset: 0x1bc
	// Line 3174, Address: 0x147840, Func Offset: 0x1c0
	// Func End, Address: 0x147848, Func Offset: 0x1c8
}

