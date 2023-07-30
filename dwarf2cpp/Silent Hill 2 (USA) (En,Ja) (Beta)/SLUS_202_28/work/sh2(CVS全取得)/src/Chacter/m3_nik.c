typedef struct _CL_HITPOLY_HEAD;
typedef struct EnAMBUSH_DATA;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef union _anon0;
typedef struct SubCharacter;
typedef struct EnINS_DATA;
typedef struct EnIKE_DATA;
typedef struct _CL_VHIT_RESULT;
typedef union _anon1;
typedef struct EnARM_DATA;
typedef struct EnTYU_DATA;
typedef struct EnNSE_DATA;
typedef struct EnLOCAL_DATA;
typedef struct EnCOMMUNICATION;
typedef struct shSkelton;
typedef struct _anon2;
typedef struct _USXY;
typedef struct shClusterAnime;
typedef struct _anon3;
typedef struct EnMKN_DATA;
typedef struct _SXY;
typedef struct EnEDB_DATA;
typedef struct _IXY;
typedef struct SubCharacterDisp;
typedef struct shAnime3d;
typedef struct EnPAP_DATA;
typedef struct EnNIK_DATA;
typedef struct shBattleFight;
typedef struct shStayObjectSettingData;
typedef struct shBattleShot;
typedef struct _AnimeInfo;
typedef struct EnBOS_DATA;
typedef struct EnSCU_DATA;
typedef struct shBattleArea;
typedef struct EnONI_DATA;
typedef struct shBattleInfo;
typedef struct EnPATH_DATA;
typedef struct EnRED_DATA;
typedef struct _CL_VHIT_WALL;

typedef void(*type_5)(SubCharacter*);
typedef void(*type_7)(SubCharacter*);
typedef void(*type_15)(SubCharacter*);

typedef short type_0[11];
typedef unsigned char type_1[20];
typedef shAttackInfo type_2[66];
typedef unsigned char type_3[14];
typedef _AnimeInfo type_4[4];
typedef unsigned char type_6[69];
typedef float type_8[4];
typedef float type_9[4][4];
typedef unsigned char type_10[4];
typedef char type_11[3];
typedef char type_12[128];
typedef void* type_13[3];
typedef unsigned char type_14[14];
typedef float type_16[4];
typedef float type_17[4];
typedef shStayObjectSettingData type_18[11];
typedef unsigned char type_19[97];
typedef short type_20[11];

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
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

	void ObjectNIKFunction();
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

struct EnCOMMUNICATION
{
	float pos[4];
	int kind;
	int type;
	int time;
	float dist;
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

struct _USXY
{
	unsigned short x;
	unsigned short y;
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

struct _anon3
{
	float d[4][4];
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

struct _SXY
{
	short x;
	short y;
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

struct EnPAP_DATA
{
	float target[4];
	char dc;
	char dcm;
	char signs;
	char count;
};

struct EnNIK_DATA
{
	float swing[4];
	float acc[4];
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct shStayObjectSettingData
{
	int chara_id;
	int bg_name_id;
	int index;
	_anon2 scale;
	_anon2 rot;
	_anon2 trans;
};

struct shBattleShot
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

struct shBattleArea
{
	float center;
	float radius;
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
_AnimeInfo nik_anim[4];
shStayObjectSettingData nik_pos_data[11];
void(*ObjectNIKFunction)(SubCharacter*);

int ObjectNIKInit();
void ObjectNIKFunction();
void shCharacterSetObjectNIKLow(SubCharacter* scp);

// 
// Start address: 0x221c40
int ObjectNIKInit()
{
	// Line 50, Address: 0x221c40, Func Offset: 0
	// Line 51, Address: 0x221c44, Func Offset: 0x4
	// Func End, Address: 0x221c4c, Func Offset: 0xc
}

// 
// Start address: 0x221c50
void SubCharacter::ObjectNIKFunction()
{
	char buf[128];
	SubCharacterDisp* scp_d;
	EnLOCAL_DATA* dp;
	float rot[4];
	float pos[4];
	short init_anime[11];
	short init_frame[11];
	_AnimeInfo* aip;
	// Line 63, Address: 0x221c50, Func Offset: 0
	// Line 68, Address: 0x221c64, Func Offset: 0x14
	// Line 81, Address: 0x221c88, Func Offset: 0x38
	// Line 100, Address: 0x221cac, Func Offset: 0x5c
	// Line 106, Address: 0x221ccc, Func Offset: 0x7c
	// Line 107, Address: 0x221cd8, Func Offset: 0x88
	// Line 109, Address: 0x221ce4, Func Offset: 0x94
	// Line 110, Address: 0x221cec, Func Offset: 0x9c
	// Line 113, Address: 0x221cf8, Func Offset: 0xa8
	// Line 114, Address: 0x221d24, Func Offset: 0xd4
	// Line 123, Address: 0x221d4c, Func Offset: 0xfc
	// Line 125, Address: 0x221d74, Func Offset: 0x124
	// Line 128, Address: 0x221d84, Func Offset: 0x134
	// Line 129, Address: 0x221d9c, Func Offset: 0x14c
	// Line 130, Address: 0x221da0, Func Offset: 0x150
	// Line 131, Address: 0x221dac, Func Offset: 0x15c
	// Line 132, Address: 0x221db4, Func Offset: 0x164
	// Line 136, Address: 0x221db8, Func Offset: 0x168
	// Line 138, Address: 0x221dc4, Func Offset: 0x174
	// Line 140, Address: 0x221dcc, Func Offset: 0x17c
	// Line 144, Address: 0x221de0, Func Offset: 0x190
	// Line 145, Address: 0x221df8, Func Offset: 0x1a8
	// Line 151, Address: 0x221e14, Func Offset: 0x1c4
	// Func End, Address: 0x221e2c, Func Offset: 0x1dc
}

// 
// Start address: 0x221e30
void shCharacterSetObjectNIKLow(SubCharacter* scp)
{
	// Line 167, Address: 0x221e30, Func Offset: 0
	// Line 168, Address: 0x221e38, Func Offset: 0x8
	// Line 169, Address: 0x221e48, Func Offset: 0x18
	// Func End, Address: 0x221e58, Func Offset: 0x28
}

