typedef struct _anon0;
typedef struct GameItemData;
typedef struct _anon1;
typedef struct sfObj;
typedef union _anon2;
typedef struct _anon3;
typedef enum _enum_0 : unsigned char;
typedef enum PlayerExtStatus : unsigned char;
typedef enum _enum_1 : unsigned char;
typedef enum GameItem : unsigned char;

typedef void(*type_9)(sfObj*);
typedef void(*type_14)(sfObj*);

typedef _anon0 type_0[10];
typedef _anon0 type_1[136];
typedef int type_2[11];
typedef char type_3[3];
typedef unsigned char type_4[136];
typedef float type_5[14];
typedef _anon1 type_6[2];
typedef unsigned char type_7[120];
typedef _anon2 type_8[256];
typedef unsigned char type_10[14];
typedef float type_11[4];
typedef unsigned char type_12[4];
typedef unsigned char type_13[4][12];
typedef float type_15[14];
typedef short type_16[2];
typedef unsigned short type_17[2];
typedef char type_18[4];
typedef unsigned char type_19[4];
typedef float type_20[1];
typedef int type_21[1];
typedef unsigned char type_22[15];
typedef _anon0 type_23[136];
typedef float type_24[4];
typedef _anon3 type_25[3];

struct _anon0
{
	float durability;
	unsigned short num;
	unsigned char kind;
	char work;
};

struct GameItemData
{
	_anon0 possession[10];
	_anon0 box[136];
	unsigned short box_max;
	unsigned char handgun_ammo;
	unsigned char weapon_kind;
	char is_saint_medallion_equiped;
	char pad[3];
	unsigned char flag_tbl[136];
};

struct _anon1
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

struct sfObj
{
	_anon2 fwork[256];
	_anon2* work;
	void(*func)(sfObj*);
	_anon2* work_pt0;
	_anon2* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon2* sys_work;
	_anon2* scene_work;
	_anon2* event_work;
	_anon2* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

union _anon2
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

struct _anon3
{
	GameItem kind;
	float value;
};

enum _enum_0 : unsigned char
{
	ITEM_ATTR_UNKNOWN,
	ITEM_ATTR_WEAPON,
	ITEM_ATTR_EIL_WEAPON,
	ITEM_ATTR_JOREI,
	ITEM_ATTR_RECOVERY,
	ITEM_ATTR_KEY,
	ITEM_ATTR_MEMO
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

enum _enum_1 : unsigned char
{
	ITEM_RESULT_NONE,
	ITEM_RESULT_USE,
	ITEM_RESULT_KEY,
	ITEM_RESULT_ATTACK,
	ITEM_RESULT_WEAPONCHG,
	ITEM_RESULT_EILEENS_WEAPON
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

unsigned char use_item_default[4][12];
unsigned char broken_items[15];
float item_durability_default[14];
float item_dec_durability_default[14];
_anon3 item_recovery_value[3];
unsigned char item_tidy_table[120];
_anon0 empty_item;
GameItemData game_item;
_anon1 player_ext_info[2];

int GameItemSearchTidyIndex(GameItem kind);
int GameItemGetDefaultNum(GameItem kind);
int broken_item_number(GameItem kind);
int GameItemIsWeapon(GameItem kind);
int GameItemIsConsume(GameItem kind);
int GameItemIsKey(GameItem kind);
int GameItemIsMemo(GameItem kind);
int GameItemIsEileensWeapon(GameItem kind);
_enum_0 GameItemGetAttr(GameItem kind);
void item_possession_sort(int empty_num);
void GameItemInit();
int GameItemCheckPossessionFull();
int GameItemCheckBoxFull(GameItem kind, int add_num);
int GameItemSearchItem(GameItem kind);
int GameItemGetIndex(GameItem kind);
int GameItemGet(GameItem kind);
int GameItemPossessionNumberAll();
GameItem GameItemPossessionKind(int num);
int GameItemPossessionNumber(int num);
int GameItemPossessionNumberSum(GameItem kind);
float GameItemGetRecoveryValue(GameItem kind);
float GameItemDurability(GameItem kind);
float GameItemDurabilityByNum(int num);
float dec_durability_value(GameItem kind);
void Broken(int pos);
float GameItemDecreaseDurability(GameItem kind);
int GameItemWeaponEquip(int num);
int GameItemSaintMedallionEquip(int num);
void GameItemSaintMedallionUnequip();
int GameItemIsEquipSaintMedallion();
int GameItemGetEquipedSaintMedallionNumber();
void GameItemWeaponUnequip();
int GameItemErase(int num);
int GameItemRob(int num);
_enum_1 GameItemUseItem(int num);
GameItem GameItemHandgunAmmoKind();
int GameItemEquipHandgunAmmo(int num);
int GameItemIsReloadable(GameItem gun_kind, GameItem bullet);
int GameItemIsAmmoEmpty(GameItem kind);
int GameItemReloadHandgunAmmo(int num);
int GameItemReloadRevolverAmmo(int num);
void item_box_delete(int num);
int GameItemExchangeWithBox(int p_num, int b_num);
float GameItemBoxDurabilityByNum(int num);
int GameItemBoxToPossessionIndex(GameItem kind);
int GameItemBoxToPossession(int box_num);
int GameItemPossessionToBoxIndex(int poss_num);
int GameItemPossessionToBox(int poss_num);
int GameItemBoxGet(GameItem kind);
void item_box_sort();
int GameItemBoxIsAbleToMerge(int menu_id);
void item_box_merge();
void GameItemBoxTidy();
int GameItemBoxNumberAll();
GameItem GameItemBoxKind(int num);
int GameItemBoxNumber(int num);
int GameItemBoxNumberSum(GameItem kind);
int GameItemHaveARecoveryItemInMenu();
int GameItemHaveARecoveryItemInBox();
int GameItemHaveARecoveryItem();
void GameItemGetFlagOn(GameItem kind);
int GameItemFlagGet(GameItem kind);

// 
// Start address: 0x1b16a0
int GameItemSearchTidyIndex(GameItem kind)
{
	int i;
	unsigned char* p;
	// Line 329, Address: 0x1b16a0, Func Offset: 0
	// Line 331, Address: 0x1b16a8, Func Offset: 0x8
	// Line 332, Address: 0x1b16b0, Func Offset: 0x10
	// Line 333, Address: 0x1b16bc, Func Offset: 0x1c
	// Line 335, Address: 0x1b16c0, Func Offset: 0x20
	// Line 336, Address: 0x1b16c8, Func Offset: 0x28
	// Line 337, Address: 0x1b16dc, Func Offset: 0x3c
	// Line 341, Address: 0x1b16f0, Func Offset: 0x50
	// Line 342, Address: 0x1b16f8, Func Offset: 0x58
	// Func End, Address: 0x1b1700, Func Offset: 0x60
}

// 
// Start address: 0x1b1700
int GameItemGetDefaultNum(GameItem kind)
{
	int level;
	// Line 350, Address: 0x1b1700, Func Offset: 0
	// Line 351, Address: 0x1b170c, Func Offset: 0xc
	// Line 354, Address: 0x1b1714, Func Offset: 0x14
	// Line 355, Address: 0x1b1734, Func Offset: 0x34
	// Line 357, Address: 0x1b1738, Func Offset: 0x38
	// Line 359, Address: 0x1b1740, Func Offset: 0x40
	// Line 361, Address: 0x1b1744, Func Offset: 0x44
	// Line 362, Address: 0x1b1748, Func Offset: 0x48
	// Line 363, Address: 0x1b1778, Func Offset: 0x78
	// Line 365, Address: 0x1b1780, Func Offset: 0x80
	// Line 366, Address: 0x1b1788, Func Offset: 0x88
	// Func End, Address: 0x1b1798, Func Offset: 0x98
}

// 
// Start address: 0x1b17a0
int broken_item_number(GameItem kind)
{
	int n;
	// Line 395, Address: 0x1b17a4, Func Offset: 0x4
	// Line 396, Address: 0x1b17ac, Func Offset: 0xc
	// Line 398, Address: 0x1b17b4, Func Offset: 0x14
	// Line 396, Address: 0x1b17b8, Func Offset: 0x18
	// Line 400, Address: 0x1b17bc, Func Offset: 0x1c
	// Line 401, Address: 0x1b17d0, Func Offset: 0x30
	// Line 402, Address: 0x1b17dc, Func Offset: 0x3c
	// Line 403, Address: 0x1b17f8, Func Offset: 0x58
	// Func End, Address: 0x1b1800, Func Offset: 0x60
}

// 
// Start address: 0x1b1800
int GameItemIsWeapon(GameItem kind)
{
	int rtv;
	// Line 412, Address: 0x1b1804, Func Offset: 0x4
	// Line 416, Address: 0x1b1838, Func Offset: 0x38
	// Line 417, Address: 0x1b183c, Func Offset: 0x3c
	// Line 420, Address: 0x1b1840, Func Offset: 0x40
	// Func End, Address: 0x1b1848, Func Offset: 0x48
}

// 
// Start address: 0x1b1850
int GameItemIsConsume(GameItem kind)
{
	// Line 426, Address: 0x1b1854, Func Offset: 0x4
	// Line 427, Address: 0x1b1870, Func Offset: 0x20
	// Func End, Address: 0x1b1878, Func Offset: 0x28
}

// 
// Start address: 0x1b1880
int GameItemIsKey(GameItem kind)
{
	// Line 433, Address: 0x1b1884, Func Offset: 0x4
	// Line 434, Address: 0x1b18a0, Func Offset: 0x20
	// Func End, Address: 0x1b18a8, Func Offset: 0x28
}

// 
// Start address: 0x1b18b0
int GameItemIsMemo(GameItem kind)
{
	// Line 440, Address: 0x1b18b4, Func Offset: 0x4
	// Line 441, Address: 0x1b18d0, Func Offset: 0x20
	// Func End, Address: 0x1b18d8, Func Offset: 0x28
}

// 
// Start address: 0x1b18e0
int GameItemIsEileensWeapon(GameItem kind)
{
	// Line 447, Address: 0x1b18e4, Func Offset: 0x4
	// Line 448, Address: 0x1b1900, Func Offset: 0x20
	// Func End, Address: 0x1b1908, Func Offset: 0x28
}

// 
// Start address: 0x1b1910
_enum_0 GameItemGetAttr(GameItem kind)
{
	_enum_0 rtv;
	// Line 453, Address: 0x1b1910, Func Offset: 0
	// Line 456, Address: 0x1b1924, Func Offset: 0x14
	// Line 458, Address: 0x1b192c, Func Offset: 0x1c
	// Line 459, Address: 0x1b1938, Func Offset: 0x28
	// Line 461, Address: 0x1b1948, Func Offset: 0x38
	// Line 462, Address: 0x1b1950, Func Offset: 0x40
	// Line 464, Address: 0x1b1960, Func Offset: 0x50
	// Line 465, Address: 0x1b1968, Func Offset: 0x58
	// Line 467, Address: 0x1b197c, Func Offset: 0x6c
	// Line 468, Address: 0x1b1988, Func Offset: 0x78
	// Line 470, Address: 0x1b199c, Func Offset: 0x8c
	// Line 471, Address: 0x1b19a8, Func Offset: 0x98
	// Line 473, Address: 0x1b19b8, Func Offset: 0xa8
	// Line 476, Address: 0x1b19c0, Func Offset: 0xb0
	// Line 477, Address: 0x1b19c4, Func Offset: 0xb4
	// Line 479, Address: 0x1b19c8, Func Offset: 0xb8
	// Func End, Address: 0x1b19dc, Func Offset: 0xcc
}

// 
// Start address: 0x1b19e0
void item_possession_sort(int empty_num)
{
	int from_num;
	int to_num;
	int i;
	// Line 492, Address: 0x1b19e0, Func Offset: 0
	// Line 493, Address: 0x1b1a08, Func Offset: 0x28
	// Line 496, Address: 0x1b1a14, Func Offset: 0x34
	// Line 497, Address: 0x1b1a2c, Func Offset: 0x4c
	// Line 499, Address: 0x1b1a40, Func Offset: 0x60
	// Line 501, Address: 0x1b1a70, Func Offset: 0x90
	// Line 500, Address: 0x1b1a74, Func Offset: 0x94
	// Line 501, Address: 0x1b1a78, Func Offset: 0x98
	// Line 500, Address: 0x1b1a7c, Func Offset: 0x9c
	// Line 501, Address: 0x1b1a88, Func Offset: 0xa8
	// Line 502, Address: 0x1b1a90, Func Offset: 0xb0
	// Func End, Address: 0x1b1a98, Func Offset: 0xb8
}

// 
// Start address: 0x1b1aa0
void GameItemInit()
{
	int i;
	// Line 508, Address: 0x1b1aa0, Func Offset: 0
	// Line 510, Address: 0x1b1aa4, Func Offset: 0x4
	// Line 508, Address: 0x1b1aa8, Func Offset: 0x8
	// Line 510, Address: 0x1b1aac, Func Offset: 0xc
	// Line 511, Address: 0x1b1ab8, Func Offset: 0x18
	// Line 513, Address: 0x1b1ac4, Func Offset: 0x24
	// Line 514, Address: 0x1b1ae8, Func Offset: 0x48
	// Line 516, Address: 0x1b1b48, Func Offset: 0xa8
	// Line 517, Address: 0x1b1b68, Func Offset: 0xc8
	// Line 519, Address: 0x1b1bf8, Func Offset: 0x158
	// Func End, Address: 0x1b1c04, Func Offset: 0x164
}

// 
// Start address: 0x1b1c10
int GameItemCheckPossessionFull()
{
	int i;
	// Line 527, Address: 0x1b1c10, Func Offset: 0
	// Line 528, Address: 0x1b1c20, Func Offset: 0x10
	// Line 529, Address: 0x1b1c34, Func Offset: 0x24
	// Line 530, Address: 0x1b1c48, Func Offset: 0x38
	// Line 531, Address: 0x1b1c50, Func Offset: 0x40
	// Func End, Address: 0x1b1c58, Func Offset: 0x48
}

// 
// Start address: 0x1b1c60
int GameItemCheckBoxFull(GameItem kind, int add_num)
{
	int i;
	int rtv;
	int sum;
	// Line 539, Address: 0x1b1c60, Func Offset: 0
	// Line 554, Address: 0x1b1c64, Func Offset: 0x4
	// Line 539, Address: 0x1b1c68, Func Offset: 0x8
	// Line 554, Address: 0x1b1c78, Func Offset: 0x18
	// Line 556, Address: 0x1b1c90, Func Offset: 0x30
	// Line 558, Address: 0x1b1c94, Func Offset: 0x34
	// Line 559, Address: 0x1b1cb0, Func Offset: 0x50
	// Line 560, Address: 0x1b1cbc, Func Offset: 0x5c
	// Line 562, Address: 0x1b1cc4, Func Offset: 0x64
	// Line 564, Address: 0x1b1cd8, Func Offset: 0x78
	// Line 565, Address: 0x1b1cdc, Func Offset: 0x7c
	// Line 566, Address: 0x1b1ce0, Func Offset: 0x80
	// Line 571, Address: 0x1b1ce8, Func Offset: 0x88
	// Line 576, Address: 0x1b1cf8, Func Offset: 0x98
	// Func End, Address: 0x1b1d0c, Func Offset: 0xac
}

// 
// Start address: 0x1b1d10
int GameItemSearchItem(GameItem kind)
{
	int n;
	// Line 586, Address: 0x1b1d10, Func Offset: 0
	// Line 587, Address: 0x1b1d20, Func Offset: 0x10
	// Line 588, Address: 0x1b1d2c, Func Offset: 0x1c
	// Line 590, Address: 0x1b1d34, Func Offset: 0x24
	// Line 591, Address: 0x1b1d48, Func Offset: 0x38
	// Line 592, Address: 0x1b1d50, Func Offset: 0x40
	// Func End, Address: 0x1b1d58, Func Offset: 0x48
}

// 
// Start address: 0x1b1d60
int GameItemGetIndex(GameItem kind)
{
	int n;
	int add_no;
	int new_item;
	int possess_item;
	// Line 599, Address: 0x1b1d60, Func Offset: 0
	// Line 600, Address: 0x1b1d74, Func Offset: 0x14
	// Line 599, Address: 0x1b1d78, Func Offset: 0x18
	// Line 602, Address: 0x1b1d7c, Func Offset: 0x1c
	// Line 603, Address: 0x1b1d88, Func Offset: 0x28
	// Line 604, Address: 0x1b1da0, Func Offset: 0x40
	// Line 606, Address: 0x1b1da8, Func Offset: 0x48
	// Line 607, Address: 0x1b1db4, Func Offset: 0x54
	// Line 609, Address: 0x1b1db8, Func Offset: 0x58
	// Line 610, Address: 0x1b1dd0, Func Offset: 0x70
	// Line 611, Address: 0x1b1de0, Func Offset: 0x80
	// Line 612, Address: 0x1b1de8, Func Offset: 0x88
	// Func End, Address: 0x1b1e04, Func Offset: 0xa4
}

// 
// Start address: 0x1b1e10
int GameItemGet(GameItem kind)
{
	int i;
	int n;
	int add_no;
	float durability;
	// Line 620, Address: 0x1b1e10, Func Offset: 0
	// Line 623, Address: 0x1b1e14, Func Offset: 0x4
	// Line 620, Address: 0x1b1e18, Func Offset: 0x8
	// Line 623, Address: 0x1b1e28, Func Offset: 0x18
	// Line 625, Address: 0x1b1e2c, Func Offset: 0x1c
	// Line 629, Address: 0x1b1e3c, Func Offset: 0x2c
	// Line 630, Address: 0x1b1e44, Func Offset: 0x34
	// Line 632, Address: 0x1b1e48, Func Offset: 0x38
	// Line 633, Address: 0x1b1e54, Func Offset: 0x44
	// Line 634, Address: 0x1b1e60, Func Offset: 0x50
	// Line 638, Address: 0x1b1e68, Func Offset: 0x58
	// Line 639, Address: 0x1b1e90, Func Offset: 0x80
	// Line 640, Address: 0x1b1f38, Func Offset: 0x128
	// Line 639, Address: 0x1b1f3c, Func Offset: 0x12c
	// Line 640, Address: 0x1b1f40, Func Offset: 0x130
	// Line 639, Address: 0x1b1f44, Func Offset: 0x134
	// Line 640, Address: 0x1b1f50, Func Offset: 0x140
	// Line 643, Address: 0x1b1f58, Func Offset: 0x148
	// Line 644, Address: 0x1b1f60, Func Offset: 0x150
	// Line 645, Address: 0x1b1f6c, Func Offset: 0x15c
	// Line 646, Address: 0x1b1f7c, Func Offset: 0x16c
	// Line 647, Address: 0x1b1f80, Func Offset: 0x170
	// Line 648, Address: 0x1b1f84, Func Offset: 0x174
	// Line 647, Address: 0x1b1f8c, Func Offset: 0x17c
	// Line 648, Address: 0x1b1f90, Func Offset: 0x180
	// Line 647, Address: 0x1b1f94, Func Offset: 0x184
	// Line 648, Address: 0x1b1f98, Func Offset: 0x188
	// Line 647, Address: 0x1b1f9c, Func Offset: 0x18c
	// Line 649, Address: 0x1b1fa0, Func Offset: 0x190
	// Line 650, Address: 0x1b1fb0, Func Offset: 0x1a0
	// Line 649, Address: 0x1b1fb4, Func Offset: 0x1a4
	// Line 650, Address: 0x1b1fb8, Func Offset: 0x1a8
	// Line 649, Address: 0x1b1fbc, Func Offset: 0x1ac
	// Line 650, Address: 0x1b1fc0, Func Offset: 0x1b0
	// Line 649, Address: 0x1b1fc4, Func Offset: 0x1b4
	// Line 650, Address: 0x1b1fc8, Func Offset: 0x1b8
	// Line 652, Address: 0x1b1fcc, Func Offset: 0x1bc
	// Line 653, Address: 0x1b1fd0, Func Offset: 0x1c0
	// Func End, Address: 0x1b1fe8, Func Offset: 0x1d8
}

// 
// Start address: 0x1b1ff0
int GameItemPossessionNumberAll()
{
	int i;
	int n;
	// Line 662, Address: 0x1b1ff0, Func Offset: 0
	// Line 661, Address: 0x1b1ff4, Func Offset: 0x4
	// Line 662, Address: 0x1b1ff8, Func Offset: 0x8
	// Line 663, Address: 0x1b2000, Func Offset: 0x10
	// Line 664, Address: 0x1b200c, Func Offset: 0x1c
	// Line 666, Address: 0x1b2010, Func Offset: 0x20
	// Line 668, Address: 0x1b2020, Func Offset: 0x30
	// Func End, Address: 0x1b2028, Func Offset: 0x38
}

// 
// Start address: 0x1b2030
GameItem GameItemPossessionKind(int num)
{
	// Line 676, Address: 0x1b2030, Func Offset: 0
	// Line 677, Address: 0x1b2040, Func Offset: 0x10
	// Func End, Address: 0x1b2048, Func Offset: 0x18
}

// 
// Start address: 0x1b2050
int GameItemPossessionNumber(int num)
{
	// Line 690, Address: 0x1b2050, Func Offset: 0
	// Line 691, Address: 0x1b2060, Func Offset: 0x10
	// Line 695, Address: 0x1b2068, Func Offset: 0x18
	// Line 699, Address: 0x1b2080, Func Offset: 0x30
	// Func End, Address: 0x1b2088, Func Offset: 0x38
}

// 
// Start address: 0x1b2090
int GameItemPossessionNumberSum(GameItem kind)
{
	int i;
	int n;
	int num;
	// Line 709, Address: 0x1b2094, Func Offset: 0x4
	// Line 710, Address: 0x1b209c, Func Offset: 0xc
	// Line 713, Address: 0x1b20a8, Func Offset: 0x18
	// Line 711, Address: 0x1b20b0, Func Offset: 0x20
	// Line 713, Address: 0x1b20bc, Func Offset: 0x2c
	// Line 715, Address: 0x1b20d0, Func Offset: 0x40
	// Line 716, Address: 0x1b20d4, Func Offset: 0x44
	// Line 717, Address: 0x1b20d8, Func Offset: 0x48
	// Line 719, Address: 0x1b20dc, Func Offset: 0x4c
	// Line 722, Address: 0x1b20f0, Func Offset: 0x60
	// Func End, Address: 0x1b20f8, Func Offset: 0x68
}

// 
// Start address: 0x1b2100
float GameItemGetRecoveryValue(GameItem kind)
{
	float rtv;
	int i;
	// Line 733, Address: 0x1b2104, Func Offset: 0x4
	// Line 730, Address: 0x1b210c, Func Offset: 0xc
	// Line 733, Address: 0x1b2110, Func Offset: 0x10
	// Line 734, Address: 0x1b2118, Func Offset: 0x18
	// Line 735, Address: 0x1b2124, Func Offset: 0x24
	// Line 736, Address: 0x1b2130, Func Offset: 0x30
	// Line 738, Address: 0x1b2138, Func Offset: 0x38
	// Line 740, Address: 0x1b2148, Func Offset: 0x48
	// Func End, Address: 0x1b2150, Func Offset: 0x50
}

// 
// Start address: 0x1b2150
float GameItemDurability(GameItem kind)
{
	int num;
	float rtv;
	int n;
	// Line 749, Address: 0x1b2150, Func Offset: 0
	// Line 758, Address: 0x1b2160, Func Offset: 0x10
	// Line 759, Address: 0x1b2168, Func Offset: 0x18
	// Line 761, Address: 0x1b216c, Func Offset: 0x1c
	// Line 762, Address: 0x1b2178, Func Offset: 0x28
	// Line 763, Address: 0x1b2184, Func Offset: 0x34
	// Line 764, Address: 0x1b218c, Func Offset: 0x3c
	// Line 765, Address: 0x1b2198, Func Offset: 0x48
	// Line 767, Address: 0x1b21a4, Func Offset: 0x54
	// Line 769, Address: 0x1b21b0, Func Offset: 0x60
	// Line 771, Address: 0x1b21c4, Func Offset: 0x74
	// Line 774, Address: 0x1b21c8, Func Offset: 0x78
	// Line 772, Address: 0x1b21cc, Func Offset: 0x7c
	// Line 774, Address: 0x1b21d0, Func Offset: 0x80
	// Func End, Address: 0x1b21e0, Func Offset: 0x90
}

// 
// Start address: 0x1b21e0
float GameItemDurabilityByNum(int num)
{
	// Line 790, Address: 0x1b21e0, Func Offset: 0
	// Line 791, Address: 0x1b21f0, Func Offset: 0x10
	// Line 792, Address: 0x1b2204, Func Offset: 0x24
	// Line 793, Address: 0x1b2208, Func Offset: 0x28
	// Line 795, Address: 0x1b2210, Func Offset: 0x30
	// Func End, Address: 0x1b2218, Func Offset: 0x38
}

// 
// Start address: 0x1b2220
float dec_durability_value(GameItem kind)
{
	float val;
	int n;
	// Line 802, Address: 0x1b2220, Func Offset: 0
	// Line 805, Address: 0x1b2224, Func Offset: 0x4
	// Line 803, Address: 0x1b2228, Func Offset: 0x8
	// Line 805, Address: 0x1b222c, Func Offset: 0xc
	// Line 807, Address: 0x1b2238, Func Offset: 0x18
	// Line 808, Address: 0x1b2240, Func Offset: 0x20
	// Line 810, Address: 0x1b2248, Func Offset: 0x28
	// Line 812, Address: 0x1b2250, Func Offset: 0x30
	// Line 813, Address: 0x1b2260, Func Offset: 0x40
	// Line 818, Address: 0x1b2270, Func Offset: 0x50
	// Func End, Address: 0x1b227c, Func Offset: 0x5c
}

// 
// Start address: 0x1b2280
void Broken(int pos)
{
	int n;
	GameItem kind;
	unsigned char after_broken[14];
	// Line 822, Address: 0x1b2280, Func Offset: 0
	// Line 842, Address: 0x1b2284, Func Offset: 0x4
	// Line 844, Address: 0x1b22a0, Func Offset: 0x20
	// Line 845, Address: 0x1b22a8, Func Offset: 0x28
	// Line 848, Address: 0x1b22ac, Func Offset: 0x2c
	// Line 845, Address: 0x1b22b0, Func Offset: 0x30
	// Line 848, Address: 0x1b22bc, Func Offset: 0x3c
	// Line 849, Address: 0x1b22c4, Func Offset: 0x44
	// Line 850, Address: 0x1b22d0, Func Offset: 0x50
	// Line 851, Address: 0x1b22d8, Func Offset: 0x58
	// Line 853, Address: 0x1b22e0, Func Offset: 0x60
	// Line 864, Address: 0x1b22f4, Func Offset: 0x74
	// Line 865, Address: 0x1b22f8, Func Offset: 0x78
	// Func End, Address: 0x1b2304, Func Offset: 0x84
}

// 
// Start address: 0x1b2310
float GameItemDecreaseDurability(GameItem kind)
{
	int num;
	float dec_val;
	// Line 874, Address: 0x1b2310, Func Offset: 0
	// Line 881, Address: 0x1b2314, Func Offset: 0x4
	// Line 874, Address: 0x1b2318, Func Offset: 0x8
	// Line 881, Address: 0x1b231c, Func Offset: 0xc
	// Line 874, Address: 0x1b2320, Func Offset: 0x10
	// Line 881, Address: 0x1b232c, Func Offset: 0x1c
	// Line 884, Address: 0x1b2350, Func Offset: 0x40
	// Line 885, Address: 0x1b2384, Func Offset: 0x74
	// Line 887, Address: 0x1b239c, Func Offset: 0x8c
	// Line 889, Address: 0x1b23a0, Func Offset: 0x90
	// Line 887, Address: 0x1b23a8, Func Offset: 0x98
	// Line 889, Address: 0x1b23ac, Func Offset: 0x9c
	// Line 890, Address: 0x1b23b8, Func Offset: 0xa8
	// Line 894, Address: 0x1b23bc, Func Offset: 0xac
	// Line 895, Address: 0x1b23c4, Func Offset: 0xb4
	// Line 896, Address: 0x1b23c8, Func Offset: 0xb8
	// Line 898, Address: 0x1b23d0, Func Offset: 0xc0
	// Line 899, Address: 0x1b23d8, Func Offset: 0xc8
	// Func End, Address: 0x1b23f0, Func Offset: 0xe0
}

// 
// Start address: 0x1b23f0
int GameItemWeaponEquip(int num)
{
	GameItem kind;
	// Line 932, Address: 0x1b23f0, Func Offset: 0
	// Line 934, Address: 0x1b2404, Func Offset: 0x14
	// Line 937, Address: 0x1b2418, Func Offset: 0x28
	// Line 939, Address: 0x1b2420, Func Offset: 0x30
	// Line 940, Address: 0x1b2428, Func Offset: 0x38
	// Func End, Address: 0x1b2430, Func Offset: 0x40
}

// 
// Start address: 0x1b2430
int GameItemSaintMedallionEquip(int num)
{
	int rtv;
	int i;
	GameItem kind;
	// Line 951, Address: 0x1b2430, Func Offset: 0
	// Line 953, Address: 0x1b2444, Func Offset: 0x14
	// Line 954, Address: 0x1b2450, Func Offset: 0x20
	// Line 956, Address: 0x1b245c, Func Offset: 0x2c
	// Line 958, Address: 0x1b2460, Func Offset: 0x30
	// Line 963, Address: 0x1b246c, Func Offset: 0x3c
	// Line 961, Address: 0x1b2470, Func Offset: 0x40
	// Line 958, Address: 0x1b2474, Func Offset: 0x44
	// Line 959, Address: 0x1b2478, Func Offset: 0x48
	// Line 961, Address: 0x1b247c, Func Offset: 0x4c
	// Line 962, Address: 0x1b2484, Func Offset: 0x54
	// Line 964, Address: 0x1b248c, Func Offset: 0x5c
	// Line 966, Address: 0x1b2498, Func Offset: 0x68
	// Line 969, Address: 0x1b249c, Func Offset: 0x6c
	// Line 972, Address: 0x1b24b0, Func Offset: 0x80
	// Func End, Address: 0x1b24b8, Func Offset: 0x88
}

// 
// Start address: 0x1b24c0
void GameItemSaintMedallionUnequip()
{
	int i;
	// Line 981, Address: 0x1b24c0, Func Offset: 0
	// Line 983, Address: 0x1b24c4, Func Offset: 0x4
	// Line 981, Address: 0x1b24c8, Func Offset: 0x8
	// Line 983, Address: 0x1b24cc, Func Offset: 0xc
	// Line 984, Address: 0x1b24d4, Func Offset: 0x14
	// Line 985, Address: 0x1b24e4, Func Offset: 0x24
	// Line 987, Address: 0x1b24e8, Func Offset: 0x28
	// Line 988, Address: 0x1b24f8, Func Offset: 0x38
	// Func End, Address: 0x1b2500, Func Offset: 0x40
}

// 
// Start address: 0x1b2500
int GameItemIsEquipSaintMedallion()
{
	// Line 995, Address: 0x1b2500, Func Offset: 0
	// Line 996, Address: 0x1b2504, Func Offset: 0x4
	// Func End, Address: 0x1b250c, Func Offset: 0xc
}

// 
// Start address: 0x1b2510
int GameItemGetEquipedSaintMedallionNumber()
{
	int i;
	// Line 1006, Address: 0x1b2510, Func Offset: 0
	// Line 1007, Address: 0x1b251c, Func Offset: 0xc
	// Line 1009, Address: 0x1b2538, Func Offset: 0x28
	// Line 1011, Address: 0x1b2540, Func Offset: 0x30
	// Line 1013, Address: 0x1b2550, Func Offset: 0x40
	// Line 1014, Address: 0x1b2558, Func Offset: 0x48
	// Func End, Address: 0x1b2560, Func Offset: 0x50
}

// 
// Start address: 0x1b2560
void GameItemWeaponUnequip()
{
	// Line 1022, Address: 0x1b2560, Func Offset: 0
	// Func End, Address: 0x1b2568, Func Offset: 0x8
}

// 
// Start address: 0x1b2570
int GameItemErase(int num)
{
	GameItem kind;
	// Line 1031, Address: 0x1b2570, Func Offset: 0
	// Line 1034, Address: 0x1b2588, Func Offset: 0x18
	// Line 1036, Address: 0x1b25a8, Func Offset: 0x38
	// Line 1038, Address: 0x1b25b0, Func Offset: 0x40
	// Line 1039, Address: 0x1b25c4, Func Offset: 0x54
	// Line 1040, Address: 0x1b25c8, Func Offset: 0x58
	// Line 1041, Address: 0x1b25dc, Func Offset: 0x6c
	// Line 1044, Address: 0x1b25fc, Func Offset: 0x8c
	// Line 1045, Address: 0x1b2604, Func Offset: 0x94
	// Line 1047, Address: 0x1b260c, Func Offset: 0x9c
	// Line 1048, Address: 0x1b2610, Func Offset: 0xa0
	// Line 1049, Address: 0x1b2618, Func Offset: 0xa8
	// Func End, Address: 0x1b2624, Func Offset: 0xb4
}

// 
// Start address: 0x1b2630
int GameItemRob(int num)
{
	// Line 1079, Address: 0x1b2630, Func Offset: 0
	// Func End, Address: 0x1b2638, Func Offset: 0x8
}

// 
// Start address: 0x1b2640
_enum_1 GameItemUseItem(int num)
{
	_enum_1 rtv;
	GameItem kind;
	// Line 1138, Address: 0x1b2640, Func Offset: 0
	// Line 1140, Address: 0x1b2644, Func Offset: 0x4
	// Line 1138, Address: 0x1b2648, Func Offset: 0x8
	// Line 1140, Address: 0x1b264c, Func Offset: 0xc
	// Line 1138, Address: 0x1b2650, Func Offset: 0x10
	// Line 1140, Address: 0x1b2654, Func Offset: 0x14
	// Line 1138, Address: 0x1b2658, Func Offset: 0x18
	// Line 1140, Address: 0x1b265c, Func Offset: 0x1c
	// Line 1142, Address: 0x1b2664, Func Offset: 0x24
	// Line 1143, Address: 0x1b266c, Func Offset: 0x2c
	// Line 1146, Address: 0x1b267c, Func Offset: 0x3c
	// Line 1147, Address: 0x1b2688, Func Offset: 0x48
	// Line 1150, Address: 0x1b2698, Func Offset: 0x58
	// Line 1151, Address: 0x1b26a0, Func Offset: 0x60
	// Line 1154, Address: 0x1b26b0, Func Offset: 0x70
	// Line 1155, Address: 0x1b26b8, Func Offset: 0x78
	// Line 1156, Address: 0x1b26c8, Func Offset: 0x88
	// Line 1159, Address: 0x1b26d4, Func Offset: 0x94
	// Line 1162, Address: 0x1b26e0, Func Offset: 0xa0
	// Line 1165, Address: 0x1b26e4, Func Offset: 0xa4
	// Line 1186, Address: 0x1b26e8, Func Offset: 0xa8
	// Line 1187, Address: 0x1b26ec, Func Offset: 0xac
	// Func End, Address: 0x1b2700, Func Offset: 0xc0
}

// 
// Start address: 0x1b2700
GameItem GameItemHandgunAmmoKind()
{
	// Line 1195, Address: 0x1b2700, Func Offset: 0
	// Line 1196, Address: 0x1b2704, Func Offset: 0x4
	// Func End, Address: 0x1b270c, Func Offset: 0xc
}

// 
// Start address: 0x1b2710
int GameItemEquipHandgunAmmo(int num)
{
	int hn;
	int n;
	int kind;
	// Line 1203, Address: 0x1b2710, Func Offset: 0
	// Line 1207, Address: 0x1b2714, Func Offset: 0x4
	// Line 1203, Address: 0x1b2718, Func Offset: 0x8
	// Line 1207, Address: 0x1b271c, Func Offset: 0xc
	// Line 1208, Address: 0x1b2738, Func Offset: 0x28
	// Line 1209, Address: 0x1b2748, Func Offset: 0x38
	// Line 1211, Address: 0x1b2750, Func Offset: 0x40
	// Line 1213, Address: 0x1b2774, Func Offset: 0x64
	// Line 1219, Address: 0x1b2780, Func Offset: 0x70
	// Line 1213, Address: 0x1b2784, Func Offset: 0x74
	// Line 1219, Address: 0x1b2788, Func Offset: 0x78
	// Line 1220, Address: 0x1b278c, Func Offset: 0x7c
	// Line 1221, Address: 0x1b2798, Func Offset: 0x88
	// Line 1222, Address: 0x1b27a0, Func Offset: 0x90
	// Line 1223, Address: 0x1b27a8, Func Offset: 0x98
	// Line 1225, Address: 0x1b27c8, Func Offset: 0xb8
	// Line 1227, Address: 0x1b27d0, Func Offset: 0xc0
	// Line 1228, Address: 0x1b27d4, Func Offset: 0xc4
	// Line 1229, Address: 0x1b27d8, Func Offset: 0xc8
	// Line 1228, Address: 0x1b27dc, Func Offset: 0xcc
	// Line 1230, Address: 0x1b27e0, Func Offset: 0xd0
	// Func End, Address: 0x1b27ec, Func Offset: 0xdc
}

// 
// Start address: 0x1b27f0
int GameItemIsReloadable(GameItem gun_kind, GameItem bullet)
{
	int rtv;
	int is_silver_bullet_ok;
	int menu_id;
	int bullet_sum;
	int rest;
	int def_num;
	// Line 1237, Address: 0x1b27f0, Func Offset: 0
	// Line 1238, Address: 0x1b2810, Func Offset: 0x20
	// Line 1237, Address: 0x1b2814, Func Offset: 0x24
	// Line 1241, Address: 0x1b281c, Func Offset: 0x2c
	// Line 1242, Address: 0x1b2828, Func Offset: 0x38
	// Line 1245, Address: 0x1b2830, Func Offset: 0x40
	// Line 1247, Address: 0x1b283c, Func Offset: 0x4c
	// Line 1248, Address: 0x1b2844, Func Offset: 0x54
	// Line 1249, Address: 0x1b2848, Func Offset: 0x58
	// Line 1251, Address: 0x1b2850, Func Offset: 0x60
	// Line 1255, Address: 0x1b2858, Func Offset: 0x68
	// Line 1257, Address: 0x1b2868, Func Offset: 0x78
	// Line 1258, Address: 0x1b2888, Func Offset: 0x98
	// Line 1262, Address: 0x1b28a0, Func Offset: 0xb0
	// Line 1264, Address: 0x1b28a4, Func Offset: 0xb4
	// Line 1266, Address: 0x1b28a8, Func Offset: 0xb8
	// Line 1269, Address: 0x1b28b0, Func Offset: 0xc0
	// Line 1271, Address: 0x1b28b8, Func Offset: 0xc8
	// Line 1273, Address: 0x1b28c4, Func Offset: 0xd4
	// Line 1274, Address: 0x1b28d0, Func Offset: 0xe0
	// Line 1277, Address: 0x1b28d8, Func Offset: 0xe8
	// Line 1282, Address: 0x1b28fc, Func Offset: 0x10c
	// Line 1285, Address: 0x1b2908, Func Offset: 0x118
	// Line 1286, Address: 0x1b2914, Func Offset: 0x124
	// Line 1291, Address: 0x1b2918, Func Offset: 0x128
	// Line 1292, Address: 0x1b2920, Func Offset: 0x130
	// Func End, Address: 0x1b2944, Func Offset: 0x154
}

// 
// Start address: 0x1b2950
int GameItemIsAmmoEmpty(GameItem kind)
{
	int rtv;
	int item_no;
	// Line 1300, Address: 0x1b2950, Func Offset: 0
	// Line 1304, Address: 0x1b2964, Func Offset: 0x14
	// Line 1305, Address: 0x1b2978, Func Offset: 0x28
	// Line 1306, Address: 0x1b2980, Func Offset: 0x30
	// Line 1309, Address: 0x1b298c, Func Offset: 0x3c
	// Line 1310, Address: 0x1b29a0, Func Offset: 0x50
	// Line 1311, Address: 0x1b29ac, Func Offset: 0x5c
	// Line 1313, Address: 0x1b29c4, Func Offset: 0x74
	// Line 1315, Address: 0x1b29c8, Func Offset: 0x78
	// Line 1316, Address: 0x1b29cc, Func Offset: 0x7c
	// Func End, Address: 0x1b29e0, Func Offset: 0x90
}

// 
// Start address: 0x1b29e0
int GameItemReloadHandgunAmmo(int num)
{
	int hn;
	int m;
	// Line 1324, Address: 0x1b29e0, Func Offset: 0
	// Line 1326, Address: 0x1b29f4, Func Offset: 0x14
	// Line 1327, Address: 0x1b29fc, Func Offset: 0x1c
	// Line 1328, Address: 0x1b2a00, Func Offset: 0x20
	// Line 1329, Address: 0x1b2a18, Func Offset: 0x38
	// Line 1330, Address: 0x1b2a28, Func Offset: 0x48
	// Line 1332, Address: 0x1b2a30, Func Offset: 0x50
	// Line 1333, Address: 0x1b2a3c, Func Offset: 0x5c
	// Line 1334, Address: 0x1b2a48, Func Offset: 0x68
	// Line 1333, Address: 0x1b2a54, Func Offset: 0x74
	// Line 1334, Address: 0x1b2a58, Func Offset: 0x78
	// Line 1333, Address: 0x1b2a5c, Func Offset: 0x7c
	// Line 1334, Address: 0x1b2a60, Func Offset: 0x80
	// Line 1335, Address: 0x1b2a6c, Func Offset: 0x8c
	// Line 1337, Address: 0x1b2a7c, Func Offset: 0x9c
	// Line 1340, Address: 0x1b2a80, Func Offset: 0xa0
	// Line 1341, Address: 0x1b2aa0, Func Offset: 0xc0
	// Line 1342, Address: 0x1b2ab0, Func Offset: 0xd0
	// Line 1344, Address: 0x1b2ab8, Func Offset: 0xd8
	// Line 1346, Address: 0x1b2ac8, Func Offset: 0xe8
	// Line 1347, Address: 0x1b2ae4, Func Offset: 0x104
	// Line 1348, Address: 0x1b2b04, Func Offset: 0x124
	// Line 1351, Address: 0x1b2b14, Func Offset: 0x134
	// Line 1349, Address: 0x1b2b18, Func Offset: 0x138
	// Line 1351, Address: 0x1b2b1c, Func Offset: 0x13c
	// Line 1353, Address: 0x1b2b34, Func Offset: 0x154
	// Line 1351, Address: 0x1b2b38, Func Offset: 0x158
	// Line 1353, Address: 0x1b2b3c, Func Offset: 0x15c
	// Line 1354, Address: 0x1b2b44, Func Offset: 0x164
	// Line 1355, Address: 0x1b2b50, Func Offset: 0x170
	// Line 1356, Address: 0x1b2b60, Func Offset: 0x180
	// Line 1357, Address: 0x1b2b64, Func Offset: 0x184
	// Line 1358, Address: 0x1b2b68, Func Offset: 0x188
	// Line 1359, Address: 0x1b2b70, Func Offset: 0x190
	// Func End, Address: 0x1b2b84, Func Offset: 0x1a4
}

// 
// Start address: 0x1b2b90
int GameItemReloadRevolverAmmo(int num)
{
	int hn;
	int m;
	// Line 1366, Address: 0x1b2b90, Func Offset: 0
	// Line 1368, Address: 0x1b2ba4, Func Offset: 0x14
	// Line 1370, Address: 0x1b2bac, Func Offset: 0x1c
	// Line 1371, Address: 0x1b2bc8, Func Offset: 0x38
	// Line 1372, Address: 0x1b2bd8, Func Offset: 0x48
	// Line 1374, Address: 0x1b2be0, Func Offset: 0x50
	// Line 1375, Address: 0x1b2bec, Func Offset: 0x5c
	// Line 1378, Address: 0x1b2bf0, Func Offset: 0x60
	// Line 1379, Address: 0x1b2c10, Func Offset: 0x80
	// Line 1380, Address: 0x1b2c20, Func Offset: 0x90
	// Line 1382, Address: 0x1b2c28, Func Offset: 0x98
	// Line 1384, Address: 0x1b2c38, Func Offset: 0xa8
	// Line 1385, Address: 0x1b2c54, Func Offset: 0xc4
	// Line 1386, Address: 0x1b2c74, Func Offset: 0xe4
	// Line 1389, Address: 0x1b2c84, Func Offset: 0xf4
	// Line 1387, Address: 0x1b2c88, Func Offset: 0xf8
	// Line 1389, Address: 0x1b2c8c, Func Offset: 0xfc
	// Line 1391, Address: 0x1b2ca4, Func Offset: 0x114
	// Line 1389, Address: 0x1b2ca8, Func Offset: 0x118
	// Line 1391, Address: 0x1b2cac, Func Offset: 0x11c
	// Line 1392, Address: 0x1b2cb4, Func Offset: 0x124
	// Line 1393, Address: 0x1b2cc0, Func Offset: 0x130
	// Line 1394, Address: 0x1b2cd0, Func Offset: 0x140
	// Line 1395, Address: 0x1b2cd4, Func Offset: 0x144
	// Line 1396, Address: 0x1b2cd8, Func Offset: 0x148
	// Line 1397, Address: 0x1b2ce0, Func Offset: 0x150
	// Func End, Address: 0x1b2cf4, Func Offset: 0x164
}

// 
// Start address: 0x1b2d00
void item_box_delete(int num)
{
	int i;
	int m;
	// Line 1408, Address: 0x1b2d00, Func Offset: 0
	// Line 1409, Address: 0x1b2d18, Func Offset: 0x18
	// Line 1411, Address: 0x1b2d30, Func Offset: 0x30
	// Line 1410, Address: 0x1b2d34, Func Offset: 0x34
	// Line 1411, Address: 0x1b2d38, Func Offset: 0x38
	// Line 1410, Address: 0x1b2d3c, Func Offset: 0x3c
	// Line 1411, Address: 0x1b2d48, Func Offset: 0x48
	// Line 1412, Address: 0x1b2d50, Func Offset: 0x50
	// Line 1413, Address: 0x1b2d74, Func Offset: 0x74
	// Func End, Address: 0x1b2d7c, Func Offset: 0x7c
}

// 
// Start address: 0x1b2d80
int GameItemExchangeWithBox(int p_num, int b_num)
{
	GameItem bkind;
	int i;
	_anon0 tmp;
	// Line 1520, Address: 0x1b2d80, Func Offset: 0
	// Line 1526, Address: 0x1b2d94, Func Offset: 0x14
	// Line 1520, Address: 0x1b2d98, Func Offset: 0x18
	// Line 1526, Address: 0x1b2db8, Func Offset: 0x38
	// Line 1528, Address: 0x1b2dc4, Func Offset: 0x44
	// Line 1530, Address: 0x1b2de0, Func Offset: 0x60
	// Line 1531, Address: 0x1b2de8, Func Offset: 0x68
	// Line 1532, Address: 0x1b2dfc, Func Offset: 0x7c
	// Line 1531, Address: 0x1b2e00, Func Offset: 0x80
	// Line 1533, Address: 0x1b2e0c, Func Offset: 0x8c
	// Line 1535, Address: 0x1b2e14, Func Offset: 0x94
	// Line 1558, Address: 0x1b2e38, Func Offset: 0xb8
	// Line 1557, Address: 0x1b2e3c, Func Offset: 0xbc
	// Line 1558, Address: 0x1b2e4c, Func Offset: 0xcc
	// Line 1566, Address: 0x1b2e58, Func Offset: 0xd8
	// Line 1569, Address: 0x1b2e68, Func Offset: 0xe8
	// Line 1568, Address: 0x1b2e70, Func Offset: 0xf0
	// Line 1569, Address: 0x1b2e80, Func Offset: 0x100
	// Line 1570, Address: 0x1b2e88, Func Offset: 0x108
	// Line 1568, Address: 0x1b2e98, Func Offset: 0x118
	// Line 1570, Address: 0x1b2e9c, Func Offset: 0x11c
	// Line 1569, Address: 0x1b2ea0, Func Offset: 0x120
	// Line 1570, Address: 0x1b2ea4, Func Offset: 0x124
	// Line 1572, Address: 0x1b2eb0, Func Offset: 0x130
	// Line 1573, Address: 0x1b2ed4, Func Offset: 0x154
	// Line 1577, Address: 0x1b2ee4, Func Offset: 0x164
	// Line 1579, Address: 0x1b2ef0, Func Offset: 0x170
	// Line 1582, Address: 0x1b2efc, Func Offset: 0x17c
	// Line 1579, Address: 0x1b2f00, Func Offset: 0x180
	// Line 1582, Address: 0x1b2f08, Func Offset: 0x188
	// Line 1584, Address: 0x1b2f20, Func Offset: 0x1a0
	// Line 1585, Address: 0x1b2f2c, Func Offset: 0x1ac
	// Line 1587, Address: 0x1b2f34, Func Offset: 0x1b4
	// Line 1589, Address: 0x1b2f48, Func Offset: 0x1c8
	// Line 1590, Address: 0x1b2f60, Func Offset: 0x1e0
	// Line 1591, Address: 0x1b2f68, Func Offset: 0x1e8
	// Line 1593, Address: 0x1b2f80, Func Offset: 0x200
	// Line 1592, Address: 0x1b2f84, Func Offset: 0x204
	// Line 1593, Address: 0x1b2f94, Func Offset: 0x214
	// Line 1594, Address: 0x1b2fa0, Func Offset: 0x220
	// Line 1595, Address: 0x1b2fb8, Func Offset: 0x238
	// Line 1596, Address: 0x1b2fc0, Func Offset: 0x240
	// Line 1597, Address: 0x1b2fec, Func Offset: 0x26c
	// Line 1598, Address: 0x1b2ff0, Func Offset: 0x270
	// Line 1599, Address: 0x1b2ff8, Func Offset: 0x278
	// Line 1601, Address: 0x1b3000, Func Offset: 0x280
	// Line 1598, Address: 0x1b3004, Func Offset: 0x284
	// Line 1599, Address: 0x1b3010, Func Offset: 0x290
	// Line 1601, Address: 0x1b301c, Func Offset: 0x29c
	// Line 1602, Address: 0x1b3024, Func Offset: 0x2a4
	// Line 1604, Address: 0x1b3030, Func Offset: 0x2b0
	// Line 1607, Address: 0x1b3058, Func Offset: 0x2d8
	// Line 1605, Address: 0x1b305c, Func Offset: 0x2dc
	// Line 1606, Address: 0x1b3060, Func Offset: 0x2e0
	// Line 1607, Address: 0x1b3064, Func Offset: 0x2e4
	// Line 1606, Address: 0x1b306c, Func Offset: 0x2ec
	// Line 1607, Address: 0x1b3070, Func Offset: 0x2f0
	// Line 1606, Address: 0x1b3074, Func Offset: 0x2f4
	// Line 1608, Address: 0x1b3078, Func Offset: 0x2f8
	// Line 1607, Address: 0x1b307c, Func Offset: 0x2fc
	// Line 1608, Address: 0x1b3080, Func Offset: 0x300
	// Line 1607, Address: 0x1b3084, Func Offset: 0x304
	// Line 1608, Address: 0x1b3088, Func Offset: 0x308
	// Line 1605, Address: 0x1b308c, Func Offset: 0x30c
	// Line 1607, Address: 0x1b3090, Func Offset: 0x310
	// Line 1606, Address: 0x1b3094, Func Offset: 0x314
	// Line 1610, Address: 0x1b3098, Func Offset: 0x318
	// Line 1607, Address: 0x1b309c, Func Offset: 0x31c
	// Line 1608, Address: 0x1b30a4, Func Offset: 0x324
	// Line 1610, Address: 0x1b30a8, Func Offset: 0x328
	// Line 1613, Address: 0x1b30b8, Func Offset: 0x338
	// Line 1614, Address: 0x1b30c0, Func Offset: 0x340
	// Line 1615, Address: 0x1b30c8, Func Offset: 0x348
	// Func End, Address: 0x1b30e8, Func Offset: 0x368
}

// 
// Start address: 0x1b30f0
float GameItemBoxDurabilityByNum(int num)
{
	// Line 1661, Address: 0x1b30f0, Func Offset: 0
	// Line 1662, Address: 0x1b3100, Func Offset: 0x10
	// Line 1663, Address: 0x1b3114, Func Offset: 0x24
	// Line 1664, Address: 0x1b3118, Func Offset: 0x28
	// Line 1665, Address: 0x1b3120, Func Offset: 0x30
	// Func End, Address: 0x1b3128, Func Offset: 0x38
}

// 
// Start address: 0x1b3130
int GameItemBoxToPossessionIndex(GameItem kind)
{
	// Line 1672, Address: 0x1b3130, Func Offset: 0
	// Line 1676, Address: 0x1b3134, Func Offset: 0x4
	// Line 1688, Address: 0x1b3150, Func Offset: 0x20
	// Func End, Address: 0x1b315c, Func Offset: 0x2c
}

// 
// Start address: 0x1b3160
int GameItemBoxToPossession(int box_num)
{
	GameItem kind;
	int index;
	int i;
	// Line 1695, Address: 0x1b3160, Func Offset: 0
	// Line 1706, Address: 0x1b316c, Func Offset: 0xc
	// Line 1707, Address: 0x1b3174, Func Offset: 0x14
	// Line 1710, Address: 0x1b317c, Func Offset: 0x1c
	// Line 1713, Address: 0x1b3190, Func Offset: 0x30
	// Line 1714, Address: 0x1b31b8, Func Offset: 0x58
	// Line 1715, Address: 0x1b3260, Func Offset: 0x100
	// Line 1714, Address: 0x1b3264, Func Offset: 0x104
	// Line 1715, Address: 0x1b3268, Func Offset: 0x108
	// Line 1714, Address: 0x1b326c, Func Offset: 0x10c
	// Line 1715, Address: 0x1b3278, Func Offset: 0x118
	// Line 1716, Address: 0x1b3280, Func Offset: 0x120
	// Line 1719, Address: 0x1b3290, Func Offset: 0x130
	// Line 1716, Address: 0x1b3294, Func Offset: 0x134
	// Line 1719, Address: 0x1b3298, Func Offset: 0x138
	// Line 1716, Address: 0x1b329c, Func Offset: 0x13c
	// Line 1719, Address: 0x1b32ac, Func Offset: 0x14c
	// Line 1721, Address: 0x1b32b8, Func Offset: 0x158
	// Func End, Address: 0x1b32c8, Func Offset: 0x168
}

// 
// Start address: 0x1b32d0
int GameItemPossessionToBoxIndex(int poss_num)
{
	int box_num;
	GameItem kind;
	// Line 1726, Address: 0x1b32d0, Func Offset: 0
	// Line 1728, Address: 0x1b32d8, Func Offset: 0x8
	// Line 1731, Address: 0x1b32e0, Func Offset: 0x10
	// Line 1748, Address: 0x1b32f8, Func Offset: 0x28
	// Line 1749, Address: 0x1b3308, Func Offset: 0x38
	// Line 1750, Address: 0x1b331c, Func Offset: 0x4c
	// Line 1751, Address: 0x1b3330, Func Offset: 0x60
	// Line 1755, Address: 0x1b3338, Func Offset: 0x68
	// Func End, Address: 0x1b3344, Func Offset: 0x74
}

// 
// Start address: 0x1b3350
int GameItemPossessionToBox(int poss_num)
{
	int box_num;
	// Line 1762, Address: 0x1b3350, Func Offset: 0
	// Line 1765, Address: 0x1b335c, Func Offset: 0xc
	// Line 1767, Address: 0x1b3364, Func Offset: 0x14
	// Line 1771, Address: 0x1b3380, Func Offset: 0x30
	// Func End, Address: 0x1b3390, Func Offset: 0x40
}

// 
// Start address: 0x1b3390
int GameItemBoxGet(GameItem kind)
{
	_anon0 tmp;
	int n;
	float durability;
	// Line 1780, Address: 0x1b3390, Func Offset: 0
	// Line 1794, Address: 0x1b33a0, Func Offset: 0x10
	// Line 1795, Address: 0x1b33a8, Func Offset: 0x18
	// Line 1797, Address: 0x1b33ac, Func Offset: 0x1c
	// Line 1795, Address: 0x1b33b0, Func Offset: 0x20
	// Line 1797, Address: 0x1b33b4, Func Offset: 0x24
	// Line 1798, Address: 0x1b33bc, Func Offset: 0x2c
	// Line 1799, Address: 0x1b33cc, Func Offset: 0x3c
	// Line 1802, Address: 0x1b33d0, Func Offset: 0x40
	// Line 1800, Address: 0x1b33d4, Func Offset: 0x44
	// Line 1801, Address: 0x1b33d8, Func Offset: 0x48
	// Line 1802, Address: 0x1b33dc, Func Offset: 0x4c
	// Line 1803, Address: 0x1b33e8, Func Offset: 0x58
	// Line 1805, Address: 0x1b33ec, Func Offset: 0x5c
	// Line 1807, Address: 0x1b3408, Func Offset: 0x78
	// Line 1810, Address: 0x1b343c, Func Offset: 0xac
	// Line 1812, Address: 0x1b3444, Func Offset: 0xb4
	// Line 1813, Address: 0x1b3448, Func Offset: 0xb8
	// Func End, Address: 0x1b345c, Func Offset: 0xcc
}

// 
// Start address: 0x1b3460
void item_box_sort()
{
	int i;
	int j;
	_anon0* a;
	int val_a;
	_anon0* b;
	int val_b;
	_anon0 tmp;
	// Line 1819, Address: 0x1b3460, Func Offset: 0
	// Line 1824, Address: 0x1b347c, Func Offset: 0x1c
	// Line 1821, Address: 0x1b3480, Func Offset: 0x20
	// Line 1825, Address: 0x1b3488, Func Offset: 0x28
	// Line 1828, Address: 0x1b3490, Func Offset: 0x30
	// Line 1825, Address: 0x1b3494, Func Offset: 0x34
	// Line 1828, Address: 0x1b3498, Func Offset: 0x38
	// Line 1829, Address: 0x1b34a8, Func Offset: 0x48
	// Line 1831, Address: 0x1b34b0, Func Offset: 0x50
	// Line 1833, Address: 0x1b34bc, Func Offset: 0x5c
	// Line 1834, Address: 0x1b34d0, Func Offset: 0x70
	// Line 1835, Address: 0x1b34e0, Func Offset: 0x80
	// Line 1838, Address: 0x1b34f0, Func Offset: 0x90
	// Line 1839, Address: 0x1b34fc, Func Offset: 0x9c
	// Line 1841, Address: 0x1b3500, Func Offset: 0xa0
	// Line 1844, Address: 0x1b3510, Func Offset: 0xb0
	// Line 1845, Address: 0x1b3520, Func Offset: 0xc0
	// Func End, Address: 0x1b3540, Func Offset: 0xe0
}

// 
// Start address: 0x1b3540
int GameItemBoxIsAbleToMerge(int menu_id)
{
	int rtv;
	GameItem kind;
	int i;
	int possession_num;
	int sum;
	int def_n;
	int n;
	// Line 1854, Address: 0x1b3540, Func Offset: 0
	// Line 1855, Address: 0x1b3550, Func Offset: 0x10
	// Line 1854, Address: 0x1b3554, Func Offset: 0x14
	// Line 1857, Address: 0x1b355c, Func Offset: 0x1c
	// Line 1858, Address: 0x1b3570, Func Offset: 0x30
	// Line 1860, Address: 0x1b3580, Func Offset: 0x40
	// Line 1862, Address: 0x1b3598, Func Offset: 0x58
	// Line 1864, Address: 0x1b35a0, Func Offset: 0x60
	// Line 1862, Address: 0x1b35a4, Func Offset: 0x64
	// Line 1864, Address: 0x1b35a8, Func Offset: 0x68
	// Line 1867, Address: 0x1b35b0, Func Offset: 0x70
	// Line 1865, Address: 0x1b35b4, Func Offset: 0x74
	// Line 1867, Address: 0x1b35b8, Func Offset: 0x78
	// Line 1868, Address: 0x1b35c0, Func Offset: 0x80
	// Line 1869, Address: 0x1b35cc, Func Offset: 0x8c
	// Line 1870, Address: 0x1b35d0, Func Offset: 0x90
	// Line 1869, Address: 0x1b35d4, Func Offset: 0x94
	// Line 1872, Address: 0x1b35d8, Func Offset: 0x98
	// Line 1874, Address: 0x1b35e8, Func Offset: 0xa8
	// Line 1875, Address: 0x1b3604, Func Offset: 0xc4
	// Line 1880, Address: 0x1b3608, Func Offset: 0xc8
	// Line 1881, Address: 0x1b360c, Func Offset: 0xcc
	// Func End, Address: 0x1b3628, Func Offset: 0xe8
}

// 
// Start address: 0x1b3630
void item_box_merge()
{
	int src_cnt;
	int dst_cnt;
	_anon0 empty;
	_anon0* src;
	_anon0* dst;
	int def_n;
	int n;
	_anon0 tmp[136];
	// Line 1885, Address: 0x1b3630, Func Offset: 0
	// Line 1888, Address: 0x1b3634, Func Offset: 0x4
	// Line 1885, Address: 0x1b3638, Func Offset: 0x8
	// Line 1888, Address: 0x1b363c, Func Offset: 0xc
	// Line 1885, Address: 0x1b3640, Func Offset: 0x10
	// Line 1888, Address: 0x1b3650, Func Offset: 0x20
	// Line 1891, Address: 0x1b3674, Func Offset: 0x44
	// Line 1892, Address: 0x1b3688, Func Offset: 0x58
	// Line 1895, Address: 0x1b36a0, Func Offset: 0x70
	// Line 1896, Address: 0x1b36a4, Func Offset: 0x74
	// Line 1895, Address: 0x1b36a8, Func Offset: 0x78
	// Line 1896, Address: 0x1b36ac, Func Offset: 0x7c
	// Line 1898, Address: 0x1b36b0, Func Offset: 0x80
	// Line 1901, Address: 0x1b36b8, Func Offset: 0x88
	// Line 1904, Address: 0x1b36c4, Func Offset: 0x94
	// Line 1905, Address: 0x1b36e0, Func Offset: 0xb0
	// Line 1906, Address: 0x1b36e4, Func Offset: 0xb4
	// Line 1909, Address: 0x1b36e8, Func Offset: 0xb8
	// Line 1910, Address: 0x1b36fc, Func Offset: 0xcc
	// Line 1911, Address: 0x1b3704, Func Offset: 0xd4
	// Line 1912, Address: 0x1b3710, Func Offset: 0xe0
	// Line 1914, Address: 0x1b3714, Func Offset: 0xe4
	// Line 1916, Address: 0x1b3728, Func Offset: 0xf8
	// Line 1918, Address: 0x1b3730, Func Offset: 0x100
	// Line 1919, Address: 0x1b3734, Func Offset: 0x104
	// Line 1916, Address: 0x1b3738, Func Offset: 0x108
	// Line 1920, Address: 0x1b373c, Func Offset: 0x10c
	// Line 1923, Address: 0x1b3748, Func Offset: 0x118
	// Line 1925, Address: 0x1b374c, Func Offset: 0x11c
	// Line 1928, Address: 0x1b3764, Func Offset: 0x134
	// Line 1931, Address: 0x1b3768, Func Offset: 0x138
	// Line 1935, Address: 0x1b376c, Func Offset: 0x13c
	// Line 1930, Address: 0x1b3770, Func Offset: 0x140
	// Line 1932, Address: 0x1b3774, Func Offset: 0x144
	// Line 1935, Address: 0x1b3778, Func Offset: 0x148
	// Line 1936, Address: 0x1b3790, Func Offset: 0x160
	// Func End, Address: 0x1b37b0, Func Offset: 0x180
}

// 
// Start address: 0x1b37b0
void GameItemBoxTidy()
{
	int i;
	int box_max;
	// Line 1941, Address: 0x1b37b0, Func Offset: 0
	// Line 1947, Address: 0x1b37bc, Func Offset: 0xc
	// Line 1950, Address: 0x1b37c4, Func Offset: 0x14
	// Line 1953, Address: 0x1b37cc, Func Offset: 0x1c
	// Line 1954, Address: 0x1b37d8, Func Offset: 0x28
	// Line 1955, Address: 0x1b37e4, Func Offset: 0x34
	// Line 1957, Address: 0x1b37e8, Func Offset: 0x38
	// Line 1960, Address: 0x1b37f8, Func Offset: 0x48
	// Line 1961, Address: 0x1b3800, Func Offset: 0x50
	// Line 1963, Address: 0x1b3830, Func Offset: 0x80
	// Line 1962, Address: 0x1b3834, Func Offset: 0x84
	// Line 1963, Address: 0x1b3838, Func Offset: 0x88
	// Line 1962, Address: 0x1b383c, Func Offset: 0x8c
	// Line 1963, Address: 0x1b3848, Func Offset: 0x98
	// Line 1964, Address: 0x1b3850, Func Offset: 0xa0
	// Func End, Address: 0x1b3860, Func Offset: 0xb0
}

// 
// Start address: 0x1b3860
int GameItemBoxNumberAll()
{
	// Line 1977, Address: 0x1b3860, Func Offset: 0
	// Line 1978, Address: 0x1b3864, Func Offset: 0x4
	// Func End, Address: 0x1b386c, Func Offset: 0xc
}

// 
// Start address: 0x1b3870
GameItem GameItemBoxKind(int num)
{
	// Line 1986, Address: 0x1b3870, Func Offset: 0
	// Line 1987, Address: 0x1b3880, Func Offset: 0x10
	// Func End, Address: 0x1b3888, Func Offset: 0x18
}

// 
// Start address: 0x1b3890
int GameItemBoxNumber(int num)
{
	// Line 2000, Address: 0x1b3890, Func Offset: 0
	// Line 2001, Address: 0x1b38a0, Func Offset: 0x10
	// Line 2005, Address: 0x1b38a8, Func Offset: 0x18
	// Line 2009, Address: 0x1b38c0, Func Offset: 0x30
	// Func End, Address: 0x1b38c8, Func Offset: 0x38
}

// 
// Start address: 0x1b38d0
int GameItemBoxNumberSum(GameItem kind)
{
	int i;
	int n;
	int m;
	// Line 2018, Address: 0x1b38d0, Func Offset: 0
	// Line 2019, Address: 0x1b38d4, Func Offset: 0x4
	// Line 2018, Address: 0x1b38d8, Func Offset: 0x8
	// Line 2020, Address: 0x1b38dc, Func Offset: 0xc
	// Line 2021, Address: 0x1b38f8, Func Offset: 0x28
	// Line 2022, Address: 0x1b3904, Func Offset: 0x34
	// Line 2024, Address: 0x1b390c, Func Offset: 0x3c
	// Line 2026, Address: 0x1b3920, Func Offset: 0x50
	// Func End, Address: 0x1b3928, Func Offset: 0x58
}

// 
// Start address: 0x1b3930
int GameItemHaveARecoveryItemInMenu()
{
	// Line 2033, Address: 0x1b3930, Func Offset: 0
	// Line 2034, Address: 0x1b3938, Func Offset: 0x8
	// Line 2037, Address: 0x1b396c, Func Offset: 0x3c
	// Func End, Address: 0x1b3978, Func Offset: 0x48
}

// 
// Start address: 0x1b3980
int GameItemHaveARecoveryItemInBox()
{
	// Line 2044, Address: 0x1b3980, Func Offset: 0
	// Line 2045, Address: 0x1b3988, Func Offset: 0x8
	// Line 2048, Address: 0x1b39bc, Func Offset: 0x3c
	// Func End, Address: 0x1b39c8, Func Offset: 0x48
}

// 
// Start address: 0x1b39d0
int GameItemHaveARecoveryItem()
{
	// Line 2055, Address: 0x1b39d0, Func Offset: 0
	// Line 2056, Address: 0x1b39d8, Func Offset: 0x8
	// Line 2058, Address: 0x1b39f8, Func Offset: 0x28
	// Func End, Address: 0x1b3a04, Func Offset: 0x34
}

// 
// Start address: 0x1b3a10
void GameItemGetFlagOn(GameItem kind)
{
	// Line 2124, Address: 0x1b3a14, Func Offset: 0x4
	// Line 2125, Address: 0x1b3a24, Func Offset: 0x14
	// Line 2126, Address: 0x1b3a34, Func Offset: 0x24
	// Line 2127, Address: 0x1b3a38, Func Offset: 0x28
	// Func End, Address: 0x1b3a40, Func Offset: 0x30
}

// 
// Start address: 0x1b3a40
int GameItemFlagGet(GameItem kind)
{
	int rtv;
	// Line 2136, Address: 0x1b3a44, Func Offset: 0x4
	// Line 2137, Address: 0x1b3a58, Func Offset: 0x18
	// Line 2140, Address: 0x1b3a68, Func Offset: 0x28
	// Func End, Address: 0x1b3a70, Func Offset: 0x30
}

