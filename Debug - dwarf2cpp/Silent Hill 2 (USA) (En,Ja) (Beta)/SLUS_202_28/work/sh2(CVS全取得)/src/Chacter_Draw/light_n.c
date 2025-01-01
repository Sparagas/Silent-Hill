typedef union _anon0;
typedef struct _CL_HITPOLY_HEAD;
typedef struct Light;
typedef struct sh2gfw_ModelDraw_MAN;
typedef struct shSkelton;
typedef struct SubCharacter;
typedef struct _anon1;
typedef struct _anon2;
typedef struct LightWork;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct shBattleInfo;
typedef struct _CL_VHIT_WALL;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef struct _VbWVSMATRIX;
typedef union _anon3;
typedef struct _CL_VHIT_RESULT;

typedef int(*type_3)(void*, void*);
typedef void(*type_5)(SubCharacter*);
typedef void(*type_10)(SubCharacter*);
typedef int(*type_31)(void*, void*);

typedef Light* type_0[12];
typedef float type_1[4];
typedef shAttackInfo type_2[66];
typedef float type_4[4];
typedef unsigned short type_6[4];
typedef float type_7[4];
typedef float type_8[4][4];
typedef unsigned short type_9[4];
typedef float type_11[4];
typedef float type_12[4][4];
typedef unsigned short type_13[2];
typedef unsigned char type_14[4];
typedef unsigned short type_15[2];
typedef int type_16[6];
typedef float type_17[4];
typedef int type_18[6];
typedef float type_19[4];
typedef void* type_20[6];
typedef float type_21[4];
typedef float type_22[4][4];
typedef Light type_23[12];
typedef Light* type_24[12];
typedef Light* type_25[12];
typedef float type_26[4][4][2];
typedef float type_27[4][4][2];
typedef float type_28[4][4][2];
typedef Light* type_29[6];
typedef Light* type_30[8];

union _anon0
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
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

struct Light
{
	int kind;
	float intensity;
	float influence;
	float intensity2;
	float influence2;
	short cid;
	short fakekind;
	float inf_fac;
	void* DrawEnv_LightData;
	float pos[4];
	float vpos[4];
	float dir[4];
	float vdir[4];
	float color[4];
	float f_start;
	float f_end;
	float s_start;
	float s_end;
	float f_a;
	float f_b;
	float s_a;
	float s_b;
	float f_ra;
	float f_rb;
};

struct sh2gfw_ModelDraw_MAN
{
	unsigned int chara_id;
	SubCharacter* testSubChar;
	void* Model_Head;
	void* pModel_Header;
	void* sh_Model;
	void* pAnime;
	void* pCluster;
	void* pKg1Work;
	short allnum;
	short nowtex;
	unsigned short TB_change_VU1num;
	unsigned short TB_change_VU1now;
	unsigned short TB_change_VU1[4];
	unsigned short TB_index_VU1[4];
	unsigned short TB_change_VU0num;
	unsigned short TB_change_VU0now;
	unsigned short TB_change_VU0[2];
	unsigned short TB_index_VU0[2];
	int chr_slotid[6];
	int chr_cid[6];
	int d1cid;
	int d2c1d;
	void* pTexMAN[6];
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon2 src_m;
	_anon1 src_t;
	_anon2 des_m;
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
	_anon2 mat;
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

struct _anon1
{
	float x;
	float y;
	float z;
	float w;
};

struct _anon2
{
	float d[4][4];
};

struct LightWork
{
	Light lights[12];
	int n_valid_parallels;
	int n_valid_parallel_matrices;
	int n_valid_extras;
	int n_valid_shadows;
	float nlms[4][4][2];
	float vnlms[4][4][2];
	float lcms[4][4][2];
	Light* valid_extras[6];
	Light* valid_shadows[8];
	float reflection_brightness;
	float reflection_color[4];
	float nhm[4][4];
	float vnhm[4][4];
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

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon3 hit_check;
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

struct _VbWVSMATRIX
{
	float wvm[4][4];
	float vsm[4][4];
	float wsm[4][4];
};

union _anon3
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon0 hobj;
};

shAttackInfo sh2_attack_list[66];
float monochrome_vector[4];
LightWork light_work;
float unit_fvector_z[4];
sh2gfw_ModelDraw_MAN UniModelDW_Man;
_VbWVSMATRIX VbWvsMatrix;
float zero_fmatrix[4][4];
float unit_fvector_w[4];
float unit_fvector_y[4];
int(*CompareByIntensity)(void*, void*);
float zero_fvector[4];
int(*CompareByInfluence)(void*, void*);

float ktClampFloat(float x, float l, float h);
Light* LightPointer(int n);
void UpdateIntensity(Light* l);
void UpdateFParam(Light* l);
void UpdateSParam(Light* l);
void LightDelete(int n);
void LightDeleteAll();
void LightSetParallel(int n, float* dir, float* color);
void LightSetPoint(int n, float* pos, float* color, float f_start, float f_end);
void LightSetFakePoint(int n, float* pos, float* color, float f_start, float f_end);
void LightSetFakeSpot(int n, float* pos, float* color, float f_start, float f_end, float s_start, float s_end);
void sh_Set_DrawEnvLightData(int n, void* ded);
void sh_Kari_LightSetSpot(int n, float* pos, float* dir, float* color, float* sv);
void LightSetReflection(int n, float* dir, float* color);
void LightSetPos(int n, float* pos);
void LightSetDir(int n, float* dir);
void LightSetColor(int n, float* color);
void LightSetFalloff(int n, float f_start, float f_end);
void LightSetSpread(int n, float s_start, float s_end);
void CalcInfluence(Light* l, float* center, float radius);
int CompareByIntensity(void* xx, void* yy);
int CompareByInfluence(void* xx, void* yy);
void UpdateViewParams();
void UpdateParallels();
void UpdateReflections();
void UpdateExtras(float* center, float radius);
void LightUpdateInfoByScene();
void LightUpdateInfoByPos(float* center, float radius);
int LightNValidParallelMatrices();
void LightGetNthViewNLM(float nlm[4], int n);
void LightGetNthLCM(float lcm[4], int n);
float LightReflectionBrightness();
void LightGetReflectionColor(float* color);
float* LightReflectionColor();
void LightGetNthViewNHM(float nhm[4]);
int LightNValidExtras();
Light* LightNthValidExtra(int n);

// 
// Start address: 0x126060
float ktClampFloat(float x, float l, float h)
{
	// Line 50, Address: 0x126060, Func Offset: 0
	// Line 51, Address: 0x12609c, Func Offset: 0x3c
	// Func End, Address: 0x1260a4, Func Offset: 0x44
}

// 
// Start address: 0x1260b0
Light* LightPointer(int n)
{
	// Line 57, Address: 0x1260b0, Func Offset: 0
	// Line 58, Address: 0x1260b8, Func Offset: 0x8
	// Line 59, Address: 0x1260ec, Func Offset: 0x3c
	// Line 60, Address: 0x126104, Func Offset: 0x54
	// Func End, Address: 0x126114, Func Offset: 0x64
}

// 
// Start address: 0x126120
void UpdateIntensity(Light* l)
{
	float* c;
	// Line 113, Address: 0x126120, Func Offset: 0
	// Line 115, Address: 0x126130, Func Offset: 0x10
	// Line 116, Address: 0x126148, Func Offset: 0x28
	// Line 117, Address: 0x126158, Func Offset: 0x38
	// Func End, Address: 0x12616c, Func Offset: 0x4c
}

// 
// Start address: 0x126170
void UpdateFParam(Light* l)
{
	float b;
	float a;
	// Line 132, Address: 0x126170, Func Offset: 0
	// Line 133, Address: 0x12618c, Func Offset: 0x1c
	// Line 134, Address: 0x126194, Func Offset: 0x24
	// Line 135, Address: 0x126198, Func Offset: 0x28
	// Line 145, Address: 0x12619c, Func Offset: 0x2c
	// Line 146, Address: 0x1261b0, Func Offset: 0x40
	// Line 147, Address: 0x1261c0, Func Offset: 0x50
	// Func End, Address: 0x1261c8, Func Offset: 0x58
}

// 
// Start address: 0x1261d0
void UpdateSParam(Light* l)
{
	float b;
	float a;
	// Line 162, Address: 0x1261d0, Func Offset: 0
	// Line 163, Address: 0x1261ec, Func Offset: 0x1c
	// Line 164, Address: 0x1261f4, Func Offset: 0x24
	// Line 165, Address: 0x1261f8, Func Offset: 0x28
	// Line 166, Address: 0x1261fc, Func Offset: 0x2c
	// Func End, Address: 0x126204, Func Offset: 0x34
}

// 
// Start address: 0x126210
void LightDelete(int n)
{
	Light* l;
	// Line 173, Address: 0x126210, Func Offset: 0
	// Line 174, Address: 0x126218, Func Offset: 0x8
	// Line 175, Address: 0x126220, Func Offset: 0x10
	// Line 176, Address: 0x126224, Func Offset: 0x14
	// Func End, Address: 0x126234, Func Offset: 0x24
}

// 
// Start address: 0x126240
void LightDeleteAll()
{
	int i;
	// Line 192, Address: 0x126240, Func Offset: 0
	// Line 194, Address: 0x12624c, Func Offset: 0xc
	// Line 195, Address: 0x126258, Func Offset: 0x18
	// Line 196, Address: 0x126264, Func Offset: 0x24
	// Line 197, Address: 0x126278, Func Offset: 0x38
	// Func End, Address: 0x12628c, Func Offset: 0x4c
}

// 
// Start address: 0x126290
void LightSetParallel(int n, float* dir, float* color)
{
	Light* l;
	// Line 204, Address: 0x126290, Func Offset: 0
	// Line 205, Address: 0x1262b4, Func Offset: 0x24
	// Line 206, Address: 0x1262c0, Func Offset: 0x30
	// Line 207, Address: 0x1262d4, Func Offset: 0x44
	// Line 208, Address: 0x1262dc, Func Offset: 0x4c
	// Line 209, Address: 0x1262ec, Func Offset: 0x5c
	// Line 210, Address: 0x1262fc, Func Offset: 0x6c
	// Func End, Address: 0x12631c, Func Offset: 0x8c
}

// 
// Start address: 0x126320
void LightSetPoint(int n, float* pos, float* color, float f_start, float f_end)
{
	Light* l;
	// Line 217, Address: 0x126320, Func Offset: 0
	// Line 218, Address: 0x126354, Func Offset: 0x34
	// Line 219, Address: 0x126360, Func Offset: 0x40
	// Line 220, Address: 0x126374, Func Offset: 0x54
	// Line 221, Address: 0x12637c, Func Offset: 0x5c
	// Line 222, Address: 0x12638c, Func Offset: 0x6c
	// Line 223, Address: 0x1263a0, Func Offset: 0x80
	// Line 224, Address: 0x1263b0, Func Offset: 0x90
	// Line 225, Address: 0x1263c4, Func Offset: 0xa4
	// Func End, Address: 0x1263ec, Func Offset: 0xcc
}

// 
// Start address: 0x1263f0
void LightSetFakePoint(int n, float* pos, float* color, float f_start, float f_end)
{
	Light* l;
	// Line 229, Address: 0x1263f0, Func Offset: 0
	// Line 230, Address: 0x126424, Func Offset: 0x34
	// Line 231, Address: 0x126430, Func Offset: 0x40
	// Line 232, Address: 0x126444, Func Offset: 0x54
	// Line 233, Address: 0x12644c, Func Offset: 0x5c
	// Line 234, Address: 0x126450, Func Offset: 0x60
	// Line 235, Address: 0x126460, Func Offset: 0x70
	// Line 236, Address: 0x126474, Func Offset: 0x84
	// Line 237, Address: 0x126484, Func Offset: 0x94
	// Line 238, Address: 0x126498, Func Offset: 0xa8
	// Func End, Address: 0x1264c0, Func Offset: 0xd0
}

// 
// Start address: 0x1264c0
void LightSetFakeSpot(int n, float* pos, float* color, float f_start, float f_end, float s_start, float s_end)
{
	Light* l;
	// Line 244, Address: 0x1264c0, Func Offset: 0
	// Line 245, Address: 0x126504, Func Offset: 0x44
	// Line 246, Address: 0x126510, Func Offset: 0x50
	// Line 247, Address: 0x126524, Func Offset: 0x64
	// Line 248, Address: 0x12652c, Func Offset: 0x6c
	// Line 249, Address: 0x126534, Func Offset: 0x74
	// Line 250, Address: 0x126544, Func Offset: 0x84
	// Line 251, Address: 0x126558, Func Offset: 0x98
	// Line 252, Address: 0x126568, Func Offset: 0xa8
	// Line 253, Address: 0x12657c, Func Offset: 0xbc
	// Line 254, Address: 0x126590, Func Offset: 0xd0
	// Func End, Address: 0x1265c0, Func Offset: 0x100
}

// 
// Start address: 0x1265c0
void sh_Set_DrawEnvLightData(int n, void* ded)
{
	Light* plight;
	// Line 274, Address: 0x1265c0, Func Offset: 0
	// Line 276, Address: 0x1265d0, Func Offset: 0x10
	// Line 277, Address: 0x1265d8, Func Offset: 0x18
	// Line 278, Address: 0x1265dc, Func Offset: 0x1c
	// Func End, Address: 0x1265f0, Func Offset: 0x30
}

// 
// Start address: 0x1265f0
void sh_Kari_LightSetSpot(int n, float* pos, float* dir, float* color, float* sv)
{
	Light* l;
	// Line 285, Address: 0x1265f0, Func Offset: 0
	// Line 297, Address: 0x126624, Func Offset: 0x34
	// Line 298, Address: 0x126630, Func Offset: 0x40
	// Line 299, Address: 0x126644, Func Offset: 0x54
	// Line 300, Address: 0x12664c, Func Offset: 0x5c
	// Line 301, Address: 0x12665c, Func Offset: 0x6c
	// Line 302, Address: 0x12666c, Func Offset: 0x7c
	// Line 311, Address: 0x12667c, Func Offset: 0x8c
	// Line 312, Address: 0x126684, Func Offset: 0x94
	// Line 314, Address: 0x12668c, Func Offset: 0x9c
	// Line 315, Address: 0x126694, Func Offset: 0xa4
	// Line 327, Address: 0x12669c, Func Offset: 0xac
	// Line 328, Address: 0x1266b0, Func Offset: 0xc0
	// Line 342, Address: 0x1266c8, Func Offset: 0xd8
	// Line 343, Address: 0x1266cc, Func Offset: 0xdc
	// Line 358, Address: 0x1266ec, Func Offset: 0xfc
	// Line 359, Address: 0x126708, Func Offset: 0x118
	// Line 362, Address: 0x126718, Func Offset: 0x128
	// Func End, Address: 0x126740, Func Offset: 0x150
}

// 
// Start address: 0x126740
void LightSetReflection(int n, float* dir, float* color)
{
	Light* l;
	// Line 403, Address: 0x126740, Func Offset: 0
	// Line 405, Address: 0x126764, Func Offset: 0x24
	// Line 406, Address: 0x126770, Func Offset: 0x30
	// Line 407, Address: 0x126784, Func Offset: 0x44
	// Line 408, Address: 0x12678c, Func Offset: 0x4c
	// Line 409, Address: 0x12679c, Func Offset: 0x5c
	// Line 410, Address: 0x1267ac, Func Offset: 0x6c
	// Func End, Address: 0x1267cc, Func Offset: 0x8c
}

// 
// Start address: 0x1267d0
void LightSetPos(int n, float* pos)
{
	Light* l;
	// Line 428, Address: 0x1267d0, Func Offset: 0
	// Line 429, Address: 0x1267e0, Func Offset: 0x10
	// Line 430, Address: 0x1267e8, Func Offset: 0x18
	// Line 431, Address: 0x1267f8, Func Offset: 0x28
	// Func End, Address: 0x12680c, Func Offset: 0x3c
}

// 
// Start address: 0x126810
void LightSetDir(int n, float* dir)
{
	Light* l;
	// Line 438, Address: 0x126810, Func Offset: 0
	// Line 439, Address: 0x126820, Func Offset: 0x10
	// Line 440, Address: 0x126828, Func Offset: 0x18
	// Line 441, Address: 0x126868, Func Offset: 0x58
	// Line 442, Address: 0x12687c, Func Offset: 0x6c
	// Line 443, Address: 0x126884, Func Offset: 0x74
	// Line 451, Address: 0x126894, Func Offset: 0x84
	// Func End, Address: 0x1268a8, Func Offset: 0x98
}

// 
// Start address: 0x1268b0
void LightSetColor(int n, float* color)
{
	Light* l;
	// Line 457, Address: 0x1268b0, Func Offset: 0
	// Line 458, Address: 0x1268c4, Func Offset: 0x14
	// Line 459, Address: 0x1268d0, Func Offset: 0x20
	// Line 460, Address: 0x1268e0, Func Offset: 0x30
	// Line 461, Address: 0x1268ec, Func Offset: 0x3c
	// Func End, Address: 0x126904, Func Offset: 0x54
}

// 
// Start address: 0x126910
void LightSetFalloff(int n, float f_start, float f_end)
{
	Light* l;
	// Line 467, Address: 0x126910, Func Offset: 0
	// Line 468, Address: 0x126928, Func Offset: 0x18
	// Line 469, Address: 0x126934, Func Offset: 0x24
	// Line 470, Address: 0x126938, Func Offset: 0x28
	// Line 471, Address: 0x12693c, Func Offset: 0x2c
	// Line 472, Address: 0x126944, Func Offset: 0x34
	// Func End, Address: 0x12695c, Func Offset: 0x4c
}

// 
// Start address: 0x126960
void LightSetSpread(int n, float s_start, float s_end)
{
	Light* l;
	// Line 479, Address: 0x126960, Func Offset: 0
	// Line 480, Address: 0x126978, Func Offset: 0x18
	// Line 481, Address: 0x126984, Func Offset: 0x24
	// Line 482, Address: 0x126988, Func Offset: 0x28
	// Line 483, Address: 0x12698c, Func Offset: 0x2c
	// Line 484, Address: 0x126994, Func Offset: 0x34
	// Func End, Address: 0x1269ac, Func Offset: 0x4c
}

// 
// Start address: 0x1269b0
void CalcInfluence(Light* l, float* center, float radius)
{
	float f_inf;
	float dist;
	float diff[4];
	// Line 501, Address: 0x1269b0, Func Offset: 0
	// Line 502, Address: 0x1269c8, Func Offset: 0x18
	// Line 504, Address: 0x126a0c, Func Offset: 0x5c
	// Line 505, Address: 0x126a10, Func Offset: 0x60
	// Line 506, Address: 0x126a14, Func Offset: 0x64
	// Line 508, Address: 0x126a1c, Func Offset: 0x6c
	// Line 510, Address: 0x126a34, Func Offset: 0x84
	// Line 511, Address: 0x126a3c, Func Offset: 0x8c
	// Line 512, Address: 0x126a44, Func Offset: 0x94
	// Line 544, Address: 0x126a4c, Func Offset: 0x9c
	// Line 549, Address: 0x126a5c, Func Offset: 0xac
	// Line 552, Address: 0x126a7c, Func Offset: 0xcc
	// Line 554, Address: 0x126aa4, Func Offset: 0xf4
	// Line 558, Address: 0x126aa8, Func Offset: 0xf8
	// Line 561, Address: 0x126ad0, Func Offset: 0x120
	// Line 564, Address: 0x126ad8, Func Offset: 0x128
	// Line 566, Address: 0x126ae8, Func Offset: 0x138
	// Line 567, Address: 0x126b0c, Func Offset: 0x15c
	// Line 568, Address: 0x126b30, Func Offset: 0x180
	// Line 575, Address: 0x126b68, Func Offset: 0x1b8
	// Line 576, Address: 0x126b74, Func Offset: 0x1c4
	// Line 580, Address: 0x126b80, Func Offset: 0x1d0
	// Func End, Address: 0x126b98, Func Offset: 0x1e8
}

// 
// Start address: 0x126ba0
int CompareByIntensity(void* xx, void* yy)
{
	Light* y;
	Light* x;
	Light** yp;
	Light** xp;
	// Line 590, Address: 0x126ba0, Func Offset: 0
	// Line 591, Address: 0x126ba4, Func Offset: 0x4
	// Line 592, Address: 0x126ba8, Func Offset: 0x8
	// Line 593, Address: 0x126bec, Func Offset: 0x4c
	// Func End, Address: 0x126bf4, Func Offset: 0x54
}

// 
// Start address: 0x126c00
int CompareByInfluence(void* xx, void* yy)
{
	Light* y;
	Light* x;
	Light** yp;
	Light** xp;
	// Line 603, Address: 0x126c00, Func Offset: 0
	// Line 604, Address: 0x126c04, Func Offset: 0x4
	// Line 605, Address: 0x126c08, Func Offset: 0x8
	// Line 606, Address: 0x126c4c, Func Offset: 0x4c
	// Func End, Address: 0x126c54, Func Offset: 0x54
}

// 
// Start address: 0x126c60
void UpdateViewParams()
{
	Light* l;
	int i;
	float wvm[4][4];
	// Line 616, Address: 0x126c60, Func Offset: 0
	// Line 619, Address: 0x126c70, Func Offset: 0x10
	// Line 620, Address: 0x126c84, Func Offset: 0x24
	// Line 621, Address: 0x126c90, Func Offset: 0x30
	// Line 623, Address: 0x126ca0, Func Offset: 0x40
	// Line 630, Address: 0x126ccc, Func Offset: 0x6c
	// Line 631, Address: 0x126cd0, Func Offset: 0x70
	// Line 632, Address: 0x126ce4, Func Offset: 0x84
	// Line 635, Address: 0x126cf8, Func Offset: 0x98
	// Line 636, Address: 0x126d0c, Func Offset: 0xac
	// Func End, Address: 0x126d24, Func Offset: 0xc4
}

// 
// Start address: 0x126d30
void UpdateParallels()
{
	float lcm[4];
	float vnlm[4];
	float nlm[4];
	Light* l;
	Light* plp;
	int i;
	int offset;
	int matrix_no;
	int n_parallels;
	Light* tmplight[12];
	// Line 646, Address: 0x126d30, Func Offset: 0
	// Line 648, Address: 0x126d44, Func Offset: 0x14
	// Line 653, Address: 0x126d48, Func Offset: 0x18
	// Line 654, Address: 0x126d50, Func Offset: 0x20
	// Line 655, Address: 0x126d58, Func Offset: 0x28
	// Line 656, Address: 0x126d64, Func Offset: 0x34
	// Line 657, Address: 0x126d88, Func Offset: 0x58
	// Line 658, Address: 0x126d9c, Func Offset: 0x6c
	// Line 659, Address: 0x126db0, Func Offset: 0x80
	// Line 662, Address: 0x126dc4, Func Offset: 0x94
	// Line 663, Address: 0x126dd0, Func Offset: 0xa0
	// Line 664, Address: 0x126ddc, Func Offset: 0xac
	// Line 669, Address: 0x126df4, Func Offset: 0xc4
	// Line 671, Address: 0x126e04, Func Offset: 0xd4
	// Line 672, Address: 0x126e08, Func Offset: 0xd8
	// Line 677, Address: 0x126e1c, Func Offset: 0xec
	// Line 680, Address: 0x126e2c, Func Offset: 0xfc
	// Line 681, Address: 0x126e30, Func Offset: 0x100
	// Line 682, Address: 0x126e34, Func Offset: 0x104
	// Line 683, Address: 0x126e40, Func Offset: 0x110
	// Line 684, Address: 0x126e4c, Func Offset: 0x11c
	// Line 686, Address: 0x126e64, Func Offset: 0x134
	// Line 687, Address: 0x126e70, Func Offset: 0x140
	// Line 688, Address: 0x126e84, Func Offset: 0x154
	// Line 689, Address: 0x126e88, Func Offset: 0x158
	// Line 690, Address: 0x126e8c, Func Offset: 0x15c
	// Line 691, Address: 0x126e9c, Func Offset: 0x16c
	// Line 692, Address: 0x126ea4, Func Offset: 0x174
	// Line 693, Address: 0x126eac, Func Offset: 0x17c
	// Line 694, Address: 0x126eb8, Func Offset: 0x188
	// Line 695, Address: 0x126ec0, Func Offset: 0x190
	// Line 700, Address: 0x126ec8, Func Offset: 0x198
	// Line 701, Address: 0x126ed8, Func Offset: 0x1a8
	// Line 702, Address: 0x126ee0, Func Offset: 0x1b0
	// Line 707, Address: 0x126ee8, Func Offset: 0x1b8
	// Line 711, Address: 0x126ef0, Func Offset: 0x1c0
	// Line 712, Address: 0x126ef4, Func Offset: 0x1c4
	// Line 713, Address: 0x126f18, Func Offset: 0x1e8
	// Line 714, Address: 0x126f1c, Func Offset: 0x1ec
	// Line 716, Address: 0x126f20, Func Offset: 0x1f0
	// Line 719, Address: 0x126f34, Func Offset: 0x204
	// Line 720, Address: 0x126f38, Func Offset: 0x208
	// Line 723, Address: 0x126f4c, Func Offset: 0x21c
	// Line 724, Address: 0x126f74, Func Offset: 0x244
	// Func End, Address: 0x126f90, Func Offset: 0x260
}

// 
// Start address: 0x126f90
void UpdateReflections()
{
	float* dir_y;
	float vnhm[4];
	float nhm[4];
	float vnlm[4];
	float nlm[4];
	float vhv[4];
	float hv[4];
	float* dir_z;
	Light* l;
	Light* l;
	int i;
	float vwm[4][4];
	float wvm[4][4];
	int n_reflections;
	Light* a[12];
	float nhm3[4];
	// Line 734, Address: 0x126f90, Func Offset: 0
	// Line 736, Address: 0x126fb4, Func Offset: 0x24
	// Line 742, Address: 0x126fb8, Func Offset: 0x28
	// Line 743, Address: 0x126fc0, Func Offset: 0x30
	// Line 744, Address: 0x126fd8, Func Offset: 0x48
	// Line 747, Address: 0x126ff0, Func Offset: 0x60
	// Line 748, Address: 0x126ffc, Func Offset: 0x6c
	// Line 749, Address: 0x127008, Func Offset: 0x78
	// Line 751, Address: 0x127020, Func Offset: 0x90
	// Line 754, Address: 0x127030, Func Offset: 0xa0
	// Line 755, Address: 0x127044, Func Offset: 0xb4
	// Line 760, Address: 0x12704c, Func Offset: 0xbc
	// Line 762, Address: 0x127060, Func Offset: 0xd0
	// Line 763, Address: 0x127070, Func Offset: 0xe0
	// Line 766, Address: 0x127078, Func Offset: 0xe8
	// Line 770, Address: 0x127094, Func Offset: 0x104
	// Line 771, Address: 0x127098, Func Offset: 0x108
	// Line 775, Address: 0x12709c, Func Offset: 0x10c
	// Line 776, Address: 0x1270ac, Func Offset: 0x11c
	// Line 777, Address: 0x1270bc, Func Offset: 0x12c
	// Line 778, Address: 0x1270d4, Func Offset: 0x144
	// Line 782, Address: 0x1270e4, Func Offset: 0x154
	// Line 783, Address: 0x1270ec, Func Offset: 0x15c
	// Line 784, Address: 0x1270f4, Func Offset: 0x164
	// Line 785, Address: 0x1270fc, Func Offset: 0x16c
	// Line 786, Address: 0x127108, Func Offset: 0x178
	// Line 787, Address: 0x127114, Func Offset: 0x184
	// Line 788, Address: 0x12711c, Func Offset: 0x18c
	// Line 789, Address: 0x127128, Func Offset: 0x198
	// Line 790, Address: 0x127134, Func Offset: 0x1a4
	// Line 796, Address: 0x127150, Func Offset: 0x1c0
	// Line 797, Address: 0x127158, Func Offset: 0x1c8
	// Line 798, Address: 0x127160, Func Offset: 0x1d0
	// Line 800, Address: 0x127164, Func Offset: 0x1d4
	// Line 801, Address: 0x1271a4, Func Offset: 0x214
	// Line 803, Address: 0x1271ac, Func Offset: 0x21c
	// Line 804, Address: 0x1271bc, Func Offset: 0x22c
	// Line 805, Address: 0x1271d0, Func Offset: 0x240
	// Line 806, Address: 0x1271e0, Func Offset: 0x250
	// Line 807, Address: 0x1271f0, Func Offset: 0x260
	// Line 808, Address: 0x127200, Func Offset: 0x270
	// Line 809, Address: 0x127214, Func Offset: 0x284
	// Line 810, Address: 0x127224, Func Offset: 0x294
	// Line 812, Address: 0x127238, Func Offset: 0x2a8
	// Line 813, Address: 0x127278, Func Offset: 0x2e8
	// Line 815, Address: 0x127280, Func Offset: 0x2f0
	// Line 816, Address: 0x127298, Func Offset: 0x308
	// Line 817, Address: 0x1272ac, Func Offset: 0x31c
	// Line 818, Address: 0x1272bc, Func Offset: 0x32c
	// Line 819, Address: 0x1272cc, Func Offset: 0x33c
	// Line 820, Address: 0x1272dc, Func Offset: 0x34c
	// Line 821, Address: 0x1272f0, Func Offset: 0x360
	// Line 822, Address: 0x127300, Func Offset: 0x370
	// Line 824, Address: 0x127314, Func Offset: 0x384
	// Line 827, Address: 0x127328, Func Offset: 0x398
	// Func End, Address: 0x127354, Func Offset: 0x3c4
}

// 
// Start address: 0x127360
void UpdateExtras(float* center, float radius)
{
	float ref_color[4];
	Light* l;
	float ref_color[4];
	Light* l;
	int i;
	int n_extras;
	Light* a[12];
	// Line 842, Address: 0x127360, Func Offset: 0
	// Line 844, Address: 0x127384, Func Offset: 0x24
	// Line 848, Address: 0x127388, Func Offset: 0x28
	// Line 852, Address: 0x127390, Func Offset: 0x30
	// Line 853, Address: 0x12739c, Func Offset: 0x3c
	// Line 854, Address: 0x1273ac, Func Offset: 0x4c
	// Line 857, Address: 0x1273d0, Func Offset: 0x70
	// Line 858, Address: 0x1273e4, Func Offset: 0x84
	// Line 862, Address: 0x127400, Func Offset: 0xa0
	// Line 865, Address: 0x127410, Func Offset: 0xb0
	// Line 866, Address: 0x127424, Func Offset: 0xc4
	// Line 870, Address: 0x12742c, Func Offset: 0xcc
	// Line 872, Address: 0x12743c, Func Offset: 0xdc
	// Line 873, Address: 0x12744c, Func Offset: 0xec
	// Line 874, Address: 0x127460, Func Offset: 0x100
	// Line 878, Address: 0x12747c, Func Offset: 0x11c
	// Line 882, Address: 0x127484, Func Offset: 0x124
	// Line 883, Address: 0x1274a0, Func Offset: 0x140
	// Line 885, Address: 0x1274c0, Func Offset: 0x160
	// Line 886, Address: 0x1274cc, Func Offset: 0x16c
	// Line 887, Address: 0x1274d8, Func Offset: 0x178
	// Line 888, Address: 0x1274e8, Func Offset: 0x188
	// Line 893, Address: 0x127504, Func Offset: 0x1a4
	// Line 895, Address: 0x127514, Func Offset: 0x1b4
	// Line 896, Address: 0x127524, Func Offset: 0x1c4
	// Line 898, Address: 0x12752c, Func Offset: 0x1cc
	// Line 899, Address: 0x127538, Func Offset: 0x1d8
	// Line 900, Address: 0x127558, Func Offset: 0x1f8
	// Line 902, Address: 0x127578, Func Offset: 0x218
	// Line 903, Address: 0x127584, Func Offset: 0x224
	// Line 907, Address: 0x1275a0, Func Offset: 0x240
	// Line 913, Address: 0x1275b0, Func Offset: 0x250
	// Line 914, Address: 0x1275c0, Func Offset: 0x260
	// Line 915, Address: 0x1275d4, Func Offset: 0x274
	// Line 924, Address: 0x1275ec, Func Offset: 0x28c
	// Func End, Address: 0x127610, Func Offset: 0x2b0
}

// 
// Start address: 0x127610
void LightUpdateInfoByScene()
{
	// Line 934, Address: 0x127610, Func Offset: 0
	// Line 941, Address: 0x127618, Func Offset: 0x8
	// Line 944, Address: 0x127620, Func Offset: 0x10
	// Line 948, Address: 0x127628, Func Offset: 0x18
	// Line 952, Address: 0x127630, Func Offset: 0x20
	// Func End, Address: 0x127640, Func Offset: 0x30
}

// 
// Start address: 0x127640
void LightUpdateInfoByPos(float* center, float radius)
{
	// Line 965, Address: 0x127640, Func Offset: 0
	// Line 966, Address: 0x127648, Func Offset: 0x8
	// Line 968, Address: 0x127650, Func Offset: 0x10
	// Func End, Address: 0x127660, Func Offset: 0x20
}

// 
// Start address: 0x127660
int LightNValidParallelMatrices()
{
	// Line 998, Address: 0x127660, Func Offset: 0
	// Line 999, Address: 0x127680, Func Offset: 0x20
	// Func End, Address: 0x127688, Func Offset: 0x28
}

// 
// Start address: 0x127690
void LightGetNthViewNLM(float nlm[4], int n)
{
	// Line 1012, Address: 0x127690, Func Offset: 0
	// Line 1013, Address: 0x127698, Func Offset: 0x8
	// Line 1014, Address: 0x1276cc, Func Offset: 0x3c
	// Line 1015, Address: 0x1276e8, Func Offset: 0x58
	// Func End, Address: 0x1276f8, Func Offset: 0x68
}

// 
// Start address: 0x127700
void LightGetNthLCM(float lcm[4], int n)
{
	// Line 1022, Address: 0x127700, Func Offset: 0
	// Line 1023, Address: 0x127708, Func Offset: 0x8
	// Line 1024, Address: 0x12773c, Func Offset: 0x3c
	// Line 1025, Address: 0x127758, Func Offset: 0x58
	// Func End, Address: 0x127768, Func Offset: 0x68
}

// 
// Start address: 0x127770
float LightReflectionBrightness()
{
	// Line 1033, Address: 0x127770, Func Offset: 0
	// Line 1034, Address: 0x127778, Func Offset: 0x8
	// Func End, Address: 0x127780, Func Offset: 0x10
}

// 
// Start address: 0x127780
void LightGetReflectionColor(float* color)
{
	// Line 1041, Address: 0x127780, Func Offset: 0
	// Line 1042, Address: 0x127788, Func Offset: 0x8
	// Line 1043, Address: 0x127798, Func Offset: 0x18
	// Func End, Address: 0x1277a8, Func Offset: 0x28
}

// 
// Start address: 0x1277b0
float* LightReflectionColor()
{
	// Line 1051, Address: 0x1277b0, Func Offset: 0
	// Line 1052, Address: 0x1277b8, Func Offset: 0x8
	// Func End, Address: 0x1277c0, Func Offset: 0x10
}

// 
// Start address: 0x1277c0
void LightGetNthViewNHM(float nhm[4])
{
	// Line 1064, Address: 0x1277c0, Func Offset: 0
	// Line 1065, Address: 0x1277c8, Func Offset: 0x8
	// Line 1066, Address: 0x1277d8, Func Offset: 0x18
	// Func End, Address: 0x1277e8, Func Offset: 0x28
}

// 
// Start address: 0x1277f0
int LightNValidExtras()
{
	// Line 1074, Address: 0x1277f0, Func Offset: 0
	// Line 1075, Address: 0x1277f8, Func Offset: 0x8
	// Func End, Address: 0x127800, Func Offset: 0x10
}

// 
// Start address: 0x127800
Light* LightNthValidExtra(int n)
{
	// Line 1082, Address: 0x127800, Func Offset: 0
	// Line 1083, Address: 0x127808, Func Offset: 0x8
	// Line 1085, Address: 0x12783c, Func Offset: 0x3c
	// Line 1089, Address: 0x127870, Func Offset: 0x70
	// Func End, Address: 0x127880, Func Offset: 0x80
}

