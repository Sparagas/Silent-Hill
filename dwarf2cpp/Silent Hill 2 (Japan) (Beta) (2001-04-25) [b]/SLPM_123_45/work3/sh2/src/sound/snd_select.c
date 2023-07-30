typedef struct shBattleFight;
typedef struct _SOUND_WORK;
typedef struct shBattleShot;
typedef struct _SOUND_DATA;
typedef struct shAttackInfo;
typedef union _anon0;
typedef struct _SND_LIMIT_AREA;
typedef struct _SND_ROAD_AREA;
typedef struct _NEAR_SOUND_DATA;


typedef char type_0[7];
typedef shAttackInfo type_1[46];
typedef float type_2[4];
typedef float type_3[4];
typedef float type_4[4][4];
typedef int type_5[7];
typedef char type_6[7];
typedef char type_7[7];
typedef _NEAR_SOUND_DATA type_8[32];

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct _SOUND_WORK
{
	_SOUND_DATA* sound_ary;
	float chara_pos[4];
	float half_w;
	int page;
	int near_sound_num;
	_NEAR_SOUND_DATA near_sound_ary[32];
	int on_num;
	char on_chan[7];
	int absNum;
	int nearindex;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct _SOUND_DATA
{
	_SND_ROAD_AREA lim_sw;
	int flags;
	int chanstat[7];
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

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _SND_LIMIT_AREA
{
	float min_hx;
	float max_hx;
	float min_hz;
	float max_hz;
	float min_hy;
	float max_hy;
};

struct _SND_ROAD_AREA
{
	float x0;
	float z0;
	float x1;
	float z1;
	float x2;
	float z2;
	float min_hy;
	float max_hy;
};

struct _NEAR_SOUND_DATA
{
	char inVol[7];
	char outVol[7];
	int errCode;
	int absIndex;
	float len;
};

shAttackInfo sh2_attack_list[46];
int tttkkk;
_SOUND_WORK snd_work;

void sndVolumeMain();
void sndGetSoundAryByCharaPos(_SOUND_WORK* w_p);

// 
// Start address: 0x21f0d0
void sndVolumeMain()
{
	int i;
	// Line 39, Address: 0x21f0d0, Func Offset: 0
	// Line 45, Address: 0x21f0dc, Func Offset: 0xc
	// Line 48, Address: 0x21f0f0, Func Offset: 0x20
	// Line 89, Address: 0x21f108, Func Offset: 0x38
	// Func End, Address: 0x21f11c, Func Offset: 0x4c
}

// 
// Start address: 0x21f120
void sndGetSoundAryByCharaPos(_SOUND_WORK* w_p)
{
	float preDist;
	float tmpvec2[4];
	float tmpvec1[4];
	float zl;
	float xl;
	float sw_max_z;
	float sw_min_z;
	float sw_max_x;
	float sw_min_x;
	float rm[4][4];
	float roadrot;
	_SND_LIMIT_AREA sw;
	float ppos[4];
	float tmpvec0[4];
	float get_max_z;
	float get_min_z;
	float get_max_x;
	float get_min_x;
	_SOUND_DATA* sd_p;
	int j;
	int i;
	// Line 130, Address: 0x21f120, Func Offset: 0
	// Line 162, Address: 0x21f138, Func Offset: 0x18
	// Line 163, Address: 0x21f144, Func Offset: 0x24
	// Line 166, Address: 0x21f154, Func Offset: 0x34
	// Line 168, Address: 0x21f158, Func Offset: 0x38
	// Line 169, Address: 0x21f164, Func Offset: 0x44
	// Line 170, Address: 0x21f16c, Func Offset: 0x4c
	// Line 173, Address: 0x21f180, Func Offset: 0x60
	// Line 174, Address: 0x21f184, Func Offset: 0x64
	// Line 176, Address: 0x21f188, Func Offset: 0x68
	// Line 180, Address: 0x21f18c, Func Offset: 0x6c
	// Line 183, Address: 0x21f198, Func Offset: 0x78
	// Line 192, Address: 0x21f1ac, Func Offset: 0x8c
	// Line 193, Address: 0x21f1b8, Func Offset: 0x98
	// Line 195, Address: 0x21f1c4, Func Offset: 0xa4
	// Line 197, Address: 0x21f1cc, Func Offset: 0xac
	// Line 198, Address: 0x21f1f4, Func Offset: 0xd4
	// Line 201, Address: 0x21f208, Func Offset: 0xe8
	// Line 202, Address: 0x21f210, Func Offset: 0xf0
	// Line 203, Address: 0x21f218, Func Offset: 0xf8
	// Line 204, Address: 0x21f22c, Func Offset: 0x10c
	// Line 205, Address: 0x21f234, Func Offset: 0x114
	// Line 206, Address: 0x21f23c, Func Offset: 0x11c
	// Line 208, Address: 0x21f250, Func Offset: 0x130
	// Line 209, Address: 0x21f268, Func Offset: 0x148
	// Line 210, Address: 0x21f270, Func Offset: 0x150
	// Line 211, Address: 0x21f278, Func Offset: 0x158
	// Line 212, Address: 0x21f280, Func Offset: 0x160
	// Line 213, Address: 0x21f288, Func Offset: 0x168
	// Line 215, Address: 0x21f290, Func Offset: 0x170
	// Line 216, Address: 0x21f2a8, Func Offset: 0x188
	// Line 217, Address: 0x21f2b0, Func Offset: 0x190
	// Line 218, Address: 0x21f2b8, Func Offset: 0x198
	// Line 219, Address: 0x21f2c0, Func Offset: 0x1a0
	// Line 220, Address: 0x21f2c8, Func Offset: 0x1a8
	// Line 224, Address: 0x21f2d0, Func Offset: 0x1b0
	// Line 225, Address: 0x21f2d8, Func Offset: 0x1b8
	// Line 226, Address: 0x21f2e0, Func Offset: 0x1c0
	// Line 228, Address: 0x21f2f4, Func Offset: 0x1d4
	// Line 229, Address: 0x21f300, Func Offset: 0x1e0
	// Line 230, Address: 0x21f30c, Func Offset: 0x1ec
	// Line 231, Address: 0x21f318, Func Offset: 0x1f8
	// Line 234, Address: 0x21f324, Func Offset: 0x204
	// Line 235, Address: 0x21f328, Func Offset: 0x208
	// Line 236, Address: 0x21f32c, Func Offset: 0x20c
	// Line 237, Address: 0x21f330, Func Offset: 0x210
	// Line 239, Address: 0x21f334, Func Offset: 0x214
	// Line 252, Address: 0x21f374, Func Offset: 0x254
	// Line 253, Address: 0x21f390, Func Offset: 0x270
	// Line 254, Address: 0x21f39c, Func Offset: 0x27c
	// Line 255, Address: 0x21f3c4, Func Offset: 0x2a4
	// Line 256, Address: 0x21f3e0, Func Offset: 0x2c0
	// Line 257, Address: 0x21f3fc, Func Offset: 0x2dc
	// Line 258, Address: 0x21f404, Func Offset: 0x2e4
	// Line 259, Address: 0x21f450, Func Offset: 0x330
	// Line 260, Address: 0x21f49c, Func Offset: 0x37c
	// Line 262, Address: 0x21f4a8, Func Offset: 0x388
	// Line 263, Address: 0x21f4bc, Func Offset: 0x39c
	// Line 264, Address: 0x21f4d4, Func Offset: 0x3b4
	// Line 265, Address: 0x21f4dc, Func Offset: 0x3bc
	// Line 266, Address: 0x21f4e8, Func Offset: 0x3c8
	// Line 267, Address: 0x21f500, Func Offset: 0x3e0
	// Line 268, Address: 0x21f51c, Func Offset: 0x3fc
	// Line 269, Address: 0x21f538, Func Offset: 0x418
	// Line 270, Address: 0x21f540, Func Offset: 0x420
	// Line 271, Address: 0x21f57c, Func Offset: 0x45c
	// Line 272, Address: 0x21f5b8, Func Offset: 0x498
	// Line 273, Address: 0x21f5c4, Func Offset: 0x4a4
	// Line 274, Address: 0x21f5c8, Func Offset: 0x4a8
	// Line 275, Address: 0x21f5dc, Func Offset: 0x4bc
	// Line 277, Address: 0x21f5f8, Func Offset: 0x4d8
	// Line 278, Address: 0x21f610, Func Offset: 0x4f0
	// Line 280, Address: 0x21f634, Func Offset: 0x514
	// Line 282, Address: 0x21f640, Func Offset: 0x520
	// Line 283, Address: 0x21f67c, Func Offset: 0x55c
	// Line 286, Address: 0x21f694, Func Offset: 0x574
	// Line 287, Address: 0x21f6a0, Func Offset: 0x580
	// Line 289, Address: 0x21f6a4, Func Offset: 0x584
	// Line 290, Address: 0x21f6c0, Func Offset: 0x5a0
	// Line 291, Address: 0x21f6cc, Func Offset: 0x5ac
	// Line 292, Address: 0x21f6f4, Func Offset: 0x5d4
	// Line 293, Address: 0x21f710, Func Offset: 0x5f0
	// Line 294, Address: 0x21f72c, Func Offset: 0x60c
	// Line 295, Address: 0x21f734, Func Offset: 0x614
	// Line 296, Address: 0x21f780, Func Offset: 0x660
	// Line 297, Address: 0x21f7cc, Func Offset: 0x6ac
	// Line 299, Address: 0x21f7d8, Func Offset: 0x6b8
	// Line 300, Address: 0x21f7ec, Func Offset: 0x6cc
	// Line 301, Address: 0x21f804, Func Offset: 0x6e4
	// Line 302, Address: 0x21f80c, Func Offset: 0x6ec
	// Line 303, Address: 0x21f818, Func Offset: 0x6f8
	// Line 304, Address: 0x21f830, Func Offset: 0x710
	// Line 305, Address: 0x21f84c, Func Offset: 0x72c
	// Line 306, Address: 0x21f868, Func Offset: 0x748
	// Line 307, Address: 0x21f870, Func Offset: 0x750
	// Line 308, Address: 0x21f8ac, Func Offset: 0x78c
	// Line 309, Address: 0x21f8e8, Func Offset: 0x7c8
	// Line 310, Address: 0x21f8f4, Func Offset: 0x7d4
	// Line 311, Address: 0x21f8f8, Func Offset: 0x7d8
	// Line 312, Address: 0x21f90c, Func Offset: 0x7ec
	// Line 314, Address: 0x21f928, Func Offset: 0x808
	// Line 315, Address: 0x21f940, Func Offset: 0x820
	// Line 318, Address: 0x21f964, Func Offset: 0x844
	// Line 322, Address: 0x21f96c, Func Offset: 0x84c
	// Line 323, Address: 0x21f97c, Func Offset: 0x85c
	// Line 324, Address: 0x21f998, Func Offset: 0x878
	// Line 325, Address: 0x21f9a4, Func Offset: 0x884
	// Line 326, Address: 0x21f9a8, Func Offset: 0x888
	// Line 330, Address: 0x21f9bc, Func Offset: 0x89c
	// Line 331, Address: 0x21f9c8, Func Offset: 0x8a8
	// Line 332, Address: 0x21f9d4, Func Offset: 0x8b4
	// Line 333, Address: 0x21f9f8, Func Offset: 0x8d8
	// Line 334, Address: 0x21fa10, Func Offset: 0x8f0
	// Line 335, Address: 0x21fa14, Func Offset: 0x8f4
	// Line 336, Address: 0x21fa2c, Func Offset: 0x90c
	// Line 337, Address: 0x21fa30, Func Offset: 0x910
	// Line 339, Address: 0x21fa48, Func Offset: 0x928
	// Func End, Address: 0x21fa64, Func Offset: 0x944
}

