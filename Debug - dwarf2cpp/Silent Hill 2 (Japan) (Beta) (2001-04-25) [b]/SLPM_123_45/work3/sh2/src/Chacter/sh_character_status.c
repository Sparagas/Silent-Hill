typedef struct SubCharacter;
typedef struct _anon0;
typedef struct shInArea;
typedef struct _CL_HITPOLY_COLUMN;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct PAD_3D;
typedef struct Item;
typedef struct _CL_VHIT_RESULT;
typedef struct _USXY;
typedef struct shSkelton;
typedef struct PAD_2D;
typedef struct _SXY;
typedef struct _anon1;
typedef struct PAD_INFO;
typedef struct SPOT_LIGHT;
typedef struct shBattleFight;
typedef struct shAnime3d;
typedef struct shClusterAnime;
typedef struct shBattleShot;
typedef struct SubObject;
typedef struct shBattleArea;
typedef struct shCharacterAll;
typedef struct shBattleInfo;
typedef struct SubCharacterDisp;
typedef struct _AnimeInfo;
typedef struct shPlayerWork;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_WALL;
typedef union _anon2;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _CL_VHIT_CHARA;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef union _anon3;
typedef struct shInAreaTgtInfo;
typedef union _anon4;

typedef void(*type_19)(SubCharacter*);
typedef void(*type_22)(SubCharacter*);
typedef void(*type_34)(SubCharacter*);
typedef void(*type_35)(SubCharacter*);

typedef unsigned char type_0[13];
typedef unsigned int type_1[32];
typedef shInAreaTgtInfo type_2[20];
typedef shInAreaTgtInfo type_3[20];
typedef float type_4[7];
typedef float type_5[7];
typedef unsigned char type_6[34];
typedef float type_7[4][2];
typedef unsigned char type_8[4];
typedef unsigned char type_9[4];
typedef unsigned int type_10[2];
typedef PAD_INFO type_11[10];
typedef unsigned short type_12[11];
typedef float type_13[4];
typedef float type_14[4][4];
typedef unsigned short type_15[3];
typedef unsigned char type_16[2];
typedef unsigned char type_17[2];
typedef unsigned char type_18[10];
typedef float type_20[4];
typedef unsigned int type_21[32];
typedef shAttackInfo type_23[46];
typedef unsigned char type_24[4];
typedef SubCharacterDisp type_25[32];
typedef float type_26[7];
typedef float type_27[7];
typedef void* type_28[3];
typedef float type_29[7];
typedef unsigned int type_30[9];
typedef unsigned char type_31[2];
typedef unsigned char type_32[10];
typedef float type_33[4];

struct SubCharacter
{
	int index;
	unsigned int status;
	unsigned int sub_status;
	unsigned int sub_st;
	short kind;
	short id;
	unsigned int step;
	_anon0 pos;
	_anon0 rot;
	_anon0 pos_spd;
	_anon0 rot_spd;
	_anon1 mat;
	shSkelton* sk_top;
	float eye_y;
	float center_y;
	float spd;
	float spd_org;
	float spd_y;
	float spd_roty;
	float grnd_normal[4];
	float grnd_height;
	_anon0 b_pos;
	_anon0 b_rot;
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

struct _anon0
{
	float x;
	float y;
	float z;
	float w;
};

struct shInArea
{
	struct
	{
		unsigned char look_on : 4;
		unsigned char feel_on : 4;
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

struct PAD_3D
{
	char round_way;
	unsigned char reserved1;
	unsigned char lslide;
	unsigned char rslide;
	unsigned char lturn180;
	unsigned char rturn180;
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

struct _CL_VHIT_RESULT
{
	int kind;
	_anon3 hobj;
};

struct _USXY
{
	unsigned short x;
	unsigned short y;
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon1 src_m;
	_anon0 src_t;
	_anon1 des_m;
	_anon0 des_t;
	_anon0 axis;
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

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
};

struct _SXY
{
	short x;
	short y;
};

struct _anon1
{
	float d[4][4];
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

struct SPOT_LIGHT
{
	float c[4];
	float zdir[4];
	float range[4];
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
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
	_SXY c_count;
	_SXY c_speed;
	_SXY total_speed;
	_USXY cur_frame;
	char first_bone_type;
	char comp_type;
	_AnimeInfo* anim_a;
	_AnimeInfo* anim_b;
	_anon0 rot_neck;
	_anon0 rot_arms;
	_anon0 rot_body_neck;
	_anon0 rot_body;
	float scale;
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

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct SubObject
{
	unsigned int status;
	unsigned int sub_status;
	unsigned int sub_st;
	short kind;
	short id;
	unsigned int step;
	_anon0 pos;
	_anon0 rot;
	_anon0 pos_spd;
	_anon0 rot_spd;
	_anon1 mat;
	void(*function)(SubCharacter*);
	void(*effecter_function)(SubCharacter*);
	SubObject* pre;
	SubObject* next;
};

struct shBattleArea
{
	float center;
	float radius;
};

struct shCharacterAll
{
	SubCharacterDisp work[32];
	SubCharacterDisp* free;
	SubCharacter* head;
	SubCharacter* player;
	char total;
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

struct shPlayerWork
{
	SubCharacter* player;
	_anon0 dist_rot;
	_anon0 dist_pos;
	_anon0 pos;
	_anon0 rot;
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
	_anon0 tgt_body_angle;
	_anon0 tgt_neck_angle;
	_anon0 tgt_arms_angle;
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

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

union _anon2
{
	shBattleFight fight;
	shBattleShot shot;
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

union _anon3
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct shInAreaTgtInfo
{
	_anon4 adr;
	float distance;
	shInArea in_area;
};

union _anon4
{
	SubCharacter* scp;
	SubObject* obj;
};

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
float jms_walk_spd_ana[7];
float jms_back_spd_ana[7];
float jms_swalk_spd_ana[7];
float jms_run_spd_ana[7];
float jms_srun_spd_ana[7];
unsigned int pjames_act_with_wep_flag[9];
unsigned int pjames_upper_flag[32];
unsigned int pjames_lower_flag[32];
shInAreaTgtInfo sh2_target_info[20];
shCharacterAll sh2chara;
int rest_tgt;
shInAreaTgtInfo sh2_target_info_buf[20];
shPlayerWork sh2jms;
int rest_tgt_buf;
Item item;

void shBattleCheckHitEyes(_CL_VHIT_RESULT* eye, SubCharacter* scp, int i, int net);
void shBattleCheckTargetMyArea(shInArea* in_area, SubCharacter* scp, SubCharacter* tgt, float* look, float* feel);
int shBattleAroundTargetEnemy();
int shBattleCheckTargetChara(SubCharacter* scp);
SubCharacter* shBattleGetTargetEnemy(SubCharacter* scp);
SubCharacter* shBattleChangeTargetEnemy(SubCharacter* scp, int key);
unsigned int shBattleGetTargetChara(SubCharacter* scp, int kind);
SubCharacter* shCameraGetNearEnemy(int i);
SubCharacter* shBattleGetNearDeadlyTargetEnemy(SubCharacter* scp);
SubCharacter* shBattleGetTargetHuman(SubCharacter* scp, unsigned int type);
int shBattleSeeHumanLight(SubCharacter* scp);
int shBattleAimedByHuman(SubCharacter* scp);
int shBattleFinishedByHuman(SubCharacter* scp);
int shBattleNoDamageHuman();
void shBattleSetLookArea(SubCharacter* scp, float center, float radius);
void shBattleSetFeelArea(SubCharacter* scp, float center, float radius);
void shBattleInitEnemyCheckWork();
void shBattleInit();
void shBattleExec();

// 
// Start address: 0x12c3e0
void shBattleCheckHitEyes(_CL_VHIT_RESULT* eye, SubCharacter* scp, int i, int net)
{
	float ep[4];
	float sp[4];
	// Line 83, Address: 0x12c3e0, Func Offset: 0
	// Line 86, Address: 0x12c3f8, Func Offset: 0x18
	// Line 87, Address: 0x12c404, Func Offset: 0x24
	// Line 88, Address: 0x12c410, Func Offset: 0x30
	// Line 89, Address: 0x12c41c, Func Offset: 0x3c
	// Line 90, Address: 0x12c444, Func Offset: 0x64
	// Line 91, Address: 0x12c46c, Func Offset: 0x8c
	// Line 92, Address: 0x12c494, Func Offset: 0xb4
	// Line 93, Address: 0x12c4b0, Func Offset: 0xd0
	// Func End, Address: 0x12c4c0, Func Offset: 0xe0
}

// 
// Start address: 0x12c4c0
void shBattleCheckTargetMyArea(shInArea* in_area, SubCharacter* scp, SubCharacter* tgt, float* look, float* feel)
{
	float tgt_to_feel;
	float tgt_to_look;
	float test2[4];
	float test1[4];
	float tgt_pos[4];
	// Line 126, Address: 0x12c4c0, Func Offset: 0
	// Line 131, Address: 0x12c4e4, Func Offset: 0x24
	// Line 132, Address: 0x12c4f4, Func Offset: 0x34
	// Line 133, Address: 0x12c504, Func Offset: 0x44
	// Line 134, Address: 0x12c510, Func Offset: 0x50
	// Line 135, Address: 0x12c51c, Func Offset: 0x5c
	// Line 136, Address: 0x12c528, Func Offset: 0x68
	// Line 137, Address: 0x12c53c, Func Offset: 0x7c
	// Line 138, Address: 0x12c550, Func Offset: 0x90
	// Line 139, Address: 0x12c59c, Func Offset: 0xdc
	// Line 140, Address: 0x12c5ec, Func Offset: 0x12c
	// Func End, Address: 0x12c604, Func Offset: 0x144
}

// 
// Start address: 0x12c670
int shBattleAroundTargetEnemy()
{
	SubCharacter* tgt;
	// Line 160, Address: 0x12c670, Func Offset: 0
	// Line 166, Address: 0x12c678, Func Offset: 0x8
	// Line 168, Address: 0x12c688, Func Offset: 0x18
	// Line 170, Address: 0x12c6c4, Func Offset: 0x54
	// Line 172, Address: 0x12c6d0, Func Offset: 0x60
	// Line 176, Address: 0x12c6e0, Func Offset: 0x70
	// Line 177, Address: 0x12c6e4, Func Offset: 0x74
	// Func End, Address: 0x12c6f4, Func Offset: 0x84
}

// 
// Start address: 0x12c700
int shBattleCheckTargetChara(SubCharacter* scp)
{
	shInAreaTgtInfo dummy;
	float feel_center[4];
	float look_center[4];
	shInArea in_area;
	SubCharacter* tgt;
	int j;
	int i;
	// Line 219, Address: 0x12c700, Func Offset: 0
	// Line 229, Address: 0x12c718, Func Offset: 0x18
	// Line 230, Address: 0x12c738, Func Offset: 0x38
	// Line 231, Address: 0x12c740, Func Offset: 0x40
	// Line 234, Address: 0x12c760, Func Offset: 0x60
	// Line 235, Address: 0x12c780, Func Offset: 0x80
	// Line 236, Address: 0x12c788, Func Offset: 0x88
	// Line 240, Address: 0x12c7a8, Func Offset: 0xa8
	// Line 241, Address: 0x12c7c0, Func Offset: 0xc0
	// Line 242, Address: 0x12c7d4, Func Offset: 0xd4
	// Line 248, Address: 0x12c7e0, Func Offset: 0xe0
	// Line 253, Address: 0x12c7f0, Func Offset: 0xf0
	// Line 255, Address: 0x12c814, Func Offset: 0x114
	// Line 256, Address: 0x12c830, Func Offset: 0x130
	// Line 258, Address: 0x12c868, Func Offset: 0x168
	// Line 259, Address: 0x12c8a0, Func Offset: 0x1a0
	// Line 260, Address: 0x12c8cc, Func Offset: 0x1cc
	// Line 262, Address: 0x12c934, Func Offset: 0x234
	// Line 266, Address: 0x12c948, Func Offset: 0x248
	// Line 290, Address: 0x12c958, Func Offset: 0x258
	// Line 291, Address: 0x12c964, Func Offset: 0x264
	// Line 292, Address: 0x12c970, Func Offset: 0x270
	// Line 293, Address: 0x12c9b8, Func Offset: 0x2b8
	// Line 294, Address: 0x12c9e0, Func Offset: 0x2e0
	// Line 295, Address: 0x12ca1c, Func Offset: 0x31c
	// Line 296, Address: 0x12ca44, Func Offset: 0x344
	// Line 297, Address: 0x12ca48, Func Offset: 0x348
	// Line 298, Address: 0x12ca6c, Func Offset: 0x36c
	// Line 313, Address: 0x12ca8c, Func Offset: 0x38c
	// Line 314, Address: 0x12ca9c, Func Offset: 0x39c
	// Line 317, Address: 0x12cab8, Func Offset: 0x3b8
	// Line 318, Address: 0x12cacc, Func Offset: 0x3cc
	// Line 320, Address: 0x12cad8, Func Offset: 0x3d8
	// Line 321, Address: 0x12cadc, Func Offset: 0x3dc
	// Func End, Address: 0x12caf8, Func Offset: 0x3f8
}

// 
// Start address: 0x12cb00
SubCharacter* shBattleGetTargetEnemy(SubCharacter* scp)
{
	_CL_VHIT_RESULT eye;
	int i;
	// Line 335, Address: 0x12cb00, Func Offset: 0
	// Line 339, Address: 0x12cb10, Func Offset: 0x10
	// Line 340, Address: 0x12cb24, Func Offset: 0x24
	// Line 344, Address: 0x12cb30, Func Offset: 0x30
	// Line 346, Address: 0x12cb3c, Func Offset: 0x3c
	// Line 348, Address: 0x12cb74, Func Offset: 0x74
	// Line 350, Address: 0x12cba0, Func Offset: 0xa0
	// Line 352, Address: 0x12cbb8, Func Offset: 0xb8
	// Line 354, Address: 0x12cbf0, Func Offset: 0xf0
	// Line 358, Address: 0x12cc14, Func Offset: 0x114
	// Line 359, Address: 0x12cc34, Func Offset: 0x134
	// Line 360, Address: 0x12cc38, Func Offset: 0x138
	// Func End, Address: 0x12cc4c, Func Offset: 0x14c
}

// 
// Start address: 0x12cc50
SubCharacter* shBattleChangeTargetEnemy(SubCharacter* scp, int key)
{
	_CL_VHIT_RESULT eye;
	float rot_tmp;
	float to_target;
	int i;
	// Line 380, Address: 0x12cc50, Func Offset: 0
	// Line 385, Address: 0x12cc64, Func Offset: 0x14
	// Line 386, Address: 0x12cc78, Func Offset: 0x28
	// Line 390, Address: 0x12cc84, Func Offset: 0x34
	// Line 392, Address: 0x12cc90, Func Offset: 0x40
	// Line 394, Address: 0x12ccbc, Func Offset: 0x6c
	// Line 396, Address: 0x12ccf4, Func Offset: 0xa4
	// Line 398, Address: 0x12cd20, Func Offset: 0xd0
	// Line 400, Address: 0x12cd84, Func Offset: 0x134
	// Line 401, Address: 0x12cda0, Func Offset: 0x150
	// Line 403, Address: 0x12ce00, Func Offset: 0x1b0
	// Line 405, Address: 0x12ce18, Func Offset: 0x1c8
	// Line 407, Address: 0x12ce28, Func Offset: 0x1d8
	// Line 413, Address: 0x12ce4c, Func Offset: 0x1fc
	// Line 414, Address: 0x12ce6c, Func Offset: 0x21c
	// Line 415, Address: 0x12ce70, Func Offset: 0x220
	// Func End, Address: 0x12ce84, Func Offset: 0x234
}

// 
// Start address: 0x12ce90
unsigned int shBattleGetTargetChara(SubCharacter* scp, int kind)
{
	_CL_VHIT_RESULT eye;
	int i;
	// Line 431, Address: 0x12ce90, Func Offset: 0
	// Line 435, Address: 0x12cea4, Func Offset: 0x14
	// Line 437, Address: 0x12cec4, Func Offset: 0x34
	// Line 438, Address: 0x12ced8, Func Offset: 0x48
	// Line 447, Address: 0x12cee4, Func Offset: 0x54
	// Line 449, Address: 0x12cef0, Func Offset: 0x60
	// Line 461, Address: 0x12cf08, Func Offset: 0x78
	// Line 462, Address: 0x12cf28, Func Offset: 0x98
	// Line 464, Address: 0x12cf4c, Func Offset: 0xbc
	// Line 465, Address: 0x12cf6c, Func Offset: 0xdc
	// Line 467, Address: 0x12cf74, Func Offset: 0xe4
	// Line 470, Address: 0x12cf80, Func Offset: 0xf0
	// Line 471, Address: 0x12cf84, Func Offset: 0xf4
	// Func End, Address: 0x12cf98, Func Offset: 0x108
}

// 
// Start address: 0x12cfa0
SubCharacter* shCameraGetNearEnemy(int i)
{
	// Line 481, Address: 0x12cfa0, Func Offset: 0
	// Line 482, Address: 0x12cfa8, Func Offset: 0x8
	// Line 483, Address: 0x12cfbc, Func Offset: 0x1c
	// Line 485, Address: 0x12cfc8, Func Offset: 0x28
	// Line 486, Address: 0x12cff0, Func Offset: 0x50
	// Line 487, Address: 0x12d02c, Func Offset: 0x8c
	// Line 490, Address: 0x12d054, Func Offset: 0xb4
	// Line 515, Address: 0x12d058, Func Offset: 0xb8
	// Func End, Address: 0x12d064, Func Offset: 0xc4
}

// 
// Start address: 0x12d070
SubCharacter* shBattleGetNearDeadlyTargetEnemy(SubCharacter* scp)
{
	_CL_VHIT_RESULT eye;
	int i;
	// Line 585, Address: 0x12d070, Func Offset: 0
	// Line 590, Address: 0x12d080, Func Offset: 0x10
	// Line 591, Address: 0x12d094, Func Offset: 0x24
	// Line 600, Address: 0x12d0a0, Func Offset: 0x30
	// Line 602, Address: 0x12d0ac, Func Offset: 0x3c
	// Line 604, Address: 0x12d0e4, Func Offset: 0x74
	// Line 607, Address: 0x12d13c, Func Offset: 0xcc
	// Line 608, Address: 0x12d154, Func Offset: 0xe4
	// Line 611, Address: 0x12d18c, Func Offset: 0x11c
	// Line 612, Address: 0x12d1c4, Func Offset: 0x154
	// Line 617, Address: 0x12d1e8, Func Offset: 0x178
	// Line 619, Address: 0x12d20c, Func Offset: 0x19c
	// Line 620, Address: 0x12d210, Func Offset: 0x1a0
	// Func End, Address: 0x12d224, Func Offset: 0x1b4
}

// 
// Start address: 0x12d230
SubCharacter* shBattleGetTargetHuman(SubCharacter* scp, unsigned int type)
{
	SubCharacter* p2;
	SubCharacter* p1;
	SubCharacter* p;
	float scalar2;
	float scalar1;
	float pos2[4];
	float pos1[4];
	// Line 659, Address: 0x12d230, Func Offset: 0
	// Line 664, Address: 0x12d244, Func Offset: 0x14
	// Line 666, Address: 0x12d264, Func Offset: 0x34
	// Line 667, Address: 0x12d274, Func Offset: 0x44
	// Line 668, Address: 0x12d27c, Func Offset: 0x4c
	// Line 669, Address: 0x12d28c, Func Offset: 0x5c
	// Line 671, Address: 0x12d294, Func Offset: 0x64
	// Line 672, Address: 0x12d2a4, Func Offset: 0x74
	// Line 674, Address: 0x12d2ac, Func Offset: 0x7c
	// Line 675, Address: 0x12d2c0, Func Offset: 0x90
	// Line 676, Address: 0x12d2c8, Func Offset: 0x98
	// Line 678, Address: 0x12d2dc, Func Offset: 0xac
	// Line 680, Address: 0x12d2ec, Func Offset: 0xbc
	// Line 681, Address: 0x12d2f4, Func Offset: 0xc4
	// Line 682, Address: 0x12d2fc, Func Offset: 0xcc
	// Line 683, Address: 0x12d30c, Func Offset: 0xdc
	// Line 684, Address: 0x12d31c, Func Offset: 0xec
	// Line 685, Address: 0x12d32c, Func Offset: 0xfc
	// Line 686, Address: 0x12d33c, Func Offset: 0x10c
	// Line 687, Address: 0x12d354, Func Offset: 0x124
	// Line 688, Address: 0x12d374, Func Offset: 0x144
	// Line 689, Address: 0x12d394, Func Offset: 0x164
	// Line 690, Address: 0x12d39c, Func Offset: 0x16c
	// Line 692, Address: 0x12d3a0, Func Offset: 0x170
	// Line 693, Address: 0x12d3a8, Func Offset: 0x178
	// Line 695, Address: 0x12d3b0, Func Offset: 0x180
	// Line 696, Address: 0x12d3b8, Func Offset: 0x188
	// Line 702, Address: 0x12d3bc, Func Offset: 0x18c
	// Func End, Address: 0x12d3d4, Func Offset: 0x1a4
}

// 
// Start address: 0x12d3e0
int shBattleSeeHumanLight(SubCharacter* scp)
{
	float dist;
	float light_radius;
	float angle;
	float scp_center[4];
	float light_center[4];
	SPOT_LIGHT spot;
	// Line 780, Address: 0x12d3e0, Func Offset: 0
	// Line 788, Address: 0x12d3f0, Func Offset: 0x10
	// Line 789, Address: 0x12d400, Func Offset: 0x20
	// Line 794, Address: 0x12d40c, Func Offset: 0x2c
	// Line 797, Address: 0x12d420, Func Offset: 0x40
	// Line 799, Address: 0x12d430, Func Offset: 0x50
	// Line 800, Address: 0x12d454, Func Offset: 0x74
	// Line 801, Address: 0x12d478, Func Offset: 0x98
	// Line 804, Address: 0x12d49c, Func Offset: 0xbc
	// Line 807, Address: 0x12d4bc, Func Offset: 0xdc
	// Line 808, Address: 0x12d4c4, Func Offset: 0xe4
	// Line 809, Address: 0x12d4cc, Func Offset: 0xec
	// Line 812, Address: 0x12d4d4, Func Offset: 0xf4
	// Line 814, Address: 0x12d518, Func Offset: 0x138
	// Line 815, Address: 0x12d528, Func Offset: 0x148
	// Line 817, Address: 0x12d534, Func Offset: 0x154
	// Line 818, Address: 0x12d538, Func Offset: 0x158
	// Func End, Address: 0x12d54c, Func Offset: 0x16c
}

// 
// Start address: 0x12d550
int shBattleAimedByHuman(SubCharacter* scp)
{
	// Line 830, Address: 0x12d550, Func Offset: 0
	// Line 831, Address: 0x12d558, Func Offset: 0x8
	// Line 832, Address: 0x12d57c, Func Offset: 0x2c
	// Line 834, Address: 0x12d588, Func Offset: 0x38
	// Line 835, Address: 0x12d58c, Func Offset: 0x3c
	// Func End, Address: 0x12d598, Func Offset: 0x48
}

// 
// Start address: 0x12d5a0
int shBattleFinishedByHuman(SubCharacter* scp)
{
	// Line 847, Address: 0x12d5a0, Func Offset: 0
	// Line 849, Address: 0x12d5a8, Func Offset: 0x8
	// Line 850, Address: 0x12d5d4, Func Offset: 0x34
	// Line 852, Address: 0x12d5e0, Func Offset: 0x40
	// Line 853, Address: 0x12d5e4, Func Offset: 0x44
	// Func End, Address: 0x12d5f0, Func Offset: 0x50
}

// 
// Start address: 0x12d5f0
int shBattleNoDamageHuman()
{
	// Line 867, Address: 0x12d5f0, Func Offset: 0
	// Line 868, Address: 0x12d620, Func Offset: 0x30
	// Line 870, Address: 0x12d62c, Func Offset: 0x3c
	// Line 871, Address: 0x12d630, Func Offset: 0x40
	// Func End, Address: 0x12d638, Func Offset: 0x48
}

// 
// Start address: 0x12d640
void shBattleSetLookArea(SubCharacter* scp, float center, float radius)
{
	// Line 899, Address: 0x12d640, Func Offset: 0
	// Line 900, Address: 0x12d650, Func Offset: 0x10
	// Line 901, Address: 0x12d668, Func Offset: 0x28
	// Line 902, Address: 0x12d680, Func Offset: 0x40
	// Func End, Address: 0x12d68c, Func Offset: 0x4c
}

// 
// Start address: 0x12d690
void shBattleSetFeelArea(SubCharacter* scp, float center, float radius)
{
	// Line 914, Address: 0x12d690, Func Offset: 0
	// Line 915, Address: 0x12d6a0, Func Offset: 0x10
	// Line 916, Address: 0x12d6b8, Func Offset: 0x28
	// Line 917, Address: 0x12d6d0, Func Offset: 0x40
	// Func End, Address: 0x12d6dc, Func Offset: 0x4c
}

// 
// Start address: 0x12d6e0
void shBattleInitEnemyCheckWork()
{
	// Line 926, Address: 0x12d6e0, Func Offset: 0
	// Line 927, Address: 0x12d6e8, Func Offset: 0x8
	// Line 928, Address: 0x12d6fc, Func Offset: 0x1c
	// Line 931, Address: 0x12d710, Func Offset: 0x30
	// Line 932, Address: 0x12d724, Func Offset: 0x44
	// Func End, Address: 0x12d734, Func Offset: 0x54
}

// 
// Start address: 0x12d740
void shBattleInit()
{
	// Line 954, Address: 0x12d740, Func Offset: 0
	// Line 955, Address: 0x12d748, Func Offset: 0x8
	// Line 956, Address: 0x12d750, Func Offset: 0x10
	// Line 957, Address: 0x12d758, Func Offset: 0x18
	// Func End, Address: 0x12d768, Func Offset: 0x28
}

// 
// Start address: 0x12d770
void shBattleExec()
{
	// Line 966, Address: 0x12d770, Func Offset: 0
	// Line 967, Address: 0x12d778, Func Offset: 0x8
	// Line 968, Address: 0x12d780, Func Offset: 0x10
	// Func End, Address: 0x12d790, Func Offset: 0x20
}

