typedef struct fsHdFile;
typedef struct _anon0;
typedef struct shBattleShot;
typedef struct _anon1;
typedef struct fsMgpFile;
typedef struct Stage_Data;
typedef struct Item;
typedef union fsFile;
typedef struct fsMgcFile;
typedef struct _anon2;
typedef struct PicDraw_Data;
typedef struct sh2gfw_AREA_HEAD;
typedef struct _SH2_SYS;
typedef union fsFileIndex;
typedef struct Event_List;
typedef struct _anon3;
typedef struct _anon4;
typedef struct Item_List;
typedef struct shAttackInfo;
typedef struct _anon5;
typedef union _anon6;
typedef struct Pad_KeyConfig;
typedef struct Playing_Info;
typedef struct Model_List;
typedef struct JumpMenu_List;
typedef struct Enemy_List;
typedef struct _anon7;
typedef struct fsCdFile;
typedef struct _AnimeInfo;
typedef struct fsMgfFile;
typedef struct shBattleFight;

typedef int(*type_0)();
typedef void(*type_3)();

typedef unsigned char type_1[14];
typedef JumpMenu_List type_2[154];
typedef unsigned int type_4[255];
typedef unsigned int type_5[32];
typedef unsigned char type_6[4];
typedef unsigned int type_7[2];
typedef unsigned short type_8[11];
typedef char type_9[4];
typedef char type_10[4];
typedef unsigned char type_11[97];
typedef char type_12[4];
typedef char type_13[4];
typedef float type_14[4];
typedef unsigned short type_15[3];
typedef char type_16[4];
typedef _anon3 type_17[19];
typedef unsigned int type_18[8];
typedef char* type_19[53];
typedef unsigned char type_20[64];
typedef _anon3 type_21[7];
typedef unsigned char type_22[20];
typedef char type_23[64];
typedef _anon5 type_24[81];
typedef unsigned char type_25[3];
typedef int type_26[4];
typedef char type_27[128];
typedef shAttackInfo type_28[66];
typedef unsigned char type_29[14];
typedef int type_30[6];
typedef _anon3 type_31[13];
typedef int type_32[53];
typedef float type_33[7];
typedef unsigned int type_34[7];
typedef unsigned char type_35[69];
typedef _anon3 type_36[27];
typedef _anon3 type_37[48];
typedef _anon3 type_38[56];
typedef int type_39[4];
typedef _anon3 type_40[37];

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

struct _anon0
{
	void(*SpecDraw)();
	void(*PreDraw)();
	void(*PostDraw)();
	void(*CharaDraw_Hook)();
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct _anon1
{
	unsigned int flag[255];
	float time_deai;
	unsigned int enemy[32];
	unsigned char safe[4];
	char rotate[4];
	char guruguru[4];
	char cylinder[4];
	unsigned short clock;
	unsigned short carbon;
	char runaway[4];
	unsigned short hanging;
	short pad;
	char trunk[4];
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

struct Stage_Data
{
	Event_List* ev_list;
	unsigned char* ev_pos;
	int(*ev_prog)();
	Item_List* gi_list;
	Model_List* mdl_list;
	Enemy_List* en_list;
	void(*stage_init)();
	void(*room_init)();
	void(*alltime_func)();
	int glb_crd;
	int pc_model;
	_AnimeInfo* stg_anim_info;
	int(*bgm_control)();
	_anon0* gfw_func;
	int(*chara_data_clear)();
	void(*sound_call_after_load)();
	int reserve_11;
};

struct Item
{
	unsigned int flag[2];
	unsigned short number[11];
	unsigned char light_switch;
	unsigned char radio_switch;
	unsigned char radio_volume;
	unsigned char equip;
	float ampoule_efficacy;
	unsigned short event_use[3];
	unsigned short short_pad;
	unsigned char last_cursor;
};

union fsFile
{
	_anon2 check;
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

struct _anon2
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

struct PicDraw_Data
{
	sh2gfw_AREA_HEAD* ap;
	int tex;
	int clut;
	short x0;
	short y0;
	short x1;
	short y1;
	short x2;
	short y2;
	short x3;
	short y3;
	int us0;
	int vt0;
	int us1;
	int vt1;
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
	unsigned char alpha_a;
	unsigned char alpha_b;
	unsigned char alpha_c;
	unsigned char alpha_d;
	unsigned char alpha_fix;
	unsigned char test_ate;
	unsigned char test_atst;
	unsigned char test_aref;
	unsigned char test_afail;
	unsigned char test_date;
	unsigned char test_datm;
	unsigned char test_zte;
	unsigned char test_ztst;
	unsigned char pad[3];
	short otp;
	short status;
};

struct sh2gfw_AREA_HEAD
{
	unsigned int area_id;
	unsigned int toGlobalTexHead;
	unsigned int toGlobalClutsHead;
	unsigned int date;
};

struct _SH2_SYS
{
	unsigned int step[8];
	unsigned int pre_playable;
	int main_status;
	unsigned int soft_reset;
	unsigned int frame_cnt;
};

union fsFileIndex
{
	_anon4 index;
	unsigned long pack;
};

struct Event_List
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
};

struct _anon3
{
	unsigned char moji[64];
	short id;
};

struct _anon4
{
	fsFile* fp;
	char* name;
};

struct Item_List
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
};

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon6 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

struct _anon5
{
	char string[64];
	fsFileIndex* file_id;
};

union _anon6
{
	shBattleFight fight;
	shBattleShot shot;
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

struct Model_List
{
	short kind;
	short id;
	short flag_off;
	short flag_on;
	float pos[4];
	float rot[4];
};

struct JumpMenu_List
{
	char string[128];
	float pos_x;
	float pos_y;
	float pos_z;
	float rot;
	int stg;
};

struct Enemy_List
{
	short kind;
	short id;
	int pos_x;
	int pos_z;
	short pos_y;
	short rot_y;
	short status;
	unsigned short condition;
};

struct _anon7
{
	int x;
	int z;
	int flg;
	int trg;
	int glb_crd;
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
_anon7 user_data;
JumpMenu_List list[154];
int jump_menu_select;
int jump_after_data_set;
Playing_Info playing;
_SH2_SYS Sh2sys;
Stage_Data* stage;
float connect_pos[4];
Pad_KeyConfig key_config;
Item item;
_anon1 game_flag;
_anon5 pic_test_list[81];
_anon3 cvMainList[7];
_anon3 cvHumanList[27];
_anon3 cvEnemyList[13];
_anon3 cvWeaponList[19];
_anon3 cvAnimItemList[48];
_anon3 cvNormItemList[37];
_anon3 cvGameItemList[56];
int chMenuSubPos;
int chMenuMainPos;
int chMenuSel;
int chMenuCursor;

void JumpMenuPosNormal();
void CheckModeJumpDataSet();

// 
// Start address: 0x20f100
void JumpMenuPosNormal()
{
	// Line 406, Address: 0x20f100, Func Offset: 0
	// Line 407, Address: 0x20f110, Func Offset: 0x10
	// Line 410, Address: 0x20f118, Func Offset: 0x18
	// Func End, Address: 0x20f120, Func Offset: 0x20
}

// 
// Start address: 0x20f120
void CheckModeJumpDataSet()
{
	int i;
	float dummy[4];
	// Line 793, Address: 0x20f120, Func Offset: 0
	// Line 794, Address: 0x20f12c, Func Offset: 0xc
	// Line 797, Address: 0x20f140, Func Offset: 0x20
	// Line 798, Address: 0x20f150, Func Offset: 0x30
	// Line 800, Address: 0x20f15c, Func Offset: 0x3c
	// Line 801, Address: 0x20f168, Func Offset: 0x48
	// Line 803, Address: 0x20f174, Func Offset: 0x54
	// Line 805, Address: 0x20f180, Func Offset: 0x60
	// Line 818, Address: 0x20f1f0, Func Offset: 0xd0
	// Line 819, Address: 0x20f1fc, Func Offset: 0xdc
	// Line 820, Address: 0x20f228, Func Offset: 0x108
	// Line 821, Address: 0x20f234, Func Offset: 0x114
	// Line 822, Address: 0x20f260, Func Offset: 0x140
	// Line 823, Address: 0x20f26c, Func Offset: 0x14c
	// Line 824, Address: 0x20f298, Func Offset: 0x178
	// Line 825, Address: 0x20f2a4, Func Offset: 0x184
	// Line 826, Address: 0x20f2b0, Func Offset: 0x190
	// Line 827, Address: 0x20f2bc, Func Offset: 0x19c
	// Line 828, Address: 0x20f2c8, Func Offset: 0x1a8
	// Line 829, Address: 0x20f2d4, Func Offset: 0x1b4
	// Line 830, Address: 0x20f300, Func Offset: 0x1e0
	// Line 831, Address: 0x20f330, Func Offset: 0x210
	// Line 832, Address: 0x20f33c, Func Offset: 0x21c
	// Line 834, Address: 0x20f348, Func Offset: 0x228
	// Line 835, Address: 0x20f35c, Func Offset: 0x23c
	// Line 836, Address: 0x20f374, Func Offset: 0x254
	// Line 837, Address: 0x20f38c, Func Offset: 0x26c
	// Line 838, Address: 0x20f3a4, Func Offset: 0x284
	// Line 839, Address: 0x20f3bc, Func Offset: 0x29c
	// Line 840, Address: 0x20f3d4, Func Offset: 0x2b4
	// Line 841, Address: 0x20f3ec, Func Offset: 0x2cc
	// Line 842, Address: 0x20f404, Func Offset: 0x2e4
	// Line 845, Address: 0x20f41c, Func Offset: 0x2fc
	// Line 847, Address: 0x20f774, Func Offset: 0x654
	// Line 848, Address: 0x20f78c, Func Offset: 0x66c
	// Line 850, Address: 0x20f794, Func Offset: 0x674
	// Line 851, Address: 0x20f7a8, Func Offset: 0x688
	// Line 852, Address: 0x20f7c0, Func Offset: 0x6a0
	// Line 853, Address: 0x20f7d4, Func Offset: 0x6b4
	// Line 855, Address: 0x20f7dc, Func Offset: 0x6bc
	// Line 856, Address: 0x20f7e4, Func Offset: 0x6c4
	// Line 857, Address: 0x20f7f0, Func Offset: 0x6d0
	// Line 858, Address: 0x20f820, Func Offset: 0x700
	// Line 859, Address: 0x20f82c, Func Offset: 0x70c
	// Line 861, Address: 0x20f834, Func Offset: 0x714
	// Line 862, Address: 0x20f848, Func Offset: 0x728
	// Line 863, Address: 0x20f850, Func Offset: 0x730
	// Line 864, Address: 0x20f85c, Func Offset: 0x73c
	// Line 865, Address: 0x20f888, Func Offset: 0x768
	// Line 866, Address: 0x20f894, Func Offset: 0x774
	// Line 867, Address: 0x20f8a0, Func Offset: 0x780
	// Line 868, Address: 0x20f8ac, Func Offset: 0x78c
	// Line 869, Address: 0x20f8d8, Func Offset: 0x7b8
	// Line 870, Address: 0x20f8e4, Func Offset: 0x7c4
	// Line 872, Address: 0x20f8ec, Func Offset: 0x7cc
	// Line 873, Address: 0x20f900, Func Offset: 0x7e0
	// Line 875, Address: 0x20f908, Func Offset: 0x7e8
	// Line 876, Address: 0x20f910, Func Offset: 0x7f0
	// Line 877, Address: 0x20f91c, Func Offset: 0x7fc
	// Line 878, Address: 0x20f948, Func Offset: 0x828
	// Line 879, Address: 0x20f954, Func Offset: 0x834
	// Line 880, Address: 0x20f980, Func Offset: 0x860
	// Line 881, Address: 0x20f98c, Func Offset: 0x86c
	// Line 882, Address: 0x20f998, Func Offset: 0x878
	// Line 883, Address: 0x20f9a4, Func Offset: 0x884
	// Line 884, Address: 0x20f9d0, Func Offset: 0x8b0
	// Line 885, Address: 0x20f9dc, Func Offset: 0x8bc
	// Line 886, Address: 0x20f9e8, Func Offset: 0x8c8
	// Line 888, Address: 0x20f9f0, Func Offset: 0x8d0
	// Line 889, Address: 0x20f9fc, Func Offset: 0x8dc
	// Line 890, Address: 0x20fa28, Func Offset: 0x908
	// Line 891, Address: 0x20fa34, Func Offset: 0x914
	// Line 892, Address: 0x20fa60, Func Offset: 0x940
	// Line 893, Address: 0x20fa6c, Func Offset: 0x94c
	// Line 894, Address: 0x20fa98, Func Offset: 0x978
	// Line 895, Address: 0x20faa4, Func Offset: 0x984
	// Line 896, Address: 0x20fab0, Func Offset: 0x990
	// Line 897, Address: 0x20fabc, Func Offset: 0x99c
	// Line 898, Address: 0x20fac8, Func Offset: 0x9a8
	// Line 899, Address: 0x20faf8, Func Offset: 0x9d8
	// Line 900, Address: 0x20fb04, Func Offset: 0x9e4
	// Line 901, Address: 0x20fb10, Func Offset: 0x9f0
	// Line 902, Address: 0x20fb1c, Func Offset: 0x9fc
	// Line 904, Address: 0x20fb24, Func Offset: 0xa04
	// Line 905, Address: 0x20fb30, Func Offset: 0xa10
	// Line 906, Address: 0x20fb60, Func Offset: 0xa40
	// Line 907, Address: 0x20fb6c, Func Offset: 0xa4c
	// Line 908, Address: 0x20fb98, Func Offset: 0xa78
	// Line 909, Address: 0x20fbc8, Func Offset: 0xaa8
	// Line 910, Address: 0x20fbd4, Func Offset: 0xab4
	// Line 911, Address: 0x20fbe0, Func Offset: 0xac0
	// Line 912, Address: 0x20fbf8, Func Offset: 0xad8
	// Line 913, Address: 0x20fc0c, Func Offset: 0xaec
	// Line 914, Address: 0x20fc20, Func Offset: 0xb00
	// Line 915, Address: 0x20fc34, Func Offset: 0xb14
	// Line 916, Address: 0x20fc48, Func Offset: 0xb28
	// Line 917, Address: 0x20fc5c, Func Offset: 0xb3c
	// Line 918, Address: 0x20fc74, Func Offset: 0xb54
	// Line 919, Address: 0x20fc88, Func Offset: 0xb68
	// Line 920, Address: 0x20fc90, Func Offset: 0xb70
	// Line 923, Address: 0x20fc98, Func Offset: 0xb78
	// Line 924, Address: 0x20fca4, Func Offset: 0xb84
	// Line 925, Address: 0x20fcd0, Func Offset: 0xbb0
	// Line 926, Address: 0x20fcdc, Func Offset: 0xbbc
	// Line 927, Address: 0x20fd08, Func Offset: 0xbe8
	// Line 928, Address: 0x20fd14, Func Offset: 0xbf4
	// Line 929, Address: 0x20fd20, Func Offset: 0xc00
	// Line 930, Address: 0x20fd50, Func Offset: 0xc30
	// Line 931, Address: 0x20fd80, Func Offset: 0xc60
	// Line 932, Address: 0x20fd8c, Func Offset: 0xc6c
	// Line 933, Address: 0x20fd98, Func Offset: 0xc78
	// Line 934, Address: 0x20fda4, Func Offset: 0xc84
	// Line 935, Address: 0x20fdbc, Func Offset: 0xc9c
	// Line 936, Address: 0x20fdd0, Func Offset: 0xcb0
	// Line 937, Address: 0x20fdd8, Func Offset: 0xcb8
	// Line 943, Address: 0x20fde0, Func Offset: 0xcc0
	// Line 944, Address: 0x20fdf8, Func Offset: 0xcd8
	// Line 945, Address: 0x20fe0c, Func Offset: 0xcec
	// Line 947, Address: 0x20fe14, Func Offset: 0xcf4
	// Line 948, Address: 0x20fe28, Func Offset: 0xd08
	// Line 950, Address: 0x20fe30, Func Offset: 0xd10
	// Line 951, Address: 0x20fe48, Func Offset: 0xd28
	// Line 953, Address: 0x20fe50, Func Offset: 0xd30
	// Line 954, Address: 0x20fe5c, Func Offset: 0xd3c
	// Line 955, Address: 0x20fe70, Func Offset: 0xd50
	// Line 957, Address: 0x20fe78, Func Offset: 0xd58
	// Line 958, Address: 0x20fe8c, Func Offset: 0xd6c
	// Line 959, Address: 0x20fea0, Func Offset: 0xd80
	// Line 961, Address: 0x20fea8, Func Offset: 0xd88
	// Line 962, Address: 0x20feb4, Func Offset: 0xd94
	// Line 964, Address: 0x20febc, Func Offset: 0xd9c
	// Line 965, Address: 0x20fec8, Func Offset: 0xda8
	// Line 967, Address: 0x20fed0, Func Offset: 0xdb0
	// Line 968, Address: 0x20fee4, Func Offset: 0xdc4
	// Line 970, Address: 0x20feec, Func Offset: 0xdcc
	// Line 971, Address: 0x20ff04, Func Offset: 0xde4
	// Line 973, Address: 0x20ff0c, Func Offset: 0xdec
	// Line 974, Address: 0x20ff24, Func Offset: 0xe04
	// Line 975, Address: 0x20ff3c, Func Offset: 0xe1c
	// Line 976, Address: 0x20ff50, Func Offset: 0xe30
	// Line 978, Address: 0x20ff58, Func Offset: 0xe38
	// Line 979, Address: 0x20ff70, Func Offset: 0xe50
	// Line 980, Address: 0x20ff84, Func Offset: 0xe64
	// Line 981, Address: 0x20ff98, Func Offset: 0xe78
	// Line 982, Address: 0x20ffac, Func Offset: 0xe8c
	// Line 983, Address: 0x20ffc0, Func Offset: 0xea0
	// Line 986, Address: 0x20ffc8, Func Offset: 0xea8
	// Line 987, Address: 0x20ffdc, Func Offset: 0xebc
	// Line 989, Address: 0x20ffe4, Func Offset: 0xec4
	// Line 990, Address: 0x20fff0, Func Offset: 0xed0
	// Line 992, Address: 0x20fff8, Func Offset: 0xed8
	// Line 993, Address: 0x210004, Func Offset: 0xee4
	// Line 994, Address: 0x210010, Func Offset: 0xef0
	// Line 996, Address: 0x210018, Func Offset: 0xef8
	// Line 997, Address: 0x210024, Func Offset: 0xf04
	// Line 999, Address: 0x21002c, Func Offset: 0xf0c
	// Line 1000, Address: 0x210040, Func Offset: 0xf20
	// Line 1001, Address: 0x21004c, Func Offset: 0xf2c
	// Line 1002, Address: 0x210058, Func Offset: 0xf38
	// Line 1004, Address: 0x210060, Func Offset: 0xf40
	// Line 1005, Address: 0x210074, Func Offset: 0xf54
	// Line 1007, Address: 0x21007c, Func Offset: 0xf5c
	// Line 1008, Address: 0x210088, Func Offset: 0xf68
	// Line 1010, Address: 0x210090, Func Offset: 0xf70
	// Line 1011, Address: 0x2100a8, Func Offset: 0xf88
	// Line 1013, Address: 0x2100b0, Func Offset: 0xf90
	// Line 1014, Address: 0x2100c4, Func Offset: 0xfa4
	// Line 1016, Address: 0x2100cc, Func Offset: 0xfac
	// Line 1017, Address: 0x2100d8, Func Offset: 0xfb8
	// Line 1018, Address: 0x2100e4, Func Offset: 0xfc4
	// Line 1019, Address: 0x2100f0, Func Offset: 0xfd0
	// Line 1021, Address: 0x2100f8, Func Offset: 0xfd8
	// Line 1022, Address: 0x210104, Func Offset: 0xfe4
	// Line 1024, Address: 0x21010c, Func Offset: 0xfec
	// Line 1025, Address: 0x210124, Func Offset: 0x1004
	// Line 1027, Address: 0x21012c, Func Offset: 0x100c
	// Line 1028, Address: 0x210144, Func Offset: 0x1024
	// Line 1029, Address: 0x210158, Func Offset: 0x1038
	// Line 1030, Address: 0x210170, Func Offset: 0x1050
	// Line 1031, Address: 0x210188, Func Offset: 0x1068
	// Line 1032, Address: 0x2101a0, Func Offset: 0x1080
	// Line 1034, Address: 0x2101a8, Func Offset: 0x1088
	// Line 1035, Address: 0x2101bc, Func Offset: 0x109c
	// Line 1037, Address: 0x2101c4, Func Offset: 0x10a4
	// Line 1038, Address: 0x2101d0, Func Offset: 0x10b0
	// Line 1039, Address: 0x2101dc, Func Offset: 0x10bc
	// Line 1041, Address: 0x2101e4, Func Offset: 0x10c4
	// Line 1042, Address: 0x2101ec, Func Offset: 0x10cc
	// Line 1043, Address: 0x2101f8, Func Offset: 0x10d8
	// Line 1046, Address: 0x210200, Func Offset: 0x10e0
	// Line 1047, Address: 0x210214, Func Offset: 0x10f4
	// Line 1049, Address: 0x21021c, Func Offset: 0x10fc
	// Line 1050, Address: 0x210234, Func Offset: 0x1114
	// Line 1052, Address: 0x21023c, Func Offset: 0x111c
	// Line 1053, Address: 0x210250, Func Offset: 0x1130
	// Line 1055, Address: 0x210258, Func Offset: 0x1138
	// Line 1056, Address: 0x210270, Func Offset: 0x1150
	// Line 1058, Address: 0x210278, Func Offset: 0x1158
	// Line 1059, Address: 0x210290, Func Offset: 0x1170
	// Line 1060, Address: 0x2102a8, Func Offset: 0x1188
	// Line 1061, Address: 0x2102b4, Func Offset: 0x1194
	// Line 1063, Address: 0x2102bc, Func Offset: 0x119c
	// Line 1064, Address: 0x2102d0, Func Offset: 0x11b0
	// Line 1066, Address: 0x2102d8, Func Offset: 0x11b8
	// Line 1067, Address: 0x2102ec, Func Offset: 0x11cc
	// Line 1070, Address: 0x2102f4, Func Offset: 0x11d4
	// Line 1071, Address: 0x210300, Func Offset: 0x11e0
	// Line 1073, Address: 0x210308, Func Offset: 0x11e8
	// Line 1074, Address: 0x210314, Func Offset: 0x11f4
	// Line 1076, Address: 0x21031c, Func Offset: 0x11fc
	// Line 1077, Address: 0x210334, Func Offset: 0x1214
	// Line 1079, Address: 0x21033c, Func Offset: 0x121c
	// Line 1080, Address: 0x210348, Func Offset: 0x1228
	// Line 1081, Address: 0x210354, Func Offset: 0x1234
	// Line 1082, Address: 0x210360, Func Offset: 0x1240
	// Line 1084, Address: 0x210368, Func Offset: 0x1248
	// Line 1085, Address: 0x210374, Func Offset: 0x1254
	// Line 1086, Address: 0x210380, Func Offset: 0x1260
	// Line 1088, Address: 0x21038c, Func Offset: 0x126c
	// Line 1090, Address: 0x210394, Func Offset: 0x1274
	// Line 1091, Address: 0x2103a0, Func Offset: 0x1280
	// Line 1093, Address: 0x2103a8, Func Offset: 0x1288
	// Line 1094, Address: 0x2103b4, Func Offset: 0x1294
	// Line 1096, Address: 0x2103bc, Func Offset: 0x129c
	// Line 1097, Address: 0x2103c8, Func Offset: 0x12a8
	// Line 1098, Address: 0x2103d4, Func Offset: 0x12b4
	// Line 1099, Address: 0x2103e0, Func Offset: 0x12c0
	// Line 1101, Address: 0x2103e8, Func Offset: 0x12c8
	// Line 1102, Address: 0x2103f4, Func Offset: 0x12d4
	// Line 1103, Address: 0x210400, Func Offset: 0x12e0
	// Line 1104, Address: 0x21040c, Func Offset: 0x12ec
	// Line 1105, Address: 0x210418, Func Offset: 0x12f8
	// Line 1106, Address: 0x210424, Func Offset: 0x1304
	// Line 1107, Address: 0x210430, Func Offset: 0x1310
	// Line 1108, Address: 0x21043c, Func Offset: 0x131c
	// Line 1109, Address: 0x210448, Func Offset: 0x1328
	// Line 1110, Address: 0x210454, Func Offset: 0x1334
	// Line 1111, Address: 0x210460, Func Offset: 0x1340
	// Line 1112, Address: 0x21046c, Func Offset: 0x134c
	// Line 1113, Address: 0x210478, Func Offset: 0x1358
	// Line 1114, Address: 0x210484, Func Offset: 0x1364
	// Line 1115, Address: 0x21049c, Func Offset: 0x137c
	// Line 1117, Address: 0x2104a4, Func Offset: 0x1384
	// Line 1118, Address: 0x2104b0, Func Offset: 0x1390
	// Line 1120, Address: 0x2104b8, Func Offset: 0x1398
	// Line 1121, Address: 0x2104c4, Func Offset: 0x13a4
	// Line 1123, Address: 0x2104cc, Func Offset: 0x13ac
	// Line 1124, Address: 0x2104d8, Func Offset: 0x13b8
	// Line 1126, Address: 0x2104e0, Func Offset: 0x13c0
	// Line 1127, Address: 0x2104ec, Func Offset: 0x13cc
	// Line 1129, Address: 0x2104f4, Func Offset: 0x13d4
	// Line 1130, Address: 0x210500, Func Offset: 0x13e0
	// Line 1131, Address: 0x21050c, Func Offset: 0x13ec
	// Line 1133, Address: 0x210514, Func Offset: 0x13f4
	// Line 1134, Address: 0x210528, Func Offset: 0x1408
	// Line 1135, Address: 0x21053c, Func Offset: 0x141c
	// Line 1136, Address: 0x210548, Func Offset: 0x1428
	// Line 1137, Address: 0x210554, Func Offset: 0x1434
	// Line 1139, Address: 0x21055c, Func Offset: 0x143c
	// Line 1140, Address: 0x210570, Func Offset: 0x1450
	// Line 1141, Address: 0x21058c, Func Offset: 0x146c
	// Line 1143, Address: 0x210594, Func Offset: 0x1474
	// Line 1144, Address: 0x2105a0, Func Offset: 0x1480
	// Line 1149, Address: 0x2105b4, Func Offset: 0x1494
	// Line 1152, Address: 0x2105d0, Func Offset: 0x14b0
	// Func End, Address: 0x2105e4, Func Offset: 0x14c4
}

