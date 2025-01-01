typedef enum BattleAttackAttribute : unsigned char;
typedef enum BattleDamageType : unsigned char;


typedef int type_0[110];
typedef BattleAttackAttribute type_1[110];
typedef BattleDamageType type_2[110];

enum BattleAttackAttribute : unsigned char
{
	BAA_UNDEFINED,
	BAA_NOTHING,
	BAA_STAB,
	BAA_HIT,
	BAA_CUT,
	BAA_SHOOT,
	BAA_EXORCISM,
	BAA_EXORCISM_SHOOT,
	BAA_FINISH
};

enum BattleDamageType : unsigned char
{
	BDT_GUN,
	BDT_REVOLVER,
	BDT_PIPE,
	BDT_PIPE_ST,
	BDT_BAT,
	BDT_BAT_ST,
	BDT_CLUB,
	BDT_CLUB_ST,
	BDT_CUTTER,
	BDT_CUTTER_ST,
	BDT_BOTTLE,
	BDT_BOTTLE_ST,
	BDT_SCOOP,
	BDT_SCOOP_ST,
	BDT_HATCHET,
	BDT_HATCHET_ST,
	BDT_PICK,
	BDT_PICK_ST,
	BDT_STUNGUN,
	BDT_CHAINSAW,
	BDT_CHAINSAW_ST,
	BDT_SMALL,
	BDT_OTHER,
	BDT_EIL_HANDBAG = 0xa,
	BDT_EIL_CLUB = 0x4,
	BDT_EIL_ROD = 0x4,
	BDT_EIL_CHAIN = 0x6,
	BDT_EIL_GUN = 0
};

BattleDamageType battle_damage_type[110];
int battle_hit_type[110];
BattleAttackAttribute battle_attack_attribute[110];


