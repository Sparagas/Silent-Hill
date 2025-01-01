typedef enum GameItem : unsigned char;
typedef struct sfCldObject;
typedef struct sgQTNode;
typedef struct sfCldPart;
typedef struct sgBone;
typedef struct sgQTObject;
typedef enum EileenArmsTypeNo : unsigned char;
typedef struct sfOffsetAABB;
typedef union sfCldBody;
typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;


typedef float type_0[4][38];
typedef float type_1[4];
typedef float type_2[4][6];
typedef sfCldPart* type_3[6];
typedef float type_4[4];
typedef float type_5[4][4];
typedef unsigned char type_6[3];
typedef float type_7[4][38];
typedef float type_8[4];
typedef unsigned char type_9[3];
typedef float type_10[4][6];

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

struct sfCldObject
{
	sgQTObject tree_object;
	sgQTNode* stay_node;
	sfCldPart* parts[6];
	unsigned char n_parts;
	unsigned char pad[3];
	void* data;
};

struct sgQTNode
{
	int dummy;
};

struct sfCldPart
{
	sfCldBody world_hit;
	sfCldBody local_hit;
	unsigned char hit_type;
	unsigned char pad[3];
	int hit_kind;
	sgBone* parent;
	void* data;
	void* parent_cld;
};

struct sgBone
{
	float rot[4];
	float trans[4];
	float scale[4];
	float abs_rot[4];
	float abs_trans[4];
	sgBone* parent;
	sgBone* child_list;
	sgBone* child_sibling;
	unsigned short last;
	unsigned short flag;
	float partly_blend_rate;
};

struct sgQTObject
{
	_anon2 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

enum EileenArmsTypeNo : unsigned char
{
	EIL_ARMS_NONE,
	EIL_ARMS_HANDBAG,
	EIL_ARMS_CLUB,
	EIL_ARMS_ROD,
	EIL_ARMS_CHAIN,
	EIL_ARMS_GUN,
	EIL_ARMS_MAX
};

struct sfOffsetAABB
{
	_anon3 aabb;
	float offset[4];
};

union sfCldBody
{
	_anon1 obb;
	_anon3 aabb;
	sfOffsetAABB offset_aabb;
	_anon0 line;
	_anon2 sphere;
};

struct _anon0
{
	float start[4];
	float end[4];
};

struct _anon1
{
	float mat[4][4];
	float half_w[4];
};

struct _anon2
{
	float center[4];
	float radius;
};

struct _anon3
{
	float bmin[4];
	float bmax[4];
};

float pl_weapon_hit_offsets[4][38];
float pl_weapon_hit_scales[4][38];
float eil_weapon_hit_offsets[4][6];
float eil_weapon_hit_scales[4][6];

void PlWeaponAdjustHit(sfCldObject* cld_object, GameItem weapon_type);
void PlWeaponAdjustHitEileenArms(sfCldObject* cld_object, EileenArmsTypeNo weapon_type);

// 
// Start address: 0x2f7f40
void PlWeaponAdjustHit(sfCldObject* cld_object, GameItem weapon_type)
{
	int wep_index;
	sfCldPart* cld_part;
	_anon1* obb;
	// Line 135, Address: 0x2f7f40, Func Offset: 0
	// Line 136, Address: 0x2f7f58, Func Offset: 0x18
	// Line 138, Address: 0x2f7f60, Func Offset: 0x20
	// Line 139, Address: 0x2f7f80, Func Offset: 0x40
	// Line 141, Address: 0x2f7f88, Func Offset: 0x48
	// Line 145, Address: 0x2f7fb0, Func Offset: 0x70
	// Line 146, Address: 0x2f7fc8, Func Offset: 0x88
	// Line 153, Address: 0x2f7fd0, Func Offset: 0x90
	// Line 154, Address: 0x2f7ff8, Func Offset: 0xb8
	// Line 155, Address: 0x2f8024, Func Offset: 0xe4
	// Func End, Address: 0x2f8030, Func Offset: 0xf0
}

// 
// Start address: 0x2f8030
void PlWeaponAdjustHitEileenArms(sfCldObject* cld_object, EileenArmsTypeNo weapon_type)
{
	int wep_index;
	sfCldPart* cld_part;
	_anon1* obb;
	// Line 170, Address: 0x2f8030, Func Offset: 0
	// Line 171, Address: 0x2f8048, Func Offset: 0x18
	// Line 173, Address: 0x2f8050, Func Offset: 0x20
	// Line 174, Address: 0x2f8070, Func Offset: 0x40
	// Line 176, Address: 0x2f8078, Func Offset: 0x48
	// Line 180, Address: 0x2f80a0, Func Offset: 0x70
	// Line 181, Address: 0x2f80b8, Func Offset: 0x88
	// Line 182, Address: 0x2f80bc, Func Offset: 0x8c
	// Line 183, Address: 0x2f80e4, Func Offset: 0xb4
	// Line 184, Address: 0x2f8110, Func Offset: 0xe0
	// Func End, Address: 0x2f8118, Func Offset: 0xe8
}

