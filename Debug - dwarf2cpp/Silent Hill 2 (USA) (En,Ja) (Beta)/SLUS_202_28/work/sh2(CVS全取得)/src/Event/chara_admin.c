typedef struct PAD_3D;
typedef struct Playing_Info;
typedef struct shAnime3d;
typedef struct shSkelton;
typedef struct SubCharacter;
typedef struct shCharacterAll;
typedef struct _anon0;
typedef struct _anon1;
typedef struct SubCharacterDisp;
typedef struct PAD_2D;
typedef struct Event_List;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct CharaData_DemoList;
typedef struct PAD_INFO;
typedef struct shSkeltonWork;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct Item_List;
typedef struct _AnimeInfo;
typedef union fsFile;
typedef struct shClusterAnime;
typedef struct fsCdFile;
typedef struct Model_List;
typedef struct fsMgcFile;
typedef struct Enemy_List;
typedef struct fsMgfFile;
typedef struct shBattleFight;
typedef struct _anon2;
typedef struct CharaAdmin_RoomDistance;
typedef struct shPlayerWork;
typedef struct shBattleShot;
typedef struct fsHdFile;
typedef struct shBattleArea;
typedef struct _SH2_SYS;
typedef struct fsMgpFile;
typedef struct shBattleInfo;
typedef union fsFileIndex;
typedef struct Stage_Data;
typedef struct _anon3;
typedef struct _CL_VHIT_WALL;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _anon4;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef struct Item;
typedef union _anon5;
typedef struct _USXY;
typedef struct _CL_VHIT_RESULT;
typedef union _anon6;
typedef struct _anon7;
typedef struct _SXY;
typedef struct _IXY;

typedef void(*type_14)();
typedef int(*type_18)();
typedef void(*type_20)(SubCharacter*);
typedef void(*type_23)(SubCharacter*);

typedef unsigned short type_0[3];
typedef CharaAdmin_RoomDistance type_1[30];
typedef unsigned char type_2[20];
typedef shAttackInfo type_3[66];
typedef unsigned int type_4[255];
typedef SubCharacterDisp type_5[32];
typedef float type_6[4];
typedef float type_7[4][4];
typedef unsigned int type_8[32];
typedef unsigned char type_9[4];
typedef char type_10[4];
typedef char type_11[4];
typedef char type_12[4];
typedef shSkelton type_13[400];
typedef CharaData_DemoList type_15[8];
typedef char type_16[4];
typedef float type_17[4][2];
typedef PAD_INFO type_19[10];
typedef char type_21[4];
typedef unsigned char type_22[14];
typedef CharaAdmin_RoomDistance type_24[31];
typedef float type_25[2];
typedef float type_26[7];
typedef unsigned char type_27[4];
typedef unsigned int type_28[7];
typedef short type_29[2];
typedef short type_30[2][9];
typedef float type_31[4];
typedef unsigned char type_32[4];
typedef unsigned char type_33[4];
typedef unsigned char type_34[69];
typedef void* type_35[3];
typedef unsigned char type_36[2];
typedef unsigned char type_37[2];
typedef unsigned int type_38[8];
typedef float type_39[4];
typedef CharaAdmin_RoomDistance type_40[18];
typedef unsigned char type_41[14];
typedef unsigned char type_42[97];
typedef unsigned int type_43[2];
typedef unsigned short type_44[11];
typedef unsigned char type_45[2];

struct PAD_3D
{
	char round_way;
	unsigned char reserved1;
	unsigned char lslide;
	unsigned char rslide;
	unsigned char lturn180;
	unsigned char rturn180;
};

struct Playing_Info
{
	unsigned char stage;
	unsigned char enemy_off;
	unsigned char voice_off;
	unsigned char memo_select;
	unsigned char clear_end_kind;
	unsigned char clear_end_number;
	unsigned char rank;
	unsigned char game_stage;
	unsigned char hidden_item_get;
	char spray_pow;
	unsigned short savecount;
	unsigned short clearcount;
	unsigned short item_get;
	unsigned short kill_by_shot;
	unsigned short kill_by_fight;
	float time;
	float walk_distance;
	float run_distance;
	float boat_clear_time;
	float boat_max_speed;
	float jms_damage_total;
	float mar_damage_by_enemy;
	float mar_damage_by_jms;
	float stage_check_point[7];
	unsigned int stage_score[7];
	unsigned int total_score;
	float total_time;
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
	unsigned char radar;
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
	_anon7 rot_neck;
	_anon7 rot_arms;
	_anon7 rot_body_neck;
	_anon7 rot_body;
	float scale;
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon1 src_m;
	_anon7 src_t;
	_anon1 des_m;
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
	_anon7 pos;
	_anon7 rot;
	_anon7 pos_spd;
	_anon7 rot_spd;
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

struct shCharacterAll
{
	SubCharacterDisp work[32];
	SubCharacterDisp* free;
	SubCharacter* head;
	SubCharacter* player;
	char total;
};

struct _anon0
{
	unsigned int flag[255];
	float time_deai;
	unsigned int enemy[32];
	unsigned char safe[4];
	char rotate[4];
	char guruguru[4];
	char cylinder[4];
	unsigned short clock;
	unsigned short carbon;
	char runaway[4];
	unsigned short hanging;
	short pad;
	char trunk[4];
};

struct _anon1
{
	float d[4][4];
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

struct Event_List
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
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

struct CharaData_DemoList
{
	int kind;
	fsFileIndex* model;
	fsFileIndex* animation;
	fsFileIndex* shadow;
	fsFileIndex* cluster;
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

struct shSkeltonWork
{
	shSkelton work[400];
	shSkelton* free;
	int last;
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

struct Item_List
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
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

union fsFile
{
	_anon3 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
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

struct Model_List
{
	short kind;
	short id;
	short flag_off;
	short flag_on;
	float pos[4];
	float rot[4];
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

struct _anon2
{
	void(*SpecDraw)();
	void(*PreDraw)();
	void(*PostDraw)();
	void(*CharaDraw_Hook)();
};

struct CharaAdmin_RoomDistance
{
	short rm0;
	short rm1;
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
	_anon7 tgt_body_angle;
	_anon7 tgt_neck_angle;
	_anon7 tgt_arms_angle;
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

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
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

struct shBattleArea
{
	float center;
	float radius;
};

struct _SH2_SYS
{
	unsigned int step[8];
	unsigned int pre_playable;
	int main_status;
	unsigned int soft_reset;
	unsigned int frame_cnt;
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

union fsFileIndex
{
	_anon4 index;
	unsigned long pack;
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
	_anon2* gfw_func;
	int(*chara_data_clear)();
	void(*sound_call_after_load)();
	int reserve_11;
};

struct _anon3
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

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
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

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
};

struct _anon4
{
	fsFile* fp;
	char* name;
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

union _anon5
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _USXY
{
	unsigned short x;
	unsigned short y;
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

struct _anon7
{
	float x;
	float y;
	float z;
	float w;
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

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
int back_load_admin;
Stage_Data* stage;
shPlayerWork sh2jms;
float connect_pos[4];
_SH2_SYS Sh2sys;
Item item;
_anon0 game_flag;
CharaData_DemoList back_load_admin_list[8];
int ev_m_step;
CharaAdmin_RoomDistance room_dist_hsp_f[31];
CharaAdmin_RoomDistance room_dist_hsp_b[18];
CharaAdmin_RoomDistance room_dist_apt[30];
Playing_Info playing;
shCharacterAll sh2chara;
shSkeltonWork sh2skelton;

void ConnectCharaWorkJamesSet();
void ConnectCharaWorkWeapon();
void ConnectCharaWorkReset();
void ConnectCharaWorkAdminOut(int load_check);
void ConnectCharaWorkAdminIn();
void ConnectCharaWorkAdminClear();
int RoomDistance(short room0, short room1);
int RoomDistanceSub(CharaAdmin_RoomDistance* dist, short room0, short room1, unsigned long flag);
SubCharacter* CharaWorkCreate(short kind, short id, float* pos, float* rot, unsigned int status);
void DeleteEnemyWork();
void DeleteEnemyWorkIn();
void DeleteEnemyWorkOut();
int CharaAdminEnemyEntryCheck(Enemy_List* ep, int room);
int CharaAdminEnemyEntryCondition(short cond);
void CharaAdminPlayableDisplay(int xxx);
SubCharacter* CharaAdminReCreate(int kind, int new_id, int old_id, float* pos, float* rot, int status);
void CharaAdminBackLoadEnemy(CharaData_DemoList* list);

// 
// Start address: 0x1caaf0
void ConnectCharaWorkJamesSet()
{
	float rot[4];
	float pos[4];
	// Line 76, Address: 0x1caaf0, Func Offset: 0
	// Line 80, Address: 0x1caaf8, Func Offset: 0x8
	// Line 81, Address: 0x1cab00, Func Offset: 0x10
	// Line 82, Address: 0x1cab08, Func Offset: 0x18
	// Line 83, Address: 0x1cab14, Func Offset: 0x24
	// Line 84, Address: 0x1cab20, Func Offset: 0x30
	// Line 85, Address: 0x1cab2c, Func Offset: 0x3c
	// Line 87, Address: 0x1cab38, Func Offset: 0x48
	// Line 88, Address: 0x1cab48, Func Offset: 0x58
	// Line 89, Address: 0x1cab60, Func Offset: 0x70
	// Line 90, Address: 0x1cab7c, Func Offset: 0x8c
	// Line 91, Address: 0x1cab90, Func Offset: 0xa0
	// Line 92, Address: 0x1caba8, Func Offset: 0xb8
	// Line 93, Address: 0x1cabc0, Func Offset: 0xd0
	// Line 94, Address: 0x1cabd0, Func Offset: 0xe0
	// Line 96, Address: 0x1cabec, Func Offset: 0xfc
	// Line 97, Address: 0x1cabf4, Func Offset: 0x104
	// Line 98, Address: 0x1cac0c, Func Offset: 0x11c
	// Line 99, Address: 0x1cac20, Func Offset: 0x130
	// Line 102, Address: 0x1cac3c, Func Offset: 0x14c
	// Func End, Address: 0x1cac4c, Func Offset: 0x15c
}

// 
// Start address: 0x1cac50
void ConnectCharaWorkWeapon()
{
	int i;
	int id;
	float dummy[4];
	SubCharacter* scp;
	short weapon[2][9];
	// Line 111, Address: 0x1cac50, Func Offset: 0
	// Line 128, Address: 0x1cac60, Func Offset: 0x10
	// Line 129, Address: 0x1cac6c, Func Offset: 0x1c
	// Line 130, Address: 0x1caca8, Func Offset: 0x58
	// Line 132, Address: 0x1cacdc, Func Offset: 0x8c
	// Line 133, Address: 0x1cace8, Func Offset: 0x98
	// Line 134, Address: 0x1cad04, Func Offset: 0xb4
	// Line 137, Address: 0x1cad20, Func Offset: 0xd0
	// Line 138, Address: 0x1cad44, Func Offset: 0xf4
	// Line 139, Address: 0x1cad50, Func Offset: 0x100
	// Line 140, Address: 0x1cad58, Func Offset: 0x108
	// Line 141, Address: 0x1cad60, Func Offset: 0x110
	// Line 142, Address: 0x1cad7c, Func Offset: 0x12c
	// Line 144, Address: 0x1cadac, Func Offset: 0x15c
	// Line 145, Address: 0x1caddc, Func Offset: 0x18c
	// Line 146, Address: 0x1cadf4, Func Offset: 0x1a4
	// Line 149, Address: 0x1cae2c, Func Offset: 0x1dc
	// Line 151, Address: 0x1cae5c, Func Offset: 0x20c
	// Line 153, Address: 0x1cae84, Func Offset: 0x234
	// Line 156, Address: 0x1caea0, Func Offset: 0x250
	// Line 157, Address: 0x1caebc, Func Offset: 0x26c
	// Func End, Address: 0x1caed4, Func Offset: 0x284
}

// 
// Start address: 0x1caee0
void ConnectCharaWorkReset()
{
	SubCharacter* next;
	SubCharacter* scp;
	// Line 165, Address: 0x1caee0, Func Offset: 0
	// Line 169, Address: 0x1caeec, Func Offset: 0xc
	// Line 171, Address: 0x1caef4, Func Offset: 0x14
	// Line 172, Address: 0x1caf00, Func Offset: 0x20
	// Line 173, Address: 0x1caf08, Func Offset: 0x28
	// Line 174, Address: 0x1caf0c, Func Offset: 0x2c
	// Line 175, Address: 0x1caf44, Func Offset: 0x64
	// Line 176, Address: 0x1caf70, Func Offset: 0x90
	// Line 177, Address: 0x1caf9c, Func Offset: 0xbc
	// Line 178, Address: 0x1cafac, Func Offset: 0xcc
	// Line 179, Address: 0x1cafc0, Func Offset: 0xe0
	// Func End, Address: 0x1cafd4, Func Offset: 0xf4
}

// 
// Start address: 0x1cafe0
void ConnectCharaWorkAdminOut(int load_check)
{
	float work;
	int flag;
	int kind;
	int active_enemy;
	float rot[4];
	float pos[4];
	Enemy_List* ep;
	Item_List* ip;
	Model_List* mp;
	SubCharacter* next;
	SubCharacter* scp;
	// Line 187, Address: 0x1cafe0, Func Offset: 0
	// Line 200, Address: 0x1caffc, Func Offset: 0x1c
	// Line 202, Address: 0x1cb014, Func Offset: 0x34
	// Line 203, Address: 0x1cb01c, Func Offset: 0x3c
	// Line 204, Address: 0x1cb03c, Func Offset: 0x5c
	// Line 205, Address: 0x1cb044, Func Offset: 0x64
	// Line 206, Address: 0x1cb054, Func Offset: 0x74
	// Line 208, Address: 0x1cb05c, Func Offset: 0x7c
	// Line 214, Address: 0x1cb06c, Func Offset: 0x8c
	// Line 215, Address: 0x1cb078, Func Offset: 0x98
	// Line 216, Address: 0x1cb07c, Func Offset: 0x9c
	// Line 217, Address: 0x1cb084, Func Offset: 0xa4
	// Line 218, Address: 0x1cb088, Func Offset: 0xa8
	// Line 220, Address: 0x1cb0b0, Func Offset: 0xd0
	// Line 225, Address: 0x1cb140, Func Offset: 0x160
	// Line 227, Address: 0x1cb14c, Func Offset: 0x16c
	// Line 228, Address: 0x1cb158, Func Offset: 0x178
	// Line 230, Address: 0x1cb168, Func Offset: 0x188
	// Line 231, Address: 0x1cb1a8, Func Offset: 0x1c8
	// Line 232, Address: 0x1cb1b8, Func Offset: 0x1d8
	// Line 239, Address: 0x1cb258, Func Offset: 0x278
	// Line 241, Address: 0x1cb270, Func Offset: 0x290
	// Line 242, Address: 0x1cb274, Func Offset: 0x294
	// Line 244, Address: 0x1cb280, Func Offset: 0x2a0
	// Line 245, Address: 0x1cb298, Func Offset: 0x2b8
	// Line 246, Address: 0x1cb2ac, Func Offset: 0x2cc
	// Line 247, Address: 0x1cb2d4, Func Offset: 0x2f4
	// Line 248, Address: 0x1cb2f4, Func Offset: 0x314
	// Line 252, Address: 0x1cb300, Func Offset: 0x320
	// Line 253, Address: 0x1cb314, Func Offset: 0x334
	// Line 254, Address: 0x1cb350, Func Offset: 0x370
	// Line 255, Address: 0x1cb388, Func Offset: 0x3a8
	// Line 256, Address: 0x1cb3b0, Func Offset: 0x3d0
	// Line 257, Address: 0x1cb3c8, Func Offset: 0x3e8
	// Line 258, Address: 0x1cb3d4, Func Offset: 0x3f4
	// Line 263, Address: 0x1cb454, Func Offset: 0x474
	// Line 265, Address: 0x1cb474, Func Offset: 0x494
	// Line 267, Address: 0x1cb488, Func Offset: 0x4a8
	// Line 268, Address: 0x1cb4a8, Func Offset: 0x4c8
	// Line 269, Address: 0x1cb4b0, Func Offset: 0x4d0
	// Line 270, Address: 0x1cb4b8, Func Offset: 0x4d8
	// Line 271, Address: 0x1cb4cc, Func Offset: 0x4ec
	// Line 272, Address: 0x1cb4d8, Func Offset: 0x4f8
	// Line 273, Address: 0x1cb4e4, Func Offset: 0x504
	// Line 274, Address: 0x1cb4e8, Func Offset: 0x508
	// Line 275, Address: 0x1cb544, Func Offset: 0x564
	// Line 277, Address: 0x1cb564, Func Offset: 0x584
	// Line 278, Address: 0x1cb58c, Func Offset: 0x5ac
	// Line 279, Address: 0x1cb59c, Func Offset: 0x5bc
	// Line 280, Address: 0x1cb5a8, Func Offset: 0x5c8
	// Line 281, Address: 0x1cb5b4, Func Offset: 0x5d4
	// Line 282, Address: 0x1cb5c0, Func Offset: 0x5e0
	// Line 283, Address: 0x1cb5cc, Func Offset: 0x5ec
	// Line 285, Address: 0x1cb5d0, Func Offset: 0x5f0
	// Line 286, Address: 0x1cb5ec, Func Offset: 0x60c
	// Line 287, Address: 0x1cb5f8, Func Offset: 0x618
	// Line 292, Address: 0x1cb678, Func Offset: 0x698
	// Line 293, Address: 0x1cb67c, Func Offset: 0x69c
	// Line 294, Address: 0x1cb68c, Func Offset: 0x6ac
	// Line 295, Address: 0x1cb694, Func Offset: 0x6b4
	// Line 296, Address: 0x1cb6a4, Func Offset: 0x6c4
	// Line 297, Address: 0x1cb6c8, Func Offset: 0x6e8
	// Line 298, Address: 0x1cb6d4, Func Offset: 0x6f4
	// Line 299, Address: 0x1cb6d8, Func Offset: 0x6f8
	// Line 306, Address: 0x1cb6e8, Func Offset: 0x708
	// Line 309, Address: 0x1cb6fc, Func Offset: 0x71c
	// Line 311, Address: 0x1cb708, Func Offset: 0x728
	// Line 312, Address: 0x1cb71c, Func Offset: 0x73c
	// Line 313, Address: 0x1cb738, Func Offset: 0x758
	// Line 314, Address: 0x1cb750, Func Offset: 0x770
	// Line 316, Address: 0x1cb764, Func Offset: 0x784
	// Line 318, Address: 0x1cb798, Func Offset: 0x7b8
	// Line 319, Address: 0x1cb7d8, Func Offset: 0x7f8
	// Line 320, Address: 0x1cb7e0, Func Offset: 0x800
	// Line 321, Address: 0x1cb7e4, Func Offset: 0x804
	// Line 322, Address: 0x1cb7f8, Func Offset: 0x818
	// Line 323, Address: 0x1cb804, Func Offset: 0x824
	// Line 324, Address: 0x1cb828, Func Offset: 0x848
	// Line 327, Address: 0x1cb848, Func Offset: 0x868
	// Line 328, Address: 0x1cb850, Func Offset: 0x870
	// Line 329, Address: 0x1cb85c, Func Offset: 0x87c
	// Line 330, Address: 0x1cb868, Func Offset: 0x888
	// Line 331, Address: 0x1cb86c, Func Offset: 0x88c
	// Line 333, Address: 0x1cb870, Func Offset: 0x890
	// Line 334, Address: 0x1cb890, Func Offset: 0x8b0
	// Func End, Address: 0x1cb8b4, Func Offset: 0x8d4
}

// 
// Start address: 0x1cb8c0
void ConnectCharaWorkAdminIn()
{
	int room;
	int flag;
	int kind;
	float rot[4];
	float pos[4];
	Enemy_List* ep;
	Item_List* ip;
	Model_List* mp;
	SubCharacter* next;
	SubCharacter* scp;
	// Line 342, Address: 0x1cb8c0, Func Offset: 0
	// Line 354, Address: 0x1cb8d8, Func Offset: 0x18
	// Line 355, Address: 0x1cb8e4, Func Offset: 0x24
	// Line 356, Address: 0x1cb8ec, Func Offset: 0x2c
	// Line 358, Address: 0x1cb8f4, Func Offset: 0x34
	// Line 361, Address: 0x1cb900, Func Offset: 0x40
	// Line 362, Address: 0x1cb908, Func Offset: 0x48
	// Line 363, Address: 0x1cb90c, Func Offset: 0x4c
	// Line 364, Address: 0x1cb920, Func Offset: 0x60
	// Line 365, Address: 0x1cb930, Func Offset: 0x70
	// Line 366, Address: 0x1cb940, Func Offset: 0x80
	// Line 367, Address: 0x1cb954, Func Offset: 0x94
	// Line 368, Address: 0x1cb964, Func Offset: 0xa4
	// Line 369, Address: 0x1cb968, Func Offset: 0xa8
	// Line 370, Address: 0x1cb96c, Func Offset: 0xac
	// Line 372, Address: 0x1cb978, Func Offset: 0xb8
	// Line 373, Address: 0x1cb98c, Func Offset: 0xcc
	// Line 374, Address: 0x1cb9a4, Func Offset: 0xe4
	// Line 375, Address: 0x1cb9ac, Func Offset: 0xec
	// Line 376, Address: 0x1cb9cc, Func Offset: 0x10c
	// Line 377, Address: 0x1cb9e0, Func Offset: 0x120
	// Line 378, Address: 0x1cb9e8, Func Offset: 0x128
	// Line 382, Address: 0x1cb9f4, Func Offset: 0x134
	// Line 383, Address: 0x1cba08, Func Offset: 0x148
	// Line 384, Address: 0x1cba40, Func Offset: 0x180
	// Line 385, Address: 0x1cba78, Func Offset: 0x1b8
	// Line 386, Address: 0x1cba94, Func Offset: 0x1d4
	// Line 387, Address: 0x1cbaa8, Func Offset: 0x1e8
	// Line 388, Address: 0x1cbab0, Func Offset: 0x1f0
	// Line 391, Address: 0x1cbad0, Func Offset: 0x210
	// Line 392, Address: 0x1cbae8, Func Offset: 0x228
	// Line 395, Address: 0x1cbb08, Func Offset: 0x248
	// Line 396, Address: 0x1cbb10, Func Offset: 0x250
	// Line 397, Address: 0x1cbb18, Func Offset: 0x258
	// Line 398, Address: 0x1cbb2c, Func Offset: 0x26c
	// Line 399, Address: 0x1cbb38, Func Offset: 0x278
	// Line 400, Address: 0x1cbb44, Func Offset: 0x284
	// Line 401, Address: 0x1cbb48, Func Offset: 0x288
	// Line 402, Address: 0x1cbba4, Func Offset: 0x2e4
	// Line 403, Address: 0x1cbbc0, Func Offset: 0x300
	// Line 404, Address: 0x1cbbc8, Func Offset: 0x308
	// Line 405, Address: 0x1cbbd8, Func Offset: 0x318
	// Line 406, Address: 0x1cbbe0, Func Offset: 0x320
	// Line 407, Address: 0x1cbbf0, Func Offset: 0x330
	// Line 409, Address: 0x1cbc18, Func Offset: 0x358
	// Line 410, Address: 0x1cbc24, Func Offset: 0x364
	// Line 411, Address: 0x1cbc30, Func Offset: 0x370
	// Line 412, Address: 0x1cbc3c, Func Offset: 0x37c
	// Line 413, Address: 0x1cbc48, Func Offset: 0x388
	// Line 414, Address: 0x1cbc54, Func Offset: 0x394
	// Line 416, Address: 0x1cbc58, Func Offset: 0x398
	// Line 417, Address: 0x1cbc70, Func Offset: 0x3b0
	// Line 418, Address: 0x1cbca0, Func Offset: 0x3e0
	// Line 419, Address: 0x1cbcb8, Func Offset: 0x3f8
	// Line 426, Address: 0x1cbcc8, Func Offset: 0x408
	// Line 427, Address: 0x1cbcdc, Func Offset: 0x41c
	// Line 428, Address: 0x1cbcf4, Func Offset: 0x434
	// Line 429, Address: 0x1cbd08, Func Offset: 0x448
	// Line 430, Address: 0x1cbd10, Func Offset: 0x450
	// Line 434, Address: 0x1cbd70, Func Offset: 0x4b0
	// Line 435, Address: 0x1cbd80, Func Offset: 0x4c0
	// Line 436, Address: 0x1cbd84, Func Offset: 0x4c4
	// Line 438, Address: 0x1cbd88, Func Offset: 0x4c8
	// Line 439, Address: 0x1cbd90, Func Offset: 0x4d0
	// Line 440, Address: 0x1cbd9c, Func Offset: 0x4dc
	// Line 441, Address: 0x1cbdb0, Func Offset: 0x4f0
	// Line 442, Address: 0x1cbdbc, Func Offset: 0x4fc
	// Line 443, Address: 0x1cbde0, Func Offset: 0x520
	// Line 446, Address: 0x1cbe00, Func Offset: 0x540
	// Line 447, Address: 0x1cbe08, Func Offset: 0x548
	// Line 448, Address: 0x1cbe14, Func Offset: 0x554
	// Line 450, Address: 0x1cbe20, Func Offset: 0x560
	// Line 453, Address: 0x1cbe40, Func Offset: 0x580
	// Line 454, Address: 0x1cbe54, Func Offset: 0x594
	// Line 455, Address: 0x1cbe68, Func Offset: 0x5a8
	// Line 456, Address: 0x1cbe80, Func Offset: 0x5c0
	// Line 457, Address: 0x1cbe88, Func Offset: 0x5c8
	// Line 458, Address: 0x1cbe90, Func Offset: 0x5d0
	// Line 459, Address: 0x1cbea8, Func Offset: 0x5e8
	// Line 460, Address: 0x1cbec0, Func Offset: 0x600
	// Line 461, Address: 0x1cbec8, Func Offset: 0x608
	// Line 463, Address: 0x1cbee0, Func Offset: 0x620
	// Line 465, Address: 0x1cbef4, Func Offset: 0x634
	// Func End, Address: 0x1cbf14, Func Offset: 0x654
}

// 
// Start address: 0x1cbf20
void ConnectCharaWorkAdminClear()
{
	SubCharacter* next;
	SubCharacter* scp;
	// Line 472, Address: 0x1cbf20, Func Offset: 0
	// Line 476, Address: 0x1cbf2c, Func Offset: 0xc
	// Line 477, Address: 0x1cbf38, Func Offset: 0x18
	// Line 478, Address: 0x1cbf40, Func Offset: 0x20
	// Line 479, Address: 0x1cbf44, Func Offset: 0x24
	// Line 487, Address: 0x1cc040, Func Offset: 0x120
	// Line 490, Address: 0x1cc050, Func Offset: 0x130
	// Line 491, Address: 0x1cc054, Func Offset: 0x134
	// Line 492, Address: 0x1cc060, Func Offset: 0x140
	// Func End, Address: 0x1cc074, Func Offset: 0x154
}

// 
// Start address: 0x1cc080
int RoomDistance(short room0, short room1)
{
	int len;
	// Line 592, Address: 0x1cc080, Func Offset: 0
	// Line 595, Address: 0x1cc090, Func Offset: 0x10
	// Line 604, Address: 0x1cc0c4, Func Offset: 0x44
	// Line 605, Address: 0x1cc0dc, Func Offset: 0x5c
	// Line 610, Address: 0x1cc0e4, Func Offset: 0x64
	// Line 611, Address: 0x1cc0fc, Func Offset: 0x7c
	// Line 616, Address: 0x1cc104, Func Offset: 0x84
	// Line 617, Address: 0x1cc11c, Func Offset: 0x9c
	// Line 619, Address: 0x1cc124, Func Offset: 0xa4
	// Line 622, Address: 0x1cc130, Func Offset: 0xb0
	// Line 624, Address: 0x1cc148, Func Offset: 0xc8
	// Func End, Address: 0x1cc158, Func Offset: 0xd8
}

// 
// Start address: 0x1cc160
int RoomDistanceSub(CharaAdmin_RoomDistance* dist, short room0, short room1, unsigned long flag)
{
	int i;
	int work;
	int len;
	// Line 631, Address: 0x1cc160, Func Offset: 0
	// Line 637, Address: 0x1cc190, Func Offset: 0x30
	// Line 639, Address: 0x1cc1ac, Func Offset: 0x4c
	// Line 640, Address: 0x1cc1b0, Func Offset: 0x50
	// Line 643, Address: 0x1cc1b8, Func Offset: 0x58
	// Line 644, Address: 0x1cc1c4, Func Offset: 0x64
	// Line 646, Address: 0x1cc21c, Func Offset: 0xbc
	// Line 647, Address: 0x1cc220, Func Offset: 0xc0
	// Line 648, Address: 0x1cc22c, Func Offset: 0xcc
	// Line 649, Address: 0x1cc240, Func Offset: 0xe0
	// Line 651, Address: 0x1cc27c, Func Offset: 0x11c
	// Line 653, Address: 0x1cc2a8, Func Offset: 0x148
	// Line 654, Address: 0x1cc2b0, Func Offset: 0x150
	// Line 656, Address: 0x1cc2bc, Func Offset: 0x15c
	// Line 657, Address: 0x1cc2dc, Func Offset: 0x17c
	// Line 658, Address: 0x1cc2fc, Func Offset: 0x19c
	// Line 659, Address: 0x1cc31c, Func Offset: 0x1bc
	// Line 660, Address: 0x1cc320, Func Offset: 0x1c0
	// Func End, Address: 0x1cc348, Func Offset: 0x1e8
}

// 
// Start address: 0x1cc350
SubCharacter* CharaWorkCreate(short kind, short id, float* pos, float* rot, unsigned int status)
{
	int sk_last;
	SubCharacter* scp;
	// Line 674, Address: 0x1cc350, Func Offset: 0
	// Line 678, Address: 0x1cc380, Func Offset: 0x30
	// Line 679, Address: 0x1cc394, Func Offset: 0x44
	// Line 680, Address: 0x1cc3b0, Func Offset: 0x60
	// Line 681, Address: 0x1cc3b8, Func Offset: 0x68
	// Line 683, Address: 0x1cc3dc, Func Offset: 0x8c
	// Line 684, Address: 0x1cc3f8, Func Offset: 0xa8
	// Line 685, Address: 0x1cc408, Func Offset: 0xb8
	// Line 688, Address: 0x1cc41c, Func Offset: 0xcc
	// Func End, Address: 0x1cc440, Func Offset: 0xf0
}

// 
// Start address: 0x1cc440
void DeleteEnemyWork()
{
	// Line 695, Address: 0x1cc440, Func Offset: 0
	// Line 696, Address: 0x1cc448, Func Offset: 0x8
	// Line 697, Address: 0x1cc484, Func Offset: 0x44
	// Line 701, Address: 0x1cc494, Func Offset: 0x54
	// Line 703, Address: 0x1cc49c, Func Offset: 0x5c
	// Func End, Address: 0x1cc4ac, Func Offset: 0x6c
}

// 
// Start address: 0x1cc4b0
void DeleteEnemyWorkIn()
{
	int work;
	int del_point;
	int e_room;
	int j_room;
	SubCharacter* del;
	SubCharacter* scp;
	// Line 710, Address: 0x1cc4b0, Func Offset: 0
	// Line 718, Address: 0x1cc4c8, Func Offset: 0x18
	// Line 720, Address: 0x1cc4e8, Func Offset: 0x38
	// Line 721, Address: 0x1cc4ec, Func Offset: 0x3c
	// Line 722, Address: 0x1cc4f0, Func Offset: 0x40
	// Line 723, Address: 0x1cc4fc, Func Offset: 0x4c
	// Line 726, Address: 0x1cc504, Func Offset: 0x54
	// Line 729, Address: 0x1cc518, Func Offset: 0x68
	// Line 730, Address: 0x1cc52c, Func Offset: 0x7c
	// Line 731, Address: 0x1cc534, Func Offset: 0x84
	// Line 732, Address: 0x1cc54c, Func Offset: 0x9c
	// Line 733, Address: 0x1cc570, Func Offset: 0xc0
	// Line 734, Address: 0x1cc57c, Func Offset: 0xcc
	// Line 735, Address: 0x1cc580, Func Offset: 0xd0
	// Line 737, Address: 0x1cc584, Func Offset: 0xd4
	// Line 739, Address: 0x1cc598, Func Offset: 0xe8
	// Line 741, Address: 0x1cc5c4, Func Offset: 0x114
	// Line 742, Address: 0x1cc610, Func Offset: 0x160
	// Line 743, Address: 0x1cc624, Func Offset: 0x174
	// Func End, Address: 0x1cc644, Func Offset: 0x194
}

// 
// Start address: 0x1cc650
void DeleteEnemyWorkOut()
{
	float far;
	float len;
	float vec[4];
	SubCharacter* del;
	SubCharacter* scp;
	// Line 750, Address: 0x1cc650, Func Offset: 0
	// Line 757, Address: 0x1cc660, Func Offset: 0x10
	// Line 758, Address: 0x1cc668, Func Offset: 0x18
	// Line 759, Address: 0x1cc66c, Func Offset: 0x1c
	// Line 760, Address: 0x1cc674, Func Offset: 0x24
	// Line 761, Address: 0x1cc67c, Func Offset: 0x2c
	// Line 764, Address: 0x1cc684, Func Offset: 0x34
	// Line 765, Address: 0x1cc698, Func Offset: 0x48
	// Line 766, Address: 0x1cc6b0, Func Offset: 0x60
	// Line 767, Address: 0x1cc6c0, Func Offset: 0x70
	// Line 768, Address: 0x1cc6d8, Func Offset: 0x88
	// Line 770, Address: 0x1cc708, Func Offset: 0xb8
	// Line 771, Address: 0x1cc718, Func Offset: 0xc8
	// Line 772, Address: 0x1cc71c, Func Offset: 0xcc
	// Line 773, Address: 0x1cc720, Func Offset: 0xd0
	// Line 775, Address: 0x1cc730, Func Offset: 0xe0
	// Line 777, Address: 0x1cc75c, Func Offset: 0x10c
	// Line 778, Address: 0x1cc7a8, Func Offset: 0x158
	// Line 779, Address: 0x1cc7bc, Func Offset: 0x16c
	// Func End, Address: 0x1cc7d4, Func Offset: 0x184
}

// 
// Start address: 0x1cc7e0
int CharaAdminEnemyEntryCheck(Enemy_List* ep, int room)
{
	// Line 788, Address: 0x1cc7e0, Func Offset: 0
	// Line 789, Address: 0x1cc7f8, Func Offset: 0x18
	// Line 790, Address: 0x1cc834, Func Offset: 0x54
	// Line 791, Address: 0x1cc860, Func Offset: 0x80
	// Line 792, Address: 0x1cc86c, Func Offset: 0x8c
	// Line 794, Address: 0x1cc88c, Func Offset: 0xac
	// Line 795, Address: 0x1cc890, Func Offset: 0xb0
	// Func End, Address: 0x1cc8a8, Func Offset: 0xc8
}

// 
// Start address: 0x1cc8b0
int CharaAdminEnemyEntryCondition(short cond)
{
	// Line 802, Address: 0x1cc8b0, Func Offset: 0
	// Line 803, Address: 0x1cc8c4, Func Offset: 0x14
	// Line 804, Address: 0x1cc8e4, Func Offset: 0x34
	// Line 805, Address: 0x1cc8f0, Func Offset: 0x40
	// Line 806, Address: 0x1cc910, Func Offset: 0x60
	// Line 807, Address: 0x1cc91c, Func Offset: 0x6c
	// Line 814, Address: 0x1cc93c, Func Offset: 0x8c
	// Line 818, Address: 0x1cca1c, Func Offset: 0x16c
	// Line 819, Address: 0x1cca4c, Func Offset: 0x19c
	// Line 824, Address: 0x1cca58, Func Offset: 0x1a8
	// Line 829, Address: 0x1cca7c, Func Offset: 0x1cc
	// Line 833, Address: 0x1ccaa0, Func Offset: 0x1f0
	// Line 834, Address: 0x1ccac8, Func Offset: 0x218
	// Line 839, Address: 0x1ccad4, Func Offset: 0x224
	// Line 844, Address: 0x1ccaf8, Func Offset: 0x248
	// Line 849, Address: 0x1ccb1c, Func Offset: 0x26c
	// Line 850, Address: 0x1ccb44, Func Offset: 0x294
	// Line 853, Address: 0x1ccb50, Func Offset: 0x2a0
	// Line 854, Address: 0x1ccb78, Func Offset: 0x2c8
	// Line 859, Address: 0x1ccb84, Func Offset: 0x2d4
	// Line 861, Address: 0x1ccbb4, Func Offset: 0x304
	// Line 865, Address: 0x1ccbc0, Func Offset: 0x310
	// Line 866, Address: 0x1ccbf0, Func Offset: 0x340
	// Line 872, Address: 0x1ccbfc, Func Offset: 0x34c
	// Line 875, Address: 0x1ccc4c, Func Offset: 0x39c
	// Line 880, Address: 0x1ccc58, Func Offset: 0x3a8
	// Line 885, Address: 0x1ccc7c, Func Offset: 0x3cc
	// Line 890, Address: 0x1ccca0, Func Offset: 0x3f0
	// Line 895, Address: 0x1cccc4, Func Offset: 0x414
	// Line 896, Address: 0x1cccec, Func Offset: 0x43c
	// Line 901, Address: 0x1cccf8, Func Offset: 0x448
	// Line 906, Address: 0x1ccd1c, Func Offset: 0x46c
	// Line 909, Address: 0x1ccd40, Func Offset: 0x490
	// Line 910, Address: 0x1ccd44, Func Offset: 0x494
	// Func End, Address: 0x1ccd4c, Func Offset: 0x49c
}

// 
// Start address: 0x1ccd50
void CharaAdminPlayableDisplay(int xxx)
{
	SubCharacter* scp;
	// Line 918, Address: 0x1ccd50, Func Offset: 0
	// Line 921, Address: 0x1ccd60, Func Offset: 0x10
	// Line 922, Address: 0x1ccd6c, Func Offset: 0x1c
	// Line 923, Address: 0x1ccd74, Func Offset: 0x24
	// Line 935, Address: 0x1cce88, Func Offset: 0x138
	// Line 936, Address: 0x1ccea4, Func Offset: 0x154
	// Line 937, Address: 0x1cceb4, Func Offset: 0x164
	// Line 938, Address: 0x1cceb8, Func Offset: 0x168
	// Line 939, Address: 0x1ccec8, Func Offset: 0x178
	// Func End, Address: 0x1ccedc, Func Offset: 0x18c
}

// 
// Start address: 0x1ccee0
SubCharacter* CharaAdminReCreate(int kind, int new_id, int old_id, float* pos, float* rot, int status)
{
	// Line 947, Address: 0x1ccee0, Func Offset: 0
	// Line 948, Address: 0x1ccf10, Func Offset: 0x30
	// Line 949, Address: 0x1ccf2c, Func Offset: 0x4c
	// Line 950, Address: 0x1ccf50, Func Offset: 0x70
	// Func End, Address: 0x1ccf74, Func Offset: 0x94
}

// 
// Start address: 0x1ccf80
void CharaAdminBackLoadEnemy(CharaData_DemoList* list)
{
	int i;
	// Line 955, Address: 0x1ccf80, Func Offset: 0
	// Line 958, Address: 0x1ccf90, Func Offset: 0x10
	// Line 959, Address: 0x1ccf98, Func Offset: 0x18
	// Line 960, Address: 0x1ccfa8, Func Offset: 0x28
	// Line 961, Address: 0x1ccfb4, Func Offset: 0x34
	// Line 962, Address: 0x1ccfc0, Func Offset: 0x40
	// Line 963, Address: 0x1ccff4, Func Offset: 0x74
	// Line 964, Address: 0x1cd010, Func Offset: 0x90
	// Line 965, Address: 0x1cd024, Func Offset: 0xa4
	// Line 966, Address: 0x1cd038, Func Offset: 0xb8
	// Line 967, Address: 0x1cd04c, Func Offset: 0xcc
	// Line 968, Address: 0x1cd060, Func Offset: 0xe0
	// Line 969, Address: 0x1cd074, Func Offset: 0xf4
	// Line 970, Address: 0x1cd090, Func Offset: 0x110
	// Func End, Address: 0x1cd0a4, Func Offset: 0x124
}

