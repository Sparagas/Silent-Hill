typedef struct Item_List;
typedef struct _AnimeInfo;
typedef struct Model_List;
typedef struct Enemy_List;
typedef union fsFileIndex;
typedef struct Stage_Data;
typedef struct _anon0;
typedef union fsFile;
typedef struct fsCdFile;
typedef struct Event_List;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon1;
typedef enum _enum : unsigned char;
typedef struct _anon2;
typedef struct Playing_Info;

typedef void(*type_7)();
typedef int(*type_22)();

typedef fsFileIndex type_0[1];
typedef char type_1[13];
typedef fsFile type_2[1];
typedef fsFileIndex type_3[1];
typedef fsFile type_4[1];
typedef char type_5[13];
typedef fsFileIndex type_6[1];
typedef fsFile type_8[1];
typedef fsFile type_9[1];
typedef fsFileIndex type_10[1];
typedef fsFile type_11[1];
typedef fsFileIndex type_12[1];
typedef fsFile type_13[1];
typedef char type_14[13];
typedef fsFile type_15[1];
typedef fsFileIndex type_16[1];
typedef fsFile type_17[1];
typedef char type_18[13];
typedef fsFile type_19[1];
typedef char type_20[13];
typedef fsFile type_21[1];
typedef fsFileIndex type_23[1];
typedef char type_24[13];
typedef fsFileIndex type_25[1];
typedef fsFileIndex type_26[1];
typedef char type_27[13];
typedef fsFileIndex type_28[1];
typedef fsFile type_29[1];
typedef char type_30[13];
typedef fsFileIndex type_31[1];
typedef fsFileIndex type_32[1];
typedef char type_33[13];
typedef fsFileIndex type_34[1];
typedef char type_35[13];
typedef fsFileIndex type_36[1];
typedef float type_37[7];
typedef char type_38[13];
typedef fsFile type_39[1];
typedef unsigned int type_40[7];
typedef fsFileIndex type_41[1];
typedef char type_42[13];
typedef fsFile type_43[1];
typedef fsFileIndex type_44[1];
typedef char type_45[13];
typedef fsFile type_46[1];
typedef fsFileIndex type_47[1];
typedef fsFile type_48[1];
typedef char type_49[13];
typedef fsFileIndex type_50[1];
typedef fsFile type_51[1];
typedef fsFileIndex type_52[1];
typedef fsFile type_53[1];
typedef fsFileIndex type_54[1];
typedef fsFile type_55[1];
typedef char type_56[13];
typedef fsFile type_57[1];
typedef char type_58[13];
typedef char type_59[13];
typedef char type_60[13];
typedef fsFile type_61[1];
typedef fsFileIndex type_62[1];
typedef char type_63[13];
typedef fsFile type_64[1];
typedef char type_65[13];
typedef fsFile type_66[1];
typedef fsFileIndex type_67[1];
typedef char type_68[13];
typedef fsFileIndex type_69[1];
typedef char type_70[13];
typedef fsFileIndex type_71[1];
typedef fsFile type_72[1];
typedef char type_73[13];
typedef fsFileIndex type_74[1];
typedef fsFileIndex type_75[1];
typedef char type_76[13];
typedef fsFile type_77[1];
typedef fsFileIndex type_78[1];
typedef char type_79[13];
typedef fsFileIndex type_80[1];
typedef char type_81[13];
typedef fsFile type_82[1];
typedef fsFileIndex type_83[1];
typedef char type_84[13];
typedef char type_85[1];
typedef char type_86[13];
typedef fsFile type_87[1];
typedef fsFileIndex type_88[1];
typedef fsFile type_89[1];
typedef fsFileIndex type_90[1];
typedef fsFile type_91[1];
typedef fsFileIndex type_92[1];
typedef char type_93[13];
typedef fsFile type_94[1];
typedef fsFile type_95[1];
typedef fsFileIndex type_96[1];
typedef float type_97[4];
typedef char type_98[13];
typedef fsFile type_99[1];
typedef char type_100[13];
typedef char type_101[13];
typedef fsFile type_102[1];
typedef fsFileIndex type_103[1];
typedef fsFile type_104[1];
typedef char type_105[13];
typedef char type_106[13];
typedef fsFile type_107[1];
typedef fsFileIndex type_108[1];
typedef char type_109[13];
typedef char type_110[13];
typedef fsFileIndex type_111[1];
typedef char type_112[13];
typedef fsFileIndex type_113[1];
typedef fsFile type_114[1];
typedef char type_115[13];
typedef fsFileIndex type_116[1];
typedef char type_117[13];
typedef fsFileIndex type_118[1];
typedef fsFile type_119[1];
typedef fsFileIndex type_120[1];
typedef char type_121[13];
typedef fsFile type_122[1];
typedef fsFile type_123[1];
typedef fsFileIndex type_124[1];
typedef fsFile type_125[1];
typedef char type_126[13];
typedef fsFileIndex type_127[1];
typedef fsFile type_128[1];
typedef fsFile type_129[1];
typedef fsFileIndex type_130[1];
typedef fsFile type_131[1];
typedef fsFileIndex type_132[1];
typedef fsFile type_133[1];
typedef fsFileIndex type_134[1];
typedef char type_135[13];
typedef fsFile type_136[1];
typedef fsFile type_137[1];
typedef char type_138[13];
typedef fsFile type_139[1];
typedef fsFileIndex type_140[1];
typedef char type_141[13];
typedef char type_142[13];
typedef fsFile type_143[1];
typedef fsFile type_144[1];
typedef fsFileIndex type_145[1];
typedef fsFile type_146[1];
typedef char type_147[13];
typedef char type_148[13];
typedef fsFileIndex type_149[1];
typedef char type_150[13];
typedef fsFileIndex type_151[1];
typedef char type_152[13];
typedef fsFileIndex type_153[1];
typedef fsFile type_154[1];
typedef char type_155[13];
typedef fsFileIndex type_156[1];
typedef char type_157[13];
typedef fsFile type_158[1];

struct Item_List
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
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

struct Model_List
{
	short kind;
	short id;
	short flag_off;
	short flag_on;
	float pos[4];
	float rot[4];
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

union fsFileIndex
{
	_anon2 index;
	unsigned long pack;
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

struct _anon0
{
	void(*SpecDraw)();
	void(*PreDraw)();
	void(*PostDraw)();
	void(*CharaDraw_Hook)();
};

union fsFile
{
	_anon1 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
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

struct Event_List
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
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

struct _anon1
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

enum _enum : unsigned char
{
	Stg_null,
	Stg_tgs_trial,
	Stg_toilet,
	Stg_observation,
	Stg_forest,
	Stg_town_east,
	Stg_apart_e1f,
	Stg_apart_e2f,
	Stg_apart_e3fw,
	Stg_apart_e3fe,
	Stg_apart_w1f,
	Stg_apart_w2f,
	Stg_apart_stair,
	Stg_apart_out,
	Stg_town_west,
	Stg_bowling,
	Stg_to_heaven,
	Stg_heaven_night,
	Stg_hospital_1f_f,
	Stg_hospital_2f_f,
	Stg_hospital_3f_f,
	Stg_hospital_rf_f,
	Stg_hospital_1fw_b,
	Stg_hospital_1fe_b,
	Stg_hospital_2f_b,
	Stg_hospital_3f_b,
	Stg_hospital_bf_b,
	Stg_hospital_pass,
	Stg_society,
	Stg_delusion_2,
	Stg_delusion_3,
	Stg_prison_n,
	Stg_prison_s,
	Stg_prison_bf,
	Stg_labyrinth_w,
	Stg_labyrinth_e,
	Stg_labyrinth_n,
	Stg_eddie_boss,
	Stg_lake,
	Stg_hotel_bf_f,
	Stg_hotel_1f_f,
	Stg_hotel_2f_f,
	Stg_hotel_3f_f,
	Stg_hotel_bf_b,
	Stg_hotel_1f_b,
	Stg_hotel_2f_b,
	Stg_hotel_3f_b,
	Stg_hotel_fire,
	Stg_end_recovery,
	Stg_end_maria,
	Stg_end_suicide,
	Stg_end_rebirth,
	Stg_end_dog,
	Stg_num
};

struct _anon2
{
	fsFile* fp;
	char* name;
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

char z_root_stage_toilet_bin__name[13];
fsFile z_root_stage_toilet_bin__info[1];
fsFileIndex root_stage_toilet_bin[1];
char z_root_stage_observation_bin__name[13];
fsFile z_root_stage_observation_bin__info[1];
fsFileIndex root_stage_observation_bin[1];
char z_root_stage_forest_bin__name[13];
fsFile z_root_stage_forest_bin__info[1];
fsFileIndex root_stage_forest_bin[1];
char z_root_stage_town_east_bin__name[13];
fsFile z_root_stage_town_east_bin__info[1];
fsFileIndex root_stage_town_east_bin[1];
char z_root_stage_apart_e1f_bin__name[13];
fsFile z_root_stage_apart_e1f_bin__info[1];
fsFileIndex root_stage_apart_e1f_bin[1];
char z_root_stage_apart_e2f_bin__name[13];
fsFile z_root_stage_apart_e2f_bin__info[1];
fsFileIndex root_stage_apart_e2f_bin[1];
char z_root_stage_apart_e3fw_bin__name[13];
fsFile z_root_stage_apart_e3fw_bin__info[1];
fsFileIndex root_stage_apart_e3fw_bin[1];
char z_root_stage_apart_e3fe_bin__name[13];
fsFile z_root_stage_apart_e3fe_bin__info[1];
fsFileIndex root_stage_apart_e3fe_bin[1];
char z_root_stage_apart_w1f_bin__name[13];
fsFile z_root_stage_apart_w1f_bin__info[1];
fsFileIndex root_stage_apart_w1f_bin[1];
char z_root_stage_apart_w2f_bin__name[13];
fsFile z_root_stage_apart_w2f_bin__info[1];
fsFileIndex root_stage_apart_w2f_bin[1];
char z_root_stage_apart_stair_bin__name[13];
fsFile z_root_stage_apart_stair_bin__info[1];
fsFileIndex root_stage_apart_stair_bin[1];
char z_root_stage_apart_out_bin__name[13];
fsFile z_root_stage_apart_out_bin__info[1];
fsFileIndex root_stage_apart_out_bin[1];
char z_root_stage_town_west_bin__name[13];
fsFile z_root_stage_town_west_bin__info[1];
fsFileIndex root_stage_town_west_bin[1];
char z_root_stage_bowling_bin__name[13];
fsFile z_root_stage_bowling_bin__info[1];
fsFileIndex root_stage_bowling_bin[1];
char z_root_stage_to_heaven_bin__name[13];
fsFile z_root_stage_to_heaven_bin__info[1];
fsFileIndex root_stage_to_heaven_bin[1];
char z_root_stage_heaven_night_bin__name[13];
fsFile z_root_stage_heaven_night_bin__info[1];
fsFileIndex root_stage_heaven_night_bin[1];
char z_root_stage_hospital_1f_f_bin__name[13];
fsFile z_root_stage_hospital_1f_f_bin__info[1];
fsFileIndex root_stage_hospital_1f_f_bin[1];
char z_root_stage_hospital_2f_f_bin__name[13];
fsFile z_root_stage_hospital_2f_f_bin__info[1];
fsFileIndex root_stage_hospital_2f_f_bin[1];
char z_root_stage_hospital_3f_f_bin__name[13];
fsFile z_root_stage_hospital_3f_f_bin__info[1];
fsFileIndex root_stage_hospital_3f_f_bin[1];
char z_root_stage_hospital_rf_f_bin__name[13];
fsFile z_root_stage_hospital_rf_f_bin__info[1];
fsFileIndex root_stage_hospital_rf_f_bin[1];
char z_root_stage_hospital_1fw_b_bin__name[13];
fsFile z_root_stage_hospital_1fw_b_bin__info[1];
fsFileIndex root_stage_hospital_1fw_b_bin[1];
char z_root_stage_hospital_1fe_b_bin__name[13];
fsFile z_root_stage_hospital_1fe_b_bin__info[1];
fsFileIndex root_stage_hospital_1fe_b_bin[1];
char z_root_stage_hospital_2f_b_bin__name[13];
fsFile z_root_stage_hospital_2f_b_bin__info[1];
fsFileIndex root_stage_hospital_2f_b_bin[1];
char z_root_stage_hospital_3f_b_bin__name[13];
fsFile z_root_stage_hospital_3f_b_bin__info[1];
fsFileIndex root_stage_hospital_3f_b_bin[1];
char z_root_stage_hospital_bf_b_bin__name[13];
fsFile z_root_stage_hospital_bf_b_bin__info[1];
fsFileIndex root_stage_hospital_bf_b_bin[1];
char z_root_stage_hospital_pass_bin__name[13];
fsFile z_root_stage_hospital_pass_bin__info[1];
fsFileIndex root_stage_hospital_pass_bin[1];
char z_root_stage_society_bin__name[13];
fsFile z_root_stage_society_bin__info[1];
fsFileIndex root_stage_society_bin[1];
char z_root_stage_delusion_2_bin__name[13];
fsFile z_root_stage_delusion_2_bin__info[1];
fsFileIndex root_stage_delusion_2_bin[1];
char z_root_stage_delusion_3_bin__name[13];
fsFile z_root_stage_delusion_3_bin__info[1];
fsFileIndex root_stage_delusion_3_bin[1];
char z_root_stage_prison_n_bin__name[13];
fsFile z_root_stage_prison_n_bin__info[1];
fsFileIndex root_stage_prison_n_bin[1];
char z_root_stage_prison_s_bin__name[13];
fsFile z_root_stage_prison_s_bin__info[1];
fsFileIndex root_stage_prison_s_bin[1];
char z_root_stage_prison_bf_bin__name[13];
fsFile z_root_stage_prison_bf_bin__info[1];
fsFileIndex root_stage_prison_bf_bin[1];
char z_root_stage_labyrinth_w_bin__name[13];
fsFile z_root_stage_labyrinth_w_bin__info[1];
fsFileIndex root_stage_labyrinth_w_bin[1];
char z_root_stage_labyrinth_e_bin__name[13];
fsFile z_root_stage_labyrinth_e_bin__info[1];
fsFileIndex root_stage_labyrinth_e_bin[1];
char z_root_stage_labyrinth_n_bin__name[13];
fsFile z_root_stage_labyrinth_n_bin__info[1];
fsFileIndex root_stage_labyrinth_n_bin[1];
char z_root_stage_eddie_boss_bin__name[13];
fsFile z_root_stage_eddie_boss_bin__info[1];
fsFileIndex root_stage_eddie_boss_bin[1];
char z_root_stage_lake_bin__name[13];
fsFile z_root_stage_lake_bin__info[1];
fsFileIndex root_stage_lake_bin[1];
char z_root_stage_hotel_bf_f_bin__name[13];
fsFile z_root_stage_hotel_bf_f_bin__info[1];
fsFileIndex root_stage_hotel_bf_f_bin[1];
char z_root_stage_hotel_1f_f_bin__name[13];
fsFile z_root_stage_hotel_1f_f_bin__info[1];
fsFileIndex root_stage_hotel_1f_f_bin[1];
char z_root_stage_hotel_2f_f_bin__name[13];
fsFile z_root_stage_hotel_2f_f_bin__info[1];
fsFileIndex root_stage_hotel_2f_f_bin[1];
char z_root_stage_hotel_3f_f_bin__name[13];
fsFile z_root_stage_hotel_3f_f_bin__info[1];
fsFileIndex root_stage_hotel_3f_f_bin[1];
char z_root_stage_hotel_bf_b_bin__name[13];
fsFile z_root_stage_hotel_bf_b_bin__info[1];
fsFileIndex root_stage_hotel_bf_b_bin[1];
char z_root_stage_hotel_1f_b_bin__name[13];
fsFile z_root_stage_hotel_1f_b_bin__info[1];
fsFileIndex root_stage_hotel_1f_b_bin[1];
char z_root_stage_hotel_2f_b_bin__name[13];
fsFile z_root_stage_hotel_2f_b_bin__info[1];
fsFileIndex root_stage_hotel_2f_b_bin[1];
char z_root_stage_hotel_3f_b_bin__name[13];
fsFile z_root_stage_hotel_3f_b_bin__info[1];
fsFileIndex root_stage_hotel_3f_b_bin[1];
char z_root_stage_hotel_fire_bin__name[13];
fsFile z_root_stage_hotel_fire_bin__info[1];
fsFileIndex root_stage_hotel_fire_bin[1];
char z_root_stage_end_recovery_bin__name[13];
fsFile z_root_stage_end_recovery_bin__info[1];
fsFileIndex root_stage_end_recovery_bin[1];
char z_root_stage_end_maria_bin__name[13];
fsFile z_root_stage_end_maria_bin__info[1];
fsFileIndex root_stage_end_maria_bin[1];
char z_root_stage_end_suicide_bin__name[13];
fsFile z_root_stage_end_suicide_bin__info[1];
fsFileIndex root_stage_end_suicide_bin[1];
char z_root_stage_end_rebirth_bin__name[13];
fsFile z_root_stage_end_rebirth_bin__info[1];
fsFileIndex root_stage_end_rebirth_bin[1];
char z_root_stage_end_dog_bin__name[13];
fsFile z_root_stage_end_dog_bin__info[1];
fsFileIndex root_stage_end_dog_bin[1];
Stage_Data stage_end_dog;
Stage_Data stage_end_rebirth;
Stage_Data stage_end_suicide;
Stage_Data stage_end_maria;
Stage_Data stage_end_recovery;
Stage_Data stage_hotel_fire;
Stage_Data stage_hotel_3f_b;
Stage_Data stage_hotel_2f_b;
Stage_Data stage_hotel_1f_b;
Stage_Data stage_hotel_bf_b;
Stage_Data stage_hotel_3f_f;
Stage_Data stage_hotel_2f_f;
Stage_Data stage_hotel_1f_f;
Stage_Data stage_hotel_bf_f;
Stage_Data stage_lake;
Stage_Data stage_eddie_boss;
Stage_Data stage_labyrinth_n;
Stage_Data stage_labyrinth_e;
Stage_Data stage_labyrinth_w;
Stage_Data stage_prison_bf;
Stage_Data stage_prison_s;
Stage_Data stage_prison_n;
Stage_Data stage_delusion_3;
Stage_Data stage_delusion_2;
Stage_Data stage_society;
Stage_Data stage_hospital_pass;
Stage_Data stage_hospital_bf_b;
Stage_Data stage_hospital_3f_b;
Stage_Data stage_hospital_2f_b;
Stage_Data stage_hospital_1fe_b;
Stage_Data stage_hospital_1fw_b;
Stage_Data stage_hospital_rf_f;
Stage_Data stage_hospital_3f_f;
Stage_Data stage_hospital_2f_f;
Stage_Data stage_hospital_1f_f;
Stage_Data stage_heaven_night;
Stage_Data stage_to_heaven;
Stage_Data stage_bowling;
Stage_Data stage_town_west;
Stage_Data stage_apart_out;
Stage_Data stage_apart_stair;
Stage_Data stage_apart_w2f;
Stage_Data stage_apart_w1f;
Stage_Data stage_apart_e3fe;
Stage_Data stage_apart_e3fw;
Stage_Data stage_apart_e2f;
Stage_Data stage_apart_e1f;
Stage_Data stage_town_east;
Stage_Data stage_forest;
Stage_Data stage_observation;
Stage_Data stage_toilet;
Stage_Data stage_tgs_trial;
fsFileIndex* last_stage_bin;
Stage_Data* stage;
Playing_Info playing;
char _ovl_start_addr[1];

fsFileIndex* StgOverlayGetFileID(_enum stg_name);
Stage_Data* StgOverlayGetStageData(_enum stg_name);
void StgOverlay();

// 
// Start address: 0x228300
fsFileIndex* StgOverlayGetFileID(_enum stg_name)
{
	// Line 165, Address: 0x228300, Func Offset: 0
	// Line 167, Address: 0x22832c, Func Offset: 0x2c
	// Line 168, Address: 0x228338, Func Offset: 0x38
	// Line 169, Address: 0x228348, Func Offset: 0x48
	// Line 170, Address: 0x228358, Func Offset: 0x58
	// Line 171, Address: 0x228368, Func Offset: 0x68
	// Line 172, Address: 0x228378, Func Offset: 0x78
	// Line 173, Address: 0x228388, Func Offset: 0x88
	// Line 174, Address: 0x228398, Func Offset: 0x98
	// Line 175, Address: 0x2283a8, Func Offset: 0xa8
	// Line 176, Address: 0x2283b8, Func Offset: 0xb8
	// Line 177, Address: 0x2283c8, Func Offset: 0xc8
	// Line 178, Address: 0x2283d8, Func Offset: 0xd8
	// Line 179, Address: 0x2283e8, Func Offset: 0xe8
	// Line 180, Address: 0x2283f8, Func Offset: 0xf8
	// Line 181, Address: 0x228408, Func Offset: 0x108
	// Line 182, Address: 0x228418, Func Offset: 0x118
	// Line 183, Address: 0x228428, Func Offset: 0x128
	// Line 184, Address: 0x228438, Func Offset: 0x138
	// Line 185, Address: 0x228448, Func Offset: 0x148
	// Line 186, Address: 0x228458, Func Offset: 0x158
	// Line 187, Address: 0x228468, Func Offset: 0x168
	// Line 188, Address: 0x228478, Func Offset: 0x178
	// Line 189, Address: 0x228488, Func Offset: 0x188
	// Line 190, Address: 0x228498, Func Offset: 0x198
	// Line 191, Address: 0x2284a8, Func Offset: 0x1a8
	// Line 192, Address: 0x2284b8, Func Offset: 0x1b8
	// Line 193, Address: 0x2284c8, Func Offset: 0x1c8
	// Line 194, Address: 0x2284d8, Func Offset: 0x1d8
	// Line 195, Address: 0x2284e8, Func Offset: 0x1e8
	// Line 196, Address: 0x2284f8, Func Offset: 0x1f8
	// Line 197, Address: 0x228508, Func Offset: 0x208
	// Line 198, Address: 0x228518, Func Offset: 0x218
	// Line 199, Address: 0x228528, Func Offset: 0x228
	// Line 200, Address: 0x228538, Func Offset: 0x238
	// Line 201, Address: 0x228548, Func Offset: 0x248
	// Line 202, Address: 0x228558, Func Offset: 0x258
	// Line 203, Address: 0x228568, Func Offset: 0x268
	// Line 204, Address: 0x228578, Func Offset: 0x278
	// Line 205, Address: 0x228588, Func Offset: 0x288
	// Line 206, Address: 0x228598, Func Offset: 0x298
	// Line 207, Address: 0x2285a8, Func Offset: 0x2a8
	// Line 208, Address: 0x2285b8, Func Offset: 0x2b8
	// Line 209, Address: 0x2285c8, Func Offset: 0x2c8
	// Line 210, Address: 0x2285d8, Func Offset: 0x2d8
	// Line 211, Address: 0x2285e8, Func Offset: 0x2e8
	// Line 212, Address: 0x2285f8, Func Offset: 0x2f8
	// Line 213, Address: 0x228608, Func Offset: 0x308
	// Line 214, Address: 0x228618, Func Offset: 0x318
	// Line 215, Address: 0x228628, Func Offset: 0x328
	// Line 216, Address: 0x228638, Func Offset: 0x338
	// Line 217, Address: 0x228648, Func Offset: 0x348
	// Line 218, Address: 0x228658, Func Offset: 0x358
	// Line 222, Address: 0x228660, Func Offset: 0x360
	// Func End, Address: 0x228668, Func Offset: 0x368
}

// 
// Start address: 0x228670
Stage_Data* StgOverlayGetStageData(_enum stg_name)
{
	// Line 234, Address: 0x228670, Func Offset: 0
	// Line 236, Address: 0x22869c, Func Offset: 0x2c
	// Line 237, Address: 0x2286ac, Func Offset: 0x3c
	// Line 238, Address: 0x2286bc, Func Offset: 0x4c
	// Line 239, Address: 0x2286cc, Func Offset: 0x5c
	// Line 240, Address: 0x2286dc, Func Offset: 0x6c
	// Line 241, Address: 0x2286ec, Func Offset: 0x7c
	// Line 242, Address: 0x2286fc, Func Offset: 0x8c
	// Line 243, Address: 0x22870c, Func Offset: 0x9c
	// Line 244, Address: 0x22871c, Func Offset: 0xac
	// Line 245, Address: 0x22872c, Func Offset: 0xbc
	// Line 246, Address: 0x22873c, Func Offset: 0xcc
	// Line 247, Address: 0x22874c, Func Offset: 0xdc
	// Line 248, Address: 0x22875c, Func Offset: 0xec
	// Line 249, Address: 0x22876c, Func Offset: 0xfc
	// Line 250, Address: 0x22877c, Func Offset: 0x10c
	// Line 251, Address: 0x22878c, Func Offset: 0x11c
	// Line 252, Address: 0x22879c, Func Offset: 0x12c
	// Line 253, Address: 0x2287ac, Func Offset: 0x13c
	// Line 254, Address: 0x2287bc, Func Offset: 0x14c
	// Line 255, Address: 0x2287cc, Func Offset: 0x15c
	// Line 256, Address: 0x2287dc, Func Offset: 0x16c
	// Line 257, Address: 0x2287ec, Func Offset: 0x17c
	// Line 258, Address: 0x2287fc, Func Offset: 0x18c
	// Line 259, Address: 0x22880c, Func Offset: 0x19c
	// Line 260, Address: 0x22881c, Func Offset: 0x1ac
	// Line 261, Address: 0x22882c, Func Offset: 0x1bc
	// Line 262, Address: 0x22883c, Func Offset: 0x1cc
	// Line 263, Address: 0x22884c, Func Offset: 0x1dc
	// Line 264, Address: 0x22885c, Func Offset: 0x1ec
	// Line 265, Address: 0x22886c, Func Offset: 0x1fc
	// Line 266, Address: 0x22887c, Func Offset: 0x20c
	// Line 267, Address: 0x22888c, Func Offset: 0x21c
	// Line 268, Address: 0x22889c, Func Offset: 0x22c
	// Line 269, Address: 0x2288ac, Func Offset: 0x23c
	// Line 270, Address: 0x2288bc, Func Offset: 0x24c
	// Line 271, Address: 0x2288cc, Func Offset: 0x25c
	// Line 272, Address: 0x2288dc, Func Offset: 0x26c
	// Line 273, Address: 0x2288ec, Func Offset: 0x27c
	// Line 274, Address: 0x2288fc, Func Offset: 0x28c
	// Line 275, Address: 0x22890c, Func Offset: 0x29c
	// Line 276, Address: 0x22891c, Func Offset: 0x2ac
	// Line 277, Address: 0x22892c, Func Offset: 0x2bc
	// Line 278, Address: 0x22893c, Func Offset: 0x2cc
	// Line 279, Address: 0x22894c, Func Offset: 0x2dc
	// Line 280, Address: 0x22895c, Func Offset: 0x2ec
	// Line 281, Address: 0x22896c, Func Offset: 0x2fc
	// Line 282, Address: 0x22897c, Func Offset: 0x30c
	// Line 283, Address: 0x22898c, Func Offset: 0x31c
	// Line 284, Address: 0x22899c, Func Offset: 0x32c
	// Line 285, Address: 0x2289ac, Func Offset: 0x33c
	// Line 286, Address: 0x2289bc, Func Offset: 0x34c
	// Line 287, Address: 0x2289cc, Func Offset: 0x35c
	// Line 291, Address: 0x2289d4, Func Offset: 0x364
	// Func End, Address: 0x2289dc, Func Offset: 0x36c
}

// 
// Start address: 0x2289e0
void StgOverlay()
{
	int size;
	char* addr;
	int fid;
	void* overlay_load_addr;
	fsFileIndex* stage_bin;
	// Line 304, Address: 0x2289e0, Func Offset: 0
	// Line 309, Address: 0x2289f0, Func Offset: 0x10
	// Line 311, Address: 0x228a04, Func Offset: 0x24
	// Line 312, Address: 0x228a14, Func Offset: 0x34
	// Line 313, Address: 0x228a1c, Func Offset: 0x3c
	// Line 314, Address: 0x228a24, Func Offset: 0x44
	// Line 317, Address: 0x228a2c, Func Offset: 0x4c
	// Line 321, Address: 0x228a38, Func Offset: 0x58
	// Line 322, Address: 0x228a48, Func Offset: 0x68
	// Line 324, Address: 0x228a54, Func Offset: 0x74
	// Line 325, Address: 0x228a60, Func Offset: 0x80
	// Line 328, Address: 0x228a68, Func Offset: 0x88
	// Line 334, Address: 0x228a78, Func Offset: 0x98
	// Line 335, Address: 0x228a7c, Func Offset: 0x9c
	// Line 336, Address: 0x228a80, Func Offset: 0xa0
	// Line 337, Address: 0x228a88, Func Offset: 0xa8
	// Line 338, Address: 0x228a90, Func Offset: 0xb0
	// Line 339, Address: 0x228a94, Func Offset: 0xb4
	// Line 347, Address: 0x228aa0, Func Offset: 0xc0
	// Line 351, Address: 0x228aac, Func Offset: 0xcc
	// Line 352, Address: 0x228ab4, Func Offset: 0xd4
	// Line 356, Address: 0x228ac8, Func Offset: 0xe8
	// Line 358, Address: 0x228ae0, Func Offset: 0x100
	// Func End, Address: 0x228af8, Func Offset: 0x118
}

