typedef struct shAttackInfo;
typedef struct _anon0;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct _VbCOORDINATE;
typedef union _anon1;
typedef struct _CL_VHIT_WALL;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct SubCharacter;
typedef struct _CL_HITPOLY_HEAD;
typedef struct SubObject;
typedef struct Item;
typedef struct _CL_VHIT_CHARA;
typedef union Q_WORDDATA;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _CL_VHIT_RESULT;
typedef struct sh2gfw_Env_ctl;
typedef union _anon4;
typedef struct _anon5;
typedef struct Model_List;
typedef struct PAD_3D;
typedef struct _anon6;
typedef struct _SH2_SYS;
typedef struct PAD_2D;
typedef struct _VC_FIX_CAM_PARAM;
typedef struct PAD_INFO;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct _VC_FIX_ANG_CAM_PARAM;
typedef struct _anon7;
typedef struct shSkelton;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct _VC_LOCUS_CIRCLE_CAM_PARAM;
typedef struct _VC_ROAD_AREA;
typedef struct shBattleFight;
typedef struct _VC_ROAD_DATA;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shPlayerWork;
typedef struct shBattleInfo;
typedef union _anon8;
typedef struct _KANRI;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct _SYS_W;
typedef struct _anon9;

typedef void(*type_4)();
typedef int(*type_7)();
typedef void(*type_13)(SubCharacter*);
typedef void(*type_18)(SubCharacter*);
typedef void(*type_34)(SubCharacter*);
typedef void(*type_36)(SubCharacter*);

typedef _VbCOORDINATE type_0[18];
typedef float type_1[4];
typedef float type_2[4];
typedef float type_3[4][4];
typedef SubCharacter type_5[6];
typedef unsigned int type_6[2];
typedef unsigned short type_8[11];
typedef unsigned int type_9[4];
typedef unsigned short type_10[8];
typedef float type_11[4];
typedef unsigned char type_12[16];
typedef int type_14[4];
typedef unsigned short type_15[3];
typedef int type_16[4];
typedef short type_17[8];
typedef char type_19[16];
typedef unsigned long type_20[2];
typedef unsigned char type_21[4];
typedef unsigned char type_22[4];
typedef unsigned int type_23[8];
typedef PAD_INFO type_24[10];
typedef unsigned char type_25[2];
typedef float type_26[4];
typedef float type_27[4][4];
typedef float type_28[4][2];
typedef unsigned char type_29[2];
typedef unsigned short type_30[4];
typedef float type_31[4];
typedef float type_32[4];
typedef float type_33[4][4];
typedef shAttackInfo type_35[46];
typedef unsigned char type_37[4];
typedef unsigned char type_38[2];
typedef int type_39[4];
typedef _VC_ROAD_DATA type_40[256];

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon1 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

struct _anon0
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

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA spot_rot;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

struct _VbCOORDINATE
{
	unsigned int flg;
	float coord[4][4];
	float workm[4][4];
	unsigned int* param;
	_VbCOORDINATE* super;
	_VbCOORDINATE* sub;
	_anon9 r;
	float lw[4][4];
	float ls[4][4];
	float rot[4];
};

union _anon1
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

struct sh2gfw_POINTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
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
	_anon6 pos;
	_anon6 rot;
	_anon6 pos_spd;
	_anon6 rot_spd;
	_anon7 mat;
	void(*function)(SubCharacter*);
	void(*effecter_function)(SubCharacter*);
	SubObject* pre;
	SubObject* next;
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

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
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

struct _anon2
{
	_anon3* ev_list;
	unsigned char* ev_pos;
	int(*ev_prog)();
	_anon5* gi_list;
	Model_List* mdl_list;
	_anon0* en_list;
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

struct _anon3
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon4 hobj;
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
	float BaseAmbient[4];
	float VertexAmbient[4];
	float spot0_localpos[4];
	float spot0_localdir[4];
	sh2gfw_SPOTL_MATRIX SpotL0;
	float spot1_localpos[4];
	float spot1_localdir[4];
	sh2gfw_SPOTL_MATRIX SpotL1;
	float spot2_localpos[4];
	float spot2_localdir[4];
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

union _anon4
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct _anon5
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
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

struct PAD_3D
{
	char round_way;
	unsigned char reserved1;
	unsigned char lslide;
	unsigned char rslide;
	unsigned char lturn180;
	unsigned char rturn180;
};

struct _anon6
{
	float x;
	float y;
	float z;
	float w;
};

struct _SH2_SYS
{
	unsigned int step[8];
	int main_status;
	unsigned int boot_first;
	unsigned int soft_reset;
	unsigned int frame_cnt;
};

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
};

struct _VC_FIX_CAM_PARAM
{
	float sta_base_ang_y;
	float end_base_ang_y;
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

struct _VC_FIX_ANG_CAM_PARAM
{
	float ang_x;
	float ang_y;
};

struct _anon7
{
	float d[4][4];
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

struct _VC_LOCUS_CIRCLE_CAM_PARAM
{
	float ang_y;
	float radius;
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

struct shBattleFight
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
	_anon8 tmp;
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
	_anon6 tgt_body_angle;
	_anon6 tgt_neck_angle;
	_anon6 tgt_arms_angle;
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

union _anon8
{
	_VC_FIX_CAM_PARAM stl;
	_VC_FIX_ANG_CAM_PARAM fix;
	_VC_LOCUS_CIRCLE_CAM_PARAM cir;
};

struct _KANRI
{
	float pos[4];
	float ang[4];
	float rot_spd[4];
	float velo_y;
	float velo_xz;
	float velo_houi;
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

struct _SYS_W
{
	float cam_ang_y;
	float cam_ang_z;
	float cam_r_xz;
	float cam_y;
	_VbCOORDINATE hero_crd[18];
	float head_ang_y;
	float head_ang_x;
	_KANRI hero;
	float eye_y;
	SubCharacter npc[6];
};

struct _anon9
{
	short vx;
	short vy;
	short vz;
	short pad;
};

shAttackInfo sh2_attack_list[46];
_SH2_SYS Sh2sys;
Item item;
sh2gfw_Env_ctl Env_ctl;
_anon2* stage;
_VC_ROAD_DATA mainCameraData[256];
float connect_pos[4];
_SYS_W sys;
shPlayerWork sh2jms;
int map_id[4];

void connectMain();

// 
// Start address: 0x20adf0
void connectMain()
{
	int tmp_id[4];
	// Line 53, Address: 0x20adf0, Func Offset: 0
	// Line 56, Address: 0x20adf8, Func Offset: 0x8
	// Line 58, Address: 0x20ae34, Func Offset: 0x44
	// Line 59, Address: 0x20ae3c, Func Offset: 0x4c
	// Line 60, Address: 0x20ae44, Func Offset: 0x54
	// Line 61, Address: 0x20ae4c, Func Offset: 0x5c
	// Line 62, Address: 0x20ae54, Func Offset: 0x64
	// Line 63, Address: 0x20ae5c, Func Offset: 0x6c
	// Line 64, Address: 0x20ae70, Func Offset: 0x80
	// Line 65, Address: 0x20ae98, Func Offset: 0xa8
	// Line 69, Address: 0x20aecc, Func Offset: 0xdc
	// Line 70, Address: 0x20aee4, Func Offset: 0xf4
	// Line 72, Address: 0x20aefc, Func Offset: 0x10c
	// Line 74, Address: 0x20af04, Func Offset: 0x114
	// Line 77, Address: 0x20af0c, Func Offset: 0x11c
	// Line 87, Address: 0x20af14, Func Offset: 0x124
	// Line 89, Address: 0x20af40, Func Offset: 0x150
	// Line 91, Address: 0x20af68, Func Offset: 0x178
	// Line 92, Address: 0x20af74, Func Offset: 0x184
	// Line 94, Address: 0x20afac, Func Offset: 0x1bc
	// Line 95, Address: 0x20afb8, Func Offset: 0x1c8
	// Line 97, Address: 0x20aff0, Func Offset: 0x200
	// Line 98, Address: 0x20affc, Func Offset: 0x20c
	// Line 101, Address: 0x20b044, Func Offset: 0x254
	// Line 102, Address: 0x20b050, Func Offset: 0x260
	// Line 103, Address: 0x20b058, Func Offset: 0x268
	// Line 109, Address: 0x20b084, Func Offset: 0x294
	// Line 111, Address: 0x20b0a4, Func Offset: 0x2b4
	// Line 112, Address: 0x20b0b8, Func Offset: 0x2c8
	// Line 113, Address: 0x20b0cc, Func Offset: 0x2dc
	// Line 114, Address: 0x20b0e0, Func Offset: 0x2f0
	// Line 115, Address: 0x20b0f4, Func Offset: 0x304
	// Line 116, Address: 0x20b118, Func Offset: 0x328
	// Line 117, Address: 0x20b120, Func Offset: 0x330
	// Line 119, Address: 0x20b138, Func Offset: 0x348
	// Line 120, Address: 0x20b14c, Func Offset: 0x35c
	// Line 122, Address: 0x20b164, Func Offset: 0x374
	// Line 124, Address: 0x20b170, Func Offset: 0x380
	// Line 125, Address: 0x20b198, Func Offset: 0x3a8
	// Line 126, Address: 0x20b1ac, Func Offset: 0x3bc
	// Line 127, Address: 0x20b1b4, Func Offset: 0x3c4
	// Line 130, Address: 0x20b1e8, Func Offset: 0x3f8
	// Line 131, Address: 0x20b1f0, Func Offset: 0x400
	// Line 132, Address: 0x20b208, Func Offset: 0x418
	// Line 133, Address: 0x20b228, Func Offset: 0x438
	// Line 135, Address: 0x20b230, Func Offset: 0x440
	// Line 136, Address: 0x20b23c, Func Offset: 0x44c
	// Line 137, Address: 0x20b248, Func Offset: 0x458
	// Line 140, Address: 0x20b27c, Func Offset: 0x48c
	// Line 143, Address: 0x20b28c, Func Offset: 0x49c
	// Func End, Address: 0x20b29c, Func Offset: 0x4ac
}

