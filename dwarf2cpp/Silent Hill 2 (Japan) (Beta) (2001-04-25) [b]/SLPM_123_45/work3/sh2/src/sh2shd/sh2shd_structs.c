typedef struct SHADOW_PACKET_BUF;
typedef union Q_WORDDATA;
typedef struct SHADOW_OUTDOOR_HEAD;
typedef struct SHADOW_ENV;


typedef SHADOW_ENV type_0[61];
typedef SHADOW_ENV type_1[70];
typedef SHADOW_ENV type_2[21];
typedef SHADOW_ENV type_3[2];
typedef SHADOW_ENV type_4[3];
typedef unsigned int type_5[4];
typedef unsigned short type_6[8];
typedef float type_7[4];
typedef unsigned char type_8[16];
typedef int type_9[4];
typedef short type_10[8];
typedef SHADOW_ENV type_11[52];
typedef SHADOW_ENV type_12[74];
typedef char type_13[16];
typedef unsigned long type_14[2];
typedef SHADOW_ENV type_15[2];
typedef SHADOW_ENV type_16[27];
typedef SHADOW_ENV type_17[29];
typedef SHADOW_ENV type_18[27];
typedef SHADOW_ENV type_19[13];
typedef SHADOW_ENV type_20[4];

struct SHADOW_PACKET_BUF
{
	Q_WORDDATA* head;
	Q_WORDDATA* curr;
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

struct SHADOW_ENV
{
	short demo_no;
	short glb_crd;
	short block;
	short clip_kind;
	float char_leng;
	float back_leng;
};

SHADOW_ENV default_env;
SHADOW_ENV ca_env[29];
SHADOW_ENV cb_env[70];
SHADOW_ENV cc_env[74];
SHADOW_ENV cd_env[13];
SHADOW_ENV ob_env[2];
SHADOW_ENV er_env[2];
SHADOW_ENV bw_env[4];
SHADOW_ENV th_env[3];
SHADOW_ENV ap_env[27];
SHADOW_ENV hp_env[61];
SHADOW_ENV ps_env[52];
SHADOW_ENV rr_env[27];
SHADOW_ENV ru_env[21];

void sh2shd_init_packet_buf(SHADOW_PACKET_BUF* packet, Q_WORDDATA* buf);
void sh2shd_reset_packet_buf(SHADOW_PACKET_BUF* packet);
void sh2shd_get_shadow_env(SHADOW_ENV* env, SHADOW_OUTDOOR_HEAD* head);

// 
// Start address: 0x1a91b0
void sh2shd_init_packet_buf(SHADOW_PACKET_BUF* packet, Q_WORDDATA* buf)
{
	// Line 437, Address: 0x1a91b0, Func Offset: 0
	// Line 438, Address: 0x1a91bc, Func Offset: 0xc
	// Line 439, Address: 0x1a91c8, Func Offset: 0x18
	// Line 440, Address: 0x1a91d4, Func Offset: 0x24
	// Func End, Address: 0x1a91e0, Func Offset: 0x30
}

// 
// Start address: 0x1a91e0
void sh2shd_reset_packet_buf(SHADOW_PACKET_BUF* packet)
{
	// Line 443, Address: 0x1a91e0, Func Offset: 0
	// Line 444, Address: 0x1a91e8, Func Offset: 0x8
	// Line 445, Address: 0x1a91f8, Func Offset: 0x18
	// Func End, Address: 0x1a9204, Func Offset: 0x24
}

// 
// Start address: 0x1a9210
void sh2shd_get_shadow_env(SHADOW_ENV* env, SHADOW_OUTDOOR_HEAD* head)
{
	int i;
	// Line 448, Address: 0x1a9210, Func Offset: 0
	// Line 451, Address: 0x1a9220, Func Offset: 0x10
	// Line 455, Address: 0x1a9254, Func Offset: 0x44
	// Line 456, Address: 0x1a9280, Func Offset: 0x70
	// Line 459, Address: 0x1a9288, Func Offset: 0x78
	// Line 460, Address: 0x1a92b4, Func Offset: 0xa4
	// Line 463, Address: 0x1a92bc, Func Offset: 0xac
	// Line 464, Address: 0x1a92e8, Func Offset: 0xd8
	// Line 466, Address: 0x1a92f0, Func Offset: 0xe0
	// Line 467, Address: 0x1a931c, Func Offset: 0x10c
	// Line 469, Address: 0x1a9324, Func Offset: 0x114
	// Line 470, Address: 0x1a9350, Func Offset: 0x140
	// Line 472, Address: 0x1a9358, Func Offset: 0x148
	// Line 473, Address: 0x1a9384, Func Offset: 0x174
	// Line 475, Address: 0x1a938c, Func Offset: 0x17c
	// Line 476, Address: 0x1a93b8, Func Offset: 0x1a8
	// Line 478, Address: 0x1a93c0, Func Offset: 0x1b0
	// Line 479, Address: 0x1a93ec, Func Offset: 0x1dc
	// Line 481, Address: 0x1a93f4, Func Offset: 0x1e4
	// Line 483, Address: 0x1a9400, Func Offset: 0x1f0
	// Line 485, Address: 0x1a9434, Func Offset: 0x224
	// Line 486, Address: 0x1a9468, Func Offset: 0x258
	// Line 488, Address: 0x1a9470, Func Offset: 0x260
	// Line 489, Address: 0x1a9484, Func Offset: 0x274
	// Line 491, Address: 0x1a948c, Func Offset: 0x27c
	// Line 493, Address: 0x1a9498, Func Offset: 0x288
	// Line 495, Address: 0x1a94cc, Func Offset: 0x2bc
	// Line 496, Address: 0x1a9500, Func Offset: 0x2f0
	// Line 498, Address: 0x1a9508, Func Offset: 0x2f8
	// Line 499, Address: 0x1a951c, Func Offset: 0x30c
	// Line 501, Address: 0x1a9524, Func Offset: 0x314
	// Line 502, Address: 0x1a9550, Func Offset: 0x340
	// Line 504, Address: 0x1a9558, Func Offset: 0x348
	// Line 505, Address: 0x1a9584, Func Offset: 0x374
	// Line 507, Address: 0x1a958c, Func Offset: 0x37c
	// Line 510, Address: 0x1a95b8, Func Offset: 0x3a8
	// Func End, Address: 0x1a95c8, Func Offset: 0x3b8
}

