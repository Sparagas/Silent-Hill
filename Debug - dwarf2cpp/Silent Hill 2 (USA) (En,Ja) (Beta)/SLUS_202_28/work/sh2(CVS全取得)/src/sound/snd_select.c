typedef struct _SND_ROAD_AREA;
typedef struct shAttackInfo;
typedef struct _SOUND_WORK;
typedef struct _SOUND_DATA;
typedef union _anon0;
typedef struct _NEAR_SOUND_DATA;
typedef struct shBattleFight;
typedef struct shBattleShot;


typedef _NEAR_SOUND_DATA type_0[9];
typedef int type_1[7];
typedef char type_2[7];
typedef char type_3[7];
typedef shAttackInfo type_4[66];
typedef _NEAR_SOUND_DATA type_5[8];
typedef char type_6[7];
typedef int type_7[9];
typedef float type_8[4];
typedef unsigned char type_9[53];

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

struct _SOUND_WORK
{
	_SOUND_DATA* sound_ary;
	float chara_pos[4];
	float half_w;
	int page;
	int near_sound_num;
	_NEAR_SOUND_DATA near_sound_ary[8];
	int on_num;
	char on_chan[7];
	int absNum;
	int nearindex;
};

struct _SOUND_DATA
{
	_SND_ROAD_AREA lim_sw;
	int flags;
	int chanstat[7];
};

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _NEAR_SOUND_DATA
{
	char inVol[7];
	char outVol[7];
	int errCode;
	int absIndex;
	float len;
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

shAttackInfo sh2_attack_list[66];
_NEAR_SOUND_DATA sndExData[9];
int snd_local_on_num[9];
unsigned char sndBoxNumInStage[53];

void sndVolumeMain();
void sndGetSoundAryByCharaPos(_SOUND_WORK* w_p);

// 
// Start address: 0x221530
void sndVolumeMain()
{
	// Line 232, Address: 0x221530, Func Offset: 0
	// Func End, Address: 0x221538, Func Offset: 0x8
}

// 
// Start address: 0x221540
void sndGetSoundAryByCharaPos(_SOUND_WORK* w_p)
{
	float get_max_z;
	float get_min_z;
	float get_max_x;
	float get_min_x;
	_SOUND_DATA* sd_p;
	int j;
	int i;
	// Line 240, Address: 0x221540, Func Offset: 0
	// Line 284, Address: 0x221548, Func Offset: 0x8
	// Line 285, Address: 0x221558, Func Offset: 0x18
	// Line 286, Address: 0x221560, Func Offset: 0x20
	// Line 288, Address: 0x2215b4, Func Offset: 0x74
	// Line 289, Address: 0x2215d0, Func Offset: 0x90
	// Line 290, Address: 0x2215dc, Func Offset: 0x9c
	// Line 291, Address: 0x221608, Func Offset: 0xc8
	// Line 296, Address: 0x22161c, Func Offset: 0xdc
	// Line 309, Address: 0x221624, Func Offset: 0xe4
	// Line 310, Address: 0x221630, Func Offset: 0xf0
	// Line 311, Address: 0x221638, Func Offset: 0xf8
	// Line 314, Address: 0x221650, Func Offset: 0x110
	// Line 315, Address: 0x221654, Func Offset: 0x114
	// Line 317, Address: 0x221658, Func Offset: 0x118
	// Line 328, Address: 0x22165c, Func Offset: 0x11c
	// Line 389, Address: 0x221664, Func Offset: 0x124
	// Line 390, Address: 0x221670, Func Offset: 0x130
	// Line 391, Address: 0x221674, Func Offset: 0x134
	// Line 392, Address: 0x22167c, Func Offset: 0x13c
	// Line 395, Address: 0x221680, Func Offset: 0x140
	// Line 405, Address: 0x2216d0, Func Offset: 0x190
	// Line 415, Address: 0x2216fc, Func Offset: 0x1bc
	// Line 416, Address: 0x221714, Func Offset: 0x1d4
	// Line 417, Address: 0x221720, Func Offset: 0x1e0
	// Line 418, Address: 0x22174c, Func Offset: 0x20c
	// Line 419, Address: 0x221768, Func Offset: 0x228
	// Line 420, Address: 0x221784, Func Offset: 0x244
	// Line 421, Address: 0x22178c, Func Offset: 0x24c
	// Line 422, Address: 0x2217b8, Func Offset: 0x278
	// Line 423, Address: 0x2217f4, Func Offset: 0x2b4
	// Line 425, Address: 0x221800, Func Offset: 0x2c0
	// Line 426, Address: 0x221814, Func Offset: 0x2d4
	// Line 427, Address: 0x22182c, Func Offset: 0x2ec
	// Line 428, Address: 0x221834, Func Offset: 0x2f4
	// Line 429, Address: 0x221840, Func Offset: 0x300
	// Line 430, Address: 0x22185c, Func Offset: 0x31c
	// Line 431, Address: 0x221878, Func Offset: 0x338
	// Line 432, Address: 0x221894, Func Offset: 0x354
	// Line 433, Address: 0x22189c, Func Offset: 0x35c
	// Line 434, Address: 0x2218c4, Func Offset: 0x384
	// Line 435, Address: 0x2218f0, Func Offset: 0x3b0
	// Line 436, Address: 0x2218fc, Func Offset: 0x3bc
	// Line 437, Address: 0x221900, Func Offset: 0x3c0
	// Line 438, Address: 0x221914, Func Offset: 0x3d4
	// Line 446, Address: 0x221930, Func Offset: 0x3f0
	// Line 448, Address: 0x22193c, Func Offset: 0x3fc
	// Line 449, Address: 0x221974, Func Offset: 0x434
	// Line 452, Address: 0x22198c, Func Offset: 0x44c
	// Line 453, Address: 0x221998, Func Offset: 0x458
	// Line 455, Address: 0x22199c, Func Offset: 0x45c
	// Line 456, Address: 0x2219b8, Func Offset: 0x478
	// Line 457, Address: 0x2219c4, Func Offset: 0x484
	// Line 458, Address: 0x2219f0, Func Offset: 0x4b0
	// Line 459, Address: 0x221a0c, Func Offset: 0x4cc
	// Line 460, Address: 0x221a28, Func Offset: 0x4e8
	// Line 461, Address: 0x221a30, Func Offset: 0x4f0
	// Line 462, Address: 0x221a5c, Func Offset: 0x51c
	// Line 463, Address: 0x221a98, Func Offset: 0x558
	// Line 464, Address: 0x221aa4, Func Offset: 0x564
	// Line 465, Address: 0x221aa8, Func Offset: 0x568
	// Line 466, Address: 0x221abc, Func Offset: 0x57c
	// Line 467, Address: 0x221ad4, Func Offset: 0x594
	// Line 468, Address: 0x221adc, Func Offset: 0x59c
	// Line 469, Address: 0x221ae8, Func Offset: 0x5a8
	// Line 470, Address: 0x221b04, Func Offset: 0x5c4
	// Line 471, Address: 0x221b20, Func Offset: 0x5e0
	// Line 472, Address: 0x221b3c, Func Offset: 0x5fc
	// Line 473, Address: 0x221b44, Func Offset: 0x604
	// Line 474, Address: 0x221b6c, Func Offset: 0x62c
	// Line 475, Address: 0x221b98, Func Offset: 0x658
	// Line 476, Address: 0x221ba4, Func Offset: 0x664
	// Line 477, Address: 0x221ba8, Func Offset: 0x668
	// Line 478, Address: 0x221bbc, Func Offset: 0x67c
	// Line 485, Address: 0x221bd8, Func Offset: 0x698
	// Line 489, Address: 0x221be0, Func Offset: 0x6a0
	// Line 490, Address: 0x221bf0, Func Offset: 0x6b0
	// Line 491, Address: 0x221c04, Func Offset: 0x6c4
	// Line 493, Address: 0x221c10, Func Offset: 0x6d0
	// Line 508, Address: 0x221c24, Func Offset: 0x6e4
	// Func End, Address: 0x221c34, Func Offset: 0x6f4
}

