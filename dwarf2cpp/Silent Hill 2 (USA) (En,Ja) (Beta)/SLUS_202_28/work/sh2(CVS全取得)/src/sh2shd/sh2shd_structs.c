typedef struct shBattleFight;
typedef struct shBattleShot;
typedef union Q_WORDDATA;
typedef struct shAttackInfo;
typedef struct SHADOW_PACKET_BUF;
typedef union _anon0;


typedef unsigned int type_0[4];
typedef unsigned short type_1[8];
typedef float type_2[4];
typedef unsigned char type_3[16];
typedef int type_4[4];
typedef short type_5[8];
typedef char type_6[16];
typedef unsigned long type_7[2];
typedef shAttackInfo type_8[66];

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

shAttackInfo sh2_attack_list[66];

void sh2shd_init_packet_buf(SHADOW_PACKET_BUF* packet, Q_WORDDATA* buf);
void sh2shd_reset_packet_buf(SHADOW_PACKET_BUF* packet);

// 
// Start address: 0x1a67d0
void sh2shd_init_packet_buf(SHADOW_PACKET_BUF* packet, Q_WORDDATA* buf)
{
	// Line 10, Address: 0x1a67d0, Func Offset: 0
	// Line 11, Address: 0x1a67d4, Func Offset: 0x4
	// Line 12, Address: 0x1a67d8, Func Offset: 0x8
	// Func End, Address: 0x1a67e0, Func Offset: 0x10
}

// 
// Start address: 0x1a67e0
void sh2shd_reset_packet_buf(SHADOW_PACKET_BUF* packet)
{
	// Line 16, Address: 0x1a67e0, Func Offset: 0
	// Line 17, Address: 0x1a67e8, Func Offset: 0x8
	// Func End, Address: 0x1a67f0, Func Offset: 0x10
}

