typedef union fsFileIndex;
typedef struct Enemy_List;
typedef struct _anon0;
typedef struct SubCharacter;
typedef struct CharaData_MemAdmin_One;
typedef union fsFile;
typedef struct Playing_Info;
typedef struct _AnimeInfo;
typedef struct fsCdFile;
typedef struct CharaData_DemoList;
typedef struct Stage_Data;
typedef struct CharaData_MemAdmin;
typedef struct shSkelton;
typedef struct Event_List;
typedef struct _SH2_SYS;
typedef struct CharaData_EntryList;
typedef struct fsMgcFile;
typedef struct Item_List;
typedef struct CharaData_EntryList_One;
typedef struct Model_List;
typedef struct fsMgfFile;
typedef struct shBattleFight;
typedef struct fsHdFile;
typedef struct shBattleShot;
typedef struct CharaData_ItemFile;
typedef struct shBattleArea;
typedef struct CharaData_WeaponFile;
typedef struct fsMgpFile;
typedef struct shBattleInfo;
typedef struct _anon1;
typedef struct CharaData_StandardList;
typedef struct CharaData_Extra;
typedef struct _CL_VHIT_WALL;
typedef struct Item;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _anon2;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;
typedef struct _anon3;
typedef union _anon4;
typedef struct _CL_VHIT_RESULT;
typedef union _anon5;
typedef struct _anon6;
typedef struct chr_mge_files;
typedef struct _anon7;

typedef int(*type_1)();
typedef void(*type_5)();
typedef void(*type_8)(SubCharacter*);
typedef void(*type_12)(SubCharacter*);

typedef _AnimeInfo type_0[5];
typedef unsigned char type_2[14];
typedef char type_3[4];
typedef char type_4[4];
typedef fsFileIndex type_6[1];
typedef _AnimeInfo type_7[33];
typedef _AnimeInfo type_9[20];
typedef chr_mge_files type_10[32];
typedef unsigned char type_11[69];
typedef float type_13[4];
typedef chr_mge_files type_14[3];
typedef fsFileIndex type_15[1];
typedef unsigned char type_16[4];
typedef _AnimeInfo type_17[11];
typedef _AnimeInfo type_18[30];
typedef chr_mge_files type_19[2];
typedef unsigned int type_20[8];
typedef fsFileIndex type_21[1];
typedef CharaData_EntryList type_22[2];
typedef fsFileIndex type_23[1];
typedef CharaData_StandardList type_24[168];
typedef CharaData_EntryList type_25[32];
typedef CharaData_EntryList type_26[6];
typedef _AnimeInfo type_27[17];
typedef fsFileIndex type_28[1];
typedef unsigned char type_29[14];
typedef fsFileIndex* type_30[53];
typedef _AnimeInfo type_31[34];
typedef CharaData_EntryList type_32[32];
typedef float type_33[4];
typedef float type_34[7];
typedef unsigned int type_35[7];
typedef _AnimeInfo type_36[17];
typedef unsigned char type_37[97];
typedef _AnimeInfo type_38[17];
typedef CharaData_WeaponFile type_39[10];
typedef unsigned int type_40[2];
typedef unsigned short type_41[11];
typedef fsFileIndex type_42[1];
typedef fsFileIndex type_43[1];
typedef _AnimeInfo type_44[33];
typedef unsigned short type_45[3];
typedef CharaData_MemAdmin type_46[32];
typedef unsigned char type_47[20];
typedef CharaData_EntryList type_48[32];
typedef CharaData_EntryList type_49[3];
typedef unsigned char type_50[1024];
typedef CharaData_StandardList type_51[15];
typedef _AnimeInfo type_52[24];
typedef fsFileIndex type_53[1];
typedef unsigned int type_54[255];
typedef CharaData_Extra type_55[8];
typedef <unknown fundamental type (0xa510)> type_56[0];
typedef unsigned int type_57[32];
typedef unsigned char type_58[4];
typedef CharaData_ItemFile type_59[6];
typedef char type_60[4];
typedef float type_61[4];
typedef float type_62[4][4];
typedef fsFileIndex type_63[1];
typedef char type_64[4];
typedef char type_65[4];
typedef shAttackInfo type_66[66];

union fsFileIndex
{
	_anon2 index;
	unsigned long pack;
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

struct _anon0
{
	void(*SpecDraw)();
	void(*PreDraw)();
	void(*PostDraw)();
	void(*CharaDraw_Hook)();
};

struct SubCharacter
{
	int index;
	unsigned int status;
	unsigned int sub_status;
	unsigned int sub_st;
	short kind;
	short id;
	unsigned int step;
	unsigned int model_type;
	_anon3 pos;
	_anon3 rot;
	_anon3 pos_spd;
	_anon3 rot_spd;
	_anon7 mat;
	shSkelton* sk_top;
	float eye_y;
	float center_y;
	float spd;
	float spd_org;
	float spd_y;
	float spd_roty;
	float grnd_normal[4];
	float grnd_height;
	_anon3 b_pos;
	_anon3 b_rot;
	int en_first_status;
	int colis_fall_timer;
	shBattleInfo battle;
	_CL_VHIT_RESULT eye;
	void(*function)(SubCharacter*);
	void(*effecter_function)(SubCharacter*);
	SubCharacter* pre;
	SubCharacter* next;
	unsigned char work[4];
	void* enemy_p;
};

struct CharaData_MemAdmin_One
{
	fsFileIndex* file;
	<unknown fundamental type (0xa510)>* adress;
	int size;
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

struct CharaData_DemoList
{
	int kind;
	fsFileIndex* model;
	fsFileIndex* animation;
	fsFileIndex* shadow;
	fsFileIndex* cluster;
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

struct CharaData_MemAdmin
{
	char category;
	char priority;
	short kind;
	CharaData_MemAdmin_One model;
	CharaData_MemAdmin_One animation;
	CharaData_MemAdmin_One shadow;
	CharaData_MemAdmin_One cluster;
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon7 src_m;
	_anon3 src_t;
	_anon7 des_m;
	_anon3 des_t;
	_anon3 axis;
	float theta;
	float xx;
	float yy;
	float zz;
	float xy;
	float yz;
	float zx;
	unsigned short c_count;
	unsigned short c_speed;
	char change;
	char reserved;
	char is_key;
	char pad;
	void* untouchable;
};

struct Event_List
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
};

struct _SH2_SYS
{
	unsigned int step[8];
	unsigned int pre_playable;
	int main_status;
	unsigned int soft_reset;
	unsigned int frame_cnt;
};

struct CharaData_EntryList
{
	int category;
	short delete;
	short kind;
	CharaData_EntryList_One model;
	CharaData_EntryList_One animation;
	CharaData_EntryList_One shadow;
	CharaData_EntryList_One cluster;
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

struct Item_List
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
};

struct CharaData_EntryList_One
{
	int load;
	fsFileIndex* file;
	<unknown fundamental type (0xa510)>* adress;
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

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct CharaData_ItemFile
{
	int kind;
	fsFileIndex* file;
};

struct shBattleArea
{
	float center;
	float radius;
};

struct CharaData_WeaponFile
{
	short equip;
	short kind;
	fsFileIndex* james_anim;
	fsFileIndex* weapon_model;
	fsFileIndex* weapon_model_r;
	fsFileIndex* shadow_model;
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

struct shBattleInfo
{
	float pos[4];
	float vec[4];
	unsigned short id;
	unsigned short kind;
	float dead_timer;
	float damage;
	float shock;
	int atk_result;
	float prev_atk_pos[4];
	SubCharacter* target;
	float hp;
	float hp_max;
	float hp_rate;
	unsigned int status;
	shBattleArea look;
	shBattleArea feel;
	unsigned char se;
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

struct CharaData_StandardList
{
	int kind;
	fsFileIndex* model;
	fsFileIndex* animation;
	fsFileIndex* shadow;
};

struct CharaData_Extra
{
	<unknown fundamental type (0xa510)>* adress;
	int size;
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
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

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
};

struct _anon2
{
	fsFile* fp;
	char* name;
};

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon4 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

struct _anon3
{
	float x;
	float y;
	float z;
	float w;
};

union _anon4
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon5 hobj;
};

union _anon5
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct _anon6
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

struct chr_mge_files
{
	fsFileIndex* model_fid;
	fsFileIndex* anime_fid;
	fsFileIndex* cluster_fid;
	fsFileIndex* shadow_fid;
	int mid;
};

struct _anon7
{
	float d[4][4];
};

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
_AnimeInfo pjames_anim[34];
_AnimeInfo pjames_hg_anim[11];
_AnimeInfo pjames_sg_anim[17];
_AnimeInfo pjames_rg_anim[5];
_AnimeInfo pjames_sp_anim[17];
_AnimeInfo pjames_ka_anim[33];
_AnimeInfo pjames_pi_anim[33];
_AnimeInfo pjames_na_anim[17];
_AnimeInfo pjames_cs_anim[24];
_AnimeInfo pjames_demo_anim[30];
_AnimeInfo pjames_stage_anim[20];
CharaData_ItemFile bullet_and_drug_file[6];
CharaData_WeaponFile weapon_file[10];
CharaData_StandardList enemy_list[15];
CharaData_StandardList item_list[168];
<unknown fundamental type (0xa510)>* chara_adress;
<unknown fundamental type (0xa510)> CHRDATA[0];
fsFileIndex* stage_anim;
unsigned char chara_data_use[1024];
CharaData_MemAdmin mem_admin[32];
_SH2_SYS Sh2sys;
Stage_Data* stage;
Item item;
fsFileIndex data_chr_wp_jms_weapon_anm[1];
fsFileIndex data_chr_jms_hhh_jms_kg1[1];
fsFileIndex data_chr_jms_lll_jms_mdl[1];
fsFileIndex data_chr_jms_hll_jms_mdl[1];
fsFileIndex data_chr_jms_rlll_jms_mdl[1];
fsFileIndex data_chr_jms_rhll_jms_mdl[1];
_anon6 game_flag;
fsFileIndex data_chr_mar_hhh_mar_kg1[1];
fsFileIndex data_chr_mar_lll_mar_anm[1];
fsFileIndex data_chr_mar_lll_mar_mdl[1];
_AnimeInfo* jms_stage_anim;
Playing_Info playing;
CharaData_Extra chara_data_extra[8];

void CharaDataLoadInit();
void CharaDataLoadItem();
void CharaDataLoadWeapon();
void CharaDataLoadEnemy(int kind);
void CharaDataLoadStage();
void CharaDataLoadRoom(int room);
void CharaDataLoadDemo(CharaData_DemoList* dlp, int status);
void CharaDataLoadCancel(CharaData_DemoList* dlp);
void CharaDataLoadExec(CharaData_EntryList* entry_list, int entry_number, int status);
void CharaDataLoadExecItem(CharaData_EntryList* entry_list_p);
void CharaDataLoadExecJames(CharaData_EntryList* entry_list_p);
void CharaDataLoadExecWeapon(CharaData_EntryList* entry_list_p);
void CharaDataLoadExecStandard(CharaData_EntryList* entry_list, int* no, int* entry_no, int status);
void CharaDataLoadExecStandardSub0(CharaData_EntryList* entry_list, int* no, int* entry_no, int status);
void CharaDataWeaponTranslation(int kind, fsFileIndex* file_anm, void* adr_anm, fsFileIndex* file_mdl, void* adr_mdl);
<unknown fundamental type (0xa510)>* CharaDataExtraTranslation(fsFileIndex* file, void* adress);
<unknown fundamental type (0xa510)>* CharaDataAnimSetExtra(int kind, fsFileIndex* file, <unknown fundamental type (0xa510)>* adress, int free);
<unknown fundamental type (0xa510)>* CharaDataAnimAdressExchange(SubCharacter* scp, <unknown fundamental type (0xa510)>* adr);
<unknown fundamental type (0xa510)>* CharaDataLoadExtra(fsFileIndex* file, int status);
<unknown fundamental type (0xa510)>* CharaDataFreeSearch(int size);
int CharaDeleteNoUseOne();
void CharaDataDeleteAll();
void CharaDataDeleteOne(int kind);
void CharaDataInfoFree(CharaData_MemAdmin* admin_p, int del);
void CharaDataInfoFreeSub(CharaData_MemAdmin_One* maop);
void CharaDataUseFree(<unknown fundamental type (0xa510)>* adr, int size);
void CharaDataDeleteExtra();
int CharaDataFileSearch(fsFileIndex** file, int kind);
void CharaDataBackLoadInit();
void CharaDataBackInit(CharaData_DemoList* dlp);
int SeekMemAdminCtgry(int category);
int SeekMemAdminKind(int kind);

// 
// Start address: 0x235c50
void CharaDataLoadInit()
{
	// Line 596, Address: 0x235c50, Func Offset: 0
	// Line 597, Address: 0x235c58, Func Offset: 0x8
	// Line 599, Address: 0x235c6c, Func Offset: 0x1c
	// Line 600, Address: 0x235c80, Func Offset: 0x30
	// Line 605, Address: 0x235c88, Func Offset: 0x38
	// Line 607, Address: 0x235c98, Func Offset: 0x48
	// Func End, Address: 0x235ca8, Func Offset: 0x58
}

// 
// Start address: 0x235cb0
void CharaDataLoadItem()
{
	int i;
	CharaData_EntryList entry_list[6];
	// Line 614, Address: 0x235cb0, Func Offset: 0
	// Line 619, Address: 0x235cb8, Func Offset: 0x8
	// Line 620, Address: 0x235cc8, Func Offset: 0x18
	// Line 621, Address: 0x235cd4, Func Offset: 0x24
	// Line 622, Address: 0x235cec, Func Offset: 0x3c
	// Line 623, Address: 0x235d00, Func Offset: 0x50
	// Line 624, Address: 0x235d14, Func Offset: 0x64
	// Line 625, Address: 0x235d24, Func Offset: 0x74
	// Line 626, Address: 0x235d38, Func Offset: 0x88
	// Func End, Address: 0x235d48, Func Offset: 0x98
}

// 
// Start address: 0x235d50
void CharaDataLoadWeapon()
{
	int i;
	CharaData_EntryList entry_list[3];
	// Line 633, Address: 0x235d50, Func Offset: 0
	// Line 637, Address: 0x235d5c, Func Offset: 0xc
	// Line 638, Address: 0x235d68, Func Offset: 0x18
	// Line 639, Address: 0x235da8, Func Offset: 0x58
	// Line 641, Address: 0x235ddc, Func Offset: 0x8c
	// Line 644, Address: 0x235dec, Func Offset: 0x9c
	// Line 645, Address: 0x235df4, Func Offset: 0xa4
	// Line 646, Address: 0x235e1c, Func Offset: 0xcc
	// Line 647, Address: 0x235e24, Func Offset: 0xd4
	// Line 650, Address: 0x235e38, Func Offset: 0xe8
	// Line 651, Address: 0x235e40, Func Offset: 0xf0
	// Line 652, Address: 0x235e54, Func Offset: 0x104
	// Line 653, Address: 0x235e68, Func Offset: 0x118
	// Line 655, Address: 0x235e7c, Func Offset: 0x12c
	// Line 656, Address: 0x235e94, Func Offset: 0x144
	// Line 657, Address: 0x235e9c, Func Offset: 0x14c
	// Line 658, Address: 0x235ea4, Func Offset: 0x154
	// Line 659, Address: 0x235eb8, Func Offset: 0x168
	// Line 660, Address: 0x235ec8, Func Offset: 0x178
	// Line 661, Address: 0x235ed0, Func Offset: 0x180
	// Line 663, Address: 0x235ee4, Func Offset: 0x194
	// Func End, Address: 0x235ef8, Func Offset: 0x1a8
}

// 
// Start address: 0x235f00
void CharaDataLoadEnemy(int kind)
{
	int i;
	CharaData_EntryList entry_list;
	// Line 670, Address: 0x235f00, Func Offset: 0
	// Line 674, Address: 0x235f10, Func Offset: 0x10
	// Line 675, Address: 0x235f1c, Func Offset: 0x1c
	// Line 676, Address: 0x235f48, Func Offset: 0x48
	// Line 678, Address: 0x235f50, Func Offset: 0x50
	// Line 679, Address: 0x235f60, Func Offset: 0x60
	// Line 680, Address: 0x235f68, Func Offset: 0x68
	// Line 681, Address: 0x235f70, Func Offset: 0x70
	// Line 682, Address: 0x235f84, Func Offset: 0x84
	// Line 683, Address: 0x235f98, Func Offset: 0x98
	// Line 685, Address: 0x235fac, Func Offset: 0xac
	// Line 686, Address: 0x235fc0, Func Offset: 0xc0
	// Func End, Address: 0x235fd8, Func Offset: 0xd8
}

// 
// Start address: 0x235fe0
void CharaDataLoadStage()
{
	int i;
	CharaData_EntryList entry_list[2];
	// Line 693, Address: 0x235fe0, Func Offset: 0
	// Line 697, Address: 0x235fec, Func Offset: 0xc
	// Line 698, Address: 0x235ff8, Func Offset: 0x18
	// Line 699, Address: 0x236038, Func Offset: 0x58
	// Line 701, Address: 0x23606c, Func Offset: 0x8c
	// Line 703, Address: 0x23607c, Func Offset: 0x9c
	// Line 704, Address: 0x236084, Func Offset: 0xa4
	// Line 705, Address: 0x23609c, Func Offset: 0xbc
	// Line 706, Address: 0x2360a4, Func Offset: 0xc4
	// Line 707, Address: 0x2360b0, Func Offset: 0xd0
	// Line 708, Address: 0x2360b8, Func Offset: 0xd8
	// Line 709, Address: 0x2360c0, Func Offset: 0xe0
	// Line 711, Address: 0x2360cc, Func Offset: 0xec
	// Line 712, Address: 0x2360e0, Func Offset: 0x100
	// Line 714, Address: 0x2360ec, Func Offset: 0x10c
	// Line 715, Address: 0x2360f4, Func Offset: 0x114
	// Line 716, Address: 0x236108, Func Offset: 0x128
	// Line 717, Address: 0x23611c, Func Offset: 0x13c
	// Line 718, Address: 0x236128, Func Offset: 0x148
	// Line 720, Address: 0x23613c, Func Offset: 0x15c
	// Line 721, Address: 0x236150, Func Offset: 0x170
	// Func End, Address: 0x236164, Func Offset: 0x184
}

// 
// Start address: 0x236170
void CharaDataLoadRoom(int room)
{
	int j;
	int i;
	int entry_number;
	Model_List* mp;
	Enemy_List* ep;
	CharaData_EntryList entry_list[32];
	// Line 728, Address: 0x236170, Func Offset: 0
	// Line 736, Address: 0x236188, Func Offset: 0x18
	// Line 737, Address: 0x23619c, Func Offset: 0x2c
	// Line 739, Address: 0x2361b4, Func Offset: 0x44
	// Line 741, Address: 0x2361bc, Func Offset: 0x4c
	// Line 742, Address: 0x2361c0, Func Offset: 0x50
	// Line 745, Address: 0x2361d0, Func Offset: 0x60
	// Line 746, Address: 0x2361dc, Func Offset: 0x6c
	// Line 747, Address: 0x23620c, Func Offset: 0x9c
	// Line 748, Address: 0x236214, Func Offset: 0xa4
	// Line 749, Address: 0x236228, Func Offset: 0xb8
	// Line 750, Address: 0x236230, Func Offset: 0xc0
	// Line 751, Address: 0x236240, Func Offset: 0xd0
	// Line 753, Address: 0x236248, Func Offset: 0xd8
	// Line 755, Address: 0x23625c, Func Offset: 0xec
	// Line 756, Address: 0x236274, Func Offset: 0x104
	// Line 757, Address: 0x23627c, Func Offset: 0x10c
	// Line 758, Address: 0x236284, Func Offset: 0x114
	// Line 759, Address: 0x236290, Func Offset: 0x120
	// Line 760, Address: 0x23629c, Func Offset: 0x12c
	// Line 761, Address: 0x2362a8, Func Offset: 0x138
	// Line 764, Address: 0x2362ac, Func Offset: 0x13c
	// Line 765, Address: 0x2362c0, Func Offset: 0x150
	// Line 766, Address: 0x2362d8, Func Offset: 0x168
	// Line 767, Address: 0x2362e4, Func Offset: 0x174
	// Line 768, Address: 0x236318, Func Offset: 0x1a8
	// Line 769, Address: 0x236320, Func Offset: 0x1b0
	// Line 770, Address: 0x23632c, Func Offset: 0x1bc
	// Line 771, Address: 0x236360, Func Offset: 0x1f0
	// Line 773, Address: 0x236370, Func Offset: 0x200
	// Line 774, Address: 0x236388, Func Offset: 0x218
	// Line 775, Address: 0x23638c, Func Offset: 0x21c
	// Line 776, Address: 0x2363a0, Func Offset: 0x230
	// Line 777, Address: 0x2363b4, Func Offset: 0x244
	// Line 778, Address: 0x2363c8, Func Offset: 0x258
	// Line 779, Address: 0x2363cc, Func Offset: 0x25c
	// Line 781, Address: 0x2363f0, Func Offset: 0x280
	// Line 782, Address: 0x236404, Func Offset: 0x294
	// Line 784, Address: 0x236414, Func Offset: 0x2a4
	// Line 786, Address: 0x236430, Func Offset: 0x2c0
	// Line 788, Address: 0x236438, Func Offset: 0x2c8
	// Line 791, Address: 0x236478, Func Offset: 0x308
	// Line 793, Address: 0x236494, Func Offset: 0x324
	// Line 794, Address: 0x2364a0, Func Offset: 0x330
	// Line 795, Address: 0x2364d0, Func Offset: 0x360
	// Line 796, Address: 0x2364fc, Func Offset: 0x38c
	// Line 797, Address: 0x236508, Func Offset: 0x398
	// Line 798, Address: 0x236540, Func Offset: 0x3d0
	// Line 800, Address: 0x236550, Func Offset: 0x3e0
	// Line 801, Address: 0x236568, Func Offset: 0x3f8
	// Line 802, Address: 0x23656c, Func Offset: 0x3fc
	// Line 803, Address: 0x236580, Func Offset: 0x410
	// Line 804, Address: 0x236594, Func Offset: 0x424
	// Line 805, Address: 0x2365a8, Func Offset: 0x438
	// Line 806, Address: 0x2365ac, Func Offset: 0x43c
	// Line 809, Address: 0x2365d0, Func Offset: 0x460
	// Line 810, Address: 0x2365e8, Func Offset: 0x478
	// Line 811, Address: 0x236600, Func Offset: 0x490
	// Line 812, Address: 0x236618, Func Offset: 0x4a8
	// Line 813, Address: 0x236620, Func Offset: 0x4b0
	// Line 814, Address: 0x23662c, Func Offset: 0x4bc
	// Line 815, Address: 0x236634, Func Offset: 0x4c4
	// Line 816, Address: 0x23663c, Func Offset: 0x4cc
	// Line 818, Address: 0x236648, Func Offset: 0x4d8
	// Line 819, Address: 0x23664c, Func Offset: 0x4dc
	// Line 820, Address: 0x236660, Func Offset: 0x4f0
	// Line 821, Address: 0x236668, Func Offset: 0x4f8
	// Line 824, Address: 0x236680, Func Offset: 0x510
	// Line 825, Address: 0x236694, Func Offset: 0x524
	// Func End, Address: 0x2366b0, Func Offset: 0x540
}

// 
// Start address: 0x2366b0
void CharaDataLoadDemo(CharaData_DemoList* dlp, int status)
{
	int i;
	int entry_number;
	CharaData_EntryList entry_list[32];
	// Line 834, Address: 0x2366b0, Func Offset: 0
	// Line 839, Address: 0x2366cc, Func Offset: 0x1c
	// Line 840, Address: 0x2366d0, Func Offset: 0x20
	// Line 843, Address: 0x2366e0, Func Offset: 0x30
	// Line 844, Address: 0x2366ec, Func Offset: 0x3c
	// Line 845, Address: 0x236704, Func Offset: 0x54
	// Line 846, Address: 0x23670c, Func Offset: 0x5c
	// Line 847, Address: 0x236718, Func Offset: 0x68
	// Line 848, Address: 0x236720, Func Offset: 0x70
	// Line 849, Address: 0x236728, Func Offset: 0x78
	// Line 850, Address: 0x236730, Func Offset: 0x80
	// Line 851, Address: 0x236734, Func Offset: 0x84
	// Line 853, Address: 0x236760, Func Offset: 0xb0
	// Line 854, Address: 0x236774, Func Offset: 0xc4
	// Func End, Address: 0x236790, Func Offset: 0xe0
}

// 
// Start address: 0x236790
void CharaDataLoadCancel(CharaData_DemoList* dlp)
{
	// Line 859, Address: 0x236790, Func Offset: 0
	// Line 862, Address: 0x2367a0, Func Offset: 0x10
	// Line 863, Address: 0x2367a8, Func Offset: 0x18
	// Line 864, Address: 0x2367b8, Func Offset: 0x28
	// Line 865, Address: 0x2367dc, Func Offset: 0x4c
	// Func End, Address: 0x2367f0, Func Offset: 0x60
}

// 
// Start address: 0x2367f0
void CharaDataLoadExec(CharaData_EntryList* entry_list, int entry_number, int status)
{
	int k;
	int j;
	int i;
	chr_mge_files load_files[32];
	SubCharacter* scp;
	// Line 872, Address: 0x2367f0, Func Offset: 0
	// Line 877, Address: 0x236814, Func Offset: 0x24
	// Line 878, Address: 0x236820, Func Offset: 0x30
	// Line 879, Address: 0x23682c, Func Offset: 0x3c
	// Line 880, Address: 0x23686c, Func Offset: 0x7c
	// Line 881, Address: 0x236888, Func Offset: 0x98
	// Line 882, Address: 0x236890, Func Offset: 0xa0
	// Line 884, Address: 0x236898, Func Offset: 0xa8
	// Line 885, Address: 0x2368b0, Func Offset: 0xc0
	// Line 887, Address: 0x2368d4, Func Offset: 0xe4
	// Line 888, Address: 0x2368e0, Func Offset: 0xf0
	// Line 891, Address: 0x23692c, Func Offset: 0x13c
	// Line 893, Address: 0x23693c, Func Offset: 0x14c
	// Line 895, Address: 0x23694c, Func Offset: 0x15c
	// Line 897, Address: 0x23695c, Func Offset: 0x16c
	// Line 900, Address: 0x236974, Func Offset: 0x184
	// Line 901, Address: 0x236978, Func Offset: 0x188
	// Line 903, Address: 0x23699c, Func Offset: 0x1ac
	// Line 904, Address: 0x2369a8, Func Offset: 0x1b8
	// Line 905, Address: 0x2369d0, Func Offset: 0x1e0
	// Line 906, Address: 0x2369d8, Func Offset: 0x1e8
	// Line 907, Address: 0x2369e4, Func Offset: 0x1f4
	// Line 908, Address: 0x236a0c, Func Offset: 0x21c
	// Line 910, Address: 0x236a18, Func Offset: 0x228
	// Line 911, Address: 0x236a44, Func Offset: 0x254
	// Line 914, Address: 0x236a50, Func Offset: 0x260
	// Line 915, Address: 0x236a7c, Func Offset: 0x28c
	// Line 918, Address: 0x236a88, Func Offset: 0x298
	// Line 919, Address: 0x236ab4, Func Offset: 0x2c4
	// Line 921, Address: 0x236ac0, Func Offset: 0x2d0
	// Line 922, Address: 0x236ae4, Func Offset: 0x2f4
	// Line 924, Address: 0x236aec, Func Offset: 0x2fc
	// Line 927, Address: 0x236afc, Func Offset: 0x30c
	// Line 928, Address: 0x236b0c, Func Offset: 0x31c
	// Line 931, Address: 0x236b5c, Func Offset: 0x36c
	// Line 932, Address: 0x236b60, Func Offset: 0x370
	// Line 933, Address: 0x236b70, Func Offset: 0x380
	// Line 934, Address: 0x236b88, Func Offset: 0x398
	// Line 935, Address: 0x236b98, Func Offset: 0x3a8
	// Line 936, Address: 0x236bb0, Func Offset: 0x3c0
	// Line 937, Address: 0x236bc0, Func Offset: 0x3d0
	// Line 938, Address: 0x236bd8, Func Offset: 0x3e8
	// Line 939, Address: 0x236be8, Func Offset: 0x3f8
	// Line 940, Address: 0x236c00, Func Offset: 0x410
	// Line 941, Address: 0x236c1c, Func Offset: 0x42c
	// Line 942, Address: 0x236c20, Func Offset: 0x430
	// Line 943, Address: 0x236c44, Func Offset: 0x454
	// Line 944, Address: 0x236c58, Func Offset: 0x468
	// Line 946, Address: 0x236c6c, Func Offset: 0x47c
	// Line 947, Address: 0x236c74, Func Offset: 0x484
	// Line 950, Address: 0x236c80, Func Offset: 0x490
	// Line 951, Address: 0x236c90, Func Offset: 0x4a0
	// Line 955, Address: 0x236ce0, Func Offset: 0x4f0
	// Line 959, Address: 0x236d0c, Func Offset: 0x51c
	// Line 960, Address: 0x236d10, Func Offset: 0x520
	// Line 962, Address: 0x236d34, Func Offset: 0x544
	// Line 964, Address: 0x236d44, Func Offset: 0x554
	// Line 965, Address: 0x236d50, Func Offset: 0x560
	// Line 966, Address: 0x236d60, Func Offset: 0x570
	// Line 967, Address: 0x236d6c, Func Offset: 0x57c
	// Line 968, Address: 0x236d88, Func Offset: 0x598
	// Line 969, Address: 0x236dbc, Func Offset: 0x5cc
	// Line 970, Address: 0x236dc4, Func Offset: 0x5d4
	// Line 971, Address: 0x236dd0, Func Offset: 0x5e0
	// Line 972, Address: 0x236dd8, Func Offset: 0x5e8
	// Line 976, Address: 0x236e00, Func Offset: 0x610
	// Func End, Address: 0x236e20, Func Offset: 0x630
}

// 
// Start address: 0x236e20
void CharaDataLoadExecItem(CharaData_EntryList* entry_list_p)
{
	int i;
	int size;
	// Line 983, Address: 0x236e20, Func Offset: 0
	// Line 987, Address: 0x236e38, Func Offset: 0x18
	// Line 989, Address: 0x236e44, Func Offset: 0x24
	// Line 991, Address: 0x236e50, Func Offset: 0x30
	// Line 993, Address: 0x236e5c, Func Offset: 0x3c
	// Line 994, Address: 0x236e84, Func Offset: 0x64
	// Line 995, Address: 0x236e94, Func Offset: 0x74
	// Line 997, Address: 0x236ea8, Func Offset: 0x88
	// Line 998, Address: 0x236ec0, Func Offset: 0xa0
	// Line 999, Address: 0x236ed0, Func Offset: 0xb0
	// Line 1000, Address: 0x236ed8, Func Offset: 0xb8
	// Line 1001, Address: 0x236eec, Func Offset: 0xcc
	// Line 1002, Address: 0x236f00, Func Offset: 0xe0
	// Line 1003, Address: 0x236f10, Func Offset: 0xf0
	// Line 1004, Address: 0x236f18, Func Offset: 0xf8
	// Line 1005, Address: 0x236f20, Func Offset: 0x100
	// Line 1007, Address: 0x236f48, Func Offset: 0x128
	// Func End, Address: 0x236f64, Func Offset: 0x144
}

// 
// Start address: 0x236f70
void CharaDataLoadExecJames(CharaData_EntryList* entry_list_p)
{
	int j;
	int i;
	int size;
	fsFileIndex* stage_anim_list[53];
	// Line 1014, Address: 0x236f70, Func Offset: 0
	// Line 1073, Address: 0x236f88, Func Offset: 0x18
	// Line 1075, Address: 0x236f94, Func Offset: 0x24
	// Line 1076, Address: 0x236fa0, Func Offset: 0x30
	// Line 1078, Address: 0x236fac, Func Offset: 0x3c
	// Line 1079, Address: 0x236fd4, Func Offset: 0x64
	// Line 1080, Address: 0x236fe4, Func Offset: 0x74
	// Line 1083, Address: 0x236ff8, Func Offset: 0x88
	// Line 1084, Address: 0x23700c, Func Offset: 0x9c
	// Line 1085, Address: 0x237014, Func Offset: 0xa4
	// Line 1086, Address: 0x237028, Func Offset: 0xb8
	// Line 1087, Address: 0x23703c, Func Offset: 0xcc
	// Line 1090, Address: 0x237054, Func Offset: 0xe4
	// Line 1091, Address: 0x237068, Func Offset: 0xf8
	// Line 1092, Address: 0x237070, Func Offset: 0x100
	// Line 1093, Address: 0x237084, Func Offset: 0x114
	// Line 1094, Address: 0x237098, Func Offset: 0x128
	// Line 1097, Address: 0x2370b0, Func Offset: 0x140
	// Line 1098, Address: 0x2370c0, Func Offset: 0x150
	// Line 1099, Address: 0x2370c8, Func Offset: 0x158
	// Line 1100, Address: 0x2370dc, Func Offset: 0x16c
	// Line 1101, Address: 0x2370f0, Func Offset: 0x180
	// Line 1102, Address: 0x237104, Func Offset: 0x194
	// Line 1103, Address: 0x23710c, Func Offset: 0x19c
	// Line 1104, Address: 0x237134, Func Offset: 0x1c4
	// Line 1105, Address: 0x23713c, Func Offset: 0x1cc
	// Line 1106, Address: 0x237150, Func Offset: 0x1e0
	// Line 1108, Address: 0x237174, Func Offset: 0x204
	// Line 1109, Address: 0x23717c, Func Offset: 0x20c
	// Line 1110, Address: 0x237188, Func Offset: 0x218
	// Line 1112, Address: 0x237190, Func Offset: 0x220
	// Line 1113, Address: 0x2371a4, Func Offset: 0x234
	// Line 1115, Address: 0x2371c8, Func Offset: 0x258
	// Line 1116, Address: 0x2371d0, Func Offset: 0x260
	// Line 1118, Address: 0x2371d8, Func Offset: 0x268
	// Line 1119, Address: 0x2371ec, Func Offset: 0x27c
	// Line 1121, Address: 0x237210, Func Offset: 0x2a0
	// Line 1122, Address: 0x237218, Func Offset: 0x2a8
	// Line 1127, Address: 0x237220, Func Offset: 0x2b0
	// Line 1128, Address: 0x23724c, Func Offset: 0x2dc
	// Line 1129, Address: 0x237254, Func Offset: 0x2e4
	// Line 1131, Address: 0x23726c, Func Offset: 0x2fc
	// Line 1133, Address: 0x237280, Func Offset: 0x310
	// Func End, Address: 0x23729c, Func Offset: 0x32c
}

// 
// Start address: 0x2372a0
void CharaDataLoadExecWeapon(CharaData_EntryList* entry_list_p)
{
	int j;
	int i;
	int size;
	// Line 1140, Address: 0x2372a0, Func Offset: 0
	// Line 1144, Address: 0x2372b4, Func Offset: 0x14
	// Line 1146, Address: 0x2372c0, Func Offset: 0x20
	// Line 1147, Address: 0x2372cc, Func Offset: 0x2c
	// Line 1149, Address: 0x2372d8, Func Offset: 0x38
	// Line 1150, Address: 0x237300, Func Offset: 0x60
	// Line 1151, Address: 0x237310, Func Offset: 0x70
	// Line 1154, Address: 0x237324, Func Offset: 0x84
	// Line 1155, Address: 0x237334, Func Offset: 0x94
	// Line 1156, Address: 0x23733c, Func Offset: 0x9c
	// Line 1157, Address: 0x237350, Func Offset: 0xb0
	// Line 1158, Address: 0x237364, Func Offset: 0xc4
	// Line 1161, Address: 0x237378, Func Offset: 0xd8
	// Line 1162, Address: 0x237388, Func Offset: 0xe8
	// Line 1163, Address: 0x237390, Func Offset: 0xf0
	// Line 1164, Address: 0x2373a4, Func Offset: 0x104
	// Line 1165, Address: 0x2373b8, Func Offset: 0x118
	// Line 1168, Address: 0x2373cc, Func Offset: 0x12c
	// Line 1169, Address: 0x2373d8, Func Offset: 0x138
	// Line 1170, Address: 0x2373e0, Func Offset: 0x140
	// Line 1171, Address: 0x2373f4, Func Offset: 0x154
	// Line 1172, Address: 0x237408, Func Offset: 0x168
	// Line 1173, Address: 0x23741c, Func Offset: 0x17c
	// Line 1174, Address: 0x237424, Func Offset: 0x184
	// Line 1175, Address: 0x23744c, Func Offset: 0x1ac
	// Line 1176, Address: 0x237460, Func Offset: 0x1c0
	// Line 1178, Address: 0x237484, Func Offset: 0x1e4
	// Line 1179, Address: 0x23748c, Func Offset: 0x1ec
	// Line 1181, Address: 0x237494, Func Offset: 0x1f4
	// Line 1182, Address: 0x2374a8, Func Offset: 0x208
	// Line 1183, Address: 0x2374bc, Func Offset: 0x21c
	// Line 1185, Address: 0x2374e0, Func Offset: 0x240
	// Line 1186, Address: 0x2374e8, Func Offset: 0x248
	// Line 1188, Address: 0x2374f0, Func Offset: 0x250
	// Line 1190, Address: 0x2374f8, Func Offset: 0x258
	// Func End, Address: 0x237510, Func Offset: 0x270
}

// 
// Start address: 0x237510
void CharaDataLoadExecStandard(CharaData_EntryList* entry_list, int* no, int* entry_no, int status)
{
	int j;
	int i;
	<unknown fundamental type (0xa510)>* adr;
	CharaData_MemAdmin_One* maop;
	CharaData_MemAdmin* map;
	CharaData_EntryList_One* elop;
	CharaData_EntryList* entry_list_p;
	// Line 1196, Address: 0x237510, Func Offset: 0
	// Line 1204, Address: 0x23754c, Func Offset: 0x3c
	// Line 1208, Address: 0x237560, Func Offset: 0x50
	// Line 1209, Address: 0x23756c, Func Offset: 0x5c
	// Line 1210, Address: 0x23759c, Func Offset: 0x8c
	// Line 1214, Address: 0x23760c, Func Offset: 0xfc
	// Line 1215, Address: 0x237620, Func Offset: 0x110
	// Line 1219, Address: 0x237628, Func Offset: 0x118
	// Line 1221, Address: 0x237640, Func Offset: 0x130
	// Line 1223, Address: 0x237658, Func Offset: 0x148
	// Line 1224, Address: 0x237680, Func Offset: 0x170
	// Line 1227, Address: 0x23768c, Func Offset: 0x17c
	// Line 1228, Address: 0x237698, Func Offset: 0x188
	// Line 1229, Address: 0x23769c, Func Offset: 0x18c
	// Line 1231, Address: 0x2376c8, Func Offset: 0x1b8
	// Line 1232, Address: 0x2376cc, Func Offset: 0x1bc
	// Line 1233, Address: 0x2376d8, Func Offset: 0x1c8
	// Line 1234, Address: 0x2376e0, Func Offset: 0x1d0
	// Line 1235, Address: 0x2376e4, Func Offset: 0x1d4
	// Line 1236, Address: 0x2376f0, Func Offset: 0x1e0
	// Line 1237, Address: 0x2376f8, Func Offset: 0x1e8
	// Line 1238, Address: 0x2376fc, Func Offset: 0x1ec
	// Line 1239, Address: 0x237708, Func Offset: 0x1f8
	// Line 1240, Address: 0x237710, Func Offset: 0x200
	// Line 1241, Address: 0x237714, Func Offset: 0x204
	// Line 1245, Address: 0x237720, Func Offset: 0x210
	// Line 1247, Address: 0x23772c, Func Offset: 0x21c
	// Line 1248, Address: 0x237740, Func Offset: 0x230
	// Line 1249, Address: 0x237748, Func Offset: 0x238
	// Line 1250, Address: 0x237750, Func Offset: 0x240
	// Line 1252, Address: 0x237760, Func Offset: 0x250
	// Line 1255, Address: 0x237768, Func Offset: 0x258
	// Line 1256, Address: 0x237770, Func Offset: 0x260
	// Line 1257, Address: 0x23777c, Func Offset: 0x26c
	// Line 1258, Address: 0x237784, Func Offset: 0x274
	// Line 1260, Address: 0x23778c, Func Offset: 0x27c
	// Line 1261, Address: 0x237794, Func Offset: 0x284
	// Line 1262, Address: 0x23779c, Func Offset: 0x28c
	// Line 1265, Address: 0x2377ac, Func Offset: 0x29c
	// Line 1266, Address: 0x2377b0, Func Offset: 0x2a0
	// Line 1268, Address: 0x2377d0, Func Offset: 0x2c0
	// Line 1269, Address: 0x2377d8, Func Offset: 0x2c8
	// Line 1270, Address: 0x2377e8, Func Offset: 0x2d8
	// Line 1271, Address: 0x23781c, Func Offset: 0x30c
	// Line 1272, Address: 0x237820, Func Offset: 0x310
	// Line 1274, Address: 0x237844, Func Offset: 0x334
	// Line 1277, Address: 0x237868, Func Offset: 0x358
	// Line 1279, Address: 0x23788c, Func Offset: 0x37c
	// Line 1281, Address: 0x2378b0, Func Offset: 0x3a0
	// Line 1283, Address: 0x2378c8, Func Offset: 0x3b8
	// Line 1286, Address: 0x2378d0, Func Offset: 0x3c0
	// Line 1287, Address: 0x2378d4, Func Offset: 0x3c4
	// Line 1288, Address: 0x2378dc, Func Offset: 0x3cc
	// Line 1290, Address: 0x2378f4, Func Offset: 0x3e4
	// Line 1291, Address: 0x2378fc, Func Offset: 0x3ec
	// Line 1292, Address: 0x23790c, Func Offset: 0x3fc
	// Line 1293, Address: 0x23792c, Func Offset: 0x41c
	// Line 1294, Address: 0x237934, Func Offset: 0x424
	// Line 1297, Address: 0x23793c, Func Offset: 0x42c
	// Line 1299, Address: 0x237944, Func Offset: 0x434
	// Line 1300, Address: 0x237950, Func Offset: 0x440
	// Line 1301, Address: 0x237978, Func Offset: 0x468
	// Line 1302, Address: 0x23798c, Func Offset: 0x47c
	// Line 1305, Address: 0x2379b4, Func Offset: 0x4a4
	// Line 1306, Address: 0x2379c0, Func Offset: 0x4b0
	// Line 1307, Address: 0x2379e8, Func Offset: 0x4d8
	// Line 1308, Address: 0x2379fc, Func Offset: 0x4ec
	// Line 1311, Address: 0x237a24, Func Offset: 0x514
	// Line 1312, Address: 0x237a30, Func Offset: 0x520
	// Line 1313, Address: 0x237a58, Func Offset: 0x548
	// Line 1314, Address: 0x237a6c, Func Offset: 0x55c
	// Line 1317, Address: 0x237a94, Func Offset: 0x584
	// Line 1318, Address: 0x237aa0, Func Offset: 0x590
	// Line 1319, Address: 0x237ac8, Func Offset: 0x5b8
	// Line 1320, Address: 0x237adc, Func Offset: 0x5cc
	// Line 1323, Address: 0x237b04, Func Offset: 0x5f4
	// Func End, Address: 0x237b38, Func Offset: 0x628
}

// 
// Start address: 0x237b40
void CharaDataLoadExecStandardSub0(CharaData_EntryList* entry_list, int* no, int* entry_no, int status)
{
	int j;
	int i;
	CharaData_EntryList entry_list_bak[32];
	// Line 1329, Address: 0x237b40, Func Offset: 0
	// Line 1333, Address: 0x237b6c, Func Offset: 0x2c
	// Line 1335, Address: 0x237ba0, Func Offset: 0x60
	// Line 1338, Address: 0x237bb0, Func Offset: 0x70
	// Line 1339, Address: 0x237bc0, Func Offset: 0x80
	// Line 1340, Address: 0x237bec, Func Offset: 0xac
	// Line 1341, Address: 0x237c04, Func Offset: 0xc4
	// Line 1342, Address: 0x237c10, Func Offset: 0xd0
	// Line 1343, Address: 0x237c28, Func Offset: 0xe8
	// Line 1344, Address: 0x237c68, Func Offset: 0x128
	// Line 1345, Address: 0x237ca8, Func Offset: 0x168
	// Line 1346, Address: 0x237ce8, Func Offset: 0x1a8
	// Line 1347, Address: 0x237d28, Func Offset: 0x1e8
	// Line 1348, Address: 0x237d68, Func Offset: 0x228
	// Line 1349, Address: 0x237d74, Func Offset: 0x234
	// Line 1350, Address: 0x237d78, Func Offset: 0x238
	// Line 1351, Address: 0x237da8, Func Offset: 0x268
	// Line 1352, Address: 0x237dc8, Func Offset: 0x288
	// Line 1353, Address: 0x237dd4, Func Offset: 0x294
	// Line 1355, Address: 0x237dec, Func Offset: 0x2ac
	// Line 1357, Address: 0x237e0c, Func Offset: 0x2cc
	// Line 1359, Address: 0x237e40, Func Offset: 0x300
	// Line 1360, Address: 0x237e58, Func Offset: 0x318
	// Line 1361, Address: 0x237e60, Func Offset: 0x320
	// Line 1363, Address: 0x237e78, Func Offset: 0x338
	// Func End, Address: 0x237e98, Func Offset: 0x358
}

// 
// Start address: 0x237ea0
void CharaDataWeaponTranslation(int kind, fsFileIndex* file_anm, void* adr_anm, fsFileIndex* file_mdl, void* adr_mdl)
{
	int j;
	int i;
	chr_mge_files load_files[3];
	SubCharacter* scp;
	// Line 1375, Address: 0x237ea0, Func Offset: 0
	// Line 1382, Address: 0x237edc, Func Offset: 0x3c
	// Line 1383, Address: 0x237eec, Func Offset: 0x4c
	// Line 1385, Address: 0x237efc, Func Offset: 0x5c
	// Line 1386, Address: 0x237f28, Func Offset: 0x88
	// Line 1387, Address: 0x237f38, Func Offset: 0x98
	// Line 1389, Address: 0x237f6c, Func Offset: 0xcc
	// Line 1390, Address: 0x237f90, Func Offset: 0xf0
	// Line 1391, Address: 0x237fa0, Func Offset: 0x100
	// Line 1394, Address: 0x237fd4, Func Offset: 0x134
	// Line 1395, Address: 0x237fe4, Func Offset: 0x144
	// Line 1396, Address: 0x237fec, Func Offset: 0x14c
	// Line 1397, Address: 0x237ff4, Func Offset: 0x154
	// Line 1399, Address: 0x237ffc, Func Offset: 0x15c
	// Line 1400, Address: 0x238014, Func Offset: 0x174
	// Line 1403, Address: 0x23803c, Func Offset: 0x19c
	// Line 1406, Address: 0x238058, Func Offset: 0x1b8
	// Line 1407, Address: 0x238060, Func Offset: 0x1c0
	// Line 1408, Address: 0x238068, Func Offset: 0x1c8
	// Line 1409, Address: 0x238074, Func Offset: 0x1d4
	// Line 1410, Address: 0x23807c, Func Offset: 0x1dc
	// Line 1411, Address: 0x2380a0, Func Offset: 0x200
	// Func End, Address: 0x2380d0, Func Offset: 0x230
}

// 
// Start address: 0x2380d0
<unknown fundamental type (0xa510)>* CharaDataExtraTranslation(fsFileIndex* file, void* adress)
{
	int size;
	<unknown fundamental type (0xa510)>* free_adr;
	// Line 1421, Address: 0x2380d0, Func Offset: 0
	// Line 1425, Address: 0x2380e8, Func Offset: 0x18
	// Line 1426, Address: 0x2380f4, Func Offset: 0x24
	// Line 1427, Address: 0x23810c, Func Offset: 0x3c
	// Line 1428, Address: 0x23813c, Func Offset: 0x6c
	// Line 1430, Address: 0x238158, Func Offset: 0x88
	// Line 1431, Address: 0x23815c, Func Offset: 0x8c
	// Func End, Address: 0x238178, Func Offset: 0xa8
}

// 
// Start address: 0x238180
<unknown fundamental type (0xa510)>* CharaDataAnimSetExtra(int kind, fsFileIndex* file, <unknown fundamental type (0xa510)>* adress, int free)
{
	int j;
	int i;
	<unknown fundamental type (0xa510)>* ret_adr;
	chr_mge_files load_files[2];
	SubCharacter* scp;
	// Line 1441, Address: 0x238180, Func Offset: 0
	// Line 1447, Address: 0x2381b4, Func Offset: 0x34
	// Line 1448, Address: 0x2381bc, Func Offset: 0x3c
	// Line 1450, Address: 0x2381e0, Func Offset: 0x60
	// Line 1451, Address: 0x2381e8, Func Offset: 0x68
	// Line 1452, Address: 0x2381f4, Func Offset: 0x74
	// Line 1453, Address: 0x238210, Func Offset: 0x90
	// Line 1454, Address: 0x238214, Func Offset: 0x94
	// Line 1455, Address: 0x238224, Func Offset: 0xa4
	// Line 1456, Address: 0x238228, Func Offset: 0xa8
	// Line 1457, Address: 0x23823c, Func Offset: 0xbc
	// Line 1459, Address: 0x238254, Func Offset: 0xd4
	// Line 1460, Address: 0x238264, Func Offset: 0xe4
	// Line 1461, Address: 0x238268, Func Offset: 0xe8
	// Line 1463, Address: 0x238290, Func Offset: 0x110
	// Line 1464, Address: 0x2382a0, Func Offset: 0x120
	// Line 1465, Address: 0x2382a4, Func Offset: 0x124
	// Line 1466, Address: 0x2382ac, Func Offset: 0x12c
	// Line 1467, Address: 0x2382c4, Func Offset: 0x144
	// Line 1470, Address: 0x2382e0, Func Offset: 0x160
	// Line 1471, Address: 0x2382e8, Func Offset: 0x168
	// Line 1472, Address: 0x2382f4, Func Offset: 0x174
	// Line 1473, Address: 0x2382fc, Func Offset: 0x17c
	// Line 1474, Address: 0x238308, Func Offset: 0x188
	// Line 1475, Address: 0x238310, Func Offset: 0x190
	// Line 1477, Address: 0x238338, Func Offset: 0x1b8
	// Line 1478, Address: 0x23833c, Func Offset: 0x1bc
	// Func End, Address: 0x238368, Func Offset: 0x1e8
}

// 
// Start address: 0x238370
<unknown fundamental type (0xa510)>* CharaDataAnimAdressExchange(SubCharacter* scp, <unknown fundamental type (0xa510)>* adr)
{
	int i;
	<unknown fundamental type (0xa510)>* ret;
	// Line 1489, Address: 0x238370, Func Offset: 0
	// Line 1493, Address: 0x23838c, Func Offset: 0x1c
	// Line 1494, Address: 0x238398, Func Offset: 0x28
	// Line 1495, Address: 0x2383bc, Func Offset: 0x4c
	// Line 1496, Address: 0x2383c0, Func Offset: 0x50
	// Line 1498, Address: 0x2383d0, Func Offset: 0x60
	// Line 1499, Address: 0x2383d4, Func Offset: 0x64
	// Func End, Address: 0x2383f0, Func Offset: 0x80
}

// 
// Start address: 0x2383f0
<unknown fundamental type (0xa510)>* CharaDataLoadExtra(fsFileIndex* file, int status)
{
	int i;
	int del;
	int size;
	<unknown fundamental type (0xa510)>* adr;
	// Line 1509, Address: 0x2383f0, Func Offset: 0
	// Line 1515, Address: 0x238410, Func Offset: 0x20
	// Line 1517, Address: 0x238424, Func Offset: 0x34
	// Line 1518, Address: 0x238434, Func Offset: 0x44
	// Line 1519, Address: 0x23843c, Func Offset: 0x4c
	// Line 1520, Address: 0x238444, Func Offset: 0x54
	// Line 1523, Address: 0x238474, Func Offset: 0x84
	// Line 1524, Address: 0x238480, Func Offset: 0x90
	// Line 1525, Address: 0x238490, Func Offset: 0xa0
	// Line 1526, Address: 0x238498, Func Offset: 0xa8
	// Line 1529, Address: 0x2384a8, Func Offset: 0xb8
	// Line 1530, Address: 0x2384b4, Func Offset: 0xc4
	// Line 1531, Address: 0x2384c4, Func Offset: 0xd4
	// Line 1532, Address: 0x2384d8, Func Offset: 0xe8
	// Line 1533, Address: 0x2384e4, Func Offset: 0xf4
	// Line 1534, Address: 0x238518, Func Offset: 0x128
	// Line 1535, Address: 0x23854c, Func Offset: 0x15c
	// Line 1536, Address: 0x238560, Func Offset: 0x170
	// Line 1539, Address: 0x238570, Func Offset: 0x180
	// Line 1540, Address: 0x238574, Func Offset: 0x184
	// Func End, Address: 0x238594, Func Offset: 0x1a4
}

// 
// Start address: 0x2385a0
<unknown fundamental type (0xa510)>* CharaDataFreeSearch(int size)
{
	int j;
	int i;
	// Line 1551, Address: 0x2385a0, Func Offset: 0
	// Line 1552, Address: 0x2385ac, Func Offset: 0xc
	// Line 1554, Address: 0x2385b8, Func Offset: 0x18
	// Line 1555, Address: 0x238600, Func Offset: 0x60
	// Line 1556, Address: 0x23860c, Func Offset: 0x6c
	// Line 1557, Address: 0x238610, Func Offset: 0x70
	// Line 1559, Address: 0x238628, Func Offset: 0x88
	// Line 1561, Address: 0x238640, Func Offset: 0xa0
	// Line 1563, Address: 0x238678, Func Offset: 0xd8
	// Line 1564, Address: 0x238690, Func Offset: 0xf0
	// Func End, Address: 0x238698, Func Offset: 0xf8
}

// 
// Start address: 0x2386a0
int CharaDeleteNoUseOne()
{
	int i;
	int del_no;
	int del_prio;
	// Line 1569, Address: 0x2386a0, Func Offset: 0
	// Line 1574, Address: 0x2386a8, Func Offset: 0x8
	// Line 1575, Address: 0x2386ac, Func Offset: 0xc
	// Line 1576, Address: 0x2386b0, Func Offset: 0x10
	// Line 1577, Address: 0x2386bc, Func Offset: 0x1c
	// Line 1579, Address: 0x2386e8, Func Offset: 0x48
	// Line 1580, Address: 0x238704, Func Offset: 0x64
	// Line 1581, Address: 0x238708, Func Offset: 0x68
	// Line 1582, Address: 0x23870c, Func Offset: 0x6c
	// Line 1583, Address: 0x238724, Func Offset: 0x84
	// Line 1585, Address: 0x23873c, Func Offset: 0x9c
	// Line 1586, Address: 0x238768, Func Offset: 0xc8
	// Line 1587, Address: 0x23876c, Func Offset: 0xcc
	// Func End, Address: 0x23877c, Func Offset: 0xdc
}

// 
// Start address: 0x238780
void CharaDataDeleteAll()
{
	int i;
	// Line 1594, Address: 0x238780, Func Offset: 0
	// Line 1597, Address: 0x23878c, Func Offset: 0xc
	// Line 1598, Address: 0x238798, Func Offset: 0x18
	// Line 1599, Address: 0x2387c8, Func Offset: 0x48
	// Line 1600, Address: 0x2387d4, Func Offset: 0x54
	// Line 1601, Address: 0x2387ec, Func Offset: 0x6c
	// Func End, Address: 0x238800, Func Offset: 0x80
}

// 
// Start address: 0x238800
void CharaDataDeleteOne(int kind)
{
	int i;
	SubCharacter* next;
	SubCharacter* scp;
	// Line 1608, Address: 0x238800, Func Offset: 0
	// Line 1614, Address: 0x238814, Func Offset: 0x14
	// Line 1615, Address: 0x238820, Func Offset: 0x20
	// Line 1616, Address: 0x238828, Func Offset: 0x28
	// Line 1617, Address: 0x23882c, Func Offset: 0x2c
	// Line 1619, Address: 0x238860, Func Offset: 0x60
	// Line 1620, Address: 0x238870, Func Offset: 0x70
	// Line 1623, Address: 0x238880, Func Offset: 0x80
	// Line 1624, Address: 0x23888c, Func Offset: 0x8c
	// Line 1625, Address: 0x2388b8, Func Offset: 0xb8
	// Line 1626, Address: 0x2388d0, Func Offset: 0xd0
	// Line 1627, Address: 0x2388e4, Func Offset: 0xe4
	// Func End, Address: 0x2388fc, Func Offset: 0xfc
}

// 
// Start address: 0x238900
void CharaDataInfoFree(CharaData_MemAdmin* admin_p, int del)
{
	// Line 1634, Address: 0x238900, Func Offset: 0
	// Line 1635, Address: 0x238918, Func Offset: 0x18
	// Line 1636, Address: 0x238930, Func Offset: 0x30
	// Line 1638, Address: 0x23893c, Func Offset: 0x3c
	// Line 1639, Address: 0x238954, Func Offset: 0x54
	// Line 1641, Address: 0x238960, Func Offset: 0x60
	// Line 1642, Address: 0x238978, Func Offset: 0x78
	// Line 1644, Address: 0x238984, Func Offset: 0x84
	// Line 1645, Address: 0x23899c, Func Offset: 0x9c
	// Line 1647, Address: 0x2389a8, Func Offset: 0xa8
	// Line 1648, Address: 0x2389b4, Func Offset: 0xb4
	// Line 1649, Address: 0x2389c0, Func Offset: 0xc0
	// Line 1651, Address: 0x2389d0, Func Offset: 0xd0
	// Func End, Address: 0x2389e8, Func Offset: 0xe8
}

// 
// Start address: 0x2389f0
void CharaDataInfoFreeSub(CharaData_MemAdmin_One* maop)
{
	// Line 1656, Address: 0x2389f0, Func Offset: 0
	// Line 1658, Address: 0x238a00, Func Offset: 0x10
	// Line 1660, Address: 0x238a2c, Func Offset: 0x3c
	// Line 1661, Address: 0x238a38, Func Offset: 0x48
	// Line 1662, Address: 0x238a48, Func Offset: 0x58
	// Func End, Address: 0x238a5c, Func Offset: 0x6c
}

// 
// Start address: 0x238a60
void CharaDataUseFree(<unknown fundamental type (0xa510)>* adr, int size)
{
	int i;
	int work;
	// Line 1671, Address: 0x238a60, Func Offset: 0
	// Line 1673, Address: 0x238a84, Func Offset: 0x24
	// Line 1675, Address: 0x238aa0, Func Offset: 0x40
	// Line 1676, Address: 0x238ad8, Func Offset: 0x78
	// Func End, Address: 0x238ae0, Func Offset: 0x80
}

// 
// Start address: 0x238ae0
void CharaDataDeleteExtra()
{
	int i;
	// Line 1681, Address: 0x238ae0, Func Offset: 0
	// Line 1684, Address: 0x238ae8, Func Offset: 0x8
	// Line 1685, Address: 0x238af4, Func Offset: 0x14
	// Line 1687, Address: 0x238b28, Func Offset: 0x48
	// Line 1688, Address: 0x238b3c, Func Offset: 0x5c
	// Line 1690, Address: 0x238b50, Func Offset: 0x70
	// Func End, Address: 0x238b60, Func Offset: 0x80
}

// 
// Start address: 0x238b60
int CharaDataFileSearch(fsFileIndex** file, int kind)
{
	int i;
	// Line 1703, Address: 0x238b60, Func Offset: 0
	// Line 1704, Address: 0x238b6c, Func Offset: 0xc
	// Line 1705, Address: 0x238b74, Func Offset: 0x14
	// Line 1706, Address: 0x238b88, Func Offset: 0x28
	// Line 1707, Address: 0x238b9c, Func Offset: 0x3c
	// Line 1708, Address: 0x238bb0, Func Offset: 0x50
	// Line 1710, Address: 0x238bbc, Func Offset: 0x5c
	// Line 1711, Address: 0x238bdc, Func Offset: 0x7c
	// Line 1712, Address: 0x238be0, Func Offset: 0x80
	// Func End, Address: 0x238be8, Func Offset: 0x88
}

// 
// Start address: 0x238bf0
void CharaDataBackLoadInit()
{
	// Line 1748, Address: 0x238bf0, Func Offset: 0
	// Line 1749, Address: 0x238bf8, Func Offset: 0x8
	// Line 1750, Address: 0x238c0c, Func Offset: 0x1c
	// Func End, Address: 0x238c1c, Func Offset: 0x2c
}

// 
// Start address: 0x238c20
void CharaDataBackInit(CharaData_DemoList* dlp)
{
	int j;
	int i;
	SubCharacter* scp;
	// Line 1755, Address: 0x238c20, Func Offset: 0
	// Line 1759, Address: 0x238c3c, Func Offset: 0x1c
	// Line 1760, Address: 0x238c48, Func Offset: 0x28
	// Line 1761, Address: 0x238c54, Func Offset: 0x34
	// Line 1762, Address: 0x238c74, Func Offset: 0x54
	// Line 1768, Address: 0x238cc0, Func Offset: 0xa0
	// Line 1769, Address: 0x238cf0, Func Offset: 0xd0
	// Line 1770, Address: 0x238cfc, Func Offset: 0xdc
	// Line 1771, Address: 0x238d04, Func Offset: 0xe4
	// Line 1772, Address: 0x238d28, Func Offset: 0x108
	// Func End, Address: 0x238d48, Func Offset: 0x128
}

// 
// Start address: 0x238d50
int SeekMemAdminCtgry(int category)
{
	int i;
	// Line 1777, Address: 0x238d50, Func Offset: 0
	// Line 1780, Address: 0x238d60, Func Offset: 0x10
	// Line 1781, Address: 0x238d6c, Func Offset: 0x1c
	// Line 1782, Address: 0x238db0, Func Offset: 0x60
	// Line 1785, Address: 0x238dc4, Func Offset: 0x74
	// Line 1788, Address: 0x238dd4, Func Offset: 0x84
	// Line 1789, Address: 0x238de0, Func Offset: 0x90
	// Line 1791, Address: 0x238e20, Func Offset: 0xd0
	// Line 1793, Address: 0x238e5c, Func Offset: 0x10c
	// Func End, Address: 0x238e70, Func Offset: 0x120
}

// 
// Start address: 0x238e70
int SeekMemAdminKind(int kind)
{
	int i;
	// Line 1801, Address: 0x238e70, Func Offset: 0
	// Line 1802, Address: 0x238e7c, Func Offset: 0xc
	// Line 1804, Address: 0x238ec0, Func Offset: 0x50
	// Func End, Address: 0x238ec8, Func Offset: 0x58
}

