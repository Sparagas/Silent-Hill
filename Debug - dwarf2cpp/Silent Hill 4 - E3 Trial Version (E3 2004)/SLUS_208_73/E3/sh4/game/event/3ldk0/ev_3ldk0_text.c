typedef struct sfObj;
typedef struct _EventInst;
typedef union _anon0;
typedef struct _EventDriver;
typedef struct _GAME_WORK;
typedef struct EventFlag;
typedef struct _rl04_Msg_Hollow_Work;
typedef struct _MessageList;
typedef struct _ev2212work;

typedef int(*type_16)(sfObj*);
typedef int(*type_17)(sfObj*);
typedef int(*type_22)(sfObj*);
typedef int(*type_26)(sfObj*);
typedef int(*type_34)(sfObj*);
typedef int(*type_61)(sfObj*);
typedef int(*type_65)(sfObj*);
typedef void(*type_66)(sfObj*);
typedef void(*type_73)(sfObj*);

typedef _MessageList type_0[8];
typedef _MessageList type_1[6];
typedef _MessageList type_2[9];
typedef _MessageList type_3[8];
typedef _MessageList type_4[8];
typedef _anon0 type_5[0];
typedef _MessageList type_6[2];
typedef _MessageList type_7[8];
typedef int type_8[1];
typedef _anon0 type_9[0];
typedef _anon0 type_10[0];
typedef float type_11[4];
typedef float type_12[4][4];
typedef int type_13[1];
typedef _anon0 type_14[0];
typedef _MessageList type_15[7];
typedef _MessageList type_18[7];
typedef _anon0 type_19[0];
typedef _anon0 type_20[0];
typedef _MessageList type_21[8];
typedef _anon0 type_23[0];
typedef _anon0 type_24[0];
typedef _anon0 type_25[0];
typedef _MessageList type_27[7];
typedef _MessageList type_28[7];
typedef int type_29[1];
typedef _MessageList type_30[7];
typedef _MessageList type_31[2];
typedef _anon0 type_32[0];
typedef _anon0 type_33[0];
typedef _anon0 type_35[0];
typedef _MessageList type_36[8];
typedef _MessageList type_37[2];
typedef _anon0 type_38[4];
typedef _MessageList type_39[7];
typedef int type_40[1];
typedef _anon0 type_41[0];
typedef _anon0 type_42[0];
typedef _anon0 type_43[0];
typedef _MessageList type_44[7];
typedef _anon0 type_45[0];
typedef _MessageList type_46[7];
typedef _MessageList type_47[7];
typedef _MessageList type_48[7];
typedef _anon0 type_49[0];
typedef _anon0 type_50[0];
typedef _anon0 type_51[0];
typedef _MessageList type_52[7];
typedef int type_53[1];
typedef _MessageList type_54[4];
typedef _anon0 type_55[0];
typedef _MessageList type_56[7];
typedef _anon0 type_57[0];
typedef unsigned char type_58[320];
typedef int type_59[1];
typedef _MessageList type_60[2];
typedef _anon0 type_62[0];
typedef _anon0 type_63[256];
typedef _MessageList type_64[2];
typedef _anon0 type_67[0];
typedef int type_68[1];
typedef float type_69[4];
typedef _MessageList type_70[6];
typedef _anon0 type_71[0];
typedef _MessageList type_72[2];
typedef _MessageList type_74[2];
typedef short type_75[2];
typedef _anon0 type_76[0];
typedef unsigned short type_77[2];
typedef char type_78[4];
typedef _anon0 type_79[0];
typedef _anon0 type_80[0];
typedef unsigned char type_81[4];
typedef float type_82[1];
typedef int type_83[1];
typedef _anon0 type_84[0];
typedef _anon0 type_85[0];
typedef _anon0 type_86[0];
typedef _MessageList type_87[2];
typedef _MessageList type_88[3];
typedef _MessageList type_89[7];
typedef _anon0 type_90[0];
typedef _anon0* type_91[5];
typedef _anon0 type_92[0];
typedef _anon0 type_93[0];

struct sfObj
{
	_anon0 fwork[256];
	_anon0* work;
	void(*func)(sfObj*);
	_anon0* work_pt0;
	_anon0* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon0* sys_work;
	_anon0* scene_work;
	_anon0* event_work;
	_anon0* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct _EventInst
{
	_EventDriver evdrv;
	unsigned int attr;
	int(*drawaf)(sfObj*);
	int(*endexitf)(sfObj*);
};

union _anon0
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

struct _EventDriver
{
	int evnum;
	int(*trgchk)(sfObj*);
	int(*init)(sfObj*);
	int(*exec)(sfObj*);
	int(*draw)(sfObj*);
	int(*end)(sfObj*);
	unsigned int* file;
	_anon0 val[4];
};

struct _GAME_WORK
{
	int init_at_cold[1];
	int logo_displayed;
	int init_at_warm[1];
	int game_init_executed;
	void* warm_memory_top;
	int load_stage_start;
	int continue_play;
	int game_overed;
	int risky_continue_count;
	int level;
	int init_at_game[1];
	void* game_memory_top;
	int stage;
	int scene;
	int prev_scene;
	int prev_stage;
	int next_stage;
	int next_scene;
	int start_door;
	int world;
	int real_scene;
	float current_camera_mtx[4][4];
	float next_camera_mtx[4][4];
	float game_camera_back[4][4];
	float game_view_angle;
	float game_view_angle_back;
	float map_offset[4];
	void* player;
	int control;
	int player_pos;
	unsigned int next_flags;
	int gameover;
	int gameover_ok;
	int game_complete;
	int gauge;
	int event_disable;
	int eileen_status;
	int cynthia_status;
	int pause_disable_contine;
	unsigned int play_time;
	unsigned int continue_count;
	unsigned int killed_enemy;
	unsigned int held_ghost;
	int update_continue;
	int continue_item;
	int now_peeping;
	unsigned int pre_eil_timer;
	unsigned int eil_interval;
	int pre_demo_index;
	unsigned int pre_demo_type;
	unsigned int pre_door_timer;
	unsigned int door_interval;
	unsigned int pre_door_demo_no;
	int init_at_stage[1];
	void* stage_memory_top;
	int stage_data_save;
	int init_at_scene[1];
	void* scene_memory_top;
	void* snap_texture_load_buffer;
	int game_mode;
	int shadow_density;
	int door_move_disable;
	int fog_effect_off;
	int init_at_loop[1];
	int game_in_action;
	int player_touch_door_no;
	int* passing_door;
	int work_end[1];
	int open_door_sn;
	int open_door_dn;
	int close_door_se_disable;
	int close_door_se_reserve;
};

struct EventFlag
{
	unsigned char flag[320];
};

struct _rl04_Msg_Hollow_Work
{
	int goto_msg;
};

struct _MessageList
{
	_anon0* msg;
	short flag;
};

struct _ev2212work
{
	int timer;
};

_EventDriver ev_3ldk0_rl00_065;
_EventDriver ev_itembox;
_EventDriver ev_3ldk0_rl00_072;
_GAME_WORK gamew;
_anon0 MsgCommon_QustionEnterHole[0];
_anon0 Msg3ldk0_007[0];
EventFlag event_flag;
_EventDriver ev_3ldk0_rl02_demo53;
_EventDriver ev_3ldk0_rl02_007;
_EventDriver ev_3ldk0_rl00_012;
_EventDriver ev_3ldk0_rl00_012_yes;
_EventDriver ev_3ldk0_rl00_077;
_anon0 Msg3ldk0_089[0];
_EventDriver ev_3ldk0_rl02_089;
_anon0 Msg3ldk0_099[0];
_EventDriver ev_3ldk0_rl02_099;
_anon0 Msg3ldk0_110[0];
_EventDriver ev_3ldk0_rl02_110;
_anon0 Msg3ldk0_039[0];
_EventDriver ev_3ldk0_rl02_039;
_anon0 Msg_1330_27[0];
_EventDriver ev_3ldk0_rl03_154;
_EventDriver ev_3ldk0_rl03_169;
_anon0 Msg3ldk0_138_off[0];
_EventDriver ev_3ldk0_rl00_138;
_EventDriver ev_3ldk0_rl00_149;
_EventDriver ev_3ldk0_rl03_150;
_anon0 Msg3ldk0_152_2[0];
_anon0 Msg3ldk0_152[0];
_EventDriver ev_3ldk0_rl03_152;
int first5_msg_cnt;
_MessageList smallpict_msg[9];
_EventDriver ev_3ldk0_rl00_Msg_SmallPict_before;
_EventDriver ev_3ldk0_rl00_Msg_SmallPict_after;
_MessageList middlepict_msg[7];
_EventDriver ev_3ldk0_rl00_Msg_MiddlePict;
_MessageList faucet_msg[7];
_anon0 Msg_1330_18[0];
_EventDriver ev_3ldk0_rl00_Msg_Faucet;
_MessageList furniture_msg[8];
_EventDriver ev_3ldk0_rl00_Msg_Furniture_before;
_EventDriver ev_3ldk0_rl00_Msg_Furniture_after;
_MessageList clock_msg[7];
_EventDriver ev_3ldk0_rl00_Msg_Clock;
_MessageList shoes_msg[7];
_EventDriver ev_3ldk0_rl00_Msg_Shoes;
_MessageList bookshelf_msg[7];
_EventDriver ev_3ldk0_rl00_Msg_BookShelf;
_MessageList largepict_msg[7];
_EventDriver ev_3ldk0_rl00_Msg_LargePict;
_MessageList kitchen_msg[7];
_EventDriver ev_3ldk0_rl00_Msg_Kitchen;
_EventDriver ev_3ldk0_rl00_Msg_ItemBox;
_EventDriver ev_3ldk0_rl00_Msg_Compo;
_anon0 Msg_1304_01[0];
_anon0 Msg_1322_01[0];
_EventDriver ev_3ldk0_rl00_Msg_Front;
_EventDriver ev_3ldk0_rl00_Msg_1304_02;
_EventDriver ev_3ldk0_rl00_Msg_1304_03;
_EventDriver ev_3ldk0_rl00_Msg_1304_04;
_EventDriver ev_3ldk0_rl00_Msg_1304_05;
_EventDriver ev_3ldk0_rl00_Msg_1304_06;
_MessageList window_msg[3];
_EventDriver ev_3ldk0_rl01_Msg_Window;
_MessageList tv_msg[8];
_anon0 Msg_1330_13[0];
_anon0 Msg_1312_01[0];
_EventDriver ev_3ldk0_rl03_Msg_TV;
_MessageList table_msg[8];
_anon0 Msg_1330_26[0];
_EventDriver ev_3ldk0_rl00_Msg_Table;
_anon0 Msg3ldk0_2212_GET[0];
_anon0 Msg3ldk0_2212_WASH[0];
_EventDriver ev_3ldk0_rl00_2212;
_EventDriver ev_3ldk0_rl03_plate_temp_text;
_EventDriver ev_3ldk0_rl03_plate_origin_text;
_EventDriver ev_3ldk0_rl03_plate_surveil_text;
_EventDriver ev_3ldk0_rl03_plate_chaos_text;
_EventDriver ev_3ldk0_rl00_Msg_PhenomMeat;
_EventDriver ev_3ldk0_rl00_200;
_EventDriver ev_3ldk0_rl00_UseLiberationKey;
_EventDriver ev_3ldk0_rl00_UseLiberationKey_Access;
_EventDriver ev_3ldk0_rl00_clushlight;
_EventDriver ev_3ldk0_rl00_fridge;
_EventDriver ev_3ldk0_rl00_1334;
_MessageList lakepict_msg[7];
_EventDriver ev_3ldk0_rl01_Msg_LakePict;
_MessageList churchpict_msg[7];
_EventDriver ev_3ldk0_rl01_Msg_ChurchPict;
_MessageList lighthouse_msg[7];
_EventDriver ev_3ldk0_rl01_Msg_LightHouse;
_MessageList cyclepict_msg[7];
_EventDriver ev_3ldk0_rl01_Msg_CyclePict;
_MessageList note_msg[8];
_EventDriver ev_3ldk0_rl01_Msg_Note;
_MessageList desk_articles_msg[7];
_EventDriver ev_3ldk0_rl01_Msg_SmallArticles;
_anon0 Msg_1330_02[0];
_anon0 Msg_1330_03[0];
_EventDriver ev_3ldk0_rl01_Msg_Bed;
_MessageList underhole_msg[7];
_EventDriver ev_3ldk0_rl03_Msg_UnderHole;
_anon0 Msg_1306_05[0];
_anon0 Msg_1307_05[0];
_anon0 Msg_1324_05[0];
_EventDriver ev_3ldk0_rl03_Msg_Shelf;
_MessageList washstand_msg[8];
_EventDriver ev_3ldk0_rl03_Msg_Washstand;
_MessageList toilet_msg[8];
_EventDriver ev_3ldk0_rl03_Msg_Toilet;
_MessageList bathtub_msg[6];
_EventDriver ev_3ldk0_rl03_Msg_Bathtub;
_EventDriver ev_3ldk0_rl03_Msg_BathtubWall;
_MessageList shower_msg[6];
_EventDriver ev_3ldk0_rl02_Msg_Shower;
_EventDriver ev_3ldk0_rl02_2217;
_EventDriver ev_3ldk0_rl02_Msg_CloseHole;
_anon0 Msg_1309_01[0];
_anon0 Msg_1314_02[0];
_anon0 Msg_1314_First[0];
_EventDriver ev_3ldk0_rl03_Msg_Drier;
_EventDriver ev_3ldk0_rl03_Msg_WashingMachine;
_MessageList upperpart_shelf_msg[4];
_EventDriver ev_3ldk0_rl03_Msg_UpperpartShelf;
_anon0 Msg_1303_02[0];
_anon0 Msg_1309_04[0];
_EventDriver ev_3ldk0_rl03_Msg_ToolShelf;
_EventDriver ev_3ldk0_rl03_Msg_LongerShelf;
_EventDriver ev_3ldk0_rl03_Msg_Kerosene;
_EventDriver ev_3ldk0_rl03_2216;
_MessageList rl05_fridge_msg[2];
_EventDriver ev_3ldk0_rl05_Msg_Fridge;
_MessageList rl05_cutlery_msg[2];
_EventDriver ev_3ldk0_rl05_Msg_Cutlery;
_MessageList rl05_oil_msg[2];
_EventDriver ev_3ldk0_rl05_Msg_Oil;
_MessageList rl05_cup_msg[2];
_EventDriver ev_3ldk0_rl05_Msg_Cup;
_MessageList rl05_vessel_msg[2];
_EventDriver ev_3ldk0_rl05_Msg_Vessel;
_MessageList rl05_book_msg[2];
_EventDriver ev_3ldk0_rl05_Msg_Book;
_MessageList rl05_shelf1_msg[2];
_EventDriver ev_3ldk0_rl05_Msg_Shelf1;
_MessageList rl05_shelf2_msg[2];
_EventDriver ev_3ldk0_rl05_Msg_Shelf2;
_EventDriver ev_3ldk0_rl04_199_findkey;
_anon0 Msg_1330_12[0];
_anon0 Msg_1330_19[0];
_anon0 Msg_1330_10[0];
_EventDriver ev_3ldk0_rl04b_217;
_EventDriver ev_3ldk0_rl04_Msg_Hollow;
_anon0 Msg_1330_11[0];
_anon0 Msg_1330_09[0];
_EventDriver ev_3ldk0_rl04_Msg_Walter;
_anon0* current_msg;

int ev_3ldk0_rl00_072_end(sfObj* obj);
int ev_3ldk0_rl02_007_trgchk(sfObj* obj);
int ev_3ldk0_rl02_007_init();
int ev_3ldk0_rl02_007_end();
int ev_3ldk0_012_mes();
int rl00_012_yes_trg_chk();
int rl00_012_yes_exec(sfObj* obj);
int destruct_rl00_012_yes();
int ev_3ldk0_rl02_089_trgchk(sfObj* obj);
int ev_3ldk0_rl02_089_init();
int ev_3ldk0_rl02_089_exec();
int ev_3ldk0_rl02_099_trgchk(sfObj* obj);
int ev_3ldk0_rl02_099_init();
int ev_3ldk0_rl02_099_exec();
int ev_3ldk0_rl02_110_trgchk(sfObj* obj);
int ev_3ldk0_rl02_110_init();
int ev_3ldk0_rl02_110_exec();
int ev_3ldk0_rl02_039_trgchk(sfObj* obj);
int ev_3ldk0_rl02_039_init();
int ev_3ldk0_rl02_039_exec();
int ev_3ldk0_rl03_154_trgchk(sfObj* obj);
int ev_3ldk0_rl03_154_init();
int ev_3ldk0_rl03_154_exec();
int ev_3ldk0_rl03_169_trgchk(sfObj* obj);
int ev_3ldk0_rl00_138_init(sfObj* obj);
int ev_3ldk0_rl00_138_end();
int ev_3ldk0_rl00_149_trgchk(sfObj* obj);
int ev_3ldk0_rl03_152_init(sfObj* obj);
int ev_mes_trgchk_before_furniture_moved(sfObj* obj);
int ev_mes_trgchk_after_furniture_moved(sfObj* obj);
int ev_mes_exec_with_se(sfObj* obj);
void ev_3ldk0_first5_msg_init();
int ev_3ldk0_init_mcd__first5();
int ev_cmn_init_mcd_val0__first5(sfObj* obj);
int ev_3ldk0_init_msg_list(sfObj* obj);
int ev_3ldk0_rl00_Msg_Faucet_trgchk(sfObj* obj);
int ev_3ldk0_rl00_Msg_Faucet_init(sfObj* obj);
int ev_3ldk0_rl00_msg_furniture_before_trgchk(sfObj* obj);
int ev_3ldk0_rl00_Msg_Clock_trgchk(sfObj* obj);
int ev_3ldk0_rl00_Msg_Shoes_trgchk(sfObj* obj);
int ev_3ldk0_trgchk_mcd_prologue_only(sfObj* obj);
int ev_3ldk0_rl00_Msg_Front_trgchk(sfObj* obj);
int ev_3ldk0_rl00_Msg_Front_init();
int ev_3ldk0_rl00_Msg_Front_init__first5(sfObj* obj);
int ev_mes_trgchk(sfObj* obj);
int ev_3ldk0_rl00_window_trgchk();
int ev_3ldk0_rl01_Msg_Window_trgchk(sfObj* obj);
int ev_3ldk0_rl03_Msg_TV_init(sfObj* obj);
int ev_3ldk0_rl00_Msg_Table_init(sfObj* obj);
int ev_3ldk0_rl00_2212_trgchk(sfObj* obj);
int ev_3ldk0_rl00_2212_init(sfObj* obj);
int ev_3ldk0_rl00_2212_exec(sfObj* obj);
int ev_3ldk0_rl03_plate_text_init(sfObj* obj);
int ev_3ldk0_rl00_Msg_PhenomMeat_trgchk(sfObj* obj);
int ev_3ldk0_rl00_UseLiberationKey_trgchk(sfObj* obj);
int ev_3ldk0_rl00_UseLiberationKey_end();
int ev_3ldk0_rl00_clushlight_trgchk(sfObj* obj);
int ev_3ldk0_rl00_clushlight_end();
int ev_3ldk0_rl00_fridge_trgchk(sfObj* obj);
int ev_3ldk0_rl01_Msg_ChurchPict_trgchk(sfObj* obj);
int ev_3ldk0_rl01_Msg_Bed_init();
int ev_3ldk0_rl01_Msg_Bed_init__first5(sfObj* obj);
int ev_3ldk0_rl03_Msg_UnderHole_trgchk(sfObj* obj);
int ev_3ldk0_rl03_Msg_Shelf_init();
int ev_3ldk0_rl03_Msg_BathtubWall_trgchk(sfObj* obj);
int ev_3ldk0_rl02_2217_exec(sfObj* obj);
int ev_3ldk0_rl03_Msg_Drier_init();
int ev_3ldk0_rl03_Msg_Drier_end();
int ev_3ldk0_rl03_Msg_ToolShelf_init();
int ev_3ldk0_rl04_Msg_Hollow_init(sfObj* obj);
int ev_3ldk0_rl04_Msg_Hollow_end(sfObj* obj);
int ev_3ldk0_rl04_Msg_Walter_trgchk(sfObj* obj);
int ev_3ldk0_rl04_Msg_Walter_init();

// 
// Start address: 0x1edae20
int ev_3ldk0_rl00_072_end(sfObj* obj)
{
	_EventInst* inst;
	// Line 87, Address: 0x1edae20, Func Offset: 0
	// Line 88, Address: 0x1edae28, Func Offset: 0x8
	// Line 90, Address: 0x1edae30, Func Offset: 0x10
	// Line 88, Address: 0x1edae34, Func Offset: 0x14
	// Line 90, Address: 0x1edae38, Func Offset: 0x18
	// Line 94, Address: 0x1edae44, Func Offset: 0x24
	// Line 97, Address: 0x1edae50, Func Offset: 0x30
	// Line 96, Address: 0x1edae54, Func Offset: 0x34
	// Line 97, Address: 0x1edae58, Func Offset: 0x38
	// Func End, Address: 0x1edae64, Func Offset: 0x44
}

// 
// Start address: 0x1edae70
int ev_3ldk0_rl02_007_trgchk(sfObj* obj)
{
	// Line 114, Address: 0x1edae70, Func Offset: 0
	// Line 116, Address: 0x1edae74, Func Offset: 0x4
	// Line 114, Address: 0x1edae78, Func Offset: 0x8
	// Line 116, Address: 0x1edae7c, Func Offset: 0xc
	// Line 119, Address: 0x1edae9c, Func Offset: 0x2c
	// Func End, Address: 0x1edaea8, Func Offset: 0x38
}

// 
// Start address: 0x1edaeb0
int ev_3ldk0_rl02_007_init()
{
	// Line 121, Address: 0x1edaeb0, Func Offset: 0
	// Line 122, Address: 0x1edaeb4, Func Offset: 0x4
	// Line 121, Address: 0x1edaeb8, Func Offset: 0x8
	// Line 122, Address: 0x1edaebc, Func Offset: 0xc
	// Line 124, Address: 0x1edaecc, Func Offset: 0x1c
	// Line 125, Address: 0x1edaed4, Func Offset: 0x24
	// Line 128, Address: 0x1edaee0, Func Offset: 0x30
	// Line 129, Address: 0x1edaeec, Func Offset: 0x3c
	// Line 131, Address: 0x1edaef0, Func Offset: 0x40
	// Line 130, Address: 0x1edaef4, Func Offset: 0x44
	// Line 131, Address: 0x1edaef8, Func Offset: 0x48
	// Func End, Address: 0x1edaf00, Func Offset: 0x50
}

// 
// Start address: 0x1edaf00
int ev_3ldk0_rl02_007_end()
{
	// Line 133, Address: 0x1edaf00, Func Offset: 0
	// Line 135, Address: 0x1edaf08, Func Offset: 0x8
	// Line 136, Address: 0x1edaf18, Func Offset: 0x18
	// Line 139, Address: 0x1edaf20, Func Offset: 0x20
	// Line 141, Address: 0x1edaf34, Func Offset: 0x34
	// Line 143, Address: 0x1edaf40, Func Offset: 0x40
	// Line 144, Address: 0x1edaf4c, Func Offset: 0x4c
	// Line 146, Address: 0x1edaf58, Func Offset: 0x58
	// Line 148, Address: 0x1edaf64, Func Offset: 0x64
	// Line 166, Address: 0x1edaf80, Func Offset: 0x80
	// Line 165, Address: 0x1edaf88, Func Offset: 0x88
	// Line 166, Address: 0x1edaf8c, Func Offset: 0x8c
	// Func End, Address: 0x1edaf94, Func Offset: 0x94
}

// 
// Start address: 0x1edafa0
int ev_3ldk0_012_mes()
{
	int rtv;
	// Line 181, Address: 0x1edafa0, Func Offset: 0
	// Line 184, Address: 0x1edafac, Func Offset: 0xc
	// Line 185, Address: 0x1edafbc, Func Offset: 0x1c
	// Line 187, Address: 0x1edafcc, Func Offset: 0x2c
	// Line 189, Address: 0x1edafd4, Func Offset: 0x34
	// Line 190, Address: 0x1edafd8, Func Offset: 0x38
	// Line 191, Address: 0x1edafdc, Func Offset: 0x3c
	// Line 193, Address: 0x1edafe0, Func Offset: 0x40
	// Line 194, Address: 0x1edafe4, Func Offset: 0x44
	// Func End, Address: 0x1edaff4, Func Offset: 0x54
	// Line 2554, Address: 0x1edafa0, Func Offset: 0
	// Line 2555, Address: 0x1edafa4, Func Offset: 0x4
	// Line 2554, Address: 0x1edafa8, Func Offset: 0x8
	// Line 2555, Address: 0x1edafac, Func Offset: 0xc
	// Line 2557, Address: 0x1edafc0, Func Offset: 0x20
	// Func End, Address: 0x1edafcc, Func Offset: 0x2c
}

// 
// Start address: 0x1edb000
int rl00_012_yes_trg_chk()
{
	// Line 209, Address: 0x1edb000, Func Offset: 0
	// Line 211, Address: 0x1edb014, Func Offset: 0x14
	// Line 213, Address: 0x1edb024, Func Offset: 0x24
	// Line 214, Address: 0x1edb038, Func Offset: 0x38
	// Line 218, Address: 0x1edb040, Func Offset: 0x40
	// Line 219, Address: 0x1edb048, Func Offset: 0x48
	// Func End, Address: 0x1edb050, Func Offset: 0x50
}

// 
// Start address: 0x1edb050
int rl00_012_yes_exec(sfObj* obj)
{
	int rtv;
	// Line 222, Address: 0x1edb050, Func Offset: 0
	// Line 225, Address: 0x1edb054, Func Offset: 0x4
	// Line 222, Address: 0x1edb058, Func Offset: 0x8
	// Line 225, Address: 0x1edb068, Func Offset: 0x18
	// Line 226, Address: 0x1edb084, Func Offset: 0x34
	// Line 227, Address: 0x1edb088, Func Offset: 0x38
	// Line 228, Address: 0x1edb0a0, Func Offset: 0x50
	// Line 229, Address: 0x1edb0c4, Func Offset: 0x74
	// Line 232, Address: 0x1edb0d0, Func Offset: 0x80
	// Line 233, Address: 0x1edb0e0, Func Offset: 0x90
	// Line 235, Address: 0x1edb0e8, Func Offset: 0x98
	// Line 238, Address: 0x1edb0f0, Func Offset: 0xa0
	// Line 240, Address: 0x1edb0fc, Func Offset: 0xac
	// Line 242, Address: 0x1edb100, Func Offset: 0xb0
	// Line 243, Address: 0x1edb104, Func Offset: 0xb4
	// Func End, Address: 0x1edb118, Func Offset: 0xc8
}

// 
// Start address: 0x1edb120
int destruct_rl00_012_yes()
{
	// Line 247, Address: 0x1edb120, Func Offset: 0
	// Line 248, Address: 0x1edb124, Func Offset: 0x4
	// Line 247, Address: 0x1edb128, Func Offset: 0x8
	// Line 249, Address: 0x1edb134, Func Offset: 0x14
	// Func End, Address: 0x1edb13c, Func Offset: 0x1c
}

// 
// Start address: 0x1edb140
int ev_3ldk0_rl02_089_trgchk(sfObj* obj)
{
	// Line 275, Address: 0x1edb140, Func Offset: 0
	// Line 276, Address: 0x1edb14c, Func Offset: 0xc
	// Line 275, Address: 0x1edb150, Func Offset: 0x10
	// Line 276, Address: 0x1edb154, Func Offset: 0x14
	// Line 277, Address: 0x1edb164, Func Offset: 0x24
	// Line 278, Address: 0x1edb16c, Func Offset: 0x2c
	// Line 279, Address: 0x1edb170, Func Offset: 0x30
	// Line 280, Address: 0x1edb178, Func Offset: 0x38
	// Func End, Address: 0x1edb184, Func Offset: 0x44
}

// 
// Start address: 0x1edb190
int ev_3ldk0_rl02_089_init()
{
	// Line 282, Address: 0x1edb190, Func Offset: 0
	// Line 283, Address: 0x1edb194, Func Offset: 0x4
	// Line 282, Address: 0x1edb198, Func Offset: 0x8
	// Line 283, Address: 0x1edb19c, Func Offset: 0xc
	// Line 285, Address: 0x1edb1ac, Func Offset: 0x1c
	// Line 286, Address: 0x1edb1b4, Func Offset: 0x24
	// Line 289, Address: 0x1edb1c0, Func Offset: 0x30
	// Line 290, Address: 0x1edb1cc, Func Offset: 0x3c
	// Line 292, Address: 0x1edb1d0, Func Offset: 0x40
	// Line 291, Address: 0x1edb1d4, Func Offset: 0x44
	// Line 292, Address: 0x1edb1d8, Func Offset: 0x48
	// Func End, Address: 0x1edb1e0, Func Offset: 0x50
}

// 
// Start address: 0x1edb1e0
int ev_3ldk0_rl02_089_exec()
{
	int ret;
	// Line 294, Address: 0x1edb1e0, Func Offset: 0
	// Line 297, Address: 0x1edb1ec, Func Offset: 0xc
	// Line 299, Address: 0x1edb1fc, Func Offset: 0x1c
	// Line 301, Address: 0x1edb20c, Func Offset: 0x2c
	// Line 302, Address: 0x1edb214, Func Offset: 0x34
	// Line 304, Address: 0x1edb228, Func Offset: 0x48
	// Line 305, Address: 0x1edb230, Func Offset: 0x50
	// Line 308, Address: 0x1edb238, Func Offset: 0x58
	// Line 310, Address: 0x1edb254, Func Offset: 0x74
	// Line 311, Address: 0x1edb258, Func Offset: 0x78
	// Line 312, Address: 0x1edb25c, Func Offset: 0x7c
	// Line 314, Address: 0x1edb260, Func Offset: 0x80
	// Line 315, Address: 0x1edb264, Func Offset: 0x84
	// Func End, Address: 0x1edb274, Func Offset: 0x94
}

// 
// Start address: 0x1edb280
int ev_3ldk0_rl02_099_trgchk(sfObj* obj)
{
	// Line 330, Address: 0x1edb280, Func Offset: 0
	// Line 332, Address: 0x1edb284, Func Offset: 0x4
	// Line 330, Address: 0x1edb288, Func Offset: 0x8
	// Line 332, Address: 0x1edb28c, Func Offset: 0xc
	// Line 335, Address: 0x1edb2ac, Func Offset: 0x2c
	// Func End, Address: 0x1edb2b8, Func Offset: 0x38
}

// 
// Start address: 0x1edb2c0
int ev_3ldk0_rl02_099_init()
{
	// Line 337, Address: 0x1edb2c0, Func Offset: 0
	// Line 338, Address: 0x1edb2c4, Func Offset: 0x4
	// Line 337, Address: 0x1edb2c8, Func Offset: 0x8
	// Line 338, Address: 0x1edb2cc, Func Offset: 0xc
	// Line 340, Address: 0x1edb2dc, Func Offset: 0x1c
	// Line 341, Address: 0x1edb2e4, Func Offset: 0x24
	// Line 344, Address: 0x1edb2f0, Func Offset: 0x30
	// Line 345, Address: 0x1edb2fc, Func Offset: 0x3c
	// Line 347, Address: 0x1edb300, Func Offset: 0x40
	// Line 346, Address: 0x1edb304, Func Offset: 0x44
	// Line 347, Address: 0x1edb308, Func Offset: 0x48
	// Func End, Address: 0x1edb310, Func Offset: 0x50
}

// 
// Start address: 0x1edb310
int ev_3ldk0_rl02_099_exec()
{
	int ret;
	// Line 349, Address: 0x1edb310, Func Offset: 0
	// Line 352, Address: 0x1edb31c, Func Offset: 0xc
	// Line 354, Address: 0x1edb32c, Func Offset: 0x1c
	// Line 356, Address: 0x1edb33c, Func Offset: 0x2c
	// Line 357, Address: 0x1edb344, Func Offset: 0x34
	// Line 359, Address: 0x1edb358, Func Offset: 0x48
	// Line 360, Address: 0x1edb360, Func Offset: 0x50
	// Line 363, Address: 0x1edb368, Func Offset: 0x58
	// Line 364, Address: 0x1edb384, Func Offset: 0x74
	// Line 366, Address: 0x1edb388, Func Offset: 0x78
	// Line 368, Address: 0x1edb390, Func Offset: 0x80
	// Line 370, Address: 0x1edb398, Func Offset: 0x88
	// Line 371, Address: 0x1edb39c, Func Offset: 0x8c
	// Line 373, Address: 0x1edb3a0, Func Offset: 0x90
	// Line 374, Address: 0x1edb3a4, Func Offset: 0x94
	// Func End, Address: 0x1edb3b4, Func Offset: 0xa4
}

// 
// Start address: 0x1edb3c0
int ev_3ldk0_rl02_110_trgchk(sfObj* obj)
{
	// Line 389, Address: 0x1edb3c0, Func Offset: 0
	// Line 391, Address: 0x1edb3c4, Func Offset: 0x4
	// Line 389, Address: 0x1edb3c8, Func Offset: 0x8
	// Line 391, Address: 0x1edb3cc, Func Offset: 0xc
	// Line 394, Address: 0x1edb3ec, Func Offset: 0x2c
	// Func End, Address: 0x1edb3f8, Func Offset: 0x38
}

// 
// Start address: 0x1edb400
int ev_3ldk0_rl02_110_init()
{
	// Line 396, Address: 0x1edb400, Func Offset: 0
	// Line 397, Address: 0x1edb404, Func Offset: 0x4
	// Line 396, Address: 0x1edb408, Func Offset: 0x8
	// Line 397, Address: 0x1edb40c, Func Offset: 0xc
	// Line 399, Address: 0x1edb41c, Func Offset: 0x1c
	// Line 400, Address: 0x1edb424, Func Offset: 0x24
	// Line 403, Address: 0x1edb430, Func Offset: 0x30
	// Line 404, Address: 0x1edb43c, Func Offset: 0x3c
	// Line 406, Address: 0x1edb440, Func Offset: 0x40
	// Line 405, Address: 0x1edb444, Func Offset: 0x44
	// Line 406, Address: 0x1edb448, Func Offset: 0x48
	// Func End, Address: 0x1edb450, Func Offset: 0x50
}

// 
// Start address: 0x1edb450
int ev_3ldk0_rl02_110_exec()
{
	int ret;
	// Line 408, Address: 0x1edb450, Func Offset: 0
	// Line 411, Address: 0x1edb45c, Func Offset: 0xc
	// Line 413, Address: 0x1edb46c, Func Offset: 0x1c
	// Line 415, Address: 0x1edb47c, Func Offset: 0x2c
	// Line 416, Address: 0x1edb484, Func Offset: 0x34
	// Line 418, Address: 0x1edb498, Func Offset: 0x48
	// Line 419, Address: 0x1edb4a0, Func Offset: 0x50
	// Line 422, Address: 0x1edb4a8, Func Offset: 0x58
	// Line 423, Address: 0x1edb4c4, Func Offset: 0x74
	// Line 425, Address: 0x1edb4c8, Func Offset: 0x78
	// Line 427, Address: 0x1edb4d0, Func Offset: 0x80
	// Line 428, Address: 0x1edb4d4, Func Offset: 0x84
	// Line 430, Address: 0x1edb4d8, Func Offset: 0x88
	// Line 431, Address: 0x1edb4dc, Func Offset: 0x8c
	// Func End, Address: 0x1edb4ec, Func Offset: 0x9c
}

// 
// Start address: 0x1edb4f0
int ev_3ldk0_rl02_039_trgchk(sfObj* obj)
{
	// Line 446, Address: 0x1edb4f0, Func Offset: 0
	// Line 448, Address: 0x1edb4f4, Func Offset: 0x4
	// Line 446, Address: 0x1edb4f8, Func Offset: 0x8
	// Line 448, Address: 0x1edb4fc, Func Offset: 0xc
	// Line 451, Address: 0x1edb51c, Func Offset: 0x2c
	// Func End, Address: 0x1edb528, Func Offset: 0x38
}

// 
// Start address: 0x1edb530
int ev_3ldk0_rl02_039_init()
{
	// Line 453, Address: 0x1edb530, Func Offset: 0
	// Line 454, Address: 0x1edb534, Func Offset: 0x4
	// Line 453, Address: 0x1edb538, Func Offset: 0x8
	// Line 454, Address: 0x1edb53c, Func Offset: 0xc
	// Line 456, Address: 0x1edb54c, Func Offset: 0x1c
	// Line 457, Address: 0x1edb554, Func Offset: 0x24
	// Line 460, Address: 0x1edb560, Func Offset: 0x30
	// Line 461, Address: 0x1edb56c, Func Offset: 0x3c
	// Line 464, Address: 0x1edb570, Func Offset: 0x40
	// Line 463, Address: 0x1edb574, Func Offset: 0x44
	// Line 464, Address: 0x1edb578, Func Offset: 0x48
	// Func End, Address: 0x1edb580, Func Offset: 0x50
}

// 
// Start address: 0x1edb580
int ev_3ldk0_rl02_039_exec()
{
	int ret;
	// Line 466, Address: 0x1edb580, Func Offset: 0
	// Line 469, Address: 0x1edb58c, Func Offset: 0xc
	// Line 471, Address: 0x1edb59c, Func Offset: 0x1c
	// Line 473, Address: 0x1edb5ac, Func Offset: 0x2c
	// Line 474, Address: 0x1edb5b4, Func Offset: 0x34
	// Line 476, Address: 0x1edb5c8, Func Offset: 0x48
	// Line 477, Address: 0x1edb5d0, Func Offset: 0x50
	// Line 480, Address: 0x1edb5d8, Func Offset: 0x58
	// Line 481, Address: 0x1edb5f4, Func Offset: 0x74
	// Line 483, Address: 0x1edb5f8, Func Offset: 0x78
	// Line 485, Address: 0x1edb600, Func Offset: 0x80
	// Line 486, Address: 0x1edb604, Func Offset: 0x84
	// Line 488, Address: 0x1edb608, Func Offset: 0x88
	// Line 489, Address: 0x1edb60c, Func Offset: 0x8c
	// Func End, Address: 0x1edb61c, Func Offset: 0x9c
}

// 
// Start address: 0x1edb620
int ev_3ldk0_rl03_154_trgchk(sfObj* obj)
{
	// Line 504, Address: 0x1edb620, Func Offset: 0
	// Line 507, Address: 0x1edb624, Func Offset: 0x4
	// Line 504, Address: 0x1edb628, Func Offset: 0x8
	// Line 507, Address: 0x1edb630, Func Offset: 0x10
	// Line 509, Address: 0x1edb640, Func Offset: 0x20
	// Line 510, Address: 0x1edb650, Func Offset: 0x30
	// Line 513, Address: 0x1edb658, Func Offset: 0x38
	// Line 514, Address: 0x1edb660, Func Offset: 0x40
	// Func End, Address: 0x1edb670, Func Offset: 0x50
}

// 
// Start address: 0x1edb670
int ev_3ldk0_rl03_154_init()
{
	// Line 516, Address: 0x1edb670, Func Offset: 0
	// Line 517, Address: 0x1edb674, Func Offset: 0x4
	// Line 516, Address: 0x1edb678, Func Offset: 0x8
	// Line 517, Address: 0x1edb67c, Func Offset: 0xc
	// Line 519, Address: 0x1edb68c, Func Offset: 0x1c
	// Line 520, Address: 0x1edb694, Func Offset: 0x24
	// Line 523, Address: 0x1edb6a0, Func Offset: 0x30
	// Line 524, Address: 0x1edb6ac, Func Offset: 0x3c
	// Line 526, Address: 0x1edb6b0, Func Offset: 0x40
	// Line 525, Address: 0x1edb6b4, Func Offset: 0x44
	// Line 526, Address: 0x1edb6b8, Func Offset: 0x48
	// Func End, Address: 0x1edb6c0, Func Offset: 0x50
}

// 
// Start address: 0x1edb6c0
int ev_3ldk0_rl03_154_exec()
{
	int ret;
	// Line 528, Address: 0x1edb6c0, Func Offset: 0
	// Line 531, Address: 0x1edb6cc, Func Offset: 0xc
	// Line 533, Address: 0x1edb6dc, Func Offset: 0x1c
	// Line 535, Address: 0x1edb6ec, Func Offset: 0x2c
	// Line 537, Address: 0x1edb6fc, Func Offset: 0x3c
	// Line 539, Address: 0x1edb704, Func Offset: 0x44
	// Line 540, Address: 0x1edb710, Func Offset: 0x50
	// Line 542, Address: 0x1edb718, Func Offset: 0x58
	// Line 544, Address: 0x1edb72c, Func Offset: 0x6c
	// Line 547, Address: 0x1edb748, Func Offset: 0x88
	// Line 549, Address: 0x1edb750, Func Offset: 0x90
	// Line 550, Address: 0x1edb754, Func Offset: 0x94
	// Line 552, Address: 0x1edb758, Func Offset: 0x98
	// Line 553, Address: 0x1edb75c, Func Offset: 0x9c
	// Func End, Address: 0x1edb76c, Func Offset: 0xac
}

// 
// Start address: 0x1edb770
int ev_3ldk0_rl03_169_trgchk(sfObj* obj)
{
	// Line 569, Address: 0x1edb770, Func Offset: 0
	// Line 572, Address: 0x1edb774, Func Offset: 0x4
	// Line 569, Address: 0x1edb778, Func Offset: 0x8
	// Line 572, Address: 0x1edb780, Func Offset: 0x10
	// Line 576, Address: 0x1edb790, Func Offset: 0x20
	// Line 580, Address: 0x1edb7b8, Func Offset: 0x48
	// Line 581, Address: 0x1edb7c0, Func Offset: 0x50
	// Func End, Address: 0x1edb7d0, Func Offset: 0x60
}

// 
// Start address: 0x1edb7d0
int ev_3ldk0_rl00_138_init(sfObj* obj)
{
	_EventInst* inst;
	// Line 629, Address: 0x1edb7d0, Func Offset: 0
	// Line 630, Address: 0x1edb7dc, Func Offset: 0xc
	// Line 631, Address: 0x1edb7f0, Func Offset: 0x20
	// Line 632, Address: 0x1edb7f8, Func Offset: 0x28
	// Line 633, Address: 0x1edb80c, Func Offset: 0x3c
	// Line 634, Address: 0x1edb810, Func Offset: 0x40
	// Line 635, Address: 0x1edb818, Func Offset: 0x48
	// Func End, Address: 0x1edb828, Func Offset: 0x58
}

// 
// Start address: 0x1edb830
int ev_3ldk0_rl00_138_end()
{
	// Line 637, Address: 0x1edb830, Func Offset: 0
	// Line 638, Address: 0x1edb834, Func Offset: 0x4
	// Line 637, Address: 0x1edb838, Func Offset: 0x8
	// Line 638, Address: 0x1edb83c, Func Offset: 0xc
	// Line 640, Address: 0x1edb844, Func Offset: 0x14
	// Line 639, Address: 0x1edb848, Func Offset: 0x18
	// Line 640, Address: 0x1edb84c, Func Offset: 0x1c
	// Func End, Address: 0x1edb854, Func Offset: 0x24
}

// 
// Start address: 0x1edb860
int ev_3ldk0_rl00_149_trgchk(sfObj* obj)
{
	// Line 656, Address: 0x1edb860, Func Offset: 0
	// Line 657, Address: 0x1edb868, Func Offset: 0x8
	// Line 658, Address: 0x1edb878, Func Offset: 0x18
	// Line 661, Address: 0x1edb880, Func Offset: 0x20
	// Line 664, Address: 0x1edb890, Func Offset: 0x30
	// Func End, Address: 0x1edb89c, Func Offset: 0x3c
}

// 
// Start address: 0x1edb8a0
int ev_3ldk0_rl03_152_init(sfObj* obj)
{
	_EventInst* inst;
	// Line 685, Address: 0x1edb8a0, Func Offset: 0
	// Line 688, Address: 0x1edb8ac, Func Offset: 0xc
	// Line 689, Address: 0x1edb8b4, Func Offset: 0x14
	// Line 691, Address: 0x1edb8c8, Func Offset: 0x28
	// Line 692, Address: 0x1edb8d8, Func Offset: 0x38
	// Line 695, Address: 0x1edb8e0, Func Offset: 0x40
	// Line 696, Address: 0x1edb8f4, Func Offset: 0x54
	// Line 697, Address: 0x1edb8f8, Func Offset: 0x58
	// Line 699, Address: 0x1edb900, Func Offset: 0x60
	// Line 698, Address: 0x1edb904, Func Offset: 0x64
	// Line 699, Address: 0x1edb908, Func Offset: 0x68
	// Func End, Address: 0x1edb914, Func Offset: 0x74
}

// 
// Start address: 0x1edb920
int ev_mes_trgchk_before_furniture_moved(sfObj* obj)
{
	// Line 717, Address: 0x1edb920, Func Offset: 0
	// Line 718, Address: 0x1edb92c, Func Offset: 0xc
	// Line 719, Address: 0x1edb93c, Func Offset: 0x1c
	// Line 720, Address: 0x1edb944, Func Offset: 0x24
	// Line 724, Address: 0x1edb948, Func Offset: 0x28
	// Line 727, Address: 0x1edb970, Func Offset: 0x50
	// Func End, Address: 0x1edb980, Func Offset: 0x60
}

// 
// Start address: 0x1edb980
int ev_mes_trgchk_after_furniture_moved(sfObj* obj)
{
	// Line 730, Address: 0x1edb980, Func Offset: 0
	// Line 731, Address: 0x1edb98c, Func Offset: 0xc
	// Line 732, Address: 0x1edb99c, Func Offset: 0x1c
	// Line 733, Address: 0x1edb9a4, Func Offset: 0x24
	// Line 737, Address: 0x1edb9a8, Func Offset: 0x28
	// Line 740, Address: 0x1edb9d0, Func Offset: 0x50
	// Func End, Address: 0x1edb9e0, Func Offset: 0x60
}

// 
// Start address: 0x1edb9e0
int ev_mes_exec_with_se(sfObj* obj)
{
	int rtv;
	int kind;
	// Line 743, Address: 0x1edb9e0, Func Offset: 0
	// Line 747, Address: 0x1edb9e4, Func Offset: 0x4
	// Line 743, Address: 0x1edb9e8, Func Offset: 0x8
	// Line 747, Address: 0x1edb9f8, Func Offset: 0x18
	// Line 745, Address: 0x1edb9fc, Func Offset: 0x1c
	// Line 747, Address: 0x1edba00, Func Offset: 0x20
	// Line 749, Address: 0x1edba18, Func Offset: 0x38
	// Line 750, Address: 0x1edba3c, Func Offset: 0x5c
	// Line 751, Address: 0x1edba60, Func Offset: 0x80
	// Line 752, Address: 0x1edba80, Func Offset: 0xa0
	// Line 754, Address: 0x1edba98, Func Offset: 0xb8
	// Line 755, Address: 0x1edbaa0, Func Offset: 0xc0
	// Line 757, Address: 0x1edbaa8, Func Offset: 0xc8
	// Line 758, Address: 0x1edbab4, Func Offset: 0xd4
	// Line 760, Address: 0x1edbab8, Func Offset: 0xd8
	// Line 761, Address: 0x1edbabc, Func Offset: 0xdc
	// Func End, Address: 0x1edbad0, Func Offset: 0xf0
}

// 
// Start address: 0x1edbad0
void ev_3ldk0_first5_msg_init()
{
	// Line 768, Address: 0x1edbad0, Func Offset: 0
	// Line 769, Address: 0x1edbad8, Func Offset: 0x8
	// Line 770, Address: 0x1edbae8, Func Offset: 0x18
	// Line 771, Address: 0x1edbaec, Func Offset: 0x1c
	// Line 772, Address: 0x1edbaf0, Func Offset: 0x20
	// Func End, Address: 0x1edbafc, Func Offset: 0x2c
}

// 
// Start address: 0x1edbb00
int ev_3ldk0_init_mcd__first5()
{
	_anon0* msg[5];
	// Line 775, Address: 0x1edbb00, Func Offset: 0
	// Line 778, Address: 0x1edbb08, Func Offset: 0x8
	// Line 786, Address: 0x1edbb28, Func Offset: 0x28
	// Line 779, Address: 0x1edbb2c, Func Offset: 0x2c
	// Line 786, Address: 0x1edbb3c, Func Offset: 0x3c
	// Line 779, Address: 0x1edbb40, Func Offset: 0x40
	// Line 786, Address: 0x1edbb48, Func Offset: 0x48
	// Line 787, Address: 0x1edbb50, Func Offset: 0x50
	// Line 788, Address: 0x1edbb54, Func Offset: 0x54
	// Line 787, Address: 0x1edbb58, Func Offset: 0x58
	// Line 788, Address: 0x1edbb64, Func Offset: 0x64
	// Line 789, Address: 0x1edbb6c, Func Offset: 0x6c
	// Line 790, Address: 0x1edbb70, Func Offset: 0x70
	// Line 791, Address: 0x1edbb78, Func Offset: 0x78
	// Func End, Address: 0x1edbb84, Func Offset: 0x84
}

// 
// Start address: 0x1edbb90
int ev_cmn_init_mcd_val0__first5(sfObj* obj)
{
	// Line 822, Address: 0x1edbb90, Func Offset: 0
	// Line 824, Address: 0x1edbb9c, Func Offset: 0xc
	// Line 827, Address: 0x1edbbbc, Func Offset: 0x2c
	// Func End, Address: 0x1edbbcc, Func Offset: 0x3c
}

// 
// Start address: 0x1edbbd0
int ev_3ldk0_init_msg_list(sfObj* obj)
{
	_EventInst* evinst;
	_anon0 val;
	// Line 944, Address: 0x1edbbd0, Func Offset: 0
	// Line 946, Address: 0x1edbbdc, Func Offset: 0xc
	// Line 947, Address: 0x1edbbec, Func Offset: 0x1c
	// Line 948, Address: 0x1edbbf4, Func Offset: 0x24
	// Line 950, Address: 0x1edbbf8, Func Offset: 0x28
	// Line 951, Address: 0x1edbc08, Func Offset: 0x38
	// Line 955, Address: 0x1edbc10, Func Offset: 0x40
	// Line 959, Address: 0x1edbc18, Func Offset: 0x48
	// Line 962, Address: 0x1edbc28, Func Offset: 0x58
	// Line 964, Address: 0x1edbc34, Func Offset: 0x64
	// Line 965, Address: 0x1edbc38, Func Offset: 0x68
	// Func End, Address: 0x1edbc48, Func Offset: 0x78
}

// 
// Start address: 0x1edbc50
int ev_3ldk0_rl00_Msg_Faucet_trgchk(sfObj* obj)
{
	// Line 1042, Address: 0x1edbc50, Func Offset: 0
	// Line 1045, Address: 0x1edbc60, Func Offset: 0x10
	// Line 1048, Address: 0x1edbc84, Func Offset: 0x34
	// Func End, Address: 0x1edbc94, Func Offset: 0x44
}

// 
// Start address: 0x1edbca0
int ev_3ldk0_rl00_Msg_Faucet_init(sfObj* obj)
{
	// Line 1050, Address: 0x1edbca0, Func Offset: 0
	// Line 1051, Address: 0x1edbcb0, Func Offset: 0x10
	// Line 1052, Address: 0x1edbcc0, Func Offset: 0x20
	// Line 1053, Address: 0x1edbcc8, Func Offset: 0x28
	// Line 1065, Address: 0x1edbcd0, Func Offset: 0x30
	// Line 1068, Address: 0x1edbcd8, Func Offset: 0x38
	// Line 1067, Address: 0x1edbce0, Func Offset: 0x40
	// Line 1068, Address: 0x1edbce4, Func Offset: 0x44
	// Func End, Address: 0x1edbcec, Func Offset: 0x4c
}

// 
// Start address: 0x1edbcf0
int ev_3ldk0_rl00_msg_furniture_before_trgchk(sfObj* obj)
{
	// Line 1094, Address: 0x1edbcf0, Func Offset: 0
	// Line 1096, Address: 0x1edbd00, Func Offset: 0x10
	// Line 1098, Address: 0x1edbd14, Func Offset: 0x24
	// Line 1099, Address: 0x1edbd24, Func Offset: 0x34
	// Line 1100, Address: 0x1edbd28, Func Offset: 0x38
	// Line 1101, Address: 0x1edbd30, Func Offset: 0x40
	// Func End, Address: 0x1edbd3c, Func Offset: 0x4c
}

// 
// Start address: 0x1edbd40
int ev_3ldk0_rl00_Msg_Clock_trgchk(sfObj* obj)
{
	// Line 1138, Address: 0x1edbd40, Func Offset: 0
	// Line 1141, Address: 0x1edbd50, Func Offset: 0x10
	// Line 1144, Address: 0x1edbd74, Func Offset: 0x34
	// Func End, Address: 0x1edbd84, Func Offset: 0x44
}

// 
// Start address: 0x1edbd90
int ev_3ldk0_rl00_Msg_Shoes_trgchk(sfObj* obj)
{
	// Line 1169, Address: 0x1edbd90, Func Offset: 0
	// Line 1172, Address: 0x1edbda0, Func Offset: 0x10
	// Line 1175, Address: 0x1edbdc4, Func Offset: 0x34
	// Func End, Address: 0x1edbdd4, Func Offset: 0x44
}

// 
// Start address: 0x1edbde0
int ev_3ldk0_trgchk_mcd_prologue_only(sfObj* obj)
{
	// Line 1260, Address: 0x1edbde0, Func Offset: 0
	// Line 1262, Address: 0x1edbdec, Func Offset: 0xc
	// Line 1265, Address: 0x1edbe0c, Func Offset: 0x2c
	// Func End, Address: 0x1edbe1c, Func Offset: 0x3c
}

// 
// Start address: 0x1edbe20
int ev_3ldk0_rl00_Msg_Front_trgchk(sfObj* obj)
{
	// Line 1308, Address: 0x1edbe20, Func Offset: 0
	// Line 1310, Address: 0x1edbe2c, Func Offset: 0xc
	// Line 1311, Address: 0x1edbe40, Func Offset: 0x20
	// Line 1315, Address: 0x1edbe48, Func Offset: 0x28
	// Line 1316, Address: 0x1edbe58, Func Offset: 0x38
	// Line 1319, Address: 0x1edbe68, Func Offset: 0x48
	// Line 1322, Address: 0x1edbe78, Func Offset: 0x58
	// Line 1329, Address: 0x1edbe98, Func Offset: 0x78
	// Line 1330, Address: 0x1edbea0, Func Offset: 0x80
	// Func End, Address: 0x1edbeb0, Func Offset: 0x90
}

// 
// Start address: 0x1edbeb0
int ev_3ldk0_rl00_Msg_Front_init()
{
	// Line 1332, Address: 0x1edbeb0, Func Offset: 0
	// Line 1333, Address: 0x1edbeb8, Func Offset: 0x8
	// Line 1334, Address: 0x1edbec8, Func Offset: 0x18
	// Line 1335, Address: 0x1edbed0, Func Offset: 0x20
	// Line 1336, Address: 0x1edbed8, Func Offset: 0x28
	// Line 1337, Address: 0x1edbeec, Func Offset: 0x3c
	// Line 1338, Address: 0x1edbef4, Func Offset: 0x44
	// Line 1340, Address: 0x1edbef8, Func Offset: 0x48
	// Line 1339, Address: 0x1edbefc, Func Offset: 0x4c
	// Line 1340, Address: 0x1edbf00, Func Offset: 0x50
	// Func End, Address: 0x1edbf08, Func Offset: 0x58
}

// 
// Start address: 0x1edbf10
int ev_3ldk0_rl00_Msg_Front_init__first5(sfObj* obj)
{
	// Line 1342, Address: 0x1edbf10, Func Offset: 0
	// Line 1344, Address: 0x1edbf1c, Func Offset: 0xc
	// Line 1347, Address: 0x1edbf3c, Func Offset: 0x2c
	// Func End, Address: 0x1edbf4c, Func Offset: 0x3c
}

// 
// Start address: 0x1edbf50
int ev_mes_trgchk(sfObj* obj)
{
	// Line 1295, Address: 0x1edbf50, Func Offset: 0
	// Line 1297, Address: 0x1edbf5c, Func Offset: 0xc
	// Line 1298, Address: 0x1edbf70, Func Offset: 0x20
	// Line 1303, Address: 0x1edbf78, Func Offset: 0x28
	// Line 1306, Address: 0x1edbfa0, Func Offset: 0x50
	// Func End, Address: 0x1edbfb0, Func Offset: 0x60
}

// 
// Start address: 0x1edbfb0
int ev_3ldk0_rl00_window_trgchk()
{
	// Line 1430, Address: 0x1edbfb0, Func Offset: 0
	// Line 1432, Address: 0x1edbfb4, Func Offset: 0x4
	// Line 1430, Address: 0x1edbfb8, Func Offset: 0x8
	// Line 1432, Address: 0x1edbfbc, Func Offset: 0xc
	// Line 1433, Address: 0x1edbfcc, Func Offset: 0x1c
	// Line 1434, Address: 0x1edbfe0, Func Offset: 0x30
	// Line 1437, Address: 0x1edbfe8, Func Offset: 0x38
	// Line 1438, Address: 0x1edbff0, Func Offset: 0x40
	// Func End, Address: 0x1edbffc, Func Offset: 0x4c
}

// 
// Start address: 0x1edc000
int ev_3ldk0_rl01_Msg_Window_trgchk(sfObj* obj)
{
	// Line 1440, Address: 0x1edc000, Func Offset: 0
	// Line 1442, Address: 0x1edc00c, Func Offset: 0xc
	// Line 1445, Address: 0x1edc030, Func Offset: 0x30
	// Func End, Address: 0x1edc040, Func Offset: 0x40
}

// 
// Start address: 0x1edc040
int ev_3ldk0_rl03_Msg_TV_init(sfObj* obj)
{
	// Line 1495, Address: 0x1edc040, Func Offset: 0
	// Line 1497, Address: 0x1edc050, Func Offset: 0x10
	// Line 1498, Address: 0x1edc064, Func Offset: 0x24
	// Line 1499, Address: 0x1edc074, Func Offset: 0x34
	// Line 1500, Address: 0x1edc07c, Func Offset: 0x3c
	// Line 1502, Address: 0x1edc088, Func Offset: 0x48
	// Line 1503, Address: 0x1edc094, Func Offset: 0x54
	// Line 1504, Address: 0x1edc098, Func Offset: 0x58
	// Line 1507, Address: 0x1edc0a0, Func Offset: 0x60
	// Line 1508, Address: 0x1edc0a8, Func Offset: 0x68
	// Line 1509, Address: 0x1edc0b0, Func Offset: 0x70
	// Func End, Address: 0x1edc0bc, Func Offset: 0x7c
}

// 
// Start address: 0x1edc0c0
int ev_3ldk0_rl00_Msg_Table_init(sfObj* obj)
{
	// Line 1559, Address: 0x1edc0c0, Func Offset: 0
	// Line 1561, Address: 0x1edc0d0, Func Offset: 0x10
	// Line 1562, Address: 0x1edc0e4, Func Offset: 0x24
	// Line 1563, Address: 0x1edc0f0, Func Offset: 0x30
	// Line 1566, Address: 0x1edc0f8, Func Offset: 0x38
	// Line 1567, Address: 0x1edc100, Func Offset: 0x40
	// Line 1568, Address: 0x1edc108, Func Offset: 0x48
	// Func End, Address: 0x1edc114, Func Offset: 0x54
}

// 
// Start address: 0x1edc120
int ev_3ldk0_rl00_2212_trgchk(sfObj* obj)
{
	// Line 1592, Address: 0x1edc120, Func Offset: 0
	// Line 1595, Address: 0x1edc130, Func Offset: 0x10
	// Line 1598, Address: 0x1edc154, Func Offset: 0x34
	// Func End, Address: 0x1edc164, Func Offset: 0x44
}

// 
// Start address: 0x1edc170
int ev_3ldk0_rl00_2212_init(sfObj* obj)
{
	_EventInst* evinst;
	// Line 1600, Address: 0x1edc170, Func Offset: 0
	// Line 1601, Address: 0x1edc17c, Func Offset: 0xc
	// Line 1603, Address: 0x1edc184, Func Offset: 0x14
	// Line 1604, Address: 0x1edc190, Func Offset: 0x20
	// Line 1606, Address: 0x1edc1a0, Func Offset: 0x30
	// Line 1605, Address: 0x1edc1a4, Func Offset: 0x34
	// Line 1606, Address: 0x1edc1a8, Func Offset: 0x38
	// Func End, Address: 0x1edc1b4, Func Offset: 0x44
}

// 
// Start address: 0x1edc1c0
int ev_3ldk0_rl00_2212_exec(sfObj* obj)
{
	_ev2212work* wk;
	int ret;
	// Line 1608, Address: 0x1edc1c0, Func Offset: 0
	// Line 1614, Address: 0x1edc1d8, Func Offset: 0x18
	// Line 1612, Address: 0x1edc1dc, Func Offset: 0x1c
	// Line 1614, Address: 0x1edc1e0, Func Offset: 0x20
	// Line 1617, Address: 0x1edc208, Func Offset: 0x48
	// Line 1618, Address: 0x1edc22c, Func Offset: 0x6c
	// Line 1619, Address: 0x1edc234, Func Offset: 0x74
	// Line 1621, Address: 0x1edc23c, Func Offset: 0x7c
	// Line 1622, Address: 0x1edc240, Func Offset: 0x80
	// Line 1623, Address: 0x1edc250, Func Offset: 0x90
	// Line 1625, Address: 0x1edc258, Func Offset: 0x98
	// Line 1628, Address: 0x1edc260, Func Offset: 0xa0
	// Line 1629, Address: 0x1edc27c, Func Offset: 0xbc
	// Line 1630, Address: 0x1edc28c, Func Offset: 0xcc
	// Line 1631, Address: 0x1edc294, Func Offset: 0xd4
	// Line 1633, Address: 0x1edc29c, Func Offset: 0xdc
	// Line 1634, Address: 0x1edc2a0, Func Offset: 0xe0
	// Line 1635, Address: 0x1edc2b0, Func Offset: 0xf0
	// Line 1636, Address: 0x1edc2bc, Func Offset: 0xfc
	// Line 1638, Address: 0x1edc2c4, Func Offset: 0x104
	// Line 1640, Address: 0x1edc2cc, Func Offset: 0x10c
	// Line 1642, Address: 0x1edc2d0, Func Offset: 0x110
	// Line 1644, Address: 0x1edc2e0, Func Offset: 0x120
	// Line 1645, Address: 0x1edc2e8, Func Offset: 0x128
	// Line 1647, Address: 0x1edc2f0, Func Offset: 0x130
	// Line 1650, Address: 0x1edc2f8, Func Offset: 0x138
	// Line 1651, Address: 0x1edc31c, Func Offset: 0x15c
	// Line 1652, Address: 0x1edc324, Func Offset: 0x164
	// Line 1654, Address: 0x1edc32c, Func Offset: 0x16c
	// Line 1655, Address: 0x1edc330, Func Offset: 0x170
	// Line 1656, Address: 0x1edc340, Func Offset: 0x180
	// Line 1657, Address: 0x1edc348, Func Offset: 0x188
	// Line 1659, Address: 0x1edc350, Func Offset: 0x190
	// Line 1663, Address: 0x1edc358, Func Offset: 0x198
	// Line 1664, Address: 0x1edc368, Func Offset: 0x1a8
	// Line 1665, Address: 0x1edc36c, Func Offset: 0x1ac
	// Line 1664, Address: 0x1edc370, Func Offset: 0x1b0
	// Line 1670, Address: 0x1edc378, Func Offset: 0x1b8
	// Line 1671, Address: 0x1edc37c, Func Offset: 0x1bc
	// Func End, Address: 0x1edc394, Func Offset: 0x1d4
}

// 
// Start address: 0x1edc3a0
int ev_3ldk0_rl03_plate_text_init(sfObj* obj)
{
	_EventInst* evinst;
	_anon0 flag;
	_anon0 msg;
	// Line 1871, Address: 0x1edc3a0, Func Offset: 0
	// Line 1872, Address: 0x1edc3a8, Func Offset: 0x8
	// Line 1876, Address: 0x1edc3b4, Func Offset: 0x14
	// Line 1879, Address: 0x1edc3c8, Func Offset: 0x28
	// Line 1880, Address: 0x1edc3f4, Func Offset: 0x54
	// Line 1881, Address: 0x1edc3fc, Func Offset: 0x5c
	// Line 1884, Address: 0x1edc408, Func Offset: 0x68
	// Line 1886, Address: 0x1edc418, Func Offset: 0x78
	// Line 1888, Address: 0x1edc420, Func Offset: 0x80
	// Line 1887, Address: 0x1edc424, Func Offset: 0x84
	// Line 1888, Address: 0x1edc428, Func Offset: 0x88
	// Func End, Address: 0x1edc434, Func Offset: 0x94
}

// 
// Start address: 0x1edc440
int ev_3ldk0_rl00_Msg_PhenomMeat_trgchk(sfObj* obj)
{
	// Line 1946, Address: 0x1edc440, Func Offset: 0
	// Line 1948, Address: 0x1edc44c, Func Offset: 0xc
	// Line 1949, Address: 0x1edc45c, Func Offset: 0x1c
	// Line 1950, Address: 0x1edc464, Func Offset: 0x24
	// Line 1953, Address: 0x1edc468, Func Offset: 0x28
	// Line 1956, Address: 0x1edc490, Func Offset: 0x50
	// Func End, Address: 0x1edc4a0, Func Offset: 0x60
}

// 
// Start address: 0x1edc4a0
int ev_3ldk0_rl00_UseLiberationKey_trgchk(sfObj* obj)
{
	// Line 1972, Address: 0x1edc4a0, Func Offset: 0
	// Line 1974, Address: 0x1edc4b0, Func Offset: 0x10
	// Line 1977, Address: 0x1edc4d4, Func Offset: 0x34
	// Func End, Address: 0x1edc4e4, Func Offset: 0x44
}

// 
// Start address: 0x1edc4f0
int ev_3ldk0_rl00_UseLiberationKey_end()
{
	// Line 1979, Address: 0x1edc4f0, Func Offset: 0
	// Line 1980, Address: 0x1edc4f8, Func Offset: 0x8
	// Line 1981, Address: 0x1edc500, Func Offset: 0x10
	// Line 1982, Address: 0x1edc508, Func Offset: 0x18
	// Line 1984, Address: 0x1edc518, Func Offset: 0x28
	// Line 1983, Address: 0x1edc51c, Func Offset: 0x2c
	// Line 1984, Address: 0x1edc520, Func Offset: 0x30
	// Func End, Address: 0x1edc528, Func Offset: 0x38
}

// 
// Start address: 0x1edc530
int ev_3ldk0_rl00_clushlight_trgchk(sfObj* obj)
{
	// Line 2019, Address: 0x1edc530, Func Offset: 0
	// Line 2020, Address: 0x1edc534, Func Offset: 0x4
	// Line 2019, Address: 0x1edc538, Func Offset: 0x8
	// Line 2020, Address: 0x1edc53c, Func Offset: 0xc
	// Line 2021, Address: 0x1edc54c, Func Offset: 0x1c
	// Line 2022, Address: 0x1edc554, Func Offset: 0x24
	// Line 2024, Address: 0x1edc558, Func Offset: 0x28
	// Line 2027, Address: 0x1edc580, Func Offset: 0x50
	// Func End, Address: 0x1edc58c, Func Offset: 0x5c
}

// 
// Start address: 0x1edc590
int ev_3ldk0_rl00_clushlight_end()
{
	// Line 2030, Address: 0x1edc590, Func Offset: 0
	// Line 2031, Address: 0x1edc594, Func Offset: 0x4
	// Line 2030, Address: 0x1edc598, Func Offset: 0x8
	// Line 2032, Address: 0x1edc5a4, Func Offset: 0x14
	// Func End, Address: 0x1edc5ac, Func Offset: 0x1c
}

// 
// Start address: 0x1edc5b0
int ev_3ldk0_rl00_fridge_trgchk(sfObj* obj)
{
	// Line 2048, Address: 0x1edc5b0, Func Offset: 0
	// Line 2050, Address: 0x1edc5bc, Func Offset: 0xc
	// Line 2053, Address: 0x1edc5dc, Func Offset: 0x2c
	// Func End, Address: 0x1edc5ec, Func Offset: 0x3c
}

// 
// Start address: 0x1edc5f0
int ev_3ldk0_rl01_Msg_ChurchPict_trgchk(sfObj* obj)
{
	// Line 2109, Address: 0x1edc5f0, Func Offset: 0
	// Line 2112, Address: 0x1edc600, Func Offset: 0x10
	// Line 2115, Address: 0x1edc624, Func Offset: 0x34
	// Func End, Address: 0x1edc634, Func Offset: 0x44
}

// 
// Start address: 0x1edc640
int ev_3ldk0_rl01_Msg_Bed_init()
{
	// Line 2224, Address: 0x1edc640, Func Offset: 0
	// Line 2225, Address: 0x1edc648, Func Offset: 0x8
	// Line 2226, Address: 0x1edc658, Func Offset: 0x18
	// Line 2227, Address: 0x1edc660, Func Offset: 0x20
	// Line 2228, Address: 0x1edc668, Func Offset: 0x28
	// Line 2229, Address: 0x1edc67c, Func Offset: 0x3c
	// Line 2230, Address: 0x1edc684, Func Offset: 0x44
	// Line 2232, Address: 0x1edc690, Func Offset: 0x50
	// Line 2233, Address: 0x1edc69c, Func Offset: 0x5c
	// Line 2235, Address: 0x1edc6a0, Func Offset: 0x60
	// Line 2234, Address: 0x1edc6a4, Func Offset: 0x64
	// Line 2235, Address: 0x1edc6a8, Func Offset: 0x68
	// Func End, Address: 0x1edc6b0, Func Offset: 0x70
}

// 
// Start address: 0x1edc6b0
int ev_3ldk0_rl01_Msg_Bed_init__first5(sfObj* obj)
{
	// Line 2237, Address: 0x1edc6b0, Func Offset: 0
	// Line 2239, Address: 0x1edc6bc, Func Offset: 0xc
	// Line 2242, Address: 0x1edc6dc, Func Offset: 0x2c
	// Func End, Address: 0x1edc6ec, Func Offset: 0x3c
}

// 
// Start address: 0x1edc6f0
int ev_3ldk0_rl03_Msg_UnderHole_trgchk(sfObj* obj)
{
	// Line 2316, Address: 0x1edc6f0, Func Offset: 0
	// Line 2318, Address: 0x1edc6f4, Func Offset: 0x4
	// Line 2316, Address: 0x1edc6f8, Func Offset: 0x8
	// Line 2318, Address: 0x1edc6fc, Func Offset: 0xc
	// Line 2321, Address: 0x1edc714, Func Offset: 0x24
	// Func End, Address: 0x1edc720, Func Offset: 0x30
}

// 
// Start address: 0x1edc720
int ev_3ldk0_rl03_Msg_Shelf_init()
{
	// Line 2337, Address: 0x1edc720, Func Offset: 0
	// Line 2338, Address: 0x1edc728, Func Offset: 0x8
	// Line 2339, Address: 0x1edc738, Func Offset: 0x18
	// Line 2340, Address: 0x1edc740, Func Offset: 0x20
	// Line 2341, Address: 0x1edc748, Func Offset: 0x28
	// Line 2342, Address: 0x1edc770, Func Offset: 0x50
	// Line 2343, Address: 0x1edc77c, Func Offset: 0x5c
	// Line 2345, Address: 0x1edc788, Func Offset: 0x68
	// Line 2346, Address: 0x1edc794, Func Offset: 0x74
	// Line 2348, Address: 0x1edc798, Func Offset: 0x78
	// Line 2347, Address: 0x1edc79c, Func Offset: 0x7c
	// Line 2348, Address: 0x1edc7a0, Func Offset: 0x80
	// Func End, Address: 0x1edc7a8, Func Offset: 0x88
}

// 
// Start address: 0x1edc7b0
int ev_3ldk0_rl03_Msg_BathtubWall_trgchk(sfObj* obj)
{
	// Line 2433, Address: 0x1edc7b0, Func Offset: 0
	// Line 2436, Address: 0x1edc7b4, Func Offset: 0x4
	// Line 2433, Address: 0x1edc7b8, Func Offset: 0x8
	// Line 2436, Address: 0x1edc7bc, Func Offset: 0xc
	// Line 2439, Address: 0x1edc7d4, Func Offset: 0x24
	// Func End, Address: 0x1edc7e0, Func Offset: 0x30
}

// 
// Start address: 0x1edc7e0
int ev_3ldk0_rl02_2217_exec(sfObj* obj)
{
	// Line 2477, Address: 0x1edc7e0, Func Offset: 0
	// Line 2478, Address: 0x1edc7e8, Func Offset: 0x8
	// Line 2479, Address: 0x1edc7f8, Func Offset: 0x18
	// Line 2480, Address: 0x1edc800, Func Offset: 0x20
	// Line 2482, Address: 0x1edc808, Func Offset: 0x28
	// Line 2483, Address: 0x1edc810, Func Offset: 0x30
	// Func End, Address: 0x1edc81c, Func Offset: 0x3c
}

// 
// Start address: 0x1edc820
int ev_3ldk0_rl03_Msg_Drier_init()
{
	// Line 2507, Address: 0x1edc820, Func Offset: 0
	// Line 2508, Address: 0x1edc824, Func Offset: 0x4
	// Line 2507, Address: 0x1edc828, Func Offset: 0x8
	// Line 2508, Address: 0x1edc82c, Func Offset: 0xc
	// Line 2509, Address: 0x1edc83c, Func Offset: 0x1c
	// Line 2510, Address: 0x1edc84c, Func Offset: 0x2c
	// Line 2511, Address: 0x1edc854, Func Offset: 0x34
	// Line 2513, Address: 0x1edc860, Func Offset: 0x40
	// Line 2515, Address: 0x1edc86c, Func Offset: 0x4c
	// Line 2517, Address: 0x1edc878, Func Offset: 0x58
	// Line 2518, Address: 0x1edc884, Func Offset: 0x64
	// Line 2520, Address: 0x1edc888, Func Offset: 0x68
	// Line 2519, Address: 0x1edc88c, Func Offset: 0x6c
	// Line 2520, Address: 0x1edc890, Func Offset: 0x70
	// Func End, Address: 0x1edc898, Func Offset: 0x78
}

// 
// Start address: 0x1edc8a0
int ev_3ldk0_rl03_Msg_Drier_end()
{
	// Line 2522, Address: 0x1edc8a0, Func Offset: 0
	// Line 2524, Address: 0x1edc8a8, Func Offset: 0x8
	// Line 2526, Address: 0x1edc8b0, Func Offset: 0x10
	// Line 2525, Address: 0x1edc8b4, Func Offset: 0x14
	// Line 2526, Address: 0x1edc8b8, Func Offset: 0x18
	// Func End, Address: 0x1edc8c0, Func Offset: 0x20
}

// 
// Start address: 0x1edc8c0
int ev_3ldk0_rl03_Msg_ToolShelf_init()
{
	// Line 2567, Address: 0x1edc8c0, Func Offset: 0
	// Line 2568, Address: 0x1edc8c8, Func Offset: 0x8
	// Line 2570, Address: 0x1edc8e8, Func Offset: 0x28
	// Line 2571, Address: 0x1edc8f0, Func Offset: 0x30
	// Line 2574, Address: 0x1edc8f8, Func Offset: 0x38
	// Line 2575, Address: 0x1edc904, Func Offset: 0x44
	// Line 2577, Address: 0x1edc908, Func Offset: 0x48
	// Line 2576, Address: 0x1edc90c, Func Offset: 0x4c
	// Line 2577, Address: 0x1edc910, Func Offset: 0x50
	// Func End, Address: 0x1edc918, Func Offset: 0x58
}

// 
// Start address: 0x1edc920
int ev_3ldk0_rl04_Msg_Hollow_init(sfObj* obj)
{
	_rl04_Msg_Hollow_Work* wk;
	// Line 2784, Address: 0x1edc920, Func Offset: 0
	// Line 2787, Address: 0x1edc924, Func Offset: 0x4
	// Line 2784, Address: 0x1edc928, Func Offset: 0x8
	// Line 2787, Address: 0x1edc930, Func Offset: 0x10
	// Line 2791, Address: 0x1edc93c, Func Offset: 0x1c
	// Line 2792, Address: 0x1edc950, Func Offset: 0x30
	// Line 2793, Address: 0x1edc95c, Func Offset: 0x3c
	// Line 2795, Address: 0x1edc968, Func Offset: 0x48
	// Line 2796, Address: 0x1edc978, Func Offset: 0x58
	// Line 2797, Address: 0x1edc980, Func Offset: 0x60
	// Line 2800, Address: 0x1edc988, Func Offset: 0x68
	// Line 2801, Address: 0x1edc994, Func Offset: 0x74
	// Line 2802, Address: 0x1edc99c, Func Offset: 0x7c
	// Line 2804, Address: 0x1edc9a0, Func Offset: 0x80
	// Line 2803, Address: 0x1edc9a8, Func Offset: 0x88
	// Line 2804, Address: 0x1edc9ac, Func Offset: 0x8c
	// Func End, Address: 0x1edc9b4, Func Offset: 0x94
}

// 
// Start address: 0x1edc9c0
int ev_3ldk0_rl04_Msg_Hollow_end(sfObj* obj)
{
	// Line 2806, Address: 0x1edc9c0, Func Offset: 0
	// Line 2809, Address: 0x1edc9c8, Func Offset: 0x8
	// Line 2810, Address: 0x1edc9d8, Func Offset: 0x18
	// Line 2811, Address: 0x1edc9e8, Func Offset: 0x28
	// Line 2815, Address: 0x1edc9f4, Func Offset: 0x34
	// Line 2817, Address: 0x1edc9f8, Func Offset: 0x38
	// Line 2816, Address: 0x1edc9fc, Func Offset: 0x3c
	// Line 2817, Address: 0x1edca00, Func Offset: 0x40
	// Func End, Address: 0x1edca08, Func Offset: 0x48
}

// 
// Start address: 0x1edca10
int ev_3ldk0_rl04_Msg_Walter_trgchk(sfObj* obj)
{
	// Line 2832, Address: 0x1edca10, Func Offset: 0
	// Line 2834, Address: 0x1edca14, Func Offset: 0x4
	// Line 2832, Address: 0x1edca18, Func Offset: 0x8
	// Line 2834, Address: 0x1edca1c, Func Offset: 0xc
	// Line 2837, Address: 0x1edca34, Func Offset: 0x24
	// Func End, Address: 0x1edca40, Func Offset: 0x30
}

// 
// Start address: 0x1edca40
int ev_3ldk0_rl04_Msg_Walter_init()
{
	// Line 2839, Address: 0x1edca40, Func Offset: 0
	// Line 2841, Address: 0x1edca44, Func Offset: 0x4
	// Line 2839, Address: 0x1edca48, Func Offset: 0x8
	// Line 2841, Address: 0x1edca4c, Func Offset: 0xc
	// Line 2842, Address: 0x1edca5c, Func Offset: 0x1c
	// Line 2843, Address: 0x1edca64, Func Offset: 0x24
	// Line 2846, Address: 0x1edca70, Func Offset: 0x30
	// Line 2847, Address: 0x1edca7c, Func Offset: 0x3c
	// Line 2849, Address: 0x1edca80, Func Offset: 0x40
	// Line 2848, Address: 0x1edca84, Func Offset: 0x44
	// Line 2849, Address: 0x1edca88, Func Offset: 0x48
	// Func End, Address: 0x1edca90, Func Offset: 0x50
}

