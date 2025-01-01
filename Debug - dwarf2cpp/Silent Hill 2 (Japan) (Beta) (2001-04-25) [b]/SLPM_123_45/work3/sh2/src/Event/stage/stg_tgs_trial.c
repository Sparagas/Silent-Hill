typedef struct PAD_3D;
typedef struct _VC_LOCUS_CIRCLE_CAM_PARAM;
typedef union fsFileIndex;
typedef struct _anon0;
typedef struct _VC_ROAD_AREA;
typedef union fsFile;
typedef enum _VC_FLAGS : unsigned short;
typedef struct PAD_2D;
typedef struct shBattleFight;
typedef struct SubCharacter;
typedef struct PAD_INFO;
typedef struct shBattleShot;
typedef struct _VC_ROAD_DATA;
typedef struct shSkelton;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct Pad_KeyConfig;
typedef struct SubObject;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef union _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_WALL;
typedef struct shPlayerWork;
typedef union _anon5;
typedef struct Model_List;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _VC_NEAR_ROAD_DATA;
typedef struct fsCdFile;
typedef struct _CL_VHIT_CHARA;
typedef struct Item;
typedef struct _VC_WATCH_MV_PARAM;
typedef struct _anon6;
typedef struct _CL_VHIT_RESULT;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct fsMgcFile;
typedef union _anon7;
typedef struct _VC_CAM_MV_PARAM;
typedef struct _VC_THROUGH_DOOR_CAM_PARAM;
typedef struct fsMgfFile;
typedef struct _anon8;
typedef struct DramaDemo_MessageTime;
typedef struct _anon9;
typedef struct fsHdFile;
typedef struct _VC_LIMIT_AREA;
typedef struct DramaDemo_PlayInfo;
typedef struct sh2gfw_AREA_HEAD;
typedef struct fsMgpFile;
typedef struct _VC_FIX_CAM_PARAM;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct _VC_WORK;
typedef struct _anon10;
typedef struct PicDraw_Data;
typedef struct _anon11;
typedef struct _SH2_SYS;
typedef struct _VC_FIX_ANG_CAM_PARAM;

typedef void(*type_16)(SubCharacter*);
typedef int(*type_18)();
typedef void(*type_20)(SubCharacter*);
typedef void(*type_35)();
typedef void(*type_50)(SubCharacter*);
typedef void(*type_54)(SubCharacter*);

typedef Model_List type_0[5];
typedef unsigned int type_1[8];
typedef unsigned char type_2[4];
typedef unsigned char type_3[4][10];
typedef fsFileIndex type_4[1];
typedef unsigned char type_5[4];
typedef unsigned char type_6[4];
typedef short type_7[2];
typedef short type_8[2][5];
typedef int type_9[2];
typedef PAD_INFO type_10[10];
typedef int type_11[2][4];
typedef int type_12[2][4][10];
typedef fsFileIndex type_13[1];
typedef fsFileIndex type_14[1];
typedef unsigned char type_15[10];
typedef shAttackInfo type_17[46];
typedef int(*type_19)()[17];
typedef fsFileIndex type_21[1];
typedef unsigned char type_22[2];
typedef _anon4 type_23[12];
typedef unsigned char type_24[3];
typedef unsigned char type_25[4];
typedef unsigned char type_26[2];
typedef float type_27[4];
typedef fsFileIndex type_28[1];
typedef unsigned int type_29[256];
typedef _anon6 type_30[13];
typedef unsigned int type_31[32];
typedef unsigned char type_32[4];
typedef char type_33[4];
typedef char type_34[4];
typedef char type_36[0];
typedef unsigned char type_37[4];
typedef unsigned char type_38[1236];
typedef _VC_NEAR_ROAD_DATA type_39[128];
typedef unsigned char type_40[10];
typedef int type_41[4];
typedef int type_42[4][4];
typedef fsFileIndex type_43[1];
typedef unsigned int type_44[2];
typedef unsigned char type_45[2];
typedef unsigned short type_46[11];
typedef int type_47[2];
typedef int type_48[2][4];
typedef fsFileIndex type_49[1];
typedef short type_51[4];
typedef short type_52[4][4];
typedef short type_53[4][4][9];
typedef fsFileIndex type_55[1];
typedef float type_56[4];
typedef unsigned short type_57[3];
typedef fsFileIndex type_58[1];
typedef unsigned char type_59[2];
typedef unsigned char type_60[2][2];
typedef unsigned char type_61[2][2][5];
typedef float type_62[4];
typedef float type_63[4][4];
typedef short type_64[2];
typedef short type_65[2][4];
typedef unsigned char type_66[13];
typedef short type_67[2][4][9];
typedef fsFileIndex type_68[1];
typedef fsFileIndex type_69[1];
typedef char type_70[24091];
typedef fsFileIndex type_71[1];
typedef float type_72[2];
typedef float type_73[2][3];
typedef float type_74[2][3][5];
typedef fsFileIndex type_75[1];
typedef _anon2 type_76[119];
typedef fsFileIndex type_77[1];
typedef unsigned char type_78[34];
typedef float type_79[4];
typedef float type_80[4][4];
typedef float type_81[4][2];

struct PAD_3D
{
	char round_way;
	unsigned char reserved1;
	unsigned char lslide;
	unsigned char rslide;
	unsigned char lturn180;
	unsigned char rturn180;
};

struct _VC_LOCUS_CIRCLE_CAM_PARAM
{
	float ang_y;
	float radius;
};

union fsFileIndex
{
	_anon0 index;
	unsigned long pack;
};

struct _anon0
{
	fsFile* fp;
	char* name;
};

struct _VC_ROAD_AREA
{
	float x0;
	float z0;
	float x1;
	float z1;
	float x2;
	float z2;
	float min_hy;
	float max_hy;
};

union fsFile
{
	_anon11 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
};

enum _VC_FLAGS : unsigned short
{
	VC_USER_CAM_F = 0x1,
	VC_USER_WATCH_F,
	VC_WARP_CAM_F = 0x4,
	VC_WARP_WATCH_F = 0x8,
	VC_WARP_CAM_TGT_F = 0x10,
	VC_PROJ_MOMENT_CHANGE_F = 0x40,
	VC_VISIBLE_CHARA_F = 0x80,
	VC_INHIBIT_FAR_WATCH_F = 0x100,
	VC_PRS_F_VIEW_F = 0x200,
	VC_OLD_PRS_F_VIEW_F = 0x400,
	VC_INIT_FLAGS = 0x1c,
	VC_ALL_CAM_FLAGS = 0x5,
	VC_ALL_WATCH_FLAGS = 0x82,
	VC_USER_MODE_FLAGS = 0x3,
	VC_ALL_WARP_FLAGS = 0x1c
};

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
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
	_anon8 pos;
	_anon8 rot;
	_anon8 pos_spd;
	_anon8 rot_spd;
	_anon10 mat;
	shSkelton* sk_top;
	float eye_y;
	float center_y;
	float spd;
	float spd_org;
	float spd_y;
	float spd_roty;
	float grnd_normal[4];
	float grnd_height;
	_anon8 b_pos;
	_anon8 b_rot;
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

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct _VC_ROAD_DATA
{
	_VC_ROAD_AREA lim_sw;
	_VC_ROAD_AREA lim_rd;
	int flags;
	int area_size_type;
	int rd_type;
	int mv_y_type;
	float ofs_watch_hy;
	int rd_dir_type;
	float projection;
	float proj_sec;
	int cam_mv_type;
	_anon1 tmp;
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon10 src_m;
	_anon8 src_t;
	_anon10 des_m;
	_anon8 des_t;
	_anon8 axis;
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
};

struct SubObject
{
	unsigned int status;
	unsigned int sub_status;
	unsigned int sub_st;
	short kind;
	short id;
	unsigned int step;
	_anon8 pos;
	_anon8 rot;
	_anon8 pos_spd;
	_anon8 rot_spd;
	_anon10 mat;
	void(*function)(SubCharacter*);
	void(*effecter_function)(SubCharacter*);
	SubObject* pre;
	SubObject* next;
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

union _anon1
{
	_VC_FIX_CAM_PARAM stl;
	_VC_FIX_ANG_CAM_PARAM fix;
	_VC_LOCUS_CIRCLE_CAM_PARAM cir;
};

struct _anon2
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
};

struct _anon3
{
	unsigned int flag[256];
	unsigned int enemy[32];
	unsigned char safe[4];
	char guruguru[4];
	char cylinder[4];
	unsigned short clock;
	unsigned short carbon;
	unsigned short hanging;
	unsigned char trunk[4];
};

struct _anon4
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
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

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

struct shPlayerWork
{
	SubCharacter* player;
	_anon8 dist_rot;
	_anon8 dist_pos;
	_anon8 pos;
	_anon8 rot;
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
	_anon8 tgt_body_angle;
	_anon8 tgt_neck_angle;
	_anon8 tgt_arms_angle;
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

union _anon5
{
	shBattleFight fight;
	shBattleShot shot;
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

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
};

struct _VC_NEAR_ROAD_DATA
{
	_VC_ROAD_DATA* road_p;
	int rd_dir_type;
	int use_priority;
	float chara2road_sum_dist;
	float chara2road_vec_x;
	float chara2road_vec_z;
	_VC_LIMIT_AREA rd;
	_VC_LIMIT_AREA sw;
	float rotmat[4][4];
	float rotinvmat[4][4];
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

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
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

struct _VC_WATCH_MV_PARAM
{
	float ang_accel_x;
	float ang_accel_y;
	float max_ang_spd_x;
	float max_ang_spd_y;
};

struct _anon6
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

struct _CL_VHIT_RESULT
{
	int kind;
	_anon7 hobj;
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

union _anon7
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct _VC_CAM_MV_PARAM
{
	float accel_xz;
	float accel_y;
	float max_spd_xz;
	float max_spd_y;
};

struct _VC_THROUGH_DOOR_CAM_PARAM
{
	int active_f;
	float timer;
	float rail_ang_y;
	float rail_sta_pos[4];
	float rail_sta_to_chara_dist;
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

struct _anon8
{
	float x;
	float y;
	float z;
	float w;
};

struct DramaDemo_MessageTime
{
	unsigned short start;
	unsigned short end;
};

struct _anon9
{
	_anon2* ev_list;
	unsigned char* ev_pos;
	int(*ev_prog)();
	_anon4* gi_list;
	Model_List* mdl_list;
	_anon6* en_list;
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

struct _VC_LIMIT_AREA
{
	float min_hx;
	float max_hx;
	float min_hz;
	float max_hz;
	float min_hy;
	float max_hy;
};

struct DramaDemo_PlayInfo
{
	char* adr_dds_top;
	short* adr_anim;
	DramaDemo_MessageTime* adr_msg_time;
	short msg_start;
	short voice_sd_no;
	int* adr_voice;
};

struct sh2gfw_AREA_HEAD
{
	unsigned int area_id;
	unsigned int toGlobalTexHead;
	unsigned int toGlobalClutsHead;
	unsigned int date;
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

struct _VC_FIX_CAM_PARAM
{
	float sta_base_ang_y;
	float end_base_ang_y;
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

struct _VC_WORK
{
	int view_cam_active_f;
	_VC_ROAD_DATA* vc_road_ary;
	_VC_FLAGS flags;
	int through_door_activate_init_f;
	_VC_THROUGH_DOOR_CAM_PARAM through_door;
	float scr_half_ang_wy;
	float scr_half_ang_wx;
	_VC_CAM_MV_PARAM user_cam_mv_prm;
	float cam_tgt_pos[4];
	float cam_pos[4];
	float cam_mv_ang_y;
	float cam_velo[4];
	float old_cam_excl_area_r;
	_VC_WATCH_MV_PARAM user_watch_mv_prm;
	float watch_tgt_pos[4];
	float watch_tgt_max_y;
	float watch_tgt_ang_z;
	float cam_mat_ang[4];
	float cam_mat[4][4];
	float ofs_cam_ang[4];
	float ofs_cam_ang_spd[4];
	float base_cam_ang[4];
	float old_base_cam_ang[4];
	float cam_chara2ideal_ang_y;
	float cam_tgt_velo[4];
	float cam_tgt_mv_ang_y;
	float cam_tgt_spd;
	float chara_pos[4];
	float chara_bottom_y;
	float chara_top_y;
	float chara_center_y;
	float chara_grnd_y;
	float chara_head_pos[4];
	float chara_mv_spd;
	float chara_mv_ang_y;
	float chara_ang_spd_y;
	float chara_eye_ang_y;
	float chara_eye_ang_wy;
	float chara_watch_xz_r;
	_VC_NEAR_ROAD_DATA near_road_ary[128];
	int near_road_suu;
	_VC_NEAR_ROAD_DATA cur_near_road;
	SubCharacter* nearest_enemy_p;
	float nearest_enemy_xz_dist;
	float enemy_input_watch_y;
};

struct _anon10
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

struct _anon11
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
	int main_status;
	unsigned int boot_first;
	unsigned int soft_reset;
	unsigned int frame_cnt;
};

struct _VC_FIX_ANG_CAM_PARAM
{
	float ang_x;
	float ang_y;
};

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
unsigned char ev_pos[1236];
_anon2 ev_list[119];
_anon4 gi_list[12];
char dds_tsuri[24091];
int(*ev_prog)()[17];
Model_List mdl_list[5];
_anon6 en_list[13];
_anon9 stage_tgs_trial;
float fly_pos[4];
float wheel_pos_e[4];
float wheel_pos_w[4];
float ev_timer;
Pad_KeyConfig key_config;
float dtf;
int ev_s_step;
int ev_p_step;
fsFileIndex data_pic_etc_cesa_tex[1];
int s11_ton;
_anon3 game_flag;
Item item;
_SH2_SYS Sh2sys;
shPlayerWork sh2jms;
char pic_buf_1[0];
fsFileIndex data_pic_hsp_p_boxnumber_2_tex[1];
fsFileIndex data_pic_hsp_p_boxnumber_tex[1];
int ev_prog_flag_set;
int ev_cancel;
float cyl_alp;
unsigned char number_tex;
unsigned char lapis_tex;
fsFileIndex data_pic_hsp_p_hair_hair_tex[1];
fsFileIndex data_pic_hsp_p_hair_tex[1];
float ev_cursor_y;
float ev_cursor_x;
fsFileIndex data_pic_etc_carsol_tex[1];
fsFileIndex data_pic_hsp_pboxkey01_tex[1];
fsFileIndex data_pic_hsp_p_box_tex[1];
fsFileIndex data_pic_hsp_p_drainage_key_tex[1];
fsFileIndex data_pic_hsp_p_drainage_tex[1];
fsFileIndex data_pic_hsp_p_doctormemo_key_tex[1];
fsFileIndex data_pic_hsp_p_doctormemo_tex[1];
fsFileIndex data_pic_hsp_p_h_elevator_botan_tex[1];
fsFileIndex data_pic_hsp_p_h_elevator_tex[1];
float s11_timer;
float office_3d_rot;
float office_3d_timer;
_VC_WORK vcWork;
short c_y;
short c_x;

int EvProgTrialStartSet();
int EvProgGetHospitalMap();
int EvProgGetNeedle();
int EvProgGuruguruNumber();
int EvProgLouiseTakecare();
int EvProgBoxWithKey();
int EvProgBoxWithKeyLayer();
int EvProgBoxWithKeyCursor();
int EvProgBoxWithKeyOpen(int alp);
int EvProgEmptyBox();
int EvProgOnlyNeedle();
int EvProgOnlyHair();
int EvProgInShowerDrain();
int EvProgFishKey();
int EvProgDoctorMemo1st();
int EvProgDoctorMemo2nd();
int EvProgUseElevatorKey();
int EvProgElevatorButton();
int EvProgElevatorButtonCheck();
int EvProgElevatorButtonLight();
int EvProgTrialEnd();
void EvRoomInit();
void EvAllTimeFunc();

// 
// Start address: 0x1bf070
int EvProgTrialStartSet()
{
	float dummy[4];
	// Line 175, Address: 0x1bf070, Func Offset: 0
	// Line 176, Address: 0x1bf078, Func Offset: 0x8
	// Line 178, Address: 0x1bf08c, Func Offset: 0x1c
	// Line 180, Address: 0x1bf0a0, Func Offset: 0x30
	// Line 185, Address: 0x1bf0dc, Func Offset: 0x6c
	// Line 186, Address: 0x1bf0e8, Func Offset: 0x78
	// Line 187, Address: 0x1bf0f4, Func Offset: 0x84
	// Line 188, Address: 0x1bf100, Func Offset: 0x90
	// Line 201, Address: 0x1bf10c, Func Offset: 0x9c
	// Line 202, Address: 0x1bf118, Func Offset: 0xa8
	// Line 203, Address: 0x1bf124, Func Offset: 0xb4
	// Line 204, Address: 0x1bf130, Func Offset: 0xc0
	// Line 206, Address: 0x1bf13c, Func Offset: 0xcc
	// Line 207, Address: 0x1bf154, Func Offset: 0xe4
	// Line 208, Address: 0x1bf160, Func Offset: 0xf0
	// Line 209, Address: 0x1bf16c, Func Offset: 0xfc
	// Line 210, Address: 0x1bf178, Func Offset: 0x108
	// Line 211, Address: 0x1bf184, Func Offset: 0x114
	// Line 212, Address: 0x1bf1a0, Func Offset: 0x130
	// Line 213, Address: 0x1bf1ac, Func Offset: 0x13c
	// Line 215, Address: 0x1bf1b8, Func Offset: 0x148
	// Line 216, Address: 0x1bf1d0, Func Offset: 0x160
	// Line 217, Address: 0x1bf1e4, Func Offset: 0x174
	// Line 218, Address: 0x1bf1f8, Func Offset: 0x188
	// Line 219, Address: 0x1bf20c, Func Offset: 0x19c
	// Line 220, Address: 0x1bf220, Func Offset: 0x1b0
	// Line 221, Address: 0x1bf234, Func Offset: 0x1c4
	// Line 222, Address: 0x1bf248, Func Offset: 0x1d8
	// Line 223, Address: 0x1bf25c, Func Offset: 0x1ec
	// Line 224, Address: 0x1bf270, Func Offset: 0x200
	// Line 225, Address: 0x1bf284, Func Offset: 0x214
	// Line 226, Address: 0x1bf298, Func Offset: 0x228
	// Line 227, Address: 0x1bf2b0, Func Offset: 0x240
	// Line 228, Address: 0x1bf2c8, Func Offset: 0x258
	// Line 229, Address: 0x1bf2e0, Func Offset: 0x270
	// Line 230, Address: 0x1bf2f8, Func Offset: 0x288
	// Line 231, Address: 0x1bf310, Func Offset: 0x2a0
	// Line 232, Address: 0x1bf328, Func Offset: 0x2b8
	// Line 233, Address: 0x1bf340, Func Offset: 0x2d0
	// Line 234, Address: 0x1bf354, Func Offset: 0x2e4
	// Line 235, Address: 0x1bf36c, Func Offset: 0x2fc
	// Line 236, Address: 0x1bf380, Func Offset: 0x310
	// Line 237, Address: 0x1bf398, Func Offset: 0x328
	// Line 238, Address: 0x1bf3b0, Func Offset: 0x340
	// Line 239, Address: 0x1bf3c8, Func Offset: 0x358
	// Line 240, Address: 0x1bf3e0, Func Offset: 0x370
	// Line 241, Address: 0x1bf3f8, Func Offset: 0x388
	// Line 242, Address: 0x1bf410, Func Offset: 0x3a0
	// Line 243, Address: 0x1bf428, Func Offset: 0x3b8
	// Line 244, Address: 0x1bf43c, Func Offset: 0x3cc
	// Line 245, Address: 0x1bf450, Func Offset: 0x3e0
	// Line 246, Address: 0x1bf464, Func Offset: 0x3f4
	// Line 247, Address: 0x1bf478, Func Offset: 0x408
	// Line 248, Address: 0x1bf490, Func Offset: 0x420
	// Line 249, Address: 0x1bf4a8, Func Offset: 0x438
	// Line 250, Address: 0x1bf4c0, Func Offset: 0x450
	// Line 251, Address: 0x1bf4d8, Func Offset: 0x468
	// Line 252, Address: 0x1bf4f0, Func Offset: 0x480
	// Line 253, Address: 0x1bf508, Func Offset: 0x498
	// Line 254, Address: 0x1bf520, Func Offset: 0x4b0
	// Line 255, Address: 0x1bf538, Func Offset: 0x4c8
	// Line 256, Address: 0x1bf550, Func Offset: 0x4e0
	// Line 257, Address: 0x1bf568, Func Offset: 0x4f8
	// Line 258, Address: 0x1bf580, Func Offset: 0x510
	// Line 259, Address: 0x1bf598, Func Offset: 0x528
	// Line 260, Address: 0x1bf5ac, Func Offset: 0x53c
	// Line 261, Address: 0x1bf5c0, Func Offset: 0x550
	// Line 263, Address: 0x1bf5d4, Func Offset: 0x564
	// Line 265, Address: 0x1bf5ec, Func Offset: 0x57c
	// Line 269, Address: 0x1bf600, Func Offset: 0x590
	// Line 272, Address: 0x1bf608, Func Offset: 0x598
	// Line 274, Address: 0x1bf62c, Func Offset: 0x5bc
	// Line 275, Address: 0x1bf640, Func Offset: 0x5d0
	// Line 278, Address: 0x1bf648, Func Offset: 0x5d8
	// Line 279, Address: 0x1bf664, Func Offset: 0x5f4
	// Line 280, Address: 0x1bf66c, Func Offset: 0x5fc
	// Line 281, Address: 0x1bf674, Func Offset: 0x604
	// Line 282, Address: 0x1bf67c, Func Offset: 0x60c
	// Line 288, Address: 0x1bf6d4, Func Offset: 0x664
	// Line 291, Address: 0x1bf6e0, Func Offset: 0x670
	// Line 292, Address: 0x1bf6e4, Func Offset: 0x674
	// Func End, Address: 0x1bf6f4, Func Offset: 0x684
}

// 
// Start address: 0x1bf700
int EvProgGetHospitalMap()
{
	// Line 301, Address: 0x1bf700, Func Offset: 0
	// Line 302, Address: 0x1bf704, Func Offset: 0x4
	// Func End, Address: 0x1bf70c, Func Offset: 0xc
}

// 
// Start address: 0x1bf710
int EvProgGetNeedle()
{
	// Line 308, Address: 0x1bf710, Func Offset: 0
	// Line 309, Address: 0x1bf718, Func Offset: 0x8
	// Line 310, Address: 0x1bf728, Func Offset: 0x18
	// Func End, Address: 0x1bf738, Func Offset: 0x28
}

// 
// Start address: 0x1bf740
int EvProgGuruguruNumber()
{
	int i;
	int no;
	PicDraw_Data pic;
	short tex[4][4][9];
	short pos[2][4][9];
	// Line 316, Address: 0x1bf740, Func Offset: 0
	// Line 350, Address: 0x1bf750, Func Offset: 0x10
	// Line 352, Address: 0x1bf7a4, Func Offset: 0x64
	// Line 353, Address: 0x1bf7b8, Func Offset: 0x78
	// Line 354, Address: 0x1bf7ec, Func Offset: 0xac
	// Line 355, Address: 0x1bf800, Func Offset: 0xc0
	// Line 358, Address: 0x1bf808, Func Offset: 0xc8
	// Line 359, Address: 0x1bf81c, Func Offset: 0xdc
	// Line 360, Address: 0x1bf82c, Func Offset: 0xec
	// Line 361, Address: 0x1bf834, Func Offset: 0xf4
	// Line 362, Address: 0x1bf848, Func Offset: 0x108
	// Line 363, Address: 0x1bf864, Func Offset: 0x124
	// Line 366, Address: 0x1bf86c, Func Offset: 0x12c
	// Line 367, Address: 0x1bf880, Func Offset: 0x140
	// Line 368, Address: 0x1bf894, Func Offset: 0x154
	// Line 371, Address: 0x1bf8bc, Func Offset: 0x17c
	// Line 372, Address: 0x1bf8d0, Func Offset: 0x190
	// Line 376, Address: 0x1bf8d8, Func Offset: 0x198
	// Line 377, Address: 0x1bf8e0, Func Offset: 0x1a0
	// Line 378, Address: 0x1bf8e8, Func Offset: 0x1a8
	// Line 380, Address: 0x1bf904, Func Offset: 0x1c4
	// Line 382, Address: 0x1bf914, Func Offset: 0x1d4
	// Line 383, Address: 0x1bf93c, Func Offset: 0x1fc
	// Line 384, Address: 0x1bf944, Func Offset: 0x204
	// Line 385, Address: 0x1bf978, Func Offset: 0x238
	// Line 386, Address: 0x1bf984, Func Offset: 0x244
	// Line 390, Address: 0x1bf99c, Func Offset: 0x25c
	// Line 393, Address: 0x1bfab0, Func Offset: 0x370
	// Line 394, Address: 0x1bfb74, Func Offset: 0x434
	// Line 395, Address: 0x1bfb80, Func Offset: 0x440
	// Line 396, Address: 0x1bfb94, Func Offset: 0x454
	// Line 397, Address: 0x1bfbb0, Func Offset: 0x470
	// Line 398, Address: 0x1bfbb8, Func Offset: 0x478
	// Line 399, Address: 0x1bfbcc, Func Offset: 0x48c
	// Line 400, Address: 0x1bfbe8, Func Offset: 0x4a8
	// Line 401, Address: 0x1bfbfc, Func Offset: 0x4bc
	// Line 403, Address: 0x1bfc04, Func Offset: 0x4c4
	// Line 404, Address: 0x1bfc18, Func Offset: 0x4d8
	// Line 407, Address: 0x1bfc2c, Func Offset: 0x4ec
	// Line 408, Address: 0x1bfc30, Func Offset: 0x4f0
	// Line 409, Address: 0x1bfc44, Func Offset: 0x504
	// Line 410, Address: 0x1bfc58, Func Offset: 0x518
	// Line 412, Address: 0x1bfc64, Func Offset: 0x524
	// Line 413, Address: 0x1bfc68, Func Offset: 0x528
	// Func End, Address: 0x1bfc80, Func Offset: 0x540
}

// 
// Start address: 0x1bfc80
int EvProgLouiseTakecare()
{
	// Line 419, Address: 0x1bfc80, Func Offset: 0
	// Line 420, Address: 0x1bfc88, Func Offset: 0x8
	// Line 422, Address: 0x1bfcc4, Func Offset: 0x44
	// Line 423, Address: 0x1bfcf8, Func Offset: 0x78
	// Line 424, Address: 0x1bfd10, Func Offset: 0x90
	// Line 425, Address: 0x1bfd24, Func Offset: 0xa4
	// Line 428, Address: 0x1bfd2c, Func Offset: 0xac
	// Line 429, Address: 0x1bfd40, Func Offset: 0xc0
	// Line 430, Address: 0x1bfd50, Func Offset: 0xd0
	// Line 431, Address: 0x1bfd58, Func Offset: 0xd8
	// Line 432, Address: 0x1bfd6c, Func Offset: 0xec
	// Line 434, Address: 0x1bfd88, Func Offset: 0x108
	// Line 437, Address: 0x1bfd90, Func Offset: 0x110
	// Line 438, Address: 0x1bfda4, Func Offset: 0x124
	// Line 439, Address: 0x1bfdb8, Func Offset: 0x138
	// Line 442, Address: 0x1bfdc0, Func Offset: 0x140
	// Line 443, Address: 0x1bfdd4, Func Offset: 0x154
	// Line 445, Address: 0x1bfde0, Func Offset: 0x160
	// Line 446, Address: 0x1bfde4, Func Offset: 0x164
	// Func End, Address: 0x1bfdf4, Func Offset: 0x174
}

// 
// Start address: 0x1bfe00
int EvProgBoxWithKey()
{
	// Line 456, Address: 0x1bfe00, Func Offset: 0
	// Line 457, Address: 0x1bfe08, Func Offset: 0x8
	// Line 459, Address: 0x1bfe38, Func Offset: 0x38
	// Line 460, Address: 0x1bfe64, Func Offset: 0x64
	// Line 461, Address: 0x1bfe74, Func Offset: 0x74
	// Line 462, Address: 0x1bfe88, Func Offset: 0x88
	// Line 463, Address: 0x1bfe9c, Func Offset: 0x9c
	// Line 464, Address: 0x1bfeb0, Func Offset: 0xb0
	// Line 467, Address: 0x1bfeb8, Func Offset: 0xb8
	// Line 471, Address: 0x1bfee4, Func Offset: 0xe4
	// Line 472, Address: 0x1bfefc, Func Offset: 0xfc
	// Line 473, Address: 0x1bff10, Func Offset: 0x110
	// Line 474, Address: 0x1bff28, Func Offset: 0x128
	// Line 476, Address: 0x1bff44, Func Offset: 0x144
	// Line 479, Address: 0x1bff4c, Func Offset: 0x14c
	// Line 480, Address: 0x1bff54, Func Offset: 0x154
	// Line 481, Address: 0x1bff5c, Func Offset: 0x15c
	// Line 482, Address: 0x1bff64, Func Offset: 0x164
	// Line 483, Address: 0x1bff6c, Func Offset: 0x16c
	// Line 484, Address: 0x1bff74, Func Offset: 0x174
	// Line 486, Address: 0x1bff8c, Func Offset: 0x18c
	// Line 487, Address: 0x1bffa4, Func Offset: 0x1a4
	// Line 488, Address: 0x1bffd8, Func Offset: 0x1d8
	// Line 490, Address: 0x1bffec, Func Offset: 0x1ec
	// Line 493, Address: 0x1bfff4, Func Offset: 0x1f4
	// Line 494, Address: 0x1bfffc, Func Offset: 0x1fc
	// Line 495, Address: 0x1c0004, Func Offset: 0x204
	// Line 496, Address: 0x1c000c, Func Offset: 0x20c
	// Line 497, Address: 0x1c0014, Func Offset: 0x214
	// Line 498, Address: 0x1c001c, Func Offset: 0x21c
	// Line 499, Address: 0x1c0030, Func Offset: 0x230
	// Line 500, Address: 0x1c003c, Func Offset: 0x23c
	// Line 501, Address: 0x1c0048, Func Offset: 0x248
	// Line 503, Address: 0x1c005c, Func Offset: 0x25c
	// Line 506, Address: 0x1c0064, Func Offset: 0x264
	// Line 507, Address: 0x1c006c, Func Offset: 0x26c
	// Line 508, Address: 0x1c0074, Func Offset: 0x274
	// Line 509, Address: 0x1c007c, Func Offset: 0x27c
	// Line 510, Address: 0x1c0084, Func Offset: 0x284
	// Line 511, Address: 0x1c0090, Func Offset: 0x290
	// Line 512, Address: 0x1c0098, Func Offset: 0x298
	// Line 516, Address: 0x1c0138, Func Offset: 0x338
	// Line 517, Address: 0x1c0150, Func Offset: 0x350
	// Line 518, Address: 0x1c0168, Func Offset: 0x368
	// Line 519, Address: 0x1c017c, Func Offset: 0x37c
	// Line 520, Address: 0x1c01b4, Func Offset: 0x3b4
	// Line 523, Address: 0x1c01bc, Func Offset: 0x3bc
	// Line 524, Address: 0x1c01c4, Func Offset: 0x3c4
	// Line 525, Address: 0x1c01cc, Func Offset: 0x3cc
	// Line 526, Address: 0x1c01d4, Func Offset: 0x3d4
	// Line 527, Address: 0x1c01e0, Func Offset: 0x3e0
	// Line 528, Address: 0x1c01e8, Func Offset: 0x3e8
	// Line 529, Address: 0x1c0210, Func Offset: 0x410
	// Line 530, Address: 0x1c0230, Func Offset: 0x430
	// Line 531, Address: 0x1c0248, Func Offset: 0x448
	// Line 532, Address: 0x1c0264, Func Offset: 0x464
	// Line 534, Address: 0x1c0278, Func Offset: 0x478
	// Line 537, Address: 0x1c0280, Func Offset: 0x480
	// Line 538, Address: 0x1c0288, Func Offset: 0x488
	// Line 539, Address: 0x1c0290, Func Offset: 0x490
	// Line 540, Address: 0x1c0298, Func Offset: 0x498
	// Line 541, Address: 0x1c02d0, Func Offset: 0x4d0
	// Line 542, Address: 0x1c02e4, Func Offset: 0x4e4
	// Line 545, Address: 0x1c02ec, Func Offset: 0x4ec
	// Line 548, Address: 0x1c0314, Func Offset: 0x514
	// Line 549, Address: 0x1c0320, Func Offset: 0x520
	// Line 551, Address: 0x1c0334, Func Offset: 0x534
	// Line 554, Address: 0x1c033c, Func Offset: 0x53c
	// Line 555, Address: 0x1c0344, Func Offset: 0x544
	// Line 556, Address: 0x1c034c, Func Offset: 0x54c
	// Line 557, Address: 0x1c0358, Func Offset: 0x558
	// Line 558, Address: 0x1c0360, Func Offset: 0x560
	// Line 559, Address: 0x1c0398, Func Offset: 0x598
	// Line 560, Address: 0x1c03ac, Func Offset: 0x5ac
	// Line 563, Address: 0x1c03b4, Func Offset: 0x5b4
	// Line 564, Address: 0x1c03bc, Func Offset: 0x5bc
	// Line 565, Address: 0x1c03c4, Func Offset: 0x5c4
	// Line 566, Address: 0x1c03d0, Func Offset: 0x5d0
	// Line 567, Address: 0x1c03d8, Func Offset: 0x5d8
	// Line 568, Address: 0x1c03e0, Func Offset: 0x5e0
	// Line 569, Address: 0x1c0408, Func Offset: 0x608
	// Line 572, Address: 0x1c0410, Func Offset: 0x610
	// Line 573, Address: 0x1c042c, Func Offset: 0x62c
	// Line 574, Address: 0x1c0450, Func Offset: 0x650
	// Line 575, Address: 0x1c0460, Func Offset: 0x660
	// Line 577, Address: 0x1c0474, Func Offset: 0x674
	// Line 578, Address: 0x1c047c, Func Offset: 0x67c
	// Line 579, Address: 0x1c0484, Func Offset: 0x684
	// Line 581, Address: 0x1c04c0, Func Offset: 0x6c0
	// Line 582, Address: 0x1c04c8, Func Offset: 0x6c8
	// Line 585, Address: 0x1c04d0, Func Offset: 0x6d0
	// Line 586, Address: 0x1c04d8, Func Offset: 0x6d8
	// Line 587, Address: 0x1c04e0, Func Offset: 0x6e0
	// Line 588, Address: 0x1c04e8, Func Offset: 0x6e8
	// Line 589, Address: 0x1c04f0, Func Offset: 0x6f0
	// Line 590, Address: 0x1c0508, Func Offset: 0x708
	// Line 591, Address: 0x1c051c, Func Offset: 0x71c
	// Line 593, Address: 0x1c0530, Func Offset: 0x730
	// Line 596, Address: 0x1c0538, Func Offset: 0x738
	// Line 597, Address: 0x1c054c, Func Offset: 0x74c
	// Line 598, Address: 0x1c0568, Func Offset: 0x768
	// Line 600, Address: 0x1c0574, Func Offset: 0x774
	// Line 601, Address: 0x1c0578, Func Offset: 0x778
	// Func End, Address: 0x1c0588, Func Offset: 0x788
}

// 
// Start address: 0x1c0590
int EvProgBoxWithKeyLayer()
{
	int i;
	int otp;
	int ring;
	int no;
	PicDraw_Data pic;
	unsigned char cyl_tex[4][10];
	int cyl_pos[2][4][10];
	// Line 606, Address: 0x1c0590, Func Offset: 0
	// Line 631, Address: 0x1c059c, Func Offset: 0xc
	// Line 633, Address: 0x1c05b8, Func Offset: 0x28
	// Line 635, Address: 0x1c05c8, Func Offset: 0x38
	// Line 636, Address: 0x1c05f0, Func Offset: 0x60
	// Line 637, Address: 0x1c0600, Func Offset: 0x70
	// Line 638, Address: 0x1c060c, Func Offset: 0x7c
	// Line 639, Address: 0x1c0618, Func Offset: 0x88
	// Line 640, Address: 0x1c061c, Func Offset: 0x8c
	// Line 641, Address: 0x1c0620, Func Offset: 0x90
	// Line 642, Address: 0x1c0624, Func Offset: 0x94
	// Line 643, Address: 0x1c062c, Func Offset: 0x9c
	// Line 644, Address: 0x1c0648, Func Offset: 0xb8
	// Line 645, Address: 0x1c064c, Func Offset: 0xbc
	// Line 652, Address: 0x1c0650, Func Offset: 0xc0
	// Line 655, Address: 0x1c0754, Func Offset: 0x1c4
	// Line 656, Address: 0x1c07e8, Func Offset: 0x258
	// Line 658, Address: 0x1c07ec, Func Offset: 0x25c
	// Line 659, Address: 0x1c0840, Func Offset: 0x2b0
	// Line 660, Address: 0x1c084c, Func Offset: 0x2bc
	// Line 661, Address: 0x1c085c, Func Offset: 0x2cc
	// Line 662, Address: 0x1c0860, Func Offset: 0x2d0
	// Line 663, Address: 0x1c0864, Func Offset: 0x2d4
	// Func End, Address: 0x1c0878, Func Offset: 0x2e8
}

// 
// Start address: 0x1c0880
int EvProgBoxWithKeyCursor()
{
	int i;
	float cyl_touch[2][3][5];
	unsigned char cyl_touch_c[2][2][5];
	// Line 672, Address: 0x1c0880, Func Offset: 0
	// Line 683, Address: 0x1c088c, Func Offset: 0xc
	// Line 684, Address: 0x1c0898, Func Offset: 0x18
	// Line 685, Address: 0x1c08d4, Func Offset: 0x54
	// Line 687, Address: 0x1c0930, Func Offset: 0xb0
	// Line 688, Address: 0x1c096c, Func Offset: 0xec
	// Line 689, Address: 0x1c09a4, Func Offset: 0x124
	// Line 691, Address: 0x1c09fc, Func Offset: 0x17c
	// Line 692, Address: 0x1c0a34, Func Offset: 0x1b4
	// Line 694, Address: 0x1c0a44, Func Offset: 0x1c4
	// Line 696, Address: 0x1c0a6c, Func Offset: 0x1ec
	// Line 697, Address: 0x1c0a84, Func Offset: 0x204
	// Line 698, Address: 0x1c0a90, Func Offset: 0x210
	// Line 702, Address: 0x1c0db0, Func Offset: 0x530
	// Line 703, Address: 0x1c0dc8, Func Offset: 0x548
	// Line 704, Address: 0x1c0e00, Func Offset: 0x580
	// Line 706, Address: 0x1c0e18, Func Offset: 0x598
	// Line 710, Address: 0x1c1138, Func Offset: 0x8b8
	// Line 711, Address: 0x1c1150, Func Offset: 0x8d0
	// Line 712, Address: 0x1c1188, Func Offset: 0x908
	// Line 714, Address: 0x1c11a0, Func Offset: 0x920
	// Line 715, Address: 0x1c11b4, Func Offset: 0x934
	// Line 716, Address: 0x1c11b8, Func Offset: 0x938
	// Line 717, Address: 0x1c11bc, Func Offset: 0x93c
	// Func End, Address: 0x1c11d0, Func Offset: 0x950
}

// 
// Start address: 0x1c11d0
int EvProgBoxWithKeyOpen(int alp)
{
	PicDraw_Data pic;
	// Line 722, Address: 0x1c11d0, Func Offset: 0
	// Line 725, Address: 0x1c11dc, Func Offset: 0xc
	// Line 727, Address: 0x1c11f8, Func Offset: 0x28
	// Line 729, Address: 0x1c1208, Func Offset: 0x38
	// Line 730, Address: 0x1c1230, Func Offset: 0x60
	// Line 731, Address: 0x1c1238, Func Offset: 0x68
	// Line 732, Address: 0x1c1270, Func Offset: 0xa0
	// Line 733, Address: 0x1c129c, Func Offset: 0xcc
	// Line 735, Address: 0x1c12a8, Func Offset: 0xd8
	// Line 736, Address: 0x1c12ac, Func Offset: 0xdc
	// Func End, Address: 0x1c12bc, Func Offset: 0xec
}

// 
// Start address: 0x1c12c0
int EvProgEmptyBox()
{
	// Line 804, Address: 0x1c12c0, Func Offset: 0
	// Line 805, Address: 0x1c12c8, Func Offset: 0x8
	// Line 807, Address: 0x1c1304, Func Offset: 0x44
	// Line 808, Address: 0x1c1318, Func Offset: 0x58
	// Line 809, Address: 0x1c132c, Func Offset: 0x6c
	// Line 812, Address: 0x1c1334, Func Offset: 0x74
	// Line 814, Address: 0x1c1358, Func Offset: 0x98
	// Line 816, Address: 0x1c136c, Func Offset: 0xac
	// Line 819, Address: 0x1c1374, Func Offset: 0xb4
	// Line 820, Address: 0x1c137c, Func Offset: 0xbc
	// Line 821, Address: 0x1c1384, Func Offset: 0xc4
	// Line 822, Address: 0x1c138c, Func Offset: 0xcc
	// Line 823, Address: 0x1c13b4, Func Offset: 0xf4
	// Line 826, Address: 0x1c13bc, Func Offset: 0xfc
	// Line 827, Address: 0x1c13d0, Func Offset: 0x110
	// Line 830, Address: 0x1c13dc, Func Offset: 0x11c
	// Line 831, Address: 0x1c13e0, Func Offset: 0x120
	// Func End, Address: 0x1c13f0, Func Offset: 0x130
}

// 
// Start address: 0x1c13f0
int EvProgOnlyNeedle()
{
	// Line 836, Address: 0x1c13f0, Func Offset: 0
	// Line 837, Address: 0x1c13f8, Func Offset: 0x8
	// Line 839, Address: 0x1c1440, Func Offset: 0x50
	// Line 840, Address: 0x1c1454, Func Offset: 0x64
	// Line 841, Address: 0x1c1460, Func Offset: 0x70
	// Line 842, Address: 0x1c1474, Func Offset: 0x84
	// Line 845, Address: 0x1c147c, Func Offset: 0x8c
	// Line 846, Address: 0x1c148c, Func Offset: 0x9c
	// Line 847, Address: 0x1c149c, Func Offset: 0xac
	// Line 849, Address: 0x1c14b0, Func Offset: 0xc0
	// Line 852, Address: 0x1c14b8, Func Offset: 0xc8
	// Line 853, Address: 0x1c14cc, Func Offset: 0xdc
	// Line 854, Address: 0x1c14dc, Func Offset: 0xec
	// Line 856, Address: 0x1c14f0, Func Offset: 0x100
	// Line 859, Address: 0x1c14f8, Func Offset: 0x108
	// Line 860, Address: 0x1c1510, Func Offset: 0x120
	// Line 861, Address: 0x1c1524, Func Offset: 0x134
	// Line 864, Address: 0x1c152c, Func Offset: 0x13c
	// Line 865, Address: 0x1c1540, Func Offset: 0x150
	// Line 867, Address: 0x1c154c, Func Offset: 0x15c
	// Line 868, Address: 0x1c1550, Func Offset: 0x160
	// Func End, Address: 0x1c1560, Func Offset: 0x170
}

// 
// Start address: 0x1c1560
int EvProgOnlyHair()
{
	// Line 873, Address: 0x1c1560, Func Offset: 0
	// Line 874, Address: 0x1c1568, Func Offset: 0x8
	// Line 876, Address: 0x1c15b0, Func Offset: 0x50
	// Line 877, Address: 0x1c15c4, Func Offset: 0x64
	// Line 878, Address: 0x1c15d0, Func Offset: 0x70
	// Line 879, Address: 0x1c15e4, Func Offset: 0x84
	// Line 882, Address: 0x1c15ec, Func Offset: 0x8c
	// Line 883, Address: 0x1c15fc, Func Offset: 0x9c
	// Line 884, Address: 0x1c160c, Func Offset: 0xac
	// Line 886, Address: 0x1c1620, Func Offset: 0xc0
	// Line 889, Address: 0x1c1628, Func Offset: 0xc8
	// Line 890, Address: 0x1c163c, Func Offset: 0xdc
	// Line 891, Address: 0x1c164c, Func Offset: 0xec
	// Line 893, Address: 0x1c1660, Func Offset: 0x100
	// Line 896, Address: 0x1c1668, Func Offset: 0x108
	// Line 897, Address: 0x1c1680, Func Offset: 0x120
	// Line 898, Address: 0x1c1694, Func Offset: 0x134
	// Line 901, Address: 0x1c169c, Func Offset: 0x13c
	// Line 902, Address: 0x1c16b0, Func Offset: 0x150
	// Line 904, Address: 0x1c16bc, Func Offset: 0x15c
	// Line 905, Address: 0x1c16c0, Func Offset: 0x160
	// Func End, Address: 0x1c16d0, Func Offset: 0x170
}

// 
// Start address: 0x1c16d0
int EvProgInShowerDrain()
{
	int msg;
	PicDraw_Data pic;
	// Line 911, Address: 0x1c16d0, Func Offset: 0
	// Line 915, Address: 0x1c16dc, Func Offset: 0xc
	// Line 917, Address: 0x1c1730, Func Offset: 0x60
	// Line 918, Address: 0x1c1744, Func Offset: 0x74
	// Line 919, Address: 0x1c1750, Func Offset: 0x80
	// Line 920, Address: 0x1c1764, Func Offset: 0x94
	// Line 923, Address: 0x1c176c, Func Offset: 0x9c
	// Line 924, Address: 0x1c177c, Func Offset: 0xac
	// Line 925, Address: 0x1c178c, Func Offset: 0xbc
	// Line 927, Address: 0x1c17a0, Func Offset: 0xd0
	// Line 930, Address: 0x1c17a8, Func Offset: 0xd8
	// Line 933, Address: 0x1c17d0, Func Offset: 0x100
	// Line 934, Address: 0x1c17e4, Func Offset: 0x114
	// Line 937, Address: 0x1c17ec, Func Offset: 0x11c
	// Line 938, Address: 0x1c17f4, Func Offset: 0x124
	// Line 939, Address: 0x1c17fc, Func Offset: 0x12c
	// Line 940, Address: 0x1c1814, Func Offset: 0x144
	// Line 942, Address: 0x1c1830, Func Offset: 0x160
	// Line 944, Address: 0x1c1840, Func Offset: 0x170
	// Line 945, Address: 0x1c1868, Func Offset: 0x198
	// Line 946, Address: 0x1c1870, Func Offset: 0x1a0
	// Line 948, Address: 0x1c18a4, Func Offset: 0x1d4
	// Line 949, Address: 0x1c18d0, Func Offset: 0x200
	// Line 950, Address: 0x1c18dc, Func Offset: 0x20c
	// Line 951, Address: 0x1c18e0, Func Offset: 0x210
	// Line 952, Address: 0x1c18ec, Func Offset: 0x21c
	// Line 953, Address: 0x1c18f4, Func Offset: 0x224
	// Line 954, Address: 0x1c1908, Func Offset: 0x238
	// Line 955, Address: 0x1c1918, Func Offset: 0x248
	// Line 957, Address: 0x1c192c, Func Offset: 0x25c
	// Line 960, Address: 0x1c1934, Func Offset: 0x264
	// Line 961, Address: 0x1c194c, Func Offset: 0x27c
	// Line 962, Address: 0x1c1960, Func Offset: 0x290
	// Line 965, Address: 0x1c1968, Func Offset: 0x298
	// Line 966, Address: 0x1c197c, Func Offset: 0x2ac
	// Line 968, Address: 0x1c1988, Func Offset: 0x2b8
	// Line 969, Address: 0x1c198c, Func Offset: 0x2bc
	// Func End, Address: 0x1c19a0, Func Offset: 0x2d0
}

// 
// Start address: 0x1c19a0
int EvProgFishKey()
{
	float dummy[4];
	SubCharacter* scp;
	DramaDemo_PlayInfo tsuri;
	// Line 975, Address: 0x1c19a0, Func Offset: 0
	// Line 984, Address: 0x1c19ac, Func Offset: 0xc
	// Line 987, Address: 0x1c19c0, Func Offset: 0x20
	// Line 989, Address: 0x1c19fc, Func Offset: 0x5c
	// Line 990, Address: 0x1c1a04, Func Offset: 0x64
	// Line 991, Address: 0x1c1a20, Func Offset: 0x80
	// Line 992, Address: 0x1c1a3c, Func Offset: 0x9c
	// Line 993, Address: 0x1c1a58, Func Offset: 0xb8
	// Line 994, Address: 0x1c1a70, Func Offset: 0xd0
	// Line 995, Address: 0x1c1a84, Func Offset: 0xe4
	// Line 996, Address: 0x1c1a98, Func Offset: 0xf8
	// Line 997, Address: 0x1c1aa8, Func Offset: 0x108
	// Line 998, Address: 0x1c1ac4, Func Offset: 0x124
	// Line 999, Address: 0x1c1ad8, Func Offset: 0x138
	// Line 1001, Address: 0x1c1ae8, Func Offset: 0x148
	// Line 1002, Address: 0x1c1afc, Func Offset: 0x15c
	// Line 1003, Address: 0x1c1b10, Func Offset: 0x170
	// Line 1006, Address: 0x1c1b18, Func Offset: 0x178
	// Line 1007, Address: 0x1c1b44, Func Offset: 0x1a4
	// Line 1010, Address: 0x1c1b4c, Func Offset: 0x1ac
	// Line 1011, Address: 0x1c1b64, Func Offset: 0x1c4
	// Line 1012, Address: 0x1c1b78, Func Offset: 0x1d8
	// Line 1015, Address: 0x1c1b80, Func Offset: 0x1e0
	// Line 1016, Address: 0x1c1b88, Func Offset: 0x1e8
	// Line 1017, Address: 0x1c1b9c, Func Offset: 0x1fc
	// Line 1018, Address: 0x1c1bb0, Func Offset: 0x210
	// Line 1019, Address: 0x1c1bc4, Func Offset: 0x224
	// Line 1020, Address: 0x1c1bd8, Func Offset: 0x238
	// Line 1021, Address: 0x1c1bec, Func Offset: 0x24c
	// Line 1022, Address: 0x1c1c00, Func Offset: 0x260
	// Line 1023, Address: 0x1c1c0c, Func Offset: 0x26c
	// Line 1024, Address: 0x1c1c28, Func Offset: 0x288
	// Line 1025, Address: 0x1c1c3c, Func Offset: 0x29c
	// Line 1027, Address: 0x1c1c48, Func Offset: 0x2a8
	// Line 1028, Address: 0x1c1c5c, Func Offset: 0x2bc
	// Line 1029, Address: 0x1c1c68, Func Offset: 0x2c8
	// Line 1031, Address: 0x1c1c74, Func Offset: 0x2d4
	// Line 1032, Address: 0x1c1c78, Func Offset: 0x2d8
	// Func End, Address: 0x1c1c8c, Func Offset: 0x2ec
}

// 
// Start address: 0x1c1c90
int EvProgDoctorMemo1st()
{
	int alp;
	PicDraw_Data pic;
	// Line 1038, Address: 0x1c1c90, Func Offset: 0
	// Line 1042, Address: 0x1c1c98, Func Offset: 0x8
	// Line 1044, Address: 0x1c1cf8, Func Offset: 0x68
	// Line 1045, Address: 0x1c1d0c, Func Offset: 0x7c
	// Line 1046, Address: 0x1c1d18, Func Offset: 0x88
	// Line 1047, Address: 0x1c1d2c, Func Offset: 0x9c
	// Line 1048, Address: 0x1c1d3c, Func Offset: 0xac
	// Line 1049, Address: 0x1c1d44, Func Offset: 0xb4
	// Line 1050, Address: 0x1c1d58, Func Offset: 0xc8
	// Line 1052, Address: 0x1c1d74, Func Offset: 0xe4
	// Line 1055, Address: 0x1c1d7c, Func Offset: 0xec
	// Line 1058, Address: 0x1c1da4, Func Offset: 0x114
	// Line 1059, Address: 0x1c1db8, Func Offset: 0x128
	// Line 1064, Address: 0x1c1dc0, Func Offset: 0x130
	// Line 1065, Address: 0x1c1dc8, Func Offset: 0x138
	// Line 1066, Address: 0x1c1dd0, Func Offset: 0x140
	// Line 1068, Address: 0x1c1dec, Func Offset: 0x15c
	// Line 1070, Address: 0x1c1dfc, Func Offset: 0x16c
	// Line 1071, Address: 0x1c1e24, Func Offset: 0x194
	// Line 1072, Address: 0x1c1e2c, Func Offset: 0x19c
	// Line 1073, Address: 0x1c1e40, Func Offset: 0x1b0
	// Line 1074, Address: 0x1c1e74, Func Offset: 0x1e4
	// Line 1075, Address: 0x1c1ea8, Func Offset: 0x218
	// Line 1076, Address: 0x1c1ee8, Func Offset: 0x258
	// Line 1077, Address: 0x1c1f14, Func Offset: 0x284
	// Line 1078, Address: 0x1c1f20, Func Offset: 0x290
	// Line 1079, Address: 0x1c1f3c, Func Offset: 0x2ac
	// Line 1080, Address: 0x1c1f44, Func Offset: 0x2b4
	// Line 1081, Address: 0x1c1f58, Func Offset: 0x2c8
	// Line 1082, Address: 0x1c1f74, Func Offset: 0x2e4
	// Line 1083, Address: 0x1c1f88, Func Offset: 0x2f8
	// Line 1084, Address: 0x1c1f90, Func Offset: 0x300
	// Line 1085, Address: 0x1c1fa4, Func Offset: 0x314
	// Line 1086, Address: 0x1c1fb8, Func Offset: 0x328
	// Line 1087, Address: 0x1c1fcc, Func Offset: 0x33c
	// Line 1088, Address: 0x1c1fd8, Func Offset: 0x348
	// Line 1089, Address: 0x1c1fe0, Func Offset: 0x350
	// Line 1090, Address: 0x1c1ffc, Func Offset: 0x36c
	// Line 1092, Address: 0x1c2034, Func Offset: 0x3a4
	// Line 1095, Address: 0x1c203c, Func Offset: 0x3ac
	// Line 1096, Address: 0x1c2044, Func Offset: 0x3b4
	// Line 1097, Address: 0x1c204c, Func Offset: 0x3bc
	// Line 1098, Address: 0x1c2054, Func Offset: 0x3c4
	// Line 1100, Address: 0x1c206c, Func Offset: 0x3dc
	// Line 1101, Address: 0x1c2080, Func Offset: 0x3f0
	// Line 1104, Address: 0x1c2088, Func Offset: 0x3f8
	// Line 1105, Address: 0x1c209c, Func Offset: 0x40c
	// Line 1107, Address: 0x1c20a8, Func Offset: 0x418
	// Line 1108, Address: 0x1c20ac, Func Offset: 0x41c
	// Func End, Address: 0x1c20bc, Func Offset: 0x42c
}

// 
// Start address: 0x1c20c0
int EvProgDoctorMemo2nd()
{
	// Line 1113, Address: 0x1c20c0, Func Offset: 0
	// Line 1114, Address: 0x1c20c8, Func Offset: 0x8
	// Line 1116, Address: 0x1c2110, Func Offset: 0x50
	// Line 1117, Address: 0x1c2124, Func Offset: 0x64
	// Line 1118, Address: 0x1c2130, Func Offset: 0x70
	// Line 1119, Address: 0x1c2144, Func Offset: 0x84
	// Line 1122, Address: 0x1c214c, Func Offset: 0x8c
	// Line 1124, Address: 0x1c2170, Func Offset: 0xb0
	// Line 1125, Address: 0x1c2184, Func Offset: 0xc4
	// Line 1129, Address: 0x1c218c, Func Offset: 0xcc
	// Line 1130, Address: 0x1c2194, Func Offset: 0xd4
	// Line 1131, Address: 0x1c219c, Func Offset: 0xdc
	// Line 1132, Address: 0x1c21b8, Func Offset: 0xf8
	// Line 1133, Address: 0x1c21c0, Func Offset: 0x100
	// Line 1134, Address: 0x1c21d4, Func Offset: 0x114
	// Line 1135, Address: 0x1c21f0, Func Offset: 0x130
	// Line 1136, Address: 0x1c2204, Func Offset: 0x144
	// Line 1137, Address: 0x1c220c, Func Offset: 0x14c
	// Line 1138, Address: 0x1c2220, Func Offset: 0x160
	// Line 1139, Address: 0x1c2234, Func Offset: 0x174
	// Line 1141, Address: 0x1c2248, Func Offset: 0x188
	// Line 1144, Address: 0x1c2250, Func Offset: 0x190
	// Line 1145, Address: 0x1c2264, Func Offset: 0x1a4
	// Line 1147, Address: 0x1c2270, Func Offset: 0x1b0
	// Line 1148, Address: 0x1c2274, Func Offset: 0x1b4
	// Func End, Address: 0x1c2284, Func Offset: 0x1c4
}

// 
// Start address: 0x1c2290
int EvProgUseElevatorKey()
{
	// Line 1154, Address: 0x1c2290, Func Offset: 0
	// Line 1155, Address: 0x1c2298, Func Offset: 0x8
	// Line 1156, Address: 0x1c22a8, Func Offset: 0x18
	// Func End, Address: 0x1c22b8, Func Offset: 0x28
}

// 
// Start address: 0x1c22c0
int EvProgElevatorButton()
{
	// Line 1162, Address: 0x1c22c0, Func Offset: 0
	// Line 1163, Address: 0x1c22c8, Func Offset: 0x8
	// Line 1165, Address: 0x1c231c, Func Offset: 0x5c
	// Line 1166, Address: 0x1c2330, Func Offset: 0x70
	// Line 1167, Address: 0x1c233c, Func Offset: 0x7c
	// Line 1168, Address: 0x1c2348, Func Offset: 0x88
	// Line 1169, Address: 0x1c235c, Func Offset: 0x9c
	// Line 1170, Address: 0x1c2370, Func Offset: 0xb0
	// Line 1173, Address: 0x1c2378, Func Offset: 0xb8
	// Line 1177, Address: 0x1c23a4, Func Offset: 0xe4
	// Line 1178, Address: 0x1c23b8, Func Offset: 0xf8
	// Line 1181, Address: 0x1c23c0, Func Offset: 0x100
	// Line 1182, Address: 0x1c23c8, Func Offset: 0x108
	// Line 1183, Address: 0x1c23d0, Func Offset: 0x110
	// Line 1184, Address: 0x1c23dc, Func Offset: 0x11c
	// Line 1185, Address: 0x1c23e4, Func Offset: 0x124
	// Line 1186, Address: 0x1c23ec, Func Offset: 0x12c
	// Line 1188, Address: 0x1c2434, Func Offset: 0x174
	// Line 1189, Address: 0x1c2450, Func Offset: 0x190
	// Line 1190, Address: 0x1c2480, Func Offset: 0x1c0
	// Line 1193, Address: 0x1c2488, Func Offset: 0x1c8
	// Line 1194, Address: 0x1c24b0, Func Offset: 0x1f0
	// Line 1195, Address: 0x1c24e4, Func Offset: 0x224
	// Line 1196, Address: 0x1c24ec, Func Offset: 0x22c
	// Line 1197, Address: 0x1c24f4, Func Offset: 0x234
	// Line 1198, Address: 0x1c24fc, Func Offset: 0x23c
	// Line 1199, Address: 0x1c2504, Func Offset: 0x244
	// Line 1200, Address: 0x1c2524, Func Offset: 0x264
	// Line 1201, Address: 0x1c2530, Func Offset: 0x270
	// Line 1205, Address: 0x1c2590, Func Offset: 0x2d0
	// Line 1206, Address: 0x1c25a4, Func Offset: 0x2e4
	// Line 1207, Address: 0x1c25ac, Func Offset: 0x2ec
	// Line 1208, Address: 0x1c25c0, Func Offset: 0x300
	// Line 1209, Address: 0x1c25cc, Func Offset: 0x30c
	// Line 1210, Address: 0x1c25e4, Func Offset: 0x324
	// Line 1213, Address: 0x1c25f0, Func Offset: 0x330
	// Line 1216, Address: 0x1c25f8, Func Offset: 0x338
	// Line 1217, Address: 0x1c2614, Func Offset: 0x354
	// Line 1218, Address: 0x1c2638, Func Offset: 0x378
	// Line 1219, Address: 0x1c2644, Func Offset: 0x384
	// Line 1220, Address: 0x1c265c, Func Offset: 0x39c
	// Line 1222, Address: 0x1c2670, Func Offset: 0x3b0
	// Line 1225, Address: 0x1c2678, Func Offset: 0x3b8
	// Line 1226, Address: 0x1c268c, Func Offset: 0x3cc
	// Line 1227, Address: 0x1c26a4, Func Offset: 0x3e4
	// Line 1228, Address: 0x1c26bc, Func Offset: 0x3fc
	// Line 1231, Address: 0x1c26c8, Func Offset: 0x408
	// Line 1232, Address: 0x1c26cc, Func Offset: 0x40c
	// Func End, Address: 0x1c26dc, Func Offset: 0x41c
}

// 
// Start address: 0x1c26e0
int EvProgElevatorButtonCheck()
{
	int i;
	float py;
	float px;
	short btn_ctr[2][5];
	// Line 1237, Address: 0x1c26e0, Func Offset: 0
	// Line 1244, Address: 0x1c26ec, Func Offset: 0xc
	// Line 1246, Address: 0x1c2714, Func Offset: 0x34
	// Line 1247, Address: 0x1c2720, Func Offset: 0x40
	// Line 1248, Address: 0x1c2764, Func Offset: 0x84
	// Line 1249, Address: 0x1c2798, Func Offset: 0xb8
	// Line 1250, Address: 0x1c27c0, Func Offset: 0xe0
	// Line 1251, Address: 0x1c27d8, Func Offset: 0xf8
	// Line 1252, Address: 0x1c27f0, Func Offset: 0x110
	// Line 1253, Address: 0x1c2808, Func Offset: 0x128
	// Line 1255, Address: 0x1c283c, Func Offset: 0x15c
	// Line 1256, Address: 0x1c2854, Func Offset: 0x174
	// Line 1257, Address: 0x1c286c, Func Offset: 0x18c
	// Line 1259, Address: 0x1c2874, Func Offset: 0x194
	// Line 1260, Address: 0x1c288c, Func Offset: 0x1ac
	// Line 1261, Address: 0x1c28a4, Func Offset: 0x1c4
	// Line 1262, Address: 0x1c28ac, Func Offset: 0x1cc
	// Line 1264, Address: 0x1c28cc, Func Offset: 0x1ec
	// Line 1265, Address: 0x1c28e4, Func Offset: 0x204
	// Line 1266, Address: 0x1c28fc, Func Offset: 0x21c
	// Line 1267, Address: 0x1c2914, Func Offset: 0x234
	// Line 1270, Address: 0x1c292c, Func Offset: 0x24c
	// Line 1271, Address: 0x1c2930, Func Offset: 0x250
	// Func End, Address: 0x1c2944, Func Offset: 0x264
}

// 
// Start address: 0x1c2950
int EvProgElevatorButtonLight()
{
	int alp;
	int no;
	PicDraw_Data pic;
	int btn_tex[4][4];
	int btn_pos[2][4];
	// Line 1276, Address: 0x1c2950, Func Offset: 0
	// Line 1286, Address: 0x1c2960, Func Offset: 0x10
	// Line 1287, Address: 0x1c2978, Func Offset: 0x28
	// Line 1288, Address: 0x1c299c, Func Offset: 0x4c
	// Line 1289, Address: 0x1c29a0, Func Offset: 0x50
	// Line 1290, Address: 0x1c29c0, Func Offset: 0x70
	// Line 1291, Address: 0x1c29e4, Func Offset: 0x94
	// Line 1292, Address: 0x1c29e8, Func Offset: 0x98
	// Line 1294, Address: 0x1c29f4, Func Offset: 0xa4
	// Line 1295, Address: 0x1c2a3c, Func Offset: 0xec
	// Line 1297, Address: 0x1c2a64, Func Offset: 0x114
	// Line 1299, Address: 0x1c2a80, Func Offset: 0x130
	// Line 1301, Address: 0x1c2a90, Func Offset: 0x140
	// Line 1305, Address: 0x1c2ab8, Func Offset: 0x168
	// Line 1308, Address: 0x1c2b8c, Func Offset: 0x23c
	// Line 1309, Address: 0x1c2c10, Func Offset: 0x2c0
	// Line 1310, Address: 0x1c2c18, Func Offset: 0x2c8
	// Line 1311, Address: 0x1c2c4c, Func Offset: 0x2fc
	// Line 1313, Address: 0x1c2c58, Func Offset: 0x308
	// Line 1314, Address: 0x1c2c5c, Func Offset: 0x30c
	// Func End, Address: 0x1c2c74, Func Offset: 0x324
}

// 
// Start address: 0x1c2c80
int EvProgTrialEnd()
{
	PicDraw_Data pic;
	// Line 1320, Address: 0x1c2c80, Func Offset: 0
	// Line 1323, Address: 0x1c2c88, Func Offset: 0x8
	// Line 1325, Address: 0x1c2cb8, Func Offset: 0x38
	// Line 1326, Address: 0x1c2ccc, Func Offset: 0x4c
	// Line 1327, Address: 0x1c2cd8, Func Offset: 0x58
	// Line 1328, Address: 0x1c2ce4, Func Offset: 0x64
	// Line 1329, Address: 0x1c2cf8, Func Offset: 0x78
	// Line 1332, Address: 0x1c2d00, Func Offset: 0x80
	// Line 1333, Address: 0x1c2d1c, Func Offset: 0x9c
	// Line 1334, Address: 0x1c2d40, Func Offset: 0xc0
	// Line 1335, Address: 0x1c2d50, Func Offset: 0xd0
	// Line 1337, Address: 0x1c2d64, Func Offset: 0xe4
	// Line 1338, Address: 0x1c2d74, Func Offset: 0xf4
	// Line 1340, Address: 0x1c2d8c, Func Offset: 0x10c
	// Line 1341, Address: 0x1c2de0, Func Offset: 0x160
	// Line 1342, Address: 0x1c2dec, Func Offset: 0x16c
	// Line 1343, Address: 0x1c2df4, Func Offset: 0x174
	// Line 1346, Address: 0x1c2dfc, Func Offset: 0x17c
	// Line 1347, Address: 0x1c2e0c, Func Offset: 0x18c
	// Line 1348, Address: 0x1c2e24, Func Offset: 0x1a4
	// Line 1349, Address: 0x1c2e58, Func Offset: 0x1d8
	// Line 1350, Address: 0x1c2e64, Func Offset: 0x1e4
	// Line 1351, Address: 0x1c2e98, Func Offset: 0x218
	// Line 1352, Address: 0x1c2ea0, Func Offset: 0x220
	// Line 1354, Address: 0x1c2eac, Func Offset: 0x22c
	// Line 1355, Address: 0x1c2eb0, Func Offset: 0x230
	// Func End, Address: 0x1c2ec0, Func Offset: 0x240
}

// 
// Start address: 0x1c2ec0
void EvRoomInit()
{
	int room;
	float pos[4];
	// Line 1368, Address: 0x1c2ec0, Func Offset: 0
	// Line 1372, Address: 0x1c2ecc, Func Offset: 0xc
	// Line 1375, Address: 0x1c2ed8, Func Offset: 0x18
	// Line 1376, Address: 0x1c2ee4, Func Offset: 0x24
	// Line 1377, Address: 0x1c2ef4, Func Offset: 0x34
	// Line 1378, Address: 0x1c2f18, Func Offset: 0x58
	// Line 1379, Address: 0x1c2f2c, Func Offset: 0x6c
	// Line 1380, Address: 0x1c2f38, Func Offset: 0x78
	// Line 1381, Address: 0x1c2f4c, Func Offset: 0x8c
	// Line 1382, Address: 0x1c2f6c, Func Offset: 0xac
	// Line 1383, Address: 0x1c2f80, Func Offset: 0xc0
	// Line 1384, Address: 0x1c2f94, Func Offset: 0xd4
	// Line 1385, Address: 0x1c2fb4, Func Offset: 0xf4
	// Line 1386, Address: 0x1c2fc8, Func Offset: 0x108
	// Line 1387, Address: 0x1c2fd4, Func Offset: 0x114
	// Line 1388, Address: 0x1c2fe0, Func Offset: 0x120
	// Line 1389, Address: 0x1c2fec, Func Offset: 0x12c
	// Line 1390, Address: 0x1c3000, Func Offset: 0x140
	// Line 1391, Address: 0x1c3008, Func Offset: 0x148
	// Line 1393, Address: 0x1c3024, Func Offset: 0x164
	// Line 1394, Address: 0x1c3044, Func Offset: 0x184
	// Line 1396, Address: 0x1c3050, Func Offset: 0x190
	// Line 1397, Address: 0x1c305c, Func Offset: 0x19c
	// Line 1399, Address: 0x1c308c, Func Offset: 0x1cc
	// Func End, Address: 0x1c30a0, Func Offset: 0x1e0
}

// 
// Start address: 0x1c30a0
void EvAllTimeFunc()
{
	float spd;
	float pos[4];
	// Line 1404, Address: 0x1c30a0, Func Offset: 0
	// Line 1408, Address: 0x1c30ac, Func Offset: 0xc
	// Line 1410, Address: 0x1c311c, Func Offset: 0x7c
	// Line 1411, Address: 0x1c3124, Func Offset: 0x84
	// Line 1412, Address: 0x1c3130, Func Offset: 0x90
	// Line 1413, Address: 0x1c314c, Func Offset: 0xac
	// Line 1415, Address: 0x1c3154, Func Offset: 0xb4
	// Line 1416, Address: 0x1c3170, Func Offset: 0xd0
	// Line 1418, Address: 0x1c3178, Func Offset: 0xd8
	// Line 1419, Address: 0x1c3194, Func Offset: 0xf4
	// Line 1421, Address: 0x1c319c, Func Offset: 0xfc
	// Line 1424, Address: 0x1c320c, Func Offset: 0x16c
	// Line 1425, Address: 0x1c3220, Func Offset: 0x180
	// Line 1426, Address: 0x1c3240, Func Offset: 0x1a0
	// Line 1427, Address: 0x1c324c, Func Offset: 0x1ac
	// Line 1428, Address: 0x1c325c, Func Offset: 0x1bc
	// Line 1430, Address: 0x1c3278, Func Offset: 0x1d8
	// Line 1432, Address: 0x1c3280, Func Offset: 0x1e0
	// Line 1435, Address: 0x1c3294, Func Offset: 0x1f4
	// Line 1438, Address: 0x1c3340, Func Offset: 0x2a0
	// Line 1439, Address: 0x1c3364, Func Offset: 0x2c4
	// Line 1440, Address: 0x1c3394, Func Offset: 0x2f4
	// Line 1441, Address: 0x1c33a0, Func Offset: 0x300
	// Line 1442, Address: 0x1c33d4, Func Offset: 0x334
	// Line 1443, Address: 0x1c33ec, Func Offset: 0x34c
	// Line 1444, Address: 0x1c3408, Func Offset: 0x368
	// Line 1446, Address: 0x1c3410, Func Offset: 0x370
	// Line 1447, Address: 0x1c3420, Func Offset: 0x380
	// Line 1448, Address: 0x1c343c, Func Offset: 0x39c
	// Line 1449, Address: 0x1c345c, Func Offset: 0x3bc
	// Line 1450, Address: 0x1c348c, Func Offset: 0x3ec
	// Line 1451, Address: 0x1c349c, Func Offset: 0x3fc
	// Line 1452, Address: 0x1c34d0, Func Offset: 0x430
	// Line 1453, Address: 0x1c34ec, Func Offset: 0x44c
	// Line 1454, Address: 0x1c351c, Func Offset: 0x47c
	// Line 1458, Address: 0x1c3530, Func Offset: 0x490
	// Func End, Address: 0x1c3544, Func Offset: 0x4a4
}

