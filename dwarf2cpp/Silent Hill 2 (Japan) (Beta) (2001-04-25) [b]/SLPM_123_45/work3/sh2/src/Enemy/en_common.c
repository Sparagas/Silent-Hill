typedef struct _AnimeInfo;
typedef struct _CL_VHIT_WALL;
typedef struct EnLOCAL_DATA;
typedef struct PAD_3D;
typedef struct shBattleInfo;
typedef struct _CL_VHIT_CHARA;
typedef struct SubCharacter;
typedef struct _CL_HITPOLY_HEAD;
typedef struct SubObject;
typedef struct _CL_VHIT_RESULT;
typedef struct EnPATH_DATA;
typedef union _anon0;
typedef struct PAD_2D;
typedef struct EnCOMMUNICATION;
typedef struct PAD_INFO;
typedef struct Item;
typedef struct EnAMBUSH_DATA;
typedef struct _anon1;
typedef struct _anon2;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct EnONI_DATA;
typedef struct EnMKN_DATA;
typedef struct _anon3;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct EnANIME_DATA;
typedef struct _anon4;
typedef struct Model_List;
typedef struct EnIKE_DATA;
typedef struct shPlayerWork;
typedef struct EnRED_DATA;
typedef struct shSkelton;
typedef struct FOG_OBJ_DATA;
typedef struct _anon5;
typedef struct Playing_Info;
typedef struct EnSKELETON_DATA;
typedef struct shBattleFight;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct shBattleShot;
typedef struct EnNSE_DATA;
typedef struct shBattleArea;
typedef struct _anon6;
typedef struct EnEDB_DATA;
typedef struct EnLOCAL_WORK;
typedef struct EnSCU_DATA;
typedef struct EnPAP_DATA;
typedef struct EnTYU_DATA;
typedef struct shAttackInfo;
typedef struct EnBOS_DATA;
typedef union _anon7;
typedef struct _VbWVSMATRIX;

typedef void(*type_5)(SubCharacter*);
typedef void(*type_7)(SubCharacter*);
typedef void(*type_20)(EnLOCAL_DATA*);
typedef void(*type_25)(SubCharacter*);
typedef void(*type_26)();
typedef int(*type_27)(SubCharacter*, int, int);
typedef void(*type_30)(SubCharacter*);
typedef int(*type_31)();
typedef void(*type_32)(SubCharacter*);
typedef void(*type_44)(EnLOCAL_DATA*);

typedef unsigned char type_0[4];
typedef unsigned char type_1[4];
typedef unsigned char type_2[10];
typedef PAD_INFO type_3[10];
typedef char type_4[2];
typedef unsigned char type_6[2];
typedef unsigned char type_8[2];
typedef unsigned int type_9[2];
typedef unsigned short type_10[11];
typedef unsigned char type_11[13];
typedef unsigned short type_12[3];
typedef float type_13[4][2];
typedef char type_14[11];
typedef int type_15[2];
typedef unsigned char type_16[34];
typedef float type_17[4];
typedef float type_18[4][4];
typedef float type_19[4][2];
typedef void(*type_21)(EnLOCAL_DATA*)[10];
typedef EnSKELETON_DATA type_22[11];
typedef unsigned char type_23[2];
typedef unsigned char type_24[10];
typedef shAttackInfo type_28[46];
typedef int(*type_29)(SubCharacter*, int, int)[11];
typedef EnLOCAL_DATA type_33[64];
typedef unsigned char type_34[4];
typedef EnCOMMUNICATION type_35[8];
typedef float type_36[4];
typedef char type_37[3];
typedef float type_38[4];
typedef float type_39[4][4];
typedef float type_40[64];
typedef float type_41[4];
typedef int type_42[64];
typedef char type_43[11];
typedef void(*type_45)(EnLOCAL_DATA*)[10];

struct _AnimeInfo
{
	unsigned short name;
	unsigned short frame;
	short speed;
	unsigned short start;
	unsigned short end;
	unsigned char loop;
	unsigned char pad;
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
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
	char anim;
	unsigned char anim_loop;
	char hoge[2];
	unsigned short flag;
	short anim_s;
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
	float size;
	float new_size;
	float tall;
	float new_tall;
	float center_y;
	float new_center;
	float eye_y;
	float new_eye;
	float p_dist;
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
		EnBOS_DATA bos;
	};
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

struct shBattleInfo
{
	float pos[4];
	float vec[4];
	unsigned short id;
	unsigned short kind;
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
	_anon1 pos;
	_anon1 rot;
	_anon1 pos_spd;
	_anon1 rot_spd;
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
	_anon1 b_pos;
	_anon1 b_rot;
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

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
};

struct SubObject
{
	unsigned int status;
	unsigned int sub_status;
	unsigned int sub_st;
	short kind;
	short id;
	unsigned int step;
	_anon1 pos;
	_anon1 rot;
	_anon1 pos_spd;
	_anon1 rot_spd;
	_anon4 mat;
	void(*function)(SubCharacter*);
	void(*effecter_function)(SubCharacter*);
	SubObject* pre;
	SubObject* next;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon0 hobj;
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

union _anon0
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

struct EnCOMMUNICATION
{
	float pos[4];
	int kind;
	int type;
	int time;
	float dist;
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

struct EnAMBUSH_DATA
{
	short pl_x_min;
	short pl_z_min;
	short pl_x_max;
	short pl_z_max;
	short pos_x;
	short pos_z;
	float dir;
};

struct _anon1
{
	float x;
	float y;
	float z;
	float w;
};

struct _anon2
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
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
	JMS_ST_L_STEP,
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

struct EnONI_DATA
{
	char id;
	short timer2;
	void* other;
};

struct EnMKN_DATA
{
	float stpos[4];
	float target[4];
	short frame;
};

struct _anon3
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
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

struct EnANIME_DATA
{
	unsigned short Anime;
	unsigned char Loop;
};

struct _anon4
{
	float d[4][4];
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

struct EnIKE_DATA
{
	float handpos[4];
	char direc;
};

struct shPlayerWork
{
	SubCharacter* player;
	_anon1 dist_rot;
	_anon1 dist_pos;
	_anon1 pos;
	_anon1 rot;
	float rot_y;
	float inner_to_wall;
	float dist_to_wall;
	float dir_tgt_2d;
	float dir_now_2d;
	unsigned char map_mode;
	unsigned char step;
	unsigned char sub_step;
	unsigned short timer;
	unsigned short timer2;
	unsigned char allbody_now;
	_JAMES_UPPER_STATUS upper_now;
	_JAMES_LOWER_STATUS lower_now;
	unsigned char allbody_prev;
	_JAMES_UPPER_STATUS upper_prev;
	_JAMES_LOWER_STATUS lower_prev;
	unsigned char attack_now;
	unsigned char attack_prev;
	unsigned int upper_st_flg;
	unsigned int lower_st_flg;
	unsigned int u_anime_st_flg;
	unsigned int l_anime_st_flg;
	unsigned int anime_pause;
	unsigned int move_st_flg;
	unsigned int attack_st_flg;
	unsigned int damage_st_flg;
	float light_pos[4];
	float light_vec[4];
	float light_vec_neck[4];
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
	unsigned char se_upper[4];
	unsigned char se_foot[4];
	unsigned char d_shock;
	PAD_INFO pad[10];
	unsigned char ctrl_unit;
	unsigned char ctrl_inputing;
	unsigned char cfg_hold;
	unsigned char cfg_lock;
	unsigned char cfg_move;
	int event_anime;
	_anon1 tgt_body_angle;
	_anon1 tgt_neck_angle;
	_anon1 tgt_arms_angle;
	unsigned char motion_no;
	unsigned char hold_chg[2];
	unsigned char hold_loop[2];
	SubCharacter* target;
	SubCharacter* look_tgt;
	SubObject* look_obj;
	float non_input;
	float running_time;
	float muteki_time;
	float csaw_time;
	float hp_recover;
	int tired;
	int tired_max;
	int spirit;
	unsigned int game_st_flg;
	SubCharacter* enemy_liedown;
	unsigned char enemy_around;
	unsigned char enemy_atk_area;
	unsigned char enemy_near;
	unsigned char light_on;
	unsigned char radio_on;
	unsigned char lock_on;
	unsigned char running;
	unsigned char cannot_run;
	unsigned char fall_type;
	unsigned char reload;
	unsigned char weapon;
	unsigned char act_with_wep;
	unsigned char shoot_val;
	unsigned char reload_val;
	unsigned char atk_type;
	unsigned char atk_reserve[2];
	unsigned char attack_ok;
	char hold_type;
	unsigned char dead;
	unsigned char no_damage;
	unsigned char atk_count;
	unsigned short damage_no;
	unsigned short attack_no;
};

struct EnRED_DATA
{
	int dummy;
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon4 src_m;
	_anon1 src_t;
	_anon4 des_m;
	_anon1 des_t;
	_anon1 axis;
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

struct FOG_OBJ_DATA
{
	float pos[4];
	float mv[4];
	int type;
	float rer;
	unsigned long id;
};

struct _anon5
{
	short kind;
	short id;
	int pos_x;
	int pos_z;
	short pos_y;
	short rot_y;
	short status;
	short condition;
};

struct Playing_Info
{
	unsigned char stage;
	unsigned char enemy_off;
	unsigned char memo_select;
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
};

struct EnSKELETON_DATA
{
	short num1;
	short num2;
	float rate;
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
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
	JMS_ST_U_STEP,
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

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct EnNSE_DATA
{
	float speed;
	float tspeed;
	char avoid;
};

struct shBattleArea
{
	float center;
	float radius;
};

struct _anon6
{
	_anon2* ev_list;
	unsigned char* ev_pos;
	int(*ev_prog)();
	_anon3* gi_list;
	Model_List* mdl_list;
	_anon5* en_list;
	void(*stage_init)();
	void(*room_init)();
	void(*alltime_func)();
	int glb_crd;
	int reserve_05;
	int reserve_06;
	int reserve_07;
	int reserve_08;
	int reserve_09;
	int reserve_10;
	int reserve_11;
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
};

struct EnLOCAL_WORK
{
	EnLOCAL_DATA Data[64];
	EnCOMMUNICATION Communication[8];
	int CommunicationNum;
	EnLOCAL_DATA* This;
	_CL_VHIT_RESULT HitResult;
	int Max3DSounds;
	EnLOCAL_DATA* view_data;
	short view_x;
	short view_y;
	float fps;
	float spf;
	unsigned int dbflag;
};

struct EnSCU_DATA
{
	float stpos[4];
	float target[4];
	EnAMBUSH_DATA* ambush;
	int count;
};

struct EnPAP_DATA
{
	float target[4];
};

struct EnTYU_DATA
{
	float point[4];
	EnCOMMUNICATION* tcomm;
};

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon7 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

struct EnBOS_DATA
{
	int dummy;
};

union _anon7
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _VbWVSMATRIX
{
	float wvm[4][4];
	float vsm[4][4];
	float wsm[4][4];
};

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
int(*EnAnimeSetFunc)(SubCharacter*, int, int)[11];
EnSKELETON_DATA EnSkeletonData[11];
char EnSkeletonDataC[11];
EnLOCAL_WORK enLocalWork;
float dtf;
shPlayerWork sh2jms;
Item item;
_anon6* stage;
Playing_Info playing;
_VbWVSMATRIX VbWvsMatrix;
int dt;
void(*enFlyingFunc)(SubCharacter*);

void enInitEnemy();
void enExecTask();
EnLOCAL_DATA* enEntryEnemy(int kind);
void enInitData(EnLOCAL_DATA* dp, SubCharacter* scp);
void enDeleteEnemy(EnLOCAL_DATA* dp);
void enDummyCtrl();
int enGetWorldCondition();
int enGetPlace();
int enGetEventPlace();
int enGetMode();
int enGetPadPress(int p);
int enGetPadTrigger(int p);
void enSetBattleTarget(EnLOCAL_DATA* dp, unsigned int type);
void enSetHP(EnLOCAL_DATA* dp, float hp, float endurance);
float enReduceHP(EnLOCAL_DATA* dp);
float enAddHP(EnLOCAL_DATA* dp, float n);
float enAddEndurance(EnLOCAL_DATA* dp, float n);
int enCheckDamage(EnLOCAL_DATA* dp);
void enResetDamage(EnLOCAL_DATA* dp);
void enSetHitBack(EnLOCAL_DATA* dp);
int enCheckInstantDeath(EnLOCAL_DATA* dp);
void enSetSize(EnLOCAL_DATA* dp, float size, float tall, float center, float eye);
void enSetNewSize(EnLOCAL_DATA* dp, float size, float tall, float center, float eye);
void enSetSeeLightStatus(EnLOCAL_DATA* dp, float center, float radius);
int enCheckSeeLight(EnLOCAL_DATA* dp);
int enCheckAimedByHuman(EnLOCAL_DATA* dp);
int enCheckFinishedByHuman(EnLOCAL_DATA* dp);
int enCheckNoDamageHuman();
void enAttackStart(EnLOCAL_DATA* dp);
int enAttackCheck(EnLOCAL_DATA* dp, int ID);
int enCheckSleepIn(EnLOCAL_DATA* dp);
int enCheckSleepOut(EnLOCAL_DATA* dp);
void enSleepIn(EnLOCAL_DATA* dp);
void enSleepOut(EnLOCAL_DATA* dp);
float* enGetPlayerPos(EnLOCAL_DATA* dp);
float enGetPlayerDistance(EnLOCAL_DATA* dp);
float enGetPlayerDirection(EnLOCAL_DATA* dp);
int enGetPlayerWeapon();
float enGetPlayerAngle(EnLOCAL_DATA* dp);
int enCheckPlayerCondition(EnLOCAL_DATA* dp);
int enCheckPlayerLight();
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
float enCalcDirection(float* pa, float* pb);
float enCalcAngleDifference(float angle1, float angle2);
float enCalcSpeedRate(float angle, float* mpos, float* tpos);
int enCheckIntoScreen(EnLOCAL_DATA* dp);
SubCharacter* enGetNearCharacter(EnLOCAL_DATA* dp);
void enSetTimer(EnLOCAL_DATA* dp, int t);
int enReduceTimer(EnLOCAL_DATA* dp);
int enGetDT();
void enMoveAngle(EnPATH_DATA* p, float delta);
void enMoveAngleToPlayer(EnLOCAL_DATA* dp, float delta);
void enMoveExec(EnLOCAL_DATA* dp);
void enIKETrans(EnLOCAL_DATA* dp);
void enDyingExec(EnLOCAL_DATA* dp);
void enFlyingFunc();
void enInitPath(EnPATH_DATA* p, float angle);
int enSetPath(EnLOCAL_DATA* dp, float* target, float* pos);
float enCheckPath(EnLOCAL_DATA* dp, float* tpos, float* mpos);
float enCheckPath2(EnLOCAL_DATA* dp, float* tpos, float* mpos);
float enCheckHitEyes(EnLOCAL_DATA* dp, float* sp, float* ep);
void enGetSkeletonVector(float* vec, EnLOCAL_DATA* dp, int n);
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
void enSoundCall(int num, float vol, float* pos);
void enSoundCall3D(int num, float vol, float* pos);
EnCOMMUNICATION* enSetCommunication(int kind, int type, float* pos, float dist, int time);
EnCOMMUNICATION* enCommunicateTribe(int kind, float* pos);
void enEventDriven(int event);

// 
// Start address: 0x14c600
void enInitEnemy()
{
	// Line 125, Address: 0x14c600, Func Offset: 0
	// Line 128, Address: 0x14c608, Func Offset: 0x8
	// Line 133, Address: 0x14c61c, Func Offset: 0x1c
	// Line 134, Address: 0x14c628, Func Offset: 0x28
	// Line 135, Address: 0x14c644, Func Offset: 0x44
	// Line 136, Address: 0x14c654, Func Offset: 0x54
	// Func End, Address: 0x14c664, Func Offset: 0x64
}

// 
// Start address: 0x14c670
void enExecTask()
{
	EnCOMMUNICATION* cp;
	float d;
	float* p_pos;
	int n;
	int max2;
	int max;
	int j;
	int num[64];
	float dist[64];
	void(*enEnemyControlFunc)(EnLOCAL_DATA*)[10];
	EnLOCAL_DATA* dp;
	int i;
	// Line 141, Address: 0x14c670, Func Offset: 0
	// Line 145, Address: 0x14c680, Func Offset: 0x10
	// Line 158, Address: 0x14c6a4, Func Offset: 0x34
	// Line 159, Address: 0x14c6c0, Func Offset: 0x50
	// Line 168, Address: 0x14c6d0, Func Offset: 0x60
	// Line 169, Address: 0x14c6d8, Func Offset: 0x68
	// Line 170, Address: 0x14c6e4, Func Offset: 0x74
	// Line 171, Address: 0x14c6e8, Func Offset: 0x78
	// Line 172, Address: 0x14c6f4, Func Offset: 0x84
	// Line 173, Address: 0x14c720, Func Offset: 0xb0
	// Line 175, Address: 0x14c75c, Func Offset: 0xec
	// Line 176, Address: 0x14c768, Func Offset: 0xf8
	// Line 177, Address: 0x14c774, Func Offset: 0x104
	// Line 179, Address: 0x14c778, Func Offset: 0x108
	// Line 180, Address: 0x14c78c, Func Offset: 0x11c
	// Line 181, Address: 0x14c790, Func Offset: 0x120
	// Line 182, Address: 0x14c7b0, Func Offset: 0x140
	// Line 183, Address: 0x14c7bc, Func Offset: 0x14c
	// Line 184, Address: 0x14c7c8, Func Offset: 0x158
	// Line 185, Address: 0x14c7cc, Func Offset: 0x15c
	// Line 186, Address: 0x14c7d8, Func Offset: 0x168
	// Line 187, Address: 0x14c7f4, Func Offset: 0x184
	// Line 188, Address: 0x14c800, Func Offset: 0x190
	// Line 189, Address: 0x14c804, Func Offset: 0x194
	// Line 190, Address: 0x14c808, Func Offset: 0x198
	// Line 191, Address: 0x14c81c, Func Offset: 0x1ac
	// Line 192, Address: 0x14c854, Func Offset: 0x1e4
	// Line 193, Address: 0x14c86c, Func Offset: 0x1fc
	// Line 194, Address: 0x14c878, Func Offset: 0x208
	// Line 198, Address: 0x14c88c, Func Offset: 0x21c
	// Line 199, Address: 0x14c894, Func Offset: 0x224
	// Line 200, Address: 0x14c8a0, Func Offset: 0x230
	// Line 201, Address: 0x14c8cc, Func Offset: 0x25c
	// Line 202, Address: 0x14c8d4, Func Offset: 0x264
	// Line 203, Address: 0x14c8e0, Func Offset: 0x270
	// Line 204, Address: 0x14c8ec, Func Offset: 0x27c
	// Line 205, Address: 0x14c914, Func Offset: 0x2a4
	// Line 207, Address: 0x14c920, Func Offset: 0x2b0
	// Line 210, Address: 0x14c934, Func Offset: 0x2c4
	// Line 211, Address: 0x14c944, Func Offset: 0x2d4
	// Line 212, Address: 0x14c94c, Func Offset: 0x2dc
	// Line 213, Address: 0x14c958, Func Offset: 0x2e8
	// Line 214, Address: 0x14c984, Func Offset: 0x314
	// Line 215, Address: 0x14c988, Func Offset: 0x318
	// Line 216, Address: 0x14c99c, Func Offset: 0x32c
	// Line 217, Address: 0x14c9a0, Func Offset: 0x330
	// Line 218, Address: 0x14c9b4, Func Offset: 0x344
	// Line 219, Address: 0x14c9b8, Func Offset: 0x348
	// Func End, Address: 0x14c9d0, Func Offset: 0x360
}

// 
// Start address: 0x14c9d0
EnLOCAL_DATA* enEntryEnemy(int kind)
{
	int i;
	EnLOCAL_DATA* dp;
	// Line 227, Address: 0x14c9d0, Func Offset: 0
	// Line 232, Address: 0x14c9e0, Func Offset: 0x10
	// Line 233, Address: 0x14c9e4, Func Offset: 0x14
	// Line 234, Address: 0x14c9ec, Func Offset: 0x1c
	// Line 235, Address: 0x14c9f4, Func Offset: 0x24
	// Line 236, Address: 0x14ca10, Func Offset: 0x40
	// Line 237, Address: 0x14ca14, Func Offset: 0x44
	// Line 239, Address: 0x14ca24, Func Offset: 0x54
	// Line 240, Address: 0x14ca2c, Func Offset: 0x5c
	// Line 242, Address: 0x14ca30, Func Offset: 0x60
	// Line 243, Address: 0x14ca34, Func Offset: 0x64
	// Func End, Address: 0x14ca48, Func Offset: 0x78
}

// 
// Start address: 0x14ca50
void enInitData(EnLOCAL_DATA* dp, SubCharacter* scp)
{
	void(*enInitDataFunc)(EnLOCAL_DATA*)[10];
	int kind;
	// Line 250, Address: 0x14ca50, Func Offset: 0
	// Line 252, Address: 0x14ca64, Func Offset: 0x14
	// Line 265, Address: 0x14ca88, Func Offset: 0x38
	// Line 266, Address: 0x14caa8, Func Offset: 0x58
	// Line 267, Address: 0x14cab8, Func Offset: 0x68
	// Line 269, Address: 0x14caf4, Func Offset: 0xa4
	// Line 270, Address: 0x14cb00, Func Offset: 0xb0
	// Line 271, Address: 0x14cb10, Func Offset: 0xc0
	// Line 272, Address: 0x14cb18, Func Offset: 0xc8
	// Line 273, Address: 0x14cb24, Func Offset: 0xd4
	// Line 276, Address: 0x14cb40, Func Offset: 0xf0
	// Line 279, Address: 0x14cb58, Func Offset: 0x108
	// Line 282, Address: 0x14cb74, Func Offset: 0x124
	// Line 283, Address: 0x14cb84, Func Offset: 0x134
	// Func End, Address: 0x14cb98, Func Offset: 0x148
}

// 
// Start address: 0x14cba0
void enDeleteEnemy(EnLOCAL_DATA* dp)
{
	// Line 289, Address: 0x14cba0, Func Offset: 0
	// Line 290, Address: 0x14cba8, Func Offset: 0x8
	// Line 291, Address: 0x14cbbc, Func Offset: 0x1c
	// Func End, Address: 0x14cbc8, Func Offset: 0x28
}

// 
// Start address: 0x14cbd0
void enDummyCtrl()
{
	// Line 297, Address: 0x14cbd0, Func Offset: 0
	// Line 298, Address: 0x14cbd4, Func Offset: 0x4
	// Func End, Address: 0x14cbe0, Func Offset: 0x10
}

// 
// Start address: 0x14cbe0
int enGetWorldCondition()
{
	// Line 367, Address: 0x14cbe0, Func Offset: 0
	// Line 368, Address: 0x14cbe8, Func Offset: 0x8
	// Line 370, Address: 0x14cc04, Func Offset: 0x24
	// Line 372, Address: 0x14cc10, Func Offset: 0x30
	// Line 373, Address: 0x14cc2c, Func Offset: 0x4c
	// Line 375, Address: 0x14cc30, Func Offset: 0x50
	// Func End, Address: 0x14cc40, Func Offset: 0x60
}

// 
// Start address: 0x14cc40
int enGetPlace()
{
	int place;
	// Line 381, Address: 0x14cc40, Func Offset: 0
	// Line 382, Address: 0x14cc48, Func Offset: 0x8
	// Line 383, Address: 0x14cc4c, Func Offset: 0xc
	// Line 385, Address: 0x14cc9c, Func Offset: 0x5c
	// Line 386, Address: 0x14cca0, Func Offset: 0x60
	// Line 388, Address: 0x14cca8, Func Offset: 0x68
	// Line 389, Address: 0x14ccac, Func Offset: 0x6c
	// Line 391, Address: 0x14ccb4, Func Offset: 0x74
	// Line 392, Address: 0x14ccb8, Func Offset: 0x78
	// Line 395, Address: 0x14ccc0, Func Offset: 0x80
	// Line 398, Address: 0x14ccc4, Func Offset: 0x84
	// Line 399, Address: 0x14ccc8, Func Offset: 0x88
	// Func End, Address: 0x14ccd8, Func Offset: 0x98
}

// 
// Start address: 0x14cce0
int enGetEventPlace()
{
	// Line 405, Address: 0x14cce0, Func Offset: 0
	// Line 406, Address: 0x14cce8, Func Offset: 0x8
	// Line 408, Address: 0x14cd28, Func Offset: 0x48
	// Line 410, Address: 0x14cd34, Func Offset: 0x54
	// Line 412, Address: 0x14cd40, Func Offset: 0x60
	// Line 414, Address: 0x14cd4c, Func Offset: 0x6c
	// Line 416, Address: 0x14cd58, Func Offset: 0x78
	// Line 417, Address: 0x14cd5c, Func Offset: 0x7c
	// Func End, Address: 0x14cd6c, Func Offset: 0x8c
}

// 
// Start address: 0x14cd70
int enGetMode()
{
	// Line 424, Address: 0x14cd70, Func Offset: 0
	// Line 425, Address: 0x14cd7c, Func Offset: 0xc
	// Func End, Address: 0x14cd84, Func Offset: 0x14
}

// 
// Start address: 0x14cd90
int enGetPadPress(int p)
{
	// Line 432, Address: 0x14cd90, Func Offset: 0
	// Line 434, Address: 0x14cd9c, Func Offset: 0xc
	// Line 438, Address: 0x14cdac, Func Offset: 0x1c
	// Func End, Address: 0x14cdbc, Func Offset: 0x2c
}

// 
// Start address: 0x14cdc0
int enGetPadTrigger(int p)
{
	// Line 445, Address: 0x14cdc0, Func Offset: 0
	// Line 447, Address: 0x14cdcc, Func Offset: 0xc
	// Line 451, Address: 0x14cddc, Func Offset: 0x1c
	// Func End, Address: 0x14cdec, Func Offset: 0x2c
}

// 
// Start address: 0x14cdf0
void enSetBattleTarget(EnLOCAL_DATA* dp, unsigned int type)
{
	// Line 472, Address: 0x14cdf0, Func Offset: 0
	// Line 473, Address: 0x14ce00, Func Offset: 0x10
	// Line 474, Address: 0x14ce20, Func Offset: 0x30
	// Func End, Address: 0x14ce30, Func Offset: 0x40
}

// 
// Start address: 0x14ce30
void enSetHP(EnLOCAL_DATA* dp, float hp, float endurance)
{
	shBattleInfo* bi;
	// Line 482, Address: 0x14ce30, Func Offset: 0
	// Line 483, Address: 0x14ce44, Func Offset: 0x14
	// Line 484, Address: 0x14ce50, Func Offset: 0x20
	// Line 485, Address: 0x14ce5c, Func Offset: 0x2c
	// Line 486, Address: 0x14ce6c, Func Offset: 0x3c
	// Line 487, Address: 0x14ce80, Func Offset: 0x50
	// Line 488, Address: 0x14ce8c, Func Offset: 0x5c
	// Func End, Address: 0x14ce9c, Func Offset: 0x6c
}

// 
// Start address: 0x14cea0
float enReduceHP(EnLOCAL_DATA* dp)
{
	shBattleInfo* bi;
	// Line 495, Address: 0x14cea0, Func Offset: 0
	// Line 496, Address: 0x14ceac, Func Offset: 0xc
	// Line 497, Address: 0x14ceb8, Func Offset: 0x18
	// Line 498, Address: 0x14ceec, Func Offset: 0x4c
	// Line 499, Address: 0x14cf24, Func Offset: 0x84
	// Line 500, Address: 0x14cf30, Func Offset: 0x90
	// Line 501, Address: 0x14cf50, Func Offset: 0xb0
	// Line 502, Address: 0x14cf58, Func Offset: 0xb8
	// Func End, Address: 0x14cf68, Func Offset: 0xc8
}

// 
// Start address: 0x14cf70
float enAddHP(EnLOCAL_DATA* dp, float n)
{
	shBattleInfo* bi;
	// Line 510, Address: 0x14cf70, Func Offset: 0
	// Line 511, Address: 0x14cf80, Func Offset: 0x10
	// Line 512, Address: 0x14cf8c, Func Offset: 0x1c
	// Line 513, Address: 0x14cfb8, Func Offset: 0x48
	// Line 514, Address: 0x14cfe8, Func Offset: 0x78
	// Line 515, Address: 0x14d008, Func Offset: 0x98
	// Line 516, Address: 0x14d00c, Func Offset: 0x9c
	// Func End, Address: 0x14d01c, Func Offset: 0xac
}

// 
// Start address: 0x14d020
float enAddEndurance(EnLOCAL_DATA* dp, float n)
{
	float en;
	shBattleInfo* bi;
	// Line 524, Address: 0x14d020, Func Offset: 0
	// Line 525, Address: 0x14d030, Func Offset: 0x10
	// Line 526, Address: 0x14d03c, Func Offset: 0x1c
	// Line 527, Address: 0x14d050, Func Offset: 0x30
	// Line 528, Address: 0x14d078, Func Offset: 0x58
	// Line 529, Address: 0x14d098, Func Offset: 0x78
	// Line 530, Address: 0x14d0a4, Func Offset: 0x84
	// Func End, Address: 0x14d0b4, Func Offset: 0x94
}

// 
// Start address: 0x14d0c0
int enCheckDamage(EnLOCAL_DATA* dp)
{
	shBattleInfo* bi;
	// Line 537, Address: 0x14d0c0, Func Offset: 0
	// Line 538, Address: 0x14d0cc, Func Offset: 0xc
	// Line 539, Address: 0x14d0d8, Func Offset: 0x18
	// Line 540, Address: 0x14d100, Func Offset: 0x40
	// Line 544, Address: 0x14d168, Func Offset: 0xa8
	// Line 545, Address: 0x14d174, Func Offset: 0xb4
	// Line 546, Address: 0x14d180, Func Offset: 0xc0
	// Line 548, Address: 0x14d18c, Func Offset: 0xcc
	// Line 549, Address: 0x14d190, Func Offset: 0xd0
	// Func End, Address: 0x14d1a0, Func Offset: 0xe0
}

// 
// Start address: 0x14d1a0
void enResetDamage(EnLOCAL_DATA* dp)
{
	shBattleInfo* bi;
	// Line 555, Address: 0x14d1a0, Func Offset: 0
	// Line 556, Address: 0x14d1ac, Func Offset: 0xc
	// Line 557, Address: 0x14d1b8, Func Offset: 0x18
	// Line 558, Address: 0x14d1c4, Func Offset: 0x24
	// Line 559, Address: 0x14d1d0, Func Offset: 0x30
	// Func End, Address: 0x14d1e0, Func Offset: 0x40
}

// 
// Start address: 0x14d1e0
void enSetHitBack(EnLOCAL_DATA* dp)
{
	shBattleInfo* bi;
	float vec[4];
	// Line 565, Address: 0x14d1e0, Func Offset: 0
	// Line 567, Address: 0x14d1e4, Func Offset: 0x4
	// Line 568, Address: 0x14d1ec, Func Offset: 0xc
	// Line 569, Address: 0x14d214, Func Offset: 0x34
	// Line 570, Address: 0x14d21c, Func Offset: 0x3c
	// Line 571, Address: 0x14d224, Func Offset: 0x44
	// Line 572, Address: 0x14d238, Func Offset: 0x58
	// Line 573, Address: 0x14d244, Func Offset: 0x64
	// Func End, Address: 0x14d250, Func Offset: 0x70
}

// 
// Start address: 0x14d250
int enCheckInstantDeath(EnLOCAL_DATA* dp)
{
	shBattleInfo* bi;
	// Line 580, Address: 0x14d250, Func Offset: 0
	// Line 581, Address: 0x14d25c, Func Offset: 0xc
	// Line 583, Address: 0x14d268, Func Offset: 0x18
	// Line 584, Address: 0x14d290, Func Offset: 0x40
	// Line 586, Address: 0x14d29c, Func Offset: 0x4c
	// Line 587, Address: 0x14d2a0, Func Offset: 0x50
	// Func End, Address: 0x14d2b0, Func Offset: 0x60
}

// 
// Start address: 0x14d2b0
void enSetSize(EnLOCAL_DATA* dp, float size, float tall, float center, float eye)
{
	// Line 598, Address: 0x14d2b0, Func Offset: 0
	// Line 599, Address: 0x14d2c8, Func Offset: 0x18
	// Line 600, Address: 0x14d2dc, Func Offset: 0x2c
	// Line 601, Address: 0x14d2f0, Func Offset: 0x40
	// Line 602, Address: 0x14d304, Func Offset: 0x54
	// Line 603, Address: 0x14d318, Func Offset: 0x68
	// Func End, Address: 0x14d324, Func Offset: 0x74
}

// 
// Start address: 0x14d330
void enSetNewSize(EnLOCAL_DATA* dp, float size, float tall, float center, float eye)
{
	// Line 614, Address: 0x14d330, Func Offset: 0
	// Line 615, Address: 0x14d348, Func Offset: 0x18
	// Line 616, Address: 0x14d354, Func Offset: 0x24
	// Line 617, Address: 0x14d360, Func Offset: 0x30
	// Line 618, Address: 0x14d36c, Func Offset: 0x3c
	// Line 619, Address: 0x14d378, Func Offset: 0x48
	// Func End, Address: 0x14d384, Func Offset: 0x54
}

// 
// Start address: 0x14d390
void enSetSeeLightStatus(EnLOCAL_DATA* dp, float center, float radius)
{
	shBattleInfo* bi;
	// Line 627, Address: 0x14d390, Func Offset: 0
	// Line 628, Address: 0x14d3a4, Func Offset: 0x14
	// Line 629, Address: 0x14d3b0, Func Offset: 0x20
	// Line 630, Address: 0x14d3b8, Func Offset: 0x28
	// Line 631, Address: 0x14d3c0, Func Offset: 0x30
	// Line 632, Address: 0x14d3d0, Func Offset: 0x40
	// Func End, Address: 0x14d3e0, Func Offset: 0x50
}

// 
// Start address: 0x14d3e0
int enCheckSeeLight(EnLOCAL_DATA* dp)
{
	// Line 640, Address: 0x14d3e0, Func Offset: 0
	// Line 641, Address: 0x14d3ec, Func Offset: 0xc
	// Line 642, Address: 0x14d404, Func Offset: 0x24
	// Func End, Address: 0x14d414, Func Offset: 0x34
}

// 
// Start address: 0x14d420
int enCheckAimedByHuman(EnLOCAL_DATA* dp)
{
	// Line 648, Address: 0x14d420, Func Offset: 0
	// Line 649, Address: 0x14d42c, Func Offset: 0xc
	// Line 650, Address: 0x14d43c, Func Offset: 0x1c
	// Func End, Address: 0x14d44c, Func Offset: 0x2c
}

// 
// Start address: 0x14d450
int enCheckFinishedByHuman(EnLOCAL_DATA* dp)
{
	// Line 656, Address: 0x14d450, Func Offset: 0
	// Line 657, Address: 0x14d45c, Func Offset: 0xc
	// Line 658, Address: 0x14d46c, Func Offset: 0x1c
	// Func End, Address: 0x14d47c, Func Offset: 0x2c
}

// 
// Start address: 0x14d480
int enCheckNoDamageHuman()
{
	// Line 664, Address: 0x14d480, Func Offset: 0
	// Line 665, Address: 0x14d488, Func Offset: 0x8
	// Line 666, Address: 0x14d490, Func Offset: 0x10
	// Func End, Address: 0x14d4a0, Func Offset: 0x20
}

// 
// Start address: 0x14d4a0
void enAttackStart(EnLOCAL_DATA* dp)
{
	// Line 672, Address: 0x14d4a0, Func Offset: 0
	// Line 673, Address: 0x14d4ac, Func Offset: 0xc
	// Line 674, Address: 0x14d4bc, Func Offset: 0x1c
	// Line 675, Address: 0x14d4cc, Func Offset: 0x2c
	// Func End, Address: 0x14d4dc, Func Offset: 0x3c
}

// 
// Start address: 0x14d4e0
int enAttackCheck(EnLOCAL_DATA* dp, int ID)
{
	int result;
	// Line 683, Address: 0x14d4e0, Func Offset: 0
	// Line 685, Address: 0x14d4f4, Func Offset: 0x14
	// Line 686, Address: 0x14d518, Func Offset: 0x38
	// Line 687, Address: 0x14d524, Func Offset: 0x44
	// Line 688, Address: 0x14d52c, Func Offset: 0x4c
	// Line 689, Address: 0x14d53c, Func Offset: 0x5c
	// Line 692, Address: 0x14d548, Func Offset: 0x68
	// Line 695, Address: 0x14d55c, Func Offset: 0x7c
	// Line 697, Address: 0x14d574, Func Offset: 0x94
	// Line 698, Address: 0x14d578, Func Offset: 0x98
	// Func End, Address: 0x14d58c, Func Offset: 0xac
}

// 
// Start address: 0x14d590
int enCheckSleepIn(EnLOCAL_DATA* dp)
{
	// Line 705, Address: 0x14d590, Func Offset: 0
	// Line 706, Address: 0x14d598, Func Offset: 0x8
	// Line 707, Address: 0x14d5d8, Func Offset: 0x48
	// Line 709, Address: 0x14d5e4, Func Offset: 0x54
	// Line 710, Address: 0x14d5e8, Func Offset: 0x58
	// Func End, Address: 0x14d5f4, Func Offset: 0x64
}

// 
// Start address: 0x14d600
int enCheckSleepOut(EnLOCAL_DATA* dp)
{
	// Line 717, Address: 0x14d600, Func Offset: 0
	// Line 718, Address: 0x14d608, Func Offset: 0x8
	// Line 719, Address: 0x14d648, Func Offset: 0x48
	// Line 721, Address: 0x14d654, Func Offset: 0x54
	// Line 722, Address: 0x14d658, Func Offset: 0x58
	// Func End, Address: 0x14d664, Func Offset: 0x64
}

// 
// Start address: 0x14d670
void enSleepIn(EnLOCAL_DATA* dp)
{
	// Line 728, Address: 0x14d670, Func Offset: 0
	// Line 729, Address: 0x14d678, Func Offset: 0x8
	// Line 730, Address: 0x14d684, Func Offset: 0x14
	// Line 731, Address: 0x14d698, Func Offset: 0x28
	// Line 732, Address: 0x14d6ac, Func Offset: 0x3c
	// Func End, Address: 0x14d6b8, Func Offset: 0x48
}

// 
// Start address: 0x14d6c0
void enSleepOut(EnLOCAL_DATA* dp)
{
	// Line 738, Address: 0x14d6c0, Func Offset: 0
	// Line 739, Address: 0x14d6c8, Func Offset: 0x8
	// Line 740, Address: 0x14d6d4, Func Offset: 0x14
	// Line 741, Address: 0x14d6f0, Func Offset: 0x30
	// Func End, Address: 0x14d6fc, Func Offset: 0x3c
}

// 
// Start address: 0x14d700
float* enGetPlayerPos(EnLOCAL_DATA* dp)
{
	// Line 749, Address: 0x14d700, Func Offset: 0
	// Line 750, Address: 0x14d708, Func Offset: 0x8
	// Line 751, Address: 0x14d718, Func Offset: 0x18
	// Func End, Address: 0x14d724, Func Offset: 0x24
}

// 
// Start address: 0x14d730
float enGetPlayerDistance(EnLOCAL_DATA* dp)
{
	// Line 758, Address: 0x14d730, Func Offset: 0
	// Line 759, Address: 0x14d73c, Func Offset: 0xc
	// Line 760, Address: 0x14d770, Func Offset: 0x40
	// Func End, Address: 0x14d784, Func Offset: 0x54
}

// 
// Start address: 0x14d790
float enGetPlayerDirection(EnLOCAL_DATA* dp)
{
	float vec[4];
	// Line 767, Address: 0x14d790, Func Offset: 0
	// Line 769, Address: 0x14d79c, Func Offset: 0xc
	// Line 770, Address: 0x14d7c0, Func Offset: 0x30
	// Line 771, Address: 0x14d7cc, Func Offset: 0x3c
	// Func End, Address: 0x14d7e0, Func Offset: 0x50
}

// 
// Start address: 0x14d7e0
int enGetPlayerWeapon()
{
	// Line 788, Address: 0x14d7e0, Func Offset: 0
	// Line 789, Address: 0x14d7ec, Func Offset: 0xc
	// Func End, Address: 0x14d7f4, Func Offset: 0x14
}

// 
// Start address: 0x14d800
float enGetPlayerAngle(EnLOCAL_DATA* dp)
{
	// Line 796, Address: 0x14d800, Func Offset: 0
	// Line 797, Address: 0x14d808, Func Offset: 0x8
	// Line 798, Address: 0x14d818, Func Offset: 0x18
	// Func End, Address: 0x14d824, Func Offset: 0x24
}

// 
// Start address: 0x14d830
int enCheckPlayerCondition(EnLOCAL_DATA* dp)
{
	float a;
	int w;
	int r;
	// Line 807, Address: 0x14d830, Func Offset: 0
	// Line 808, Address: 0x14d844, Func Offset: 0x14
	// Line 812, Address: 0x14d848, Func Offset: 0x18
	// Line 814, Address: 0x14d85c, Func Offset: 0x2c
	// Line 815, Address: 0x14d868, Func Offset: 0x38
	// Line 816, Address: 0x14d88c, Func Offset: 0x5c
	// Line 819, Address: 0x14d890, Func Offset: 0x60
	// Line 820, Address: 0x14d8c8, Func Offset: 0x98
	// Line 821, Address: 0x14d8f0, Func Offset: 0xc0
	// Line 822, Address: 0x14d8f4, Func Offset: 0xc4
	// Func End, Address: 0x14d90c, Func Offset: 0xdc
}

// 
// Start address: 0x14d910
int enCheckPlayerLight()
{
	// Line 829, Address: 0x14d910, Func Offset: 0
	// Line 830, Address: 0x14d91c, Func Offset: 0xc
	// Func End, Address: 0x14d924, Func Offset: 0x14
}

// 
// Start address: 0x14d930
void enFlagSetMoved(EnLOCAL_DATA* dp)
{
	// Line 836, Address: 0x14d930, Func Offset: 0
	// Line 837, Address: 0x14d938, Func Offset: 0x8
	// Line 838, Address: 0x14d94c, Func Offset: 0x1c
	// Func End, Address: 0x14d958, Func Offset: 0x28
}

// 
// Start address: 0x14d960
void enFlagResetMoved(EnLOCAL_DATA* dp)
{
	// Line 844, Address: 0x14d960, Func Offset: 0
	// Line 845, Address: 0x14d968, Func Offset: 0x8
	// Line 846, Address: 0x14d980, Func Offset: 0x20
	// Func End, Address: 0x14d98c, Func Offset: 0x2c
}

// 
// Start address: 0x14d990
void enFlagSetLieDown(EnLOCAL_DATA* dp)
{
	// Line 852, Address: 0x14d990, Func Offset: 0
	// Line 853, Address: 0x14d998, Func Offset: 0x8
	// Line 854, Address: 0x14d9ac, Func Offset: 0x1c
	// Func End, Address: 0x14d9b8, Func Offset: 0x28
}

// 
// Start address: 0x14d9c0
void enFlagResetLieDown(EnLOCAL_DATA* dp)
{
	// Line 860, Address: 0x14d9c0, Func Offset: 0
	// Line 861, Address: 0x14d9c8, Func Offset: 0x8
	// Line 862, Address: 0x14d9e0, Func Offset: 0x20
	// Func End, Address: 0x14d9ec, Func Offset: 0x2c
}

// 
// Start address: 0x14d9f0
void enFlagSetCritical(EnLOCAL_DATA* dp)
{
	// Line 868, Address: 0x14d9f0, Func Offset: 0
	// Line 869, Address: 0x14d9f8, Func Offset: 0x8
	// Line 870, Address: 0x14da0c, Func Offset: 0x1c
	// Func End, Address: 0x14da18, Func Offset: 0x28
}

// 
// Start address: 0x14da20
void enFlagResetCritical(EnLOCAL_DATA* dp)
{
	// Line 876, Address: 0x14da20, Func Offset: 0
	// Line 877, Address: 0x14da28, Func Offset: 0x8
	// Line 878, Address: 0x14da40, Func Offset: 0x20
	// Func End, Address: 0x14da4c, Func Offset: 0x2c
}

// 
// Start address: 0x14da50
int enCheckCritical(EnLOCAL_DATA* dp)
{
	// Line 884, Address: 0x14da50, Func Offset: 0
	// Line 885, Address: 0x14da58, Func Offset: 0x8
	// Line 886, Address: 0x14da6c, Func Offset: 0x1c
	// Func End, Address: 0x14da78, Func Offset: 0x28
}

// 
// Start address: 0x14da80
void enFlagSetNoDamage(EnLOCAL_DATA* dp)
{
	// Line 892, Address: 0x14da80, Func Offset: 0
	// Line 893, Address: 0x14da88, Func Offset: 0x8
	// Line 894, Address: 0x14da9c, Func Offset: 0x1c
	// Func End, Address: 0x14daa8, Func Offset: 0x28
}

// 
// Start address: 0x14dab0
void enFlagResetNoDamage(EnLOCAL_DATA* dp)
{
	// Line 900, Address: 0x14dab0, Func Offset: 0
	// Line 901, Address: 0x14dab8, Func Offset: 0x8
	// Line 902, Address: 0x14dad0, Func Offset: 0x20
	// Func End, Address: 0x14dadc, Func Offset: 0x2c
}

// 
// Start address: 0x14dae0
void enFlagSetDead(EnLOCAL_DATA* dp)
{
	// Line 908, Address: 0x14dae0, Func Offset: 0
	// Line 909, Address: 0x14dae8, Func Offset: 0x8
	// Line 910, Address: 0x14dafc, Func Offset: 0x1c
	// Func End, Address: 0x14db08, Func Offset: 0x28
}

// 
// Start address: 0x14db10
float enCalcDirection(float* pa, float* pb)
{
	float vec[4];
	// Line 917, Address: 0x14db10, Func Offset: 0
	// Line 919, Address: 0x14db18, Func Offset: 0x8
	// Line 920, Address: 0x14db2c, Func Offset: 0x1c
	// Line 921, Address: 0x14db38, Func Offset: 0x28
	// Func End, Address: 0x14db48, Func Offset: 0x38
}

// 
// Start address: 0x14db50
float enCalcAngleDifference(float angle1, float angle2)
{
	// Line 928, Address: 0x14db50, Func Offset: 0
	// Line 929, Address: 0x14db58, Func Offset: 0x8
	// Line 930, Address: 0x14db68, Func Offset: 0x18
	// Func End, Address: 0x14db78, Func Offset: 0x28
}

// 
// Start address: 0x14db80
float enCalcSpeedRate(float angle, float* mpos, float* tpos)
{
	float d;
	// Line 956, Address: 0x14db80, Func Offset: 0
	// Line 958, Address: 0x14db94, Func Offset: 0x14
	// Line 959, Address: 0x14dbb0, Func Offset: 0x30
	// Line 961, Address: 0x14dbdc, Func Offset: 0x5c
	// Func End, Address: 0x14dbf0, Func Offset: 0x70
}

// 
// Start address: 0x14dbf0
int enCheckIntoScreen(EnLOCAL_DATA* dp)
{
	float vec[4];
	// Line 1002, Address: 0x14dbf0, Func Offset: 0
	// Line 1004, Address: 0x14dbf8, Func Offset: 0x8
	// Line 1005, Address: 0x14dc10, Func Offset: 0x20
	// Line 1006, Address: 0x14dc20, Func Offset: 0x30
	// Line 1007, Address: 0x14dc6c, Func Offset: 0x7c
	// Line 1008, Address: 0x14dc80, Func Offset: 0x90
	// Line 1010, Address: 0x14dc8c, Func Offset: 0x9c
	// Line 1011, Address: 0x14dc90, Func Offset: 0xa0
	// Func End, Address: 0x14dca0, Func Offset: 0xb0
}

// 
// Start address: 0x14dca0
SubCharacter* enGetNearCharacter(EnLOCAL_DATA* dp)
{
	SubCharacter* scp;
	EnLOCAL_DATA* tp;
	int i;
	float d;
	float dist;
	// Line 1018, Address: 0x14dca0, Func Offset: 0
	// Line 1021, Address: 0x14dcb4, Func Offset: 0x14
	// Line 1022, Address: 0x14dcbc, Func Offset: 0x1c
	// Line 1023, Address: 0x14dccc, Func Offset: 0x2c
	// Line 1024, Address: 0x14dd04, Func Offset: 0x64
	// Line 1025, Address: 0x14dd10, Func Offset: 0x70
	// Line 1026, Address: 0x14dd4c, Func Offset: 0xac
	// Line 1027, Address: 0x14dd88, Func Offset: 0xe8
	// Line 1028, Address: 0x14dd98, Func Offset: 0xf8
	// Line 1029, Address: 0x14dd9c, Func Offset: 0xfc
	// Line 1030, Address: 0x14dda4, Func Offset: 0x104
	// Line 1031, Address: 0x14dda8, Func Offset: 0x108
	// Line 1033, Address: 0x14ddbc, Func Offset: 0x11c
	// Func End, Address: 0x14ddd4, Func Offset: 0x134
}

// 
// Start address: 0x14dde0
void enSetTimer(EnLOCAL_DATA* dp, int t)
{
	// Line 1040, Address: 0x14dde0, Func Offset: 0
	// Line 1041, Address: 0x14ddec, Func Offset: 0xc
	// Line 1042, Address: 0x14de40, Func Offset: 0x60
	// Line 1043, Address: 0x14de50, Func Offset: 0x70
	// Func End, Address: 0x14de5c, Func Offset: 0x7c
}

// 
// Start address: 0x14de60
int enReduceTimer(EnLOCAL_DATA* dp)
{
	int n;
	int t;
	// Line 1050, Address: 0x14de60, Func Offset: 0
	// Line 1051, Address: 0x14de70, Func Offset: 0x10
	// Line 1052, Address: 0x14de78, Func Offset: 0x18
	// Line 1053, Address: 0x14dea0, Func Offset: 0x40
	// Line 1054, Address: 0x14deb8, Func Offset: 0x58
	// Line 1055, Address: 0x14deec, Func Offset: 0x8c
	// Line 1056, Address: 0x14defc, Func Offset: 0x9c
	// Line 1057, Address: 0x14df04, Func Offset: 0xa4
	// Line 1059, Address: 0x14df14, Func Offset: 0xb4
	// Line 1060, Address: 0x14df20, Func Offset: 0xc0
	// Func End, Address: 0x14df34, Func Offset: 0xd4
}

// 
// Start address: 0x14df40
int enGetDT()
{
	// Line 1067, Address: 0x14df40, Func Offset: 0
	// Line 1068, Address: 0x14df48, Func Offset: 0x8
	// Func End, Address: 0x14df50, Func Offset: 0x10
}

// 
// Start address: 0x14df50
void enMoveAngle(EnPATH_DATA* p, float delta)
{
	float a;
	// Line 1075, Address: 0x14df50, Func Offset: 0
	// Line 1077, Address: 0x14df60, Func Offset: 0x10
	// Line 1078, Address: 0x14df80, Func Offset: 0x30
	// Line 1079, Address: 0x14dfa0, Func Offset: 0x50
	// Line 1080, Address: 0x14dfbc, Func Offset: 0x6c
	// Line 1081, Address: 0x14dfc8, Func Offset: 0x78
	// Line 1082, Address: 0x14dfe8, Func Offset: 0x98
	// Line 1084, Address: 0x14dff0, Func Offset: 0xa0
	// Line 1085, Address: 0x14e010, Func Offset: 0xc0
	// Func End, Address: 0x14e020, Func Offset: 0xd0
}

// 
// Start address: 0x14e020
void enMoveAngleToPlayer(EnLOCAL_DATA* dp, float delta)
{
	// Line 1092, Address: 0x14e020, Func Offset: 0
	// Line 1093, Address: 0x14e030, Func Offset: 0x10
	// Line 1094, Address: 0x14e044, Func Offset: 0x24
	// Line 1095, Address: 0x14e058, Func Offset: 0x38
	// Line 1096, Address: 0x14e06c, Func Offset: 0x4c
	// Func End, Address: 0x14e07c, Func Offset: 0x5c
}

// 
// Start address: 0x14e080
void enMoveExec(EnLOCAL_DATA* dp)
{
	FOG_OBJ_DATA* od;
	int ID;
	float hb;
	_CL_HITPOLY_COLUMN column2;
	_CL_HITPOLY_COLUMN column;
	float e;
	float c;
	float t;
	float s;
	float d;
	float rot[4][4];
	float vec2[4];
	float vec[4];
	float pos[4];
	// Line 1102, Address: 0x14e080, Func Offset: 0
	// Line 1108, Address: 0x14e0a0, Func Offset: 0x20
	// Line 1109, Address: 0x14e0a4, Func Offset: 0x24
	// Line 1110, Address: 0x14e0c4, Func Offset: 0x44
	// Line 1111, Address: 0x14e0e0, Func Offset: 0x60
	// Line 1112, Address: 0x14e0f0, Func Offset: 0x70
	// Line 1113, Address: 0x14e114, Func Offset: 0x94
	// Line 1114, Address: 0x14e124, Func Offset: 0xa4
	// Line 1115, Address: 0x14e12c, Func Offset: 0xac
	// Line 1118, Address: 0x14e134, Func Offset: 0xb4
	// Line 1120, Address: 0x14e138, Func Offset: 0xb8
	// Line 1121, Address: 0x14e13c, Func Offset: 0xbc
	// Line 1122, Address: 0x14e15c, Func Offset: 0xdc
	// Line 1123, Address: 0x14e178, Func Offset: 0xf8
	// Line 1124, Address: 0x14e188, Func Offset: 0x108
	// Line 1125, Address: 0x14e1ac, Func Offset: 0x12c
	// Line 1126, Address: 0x14e1bc, Func Offset: 0x13c
	// Line 1127, Address: 0x14e1c4, Func Offset: 0x144
	// Line 1130, Address: 0x14e1cc, Func Offset: 0x14c
	// Line 1132, Address: 0x14e1d0, Func Offset: 0x150
	// Line 1133, Address: 0x14e1d4, Func Offset: 0x154
	// Line 1134, Address: 0x14e1f4, Func Offset: 0x174
	// Line 1135, Address: 0x14e210, Func Offset: 0x190
	// Line 1136, Address: 0x14e220, Func Offset: 0x1a0
	// Line 1137, Address: 0x14e244, Func Offset: 0x1c4
	// Line 1138, Address: 0x14e254, Func Offset: 0x1d4
	// Line 1139, Address: 0x14e25c, Func Offset: 0x1dc
	// Line 1142, Address: 0x14e264, Func Offset: 0x1e4
	// Line 1144, Address: 0x14e268, Func Offset: 0x1e8
	// Line 1145, Address: 0x14e26c, Func Offset: 0x1ec
	// Line 1146, Address: 0x14e28c, Func Offset: 0x20c
	// Line 1147, Address: 0x14e2a8, Func Offset: 0x228
	// Line 1148, Address: 0x14e2b8, Func Offset: 0x238
	// Line 1149, Address: 0x14e2dc, Func Offset: 0x25c
	// Line 1150, Address: 0x14e2ec, Func Offset: 0x26c
	// Line 1151, Address: 0x14e2f4, Func Offset: 0x274
	// Line 1154, Address: 0x14e2fc, Func Offset: 0x27c
	// Line 1155, Address: 0x14e300, Func Offset: 0x280
	// Line 1158, Address: 0x14e314, Func Offset: 0x294
	// Line 1159, Address: 0x14e32c, Func Offset: 0x2ac
	// Line 1161, Address: 0x14e350, Func Offset: 0x2d0
	// Line 1162, Address: 0x14e380, Func Offset: 0x300
	// Line 1163, Address: 0x14e3a8, Func Offset: 0x328
	// Line 1164, Address: 0x14e3b0, Func Offset: 0x330
	// Line 1165, Address: 0x14e3c8, Func Offset: 0x348
	// Line 1166, Address: 0x14e3d8, Func Offset: 0x358
	// Line 1167, Address: 0x14e3e8, Func Offset: 0x368
	// Line 1168, Address: 0x14e3f0, Func Offset: 0x370
	// Line 1169, Address: 0x14e3f8, Func Offset: 0x378
	// Line 1170, Address: 0x14e42c, Func Offset: 0x3ac
	// Line 1173, Address: 0x14e448, Func Offset: 0x3c8
	// Line 1174, Address: 0x14e464, Func Offset: 0x3e4
	// Line 1175, Address: 0x14e478, Func Offset: 0x3f8
	// Line 1176, Address: 0x14e4b0, Func Offset: 0x430
	// Line 1177, Address: 0x14e4b8, Func Offset: 0x438
	// Line 1178, Address: 0x14e4c0, Func Offset: 0x440
	// Line 1179, Address: 0x14e4c8, Func Offset: 0x448
	// Line 1180, Address: 0x14e4e4, Func Offset: 0x464
	// Line 1181, Address: 0x14e500, Func Offset: 0x480
	// Line 1183, Address: 0x14e52c, Func Offset: 0x4ac
	// Line 1184, Address: 0x14e54c, Func Offset: 0x4cc
	// Line 1185, Address: 0x14e554, Func Offset: 0x4d4
	// Line 1187, Address: 0x14e568, Func Offset: 0x4e8
	// Line 1188, Address: 0x14e57c, Func Offset: 0x4fc
	// Line 1189, Address: 0x14e5c0, Func Offset: 0x540
	// Line 1191, Address: 0x14e5c8, Func Offset: 0x548
	// Line 1192, Address: 0x14e5d0, Func Offset: 0x550
	// Line 1193, Address: 0x14e5d8, Func Offset: 0x558
	// Line 1194, Address: 0x14e5e4, Func Offset: 0x564
	// Line 1195, Address: 0x14e5ec, Func Offset: 0x56c
	// Line 1196, Address: 0x14e600, Func Offset: 0x580
	// Line 1197, Address: 0x14e608, Func Offset: 0x588
	// Line 1198, Address: 0x14e61c, Func Offset: 0x59c
	// Line 1199, Address: 0x14e628, Func Offset: 0x5a8
	// Line 1200, Address: 0x14e634, Func Offset: 0x5b4
	// Line 1201, Address: 0x14e638, Func Offset: 0x5b8
	// Line 1202, Address: 0x14e644, Func Offset: 0x5c4
	// Line 1203, Address: 0x14e650, Func Offset: 0x5d0
	// Line 1204, Address: 0x14e66c, Func Offset: 0x5ec
	// Line 1206, Address: 0x14e680, Func Offset: 0x600
	// Line 1207, Address: 0x14e6b4, Func Offset: 0x634
	// Line 1208, Address: 0x14e6dc, Func Offset: 0x65c
	// Line 1209, Address: 0x14e6f4, Func Offset: 0x674
	// Line 1210, Address: 0x14e728, Func Offset: 0x6a8
	// Line 1211, Address: 0x14e738, Func Offset: 0x6b8
	// Line 1213, Address: 0x14e748, Func Offset: 0x6c8
	// Line 1214, Address: 0x14e750, Func Offset: 0x6d0
	// Line 1215, Address: 0x14e75c, Func Offset: 0x6dc
	// Line 1216, Address: 0x14e760, Func Offset: 0x6e0
	// Line 1217, Address: 0x14e770, Func Offset: 0x6f0
	// Line 1218, Address: 0x14e780, Func Offset: 0x700
	// Line 1219, Address: 0x14e788, Func Offset: 0x708
	// Line 1221, Address: 0x14e79c, Func Offset: 0x71c
	// Line 1222, Address: 0x14e7d0, Func Offset: 0x750
	// Line 1223, Address: 0x14e7f8, Func Offset: 0x778
	// Line 1224, Address: 0x14e810, Func Offset: 0x790
	// Line 1225, Address: 0x14e844, Func Offset: 0x7c4
	// Line 1226, Address: 0x14e854, Func Offset: 0x7d4
	// Line 1228, Address: 0x14e864, Func Offset: 0x7e4
	// Line 1229, Address: 0x14e870, Func Offset: 0x7f0
	// Line 1230, Address: 0x14e874, Func Offset: 0x7f4
	// Line 1231, Address: 0x14e884, Func Offset: 0x804
	// Line 1233, Address: 0x14e894, Func Offset: 0x814
	// Line 1234, Address: 0x14e8b4, Func Offset: 0x834
	// Line 1235, Address: 0x14e8cc, Func Offset: 0x84c
	// Line 1236, Address: 0x14e8e0, Func Offset: 0x860
	// Line 1237, Address: 0x14e8fc, Func Offset: 0x87c
	// Line 1238, Address: 0x14e904, Func Offset: 0x884
	// Line 1240, Address: 0x14e91c, Func Offset: 0x89c
	// Line 1241, Address: 0x14e950, Func Offset: 0x8d0
	// Line 1242, Address: 0x14e960, Func Offset: 0x8e0
	// Line 1243, Address: 0x14e968, Func Offset: 0x8e8
	// Line 1244, Address: 0x14e970, Func Offset: 0x8f0
	// Line 1245, Address: 0x14e984, Func Offset: 0x904
	// Line 1246, Address: 0x14e9a8, Func Offset: 0x928
	// Line 1247, Address: 0x14e9b0, Func Offset: 0x930
	// Line 1251, Address: 0x14e9d8, Func Offset: 0x958
	// Func End, Address: 0x14e9fc, Func Offset: 0x97c
}

// 
// Start address: 0x14ea00
void enIKETrans(EnLOCAL_DATA* dp)
{
	float rot[4][4];
	float vec[4];
	// Line 1255, Address: 0x14ea00, Func Offset: 0
	// Line 1258, Address: 0x14ea14, Func Offset: 0x14
	// Line 1259, Address: 0x14ea1c, Func Offset: 0x1c
	// Line 1260, Address: 0x14ea2c, Func Offset: 0x2c
	// Line 1261, Address: 0x14ea40, Func Offset: 0x40
	// Line 1262, Address: 0x14ea5c, Func Offset: 0x5c
	// Line 1263, Address: 0x14ea84, Func Offset: 0x84
	// Line 1264, Address: 0x14eac8, Func Offset: 0xc8
	// Line 1265, Address: 0x14eafc, Func Offset: 0xfc
	// Line 1267, Address: 0x14eb20, Func Offset: 0x120
	// Func End, Address: 0x14eb38, Func Offset: 0x138
}

// 
// Start address: 0x14eb40
void enDyingExec(EnLOCAL_DATA* dp)
{
	// Line 1272, Address: 0x14eb40, Func Offset: 0
	// Line 1273, Address: 0x14eb4c, Func Offset: 0xc
	// Line 1275, Address: 0x14eb64, Func Offset: 0x24
	// Line 1276, Address: 0x14eb70, Func Offset: 0x30
	// Line 1277, Address: 0x14eb7c, Func Offset: 0x3c
	// Line 1278, Address: 0x14eb88, Func Offset: 0x48
	// Line 1279, Address: 0x14eb94, Func Offset: 0x54
	// Line 1280, Address: 0x14ebdc, Func Offset: 0x9c
	// Line 1283, Address: 0x14ebec, Func Offset: 0xac
	// Line 1284, Address: 0x14ec00, Func Offset: 0xc0
	// Line 1288, Address: 0x14ec14, Func Offset: 0xd4
	// Func End, Address: 0x14ec24, Func Offset: 0xe4
}

// 
// Start address: 0x14ec30
void enFlyingFunc()
{
	// Line 1295, Address: 0x14ec30, Func Offset: 0
	// Line 1297, Address: 0x14ec34, Func Offset: 0x4
	// Func End, Address: 0x14ec40, Func Offset: 0x10
}

// 
// Start address: 0x14ec40
void enInitPath(EnPATH_DATA* p, float angle)
{
	// Line 1304, Address: 0x14ec40, Func Offset: 0
	// Line 1305, Address: 0x14ec50, Func Offset: 0x10
	// Line 1306, Address: 0x14ec6c, Func Offset: 0x2c
	// Line 1307, Address: 0x14ec74, Func Offset: 0x34
	// Line 1308, Address: 0x14ec7c, Func Offset: 0x3c
	// Func End, Address: 0x14ec8c, Func Offset: 0x4c
}

// 
// Start address: 0x14ec90
int enSetPath(EnLOCAL_DATA* dp, float* target, float* pos)
{
	char timer[11];
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
	// Line 1317, Address: 0x14ec90, Func Offset: 0
	// Line 1318, Address: 0x14ecc8, Func Offset: 0x38
	// Line 1322, Address: 0x14eccc, Func Offset: 0x3c
	// Line 1339, Address: 0x14ecf0, Func Offset: 0x60
	// Line 1340, Address: 0x14ed08, Func Offset: 0x78
	// Line 1341, Address: 0x14ed1c, Func Offset: 0x8c
	// Line 1342, Address: 0x14ed2c, Func Offset: 0x9c
	// Line 1343, Address: 0x14ed44, Func Offset: 0xb4
	// Line 1344, Address: 0x14ed48, Func Offset: 0xb8
	// Line 1345, Address: 0x14ed50, Func Offset: 0xc0
	// Line 1346, Address: 0x14ed54, Func Offset: 0xc4
	// Line 1347, Address: 0x14ed58, Func Offset: 0xc8
	// Line 1348, Address: 0x14ed5c, Func Offset: 0xcc
	// Line 1350, Address: 0x14ed68, Func Offset: 0xd8
	// Line 1351, Address: 0x14ed7c, Func Offset: 0xec
	// Line 1352, Address: 0x14ed90, Func Offset: 0x100
	// Line 1354, Address: 0x14ed9c, Func Offset: 0x10c
	// Line 1355, Address: 0x14eda0, Func Offset: 0x110
	// Line 1356, Address: 0x14edb0, Func Offset: 0x120
	// Line 1358, Address: 0x14ede4, Func Offset: 0x154
	// Line 1359, Address: 0x14edec, Func Offset: 0x15c
	// Line 1360, Address: 0x14ee00, Func Offset: 0x170
	// Line 1361, Address: 0x14ee14, Func Offset: 0x184
	// Line 1362, Address: 0x14ee2c, Func Offset: 0x19c
	// Line 1363, Address: 0x14ee44, Func Offset: 0x1b4
	// Line 1364, Address: 0x14ee58, Func Offset: 0x1c8
	// Line 1365, Address: 0x14ee6c, Func Offset: 0x1dc
	// Line 1366, Address: 0x14ee84, Func Offset: 0x1f4
	// Line 1367, Address: 0x14ee98, Func Offset: 0x208
	// Line 1368, Address: 0x14eec8, Func Offset: 0x238
	// Line 1369, Address: 0x14eecc, Func Offset: 0x23c
	// Line 1370, Address: 0x14ef04, Func Offset: 0x274
	// Line 1371, Address: 0x14ef08, Func Offset: 0x278
	// Line 1372, Address: 0x14ef10, Func Offset: 0x280
	// Line 1373, Address: 0x14ef68, Func Offset: 0x2d8
	// Line 1374, Address: 0x14ef7c, Func Offset: 0x2ec
	// Line 1375, Address: 0x14ef84, Func Offset: 0x2f4
	// Line 1376, Address: 0x14ef8c, Func Offset: 0x2fc
	// Line 1379, Address: 0x14ef94, Func Offset: 0x304
	// Line 1381, Address: 0x14ef9c, Func Offset: 0x30c
	// Line 1382, Address: 0x14efb0, Func Offset: 0x320
	// Line 1383, Address: 0x14efd4, Func Offset: 0x344
	// Line 1384, Address: 0x14f008, Func Offset: 0x378
	// Line 1385, Address: 0x14f04c, Func Offset: 0x3bc
	// Line 1386, Address: 0x14f060, Func Offset: 0x3d0
	// Line 1387, Address: 0x14f078, Func Offset: 0x3e8
	// Line 1388, Address: 0x14f090, Func Offset: 0x400
	// Line 1389, Address: 0x14f0a8, Func Offset: 0x418
	// Line 1390, Address: 0x14f0ac, Func Offset: 0x41c
	// Line 1392, Address: 0x14f128, Func Offset: 0x498
	// Line 1394, Address: 0x14f130, Func Offset: 0x4a0
	// Line 1395, Address: 0x14f144, Func Offset: 0x4b4
	// Line 1396, Address: 0x14f15c, Func Offset: 0x4cc
	// Line 1397, Address: 0x14f170, Func Offset: 0x4e0
	// Line 1398, Address: 0x14f188, Func Offset: 0x4f8
	// Line 1399, Address: 0x14f1e4, Func Offset: 0x554
	// Line 1401, Address: 0x14f1ec, Func Offset: 0x55c
	// Line 1402, Address: 0x14f1fc, Func Offset: 0x56c
	// Line 1403, Address: 0x14f200, Func Offset: 0x570
	// Line 1405, Address: 0x14f204, Func Offset: 0x574
	// Line 1406, Address: 0x14f244, Func Offset: 0x5b4
	// Line 1407, Address: 0x14f258, Func Offset: 0x5c8
	// Line 1408, Address: 0x14f270, Func Offset: 0x5e0
	// Line 1409, Address: 0x14f284, Func Offset: 0x5f4
	// Line 1410, Address: 0x14f29c, Func Offset: 0x60c
	// Line 1411, Address: 0x14f2a0, Func Offset: 0x610
	// Line 1412, Address: 0x14f2fc, Func Offset: 0x66c
	// Line 1413, Address: 0x14f31c, Func Offset: 0x68c
	// Line 1414, Address: 0x14f320, Func Offset: 0x690
	// Line 1415, Address: 0x14f37c, Func Offset: 0x6ec
	// Line 1417, Address: 0x14f384, Func Offset: 0x6f4
	// Line 1418, Address: 0x14f388, Func Offset: 0x6f8
	// Line 1420, Address: 0x14f390, Func Offset: 0x700
	// Line 1422, Address: 0x14f398, Func Offset: 0x708
	// Line 1423, Address: 0x14f39c, Func Offset: 0x70c
	// Line 1424, Address: 0x14f3cc, Func Offset: 0x73c
	// Line 1425, Address: 0x14f3d0, Func Offset: 0x740
	// Line 1427, Address: 0x14f3d8, Func Offset: 0x748
	// Line 1429, Address: 0x14f3e0, Func Offset: 0x750
	// Line 1430, Address: 0x14f3ec, Func Offset: 0x75c
	// Line 1431, Address: 0x14f40c, Func Offset: 0x77c
	// Line 1432, Address: 0x14f420, Func Offset: 0x790
	// Line 1433, Address: 0x14f438, Func Offset: 0x7a8
	// Line 1434, Address: 0x14f450, Func Offset: 0x7c0
	// Line 1435, Address: 0x14f470, Func Offset: 0x7e0
	// Line 1436, Address: 0x14f484, Func Offset: 0x7f4
	// Line 1437, Address: 0x14f49c, Func Offset: 0x80c
	// Line 1438, Address: 0x14f4b0, Func Offset: 0x820
	// Line 1439, Address: 0x14f4c8, Func Offset: 0x838
	// Line 1440, Address: 0x14f4e0, Func Offset: 0x850
	// Line 1441, Address: 0x14f4f0, Func Offset: 0x860
	// Line 1442, Address: 0x14f4f4, Func Offset: 0x864
	// Line 1444, Address: 0x14f4f8, Func Offset: 0x868
	// Line 1445, Address: 0x14f500, Func Offset: 0x870
	// Line 1446, Address: 0x14f504, Func Offset: 0x874
	// Line 1448, Address: 0x14f508, Func Offset: 0x878
	// Line 1449, Address: 0x14f528, Func Offset: 0x898
	// Line 1450, Address: 0x14f52c, Func Offset: 0x89c
	// Line 1451, Address: 0x14f530, Func Offset: 0x8a0
	// Line 1452, Address: 0x14f538, Func Offset: 0x8a8
	// Line 1453, Address: 0x14f548, Func Offset: 0x8b8
	// Line 1454, Address: 0x14f54c, Func Offset: 0x8bc
	// Line 1455, Address: 0x14f554, Func Offset: 0x8c4
	// Line 1457, Address: 0x14f558, Func Offset: 0x8c8
	// Line 1459, Address: 0x14f568, Func Offset: 0x8d8
	// Line 1460, Address: 0x14f57c, Func Offset: 0x8ec
	// Line 1463, Address: 0x14f580, Func Offset: 0x8f0
	// Line 1465, Address: 0x14f584, Func Offset: 0x8f4
	// Line 1466, Address: 0x14f594, Func Offset: 0x904
	// Line 1467, Address: 0x14f598, Func Offset: 0x908
	// Func End, Address: 0x14f5cc, Func Offset: 0x93c
}

// 
// Start address: 0x14f5d0
float enCheckPath(EnLOCAL_DATA* dp, float* tpos, float* mpos)
{
	float ep[4];
	float sp[4];
	// Line 1477, Address: 0x14f5d0, Func Offset: 0
	// Line 1479, Address: 0x14f5d8, Func Offset: 0x8
	// Line 1480, Address: 0x14f5e4, Func Offset: 0x14
	// Line 1481, Address: 0x14f5f0, Func Offset: 0x20
	// Line 1482, Address: 0x14f604, Func Offset: 0x34
	// Line 1484, Address: 0x14f618, Func Offset: 0x48
	// Line 1485, Address: 0x14f630, Func Offset: 0x60
	// Line 1487, Address: 0x14f638, Func Offset: 0x68
	// Line 1489, Address: 0x14f658, Func Offset: 0x88
	// Line 1490, Address: 0x14f660, Func Offset: 0x90
	// Line 1492, Address: 0x14f674, Func Offset: 0xa4
	// Line 1493, Address: 0x14f68c, Func Offset: 0xbc
	// Line 1495, Address: 0x14f694, Func Offset: 0xc4
	// Line 1498, Address: 0x14f6b4, Func Offset: 0xe4
	// Line 1499, Address: 0x14f6c4, Func Offset: 0xf4
	// Func End, Address: 0x14f6d4, Func Offset: 0x104
}

// 
// Start address: 0x14f6e0
float enCheckPath2(EnLOCAL_DATA* dp, float* tpos, float* mpos)
{
	float ep[4];
	float sp[4];
	// Line 1509, Address: 0x14f6e0, Func Offset: 0
	// Line 1511, Address: 0x14f6e8, Func Offset: 0x8
	// Line 1512, Address: 0x14f6f4, Func Offset: 0x14
	// Line 1513, Address: 0x14f700, Func Offset: 0x20
	// Line 1515, Address: 0x14f714, Func Offset: 0x34
	// Line 1516, Address: 0x14f72c, Func Offset: 0x4c
	// Line 1518, Address: 0x14f734, Func Offset: 0x54
	// Line 1520, Address: 0x14f74c, Func Offset: 0x6c
	// Line 1521, Address: 0x14f75c, Func Offset: 0x7c
	// Func End, Address: 0x14f76c, Func Offset: 0x8c
}

// 
// Start address: 0x14f770
float enCheckHitEyes(EnLOCAL_DATA* dp, float* sp, float* ep)
{
	_CL_VHIT_RESULT* res;
	// Line 1549, Address: 0x14f770, Func Offset: 0
	// Line 1550, Address: 0x14f794, Func Offset: 0x24
	// Line 1554, Address: 0x14f79c, Func Offset: 0x2c
	// Line 1555, Address: 0x14f7b8, Func Offset: 0x48
	// Line 1556, Address: 0x14f7c4, Func Offset: 0x54
	// Line 1557, Address: 0x14f80c, Func Offset: 0x9c
	// Line 1558, Address: 0x14f81c, Func Offset: 0xac
	// Line 1560, Address: 0x14f84c, Func Offset: 0xdc
	// Line 1562, Address: 0x14f89c, Func Offset: 0x12c
	// Line 1565, Address: 0x14f8e8, Func Offset: 0x178
	// Line 1566, Address: 0x14f920, Func Offset: 0x1b0
	// Func End, Address: 0x14f940, Func Offset: 0x1d0
}

// 
// Start address: 0x14f940
void enGetSkeletonVector(float* vec, EnLOCAL_DATA* dp, int n)
{
	int i;
	shSkelton* sp;
	// Line 1575, Address: 0x14f940, Func Offset: 0
	// Line 1577, Address: 0x14f948, Func Offset: 0x8
	// Line 1578, Address: 0x14f978, Func Offset: 0x38
	// Line 1579, Address: 0x14f98c, Func Offset: 0x4c
	// Func End, Address: 0x14f994, Func Offset: 0x54
}

// 
// Start address: 0x14f9a0
int enGetDamageMotion(EnLOCAL_DATA* dp)
{
	float a;
	int dd;
	int id;
	int m;
	shBattleInfo* bi;
	// Line 1586, Address: 0x14f9a0, Func Offset: 0
	// Line 1587, Address: 0x14f9b8, Func Offset: 0x18
	// Line 1591, Address: 0x14f9c0, Func Offset: 0x20
	// Line 1596, Address: 0x14f9e0, Func Offset: 0x40
	// Line 1597, Address: 0x14fa14, Func Offset: 0x74
	// Line 1598, Address: 0x14fa18, Func Offset: 0x78
	// Line 1599, Address: 0x14fa20, Func Offset: 0x80
	// Line 1603, Address: 0x14fb48, Func Offset: 0x1a8
	// Line 1604, Address: 0x14fb4c, Func Offset: 0x1ac
	// Line 1607, Address: 0x14fb54, Func Offset: 0x1b4
	// Line 1608, Address: 0x14fb58, Func Offset: 0x1b8
	// Line 1610, Address: 0x14fb60, Func Offset: 0x1c0
	// Line 1611, Address: 0x14fb6c, Func Offset: 0x1cc
	// Line 1621, Address: 0x14fb78, Func Offset: 0x1d8
	// Line 1622, Address: 0x14fb90, Func Offset: 0x1f0
	// Line 1623, Address: 0x14fb94, Func Offset: 0x1f4
	// Line 1624, Address: 0x14fb9c, Func Offset: 0x1fc
	// Line 1626, Address: 0x14fba0, Func Offset: 0x200
	// Line 1629, Address: 0x14fba8, Func Offset: 0x208
	// Line 1630, Address: 0x14fbac, Func Offset: 0x20c
	// Line 1634, Address: 0x14fbb4, Func Offset: 0x214
	// Line 1635, Address: 0x14fbb8, Func Offset: 0x218
	// Line 1636, Address: 0x14fbc4, Func Offset: 0x224
	// Line 1637, Address: 0x14fbd0, Func Offset: 0x230
	// Line 1639, Address: 0x14fbd8, Func Offset: 0x238
	// Line 1640, Address: 0x14fbf0, Func Offset: 0x250
	// Line 1641, Address: 0x14fbf4, Func Offset: 0x254
	// Line 1642, Address: 0x14fbfc, Func Offset: 0x25c
	// Line 1644, Address: 0x14fc00, Func Offset: 0x260
	// Line 1647, Address: 0x14fc08, Func Offset: 0x268
	// Line 1648, Address: 0x14fc0c, Func Offset: 0x26c
	// Line 1650, Address: 0x14fc14, Func Offset: 0x274
	// Line 1651, Address: 0x14fc18, Func Offset: 0x278
	// Line 1652, Address: 0x14fc24, Func Offset: 0x284
	// Line 1653, Address: 0x14fc30, Func Offset: 0x290
	// Line 1655, Address: 0x14fc38, Func Offset: 0x298
	// Line 1656, Address: 0x14fc3c, Func Offset: 0x29c
	// Line 1658, Address: 0x14fc4c, Func Offset: 0x2ac
	// Line 1659, Address: 0x14fc50, Func Offset: 0x2b0
	// Func End, Address: 0x14fc6c, Func Offset: 0x2cc
}

// 
// Start address: 0x14fc70
int enGetDownMotion(EnLOCAL_DATA* dp)
{
	float a;
	int dd;
	int id;
	int m;
	shBattleInfo* bi;
	// Line 1666, Address: 0x14fc70, Func Offset: 0
	// Line 1667, Address: 0x14fc88, Func Offset: 0x18
	// Line 1671, Address: 0x14fc90, Func Offset: 0x20
	// Line 1676, Address: 0x14fcb0, Func Offset: 0x40
	// Line 1677, Address: 0x14fce4, Func Offset: 0x74
	// Line 1678, Address: 0x14fce8, Func Offset: 0x78
	// Line 1679, Address: 0x14fcf0, Func Offset: 0x80
	// Line 1683, Address: 0x14fe18, Func Offset: 0x1a8
	// Line 1684, Address: 0x14fe1c, Func Offset: 0x1ac
	// Line 1687, Address: 0x14fe24, Func Offset: 0x1b4
	// Line 1688, Address: 0x14fe28, Func Offset: 0x1b8
	// Line 1700, Address: 0x14fe30, Func Offset: 0x1c0
	// Line 1701, Address: 0x14fe48, Func Offset: 0x1d8
	// Line 1702, Address: 0x14fe4c, Func Offset: 0x1dc
	// Line 1703, Address: 0x14fe54, Func Offset: 0x1e4
	// Line 1705, Address: 0x14fe58, Func Offset: 0x1e8
	// Line 1710, Address: 0x14fe60, Func Offset: 0x1f0
	// Line 1711, Address: 0x14fe64, Func Offset: 0x1f4
	// Line 1716, Address: 0x14fe6c, Func Offset: 0x1fc
	// Line 1717, Address: 0x14fe70, Func Offset: 0x200
	// Line 1718, Address: 0x14fe7c, Func Offset: 0x20c
	// Line 1719, Address: 0x14fe88, Func Offset: 0x218
	// Line 1721, Address: 0x14fe90, Func Offset: 0x220
	// Line 1722, Address: 0x14fe94, Func Offset: 0x224
	// Line 1724, Address: 0x14fea4, Func Offset: 0x234
	// Line 1725, Address: 0x14fea8, Func Offset: 0x238
	// Func End, Address: 0x14fec4, Func Offset: 0x254
}

// 
// Start address: 0x14fed0
int enGetLieDirection(int dm)
{
	int m;
	// Line 1732, Address: 0x14fed0, Func Offset: 0
	// Line 1734, Address: 0x14fee0, Func Offset: 0x10
	// Line 1742, Address: 0x14ff10, Func Offset: 0x40
	// Line 1743, Address: 0x14ff14, Func Offset: 0x44
	// Line 1745, Address: 0x14ff1c, Func Offset: 0x4c
	// Line 1746, Address: 0x14ff20, Func Offset: 0x50
	// Line 1748, Address: 0x14ff28, Func Offset: 0x58
	// Line 1749, Address: 0x14ff2c, Func Offset: 0x5c
	// Line 1751, Address: 0x14ff40, Func Offset: 0x70
	// Line 1752, Address: 0x14ff44, Func Offset: 0x74
	// Func End, Address: 0x14ff58, Func Offset: 0x88
}

// 
// Start address: 0x14ff60
void enAnimeSet(EnLOCAL_DATA* dp, int anim, int id)
{
	// Line 1760, Address: 0x14ff60, Func Offset: 0
	// Line 1761, Address: 0x14ff78, Func Offset: 0x18
	// Line 1762, Address: 0x14ff84, Func Offset: 0x24
	// Line 1763, Address: 0x14ff90, Func Offset: 0x30
	// Line 1764, Address: 0x14ff9c, Func Offset: 0x3c
	// Line 1765, Address: 0x14ffa4, Func Offset: 0x44
	// Line 1766, Address: 0x14ffac, Func Offset: 0x4c
	// Line 1767, Address: 0x14ffb4, Func Offset: 0x54
	// Line 1768, Address: 0x14ffc4, Func Offset: 0x64
	// Line 1769, Address: 0x14fff0, Func Offset: 0x90
	// Line 1773, Address: 0x150054, Func Offset: 0xf4
	// Line 1774, Address: 0x150060, Func Offset: 0x100
	// Line 1775, Address: 0x150070, Func Offset: 0x110
	// Line 1776, Address: 0x150080, Func Offset: 0x120
	// Func End, Address: 0x150094, Func Offset: 0x134
}

// 
// Start address: 0x1500a0
void enAnimeSetDirectFrame(EnLOCAL_DATA* dp, int anim, int id, int frame)
{
	_AnimeInfo* ai;
	// Line 1786, Address: 0x1500a0, Func Offset: 0
	// Line 1788, Address: 0x1500bc, Func Offset: 0x1c
	// Line 1789, Address: 0x1500c8, Func Offset: 0x28
	// Line 1790, Address: 0x1500d4, Func Offset: 0x34
	// Line 1791, Address: 0x1500e0, Func Offset: 0x40
	// Line 1792, Address: 0x1500e8, Func Offset: 0x48
	// Line 1793, Address: 0x1500f0, Func Offset: 0x50
	// Line 1794, Address: 0x150100, Func Offset: 0x60
	// Line 1795, Address: 0x15013c, Func Offset: 0x9c
	// Line 1796, Address: 0x150150, Func Offset: 0xb0
	// Line 1797, Address: 0x15015c, Func Offset: 0xbc
	// Line 1798, Address: 0x150170, Func Offset: 0xd0
	// Line 1799, Address: 0x150180, Func Offset: 0xe0
	// Line 1800, Address: 0x150188, Func Offset: 0xe8
	// Line 1802, Address: 0x1501b0, Func Offset: 0x110
	// Line 1803, Address: 0x1501c8, Func Offset: 0x128
	// Line 1805, Address: 0x1501e8, Func Offset: 0x148
	// Line 1806, Address: 0x1501f4, Func Offset: 0x154
	// Line 1807, Address: 0x150204, Func Offset: 0x164
	// Line 1808, Address: 0x150214, Func Offset: 0x174
	// Func End, Address: 0x150228, Func Offset: 0x188
}

// 
// Start address: 0x150230
void enAnimeExec(EnLOCAL_DATA* dp, EnANIME_DATA* pa, short anm_none)
{
	_AnimeInfo* ai;
	int f;
	int loop;
	int speed;
	int limit;
	int n;
	// Line 1816, Address: 0x150230, Func Offset: 0
	// Line 1819, Address: 0x15025c, Func Offset: 0x2c
	// Line 1820, Address: 0x150284, Func Offset: 0x54
	// Line 1821, Address: 0x150298, Func Offset: 0x68
	// Line 1822, Address: 0x1502a4, Func Offset: 0x74
	// Line 1823, Address: 0x1502ac, Func Offset: 0x7c
	// Line 1824, Address: 0x1502b8, Func Offset: 0x88
	// Line 1825, Address: 0x1502d0, Func Offset: 0xa0
	// Line 1826, Address: 0x1502d8, Func Offset: 0xa8
	// Line 1827, Address: 0x1502e0, Func Offset: 0xb0
	// Line 1829, Address: 0x1502e8, Func Offset: 0xb8
	// Line 1830, Address: 0x150310, Func Offset: 0xe0
	// Line 1831, Address: 0x150324, Func Offset: 0xf4
	// Line 1832, Address: 0x150328, Func Offset: 0xf8
	// Line 1833, Address: 0x150334, Func Offset: 0x104
	// Line 1834, Address: 0x15033c, Func Offset: 0x10c
	// Line 1836, Address: 0x150344, Func Offset: 0x114
	// Line 1837, Address: 0x150394, Func Offset: 0x164
	// Line 1838, Address: 0x1503a8, Func Offset: 0x178
	// Line 1839, Address: 0x1503bc, Func Offset: 0x18c
	// Line 1840, Address: 0x1503cc, Func Offset: 0x19c
	// Line 1842, Address: 0x1503d0, Func Offset: 0x1a0
	// Line 1843, Address: 0x1503d8, Func Offset: 0x1a8
	// Line 1844, Address: 0x1503ec, Func Offset: 0x1bc
	// Line 1847, Address: 0x1503f0, Func Offset: 0x1c0
	// Line 1848, Address: 0x1503f8, Func Offset: 0x1c8
	// Line 1849, Address: 0x150420, Func Offset: 0x1f0
	// Line 1850, Address: 0x150428, Func Offset: 0x1f8
	// Line 1851, Address: 0x150434, Func Offset: 0x204
	// Line 1853, Address: 0x15045c, Func Offset: 0x22c
	// Line 1855, Address: 0x150460, Func Offset: 0x230
	// Line 1856, Address: 0x150468, Func Offset: 0x238
	// Line 1857, Address: 0x15047c, Func Offset: 0x24c
	// Line 1858, Address: 0x15049c, Func Offset: 0x26c
	// Line 1859, Address: 0x1504a8, Func Offset: 0x278
	// Line 1860, Address: 0x1504ac, Func Offset: 0x27c
	// Line 1861, Address: 0x1504b8, Func Offset: 0x288
	// Line 1862, Address: 0x1504c4, Func Offset: 0x294
	// Line 1863, Address: 0x1504cc, Func Offset: 0x29c
	// Line 1865, Address: 0x1504d0, Func Offset: 0x2a0
	// Line 1866, Address: 0x1504e0, Func Offset: 0x2b0
	// Line 1868, Address: 0x1504ec, Func Offset: 0x2bc
	// Line 1869, Address: 0x1504f4, Func Offset: 0x2c4
	// Line 1870, Address: 0x1504fc, Func Offset: 0x2cc
	// Line 1871, Address: 0x150508, Func Offset: 0x2d8
	// Line 1872, Address: 0x150510, Func Offset: 0x2e0
	// Line 1873, Address: 0x150524, Func Offset: 0x2f4
	// Line 1874, Address: 0x150530, Func Offset: 0x300
	// Line 1875, Address: 0x150538, Func Offset: 0x308
	// Line 1877, Address: 0x15053c, Func Offset: 0x30c
	// Line 1878, Address: 0x150548, Func Offset: 0x318
	// Line 1879, Address: 0x150550, Func Offset: 0x320
	// Line 1881, Address: 0x150554, Func Offset: 0x324
	// Line 1882, Address: 0x150564, Func Offset: 0x334
	// Line 1886, Address: 0x150570, Func Offset: 0x340
	// Line 1888, Address: 0x150574, Func Offset: 0x344
	// Line 1889, Address: 0x1505b4, Func Offset: 0x384
	// Func End, Address: 0x1505dc, Func Offset: 0x3ac
}

// 
// Start address: 0x1505e0
void enSetTrans(EnLOCAL_DATA* dp)
{
	float vec2[4];
	float vec1[4];
	EnSKELETON_DATA* sd;
	// Line 1895, Address: 0x1505e0, Func Offset: 0
	// Line 1896, Address: 0x1505f4, Func Offset: 0x14
	// Line 1898, Address: 0x150610, Func Offset: 0x30
	// Line 1899, Address: 0x15062c, Func Offset: 0x4c
	// Line 1900, Address: 0x150648, Func Offset: 0x68
	// Line 1901, Address: 0x150664, Func Offset: 0x84
	// Line 1902, Address: 0x150680, Func Offset: 0xa0
	// Line 1903, Address: 0x1506a0, Func Offset: 0xc0
	// Line 1904, Address: 0x1506a8, Func Offset: 0xc8
	// Line 1905, Address: 0x1506b0, Func Offset: 0xd0
	// Func End, Address: 0x1506c8, Func Offset: 0xe8
}

// 
// Start address: 0x1506d0
void enSetTransN(EnLOCAL_DATA* dp, int n)
{
	float vec[4];
	// Line 1912, Address: 0x1506d0, Func Offset: 0
	// Line 1914, Address: 0x1506e0, Func Offset: 0x10
	// Line 1915, Address: 0x1506f4, Func Offset: 0x24
	// Line 1916, Address: 0x150700, Func Offset: 0x30
	// Line 1917, Address: 0x15070c, Func Offset: 0x3c
	// Func End, Address: 0x15071c, Func Offset: 0x4c
}

// 
// Start address: 0x150720
void enSetTransWalk(EnLOCAL_DATA* dp)
{
	float od;
	int d;
	int sn[2];
	float vec[4][2];
	// Line 1922, Address: 0x150720, Func Offset: 0
	// Line 1926, Address: 0x150730, Func Offset: 0x10
	// Line 1927, Address: 0x150748, Func Offset: 0x28
	// Line 1928, Address: 0x150778, Func Offset: 0x58
	// Line 1929, Address: 0x1507a8, Func Offset: 0x88
	// Line 1930, Address: 0x1507bc, Func Offset: 0x9c
	// Line 1931, Address: 0x1507d0, Func Offset: 0xb0
	// Line 1932, Address: 0x1507e4, Func Offset: 0xc4
	// Line 1934, Address: 0x150800, Func Offset: 0xe0
	// Line 1935, Address: 0x150830, Func Offset: 0x110
	// Line 1936, Address: 0x150848, Func Offset: 0x128
	// Line 1937, Address: 0x15085c, Func Offset: 0x13c
	// Line 1938, Address: 0x150870, Func Offset: 0x150
	// Line 1939, Address: 0x15087c, Func Offset: 0x15c
	// Line 1941, Address: 0x150894, Func Offset: 0x174
	// Func End, Address: 0x1508a8, Func Offset: 0x188
}

// 
// Start address: 0x1508b0
void enSetTransForward(EnLOCAL_DATA* dp, float s)
{
	// Line 1948, Address: 0x1508b0, Func Offset: 0
	// Line 1949, Address: 0x1508bc, Func Offset: 0xc
	// Line 1950, Address: 0x1508d8, Func Offset: 0x28
	// Line 1951, Address: 0x15091c, Func Offset: 0x6c
	// Func End, Address: 0x150928, Func Offset: 0x78
}

// 
// Start address: 0x150930
void enAnimePause(EnLOCAL_DATA* dp)
{
	// Line 1967, Address: 0x150930, Func Offset: 0
	// Line 1968, Address: 0x15093c, Func Offset: 0xc
	// Line 1969, Address: 0x15094c, Func Offset: 0x1c
	// Line 1970, Address: 0x15095c, Func Offset: 0x2c
	// Func End, Address: 0x15096c, Func Offset: 0x3c
}

// 
// Start address: 0x150970
void enAnimeRestart(EnLOCAL_DATA* dp)
{
	// Line 1976, Address: 0x150970, Func Offset: 0
	// Line 1977, Address: 0x15097c, Func Offset: 0xc
	// Line 1978, Address: 0x15098c, Func Offset: 0x1c
	// Line 1979, Address: 0x15099c, Func Offset: 0x2c
	// Func End, Address: 0x1509ac, Func Offset: 0x3c
}

// 
// Start address: 0x1509b0
void enAnimeFrameSet(EnLOCAL_DATA* dp, unsigned short frame)
{
	// Line 1986, Address: 0x1509b0, Func Offset: 0
	// Line 1987, Address: 0x1509c0, Func Offset: 0x10
	// Line 1988, Address: 0x1509e4, Func Offset: 0x34
	// Line 1989, Address: 0x1509f8, Func Offset: 0x48
	// Func End, Address: 0x150a08, Func Offset: 0x58
}

// 
// Start address: 0x150a10
void enAnimeReverse(EnLOCAL_DATA* dp)
{
	_AnimeInfo* ai;
	// Line 2008, Address: 0x150a10, Func Offset: 0
	// Line 2009, Address: 0x150a20, Func Offset: 0x10
	// Line 2010, Address: 0x150a34, Func Offset: 0x24
	// Line 2011, Address: 0x150a4c, Func Offset: 0x3c
	// Line 2012, Address: 0x150a60, Func Offset: 0x50
	// Line 2013, Address: 0x150a70, Func Offset: 0x60
	// Line 2016, Address: 0x150a94, Func Offset: 0x84
	// Func End, Address: 0x150aa8, Func Offset: 0x98
}

// 
// Start address: 0x150ab0
void enSetAnimeCount(EnLOCAL_DATA* dp, int count)
{
	int limit;
	// Line 2023, Address: 0x150ab0, Func Offset: 0
	// Line 2025, Address: 0x150ac4, Func Offset: 0x14
	// Line 2026, Address: 0x150adc, Func Offset: 0x2c
	// Line 2027, Address: 0x150aec, Func Offset: 0x3c
	// Line 2028, Address: 0x150b14, Func Offset: 0x64
	// Func End, Address: 0x150b28, Func Offset: 0x78
}

// 
// Start address: 0x150b30
void enEfctBloodPool(EnLOCAL_DATA* dp)
{
	float pos[4];
	// Line 2043, Address: 0x150b30, Func Offset: 0
	// Line 2046, Address: 0x150b38, Func Offset: 0x8
	// Line 2047, Address: 0x150b50, Func Offset: 0x20
	// Line 2055, Address: 0x150b68, Func Offset: 0x38
	// Line 2059, Address: 0x150b78, Func Offset: 0x48
	// Func End, Address: 0x150b88, Func Offset: 0x58
}

// 
// Start address: 0x150b90
void enEfctPoisonFog(float* pos, float* vec)
{
	// Line 2066, Address: 0x150b90, Func Offset: 0
	// Line 2068, Address: 0x150ba0, Func Offset: 0x10
	// Line 2070, Address: 0x150bb0, Func Offset: 0x20
	// Func End, Address: 0x150bc0, Func Offset: 0x30
}

// 
// Start address: 0x150bc0
void enSoundCall(int num, float vol, float* pos)
{
	// Line 2086, Address: 0x150bc0, Func Offset: 0
	// Line 2088, Address: 0x150bd4, Func Offset: 0x14
	// Line 2090, Address: 0x150bec, Func Offset: 0x2c
	// Func End, Address: 0x150bfc, Func Offset: 0x3c
}

// 
// Start address: 0x150c00
void enSoundCall3D(int num, float vol, float* pos)
{
	// Line 2098, Address: 0x150c00, Func Offset: 0
	// Line 2100, Address: 0x150c14, Func Offset: 0x14
	// Line 2102, Address: 0x150c2c, Func Offset: 0x2c
	// Func End, Address: 0x150c3c, Func Offset: 0x3c
}

// 
// Start address: 0x150c40
EnCOMMUNICATION* enSetCommunication(int kind, int type, float* pos, float dist, int time)
{
	EnCOMMUNICATION* p;
	int i;
	// Line 2115, Address: 0x150c40, Func Offset: 0
	// Line 2116, Address: 0x150c44, Func Offset: 0x4
	// Line 2117, Address: 0x150c4c, Func Offset: 0xc
	// Line 2118, Address: 0x150c54, Func Offset: 0x14
	// Line 2119, Address: 0x150c70, Func Offset: 0x30
	// Line 2120, Address: 0x150c74, Func Offset: 0x34
	// Line 2121, Address: 0x150c84, Func Offset: 0x44
	// Line 2122, Address: 0x150c8c, Func Offset: 0x4c
	// Line 2123, Address: 0x150c90, Func Offset: 0x50
	// Line 2124, Address: 0x150c94, Func Offset: 0x54
	// Line 2125, Address: 0x150c98, Func Offset: 0x58
	// Line 2126, Address: 0x150ca4, Func Offset: 0x64
	// Line 2127, Address: 0x150cdc, Func Offset: 0x9c
	// Line 2128, Address: 0x150ce4, Func Offset: 0xa4
	// Line 2130, Address: 0x150ce8, Func Offset: 0xa8
	// Line 2132, Address: 0x150cfc, Func Offset: 0xbc
	// Func End, Address: 0x150d04, Func Offset: 0xc4
}

// 
// Start address: 0x150d10
EnCOMMUNICATION* enCommunicateTribe(int kind, float* pos)
{
	float dist;
	float d;
	int i;
	EnCOMMUNICATION* p;
	EnCOMMUNICATION* mp;
	// Line 2152, Address: 0x150d10, Func Offset: 0
	// Line 2153, Address: 0x150d14, Func Offset: 0x4
	// Line 2156, Address: 0x150d1c, Func Offset: 0xc
	// Line 2157, Address: 0x150d38, Func Offset: 0x28
	// Line 2158, Address: 0x150d44, Func Offset: 0x34
	// Line 2159, Address: 0x150d50, Func Offset: 0x40
	// Line 2160, Address: 0x150d5c, Func Offset: 0x4c
	// Line 2161, Address: 0x150d94, Func Offset: 0x84
	// Line 2162, Address: 0x150db8, Func Offset: 0xa8
	// Line 2163, Address: 0x150dbc, Func Offset: 0xac
	// Line 2165, Address: 0x150dc0, Func Offset: 0xb0
	// Line 2167, Address: 0x150dd4, Func Offset: 0xc4
	// Func End, Address: 0x150ddc, Func Offset: 0xcc
}

// 
// Start address: 0x150de0
void enEventDriven(int event)
{
	EnLOCAL_DATA* dp;
	int i;
	// Line 2174, Address: 0x150de0, Func Offset: 0
	// Line 2176, Address: 0x150df0, Func Offset: 0x10
	// Line 2177, Address: 0x150df8, Func Offset: 0x18
	// Line 2179, Address: 0x150e3c, Func Offset: 0x5c
	// Line 2180, Address: 0x150e48, Func Offset: 0x68
	// Line 2181, Address: 0x150e68, Func Offset: 0x88
	// Line 2182, Address: 0x150e6c, Func Offset: 0x8c
	// Line 2183, Address: 0x150e70, Func Offset: 0x90
	// Line 2184, Address: 0x150e84, Func Offset: 0xa4
	// Line 2186, Address: 0x150e8c, Func Offset: 0xac
	// Line 2187, Address: 0x150e98, Func Offset: 0xb8
	// Line 2188, Address: 0x150ebc, Func Offset: 0xdc
	// Line 2189, Address: 0x150ec4, Func Offset: 0xe4
	// Line 2190, Address: 0x150ec8, Func Offset: 0xe8
	// Line 2191, Address: 0x150edc, Func Offset: 0xfc
	// Line 2193, Address: 0x150ee4, Func Offset: 0x104
	// Line 2194, Address: 0x150ef0, Func Offset: 0x110
	// Line 2195, Address: 0x150f08, Func Offset: 0x128
	// Line 2196, Address: 0x150f10, Func Offset: 0x130
	// Line 2198, Address: 0x150f18, Func Offset: 0x138
	// Line 2199, Address: 0x150f2c, Func Offset: 0x14c
	// Line 2201, Address: 0x150f34, Func Offset: 0x154
	// Line 2202, Address: 0x150f40, Func Offset: 0x160
	// Line 2203, Address: 0x150f58, Func Offset: 0x178
	// Line 2204, Address: 0x150f60, Func Offset: 0x180
	// Line 2206, Address: 0x150f68, Func Offset: 0x188
	// Line 2207, Address: 0x150f7c, Func Offset: 0x19c
	// Line 2210, Address: 0x150f84, Func Offset: 0x1a4
	// Line 2211, Address: 0x150f90, Func Offset: 0x1b0
	// Line 2212, Address: 0x150fb4, Func Offset: 0x1d4
	// Line 2213, Address: 0x150fbc, Func Offset: 0x1dc
	// Line 2215, Address: 0x150fc0, Func Offset: 0x1e0
	// Line 2218, Address: 0x150fd4, Func Offset: 0x1f4
	// Line 2219, Address: 0x150fd8, Func Offset: 0x1f8
	// Func End, Address: 0x150fec, Func Offset: 0x20c
}

