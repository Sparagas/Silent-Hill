typedef union Q_WORDDATA;
typedef struct SHADOW_SHAPE_FRAME;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct SHADOW_CHAR_MAN;
typedef struct SHADOW_OUTDOOR_MAN;
typedef struct SHADOW_MAN;
typedef struct shAttackInfo;
typedef struct SHADOW_PACKET_BUF;
typedef union _anon0;
typedef struct SHADOW_MICRO_FRAME;
typedef struct _anon1;


typedef float type_0[4];
typedef float type_1[4];
typedef shAttackInfo type_2[46];
typedef float type_3[4][4];
typedef unsigned char type_4[10];
typedef SHADOW_CHAR_MAN* type_5[16];
typedef unsigned char type_6[13];
typedef SHADOW_OUTDOOR_MAN* type_7[4];
typedef unsigned char type_8[34];
typedef unsigned int type_9[4];
typedef unsigned short type_10[8];
typedef float type_11[4];
typedef unsigned char type_12[16];
typedef int type_13[4];
typedef short type_14[8];
typedef char type_15[16];
typedef unsigned long type_16[2];
typedef unsigned char type_17[10];

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

struct SHADOW_SHAPE_FRAME
{
	float local_world[4][4];
	float local_light_position[4];
	Q_WORDDATA length;
	unsigned int* pRefPacket;
	unsigned int* pRawData;
	unsigned int* pKickAddr;
	short obj_id;
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

struct SHADOW_CHAR_MAN
{
	unsigned short kind;
	short id;
	unsigned char lighting_mode;
	unsigned char obj_num;
	short size;
	short vert_num;
	float drop_shadow_matrix[4][4];
	Q_WORDDATA* raw_data;
	SHADOW_SHAPE_FRAME* shape;
};

struct SHADOW_OUTDOOR_MAN
{
	unsigned short kind;
	short map_id;
	unsigned char lighting_mode;
	unsigned char obj_num;
	short size;
	short vert_num;
	Q_WORDDATA* raw_data;
	SHADOW_SHAPE_FRAME* shape;
};

struct SHADOW_MAN
{
	char change_flag;
	short spot_num;
	short parallel_num;
	short char_man_num;
	short outdoor_man_num;
	short indoor_man_num;
	SHADOW_CHAR_MAN* char_man[16];
	SHADOW_OUTDOOR_MAN* outdoor_man[4];
	SHADOW_PACKET_BUF reftag_pool;
	SHADOW_PACKET_BUF kick_packet;
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

struct SHADOW_PACKET_BUF
{
	Q_WORDDATA* head;
	Q_WORDDATA* curr;
};

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
};

struct SHADOW_MICRO_FRAME
{
	float drop_shadow[4][4];
	float world_screen[4][4];
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
	float spot_light_position[4];
	float spot_light_direction[4];
	float spot_light_range[4];
	float cam_pos[4];
	float spot_cam_dir[4];
	float cam_range[4];
	unsigned int* pKickAddr;
	unsigned int* pRawData;
};

struct _anon1
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

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
_anon1 cam0;
SHADOW_MAN shadow_man;
SHADOW_MICRO_FRAME drop_shadow_micro_frame;
SHADOW_MICRO_FRAME shadow_micro_frame_parallel;
SHADOW_MICRO_FRAME shadow_micro_frame;

Q_WORDDATA* stencil_shadow_main();
Q_WORDDATA* not_stencil_shadow_main(int full_switch, int alpha_switch);

// 
// Start address: 0x1a90b0
Q_WORDDATA* stencil_shadow_main()
{
	int ret_val;
	int i;
	Q_WORDDATA* ret_addr;
	// Line 43, Address: 0x1a90b0, Func Offset: 0
	// Line 81, Address: 0x1a90c4, Func Offset: 0x14
	// Line 85, Address: 0x1a90d0, Func Offset: 0x20
	// Line 90, Address: 0x1a90f4, Func Offset: 0x44
	// Line 91, Address: 0x1a9100, Func Offset: 0x50
	// Line 92, Address: 0x1a9110, Func Offset: 0x60
	// Line 97, Address: 0x1a912c, Func Offset: 0x7c
	// Line 99, Address: 0x1a9140, Func Offset: 0x90
	// Line 100, Address: 0x1a9144, Func Offset: 0x94
	// Func End, Address: 0x1a9160, Func Offset: 0xb0
}

// 
// Start address: 0x1a9160
Q_WORDDATA* not_stencil_shadow_main(int full_switch, int alpha_switch)
{
	Q_WORDDATA* ret_addr;
	// Line 103, Address: 0x1a9160, Func Offset: 0
	// Line 108, Address: 0x1a9174, Func Offset: 0x14
	// Line 111, Address: 0x1a9190, Func Offset: 0x30
	// Line 112, Address: 0x1a9194, Func Offset: 0x34
	// Func End, Address: 0x1a91a8, Func Offset: 0x48
}

