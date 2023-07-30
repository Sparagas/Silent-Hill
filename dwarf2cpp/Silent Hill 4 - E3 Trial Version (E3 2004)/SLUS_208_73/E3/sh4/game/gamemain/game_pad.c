typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct sfObj;
typedef struct _anon5;
typedef enum GameItem : unsigned char;
typedef struct _anon6;
typedef struct _anon7;
typedef union _anon8;
typedef enum PlayerExtStatus : unsigned char;
typedef enum _enum : unsigned char;

typedef void(*type_5)(sfObj*);
typedef void(*type_9)(sfObj*);

typedef float type_0[4];
typedef unsigned int type_1[16];
typedef _anon4 type_2[1800];
typedef _anon3 type_3[2];
typedef _anon8 type_4[256];
typedef float type_6[4];
typedef short type_7[2];
typedef unsigned short type_8[2];
typedef char type_10[4];
typedef unsigned char type_11[4];
typedef float type_12[1];
typedef int type_13[1];
typedef _enum type_14[9];
typedef _anon2 type_15[10];

struct _anon0
{
	int l_priority;
	int s_priority;
	_anon6 high_que;
	int high_wait_cnt;
	_anon6 low_que;
	int low_wait_cnt;
	int l_kind;
	int s_kind;
	unsigned char l_flag;
	unsigned char s_flag;
};

struct _anon1
{
	unsigned int length_hi;
	unsigned int length_low;
	unsigned int data_num;
	unsigned int padding;
};

struct _anon2
{
	int kind;
	int pri;
	_anon4 data;
};

struct _anon3
{
	float pos[4];
	float rot[4];
	float move_rot[4];
	float eye_pos[4];
	float target_pos[4];
	float weapon_pos[4];
	float eye_dir[4];
	float floor_normal[4];
	sfObj* target_obj;
	float dir;
	float move_dir;
	float move_speed;
	float moved_speed[4];
	float floor_height;
	float hp_rate;
	float weapon_move[4];
	float weapon_speed;
	PlayerExtStatus status;
	GameItem weapon_kind;
};

struct _anon4
{
	unsigned char level;
	unsigned char frame;
};

struct sfObj
{
	_anon8 fwork[256];
	_anon8* work;
	void(*func)(sfObj*);
	_anon8* work_pt0;
	_anon8* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon8* sys_work;
	_anon8* scene_work;
	_anon8* event_work;
	_anon8* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct _anon5
{
	unsigned int keys[16];
};

enum GameItem : unsigned char
{
	ITEM_EMPTY,
	ITEM_SMALL_BULLET,
	ITEM_LARGE_BULLET,
	ITEM_SILVER_BULLET,
	ITEM_HOLY_CANDLE,
	ITEM_FINISHER,
	ITEM_RED_CHRISM,
	ITEM_LOADS_PRAYER,
	ITEM_SAINT_MEDALLION,
	ITEM_HEALTH_DRINK,
	ITEM_AMPLE,
	ITEM_FIRST_AID_KIT,
	ITEM_HANDGUN = 0x10,
	ITEM_REVOLVER,
	ITEM_IRON_PIPE,
	ITEM_CUTTER_KNIFE,
	ITEM_METAL_BAT,
	ITEM_DRIVER,
	ITEM_DRIVER_BROKEN,
	ITEM_SPOON,
	ITEM_SPOON_BROKEN,
	ITEM_MID_MASHY,
	ITEM_MID_MASHY_BROKEN,
	ITEM_MASHY_IRON,
	ITEM_MASHY_IRON_BROKEN,
	ITEM_MASHY,
	ITEM_MASHY_BROKEN,
	ITEM_SPADE_MASHY,
	ITEM_SPADE_MASHY_BROKEN,
	ITEM_MASHY_NIBLICK,
	ITEM_MASHY_NIBLICK_BROKEN,
	ITEM_PITCHER,
	ITEM_PITCHER_BROKEN,
	ITEM_NIBLICK,
	ITEM_NIBLICK_BROKEN,
	ITEM_PITCHING_WEDGE,
	ITEM_PITCHING_WEDGE_BROKEN,
	ITEM_SAND_WEDGE,
	ITEM_SAND_WEDGE_BROKEN,
	ITEM_PUTTER,
	ITEM_PUTTER_BROKEN,
	ITEM_WINE_BOTTLE,
	ITEM_WINE_BOTTLE_BROKEN,
	ITEM_SCOOP,
	ITEM_RUSTY_HATCHET,
	ITEM_PICK_OF_DESPAIR,
	ITEM_STUN_GUN,
	ITEM_SPRAY,
	ITEM_CLUB,
	ITEM_CHAIN_SAW,
	ITEM_KEY_OF_LIBERATION = 0x3c,
	ITEM_COIN_OF_LYNCHSTREETLINE,
	ITEM_CHOCOLATE_MILK,
	ITEM_SHOVEL_WITH_BLOOD_CHARACTER,
	ITEM_RUSTY_BLOODY_KEY,
	ITEM_RED_PAPER_1,
	ITEM_RED_PAPER_2,
	ITEM_RED_PAPER_3,
	ITEM_RED_PAPER_4,
	ITEM_RED_PAPER_5,
	ITEM_RED_PAPER_6,
	ITEM_TORN_RED_PAPER_1,
	ITEM_TORN_RED_PAPER_2,
	ITEM_TORN_RED_PAPER_MISS,
	ITEM_KEY_OF_SUPERINTENDANT,
	ITEM_KEY_ROCKER106,
	ITEM_CASSETTE_TAPE,
	ITEM_KEY_WITH_DOLL,
	ITEM_CHARM_OF_SUCCUBUS,
	ITEM_KEY_OF_SICKROOM,
	ITEM_RED_ENVELOPE,
	ITEM_SMALL_KEY,
	ITEM_CYNTHIAS_PASS,
	ITEM_OLD_DOLL,
	ITEM_MASTER_KEY_TO_APART,
	ITEM_ARMORIAL_MEDAL,
	ITEM_PICK_OF_HOPE,
	ITEM_NAVEL_STRING,
	ITEM_ALESSAS_SPEAR,
	ITEM_DIRTY_ENVELOPE,
	ITEM_TOY_KEY,
	ITEM_1SS_COIN_DIRTY,
	ITEM_1SS_COIN,
	ITEM_SB24_KEY,
	ITEM_HANDLE,
	ITEM_DOLLS_HEAD,
	ITEM_DOLLS_RIGHT_ARM,
	ITEM_DOLLS_LEFT_ARM,
	ITEM_DOLLS_RIGHT_LEG,
	ITEM_DOLLS_LEFT_LEG,
	ITEM_UNDERGROUND_KEY,
	ITEM_PRISONERS_SHIRT,
	ITEM_BILLIARD_BALL,
	ITEM_STUFFED_CAT,
	ITEM_VOLLEYBALL,
	ITEM_SMALL_CANDLE_PACKED,
	ITEM_SMALL_CANDLE,
	ITEM_GHOSTS_KEY,
	ITEM_DIRTY_STONE1,
	ITEM_DIRTY_STONE2,
	ITEM_DIRTY_STONE3,
	ITEM_DIRTY_STONE4,
	ITEM_DIRTY_STONE5,
	ITEM_CHANNELING_STONE1,
	ITEM_CHANNELING_STONE2,
	ITEM_CHANNELING_STONE3,
	ITEM_CHANNELING_STONE4,
	ITEM_CHANNELING_STONE5,
	ITEM_PLATE_OF_TEMPTATION,
	ITEM_PLATE_OF_ORIGIN,
	ITEM_PLATE_OF_SURVEILLANCE,
	ITEM_PLATE_OF_CHAOS,
	ITEM_ALBERT_SPORTS_KEY,
	ITEM_UNIFORM,
	ITEM_MZ_UPPER_KEY,
	ITEM_TRAILER_KEY,
	ITEM_HANDBAG = 0x80,
	ITEM_SUBMACHINEGUN,
	ITEM_BLACKJACK,
	ITEM_HORSEWHIP,
	ITEM_CHAIN,
	ITEM_FIRST_LETTER = 0x88,
	ITEM_SCRAP_OF_BOOK,
	ITEM_RED_DIARY_0408,
	ITEM_RED_DIARY_0404,
	ITEM_SCRAP_OF_BIBLE,
	ITEM_DIARY_OF_NEIGHBOUR,
	ITEM_SUPERINTENDANTS_MEMO,
	ITEM_SUPERINTENDANTS_DIARY,
	ITEM_RED_DIARY_0502,
	ITEM_RED_DIARY_0514,
	ITEM_RED_DIARY_0520,
	ITEM_SCRAP_OF_RED_DIARY,
	ITEM_SCRAP_OF_RED_DIARY_2,
	ITEM_MIKES_LOVELETTER,
	ITEM_RED_DIARY_0713,
	ITEM_RED_DIARY_0720,
	ITEM_HOLY_MOTHER_21_SACRAMENTS,
	ITEM_RED_BOOK,
	ITEM_PICTURE_BOOK,
	ITEM_RED_DIARY_0611,
	ITEM_RED_DIARY_0614,
	ITEM_RED_DIARY_SOMETIMEAGO,
	ITEM_RED_DIARY_0717,
	ITEM_RED_DIARY_0718,
	ITEM_RED_DIARY_0723,
	ITEM_RED_DIARY_0725,
	ITEM_RED_DIARY_0728,
	ITEM_RED_DIARY_0729,
	ITEM_RED_DIARY_0802,
	ITEM_RED_DIARY_0803,
	ITEM_RED_DIARY_0804,
	ITEM_RED_DIARY_0805,
	ITEM_RED_DIARY_0807,
	ITEM_SUPERINTENDANTS_DIARY_COUT,
	ITEM_JOSEPHS_LETTER,
	ITEM_JOSEPHS_REPORT,
	ITEM_NURSE_MEMO,
	ITEM_CHILD_LETTER,
	ITEM_BLOODY_SHIRT,
	ITEM_BARTENDERS_MEMO,
	ITEM_BARTENDERS_MEMO2,
	ITEM_MEMOIRS,
	ITEM_JASPERS_MEMO,
	ITEM_BURNED_OUT_MEMO,
	ITEM_DOLLS_TEXT,
	ITEM_EXPLORERS_MEMO,
	ITEM_SENTINELS_DIARY,
	ITEM_PLATE_ABOUT_WATERWHEEL,
	ITEM_PRISONERS_DIARY,
	ITEM_REPORT_1F,
	ITEM_REPORT_2F,
	ITEM_PASSWORD_MEMO,
	ITEM_BRICK = 0xe4,
	ITEM_KILLER_PIPE,
	ITEM_KILLER_GUN1,
	ITEM_KILLER_GUN2,
	ITEM_KIND_MAX
};

struct _anon6
{
	_anon4 data[1800];
	int head;
	int size;
};

struct _anon7
{
	unsigned int pad;
	float analog_l_x;
	float analog_l_y;
	float analog_r_x;
	float analog_r_y;
	int is_force_mode;
};

union _anon8
{
	int si;
	unsigned int ui;
	void* pt;
	short ss[2];
	unsigned short us[2];
	char sc[4];
	unsigned char uc[4];
	float f;
	float fv[1];
	int iv[1];
};

enum PlayerExtStatus : unsigned char
{
	PLAYER_STAT_ABSENT,
	PLAYER_STAT_MOVE,
	PLAYER_STAT_SILENT,
	PLAYER_STAT_READY,
	PLAYER_STAT_LOCK,
	PLAYER_STAT_ATTACK,
	PLAYER_STAT_DAMAGE,
	PLAYER_STAT_EVENT,
	PLAYER_STAT_SWORD,
	PLAYER_STAT_GODMODE,
	PLAYER_STAT_DEAD
};

enum _enum : unsigned char
{
	KEY_ACTION,
	KEY_CANCEL,
	KEY_MAP,
	KEY_PAUSE,
	KEY_ITEMINFO,
	KEY_ITEM_L,
	KEY_ITEM_R,
	KEY_PARALLEL_L,
	KEY_PARALLEL_R,
	KEY_SEARCHVIEW,
	KEY_FIGHTING_POSE,
	KEY_USEITEM,
	KEY_AVOIDANCE,
	KEY_DEMOSKIP,
	KEY_EVENT_TRG,
	KEY_3LDK_CAM_RESET,
	MAX_KEY_NUM
};

_anon5 GamePadDef;
_anon2 vib_param[10];
_anon7 force_value;
_anon7 force_value_in;
_anon0 vib_buf;
_anon5 g_pad;
_anon3 player_ext_info[2];

int get_vib_frame(int kind);
void init_vib_param_table_init();
void sfVibDataClear(_anon0* buf);
void sfVibQueueInit(_anon6* que);
int sfVibQueueEnQueue(_anon6* dst, _anon4* data);
_anon4* sfVibQueueDeQueue(_anon6* src);
void GamePadOneVibDataSet(_anon6* dst, _anon4* src, int data_num);
int GamePadVibDataSet(void* src);
_anon2* get_vib_param(int kind);
int GetAreaDamage();
void GamePadVibDataSetByKind(int kind);
int GamePadVibKindSet(int kind);
int GamePadOneVibe(int kind, _anon0* data, _anon6* que);
void GamePadVibeDrive();
void GamePadSetDefaultKey();
void GamePadInit();
int IsPlayerDead();
int is_disabled_key(_enum key);
unsigned int GamePadGetWork(_enum key);
void GamePadKeyValueForceSet(_enum key);
void GamePadAnalogRValueForceSet(float x, float y);
void GamePadForceValueUpdate();
void GamePadForceValueClear();
int GamePadChk(int port_no, _enum key);
int GamePadChkTrg(int port_no, _enum key);
int GamePadChkRep(int port_no, _enum key);
int GamePadChkTrgForMenu(int port_no, _enum key);
unsigned int GamePadGetRepForMenu(int port_no);
float GamePadGetAnalogLX(int port_no);
float GamePadGetAnalogLY(int port_no);
float GamePadGetAnalogRX(int port_no);
float GamePadGetAnalogRY(int port_no);
void GamePadSet(_enum key, unsigned int val);

// 
// Start address: 0x1aaca0
int get_vib_frame(int kind)
{
	float frame;
	// Line 221, Address: 0x1aaca0, Func Offset: 0
	// Line 224, Address: 0x1aaca4, Func Offset: 0x4
	// Line 222, Address: 0x1aaca8, Func Offset: 0x8
	// Line 224, Address: 0x1aacac, Func Offset: 0xc
	// Line 225, Address: 0x1aacd0, Func Offset: 0x30
	// Line 226, Address: 0x1aacf4, Func Offset: 0x54
	// Line 227, Address: 0x1aad20, Func Offset: 0x80
	// Line 228, Address: 0x1aad44, Func Offset: 0xa4
	// Line 229, Address: 0x1aad6c, Func Offset: 0xcc
	// Line 230, Address: 0x1aad94, Func Offset: 0xf4
	// Line 231, Address: 0x1aada8, Func Offset: 0x108
	// Line 232, Address: 0x1aadb8, Func Offset: 0x118
	// Line 233, Address: 0x1aadc8, Func Offset: 0x128
	// Line 234, Address: 0x1aadd8, Func Offset: 0x138
	// Line 238, Address: 0x1aade0, Func Offset: 0x140
	// Line 237, Address: 0x1aade4, Func Offset: 0x144
	// Line 238, Address: 0x1aadec, Func Offset: 0x14c
	// Func End, Address: 0x1aadf4, Func Offset: 0x154
}

// 
// Start address: 0x1aae00
void init_vib_param_table_init()
{
	int i;
	_anon2* param;
	// Line 242, Address: 0x1aae00, Func Offset: 0
	// Line 246, Address: 0x1aae10, Func Offset: 0x10
	// Line 244, Address: 0x1aae14, Func Offset: 0x14
	// Line 246, Address: 0x1aae1c, Func Offset: 0x1c
	// Line 247, Address: 0x1aae20, Func Offset: 0x20
	// Line 249, Address: 0x1aae28, Func Offset: 0x28
	// Line 247, Address: 0x1aae2c, Func Offset: 0x2c
	// Line 249, Address: 0x1aae30, Func Offset: 0x30
	// Line 250, Address: 0x1aae3c, Func Offset: 0x3c
	// Func End, Address: 0x1aae50, Func Offset: 0x50
}

// 
// Start address: 0x1aae50
void sfVibDataClear(_anon0* buf)
{
	// Line 256, Address: 0x1aae50, Func Offset: 0
	// Line 257, Address: 0x1aae54, Func Offset: 0x4
	// Line 256, Address: 0x1aae58, Func Offset: 0x8
	// Line 257, Address: 0x1aae5c, Func Offset: 0xc
	// Line 256, Address: 0x1aae60, Func Offset: 0x10
	// Line 257, Address: 0x1aae64, Func Offset: 0x14
	// Line 259, Address: 0x1aae6c, Func Offset: 0x1c
	// Line 260, Address: 0x1aae74, Func Offset: 0x24
	// Line 262, Address: 0x1aae78, Func Offset: 0x28
	// Line 263, Address: 0x1aae7c, Func Offset: 0x2c
	// Line 264, Address: 0x1aae80, Func Offset: 0x30
	// Func End, Address: 0x1aae90, Func Offset: 0x40
}

// 
// Start address: 0x1aae90
void sfVibQueueInit(_anon6* que)
{
	// Line 269, Address: 0x1aae90, Func Offset: 0
	// Line 270, Address: 0x1aae94, Func Offset: 0x4
	// Line 269, Address: 0x1aae98, Func Offset: 0x8
	// Line 270, Address: 0x1aae9c, Func Offset: 0xc
	// Line 269, Address: 0x1aaea0, Func Offset: 0x10
	// Line 270, Address: 0x1aaea4, Func Offset: 0x14
	// Line 271, Address: 0x1aaeac, Func Offset: 0x1c
	// Line 272, Address: 0x1aaeb0, Func Offset: 0x20
	// Line 273, Address: 0x1aaeb4, Func Offset: 0x24
	// Func End, Address: 0x1aaec4, Func Offset: 0x34
}

// 
// Start address: 0x1aaed0
int sfVibQueueEnQueue(_anon6* dst, _anon4* data)
{
	int index;
	// Line 293, Address: 0x1aaed0, Func Offset: 0
	// Line 294, Address: 0x1aaee0, Func Offset: 0x10
	// Line 296, Address: 0x1aaee8, Func Offset: 0x18
	// Line 300, Address: 0x1aaef8, Func Offset: 0x28
	// Line 298, Address: 0x1aaefc, Func Offset: 0x2c
	// Line 296, Address: 0x1aaf04, Func Offset: 0x34
	// Line 298, Address: 0x1aaf18, Func Offset: 0x48
	// Line 301, Address: 0x1aaf28, Func Offset: 0x58
	// Func End, Address: 0x1aaf30, Func Offset: 0x60
}

// 
// Start address: 0x1aaf30
_anon4* sfVibQueueDeQueue(_anon6* src)
{
	_anon4* rtv;
	// Line 309, Address: 0x1aaf30, Func Offset: 0
	// Line 310, Address: 0x1aaf3c, Func Offset: 0xc
	// Line 311, Address: 0x1aaf44, Func Offset: 0x14
	// Line 310, Address: 0x1aaf48, Func Offset: 0x18
	// Line 314, Address: 0x1aaf4c, Func Offset: 0x1c
	// Line 313, Address: 0x1aaf50, Func Offset: 0x20
	// Line 314, Address: 0x1aaf54, Func Offset: 0x24
	// Line 313, Address: 0x1aaf68, Func Offset: 0x38
	// Line 314, Address: 0x1aaf6c, Func Offset: 0x3c
	// Line 315, Address: 0x1aaf70, Func Offset: 0x40
	// Line 317, Address: 0x1aaf7c, Func Offset: 0x4c
	// Line 318, Address: 0x1aaf80, Func Offset: 0x50
	// Func End, Address: 0x1aaf88, Func Offset: 0x58
}

// 
// Start address: 0x1aaf90
void GamePadOneVibDataSet(_anon6* dst, _anon4* src, int data_num)
{
	int i;
	// Line 322, Address: 0x1aaf90, Func Offset: 0
	// Line 325, Address: 0x1aafac, Func Offset: 0x1c
	// Line 326, Address: 0x1aafb4, Func Offset: 0x24
	// Line 327, Address: 0x1aafc0, Func Offset: 0x30
	// Line 328, Address: 0x1aafd0, Func Offset: 0x40
	// Line 329, Address: 0x1aafe0, Func Offset: 0x50
	// Func End, Address: 0x1aaff8, Func Offset: 0x68
}

// 
// Start address: 0x1ab000
int GamePadVibDataSet(void* src)
{
	_anon1* head;
	_anon4* data;
	unsigned int len_high;
	unsigned int len_low;
	// Line 348, Address: 0x1ab000, Func Offset: 0
	// Line 356, Address: 0x1ab014, Func Offset: 0x14
	// Line 359, Address: 0x1ab01c, Func Offset: 0x1c
	// Line 365, Address: 0x1ab020, Func Offset: 0x20
	// Line 366, Address: 0x1ab024, Func Offset: 0x24
	// Line 360, Address: 0x1ab030, Func Offset: 0x30
	// Line 366, Address: 0x1ab034, Func Offset: 0x34
	// Line 371, Address: 0x1ab03c, Func Offset: 0x3c
	// Line 367, Address: 0x1ab040, Func Offset: 0x40
	// Line 371, Address: 0x1ab044, Func Offset: 0x44
	// Line 367, Address: 0x1ab048, Func Offset: 0x48
	// Line 372, Address: 0x1ab04c, Func Offset: 0x4c
	// Line 368, Address: 0x1ab050, Func Offset: 0x50
	// Line 372, Address: 0x1ab058, Func Offset: 0x58
	// Line 368, Address: 0x1ab060, Func Offset: 0x60
	// Line 372, Address: 0x1ab064, Func Offset: 0x64
	// Line 373, Address: 0x1ab06c, Func Offset: 0x6c
	// Line 374, Address: 0x1ab070, Func Offset: 0x70
	// Line 373, Address: 0x1ab074, Func Offset: 0x74
	// Line 377, Address: 0x1ab078, Func Offset: 0x78
	// Line 374, Address: 0x1ab07c, Func Offset: 0x7c
	// Line 377, Address: 0x1ab084, Func Offset: 0x84
	// Line 378, Address: 0x1ab08c, Func Offset: 0x8c
	// Line 379, Address: 0x1ab094, Func Offset: 0x94
	// Line 380, Address: 0x1ab09c, Func Offset: 0x9c
	// Line 383, Address: 0x1ab0a4, Func Offset: 0xa4
	// Func End, Address: 0x1ab0bc, Func Offset: 0xbc
}

// 
// Start address: 0x1ab0c0
_anon2* get_vib_param(int kind)
{
	int i;
	_anon2* p;
	// Line 391, Address: 0x1ab0c0, Func Offset: 0
	// Line 393, Address: 0x1ab0c4, Func Offset: 0x4
	// Line 391, Address: 0x1ab0c8, Func Offset: 0x8
	// Line 393, Address: 0x1ab0cc, Func Offset: 0xc
	// Line 394, Address: 0x1ab0d0, Func Offset: 0x10
	// Line 395, Address: 0x1ab0dc, Func Offset: 0x1c
	// Line 396, Address: 0x1ab0e4, Func Offset: 0x24
	// Line 398, Address: 0x1ab0e8, Func Offset: 0x28
	// Line 399, Address: 0x1ab0f8, Func Offset: 0x38
	// Line 400, Address: 0x1ab100, Func Offset: 0x40
	// Func End, Address: 0x1ab108, Func Offset: 0x48
}

// 
// Start address: 0x1ab110
int GetAreaDamage()
{
	float rtv;
	float ratio;
	// Line 403, Address: 0x1ab110, Func Offset: 0
	// Line 408, Address: 0x1ab118, Func Offset: 0x8
	// Line 410, Address: 0x1ab124, Func Offset: 0x14
	// Line 408, Address: 0x1ab128, Func Offset: 0x18
	// Line 412, Address: 0x1ab12c, Func Offset: 0x1c
	// Line 408, Address: 0x1ab130, Func Offset: 0x20
	// Line 410, Address: 0x1ab134, Func Offset: 0x24
	// Line 408, Address: 0x1ab13c, Func Offset: 0x2c
	// Line 412, Address: 0x1ab140, Func Offset: 0x30
	// Line 410, Address: 0x1ab144, Func Offset: 0x34
	// Line 412, Address: 0x1ab148, Func Offset: 0x38
	// Line 415, Address: 0x1ab15c, Func Offset: 0x4c
	// Line 414, Address: 0x1ab160, Func Offset: 0x50
	// Line 415, Address: 0x1ab168, Func Offset: 0x58
	// Func End, Address: 0x1ab170, Func Offset: 0x60
}

// 
// Start address: 0x1ab170
void GamePadVibDataSetByKind(int kind)
{
	_anon0* dst;
	_anon2* p;
	// Line 419, Address: 0x1ab170, Func Offset: 0
	// Line 421, Address: 0x1ab17c, Func Offset: 0xc
	// Line 419, Address: 0x1ab180, Func Offset: 0x10
	// Line 422, Address: 0x1ab184, Func Offset: 0x14
	// Line 424, Address: 0x1ab190, Func Offset: 0x20
	// Line 425, Address: 0x1ab198, Func Offset: 0x28
	// Line 433, Address: 0x1ab1c0, Func Offset: 0x50
	// Line 434, Address: 0x1ab1d0, Func Offset: 0x60
	// Line 435, Address: 0x1ab1d8, Func Offset: 0x68
	// Line 437, Address: 0x1ab1e0, Func Offset: 0x70
	// Line 441, Address: 0x1ab1e8, Func Offset: 0x78
	// Line 443, Address: 0x1ab1f4, Func Offset: 0x84
	// Line 444, Address: 0x1ab204, Func Offset: 0x94
	// Line 445, Address: 0x1ab20c, Func Offset: 0x9c
	// Line 447, Address: 0x1ab214, Func Offset: 0xa4
	// Line 450, Address: 0x1ab21c, Func Offset: 0xac
	// Line 451, Address: 0x1ab220, Func Offset: 0xb0
	// Line 452, Address: 0x1ab230, Func Offset: 0xc0
	// Line 453, Address: 0x1ab238, Func Offset: 0xc8
	// Line 454, Address: 0x1ab240, Func Offset: 0xd0
	// Line 457, Address: 0x1ab244, Func Offset: 0xd4
	// Line 458, Address: 0x1ab248, Func Offset: 0xd8
	// Func End, Address: 0x1ab25c, Func Offset: 0xec
}

// 
// Start address: 0x1ab260
int GamePadVibKindSet(int kind)
{
	_anon0* dst;
	_anon2* param;
	int pri;
	int is_ok;
	int is_large;
	int i;
	int act_no;
	// Line 467, Address: 0x1ab260, Func Offset: 0
	// Line 468, Address: 0x1ab264, Func Offset: 0x4
	// Line 467, Address: 0x1ab268, Func Offset: 0x8
	// Line 468, Address: 0x1ab26c, Func Offset: 0xc
	// Line 467, Address: 0x1ab270, Func Offset: 0x10
	// Line 469, Address: 0x1ab27c, Func Offset: 0x1c
	// Line 471, Address: 0x1ab284, Func Offset: 0x24
	// Line 476, Address: 0x1ab288, Func Offset: 0x28
	// Line 477, Address: 0x1ab290, Func Offset: 0x30
	// Line 480, Address: 0x1ab29c, Func Offset: 0x3c
	// Line 486, Address: 0x1ab2c0, Func Offset: 0x60
	// Line 488, Address: 0x1ab2c4, Func Offset: 0x64
	// Line 491, Address: 0x1ab2cc, Func Offset: 0x6c
	// Line 493, Address: 0x1ab2d0, Func Offset: 0x70
	// Line 494, Address: 0x1ab2dc, Func Offset: 0x7c
	// Line 496, Address: 0x1ab2e0, Func Offset: 0x80
	// Line 498, Address: 0x1ab2e4, Func Offset: 0x84
	// Line 500, Address: 0x1ab2ec, Func Offset: 0x8c
	// Line 502, Address: 0x1ab2f0, Func Offset: 0x90
	// Line 503, Address: 0x1ab2fc, Func Offset: 0x9c
	// Line 505, Address: 0x1ab300, Func Offset: 0xa0
	// Line 507, Address: 0x1ab304, Func Offset: 0xa4
	// Line 508, Address: 0x1ab30c, Func Offset: 0xac
	// Line 509, Address: 0x1ab310, Func Offset: 0xb0
	// Line 511, Address: 0x1ab314, Func Offset: 0xb4
	// Line 513, Address: 0x1ab318, Func Offset: 0xb8
	// Line 514, Address: 0x1ab320, Func Offset: 0xc0
	// Line 516, Address: 0x1ab328, Func Offset: 0xc8
	// Line 517, Address: 0x1ab338, Func Offset: 0xd8
	// Line 521, Address: 0x1ab340, Func Offset: 0xe0
	// Line 524, Address: 0x1ab348, Func Offset: 0xe8
	// Line 527, Address: 0x1ab350, Func Offset: 0xf0
	// Line 526, Address: 0x1ab354, Func Offset: 0xf4
	// Line 527, Address: 0x1ab358, Func Offset: 0xf8
	// Line 528, Address: 0x1ab35c, Func Offset: 0xfc
	// Line 529, Address: 0x1ab360, Func Offset: 0x100
	// Line 530, Address: 0x1ab368, Func Offset: 0x108
	// Line 531, Address: 0x1ab374, Func Offset: 0x114
	// Line 533, Address: 0x1ab384, Func Offset: 0x124
	// Line 535, Address: 0x1ab38c, Func Offset: 0x12c
	// Line 536, Address: 0x1ab390, Func Offset: 0x130
	// Func End, Address: 0x1ab3a8, Func Offset: 0x148
}

// 
// Start address: 0x1ab3b0
int GamePadOneVibe(int kind, _anon0* data, _anon6* que)
{
	int rtv;
	int* p_cnt;
	_anon4* v;
	// Line 540, Address: 0x1ab3b0, Func Offset: 0
	// Line 549, Address: 0x1ab3bc, Func Offset: 0xc
	// Line 540, Address: 0x1ab3c0, Func Offset: 0x10
	// Line 549, Address: 0x1ab3cc, Func Offset: 0x1c
	// Line 552, Address: 0x1ab3e0, Func Offset: 0x30
	// Line 553, Address: 0x1ab3ec, Func Offset: 0x3c
	// Line 554, Address: 0x1ab3f8, Func Offset: 0x48
	// Line 555, Address: 0x1ab404, Func Offset: 0x54
	// Line 556, Address: 0x1ab418, Func Offset: 0x68
	// Line 557, Address: 0x1ab454, Func Offset: 0xa4
	// Line 559, Address: 0x1ab460, Func Offset: 0xb0
	// Line 560, Address: 0x1ab46c, Func Offset: 0xbc
	// Line 561, Address: 0x1ab470, Func Offset: 0xc0
	// Line 562, Address: 0x1ab474, Func Offset: 0xc4
	// Line 564, Address: 0x1ab480, Func Offset: 0xd0
	// Line 565, Address: 0x1ab48c, Func Offset: 0xdc
	// Line 568, Address: 0x1ab490, Func Offset: 0xe0
	// Line 571, Address: 0x1ab498, Func Offset: 0xe8
	// Line 574, Address: 0x1ab4a0, Func Offset: 0xf0
	// Line 575, Address: 0x1ab4a4, Func Offset: 0xf4
	// Func End, Address: 0x1ab4bc, Func Offset: 0x10c
}

// 
// Start address: 0x1ab4c0
void GamePadVibeDrive()
{
	_anon0* data;
	int f_rtv0;
	int f_rtv1;
	// Line 579, Address: 0x1ab4c0, Func Offset: 0
	// Line 580, Address: 0x1ab4cc, Func Offset: 0xc
	// Line 582, Address: 0x1ab4d0, Func Offset: 0x10
	// Line 585, Address: 0x1ab4e4, Func Offset: 0x24
	// Line 586, Address: 0x1ab4f0, Func Offset: 0x30
	// Line 588, Address: 0x1ab4fc, Func Offset: 0x3c
	// Line 589, Address: 0x1ab504, Func Offset: 0x44
	// Line 590, Address: 0x1ab508, Func Offset: 0x48
	// Line 591, Address: 0x1ab50c, Func Offset: 0x4c
	// Line 594, Address: 0x1ab510, Func Offset: 0x50
	// Line 595, Address: 0x1ab51c, Func Offset: 0x5c
	// Line 597, Address: 0x1ab528, Func Offset: 0x68
	// Line 598, Address: 0x1ab530, Func Offset: 0x70
	// Line 599, Address: 0x1ab534, Func Offset: 0x74
	// Line 600, Address: 0x1ab538, Func Offset: 0x78
	// Line 603, Address: 0x1ab53c, Func Offset: 0x7c
	// Line 604, Address: 0x1ab540, Func Offset: 0x80
	// Func End, Address: 0x1ab550, Func Offset: 0x90
}

// 
// Start address: 0x1ab550
void GamePadSetDefaultKey()
{
	// Line 737, Address: 0x1ab550, Func Offset: 0
	// Func End, Address: 0x1ab568, Func Offset: 0x18
}

// 
// Start address: 0x1ab570
void GamePadInit()
{
	// Line 744, Address: 0x1ab570, Func Offset: 0
	// Line 748, Address: 0x1ab578, Func Offset: 0x8
	// Line 751, Address: 0x1ab580, Func Offset: 0x10
	// Line 761, Address: 0x1ab58c, Func Offset: 0x1c
	// Line 763, Address: 0x1ab594, Func Offset: 0x24
	// Line 764, Address: 0x1ab59c, Func Offset: 0x2c
	// Func End, Address: 0x1ab5a8, Func Offset: 0x38
}

// 
// Start address: 0x1ab5b0
int IsPlayerDead()
{
	// Line 770, Address: 0x1ab5b0, Func Offset: 0
	// Line 771, Address: 0x1ab5bc, Func Offset: 0xc
	// Func End, Address: 0x1ab5c4, Func Offset: 0x14
}

// 
// Start address: 0x1ab5d0
int is_disabled_key(_enum key)
{
	_enum tbl[9];
	int i;
	// Line 774, Address: 0x1ab5d0, Func Offset: 0
	// Line 775, Address: 0x1ab5d4, Func Offset: 0x4
	// Line 774, Address: 0x1ab5d8, Func Offset: 0x8
	// Line 775, Address: 0x1ab5dc, Func Offset: 0xc
	// Line 774, Address: 0x1ab5e0, Func Offset: 0x10
	// Line 775, Address: 0x1ab5e4, Func Offset: 0x14
	// Line 794, Address: 0x1ab5f8, Func Offset: 0x28
	// Line 797, Address: 0x1ab61c, Func Offset: 0x4c
	// Line 798, Address: 0x1ab628, Func Offset: 0x58
	// Line 799, Address: 0x1ab634, Func Offset: 0x64
	// Line 801, Address: 0x1ab63c, Func Offset: 0x6c
	// Line 803, Address: 0x1ab650, Func Offset: 0x80
	// Line 804, Address: 0x1ab658, Func Offset: 0x88
	// Func End, Address: 0x1ab668, Func Offset: 0x98
}

// 
// Start address: 0x1ab670
unsigned int GamePadGetWork(_enum key)
{
	// Line 810, Address: 0x1ab670, Func Offset: 0
	// Line 811, Address: 0x1ab684, Func Offset: 0x14
	// Func End, Address: 0x1ab68c, Func Offset: 0x1c
}

// 
// Start address: 0x1ab690
void GamePadKeyValueForceSet(_enum key)
{
	// Line 821, Address: 0x1ab694, Func Offset: 0x4
	// Line 823, Address: 0x1ab6a4, Func Offset: 0x14
	// Line 825, Address: 0x1ab6b0, Func Offset: 0x20
	// Line 827, Address: 0x1ab6c8, Func Offset: 0x38
	// Func End, Address: 0x1ab6d0, Func Offset: 0x40
}

// 
// Start address: 0x1ab6d0
void GamePadAnalogRValueForceSet(float x, float y)
{
	// Line 854, Address: 0x1ab6d0, Func Offset: 0
	// Line 853, Address: 0x1ab6d4, Func Offset: 0x4
	// Line 854, Address: 0x1ab6d8, Func Offset: 0x8
	// Line 853, Address: 0x1ab6dc, Func Offset: 0xc
	// Line 854, Address: 0x1ab6e4, Func Offset: 0x14
	// Line 853, Address: 0x1ab6e8, Func Offset: 0x18
	// Line 854, Address: 0x1ab6ec, Func Offset: 0x1c
	// Line 855, Address: 0x1ab700, Func Offset: 0x30
	// Line 857, Address: 0x1ab718, Func Offset: 0x48
	// Line 859, Address: 0x1ab72c, Func Offset: 0x5c
	// Line 865, Address: 0x1ab738, Func Offset: 0x68
	// Line 863, Address: 0x1ab740, Func Offset: 0x70
	// Line 866, Address: 0x1ab744, Func Offset: 0x74
	// Line 863, Address: 0x1ab74c, Func Offset: 0x7c
	// Line 867, Address: 0x1ab754, Func Offset: 0x84
	// Func End, Address: 0x1ab768, Func Offset: 0x98
}

// 
// Start address: 0x1ab770
void GamePadForceValueUpdate()
{
	// Line 873, Address: 0x1ab770, Func Offset: 0
	// Line 875, Address: 0x1ab784, Func Offset: 0x14
	// Line 873, Address: 0x1ab788, Func Offset: 0x18
	// Line 875, Address: 0x1ab794, Func Offset: 0x24
	// Line 876, Address: 0x1ab798, Func Offset: 0x28
	// Line 877, Address: 0x1ab7a0, Func Offset: 0x30
	// Line 878, Address: 0x1ab7a8, Func Offset: 0x38
	// Line 879, Address: 0x1ab7b0, Func Offset: 0x40
	// Line 880, Address: 0x1ab7b8, Func Offset: 0x48
	// Line 881, Address: 0x1ab7bc, Func Offset: 0x4c
	// Func End, Address: 0x1ab7c4, Func Offset: 0x54
}

// 
// Start address: 0x1ab7d0
void GamePadForceValueClear()
{
	// Line 886, Address: 0x1ab7d0, Func Offset: 0
	// Line 887, Address: 0x1ab7d8, Func Offset: 0x8
	// Line 888, Address: 0x1ab7e0, Func Offset: 0x10
	// Line 889, Address: 0x1ab7e8, Func Offset: 0x18
	// Line 890, Address: 0x1ab7f0, Func Offset: 0x20
	// Line 891, Address: 0x1ab7f8, Func Offset: 0x28
	// Line 893, Address: 0x1ab800, Func Offset: 0x30
	// Line 894, Address: 0x1ab808, Func Offset: 0x38
	// Line 895, Address: 0x1ab810, Func Offset: 0x40
	// Line 896, Address: 0x1ab818, Func Offset: 0x48
	// Line 897, Address: 0x1ab820, Func Offset: 0x50
	// Line 898, Address: 0x1ab828, Func Offset: 0x58
	// Line 899, Address: 0x1ab82c, Func Offset: 0x5c
	// Func End, Address: 0x1ab834, Func Offset: 0x64
}

// 
// Start address: 0x1ab840
int GamePadChk(int port_no, _enum key)
{
	int rtv;
	unsigned int pad;
	// Line 911, Address: 0x1ab840, Func Offset: 0
	// Line 912, Address: 0x1ab858, Func Offset: 0x18
	// Line 914, Address: 0x1ab860, Func Offset: 0x20
	// Line 915, Address: 0x1ab870, Func Offset: 0x30
	// Line 917, Address: 0x1ab87c, Func Offset: 0x3c
	// Line 918, Address: 0x1ab888, Func Offset: 0x48
	// Line 920, Address: 0x1ab8c4, Func Offset: 0x84
	// Line 922, Address: 0x1ab8c8, Func Offset: 0x88
	// Line 923, Address: 0x1ab8cc, Func Offset: 0x8c
	// Func End, Address: 0x1ab8e4, Func Offset: 0xa4
}

// 
// Start address: 0x1ab8f0
int GamePadChkTrg(int port_no, _enum key)
{
	int rtv;
	unsigned int pad;
	// Line 932, Address: 0x1ab8f0, Func Offset: 0
	// Line 933, Address: 0x1ab908, Func Offset: 0x18
	// Line 935, Address: 0x1ab910, Func Offset: 0x20
	// Line 936, Address: 0x1ab920, Func Offset: 0x30
	// Line 938, Address: 0x1ab92c, Func Offset: 0x3c
	// Line 939, Address: 0x1ab938, Func Offset: 0x48
	// Line 941, Address: 0x1ab974, Func Offset: 0x84
	// Line 943, Address: 0x1ab978, Func Offset: 0x88
	// Line 944, Address: 0x1ab97c, Func Offset: 0x8c
	// Func End, Address: 0x1ab994, Func Offset: 0xa4
}

// 
// Start address: 0x1ab9a0
int GamePadChkRep(int port_no, _enum key)
{
	int rtv;
	unsigned int pad;
	// Line 953, Address: 0x1ab9a0, Func Offset: 0
	// Line 954, Address: 0x1ab9b8, Func Offset: 0x18
	// Line 956, Address: 0x1ab9c0, Func Offset: 0x20
	// Line 957, Address: 0x1ab9d0, Func Offset: 0x30
	// Line 959, Address: 0x1ab9dc, Func Offset: 0x3c
	// Line 960, Address: 0x1ab9e8, Func Offset: 0x48
	// Line 962, Address: 0x1aba24, Func Offset: 0x84
	// Line 964, Address: 0x1aba28, Func Offset: 0x88
	// Line 965, Address: 0x1aba2c, Func Offset: 0x8c
	// Func End, Address: 0x1aba44, Func Offset: 0xa4
}

// 
// Start address: 0x1aba50
int GamePadChkTrgForMenu(int port_no, _enum key)
{
	int rtv;
	unsigned int pad;
	// Line 989, Address: 0x1aba50, Func Offset: 0
	// Line 990, Address: 0x1aba68, Func Offset: 0x18
	// Line 992, Address: 0x1aba70, Func Offset: 0x20
	// Line 993, Address: 0x1aba80, Func Offset: 0x30
	// Line 995, Address: 0x1aba8c, Func Offset: 0x3c
	// Line 996, Address: 0x1aba94, Func Offset: 0x44
	// Line 1000, Address: 0x1abaa8, Func Offset: 0x58
	// Line 1001, Address: 0x1abaac, Func Offset: 0x5c
	// Func End, Address: 0x1abac4, Func Offset: 0x74
}

// 
// Start address: 0x1abad0
unsigned int GamePadGetRepForMenu(int port_no)
{
	unsigned int rtv;
	unsigned int pad;
	unsigned long cnt;
	// Line 1025, Address: 0x1abad0, Func Offset: 0
	// Line 1032, Address: 0x1abae4, Func Offset: 0x14
	// Line 1033, Address: 0x1abaf4, Func Offset: 0x24
	// Line 1036, Address: 0x1abaf8, Func Offset: 0x28
	// Line 1038, Address: 0x1abb08, Func Offset: 0x38
	// Line 1039, Address: 0x1abb28, Func Offset: 0x58
	// Line 1040, Address: 0x1abb2c, Func Offset: 0x5c
	// Line 1041, Address: 0x1abb30, Func Offset: 0x60
	// Line 1042, Address: 0x1abb38, Func Offset: 0x68
	// Line 1045, Address: 0x1abb48, Func Offset: 0x78
	// Line 1046, Address: 0x1abb4c, Func Offset: 0x7c
	// Func End, Address: 0x1abb60, Func Offset: 0x90
}

// 
// Start address: 0x1abb60
float GamePadGetAnalogLX(int port_no)
{
	// Line 1109, Address: 0x1abb60, Func Offset: 0
	// Line 1110, Address: 0x1abb6c, Func Offset: 0xc
	// Line 1109, Address: 0x1abb70, Func Offset: 0x10
	// Line 1110, Address: 0x1abb74, Func Offset: 0x14
	// Line 1111, Address: 0x1abba8, Func Offset: 0x48
	// Func End, Address: 0x1abbb4, Func Offset: 0x54
}

// 
// Start address: 0x1abbc0
float GamePadGetAnalogLY(int port_no)
{
	// Line 1117, Address: 0x1abbc0, Func Offset: 0
	// Line 1118, Address: 0x1abbcc, Func Offset: 0xc
	// Line 1117, Address: 0x1abbd0, Func Offset: 0x10
	// Line 1118, Address: 0x1abbd4, Func Offset: 0x14
	// Line 1119, Address: 0x1abc08, Func Offset: 0x48
	// Func End, Address: 0x1abc14, Func Offset: 0x54
}

// 
// Start address: 0x1abc20
float GamePadGetAnalogRX(int port_no)
{
	// Line 1125, Address: 0x1abc20, Func Offset: 0
	// Line 1126, Address: 0x1abc2c, Func Offset: 0xc
	// Line 1125, Address: 0x1abc30, Func Offset: 0x10
	// Line 1126, Address: 0x1abc34, Func Offset: 0x14
	// Line 1127, Address: 0x1abc68, Func Offset: 0x48
	// Func End, Address: 0x1abc74, Func Offset: 0x54
}

// 
// Start address: 0x1abc80
float GamePadGetAnalogRY(int port_no)
{
	float y;
	// Line 1133, Address: 0x1abc80, Func Offset: 0
	// Line 1134, Address: 0x1abc8c, Func Offset: 0xc
	// Line 1133, Address: 0x1abc90, Func Offset: 0x10
	// Line 1134, Address: 0x1abc98, Func Offset: 0x18
	// Line 1135, Address: 0x1abcd0, Func Offset: 0x50
	// Line 1138, Address: 0x1abce4, Func Offset: 0x64
	// Line 1139, Address: 0x1abcf4, Func Offset: 0x74
	// Line 1141, Address: 0x1abcf8, Func Offset: 0x78
	// Line 1140, Address: 0x1abcfc, Func Offset: 0x7c
	// Line 1141, Address: 0x1abd00, Func Offset: 0x80
	// Func End, Address: 0x1abd0c, Func Offset: 0x8c
}

// 
// Start address: 0x1abd10
void GamePadSet(_enum key, unsigned int val)
{
	// Line 1169, Address: 0x1abd14, Func Offset: 0x4
	// Line 1170, Address: 0x1abd24, Func Offset: 0x14
	// Line 1171, Address: 0x1abd34, Func Offset: 0x24
	// Line 1172, Address: 0x1abd38, Func Offset: 0x28
	// Func End, Address: 0x1abd40, Func Offset: 0x30
}

