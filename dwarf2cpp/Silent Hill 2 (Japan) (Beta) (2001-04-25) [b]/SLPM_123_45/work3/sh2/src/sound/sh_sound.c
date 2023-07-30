typedef struct _CL_HITPOLY_HEAD;
typedef union _anon0;
typedef struct _VC_LOCUS_CIRCLE_CAM_PARAM;
typedef struct SubCharacter;
typedef struct SubObject;
typedef struct _VC_ROAD_AREA;
typedef enum _VC_FLAGS : unsigned short;
typedef struct PAD_3D;
typedef struct _VC_ROAD_DATA;
typedef struct _VbWVSMATRIX;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct PAD_2D;
typedef struct _anon1;
typedef union _anon2;
typedef struct PAD_INFO;
typedef struct Se3D_ChannelData;
typedef struct shSkelton;
typedef struct Se_RadioInfo;
typedef struct Se_TrackBuffer;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct _anon3;
typedef struct shBattleFight;
typedef struct _SND_ROAD_AREA;
typedef struct Se_BgmBuffer;
typedef struct shBattleShot;
typedef struct _VC_NEAR_ROAD_DATA;
typedef struct _SOUND_DATA;
typedef struct shBattleArea;
typedef struct _VC_WATCH_MV_PARAM;
typedef struct shBattleInfo;
typedef struct _NEAR_SOUND_DATA;
typedef struct shPlayerWork;
typedef struct _VC_CAM_MV_PARAM;
typedef struct _VC_THROUGH_DOOR_CAM_PARAM;
typedef struct _SOUND_WORK;
typedef struct _VC_LIMIT_AREA;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_WALL;
typedef union _anon4;
typedef struct _VC_FIX_CAM_PARAM;
typedef struct _VC_WORK;
typedef struct _CL_VHIT_CHARA;
typedef struct _VC_FIX_ANG_CAM_PARAM;
typedef struct _CL_VHIT_RESULT;

typedef void(*type_1)(SubCharacter*);
typedef void(*type_3)(SubCharacter*);
typedef void(*type_22)(SubCharacter*);
typedef void(*type_25)(SubCharacter*);

typedef Se3D_ChannelData type_0[8];
typedef float type_2[4];
typedef int type_4[8];
typedef float type_5[4];
typedef float type_6[4][4];
typedef int type_7[2];
typedef int type_8[2][3];
typedef unsigned char type_9[34];
typedef unsigned char type_10[4];
typedef unsigned char type_11[4];
typedef PAD_INFO type_12[10];
typedef float type_13[4][2];
typedef unsigned char type_14[2];
typedef unsigned char type_15[10];
typedef unsigned char type_16[2];
typedef float type_17[5];
typedef float type_18[4];
typedef float type_19[4][4];
typedef _VC_NEAR_ROAD_DATA type_20[128];
typedef Se_TrackBuffer type_21[7];
typedef unsigned char type_23[0];
typedef shAttackInfo type_24[46];
typedef int type_26[7];
typedef float type_27[4];
typedef unsigned char type_28[4];
typedef char type_29[7];
typedef char type_30[7];
typedef unsigned char type_31[2];
typedef unsigned char type_32[10];
typedef _NEAR_SOUND_DATA type_33[32];
typedef char type_34[7];
typedef unsigned char type_35[13];

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
};

union _anon0
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct _VC_LOCUS_CIRCLE_CAM_PARAM
{
	float ang_y;
	float radius;
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
	_anon3 mat;
	void(*function)(SubCharacter*);
	void(*effecter_function)(SubCharacter*);
	SubObject* pre;
	SubObject* next;
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

struct PAD_3D
{
	char round_way;
	unsigned char reserved1;
	unsigned char lslide;
	unsigned char rslide;
	unsigned char lturn180;
	unsigned char rturn180;
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
	_anon2 tmp;
};

struct _VbWVSMATRIX
{
	float wvm[4][4];
	float vsm[4][4];
	float wsm[4][4];
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

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
};

struct _anon1
{
	float x;
	float y;
	float z;
	float w;
};

union _anon2
{
	_VC_FIX_CAM_PARAM stl;
	_VC_FIX_ANG_CAM_PARAM fix;
	_VC_LOCUS_CIRCLE_CAM_PARAM cir;
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

struct Se3D_ChannelData
{
	int sd;
	int ox;
	float pos[4];
	float vol;
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon3 src_m;
	_anon1 src_t;
	_anon3 des_m;
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

struct Se_RadioInfo
{
	float volume;
	short pan;
	short pitch;
};

struct Se_TrackBuffer
{
	unsigned char status;
	unsigned char fade_in_type;
	unsigned char fade_out_type;
	unsigned char pad;
	float volume;
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

struct _anon3
{
	float d[4][4];
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct _SND_ROAD_AREA
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

struct Se_BgmBuffer
{
	int current;
	int next;
	Se_TrackBuffer track[7];
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
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

struct _SOUND_DATA
{
	_SND_ROAD_AREA lim_sw;
	int flags;
	int chanstat[7];
};

struct shBattleArea
{
	float center;
	float radius;
};

struct _VC_WATCH_MV_PARAM
{
	float ang_accel_x;
	float ang_accel_y;
	float max_ang_spd_x;
	float max_ang_spd_y;
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

struct _NEAR_SOUND_DATA
{
	char inVol[7];
	char outVol[7];
	int errCode;
	int absIndex;
	float len;
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

struct _SOUND_WORK
{
	_SOUND_DATA* sound_ary;
	float chara_pos[4];
	float half_w;
	int page;
	int near_sound_num;
	_NEAR_SOUND_DATA near_sound_ary[32];
	int on_num;
	char on_chan[7];
	int absNum;
	int nearindex;
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

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

union _anon4
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _VC_FIX_CAM_PARAM
{
	float sta_base_ang_y;
	float end_base_ang_y;
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

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

struct _VC_FIX_ANG_CAM_PARAM
{
	float ang_x;
	float ang_y;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon0 hobj;
};

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
int list3d[2][3];
Se_BgmBuffer bgm;
Se3D_ChannelData se_3d_channel_data[8];
int se_3d_channel_number;
int se_3d_channel_max;
_VbWVSMATRIX VbWvsMatrix;
shPlayerWork sh2jms;
_VC_WORK vcWork;
float dtf;
unsigned char snd_data_buffer[0];
int channel_3d[8];

int SeStat();
void SeForceWait();
void SeCallInit(int sect);
void SeCallReset();
int SeCall(int sd_no, float volume, int stereo);
int SeCallPos(int sd_no, float volume, float* pos, int s3d);
int SeCallPosDirection(float* pos);
int SeCallPosDistance(float volume, float* pos);
void Se3dManager();
int Se3dControl(int sd_no, float volume, float* pos);
void SeStop(int sd_no);
int SePlayCheck(int sd_no);
void SeBgmCall(int bgm_no);
void SeBgmManager();
int BgmPageSet();
void SeRadio(Se_RadioInfo* rp);

// 
// Start address: 0x1989d0
int SeStat()
{
	// Line 48, Address: 0x1989d0, Func Offset: 0
	// Line 49, Address: 0x1989d8, Func Offset: 0x8
	// Line 50, Address: 0x1989ec, Func Offset: 0x1c
	// Line 52, Address: 0x1989f8, Func Offset: 0x28
	// Line 54, Address: 0x198a00, Func Offset: 0x30
	// Func End, Address: 0x198a10, Func Offset: 0x40
}

// 
// Start address: 0x198a10
void SeForceWait()
{
	int l;
	int c;
	// Line 143, Address: 0x198a10, Func Offset: 0
	// Line 147, Address: 0x198a20, Func Offset: 0x10
	// Line 149, Address: 0x198a24, Func Offset: 0x14
	// Line 150, Address: 0x198a34, Func Offset: 0x24
	// Line 152, Address: 0x198a40, Func Offset: 0x30
	// Line 153, Address: 0x198a50, Func Offset: 0x40
	// Line 154, Address: 0x198a64, Func Offset: 0x54
	// Line 156, Address: 0x198a68, Func Offset: 0x58
	// Line 157, Address: 0x198a74, Func Offset: 0x64
	// Line 158, Address: 0x198a7c, Func Offset: 0x6c
	// Line 159, Address: 0x198a88, Func Offset: 0x78
	// Line 160, Address: 0x198a98, Func Offset: 0x88
	// Line 165, Address: 0x198aac, Func Offset: 0x9c
	// Func End, Address: 0x198ac4, Func Offset: 0xb4
}

// 
// Start address: 0x198ad0
void SeCallInit(int sect)
{
	// Line 191, Address: 0x198ad0, Func Offset: 0
	// Line 192, Address: 0x198adc, Func Offset: 0xc
	// Line 197, Address: 0x198af0, Func Offset: 0x20
	// Line 227, Address: 0x198b00, Func Offset: 0x30
	// Line 228, Address: 0x198b14, Func Offset: 0x44
	// Line 234, Address: 0x198b2c, Func Offset: 0x5c
	// Line 235, Address: 0x198b3c, Func Offset: 0x6c
	// Line 237, Address: 0x198b44, Func Offset: 0x74
	// Line 239, Address: 0x198b4c, Func Offset: 0x7c
	// Func End, Address: 0x198b5c, Func Offset: 0x8c
}

// 
// Start address: 0x198b60
void SeCallReset()
{
	int i;
	// Line 243, Address: 0x198b60, Func Offset: 0
	// Line 246, Address: 0x198b6c, Func Offset: 0xc
	// Line 247, Address: 0x198b84, Func Offset: 0x24
	// Line 248, Address: 0x198b8c, Func Offset: 0x2c
	// Line 249, Address: 0x198b98, Func Offset: 0x38
	// Line 250, Address: 0x198ba0, Func Offset: 0x40
	// Line 251, Address: 0x198bdc, Func Offset: 0x7c
	// Line 252, Address: 0x198bf0, Func Offset: 0x90
	// Func End, Address: 0x198c04, Func Offset: 0xa4
}

// 
// Start address: 0x198c10
int SeCall(int sd_no, float volume, int stereo)
{
	int ret;
	// Line 262, Address: 0x198c10, Func Offset: 0
	// Line 265, Address: 0x198c18, Func Offset: 0x8
	// Line 266, Address: 0x198c2c, Func Offset: 0x1c
	// Line 267, Address: 0x198c5c, Func Offset: 0x4c
	// Line 269, Address: 0x198c6c, Func Offset: 0x5c
	// Func End, Address: 0x198c7c, Func Offset: 0x6c
}

// 
// Start address: 0x198c80
int SeCallPos(int sd_no, float volume, float* pos, int s3d)
{
	int i;
	int ret;
	// Line 282, Address: 0x198c80, Func Offset: 0
	// Line 286, Address: 0x198cac, Func Offset: 0x2c
	// Line 288, Address: 0x198cc0, Func Offset: 0x40
	// Line 289, Address: 0x198ccc, Func Offset: 0x4c
	// Line 290, Address: 0x198ce8, Func Offset: 0x68
	// Line 291, Address: 0x198cf8, Func Offset: 0x78
	// Line 292, Address: 0x198d04, Func Offset: 0x84
	// Line 293, Address: 0x198d48, Func Offset: 0xc8
	// Line 295, Address: 0x198d78, Func Offset: 0xf8
	// Line 296, Address: 0x198d80, Func Offset: 0x100
	// Line 297, Address: 0x198d90, Func Offset: 0x110
	// Line 298, Address: 0x198d9c, Func Offset: 0x11c
	// Line 299, Address: 0x198de0, Func Offset: 0x160
	// Line 304, Address: 0x198e14, Func Offset: 0x194
	// Line 305, Address: 0x198e24, Func Offset: 0x1a4
	// Line 307, Address: 0x198e58, Func Offset: 0x1d8
	// Line 308, Address: 0x198e64, Func Offset: 0x1e4
	// Line 309, Address: 0x198e80, Func Offset: 0x200
	// Line 310, Address: 0x198e9c, Func Offset: 0x21c
	// Line 311, Address: 0x198ec0, Func Offset: 0x240
	// Line 312, Address: 0x198edc, Func Offset: 0x25c
	// Line 313, Address: 0x198efc, Func Offset: 0x27c
	// Line 314, Address: 0x198f04, Func Offset: 0x284
	// Line 315, Address: 0x198f10, Func Offset: 0x290
	// Line 318, Address: 0x198f30, Func Offset: 0x2b0
	// Line 321, Address: 0x198f68, Func Offset: 0x2e8
	// Line 324, Address: 0x198f78, Func Offset: 0x2f8
	// Func End, Address: 0x198f9c, Func Offset: 0x31c
}

// 
// Start address: 0x198fa0
int SeCallPosDirection(float* pos)
{
	float sign;
	float pos0[4];
	float fv[4];
	// Line 330, Address: 0x198fa0, Func Offset: 0
	// Line 335, Address: 0x198fa4, Func Offset: 0x4
	// Line 336, Address: 0x198fb4, Func Offset: 0x14
	// Line 337, Address: 0x198fec, Func Offset: 0x4c
	// Line 338, Address: 0x199008, Func Offset: 0x68
	// Line 339, Address: 0x199014, Func Offset: 0x74
	// Line 340, Address: 0x19903c, Func Offset: 0x9c
	// Line 341, Address: 0x199068, Func Offset: 0xc8
	// Line 342, Address: 0x199090, Func Offset: 0xf0
	// Func End, Address: 0x19909c, Func Offset: 0xfc
}

// 
// Start address: 0x1990a0
int SeCallPosDistance(float volume, float* pos)
{
	float work_1;
	float work_0;
	float len;
	float pos0[4];
	float fvec[4];
	// Line 348, Address: 0x1990a0, Func Offset: 0
	// Line 354, Address: 0x1990a4, Func Offset: 0x4
	// Line 355, Address: 0x1990b4, Func Offset: 0x14
	// Line 356, Address: 0x1990dc, Func Offset: 0x3c
	// Line 357, Address: 0x19910c, Func Offset: 0x6c
	// Line 358, Address: 0x199130, Func Offset: 0x90
	// Line 359, Address: 0x19915c, Func Offset: 0xbc
	// Line 360, Address: 0x199180, Func Offset: 0xe0
	// Line 361, Address: 0x1991b0, Func Offset: 0x110
	// Line 362, Address: 0x1991d4, Func Offset: 0x134
	// Line 364, Address: 0x199200, Func Offset: 0x160
	// Line 365, Address: 0x199230, Func Offset: 0x190
	// Func End, Address: 0x19923c, Func Offset: 0x19c
}

// 
// Start address: 0x199240
void Se3dManager()
{
	int i;
	int ret;
	// Line 373, Address: 0x199240, Func Offset: 0
	// Line 377, Address: 0x199250, Func Offset: 0x10
	// Line 378, Address: 0x19925c, Func Offset: 0x1c
	// Line 379, Address: 0x199280, Func Offset: 0x40
	// Line 383, Address: 0x1992fc, Func Offset: 0xbc
	// Line 384, Address: 0x199308, Func Offset: 0xc8
	// Line 385, Address: 0x199324, Func Offset: 0xe4
	// Line 387, Address: 0x199360, Func Offset: 0x120
	// Line 388, Address: 0x199374, Func Offset: 0x134
	// Func End, Address: 0x19938c, Func Offset: 0x14c
}

// 
// Start address: 0x199390
int Se3dControl(int sd_no, float volume, float* pos)
{
	int i;
	// Line 403, Address: 0x199390, Func Offset: 0
	// Line 404, Address: 0x1993a4, Func Offset: 0x14
	// Line 405, Address: 0x1993b0, Func Offset: 0x20
	// Line 406, Address: 0x1993e8, Func Offset: 0x58
	// Line 407, Address: 0x199400, Func Offset: 0x70
	// Line 408, Address: 0x199424, Func Offset: 0x94
	// Line 409, Address: 0x199440, Func Offset: 0xb0
	// Line 410, Address: 0x199444, Func Offset: 0xb4
	// Func End, Address: 0x19944c, Func Offset: 0xbc
}

// 
// Start address: 0x199450
void SeStop(int sd_no)
{
	int i;
	// Line 418, Address: 0x199450, Func Offset: 0
	// Line 421, Address: 0x199460, Func Offset: 0x10
	// Line 424, Address: 0x19946c, Func Offset: 0x1c
	// Line 425, Address: 0x199480, Func Offset: 0x30
	// Line 426, Address: 0x19948c, Func Offset: 0x3c
	// Line 427, Address: 0x199498, Func Offset: 0x48
	// Line 428, Address: 0x1994e0, Func Offset: 0x90
	// Line 429, Address: 0x1994fc, Func Offset: 0xac
	// Line 430, Address: 0x199514, Func Offset: 0xc4
	// Line 431, Address: 0x19951c, Func Offset: 0xcc
	// Line 432, Address: 0x199528, Func Offset: 0xd8
	// Line 433, Address: 0x199570, Func Offset: 0x120
	// Line 437, Address: 0x1995a8, Func Offset: 0x158
	// Line 438, Address: 0x1995b4, Func Offset: 0x164
	// Line 439, Address: 0x1995dc, Func Offset: 0x18c
	// Line 440, Address: 0x1995e8, Func Offset: 0x198
	// Line 441, Address: 0x199604, Func Offset: 0x1b4
	// Line 443, Address: 0x199640, Func Offset: 0x1f0
	// Line 444, Address: 0x199654, Func Offset: 0x204
	// Func End, Address: 0x199668, Func Offset: 0x218
}

// 
// Start address: 0x199670
int SePlayCheck(int sd_no)
{
	int i;
	// Line 451, Address: 0x199670, Func Offset: 0
	// Line 454, Address: 0x19967c, Func Offset: 0xc
	// Line 456, Address: 0x199690, Func Offset: 0x20
	// Line 457, Address: 0x19969c, Func Offset: 0x2c
	// Line 458, Address: 0x1996e4, Func Offset: 0x74
	// Line 459, Address: 0x1996e8, Func Offset: 0x78
	// Line 460, Address: 0x1996ec, Func Offset: 0x7c
	// Func End, Address: 0x1996fc, Func Offset: 0x8c
}

// 
// Start address: 0x199700
void SeBgmCall(int bgm_no)
{
	int i;
	// Line 468, Address: 0x199700, Func Offset: 0
	// Line 471, Address: 0x19970c, Func Offset: 0xc
	// Line 472, Address: 0x199720, Func Offset: 0x20
	// Line 473, Address: 0x19972c, Func Offset: 0x2c
	// Line 474, Address: 0x199738, Func Offset: 0x38
	// Line 475, Address: 0x199758, Func Offset: 0x58
	// Line 476, Address: 0x19977c, Func Offset: 0x7c
	// Line 477, Address: 0x1997a0, Func Offset: 0xa0
	// Line 478, Address: 0x1997b8, Func Offset: 0xb8
	// Line 480, Address: 0x1997c0, Func Offset: 0xc0
	// Line 481, Address: 0x1997d8, Func Offset: 0xd8
	// Line 482, Address: 0x1997f0, Func Offset: 0xf0
	// Line 483, Address: 0x199804, Func Offset: 0x104
	// Func End, Address: 0x199814, Func Offset: 0x114
}

// 
// Start address: 0x199820
void SeBgmManager()
{
	int j;
	int i;
	int work;
	int out;
	int in;
	_SOUND_WORK data;
	float track_fade_time[5];
	// Line 505, Address: 0x199820, Func Offset: 0
	// Line 512, Address: 0x19982c, Func Offset: 0xc
	// Line 513, Address: 0x199844, Func Offset: 0x24
	// Line 514, Address: 0x199850, Func Offset: 0x30
	// Line 515, Address: 0x199888, Func Offset: 0x68
	// Line 516, Address: 0x199894, Func Offset: 0x74
	// Line 517, Address: 0x1998b0, Func Offset: 0x90
	// Line 518, Address: 0x1998c0, Func Offset: 0xa0
	// Line 519, Address: 0x1998ec, Func Offset: 0xcc
	// Line 523, Address: 0x1998f0, Func Offset: 0xd0
	// Line 527, Address: 0x199918, Func Offset: 0xf8
	// Line 529, Address: 0x199924, Func Offset: 0x104
	// Line 531, Address: 0x199944, Func Offset: 0x124
	// Line 532, Address: 0x199954, Func Offset: 0x134
	// Line 533, Address: 0x199964, Func Offset: 0x144
	// Line 534, Address: 0x199974, Func Offset: 0x154
	// Line 536, Address: 0x199984, Func Offset: 0x164
	// Line 537, Address: 0x199998, Func Offset: 0x178
	// Line 538, Address: 0x1999a4, Func Offset: 0x184
	// Line 539, Address: 0x1999b0, Func Offset: 0x190
	// Line 540, Address: 0x1999e8, Func Offset: 0x1c8
	// Line 541, Address: 0x1999f4, Func Offset: 0x1d4
	// Line 543, Address: 0x1999fc, Func Offset: 0x1dc
	// Line 544, Address: 0x199a08, Func Offset: 0x1e8
	// Line 545, Address: 0x199a28, Func Offset: 0x208
	// Line 549, Address: 0x199a70, Func Offset: 0x250
	// Line 550, Address: 0x199a78, Func Offset: 0x258
	// Line 551, Address: 0x199a98, Func Offset: 0x278
	// Line 555, Address: 0x199ae0, Func Offset: 0x2c0
	// Line 556, Address: 0x199ae8, Func Offset: 0x2c8
	// Line 557, Address: 0x199b00, Func Offset: 0x2e0
	// Line 558, Address: 0x199b44, Func Offset: 0x324
	// Line 559, Address: 0x199b4c, Func Offset: 0x32c
	// Line 560, Address: 0x199b6c, Func Offset: 0x34c
	// Line 561, Address: 0x199b84, Func Offset: 0x364
	// Line 562, Address: 0x199b8c, Func Offset: 0x36c
	// Line 564, Address: 0x199bd0, Func Offset: 0x3b0
	// Line 565, Address: 0x199be8, Func Offset: 0x3c8
	// Line 566, Address: 0x199c00, Func Offset: 0x3e0
	// Line 569, Address: 0x199c18, Func Offset: 0x3f8
	// Line 570, Address: 0x199c2c, Func Offset: 0x40c
	// Line 574, Address: 0x199c30, Func Offset: 0x410
	// Line 575, Address: 0x199c3c, Func Offset: 0x41c
	// Line 576, Address: 0x199c60, Func Offset: 0x440
	// Line 577, Address: 0x199c84, Func Offset: 0x464
	// Line 578, Address: 0x199ca8, Func Offset: 0x488
	// Line 580, Address: 0x199d00, Func Offset: 0x4e0
	// Line 581, Address: 0x199d30, Func Offset: 0x510
	// Line 582, Address: 0x199d48, Func Offset: 0x528
	// Line 583, Address: 0x199d64, Func Offset: 0x544
	// Line 584, Address: 0x199d68, Func Offset: 0x548
	// Line 585, Address: 0x199d9c, Func Offset: 0x57c
	// Line 586, Address: 0x199dc8, Func Offset: 0x5a8
	// Line 587, Address: 0x199dec, Func Offset: 0x5cc
	// Line 588, Address: 0x199e0c, Func Offset: 0x5ec
	// Line 590, Address: 0x199e60, Func Offset: 0x640
	// Line 591, Address: 0x199e8c, Func Offset: 0x66c
	// Line 592, Address: 0x199ea0, Func Offset: 0x680
	// Line 594, Address: 0x199eb8, Func Offset: 0x698
	// Line 595, Address: 0x199eec, Func Offset: 0x6cc
	// Line 605, Address: 0x199ef0, Func Offset: 0x6d0
	// Line 606, Address: 0x199f04, Func Offset: 0x6e4
	// Func End, Address: 0x199f18, Func Offset: 0x6f8
}

// 
// Start address: 0x199f20
int BgmPageSet()
{
	SubCharacter* scp;
	// Line 613, Address: 0x199f20, Func Offset: 0
	// Line 618, Address: 0x199f28, Func Offset: 0x8
	// Line 620, Address: 0x199f30, Func Offset: 0x10
	// Line 621, Address: 0x199f38, Func Offset: 0x18
	// Line 627, Address: 0x199fd0, Func Offset: 0xb0
	// Line 628, Address: 0x199fd8, Func Offset: 0xb8
	// Line 629, Address: 0x199fe0, Func Offset: 0xc0
	// Line 631, Address: 0x199ff4, Func Offset: 0xd4
	// Line 632, Address: 0x199ff8, Func Offset: 0xd8
	// Func End, Address: 0x19a008, Func Offset: 0xe8
}

// 
// Start address: 0x19a010
void SeRadio(Se_RadioInfo* rp)
{
	int i;
	// Line 666, Address: 0x19a010, Func Offset: 0
	// Line 669, Address: 0x19a024, Func Offset: 0x14
	// Line 670, Address: 0x19a030, Func Offset: 0x20
	// Line 674, Address: 0x19a0ac, Func Offset: 0x9c
	// Line 675, Address: 0x19a0c4, Func Offset: 0xb4
	// Func End, Address: 0x19a0dc, Func Offset: 0xcc
}

