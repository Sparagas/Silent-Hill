typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct MariaAppearPoint;
typedef struct _CL_VHIT_CHARA;
typedef union _anon0;
typedef struct SubCharacter;
typedef struct _CL_VHIT_RESULT;
typedef union _anon1;
typedef struct shSkelton;
typedef struct _anon2;
typedef struct _AnimeInfo;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct _anon3;
typedef struct Playing_Info;
typedef enum _MARIA_MAIN_STATUS : unsigned char;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef enum _MARIA_SUB_STATUS : unsigned char;
typedef struct shMariaWork;
typedef struct _CL_VHIT_WALL;

typedef void(*type_9)(SubCharacter*);
typedef void(*type_12)(SubCharacter*);
typedef void(*type_16)(SubCharacter*);

typedef unsigned char type_0[20];
typedef unsigned char type_1[4];
typedef unsigned char type_2[4];
typedef MariaAppearPoint type_3[91];
typedef shAttackInfo type_4[66];
typedef int type_5[7];
typedef unsigned char type_6[14];
typedef _AnimeInfo type_7[7];
typedef unsigned int type_8[9];
typedef float type_10[4][2];
typedef unsigned char type_11[69];
typedef float type_13[4];
typedef float type_14[4][4];
typedef unsigned char type_15[4];
typedef unsigned char type_17[14];
typedef float type_18[4];
typedef float type_19[4];
typedef unsigned char type_20[97];
typedef float type_21[7];
typedef unsigned int type_22[7];
typedef float type_23[4][5];
typedef _AnimeInfo type_24[40];

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

struct MariaAppearPoint
{
	short room_name_prev;
	short room_name_now;
	int active_type;
	float pos[4];
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

	void HumanMARFunction();
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

struct _anon2
{
	float x;
	float y;
	float z;
	float w;
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

struct _anon3
{
	float d[4][4];
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

enum _MARIA_MAIN_STATUS : unsigned char
{
	MAR_MAIN_ST_STAND,
	MAR_MAIN_ST_CLOSE_TO,
	MAR_MAIN_ST_ALERT,
	MAR_MAIN_ST_DISCOVER,
	MAR_MAIN_ST_RECOVER,
	MAR_MAIN_ST_BOREDOM,
	MAR_MAIN_ST_DAMAGED
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

enum _MARIA_SUB_STATUS : unsigned char
{
	MAR_SUB_ST_STAND,
	MAR_SUB_ST_RELAX,
	MAR_SUB_ST_RELAX_OFF,
	MAR_SUB_ST_AFRAID,
	MAR_SUB_ST_TIRED,
	MAR_SUB_ST_ONESTEP,
	MAR_SUB_ST_WALK,
	MAR_SUB_ST_RUN,
	MAR_SUB_ST_DAMAGE
};

struct shMariaWork
{
	SubCharacter* mar_p;
	_anon2 dist_rot;
	_anon2 dist_pos;
	_anon2 pos;
	_anon2 rot;
	float to_target;
	float tgt_pos[4][5];
	int tgt_pointer;
	int pushed_dir;
	_MARIA_MAIN_STATUS main_status_now;
	_MARIA_MAIN_STATUS main_status_prev;
	_MARIA_SUB_STATUS sub_status_now;
	_MARIA_SUB_STATUS sub_status_prev;
	unsigned int sub_st_flg;
	unsigned int anime_st_flg;
	unsigned int anime_pause;
	_CL_VHIT_RESULT r_forward;
	_CL_VHIT_RESULT l_forward;
	_CL_VHIT_RESULT forward;
	_CL_VHIT_RESULT ft_floor;
	_CL_VHIT_RESULT r_foot;
	_CL_VHIT_RESULT l_foot;
	_CL_HITPOLY_COLUMN column_mov;
	_CL_HITPOLY_COLUMN column_atk;
	float col_mov_z_hosei;
	float col_atk_z_hosei;
	unsigned char se_upper[4];
	unsigned char se_foot[4];
	_anon2 tgt_neck_angle;
	SubCharacter* look_tgt;
	SubCharacter* look_obj;
	float dist_to_jms;
	float hp_recover;
	float stand_time;
	float move_time;
	float muteki_time;
	float relax_time;
	float afraid_time;
	float hp;
	float hp_max;
	int tired;
	int tired_max;
	unsigned char relax_flag;
	unsigned char no_damage;
	unsigned char dead;
	unsigned short damage_no;
	unsigned char enemy_around;
	unsigned char enemy_atk_area;
	unsigned char look_jms;
	unsigned char random_status;
	unsigned char active_type;
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
_AnimeInfo pmaria_anim[40];
_AnimeInfo d_mar_anim[7];
MariaAppearPoint maria_apeear_point_list[91];
unsigned int pmaria_sub_status_flag[9];
int dmar_anime_adr_list[7];
shMariaWork sh2mar;
void(*HumanMARFunction)(SubCharacter*);
Playing_Info playing;

int HumanMARInit(SubCharacter* scp);
void HumanMARFunction();
void shCharacterSetHumanMARLow(SubCharacter* scp);
int shCharacterHumanMARAnimeSet(SubCharacter* scp, int anime_id);
void shCharacterMariaWorkInit();
void shCharacterMariaWorkInitAtGameStart();

// 
// Start address: 0x220290
int HumanMARInit(SubCharacter* scp)
{
	// Line 67, Address: 0x220290, Func Offset: 0
	// Line 69, Address: 0x2202a0, Func Offset: 0x10
	// Line 71, Address: 0x2202ac, Func Offset: 0x1c
	// Line 73, Address: 0x2202bc, Func Offset: 0x2c
	// Line 75, Address: 0x2202c8, Func Offset: 0x38
	// Line 76, Address: 0x2202d4, Func Offset: 0x44
	// Line 77, Address: 0x2202d8, Func Offset: 0x48
	// Func End, Address: 0x2202ec, Func Offset: 0x5c
}

// 
// Start address: 0x2202f0
void SubCharacter::HumanMARFunction()
{
	float rot[4];
	float pos[4];
	_AnimeInfo* aip;
	// Line 89, Address: 0x2202f0, Func Offset: 0
	// Line 97, Address: 0x220304, Func Offset: 0x14
	// Line 104, Address: 0x220324, Func Offset: 0x34
	// Line 105, Address: 0x220330, Func Offset: 0x40
	// Line 109, Address: 0x22033c, Func Offset: 0x4c
	// Line 111, Address: 0x220344, Func Offset: 0x54
	// Line 112, Address: 0x220354, Func Offset: 0x64
	// Line 113, Address: 0x22035c, Func Offset: 0x6c
	// Line 121, Address: 0x220384, Func Offset: 0x94
	// Line 122, Address: 0x220390, Func Offset: 0xa0
	// Line 126, Address: 0x22039c, Func Offset: 0xac
	// Line 128, Address: 0x2203a8, Func Offset: 0xb8
	// Line 133, Address: 0x2203b4, Func Offset: 0xc4
	// Line 139, Address: 0x2203bc, Func Offset: 0xcc
	// Line 142, Address: 0x2203cc, Func Offset: 0xdc
	// Line 146, Address: 0x2203d8, Func Offset: 0xe8
	// Line 147, Address: 0x2203e0, Func Offset: 0xf0
	// Line 148, Address: 0x2203ec, Func Offset: 0xfc
	// Line 149, Address: 0x2203f8, Func Offset: 0x108
	// Line 150, Address: 0x220404, Func Offset: 0x114
	// Line 151, Address: 0x220410, Func Offset: 0x120
	// Line 152, Address: 0x22041c, Func Offset: 0x12c
	// Line 165, Address: 0x220424, Func Offset: 0x134
	// Func End, Address: 0x22043c, Func Offset: 0x14c
}

// 
// Start address: 0x220440
void shCharacterSetHumanMARLow(SubCharacter* scp)
{
	// Line 181, Address: 0x220440, Func Offset: 0
	// Line 182, Address: 0x220450, Func Offset: 0x10
	// Line 183, Address: 0x220460, Func Offset: 0x20
	// Line 186, Address: 0x220468, Func Offset: 0x28
	// Line 187, Address: 0x22047c, Func Offset: 0x3c
	// Line 192, Address: 0x220490, Func Offset: 0x50
	// Func End, Address: 0x2204a4, Func Offset: 0x64
}

// 
// Start address: 0x2204b0
int shCharacterHumanMARAnimeSet(SubCharacter* scp, int anime_id)
{
	_AnimeInfo* aip;
	// Line 205, Address: 0x2204b0, Func Offset: 0
	// Line 209, Address: 0x2204cc, Func Offset: 0x1c
	// Line 210, Address: 0x2204e8, Func Offset: 0x38
	// Line 211, Address: 0x2204f8, Func Offset: 0x48
	// Line 212, Address: 0x220514, Func Offset: 0x64
	// Line 219, Address: 0x220550, Func Offset: 0xa0
	// Line 221, Address: 0x22055c, Func Offset: 0xac
	// Line 223, Address: 0x220560, Func Offset: 0xb0
	// Func End, Address: 0x22057c, Func Offset: 0xcc
}

// 
// Start address: 0x220580
void shCharacterMariaWorkInit()
{
	// Line 263, Address: 0x220580, Func Offset: 0
	// Line 264, Address: 0x220588, Func Offset: 0x8
	// Line 265, Address: 0x22059c, Func Offset: 0x1c
	// Func End, Address: 0x2205ac, Func Offset: 0x2c
}

// 
// Start address: 0x2205b0
void shCharacterMariaWorkInitAtGameStart()
{
	// Line 274, Address: 0x2205b0, Func Offset: 0
	// Line 276, Address: 0x2205b8, Func Offset: 0x8
	// Line 279, Address: 0x2205f4, Func Offset: 0x44
	// Line 281, Address: 0x220608, Func Offset: 0x58
	// Line 284, Address: 0x220610, Func Offset: 0x60
	// Line 290, Address: 0x220624, Func Offset: 0x74
	// Line 294, Address: 0x220630, Func Offset: 0x80
	// Line 295, Address: 0x220638, Func Offset: 0x88
	// Line 296, Address: 0x220640, Func Offset: 0x90
	// Line 297, Address: 0x220648, Func Offset: 0x98
	// Line 300, Address: 0x220650, Func Offset: 0xa0
	// Line 301, Address: 0x220664, Func Offset: 0xb4
	// Line 302, Address: 0x220678, Func Offset: 0xc8
	// Line 306, Address: 0x22068c, Func Offset: 0xdc
	// Line 307, Address: 0x2206a0, Func Offset: 0xf0
	// Line 308, Address: 0x2206b4, Func Offset: 0x104
	// Line 309, Address: 0x2206c8, Func Offset: 0x118
	// Line 312, Address: 0x2206dc, Func Offset: 0x12c
	// Line 315, Address: 0x2206f0, Func Offset: 0x140
	// Func End, Address: 0x220700, Func Offset: 0x150
}

