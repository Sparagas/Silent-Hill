typedef union Q_WORDDATA;
typedef struct SHADOW_GEOM_HEAD;
typedef struct SHADOW_SHAPE_FRAME;
typedef struct SHADOW_PACKET_BUF;
typedef struct SHADOW_OUTDOOR_MAN;
typedef struct _anon0;
typedef struct shAttackInfo;
typedef struct SHADOW_OFF_WORK;
typedef struct SHADOW_CHAR_MAN;
typedef union _anon1;
typedef struct SPOT_LIGHT;
typedef struct SHADOW_ENV;
typedef struct SHADOW_MAN;
typedef struct SHADOW_OUTDOOR_HEAD;
typedef struct shBattleFight;
typedef struct SHADOW_OUTDOOR_OBJ_HEAD;
typedef struct shBattleShot;


typedef float type_0[4];
typedef short type_1[16];
typedef int type_2[4];
typedef float type_3[4];
typedef float type_4[4][6];
typedef float type_5[4][6][6];
typedef float type_6[4][4];
typedef int type_7[4][6];
typedef int type_8[4][6][6];
typedef SHADOW_OFF_WORK type_9[4];
typedef float type_10[4][64];
typedef int type_11[4][64];
typedef SHADOW_CHAR_MAN* type_12[16];
typedef SHADOW_OUTDOOR_MAN* type_13[4];
typedef unsigned int type_14[4];
typedef unsigned short type_15[8];
typedef float type_16[4];
typedef unsigned char type_17[16];
typedef int type_18[4];
typedef short type_19[8];
typedef char type_20[16];
typedef unsigned long type_21[2];
typedef shAttackInfo type_22[46];

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

struct SHADOW_PACKET_BUF
{
	Q_WORDDATA* head;
	Q_WORDDATA* curr;
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

struct SHADOW_OFF_WORK
{
	short map_id;
	short obj_id[16];
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

struct SHADOW_ENV
{
	short demo_no;
	short glb_crd;
	short block;
	short clip_kind;
	float char_leng;
	float back_leng;
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
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

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

shAttackInfo sh2_attack_list[46];
SHADOW_OFF_WORK shadow_off_work[4];
int sphere_i_data[4][6][6];
float sphere_data[4][6][6];
int tmp_i_buf[4][64];
Q_WORDDATA color_white;
Q_WORDDATA color_white_of_white;
Q_WORDDATA color_yellow;
Q_WORDDATA color_green;
float calc_f_buf[4][64];
Q_WORDDATA color2;
Q_WORDDATA color;

void sh2shd_init_outdoor_man2(SHADOW_OUTDOOR_MAN* man, Q_WORDDATA* raw_data, short id);
void sh2shd_make_reftag_pool_outdoor(SHADOW_OUTDOOR_MAN* man, SHADOW_PACKET_BUF* ref_packet, float spot_cam_angle);
void sh2shd_add_outdoor_to_kick_packet(SHADOW_OUTDOOR_MAN* man, SHADOW_PACKET_BUF* kick_packet);
void sh2shd_renew_outdoor_man(SHADOW_OUTDOOR_MAN* man, float* spot_pos, float leng);

// 
// Start address: 0x1a57e0
void sh2shd_init_outdoor_man2(SHADOW_OUTDOOR_MAN* man, Q_WORDDATA* raw_data, short id)
{
	Q_WORDDATA* raw;
	short obj_id;
	SHADOW_GEOM_HEAD geom_head;
	SHADOW_OUTDOOR_OBJ_HEAD obj_head;
	SHADOW_OUTDOOR_HEAD outdoor_head;
	// Line 49, Address: 0x1a57e0, Func Offset: 0
	// Line 53, Address: 0x1a57fc, Func Offset: 0x1c
	// Line 54, Address: 0x1a5808, Func Offset: 0x28
	// Line 73, Address: 0x1a580c, Func Offset: 0x2c
	// Line 75, Address: 0x1a5818, Func Offset: 0x38
	// Line 76, Address: 0x1a5848, Func Offset: 0x68
	// Line 77, Address: 0x1a5858, Func Offset: 0x78
	// Line 79, Address: 0x1a5864, Func Offset: 0x84
	// Line 80, Address: 0x1a5874, Func Offset: 0x94
	// Line 81, Address: 0x1a587c, Func Offset: 0x9c
	// Line 83, Address: 0x1a58a4, Func Offset: 0xc4
	// Line 85, Address: 0x1a58a8, Func Offset: 0xc8
	// Line 87, Address: 0x1a58b0, Func Offset: 0xd0
	// Line 88, Address: 0x1a58d4, Func Offset: 0xf4
	// Line 90, Address: 0x1a58d8, Func Offset: 0xf8
	// Line 93, Address: 0x1a58e4, Func Offset: 0x104
	// Line 95, Address: 0x1a58e8, Func Offset: 0x108
	// Line 96, Address: 0x1a591c, Func Offset: 0x13c
	// Line 98, Address: 0x1a5950, Func Offset: 0x170
	// Line 101, Address: 0x1a597c, Func Offset: 0x19c
	// Line 102, Address: 0x1a5990, Func Offset: 0x1b0
	// Line 105, Address: 0x1a5998, Func Offset: 0x1b8
	// Line 108, Address: 0x1a59c4, Func Offset: 0x1e4
	// Line 109, Address: 0x1a59d8, Func Offset: 0x1f8
	// Line 110, Address: 0x1a59e4, Func Offset: 0x204
	// Line 112, Address: 0x1a59ec, Func Offset: 0x20c
	// Line 113, Address: 0x1a5a1c, Func Offset: 0x23c
	// Line 114, Address: 0x1a5a30, Func Offset: 0x250
	// Line 115, Address: 0x1a5a3c, Func Offset: 0x25c
	// Line 116, Address: 0x1a5a4c, Func Offset: 0x26c
	// Line 118, Address: 0x1a5a50, Func Offset: 0x270
	// Line 119, Address: 0x1a5a5c, Func Offset: 0x27c
	// Line 120, Address: 0x1a5a6c, Func Offset: 0x28c
	// Func End, Address: 0x1a5a84, Func Offset: 0x2a4
}

// 
// Start address: 0x1a5a90
void sh2shd_make_reftag_pool_outdoor(SHADOW_OUTDOOR_MAN* man, SHADOW_PACKET_BUF* ref_packet, float spot_cam_angle)
{
	Q_WORDDATA* raw;
	Q_WORDDATA* ref;
	SHADOW_GEOM_HEAD geom_head;
	SHADOW_OUTDOOR_OBJ_HEAD obj_head;
	SHADOW_OUTDOOR_HEAD outdoor_head;
	// Line 130, Address: 0x1a5a90, Func Offset: 0
	// Line 134, Address: 0x1a5aa8, Func Offset: 0x18
	// Line 136, Address: 0x1a5ab4, Func Offset: 0x24
	// Line 139, Address: 0x1a5ac0, Func Offset: 0x30
	// Line 140, Address: 0x1a5af0, Func Offset: 0x60
	// Line 143, Address: 0x1a5af8, Func Offset: 0x68
	// Line 145, Address: 0x1a5b04, Func Offset: 0x74
	// Line 147, Address: 0x1a5b0c, Func Offset: 0x7c
	// Line 148, Address: 0x1a5b30, Func Offset: 0xa0
	// Line 149, Address: 0x1a5b58, Func Offset: 0xc8
	// Line 150, Address: 0x1a5b60, Func Offset: 0xd0
	// Line 153, Address: 0x1a5b88, Func Offset: 0xf8
	// Line 154, Address: 0x1a5b94, Func Offset: 0x104
	// Line 155, Address: 0x1a5ba0, Func Offset: 0x110
	// Line 156, Address: 0x1a5bac, Func Offset: 0x11c
	// Line 157, Address: 0x1a5bb4, Func Offset: 0x124
	// Line 159, Address: 0x1a5bbc, Func Offset: 0x12c
	// Line 164, Address: 0x1a5bc4, Func Offset: 0x134
	// Line 165, Address: 0x1a5c18, Func Offset: 0x188
	// Line 167, Address: 0x1a5c20, Func Offset: 0x190
	// Line 168, Address: 0x1a5c3c, Func Offset: 0x1ac
	// Line 170, Address: 0x1a5c44, Func Offset: 0x1b4
	// Line 172, Address: 0x1a5c4c, Func Offset: 0x1bc
	// Line 174, Address: 0x1a5c7c, Func Offset: 0x1ec
	// Line 178, Address: 0x1a5c90, Func Offset: 0x200
	// Line 182, Address: 0x1a5cc0, Func Offset: 0x230
	// Line 183, Address: 0x1a5ce8, Func Offset: 0x258
	// Line 186, Address: 0x1a5cec, Func Offset: 0x25c
	// Line 187, Address: 0x1a5d40, Func Offset: 0x2b0
	// Line 188, Address: 0x1a5d44, Func Offset: 0x2b4
	// Line 189, Address: 0x1a5d4c, Func Offset: 0x2bc
	// Line 193, Address: 0x1a5d80, Func Offset: 0x2f0
	// Line 194, Address: 0x1a5da8, Func Offset: 0x318
	// Line 198, Address: 0x1a5dac, Func Offset: 0x31c
	// Line 199, Address: 0x1a5dd8, Func Offset: 0x348
	// Line 200, Address: 0x1a5ddc, Func Offset: 0x34c
	// Line 201, Address: 0x1a5e30, Func Offset: 0x3a0
	// Line 202, Address: 0x1a5e34, Func Offset: 0x3a4
	// Line 203, Address: 0x1a5e3c, Func Offset: 0x3ac
	// Line 207, Address: 0x1a5e70, Func Offset: 0x3e0
	// Line 208, Address: 0x1a5e98, Func Offset: 0x408
	// Line 212, Address: 0x1a5e9c, Func Offset: 0x40c
	// Line 213, Address: 0x1a5ec8, Func Offset: 0x438
	// Line 214, Address: 0x1a5ecc, Func Offset: 0x43c
	// Line 215, Address: 0x1a5f20, Func Offset: 0x490
	// Line 216, Address: 0x1a5f24, Func Offset: 0x494
	// Line 218, Address: 0x1a5f2c, Func Offset: 0x49c
	// Line 222, Address: 0x1a5f60, Func Offset: 0x4d0
	// Line 223, Address: 0x1a5f88, Func Offset: 0x4f8
	// Line 226, Address: 0x1a5f8c, Func Offset: 0x4fc
	// Line 227, Address: 0x1a5fe0, Func Offset: 0x550
	// Line 228, Address: 0x1a5fe4, Func Offset: 0x554
	// Line 229, Address: 0x1a5fec, Func Offset: 0x55c
	// Line 233, Address: 0x1a603c, Func Offset: 0x5ac
	// Line 234, Address: 0x1a6064, Func Offset: 0x5d4
	// Line 238, Address: 0x1a6068, Func Offset: 0x5d8
	// Line 239, Address: 0x1a6094, Func Offset: 0x604
	// Line 240, Address: 0x1a6098, Func Offset: 0x608
	// Line 241, Address: 0x1a60ec, Func Offset: 0x65c
	// Line 242, Address: 0x1a60f4, Func Offset: 0x664
	// Line 243, Address: 0x1a60fc, Func Offset: 0x66c
	// Line 247, Address: 0x1a6130, Func Offset: 0x6a0
	// Line 248, Address: 0x1a6158, Func Offset: 0x6c8
	// Line 252, Address: 0x1a6160, Func Offset: 0x6d0
	// Line 253, Address: 0x1a618c, Func Offset: 0x6fc
	// Line 254, Address: 0x1a6194, Func Offset: 0x704
	// Line 255, Address: 0x1a61e8, Func Offset: 0x758
	// Line 258, Address: 0x1a61f0, Func Offset: 0x760
	// Line 259, Address: 0x1a6208, Func Offset: 0x778
	// Line 261, Address: 0x1a6210, Func Offset: 0x780
	// Line 262, Address: 0x1a6228, Func Offset: 0x798
	// Line 263, Address: 0x1a6234, Func Offset: 0x7a4
	// Line 266, Address: 0x1a6244, Func Offset: 0x7b4
	// Line 269, Address: 0x1a6260, Func Offset: 0x7d0
	// Line 270, Address: 0x1a626c, Func Offset: 0x7dc
	// Line 272, Address: 0x1a627c, Func Offset: 0x7ec
	// Line 273, Address: 0x1a6284, Func Offset: 0x7f4
	// Func End, Address: 0x1a6298, Func Offset: 0x808
}

// 
// Start address: 0x1a62a0
void sh2shd_add_outdoor_to_kick_packet(SHADOW_OUTDOOR_MAN* man, SHADOW_PACKET_BUF* kick_packet)
{
	int j;
	int count_call_tag_num;
	unsigned int* reftag_pool_addr;
	Q_WORDDATA* curr;
	Q_WORDDATA* top;
	int i;
	// Line 458, Address: 0x1a62a0, Func Offset: 0
	// Line 460, Address: 0x1a62c4, Func Offset: 0x24
	// Line 461, Address: 0x1a62cc, Func Offset: 0x2c
	// Line 463, Address: 0x1a62d4, Func Offset: 0x34
	// Line 465, Address: 0x1a62d8, Func Offset: 0x38
	// Line 467, Address: 0x1a62e4, Func Offset: 0x44
	// Line 468, Address: 0x1a6300, Func Offset: 0x60
	// Line 471, Address: 0x1a631c, Func Offset: 0x7c
	// Line 472, Address: 0x1a6334, Func Offset: 0x94
	// Line 473, Address: 0x1a6338, Func Offset: 0x98
	// Line 474, Address: 0x1a633c, Func Offset: 0x9c
	// Line 481, Address: 0x1a6358, Func Offset: 0xb8
	// Line 486, Address: 0x1a6368, Func Offset: 0xc8
	// Line 488, Address: 0x1a6374, Func Offset: 0xd4
	// Line 491, Address: 0x1a63b0, Func Offset: 0x110
	// Line 493, Address: 0x1a63bc, Func Offset: 0x11c
	// Line 495, Address: 0x1a63f4, Func Offset: 0x154
	// Line 496, Address: 0x1a642c, Func Offset: 0x18c
	// Line 498, Address: 0x1a6510, Func Offset: 0x270
	// Line 499, Address: 0x1a6524, Func Offset: 0x284
	// Line 500, Address: 0x1a6528, Func Offset: 0x288
	// Line 503, Address: 0x1a653c, Func Offset: 0x29c
	// Line 504, Address: 0x1a6544, Func Offset: 0x2a4
	// Func End, Address: 0x1a6568, Func Offset: 0x2c8
}

// 
// Start address: 0x1a6570
void sh2shd_renew_outdoor_man(SHADOW_OUTDOOR_MAN* man, float* spot_pos, float leng)
{
	SHADOW_ENV shadow_env;
	SHADOW_GEOM_HEAD geom_head;
	float world_local[4][4];
	int i;
	// Line 512, Address: 0x1a6570, Func Offset: 0
	// Line 524, Address: 0x1a6588, Func Offset: 0x18
	// Line 526, Address: 0x1a659c, Func Offset: 0x2c
	// Line 529, Address: 0x1a65a8, Func Offset: 0x38
	// Line 531, Address: 0x1a65f4, Func Offset: 0x84
	// Line 532, Address: 0x1a6618, Func Offset: 0xa8
	// Line 534, Address: 0x1a6644, Func Offset: 0xd4
	// Line 536, Address: 0x1a6678, Func Offset: 0x108
	// Line 539, Address: 0x1a66a8, Func Offset: 0x138
	// Line 541, Address: 0x1a66c8, Func Offset: 0x158
	// Line 542, Address: 0x1a66f0, Func Offset: 0x180
	// Line 543, Address: 0x1a6710, Func Offset: 0x1a0
	// Func End, Address: 0x1a6724, Func Offset: 0x1b4
}

