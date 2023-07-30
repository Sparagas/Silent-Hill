typedef struct SubCharacter;
typedef struct Stage_Data;
typedef struct _AnimeInfo;
typedef struct Event_List;
typedef struct Item_List;
typedef struct Radio_Data;
typedef struct SPACK_DATA;
typedef struct SPACK_OT_DATA;
typedef struct Model_List;
typedef struct Enemy_List;
typedef struct EnMKN_DATA;
typedef struct EnEDB_DATA;
typedef struct shBattleFight;
typedef struct shSkelton;
typedef struct shPlayerWork;
typedef struct EnPAP_DATA;
typedef struct SPACK_ENV_DATA;
typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct shBattleShot;
typedef struct EnNIK_DATA;
typedef struct Item;
typedef struct shBattleArea;
typedef struct SPACK_STATIC_DATA;
typedef struct shBattleInfo;
typedef struct EnBOS_DATA;
typedef struct _anon3;
typedef struct EnSCU_DATA;
typedef struct EnAMBUSH_DATA;
typedef struct EnONI_DATA;
typedef struct _CL_VHIT_WALL;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct _VbWVSMATRIX;
typedef struct Event_DoorSound;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct EnPATH_DATA;
typedef struct Playing_Info;
typedef struct _CL_VHIT_CHARA;
typedef struct _SH2_SYS;
typedef union _anon4;
typedef struct _VbSCREENINFO;
typedef struct _CL_VHIT_RESULT;
typedef struct EnRED_DATA;
typedef struct EnLOCAL_DATA;
typedef union _anon5;
typedef struct EnCOMMUNICATION;
typedef struct EnFORBIDDENAREA;
typedef struct PAD_3D;
typedef struct EnINS_DATA;
typedef struct _anon6;
typedef struct EnIKE_DATA;
typedef struct EnLOCAL_WORK;
typedef struct EnSOUND_QUEUE;
typedef struct EnARM_DATA;
typedef struct PAD_2D;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct EnTYU_DATA;
typedef struct PAD_INFO;
typedef struct EnNSE_DATA;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct _anon7;

typedef void(*type_0)(SubCharacter*);
typedef int(*type_4)();
typedef void(*type_11)();
typedef void(*type_68)(SubCharacter*);

typedef Event_DoorSound type_1[22];
typedef float type_2[2];
typedef unsigned char type_3[4];
typedef float type_5[4];
typedef float type_6[2];
typedef unsigned char type_7[4];
typedef float type_8[4];
typedef float type_9[2][4];
typedef unsigned char type_10[4];
typedef unsigned char type_12[69];
typedef char type_13[3];
typedef unsigned char type_14[2];
typedef unsigned int type_15[255];
typedef unsigned char type_16[2];
typedef _anon0 type_17[7];
typedef unsigned int type_18[32];
typedef unsigned char type_19[4];
typedef unsigned int type_20[2];
typedef unsigned short type_21[11];
typedef char type_22[4];
typedef char type_23[4];
typedef char type_24[4];
typedef int type_25[4];
typedef char type_26[4];
typedef float type_27[4];
typedef unsigned short type_28[3];
typedef unsigned char type_29[14];
typedef unsigned short type_30[0];
typedef unsigned char type_31[4];
typedef char type_32[4];
typedef float type_33[4];
typedef float type_34[4][4];
typedef unsigned short type_35[0];
typedef unsigned char type_36[97];
typedef float type_37[4];
typedef float type_38[4][16];
typedef int type_39[6];
typedef unsigned int type_40[8];
typedef float type_41[4][6];
typedef float type_42[4];
typedef char type_43[4];
typedef EnLOCAL_DATA* type_44[3];
typedef unsigned char type_45[2];
typedef float type_46[3];
typedef float type_47[3];
typedef unsigned char type_48[20];
typedef int type_49[3];
typedef EnLOCAL_DATA type_50[32];
typedef EnCOMMUNICATION type_51[8];
typedef shAttackInfo type_52[66];
typedef short type_53[2];
typedef float type_54[4][2];
typedef short type_55[2][12];
typedef float type_56[2];
typedef EnFORBIDDENAREA type_57[2];
typedef float type_58[2][7];
typedef int type_59[4][2];
typedef EnSOUND_QUEUE type_60[8];
typedef float type_61[7];
typedef int type_62[4];
typedef unsigned int type_63[7];
typedef float type_64[4];
typedef float type_65[4][4];
typedef float type_66[4][2];
typedef PAD_INFO type_67[10];
typedef unsigned char type_69[14];

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
	_anon6 pos;
	_anon6 rot;
	_anon6 pos_spd;
	_anon6 rot_spd;
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
	_anon6 b_pos;
	_anon6 b_rot;
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

struct Event_List
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
};

struct Item_List
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
};

struct Radio_Data
{
	int se_call;
	int event;
	float track[4];
	float pan[4];
	float volume;
	float pos[4];
};

struct SPACK_DATA
{
	SPACK_OT_DATA** ot_top;
	SPACK_OT_DATA** ot_last;
	unsigned int ot_size;
	unsigned int ot_width;
	unsigned int w_ofs;
	unsigned int w_mini;
	unsigned int w_max;
	unsigned int envid;
	SPACK_OT_DATA* dma_top;
	SPACK_OT_DATA* dmabuf_pos;
	SPACK_ENV_DATA* env_top;
	unsigned long* pk_last;
	unsigned long* pos;
	short* ot_max;
	<unknown fundamental type (0xa510)>* packet;
	SPACK_STATIC_DATA* ps_top;
	unsigned long* pgiftag;
	unsigned long giftag_b;
	unsigned int flag;
	void* kick_top;
	void* old_lastpos;
};

struct SPACK_OT_DATA
{
	unsigned short DmaQwc;
	unsigned short DmaId;
	void* Addr;
	unsigned int W;
	unsigned short VifQwc;
	unsigned char EnvID;
	unsigned char VifDirect;
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon7 src_m;
	_anon6 src_t;
	_anon7 des_m;
	_anon6 des_t;
	_anon6 axis;
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
	_anon6 dist_rot;
	_anon6 dist_pos;
	_anon6 pos;
	_anon6 rot;
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
	_anon6 tgt_body_angle;
	_anon6 tgt_neck_angle;
	_anon6 tgt_arms_angle;
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

struct EnPAP_DATA
{
	float target[4];
	char dc;
	char dcm;
	char signs;
	char count;
};

struct SPACK_ENV_DATA
{
	unsigned short DmaQwc;
	unsigned short DmaId;
	void* Addr;
	unsigned int pad1;
	unsigned short VifQwc;
	unsigned char pad2;
	unsigned char VifDirect;
};

struct _anon0
{
	short item;
	short msg;
	int chara_id;
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

struct _anon2
{
	void(*SpecDraw)();
	void(*PreDraw)();
	void(*PostDraw)();
	void(*CharaDraw_Hook)();
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct EnNIK_DATA
{
	float swing[4];
	float acc[4];
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

struct shBattleArea
{
	float center;
	float radius;
};

struct SPACK_STATIC_DATA
{
	unsigned short GifNLOOP;
	unsigned short DmaQwc;
	unsigned int PRE_PRIM_FLG_NREG;
	unsigned long REGS;
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

struct _anon3
{
	float pos_x;
	float pos_y;
	float pos_z;
	float rot_y;
	float view_x;
	float view_z;
	float rear_x;
	float rear_z;
	float pad;
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

struct EnONI_DATA
{
	char id;
	char check;
	char warp;
	short timer2;
	void* other;
	void* tp;
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
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

struct _VbWVSMATRIX
{
	float wvm[4][4];
	float vsm[4][4];
	float wsm[4][4];
};

struct Event_DoorSound
{
	short open;
	short close;
	short unlock;
	short jam;
	short lock;
	short pad;
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
	_anon4 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
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

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

struct _SH2_SYS
{
	unsigned int step[8];
	unsigned int pre_playable;
	int main_status;
	unsigned int soft_reset;
	unsigned int frame_cnt;
};

union _anon4
{
	shBattleFight fight;
	shBattleShot shot;
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

struct _CL_VHIT_RESULT
{
	int kind;
	_anon5 hobj;
};

struct EnRED_DATA
{
	int attack_count;
	int boss_timer;
	void* tp;
};

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

union _anon5
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct EnCOMMUNICATION
{
	float pos[4];
	int kind;
	int type;
	int time;
	float dist;
};

struct EnFORBIDDENAREA
{
	float x0;
	float z0;
	float x1;
	float z1;
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

struct _anon6
{
	float x;
	float y;
	float z;
	float w;
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

struct EnSOUND_QUEUE
{
	SubCharacter* scp;
	int num;
	float vol;
	float time;
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

struct EnTYU_DATA
{
	float point[4];
	EnCOMMUNICATION* tcomm;
	int near_count;
	float dist;
	short count;
	char moves;
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

struct EnNSE_DATA
{
	float speed;
	float tspeed;
	char signs;
	char count;
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

struct _anon7
{
	float d[4][4];
};

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
Event_DoorSound door_se[22];
_anon1 game_flag;
Playing_Info playing;
Radio_Data radio;
int sbt_msg_no;
int ev_cancel;
int ev_active;
int ev_s_step;
int ev_p_step;
int ev_e_step;
int ev_m_step;
_SH2_SYS Sh2sys;
Stage_Data* stage;
Item item;
shPlayerWork sh2jms;
int demo_number;
SPACK_DATA spack;
_VbSCREENINFO VbScreenInfo;
_VbWVSMATRIX VbWvsMatrix;
float connect_pos[4];
unsigned short msg_buffer[0];
int ev_prog_flag_set;
unsigned short msg_station[0];
EnLOCAL_WORK enLocalWork;
int _NaN;
float ev_cursor_y;
float ev_cursor_x;
float ev_filter;
float ev_timer;

void FlagInit();
void EventProgInit();
void EventMain();
void EventMainStandard(int ev_act_on);
int EventCheck(int act_on, int use_item, int check_only);
int EventCheckLook(Event_List* el);
int EventCheckLookPoint(float x, float z);
int EventCheckLookLine(float x0, float z0, float x1, float z1);
int EventCheckIn(Event_List* el);
int EventListElement(Event_List* el, int en);
float CharToFloat2(char* cp);
float CharToFloat4(char* cp);
int ItemListElement(Item_List* il, int en);
int ItemCheckLookPoint(Item_List* il);
void EventPositionSet(float* pos_v, char* pos_p, int pos_t);
void EventResultMovePosition(int ev_no);
void EventCancel();
void EventExecSubFlagSet(Event_List* el);
int EventExecFlag();
int EventExecMessage();
int EventExecProgram();
int EventExecDoor();
int EventExecItem();
int EventExecMove();
int EventExecSave();
int LightSpotOnOffCheck();
void LightSpotOnOffSet();
int EventExecChizuFail();
int EventProgressCheck();
int EventItemConditionCheck(int level, int flag);
void RadioNoise();

// 
// Start address: 0x1a6e80
void FlagInit()
{
	int i;
	int work;
	int shuffle[6];
	// Line 209, Address: 0x1a6e80, Func Offset: 0
	// Line 214, Address: 0x1a6e90, Func Offset: 0x10
	// Line 217, Address: 0x1a6ea4, Func Offset: 0x24
	// Line 221, Address: 0x1a6ee4, Func Offset: 0x64
	// Line 225, Address: 0x1a6ef0, Func Offset: 0x70
	// Line 226, Address: 0x1a6ef4, Func Offset: 0x74
	// Line 227, Address: 0x1a6f00, Func Offset: 0x80
	// Line 228, Address: 0x1a6f34, Func Offset: 0xb4
	// Line 229, Address: 0x1a6f54, Func Offset: 0xd4
	// Line 230, Address: 0x1a6f60, Func Offset: 0xe0
	// Line 231, Address: 0x1a6f74, Func Offset: 0xf4
	// Line 232, Address: 0x1a6fa4, Func Offset: 0x124
	// Line 234, Address: 0x1a6fb8, Func Offset: 0x138
	// Line 235, Address: 0x1a6fcc, Func Offset: 0x14c
	// Line 236, Address: 0x1a6ffc, Func Offset: 0x17c
	// Line 238, Address: 0x1a7010, Func Offset: 0x190
	// Line 239, Address: 0x1a7024, Func Offset: 0x1a4
	// Line 240, Address: 0x1a704c, Func Offset: 0x1cc
	// Line 242, Address: 0x1a7060, Func Offset: 0x1e0
	// Line 243, Address: 0x1a7068, Func Offset: 0x1e8
	// Line 244, Address: 0x1a707c, Func Offset: 0x1fc
	// Line 245, Address: 0x1a7090, Func Offset: 0x210
	// Line 246, Address: 0x1a709c, Func Offset: 0x21c
	// Line 247, Address: 0x1a70b0, Func Offset: 0x230
	// Line 248, Address: 0x1a70bc, Func Offset: 0x23c
	// Line 251, Address: 0x1a70d0, Func Offset: 0x250
	// Line 252, Address: 0x1a70ec, Func Offset: 0x26c
	// Line 253, Address: 0x1a710c, Func Offset: 0x28c
	// Line 257, Address: 0x1a7120, Func Offset: 0x2a0
	// Line 258, Address: 0x1a7144, Func Offset: 0x2c4
	// Line 259, Address: 0x1a7164, Func Offset: 0x2e4
	// Line 262, Address: 0x1a7178, Func Offset: 0x2f8
	// Line 263, Address: 0x1a7184, Func Offset: 0x304
	// Line 264, Address: 0x1a71b0, Func Offset: 0x330
	// Line 265, Address: 0x1a71d4, Func Offset: 0x354
	// Line 266, Address: 0x1a71f0, Func Offset: 0x370
	// Line 267, Address: 0x1a7204, Func Offset: 0x384
	// Line 268, Address: 0x1a7240, Func Offset: 0x3c0
	// Line 269, Address: 0x1a724c, Func Offset: 0x3cc
	// Line 270, Address: 0x1a7290, Func Offset: 0x410
	// Line 271, Address: 0x1a72a4, Func Offset: 0x424
	// Line 274, Address: 0x1a72d4, Func Offset: 0x454
	// Line 275, Address: 0x1a72e0, Func Offset: 0x460
	// Line 276, Address: 0x1a7318, Func Offset: 0x498
	// Line 277, Address: 0x1a7344, Func Offset: 0x4c4
	// Line 279, Address: 0x1a7394, Func Offset: 0x514
	// Line 281, Address: 0x1a73a4, Func Offset: 0x524
	// Line 283, Address: 0x1a73b4, Func Offset: 0x534
	// Line 284, Address: 0x1a73cc, Func Offset: 0x54c
	// Line 285, Address: 0x1a73d8, Func Offset: 0x558
	// Line 287, Address: 0x1a73f4, Func Offset: 0x574
	// Line 288, Address: 0x1a7404, Func Offset: 0x584
	// Line 291, Address: 0x1a7414, Func Offset: 0x594
	// Line 292, Address: 0x1a7438, Func Offset: 0x5b8
	// Line 293, Address: 0x1a7460, Func Offset: 0x5e0
	// Line 294, Address: 0x1a7488, Func Offset: 0x608
	// Line 295, Address: 0x1a74ac, Func Offset: 0x62c
	// Line 296, Address: 0x1a74d4, Func Offset: 0x654
	// Line 297, Address: 0x1a74fc, Func Offset: 0x67c
	// Line 300, Address: 0x1a7504, Func Offset: 0x684
	// Line 301, Address: 0x1a752c, Func Offset: 0x6ac
	// Line 302, Address: 0x1a7538, Func Offset: 0x6b8
	// Line 303, Address: 0x1a7558, Func Offset: 0x6d8
	// Line 304, Address: 0x1a758c, Func Offset: 0x70c
	// Line 305, Address: 0x1a759c, Func Offset: 0x71c
	// Line 308, Address: 0x1a75ac, Func Offset: 0x72c
	// Line 309, Address: 0x1a75cc, Func Offset: 0x74c
	// Line 310, Address: 0x1a75d8, Func Offset: 0x758
	// Line 311, Address: 0x1a75f0, Func Offset: 0x770
	// Line 313, Address: 0x1a7604, Func Offset: 0x784
	// Line 314, Address: 0x1a7610, Func Offset: 0x790
	// Line 315, Address: 0x1a7624, Func Offset: 0x7a4
	// Line 317, Address: 0x1a7638, Func Offset: 0x7b8
	// Line 318, Address: 0x1a7658, Func Offset: 0x7d8
	// Line 319, Address: 0x1a7664, Func Offset: 0x7e4
	// Line 320, Address: 0x1a767c, Func Offset: 0x7fc
	// Line 322, Address: 0x1a7690, Func Offset: 0x810
	// Line 323, Address: 0x1a769c, Func Offset: 0x81c
	// Line 324, Address: 0x1a76b4, Func Offset: 0x834
	// Line 329, Address: 0x1a76c8, Func Offset: 0x848
	// Line 330, Address: 0x1a76e4, Func Offset: 0x864
	// Line 331, Address: 0x1a76f0, Func Offset: 0x870
	// Line 335, Address: 0x1a7744, Func Offset: 0x8c4
	// Line 336, Address: 0x1a7754, Func Offset: 0x8d4
	// Line 343, Address: 0x1a7768, Func Offset: 0x8e8
	// Line 344, Address: 0x1a7794, Func Offset: 0x914
	// Func End, Address: 0x1a77ac, Func Offset: 0x92c
}

// 
// Start address: 0x1a77b0
void EventProgInit()
{
	// Line 354, Address: 0x1a77b0, Func Offset: 0
	// Line 355, Address: 0x1a77d0, Func Offset: 0x20
	// Line 356, Address: 0x1a77dc, Func Offset: 0x2c
	// Line 357, Address: 0x1a77e4, Func Offset: 0x34
	// Line 358, Address: 0x1a77ec, Func Offset: 0x3c
	// Line 359, Address: 0x1a77f4, Func Offset: 0x44
	// Line 362, Address: 0x1a77fc, Func Offset: 0x4c
	// Func End, Address: 0x1a7804, Func Offset: 0x54
}

// 
// Start address: 0x1a7810
void EventMain()
{
	// Line 367, Address: 0x1a7810, Func Offset: 0
	// Line 377, Address: 0x1a7818, Func Offset: 0x8
	// Line 381, Address: 0x1a7840, Func Offset: 0x30
	// Line 384, Address: 0x1a7860, Func Offset: 0x50
	// Line 385, Address: 0x1a7878, Func Offset: 0x68
	// Line 386, Address: 0x1a7890, Func Offset: 0x80
	// Line 388, Address: 0x1a7898, Func Offset: 0x88
	// Line 389, Address: 0x1a78a8, Func Offset: 0x98
	// Line 391, Address: 0x1a78c8, Func Offset: 0xb8
	// Line 392, Address: 0x1a78dc, Func Offset: 0xcc
	// Line 393, Address: 0x1a7910, Func Offset: 0x100
	// Line 394, Address: 0x1a7918, Func Offset: 0x108
	// Line 395, Address: 0x1a792c, Func Offset: 0x11c
	// Line 396, Address: 0x1a7948, Func Offset: 0x138
	// Line 399, Address: 0x1a7980, Func Offset: 0x170
	// Line 400, Address: 0x1a79b4, Func Offset: 0x1a4
	// Line 401, Address: 0x1a79dc, Func Offset: 0x1cc
	// Line 402, Address: 0x1a79f0, Func Offset: 0x1e0
	// Line 403, Address: 0x1a79f8, Func Offset: 0x1e8
	// Line 404, Address: 0x1a7a1c, Func Offset: 0x20c
	// Line 406, Address: 0x1a7a28, Func Offset: 0x218
	// Line 409, Address: 0x1a7a30, Func Offset: 0x220
	// Line 410, Address: 0x1a7a44, Func Offset: 0x234
	// Line 411, Address: 0x1a7a58, Func Offset: 0x248
	// Line 415, Address: 0x1a7a60, Func Offset: 0x250
	// Line 418, Address: 0x1a7a6c, Func Offset: 0x25c
	// Line 420, Address: 0x1a7a74, Func Offset: 0x264
	// Line 423, Address: 0x1a7a80, Func Offset: 0x270
	// Line 426, Address: 0x1a7a88, Func Offset: 0x278
	// Line 427, Address: 0x1a7a90, Func Offset: 0x280
	// Line 441, Address: 0x1a7aac, Func Offset: 0x29c
	// Line 442, Address: 0x1a7abc, Func Offset: 0x2ac
	// Line 443, Address: 0x1a7af0, Func Offset: 0x2e0
	// Line 445, Address: 0x1a7b04, Func Offset: 0x2f4
	// Line 446, Address: 0x1a7b18, Func Offset: 0x308
	// Line 447, Address: 0x1a7b20, Func Offset: 0x310
	// Line 449, Address: 0x1a7b38, Func Offset: 0x328
	// Func End, Address: 0x1a7b48, Func Offset: 0x338
}

// 
// Start address: 0x1a7b50
void EventMainStandard(int ev_act_on)
{
	int ret;
	int use_item;
	int st;
	Event_List* el;
	// Line 459, Address: 0x1a7b50, Func Offset: 0
	// Line 471, Address: 0x1a7b60, Func Offset: 0x10
	// Line 474, Address: 0x1a7b70, Func Offset: 0x20
	// Line 476, Address: 0x1a7b94, Func Offset: 0x44
	// Line 480, Address: 0x1a7bac, Func Offset: 0x5c
	// Line 482, Address: 0x1a7bbc, Func Offset: 0x6c
	// Line 487, Address: 0x1a7bf8, Func Offset: 0xa8
	// Line 489, Address: 0x1a7c04, Func Offset: 0xb4
	// Line 490, Address: 0x1a7c10, Func Offset: 0xc0
	// Line 491, Address: 0x1a7c24, Func Offset: 0xd4
	// Line 492, Address: 0x1a7c30, Func Offset: 0xe0
	// Line 495, Address: 0x1a7c58, Func Offset: 0x108
	// Line 497, Address: 0x1a7c84, Func Offset: 0x134
	// Line 499, Address: 0x1a7cb0, Func Offset: 0x160
	// Line 501, Address: 0x1a7cdc, Func Offset: 0x18c
	// Line 503, Address: 0x1a7d08, Func Offset: 0x1b8
	// Line 507, Address: 0x1a7d34, Func Offset: 0x1e4
	// Line 509, Address: 0x1a7d60, Func Offset: 0x210
	// Line 511, Address: 0x1a7d84, Func Offset: 0x234
	// Line 512, Address: 0x1a7d8c, Func Offset: 0x23c
	// Line 516, Address: 0x1a7db0, Func Offset: 0x260
	// Line 517, Address: 0x1a7de0, Func Offset: 0x290
	// Line 518, Address: 0x1a7df0, Func Offset: 0x2a0
	// Line 520, Address: 0x1a7e00, Func Offset: 0x2b0
	// Line 521, Address: 0x1a7e10, Func Offset: 0x2c0
	// Line 522, Address: 0x1a7e20, Func Offset: 0x2d0
	// Line 524, Address: 0x1a7e30, Func Offset: 0x2e0
	// Line 525, Address: 0x1a7e40, Func Offset: 0x2f0
	// Line 526, Address: 0x1a7e50, Func Offset: 0x300
	// Line 528, Address: 0x1a7e60, Func Offset: 0x310
	// Line 531, Address: 0x1a7e84, Func Offset: 0x334
	// Line 532, Address: 0x1a7e8c, Func Offset: 0x33c
	// Line 533, Address: 0x1a7eac, Func Offset: 0x35c
	// Line 534, Address: 0x1a7eb0, Func Offset: 0x360
	// Line 535, Address: 0x1a7eb8, Func Offset: 0x368
	// Func End, Address: 0x1a7ecc, Func Offset: 0x37c
}

// 
// Start address: 0x1a7ed0
int EventCheck(int act_on, int use_item, int check_only)
{
	int i;
	int flag;
	int kind;
	int cond_st;
	int light_on;
	Item_List* il;
	Event_List* el;
	_anon3 jms;
	SubCharacter* scp;
	int check[4];
	// Line 554, Address: 0x1a7ed0, Func Offset: 0
	// Line 569, Address: 0x1a7f04, Func Offset: 0x34
	// Line 570, Address: 0x1a7f14, Func Offset: 0x44
	// Line 571, Address: 0x1a7f1c, Func Offset: 0x4c
	// Line 572, Address: 0x1a7f28, Func Offset: 0x58
	// Line 573, Address: 0x1a7f34, Func Offset: 0x64
	// Line 574, Address: 0x1a7f50, Func Offset: 0x80
	// Line 575, Address: 0x1a7f70, Func Offset: 0xa0
	// Line 576, Address: 0x1a7fa8, Func Offset: 0xd8
	// Line 578, Address: 0x1a7fe0, Func Offset: 0x110
	// Line 580, Address: 0x1a7ffc, Func Offset: 0x12c
	// Line 583, Address: 0x1a8024, Func Offset: 0x154
	// Line 584, Address: 0x1a8028, Func Offset: 0x158
	// Line 586, Address: 0x1a803c, Func Offset: 0x16c
	// Line 592, Address: 0x1a8058, Func Offset: 0x188
	// Line 595, Address: 0x1a8078, Func Offset: 0x1a8
	// Line 598, Address: 0x1a808c, Func Offset: 0x1bc
	// Line 599, Address: 0x1a8094, Func Offset: 0x1c4
	// Line 603, Address: 0x1a80c0, Func Offset: 0x1f0
	// Line 606, Address: 0x1a80d8, Func Offset: 0x208
	// Line 609, Address: 0x1a80e0, Func Offset: 0x210
	// Line 611, Address: 0x1a813c, Func Offset: 0x26c
	// Line 612, Address: 0x1a8144, Func Offset: 0x274
	// Line 616, Address: 0x1a814c, Func Offset: 0x27c
	// Line 618, Address: 0x1a8154, Func Offset: 0x284
	// Line 619, Address: 0x1a8158, Func Offset: 0x288
	// Line 625, Address: 0x1a81a4, Func Offset: 0x2d4
	// Line 631, Address: 0x1a81a8, Func Offset: 0x2d8
	// Line 632, Address: 0x1a81b4, Func Offset: 0x2e4
	// Line 633, Address: 0x1a81cc, Func Offset: 0x2fc
	// Line 635, Address: 0x1a8200, Func Offset: 0x330
	// Line 643, Address: 0x1a8310, Func Offset: 0x440
	// Line 650, Address: 0x1a8338, Func Offset: 0x468
	// Line 654, Address: 0x1a8374, Func Offset: 0x4a4
	// Line 655, Address: 0x1a838c, Func Offset: 0x4bc
	// Line 658, Address: 0x1a8394, Func Offset: 0x4c4
	// Line 661, Address: 0x1a83ac, Func Offset: 0x4dc
	// Line 666, Address: 0x1a83b4, Func Offset: 0x4e4
	// Line 670, Address: 0x1a83f0, Func Offset: 0x520
	// Line 674, Address: 0x1a8414, Func Offset: 0x544
	// Line 675, Address: 0x1a842c, Func Offset: 0x55c
	// Line 680, Address: 0x1a8434, Func Offset: 0x564
	// Line 682, Address: 0x1a8468, Func Offset: 0x598
	// Line 688, Address: 0x1a848c, Func Offset: 0x5bc
	// Line 690, Address: 0x1a84a4, Func Offset: 0x5d4
	// Line 693, Address: 0x1a84a8, Func Offset: 0x5d8
	// Line 699, Address: 0x1a84d4, Func Offset: 0x604
	// Line 700, Address: 0x1a84d8, Func Offset: 0x608
	// Line 701, Address: 0x1a84f8, Func Offset: 0x628
	// Line 703, Address: 0x1a8514, Func Offset: 0x644
	// Line 704, Address: 0x1a8518, Func Offset: 0x648
	// Line 705, Address: 0x1a8524, Func Offset: 0x654
	// Line 707, Address: 0x1a8530, Func Offset: 0x660
	// Line 712, Address: 0x1a8544, Func Offset: 0x674
	// Line 714, Address: 0x1a8558, Func Offset: 0x688
	// Line 716, Address: 0x1a8570, Func Offset: 0x6a0
	// Line 717, Address: 0x1a8574, Func Offset: 0x6a4
	// Line 719, Address: 0x1a8588, Func Offset: 0x6b8
	// Line 720, Address: 0x1a859c, Func Offset: 0x6cc
	// Line 723, Address: 0x1a85a8, Func Offset: 0x6d8
	// Line 724, Address: 0x1a85bc, Func Offset: 0x6ec
	// Line 727, Address: 0x1a8618, Func Offset: 0x748
	// Line 731, Address: 0x1a8654, Func Offset: 0x784
	// Line 734, Address: 0x1a866c, Func Offset: 0x79c
	// Line 735, Address: 0x1a868c, Func Offset: 0x7bc
	// Line 737, Address: 0x1a86b4, Func Offset: 0x7e4
	// Line 738, Address: 0x1a86c4, Func Offset: 0x7f4
	// Line 739, Address: 0x1a86d0, Func Offset: 0x800
	// Line 740, Address: 0x1a86dc, Func Offset: 0x80c
	// Line 741, Address: 0x1a86e8, Func Offset: 0x818
	// Line 742, Address: 0x1a86f4, Func Offset: 0x824
	// Line 744, Address: 0x1a86f8, Func Offset: 0x828
	// Line 745, Address: 0x1a870c, Func Offset: 0x83c
	// Line 747, Address: 0x1a8728, Func Offset: 0x858
	// Line 748, Address: 0x1a8734, Func Offset: 0x864
	// Line 749, Address: 0x1a8740, Func Offset: 0x870
	// Line 750, Address: 0x1a8744, Func Offset: 0x874
	// Func End, Address: 0x1a8774, Func Offset: 0x8a4
}

// 
// Start address: 0x1a8780
int EventCheckLook(Event_List* el)
{
	int i;
	int work;
	int pos_type;
	float f_work;
	char* pos_p;
	float p[2][7];
	_anon3 jms;
	// Line 759, Address: 0x1a8780, Func Offset: 0
	// Line 768, Address: 0x1a87f4, Func Offset: 0x74
	// Line 769, Address: 0x1a8800, Func Offset: 0x80
	// Line 772, Address: 0x1a8810, Func Offset: 0x90
	// Line 773, Address: 0x1a881c, Func Offset: 0x9c
	// Line 775, Address: 0x1a887c, Func Offset: 0xfc
	// Line 777, Address: 0x1a8888, Func Offset: 0x108
	// Line 779, Address: 0x1a889c, Func Offset: 0x11c
	// Line 780, Address: 0x1a88a4, Func Offset: 0x124
	// Line 784, Address: 0x1a88dc, Func Offset: 0x15c
	// Line 785, Address: 0x1a88ec, Func Offset: 0x16c
	// Line 787, Address: 0x1a8900, Func Offset: 0x180
	// Line 792, Address: 0x1a8938, Func Offset: 0x1b8
	// Line 793, Address: 0x1a893c, Func Offset: 0x1bc
	// Line 794, Address: 0x1a8948, Func Offset: 0x1c8
	// Line 795, Address: 0x1a8954, Func Offset: 0x1d4
	// Line 797, Address: 0x1a8988, Func Offset: 0x208
	// Line 798, Address: 0x1a89a0, Func Offset: 0x220
	// Line 800, Address: 0x1a89a8, Func Offset: 0x228
	// Line 801, Address: 0x1a89c0, Func Offset: 0x240
	// Line 803, Address: 0x1a89c8, Func Offset: 0x248
	// Line 804, Address: 0x1a89e0, Func Offset: 0x260
	// Line 806, Address: 0x1a89e8, Func Offset: 0x268
	// Line 809, Address: 0x1a8a00, Func Offset: 0x280
	// Line 812, Address: 0x1a8a08, Func Offset: 0x288
	// Line 813, Address: 0x1a8a0c, Func Offset: 0x28c
	// Line 814, Address: 0x1a8a14, Func Offset: 0x294
	// Line 815, Address: 0x1a8a3c, Func Offset: 0x2bc
	// Line 816, Address: 0x1a8a58, Func Offset: 0x2d8
	// Line 818, Address: 0x1a8a6c, Func Offset: 0x2ec
	// Line 819, Address: 0x1a8a70, Func Offset: 0x2f0
	// Line 820, Address: 0x1a8a7c, Func Offset: 0x2fc
	// Line 821, Address: 0x1a8aac, Func Offset: 0x32c
	// Line 822, Address: 0x1a8ab8, Func Offset: 0x338
	// Line 823, Address: 0x1a8ad0, Func Offset: 0x350
	// Line 824, Address: 0x1a8ad4, Func Offset: 0x354
	// Func End, Address: 0x1a8b00, Func Offset: 0x380
}

// 
// Start address: 0x1a8b00
int EventCheckLookPoint(float x, float z)
{
	float ang;
	_anon3 jms;
	float pos_z;
	float pos_x;
	// Line 829, Address: 0x1a8b00, Func Offset: 0
	// Line 834, Address: 0x1a8b54, Func Offset: 0x54
	// Line 835, Address: 0x1a8b64, Func Offset: 0x64
	// Line 838, Address: 0x1a8b74, Func Offset: 0x74
	// Line 839, Address: 0x1a8bb8, Func Offset: 0xb8
	// Line 842, Address: 0x1a8bc4, Func Offset: 0xc4
	// Line 843, Address: 0x1a8c00, Func Offset: 0x100
	// Line 846, Address: 0x1a8c0c, Func Offset: 0x10c
	// Line 848, Address: 0x1a8c38, Func Offset: 0x138
	// Line 850, Address: 0x1a8c68, Func Offset: 0x168
	// Line 851, Address: 0x1a8c6c, Func Offset: 0x16c
	// Func End, Address: 0x1a8c7c, Func Offset: 0x17c
}

// 
// Start address: 0x1a8c80
int EventCheckLookLine(float x0, float z0, float x1, float z1)
{
	int ret;
	_anon3 jms;
	// Line 857, Address: 0x1a8c80, Func Offset: 0
	// Line 858, Address: 0x1a8cd0, Func Offset: 0x50
	// Line 860, Address: 0x1a8cd4, Func Offset: 0x54
	// Line 863, Address: 0x1a8ce8, Func Offset: 0x68
	// Line 864, Address: 0x1a8cec, Func Offset: 0x6c
	// Line 865, Address: 0x1a8cf0, Func Offset: 0x70
	// Line 866, Address: 0x1a8cf4, Func Offset: 0x74
	// Line 867, Address: 0x1a8cf8, Func Offset: 0x78
	// Line 874, Address: 0x1a8cfc, Func Offset: 0x7c
	// Line 875, Address: 0x1a8d00, Func Offset: 0x80
	// Line 876, Address: 0x1a8d04, Func Offset: 0x84
	// Line 877, Address: 0x1a8d08, Func Offset: 0x88
	// Line 878, Address: 0x1a8d0c, Func Offset: 0x8c
	// Line 879, Address: 0x1a8d10, Func Offset: 0x90
	// Line 880, Address: 0x1a8d14, Func Offset: 0x94
	// Line 881, Address: 0x1a8d18, Func Offset: 0x98
	// Line 882, Address: 0x1a8d1c, Func Offset: 0x9c
	// Line 883, Address: 0x1a8d20, Func Offset: 0xa0
	// Line 885, Address: 0x1a8d28, Func Offset: 0xa8
	// Line 887, Address: 0x1a8d30, Func Offset: 0xb0
	// Line 888, Address: 0x1a8d34, Func Offset: 0xb4
	// Line 889, Address: 0x1a8d38, Func Offset: 0xb8
	// Line 891, Address: 0x1a8d3c, Func Offset: 0xbc
	// Line 892, Address: 0x1a8d40, Func Offset: 0xc0
	// Line 893, Address: 0x1a8d44, Func Offset: 0xc4
	// Line 895, Address: 0x1a8d48, Func Offset: 0xc8
	// Line 896, Address: 0x1a8d4c, Func Offset: 0xcc
	// Line 901, Address: 0x1a8d54, Func Offset: 0xd4
	// Line 902, Address: 0x1a8d58, Func Offset: 0xd8
	// Line 904, Address: 0x1a8d60, Func Offset: 0xe0
	// Line 941, Address: 0x1a8d64, Func Offset: 0xe4
	// Func End, Address: 0x1a8d70, Func Offset: 0xf0
}

// 
// Start address: 0x1a8d70
int EventCheckIn(Event_List* el)
{
	int i;
	int work;
	int pos_type;
	char* pos_p;
	float f_work;
	float h;
	float w;
	float p[2][4];
	_anon3 jms;
	// Line 953, Address: 0x1a8d70, Func Offset: 0
	// Line 962, Address: 0x1a8de8, Func Offset: 0x78
	// Line 963, Address: 0x1a8df4, Func Offset: 0x84
	// Line 966, Address: 0x1a8e04, Func Offset: 0x94
	// Line 967, Address: 0x1a8e10, Func Offset: 0xa0
	// Line 969, Address: 0x1a8e70, Func Offset: 0x100
	// Line 971, Address: 0x1a8e7c, Func Offset: 0x10c
	// Line 972, Address: 0x1a8e90, Func Offset: 0x120
	// Line 973, Address: 0x1a8ea0, Func Offset: 0x130
	// Line 975, Address: 0x1a8eb4, Func Offset: 0x144
	// Line 976, Address: 0x1a8ec0, Func Offset: 0x150
	// Line 977, Address: 0x1a8ed0, Func Offset: 0x160
	// Line 978, Address: 0x1a8edc, Func Offset: 0x16c
	// Line 979, Address: 0x1a8f34, Func Offset: 0x1c4
	// Line 980, Address: 0x1a8f40, Func Offset: 0x1d0
	// Line 984, Address: 0x1a8f4c, Func Offset: 0x1dc
	// Line 986, Address: 0x1a8f68, Func Offset: 0x1f8
	// Line 987, Address: 0x1a8f74, Func Offset: 0x204
	// Line 988, Address: 0x1a8fa0, Func Offset: 0x230
	// Line 989, Address: 0x1a8fbc, Func Offset: 0x24c
	// Line 990, Address: 0x1a8ff8, Func Offset: 0x288
	// Line 991, Address: 0x1a9004, Func Offset: 0x294
	// Line 993, Address: 0x1a9014, Func Offset: 0x2a4
	// Line 996, Address: 0x1a905c, Func Offset: 0x2ec
	// Func End, Address: 0x1a908c, Func Offset: 0x31c
}

// 
// Start address: 0x1a9090
int EventListElement(Event_List* el, int en)
{
	// Line 1007, Address: 0x1a9090, Func Offset: 0
	// Line 1009, Address: 0x1a90b8, Func Offset: 0x28
	// Line 1011, Address: 0x1a90cc, Func Offset: 0x3c
	// Line 1013, Address: 0x1a90e0, Func Offset: 0x50
	// Line 1015, Address: 0x1a90f4, Func Offset: 0x64
	// Line 1017, Address: 0x1a9108, Func Offset: 0x78
	// Line 1019, Address: 0x1a911c, Func Offset: 0x8c
	// Line 1021, Address: 0x1a912c, Func Offset: 0x9c
	// Line 1023, Address: 0x1a9140, Func Offset: 0xb0
	// Line 1025, Address: 0x1a9154, Func Offset: 0xc4
	// Line 1027, Address: 0x1a9168, Func Offset: 0xd8
	// Line 1029, Address: 0x1a917c, Func Offset: 0xec
	// Line 1031, Address: 0x1a9190, Func Offset: 0x100
	// Line 1033, Address: 0x1a91a4, Func Offset: 0x114
	// Line 1035, Address: 0x1a91b8, Func Offset: 0x128
	// Line 1037, Address: 0x1a91cc, Func Offset: 0x13c
	// Line 1039, Address: 0x1a91e0, Func Offset: 0x150
	// Line 1041, Address: 0x1a91f4, Func Offset: 0x164
	// Line 1043, Address: 0x1a9208, Func Offset: 0x178
	// Line 1045, Address: 0x1a921c, Func Offset: 0x18c
	// Line 1047, Address: 0x1a9230, Func Offset: 0x1a0
	// Line 1049, Address: 0x1a9244, Func Offset: 0x1b4
	// Line 1051, Address: 0x1a9258, Func Offset: 0x1c8
	// Line 1054, Address: 0x1a9268, Func Offset: 0x1d8
	// Line 1055, Address: 0x1a926c, Func Offset: 0x1dc
	// Func End, Address: 0x1a9274, Func Offset: 0x1e4
}

// 
// Start address: 0x1a9280
float CharToFloat2(char* cp)
{
	int work;
	int coe;
	int exp;
	int sig;
	// Line 1225, Address: 0x1a9280, Func Offset: 0
	// Line 1231, Address: 0x1a9284, Func Offset: 0x4
	// Line 1232, Address: 0x1a9288, Func Offset: 0x8
	// Line 1233, Address: 0x1a9294, Func Offset: 0x14
	// Line 1235, Address: 0x1a929c, Func Offset: 0x1c
	// Line 1236, Address: 0x1a92a8, Func Offset: 0x28
	// Line 1237, Address: 0x1a92b0, Func Offset: 0x30
	// Line 1242, Address: 0x1a92b4, Func Offset: 0x34
	// Line 1244, Address: 0x1a92d0, Func Offset: 0x50
	// Line 1245, Address: 0x1a92d4, Func Offset: 0x54
	// Func End, Address: 0x1a92e0, Func Offset: 0x60
}

// 
// Start address: 0x1a92e0
float CharToFloat4(char* cp)
{
	char c_work[4];
	// Line 1250, Address: 0x1a92e0, Func Offset: 0
	// Line 1253, Address: 0x1a92e4, Func Offset: 0x4
	// Line 1254, Address: 0x1a92ec, Func Offset: 0xc
	// Line 1255, Address: 0x1a92f4, Func Offset: 0x14
	// Line 1256, Address: 0x1a92fc, Func Offset: 0x1c
	// Line 1258, Address: 0x1a9304, Func Offset: 0x24
	// Line 1259, Address: 0x1a930c, Func Offset: 0x2c
	// Func End, Address: 0x1a9318, Func Offset: 0x38
}

// 
// Start address: 0x1a9320
int ItemListElement(Item_List* il, int en)
{
	// Line 1270, Address: 0x1a9320, Func Offset: 0
	// Line 1271, Address: 0x1a9354, Func Offset: 0x34
	// Line 1272, Address: 0x1a9368, Func Offset: 0x48
	// Line 1273, Address: 0x1a937c, Func Offset: 0x5c
	// Line 1274, Address: 0x1a9390, Func Offset: 0x70
	// Line 1276, Address: 0x1a93a0, Func Offset: 0x80
	// Line 1277, Address: 0x1a93a4, Func Offset: 0x84
	// Func End, Address: 0x1a93ac, Func Offset: 0x8c
}

// 
// Start address: 0x1a93b0
int ItemCheckLookPoint(Item_List* il)
{
	float ang;
	float pos_z;
	float pos_y;
	float pos_x;
	_anon3 jms;
	// Line 1284, Address: 0x1a93b0, Func Offset: 0
	// Line 1291, Address: 0x1a940c, Func Offset: 0x5c
	// Line 1292, Address: 0x1a9418, Func Offset: 0x68
	// Line 1293, Address: 0x1a945c, Func Offset: 0xac
	// Line 1295, Address: 0x1a9468, Func Offset: 0xb8
	// Line 1296, Address: 0x1a9474, Func Offset: 0xc4
	// Line 1299, Address: 0x1a9480, Func Offset: 0xd0
	// Line 1300, Address: 0x1a94b4, Func Offset: 0x104
	// Line 1303, Address: 0x1a94c0, Func Offset: 0x110
	// Line 1304, Address: 0x1a94ec, Func Offset: 0x13c
	// Line 1307, Address: 0x1a94f8, Func Offset: 0x148
	// Line 1309, Address: 0x1a9520, Func Offset: 0x170
	// Line 1311, Address: 0x1a9550, Func Offset: 0x1a0
	// Line 1312, Address: 0x1a9554, Func Offset: 0x1a4
	// Func End, Address: 0x1a9568, Func Offset: 0x1b8
}

// 
// Start address: 0x1a9570
void EventPositionSet(float* pos_v, char* pos_p, int pos_t)
{
	// Line 1319, Address: 0x1a9570, Func Offset: 0
	// Line 1320, Address: 0x1a9590, Func Offset: 0x20
	// Line 1321, Address: 0x1a95a0, Func Offset: 0x30
	// Line 1322, Address: 0x1a95b0, Func Offset: 0x40
	// Line 1323, Address: 0x1a95c0, Func Offset: 0x50
	// Line 1325, Address: 0x1a9604, Func Offset: 0x94
	// Line 1326, Address: 0x1a962c, Func Offset: 0xbc
	// Line 1328, Address: 0x1a9634, Func Offset: 0xc4
	// Line 1329, Address: 0x1a965c, Func Offset: 0xec
	// Line 1331, Address: 0x1a9664, Func Offset: 0xf4
	// Line 1332, Address: 0x1a968c, Func Offset: 0x11c
	// Line 1334, Address: 0x1a9694, Func Offset: 0x124
	// Line 1335, Address: 0x1a96bc, Func Offset: 0x14c
	// Line 1337, Address: 0x1a96c4, Func Offset: 0x154
	// Line 1338, Address: 0x1a96ec, Func Offset: 0x17c
	// Line 1341, Address: 0x1a9714, Func Offset: 0x1a4
	// Func End, Address: 0x1a9730, Func Offset: 0x1c0
}

// 
// Start address: 0x1a9730
void EventResultMovePosition(int ev_no)
{
	float rot;
	float f_work;
	int pos_type;
	char* pos;
	Event_List* el;
	float mv_pos[4];
	// Line 1352, Address: 0x1a9730, Func Offset: 0
	// Line 1360, Address: 0x1a9744, Func Offset: 0x14
	// Line 1361, Address: 0x1a9758, Func Offset: 0x28
	// Line 1362, Address: 0x1a9774, Func Offset: 0x44
	// Line 1364, Address: 0x1a9784, Func Offset: 0x54
	// Line 1365, Address: 0x1a978c, Func Offset: 0x5c
	// Line 1366, Address: 0x1a979c, Func Offset: 0x6c
	// Line 1367, Address: 0x1a97ac, Func Offset: 0x7c
	// Line 1368, Address: 0x1a97bc, Func Offset: 0x8c
	// Line 1369, Address: 0x1a97c8, Func Offset: 0x98
	// Line 1374, Address: 0x1a97f0, Func Offset: 0xc0
	// Line 1375, Address: 0x1a9818, Func Offset: 0xe8
	// Line 1376, Address: 0x1a9830, Func Offset: 0x100
	// Line 1377, Address: 0x1a9834, Func Offset: 0x104
	// Line 1380, Address: 0x1a983c, Func Offset: 0x10c
	// Line 1381, Address: 0x1a9864, Func Offset: 0x134
	// Line 1382, Address: 0x1a987c, Func Offset: 0x14c
	// Line 1383, Address: 0x1a9888, Func Offset: 0x158
	// Line 1386, Address: 0x1a9890, Func Offset: 0x160
	// Line 1387, Address: 0x1a98a8, Func Offset: 0x178
	// Line 1388, Address: 0x1a98d0, Func Offset: 0x1a0
	// Line 1389, Address: 0x1a98dc, Func Offset: 0x1ac
	// Line 1392, Address: 0x1a98e4, Func Offset: 0x1b4
	// Line 1393, Address: 0x1a98fc, Func Offset: 0x1cc
	// Line 1394, Address: 0x1a9924, Func Offset: 0x1f4
	// Line 1395, Address: 0x1a9930, Func Offset: 0x200
	// Line 1398, Address: 0x1a9938, Func Offset: 0x208
	// Line 1399, Address: 0x1a9960, Func Offset: 0x230
	// Line 1400, Address: 0x1a9988, Func Offset: 0x258
	// Line 1404, Address: 0x1a99c8, Func Offset: 0x298
	// Line 1405, Address: 0x1a99f0, Func Offset: 0x2c0
	// Line 1415, Address: 0x1a9a18, Func Offset: 0x2e8
	// Line 1416, Address: 0x1a9a24, Func Offset: 0x2f4
	// Line 1417, Address: 0x1a9a30, Func Offset: 0x300
	// Line 1418, Address: 0x1a9a3c, Func Offset: 0x30c
	// Line 1419, Address: 0x1a9a50, Func Offset: 0x320
	// Func End, Address: 0x1a9a6c, Func Offset: 0x33c
}

// 
// Start address: 0x1a9a70
void EventCancel()
{
	// Line 1432, Address: 0x1a9a70, Func Offset: 0
	// Line 1433, Address: 0x1a9a7c, Func Offset: 0xc
	// Func End, Address: 0x1a9a84, Func Offset: 0x14
}

// 
// Start address: 0x1a9a90
void EventExecSubFlagSet(Event_List* el)
{
	int flg;
	// Line 1442, Address: 0x1a9a90, Func Offset: 0
	// Line 1445, Address: 0x1a9a98, Func Offset: 0x8
	// Line 1446, Address: 0x1a9aa8, Func Offset: 0x18
	// Line 1447, Address: 0x1a9ab0, Func Offset: 0x20
	// Line 1448, Address: 0x1a9ac4, Func Offset: 0x34
	// Line 1449, Address: 0x1a9b10, Func Offset: 0x80
	// Line 1452, Address: 0x1a9b3c, Func Offset: 0xac
	// Line 1453, Address: 0x1a9b4c, Func Offset: 0xbc
	// Line 1454, Address: 0x1a9b54, Func Offset: 0xc4
	// Line 1455, Address: 0x1a9b68, Func Offset: 0xd8
	// Line 1456, Address: 0x1a9bb4, Func Offset: 0x124
	// Line 1458, Address: 0x1a9be0, Func Offset: 0x150
	// Func End, Address: 0x1a9bf0, Func Offset: 0x160
}

// 
// Start address: 0x1a9bf0
int EventExecFlag()
{
	int fl;
	int st;
	Event_List* el;
	// Line 1467, Address: 0x1a9bf0, Func Offset: 0
	// Line 1472, Address: 0x1a9bf8, Func Offset: 0x8
	// Line 1473, Address: 0x1a9c14, Func Offset: 0x24
	// Line 1474, Address: 0x1a9c24, Func Offset: 0x34
	// Line 1475, Address: 0x1a9c30, Func Offset: 0x40
	// Line 1476, Address: 0x1a9c6c, Func Offset: 0x7c
	// Line 1477, Address: 0x1a9c98, Func Offset: 0xa8
	// Line 1479, Address: 0x1a9ca0, Func Offset: 0xb0
	// Line 1480, Address: 0x1a9ca4, Func Offset: 0xb4
	// Func End, Address: 0x1a9cb4, Func Offset: 0xc4
}

// 
// Start address: 0x1a9cc0
int EventExecMessage()
{
	int flg;
	int msg;
	Event_List* el;
	// Line 1490, Address: 0x1a9cc0, Func Offset: 0
	// Line 1495, Address: 0x1a9ccc, Func Offset: 0xc
	// Line 1496, Address: 0x1a9cdc, Func Offset: 0x1c
	// Line 1497, Address: 0x1a9cf8, Func Offset: 0x38
	// Line 1499, Address: 0x1a9d08, Func Offset: 0x48
	// Line 1500, Address: 0x1a9d1c, Func Offset: 0x5c
	// Line 1501, Address: 0x1a9d2c, Func Offset: 0x6c
	// Line 1502, Address: 0x1a9d60, Func Offset: 0xa0
	// Line 1503, Address: 0x1a9d6c, Func Offset: 0xac
	// Line 1504, Address: 0x1a9d80, Func Offset: 0xc0
	// Line 1510, Address: 0x1a9d9c, Func Offset: 0xdc
	// Line 1511, Address: 0x1a9dc0, Func Offset: 0x100
	// Line 1512, Address: 0x1a9dc8, Func Offset: 0x108
	// Line 1513, Address: 0x1a9ddc, Func Offset: 0x11c
	// Line 1515, Address: 0x1a9de8, Func Offset: 0x128
	// Line 1516, Address: 0x1a9dec, Func Offset: 0x12c
	// Func End, Address: 0x1a9e00, Func Offset: 0x140
}

// 
// Start address: 0x1a9e00
int EventExecProgram()
{
	int prog;
	int flg;
	Event_List* el;
	// Line 1525, Address: 0x1a9e00, Func Offset: 0
	// Line 1530, Address: 0x1a9e0c, Func Offset: 0xc
	// Line 1531, Address: 0x1a9e28, Func Offset: 0x28
	// Line 1532, Address: 0x1a9e38, Func Offset: 0x38
	// Line 1533, Address: 0x1a9e44, Func Offset: 0x44
	// Line 1534, Address: 0x1a9e50, Func Offset: 0x50
	// Line 1537, Address: 0x1a9e6c, Func Offset: 0x6c
	// Line 1538, Address: 0x1a9e7c, Func Offset: 0x7c
	// Line 1539, Address: 0x1a9ea4, Func Offset: 0xa4
	// Line 1540, Address: 0x1a9eb4, Func Offset: 0xb4
	// Line 1541, Address: 0x1a9ec4, Func Offset: 0xc4
	// Line 1543, Address: 0x1a9ef8, Func Offset: 0xf8
	// Line 1545, Address: 0x1a9f04, Func Offset: 0x104
	// Line 1546, Address: 0x1a9f08, Func Offset: 0x108
	// Func End, Address: 0x1a9f1c, Func Offset: 0x11c
}

// 
// Start address: 0x1a9f20
int EventExecDoor()
{
	int fl;
	int se;
	int msg;
	int st;
	int pos_t;
	char* pos_p;
	float pos_v[4];
	Event_List* el;
	// Line 1556, Address: 0x1a9f20, Func Offset: 0
	// Line 1566, Address: 0x1a9f34, Func Offset: 0x14
	// Line 1567, Address: 0x1a9f44, Func Offset: 0x24
	// Line 1568, Address: 0x1a9f60, Func Offset: 0x40
	// Line 1569, Address: 0x1a9f74, Func Offset: 0x54
	// Line 1570, Address: 0x1a9f84, Func Offset: 0x64
	// Line 1571, Address: 0x1a9fa0, Func Offset: 0x80
	// Line 1572, Address: 0x1a9fac, Func Offset: 0x8c
	// Line 1573, Address: 0x1a9fc0, Func Offset: 0xa0
	// Line 1575, Address: 0x1a9fd8, Func Offset: 0xb8
	// Line 1577, Address: 0x1a9fe4, Func Offset: 0xc4
	// Line 1578, Address: 0x1a9ff4, Func Offset: 0xd4
	// Line 1579, Address: 0x1aa01c, Func Offset: 0xfc
	// Line 1580, Address: 0x1aa030, Func Offset: 0x110
	// Line 1581, Address: 0x1aa064, Func Offset: 0x144
	// Line 1582, Address: 0x1aa078, Func Offset: 0x158
	// Line 1583, Address: 0x1aa088, Func Offset: 0x168
	// Line 1584, Address: 0x1aa0b0, Func Offset: 0x190
	// Line 1585, Address: 0x1aa0bc, Func Offset: 0x19c
	// Line 1586, Address: 0x1aa0d8, Func Offset: 0x1b8
	// Line 1587, Address: 0x1aa0ec, Func Offset: 0x1cc
	// Line 1588, Address: 0x1aa120, Func Offset: 0x200
	// Line 1589, Address: 0x1aa128, Func Offset: 0x208
	// Line 1590, Address: 0x1aa13c, Func Offset: 0x21c
	// Line 1592, Address: 0x1aa170, Func Offset: 0x250
	// Line 1593, Address: 0x1aa180, Func Offset: 0x260
	// Line 1594, Address: 0x1aa1b4, Func Offset: 0x294
	// Line 1595, Address: 0x1aa1c0, Func Offset: 0x2a0
	// Line 1596, Address: 0x1aa1d4, Func Offset: 0x2b4
	// Line 1600, Address: 0x1aa1f0, Func Offset: 0x2d0
	// Line 1601, Address: 0x1aa214, Func Offset: 0x2f4
	// Line 1602, Address: 0x1aa21c, Func Offset: 0x2fc
	// Line 1603, Address: 0x1aa230, Func Offset: 0x310
	// Line 1605, Address: 0x1aa23c, Func Offset: 0x31c
	// Line 1606, Address: 0x1aa240, Func Offset: 0x320
	// Func End, Address: 0x1aa25c, Func Offset: 0x33c
}

// 
// Start address: 0x1aa260
int EventExecItem()
{
	int kind;
	Item_List* il;
	_anon0 eei_data[7];
	// Line 1616, Address: 0x1aa260, Func Offset: 0
	// Line 1634, Address: 0x1aa26c, Func Offset: 0xc
	// Line 1636, Address: 0x1aa29c, Func Offset: 0x3c
	// Line 1637, Address: 0x1aa2bc, Func Offset: 0x5c
	// Line 1638, Address: 0x1aa2d0, Func Offset: 0x70
	// Line 1640, Address: 0x1aa308, Func Offset: 0xa8
	// Line 1641, Address: 0x1aa314, Func Offset: 0xb4
	// Line 1642, Address: 0x1aa330, Func Offset: 0xd0
	// Line 1643, Address: 0x1aa338, Func Offset: 0xd8
	// Line 1644, Address: 0x1aa344, Func Offset: 0xe4
	// Line 1646, Address: 0x1aa360, Func Offset: 0x100
	// Line 1649, Address: 0x1aa368, Func Offset: 0x108
	// Line 1650, Address: 0x1aa378, Func Offset: 0x118
	// Line 1651, Address: 0x1aa394, Func Offset: 0x134
	// Line 1652, Address: 0x1aa3ac, Func Offset: 0x14c
	// Line 1653, Address: 0x1aa3bc, Func Offset: 0x15c
	// Line 1655, Address: 0x1aa3d8, Func Offset: 0x178
	// Line 1658, Address: 0x1aa3e0, Func Offset: 0x180
	// Line 1659, Address: 0x1aa400, Func Offset: 0x1a0
	// Line 1660, Address: 0x1aa414, Func Offset: 0x1b4
	// Line 1661, Address: 0x1aa45c, Func Offset: 0x1fc
	// Line 1662, Address: 0x1aa478, Func Offset: 0x218
	// Line 1663, Address: 0x1aa498, Func Offset: 0x238
	// Line 1664, Address: 0x1aa4b4, Func Offset: 0x254
	// Line 1667, Address: 0x1aa4bc, Func Offset: 0x25c
	// Line 1669, Address: 0x1aa4dc, Func Offset: 0x27c
	// Line 1670, Address: 0x1aa500, Func Offset: 0x2a0
	// Line 1672, Address: 0x1aa508, Func Offset: 0x2a8
	// Line 1674, Address: 0x1aa520, Func Offset: 0x2c0
	// Line 1676, Address: 0x1aa560, Func Offset: 0x300
	// Line 1677, Address: 0x1aa57c, Func Offset: 0x31c
	// Line 1679, Address: 0x1aa5b4, Func Offset: 0x354
	// Line 1680, Address: 0x1aa5bc, Func Offset: 0x35c
	// Line 1682, Address: 0x1aa5d8, Func Offset: 0x378
	// Line 1685, Address: 0x1aa5e0, Func Offset: 0x380
	// Line 1686, Address: 0x1aa608, Func Offset: 0x3a8
	// Line 1687, Address: 0x1aa624, Func Offset: 0x3c4
	// Line 1690, Address: 0x1aa62c, Func Offset: 0x3cc
	// Line 1691, Address: 0x1aa640, Func Offset: 0x3e0
	// Line 1693, Address: 0x1aa64c, Func Offset: 0x3ec
	// Line 1694, Address: 0x1aa650, Func Offset: 0x3f0
	// Func End, Address: 0x1aa664, Func Offset: 0x404
}

// 
// Start address: 0x1aa670
int EventExecMove()
{
	int i;
	int stg;
	int flg;
	int se;
	int pos_t;
	char* pos_p;
	Event_List* el;
	float pos_v[4];
	short close_se;
	short reset_stage_connect[2][12];
	// Line 1704, Address: 0x1aa670, Func Offset: 0
	// Line 1729, Address: 0x1aa680, Func Offset: 0x10
	// Line 1731, Address: 0x1aa6a4, Func Offset: 0x34
	// Line 1732, Address: 0x1aa6c0, Func Offset: 0x50
	// Line 1733, Address: 0x1aa6cc, Func Offset: 0x5c
	// Line 1734, Address: 0x1aa6dc, Func Offset: 0x6c
	// Line 1735, Address: 0x1aa724, Func Offset: 0xb4
	// Line 1736, Address: 0x1aa734, Func Offset: 0xc4
	// Line 1737, Address: 0x1aa754, Func Offset: 0xe4
	// Line 1740, Address: 0x1aa760, Func Offset: 0xf0
	// Line 1741, Address: 0x1aa778, Func Offset: 0x108
	// Line 1742, Address: 0x1aa798, Func Offset: 0x128
	// Line 1743, Address: 0x1aa7a8, Func Offset: 0x138
	// Line 1744, Address: 0x1aa7e0, Func Offset: 0x170
	// Line 1745, Address: 0x1aa7f8, Func Offset: 0x188
	// Line 1746, Address: 0x1aa818, Func Offset: 0x1a8
	// Line 1747, Address: 0x1aa824, Func Offset: 0x1b4
	// Line 1748, Address: 0x1aa83c, Func Offset: 0x1cc
	// Line 1749, Address: 0x1aa85c, Func Offset: 0x1ec
	// Line 1750, Address: 0x1aa870, Func Offset: 0x200
	// Line 1751, Address: 0x1aa8a4, Func Offset: 0x234
	// Line 1752, Address: 0x1aa8b4, Func Offset: 0x244
	// Line 1753, Address: 0x1aa8bc, Func Offset: 0x24c
	// Line 1754, Address: 0x1aa8c8, Func Offset: 0x258
	// Line 1758, Address: 0x1aa910, Func Offset: 0x2a0
	// Line 1759, Address: 0x1aa928, Func Offset: 0x2b8
	// Line 1760, Address: 0x1aa94c, Func Offset: 0x2dc
	// Line 1761, Address: 0x1aa964, Func Offset: 0x2f4
	// Line 1762, Address: 0x1aa98c, Func Offset: 0x31c
	// Line 1763, Address: 0x1aa9c0, Func Offset: 0x350
	// Line 1764, Address: 0x1aa9f4, Func Offset: 0x384
	// Line 1765, Address: 0x1aaa0c, Func Offset: 0x39c
	// Line 1766, Address: 0x1aaa20, Func Offset: 0x3b0
	// Line 1767, Address: 0x1aaa3c, Func Offset: 0x3cc
	// Line 1768, Address: 0x1aaa4c, Func Offset: 0x3dc
	// Line 1770, Address: 0x1aaa54, Func Offset: 0x3e4
	// Line 1771, Address: 0x1aaa78, Func Offset: 0x408
	// Line 1772, Address: 0x1aaa8c, Func Offset: 0x41c
	// Line 1773, Address: 0x1aaa9c, Func Offset: 0x42c
	// Line 1774, Address: 0x1aaab0, Func Offset: 0x440
	// Line 1775, Address: 0x1aaad4, Func Offset: 0x464
	// Line 1776, Address: 0x1aaadc, Func Offset: 0x46c
	// Line 1779, Address: 0x1aaaf0, Func Offset: 0x480
	// Line 1780, Address: 0x1aaaf4, Func Offset: 0x484
	// Func End, Address: 0x1aab0c, Func Offset: 0x49c
}

// 
// Start address: 0x1aab10
int EventExecSave()
{
	Event_List* el;
	// Line 1790, Address: 0x1aab10, Func Offset: 0
	// Line 1793, Address: 0x1aab18, Func Offset: 0x8
	// Line 1795, Address: 0x1aab54, Func Offset: 0x44
	// Line 1796, Address: 0x1aab64, Func Offset: 0x54
	// Line 1798, Address: 0x1aaba0, Func Offset: 0x90
	// Line 1799, Address: 0x1aabb4, Func Offset: 0xa4
	// Line 1801, Address: 0x1aabd0, Func Offset: 0xc0
	// Line 1804, Address: 0x1aabd8, Func Offset: 0xc8
	// Line 1805, Address: 0x1aabfc, Func Offset: 0xec
	// Line 1806, Address: 0x1aac04, Func Offset: 0xf4
	// Line 1808, Address: 0x1aac38, Func Offset: 0x128
	// Line 1809, Address: 0x1aac4c, Func Offset: 0x13c
	// Line 1811, Address: 0x1aac68, Func Offset: 0x158
	// Line 1814, Address: 0x1aac70, Func Offset: 0x160
	// Line 1815, Address: 0x1aac80, Func Offset: 0x170
	// Line 1816, Address: 0x1aac9c, Func Offset: 0x18c
	// Line 1817, Address: 0x1aacb4, Func Offset: 0x1a4
	// Line 1818, Address: 0x1aaccc, Func Offset: 0x1bc
	// Line 1819, Address: 0x1aad00, Func Offset: 0x1f0
	// Line 1820, Address: 0x1aad1c, Func Offset: 0x20c
	// Line 1823, Address: 0x1aad24, Func Offset: 0x214
	// Line 1824, Address: 0x1aad34, Func Offset: 0x224
	// Line 1825, Address: 0x1aad48, Func Offset: 0x238
	// Line 1827, Address: 0x1aad54, Func Offset: 0x244
	// Line 1828, Address: 0x1aad58, Func Offset: 0x248
	// Func End, Address: 0x1aad68, Func Offset: 0x258
}

// 
// Start address: 0x1aad70
int LightSpotOnOffCheck()
{
	// Line 1837, Address: 0x1aad70, Func Offset: 0
	// Line 1838, Address: 0x1aad94, Func Offset: 0x24
	// Line 1839, Address: 0x1aadb0, Func Offset: 0x40
	// Line 1842, Address: 0x1aadc8, Func Offset: 0x58
	// Func End, Address: 0x1aadd0, Func Offset: 0x60
}

// 
// Start address: 0x1aadd0
void LightSpotOnOffSet()
{
	// Line 1849, Address: 0x1aadd0, Func Offset: 0
	// Line 1850, Address: 0x1aadd8, Func Offset: 0x8
	// Line 1852, Address: 0x1aae08, Func Offset: 0x38
	// Line 1853, Address: 0x1aae28, Func Offset: 0x58
	// Line 1854, Address: 0x1aae30, Func Offset: 0x60
	// Func End, Address: 0x1aae40, Func Offset: 0x70
}

// 
// Start address: 0x1aae40
int EventExecChizuFail()
{
	// Line 1859, Address: 0x1aae40, Func Offset: 0
	// Line 1860, Address: 0x1aae48, Func Offset: 0x8
	// Line 1861, Address: 0x1aae58, Func Offset: 0x18
	// Line 1862, Address: 0x1aae6c, Func Offset: 0x2c
	// Line 1863, Address: 0x1aae80, Func Offset: 0x40
	// Line 1867, Address: 0x1aae9c, Func Offset: 0x5c
	// Line 1868, Address: 0x1aaec0, Func Offset: 0x80
	// Line 1869, Address: 0x1aaec8, Func Offset: 0x88
	// Line 1870, Address: 0x1aaedc, Func Offset: 0x9c
	// Line 1872, Address: 0x1aaee8, Func Offset: 0xa8
	// Line 1873, Address: 0x1aaeec, Func Offset: 0xac
	// Func End, Address: 0x1aaefc, Func Offset: 0xbc
}

// 
// Start address: 0x1aaf00
int EventProgressCheck()
{
	int room;
	// Line 1881, Address: 0x1aaf00, Func Offset: 0
	// Line 1885, Address: 0x1aaf08, Func Offset: 0x8
	// Line 1887, Address: 0x1aaf3c, Func Offset: 0x3c
	// Line 1890, Address: 0x1aaf44, Func Offset: 0x44
	// Line 1892, Address: 0x1aaf70, Func Offset: 0x70
	// Line 1894, Address: 0x1aaf7c, Func Offset: 0x7c
	// Line 1897, Address: 0x1aafe0, Func Offset: 0xe0
	// Line 1900, Address: 0x1aafec, Func Offset: 0xec
	// Line 1902, Address: 0x1ab010, Func Offset: 0x110
	// Line 1905, Address: 0x1ab01c, Func Offset: 0x11c
	// Line 1907, Address: 0x1ab044, Func Offset: 0x144
	// Line 1910, Address: 0x1ab050, Func Offset: 0x150
	// Line 1911, Address: 0x1ab064, Func Offset: 0x164
	// Line 1914, Address: 0x1ab070, Func Offset: 0x170
	// Line 1916, Address: 0x1ab094, Func Offset: 0x194
	// Line 1919, Address: 0x1ab0a0, Func Offset: 0x1a0
	// Line 1921, Address: 0x1ab0c8, Func Offset: 0x1c8
	// Line 1924, Address: 0x1ab0d4, Func Offset: 0x1d4
	// Line 1927, Address: 0x1ab100, Func Offset: 0x200
	// Line 1930, Address: 0x1ab10c, Func Offset: 0x20c
	// Line 1933, Address: 0x1ab140, Func Offset: 0x240
	// Line 1936, Address: 0x1ab14c, Func Offset: 0x24c
	// Line 1938, Address: 0x1ab174, Func Offset: 0x274
	// Line 1941, Address: 0x1ab180, Func Offset: 0x280
	// Line 1942, Address: 0x1ab184, Func Offset: 0x284
	// Func End, Address: 0x1ab194, Func Offset: 0x294
}

// 
// Start address: 0x1ab1a0
int EventItemConditionCheck(int level, int flag)
{
	// Line 1949, Address: 0x1ab1a0, Func Offset: 0
	// Line 1951, Address: 0x1ab1d4, Func Offset: 0x34
	// Line 1954, Address: 0x1ab1fc, Func Offset: 0x5c
	// Line 1957, Address: 0x1ab228, Func Offset: 0x88
	// Line 1962, Address: 0x1ab250, Func Offset: 0xb0
	// Line 1964, Address: 0x1ab27c, Func Offset: 0xdc
	// Line 1967, Address: 0x1ab2a0, Func Offset: 0x100
	// Line 1970, Address: 0x1ab2c4, Func Offset: 0x124
	// Line 1973, Address: 0x1ab2e8, Func Offset: 0x148
	// Line 1974, Address: 0x1ab2ec, Func Offset: 0x14c
	// Func End, Address: 0x1ab2f4, Func Offset: 0x154
}

// 
// Start address: 0x1ab300
void RadioNoise()
{
	int k;
	int j;
	int i;
	int pan[3];
	float work;
	float enemy[3];
	float track[3];
	float volume;
	SubCharacter* scp;
	EnLOCAL_DATA* near[3];
	EnLOCAL_DATA* enp;
	float pos[4];
	float enemy_track[4][16];
	// Line 1981, Address: 0x1ab300, Func Offset: 0
	// Line 2011, Address: 0x1ab318, Func Offset: 0x18
	// Line 2017, Address: 0x1ab374, Func Offset: 0x74
	// Line 2018, Address: 0x1ab384, Func Offset: 0x84
	// Line 2019, Address: 0x1ab39c, Func Offset: 0x9c
	// Line 2021, Address: 0x1ab3a4, Func Offset: 0xa4
	// Line 2024, Address: 0x1ab3ac, Func Offset: 0xac
	// Line 2025, Address: 0x1ab3bc, Func Offset: 0xbc
	// Line 2026, Address: 0x1ab3d4, Func Offset: 0xd4
	// Line 2027, Address: 0x1ab404, Func Offset: 0x104
	// Line 2028, Address: 0x1ab40c, Func Offset: 0x10c
	// Line 2031, Address: 0x1ab418, Func Offset: 0x118
	// Line 2032, Address: 0x1ab42c, Func Offset: 0x12c
	// Line 2033, Address: 0x1ab458, Func Offset: 0x158
	// Line 2034, Address: 0x1ab46c, Func Offset: 0x16c
	// Line 2035, Address: 0x1ab488, Func Offset: 0x188
	// Line 2037, Address: 0x1ab4a4, Func Offset: 0x1a4
	// Line 2038, Address: 0x1ab4b0, Func Offset: 0x1b0
	// Line 2039, Address: 0x1ab4c4, Func Offset: 0x1c4
	// Line 2040, Address: 0x1ab4ec, Func Offset: 0x1ec
	// Line 2041, Address: 0x1ab504, Func Offset: 0x204
	// Line 2042, Address: 0x1ab528, Func Offset: 0x228
	// Line 2044, Address: 0x1ab53c, Func Offset: 0x23c
	// Line 2047, Address: 0x1ab548, Func Offset: 0x248
	// Line 2048, Address: 0x1ab5b4, Func Offset: 0x2b4
	// Line 2049, Address: 0x1ab5c4, Func Offset: 0x2c4
	// Line 2051, Address: 0x1ab5d8, Func Offset: 0x2d8
	// Line 2052, Address: 0x1ab5e4, Func Offset: 0x2e4
	// Line 2053, Address: 0x1ab5fc, Func Offset: 0x2fc
	// Line 2055, Address: 0x1ab608, Func Offset: 0x308
	// Line 2056, Address: 0x1ab620, Func Offset: 0x320
	// Line 2057, Address: 0x1ab638, Func Offset: 0x338
	// Line 2059, Address: 0x1ab640, Func Offset: 0x340
	// Line 2060, Address: 0x1ab64c, Func Offset: 0x34c
	// Line 2061, Address: 0x1ab664, Func Offset: 0x364
	// Line 2062, Address: 0x1ab684, Func Offset: 0x384
	// Line 2064, Address: 0x1ab6c8, Func Offset: 0x3c8
	// Line 2065, Address: 0x1ab6f0, Func Offset: 0x3f0
	// Line 2067, Address: 0x1ab734, Func Offset: 0x434
	// Line 2068, Address: 0x1ab738, Func Offset: 0x438
	// Line 2069, Address: 0x1ab74c, Func Offset: 0x44c
	// Line 2071, Address: 0x1ab758, Func Offset: 0x458
	// Line 2072, Address: 0x1ab794, Func Offset: 0x494
	// Line 2073, Address: 0x1ab7a4, Func Offset: 0x4a4
	// Line 2075, Address: 0x1ab7ac, Func Offset: 0x4ac
	// Line 2076, Address: 0x1ab7d4, Func Offset: 0x4d4
	// Line 2077, Address: 0x1ab7e0, Func Offset: 0x4e0
	// Line 2078, Address: 0x1ab7f8, Func Offset: 0x4f8
	// Line 2079, Address: 0x1ab804, Func Offset: 0x504
	// Line 2080, Address: 0x1ab828, Func Offset: 0x528
	// Line 2081, Address: 0x1ab844, Func Offset: 0x544
	// Line 2082, Address: 0x1ab850, Func Offset: 0x550
	// Line 2083, Address: 0x1ab880, Func Offset: 0x580
	// Line 2084, Address: 0x1ab8ac, Func Offset: 0x5ac
	// Line 2086, Address: 0x1ab8b4, Func Offset: 0x5b4
	// Line 2087, Address: 0x1ab8c8, Func Offset: 0x5c8
	// Line 2088, Address: 0x1ab8e0, Func Offset: 0x5e0
	// Line 2090, Address: 0x1ab8f4, Func Offset: 0x5f4
	// Line 2091, Address: 0x1ab900, Func Offset: 0x600
	// Line 2092, Address: 0x1ab914, Func Offset: 0x614
	// Line 2094, Address: 0x1ab96c, Func Offset: 0x66c
	// Line 2095, Address: 0x1ab974, Func Offset: 0x674
	// Line 2096, Address: 0x1ab97c, Func Offset: 0x67c
	// Line 2097, Address: 0x1ab984, Func Offset: 0x684
	// Line 2098, Address: 0x1ab98c, Func Offset: 0x68c
	// Line 2099, Address: 0x1ab990, Func Offset: 0x690
	// Line 2100, Address: 0x1ab9a8, Func Offset: 0x6a8
	// Line 2101, Address: 0x1ab9b0, Func Offset: 0x6b0
	// Line 2102, Address: 0x1ab9b4, Func Offset: 0x6b4
	// Line 2104, Address: 0x1ab9b8, Func Offset: 0x6b8
	// Line 2106, Address: 0x1ab9cc, Func Offset: 0x6cc
	// Line 2108, Address: 0x1ab9d8, Func Offset: 0x6d8
	// Line 2109, Address: 0x1ab9e4, Func Offset: 0x6e4
	// Line 2111, Address: 0x1aba2c, Func Offset: 0x72c
	// Line 2112, Address: 0x1aba30, Func Offset: 0x730
	// Line 2114, Address: 0x1aba44, Func Offset: 0x744
	// Line 2116, Address: 0x1aba90, Func Offset: 0x790
	// Line 2117, Address: 0x1abab8, Func Offset: 0x7b8
	// Line 2119, Address: 0x1abad8, Func Offset: 0x7d8
	// Line 2120, Address: 0x1abafc, Func Offset: 0x7fc
	// Line 2122, Address: 0x1abb40, Func Offset: 0x840
	// Line 2123, Address: 0x1abb68, Func Offset: 0x868
	// Line 2125, Address: 0x1abbac, Func Offset: 0x8ac
	// Line 2127, Address: 0x1abbb0, Func Offset: 0x8b0
	// Line 2128, Address: 0x1abbbc, Func Offset: 0x8bc
	// Line 2130, Address: 0x1abbfc, Func Offset: 0x8fc
	// Line 2133, Address: 0x1abc6c, Func Offset: 0x96c
	// Line 2134, Address: 0x1abc94, Func Offset: 0x994
	// Line 2136, Address: 0x1abcb8, Func Offset: 0x9b8
	// Line 2137, Address: 0x1abcdc, Func Offset: 0x9dc
	// Line 2139, Address: 0x1abd20, Func Offset: 0xa20
	// Line 2140, Address: 0x1abd48, Func Offset: 0xa48
	// Line 2142, Address: 0x1abd8c, Func Offset: 0xa8c
	// Line 2144, Address: 0x1abd90, Func Offset: 0xa90
	// Line 2146, Address: 0x1abda4, Func Offset: 0xaa4
	// Line 2147, Address: 0x1abdc4, Func Offset: 0xac4
	// Line 2148, Address: 0x1abdd4, Func Offset: 0xad4
	// Line 2149, Address: 0x1abdf0, Func Offset: 0xaf0
	// Line 2151, Address: 0x1abdf8, Func Offset: 0xaf8
	// Line 2152, Address: 0x1abe10, Func Offset: 0xb10
	// Line 2153, Address: 0x1abe38, Func Offset: 0xb38
	// Line 2154, Address: 0x1abe48, Func Offset: 0xb48
	// Line 2156, Address: 0x1abe68, Func Offset: 0xb68
	// Line 2160, Address: 0x1abe74, Func Offset: 0xb74
	// Line 2161, Address: 0x1abf14, Func Offset: 0xc14
	// Line 2162, Address: 0x1abf24, Func Offset: 0xc24
	// Line 2172, Address: 0x1abf28, Func Offset: 0xc28
	// Func End, Address: 0x1abf48, Func Offset: 0xc48
}

