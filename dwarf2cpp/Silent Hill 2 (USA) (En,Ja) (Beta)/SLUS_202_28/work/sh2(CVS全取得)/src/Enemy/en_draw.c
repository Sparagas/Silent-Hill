typedef struct _CL_CHARA_LIST;
typedef struct SubCharacter;
typedef struct shSkelton;
typedef struct EnBOS_DATA;
typedef struct EnSCU_DATA;
typedef struct EnAMBUSH_DATA;
typedef struct EnONI_DATA;
typedef struct shBattleFight;
typedef struct EnLOCAL_DATA;
typedef struct EnPATH_DATA;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct EnRED_DATA;
typedef struct EnCOMMUNICATION;
typedef struct shBattleInfo;
typedef struct SPACK_OT_DATA;
typedef struct EnFORBIDDENAREA;
typedef struct _CL_DYNAMICWALL_LIST;
typedef struct EnINS_DATA;
typedef struct EnIKE_DATA;
typedef struct _CL_HITPOLY_PLANE;
typedef struct EnSOUND_QUEUE;
typedef struct EnLOCAL_WORK;
typedef struct _CL_CLDHEADER;
typedef struct _CL_VHIT_WALL;
typedef struct _CL_HITPOLY_HEAD;
typedef struct EnARM_DATA;
typedef struct SPACK_ENV_DATA;
typedef struct shAttackInfo;
typedef struct EnTYU_DATA;
typedef struct _CL_VHIT_CHARA;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct EnNSE_DATA;
typedef union _anon0;
typedef struct SPACK_STATIC_DATA;
typedef struct _CL_VHIT_RESULT;
typedef struct _anon1;
typedef union _anon2;
typedef struct SPACK_DATA;
typedef struct Playing_Info;
typedef struct _anon3;
typedef struct EnMKN_DATA;
typedef struct _SH2_SYS;
typedef struct EnEDB_DATA;
typedef struct EnPAP_DATA;
typedef struct EnNIK_DATA;

typedef void(*type_2)(float*);
typedef void(*type_31)(SubCharacter*);
typedef void(*type_33)(SubCharacter*);

typedef unsigned int type_0[7];
typedef unsigned char type_1[4];
typedef unsigned char type_3[14];
typedef float type_4[4];
typedef unsigned char type_5[97];
typedef _CL_HITPOLY_PLANE* type_6[32];
typedef EnLOCAL_DATA type_7[32];
typedef EnCOMMUNICATION type_8[8];
typedef int type_9[2];
typedef EnFORBIDDENAREA type_10[2];
typedef EnSOUND_QUEUE type_11[8];
typedef _CL_CHARA_LIST type_12[32];
typedef _CL_CHARA_LIST type_13[32][2];
typedef unsigned char type_14[20];
typedef _CL_DYNAMICWALL_LIST type_15[2];
typedef float type_16[4][4];
typedef int type_17[16];
typedef unsigned char type_18[14];
typedef shAttackInfo type_19[66];
typedef float type_20[4];
typedef int type_21[16];
typedef float type_22[4][4];
typedef int type_23[16];
typedef int type_24[4];
typedef int type_25[16];
typedef unsigned int type_26[8];
typedef float type_27[4];
typedef int type_28[16];
typedef char type_29[3];
typedef float type_30[4][2];
typedef unsigned char type_32[69];
typedef float type_34[7];

struct _CL_CHARA_LIST
{
	_CL_HITPOLY_COLUMN col;
	_CL_HITPOLY_COLUMN wcol;
	SubCharacter* sc;
	float opos[4];
	float pos[4];
	float mvec[4];
	float wallcv[4];
	float mang;
	int wflg;
	float ccvec[4];
	short movflg;
	short batflg;
	void(*heightfunc)(float*);
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
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

struct EnPATH_DATA
{
	float angle;
	float markangle;
	float dist;
	char step;
	char deadend;
	short timer;
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

struct SPACK_OT_DATA
{
	unsigned short DmaQwc;
	unsigned short DmaId;
	void* Addr;
	unsigned int W;
	unsigned short VifQwc;
	unsigned char EnvID;
	unsigned char VifDirect;
};

struct EnFORBIDDENAREA
{
	float x0;
	float z0;
	float x1;
	float z1;
};

struct _CL_DYNAMICWALL_LIST
{
	int use;
	_CL_HITPOLY_PLANE* dw[32];
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

struct _CL_HITPOLY_PLANE
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
	float p[4][4];
};

struct EnSOUND_QUEUE
{
	SubCharacter* scp;
	int num;
	float vol;
	float time;
};

struct EnLOCAL_WORK
{
	EnLOCAL_DATA Data[32];
	EnCOMMUNICATION Communication[8];
	EnFORBIDDENAREA ForbiddenArea[2];
	EnSOUND_QUEUE SoundQueue[8];
	int CommunicationNum;
	int ForbiddenNum;
	int SoundQueueNum;
	unsigned int Status;
	EnLOCAL_DATA* This;
	_CL_VHIT_RESULT HitResult;
	int Max3DSounds;
	int ActiveEnemy;
};

struct _CL_CLDHEADER
{
	float sx;
	float sz;
	int b0size;
	int b1size;
	int b2size;
	int b3size;
	int csize;
	int disable;
	int b0ofs[16];
	int b1ofs[16];
	int b2ofs[16];
	int b3ofs[16];
	int clofs[16];
	unsigned int fldofs;
	unsigned int wldofs;
	unsigned int cedofs;
	unsigned int swdofs;
	unsigned int cldofs;
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
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

struct SPACK_ENV_DATA
{
	unsigned short DmaQwc;
	unsigned short DmaId;
	void* Addr;
	unsigned int pad1;
	unsigned short VifQwc;
	unsigned char pad2;
	unsigned char VifDirect;
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

struct EnTYU_DATA
{
	float point[4];
	EnCOMMUNICATION* tcomm;
	int near_count;
	float dist;
	short count;
	char moves;
};

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
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

struct EnNSE_DATA
{
	float speed;
	float tspeed;
	char signs;
	char count;
	char dc;
	char dcm;
};

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
};

struct SPACK_STATIC_DATA
{
	unsigned short GifNLOOP;
	unsigned short DmaQwc;
	unsigned int PRE_PRIM_FLG_NREG;
	unsigned long REGS;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon2 hobj;
};

struct _anon1
{
	float x;
	float y;
	float z;
	float w;
};

union _anon2
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct SPACK_DATA
{
	SPACK_OT_DATA** ot_top;
	SPACK_OT_DATA** ot_last;
	unsigned int ot_size;
	unsigned int ot_width;
	unsigned int w_ofs;
	unsigned int w_mini;
	unsigned int w_max;
	unsigned int envid;
	SPACK_OT_DATA* dma_top;
	SPACK_OT_DATA* dmabuf_pos;
	SPACK_ENV_DATA* env_top;
	unsigned long* pk_last;
	unsigned long* pos;
	short* ot_max;
	<unknown fundamental type (0xa510)>* packet;
	SPACK_STATIC_DATA* ps_top;
	unsigned long* pgiftag;
	unsigned long giftag_b;
	unsigned int flag;
	void* kick_top;
	void* old_lastpos;
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

struct _SH2_SYS
{
	unsigned int step[8];
	unsigned int pre_playable;
	int main_status;
	unsigned int soft_reset;
	unsigned int frame_cnt;
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

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
SPACK_DATA spack;
float view_rate;
_CL_CHARA_LIST clCharaList[32][2];
int clCharaListUse[2];
int clCharaListAct;
_CL_DYNAMICWALL_LIST clDynamicWallList[2];
int clDynamicWallListAct;
Playing_Info playing;
EnLOCAL_WORK enLocalWork;
_SH2_SYS Sh2sys;

void enDrawRadar();
void enDrawWall(float* wall_pos1, float* wall_pos2, float* ppos, float prot);
void enDrawColumn(float* column_pos, float size, float* ppos, float prot);
void enDrawTriangle(float* pos, float rot, unsigned int color, float size);
void enDrawBox(float* pos, float rot, unsigned int color, float size1, float size2);

// 
// Start address: 0x147850
void enDrawRadar()
{
	SubCharacter* mp;
	int n;
	int kind;
	int usemax;
	int act;
	int* ptr;
	_CL_HITPOLY_COLUMN* pl2;
	_CL_HITPOLY_COLUMN* clmn;
	_CL_HITPOLY_PLANE* pl;
	_CL_HITPOLY_PLANE* wall;
	_CL_CLDHEADER* ch;
	void* list_backup;
	void** cl_list;
	unsigned long c;
	float rot;
	float vec[4];
	float pr;
	float* ppos;
	int i;
	EnLOCAL_DATA* dp;
	// Line 957, Address: 0x147850, Func Offset: 0
	// Line 960, Address: 0x147880, Func Offset: 0x30
	// Line 966, Address: 0x14788c, Func Offset: 0x3c
	// Line 967, Address: 0x1478bc, Func Offset: 0x6c
	// Line 968, Address: 0x1478e8, Func Offset: 0x98
	// Line 969, Address: 0x1478fc, Func Offset: 0xac
	// Line 970, Address: 0x147918, Func Offset: 0xc8
	// Line 971, Address: 0x147920, Func Offset: 0xd0
	// Line 973, Address: 0x14793c, Func Offset: 0xec
	// Line 974, Address: 0x147948, Func Offset: 0xf8
	// Line 976, Address: 0x147950, Func Offset: 0x100
	// Line 980, Address: 0x14795c, Func Offset: 0x10c
	// Line 981, Address: 0x14797c, Func Offset: 0x12c
	// Line 982, Address: 0x1479b4, Func Offset: 0x164
	// Line 983, Address: 0x1479ec, Func Offset: 0x19c
	// Line 985, Address: 0x147a18, Func Offset: 0x1c8
	// Line 986, Address: 0x147a34, Func Offset: 0x1e4
	// Line 987, Address: 0x147a5c, Func Offset: 0x20c
	// Line 989, Address: 0x147a7c, Func Offset: 0x22c
	// Line 991, Address: 0x147a9c, Func Offset: 0x24c
	// Line 992, Address: 0x147ab8, Func Offset: 0x268
	// Line 993, Address: 0x147ae4, Func Offset: 0x294
	// Line 995, Address: 0x147b04, Func Offset: 0x2b4
	// Line 997, Address: 0x147b20, Func Offset: 0x2d0
	// Line 999, Address: 0x147b40, Func Offset: 0x2f0
	// Line 1001, Address: 0x147b5c, Func Offset: 0x30c
	// Line 1003, Address: 0x147b7c, Func Offset: 0x32c
	// Line 1005, Address: 0x147b98, Func Offset: 0x348
	// Line 1007, Address: 0x147bb8, Func Offset: 0x368
	// Line 1009, Address: 0x147bd4, Func Offset: 0x384
	// Line 1011, Address: 0x147bf0, Func Offset: 0x3a0
	// Line 1012, Address: 0x147c08, Func Offset: 0x3b8
	// Line 1016, Address: 0x147c54, Func Offset: 0x404
	// Line 1018, Address: 0x147c5c, Func Offset: 0x40c
	// Line 1019, Address: 0x147c64, Func Offset: 0x414
	// Line 1020, Address: 0x147c70, Func Offset: 0x420
	// Line 1021, Address: 0x147c90, Func Offset: 0x440
	// Line 1022, Address: 0x147ca8, Func Offset: 0x458
	// Line 1024, Address: 0x147cf0, Func Offset: 0x4a0
	// Line 1025, Address: 0x147d00, Func Offset: 0x4b0
	// Line 1026, Address: 0x147d0c, Func Offset: 0x4bc
	// Line 1027, Address: 0x147d1c, Func Offset: 0x4cc
	// Line 1028, Address: 0x147d24, Func Offset: 0x4d4
	// Line 1029, Address: 0x147d2c, Func Offset: 0x4dc
	// Line 1030, Address: 0x147d34, Func Offset: 0x4e4
	// Line 1031, Address: 0x147d38, Func Offset: 0x4e8
	// Line 1032, Address: 0x147d64, Func Offset: 0x514
	// Line 1040, Address: 0x147d68, Func Offset: 0x518
	// Line 1041, Address: 0x147d80, Func Offset: 0x530
	// Line 1043, Address: 0x147d88, Func Offset: 0x538
	// Line 1045, Address: 0x147db0, Func Offset: 0x560
	// Line 1047, Address: 0x147db8, Func Offset: 0x568
	// Line 1049, Address: 0x147df0, Func Offset: 0x5a0
	// Line 1051, Address: 0x147df8, Func Offset: 0x5a8
	// Line 1053, Address: 0x147e30, Func Offset: 0x5e0
	// Line 1057, Address: 0x147e38, Func Offset: 0x5e8
	// Line 1058, Address: 0x147e54, Func Offset: 0x604
	// Line 1060, Address: 0x147e5c, Func Offset: 0x60c
	// Line 1064, Address: 0x147e70, Func Offset: 0x620
	// Line 1066, Address: 0x147e84, Func Offset: 0x634
	// Line 1067, Address: 0x147e98, Func Offset: 0x648
	// Line 1068, Address: 0x147ea4, Func Offset: 0x654
	// Line 1069, Address: 0x147eac, Func Offset: 0x65c
	// Line 1071, Address: 0x147eb4, Func Offset: 0x664
	// Line 1072, Address: 0x147ebc, Func Offset: 0x66c
	// Line 1073, Address: 0x147ec4, Func Offset: 0x674
	// Line 1081, Address: 0x147edc, Func Offset: 0x68c
	// Line 1082, Address: 0x147ee0, Func Offset: 0x690
	// Line 1083, Address: 0x147ef0, Func Offset: 0x6a0
	// Line 1086, Address: 0x147f10, Func Offset: 0x6c0
	// Line 1087, Address: 0x147f18, Func Offset: 0x6c8
	// Line 1089, Address: 0x147f24, Func Offset: 0x6d4
	// Line 1090, Address: 0x147f2c, Func Offset: 0x6dc
	// Line 1091, Address: 0x147f38, Func Offset: 0x6e8
	// Line 1092, Address: 0x147f48, Func Offset: 0x6f8
	// Line 1093, Address: 0x147f50, Func Offset: 0x700
	// Line 1094, Address: 0x147f64, Func Offset: 0x714
	// Line 1095, Address: 0x147f70, Func Offset: 0x720
	// Line 1096, Address: 0x147f88, Func Offset: 0x738
	// Line 1097, Address: 0x147fa0, Func Offset: 0x750
	// Line 1098, Address: 0x147fb8, Func Offset: 0x768
	// Line 1099, Address: 0x147fc0, Func Offset: 0x770
	// Line 1100, Address: 0x147fd8, Func Offset: 0x788
	// Line 1101, Address: 0x147ff0, Func Offset: 0x7a0
	// Line 1102, Address: 0x148008, Func Offset: 0x7b8
	// Line 1104, Address: 0x148020, Func Offset: 0x7d0
	// Line 1105, Address: 0x148024, Func Offset: 0x7d4
	// Line 1106, Address: 0x148038, Func Offset: 0x7e8
	// Line 1108, Address: 0x14804c, Func Offset: 0x7fc
	// Line 1109, Address: 0x148054, Func Offset: 0x804
	// Line 1110, Address: 0x148060, Func Offset: 0x810
	// Line 1111, Address: 0x148070, Func Offset: 0x820
	// Line 1112, Address: 0x148078, Func Offset: 0x828
	// Line 1113, Address: 0x14808c, Func Offset: 0x83c
	// Line 1114, Address: 0x148098, Func Offset: 0x848
	// Line 1115, Address: 0x1480b0, Func Offset: 0x860
	// Line 1116, Address: 0x1480c8, Func Offset: 0x878
	// Line 1117, Address: 0x1480e0, Func Offset: 0x890
	// Line 1118, Address: 0x1480e8, Func Offset: 0x898
	// Line 1119, Address: 0x148100, Func Offset: 0x8b0
	// Line 1120, Address: 0x148118, Func Offset: 0x8c8
	// Line 1121, Address: 0x148130, Func Offset: 0x8e0
	// Line 1123, Address: 0x148148, Func Offset: 0x8f8
	// Line 1124, Address: 0x14814c, Func Offset: 0x8fc
	// Line 1125, Address: 0x148160, Func Offset: 0x910
	// Line 1126, Address: 0x148174, Func Offset: 0x924
	// Line 1128, Address: 0x14818c, Func Offset: 0x93c
	// Line 1129, Address: 0x14819c, Func Offset: 0x94c
	// Line 1130, Address: 0x1481a8, Func Offset: 0x958
	// Line 1131, Address: 0x1481cc, Func Offset: 0x97c
	// Line 1132, Address: 0x1481d4, Func Offset: 0x984
	// Line 1133, Address: 0x1481e0, Func Offset: 0x990
	// Line 1134, Address: 0x1481f8, Func Offset: 0x9a8
	// Line 1135, Address: 0x148210, Func Offset: 0x9c0
	// Line 1136, Address: 0x148228, Func Offset: 0x9d8
	// Line 1137, Address: 0x148230, Func Offset: 0x9e0
	// Line 1138, Address: 0x148248, Func Offset: 0x9f8
	// Line 1139, Address: 0x148260, Func Offset: 0xa10
	// Line 1140, Address: 0x148278, Func Offset: 0xa28
	// Line 1142, Address: 0x148290, Func Offset: 0xa40
	// Line 1143, Address: 0x148294, Func Offset: 0xa44
	// Line 1144, Address: 0x1482a4, Func Offset: 0xa54
	// Line 1145, Address: 0x1482d0, Func Offset: 0xa80
	// Line 1147, Address: 0x1482d8, Func Offset: 0xa88
	// Line 1150, Address: 0x1482fc, Func Offset: 0xaac
	// Line 1151, Address: 0x148300, Func Offset: 0xab0
	// Line 1152, Address: 0x148308, Func Offset: 0xab8
	// Line 1153, Address: 0x148314, Func Offset: 0xac4
	// Line 1154, Address: 0x14831c, Func Offset: 0xacc
	// Line 1155, Address: 0x148328, Func Offset: 0xad8
	// Line 1156, Address: 0x148338, Func Offset: 0xae8
	// Line 1157, Address: 0x148340, Func Offset: 0xaf0
	// Line 1158, Address: 0x148354, Func Offset: 0xb04
	// Line 1159, Address: 0x14836c, Func Offset: 0xb1c
	// Line 1160, Address: 0x148370, Func Offset: 0xb20
	// Line 1161, Address: 0x148380, Func Offset: 0xb30
	// Line 1162, Address: 0x148394, Func Offset: 0xb44
	// Line 1164, Address: 0x1483ac, Func Offset: 0xb5c
	// Line 1165, Address: 0x1483bc, Func Offset: 0xb6c
	// Line 1166, Address: 0x1483d0, Func Offset: 0xb80
	// Line 1167, Address: 0x1483dc, Func Offset: 0xb8c
	// Line 1168, Address: 0x14840c, Func Offset: 0xbbc
	// Line 1172, Address: 0x148440, Func Offset: 0xbf0
	// Line 1173, Address: 0x14844c, Func Offset: 0xbfc
	// Line 1174, Address: 0x148478, Func Offset: 0xc28
	// Line 1176, Address: 0x148480, Func Offset: 0xc30
	// Line 1178, Address: 0x1484d0, Func Offset: 0xc80
	// Line 1179, Address: 0x1484e4, Func Offset: 0xc94
	// Line 1180, Address: 0x1484ec, Func Offset: 0xc9c
	// Line 1181, Address: 0x1484f4, Func Offset: 0xca4
	// Line 1182, Address: 0x14850c, Func Offset: 0xcbc
	// Line 1184, Address: 0x148554, Func Offset: 0xd04
	// Line 1185, Address: 0x148564, Func Offset: 0xd14
	// Line 1186, Address: 0x14856c, Func Offset: 0xd1c
	// Line 1192, Address: 0x148588, Func Offset: 0xd38
	// Line 1193, Address: 0x1485a8, Func Offset: 0xd58
	// Line 1195, Address: 0x1485ec, Func Offset: 0xd9c
	// Line 1196, Address: 0x1485f4, Func Offset: 0xda4
	// Func End, Address: 0x14862c, Func Offset: 0xddc
}

// 
// Start address: 0x148630
void enDrawWall(float* wall_pos1, float* wall_pos2, float* ppos, float prot)
{
	unsigned long xyz;
	int scr[4];
	float vec2[4];
	float vec[4];
	// Line 1201, Address: 0x148630, Func Offset: 0
	// Line 1205, Address: 0x148644, Func Offset: 0x14
	// Line 1206, Address: 0x148674, Func Offset: 0x44
	// Line 1207, Address: 0x14867c, Func Offset: 0x4c
	// Line 1208, Address: 0x148690, Func Offset: 0x60
	// Line 1209, Address: 0x1486a4, Func Offset: 0x74
	// Line 1210, Address: 0x1486b8, Func Offset: 0x88
	// Line 1211, Address: 0x1486c4, Func Offset: 0x94
	// Line 1212, Address: 0x148700, Func Offset: 0xd0
	// Line 1213, Address: 0x14873c, Func Offset: 0x10c
	// Line 1214, Address: 0x14877c, Func Offset: 0x14c
	// Line 1215, Address: 0x148790, Func Offset: 0x160
	// Line 1216, Address: 0x1487a4, Func Offset: 0x174
	// Line 1217, Address: 0x1487e0, Func Offset: 0x1b0
	// Line 1218, Address: 0x14881c, Func Offset: 0x1ec
	// Line 1219, Address: 0x14885c, Func Offset: 0x22c
	// Line 1220, Address: 0x148878, Func Offset: 0x248
	// Line 1222, Address: 0x1488e0, Func Offset: 0x2b0
	// Line 1223, Address: 0x148900, Func Offset: 0x2d0
	// Line 1224, Address: 0x148908, Func Offset: 0x2d8
	// Line 1226, Address: 0x148928, Func Offset: 0x2f8
	// Line 1227, Address: 0x148940, Func Offset: 0x310
	// Line 1228, Address: 0x14896c, Func Offset: 0x33c
	// Func End, Address: 0x148984, Func Offset: 0x354
}

// 
// Start address: 0x148990
void enDrawColumn(float* column_pos, float size, float* ppos, float prot)
{
	unsigned long xyz3;
	unsigned long xyz2;
	unsigned long xyz1;
	int scr[4];
	float vec2[4];
	float vec[4];
	// Line 1233, Address: 0x148990, Func Offset: 0
	// Line 1237, Address: 0x1489b4, Func Offset: 0x24
	// Line 1238, Address: 0x1489bc, Func Offset: 0x2c
	// Line 1239, Address: 0x1489c8, Func Offset: 0x38
	// Line 1240, Address: 0x1489dc, Func Offset: 0x4c
	// Line 1241, Address: 0x1489e8, Func Offset: 0x58
	// Line 1242, Address: 0x1489f4, Func Offset: 0x64
	// Line 1243, Address: 0x148a04, Func Offset: 0x74
	// Line 1244, Address: 0x148a40, Func Offset: 0xb0
	// Line 1245, Address: 0x148a7c, Func Offset: 0xec
	// Line 1246, Address: 0x148abc, Func Offset: 0x12c
	// Line 1247, Address: 0x148ad0, Func Offset: 0x140
	// Line 1248, Address: 0x148ae0, Func Offset: 0x150
	// Line 1249, Address: 0x148aec, Func Offset: 0x15c
	// Line 1250, Address: 0x148afc, Func Offset: 0x16c
	// Line 1251, Address: 0x148b38, Func Offset: 0x1a8
	// Line 1252, Address: 0x148b74, Func Offset: 0x1e4
	// Line 1253, Address: 0x148bb4, Func Offset: 0x224
	// Line 1254, Address: 0x148bc8, Func Offset: 0x238
	// Line 1255, Address: 0x148bd8, Func Offset: 0x248
	// Line 1256, Address: 0x148be4, Func Offset: 0x254
	// Line 1257, Address: 0x148bf4, Func Offset: 0x264
	// Line 1258, Address: 0x148c30, Func Offset: 0x2a0
	// Line 1259, Address: 0x148c6c, Func Offset: 0x2dc
	// Line 1260, Address: 0x148cac, Func Offset: 0x31c
	// Line 1261, Address: 0x148cc0, Func Offset: 0x330
	// Line 1262, Address: 0x148cd0, Func Offset: 0x340
	// Line 1263, Address: 0x148cdc, Func Offset: 0x34c
	// Line 1264, Address: 0x148cec, Func Offset: 0x35c
	// Line 1265, Address: 0x148d28, Func Offset: 0x398
	// Line 1266, Address: 0x148d64, Func Offset: 0x3d4
	// Line 1267, Address: 0x148da4, Func Offset: 0x414
	// Line 1268, Address: 0x148dc0, Func Offset: 0x430
	// Line 1269, Address: 0x148de0, Func Offset: 0x450
	// Line 1270, Address: 0x148df8, Func Offset: 0x468
	// Line 1271, Address: 0x148e10, Func Offset: 0x480
	// Line 1272, Address: 0x148e28, Func Offset: 0x498
	// Line 1273, Address: 0x148e54, Func Offset: 0x4c4
	// Func End, Address: 0x148e78, Func Offset: 0x4e8
}

// 
// Start address: 0x148e80
void enDrawTriangle(float* pos, float rot, unsigned int color, float size)
{
	float dy;
	float dx;
	float y;
	float x;
	// Line 1278, Address: 0x148e80, Func Offset: 0
	// Line 1280, Address: 0x148eac, Func Offset: 0x2c
	// Line 1281, Address: 0x148eb0, Func Offset: 0x30
	// Line 1282, Address: 0x148eb4, Func Offset: 0x34
	// Line 1283, Address: 0x148ec0, Func Offset: 0x40
	// Line 1284, Address: 0x148ed0, Func Offset: 0x50
	// Line 1287, Address: 0x148ef4, Func Offset: 0x74
	// Line 1288, Address: 0x148f10, Func Offset: 0x90
	// Line 1289, Address: 0x148f30, Func Offset: 0xb0
	// Line 1291, Address: 0x148fe0, Func Offset: 0x160
	// Line 1294, Address: 0x14907c, Func Offset: 0x1fc
	// Line 1297, Address: 0x149110, Func Offset: 0x290
	// Line 1298, Address: 0x149118, Func Offset: 0x298
	// Func End, Address: 0x149140, Func Offset: 0x2c0
}

// 
// Start address: 0x149140
void enDrawBox(float* pos, float rot, unsigned int color, float size1, float size2)
{
	float dy;
	float dx;
	float y;
	float x;
	// Line 1303, Address: 0x149140, Func Offset: 0
	// Line 1305, Address: 0x149174, Func Offset: 0x34
	// Line 1306, Address: 0x149178, Func Offset: 0x38
	// Line 1307, Address: 0x14917c, Func Offset: 0x3c
	// Line 1308, Address: 0x149188, Func Offset: 0x48
	// Line 1309, Address: 0x149198, Func Offset: 0x58
	// Line 1312, Address: 0x1491bc, Func Offset: 0x7c
	// Line 1313, Address: 0x1491d8, Func Offset: 0x98
	// Line 1314, Address: 0x1491f8, Func Offset: 0xb8
	// Line 1317, Address: 0x1492b8, Func Offset: 0x178
	// Line 1320, Address: 0x149354, Func Offset: 0x214
	// Line 1323, Address: 0x1493f0, Func Offset: 0x2b0
	// Line 1326, Address: 0x14948c, Func Offset: 0x34c
	// Line 1327, Address: 0x149494, Func Offset: 0x354
	// Func End, Address: 0x1494c0, Func Offset: 0x380
}

