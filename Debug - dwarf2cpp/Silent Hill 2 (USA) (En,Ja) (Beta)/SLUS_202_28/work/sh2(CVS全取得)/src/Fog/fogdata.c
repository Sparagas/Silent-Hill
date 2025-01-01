typedef struct SubCharacter;
typedef struct FOG_ENV_DATA;
typedef struct FOG_COLIS_HEAD;
typedef struct Item_List;
typedef struct FOG_AREA_DATA;
typedef struct fsMgcFile;
typedef struct Model_List;
typedef struct FOG_OBJ_DATA;
typedef struct _AnimeInfo;
typedef struct Enemy_List;
typedef struct PAD_2D;
typedef union fsFile;
typedef struct FOG_COLIS_WALL;
typedef struct PAD_INFO;
typedef struct fsMgfFile;
typedef struct shBattleFight;
typedef struct _anon0;
typedef struct FOG_COLIS_WALL2;
typedef struct fsHdFile;
typedef struct _anon1;
typedef struct shBattleShot;
typedef struct Stage_Data;
typedef struct shBattleArea;
typedef struct fsMgpFile;
typedef struct shBattleInfo;
typedef struct _anon2;
typedef struct FOG_PART_DATA;
typedef struct FOG_WALL_DATA;
typedef struct _anon3;
typedef struct Event_List;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct shPlayerWork;
typedef union fsFileIndex;
typedef struct _CL_VHIT_WALL;
typedef struct _anon4;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef struct FOG_WORK;
typedef union _anon5;
typedef struct _CL_VHIT_RESULT;
typedef union _anon6;
typedef struct shSkelton;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct _SH2_SYS;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct fsCdFile;
typedef struct PAD_3D;

typedef int(*type_1)();
typedef void(*type_4)();
typedef void(*type_34)(SubCharacter*);
typedef void(*type_36)(SubCharacter*);

typedef fsFileIndex type_0[1];
typedef fsFileIndex type_2[1];
typedef unsigned char type_3[4];
typedef fsFileIndex type_5[1];
typedef PAD_INFO type_6[10];
typedef fsFileIndex type_7[1];
typedef float type_8[2];
typedef float type_9[4];
typedef unsigned char type_10[4];
typedef float type_11[4];
typedef float type_12[4][4];
typedef unsigned short type_13[6144];
typedef unsigned char type_14[4];
typedef fsFileIndex type_15[1];
typedef float type_16[4];
typedef float type_17[4][4];
typedef fsFileIndex type_18[1];
typedef unsigned char type_19[2];
typedef unsigned char type_20[2];
typedef FOG_PART_DATA type_21[700];
typedef float type_22[8];
typedef fsFileIndex type_23[1];
typedef float type_24[8][8];
typedef float type_25[8][8][8];
typedef FOG_WALL_DATA type_26[188];
typedef FOG_OBJ_DATA type_27[168];
typedef float type_28[4];
typedef shAttackInfo type_29[66];
typedef unsigned int type_30[8];
typedef fsFileIndex type_31[1];
typedef fsFileIndex type_32[1];
typedef unsigned char type_33[2];
typedef float type_35[4][2];

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

struct FOG_ENV_DATA
{
	short PartNum;
	short MaxPos;
	short PartSize;
	short EscapeRange;
	short FloorY;
	short LimitY;
	short LimitHeight;
	short WaterY;
	unsigned char WindDef;
	unsigned char Flag;
	unsigned char Double;
	unsigned char Alpha;
	float GridRate;
};

struct FOG_COLIS_HEAD
{
	unsigned short wall1;
	unsigned short wall2;
	unsigned short obj1;
	unsigned short obj2;
	unsigned short area;
	unsigned short env;
};

struct Item_List
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
};

struct FOG_AREA_DATA
{
	short x0;
	short z0;
	short x1;
	short z1;
	unsigned short env;
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

struct Model_List
{
	short kind;
	short id;
	short flag_off;
	short flag_on;
	float pos[4];
	float rot[4];
};

struct FOG_OBJ_DATA
{
	float pos[4];
	float mv[4];
	int type;
	float rer;
	unsigned long id;
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

struct Enemy_List
{
	short kind;
	short id;
	int pos_x;
	int pos_z;
	short pos_y;
	short rot_y;
	short status;
	unsigned short condition;
};

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
};

union fsFile
{
	_anon2 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
};

struct FOG_COLIS_WALL
{
	short x0;
	short y0;
	short z0;
	short x1;
	short y1;
	short z1;
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct _anon0
{
	void(*SpecDraw)();
	void(*PreDraw)();
	void(*PostDraw)();
	void(*CharaDraw_Hook)();
};

struct FOG_COLIS_WALL2
{
	short x0;
	short y0;
	short z0;
	short x1;
	short y1;
	short z1;
	short x2;
	short y2;
	short z2;
	short x3;
	short y3;
	short z3;
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

struct _anon1
{
	float x;
	float y;
	float z;
	float w;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct Stage_Data
{
	Event_List* ev_list;
	unsigned char* ev_pos;
	int(*ev_prog)();
	Item_List* gi_list;
	Model_List* mdl_list;
	Enemy_List* en_list;
	void(*stage_init)();
	void(*room_init)();
	void(*alltime_func)();
	int glb_crd;
	int pc_model;
	_AnimeInfo* stg_anim_info;
	int(*bgm_control)();
	_anon0* gfw_func;
	int(*chara_data_clear)();
	void(*sound_call_after_load)();
	int reserve_11;
};

struct shBattleArea
{
	float center;
	float radius;
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

struct _anon2
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

struct FOG_PART_DATA
{
	float pos[4];
	float mv[4];
	float dd[4];
	float degree[4];
	float tdx;
	float tdy;
	float alp;
	int dpos;
	float alp_now;
	float alp_add;
	int bounce;
	int erase;
};

struct FOG_WALL_DATA
{
	float normal[4];
	float v0[4];
	float min[4];
	float max[4];
};

struct _anon3
{
	float d[4][4];
};

struct Event_List
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

union fsFileIndex
{
	_anon4 index;
	unsigned long pack;
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

struct _anon4
{
	fsFile* fp;
	char* name;
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
	_anon5 hit_check;
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

struct FOG_WORK
{
	FOG_PART_DATA Part[700];
	float GridDense[8][8][8];
	FOG_WALL_DATA Wall[188];
	FOG_OBJ_DATA Obj[168];
	float WorldScreenM[4][4];
	float WorldViewM[4][4];
	float CameraPosV[4];
	float OldCameraV[4];
	float WorldPosV[4];
	float LocalPosV[4];
	float MapPosV[4];
	float LightPosV[4];
	float WindV[4];
	float fewdense[4];
	float StayPoint[4];
	float LimitY;
	float LimitY2;
	float WaterY;
	float SpeedLevel;
	float sc_degree[4];
	float sc_tdx;
	float sc_tdy;
	float MaxPos;
	float FadePos;
	float PartSize;
	float Projection;
	float EscapeRange;
	float GridRate;
	float FloorY;
	short PartNum;
	short WallNum;
	short ObjMax;
	short ObjNum;
	short ObjNum2;
	short Alpha;
	short WindDef;
	char Double;
	char LoadStep;
	char Global;
	unsigned short AreaMax;
	unsigned short Flag;
	unsigned int Color;
	int SumW;
	int fid;
	int WindTimer;
	FOG_COLIS_HEAD* ColisHead;
	FOG_AREA_DATA* AreaTop;
	FOG_ENV_DATA* EnvTop;
	FOG_ENV_DATA* EnvNow;
};

union _anon5
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon6 hobj;
};

union _anon6
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
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

struct _SH2_SYS
{
	unsigned int step[8];
	unsigned int pre_playable;
	int main_status;
	unsigned int soft_reset;
	unsigned int frame_cnt;
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

struct PAD_3D
{
	char round_way;
	unsigned char reserved1;
	unsigned char lslide;
	unsigned char rslide;
	unsigned char lturn180;
	unsigned char rturn180;
};

shAttackInfo sh2_attack_list[66];
FOG_ENV_DATA fog_defset_data;
FOG_ENV_DATA fog_demoenv_grave;
FOG_WORK fwork;
shPlayerWork sh2jms;
unsigned short fog_colis_data[6144];
fsFileIndex data_bg_rr_rrGB_fcl[1];
fsFileIndex data_bg_ps_psGB_fcl[1];
fsFileIndex data_bg_cc_ccnw_fcl[1];
fsFileIndex data_bg_cc_park_fcl[1];
fsFileIndex data_bg_ob_obGB_fcl[1];
fsFileIndex data_bg_cd_cdGB_fcl[1];
fsFileIndex data_bg_cc_ccGB_fcl[1];
fsFileIndex data_bg_cb_cbGB_fcl[1];
fsFileIndex data_bg_ca_caGB_fcl[1];
Stage_Data* stage;
_SH2_SYS Sh2sys;

void fogSetCollision();
void fogSetCollisionMain();
void fogSetCollisionMain2();
void fogSetAreaEnvironment();

// 
// Start address: 0x16c8a0
void fogSetCollision()
{
	int glb;
	// Line 88, Address: 0x16c8a0, Func Offset: 0
	// Line 90, Address: 0x16c8ac, Func Offset: 0xc
	// Line 91, Address: 0x16c8bc, Func Offset: 0x1c
	// Line 93, Address: 0x16c8c0, Func Offset: 0x20
	// Line 94, Address: 0x16c8d0, Func Offset: 0x30
	// Line 98, Address: 0x16c960, Func Offset: 0xc0
	// Line 99, Address: 0x16c964, Func Offset: 0xc4
	// Line 105, Address: 0x16ca7c, Func Offset: 0x1dc
	// Line 106, Address: 0x16ca80, Func Offset: 0x1e0
	// Line 107, Address: 0x16ca94, Func Offset: 0x1f4
	// Line 109, Address: 0x16cac8, Func Offset: 0x228
	// Line 110, Address: 0x16cacc, Func Offset: 0x22c
	// Line 111, Address: 0x16cae8, Func Offset: 0x248
	// Line 113, Address: 0x16caf0, Func Offset: 0x250
	// Line 114, Address: 0x16caf4, Func Offset: 0x254
	// Line 115, Address: 0x16cb10, Func Offset: 0x270
	// Line 117, Address: 0x16cb18, Func Offset: 0x278
	// Line 118, Address: 0x16cb1c, Func Offset: 0x27c
	// Line 121, Address: 0x16cb38, Func Offset: 0x298
	// Line 122, Address: 0x16cb4c, Func Offset: 0x2ac
	// Line 124, Address: 0x16cb80, Func Offset: 0x2e0
	// Line 125, Address: 0x16cb84, Func Offset: 0x2e4
	// Line 126, Address: 0x16cba0, Func Offset: 0x300
	// Line 128, Address: 0x16cba8, Func Offset: 0x308
	// Line 129, Address: 0x16cbac, Func Offset: 0x30c
	// Line 130, Address: 0x16cbc8, Func Offset: 0x328
	// Line 132, Address: 0x16cbd0, Func Offset: 0x330
	// Line 133, Address: 0x16cbd4, Func Offset: 0x334
	// Line 136, Address: 0x16cbf0, Func Offset: 0x350
	// Line 137, Address: 0x16cc04, Func Offset: 0x364
	// Line 139, Address: 0x16cc20, Func Offset: 0x380
	// Line 140, Address: 0x16cc24, Func Offset: 0x384
	// Line 143, Address: 0x16cc40, Func Offset: 0x3a0
	// Line 144, Address: 0x16cc54, Func Offset: 0x3b4
	// Line 146, Address: 0x16cc7c, Func Offset: 0x3dc
	// Line 147, Address: 0x16cc80, Func Offset: 0x3e0
	// Line 148, Address: 0x16cc9c, Func Offset: 0x3fc
	// Line 150, Address: 0x16cca4, Func Offset: 0x404
	// Line 151, Address: 0x16cccc, Func Offset: 0x42c
	// Line 152, Address: 0x16ccd0, Func Offset: 0x430
	// Line 156, Address: 0x16ccec, Func Offset: 0x44c
	// Line 157, Address: 0x16cd00, Func Offset: 0x460
	// Line 159, Address: 0x16cd1c, Func Offset: 0x47c
	// Line 160, Address: 0x16cd20, Func Offset: 0x480
	// Line 164, Address: 0x16cd3c, Func Offset: 0x49c
	// Line 165, Address: 0x16cd50, Func Offset: 0x4b0
	// Line 166, Address: 0x16cd68, Func Offset: 0x4c8
	// Line 167, Address: 0x16cd78, Func Offset: 0x4d8
	// Line 168, Address: 0x16cd80, Func Offset: 0x4e0
	// Line 169, Address: 0x16cd8c, Func Offset: 0x4ec
	// Line 170, Address: 0x16cd94, Func Offset: 0x4f4
	// Line 171, Address: 0x16cd9c, Func Offset: 0x4fc
	// Line 174, Address: 0x16cda4, Func Offset: 0x504
	// Line 176, Address: 0x16cdac, Func Offset: 0x50c
	// Line 178, Address: 0x16cdc4, Func Offset: 0x524
	// Line 179, Address: 0x16cdcc, Func Offset: 0x52c
	// Line 180, Address: 0x16cdd4, Func Offset: 0x534
	// Line 181, Address: 0x16cddc, Func Offset: 0x53c
	// Line 182, Address: 0x16cde4, Func Offset: 0x544
	// Line 183, Address: 0x16cdec, Func Offset: 0x54c
	// Line 184, Address: 0x16cdfc, Func Offset: 0x55c
	// Line 185, Address: 0x16ce10, Func Offset: 0x570
	// Line 187, Address: 0x16ced8, Func Offset: 0x638
	// Line 188, Address: 0x16cee0, Func Offset: 0x640
	// Line 189, Address: 0x16cf00, Func Offset: 0x660
	// Line 191, Address: 0x16cf08, Func Offset: 0x668
	// Line 192, Address: 0x16cf10, Func Offset: 0x670
	// Line 193, Address: 0x16cf30, Func Offset: 0x690
	// Line 195, Address: 0x16cf38, Func Offset: 0x698
	// Line 196, Address: 0x16cf40, Func Offset: 0x6a0
	// Line 197, Address: 0x16cf60, Func Offset: 0x6c0
	// Line 199, Address: 0x16cf68, Func Offset: 0x6c8
	// Line 200, Address: 0x16cf70, Func Offset: 0x6d0
	// Line 201, Address: 0x16cf90, Func Offset: 0x6f0
	// Line 203, Address: 0x16cf98, Func Offset: 0x6f8
	// Line 204, Address: 0x16cfa0, Func Offset: 0x700
	// Line 205, Address: 0x16cfc0, Func Offset: 0x720
	// Line 207, Address: 0x16cfc8, Func Offset: 0x728
	// Line 208, Address: 0x16cfd0, Func Offset: 0x730
	// Line 209, Address: 0x16cff0, Func Offset: 0x750
	// Line 211, Address: 0x16cff8, Func Offset: 0x758
	// Line 212, Address: 0x16d000, Func Offset: 0x760
	// Line 213, Address: 0x16d020, Func Offset: 0x780
	// Line 217, Address: 0x16d028, Func Offset: 0x788
	// Line 218, Address: 0x16d030, Func Offset: 0x790
	// Line 219, Address: 0x16d044, Func Offset: 0x7a4
	// Line 220, Address: 0x16d064, Func Offset: 0x7c4
	// Line 227, Address: 0x16d06c, Func Offset: 0x7cc
	// Line 228, Address: 0x16d074, Func Offset: 0x7d4
	// Line 229, Address: 0x16d094, Func Offset: 0x7f4
	// Line 231, Address: 0x16d09c, Func Offset: 0x7fc
	// Line 232, Address: 0x16d0a8, Func Offset: 0x808
	// Line 233, Address: 0x16d0bc, Func Offset: 0x81c
	// Line 234, Address: 0x16d0cc, Func Offset: 0x82c
	// Line 235, Address: 0x16d0d8, Func Offset: 0x838
	// Line 236, Address: 0x16d0e4, Func Offset: 0x844
	// Line 238, Address: 0x16d0ec, Func Offset: 0x84c
	// Line 239, Address: 0x16d0f8, Func Offset: 0x858
	// Line 241, Address: 0x16d100, Func Offset: 0x860
	// Line 243, Address: 0x16d17c, Func Offset: 0x8dc
	// Line 244, Address: 0x16d190, Func Offset: 0x8f0
	// Line 245, Address: 0x16d198, Func Offset: 0x8f8
	// Line 246, Address: 0x16d1a4, Func Offset: 0x904
	// Line 247, Address: 0x16d1b4, Func Offset: 0x914
	// Line 249, Address: 0x16d1bc, Func Offset: 0x91c
	// Line 250, Address: 0x16d1d0, Func Offset: 0x930
	// Line 251, Address: 0x16d1e0, Func Offset: 0x940
	// Line 252, Address: 0x16d1f8, Func Offset: 0x958
	// Line 254, Address: 0x16d200, Func Offset: 0x960
	// Line 255, Address: 0x16d218, Func Offset: 0x978
	// Line 256, Address: 0x16d228, Func Offset: 0x988
	// Line 257, Address: 0x16d240, Func Offset: 0x9a0
	// Line 259, Address: 0x16d248, Func Offset: 0x9a8
	// Line 260, Address: 0x16d260, Func Offset: 0x9c0
	// Line 261, Address: 0x16d270, Func Offset: 0x9d0
	// Line 262, Address: 0x16d288, Func Offset: 0x9e8
	// Line 264, Address: 0x16d290, Func Offset: 0x9f0
	// Line 265, Address: 0x16d2a8, Func Offset: 0xa08
	// Line 266, Address: 0x16d2b8, Func Offset: 0xa18
	// Line 267, Address: 0x16d2d0, Func Offset: 0xa30
	// Line 269, Address: 0x16d2d8, Func Offset: 0xa38
	// Line 270, Address: 0x16d2f0, Func Offset: 0xa50
	// Line 271, Address: 0x16d300, Func Offset: 0xa60
	// Line 272, Address: 0x16d314, Func Offset: 0xa74
	// Line 274, Address: 0x16d31c, Func Offset: 0xa7c
	// Line 275, Address: 0x16d334, Func Offset: 0xa94
	// Line 276, Address: 0x16d344, Func Offset: 0xaa4
	// Line 277, Address: 0x16d358, Func Offset: 0xab8
	// Line 279, Address: 0x16d360, Func Offset: 0xac0
	// Line 280, Address: 0x16d3b0, Func Offset: 0xb10
	// Line 282, Address: 0x16d3b8, Func Offset: 0xb18
	// Line 284, Address: 0x16d3c0, Func Offset: 0xb20
	// Line 285, Address: 0x16d3cc, Func Offset: 0xb2c
	// Line 289, Address: 0x16d3d4, Func Offset: 0xb34
	// Line 290, Address: 0x16d424, Func Offset: 0xb84
	// Line 292, Address: 0x16d42c, Func Offset: 0xb8c
	// Func End, Address: 0x16d440, Func Offset: 0xba0
}

// 
// Start address: 0x16d440
void fogSetCollisionMain()
{
	FOG_COLIS_HEAD* ch;
	FOG_WALL_DATA* pw;
	float* pos;
	float wall[4];
	float* pobj;
	FOG_COLIS_WALL2* w2;
	FOG_COLIS_WALL* w1;
	float limf;
	float wzf;
	float wxf;
	int lim;
	int max;
	int wz;
	int wx;
	float* wp;
	FOG_OBJ_DATA* od2;
	FOG_OBJ_DATA* od;
	int i;
	// Line 296, Address: 0x16d440, Func Offset: 0
	// Line 299, Address: 0x16d478, Func Offset: 0x38
	// Line 305, Address: 0x16d484, Func Offset: 0x44
	// Line 306, Address: 0x16d488, Func Offset: 0x48
	// Line 308, Address: 0x16d48c, Func Offset: 0x4c
	// Line 309, Address: 0x16d498, Func Offset: 0x58
	// Line 310, Address: 0x16d4a4, Func Offset: 0x64
	// Line 311, Address: 0x16d4b8, Func Offset: 0x78
	// Line 312, Address: 0x16d4bc, Func Offset: 0x7c
	// Line 313, Address: 0x16d4c0, Func Offset: 0x80
	// Line 314, Address: 0x16d4d8, Func Offset: 0x98
	// Line 315, Address: 0x16d4e4, Func Offset: 0xa4
	// Line 317, Address: 0x16d4f8, Func Offset: 0xb8
	// Line 318, Address: 0x16d500, Func Offset: 0xc0
	// Line 319, Address: 0x16d508, Func Offset: 0xc8
	// Line 320, Address: 0x16d50c, Func Offset: 0xcc
	// Line 321, Address: 0x16d514, Func Offset: 0xd4
	// Line 322, Address: 0x16d538, Func Offset: 0xf8
	// Line 323, Address: 0x16d540, Func Offset: 0x100
	// Line 324, Address: 0x16d550, Func Offset: 0x110
	// Line 325, Address: 0x16d554, Func Offset: 0x114
	// Line 326, Address: 0x16d558, Func Offset: 0x118
	// Line 328, Address: 0x16d560, Func Offset: 0x120
	// Line 329, Address: 0x16d564, Func Offset: 0x124
	// Line 330, Address: 0x16d568, Func Offset: 0x128
	// Line 331, Address: 0x16d56c, Func Offset: 0x12c
	// Line 332, Address: 0x16d570, Func Offset: 0x130
	// Line 333, Address: 0x16d574, Func Offset: 0x134
	// Line 336, Address: 0x16d578, Func Offset: 0x138
	// Line 337, Address: 0x16d580, Func Offset: 0x140
	// Line 338, Address: 0x16d584, Func Offset: 0x144
	// Line 340, Address: 0x16d588, Func Offset: 0x148
	// Line 341, Address: 0x16d594, Func Offset: 0x154
	// Line 343, Address: 0x16d59c, Func Offset: 0x15c
	// Line 344, Address: 0x16d5a4, Func Offset: 0x164
	// Line 345, Address: 0x16d5a8, Func Offset: 0x168
	// Line 346, Address: 0x16d5ac, Func Offset: 0x16c
	// Line 347, Address: 0x16d5c4, Func Offset: 0x184
	// Line 348, Address: 0x16d5d0, Func Offset: 0x190
	// Line 349, Address: 0x16d610, Func Offset: 0x1d0
	// Line 353, Address: 0x16d650, Func Offset: 0x210
	// Line 354, Address: 0x16d668, Func Offset: 0x228
	// Line 355, Address: 0x16d680, Func Offset: 0x240
	// Line 356, Address: 0x16d698, Func Offset: 0x258
	// Line 357, Address: 0x16d6b0, Func Offset: 0x270
	// Line 358, Address: 0x16d6c8, Func Offset: 0x288
	// Line 359, Address: 0x16d6e0, Func Offset: 0x2a0
	// Line 360, Address: 0x16d700, Func Offset: 0x2c0
	// Line 361, Address: 0x16d718, Func Offset: 0x2d8
	// Line 362, Address: 0x16d730, Func Offset: 0x2f0
	// Line 363, Address: 0x16d748, Func Offset: 0x308
	// Line 364, Address: 0x16d76c, Func Offset: 0x32c
	// Line 365, Address: 0x16d778, Func Offset: 0x338
	// Line 366, Address: 0x16d77c, Func Offset: 0x33c
	// Line 367, Address: 0x16d780, Func Offset: 0x340
	// Line 369, Address: 0x16d794, Func Offset: 0x354
	// Line 371, Address: 0x16d79c, Func Offset: 0x35c
	// Line 372, Address: 0x16d7a8, Func Offset: 0x368
	// Line 373, Address: 0x16d7e8, Func Offset: 0x3a8
	// Line 374, Address: 0x16d828, Func Offset: 0x3e8
	// Line 375, Address: 0x16d868, Func Offset: 0x428
	// Line 381, Address: 0x16d8a8, Func Offset: 0x468
	// Line 382, Address: 0x16d8bc, Func Offset: 0x47c
	// Line 383, Address: 0x16d8d0, Func Offset: 0x490
	// Line 384, Address: 0x16d8e4, Func Offset: 0x4a4
	// Line 385, Address: 0x16d8f8, Func Offset: 0x4b8
	// Line 386, Address: 0x16d90c, Func Offset: 0x4cc
	// Line 387, Address: 0x16d920, Func Offset: 0x4e0
	// Line 388, Address: 0x16d934, Func Offset: 0x4f4
	// Line 389, Address: 0x16d948, Func Offset: 0x508
	// Line 390, Address: 0x16d95c, Func Offset: 0x51c
	// Line 391, Address: 0x16d970, Func Offset: 0x530
	// Line 392, Address: 0x16d984, Func Offset: 0x544
	// Line 393, Address: 0x16d998, Func Offset: 0x558
	// Line 394, Address: 0x16d9b8, Func Offset: 0x578
	// Line 395, Address: 0x16d9d0, Func Offset: 0x590
	// Line 396, Address: 0x16d9e8, Func Offset: 0x5a8
	// Line 397, Address: 0x16da00, Func Offset: 0x5c0
	// Line 398, Address: 0x16da24, Func Offset: 0x5e4
	// Line 399, Address: 0x16da30, Func Offset: 0x5f0
	// Line 400, Address: 0x16da38, Func Offset: 0x5f8
	// Line 401, Address: 0x16da3c, Func Offset: 0x5fc
	// Line 403, Address: 0x16da54, Func Offset: 0x614
	// Line 404, Address: 0x16da5c, Func Offset: 0x61c
	// Line 405, Address: 0x16da60, Func Offset: 0x620
	// Line 407, Address: 0x16da68, Func Offset: 0x628
	// Line 408, Address: 0x16da74, Func Offset: 0x634
	// Line 409, Address: 0x16da94, Func Offset: 0x654
	// Line 410, Address: 0x16daa0, Func Offset: 0x660
	// Line 413, Address: 0x16dad8, Func Offset: 0x698
	// Line 414, Address: 0x16dadc, Func Offset: 0x69c
	// Line 415, Address: 0x16dae4, Func Offset: 0x6a4
	// Line 416, Address: 0x16daec, Func Offset: 0x6ac
	// Line 417, Address: 0x16db08, Func Offset: 0x6c8
	// Line 419, Address: 0x16db1c, Func Offset: 0x6dc
	// Line 420, Address: 0x16db24, Func Offset: 0x6e4
	// Line 421, Address: 0x16db30, Func Offset: 0x6f0
	// Line 424, Address: 0x16db68, Func Offset: 0x728
	// Line 425, Address: 0x16db6c, Func Offset: 0x72c
	// Line 426, Address: 0x16db74, Func Offset: 0x734
	// Line 427, Address: 0x16db7c, Func Offset: 0x73c
	// Line 428, Address: 0x16db98, Func Offset: 0x758
	// Line 429, Address: 0x16dbac, Func Offset: 0x76c
	// Line 431, Address: 0x16dbbc, Func Offset: 0x77c
	// Line 432, Address: 0x16dbc4, Func Offset: 0x784
	// Line 433, Address: 0x16dbd4, Func Offset: 0x794
	// Line 436, Address: 0x16dc08, Func Offset: 0x7c8
	// Func End, Address: 0x16dc48, Func Offset: 0x808
}

// 
// Start address: 0x16dc50
void fogSetCollisionMain2()
{
	FOG_COLIS_HEAD* ch;
	FOG_WALL_DATA* pw;
	float* pos;
	float wall[4];
	float* pobj;
	FOG_COLIS_WALL2* w2;
	FOG_COLIS_WALL* w1;
	float limf;
	float wzf;
	float wxf;
	int lim;
	int max;
	int wz;
	int wx;
	float* wp;
	FOG_OBJ_DATA* od2;
	FOG_OBJ_DATA* od;
	int i;
	// Line 440, Address: 0x16dc50, Func Offset: 0
	// Line 443, Address: 0x16dc88, Func Offset: 0x38
	// Line 449, Address: 0x16dc94, Func Offset: 0x44
	// Line 450, Address: 0x16dc98, Func Offset: 0x48
	// Line 452, Address: 0x16dc9c, Func Offset: 0x4c
	// Line 453, Address: 0x16dca8, Func Offset: 0x58
	// Line 454, Address: 0x16dcb4, Func Offset: 0x64
	// Line 455, Address: 0x16dcc8, Func Offset: 0x78
	// Line 456, Address: 0x16dcdc, Func Offset: 0x8c
	// Line 457, Address: 0x16dce0, Func Offset: 0x90
	// Line 458, Address: 0x16dce4, Func Offset: 0x94
	// Line 459, Address: 0x16dcf8, Func Offset: 0xa8
	// Line 460, Address: 0x16dcfc, Func Offset: 0xac
	// Line 461, Address: 0x16dd14, Func Offset: 0xc4
	// Line 463, Address: 0x16dd24, Func Offset: 0xd4
	// Line 464, Address: 0x16dd2c, Func Offset: 0xdc
	// Line 465, Address: 0x16dd34, Func Offset: 0xe4
	// Line 466, Address: 0x16dd38, Func Offset: 0xe8
	// Line 467, Address: 0x16dd40, Func Offset: 0xf0
	// Line 468, Address: 0x16dd64, Func Offset: 0x114
	// Line 469, Address: 0x16dd6c, Func Offset: 0x11c
	// Line 470, Address: 0x16dd7c, Func Offset: 0x12c
	// Line 471, Address: 0x16dd80, Func Offset: 0x130
	// Line 472, Address: 0x16dd84, Func Offset: 0x134
	// Line 474, Address: 0x16dd8c, Func Offset: 0x13c
	// Line 475, Address: 0x16dd90, Func Offset: 0x140
	// Line 476, Address: 0x16dd94, Func Offset: 0x144
	// Line 477, Address: 0x16dd98, Func Offset: 0x148
	// Line 478, Address: 0x16dd9c, Func Offset: 0x14c
	// Line 479, Address: 0x16dda0, Func Offset: 0x150
	// Line 482, Address: 0x16dda4, Func Offset: 0x154
	// Line 483, Address: 0x16ddac, Func Offset: 0x15c
	// Line 484, Address: 0x16ddb0, Func Offset: 0x160
	// Line 485, Address: 0x16ddb4, Func Offset: 0x164
	// Line 486, Address: 0x16ddb8, Func Offset: 0x168
	// Line 487, Address: 0x16ddc4, Func Offset: 0x174
	// Line 489, Address: 0x16ddcc, Func Offset: 0x17c
	// Line 490, Address: 0x16ddd4, Func Offset: 0x184
	// Line 491, Address: 0x16ddd8, Func Offset: 0x188
	// Line 492, Address: 0x16dddc, Func Offset: 0x18c
	// Line 493, Address: 0x16dde8, Func Offset: 0x198
	// Line 494, Address: 0x16de28, Func Offset: 0x1d8
	// Line 498, Address: 0x16de68, Func Offset: 0x218
	// Line 499, Address: 0x16de84, Func Offset: 0x234
	// Line 500, Address: 0x16dea0, Func Offset: 0x250
	// Line 501, Address: 0x16debc, Func Offset: 0x26c
	// Line 502, Address: 0x16ded8, Func Offset: 0x288
	// Line 503, Address: 0x16def0, Func Offset: 0x2a0
	// Line 504, Address: 0x16df08, Func Offset: 0x2b8
	// Line 505, Address: 0x16df28, Func Offset: 0x2d8
	// Line 506, Address: 0x16df40, Func Offset: 0x2f0
	// Line 507, Address: 0x16df58, Func Offset: 0x308
	// Line 508, Address: 0x16df70, Func Offset: 0x320
	// Line 509, Address: 0x16df94, Func Offset: 0x344
	// Line 510, Address: 0x16dfa0, Func Offset: 0x350
	// Line 511, Address: 0x16dfa4, Func Offset: 0x354
	// Line 512, Address: 0x16dfa8, Func Offset: 0x358
	// Line 514, Address: 0x16dfbc, Func Offset: 0x36c
	// Line 516, Address: 0x16dfc4, Func Offset: 0x374
	// Line 517, Address: 0x16dfd0, Func Offset: 0x380
	// Line 518, Address: 0x16e010, Func Offset: 0x3c0
	// Line 519, Address: 0x16e050, Func Offset: 0x400
	// Line 520, Address: 0x16e090, Func Offset: 0x440
	// Line 526, Address: 0x16e0d0, Func Offset: 0x480
	// Line 527, Address: 0x16e0e8, Func Offset: 0x498
	// Line 528, Address: 0x16e0fc, Func Offset: 0x4ac
	// Line 529, Address: 0x16e114, Func Offset: 0x4c4
	// Line 530, Address: 0x16e12c, Func Offset: 0x4dc
	// Line 531, Address: 0x16e140, Func Offset: 0x4f0
	// Line 532, Address: 0x16e158, Func Offset: 0x508
	// Line 533, Address: 0x16e170, Func Offset: 0x520
	// Line 534, Address: 0x16e184, Func Offset: 0x534
	// Line 535, Address: 0x16e19c, Func Offset: 0x54c
	// Line 536, Address: 0x16e1b4, Func Offset: 0x564
	// Line 537, Address: 0x16e1c8, Func Offset: 0x578
	// Line 538, Address: 0x16e1e0, Func Offset: 0x590
	// Line 539, Address: 0x16e200, Func Offset: 0x5b0
	// Line 540, Address: 0x16e218, Func Offset: 0x5c8
	// Line 541, Address: 0x16e230, Func Offset: 0x5e0
	// Line 542, Address: 0x16e248, Func Offset: 0x5f8
	// Line 543, Address: 0x16e26c, Func Offset: 0x61c
	// Line 544, Address: 0x16e278, Func Offset: 0x628
	// Line 545, Address: 0x16e280, Func Offset: 0x630
	// Line 546, Address: 0x16e284, Func Offset: 0x634
	// Line 548, Address: 0x16e29c, Func Offset: 0x64c
	// Line 549, Address: 0x16e2a4, Func Offset: 0x654
	// Line 550, Address: 0x16e2a8, Func Offset: 0x658
	// Line 552, Address: 0x16e2b0, Func Offset: 0x660
	// Line 553, Address: 0x16e2bc, Func Offset: 0x66c
	// Line 554, Address: 0x16e2c8, Func Offset: 0x678
	// Line 557, Address: 0x16e300, Func Offset: 0x6b0
	// Line 558, Address: 0x16e318, Func Offset: 0x6c8
	// Line 559, Address: 0x16e320, Func Offset: 0x6d0
	// Line 560, Address: 0x16e32c, Func Offset: 0x6dc
	// Line 561, Address: 0x16e348, Func Offset: 0x6f8
	// Line 563, Address: 0x16e35c, Func Offset: 0x70c
	// Line 564, Address: 0x16e364, Func Offset: 0x714
	// Line 565, Address: 0x16e370, Func Offset: 0x720
	// Line 568, Address: 0x16e3a8, Func Offset: 0x758
	// Line 569, Address: 0x16e3c0, Func Offset: 0x770
	// Line 570, Address: 0x16e3c8, Func Offset: 0x778
	// Line 571, Address: 0x16e3d4, Func Offset: 0x784
	// Line 572, Address: 0x16e3f0, Func Offset: 0x7a0
	// Line 573, Address: 0x16e404, Func Offset: 0x7b4
	// Line 575, Address: 0x16e414, Func Offset: 0x7c4
	// Line 576, Address: 0x16e41c, Func Offset: 0x7cc
	// Line 577, Address: 0x16e42c, Func Offset: 0x7dc
	// Line 580, Address: 0x16e460, Func Offset: 0x810
	// Func End, Address: 0x16e4a0, Func Offset: 0x850
}

// 
// Start address: 0x16e4a0
void fogSetAreaEnvironment()
{
	FOG_AREA_DATA* pa;
	short wz;
	short wx;
	int max;
	int i;
	// Line 584, Address: 0x16e4a0, Func Offset: 0
	// Line 588, Address: 0x16e4a8, Func Offset: 0x8
	// Line 589, Address: 0x16e4c0, Func Offset: 0x20
	// Line 591, Address: 0x16e4e8, Func Offset: 0x48
	// Line 593, Address: 0x16e528, Func Offset: 0x88
	// Line 594, Address: 0x16e538, Func Offset: 0x98
	// Line 598, Address: 0x16e540, Func Offset: 0xa0
	// Line 599, Address: 0x16e550, Func Offset: 0xb0
	// Line 600, Address: 0x16e568, Func Offset: 0xc8
	// Line 601, Address: 0x16e578, Func Offset: 0xd8
	// Line 602, Address: 0x16e590, Func Offset: 0xf0
	// Line 605, Address: 0x16e598, Func Offset: 0xf8
	// Line 606, Address: 0x16e5a8, Func Offset: 0x108
	// Line 607, Address: 0x16e5b0, Func Offset: 0x110
	// Line 608, Address: 0x16e5c4, Func Offset: 0x124
	// Line 609, Address: 0x16e600, Func Offset: 0x160
	// Line 610, Address: 0x16e624, Func Offset: 0x184
	// Line 611, Address: 0x16e62c, Func Offset: 0x18c
	// Line 612, Address: 0x16e654, Func Offset: 0x1b4
	// Line 614, Address: 0x16e674, Func Offset: 0x1d4
	// Line 615, Address: 0x16e680, Func Offset: 0x1e0
	// Line 616, Address: 0x16e68c, Func Offset: 0x1ec
	// Line 617, Address: 0x16e6dc, Func Offset: 0x23c
	// Line 618, Address: 0x16e700, Func Offset: 0x260
	// Line 620, Address: 0x16e708, Func Offset: 0x268
	// Line 621, Address: 0x16e71c, Func Offset: 0x27c
	// Line 622, Address: 0x16e72c, Func Offset: 0x28c
	// Line 624, Address: 0x16e734, Func Offset: 0x294
	// Line 625, Address: 0x16e744, Func Offset: 0x2a4
	// Func End, Address: 0x16e754, Func Offset: 0x2b4
}

