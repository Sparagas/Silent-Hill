typedef union _anon0;
typedef struct SPACK_ENV_DATA;
typedef struct SPACK_STATIC_DATA;
typedef struct Playing_Info;
typedef struct SPACK_DATA;
typedef struct SPACK_OT_DATA;
typedef struct _anon1;
typedef struct Pad_KeyConfig;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct _SH2_SYS;
typedef struct shAttackInfo;


typedef unsigned char type_0[10];
typedef unsigned char type_1[13];
typedef unsigned char type_2[34];
typedef char type_3[4];
typedef char type_4[4];
typedef unsigned short type_5[0];
typedef unsigned char type_6[10];
typedef shAttackInfo type_7[46];
typedef unsigned int type_8[8];

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
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

struct SPACK_STATIC_DATA
{
	unsigned short GifNLOOP;
	unsigned short DmaQwc;
	unsigned int PRE_PRIM_FLG_NREG;
	unsigned long REGS;
};

struct Playing_Info
{
	unsigned char stage;
	unsigned char enemy_off;
	unsigned char memo_select;
	unsigned char battle_level;
	unsigned char riddle_level;
	unsigned char brightness_level;
	char screen_position_x;
	char screen_position_y;
	unsigned char vibration;
	unsigned char auto_load;
	unsigned char sound;
	unsigned char bgm_volume;
	unsigned char se_volume;
	unsigned char weapon_control;
	unsigned char blood_color;
	unsigned char view_control;
	unsigned char retreat_turn;
	unsigned char walk_run_control;
	unsigned char auto_aiming;
	unsigned char view_mode;
	unsigned char bullet_adjust;
	unsigned char language;
	unsigned char subtitles;
	unsigned char control_type;
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

struct _anon1
{
	unsigned char option_step;
	unsigned char extra_mode;
	int cursol;
	float cursol_pos;
	int fade;
	unsigned char fade_flag;
	int timer;
	int hoge;
};

struct Pad_KeyConfig
{
	int enter;
	int cancel;
	int skip;
	int front_move;
	int back_move;
	int right_turn;
	int left_turn;
	int right_move;
	int left_move;
	int action;
	int attack;
	int dash;
	int light;
	int item;
	int search_view;
	int ready;
	int pause;
	int map;
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

struct _SH2_SYS
{
	unsigned int step[8];
	int main_status;
	unsigned int boot_first;
	unsigned int soft_reset;
	unsigned int frame_cnt;
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

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
_anon1 t;
_SH2_SYS Sh2sys;
Playing_Info playing;
Pad_KeyConfig key_config;
SPACK_DATA spack;
unsigned short msg_buffer[0];

int option_main();
void option_mainmain();
void bright_main();
void config_main();
void position_main();
void look_bgm();
void look_se();
int option_near(float f0, float f1, float f2, float f3);
int fade_in();
int fade_out(int mode);
void look_fade();
void look_board();
void look_cur();
void allow_u(int x, int y);
void allow_d(int x, int y);
void allow_l(int x, int y);
void allow_r(int x, int y);
void option_font();
void look_scr();
int zs(int hoge);

// 
// Start address: 0x213100
int option_main()
{
	float f;
	// Line 119, Address: 0x213100, Func Offset: 0
	// Line 121, Address: 0x213110, Func Offset: 0x10
	// Line 122, Address: 0x213124, Func Offset: 0x24
	// Line 123, Address: 0x21312c, Func Offset: 0x2c
	// Line 124, Address: 0x2131c4, Func Offset: 0xc4
	// Line 126, Address: 0x21325c, Func Offset: 0x15c
	// Line 127, Address: 0x213264, Func Offset: 0x164
	// Line 129, Address: 0x21326c, Func Offset: 0x16c
	// Line 132, Address: 0x2132a0, Func Offset: 0x1a0
	// Line 133, Address: 0x2132ac, Func Offset: 0x1ac
	// Line 134, Address: 0x2132b4, Func Offset: 0x1b4
	// Line 135, Address: 0x2132bc, Func Offset: 0x1bc
	// Line 136, Address: 0x2132c4, Func Offset: 0x1c4
	// Line 137, Address: 0x2132d0, Func Offset: 0x1d0
	// Line 138, Address: 0x2132dc, Func Offset: 0x1dc
	// Line 141, Address: 0x2132e4, Func Offset: 0x1e4
	// Line 142, Address: 0x213308, Func Offset: 0x208
	// Line 145, Address: 0x213310, Func Offset: 0x210
	// Line 146, Address: 0x213318, Func Offset: 0x218
	// Line 149, Address: 0x213320, Func Offset: 0x220
	// Line 150, Address: 0x213328, Func Offset: 0x228
	// Line 153, Address: 0x213330, Func Offset: 0x230
	// Line 154, Address: 0x213338, Func Offset: 0x238
	// Line 157, Address: 0x213340, Func Offset: 0x240
	// Line 158, Address: 0x213348, Func Offset: 0x248
	// Line 161, Address: 0x213350, Func Offset: 0x250
	// Line 163, Address: 0x213380, Func Offset: 0x280
	// Line 164, Address: 0x2133bc, Func Offset: 0x2bc
	// Line 166, Address: 0x2133c4, Func Offset: 0x2c4
	// Line 167, Address: 0x2133f8, Func Offset: 0x2f8
	// Line 169, Address: 0x213400, Func Offset: 0x300
	// Line 170, Address: 0x213434, Func Offset: 0x334
	// Line 173, Address: 0x213468, Func Offset: 0x368
	// Line 174, Address: 0x213470, Func Offset: 0x370
	// Line 177, Address: 0x21347c, Func Offset: 0x37c
	// Line 178, Address: 0x213480, Func Offset: 0x380
	// Func End, Address: 0x213498, Func Offset: 0x398
}

// 
// Start address: 0x2134a0
void option_mainmain()
{
	// Line 186, Address: 0x2134a0, Func Offset: 0
	// Line 187, Address: 0x2134a8, Func Offset: 0x8
	// Line 190, Address: 0x2134c0, Func Offset: 0x20
	// Line 193, Address: 0x2134c8, Func Offset: 0x28
	// Line 195, Address: 0x2134d0, Func Offset: 0x30
	// Line 198, Address: 0x2134e0, Func Offset: 0x40
	// Line 199, Address: 0x213508, Func Offset: 0x68
	// Line 201, Address: 0x213534, Func Offset: 0x94
	// Line 202, Address: 0x213550, Func Offset: 0xb0
	// Line 203, Address: 0x213570, Func Offset: 0xd0
	// Line 205, Address: 0x213590, Func Offset: 0xf0
	// Line 207, Address: 0x2135dc, Func Offset: 0x13c
	// Line 210, Address: 0x213610, Func Offset: 0x170
	// Line 211, Address: 0x213638, Func Offset: 0x198
	// Line 212, Address: 0x213664, Func Offset: 0x1c4
	// Line 213, Address: 0x2136b8, Func Offset: 0x218
	// Line 214, Address: 0x213704, Func Offset: 0x264
	// Line 216, Address: 0x21370c, Func Offset: 0x26c
	// Line 217, Address: 0x213734, Func Offset: 0x294
	// Line 218, Address: 0x21375c, Func Offset: 0x2bc
	// Line 219, Address: 0x21379c, Func Offset: 0x2fc
	// Line 220, Address: 0x2137d0, Func Offset: 0x330
	// Line 221, Address: 0x213810, Func Offset: 0x370
	// Line 222, Address: 0x21383c, Func Offset: 0x39c
	// Line 223, Address: 0x213884, Func Offset: 0x3e4
	// Line 225, Address: 0x21388c, Func Offset: 0x3ec
	// Line 226, Address: 0x2138b4, Func Offset: 0x414
	// Line 227, Address: 0x2138e0, Func Offset: 0x440
	// Line 228, Address: 0x21393c, Func Offset: 0x49c
	// Line 229, Address: 0x21398c, Func Offset: 0x4ec
	// Line 231, Address: 0x213994, Func Offset: 0x4f4
	// Line 232, Address: 0x2139bc, Func Offset: 0x51c
	// Line 233, Address: 0x2139e4, Func Offset: 0x544
	// Line 234, Address: 0x213a24, Func Offset: 0x584
	// Line 235, Address: 0x213a58, Func Offset: 0x5b8
	// Line 236, Address: 0x213a98, Func Offset: 0x5f8
	// Line 237, Address: 0x213ac4, Func Offset: 0x624
	// Line 238, Address: 0x213b10, Func Offset: 0x670
	// Line 240, Address: 0x213b18, Func Offset: 0x678
	// Line 241, Address: 0x213b40, Func Offset: 0x6a0
	// Line 242, Address: 0x213b68, Func Offset: 0x6c8
	// Line 243, Address: 0x213bbc, Func Offset: 0x71c
	// Line 244, Address: 0x213c04, Func Offset: 0x764
	// Line 246, Address: 0x213c0c, Func Offset: 0x76c
	// Line 247, Address: 0x213c34, Func Offset: 0x794
	// Line 248, Address: 0x213c5c, Func Offset: 0x7bc
	// Line 249, Address: 0x213cb4, Func Offset: 0x814
	// Line 250, Address: 0x213d04, Func Offset: 0x864
	// Line 252, Address: 0x213d0c, Func Offset: 0x86c
	// Line 253, Address: 0x213d34, Func Offset: 0x894
	// Line 254, Address: 0x213d64, Func Offset: 0x8c4
	// Line 255, Address: 0x213d94, Func Offset: 0x8f4
	// Line 256, Address: 0x213da8, Func Offset: 0x908
	// Line 258, Address: 0x213dc0, Func Offset: 0x920
	// Line 259, Address: 0x213df0, Func Offset: 0x950
	// Line 260, Address: 0x213e04, Func Offset: 0x964
	// Line 262, Address: 0x213e24, Func Offset: 0x984
	// Line 264, Address: 0x213e2c, Func Offset: 0x98c
	// Line 265, Address: 0x213e58, Func Offset: 0x9b8
	// Line 266, Address: 0x213e84, Func Offset: 0x9e4
	// Line 267, Address: 0x213eb4, Func Offset: 0xa14
	// Line 268, Address: 0x213ec8, Func Offset: 0xa28
	// Line 270, Address: 0x213ee4, Func Offset: 0xa44
	// Line 271, Address: 0x213f14, Func Offset: 0xa74
	// Line 272, Address: 0x213f28, Func Offset: 0xa88
	// Line 276, Address: 0x213f40, Func Offset: 0xaa0
	// Line 277, Address: 0x213f70, Func Offset: 0xad0
	// Line 278, Address: 0x213fa4, Func Offset: 0xb04
	// Line 279, Address: 0x213fdc, Func Offset: 0xb3c
	// Line 280, Address: 0x21400c, Func Offset: 0xb6c
	// Line 281, Address: 0x214044, Func Offset: 0xba4
	// Line 282, Address: 0x214070, Func Offset: 0xbd0
	// Line 283, Address: 0x214078, Func Offset: 0xbd8
	// Line 286, Address: 0x214084, Func Offset: 0xbe4
	// Line 289, Address: 0x21408c, Func Offset: 0xbec
	// Line 290, Address: 0x214098, Func Offset: 0xbf8
	// Line 294, Address: 0x2140a0, Func Offset: 0xc00
	// Line 295, Address: 0x21410c, Func Offset: 0xc6c
	// Line 296, Address: 0x21413c, Func Offset: 0xc9c
	// Line 299, Address: 0x21416c, Func Offset: 0xccc
	// Line 300, Address: 0x214194, Func Offset: 0xcf4
	// Line 301, Address: 0x2141bc, Func Offset: 0xd1c
	// Line 302, Address: 0x21421c, Func Offset: 0xd7c
	// Line 303, Address: 0x21426c, Func Offset: 0xdcc
	// Line 305, Address: 0x214274, Func Offset: 0xdd4
	// Line 306, Address: 0x21429c, Func Offset: 0xdfc
	// Line 307, Address: 0x2142c8, Func Offset: 0xe28
	// Line 308, Address: 0x214308, Func Offset: 0xe68
	// Line 309, Address: 0x21433c, Func Offset: 0xe9c
	// Line 310, Address: 0x214380, Func Offset: 0xee0
	// Line 311, Address: 0x2143ac, Func Offset: 0xf0c
	// Line 312, Address: 0x2143fc, Func Offset: 0xf5c
	// Line 314, Address: 0x214404, Func Offset: 0xf64
	// Line 315, Address: 0x21442c, Func Offset: 0xf8c
	// Line 316, Address: 0x214454, Func Offset: 0xfb4
	// Line 317, Address: 0x2144b4, Func Offset: 0x1014
	// Line 318, Address: 0x214504, Func Offset: 0x1064
	// Line 320, Address: 0x21450c, Func Offset: 0x106c
	// Line 321, Address: 0x214534, Func Offset: 0x1094
	// Line 322, Address: 0x214564, Func Offset: 0x10c4
	// Line 323, Address: 0x2145bc, Func Offset: 0x111c
	// Line 324, Address: 0x214608, Func Offset: 0x1168
	// Line 326, Address: 0x214610, Func Offset: 0x1170
	// Line 327, Address: 0x21463c, Func Offset: 0x119c
	// Line 328, Address: 0x21466c, Func Offset: 0x11cc
	// Line 329, Address: 0x2146c8, Func Offset: 0x1228
	// Line 330, Address: 0x214718, Func Offset: 0x1278
	// Line 332, Address: 0x214720, Func Offset: 0x1280
	// Line 333, Address: 0x214750, Func Offset: 0x12b0
	// Line 334, Address: 0x21477c, Func Offset: 0x12dc
	// Line 335, Address: 0x2147dc, Func Offset: 0x133c
	// Line 336, Address: 0x214838, Func Offset: 0x1398
	// Line 338, Address: 0x214840, Func Offset: 0x13a0
	// Line 339, Address: 0x214868, Func Offset: 0x13c8
	// Line 340, Address: 0x214898, Func Offset: 0x13f8
	// Line 341, Address: 0x2148f4, Func Offset: 0x1454
	// Line 342, Address: 0x21494c, Func Offset: 0x14ac
	// Line 344, Address: 0x214954, Func Offset: 0x14b4
	// Line 345, Address: 0x21497c, Func Offset: 0x14dc
	// Line 346, Address: 0x2149a4, Func Offset: 0x1504
	// Line 347, Address: 0x2149ec, Func Offset: 0x154c
	// Line 348, Address: 0x214a20, Func Offset: 0x1580
	// Line 349, Address: 0x214a6c, Func Offset: 0x15cc
	// Line 350, Address: 0x214aa0, Func Offset: 0x1600
	// Line 353, Address: 0x214afc, Func Offset: 0x165c
	// Line 354, Address: 0x214b28, Func Offset: 0x1688
	// Line 355, Address: 0x214b30, Func Offset: 0x1690
	// Line 358, Address: 0x214b38, Func Offset: 0x1698
	// Func End, Address: 0x214b48, Func Offset: 0x16a8
}

// 
// Start address: 0x214b50
void bright_main()
{
	int i;
	// Line 371, Address: 0x214b50, Func Offset: 0
	// Line 373, Address: 0x214b6c, Func Offset: 0x1c
	// Line 374, Address: 0x214b84, Func Offset: 0x34
	// Line 375, Address: 0x214bac, Func Offset: 0x5c
	// Line 377, Address: 0x214bdc, Func Offset: 0x8c
	// Line 378, Address: 0x214c20, Func Offset: 0xd0
	// Line 380, Address: 0x214c60, Func Offset: 0x110
	// Line 382, Address: 0x214c74, Func Offset: 0x124
	// Line 384, Address: 0x214c80, Func Offset: 0x130
	// Line 385, Address: 0x214ca4, Func Offset: 0x154
	// Line 386, Address: 0x214cd8, Func Offset: 0x188
	// Line 387, Address: 0x214cf0, Func Offset: 0x1a0
	// Line 388, Address: 0x214d0c, Func Offset: 0x1bc
	// Line 389, Address: 0x214d50, Func Offset: 0x200
	// Line 390, Address: 0x214dcc, Func Offset: 0x27c
	// Line 391, Address: 0x214e48, Func Offset: 0x2f8
	// Line 392, Address: 0x214e50, Func Offset: 0x300
	// Line 393, Address: 0x214e64, Func Offset: 0x314
	// Line 394, Address: 0x214e74, Func Offset: 0x324
	// Line 395, Address: 0x214e84, Func Offset: 0x334
	// Func End, Address: 0x214ea8, Func Offset: 0x358
}

// 
// Start address: 0x214eb0
void config_main()
{
	// Line 403, Address: 0x214eb0, Func Offset: 0
	// Line 404, Address: 0x214eb8, Func Offset: 0x8
	// Line 405, Address: 0x214ed0, Func Offset: 0x20
	// Line 406, Address: 0x214ef8, Func Offset: 0x48
	// Line 422, Address: 0x214f28, Func Offset: 0x78
	// Func End, Address: 0x214f38, Func Offset: 0x88
}

// 
// Start address: 0x214f40
void position_main()
{
	int fade;
	int rgb;
	int j;
	int i;
	// Line 430, Address: 0x214f40, Func Offset: 0
	// Line 432, Address: 0x214f6c, Func Offset: 0x2c
	// Line 433, Address: 0x214f84, Func Offset: 0x44
	// Line 434, Address: 0x214fac, Func Offset: 0x6c
	// Line 436, Address: 0x214fe0, Func Offset: 0xa0
	// Line 437, Address: 0x21500c, Func Offset: 0xcc
	// Line 438, Address: 0x215038, Func Offset: 0xf8
	// Line 439, Address: 0x215064, Func Offset: 0x124
	// Line 440, Address: 0x215090, Func Offset: 0x150
	// Line 441, Address: 0x2150b8, Func Offset: 0x178
	// Line 442, Address: 0x2150e0, Func Offset: 0x1a0
	// Line 443, Address: 0x215108, Func Offset: 0x1c8
	// Line 444, Address: 0x215130, Func Offset: 0x1f0
	// Line 445, Address: 0x215188, Func Offset: 0x248
	// Line 446, Address: 0x2151c0, Func Offset: 0x280
	// Line 448, Address: 0x2151e4, Func Offset: 0x2a4
	// Line 449, Address: 0x2151fc, Func Offset: 0x2bc
	// Line 450, Address: 0x21522c, Func Offset: 0x2ec
	// Line 451, Address: 0x215234, Func Offset: 0x2f4
	// Line 452, Address: 0x215248, Func Offset: 0x308
	// Line 453, Address: 0x215268, Func Offset: 0x328
	// Line 454, Address: 0x215284, Func Offset: 0x344
	// Line 455, Address: 0x2152ac, Func Offset: 0x36c
	// Line 457, Address: 0x2152c8, Func Offset: 0x388
	// Line 459, Address: 0x2152e0, Func Offset: 0x3a0
	// Line 460, Address: 0x215304, Func Offset: 0x3c4
	// Line 461, Address: 0x215344, Func Offset: 0x404
	// Line 462, Address: 0x21535c, Func Offset: 0x41c
	// Line 463, Address: 0x215378, Func Offset: 0x438
	// Line 464, Address: 0x2153c4, Func Offset: 0x484
	// Line 465, Address: 0x215464, Func Offset: 0x524
	// Line 466, Address: 0x2154f4, Func Offset: 0x5b4
	// Line 467, Address: 0x2154fc, Func Offset: 0x5bc
	// Line 469, Address: 0x21551c, Func Offset: 0x5dc
	// Line 471, Address: 0x215528, Func Offset: 0x5e8
	// Line 472, Address: 0x21554c, Func Offset: 0x60c
	// Line 473, Address: 0x215580, Func Offset: 0x640
	// Line 474, Address: 0x215598, Func Offset: 0x658
	// Line 475, Address: 0x2155b4, Func Offset: 0x674
	// Line 476, Address: 0x215600, Func Offset: 0x6c0
	// Line 477, Address: 0x215678, Func Offset: 0x738
	// Line 478, Address: 0x215738, Func Offset: 0x7f8
	// Line 479, Address: 0x2157e8, Func Offset: 0x8a8
	// Line 480, Address: 0x2157f4, Func Offset: 0x8b4
	// Line 482, Address: 0x21580c, Func Offset: 0x8cc
	// Line 484, Address: 0x215818, Func Offset: 0x8d8
	// Line 485, Address: 0x21583c, Func Offset: 0x8fc
	// Line 486, Address: 0x215870, Func Offset: 0x930
	// Line 487, Address: 0x215890, Func Offset: 0x950
	// Line 488, Address: 0x2158ac, Func Offset: 0x96c
	// Line 489, Address: 0x2158f8, Func Offset: 0x9b8
	// Line 490, Address: 0x215960, Func Offset: 0xa20
	// Line 491, Address: 0x215a0c, Func Offset: 0xacc
	// Line 492, Address: 0x215abc, Func Offset: 0xb7c
	// Line 493, Address: 0x215ac4, Func Offset: 0xb84
	// Line 495, Address: 0x215adc, Func Offset: 0xb9c
	// Line 496, Address: 0x215b00, Func Offset: 0xbc0
	// Line 497, Address: 0x215b34, Func Offset: 0xbf4
	// Line 498, Address: 0x215b4c, Func Offset: 0xc0c
	// Line 499, Address: 0x215b70, Func Offset: 0xc30
	// Line 500, Address: 0x215b94, Func Offset: 0xc54
	// Line 501, Address: 0x215c34, Func Offset: 0xcf4
	// Line 502, Address: 0x215cbc, Func Offset: 0xd7c
	// Line 503, Address: 0x215cc8, Func Offset: 0xd88
	// Line 504, Address: 0x215cf4, Func Offset: 0xdb4
	// Line 505, Address: 0x215d28, Func Offset: 0xde8
	// Line 506, Address: 0x215d40, Func Offset: 0xe00
	// Line 507, Address: 0x215d5c, Func Offset: 0xe1c
	// Line 508, Address: 0x215d7c, Func Offset: 0xe3c
	// Line 509, Address: 0x215e04, Func Offset: 0xec4
	// Line 510, Address: 0x215ea0, Func Offset: 0xf60
	// Line 513, Address: 0x215ea8, Func Offset: 0xf68
	// Line 514, Address: 0x215eb8, Func Offset: 0xf78
	// Line 515, Address: 0x215ecc, Func Offset: 0xf8c
	// Line 516, Address: 0x215edc, Func Offset: 0xf9c
	// Line 517, Address: 0x215eec, Func Offset: 0xfac
	// Func End, Address: 0x215f20, Func Offset: 0xfe0
}

// 
// Start address: 0x215f20
void look_bgm()
{
	int abe;
	int j;
	int i;
	// Line 525, Address: 0x215f20, Func Offset: 0
	// Line 527, Address: 0x215f4c, Func Offset: 0x2c
	// Line 528, Address: 0x215f70, Func Offset: 0x50
	// Line 529, Address: 0x215f74, Func Offset: 0x54
	// Line 530, Address: 0x215f80, Func Offset: 0x60
	// Line 531, Address: 0x215f8c, Func Offset: 0x6c
	// Line 532, Address: 0x215fb0, Func Offset: 0x90
	// Line 533, Address: 0x215fec, Func Offset: 0xcc
	// Line 534, Address: 0x216010, Func Offset: 0xf0
	// Line 535, Address: 0x216040, Func Offset: 0x120
	// Line 536, Address: 0x216060, Func Offset: 0x140
	// Line 537, Address: 0x216090, Func Offset: 0x170
	// Line 538, Address: 0x2160c0, Func Offset: 0x1a0
	// Line 539, Address: 0x216160, Func Offset: 0x240
	// Line 540, Address: 0x2161f8, Func Offset: 0x2d8
	// Line 541, Address: 0x21629c, Func Offset: 0x37c
	// Line 542, Address: 0x216338, Func Offset: 0x418
	// Line 543, Address: 0x2163ec, Func Offset: 0x4cc
	// Line 544, Address: 0x216490, Func Offset: 0x570
	// Line 545, Address: 0x216528, Func Offset: 0x608
	// Line 546, Address: 0x2165cc, Func Offset: 0x6ac
	// Line 547, Address: 0x2165d4, Func Offset: 0x6b4
	// Line 550, Address: 0x2165e4, Func Offset: 0x6c4
	// Line 551, Address: 0x216608, Func Offset: 0x6e8
	// Line 552, Address: 0x21663c, Func Offset: 0x71c
	// Line 553, Address: 0x216658, Func Offset: 0x738
	// Line 554, Address: 0x216688, Func Offset: 0x768
	// Line 555, Address: 0x2166a8, Func Offset: 0x788
	// Line 556, Address: 0x2166c8, Func Offset: 0x7a8
	// Line 557, Address: 0x216760, Func Offset: 0x840
	// Line 558, Address: 0x2167fc, Func Offset: 0x8dc
	// Line 559, Address: 0x2168b0, Func Offset: 0x990
	// Line 560, Address: 0x21695c, Func Offset: 0xa3c
	// Line 561, Address: 0x216964, Func Offset: 0xa44
	// Line 563, Address: 0x216988, Func Offset: 0xa68
	// Line 564, Address: 0x2169a0, Func Offset: 0xa80
	// Line 565, Address: 0x2169c4, Func Offset: 0xaa4
	// Line 566, Address: 0x216a04, Func Offset: 0xae4
	// Line 567, Address: 0x216a3c, Func Offset: 0xb1c
	// Line 568, Address: 0x216a6c, Func Offset: 0xb4c
	// Line 569, Address: 0x216a88, Func Offset: 0xb68
	// Line 570, Address: 0x216aa8, Func Offset: 0xb88
	// Line 571, Address: 0x216b50, Func Offset: 0xc30
	// Line 572, Address: 0x216bfc, Func Offset: 0xcdc
	// Line 573, Address: 0x216ca8, Func Offset: 0xd88
	// Line 574, Address: 0x216d54, Func Offset: 0xe34
	// Line 575, Address: 0x216d5c, Func Offset: 0xe3c
	// Line 576, Address: 0x216d7c, Func Offset: 0xe5c
	// Func End, Address: 0x216db0, Func Offset: 0xe90
}

// 
// Start address: 0x216db0
void look_se()
{
	int abe;
	int j;
	int i;
	// Line 584, Address: 0x216db0, Func Offset: 0
	// Line 586, Address: 0x216ddc, Func Offset: 0x2c
	// Line 587, Address: 0x216e00, Func Offset: 0x50
	// Line 588, Address: 0x216e04, Func Offset: 0x54
	// Line 591, Address: 0x216e10, Func Offset: 0x60
	// Line 592, Address: 0x216e1c, Func Offset: 0x6c
	// Line 593, Address: 0x216e40, Func Offset: 0x90
	// Line 594, Address: 0x216e7c, Func Offset: 0xcc
	// Line 595, Address: 0x216ea0, Func Offset: 0xf0
	// Line 596, Address: 0x216ed0, Func Offset: 0x120
	// Line 597, Address: 0x216ef0, Func Offset: 0x140
	// Line 598, Address: 0x216f20, Func Offset: 0x170
	// Line 599, Address: 0x216f50, Func Offset: 0x1a0
	// Line 600, Address: 0x216ff0, Func Offset: 0x240
	// Line 601, Address: 0x217088, Func Offset: 0x2d8
	// Line 602, Address: 0x21712c, Func Offset: 0x37c
	// Line 603, Address: 0x2171c8, Func Offset: 0x418
	// Line 604, Address: 0x21727c, Func Offset: 0x4cc
	// Line 605, Address: 0x217320, Func Offset: 0x570
	// Line 606, Address: 0x2173b8, Func Offset: 0x608
	// Line 607, Address: 0x21745c, Func Offset: 0x6ac
	// Line 608, Address: 0x217464, Func Offset: 0x6b4
	// Line 609, Address: 0x217474, Func Offset: 0x6c4
	// Line 610, Address: 0x217498, Func Offset: 0x6e8
	// Line 611, Address: 0x2174cc, Func Offset: 0x71c
	// Line 612, Address: 0x2174e8, Func Offset: 0x738
	// Line 613, Address: 0x217518, Func Offset: 0x768
	// Line 614, Address: 0x217538, Func Offset: 0x788
	// Line 615, Address: 0x217558, Func Offset: 0x7a8
	// Line 616, Address: 0x2175f0, Func Offset: 0x840
	// Line 617, Address: 0x21768c, Func Offset: 0x8dc
	// Line 618, Address: 0x217740, Func Offset: 0x990
	// Line 619, Address: 0x2177ec, Func Offset: 0xa3c
	// Line 620, Address: 0x2177f4, Func Offset: 0xa44
	// Line 622, Address: 0x217818, Func Offset: 0xa68
	// Line 623, Address: 0x217830, Func Offset: 0xa80
	// Line 624, Address: 0x217854, Func Offset: 0xaa4
	// Line 625, Address: 0x217894, Func Offset: 0xae4
	// Line 626, Address: 0x2178cc, Func Offset: 0xb1c
	// Line 627, Address: 0x2178fc, Func Offset: 0xb4c
	// Line 628, Address: 0x217918, Func Offset: 0xb68
	// Line 629, Address: 0x217938, Func Offset: 0xb88
	// Line 630, Address: 0x2179e0, Func Offset: 0xc30
	// Line 631, Address: 0x217a8c, Func Offset: 0xcdc
	// Line 632, Address: 0x217b38, Func Offset: 0xd88
	// Line 633, Address: 0x217be4, Func Offset: 0xe34
	// Line 634, Address: 0x217bec, Func Offset: 0xe3c
	// Line 635, Address: 0x217c0c, Func Offset: 0xe5c
	// Func End, Address: 0x217c40, Func Offset: 0xe90
}

// 
// Start address: 0x217c40
int option_near(float f0, float f1, float f2, float f3)
{
	// Line 652, Address: 0x217c40, Func Offset: 0
	// Line 653, Address: 0x217c58, Func Offset: 0x18
	// Line 654, Address: 0x217c70, Func Offset: 0x30
	// Line 655, Address: 0x217c90, Func Offset: 0x50
	// Line 656, Address: 0x217ca0, Func Offset: 0x60
	// Line 657, Address: 0x217cc0, Func Offset: 0x80
	// Line 659, Address: 0x217cc8, Func Offset: 0x88
	// Line 660, Address: 0x217ce8, Func Offset: 0xa8
	// Line 661, Address: 0x217cf8, Func Offset: 0xb8
	// Line 663, Address: 0x217d18, Func Offset: 0xd8
	// Line 664, Address: 0x217d24, Func Offset: 0xe4
	// Func End, Address: 0x217d34, Func Offset: 0xf4
}

// 
// Start address: 0x217d40
int fade_in()
{
	// Line 672, Address: 0x217d40, Func Offset: 0
	// Line 673, Address: 0x217d48, Func Offset: 0x8
	// Line 674, Address: 0x217d60, Func Offset: 0x20
	// Line 675, Address: 0x217d74, Func Offset: 0x34
	// Line 676, Address: 0x217d84, Func Offset: 0x44
	// Line 677, Address: 0x217d8c, Func Offset: 0x4c
	// Line 679, Address: 0x217d98, Func Offset: 0x58
	// Line 680, Address: 0x217d9c, Func Offset: 0x5c
	// Func End, Address: 0x217dac, Func Offset: 0x6c
}

// 
// Start address: 0x217db0
int fade_out(int mode)
{
	// Line 682, Address: 0x217db0, Func Offset: 0
	// Line 683, Address: 0x217dbc, Func Offset: 0xc
	// Line 684, Address: 0x217dc4, Func Offset: 0x14
	// Line 685, Address: 0x217dd8, Func Offset: 0x28
	// Line 686, Address: 0x217dec, Func Offset: 0x3c
	// Line 687, Address: 0x217df8, Func Offset: 0x48
	// Line 688, Address: 0x217e00, Func Offset: 0x50
	// Line 689, Address: 0x217e08, Func Offset: 0x58
	// Line 691, Address: 0x217e14, Func Offset: 0x64
	// Line 692, Address: 0x217e20, Func Offset: 0x70
	// Func End, Address: 0x217e30, Func Offset: 0x80
}

// 
// Start address: 0x217e30
void look_fade()
{
	int j;
	int i;
	// Line 694, Address: 0x217e30, Func Offset: 0
	// Line 696, Address: 0x217e50, Func Offset: 0x20
	// Line 697, Address: 0x217e68, Func Offset: 0x38
	// Line 698, Address: 0x217e8c, Func Offset: 0x5c
	// Line 699, Address: 0x217ec0, Func Offset: 0x90
	// Line 700, Address: 0x217ed8, Func Offset: 0xa8
	// Line 701, Address: 0x217ef4, Func Offset: 0xc4
	// Line 702, Address: 0x217f20, Func Offset: 0xf0
	// Line 703, Address: 0x217f98, Func Offset: 0x168
	// Line 704, Address: 0x218010, Func Offset: 0x1e0
	// Line 705, Address: 0x218018, Func Offset: 0x1e8
	// Line 706, Address: 0x21803c, Func Offset: 0x20c
	// Func End, Address: 0x218064, Func Offset: 0x234
}

// 
// Start address: 0x218070
void look_board()
{
	// Line 714, Address: 0x218070, Func Offset: 0
	// Line 715, Address: 0x21809c, Func Offset: 0x2c
	// Line 716, Address: 0x2180c0, Func Offset: 0x50
	// Line 717, Address: 0x218100, Func Offset: 0x90
	// Line 718, Address: 0x218134, Func Offset: 0xc4
	// Line 719, Address: 0x218150, Func Offset: 0xe0
	// Line 720, Address: 0x218170, Func Offset: 0x100
	// Line 721, Address: 0x218204, Func Offset: 0x194
	// Line 722, Address: 0x218298, Func Offset: 0x228
	// Line 723, Address: 0x218324, Func Offset: 0x2b4
	// Line 724, Address: 0x2183c0, Func Offset: 0x350
	// Line 725, Address: 0x218464, Func Offset: 0x3f4
	// Line 726, Address: 0x2184fc, Func Offset: 0x48c
	// Line 728, Address: 0x218508, Func Offset: 0x498
	// Line 729, Address: 0x21852c, Func Offset: 0x4bc
	// Line 730, Address: 0x218560, Func Offset: 0x4f0
	// Line 731, Address: 0x2185c8, Func Offset: 0x558
	// Line 732, Address: 0x2185ec, Func Offset: 0x57c
	// Line 733, Address: 0x218614, Func Offset: 0x5a4
	// Line 734, Address: 0x2186a4, Func Offset: 0x634
	// Line 735, Address: 0x21872c, Func Offset: 0x6bc
	// Line 736, Address: 0x2187c0, Func Offset: 0x750
	// Line 737, Address: 0x218864, Func Offset: 0x7f4
	// Line 738, Address: 0x218908, Func Offset: 0x898
	// Line 739, Address: 0x218998, Func Offset: 0x928
	// Line 740, Address: 0x218a28, Func Offset: 0x9b8
	// Line 743, Address: 0x218a30, Func Offset: 0x9c0
	// Line 744, Address: 0x218a64, Func Offset: 0x9f4
	// Line 745, Address: 0x218aa8, Func Offset: 0xa38
	// Line 746, Address: 0x218ac8, Func Offset: 0xa58
	// Line 747, Address: 0x218ae4, Func Offset: 0xa74
	// Line 748, Address: 0x218b0c, Func Offset: 0xa9c
	// Line 749, Address: 0x218ba4, Func Offset: 0xb34
	// Line 750, Address: 0x218c3c, Func Offset: 0xbcc
	// Line 751, Address: 0x218ce4, Func Offset: 0xc74
	// Line 752, Address: 0x218d98, Func Offset: 0xd28
	// Line 753, Address: 0x218e38, Func Offset: 0xdc8
	// Line 754, Address: 0x218edc, Func Offset: 0xe6c
	// Line 756, Address: 0x218ee4, Func Offset: 0xe74
	// Line 757, Address: 0x218f24, Func Offset: 0xeb4
	// Line 758, Address: 0x218f64, Func Offset: 0xef4
	// Line 759, Address: 0x218fbc, Func Offset: 0xf4c
	// Line 760, Address: 0x218fd8, Func Offset: 0xf68
	// Line 761, Address: 0x219008, Func Offset: 0xf98
	// Line 762, Address: 0x2190a4, Func Offset: 0x1034
	// Line 763, Address: 0x21914c, Func Offset: 0x10dc
	// Line 764, Address: 0x2191f0, Func Offset: 0x1180
	// Line 765, Address: 0x21928c, Func Offset: 0x121c
	// Line 766, Address: 0x21931c, Func Offset: 0x12ac
	// Line 767, Address: 0x2193bc, Func Offset: 0x134c
	// Line 768, Address: 0x219458, Func Offset: 0x13e8
	// Line 771, Address: 0x219460, Func Offset: 0x13f0
	// Line 772, Address: 0x2194a4, Func Offset: 0x1434
	// Line 773, Address: 0x2194ec, Func Offset: 0x147c
	// Line 774, Address: 0x219518, Func Offset: 0x14a8
	// Line 775, Address: 0x219534, Func Offset: 0x14c4
	// Line 776, Address: 0x21955c, Func Offset: 0x14ec
	// Line 777, Address: 0x219608, Func Offset: 0x1598
	// Line 778, Address: 0x2196bc, Func Offset: 0x164c
	// Line 779, Address: 0x219760, Func Offset: 0x16f0
	// Line 780, Address: 0x219808, Func Offset: 0x1798
	// Line 781, Address: 0x2198a8, Func Offset: 0x1838
	// Line 782, Address: 0x219944, Func Offset: 0x18d4
	// Line 783, Address: 0x2199f8, Func Offset: 0x1988
	// Line 784, Address: 0x219aa8, Func Offset: 0x1a38
	// Line 785, Address: 0x219b50, Func Offset: 0x1ae0
	// Line 786, Address: 0x219b58, Func Offset: 0x1ae8
	// Func End, Address: 0x219b8c, Func Offset: 0x1b1c
}

// 
// Start address: 0x219b90
void look_cur()
{
	int i;
	// Line 794, Address: 0x219b90, Func Offset: 0
	// Line 796, Address: 0x219bb0, Func Offset: 0x20
	// Line 797, Address: 0x219bdc, Func Offset: 0x4c
	// Line 798, Address: 0x219c08, Func Offset: 0x78
	// Line 799, Address: 0x219c18, Func Offset: 0x88
	// Line 800, Address: 0x219c34, Func Offset: 0xa4
	// Line 801, Address: 0x219c50, Func Offset: 0xc0
	// Line 802, Address: 0x219c98, Func Offset: 0x108
	// Line 804, Address: 0x219ca0, Func Offset: 0x110
	// Line 805, Address: 0x219cbc, Func Offset: 0x12c
	// Line 806, Address: 0x219cd8, Func Offset: 0x148
	// Line 808, Address: 0x219d20, Func Offset: 0x190
	// Line 810, Address: 0x219d7c, Func Offset: 0x1ec
	// Line 812, Address: 0x219d88, Func Offset: 0x1f8
	// Line 813, Address: 0x219dac, Func Offset: 0x21c
	// Line 814, Address: 0x219de0, Func Offset: 0x250
	// Line 815, Address: 0x219df8, Func Offset: 0x268
	// Line 816, Address: 0x219e14, Func Offset: 0x284
	// Line 817, Address: 0x219e40, Func Offset: 0x2b0
	// Line 818, Address: 0x219ec0, Func Offset: 0x330
	// Line 819, Address: 0x219f44, Func Offset: 0x3b4
	// Line 820, Address: 0x219f4c, Func Offset: 0x3bc
	// Line 821, Address: 0x219f70, Func Offset: 0x3e0
	// Line 822, Address: 0x219fa4, Func Offset: 0x414
	// Line 823, Address: 0x219fbc, Func Offset: 0x42c
	// Line 824, Address: 0x219fd8, Func Offset: 0x448
	// Line 825, Address: 0x21a004, Func Offset: 0x474
	// Line 826, Address: 0x21a084, Func Offset: 0x4f4
	// Line 827, Address: 0x21a108, Func Offset: 0x578
	// Line 828, Address: 0x21a110, Func Offset: 0x580
	// Line 829, Address: 0x21a124, Func Offset: 0x594
	// Func End, Address: 0x21a14c, Func Offset: 0x5bc
}

// 
// Start address: 0x21a150
void allow_u(int x, int y)
{
	int rgb;
	// Line 836, Address: 0x21a150, Func Offset: 0
	// Line 838, Address: 0x21a180, Func Offset: 0x30
	// Line 839, Address: 0x21a1d4, Func Offset: 0x84
	// Line 840, Address: 0x21a200, Func Offset: 0xb0
	// Line 841, Address: 0x21a218, Func Offset: 0xc8
	// Line 842, Address: 0x21a23c, Func Offset: 0xec
	// Line 843, Address: 0x21a270, Func Offset: 0x120
	// Line 844, Address: 0x21a28c, Func Offset: 0x13c
	// Line 845, Address: 0x21a2a8, Func Offset: 0x158
	// Line 846, Address: 0x21a2dc, Func Offset: 0x18c
	// Line 847, Address: 0x21a350, Func Offset: 0x200
	// Line 848, Address: 0x21a3c8, Func Offset: 0x278
	// Line 849, Address: 0x21a440, Func Offset: 0x2f0
	// Line 850, Address: 0x21a448, Func Offset: 0x2f8
	// Line 852, Address: 0x21a450, Func Offset: 0x300
	// Line 853, Address: 0x21a474, Func Offset: 0x324
	// Line 854, Address: 0x21a4a8, Func Offset: 0x358
	// Line 855, Address: 0x21a4c4, Func Offset: 0x374
	// Line 856, Address: 0x21a4e0, Func Offset: 0x390
	// Line 857, Address: 0x21a514, Func Offset: 0x3c4
	// Line 858, Address: 0x21a584, Func Offset: 0x434
	// Line 859, Address: 0x21a5fc, Func Offset: 0x4ac
	// Line 860, Address: 0x21a674, Func Offset: 0x524
	// Line 862, Address: 0x21a67c, Func Offset: 0x52c
	// Func End, Address: 0x21a6ac, Func Offset: 0x55c
}

// 
// Start address: 0x21a6b0
void allow_d(int x, int y)
{
	int rgb;
	// Line 864, Address: 0x21a6b0, Func Offset: 0
	// Line 866, Address: 0x21a6e0, Func Offset: 0x30
	// Line 867, Address: 0x21a734, Func Offset: 0x84
	// Line 868, Address: 0x21a760, Func Offset: 0xb0
	// Line 869, Address: 0x21a778, Func Offset: 0xc8
	// Line 870, Address: 0x21a79c, Func Offset: 0xec
	// Line 871, Address: 0x21a7d0, Func Offset: 0x120
	// Line 872, Address: 0x21a7ec, Func Offset: 0x13c
	// Line 873, Address: 0x21a808, Func Offset: 0x158
	// Line 874, Address: 0x21a83c, Func Offset: 0x18c
	// Line 875, Address: 0x21a8b0, Func Offset: 0x200
	// Line 876, Address: 0x21a928, Func Offset: 0x278
	// Line 877, Address: 0x21a9a0, Func Offset: 0x2f0
	// Line 878, Address: 0x21a9a8, Func Offset: 0x2f8
	// Line 880, Address: 0x21a9b0, Func Offset: 0x300
	// Line 881, Address: 0x21a9d4, Func Offset: 0x324
	// Line 882, Address: 0x21aa08, Func Offset: 0x358
	// Line 883, Address: 0x21aa24, Func Offset: 0x374
	// Line 884, Address: 0x21aa40, Func Offset: 0x390
	// Line 885, Address: 0x21aa74, Func Offset: 0x3c4
	// Line 886, Address: 0x21aae4, Func Offset: 0x434
	// Line 887, Address: 0x21ab5c, Func Offset: 0x4ac
	// Line 888, Address: 0x21abd4, Func Offset: 0x524
	// Line 890, Address: 0x21abdc, Func Offset: 0x52c
	// Func End, Address: 0x21ac0c, Func Offset: 0x55c
}

// 
// Start address: 0x21ac10
void allow_l(int x, int y)
{
	int rgb;
	// Line 892, Address: 0x21ac10, Func Offset: 0
	// Line 894, Address: 0x21ac40, Func Offset: 0x30
	// Line 895, Address: 0x21ac94, Func Offset: 0x84
	// Line 896, Address: 0x21acc0, Func Offset: 0xb0
	// Line 897, Address: 0x21acd8, Func Offset: 0xc8
	// Line 898, Address: 0x21acfc, Func Offset: 0xec
	// Line 899, Address: 0x21ad30, Func Offset: 0x120
	// Line 900, Address: 0x21ad4c, Func Offset: 0x13c
	// Line 901, Address: 0x21ad68, Func Offset: 0x158
	// Line 902, Address: 0x21ad9c, Func Offset: 0x18c
	// Line 903, Address: 0x21ae10, Func Offset: 0x200
	// Line 904, Address: 0x21ae88, Func Offset: 0x278
	// Line 905, Address: 0x21af00, Func Offset: 0x2f0
	// Line 906, Address: 0x21af08, Func Offset: 0x2f8
	// Line 908, Address: 0x21af10, Func Offset: 0x300
	// Line 909, Address: 0x21af34, Func Offset: 0x324
	// Line 910, Address: 0x21af68, Func Offset: 0x358
	// Line 911, Address: 0x21af84, Func Offset: 0x374
	// Line 912, Address: 0x21afa0, Func Offset: 0x390
	// Line 913, Address: 0x21afd4, Func Offset: 0x3c4
	// Line 914, Address: 0x21b044, Func Offset: 0x434
	// Line 915, Address: 0x21b0bc, Func Offset: 0x4ac
	// Line 916, Address: 0x21b134, Func Offset: 0x524
	// Line 918, Address: 0x21b13c, Func Offset: 0x52c
	// Func End, Address: 0x21b16c, Func Offset: 0x55c
}

// 
// Start address: 0x21b170
void allow_r(int x, int y)
{
	int rgb;
	// Line 920, Address: 0x21b170, Func Offset: 0
	// Line 922, Address: 0x21b1a0, Func Offset: 0x30
	// Line 923, Address: 0x21b1f4, Func Offset: 0x84
	// Line 924, Address: 0x21b220, Func Offset: 0xb0
	// Line 925, Address: 0x21b238, Func Offset: 0xc8
	// Line 926, Address: 0x21b25c, Func Offset: 0xec
	// Line 927, Address: 0x21b290, Func Offset: 0x120
	// Line 928, Address: 0x21b2ac, Func Offset: 0x13c
	// Line 929, Address: 0x21b2c8, Func Offset: 0x158
	// Line 930, Address: 0x21b2fc, Func Offset: 0x18c
	// Line 931, Address: 0x21b370, Func Offset: 0x200
	// Line 932, Address: 0x21b3e8, Func Offset: 0x278
	// Line 933, Address: 0x21b460, Func Offset: 0x2f0
	// Line 934, Address: 0x21b468, Func Offset: 0x2f8
	// Line 936, Address: 0x21b470, Func Offset: 0x300
	// Line 937, Address: 0x21b494, Func Offset: 0x324
	// Line 938, Address: 0x21b4c8, Func Offset: 0x358
	// Line 939, Address: 0x21b4e4, Func Offset: 0x374
	// Line 940, Address: 0x21b500, Func Offset: 0x390
	// Line 941, Address: 0x21b534, Func Offset: 0x3c4
	// Line 942, Address: 0x21b5a4, Func Offset: 0x434
	// Line 943, Address: 0x21b61c, Func Offset: 0x4ac
	// Line 944, Address: 0x21b694, Func Offset: 0x524
	// Line 946, Address: 0x21b69c, Func Offset: 0x52c
	// Func End, Address: 0x21b6cc, Func Offset: 0x55c
}

// 
// Start address: 0x21b6d0
void option_font()
{
	float f;
	char buf2[4];
	char buf[4];
	// Line 953, Address: 0x21b6d0, Func Offset: 0
	// Line 956, Address: 0x21b6e8, Func Offset: 0x18
	// Line 957, Address: 0x21b780, Func Offset: 0xb0
	// Line 959, Address: 0x21b83c, Func Offset: 0x16c
	// Line 961, Address: 0x21b854, Func Offset: 0x184
	// Line 963, Address: 0x21b864, Func Offset: 0x194
	// Line 964, Address: 0x21b890, Func Offset: 0x1c0
	// Line 965, Address: 0x21b934, Func Offset: 0x264
	// Line 966, Address: 0x21b960, Func Offset: 0x290
	// Line 967, Address: 0x21b988, Func Offset: 0x2b8
	// Line 968, Address: 0x21b9ac, Func Offset: 0x2dc
	// Line 969, Address: 0x21b9d8, Func Offset: 0x308
	// Line 970, Address: 0x21ba00, Func Offset: 0x330
	// Line 971, Address: 0x21ba28, Func Offset: 0x358
	// Line 972, Address: 0x21ba50, Func Offset: 0x380
	// Line 973, Address: 0x21ba7c, Func Offset: 0x3ac
	// Line 974, Address: 0x21ba9c, Func Offset: 0x3cc
	// Line 975, Address: 0x21bac0, Func Offset: 0x3f0
	// Line 976, Address: 0x21bae4, Func Offset: 0x414
	// Line 977, Address: 0x21bb8c, Func Offset: 0x4bc
	// Line 978, Address: 0x21bbc4, Func Offset: 0x4f4
	// Line 979, Address: 0x21bc00, Func Offset: 0x530
	// Line 980, Address: 0x21bc3c, Func Offset: 0x56c
	// Line 981, Address: 0x21bc7c, Func Offset: 0x5ac
	// Line 982, Address: 0x21bcb4, Func Offset: 0x5e4
	// Line 983, Address: 0x21bcf0, Func Offset: 0x620
	// Line 984, Address: 0x21bd2c, Func Offset: 0x65c
	// Line 985, Address: 0x21bd68, Func Offset: 0x698
	// Line 986, Address: 0x21bda8, Func Offset: 0x6d8
	// Line 987, Address: 0x21bde4, Func Offset: 0x714
	// Line 990, Address: 0x21be24, Func Offset: 0x754
	// Line 991, Address: 0x21bed8, Func Offset: 0x808
	// Line 992, Address: 0x21bf24, Func Offset: 0x854
	// Line 993, Address: 0x21bf68, Func Offset: 0x898
	// Line 994, Address: 0x21bfb4, Func Offset: 0x8e4
	// Line 995, Address: 0x21c000, Func Offset: 0x930
	// Line 996, Address: 0x21c04c, Func Offset: 0x97c
	// Line 997, Address: 0x21c090, Func Offset: 0x9c0
	// Line 998, Address: 0x21c0d4, Func Offset: 0xa04
	// Line 999, Address: 0x21c104, Func Offset: 0xa34
	// Line 1000, Address: 0x21c14c, Func Offset: 0xa7c
	// Line 1001, Address: 0x21c198, Func Offset: 0xac8
	// Line 1002, Address: 0x21c1e4, Func Offset: 0xb14
	// Line 1003, Address: 0x21c230, Func Offset: 0xb60
	// Line 1004, Address: 0x21c27c, Func Offset: 0xbac
	// Line 1005, Address: 0x21c2c0, Func Offset: 0xbf0
	// Line 1006, Address: 0x21c304, Func Offset: 0xc34
	// Line 1007, Address: 0x21c328, Func Offset: 0xc58
	// Line 1008, Address: 0x21c368, Func Offset: 0xc98
	// Line 1010, Address: 0x21c394, Func Offset: 0xcc4
	// Line 1011, Address: 0x21c430, Func Offset: 0xd60
	// Line 1012, Address: 0x21c444, Func Offset: 0xd74
	// Line 1013, Address: 0x21c48c, Func Offset: 0xdbc
	// Line 1015, Address: 0x21c4d0, Func Offset: 0xe00
	// Line 1016, Address: 0x21c4e4, Func Offset: 0xe14
	// Line 1017, Address: 0x21c528, Func Offset: 0xe58
	// Line 1018, Address: 0x21c574, Func Offset: 0xea4
	// Line 1019, Address: 0x21c5c4, Func Offset: 0xef4
	// Line 1021, Address: 0x21c600, Func Offset: 0xf30
	// Line 1022, Address: 0x21c614, Func Offset: 0xf44
	// Line 1023, Address: 0x21c654, Func Offset: 0xf84
	// Line 1025, Address: 0x21c67c, Func Offset: 0xfac
	// Line 1026, Address: 0x21c690, Func Offset: 0xfc0
	// Line 1027, Address: 0x21c6d4, Func Offset: 0x1004
	// Line 1028, Address: 0x21c71c, Func Offset: 0x104c
	// Line 1029, Address: 0x21c75c, Func Offset: 0x108c
	// Line 1030, Address: 0x21c7ac, Func Offset: 0x10dc
	// Line 1031, Address: 0x21c7f4, Func Offset: 0x1124
	// Line 1033, Address: 0x21c838, Func Offset: 0x1168
	// Line 1034, Address: 0x21c84c, Func Offset: 0x117c
	// Line 1035, Address: 0x21c88c, Func Offset: 0x11bc
	// Line 1037, Address: 0x21c8b4, Func Offset: 0x11e4
	// Line 1038, Address: 0x21c8c8, Func Offset: 0x11f8
	// Line 1039, Address: 0x21c90c, Func Offset: 0x123c
	// Line 1043, Address: 0x21c93c, Func Offset: 0x126c
	// Line 1044, Address: 0x21c978, Func Offset: 0x12a8
	// Line 1045, Address: 0x21c9b4, Func Offset: 0x12e4
	// Line 1046, Address: 0x21c9f8, Func Offset: 0x1328
	// Line 1047, Address: 0x21ca3c, Func Offset: 0x136c
	// Line 1048, Address: 0x21ca7c, Func Offset: 0x13ac
	// Line 1049, Address: 0x21cac0, Func Offset: 0x13f0
	// Line 1050, Address: 0x21cb00, Func Offset: 0x1430
	// Line 1051, Address: 0x21cb34, Func Offset: 0x1464
	// Line 1052, Address: 0x21cb74, Func Offset: 0x14a4
	// Line 1053, Address: 0x21cbb0, Func Offset: 0x14e0
	// Line 1054, Address: 0x21cbec, Func Offset: 0x151c
	// Line 1075, Address: 0x21cbf4, Func Offset: 0x1524
	// Line 1077, Address: 0x21cc20, Func Offset: 0x1550
	// Line 1078, Address: 0x21ccdc, Func Offset: 0x160c
	// Line 1079, Address: 0x21cd0c, Func Offset: 0x163c
	// Line 1080, Address: 0x21cd38, Func Offset: 0x1668
	// Line 1081, Address: 0x21cd68, Func Offset: 0x1698
	// Line 1082, Address: 0x21cd94, Func Offset: 0x16c4
	// Line 1083, Address: 0x21cdbc, Func Offset: 0x16ec
	// Line 1084, Address: 0x21cde4, Func Offset: 0x1714
	// Line 1085, Address: 0x21ce14, Func Offset: 0x1744
	// Line 1086, Address: 0x21ce34, Func Offset: 0x1764
	// Line 1087, Address: 0x21cef4, Func Offset: 0x1824
	// Line 1088, Address: 0x21cf2c, Func Offset: 0x185c
	// Line 1089, Address: 0x21cf6c, Func Offset: 0x189c
	// Line 1090, Address: 0x21cfb0, Func Offset: 0x18e0
	// Line 1091, Address: 0x21cff0, Func Offset: 0x1920
	// Line 1092, Address: 0x21d034, Func Offset: 0x1964
	// Line 1093, Address: 0x21d078, Func Offset: 0x19a8
	// Line 1094, Address: 0x21d0b0, Func Offset: 0x19e0
	// Line 1097, Address: 0x21d0f0, Func Offset: 0x1a20
	// Line 1098, Address: 0x21d1b8, Func Offset: 0x1ae8
	// Line 1099, Address: 0x21d1fc, Func Offset: 0x1b2c
	// Line 1100, Address: 0x21d224, Func Offset: 0x1b54
	// Line 1101, Address: 0x21d264, Func Offset: 0x1b94
	// Line 1102, Address: 0x21d2b4, Func Offset: 0x1be4
	// Line 1103, Address: 0x21d300, Func Offset: 0x1c30
	// Line 1104, Address: 0x21d348, Func Offset: 0x1c78
	// Line 1105, Address: 0x21d38c, Func Offset: 0x1cbc
	// Line 1106, Address: 0x21d3b4, Func Offset: 0x1ce4
	// Line 1107, Address: 0x21d3f4, Func Offset: 0x1d24
	// Line 1108, Address: 0x21d420, Func Offset: 0x1d50
	// Line 1109, Address: 0x21d460, Func Offset: 0x1d90
	// Line 1110, Address: 0x21d488, Func Offset: 0x1db8
	// Line 1111, Address: 0x21d4c8, Func Offset: 0x1df8
	// Line 1112, Address: 0x21d4f8, Func Offset: 0x1e28
	// Line 1113, Address: 0x21d540, Func Offset: 0x1e70
	// Line 1114, Address: 0x21d570, Func Offset: 0x1ea0
	// Line 1115, Address: 0x21d5a0, Func Offset: 0x1ed0
	// Line 1116, Address: 0x21d5c8, Func Offset: 0x1ef8
	// Line 1118, Address: 0x21d5f8, Func Offset: 0x1f28
	// Line 1119, Address: 0x21d6b4, Func Offset: 0x1fe4
	// Line 1120, Address: 0x21d6c4, Func Offset: 0x1ff4
	// Line 1121, Address: 0x21d708, Func Offset: 0x2038
	// Line 1123, Address: 0x21d738, Func Offset: 0x2068
	// Line 1124, Address: 0x21d74c, Func Offset: 0x207c
	// Line 1125, Address: 0x21d790, Func Offset: 0x20c0
	// Line 1126, Address: 0x21d7d4, Func Offset: 0x2104
	// Line 1127, Address: 0x21d820, Func Offset: 0x2150
	// Line 1129, Address: 0x21d868, Func Offset: 0x2198
	// Line 1130, Address: 0x21d87c, Func Offset: 0x21ac
	// Line 1131, Address: 0x21d8c4, Func Offset: 0x21f4
	// Line 1133, Address: 0x21d8f4, Func Offset: 0x2224
	// Line 1134, Address: 0x21d908, Func Offset: 0x2238
	// Line 1135, Address: 0x21d948, Func Offset: 0x2278
	// Line 1137, Address: 0x21d970, Func Offset: 0x22a0
	// Line 1138, Address: 0x21d984, Func Offset: 0x22b4
	// Line 1139, Address: 0x21d9cc, Func Offset: 0x22fc
	// Line 1141, Address: 0x21d9f8, Func Offset: 0x2328
	// Line 1142, Address: 0x21da0c, Func Offset: 0x233c
	// Line 1143, Address: 0x21da54, Func Offset: 0x2384
	// Line 1145, Address: 0x21da80, Func Offset: 0x23b0
	// Line 1146, Address: 0x21da94, Func Offset: 0x23c4
	// Line 1147, Address: 0x21dad8, Func Offset: 0x2408
	// Line 1149, Address: 0x21db00, Func Offset: 0x2430
	// Line 1150, Address: 0x21db14, Func Offset: 0x2444
	// Line 1151, Address: 0x21db44, Func Offset: 0x2474
	// Line 1152, Address: 0x21db6c, Func Offset: 0x249c
	// Line 1155, Address: 0x21db98, Func Offset: 0x24c8
	// Line 1156, Address: 0x21dbd4, Func Offset: 0x2504
	// Line 1157, Address: 0x21dc14, Func Offset: 0x2544
	// Line 1158, Address: 0x21dc58, Func Offset: 0x2588
	// Line 1159, Address: 0x21dc8c, Func Offset: 0x25bc
	// Line 1160, Address: 0x21dcc8, Func Offset: 0x25f8
	// Line 1161, Address: 0x21dd08, Func Offset: 0x2638
	// Line 1162, Address: 0x21dd4c, Func Offset: 0x267c
	// Line 1164, Address: 0x21dd88, Func Offset: 0x26b8
	// Line 1165, Address: 0x21dd90, Func Offset: 0x26c0
	// Line 1167, Address: 0x21dda8, Func Offset: 0x26d8
	// Line 1168, Address: 0x21ddd8, Func Offset: 0x2708
	// Line 1169, Address: 0x21de08, Func Offset: 0x2738
	// Line 1170, Address: 0x21de2c, Func Offset: 0x275c
	// Line 1171, Address: 0x21de50, Func Offset: 0x2780
	// Line 1172, Address: 0x21de58, Func Offset: 0x2788
	// Line 1174, Address: 0x21de70, Func Offset: 0x27a0
	// Line 1175, Address: 0x21dec4, Func Offset: 0x27f4
	// Line 1176, Address: 0x21df18, Func Offset: 0x2848
	// Line 1177, Address: 0x21df40, Func Offset: 0x2870
	// Line 1178, Address: 0x21df6c, Func Offset: 0x289c
	// Line 1181, Address: 0x21df98, Func Offset: 0x28c8
	// Func End, Address: 0x21dfb8, Func Offset: 0x28e8
}

// 
// Start address: 0x21dfc0
void look_scr()
{
	int j;
	int i;
	// Line 1186, Address: 0x21dfc0, Func Offset: 0
	// Line 1188, Address: 0x21dfdc, Func Offset: 0x1c
	// Line 1190, Address: 0x21dff4, Func Offset: 0x34
	// Line 1191, Address: 0x21e018, Func Offset: 0x58
	// Line 1192, Address: 0x21e04c, Func Offset: 0x8c
	// Line 1193, Address: 0x21e064, Func Offset: 0xa4
	// Line 1194, Address: 0x21e080, Func Offset: 0xc0
	// Line 1195, Address: 0x21e0a0, Func Offset: 0xe0
	// Line 1196, Address: 0x21e118, Func Offset: 0x158
	// Line 1197, Address: 0x21e190, Func Offset: 0x1d0
	// Line 1198, Address: 0x21e198, Func Offset: 0x1d8
	// Line 1199, Address: 0x21e1bc, Func Offset: 0x1fc
	// Func End, Address: 0x21e1e0, Func Offset: 0x220
}

// 
// Start address: 0x21e1e0
int zs(int hoge)
{
	// Line 1203, Address: 0x21e1e0, Func Offset: 0
	// Line 1204, Address: 0x21e1e8, Func Offset: 0x8
	// Line 1205, Address: 0x21e1f4, Func Offset: 0x14
	// Line 1206, Address: 0x21e200, Func Offset: 0x20
	// Line 1207, Address: 0x21e204, Func Offset: 0x24
	// Func End, Address: 0x21e210, Func Offset: 0x30
}

