typedef struct SPACK_OT_DATA;
typedef struct Playing_Info;
typedef struct fsMgpFile;
typedef union fsFile;
typedef struct fsMgcFile;
typedef struct shAttackInfo;
typedef struct _anon0;
typedef struct SPACK_ENV_DATA;
typedef union _anon1;
typedef union fsFileIndex;
typedef struct SPACK_STATIC_DATA;
typedef struct _anon2;
typedef struct _SH2_SYS;
typedef struct Pad_KeyConfig;
typedef struct fsCdFile;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct SPACK_DATA;


typedef unsigned short type_0[15];
typedef unsigned char type_1[20];
typedef unsigned short type_2[0];
typedef unsigned int type_3[8];
typedef float type_4[7];
typedef unsigned int type_5[7];
typedef shAttackInfo type_6[66];
typedef unsigned char type_7[14];
typedef char type_8[256];
typedef int type_9[6];
typedef unsigned char type_10[69];
typedef unsigned short type_11[11];
typedef fsFileIndex type_12[1];
typedef unsigned char type_13[14];
typedef unsigned char type_14[97];

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

struct Playing_Info
{
	unsigned char stage;
	unsigned char enemy_off;
	unsigned char voice_off;
	unsigned char memo_select;
	unsigned char clear_end_kind;
	unsigned char clear_end_number;
	unsigned char rank;
	unsigned char game_stage;
	unsigned char hidden_item_get;
	char spray_pow;
	unsigned short savecount;
	unsigned short clearcount;
	unsigned short item_get;
	unsigned short kill_by_shot;
	unsigned short kill_by_fight;
	float time;
	float walk_distance;
	float run_distance;
	float boat_clear_time;
	float boat_max_speed;
	float jms_damage_total;
	float mar_damage_by_enemy;
	float mar_damage_by_jms;
	float stage_check_point[7];
	unsigned int stage_score[7];
	unsigned int total_score;
	float total_time;
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
	unsigned char radar;
};

struct fsMgpFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	fsFile* file;
	fsMgcFile* start;
	fsMgcFile* end;
};

union fsFile
{
	_anon0 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
};

struct fsMgcFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	fsFile* parent;
	char* start;
	char* end;
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

struct _anon0
{
	struct
	{
		int type : 8;
		int number : 24;
	};
	int pad0;
	int pad1;
	int pad2;
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

union _anon1
{
	shBattleFight fight;
	shBattleShot shot;
};

union fsFileIndex
{
	_anon2 index;
	unsigned long pack;
};

struct SPACK_STATIC_DATA
{
	unsigned short GifNLOOP;
	unsigned short DmaQwc;
	unsigned int PRE_PRIM_FLG_NREG;
	unsigned long REGS;
};

struct _anon2
{
	fsFile* fp;
	char* name;
};

struct _SH2_SYS
{
	unsigned int step[8];
	unsigned int pre_playable;
	int main_status;
	unsigned int soft_reset;
	unsigned int frame_cnt;
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
	int padding[6];
};

struct fsCdFile
{
	struct
	{
		int type : 8;
		int number : 24;
	};
	char* name;
	int lsn;
	int size;
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

struct fsMgfFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	fsFile* parent;
	int offset;
	int size;
};

struct fsHdFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	char* name;
	int offset;
	int size;
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
	void* old_lastpos;
};

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
unsigned short result_message[15];
unsigned short msg_buffer[0];
SPACK_DATA spack;
_SH2_SYS Sh2sys;
Pad_KeyConfig key_config;
Playing_Info playing;
fsFileIndex data_menu_mc_result_msg_extra_mes[1];

void font_print(int num, int x, int y, int align);
void font_printf(char* str, int x, int y, int align);
void clear_screen();
void color1();
void color2();
void ResultMain();

// 
// Start address: 0x293c00
void font_print(int num, int x, int y, int align)
{
	// Line 58, Address: 0x293c00, Func Offset: 0
	// Line 59, Address: 0x293c20, Func Offset: 0x20
	// Line 60, Address: 0x293c50, Func Offset: 0x50
	// Func End, Address: 0x293c6c, Func Offset: 0x6c
}

// 
// Start address: 0x293c70
void font_printf(char* str, int x, int y, int align)
{
	char* argp;
	char buf[256];
	// Line 63, Address: 0x293c70, Func Offset: 0
	// Line 66, Address: 0x293ca0, Func Offset: 0x30
	// Line 67, Address: 0x293cd0, Func Offset: 0x60
	// Line 69, Address: 0x293ce0, Func Offset: 0x70
	// Line 70, Address: 0x293d08, Func Offset: 0x98
	// Func End, Address: 0x293d20, Func Offset: 0xb0
}

// 
// Start address: 0x293d20
void clear_screen()
{
	// Line 73, Address: 0x293d20, Func Offset: 0
	// Line 74, Address: 0x293d28, Func Offset: 0x8
	// Line 76, Address: 0x293d48, Func Offset: 0x28
	// Line 77, Address: 0x293d64, Func Offset: 0x44
	// Line 78, Address: 0x293d84, Func Offset: 0x64
	// Line 79, Address: 0x293da4, Func Offset: 0x84
	// Line 80, Address: 0x293dc8, Func Offset: 0xa8
	// Line 81, Address: 0x293dd0, Func Offset: 0xb0
	// Func End, Address: 0x293de0, Func Offset: 0xc0
}

// 
// Start address: 0x293de0
void color1()
{
	// Line 84, Address: 0x293de0, Func Offset: 0
	// Line 85, Address: 0x293de8, Func Offset: 0x8
	// Line 86, Address: 0x293df4, Func Offset: 0x14
	// Func End, Address: 0x293e04, Func Offset: 0x24
}

// 
// Start address: 0x293e10
void color2()
{
	// Line 89, Address: 0x293e10, Func Offset: 0
	// Line 90, Address: 0x293e18, Func Offset: 0x8
	// Line 91, Address: 0x293e24, Func Offset: 0x14
	// Func End, Address: 0x293e34, Func Offset: 0x24
}

// 
// Start address: 0x293e40
void ResultMain()
{
	unsigned short buf[11];
	int t;
	int n;
	int i;
	// Line 99, Address: 0x293e40, Func Offset: 0
	// Line 102, Address: 0x293e50, Func Offset: 0x10
	// Line 103, Address: 0x293e58, Func Offset: 0x18
	// Line 104, Address: 0x293e60, Func Offset: 0x20
	// Line 107, Address: 0x293e90, Func Offset: 0x50
	// Line 108, Address: 0x293e98, Func Offset: 0x58
	// Line 109, Address: 0x293ea0, Func Offset: 0x60
	// Line 111, Address: 0x293eb0, Func Offset: 0x70
	// Line 112, Address: 0x293eec, Func Offset: 0xac
	// Line 114, Address: 0x293ef4, Func Offset: 0xb4
	// Line 116, Address: 0x293f04, Func Offset: 0xc4
	// Line 118, Address: 0x293f10, Func Offset: 0xd0
	// Line 127, Address: 0x293ff0, Func Offset: 0x1b0
	// Line 130, Address: 0x294008, Func Offset: 0x1c8
	// Line 131, Address: 0x29403c, Func Offset: 0x1fc
	// Line 134, Address: 0x294044, Func Offset: 0x204
	// Line 135, Address: 0x294058, Func Offset: 0x218
	// Line 136, Address: 0x29406c, Func Offset: 0x22c
	// Line 138, Address: 0x2940a0, Func Offset: 0x260
	// Line 141, Address: 0x2940a8, Func Offset: 0x268
	// Line 146, Address: 0x2940b8, Func Offset: 0x278
	// Line 149, Address: 0x2940f4, Func Offset: 0x2b4
	// Line 152, Address: 0x2940fc, Func Offset: 0x2bc
	// Line 153, Address: 0x294108, Func Offset: 0x2c8
	// Line 155, Address: 0x294120, Func Offset: 0x2e0
	// Line 156, Address: 0x294128, Func Offset: 0x2e8
	// Line 157, Address: 0x294134, Func Offset: 0x2f4
	// Line 158, Address: 0x294140, Func Offset: 0x300
	// Line 159, Address: 0x294178, Func Offset: 0x338
	// Line 161, Address: 0x29418c, Func Offset: 0x34c
	// Line 162, Address: 0x2941a0, Func Offset: 0x360
	// Line 163, Address: 0x2941a8, Func Offset: 0x368
	// Line 164, Address: 0x2941b0, Func Offset: 0x370
	// Line 166, Address: 0x2941b8, Func Offset: 0x378
	// Line 168, Address: 0x2941d8, Func Offset: 0x398
	// Line 169, Address: 0x2941ec, Func Offset: 0x3ac
	// Line 170, Address: 0x2941f4, Func Offset: 0x3b4
	// Line 171, Address: 0x2941fc, Func Offset: 0x3bc
	// Line 173, Address: 0x294204, Func Offset: 0x3c4
	// Line 175, Address: 0x294224, Func Offset: 0x3e4
	// Line 176, Address: 0x29422c, Func Offset: 0x3ec
	// Line 177, Address: 0x294234, Func Offset: 0x3f4
	// Line 178, Address: 0x294240, Func Offset: 0x400
	// Line 179, Address: 0x294248, Func Offset: 0x408
	// Line 180, Address: 0x29424c, Func Offset: 0x40c
	// Line 181, Address: 0x294260, Func Offset: 0x420
	// Line 182, Address: 0x294268, Func Offset: 0x428
	// Line 183, Address: 0x29426c, Func Offset: 0x42c
	// Line 184, Address: 0x294280, Func Offset: 0x440
	// Line 185, Address: 0x294284, Func Offset: 0x444
	// Line 186, Address: 0x294298, Func Offset: 0x458
	// Line 187, Address: 0x29429c, Func Offset: 0x45c
	// Line 188, Address: 0x2942b0, Func Offset: 0x470
	// Line 190, Address: 0x2942b4, Func Offset: 0x474
	// Line 192, Address: 0x2942d4, Func Offset: 0x494
	// Line 193, Address: 0x2942e8, Func Offset: 0x4a8
	// Line 194, Address: 0x2942f0, Func Offset: 0x4b0
	// Line 195, Address: 0x2942f8, Func Offset: 0x4b8
	// Line 197, Address: 0x294300, Func Offset: 0x4c0
	// Line 198, Address: 0x29430c, Func Offset: 0x4cc
	// Line 200, Address: 0x294334, Func Offset: 0x4f4
	// Line 201, Address: 0x29433c, Func Offset: 0x4fc
	// Line 205, Address: 0x294360, Func Offset: 0x520
	// Line 206, Address: 0x294374, Func Offset: 0x534
	// Line 207, Address: 0x29437c, Func Offset: 0x53c
	// Line 208, Address: 0x294384, Func Offset: 0x544
	// Line 210, Address: 0x29438c, Func Offset: 0x54c
	// Line 212, Address: 0x2943b0, Func Offset: 0x570
	// Line 213, Address: 0x2943c4, Func Offset: 0x584
	// Line 214, Address: 0x2943cc, Func Offset: 0x58c
	// Line 215, Address: 0x2943d4, Func Offset: 0x594
	// Line 217, Address: 0x2943dc, Func Offset: 0x59c
	// Line 218, Address: 0x2943ec, Func Offset: 0x5ac
	// Line 221, Address: 0x294474, Func Offset: 0x634
	// Line 222, Address: 0x29447c, Func Offset: 0x63c
	// Line 225, Address: 0x2944d4, Func Offset: 0x694
	// Line 228, Address: 0x29452c, Func Offset: 0x6ec
	// Line 229, Address: 0x294540, Func Offset: 0x700
	// Line 230, Address: 0x294548, Func Offset: 0x708
	// Line 231, Address: 0x294550, Func Offset: 0x710
	// Line 233, Address: 0x294558, Func Offset: 0x718
	// Line 234, Address: 0x294568, Func Offset: 0x728
	// Line 237, Address: 0x2945c0, Func Offset: 0x780
	// Line 238, Address: 0x2945c8, Func Offset: 0x788
	// Line 241, Address: 0x2945ec, Func Offset: 0x7ac
	// Line 242, Address: 0x294600, Func Offset: 0x7c0
	// Line 243, Address: 0x294608, Func Offset: 0x7c8
	// Line 244, Address: 0x294610, Func Offset: 0x7d0
	// Line 246, Address: 0x294618, Func Offset: 0x7d8
	// Line 248, Address: 0x29463c, Func Offset: 0x7fc
	// Line 249, Address: 0x294650, Func Offset: 0x810
	// Line 250, Address: 0x294658, Func Offset: 0x818
	// Line 251, Address: 0x294660, Func Offset: 0x820
	// Line 253, Address: 0x294668, Func Offset: 0x828
	// Line 255, Address: 0x29468c, Func Offset: 0x84c
	// Line 256, Address: 0x2946a0, Func Offset: 0x860
	// Line 257, Address: 0x2946a8, Func Offset: 0x868
	// Line 258, Address: 0x2946b0, Func Offset: 0x870
	// Line 260, Address: 0x2946b8, Func Offset: 0x878
	// Line 261, Address: 0x2946cc, Func Offset: 0x88c
	// Line 262, Address: 0x2946d8, Func Offset: 0x898
	// Line 264, Address: 0x294760, Func Offset: 0x920
	// Line 265, Address: 0x294768, Func Offset: 0x928
	// Line 269, Address: 0x2947cc, Func Offset: 0x98c
	// Line 270, Address: 0x2947d4, Func Offset: 0x994
	// Line 273, Address: 0x29481c, Func Offset: 0x9dc
	// Line 274, Address: 0x294830, Func Offset: 0x9f0
	// Line 275, Address: 0x294838, Func Offset: 0x9f8
	// Line 276, Address: 0x294840, Func Offset: 0xa00
	// Line 278, Address: 0x294848, Func Offset: 0xa08
	// Line 281, Address: 0x294874, Func Offset: 0xa34
	// Line 282, Address: 0x294880, Func Offset: 0xa40
	// Line 283, Address: 0x29488c, Func Offset: 0xa4c
	// Line 284, Address: 0x294898, Func Offset: 0xa58
	// Line 285, Address: 0x2948a4, Func Offset: 0xa64
	// Line 286, Address: 0x2948b4, Func Offset: 0xa74
	// Line 287, Address: 0x2948c4, Func Offset: 0xa84
	// Line 288, Address: 0x2948d4, Func Offset: 0xa94
	// Line 289, Address: 0x2948ec, Func Offset: 0xaac
	// Line 290, Address: 0x2948f4, Func Offset: 0xab4
	// Line 291, Address: 0x294900, Func Offset: 0xac0
	// Line 292, Address: 0x294910, Func Offset: 0xad0
	// Line 293, Address: 0x294944, Func Offset: 0xb04
	// Line 294, Address: 0x294954, Func Offset: 0xb14
	// Line 295, Address: 0x29495c, Func Offset: 0xb1c
	// Line 296, Address: 0x294978, Func Offset: 0xb38
	// Line 297, Address: 0x294980, Func Offset: 0xb40
	// Line 298, Address: 0x29499c, Func Offset: 0xb5c
	// Line 299, Address: 0x2949a8, Func Offset: 0xb68
	// Line 300, Address: 0x2949b8, Func Offset: 0xb78
	// Line 301, Address: 0x2949e0, Func Offset: 0xba0
	// Line 302, Address: 0x2949f0, Func Offset: 0xbb0
	// Line 305, Address: 0x294a0c, Func Offset: 0xbcc
	// Line 306, Address: 0x294a14, Func Offset: 0xbd4
	// Line 308, Address: 0x294a28, Func Offset: 0xbe8
	// Line 309, Address: 0x294a48, Func Offset: 0xc08
	// Line 310, Address: 0x294a5c, Func Offset: 0xc1c
	// Line 312, Address: 0x294a90, Func Offset: 0xc50
	// Func End, Address: 0x294aa8, Func Offset: 0xc68
}

