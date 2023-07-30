typedef struct PicDraw_Data;
typedef struct sh2gfw_AREA_HEAD;
typedef struct DramaDemo_PlayInfo;
typedef struct shAttackInfo;
typedef struct SubCharacter;
typedef union _anon0;
typedef struct _CL_VHIT_WALL;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _CL_VHIT_CHARA;
typedef struct _CL_VHIT_RESULT;
typedef union _anon1;
typedef struct Pad_KeyConfig;
typedef struct _anon2;
typedef struct DramaDemo_MessageTime;
typedef struct _anon3;
typedef struct shSkelton;
typedef struct _VbSCREENINFO;
typedef struct shBattleFight;
typedef struct _anon4;
typedef struct shBattleShot;
typedef struct _anon5;
typedef struct shBattleArea;
typedef struct DramaDemo_AnimInfo;
typedef struct shBattleInfo;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_18)(SubCharacter*);
typedef void(*type_22)(SubCharacter*);

typedef unsigned char type_0[10];
typedef short type_1[324];
typedef SubCharacter* type_2[7];
typedef float type_3[4];
typedef unsigned char type_4[13];
typedef float type_5[4];
typedef float type_6[4][4];
typedef unsigned char type_7[3];
typedef unsigned short type_8[0];
typedef unsigned char type_9[34];
typedef char type_10[32];
typedef char type_11[4];
typedef float type_12[4];
typedef float type_13[4][4];
typedef unsigned char type_14[10];
typedef unsigned char type_15[2];
typedef float type_16[4];
typedef unsigned char type_17[4];
typedef float type_19[3];
typedef shAttackInfo type_20[46];
typedef float type_21[2];
typedef char type_23[32];
typedef float type_24[2];
typedef DramaDemo_AnimInfo type_25[45];
typedef unsigned char type_26[4];
typedef _anon5 type_27[32];
typedef _anon6 type_28[7];

struct PicDraw_Data
{
	sh2gfw_AREA_HEAD* ap;
	int tex;
	int clut;
	short x0;
	short y0;
	short x1;
	short y1;
	short x2;
	short y2;
	short x3;
	short y3;
	int us0;
	int vt0;
	int us1;
	int vt1;
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
	unsigned char alpha_a;
	unsigned char alpha_b;
	unsigned char alpha_c;
	unsigned char alpha_d;
	unsigned char alpha_fix;
	unsigned char test_ate;
	unsigned char test_atst;
	unsigned char test_aref;
	unsigned char test_afail;
	unsigned char test_date;
	unsigned char test_datm;
	unsigned char test_zte;
	unsigned char test_ztst;
	unsigned char pad[3];
	short otp;
	short status;
};

struct sh2gfw_AREA_HEAD
{
	unsigned int area_id;
	unsigned int toGlobalTexHead;
	unsigned int toGlobalClutsHead;
	unsigned int date;
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
};

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
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

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
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

struct Pad_KeyConfig
{
	int enter;
	int cancel;
	int skip;
	int front_move;
	int back_move;
	int right_turn;
	int left_turn;
	int right_move;
	int left_move;
	int action;
	int attack;
	int dash;
	int light;
	int item;
	int search_view;
	int ready;
	int pause;
	int map;
};

struct _anon2
{
	float x;
	float y;
	float z;
	float w;
};

struct DramaDemo_MessageTime
{
	unsigned short start;
	unsigned short end;
};

struct _anon3
{
	float d[4][4];
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

struct _VbSCREENINFO
{
	float scr_z;
	float sx;
	float sy;
	float cx;
	float cy;
	float zmin;
	float zmax;
	float nearz;
	float farz;
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct _anon4
{
	float position[4];
	float interest[4];
	float roll;
	float plane;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct _anon5
{
	float position[4];
	float interest[4];
	float roll;
	float color[3];
	float falloff[2];
	float cone[2];
};

struct shBattleArea
{
	float center;
	float radius;
};

struct DramaDemo_AnimInfo
{
	char name[32];
	short kind;
	short id;
	short start;
	short end;
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

struct _anon6
{
	float position[4];
	int visible;
};

struct _anon7
{
	float frame;
	_anon4 camera;
	_anon5 light[32];
	_anon6 character[7];
};

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
DramaDemo_AnimInfo anim_info[45];
short dda_list[324];
void* adr_dds;
Pad_KeyConfig key_config;
int ev_s_step;
_anon7 next;
_anon7 last;
int demo_status;
short total_light;
unsigned short demo_voice_no;
unsigned short demo_msg_no;
unsigned short demo_anim_no;
short infinite_light;
short spot_light;
short point_light;
float demo_frame;
_anon7 base;
int character_number;
SubCharacter* chara_p[7];
float total_frame;
float dtf;
_VbSCREENINFO VbScreenInfo;
unsigned short msg_buffer[0];

short DdsReadShort();
float DdsReadFloat2();
float DdsReadFloat4();
int DramaDemoMain(DramaDemo_PlayInfo* info);
int DramaDemoInit(DramaDemo_PlayInfo* info);
void DramaDemoAnimationStart(short* adr_anim);
int DdsPlay(DramaDemo_PlayInfo* info);
void DdsPlayKey();
void DdsPlayCamera();
void DdsPlayLight(int no);
void DdsPlayCharacter(int no);
void RotationToInterest(float* position, float* rotation, float* interest, float* roll);
void DemoFade();

// 
// Start address: 0x1b6200
short DdsReadShort()
{
	unsigned char c_work[2];
	// Line 138, Address: 0x1b6200, Func Offset: 0
	// Line 141, Address: 0x1b6204, Func Offset: 0x4
	// Line 142, Address: 0x1b622c, Func Offset: 0x2c
	// Line 144, Address: 0x1b6254, Func Offset: 0x54
	// Line 145, Address: 0x1b625c, Func Offset: 0x5c
	// Func End, Address: 0x1b6268, Func Offset: 0x68
}

// 
// Start address: 0x1b6270
float DdsReadFloat2()
{
	int work;
	int coe;
	int exp;
	int sig;
	// Line 164, Address: 0x1b6270, Func Offset: 0
	// Line 170, Address: 0x1b6280, Func Offset: 0x10
	// Line 171, Address: 0x1b6284, Func Offset: 0x14
	// Line 172, Address: 0x1b62ac, Func Offset: 0x3c
	// Line 174, Address: 0x1b62d4, Func Offset: 0x64
	// Line 175, Address: 0x1b62e0, Func Offset: 0x70
	// Line 176, Address: 0x1b62ec, Func Offset: 0x7c
	// Line 179, Address: 0x1b62f4, Func Offset: 0x84
	// Line 180, Address: 0x1b62f8, Func Offset: 0x88
	// Line 181, Address: 0x1b62fc, Func Offset: 0x8c
	// Line 183, Address: 0x1b6310, Func Offset: 0xa0
	// Line 184, Address: 0x1b6318, Func Offset: 0xa8
	// Func End, Address: 0x1b6330, Func Offset: 0xc0
}

// 
// Start address: 0x1b6330
float DdsReadFloat4()
{
	char c_work[4];
	// Line 189, Address: 0x1b6330, Func Offset: 0
	// Line 192, Address: 0x1b6334, Func Offset: 0x4
	// Line 193, Address: 0x1b6358, Func Offset: 0x28
	// Line 194, Address: 0x1b637c, Func Offset: 0x4c
	// Line 195, Address: 0x1b63a0, Func Offset: 0x70
	// Line 197, Address: 0x1b63c4, Func Offset: 0x94
	// Line 198, Address: 0x1b63cc, Func Offset: 0x9c
	// Func End, Address: 0x1b63d8, Func Offset: 0xa8
}

// 
// Start address: 0x1b63e0
int DramaDemoMain(DramaDemo_PlayInfo* info)
{
	// Line 207, Address: 0x1b63e0, Func Offset: 0
	// Line 209, Address: 0x1b63ec, Func Offset: 0xc
	// Line 210, Address: 0x1b63fc, Func Offset: 0x1c
	// Line 211, Address: 0x1b6408, Func Offset: 0x28
	// Line 215, Address: 0x1b6414, Func Offset: 0x34
	// Line 216, Address: 0x1b6444, Func Offset: 0x64
	// Line 217, Address: 0x1b644c, Func Offset: 0x6c
	// Line 219, Address: 0x1b6458, Func Offset: 0x78
	// Line 220, Address: 0x1b645c, Func Offset: 0x7c
	// Func End, Address: 0x1b646c, Func Offset: 0x8c
}

// 
// Start address: 0x1b6470
int DramaDemoInit(DramaDemo_PlayInfo* info)
{
	int j;
	int i;
	unsigned char c_work;
	unsigned short s_work;
	char buf[32];
	// Line 227, Address: 0x1b6470, Func Offset: 0
	// Line 233, Address: 0x1b648c, Func Offset: 0x1c
	// Line 236, Address: 0x1b649c, Func Offset: 0x2c
	// Line 240, Address: 0x1b64cc, Func Offset: 0x5c
	// Line 241, Address: 0x1b64e0, Func Offset: 0x70
	// Line 242, Address: 0x1b64fc, Func Offset: 0x8c
	// Line 243, Address: 0x1b6510, Func Offset: 0xa0
	// Line 244, Address: 0x1b6540, Func Offset: 0xd0
	// Line 245, Address: 0x1b6570, Func Offset: 0x100
	// Line 246, Address: 0x1b65a0, Func Offset: 0x130
	// Line 247, Address: 0x1b65b4, Func Offset: 0x144
	// Line 248, Address: 0x1b65e4, Func Offset: 0x174
	// Line 249, Address: 0x1b65f0, Func Offset: 0x180
	// Line 250, Address: 0x1b661c, Func Offset: 0x1ac
	// Line 251, Address: 0x1b6620, Func Offset: 0x1b0
	// Line 252, Address: 0x1b664c, Func Offset: 0x1dc
	// Line 254, Address: 0x1b66b0, Func Offset: 0x240
	// Line 255, Address: 0x1b66b8, Func Offset: 0x248
	// Line 257, Address: 0x1b6710, Func Offset: 0x2a0
	// Line 260, Address: 0x1b6754, Func Offset: 0x2e4
	// Line 261, Address: 0x1b6760, Func Offset: 0x2f0
	// Line 264, Address: 0x1b677c, Func Offset: 0x30c
	// Line 265, Address: 0x1b6790, Func Offset: 0x320
	// Line 266, Address: 0x1b67a4, Func Offset: 0x334
	// Line 268, Address: 0x1b67b0, Func Offset: 0x340
	// Line 269, Address: 0x1b67d8, Func Offset: 0x368
	// Line 271, Address: 0x1b6800, Func Offset: 0x390
	// Line 272, Address: 0x1b6808, Func Offset: 0x398
	// Line 273, Address: 0x1b6810, Func Offset: 0x3a0
	// Line 274, Address: 0x1b6818, Func Offset: 0x3a8
	// Line 276, Address: 0x1b6820, Func Offset: 0x3b0
	// Line 278, Address: 0x1b6830, Func Offset: 0x3c0
	// Line 279, Address: 0x1b6858, Func Offset: 0x3e8
	// Line 280, Address: 0x1b6868, Func Offset: 0x3f8
	// Line 281, Address: 0x1b6884, Func Offset: 0x414
	// Line 282, Address: 0x1b68a4, Func Offset: 0x434
	// Line 283, Address: 0x1b68c8, Func Offset: 0x458
	// Line 284, Address: 0x1b68e0, Func Offset: 0x470
	// Line 285, Address: 0x1b6904, Func Offset: 0x494
	// Line 286, Address: 0x1b690c, Func Offset: 0x49c
	// Line 287, Address: 0x1b6924, Func Offset: 0x4b4
	// Line 288, Address: 0x1b6934, Func Offset: 0x4c4
	// Line 290, Address: 0x1b694c, Func Offset: 0x4dc
	// Line 292, Address: 0x1b6968, Func Offset: 0x4f8
	// Line 294, Address: 0x1b69a4, Func Offset: 0x534
	// Line 295, Address: 0x1b69a8, Func Offset: 0x538
	// Func End, Address: 0x1b69c8, Func Offset: 0x558
}

// 
// Start address: 0x1b69d0
void DramaDemoAnimationStart(short* adr_anim)
{
	int k;
	int j;
	int i;
	short anim;
	// Line 303, Address: 0x1b69d0, Func Offset: 0
	// Line 307, Address: 0x1b69ec, Func Offset: 0x1c
	// Line 308, Address: 0x1b69f8, Func Offset: 0x28
	// Line 309, Address: 0x1b6a1c, Func Offset: 0x4c
	// Line 310, Address: 0x1b6a20, Func Offset: 0x50
	// Line 312, Address: 0x1b6a90, Func Offset: 0xc0
	// Line 313, Address: 0x1b6a9c, Func Offset: 0xcc
	// Line 314, Address: 0x1b6aa0, Func Offset: 0xd0
	// Line 316, Address: 0x1b6b38, Func Offset: 0x168
	// Line 317, Address: 0x1b6b44, Func Offset: 0x174
	// Line 320, Address: 0x1b6c0c, Func Offset: 0x23c
	// Line 321, Address: 0x1b6c30, Func Offset: 0x260
	// Line 324, Address: 0x1b6c38, Func Offset: 0x268
	// Line 325, Address: 0x1b6c5c, Func Offset: 0x28c
	// Line 327, Address: 0x1b6c64, Func Offset: 0x294
	// Line 328, Address: 0x1b6c88, Func Offset: 0x2b8
	// Line 330, Address: 0x1b6c90, Func Offset: 0x2c0
	// Line 331, Address: 0x1b6cb4, Func Offset: 0x2e4
	// Line 333, Address: 0x1b6cbc, Func Offset: 0x2ec
	// Line 334, Address: 0x1b6ce0, Func Offset: 0x310
	// Line 336, Address: 0x1b6ce8, Func Offset: 0x318
	// Line 337, Address: 0x1b6d0c, Func Offset: 0x33c
	// Line 339, Address: 0x1b6d14, Func Offset: 0x344
	// Line 340, Address: 0x1b6d38, Func Offset: 0x368
	// Line 342, Address: 0x1b6d40, Func Offset: 0x370
	// Line 343, Address: 0x1b6d64, Func Offset: 0x394
	// Line 345, Address: 0x1b6d6c, Func Offset: 0x39c
	// Line 346, Address: 0x1b6d90, Func Offset: 0x3c0
	// Line 348, Address: 0x1b6d98, Func Offset: 0x3c8
	// Line 349, Address: 0x1b6dbc, Func Offset: 0x3ec
	// Line 351, Address: 0x1b6dc4, Func Offset: 0x3f4
	// Line 352, Address: 0x1b6de8, Func Offset: 0x418
	// Line 354, Address: 0x1b6df0, Func Offset: 0x420
	// Line 356, Address: 0x1b6e14, Func Offset: 0x444
	// Line 357, Address: 0x1b6e18, Func Offset: 0x448
	// Line 358, Address: 0x1b6e2c, Func Offset: 0x45c
	// Line 359, Address: 0x1b6e44, Func Offset: 0x474
	// Func End, Address: 0x1b6e64, Func Offset: 0x494
}

// 
// Start address: 0x1b6e70
int DdsPlay(DramaDemo_PlayInfo* info)
{
	int i;
	unsigned char node_no;
	unsigned short s_work;
	float next_data_frame;
	float frm_dcm;
	float plane;
	float roll;
	float interest[4];
	float position[4];
	// Line 364, Address: 0x1b6e70, Func Offset: 0
	// Line 375, Address: 0x1b6e8c, Func Offset: 0x1c
	// Line 377, Address: 0x1b6e94, Func Offset: 0x24
	// Line 378, Address: 0x1b6ec4, Func Offset: 0x54
	// Line 379, Address: 0x1b6edc, Func Offset: 0x6c
	// Line 380, Address: 0x1b6ee8, Func Offset: 0x78
	// Line 382, Address: 0x1b6f00, Func Offset: 0x90
	// Line 383, Address: 0x1b6f18, Func Offset: 0xa8
	// Line 384, Address: 0x1b6f24, Func Offset: 0xb4
	// Line 385, Address: 0x1b6f54, Func Offset: 0xe4
	// Line 386, Address: 0x1b6f68, Func Offset: 0xf8
	// Line 387, Address: 0x1b6f74, Func Offset: 0x104
	// Line 388, Address: 0x1b6fac, Func Offset: 0x13c
	// Line 389, Address: 0x1b6fb0, Func Offset: 0x140
	// Line 390, Address: 0x1b6fc4, Func Offset: 0x154
	// Line 399, Address: 0x1b6fdc, Func Offset: 0x16c
	// Line 400, Address: 0x1b6fe8, Func Offset: 0x178
	// Line 401, Address: 0x1b7024, Func Offset: 0x1b4
	// Line 402, Address: 0x1b702c, Func Offset: 0x1bc
	// Line 404, Address: 0x1b7040, Func Offset: 0x1d0
	// Line 405, Address: 0x1b707c, Func Offset: 0x20c
	// Line 407, Address: 0x1b70ac, Func Offset: 0x23c
	// Line 409, Address: 0x1b70c4, Func Offset: 0x254
	// Line 410, Address: 0x1b70d4, Func Offset: 0x264
	// Line 411, Address: 0x1b70e8, Func Offset: 0x278
	// Line 412, Address: 0x1b7120, Func Offset: 0x2b0
	// Line 414, Address: 0x1b7154, Func Offset: 0x2e4
	// Line 415, Address: 0x1b7170, Func Offset: 0x300
	// Line 416, Address: 0x1b7184, Func Offset: 0x314
	// Line 417, Address: 0x1b7188, Func Offset: 0x318
	// Line 418, Address: 0x1b71b0, Func Offset: 0x340
	// Line 419, Address: 0x1b71c0, Func Offset: 0x350
	// Line 420, Address: 0x1b71dc, Func Offset: 0x36c
	// Line 421, Address: 0x1b71fc, Func Offset: 0x38c
	// Line 422, Address: 0x1b7220, Func Offset: 0x3b0
	// Line 423, Address: 0x1b7238, Func Offset: 0x3c8
	// Line 424, Address: 0x1b725c, Func Offset: 0x3ec
	// Line 428, Address: 0x1b7264, Func Offset: 0x3f4
	// Line 429, Address: 0x1b7284, Func Offset: 0x414
	// Line 432, Address: 0x1b72c4, Func Offset: 0x454
	// Line 433, Address: 0x1b72d0, Func Offset: 0x460
	// Line 436, Address: 0x1b7320, Func Offset: 0x4b0
	// Line 439, Address: 0x1b7370, Func Offset: 0x500
	// Line 440, Address: 0x1b7384, Func Offset: 0x514
	// Line 441, Address: 0x1b7394, Func Offset: 0x524
	// Line 442, Address: 0x1b73c0, Func Offset: 0x550
	// Line 444, Address: 0x1b73ec, Func Offset: 0x57c
	// Line 446, Address: 0x1b7408, Func Offset: 0x598
	// Line 447, Address: 0x1b7410, Func Offset: 0x5a0
	// Line 448, Address: 0x1b7418, Func Offset: 0x5a8
	// Line 453, Address: 0x1b7440, Func Offset: 0x5d0
	// Line 454, Address: 0x1b744c, Func Offset: 0x5dc
	// Line 457, Address: 0x1b74a8, Func Offset: 0x638
	// Line 460, Address: 0x1b7504, Func Offset: 0x694
	// Line 463, Address: 0x1b7560, Func Offset: 0x6f0
	// Line 464, Address: 0x1b7584, Func Offset: 0x714
	// Line 467, Address: 0x1b759c, Func Offset: 0x72c
	// Line 468, Address: 0x1b75ac, Func Offset: 0x73c
	// Line 469, Address: 0x1b75c4, Func Offset: 0x754
	// Line 470, Address: 0x1b75dc, Func Offset: 0x76c
	// Line 471, Address: 0x1b75e8, Func Offset: 0x778
	// Line 472, Address: 0x1b761c, Func Offset: 0x7ac
	// Line 474, Address: 0x1b7634, Func Offset: 0x7c4
	// Line 475, Address: 0x1b763c, Func Offset: 0x7cc
	// Line 478, Address: 0x1b7664, Func Offset: 0x7f4
	// Line 479, Address: 0x1b7690, Func Offset: 0x820
	// Line 480, Address: 0x1b76f0, Func Offset: 0x880
	// Line 481, Address: 0x1b7738, Func Offset: 0x8c8
	// Line 482, Address: 0x1b773c, Func Offset: 0x8cc
	// Func End, Address: 0x1b775c, Func Offset: 0x8ec
}

// 
// Start address: 0x1b7760
void DdsPlayKey()
{
	unsigned char c_work;
	// Line 487, Address: 0x1b7760, Func Offset: 0
	// Line 491, Address: 0x1b7768, Func Offset: 0x8
	// Line 492, Address: 0x1b7790, Func Offset: 0x30
	// Line 494, Address: 0x1b77e4, Func Offset: 0x84
	// Line 495, Address: 0x1b77f8, Func Offset: 0x98
	// Line 497, Address: 0x1b7800, Func Offset: 0xa0
	// Line 498, Address: 0x1b7814, Func Offset: 0xb4
	// Line 501, Address: 0x1b781c, Func Offset: 0xbc
	// Line 502, Address: 0x1b7830, Func Offset: 0xd0
	// Line 513, Address: 0x1b7838, Func Offset: 0xd8
	// Func End, Address: 0x1b7848, Func Offset: 0xe8
}

// 
// Start address: 0x1b7850
void DdsPlayCamera()
{
	int i;
	unsigned char c_work;
	float camera_rotation[4];
	// Line 518, Address: 0x1b7850, Func Offset: 0
	// Line 524, Address: 0x1b7860, Func Offset: 0x10
	// Line 525, Address: 0x1b7888, Func Offset: 0x38
	// Line 527, Address: 0x1b78b8, Func Offset: 0x68
	// Line 528, Address: 0x1b78cc, Func Offset: 0x7c
	// Line 529, Address: 0x1b78d8, Func Offset: 0x88
	// Line 531, Address: 0x1b7908, Func Offset: 0xb8
	// Line 532, Address: 0x1b791c, Func Offset: 0xcc
	// Line 533, Address: 0x1b7924, Func Offset: 0xd4
	// Line 534, Address: 0x1b7930, Func Offset: 0xe0
	// Line 536, Address: 0x1b7964, Func Offset: 0x114
	// Line 538, Address: 0x1b7974, Func Offset: 0x124
	// Line 541, Address: 0x1b797c, Func Offset: 0x12c
	// Line 542, Address: 0x1b7990, Func Offset: 0x140
	// Line 543, Address: 0x1b799c, Func Offset: 0x14c
	// Line 545, Address: 0x1b79cc, Func Offset: 0x17c
	// Line 546, Address: 0x1b79dc, Func Offset: 0x18c
	// Line 547, Address: 0x1b79e4, Func Offset: 0x194
	// Line 548, Address: 0x1b79f0, Func Offset: 0x1a0
	// Line 550, Address: 0x1b7a24, Func Offset: 0x1d4
	// Line 552, Address: 0x1b7a34, Func Offset: 0x1e4
	// Line 555, Address: 0x1b7a3c, Func Offset: 0x1ec
	// Line 556, Address: 0x1b7a48, Func Offset: 0x1f8
	// Line 557, Address: 0x1b7a54, Func Offset: 0x204
	// Line 558, Address: 0x1b7a60, Func Offset: 0x210
	// Line 559, Address: 0x1b7a6c, Func Offset: 0x21c
	// Line 562, Address: 0x1b7a90, Func Offset: 0x240
	// Line 565, Address: 0x1b7a98, Func Offset: 0x248
	// Line 566, Address: 0x1b7aa8, Func Offset: 0x258
	// Line 569, Address: 0x1b7ab0, Func Offset: 0x260
	// Line 570, Address: 0x1b7ac0, Func Offset: 0x270
	// Line 577, Address: 0x1b7ac8, Func Offset: 0x278
	// Func End, Address: 0x1b7ae0, Func Offset: 0x290
}

// 
// Start address: 0x1b7ae0
void DdsPlayLight(int no)
{
	int i;
	unsigned char c_work;
	float light_rotation[4];
	// Line 582, Address: 0x1b7ae0, Func Offset: 0
	// Line 588, Address: 0x1b7af4, Func Offset: 0x14
	// Line 589, Address: 0x1b7b1c, Func Offset: 0x3c
	// Line 590, Address: 0x1b7b4c, Func Offset: 0x6c
	// Line 591, Address: 0x1b7b50, Func Offset: 0x70
	// Line 592, Address: 0x1b7b64, Func Offset: 0x84
	// Line 593, Address: 0x1b7b70, Func Offset: 0x90
	// Line 595, Address: 0x1b7bb8, Func Offset: 0xd8
	// Line 596, Address: 0x1b7bcc, Func Offset: 0xec
	// Line 597, Address: 0x1b7bd4, Func Offset: 0xf4
	// Line 598, Address: 0x1b7be0, Func Offset: 0x100
	// Line 600, Address: 0x1b7c2c, Func Offset: 0x14c
	// Line 602, Address: 0x1b7c3c, Func Offset: 0x15c
	// Line 605, Address: 0x1b7c44, Func Offset: 0x164
	// Line 606, Address: 0x1b7c58, Func Offset: 0x178
	// Line 607, Address: 0x1b7c64, Func Offset: 0x184
	// Line 609, Address: 0x1b7cac, Func Offset: 0x1cc
	// Line 610, Address: 0x1b7cbc, Func Offset: 0x1dc
	// Line 611, Address: 0x1b7cc4, Func Offset: 0x1e4
	// Line 612, Address: 0x1b7cd0, Func Offset: 0x1f0
	// Line 614, Address: 0x1b7d1c, Func Offset: 0x23c
	// Line 616, Address: 0x1b7d2c, Func Offset: 0x24c
	// Line 619, Address: 0x1b7d34, Func Offset: 0x254
	// Line 620, Address: 0x1b7d40, Func Offset: 0x260
	// Line 621, Address: 0x1b7d4c, Func Offset: 0x26c
	// Line 622, Address: 0x1b7d58, Func Offset: 0x278
	// Line 623, Address: 0x1b7d64, Func Offset: 0x284
	// Line 625, Address: 0x1b7da4, Func Offset: 0x2c4
	// Line 628, Address: 0x1b7dac, Func Offset: 0x2cc
	// Line 629, Address: 0x1b7dcc, Func Offset: 0x2ec
	// Line 630, Address: 0x1b7dec, Func Offset: 0x30c
	// Line 631, Address: 0x1b7e0c, Func Offset: 0x32c
	// Line 634, Address: 0x1b7e14, Func Offset: 0x334
	// Line 635, Address: 0x1b7e34, Func Offset: 0x354
	// Line 636, Address: 0x1b7e54, Func Offset: 0x374
	// Line 639, Address: 0x1b7e5c, Func Offset: 0x37c
	// Line 640, Address: 0x1b7e7c, Func Offset: 0x39c
	// Line 641, Address: 0x1b7e9c, Func Offset: 0x3bc
	// Line 648, Address: 0x1b7ea4, Func Offset: 0x3c4
	// Func End, Address: 0x1b7ebc, Func Offset: 0x3dc
}

// 
// Start address: 0x1b7ec0
void DdsPlayCharacter(int no)
{
	int i;
	unsigned char c_work;
	// Line 653, Address: 0x1b7ec0, Func Offset: 0
	// Line 658, Address: 0x1b7ed4, Func Offset: 0x14
	// Line 659, Address: 0x1b7efc, Func Offset: 0x3c
	// Line 661, Address: 0x1b7f38, Func Offset: 0x78
	// Line 662, Address: 0x1b7f54, Func Offset: 0x94
	// Line 665, Address: 0x1b7f5c, Func Offset: 0x9c
	// Line 666, Address: 0x1b7f74, Func Offset: 0xb4
	// Line 669, Address: 0x1b7f7c, Func Offset: 0xbc
	// Line 670, Address: 0x1b7f90, Func Offset: 0xd0
	// Line 671, Address: 0x1b7f9c, Func Offset: 0xdc
	// Line 673, Address: 0x1b7fe4, Func Offset: 0x124
	// Line 674, Address: 0x1b7ff4, Func Offset: 0x134
	// Line 675, Address: 0x1b7ffc, Func Offset: 0x13c
	// Line 676, Address: 0x1b8008, Func Offset: 0x148
	// Line 678, Address: 0x1b8054, Func Offset: 0x194
	// Line 680, Address: 0x1b8064, Func Offset: 0x1a4
	// Line 687, Address: 0x1b806c, Func Offset: 0x1ac
	// Func End, Address: 0x1b8084, Func Offset: 0x1c4
}

// 
// Start address: 0x1b8090
void RotationToInterest(float* position, float* rotation, float* interest, float* roll)
{
	float vector[4];
	float matrix[4][4];
	// Line 702, Address: 0x1b8090, Func Offset: 0
	// Line 706, Address: 0x1b80b8, Func Offset: 0x28
	// Line 707, Address: 0x1b80e0, Func Offset: 0x50
	// Line 708, Address: 0x1b80f4, Func Offset: 0x64
	// Line 709, Address: 0x1b8108, Func Offset: 0x78
	// Line 710, Address: 0x1b811c, Func Offset: 0x8c
	// Line 711, Address: 0x1b8124, Func Offset: 0x94
	// Line 712, Address: 0x1b8134, Func Offset: 0xa4
	// Line 713, Address: 0x1b813c, Func Offset: 0xac
	// Line 714, Address: 0x1b816c, Func Offset: 0xdc
	// Line 715, Address: 0x1b817c, Func Offset: 0xec
	// Line 716, Address: 0x1b818c, Func Offset: 0xfc
	// Func End, Address: 0x1b81ac, Func Offset: 0x11c
}

// 
// Start address: 0x1b81b0
void DemoFade()
{
	PicDraw_Data pic;
	// Line 723, Address: 0x1b81b0, Func Offset: 0
	// Line 726, Address: 0x1b81b8, Func Offset: 0x8
	// Line 727, Address: 0x1b81c8, Func Offset: 0x18
	// Line 728, Address: 0x1b81e0, Func Offset: 0x30
	// Line 730, Address: 0x1b8214, Func Offset: 0x64
	// Line 731, Address: 0x1b8240, Func Offset: 0x90
	// Line 733, Address: 0x1b824c, Func Offset: 0x9c
	// Line 734, Address: 0x1b8278, Func Offset: 0xc8
	// Line 735, Address: 0x1b8284, Func Offset: 0xd4
	// Func End, Address: 0x1b8294, Func Offset: 0xe4
}

