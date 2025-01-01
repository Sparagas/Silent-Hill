typedef struct _anon0;
typedef struct Model_List;
typedef struct _anon1;
typedef struct _anon2;
typedef struct DramaDemo_MessageTime;
typedef struct _anon3;
typedef struct DramaDemo_PlayInfo;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct shAttackInfo;
typedef union _anon4;

typedef void(*type_1)();
typedef int(*type_2)();

typedef unsigned char type_0[10];
typedef unsigned char type_3[13];
typedef unsigned char type_4[242];
typedef float type_5[4];
typedef unsigned char type_6[34];
typedef int(*type_7)()[3];
typedef DramaDemo_PlayInfo type_8[1];
typedef unsigned char type_9[10];
typedef _anon3 type_10[22];
typedef shAttackInfo type_11[46];
typedef Model_List type_12[1];

struct _anon0
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

struct _anon1
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

struct _anon2
{
	_anon3* ev_list;
	unsigned char* ev_pos;
	int(*ev_prog)();
	_anon0* gi_list;
	Model_List* mdl_list;
	_anon1* en_list;
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

struct DramaDemo_MessageTime
{
	unsigned short start;
	unsigned short end;
};

struct _anon3
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
};

struct DramaDemo_PlayInfo
{
	char* adr_dds_top;
	short* adr_anim;
	DramaDemo_MessageTime* adr_msg_time;
	short msg_start;
	short voice_sd_no;
	int* adr_voice;
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

union _anon4
{
	shBattleFight fight;
	shBattleShot shot;
};

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
unsigned char ev_pos[242];
_anon3 ev_list[22];
int(*ev_prog)()[3];
Model_List mdl_list[1];
_anon2 stage_hospital_1fw_b;
int ev_s_step;
int ev_p_step;

int EvProgHospitalBack();
int EvProgLauraDeceive();
void EvRoomInit();

// 
// Start address: 0x22c900
int EvProgHospitalBack()
{
	// Line 69, Address: 0x22c900, Func Offset: 0
	// Line 70, Address: 0x22c904, Func Offset: 0x4
	// Func End, Address: 0x22c90c, Func Offset: 0xc
}

// 
// Start address: 0x22c910
int EvProgLauraDeceive()
{
	DramaDemo_PlayInfo deceive_c[1];
	// Line 90, Address: 0x22c910, Func Offset: 0
	// Line 156, Address: 0x22c918, Func Offset: 0x8
	// Line 161, Address: 0x22c948, Func Offset: 0x38
	// Line 162, Address: 0x22c974, Func Offset: 0x64
	// Line 165, Address: 0x22c97c, Func Offset: 0x6c
	// Line 167, Address: 0x22c988, Func Offset: 0x78
	// Line 168, Address: 0x22c98c, Func Offset: 0x7c
	// Func End, Address: 0x22c99c, Func Offset: 0x8c
}

// 
// Start address: 0x22c9a0
void EvRoomInit()
{
	// Line 181, Address: 0x22c9a0, Func Offset: 0
	// Func End, Address: 0x22c9a8, Func Offset: 0x8
}

