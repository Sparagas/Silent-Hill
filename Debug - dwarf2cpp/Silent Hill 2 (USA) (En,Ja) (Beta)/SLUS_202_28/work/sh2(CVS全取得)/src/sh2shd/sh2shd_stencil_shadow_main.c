typedef struct DROP_SHADOW_MICRO_FRAME;
typedef struct _anon0;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct _AnimeInfo;
typedef union Q_WORDDATA;
typedef struct SPOT_LIGHT;
typedef struct shAttackInfo;
typedef union _anon1;
typedef struct SHADOW_MICRO_FRAME;


typedef _AnimeInfo type_0[8];
typedef _AnimeInfo type_1[30];
typedef _AnimeInfo type_2[12];
typedef _AnimeInfo type_3[10];
typedef unsigned char type_4[14];
typedef _AnimeInfo type_5[22];
typedef _AnimeInfo type_6[16];
typedef _AnimeInfo type_7[27];
typedef unsigned char type_8[69];
typedef unsigned int type_9[4];
typedef unsigned short type_10[8];
typedef _AnimeInfo type_11[6];
typedef float type_12[4];
typedef unsigned char type_13[16];
typedef _AnimeInfo type_14[7];
typedef int type_15[4];
typedef short type_16[8];
typedef char type_17[16];
typedef unsigned long type_18[2];
typedef unsigned char type_19[14];
typedef _AnimeInfo type_20[2];
typedef _AnimeInfo type_21[10];
typedef _AnimeInfo type_22[35];
typedef _AnimeInfo type_23[1];
typedef unsigned char type_24[97];
typedef _AnimeInfo type_25[36];
typedef SHADOW_MICRO_FRAME type_26[2];
typedef SHADOW_MICRO_FRAME type_27[3];
typedef shAttackInfo type_28[66];
typedef float type_29[4];
typedef unsigned char type_30[20];
typedef float type_31[4];
typedef float type_32[4][4];
typedef float type_33[4][3];

struct DROP_SHADOW_MICRO_FRAME
{
	float drop_shadow[4][4];
	float world_clip[4][4];
	float clip_screen[4][4];
	Q_WORDDATA color;
	Q_WORDDATA giftag_color;
	Q_WORDDATA giftag_dummy;
	Q_WORDDATA giftag_default;
	Q_WORDDATA fog_param;
	Q_WORDDATA alpha0;
	Q_WORDDATA alpha_range;
	Q_WORDDATA alpha_switch;
	unsigned int* pKickAddr;
	unsigned int* pRawData;
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

struct SPOT_LIGHT
{
	float c[4];
	float zdir[4];
	float range[4];
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

union _anon1
{
	shBattleFight fight;
	shBattleShot shot;
};

struct SHADOW_MICRO_FRAME
{
	float drop_shadow[4][4];
	float world_clip[4][4];
	float clip_screen[4][4];
	Q_WORDDATA color;
	Q_WORDDATA giftag_color;
	Q_WORDDATA giftag_dummy;
	Q_WORDDATA giftag_default;
	Q_WORDDATA giftag_3;
	Q_WORDDATA giftag_4;
	Q_WORDDATA giftag_5;
	Q_WORDDATA giftag_6;
	Q_WORDDATA giftag_7;
	Q_WORDDATA giftag_8;
	Q_WORDDATA giftag_9;
	Q_WORDDATA giftag_10;
	Q_WORDDATA alpha0;
	Q_WORDDATA alpha1;
	Q_WORDDATA flags;
	float y_unit[4];
	float dummy[4][3];
	float cam_pos[4];
	float spot_cam_dir[4];
	unsigned int* pKickAddr;
	unsigned int* pRawData;
};

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
_AnimeInfo dmaria_anim[30];
_AnimeInfo p_hhh_mar_anim[6];
_AnimeInfo scu_anim[36];
_AnimeInfo d_scu_anim[10];
_AnimeInfo mkn_anim[35];
_AnimeInfo d_mkn_anim[8];
_AnimeInfo nse_anim[27];
_AnimeInfo d_nse_anim[1];
_AnimeInfo red_anim[12];
_AnimeInfo d_red_anim[7];
_AnimeInfo oni_anim[16];
_AnimeInfo d_oni_anim[10];
_AnimeInfo edb_anim[22];
_AnimeInfo d_edb_anim[2];
DROP_SHADOW_MICRO_FRAME drop_shadow_micro_frame;
SHADOW_MICRO_FRAME shadow_micro_frame_point;
SHADOW_MICRO_FRAME shadow_micro_frame_parallel[3];
SHADOW_MICRO_FRAME shadow_micro_frame[2];

Q_WORDDATA* stencil_shadow_main(_anon0* cam);
Q_WORDDATA* not_stencil_shadow_main(_anon0* cam);

// 
// Start address: 0x1a6600
Q_WORDDATA* stencil_shadow_main(_anon0* cam)
{
	int light_kind;
	int map_id;
	int glb_coord;
	SPOT_LIGHT spot;
	int i;
	void* addr;
	void** list;
	Q_WORDDATA* ret_addr;
	// Line 30, Address: 0x1a6600, Func Offset: 0
	// Line 44, Address: 0x1a6624, Func Offset: 0x24
	// Line 45, Address: 0x1a6640, Func Offset: 0x40
	// Line 47, Address: 0x1a6644, Func Offset: 0x44
	// Line 49, Address: 0x1a6654, Func Offset: 0x54
	// Line 51, Address: 0x1a6674, Func Offset: 0x74
	// Line 52, Address: 0x1a6678, Func Offset: 0x78
	// Line 53, Address: 0x1a6684, Func Offset: 0x84
	// Line 54, Address: 0x1a6690, Func Offset: 0x90
	// Line 55, Address: 0x1a669c, Func Offset: 0x9c
	// Line 56, Address: 0x1a66a4, Func Offset: 0xa4
	// Line 58, Address: 0x1a66b0, Func Offset: 0xb0
	// Line 60, Address: 0x1a66c0, Func Offset: 0xc0
	// Line 62, Address: 0x1a66d0, Func Offset: 0xd0
	// Line 63, Address: 0x1a66d4, Func Offset: 0xd4
	// Line 64, Address: 0x1a66e0, Func Offset: 0xe0
	// Line 65, Address: 0x1a66e8, Func Offset: 0xe8
	// Line 66, Address: 0x1a66f4, Func Offset: 0xf4
	// Line 67, Address: 0x1a66fc, Func Offset: 0xfc
	// Line 68, Address: 0x1a6708, Func Offset: 0x108
	// Line 69, Address: 0x1a6714, Func Offset: 0x114
	// Line 70, Address: 0x1a6720, Func Offset: 0x120
	// Line 89, Address: 0x1a6724, Func Offset: 0x124
	// Line 90, Address: 0x1a6730, Func Offset: 0x130
	// Line 92, Address: 0x1a673c, Func Offset: 0x13c
	// Line 93, Address: 0x1a675c, Func Offset: 0x15c
	// Line 118, Address: 0x1a6774, Func Offset: 0x174
	// Line 121, Address: 0x1a6780, Func Offset: 0x180
	// Func End, Address: 0x1a67a8, Func Offset: 0x1a8
}

// 
// Start address: 0x1a67b0
Q_WORDDATA* not_stencil_shadow_main(_anon0* cam)
{
	Q_WORDDATA* ret_addr;
	// Line 124, Address: 0x1a67b0, Func Offset: 0
	// Line 129, Address: 0x1a67b8, Func Offset: 0x8
	// Line 133, Address: 0x1a67c0, Func Offset: 0x10
	// Func End, Address: 0x1a67d0, Func Offset: 0x20
}

