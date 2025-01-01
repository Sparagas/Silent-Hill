typedef struct SHADOW_SHAPE_FRAME;
typedef struct SHADOW_GEOM_HEAD;
typedef struct shBattleFight;
typedef union Q_WORDDATA;
typedef struct SHADOW_OUTDOOR_MAN;
typedef struct SHADOW_PACKET_BUF;
typedef struct shBattleShot;
typedef struct SHADOW_OFF_WORK_BG;
typedef struct SHADOW_ENV;
typedef struct shAttackInfo;
typedef union _anon0;
typedef struct SHADOW_OUTDOOR_HEAD;
typedef struct SHADOW_OUTDOOR_OBJ_HEAD;


typedef short type_0[32];
typedef SHADOW_OFF_WORK_BG type_1[4];
typedef float type_2[4];
typedef float type_3[4];
typedef float type_4[4][4];
typedef Q_WORDDATA type_5[4];
typedef unsigned int type_6[4];
typedef shAttackInfo type_7[66];
typedef unsigned short type_8[8];
typedef float type_9[4];
typedef unsigned char type_10[16];
typedef int type_11[4];
typedef short type_12[8];
typedef char type_13[16];
typedef unsigned long type_14[2];

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

struct SHADOW_GEOM_HEAD
{
	short vertex_num;
	short prim;
	short send_data_num;
	short ee_memory_size;
	short boundary_x;
	short boundary_y;
	short boundary_z;
	short boundary_r;
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
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

struct SHADOW_OUTDOOR_MAN
{
	unsigned short kind;
	short map_id;
	unsigned char lighting_mode;
	unsigned char obj_num;
	short light_kind;
	float light_pos[4];
	float light_dir[4];
	float light_param[4];
	Q_WORDDATA* raw_data;
	SHADOW_SHAPE_FRAME* shape;
};

struct SHADOW_PACKET_BUF
{
	Q_WORDDATA* head;
	Q_WORDDATA* curr;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct SHADOW_OFF_WORK_BG
{
	short map_id;
	short obj_id[32];
};

struct SHADOW_ENV
{
	short block;
	short clip_kind;
	float leng;
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

struct SHADOW_OUTDOOR_HEAD
{
	unsigned short kind;
	short map_id;
	short obj_num;
	short reserve1;
	short reserve2;
	short reserve3;
	short reserve4;
	short reserve5;
};

struct SHADOW_OUTDOOR_OBJ_HEAD
{
	unsigned int map_id;
	short obj_id;
	short geom_num;
	short origin_x;
	short origin_y;
	short origin_z;
	short origin_w;
};

shAttackInfo sh2_attack_list[66];
Q_WORDDATA dummy_geom_data[4];
SHADOW_OFF_WORK_BG shadow_off_work_bg[4];

void sh2shd_init_outdoor_man2(SHADOW_OUTDOOR_MAN* man, Q_WORDDATA* raw_data, short light_kind, float* light_pos, float* light_dir, float* light_param);
void sh2shd_make_reftag_pool_outdoor(SHADOW_OUTDOOR_MAN* man, SHADOW_PACKET_BUF* ref_packet, float spot_cam_angle);
void sh2shd_make_reftag_pool_outdoor_for_parallel(SHADOW_OUTDOOR_MAN* man, SHADOW_PACKET_BUF* ref_packet);
void sh2shd_add_outdoor_to_kick_packet(SHADOW_OUTDOOR_MAN* man, SHADOW_PACKET_BUF* kick_packet);
void sh2shd_renew_outdoor_man(SHADOW_OUTDOOR_MAN* man, float* spot_pos, SHADOW_ENV* shadow_env);
void sh2shd_renew_outdoor_man_for_parallel(SHADOW_OUTDOOR_MAN* man, float* spot_pos, SHADOW_ENV* shadow_env);

// 
// Start address: 0x1a0920
void sh2shd_init_outdoor_man2(SHADOW_OUTDOOR_MAN* man, Q_WORDDATA* raw_data, short light_kind, float* light_pos, float* light_dir, float* light_param)
{
	Q_WORDDATA* raw;
	short obj_id;
	SHADOW_GEOM_HEAD geom_head;
	SHADOW_OUTDOOR_OBJ_HEAD obj_head;
	SHADOW_OUTDOOR_HEAD outdoor_head;
	// Line 86, Address: 0x1a0920, Func Offset: 0
	// Line 90, Address: 0x1a0958, Func Offset: 0x38
	// Line 91, Address: 0x1a095c, Func Offset: 0x3c
	// Line 96, Address: 0x1a0960, Func Offset: 0x40
	// Line 98, Address: 0x1a0964, Func Offset: 0x44
	// Line 99, Address: 0x1a0994, Func Offset: 0x74
	// Line 100, Address: 0x1a099c, Func Offset: 0x7c
	// Line 101, Address: 0x1a09a4, Func Offset: 0x84
	// Line 103, Address: 0x1a09ac, Func Offset: 0x8c
	// Line 105, Address: 0x1a09b0, Func Offset: 0x90
	// Line 107, Address: 0x1a09b8, Func Offset: 0x98
	// Line 108, Address: 0x1a09dc, Func Offset: 0xbc
	// Line 109, Address: 0x1a09e0, Func Offset: 0xc0
	// Line 111, Address: 0x1a09ec, Func Offset: 0xcc
	// Line 113, Address: 0x1a09f0, Func Offset: 0xd0
	// Line 114, Address: 0x1a0a24, Func Offset: 0x104
	// Line 116, Address: 0x1a0a50, Func Offset: 0x130
	// Line 121, Address: 0x1a0a78, Func Offset: 0x158
	// Line 122, Address: 0x1a0a84, Func Offset: 0x164
	// Line 125, Address: 0x1a0a8c, Func Offset: 0x16c
	// Line 131, Address: 0x1a0ab4, Func Offset: 0x194
	// Line 132, Address: 0x1a0ac0, Func Offset: 0x1a0
	// Line 133, Address: 0x1a0acc, Func Offset: 0x1ac
	// Line 135, Address: 0x1a0ad4, Func Offset: 0x1b4
	// Line 136, Address: 0x1a0b04, Func Offset: 0x1e4
	// Line 137, Address: 0x1a0b10, Func Offset: 0x1f0
	// Line 138, Address: 0x1a0b1c, Func Offset: 0x1fc
	// Line 139, Address: 0x1a0b2c, Func Offset: 0x20c
	// Line 141, Address: 0x1a0b30, Func Offset: 0x210
	// Line 142, Address: 0x1a0b3c, Func Offset: 0x21c
	// Line 144, Address: 0x1a0b4c, Func Offset: 0x22c
	// Line 145, Address: 0x1a0b50, Func Offset: 0x230
	// Line 146, Address: 0x1a0b58, Func Offset: 0x238
	// Line 147, Address: 0x1a0b60, Func Offset: 0x240
	// Line 148, Address: 0x1a0b68, Func Offset: 0x248
	// Line 149, Address: 0x1a0ba4, Func Offset: 0x284
	// Line 150, Address: 0x1a0bb0, Func Offset: 0x290
	// Func End, Address: 0x1a0bdc, Func Offset: 0x2bc
}

// 
// Start address: 0x1a0be0
void sh2shd_make_reftag_pool_outdoor(SHADOW_OUTDOOR_MAN* man, SHADOW_PACKET_BUF* ref_packet, float spot_cam_angle)
{
	Q_WORDDATA* raw;
	Q_WORDDATA* ref;
	SHADOW_GEOM_HEAD geom_head;
	SHADOW_OUTDOOR_OBJ_HEAD obj_head;
	SHADOW_OUTDOOR_HEAD outdoor_head;
	// Line 159, Address: 0x1a0be0, Func Offset: 0
	// Line 163, Address: 0x1a0be8, Func Offset: 0x8
	// Line 164, Address: 0x1a0bec, Func Offset: 0xc
	// Line 174, Address: 0x1a0bf0, Func Offset: 0x10
	// Line 175, Address: 0x1a0c20, Func Offset: 0x40
	// Line 178, Address: 0x1a0c24, Func Offset: 0x44
	// Line 180, Address: 0x1a0c2c, Func Offset: 0x4c
	// Line 182, Address: 0x1a0c34, Func Offset: 0x54
	// Line 183, Address: 0x1a0c58, Func Offset: 0x78
	// Line 185, Address: 0x1a0c74, Func Offset: 0x94
	// Line 197, Address: 0x1a0c80, Func Offset: 0xa0
	// Line 198, Address: 0x1a0c8c, Func Offset: 0xac
	// Line 199, Address: 0x1a0ca0, Func Offset: 0xc0
	// Line 200, Address: 0x1a0cac, Func Offset: 0xcc
	// Line 203, Address: 0x1a0cb4, Func Offset: 0xd4
	// Line 208, Address: 0x1a0cb8, Func Offset: 0xd8
	// Line 211, Address: 0x1a0ce4, Func Offset: 0x104
	// Line 212, Address: 0x1a0d00, Func Offset: 0x120
	// Line 216, Address: 0x1a0d04, Func Offset: 0x124
	// Line 218, Address: 0x1a0d0c, Func Offset: 0x12c
	// Line 253, Address: 0x1a0d3c, Func Offset: 0x15c
	// Line 258, Address: 0x1a0d58, Func Offset: 0x178
	// Line 262, Address: 0x1a0d80, Func Offset: 0x1a0
	// Line 263, Address: 0x1a0dbc, Func Offset: 0x1dc
	// Line 266, Address: 0x1a0dc0, Func Offset: 0x1e0
	// Line 267, Address: 0x1a0dc8, Func Offset: 0x1e8
	// Line 271, Address: 0x1a0de0, Func Offset: 0x200
	// Line 276, Address: 0x1a0e08, Func Offset: 0x228
	// Line 278, Address: 0x1a0e24, Func Offset: 0x244
	// Line 279, Address: 0x1a0e60, Func Offset: 0x280
	// Line 282, Address: 0x1a0e64, Func Offset: 0x284
	// Line 283, Address: 0x1a0e6c, Func Offset: 0x28c
	// Line 287, Address: 0x1a0e88, Func Offset: 0x2a8
	// Line 292, Address: 0x1a0eb0, Func Offset: 0x2d0
	// Line 294, Address: 0x1a0ecc, Func Offset: 0x2ec
	// Line 295, Address: 0x1a0f08, Func Offset: 0x328
	// Line 298, Address: 0x1a0f0c, Func Offset: 0x32c
	// Line 301, Address: 0x1a0f10, Func Offset: 0x330
	// Line 303, Address: 0x1a0f28, Func Offset: 0x348
	// Line 307, Address: 0x1a0f34, Func Offset: 0x354
	// Line 311, Address: 0x1a0f5c, Func Offset: 0x37c
	// Line 312, Address: 0x1a0f98, Func Offset: 0x3b8
	// Line 315, Address: 0x1a0f9c, Func Offset: 0x3bc
	// Line 316, Address: 0x1a0fa4, Func Offset: 0x3c4
	// Line 320, Address: 0x1a0fc0, Func Offset: 0x3e0
	// Line 325, Address: 0x1a0fe8, Func Offset: 0x408
	// Line 327, Address: 0x1a1004, Func Offset: 0x424
	// Line 328, Address: 0x1a1040, Func Offset: 0x460
	// Line 331, Address: 0x1a1044, Func Offset: 0x464
	// Line 332, Address: 0x1a104c, Func Offset: 0x46c
	// Line 336, Address: 0x1a1058, Func Offset: 0x478
	// Line 341, Address: 0x1a1080, Func Offset: 0x4a0
	// Line 343, Address: 0x1a109c, Func Offset: 0x4bc
	// Line 344, Address: 0x1a10d8, Func Offset: 0x4f8
	// Line 348, Address: 0x1a10dc, Func Offset: 0x4fc
	// Line 351, Address: 0x1a10e0, Func Offset: 0x500
	// Line 352, Address: 0x1a10f8, Func Offset: 0x518
	// Line 356, Address: 0x1a10fc, Func Offset: 0x51c
	// Line 357, Address: 0x1a1108, Func Offset: 0x528
	// Line 358, Address: 0x1a1114, Func Offset: 0x534
	// Line 361, Address: 0x1a1128, Func Offset: 0x548
	// Line 366, Address: 0x1a1140, Func Offset: 0x560
	// Line 367, Address: 0x1a114c, Func Offset: 0x56c
	// Line 369, Address: 0x1a1160, Func Offset: 0x580
	// Line 371, Address: 0x1a1164, Func Offset: 0x584
	// Line 372, Address: 0x1a11b4, Func Offset: 0x5d4
	// Func End, Address: 0x1a11c4, Func Offset: 0x5e4
}

// 
// Start address: 0x1a11d0
void sh2shd_make_reftag_pool_outdoor_for_parallel(SHADOW_OUTDOOR_MAN* man, SHADOW_PACKET_BUF* ref_packet)
{
	Q_WORDDATA* raw;
	Q_WORDDATA* ref;
	SHADOW_GEOM_HEAD geom_head;
	SHADOW_OUTDOOR_OBJ_HEAD obj_head;
	SHADOW_OUTDOOR_HEAD outdoor_head;
	// Line 381, Address: 0x1a11d0, Func Offset: 0
	// Line 385, Address: 0x1a11d8, Func Offset: 0x8
	// Line 386, Address: 0x1a11dc, Func Offset: 0xc
	// Line 396, Address: 0x1a11e0, Func Offset: 0x10
	// Line 397, Address: 0x1a1210, Func Offset: 0x40
	// Line 400, Address: 0x1a1214, Func Offset: 0x44
	// Line 402, Address: 0x1a121c, Func Offset: 0x4c
	// Line 404, Address: 0x1a1224, Func Offset: 0x54
	// Line 405, Address: 0x1a1248, Func Offset: 0x78
	// Line 407, Address: 0x1a1264, Func Offset: 0x94
	// Line 419, Address: 0x1a1270, Func Offset: 0xa0
	// Line 420, Address: 0x1a127c, Func Offset: 0xac
	// Line 421, Address: 0x1a1290, Func Offset: 0xc0
	// Line 422, Address: 0x1a129c, Func Offset: 0xcc
	// Line 425, Address: 0x1a12a4, Func Offset: 0xd4
	// Line 430, Address: 0x1a12a8, Func Offset: 0xd8
	// Line 433, Address: 0x1a12d4, Func Offset: 0x104
	// Line 434, Address: 0x1a12f0, Func Offset: 0x120
	// Line 438, Address: 0x1a12f4, Func Offset: 0x124
	// Line 440, Address: 0x1a12fc, Func Offset: 0x12c
	// Line 534, Address: 0x1a132c, Func Offset: 0x15c
	// Line 536, Address: 0x1a1348, Func Offset: 0x178
	// Line 538, Address: 0x1a1370, Func Offset: 0x1a0
	// Line 541, Address: 0x1a13ac, Func Offset: 0x1dc
	// Line 542, Address: 0x1a13c4, Func Offset: 0x1f4
	// Line 546, Address: 0x1a13c8, Func Offset: 0x1f8
	// Line 550, Address: 0x1a13e0, Func Offset: 0x210
	// Line 555, Address: 0x1a1408, Func Offset: 0x238
	// Line 557, Address: 0x1a1424, Func Offset: 0x254
	// Line 560, Address: 0x1a1460, Func Offset: 0x290
	// Line 561, Address: 0x1a1478, Func Offset: 0x2a8
	// Line 564, Address: 0x1a147c, Func Offset: 0x2ac
	// Line 565, Address: 0x1a1484, Func Offset: 0x2b4
	// Line 570, Address: 0x1a14a0, Func Offset: 0x2d0
	// Line 572, Address: 0x1a14c8, Func Offset: 0x2f8
	// Line 574, Address: 0x1a14e4, Func Offset: 0x314
	// Line 577, Address: 0x1a1520, Func Offset: 0x350
	// Line 578, Address: 0x1a1538, Func Offset: 0x368
	// Line 581, Address: 0x1a153c, Func Offset: 0x36c
	// Line 610, Address: 0x1a1540, Func Offset: 0x370
	// Line 611, Address: 0x1a154c, Func Offset: 0x37c
	// Line 613, Address: 0x1a1558, Func Offset: 0x388
	// Line 616, Address: 0x1a1568, Func Offset: 0x398
	// Line 621, Address: 0x1a1580, Func Offset: 0x3b0
	// Line 622, Address: 0x1a158c, Func Offset: 0x3bc
	// Line 624, Address: 0x1a15a0, Func Offset: 0x3d0
	// Line 626, Address: 0x1a15a4, Func Offset: 0x3d4
	// Line 627, Address: 0x1a15f4, Func Offset: 0x424
	// Func End, Address: 0x1a1604, Func Offset: 0x434
}

// 
// Start address: 0x1a1610
void sh2shd_add_outdoor_to_kick_packet(SHADOW_OUTDOOR_MAN* man, SHADOW_PACKET_BUF* kick_packet)
{
	int j;
	int count_call_tag_num;
	unsigned int* reftag_pool_addr;
	Q_WORDDATA* curr;
	Q_WORDDATA* top;
	int i;
	// Line 1127, Address: 0x1a1610, Func Offset: 0
	// Line 1134, Address: 0x1a1618, Func Offset: 0x8
	// Line 1136, Address: 0x1a161c, Func Offset: 0xc
	// Line 1140, Address: 0x1a1620, Func Offset: 0x10
	// Line 1141, Address: 0x1a1654, Func Offset: 0x44
	// Line 1143, Address: 0x1a1658, Func Offset: 0x48
	// Line 1147, Address: 0x1a165c, Func Offset: 0x4c
	// Line 1149, Address: 0x1a1668, Func Offset: 0x58
	// Line 1150, Address: 0x1a1680, Func Offset: 0x70
	// Line 1153, Address: 0x1a1684, Func Offset: 0x74
	// Line 1154, Address: 0x1a169c, Func Offset: 0x8c
	// Line 1155, Address: 0x1a16a0, Func Offset: 0x90
	// Line 1158, Address: 0x1a16a4, Func Offset: 0x94
	// Line 1165, Address: 0x1a16b8, Func Offset: 0xa8
	// Line 1169, Address: 0x1a16c8, Func Offset: 0xb8
	// Line 1173, Address: 0x1a171c, Func Offset: 0x10c
	// Line 1175, Address: 0x1a1728, Func Offset: 0x118
	// Line 1178, Address: 0x1a1750, Func Offset: 0x140
	// Line 1180, Address: 0x1a175c, Func Offset: 0x14c
	// Line 1182, Address: 0x1a1780, Func Offset: 0x170
	// Line 1183, Address: 0x1a178c, Func Offset: 0x17c
	// Line 1187, Address: 0x1a17d0, Func Offset: 0x1c0
	// Line 1188, Address: 0x1a17e4, Func Offset: 0x1d4
	// Line 1189, Address: 0x1a17e8, Func Offset: 0x1d8
	// Line 1191, Address: 0x1a17fc, Func Offset: 0x1ec
	// Line 1195, Address: 0x1a1800, Func Offset: 0x1f0
	// Func End, Address: 0x1a1810, Func Offset: 0x200
}

// 
// Start address: 0x1a1810
void sh2shd_renew_outdoor_man(SHADOW_OUTDOOR_MAN* man, float* spot_pos, SHADOW_ENV* shadow_env)
{
	float light_pos_revision[4];
	SHADOW_GEOM_HEAD geom_head;
	float world_local[4][4];
	int i;
	// Line 1200, Address: 0x1a1810, Func Offset: 0
	// Line 1209, Address: 0x1a1834, Func Offset: 0x24
	// Line 1212, Address: 0x1a1840, Func Offset: 0x30
	// Line 1214, Address: 0x1a188c, Func Offset: 0x7c
	// Line 1215, Address: 0x1a18ac, Func Offset: 0x9c
	// Line 1217, Address: 0x1a18d4, Func Offset: 0xc4
	// Line 1220, Address: 0x1a18e4, Func Offset: 0xd4
	// Line 1221, Address: 0x1a1904, Func Offset: 0xf4
	// Line 1223, Address: 0x1a1924, Func Offset: 0x114
	// Line 1224, Address: 0x1a193c, Func Offset: 0x12c
	// Line 1225, Address: 0x1a1944, Func Offset: 0x134
	// Line 1227, Address: 0x1a1950, Func Offset: 0x140
	// Line 1228, Address: 0x1a1974, Func Offset: 0x164
	// Line 1230, Address: 0x1a1994, Func Offset: 0x184
	// Line 1231, Address: 0x1a19ac, Func Offset: 0x19c
	// Line 1233, Address: 0x1a19b4, Func Offset: 0x1a4
	// Line 1235, Address: 0x1a19d0, Func Offset: 0x1c0
	// Line 1236, Address: 0x1a19ec, Func Offset: 0x1dc
	// Line 1241, Address: 0x1a1a00, Func Offset: 0x1f0
	// Line 1242, Address: 0x1a1a0c, Func Offset: 0x1fc
	// Line 1243, Address: 0x1a1a10, Func Offset: 0x200
	// Line 1244, Address: 0x1a1a30, Func Offset: 0x220
	// Line 1245, Address: 0x1a1a50, Func Offset: 0x240
	// Line 1246, Address: 0x1a1a64, Func Offset: 0x254
	// Line 1248, Address: 0x1a1a6c, Func Offset: 0x25c
	// Func End, Address: 0x1a1a8c, Func Offset: 0x27c
}

// 
// Start address: 0x1a1a90
void sh2shd_renew_outdoor_man_for_parallel(SHADOW_OUTDOOR_MAN* man, float* spot_pos, SHADOW_ENV* shadow_env)
{
	SHADOW_GEOM_HEAD geom_head;
	float world_local[4][4];
	int i;
	// Line 1253, Address: 0x1a1a90, Func Offset: 0
	// Line 1262, Address: 0x1a1ab8, Func Offset: 0x28
	// Line 1265, Address: 0x1a1ac4, Func Offset: 0x34
	// Line 1267, Address: 0x1a1b0c, Func Offset: 0x7c
	// Line 1268, Address: 0x1a1b1c, Func Offset: 0x8c
	// Line 1270, Address: 0x1a1b38, Func Offset: 0xa8
	// Line 1273, Address: 0x1a1b48, Func Offset: 0xb8
	// Line 1274, Address: 0x1a1b68, Func Offset: 0xd8
	// Line 1276, Address: 0x1a1b7c, Func Offset: 0xec
	// Line 1277, Address: 0x1a1b88, Func Offset: 0xf8
	// Line 1278, Address: 0x1a1b90, Func Offset: 0x100
	// Line 1280, Address: 0x1a1b9c, Func Offset: 0x10c
	// Line 1281, Address: 0x1a1bc0, Func Offset: 0x130
	// Line 1283, Address: 0x1a1bd4, Func Offset: 0x144
	// Line 1284, Address: 0x1a1be0, Func Offset: 0x150
	// Line 1286, Address: 0x1a1be8, Func Offset: 0x158
	// Line 1288, Address: 0x1a1bf8, Func Offset: 0x168
	// Line 1289, Address: 0x1a1c08, Func Offset: 0x178
	// Line 1293, Address: 0x1a1c20, Func Offset: 0x190
	// Func End, Address: 0x1a1c44, Func Offset: 0x1b4
}

