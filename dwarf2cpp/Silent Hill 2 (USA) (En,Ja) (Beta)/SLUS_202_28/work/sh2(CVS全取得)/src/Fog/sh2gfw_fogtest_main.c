typedef struct FOG_OBJ_DATA;
typedef struct FOG_WALL_DATA;
typedef struct FOG_WORK;
typedef struct _anon0;
typedef struct shBattleFight;
typedef struct FOG_COLIS_HEAD;
typedef struct FOG_AREA_DATA;
typedef struct FOG_ENV_DATA;
typedef struct shBattleShot;
typedef struct _VbWVSMATRIX;
typedef struct _VbSCREENINFO;
typedef struct shAttackInfo;
typedef struct FOG_PART_DATA;
typedef union _anon1;


typedef unsigned char type_0[97];
typedef FOG_PART_DATA type_1[700];
typedef float type_2[8];
typedef float type_3[8][8];
typedef float type_4[8][8][8];
typedef FOG_WALL_DATA type_5[188];
typedef shAttackInfo type_6[66];
typedef FOG_OBJ_DATA type_7[168];
typedef float type_8[4];
typedef float type_9[4];
typedef float type_10[4][4];
typedef float type_11[4];
typedef float type_12[4][4];
typedef unsigned char type_13[20];
typedef unsigned char type_14[14];
typedef unsigned char type_15[69];
typedef unsigned char type_16[14];

struct FOG_OBJ_DATA
{
	float pos[4];
	float mv[4];
	int type;
	float rer;
	unsigned long id;
};

struct FOG_WALL_DATA
{
	float normal[4];
	float v0[4];
	float min[4];
	float max[4];
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

struct _anon0
{
	float pos[4];
	float zdir[4];
	float ydir[4];
	float rot[4];
	float clip_volume[4];
	float world_view[4][4];
	float view_screen[4][4];
	float view_clip[4][4];
	float world_screen[4][4];
	float world_clip[4][4];
	float clip_screen[4][4];
	float camera_pam[4];
	float screen_pam1[4];
	float screen_pam2[4];
	float rot_zdir[4];
	float rot_ydir[4];
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
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

struct FOG_AREA_DATA
{
	short x0;
	short z0;
	short x1;
	short z1;
	unsigned short env;
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

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct _VbWVSMATRIX
{
	float wvm[4][4];
	float vsm[4][4];
	float wsm[4][4];
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

union _anon1
{
	shBattleFight fight;
	shBattleShot shot;
};

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
_VbSCREENINFO VbScreenInfo;
_VbWVSMATRIX VbWvsMatrix;
_anon0 cam0;
FOG_WORK fwork;

void sh2gfw_fogtest_calcmain();
void sh2gfw_init_fogTexture();
void sh2gfw_send_fogtex();

// 
// Start address: 0x16e760
void sh2gfw_fogtest_calcmain()
{
	float m0[4][4];
	float v1[4];
	float v0[4];
	float ppos[4];
	// Line 54, Address: 0x16e760, Func Offset: 0
	// Line 60, Address: 0x16e768, Func Offset: 0x8
	// Line 66, Address: 0x16e77c, Func Offset: 0x1c
	// Line 67, Address: 0x16e788, Func Offset: 0x28
	// Line 69, Address: 0x16e794, Func Offset: 0x34
	// Line 70, Address: 0x16e7b4, Func Offset: 0x54
	// Line 71, Address: 0x16e7c0, Func Offset: 0x60
	// Line 72, Address: 0x16e7c8, Func Offset: 0x68
	// Line 73, Address: 0x16e7d4, Func Offset: 0x74
	// Line 74, Address: 0x16e7dc, Func Offset: 0x7c
	// Line 77, Address: 0x16e7e8, Func Offset: 0x88
	// Line 78, Address: 0x16e7fc, Func Offset: 0x9c
	// Line 79, Address: 0x16e808, Func Offset: 0xa8
	// Line 80, Address: 0x16e81c, Func Offset: 0xbc
	// Line 82, Address: 0x16e828, Func Offset: 0xc8
	// Line 86, Address: 0x16e838, Func Offset: 0xd8
	// Line 87, Address: 0x16e848, Func Offset: 0xe8
	// Line 88, Address: 0x16e854, Func Offset: 0xf4
	// Line 89, Address: 0x16e870, Func Offset: 0x110
	// Line 90, Address: 0x16e888, Func Offset: 0x128
	// Line 91, Address: 0x16e89c, Func Offset: 0x13c
	// Line 92, Address: 0x16e8b4, Func Offset: 0x154
	// Line 93, Address: 0x16e8cc, Func Offset: 0x16c
	// Line 94, Address: 0x16e8d4, Func Offset: 0x174
	// Line 95, Address: 0x16e8e4, Func Offset: 0x184
	// Line 101, Address: 0x16e8f4, Func Offset: 0x194
	// Line 103, Address: 0x16e8fc, Func Offset: 0x19c
	// Line 105, Address: 0x16e904, Func Offset: 0x1a4
	// Func End, Address: 0x16e914, Func Offset: 0x1b4
}

// 
// Start address: 0x16e920
void sh2gfw_init_fogTexture()
{
	// Line 160, Address: 0x16e920, Func Offset: 0
	// Func End, Address: 0x16e928, Func Offset: 0x8
}

// 
// Start address: 0x16e930
void sh2gfw_send_fogtex()
{
	unsigned long* fog_Now_pTex0;
	// Line 168, Address: 0x16e930, Func Offset: 0
	// Line 172, Address: 0x16e93c, Func Offset: 0xc
	// Line 208, Address: 0x16e948, Func Offset: 0x18
	// Line 211, Address: 0x16e95c, Func Offset: 0x2c
	// Func End, Address: 0x16e970, Func Offset: 0x40
}

