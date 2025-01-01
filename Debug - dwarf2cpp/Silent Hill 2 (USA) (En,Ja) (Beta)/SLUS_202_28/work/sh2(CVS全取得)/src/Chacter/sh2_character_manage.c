typedef struct SubCharacter;
typedef struct _CL_VHIT_WALL;
typedef struct SubCharacterDisp;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct sh2gfw_ModelDraw_MAN;
typedef struct _CL_VHIT_CHARA;
typedef struct PAD_3D;
typedef union _anon0;
typedef struct _CL_VHIT_RESULT;
typedef union _anon1;
typedef struct PAD_2D;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct PAD_INFO;
typedef struct _CI_SubCharacter;
typedef struct _anon2;
typedef struct shSkelton;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct _USXY;
typedef struct _Character_Info;
typedef struct _anon3;
typedef struct _SXY;
typedef struct shClusterAnime;
typedef struct _IXY;
typedef struct shPlayerWork;
typedef struct shAnime3d;
typedef struct shBattleFight;
typedef struct _AnimeInfo;
typedef struct shBattleShot;
typedef struct shCharacterAll;
typedef struct MariaAppearPoint;
typedef struct shBattleArea;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct shBattleInfo;

typedef void(*type_15)(SubCharacter*);
typedef void(*type_19)(SubCharacter*);

typedef MariaAppearPoint type_0[91];
typedef unsigned char type_1[2];
typedef unsigned char type_2[20];
typedef unsigned int type_3[9];
typedef PAD_INFO type_4[10];
typedef shAttackInfo type_5[66];
typedef unsigned char type_6[14];
typedef float type_7[2];
typedef unsigned short type_8[4];
typedef unsigned char type_9[4];
typedef unsigned short type_10[4];
typedef unsigned char type_11[4];
typedef float type_12[4][2];
typedef float type_13[4];
typedef float type_14[4][4];
typedef unsigned short type_16[2];
typedef unsigned short type_17[2];
typedef unsigned char type_18[69];
typedef int type_20[6];
typedef int type_21[6];
typedef _CI_SubCharacter type_22[32];
typedef unsigned char type_23[4];
typedef unsigned char type_24[2];
typedef void* type_25[6];
typedef unsigned char type_26[2];
typedef void* type_27[3];
typedef float type_28[4];
typedef unsigned char type_29[14];
typedef float type_30[4];
typedef SubCharacterDisp type_31[32];
typedef unsigned char type_32[97];

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
	_anon0 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

struct sh2gfw_ModelDraw_MAN
{
	unsigned int chara_id;
	SubCharacter* testSubChar;
	void* Model_Head;
	void* pModel_Header;
	void* sh_Model;
	void* pAnime;
	void* pCluster;
	void* pKg1Work;
	short allnum;
	short nowtex;
	unsigned short TB_change_VU1num;
	unsigned short TB_change_VU1now;
	unsigned short TB_change_VU1[4];
	unsigned short TB_index_VU1[4];
	unsigned short TB_change_VU0num;
	unsigned short TB_change_VU0now;
	unsigned short TB_change_VU0[2];
	unsigned short TB_index_VU0[2];
	int chr_slotid[6];
	int chr_cid[6];
	int d1cid;
	int d2c1d;
	void* pTexMAN[6];
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

struct _CI_SubCharacter
{
	unsigned int status;
	unsigned int sub_status;
	unsigned int sub_st;
	short kind;
	short id;
	_anon2 pos;
	_anon2 rot;
	_anon2 pos_spd;
	_anon2 rot_spd;
	_anon2 b_pos;
	_anon2 b_rot;
	int en_first_status;
	float eye_y;
	float center_y;
	float spd;
	float spd_org;
	float spd_y;
	float spd_roty;
	float battle_hp;
	float battle_hp_max;
	float battle_hp_rate;
	unsigned int battle_status;
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

struct _Character_Info
{
	float spray_time;
	float running_time;
	int tired;
	int tired_max;
	int spirit;
	int weapon;
	unsigned char spray_set;
	_CI_SubCharacter ci_sc[32];
	char total;
};

struct _anon3
{
	float d[4][4];
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
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

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct shCharacterAll
{
	SubCharacterDisp work[32];
	SubCharacterDisp* free;
	SubCharacter* head;
	SubCharacter* player;
	char total;
};

struct MariaAppearPoint
{
	short room_name_prev;
	short room_name_now;
	int active_type;
	float pos[4];
};

struct shBattleArea
{
	float center;
	float radius;
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

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
MariaAppearPoint maria_apeear_point_list[91];
unsigned int pmaria_sub_status_flag[9];
int id_counter;
shCharacterAll sh2chara;
shPlayerWork sh2jms;

int shCharacter_Manage_Init();
int shCharacter_Manage_Create(short kind, short id, float* pos, float* rot, unsigned int status);
int shCharacter_Manage_Delete(SubCharacter* scp, short kind, short id);
SubCharacter* shCharacter_Manage_GetCharacterList();
int shCharacter_Manage_SetDataAdresss(SubCharacter* scp);
void shCharacter_Manage_SetJamesAnimeAdresss(SubCharacter* scp, unsigned int address);
int shCharacter_Manage_Create_After_MC_Load(_Character_Info* chara);

// 
// Start address: 0x1c6490
int shCharacter_Manage_Init()
{
	// Line 66, Address: 0x1c6490, Func Offset: 0
	// Line 67, Address: 0x1c6498, Func Offset: 0x8
	// Line 68, Address: 0x1c64a4, Func Offset: 0x14
	// Line 69, Address: 0x1c64ac, Func Offset: 0x1c
	// Func End, Address: 0x1c64bc, Func Offset: 0x2c
}

// 
// Start address: 0x1c64c0
int shCharacter_Manage_Create(short kind, short id, float* pos, float* rot, unsigned int status)
{
	SubCharacter* scp;
	// Line 100, Address: 0x1c64c0, Func Offset: 0
	// Line 104, Address: 0x1c64ec, Func Offset: 0x2c
	// Line 107, Address: 0x1c6500, Func Offset: 0x40
	// Line 110, Address: 0x1c6508, Func Offset: 0x48
	// Line 116, Address: 0x1c6510, Func Offset: 0x50
	// Line 119, Address: 0x1c6518, Func Offset: 0x58
	// Line 122, Address: 0x1c651c, Func Offset: 0x5c
	// Line 125, Address: 0x1c6528, Func Offset: 0x68
	// Line 126, Address: 0x1c653c, Func Offset: 0x7c
	// Line 127, Address: 0x1c6540, Func Offset: 0x80
	// Line 129, Address: 0x1c6574, Func Offset: 0xb4
	// Line 131, Address: 0x1c6580, Func Offset: 0xc0
	// Line 133, Address: 0x1c6598, Func Offset: 0xd8
	// Line 134, Address: 0x1c65ac, Func Offset: 0xec
	// Line 135, Address: 0x1c65c0, Func Offset: 0x100
	// Line 140, Address: 0x1c65cc, Func Offset: 0x10c
	// Line 142, Address: 0x1c65dc, Func Offset: 0x11c
	// Line 144, Address: 0x1c65e8, Func Offset: 0x128
	// Line 145, Address: 0x1c65ec, Func Offset: 0x12c
	// Func End, Address: 0x1c6610, Func Offset: 0x150
}

// 
// Start address: 0x1c6610
int shCharacter_Manage_Delete(SubCharacter* scp, short kind, short id)
{
	int delete_on;
	SubCharacter* del_scp;
	// Line 165, Address: 0x1c6610, Func Offset: 0
	// Line 168, Address: 0x1c661c, Func Offset: 0xc
	// Line 171, Address: 0x1c6620, Func Offset: 0x10
	// Line 172, Address: 0x1c6628, Func Offset: 0x18
	// Line 174, Address: 0x1c662c, Func Offset: 0x1c
	// Line 178, Address: 0x1c6634, Func Offset: 0x24
	// Line 179, Address: 0x1c6644, Func Offset: 0x34
	// Line 180, Address: 0x1c666c, Func Offset: 0x5c
	// Line 181, Address: 0x1c6670, Func Offset: 0x60
	// Line 183, Address: 0x1c6678, Func Offset: 0x68
	// Line 184, Address: 0x1c6688, Func Offset: 0x78
	// Line 185, Address: 0x1c6690, Func Offset: 0x80
	// Line 189, Address: 0x1c6694, Func Offset: 0x84
	// Line 190, Address: 0x1c669c, Func Offset: 0x8c
	// Line 197, Address: 0x1c66a8, Func Offset: 0x98
	// Line 198, Address: 0x1c66c8, Func Offset: 0xb8
	// Line 202, Address: 0x1c66d4, Func Offset: 0xc4
	// Line 211, Address: 0x1c66e0, Func Offset: 0xd0
	// Line 212, Address: 0x1c66e4, Func Offset: 0xd4
	// Func End, Address: 0x1c66f8, Func Offset: 0xe8
}

// 
// Start address: 0x1c6700
SubCharacter* shCharacter_Manage_GetCharacterList()
{
	// Line 275, Address: 0x1c6700, Func Offset: 0
	// Line 276, Address: 0x1c6708, Func Offset: 0x8
	// Func End, Address: 0x1c6710, Func Offset: 0x10
}

// 
// Start address: 0x1c6710
int shCharacter_Manage_SetDataAdresss(SubCharacter* scp)
{
	sh2gfw_ModelDraw_MAN* pMD;
	SubCharacterDisp* scp_d;
	// Line 291, Address: 0x1c6710, Func Offset: 0
	// Line 295, Address: 0x1c6724, Func Offset: 0x14
	// Line 296, Address: 0x1c672c, Func Offset: 0x1c
	// Line 299, Address: 0x1c6738, Func Offset: 0x28
	// Line 301, Address: 0x1c6748, Func Offset: 0x38
	// Line 302, Address: 0x1c6750, Func Offset: 0x40
	// Line 304, Address: 0x1c675c, Func Offset: 0x4c
	// Line 308, Address: 0x1c6768, Func Offset: 0x58
	// Line 314, Address: 0x1c677c, Func Offset: 0x6c
	// Line 315, Address: 0x1c6784, Func Offset: 0x74
	// Line 316, Address: 0x1c678c, Func Offset: 0x7c
	// Line 317, Address: 0x1c6794, Func Offset: 0x84
	// Line 320, Address: 0x1c679c, Func Offset: 0x8c
	// Line 322, Address: 0x1c67ac, Func Offset: 0x9c
	// Line 324, Address: 0x1c67b4, Func Offset: 0xa4
	// Line 325, Address: 0x1c67bc, Func Offset: 0xac
	// Line 326, Address: 0x1c67c4, Func Offset: 0xb4
	// Line 327, Address: 0x1c67cc, Func Offset: 0xbc
	// Line 328, Address: 0x1c67d4, Func Offset: 0xc4
	// Line 329, Address: 0x1c67dc, Func Offset: 0xcc
	// Line 330, Address: 0x1c67e4, Func Offset: 0xd4
	// Line 332, Address: 0x1c67ec, Func Offset: 0xdc
	// Line 333, Address: 0x1c67f0, Func Offset: 0xe0
	// Func End, Address: 0x1c6808, Func Offset: 0xf8
}

// 
// Start address: 0x1c6810
void shCharacter_Manage_SetJamesAnimeAdresss(SubCharacter* scp, unsigned int address)
{
	SubCharacterDisp* scp_d;
	// Line 348, Address: 0x1c6810, Func Offset: 0
	// Line 349, Address: 0x1c6814, Func Offset: 0x4
	// Line 350, Address: 0x1c681c, Func Offset: 0xc
	// Func End, Address: 0x1c6824, Func Offset: 0x14
}

// 
// Start address: 0x1c6830
int shCharacter_Manage_Create_After_MC_Load(_Character_Info* chara)
{
	SubCharacter* scp;
	int i;
	// Line 376, Address: 0x1c6830, Func Offset: 0
	// Line 381, Address: 0x1c6848, Func Offset: 0x18
	// Line 382, Address: 0x1c6854, Func Offset: 0x24
	// Line 386, Address: 0x1c6880, Func Offset: 0x50
	// Line 387, Address: 0x1c688c, Func Offset: 0x5c
	// Line 388, Address: 0x1c6894, Func Offset: 0x64
	// Line 389, Address: 0x1c689c, Func Offset: 0x6c
	// Line 390, Address: 0x1c68a4, Func Offset: 0x74
	// Line 391, Address: 0x1c68c4, Func Offset: 0x94
	// Line 392, Address: 0x1c68e4, Func Offset: 0xb4
	// Line 393, Address: 0x1c6904, Func Offset: 0xd4
	// Line 394, Address: 0x1c6924, Func Offset: 0xf4
	// Line 395, Address: 0x1c6944, Func Offset: 0x114
	// Line 396, Address: 0x1c6964, Func Offset: 0x134
	// Line 397, Address: 0x1c696c, Func Offset: 0x13c
	// Line 398, Address: 0x1c6974, Func Offset: 0x144
	// Line 399, Address: 0x1c697c, Func Offset: 0x14c
	// Line 400, Address: 0x1c6984, Func Offset: 0x154
	// Line 401, Address: 0x1c698c, Func Offset: 0x15c
	// Line 402, Address: 0x1c6994, Func Offset: 0x164
	// Line 403, Address: 0x1c699c, Func Offset: 0x16c
	// Line 404, Address: 0x1c69a4, Func Offset: 0x174
	// Line 405, Address: 0x1c69ac, Func Offset: 0x17c
	// Line 406, Address: 0x1c69b4, Func Offset: 0x184
	// Line 407, Address: 0x1c69bc, Func Offset: 0x18c
	// Line 408, Address: 0x1c69cc, Func Offset: 0x19c
	// Line 409, Address: 0x1c69d4, Func Offset: 0x1a4
	// Line 414, Address: 0x1c69d8, Func Offset: 0x1a8
	// Line 419, Address: 0x1c69f0, Func Offset: 0x1c0
	// Line 420, Address: 0x1c69fc, Func Offset: 0x1cc
	// Line 421, Address: 0x1c6a08, Func Offset: 0x1d8
	// Line 422, Address: 0x1c6a14, Func Offset: 0x1e4
	// Line 423, Address: 0x1c6a20, Func Offset: 0x1f0
	// Line 424, Address: 0x1c6a2c, Func Offset: 0x1fc
	// Line 425, Address: 0x1c6a38, Func Offset: 0x208
	// Line 426, Address: 0x1c6a44, Func Offset: 0x214
	// Line 427, Address: 0x1c6a50, Func Offset: 0x220
	// Line 428, Address: 0x1c6a5c, Func Offset: 0x22c
	// Line 429, Address: 0x1c6a68, Func Offset: 0x238
	// Line 430, Address: 0x1c6a74, Func Offset: 0x244
	// Line 432, Address: 0x1c6a80, Func Offset: 0x250
	// Func End, Address: 0x1c6a9c, Func Offset: 0x26c
}

