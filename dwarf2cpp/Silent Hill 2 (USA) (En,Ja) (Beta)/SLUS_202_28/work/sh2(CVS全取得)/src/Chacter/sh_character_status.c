typedef struct SubCharacter;
typedef struct _CL_VHIT_WALL;
typedef struct shAttackInfo;
typedef struct shPlayerWork;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _CL_VHIT_CHARA;
typedef union _anon0;
typedef struct _CL_VHIT_RESULT;
typedef union _anon1;
typedef struct _anon2;
typedef struct shSkelton;
typedef struct shCharacterAll;
typedef struct SubCharacterDisp;
typedef struct _VC_WATCH_MV_PARAM;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct _USXY;
typedef struct _anon3;
typedef struct _VC_CAM_MV_PARAM;
typedef struct SPOT_LIGHT;
typedef struct _SXY;
typedef struct shClusterAnime;
typedef struct _IXY;
typedef struct PAD_3D;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef enum _MARIA_MAIN_STATUS : unsigned char;
typedef struct shAnime3d;
typedef struct shInArea;
typedef struct Item;
typedef struct PAD_2D;
typedef struct PAD_INFO;
typedef struct shInAreaTgtInfo;
typedef struct shBattleFight;
typedef union _anon4;
typedef struct _AnimeInfo;
typedef enum _MARIA_SUB_STATUS : unsigned char;
typedef struct shMariaWork;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct MariaAppearPoint;

typedef void(*type_20)(SubCharacter*);
typedef void(*type_25)(SubCharacter*);

typedef unsigned char type_0[4];
typedef unsigned char type_1[4];
typedef unsigned char type_2[2];
typedef unsigned char type_3[2];
typedef float type_4[4];
typedef unsigned char type_5[20];
typedef float type_6[4];
typedef MariaAppearPoint type_7[91];
typedef shAttackInfo type_8[66];
typedef float type_9[7];
typedef unsigned int type_10[32];
typedef float type_11[4];
typedef unsigned int type_12[9];
typedef unsigned char type_13[14];
typedef int type_14[5];
typedef float type_15[7];
typedef SubCharacterDisp type_16[32];
typedef float type_17[7];
typedef float type_18[4];
typedef float type_19[4][2];
typedef float type_21[4][4];
typedef unsigned char type_22[2];
typedef float type_23[4];
typedef unsigned char type_24[69];
typedef unsigned char type_26[4];
typedef unsigned int type_27[9];
typedef int type_28[9];
typedef unsigned int type_29[2];
typedef void* type_30[3];
typedef unsigned short type_31[11];
typedef float type_32[4];
typedef float type_33[4];
typedef unsigned short type_34[3];
typedef unsigned char type_35[14];
typedef float type_36[4];
typedef float type_37[4];
typedef PAD_INFO type_38[10];
typedef float type_39[4][5];
typedef shInAreaTgtInfo type_40[20];
typedef float type_41[2];
typedef unsigned char type_42[97];
typedef shInAreaTgtInfo type_43[20];
typedef float type_44[7];
typedef unsigned char type_45[4];
typedef float type_46[4];
typedef unsigned char type_47[4];
typedef float type_48[7];
typedef unsigned int type_49[32];
typedef float type_50[4];

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
	_anon2 pos;
	_anon2 rot;
	_anon2 pos_spd;
	_anon2 rot_spd;
	_anon3 mat;
	shSkelton* sk_top;
	float eye_y;
	float center_y;
	float spd;
	float spd_org;
	float spd_y;
	float spd_roty;
	float grnd_normal[4];
	float grnd_height;
	_anon2 b_pos;
	_anon2 b_rot;
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

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
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

struct shPlayerWork
{
	SubCharacter* player;
	_anon2 dist_rot;
	_anon2 dist_pos;
	_anon2 pos;
	_anon2 rot;
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
	_anon2 tgt_body_angle;
	_anon2 tgt_neck_angle;
	_anon2 tgt_arms_angle;
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

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
};

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon1 hobj;
};

union _anon1
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct _anon2
{
	float x;
	float y;
	float z;
	float w;
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon3 src_m;
	_anon2 src_t;
	_anon3 des_m;
	_anon2 des_t;
	_anon2 axis;
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

struct shCharacterAll
{
	SubCharacterDisp work[32];
	SubCharacterDisp* free;
	SubCharacter* head;
	SubCharacter* player;
	char total;
};

struct SubCharacterDisp
{
	SubCharacter sc;
	shAnime3d anime2;
	shAnime3d anime;
	shClusterAnime* cluster_anime;
	void* models[3];
	void* work;
	void* data;
	unsigned int model_adr;
	unsigned int anime_adr;
	unsigned int clani_adr;
	void* anime_list;
	void* clani_list;
};

struct _VC_WATCH_MV_PARAM
{
	float ang_accel_x;
	float ang_accel_y;
	float max_ang_spd_x;
	float max_ang_spd_y;
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

struct _USXY
{
	unsigned short x;
	unsigned short y;
};

struct _anon3
{
	float d[4][4];
};

struct _VC_CAM_MV_PARAM
{
	float accel_xz;
	float accel_y;
	float max_spd_xz;
	float max_spd_y;
};

struct SPOT_LIGHT
{
	float c[4];
	float zdir[4];
	float range[4];
};

struct _SXY
{
	short x;
	short y;
};

struct shClusterAnime
{
	void* data;
	unsigned char used;
	unsigned char n_clusters;
	unsigned char is_repeat;
	unsigned char frame_updated;
	int frame_no;
	float* weights;
};

struct _IXY
{
	int x;
	int y;
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

enum _MARIA_MAIN_STATUS : unsigned char
{
	MAR_MAIN_ST_STAND,
	MAR_MAIN_ST_CLOSE_TO,
	MAR_MAIN_ST_ALERT,
	MAR_MAIN_ST_DISCOVER,
	MAR_MAIN_ST_RECOVER,
	MAR_MAIN_ST_BOREDOM,
	MAR_MAIN_ST_DAMAGED
};

struct shAnime3d
{
	shSkelton* top;
	void* anime;
	void* frame_top;
	void* p_anime;
	void* p_frame_top;
	unsigned int frame_size;
	int total_count;
	_IXY c_count;
	_SXY c_speed;
	_SXY total_speed;
	_USXY cur_frame;
	char first_bone_type;
	char comp_type;
	_AnimeInfo* anim_a;
	_AnimeInfo* anim_b;
	_anon2 rot_neck;
	_anon2 rot_arms;
	_anon2 rot_body_neck;
	_anon2 rot_body;
	float scale;
};

struct shInArea
{
	struct
	{
		unsigned char look_on : 2;
		unsigned char feel_on : 2;
		unsigned char light_on : 4;
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

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
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

struct shInAreaTgtInfo
{
	_anon4 adr;
	float distance;
	shInArea in_area;
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

union _anon4
{
	SubCharacter* scp;
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

enum _MARIA_SUB_STATUS : unsigned char
{
	MAR_SUB_ST_STAND,
	MAR_SUB_ST_RELAX,
	MAR_SUB_ST_RELAX_OFF,
	MAR_SUB_ST_AFRAID,
	MAR_SUB_ST_TIRED,
	MAR_SUB_ST_ONESTEP,
	MAR_SUB_ST_WALK,
	MAR_SUB_ST_RUN,
	MAR_SUB_ST_DAMAGE
};

struct shMariaWork
{
	SubCharacter* mar_p;
	_anon2 dist_rot;
	_anon2 dist_pos;
	_anon2 pos;
	_anon2 rot;
	float to_target;
	float tgt_pos[4][5];
	int tgt_pointer;
	int pushed_dir;
	_MARIA_MAIN_STATUS main_status_now;
	_MARIA_MAIN_STATUS main_status_prev;
	_MARIA_SUB_STATUS sub_status_now;
	_MARIA_SUB_STATUS sub_status_prev;
	unsigned int sub_st_flg;
	unsigned int anime_st_flg;
	unsigned int anime_pause;
	_CL_VHIT_RESULT r_forward;
	_CL_VHIT_RESULT l_forward;
	_CL_VHIT_RESULT forward;
	_CL_VHIT_RESULT ft_floor;
	_CL_VHIT_RESULT r_foot;
	_CL_VHIT_RESULT l_foot;
	_CL_HITPOLY_COLUMN column_mov;
	_CL_HITPOLY_COLUMN column_atk;
	float col_mov_z_hosei;
	float col_atk_z_hosei;
	unsigned char se_upper[4];
	unsigned char se_foot[4];
	_anon2 tgt_neck_angle;
	SubCharacter* look_tgt;
	SubCharacter* look_obj;
	float dist_to_jms;
	float hp_recover;
	float stand_time;
	float move_time;
	float muteki_time;
	float relax_time;
	float afraid_time;
	float hp;
	float hp_max;
	int tired;
	int tired_max;
	unsigned char relax_flag;
	unsigned char no_damage;
	unsigned char dead;
	unsigned short damage_no;
	unsigned char enemy_around;
	unsigned char enemy_atk_area;
	unsigned char look_jms;
	unsigned char random_status;
	unsigned char active_type;
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

struct MariaAppearPoint
{
	short room_name_prev;
	short room_name_now;
	int active_type;
	float pos[4];
};

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
float jms_walk_spd_ana[7];
float jms_back_spd_ana[7];
float jms_swalk_spd_ana[7];
float jms_run_spd_ana[7];
float jms_srun_spd_ana[7];
unsigned int pjames_act_with_wep_flag[9];
unsigned int pjames_upper_flag[32];
unsigned int pjames_lower_flag[32];
MariaAppearPoint maria_apeear_point_list[91];
unsigned int pmaria_sub_status_flag[9];
_VC_WATCH_MV_PARAM watch_mv_prm_user;
_VC_WATCH_MV_PARAM watch_mv_prm_nrml;
_VC_WATCH_MV_PARAM watch_mv_prm_outdoor;
_VC_WATCH_MV_PARAM watch_mv_prm_on_boat;
_VC_WATCH_MV_PARAM self_view_watch_mv_prm;
_VC_CAM_MV_PARAM cam_mv_prm_user;
_VC_CAM_MV_PARAM cam_mv_prm_nrml;
_VC_CAM_MV_PARAM cam_mv_prm_outdoor;
_VC_CAM_MV_PARAM cam_mv_prm_on_boat;
float nml_tgt_watch_cir_r[4];
float nml_cam2wth_min_dist[4];
float far_tgt_watch_cir_r[4];
float mv_nml_chr2cam_r[4];
float mv_nml_no_adj_max_dist[4];
float mv_nml_full_adj_min_dist[4];
float extra_boundary_width[4];
int excl_r_ary[9];
float excl_max_rate[4];
int mv_stl_ang_ary[5];
shInAreaTgtInfo sh2_target_info[20];
shCharacterAll sh2chara;
int rest_tgt;
int rest_tgt_buf;
shInAreaTgtInfo sh2_target_info_buf[20];
shPlayerWork sh2jms;
Item item;
shMariaWork sh2mar;

void shBattleCheckHitEyes(_CL_VHIT_RESULT* eye, SubCharacter* scp, int i, int net);
void shBattleCheckTargetMyArea(shInArea* in_area, SubCharacter* scp, SubCharacter* tgt, float* look, float* feel);
int shBattleAroundTargetEnemy();
int shBattleCheckTargetChara(SubCharacter* scp);
SubCharacter* shBattleGetTargetEnemy(SubCharacter* scp);
SubCharacter* shBattleChangeTargetEnemy(SubCharacter* scp, int key);
unsigned int shBattleGetTargetChara(SubCharacter* scp, int kind);
SubCharacter* shCameraGetNearTarget(int i, int type);
SubCharacter* shBattleGetNearDeadlyTargetEnemy(SubCharacter* scp);
SubCharacter* shBattleGetTargetHuman(SubCharacter* scp, unsigned int type);
int shBattleListenHumanSound(SubCharacter* tgt);
int shBattleSeeHumanLight(SubCharacter* scp);
int shBattleAimedByHuman(SubCharacter* scp);
int shBattleFinishedByHuman(SubCharacter* scp);
int shBattleNoDamageHuman();
int shBattleNoDamageHumanJames();
int shBattleNoDamageHumanMaria();
int shBattleHuggedHuman();
void shBattleSetLookArea(SubCharacter* scp, float center, float radius);
void shBattleSetFeelArea(SubCharacter* scp, float center, float radius);
void shBattleInitEnemyCheckWork();
void shBattleInit();
void shBattleExec();

// 
// Start address: 0x123a70
void shBattleCheckHitEyes(_CL_VHIT_RESULT* eye, SubCharacter* scp, int i, int net)
{
	float ep[4];
	float sp[4];
	// Line 87, Address: 0x123a70, Func Offset: 0
	// Line 90, Address: 0x123a7c, Func Offset: 0xc
	// Line 91, Address: 0x123a84, Func Offset: 0x14
	// Line 92, Address: 0x123a8c, Func Offset: 0x1c
	// Line 93, Address: 0x123a94, Func Offset: 0x24
	// Line 94, Address: 0x123ac4, Func Offset: 0x54
	// Line 95, Address: 0x123acc, Func Offset: 0x5c
	// Line 96, Address: 0x123ad4, Func Offset: 0x64
	// Line 97, Address: 0x123adc, Func Offset: 0x6c
	// Line 98, Address: 0x123ae4, Func Offset: 0x74
	// Line 99, Address: 0x123aec, Func Offset: 0x7c
	// Line 100, Address: 0x123af4, Func Offset: 0x84
	// Line 102, Address: 0x123afc, Func Offset: 0x8c
	// Line 103, Address: 0x123b0c, Func Offset: 0x9c
	// Func End, Address: 0x123b1c, Func Offset: 0xac
}

// 
// Start address: 0x123b20
void shBattleCheckTargetMyArea(shInArea* in_area, SubCharacter* scp, SubCharacter* tgt, float* look, float* feel)
{
	float tgt_to_feel;
	float tgt_to_look;
	float tgt_pos[4];
	// Line 136, Address: 0x123b20, Func Offset: 0
	// Line 142, Address: 0x123b50, Func Offset: 0x30
	// Line 143, Address: 0x123b64, Func Offset: 0x44
	// Line 144, Address: 0x123b6c, Func Offset: 0x4c
	// Line 145, Address: 0x123b74, Func Offset: 0x54
	// Line 146, Address: 0x123b7c, Func Offset: 0x5c
	// Line 147, Address: 0x123b84, Func Offset: 0x64
	// Line 148, Address: 0x123b8c, Func Offset: 0x6c
	// Line 149, Address: 0x123b94, Func Offset: 0x74
	// Line 152, Address: 0x123b9c, Func Offset: 0x7c
	// Line 153, Address: 0x123bb0, Func Offset: 0x90
	// Line 154, Address: 0x123bc4, Func Offset: 0xa4
	// Line 157, Address: 0x123c2c, Func Offset: 0x10c
	// Line 158, Address: 0x123c68, Func Offset: 0x148
	// Line 160, Address: 0x123ca8, Func Offset: 0x188
	// Line 164, Address: 0x123cdc, Func Offset: 0x1bc
	// Line 165, Address: 0x123cec, Func Offset: 0x1cc
	// Line 167, Address: 0x123d24, Func Offset: 0x204
	// Line 169, Address: 0x123d6c, Func Offset: 0x24c
	// Line 171, Address: 0x123dc4, Func Offset: 0x2a4
	// Line 174, Address: 0x123dcc, Func Offset: 0x2ac
	// Line 175, Address: 0x123dec, Func Offset: 0x2cc
	// Line 177, Address: 0x123e40, Func Offset: 0x320
	// Line 180, Address: 0x123e48, Func Offset: 0x328
	// Line 183, Address: 0x123e84, Func Offset: 0x364
	// Func End, Address: 0x123eac, Func Offset: 0x38c
}

// 
// Start address: 0x123f00
int shBattleAroundTargetEnemy()
{
	SubCharacter* tgt;
	// Line 209, Address: 0x123f00, Func Offset: 0
	// Line 211, Address: 0x123f10, Func Offset: 0x10
	// Line 213, Address: 0x123f40, Func Offset: 0x40
	// Line 215, Address: 0x123f4c, Func Offset: 0x4c
	// Line 219, Address: 0x123f60, Func Offset: 0x60
	// Line 220, Address: 0x123f64, Func Offset: 0x64
	// Func End, Address: 0x123f6c, Func Offset: 0x6c
}

// 
// Start address: 0x123f70
int shBattleCheckTargetChara(SubCharacter* scp)
{
	shInAreaTgtInfo dummy;
	float feel_center[4];
	float look_center[4];
	shInArea in_area;
	SubCharacter* tgt;
	int j;
	int i;
	// Line 266, Address: 0x123f70, Func Offset: 0
	// Line 274, Address: 0x123f88, Func Offset: 0x18
	// Line 275, Address: 0x123fa8, Func Offset: 0x38
	// Line 276, Address: 0x123fb0, Func Offset: 0x40
	// Line 279, Address: 0x123fd0, Func Offset: 0x60
	// Line 280, Address: 0x123ff0, Func Offset: 0x80
	// Line 281, Address: 0x123ff8, Func Offset: 0x88
	// Line 284, Address: 0x124018, Func Offset: 0xa8
	// Line 285, Address: 0x124028, Func Offset: 0xb8
	// Line 286, Address: 0x12403c, Func Offset: 0xcc
	// Line 292, Address: 0x124048, Func Offset: 0xd8
	// Line 295, Address: 0x124058, Func Offset: 0xe8
	// Line 296, Address: 0x124060, Func Offset: 0xf0
	// Line 301, Address: 0x124094, Func Offset: 0x124
	// Line 303, Address: 0x1240b8, Func Offset: 0x148
	// Line 304, Address: 0x1240d4, Func Offset: 0x164
	// Line 306, Address: 0x124118, Func Offset: 0x1a8
	// Line 307, Address: 0x124144, Func Offset: 0x1d4
	// Line 308, Address: 0x12416c, Func Offset: 0x1fc
	// Line 310, Address: 0x1241c8, Func Offset: 0x258
	// Line 311, Address: 0x1241dc, Func Offset: 0x26c
	// Line 332, Address: 0x1241e0, Func Offset: 0x270
	// Line 356, Address: 0x1241f0, Func Offset: 0x280
	// Line 357, Address: 0x1241fc, Func Offset: 0x28c
	// Line 358, Address: 0x124208, Func Offset: 0x298
	// Line 359, Address: 0x124250, Func Offset: 0x2e0
	// Line 360, Address: 0x12426c, Func Offset: 0x2fc
	// Line 361, Address: 0x1242a8, Func Offset: 0x338
	// Line 363, Address: 0x1242d0, Func Offset: 0x360
	// Line 364, Address: 0x1242f4, Func Offset: 0x384
	// Line 379, Address: 0x124314, Func Offset: 0x3a4
	// Line 380, Address: 0x124324, Func Offset: 0x3b4
	// Line 381, Address: 0x124340, Func Offset: 0x3d0
	// Line 384, Address: 0x124350, Func Offset: 0x3e0
	// Line 385, Address: 0x124364, Func Offset: 0x3f4
	// Line 387, Address: 0x124370, Func Offset: 0x400
	// Line 388, Address: 0x124374, Func Offset: 0x404
	// Func End, Address: 0x124390, Func Offset: 0x420
}

// 
// Start address: 0x124390
SubCharacter* shBattleGetTargetEnemy(SubCharacter* scp)
{
	_CL_VHIT_RESULT eye;
	SubCharacter* kari_target;
	int i;
	// Line 402, Address: 0x124390, Func Offset: 0
	// Line 404, Address: 0x1243ac, Func Offset: 0x1c
	// Line 407, Address: 0x1243b0, Func Offset: 0x20
	// Line 408, Address: 0x1243c4, Func Offset: 0x34
	// Line 412, Address: 0x1243d0, Func Offset: 0x40
	// Line 414, Address: 0x1243dc, Func Offset: 0x4c
	// Line 416, Address: 0x12440c, Func Offset: 0x7c
	// Line 418, Address: 0x12441c, Func Offset: 0x8c
	// Line 420, Address: 0x124434, Func Offset: 0xa4
	// Line 422, Address: 0x124454, Func Offset: 0xc4
	// Line 424, Address: 0x124464, Func Offset: 0xd4
	// Line 425, Address: 0x12446c, Func Offset: 0xdc
	// Line 427, Address: 0x124470, Func Offset: 0xe0
	// Line 429, Address: 0x124478, Func Offset: 0xe8
	// Line 434, Address: 0x124480, Func Offset: 0xf0
	// Line 435, Address: 0x1244a4, Func Offset: 0x114
	// Line 436, Address: 0x1244a8, Func Offset: 0x118
	// Func End, Address: 0x1244c8, Func Offset: 0x138
}

// 
// Start address: 0x1244d0
SubCharacter* shBattleChangeTargetEnemy(SubCharacter* scp, int key)
{
	_CL_VHIT_RESULT eye;
	float rot_tmp;
	float to_target;
	int i;
	// Line 456, Address: 0x1244d0, Func Offset: 0
	// Line 461, Address: 0x1244f0, Func Offset: 0x20
	// Line 462, Address: 0x124504, Func Offset: 0x34
	// Line 466, Address: 0x124510, Func Offset: 0x40
	// Line 468, Address: 0x12451c, Func Offset: 0x4c
	// Line 470, Address: 0x124548, Func Offset: 0x78
	// Line 472, Address: 0x12455c, Func Offset: 0x8c
	// Line 474, Address: 0x12456c, Func Offset: 0x9c
	// Line 476, Address: 0x12458c, Func Offset: 0xbc
	// Line 477, Address: 0x12459c, Func Offset: 0xcc
	// Line 479, Address: 0x1245e8, Func Offset: 0x118
	// Line 481, Address: 0x124600, Func Offset: 0x130
	// Line 483, Address: 0x124610, Func Offset: 0x140
	// Line 489, Address: 0x12461c, Func Offset: 0x14c
	// Line 490, Address: 0x12463c, Func Offset: 0x16c
	// Line 491, Address: 0x124640, Func Offset: 0x170
	// Func End, Address: 0x124660, Func Offset: 0x190
}

// 
// Start address: 0x124660
unsigned int shBattleGetTargetChara(SubCharacter* scp, int kind)
{
	_CL_VHIT_RESULT eye;
	int i;
	// Line 509, Address: 0x124660, Func Offset: 0
	// Line 513, Address: 0x124674, Func Offset: 0x14
	// Line 515, Address: 0x124690, Func Offset: 0x30
	// Line 516, Address: 0x1246a4, Func Offset: 0x44
	// Line 520, Address: 0x1246b0, Func Offset: 0x50
	// Line 522, Address: 0x1246bc, Func Offset: 0x5c
	// Line 527, Address: 0x1246d4, Func Offset: 0x74
	// Line 528, Address: 0x1246f0, Func Offset: 0x90
	// Line 531, Address: 0x124714, Func Offset: 0xb4
	// Line 532, Address: 0x124734, Func Offset: 0xd4
	// Line 534, Address: 0x12473c, Func Offset: 0xdc
	// Line 537, Address: 0x124748, Func Offset: 0xe8
	// Line 538, Address: 0x12474c, Func Offset: 0xec
	// Func End, Address: 0x124764, Func Offset: 0x104
}

// 
// Start address: 0x124770
SubCharacter* shCameraGetNearTarget(int i, int type)
{
	int kind;
	// Line 578, Address: 0x124770, Func Offset: 0
	// Line 579, Address: 0x124784, Func Offset: 0x14
	// Line 581, Address: 0x124790, Func Offset: 0x20
	// Line 582, Address: 0x1247b4, Func Offset: 0x44
	// Line 584, Address: 0x1247bc, Func Offset: 0x4c
	// Line 586, Address: 0x1247e8, Func Offset: 0x78
	// Line 589, Address: 0x1247f0, Func Offset: 0x80
	// Line 591, Address: 0x1247f4, Func Offset: 0x84
	// Func End, Address: 0x1247fc, Func Offset: 0x8c
}

// 
// Start address: 0x124800
SubCharacter* shBattleGetNearDeadlyTargetEnemy(SubCharacter* scp)
{
	_CL_VHIT_RESULT eye;
	int i;
	// Line 661, Address: 0x124800, Func Offset: 0
	// Line 666, Address: 0x12481c, Func Offset: 0x1c
	// Line 667, Address: 0x124830, Func Offset: 0x30
	// Line 671, Address: 0x12483c, Func Offset: 0x3c
	// Line 673, Address: 0x124848, Func Offset: 0x48
	// Line 675, Address: 0x124878, Func Offset: 0x78
	// Line 678, Address: 0x124894, Func Offset: 0x94
	// Line 679, Address: 0x1248ac, Func Offset: 0xac
	// Line 682, Address: 0x1248cc, Func Offset: 0xcc
	// Line 683, Address: 0x1248f8, Func Offset: 0xf8
	// Line 688, Address: 0x124900, Func Offset: 0x100
	// Line 690, Address: 0x124924, Func Offset: 0x124
	// Line 691, Address: 0x124928, Func Offset: 0x128
	// Func End, Address: 0x124948, Func Offset: 0x148
}

// 
// Start address: 0x124950
SubCharacter* shBattleGetTargetHuman(SubCharacter* scp, unsigned int type)
{
	SubCharacter* p2;
	SubCharacter* p1;
	SubCharacter* p;
	float scalar2;
	float scalar1;
	float pos2[4];
	float pos1[4];
	// Line 730, Address: 0x124950, Func Offset: 0
	// Line 735, Address: 0x124964, Func Offset: 0x14
	// Line 737, Address: 0x124984, Func Offset: 0x34
	// Line 738, Address: 0x124994, Func Offset: 0x44
	// Line 739, Address: 0x12499c, Func Offset: 0x4c
	// Line 740, Address: 0x1249ac, Func Offset: 0x5c
	// Line 742, Address: 0x1249b4, Func Offset: 0x64
	// Line 743, Address: 0x1249c4, Func Offset: 0x74
	// Line 745, Address: 0x1249cc, Func Offset: 0x7c
	// Line 746, Address: 0x1249e0, Func Offset: 0x90
	// Line 747, Address: 0x1249e8, Func Offset: 0x98
	// Line 749, Address: 0x1249fc, Func Offset: 0xac
	// Line 751, Address: 0x124a0c, Func Offset: 0xbc
	// Line 752, Address: 0x124a14, Func Offset: 0xc4
	// Line 753, Address: 0x124a1c, Func Offset: 0xcc
	// Line 754, Address: 0x124a2c, Func Offset: 0xdc
	// Line 755, Address: 0x124a3c, Func Offset: 0xec
	// Line 756, Address: 0x124a4c, Func Offset: 0xfc
	// Line 757, Address: 0x124a5c, Func Offset: 0x10c
	// Line 758, Address: 0x124a74, Func Offset: 0x124
	// Line 759, Address: 0x124a94, Func Offset: 0x144
	// Line 760, Address: 0x124ab4, Func Offset: 0x164
	// Line 761, Address: 0x124abc, Func Offset: 0x16c
	// Line 763, Address: 0x124ac0, Func Offset: 0x170
	// Line 764, Address: 0x124ac8, Func Offset: 0x178
	// Line 766, Address: 0x124ad0, Func Offset: 0x180
	// Line 767, Address: 0x124ad8, Func Offset: 0x188
	// Line 773, Address: 0x124adc, Func Offset: 0x18c
	// Func End, Address: 0x124af4, Func Offset: 0x1a4
}

// 
// Start address: 0x124b00
int shBattleListenHumanSound(SubCharacter* tgt)
{
	// Line 790, Address: 0x124b00, Func Offset: 0
	// Line 794, Address: 0x124b0c, Func Offset: 0xc
	// Func End, Address: 0x124b14, Func Offset: 0x14
}

// 
// Start address: 0x124b20
int shBattleSeeHumanLight(SubCharacter* scp)
{
	float dist;
	float light_radius;
	float angle;
	float scp_center[4];
	float light_center[4];
	SPOT_LIGHT spot;
	// Line 852, Address: 0x124b20, Func Offset: 0
	// Line 860, Address: 0x124b30, Func Offset: 0x10
	// Line 861, Address: 0x124b40, Func Offset: 0x20
	// Line 866, Address: 0x124b4c, Func Offset: 0x2c
	// Line 869, Address: 0x124b60, Func Offset: 0x40
	// Line 871, Address: 0x124b70, Func Offset: 0x50
	// Line 872, Address: 0x124b94, Func Offset: 0x74
	// Line 873, Address: 0x124ba8, Func Offset: 0x88
	// Line 876, Address: 0x124bbc, Func Offset: 0x9c
	// Line 879, Address: 0x124bdc, Func Offset: 0xbc
	// Line 880, Address: 0x124be4, Func Offset: 0xc4
	// Line 881, Address: 0x124bec, Func Offset: 0xcc
	// Line 884, Address: 0x124bf4, Func Offset: 0xd4
	// Line 886, Address: 0x124c38, Func Offset: 0x118
	// Line 887, Address: 0x124c48, Func Offset: 0x128
	// Line 889, Address: 0x124c54, Func Offset: 0x134
	// Line 890, Address: 0x124c58, Func Offset: 0x138
	// Func End, Address: 0x124c6c, Func Offset: 0x14c
}

// 
// Start address: 0x124c70
int shBattleAimedByHuman(SubCharacter* scp)
{
	// Line 903, Address: 0x124c70, Func Offset: 0
	// Line 904, Address: 0x124c90, Func Offset: 0x20
	// Line 906, Address: 0x124c9c, Func Offset: 0x2c
	// Line 907, Address: 0x124ca0, Func Offset: 0x30
	// Func End, Address: 0x124ca8, Func Offset: 0x38
}

// 
// Start address: 0x124cb0
int shBattleFinishedByHuman(SubCharacter* scp)
{
	// Line 920, Address: 0x124cb0, Func Offset: 0
	// Line 921, Address: 0x124cd4, Func Offset: 0x24
	// Line 923, Address: 0x124ce0, Func Offset: 0x30
	// Line 924, Address: 0x124ce4, Func Offset: 0x34
	// Func End, Address: 0x124cec, Func Offset: 0x3c
}

// 
// Start address: 0x124cf0
int shBattleNoDamageHuman()
{
	// Line 938, Address: 0x124cf0, Func Offset: 0
	// Line 939, Address: 0x124cf8, Func Offset: 0x8
	// Line 940, Address: 0x124d00, Func Offset: 0x10
	// Func End, Address: 0x124d10, Func Offset: 0x20
}

// 
// Start address: 0x124d10
int shBattleNoDamageHumanJames()
{
	// Line 945, Address: 0x124d10, Func Offset: 0
	// Line 946, Address: 0x124d40, Func Offset: 0x30
	// Line 948, Address: 0x124d4c, Func Offset: 0x3c
	// Line 949, Address: 0x124d50, Func Offset: 0x40
	// Func End, Address: 0x124d58, Func Offset: 0x48
}

// 
// Start address: 0x124d60
int shBattleNoDamageHumanMaria()
{
	// Line 953, Address: 0x124d60, Func Offset: 0
	// Line 954, Address: 0x124d90, Func Offset: 0x30
	// Line 956, Address: 0x124d9c, Func Offset: 0x3c
	// Line 957, Address: 0x124da0, Func Offset: 0x40
	// Func End, Address: 0x124da8, Func Offset: 0x48
}

// 
// Start address: 0x124db0
int shBattleHuggedHuman()
{
	// Line 973, Address: 0x124db0, Func Offset: 0
	// Line 976, Address: 0x124dd4, Func Offset: 0x24
	// Func End, Address: 0x124ddc, Func Offset: 0x2c
}

// 
// Start address: 0x124de0
void shBattleSetLookArea(SubCharacter* scp, float center, float radius)
{
	// Line 992, Address: 0x124de0, Func Offset: 0
	// Line 993, Address: 0x124df4, Func Offset: 0x14
	// Line 994, Address: 0x124dfc, Func Offset: 0x1c
	// Func End, Address: 0x124e04, Func Offset: 0x24
}

// 
// Start address: 0x124e10
void shBattleSetFeelArea(SubCharacter* scp, float center, float radius)
{
	// Line 1007, Address: 0x124e10, Func Offset: 0
	// Line 1008, Address: 0x124e24, Func Offset: 0x14
	// Line 1009, Address: 0x124e2c, Func Offset: 0x1c
	// Func End, Address: 0x124e34, Func Offset: 0x24
}

// 
// Start address: 0x124e40
void shBattleInitEnemyCheckWork()
{
	// Line 1018, Address: 0x124e40, Func Offset: 0
	// Line 1019, Address: 0x124e48, Func Offset: 0x8
	// Line 1020, Address: 0x124e5c, Func Offset: 0x1c
	// Line 1021, Address: 0x124e70, Func Offset: 0x30
	// Line 1022, Address: 0x124e84, Func Offset: 0x44
	// Func End, Address: 0x124e94, Func Offset: 0x54
}

// 
// Start address: 0x124ea0
void shBattleInit()
{
	// Line 1039, Address: 0x124ea0, Func Offset: 0
	// Line 1040, Address: 0x124ea8, Func Offset: 0x8
	// Line 1041, Address: 0x124eb0, Func Offset: 0x10
	// Line 1042, Address: 0x124eb8, Func Offset: 0x18
	// Func End, Address: 0x124ec8, Func Offset: 0x28
}

// 
// Start address: 0x124ed0
void shBattleExec()
{
	// Line 1051, Address: 0x124ed0, Func Offset: 0
	// Line 1052, Address: 0x124ed8, Func Offset: 0x8
	// Line 1053, Address: 0x124ee0, Func Offset: 0x10
	// Func End, Address: 0x124ef0, Func Offset: 0x20
}

