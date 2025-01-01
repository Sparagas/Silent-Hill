typedef struct _anon0;
typedef struct shAttackInfo;
typedef struct Stage_Data;
typedef struct Event_List;
typedef union _anon1;
typedef struct Item_List;
typedef struct Model_List;
typedef struct Enemy_List;
typedef struct _AnimeInfo;
typedef struct shBattleFight;
typedef struct shBattleShot;

typedef void(*type_1)();
typedef int(*type_2)();

typedef _AnimeInfo type_0[33];
typedef unsigned char type_3[72];
typedef _AnimeInfo type_4[11];
typedef int(*type_5)()[1];
typedef _AnimeInfo type_6[30];
typedef unsigned char type_7[20];
typedef _AnimeInfo type_8[17];
typedef _AnimeInfo type_9[34];
typedef _AnimeInfo type_10[17];
typedef shAttackInfo type_11[66];
typedef unsigned char type_12[14];
typedef float type_13[4];
typedef _AnimeInfo type_14[17];
typedef Model_List type_15[4];
typedef Event_List type_16[6];
typedef unsigned char type_17[69];
typedef _AnimeInfo type_18[33];
typedef _AnimeInfo type_19[2];
typedef _AnimeInfo type_20[24];
typedef unsigned char type_21[14];
typedef _AnimeInfo type_22[5];
typedef unsigned char type_23[97];

struct _anon0
{
	void(*SpecDraw)();
	void(*PreDraw)();
	void(*PostDraw)();
	void(*CharaDraw_Hook)();
};

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

struct Event_List
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
};

union _anon1
{
	shBattleFight fight;
	shBattleShot shot;
};

struct Item_List
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
_AnimeInfo pjames_anim[34];
_AnimeInfo pjames_hg_anim[11];
_AnimeInfo pjames_sg_anim[17];
_AnimeInfo pjames_rg_anim[5];
_AnimeInfo pjames_sp_anim[17];
_AnimeInfo pjames_ka_anim[33];
_AnimeInfo pjames_pi_anim[33];
_AnimeInfo pjames_na_anim[17];
_AnimeInfo pjames_cs_anim[24];
_AnimeInfo pjames_demo_anim[30];
_AnimeInfo pjames_stage_anim[2];
unsigned char ev_pos[72];
Event_List ev_list[6];
int(*ev_prog)()[1];
Model_List mdl_list[4];
Stage_Data stage_heaven_night;


