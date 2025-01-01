typedef struct FilesBgBlock;
typedef union fsFileIndex;
typedef struct shSkelton;
typedef union _anon0;
typedef struct _CL_VHIT_RESULT;
typedef union fsFile;
typedef struct SubCharacter;
typedef union _anon1;
typedef struct _CL_HITPOLY_HEAD;
typedef struct _loadBgMem_UnitC;
typedef struct fsCdFile;
typedef struct Event_List;
typedef struct _loadBgMem_UnitR;
typedef struct Item_List;
typedef struct _loadBgMem_LoadCtrl;
typedef struct fsMgcFile;
typedef struct _loadBgMem_UnitL;
typedef enum _JAMES_UPPER_STATUS : unsigned char;
typedef struct fsMgfFile;
typedef struct _loadBgMem_CacheCtrl;
typedef struct Model_List;
typedef struct _CL_HITPOLY_COLUMN;
typedef struct fsHdFile;
typedef struct loadBgMem_File;
typedef struct Enemy_List;
typedef struct fsMgpFile;
typedef struct sh2gfw_Model_Header;
typedef struct PAD_3D;
typedef struct loadBgMem_Sect;
typedef struct _anon2;
typedef struct _anon3;
typedef struct PAD_2D;
typedef struct _anon4;
typedef struct _anon5;
typedef struct PAD_INFO;
typedef struct shBattleFight;
typedef struct _anon6;
typedef struct Stage_Data;
typedef struct shBattleShot;
typedef struct shBattleArea;
typedef struct _AnimeInfo;
typedef struct shBattleInfo;
typedef struct _anon7;
typedef enum _JAMES_LOWER_STATUS : unsigned char;
typedef struct _CL_VHIT_WALL;
typedef struct shPlayerWork;
typedef struct shAttackInfo;
typedef struct _CL_VHIT_CHARA;

typedef void(*type_4)(SubCharacter*);
typedef void(*type_6)(SubCharacter*);
typedef void(*type_7)();
typedef int(*type_9)();

typedef int type_0[4];
typedef void* type_1[2];
typedef shAttackInfo type_2[66];
typedef float type_3[4][2];
typedef unsigned char type_5[2];
typedef unsigned char type_8[3];
typedef unsigned char type_10[4];
typedef void* type_11[8];
typedef _loadBgMem_UnitL type_12[16];
typedef float type_13[4];
typedef _loadBgMem_UnitR type_14[16];
typedef _loadBgMem_UnitC type_15[8];
typedef float type_16[4];
typedef loadBgMem_Sect* type_17[3];
typedef loadBgMem_Sect type_18[2];
typedef loadBgMem_File type_19[2];
typedef loadBgMem_Sect* type_20[2];
typedef PAD_INFO type_21[10];
typedef float type_22[2];
typedef float type_23[4];
typedef float type_24[4][4];
typedef unsigned char type_25[4];
typedef unsigned char type_26[4];
typedef void* type_27[2];
typedef unsigned char type_28[2];
typedef int type_29[2];
typedef unsigned char type_30[2];

struct FilesBgBlock
{
	fsFileIndex* map;
	fsFileIndex* cld;
	fsFileIndex* cam;
	fsFileIndex* kg2;
	fsFileIndex* tex;
	fsFileIndex* ex0;
	fsFileIndex* ex1;
	fsFileIndex* ex2;
};

union fsFileIndex
{
	_anon6 index;
	unsigned long pack;
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon7 src_m;
	_anon5 src_t;
	_anon7 des_m;
	_anon5 des_t;
	_anon5 axis;
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

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon1 hobj;
};

union fsFile
{
	_anon3 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
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
	_anon5 pos;
	_anon5 rot;
	_anon5 pos_spd;
	_anon5 rot_spd;
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
	_anon5 b_pos;
	_anon5 b_rot;
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

union _anon1
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
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

struct _loadBgMem_UnitC
{
	fsFileIndex* file;
	unsigned short unitID;
	unsigned short unitNo;
	_loadBgMem_UnitC* prevC;
	_loadBgMem_UnitC* nextC;
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

struct _loadBgMem_UnitR
{
	fsFileIndex* file;
	unsigned short unitID;
	unsigned short unitNo;
	int sectID;
	_loadBgMem_UnitR* nextR;
};

struct Item_List
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
};

struct _loadBgMem_LoadCtrl
{
	int UnitSize;
	int Units;
	char* Buffer;
	_loadBgMem_UnitL* UnitLArray;
	_loadBgMem_UnitR* UnitRArray;
	_loadBgMem_UnitR* headR;
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

struct _loadBgMem_UnitL
{
	fsFileIndex* file;
	unsigned short unitID;
	unsigned short unitNo;
	int fid;
	int pad;
};

enum _JAMES_UPPER_STATUS : unsigned char
{
	JMS_ST_U_STAND,
	JMS_ST_U_RELAX,
	JMS_ST_U_ALERT,
	JMS_ST_U_TIRED,
	JMS_ST_U_READY,
	JMS_ST_U_READYOFF,
	JMS_ST_U_LROUND,
	JMS_ST_U_RROUND,
	JMS_ST_U_BACK,
	JMS_ST_U_WALK,
	JMS_ST_U_LSWALK,
	JMS_ST_U_RSWALK,
	JMS_ST_U_RUN1,
	JMS_ST_U_RUN2,
	JMS_ST_U_RUN3,
	JMS_ST_U_LSRUN,
	JMS_ST_U_RSRUN,
	JMS_ST_U_WALL_F,
	JMS_ST_U_LTURN,
	JMS_ST_U_RTURN,
	JMS_ST_U_JUMP,
	JMS_ST_U_GUARD,
	JMS_ST_U_LSTEP,
	JMS_ST_U_RSTEP,
	JMS_ST_U_FALL,
	JMS_ST_U_DAMAGE,
	JMS_ST_U_HOLD,
	JMS_ST_U_RELEASE,
	JMS_ST_U_ATTACK,
	JMS_ST_U_KICK,
	JMS_ST_U_TO_STAND,
	JMS_ST_U_EVENT
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

struct _loadBgMem_CacheCtrl
{
	int UnitSize;
	int Units;
	char* Buffer;
	_loadBgMem_UnitC* UnitCArray;
	_loadBgMem_UnitC* headC;
	_loadBgMem_UnitC* tailC;
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

struct _CL_HITPOLY_COLUMN
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
	float p[4][2];
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

struct loadBgMem_File
{
	fsFileIndex* file;
	int ofsS;
	int ofsE;
	void* addr;
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

struct sh2gfw_Model_Header
{
	unsigned char NoTextureID;
	unsigned char padc[3];
	unsigned int chara_id;
	unsigned int texnum;
	unsigned int toTexHead_offset;
	unsigned int toClutsHead_offset;
	unsigned int toModel_offset;
	int toKg1_offset;
	int padi;
	void* pTexMAN[8];
};

struct PAD_3D
{
	char round_way;
	unsigned char reserved1;
	unsigned char lslide;
	unsigned char rslide;
	unsigned char lturn180;
	unsigned char rturn180;
};

struct loadBgMem_Sect
{
	int ofsS;
	int ofsE;
	int files;
	loadBgMem_File* filelist;
	char reduceRate8;
	char upper;
	char overwrite;
	char sectID;
};

struct _anon2
{
	void(*SpecDraw)();
	void(*PreDraw)();
	void(*PostDraw)();
	void(*CharaDraw_Hook)();
};

struct _anon3
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

struct PAD_2D
{
	unsigned char pow;
	unsigned char lower_motion;
	float dir;
};

struct _anon4
{
	_loadBgMem_LoadCtrl ctrl;
	_loadBgMem_UnitL UnitLArray[16];
	_loadBgMem_UnitR UnitRArray[16];
	_loadBgMem_CacheCtrl cache;
	_loadBgMem_UnitC UnitCArray[8];
	loadBgMem_Sect* SectList[3];
	loadBgMem_Sect SectListBuf[2];
	loadBgMem_File filelist[2];
	loadBgMem_Sect* CheckList[2];
	int memflg;
	_loadBgMem_LoadCtrl* ctrlp;
};

struct _anon5
{
	float x;
	float y;
	float z;
	float w;
};

struct PAD_INFO
{
	unsigned char action;
	unsigned char dash;
	unsigned char attack0;
	unsigned char attack1;
	unsigned char attack2;
	unsigned char menu;
	unsigned char hold;
	unsigned char search;
	unsigned char map;
	struct
	{
		unsigned char light_ : 4;
		unsigned char light : 4;
	};
	unsigned char l_button;
	unsigned char r_button;
	char lstickX;
	char lstickY;
	char rstickX;
	char rstickY;
	unsigned char forward;
	unsigned char backward;
	unsigned char lround;
	unsigned char rround;
	unsigned char skip;
	unsigned char pause;
	union
	{
		PAD_3D pad3d;
		PAD_2D pad2d;
	};
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct _anon6
{
	fsFile* fp;
	char* name;
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
	_anon2* gfw_func;
	int(*chara_data_clear)();
	void(*sound_call_after_load)();
	int reserve_11;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct shBattleArea
{
	float center;
	float radius;
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

struct _anon7
{
	float d[4][4];
};

enum _JAMES_LOWER_STATUS : unsigned char
{
	JMS_ST_L_STAND,
	JMS_ST_L_RELAX,
	JMS_ST_L_ALERT,
	JMS_ST_L_TIRED,
	JMS_ST_L_READY,
	JMS_ST_L_READYOFF,
	JMS_ST_L_LROUND,
	JMS_ST_L_RROUND,
	JMS_ST_L_BACK,
	JMS_ST_L_WALK,
	JMS_ST_L_LSWALK,
	JMS_ST_L_RSWALK,
	JMS_ST_L_RUN1,
	JMS_ST_L_RUN2,
	JMS_ST_L_RUN3,
	JMS_ST_L_LSRUN,
	JMS_ST_L_RSRUN,
	JMS_ST_L_WALL_F,
	JMS_ST_L_LTURN,
	JMS_ST_L_RTURN,
	JMS_ST_L_JUMP,
	JMS_ST_L_GUARD,
	JMS_ST_L_LSTEP,
	JMS_ST_L_RSTEP,
	JMS_ST_L_FALL,
	JMS_ST_L_DAMAGE,
	JMS_ST_L_HOLD,
	JMS_ST_L_RELEASE,
	JMS_ST_L_ATTACK,
	JMS_ST_L_KICK,
	JMS_ST_L_TO_STAND,
	JMS_ST_L_EVENT
};

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

struct shPlayerWork
{
	SubCharacter* player;
	_anon5 dist_rot;
	_anon5 dist_pos;
	_anon5 pos;
	_anon5 rot;
	float rot_y;
	float inner_to_wall;
	float dist_to_wall;
	float dir_tgt_2d;
	float dir_now_2d;
	unsigned char map_mode;
	unsigned char reserve0;
	unsigned char step;
	unsigned char sub_step;
	unsigned short timer;
	unsigned short timer2;
	unsigned int allbody_now;
	_JAMES_UPPER_STATUS upper_now;
	_JAMES_LOWER_STATUS lower_now;
	unsigned int allbody_prev;
	_JAMES_UPPER_STATUS upper_prev;
	_JAMES_LOWER_STATUS lower_prev;
	unsigned char event_status_now;
	unsigned char event_status_prev;
	unsigned char event_move_mode;
	unsigned char reserve1;
	unsigned int upper_st_flg;
	unsigned int lower_st_flg;
	unsigned int u_anime_st_flg;
	unsigned int l_anime_st_flg;
	unsigned int anime_pause;
	unsigned int act_with_wep;
	float light_vec_inner_rate;
	float light_pos_revise[4];
	float light_vec_revise[4];
	float light_pos[4];
	float light_vec[4];
	float light_pos_revise_reverse[4];
	float light_vec_revise_reverse[4];
	float light_pos_reverse[4];
	float light_vec_reverse[4];
	float light_vec_neck[4];
	int room_name_prev;
	int room_name_now;
	_CL_VHIT_RESULT r_side;
	_CL_VHIT_RESULT l_side;
	_CL_VHIT_RESULT foot;
	_CL_VHIT_RESULT ft_floor;
	_CL_VHIT_RESULT r_foot;
	_CL_VHIT_RESULT l_foot;
	_CL_HITPOLY_COLUMN column_mov;
	_CL_HITPOLY_COLUMN column_atk;
	float col_mov_z_hosei;
	float col_atk_z_hosei;
	unsigned char wep_no_hit_floor;
	unsigned char efct_upper;
	unsigned char light_reverse;
	unsigned char water_road;
	PAD_INFO pad[10];
	float rstick_x;
	float rstick_y;
	float lstick_x;
	float lstick_y;
	float lstick_p;
	float cam_rot_y[2];
	unsigned char now_cam_no;
	unsigned char cam_chg_flg;
	unsigned char ctrl_unit;
	unsigned char ctrl_inputing;
	unsigned char se_upper[4];
	unsigned char se_foot[4];
	float csaw_se_vol;
	unsigned char csaw_se_flg;
	unsigned char d_shock;
	unsigned char reserve2;
	unsigned char strike_splash_flg;
	int event_anime;
	_anon5 tgt_body_angle;
	_anon5 tgt_neck_angle;
	_anon5 tgt_arms_angle;
	unsigned char hold_chg[2];
	unsigned char hold_loop[2];
	unsigned char motion_no;
	unsigned char shotgun_dir;
	unsigned char shotgun_prev;
	unsigned char guard_check;
	int parts_light;
	int parts_rhand;
	int parts_lhand;
	SubCharacter* target;
	SubCharacter* look_tgt;
	float non_input;
	float hugging_gauge;
	float running_time;
	float muteki_time;
	float hp;
	float hp_max;
	float hp_recover;
	float shock;
	float spray_time;
	int tired;
	int tired_max;
	int spirit;
	SubCharacter* enemy_liedown;
	unsigned char enemy_around;
	unsigned char enemy_atk_area;
	unsigned char enemy_near;
	unsigned char lock_on;
	unsigned char running;
	unsigned char cannot_run;
	unsigned char fall_type;
	unsigned char reload;
	unsigned char weapon;
	unsigned char shoot_val;
	unsigned char reload_val;
	unsigned char atk_type;
	unsigned char atk_reserve[2];
	unsigned char attack_ok;
	char hold_type;
	unsigned char dead;
	unsigned char no_damage;
	unsigned char atk_count;
	unsigned char hug_status;
	unsigned char hug_dir;
	unsigned char se_on;
	unsigned char spray_set;
	char spray_pow;
	unsigned short damage_no;
	unsigned short attack_no;
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

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

shAttackInfo sh2_attack_list[66];
_anon4 d;
Stage_Data* stage;
shPlayerWork sh2jms;

void initwork();
void memspy();
void subcharaupdate(int chara_id);
void init_clean();
void LoadBgCharaInit();
int LoadBgCharaIsLoad();
int LoadBgCharaIsLoadSlot(int no);
int nowpos();
int LoadBgCharaIsMapEdge();
void olddel(fsFileIndex* id, int slot);
int chkslot(void** tmp, void* ex);
void setslot(FilesBgBlock* bgfiles);
void LoadBgCharaLoadSync();
void LoadBgGetUraCharaSlot(void** slot0, void** slot1);

// 
// Start address: 0x28f700
void initwork()
{
	// Line 59, Address: 0x28f700, Func Offset: 0
	// Line 60, Address: 0x28f708, Func Offset: 0x8
	// Line 61, Address: 0x28f720, Func Offset: 0x20
	// Line 62, Address: 0x28f728, Func Offset: 0x28
	// Line 63, Address: 0x28f730, Func Offset: 0x30
	// Func End, Address: 0x28f740, Func Offset: 0x40
}

// 
// Start address: 0x28f740
void memspy()
{
	char* adr;
	// Line 86, Address: 0x28f740, Func Offset: 0
	// Line 90, Address: 0x28f748, Func Offset: 0x8
	// Line 91, Address: 0x28f750, Func Offset: 0x10
	// Line 92, Address: 0x28f758, Func Offset: 0x18
	// Line 93, Address: 0x28f768, Func Offset: 0x28
	// Line 94, Address: 0x28f770, Func Offset: 0x30
	// Line 96, Address: 0x28f778, Func Offset: 0x38
	// Line 97, Address: 0x28f780, Func Offset: 0x40
	// Line 98, Address: 0x28f790, Func Offset: 0x50
	// Line 99, Address: 0x28f798, Func Offset: 0x58
	// Line 101, Address: 0x28f7a0, Func Offset: 0x60
	// Line 102, Address: 0x28f7b0, Func Offset: 0x70
	// Line 105, Address: 0x28f7c0, Func Offset: 0x80
	// Line 106, Address: 0x28f7c8, Func Offset: 0x88
	// Func End, Address: 0x28f7d8, Func Offset: 0x98
}

// 
// Start address: 0x28f7e0
void subcharaupdate(int chara_id)
{
	SubCharacter* scp;
	// Line 115, Address: 0x28f7e0, Func Offset: 0
	// Line 118, Address: 0x28f7f4, Func Offset: 0x14
	// Line 119, Address: 0x28f800, Func Offset: 0x20
	// Line 120, Address: 0x28f808, Func Offset: 0x28
	// Line 121, Address: 0x28f814, Func Offset: 0x34
	// Line 122, Address: 0x28f830, Func Offset: 0x50
	// Func End, Address: 0x28f848, Func Offset: 0x68
}

// 
// Start address: 0x28f850
void init_clean()
{
	int id;
	int i;
	// Line 125, Address: 0x28f850, Func Offset: 0
	// Line 128, Address: 0x28f860, Func Offset: 0x10
	// Line 129, Address: 0x28f86c, Func Offset: 0x1c
	// Line 133, Address: 0x28f89c, Func Offset: 0x4c
	// Line 134, Address: 0x28f8ac, Func Offset: 0x5c
	// Line 135, Address: 0x28f8b4, Func Offset: 0x64
	// Line 136, Address: 0x28f8cc, Func Offset: 0x7c
	// Line 137, Address: 0x28f8d8, Func Offset: 0x88
	// Line 138, Address: 0x28f8e4, Func Offset: 0x94
	// Line 141, Address: 0x28f8f0, Func Offset: 0xa0
	// Line 142, Address: 0x28f904, Func Offset: 0xb4
	// Func End, Address: 0x28f91c, Func Offset: 0xcc
}

// 
// Start address: 0x28f920
void LoadBgCharaInit()
{
	char* cadr;
	char* adr;
	// Line 145, Address: 0x28f920, Func Offset: 0
	// Line 149, Address: 0x28f930, Func Offset: 0x10
	// Line 150, Address: 0x28f940, Func Offset: 0x20
	// Line 151, Address: 0x28f948, Func Offset: 0x28
	// Line 152, Address: 0x28f954, Func Offset: 0x34
	// Line 153, Address: 0x28f984, Func Offset: 0x64
	// Line 154, Address: 0x28f98c, Func Offset: 0x6c
	// Line 155, Address: 0x28f9bc, Func Offset: 0x9c
	// Line 156, Address: 0x28f9c4, Func Offset: 0xa4
	// Line 157, Address: 0x28f9cc, Func Offset: 0xac
	// Line 162, Address: 0x28f9f8, Func Offset: 0xd8
	// Line 168, Address: 0x28fa1c, Func Offset: 0xfc
	// Line 169, Address: 0x28fa2c, Func Offset: 0x10c
	// Line 170, Address: 0x28fa3c, Func Offset: 0x11c
	// Line 171, Address: 0x28fa44, Func Offset: 0x124
	// Line 172, Address: 0x28fa54, Func Offset: 0x134
	// Line 173, Address: 0x28fa5c, Func Offset: 0x13c
	// Func End, Address: 0x28fa74, Func Offset: 0x154
}

// 
// Start address: 0x28fa80
int LoadBgCharaIsLoad()
{
	int cnt;
	// Line 176, Address: 0x28fa80, Func Offset: 0
	// Line 180, Address: 0x28fa88, Func Offset: 0x8
	// Line 181, Address: 0x28fa98, Func Offset: 0x18
	// Line 182, Address: 0x28fab0, Func Offset: 0x30
	// Line 184, Address: 0x28fac0, Func Offset: 0x40
	// Line 185, Address: 0x28fad4, Func Offset: 0x54
	// Line 186, Address: 0x28faf4, Func Offset: 0x74
	// Func End, Address: 0x28fb04, Func Offset: 0x84
}

// 
// Start address: 0x28fb10
int LoadBgCharaIsLoadSlot(int no)
{
	int cnt;
	// Line 189, Address: 0x28fb10, Func Offset: 0
	// Line 192, Address: 0x28fb18, Func Offset: 0x8
	// Line 193, Address: 0x28fb54, Func Offset: 0x44
	// Line 195, Address: 0x28fb78, Func Offset: 0x68
	// Line 196, Address: 0x28fb88, Func Offset: 0x78
	// Line 197, Address: 0x28fba0, Func Offset: 0x90
	// Line 199, Address: 0x28fbb0, Func Offset: 0xa0
	// Line 200, Address: 0x28fbc4, Func Offset: 0xb4
	// Line 201, Address: 0x28fbe4, Func Offset: 0xd4
	// Func End, Address: 0x28fbf4, Func Offset: 0xe4
}

// 
// Start address: 0x28fc00
int nowpos()
{
	int mapid[4];
	int nowid;
	float dz;
	float dx;
	float pz;
	float px;
	int glb_crd;
	// Line 204, Address: 0x28fc00, Func Offset: 0
	// Line 208, Address: 0x28fc08, Func Offset: 0x8
	// Line 211, Address: 0x28fc0c, Func Offset: 0xc
	// Line 212, Address: 0x28fc1c, Func Offset: 0x1c
	// Line 213, Address: 0x28fc30, Func Offset: 0x30
	// Line 214, Address: 0x28fc3c, Func Offset: 0x3c
	// Line 215, Address: 0x28fc60, Func Offset: 0x60
	// Line 216, Address: 0x28fc6c, Func Offset: 0x6c
	// Line 217, Address: 0x28fc70, Func Offset: 0x70
	// Line 218, Address: 0x28fc78, Func Offset: 0x78
	// Line 219, Address: 0x28fc80, Func Offset: 0x80
	// Line 220, Address: 0x28fc90, Func Offset: 0x90
	// Line 221, Address: 0x28fc94, Func Offset: 0x94
	// Line 222, Address: 0x28fca0, Func Offset: 0xa0
	// Line 226, Address: 0x28fca8, Func Offset: 0xa8
	// Func End, Address: 0x28fcb8, Func Offset: 0xb8
}

// 
// Start address: 0x28fcc0
int LoadBgCharaIsMapEdge()
{
	int z;
	int x;
	float pz;
	float px;
	// Line 230, Address: 0x28fcc0, Func Offset: 0
	// Line 233, Address: 0x28fcd0, Func Offset: 0x10
	// Line 234, Address: 0x28fcdc, Func Offset: 0x1c
	// Line 236, Address: 0x28fce0, Func Offset: 0x20
	// Line 237, Address: 0x28fcf0, Func Offset: 0x30
	// Line 238, Address: 0x28fd00, Func Offset: 0x40
	// Line 239, Address: 0x28fd08, Func Offset: 0x48
	// Line 240, Address: 0x28fd10, Func Offset: 0x50
	// Line 241, Address: 0x28fd24, Func Offset: 0x64
	// Line 242, Address: 0x28fd34, Func Offset: 0x74
	// Line 243, Address: 0x28fd80, Func Offset: 0xc0
	// Line 244, Address: 0x28fdac, Func Offset: 0xec
	// Line 247, Address: 0x28fdb8, Func Offset: 0xf8
	// Line 248, Address: 0x28fdbc, Func Offset: 0xfc
	// Func End, Address: 0x28fdd4, Func Offset: 0x114
}

// 
// Start address: 0x28fde0
void olddel(fsFileIndex* id, int slot)
{
	sh2gfw_Model_Header* p;
	// Line 251, Address: 0x28fde0, Func Offset: 0
	// Line 252, Address: 0x28fdf8, Func Offset: 0x18
	// Line 256, Address: 0x28fe30, Func Offset: 0x50
	// Line 257, Address: 0x28fe40, Func Offset: 0x60
	// Line 258, Address: 0x28fe6c, Func Offset: 0x8c
	// Line 259, Address: 0x28fe78, Func Offset: 0x98
	// Line 260, Address: 0x28fe8c, Func Offset: 0xac
	// Line 261, Address: 0x28fe98, Func Offset: 0xb8
	// Line 262, Address: 0x28fea4, Func Offset: 0xc4
	// Line 265, Address: 0x28feb0, Func Offset: 0xd0
	// Func End, Address: 0x28fec8, Func Offset: 0xe8
}

// 
// Start address: 0x28fed0
int chkslot(void** tmp, void* ex)
{
	// Line 269, Address: 0x28fed0, Func Offset: 0
	// Line 270, Address: 0x28fed8, Func Offset: 0x8
	// Line 271, Address: 0x28fee8, Func Offset: 0x18
	// Line 272, Address: 0x28feec, Func Offset: 0x1c
	// Line 273, Address: 0x28ff04, Func Offset: 0x34
	// Line 274, Address: 0x28ff08, Func Offset: 0x38
	// Line 275, Address: 0x28ff10, Func Offset: 0x40
	// Line 278, Address: 0x28ff1c, Func Offset: 0x4c
	// Line 279, Address: 0x28ff20, Func Offset: 0x50
	// Func End, Address: 0x28ff28, Func Offset: 0x58
}

// 
// Start address: 0x28ff30
void setslot(FilesBgBlock* bgfiles)
{
	void* tbl[2];
	int slot;
	int exchg[2];
	void* tmpslot[2];
	// Line 282, Address: 0x28ff30, Func Offset: 0
	// Line 283, Address: 0x28ff44, Func Offset: 0x14
	// Line 284, Address: 0x28ff58, Func Offset: 0x28
	// Line 286, Address: 0x28ff6c, Func Offset: 0x3c
	// Line 291, Address: 0x28ff90, Func Offset: 0x60
	// Line 292, Address: 0x28ff98, Func Offset: 0x68
	// Line 293, Address: 0x28ffa4, Func Offset: 0x74
	// Line 295, Address: 0x28ffb4, Func Offset: 0x84
	// Line 296, Address: 0x28ffc0, Func Offset: 0x90
	// Line 298, Address: 0x28ffd4, Func Offset: 0xa4
	// Line 299, Address: 0x28ffe0, Func Offset: 0xb0
	// Line 300, Address: 0x28ffec, Func Offset: 0xbc
	// Line 301, Address: 0x28fffc, Func Offset: 0xcc
	// Line 302, Address: 0x290014, Func Offset: 0xe4
	// Line 303, Address: 0x290030, Func Offset: 0x100
	// Line 304, Address: 0x29004c, Func Offset: 0x11c
	// Line 305, Address: 0x290064, Func Offset: 0x134
	// Line 306, Address: 0x290070, Func Offset: 0x140
	// Line 307, Address: 0x290084, Func Offset: 0x154
	// Line 308, Address: 0x290094, Func Offset: 0x164
	// Line 309, Address: 0x2900a8, Func Offset: 0x178
	// Line 313, Address: 0x2900b8, Func Offset: 0x188
	// Line 314, Address: 0x2900d0, Func Offset: 0x1a0
	// Line 315, Address: 0x290100, Func Offset: 0x1d0
	// Line 316, Address: 0x290110, Func Offset: 0x1e0
	// Line 317, Address: 0x290124, Func Offset: 0x1f4
	// Line 318, Address: 0x290140, Func Offset: 0x210
	// Line 330, Address: 0x290158, Func Offset: 0x228
	// Func End, Address: 0x290174, Func Offset: 0x244
}

// 
// Start address: 0x290180
void LoadBgCharaLoadSync()
{
	int cnt;
	FilesBgBlock* bgfiles;
	int mapblock;
	int glb_crd;
	int mapid;
	// Line 334, Address: 0x290180, Func Offset: 0
	// Line 342, Address: 0x29018c, Func Offset: 0xc
	// Line 345, Address: 0x290194, Func Offset: 0x14
	// Line 346, Address: 0x29019c, Func Offset: 0x1c
	// Line 347, Address: 0x2901a4, Func Offset: 0x24
	// Line 348, Address: 0x2901b0, Func Offset: 0x30
	// Line 349, Address: 0x2901b4, Func Offset: 0x34
	// Line 351, Address: 0x2901c4, Func Offset: 0x44
	// Line 352, Address: 0x2901d0, Func Offset: 0x50
	// Line 353, Address: 0x2901e0, Func Offset: 0x60
	// Line 354, Address: 0x2901f8, Func Offset: 0x78
	// Line 356, Address: 0x290208, Func Offset: 0x88
	// Line 366, Address: 0x290238, Func Offset: 0xb8
	// Line 367, Address: 0x290244, Func Offset: 0xc4
	// Func End, Address: 0x290258, Func Offset: 0xd8
}

// 
// Start address: 0x290260
void LoadBgGetUraCharaSlot(void** slot0, void** slot1)
{
	// Line 373, Address: 0x290260, Func Offset: 0
	// Line 374, Address: 0x290270, Func Offset: 0x10
	// Line 375, Address: 0x290298, Func Offset: 0x38
	// Line 379, Address: 0x2902c0, Func Offset: 0x60
	// Func End, Address: 0x2902c8, Func Offset: 0x68
}

