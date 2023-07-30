typedef struct EnPAP_DATA;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _AnimeInfo;
typedef struct shAttackInfo;
typedef struct SubCharacter;
typedef struct _CL_VHIT_CHARA;
typedef union _anon0;
typedef struct EnNIK_DATA;
typedef struct shSkelton;
typedef struct _CL_VHIT_RESULT;
typedef union _anon1;
typedef struct EnBOS_DATA;
typedef struct EnSCU_DATA;
typedef struct EnAMBUSH_DATA;
typedef struct EnONI_DATA;
typedef struct _anon2;
typedef struct EnPATH_DATA;
typedef struct EnRED_DATA;
typedef struct EnCOMMUNICATION;
typedef struct EnLOCAL_DATA;
typedef struct _anon3;
typedef struct EnINS_DATA;
typedef struct EnIKE_DATA;
typedef struct EnARM_DATA;
typedef struct EnTYU_DATA;
typedef struct EnNSE_DATA;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct EnMKN_DATA;
typedef struct EnEDB_DATA;
typedef struct _CL_VHIT_WALL;

typedef void(*type_0)(SubCharacter*);
typedef void(*type_6)(SubCharacter*);
typedef void(*type_8)(SubCharacter*);

typedef unsigned char type_1[20];
typedef _AnimeInfo type_2[21];
typedef int type_3[12];
typedef shAttackInfo type_4[66];
typedef unsigned char type_5[14];
typedef unsigned char type_7[69];
typedef float type_9[4];
typedef float type_10[4][4];
typedef _AnimeInfo type_11[12];
typedef unsigned char type_12[4];
typedef unsigned char type_13[14];
typedef float type_14[4];
typedef float type_15[4];
typedef unsigned char type_16[97];
typedef char type_17[3];

struct EnPAP_DATA
{
	float target[4];
	char dc;
	char dcm;
	char signs;
	char count;
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

	void EnemyIKEFunction();
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

struct EnNIK_DATA
{
	float swing[4];
	float acc[4];
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

struct EnBOS_DATA
{
	float target[4];
	void* insect_dp;
	int near_count;
	float dist;
	float move_speed;
	float rot_speed;
	float rot_add;
	float y_speed;
	int mode;
	int end_count;
	char signs;
	char count;
};

struct EnSCU_DATA
{
	float stpos[4];
	float target[4];
	EnAMBUSH_DATA* ambush;
	int count;
	char dc;
	char dcm;
};

struct EnAMBUSH_DATA
{
	float pl_x_min;
	float pl_z_min;
	float pl_x_max;
	float pl_z_max;
	float pos_x;
	float pos_z;
	float dir;
};

struct EnONI_DATA
{
	char id;
	char check;
	char warp;
	short timer2;
	void* other;
	void* tp;
};

struct _anon2
{
	float x;
	float y;
	float z;
	float w;
};

struct EnPATH_DATA
{
	float angle;
	float markangle;
	float dist;
	char step;
	char deadend;
	short timer;
};

struct EnRED_DATA
{
	int attack_count;
	int boss_timer;
	void* tp;
};

struct EnCOMMUNICATION
{
	float pos[4];
	int kind;
	int type;
	int time;
	float dist;
};

struct EnLOCAL_DATA
{
	char kind;
	char kind2;
	char mlv;
	char slv;
	char sslv;
	char type;
	unsigned char weight;
	char lie;
	char d_count;
	char last_atk;
	char anim;
	unsigned char anim_loop;
	short anim_s;
	unsigned int flag;
	int anim_n;
	int anim_step;
	SubCharacter* scp;
	EnPATH_DATA path;
	float vec[4];
	float endurance;
	float endurance_max;
	float hb_x;
	float hb_z;
	float hb_s;
	float tx;
	float tz;
	float tx2;
	float tz2;
	float trx;
	float trz;
	float size;
	float new_size;
	float tall;
	float new_tall;
	float center_y;
	float new_center;
	float eye_y;
	float new_eye;
	float p_dist;
	float radio;
	int timer;
	int sound_wait;
	int randseed;
	union
	{
		EnSCU_DATA scu;
		EnMKN_DATA mkn;
		EnTYU_DATA tyu;
		EnRED_DATA red;
		EnONI_DATA oni;
		EnNSE_DATA nse;
		EnIKE_DATA ike;
		EnPAP_DATA pap;
		EnEDB_DATA edb;
		EnARM_DATA arm;
		EnBOS_DATA bos;
		EnNIK_DATA nik;
		EnINS_DATA ins;
	};
};

struct _anon3
{
	float d[4][4];
};

struct EnINS_DATA
{
	float view_rot[4];
	float rot_add[4];
	void* leader;
	float def_speed;
	float move_speed;
	float speed_add;
	float rot_speed;
	float y_speed;
	float twin_dist;
	float dist_add;
};

struct EnIKE_DATA
{
	float handpos[4];
	float swing;
	int near_count;
	float dist;
	char direc;
	char signs;
	char count;
	char pipe_count;
};

struct EnARM_DATA
{
	float hand_pos[4];
	float old_pos[4];
	int near_count;
	float dist;
	char arm;
	char attack;
	char scount;
	char signs;
	char count;
	char dir;
};

struct EnTYU_DATA
{
	float point[4];
	EnCOMMUNICATION* tcomm;
	int near_count;
	float dist;
	short count;
	char moves;
};

struct EnNSE_DATA
{
	float speed;
	float tspeed;
	char signs;
	char count;
	char dc;
	char dcm;
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

struct EnMKN_DATA
{
	float stpos[4];
	float target[4];
	void* tp;
	float fall;
	short frame;
	char dc;
	char dcm;
};

struct EnEDB_DATA
{
	float target[4];
	float rot;
	float arot;
	float speed;
	char bullet;
	char mark[3];
	char mark_n;
	char turn;
	char afford;
	char ccount;
	char pcount;
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
_AnimeInfo ike_anim[21];
_AnimeInfo d_ike_anim[12];
int dike_anime_adr_list[12];
void(*EnemyIKEFunction)(SubCharacter*);

int EnemyIKEInit(SubCharacter* scp);
void EnemyIKEFunction();
void shCharacterSetEnemyIKELow(SubCharacter* scp);
int shCharacterEnemyIKEAnimeSet(SubCharacter* scp, int anime_id);
int shCharacterEnemyIKEAnimeSetP(SubCharacter* scp, int anime_id, int comp);
void shGetEnemyIKEAttackPos(SubCharacter* scp, float* s_pos, float* s_vec);

// 
// Start address: 0x105130
int EnemyIKEInit(SubCharacter* scp)
{
	// Line 72, Address: 0x105130, Func Offset: 0
	// Line 73, Address: 0x105138, Func Offset: 0x8
	// Line 74, Address: 0x10513c, Func Offset: 0xc
	// Func End, Address: 0x105144, Func Offset: 0x14
}

// 
// Start address: 0x105150
void SubCharacter::EnemyIKEFunction()
{
	EnLOCAL_DATA* dp;
	float rot[4];
	float pos[4];
	// Line 86, Address: 0x105150, Func Offset: 0
	// Line 90, Address: 0x105160, Func Offset: 0x10
	// Line 96, Address: 0x105180, Func Offset: 0x30
	// Line 97, Address: 0x10518c, Func Offset: 0x3c
	// Line 99, Address: 0x105198, Func Offset: 0x48
	// Line 101, Address: 0x1051a0, Func Offset: 0x50
	// Line 103, Address: 0x1051b0, Func Offset: 0x60
	// Line 105, Address: 0x1051c0, Func Offset: 0x70
	// Line 114, Address: 0x1051d4, Func Offset: 0x84
	// Line 117, Address: 0x1051e4, Func Offset: 0x94
	// Line 118, Address: 0x1051fc, Func Offset: 0xac
	// Line 119, Address: 0x105200, Func Offset: 0xb0
	// Line 120, Address: 0x10520c, Func Offset: 0xbc
	// Line 121, Address: 0x105214, Func Offset: 0xc4
	// Line 127, Address: 0x105218, Func Offset: 0xc8
	// Line 128, Address: 0x105224, Func Offset: 0xd4
	// Line 130, Address: 0x105230, Func Offset: 0xe0
	// Line 137, Address: 0x10523c, Func Offset: 0xec
	// Func End, Address: 0x105250, Func Offset: 0x100
}

// 
// Start address: 0x105250
void shCharacterSetEnemyIKELow(SubCharacter* scp)
{
	// Line 153, Address: 0x105250, Func Offset: 0
	// Line 154, Address: 0x105258, Func Offset: 0x8
	// Line 155, Address: 0x105268, Func Offset: 0x18
	// Func End, Address: 0x105278, Func Offset: 0x28
}

// 
// Start address: 0x105280
int shCharacterEnemyIKEAnimeSet(SubCharacter* scp, int anime_id)
{
	_AnimeInfo* aip;
	// Line 168, Address: 0x105280, Func Offset: 0
	// Line 171, Address: 0x10529c, Func Offset: 0x1c
	// Line 172, Address: 0x1052b8, Func Offset: 0x38
	// Line 173, Address: 0x1052c8, Func Offset: 0x48
	// Line 174, Address: 0x1052e4, Func Offset: 0x64
	// Line 182, Address: 0x105320, Func Offset: 0xa0
	// Line 184, Address: 0x10532c, Func Offset: 0xac
	// Line 186, Address: 0x105330, Func Offset: 0xb0
	// Func End, Address: 0x10534c, Func Offset: 0xcc
}

// 
// Start address: 0x105350
int shCharacterEnemyIKEAnimeSetP(SubCharacter* scp, int anime_id, int comp)
{
	_AnimeInfo* aip;
	// Line 199, Address: 0x105350, Func Offset: 0
	// Line 203, Address: 0x105370, Func Offset: 0x20
	// Line 206, Address: 0x10539c, Func Offset: 0x4c
	// Line 207, Address: 0x1053b8, Func Offset: 0x68
	// Line 214, Address: 0x105400, Func Offset: 0xb0
	// Line 216, Address: 0x10540c, Func Offset: 0xbc
	// Line 218, Address: 0x105410, Func Offset: 0xc0
	// Func End, Address: 0x10542c, Func Offset: 0xdc
}

// 
// Start address: 0x105430
void shGetEnemyIKEAttackPos(SubCharacter* scp, float* s_pos, float* s_vec)
{
	shSkelton* stp;
	float wep_range[4];
	int sk_num;
	int i;
	_anon3 mat;
	_anon3 lw_mat;
	float vec[4];
	float pos1[4];
	float pos0[4];
	// Line 231, Address: 0x105430, Func Offset: 0
	// Line 239, Address: 0x10544c, Func Offset: 0x1c
	// Line 242, Address: 0x105460, Func Offset: 0x30
	// Line 243, Address: 0x105490, Func Offset: 0x60
	// Line 245, Address: 0x105494, Func Offset: 0x64
	// Line 246, Address: 0x105498, Func Offset: 0x68
	// Line 247, Address: 0x1054a4, Func Offset: 0x74
	// Line 250, Address: 0x1054c4, Func Offset: 0x94
	// Line 251, Address: 0x1054f4, Func Offset: 0xc4
	// Line 252, Address: 0x1054fc, Func Offset: 0xcc
	// Line 253, Address: 0x105504, Func Offset: 0xd4
	// Line 254, Address: 0x10550c, Func Offset: 0xdc
	// Line 255, Address: 0x105514, Func Offset: 0xe4
	// Line 256, Address: 0x105518, Func Offset: 0xe8
	// Line 258, Address: 0x105520, Func Offset: 0xf0
	// Line 259, Address: 0x105534, Func Offset: 0x104
	// Line 263, Address: 0x105540, Func Offset: 0x110
	// Line 264, Address: 0x105554, Func Offset: 0x124
	// Line 265, Address: 0x105564, Func Offset: 0x134
	// Line 266, Address: 0x105574, Func Offset: 0x144
	// Line 267, Address: 0x105584, Func Offset: 0x154
	// Line 268, Address: 0x10558c, Func Offset: 0x15c
	// Line 269, Address: 0x1055a0, Func Offset: 0x170
	// Line 270, Address: 0x1055b0, Func Offset: 0x180
	// Line 271, Address: 0x1055c0, Func Offset: 0x190
	// Line 272, Address: 0x1055d0, Func Offset: 0x1a0
	// Line 273, Address: 0x1055d4, Func Offset: 0x1a4
	// Line 274, Address: 0x1055f8, Func Offset: 0x1c8
	// Func End, Address: 0x105614, Func Offset: 0x1e4
}

