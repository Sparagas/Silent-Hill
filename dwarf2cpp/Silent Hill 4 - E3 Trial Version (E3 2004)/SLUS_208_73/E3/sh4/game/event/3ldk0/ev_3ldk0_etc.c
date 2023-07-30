typedef struct sfObj;
typedef struct _anon0;
typedef struct _HoleSound;
typedef struct _ev2322work;
typedef struct _anon1;
typedef struct sgIKHandle;
typedef struct _RoomSound;
typedef struct _ev2202work;
typedef struct sgAnime;
typedef struct _anon2;
typedef union _anon3;
typedef struct _ev2206work;
typedef struct _ev197work;
typedef struct sgBone;
typedef struct _anon4;
typedef struct _ev151work;
typedef struct _ev153work;
typedef struct _EventInst;
typedef struct EventFlag;
typedef enum _enum : unsigned char;
typedef struct sgSVModel;
typedef struct _anon5;
typedef struct sfCharacter;
typedef struct _EventDriver;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _anon9;
typedef struct _anon10;
typedef struct _anon11;
typedef struct _anon12;
typedef struct _sfMenuObjRect;
typedef struct _sfMenuObj;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _anon13;
typedef struct _anon14;
typedef struct _GAME_WORK;

typedef void(*type_6)(sfObj*);
typedef void(*type_11)(sgAnime*, int);
typedef void(*type_12)(sfObj*);
typedef int(*type_15)(sfObj*);
typedef int(*type_17)(sfObj*);
typedef int(*type_23)(sfObj*);
typedef int(*type_24)(sfObj*);
typedef int(*type_26)(sfObj*);
typedef int(*type_30)(sfObj*);
typedef int(*type_32)(sfObj*);
typedef void(*type_36)(_anon6*, int, int, float*);
typedef void(*type_40)();
typedef sgIKSolveResult(*type_54)();

typedef unsigned int type_0[4];
typedef float type_1[4];
typedef int type_2[4];
typedef int type_3[1];
typedef int type_4[4];
typedef _anon3 type_5[256];
typedef char type_7[7];
typedef _anon2 type_8[12];
typedef void* type_9[4];
typedef char type_10[16];
typedef unsigned char type_13[320];
typedef float type_14[4];
typedef float type_16[4];
typedef float type_18[4][4];
typedef unsigned char type_19[4];
typedef _anon11 type_20[12];
typedef float type_21[2];
typedef float type_22[2][2];
typedef char type_25[16];
typedef int type_27[1];
typedef unsigned char type_28[2];
typedef float type_29[2];
typedef float type_31[2][2];
typedef int type_33[1];
typedef short type_34[2];
typedef _anon3 type_35[4];
typedef unsigned short type_37[2];
typedef char type_38[4];
typedef unsigned char type_39[4];
typedef float type_41[1];
typedef int type_42[1];
typedef int type_43[1];
typedef int type_44[1];
typedef float type_45[4];
typedef float type_46[4][4];
typedef char type_47[7];
typedef float type_48[4][2];
typedef int type_49[1];
typedef int type_50[1];
typedef _anon3* type_51[4];
typedef float type_52[4][4];
typedef float type_53[4][4][4];

struct sfObj
{
	_anon3 fwork[256];
	_anon3* work;
	void(*func)(sfObj*);
	_anon3* work_pt0;
	_anon3* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon3* sys_work;
	_anon3* scene_work;
	_anon3* event_work;
	_anon3* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct _anon0
{
	_anon12 base;
	float x;
	float y;
	float w;
	float h;
	int u0;
	int v0;
	int u1;
	int v1;
	unsigned int col[4];
	float rot;
	float scale_x;
	float scale_y;
	int ofs_x;
	int ofs_y;
	unsigned char sprite_flag;
};

struct _HoleSound
{
	int step;
	int play;
	int no;
	int slot;
	float angle;
	float volume;
};

struct _ev2322work
{
	sfCharacter chr_tv;
	sfCharacter chr_radio;
	int tv_sd_slot;
	float tv_vol;
	float tv_pos[4];
	int radio_sd_slot;
	float radio_vol;
	float radio_pos[4];
};

struct _anon1
{
	short base;
	short buffer_w;
	unsigned char psm;
	unsigned char data_psm;
	short w;
	short h;
	short buffer_size;
	short w2;
	short h2;
};

struct sgIKHandle
{
	float acceleration[4][2];
	float damping_ratio;
	sgBone* bone;
	sgBone* start;
	sgBone* end;
	sgIKSolveResult(*solver)();
	sgIKSolveResult solve_result;
	float reach_constrain;
	float close_constrain;
	sgIKHandle* next;
};

struct _RoomSound
{
	int timer;
	int sd_no;
	int sd_slot;
	int start_time;
	float volume;
	float pos[4];
	int step;
	int adx;
};

struct _ev2202work
{
	sfCharacter chr;
	int timer;
};

struct sgAnime
{
	void* play_data[4];
	sgBone* transforms;
	int n_transforms;
	sgIKHandle* ik_handles;
	sgBone* object_space;
	void(*post_func)(sgAnime*, int);
	float* reals;
	int n_reals;
	float vectors[4];
	int n_vectors;
	int current_time;
	int time_add;
	unsigned char play_status[4];
	unsigned short flag;
	unsigned short construct_check;
};

struct _anon2
{
	short x;
	short y;
};

union _anon3
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

struct _ev2206work
{
	int timer;
	float start_pos[4];
	float end_pos[4];
	sfCharacter chr;
	float pos[4];
	float rot[4];
	int fall;
	float move_unit;
};

struct _ev197work
{
	int timer;
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

struct _anon4
{
	_anon7 panel;
	_anon0 img;
	_anon0 button_img;
	_anon0 cursor;
	unsigned char btn_timer;
	char pushed_btn;
	unsigned char is_panel_ok;
	unsigned char step;
	unsigned char step_s;
	unsigned char is_panel_func_end;
	short wait;
};

struct _ev151work
{
	int timer;
};

struct _ev153work
{
	int timer;
};

struct _EventInst
{
	_EventDriver evdrv;
	unsigned int attr;
	int(*drawaf)(sfObj*);
	int(*endexitf)(sfObj*);
};

struct EventFlag
{
	unsigned char flag[320];
};

enum _enum : unsigned char
{
	SF_MENU_LINEAR,
	SF_MENU_ATARI,
	SF_MENU_CURSOR_POS
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct _anon5
{
	int is_sweeping;
	int se_slot;
	float volume_ratio;
	float sound_source[4];
};

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon8 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
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
	_anon3 val[4];
};

struct _anon6
{
	unsigned long tex0;
	unsigned long clamp;
};

struct _anon7
{
	_anon14 menu;
	char result_stack[16];
	unsigned char max_figure;
	unsigned char cur_figure;
	unsigned char number_disp_ok;
};

struct _anon8
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon6*, int, int, float*);
	int equip_flag;
};

struct _anon9
{
	_anon1* tex;
	unsigned char tcc;
	unsigned char tfx;
	unsigned char pad[2];
};

struct _anon10
{
	unsigned int cbp;
	unsigned int ofs;
};

struct _anon11
{
	short x;
	short y;
	short w;
	short h;
};

struct _anon12
{
	unsigned long reg_alpha;
	unsigned long reg_prim;
	unsigned long reg_test;
	_anon9 tex_data;
	_anon10 clut_data;
	unsigned short ot;
	unsigned short z;
};

struct _sfMenuObjRect
{
	int x;
	int y;
	int w;
	int h;
	_sfMenuObjRect* next;
	_sfMenuObjRect* prev;
};

struct _sfMenuObj
{
	_sfMenuObjRect* atari;
	short id;
	unsigned short flag;
	_sfMenuObj* next;
	_sfMenuObj* prev;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct _anon13
{
	int dir;
	unsigned short flag;
	unsigned short disp_num;
};

struct _anon14
{
	_sfMenuObj* cur;
	_sfMenuObj* pre;
	_sfMenuObj* top;
	_enum type;
	unsigned short option;
	unsigned short num;
	unsigned short timer;
	unsigned char step;
	_anon13 scrl;
	_sfMenuObjRect* atari_top;
	float cursor_x;
	float cursor_y;
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

_EventDriver ev_3ldk0_rl01_064;
float sd_vol[4][4];
_GAME_WORK gamew;
float sd_pos[4][4][4];
EventFlag event_flag;
_EventDriver ev_3ldk0_021a;
_EventDriver ev_3ldk0_021a_chaim;
_EventDriver ev_3ldk0_030a;
_EventDriver ev_3ldk0_030a_chaim;
_EventDriver ev_3ldk0_034a;
_EventDriver ev_3ldk0_034a_voice;
_EventDriver ev_3ldk0_2200;
_EventDriver ev_3ldk0_2200_shower;
_EventDriver ev_3ldk0_2203;
_EventDriver ev_3ldk0_2203_knock;
_EventDriver ev_3ldk0_2207;
_EventDriver ev_3ldk0_2207_knock;
_EventDriver ev_3ldk0_2209;
_EventDriver ev_3ldk0_2209_washer;
_EventDriver ev_3ldk0_2209_washer_motor;
int ev_knock_sd_no;
int ev_knock_sd_slot;
int ev_knock_wait_timer;
_EventDriver ev_3ldk0_rl00_148;
_EventDriver ev_3ldk0_rl00_189;
_EventDriver ev_3ldk0_rl_080;
_EventDriver ev_3ldk0_rl03_151;
_EventDriver ev_3ldk0_rl03_153_plate_hole;
_EventDriver ev_3ldk0_rl03_153_plate_temp;
_EventDriver ev_3ldk0_rl03_153_plate_origin;
_EventDriver ev_3ldk0_rl03_153_plate_surveil;
_EventDriver ev_3ldk0_rl03_153_plate_chaos;
_EventDriver ev_3ldk0_rl01_165;
_EventDriver ev_3ldk0_rl00_196;
_EventDriver ev_3ldk0_rl00_197;
_EventDriver ev_3ldk0_2202;
_EventDriver ev_3ldk0_2202_noise;
sfObj* ev2322_obj;
_EventDriver ev_3ldk0_2322;
_HoleSound holesound;
int lumber_hole;
_EventDriver ev_3ldk0_rl02_hole_sound;
_EventDriver ev_3ldk0_rl03_hole_sound;
_EventDriver ev_3ldk0_rl00_goto_passageway;
float move_unit;
float unit_multi;
float start_rot_x;
float start_rot_y;
float start_rot_z;
float move_rot_x;
float move_rot_y;
float move_rot_z;
float sg_vector_unit_z[4];
float sg_vector_unit_y[4];
float sg_vector_unit_x[4];
float sg_matrix_unit[4][4];
_EventDriver ev_3ldk0_rl00_2206;
_anon11 button_atari[12];
char bar_answer[7];
char bar_answer2[7];
_anon4 ev_panel_work;
void(*pausefunc_ev_panel_main)();
_EventDriver ev_3ldk0_phone;

int ev_3ldk0_rl01_064_exec();
float ev_sound_angle_from_camera(float* tpos);
void ev_room_sound_volume_set(sfObj* obj);
void ev_room_sound_pos_set(sfObj* obj);
int ev_room_sound_trgchk();
int ev_room_sound_init(sfObj* obj);
int ev_room_sound_exec(sfObj* obj);
int ev_room_sound_end(sfObj* obj);
int ev_3ldk0_021a_trgchk();
void ev_3ldk0_021a_chaim_off();
int ev_3ldk0_021a_chaim_trgchk(sfObj* obj);
int ev_3ldk0_021a_chaim_exec(sfObj* obj);
int ev_3ldk0_030a_trgchk();
void ev_3ldk0_030a_chaim_off();
int ev_3ldk0_030a_chaim_trgchk(sfObj* obj);
int ev_3ldk0_030a_chaim_exec(sfObj* obj);
int ev_3ldk0_034a_trgchk();
void ev_3ldk0_034a_voice_off();
int ev_3ldk0_034a_voice_trgchk(sfObj* obj);
int ev_3ldk0_034a_voice_exec(sfObj* obj);
int ev_3ldk0_2200_trgchk();
void ev_3ldk0_2200_shower_off();
int ev_3ldk0_2200_shower_trgchk(sfObj* obj);
int ev_3ldk0_2200_shower_exec(sfObj* obj);
int ev_3ldk0_2203_trgchk();
void ev_3ldk0_2203_knock_off();
int ev_3ldk0_2203_knock_trgchk(sfObj* obj);
int ev_3ldk0_2203_knock_exec(sfObj* obj);
void ev_3ldk0_2207_knock_off();
int ev_3ldk0_2209_trgchk();
void ev_3ldk0_2209_washer_off();
int ev_3ldk0_2209_washer_trgchk(sfObj* obj);
int ev_3ldk0_2209_washer_exec(sfObj* obj);
int ev_3ldk0_2209_washer_end(sfObj* obj);
int ev_3ldk0_2209_washer_motor_trgchk(sfObj* obj);
int ev_3ldk0_2209_washer_motor_exec(sfObj* obj);
void ev_3ldk0_rl00_knock_clear();
void ev_3ldk0_rl00_knock_off();
int ev_3ldk0_rl00_knock_timer_set();
int ev_3ldk0_rl00_knock_init(sfObj* obj);
int ev_3ldk0_rl00_knock_exec();
int ev_3ldk0_rl00_knock_end();
int ev_3ldk0_rl00_148_exec(sfObj* obj);
int ev_3ldk0_rl00_189_exec(sfObj* obj);
int EvIsEileenSweeping();
int rl_080_sweep_noise_trgchk();
int rl_080_sweep_noise_init(sfObj* obj);
int rl_080_sweep_noise_exec(sfObj* obj);
int rl_080_sweep_noise_destruct();
int ev_3ldk0_rl03_151_init(sfObj* obj);
int ev_3ldk0_rl03_151_exec(sfObj* obj);
int ev_3ldk0_rl03_153_init(sfObj* obj);
int ev_3ldk0_rl03_153_exec(sfObj* obj);
int ev_3ldk0_rl03_153_plate_set_exec(sfObj* obj);
int ev_3ldk0_rl01_165_exec();
int ev_3ldk0_rl00_196_exec();
int ev_3ldk0_rl00_197_trgchk();
int ev_3ldk0_rl00_197_init(sfObj* obj);
int ev_3ldk0_rl00_197_exec(sfObj* obj);
void ev_3ldk0_2202_tv_off();
int ev_3ldk0_2202_init(sfObj* obj);
int ev_3ldk0_2202_exec(sfObj* obj);
int ev_3ldk0_2202_draw(sfObj* obj);
int ev_3ldk0_2202_end(sfObj* obj);
int ev_3ldk0_2202_noise_trghck();
int ev_3ldk0_2322_trgchk();
int ev_3ldk0_2322_init(sfObj* obj);
int ev_3ldk0_2322_exec(sfObj* obj);
int ev_3ldk0_2322_draw(sfObj* obj);
int ev_3ldk0_2322_end(sfObj* obj);
void ev_3ldk0_2322_sound_end();
void ev_bathhole_sound_variable(int kind);
void ev_bathhole_sound_fixstep();
int ev_bathhole_sound_init(sfObj* obj);
int ev_bathhole_sound_exec();
int ev_bathhole_sound_end();
int ev_3ldk0_rl02_hole_sound_trgchk();
int ev_3ldk0_rl03_hole_sound_trgchk();
int ev_3ldk0_rl00_goto_passageway_trgchk();
int ev_3ldk0_rl00_goto_passageway_end();
void ev_3ldk0_rl00_2206_set_pos(sfObj* obj);
void ev_3ldk0_rl00_2206_reset_moveunit(sfObj* obj);
void ev_3ldk0_rl00_2206_set_timer(sfObj* obj);
void ev_3ldk0_rl00_2206_moverot(sfObj* obj, float x, float y, float z);
void ev_3ldk0_rl00_2206_set_startrot(sfObj* obj, float x, float y, float z);
int ev_3ldk0_rl00_2206_move(sfObj* obj);
int ev_3ldk0_rl00_2206_init(sfObj* obj);
int ev_3ldk0_rl00_2206_exec(sfObj* obj);
int ev_3ldk0_rl00_2206_draw(sfObj* obj);
int ev_3ldk0_rl00_2206_end(sfObj* obj);
void bg_init(_anon0* img);
void button_img_init(_anon0* img);
void cursor_init(_anon0* img, float x, float y);
void bg_draw(_anon0* img);
void button_img_draw(_anon0* img, int pushed_number);
void cursor_draw(_anon0* img);
void cursor_set_xy(_anon0* img, float x, float y);
void pausefunc_ev_panel_init();
void pausefunc_ev_panel_draw();
int tel_miss();
int tel_bar_strange();
int tel_bar_dontuse();
void pausefunc_ev_panel_main();
int ev_3ldk0_phone_init(sfObj* obj);
int ev_3ldk0_phone_exec(sfObj* obj);
int ev_3ldk0_phone_draw();
int ev_3ldk0_phone_end();
int ev_3ldk0_phone_trgchk();

// 
// Start address: 0x1ed3fa0
int ev_3ldk0_rl01_064_exec()
{
	float pos[4];
	// Line 148, Address: 0x1ed3fa0, Func Offset: 0
	// Line 149, Address: 0x1ed3fa4, Func Offset: 0x4
	// Line 148, Address: 0x1ed3fa8, Func Offset: 0x8
	// Line 149, Address: 0x1ed3fac, Func Offset: 0xc
	// Line 150, Address: 0x1ed3fb4, Func Offset: 0x14
	// Line 149, Address: 0x1ed3fb8, Func Offset: 0x18
	// Line 150, Address: 0x1ed3fbc, Func Offset: 0x1c
	// Line 152, Address: 0x1ed3fe0, Func Offset: 0x40
	// Line 151, Address: 0x1ed3fe4, Func Offset: 0x44
	// Line 152, Address: 0x1ed3fe8, Func Offset: 0x48
	// Func End, Address: 0x1ed3ff0, Func Offset: 0x50
	// Line 61, Address: 0x1ed3fa0, Func Offset: 0
	// Line 62, Address: 0x1ed3fa4, Func Offset: 0x4
	// Line 61, Address: 0x1ed3fa8, Func Offset: 0x8
	// Line 65, Address: 0x1ed3fac, Func Offset: 0xc
	// Line 61, Address: 0x1ed3fb0, Func Offset: 0x10
	// Line 62, Address: 0x1ed3fb4, Func Offset: 0x14
	// Line 65, Address: 0x1ed3fb8, Func Offset: 0x18
	// Line 67, Address: 0x1ed3fd0, Func Offset: 0x30
	// Line 68, Address: 0x1ed3fdc, Func Offset: 0x3c
	// Line 70, Address: 0x1ed3fe0, Func Offset: 0x40
	// Line 77, Address: 0x1ed3ff0, Func Offset: 0x50
	// Line 70, Address: 0x1ed3ff4, Func Offset: 0x54
	// Line 77, Address: 0x1ed3ff8, Func Offset: 0x58
	// Line 80, Address: 0x1ed4024, Func Offset: 0x84
	// Line 81, Address: 0x1ed4028, Func Offset: 0x88
	// Line 80, Address: 0x1ed402c, Func Offset: 0x8c
	// Line 84, Address: 0x1ed4030, Func Offset: 0x90
	// Line 86, Address: 0x1ed403c, Func Offset: 0x9c
	// Line 87, Address: 0x1ed4044, Func Offset: 0xa4
	// Line 89, Address: 0x1ed4048, Func Offset: 0xa8
	// Line 90, Address: 0x1ed4050, Func Offset: 0xb0
	// Line 92, Address: 0x1ed4060, Func Offset: 0xc0
	// Line 94, Address: 0x1ed4068, Func Offset: 0xc8
	// Func End, Address: 0x1ed4078, Func Offset: 0xd8
	// Line 34, Address: 0x1ed3fa0, Func Offset: 0
	// Func End, Address: 0x1ed3fa8, Func Offset: 0x8
}

// 
// Start address: 0x1ed3ff0
float ev_sound_angle_from_camera(float* tpos)
{
	float angle;
	float cangle;
	float tangle;
	float vz[4];
	float cpos[4];
	float dir[4];
	// Line 168, Address: 0x1ed3ff0, Func Offset: 0
	// Line 176, Address: 0x1ed4004, Func Offset: 0x14
	// Line 177, Address: 0x1ed4010, Func Offset: 0x20
	// Line 179, Address: 0x1ed403c, Func Offset: 0x4c
	// Line 180, Address: 0x1ed4044, Func Offset: 0x54
	// Line 181, Address: 0x1ed4060, Func Offset: 0x70
	// Line 182, Address: 0x1ed408c, Func Offset: 0x9c
	// Line 184, Address: 0x1ed40b4, Func Offset: 0xc4
	// Line 186, Address: 0x1ed40b8, Func Offset: 0xc8
	// Line 184, Address: 0x1ed40c8, Func Offset: 0xd8
	// Line 186, Address: 0x1ed40cc, Func Offset: 0xdc
	// Func End, Address: 0x1ed40d4, Func Offset: 0xe4
}

// 
// Start address: 0x1ed40e0
void ev_room_sound_volume_set(sfObj* obj)
{
	// Line 270, Address: 0x1ed40e0, Func Offset: 0
	// Line 271, Address: 0x1ed410c, Func Offset: 0x2c
	// Func End, Address: 0x1ed4114, Func Offset: 0x34
	// Line 111, Address: 0x1ed40e0, Func Offset: 0
	// Line 118, Address: 0x1ed40e8, Func Offset: 0x8
	// Line 120, Address: 0x1ed40f0, Func Offset: 0x10
	// Line 122, Address: 0x1ed40fc, Func Offset: 0x1c
	// Line 120, Address: 0x1ed4100, Func Offset: 0x20
	// Line 122, Address: 0x1ed4104, Func Offset: 0x24
	// Line 123, Address: 0x1ed4120, Func Offset: 0x40
	// Line 125, Address: 0x1ed4138, Func Offset: 0x58
	// Line 126, Address: 0x1ed4144, Func Offset: 0x64
	// Line 128, Address: 0x1ed4158, Func Offset: 0x78
	// Line 129, Address: 0x1ed4164, Func Offset: 0x84
	// Line 131, Address: 0x1ed4178, Func Offset: 0x98
	// Line 132, Address: 0x1ed4184, Func Offset: 0xa4
	// Line 133, Address: 0x1ed418c, Func Offset: 0xac
	// Line 135, Address: 0x1ed41a0, Func Offset: 0xc0
	// Line 136, Address: 0x1ed41a8, Func Offset: 0xc8
	// Line 138, Address: 0x1ed41b0, Func Offset: 0xd0
	// Line 142, Address: 0x1ed41b8, Func Offset: 0xd8
	// Func End, Address: 0x1ed41c4, Func Offset: 0xe4
}

// 
// Start address: 0x1ed4120
void ev_room_sound_pos_set(sfObj* obj)
{
	_RoomSound* room_sound;
	// Line 287, Address: 0x1ed4120, Func Offset: 0
	// Line 289, Address: 0x1ed4124, Func Offset: 0x4
	// Line 290, Address: 0x1ed4128, Func Offset: 0x8
	// Line 289, Address: 0x1ed4130, Func Offset: 0x10
	// Line 290, Address: 0x1ed4134, Func Offset: 0x14
	// Line 289, Address: 0x1ed4138, Func Offset: 0x18
	// Line 290, Address: 0x1ed4140, Func Offset: 0x20
	// Line 291, Address: 0x1ed4154, Func Offset: 0x34
	// Func End, Address: 0x1ed415c, Func Offset: 0x3c
}

// 
// Start address: 0x1ed4160
int ev_room_sound_trgchk()
{
	// Line 293, Address: 0x1ed4160, Func Offset: 0
	// Line 294, Address: 0x1ed4164, Func Offset: 0x4
	// Line 293, Address: 0x1ed4168, Func Offset: 0x8
	// Line 294, Address: 0x1ed416c, Func Offset: 0xc
	// Line 295, Address: 0x1ed417c, Func Offset: 0x1c
	// Line 296, Address: 0x1ed4190, Func Offset: 0x30
	// Line 299, Address: 0x1ed4198, Func Offset: 0x38
	// Line 300, Address: 0x1ed41a0, Func Offset: 0x40
	// Func End, Address: 0x1ed41ac, Func Offset: 0x4c
}

// 
// Start address: 0x1ed41b0
int ev_room_sound_init(sfObj* obj)
{
	_RoomSound* room_sound;
	_EventInst* evinst;
	_anon3 val;
	// Line 302, Address: 0x1ed41b0, Func Offset: 0
	// Line 304, Address: 0x1ed41c4, Func Offset: 0x14
	// Line 307, Address: 0x1ed41d0, Func Offset: 0x20
	// Line 310, Address: 0x1ed41e0, Func Offset: 0x30
	// Line 308, Address: 0x1ed41e4, Func Offset: 0x34
	// Line 310, Address: 0x1ed41e8, Func Offset: 0x38
	// Line 311, Address: 0x1ed41f4, Func Offset: 0x44
	// Line 313, Address: 0x1ed41f8, Func Offset: 0x48
	// Line 314, Address: 0x1ed420c, Func Offset: 0x5c
	// Line 316, Address: 0x1ed4210, Func Offset: 0x60
	// Line 317, Address: 0x1ed4224, Func Offset: 0x74
	// Line 319, Address: 0x1ed4230, Func Offset: 0x80
	// Line 317, Address: 0x1ed4234, Func Offset: 0x84
	// Line 319, Address: 0x1ed4238, Func Offset: 0x88
	// Line 320, Address: 0x1ed4240, Func Offset: 0x90
	// Line 323, Address: 0x1ed4248, Func Offset: 0x98
	// Line 322, Address: 0x1ed424c, Func Offset: 0x9c
	// Line 323, Address: 0x1ed4250, Func Offset: 0xa0
	// Func End, Address: 0x1ed4264, Func Offset: 0xb4
}

// 
// Start address: 0x1ed4270
int ev_room_sound_exec(sfObj* obj)
{
	_RoomSound* room_sound;
	float angle;
	// Line 325, Address: 0x1ed4270, Func Offset: 0
	// Line 331, Address: 0x1ed4274, Func Offset: 0x4
	// Line 325, Address: 0x1ed4278, Func Offset: 0x8
	// Line 326, Address: 0x1ed4280, Func Offset: 0x10
	// Line 330, Address: 0x1ed4284, Func Offset: 0x14
	// Line 331, Address: 0x1ed4290, Func Offset: 0x20
	// Line 332, Address: 0x1ed42ac, Func Offset: 0x3c
	// Line 333, Address: 0x1ed42b0, Func Offset: 0x40
	// Line 334, Address: 0x1ed42c4, Func Offset: 0x54
	// Line 335, Address: 0x1ed42d0, Func Offset: 0x60
	// Line 336, Address: 0x1ed4304, Func Offset: 0x94
	// Line 337, Address: 0x1ed431c, Func Offset: 0xac
	// Line 338, Address: 0x1ed4324, Func Offset: 0xb4
	// Line 341, Address: 0x1ed4330, Func Offset: 0xc0
	// Line 343, Address: 0x1ed4338, Func Offset: 0xc8
	// Line 345, Address: 0x1ed4350, Func Offset: 0xe0
	// Line 347, Address: 0x1ed4358, Func Offset: 0xe8
	// Line 348, Address: 0x1ed4390, Func Offset: 0x120
	// Line 349, Address: 0x1ed43a4, Func Offset: 0x134
	// Line 351, Address: 0x1ed43b0, Func Offset: 0x140
	// Line 354, Address: 0x1ed43d0, Func Offset: 0x160
	// Line 357, Address: 0x1ed43dc, Func Offset: 0x16c
	// Line 359, Address: 0x1ed43e0, Func Offset: 0x170
	// Line 360, Address: 0x1ed43ec, Func Offset: 0x17c
	// Line 361, Address: 0x1ed4420, Func Offset: 0x1b0
	// Line 362, Address: 0x1ed4428, Func Offset: 0x1b8
	// Line 366, Address: 0x1ed4434, Func Offset: 0x1c4
	// Line 368, Address: 0x1ed4440, Func Offset: 0x1d0
	// Line 371, Address: 0x1ed4464, Func Offset: 0x1f4
	// Line 374, Address: 0x1ed4468, Func Offset: 0x1f8
	// Line 373, Address: 0x1ed4470, Func Offset: 0x200
	// Line 374, Address: 0x1ed4474, Func Offset: 0x204
	// Func End, Address: 0x1ed447c, Func Offset: 0x20c
}

// 
// Start address: 0x1ed4480
int ev_room_sound_end(sfObj* obj)
{
	_RoomSound* room_sound;
	// Line 376, Address: 0x1ed4480, Func Offset: 0
	// Line 377, Address: 0x1ed4488, Func Offset: 0x8
	// Line 379, Address: 0x1ed448c, Func Offset: 0xc
	// Line 380, Address: 0x1ed4498, Func Offset: 0x18
	// Line 381, Address: 0x1ed44a4, Func Offset: 0x24
	// Line 383, Address: 0x1ed44b0, Func Offset: 0x30
	// Line 384, Address: 0x1ed44bc, Func Offset: 0x3c
	// Line 386, Address: 0x1ed44c0, Func Offset: 0x40
	// Line 385, Address: 0x1ed44c4, Func Offset: 0x44
	// Line 386, Address: 0x1ed44c8, Func Offset: 0x48
	// Func End, Address: 0x1ed44d0, Func Offset: 0x50
}

// 
// Start address: 0x1ed44d0
int ev_3ldk0_021a_trgchk()
{
	// Line 393, Address: 0x1ed44d0, Func Offset: 0
	// Line 394, Address: 0x1ed44e0, Func Offset: 0x10
	// Func End, Address: 0x1ed44e8, Func Offset: 0x18
	// Line 378, Address: 0x1ed44d0, Func Offset: 0
	// Line 379, Address: 0x1ed44ec, Func Offset: 0x1c
	// Func End, Address: 0x1ed44f4, Func Offset: 0x24
}

// 
// Start address: 0x1ed44f0
void ev_3ldk0_021a_chaim_off()
{
	// Line 410, Address: 0x1ed44f0, Func Offset: 0
	// Line 411, Address: 0x1ed4500, Func Offset: 0x10
	// Func End, Address: 0x1ed4508, Func Offset: 0x18
	// Line 109, Address: 0x1ed44f0, Func Offset: 0
	// Func End, Address: 0x1ed44f8, Func Offset: 0x8
}

// 
// Start address: 0x1ed4510
int ev_3ldk0_021a_chaim_trgchk(sfObj* obj)
{
	// Line 413, Address: 0x1ed4510, Func Offset: 0
	// Line 415, Address: 0x1ed4518, Func Offset: 0x8
	// Line 419, Address: 0x1ed4560, Func Offset: 0x50
	// Func End, Address: 0x1ed456c, Func Offset: 0x5c
	// Line 131, Address: 0x1ed4510, Func Offset: 0
	// Line 133, Address: 0x1ed4514, Func Offset: 0x4
	// Line 131, Address: 0x1ed4518, Func Offset: 0x8
	// Line 132, Address: 0x1ed451c, Func Offset: 0xc
	// Line 131, Address: 0x1ed4520, Func Offset: 0x10
	// Line 135, Address: 0x1ed4524, Func Offset: 0x14
	// Line 131, Address: 0x1ed4528, Func Offset: 0x18
	// Line 133, Address: 0x1ed452c, Func Offset: 0x1c
	// Line 135, Address: 0x1ed4530, Func Offset: 0x20
	// Line 138, Address: 0x1ed4560, Func Offset: 0x50
	// Line 141, Address: 0x1ed4564, Func Offset: 0x54
	// Line 142, Address: 0x1ed4568, Func Offset: 0x58
	// Line 143, Address: 0x1ed4578, Func Offset: 0x68
	// Line 144, Address: 0x1ed4584, Func Offset: 0x74
	// Line 145, Address: 0x1ed4594, Func Offset: 0x84
	// Line 146, Address: 0x1ed4598, Func Offset: 0x88
	// Line 147, Address: 0x1ed45ac, Func Offset: 0x9c
	// Line 148, Address: 0x1ed45b0, Func Offset: 0xa0
	// Line 149, Address: 0x1ed45c0, Func Offset: 0xb0
	// Line 153, Address: 0x1ed45c8, Func Offset: 0xb8
	// Func End, Address: 0x1ed45dc, Func Offset: 0xcc
}

// 
// Start address: 0x1ed4570
int ev_3ldk0_021a_chaim_exec(sfObj* obj)
{
	// Line 421, Address: 0x1ed4570, Func Offset: 0
	// Line 424, Address: 0x1ed4574, Func Offset: 0x4
	// Line 421, Address: 0x1ed4578, Func Offset: 0x8
	// Line 424, Address: 0x1ed457c, Func Offset: 0xc
	// Line 425, Address: 0x1ed458c, Func Offset: 0x1c
	// Line 426, Address: 0x1ed4594, Func Offset: 0x24
	// Line 428, Address: 0x1ed4598, Func Offset: 0x28
	// Line 432, Address: 0x1ed45a0, Func Offset: 0x30
	// Line 433, Address: 0x1ed45a8, Func Offset: 0x38
	// Func End, Address: 0x1ed45b4, Func Offset: 0x44
	// Line 194, Address: 0x1ed4570, Func Offset: 0
	// Line 195, Address: 0x1ed4584, Func Offset: 0x14
	// Func End, Address: 0x1ed4598, Func Offset: 0x28
	// Line 182, Address: 0x1ed4570, Func Offset: 0
	// Line 183, Address: 0x1ed457c, Func Offset: 0xc
	// Line 184, Address: 0x1ed458c, Func Offset: 0x1c
	// Line 185, Address: 0x1ed4594, Func Offset: 0x24
	// Line 184, Address: 0x1ed4598, Func Offset: 0x28
	// Line 185, Address: 0x1ed459c, Func Offset: 0x2c
	// Line 186, Address: 0x1ed45a4, Func Offset: 0x34
	// Line 187, Address: 0x1ed45b0, Func Offset: 0x40
	// Line 189, Address: 0x1ed45b8, Func Offset: 0x48
	// Line 190, Address: 0x1ed45c0, Func Offset: 0x50
	// Func End, Address: 0x1ed45d0, Func Offset: 0x60
}

// 
// Start address: 0x1ed45c0
int ev_3ldk0_030a_trgchk()
{
	// Line 452, Address: 0x1ed45c0, Func Offset: 0
	// Line 453, Address: 0x1ed45d0, Func Offset: 0x10
	// Func End, Address: 0x1ed45d8, Func Offset: 0x18
	// Line 99, Address: 0x1ed45c0, Func Offset: 0
	// Line 103, Address: 0x1ed45c8, Func Offset: 0x8
	// Line 106, Address: 0x1ed45d4, Func Offset: 0x14
	// Line 108, Address: 0x1ed45dc, Func Offset: 0x1c
	// Func End, Address: 0x1ed45ec, Func Offset: 0x2c
	// Line 247, Address: 0x1ed45c0, Func Offset: 0
	// Func End, Address: 0x1ed45cc, Func Offset: 0xc
}

// 
// Start address: 0x1ed45e0
void ev_3ldk0_030a_chaim_off()
{
	// Line 469, Address: 0x1ed45e0, Func Offset: 0
	// Line 470, Address: 0x1ed45f0, Func Offset: 0x10
	// Func End, Address: 0x1ed45f8, Func Offset: 0x18
	// Line 163, Address: 0x1ed45e0, Func Offset: 0
	// Line 167, Address: 0x1ed460c, Func Offset: 0x2c
	// Line 168, Address: 0x1ed4610, Func Offset: 0x30
	// Line 171, Address: 0x1ed461c, Func Offset: 0x3c
	// Line 173, Address: 0x1ed4624, Func Offset: 0x44
	// Line 174, Address: 0x1ed4628, Func Offset: 0x48
	// Line 176, Address: 0x1ed462c, Func Offset: 0x4c
	// Line 178, Address: 0x1ed4630, Func Offset: 0x50
	// Func End, Address: 0x1ed4638, Func Offset: 0x58
	// Line 257, Address: 0x1ed45e0, Func Offset: 0
	// Func End, Address: 0x1ed45ec, Func Offset: 0xc
}

// 
// Start address: 0x1ed4600
int ev_3ldk0_030a_chaim_trgchk(sfObj* obj)
{
	// Line 472, Address: 0x1ed4600, Func Offset: 0
	// Line 474, Address: 0x1ed4608, Func Offset: 0x8
	// Line 478, Address: 0x1ed4650, Func Offset: 0x50
	// Func End, Address: 0x1ed465c, Func Offset: 0x5c
	// Line 276, Address: 0x1ed4600, Func Offset: 0
	// Func End, Address: 0x1ed4608, Func Offset: 0x8
}

// 
// Start address: 0x1ed4660
int ev_3ldk0_030a_chaim_exec(sfObj* obj)
{
	// Line 480, Address: 0x1ed4660, Func Offset: 0
	// Line 483, Address: 0x1ed4664, Func Offset: 0x4
	// Line 480, Address: 0x1ed4668, Func Offset: 0x8
	// Line 483, Address: 0x1ed466c, Func Offset: 0xc
	// Line 484, Address: 0x1ed467c, Func Offset: 0x1c
	// Line 485, Address: 0x1ed4684, Func Offset: 0x24
	// Line 487, Address: 0x1ed4688, Func Offset: 0x28
	// Line 491, Address: 0x1ed4690, Func Offset: 0x30
	// Line 492, Address: 0x1ed4698, Func Offset: 0x38
	// Func End, Address: 0x1ed46a4, Func Offset: 0x44
}

// 
// Start address: 0x1ed46b0
int ev_3ldk0_034a_trgchk()
{
	// Line 511, Address: 0x1ed46b0, Func Offset: 0
	// Line 512, Address: 0x1ed46c0, Func Offset: 0x10
	// Func End, Address: 0x1ed46c8, Func Offset: 0x18
}

// 
// Start address: 0x1ed46d0
void ev_3ldk0_034a_voice_off()
{
	// Line 528, Address: 0x1ed46d0, Func Offset: 0
	// Line 529, Address: 0x1ed46e0, Func Offset: 0x10
	// Func End, Address: 0x1ed46e8, Func Offset: 0x18
	// Line 206, Address: 0x1ed46d0, Func Offset: 0
	// Line 209, Address: 0x1ed46f0, Func Offset: 0x20
	// Line 210, Address: 0x1ed4700, Func Offset: 0x30
	// Line 212, Address: 0x1ed4704, Func Offset: 0x34
	// Line 214, Address: 0x1ed4708, Func Offset: 0x38
	// Func End, Address: 0x1ed4710, Func Offset: 0x40
	// Line 230, Address: 0x1ed46d0, Func Offset: 0
	// Line 231, Address: 0x1ed46dc, Func Offset: 0xc
	// Line 232, Address: 0x1ed46ec, Func Offset: 0x1c
	// Line 233, Address: 0x1ed46f4, Func Offset: 0x24
	// Line 235, Address: 0x1ed46f8, Func Offset: 0x28
	// Line 237, Address: 0x1ed4700, Func Offset: 0x30
	// Line 239, Address: 0x1ed4708, Func Offset: 0x38
	// Line 240, Address: 0x1ed4710, Func Offset: 0x40
	// Line 241, Address: 0x1ed4718, Func Offset: 0x48
	// Func End, Address: 0x1ed4728, Func Offset: 0x58
}

// 
// Start address: 0x1ed46f0
int ev_3ldk0_034a_voice_trgchk(sfObj* obj)
{
	// Line 531, Address: 0x1ed46f0, Func Offset: 0
	// Line 532, Address: 0x1ed46f8, Func Offset: 0x8
	// Line 533, Address: 0x1ed4708, Func Offset: 0x18
	// Line 538, Address: 0x1ed4710, Func Offset: 0x20
	// Line 541, Address: 0x1ed4758, Func Offset: 0x68
	// Func End, Address: 0x1ed4764, Func Offset: 0x74
}

// 
// Start address: 0x1ed4770
int ev_3ldk0_034a_voice_exec(sfObj* obj)
{
	_RoomSound* room_sound;
	// Line 543, Address: 0x1ed4770, Func Offset: 0
	// Line 546, Address: 0x1ed4774, Func Offset: 0x4
	// Line 543, Address: 0x1ed4778, Func Offset: 0x8
	// Line 546, Address: 0x1ed477c, Func Offset: 0xc
	// Line 547, Address: 0x1ed478c, Func Offset: 0x1c
	// Line 548, Address: 0x1ed4794, Func Offset: 0x24
	// Line 551, Address: 0x1ed4798, Func Offset: 0x28
	// Line 552, Address: 0x1ed47a4, Func Offset: 0x34
	// Line 553, Address: 0x1ed47bc, Func Offset: 0x4c
	// Line 556, Address: 0x1ed47c8, Func Offset: 0x58
	// Line 560, Address: 0x1ed47d0, Func Offset: 0x60
	// Line 561, Address: 0x1ed47d8, Func Offset: 0x68
	// Func End, Address: 0x1ed47e4, Func Offset: 0x74
	// Line 68, Address: 0x1ed4770, Func Offset: 0
	// Line 69, Address: 0x1ed4784, Func Offset: 0x14
	// Line 70, Address: 0x1ed478c, Func Offset: 0x1c
	// Line 72, Address: 0x1ed479c, Func Offset: 0x2c
	// Line 76, Address: 0x1ed47a4, Func Offset: 0x34
	// Line 80, Address: 0x1ed47d0, Func Offset: 0x60
	// Line 81, Address: 0x1ed47dc, Func Offset: 0x6c
	// Line 83, Address: 0x1ed47f4, Func Offset: 0x84
	// Line 89, Address: 0x1ed4804, Func Offset: 0x94
	// Line 90, Address: 0x1ed4808, Func Offset: 0x98
	// Func End, Address: 0x1ed481c, Func Offset: 0xac
	// Line 246, Address: 0x1ed4770, Func Offset: 0
	// Line 247, Address: 0x1ed4784, Func Offset: 0x14
	// Line 248, Address: 0x1ed4788, Func Offset: 0x18
	// Line 250, Address: 0x1ed4790, Func Offset: 0x20
	// Line 251, Address: 0x1ed4798, Func Offset: 0x28
	// Line 252, Address: 0x1ed47a0, Func Offset: 0x30
	// Line 254, Address: 0x1ed47a8, Func Offset: 0x38
	// Line 253, Address: 0x1ed47ac, Func Offset: 0x3c
	// Line 254, Address: 0x1ed47b0, Func Offset: 0x40
	// Func End, Address: 0x1ed47c0, Func Offset: 0x50
}

// 
// Start address: 0x1ed47f0
int ev_3ldk0_2200_trgchk()
{
	// Line 580, Address: 0x1ed47f0, Func Offset: 0
	// Line 581, Address: 0x1ed4800, Func Offset: 0x10
	// Func End, Address: 0x1ed4808, Func Offset: 0x18
	// Line 443, Address: 0x1ed47f0, Func Offset: 0
	// Line 444, Address: 0x1ed4800, Func Offset: 0x10
	// Line 447, Address: 0x1ed4808, Func Offset: 0x18
	// Line 448, Address: 0x1ed4818, Func Offset: 0x28
	// Line 453, Address: 0x1ed4820, Func Offset: 0x30
	// Line 452, Address: 0x1ed4828, Func Offset: 0x38
	// Line 453, Address: 0x1ed482c, Func Offset: 0x3c
	// Func End, Address: 0x1ed4834, Func Offset: 0x44
}

// 
// Start address: 0x1ed4810
void ev_3ldk0_2200_shower_off()
{
	// Line 597, Address: 0x1ed4810, Func Offset: 0
	// Line 598, Address: 0x1ed4820, Func Offset: 0x10
	// Func End, Address: 0x1ed4828, Func Offset: 0x18
	// Line 292, Address: 0x1ed4810, Func Offset: 0
	// Line 293, Address: 0x1ed482c, Func Offset: 0x1c
	// Line 294, Address: 0x1ed4830, Func Offset: 0x20
	// Line 295, Address: 0x1ed4844, Func Offset: 0x34
	// Line 296, Address: 0x1ed484c, Func Offset: 0x3c
	// Line 297, Address: 0x1ed4850, Func Offset: 0x40
	// Line 298, Address: 0x1ed4864, Func Offset: 0x54
	// Line 299, Address: 0x1ed486c, Func Offset: 0x5c
	// Line 300, Address: 0x1ed4870, Func Offset: 0x60
	// Line 301, Address: 0x1ed4874, Func Offset: 0x64
	// Line 302, Address: 0x1ed4878, Func Offset: 0x68
	// Func End, Address: 0x1ed4880, Func Offset: 0x70
}

// 
// Start address: 0x1ed4830
int ev_3ldk0_2200_shower_trgchk(sfObj* obj)
{
	// Line 600, Address: 0x1ed4830, Func Offset: 0
	// Line 601, Address: 0x1ed4838, Func Offset: 0x8
	// Line 602, Address: 0x1ed4848, Func Offset: 0x18
	// Line 605, Address: 0x1ed4850, Func Offset: 0x20
	// Line 606, Address: 0x1ed4880, Func Offset: 0x50
	// Func End, Address: 0x1ed488c, Func Offset: 0x5c
}

// 
// Start address: 0x1ed4890
int ev_3ldk0_2200_shower_exec(sfObj* obj)
{
	// Line 608, Address: 0x1ed4890, Func Offset: 0
	// Line 612, Address: 0x1ed4894, Func Offset: 0x4
	// Line 608, Address: 0x1ed4898, Func Offset: 0x8
	// Line 612, Address: 0x1ed489c, Func Offset: 0xc
	// Line 613, Address: 0x1ed48ac, Func Offset: 0x1c
	// Line 614, Address: 0x1ed48b4, Func Offset: 0x24
	// Line 615, Address: 0x1ed48bc, Func Offset: 0x2c
	// Line 617, Address: 0x1ed48c0, Func Offset: 0x30
	// Line 621, Address: 0x1ed48c8, Func Offset: 0x38
	// Line 622, Address: 0x1ed48d0, Func Offset: 0x40
	// Func End, Address: 0x1ed48dc, Func Offset: 0x4c
	// Line 115, Address: 0x1ed4890, Func Offset: 0
	// Line 116, Address: 0x1ed4894, Func Offset: 0x4
	// Line 119, Address: 0x1ed489c, Func Offset: 0xc
	// Line 120, Address: 0x1ed48a4, Func Offset: 0x14
	// Line 121, Address: 0x1ed48a8, Func Offset: 0x18
	// Func End, Address: 0x1ed48b4, Func Offset: 0x24
}

// 
// Start address: 0x1ed48e0
int ev_3ldk0_2203_trgchk()
{
	// Line 641, Address: 0x1ed48e0, Func Offset: 0
	// Line 642, Address: 0x1ed48f0, Func Offset: 0x10
	// Func End, Address: 0x1ed48f8, Func Offset: 0x18
	// Line 238, Address: 0x1ed48e0, Func Offset: 0
	// Line 239, Address: 0x1ed4908, Func Offset: 0x28
	// Line 240, Address: 0x1ed4910, Func Offset: 0x30
	// Line 241, Address: 0x1ed491c, Func Offset: 0x3c
	// Line 243, Address: 0x1ed4930, Func Offset: 0x50
	// Line 247, Address: 0x1ed4938, Func Offset: 0x58
	// Line 251, Address: 0x1ed495c, Func Offset: 0x7c
	// Line 253, Address: 0x1ed4964, Func Offset: 0x84
	// Line 254, Address: 0x1ed497c, Func Offset: 0x9c
	// Line 256, Address: 0x1ed4984, Func Offset: 0xa4
	// Line 261, Address: 0x1ed4988, Func Offset: 0xa8
	// Line 256, Address: 0x1ed4990, Func Offset: 0xb0
	// Line 257, Address: 0x1ed4994, Func Offset: 0xb4
	// Line 258, Address: 0x1ed499c, Func Offset: 0xbc
	// Line 261, Address: 0x1ed49a4, Func Offset: 0xc4
	// Line 263, Address: 0x1ed49ac, Func Offset: 0xcc
	// Line 266, Address: 0x1ed49b4, Func Offset: 0xd4
	// Line 267, Address: 0x1ed49b8, Func Offset: 0xd8
	// Func End, Address: 0x1ed49d8, Func Offset: 0xf8
	// Line 271, Address: 0x1ed48e0, Func Offset: 0
	// Line 272, Address: 0x1ed48ec, Func Offset: 0xc
	// Line 274, Address: 0x1ed48f4, Func Offset: 0x14
	// Line 275, Address: 0x1ed48fc, Func Offset: 0x1c
	// Line 277, Address: 0x1ed4900, Func Offset: 0x20
	// Line 276, Address: 0x1ed4904, Func Offset: 0x24
	// Line 277, Address: 0x1ed4908, Func Offset: 0x28
	// Func End, Address: 0x1ed4910, Func Offset: 0x30
}

// 
// Start address: 0x1ed4900
void ev_3ldk0_2203_knock_off()
{
	// Line 658, Address: 0x1ed4900, Func Offset: 0
	// Line 659, Address: 0x1ed4914, Func Offset: 0x14
	// Line 660, Address: 0x1ed491c, Func Offset: 0x1c
	// Line 661, Address: 0x1ed4920, Func Offset: 0x20
	// Func End, Address: 0x1ed4928, Func Offset: 0x28
}

// 
// Start address: 0x1ed4930
int ev_3ldk0_2203_knock_trgchk(sfObj* obj)
{
	// Line 663, Address: 0x1ed4930, Func Offset: 0
	// Line 664, Address: 0x1ed4938, Func Offset: 0x8
	// Line 665, Address: 0x1ed4948, Func Offset: 0x18
	// Line 668, Address: 0x1ed4950, Func Offset: 0x20
	// Line 669, Address: 0x1ed49a8, Func Offset: 0x78
	// Func End, Address: 0x1ed49b4, Func Offset: 0x84
	// Line 99, Address: 0x1ed4930, Func Offset: 0
	// Line 98, Address: 0x1ed4934, Func Offset: 0x4
	// Line 99, Address: 0x1ed4938, Func Offset: 0x8
	// Line 102, Address: 0x1ed4950, Func Offset: 0x20
	// Line 106, Address: 0x1ed4958, Func Offset: 0x28
	// Func End, Address: 0x1ed4960, Func Offset: 0x30
	// Line 520, Address: 0x1ed4930, Func Offset: 0
	// Line 523, Address: 0x1ed4934, Func Offset: 0x4
	// Line 520, Address: 0x1ed4938, Func Offset: 0x8
	// Line 523, Address: 0x1ed4940, Func Offset: 0x10
	// Line 529, Address: 0x1ed4960, Func Offset: 0x30
	// Line 531, Address: 0x1ed4968, Func Offset: 0x38
	// Line 533, Address: 0x1ed497c, Func Offset: 0x4c
	// Line 537, Address: 0x1ed4980, Func Offset: 0x50
	// Line 538, Address: 0x1ed4984, Func Offset: 0x54
	// Func End, Address: 0x1ed4994, Func Offset: 0x64
}

// 
// Start address: 0x1ed49c0
int ev_3ldk0_2203_knock_exec(sfObj* obj)
{
	// Line 671, Address: 0x1ed49c0, Func Offset: 0
	// Line 674, Address: 0x1ed49c4, Func Offset: 0x4
	// Line 671, Address: 0x1ed49c8, Func Offset: 0x8
	// Line 674, Address: 0x1ed49cc, Func Offset: 0xc
	// Line 675, Address: 0x1ed49dc, Func Offset: 0x1c
	// Line 676, Address: 0x1ed49e4, Func Offset: 0x24
	// Line 678, Address: 0x1ed49e8, Func Offset: 0x28
	// Line 682, Address: 0x1ed49f0, Func Offset: 0x30
	// Line 683, Address: 0x1ed49f8, Func Offset: 0x38
	// Func End, Address: 0x1ed4a04, Func Offset: 0x44
	// Line 137, Address: 0x1ed49c0, Func Offset: 0
	// Func End, Address: 0x1ed49c8, Func Offset: 0x8
}

// 
// Start address: 0x1ed4a10
void ev_3ldk0_2207_knock_off()
{
	// Line 719, Address: 0x1ed4a10, Func Offset: 0
	// Line 720, Address: 0x1ed4a24, Func Offset: 0x14
	// Line 721, Address: 0x1ed4a2c, Func Offset: 0x1c
	// Line 722, Address: 0x1ed4a30, Func Offset: 0x20
	// Func End, Address: 0x1ed4a38, Func Offset: 0x28
	// Line 280, Address: 0x1ed4a10, Func Offset: 0
	// Func End, Address: 0x1ed4a2c, Func Offset: 0x1c
}

// 
// Start address: 0x1ed4a40
int ev_3ldk0_2209_trgchk()
{
	// Line 763, Address: 0x1ed4a40, Func Offset: 0
	// Line 764, Address: 0x1ed4a50, Func Offset: 0x10
	// Func End, Address: 0x1ed4a58, Func Offset: 0x18
	// Line 338, Address: 0x1ed4a44, Func Offset: 0x4
	// Line 340, Address: 0x1ed4a5c, Func Offset: 0x1c
	// Line 341, Address: 0x1ed4b34, Func Offset: 0xf4
	// Line 343, Address: 0x1ed4b3c, Func Offset: 0xfc
	// Line 344, Address: 0x1ed4b48, Func Offset: 0x108
	// Line 345, Address: 0x1ed4b50, Func Offset: 0x110
	// Line 347, Address: 0x1ed4b5c, Func Offset: 0x11c
	// Line 348, Address: 0x1ed4b64, Func Offset: 0x124
	// Line 349, Address: 0x1ed4b68, Func Offset: 0x128
	// Line 351, Address: 0x1ed4b70, Func Offset: 0x130
	// Line 352, Address: 0x1ed4b78, Func Offset: 0x138
	// Func End, Address: 0x1ed4b80, Func Offset: 0x140
}

// 
// Start address: 0x1ed4a60
void ev_3ldk0_2209_washer_off()
{
	// Line 780, Address: 0x1ed4a60, Func Offset: 0
	// Line 781, Address: 0x1ed4a74, Func Offset: 0x14
	// Line 782, Address: 0x1ed4a7c, Func Offset: 0x1c
	// Line 783, Address: 0x1ed4a80, Func Offset: 0x20
	// Func End, Address: 0x1ed4a88, Func Offset: 0x28
	// Line 293, Address: 0x1ed4a60, Func Offset: 0
	// Line 294, Address: 0x1ed4a64, Func Offset: 0x4
	// Line 297, Address: 0x1ed4a6c, Func Offset: 0xc
	// Line 299, Address: 0x1ed4a78, Func Offset: 0x18
	// Func End, Address: 0x1ed4a84, Func Offset: 0x24
	// Line 340, Address: 0x1ed4a60, Func Offset: 0
	// Func End, Address: 0x1ed4a68, Func Offset: 0x8
	// Line 193, Address: 0x1ed4a60, Func Offset: 0
	// Line 196, Address: 0x1ed4a64, Func Offset: 0x4
	// Line 193, Address: 0x1ed4a68, Func Offset: 0x8
	// Line 195, Address: 0x1ed4a70, Func Offset: 0x10
	// Line 196, Address: 0x1ed4a74, Func Offset: 0x14
	// Line 201, Address: 0x1ed4a98, Func Offset: 0x38
	// Line 202, Address: 0x1ed4aac, Func Offset: 0x4c
	// Line 205, Address: 0x1ed4ab4, Func Offset: 0x54
	// Line 207, Address: 0x1ed4ab8, Func Offset: 0x58
	// Line 206, Address: 0x1ed4abc, Func Offset: 0x5c
	// Line 207, Address: 0x1ed4ac0, Func Offset: 0x60
	// Func End, Address: 0x1ed4acc, Func Offset: 0x6c
}

// 
// Start address: 0x1ed4a90
int ev_3ldk0_2209_washer_trgchk(sfObj* obj)
{
	// Line 785, Address: 0x1ed4a90, Func Offset: 0
	// Line 786, Address: 0x1ed4a98, Func Offset: 0x8
	// Line 787, Address: 0x1ed4aa8, Func Offset: 0x18
	// Line 790, Address: 0x1ed4ab0, Func Offset: 0x20
	// Line 791, Address: 0x1ed4b00, Func Offset: 0x70
	// Func End, Address: 0x1ed4b0c, Func Offset: 0x7c
	// Line 305, Address: 0x1ed4a90, Func Offset: 0
	// Line 306, Address: 0x1ed4a94, Func Offset: 0x4
	// Line 309, Address: 0x1ed4a9c, Func Offset: 0xc
	// Line 310, Address: 0x1ed4aa8, Func Offset: 0x18
	// Line 311, Address: 0x1ed4ac0, Func Offset: 0x30
	// Line 313, Address: 0x1ed4ac8, Func Offset: 0x38
	// Line 315, Address: 0x1ed4ae4, Func Offset: 0x54
	// Line 318, Address: 0x1ed4ae8, Func Offset: 0x58
	// Line 317, Address: 0x1ed4aec, Func Offset: 0x5c
	// Line 318, Address: 0x1ed4af0, Func Offset: 0x60
	// Func End, Address: 0x1ed4af8, Func Offset: 0x68
}

// 
// Start address: 0x1ed4b10
int ev_3ldk0_2209_washer_exec(sfObj* obj)
{
	_RoomSound* room_sound;
	// Line 793, Address: 0x1ed4b10, Func Offset: 0
	// Line 798, Address: 0x1ed4b14, Func Offset: 0x4
	// Line 793, Address: 0x1ed4b18, Func Offset: 0x8
	// Line 798, Address: 0x1ed4b24, Func Offset: 0x14
	// Line 796, Address: 0x1ed4b28, Func Offset: 0x18
	// Line 798, Address: 0x1ed4b2c, Func Offset: 0x1c
	// Line 799, Address: 0x1ed4b58, Func Offset: 0x48
	// Line 802, Address: 0x1ed4b60, Func Offset: 0x50
	// Line 806, Address: 0x1ed4b68, Func Offset: 0x58
	// Line 807, Address: 0x1ed4b70, Func Offset: 0x60
	// Func End, Address: 0x1ed4b84, Func Offset: 0x74
	// Line 610, Address: 0x1ed4b10, Func Offset: 0
	// Func End, Address: 0x1ed4b18, Func Offset: 0x8
	// Line 397, Address: 0x1ed4b10, Func Offset: 0
	// Line 398, Address: 0x1ed4b1c, Func Offset: 0xc
	// Line 400, Address: 0x1ed4b24, Func Offset: 0x14
	// Line 401, Address: 0x1ed4b2c, Func Offset: 0x1c
	// Line 403, Address: 0x1ed4b30, Func Offset: 0x20
	// Line 402, Address: 0x1ed4b34, Func Offset: 0x24
	// Line 403, Address: 0x1ed4b38, Func Offset: 0x28
	// Func End, Address: 0x1ed4b40, Func Offset: 0x30
}

// 
// Start address: 0x1ed4b90
int ev_3ldk0_2209_washer_end(sfObj* obj)
{
	// Line 811, Address: 0x1ed4b90, Func Offset: 0
	// Line 812, Address: 0x1ed4ba0, Func Offset: 0x10
	// Func End, Address: 0x1ed4ba8, Func Offset: 0x18
}

// 
// Start address: 0x1ed4bb0
int ev_3ldk0_2209_washer_motor_trgchk(sfObj* obj)
{
	// Line 831, Address: 0x1ed4bb0, Func Offset: 0
	// Line 832, Address: 0x1ed4bb8, Func Offset: 0x8
	// Line 833, Address: 0x1ed4bc8, Func Offset: 0x18
	// Line 836, Address: 0x1ed4bd0, Func Offset: 0x20
	// Line 837, Address: 0x1ed4c18, Func Offset: 0x68
	// Func End, Address: 0x1ed4c24, Func Offset: 0x74
}

// 
// Start address: 0x1ed4c30
int ev_3ldk0_2209_washer_motor_exec(sfObj* obj)
{
	// Line 839, Address: 0x1ed4c30, Func Offset: 0
	// Line 842, Address: 0x1ed4c34, Func Offset: 0x4
	// Line 839, Address: 0x1ed4c38, Func Offset: 0x8
	// Line 842, Address: 0x1ed4c3c, Func Offset: 0xc
	// Line 843, Address: 0x1ed4c4c, Func Offset: 0x1c
	// Line 844, Address: 0x1ed4c54, Func Offset: 0x24
	// Line 846, Address: 0x1ed4c58, Func Offset: 0x28
	// Line 850, Address: 0x1ed4c60, Func Offset: 0x30
	// Line 851, Address: 0x1ed4c68, Func Offset: 0x38
	// Func End, Address: 0x1ed4c74, Func Offset: 0x44
	// Line 174, Address: 0x1ed4c30, Func Offset: 0
	// Line 175, Address: 0x1ed4c38, Func Offset: 0x8
	// Line 178, Address: 0x1ed4c48, Func Offset: 0x18
	// Line 180, Address: 0x1ed4c54, Func Offset: 0x24
	// Line 181, Address: 0x1ed4c5c, Func Offset: 0x2c
	// Line 183, Address: 0x1ed4c60, Func Offset: 0x30
	// Line 182, Address: 0x1ed4c64, Func Offset: 0x34
	// Line 183, Address: 0x1ed4c68, Func Offset: 0x38
	// Func End, Address: 0x1ed4c70, Func Offset: 0x40
}

// 
// Start address: 0x1ed4c80
void ev_3ldk0_rl00_knock_clear()
{
	// Line 876, Address: 0x1ed4c80, Func Offset: 0
	// Line 874, Address: 0x1ed4c84, Func Offset: 0x4
	// Line 876, Address: 0x1ed4c88, Func Offset: 0x8
	// Line 874, Address: 0x1ed4c8c, Func Offset: 0xc
	// Line 875, Address: 0x1ed4c94, Func Offset: 0x14
	// Line 877, Address: 0x1ed4c98, Func Offset: 0x18
	// Func End, Address: 0x1ed4ca0, Func Offset: 0x20
}

// 
// Start address: 0x1ed4ca0
void ev_3ldk0_rl00_knock_off()
{
	// Line 880, Address: 0x1ed4ca0, Func Offset: 0
	// Line 881, Address: 0x1ed4cac, Func Offset: 0xc
	// Line 880, Address: 0x1ed4cb0, Func Offset: 0x10
	// Line 881, Address: 0x1ed4cb4, Func Offset: 0x14
	// Line 882, Address: 0x1ed4cc8, Func Offset: 0x28
	// Line 884, Address: 0x1ed4cd0, Func Offset: 0x30
	// Func End, Address: 0x1ed4cdc, Func Offset: 0x3c
}

// 
// Start address: 0x1ed4ce0
int ev_3ldk0_rl00_knock_timer_set()
{
	// Line 886, Address: 0x1ed4ce0, Func Offset: 0
	// Line 889, Address: 0x1ed4cec, Func Offset: 0xc
	// Line 890, Address: 0x1ed4d38, Func Offset: 0x58
	// Line 889, Address: 0x1ed4d3c, Func Offset: 0x5c
	// Line 890, Address: 0x1ed4d50, Func Offset: 0x70
	// Func End, Address: 0x1ed4d60, Func Offset: 0x80
	// Line 550, Address: 0x1ed4ce0, Func Offset: 0
	// Line 551, Address: 0x1ed4ce8, Func Offset: 0x8
	// Line 554, Address: 0x1ed4cf0, Func Offset: 0x10
	// Line 553, Address: 0x1ed4cf4, Func Offset: 0x14
	// Line 554, Address: 0x1ed4cf8, Func Offset: 0x18
	// Func End, Address: 0x1ed4d00, Func Offset: 0x20
}

// 
// Start address: 0x1ed4d60
int ev_3ldk0_rl00_knock_init(sfObj* obj)
{
	_EventInst* evinst;
	_anon3 val;
	// Line 893, Address: 0x1ed4d60, Func Offset: 0
	// Line 894, Address: 0x1ed4d68, Func Offset: 0x8
	// Line 897, Address: 0x1ed4d70, Func Offset: 0x10
	// Line 899, Address: 0x1ed4d78, Func Offset: 0x18
	// Line 900, Address: 0x1ed4d88, Func Offset: 0x28
	// Line 901, Address: 0x1ed4d8c, Func Offset: 0x2c
	// Line 900, Address: 0x1ed4d98, Func Offset: 0x38
	// Line 902, Address: 0x1ed4d9c, Func Offset: 0x3c
	// Line 904, Address: 0x1ed4dac, Func Offset: 0x4c
	// Line 903, Address: 0x1ed4db0, Func Offset: 0x50
	// Line 904, Address: 0x1ed4db4, Func Offset: 0x54
	// Func End, Address: 0x1ed4dc0, Func Offset: 0x60
}

// 
// Start address: 0x1ed4dc0
int ev_3ldk0_rl00_knock_exec()
{
	float pos[4];
	// Line 906, Address: 0x1ed4dc0, Func Offset: 0
	// Line 907, Address: 0x1ed4dc4, Func Offset: 0x4
	// Line 906, Address: 0x1ed4dc8, Func Offset: 0x8
	// Line 907, Address: 0x1ed4dcc, Func Offset: 0xc
	// Line 908, Address: 0x1ed4de0, Func Offset: 0x20
	// Line 909, Address: 0x1ed4e14, Func Offset: 0x54
	// Line 910, Address: 0x1ed4e24, Func Offset: 0x64
	// Line 911, Address: 0x1ed4e28, Func Offset: 0x68
	// Line 913, Address: 0x1ed4e3c, Func Offset: 0x7c
	// Line 914, Address: 0x1ed4e40, Func Offset: 0x80
	// Line 917, Address: 0x1ed4e48, Func Offset: 0x88
	// Line 915, Address: 0x1ed4e58, Func Offset: 0x98
	// Line 914, Address: 0x1ed4e60, Func Offset: 0xa0
	// Line 916, Address: 0x1ed4e64, Func Offset: 0xa4
	// Line 915, Address: 0x1ed4e6c, Func Offset: 0xac
	// Line 917, Address: 0x1ed4e70, Func Offset: 0xb0
	// Line 920, Address: 0x1ed4e90, Func Offset: 0xd0
	// Line 919, Address: 0x1ed4e94, Func Offset: 0xd4
	// Line 920, Address: 0x1ed4e98, Func Offset: 0xd8
	// Func End, Address: 0x1ed4ea0, Func Offset: 0xe0
}

// 
// Start address: 0x1ed4ea0
int ev_3ldk0_rl00_knock_end()
{
	// Line 922, Address: 0x1ed4ea0, Func Offset: 0
	// Line 923, Address: 0x1ed4ea8, Func Offset: 0x8
	// Line 924, Address: 0x1ed4eb0, Func Offset: 0x10
	// Line 926, Address: 0x1ed4eb8, Func Offset: 0x18
	// Line 925, Address: 0x1ed4ebc, Func Offset: 0x1c
	// Line 926, Address: 0x1ed4ec0, Func Offset: 0x20
	// Func End, Address: 0x1ed4ec8, Func Offset: 0x28
}

// 
// Start address: 0x1ed4ed0
int ev_3ldk0_rl00_148_exec(sfObj* obj)
{
	// Line 929, Address: 0x1ed4ed0, Func Offset: 0
	// Line 930, Address: 0x1ed4ed8, Func Offset: 0x8
	// Line 936, Address: 0x1ed4ee0, Func Offset: 0x10
	// Line 935, Address: 0x1ed4ee4, Func Offset: 0x14
	// Line 936, Address: 0x1ed4ee8, Func Offset: 0x18
	// Func End, Address: 0x1ed4ef0, Func Offset: 0x20
	// Line 765, Address: 0x1ed4ed0, Func Offset: 0
	// Line 769, Address: 0x1ed4ee8, Func Offset: 0x18
	// Line 770, Address: 0x1ed4ef0, Func Offset: 0x20
	// Line 771, Address: 0x1ed4f04, Func Offset: 0x34
	// Line 773, Address: 0x1ed4f10, Func Offset: 0x40
	// Line 775, Address: 0x1ed4f18, Func Offset: 0x48
	// Line 776, Address: 0x1ed4f24, Func Offset: 0x54
	// Line 777, Address: 0x1ed4f2c, Func Offset: 0x5c
	// Line 778, Address: 0x1ed4f34, Func Offset: 0x64
	// Line 780, Address: 0x1ed4f4c, Func Offset: 0x7c
	// Line 781, Address: 0x1ed4f50, Func Offset: 0x80
	// Func End, Address: 0x1ed4f64, Func Offset: 0x94
}

// 
// Start address: 0x1ed4ef0
int ev_3ldk0_rl00_189_exec(sfObj* obj)
{
	// Line 952, Address: 0x1ed4ef0, Func Offset: 0
	// Line 953, Address: 0x1ed4ef8, Func Offset: 0x8
	// Line 959, Address: 0x1ed4f00, Func Offset: 0x10
	// Line 958, Address: 0x1ed4f04, Func Offset: 0x14
	// Line 959, Address: 0x1ed4f08, Func Offset: 0x18
	// Func End, Address: 0x1ed4f10, Func Offset: 0x20
	// Line 413, Address: 0x1ed4ef0, Func Offset: 0
	// Line 415, Address: 0x1ed4f0c, Func Offset: 0x1c
	// Line 417, Address: 0x1ed4f14, Func Offset: 0x24
	// Line 418, Address: 0x1ed4f3c, Func Offset: 0x4c
	// Line 419, Address: 0x1ed4f6c, Func Offset: 0x7c
	// Line 420, Address: 0x1ed4f9c, Func Offset: 0xac
	// Line 423, Address: 0x1ed4fc8, Func Offset: 0xd8
	// Line 424, Address: 0x1ed4fcc, Func Offset: 0xdc
	// Func End, Address: 0x1ed4fe4, Func Offset: 0xf4
}

// 
// Start address: 0x1ed4f10
int EvIsEileenSweeping()
{
	// Line 997, Address: 0x1ed4f10, Func Offset: 0
	// Line 998, Address: 0x1ed4f38, Func Offset: 0x28
	// Func End, Address: 0x1ed4f40, Func Offset: 0x30
	// Line 571, Address: 0x1ed4f10, Func Offset: 0
	// Line 572, Address: 0x1ed4f1c, Func Offset: 0xc
	// Line 574, Address: 0x1ed4f24, Func Offset: 0x14
	// Line 575, Address: 0x1ed4f2c, Func Offset: 0x1c
	// Line 577, Address: 0x1ed4f30, Func Offset: 0x20
	// Line 576, Address: 0x1ed4f34, Func Offset: 0x24
	// Line 577, Address: 0x1ed4f38, Func Offset: 0x28
	// Func End, Address: 0x1ed4f40, Func Offset: 0x30
	// Line 113, Address: 0x1ed4f10, Func Offset: 0
	// Func End, Address: 0x1ed4f18, Func Offset: 0x8
}

// 
// Start address: 0x1ed4f40
int rl_080_sweep_noise_trgchk()
{
	int rtv;
	// Line 1011, Address: 0x1ed4f40, Func Offset: 0
	// Line 1012, Address: 0x1ed4f54, Func Offset: 0x14
	// Line 1016, Address: 0x1ed4f58, Func Offset: 0x18
	// Func End, Address: 0x1ed4f60, Func Offset: 0x20
	// Line 579, Address: 0x1ed4f40, Func Offset: 0
	// Line 582, Address: 0x1ed4f4c, Func Offset: 0xc
	// Line 584, Address: 0x1ed4f54, Func Offset: 0x14
	// Line 585, Address: 0x1ed4f5c, Func Offset: 0x1c
	// Line 587, Address: 0x1ed4f60, Func Offset: 0x20
	// Line 586, Address: 0x1ed4f64, Func Offset: 0x24
	// Line 587, Address: 0x1ed4f68, Func Offset: 0x28
	// Func End, Address: 0x1ed4f70, Func Offset: 0x30
}

// 
// Start address: 0x1ed4f60
int rl_080_sweep_noise_init(sfObj* obj)
{
	_anon5* s;
	// Line 1019, Address: 0x1ed4f60, Func Offset: 0
	// Line 1020, Address: 0x1ed4f64, Func Offset: 0x4
	// Line 1019, Address: 0x1ed4f68, Func Offset: 0x8
	// Line 1020, Address: 0x1ed4f70, Func Offset: 0x10
	// Line 1021, Address: 0x1ed4f80, Func Offset: 0x20
	// Line 1024, Address: 0x1ed4f88, Func Offset: 0x28
	// Line 1025, Address: 0x1ed4f90, Func Offset: 0x30
	// Line 1027, Address: 0x1ed4fa0, Func Offset: 0x40
	// Line 1031, Address: 0x1ed4fa8, Func Offset: 0x48
	// Line 1030, Address: 0x1ed4fac, Func Offset: 0x4c
	// Line 1031, Address: 0x1ed4fb4, Func Offset: 0x54
	// Line 1032, Address: 0x1ed4fdc, Func Offset: 0x7c
	// Line 1033, Address: 0x1ed4fe0, Func Offset: 0x80
	// Line 1034, Address: 0x1ed4fe8, Func Offset: 0x88
	// Line 1035, Address: 0x1ed4ff4, Func Offset: 0x94
	// Line 1036, Address: 0x1ed4ffc, Func Offset: 0x9c
	// Line 1037, Address: 0x1ed5000, Func Offset: 0xa0
	// Line 1038, Address: 0x1ed5008, Func Offset: 0xa8
	// Line 1037, Address: 0x1ed5010, Func Offset: 0xb0
	// Line 1038, Address: 0x1ed5014, Func Offset: 0xb4
	// Line 1039, Address: 0x1ed5018, Func Offset: 0xb8
	// Line 1041, Address: 0x1ed5020, Func Offset: 0xc0
	// Line 1042, Address: 0x1ed5028, Func Offset: 0xc8
	// Line 1041, Address: 0x1ed5030, Func Offset: 0xd0
	// Line 1042, Address: 0x1ed5034, Func Offset: 0xd4
	// Line 1043, Address: 0x1ed5038, Func Offset: 0xd8
	// Line 1045, Address: 0x1ed5040, Func Offset: 0xe0
	// Line 1046, Address: 0x1ed5048, Func Offset: 0xe8
	// Line 1045, Address: 0x1ed5050, Func Offset: 0xf0
	// Line 1046, Address: 0x1ed5054, Func Offset: 0xf4
	// Line 1050, Address: 0x1ed505c, Func Offset: 0xfc
	// Line 1051, Address: 0x1ed5074, Func Offset: 0x114
	// Line 1053, Address: 0x1ed5078, Func Offset: 0x118
	// Line 1054, Address: 0x1ed5080, Func Offset: 0x120
	// Func End, Address: 0x1ed5090, Func Offset: 0x130
	// Line 476, Address: 0x1ed4f60, Func Offset: 0
	// Line 477, Address: 0x1ed4f64, Func Offset: 0x4
	// Line 480, Address: 0x1ed4f6c, Func Offset: 0xc
	// Line 482, Address: 0x1ed4f78, Func Offset: 0x18
	// Func End, Address: 0x1ed4f84, Func Offset: 0x24
}

// 
// Start address: 0x1ed5090
int rl_080_sweep_noise_exec(sfObj* obj)
{
	int rtv;
	float angle;
	_anon5* s;
	// Line 1057, Address: 0x1ed5090, Func Offset: 0
	// Line 1058, Address: 0x1ed50a4, Func Offset: 0x14
	// Line 1063, Address: 0x1ed50a8, Func Offset: 0x18
	// Line 1066, Address: 0x1ed50b0, Func Offset: 0x20
	// Line 1070, Address: 0x1ed50d0, Func Offset: 0x40
	// Line 1071, Address: 0x1ed50dc, Func Offset: 0x4c
	// Line 1072, Address: 0x1ed50e4, Func Offset: 0x54
	// Line 1073, Address: 0x1ed50ec, Func Offset: 0x5c
	// Line 1075, Address: 0x1ed50f0, Func Offset: 0x60
	// Line 1076, Address: 0x1ed5108, Func Offset: 0x78
	// Line 1077, Address: 0x1ed5110, Func Offset: 0x80
	// Line 1079, Address: 0x1ed5118, Func Offset: 0x88
	// Line 1080, Address: 0x1ed5120, Func Offset: 0x90
	// Line 1083, Address: 0x1ed512c, Func Offset: 0x9c
	// Line 1085, Address: 0x1ed514c, Func Offset: 0xbc
	// Line 1087, Address: 0x1ed5154, Func Offset: 0xc4
	// Line 1093, Address: 0x1ed5158, Func Offset: 0xc8
	// Line 1094, Address: 0x1ed515c, Func Offset: 0xcc
	// Func End, Address: 0x1ed5170, Func Offset: 0xe0
	// Line 731, Address: 0x1ed5090, Func Offset: 0
	// Line 732, Address: 0x1ed5094, Func Offset: 0x4
	// Line 735, Address: 0x1ed509c, Func Offset: 0xc
	// Line 802, Address: 0x1ed50ac, Func Offset: 0x1c
	// Line 805, Address: 0x1ed50b0, Func Offset: 0x20
	// Line 804, Address: 0x1ed50b4, Func Offset: 0x24
	// Line 805, Address: 0x1ed50b8, Func Offset: 0x28
	// Func End, Address: 0x1ed50c0, Func Offset: 0x30
	// Line 644, Address: 0x1ed5090, Func Offset: 0
	// Line 646, Address: 0x1ed5098, Func Offset: 0x8
	// Line 648, Address: 0x1ed50a4, Func Offset: 0x14
	// Line 647, Address: 0x1ed50a8, Func Offset: 0x18
	// Line 648, Address: 0x1ed50ac, Func Offset: 0x1c
	// Func End, Address: 0x1ed50b4, Func Offset: 0x24
}

// 
// Start address: 0x1ed5170
int rl_080_sweep_noise_destruct()
{
	// Line 1097, Address: 0x1ed5170, Func Offset: 0
	// Line 1099, Address: 0x1ed5174, Func Offset: 0x4
	// Line 1097, Address: 0x1ed5178, Func Offset: 0x8
	// Line 1099, Address: 0x1ed517c, Func Offset: 0xc
	// Line 1102, Address: 0x1ed5184, Func Offset: 0x14
	// Line 1103, Address: 0x1ed5188, Func Offset: 0x18
	// Line 1102, Address: 0x1ed518c, Func Offset: 0x1c
	// Line 1104, Address: 0x1ed519c, Func Offset: 0x2c
	// Func End, Address: 0x1ed51a8, Func Offset: 0x38
	// Line 682, Address: 0x1ed5170, Func Offset: 0
	// Line 683, Address: 0x1ed5178, Func Offset: 0x8
	// Line 684, Address: 0x1ed5180, Func Offset: 0x10
	// Line 686, Address: 0x1ed5188, Func Offset: 0x18
	// Func End, Address: 0x1ed5190, Func Offset: 0x20
}

// 
// Start address: 0x1ed51b0
int ev_3ldk0_rl03_151_init(sfObj* obj)
{
	// Line 1125, Address: 0x1ed51b0, Func Offset: 0
	// Line 1126, Address: 0x1ed51b4, Func Offset: 0x4
	// Line 1125, Address: 0x1ed51b8, Func Offset: 0x8
	// Line 1126, Address: 0x1ed51c0, Func Offset: 0x10
	// Line 1127, Address: 0x1ed51cc, Func Offset: 0x1c
	// Line 1128, Address: 0x1ed51e0, Func Offset: 0x30
	// Line 1130, Address: 0x1ed51e8, Func Offset: 0x38
	// Line 1129, Address: 0x1ed51ec, Func Offset: 0x3c
	// Line 1130, Address: 0x1ed51f0, Func Offset: 0x40
	// Func End, Address: 0x1ed51fc, Func Offset: 0x4c
	// Line 245, Address: 0x1ed51b0, Func Offset: 0
	// Line 246, Address: 0x1ed51b4, Func Offset: 0x4
	// Line 245, Address: 0x1ed51b8, Func Offset: 0x8
	// Line 247, Address: 0x1ed51bc, Func Offset: 0xc
	// Line 245, Address: 0x1ed51c0, Func Offset: 0x10
	// Line 246, Address: 0x1ed51c4, Func Offset: 0x14
	// Line 247, Address: 0x1ed51d0, Func Offset: 0x20
	// Line 248, Address: 0x1ed51d8, Func Offset: 0x28
	// Line 246, Address: 0x1ed51e0, Func Offset: 0x30
	// Line 248, Address: 0x1ed51e4, Func Offset: 0x34
	// Line 247, Address: 0x1ed51e8, Func Offset: 0x38
	// Line 248, Address: 0x1ed51ec, Func Offset: 0x3c
	// Line 247, Address: 0x1ed51f0, Func Offset: 0x40
	// Line 248, Address: 0x1ed51f4, Func Offset: 0x44
	// Line 250, Address: 0x1ed51f8, Func Offset: 0x48
	// Line 251, Address: 0x1ed5200, Func Offset: 0x50
	// Line 252, Address: 0x1ed520c, Func Offset: 0x5c
	// Line 262, Address: 0x1ed5218, Func Offset: 0x68
	// Line 261, Address: 0x1ed521c, Func Offset: 0x6c
	// Line 262, Address: 0x1ed5220, Func Offset: 0x70
	// Func End, Address: 0x1ed522c, Func Offset: 0x7c
}

// 
// Start address: 0x1ed5200
int ev_3ldk0_rl03_151_exec(sfObj* obj)
{
	_ev151work* wp;
	// Line 1132, Address: 0x1ed5200, Func Offset: 0
	// Line 1136, Address: 0x1ed5204, Func Offset: 0x4
	// Line 1132, Address: 0x1ed5208, Func Offset: 0x8
	// Line 1136, Address: 0x1ed5214, Func Offset: 0x14
	// Line 1134, Address: 0x1ed5218, Func Offset: 0x18
	// Line 1136, Address: 0x1ed521c, Func Offset: 0x1c
	// Line 1138, Address: 0x1ed5248, Func Offset: 0x48
	// Line 1139, Address: 0x1ed5258, Func Offset: 0x58
	// Line 1140, Address: 0x1ed527c, Func Offset: 0x7c
	// Line 1142, Address: 0x1ed5284, Func Offset: 0x84
	// Line 1143, Address: 0x1ed528c, Func Offset: 0x8c
	// Line 1145, Address: 0x1ed5290, Func Offset: 0x90
	// Line 1147, Address: 0x1ed52a0, Func Offset: 0xa0
	// Line 1149, Address: 0x1ed52a8, Func Offset: 0xa8
	// Line 1150, Address: 0x1ed52c4, Func Offset: 0xc4
	// Line 1151, Address: 0x1ed52d0, Func Offset: 0xd0
	// Line 1153, Address: 0x1ed52d8, Func Offset: 0xd8
	// Line 1156, Address: 0x1ed52e0, Func Offset: 0xe0
	// Line 1157, Address: 0x1ed52f0, Func Offset: 0xf0
	// Line 1160, Address: 0x1ed5314, Func Offset: 0x114
	// Line 1161, Address: 0x1ed5328, Func Offset: 0x128
	// Line 1163, Address: 0x1ed5330, Func Offset: 0x130
	// Line 1166, Address: 0x1ed5338, Func Offset: 0x138
	// Line 1167, Address: 0x1ed5348, Func Offset: 0x148
	// Line 1171, Address: 0x1ed5350, Func Offset: 0x150
	// Line 1172, Address: 0x1ed5358, Func Offset: 0x158
	// Func End, Address: 0x1ed536c, Func Offset: 0x16c
	// Line 724, Address: 0x1ed5200, Func Offset: 0
	// Line 725, Address: 0x1ed5204, Func Offset: 0x4
	// Line 724, Address: 0x1ed5208, Func Offset: 0x8
	// Line 725, Address: 0x1ed520c, Func Offset: 0xc
	// Line 724, Address: 0x1ed5210, Func Offset: 0x10
	// Line 725, Address: 0x1ed5214, Func Offset: 0x14
	// Line 730, Address: 0x1ed521c, Func Offset: 0x1c
	// Line 725, Address: 0x1ed5220, Func Offset: 0x20
	// Line 730, Address: 0x1ed522c, Func Offset: 0x2c
	// Line 731, Address: 0x1ed523c, Func Offset: 0x3c
	// Line 732, Address: 0x1ed5248, Func Offset: 0x48
	// Line 733, Address: 0x1ed5254, Func Offset: 0x54
	// Line 734, Address: 0x1ed5260, Func Offset: 0x60
	// Line 735, Address: 0x1ed5268, Func Offset: 0x68
	// Line 736, Address: 0x1ed5274, Func Offset: 0x74
	// Line 737, Address: 0x1ed5278, Func Offset: 0x78
	// Line 739, Address: 0x1ed5280, Func Offset: 0x80
	// Line 738, Address: 0x1ed5284, Func Offset: 0x84
	// Line 739, Address: 0x1ed5288, Func Offset: 0x88
	// Func End, Address: 0x1ed5294, Func Offset: 0x94
	// Line 549, Address: 0x1ed5200, Func Offset: 0
	// Line 558, Address: 0x1ed5204, Func Offset: 0x4
	// Line 549, Address: 0x1ed5208, Func Offset: 0x8
	// Line 558, Address: 0x1ed520c, Func Offset: 0xc
	// Line 549, Address: 0x1ed5210, Func Offset: 0x10
	// Line 558, Address: 0x1ed5218, Func Offset: 0x18
	// Line 549, Address: 0x1ed521c, Func Offset: 0x1c
	// Line 558, Address: 0x1ed5220, Func Offset: 0x20
	// Line 549, Address: 0x1ed5224, Func Offset: 0x24
	// Line 558, Address: 0x1ed5228, Func Offset: 0x28
	// Line 549, Address: 0x1ed522c, Func Offset: 0x2c
	// Line 557, Address: 0x1ed5234, Func Offset: 0x34
	// Line 549, Address: 0x1ed5238, Func Offset: 0x38
	// Line 557, Address: 0x1ed523c, Func Offset: 0x3c
	// Line 549, Address: 0x1ed5240, Func Offset: 0x40
	// Line 558, Address: 0x1ed5244, Func Offset: 0x44
	// Line 549, Address: 0x1ed5248, Func Offset: 0x48
	// Line 558, Address: 0x1ed524c, Func Offset: 0x4c
	// Line 550, Address: 0x1ed5250, Func Offset: 0x50
	// Line 556, Address: 0x1ed5254, Func Offset: 0x54
	// Line 558, Address: 0x1ed5260, Func Offset: 0x60
	// Line 559, Address: 0x1ed5270, Func Offset: 0x70
	// Line 564, Address: 0x1ed527c, Func Offset: 0x7c
	// Line 559, Address: 0x1ed5284, Func Offset: 0x84
	// Line 560, Address: 0x1ed52d0, Func Offset: 0xd0
	// Line 561, Address: 0x1ed530c, Func Offset: 0x10c
	// Line 562, Address: 0x1ed5328, Func Offset: 0x128
	// Line 563, Address: 0x1ed5330, Func Offset: 0x130
	// Line 564, Address: 0x1ed5334, Func Offset: 0x134
	// Line 566, Address: 0x1ed533c, Func Offset: 0x13c
	// Line 565, Address: 0x1ed5340, Func Offset: 0x140
	// Line 566, Address: 0x1ed5344, Func Offset: 0x144
	// Line 567, Address: 0x1ed5350, Func Offset: 0x150
	// Func End, Address: 0x1ed5380, Func Offset: 0x180
}

// 
// Start address: 0x1ed5370
int ev_3ldk0_rl03_153_init(sfObj* obj)
{
	// Line 1191, Address: 0x1ed5370, Func Offset: 0
	// Line 1192, Address: 0x1ed5374, Func Offset: 0x4
	// Line 1191, Address: 0x1ed5378, Func Offset: 0x8
	// Line 1192, Address: 0x1ed5380, Func Offset: 0x10
	// Line 1193, Address: 0x1ed538c, Func Offset: 0x1c
	// Line 1195, Address: 0x1ed53a0, Func Offset: 0x30
	// Line 1197, Address: 0x1ed53a8, Func Offset: 0x38
	// Func End, Address: 0x1ed53b8, Func Offset: 0x48
	// Line 300, Address: 0x1ed5370, Func Offset: 0
	// Line 304, Address: 0x1ed5388, Func Offset: 0x18
	// Line 305, Address: 0x1ed5394, Func Offset: 0x24
	// Line 306, Address: 0x1ed539c, Func Offset: 0x2c
	// Line 307, Address: 0x1ed53ac, Func Offset: 0x3c
	// Line 309, Address: 0x1ed53c4, Func Offset: 0x54
	// Line 310, Address: 0x1ed53cc, Func Offset: 0x5c
	// Line 309, Address: 0x1ed53d0, Func Offset: 0x60
	// Line 310, Address: 0x1ed53d4, Func Offset: 0x64
	// Line 311, Address: 0x1ed53ec, Func Offset: 0x7c
	// Line 312, Address: 0x1ed53f4, Func Offset: 0x84
	// Line 313, Address: 0x1ed53f8, Func Offset: 0x88
	// Line 315, Address: 0x1ed5420, Func Offset: 0xb0
	// Line 317, Address: 0x1ed5428, Func Offset: 0xb8
	// Line 321, Address: 0x1ed5434, Func Offset: 0xc4
	// Line 322, Address: 0x1ed5438, Func Offset: 0xc8
	// Func End, Address: 0x1ed5450, Func Offset: 0xe0
}

// 
// Start address: 0x1ed53c0
int ev_3ldk0_rl03_153_exec(sfObj* obj)
{
	_ev153work* wp;
	// Line 1199, Address: 0x1ed53c0, Func Offset: 0
	// Line 1203, Address: 0x1ed53c4, Func Offset: 0x4
	// Line 1199, Address: 0x1ed53c8, Func Offset: 0x8
	// Line 1203, Address: 0x1ed53d4, Func Offset: 0x14
	// Line 1201, Address: 0x1ed53d8, Func Offset: 0x18
	// Line 1203, Address: 0x1ed53dc, Func Offset: 0x1c
	// Line 1205, Address: 0x1ed5414, Func Offset: 0x54
	// Line 1206, Address: 0x1ed5418, Func Offset: 0x58
	// Line 1207, Address: 0x1ed5424, Func Offset: 0x64
	// Line 1208, Address: 0x1ed542c, Func Offset: 0x6c
	// Line 1209, Address: 0x1ed5434, Func Offset: 0x74
	// Line 1210, Address: 0x1ed5438, Func Offset: 0x78
	// Line 1211, Address: 0x1ed5448, Func Offset: 0x88
	// Line 1212, Address: 0x1ed546c, Func Offset: 0xac
	// Line 1214, Address: 0x1ed5474, Func Offset: 0xb4
	// Line 1215, Address: 0x1ed547c, Func Offset: 0xbc
	// Line 1217, Address: 0x1ed5480, Func Offset: 0xc0
	// Line 1219, Address: 0x1ed5490, Func Offset: 0xd0
	// Line 1220, Address: 0x1ed54ac, Func Offset: 0xec
	// Line 1221, Address: 0x1ed54b8, Func Offset: 0xf8
	// Line 1223, Address: 0x1ed54c0, Func Offset: 0x100
	// Line 1226, Address: 0x1ed54c8, Func Offset: 0x108
	// Line 1227, Address: 0x1ed54d8, Func Offset: 0x118
	// Line 1230, Address: 0x1ed54fc, Func Offset: 0x13c
	// Line 1231, Address: 0x1ed5510, Func Offset: 0x150
	// Line 1233, Address: 0x1ed5518, Func Offset: 0x158
	// Line 1236, Address: 0x1ed5520, Func Offset: 0x160
	// Line 1237, Address: 0x1ed5530, Func Offset: 0x170
	// Line 1241, Address: 0x1ed5538, Func Offset: 0x178
	// Line 1242, Address: 0x1ed5540, Func Offset: 0x180
	// Func End, Address: 0x1ed5554, Func Offset: 0x194
	// Line 804, Address: 0x1ed53c0, Func Offset: 0
	// Line 806, Address: 0x1ed53c4, Func Offset: 0x4
	// Line 804, Address: 0x1ed53c8, Func Offset: 0x8
	// Line 806, Address: 0x1ed53cc, Func Offset: 0xc
	// Line 808, Address: 0x1ed53e8, Func Offset: 0x28
	// Line 807, Address: 0x1ed53ec, Func Offset: 0x2c
	// Line 808, Address: 0x1ed53f0, Func Offset: 0x30
	// Func End, Address: 0x1ed53f8, Func Offset: 0x38
}

// 
// Start address: 0x1ed5560
int ev_3ldk0_rl03_153_plate_set_exec(sfObj* obj)
{
	int ret;
	int idx;
	_anon3* msg[4];
	int flag[4];
	// Line 1261, Address: 0x1ed5560, Func Offset: 0
	// Line 1264, Address: 0x1ed5564, Func Offset: 0x4
	// Line 1261, Address: 0x1ed5568, Func Offset: 0x8
	// Line 1264, Address: 0x1ed556c, Func Offset: 0xc
	// Line 1261, Address: 0x1ed5570, Func Offset: 0x10
	// Line 1264, Address: 0x1ed5574, Func Offset: 0x14
	// Line 1261, Address: 0x1ed5578, Func Offset: 0x18
	// Line 1270, Address: 0x1ed557c, Func Offset: 0x1c
	// Line 1261, Address: 0x1ed5580, Func Offset: 0x20
	// Line 1264, Address: 0x1ed5588, Func Offset: 0x28
	// Line 1270, Address: 0x1ed558c, Func Offset: 0x2c
	// Line 1264, Address: 0x1ed5590, Func Offset: 0x30
	// Line 1270, Address: 0x1ed5594, Func Offset: 0x34
	// Line 1277, Address: 0x1ed559c, Func Offset: 0x3c
	// Line 1278, Address: 0x1ed55dc, Func Offset: 0x7c
	// Line 1279, Address: 0x1ed55e8, Func Offset: 0x88
	// Line 1280, Address: 0x1ed55f0, Func Offset: 0x90
	// Line 1281, Address: 0x1ed55f8, Func Offset: 0x98
	// Line 1282, Address: 0x1ed55fc, Func Offset: 0x9c
	// Line 1285, Address: 0x1ed5600, Func Offset: 0xa0
	// Line 1287, Address: 0x1ed5624, Func Offset: 0xc4
	// Line 1288, Address: 0x1ed5634, Func Offset: 0xd4
	// Line 1287, Address: 0x1ed5638, Func Offset: 0xd8
	// Line 1288, Address: 0x1ed5640, Func Offset: 0xe0
	// Line 1289, Address: 0x1ed5670, Func Offset: 0x110
	// Line 1290, Address: 0x1ed5680, Func Offset: 0x120
	// Line 1291, Address: 0x1ed569c, Func Offset: 0x13c
	// Line 1294, Address: 0x1ed56a8, Func Offset: 0x148
	// Line 1295, Address: 0x1ed56b8, Func Offset: 0x158
	// Line 1298, Address: 0x1ed56bc, Func Offset: 0x15c
	// Line 1299, Address: 0x1ed56c0, Func Offset: 0x160
	// Line 1300, Address: 0x1ed56c4, Func Offset: 0x164
	// Func End, Address: 0x1ed56dc, Func Offset: 0x17c
}

// 
// Start address: 0x1ed56e0
int ev_3ldk0_rl01_165_exec()
{
	float pos[4];
	// Line 1350, Address: 0x1ed56e0, Func Offset: 0
	// Line 1351, Address: 0x1ed56e4, Func Offset: 0x4
	// Line 1350, Address: 0x1ed56e8, Func Offset: 0x8
	// Line 1351, Address: 0x1ed56ec, Func Offset: 0xc
	// Line 1354, Address: 0x1ed56f4, Func Offset: 0x14
	// Line 1351, Address: 0x1ed56f8, Func Offset: 0x18
	// Line 1354, Address: 0x1ed56fc, Func Offset: 0x1c
	// Line 1359, Address: 0x1ed5720, Func Offset: 0x40
	// Line 1358, Address: 0x1ed5724, Func Offset: 0x44
	// Line 1359, Address: 0x1ed5728, Func Offset: 0x48
	// Func End, Address: 0x1ed5730, Func Offset: 0x50
	// Line 612, Address: 0x1ed56e0, Func Offset: 0
	// Line 613, Address: 0x1ed56e4, Func Offset: 0x4
	// Line 612, Address: 0x1ed56e8, Func Offset: 0x8
	// Line 613, Address: 0x1ed56f4, Func Offset: 0x14
	// Line 614, Address: 0x1ed5704, Func Offset: 0x24
	// Line 617, Address: 0x1ed570c, Func Offset: 0x2c
	// Line 618, Address: 0x1ed5714, Func Offset: 0x34
	// Line 620, Address: 0x1ed572c, Func Offset: 0x4c
	// Line 621, Address: 0x1ed5744, Func Offset: 0x64
	// Line 624, Address: 0x1ed575c, Func Offset: 0x7c
	// Line 625, Address: 0x1ed576c, Func Offset: 0x8c
	// Line 626, Address: 0x1ed5770, Func Offset: 0x90
	// Func End, Address: 0x1ed5784, Func Offset: 0xa4
}

// 
// Start address: 0x1ed5730
int ev_3ldk0_rl00_196_exec()
{
	// Line 1377, Address: 0x1ed5730, Func Offset: 0
	// Line 1374, Address: 0x1ed5734, Func Offset: 0x4
	// Line 1377, Address: 0x1ed5738, Func Offset: 0x8
	// Line 1374, Address: 0x1ed5740, Func Offset: 0x10
	// Line 1377, Address: 0x1ed5744, Func Offset: 0x14
	// Line 1382, Address: 0x1ed5764, Func Offset: 0x34
	// Line 1381, Address: 0x1ed5768, Func Offset: 0x38
	// Line 1382, Address: 0x1ed576c, Func Offset: 0x3c
	// Func End, Address: 0x1ed5774, Func Offset: 0x44
	// Line 860, Address: 0x1ed5730, Func Offset: 0
	// Line 862, Address: 0x1ed5734, Func Offset: 0x4
	// Line 860, Address: 0x1ed5738, Func Offset: 0x8
	// Line 862, Address: 0x1ed573c, Func Offset: 0xc
	// Line 860, Address: 0x1ed5740, Func Offset: 0x10
	// Line 862, Address: 0x1ed5744, Func Offset: 0x14
	// Line 863, Address: 0x1ed575c, Func Offset: 0x2c
	// Line 864, Address: 0x1ed5764, Func Offset: 0x34
	// Func End, Address: 0x1ed5774, Func Offset: 0x44
	// Line 531, Address: 0x1ed5730, Func Offset: 0
	// Line 534, Address: 0x1ed5738, Func Offset: 0x8
	// Line 536, Address: 0x1ed5748, Func Offset: 0x18
	// Line 539, Address: 0x1ed5750, Func Offset: 0x20
	// Line 538, Address: 0x1ed5754, Func Offset: 0x24
	// Line 539, Address: 0x1ed5758, Func Offset: 0x28
	// Func End, Address: 0x1ed5760, Func Offset: 0x30
}

// 
// Start address: 0x1ed5780
int ev_3ldk0_rl00_197_trgchk()
{
	// Line 1401, Address: 0x1ed5780, Func Offset: 0
	// Line 1402, Address: 0x1ed578c, Func Offset: 0xc
	// Func End, Address: 0x1ed5794, Func Offset: 0x14
	// Line 869, Address: 0x1ed5780, Func Offset: 0
	// Line 870, Address: 0x1ed5784, Func Offset: 0x4
	// Line 869, Address: 0x1ed5788, Func Offset: 0x8
	// Line 871, Address: 0x1ed5794, Func Offset: 0x14
	// Func End, Address: 0x1ed579c, Func Offset: 0x1c
}

// 
// Start address: 0x1ed57a0
int ev_3ldk0_rl00_197_init(sfObj* obj)
{
	// Line 1404, Address: 0x1ed57a0, Func Offset: 0
	// Line 1405, Address: 0x1ed57a4, Func Offset: 0x4
	// Line 1404, Address: 0x1ed57a8, Func Offset: 0x8
	// Line 1405, Address: 0x1ed57b0, Func Offset: 0x10
	// Line 1406, Address: 0x1ed57bc, Func Offset: 0x1c
	// Line 1408, Address: 0x1ed57d0, Func Offset: 0x30
	// Line 1407, Address: 0x1ed57d4, Func Offset: 0x34
	// Line 1408, Address: 0x1ed57d8, Func Offset: 0x38
	// Func End, Address: 0x1ed57e4, Func Offset: 0x44
	// Line 885, Address: 0x1ed57a0, Func Offset: 0
	// Line 887, Address: 0x1ed57a4, Func Offset: 0x4
	// Line 885, Address: 0x1ed57a8, Func Offset: 0x8
	// Line 887, Address: 0x1ed57ac, Func Offset: 0xc
	// Line 885, Address: 0x1ed57b0, Func Offset: 0x10
	// Line 887, Address: 0x1ed57b4, Func Offset: 0x14
	// Line 888, Address: 0x1ed57cc, Func Offset: 0x2c
	// Line 889, Address: 0x1ed57d4, Func Offset: 0x34
	// Func End, Address: 0x1ed57e4, Func Offset: 0x44
}

// 
// Start address: 0x1ed57f0
int ev_3ldk0_rl00_197_exec(sfObj* obj)
{
	_ev197work* wp;
	float ppos[4];
	float lpos[4];
	// Line 1410, Address: 0x1ed57f0, Func Offset: 0
	// Line 1414, Address: 0x1ed57f4, Func Offset: 0x4
	// Line 1410, Address: 0x1ed57f8, Func Offset: 0x8
	// Line 1414, Address: 0x1ed5804, Func Offset: 0x14
	// Line 1412, Address: 0x1ed5808, Func Offset: 0x18
	// Line 1414, Address: 0x1ed580c, Func Offset: 0x1c
	// Line 1416, Address: 0x1ed5838, Func Offset: 0x48
	// Line 1417, Address: 0x1ed585c, Func Offset: 0x6c
	// Line 1418, Address: 0x1ed5864, Func Offset: 0x74
	// Line 1419, Address: 0x1ed586c, Func Offset: 0x7c
	// Line 1421, Address: 0x1ed5870, Func Offset: 0x80
	// Line 1423, Address: 0x1ed5880, Func Offset: 0x90
	// Line 1425, Address: 0x1ed5888, Func Offset: 0x98
	// Line 1430, Address: 0x1ed58a4, Func Offset: 0xb4
	// Line 1432, Address: 0x1ed58b0, Func Offset: 0xc0
	// Line 1430, Address: 0x1ed58b4, Func Offset: 0xc4
	// Line 1432, Address: 0x1ed58b8, Func Offset: 0xc8
	// Line 1433, Address: 0x1ed58c4, Func Offset: 0xd4
	// Line 1434, Address: 0x1ed58c8, Func Offset: 0xd8
	// Line 1433, Address: 0x1ed58cc, Func Offset: 0xdc
	// Line 1434, Address: 0x1ed58d0, Func Offset: 0xe0
	// Line 1433, Address: 0x1ed58d4, Func Offset: 0xe4
	// Line 1435, Address: 0x1ed58d8, Func Offset: 0xe8
	// Line 1436, Address: 0x1ed58e4, Func Offset: 0xf4
	// Line 1439, Address: 0x1ed58f0, Func Offset: 0x100
	// Line 1440, Address: 0x1ed58fc, Func Offset: 0x10c
	// Line 1442, Address: 0x1ed5904, Func Offset: 0x114
	// Line 1443, Address: 0x1ed590c, Func Offset: 0x11c
	// Line 1445, Address: 0x1ed5910, Func Offset: 0x120
	// Line 1446, Address: 0x1ed5920, Func Offset: 0x130
	// Line 1449, Address: 0x1ed5944, Func Offset: 0x154
	// Line 1450, Address: 0x1ed5958, Func Offset: 0x168
	// Line 1452, Address: 0x1ed5960, Func Offset: 0x170
	// Line 1455, Address: 0x1ed5968, Func Offset: 0x178
	// Line 1456, Address: 0x1ed5978, Func Offset: 0x188
	// Line 1460, Address: 0x1ed5980, Func Offset: 0x190
	// Line 1461, Address: 0x1ed5988, Func Offset: 0x198
	// Func End, Address: 0x1ed599c, Func Offset: 0x1ac
	// Line 924, Address: 0x1ed57f0, Func Offset: 0
	// Line 925, Address: 0x1ed5808, Func Offset: 0x18
	// Line 926, Address: 0x1ed5814, Func Offset: 0x24
	// Line 928, Address: 0x1ed5828, Func Offset: 0x38
	// Line 929, Address: 0x1ed583c, Func Offset: 0x4c
	// Line 937, Address: 0x1ed5844, Func Offset: 0x54
	// Line 948, Address: 0x1ed584c, Func Offset: 0x5c
	// Line 949, Address: 0x1ed5864, Func Offset: 0x74
	// Line 950, Address: 0x1ed587c, Func Offset: 0x8c
	// Line 953, Address: 0x1ed5894, Func Offset: 0xa4
	// Line 952, Address: 0x1ed5898, Func Offset: 0xa8
	// Line 957, Address: 0x1ed589c, Func Offset: 0xac
	// Line 953, Address: 0x1ed58a0, Func Offset: 0xb0
	// Line 954, Address: 0x1ed58a4, Func Offset: 0xb4
	// Line 955, Address: 0x1ed58ac, Func Offset: 0xbc
	// Line 957, Address: 0x1ed58b4, Func Offset: 0xc4
	// Line 959, Address: 0x1ed58bc, Func Offset: 0xcc
	// Line 961, Address: 0x1ed58cc, Func Offset: 0xdc
	// Line 962, Address: 0x1ed58dc, Func Offset: 0xec
	// Line 963, Address: 0x1ed58f4, Func Offset: 0x104
	// Line 967, Address: 0x1ed5900, Func Offset: 0x110
	// Line 968, Address: 0x1ed5904, Func Offset: 0x114
	// Line 970, Address: 0x1ed5908, Func Offset: 0x118
	// Line 971, Address: 0x1ed5910, Func Offset: 0x120
	// Func End, Address: 0x1ed592c, Func Offset: 0x13c
	// Line 589, Address: 0x1ed57f0, Func Offset: 0
	// Line 591, Address: 0x1ed57f4, Func Offset: 0x4
	// Line 589, Address: 0x1ed57f8, Func Offset: 0x8
	// Line 591, Address: 0x1ed57fc, Func Offset: 0xc
	// Line 592, Address: 0x1ed580c, Func Offset: 0x1c
	// Line 595, Address: 0x1ed5820, Func Offset: 0x30
	// Line 597, Address: 0x1ed5830, Func Offset: 0x40
	// Line 596, Address: 0x1ed5834, Func Offset: 0x44
	// Line 597, Address: 0x1ed5838, Func Offset: 0x48
	// Func End, Address: 0x1ed5840, Func Offset: 0x50
}

// 
// Start address: 0x1ed59a0
void ev_3ldk0_2202_tv_off()
{
	// Line 1509, Address: 0x1ed59a0, Func Offset: 0
	// Line 1510, Address: 0x1ed59b4, Func Offset: 0x14
	// Line 1511, Address: 0x1ed59bc, Func Offset: 0x1c
	// Line 1510, Address: 0x1ed59c4, Func Offset: 0x24
	// Line 1513, Address: 0x1ed59d0, Func Offset: 0x30
	// Func End, Address: 0x1ed59d8, Func Offset: 0x38
	// Line 761, Address: 0x1ed59a0, Func Offset: 0
	// Line 762, Address: 0x1ed59b8, Func Offset: 0x18
	// Line 763, Address: 0x1ed59bc, Func Offset: 0x1c
	// Line 765, Address: 0x1ed59c4, Func Offset: 0x24
	// Line 768, Address: 0x1ed59cc, Func Offset: 0x2c
	// Line 771, Address: 0x1ed5a00, Func Offset: 0x60
	// Line 774, Address: 0x1ed5a08, Func Offset: 0x68
	// Line 775, Address: 0x1ed5a14, Func Offset: 0x74
	// Line 777, Address: 0x1ed5a20, Func Offset: 0x80
	// Line 776, Address: 0x1ed5a24, Func Offset: 0x84
	// Line 777, Address: 0x1ed5a38, Func Offset: 0x98
	// Line 780, Address: 0x1ed5a40, Func Offset: 0xa0
	// Line 783, Address: 0x1ed5a48, Func Offset: 0xa8
	// Line 784, Address: 0x1ed5a58, Func Offset: 0xb8
	// Line 785, Address: 0x1ed5a60, Func Offset: 0xc0
	// Line 786, Address: 0x1ed5a68, Func Offset: 0xc8
	// Line 787, Address: 0x1ed5a74, Func Offset: 0xd4
	// Line 790, Address: 0x1ed5a78, Func Offset: 0xd8
	// Line 791, Address: 0x1ed5a88, Func Offset: 0xe8
	// Line 792, Address: 0x1ed5a90, Func Offset: 0xf0
	// Line 793, Address: 0x1ed5a98, Func Offset: 0xf8
	// Line 794, Address: 0x1ed5aa4, Func Offset: 0x104
	// Line 796, Address: 0x1ed5aa8, Func Offset: 0x108
	// Line 797, Address: 0x1ed5ab0, Func Offset: 0x110
	// Line 800, Address: 0x1ed5ab8, Func Offset: 0x118
	// Line 803, Address: 0x1ed5ac0, Func Offset: 0x120
	// Line 804, Address: 0x1ed5ae8, Func Offset: 0x148
	// Line 805, Address: 0x1ed5af0, Func Offset: 0x150
	// Line 808, Address: 0x1ed5af8, Func Offset: 0x158
	// Line 809, Address: 0x1ed5b04, Func Offset: 0x164
	// Line 810, Address: 0x1ed5b18, Func Offset: 0x178
	// Line 811, Address: 0x1ed5b3c, Func Offset: 0x19c
	// Line 817, Address: 0x1ed5b48, Func Offset: 0x1a8
	// Line 818, Address: 0x1ed5b58, Func Offset: 0x1b8
	// Line 819, Address: 0x1ed5b60, Func Offset: 0x1c0
	// Line 820, Address: 0x1ed5b70, Func Offset: 0x1d0
	// Line 821, Address: 0x1ed5b84, Func Offset: 0x1e4
	// Line 824, Address: 0x1ed5b8c, Func Offset: 0x1ec
	// Line 825, Address: 0x1ed5b94, Func Offset: 0x1f4
	// Line 826, Address: 0x1ed5b98, Func Offset: 0x1f8
	// Line 829, Address: 0x1ed5ba4, Func Offset: 0x204
	// Line 830, Address: 0x1ed5bb4, Func Offset: 0x214
	// Line 836, Address: 0x1ed5bb8, Func Offset: 0x218
	// Line 837, Address: 0x1ed5bbc, Func Offset: 0x21c
	// Func End, Address: 0x1ed5bd4, Func Offset: 0x234
	// Line 166, Address: 0x1ed59a0, Func Offset: 0
	// Func End, Address: 0x1ed59a8, Func Offset: 0x8
}

// 
// Start address: 0x1ed59e0
int ev_3ldk0_2202_init(sfObj* obj)
{
	_ev2202work* pt;
	sgAnime* anm;
	// Line 1515, Address: 0x1ed59e0, Func Offset: 0
	// Line 1519, Address: 0x1ed59e4, Func Offset: 0x4
	// Line 1515, Address: 0x1ed59e8, Func Offset: 0x8
	// Line 1519, Address: 0x1ed59f4, Func Offset: 0x14
	// Line 1520, Address: 0x1ed5a00, Func Offset: 0x20
	// Line 1522, Address: 0x1ed5a04, Func Offset: 0x24
	// Line 1523, Address: 0x1ed5a30, Func Offset: 0x50
	// Line 1524, Address: 0x1ed5a3c, Func Offset: 0x5c
	// Line 1525, Address: 0x1ed5a54, Func Offset: 0x74
	// Line 1526, Address: 0x1ed5a58, Func Offset: 0x78
	// Line 1525, Address: 0x1ed5a5c, Func Offset: 0x7c
	// Line 1527, Address: 0x1ed5a6c, Func Offset: 0x8c
	// Func End, Address: 0x1ed5a80, Func Offset: 0xa0
}

// 
// Start address: 0x1ed5a80
int ev_3ldk0_2202_exec(sfObj* obj)
{
	sgAnime* anm;
	// Line 1529, Address: 0x1ed5a80, Func Offset: 0
	// Line 1534, Address: 0x1ed5a88, Func Offset: 0x8
	// Line 1535, Address: 0x1ed5a90, Func Offset: 0x10
	// Line 1538, Address: 0x1ed5a98, Func Offset: 0x18
	// Line 1537, Address: 0x1ed5a9c, Func Offset: 0x1c
	// Line 1538, Address: 0x1ed5aa0, Func Offset: 0x20
	// Func End, Address: 0x1ed5aa8, Func Offset: 0x28
}

// 
// Start address: 0x1ed5ab0
int ev_3ldk0_2202_draw(sfObj* obj)
{
	// Line 1540, Address: 0x1ed5ab0, Func Offset: 0
	// Line 1543, Address: 0x1ed5ab8, Func Offset: 0x8
	// Line 1545, Address: 0x1ed5ac0, Func Offset: 0x10
	// Line 1544, Address: 0x1ed5ac4, Func Offset: 0x14
	// Line 1545, Address: 0x1ed5ac8, Func Offset: 0x18
	// Func End, Address: 0x1ed5ad0, Func Offset: 0x20
	// Line 833, Address: 0x1ed5ab0, Func Offset: 0
	// Line 835, Address: 0x1ed5ac4, Func Offset: 0x14
	// Line 838, Address: 0x1ed5acc, Func Offset: 0x1c
	// Line 839, Address: 0x1ed5ad4, Func Offset: 0x24
	// Line 840, Address: 0x1ed5ad8, Func Offset: 0x28
	// Line 841, Address: 0x1ed5af4, Func Offset: 0x44
	// Line 871, Address: 0x1ed5af8, Func Offset: 0x48
	// Line 870, Address: 0x1ed5b00, Func Offset: 0x50
	// Line 871, Address: 0x1ed5b04, Func Offset: 0x54
	// Func End, Address: 0x1ed5b10, Func Offset: 0x60
	// Line 718, Address: 0x1ed5ab0, Func Offset: 0
	// Line 719, Address: 0x1ed5ac0, Func Offset: 0x10
	// Line 723, Address: 0x1ed5ad8, Func Offset: 0x28
	// Line 727, Address: 0x1ed5ae0, Func Offset: 0x30
	// Line 734, Address: 0x1ed5b04, Func Offset: 0x54
	// Line 737, Address: 0x1ed5b0c, Func Offset: 0x5c
	// Line 738, Address: 0x1ed5b14, Func Offset: 0x64
	// Line 739, Address: 0x1ed5b18, Func Offset: 0x68
	// Func End, Address: 0x1ed5b24, Func Offset: 0x74
}

// 
// Start address: 0x1ed5ad0
int ev_3ldk0_2202_end(sfObj* obj)
{
	// Line 1547, Address: 0x1ed5ad0, Func Offset: 0
	// Line 1550, Address: 0x1ed5ad8, Func Offset: 0x8
	// Line 1551, Address: 0x1ed5ae0, Func Offset: 0x10
	// Line 1552, Address: 0x1ed5ae4, Func Offset: 0x14
	// Line 1551, Address: 0x1ed5ae8, Func Offset: 0x18
	// Line 1553, Address: 0x1ed5af8, Func Offset: 0x28
	// Func End, Address: 0x1ed5b04, Func Offset: 0x34
}

// 
// Start address: 0x1ed5b10
int ev_3ldk0_2202_noise_trghck()
{
	// Line 1568, Address: 0x1ed5b10, Func Offset: 0
	// Line 1571, Address: 0x1ed5b34, Func Offset: 0x24
	// Func End, Address: 0x1ed5b3c, Func Offset: 0x2c
	// Line 1060, Address: 0x1ed5b10, Func Offset: 0
	// Line 1062, Address: 0x1ed5b14, Func Offset: 0x4
	// Line 1060, Address: 0x1ed5b18, Func Offset: 0x8
	// Line 1062, Address: 0x1ed5b24, Func Offset: 0x14
	// Line 1063, Address: 0x1ed5b2c, Func Offset: 0x1c
	// Line 1064, Address: 0x1ed5b34, Func Offset: 0x24
	// Line 1065, Address: 0x1ed5b40, Func Offset: 0x30
	// Line 1067, Address: 0x1ed5b58, Func Offset: 0x48
	// Line 1068, Address: 0x1ed5b5c, Func Offset: 0x4c
	// Line 1067, Address: 0x1ed5b60, Func Offset: 0x50
	// Line 1069, Address: 0x1ed5b64, Func Offset: 0x54
	// Func End, Address: 0x1ed5b74, Func Offset: 0x64
	// Line 875, Address: 0x1ed5b10, Func Offset: 0
	// Line 877, Address: 0x1ed5b24, Func Offset: 0x14
	// Line 878, Address: 0x1ed5b28, Func Offset: 0x18
	// Line 879, Address: 0x1ed5b30, Func Offset: 0x20
	// Line 880, Address: 0x1ed5b38, Func Offset: 0x28
	// Line 883, Address: 0x1ed5b44, Func Offset: 0x34
	// Line 880, Address: 0x1ed5b48, Func Offset: 0x38
	// Line 883, Address: 0x1ed5b54, Func Offset: 0x44
	// Line 885, Address: 0x1ed5b5c, Func Offset: 0x4c
	// Line 886, Address: 0x1ed5b64, Func Offset: 0x54
	// Line 887, Address: 0x1ed5b68, Func Offset: 0x58
	// Line 889, Address: 0x1ed5b84, Func Offset: 0x74
	// Line 888, Address: 0x1ed5b88, Func Offset: 0x78
	// Line 889, Address: 0x1ed5b8c, Func Offset: 0x7c
	// Func End, Address: 0x1ed5b9c, Func Offset: 0x8c
	// Line 700, Address: 0x1ed5b10, Func Offset: 0
	// Line 701, Address: 0x1ed5b18, Func Offset: 0x8
	// Line 703, Address: 0x1ed5b20, Func Offset: 0x10
	// Line 702, Address: 0x1ed5b24, Func Offset: 0x14
	// Line 703, Address: 0x1ed5b28, Func Offset: 0x18
	// Func End, Address: 0x1ed5b30, Func Offset: 0x20
}

// 
// Start address: 0x1ed5b40
int ev_3ldk0_2322_trgchk()
{
	// Line 1605, Address: 0x1ed5b40, Func Offset: 0
	// Line 1608, Address: 0x1ed5b60, Func Offset: 0x20
	// Func End, Address: 0x1ed5b68, Func Offset: 0x28
}

// 
// Start address: 0x1ed5b70
int ev_3ldk0_2322_init(sfObj* obj)
{
	_ev2322work* pt;
	sgAnime* anm;
	// Line 1610, Address: 0x1ed5b70, Func Offset: 0
	// Line 1614, Address: 0x1ed5b74, Func Offset: 0x4
	// Line 1610, Address: 0x1ed5b78, Func Offset: 0x8
	// Line 1614, Address: 0x1ed5b88, Func Offset: 0x18
	// Line 1617, Address: 0x1ed5b94, Func Offset: 0x24
	// Line 1618, Address: 0x1ed5ba8, Func Offset: 0x38
	// Line 1619, Address: 0x1ed5bd4, Func Offset: 0x64
	// Line 1620, Address: 0x1ed5be0, Func Offset: 0x70
	// Line 1622, Address: 0x1ed5bf8, Func Offset: 0x88
	// Line 1623, Address: 0x1ed5c24, Func Offset: 0xb4
	// Line 1624, Address: 0x1ed5c30, Func Offset: 0xc0
	// Line 1627, Address: 0x1ed5c48, Func Offset: 0xd8
	// Line 1629, Address: 0x1ed5c50, Func Offset: 0xe0
	// Line 1630, Address: 0x1ed5c54, Func Offset: 0xe4
	// Func End, Address: 0x1ed5c6c, Func Offset: 0xfc
	// Line 1044, Address: 0x1ed5b70, Func Offset: 0
	// Line 1045, Address: 0x1ed5b74, Func Offset: 0x4
	// Line 1048, Address: 0x1ed5b88, Func Offset: 0x18
	// Line 1049, Address: 0x1ed5b8c, Func Offset: 0x1c
	// Line 1048, Address: 0x1ed5b90, Func Offset: 0x20
	// Line 1049, Address: 0x1ed5b94, Func Offset: 0x24
	// Line 1050, Address: 0x1ed5b9c, Func Offset: 0x2c
	// Line 1051, Address: 0x1ed5bc4, Func Offset: 0x54
	// Line 1052, Address: 0x1ed5bc8, Func Offset: 0x58
	// Func End, Address: 0x1ed5bd4, Func Offset: 0x64
}

// 
// Start address: 0x1ed5c70
int ev_3ldk0_2322_exec(sfObj* obj)
{
	_ev2322work* pt;
	sgAnime* anm;
	// Line 1632, Address: 0x1ed5c70, Func Offset: 0
	// Line 1636, Address: 0x1ed5c74, Func Offset: 0x4
	// Line 1632, Address: 0x1ed5c78, Func Offset: 0x8
	// Line 1636, Address: 0x1ed5c84, Func Offset: 0x14
	// Line 1633, Address: 0x1ed5c88, Func Offset: 0x18
	// Line 1636, Address: 0x1ed5c8c, Func Offset: 0x1c
	// Line 1637, Address: 0x1ed5ca4, Func Offset: 0x34
	// Line 1636, Address: 0x1ed5ca8, Func Offset: 0x38
	// Line 1639, Address: 0x1ed5cb0, Func Offset: 0x40
	// Line 1641, Address: 0x1ed5cb8, Func Offset: 0x48
	// Line 1640, Address: 0x1ed5cbc, Func Offset: 0x4c
	// Line 1641, Address: 0x1ed5cc0, Func Offset: 0x50
	// Line 1642, Address: 0x1ed5cc4, Func Offset: 0x54
	// Line 1645, Address: 0x1ed5ccc, Func Offset: 0x5c
	// Line 1643, Address: 0x1ed5cd0, Func Offset: 0x60
	// Line 1642, Address: 0x1ed5cd4, Func Offset: 0x64
	// Line 1643, Address: 0x1ed5cd8, Func Offset: 0x68
	// Line 1645, Address: 0x1ed5cdc, Func Offset: 0x6c
	// Line 1643, Address: 0x1ed5ce0, Func Offset: 0x70
	// Line 1644, Address: 0x1ed5ce4, Func Offset: 0x74
	// Line 1645, Address: 0x1ed5cf0, Func Offset: 0x80
	// Line 1650, Address: 0x1ed5d10, Func Offset: 0xa0
	// Line 1651, Address: 0x1ed5d18, Func Offset: 0xa8
	// Line 1650, Address: 0x1ed5d1c, Func Offset: 0xac
	// Line 1651, Address: 0x1ed5d2c, Func Offset: 0xbc
	// Line 1652, Address: 0x1ed5d30, Func Offset: 0xc0
	// Line 1655, Address: 0x1ed5d38, Func Offset: 0xc8
	// Line 1652, Address: 0x1ed5d3c, Func Offset: 0xcc
	// Line 1655, Address: 0x1ed5d40, Func Offset: 0xd0
	// Line 1652, Address: 0x1ed5d44, Func Offset: 0xd4
	// Line 1653, Address: 0x1ed5d48, Func Offset: 0xd8
	// Line 1654, Address: 0x1ed5d4c, Func Offset: 0xdc
	// Line 1652, Address: 0x1ed5d50, Func Offset: 0xe0
	// Line 1653, Address: 0x1ed5d54, Func Offset: 0xe4
	// Line 1654, Address: 0x1ed5d58, Func Offset: 0xe8
	// Line 1655, Address: 0x1ed5d5c, Func Offset: 0xec
	// Line 1652, Address: 0x1ed5d64, Func Offset: 0xf4
	// Line 1655, Address: 0x1ed5d68, Func Offset: 0xf8
	// Line 1652, Address: 0x1ed5d6c, Func Offset: 0xfc
	// Line 1653, Address: 0x1ed5d70, Func Offset: 0x100
	// Line 1652, Address: 0x1ed5d74, Func Offset: 0x104
	// Line 1653, Address: 0x1ed5d84, Func Offset: 0x114
	// Line 1654, Address: 0x1ed5d9c, Func Offset: 0x12c
	// Line 1653, Address: 0x1ed5da0, Func Offset: 0x130
	// Line 1654, Address: 0x1ed5da8, Func Offset: 0x138
	// Line 1655, Address: 0x1ed5dc8, Func Offset: 0x158
	// Line 1657, Address: 0x1ed5dd8, Func Offset: 0x168
	// Line 1659, Address: 0x1ed5de4, Func Offset: 0x174
	// Line 1660, Address: 0x1ed5de8, Func Offset: 0x178
	// Line 1661, Address: 0x1ed5dfc, Func Offset: 0x18c
	// Line 1663, Address: 0x1ed5e20, Func Offset: 0x1b0
	// Line 1665, Address: 0x1ed5e44, Func Offset: 0x1d4
	// Line 1667, Address: 0x1ed5e48, Func Offset: 0x1d8
	// Line 1668, Address: 0x1ed5e5c, Func Offset: 0x1ec
	// Line 1669, Address: 0x1ed5e64, Func Offset: 0x1f4
	// Line 1671, Address: 0x1ed5e6c, Func Offset: 0x1fc
	// Line 1672, Address: 0x1ed5e74, Func Offset: 0x204
	// Line 1673, Address: 0x1ed5e7c, Func Offset: 0x20c
	// Line 1676, Address: 0x1ed5e80, Func Offset: 0x210
	// Line 1675, Address: 0x1ed5e88, Func Offset: 0x218
	// Line 1676, Address: 0x1ed5e8c, Func Offset: 0x21c
	// Func End, Address: 0x1ed5e98, Func Offset: 0x228
	// Line 1104, Address: 0x1ed5c70, Func Offset: 0
	// Line 1108, Address: 0x1ed5c74, Func Offset: 0x4
	// Line 1104, Address: 0x1ed5c78, Func Offset: 0x8
	// Line 1108, Address: 0x1ed5c80, Func Offset: 0x10
	// Line 1109, Address: 0x1ed5c90, Func Offset: 0x20
	// Line 1110, Address: 0x1ed5ca4, Func Offset: 0x34
	// Line 1111, Address: 0x1ed5ca8, Func Offset: 0x38
	// Line 1112, Address: 0x1ed5cb0, Func Offset: 0x40
	// Line 1113, Address: 0x1ed5cc8, Func Offset: 0x58
	// Line 1116, Address: 0x1ed5cd0, Func Offset: 0x60
	// Line 1115, Address: 0x1ed5cd8, Func Offset: 0x68
	// Line 1116, Address: 0x1ed5cdc, Func Offset: 0x6c
	// Func End, Address: 0x1ed5ce4, Func Offset: 0x74
	// Line 166, Address: 0x1ed5c70, Func Offset: 0
	// Line 167, Address: 0x1ed5c80, Func Offset: 0x10
	// Line 169, Address: 0x1ed5c98, Func Offset: 0x28
	// Line 171, Address: 0x1ed5ca0, Func Offset: 0x30
	// Line 172, Address: 0x1ed5ca8, Func Offset: 0x38
	// Func End, Address: 0x1ed5cb4, Func Offset: 0x44
	// Line 753, Address: 0x1ed5c70, Func Offset: 0
	// Line 754, Address: 0x1ed5c74, Func Offset: 0x4
	// Line 753, Address: 0x1ed5c78, Func Offset: 0x8
	// Line 754, Address: 0x1ed5c7c, Func Offset: 0xc
	// Line 755, Address: 0x1ed5c88, Func Offset: 0x18
	// Line 757, Address: 0x1ed5c90, Func Offset: 0x20
	// Line 756, Address: 0x1ed5c94, Func Offset: 0x24
	// Line 757, Address: 0x1ed5c98, Func Offset: 0x28
	// Func End, Address: 0x1ed5ca0, Func Offset: 0x30
}

// 
// Start address: 0x1ed5ea0
int ev_3ldk0_2322_draw(sfObj* obj)
{
	_ev2322work* pt;
	// Line 1678, Address: 0x1ed5ea0, Func Offset: 0
	// Line 1681, Address: 0x1ed5ea4, Func Offset: 0x4
	// Line 1678, Address: 0x1ed5ea8, Func Offset: 0x8
	// Line 1681, Address: 0x1ed5eac, Func Offset: 0xc
	// Line 1678, Address: 0x1ed5eb0, Func Offset: 0x10
	// Line 1681, Address: 0x1ed5eb4, Func Offset: 0x14
	// Line 1682, Address: 0x1ed5ec0, Func Offset: 0x20
	// Line 1683, Address: 0x1ed5ec8, Func Offset: 0x28
	// Line 1687, Address: 0x1ed5ed0, Func Offset: 0x30
	// Line 1686, Address: 0x1ed5ed8, Func Offset: 0x38
	// Line 1687, Address: 0x1ed5edc, Func Offset: 0x3c
	// Func End, Address: 0x1ed5ee4, Func Offset: 0x44
}

// 
// Start address: 0x1ed5ef0
int ev_3ldk0_2322_end(sfObj* obj)
{
	_ev2322work* pt;
	// Line 1689, Address: 0x1ed5ef0, Func Offset: 0
	// Line 1692, Address: 0x1ed5ef4, Func Offset: 0x4
	// Line 1689, Address: 0x1ed5ef8, Func Offset: 0x8
	// Line 1692, Address: 0x1ed5efc, Func Offset: 0xc
	// Line 1689, Address: 0x1ed5f00, Func Offset: 0x10
	// Line 1692, Address: 0x1ed5f04, Func Offset: 0x14
	// Line 1694, Address: 0x1ed5f10, Func Offset: 0x20
	// Line 1696, Address: 0x1ed5f1c, Func Offset: 0x2c
	// Line 1697, Address: 0x1ed5f24, Func Offset: 0x34
	// Line 1698, Address: 0x1ed5f2c, Func Offset: 0x3c
	// Line 1701, Address: 0x1ed5f30, Func Offset: 0x40
	// Line 1704, Address: 0x1ed5f3c, Func Offset: 0x4c
	// Line 1706, Address: 0x1ed5f40, Func Offset: 0x50
	// Line 1704, Address: 0x1ed5f44, Func Offset: 0x54
	// Line 1707, Address: 0x1ed5f54, Func Offset: 0x64
	// Func End, Address: 0x1ed5f64, Func Offset: 0x74
	// Line 611, Address: 0x1ed5ef0, Func Offset: 0
	// Line 618, Address: 0x1ed5f10, Func Offset: 0x20
	// Line 619, Address: 0x1ed5f1c, Func Offset: 0x2c
	// Line 620, Address: 0x1ed5f28, Func Offset: 0x38
	// Line 621, Address: 0x1ed5f34, Func Offset: 0x44
	// Line 622, Address: 0x1ed5f40, Func Offset: 0x50
	// Line 623, Address: 0x1ed5f4c, Func Offset: 0x5c
	// Line 625, Address: 0x1ed5f78, Func Offset: 0x88
	// Line 626, Address: 0x1ed5f88, Func Offset: 0x98
	// Line 627, Address: 0x1ed5f90, Func Offset: 0xa0
	// Line 629, Address: 0x1ed5f98, Func Offset: 0xa8
	// Line 630, Address: 0x1ed5fa4, Func Offset: 0xb4
	// Line 631, Address: 0x1ed5fac, Func Offset: 0xbc
	// Line 632, Address: 0x1ed5fb8, Func Offset: 0xc8
	// Line 633, Address: 0x1ed5fc0, Func Offset: 0xd0
	// Line 634, Address: 0x1ed5fc8, Func Offset: 0xd8
	// Line 635, Address: 0x1ed5fd4, Func Offset: 0xe4
	// Line 636, Address: 0x1ed5fdc, Func Offset: 0xec
	// Line 637, Address: 0x1ed5fe4, Func Offset: 0xf4
	// Line 638, Address: 0x1ed5fe8, Func Offset: 0xf8
	// Line 640, Address: 0x1ed6008, Func Offset: 0x118
	// Line 641, Address: 0x1ed6014, Func Offset: 0x124
	// Line 642, Address: 0x1ed6024, Func Offset: 0x134
	// Line 643, Address: 0x1ed602c, Func Offset: 0x13c
	// Line 644, Address: 0x1ed6038, Func Offset: 0x148
	// Line 646, Address: 0x1ed6040, Func Offset: 0x150
	// Line 648, Address: 0x1ed604c, Func Offset: 0x15c
	// Line 649, Address: 0x1ed6054, Func Offset: 0x164
	// Line 650, Address: 0x1ed6058, Func Offset: 0x168
	// Line 651, Address: 0x1ed6078, Func Offset: 0x188
	// Line 653, Address: 0x1ed6094, Func Offset: 0x1a4
	// Line 654, Address: 0x1ed6098, Func Offset: 0x1a8
	// Line 655, Address: 0x1ed60a4, Func Offset: 0x1b4
	// Line 657, Address: 0x1ed60b4, Func Offset: 0x1c4
	// Line 658, Address: 0x1ed60d0, Func Offset: 0x1e0
	// Line 659, Address: 0x1ed60d4, Func Offset: 0x1e4
	// Line 660, Address: 0x1ed60d8, Func Offset: 0x1e8
	// Line 662, Address: 0x1ed60e0, Func Offset: 0x1f0
	// Line 664, Address: 0x1ed60e8, Func Offset: 0x1f8
	// Line 665, Address: 0x1ed6118, Func Offset: 0x228
	// Line 666, Address: 0x1ed6120, Func Offset: 0x230
	// Line 668, Address: 0x1ed6128, Func Offset: 0x238
	// Line 669, Address: 0x1ed6140, Func Offset: 0x250
	// Line 670, Address: 0x1ed6150, Func Offset: 0x260
	// Line 673, Address: 0x1ed619c, Func Offset: 0x2ac
	// Line 674, Address: 0x1ed61a4, Func Offset: 0x2b4
	// Line 675, Address: 0x1ed61a8, Func Offset: 0x2b8
	// Line 676, Address: 0x1ed61c4, Func Offset: 0x2d4
	// Line 677, Address: 0x1ed61cc, Func Offset: 0x2dc
	// Line 678, Address: 0x1ed61d8, Func Offset: 0x2e8
	// Line 679, Address: 0x1ed61e4, Func Offset: 0x2f4
	// Line 680, Address: 0x1ed61ec, Func Offset: 0x2fc
	// Line 681, Address: 0x1ed61f0, Func Offset: 0x300
	// Line 682, Address: 0x1ed6204, Func Offset: 0x314
	// Line 684, Address: 0x1ed6220, Func Offset: 0x330
	// Line 685, Address: 0x1ed6228, Func Offset: 0x338
	// Line 686, Address: 0x1ed6234, Func Offset: 0x344
	// Line 687, Address: 0x1ed6240, Func Offset: 0x350
	// Line 689, Address: 0x1ed6248, Func Offset: 0x358
	// Line 690, Address: 0x1ed6254, Func Offset: 0x364
	// Line 689, Address: 0x1ed6258, Func Offset: 0x368
	// Line 690, Address: 0x1ed625c, Func Offset: 0x36c
	// Line 694, Address: 0x1ed6298, Func Offset: 0x3a8
	// Line 695, Address: 0x1ed62c0, Func Offset: 0x3d0
	// Line 696, Address: 0x1ed62c8, Func Offset: 0x3d8
	// Line 697, Address: 0x1ed62d4, Func Offset: 0x3e4
	// Line 698, Address: 0x1ed62e0, Func Offset: 0x3f0
	// Line 701, Address: 0x1ed62e8, Func Offset: 0x3f8
	// Line 702, Address: 0x1ed62ec, Func Offset: 0x3fc
	// Line 703, Address: 0x1ed62f0, Func Offset: 0x400
	// Line 705, Address: 0x1ed6300, Func Offset: 0x410
	// Line 706, Address: 0x1ed6308, Func Offset: 0x418
	// Line 707, Address: 0x1ed6314, Func Offset: 0x424
	// Line 708, Address: 0x1ed6320, Func Offset: 0x430
	// Line 712, Address: 0x1ed6328, Func Offset: 0x438
	// Line 713, Address: 0x1ed6334, Func Offset: 0x444
	// Line 714, Address: 0x1ed6344, Func Offset: 0x454
	// Line 716, Address: 0x1ed6348, Func Offset: 0x458
	// Line 714, Address: 0x1ed634c, Func Offset: 0x45c
	// Line 716, Address: 0x1ed6354, Func Offset: 0x464
	// Line 717, Address: 0x1ed635c, Func Offset: 0x46c
	// Line 718, Address: 0x1ed6364, Func Offset: 0x474
	// Line 719, Address: 0x1ed6368, Func Offset: 0x478
	// Line 720, Address: 0x1ed637c, Func Offset: 0x48c
	// Line 721, Address: 0x1ed6384, Func Offset: 0x494
	// Line 722, Address: 0x1ed6390, Func Offset: 0x4a0
	// Line 723, Address: 0x1ed63b4, Func Offset: 0x4c4
	// Line 724, Address: 0x1ed63c0, Func Offset: 0x4d0
	// Line 729, Address: 0x1ed63cc, Func Offset: 0x4dc
	// Line 730, Address: 0x1ed63d0, Func Offset: 0x4e0
	// Line 732, Address: 0x1ed63f0, Func Offset: 0x500
	// Line 733, Address: 0x1ed6418, Func Offset: 0x528
	// Line 734, Address: 0x1ed6424, Func Offset: 0x534
	// Line 733, Address: 0x1ed6428, Func Offset: 0x538
	// Line 734, Address: 0x1ed642c, Func Offset: 0x53c
	// Line 738, Address: 0x1ed6468, Func Offset: 0x578
	// Line 739, Address: 0x1ed6490, Func Offset: 0x5a0
	// Line 740, Address: 0x1ed649c, Func Offset: 0x5ac
	// Line 742, Address: 0x1ed64a4, Func Offset: 0x5b4
	// Line 743, Address: 0x1ed64a8, Func Offset: 0x5b8
	// Line 745, Address: 0x1ed64ac, Func Offset: 0x5bc
	// Line 746, Address: 0x1ed64b0, Func Offset: 0x5c0
	// Line 747, Address: 0x1ed64c0, Func Offset: 0x5d0
	// Line 748, Address: 0x1ed64d4, Func Offset: 0x5e4
	// Line 749, Address: 0x1ed64dc, Func Offset: 0x5ec
	// Line 750, Address: 0x1ed64e8, Func Offset: 0x5f8
	// Line 751, Address: 0x1ed64f4, Func Offset: 0x604
	// Line 752, Address: 0x1ed64fc, Func Offset: 0x60c
	// Line 753, Address: 0x1ed6500, Func Offset: 0x610
	// Line 754, Address: 0x1ed6518, Func Offset: 0x628
	// Line 756, Address: 0x1ed6530, Func Offset: 0x640
	// Line 758, Address: 0x1ed6578, Func Offset: 0x688
	// Line 759, Address: 0x1ed657c, Func Offset: 0x68c
	// Line 760, Address: 0x1ed6580, Func Offset: 0x690
	// Line 762, Address: 0x1ed6590, Func Offset: 0x6a0
	// Line 763, Address: 0x1ed65b4, Func Offset: 0x6c4
	// Line 764, Address: 0x1ed65bc, Func Offset: 0x6cc
	// Line 765, Address: 0x1ed65c8, Func Offset: 0x6d8
	// Line 766, Address: 0x1ed65d0, Func Offset: 0x6e0
	// Line 768, Address: 0x1ed65d4, Func Offset: 0x6e4
	// Line 770, Address: 0x1ed65f8, Func Offset: 0x708
	// Line 771, Address: 0x1ed6600, Func Offset: 0x710
	// Line 772, Address: 0x1ed6604, Func Offset: 0x714
	// Line 773, Address: 0x1ed6608, Func Offset: 0x718
	// Line 774, Address: 0x1ed6614, Func Offset: 0x724
	// Line 775, Address: 0x1ed661c, Func Offset: 0x72c
	// Line 777, Address: 0x1ed6628, Func Offset: 0x738
	// Line 779, Address: 0x1ed6634, Func Offset: 0x744
	// Line 782, Address: 0x1ed663c, Func Offset: 0x74c
	// Line 783, Address: 0x1ed6640, Func Offset: 0x750
	// Line 785, Address: 0x1ed6660, Func Offset: 0x770
	// Line 786, Address: 0x1ed666c, Func Offset: 0x77c
	// Line 787, Address: 0x1ed6688, Func Offset: 0x798
	// Line 789, Address: 0x1ed66b8, Func Offset: 0x7c8
	// Line 790, Address: 0x1ed66c8, Func Offset: 0x7d8
	// Line 791, Address: 0x1ed66d0, Func Offset: 0x7e0
	// Line 792, Address: 0x1ed66d8, Func Offset: 0x7e8
	// Line 794, Address: 0x1ed66e4, Func Offset: 0x7f4
	// Line 795, Address: 0x1ed66ec, Func Offset: 0x7fc
	// Line 796, Address: 0x1ed66f0, Func Offset: 0x800
	// Line 797, Address: 0x1ed6700, Func Offset: 0x810
	// Line 798, Address: 0x1ed6718, Func Offset: 0x828
	// Line 799, Address: 0x1ed6720, Func Offset: 0x830
	// Line 800, Address: 0x1ed6740, Func Offset: 0x850
	// Line 801, Address: 0x1ed6748, Func Offset: 0x858
	// Line 802, Address: 0x1ed6760, Func Offset: 0x870
	// Line 803, Address: 0x1ed6768, Func Offset: 0x878
	// Line 804, Address: 0x1ed6770, Func Offset: 0x880
	// Line 806, Address: 0x1ed677c, Func Offset: 0x88c
	// Line 807, Address: 0x1ed6784, Func Offset: 0x894
	// Line 808, Address: 0x1ed6788, Func Offset: 0x898
	// Line 813, Address: 0x1ed6794, Func Offset: 0x8a4
	// Line 814, Address: 0x1ed6798, Func Offset: 0x8a8
	// Line 817, Address: 0x1ed67d0, Func Offset: 0x8e0
	// Line 819, Address: 0x1ed67d8, Func Offset: 0x8e8
	// Func End, Address: 0x1ed67fc, Func Offset: 0x90c
}

// 
// Start address: 0x1ed5f70
void ev_3ldk0_2322_sound_end()
{
	_ev2322work* pt;
	// Line 1719, Address: 0x1ed5f70, Func Offset: 0
	// Line 1720, Address: 0x1ed5f74, Func Offset: 0x4
	// Line 1719, Address: 0x1ed5f78, Func Offset: 0x8
	// Line 1720, Address: 0x1ed5f80, Func Offset: 0x10
	// Line 1722, Address: 0x1ed5f88, Func Offset: 0x18
	// Line 1723, Address: 0x1ed5f94, Func Offset: 0x24
	// Line 1724, Address: 0x1ed5fa0, Func Offset: 0x30
	// Func End, Address: 0x1ed5fb0, Func Offset: 0x40
	// Line 839, Address: 0x1ed5f70, Func Offset: 0
	// Line 840, Address: 0x1ed5f78, Func Offset: 0x8
	// Line 842, Address: 0x1ed5f80, Func Offset: 0x10
	// Line 841, Address: 0x1ed5f84, Func Offset: 0x14
	// Line 842, Address: 0x1ed5f88, Func Offset: 0x18
	// Func End, Address: 0x1ed5f90, Func Offset: 0x20
}

// 
// Start address: 0x1ed5fb0
void ev_bathhole_sound_variable(int kind)
{
	_HoleSound* hs;
	float tpos[4];
	// Line 1755, Address: 0x1ed5fb0, Func Offset: 0
	// Line 1756, Address: 0x1ed5fbc, Func Offset: 0xc
	// Line 1759, Address: 0x1ed5fc0, Func Offset: 0x10
	// Line 1760, Address: 0x1ed5fc8, Func Offset: 0x18
	// Line 1763, Address: 0x1ed5fcc, Func Offset: 0x1c
	// Line 1760, Address: 0x1ed5fd0, Func Offset: 0x20
	// Line 1761, Address: 0x1ed5fd4, Func Offset: 0x24
	// Line 1762, Address: 0x1ed5fdc, Func Offset: 0x2c
	// Line 1761, Address: 0x1ed5fe0, Func Offset: 0x30
	// Line 1764, Address: 0x1ed5fe4, Func Offset: 0x34
	// Line 1767, Address: 0x1ed5ff0, Func Offset: 0x40
	// Line 1766, Address: 0x1ed5ff4, Func Offset: 0x44
	// Line 1767, Address: 0x1ed5ff8, Func Offset: 0x48
	// Line 1766, Address: 0x1ed5ffc, Func Offset: 0x4c
	// Line 1769, Address: 0x1ed6000, Func Offset: 0x50
	// Line 1766, Address: 0x1ed6004, Func Offset: 0x54
	// Line 1768, Address: 0x1ed6008, Func Offset: 0x58
	// Line 1773, Address: 0x1ed6010, Func Offset: 0x60
	// Line 1774, Address: 0x1ed601c, Func Offset: 0x6c
	// Line 1791, Address: 0x1ed6028, Func Offset: 0x78
	// Func End, Address: 0x1ed6038, Func Offset: 0x88
}

// 
// Start address: 0x1ed6040
void ev_bathhole_sound_fixstep()
{
	// Line 1799, Address: 0x1ed6040, Func Offset: 0
	// Line 1800, Address: 0x1ed6048, Func Offset: 0x8
	// Func End, Address: 0x1ed6050, Func Offset: 0x10
}

// 
// Start address: 0x1ed6050
int ev_bathhole_sound_init(sfObj* obj)
{
	_HoleSound* hs;
	int sd[4];
	// Line 1807, Address: 0x1ed6050, Func Offset: 0
	// Line 1809, Address: 0x1ed6054, Func Offset: 0x4
	// Line 1807, Address: 0x1ed6058, Func Offset: 0x8
	// Line 1809, Address: 0x1ed605c, Func Offset: 0xc
	// Line 1807, Address: 0x1ed6060, Func Offset: 0x10
	// Line 1809, Address: 0x1ed6064, Func Offset: 0x14
	// Line 1807, Address: 0x1ed6068, Func Offset: 0x18
	// Line 1809, Address: 0x1ed6070, Func Offset: 0x20
	// Line 1808, Address: 0x1ed6074, Func Offset: 0x24
	// Line 1816, Address: 0x1ed607c, Func Offset: 0x2c
	// Line 1817, Address: 0x1ed6090, Func Offset: 0x40
	// Line 1818, Address: 0x1ed609c, Func Offset: 0x4c
	// Line 1819, Address: 0x1ed60ac, Func Offset: 0x5c
	// Line 1820, Address: 0x1ed60c0, Func Offset: 0x70
	// Line 1822, Address: 0x1ed60c8, Func Offset: 0x78
	// Line 1825, Address: 0x1ed60d0, Func Offset: 0x80
	// Line 1824, Address: 0x1ed60d8, Func Offset: 0x88
	// Line 1825, Address: 0x1ed60dc, Func Offset: 0x8c
	// Func End, Address: 0x1ed60e8, Func Offset: 0x98
	// Line 1019, Address: 0x1ed6050, Func Offset: 0
	// Line 1020, Address: 0x1ed6054, Func Offset: 0x4
	// Line 1019, Address: 0x1ed6058, Func Offset: 0x8
	// Line 1020, Address: 0x1ed6074, Func Offset: 0x24
	// Line 1019, Address: 0x1ed6078, Func Offset: 0x28
	// Line 1020, Address: 0x1ed607c, Func Offset: 0x2c
	// Line 1021, Address: 0x1ed608c, Func Offset: 0x3c
	// Line 1025, Address: 0x1ed609c, Func Offset: 0x4c
	// Line 1021, Address: 0x1ed60a0, Func Offset: 0x50
	// Line 1023, Address: 0x1ed60a4, Func Offset: 0x54
	// Line 1025, Address: 0x1ed60a8, Func Offset: 0x58
	// Line 1026, Address: 0x1ed60c0, Func Offset: 0x70
	// Line 1028, Address: 0x1ed60d4, Func Offset: 0x84
	// Line 1032, Address: 0x1ed60d8, Func Offset: 0x88
	// Line 1030, Address: 0x1ed60e0, Func Offset: 0x90
	// Line 1032, Address: 0x1ed60e8, Func Offset: 0x98
	// Line 1029, Address: 0x1ed60ec, Func Offset: 0x9c
	// Line 1032, Address: 0x1ed60f0, Func Offset: 0xa0
	// Line 1034, Address: 0x1ed6114, Func Offset: 0xc4
	// Line 1036, Address: 0x1ed611c, Func Offset: 0xcc
	// Line 1039, Address: 0x1ed6120, Func Offset: 0xd0
	// Line 1041, Address: 0x1ed612c, Func Offset: 0xdc
	// Line 1042, Address: 0x1ed6144, Func Offset: 0xf4
	// Line 1045, Address: 0x1ed6150, Func Offset: 0x100
	// Line 1046, Address: 0x1ed6174, Func Offset: 0x124
	// Line 1047, Address: 0x1ed6178, Func Offset: 0x128
	// Line 1048, Address: 0x1ed61b4, Func Offset: 0x164
	// Line 1050, Address: 0x1ed61c0, Func Offset: 0x170
	// Line 1051, Address: 0x1ed61d0, Func Offset: 0x180
	// Func End, Address: 0x1ed61f4, Func Offset: 0x1a4
}

// 
// Start address: 0x1ed60f0
int ev_bathhole_sound_exec()
{
	_HoleSound* hs;
	// Line 1831, Address: 0x1ed60f0, Func Offset: 0
	// Line 1834, Address: 0x1ed60f4, Func Offset: 0x4
	// Line 1831, Address: 0x1ed60f8, Func Offset: 0x8
	// Line 1834, Address: 0x1ed60fc, Func Offset: 0xc
	// Line 1831, Address: 0x1ed6100, Func Offset: 0x10
	// Line 1834, Address: 0x1ed6104, Func Offset: 0x14
	// Line 1832, Address: 0x1ed6108, Func Offset: 0x18
	// Line 1834, Address: 0x1ed610c, Func Offset: 0x1c
	// Line 1836, Address: 0x1ed6130, Func Offset: 0x40
	// Line 1837, Address: 0x1ed614c, Func Offset: 0x5c
	// Line 1838, Address: 0x1ed6154, Func Offset: 0x64
	// Line 1843, Address: 0x1ed6158, Func Offset: 0x68
	// Line 1844, Address: 0x1ed616c, Func Offset: 0x7c
	// Line 1845, Address: 0x1ed6170, Func Offset: 0x80
	// Line 1847, Address: 0x1ed6178, Func Offset: 0x88
	// Line 1852, Address: 0x1ed6184, Func Offset: 0x94
	// Line 1854, Address: 0x1ed6188, Func Offset: 0x98
	// Line 1853, Address: 0x1ed6190, Func Offset: 0xa0
	// Line 1854, Address: 0x1ed6194, Func Offset: 0xa4
	// Func End, Address: 0x1ed619c, Func Offset: 0xac
}

// 
// Start address: 0x1ed61a0
int ev_bathhole_sound_end()
{
	// Line 1860, Address: 0x1ed61a0, Func Offset: 0
	// Line 1862, Address: 0x1ed61a4, Func Offset: 0x4
	// Line 1860, Address: 0x1ed61a8, Func Offset: 0x8
	// Line 1862, Address: 0x1ed61ac, Func Offset: 0xc
	// Line 1864, Address: 0x1ed61b8, Func Offset: 0x18
	// Line 1863, Address: 0x1ed61bc, Func Offset: 0x1c
	// Line 1864, Address: 0x1ed61c0, Func Offset: 0x20
	// Func End, Address: 0x1ed61c8, Func Offset: 0x28
}

// 
// Start address: 0x1ed61d0
int ev_3ldk0_rl02_hole_sound_trgchk()
{
	// Line 1870, Address: 0x1ed61d0, Func Offset: 0
	// Line 1872, Address: 0x1ed61d8, Func Offset: 0x8
	// Line 1877, Address: 0x1ed6210, Func Offset: 0x40
	// Line 1880, Address: 0x1ed6218, Func Offset: 0x48
	// Line 1881, Address: 0x1ed6220, Func Offset: 0x50
	// Func End, Address: 0x1ed622c, Func Offset: 0x5c
}

// 
// Start address: 0x1ed6230
int ev_3ldk0_rl03_hole_sound_trgchk()
{
	// Line 1895, Address: 0x1ed6230, Func Offset: 0
	// Line 1896, Address: 0x1ed623c, Func Offset: 0xc
	// Func End, Address: 0x1ed6244, Func Offset: 0x14
}

// 
// Start address: 0x1ed6250
int ev_3ldk0_rl00_goto_passageway_trgchk()
{
	// Line 1913, Address: 0x1ed6250, Func Offset: 0
	// Line 1916, Address: 0x1ed625c, Func Offset: 0xc
	// Func End, Address: 0x1ed6264, Func Offset: 0x14
	// Line 1139, Address: 0x1ed6250, Func Offset: 0
	// Line 1141, Address: 0x1ed6260, Func Offset: 0x10
	// Line 1143, Address: 0x1ed6264, Func Offset: 0x14
	// Line 1145, Address: 0x1ed626c, Func Offset: 0x1c
	// Line 1146, Address: 0x1ed6288, Func Offset: 0x38
	// Line 1147, Address: 0x1ed629c, Func Offset: 0x4c
	// Line 1149, Address: 0x1ed62a8, Func Offset: 0x58
	// Line 1148, Address: 0x1ed62ac, Func Offset: 0x5c
	// Line 1149, Address: 0x1ed62b0, Func Offset: 0x60
	// Func End, Address: 0x1ed62c0, Func Offset: 0x70
}

// 
// Start address: 0x1ed6270
int ev_3ldk0_rl00_goto_passageway_end()
{
	// Line 1918, Address: 0x1ed6270, Func Offset: 0
	// Line 1921, Address: 0x1ed6278, Func Offset: 0x8
	// Line 1923, Address: 0x1ed6280, Func Offset: 0x10
	// Line 1924, Address: 0x1ed6288, Func Offset: 0x18
	// Line 1926, Address: 0x1ed6290, Func Offset: 0x20
	// Line 1925, Address: 0x1ed6294, Func Offset: 0x24
	// Line 1926, Address: 0x1ed6298, Func Offset: 0x28
	// Func End, Address: 0x1ed62a0, Func Offset: 0x30
}

// 
// Start address: 0x1ed62a0
void ev_3ldk0_rl00_2206_set_pos(sfObj* obj)
{
	_ev2206work* wk;
	float rl00_x_range[2][2];
	float rl01_x_range[2][2];
	int rand;
	// Line 1968, Address: 0x1ed62a0, Func Offset: 0
	// Line 1970, Address: 0x1ed62a4, Func Offset: 0x4
	// Line 1968, Address: 0x1ed62a8, Func Offset: 0x8
	// Line 1970, Address: 0x1ed62ac, Func Offset: 0xc
	// Line 1968, Address: 0x1ed62b0, Func Offset: 0x10
	// Line 1970, Address: 0x1ed62b4, Func Offset: 0x14
	// Line 1968, Address: 0x1ed62b8, Func Offset: 0x18
	// Line 1974, Address: 0x1ed62bc, Func Offset: 0x1c
	// Line 1968, Address: 0x1ed62c0, Func Offset: 0x20
	// Line 1974, Address: 0x1ed62c4, Func Offset: 0x24
	// Line 1969, Address: 0x1ed62c8, Func Offset: 0x28
	// Line 1970, Address: 0x1ed62cc, Func Offset: 0x2c
	// Line 1974, Address: 0x1ed62d0, Func Offset: 0x30
	// Line 1970, Address: 0x1ed62d8, Func Offset: 0x38
	// Line 1974, Address: 0x1ed62dc, Func Offset: 0x3c
	// Line 1981, Address: 0x1ed62e0, Func Offset: 0x40
	// Line 1974, Address: 0x1ed62e4, Func Offset: 0x44
	// Line 1981, Address: 0x1ed62ec, Func Offset: 0x4c
	// Line 1982, Address: 0x1ed62f4, Func Offset: 0x54
	// Line 1983, Address: 0x1ed630c, Func Offset: 0x6c
	// Line 1984, Address: 0x1ed6318, Func Offset: 0x78
	// Line 1983, Address: 0x1ed631c, Func Offset: 0x7c
	// Line 1984, Address: 0x1ed6320, Func Offset: 0x80
	// Line 1983, Address: 0x1ed6324, Func Offset: 0x84
	// Line 1985, Address: 0x1ed633c, Func Offset: 0x9c
	// Line 1986, Address: 0x1ed6348, Func Offset: 0xa8
	// Line 1987, Address: 0x1ed6354, Func Offset: 0xb4
	// Line 1988, Address: 0x1ed636c, Func Offset: 0xcc
	// Line 1989, Address: 0x1ed6378, Func Offset: 0xd8
	// Line 1988, Address: 0x1ed637c, Func Offset: 0xdc
	// Line 1989, Address: 0x1ed6380, Func Offset: 0xe0
	// Line 1988, Address: 0x1ed6384, Func Offset: 0xe4
	// Line 1989, Address: 0x1ed639c, Func Offset: 0xfc
	// Line 1993, Address: 0x1ed63a0, Func Offset: 0x100
	// Line 1996, Address: 0x1ed63b8, Func Offset: 0x118
	// Line 1999, Address: 0x1ed63c4, Func Offset: 0x124
	// Line 1998, Address: 0x1ed63c8, Func Offset: 0x128
	// Line 2000, Address: 0x1ed63cc, Func Offset: 0x12c
	// Line 2003, Address: 0x1ed63d8, Func Offset: 0x138
	// Line 2004, Address: 0x1ed63e0, Func Offset: 0x140
	// Line 2008, Address: 0x1ed63e8, Func Offset: 0x148
	// Line 2009, Address: 0x1ed6400, Func Offset: 0x160
	// Func End, Address: 0x1ed6418, Func Offset: 0x178
	// Line 290, Address: 0x1ed62a0, Func Offset: 0
	// Line 291, Address: 0x1ed62ac, Func Offset: 0xc
	// Line 293, Address: 0x1ed62b0, Func Offset: 0x10
	// Line 294, Address: 0x1ed62b8, Func Offset: 0x18
	// Line 295, Address: 0x1ed62c0, Func Offset: 0x20
	// Line 296, Address: 0x1ed62d4, Func Offset: 0x34
	// Line 298, Address: 0x1ed62d8, Func Offset: 0x38
	// Line 296, Address: 0x1ed62dc, Func Offset: 0x3c
	// Line 298, Address: 0x1ed62e0, Func Offset: 0x40
	// Line 296, Address: 0x1ed62e4, Func Offset: 0x44
	// Line 298, Address: 0x1ed62e8, Func Offset: 0x48
	// Line 296, Address: 0x1ed62ec, Func Offset: 0x4c
	// Line 298, Address: 0x1ed62f0, Func Offset: 0x50
	// Line 297, Address: 0x1ed62f8, Func Offset: 0x58
	// Line 299, Address: 0x1ed630c, Func Offset: 0x6c
	// Line 300, Address: 0x1ed6310, Func Offset: 0x70
	// Line 302, Address: 0x1ed6318, Func Offset: 0x78
	// Line 303, Address: 0x1ed6320, Func Offset: 0x80
	// Line 306, Address: 0x1ed6328, Func Offset: 0x88
	// Line 305, Address: 0x1ed632c, Func Offset: 0x8c
	// Line 306, Address: 0x1ed6330, Func Offset: 0x90
	// Func End, Address: 0x1ed633c, Func Offset: 0x9c
	// Line 946, Address: 0x1ed62a0, Func Offset: 0
	// Line 948, Address: 0x1ed62a4, Func Offset: 0x4
	// Line 946, Address: 0x1ed62a8, Func Offset: 0x8
	// Line 948, Address: 0x1ed62ac, Func Offset: 0xc
	// Line 949, Address: 0x1ed62b4, Func Offset: 0x14
	// Line 950, Address: 0x1ed62e0, Func Offset: 0x40
	// Line 951, Address: 0x1ed6300, Func Offset: 0x60
	// Func End, Address: 0x1ed630c, Func Offset: 0x6c
}

// 
// Start address: 0x1ed6420
void ev_3ldk0_rl00_2206_reset_moveunit(sfObj* obj)
{
	// Line 2017, Address: 0x1ed6420, Func Offset: 0
	// Line 2018, Address: 0x1ed642c, Func Offset: 0xc
	// Func End, Address: 0x1ed6434, Func Offset: 0x14
	// Line 538, Address: 0x1ed6420, Func Offset: 0
	// Line 567, Address: 0x1ed6424, Func Offset: 0x4
	// Line 538, Address: 0x1ed6428, Func Offset: 0x8
	// Line 567, Address: 0x1ed6438, Func Offset: 0x18
	// Line 569, Address: 0x1ed6440, Func Offset: 0x20
	// Line 570, Address: 0x1ed6448, Func Offset: 0x28
	// Line 574, Address: 0x1ed6450, Func Offset: 0x30
	// Line 575, Address: 0x1ed6464, Func Offset: 0x44
	// Line 576, Address: 0x1ed647c, Func Offset: 0x5c
	// Line 578, Address: 0x1ed6480, Func Offset: 0x60
	// Line 576, Address: 0x1ed6484, Func Offset: 0x64
	// Line 578, Address: 0x1ed6488, Func Offset: 0x68
	// Line 576, Address: 0x1ed648c, Func Offset: 0x6c
	// Line 578, Address: 0x1ed6490, Func Offset: 0x70
	// Line 576, Address: 0x1ed6494, Func Offset: 0x74
	// Line 578, Address: 0x1ed64a0, Func Offset: 0x80
	// Line 579, Address: 0x1ed64a8, Func Offset: 0x88
	// Line 580, Address: 0x1ed64bc, Func Offset: 0x9c
	// Line 583, Address: 0x1ed64c0, Func Offset: 0xa0
	// Line 586, Address: 0x1ed64c8, Func Offset: 0xa8
	// Line 585, Address: 0x1ed64cc, Func Offset: 0xac
	// Line 586, Address: 0x1ed64d0, Func Offset: 0xb0
	// Func End, Address: 0x1ed64e4, Func Offset: 0xc4
}

// 
// Start address: 0x1ed6440
void ev_3ldk0_rl00_2206_set_timer(sfObj* obj)
{
	_ev2206work* wk;
	// Line 2024, Address: 0x1ed6440, Func Offset: 0
	// Line 2028, Address: 0x1ed6450, Func Offset: 0x10
	// Line 2033, Address: 0x1ed6490, Func Offset: 0x50
	// Line 2035, Address: 0x1ed64d0, Func Offset: 0x90
	// Func End, Address: 0x1ed64e4, Func Offset: 0xa4
}

// 
// Start address: 0x1ed64f0
void ev_3ldk0_rl00_2206_moverot(sfObj* obj, float x, float y, float z)
{
	_ev2206work* wk;
	float rot_x[4];
	float rot_y[4];
	float rot_z[4];
	// Line 2041, Address: 0x1ed64f0, Func Offset: 0
	// Line 2047, Address: 0x1ed64f4, Func Offset: 0x4
	// Line 2041, Address: 0x1ed64f8, Func Offset: 0x8
	// Line 2047, Address: 0x1ed64fc, Func Offset: 0xc
	// Line 2041, Address: 0x1ed6500, Func Offset: 0x10
	// Line 2042, Address: 0x1ed650c, Func Offset: 0x1c
	// Line 2047, Address: 0x1ed6518, Func Offset: 0x28
	// Line 2048, Address: 0x1ed6520, Func Offset: 0x30
	// Line 2049, Address: 0x1ed6534, Func Offset: 0x44
	// Line 2050, Address: 0x1ed6548, Func Offset: 0x58
	// Line 2051, Address: 0x1ed6558, Func Offset: 0x68
	// Line 2052, Address: 0x1ed6568, Func Offset: 0x78
	// Line 2053, Address: 0x1ed6578, Func Offset: 0x88
	// Func End, Address: 0x1ed6590, Func Offset: 0xa0
	// Line 597, Address: 0x1ed64f0, Func Offset: 0
	// Func End, Address: 0x1ed64f8, Func Offset: 0x8
	// Line 1212, Address: 0x1ed64f0, Func Offset: 0
	// Line 1213, Address: 0x1ed64f4, Func Offset: 0x4
	// Line 1212, Address: 0x1ed64f8, Func Offset: 0x8
	// Line 1213, Address: 0x1ed64fc, Func Offset: 0xc
	// Line 1215, Address: 0x1ed6510, Func Offset: 0x20
	// Line 1216, Address: 0x1ed6518, Func Offset: 0x28
	// Func End, Address: 0x1ed6524, Func Offset: 0x34
}

// 
// Start address: 0x1ed6590
void ev_3ldk0_rl00_2206_set_startrot(sfObj* obj, float x, float y, float z)
{
	// Line 2059, Address: 0x1ed6590, Func Offset: 0
	// Line 2062, Address: 0x1ed6594, Func Offset: 0x4
	// Line 2059, Address: 0x1ed6598, Func Offset: 0x8
	// Line 2062, Address: 0x1ed659c, Func Offset: 0xc
	// Line 2059, Address: 0x1ed65a0, Func Offset: 0x10
	// Line 2062, Address: 0x1ed65b4, Func Offset: 0x24
	// Line 2063, Address: 0x1ed65cc, Func Offset: 0x3c
	// Line 2064, Address: 0x1ed65e0, Func Offset: 0x50
	// Func End, Address: 0x1ed65fc, Func Offset: 0x6c
}

// 
// Start address: 0x1ed6600
int ev_3ldk0_rl00_2206_move(sfObj* obj)
{
	_ev2206work* wk;
	int ret;
	// Line 2070, Address: 0x1ed6600, Func Offset: 0
	// Line 2071, Address: 0x1ed6610, Func Offset: 0x10
	// Line 2076, Address: 0x1ed6614, Func Offset: 0x14
	// Line 2077, Address: 0x1ed6620, Func Offset: 0x20
	// Line 2078, Address: 0x1ed6630, Func Offset: 0x30
	// Line 2079, Address: 0x1ed6640, Func Offset: 0x40
	// Line 2080, Address: 0x1ed6644, Func Offset: 0x44
	// Line 2082, Address: 0x1ed6648, Func Offset: 0x48
	// Line 2083, Address: 0x1ed6664, Func Offset: 0x64
	// Line 2085, Address: 0x1ed6670, Func Offset: 0x70
	// Line 2086, Address: 0x1ed6680, Func Offset: 0x80
	// Line 2087, Address: 0x1ed6690, Func Offset: 0x90
	// Line 2088, Address: 0x1ed6694, Func Offset: 0x94
	// Line 2090, Address: 0x1ed6698, Func Offset: 0x98
	// Line 2091, Address: 0x1ed66d4, Func Offset: 0xd4
	// Line 2094, Address: 0x1ed66d8, Func Offset: 0xd8
	// Line 2096, Address: 0x1ed66e0, Func Offset: 0xe0
	// Line 2094, Address: 0x1ed66e4, Func Offset: 0xe4
	// Line 2097, Address: 0x1ed66f0, Func Offset: 0xf0
	// Func End, Address: 0x1ed6704, Func Offset: 0x104
}

// 
// Start address: 0x1ed6710
int ev_3ldk0_rl00_2206_init(sfObj* obj)
{
	_ev2206work* wk;
	// Line 2100, Address: 0x1ed6710, Func Offset: 0
	// Line 2103, Address: 0x1ed6714, Func Offset: 0x4
	// Line 2100, Address: 0x1ed6718, Func Offset: 0x8
	// Line 2103, Address: 0x1ed6728, Func Offset: 0x18
	// Line 2104, Address: 0x1ed6734, Func Offset: 0x24
	// Line 2106, Address: 0x1ed6738, Func Offset: 0x28
	// Line 2107, Address: 0x1ed6764, Func Offset: 0x54
	// Line 2108, Address: 0x1ed6770, Func Offset: 0x60
	// Line 2109, Address: 0x1ed677c, Func Offset: 0x6c
	// Line 2110, Address: 0x1ed6784, Func Offset: 0x74
	// Line 2113, Address: 0x1ed678c, Func Offset: 0x7c
	// Line 2119, Address: 0x1ed67b8, Func Offset: 0xa8
	// Line 2118, Address: 0x1ed67bc, Func Offset: 0xac
	// Line 2119, Address: 0x1ed67c0, Func Offset: 0xb0
	// Func End, Address: 0x1ed67d4, Func Offset: 0xc4
	// Line 822, Address: 0x1ed6710, Func Offset: 0
	// Line 825, Address: 0x1ed6724, Func Offset: 0x14
	// Line 828, Address: 0x1ed6750, Func Offset: 0x40
	// Line 830, Address: 0x1ed676c, Func Offset: 0x5c
	// Line 831, Address: 0x1ed6778, Func Offset: 0x68
	// Line 834, Address: 0x1ed6784, Func Offset: 0x74
	// Line 835, Address: 0x1ed6788, Func Offset: 0x78
	// Line 839, Address: 0x1ed6798, Func Offset: 0x88
	// Line 843, Address: 0x1ed67a4, Func Offset: 0x94
	// Line 844, Address: 0x1ed67b8, Func Offset: 0xa8
	// Line 848, Address: 0x1ed67d0, Func Offset: 0xc0
	// Line 850, Address: 0x1ed67d8, Func Offset: 0xc8
	// Line 855, Address: 0x1ed67e0, Func Offset: 0xd0
	// Line 857, Address: 0x1ed6804, Func Offset: 0xf4
	// Line 858, Address: 0x1ed680c, Func Offset: 0xfc
	// Line 860, Address: 0x1ed6814, Func Offset: 0x104
	// Line 861, Address: 0x1ed6818, Func Offset: 0x108
	// Line 862, Address: 0x1ed6828, Func Offset: 0x118
	// Line 863, Address: 0x1ed6830, Func Offset: 0x120
	// Line 865, Address: 0x1ed6838, Func Offset: 0x128
	// Line 869, Address: 0x1ed6840, Func Offset: 0x130
	// Line 870, Address: 0x1ed6850, Func Offset: 0x140
	// Line 872, Address: 0x1ed6858, Func Offset: 0x148
	// Line 875, Address: 0x1ed6860, Func Offset: 0x150
	// Line 876, Address: 0x1ed6868, Func Offset: 0x158
	// Line 878, Address: 0x1ed686c, Func Offset: 0x15c
	// Line 880, Address: 0x1ed6870, Func Offset: 0x160
	// Line 881, Address: 0x1ed6874, Func Offset: 0x164
	// Func End, Address: 0x1ed6888, Func Offset: 0x178
	// Line 351, Address: 0x1ed6710, Func Offset: 0
	// Line 353, Address: 0x1ed6714, Func Offset: 0x4
	// Line 351, Address: 0x1ed6718, Func Offset: 0x8
	// Line 353, Address: 0x1ed6724, Func Offset: 0x14
	// Line 354, Address: 0x1ed672c, Func Offset: 0x1c
	// Line 355, Address: 0x1ed6734, Func Offset: 0x24
	// Func End, Address: 0x1ed6744, Func Offset: 0x34
	// Line 1272, Address: 0x1ed6710, Func Offset: 0
	// Line 1273, Address: 0x1ed6714, Func Offset: 0x4
	// Line 1272, Address: 0x1ed6718, Func Offset: 0x8
	// Line 1273, Address: 0x1ed671c, Func Offset: 0xc
	// Line 1275, Address: 0x1ed6728, Func Offset: 0x18
	// Line 1276, Address: 0x1ed6730, Func Offset: 0x20
	// Func End, Address: 0x1ed673c, Func Offset: 0x2c
}

// 
// Start address: 0x1ed67e0
int ev_3ldk0_rl00_2206_exec(sfObj* obj)
{
	_ev2206work* wk;
	// Line 2121, Address: 0x1ed67e0, Func Offset: 0
	// Line 2124, Address: 0x1ed67e4, Func Offset: 0x4
	// Line 2121, Address: 0x1ed67e8, Func Offset: 0x8
	// Line 2124, Address: 0x1ed67f4, Func Offset: 0x14
	// Line 2122, Address: 0x1ed67f8, Func Offset: 0x18
	// Line 2124, Address: 0x1ed67fc, Func Offset: 0x1c
	// Line 2125, Address: 0x1ed6814, Func Offset: 0x34
	// Line 2127, Address: 0x1ed6818, Func Offset: 0x38
	// Line 2128, Address: 0x1ed6828, Func Offset: 0x48
	// Line 2130, Address: 0x1ed6830, Func Offset: 0x50
	// Line 2132, Address: 0x1ed6838, Func Offset: 0x58
	// Line 2133, Address: 0x1ed6848, Func Offset: 0x68
	// Line 2134, Address: 0x1ed684c, Func Offset: 0x6c
	// Line 2133, Address: 0x1ed6850, Func Offset: 0x70
	// Line 2134, Address: 0x1ed6854, Func Offset: 0x74
	// Line 2135, Address: 0x1ed685c, Func Offset: 0x7c
	// Line 2136, Address: 0x1ed6864, Func Offset: 0x84
	// Line 2138, Address: 0x1ed686c, Func Offset: 0x8c
	// Line 2143, Address: 0x1ed6898, Func Offset: 0xb8
	// Line 2146, Address: 0x1ed689c, Func Offset: 0xbc
	// Line 2148, Address: 0x1ed68a0, Func Offset: 0xc0
	// Line 2147, Address: 0x1ed68a8, Func Offset: 0xc8
	// Line 2148, Address: 0x1ed68ac, Func Offset: 0xcc
	// Func End, Address: 0x1ed68b8, Func Offset: 0xd8
	// Line 72, Address: 0x1ed67e0, Func Offset: 0
	// Func End, Address: 0x1ed67fc, Func Offset: 0x1c
}

// 
// Start address: 0x1ed68c0
int ev_3ldk0_rl00_2206_draw(sfObj* obj)
{
	_ev2206work* wk;
	// Line 2170, Address: 0x1ed68c0, Func Offset: 0
	// Line 2173, Address: 0x1ed68c4, Func Offset: 0x4
	// Line 2170, Address: 0x1ed68c8, Func Offset: 0x8
	// Line 2173, Address: 0x1ed68d4, Func Offset: 0x14
	// Line 2171, Address: 0x1ed68d8, Func Offset: 0x18
	// Line 2173, Address: 0x1ed68dc, Func Offset: 0x1c
	// Line 2174, Address: 0x1ed68e4, Func Offset: 0x24
	// Line 2175, Address: 0x1ed68f0, Func Offset: 0x30
	// Line 2176, Address: 0x1ed68fc, Func Offset: 0x3c
	// Line 2181, Address: 0x1ed6908, Func Offset: 0x48
	// Line 2183, Address: 0x1ed6910, Func Offset: 0x50
	// Line 2186, Address: 0x1ed6918, Func Offset: 0x58
	// Line 2185, Address: 0x1ed6920, Func Offset: 0x60
	// Line 2186, Address: 0x1ed6924, Func Offset: 0x64
	// Func End, Address: 0x1ed6930, Func Offset: 0x70
}

// 
// Start address: 0x1ed6930
int ev_3ldk0_rl00_2206_end(sfObj* obj)
{
	// Line 2188, Address: 0x1ed6930, Func Offset: 0
	// Line 2191, Address: 0x1ed6938, Func Offset: 0x8
	// Line 2193, Address: 0x1ed6944, Func Offset: 0x14
	// Line 2192, Address: 0x1ed6948, Func Offset: 0x18
	// Line 2193, Address: 0x1ed694c, Func Offset: 0x1c
	// Func End, Address: 0x1ed6954, Func Offset: 0x24
	// Line 579, Address: 0x1ed6930, Func Offset: 0
	// Line 580, Address: 0x1ed6934, Func Offset: 0x4
	// Line 579, Address: 0x1ed6938, Func Offset: 0x8
	// Line 581, Address: 0x1ed6944, Func Offset: 0x14
	// Func End, Address: 0x1ed694c, Func Offset: 0x1c
	// Line 1371, Address: 0x1ed6930, Func Offset: 0
	// Line 1372, Address: 0x1ed694c, Func Offset: 0x1c
	// Line 1375, Address: 0x1ed6958, Func Offset: 0x28
	// Line 1372, Address: 0x1ed695c, Func Offset: 0x2c
	// Line 1375, Address: 0x1ed6960, Func Offset: 0x30
	// Line 1379, Address: 0x1ed699c, Func Offset: 0x6c
	// Line 1380, Address: 0x1ed69a8, Func Offset: 0x78
	// Line 1382, Address: 0x1ed69c8, Func Offset: 0x98
	// Line 1384, Address: 0x1ed69e0, Func Offset: 0xb0
	// Func End, Address: 0x1ed69fc, Func Offset: 0xcc
}

// 
// Start address: 0x1ed6960
void bg_init(_anon0* img)
{
	// Line 2279, Address: 0x1ed6960, Func Offset: 0
	// Line 2280, Address: 0x1ed6964, Func Offset: 0x4
	// Line 2279, Address: 0x1ed6968, Func Offset: 0x8
	// Line 2280, Address: 0x1ed6970, Func Offset: 0x10
	// Line 2281, Address: 0x1ed6978, Func Offset: 0x18
	// Line 2282, Address: 0x1ed6998, Func Offset: 0x38
	// Line 2283, Address: 0x1ed69b4, Func Offset: 0x54
	// Line 2284, Address: 0x1ed69c4, Func Offset: 0x64
	// Line 2285, Address: 0x1ed69dc, Func Offset: 0x7c
	// Func End, Address: 0x1ed69ec, Func Offset: 0x8c
	// Line 971, Address: 0x1ed6960, Func Offset: 0
	// Line 972, Address: 0x1ed6964, Func Offset: 0x4
	// Line 971, Address: 0x1ed6968, Func Offset: 0x8
	// Line 972, Address: 0x1ed696c, Func Offset: 0xc
	// Line 973, Address: 0x1ed6980, Func Offset: 0x20
	// Line 976, Address: 0x1ed6988, Func Offset: 0x28
	// Line 979, Address: 0x1ed6990, Func Offset: 0x30
	// Func End, Address: 0x1ed699c, Func Offset: 0x3c
}

// 
// Start address: 0x1ed69f0
void button_img_init(_anon0* img)
{
	// Line 2288, Address: 0x1ed69f0, Func Offset: 0
	// Line 2289, Address: 0x1ed69f4, Func Offset: 0x4
	// Line 2288, Address: 0x1ed69f8, Func Offset: 0x8
	// Line 2289, Address: 0x1ed6a00, Func Offset: 0x10
	// Line 2290, Address: 0x1ed6a08, Func Offset: 0x18
	// Line 2291, Address: 0x1ed6a10, Func Offset: 0x20
	// Line 2292, Address: 0x1ed6a2c, Func Offset: 0x3c
	// Line 2293, Address: 0x1ed6a48, Func Offset: 0x58
	// Line 2294, Address: 0x1ed6a58, Func Offset: 0x68
	// Line 2295, Address: 0x1ed6a70, Func Offset: 0x80
	// Func End, Address: 0x1ed6a80, Func Offset: 0x90
}

// 
// Start address: 0x1ed6a80
void cursor_init(_anon0* img, float x, float y)
{
	// Line 2298, Address: 0x1ed6a80, Func Offset: 0
	// Line 2299, Address: 0x1ed6a84, Func Offset: 0x4
	// Line 2298, Address: 0x1ed6a88, Func Offset: 0x8
	// Line 2299, Address: 0x1ed6aa0, Func Offset: 0x20
	// Line 2300, Address: 0x1ed6aa8, Func Offset: 0x28
	// Line 2301, Address: 0x1ed6ac4, Func Offset: 0x44
	// Line 2302, Address: 0x1ed6ad4, Func Offset: 0x54
	// Line 2304, Address: 0x1ed6aec, Func Offset: 0x6c
	// Line 2305, Address: 0x1ed6afc, Func Offset: 0x7c
	// Line 2306, Address: 0x1ed6b18, Func Offset: 0x98
	// Line 2307, Address: 0x1ed6b28, Func Offset: 0xa8
	// Line 2308, Address: 0x1ed6b44, Func Offset: 0xc4
	// Func End, Address: 0x1ed6b5c, Func Offset: 0xdc
	// Line 1402, Address: 0x1ed6a80, Func Offset: 0
	// Line 1405, Address: 0x1ed6a84, Func Offset: 0x4
	// Line 1402, Address: 0x1ed6a88, Func Offset: 0x8
	// Line 1405, Address: 0x1ed6a94, Func Offset: 0x14
	// Line 1404, Address: 0x1ed6a98, Func Offset: 0x18
	// Line 1405, Address: 0x1ed6a9c, Func Offset: 0x1c
	// Line 1406, Address: 0x1ed6ab4, Func Offset: 0x34
	// Line 1408, Address: 0x1ed6ab8, Func Offset: 0x38
	// Line 1411, Address: 0x1ed6ad4, Func Offset: 0x54
	// Line 1412, Address: 0x1ed6adc, Func Offset: 0x5c
	// Line 1413, Address: 0x1ed6ae4, Func Offset: 0x64
	// Line 1412, Address: 0x1ed6ae8, Func Offset: 0x68
	// Line 1414, Address: 0x1ed6aec, Func Offset: 0x6c
	// Line 1415, Address: 0x1ed6b10, Func Offset: 0x90
	// Line 1416, Address: 0x1ed6b24, Func Offset: 0xa4
	// Line 1418, Address: 0x1ed6b30, Func Offset: 0xb0
	// Line 1419, Address: 0x1ed6b38, Func Offset: 0xb8
	// Line 1422, Address: 0x1ed6b44, Func Offset: 0xc4
	// Line 1424, Address: 0x1ed6b48, Func Offset: 0xc8
	// Line 1423, Address: 0x1ed6b50, Func Offset: 0xd0
	// Line 1424, Address: 0x1ed6b54, Func Offset: 0xd4
	// Func End, Address: 0x1ed6b60, Func Offset: 0xe0
}

// 
// Start address: 0x1ed6b60
void bg_draw(_anon0* img)
{
	_anon1* tex;
	unsigned int cbp;
	// Line 2311, Address: 0x1ed6b60, Func Offset: 0
	// Line 2312, Address: 0x1ed6b64, Func Offset: 0x4
	// Line 2311, Address: 0x1ed6b68, Func Offset: 0x8
	// Line 2312, Address: 0x1ed6b6c, Func Offset: 0xc
	// Line 2311, Address: 0x1ed6b70, Func Offset: 0x10
	// Line 2312, Address: 0x1ed6b7c, Func Offset: 0x1c
	// Line 2313, Address: 0x1ed6b8c, Func Offset: 0x2c
	// Line 2315, Address: 0x1ed6ba0, Func Offset: 0x40
	// Line 2316, Address: 0x1ed6bb8, Func Offset: 0x58
	// Line 2317, Address: 0x1ed6bcc, Func Offset: 0x6c
	// Line 2318, Address: 0x1ed6bd8, Func Offset: 0x78
	// Func End, Address: 0x1ed6bf0, Func Offset: 0x90
	// Line 1426, Address: 0x1ed6b60, Func Offset: 0
	// Line 1428, Address: 0x1ed6b64, Func Offset: 0x4
	// Line 1426, Address: 0x1ed6b68, Func Offset: 0x8
	// Line 1428, Address: 0x1ed6b70, Func Offset: 0x10
	// Line 1430, Address: 0x1ed6b7c, Func Offset: 0x1c
	// Line 1431, Address: 0x1ed6b84, Func Offset: 0x24
	// Line 1430, Address: 0x1ed6b88, Func Offset: 0x28
	// Line 1432, Address: 0x1ed6b8c, Func Offset: 0x2c
	// Func End, Address: 0x1ed6b9c, Func Offset: 0x3c
}

// 
// Start address: 0x1ed6bf0
void button_img_draw(_anon0* img, int pushed_number)
{
	_anon1* tex;
	unsigned int cbp;
	_anon2* p_xy;
	float u;
	_anon2 pos[12];
	// Line 2321, Address: 0x1ed6bf0, Func Offset: 0
	// Line 2340, Address: 0x1ed6bf4, Func Offset: 0x4
	// Line 2321, Address: 0x1ed6bf8, Func Offset: 0x8
	// Line 2340, Address: 0x1ed6c10, Func Offset: 0x20
	// Line 2341, Address: 0x1ed6c18, Func Offset: 0x28
	// Line 2342, Address: 0x1ed6c2c, Func Offset: 0x3c
	// Line 2345, Address: 0x1ed6c40, Func Offset: 0x50
	// Line 2343, Address: 0x1ed6c44, Func Offset: 0x54
	// Line 2345, Address: 0x1ed6c50, Func Offset: 0x60
	// Line 2343, Address: 0x1ed6c54, Func Offset: 0x64
	// Line 2345, Address: 0x1ed6c58, Func Offset: 0x68
	// Line 2346, Address: 0x1ed6c68, Func Offset: 0x78
	// Line 2365, Address: 0x1ed6c7c, Func Offset: 0x8c
	// Line 2366, Address: 0x1ed6cac, Func Offset: 0xbc
	// Line 2369, Address: 0x1ed6cc8, Func Offset: 0xd8
	// Line 2372, Address: 0x1ed6cd4, Func Offset: 0xe4
	// Line 2369, Address: 0x1ed6cd8, Func Offset: 0xe8
	// Line 2372, Address: 0x1ed6cdc, Func Offset: 0xec
	// Line 2382, Address: 0x1ed6d00, Func Offset: 0x110
	// Line 2383, Address: 0x1ed6d10, Func Offset: 0x120
	// Line 2385, Address: 0x1ed6d18, Func Offset: 0x128
	// Line 2386, Address: 0x1ed6d20, Func Offset: 0x130
	// Line 2388, Address: 0x1ed6d28, Func Offset: 0x138
	// Line 2389, Address: 0x1ed6d30, Func Offset: 0x140
	// Line 2391, Address: 0x1ed6d38, Func Offset: 0x148
	// Line 2395, Address: 0x1ed6d40, Func Offset: 0x150
	// Line 2396, Address: 0x1ed6d88, Func Offset: 0x198
	// Line 2398, Address: 0x1ed6d94, Func Offset: 0x1a4
	// Line 2399, Address: 0x1ed6d98, Func Offset: 0x1a8
	// Func End, Address: 0x1ed6db4, Func Offset: 0x1c4
	// Line 1449, Address: 0x1ed6bf0, Func Offset: 0
	// Line 1452, Address: 0x1ed6bf4, Func Offset: 0x4
	// Line 1449, Address: 0x1ed6bf8, Func Offset: 0x8
	// Line 1451, Address: 0x1ed6c00, Func Offset: 0x10
	// Line 1452, Address: 0x1ed6c08, Func Offset: 0x18
	// Line 1453, Address: 0x1ed6c10, Func Offset: 0x20
	// Line 1455, Address: 0x1ed6c18, Func Offset: 0x28
	// Line 1458, Address: 0x1ed6c20, Func Offset: 0x30
	// Line 1457, Address: 0x1ed6c28, Func Offset: 0x38
	// Line 1458, Address: 0x1ed6c2c, Func Offset: 0x3c
	// Func End, Address: 0x1ed6c34, Func Offset: 0x44
}

// 
// Start address: 0x1ed6dc0
void cursor_draw(_anon0* img)
{
	_anon1* tex;
	unsigned int cbp;
	// Line 2402, Address: 0x1ed6dc0, Func Offset: 0
	// Line 2403, Address: 0x1ed6dc4, Func Offset: 0x4
	// Line 2402, Address: 0x1ed6dc8, Func Offset: 0x8
	// Line 2403, Address: 0x1ed6dcc, Func Offset: 0xc
	// Line 2402, Address: 0x1ed6dd0, Func Offset: 0x10
	// Line 2403, Address: 0x1ed6ddc, Func Offset: 0x1c
	// Line 2404, Address: 0x1ed6dec, Func Offset: 0x2c
	// Line 2406, Address: 0x1ed6e00, Func Offset: 0x40
	// Line 2407, Address: 0x1ed6e18, Func Offset: 0x58
	// Line 2408, Address: 0x1ed6e2c, Func Offset: 0x6c
	// Line 2409, Address: 0x1ed6e38, Func Offset: 0x78
	// Func End, Address: 0x1ed6e50, Func Offset: 0x90
}

// 
// Start address: 0x1ed6e50
void cursor_set_xy(_anon0* img, float x, float y)
{
	// Line 2413, Address: 0x1ed6e50, Func Offset: 0
	// Func End, Address: 0x1ed6e64, Func Offset: 0x14
}

// 
// Start address: 0x1ed6e70
void pausefunc_ev_panel_init()
{
	// Line 2422, Address: 0x1ed6e70, Func Offset: 0
	// Line 2428, Address: 0x1ed6e74, Func Offset: 0x4
	// Line 2422, Address: 0x1ed6e78, Func Offset: 0x8
	// Line 2428, Address: 0x1ed6e7c, Func Offset: 0xc
	// Line 2431, Address: 0x1ed6e8c, Func Offset: 0x1c
	// Line 2432, Address: 0x1ed6ea8, Func Offset: 0x38
	// Line 2434, Address: 0x1ed6ec4, Func Offset: 0x54
	// Line 2439, Address: 0x1ed6ec8, Func Offset: 0x58
	// Line 2434, Address: 0x1ed6ecc, Func Offset: 0x5c
	// Line 2435, Address: 0x1ed6ed0, Func Offset: 0x60
	// Line 2439, Address: 0x1ed6ed8, Func Offset: 0x68
	// Line 2435, Address: 0x1ed6edc, Func Offset: 0x6c
	// Line 2436, Address: 0x1ed6ee0, Func Offset: 0x70
	// Line 2439, Address: 0x1ed6ee4, Func Offset: 0x74
	// Line 2440, Address: 0x1ed6eec, Func Offset: 0x7c
	// Line 2441, Address: 0x1ed6ef8, Func Offset: 0x88
	// Line 2442, Address: 0x1ed6f14, Func Offset: 0xa4
	// Func End, Address: 0x1ed6f20, Func Offset: 0xb0
	// Line 1569, Address: 0x1ed6e70, Func Offset: 0
	// Line 1570, Address: 0x1ed6e80, Func Offset: 0x10
	// Line 1573, Address: 0x1ed6e88, Func Offset: 0x18
	// Line 1575, Address: 0x1ed6e98, Func Offset: 0x28
	// Line 1578, Address: 0x1ed6ea0, Func Offset: 0x30
	// Line 1581, Address: 0x1ed6ea8, Func Offset: 0x38
	// Func End, Address: 0x1ed6eb8, Func Offset: 0x48
}

// 
// Start address: 0x1ed6f20
void pausefunc_ev_panel_draw()
{
	_anon4* wk;
	int i;
	int val;
	int mes_id;
	char buf[16];
	// Line 2445, Address: 0x1ed6f20, Func Offset: 0
	// Line 2451, Address: 0x1ed6f24, Func Offset: 0x4
	// Line 2445, Address: 0x1ed6f28, Func Offset: 0x8
	// Line 2451, Address: 0x1ed6f2c, Func Offset: 0xc
	// Line 2445, Address: 0x1ed6f30, Func Offset: 0x10
	// Line 2447, Address: 0x1ed6f38, Func Offset: 0x18
	// Line 2445, Address: 0x1ed6f3c, Func Offset: 0x1c
	// Line 2447, Address: 0x1ed6f40, Func Offset: 0x20
	// Line 2451, Address: 0x1ed6f44, Func Offset: 0x24
	// Line 2452, Address: 0x1ed6f4c, Func Offset: 0x2c
	// Line 2454, Address: 0x1ed6f60, Func Offset: 0x40
	// Line 2456, Address: 0x1ed6f74, Func Offset: 0x54
	// Line 2458, Address: 0x1ed6f84, Func Offset: 0x64
	// Line 2459, Address: 0x1ed6f9c, Func Offset: 0x7c
	// Line 2461, Address: 0x1ed6fa4, Func Offset: 0x84
	// Line 2462, Address: 0x1ed6fbc, Func Offset: 0x9c
	// Line 2468, Address: 0x1ed6fc8, Func Offset: 0xa8
	// Line 2470, Address: 0x1ed6fd8, Func Offset: 0xb8
	// Line 2471, Address: 0x1ed6fe0, Func Offset: 0xc0
	// Line 2473, Address: 0x1ed6fec, Func Offset: 0xcc
	// Line 2474, Address: 0x1ed6ff8, Func Offset: 0xd8
	// Line 2475, Address: 0x1ed7004, Func Offset: 0xe4
	// Line 2478, Address: 0x1ed7008, Func Offset: 0xe8
	// Line 2479, Address: 0x1ed7014, Func Offset: 0xf4
	// Line 2482, Address: 0x1ed7020, Func Offset: 0x100
	// Line 2479, Address: 0x1ed7028, Func Offset: 0x108
	// Line 2482, Address: 0x1ed702c, Func Offset: 0x10c
	// Line 2483, Address: 0x1ed7034, Func Offset: 0x114
	// Line 2485, Address: 0x1ed7038, Func Offset: 0x118
	// Line 2486, Address: 0x1ed7040, Func Offset: 0x120
	// Func End, Address: 0x1ed705c, Func Offset: 0x13c
	// Line 980, Address: 0x1ed6f20, Func Offset: 0
	// Line 982, Address: 0x1ed6f30, Func Offset: 0x10
	// Line 983, Address: 0x1ed6f3c, Func Offset: 0x1c
	// Line 984, Address: 0x1ed6f74, Func Offset: 0x54
	// Line 985, Address: 0x1ed6f78, Func Offset: 0x58
	// Line 986, Address: 0x1ed6f84, Func Offset: 0x64
	// Line 988, Address: 0x1ed6fb0, Func Offset: 0x90
	// Line 989, Address: 0x1ed6fbc, Func Offset: 0x9c
	// Line 990, Address: 0x1ed6fc8, Func Offset: 0xa8
	// Line 989, Address: 0x1ed6fcc, Func Offset: 0xac
	// Line 990, Address: 0x1ed6fd0, Func Offset: 0xb0
	// Line 989, Address: 0x1ed6fd4, Func Offset: 0xb4
	// Line 990, Address: 0x1ed6fe0, Func Offset: 0xc0
	// Line 991, Address: 0x1ed6fe8, Func Offset: 0xc8
	// Line 993, Address: 0x1ed6ff0, Func Offset: 0xd0
	// Line 994, Address: 0x1ed6ffc, Func Offset: 0xdc
	// Line 995, Address: 0x1ed7004, Func Offset: 0xe4
	// Line 996, Address: 0x1ed700c, Func Offset: 0xec
	// Line 997, Address: 0x1ed7014, Func Offset: 0xf4
	// Line 998, Address: 0x1ed7020, Func Offset: 0x100
	// Line 997, Address: 0x1ed7024, Func Offset: 0x104
	// Line 998, Address: 0x1ed7030, Func Offset: 0x110
	// Line 999, Address: 0x1ed7038, Func Offset: 0x118
	// Line 1001, Address: 0x1ed7040, Func Offset: 0x120
	// Line 1002, Address: 0x1ed7050, Func Offset: 0x130
	// Line 1003, Address: 0x1ed7058, Func Offset: 0x138
	// Line 1005, Address: 0x1ed7060, Func Offset: 0x140
	// Line 1007, Address: 0x1ed7068, Func Offset: 0x148
	// Line 1008, Address: 0x1ed708c, Func Offset: 0x16c
	// Line 1009, Address: 0x1ed7098, Func Offset: 0x178
	// Line 1010, Address: 0x1ed70a4, Func Offset: 0x184
	// Line 1012, Address: 0x1ed70ac, Func Offset: 0x18c
	// Line 1013, Address: 0x1ed70b4, Func Offset: 0x194
	// Line 1014, Address: 0x1ed70b8, Func Offset: 0x198
	// Line 1015, Address: 0x1ed70c8, Func Offset: 0x1a8
	// Line 1017, Address: 0x1ed70e8, Func Offset: 0x1c8
	// Line 1018, Address: 0x1ed70f0, Func Offset: 0x1d0
	// Line 1021, Address: 0x1ed70f8, Func Offset: 0x1d8
	// Line 1023, Address: 0x1ed7124, Func Offset: 0x204
	// Line 1024, Address: 0x1ed7138, Func Offset: 0x218
	// Line 1025, Address: 0x1ed7150, Func Offset: 0x230
	// Line 1026, Address: 0x1ed7158, Func Offset: 0x238
	// Line 1027, Address: 0x1ed7160, Func Offset: 0x240
	// Line 1032, Address: 0x1ed716c, Func Offset: 0x24c
	// Line 1033, Address: 0x1ed7170, Func Offset: 0x250
	// Func End, Address: 0x1ed7184, Func Offset: 0x264
}

// 
// Start address: 0x1ed7060
int tel_miss()
{
	_anon4* wk;
	int ret;
	// Line 2490, Address: 0x1ed7060, Func Offset: 0
	// Line 2496, Address: 0x1ed7064, Func Offset: 0x4
	// Line 2490, Address: 0x1ed7068, Func Offset: 0x8
	// Line 2496, Address: 0x1ed706c, Func Offset: 0xc
	// Line 2490, Address: 0x1ed7070, Func Offset: 0x10
	// Line 2491, Address: 0x1ed707c, Func Offset: 0x1c
	// Line 2496, Address: 0x1ed7080, Func Offset: 0x20
	// Line 2491, Address: 0x1ed7084, Func Offset: 0x24
	// Line 2496, Address: 0x1ed7088, Func Offset: 0x28
	// Line 2497, Address: 0x1ed70ac, Func Offset: 0x4c
	// Line 2498, Address: 0x1ed70b0, Func Offset: 0x50
	// Line 2499, Address: 0x1ed70b4, Func Offset: 0x54
	// Line 2500, Address: 0x1ed70bc, Func Offset: 0x5c
	// Line 2501, Address: 0x1ed70c4, Func Offset: 0x64
	// Line 2502, Address: 0x1ed70c8, Func Offset: 0x68
	// Line 2504, Address: 0x1ed70ec, Func Offset: 0x8c
	// Line 2507, Address: 0x1ed70f8, Func Offset: 0x98
	// Line 2508, Address: 0x1ed7104, Func Offset: 0xa4
	// Line 2510, Address: 0x1ed710c, Func Offset: 0xac
	// Line 2511, Address: 0x1ed7114, Func Offset: 0xb4
	// Line 2513, Address: 0x1ed7118, Func Offset: 0xb8
	// Line 2514, Address: 0x1ed7130, Func Offset: 0xd0
	// Line 2515, Address: 0x1ed7138, Func Offset: 0xd8
	// Line 2518, Address: 0x1ed713c, Func Offset: 0xdc
	// Line 2520, Address: 0x1ed7140, Func Offset: 0xe0
	// Line 2521, Address: 0x1ed7144, Func Offset: 0xe4
	// Func End, Address: 0x1ed715c, Func Offset: 0xfc
	// Line 303, Address: 0x1ed7060, Func Offset: 0
	// Line 304, Address: 0x1ed706c, Func Offset: 0xc
	// Line 306, Address: 0x1ed7070, Func Offset: 0x10
	// Line 307, Address: 0x1ed707c, Func Offset: 0x1c
	// Line 308, Address: 0x1ed7084, Func Offset: 0x24
	// Line 309, Address: 0x1ed7094, Func Offset: 0x34
	// Line 310, Address: 0x1ed70a4, Func Offset: 0x44
	// Line 311, Address: 0x1ed70ac, Func Offset: 0x4c
	// Line 312, Address: 0x1ed70b4, Func Offset: 0x54
	// Line 319, Address: 0x1ed70c8, Func Offset: 0x68
	// Line 318, Address: 0x1ed70d0, Func Offset: 0x70
	// Line 319, Address: 0x1ed70d4, Func Offset: 0x74
	// Func End, Address: 0x1ed70dc, Func Offset: 0x7c
}

// 
// Start address: 0x1ed7160
int tel_bar_strange()
{
	_anon4* wk;
	int ret;
	// Line 2525, Address: 0x1ed7160, Func Offset: 0
	// Line 2533, Address: 0x1ed7164, Func Offset: 0x4
	// Line 2525, Address: 0x1ed7168, Func Offset: 0x8
	// Line 2533, Address: 0x1ed716c, Func Offset: 0xc
	// Line 2525, Address: 0x1ed7170, Func Offset: 0x10
	// Line 2528, Address: 0x1ed7178, Func Offset: 0x18
	// Line 2533, Address: 0x1ed717c, Func Offset: 0x1c
	// Line 2528, Address: 0x1ed7180, Func Offset: 0x20
	// Line 2533, Address: 0x1ed7184, Func Offset: 0x24
	// Line 2535, Address: 0x1ed71b8, Func Offset: 0x58
	// Line 2536, Address: 0x1ed71c0, Func Offset: 0x60
	// Line 2537, Address: 0x1ed71d8, Func Offset: 0x78
	// Line 2539, Address: 0x1ed71e0, Func Offset: 0x80
	// Line 2541, Address: 0x1ed71fc, Func Offset: 0x9c
	// Line 2543, Address: 0x1ed7208, Func Offset: 0xa8
	// Line 2544, Address: 0x1ed7228, Func Offset: 0xc8
	// Line 2545, Address: 0x1ed7230, Func Offset: 0xd0
	// Line 2547, Address: 0x1ed7240, Func Offset: 0xe0
	// Line 2549, Address: 0x1ed7248, Func Offset: 0xe8
	// Line 2550, Address: 0x1ed7264, Func Offset: 0x104
	// Line 2551, Address: 0x1ed726c, Func Offset: 0x10c
	// Line 2552, Address: 0x1ed7274, Func Offset: 0x114
	// Line 2554, Address: 0x1ed728c, Func Offset: 0x12c
	// Line 2555, Address: 0x1ed7294, Func Offset: 0x134
	// Line 2556, Address: 0x1ed7298, Func Offset: 0x138
	// Line 2558, Address: 0x1ed72b4, Func Offset: 0x154
	// Line 2559, Address: 0x1ed72bc, Func Offset: 0x15c
	// Line 2561, Address: 0x1ed72c4, Func Offset: 0x164
	// Line 2562, Address: 0x1ed72cc, Func Offset: 0x16c
	// Line 2564, Address: 0x1ed72d0, Func Offset: 0x170
	// Line 2565, Address: 0x1ed72e8, Func Offset: 0x188
	// Line 2567, Address: 0x1ed72f0, Func Offset: 0x190
	// Line 2570, Address: 0x1ed72f4, Func Offset: 0x194
	// Line 2572, Address: 0x1ed72f8, Func Offset: 0x198
	// Line 2573, Address: 0x1ed72fc, Func Offset: 0x19c
	// Func End, Address: 0x1ed7310, Func Offset: 0x1b0
}

// 
// Start address: 0x1ed7310
int tel_bar_dontuse()
{
	_anon4* wk;
	int ret;
	// Line 2577, Address: 0x1ed7310, Func Offset: 0
	// Line 2585, Address: 0x1ed7314, Func Offset: 0x4
	// Line 2577, Address: 0x1ed7318, Func Offset: 0x8
	// Line 2580, Address: 0x1ed7324, Func Offset: 0x14
	// Line 2585, Address: 0x1ed7328, Func Offset: 0x18
	// Line 2580, Address: 0x1ed732c, Func Offset: 0x1c
	// Line 2585, Address: 0x1ed7330, Func Offset: 0x20
	// Line 2587, Address: 0x1ed7358, Func Offset: 0x48
	// Line 2588, Address: 0x1ed7360, Func Offset: 0x50
	// Line 2589, Address: 0x1ed7378, Func Offset: 0x68
	// Line 2591, Address: 0x1ed7380, Func Offset: 0x70
	// Line 2593, Address: 0x1ed739c, Func Offset: 0x8c
	// Line 2595, Address: 0x1ed73a8, Func Offset: 0x98
	// Line 2596, Address: 0x1ed73c8, Func Offset: 0xb8
	// Line 2597, Address: 0x1ed73fc, Func Offset: 0xec
	// Line 2599, Address: 0x1ed7404, Func Offset: 0xf4
	// Line 2600, Address: 0x1ed740c, Func Offset: 0xfc
	// Line 2601, Address: 0x1ed7410, Func Offset: 0x100
	// Line 2602, Address: 0x1ed742c, Func Offset: 0x11c
	// Line 2603, Address: 0x1ed7434, Func Offset: 0x124
	// Line 2605, Address: 0x1ed7448, Func Offset: 0x138
	// Line 2607, Address: 0x1ed7450, Func Offset: 0x140
	// Line 2608, Address: 0x1ed7484, Func Offset: 0x174
	// Line 2610, Address: 0x1ed748c, Func Offset: 0x17c
	// Line 2611, Address: 0x1ed7494, Func Offset: 0x184
	// Line 2612, Address: 0x1ed7498, Func Offset: 0x188
	// Line 2613, Address: 0x1ed74b4, Func Offset: 0x1a4
	// Line 2614, Address: 0x1ed74bc, Func Offset: 0x1ac
	// Line 2616, Address: 0x1ed74d0, Func Offset: 0x1c0
	// Line 2618, Address: 0x1ed74d8, Func Offset: 0x1c8
	// Line 2619, Address: 0x1ed750c, Func Offset: 0x1fc
	// Line 2621, Address: 0x1ed7514, Func Offset: 0x204
	// Line 2622, Address: 0x1ed751c, Func Offset: 0x20c
	// Line 2623, Address: 0x1ed7520, Func Offset: 0x210
	// Line 2624, Address: 0x1ed753c, Func Offset: 0x22c
	// Line 2625, Address: 0x1ed7544, Func Offset: 0x234
	// Line 2626, Address: 0x1ed754c, Func Offset: 0x23c
	// Line 2627, Address: 0x1ed7568, Func Offset: 0x258
	// Line 2629, Address: 0x1ed7570, Func Offset: 0x260
	// Line 2631, Address: 0x1ed7578, Func Offset: 0x268
	// Line 2632, Address: 0x1ed7594, Func Offset: 0x284
	// Line 2635, Address: 0x1ed7598, Func Offset: 0x288
	// Line 2633, Address: 0x1ed759c, Func Offset: 0x28c
	// Line 2640, Address: 0x1ed75a8, Func Offset: 0x298
	// Line 2641, Address: 0x1ed75ac, Func Offset: 0x29c
	// Func End, Address: 0x1ed75c0, Func Offset: 0x2b0
}

// 
// Start address: 0x1ed75c0
void pausefunc_ev_panel_main()
{
	int f_rtv;
	float x;
	float y;
	_anon4* wk;
	int id;
	// Line 2644, Address: 0x1ed75c0, Func Offset: 0
	// Line 2646, Address: 0x1ed75c4, Func Offset: 0x4
	// Line 2644, Address: 0x1ed75c8, Func Offset: 0x8
	// Line 2646, Address: 0x1ed75d0, Func Offset: 0x10
	// Line 2652, Address: 0x1ed75d8, Func Offset: 0x18
	// Line 2649, Address: 0x1ed75dc, Func Offset: 0x1c
	// Line 2652, Address: 0x1ed75e0, Func Offset: 0x20
	// Line 2647, Address: 0x1ed75e8, Func Offset: 0x28
	// Line 2649, Address: 0x1ed75ec, Func Offset: 0x2c
	// Line 2652, Address: 0x1ed75f0, Func Offset: 0x30
	// Line 2653, Address: 0x1ed7644, Func Offset: 0x84
	// Line 2654, Address: 0x1ed7648, Func Offset: 0x88
	// Line 2655, Address: 0x1ed766c, Func Offset: 0xac
	// Line 2656, Address: 0x1ed7674, Func Offset: 0xb4
	// Line 2659, Address: 0x1ed7684, Func Offset: 0xc4
	// Line 2660, Address: 0x1ed7688, Func Offset: 0xc8
	// Line 2661, Address: 0x1ed7698, Func Offset: 0xd8
	// Line 2663, Address: 0x1ed76a4, Func Offset: 0xe4
	// Line 2665, Address: 0x1ed76ac, Func Offset: 0xec
	// Line 2667, Address: 0x1ed76b0, Func Offset: 0xf0
	// Line 2668, Address: 0x1ed76c0, Func Offset: 0x100
	// Line 2670, Address: 0x1ed76d0, Func Offset: 0x110
	// Line 2671, Address: 0x1ed76e4, Func Offset: 0x124
	// Line 2673, Address: 0x1ed76f0, Func Offset: 0x130
	// Line 2675, Address: 0x1ed76fc, Func Offset: 0x13c
	// Line 2677, Address: 0x1ed7704, Func Offset: 0x144
	// Line 2678, Address: 0x1ed770c, Func Offset: 0x14c
	// Line 2696, Address: 0x1ed7710, Func Offset: 0x150
	// Line 2698, Address: 0x1ed7718, Func Offset: 0x158
	// Line 2699, Address: 0x1ed7720, Func Offset: 0x160
	// Line 2701, Address: 0x1ed7728, Func Offset: 0x168
	// Line 2703, Address: 0x1ed7738, Func Offset: 0x178
	// Line 2705, Address: 0x1ed774c, Func Offset: 0x18c
	// Line 2704, Address: 0x1ed7750, Func Offset: 0x190
	// Line 2705, Address: 0x1ed7754, Func Offset: 0x194
	// Line 2706, Address: 0x1ed7758, Func Offset: 0x198
	// Line 2707, Address: 0x1ed7760, Func Offset: 0x1a0
	// Line 2708, Address: 0x1ed7778, Func Offset: 0x1b8
	// Line 2709, Address: 0x1ed7780, Func Offset: 0x1c0
	// Line 2713, Address: 0x1ed7788, Func Offset: 0x1c8
	// Line 2715, Address: 0x1ed7790, Func Offset: 0x1d0
	// Line 2719, Address: 0x1ed7798, Func Offset: 0x1d8
	// Line 2721, Address: 0x1ed77b0, Func Offset: 0x1f0
	// Line 2720, Address: 0x1ed77b4, Func Offset: 0x1f4
	// Line 2721, Address: 0x1ed77b8, Func Offset: 0x1f8
	// Line 2722, Address: 0x1ed77bc, Func Offset: 0x1fc
	// Line 2726, Address: 0x1ed77c8, Func Offset: 0x208
	// Line 2729, Address: 0x1ed77d0, Func Offset: 0x210
	// Line 2730, Address: 0x1ed77d8, Func Offset: 0x218
	// Line 2732, Address: 0x1ed77e4, Func Offset: 0x224
	// Line 2733, Address: 0x1ed77e8, Func Offset: 0x228
	// Line 2736, Address: 0x1ed77f0, Func Offset: 0x230
	// Line 2740, Address: 0x1ed77f8, Func Offset: 0x238
	// Line 2741, Address: 0x1ed7808, Func Offset: 0x248
	// Line 2742, Address: 0x1ed780c, Func Offset: 0x24c
	// Line 2744, Address: 0x1ed7814, Func Offset: 0x254
	// Line 2747, Address: 0x1ed781c, Func Offset: 0x25c
	// Line 2748, Address: 0x1ed7820, Func Offset: 0x260
	// Line 2749, Address: 0x1ed7830, Func Offset: 0x270
	// Line 2750, Address: 0x1ed7834, Func Offset: 0x274
	// Line 2752, Address: 0x1ed783c, Func Offset: 0x27c
	// Line 2755, Address: 0x1ed7844, Func Offset: 0x284
	// Line 2756, Address: 0x1ed7848, Func Offset: 0x288
	// Line 2757, Address: 0x1ed7858, Func Offset: 0x298
	// Line 2758, Address: 0x1ed785c, Func Offset: 0x29c
	// Line 2760, Address: 0x1ed7864, Func Offset: 0x2a4
	// Line 2762, Address: 0x1ed786c, Func Offset: 0x2ac
	// Line 2763, Address: 0x1ed7870, Func Offset: 0x2b0
	// Line 2768, Address: 0x1ed78c8, Func Offset: 0x308
	// Line 2770, Address: 0x1ed78d8, Func Offset: 0x318
	// Line 2771, Address: 0x1ed78fc, Func Offset: 0x33c
	// Line 2773, Address: 0x1ed7904, Func Offset: 0x344
	// Line 2775, Address: 0x1ed790c, Func Offset: 0x34c
	// Line 2777, Address: 0x1ed7910, Func Offset: 0x350
	// Line 2778, Address: 0x1ed7920, Func Offset: 0x360
	// Line 2779, Address: 0x1ed7928, Func Offset: 0x368
	// Line 2780, Address: 0x1ed7930, Func Offset: 0x370
	// Line 2784, Address: 0x1ed7938, Func Offset: 0x378
	// Line 2786, Address: 0x1ed7944, Func Offset: 0x384
	// Line 2787, Address: 0x1ed7958, Func Offset: 0x398
	// Line 2788, Address: 0x1ed7960, Func Offset: 0x3a0
	// Line 2790, Address: 0x1ed7964, Func Offset: 0x3a4
	// Line 2793, Address: 0x1ed7968, Func Offset: 0x3a8
	// Line 2794, Address: 0x1ed7970, Func Offset: 0x3b0
	// Func End, Address: 0x1ed7984, Func Offset: 0x3c4
	// Line 1782, Address: 0x1ed75c0, Func Offset: 0
	// Func End, Address: 0x1ed75d4, Func Offset: 0x14
}

// 
// Start address: 0x1ed7990
int ev_3ldk0_phone_init(sfObj* obj)
{
	_EventInst* inst;
	// Line 2800, Address: 0x1ed7990, Func Offset: 0
	// Line 2801, Address: 0x1ed7998, Func Offset: 0x8
	// Line 2803, Address: 0x1ed79a0, Func Offset: 0x10
	// Line 2806, Address: 0x1ed79a8, Func Offset: 0x18
	// Line 2809, Address: 0x1ed79b4, Func Offset: 0x24
	// Line 2808, Address: 0x1ed79b8, Func Offset: 0x28
	// Line 2809, Address: 0x1ed79bc, Func Offset: 0x2c
	// Func End, Address: 0x1ed79c8, Func Offset: 0x38
}

// 
// Start address: 0x1ed79d0
int ev_3ldk0_phone_exec(sfObj* obj)
{
	int rtv;
	// Line 2812, Address: 0x1ed79d0, Func Offset: 0
	// Line 2815, Address: 0x1ed79d4, Func Offset: 0x4
	// Line 2812, Address: 0x1ed79d8, Func Offset: 0x8
	// Line 2815, Address: 0x1ed79e8, Func Offset: 0x18
	// Line 2817, Address: 0x1ed7a18, Func Offset: 0x48
	// Line 2818, Address: 0x1ed7a3c, Func Offset: 0x6c
	// Line 2819, Address: 0x1ed7a44, Func Offset: 0x74
	// Line 2823, Address: 0x1ed7a50, Func Offset: 0x80
	// Line 2824, Address: 0x1ed7a60, Func Offset: 0x90
	// Line 2825, Address: 0x1ed7a68, Func Offset: 0x98
	// Line 2826, Address: 0x1ed7a70, Func Offset: 0xa0
	// Line 2828, Address: 0x1ed7a7c, Func Offset: 0xac
	// Line 2830, Address: 0x1ed7a84, Func Offset: 0xb4
	// Line 2831, Address: 0x1ed7a88, Func Offset: 0xb8
	// Line 2832, Address: 0x1ed7a98, Func Offset: 0xc8
	// Line 2833, Address: 0x1ed7aa0, Func Offset: 0xd0
	// Line 2834, Address: 0x1ed7ac4, Func Offset: 0xf4
	// Line 2836, Address: 0x1ed7acc, Func Offset: 0xfc
	// Line 2838, Address: 0x1ed7ad4, Func Offset: 0x104
	// Line 2839, Address: 0x1ed7ad8, Func Offset: 0x108
	// Line 2840, Address: 0x1ed7ae8, Func Offset: 0x118
	// Line 2843, Address: 0x1ed7aec, Func Offset: 0x11c
	// Line 2845, Address: 0x1ed7af0, Func Offset: 0x120
	// Line 2846, Address: 0x1ed7af4, Func Offset: 0x124
	// Func End, Address: 0x1ed7b08, Func Offset: 0x138
}

// 
// Start address: 0x1ed7b10
int ev_3ldk0_phone_draw()
{
	// Line 2851, Address: 0x1ed7b10, Func Offset: 0
	// Func End, Address: 0x1ed7b18, Func Offset: 0x8
}

// 
// Start address: 0x1ed7b20
int ev_3ldk0_phone_end()
{
	_anon4* wk;
	// Line 2854, Address: 0x1ed7b20, Func Offset: 0
	// Line 2858, Address: 0x1ed7b24, Func Offset: 0x4
	// Line 2854, Address: 0x1ed7b28, Func Offset: 0x8
	// Line 2858, Address: 0x1ed7b30, Func Offset: 0x10
	// Line 2855, Address: 0x1ed7b34, Func Offset: 0x14
	// Line 2858, Address: 0x1ed7b38, Func Offset: 0x18
	// Line 2860, Address: 0x1ed7b40, Func Offset: 0x20
	// Line 2861, Address: 0x1ed7b50, Func Offset: 0x30
	// Line 2862, Address: 0x1ed7b58, Func Offset: 0x38
	// Line 2863, Address: 0x1ed7b60, Func Offset: 0x40
	// Line 2864, Address: 0x1ed7b70, Func Offset: 0x50
	// Line 2872, Address: 0x1ed7b78, Func Offset: 0x58
	// Line 2874, Address: 0x1ed7b80, Func Offset: 0x60
	// Line 2877, Address: 0x1ed7b88, Func Offset: 0x68
	// Line 2876, Address: 0x1ed7b8c, Func Offset: 0x6c
	// Line 2877, Address: 0x1ed7b90, Func Offset: 0x70
	// Func End, Address: 0x1ed7b9c, Func Offset: 0x7c
}

// 
// Start address: 0x1ed7ba0
int ev_3ldk0_phone_trgchk()
{
	// Line 2880, Address: 0x1ed7ba0, Func Offset: 0
	// Line 2882, Address: 0x1ed7ba8, Func Offset: 0x8
	// Line 2883, Address: 0x1ed7bbc, Func Offset: 0x1c
	// Line 2884, Address: 0x1ed7bc4, Func Offset: 0x24
	// Line 2886, Address: 0x1ed7bc8, Func Offset: 0x28
	// Line 2887, Address: 0x1ed7bd0, Func Offset: 0x30
	// Func End, Address: 0x1ed7bd8, Func Offset: 0x38
}

