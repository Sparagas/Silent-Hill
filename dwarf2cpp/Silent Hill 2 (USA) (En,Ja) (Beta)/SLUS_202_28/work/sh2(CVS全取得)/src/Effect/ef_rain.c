typedef struct _CL_HITPOLY_HEAD;
typedef struct _VbSCREENINFO;
typedef struct shAttackInfo;
typedef struct SPACK_STATIC_DATA;
typedef struct _CL_VHIT_CHARA;
typedef struct _EF_EF_RAINDROP_TASK;
typedef struct SubCharacter;
typedef struct _shTskEXECUTE;
typedef union _anon0;
typedef struct _CL_VHIT_RESULT;
typedef struct _EF_RAIN_LINE;
typedef union _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _shTskTASK;
typedef struct shSkelton;
typedef struct _anon4;
typedef union Q_WORDDATA;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct _EF_RAINDROP_DATA;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct SPACK_OT_DATA;
typedef struct _anon5;
typedef struct shBattleFight;
typedef struct SPACK_ENV_DATA;
typedef struct sh2gfw_Env_ctl;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct SPACK_DATA;
typedef struct shBattleInfo;
typedef struct _VbWVSMATRIX;
typedef struct _CL_VHIT_WALL;

typedef void(*type_4)(void*);
typedef void(*type_19)(SubCharacter*);
typedef void(*type_22)(SubCharacter*);
typedef void(*type_34)(_shTskTASK*);

typedef float type_0[4][4];
typedef int type_1[4][2];
typedef unsigned char type_2[108];
typedef unsigned short type_3[4];
typedef unsigned char type_5[4][2];
typedef float type_6[4][2];
typedef unsigned char type_7[14];
typedef int type_8[4];
typedef unsigned char type_9[492];
typedef float type_10[4];
typedef unsigned char type_11[4];
typedef float type_12[4];
typedef float type_13[4][4];
typedef shAttackInfo type_14[66];
typedef unsigned char type_15[97];
typedef float type_16[4];
typedef float type_17[4][4];
typedef unsigned int type_18[4];
typedef unsigned short type_20[8];
typedef float type_21[4];
typedef unsigned char type_23[16];
typedef int type_24[4];
typedef short type_25[8];
typedef char type_26[16];
typedef _shTskTASK* type_27[8];
typedef unsigned char type_28[4];
typedef float type_29[4];
typedef unsigned long type_30[2];
typedef float type_31[4];
typedef float type_32[4][4];
typedef unsigned char type_33[20];
typedef unsigned char type_35[14];
typedef unsigned char type_36[69];
typedef int type_37[2];
typedef float type_38[4][15];

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
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
	_anon0 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

struct SPACK_STATIC_DATA
{
	unsigned short GifNLOOP;
	unsigned short DmaQwc;
	unsigned int PRE_PRIM_FLG_NREG;
	unsigned long REGS;
};

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

struct _EF_EF_RAINDROP_TASK
{
	_shTskEXECUTE exe;
	_EF_RAINDROP_DATA data;
	unsigned char freemem[108];
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
	_anon4 mat;
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

struct _shTskEXECUTE
{
	void(*adrs)(void*);
	void* next;
	void* prev;
	int mode;
	int atr;
};

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon1 hobj;
};

struct _EF_RAIN_LINE
{
	float v[4][2];
	unsigned char rgba[4];
};

union _anon1
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct _anon2
{
	int spoton;
	float ambcol[4];
	float lightpos[4];
	float lightdir[4];
	float lightcol[4];
	float lightpar[4];
	float wcm[4][4];
};

struct _anon3
{
	float x;
	float y;
	float z;
	float w;
};

struct _shTskTASK
{
	_shTskEXECUTE exe;
	unsigned char freemem[492];
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon4 src_m;
	_anon3 src_t;
	_anon4 des_m;
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

struct _anon4
{
	float d[4][4];
};

union Q_WORDDATA
{
	unsigned int ui32[4];
	unsigned short us16[8];
	float fl32[4];
	unsigned char uc8[16];
	int si32[4];
	short ss16[8];
	char sc8[16];
	unsigned long ul64[2];
	<unknown fundamental type (0xa510)> ul128;
};

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA dirvec;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

struct _EF_RAINDROP_DATA
{
	int life;
	int pad[2];
	float p[4][15];
	float v[4][4];
};

struct sh2gfw_POINTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
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

struct _anon5
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

struct sh2gfw_Env_ctl
{
	float camera_p[4];
	float camera_zd[4];
	float camera_yd[4];
	float camera_rot[4];
	float camera_ido[4];
	float camera_parms[4];
	float camera_parms2[4];
	float camera_mat[4][4];
	float objclip_mat[4][4];
	Q_WORDDATA block_index;
	float p_light0[4];
	float p_light1[4];
	float p_light2[4];
	float p_color0[4];
	float p_color1[4];
	float p_color2[4];
	float ambient[4];
	float VertexAmbient[4];
	float BaseAmbient[4];
	float BaseVertexColor[4];
	float spot0_Wpos[4];
	float spot0_Wdir[4];
	sh2gfw_SPOTL_MATRIX SpotL0;
	float spot1_Wpos[4];
	float spot1_Wdir[4];
	sh2gfw_SPOTL_MATRIX SpotL1;
	float CharacterLightFactor[4];
	float CharacterLightFactor_Other[4];
	sh2gfw_SPOTL_MATRIX SpotL2;
	float point0_localpos[4];
	sh2gfw_POINTL_MATRIX PointL0;
	unsigned short light_mode;
	unsigned short weather_mode;
	unsigned short time_mode;
	unsigned short now_block;
	unsigned short mode_buf[4];
	Q_WORDDATA stat_ctl_1;
	Q_WORDDATA stat_ctl_2;
	Q_WORDDATA fogcolor;
	Q_WORDDATA fogparm;
	Q_WORDDATA MoveFogColor;
	Q_WORDDATA clearcolor;
	Q_WORDDATA random_seeds;
	Q_WORDDATA compo_shadow_env;
	Q_WORDDATA compo_shadow_test;
	Q_WORDDATA compo_shadow_alp;
	Q_WORDDATA compo_shadow_col;
	Q_WORDDATA compo_Fill_col;
	Q_WORDDATA NoiseCondition;
	Q_WORDDATA CopyFilterColor;
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

struct _VbWVSMATRIX
{
	float wvm[4][4];
	float vsm[4][4];
	float wsm[4][4];
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
void(*EFCTRainDropMain)(_shTskTASK*);
_shTskTASK* shTskTaskListTop[8];
SPACK_DATA spack;
_VbWVSMATRIX VbWvsMatrix;
_anon2 efRainDrawData;
_anon5 cam0;
sh2gfw_Env_ctl Env_ctl;
_VbSCREENINFO VbScreenInfo;

int EFCTSetRainDrop(int lev);
void EFCTDelRainDrop();
void EFCTRainDropMain(_shTskTASK* ptr);
void efRainDropInitSpray(_EF_RAINDROP_DATA* dat, float* pos);
int efRainDropDrawSpray(_EF_RAINDROP_DATA* dat);
void efRainDropDrawLINE(_EF_RAIN_LINE* p);

// 
// Start address: 0x22c4b0
int EFCTSetRainDrop(int lev)
{
	_EF_EF_RAINDROP_TASK* ptr;
	int i;
	// Line 88, Address: 0x22c4b0, Func Offset: 0
	// Line 92, Address: 0x22c4c4, Func Offset: 0x14
	// Line 94, Address: 0x22c4d0, Func Offset: 0x20
	// Line 95, Address: 0x22c4e4, Func Offset: 0x34
	// Line 97, Address: 0x22c4ec, Func Offset: 0x3c
	// Line 98, Address: 0x22c4f4, Func Offset: 0x44
	// Line 99, Address: 0x22c4f8, Func Offset: 0x48
	// Line 101, Address: 0x22c500, Func Offset: 0x50
	// Line 102, Address: 0x22c50c, Func Offset: 0x5c
	// Line 103, Address: 0x22c51c, Func Offset: 0x6c
	// Line 104, Address: 0x22c520, Func Offset: 0x70
	// Func End, Address: 0x22c538, Func Offset: 0x88
}

// 
// Start address: 0x22c540
void EFCTDelRainDrop()
{
	_shTskTASK* seekp;
	_shTskTASK* ptr;
	// Line 121, Address: 0x22c540, Func Offset: 0
	// Line 126, Address: 0x22c54c, Func Offset: 0xc
	// Line 131, Address: 0x22c55c, Func Offset: 0x1c
	// Line 132, Address: 0x22c574, Func Offset: 0x34
	// Line 134, Address: 0x22c57c, Func Offset: 0x3c
	// Line 135, Address: 0x22c580, Func Offset: 0x40
	// Line 136, Address: 0x22c588, Func Offset: 0x48
	// Line 137, Address: 0x22c590, Func Offset: 0x50
	// Func End, Address: 0x22c5a4, Func Offset: 0x64
}

// 
// Start address: 0x22c5b0
void EFCTRainDropMain(_shTskTASK* ptr)
{
	float m0[4][4];
	float pos[4];
	float camang[4];
	float dif;
	_CL_VHIT_RESULT res;
	_EF_RAINDROP_DATA* pt;
	float campos[4];
	int j;
	_EF_RAIN_LINE line;
	// Line 154, Address: 0x22c5b0, Func Offset: 0
	// Line 162, Address: 0x22c5cc, Func Offset: 0x1c
	// Line 164, Address: 0x22c5d0, Func Offset: 0x20
	// Line 166, Address: 0x22c5dc, Func Offset: 0x2c
	// Line 167, Address: 0x22c5e4, Func Offset: 0x34
	// Line 168, Address: 0x22c5e8, Func Offset: 0x38
	// Line 169, Address: 0x22c5ec, Func Offset: 0x3c
	// Line 172, Address: 0x22c5f0, Func Offset: 0x40
	// Line 173, Address: 0x22c600, Func Offset: 0x50
	// Line 174, Address: 0x22c610, Func Offset: 0x60
	// Line 176, Address: 0x22c620, Func Offset: 0x70
	// Line 184, Address: 0x22c648, Func Offset: 0x98
	// Line 185, Address: 0x22c660, Func Offset: 0xb0
	// Line 188, Address: 0x22c680, Func Offset: 0xd0
	// Line 189, Address: 0x22c6a0, Func Offset: 0xf0
	// Line 190, Address: 0x22c6e0, Func Offset: 0x130
	// Line 194, Address: 0x22c71c, Func Offset: 0x16c
	// Line 204, Address: 0x22c748, Func Offset: 0x198
	// Line 205, Address: 0x22c750, Func Offset: 0x1a0
	// Line 206, Address: 0x22c758, Func Offset: 0x1a8
	// Line 207, Address: 0x22c764, Func Offset: 0x1b4
	// Line 208, Address: 0x22c78c, Func Offset: 0x1dc
	// Line 209, Address: 0x22c79c, Func Offset: 0x1ec
	// Line 210, Address: 0x22c7cc, Func Offset: 0x21c
	// Line 213, Address: 0x22c7e0, Func Offset: 0x230
	// Line 215, Address: 0x22c7ec, Func Offset: 0x23c
	// Line 216, Address: 0x22c838, Func Offset: 0x288
	// Line 217, Address: 0x22c8a4, Func Offset: 0x2f4
	// Line 218, Address: 0x22c8f0, Func Offset: 0x340
	// Line 219, Address: 0x22c8f8, Func Offset: 0x348
	// Line 220, Address: 0x22c90c, Func Offset: 0x35c
	// Line 221, Address: 0x22c918, Func Offset: 0x368
	// Line 224, Address: 0x22c920, Func Offset: 0x370
	// Line 226, Address: 0x22c940, Func Offset: 0x390
	// Line 228, Address: 0x22c94c, Func Offset: 0x39c
	// Line 229, Address: 0x22c960, Func Offset: 0x3b0
	// Line 230, Address: 0x22c96c, Func Offset: 0x3bc
	// Line 231, Address: 0x22c978, Func Offset: 0x3c8
	// Line 233, Address: 0x22c990, Func Offset: 0x3e0
	// Line 234, Address: 0x22c998, Func Offset: 0x3e8
	// Line 237, Address: 0x22c9ac, Func Offset: 0x3fc
	// Line 238, Address: 0x22c9c4, Func Offset: 0x414
	// Line 239, Address: 0x22c9d8, Func Offset: 0x428
	// Line 241, Address: 0x22c9e8, Func Offset: 0x438
	// Line 242, Address: 0x22c9f8, Func Offset: 0x448
	// Line 243, Address: 0x22ca04, Func Offset: 0x454
	// Line 245, Address: 0x22ca0c, Func Offset: 0x45c
	// Line 247, Address: 0x22ca34, Func Offset: 0x484
	// Line 248, Address: 0x22ca38, Func Offset: 0x488
	// Line 253, Address: 0x22ca40, Func Offset: 0x490
	// Line 254, Address: 0x22ca54, Func Offset: 0x4a4
	// Line 259, Address: 0x22ca58, Func Offset: 0x4a8
	// Line 260, Address: 0x22ca60, Func Offset: 0x4b0
	// Func End, Address: 0x22ca80, Func Offset: 0x4d0
}

// 
// Start address: 0x22ca80
void efRainDropInitSpray(_EF_RAINDROP_DATA* dat, float* pos)
{
	// Line 277, Address: 0x22ca80, Func Offset: 0
	// Line 278, Address: 0x22ca90, Func Offset: 0x10
	// Line 281, Address: 0x22ca98, Func Offset: 0x18
	// Line 282, Address: 0x22cab0, Func Offset: 0x30
	// Line 284, Address: 0x22cab8, Func Offset: 0x38
	// Line 285, Address: 0x22cac0, Func Offset: 0x40
	// Line 286, Address: 0x22cac8, Func Offset: 0x48
	// Line 288, Address: 0x22cad0, Func Offset: 0x50
	// Line 290, Address: 0x22cb14, Func Offset: 0x94
	// Line 292, Address: 0x22cb58, Func Offset: 0xd8
	// Line 293, Address: 0x22cb9c, Func Offset: 0x11c
	// Line 295, Address: 0x22cbe0, Func Offset: 0x160
	// Line 296, Address: 0x22cc04, Func Offset: 0x184
	// Func End, Address: 0x22cc18, Func Offset: 0x198
}

// 
// Start address: 0x22cc20
int efRainDropDrawSpray(_EF_RAINDROP_DATA* dat)
{
	_EF_RAIN_LINE line;
	int i;
	// Line 313, Address: 0x22cc20, Func Offset: 0
	// Line 317, Address: 0x22cc34, Func Offset: 0x14
	// Line 318, Address: 0x22cc3c, Func Offset: 0x1c
	// Line 319, Address: 0x22cc40, Func Offset: 0x20
	// Line 320, Address: 0x22cc44, Func Offset: 0x24
	// Line 322, Address: 0x22cc48, Func Offset: 0x28
	// Line 324, Address: 0x22cc54, Func Offset: 0x34
	// Line 325, Address: 0x22cc68, Func Offset: 0x48
	// Line 326, Address: 0x22cc74, Func Offset: 0x54
	// Line 327, Address: 0x22cc8c, Func Offset: 0x6c
	// Line 328, Address: 0x22cc94, Func Offset: 0x74
	// Line 330, Address: 0x22cca4, Func Offset: 0x84
	// Line 332, Address: 0x22ccb0, Func Offset: 0x90
	// Line 333, Address: 0x22ccb8, Func Offset: 0x98
	// Line 336, Address: 0x22ccc4, Func Offset: 0xa4
	// Line 337, Address: 0x22ccc8, Func Offset: 0xa8
	// Func End, Address: 0x22cce0, Func Offset: 0xc0
}

// 
// Start address: 0x22cce0
void efRainDropDrawLINE(_EF_RAIN_LINE* p)
{
	float perc;
	float perc;
	float zn;
	float w;
	unsigned char rgba[4][2];
	unsigned char alpha;
	unsigned char fog;
	int i;
	int sp[4][2];
	float z;
	float q;
	// Line 354, Address: 0x22cce0, Func Offset: 0
	// Line 355, Address: 0x22ccf8, Func Offset: 0x18
	// Line 365, Address: 0x22cd00, Func Offset: 0x20
	// Line 367, Address: 0x22cd0c, Func Offset: 0x2c
	// Line 374, Address: 0x22cd40, Func Offset: 0x60
	// Line 379, Address: 0x22cd54, Func Offset: 0x74
	// Line 380, Address: 0x22cd5c, Func Offset: 0x7c
	// Line 381, Address: 0x22cd6c, Func Offset: 0x8c
	// Line 384, Address: 0x22cd9c, Func Offset: 0xbc
	// Line 387, Address: 0x22ce0c, Func Offset: 0x12c
	// Line 388, Address: 0x22ce30, Func Offset: 0x150
	// Line 389, Address: 0x22ce3c, Func Offset: 0x15c
	// Line 390, Address: 0x22ce48, Func Offset: 0x168
	// Line 392, Address: 0x22ce54, Func Offset: 0x174
	// Line 396, Address: 0x22ce64, Func Offset: 0x184
	// Line 403, Address: 0x22ce90, Func Offset: 0x1b0
	// Line 404, Address: 0x22cec0, Func Offset: 0x1e0
	// Line 405, Address: 0x22cef4, Func Offset: 0x214
	// Line 411, Address: 0x22cefc, Func Offset: 0x21c
	// Line 412, Address: 0x22cf1c, Func Offset: 0x23c
	// Line 416, Address: 0x22cf7c, Func Offset: 0x29c
	// Line 418, Address: 0x22cf98, Func Offset: 0x2b8
	// Line 419, Address: 0x22cfb4, Func Offset: 0x2d4
	// Line 420, Address: 0x22d004, Func Offset: 0x324
	// Line 421, Address: 0x22d044, Func Offset: 0x364
	// Line 422, Address: 0x22d088, Func Offset: 0x3a8
	// Line 423, Address: 0x22d0c0, Func Offset: 0x3e0
	// Func End, Address: 0x22d0dc, Func Offset: 0x3fc
}

