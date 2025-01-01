typedef struct _anon0;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct shSkelton;
typedef struct SubCharacter;
typedef struct _CL_VHIT_WALL;
typedef struct Playing_Info;
typedef struct _CL_HITPOLY_HEAD;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef union _anon1;
typedef struct _CL_VHIT_RESULT;
typedef union _anon2;
typedef struct _anon3;

typedef void(*type_7)(SubCharacter*);
typedef void(*type_8)(SubCharacter*);

typedef float type_0[4];
typedef float type_1[4][4];
typedef float type_2[4];
typedef float type_3[7];
typedef shAttackInfo type_4[66];
typedef unsigned int type_5[7];
typedef float type_6[4];
typedef unsigned char type_9[4];

struct _anon0
{
	float d[4][4];
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

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon0 src_m;
	_anon3 src_t;
	_anon0 des_m;
	_anon3 des_t;
	_anon3 axis;
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
	_anon3 pos;
	_anon3 rot;
	_anon3 pos_spd;
	_anon3 rot_spd;
	_anon0 mat;
	shSkelton* sk_top;
	float eye_y;
	float center_y;
	float spd;
	float spd_org;
	float spd_y;
	float spd_roty;
	float grnd_normal[4];
	float grnd_height;
	_anon3 b_pos;
	_anon3 b_rot;
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
	_anon1 hit_check;
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

union _anon1
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon2 hobj;
};

union _anon2
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct _anon3
{
	float x;
	float y;
	float z;
	float w;
};

shAttackInfo sh2_attack_list[66];
Playing_Info playing;

void GameTimerCountUp();
void GameMoveDistanceCountUp(SubCharacter* scp, int status);
void GameKillEnemyCountUp(unsigned short atk);
void GameBoatTimerCountUp();
void GameBoatMaxSpeedCheck(float spd);
void GameItemGetCountUp();
void GameJamesDamagedCountUp(float damage);
void GameMariaDamagedCountUp(unsigned short atk, float damage);
unsigned int GameCalcRankSaveCount();
unsigned int GameCalcRankEndingKind();
unsigned int GameCalcRankBattleLevel();
unsigned int GameCalcRankRiddleLevel();
unsigned int GameCalcRankItemGet();
unsigned int GameCalcRankHiddenItemGet();
unsigned int GameCalcRankKillByShot();
unsigned int GameCalcRankKillByFight();
unsigned int GameCalcRankClearTime();
unsigned int GameCalcRankBoatClearTime();
unsigned int GameCalcRankJamesDamage();
unsigned int GameCalcRankTotal();
void GameSavePreviousTotalRank();
void GameSaveSprayPower();

// 
// Start address: 0x2902d0
void GameTimerCountUp()
{
	// Line 21, Address: 0x2902d0, Func Offset: 0
	// Line 23, Address: 0x2902d8, Func Offset: 0x8
	// Line 24, Address: 0x2902f4, Func Offset: 0x24
	// Func End, Address: 0x290304, Func Offset: 0x34
}

// 
// Start address: 0x290310
void GameMoveDistanceCountUp(SubCharacter* scp, int status)
{
	float distance;
	// Line 38, Address: 0x290310, Func Offset: 0
	// Line 40, Address: 0x290344, Func Offset: 0x34
	// Line 41, Address: 0x290360, Func Offset: 0x50
	// Line 48, Address: 0x29038c, Func Offset: 0x7c
	// Line 49, Address: 0x2903a0, Func Offset: 0x90
	// Line 51, Address: 0x2903a8, Func Offset: 0x98
	// Line 55, Address: 0x2903bc, Func Offset: 0xac
	// Func End, Address: 0x2903c4, Func Offset: 0xb4
}

// 
// Start address: 0x2903d0
void GameKillEnemyCountUp(unsigned short atk)
{
	// Line 64, Address: 0x2903d0, Func Offset: 0
	// Line 69, Address: 0x29040c, Func Offset: 0x3c
	// Line 70, Address: 0x290420, Func Offset: 0x50
	// Line 72, Address: 0x290428, Func Offset: 0x58
	// Line 75, Address: 0x29043c, Func Offset: 0x6c
	// Func End, Address: 0x290444, Func Offset: 0x74
}

// 
// Start address: 0x290450
void GameBoatTimerCountUp()
{
	// Line 83, Address: 0x290450, Func Offset: 0
	// Line 84, Address: 0x290458, Func Offset: 0x8
	// Line 85, Address: 0x290474, Func Offset: 0x24
	// Func End, Address: 0x290484, Func Offset: 0x34
}

// 
// Start address: 0x290490
void GameBoatMaxSpeedCheck(float spd)
{
	// Line 94, Address: 0x290490, Func Offset: 0
	// Line 95, Address: 0x2904a8, Func Offset: 0x18
	// Line 96, Address: 0x2904b0, Func Offset: 0x20
	// Func End, Address: 0x2904b8, Func Offset: 0x28
}

// 
// Start address: 0x2904c0
void GameItemGetCountUp()
{
	// Line 105, Address: 0x2904c0, Func Offset: 0
	// Line 106, Address: 0x2904d4, Func Offset: 0x14
	// Func End, Address: 0x2904dc, Func Offset: 0x1c
}

// 
// Start address: 0x2904e0
void GameJamesDamagedCountUp(float damage)
{
	// Line 115, Address: 0x2904e0, Func Offset: 0
	// Line 116, Address: 0x2904f4, Func Offset: 0x14
	// Func End, Address: 0x2904fc, Func Offset: 0x1c
}

// 
// Start address: 0x290500
void GameMariaDamagedCountUp(unsigned short atk, float damage)
{
	// Line 126, Address: 0x290500, Func Offset: 0
	// Line 127, Address: 0x290510, Func Offset: 0x10
	// Line 128, Address: 0x290524, Func Offset: 0x24
	// Line 129, Address: 0x29052c, Func Offset: 0x2c
	// Line 131, Address: 0x290540, Func Offset: 0x40
	// Func End, Address: 0x290548, Func Offset: 0x48
}

// 
// Start address: 0x290550
unsigned int GameCalcRankSaveCount()
{
	// Line 179, Address: 0x290550, Func Offset: 0
	// Line 180, Address: 0x290570, Func Offset: 0x20
	// Line 181, Address: 0x290588, Func Offset: 0x38
	// Line 182, Address: 0x2905a0, Func Offset: 0x50
	// Line 183, Address: 0x2905b8, Func Offset: 0x68
	// Line 185, Address: 0x2905bc, Func Offset: 0x6c
	// Func End, Address: 0x2905c4, Func Offset: 0x74
}

// 
// Start address: 0x2905d0
unsigned int GameCalcRankEndingKind()
{
	unsigned int result;
	// Line 222, Address: 0x2905d0, Func Offset: 0
	// Line 224, Address: 0x2905d4, Func Offset: 0x4
	// Line 225, Address: 0x2905ec, Func Offset: 0x1c
	// Line 226, Address: 0x2905fc, Func Offset: 0x2c
	// Line 227, Address: 0x29060c, Func Offset: 0x3c
	// Line 228, Address: 0x29061c, Func Offset: 0x4c
	// Line 231, Address: 0x29062c, Func Offset: 0x5c
	// Func End, Address: 0x290634, Func Offset: 0x64
}

// 
// Start address: 0x290640
unsigned int GameCalcRankBattleLevel()
{
	// Line 247, Address: 0x290640, Func Offset: 0
	// Line 248, Address: 0x290648, Func Offset: 0x8
	// Line 250, Address: 0x290684, Func Offset: 0x44
	// Line 253, Address: 0x290690, Func Offset: 0x50
	// Line 256, Address: 0x290698, Func Offset: 0x58
	// Line 259, Address: 0x2906a0, Func Offset: 0x60
	// Line 264, Address: 0x2906ac, Func Offset: 0x6c
	// Line 267, Address: 0x2906d4, Func Offset: 0x94
	// Func End, Address: 0x2906e4, Func Offset: 0xa4
}

// 
// Start address: 0x2906f0
unsigned int GameCalcRankRiddleLevel()
{
	// Line 280, Address: 0x2906f0, Func Offset: 0
	// Line 281, Address: 0x2906f8, Func Offset: 0x8
	// Line 283, Address: 0x290728, Func Offset: 0x38
	// Line 286, Address: 0x290730, Func Offset: 0x40
	// Line 289, Address: 0x29073c, Func Offset: 0x4c
	// Line 292, Address: 0x290748, Func Offset: 0x58
	// Line 295, Address: 0x29076c, Func Offset: 0x7c
	// Func End, Address: 0x29077c, Func Offset: 0x8c
}

// 
// Start address: 0x290780
unsigned int GameCalcRankItemGet()
{
	// Line 309, Address: 0x290780, Func Offset: 0
	// Line 310, Address: 0x2907c0, Func Offset: 0x40
	// Func End, Address: 0x2907c8, Func Offset: 0x48
}

// 
// Start address: 0x2907d0
unsigned int GameCalcRankHiddenItemGet()
{
	unsigned int result;
	// Line 324, Address: 0x2907d0, Func Offset: 0
	// Line 326, Address: 0x2907d4, Func Offset: 0x4
	// Line 327, Address: 0x2907ec, Func Offset: 0x1c
	// Line 328, Address: 0x2907fc, Func Offset: 0x2c
	// Line 331, Address: 0x29080c, Func Offset: 0x3c
	// Func End, Address: 0x290814, Func Offset: 0x44
}

// 
// Start address: 0x290820
unsigned int GameCalcRankKillByShot()
{
	// Line 345, Address: 0x290820, Func Offset: 0
	// Line 346, Address: 0x290860, Func Offset: 0x40
	// Func End, Address: 0x290868, Func Offset: 0x48
}

// 
// Start address: 0x290870
unsigned int GameCalcRankKillByFight()
{
	// Line 360, Address: 0x290870, Func Offset: 0
	// Line 361, Address: 0x2908b0, Func Offset: 0x40
	// Func End, Address: 0x2908b8, Func Offset: 0x48
}

// 
// Start address: 0x2908c0
unsigned int GameCalcRankClearTime()
{
	float time;
	// Line 381, Address: 0x2908c0, Func Offset: 0
	// Line 383, Address: 0x2908d4, Func Offset: 0x14
	// Line 384, Address: 0x2908fc, Func Offset: 0x3c
	// Line 385, Address: 0x290924, Func Offset: 0x64
	// Line 386, Address: 0x29094c, Func Offset: 0x8c
	// Line 387, Address: 0x290974, Func Offset: 0xb4
	// Line 389, Address: 0x290994, Func Offset: 0xd4
	// Func End, Address: 0x29099c, Func Offset: 0xdc
}

// 
// Start address: 0x2909a0
unsigned int GameCalcRankBoatClearTime()
{
	// Line 407, Address: 0x2909a0, Func Offset: 0
	// Line 408, Address: 0x2909d0, Func Offset: 0x30
	// Line 409, Address: 0x2909f8, Func Offset: 0x58
	// Line 410, Address: 0x290a20, Func Offset: 0x80
	// Line 411, Address: 0x290a48, Func Offset: 0xa8
	// Line 413, Address: 0x290a68, Func Offset: 0xc8
	// Func End, Address: 0x290a70, Func Offset: 0xd0
}

// 
// Start address: 0x290a70
unsigned int GameCalcRankJamesDamage()
{
	// Line 431, Address: 0x290a70, Func Offset: 0
	// Line 432, Address: 0x290aa0, Func Offset: 0x30
	// Line 433, Address: 0x290ac8, Func Offset: 0x58
	// Line 434, Address: 0x290af0, Func Offset: 0x80
	// Line 435, Address: 0x290b18, Func Offset: 0xa8
	// Line 437, Address: 0x290b38, Func Offset: 0xc8
	// Func End, Address: 0x290b40, Func Offset: 0xd0
}

// 
// Start address: 0x290b40
unsigned int GameCalcRankTotal()
{
	// Line 446, Address: 0x290b40, Func Offset: 0
	// Line 447, Address: 0x290b4c, Func Offset: 0xc
	// Line 461, Address: 0x290bd0, Func Offset: 0x90
	// Func End, Address: 0x290be4, Func Offset: 0xa4
}

// 
// Start address: 0x290bf0
void GameSavePreviousTotalRank()
{
	// Line 561, Address: 0x290bf0, Func Offset: 0
	// Line 562, Address: 0x290bf8, Func Offset: 0x8
	// Line 563, Address: 0x290c08, Func Offset: 0x18
	// Func End, Address: 0x290c18, Func Offset: 0x28
}

// 
// Start address: 0x290c20
void GameSaveSprayPower()
{
	// Line 580, Address: 0x290c20, Func Offset: 0
	// Line 581, Address: 0x290c48, Func Offset: 0x28
	// Line 582, Address: 0x290c64, Func Offset: 0x44
	// Line 583, Address: 0x290c84, Func Offset: 0x64
	// Line 584, Address: 0x290c90, Func Offset: 0x70
	// Func End, Address: 0x290c98, Func Offset: 0x78
}

