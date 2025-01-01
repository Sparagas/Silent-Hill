typedef struct Playing_Info;


typedef unsigned char type_0[6];
typedef unsigned char type_1[6][2];
typedef float type_2[7];
typedef unsigned int type_3[7];

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

unsigned char _Peripheral_Controller_SendData[6][2];
unsigned int _edit_flag;
unsigned int _sequencer_init;
Playing_Info playing;

float DSS_Wrapper_AllVibrationRatio_Get();
int DSS_Wrapper_ActuaterData_Send(unsigned int ControllerID, unsigned int ActuaterType, unsigned int ActuaterLV);
int DSS_Wrapper_AllActuaterData_RealSend_to_Peripheral();
void DSS_Wrapper_DualShock2_Sequencer();
unsigned int DSS_Wrapper_DualShock2_Send_ActuaterLV_Get(unsigned int ControllerID, unsigned int ActuaterType);
void DSS_Wrapper_DualShock2_Send_ActuaterLV_Claer(unsigned int ControllerID, unsigned int ActuaterType);

// 
// Start address: 0x2347c0
float DSS_Wrapper_AllVibrationRatio_Get()
{
	float result;
	// Line 90, Address: 0x2347c0, Func Offset: 0
	// Line 93, Address: 0x2347c4, Func Offset: 0x4
	// Line 95, Address: 0x234800, Func Offset: 0x40
	// Line 96, Address: 0x23480c, Func Offset: 0x4c
	// Line 98, Address: 0x234814, Func Offset: 0x54
	// Line 99, Address: 0x234820, Func Offset: 0x60
	// Line 101, Address: 0x234828, Func Offset: 0x68
	// Line 112, Address: 0x234830, Func Offset: 0x70
	// Func End, Address: 0x234838, Func Offset: 0x78
}

// 
// Start address: 0x234840
int DSS_Wrapper_ActuaterData_Send(unsigned int ControllerID, unsigned int ActuaterType, unsigned int ActuaterLV)
{
	int result;
	// Line 154, Address: 0x234840, Func Offset: 0
	// Line 160, Address: 0x234860, Func Offset: 0x20
	// Line 161, Address: 0x234864, Func Offset: 0x24
	// Func End, Address: 0x23486c, Func Offset: 0x2c
}

// 
// Start address: 0x234870
int DSS_Wrapper_AllActuaterData_RealSend_to_Peripheral()
{
	int count;
	int result;
	// Line 194, Address: 0x234870, Func Offset: 0
	// Line 195, Address: 0x234874, Func Offset: 0x4
	// Func End, Address: 0x23487c, Func Offset: 0xc
}

// 
// Start address: 0x234880
void DSS_Wrapper_DualShock2_Sequencer()
{
	// Line 297, Address: 0x234880, Func Offset: 0
	// Line 298, Address: 0x234888, Func Offset: 0x8
	// Line 300, Address: 0x234898, Func Offset: 0x18
	// Line 301, Address: 0x2348a8, Func Offset: 0x28
	// Line 302, Address: 0x2348b0, Func Offset: 0x30
	// Line 303, Address: 0x2348c4, Func Offset: 0x44
	// Line 305, Address: 0x2348d0, Func Offset: 0x50
	// Line 307, Address: 0x2348d8, Func Offset: 0x58
	// Line 308, Address: 0x2348e0, Func Offset: 0x60
	// Func End, Address: 0x2348f0, Func Offset: 0x70
}

// 
// Start address: 0x2348f0
unsigned int DSS_Wrapper_DualShock2_Send_ActuaterLV_Get(unsigned int ControllerID, unsigned int ActuaterType)
{
	// Line 318, Address: 0x2348f0, Func Offset: 0
	// Line 319, Address: 0x234910, Func Offset: 0x20
	// Func End, Address: 0x234918, Func Offset: 0x28
}

// 
// Start address: 0x234920
void DSS_Wrapper_DualShock2_Send_ActuaterLV_Claer(unsigned int ControllerID, unsigned int ActuaterType)
{
	// Line 324, Address: 0x234920, Func Offset: 0
	// Line 325, Address: 0x234940, Func Offset: 0x20
	// Func End, Address: 0x234948, Func Offset: 0x28
}

