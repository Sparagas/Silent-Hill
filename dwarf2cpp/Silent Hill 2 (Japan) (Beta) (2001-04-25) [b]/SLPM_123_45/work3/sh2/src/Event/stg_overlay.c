typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct Model_List;
typedef struct _anon3;
typedef enum _enum : unsigned char;
typedef struct Playing_Info;

typedef int(*type_0)();
typedef void(*type_1)();

typedef float type_2[4];

struct _anon0
{
	_anon1* ev_list;
	unsigned char* ev_pos;
	int(*ev_prog)();
	_anon2* gi_list;
	Model_List* mdl_list;
	_anon3* en_list;
	void(*stage_init)();
	void(*room_init)();
	void(*alltime_func)();
	int glb_crd;
	int reserve_05;
	int reserve_06;
	int reserve_07;
	int reserve_08;
	int reserve_09;
	int reserve_10;
	int reserve_11;
};

struct _anon1
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
};

struct _anon2
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
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

struct _anon3
{
	short kind;
	short id;
	int pos_x;
	int pos_z;
	short pos_y;
	short rot_y;
	short status;
	short condition;
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
	Stg_end_dog
};

struct Playing_Info
{
	unsigned char stage;
	unsigned char enemy_off;
	unsigned char memo_select;
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
};

_anon0 stage_hotel_fire;
_anon0 stage_hotel_3f_b;
_anon0 stage_hotel_2f_b;
_anon0 stage_hotel_1f_b;
_anon0 stage_hotel_bf_b;
_anon0 stage_hotel_3f_f;
_anon0 stage_hotel_2f_f;
_anon0 stage_hotel_1f_f;
_anon0 stage_hotel_bf_f;
_anon0 stage_eddie_boss;
_anon0 stage_labyrinth_n;
_anon0 stage_labyrinth_e;
_anon0 stage_labyrinth_w;
_anon0 stage_prison_bf;
_anon0 stage_prison_s;
_anon0 stage_prison_n;
_anon0 stage_delusion_3;
_anon0 stage_delusion_2;
_anon0 stage_society;
_anon0 stage_hospital_pass;
_anon0 stage_hospital_bf_b;
_anon0 stage_hospital_3f_b;
_anon0 stage_hospital_2f_b;
_anon0 stage_hospital_1fe_b;
_anon0 stage_hospital_1fw_b;
_anon0 stage_hospital_rf_f;
_anon0 stage_hospital_3f_f;
_anon0 stage_hospital_2f_f;
_anon0 stage_hospital_1f_f;
_anon0 stage_heaven_night;
_anon0 stage_to_heaven;
_anon0 stage_bowling;
_anon0 stage_town_west;
_anon0 stage_apart_out;
_anon0 stage_apart_stair;
_anon0 stage_apart_w2f;
_anon0 stage_apart_w1f;
_anon0 stage_apart_e3fe;
_anon0 stage_apart_e3fw;
_anon0 stage_apart_e2f;
_anon0 stage_apart_e1f;
_anon0 stage_town_east;
_anon0 stage_forest;
_anon0 stage_observation;
_anon0 stage_toilet;
_anon0 stage_tgs_trial;
_anon0* stage;
Playing_Info playing;

_anon0* StgOverlayGetStageData(_enum stg_name);
void StgOverlay();

// 
// Start address: 0x22a9c0
_anon0* StgOverlayGetStageData(_enum stg_name)
{
	// Line 77, Address: 0x22a9c0, Func Offset: 0
	// Line 78, Address: 0x22a9cc, Func Offset: 0xc
	// Line 80, Address: 0x22a9fc, Func Offset: 0x3c
	// Line 81, Address: 0x22aa0c, Func Offset: 0x4c
	// Line 82, Address: 0x22aa1c, Func Offset: 0x5c
	// Line 83, Address: 0x22aa2c, Func Offset: 0x6c
	// Line 84, Address: 0x22aa3c, Func Offset: 0x7c
	// Line 85, Address: 0x22aa4c, Func Offset: 0x8c
	// Line 86, Address: 0x22aa5c, Func Offset: 0x9c
	// Line 87, Address: 0x22aa6c, Func Offset: 0xac
	// Line 88, Address: 0x22aa7c, Func Offset: 0xbc
	// Line 89, Address: 0x22aa8c, Func Offset: 0xcc
	// Line 90, Address: 0x22aa9c, Func Offset: 0xdc
	// Line 91, Address: 0x22aaac, Func Offset: 0xec
	// Line 92, Address: 0x22aabc, Func Offset: 0xfc
	// Line 93, Address: 0x22aacc, Func Offset: 0x10c
	// Line 94, Address: 0x22aadc, Func Offset: 0x11c
	// Line 95, Address: 0x22aaec, Func Offset: 0x12c
	// Line 96, Address: 0x22aafc, Func Offset: 0x13c
	// Line 97, Address: 0x22ab0c, Func Offset: 0x14c
	// Line 98, Address: 0x22ab1c, Func Offset: 0x15c
	// Line 99, Address: 0x22ab2c, Func Offset: 0x16c
	// Line 100, Address: 0x22ab3c, Func Offset: 0x17c
	// Line 101, Address: 0x22ab4c, Func Offset: 0x18c
	// Line 102, Address: 0x22ab5c, Func Offset: 0x19c
	// Line 103, Address: 0x22ab6c, Func Offset: 0x1ac
	// Line 104, Address: 0x22ab7c, Func Offset: 0x1bc
	// Line 105, Address: 0x22ab8c, Func Offset: 0x1cc
	// Line 106, Address: 0x22ab9c, Func Offset: 0x1dc
	// Line 107, Address: 0x22abac, Func Offset: 0x1ec
	// Line 108, Address: 0x22abbc, Func Offset: 0x1fc
	// Line 109, Address: 0x22abcc, Func Offset: 0x20c
	// Line 110, Address: 0x22abdc, Func Offset: 0x21c
	// Line 111, Address: 0x22abec, Func Offset: 0x22c
	// Line 112, Address: 0x22abfc, Func Offset: 0x23c
	// Line 113, Address: 0x22ac0c, Func Offset: 0x24c
	// Line 114, Address: 0x22ac1c, Func Offset: 0x25c
	// Line 115, Address: 0x22ac2c, Func Offset: 0x26c
	// Line 116, Address: 0x22ac3c, Func Offset: 0x27c
	// Line 117, Address: 0x22ac4c, Func Offset: 0x28c
	// Line 118, Address: 0x22ac74, Func Offset: 0x2b4
	// Line 119, Address: 0x22ac84, Func Offset: 0x2c4
	// Line 120, Address: 0x22ac94, Func Offset: 0x2d4
	// Line 121, Address: 0x22aca4, Func Offset: 0x2e4
	// Line 122, Address: 0x22acb4, Func Offset: 0x2f4
	// Line 123, Address: 0x22acc4, Func Offset: 0x304
	// Line 124, Address: 0x22acd4, Func Offset: 0x314
	// Line 125, Address: 0x22ace4, Func Offset: 0x324
	// Line 126, Address: 0x22acf4, Func Offset: 0x334
	// Line 127, Address: 0x22ad04, Func Offset: 0x344
	// Line 128, Address: 0x22ad2c, Func Offset: 0x36c
	// Line 129, Address: 0x22ad54, Func Offset: 0x394
	// Line 130, Address: 0x22ad7c, Func Offset: 0x3bc
	// Line 131, Address: 0x22ada4, Func Offset: 0x3e4
	// Line 133, Address: 0x22adcc, Func Offset: 0x40c
	// Func End, Address: 0x22addc, Func Offset: 0x41c
}

// 
// Start address: 0x22ade0
void StgOverlay()
{
	// Line 141, Address: 0x22ade0, Func Offset: 0
	// Line 148, Address: 0x22ade8, Func Offset: 0x8
	// Line 150, Address: 0x22ae00, Func Offset: 0x20
	// Func End, Address: 0x22ae10, Func Offset: 0x30
}

