typedef struct _anon0;
typedef struct shBattleArea;
typedef struct SubCharacter;
typedef struct SubCharacterDisp;
typedef struct PAD_2D;
typedef struct shSkelton;
typedef struct _anon1;
typedef struct shBattleInfo;
typedef struct _anon2;
typedef struct Model_List;
typedef struct PAD_INFO;
typedef struct _anon3;
typedef struct shSkeltonWork;
typedef struct shClusterAnime;
typedef struct Playing_Info;
typedef struct SubObject;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct CharaAdmin_RoomDistance;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_WALL;
typedef struct Item;
typedef union _anon4;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _CL_VHIT_CHARA;
typedef struct _CL_VHIT_RESULT;
typedef union _anon5;
typedef struct shPlayerWork;
typedef struct _anon6;
typedef struct _USXY;
typedef struct _SXY;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct _anon7;
typedef struct shAnime3d;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct _anon8;
typedef struct _AnimeInfo;
typedef struct shBattleFight;
typedef struct PAD_3D;
typedef struct shBattleShot;
typedef struct shCharacterAll;

typedef void(*type_1)(SubCharacter*);
typedef void(*type_3)();
typedef int(*type_4)();
typedef void(*type_22)(SubCharacter*);
typedef void(*type_23)(SubCharacter*);
typedef void(*type_34)(SubCharacter*);

typedef PAD_INFO type_0[10];
typedef SubCharacterDisp type_2[32];
typedef unsigned int type_5[256];
typedef unsigned char type_6[4];
typedef unsigned int type_7[32];
typedef unsigned char type_8[4];
typedef char type_9[4];
typedef char type_10[4];
typedef unsigned char type_11[10];
typedef unsigned char type_12[2];
typedef shSkelton type_13[400];
typedef void* type_14[3];
typedef unsigned char type_15[2];
typedef unsigned char type_16[4];
typedef CharaAdmin_RoomDistance type_17[31];
typedef float type_18[4];
typedef unsigned int type_19[2];
typedef unsigned short type_20[11];
typedef unsigned short type_21[3];
typedef unsigned char type_24[10];
typedef unsigned char type_25[2];
typedef CharaAdmin_RoomDistance type_26[18];
typedef float type_27[4][2];
typedef unsigned char type_28[13];
typedef float type_29[4];
typedef float type_30[4][4];
typedef float type_31[4];
typedef unsigned char type_32[34];
typedef unsigned char type_33[4];
typedef unsigned char type_35[4];
typedef shAttackInfo type_36[46];

struct _anon0
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
};

struct shBattleArea
{
	float center;
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
	_anon7 pos;
	_anon7 rot;
	_anon7 pos_spd;
	_anon7 rot_spd;
	_anon8 mat;
	shSkelton* sk_top;
	float eye_y;
	float center_y;
	float spd;
	float spd_org;
	float spd_y;
	float spd_roty;
	float grnd_normal[4];
	float grnd_height;
	_anon7 b_pos;
	_anon7 b_rot;
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

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon8 src_m;
	_anon7 src_t;
	_anon8 des_m;
	_anon7 des_t;
	_anon7 axis;
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

struct _anon1
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

struct _anon2
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

struct _anon3
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

struct shSkeltonWork
{
	shSkelton work[400];
	shSkelton* free;
	int last;
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

struct SubObject
{
	unsigned int status;
	unsigned int sub_status;
	unsigned int sub_st;
	short kind;
	short id;
	unsigned int step;
	_anon7 pos;
	_anon7 rot;
	_anon7 pos_spd;
	_anon7 rot_spd;
	_anon8 mat;
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

struct CharaAdmin_RoomDistance
{
	short rm0;
	short rm1;
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

union _anon4
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

struct _CL_VHIT_RESULT
{
	int kind;
	_anon5 hobj;
};

union _anon5
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct shPlayerWork
{
	SubCharacter* player;
	_anon7 dist_rot;
	_anon7 dist_pos;
	_anon7 pos;
	_anon7 rot;
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
	_anon7 tgt_body_angle;
	_anon7 tgt_neck_angle;
	_anon7 tgt_arms_angle;
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

struct _anon6
{
	_anon0* ev_list;
	unsigned char* ev_pos;
	int(*ev_prog)();
	_anon2* gi_list;
	Model_List* mdl_list;
	_anon3* en_list;
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

struct _USXY
{
	unsigned short x;
	unsigned short y;
};

struct _SXY
{
	short x;
	short y;
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

struct _anon7
{
	float x;
	float y;
	float z;
	float w;
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
	_anon7 rot_neck;
	_anon7 rot_arms;
	_anon7 rot_body_neck;
	_anon7 rot_body;
	float scale;
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

struct _anon8
{
	float d[4][4];
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
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

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
float connect_pos[4];
Item item;
_anon1 game_flag;
shPlayerWork sh2jms;
_anon6* stage;
Playing_Info playing;
CharaAdmin_RoomDistance room_dist_hsp_f[31];
CharaAdmin_RoomDistance room_dist_hsp_b[18];
shCharacterAll sh2chara;
shSkeltonWork sh2skelton;

void ConnectCharaWorkJamesSet();
void ConnectCharaWorkWeapon();
void ConnectCharaWorkReset();
void ConnectCharaWorkAdminIn();
int RoomDistance(short room0, short room1);
int RoomDistanceSub(CharaAdmin_RoomDistance* dist, short room0, short room1, unsigned long flag);
SubCharacter* CharaWorkCreate(short kind, short id, float* pos, float* rot, unsigned int status);
void DeleteEnemyWork();
void DeleteEnemyWorkIn();
void DeleteEnemyWorkOut();

// 
// Start address: 0x1cfc90
void ConnectCharaWorkJamesSet()
{
	float rot[4];
	float pos[4];
	// Line 61, Address: 0x1cfc90, Func Offset: 0
	// Line 65, Address: 0x1cfc98, Func Offset: 0x8
	// Line 66, Address: 0x1cfca0, Func Offset: 0x10
	// Line 67, Address: 0x1cfca8, Func Offset: 0x18
	// Line 68, Address: 0x1cfcb4, Func Offset: 0x24
	// Line 69, Address: 0x1cfcc0, Func Offset: 0x30
	// Line 70, Address: 0x1cfccc, Func Offset: 0x3c
	// Line 71, Address: 0x1cfcd8, Func Offset: 0x48
	// Line 72, Address: 0x1cfcf4, Func Offset: 0x64
	// Func End, Address: 0x1cfd04, Func Offset: 0x74
}

// 
// Start address: 0x1cfd10
void ConnectCharaWorkWeapon()
{
	short chara_id;
	short weapon_id;
	float dummy[4];
	// Line 79, Address: 0x1cfd10, Func Offset: 0
	// Line 111, Address: 0x1cfd20, Func Offset: 0x10
	// Line 112, Address: 0x1cfd34, Func Offset: 0x24
	// Line 113, Address: 0x1cfd4c, Func Offset: 0x3c
	// Line 115, Address: 0x1cfd58, Func Offset: 0x48
	// Line 117, Address: 0x1cfd90, Func Offset: 0x80
	// Line 118, Address: 0x1cfda0, Func Offset: 0x90
	// Line 119, Address: 0x1cfdac, Func Offset: 0x9c
	// Line 120, Address: 0x1cfdc0, Func Offset: 0xb0
	// Line 122, Address: 0x1cfdcc, Func Offset: 0xbc
	// Line 125, Address: 0x1cfdd4, Func Offset: 0xc4
	// Line 126, Address: 0x1cfde8, Func Offset: 0xd8
	// Line 127, Address: 0x1cfdf4, Func Offset: 0xe4
	// Line 128, Address: 0x1cfe08, Func Offset: 0xf8
	// Line 129, Address: 0x1cfe24, Func Offset: 0x114
	// Line 131, Address: 0x1cfe30, Func Offset: 0x120
	// Line 134, Address: 0x1cfe38, Func Offset: 0x128
	// Line 135, Address: 0x1cfe4c, Func Offset: 0x13c
	// Line 136, Address: 0x1cfe58, Func Offset: 0x148
	// Line 137, Address: 0x1cfe6c, Func Offset: 0x15c
	// Line 138, Address: 0x1cfe88, Func Offset: 0x178
	// Line 140, Address: 0x1cfe94, Func Offset: 0x184
	// Line 143, Address: 0x1cfe9c, Func Offset: 0x18c
	// Line 144, Address: 0x1cfeb0, Func Offset: 0x1a0
	// Line 145, Address: 0x1cfebc, Func Offset: 0x1ac
	// Line 146, Address: 0x1cfed0, Func Offset: 0x1c0
	// Line 147, Address: 0x1cfeec, Func Offset: 0x1dc
	// Line 149, Address: 0x1cfef8, Func Offset: 0x1e8
	// Line 152, Address: 0x1cff00, Func Offset: 0x1f0
	// Line 153, Address: 0x1cff14, Func Offset: 0x204
	// Line 154, Address: 0x1cff20, Func Offset: 0x210
	// Line 155, Address: 0x1cff34, Func Offset: 0x224
	// Line 156, Address: 0x1cff50, Func Offset: 0x240
	// Line 158, Address: 0x1cff5c, Func Offset: 0x24c
	// Line 161, Address: 0x1cff64, Func Offset: 0x254
	// Line 162, Address: 0x1cff78, Func Offset: 0x268
	// Line 163, Address: 0x1cff84, Func Offset: 0x274
	// Line 164, Address: 0x1cff98, Func Offset: 0x288
	// Line 165, Address: 0x1cffb4, Func Offset: 0x2a4
	// Line 167, Address: 0x1cffc0, Func Offset: 0x2b0
	// Line 170, Address: 0x1cffc8, Func Offset: 0x2b8
	// Line 171, Address: 0x1cffdc, Func Offset: 0x2cc
	// Line 172, Address: 0x1cffe8, Func Offset: 0x2d8
	// Line 173, Address: 0x1cfffc, Func Offset: 0x2ec
	// Line 174, Address: 0x1d0018, Func Offset: 0x308
	// Line 176, Address: 0x1d0024, Func Offset: 0x314
	// Line 179, Address: 0x1d002c, Func Offset: 0x31c
	// Line 180, Address: 0x1d0040, Func Offset: 0x330
	// Line 181, Address: 0x1d004c, Func Offset: 0x33c
	// Line 182, Address: 0x1d0060, Func Offset: 0x350
	// Line 183, Address: 0x1d007c, Func Offset: 0x36c
	// Line 185, Address: 0x1d0088, Func Offset: 0x378
	// Line 188, Address: 0x1d0090, Func Offset: 0x380
	// Line 189, Address: 0x1d00a4, Func Offset: 0x394
	// Line 190, Address: 0x1d00b0, Func Offset: 0x3a0
	// Line 191, Address: 0x1d00c4, Func Offset: 0x3b4
	// Line 192, Address: 0x1d00e0, Func Offset: 0x3d0
	// Line 196, Address: 0x1d00ec, Func Offset: 0x3dc
	// Func End, Address: 0x1d0104, Func Offset: 0x3f4
}

// 
// Start address: 0x1d0110
void ConnectCharaWorkReset()
{
	SubCharacter* next;
	SubCharacter* scp;
	// Line 204, Address: 0x1d0110, Func Offset: 0
	// Line 208, Address: 0x1d0120, Func Offset: 0x10
	// Line 209, Address: 0x1d012c, Func Offset: 0x1c
	// Line 210, Address: 0x1d0134, Func Offset: 0x24
	// Line 211, Address: 0x1d0138, Func Offset: 0x28
	// Line 212, Address: 0x1d019c, Func Offset: 0x8c
	// Line 213, Address: 0x1d01d4, Func Offset: 0xc4
	// Line 214, Address: 0x1d0218, Func Offset: 0x108
	// Line 215, Address: 0x1d022c, Func Offset: 0x11c
	// Line 216, Address: 0x1d0240, Func Offset: 0x130
	// Func End, Address: 0x1d0258, Func Offset: 0x148
}

// 
// Start address: 0x1d0260
void ConnectCharaWorkAdminIn()
{
	int room;
	int flag;
	int kind;
	float rot[4];
	float pos[4];
	_anon3* ep;
	_anon2* ip;
	Model_List* mp;
	SubCharacter* next;
	SubCharacter* scp;
	// Line 353, Address: 0x1d0260, Func Offset: 0
	// Line 366, Address: 0x1d0278, Func Offset: 0x18
	// Line 367, Address: 0x1d02a0, Func Offset: 0x40
	// Line 368, Address: 0x1d02a8, Func Offset: 0x48
	// Line 370, Address: 0x1d02b0, Func Offset: 0x50
	// Line 373, Address: 0x1d02bc, Func Offset: 0x5c
	// Line 374, Address: 0x1d02c4, Func Offset: 0x64
	// Line 375, Address: 0x1d02c8, Func Offset: 0x68
	// Line 376, Address: 0x1d02e4, Func Offset: 0x84
	// Line 377, Address: 0x1d02f4, Func Offset: 0x94
	// Line 378, Address: 0x1d0304, Func Offset: 0xa4
	// Line 379, Address: 0x1d0324, Func Offset: 0xc4
	// Line 380, Address: 0x1d0334, Func Offset: 0xd4
	// Line 381, Address: 0x1d0338, Func Offset: 0xd8
	// Line 382, Address: 0x1d033c, Func Offset: 0xdc
	// Line 384, Address: 0x1d0348, Func Offset: 0xe8
	// Line 387, Address: 0x1d0358, Func Offset: 0xf8
	// Line 388, Address: 0x1d036c, Func Offset: 0x10c
	// Line 389, Address: 0x1d03c0, Func Offset: 0x160
	// Line 390, Address: 0x1d0410, Func Offset: 0x1b0
	// Line 391, Address: 0x1d042c, Func Offset: 0x1cc
	// Line 392, Address: 0x1d0444, Func Offset: 0x1e4
	// Line 393, Address: 0x1d044c, Func Offset: 0x1ec
	// Line 395, Address: 0x1d046c, Func Offset: 0x20c
	// Line 396, Address: 0x1d0470, Func Offset: 0x210
	// Line 397, Address: 0x1d047c, Func Offset: 0x21c
	// Line 400, Address: 0x1d04a8, Func Offset: 0x248
	// Line 401, Address: 0x1d04b0, Func Offset: 0x250
	// Line 402, Address: 0x1d04b8, Func Offset: 0x258
	// Line 403, Address: 0x1d04cc, Func Offset: 0x26c
	// Line 404, Address: 0x1d04d8, Func Offset: 0x278
	// Line 405, Address: 0x1d04e4, Func Offset: 0x284
	// Line 406, Address: 0x1d04ec, Func Offset: 0x28c
	// Line 407, Address: 0x1d054c, Func Offset: 0x2ec
	// Line 408, Address: 0x1d0568, Func Offset: 0x308
	// Line 409, Address: 0x1d0570, Func Offset: 0x310
	// Line 410, Address: 0x1d0580, Func Offset: 0x320
	// Line 411, Address: 0x1d0588, Func Offset: 0x328
	// Line 412, Address: 0x1d0598, Func Offset: 0x338
	// Line 413, Address: 0x1d05c4, Func Offset: 0x364
	// Line 414, Address: 0x1d05d0, Func Offset: 0x370
	// Line 415, Address: 0x1d05dc, Func Offset: 0x37c
	// Line 417, Address: 0x1d05e0, Func Offset: 0x380
	// Line 418, Address: 0x1d05f8, Func Offset: 0x398
	// Line 419, Address: 0x1d0600, Func Offset: 0x3a0
	// Line 421, Address: 0x1d0628, Func Offset: 0x3c8
	// Line 422, Address: 0x1d0634, Func Offset: 0x3d4
	// Line 425, Address: 0x1d0648, Func Offset: 0x3e8
	// Line 426, Address: 0x1d065c, Func Offset: 0x3fc
	// Line 427, Address: 0x1d06a0, Func Offset: 0x440
	// Line 430, Address: 0x1d06d4, Func Offset: 0x474
	// Line 431, Address: 0x1d06ec, Func Offset: 0x48c
	// Line 432, Address: 0x1d06f4, Func Offset: 0x494
	// Line 433, Address: 0x1d0708, Func Offset: 0x4a8
	// Line 434, Address: 0x1d0724, Func Offset: 0x4c4
	// Line 435, Address: 0x1d0738, Func Offset: 0x4d8
	// Line 436, Address: 0x1d0764, Func Offset: 0x504
	// Line 438, Address: 0x1d078c, Func Offset: 0x52c
	// Line 439, Address: 0x1d0790, Func Offset: 0x530
	// Line 440, Address: 0x1d079c, Func Offset: 0x53c
	// Line 441, Address: 0x1d07a8, Func Offset: 0x548
	// Line 442, Address: 0x1d07d0, Func Offset: 0x570
	// Func End, Address: 0x1d07f0, Func Offset: 0x590
}

// 
// Start address: 0x1d07f0
int RoomDistance(short room0, short room1)
{
	int len;
	// Line 510, Address: 0x1d07f0, Func Offset: 0
	// Line 513, Address: 0x1d0804, Func Offset: 0x14
	// Line 515, Address: 0x1d0824, Func Offset: 0x34
	// Line 516, Address: 0x1d083c, Func Offset: 0x4c
	// Line 517, Address: 0x1d0864, Func Offset: 0x74
	// Line 518, Address: 0x1d0884, Func Offset: 0x94
	// Line 520, Address: 0x1d088c, Func Offset: 0x9c
	// Line 523, Address: 0x1d0898, Func Offset: 0xa8
	// Line 524, Address: 0x1d08b0, Func Offset: 0xc0
	// Line 525, Address: 0x1d08b4, Func Offset: 0xc4
	// Func End, Address: 0x1d08c8, Func Offset: 0xd8
}

// 
// Start address: 0x1d08d0
int RoomDistanceSub(CharaAdmin_RoomDistance* dist, short room0, short room1, unsigned long flag)
{
	int i;
	int work;
	int len;
	// Line 532, Address: 0x1d08d0, Func Offset: 0
	// Line 538, Address: 0x1d08f4, Func Offset: 0x24
	// Line 539, Address: 0x1d0918, Func Offset: 0x48
	// Line 540, Address: 0x1d0924, Func Offset: 0x54
	// Line 541, Address: 0x1d092c, Func Offset: 0x5c
	// Line 544, Address: 0x1d0930, Func Offset: 0x60
	// Line 545, Address: 0x1d093c, Func Offset: 0x6c
	// Line 547, Address: 0x1d09c0, Func Offset: 0xf0
	// Line 548, Address: 0x1d09c4, Func Offset: 0xf4
	// Line 549, Address: 0x1d09d0, Func Offset: 0x100
	// Line 550, Address: 0x1d09f0, Func Offset: 0x120
	// Line 552, Address: 0x1d0a60, Func Offset: 0x190
	// Line 554, Address: 0x1d0ad0, Func Offset: 0x200
	// Line 555, Address: 0x1d0ad8, Func Offset: 0x208
	// Line 557, Address: 0x1d0ae8, Func Offset: 0x218
	// Line 558, Address: 0x1d0b08, Func Offset: 0x238
	// Line 559, Address: 0x1d0b28, Func Offset: 0x258
	// Line 560, Address: 0x1d0b4c, Func Offset: 0x27c
	// Line 561, Address: 0x1d0b50, Func Offset: 0x280
	// Func End, Address: 0x1d0b6c, Func Offset: 0x29c
}

// 
// Start address: 0x1d0b70
SubCharacter* CharaWorkCreate(short kind, short id, float* pos, float* rot, unsigned int status)
{
	int sk_last;
	SubCharacter* scp;
	// Line 575, Address: 0x1d0b70, Func Offset: 0
	// Line 579, Address: 0x1d0b94, Func Offset: 0x24
	// Line 580, Address: 0x1d0bac, Func Offset: 0x3c
	// Line 581, Address: 0x1d0bd0, Func Offset: 0x60
	// Line 582, Address: 0x1d0bd8, Func Offset: 0x68
	// Line 584, Address: 0x1d0bfc, Func Offset: 0x8c
	// Line 585, Address: 0x1d0c18, Func Offset: 0xa8
	// Line 586, Address: 0x1d0c30, Func Offset: 0xc0
	// Line 588, Address: 0x1d0c3c, Func Offset: 0xcc
	// Line 589, Address: 0x1d0c40, Func Offset: 0xd0
	// Func End, Address: 0x1d0c58, Func Offset: 0xe8
}

// 
// Start address: 0x1d0c60
void DeleteEnemyWork()
{
	// Line 596, Address: 0x1d0c60, Func Offset: 0
	// Line 597, Address: 0x1d0c68, Func Offset: 0x8
	// Line 598, Address: 0x1d0ca4, Func Offset: 0x44
	// Line 602, Address: 0x1d0cb4, Func Offset: 0x54
	// Line 604, Address: 0x1d0cbc, Func Offset: 0x5c
	// Func End, Address: 0x1d0ccc, Func Offset: 0x6c
}

// 
// Start address: 0x1d0cd0
void DeleteEnemyWorkIn()
{
	int work;
	int del_point;
	int e_room;
	int j_room;
	SubCharacter* del;
	SubCharacter* scp;
	// Line 611, Address: 0x1d0cd0, Func Offset: 0
	// Line 619, Address: 0x1d0cf0, Func Offset: 0x20
	// Line 621, Address: 0x1d0d18, Func Offset: 0x48
	// Line 622, Address: 0x1d0d1c, Func Offset: 0x4c
	// Line 623, Address: 0x1d0d20, Func Offset: 0x50
	// Line 624, Address: 0x1d0d2c, Func Offset: 0x5c
	// Line 627, Address: 0x1d0d34, Func Offset: 0x64
	// Line 631, Address: 0x1d0d64, Func Offset: 0x94
	// Line 632, Address: 0x1d0d7c, Func Offset: 0xac
	// Line 633, Address: 0x1d0d84, Func Offset: 0xb4
	// Line 634, Address: 0x1d0da0, Func Offset: 0xd0
	// Line 635, Address: 0x1d0dc0, Func Offset: 0xf0
	// Line 636, Address: 0x1d0dcc, Func Offset: 0xfc
	// Line 637, Address: 0x1d0dd0, Func Offset: 0x100
	// Line 638, Address: 0x1d0dd4, Func Offset: 0x104
	// Line 639, Address: 0x1d0dd8, Func Offset: 0x108
	// Line 641, Address: 0x1d0de8, Func Offset: 0x118
	// Line 643, Address: 0x1d0e18, Func Offset: 0x148
	// Line 644, Address: 0x1d0e78, Func Offset: 0x1a8
	// Line 645, Address: 0x1d0e8c, Func Offset: 0x1bc
	// Func End, Address: 0x1d0eb4, Func Offset: 0x1e4
}

// 
// Start address: 0x1d0ec0
void DeleteEnemyWorkOut()
{
	float far;
	float len;
	float vec[4];
	SubCharacter* del;
	SubCharacter* scp;
	// Line 652, Address: 0x1d0ec0, Func Offset: 0
	// Line 659, Address: 0x1d0ed0, Func Offset: 0x10
	// Line 660, Address: 0x1d0ed8, Func Offset: 0x18
	// Line 661, Address: 0x1d0edc, Func Offset: 0x1c
	// Line 662, Address: 0x1d0ee4, Func Offset: 0x24
	// Line 663, Address: 0x1d0eec, Func Offset: 0x2c
	// Line 666, Address: 0x1d0ef4, Func Offset: 0x34
	// Line 668, Address: 0x1d0f24, Func Offset: 0x64
	// Line 669, Address: 0x1d0f3c, Func Offset: 0x7c
	// Line 670, Address: 0x1d0f54, Func Offset: 0x94
	// Line 671, Address: 0x1d0f6c, Func Offset: 0xac
	// Line 673, Address: 0x1d0f98, Func Offset: 0xd8
	// Line 674, Address: 0x1d0fa8, Func Offset: 0xe8
	// Line 675, Address: 0x1d0fac, Func Offset: 0xec
	// Line 676, Address: 0x1d0fb0, Func Offset: 0xf0
	// Line 678, Address: 0x1d0fc0, Func Offset: 0x100
	// Line 680, Address: 0x1d0ff0, Func Offset: 0x130
	// Line 681, Address: 0x1d1050, Func Offset: 0x190
	// Line 682, Address: 0x1d1064, Func Offset: 0x1a4
	// Func End, Address: 0x1d107c, Func Offset: 0x1bc
}

