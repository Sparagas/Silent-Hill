typedef struct _CL_HITPOLY_HEAD;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef struct SubCharacter;
typedef union _anon0;
typedef struct shCharaInfo;
typedef struct _CL_VHIT_RESULT;
typedef union _anon1;
typedef struct shSkelton;
typedef enum _BOAT_STATUS : unsigned char;
typedef struct _anon2;
typedef struct PAD_3D;
typedef struct PAD_2D;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct PAD_INFO;
typedef struct _USXY;
typedef struct _anon3;
typedef struct shClusterAnime;
typedef struct _SXY;
typedef struct _IXY;
typedef struct SubCharacterDisp;
typedef struct shAnime3d;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct shBattleFight;
typedef struct shBoatWork;
typedef struct _AnimeInfo;
typedef struct shBattleShot;
typedef struct shPlayerWork;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct _CL_VHIT_WALL;

typedef void(*type_5)(SubCharacter*);
typedef void(*type_6)(SubCharacter*);
typedef void(*type_11)(SubCharacter*);

typedef _AnimeInfo type_0[5];
typedef unsigned char type_1[20];
typedef unsigned char type_2[2];
typedef shAttackInfo type_3[66];
typedef unsigned char type_4[14];
typedef float type_7[4][2];
typedef float type_8[4];
typedef float type_9[4][4];
typedef unsigned char type_10[69];
typedef PAD_INFO type_12[10];
typedef unsigned char type_13[4];
typedef _AnimeInfo type_14[5];
typedef float type_15[2];
typedef void* type_16[3];
typedef unsigned char type_17[4];
typedef unsigned char type_18[4];
typedef unsigned char type_19[14];
typedef float type_20[4];
typedef float type_21[4];
typedef unsigned char type_22[2];
typedef unsigned char type_23[2];
typedef unsigned char type_24[97];
typedef _AnimeInfo type_25[4];

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
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

	void BoatPlayerCheckSetParameterPhase1();
};

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
};

struct shCharaInfo
{
	_anon2 pos;
	_anon2 rot;
	_anon2 pos_spd;
	_anon2 rot_spd;
	_anon3 mat;
	shSkelton* sk_top;
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

enum _BOAT_STATUS : unsigned char
{
	BOAT_ST_BOTH,
	BOAT_ST_RIGHT,
	BOAT_ST_LEFT
};

struct _anon2
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

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
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

struct _USXY
{
	unsigned short x;
	unsigned short y;
};

struct _anon3
{
	float d[4][4];
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

struct _SXY
{
	short x;
	short y;
};

struct _IXY
{
	int x;
	int y;
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

struct shBoatWork
{
	SubCharacter* boat_p;
	_BOAT_STATUS status_now;
	_BOAT_STATUS status_prev;
	unsigned int sub_st_flg;
	unsigned int anime_st_flg;
	unsigned int anime_pause;
	unsigned char anim_change;
	unsigned char anime_change_now;
	unsigned char anime_change_prev;
	float anime_change_timer;
	short anime_speed;
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

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
_AnimeInfo b_james_anim[5];
_AnimeInfo boat_anim[5];
_AnimeInfo d_boat_anim[4];
shPlayerWork sh2jms;
_anon3 bjms_localworld_matrix;
_anon3 kt_unit_matrix;
shBoatWork sh2bot;
void(*HumanBoatJMSFunction)(SubCharacter*);

void BoatPlayerCheckSetParameterPhase1();
void BoatPlayerCheckControl();

// 
// Start address: 0x26bdc0
void SubCharacter::BoatPlayerCheckSetParameterPhase1()
{
	SubCharacterDisp* this_d;
	// Line 123, Address: 0x26bdc0, Func Offset: 0
	// Line 127, Address: 0x26bdcc, Func Offset: 0xc
	// Line 128, Address: 0x26bdd4, Func Offset: 0x14
	// Line 129, Address: 0x26bddc, Func Offset: 0x1c
	// Line 130, Address: 0x26bde4, Func Offset: 0x24
	// Line 131, Address: 0x26bdec, Func Offset: 0x2c
	// Line 132, Address: 0x26bdf4, Func Offset: 0x34
	// Line 133, Address: 0x26bdfc, Func Offset: 0x3c
	// Line 134, Address: 0x26be04, Func Offset: 0x44
	// Line 135, Address: 0x26be0c, Func Offset: 0x4c
	// Line 136, Address: 0x26be14, Func Offset: 0x54
	// Line 137, Address: 0x26be1c, Func Offset: 0x5c
	// Func End, Address: 0x26be24, Func Offset: 0x64
}

// 
// Start address: 0x26be30
void BoatPlayerCheckControl()
{
	int anim_counter;
	SubCharacterDisp* this_d;
	SubCharacter* boat;
	SubCharacter* jms;
	shCharaInfo* james_info;
	// Line 262, Address: 0x26be30, Func Offset: 0
	// Line 264, Address: 0x26be40, Func Offset: 0x10
	// Line 269, Address: 0x26be48, Func Offset: 0x18
	// Line 272, Address: 0x26be54, Func Offset: 0x24
	// Line 276, Address: 0x26be5c, Func Offset: 0x2c
	// Line 277, Address: 0x26be70, Func Offset: 0x40
	// Line 278, Address: 0x26be88, Func Offset: 0x58
	// Line 279, Address: 0x26bea0, Func Offset: 0x70
	// Line 280, Address: 0x26bebc, Func Offset: 0x8c
	// Line 291, Address: 0x26bed8, Func Offset: 0xa8
	// Line 294, Address: 0x26beec, Func Offset: 0xbc
	// Line 295, Address: 0x26bef4, Func Offset: 0xc4
	// Line 296, Address: 0x26bf1c, Func Offset: 0xec
	// Line 297, Address: 0x26bf44, Func Offset: 0x114
	// Line 298, Address: 0x26bf6c, Func Offset: 0x13c
	// Line 306, Address: 0x26bf94, Func Offset: 0x164
	// Line 307, Address: 0x26bff4, Func Offset: 0x1c4
	// Line 327, Address: 0x26c02c, Func Offset: 0x1fc
	// Line 328, Address: 0x26c038, Func Offset: 0x208
	// Line 336, Address: 0x26c04c, Func Offset: 0x21c
	// Line 344, Address: 0x26c05c, Func Offset: 0x22c
	// Func End, Address: 0x26c074, Func Offset: 0x244
}

