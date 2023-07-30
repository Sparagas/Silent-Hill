typedef struct SHADOW_CHAR_MAN;
typedef union Q_WORDDATA;
typedef struct SHADOW_SHAPE_FRAME;
typedef struct SHADOW_MAN;
typedef struct SHADOW_PACKET_BUF;
typedef struct shBattleFight;
typedef struct SHADOW_OUTDOOR_MAN;
typedef struct shBattleShot;
typedef struct _AnimeInfo;
typedef struct SHADOW_CHAR_HEAD;
typedef struct SHADOW_GEOM_HEAD;
typedef struct _anon0;
typedef struct SHADOW_CHAR_OBJ_HEAD;
typedef struct shAttackInfo;
typedef union _anon1;
typedef struct SPOT_LIGHT;


typedef float type_0[4];
typedef float type_1[4];
typedef float type_2[4][4];
typedef _AnimeInfo type_3[32];
typedef SHADOW_CHAR_MAN* type_4[16];
typedef SHADOW_OUTDOOR_MAN* type_5[4];
typedef unsigned char type_6[10];
typedef shAttackInfo type_7[46];
typedef _AnimeInfo type_8[8];
typedef float type_9[4][64];
typedef unsigned int type_10[4];
typedef unsigned short type_11[8];
typedef int type_12[4][64];
typedef float type_13[4];
typedef unsigned char type_14[16];
typedef int type_15[4];
typedef short type_16[8];
typedef char type_17[16];
typedef unsigned char type_18[13];
typedef unsigned long type_19[2];
typedef _AnimeInfo type_20[9];
typedef unsigned char type_21[34];
typedef unsigned char type_22[10];
typedef short type_23[7];
typedef _AnimeInfo type_24[29];
typedef int type_25[4];

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

struct SHADOW_PACKET_BUF
{
	Q_WORDDATA* head;
	Q_WORDDATA* curr;
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
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
	unsigned char pad;
};

struct SHADOW_CHAR_HEAD
{
	short char_id;
	unsigned short kind;
	short obj_num;
	short reserve1;
	short reserve2;
	short reserve3;
	short reserve4;
	short reserve5;
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

struct SHADOW_CHAR_OBJ_HEAD
{
	unsigned int char_id;
	short obj_id;
	short geom_num;
	short reserve1;
	short reserve2;
	short reserve3;
	short reserve4;
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

struct SPOT_LIGHT
{
	float c[4];
	float zdir[4];
	float range[4];
};

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
_AnimeInfo scu_anim[32];
_AnimeInfo d_scu_anim[9];
_AnimeInfo mkn_anim[29];
_AnimeInfo d_mkn_anim[8];
Q_WORDDATA color;
Q_WORDDATA color2;
Q_WORDDATA color_green;
Q_WORDDATA color_yellow;
Q_WORDDATA color_water;
Q_WORDDATA color_white;
Q_WORDDATA color_white_of_white;
int tmp_i_buf[4][64];
float calc_f_buf[4][64];

void sh2shd_init_char_man(SHADOW_CHAR_MAN* man, Q_WORDDATA* raw_data, unsigned short kind, short id);
void sh2shd_make_reftag_pool_char(SHADOW_CHAR_MAN* man, SHADOW_PACKET_BUF* ref_packet, Q_WORDDATA* rawdata);
void sh2shd_make_reftag_pool_char_ashidake(SHADOW_CHAR_MAN* man, SHADOW_PACKET_BUF* ref_packet, Q_WORDDATA* rawdata);
void sh2shd_add_char_to_kick_packet(SHADOW_CHAR_MAN* man, SHADOW_PACKET_BUF* kick_packet);
void sh2shd_renew_char_man(SHADOW_CHAR_MAN* man, float* spot_pos, float leng);
void sh2shd_renew_char_man_parallel(SHADOW_CHAR_MAN* man, float* virtual_light_position);
void sh2shd_calc_light_position_for_parallel(float* pos, float height, unsigned short kind);
void sh2shd_make_reftag_pool_char_for_drop(SHADOW_CHAR_MAN* man, SHADOW_PACKET_BUF* ref_packet, Q_WORDDATA* rawdata);
void sh2shd_make_reftag_pool_char_foot_for_drop(SHADOW_CHAR_MAN* man, SHADOW_PACKET_BUF* ref_packet, Q_WORDDATA* rawdata);
void sh2shd_renew_char_man_for_drop(SHADOW_CHAR_MAN* man, float* spot_pos, float alpha_decay, int full_switch);
void sh2shd_get_height_for_alpha(float* high, float* low, unsigned short kind, unsigned short id, int full_switch);
int check_lower_body(unsigned short kind, short obj_id);
int check_lower_body_scust(short obj_id);
int check_lower_body_mknst(short obj_id);

// 
// Start address: 0x192890
void sh2shd_init_char_man(SHADOW_CHAR_MAN* man, Q_WORDDATA* raw_data, unsigned short kind, short id)
{
	Q_WORDDATA* raw;
	short obj_id;
	SHADOW_CHAR_HEAD char_head;
	// Line 42, Address: 0x192890, Func Offset: 0
	// Line 46, Address: 0x1928ac, Func Offset: 0x1c
	// Line 47, Address: 0x1928b8, Func Offset: 0x28
	// Line 49, Address: 0x1928bc, Func Offset: 0x2c
	// Line 51, Address: 0x1928c8, Func Offset: 0x38
	// Line 52, Address: 0x1928f4, Func Offset: 0x64
	// Line 53, Address: 0x192900, Func Offset: 0x70
	// Line 54, Address: 0x19290c, Func Offset: 0x7c
	// Line 57, Address: 0x19291c, Func Offset: 0x8c
	// Line 58, Address: 0x192924, Func Offset: 0x94
	// Line 60, Address: 0x19294c, Func Offset: 0xbc
	// Func End, Address: 0x192960, Func Offset: 0xd0
}

// 
// Start address: 0x192960
void sh2shd_make_reftag_pool_char(SHADOW_CHAR_MAN* man, SHADOW_PACKET_BUF* ref_packet, Q_WORDDATA* rawdata)
{
	short shape_no;
	Q_WORDDATA* raw;
	Q_WORDDATA* ref;
	SHADOW_GEOM_HEAD geom_head;
	SHADOW_CHAR_OBJ_HEAD char_obj_head;
	SHADOW_CHAR_HEAD char_head;
	// Line 309, Address: 0x192960, Func Offset: 0
	// Line 313, Address: 0x19297c, Func Offset: 0x1c
	// Line 314, Address: 0x192984, Func Offset: 0x24
	// Line 316, Address: 0x192988, Func Offset: 0x28
	// Line 318, Address: 0x192994, Func Offset: 0x34
	// Line 319, Address: 0x1929c4, Func Offset: 0x64
	// Line 321, Address: 0x1929c8, Func Offset: 0x68
	// Line 323, Address: 0x1929d0, Func Offset: 0x70
	// Line 325, Address: 0x1929dc, Func Offset: 0x7c
	// Line 326, Address: 0x192a00, Func Offset: 0xa0
	// Line 327, Address: 0x192a04, Func Offset: 0xa4
	// Line 328, Address: 0x192a28, Func Offset: 0xc8
	// Line 332, Address: 0x192a50, Func Offset: 0xf0
	// Line 333, Address: 0x192a5c, Func Offset: 0xfc
	// Line 334, Address: 0x192a68, Func Offset: 0x108
	// Line 335, Address: 0x192a74, Func Offset: 0x114
	// Line 336, Address: 0x192a7c, Func Offset: 0x11c
	// Line 337, Address: 0x192a80, Func Offset: 0x120
	// Line 342, Address: 0x192a84, Func Offset: 0x124
	// Line 343, Address: 0x192ad4, Func Offset: 0x174
	// Line 345, Address: 0x192ad8, Func Offset: 0x178
	// Line 346, Address: 0x192af4, Func Offset: 0x194
	// Line 348, Address: 0x192af8, Func Offset: 0x198
	// Line 350, Address: 0x192b00, Func Offset: 0x1a0
	// Line 351, Address: 0x192b34, Func Offset: 0x1d4
	// Line 354, Address: 0x192b48, Func Offset: 0x1e8
	// Line 358, Address: 0x192b78, Func Offset: 0x218
	// Line 359, Address: 0x192ba0, Func Offset: 0x240
	// Line 363, Address: 0x192ba4, Func Offset: 0x244
	// Line 364, Address: 0x192bd0, Func Offset: 0x270
	// Line 365, Address: 0x192bd4, Func Offset: 0x274
	// Line 366, Address: 0x192c28, Func Offset: 0x2c8
	// Line 367, Address: 0x192c2c, Func Offset: 0x2cc
	// Line 368, Address: 0x192c34, Func Offset: 0x2d4
	// Line 372, Address: 0x192c4c, Func Offset: 0x2ec
	// Line 373, Address: 0x192c74, Func Offset: 0x314
	// Line 376, Address: 0x192c78, Func Offset: 0x318
	// Line 377, Address: 0x192ccc, Func Offset: 0x36c
	// Line 398, Address: 0x192cd0, Func Offset: 0x370
	// Line 399, Address: 0x192ce8, Func Offset: 0x388
	// Line 401, Address: 0x192cec, Func Offset: 0x38c
	// Line 402, Address: 0x192d00, Func Offset: 0x3a0
	// Line 403, Address: 0x192d0c, Func Offset: 0x3ac
	// Line 406, Address: 0x192d1c, Func Offset: 0x3bc
	// Line 409, Address: 0x192d34, Func Offset: 0x3d4
	// Line 410, Address: 0x192d40, Func Offset: 0x3e0
	// Line 412, Address: 0x192d4c, Func Offset: 0x3ec
	// Line 413, Address: 0x192d54, Func Offset: 0x3f4
	// Func End, Address: 0x192d6c, Func Offset: 0x40c
}

// 
// Start address: 0x192d70
void sh2shd_make_reftag_pool_char_ashidake(SHADOW_CHAR_MAN* man, SHADOW_PACKET_BUF* ref_packet, Q_WORDDATA* rawdata)
{
	short* sk;
	short jms_ashi[7];
	short shape_no;
	Q_WORDDATA* raw;
	Q_WORDDATA* ref;
	SHADOW_GEOM_HEAD geom_head;
	SHADOW_CHAR_OBJ_HEAD char_obj_head;
	SHADOW_CHAR_HEAD char_head;
	// Line 419, Address: 0x192d70, Func Offset: 0
	// Line 423, Address: 0x192d94, Func Offset: 0x24
	// Line 424, Address: 0x192d9c, Func Offset: 0x2c
	// Line 425, Address: 0x192da0, Func Offset: 0x30
	// Line 426, Address: 0x192dac, Func Offset: 0x3c
	// Line 431, Address: 0x192dd0, Func Offset: 0x60
	// Line 434, Address: 0x192e30, Func Offset: 0xc0
	// Line 435, Address: 0x192e34, Func Offset: 0xc4
	// Line 437, Address: 0x192e3c, Func Offset: 0xcc
	// Line 440, Address: 0x192e58, Func Offset: 0xe8
	// Line 441, Address: 0x192e88, Func Offset: 0x118
	// Line 443, Address: 0x192e8c, Func Offset: 0x11c
	// Line 445, Address: 0x192e94, Func Offset: 0x124
	// Line 447, Address: 0x192ea0, Func Offset: 0x130
	// Line 448, Address: 0x192ec4, Func Offset: 0x154
	// Line 449, Address: 0x192ec8, Func Offset: 0x158
	// Line 450, Address: 0x192eec, Func Offset: 0x17c
	// Line 452, Address: 0x192f14, Func Offset: 0x1a4
	// Line 454, Address: 0x192f34, Func Offset: 0x1c4
	// Line 456, Address: 0x192f38, Func Offset: 0x1c8
	// Line 457, Address: 0x192f44, Func Offset: 0x1d4
	// Line 458, Address: 0x192f50, Func Offset: 0x1e0
	// Line 459, Address: 0x192f5c, Func Offset: 0x1ec
	// Line 460, Address: 0x192f64, Func Offset: 0x1f4
	// Line 461, Address: 0x192f68, Func Offset: 0x1f8
	// Line 466, Address: 0x192f6c, Func Offset: 0x1fc
	// Line 467, Address: 0x192fbc, Func Offset: 0x24c
	// Line 469, Address: 0x192fc0, Func Offset: 0x250
	// Line 470, Address: 0x192fdc, Func Offset: 0x26c
	// Line 472, Address: 0x192fe0, Func Offset: 0x270
	// Line 474, Address: 0x192fe8, Func Offset: 0x278
	// Line 475, Address: 0x19301c, Func Offset: 0x2ac
	// Line 478, Address: 0x193030, Func Offset: 0x2c0
	// Line 482, Address: 0x193060, Func Offset: 0x2f0
	// Line 483, Address: 0x193088, Func Offset: 0x318
	// Line 487, Address: 0x19308c, Func Offset: 0x31c
	// Line 488, Address: 0x1930b8, Func Offset: 0x348
	// Line 489, Address: 0x1930bc, Func Offset: 0x34c
	// Line 490, Address: 0x193110, Func Offset: 0x3a0
	// Line 491, Address: 0x193114, Func Offset: 0x3a4
	// Line 492, Address: 0x19311c, Func Offset: 0x3ac
	// Line 496, Address: 0x193134, Func Offset: 0x3c4
	// Line 497, Address: 0x19315c, Func Offset: 0x3ec
	// Line 500, Address: 0x193160, Func Offset: 0x3f0
	// Line 501, Address: 0x1931b4, Func Offset: 0x444
	// Line 505, Address: 0x1931b8, Func Offset: 0x448
	// Line 506, Address: 0x1931d0, Func Offset: 0x460
	// Line 508, Address: 0x1931d4, Func Offset: 0x464
	// Line 509, Address: 0x1931e8, Func Offset: 0x478
	// Line 510, Address: 0x1931f4, Func Offset: 0x484
	// Line 511, Address: 0x193204, Func Offset: 0x494
	// Line 514, Address: 0x19320c, Func Offset: 0x49c
	// Line 515, Address: 0x193210, Func Offset: 0x4a0
	// Line 517, Address: 0x193218, Func Offset: 0x4a8
	// Line 518, Address: 0x19324c, Func Offset: 0x4dc
	// Line 520, Address: 0x193260, Func Offset: 0x4f0
	// Line 521, Address: 0x193274, Func Offset: 0x504
	// Line 522, Address: 0x193280, Func Offset: 0x510
	// Line 523, Address: 0x19328c, Func Offset: 0x51c
	// Line 525, Address: 0x193290, Func Offset: 0x520
	// Line 527, Address: 0x1932a8, Func Offset: 0x538
	// Line 528, Address: 0x1932b4, Func Offset: 0x544
	// Line 530, Address: 0x1932c4, Func Offset: 0x554
	// Line 531, Address: 0x1932cc, Func Offset: 0x55c
	// Func End, Address: 0x1932ec, Func Offset: 0x57c
}

// 
// Start address: 0x1932f0
void sh2shd_add_char_to_kick_packet(SHADOW_CHAR_MAN* man, SHADOW_PACKET_BUF* kick_packet)
{
	unsigned int* reftag_pool_addr;
	Q_WORDDATA* curr;
	int i;
	// Line 666, Address: 0x1932f0, Func Offset: 0
	// Line 668, Address: 0x193308, Func Offset: 0x18
	// Line 671, Address: 0x193310, Func Offset: 0x20
	// Line 673, Address: 0x19331c, Func Offset: 0x2c
	// Line 674, Address: 0x193338, Func Offset: 0x48
	// Line 678, Address: 0x193354, Func Offset: 0x64
	// Line 679, Address: 0x19336c, Func Offset: 0x7c
	// Line 680, Address: 0x193370, Func Offset: 0x80
	// Line 687, Address: 0x193390, Func Offset: 0xa0
	// Line 689, Address: 0x1933a0, Func Offset: 0xb0
	// Line 690, Address: 0x1933a8, Func Offset: 0xb8
	// Func End, Address: 0x1933c0, Func Offset: 0xd0
}

// 
// Start address: 0x1933c0
void sh2shd_renew_char_man(SHADOW_CHAR_MAN* man, float* spot_pos, float leng)
{
	float world_local[4][4];
	int i;
	// Line 732, Address: 0x1933c0, Func Offset: 0
	// Line 743, Address: 0x1933d8, Func Offset: 0x18
	// Line 752, Address: 0x1933e4, Func Offset: 0x24
	// Line 754, Address: 0x19343c, Func Offset: 0x7c
	// Line 755, Address: 0x193460, Func Offset: 0xa0
	// Line 758, Address: 0x19348c, Func Offset: 0xcc
	// Line 761, Address: 0x1934ac, Func Offset: 0xec
	// Line 762, Address: 0x1934c8, Func Offset: 0x108
	// Func End, Address: 0x1934dc, Func Offset: 0x11c
}

// 
// Start address: 0x1934e0
void sh2shd_renew_char_man_parallel(SHADOW_CHAR_MAN* man, float* virtual_light_position)
{
	float world_local[4][4];
	float leng;
	int i;
	// Line 767, Address: 0x1934e0, Func Offset: 0
	// Line 769, Address: 0x1934f4, Func Offset: 0x14
	// Line 774, Address: 0x193508, Func Offset: 0x28
	// Line 776, Address: 0x193514, Func Offset: 0x34
	// Line 778, Address: 0x19356c, Func Offset: 0x8c
	// Line 779, Address: 0x193590, Func Offset: 0xb0
	// Line 782, Address: 0x1935bc, Func Offset: 0xdc
	// Line 783, Address: 0x1935dc, Func Offset: 0xfc
	// Line 784, Address: 0x1935f8, Func Offset: 0x118
	// Func End, Address: 0x19360c, Func Offset: 0x12c
}

// 
// Start address: 0x193610
void sh2shd_calc_light_position_for_parallel(float* pos, float height, unsigned short kind)
{
	float a;
	float mat[4][4];
	float tmp[4];
	SPOT_LIGHT spot;
	// Line 792, Address: 0x193610, Func Offset: 0
	// Line 807, Address: 0x193628, Func Offset: 0x18
	// Line 809, Address: 0x19363c, Func Offset: 0x2c
	// Line 811, Address: 0x193650, Func Offset: 0x40
	// Line 812, Address: 0x193658, Func Offset: 0x48
	// Line 813, Address: 0x193664, Func Offset: 0x54
	// Line 814, Address: 0x19366c, Func Offset: 0x5c
	// Line 815, Address: 0x193678, Func Offset: 0x68
	// Line 818, Address: 0x193688, Func Offset: 0x78
	// Line 819, Address: 0x193690, Func Offset: 0x80
	// Line 820, Address: 0x1936b8, Func Offset: 0xa8
	// Line 821, Address: 0x1936cc, Func Offset: 0xbc
	// Line 885, Address: 0x1936d8, Func Offset: 0xc8
	// Func End, Address: 0x1936f0, Func Offset: 0xe0
}

// 
// Start address: 0x1936f0
void sh2shd_make_reftag_pool_char_for_drop(SHADOW_CHAR_MAN* man, SHADOW_PACKET_BUF* ref_packet, Q_WORDDATA* rawdata)
{
	short shape_no;
	Q_WORDDATA* raw;
	Q_WORDDATA* ref;
	SHADOW_GEOM_HEAD geom_head;
	SHADOW_CHAR_OBJ_HEAD char_obj_head;
	SHADOW_CHAR_HEAD char_head;
	// Line 890, Address: 0x1936f0, Func Offset: 0
	// Line 894, Address: 0x193710, Func Offset: 0x20
	// Line 895, Address: 0x193718, Func Offset: 0x28
	// Line 897, Address: 0x19371c, Func Offset: 0x2c
	// Line 899, Address: 0x193728, Func Offset: 0x38
	// Line 900, Address: 0x193758, Func Offset: 0x68
	// Line 905, Address: 0x19375c, Func Offset: 0x6c
	// Line 907, Address: 0x193764, Func Offset: 0x74
	// Line 909, Address: 0x193770, Func Offset: 0x80
	// Line 910, Address: 0x193794, Func Offset: 0xa4
	// Line 911, Address: 0x193798, Func Offset: 0xa8
	// Line 912, Address: 0x1937bc, Func Offset: 0xcc
	// Line 916, Address: 0x1937e4, Func Offset: 0xf4
	// Line 917, Address: 0x1937f0, Func Offset: 0x100
	// Line 918, Address: 0x1937fc, Func Offset: 0x10c
	// Line 919, Address: 0x193808, Func Offset: 0x118
	// Line 920, Address: 0x193810, Func Offset: 0x120
	// Line 921, Address: 0x193814, Func Offset: 0x124
	// Line 926, Address: 0x193818, Func Offset: 0x128
	// Line 927, Address: 0x193850, Func Offset: 0x160
	// Line 932, Address: 0x193854, Func Offset: 0x164
	// Line 933, Address: 0x1938a4, Func Offset: 0x1b4
	// Line 935, Address: 0x1938a8, Func Offset: 0x1b8
	// Line 936, Address: 0x1938c4, Func Offset: 0x1d4
	// Line 938, Address: 0x1938c8, Func Offset: 0x1d8
	// Line 940, Address: 0x1938d0, Func Offset: 0x1e0
	// Line 941, Address: 0x193904, Func Offset: 0x214
	// Line 959, Address: 0x193918, Func Offset: 0x228
	// Line 963, Address: 0x193948, Func Offset: 0x258
	// Line 964, Address: 0x193970, Func Offset: 0x280
	// Line 968, Address: 0x193974, Func Offset: 0x284
	// Line 969, Address: 0x1939a0, Func Offset: 0x2b0
	// Line 970, Address: 0x1939a4, Func Offset: 0x2b4
	// Line 971, Address: 0x1939f8, Func Offset: 0x308
	// Line 972, Address: 0x1939fc, Func Offset: 0x30c
	// Line 974, Address: 0x193a04, Func Offset: 0x314
	// Line 977, Address: 0x193a20, Func Offset: 0x330
	// Line 978, Address: 0x193a38, Func Offset: 0x348
	// Line 980, Address: 0x193a3c, Func Offset: 0x34c
	// Line 981, Address: 0x193a50, Func Offset: 0x360
	// Line 982, Address: 0x193a5c, Func Offset: 0x36c
	// Line 985, Address: 0x193a6c, Func Offset: 0x37c
	// Line 988, Address: 0x193a84, Func Offset: 0x394
	// Line 989, Address: 0x193a90, Func Offset: 0x3a0
	// Line 991, Address: 0x193a9c, Func Offset: 0x3ac
	// Line 992, Address: 0x193aa4, Func Offset: 0x3b4
	// Func End, Address: 0x193ac0, Func Offset: 0x3d0
}

// 
// Start address: 0x193ac0
void sh2shd_make_reftag_pool_char_foot_for_drop(SHADOW_CHAR_MAN* man, SHADOW_PACKET_BUF* ref_packet, Q_WORDDATA* rawdata)
{
	int draw_flag;
	short shape_no;
	Q_WORDDATA* raw;
	Q_WORDDATA* ref;
	SHADOW_GEOM_HEAD geom_head;
	SHADOW_CHAR_OBJ_HEAD char_obj_head;
	SHADOW_CHAR_HEAD char_head;
	// Line 995, Address: 0x193ac0, Func Offset: 0
	// Line 999, Address: 0x193ae4, Func Offset: 0x24
	// Line 1000, Address: 0x193aec, Func Offset: 0x2c
	// Line 1001, Address: 0x193af0, Func Offset: 0x30
	// Line 1005, Address: 0x193afc, Func Offset: 0x3c
	// Line 1006, Address: 0x193b34, Func Offset: 0x74
	// Line 1008, Address: 0x193b38, Func Offset: 0x78
	// Line 1009, Address: 0x193b68, Func Offset: 0xa8
	// Line 1011, Address: 0x193b6c, Func Offset: 0xac
	// Line 1013, Address: 0x193b74, Func Offset: 0xb4
	// Line 1015, Address: 0x193b80, Func Offset: 0xc0
	// Line 1016, Address: 0x193ba4, Func Offset: 0xe4
	// Line 1017, Address: 0x193ba8, Func Offset: 0xe8
	// Line 1018, Address: 0x193bcc, Func Offset: 0x10c
	// Line 1021, Address: 0x193bf4, Func Offset: 0x134
	// Line 1025, Address: 0x193c0c, Func Offset: 0x14c
	// Line 1027, Address: 0x193c18, Func Offset: 0x158
	// Line 1028, Address: 0x193c24, Func Offset: 0x164
	// Line 1029, Address: 0x193c30, Func Offset: 0x170
	// Line 1030, Address: 0x193c3c, Func Offset: 0x17c
	// Line 1031, Address: 0x193c44, Func Offset: 0x184
	// Line 1033, Address: 0x193c48, Func Offset: 0x188
	// Line 1039, Address: 0x193c4c, Func Offset: 0x18c
	// Line 1040, Address: 0x193c84, Func Offset: 0x1c4
	// Line 1043, Address: 0x193c88, Func Offset: 0x1c8
	// Line 1047, Address: 0x193c94, Func Offset: 0x1d4
	// Line 1048, Address: 0x193ce4, Func Offset: 0x224
	// Line 1050, Address: 0x193ce8, Func Offset: 0x228
	// Line 1051, Address: 0x193d04, Func Offset: 0x244
	// Line 1054, Address: 0x193d08, Func Offset: 0x248
	// Line 1056, Address: 0x193d10, Func Offset: 0x250
	// Line 1057, Address: 0x193d44, Func Offset: 0x284
	// Line 1059, Address: 0x193d58, Func Offset: 0x298
	// Line 1077, Address: 0x193d64, Func Offset: 0x2a4
	// Line 1081, Address: 0x193d98, Func Offset: 0x2d8
	// Line 1082, Address: 0x193dc0, Func Offset: 0x300
	// Line 1086, Address: 0x193dc4, Func Offset: 0x304
	// Line 1087, Address: 0x193df0, Func Offset: 0x330
	// Line 1088, Address: 0x193df4, Func Offset: 0x334
	// Line 1089, Address: 0x193e48, Func Offset: 0x388
	// Line 1090, Address: 0x193e4c, Func Offset: 0x38c
	// Line 1092, Address: 0x193e54, Func Offset: 0x394
	// Line 1095, Address: 0x193e70, Func Offset: 0x3b0
	// Line 1096, Address: 0x193e88, Func Offset: 0x3c8
	// Line 1097, Address: 0x193e8c, Func Offset: 0x3cc
	// Line 1099, Address: 0x193e90, Func Offset: 0x3d0
	// Line 1100, Address: 0x193ea4, Func Offset: 0x3e4
	// Line 1101, Address: 0x193eb0, Func Offset: 0x3f0
	// Line 1106, Address: 0x193ebc, Func Offset: 0x3fc
	// Line 1110, Address: 0x193ed4, Func Offset: 0x414
	// Line 1111, Address: 0x193ee0, Func Offset: 0x420
	// Line 1113, Address: 0x193eec, Func Offset: 0x42c
	// Line 1114, Address: 0x193ef4, Func Offset: 0x434
	// Func End, Address: 0x193f14, Func Offset: 0x454
}

// 
// Start address: 0x193f20
void sh2shd_renew_char_man_for_drop(SHADOW_CHAR_MAN* man, float* spot_pos, float alpha_decay, int full_switch)
{
	float tmp;
	float low;
	float high;
	float world_local[4][4];
	int i;
	// Line 1117, Address: 0x193f20, Func Offset: 0
	// Line 1131, Address: 0x193f3c, Func Offset: 0x1c
	// Line 1132, Address: 0x193f64, Func Offset: 0x44
	// Line 1134, Address: 0x193f7c, Func Offset: 0x5c
	// Line 1135, Address: 0x193f84, Func Offset: 0x64
	// Line 1136, Address: 0x193f8c, Func Offset: 0x6c
	// Line 1139, Address: 0x193f94, Func Offset: 0x74
	// Line 1141, Address: 0x193fac, Func Offset: 0x8c
	// Line 1150, Address: 0x193fb8, Func Offset: 0x98
	// Line 1152, Address: 0x194010, Func Offset: 0xf0
	// Line 1153, Address: 0x194034, Func Offset: 0x114
	// Line 1157, Address: 0x194060, Func Offset: 0x140
	// Line 1158, Address: 0x194080, Func Offset: 0x160
	// Line 1159, Address: 0x1940a0, Func Offset: 0x180
	// Line 1160, Address: 0x1940c0, Func Offset: 0x1a0
	// Line 1161, Address: 0x1940e0, Func Offset: 0x1c0
	// Func End, Address: 0x1940f4, Func Offset: 0x1d4
}

// 
// Start address: 0x194100
void sh2shd_get_height_for_alpha(float* high, float* low, unsigned short kind, unsigned short id, int full_switch)
{
	float mat[4][4];
	// Line 1164, Address: 0x194100, Func Offset: 0
	// Line 1167, Address: 0x19411c, Func Offset: 0x1c
	// Line 1170, Address: 0x194144, Func Offset: 0x44
	// Line 1171, Address: 0x194154, Func Offset: 0x54
	// Line 1173, Address: 0x194174, Func Offset: 0x74
	// Line 1174, Address: 0x19418c, Func Offset: 0x8c
	// Line 1175, Address: 0x194198, Func Offset: 0x98
	// Line 1176, Address: 0x1941b0, Func Offset: 0xb0
	// Line 1177, Address: 0x1941bc, Func Offset: 0xbc
	// Line 1178, Address: 0x1941d4, Func Offset: 0xd4
	// Line 1179, Address: 0x1941f0, Func Offset: 0xf0
	// Line 1180, Address: 0x1941fc, Func Offset: 0xfc
	// Line 1182, Address: 0x194204, Func Offset: 0x104
	// Line 1184, Address: 0x194214, Func Offset: 0x114
	// Line 1185, Address: 0x19422c, Func Offset: 0x12c
	// Line 1186, Address: 0x194238, Func Offset: 0x138
	// Line 1187, Address: 0x194250, Func Offset: 0x150
	// Line 1188, Address: 0x19426c, Func Offset: 0x16c
	// Line 1189, Address: 0x194278, Func Offset: 0x178
	// Line 1192, Address: 0x194280, Func Offset: 0x180
	// Line 1193, Address: 0x194298, Func Offset: 0x198
	// Line 1195, Address: 0x1942a4, Func Offset: 0x1a4
	// Line 1196, Address: 0x1942bc, Func Offset: 0x1bc
	// Line 1197, Address: 0x1942c8, Func Offset: 0x1c8
	// Line 1198, Address: 0x1942e0, Func Offset: 0x1e0
	// Line 1199, Address: 0x1942fc, Func Offset: 0x1fc
	// Line 1233, Address: 0x194308, Func Offset: 0x208
	// Func End, Address: 0x194318, Func Offset: 0x218
}

// 
// Start address: 0x194320
int check_lower_body(unsigned short kind, short obj_id)
{
	int val;
	// Line 1243, Address: 0x194320, Func Offset: 0
	// Line 1244, Address: 0x194334, Func Offset: 0x14
	// Line 1246, Address: 0x194338, Func Offset: 0x18
	// Line 1249, Address: 0x194360, Func Offset: 0x40
	// Line 1250, Address: 0x194370, Func Offset: 0x50
	// Line 1252, Address: 0x194378, Func Offset: 0x58
	// Line 1259, Address: 0x194388, Func Offset: 0x68
	// Line 1260, Address: 0x19438c, Func Offset: 0x6c
	// Func End, Address: 0x1943a0, Func Offset: 0x80
}

// 
// Start address: 0x1943a0
int check_lower_body_scust(short obj_id)
{
	int val;
	// Line 1267, Address: 0x1943a0, Func Offset: 0
	// Line 1303, Address: 0x1943ac, Func Offset: 0xc
	// Line 1307, Address: 0x194480, Func Offset: 0xe0
	// Line 1309, Address: 0x19448c, Func Offset: 0xec
	// Line 1311, Address: 0x194490, Func Offset: 0xf0
	// Line 1312, Address: 0x194494, Func Offset: 0xf4
	// Func End, Address: 0x1944a4, Func Offset: 0x104
}

// 
// Start address: 0x1944b0
int check_lower_body_mknst(short obj_id)
{
	int val;
	// Line 1319, Address: 0x1944b0, Func Offset: 0
	// Line 1322, Address: 0x1944bc, Func Offset: 0xc
	// Line 1333, Address: 0x1945c0, Func Offset: 0x110
	// Line 1335, Address: 0x1945cc, Func Offset: 0x11c
	// Line 1337, Address: 0x1945d0, Func Offset: 0x120
	// Line 1338, Address: 0x1945d4, Func Offset: 0x124
	// Func End, Address: 0x1945e4, Func Offset: 0x134
}

