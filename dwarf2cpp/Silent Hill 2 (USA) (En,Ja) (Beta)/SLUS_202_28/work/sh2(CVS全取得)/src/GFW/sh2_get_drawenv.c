typedef struct SubCharacter;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct _VbWVSMATRIX;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct _CL_VHIT_WALL;
typedef struct shAttackInfo;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _CL_VHIT_CHARA;
typedef union _anon0;
typedef struct DrawEnvData;
typedef struct _CL_VHIT_RESULT;
typedef struct _anon1;
typedef struct PAD_3D;
typedef union _anon2;
typedef struct PAD_2D;
typedef union Q_WORDDATA;
typedef struct shSkelton;
typedef struct PAD_INFO;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct _anon3;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct sh2gfw_Env_ctl;
typedef struct shPlayerWork;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct shBattleFight;

typedef void(*type_15)(SubCharacter*);
typedef void(*type_18)(SubCharacter*);

typedef unsigned short type_0[4];
typedef unsigned char type_1[2];
typedef unsigned int type_2[4];
typedef unsigned short type_3[8];
typedef shAttackInfo type_4[66];
typedef float type_5[4];
typedef unsigned char type_6[16];
typedef float type_7[4];
typedef float type_8[4][4];
typedef int type_9[4];
typedef short type_10[8];
typedef PAD_INFO type_11[10];
typedef char type_12[16];
typedef unsigned long type_13[2];
typedef float type_14[2];
typedef float type_16[4][2];
typedef float type_17[4];
typedef unsigned char type_19[4];
typedef unsigned char type_20[4];
typedef float type_21[4];
typedef float type_22[4][4];
typedef unsigned char type_23[4];
typedef unsigned char type_24[2];
typedef unsigned char type_25[2];
typedef float type_26[4];
typedef float type_27[4];
typedef float type_28[4][4];

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

struct _VbWVSMATRIX
{
	float wvm[4][4];
	float vsm[4][4];
	float wsm[4][4];
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

struct _CL_VHIT_RESULT
{
	int kind;
	_anon2 hobj;
};

struct _anon1
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

union _anon2
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

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA dirvec;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

struct _anon3
{
	float d[4][4];
};

struct sh2gfw_POINTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
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
	_anon1 tgt_body_angle;
	_anon1 tgt_neck_angle;
	_anon1 tgt_arms_angle;
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

shAttackInfo sh2_attack_list[66];
float shJmsDirVec[4];
shPlayerWork sh2jms;
float shEyeToJmsDirVec[4];
float shEyeDirVec[4];
_VbWVSMATRIX VbWvsMatrix;
sh2gfw_Env_ctl Env_ctl;

void sh2gfw_Set_EyeDir();
void sh2gde_Get_EyeDir(float* svt);
float sh2gde_Get_InnerVectorJmsCam();
void kari_sh2gde_getspotParams(float* spotpos, float* spotdir, float* decayparms);
void sh2gde_getspotParams_for_Shadow(float* spotpos, float* spotdir, float* decayparms);
void sh2gde_getspotKTParams(float* spotpos, float* spotdir, float* spotcol, float* decayparms, int getmode);
void sh2gde_getCameraDir(float* cameradir);
void sh2gde_get_spotposdir(float* pos, float* dir);
int sh2gde_CheckSpot_JmsOrBG();
float[4] sh2gde_Get_BGSpotPos();
float[4] sh2gde_Get_BGSpotDir();

// 
// Start address: 0x1751d0
void sh2gfw_Set_EyeDir()
{
	float vv[4][4];
	float wvm[4][4];
	// Line 49, Address: 0x1751d0, Func Offset: 0
	// Line 51, Address: 0x1751d8, Func Offset: 0x8
	// Line 54, Address: 0x175204, Func Offset: 0x34
	// Line 55, Address: 0x175218, Func Offset: 0x48
	// Line 56, Address: 0x175228, Func Offset: 0x58
	// Line 57, Address: 0x175240, Func Offset: 0x70
	// Line 59, Address: 0x175250, Func Offset: 0x80
	// Line 63, Address: 0x175274, Func Offset: 0xa4
	// Line 64, Address: 0x175280, Func Offset: 0xb0
	// Line 65, Address: 0x17529c, Func Offset: 0xcc
	// Line 66, Address: 0x1752b4, Func Offset: 0xe4
	// Func End, Address: 0x1752c4, Func Offset: 0xf4
}

// 
// Start address: 0x1752d0
void sh2gde_Get_EyeDir(float* svt)
{
	// Line 71, Address: 0x1752d0, Func Offset: 0
	// Line 72, Address: 0x1752d8, Func Offset: 0x8
	// Line 73, Address: 0x1752e8, Func Offset: 0x18
	// Func End, Address: 0x1752f8, Func Offset: 0x28
}

// 
// Start address: 0x175300
float sh2gde_Get_InnerVectorJmsCam()
{
	// Line 87, Address: 0x175300, Func Offset: 0
	// Line 88, Address: 0x175334, Func Offset: 0x34
	// Func End, Address: 0x17533c, Func Offset: 0x3c
}

// 
// Start address: 0x175340
void kari_sh2gde_getspotParams(float* spotpos, float* spotdir, float* decayparms)
{
	float tmp[4];
	// Line 102, Address: 0x175340, Func Offset: 0
	// Line 111, Address: 0x175360, Func Offset: 0x20
	// Line 113, Address: 0x175370, Func Offset: 0x30
	// Line 116, Address: 0x175380, Func Offset: 0x40
	// Line 117, Address: 0x17538c, Func Offset: 0x4c
	// Line 118, Address: 0x175394, Func Offset: 0x54
	// Line 119, Address: 0x17539c, Func Offset: 0x5c
	// Line 120, Address: 0x1753a4, Func Offset: 0x64
	// Line 123, Address: 0x1753ac, Func Offset: 0x6c
	// Line 125, Address: 0x1753b4, Func Offset: 0x74
	// Line 127, Address: 0x1753c4, Func Offset: 0x84
	// Line 128, Address: 0x1753d0, Func Offset: 0x90
	// Line 129, Address: 0x1753dc, Func Offset: 0x9c
	// Line 130, Address: 0x1753e8, Func Offset: 0xa8
	// Line 152, Address: 0x1753f4, Func Offset: 0xb4
	// Line 154, Address: 0x175404, Func Offset: 0xc4
	// Func End, Address: 0x175420, Func Offset: 0xe0
}

// 
// Start address: 0x175420
void sh2gde_getspotParams_for_Shadow(float* spotpos, float* spotdir, float* decayparms)
{
	float tmp[4];
	// Line 169, Address: 0x175420, Func Offset: 0
	// Line 175, Address: 0x175440, Func Offset: 0x20
	// Line 177, Address: 0x175450, Func Offset: 0x30
	// Line 178, Address: 0x175460, Func Offset: 0x40
	// Line 179, Address: 0x17546c, Func Offset: 0x4c
	// Line 180, Address: 0x175474, Func Offset: 0x54
	// Line 181, Address: 0x17547c, Func Offset: 0x5c
	// Line 182, Address: 0x175484, Func Offset: 0x64
	// Line 183, Address: 0x17548c, Func Offset: 0x6c
	// Line 185, Address: 0x175494, Func Offset: 0x74
	// Line 186, Address: 0x1754a4, Func Offset: 0x84
	// Line 188, Address: 0x1754b4, Func Offset: 0x94
	// Line 189, Address: 0x1754c0, Func Offset: 0xa0
	// Line 190, Address: 0x1754cc, Func Offset: 0xac
	// Line 191, Address: 0x1754d8, Func Offset: 0xb8
	// Line 195, Address: 0x1754e4, Func Offset: 0xc4
	// Line 197, Address: 0x1754f4, Func Offset: 0xd4
	// Func End, Address: 0x175510, Func Offset: 0xf0
}

// 
// Start address: 0x175510
void sh2gde_getspotKTParams(float* spotpos, float* spotdir, float* spotcol, float* decayparms, int getmode)
{
	float tmp[4];
	float dir_vec[4];
	float pos[4];
	// Line 212, Address: 0x175510, Func Offset: 0
	// Line 217, Address: 0x175538, Func Offset: 0x28
	// Line 218, Address: 0x175540, Func Offset: 0x30
	// Line 222, Address: 0x175550, Func Offset: 0x40
	// Line 224, Address: 0x175564, Func Offset: 0x54
	// Line 227, Address: 0x17556c, Func Offset: 0x5c
	// Line 228, Address: 0x17557c, Func Offset: 0x6c
	// Line 231, Address: 0x175590, Func Offset: 0x80
	// Line 232, Address: 0x1755a0, Func Offset: 0x90
	// Line 233, Address: 0x1755b0, Func Offset: 0xa0
	// Line 236, Address: 0x1755b8, Func Offset: 0xa8
	// Line 237, Address: 0x1755c8, Func Offset: 0xb8
	// Line 238, Address: 0x1755dc, Func Offset: 0xcc
	// Line 239, Address: 0x1755e4, Func Offset: 0xd4
	// Line 240, Address: 0x1755f4, Func Offset: 0xe4
	// Line 248, Address: 0x175608, Func Offset: 0xf8
	// Line 249, Address: 0x175618, Func Offset: 0x108
	// Line 250, Address: 0x175624, Func Offset: 0x114
	// Line 251, Address: 0x17562c, Func Offset: 0x11c
	// Line 252, Address: 0x175634, Func Offset: 0x124
	// Line 253, Address: 0x17563c, Func Offset: 0x12c
	// Line 254, Address: 0x175644, Func Offset: 0x134
	// Line 255, Address: 0x17564c, Func Offset: 0x13c
	// Line 256, Address: 0x175658, Func Offset: 0x148
	// Line 257, Address: 0x175664, Func Offset: 0x154
	// Line 258, Address: 0x175670, Func Offset: 0x160
	// Line 259, Address: 0x17567c, Func Offset: 0x16c
	// Line 270, Address: 0x17568c, Func Offset: 0x17c
	// Func End, Address: 0x1756ac, Func Offset: 0x19c
}

// 
// Start address: 0x1756b0
void sh2gde_getCameraDir(float* cameradir)
{
	// Line 281, Address: 0x1756b0, Func Offset: 0
	// Line 282, Address: 0x1756b8, Func Offset: 0x8
	// Line 283, Address: 0x1756c0, Func Offset: 0x10
	// Func End, Address: 0x1756d0, Func Offset: 0x20
}

// 
// Start address: 0x1756d0
void sh2gde_get_spotposdir(float* pos, float* dir)
{
	// Line 304, Address: 0x1756d0, Func Offset: 0
	// Line 305, Address: 0x1756e0, Func Offset: 0x10
	// Line 310, Address: 0x1756f0, Func Offset: 0x20
	// Func End, Address: 0x1756f8, Func Offset: 0x28
}

// 
// Start address: 0x175700
int sh2gde_CheckSpot_JmsOrBG()
{
	DrawEnvData* Now;
	// Line 321, Address: 0x175700, Func Offset: 0
	// Line 323, Address: 0x175708, Func Offset: 0x8
	// Line 325, Address: 0x175710, Func Offset: 0x10
	// Line 326, Address: 0x17573c, Func Offset: 0x3c
	// Line 328, Address: 0x175740, Func Offset: 0x40
	// Func End, Address: 0x175750, Func Offset: 0x50
}

// 
// Start address: 0x175750
float[4] sh2gde_Get_BGSpotPos()
{
	DrawEnvData* Now;
	// Line 338, Address: 0x175750, Func Offset: 0
	// Line 339, Address: 0x175758, Func Offset: 0x8
	// Line 340, Address: 0x175760, Func Offset: 0x10
	// Line 341, Address: 0x175764, Func Offset: 0x14
	// Func End, Address: 0x175774, Func Offset: 0x24
}

// 
// Start address: 0x175780
float[4] sh2gde_Get_BGSpotDir()
{
	DrawEnvData* Now;
	// Line 344, Address: 0x175780, Func Offset: 0
	// Line 345, Address: 0x175788, Func Offset: 0x8
	// Line 347, Address: 0x175790, Func Offset: 0x10
	// Line 348, Address: 0x175794, Func Offset: 0x14
	// Func End, Address: 0x1757a4, Func Offset: 0x24
}

